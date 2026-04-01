#!/usr/bin/env python3
"""
BinDeBench Auto Evaluator - Batch Evaluation Automation Script

This script automates the evaluation of decompiled code across multiple
architectures, compilers, and decompilers. It runs 24/7 with automatic
retry on API failures and supports checkpoint/resume.

Features:
- Automatic tmux split-screen: progress panel (top) + log panel (bottom)
- Real-time progress display
- Detailed execution logs

Usage:
    python3 scripts/auto_eval.py --arch arm64
    python3 scripts/auto_eval.py --arch all --decompiler ida ghidra
    python3 scripts/auto_eval.py --arch arm64 --no-tmux  # Disable tmux
"""

import os
import sys
import json
import time
import fcntl
import argparse
import subprocess
import re
import signal
import shlex
import tempfile
import warnings
from datetime import datetime
from enum import Enum
from dataclasses import dataclass, field
from typing import Dict, List, Optional, Any

# Project root directory
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.abspath(os.path.join(SCRIPT_DIR, ".."))
if PROJECT_ROOT not in sys.path:
    sys.path.insert(0, PROJECT_ROOT)

from evaluator.status_semantics import (
    derive_task_status,
    normalize_semantic_status,
    should_use_step2_only_semantics,
)
from evaluator.semantic.trace_format import (
    SEMANTIC_ANALYSIS_VERSION,
    SEMANTIC_TRACE_FORMAT_VERSION,
    semantic_output_state,
)
from scripts.pipeline_host import run_guest_preflight, run_host_readability

# Session name for tmux
TMUX_SESSION_NAME = "bindebench"
LIMA_SSH_NO_MUX = os.path.join(SCRIPT_DIR, "lima_ssh_no_mux.sh")
PROXY_ENV_KEYS = (
    "HTTP_PROXY",
    "HTTPS_PROXY",
    "http_proxy",
    "https_proxy",
    "ALL_PROXY",
    "all_proxy",
    "NO_PROXY",
    "no_proxy",
)

FORWARDED_RUNTIME_ENV_PREFIXES = (
    "BINBENCH_",
    "LLM_",
)

SOURCE_FILE_MAP = {
    '1': '1.c',
    '2': '2.c',
    '3': '3.c',
    '4': '4.c',
    '5-1': '5-1.cpp',
    '5-23': '5-23.c',
    '6': '6.c',
    '7': '7.c',
}

DECOMPILED_DIR_MAP = {
    'ghidra': 'ghidra_out',
    'ida': 'ida_out',
    'retdec': 'retdec_out',
    'angr': 'angr_out',
    'binaryai': 'BinaryAI_out',
}


def process_exists(pid: Optional[int]) -> bool:
    if not isinstance(pid, int) or pid <= 0:
        return False
    try:
        os.kill(pid, 0)
        return True
    except ProcessLookupError:
        return False
    except PermissionError:
        return True


def atomic_write_json_file(path: str, payload: Dict[str, Any]) -> None:
    directory = os.path.dirname(os.path.abspath(path))
    os.makedirs(directory, exist_ok=True)
    fd, tmp_path = tempfile.mkstemp(prefix=".tmp-", suffix=".json", dir=directory)
    try:
        with os.fdopen(fd, "w", encoding="utf-8") as f:
            json.dump(payload, f, indent=2, ensure_ascii=False)
            f.flush()
            os.fsync(f.fileno())
        os.replace(tmp_path, path)
    finally:
        if os.path.exists(tmp_path):
            try:
                os.unlink(tmp_path)
            except OSError:
                pass


def _mean_level_score(levels: Any) -> Optional[float]:
    if not isinstance(levels, dict):
        return None
    values = list(levels.values())
    if len(values) != 5 or not all(isinstance(v, (int, float)) for v in values):
        return None
    return round(sum(float(v) for v in values) / 5.0, 2)


def _normalize_readability_result(payload: Dict[str, Any]) -> Dict[str, Any]:
    if "control_groups" in payload:
        groups = payload.get("control_groups") or []
        if groups and isinstance(groups[0], dict):
            results = groups[0].get("results") or []
            if results and isinstance(results[0], dict):
                return results[0]
    return payload


def load_latest_readability_result(readability_dir: str) -> Optional[Dict[str, Any]]:
    if not os.path.isdir(readability_dir):
        return None
    result_files = sorted(
        f for f in os.listdir(readability_dir)
        if f.startswith("test_results_") and f.endswith(".json")
    )
    if not result_files:
        return None
    latest_path = os.path.join(readability_dir, result_files[-1])
    try:
        with open(latest_path, "r", encoding="utf-8") as f:
            return _normalize_readability_result(json.load(f))
    except (OSError, json.JSONDecodeError):
        return None


# ============== Enums ==============

class StepStatus(Enum):
    """Status for individual evaluation steps"""
    PENDING = "pending"
    SUCCESS = "success"
    FAILED = "failed"
    SKIPPED = "skipped"
    MAX_ITERS_REACHED = "max_iters_reached"
    API_ERROR = "api_error"
    NETWORK_ERROR = "network_error"
    CONTEXT_EXCEEDED = "context_exceeded"
    TOOL_CALL_INVALID = "tool_call_invalid"


class EvalStatus(Enum):
    """Overall evaluation status"""
    PENDING = "pending"
    RUNNING = "running"
    COMPLETED = "completed"
    FAILED = "failed"
    CANCELLED = "cancelled"


# ============== Data Classes ==============

@dataclass
class StepResult:
    """Result for a single evaluation step"""
    status: str = StepStatus.PENDING.value
    score: Optional[float] = None      # Only for readability
    iterations: Optional[int] = None   # Only for syntactic
    tokens: Optional[int] = None
    time_cost: Optional[float] = None
    quality_status: Optional[str] = None  # Semantic quality only

    def to_dict(self) -> Dict:
        result = {"status": self.status}
        if self.score is not None:
            result["score"] = self.score
        if self.iterations is not None:
            result["iterations"] = self.iterations
        if self.tokens is not None:
            result["tokens"] = self.tokens
        if self.time_cost is not None:
            result["time_cost"] = self.time_cost
        if self.quality_status is not None:
            result["quality_status"] = self.quality_status
        return result

    @classmethod
    def from_dict(cls, data: Dict) -> 'StepResult':
        return cls(
            status=data.get("status", StepStatus.PENDING.value),
            score=data.get("score"),
            iterations=data.get("iterations"),
            tokens=data.get("tokens"),
            time_cost=data.get("time_cost"),
            quality_status=data.get("quality_status")
        )


@dataclass
class EvalTask:
    """Single evaluation task"""
    task_id: str
    arch: str
    src: str
    bin_name: str
    decompiler: str
    source_path: str
    decompiled_path: str
    binary_path: str
    result_dir: str
    base_result_dir: Optional[str] = None
    readability: StepResult = field(default_factory=StepResult)
    syntactic: StepResult = field(default_factory=StepResult)
    semantic: StepResult = field(default_factory=StepResult)
    status: str = EvalStatus.PENDING.value
    claim_pid: Optional[int] = None
    claimed_at: Optional[str] = None

    @staticmethod
    def _infer_metadata_from_task_id(task_id: str) -> Dict[str, str]:
        parts = task_id.split("/")
        if len(parts) != 4:
            return {}

        arch, src, bin_name, decompiler = parts
        decompiler_lower = decompiler.lower()
        source_file = SOURCE_FILE_MAP.get(src, f"{src}.c")
        decompiled_dir = DECOMPILED_DIR_MAP.get(decompiler_lower, f"{decompiler}_out")

        return {
            "arch": arch,
            "src": src,
            "bin_name": bin_name,
            "decompiler": decompiler_lower,
            "source_path": f"src/{source_file}",
            "decompiled_path": f"decompiled/{decompiled_dir}/{arch}/{src}/{bin_name}.c",
            "binary_path": f"build/{arch}/{src}/{bin_name}",
            "result_dir": f"results/{arch}/{src}/{bin_name}/{decompiler_lower}",
        }

    def to_dict(self) -> Dict:
        result = {
            "task_id": self.task_id,
            "arch": self.arch,
            "src": self.src,
            "bin_name": self.bin_name,
            "decompiler": self.decompiler,
            "source_path": self.source_path,
            "decompiled_path": self.decompiled_path,
            "binary_path": self.binary_path,
            "result_dir": self.result_dir,
            "status": self.status,
            "steps": {
                "readability": self.readability.to_dict(),
                "syntactic": self.syntactic.to_dict(),
                "semantic": self.semantic.to_dict()
            }
        }
        if self.base_result_dir is not None:
            result["base_result_dir"] = self.base_result_dir
        if self.claim_pid is not None:
            result["claim_pid"] = self.claim_pid
        if self.claimed_at is not None:
            result["claimed_at"] = self.claimed_at
        return result

    @classmethod
    def from_dict(cls, data: Dict) -> 'EvalTask':
        inferred = cls._infer_metadata_from_task_id(data["task_id"])
        task = cls(
            task_id=data["task_id"],
            arch=data.get("arch") or inferred.get("arch", ""),
            src=data.get("src") or inferred.get("src", ""),
            bin_name=data.get("bin_name") or inferred.get("bin_name", ""),
            decompiler=(data.get("decompiler") or inferred.get("decompiler", "")).lower(),
            source_path=data.get("source_path") or inferred.get("source_path", ""),
            decompiled_path=data.get("decompiled_path") or inferred.get("decompiled_path", ""),
            binary_path=data.get("binary_path") or inferred.get("binary_path", ""),
            result_dir=data.get("result_dir") or inferred.get("result_dir", ""),
            base_result_dir=data.get("base_result_dir"),
            status=data.get("status", EvalStatus.PENDING.value),
            claim_pid=data.get("claim_pid"),
            claimed_at=data.get("claimed_at"),
        )
        if "steps" in data:
            task.readability = StepResult.from_dict(data["steps"].get("readability", {}))
            task.syntactic = StepResult.from_dict(data["steps"].get("syntactic", {}))
            task.semantic = StepResult.from_dict(data["steps"].get("semantic", {}))
            if "semantic_skipped" in data["steps"].get("semantic", {}):
                task.semantic.status = "skipped"
        return task

    def mark_claimed(self, pid: Optional[int] = None, claimed_at: Optional[str] = None, *, step3_only: bool = False):
        self.status = EvalStatus.RUNNING.value
        if not step3_only:
            self.syntactic.status = EvalStatus.RUNNING.value
        self.claim_pid = pid if pid is not None else os.getpid()
        self.claimed_at = claimed_at or datetime.now().isoformat()

    def clear_claim(self):
        self.claim_pid = None
        self.claimed_at = None


@dataclass
class EvalState:
    """Overall evaluation state - persisted to JSON"""
    version: str = "1.0"
    start_time: str = field(default_factory=lambda: datetime.now().isoformat())
    end_time: Optional[str] = None
    config: Dict[str, Any] = field(default_factory=dict)
    total: int = 0          # Total number of tracked tasks
    completed: int = 0      # Reached the max-iteration ceiling
    success: int = 0        # Fully successful tasks
    failed: int = 0         # Failed tasks
    tasks: Dict[str, EvalTask] = field(default_factory=dict)

    def to_dict(self) -> Dict:
        return {
            "version": self.version,
            "start_time": self.start_time,
            "end_time": self.end_time,
            "config": self.config,
            "statistics": {
                "total": self.total,
                "completed": self.completed,
                "success": self.success,
                "failed": self.failed
            },
            "tasks": {k: v.to_dict() for k, v in self.tasks.items()}
        }

    @classmethod
    def from_dict(cls, data: Dict) -> 'EvalState':
        stats = data.get("statistics", {})
        state = cls(
            version=data.get("version", "1.0"),
            start_time=data.get("start_time", datetime.now().isoformat()),
            end_time=data.get("end_time"),
            config=data.get("config", {}),
            total=stats.get("total", 0),
            completed=stats.get("completed", 0),
            success=stats.get("success", 0),
            failed=stats.get("failed", 0)
        )
        if "tasks" in data:
            state.tasks = {k: EvalTask.from_dict(v) for k, v in data["tasks"].items()}
        return state


# ============== State Manager ==============

class StateManager:
    """Manages evaluation state persistence"""

    def __init__(self, state_file: str):
        self.state_file = state_file
        self.state: Optional[EvalState] = None
        self._last_save_time = 0
        self._last_loaded_tasks_dict: Dict[str, Dict] = {}

    def load(self) -> EvalState:
        if os.path.exists(self.state_file):
            try:
                with open(self.state_file, 'r', encoding='utf-8') as f:
                    data = json.load(f)
                self.state = EvalState.from_dict(data)
            except Exception as e:
                print(f"[StateManager] Error loading state: {e}")
                self.state = EvalState()
        else:
            self.state = EvalState()
            
        self._last_loaded_tasks_dict = {k: v.to_dict() for k, v in self.state.tasks.items()}
        return self.state

    def save(self, force: bool = False):
        if self.state is None:
            return

        # Throttle saves (max once per second) unless forced
        now = time.time()
        if not force and now - self._last_save_time < 1.0:
            return

        os.makedirs(os.path.dirname(os.path.abspath(self.state_file)), exist_ok=True)

        # Concurrency-safe write: lock -> read latest -> merge -> write -> unlock
        lock_file = self.state_file + ".lock"
        with open(lock_file, 'w') as lf:
            fcntl.flock(lf, fcntl.LOCK_EX)  # Exclusive blocking lock
            try:
                self._merge_and_write()
            finally:
                fcntl.flock(lf, fcntl.LOCK_UN)

        self._last_save_time = now

    def _merge_and_write(self):
        """While holding the file lock, merge the latest on-disk state with the current process state."""
        # 1. Read the latest on-disk state (it may include writes from other processes).
        disk_state = None
        if os.path.exists(self.state_file):
            try:
                with open(self.state_file, 'r', encoding='utf-8') as f:
                    disk_data = json.load(f)
                disk_state = EvalState.from_dict(disk_data)
            except Exception:
                disk_state = None

        if disk_state is None:
            # No valid on-disk state yet; write the current in-memory state directly.
            atomic_write_json_file(self.state_file, self.state.to_dict())
            self._last_loaded_tasks_dict = {k: v.to_dict() for k, v in self.state.tasks.items()}
            return

        # 2. Merge onto the latest on-disk state and only overwrite tasks that
        #    this process actually added, modified, or deleted.
        merged_tasks = dict(disk_state.tasks)
        
        current_task_ids = set(self.state.tasks.keys())
        original_task_ids = set(self._last_loaded_tasks_dict.keys())
        
        # Remove tasks deleted in the current process.
        for task_id in original_task_ids - current_task_ids:
            merged_tasks.pop(task_id, None)
            
        # Apply new or modified tasks from the current process.
        for task_id, task in self.state.tasks.items():
            if task_id not in original_task_ids:
                merged_tasks[task_id] = task
            elif task.to_dict() != self._last_loaded_tasks_dict[task_id]:
                merged_tasks[task_id] = task

        # 3. Recompute statistics from the merged task set.
        merged_state = EvalState(
            version=self.state.version,
            start_time=disk_state.start_time,  # Preserve the earliest start_time
            end_time=self.state.end_time,
            config=self.state.config,
            tasks=merged_tasks
        )
        merged_state.total = len(merged_tasks)
        merged_state.success = sum(1 for t in merged_tasks.values() if t.status == "success")
        merged_state.completed = sum(1 for t in merged_tasks.values() if t.status == "completed")
        merged_state.failed = sum(1 for t in merged_tasks.values() if t.status == "failed")

        # 4. Persist the merged state.
        atomic_write_json_file(self.state_file, merged_state.to_dict())

        # 5. Refresh in-memory state and the local snapshot so this process sees
        #    tasks written by other processes as the new authority.
        self.state = merged_state
        self._last_loaded_tasks_dict = {k: v.to_dict() for k, v in merged_state.tasks.items()}

    def update_task(self, task: EvalTask, force_save: bool = False):
        if self.state is None:
            return
        self.state.tasks[task.task_id] = task
        self.save(force=force_save)

    def claim_task(self, task_id: str, is_retry: bool, task: Optional[EvalTask] = None, *, step3_only: bool = False) -> bool:
        """
        Atomically claim a task.
        Returns True on success; False if another process owns it, it is already
        complete, or it should not be retried.
        """
        if self.state is None:
            return False

        lock_file = self.state_file + ".lock"
        with open(lock_file, 'w') as lf:
            fcntl.flock(lf, fcntl.LOCK_EX)
            try:
                # 1. Read the latest on-disk state.
                disk_state = None
                if os.path.exists(self.state_file):
                    try:
                        with open(self.state_file, 'r', encoding='utf-8') as f:
                            disk_data = json.load(f)
                        disk_state = EvalState.from_dict(disk_data)
                    except Exception:
                        pass
                
                if disk_state is None:
                    # If we get here, the state file is broken or uninitialized.
                    return False

                # 2. Check the latest state of this task.
                disk_task = disk_state.tasks.get(task_id)
                if not disk_task:
                    # Brand-new task: allow the current process to create and claim it.
                    pass
                else:
                    # Existing task: inspect its latest status.
                    status = disk_task.status
                    syn_status = disk_task.syntactic.status
                    sem_status = disk_task.semantic.status

                    # Another process is actively working on it.
                    if status == "running":
                        return False

                    if step3_only:
                        # Step3-only mode reuses successful Step2 artifacts and only gates on semantic completion.
                        if sem_status == "success":
                            return False
                    else:
                        # Terminal success states may not be claimed again.
                        if status == "success" or syn_status in ("success", "completed"):
                            return False

                    # Terminal quota/context/tool-call failures are not retryable.
                    if not step3_only and syn_status in (
                        StepStatus.CONTEXT_EXCEEDED.value,
                        StepStatus.TOOL_CALL_INVALID.value,
                    ):
                        return False

                    # failed/pending tasks may only be claimed in retry mode,
                    # except truly new pending tasks.
                    if not step3_only and status in ("failed", "pending") and not is_retry:
                        if not (status == "pending" and syn_status == "pending"):
                            return False

                # 3. Claim it: mark it running on disk and write back immediately.
                if task_id in disk_state.tasks:
                    claim_task_obj = disk_state.tasks[task_id]
                else:
                    # For a truly new task, state.tasks may not have been pre-filled.
                    # Use the pending task object to initialize the running record.
                    claim_task_obj = task or self.state.tasks.get(task_id)
                    if claim_task_obj is None:
                        return False

                claim_task_obj.mark_claimed(step3_only=step3_only)
                disk_state.tasks[task_id] = claim_task_obj
                
                # Refresh summary counters.
                disk_state.active_running = sum(1 for t in disk_state.tasks.values() if t.status == "running")
                disk_state.total = len(disk_state.tasks)
                disk_state.success = sum(1 for t in disk_state.tasks.values() if t.status == "success")
                disk_state.completed = sum(1 for t in disk_state.tasks.values() if t.status == "completed")
                
                atomic_write_json_file(self.state_file, disk_state.to_dict())
                    
                # 4. Sync in-memory state and return success.
                self.state = disk_state
                self._last_loaded_tasks_dict = {k: v.to_dict() for k, v in disk_state.tasks.items()}
                return True

            finally:
                fcntl.flock(lf, fcntl.LOCK_UN)


# ============== Task Discoverer ==============

class TaskDiscoverer:
    """Discovers evaluation tasks from decompiled directory"""

    DECOMPILERS = ['ghidra', 'ida', 'retdec', 'angr', 'BinaryAI']
    ARCHITECTURES = ['arm64', 'arm32', 'x64', 'x86']
    SOURCES = ['1', '2', '3', '4', '5-1', '5-23', '6', '7']

    SOURCE_MAP = SOURCE_FILE_MAP

    def __init__(
        self,
        project_root: str,
        base_results_dir: str = "results",
        task_results_dir: Optional[str] = None,
        step3_only: bool = False,
    ):
        self.project_root = project_root
        self.base_results_dir = base_results_dir
        self.task_results_dir = task_results_dir or base_results_dir
        self.step3_only = step3_only

    def discover_tasks(
        self,
        arch_filter: Optional[List[str]] = None,
        decompiler_filter: Optional[List[str]] = None,
        src_filter: Optional[List[str]] = None,
        bin_name_filter: Optional[List[str]] = None,
    ) -> List[EvalTask]:
        tasks: List[EvalTask] = []
        seen_task_ids = set()
        archs = arch_filter or self.ARCHITECTURES
        decompilers = decompiler_filter or self.DECOMPILERS
        normalized_decompilers = {name.lower() for name in decompilers}
        sources = src_filter or self.SOURCES
        bin_names = set(bin_name_filter or [])

        for decompiler in decompilers:
            decompiled_dir = os.path.join(self.project_root, f"decompiled/{decompiler}_out")
            if not os.path.exists(decompiled_dir):
                continue

            for arch in archs:
                arch_dir = os.path.join(decompiled_dir, arch)
                if not os.path.exists(arch_dir):
                    continue

                for src in sources:
                    src_dir = os.path.join(arch_dir, src)
                    if not os.path.exists(src_dir):
                        continue

                    for c_file in sorted(os.listdir(src_dir)):
                        if not c_file.endswith('.c'):
                            continue
                        bin_name = c_file[:-2]
                        if bin_names and bin_name not in bin_names:
                            continue
                        task = self._create_task(arch, src, bin_name, decompiler)
                        if task and task.task_id not in seen_task_ids:
                            tasks.append(task)
                            seen_task_ids.add(task.task_id)

        if self.step3_only:
            for arch in archs:
                state_path = os.path.join(self.project_root, self.base_results_dir, f"eval_state_{arch}.json")
                if not os.path.exists(state_path):
                    continue
                try:
                    with open(state_path, "r", encoding="utf-8") as f:
                        state = json.load(f)
                except Exception:
                    continue
                for task_id, task_meta in (state.get("tasks") or {}).items():
                    task_arch = task_meta.get("arch") or arch
                    task_src = str(task_meta.get("src"))
                    task_bin_name = task_meta.get("bin_name")
                    task_decompiler = str(task_meta.get("decompiler") or "").lower()
                    syn_status = ((task_meta.get("steps") or {}).get("syntactic") or {}).get("status")
                    if task_arch not in archs:
                        continue
                    if task_src not in sources:
                        continue
                    if bin_names and task_bin_name not in bin_names:
                        continue
                    if normalized_decompilers and task_decompiler not in normalized_decompilers:
                        continue
                    if syn_status != "success":
                        continue
                    if task_id in seen_task_ids:
                        continue
                    task = self._create_task(task_arch, task_src, task_bin_name, task_decompiler)
                    if task and self._has_successful_step2_artifacts(task):
                        tasks.append(task)
                        seen_task_ids.add(task.task_id)

        return tasks

    def _create_task(self, arch: str, src: str, bin_name: str, decompiler: str) -> Optional[EvalTask]:
        source_file = SOURCE_FILE_MAP.get(src, f"{src}.c")
        source_path = f"src/{source_file}"

        if not os.path.exists(os.path.join(self.project_root, source_path)):
            return None

        decompiled_path = f"decompiled/{decompiler}_out/{arch}/{src}/{bin_name}.c"
        binary_path = f"build/{arch}/{src}/{bin_name}"
        result_dir = f"{self.task_results_dir}/{arch}/{src}/{bin_name}/{decompiler.lower()}"
        base_result_dir = (
            f"{self.base_results_dir}/{arch}/{src}/{bin_name}/{decompiler.lower()}"
            if self.step3_only else None
        )
        task_id = f"{arch}/{src}/{bin_name}/{decompiler.lower()}"

        return EvalTask(
            task_id=task_id,
            arch=arch,
            src=src,
            bin_name=bin_name,
            decompiler=decompiler.lower(),
            source_path=source_path,
            decompiled_path=decompiled_path,
            binary_path=binary_path,
            result_dir=result_dir,
            base_result_dir=base_result_dir,
        )


# ============== Retry Handler ==============

class RetryHandler:
    """Handles retry logic with exponential backoff"""

    BACKOFF_TIMES = [60, 120, 300, 600, 1200, 1800, 3600]
    MAX_RETRIES = len(BACKOFF_TIMES)

    RETRYABLE_PATTERNS = [
        r"rate.?limit", r"429", r"503", r"timeout",
        r"connection", r"network", r"ECONNRESET", r"ETIMEDOUT",
        r"ConnectionError", r"APIError", r"ServiceUnavailable"
    ]

    CONTEXT_EXCEEDED_PATTERNS = [
        r"context.?length",
        r"context.?window",
        r"context window exceeds limit",
        r"longer than.*context",
        r"exceeded.*max.*token",
        r"input tokens.*exceeded",
        r"max_prompt_tokens",
        r"maximum context",
        r"InvalidParameter: Range of input length should be"
    ]

    @classmethod
    def is_retryable(cls, error: Exception) -> bool:
        error_str = str(error).lower()
        return any(re.search(p, error_str, re.IGNORECASE) for p in cls.RETRYABLE_PATTERNS)

    @classmethod
    def is_context_exceeded(cls, error: Exception) -> bool:
        error_str = str(error).lower()
        return any(re.search(p, error_str, re.IGNORECASE) for p in cls.CONTEXT_EXCEEDED_PATTERNS)


class InfrastructureUnavailableError(RuntimeError):
    """Raised when the required Lima instance is not ready for evaluation."""

    @classmethod
    def get_backoff_time(cls, attempt: int) -> int:
        if attempt >= len(cls.BACKOFF_TIMES):
            return cls.BACKOFF_TIMES[-1]
        return cls.BACKOFF_TIMES[attempt]


# ============== Pipeline Executor ==============

class PipelineExecutor:
    """Executes evaluation pipeline via Lima VM with real-time output"""

    LIMA_INSTANCE_MAP = {
        'arm64': 'binbench',
        'arm32': 'binbench-arm32',
        'x64': 'binbench-x64',
        'x86': 'binbench-x86'
    }
    PYTHON_BIN_MAP = {
        'arm64': 'python3',
        'arm32': 'python3.8',
        'x64': 'python3',
        'x86': 'python3.8',
    }

    def __init__(
        self,
        project_root: str,
        max_iters: int = 50,
        llm_profile: str = 'glm',
        results_dir: str = 'results',
        semantic_results_dir: Optional[str] = None,
        step3_only: bool = False,
        llm_key_index: int = None,
        llm_key_alias: str = None
    ):
        self.project_root = project_root
        self.max_iters = max_iters
        self.llm_profile = llm_profile
        self.results_dir = results_dir
        self.semantic_results_dir = semantic_results_dir or results_dir
        self.step3_only = step3_only
        self.llm_key_index = llm_key_index
        self.llm_key_alias = llm_key_alias
        self.skip_step3 = False
        self._instance_status_cache: Dict[str, Optional[str]] = {}
        self._semantic_metadata_warnings: set[str] = set()

    def _build_lima_env(self) -> Dict[str, str]:
        env = os.environ.copy()
        for key in PROXY_ENV_KEYS:
            env.pop(key, None)
        if os.path.exists(LIMA_SSH_NO_MUX):
            env["SSH"] = LIMA_SSH_NO_MUX
        return env

    def _collect_forwarded_runtime_env(self) -> Dict[str, str]:
        forwarded: Dict[str, str] = {}
        for key, value in os.environ.items():
            if not value:
                continue
            if key.startswith(FORWARDED_RUNTIME_ENV_PREFIXES):
                forwarded[key] = value
        return forwarded

    def _create_guest_env_script(self) -> Optional[str]:
        forwarded = self._collect_forwarded_runtime_env()
        if not forwarded:
            return None

        runtime_dir = os.path.join(self.project_root, ".binbench_runtime")
        os.makedirs(runtime_dir, exist_ok=True)
        fd, path = tempfile.mkstemp(prefix="guest-env-", suffix=".sh", dir=runtime_dir, text=True)
        try:
            with os.fdopen(fd, "w", encoding="utf-8") as f:
                f.write("#!/bin/sh\n")
                for key, value in sorted(forwarded.items()):
                    f.write(f"export {key}={shlex.quote(value)}\n")
            os.chmod(path, 0o600)
            return path
        except Exception:
            if os.path.exists(path):
                os.unlink(path)
            raise

    def _build_remote_shell_command(self, remote_cmd: List[str], guest_env_script: Optional[str]) -> str:
        quoted_remote = " ".join(shlex.quote(part) for part in remote_cmd)
        if guest_env_script:
            return f". {shlex.quote(guest_env_script)} && exec {quoted_remote}"
        return f"exec {quoted_remote}"

    def _semantic_dir(self, task: EvalTask) -> str:
        return os.path.join(self.project_root, task.result_dir, "semantic")

    def _warn_semantic_metadata(self, key: str, message: str) -> None:
        if key in self._semantic_metadata_warnings:
            return
        self._semantic_metadata_warnings.add(key)
        warnings.warn(message)

    def _read_json_if_valid(self, path: str) -> Optional[Dict[str, Any]]:
        if not os.path.exists(path):
            return None
        try:
            with open(path, "r", encoding="utf-8") as f:
                return json.load(f)
        except (OSError, json.JSONDecodeError) as e:
            self._warn_semantic_metadata(path, f"[auto_eval] Ignoring unreadable semantic metadata {path}: {e}")
            return None

    def _semantic_output_versions(self, task: EvalTask) -> tuple[Optional[int], Optional[int]]:
        semantic_dir = self._semantic_dir(task)
        context_path = os.path.join(semantic_dir, "semantic_context.json")
        metrics_path = os.path.join(semantic_dir, "result_metrics.json")
        context = self._read_json_if_valid(context_path) or {}
        metrics = self._read_json_if_valid(metrics_path) or {}
        trace_format_version = context.get("trace_format_version")
        if trace_format_version is None:
            trace_format_version = metrics.get("trace_format_version")
        return trace_format_version, metrics.get("analysis_version")

    def _semantic_trace_capture_complete(self, task: EvalTask) -> bool:
        semantic_dir = self._semantic_dir(task)
        context_path = os.path.join(semantic_dir, "semantic_context.json")
        context = self._read_json_if_valid(context_path) or {}
        if context.get("trace_runs_complete") is True:
            return True
        trace_runs = context.get("trace_runs") or {}
        return all(
            isinstance(trace_runs.get(side), dict) and trace_runs[side].get("status")
            for side in ("original", "decompiled")
        )

    def can_refresh_semantic_analysis_only(self, task: EvalTask) -> bool:
        semantic_dir = self._semantic_dir(task)
        required_paths = (
            "program_original.json",
            "program_decompiled.json",
            "trace_original.txt",
            "trace_decompiled.txt",
        )
        if not all(os.path.exists(os.path.join(semantic_dir, name)) for name in required_paths):
            return False
        if not self._semantic_trace_capture_complete(task):
            return False

        trace_format_version, analysis_version = self._semantic_output_versions(task)
        return (
            trace_format_version == SEMANTIC_TRACE_FORMAT_VERSION
            and analysis_version != SEMANTIC_ANALYSIS_VERSION
        )

    def _step3_artifacts_ready(self, task: EvalTask) -> bool:
        report_path = os.path.join(self.project_root, task.result_dir, "report.md")
        metrics_path = os.path.join(self._semantic_dir(task), "result_metrics.json")
        if not (os.path.exists(report_path) and os.path.exists(metrics_path)):
            return False
        trace_format_version, analysis_version = self._semantic_output_versions(task)
        return (
            trace_format_version == SEMANTIC_TRACE_FORMAT_VERSION
            and analysis_version == SEMANTIC_ANALYSIS_VERSION
        )

    def _readability_step_from_results(self, result_dir: str) -> StepResult:
        readability_dir = os.path.join(result_dir, "readability")
        payload = load_latest_readability_result(readability_dir)
        if payload is None:
            return StepResult(status=StepStatus.PENDING.value)

        score = _mean_level_score(payload.get("levels"))
        if score is None and isinstance(payload.get("overall_score"), (int, float)):
            score = float(payload["overall_score"])

        status = StepStatus.SUCCESS.value
        error = payload.get("error")
        if error == "context_length_exceeded":
            status = StepStatus.CONTEXT_EXCEEDED.value
        elif error and score is None:
            status = StepStatus.FAILED.value

        tokens_payload = payload.get("tokens") or payload.get("token_usage") or {}
        tokens = tokens_payload.get("total")
        if tokens is None:
            tokens = tokens_payload.get("total_tokens")

        time_cost = payload.get("time_cost_seconds")
        if time_cost is None:
            time_cost = payload.get("time_cost")

        return StepResult(
            status=status,
            score=score,
            tokens=tokens if isinstance(tokens, int) else None,
            time_cost=float(time_cost) if isinstance(time_cost, (int, float)) else None,
        )

    def requires_lima(self, task: EvalTask) -> bool:
        return not self.can_refresh_semantic_analysis_only(task)

    @classmethod
    def python_bin_for_arch(cls, arch: str) -> str:
        return cls.PYTHON_BIN_MAP.get(arch, 'python3')

    def _get_lima_instance_status(self, instance_name: str) -> Optional[str]:
        if instance_name in self._instance_status_cache:
            return self._instance_status_cache[instance_name]

        status = None
        stderr_text = ""
        try:
            result = subprocess.run(
                ['limactl', 'list', '--format', 'json', instance_name],
                capture_output=True,
                text=True,
                cwd=self.project_root,
                check=False,
            )
            stderr_text = result.stderr or ""
            for line in result.stdout.splitlines():
                line = line.strip()
                if not line or not line.startswith('{'):
                    continue
                try:
                    payload = json.loads(line)
                except json.JSONDecodeError:
                    continue
                if payload.get('name') == instance_name:
                    status = payload.get('status')
                    break
        except Exception:
            status = None

        # In the Codex sandbox, `limactl list` can surface a false "Broken"
        # status when the Lima hostagent socket is inaccessible, even though
        # the guest itself is still reachable for real execution.
        if (
            status == 'Broken'
            and 'ha.sock' in stderr_text
            and 'operation not permitted' in stderr_text
        ):
            status = None

        self._instance_status_cache[instance_name] = status
        return status

    def _probe_instance_shell_ready(self, instance_name: str) -> bool:
        """Best-effort SSH probe for guests whose Lima guestagent is unhealthy."""
        ssh_config = os.path.expanduser(os.path.join("~", ".lima", instance_name, "ssh.config"))
        if not os.path.exists(ssh_config):
            return False

        ssh_bin = LIMA_SSH_NO_MUX if os.path.exists(LIMA_SSH_NO_MUX) else "ssh"
        try:
            result = subprocess.run(
                [
                    ssh_bin,
                    '-F', ssh_config,
                    f'lima-{instance_name}',
                    'bash', '-lc',
                    f'test -d "{self.project_root}"',
                ],
                capture_output=True,
                text=True,
                cwd=self.project_root,
                env=self._build_lima_env(),
                timeout=20,
                check=False,
            )
        except Exception:
            return False
        return result.returncode == 0

    def ensure_instance_ready(self, arch: str):
        instance_name = self.LIMA_INSTANCE_MAP.get(arch, 'binbench')
        status = self._get_lima_instance_status(instance_name)

        # If status detection fails, don't hard-block. Let the real command speak.
        if not status:
            return

        if status == 'Running':
            return

        if status == 'Stopped':
            raise InfrastructureUnavailableError(
                f"Lima instance `{instance_name}` is stopped. Start it first: `limactl start {instance_name}`"
            )

        if status == 'Broken' and self._probe_instance_shell_ready(instance_name):
            print(
                f"[PipelineExecutor] Lima instance `{instance_name}` reports Broken "
                "at the guestagent layer, but SSH/mount are usable. "
                f"Continuing in degraded `{arch}` compatibility mode."
            )
            self._instance_status_cache[instance_name] = 'Running'
            return

        raise InfrastructureUnavailableError(
            f"Lima instance `{instance_name}` is not ready (status={status}). Fix it before running `{arch}` evaluation."
        )

    def execute(self, task: EvalTask, state_manager: StateManager, restart: bool = False, skip_step3: bool = False) -> EvalTask:
        """Execute evaluation with real-time output"""
        self.skip_step3 = skip_step3
        run_locally = self.can_refresh_semantic_analysis_only(task)
        if not run_locally:
            self.ensure_instance_ready(task.arch)
            run_guest_preflight(self.project_root, task.arch, self.llm_profile)

        if not run_locally and not self.step3_only:
            readability_root = os.path.join(self.project_root, task.result_dir)
            readability_step = self._readability_step_from_results(readability_root)
            if restart or readability_step.status == StepStatus.PENDING.value:
                print(f"\n{'=' * 70}")
                print(
                    f" Host Step 1: Readability ({task.task_id}, profile={self.llm_profile})"
                )
                print(f"{'=' * 70}\n")

                run_host_readability(
                    source_path=os.path.join(self.project_root, task.source_path),
                    decompiled_path=os.path.join(self.project_root, task.decompiled_path),
                    output_dir=os.path.join(readability_root, "readability"),
                    llm_profile=self.llm_profile,
                    llm_key_alias=self.llm_key_alias,
                    llm_key_index=self.llm_key_index,
                    on_line=lambda line: (print(line, end=""), sys.stdout.flush()),
                )
                task.readability = self._readability_step_from_results(readability_root)
                state_manager.update_task(task, force_save=True)
            else:
                task.readability = readability_step

        remote_cmd = [
            sys.executable if run_locally else self.python_bin_for_arch(task.arch),
            '-u', 'scripts/run_pipeline_in_docker.py',
            task.source_path,
            task.decompiled_path,
            '--original-bin', task.binary_path,
            '--max-iters', str(self.max_iters),
            '--llm-profile', self.llm_profile,
            '--results-dir', self.results_dir,
        ]
        if self.step3_only:
            remote_cmd.append('--step3-only')
            if self.semantic_results_dir != self.results_dir:
                remote_cmd.extend(['--semantic-results-dir', self.semantic_results_dir])
        elif not run_locally:
            remote_cmd.append('--skip-readability')
        if self.skip_step3:
            remote_cmd.append('--skip-step3')
        if self.llm_key_alias:
            remote_cmd.extend(['--llm-key-alias', self.llm_key_alias])
        if self.llm_key_index is not None:
            remote_cmd.extend(['--llm-key-index', str(self.llm_key_index)])
        if restart:
            remote_cmd.append('--restart')

        guest_env_script = None
        if not run_locally:
            lima_instance = self.LIMA_INSTANCE_MAP.get(task.arch, 'binbench')
            guest_env_script = self._create_guest_env_script()
            cmd = [
                'limactl', 'shell', lima_instance,
                '/bin/sh', '-lc',
                self._build_remote_shell_command(remote_cmd, guest_env_script),
            ]
            display_cmd = (
                f"limactl shell {lima_instance} /bin/sh -lc "
                f"\"[forward host BINBENCH_*/LLM_* env] {' '.join(shlex.quote(part) for part in remote_cmd)}\""
            )
        else:
            cmd = list(remote_cmd)
            display_cmd = " ".join(shlex.quote(part) for part in cmd)

        print(f"\n{'='*70}")
        print(f" Executing: {display_cmd}")
        print(f"{'='*70}\n")

        task.status = EvalStatus.RUNNING.value
        state_manager.update_task(task, force_save=True)

        max_retries = RetryHandler.MAX_RETRIES
        last_error = None

        start_time = time.time()  # Track overall task time

        try:
            for attempt in range(max_retries + 1):
                try:
                    # Use Popen for real-time output
                    process = subprocess.Popen(
                        cmd,
                        stdout=subprocess.PIPE,
                        stderr=subprocess.STDOUT,
                        text=True,
                        cwd=self.project_root,
                        bufsize=1,  # Line buffered
                        env=os.environ.copy() if run_locally else self._build_lima_env(),
                    )

                    # Use a thread to read output to avoid blocking
                    import threading
                    import queue

                    output_queue = queue.Queue()
                    reader_stop = threading.Event()

                    def read_output():
                        try:
                            for line in iter(process.stdout.readline, ''):
                                if reader_stop.is_set():
                                    break
                                output_queue.put(line)
                        except:
                            pass

                    reader_thread = threading.Thread(target=read_output, daemon=True)
                    reader_thread.start()

                    # Process output with timeout checking
                    start_time = time.time()
                    last_output_time = start_time
                    timeout = 7200  # 2 hours
                    forced_transport_shutdown = False

                    while True:
                        # Check overall timeout
                        if time.time() - start_time > timeout:
                            reader_stop.set()
                            process.kill()
                            raise subprocess.TimeoutExpired(cmd, timeout)

                        # Check if process has finished
                        if process.poll() is not None:
                            # Read any remaining output
                            while True:
                                try:
                                    line = output_queue.get_nowait()
                                    print(line, end='')
                                    sys.stdout.flush()
                                    if 'Iteration' in line and '/' in line:
                                        match = re.search(r'Iteration\s+(\d+)', line)
                                        if match:
                                            task.syntactic.iterations = int(match.group(1))
                                            state_manager.update_task(task)
                                except queue.Empty:
                                    break
                            break

                        # Read output with timeout
                        try:
                            line = output_queue.get(timeout=1.0)
                            print(line, end='')
                            sys.stdout.flush()
                            last_output_time = time.time()

                            # Update syntactic iterations from output
                            if 'Iteration' in line and '/' in line:
                                match = re.search(r'Iteration\s+(\d+)', line)
                                if match:
                                    task.syntactic.iterations = int(match.group(1))
                                    state_manager.update_task(task)
                        except queue.Empty:
                            if (
                                self.step3_only
                                and time.time() - last_output_time > 15
                                and self._step3_artifacts_ready(task)
                            ):
                                print(
                                    "\n[PipelineExecutor] Step3 artifacts are complete but the transport process is still alive; "
                                    "forcing subprocess shutdown."
                                )
                                forced_transport_shutdown = True
                                reader_stop.set()
                                process.terminate()
                                try:
                                    process.wait(timeout=10)
                                except subprocess.TimeoutExpired:
                                    process.kill()
                                    process.wait()
                                while True:
                                    try:
                                        line = output_queue.get_nowait()
                                        print(line, end='')
                                        sys.stdout.flush()
                                    except queue.Empty:
                                        break
                                break
                            # No output, continue checking
                            continue

                    reader_stop.set()
                    process.wait()

                    # Calculate time cost
                    time_cost = time.time() - start_time

                    # Parse results
                    task = self._parse_results(task)
                    report_path = os.path.join(self.project_root, task.result_dir, "report.md")

                    transport_completed = process.returncode == 0 or forced_transport_shutdown

                    if transport_completed and not os.path.exists(report_path):
                        task.status = EvalStatus.FAILED.value
                        if task.syntactic.status in ("running", StepStatus.PENDING.value):
                            task.syntactic.status = StepStatus.FAILED.value
                        print("\n[PipelineExecutor] Task exited without report.md; treating as failed infrastructure execution")
                    elif transport_completed:
                        task.status = EvalStatus.COMPLETED.value
                        print(f"\n[PipelineExecutor] Task completed successfully")
                    else:
                        task.status = EvalStatus.FAILED.value
                        if task.syntactic.status in ("running", StepStatus.PENDING.value):
                            task.syntactic.status = StepStatus.FAILED.value
                        print(f"\n[PipelineExecutor] Task failed with return code {process.returncode}")

                    return task

                except subprocess.TimeoutExpired:
                    last_error = Exception("Process timeout (2h)")
                    process.kill()
                    print(f"\n[PipelineExecutor] Timeout after 2 hours")

                    if attempt < max_retries:
                        wait_time = RetryHandler.get_backoff_time(attempt)
                        print(f"[RetryHandler] Retrying in {wait_time}s...")
                        time.sleep(wait_time)
                    else:
                        task.status = EvalStatus.FAILED.value
                        task.syntactic.status = StepStatus.NETWORK_ERROR.value
                        return task

                except Exception as e:
                    last_error = e
                    print(f"\n[PipelineExecutor] Error: {e}")

                    if RetryHandler.is_context_exceeded(e):
                        task.status = EvalStatus.FAILED.value
                        task.syntactic.status = StepStatus.CONTEXT_EXCEEDED.value
                        return task
                    if RetryHandler.is_retryable(e) and attempt < max_retries:
                        wait_time = RetryHandler.get_backoff_time(attempt)
                        print(f"[RetryHandler] Retrying in {wait_time}s...")
                        time.sleep(wait_time)
                    else:
                        task.status = EvalStatus.FAILED.value
                        task.syntactic.status = StepStatus.API_ERROR.value if RetryHandler.is_retryable(e) else StepStatus.FAILED.value
                        return task

            task.status = EvalStatus.FAILED.value
            return task
        finally:
            if guest_env_script and os.path.exists(guest_env_script):
                try:
                    os.unlink(guest_env_script)
                except OSError:
                    pass

    def _parse_results(self, task: EvalTask) -> EvalTask:
        """Parse evaluation results from output files"""
        result_dir = os.path.join(self.project_root, task.result_dir)
        syntactic_result_dir = os.path.join(self.project_root, task.base_result_dir or task.result_dir)

        task.readability = self._readability_step_from_results(result_dir)

        # Parse syntactic
        repair_trace_path = os.path.join(syntactic_result_dir, "syntactic", "repair_trace.json")
        if os.path.exists(repair_trace_path):
            try:
                with open(repair_trace_path, 'r') as f:
                    trace = json.load(f)

                iterations = trace.get('total_iterations', 0)
                task.syntactic.iterations = iterations

                # Calculate total tokens and time from history
                total_tokens = 0
                total_time = 0.0
                for entry in trace.get('history', []):
                    if entry.get('token_usage'):
                        total_tokens += entry['token_usage'].get('total_tokens', 0)
                    total_time += entry.get('time_cost', 0)

                task.syntactic.tokens = total_tokens if total_tokens > 0 else None
                task.syntactic.time_cost = total_time if total_time > 0 else None

                # Check if binary was generated
                bin_path = os.path.join(syntactic_result_dir, "syntactic", "bin", f"{task.bin_name}_fixed")
                binary_exists = os.path.exists(bin_path)

                # Determine status:
                # - success: binary generated
                # - completed: reached max iterations (50) but no binary
                # - failed: other cases
                termination_reason = trace.get("termination_reason")
                if binary_exists:
                    task.syntactic.status = "success"
                elif termination_reason == "context_length_exceeded":
                    task.syntactic.status = StepStatus.CONTEXT_EXCEEDED.value
                elif termination_reason == "tool_call_arguments_invalid":
                    task.syntactic.status = StepStatus.TOOL_CALL_INVALID.value
                elif iterations >= self.max_iters:
                    task.syntactic.status = "completed"
                else:
                    task.syntactic.status = "failed"
            except (OSError, json.JSONDecodeError) as e:
                print(f"[PipelineExecutor] Warning: failed to parse syntactic trace for {task.task_id}: {e}")

        # Parse semantic
        metrics_path = os.path.join(result_dir, "semantic", "result_metrics.json")
        if os.path.exists(metrics_path):
            try:
                with open(metrics_path, 'r', encoding='utf-8') as f:
                    metrics = json.load(f)
                task.semantic.status = "success" if metrics.get("execution_status") == "success" else "failed"
                task.semantic.quality_status = metrics.get("quality_status")
            except (OSError, json.JSONDecodeError) as e:
                print(f"[PipelineExecutor] Warning: failed to parse semantic metrics for {task.task_id}: {e}")
        step2_only = should_use_step2_only_semantics(skip_step3=getattr(self, "skip_step3", False))
        task.semantic.status = normalize_semantic_status(task.semantic.status, step2_only=step2_only)

        return task


# ============== Auto Evaluator ==============

class AutoEvaluator:
    """Main controller for automated batch evaluation"""

    def __init__(
        self,
        project_root: str,
        state_file: str,
        arch_filter: Optional[List[str]] = None,
        decompiler_filter: Optional[List[str]] = None,
        src_filter: Optional[List[str]] = None,
        bin_name_filter: Optional[List[str]] = None,
        restart: bool = False,
        retry: bool = False,
        skip_step3: bool = False,
        step3_only: bool = False,
        max_iters: int = 50,
        llm_profile: str = 'glm',
        results_dir: str = 'results',
        semantic_results_dir: Optional[str] = None,
    ):
        self.project_root = project_root
        self.restart = restart
        self.retry = retry
        self.skip_step3 = skip_step3
        self.step3_only = step3_only
        self.max_iters = max_iters
        self.llm_profile = llm_profile
        self.results_dir = results_dir
        self.semantic_results_dir = semantic_results_dir or results_dir
        self.arch_filter = arch_filter
        self.decompiler_filter = decompiler_filter
        self.src_filter = src_filter
        self.bin_name_filter = bin_name_filter
        self.state_manager = StateManager(state_file)
        self.discoverer = TaskDiscoverer(
            project_root,
            base_results_dir=results_dir,
            task_results_dir=self.semantic_results_dir,
            step3_only=step3_only,
        )
        # Read LLM_KEY_INDEX from the environment.
        self.llm_key_index = int(os.environ['LLM_KEY_INDEX']) if os.environ.get('LLM_KEY_INDEX') else None
        self.llm_key_alias = os.environ.get('LLM_KEY_ALIAS')
        self.executor = PipelineExecutor(
            project_root,
            max_iters,
            llm_profile,
            results_dir,
            self.semantic_results_dir,
            step3_only,
            self.llm_key_index,
            self.llm_key_alias
        )
        self.running = True

    def run(self):
        """Run the automated evaluation"""
        state = self.state_manager.load()

        # Reconcile the state file with the results directory.
        print("[AutoEvaluator] Syncing state with results directory...")
        state = self._sync_state_with_results(state)
        self.state_manager.save(force=True)

        # Discover tasks
        tasks = self.discoverer.discover_tasks(
            arch_filter=self.arch_filter,
            decompiler_filter=self.decompiler_filter,
            src_filter=self.src_filter,
            bin_name_filter=self.bin_name_filter,
        )

        if not tasks:
            print("[AutoEvaluator] No tasks found!")
            return

        if self.step3_only:
            eligible_tasks = [t for t in tasks if self._has_successful_step2_artifacts(t)]
            skipped_count = len(tasks) - len(eligible_tasks)
            tasks = eligible_tasks
            print(
                f"[AutoEvaluator] Step3-only eligible tasks: {len(tasks)}"
                f"{f' (skipped {skipped_count} without successful Step2 artifacts)' if skipped_count else ''}"
            )
            if not tasks:
                print("[AutoEvaluator] No Step3-eligible tasks found.")
                return

        # Preflight Lima readiness only for tasks that still need guest execution.
        requires_lima = getattr(self.executor, "requires_lima", lambda task: True)
        arches_in_run = sorted({task.arch for task in tasks if requires_lima(task)})
        try:
            for arch in arches_in_run:
                self.executor.ensure_instance_ready(arch)
        except InfrastructureUnavailableError as e:
            print(f"[AutoEvaluator] Infrastructure unavailable: {e}")
            return

        # Build the retry set: tasks that are not successful and did not already
        # reach a terminal non-retryable state.
        retry_task_ids = set()
        for t_id, t in state.tasks.items():
            # Only retry failed/pending/running tasks, not success/completed.
            if t.status in ('failed', 'pending', 'running'):
                if self.step3_only:
                    if t.semantic.status != "success":
                        retry_task_ids.add(t_id)
                else:
                    # Exclude tasks that already reached the max-iteration linker-failed terminal state.
                    if t.syntactic.status not in (
                        'success',
                        'completed',
                        StepStatus.CONTEXT_EXCEEDED.value,
                        StepStatus.TOOL_CALL_INVALID.value,
                    ):
                        retry_task_ids.add(t_id)

        # Filter completed
        if not self.restart:
            if self.retry:
                tasks = [t for t in tasks if not self._is_already_completed(t) or t.task_id in retry_task_ids]
            else:
                tasks = [t for t in tasks if not self._is_already_completed(t)]
            print(f"[AutoEvaluator] {len(tasks)} tasks remaining")

        if self.retry:
            retry_tasks = [t for t in tasks if t.task_id in retry_task_ids]
            other_tasks = [t for t in tasks if t.task_id not in retry_task_ids]
            if retry_tasks:
                print(f"[AutoEvaluator] 🔄 Re-evaluating {len(retry_tasks)} previously failed/pending tasks first")
            tasks = retry_tasks + other_tasks

        # Update runtime config on the authoritative in-memory state.
        runtime_config = {
            "max_iters": self.max_iters,
            "llm_profile": self.llm_profile,
            "skip_step3": self.skip_step3,
            "step3_only": self.step3_only,
        }
        if self.bin_name_filter:
            runtime_config["bin_name_filter"] = self.bin_name_filter
        if self.semantic_results_dir != self.results_dir:
            runtime_config["semantic_results_dir"] = self.semantic_results_dir
        if self.llm_key_alias:
            runtime_config["llm_key_alias"] = self.llm_key_alias
        self.state_manager.state.config = dict(runtime_config)
        # Note: Do NOT pre-populate state.tasks - only add when task completes

        # Execute tasks
        for i, task in enumerate(tasks):
            if not self.running:
                break

            # In parallel mode, use an atomic claim to avoid duplicate work.
            is_failed_retry = self.retry and task.task_id in retry_task_ids
            
            # claim_task atomically marks the task as running on disk.
            # If it returns False, another process owns it, it is already done,
            # or it should not be retried in the current mode.
            if not self.state_manager.claim_task(task.task_id, is_failed_retry, task=task, step3_only=self.step3_only):
                print(f"\n[AutoEvaluator] Skipping already-claimed or completed task: {task.task_id}")
                
                # Pull the latest authoritative task state into memory for accurate final stats.
                if task.task_id in self.state_manager.state.tasks:
                    task = self.state_manager.state.tasks[task.task_id]
                continue

            # claim_task reloads state from disk, so later writes must use the
            # refreshed authoritative state object, not the stale startup reference.
            self.state_manager.state.config = dict(runtime_config)
            claimed_task = self.state_manager.state.tasks.get(task.task_id)
            if claimed_task:
                task.claim_pid = claimed_task.claim_pid
                task.claimed_at = claimed_task.claimed_at
                task.status = claimed_task.status
                task.syntactic.status = claimed_task.syntactic.status

            if self.step3_only:
                self._ensure_semantic_task_dirs(task)

            # Build command string
            cmd_str = self._build_command_string(task)

            try:
                task = self.executor.execute(task, self.state_manager, self.restart, self.skip_step3)

                if self.step3_only:
                    if task.semantic.status == "success":
                        task.status = "success"
                    elif task.semantic.status == StepStatus.PENDING.value:
                        task.status = EvalStatus.PENDING.value
                    else:
                        task.status = "failed"
                else:
                    step2_only = should_use_step2_only_semantics(skip_step3=self.skip_step3)
                    task.semantic.status = normalize_semantic_status(task.semantic.status, step2_only=step2_only)
                    task.status = derive_task_status(
                        task.syntactic.status,
                        task.semantic.status,
                        step2_only=step2_only,
                    )
                    if task.status not in ("success", "completed"):
                        task.status = "failed"
                        if task.syntactic.status in ("running", StepStatus.PENDING.value):
                            task.syntactic.status = StepStatus.FAILED.value

                # Write task to the authoritative state only after completion.
                # statistics are recomputed from tasks in _merge_and_write()
                task.clear_claim()
                self.state_manager.state.config = dict(runtime_config)
                self.state_manager.state.tasks[task.task_id] = task
                self.state_manager.save(force=True)

            except KeyboardInterrupt:
                print("\n[AutoEvaluator] Interrupted!")
                task.status = EvalStatus.CANCELLED.value
                if not self.step3_only and task.syntactic.status in ("running", StepStatus.PENDING.value):
                    task.syntactic.status = StepStatus.FAILED.value
                task.clear_claim()
                self.state_manager.state.config = dict(runtime_config)
                self.state_manager.state.tasks[task.task_id] = task
                self.running = False

            except InfrastructureUnavailableError as e:
                print(f"\n[AutoEvaluator] Infrastructure unavailable: {e}")
                task = self.state_manager.state.tasks.get(task.task_id, task)
                task.clear_claim()
                if is_failed_retry:
                    task.status = EvalStatus.FAILED.value
                    if not self.step3_only and task.syntactic.status == "running":
                        task.syntactic.status = StepStatus.FAILED.value
                else:
                    task.status = EvalStatus.PENDING.value
                    if not self.step3_only and task.syntactic.status == "running":
                        task.syntactic.status = StepStatus.PENDING.value
                self.state_manager.state.config = dict(runtime_config)
                self.state_manager.state.tasks[task.task_id] = task
                self.state_manager.save(force=True)
                self.running = False

            except Exception as e:
                print(f"\n[AutoEvaluator] Error: {e}")
                task.status = EvalStatus.FAILED.value
                if not self.step3_only and task.syntactic.status in ("running", StepStatus.PENDING.value):
                    task.syntactic.status = StepStatus.FAILED.value
                task.clear_claim()
                self.state_manager.state.config = dict(runtime_config)
                self.state_manager.state.tasks[task.task_id] = task
                self.state_manager.save()

        # Finalize
        self.state_manager.state.config = dict(runtime_config)
        self.state_manager.state.end_time = datetime.now().isoformat()
        self.state_manager.save(force=True)

        final_state = self.state_manager.state
        print(f"\n{'='*70}")
        print(" Evaluation Complete")
        print(f"{'='*70}")
        print(
            f" Total: {final_state.total} | Success: {final_state.success} | "
            f"Completed: {final_state.completed} | Failed: {final_state.failed}"
        )
        print(f"{'='*70}")

    def _is_already_completed(self, task: EvalTask) -> bool:
        report_path = os.path.join(self.project_root, task.result_dir, "report.md")
        if self.step3_only:
            metrics_path = os.path.join(self.project_root, task.result_dir, "semantic", "result_metrics.json")
            return os.path.exists(metrics_path) and self._semantic_outputs_are_current(task)

        if not os.path.exists(report_path):
            return False

        # If Step 3 was skipped previously but Step 2 succeeded, semantic outputs
        # still need to be generated.
        if not self.skip_step3:
             with open(report_path, 'r', encoding='utf-8') as f:
                 content = f.read()
             if "--skip-step3" in content and "✅ Compiled" in content:
                 return False  # Step 3 still needs to run.
             if not self._semantic_outputs_are_current(task):
                 return False

        return True

    def _semantic_outputs_are_current(self, task: EvalTask) -> bool:
        semantic_dir = os.path.join(self.project_root, task.result_dir, "semantic")
        return semantic_output_state(semantic_dir) == "current"

    def _sync_state_with_results(self, state: EvalState) -> EvalState:
        """
        Validate and reconcile the state file with the current results directory.

        1. Remove tasks whose directories no longer exist.
        2. Refresh status for existing tasks.
        3. Discover and add tasks that exist only on disk.
        """
        results_base_dir = os.path.join(self.project_root, self.semantic_results_dir)

        # Determine which arch directories to scan.
        if self.arch_filter:
            archs_to_scan = self.arch_filter
        elif state.tasks:
            # Infer arches from the existing task set.
            archs_to_scan = list(set(t.arch for t in state.tasks.values()))
        else:
            archs_to_scan = ['arm64', 'arm32', 'x64', 'x86']

        allowed_archs = set(archs_to_scan)

        for task in state.tasks.values():
            self._normalize_task_metadata(task)

        # 1. Remove stale tasks whose result directories disappeared.
        tasks_to_remove = []
        for task_id, task in state.tasks.items():
            task_arch = task.arch or task_id.split("/")[0]
            if allowed_archs and task_arch not in allowed_archs:
                tasks_to_remove.append(task_id)
                print(f"[Sync] Removing foreign-arch task: {task_id} (not in current arch scope)")
                continue
            task_result_dir = os.path.join(self.project_root, task.result_dir)
            if not os.path.exists(task_result_dir):
                if task.status == EvalStatus.RUNNING.value and process_exists(task.claim_pid):
                    continue
                tasks_to_remove.append(task_id)
                print(f"[Sync] Removing stale task: {task_id} (directory not found)")

        for task_id in tasks_to_remove:
            del state.tasks[task_id]

        # 2. Refresh already-known tasks.
        for task_id, task in state.tasks.items():
            self._sync_task_from_results(task)

        # 3. Discover new tasks directly from the results directory.
        existing_task_ids = set(state.tasks.keys())

        for arch in archs_to_scan:
            arch_dir = os.path.join(results_base_dir, arch)
            if not os.path.exists(arch_dir):
                continue

            for src in os.listdir(arch_dir):
                src_dir = os.path.join(arch_dir, src)
                if not os.path.isdir(src_dir):
                    continue

                for bin_name in os.listdir(src_dir):
                    bin_dir = os.path.join(src_dir, bin_name)
                    if not os.path.isdir(bin_dir):
                        continue

                    for decompiler in os.listdir(bin_dir):
                        decompiler_dir = os.path.join(bin_dir, decompiler)
                        if not os.path.isdir(decompiler_dir):
                            continue

                        task_id = f"{arch}/{src}/{bin_name}/{decompiler}"
                        if task_id not in existing_task_ids:
                            # Found a new task on disk; reconstruct it from results.
                            new_task = self._create_task_from_results(arch, src, bin_name, decompiler)
                            if new_task:
                                state.tasks[task_id] = new_task
                                print(f"[Sync] Added new task from results: {task_id}")

        # 4. Recompute summary statistics.
        state.total = len(state.tasks)
        state.success = sum(1 for t in state.tasks.values() if t.status == "success")
        state.completed = sum(1 for t in state.tasks.values() if t.status == "completed")
        state.failed = sum(1 for t in state.tasks.values() if t.status == "failed")

        return state

    def _normalize_task_metadata(self, task: EvalTask):
        """Repair missing or outdated path metadata in legacy state entries."""
        if not all([task.arch, task.src, task.bin_name, task.decompiler]):
            return

        source_file = SOURCE_FILE_MAP.get(task.src, f"{task.src}.c")
        decompiler_dir = DECOMPILED_DIR_MAP.get(task.decompiler.lower(), f"{task.decompiler}_out")

        task.source_path = task.source_path or f"src/{source_file}"
        task.decompiled_path = task.decompiled_path or f"decompiled/{decompiler_dir}/{task.arch}/{task.src}/{task.bin_name}.c"
        task.binary_path = task.binary_path or f"build/{task.arch}/{task.src}/{task.bin_name}"
        task.result_dir = f"{self.semantic_results_dir}/{task.arch}/{task.src}/{task.bin_name}/{task.decompiler.lower()}"
        if self.step3_only:
            task.base_result_dir = task.base_result_dir or f"{self.results_dir}/{task.arch}/{task.src}/{task.bin_name}/{task.decompiler.lower()}"

    def _ensure_semantic_task_dirs(self, task: EvalTask):
        """Create the full semantic task directory tree on the host before guest workers write into 9p mounts."""
        base_dir = os.path.join(self.project_root, task.result_dir)
        os.makedirs(base_dir, exist_ok=True)
        os.makedirs(os.path.join(base_dir, "readability"), exist_ok=True)
        os.makedirs(os.path.join(base_dir, "syntactic"), exist_ok=True)
        semantic_dir = os.path.join(base_dir, "semantic")
        os.makedirs(semantic_dir, exist_ok=True)
        os.makedirs(os.path.join(semantic_dir, f"native_{task.arch}_bin"), exist_ok=True)

    def _sync_task_from_results(self, task: EvalTask):
        """Synchronize a task from the existing result files on disk."""
        result_dir = os.path.join(self.project_root, task.result_dir)
        base_result_dir = os.path.join(self.project_root, task.base_result_dir or task.result_dir)
        was_running = task.status == EvalStatus.RUNNING.value
        owner_active = was_running and process_exists(task.claim_pid)
        has_claim_metadata = task.claim_pid is not None
        report_path = os.path.join(result_dir, "report.md")
        report_exists = os.path.exists(report_path)
        trace_final_status = None

        task.readability = self._readability_step_from_results(result_dir)

        # Synchronize Step 2 state.
        repair_trace_path = os.path.join(base_result_dir, "syntactic", "repair_trace.json")
        if os.path.exists(repair_trace_path):
            try:
                with open(repair_trace_path, 'r') as f:
                    trace = json.load(f)

                iterations = trace.get('total_iterations', 0)
                trace_final_status = trace.get("final_status", "pending")
                task.syntactic.iterations = iterations

                # Calculate total tokens and time from history
                total_tokens = 0
                total_time = 0.0
                for entry in trace.get('history', []):
                    if entry.get('token_usage'):
                        total_tokens += entry['token_usage'].get('total_tokens', 0)
                    total_time += entry.get('time_cost', 0)

                task.syntactic.tokens = total_tokens if total_tokens > 0 else None
                task.syntactic.time_cost = total_time if total_time > 0 else None

                # Check if binary was generated
                bin_path = os.path.join(base_result_dir, "syntactic", "bin", f"{task.bin_name}_fixed")
                binary_exists = os.path.exists(bin_path)

                termination_reason = trace.get("termination_reason")

                if binary_exists:
                    task.syntactic.status = "success"
                elif termination_reason == "context_length_exceeded":
                    task.syntactic.status = StepStatus.CONTEXT_EXCEEDED.value
                elif termination_reason == "tool_call_arguments_invalid":
                    task.syntactic.status = StepStatus.TOOL_CALL_INVALID.value
                elif iterations >= self.max_iters:
                    task.syntactic.status = "completed"
                elif was_running and owner_active:
                    # While a task is still running, repair_trace.json only shows an
                    # intermediate snapshot. Do not downgrade it to failed just
                    # because the binary has not been produced yet.
                    task.syntactic.status = "running"
                elif was_running and not has_claim_metadata and not report_exists and trace_final_status == "pending":
                    # Legacy states without owner PID only stay running when they
                    # still look like a pure intermediate trace with no final report.
                    task.syntactic.status = "running"
                else:
                    task.syntactic.status = "failed"
            except (OSError, json.JSONDecodeError) as e:
                print(f"[Sync] Warning: failed to parse syntactic trace for {task.task_id}: {e}")
        elif was_running and owner_active:
            task.syntactic.status = "running"
        elif was_running and not has_claim_metadata and not report_exists:
            task.syntactic.status = "running"

        # Synchronize Step 3 state.
        metrics_path = os.path.join(result_dir, "semantic", "result_metrics.json")
        if os.path.exists(metrics_path):
            try:
                with open(metrics_path, 'r', encoding='utf-8') as f:
                    metrics = json.load(f)
                task.semantic.status = "success" if metrics.get("execution_status") == "success" else "failed"
                task.semantic.quality_status = metrics.get("quality_status")
            except (OSError, json.JSONDecodeError) as e:
                print(f"[Sync] Warning: failed to parse semantic metrics for {task.task_id}: {e}")
        if os.path.exists(metrics_path) and not self._semantic_outputs_are_current(task):
            task.semantic.status = StepStatus.PENDING.value
            task.semantic.quality_status = None
        state_config = {}
        if getattr(self.state_manager, "state", None) is not None:
            state_config = getattr(self.state_manager.state, "config", {}) or {}

        step2_only = should_use_step2_only_semantics(
            skip_step3=self.skip_step3,
            report_path=report_path if report_exists else None,
            state_skip_step3=bool(state_config.get("skip_step3")),
        )
        task.semantic.status = normalize_semantic_status(task.semantic.status, step2_only=step2_only)

        # Update the overall task.status.
        keep_running = was_running and (
            owner_active or
            (not has_claim_metadata and not report_exists and task.syntactic.status == "running")
        )

        if keep_running and task.syntactic.status not in ("success", "completed"):
            task.status = EvalStatus.RUNNING.value
        elif self.step3_only:
            if task.syntactic.status != "success":
                task.status = "failed"
            elif task.semantic.status == "success":
                task.status = "success"
            elif keep_running:
                task.status = EvalStatus.RUNNING.value
            elif task.semantic.status == "failed":
                task.status = "failed"
            else:
                task.status = EvalStatus.PENDING.value
        elif step2_only:
            task.status = derive_task_status(
                task.syntactic.status,
                task.semantic.status,
                step2_only=True,
            )
        elif task.syntactic.status == "success":
            if task.semantic.status in ("success", "skipped"):
                task.status = "success"
            elif keep_running:
                # Do not let sync logic downgrade a task that is transitioning from
                # Step 2 completion into an in-progress Step 3 run.
                task.status = EvalStatus.RUNNING.value
            else:
                task.status = "failed"
        elif task.syntactic.status == "completed":
            task.status = "completed"
        else:
            task.status = "failed"

        if task.status != EvalStatus.RUNNING.value:
            task.clear_claim()

    def _create_task_from_results(self, arch: str, src: str, bin_name: str, decompiler: str) -> Optional[EvalTask]:
        """Create a task object from an existing result directory."""
        result_dir = f"{self.semantic_results_dir}/{arch}/{src}/{bin_name}/{decompiler}"
        full_result_dir = os.path.join(self.project_root, result_dir)

        # Check whether any evaluation artifacts exist (report.md is not required).
        has_readability = os.path.exists(os.path.join(full_result_dir, "readability"))
        has_syntactic = os.path.exists(os.path.join(full_result_dir, "syntactic", "repair_trace.json"))
        has_semantic = os.path.exists(os.path.join(full_result_dir, "semantic"))

        if not (has_readability or has_syntactic or has_semantic):
            return None

        # Build the task object.
        source_file = SOURCE_FILE_MAP.get(src, f"{src}.c")
        task = EvalTask(
            task_id=f"{arch}/{src}/{bin_name}/{decompiler}",
            arch=arch,
            src=src,
            bin_name=bin_name,
            decompiler=decompiler,
            source_path=f"src/{source_file}",
            decompiled_path=f"decompiled/{decompiler}_out/{arch}/{src}/{bin_name}.c",  # Approximation
            binary_path=f"build/{arch}/{src}/{bin_name}",  # Approximation
            result_dir=result_dir,
            base_result_dir=(
                f"{self.results_dir}/{arch}/{src}/{bin_name}/{decompiler}"
                if self.step3_only else None
            ),
        )

        # Populate state from the result directory.
        self._sync_task_from_results(task)

        return task

    def _build_command_string(self, task: EvalTask) -> str:
        """Build the command string for display"""
        can_refresh = getattr(self.executor, "can_refresh_semantic_analysis_only", lambda task: False)
        cmd_parts = [
            sys.executable if can_refresh(task) else PipelineExecutor.python_bin_for_arch(task.arch),
            "-u", "scripts/run_pipeline_in_docker.py",
            task.source_path,
            task.decompiled_path,
            "--original-bin", task.binary_path,
            "--max-iters", str(self.max_iters),
            "--llm-profile", self.llm_profile,
            "--results-dir", self.results_dir
        ]
        if not can_refresh(task):
            lima_instance = PipelineExecutor.LIMA_INSTANCE_MAP.get(task.arch, 'binbench')
            cmd_parts = ["limactl", "shell", lima_instance] + cmd_parts
        if self.step3_only:
            cmd_parts.append("--step3-only")
            if self.semantic_results_dir != self.results_dir:
                cmd_parts.extend(["--semantic-results-dir", self.semantic_results_dir])
        elif not can_refresh(task):
            cmd_parts.append("--skip-readability")
        if self.skip_step3:
            cmd_parts.append("--skip-step3")
        return " ".join(cmd_parts)

    def _has_successful_step2_artifacts(self, task: EvalTask) -> bool:
        base_result_dir = os.path.join(self.project_root, task.base_result_dir or task.result_dir)
        repair_trace_path = os.path.join(base_result_dir, "syntactic", "repair_trace.json")
        fixed_bin_path = os.path.join(base_result_dir, "syntactic", "bin", f"{task.bin_name}_fixed")
        if not (os.path.exists(repair_trace_path) and os.path.exists(fixed_bin_path)):
            return False

        try:
            with open(repair_trace_path, "r", encoding="utf-8") as f:
                trace = json.load(f)
            return trace.get("final_status") == "success"
        except Exception:
            return False


# ============== Main Entry Point ==============

def main():
    parser = argparse.ArgumentParser(
        description="BinDeBench Auto Evaluator - Batch evaluation automation",
        formatter_class=argparse.RawDescriptionHelpFormatter
    )

    parser.add_argument('--arch', nargs='+', default=None,
                       choices=['arm64', 'arm32', 'x64', 'x86', 'all'])
    parser.add_argument('--decompiler', nargs='+', default=None,
                       choices=['ghidra', 'ida', 'retdec', 'angr', 'BinaryAI'])
    parser.add_argument('--src', nargs='+', default=None,
                       choices=['1', '2', '3', '4', '5-1', '5-23', '6', '7'])
    parser.add_argument('--bin-name', nargs='+', default=None,
                       help='Optional binary-name filter, e.g. 1_gcc_O0_g')
    parser.add_argument('--restart', action='store_true')
    parser.add_argument('--retry', action='store_true',
                       help='Prioritize previously failed tasks')
    parser.add_argument('--skip-step3', action='store_true',
                       help='Skip Step 3 (semantic evaluation) and focus only on generating fixed binary')
    parser.add_argument('--step3-only', action='store_true',
                       help='Reuse successful Step2 artifacts and run only Step 3')
    parser.add_argument('--max-iters', type=int, default=50)
    parser.add_argument('--llm-profile', default=None,
                       help='LLM profile (default: from LLM_PROFILE env var, or config active_profile / glm_official)')
    parser.add_argument('--results-dir', default='results',
                       help='Base results directory (default: results)')
    parser.add_argument('--semantic-results-dir', default=None,
                       help='Maintenance-only Step 3 override for --step3-only (default: same as --results-dir)')
    parser.add_argument('--state-file', default=None)

    args = parser.parse_args()

    # Resolve LLM profile: CLI arg > env var > public default profile
    llm_profile = args.llm_profile or os.environ.get('LLM_PROFILE', 'glm_official')

    if args.step3_only and args.skip_step3:
        raise SystemExit("--step3-only cannot be combined with --skip-step3")
    if args.semantic_results_dir and not args.step3_only:
        raise SystemExit("--semantic-results-dir is a maintenance override and requires --step3-only")

    all_arches = ['arm64', 'arm32', 'x64', 'x86']
    requested_arches = args.arch or ['all']
    arch_filter = all_arches if 'all' in requested_arches else requested_arches

    if len(arch_filter) > 1 and args.state_file:
        raise SystemExit("--state-file cannot be combined with multiple architectures")

    state_root = args.semantic_results_dir if args.step3_only and args.semantic_results_dir else args.results_dir

    for arch in arch_filter:
        if len(arch_filter) > 1:
            print(f"\n[auto_eval] Starting sequential run for arch={arch}")

        state_file = args.state_file or os.path.join(PROJECT_ROOT, state_root, f"eval_state_{arch}.json")
        evaluator = AutoEvaluator(
            project_root=PROJECT_ROOT,
            state_file=state_file,
            arch_filter=[arch],
            decompiler_filter=args.decompiler,
            src_filter=args.src,
            restart=args.restart,
            retry=args.retry,
            bin_name_filter=args.bin_name,
            skip_step3=args.skip_step3,
            step3_only=args.step3_only,
            max_iters=args.max_iters,
            llm_profile=llm_profile,
            results_dir=args.results_dir,
            semantic_results_dir=args.semantic_results_dir,
        )
        evaluator.run()


if __name__ == "__main__":
    main()
