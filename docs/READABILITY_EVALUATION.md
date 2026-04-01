# Step1 Readability Evaluation

Step1 evaluates the readability of decompiled code with an LLM-as-judge setup.

## 1. Entry Path

Mainline entry:

- `scripts/run_single_task.py` / `scripts/auto_eval.py`
  - call `evaluator/readability/eval_readability.py` on the host through `scripts/pipeline_host.py`

## 2. Metric Structure

The current structure uses five levels:

- `L1_lexical_clarity`
- `L2_structural_intelligibility`
- `L3_type_system_fidelity`
- `L4_semantic_transparency`
- `L5_contextual_coherence`

The evaluation also keeps 18 lower-level dimensions for finer inspection.

## 3. Scoring Policy

- `levels`: mean of the dimensions assigned to each level
- `overall_score`: arithmetic mean of the five levels

Notes:

- historical Step1 results have been normalized to this `overall_score`
- the older weighted-score interpretation is no longer used

## 4. Step1 Outputs in the Main Results Tree

Each task keeps the following files under `readability/`:

- `raw_response_<eval_id>.txt`
- `test_results_*.json`

The `test_results_*.json` files are the structured artifacts directly consumed by the main pipeline.

## 5. State Synchronization

After import or execution, these fields in `eval_state_{arch}.json`:

- `steps.readability.status`
- `steps.readability.score`

are synchronized with the Step1 artifacts stored in the main results tree.
