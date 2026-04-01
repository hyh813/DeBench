# AUTO_EVAL Implementation Notes

`scripts/auto_eval.py` is the main batch-evaluation entrypoint.

## 1. Call Chain

```text
launch_auto_eval.py
  -> auto_eval.py
    -> host Step1 (evaluator/readability/eval_readability.py)
    -> guest Step2/3 (scripts/run_pipeline_in_docker.py)
      -> evaluator/syntactic/auto_fixer_v3.py
      -> evaluator/semantic/run_instrumentation.py
      -> evaluator/semantic/analyze_traces.py
```

## 2. Main Responsibilities

`auto_eval.py` is responsible for:

- scanning evaluable tasks for the selected architecture
- maintaining `eval_state_{arch}.json`
- running Step1 on the host
- performing guest preflight for the target Lima instance
- dispatching Step2 and Step3 inside the guest
- retrying failures according to policy
- reusing existing Step2 outputs in `--step3-only` mode

## 3. Results Tree Convention

The main results trees are:

- `results_glm_v4_full/`
- `results_qwen_v4_full/`
- `results_minimax_v4_full/`

Each results root maintains four state files:

- `eval_state_arm64.json`
- `eval_state_arm32.json`
- `eval_state_x64.json`
- `eval_state_x86.json`

## 4. Current Step Boundary

- Step1 runs on the host and no longer enters the guest through `run_pipeline_in_docker.py`
- Step2 and Step3 still run inside the matching Lima guest and share the same task directory
- The `readability/` outputs in the main results tree are reused directly by downstream steps

## 5. Common Commands

### Launch a filtered batch run

```bash
python3 scripts/auto_eval.py \
  --arch arm32 \
  --src 7 \
  --bin-name 7_gcc_O2_no_g \
  --decompiler retdec \
  --llm-profile qwen3.5-plus \
  --results-dir runs/qwen_batch
```

### Rerun Step3 only

```bash
python3 scripts/auto_eval.py \
  --src 3 5-23 6 7 \
  --arch arm64 \
  --step3-only \
  --results-dir results_glm_v4_full
```

## 6. Core State-File Fields

Each task contains at least:

- `status`
- `steps.readability.status`
- `steps.readability.score`
- `steps.syntactic.status`
- `steps.syntactic.iterations`
- `steps.syntactic.tokens`
- `steps.semantic.status`
- `steps.semantic.quality_status`

## 7. Current Repository Boundary

The following historical maintenance paths are intentionally removed from the mainline tree:

- subset rerun / merge tooling
- Step3 rerun supervisor tooling
- paper-specific statistics and plotting scripts
- legacy state repair and audit utilities
