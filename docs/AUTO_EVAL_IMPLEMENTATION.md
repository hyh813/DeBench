# AUTO_EVAL 实现说明

`scripts/auto_eval.py` 是批量评估主入口。

## 1. 调用链

```text
launch_auto_eval.py
  -> auto_eval.py
    -> host Step1 (evaluator/readability/eval_readability.py)
    -> guest Step2/3 (scripts/run_pipeline_in_docker.py)
      -> evaluator/syntactic/auto_fixer_v3.py
      -> evaluator/semantic/run_instrumentation.py
      -> evaluator/semantic/analyze_traces.py
```

## 2. 主行为

`auto_eval.py` 负责：

- 扫描目标架构下可评估任务
- 维护 `eval_state_{arch}.json`
- 在宿主机执行 Step1
- 对目标 Lima 实例做 guest preflight
- 调度 Lima 实例执行 Step2 / Step3
- 在失败时按策略重试
- 在 `--step3-only` 模式下复用既有 Step2 成果

## 3. 结果树约定

主结果树固定为：

- `results_glm_v4_full/`
- `results_qwen_v4_full/`
- `results_minimax_v4_full/`

每个结果树根目录下维护四个状态文件：

- `eval_state_arm64.json`
- `eval_state_arm32.json`
- `eval_state_x64.json`
- `eval_state_x86.json`

## 4. Step1 / Step2 / Step3 的当前口径

- Step1 现在由宿主机执行，不再随 `run_pipeline_in_docker.py` 一起进入 guest
- Step2 与 Step3 继续在对应 Lima guest 内执行，并共享同一 task 目录
- 主结果树中的 `readability/` 产物会直接被后续步骤复用，不再保留单独的 Step1 归档目录

## 5. 常见命令

### 启动一条批量评估

```bash
python3 scripts/auto_eval.py \
  --arch arm32 \
  --src 7 \
  --bin-name 7_gcc_O2_no_g \
  --decompiler retdec \
  --llm-profile qwen3.5-plus \
  --results-dir runs/qwen_batch
```

### 只补跑 Step3

```bash
python3 scripts/auto_eval.py \
  --src 3 5-23 6 7 \
  --arch arm64 \
  --step3-only \
  --results-dir results_glm_v4_full
```

## 6. 状态文件核心字段

每个 task 至少包含：

- `status`
- `steps.readability.status`
- `steps.readability.score`
- `steps.syntactic.status`
- `steps.syntactic.iterations`
- `steps.syntactic.tokens`
- `steps.semantic.status`
- `steps.semantic.quality_status`

## 7. 当前仓库边界

以下历史维护链路已从当前主线移除：

- 子集 rerun 合并工具
- Step3 rerun supervisor
- 论文统计/画图脚本
- 历史状态修补与专项审计工具
