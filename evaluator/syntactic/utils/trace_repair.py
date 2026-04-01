from __future__ import annotations

from collections import Counter
from copy import deepcopy
from typing import Dict, List, Optional, Tuple


def _get_total_tokens(entry: Dict) -> int:
    token_usage = entry.get("token_usage")
    if isinstance(token_usage, dict):
        return int(token_usage.get("total_tokens", 0) or 0)
    return 0


def classify_no_progress_entry(entry: Dict) -> Optional[str]:
    """Identify history entries that consumed no repair budget and made no code changes."""
    if not isinstance(entry, dict):
        return None

    result = entry.get("result") or {}
    error_summary = entry.get("error_summary") or {}
    total_tokens = _get_total_tokens(entry)
    tool_results = result.get("tool_results") or []
    msg = result.get("msg")

    if entry.get("compile_success") and msg == "Success":
        return None
    if tool_results or total_tokens > 0:
        return None

    if msg == "Unknown error" and error_summary.get("total_count", 0) == 0:
        return "unknown_no_progress"
    if isinstance(msg, str) and msg.startswith("LLM call failed:"):
        return "llm_call_failed_no_progress"
    if isinstance(msg, str) and msg.startswith("Linking process crashed:"):
        return "link_process_crashed_no_progress"
    if (
        entry.get("compile_success") is False
        and error_summary.get("total_count", 0) == 0
        and not msg
    ):
        return "other_zero_token_no_progress"
    if (
        entry.get("compile_success") is False
        and error_summary.get("total_count", 0) == 0
        and isinstance(msg, str)
    ):
        return "other_zero_token_no_progress"
    return None


def is_no_progress_entry(entry: Dict) -> bool:
    return classify_no_progress_entry(entry) is not None


def normalize_history(
    history: List[Dict],
) -> Tuple[List[Dict], List[Dict], Dict[int, int], Counter]:
    """
    Remove all no-progress entries and renumber remaining iterations contiguously.

    Returns:
        normalized_history
        removed_entries: [{original_iteration, classification, entry}, ...]
        old_to_new_iteration mapping
        removed_counts counter
    """
    normalized_history: List[Dict] = []
    removed_entries: List[Dict] = []
    old_to_new: Dict[int, int] = {}
    removed_counts: Counter = Counter()

    for entry in history:
        classification = classify_no_progress_entry(entry)
        original_iteration = int(entry.get("iteration", 0) or 0)
        if classification:
            removed_counts[classification] += 1
            removed_entries.append(
                {
                    "original_iteration": original_iteration,
                    "classification": classification,
                    "entry": deepcopy(entry),
                }
            )
            continue

        new_entry = deepcopy(entry)
        new_iteration = len(normalized_history) + 1
        new_entry["iteration"] = new_iteration
        normalized_history.append(new_entry)
        if original_iteration > 0:
            old_to_new[original_iteration] = new_iteration

    return normalized_history, removed_entries, old_to_new, removed_counts


def canonicalize_history(
    history: List[Dict],
    total_iterations: Optional[int] = None,
) -> Tuple[List[Dict], List[Dict], Counter]:
    """
    Collapse duplicate / out-of-range iteration entries to the latest logical history.

    The authoritative logical iteration range is [1, total_iterations] when
    total_iterations is present. For duplicate iteration numbers, the last entry wins.
    """
    if not history:
        return [], [], Counter()

    max_iteration = None
    if isinstance(total_iterations, int) and total_iterations > 0:
        max_iteration = total_iterations

    latest_by_iteration: Dict[int, Dict] = {}
    removed_entries: List[Dict] = []
    removed_counts: Counter = Counter()

    for entry in history:
        original_iteration = int(entry.get("iteration", 0) or 0)
        if original_iteration <= 0:
            removed_counts["invalid_iteration"] += 1
            removed_entries.append(
                {
                    "original_iteration": original_iteration,
                    "classification": "invalid_iteration",
                    "entry": deepcopy(entry),
                }
            )
            continue
        if max_iteration is not None and original_iteration > max_iteration:
            removed_counts["beyond_total_iterations"] += 1
            removed_entries.append(
                {
                    "original_iteration": original_iteration,
                    "classification": "beyond_total_iterations",
                    "entry": deepcopy(entry),
                }
            )
            continue
        if original_iteration in latest_by_iteration:
            removed_counts["duplicate_iteration_superseded"] += 1
            removed_entries.append(
                {
                    "original_iteration": original_iteration,
                    "classification": "duplicate_iteration_superseded",
                    "entry": deepcopy(latest_by_iteration[original_iteration]),
                }
            )
        latest_by_iteration[original_iteration] = deepcopy(entry)

    canonical_history = [latest_by_iteration[idx] for idx in sorted(latest_by_iteration)]
    return canonical_history, removed_entries, removed_counts
