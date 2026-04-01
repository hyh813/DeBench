# LLM 配置说明

仓库不包含任何真实 API Key。`config/` 目录只保留可运行模板。

## 1. 配置文件

### `config/llm_config.json`

定义 profile 级行为，例如：

- `key_provider`
- `preferred_key_aliases`
- `base_url`
- `model`
- `temperature`

### `config/llm_key_inventory.json`

定义具体 key alias，但 `api_key` 使用环境变量占位：

```json
{
  "provider": "dashscope",
  "api_key": "${BINBENCH_DASHSCOPE_API_KEY}"
}
```

`config/config_loader.py` 会自动展开 `${ENV_VAR}`。

## 2. 当前模板中的 profile

- `glm_official`
- `qwen3.5-plus`
- `minimax`
- `deepseek`

## 3. 环境变量

至少按需设置：

```bash
export BINBENCH_GLM_API_KEY=...
export BINBENCH_DASHSCOPE_API_KEY=...
export BINBENCH_MINIMAX_API_KEY=...
export BINBENCH_SILICONFLOW_API_KEY=...
```

## 4. 启动方式

### 方式 A：launcher 交互选择 key

```bash
python3 scripts/launch_auto_eval.py \
  --llm-profile glm_official \
  --arch arm64 \
  --results-dir results_glm_v4_full
```

### 方式 B：直接运行 auto_eval

```bash
LLM_PROFILE=glm_official python3 scripts/auto_eval.py \
  --arch arm64 \
  --results-dir results_glm_v4_full
```

### 方式 C：显式指定 key alias

```bash
LLM_PROFILE=glm_official LLM_KEY_ALIAS=glm-official-1 \
python3 scripts/auto_eval.py --arch arm64 --results-dir results_glm_v4_full
```

## 5. 使用建议

- 不要把真实 key 写回 `config/*.json`
- 本地私有改动建议通过环境变量完成
- 如果要新增 profile，优先复用现有 provider 名称和模板结构
