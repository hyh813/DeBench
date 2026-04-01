# BinBench

BinBench is an automated benchmark framework for evaluating decompiled binaries across three stages:

1. Step 1: Readability
2. Step 2: Syntactic Correctness / Recompilation
3. Step 3: Semantic Fidelity

This repository retains the core implementation, benchmark sources, build artifacts, decompiler outputs, and three main results trees for reproducibility and secondary analysis. Paper sources, internal maintenance tools, handoff notes, and non-essential analysis scripts have been removed.

## Repository Overview

```text
bindebench/
├── src/                     # benchmark source corpus
├── build/                   # original binaries and successful_builds.json
├── decompiled/              # outputs from each decompiler
├── evaluator/               # Step1 / Step2 / Step3 implementations
├── scripts/                 # build, single-task, batch, and support scripts
├── config/                  # LLM configuration templates with env-based keys
├── prompt/                  # Step1 prompt assets
├── results_glm_v4_full/     # GLM results tree
├── results_qwen_v4_full/    # Qwen results tree
├── results_minimax_v4_full/ # MiniMax results tree
├── docs/                    # core documentation
├── binbench-*.yaml          # Lima/VM configuration
└── README.md
```

For a more detailed structure overview, see [docs/PROJECT_STRUCTURE.md](docs/PROJECT_STRUCTURE.md). For script-specific guidance, see [scripts/README.md](scripts/README.md).

## Quick Start

### 1. Configure LLM Credentials

The repository does not contain real API keys. Export the required environment variables, then adjust [config/llm_config.json](config/llm_config.json) and [config/llm_key_inventory.json](config/llm_key_inventory.json) as needed.

Example:

```bash
export BINBENCH_GLM_API_KEY=...
export BINBENCH_DASHSCOPE_API_KEY=...
export BINBENCH_MINIMAX_API_KEY=...
```

See [docs/LLM_CONFIGURATION_GUIDE.md](docs/LLM_CONFIGURATION_GUIDE.md) for details.

### 2. Build the Original Binaries

```bash
podman build -t cross-compiler -f scripts/Dockerfile .
podman run --platform linux/amd64 --rm -v "$(pwd):/work" cross-compiler \
  python3 scripts/build_in_docker.py
```

### 3. Run the Full Pipeline for a Single Task

```bash
python3 scripts/run_single_task.py \
  src/7.c \
  decompiled/retdec_out/arm32/7/7_gcc_O2_no_g.c \
  --arch arm32 \
  --original-bin build/arm32/7/7_gcc_O2_no_g \
  --llm-profile qwen3.5-plus \
  --results-dir runs/qwen_demo
```

This command runs Step1 on the host, then enters the matching Lima instance for Step2 and Step3.

### 4. Batch Evaluation

The recommended batch entrypoint is the launcher:

```bash
python3 scripts/launch_auto_eval.py \
  --llm-profile glm_official \
  --arch arm64 \
  --results-dir results_glm_v4_full \
  --retry
```

Call chain:

```text
launch_auto_eval.py
  -> auto_eval.py
    -> host orchestration helpers (scripts/pipeline_host.py)
      -> host Step1 (evaluator/readability/eval_readability.py)
    -> guest Step2/3 (scripts/run_pipeline_in_docker.py)
```

### 5. Example Batch Commands

```bash
python3 scripts/auto_eval.py \
  --arch arm32 \
  --src 7 \
  --bin-name 7_gcc_O2_no_g \
  --decompiler retdec \
  --llm-profile qwen3.5-plus \
  --results-dir runs/qwen_batch
```

```bash
python3 scripts/auto_eval.py \
  --arch arm32 \
  --src 7 \
  --bin-name 7_gcc_O2_no_g \
  --decompiler retdec \
  --llm-profile minimax \
  --results-dir runs/minimax_batch
```

Notes:

- `scripts/pipeline_host.py` is an internal shared helper rather than a user-facing CLI. Both `run_single_task.py` and `auto_eval.py` use it for host Step1 execution, guest preflight, and host-to-guest environment forwarding.
- Filtered `auto_eval.py` invocations are useful for validating a single task before widening the scope. For larger runs, prefer `launch_auto_eval.py` or `auto_eval.py` with `--retry`.

## Results Layout

- `results_{llm}_v4_full/` is the main results tree. Step1, Step2, and Step3 share the same per-task directory.
- Historical Step1-only outputs have already been merged into the `readability/` subdirectories of the three main results trees.
- The three results trees are large, and `decompiled/` also contains full decompiler outputs. This repository is intended for reproducibility and auditability rather than as a lightweight demo.

## Documentation Index

- [docs/PROJECT_STRUCTURE.md](docs/PROJECT_STRUCTURE.md): repository layout and results tree structure
- [docs/PIPELINE_USAGE.md](docs/PIPELINE_USAGE.md): single-task pipeline usage
- [docs/AUTO_EVAL_IMPLEMENTATION.md](docs/AUTO_EVAL_IMPLEMENTATION.md): batch orchestration entrypoint
- [docs/LLM_CONFIGURATION_GUIDE.md](docs/LLM_CONFIGURATION_GUIDE.md): profile templates and key injection
- [docs/READABILITY_EVALUATION.md](docs/READABILITY_EVALUATION.md): Step1 metrics and outputs
- [docs/STEP2_METRICS.md](docs/STEP2_METRICS.md): Step2 metrics and outputs
- [docs/SEMANTIC_EVALUATION_DETAILS.md](docs/SEMANTIC_EVALUATION_DETAILS.md): Step3 implementation details and artifacts
