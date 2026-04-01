"""
LLM Client with Configurable Providers

Uses the shared config system to switch across multiple LLM providers.
Supports GLM-4.7 (non-streaming thinking) and Qwen3.5-Plus
(streaming thinking).
Supports automatic API key rotation when quota is exhausted.
"""

from openai import OpenAI
import os
import sys
import json
import time
import re

# Add the project root to the import path.
PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
sys.path.insert(0, PROJECT_ROOT)

from config.config_loader import get_llm_client_config


# ============================================================
# API key exhaustion / rotation triggers
# ============================================================

QUOTA_EXHAUSTED_PATTERNS = [
    r"Access denied",
    r"403",
    r"AllocationQuota",
    r"FreeTierOnly",
    r"Free allocated quota exceeded",
    r"quota exceeded",
    r"insufficient quota",
    r"Rate limit exceeded",  # Some providers require key rotation on rate limit.
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
    Detect whether an error indicates quota exhaustion or key rotation.

    Args:
        error: The caught exception.

    Returns:
        True if the error should trigger key switching.
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
        Initialize the LLM client.

        Args:
            profile_name: Optional explicit profile name.
                If None, use the active profile from config.
                If the LLM_PROFILE environment variable is set, it takes precedence.
        """
        # Environment variable overrides the passed profile.
        if profile_name is None:
            profile_name = os.environ.get('LLM_PROFILE')

        # Load config.
        self.config = get_llm_client_config(profile_name)
        self.profile_name = self.config.get('profile_name', 'unknown')

        # API key rotation state.
        self.api_keys = self.config.get('api_keys', [])
        self.api_key_aliases = self.config.get('api_key_aliases', [])
        self.selected_key_alias = self.config.get('selected_key_alias')
        # Allow LLM_KEY_INDEX to select a starting key for parallel runs.
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
        self.current_round_failed = set()  # Keys that failed in the current round.
        self.keys_tried_in_round = 0       # Number of keys tried in the current round.

        # Other config fields.
        self.base_url = self.config['base_url']
        self.model = self.config['model']
        self.enable_thinking = self.config.get('enable_thinking', False)
        self.temperature = self.config.get('temperature', 0)
        self.stream_for_thinking = self.config.get('stream_for_thinking', False)
        self.provider_type = self._detect_provider_type()

        # Initialize the OpenAI-compatible client.
        self.client = None
        self._init_client()

        print(f"[LLMClient] Using profile: {self.profile_name}, model: {self.model}, provider: {self.provider_type}")
        print(f"[LLMClient] Available API Keys: {len(self.api_keys)}")
        if self.api_key_aliases:
            print(f"[LLMClient] Key aliases: {', '.join(self.api_key_aliases)}")

    def _init_client(self):
        """Initialize the OpenAI-compatible client with the current key."""
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
        Try switching to the next key in the rotation.

        Logic:
        1. Mark the current key as failed in this round.
        2. Find the next key that has not failed in this round.
        3. If every key has already failed once in this round, stop.

        Returns:
            True if the switch succeeded, False if all keys were already tried.
        """
        # Mark the current key as failed in this round.
        self.current_round_failed.add(self.current_key_index)
        self.keys_tried_in_round += 1

        # Stop if every key has already been tried in this round.
        if len(self.current_round_failed) >= len(self.api_keys):
            print(f"[LLMClient] All {len(self.api_keys)} API Keys failed in this round")
            return False

        # Find the next key that has not failed in this round.
        for i in range(len(self.api_keys)):
            next_idx = (self.current_key_index + 1 + i) % len(self.api_keys)
            if next_idx not in self.current_round_failed:
                self.current_key_index = next_idx
                self._init_client()
                print(f"[LLMClient] Switched to API Key #{next_idx + 1} (round progress: {self.keys_tried_in_round}/{len(self.api_keys)})")
                return True

        return False

    def reset_round(self):
        """Reset per-round key failures after a successful request."""
        if self.current_round_failed:
            print(f"[LLMClient] Request succeeded, resetting round (previously failed: {len(self.current_round_failed)} keys)")
        self.current_round_failed.clear()
        self.keys_tried_in_round = 0

    def has_available_key(self):
        """Check whether any keys remain available in the current round."""
        return len(self.current_round_failed) < len(self.api_keys)

    def should_fail_fast_on_quota(self, error: Exception) -> bool:
        """
        Some single-key fixed-window providers should fail fast on quota errors
        instead of using exponential backoff.

        For example, the MiniMax official Coding Plan resets on a fixed time
        window, so local retries only waste time.
        """
        if not is_quota_exhausted_error(error):
            return False
        return self.provider_type == 'minimax' and len(self.api_keys) == 1

    def _detect_provider_type(self):
        """Infer the provider type from the profile name and model name."""
        explicit_provider_type = self.config.get('provider_type')
        if explicit_provider_type:
            return explicit_provider_type

        # Prefer the profile name first so we can disambiguate identical model names.
        profile = self.profile_name.lower()
        if profile == 'glm_official':
            return 'glm_official'  # GLM via the official Zhipu Coding Plan.

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
        """Build provider-specific extra_body parameters."""
        # MiniMax M2.5 is a reasoning model and cannot disable thinking.
        # Alibaba Bailian already separates reasoning into reasoning_content.
        # The official endpoint keeps <think> in content to preserve continuity
        # across multi-turn reasoning traces.
        if self.provider_type == 'minimax':
            # Old approach: reasoning_split moved thinking into reasoning_details.
            # That field is provider-specific and can break continuity when sent back.
            # return {"reasoning_split": True}
            return None
        if not self.enable_thinking:
            return None

        if self.provider_type == 'qwen':
            # Qwen uses a direct extra_body structure.
            return {"enable_thinking": True}
        elif self.provider_type == 'glm':
            # GLM uses nested chat_template_kwargs.
            return {
                "chat_template_kwargs": {
                    "enable_thinking": True,
                    "clear_thinking": False
                }
            }
        elif self.provider_type == 'glm_official':
            # GLM-4.7 on the official Zhipu Coding Plan uses the
            # {"thinking": {"type": "enabled"}} OpenAI-compatible format.
            # Preserved Thinking is enabled by default on this endpoint.
            return {
                "thinking": {
                    "type": "enabled"
                }
            }
        elif self.provider_type == 'deepseek':
            # DeepSeek uses the simple enable_thinking form.
            return {"enable_thinking": True}
        elif self.provider_type == 'kimi':
            # Kimi K2.5 on Alibaba Bailian uses the same format as Qwen.
            return {"enable_thinking": True}
        else:
            # Default to the simple structure for other models.
            return {"enable_thinking": True}

    def chat(self, messages, tools=None, tool_choice="auto"):
        """
        Executes a chat completion with optional thinking mode.
        Returns (content, reasoning_content, tool_calls, usage)

        Qwen3.5-Plus and similar models use streaming when thinking is enabled.
        GLM-4.7 and similar models stay on non-streaming mode for better stability.
        """
        # Determine whether streaming is required.
        use_stream = self.enable_thinking and self.stream_for_thinking

        kwargs = {
            "model": self.model,
            "messages": messages,
            "stream": use_stream,
            "temperature": self.temperature,
        }

        # Build provider-specific extra_body.
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
        """Non-streaming request path (GLM / DeepSeek style)."""
        backoff_times = [60, 120, 240, 480, 960]
        max_retries = len(backoff_times)

        while True:  # Outer loop allows a fresh retry after key rotation.
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

                    # MiniMax official responses may embed reasoning in <think> tags.
                    # Extract it into reasoning_content and remove it from content.
                    if not reasoning_content and self.provider_type == 'minimax' and content:
                        import re
                        think_match = re.search(r'<think>(.*?)</think>', content, re.DOTALL)
                        if think_match:
                            reasoning_content = think_match.group(1).strip()
                            content = re.sub(r'<think>.*?</think>\s*', '', content, flags=re.DOTALL).strip()

                    # Old approach: read reasoning_details when reasoning_split=True.
                    # That field is an array and breaks continuity when echoed back.
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

                    # Success: reset the per-round failure state.
                    self.reset_round()
                    return content, reasoning_content, tool_calls, usage

                except Exception as e:
                    # Context-window errors should not be retried.
                    if is_context_exceeded_error(e):
                        print(f"[LLMClient] Context length exceeded, skipping retries")
                        raise Exception(f"Context length exceeded: {e}") from e

                    if self.should_fail_fast_on_quota(e):
                        print("[LLMClient] Quota window exhausted for minimax official, skipping internal retries")
                        raise QuotaWindowExhaustedError(f"Quota window exhausted: {e}") from e

                    # Exponential-backoff retry.
                    if attempt < max_retries:
                        wait_time = backoff_times[attempt]
                        print(f"LLM Call Failed: {e}")
                        print(f"Retrying in {wait_time} seconds... (Attempt {attempt + 1}/{max_retries})")
                        time.sleep(wait_time)
                    else:
                        # Retries exhausted: try the next key.
                        print(f"LLM Call Failed after {max_retries} retries: {e}")
                        if self.try_switch_key():
                            # Key switch succeeded: restart the outer retry loop.
                            continue
                        else:
                            # Every key has already failed in this round.
                            raise Exception("All API Keys exhausted after full round") from e
            break  # Defensive exit; normal control should return earlier.

    def _chat_streaming(self, kwargs):
        """Streaming request path (required for Qwen thinking mode)."""
        # Include stream_options so usage is returned in the final chunk.
        kwargs["stream_options"] = {"include_usage": True}

        backoff_times = [60, 120, 240, 480, 960]
        max_retries = len(backoff_times)

        while True:  # Outer loop allows a fresh retry after key rotation.
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
                        # Usage is reported in the final chunk.
                        if hasattr(chunk, 'usage') and chunk.usage:
                            usage["prompt_tokens"] = chunk.usage.prompt_tokens
                            usage["completion_tokens"] = chunk.usage.completion_tokens
                            usage["total_tokens"] = chunk.usage.total_tokens

                        if not chunk.choices:
                            continue

                        delta = chunk.choices[0].delta
                        if not delta:
                            continue

                        # Accumulate reasoning_content.
                        if hasattr(delta, 'reasoning_content') and delta.reasoning_content:
                            reasoning_content += delta.reasoning_content

                        # Accumulate content.
                        if hasattr(delta, 'content') and delta.content:
                            content += delta.content

                        # Tool calls arrive incrementally and must be accumulated.
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

                    # Reconstruct tool_calls from streamed chunks.
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

                    # Success: reset the per-round failure state.
                    self.reset_round()
                    return content, reasoning_content, tool_calls, usage

                except Exception as e:
                    # Context-window errors should not be retried.
                    if is_context_exceeded_error(e):
                        print(f"[LLMClient] Context length exceeded, skipping retries")
                        raise Exception(f"Context length exceeded: {e}") from e

                    if self.should_fail_fast_on_quota(e):
                        print("[LLMClient] Quota window exhausted for minimax official, skipping internal retries")
                        raise QuotaWindowExhaustedError(f"Quota window exhausted: {e}") from e

                    # Exponential-backoff retry.
                    if attempt < max_retries:
                        wait_time = backoff_times[attempt]
                        print(f"LLM Call Failed: {e}")
                        print(f"Retrying in {wait_time} seconds... (Attempt {attempt + 1}/{max_retries})")
                        time.sleep(wait_time)
                    else:
                        # Retries exhausted: try the next key.
                        print(f"LLM Call Failed after {max_retries} retries: {e}")
                        if self.try_switch_key():
                            # Key switch succeeded: restart the outer retry loop.
                            continue
                        else:
                            # Every key has already failed in this round.
                            raise Exception("All API Keys exhausted after full round") from e
            break  # Defensive exit; normal control should return earlier.
