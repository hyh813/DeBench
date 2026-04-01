#!/usr/bin/env python3
"""LLM-as-judge readability evaluation."""

import os
import sys
import json
import time
from datetime import datetime

# Add the Step2 package path
sys.path.insert(0, os.path.join(os.path.dirname(__file__), '../syntactic'))
from utils.llm_client import LLMClient

# ============ Configuration ============
PROJECT_ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "../../"))
PROMPT_FILE = f"{PROJECT_ROOT}/prompt/CodeReadability"
SOURCE_FILE = f"{PROJECT_ROOT}/src/1.c"
# Support dynamic output directory via environment variable
RESULTS_DIR = os.environ.get("BINBENCH_READABILITY_OUTPUT") or f"{PROJECT_ROOT}/results/readability"

# Global LLM client (lazy initialization)
_llm_client = None

def get_llm_client():
    """Get the singleton LLM client."""
    global _llm_client
    if _llm_client is None:
        _llm_client = LLMClient()
    return _llm_client

# ============ Core helpers ============

def load_prompts():
    """Load the system prompt and user template."""
    with open(PROMPT_FILE, 'r', encoding='utf-8') as f:
        content = f.read()

    parts = content.split("## USER PROMPT TEMPLATE")
    system_prompt = parts[0].replace("## SYSTEM PROMPT", "").strip()
    user_template = parts[1].strip()

    return system_prompt, user_template

def build_user_prompt(source_code, decompiled_code):
    """Build the user prompt by filling only the code-related placeholders."""
    _, user_template = load_prompts()

    # Extract the first function name
    import re
    func_match = re.search(r'^\s*(?:static\s+)?(?:\w+\s+)+(\w+)\s*\(', source_code, re.MULTILINE)
    func_name = func_match.group(1) if func_match else "test_function"

    # Count lines of code
    source_loc = len(source_code.split('\n'))
    decompiled_loc = len(decompiled_code.split('\n'))

    # Fill the main placeholders
    prompt = user_template
    replacements = {
        "{original_function_name}": func_name,
        "{source_loc}": str(source_loc),
        "{compiler}": "gcc",
        "{version}": "unknown",
        "{optimization_level}": "O0",
        "{architecture}": "arm64",
        "{compiler_flags}": "-O0 -g",
        "{original_source_code}": source_code,
        "{decompiler_name}": "Ghidra",
        "{version}": "12.0_PUBLIC",
        "{time_in_seconds}": "unknown",
        "{decompiled_loc}": str(decompiled_loc),
        "{compiles_yes_no}": "Yes",
        "{decompiled_code}": decompiled_code
    }

    for placeholder, value in replacements.items():
        prompt = prompt.replace(placeholder, str(value))

    return prompt

def call_llm(system_prompt, user_prompt):
    """Call the LLM API through the shared `LLMClient` wrapper."""
    client = get_llm_client()

    messages = [
        {"role": "system", "content": system_prompt},
        {"role": "user", "content": user_prompt}
    ]

    try:
        content, reasoning, tool_calls, usage = client.chat(messages)
        return content, usage
    except Exception as e:
        print(f"LLM call failed: {e}")
        raise

def extract_scores(response):
    """Extract scores from the response while handling multiple LLM output formats."""
    import re

    scores = {}

    # Support multiple response formats because LLM outputs are not fully consistent

    # Format 1: score appears on the same line
    pattern1 = r'\*{2}(\d+)\.\s+([^:]+?):\*{2}\s+Score:\s*(\d+(?:\.\d+)?)\s*/10'

    # Format 2: score appears on the next line
    pattern2 = r'\*{2}(\d+)\.\s+(.+?)\*{2}\s*\nScore:\s*(\d+(?:\.\d+)?)\s*/10'

    # Format 3: markdown heading followed by a bold score on the next line
    pattern3 = r'#{2,4}\s*(\d+)\.\s+[^*]+?\s*\n\*{2}Score:\s*(\d+(?:\.\d+)?)\s*/10\*{2}'

    # Try patterns in priority order
    patterns = [
        (pattern1, "format1"),
        (pattern2, "format2"),
        (pattern3, "format3")
    ]

    for pattern, fmt_name in patterns:
        flags = re.MULTILINE | re.DOTALL if fmt_name in ["format2", "format3"] else re.MULTILINE

        for match in re.finditer(pattern, response, flags):
            try:
                dim_num = int(match.group(1))

                # Skip dimensions that have already been extracted
                if dim_num in scores:
                    continue

                # Extract the dimension label and score according to the matched format
                if fmt_name == "format3":
                    # Format 3 does not include an explicit dimension label
                    dim_name = f"Dimension {dim_num}"
                    score = float(match.group(2))
                else:
                    dim_name = match.group(2).strip()
                    score = float(match.group(3))

                scores[dim_num] = {
                    "id": dim_num,
                    "name": dim_name,
                    "score": score
                }
            except (ValueError, IndexError) as e:
                # Ignore malformed matches
                continue

    # Extract the overall score with flexible patterns
    overall_patterns = [
        r'### Overall Readability Score:\s*\*{2}(\d+(?:\.\d+)?)\s*/10\*{2}',  # ### Overall: **X/10**
        r'- \*{2}Overall Readability Score:\*{2}\s*(\d+(?:\.\d+)?)\s*/10',   # - **Overall:** X/10
        r'\*{2}Overall Readability Score:\*{2}\s*(\d+(?:\.\d+)?)\s*/10',      # **Overall:** X/10
        r'Overall Readability Score[^:]*:\s*\*{0,2}(\d+(?:\.\d+)?)\s*/10',   # Flexible fallback
    ]

    overall_score = 0.0
    for pattern in overall_patterns:
        match = re.search(pattern, response)
        if match:
            overall_score = float(match.group(1))
            break

    return scores, overall_score


# Mapping from levels to dimensions
LEVEL_DIMENSIONS = {
    "L1_lexical_clarity": [1, 2, 3, 4],
    "L2_structural_intelligibility": [5, 6, 7, 8],
    "L3_type_system_fidelity": [9, 10, 11],
    "L4_semantic_transparency": [12, 13, 14, 15],
    "L5_contextual_coherence": [16, 17, 18]
}

# Dimension name mapping
DIMENSION_NAMES = {
    1: "variable_naming_quality",
    2: "function_naming_quality",
    3: "literal_clarity",
    4: "noise_reduction",
    5: "control_flow_naturalness",
    6: "function_decomposition",
    7: "code_linearization",
    8: "redundancy_elimination",
    9: "type_precision",
    10: "composite_type_recovery",
    11: "type_safety",
    12: "comment_quality",
    13: "idiom_recognition",
    14: "anomaly_indication",
    15: "assertion_contract_recovery",
    16: "cross_reference_clarity",
    17: "module_organization",
    18: "build_system_compatibility"
}


def extract_scores_enhanced(response):
    """
    Enhanced score extraction that returns a structured payload.

    Returns:
        {
            "overall_score": float,
            "levels": {
                "L1_lexical_clarity": float,
                "L2_structural_intelligibility": float,
                "L3_type_system_fidelity": float,
                "L4_semantic_transparency": float,
                "L5_contextual_coherence": float
            },
            "dimensions": {
                "1_variable_naming_quality": float,
                ... (18 dimensions)
            }
        }
    """
    # Reuse the basic score extractor
    dimension_scores, overall_score = extract_scores(response)

    # Build the dimension score dictionary
    dimensions = {}
    for dim_num in range(1, 19):
        dim_key = f"{dim_num}_{DIMENSION_NAMES.get(dim_num, f'dimension_{dim_num}')}"
        if dim_num in dimension_scores:
            dimensions[dim_key] = dimension_scores[dim_num]["score"]
        else:
            dimensions[dim_key] = None  # score not found

    # Compute level scores as means over the associated dimensions
    levels = {}
    for level_name, dim_nums in LEVEL_DIMENSIONS.items():
        scores = []
        for dim_num in dim_nums:
            if dim_num in dimension_scores:
                scores.append(dimension_scores[dim_num]["score"])
        if scores:
            levels[level_name] = round(sum(scores) / len(scores), 2)
        else:
            levels[level_name] = None

    return {
        "overall_score": overall_score,
        "levels": levels,
        "dimensions": dimensions
    }


def evaluate_readability(source_path: str, decompiled_path: str, eval_id: str, output_dir: str) -> dict:
    """
    Evaluate a single source/decompiled pair and return the structured result.

    Args:
        source_path: path to the source file
        decompiled_path: path to the decompiled file
        eval_id: evaluation identifier
        output_dir: output directory

    Returns:
        {
            "eval_id": str,
            "overall_score": float,
            "levels": dict,
            "dimensions": dict,
            "tokens": dict,
            "time_cost_seconds": float
        }
    """
    print(f"\n[{eval_id}] Evaluating...")

    # Read input files
    with open(source_path, 'r', encoding='utf-8') as f:
        source_code = f.read()
    with open(decompiled_path, 'r', encoding='utf-8') as f:
        decompiled_code = f.read()

    source_lines = len(source_code.split('\n'))
    decompiled_lines = len(decompiled_code.split('\n'))
    print(f"  Source LOC: {source_lines}")
    print(f"  Decompiled LOC: {decompiled_lines}")

    # Build prompts
    system_prompt, _ = load_prompts()
    user_prompt = build_user_prompt(source_code, decompiled_code)

    # Call the LLM
    client = get_llm_client()
    print(f"  Calling LLM ({client.model})...")

    start_time = time.time()
    response_content, token_usage = call_llm(system_prompt, user_prompt)
    end_time = time.time()

    time_cost = end_time - start_time

    # Extract the enhanced structured scores
    scores_data = extract_scores_enhanced(response_content)

    # Ensure the output directory exists
    os.makedirs(output_dir, exist_ok=True)

    # Save the raw response for debugging
    debug_file = os.path.join(output_dir, f"raw_response_{eval_id}.txt")
    with open(debug_file, 'w', encoding='utf-8') as f:
        f.write(response_content)

    print(f"  Overall score: {scores_data['overall_score']}/10")
    print(f"  Time: {time_cost:.2f}s")
    print(f"  Token usage: {token_usage['total_tokens']} (Prompt: {token_usage['prompt_tokens']}, Completion: {token_usage['completion_tokens']})")
    print(f"  Raw response saved to: {debug_file}")

    return {
        "eval_id": eval_id,
        "overall_score": scores_data["overall_score"],
        "levels": scores_data["levels"],
        "dimensions": scores_data["dimensions"],
        "tokens": {
            "prompt": token_usage["prompt_tokens"],
            "completion": token_usage["completion_tokens"],
            "total": token_usage["total_tokens"]
        },
        "time_cost_seconds": round(time_cost, 2)
    }

def evaluate_pair(source_path, decompiled_path, eval_id):
    """Evaluate a single source/decompiled pair."""
    print(f"\n[{eval_id}] Evaluating...")

    # Read input files
    with open(source_path, 'r', encoding='utf-8') as f:
        source_code = f.read()
    with open(decompiled_path, 'r', encoding='utf-8') as f:
        decompiled_code = f.read()

    source_lines = len(source_code.split('\n'))
    decompiled_lines = len(decompiled_code.split('\n'))
    print(f"  Source LOC: {source_lines}")
    print(f"  Decompiled LOC: {decompiled_lines}")

    # Build prompts
    system_prompt, _ = load_prompts()
    user_prompt = build_user_prompt(source_code, decompiled_code)

    # Call the LLM
    client = get_llm_client()
    print(f"  Calling LLM ({client.model})...")

    start_time = time.time()
    response_content, token_usage = call_llm(system_prompt, user_prompt)
    end_time = time.time()

    time_cost = end_time - start_time

    # Extract scores
    dimension_scores, overall_score = extract_scores(response_content)

    # Save the raw response for debugging
    debug_file = f"{RESULTS_DIR}/raw_response_{eval_id}_{datetime.now().strftime('%H%M%S')}.txt"
    with open(debug_file, 'w', encoding='utf-8') as f:
        f.write(response_content)

    print(f"  Overall score: {overall_score}/10")
    print(f"  Extracted {len(dimension_scores)}/18 dimension scores")
    print(f"  Time: {time_cost:.2f}s")
    print(f"  Token usage: {token_usage['total_tokens']} (Prompt: {token_usage['prompt_tokens']}, Completion: {token_usage['completion_tokens']})")
    print(f"  Raw response saved to: {debug_file}")

    return {
        "eval_id": eval_id,
        "source_file": source_path,
        "decompiled_file": decompiled_path,
        "decompiled_name": os.path.basename(decompiled_path),
        "overall_score": overall_score,
        "dimension_count": len(dimension_scores),
        "timestamp": datetime.now().isoformat(),
        "model": client.model,
        "time_cost_seconds": time_cost,
        "token_usage": token_usage
    }

import argparse

def run_test():
    """Run the built-in evaluation mode."""
    parser = argparse.ArgumentParser(description="Readability Evaluation")
    parser.add_argument("source_file", nargs="?", help="Path to source C file")
    parser.add_argument("decompiled_file", nargs="?", help="Path to decompiled C file")
    args = parser.parse_args()

    # Initialize the LLM client
    client = get_llm_client()

    print("="*80)
    print("Readability Evaluation")
    print("="*80)
    print(f"Model: {client.model}")

    if args.source_file and args.decompiled_file:
        # Single pair evaluation mode: emit the canonical per-task payload used by the main pipeline.
        source_file = args.source_file
        decompiled_file = args.decompiled_file
        print(f"Source: {source_file}")
        print(f"Decompiled: {decompiled_file}")

        eval_id = os.path.splitext(os.path.basename(decompiled_file))[0]
        results = evaluate_readability(source_file, decompiled_file, eval_id, RESULTS_DIR)
    else:
        # Default test mode (legacy)
        print(f"Source: {SOURCE_FILE}")
        print()
    
        # Test file paths
        # Use arm64 files to match the current repository layout
        o0_debug = f"{PROJECT_ROOT}/decompiled/ghidra_out/arm64/1/1_gcc_O0_g.c"
        o2_debug = f"{PROJECT_ROOT}/decompiled/ghidra_out/arm64/1/1_gcc_O2_g.c"
        o0_nodebug = f"{PROJECT_ROOT}/decompiled/ghidra_out/arm64/1/1_gcc_O0_no_g.c"
    
        # Control group 1: O0 vs O2
        print("-"*80)
        print("Control Group 1: O0 vs O2 (Debug)")
        print("-"*80)
    
        result1 = evaluate_pair(SOURCE_FILE, o0_debug, "O0_debug")
        result2 = evaluate_pair(SOURCE_FILE, o2_debug, "O2_debug")
    
        # Control group 2: Debug vs Non-debug
        print("\n" + "-"*80)
        print("Control Group 2: Debug vs Non-Debug (O0)")
        print("-"*80)
    
        result3 = evaluate_pair(SOURCE_FILE, o0_nodebug, "O0_nondebug")
    
        # Summarize results
        results = {
            "timestamp": datetime.now().isoformat(),
            "model": client.model,
            "control_groups": [
                {
                    "name": "O0_vs_O2_debug",
                    "type": "optimization",
                    "results": [result1, result2],
                    "expected": "O0_debug >= O2_debug",
                    "validation": result1["overall_score"] >= result2["overall_score"]
                },
                {
                    "name": "O0_debug_vs_nodebug",
                    "type": "debug_symbols",
                    "results": [result1, result3],
                    "expected": "O0_debug >= O0_nondebug",
                    "validation": result1["overall_score"] >= result3["overall_score"]
                }
            ]
        }

    # Persist results
    os.makedirs(RESULTS_DIR, exist_ok=True)
    timestamp = datetime.now().strftime('%Y%m%d_%H%M%S')
    result_file = f"{RESULTS_DIR}/test_results_{timestamp}.json"

    with open(result_file, 'w', encoding='utf-8') as f:
        json.dump(results, f, indent=2, ensure_ascii=False)

    # Print summary
    print("\n" + "="*80)
    print("Summary")
    print("="*80)

    if args.source_file and args.decompiled_file:
        print(f'  {results["eval_id"]}: {results["overall_score"]}/10')
    else:
        for group in results["control_groups"]:
            print(f'\n{group["name"]} ({group.get("type", "unknown")}):')
            for r in group["results"]:
                print(f'  {r["decompiled_name"]}: {r["overall_score"]}/10')
            if "expected" in group:
                print(f'  Expected: {group["expected"]}')
                print(f'  Validation: {"✓ pass" if group["validation"] else "✗ fail"}')

    print(f"\nResults saved to: {result_file}")
    print("="*80)

    return results

if __name__ == "__main__":
    try:
        run_test()
        print("\n✓ Evaluation finished")
        sys.exit(0)
    except Exception as e:
        print(f"\n✗ Error: {e}")
        import traceback
        traceback.print_exc()
        sys.exit(1)
