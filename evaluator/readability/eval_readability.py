#!/usr/bin/env python3
"""LLM-as-judge可读性评估测试"""

import os
import sys
import json
import time
from datetime import datetime

# 添加项目路径
sys.path.insert(0, os.path.join(os.path.dirname(__file__), '../syntactic'))
from utils.llm_client import LLMClient

# ============ 配置 ============
PROJECT_ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "../../"))
PROMPT_FILE = f"{PROJECT_ROOT}/prompt/CodeReadability"
SOURCE_FILE = f"{PROJECT_ROOT}/src/1.c"
# Support dynamic output directory via environment variable
RESULTS_DIR = os.environ.get("BINBENCH_READABILITY_OUTPUT") or f"{PROJECT_ROOT}/results/readability"

# 全局 LLM 客户端（延迟初始化）
_llm_client = None

def get_llm_client():
    """获取 LLM 客户端（单例）"""
    global _llm_client
    if _llm_client is None:
        _llm_client = LLMClient()
    return _llm_client

# ============ 核心函数 ============

def load_prompts():
    """加载系统提示词和用户模板"""
    with open(PROMPT_FILE, 'r', encoding='utf-8') as f:
        content = f.read()

    parts = content.split("## USER PROMPT TEMPLATE")
    system_prompt = parts[0].replace("## SYSTEM PROMPT", "").strip()
    user_template = parts[1].strip()

    return system_prompt, user_template

def build_user_prompt(source_code, decompiled_code):
    """构建用户提示词（简化版：只填充代码部分）"""
    _, user_template = load_prompts()

    # 提取第一个函数名
    import re
    func_match = re.search(r'^\s*(?:static\s+)?(?:\w+\s+)+(\w+)\s*\(', source_code, re.MULTILINE)
    func_name = func_match.group(1) if func_match else "test_function"

    # 计算行数
    source_loc = len(source_code.split('\n'))
    decompiled_loc = len(decompiled_code.split('\n'))

    # 简单替换主要占位符
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
    """调用LLM API（使用统一 LLMClient）"""
    client = get_llm_client()

    messages = [
        {"role": "system", "content": system_prompt},
        {"role": "user", "content": user_prompt}
    ]

    try:
        content, reasoning, tool_calls, usage = client.chat(messages)
        return content, usage
    except Exception as e:
        print(f"LLM调用失败: {e}")
        raise

def extract_scores(response):
    """从响应中提取分数（处理多种LLM输出格式）"""
    import re

    scores = {}

    # 定义多种格式模式，LLM响应格式非常不一致

    # 格式1: "**1. Variable Naming Quality:** Score: 7/10" (分数在同一行)
    pattern1 = r'\*{2}(\d+)\.\s+([^:]+?):\*{2}\s+Score:\s*(\d+(?:\.\d+)?)\s*/10'

    # 格式2: "**1. Variable Naming Quality (10% weight)** 换行 Score: 7/10" (分数在下一行)
    pattern2 = r'\*{2}(\d+)\.\s+(.+?)\*{2}\s*\nScore:\s*(\d+(?:\.\d+)?)\s*/10'

    # 格式3: "#### 1. Variable Naming Quality (10% weight) 换行 **Score: 4/10**"
    pattern3 = r'#{2,4}\s*(\d+)\.\s+[^*]+?\s*\n\*{2}Score:\s*(\d+(?:\.\d+)?)\s*/10\*{2}'

    # 按优先级尝试各种格式
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

                # 如果已经提取过这个维度，跳过
                if dim_num in scores:
                    continue

                # 根据格式提取名称和分数
                if fmt_name == "format3":
                    # 格式3没有名称字段，使用通用名称
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
                # 忽略解析错误的匹配
                continue

    # 提取总分 - 支持多种格式
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


# Level 与维度的映射关系
LEVEL_DIMENSIONS = {
    "L1_lexical_clarity": [1, 2, 3, 4],
    "L2_structural_intelligibility": [5, 6, 7, 8],
    "L3_type_system_fidelity": [9, 10, 11],
    "L4_semantic_transparency": [12, 13, 14, 15],
    "L5_contextual_coherence": [16, 17, 18]
}

# 维度名称映射
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
    增强版分数提取，返回完整结构化数据

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
                ... (18 个维度)
            }
        }
    """
    # 使用原有的分数提取函数
    dimension_scores, overall_score = extract_scores(response)

    # 构建维度分数字典
    dimensions = {}
    for dim_num in range(1, 19):
        dim_key = f"{dim_num}_{DIMENSION_NAMES.get(dim_num, f'dimension_{dim_num}')}"
        if dim_num in dimension_scores:
            dimensions[dim_key] = dimension_scores[dim_num]["score"]
        else:
            dimensions[dim_key] = None  # 未找到分数

    # 计算 Level 分数（各维度平均值）
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
    评估单个文件对并返回完整结果

    Args:
        source_path: 源码文件路径
        decompiled_path: 反编译文件路径
        eval_id: 评估 ID
        output_dir: 输出目录

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
    print(f"\n[{eval_id}] 评估中...")

    # 读取文件
    with open(source_path, 'r', encoding='utf-8') as f:
        source_code = f.read()
    with open(decompiled_path, 'r', encoding='utf-8') as f:
        decompiled_code = f.read()

    source_lines = len(source_code.split('\n'))
    decompiled_lines = len(decompiled_code.split('\n'))
    print(f"  源码行数: {source_lines}")
    print(f"  反编译行数: {decompiled_lines}")

    # 构建提示词
    system_prompt, _ = load_prompts()
    user_prompt = build_user_prompt(source_code, decompiled_code)

    # 调用LLM
    client = get_llm_client()
    print(f"  调用LLM ({client.model})...")

    start_time = time.time()
    response_content, token_usage = call_llm(system_prompt, user_prompt)
    end_time = time.time()

    time_cost = end_time - start_time

    # 使用增强版分数提取
    scores_data = extract_scores_enhanced(response_content)

    # 确保输出目录存在
    os.makedirs(output_dir, exist_ok=True)

    # 保存原始响应用于调试
    debug_file = os.path.join(output_dir, f"raw_response_{eval_id}.txt")
    with open(debug_file, 'w', encoding='utf-8') as f:
        f.write(response_content)

    print(f"  总分: {scores_data['overall_score']}/10")
    print(f"  耗时: {time_cost:.2f}s")
    print(f"  Token使用: {token_usage['total_tokens']} (Prompt: {token_usage['prompt_tokens']}, Completion: {token_usage['completion_tokens']})")
    print(f"  原始响应已保存: {debug_file}")

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
    """评估单个源码/反编译对"""
    print(f"\n[{eval_id}] 评估中...")

    # 读取文件
    with open(source_path, 'r', encoding='utf-8') as f:
        source_code = f.read()
    with open(decompiled_path, 'r', encoding='utf-8') as f:
        decompiled_code = f.read()

    source_lines = len(source_code.split('\n'))
    decompiled_lines = len(decompiled_code.split('\n'))
    print(f"  源码行数: {source_lines}")
    print(f"  反编译行数: {decompiled_lines}")

    # 构建提示词
    system_prompt, _ = load_prompts()
    user_prompt = build_user_prompt(source_code, decompiled_code)

    # 调用LLM
    client = get_llm_client()
    print(f"  调用LLM ({client.model})...")

    start_time = time.time()
    response_content, token_usage = call_llm(system_prompt, user_prompt)
    end_time = time.time()

    time_cost = end_time - start_time

    # 提取分数
    dimension_scores, overall_score = extract_scores(response_content)

    # 保存原始响应用于调试
    debug_file = f"{RESULTS_DIR}/raw_response_{eval_id}_{datetime.now().strftime('%H%M%S')}.txt"
    with open(debug_file, 'w', encoding='utf-8') as f:
        f.write(response_content)

    print(f"  总分: {overall_score}/10")
    print(f"  提取到 {len(dimension_scores)}/18 个维度分数")
    print(f"  耗时: {time_cost:.2f}s")
    print(f"  Token使用: {token_usage['total_tokens']} (Prompt: {token_usage['prompt_tokens']}, Completion: {token_usage['completion_tokens']})")
    print(f"  原始响应已保存: {debug_file}")

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
    """运行完整的测试"""
    parser = argparse.ArgumentParser(description="Readability Evaluation")
    parser.add_argument("source_file", nargs="?", help="Path to source C file")
    parser.add_argument("decompiled_file", nargs="?", help="Path to decompiled C file")
    args = parser.parse_args()

    # 获取 LLM 客户端
    client = get_llm_client()

    print("="*80)
    print("代码可读性评估测试")
    print("="*80)
    print(f"模型: {client.model}")

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
        print(f"源码: {SOURCE_FILE}")
        print()
    
        # 测试文件路径
        # 使用 arm64 架构的文件 (根据现有文件结构)
        o0_debug = f"{PROJECT_ROOT}/decompiled/ghidra_out/arm64/1/1_gcc_O0_g.c"
        o2_debug = f"{PROJECT_ROOT}/decompiled/ghidra_out/arm64/1/1_gcc_O2_g.c"
        o0_nodebug = f"{PROJECT_ROOT}/decompiled/ghidra_out/arm64/1/1_gcc_O0_no_g.c"
    
        # 对照组1: O0 vs O2 (优化对比)
        print("-"*80)
        print("对照组1: O0 vs O2 (Debug)")
        print("-"*80)
    
        result1 = evaluate_pair(SOURCE_FILE, o0_debug, "O0_debug")
        result2 = evaluate_pair(SOURCE_FILE, o2_debug, "O2_debug")
    
        # 对照组2: Debug vs Non-debug (符号对比)
        print("\n" + "-"*80)
        print("对照组2: Debug vs Non-Debug (O0)")
        print("-"*80)
    
        result3 = evaluate_pair(SOURCE_FILE, o0_nodebug, "O0_nondebug")
    
        # 汇总结果
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

    # 保存结果
    os.makedirs(RESULTS_DIR, exist_ok=True)
    timestamp = datetime.now().strftime('%Y%m%d_%H%M%S')
    result_file = f"{RESULTS_DIR}/test_results_{timestamp}.json"

    with open(result_file, 'w', encoding='utf-8') as f:
        json.dump(results, f, indent=2, ensure_ascii=False)

    # 打印总结
    print("\n" + "="*80)
    print("测试总结")
    print("="*80)

    if args.source_file and args.decompiled_file:
        print(f'  {results["eval_id"]}: {results["overall_score"]}/10')
    else:
        for group in results["control_groups"]:
            print(f'\n{group["name"]} ({group.get("type", "unknown")}):')
            for r in group["results"]:
                print(f'  {r["decompiled_name"]}: {r["overall_score"]}/10')
            if "expected" in group:
                print(f'  期望: {group["expected"]}')
                print(f'  验证: {"✓ 通过" if group["validation"] else "✗ 失败"}')

    print(f"\n结果已保存: {result_file}")
    print("="*80)

    return results

if __name__ == "__main__":
    try:
        run_test()
        print("\n✓ 测试完成!")
        sys.exit(0)
    except Exception as e:
        print(f"\n✗ 错误: {e}")
        import traceback
        traceback.print_exc()
        sys.exit(1)
