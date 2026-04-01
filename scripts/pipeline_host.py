#!/usr/bin/env python3
from __future__ import annotations

import json
import os
import queue
import re
import shlex
import subprocess
import sys
import tempfile
import threading
import time
import urllib.parse
from dataclasses import dataclass
from datetime import datetime
from typing import Callable, Dict, List, Optional

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.abspath(os.path.join(SCRIPT_DIR, ".."))
if PROJECT_ROOT not in sys.path:
    sys.path.insert(0, PROJECT_ROOT)

from config.config_loader import get_profile


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

LIMA_INSTANCE_MAP = {
    "arm64": "binbench",
    "arm32": "binbench-arm32",
    "x64": "binbench-x64",
    "x86": "binbench-x86",
}

PYTHON_BIN_MAP = {
    "arm64": "python3",
    "arm32": "python3.8",
    "x64": "python3",
    "x86": "python3.8",
}

READABILITY_TIMEOUT_SECONDS = int(os.environ.get("BINBENCH_READABILITY_TIMEOUT", "900"))

CONTEXT_EXCEEDED_PATTERNS = (
    r"context.?length",
    r"context.?window",
    r"maximum context",
    r"max_prompt_tokens",
    r"exceeded.*max.*token",
    r"input tokens.*exceeded",
)


@dataclass
class StreamResult:
    returncode: int
    output: str
    duration: float
    timed_out: bool = False


def build_lima_env() -> Dict[str, str]:
    env = os.environ.copy()
    for key in PROXY_ENV_KEYS:
        env.pop(key, None)
    return env


def collect_forwarded_runtime_env() -> Dict[str, str]:
    forwarded: Dict[str, str] = {}
    for key, value in os.environ.items():
        if not value:
            continue
        if key.startswith(FORWARDED_RUNTIME_ENV_PREFIXES):
            forwarded[key] = value
    return forwarded


def create_guest_env_script(project_root: str) -> Optional[str]:
    forwarded = collect_forwarded_runtime_env()
    if not forwarded:
        return None

    runtime_dir = os.path.join(project_root, ".binbench_runtime")
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


def remove_guest_env_script(path: Optional[str]) -> None:
    if path and os.path.exists(path):
        try:
            os.unlink(path)
        except OSError:
            pass


def build_remote_shell_command(remote_cmd: List[str], guest_env_script: Optional[str]) -> str:
    quoted_remote = " ".join(shlex.quote(part) for part in remote_cmd)
    if guest_env_script:
        return f". {shlex.quote(guest_env_script)} && exec {quoted_remote}"
    return f"exec {quoted_remote}"


def stream_subprocess(
    cmd: List[str],
    *,
    cwd: str,
    env: Dict[str, str],
    timeout: Optional[int] = None,
    on_line: Optional[Callable[[str], None]] = None,
) -> StreamResult:
    process = subprocess.Popen(
        cmd,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True,
        cwd=cwd,
        env=env,
        bufsize=1,
    )

    output_queue: queue.Queue[str] = queue.Queue()
    stop_reader = threading.Event()
    output_lines: List[str] = []

    def reader() -> None:
        try:
            assert process.stdout is not None
            for line in iter(process.stdout.readline, ""):
                if stop_reader.is_set():
                    break
                output_queue.put(line)
        except Exception:
            pass

    thread = threading.Thread(target=reader, daemon=True)
    thread.start()

    start = time.time()
    try:
        while True:
            if timeout and time.time() - start > timeout:
                stop_reader.set()
                process.kill()
                process.wait()
                while True:
                    try:
                        line = output_queue.get_nowait()
                        output_lines.append(line)
                        if on_line:
                            on_line(line)
                    except queue.Empty:
                        break
                return StreamResult(
                    returncode=process.returncode if process.returncode is not None else -9,
                    output="".join(output_lines),
                    duration=time.time() - start,
                    timed_out=True,
                )

            if process.poll() is not None:
                while True:
                    try:
                        line = output_queue.get_nowait()
                        output_lines.append(line)
                        if on_line:
                            on_line(line)
                    except queue.Empty:
                        break
                break

            try:
                line = output_queue.get(timeout=1.0)
            except queue.Empty:
                continue

            output_lines.append(line)
            if on_line:
                on_line(line)
    finally:
        stop_reader.set()
        try:
            process.wait(timeout=5)
        except Exception:
            pass

    return StreamResult(
        returncode=process.returncode if process.returncode is not None else 0,
        output="".join(output_lines),
        duration=time.time() - start,
        timed_out=False,
    )


def _readability_result_files(output_dir: str) -> List[str]:
    if not os.path.isdir(output_dir):
        return []
    return sorted(
        f for f in os.listdir(output_dir)
        if f.startswith("test_results_") and f.endswith(".json")
    )


def _infer_readability_error(output: str, *, timed_out: bool) -> str:
    if timed_out:
        return "timeout"
    lower = output.lower()
    for pattern in CONTEXT_EXCEEDED_PATTERNS:
        if re.search(pattern, lower, re.IGNORECASE):
            return "context_length_exceeded"
    return "process_failed"


def _write_readability_failure(output_dir: str, eval_id: str, error: str, duration: float, output: str) -> str:
    os.makedirs(output_dir, exist_ok=True)
    timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")
    result_path = os.path.join(output_dir, f"test_results_{timestamp}.json")
    payload = {
        "eval_id": eval_id,
        "overall_score": None,
        "levels": {},
        "dimensions": {},
        "tokens": {},
        "time_cost_seconds": round(duration, 2),
        "error": error,
        "failure_reason": output[-4000:],
    }
    with open(result_path, "w", encoding="utf-8") as f:
        json.dump(payload, f, indent=2, ensure_ascii=False)
    return result_path


def run_host_readability(
    *,
    source_path: str,
    decompiled_path: str,
    output_dir: str,
    llm_profile: str,
    llm_key_alias: Optional[str] = None,
    llm_key_index: Optional[int] = None,
    on_line: Optional[Callable[[str], None]] = None,
    timeout: int = READABILITY_TIMEOUT_SECONDS,
) -> Dict[str, object]:
    script_path = os.path.join(PROJECT_ROOT, "evaluator", "readability", "eval_readability.py")
    eval_id = os.path.splitext(os.path.basename(decompiled_path))[0]
    before_files = set(_readability_result_files(output_dir))
    env = os.environ.copy()
    env["BINBENCH_READABILITY_OUTPUT"] = output_dir
    env["LLM_PROFILE"] = llm_profile
    if llm_key_alias:
        env["LLM_KEY_ALIAS"] = llm_key_alias
    if llm_key_index is not None:
        env["LLM_KEY_INDEX"] = str(llm_key_index)

    result = stream_subprocess(
        [sys.executable, "-u", script_path, source_path, decompiled_path],
        cwd=PROJECT_ROOT,
        env=env,
        timeout=timeout,
        on_line=on_line,
    )

    after_files = set(_readability_result_files(output_dir))
    new_files = sorted(after_files - before_files)
    latest_result_path = os.path.join(output_dir, new_files[-1]) if new_files else None

    if result.returncode == 0 and latest_result_path:
        return {
            "ok": True,
            "result_path": latest_result_path,
            "timed_out": False,
            "duration": result.duration,
            "output": result.output,
        }

    error = _infer_readability_error(result.output, timed_out=result.timed_out)
    if latest_result_path is None:
        latest_result_path = _write_readability_failure(output_dir, eval_id, error, result.duration, result.output)

    return {
        "ok": False,
        "result_path": latest_result_path,
        "timed_out": result.timed_out,
        "duration": result.duration,
        "output": result.output,
        "error": error,
    }


def run_guest_preflight(project_root: str, arch: str, llm_profile: str, *, max_clock_skew_seconds: int = 300) -> None:
    instance = LIMA_INSTANCE_MAP.get(arch, "binbench")
    guest_python = PYTHON_BIN_MAP.get(arch, "python3")

    guest_time = subprocess.run(
        ["limactl", "shell", instance, "bash", "-lc", "date +%s"],
        capture_output=True,
        text=True,
        cwd=project_root,
        env=build_lima_env(),
        timeout=20,
        check=False,
    )
    if guest_time.returncode != 0:
        raise RuntimeError(
            f"Lima instance `{instance}` is not reachable for `{arch}`. "
            f"stderr: {guest_time.stderr.strip() or 'unknown error'}"
        )

    try:
        guest_epoch = int((guest_time.stdout or "").strip())
    except ValueError as exc:
        raise RuntimeError(
            f"Failed to read clock from Lima instance `{instance}` for `{arch}`."
        ) from exc

    host_epoch = int(time.time())
    skew = abs(host_epoch - guest_epoch)
    if skew > max_clock_skew_seconds:
        raise RuntimeError(
            f"Lima instance `{instance}` clock skew is {skew}s for `{arch}`. "
            f"Fix it first: limactl shell {instance} sudo date -s \"$(date '+%Y-%m-%d %H:%M:%S')\""
        )

    profile = get_profile(llm_profile)
    base_url = profile["base_url"]
    parsed = urllib.parse.urlparse(base_url)
    probe_url = f"{parsed.scheme}://{parsed.netloc}" if parsed.scheme and parsed.netloc else base_url
    probe_script = "\n".join(
        [
            "import sys",
            "import urllib.error",
            "import urllib.request",
            "url = sys.argv[1]",
            "try:",
            "    urllib.request.urlopen(url, timeout=20)",
            "    print('ok')",
            "except urllib.error.HTTPError as exc:",
            "    print(f'http:{exc.code}')",
            "    raise SystemExit(0)",
            "except Exception as exc:",
            "    print(f'error:{type(exc).__name__}:{exc}')",
            "    raise SystemExit(1)",
        ]
    )
    probe = subprocess.run(
        [
            "limactl",
            "shell",
            instance,
            "bash",
            "-lc",
            f"{guest_python} -c {shlex.quote(probe_script)} {shlex.quote(probe_url)}",
        ],
        capture_output=True,
        text=True,
        cwd=project_root,
        env=build_lima_env(),
        timeout=30,
        check=False,
    )
    if probe.returncode != 0:
        target = parsed.netloc or probe_url
        raise RuntimeError(
            f"Lima instance `{instance}` cannot reach `{target}` for profile `{llm_profile}`. "
            f"stdout: {probe.stdout.strip() or 'n/a'} stderr: {probe.stderr.strip() or 'n/a'}"
        )
