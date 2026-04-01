#!/usr/bin/env python3
from __future__ import annotations

import argparse
import os
import shlex
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.abspath(os.path.join(SCRIPT_DIR, ".."))
if PROJECT_ROOT not in sys.path:
    sys.path.insert(0, PROJECT_ROOT)

from scripts.pipeline_host import (
    LIMA_INSTANCE_MAP,
    PYTHON_BIN_MAP,
    build_lima_env,
    build_remote_shell_command,
    create_guest_env_script,
    remove_guest_env_script,
    run_guest_preflight,
    run_host_readability,
    stream_subprocess,
)
from scripts.run_pipeline_in_docker import (
    BUILD_JSON,
    create_result_dirs,
    find_build_info,
    infer_build_info_from_decompiled,
    load_json,
    resolve_results_root,
)


def _normalize_project_relative(path_value: str | None) -> str | None:
    if not path_value:
        return None
    if os.path.isabs(path_value):
        return os.path.relpath(path_value, PROJECT_ROOT)
    return path_value


def _has_readability_result(readability_dir: str) -> bool:
    if not os.path.isdir(readability_dir):
        return False
    return any(
        name.startswith("test_results_") and name.endswith(".json")
        for name in os.listdir(readability_dir)
    )


def _load_build_info(source_file: str, decompiled_file: str, original_bin: str | None) -> dict:
    builds = load_json(BUILD_JSON) or []
    build_info = infer_build_info_from_decompiled(decompiled_file, builds)

    normalized_bin = _normalize_project_relative(original_bin)
    if build_info is None and normalized_bin:
        build_info = find_build_info(normalized_bin, builds)
        if build_info:
            build_info = dict(build_info)
            parts = normalized_bin.split("/")
            if len(parts) >= 4:
                build_info["_arch"] = parts[1]
                build_info["src"] = parts[2]
                build_info["_bin_name"] = parts[3]

    if build_info is None:
        raise SystemExit(
            "Failed to infer build metadata from the provided files. "
            "Check source/decompiled/original-bin paths."
        )

    build_info = dict(build_info)
    build_info.setdefault("src", os.path.splitext(os.path.basename(source_file))[0])
    if normalized_bin:
        build_info["bin_path"] = normalized_bin
    return build_info


def main() -> int:
    parser = argparse.ArgumentParser(description="Run one BinBench task with host Step1 and guest Step2/Step3")
    parser.add_argument("source_file", help="Path to original source file")
    parser.add_argument("decompiled_file", help="Path to decompiled file")
    parser.add_argument("--original-bin", help="Path to original binary")
    parser.add_argument("--arch", choices=["arm64", "arm32", "x64", "x86"], help="Target architecture override")
    parser.add_argument("--max-iters", type=int, default=50)
    parser.add_argument("--restart", action="store_true")
    parser.add_argument("--skip-readability", action="store_true")
    parser.add_argument("--skip-step3", action="store_true")
    parser.add_argument("--llm-profile", default=None, help="LLM profile (default: env LLM_PROFILE or glm_official)")
    parser.add_argument("--llm-key-alias", help="Pinned key alias for this task")
    parser.add_argument("--llm-key-index", type=int, default=None, help="Pinned key index for this task")
    parser.add_argument("--results-dir", default="results", help="Base results directory")
    args = parser.parse_args()

    llm_profile = args.llm_profile or os.environ.get("LLM_PROFILE", "glm_official")
    build_info = _load_build_info(args.source_file, args.decompiled_file, args.original_bin)
    results_root = resolve_results_root(args.results_dir)
    dirs = create_result_dirs(build_info, args.decompiled_file, results_root=results_root, create_dirs=True)

    arch = args.arch or dirs["arch"]
    if args.arch and args.arch != dirs["arch"]:
        raise SystemExit(f"Provided --arch={args.arch} does not match inferred arch={dirs['arch']}")

    print(f"Task root: {dirs['base']}")
    print(f"LLM profile: {llm_profile}")

    run_guest_preflight(PROJECT_ROOT, arch, llm_profile)

    if not args.skip_readability:
        if args.restart or not _has_readability_result(dirs["readability"]):
            print("\n" + "=" * 70)
            print(" Host Step 1: Readability")
            print("=" * 70 + "\n")
            run_host_readability(
                source_path=os.path.join(PROJECT_ROOT, args.source_file),
                decompiled_path=os.path.join(PROJECT_ROOT, args.decompiled_file),
                output_dir=dirs["readability"],
                llm_profile=llm_profile,
                llm_key_alias=args.llm_key_alias,
                llm_key_index=args.llm_key_index,
                on_line=lambda line: (print(line, end=""), sys.stdout.flush()),
            )
        else:
            print("Reusing existing readability result.")

    python_bin = PYTHON_BIN_MAP.get(arch, "python3")
    instance = LIMA_INSTANCE_MAP.get(arch, "binbench")
    remote_cmd = [
        python_bin,
        "-u",
        "scripts/run_pipeline_in_docker.py",
        args.source_file,
        args.decompiled_file,
        "--max-iters",
        str(args.max_iters),
        "--llm-profile",
        llm_profile,
        "--results-dir",
        args.results_dir,
        "--skip-readability",
    ]
    if args.original_bin:
        remote_cmd.extend(["--original-bin", args.original_bin])
    if args.restart:
        remote_cmd.append("--restart")
    if args.skip_step3:
        remote_cmd.append("--skip-step3")
    if args.llm_key_alias:
        remote_cmd.extend(["--llm-key-alias", args.llm_key_alias])
    if args.llm_key_index is not None:
        remote_cmd.extend(["--llm-key-index", str(args.llm_key_index)])

    guest_env_script = create_guest_env_script(PROJECT_ROOT)
    try:
        cmd = [
            "limactl",
            "shell",
            instance,
            "/bin/sh",
            "-lc",
            build_remote_shell_command(remote_cmd, guest_env_script),
        ]
        print("\n" + "=" * 70)
        print(
            f" Guest Step 2/3: limactl shell {instance} /bin/sh -lc "
            f"\"[forward host BINBENCH_*/LLM_* env] {' '.join(shlex.quote(part) for part in remote_cmd)}\""
        )
        print("=" * 70 + "\n")

        result = stream_subprocess(
            cmd,
            cwd=PROJECT_ROOT,
            env=build_lima_env(),
            on_line=lambda line: (print(line, end=""), sys.stdout.flush()),
        )
        return result.returncode
    finally:
        remove_guest_env_script(guest_env_script)


if __name__ == "__main__":
    raise SystemExit(main())
