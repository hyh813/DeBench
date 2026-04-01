# Step2 Metrics

Step2 evaluates whether decompiled code can be repaired by the LLM until it recompiles and links successfully.

## 1. Core Flow

```text
decompiled code
  -> compile / link
  -> parse errors
  -> ask the LLM for a fix
  -> apply the patch
  -> retry
```

Primary entry:

- `evaluator/syntactic/auto_fixer_v3.py`

## 2. Result Categories

Step2 ends in one of three main states:

- `success`
  - compilation and linking both succeed
- `linker_failed`
  - compilation succeeds but linking still fails
- `compile_failed`
  - compilation never succeeds

Task-level exceptional states may also occur, for example:

- `context_exceeded`
- `tool_call_invalid`
- `api_error`

## 3. Main Outputs

Each task writes Step2 outputs to:

```text
results_<llm>_v4_full/<arch>/<src>/<bin_name>/<decompiler>/syntactic/
```

Key files:

- `repair_trace.json`
- `compile_checkpoint.json`
- `fix_<bin_name>.c`
- `bin/<bin_name>_fixed`

## 4. Common Fields in `repair_trace.json`

- `final_status`
- `total_iterations`
- `history`
- `initial_errors`
- `historical_lowest_errors`

Each history entry typically includes:

- current phase
- error summary
- token usage
- `time_cost`

## 5. Mapping into Batch State Files

In `eval_state_{arch}.json`:

- `steps.syntactic.status` maps to `final_status`
- `steps.syntactic.iterations` maps to the iteration count
- `steps.syntactic.tokens` and `time_cost` are aggregated from `repair_trace.json`

## 6. Current Implementation Scope

- Only the `auto_fixer_v3.py` line is retained; older Step2 entrypoints are removed
- The results tree keeps full Step2 artifacts for reproducibility and secondary analysis
