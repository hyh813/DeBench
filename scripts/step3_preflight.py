#!/usr/bin/env python3
from __future__ import annotations

import argparse
import importlib.util
import json
import os
import subprocess
import sys
from collections import Counter
from dataclasses import dataclass
from pathlib import Path
from typing import Dict, Iterable, List, Optional, Tuple


SCRIPT_DIR = Path(__file__).resolve().parent
PROJECT_ROOT = SCRIPT_DIR.parent
if str(PROJECT_ROOT) not in sys.path:
    sys.path.insert(0, str(PROJECT_ROOT))

from evaluator.semantic.trace_format import (  # noqa: E402
    SEMANTIC_ANALYSIS_VERSION,
    SEMANTIC_TRACE_FORMAT_VERSION,
    semantic_output_state,
)


AUTO_EVAL_PATH = PROJECT_ROOT / "scripts" / "auto_eval.py"
AUTO_EVAL_SPEC = importlib.util.spec_from_file_location("bindebench_auto_eval_preflight", AUTO_EVAL_PATH)
auto_eval = importlib.util.module_from_spec(AUTO_EVAL_SPEC)
sys.modules[AUTO_EVAL_SPEC.name] = auto_eval
AUTO_EVAL_SPEC.loader.exec_module(auto_eval)


ARCH_TO_INSTANCE = {
    "arm64": "binbench",
    "arm32": "binbench-arm32",
    "x64": "binbench-x64",
    "x86": "binbench-x86",
}

ARCH_TO_PYTHON = {
    "arm64": "python3",
    "arm32": "python3.8",
    "x64": "python3",
    "x86": "python3.8",
}


@dataclass
class GuestProbe:
    arch: str
    instance: str
    status: str
    python_ok: bool
    preferred_python_ok: bool
    frida_ok: bool
    project_mount_ok: bool
    compiler_ok: bool
    detail: str


def run_json_command(cmd: List[str]) -> List[Dict[str, object]]:
    result = subprocess.run(cmd, capture_output=True, text=True, cwd=PROJECT_ROOT, check=False)
    payloads: List[Dict[str, object]] = []
    for line in result.stdout.splitlines():
        line = line.strip()
        if not line or not line.startswith("{"):
            continue
        try:
            payloads.append(json.loads(line))
        except json.JSONDecodeError:
            continue
    return payloads


def load_state(results_dir: Path, arch: str) -> Dict[str, object]:
    path = results_dir / f"eval_state_{arch}.json"
    if not path.exists():
        return {}
    with open(path, "r", encoding="utf-8") as f:
        return json.load(f)


def has_successful_step2_artifacts(base_results_dir: Path, task_id: str, task: Dict[str, object]) -> bool:
    arch = task.get("arch") or task_id.split("/")[0]
    src = str(task.get("src") or task_id.split("/")[1])
    bin_name = task.get("bin_name") or task_id.split("/")[2]
    decompiler = str(task.get("decompiler") or task_id.split("/")[3]).lower()
    base_dir = base_results_dir / arch / src / bin_name / decompiler / "syntactic"
    trace_path = base_dir / "repair_trace.json"
    fixed_path = base_dir / "bin" / f"{bin_name}_fixed"
    if not (trace_path.exists() and fixed_path.exists()):
        return False
    try:
        with open(trace_path, "r", encoding="utf-8") as f:
            trace = json.load(f)
    except Exception:
        return False
    return trace.get("final_status") == "success"


def iter_eligible_tasks(base_results_dir: Path, archs: Iterable[str], src_filter: Optional[List[str]]) -> List[Tuple[str, str, Dict[str, object]]]:
    tasks: List[Tuple[str, str, Dict[str, object]]] = []
    src_set = set(src_filter or [])
    for arch in archs:
        state = load_state(base_results_dir, arch)
        for task_id, task in (state.get("tasks") or {}).items():
            if src_set and task.get("src") not in src_set:
                continue
            if has_successful_step2_artifacts(base_results_dir, task_id, task):
                tasks.append((arch, task_id, task))
    return tasks


def summarize_scope(base_results_dir: Path, semantic_results_dir: Path, archs: Iterable[str], src_filter: Optional[List[str]]) -> Dict[str, Counter]:
    per_arch: Dict[str, Counter] = {}
    for arch, task_id, task in iter_eligible_tasks(base_results_dir, archs, src_filter):
        semantic_rel = Path(task_id) / "semantic"
        state = semantic_output_state(semantic_results_dir / semantic_rel)
        counter = per_arch.setdefault(arch, Counter())
        counter["eligible"] += 1
        counter[state] += 1
    return per_arch


def probe_guest(arch: str) -> GuestProbe:
    instance = ARCH_TO_INSTANCE[arch]
    records = run_json_command(["limactl", "list", "--format", "json", instance])
    status = records[0].get("status", "unknown") if records else "unknown"
    if status != "Running":
        return GuestProbe(arch, instance, status, False, False, False, False, False, "instance not running")

    preferred_python = ARCH_TO_PYTHON[arch]
    compiler_check = {
        "arm64": "command -v gcc >/dev/null && command -v clang >/dev/null",
        "arm32": "command -v arm-linux-gnueabi-gcc >/dev/null && command -v clang >/dev/null",
        "x64": "command -v x86_64-linux-gnu-gcc >/dev/null && command -v i686-linux-gnu-gcc >/dev/null && command -v clang >/dev/null",
        "x86": "command -v i686-linux-gnu-gcc >/dev/null && command -v clang >/dev/null",
    }[arch]
    probe_script = f"""
set -e
python_ok=0
preferred_python_ok=0
frida_ok=0
project_ok=0
compiler_ok=0
command -v python3 >/dev/null && python_ok=1
command -v {preferred_python} >/dev/null && preferred_python_ok=1
{preferred_python} - <<'PY' >/tmp/binbench_preflight_frida.txt 2>&1 || true
try:
    import frida
    print("ok")
except Exception as e:
    print(type(e).__name__)
PY
grep -qx "ok" /tmp/binbench_preflight_frida.txt && frida_ok=1 || true
test -d {sh_quote(str(PROJECT_ROOT))} && project_ok=1 || true
({compiler_check}) && compiler_ok=1 || true
printf "python_ok=%s preferred_python_ok=%s frida_ok=%s project_ok=%s compiler_ok=%s detail=%s\\n" "$python_ok" "$preferred_python_ok" "$frida_ok" "$project_ok" "$compiler_ok" "$(cat /tmp/binbench_preflight_frida.txt 2>/dev/null | tail -n 1)"
"""
    result = subprocess.run(
        ["limactl", "shell", instance, "bash", "-lc", probe_script],
        capture_output=True,
        text=True,
        cwd=PROJECT_ROOT,
        check=False,
    )
    line = next((ln for ln in result.stdout.splitlines() if ln.startswith("python_ok=")), "")
    fields = dict(item.split("=", 1) for item in line.split() if "=" in item) if line else {}
    return GuestProbe(
        arch=arch,
        instance=instance,
        status=status,
        python_ok=fields.get("python_ok") == "1",
        preferred_python_ok=fields.get("preferred_python_ok") == "1",
        frida_ok=fields.get("frida_ok") == "1",
        project_mount_ok=fields.get("project_ok") == "1",
        compiler_ok=fields.get("compiler_ok") == "1",
        detail=fields.get("detail", result.stderr.strip() or "unknown"),
    )


def sh_quote(value: str) -> str:
    return "'" + value.replace("'", "'\"'\"'") + "'"


def print_scope_summary(summary: Dict[str, Counter]) -> None:
    for arch in ("arm64", "arm32", "x64", "x86"):
        counter = summary.get(arch, Counter())
        print(
            f"[Scope] {arch}: eligible={counter.get('eligible', 0)} "
            f"current={counter.get('current', 0)} "
            f"stale_analysis={counter.get('stale_analysis', 0)} "
            f"stale_trace={counter.get('stale_trace', 0)} "
            f"incomplete_trace={counter.get('incomplete_trace', 0)} "
            f"missing={counter.get('missing', 0)}"
        )


def print_guest_summary(probes: List[GuestProbe]) -> None:
    for probe in probes:
        print(
            f"[Guest] {probe.arch}: status={probe.status} python3={probe.python_ok} "
            f"preferred_python={probe.preferred_python_ok} frida={probe.frida_ok} "
            f"project_mount={probe.project_mount_ok} compiler={probe.compiler_ok} detail={probe.detail}"
        )


def build_smoke_commands(llm_profile: str, base_results_dir: str, semantic_results_dir: str, archs: Iterable[str], src: str = "1") -> List[str]:
    commands = []
    for arch in archs:
        commands.append(
            " ".join(
                [
                    "python3",
                    "scripts/auto_eval.py",
                    f"--src {src}",
                    f"--arch {arch}",
                    "--decompiler ghidra",
                    "--bin-name 1_gcc_O0_g",
                    "--step3-only",
                    f"--results-dir {base_results_dir}",
                    f"--semantic-results-dir {semantic_results_dir}",
                    f"--llm-profile {llm_profile}",
                ]
            )
        )
    return commands


def main() -> int:
    parser = argparse.ArgumentParser(description="Preflight checks before large Step3 semantic runs")
    parser.add_argument("--results-dir", required=True, help="Base Step2 results tree")
    parser.add_argument("--semantic-results-dir", required=True, help="Independent Step3 semantic results tree")
    parser.add_argument("--src", nargs="*", default=None, help="Optional source ids to scope the summary")
    parser.add_argument("--llm-profile", default="glm_official")
    parser.add_argument("--skip-guest-probes", action="store_true")
    args = parser.parse_args()

    base_results_dir = (PROJECT_ROOT / args.results_dir).resolve()
    semantic_results_dir = (PROJECT_ROOT / args.semantic_results_dir).resolve()
    archs = ["arm64", "arm32", "x64", "x86"]

    print(f"[Preflight] base_results_dir={base_results_dir}")
    print(f"[Preflight] semantic_results_dir={semantic_results_dir}")
    print(f"[Preflight] required trace_format={SEMANTIC_TRACE_FORMAT_VERSION} analysis_version={SEMANTIC_ANALYSIS_VERSION}")

    probes: List[GuestProbe] = []
    if not args.skip_guest_probes:
        probes = [probe_guest(arch) for arch in archs]
        print_guest_summary(probes)

    summary = summarize_scope(base_results_dir, semantic_results_dir, archs, args.src)
    print_scope_summary(summary)

    print("[Smoke Commands]")
    for command in build_smoke_commands(args.llm_profile, args.results_dir, args.semantic_results_dir, archs):
        print(f"  {command}")

    failures = []
    for arch, counter in summary.items():
        if counter.get("eligible", 0) == 0:
            failures.append(f"{arch}: no eligible syntactic-success tasks found")
    for probe in probes:
        if probe.status != "Running":
            failures.append(f"{probe.arch}: instance status={probe.status}")
        if not probe.preferred_python_ok:
            failures.append(f"{probe.arch}: missing preferred python interpreter")
        if not probe.frida_ok:
            failures.append(f"{probe.arch}: frida unavailable ({probe.detail})")
        if not probe.project_mount_ok:
            failures.append(f"{probe.arch}: project mount missing")
        if not probe.compiler_ok:
            failures.append(f"{probe.arch}: compiler toolchain incomplete")

    if failures:
        print("[Preflight] NOT READY")
        for item in failures:
            print(f"  - {item}")
        return 1

    print("[Preflight] READY")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
