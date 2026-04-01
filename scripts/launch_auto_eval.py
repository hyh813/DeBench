#!/usr/bin/env python3
"""
Interactive launcher for auto_eval.py with named key inventory + lease tracking.
"""

import argparse
import json
import os
import shlex
import signal
import subprocess
import sys
import tempfile
from datetime import datetime
from pathlib import Path
from typing import Dict, List, Optional


SCRIPT_DIR = Path(__file__).resolve().parent
PROJECT_ROOT = SCRIPT_DIR.parent
sys.path.insert(0, str(PROJECT_ROOT))

from config.config_loader import (  # noqa: E402
    get_profile,
    get_profile_key_inventory,
    load_config,
)


LEASE_DIR = Path(tempfile.gettempdir()) / "bindebench_llm_key_leases"


def get_lease_dir() -> Path:
    LEASE_DIR.mkdir(parents=True, exist_ok=True)
    return LEASE_DIR


def mask_key(api_key: str) -> str:
    if len(api_key) <= 12:
        return api_key
    return f"{api_key[:10]}...{api_key[-6:]}"


def process_exists(pid: int) -> bool:
    try:
        os.kill(pid, 0)
        return True
    except ProcessLookupError:
        return False
    except PermissionError:
        return True


def extract_cli_value(args: List[str], flag: str, default: Optional[str] = None) -> Optional[str]:
    for idx, arg in enumerate(args):
        if arg == flag and idx + 1 < len(args):
            return args[idx + 1]
        if arg.startswith(flag + "="):
            return arg.split("=", 1)[1]
    return default


def cleanup_stale_leases(lease_dir: Optional[Path] = None) -> List[Dict]:
    active = []
    root = lease_dir or get_lease_dir()

    for lease_file in sorted(root.glob("*.json")):
        try:
            with open(lease_file, "r", encoding="utf-8") as f:
                lease = json.load(f)
        except Exception:
            lease_file.unlink(missing_ok=True)
            continue

        pid = lease.get("pid")
        if not isinstance(pid, int) or not process_exists(pid):
            lease_file.unlink(missing_ok=True)
            continue

        lease["lease_file"] = str(lease_file)
        active.append(lease)

    return active


def group_leases_by_alias(leases: List[Dict]) -> Dict[str, List[Dict]]:
    grouped: Dict[str, List[Dict]] = {}
    for lease in leases:
        grouped.setdefault(lease.get("key_alias", ""), []).append(lease)
    return grouped


def build_key_rows(
    profile_name: str,
    lease_dir: Optional[Path] = None,
    config: Optional[Dict] = None,
    inventory: Optional[Dict] = None
) -> List[Dict]:
    profile = get_profile(profile_name, config=config)
    candidate_keys = get_profile_key_inventory(profile_name, config=config, inventory=inventory)
    leases = cleanup_stale_leases(lease_dir=lease_dir)
    leases_by_alias = group_leases_by_alias(leases)
    preferred = set(profile.get("preferred_key_aliases", []))

    rows = []
    for idx, record in enumerate(candidate_keys, start=1):
        alias = record["alias"]
        rows.append({
            "index": idx,
            "alias": alias,
            "provider": record.get("provider", ""),
            "label": record.get("label", ""),
            "note": record.get("note", ""),
            "key_mask": mask_key(record.get("api_key", "")),
            "leases": leases_by_alias.get(alias, []),
            "lease_count": len(leases_by_alias.get(alias, [])),
            "preferred": alias in preferred,
        })
    return rows


def render_key_rows(rows: List[Dict], profile_name: str, provider: str):
    print(f"\n[Launcher] Profile: {profile_name}")
    print(f"[Launcher] Provider: {provider}")
    print("[Launcher] Compatible keys:\n")

    for row in rows:
        preferred_mark = "*" if row["preferred"] else " "
        print(
            f"  [{row['index']}] {preferred_mark} {row['alias']:<18} "
            f"{row['label']:<24} {row['key_mask']:<22} in_use={row['lease_count']}"
        )
        if row["note"]:
            print(f"      note: {row['note']}")
        for lease in row["leases"]:
            print(
                f"      pid={lease.get('pid')} profile={lease.get('llm_profile')} "
                f"results={lease.get('results_dir')} cmd={lease.get('command_summary')}"
            )
    print("\n  * = profile 的默认优先 key")


def choose_key_interactively(rows: List[Dict]) -> Dict:
    alias_map = {row["alias"]: row for row in rows}
    index_map = {str(row["index"]): row for row in rows}

    while True:
        choice = input("\nSelect key alias or number (q to abort): ").strip()
        if choice.lower() in {"q", "quit", "exit"}:
            raise KeyboardInterrupt("Launcher aborted by user")
        if choice in index_map:
            return index_map[choice]
        if choice in alias_map:
            return alias_map[choice]
        print("Invalid selection. Use a number or alias from the list above.")


def create_lease(
    key_alias: str,
    llm_profile: str,
    results_dir: str,
    command: List[str],
    pid: int,
    lease_dir: Optional[Path] = None
) -> Path:
    root = lease_dir or get_lease_dir()
    lease_path = root / f"{pid}.json"
    payload = {
        "pid": pid,
        "key_alias": key_alias,
        "llm_profile": llm_profile,
        "results_dir": results_dir,
        "started_at": datetime.now().isoformat(),
        "command": shlex.join(command),
        "command_summary": " ".join(command[-8:]),
    }
    with open(lease_path, "w", encoding="utf-8") as f:
        json.dump(payload, f, indent=2, ensure_ascii=False)
    return lease_path


def resolve_profile_name(explicit_profile: Optional[str]) -> str:
    if explicit_profile:
        return explicit_profile
    env_profile = os.environ.get("LLM_PROFILE")
    if env_profile:
        return env_profile
    return load_config().get("active_profile", "glm")


def launch_auto_eval(profile_name: str, key_alias: str, auto_eval_args: List[str]) -> int:
    command = [sys.executable, str(PROJECT_ROOT / "scripts" / "auto_eval.py"), *auto_eval_args]
    env = os.environ.copy()
    env["LLM_PROFILE"] = profile_name
    env["LLM_KEY_ALIAS"] = key_alias
    env.pop("LLM_KEY_INDEX", None)

    results_dir = extract_cli_value(auto_eval_args, "--results-dir", "results")

    process = subprocess.Popen(
        command,
        cwd=PROJECT_ROOT,
        env=env,
    )
    lease_file = create_lease(
        key_alias=key_alias,
        llm_profile=profile_name,
        results_dir=results_dir,
        command=command,
        pid=process.pid,
    )

    def _forward_signal(signum, _frame):
        if process.poll() is None:
            process.send_signal(signum)

    original_sigint = signal.getsignal(signal.SIGINT)
    original_sigterm = signal.getsignal(signal.SIGTERM)
    signal.signal(signal.SIGINT, _forward_signal)
    signal.signal(signal.SIGTERM, _forward_signal)

    try:
        return process.wait()
    finally:
        signal.signal(signal.SIGINT, original_sigint)
        signal.signal(signal.SIGTERM, original_sigterm)
        lease_file.unlink(missing_ok=True)


def main():
    parser = argparse.ArgumentParser(description="Interactive launcher for auto_eval.py")
    parser.add_argument("--llm-profile", default=None, help="LLM profile to launch")
    parser.add_argument("--key-alias", default=None, help="Use a specific key alias without interactive selection")
    parser.add_argument("--list-only", action="store_true", help="Show compatible keys and current leases, then exit")
    parser.add_argument("--yes", action="store_true", help="Skip final launch confirmation prompt")

    args, auto_eval_args = parser.parse_known_args()
    profile_name = resolve_profile_name(args.llm_profile)
    profile = get_profile(profile_name)
    rows = build_key_rows(profile_name)

    if not rows:
        raise SystemExit(f"No compatible keys found for profile '{profile_name}'")

    render_key_rows(rows, profile_name, profile.get("key_provider", "unknown"))

    if args.list_only:
        return

    if args.key_alias:
        selected = next((row for row in rows if row["alias"] == args.key_alias), None)
        if selected is None:
            aliases = ", ".join(row["alias"] for row in rows)
            raise SystemExit(f"Unknown or incompatible key alias '{args.key_alias}'. Choices: {aliases}")
    else:
        selected = choose_key_interactively(rows)

    command_preview = [sys.executable, "scripts/auto_eval.py", *auto_eval_args]
    print(f"\n[Launcher] Selected key: {selected['alias']} ({selected['label']})")
    print(f"[Launcher] Command: {shlex.join(command_preview)}")
    if not args.yes:
        confirm = input("Press Enter to launch, or type 'q' to abort: ").strip().lower()
        if confirm in {"q", "quit", "exit"}:
            raise SystemExit(0)

    raise SystemExit(launch_auto_eval(profile_name, selected["alias"], auto_eval_args))


if __name__ == "__main__":
    main()
