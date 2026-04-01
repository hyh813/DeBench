"""
LLM Client with Configurable Providers

使用统一配置管理，支持多种 LLM 模型切换。
支持 GLM-4.7 (非流式 thinking) 和 Qwen3.5-Plus (流式 thinking)。
支持 API Key 自动切换（额度耗尽时切换到备用 Key）。
"""

from openai import OpenAI
import os
import sys
import json
import time
import re

# 添加项目根目录到路径
PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
sys.path.insert(0, PROJECT_ROOT)

from config.config_loader import get_llm_client_config


# ============================================================
# API Key 额度耗尽错误检测
# ============================================================

QUOTA_EXHAUSTED_PATTERNS = [
    r"Access denied",
    r"403",
    r"AllocationQuota",
    r"FreeTierOnly",
    r"Free allocated quota exceeded",
    r"quota exceeded",
    r"insufficient quota",
    r"Rate limit exceeded",  # 某些平台的限流也可能需要切换
    r"rate_limit_error",
    r"usage limit exceeded",
]

CONTEXT_EXCEEDED_PATTERNS = [
    r"context.?length",
    r"context.?window",
    r"context window exceeds limit",
    r"longer than.*context",
    r"exceeded.*max.*token",
    r"input tokens.*exceeded",
    r"max_prompt_tokens",
    r"maximum context",
    r"InvalidParameter: Range of input length should be"
]


def is_quota_exhausted_error(error: Exception) -> bool:
    """
    检测是否为额度耗尽或需要切换 Key 的错误。

    Args:
        error: 捕获的异常

    Returns:
        True 如果是额度耗尽错误，需要切换 Key
    """
    error_str = str(error)
    for pattern in QUOTA_EXHAUSTED_PATTERNS:
        if re.search(pattern, error_str, re.IGNORECASE):
            return True
    return False


def is_context_exceeded_error(error: Exception) -> bool:
    error_str = str(error)
    for pattern in CONTEXT_EXCEEDED_PATTERNS:
        if re.search(pattern, error_str, re.IGNORECASE):
            return True
    return False


class QuotaWindowExhaustedError(Exception):
    """Raised when a fixed-window coding plan is exhausted and should wait for reset."""
    pass


class LLMClient:
    def __init__(self, profile_name=None):
        """
        初始化 LLM 客户端。

        Args:
            profile_name: 可选，指定使用的配置 profile。
                          如果为 None，使用配置文件中的 active_profile。
                          如果设置了环境变量 LLM_PROFILE，优先使用环境变量。
        """
        # 优先使用环境变量
        if profile_name is None:
            profile_name = os.environ.get('LLM_PROFILE')

        # 加载配置
        self.config = get_llm_client_config(profile_name)
        self.profile_name = self.config.get('profile_name', 'unknown')

        # API Key 管理（循环切换机制）
        self.api_keys = self.config.get('api_keys', [])
        self.api_key_aliases = self.config.get('api_key_aliases', [])
        self.selected_key_alias = self.config.get('selected_key_alias')
        # 支持 LLM_KEY_INDEX 环境变量指定起始 Key（用于并行执行时分配不同 Key）
        key_index_env = os.environ.get('LLM_KEY_INDEX')
        if key_index_env is not None:
            idx = int(key_index_env)
            if 0 <= idx < len(self.api_keys):
                self.current_key_index = idx
            else:
                print(f"[LLMClient] Warning: LLM_KEY_INDEX={idx} out of range (0-{len(self.api_keys)-1}), using 0")
                self.current_key_index = 0
        else:
            self.current_key_index = 0
        self.current_round_failed = set()  # 本轮循环中失败的 key（非永久）
        self.keys_tried_in_round = 0       # 本轮已尝试的 key 数量

        # 其他配置
        self.base_url = self.config['base_url']
        self.model = self.config['model']
        self.enable_thinking = self.config.get('enable_thinking', False)
        self.temperature = self.config.get('temperature', 0)
        self.stream_for_thinking = self.config.get('stream_for_thinking', False)
        self.provider_type = self._detect_provider_type()

        # 初始化 OpenAI 客户端
        self.client = None
        self._init_client()

        print(f"[LLMClient] Using profile: {self.profile_name}, model: {self.model}, provider: {self.provider_type}")
        print(f"[LLMClient] Available API Keys: {len(self.api_keys)}")
        if self.api_key_aliases:
            print(f"[LLMClient] Key aliases: {', '.join(self.api_key_aliases)}")

    def _init_client(self):
        """使用当前 Key 初始化 OpenAI 客户端"""
        api_key = self.api_keys[self.current_key_index]
        self.client = OpenAI(
            api_key=api_key,
            base_url=self.base_url
        )
        key_preview = api_key[:10] + "..." if len(api_key) > 10 else api_key
        key_alias = None
        if self.current_key_index < len(self.api_key_aliases):
            key_alias = self.api_key_aliases[self.current_key_index]

        if key_alias:
            print(f"[LLMClient] Initialized with API Key #{self.current_key_index + 1} ({key_alias}): {key_preview}")
        else:
            print(f"[LLMClient] Initialized with API Key #{self.current_key_index + 1}: {key_preview}")

    def try_switch_key(self):
        """
        尝试切换到下一个 Key（循环切换机制）。

        逻辑：
        1. 将当前 key 标记为"本轮失败"
        2. 尝试找到下一个"本轮未失败"的 key
        3. 如果所有 key 都在本轮失败过，则判定为全部失败

        Returns:
            True 如果成功切换，False 如果所有 Key 本轮都已尝试过
        """
        # 标记当前 key 为本轮失败
        self.current_round_failed.add(self.current_key_index)
        self.keys_tried_in_round += 1

        # 检查是否所有 key 都尝试过了
        if len(self.current_round_failed) >= len(self.api_keys):
            print(f"[LLMClient] All {len(self.api_keys)} API Keys failed in this round")
            return False

        # 寻找下一个本轮未失败的 key
        for i in range(len(self.api_keys)):
            next_idx = (self.current_key_index + 1 + i) % len(self.api_keys)
            if next_idx not in self.current_round_failed:
                self.current_key_index = next_idx
                self._init_client()
                print(f"[LLMClient] Switched to API Key #{next_idx + 1} (round progress: {self.keys_tried_in_round}/{len(self.api_keys)})")
                return True

        return False

    def reset_round(self):
        """重置本轮失败记录（成功请求后调用）"""
        if self.current_round_failed:
            print(f"[LLMClient] Request succeeded, resetting round (previously failed: {len(self.current_round_failed)} keys)")
        self.current_round_failed.clear()
        self.keys_tried_in_round = 0

    def has_available_key(self):
        """检查本轮是否还有可用的 Key"""
        return len(self.current_round_failed) < len(self.api_keys)

    def should_fail_fast_on_quota(self, error: Exception) -> bool:
        """
        某些固定窗口额度的单 Key 渠道，不适合在客户端做指数退避。
        例如 minimax 官方 Coding Plan：已知是固定时间窗口重置，继续本地退避只会浪费时间。
        """
        if not is_quota_exhausted_error(error):
            return False
        return self.provider_type == 'minimax' and len(self.api_keys) == 1

    def _detect_provider_type(self):
        """根据 profile 名称和模型名称检测 provider 类型"""
        explicit_provider_type = self.config.get('provider_type')
        if explicit_provider_type:
            return explicit_provider_type

        # 优先按 profile 名称判断（处理同名模型不同平台的情况）
        profile = self.profile_name.lower()
        if profile == 'glm_official':
            return 'glm_official'  # GLM via 智谱官方平台 Coding Plan

        model = self.model.lower()
        if 'qwen' in model:
            return 'qwen'
        elif 'glm' in model:
            return 'glm'
        elif 'deepseek' in model:
            return 'deepseek'
        elif 'kimi' in model:
            return 'kimi'
        elif 'minimax' in model:
            return 'minimax'
        return 'generic'

    def _build_extra_body(self):
        """根据 provider 类型构建 extra_body"""
        # MiniMax M2.5 是 reasoning model，默认思考且不可关闭
        # 百炼平台默认自动分离到 reasoning_content，无需额外参数
        # 官方平台不分离思考内容，让 <think> 标签留在 content 中以保持多轮思维链连续性
        if self.provider_type == 'minimax':
            # 旧方案：使用 reasoning_split 分离思考到 reasoning_details 字段
            # 问题：reasoning_details 是响应专有字段，回传时 API 可能不识别，导致思维链断裂
            # return {"reasoning_split": True}
            return None
        if not self.enable_thinking:
            return None

        if self.provider_type == 'qwen':
            # Qwen 使用直接的 extra_body 结构
            return {"enable_thinking": True}
        elif self.provider_type == 'glm':
            # GLM 使用嵌套的 chat_template_kwargs 结构
            return {
                "chat_template_kwargs": {
                    "enable_thinking": True,
                    "clear_thinking": False
                }
            }
        elif self.provider_type == 'glm_official':
            # GLM-4.7 通过智谱官方平台 Coding Plan
            # 官方 OpenAI 兼容接口使用 {"thinking": {"type": "enabled"}} 格式
            # Coding Plan 端点 Preserved Thinking 默认开启，无需设置 clear_thinking
            return {
                "thinking": {
                    "type": "enabled"
                }
            }
        elif self.provider_type == 'deepseek':
            # DeepSeek 使用简单的 enable_thinking（通过 SiliconFlow）
            return {"enable_thinking": True}
        elif self.provider_type == 'kimi':
            # Kimi K2.5 通过阿里云百炼，extra_body 格式与 Qwen 一致
            return {"enable_thinking": True}
        else:
            # 其他模型默认使用简单结构
            return {"enable_thinking": True}

    def chat(self, messages, tools=None, tool_choice="auto"):
        """
        Executes a chat completion with optional thinking mode.
        Returns (content, reasoning_content, tool_calls, usage)

        对于 Qwen3.5-Plus 等需要流式 thinking 的模型，自动使用流式模式。
        对于 GLM-4.7 等支持非流式 thinking 的模型，使用非流式模式以提高稳定性。
        """
        # 判断是否需要流式模式
        use_stream = self.enable_thinking and self.stream_for_thinking

        kwargs = {
            "model": self.model,
            "messages": messages,
            "stream": use_stream,
            "temperature": self.temperature,
        }

        # 构建 extra_body
        extra_body = self._build_extra_body()
        if extra_body:
            kwargs["extra_body"] = extra_body

        if tools:
            kwargs["tools"] = tools
            kwargs["tool_choice"] = tool_choice

        if use_stream:
            return self._chat_streaming(kwargs)
        else:
            return self._chat_non_streaming(kwargs)

    def _chat_non_streaming(self, kwargs):
        """非流式处理（GLM/DeepSeek 模式）"""
        backoff_times = [60, 120, 240, 480, 960]
        max_retries = len(backoff_times)

        while True:  # 外层循环：支持 Key 切换后重新尝试
            for attempt in range(max_retries + 1):
                try:
                    response = self.client.chat.completions.create(**kwargs)

                    # Non-streaming: response is complete
                    choice = response.choices[0]
                    message = choice.message

                    # Extract content
                    content = message.content or ""

                    # Extract reasoning_content
                    reasoning_content = ""
                    if hasattr(message, 'reasoning_content') and message.reasoning_content:
                        reasoning_content = message.reasoning_content

                    # MiniMax 官方平台：思考内容以 <think>...</think> 标签嵌入在 content 中
                    # 将其提取出来作为 reasoning_content，并从 content 中移除
                    if not reasoning_content and self.provider_type == 'minimax' and content:
                        import re
                        think_match = re.search(r'<think>(.*?)</think>', content, re.DOTALL)
                        if think_match:
                            reasoning_content = think_match.group(1).strip()
                            content = re.sub(r'<think>.*?</think>\s*', '', content, flags=re.DOTALL).strip()

                    # 旧方案：提取 reasoning_details（MiniMax 官方平台使用 reasoning_split=True 时的字段）
                    # 问题：reasoning_details 是数组格式 [{"text": "..."}]，转换为字符串后回传会破坏思维链
                    # if not reasoning_content and hasattr(message, 'reasoning_details') and message.reasoning_details:
                    #     if isinstance(message.reasoning_details, list):
                    #         reasoning_content = "\n".join(
                    #             d.get("text", "") if isinstance(d, dict) else str(d)
                    #             for d in message.reasoning_details
                    #         )

                    # Extract tool calls
                    tool_calls = None
                    if message.tool_calls:
                        tool_calls = []
                        for tc in message.tool_calls:
                            tool_calls.append({
                                "id": tc.id,
                                "function": {
                                    "name": tc.function.name,
                                    "arguments": tc.function.arguments
                                },
                                "type": "function"
                            })

                    # Extract usage
                    usage = {
                        "prompt_tokens": 0,
                        "completion_tokens": 0,
                        "total_tokens": 0
                    }
                    if hasattr(response, 'usage') and response.usage:
                        usage["prompt_tokens"] = response.usage.prompt_tokens
                        usage["completion_tokens"] = response.usage.completion_tokens
                        usage["total_tokens"] = response.usage.total_tokens

                    # 成功！重置本轮失败记录
                    self.reset_round()
                    return content, reasoning_content, tool_calls, usage

                except Exception as e:
                    # 检查是否为上下文超长错误（不重试，直接抛出）
                    if is_context_exceeded_error(e):
                        print(f"[LLMClient] Context length exceeded, skipping retries")
                        raise Exception(f"Context length exceeded: {e}") from e

                    if self.should_fail_fast_on_quota(e):
                        print("[LLMClient] Quota window exhausted for minimax official, skipping internal retries")
                        raise QuotaWindowExhaustedError(f"Quota window exhausted: {e}") from e

                    # 指数退避重试
                    if attempt < max_retries:
                        wait_time = backoff_times[attempt]
                        print(f"LLM Call Failed: {e}")
                        print(f"Retrying in {wait_time} seconds... (Attempt {attempt + 1}/{max_retries})")
                        time.sleep(wait_time)
                    else:
                        # 重试耗尽，尝试切换 Key
                        print(f"LLM Call Failed after {max_retries} retries: {e}")
                        if self.try_switch_key():
                            # 切换成功，继续外层循环（重置 attempt）
                            continue
                        else:
                            # 所有 Key 本轮都已尝试过
                            raise Exception("All API Keys exhausted after full round") from e
            break  # 正常退出（不应该到达这里）

    def _chat_streaming(self, kwargs):
        """流式处理（Qwen thinking 模式必需）"""
        # 添加 stream_options 以获取 usage 信息
        kwargs["stream_options"] = {"include_usage": True}

        backoff_times = [60, 120, 240, 480, 960]
        max_retries = len(backoff_times)

        while True:  # 外层循环：支持 Key 切换后重新尝试
            for attempt in range(max_retries + 1):
                try:
                    response = self.client.chat.completions.create(**kwargs)

                    content = ""
                    reasoning_content = ""
                    tool_calls_chunks = {}
                    usage = {
                        "prompt_tokens": 0,
                        "completion_tokens": 0,
                        "total_tokens": 0
                    }

                    for chunk in response:
                        # 处理 usage（在最后一个 chunk 中）
                        if hasattr(chunk, 'usage') and chunk.usage:
                            usage["prompt_tokens"] = chunk.usage.prompt_tokens
                            usage["completion_tokens"] = chunk.usage.completion_tokens
                            usage["total_tokens"] = chunk.usage.total_tokens

                        if not chunk.choices:
                            continue

                        delta = chunk.choices[0].delta
                        if not delta:
                            continue

                        # 收集 reasoning_content
                        if hasattr(delta, 'reasoning_content') and delta.reasoning_content:
                            reasoning_content += delta.reasoning_content

                        # 收集 content
                        if hasattr(delta, 'content') and delta.content:
                            content += delta.content

                        # 处理 tool calls（需要累积）
                        if hasattr(delta, 'tool_calls') and delta.tool_calls:
                            for tc in delta.tool_calls:
                                idx = tc.index
                                if idx not in tool_calls_chunks:
                                    tool_calls_chunks[idx] = {"id": "", "name": "", "arguments": ""}

                                if tc.id:
                                    tool_calls_chunks[idx]["id"] = tc.id
                                if tc.function:
                                    if tc.function.name:
                                        tool_calls_chunks[idx]["name"] = tc.function.name
                                    if tc.function.arguments:
                                        tool_calls_chunks[idx]["arguments"] += tc.function.arguments

                    # 组装 tool_calls
                    tool_calls = None
                    if tool_calls_chunks:
                        tool_calls = []
                        for idx in sorted(tool_calls_chunks.keys()):
                            v = tool_calls_chunks[idx]
                            tool_calls.append({
                                "id": v["id"],
                                "function": {
                                    "name": v["name"],
                                    "arguments": v["arguments"]
                                },
                                "type": "function"
                            })

                    # 成功！重置本轮失败记录
                    self.reset_round()
                    return content, reasoning_content, tool_calls, usage

                except Exception as e:
                    # 检查是否为上下文超长错误（不重试，直接抛出）
                    if is_context_exceeded_error(e):
                        print(f"[LLMClient] Context length exceeded, skipping retries")
                        raise Exception(f"Context length exceeded: {e}") from e

                    if self.should_fail_fast_on_quota(e):
                        print("[LLMClient] Quota window exhausted for minimax official, skipping internal retries")
                        raise QuotaWindowExhaustedError(f"Quota window exhausted: {e}") from e

                    # 指数退避重试
                    if attempt < max_retries:
                        wait_time = backoff_times[attempt]
                        print(f"LLM Call Failed: {e}")
                        print(f"Retrying in {wait_time} seconds... (Attempt {attempt + 1}/{max_retries})")
                        time.sleep(wait_time)
                    else:
                        # 重试耗尽，尝试切换 Key
                        print(f"LLM Call Failed after {max_retries} retries: {e}")
                        if self.try_switch_key():
                            # 切换成功，继续外层循环（重置 attempt）
                            continue
                        else:
                            # 所有 Key 本轮都已尝试过
                            raise Exception("All API Keys exhausted after full round") from e
            break  # 正常退出（不应该到达这里）
