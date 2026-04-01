#!/usr/bin/env python3
"""
Helpers for BinBench semantic evaluation v2.
"""

from __future__ import annotations

import json
import os
import re
from functools import lru_cache
from typing import Dict, List, Optional, Tuple


TEST_ID_RE = re.compile(r'([A-Z]{2,}(?:-[A-Z0-9]+)+)')
PRINTF_TEST_ID_RE = re.compile(r'printf\("([^"]*?([A-Z]{2,}(?:-[A-Z0-9]+)+)[^"]*)"')
FUNCTION_START_RE = re.compile(
    r'^\s*(?:static\s+)?(?:inline\s+)?(?:void|int|long|short|char|float|double|bool|auto)\s+([A-Za-z_]\w*)\s*\([^;]*\)\s*\{'
)

UNSTABLE_KEYWORDS = (
    "未定义",
    "平台相关",
    "子进程",
    "fork",
    "signal",
    "pthread",
    "线程",
    "并发",
    "崩溃",
    "可能crash",
    "implementation_defined",
    "undefined_behavior",
    "期望: ~",
    "期望: 3或4或5",
    "期望: 平台相关",
)
CASE_STABILITY_CONFIG = os.path.join(os.path.dirname(__file__), "case_stability_config.json")
TARGET_FUNCTIONS_CONFIG = os.path.join(os.path.dirname(__file__), "target_functions.json")


def _read_text(path: str) -> str:
    with open(path, "r", encoding="utf-8") as f:
        return f.read()


@lru_cache(maxsize=1)
def load_case_stability_config() -> Dict[str, Dict[str, List[str]]]:
    try:
        with open(CASE_STABILITY_CONFIG, "r", encoding="utf-8") as f:
            payload = json.load(f)
    except FileNotFoundError:
        return {}
    except Exception:
        return {}

    if not isinstance(payload, dict):
        return {}

    normalized: Dict[str, Dict[str, List[str]]] = {}
    for src_name, config in payload.items():
        if not isinstance(config, dict):
            continue
        stable = config.get("stable_case_ids") or []
        unstable = config.get("unstable_case_ids") or []
        if not isinstance(stable, list) or not isinstance(unstable, list):
            continue
        normalized[str(src_name)] = {
            "stable_case_ids": [str(item) for item in stable],
            "unstable_case_ids": [str(item) for item in unstable],
        }
    return normalized


@lru_cache(maxsize=1)
def load_target_functions_config() -> Dict[str, List[str]]:
    try:
        with open(TARGET_FUNCTIONS_CONFIG, "r", encoding="utf-8") as f:
            payload = json.load(f)
    except FileNotFoundError:
        return {}
    except Exception:
        return {}

    if not isinstance(payload, dict):
        return {}

    normalized: Dict[str, List[str]] = {}
    for src_name, functions in payload.items():
        if not isinstance(functions, list):
            continue
        normalized[str(src_name)] = [str(item) for item in functions]
    return normalized


def source_name_from_path(source_path: Optional[str]) -> Optional[str]:
    if not source_path:
        return None
    stem, _ = os.path.splitext(os.path.basename(source_path))
    return stem or None


def extract_functions(source_text: str) -> Dict[str, List[str]]:
    """
    Best-effort source parser that returns function name -> body lines.
    Assumes BinBench source formatting.
    """
    lines = source_text.splitlines()
    functions: Dict[str, List[str]] = {}
    i = 0

    while i < len(lines):
        line = lines[i]
        match = FUNCTION_START_RE.match(line)
        if not match:
            i += 1
            continue

        func_name = match.group(1)
        body_lines = [line]
        brace_balance = line.count("{") - line.count("}")
        i += 1

        # Single-line function bodies close immediately and should not consume the
        # next definition.
        if brace_balance <= 0:
            functions[func_name] = body_lines
            continue

        while i < len(lines):
            body_line = lines[i]
            body_lines.append(body_line)
            brace_balance += body_line.count("{") - body_line.count("}")
            i += 1
            if brace_balance <= 0:
                break

        functions[func_name] = body_lines

    return functions


def parse_source_context(source_path: str) -> Dict[str, object]:
    """
    Extract driver functions from main() and unstable test IDs from source comments.
    """
    if not source_path or not os.path.exists(source_path):
        return {
            "drivers": [],
            "unstable_case_ids": [],
            "stable_case_ids": [],
        }

    source_text = _read_text(source_path)
    functions = extract_functions(source_text)
    main_body = functions.get("main", [])
    src_name = source_name_from_path(source_path) or ""
    target_functions = set(load_target_functions_config().get(src_name, []))

    drivers: List[str] = []
    for line in main_body:
        for call_name in re.findall(r'\b([A-Za-z_]\w*)\s*\(', line):
            if call_name == "main" or call_name in drivers:
                continue
            if call_name in functions or call_name in target_functions:
                drivers.append(call_name)

    explicit_stability = load_case_stability_config().get(src_name)
    if explicit_stability:
        stable_case_ids = explicit_stability["stable_case_ids"]
        unstable_case_ids = explicit_stability["unstable_case_ids"]
    else:
        unstable_case_ids = set()
        stable_case_ids = set()
        lines = source_text.splitlines()

        for idx, line in enumerate(lines):
            test_id_match = PRINTF_TEST_ID_RE.search(line)
            if not test_id_match:
                continue

            test_id = test_id_match.group(2)
            context_window = "\n".join(lines[max(0, idx - 2): idx + 1])
            is_unstable = any(keyword in context_window for keyword in UNSTABLE_KEYWORDS)

            if is_unstable:
                unstable_case_ids.add(test_id)
            else:
                stable_case_ids.add(test_id)

        stable_case_ids -= unstable_case_ids
        stable_case_ids = sorted(stable_case_ids)
        unstable_case_ids = sorted(unstable_case_ids)

    return {
        "drivers": drivers,
        "unstable_case_ids": unstable_case_ids,
        "stable_case_ids": stable_case_ids,
    }


def normalize_whitespace(text: str) -> str:
    return " ".join(text.replace("\u3000", " ").split())


def parse_stdout_cases(stdout_text: str) -> List[Dict[str, object]]:
    """
    Extract test lines from stdout with occurrence index per test ID.
    """
    occurrences: Dict[str, int] = {}
    cases: List[Dict[str, object]] = []

    for raw_line in stdout_text.splitlines():
        line = raw_line.strip()
        if not line:
            continue

        match = TEST_ID_RE.search(line)
        if not match:
            continue

        test_id = match.group(1)
        occurrences[test_id] = occurrences.get(test_id, 0) + 1
        cases.append(
            {
                "test_id": test_id,
                "occurrence": occurrences[test_id],
                "raw": line,
                "normalized": normalize_whitespace(line),
            }
        )

    return cases


def _normalize_scalar_for_word_bits(ivalue: int, word_bits: Optional[int]) -> int:
    if word_bits == 32:
        ivalue &= 0xFFFFFFFF
        if ivalue >= 0x80000000:
            ivalue -= 0x100000000
    elif word_bits == 64:
        ivalue &= 0xFFFFFFFFFFFFFFFF
        if ivalue >= 0x8000000000000000:
            ivalue -= 0x10000000000000000
    return ivalue


def classify_scalar(value, word_bits: Optional[int] = None) -> str:
    if value is None:
        return "NONE"

    if isinstance(value, str):
        return value

    try:
        ivalue = int(value)
    except Exception:
        return str(value)

    ivalue = _normalize_scalar_for_word_bits(ivalue, word_bits)

    if ivalue == 0:
        return "NULL"

    abs_value = abs(ivalue)
    if abs_value >= 0x100000:
        return "PTR"
    if ivalue < 0:
        return f"NEG:{ivalue}"
    return f"INT:{ivalue}"


def summarize_args(args: Dict[str, object], word_bits: Optional[int] = None) -> Tuple[str, ...]:
    if not args:
        return tuple()
    return tuple(classify_scalar(args[key], word_bits=word_bits) for key in sorted(args.keys()))


def summarize_regs(regs: Dict[str, object], word_bits: Optional[int] = None) -> Tuple[str, ...]:
    tokens: List[str] = []
    for key in sorted(regs.keys()):
        tokens.append(f"{key}:{classify_scalar(regs[key], word_bits=word_bits)}")
    return tuple(tokens)
