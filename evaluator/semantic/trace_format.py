from __future__ import annotations

import json
from pathlib import Path
from typing import Any, Dict


SEMANTIC_TRACE_FORMAT_VERSION = 2
SEMANTIC_TRACE_CAPTURE_MODE = "write_raw_bytes_v2"
SEMANTIC_ANALYSIS_VERSION = 5


def load_json_file(path: Path) -> Dict[str, Any]:
    if not path.exists():
        return {}
    with open(path, "r", encoding="utf-8") as f:
        return json.load(f)


def semantic_output_state(semantic_dir: Path | str) -> str:
    semantic_dir = Path(semantic_dir)
    metrics_path = semantic_dir / "result_metrics.json"
    context_path = semantic_dir / "semantic_context.json"
    if not metrics_path.exists():
        return "missing"

    try:
        metrics = load_json_file(metrics_path)
    except Exception:
        return "invalid_metrics"

    context: Dict[str, Any] = {}
    if context_path.exists():
        try:
            context = load_json_file(context_path)
        except Exception:
            return "invalid_context"

    trace_format_version = context.get("trace_format_version", metrics.get("trace_format_version"))
    analysis_version = metrics.get("analysis_version")
    execution_status = metrics.get("execution_status")
    trace_runs_complete = context.get("trace_runs_complete") is True
    if not trace_runs_complete:
        trace_runs = context.get("trace_runs") or {}
        trace_runs_complete = all(
            isinstance(trace_runs.get(side), dict) and trace_runs[side].get("status")
            for side in ("original", "decompiled")
        )

    fallback_terminal = False
    if not trace_runs_complete and metrics.get("execution_status") == "success":
        fallback_terminal = all(
            (semantic_dir / f"program_{side}.json").exists()
            and (semantic_dir / f"trace_{side}.txt").exists()
            for side in ("original", "decompiled")
        )

    if (
        execution_status == "success"
        and
        trace_format_version == SEMANTIC_TRACE_FORMAT_VERSION
        and analysis_version == SEMANTIC_ANALYSIS_VERSION
        and (trace_runs_complete or fallback_terminal)
    ):
        return "current"
    if execution_status not in (None, "success"):
        return "execution_failed"
    if trace_format_version == SEMANTIC_TRACE_FORMAT_VERSION and analysis_version != SEMANTIC_ANALYSIS_VERSION:
        return "stale_analysis"
    if trace_format_version != SEMANTIC_TRACE_FORMAT_VERSION:
        return "stale_trace"
    if not (trace_runs_complete or fallback_terminal):
        return "incomplete_trace"
    return "other"
