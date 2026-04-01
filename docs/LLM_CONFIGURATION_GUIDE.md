# LLM Configuration Guide

The repository does not contain real API keys. The `config/` directory only keeps runnable templates.

## 1. Configuration Files

### `config/llm_config.json`

Defines profile-level behavior, including:

- `key_provider`
- `preferred_key_aliases`
- `base_url`
- `model`
- `temperature`

### `config/llm_key_inventory.json`

Defines key aliases, with `api_key` values sourced from environment variables:

```json
{
  "provider": "dashscope",
  "api_key": "${BINBENCH_DASHSCOPE_API_KEY}"
}
```

`config/config_loader.py` expands `${ENV_VAR}` automatically.

## 2. Profiles in the Current Template

- `glm_official`
- `qwen3.5-plus`
- `minimax`
- `deepseek`

## 3. Environment Variables

Set the variables you need, for example:

```bash
export BINBENCH_GLM_API_KEY=...
export BINBENCH_DASHSCOPE_API_KEY=...
export BINBENCH_MINIMAX_API_KEY=...
export BINBENCH_SILICONFLOW_API_KEY=...
```

## 4. Launch Patterns

### Option A: use the launcher to select a key interactively

```bash
python3 scripts/launch_auto_eval.py \
  --llm-profile glm_official \
  --arch arm64 \
  --results-dir results_glm_v4_full
```

### Option B: run `auto_eval.py` directly

```bash
LLM_PROFILE=glm_official python3 scripts/auto_eval.py \
  --arch arm64 \
  --results-dir results_glm_v4_full
```

### Option C: bind to an explicit key alias

```bash
LLM_PROFILE=glm_official LLM_KEY_ALIAS=glm-official-1 \
python3 scripts/auto_eval.py --arch arm64 --results-dir results_glm_v4_full
```

## 5. Usage Recommendations

- Do not write real keys back into `config/*.json`
- Keep local private overrides in environment variables
- When adding a profile, reuse the existing provider names and template structure whenever possible
