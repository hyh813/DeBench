# Semantic Evaluation Report

## Executive Summary

- Execution Status: `success`
- Quality Status: `partial`
- Analysis Version: `5`
- Program-Level: `partial`
- Function-Level: `unavailable`
- Low-Level: `unavailable`
- Trace Health: `unavailable`

## 1. Program-Level Evidence

| Metric | Value |
|--------|-------|
| Comparison Key | `test_id+occurrence` |
| Denominator Policy | `stable_case_union` |
| Process Status Match | False |
| Comparable Stdout Exact Match | False |
| Raw Stdout Exact Match | False |
| Stdout Nonempty (Original) | True |
| Stdout Nonempty (Decompiled) | True |
| Stable Case Match Ratio | 0.1136 |
| Stable Cases | 5 / 44 |
| Original Stable Cases Observed | 44 |
| Decompiled Stable Cases Observed | 5 |
| Original Run Issue | `ok` |
| Decompiled Run Issue | `signal_11` |
| Comparison Records | 44 |

## 2. Trace Health

- Structural Evidence Usable: `False`
- Original Trace: `unknown` / calls=0 / parser_errors=0
- Decompiled Trace: `unknown` / calls=0 / parser_errors=0
- Original Trace Warnings: `none`
- Decompiled Trace Warnings: `none`

## 3. Function-Level Evidence

- Call-Evidence Segments: `0 / 4`
- Average Segment Call Sequence Ratio: `N/A`
- Average Feature Function Match Ratio: `N/A`
- Average Driver Print Match Ratio: `N/A`
- Driver Print Evidence Segments: `0 / 4`
- Normalized IO Match Ratio: `0.0000` (0 / 0 matched-name pairs)

| Segment | Status | Call Evidence | Orig Calls | Decomp Calls | Orig Prints | Decomp Prints | Seq Ratio | Match Ratio | Print Ratio | IO Matches |
|---------|--------|---------------|------------|--------------|-------------|---------------|-----------|-------------|-------------|------------|

## 4. Low-Level Evidence

| Metric | Value |
|--------|-------|
| Method | `normalized_register_signature_sequence` |
| Similarity Score | None |
| Token Count (Orig) | 0 |
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
