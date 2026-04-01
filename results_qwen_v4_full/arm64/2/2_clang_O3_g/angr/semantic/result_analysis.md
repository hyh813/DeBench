# Semantic Evaluation Report

## Executive Summary

- Execution Status: `success`
- Quality Status: `fail`
- Analysis Version: `5`
- Program-Level: `fail`
- Function-Level: `partial`
- Low-Level: `unavailable`
- Trace Health: `available`

## 1. Program-Level Evidence

| Metric | Value |
|--------|-------|
| Comparison Key | `test_id+occurrence` |
| Denominator Policy | `stable_case_union` |
| Process Status Match | False |
| Stdout Exact Match | False |
| Stable Case Match Ratio | 0.0000 |
| Stable Cases | 0 / 51 |
| Comparison Records | 51 |

## 2. Trace Health

- Structural Evidence Usable: `True`
- Original Trace: `success` / calls=9 / parser_errors=0
- Decompiled Trace: `success` / calls=1 / parser_errors=0
- Original Trace Warnings: `none`
- Decompiled Trace Warnings: `none`

## 3. Function-Level Evidence

- Call-Evidence Segments: `2 / 4`
- Average Segment Call Sequence Ratio: `0.0000`
- Average Feature Function Match Ratio: `0.0000`
- Average Driver Print Match Ratio: `0.1667`
- Driver Print Evidence Segments: `4 / 4`
- Normalized IO Match Ratio: `0.0000` (0 / 0 matched-name pairs)

| Segment | Status | Call Evidence | Orig Calls | Decomp Calls | Orig Prints | Decomp Prints | Seq Ratio | Match Ratio | Print Ratio | IO Matches |
|---------|--------|---------------|------------|--------------|-------------|---------------|-----------|-------------|-------------|------------|
| `test_data_types_l1` | partial | False | 0 | 0 | 14 | 13 | N/A | N/A | 0.6667 | 0 / 0 |
| `test_array_types` | fail | True | 1 | 0 | 9 | 0 | 0.0000 | 0.0000 | 0.0000 | 0 / 0 |
| `test_pointer_types` | fail | False | 0 | 0 | 15 | 0 | N/A | N/A | 0.0000 | 0 / 0 |
| `test_composite_types` | fail | True | 4 | 0 | 16 | 0 | 0.0000 | 0.0000 | 0.0000 | 0 / 0 |

## 4. Low-Level Evidence

| Metric | Value |
|--------|-------|
| Method | `normalized_register_signature_sequence` |
| Similarity Score | None |
| Token Count (Orig) | 5 |
| Token Count (Decomp) | 0 |

## 5. Notes

- Trace format version: `2` (write_raw_bytes_v2)
- Analysis version: `5`
- Program-level metrics only count stable test items from the explicit stability configuration when available.
- Program-level case alignment keys by `(test_id, occurrence)` and uses the union of stable cases observed on either side as the denominator.
- Program-level `comparisons` are retained in full and `comparisons_total` records the exact count for auditability.
- UB / platform-dependent / signal / subprocess / threading-heavy cases are recorded but excluded from the program-level denominator.
- Driver print evidence is reported as unavailable when both sides capture no print lines; this is not treated as a perfect match.
- Driver-level print comparison only collapses consecutive duplicate normalized lines inside the same trace segment; raw program stdout remains available separately for program-level auditing.
- Call-sequence and feature-match aggregates exclude segments with no call evidence, so fully inlined segments no longer inflate those ratios.
- Feature-function match is symmetric: extra calls on either side lower the score; the earlier redundant `feature_*_hit_ratio` alias has been removed.
- If program-level evidence passes but function-level hooks fail to line up, the overall result degrades to partial rather than fail.
- If program-level evidence is partial but function-level hooks fail completely, the overall result still remains partial because some stable program-level evidence matched.
- If program-level evidence exists but trace capture is unavailable, function-level and low-level evidence are marked unavailable and the overall result degrades to partial.
- If both program-level and function-level evidence are unsupported, the top-level quality status is `unsupported` rather than `partial`.
- If program-level evidence is unsupported but function-level evidence is present, the top-level quality status stays `partial`: this means function-only evidence, not program-output equivalence.
- Low-level similarity uses `SequenceMatcher` over normalized tokens, so scores are length-sensitive and diagnostic-only rather than directly comparable to program-level pass rates.
- Scalar normalization is word-width aware for 32-bit and 64-bit traces before applying the coarse `PTR` bucket, reducing false pointer matches from unsigned wraparound values.
- `normalized_io_match_ratio` is computed as matched I/O signatures divided by matched-name pairs across all segments; because print strings are compared exactly after normalization, this metric is intentionally conservative for `%p`-style output.
- Low-level similarity is diagnostic-only and does not participate in pass/fail thresholding.

## 6. Performance
**Total Instrumentation & Analysis Time**: 4.45s
