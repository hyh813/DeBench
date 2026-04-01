# scripts/ Overview

This directory contains the mainline scripts required to build, run, and maintain the evaluation pipeline.

## Core Entrypoints

### `pipeline_host.py`

Internal shared helper, not a user-facing CLI. It is responsible for:

- running Step1 readability on the host with streamed output
- performing guest clock / HTTPS preflight checks
- forwarding host environment variables into guest-side subprocesses

Both `run_single_task.py` and `auto_eval.py` rely on it, so single-task and batch execution share the same host orchestration logic.

### `run_single_task.py`

Single-task entrypoint. It:

- runs Step1 readability on the host
- performs guest preflight for the selected Lima instance
- executes Step2 and Step3 inside the guest

Example:

```bash
python3 scripts/run_single_task.py \
  src/7.c \
  decompiled/retdec_out/arm32/7/7_gcc_O2_no_g.c \
  --arch arm32 \
  --original-bin build/arm32/7/7_gcc_O2_no_g \
  --llm-profile qwen3.5-plus \
  --results-dir runs/qwen_demo
```

### `launch_auto_eval.py`

Interactive batch launcher. It:

- selects a profile from `config/`
- chooses a compatible key alias
- launches `auto_eval.py`

Example:

```bash
python3 scripts/launch_auto_eval.py \
  --llm-profile glm_official \
  --arch arm64 \
  --results-dir results_glm_v4_full \
  --retry
```

### `auto_eval.py`

Main batch-evaluation entrypoint. The current mainline behavior is:

- run Step1 readability on the host
- run guest clock / HTTPS preflight
- execute Step2 and Step3 inside the matching Lima guest

Common usage:

```bash
python3 scripts/auto_eval.py \
  --arch arm32 \
  --src 7 \
  --bin-name 7_gcc_O2_no_g \
  --decompiler retdec \
  --llm-profile qwen3.5-plus \
  --results-dir runs/qwen_batch
```

This filtered command still exercises the full `auto_eval.py` orchestration path and is useful for validating a single task before scaling up. For larger runs, widen the filters or use `launch_auto_eval.py`.

Step3-only rerun:

```bash
python3 scripts/auto_eval.py \
  --src 3 5-23 6 7 \
  --arch arm64 \
  --step3-only \
  --results-dir results_glm_v4_full
```

### `run_pipeline_in_docker.py`

Guest worker entrypoint. It is normally invoked by `run_single_task.py` or `auto_eval.py`, not directly from the host as a primary user command.

Example:

```bash
limactl shell binbench python3 -u scripts/run_pipeline_in_docker.py \
  src/1.c \
  decompiled/ghidra_out/arm64/1/1_gcc_O0_g.c \
  --original-bin build/arm64/1/1_gcc_O0_g \
  --results-dir results_glm_v4_full \
  --llm-profile glm_official
```

Notes:

- the mainline path usually passes `--skip-readability`, because Step1 has already run on the host
- `--skip-step3` is a debugging switch
- `--step3-only` is used to rerun semantic evaluation from an existing successful Step2 result

## Build and Environment

### `build_in_docker.py`

Compiles the benchmark source corpus inside the build container and writes outputs into `build/`.

```bash
podman build -t cross-compiler -f scripts/Dockerfile .
podman run --platform linux/amd64 --rm -v "$(pwd):/work" cross-compiler \
  python3 scripts/build_in_docker.py
```

### `step3_preflight.py`

Environment preflight for Step3. It verifies that Lima, Frida, the results tree, and required artifacts are ready for semantic evaluation.

### `setup_lima_env.sh`
### `setup_lima_arm32_env.sh`
### `setup_lima_x64_env.sh`
### `setup_lima_x86_env.sh`

Initialize Lima environments for each architecture.

### `lima_ssh_no_mux.sh`

SSH wrapper used by batch scripts to avoid instability caused by Lima multiplexing.

## Container Files

### `Dockerfile`

Primary build container definition.

### `Dockerfile.arm64`

Container definition for ARM64-related build and runtime workflows.
