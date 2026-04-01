# Step2: Syntactic Correctness / Recompilation

This directory contains the Step2 implementation used by BinBench.

Only the current mainline implementation is retained here; older historical entrypoints are removed.

## Main Entrypoint

- `auto_fixer_v3.py`

It drives the full LLM-based repair loop:

```text
decompiled code
  -> attempt compile / link
  -> parse errors
  -> call the LLM for a fix
  -> apply the patch
  -> compile / link again
```

## Key Dependencies

- `utils/compiler.py`
  - parses and reuses original build commands for compilation and linking
- `utils/error_parser_v3.py`
  - extracts and aggregates compiler / linker errors
- `utils/file_manager_v3.py`
  - backs up source files and applies block-level edit patches
- `utils/logger_v2.py`
  - records repair history and writes `repair_trace.json`
- `utils/llm_client.py`
  - provides the unified LLM calling interface
- `utils/trace_repair.py`
  - normalizes historical repair traces

## Main Outputs

Each task writes Step2 outputs to:

```text
results_<llm>_v4_full/<arch>/<src>/<bin_name>/<decompiler>/syntactic/
```

Core artifacts:

- `repair_trace.json`
- `compile_checkpoint.json`
- `fix_<bin_name>.c`
- `bin/<bin_name>_fixed`

## Notes

- Historical entrypoints `auto_fixer.py` and `auto_fixer_v2.py` have been removed
- `auto_fixer_v3.py` is the only maintained Step2 mainline
- If you enter through `scripts/run_pipeline_in_docker.py` or `scripts/auto_eval.py`, this directory is invoked automatically and does not need to be run separately
