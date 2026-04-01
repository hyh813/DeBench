# Step3 Semantic Evaluation

Step3 evaluates the runtime semantic consistency between the repaired binary and the original binary.

## 1. Main Entry

Mainline call chain:

```text
scripts/run_pipeline_in_docker.py
  -> evaluator/semantic/run_instrumentation.py
  -> evaluator/semantic/analyze_traces.py
```

## 2. Evaluation Layers

The current implementation retains three semantic evidence layers:

### Program-level

Based on comparisons of parsable stable test-case lines in stdout:

- `exact`
- `partial`
- `fail`
- `unsupported`

### Function-level

Based on comparable function-call evidence:

- evidence available
- function I/O match

### Instruction-level

Based on low-level token-sequence diagnostic evidence:

- evidence available
- similarity

Notes:

- instruction-level here means diagnostic low-level token-sequence similarity
- it is not full instruction-trace equivalence

## 3. Main Outputs

Each task writes Step3 outputs to:

```text
results_<llm>_v4_full/<arch>/<src>/<bin_name>/<decompiler>/semantic/
```

Key files:

- `program_original.json`
- `program_decompiled.json`
- `stdout_original.txt`
- `stdout_decompiled.txt`
- `trace_original.txt`
- `trace_decompiled.txt`
- `semantic_context.json`
- `result_metrics.json`
- `result_analysis.md`

## 4. `result_metrics.json`

This is the main structured Step3 output and typically contains:

- `execution_status`
- `quality_status`
- program-level metrics
- function-level metrics
- instruction-level metrics

## 5. Architecture-Specific Notes

For `arm32` and `x86`, Step3 may require native recompilation at runtime to avoid glibc incompatibilities between the original binary and the guest runtime. Related metadata is recorded in `semantic_context.json`.

## 6. Notes

- The repository retains full Step3 results trees
- Historical rerun directories and supervisor tooling have been removed
- Absolute local paths and historical rerun paths in result metadata have been cleaned to match the current repository structure
