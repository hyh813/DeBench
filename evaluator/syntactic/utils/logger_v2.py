import json
import os
import math
from collections import defaultdict


# ============================================================
# ErrorTracker: 追踪错误变化，用于计算新引入错误
# ============================================================

class ErrorTracker:
    """
    追踪每轮修复中的错误变化。
    使用 category:message 签名（而非行号）避免行号偏移导致的虚假膨胀。
    Phase 切换时的错误变化不计入新引入错误。
    """

    def __init__(self):
        self.prev_errors_by_phase = {
            "compile": set(),   # 上一轮 compile 错误签名集合
            "linker": set(),    # 上一轮 linker 错误签名集合
        }
        self.current_phase = "compile"
        self.total_new_errors = 0
        self.first_linker_errors = None       # 首次进入 linker 时的错误签名集合
        self.first_linker_error_count = 0     # 首次进入 linker 时的错误数量
        self.last_linker_error_count = 0      # 最后一次处于 linker 时的错误数量
        self.is_first_call = True             # 首次调用标志

    def update(self, iteration, current_phase, errors):
        """
        更新错误状态，返回本轮新引入的错误数。

        Args:
            iteration: 当前迭代号
            current_phase: "compile" 或 "linker"
            errors: 当前错误列表 (list of dicts with 'category', 'message', etc.)

        Returns:
            new_errors_count: 本轮新引入的错误数（不含 phase 切换和首轮）
        """
        # 生成当前错误签名集合
        curr_signatures = {self._make_signature(e) for e in errors}

        # 更新 linker 相关追踪
        if current_phase == "linker":
            self.last_linker_error_count = len(errors)
            if self.first_linker_errors is None:
                self.first_linker_errors = curr_signatures.copy()
                self.first_linker_error_count = len(errors)

        # 首次调用：初始化，不计入新引入错误
        if self.is_first_call:
            self.is_first_call = False
            self.prev_errors_by_phase[current_phase] = curr_signatures
            self.current_phase = current_phase
            return 0

        # Phase 切换检测
        if self.current_phase != current_phase:
            # Phase 切换时的错误不计入新引入错误
            self.prev_errors_by_phase[current_phase] = curr_signatures
            self.current_phase = current_phase
            return 0

        # 同一 Phase 内的错误比较
        prev_signatures = self.prev_errors_by_phase.get(current_phase, set())

        # 计算新增的错误签名
        new_signatures = curr_signatures - prev_signatures
        new_errors_count = len(new_signatures)

        # 累计
        self.total_new_errors += new_errors_count

        # 更新状态
        self.prev_errors_by_phase[current_phase] = curr_signatures

        return new_errors_count

    def _make_signature(self, error):
        """
        使用 category:message 签名，避免行号偏移导致的虚假膨胀。
        代价：两个不同位置的相同错误会被合并（对评估影响极小）
        """
        category = error.get('category', 'Unknown')
        message = error.get('message', '').lower().strip()[:60]

        # Linker 错误使用 symbol 信息
        if error.get('line', 0) == 0 and error.get('symbol'):
            symbol = error.get('symbol')
            error_type = error.get('error_type', 'unknown')
            return f"linker:{error_type}:{symbol}"

        return f"compile:{category}:{message}"

    def get_initial_linker_error_count(self):
        """获取首次进入 linker 时的错误数量"""
        return self.first_linker_error_count

    def get_final_linker_error_count(self):
        """获取最后一次处于 linker 时的错误数量"""
        return self.last_linker_error_count


# ============================================================
# 评分辅助函数
# ============================================================

def calculate_error_growth_rate(error_trajectory, phase_list):
    """
    计算错误增长率，跳过 phase 切换点。

    Args:
        error_trajectory: 每轮的错误数列表 [28, 27, 26, ...]
        phase_list: 每轮的 phase ["compile", "compile", ..., "linker", ...]

    Returns:
        growth_rate: 0.0 - 1.0（仅计算同 phase 内的增长）
    """
    if len(error_trajectory) <= 1:
        return 0.0

    growth_count = 0
    valid_transitions = 0

    for i in range(1, len(error_trajectory)):
        # 跳过 phase 切换点
        if phase_list[i] != phase_list[i - 1]:
            continue

        valid_transitions += 1
        if error_trajectory[i] > error_trajectory[i - 1]:
            growth_count += 1

    if valid_transitions == 0:
        return 0.0

    return growth_count / valid_transitions


def calculate_error_evolution(initial_types, final_types):
    """
    计算错误类型的演变。

    Args:
        initial_types: {"Undeclared Identifier": 80, "Unknown Type": 40, ...}
        final_types: {"Undeclared Identifier": 45, "Unknown Type": 30, ...}

    Returns:
        dict with types_eliminated and types_introduced
    """
    initial_set = set(initial_types.keys())
    final_set = set(final_types.keys())

    return {
        "types_eliminated": sorted(list(initial_set - final_set)),
        "types_introduced": sorted(list(final_set - initial_set)),
    }


def get_grade(score):
    """将分数转换为等级"""
    if score >= 90: return "A+"
    if score >= 85: return "A"
    if score >= 80: return "A-"
    if score >= 75: return "B+"
    if score >= 70: return "B"
    if score >= 65: return "B-"
    if score >= 60: return "C+"
    if score >= 55: return "C"
    if score >= 50: return "C-"
    return "F"


def calculate_tier1_score(compile_iters, linker_iters, growth_rate, regression_count):
    """
    档位1评分公式（v3.2）
    编译效率(0-45) + 链接效率(0-35) + 稳定性(0-20)
    """
    # 编译效率评分 (0-45)
    if compile_iters <= 10:
        compile_efficiency = 45.0
    else:
        compile_efficiency = 45 * math.exp(-0.030 * (compile_iters - 10))
        compile_efficiency = max(10.0, compile_efficiency)

    # 链接效率评分 (0-35)
    if linker_iters <= 5:
        linker_efficiency = 35.0
    else:
        linker_efficiency = 35 * math.exp(-0.045 * (linker_iters - 5))
        linker_efficiency = max(5.0, linker_efficiency)

    # 稳定性评分 (0-20)
    # 回退惩罚：每次 2.5 分（原 4 分太激进，5 次就扣光）
    # growth_rate 权重：20（原 25）
    stability_score = 20 - growth_rate * 20 - regression_count * 2.5
    stability_score = max(0, stability_score)

    total = compile_efficiency + linker_efficiency + stability_score

    return {
        "compile_efficiency_score": round(compile_efficiency, 2),
        "linker_efficiency_score": round(linker_efficiency, 2),
        "stability_score": round(stability_score, 2),
        "total_score": round(total, 2),
        "grade": get_grade(total)
    }


def calculate_tier2_score(compile_iters, linker_reduction_ratio, regression_count):
    """
    档位2评分公式（v3.2）
    编译效率(0-50) + 链接进展(0-40) - 回退惩罚(0-10)
    """
    # 编译效率评分 (0-50)
    if compile_iters <= 10:
        compile_efficiency = 50.0
    else:
        compile_efficiency = 50 * math.exp(-0.025 * (compile_iters - 10))
        compile_efficiency = max(15.0, compile_efficiency)

    # 链接进展评分 (0-40)
    linker_progress = linker_reduction_ratio * 40

    # 回退惩罚 (0-10 扣分)
    stability_penalty = min(10, regression_count * 3)

    total = compile_efficiency + linker_progress - stability_penalty
    total = max(0, total)

    return {
        "compile_efficiency_score": round(compile_efficiency, 2),
        "linker_progress_score": round(linker_progress, 2),
        "stability_penalty": round(stability_penalty, 2),
        "total_score": round(total, 2),
        "grade": get_grade(total)
    }


def calculate_tier3_score(reduction_ratio, growth_rate):
    """
    档位3评分公式（v3.2）
    努力评分(0-50) + 稳定性评分(0-50)
    """
    effort_score = reduction_ratio * 50
    stability_score = (1 - growth_rate) * 50

    total = effort_score + stability_score

    return {
        "effort_score": round(effort_score, 2),
        "stability_score": round(stability_score, 2),
        "total_score": round(total, 2),
        "grade": get_grade(total)
    }


# ============================================================
# Logger: 日志记录核心类
# ============================================================

class Logger:
    def __init__(self, log_path="repair_trace.json"):
        self.log_path = log_path
        self.data = {
            "file_name": "",
            "total_iterations": 0,
            "successful_tool_calls": 0,
            "final_status": "pending",
            "termination_reason": None,
            "resumable": False,
            "resume_mode": None,
            "next_iteration": None,
            "history": []
        }

        # v3.2: 追踪数据
        self.error_tracker = ErrorTracker()
        self.error_trajectory = []     # 每轮错误数
        self.phase_list = []           # 每轮 phase
        self.first_compile_success_iter = None    # 首次编译成功的迭代号
        self.phase_regression_count = 0           # linker → compile 回退次数
        self.initial_error_count = 0              # 第一轮的错误数
        self.initial_error_types = {}             # 第一轮的错误类型分布

    def init_log(self, file_name):
        self.data["file_name"] = file_name
        self.save()

    def add_history(self, iteration, compile_success, error_summary, result,
                    token_usage=None, time_cost=0.0,
                    errors=None, current_phase="compile"):
        """
        记录一轮修复历史。

        Args:
            iteration: 迭代号
            compile_success: 是否编译成功
            error_summary: 错误摘要 dict (total_count, target, stats, phase)
            result: 工具调用结果
            token_usage: Token 使用量
            time_cost: 耗时
            errors: 当前错误列表 (list of dicts) — v3.2新增，用于 ErrorTracker
            current_phase: 当前 phase ("compile" / "linker") — v3.2新增
        """
        # v3.2: 更新追踪数据
        error_count = error_summary.get("total_count", 0)
        self.error_trajectory.append(error_count)
        self.phase_list.append(current_phase)

        # 记录初始状态
        if iteration == 1:
            self.initial_error_count = error_count
            self.initial_error_types = dict(error_summary.get("stats", {}))


        # 首次编译成功追踪：通过 phase 切换检测
        # 当首次进入 linker 阶段时，说明 compile 已经成功
        if current_phase == "linker" and self.first_compile_success_iter is None:
            self.first_compile_success_iter = iteration

        # Phase 回退检测 (linker → compile)
        if len(self.phase_list) >= 2:
            if self.phase_list[-2] == "linker" and self.phase_list[-1] == "compile":
                self.phase_regression_count += 1

        # ErrorTracker 更新
        new_errors_count = 0
        if errors is not None:
            new_errors_count = self.error_tracker.update(iteration, current_phase, errors)

        # 构建历史条目
        entry = {
            "iteration": iteration,
            "compile_success": compile_success,
            "error_summary": error_summary,
            "result": result,
            "token_usage": token_usage,
            "time_cost": time_cost,
            # v3.2 新增字段
            "phase": current_phase,
            "new_errors_introduced": new_errors_count,
        }
        self.data["history"].append(entry)
        self.data["total_iterations"] = iteration
        
        # v3.3: 统计成功的工具调用次数
        if result and "tool_results" in result:
            for tr in result.get("tool_results", []):
                if tr.get("success"):
                    self.data["successful_tool_calls"] += 1
                    
        self.save()

    def set_status(self, status):
        self.data["final_status"] = status
        self.save()

    def set_resume_state(self, termination_reason=None, resumable=False, resume_mode=None, next_iteration=None):
        self.data["termination_reason"] = termination_reason
        self.data["resumable"] = resumable
        self.data["resume_mode"] = resume_mode
        self.data["next_iteration"] = next_iteration
        self.save()

    def finalize_report(self):
        """
        v3.2: 生成增强版的 summary，包含三档分类和评分。
        """
        if not self.data["history"]:
            self.data["summary"] = {"tier": 3, "final_status": "compile_failed"}
            self.save()
            return

        # ==================== 基础数据 ====================

        # 汇总 token 和时间
        total_tokens = 0
        total_time = 0.0
        for entry in self.data["history"]:
            if entry.get("token_usage"):
                tu = entry["token_usage"]
                total_tokens += tu.get("total_tokens", 0)
            total_time += entry.get("time_cost", 0.0)

        # 确定最终状态和档位
        final_status = self.data["final_status"]

        if final_status == "success":
            tier = 1
        elif self.first_compile_success_iter is not None:
            tier = 2
            # 修正 final_status 如果还是旧的 "failed"
            if final_status == "failed":
                final_status = "linker_failed"
                self.data["final_status"] = final_status
        else:
            tier = 3
            if final_status == "failed":
                final_status = "compile_failed"
                self.data["final_status"] = final_status

        # 初始状态
        initial_state = {
            "error_count": self.initial_error_count,
            "error_types": self.initial_error_types,
        }

        # ==================== growth_rate ====================

        growth_rate = calculate_error_growth_rate(
            self.error_trajectory, self.phase_list
        )

        # ==================== 按档位计算指标 ====================

        total_iterations = self.data["total_iterations"]

        if tier == 1:
            # 档位1：成功修复
            compile_iters = self.first_compile_success_iter or total_iterations
            linker_iters = total_iterations - compile_iters

            tier_metrics = {
                "compile_phase": {
                    "iterations_to_first_compile_success": compile_iters,
                },
                "linker_phase": {
                    "iterations_from_first_compile_to_success": linker_iters,
                },
                "stability": {
                    "error_growth_rate": round(growth_rate, 4),
                    "phase_regression_count": self.phase_regression_count,
                    "total_new_errors_introduced": self.error_tracker.total_new_errors,
                },
                "score": calculate_tier1_score(
                    compile_iters, linker_iters, growth_rate,
                    self.phase_regression_count
                ),
            }

        elif tier == 2:
            # 档位2：编译成功，链接失败
            compile_iters = self.first_compile_success_iter or total_iterations
            initial_linker = self.error_tracker.get_initial_linker_error_count()
            final_linker = self.error_tracker.get_final_linker_error_count()

            if initial_linker > 0:
                linker_reduction_ratio = max(0, (initial_linker - final_linker) / initial_linker)
            else:
                linker_reduction_ratio = 0.0

            tier_metrics = {
                "compile_phase": {
                    "iterations_to_first_compile_success": compile_iters,
                },
                "linker_phase": {
                    "initial_linker_errors": initial_linker,
                    "final_linker_errors": final_linker,
                    "linker_reduction_ratio": round(linker_reduction_ratio, 4),
                    "compile_regressions": self.phase_regression_count,
                },
                "score": calculate_tier2_score(
                    compile_iters, linker_reduction_ratio,
                    self.phase_regression_count
                ),
            }

        else:
            # 档位3：从未编译成功
            lowest_count = min(self.error_trajectory) if self.error_trajectory else self.initial_error_count
            lowest_iter = self.error_trajectory.index(lowest_count) + 1 if self.error_trajectory else 1
            max_count = max(self.error_trajectory) if self.error_trajectory else self.initial_error_count

            if self.initial_error_count > 0:
                reduction_ratio = max(0, (self.initial_error_count - lowest_count) / self.initial_error_count)
            else:
                reduction_ratio = 0.0

            # 最终错误类型
            final_types = {}
            for entry in reversed(self.data["history"]):
                if "stats" in entry.get("error_summary", {}):
                    final_types = dict(entry["error_summary"]["stats"])
                    break

            evolution = calculate_error_evolution(self.initial_error_types, final_types)

            tier_metrics = {
                "oscillation": {
                    "error_growth_rate": round(growth_rate, 4),
                    "error_trajectory": self.error_trajectory,
                    "max_error_count": max_count,
                    "min_error_count": lowest_count,
                },
                "effort": {
                    "initial_error_count": self.initial_error_count,
                    "lowest_error_count": lowest_count,
                    "lowest_at_iteration": lowest_iter,
                    "error_reduction": self.initial_error_count - lowest_count,
                    "error_reduction_ratio": round(reduction_ratio, 4),
                },
                "error_evolution": {
                    "initial_types": self.initial_error_types,
                    "final_types": final_types,
                    "types_eliminated": evolution["types_eliminated"],
                    "types_introduced": evolution["types_introduced"],
                },
                "score": calculate_tier3_score(reduction_ratio, growth_rate),
            }

        # ==================== 组装最终 summary ====================

        self.data["enhanced_summary"] = {
            "tier": tier,
            "final_status": final_status,
            "total_iterations": total_iterations,
            "total_tokens": total_tokens,
            "total_time_seconds": round(total_time, 2),
            "initial_state": initial_state,
            f"tier{tier}_metrics": tier_metrics,
        }

        # 保留旧的 summary 格式以保证兼容性
        self._generate_legacy_summary()

        self.save()

    def _generate_legacy_summary(self):
        """保留旧的 summary 格式以兼容已有分析代码"""
        summary = {
            "total_unique_types": 0,
            "type_breakdown": {}
        }

        if not self.data["history"]:
            self.data["summary"] = summary
            return

        first_stats = {}
        for entry in self.data["history"]:
            if not entry["compile_success"] and "stats" in entry.get("error_summary", {}):
                first_stats = entry["error_summary"]["stats"]
                break

        all_types = set()
        for entry in self.data["history"]:
            if "stats" in entry.get("error_summary", {}):
                all_types.update(entry["error_summary"]["stats"].keys())

        summary["total_unique_types"] = len(all_types)

        for err_type in all_types:
            initial_count = first_stats.get(err_type, 0)
            max_count = 0
            for entry in self.data["history"]:
                if "stats" in entry.get("error_summary", {}):
                    cnt = entry["error_summary"]["stats"].get(err_type, 0)
                    if cnt > max_count:
                        max_count = cnt

            summary["type_breakdown"][err_type] = {
                "initial_count": initial_count,
                "max_count": max_count,
                "final_count": 0 if self.data["final_status"] == "success" else "unknown"
            }

        self.data["summary"] = summary

    def save(self):
        with open(self.log_path, 'w') as f:
            json.dump(self.data, f, indent=2)
