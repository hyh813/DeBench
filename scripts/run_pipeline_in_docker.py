#!/usr/bin/env python3
"""
BinBench guest-side evaluation worker.
Typically invoked from host-side wrappers after Step 1 has completed.

Usage:
    python3 run_pipeline_in_docker.py <source_file> <decompiled_file> [--original-bin <bin_path>]

Results directory structure:
    results/{arch}/{src}/{filename}/{decompiler}/
        - readability/
        - syntactic/
        - semantic/
        - report.md
"""

import errno
import os
import sys
import json
import shlex
import subprocess
import shutil
import argparse
import time
import tempfile
from datetime import datetime

# Paths (relative to script location)
# If running in Docker, these are typically /work
# If running in Lima/Host, these should be relative to project root
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.abspath(os.path.join(SCRIPT_DIR, ".."))
READABILITY_TIMEOUT_SECONDS = int(os.environ.get("BINBENCH_READABILITY_TIMEOUT", "900"))
if PROJECT_ROOT not in sys.path:
    sys.path.insert(0, PROJECT_ROOT)
RESULTS_DIR = os.path.join(PROJECT_ROOT, "results")  # Base Step2 tree, can be overridden by --results-dir
BUILD_JSON = os.path.join(PROJECT_ROOT, "build", "successful_builds.json")

from evaluator.semantic.trace_format import (
    SEMANTIC_ANALYSIS_VERSION,
    SEMANTIC_TRACE_FORMAT_VERSION,
)


def print_header(title):
    print("\n" + "=" * 80)
    print(f" {title}")
    print("=" * 80)


def cleanup_task_binaries(binary_paths):
    """
    Best-effort cleanup for binaries belonging to the current task only.
    Avoids broad pkill/pgrep patterns that would kill other concurrent workers.
    """
    candidates = [path for path in binary_paths if path]
    if not candidates:
        return
    print("[Cleanup] Checking for stale task-local binary processes...")
    try:
        for binary_path in candidates:
            quoted = shlex.quote(os.path.abspath(binary_path))
            subprocess.run(
                f"pgrep -f -- {quoted} 2>/dev/null | xargs -r kill -9 2>/dev/null || true",
                shell=True,
                capture_output=True,
                text=True,
                timeout=5,
            )
        print("[Cleanup] Task-local cleanup complete")
    except Exception as e:
        print(f"[Cleanup] Warning: {e}")


def load_json(path):
    try:
        with open(path, 'r', encoding='utf-8') as f:
            return json.load(f)
    except Exception as e:
        print(f"Warning: Failed to load {path}: {e}")
        return None


def atomic_write_json(path, payload):
    directory = os.path.dirname(path) or "."
    os.makedirs(directory, exist_ok=True)
    fd, tmp_path = tempfile.mkstemp(prefix=".tmp-", dir=directory)
    try:
        with os.fdopen(fd, "w", encoding="utf-8") as f:
            json.dump(payload, f, indent=2, ensure_ascii=False)
            f.flush()
            os.fsync(f.fileno())
        os.replace(tmp_path, path)
    finally:
        if os.path.exists(tmp_path):
            os.unlink(tmp_path)


def get_semantic_output_versions(output_dir):
    semantic_context = load_json(os.path.join(output_dir, "semantic_context.json")) or {}
    semantic_metrics = load_json(os.path.join(output_dir, "result_metrics.json")) or {}

    trace_format_version = semantic_context.get("trace_format_version")
    if trace_format_version is None:
        trace_format_version = semantic_metrics.get("trace_format_version")

    analysis_version = semantic_metrics.get("analysis_version")
    return trace_format_version, analysis_version


def semantic_trace_capture_complete(output_dir):
    semantic_context = load_json(os.path.join(output_dir, "semantic_context.json")) or {}
    if semantic_context.get("trace_runs_complete") is True:
        return True

    trace_runs = semantic_context.get("trace_runs") or {}
    return all(
        isinstance(trace_runs.get(side), dict) and trace_runs[side].get("status")
        for side in ("original", "decompiled")
    )


def mark_semantic_context_terminal(output_dir):
    context_path = os.path.join(output_dir, "semantic_context.json")
    context = load_json(context_path) or {}
    trace_runs = context.get("trace_runs") or {}

    for side in ("original", "decompiled"):
        existing = trace_runs.get(side)
        if isinstance(existing, dict) and existing.get("status"):
            continue

        trace_path = os.path.join(output_dir, f"trace_{side}.txt")
        program_path = os.path.join(output_dir, f"program_{side}.json")
        if not (os.path.exists(trace_path) or os.path.exists(program_path)):
            continue
        trace_size = os.path.getsize(trace_path) if os.path.exists(trace_path) else 0
        trace_runs[side] = {
            "status": "unavailable" if trace_size == 0 else "success",
            "program_only": os.path.exists(program_path),
            "trace_event_count": trace_size,
            "error": "fallback_metrics_only" if trace_size == 0 else None,
        }

    context["trace_runs"] = trace_runs
    context["trace_runs_complete"] = all(
        isinstance(trace_runs.get(side), dict) and trace_runs[side].get("status")
        for side in ("original", "decompiled")
    )
    context.setdefault("trace_format_version", SEMANTIC_TRACE_FORMAT_VERSION)
    atomic_write_json(context_path, context)


def should_rerun_semantic_analysis_only(output_dir):
    required_paths = [
        "program_original.json",
        "program_decompiled.json",
        "trace_original.txt",
        "trace_decompiled.txt",
    ]
    if not all(os.path.exists(os.path.join(output_dir, name)) for name in required_paths):
        return False
    if not semantic_trace_capture_complete(output_dir):
        return False

    trace_format_version, analysis_version = get_semantic_output_versions(output_dir)
    return (
        trace_format_version == SEMANTIC_TRACE_FORMAT_VERSION
        and analysis_version != SEMANTIC_ANALYSIS_VERSION
    )


def run_semantic_analysis_only(output_dir):
    print_header("Step 3: Semantic Fidelity (Analysis Refresh)")
    analyze_script = os.path.join(PROJECT_ROOT, "evaluator", "semantic", "analyze_traces.py")

    try:
        result = subprocess.run(
            [sys.executable, analyze_script, output_dir],
            capture_output=True,
            text=True,
            timeout=30,
        )
        print(result.stdout)
        if result.stderr:
            print(f"Stderr: {result.stderr}")
    except Exception as e:
        print(f"Semantic analysis refresh failed: {e}")
        return False

    metrics = load_json(os.path.join(output_dir, "result_metrics.json")) or {}
    return metrics.get("execution_status") == "success"


def find_build_info(bin_path, builds):
    """Find the original build info for a binary path."""
    for build in builds:
        if build.get("bin_path") == bin_path:
            return build
    return None


def infer_build_info_from_decompiled(decompiled_path, builds):
    """
    Infer build info from decompiled file path.
    Example: decompiled/ghidra_out/x64/1/1_gcc_O0_g.c
             -> build/x64/1/1_gcc_O0_g
    """
    parts = decompiled_path.split('/')
    
    arch = None
    case_id = None
    filename = os.path.basename(decompiled_path)
    bin_name = filename.replace('.c', '').replace('.dsm', '').replace('.ll', '')
    
    for i, part in enumerate(parts):
        if part in ['x64', 'x86', 'arm32', 'arm64', 'mips32', 'mips64']:
            arch = part
            if i + 1 < len(parts):
                case_id = parts[i + 1]
            break
    
    if not arch or not case_id:
        return None
    
    expected_bin_path = f"build/{arch}/{case_id}/{bin_name}"
    build_info = find_build_info(expected_bin_path, builds)
    
    if build_info:
        build_info = dict(build_info)  # Copy
        build_info['_arch'] = arch
        build_info['_case_id'] = case_id
        build_info['_bin_name'] = bin_name
    
    return build_info


def get_decompiler_name(decompiled_path):
    """Extract decompiler name from path."""
    path_lower = decompiled_path.lower()
    if "ghidra" in path_lower:
        return "ghidra"
    elif "retdec" in path_lower:
        return "retdec"
    elif "ida" in path_lower:
        return "ida"
    elif "angr" in path_lower:
        return "angr"
    elif "binaryai" in path_lower:
        return "binaryai"
    elif "mlm" in path_lower:
        return "mlm"
    elif "llm4decompile" in path_lower:
        return "llm4decompile" 
    return "unknown"


def resolve_results_root(path_value):
    if os.path.isabs(path_value):
        return path_value
    return os.path.join(PROJECT_ROOT, path_value)


def create_result_dirs(
    build_info,
    decompiled_path,
    *,
    results_root=None,
    create_dirs=True,
    include_readability=True,
    include_syntactic=True,
    include_semantic=True,
):
    """
    Create result directory structure:
    results/{arch}/{src}/{filename}/{decompiler}/
    """
    arch = build_info.get('_arch', build_info.get('arch', 'unknown'))
    src = build_info.get('src', 'unknown')
    bin_name = build_info.get('_bin_name', os.path.basename(decompiled_path).replace('.c', ''))
    decompiler = get_decompiler_name(decompiled_path)

    root_dir = results_root or RESULTS_DIR
    base_dir = os.path.join(root_dir, arch, src, bin_name, decompiler)

    readability_dir = os.path.join(base_dir, "readability")
    syntactic_dir = os.path.join(base_dir, "syntactic")
    semantic_dir = os.path.join(base_dir, "semantic")

    if create_dirs:
        _robust_makedirs(os.path.join(root_dir, arch, src))
        _robust_makedirs(base_dir)
        if include_readability:
            _robust_makedirs(readability_dir)
        if include_syntactic:
            _robust_makedirs(syntactic_dir)
        if include_semantic:
            _robust_makedirs(semantic_dir)

    return {
        "base": base_dir,
        "readability": readability_dir,
        "syntactic": syntactic_dir,
        "semantic": semantic_dir,
        "arch": arch,
        "src": src,
        "bin_name": bin_name,
        "decompiler": decompiler,
        "results_root": root_dir,
    }


def _robust_makedirs(path, retries=5, base_delay=0.2):
    """Best-effort mkdir for flaky 9p mounts under concurrent workers."""
    last_error = None
    for attempt in range(retries):
        try:
            os.makedirs(path, exist_ok=True)
            return
        except FileExistsError as exc:
            if os.path.isdir(path):
                return
            last_error = exc
        except FileNotFoundError as exc:
            parent = os.path.dirname(path)
            if parent and parent != path:
                try:
                    os.makedirs(parent, exist_ok=True)
                except OSError:
                    pass
            last_error = exc
        except OSError as exc:
            if exc.errno == errno.EEXIST and os.path.isdir(path):
                return
            if exc.errno not in (errno.ENOENT, errno.EEXIST):
                raise
            last_error = exc
        time.sleep(base_delay * (attempt + 1))
    if last_error:
        raise last_error


def check_syntactic_completed(dirs):
    """
    Check if syntactic step was completed successfully.
    Returns (is_completed, recompiled_bin_path or None)
    """
    repair_trace_path = os.path.join(dirs["syntactic"], "repair_trace.json")
    
    if not os.path.exists(repair_trace_path):
        return False, None
    
    try:
        with open(repair_trace_path, 'r', encoding='utf-8') as f:
            trace = json.load(f)
        
        if trace.get("final_status") != "success":
            return False, None
        
        # Check if binary exists
        bin_name = dirs["bin_name"]
        recompiled_bin_path = os.path.join(dirs["syntactic"], "bin", f"{bin_name}_fixed")
        
        if os.path.exists(recompiled_bin_path):
            return True, recompiled_bin_path
        else:
            return False, None
            
    except Exception as e:
        print(f"Error reading repair trace: {e}")
        return False, None


def get_latest_readability_result(dirs):
    """
    Get the most recent readability result file.
    Returns the result dict or None.
    """
    readability_dir = dirs["readability"]
    
    if not os.path.exists(readability_dir):
        return None
    
    # Find all test_results_*.json files
    result_files = [f for f in os.listdir(readability_dir) if f.startswith("test_results_") and f.endswith(".json")]
    
    if not result_files:
        return None
    
    # Sort by name (which includes timestamp) and get the latest
    latest_file = sorted(result_files)[-1]
    
    try:
        with open(os.path.join(readability_dir, latest_file), 'r', encoding='utf-8') as f:
            payload = json.load(f)
            if isinstance(payload, dict) and "control_groups" in payload:
                groups = payload.get("control_groups") or []
                if groups and isinstance(groups[0], dict):
                    results = groups[0].get("results") or []
                    if results and isinstance(results[0], dict):
                        return results[0]
            return payload
    except:
        return None


def run_readability_eval(source_path, decompiled_path, output_dir):
    """Step 1: Readability Evaluation"""
    print_header("Step 1: Readability Evaluation")
    
    script_path = os.path.join(PROJECT_ROOT, "evaluator", "readability", "eval_readability.py")
    
    try:
        result = subprocess.run(
            [sys.executable, script_path, source_path, decompiled_path],
            capture_output=True,
            text=True,
            timeout=READABILITY_TIMEOUT_SECONDS,
            env={**os.environ, "BINBENCH_READABILITY_OUTPUT": output_dir}
        )
        print(result.stdout)
        if result.stderr:
            print(f"Stderr: {result.stderr}")

        return result.returncode == 0
    except subprocess.TimeoutExpired:
        print(f"Readability evaluation timed out ({READABILITY_TIMEOUT_SECONDS}s)")
        return False
    except Exception as e:
        print(f"Readability evaluation failed: {e}")
        return False


def run_syntactic_eval(source_path, decompiled_path, build_info, output_dir, max_iters=50, restart=False):
    """
    Step 2: Syntactic Correctness & Recompilation
    No timeout - let the LLM client handle retries internally.
    """
    print_header("Step 2: Syntactic Correctness & Recompilation")
    
    script_path = os.path.join(PROJECT_ROOT, "evaluator", "syntactic", "auto_fixer_v3.py")
    
    compile_cmd = build_info.get("cmd", "") if build_info else ""
    
    # Set environment for output directory and compile command
    env = {
        **os.environ,
        "BINBENCH_ORIGINAL_CMD": compile_cmd,
        "BINBENCH_SYNTACTIC_OUTPUT": output_dir,
        "BINBENCH_PRIMARY_SOURCE": source_path,
    }
    
    try:
        # No timeout - auto_fixer has its own retry logic in llm_client
        cmd = [sys.executable, "-u", script_path, decompiled_path, "--max-iters", str(max_iters)]
        if restart:
            cmd.append("--restart")
        result = subprocess.run(
            cmd,
            text=True,
            env=env
        )

        # Check if binary was generated
        filename = os.path.basename(decompiled_path).replace('.c', '')

        # Check in output_dir/bin
        recompiled_bin_path = os.path.join(output_dir, "bin", f"{filename}_fixed")
        
        if os.path.exists(recompiled_bin_path):
            print(f"✅ Recompiled binary generated: {recompiled_bin_path}")
            return True, recompiled_bin_path
        else:
            print("❌ Recompilation failed - no binary generated")
            return False, None
            
    except Exception as e:
        print(f"Syntactic evaluation failed: {e}")
        return False, None


def native_recompile_subdir(arch):
    if arch == "arm32":
        return "native_arm32_bin"
    if arch == "x86":
        return "native_x86_bin"
    return f"native_{arch}_bin"


def native_recompile_label(arch):
    if arch == "arm32":
        return "ARM32"
    if arch == "x86":
        return "x86"
    return arch


def recompile_source_natively(source_path, build_info, output_dir, arch):
    """
    Recompile source code natively inside the guest VM to avoid host-built GLIBC/runtime mismatch.

    Returns: (success, native_bin_path).
    """
    if not source_path or not os.path.exists(source_path):
        print(f"Source file not found: {source_path}")
        return False, None
    
    bin_name = build_info.get('_bin_name', f'native_{arch}')
    native_bin_dir = os.path.join(output_dir, native_recompile_subdir(arch))
    _robust_makedirs(native_bin_dir)
    native_bin_path = os.path.join(native_bin_dir, f"{bin_name}_native")
    
    cmd = build_native_recompile_cmd(source_path, build_info, native_bin_path)
    arch_label = native_recompile_label(arch)
    
    print(f"🔄 Recompiling source for native {arch_label} execution...")
    print(f"   Command: {' '.join(cmd)}")
    
    try:
        result = subprocess.run(
            cmd,
            capture_output=True,
            text=True,
            timeout=60
        )
        
        if result.returncode == 0 and os.path.exists(native_bin_path):
            print(f"   ✅ Native {arch_label} binary: {native_bin_path}")
            return True, native_bin_path
        else:
            print(f"   ❌ Compilation failed: {result.stderr[:200]}")
            return False, None
    except Exception as e:
        print(f"   ❌ Error: {e}")
        return False, None


def is_source_arg(arg):
    return arg.startswith("src/") and arg.endswith((".c", ".cpp", ".cc", ".cxx"))


def normalize_source_arg(arg):
    return os.path.normpath(arg)


def native_compiler_binary(original_compiler):
    compiler_name = os.path.basename(original_compiler)
    if compiler_name.endswith("clang++"):
        return "clang++"
    if compiler_name.endswith("clang"):
        return "clang"
    if compiler_name.endswith("g++"):
        return "g++"
    if compiler_name.endswith("gcc"):
        return "gcc"
    return compiler_name


def normalize_target_for_native_vm(compiler, part):
    compiler_name = os.path.basename(compiler)
    if compiler_name not in ("clang", "clang++"):
        return part

    machine = os.uname().machine.lower()
    if machine not in ("armv7l", "armv6l"):
        return part

    if part == "--target=arm-linux-gnueabi":
        return "--target=arm-linux-gnueabihf"
    return part


def build_native_recompile_cmd(source_path, build_info, output_path):
    compile_cmd = build_info.get("cmd", "") if build_info else ""
    if not compile_cmd:
        cmd = ["gcc", source_path, "-o", output_path]
        opt = build_info.get("opt", "O0") if build_info else "O0"
        debug = build_info.get("debug", "") if build_info else ""
        cmd.insert(1, f"-{opt}")
        if debug:
            cmd.insert(2, "-g")
        return cmd

    parts = shlex.split(compile_cmd)
    if not parts:
        return ["gcc", source_path, "-o", output_path]

    source_indices = [idx for idx, part in enumerate(parts) if is_source_arg(part)]
    normalized_primary = normalize_source_arg(source_path)
    primary_basename = os.path.basename(normalized_primary)
    primary_idx = source_indices[0] if source_indices else None
    for idx in source_indices:
        normalized_part = normalize_source_arg(parts[idx])
        if normalized_part == normalized_primary or os.path.basename(normalized_part) == primary_basename:
            primary_idx = idx
            break

    native_compiler = native_compiler_binary(parts[0])
    compile_flags = []
    source_parts = []
    link_flags = []
    i = 1
    while i < len(parts):
        part = parts[i]
        if part == "-o" and i + 1 < len(parts):
            i += 2
            continue
        if part == "--target" and i + 1 < len(parts):
            normalized_target = normalize_target_for_native_vm(native_compiler, f"--target={parts[i + 1]}")
            if native_compiler in ("clang", "clang++"):
                compile_flags.append(normalized_target)
            i += 2
            continue
        if part.startswith("--target="):
            normalized_part = normalize_target_for_native_vm(native_compiler, part)
            if native_compiler in ("clang", "clang++"):
                compile_flags.append(normalized_part)
            i += 1
            continue
        if is_source_arg(part):
            if i == primary_idx:
                source_parts.append(source_path)
            else:
                source_parts.append(part)
            i += 1
            continue
        if (
            part == "-pthread"
            or part.startswith("-l")
            or part.startswith("-L")
            or part.startswith("-Wl,")
        ):
            link_flags.append(part)
        else:
            compile_flags.append(part)
        i += 1

    if not source_parts:
        source_parts.append(source_path)

    return [native_compiler] + compile_flags + source_parts + link_flags + ["-o", output_path]


def run_semantic_eval(original_bin_path, recompiled_bin_path, src_name, output_dir, arch=None, source_path=None, build_info=None):
    """
    Step 3: Semantic Fidelity (Frida Instrumentation)
    """
    print_header("Step 3: Semantic Fidelity")

    def salvage_partial_metrics():
        program_original_path = os.path.join(output_dir, "program_original.json")
        program_decompiled_path = os.path.join(output_dir, "program_decompiled.json")
        if not (os.path.exists(program_original_path) and os.path.exists(program_decompiled_path)):
            return False

        for trace_name in ("trace_original.txt", "trace_decompiled.txt"):
            open(os.path.join(output_dir, trace_name), "a", encoding="utf-8").close()

        analyze_script = os.path.join(PROJECT_ROOT, "evaluator", "semantic", "analyze_traces.py")
        try:
            result = subprocess.run(
                [sys.executable, analyze_script, output_dir],
                capture_output=True,
                text=True,
                timeout=30,
            )
            print(result.stdout)
            if result.stderr:
                print(f"Stderr: {result.stderr}")
        except Exception as e:
            print(f"Semantic fallback analysis failed: {e}")
            return False

        metrics_path = os.path.join(output_dir, "result_metrics.json")
        if not os.path.exists(metrics_path):
            return False
        try:
            with open(metrics_path, "r", encoding="utf-8") as f:
                metrics = json.load(f)
            if metrics.get("execution_status") == "success":
                mark_semantic_context_terminal(output_dir)
            return metrics.get("execution_status") == "success"
        except Exception as e:
            print(f"Semantic fallback metrics parse failed: {e}")
            return False
    
    native_original_bin = None
    if arch in ("arm32", "x86"):
        arch_label = native_recompile_label(arch)
        print(f"Using source name: {src_name}")
        print(f"\n⚠️  {arch_label} detected: original runtime compatibility must be validated inside the guest.")

        if not source_path or not build_info:
            print("   ❌ Missing source_path/build_info for native original recompilation.")
            return False

        print("   Recompiling source natively for program-level and trace instrumentation...")
        success, native_original_bin = recompile_source_natively(source_path, build_info, output_dir, arch)
        if not success or not native_original_bin:
            print("   ❌ Native original recompilation failed; refusing to fall back to a potentially incompatible host-built binary.")
            return False
        original_bin_path = native_original_bin
    
    script_path = os.path.join(PROJECT_ROOT, "evaluator", "semantic", "run_instrumentation.py")
    
    env = {
        **os.environ,
        "BINBENCH_SRC_NAME": src_name,
        "BINBENCH_ARCH": arch or "",
        "BINBENCH_SEMANTIC_OUTPUT": output_dir,
        "BINBENCH_SOURCE_PATH": source_path or "",
        "BINBENCH_BUILD_CMD": (build_info or {}).get("cmd", ""),
    }
    
    # Store native bin path for report/debugging
    if native_original_bin:
        env["BINBENCH_NATIVE_ORIGINAL_BIN"] = native_original_bin
        if arch == "arm32":
            env["BINBENCH_ARM32_NATIVE_BIN"] = native_original_bin

    cleanup_task_binaries([original_bin_path, recompiled_bin_path, native_original_bin])
    
    try:
        # Use Popen with process group so we can kill entire tree on timeout
        # This prevents Frida-spawned test binaries from becoming orphans
        process = subprocess.Popen(
            [
                sys.executable, "-u", script_path,
                original_bin_path,
                recompiled_bin_path,
                "--src-name", src_name,
                "--source-path", source_path or "",
            ],
            text=True,
            env=env,
            preexec_fn=os.setsid  # Create new process group
        )

        try:
            process.wait(timeout=180)  # 3 minutes for instrumentation
        except subprocess.TimeoutExpired:
            print("Semantic evaluation timed out (180s)")
            # Kill entire process group (including Frida-spawned binaries)
            import signal
            try:
                os.killpg(os.getpgid(process.pid), signal.SIGKILL)
            except OSError:
                pass
            process.kill()
            process.wait()
            return salvage_partial_metrics()

        if process.returncode != 0:
            return salvage_partial_metrics()

        metrics_path = os.path.join(output_dir, "result_metrics.json")
        if not os.path.exists(metrics_path):
            print("Semantic evaluation finished but result_metrics.json is missing")
            return salvage_partial_metrics()

        try:
            with open(metrics_path, "r", encoding="utf-8") as f:
                metrics = json.load(f)
            if metrics.get("execution_status") == "success":
                mark_semantic_context_terminal(output_dir)
            return metrics.get("execution_status") == "success"
        except Exception as e:
            print(f"Semantic evaluation completed but failed to parse metrics JSON: {e}")
            return salvage_partial_metrics()
    except Exception as e:
        print(f"Semantic evaluation failed: {e}")
        return salvage_partial_metrics()
    finally:
        cleanup_task_binaries([original_bin_path, recompiled_bin_path, native_original_bin])



def generate_report(source_path, decompiled_path, results, build_info, dirs, reference_dirs=None, step3_only=False):
    """Generate final markdown report."""
    print_header("Final Report Generation")

    reference_dirs = reference_dirs or dirs
    report_path = os.path.join(dirs["base"], "report.md")

    with open(report_path, "w", encoding="utf-8") as f:
        f.write(f"# BinBench Evaluation Report\n\n")
        f.write(f"**Generated:** {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}\n\n")
        
        f.write("## 1. Test Object\n\n")
        f.write("| Attribute | Value |\n")
        f.write("|-----------|-------|\n")
        f.write(f"| Source | `{source_path}` |\n")
        f.write(f"| Decompiled | `{decompiled_path}` |\n")
        f.write(f"| Decompiler | {dirs['decompiler'].upper()} |\n")
        f.write(f"| Architecture | {dirs['arch']} |\n")
        if build_info:
            f.write(f"| Compiler | {build_info.get('compiler', 'unknown')} |\n")
            f.write(f"| Optimization | {build_info.get('opt', 'unknown')} |\n")
            f.write(f"| Debug | {build_info.get('debug', 'unknown')} |\n")
        f.write("\n")
        
        f.write("## 2. Evaluation Results\n\n")
        f.write("| Dimension | Status |\n")
        f.write("|-----------|--------|\n")
        if step3_only:
            readability_status = "✅ Reused (Step2 tree)" if results.get("readability") else "❌ Missing"
            syntactic_status = "✅ Reused fixed binary" if results.get("syntactic") else "❌ Missing Step2 artifact"
        else:
            readability_status = "✅ Completed" if results.get("readability") else "❌ Failed"
            syntactic_status = "✅ Compiled" if results.get("syntactic") else "❌ Failed"
        f.write(f"| Readability | {readability_status} |\n")
        f.write(f"| Syntactic | {syntactic_status} |\n")
        
        # Handle skipped semantic status
        semantic_metrics_path = os.path.join(dirs["semantic"], "result_metrics.json")
        semantic_metrics = None
        if os.path.exists(semantic_metrics_path):
            try:
                with open(semantic_metrics_path, "r", encoding="utf-8") as mf:
                    semantic_metrics = json.load(mf)
            except Exception:
                semantic_metrics = None

        if results.get('semantic_skipped'):
            semantic_status = "⏭ Skipped (--skip-step3)"
        elif semantic_metrics:
            semantic_status = f"✅ Completed ({semantic_metrics.get('quality_status', 'unknown')})" if results.get('semantic') else "❌ Execution Failed"
        else:
            semantic_status = '✅ Completed' if results.get('semantic') else '⏭ Skipped' if not results.get('syntactic') else '❌ Execution Failed'
            
        f.write(f"| Semantic | {semantic_status} |\n")
        f.write("\n")
        
        f.write("## 3. Detailed Results\n\n")
        
        # 3.1 Readability
        f.write("### 3.1 Readability Evaluation\n\n")
        
        # Logic to find the latest raw_response file matching the pattern "raw_response_*.txt"
        readability_dir = reference_dirs["readability"]
        raw_response_files = []
        if os.path.exists(readability_dir):
            raw_response_files = [f for f in os.listdir(readability_dir) if f.startswith("raw_response_") and f.endswith(".txt")]

        readability_result = get_latest_readability_result(reference_dirs)
        
        has_raw = False
        if raw_response_files:
            # Sort to get the latest one
            latest_raw = sorted(raw_response_files)[-1]
            raw_response_path = os.path.join(readability_dir, latest_raw)
            try:
                with open(raw_response_path, 'r', encoding='utf-8') as rf:
                    raw_content = rf.read()
                f.write("#### Raw LLM Response\n")
                f.write(f"*(Source: {latest_raw})*\n\n")
                f.write("```text\n")
                f.write(raw_content)
                f.write("\n```\n\n")
                has_raw = True
            except Exception as e:
                f.write(f"*Error reading {latest_raw}: {e}*\n\n")
        elif readability_result and "raw_response" in readability_result:
             # Fallback to JSON
             f.write("#### Raw LLM Response\n\n")
             f.write("```text\n")
             f.write(str(readability_result["raw_response"]))
             f.write("\n```\n\n")
             has_raw = True

        if readability_result:
            # JSON Result
            f.write("#### Parsed JSON Result\n\n")
            f.write("```json\n")
            # Exclude raw_response to avoid duplication
            cleaned_result = {k: v for k, v in readability_result.items() if k != "raw_response"}
            f.write(json.dumps(cleaned_result, indent=2))
            f.write("\n```\n\n")
        elif not has_raw:
            f.write("*No readability results found.*\n\n")
            
        # 3.2 Syntactic
        f.write("### 3.2 Syntactic Correctness Evaluation\n\n")
        repair_trace_path = os.path.join(reference_dirs["syntactic"], "repair_trace.json")
        if os.path.exists(repair_trace_path):
            f.write("#### Repair Trace Log\n\n")
            try:
                with open(repair_trace_path, 'r', encoding='utf-8') as tf:
                    trace_content = tf.read()
                f.write("```json\n")
                f.write(trace_content)
                f.write("\n```\n\n")
            except Exception as e:
                f.write(f"*Error reading traceLog: {e}*\n\n")
        else:
            f.write("*No syntactic repair trace found.*\n\n")
            
        # 3.3 Semantic
        f.write("### 3.3 Semantic Fidelity Evaluation\n\n")
        
        # Add native recompilation note if applicable
        if dirs['arch'] == 'arm32':
            f.write("> **Note:** For ARM32 architecture, the source code was recompiled natively within the ARM32 VM to avoid GLIBC version mismatch (original binaries require GLIBC 2.34+, VM has GLIBC 2.27).\n\n")
        elif dirs['arch'] == 'x86':
            f.write("> **Note:** For x86 architecture, the source code was recompiled natively within the x86 VM to avoid GLIBC version mismatch between the host-built original binaries and the guest runtime.\n\n")
        
        semantic_report_path = os.path.join(dirs["semantic"], "result_analysis.md")
        semantic_metrics_path = os.path.join(dirs["semantic"], "result_metrics.json")
        if os.path.exists(semantic_metrics_path):
            try:
                with open(semantic_metrics_path, 'r', encoding='utf-8') as smf:
                    semantic_metrics = json.load(smf)
                f.write("#### Machine-Readable Metrics\n\n")
                f.write("```json\n")
                f.write(json.dumps(semantic_metrics, indent=2, ensure_ascii=False))
                f.write("\n```\n\n")
            except Exception as e:
                f.write(f"*Error reading semantic metrics: {e}*\n\n")
        if os.path.exists(semantic_report_path):
            try:
                with open(semantic_report_path, 'r', encoding='utf-8') as sf:
                    semantic_content = sf.read()
                f.write(semantic_content)
                f.write("\n\n")
            except Exception as e:
                f.write(f"*Error reading semantic report: {e}*\n\n")
        else:
            f.write("*No semantic analysis report found.*\n\n")
    
    print(f"Report saved: {report_path}")
    return report_path


def main():
    parser = argparse.ArgumentParser(description="BinBench Docker Pipeline")
    parser.add_argument("source_file", help="Path to original C source file")
    parser.add_argument("decompiled_file", help="Path to decompiled C file")
    parser.add_argument("--original-bin", help="Path to original binary (optional)")
    parser.add_argument("--max-iters", type=int, default=50, help="Max LLM repair iterations")
    parser.add_argument("--restart", action="store_true", help="Force restart, ignore checkpoints")
    parser.add_argument("--llm-profile", help="LLM profile to use (e.g., glm_official, qwen3.5-plus, minimax, deepseek)")
    parser.add_argument("--llm-key-alias", help="Pinned key alias to use for this process")
    parser.add_argument("--llm-key-index", type=int, default=None, help="API Key index to use (for parallel execution with different keys)")
    parser.add_argument("--results-dir", default="results", help="Base results directory (default: results)")
    parser.add_argument("--semantic-results-dir", default=None,
                        help="Maintenance-only Step 3 override for --step3-only (default: same as --results-dir)")
    parser.add_argument("--skip-readability", action="store_true",
                        help="Skip Step 1 (readability evaluation)")
    parser.add_argument("--skip-step3", action="store_true",
                        help="Skip Step 3 (semantic evaluation) - focus only on binary generation")
    parser.add_argument("--step3-only", action="store_true",
                        help="Reuse successful Step2 artifacts from --results-dir and run only Step 3")
    args = parser.parse_args()

    if args.step3_only and args.skip_step3:
        raise SystemExit("--step3-only cannot be combined with --skip-step3")
    if args.semantic_results_dir and not args.step3_only:
        raise SystemExit("--semantic-results-dir is a maintenance override and requires --step3-only")

    # Update global RESULTS_DIR based on argument
    global RESULTS_DIR
    RESULTS_DIR = resolve_results_root(args.results_dir)
    semantic_results_root = resolve_results_root(args.semantic_results_dir or args.results_dir)
    print(f"Base results directory: {RESULTS_DIR}")
    if args.step3_only:
        if semantic_results_root == RESULTS_DIR:
            print("Semantic output directory: same as base results tree")
        else:
            print(f"Semantic output directory: {semantic_results_root}")

    # Set LLM profile as environment variable so LLMClient picks it up
    if args.llm_profile:
        os.environ['LLM_PROFILE'] = args.llm_profile
        print(f"Using LLM profile: {args.llm_profile}")

    if args.llm_key_alias:
        os.environ['LLM_KEY_ALIAS'] = args.llm_key_alias
        print(f"Using LLM Key Alias: {args.llm_key_alias}")
    
    # Set LLM key index as environment variable for parallel execution
    if args.llm_key_index is not None:
        os.environ['LLM_KEY_INDEX'] = str(args.llm_key_index)
        print(f"Using LLM Key Index: {args.llm_key_index}")
    
    print_header("BinBench Docker Evaluation Pipeline")
    print(f"Timestamp: {datetime.now().isoformat()}")

    print(f"Source: {args.source_file}")
    print(f"Decompiled: {args.decompiled_file}")
    
    # Load build info
    builds = load_json(BUILD_JSON) or []
    build_info = infer_build_info_from_decompiled(args.decompiled_file, builds)
    
    if build_info:
        print(f"Build Info: {build_info.get('arch')} / {build_info.get('compiler')} / {build_info.get('opt')}")
        original_bin_path = os.path.join(PROJECT_ROOT, build_info.get("bin_path", ""))
    else:
        print("Warning: Could not infer build info from decompiled path")
        # Create minimal build_info for directory structure
        parts = args.decompiled_file.split('/')
        arch = "unknown"
        src = "unknown"
        for i, p in enumerate(parts):
            if p in ['x64', 'x86', 'arm32', 'arm64', 'mips32', 'mips64']:
                arch = p
                if i + 1 < len(parts):
                    src = parts[i + 1]
                break
        build_info = {
            '_arch': arch,
            'src': src,
            '_bin_name': os.path.basename(args.decompiled_file).replace('.c', '')
        }
        original_bin_path = args.original_bin
    
    # Create result directories
    if args.step3_only:
        base_dirs = create_result_dirs(
            build_info,
            args.decompiled_file,
            results_root=RESULTS_DIR,
            create_dirs=False,
        )
        dirs = create_result_dirs(
            build_info,
            args.decompiled_file,
            results_root=semantic_results_root,
            create_dirs=True,
            include_readability=False,
            include_syntactic=False,
            include_semantic=True,
        )
    else:
        dirs = create_result_dirs(build_info, args.decompiled_file, results_root=RESULTS_DIR)
        base_dirs = dirs
    print(f"Results will be saved to: {dirs['base']}")
    
    # Verify original binary exists
    if original_bin_path and not os.path.exists(original_bin_path):
        print(f"Warning: Original binary not found: {original_bin_path}")
        original_bin_path = None
    
    results = {
        "readability": False,
        "syntactic": False,
        "semantic": False,
        "semantic_skipped": False
    }
    
    # Check if syntactic step was already completed successfully
    syntactic_already_done, existing_recompiled_bin = check_syntactic_completed(base_dirs)

    if args.step3_only:
        if syntactic_already_done:
            print("\n✅ Reusing successful Step2 artifact from base results tree")
            print(f"   Recompiled binary: {existing_recompiled_bin}")
        else:
            print("\n❌ Step3-only mode requires an existing successful Step2 artifact")
        results["readability"] = True
        results["syntactic"] = syntactic_already_done
        recompiled_bin = existing_recompiled_bin
    elif syntactic_already_done and not args.restart:
        print("\n✅ Syntactic step already completed successfully!")
        print(f"   Recompiled binary: {existing_recompiled_bin}")
        print("   Reusing existing Step 2 artifacts (use --restart to force re-run Step 2)...")

        # Use existing results
        results["syntactic"] = True
        recompiled_bin = existing_recompiled_bin

        readability_result = get_latest_readability_result(base_dirs)
        if args.skip_readability:
            results["readability"] = True
            print("   Readability evaluation skipped by request")
        elif readability_result:
            results["readability"] = True
            print("   Readability evaluation already available; reusing existing Step 1 result")
        else:
            print("   Readability result missing; running Step 1 to complete the task tree...")
            results["readability"] = run_readability_eval(
                args.source_file,
                args.decompiled_file,
                dirs["readability"]
            )
    else:
        # Step 1: Readability (skip if --skip-readability)
        if args.skip_readability:
            print("\n⏭ Skipping Step 1: Readability Evaluation")
            results["readability"] = True
        else:
            results["readability"] = run_readability_eval(
                args.source_file,
                args.decompiled_file,
                dirs["readability"]
            )

        # Step 2: Syntactic (no timeout - let LLM client handle retries)
        syntactic_ok, recompiled_bin = run_syntactic_eval(
            args.source_file,
            args.decompiled_file,
            build_info,
            dirs["syntactic"],
            args.max_iters,
            args.restart
        )
        results["syntactic"] = syntactic_ok
    
    # Step 3: Semantic (only if Step 2 succeeded)
    if results["syntactic"] and original_bin_path and recompiled_bin:
        if args.skip_step3:
            print("\n⏭ Skipping Step 3: Semantic evaluation as requested via --skip-step3")
            results["semantic_skipped"] = True
        elif should_rerun_semantic_analysis_only(dirs["semantic"]):
            print("\n🔄 Current traces are reusable; refreshing semantic metrics/report only")
            results["semantic"] = run_semantic_analysis_only(dirs["semantic"])
        else:
            src_name = build_info.get("src", "1")
            arch = dirs.get("arch", "unknown")
            results["semantic"] = run_semantic_eval(
                original_bin_path, 
                recompiled_bin, 
                src_name,
                dirs["semantic"],
                arch=arch,
                source_path=args.source_file,
                build_info=build_info
            )
    else:
        print("\n⏭ Skipping semantic evaluation (syntactic step failed or missing binaries)")
    
    # Generate Report
    report_path = generate_report(
        args.source_file, 
        args.decompiled_file, 
        results, 
        build_info,
        dirs,
        reference_dirs=base_dirs,
        step3_only=args.step3_only,
    )
    
    print_header("Pipeline Completed")
    # Don't fail the pipeline overall exit code if semantic was intentionally skipped
    if args.step3_only:
        success = results["syntactic"] and results["semantic"]
    elif results["semantic_skipped"]:
        success = results["readability"] and results["syntactic"]
    else:
        success = all(v for k, v in results.items() if k != "semantic_skipped")
        
    print(f"Results: {results}")
    print(f"Report: {report_path}")
    
    return 0 if success else 1


if __name__ == "__main__":
    sys.exit(main())
