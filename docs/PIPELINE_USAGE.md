# BinBench Pipeline Usage

This document explains how to run the full pipeline for a single task.

## 1. Entry Script

Primary single-task entry:

- `scripts/run_single_task.py`

Execution boundary:

1. Host Step1: Readability
2. Guest Step2: Syntactic Correctness / Recompilation
3. Guest Step3: Semantic Fidelity

## 2. Basic Command

```bash
python3 scripts/run_single_task.py \
  src/7.c \
  decompiled/retdec_out/arm32/7/7_gcc_O2_no_g.c \
  --arch arm32 \
  --original-bin build/arm32/7/7_gcc_O2_no_g \
  --results-dir runs/qwen_demo \
  --llm-profile qwen3.5-plus
```

Argument summary:

- First positional argument: original source file
- Second positional argument: decompiled source file
- `--arch`: target architecture used to select the Lima instance
- `--original-bin`: original binary
- `--results-dir`: root directory of the target results tree
- `--llm-profile`: active profile name

## 3. Common Flags

### `--restart`

Force a fresh rerun of the task instead of reusing existing Step2 outputs.

### `--skip-readability`

Skip host-side Step1. Use only for debugging.

### `--skip-step3`

Run Step1 + Step2 only and skip Step3.

### `--step3-only`

Require an existing successful Step2 result and rerun only Step3.

## 4. Output Directory

Outputs are written to:

```text
results_<llm>_v4_full/<arch>/<src>/<bin_name>/<decompiler>/
```

Each task directory contains:

- `readability/`
- `syntactic/`
- `semantic/`
- `report.md`

## 5. Result Interpretation

- `readability/test_results_*.json`: structured Step1 output
- `syntactic/repair_trace.json`: iterative Step2 repair trace
- `semantic/result_metrics.json`: Step3 metric summary
- `report.md`: per-task report

## 6. Environment Requirements

- The corresponding Lima instance is running
- If guest time drifts, synchronize the guest clock first
- Profiles and key inventory are configured under `config/`
- Run `scripts/setup_lima_*.sh` when guest setup is required
