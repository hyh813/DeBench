# Project Structure

This document describes the top-level directories, core files, and results-tree layout that are intentionally retained in the repository.

## 1. Top-Level Directories

```text
bindebench/
├── src/                       # benchmark source corpus
├── build/                     # original binaries and successful_builds.json
├── decompiled/                # outputs from each decompiler
├── evaluator/                 # Step1 / Step2 / Step3 implementations
├── scripts/                   # build, single-task, and batch orchestration scripts
├── config/                    # LLM configuration templates
├── prompt/                    # Step1 prompt assets
├── results_glm_v4_full/       # GLM results tree
├── results_qwen_v4_full/      # Qwen results tree
├── results_minimax_v4_full/   # MiniMax results tree
├── docs/                      # core documentation
├── binbench-arm32.yaml
├── binbench-x64.yaml
├── binbench-x86.yaml
└── README.md
```

## 2. Data Layer

### `src/`

Entry point for the benchmark source corpus. The retained set includes:

- `1.c`
- `2.c`
- `3.c`
- `3-3_extern_defs.c`
- `4.c`
- `5-1.cpp`
- `5-23.c`
- `6.c`
- `7.c`

Notes:

- `3.c` and `3-3_extern_defs.c` form a multi-source case
- `5-1.cpp` is the only C++ benchmark case

### `build/`

Stores original binaries and build metadata.

Key file:

- `build/successful_builds.json`

Common layout:

```text
build/<arch>/<src>/<bin_name>
```

### `decompiled/`

Stores outputs from each decompiler.

Main directories:

- `ghidra_out/`
- `ida_out/`
- `retdec_out/`
- `BinaryAI_out/`
- `angr_out/`

Common layout:

```text
decompiled/<tool>_out/<arch>/<src>/<bin_name>.c
```

## 3. Implementation Layer

### `evaluator/readability/`

Step1 readability evaluation.

Core file:

- `eval_readability.py`

### `evaluator/syntactic/`

Step2 recompilability evaluation.

The retained mainline implementation is:

- `auto_fixer_v3.py`
- `utils/compiler.py`
- `utils/error_parser_v3.py`
- `utils/file_manager_v3.py`
- `utils/logger_v2.py`
- `utils/llm_client.py`
- `utils/trace_repair.py`

### `evaluator/semantic/`

Step3 semantic-fidelity evaluation.

Core files:

- `run_instrumentation.py`
- `analyze_traces.py`
- `semantic_utils.py`
- `trace_format.py`
- `hook_trace.js`
- `case_stability_config.json`
- `target_functions.json`

## 4. Script Layer

Mainline script usage is documented in [scripts/README.md](../scripts/README.md).

Most common call chain:

```text
launch_auto_eval.py
  -> auto_eval.py
    -> pipeline_host.py
      -> evaluator/readability
    -> run_pipeline_in_docker.py
      -> evaluator/syntactic
      -> evaluator/semantic
```

## 5. Results Trees

### `results_{llm}_v4_full/`

These are the main results trees. All three stages share the same per-task directory.

Common layout:

```text
results_<llm>_v4_full/
├── eval_state_arm64.json
├── eval_state_arm32.json
├── eval_state_x64.json
├── eval_state_x86.json
└── <arch>/<src>/<bin_name>/<decompiler>/
   ├── readability/
   ├── syntactic/
   ├── semantic/
   └── report.md
```

Notes:

- `readability/` stores raw Step1 responses and the `test_results_*.json` files consumed by the pipeline
- `syntactic/` stores `repair_trace.json`, compile checkpoints, repaired sources, and rebuilt binaries
- `semantic/` stores stdout captures, traces, program JSONs, metrics, and analysis reports

## 6. Configuration Layer

### `config/llm_config.json`

Profile templates without real credentials.

### `config/llm_key_inventory.json`

References real keys via environment variables such as:

- `${BINBENCH_GLM_API_KEY}`
- `${BINBENCH_DASHSCOPE_API_KEY}`
- `${BINBENCH_MINIMAX_API_KEY}`

See [LLM_CONFIGURATION_GUIDE.md](LLM_CONFIGURATION_GUIDE.md) for details.
