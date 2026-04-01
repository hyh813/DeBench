#!/usr/bin/env python3
"""
BinBench Semantic Instrumentation Runner
Uses Frida to trace function execution and compare original vs decompiled binaries.

Adapted for Linux x64 environment (runs inside podman container).
"""

import argparse
import json
import os
import re
import shlex
import shutil
import signal
import subprocess
import sys
import tempfile
import time

import frida

from trace_format import (
    SEMANTIC_ANALYSIS_VERSION,
    SEMANTIC_TRACE_CAPTURE_MODE,
    SEMANTIC_TRACE_FORMAT_VERSION,
)

# Default paths (relative to project root)
PROJECT_ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "../.."))
# Support dynamic output directory via environment variable
RESULTS_DIR = os.environ.get("BINBENCH_SEMANTIC_OUTPUT") or os.path.join(PROJECT_ROOT, "results", "semantic")
TARGET_FUNCTIONS_JSON = os.path.join(PROJECT_ROOT, "evaluator", "semantic", "target_functions.json")
SOURCE_EXTENSIONS = (".c", ".cpp", ".cc", ".cxx")
SOURCE_ID_RE = re.compile(r'^\d+(?:-\d+)?$')
SOURCE_ID_FROM_BINARY_RE = re.compile(r'^(?P<src>\d+(?:-\d+)?)_')

def matching_binary_pids(binary_path):
    """Best-effort lookup for live processes running the exact benchmark binary path."""
    if not binary_path:
        return []

    abs_path = os.path.abspath(binary_path)
    try:
        result = subprocess.run(
            ["pgrep", "-f", "--", abs_path],
            capture_output=True,
            text=True,
            timeout=5,
        )
    except Exception:
        return []

    pids = []
    for line in (result.stdout or "").splitlines():
        try:
            pid = int(line.strip())
        except (TypeError, ValueError):
            continue
        if pid <= 0 or pid in pids:
            continue
        try:
            exe_path = os.path.realpath(f"/proc/{pid}/exe")
        except OSError:
            continue
        if exe_path == abs_path:
            pids.append(pid)
    return pids


def _kill_pid_and_group(pid, sig=signal.SIGKILL):
    if not pid or pid <= 0:
        return
    try:
        pgid = os.getpgid(pid)
        if pgid > 0 and pgid != os.getpgrp():
            os.killpg(pgid, sig)
    except Exception:
        pass
    try:
        os.kill(pid, sig)
    except Exception:
        pass


def cleanup_binary_processes(binary_path, exclude_pids=None):
    """
    Kill all live processes that still execute the given benchmark binary.
    This is required for benchmarks like src/3 that fork child processes.
    """
    exclude = {int(pid) for pid in (exclude_pids or []) if pid}
    exclude.add(os.getpid())

    killed = []
    for pid in matching_binary_pids(binary_path):
        if pid in exclude:
            continue
        _kill_pid_and_group(pid, sig=signal.SIGKILL)
        killed.append(pid)
    return killed


def _program_capture_command(binary_path):
    stdbuf_path = shutil.which("stdbuf")
    if stdbuf_path:
        return "stdbuf_unbuffered", [stdbuf_path, "-o0", "-e0", binary_path]
    return "direct_capture", [binary_path]


def start_trace_watchdog(pid, timeout_seconds, binary_path=None):
    """Kill traced benchmark processes even if Frida/Python wedges and never reaches cleanup."""
    quoted_path = shlex.quote(os.path.abspath(binary_path)) if binary_path else None
    shell_script = f"sleep {int(timeout_seconds)}; kill -9 {int(pid)} >/dev/null 2>&1 || true"
    if quoted_path:
        shell_script += f"; pgrep -f -- {quoted_path} 2>/dev/null | xargs -r kill -9 2>/dev/null || true"
    try:
        return subprocess.Popen(
            [
                "sh",
                "-lc",
                shell_script,
            ],
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
        )
    except Exception:
        return None


def atomic_write_text(path, content):
    directory = os.path.dirname(path) or "."
    os.makedirs(directory, exist_ok=True)
    if isinstance(content, bytes):
        content = content.decode("utf-8", errors="replace")
    elif content is None:
        content = ""
    else:
        content = str(content)
    fd, tmp_path = tempfile.mkstemp(prefix=".tmp-", dir=directory)
    try:
        with os.fdopen(fd, "w", encoding="utf-8") as f:
            f.write(content)
            f.flush()
            os.fsync(f.fileno())
        os.replace(tmp_path, path)
    finally:
        if os.path.exists(tmp_path):
            os.unlink(tmp_path)


def make_json_safe(payload):
    if isinstance(payload, bytes):
        return payload.decode("utf-8", errors="replace")
    if isinstance(payload, dict):
        return {str(key): make_json_safe(value) for key, value in payload.items()}
    if isinstance(payload, (list, tuple)):
        return [make_json_safe(item) for item in payload]
    return payload


def atomic_write_json(path, payload):
    atomic_write_text(path, json.dumps(make_json_safe(payload), indent=2, ensure_ascii=False))

def parse_symbols_via_nm(binary_path):
    """
    Parse symbols from binary using readelf (preferred) or nm.
    Returns a dict {func_name: offset}
    
    Note: For ARM32 Thumb mode, we need readelf because it preserves
    the Thumb bit (LSB=1), while nm strips it. Without the Thumb bit,
    Frida's Interceptor cannot correctly hook Thumb functions.
    """
    symbols = {}
    
    # Try readelf first (preserves Thumb bit for ARM32)
    try:
        output = subprocess.check_output(
            f"readelf -sW '{binary_path}' 2>/dev/null | grep FUNC",
            shell=True, text=True
        )
        for line in output.splitlines():
            parts = line.split()
            # Format: Num: Value Size Type Bind Vis Ndx Name
            #         194: 00000731    48 FUNC GLOBAL DEFAULT   13 sequential_ops
            if len(parts) >= 8 and parts[3] == 'FUNC':
                try:
                    addr = int(parts[1].rstrip(':'), 16)
                    name = parts[7]
                    if name and addr > 0:
                        symbols[name] = addr
                except (ValueError, IndexError):
                    pass
        
        if symbols:
            print(f"    Parsed {len(symbols)} symbols via readelf (Thumb-aware)")
            return symbols
    except Exception as e:
        print(f"    readelf failed, falling back to nm: {e}")
    
    # Fallback to nm (may not work correctly for ARM32 Thumb)
    try:
        output = subprocess.check_output(f"nm '{binary_path}'", shell=True, text=True)
        for line in output.splitlines():
            parts = line.split()
            if len(parts) >= 3:
                addr_str = parts[0]
                type_char = parts[1]
                name = parts[2]
                
                if type_char.upper() in ['T', 'W']:
                    try:
                        addr = int(addr_str, 16)
                        symbols[name] = addr
                    except ValueError:
                        pass
    except Exception as e:
        print(f"Warning: nm parsing failed: {e}")
    
    print(f"    Parsed {len(symbols)} symbols via nm")
    return symbols


def normalize_project_path(path_value):
    """Resolve relative project paths against PROJECT_ROOT."""
    if not path_value:
        return None

    if os.path.isabs(path_value):
        return os.path.abspath(path_value)

    project_candidate = os.path.abspath(os.path.join(PROJECT_ROOT, path_value))
    if os.path.exists(project_candidate):
        return project_candidate

    return os.path.abspath(path_value)


def infer_src_name_from_source_path(source_path):
    """Infer benchmark source id from source path such as src/5-1.cpp -> 5-1."""
    normalized = normalize_project_path(source_path)
    if not normalized:
        return None

    stem, ext = os.path.splitext(os.path.basename(normalized))
    if ext.lower() not in SOURCE_EXTENSIONS:
        return None

    if SOURCE_ID_RE.fullmatch(stem):
        return stem

    return None


def infer_src_name_from_binary_path(binary_path):
    """Infer benchmark source id from binary name such as 5-23_gcc_O0_g."""
    if not binary_path:
        return None

    binary_name = os.path.basename(binary_path)
    match = SOURCE_ID_FROM_BINARY_RE.match(binary_name)
    if match:
        return match.group("src")
    return None


def infer_source_path_from_src_name(src_name):
    """Locate the actual source file for a benchmark id under src/."""
    if not src_name:
        return None

    for ext in SOURCE_EXTENSIONS:
        candidate = os.path.join(PROJECT_ROOT, "src", f"{src_name}{ext}")
        if os.path.exists(candidate):
            return candidate
    return None


def load_supported_src_names():
    """Return the set of source ids present in target_functions.json."""
    try:
        with open(TARGET_FUNCTIONS_JSON, "r", encoding="utf-8") as f:
            payload = json.load(f)
        return set(payload.keys())
    except Exception:
        return set()


def is_source_path_arg(path_value):
    return os.path.splitext(path_value)[1].lower() in SOURCE_EXTENSIONS


def source_name_from_source_path(path_value):
    normalized = normalize_project_path(path_value)
    if not normalized:
        return None
    stem, ext = os.path.splitext(os.path.basename(normalized))
    if ext.lower() not in SOURCE_EXTENSIONS:
        return None
    return stem or None


def infer_src_names_from_build_cmd(build_cmd):
    if not build_cmd:
        return []

    try:
        parts = shlex.split(build_cmd)
    except Exception:
        return []

    src_names = []
    for part in parts:
        if not is_source_path_arg(part):
            continue
        src_name = source_name_from_source_path(part)
        if src_name and src_name not in src_names:
            src_names.append(src_name)
    return src_names


def resolve_source_metadata(cli_src_name, cli_source_path, original_bin_path, decompiled_bin_path):
    """
    Resolve the benchmark source id and source path consistently.

    Precedence:
    1. explicit CLI src_name
    2. BINBENCH_SRC_NAME env
    3. source path basename
    4. original binary name
    5. decompiled binary name
    """
    env_src_name = os.environ.get("BINBENCH_SRC_NAME")
    env_source_path = os.environ.get("BINBENCH_SOURCE_PATH")
    build_cmd = os.environ.get("BINBENCH_BUILD_CMD")

    path_candidates = []
    for raw_path in (cli_source_path, env_source_path):
        normalized = normalize_project_path(raw_path)
        if normalized and normalized not in path_candidates:
            path_candidates.append(normalized)

    src_candidates = []
    for label, value in (
        ("cli", cli_src_name),
        ("env", env_src_name),
        ("source_path", infer_src_name_from_source_path(path_candidates[0]) if path_candidates else None),
        ("original_bin", infer_src_name_from_binary_path(original_bin_path)),
        ("decompiled_bin", infer_src_name_from_binary_path(decompiled_bin_path)),
    ):
        if value:
            src_candidates.append((label, value))

    resolved_src_name = src_candidates[0][1] if src_candidates else None
    resolved_source_path = None

    for candidate in path_candidates:
        if os.path.exists(candidate):
            resolved_source_path = candidate
            break

    if not resolved_source_path and resolved_src_name:
        resolved_source_path = infer_source_path_from_src_name(resolved_src_name)

    if not resolved_src_name and resolved_source_path:
        resolved_src_name = infer_src_name_from_source_path(resolved_source_path)

    conflicts = sorted({value for _, value in src_candidates})
    if len(conflicts) > 1:
        print(f"⚠️ Conflicting src_name candidates detected: {src_candidates}. Using `{resolved_src_name}`.")

    if not resolved_src_name:
        resolved_src_name = "1"
        print("⚠️ Could not infer src_name from args/env/source/binary. Falling back to `1`.")

    if not resolved_source_path:
        resolved_source_path = infer_source_path_from_src_name(resolved_src_name)

    supported_src_names = load_supported_src_names()
    if supported_src_names and resolved_src_name not in supported_src_names:
        print(f"⚠️ Resolved src_name `{resolved_src_name}` not found in target_functions.json.")

    if resolved_source_path and not os.path.exists(resolved_source_path):
        print(f"⚠️ Resolved source_path does not exist: {resolved_source_path}")

    target_src_names = []
    for value in (
        resolved_src_name,
        source_name_from_source_path(resolved_source_path),
        *infer_src_names_from_build_cmd(build_cmd),
    ):
        if value and value not in target_src_names:
            target_src_names.append(value)

    supported_src_names = load_supported_src_names()
    if supported_src_names:
        filtered_target_src_names = [name for name in target_src_names if name in supported_src_names]
        if filtered_target_src_names:
            target_src_names = filtered_target_src_names

    if resolved_src_name and resolved_src_name not in target_src_names:
        target_src_names.insert(0, resolved_src_name)

    return resolved_src_name, resolved_source_path, target_src_names


def write_trace_config(src_name, symbol_map=None, src_names=None):
    """
    Write configuration to temp file using JSON so hook_trace.js can read it.
    Includes source name, path to target_functions.json, and manual symbol map.
    """
    fd, config_path = tempfile.mkstemp(prefix="binbench_config_", suffix=".json")
    os.close(fd)
    target_funcs_path = TARGET_FUNCTIONS_JSON
    
    config = {
        "src_name": src_name,
        "src_names": src_names or [src_name],
        "functions_json_path": target_funcs_path,
        "symbol_map": symbol_map or {}
    }
    
    try:
        with open(config_path, 'w', encoding="utf-8") as f:
            json.dump(config, f)
    except Exception as e:
        print(f"Warning: Could not write config file: {e}")
    return config_path


def summarize_trace_events(events):
    return {
        "event_count": len(events),
        "entry_count": sum(1 for item in events if item.startswith("TRACE_ENT|")),
        "exit_count": sum(1 for item in events if item.startswith("TRACE_EXT|")),
        "print_count": sum(1 for item in events if item.startswith("TRACE_PRINT|")),
    }


def run_trace(binary_path, label, src_name="1", target_src_names=None):
    """
    Run a binary and trace it with Frida.
    
    Args:
        binary_path: Path to the executable
        label: Label for logging (e.g., "Original" or "Decompiled")
        src_name: Source file name (e.g., "1", "2", "5-1") for function list loading
    
    Returns:
        Structured trace run summary.
    """
    print(f"\n🚀 Instrumenting: {label} ({binary_path})")

    trace_events = []
    result = {
        "status": "failed",
        "label": label,
        "binary_path": binary_path,
        "src_name": src_name,
        "target_src_names": target_src_names or [src_name],
        "error": None,
        "trace_events": [],
        "event_count": 0,
        "entry_count": 0,
        "exit_count": 0,
        "print_count": 0,
    }

    def on_message(message, data):
        """Receive messages from the Frida JS script for this trace run only."""
        if message['type'] == 'send':
            trace_events.append(message['payload'])
        elif message['type'] == 'error':
            print(f"[!] Frida Error: {message['stack']}")
        elif message['type'] == 'log':
            print(f"[*] Frida Log: {message['payload']}")
    
    # 0. Parse symbols manually
    symbol_map = parse_symbols_via_nm(binary_path)
    
    # Write config for JS script
    config_path = write_trace_config(src_name, symbol_map, src_names=target_src_names)
    
    # Check if binary exists and is executable
    if not os.path.exists(binary_path):
        print(f"❌ Binary not found: {binary_path}")
        result["error"] = f"Binary not found: {binary_path}"
        return result
    
    if not os.access(binary_path, os.X_OK):
        print(f"Making binary executable: {binary_path}")
        os.chmod(binary_path, 0o755)

    stale_before = cleanup_binary_processes(binary_path)
    if stale_before:
        print(f"  [Cleanup] Removed stale pre-existing processes for {os.path.basename(binary_path)}: {stale_before}")
        
    # Check symbols
    print(f"[*] Checking symbols for {binary_path}...")
    try:
        file_out = subprocess.check_output(["file", binary_path], text=True).strip()
        print(f"    File info: {file_out}")
        
        # Check symbol count
        try:
            nm_out = subprocess.check_output(f"nm '{binary_path}' | wc -l", shell=True, text=True).strip()
            print(f"    Symbol count (nm): {nm_out}")
            
            # Check if stripped
            if "stripped" in file_out and "not stripped" not in file_out:
                print("    ⚠️ WARNING: The binary appears to be stripped! Frida cannot hook functions by name.")
        except:
            print("    (nm command failed or not installed)")
    except Exception as e:
        print(f"    Checks failed: {e}")

    pid = None
    session = None
    script = None
    watchdog = None
    timeout = 30  # 30 seconds timeout

    try:
        # 1. Spawn process (suspended)
        pid = frida.spawn([binary_path])
        watchdog = start_trace_watchdog(pid, timeout + 5, binary_path=binary_path)
        session = frida.attach(pid)

        # 2. Load JS hook script
        js_path = os.path.join(os.path.dirname(__file__), "hook_trace.js")
        with open(js_path, "r") as f:
            script_code = f.read()
        script_code = f"var BINBENCH_TRACE_CONFIG_PATH = {json.dumps(config_path)};\n" + script_code

        script = session.create_script(script_code)
        script.on('message', on_message)
        script.load()

        # 3. Resume execution
        frida.resume(pid)

        # 4. Wait for completion with proper timeout
        # Poll to check if process has finished
        start_time = time.time()
        while time.time() - start_time < timeout:
            # Check if process is still alive
            if pid:
                try:
                    os.kill(pid, 0)  # Signal 0 = check if process exists
                except OSError:
                    # Process has finished
                    break
            time.sleep(0.1)

        # 5. Clean up
        try:
            if script:
                script.unload()
        except:
            pass
        try:
            if session:
                session.detach()
        except:
            pass

    except frida.ProcessNotFoundError as e:
        print(f"❌ Process not found: {e}")
        result["error"] = str(e)
        return result
    except frida.TransportError as e:
        print(f"❌ Frida transport error: {e}")
        result["error"] = str(e)
        return result
    except Exception as e:
        print(f"❌ Frida error: {e}")
        result["error"] = str(e)
        return result
    finally:
        # Ensure process is killed (use multiple methods for reliability)
        # This is critical: if Frida session is broken, frida.kill() won't work
        # and the spawned binary will keep running forever, consuming CPU
        if pid:
            # Method 1: Frida kill
            try:
                frida.kill(pid)
            except:
                pass
            # Method 2: Python os.kill
            try:
                os.kill(pid, signal.SIGKILL)
            except:
                pass
            # Method 3: Kill entire process group (catches child processes too)
            try:
                pgid = os.getpgid(pid)
                if pgid != os.getpgrp():
                    os.killpg(pgid, signal.SIGKILL)
            except:
                pass
            # Method 4: subprocess fallback (most reliable, works even when above fail)
            try:
                subprocess.run(f"kill -9 {pid} 2>/dev/null", shell=True, timeout=5)
            except:
                pass
            # Wait for process to actually terminate
            try:
                os.waitpid(pid, os.WNOHANG)
            except:
                pass
            # Verify it's dead
            try:
                os.kill(pid, 0)
                print(f"  ⚠️ WARNING: Process {pid} still alive after cleanup!")
            except OSError:
                pass  # Good, process is dead
        lingering = cleanup_binary_processes(binary_path)
        if lingering:
            print(f"  [Cleanup] Removed lingering `{os.path.basename(binary_path)}` processes: {lingering}")
        still_live = matching_binary_pids(binary_path)
        if still_live:
            print(f"  ⚠️ WARNING: Binary path still has live processes after cleanup: {still_live}")
        if config_path:
            try:
                os.unlink(config_path)
            except OSError:
                pass
        if watchdog:
            try:
                watchdog.terminate()
                watchdog.wait(timeout=1)
            except Exception:
                pass

    result["trace_events"] = list(trace_events)
    result.update(summarize_trace_events(trace_events))
    result["status"] = "success"
    print(f"  Captured {result['event_count']} trace entries")
    return result


def run_binary_capture(binary_path, label, timeout=30):
    """Run binary directly and capture program-level outputs."""
    print(f"\n▶ Running {label} directly for program-level evidence: {binary_path}")

    if not os.path.exists(binary_path):
        return {
            "binary_path": binary_path,
            "stdout": "",
            "stderr": f"Binary not found: {binary_path}",
            "exit_code": None,
            "signal": None,
            "timed_out": False,
            "capture_mode": "not_found",
            "buffering_override": False,
        }

    if not os.access(binary_path, os.X_OK):
        os.chmod(binary_path, 0o755)

    payload = None
    capture_mode, command = _program_capture_command(binary_path)
    try:
        result = subprocess.run(
            command,
            capture_output=True,
            text=True,
            timeout=timeout,
        )
        payload = {
            "binary_path": binary_path,
            "stdout": result.stdout,
            "stderr": result.stderr,
            "exit_code": result.returncode if result.returncode >= 0 else None,
            "signal": abs(result.returncode) if result.returncode < 0 else None,
            "timed_out": False,
            "capture_mode": capture_mode,
            "buffering_override": capture_mode == "stdbuf_unbuffered",
        }
    except subprocess.TimeoutExpired as e:
        payload = {
            "binary_path": binary_path,
            "stdout": e.stdout or "",
            "stderr": (e.stderr or "") + f"\nTimed out after {timeout}s",
            "exit_code": None,
            "signal": None,
            "timed_out": True,
            "capture_mode": capture_mode,
            "buffering_override": capture_mode == "stdbuf_unbuffered",
        }
    except Exception as e:
        payload = {
            "binary_path": binary_path,
            "stdout": "",
            "stderr": str(e),
            "exit_code": None,
            "signal": None,
            "timed_out": False,
            "capture_mode": capture_mode,
            "buffering_override": capture_mode == "stdbuf_unbuffered",
        }
    finally:
        lingering = cleanup_binary_processes(binary_path)
        if lingering:
            print(f"  [Cleanup] Removed lingering program-level `{os.path.basename(binary_path)}` processes: {lingering}")

    return payload


def check_data_flow(log_lines, func_name, expected_sequence):
    """
    Verify that expected data values appear in sequence within a function trace.
    
    Args:
        log_lines: List of trace log entries
        func_name: Name of the function to check
        expected_sequence: List of expected integer values in order
    
    Returns:
        True if sequence found, False otherwise
    """
    print(f"\n🔍 Verifying data flow in {func_name}...")
    print(f"   Expected sequence: {' -> '.join(map(str, expected_sequence))}")
    
    current_idx = 0
    found_sequence = []
    in_target_func = False
    
    for line in log_lines:
        if f"[ENT] {func_name}" in line:
            in_target_func = True
            continue
        if f"[EXT] {func_name}" in line:
            in_target_func = False
            continue
            
        if not in_target_func:
            continue
            
        target_val = expected_sequence[current_idx]
        
        # Match pattern like "(12)" in register values
        if f"({target_val})" in line:
            found_sequence.append(target_val)
            current_idx += 1
            if current_idx >= len(expected_sequence):
                break
                
    if len(found_sequence) == len(expected_sequence):
        print(f"   ✅ Verification passed! Found: {' -> '.join(map(str, found_sequence))}")
        return True
    else:
        print(f"   ⚠️ Incomplete verification. Found: {' -> '.join(map(str, found_sequence))}")
        return False


def main():
    parser = argparse.ArgumentParser(description="BinBench Semantic Instrumentation")
    parser.add_argument("original_bin", nargs="?", help="Path to original binary")
    parser.add_argument("decompiled_bin", nargs="?", help="Path to recompiled binary")
    parser.add_argument("--src-name", default=None, help="Source name for function list (e.g., '1', '2')")
    parser.add_argument("--source-path", default=None, help="Path to original source file")
    args = parser.parse_args()

    # Determine binary paths
    if args.original_bin and args.decompiled_bin:
        original_bin_path = args.original_bin
        decompiled_bin_path = args.decompiled_bin
    else:
        # Fallback to defaults
        original_bin_path = os.path.join(PROJECT_ROOT, "results", "bin_original", "test_orig")
        decompiled_bin_path = os.path.join(PROJECT_ROOT, "results", "syntactic", "bin", "fix_test_gcc_O0_g_fixed")
    
    src_name, source_path, target_src_names = resolve_source_metadata(
        args.src_name,
        args.source_path,
        original_bin_path,
        decompiled_bin_path,
    )
    print(f"Using source name: {src_name}")
    if source_path:
        print(f"Using source path: {source_path}")
    else:
        print("Using source path: <unresolved>")
    print(f"Target source names for hooks: {target_src_names}")
    
    start_time = time.time()
    os.makedirs(RESULTS_DIR, exist_ok=True)

    context = {
        "trace_format_version": SEMANTIC_TRACE_FORMAT_VERSION,
        "trace_capture_mode": SEMANTIC_TRACE_CAPTURE_MODE,
        "trace_runs_complete": False,
        "arch": os.environ.get("BINBENCH_ARCH"),
        "src_name": src_name,
        "source_path": source_path,
        "target_src_names": target_src_names,
        "build_cmd": os.environ.get("BINBENCH_BUILD_CMD"),
        "original_bin": original_bin_path,
        "decompiled_bin": decompiled_bin_path,
    }
    atomic_write_json(os.path.join(RESULTS_DIR, "semantic_context.json"), context)

    # 1. Program-level evidence
    original_run = run_binary_capture(original_bin_path, "Original")
    decompiled_run = run_binary_capture(decompiled_bin_path, "Decompiled")

    atomic_write_json(os.path.join(RESULTS_DIR, "program_original.json"), original_run)
    atomic_write_json(os.path.join(RESULTS_DIR, "program_decompiled.json"), decompiled_run)

    atomic_write_text(os.path.join(RESULTS_DIR, "stdout_original.txt"), original_run.get("stdout", ""))
    atomic_write_text(os.path.join(RESULTS_DIR, "stdout_decompiled.txt"), decompiled_run.get("stdout", ""))

    orig_trace_path = os.path.join(RESULTS_DIR, "trace_original.txt")
    decomp_trace_path = os.path.join(RESULTS_DIR, "trace_decompiled.txt")
    atomic_write_text(orig_trace_path, "")
    atomic_write_text(decomp_trace_path, "")
    
    # 2. Trace original program
    original_trace = run_trace(original_bin_path, "Original", src_name, target_src_names=target_src_names)
    log_orig = original_trace["trace_events"]
    if original_trace["status"] != "success":
        print("Original program trace failed. Continuing with empty trace for metrics generation.")

    # 3. Trace decompiled program
    decompiled_trace = run_trace(decompiled_bin_path, "Decompiled", src_name, target_src_names=target_src_names)
    log_decomp = decompiled_trace["trace_events"]
    if decompiled_trace["status"] != "success":
        print("Decompiled program trace failed. Continuing with empty trace for metrics generation.")

    # 4. Save trace logs
    atomic_write_text(orig_trace_path, "\n".join(log_orig))
    atomic_write_text(decomp_trace_path, "\n".join(log_decomp))

    context["trace_runs"] = {
        "original": {
            key: value
            for key, value in original_trace.items()
            if key != "trace_events"
        },
        "decompiled": {
            key: value
            for key, value in decompiled_trace.items()
            if key != "trace_events"
        },
    }
    context["trace_runs_complete"] = True
    atomic_write_json(os.path.join(RESULTS_DIR, "semantic_context.json"), context)
    
    print(f"\n[*] Trace logs saved to {RESULTS_DIR}")

    # 5. Run trace analysis
    print("\n" + "=" * 50)
    print("📊 Running Trace Analysis")
    print("=" * 50)
    
    analyze_script = os.path.join(os.path.dirname(__file__), "analyze_traces.py")
    analysis_success = False
    try:
        result = subprocess.run(
            [sys.executable, analyze_script, RESULTS_DIR],
            capture_output=True,
            text=True,
            timeout=30
        )
        print(result.stdout)
        if result.stderr:
            print(f"Stderr: {result.stderr}")
        analysis_success = result.returncode == 0
    except subprocess.TimeoutExpired:
        print("Analysis script timed out")
    except Exception as e:
        print(f"Analysis script error: {e}")
    
    # 6. Append time usage to report
    end_time = time.time()
    total_time = end_time - start_time
    print(f"\n⏱ Total Instrumentation Time: {total_time:.2f}s")
    
    report_path = os.path.join(RESULTS_DIR, "result_analysis.md")
    if os.path.exists(report_path):
        try:
            with open(report_path, "a", encoding="utf-8") as f:
                f.write(f"\n## 6. Performance\n")
                f.write(f"**Total Instrumentation & Analysis Time**: {total_time:.2f}s\n")
        except Exception as e:
            print(f"Could not append time to report: {e}")

    metrics_path = os.path.join(RESULTS_DIR, "result_metrics.json")
    if not analysis_success or not os.path.exists(metrics_path):
        fallback_metrics = {
            "execution_status": "failed",
            "quality_status": "fail",
            "analysis_version": SEMANTIC_ANALYSIS_VERSION,
            "trace_format_version": context.get("trace_format_version"),
            "trace_capture_mode": context.get("trace_capture_mode"),
            "source_path": source_path,
            "drivers": [],
            "trace_health": {
                "status": "unavailable",
                "usable_for_structural_evidence": False,
                "original": context.get("trace_runs", {}).get("original", {}),
                "decompiled": context.get("trace_runs", {}).get("decompiled", {}),
            },
            "program_level": {
                "status": "fail",
                "comparison_key": "test_id+occurrence",
                "comparison_denominator_policy": "stable_case_union",
                "process_status_match": False,
                "stdout_exact_match": False,
                "stdout_case_match_ratio": 0.0,
                "stable_case_total": 0,
                "stable_case_matched": 0,
                "stable_case_ids": [],
                "unstable_case_ids": [],
                "original_exit_code": original_run.get("exit_code"),
                "decompiled_exit_code": decompiled_run.get("exit_code"),
                "original_signal": original_run.get("signal"),
                "decompiled_signal": decompiled_run.get("signal"),
                "comparisons_total": 0,
                "comparisons": [],
            },
            "function_level": {
                "status": "unavailable",
                "segment_count": 0,
                "segment_callseq_match_ratio": None,
                "feature_function_match_ratio": None,
                "call_evidence_segment_count": 0,
                "call_evidence_unavailable_count": 0,
                "segment_print_match_ratio": None,
                "segment_print_evidence_count": 0,
                "segment_print_unavailable_count": 0,
                "normalized_io_match_ratio": 0.0,
                "trace_errors": {"original": 0, "decompiled": 0},
                "segments": [],
            },
            "low_level": {
                "status": "unavailable",
                "method": "normalized_register_signature_sequence",
                "similarity_score": None,
                "token_count_original": 0,
                "token_count_decompiled": 0,
            },
        }
        atomic_write_json(metrics_path, fallback_metrics)
        return 1

    return 0


if __name__ == "__main__":
    sys.exit(main())
