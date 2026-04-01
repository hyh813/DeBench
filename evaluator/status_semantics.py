from __future__ import annotations

from pathlib import Path
from typing import Optional


SKIP_STEP3_MARKER = "--skip-step3"


def report_indicates_skip_step3(report_path: Optional[str]) -> bool:
    if not report_path:
        return False
    path = Path(report_path)
    if not path.exists():
        return False
    try:
        return SKIP_STEP3_MARKER in path.read_text(encoding="utf-8")
    except OSError:
        return False


def should_use_step2_only_semantics(
    *,
    skip_step3: bool = False,
    report_path: Optional[str] = None,
    state_skip_step3: bool = False,
) -> bool:
    return bool(skip_step3 or state_skip_step3 or report_indicates_skip_step3(report_path))


def normalize_semantic_status(semantic_status: Optional[str], *, step2_only: bool) -> str:
    status = semantic_status or "pending"
    if step2_only and status in ("pending", "skipped", ""):
        return "skipped"
    return status


def derive_task_status(syntactic_status: Optional[str], semantic_status: Optional[str], *, step2_only: bool) -> str:
    syntactic = syntactic_status or "pending"
    semantic = normalize_semantic_status(semantic_status, step2_only=step2_only)

    if syntactic == "success":
        if step2_only or semantic in ("success", "skipped"):
            return "success"
        return "failed"
    if syntactic == "completed":
        return "completed"
    if syntactic == "running":
        return "running"
    if syntactic == "pending":
        return "pending"
    return "failed"
