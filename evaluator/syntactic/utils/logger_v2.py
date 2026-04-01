import json
import os
import math
from collections import defaultdict


# ============================================================
# ErrorTracker: tracks error changes and counts newly introduced errors
# ============================================================

class ErrorTracker:
    """
    Track error changes across repair iterations.
    Use category:message signatures instead of line numbers to avoid false
    inflation from line-offset drift.
    Error changes on phase switches are not counted as newly introduced errors.
    """

    def __init__(self):
        self.prev_errors_by_phase = {
            "compile": set(),   # Previous compile-phase error signatures
            "linker": set(),    # Previous linker-phase error signatures
        }
        self.current_phase = "compile"
        self.total_new_errors = 0
        self.first_linker_errors = None       # Error signatures on first linker entry
        self.first_linker_error_count = 0     # Error count on first linker entry
        self.last_linker_error_count = 0      # Error count on the last linker step
        self.is_first_call = True             # First invocation marker

    def update(self, iteration, current_phase, errors):
        """
        Update the error state and return the number of newly introduced errors.

        Args:
            iteration: Current iteration number.
            current_phase: "compile" or "linker".
            errors: Current error list (dicts with category/message/etc.).

        Returns:
            The number of newly introduced errors for this iteration, excluding
            phase switches and the first iteration.
        """
        # Build the current error signature set.
        curr_signatures = {self._make_signature(e) for e in errors}

        # Update linker-phase tracking.
        if current_phase == "linker":
            self.last_linker_error_count = len(errors)
            if self.first_linker_errors is None:
                self.first_linker_errors = curr_signatures.copy()
                self.first_linker_error_count = len(errors)

        # First call: initialize state but do not count new errors.
        if self.is_first_call:
            self.is_first_call = False
            self.prev_errors_by_phase[current_phase] = curr_signatures
            self.current_phase = current_phase
            return 0

        # Detect phase switches.
        if self.current_phase != current_phase:
            # Errors on phase switches are not treated as newly introduced.
            self.prev_errors_by_phase[current_phase] = curr_signatures
            self.current_phase = current_phase
            return 0

        # Compare errors within the same phase.
        prev_signatures = self.prev_errors_by_phase.get(current_phase, set())

        # Count newly introduced signatures.
        new_signatures = curr_signatures - prev_signatures
        new_errors_count = len(new_signatures)

        # Accumulate the total.
        self.total_new_errors += new_errors_count

        # Update the stored state.
        self.prev_errors_by_phase[current_phase] = curr_signatures

        return new_errors_count

    def _make_signature(self, error):
        """
        Use category:message signatures to avoid false inflation from shifted
        line numbers.
        Tradeoff: identical errors at different locations are merged, which has
        negligible impact on evaluation.
        """
        category = error.get('category', 'Unknown')
        message = error.get('message', '').lower().strip()[:60]

        # Linker errors use symbol information instead of line numbers.
        if error.get('line', 0) == 0 and error.get('symbol'):
            symbol = error.get('symbol')
            error_type = error.get('error_type', 'unknown')
            return f"linker:{error_type}:{symbol}"

        return f"compile:{category}:{message}"

    def get_initial_linker_error_count(self):
        """Return the error count when the run first entered the linker phase."""
        return self.first_linker_error_count

    def get_final_linker_error_count(self):
        """Return the error count from the last linker-phase iteration."""
        return self.last_linker_error_count


# ============================================================
# Scoring helpers
# ============================================================

def calculate_error_growth_rate(error_trajectory, phase_list):
    """
    Compute the error growth rate while skipping phase-switch boundaries.

    Args:
        error_trajectory: Error counts by iteration, e.g. [28, 27, 26, ...]
        phase_list: Phase labels by iteration, e.g. ["compile", ..., "linker"]

    Returns:
        Growth rate in [0.0, 1.0], computed only within the same phase.
    """
    if len(error_trajectory) <= 1:
        return 0.0

    growth_count = 0
    valid_transitions = 0

    for i in range(1, len(error_trajectory)):
        # Skip transitions that cross phase boundaries.
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
    Compute how the set of error types evolved across the run.

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
    """Convert a numeric score to a letter grade."""
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
    Tier-1 scoring formula (v3.2):
    compile efficiency (0-45) + linker efficiency (0-35) + stability (0-20)
    """
    # Compile-efficiency score (0-45)
    if compile_iters <= 10:
        compile_efficiency = 45.0
    else:
        compile_efficiency = 45 * math.exp(-0.030 * (compile_iters - 10))
        compile_efficiency = max(10.0, compile_efficiency)

    # Linker-efficiency score (0-35)
    if linker_iters <= 5:
        linker_efficiency = 35.0
    else:
        linker_efficiency = 35 * math.exp(-0.045 * (linker_iters - 5))
        linker_efficiency = max(5.0, linker_efficiency)

    # Stability score (0-20)
    # Regression penalty: 2.5 per regression (4 was too aggressive).
    # growth_rate weight: 20 (was 25 previously).
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
    Tier-2 scoring formula (v3.2):
    compile efficiency (0-50) + linker progress (0-40) - regression penalty (0-10)
    """
    # Compile-efficiency score (0-50)
    if compile_iters <= 10:
        compile_efficiency = 50.0
    else:
        compile_efficiency = 50 * math.exp(-0.025 * (compile_iters - 10))
        compile_efficiency = max(15.0, compile_efficiency)

    # Linker-progress score (0-40)
    linker_progress = linker_reduction_ratio * 40

    # Regression penalty (deduct up to 10 points)
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
    Tier-3 scoring formula (v3.2):
    effort score (0-50) + stability score (0-50)
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
# Logger: core trace writer
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

        # v3.2 tracking fields
        self.error_tracker = ErrorTracker()
        self.error_trajectory = []     # Error count per iteration
        self.phase_list = []           # Phase label per iteration
        self.first_compile_success_iter = None    # First successful compile iteration
        self.phase_regression_count = 0           # Number of linker -> compile regressions
        self.initial_error_count = 0              # Initial error count
        self.initial_error_types = {}             # Initial error-type distribution

    def init_log(self, file_name):
        self.data["file_name"] = file_name
        self.save()

    def add_history(self, iteration, compile_success, error_summary, result,
                    token_usage=None, time_cost=0.0,
                    errors=None, current_phase="compile"):
        """
        Record one repair iteration.

        Args:
            iteration: Iteration index.
            compile_success: Whether compilation succeeded.
            error_summary: Error summary dict (total_count, target, stats, phase).
            result: Tool-call result payload.
            token_usage: Token usage.
            time_cost: Time cost.
            errors: Current error list (v3.2; used by ErrorTracker).
            current_phase: Current phase ("compile" / "linker") (v3.2).
        """
        # v3.2: update tracking state
        error_count = error_summary.get("total_count", 0)
        self.error_trajectory.append(error_count)
        self.phase_list.append(current_phase)

        # Record the initial state.
        if iteration == 1:
            self.initial_error_count = error_count
            self.initial_error_types = dict(error_summary.get("stats", {}))


        # Detect the first successful compile via the phase transition into linker.
        if current_phase == "linker" and self.first_compile_success_iter is None:
            self.first_compile_success_iter = iteration

        # Detect linker -> compile regressions.
        if len(self.phase_list) >= 2:
            if self.phase_list[-2] == "linker" and self.phase_list[-1] == "compile":
                self.phase_regression_count += 1

        # Update the ErrorTracker.
        new_errors_count = 0
        if errors is not None:
            new_errors_count = self.error_tracker.update(iteration, current_phase, errors)

        # Build the history entry.
        entry = {
            "iteration": iteration,
            "compile_success": compile_success,
            "error_summary": error_summary,
            "result": result,
            "token_usage": token_usage,
            "time_cost": time_cost,
            # v3.2 fields
            "phase": current_phase,
            "new_errors_introduced": new_errors_count,
        }
        self.data["history"].append(entry)
        self.data["total_iterations"] = iteration
        
        # v3.3: count successful tool calls
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
        v3.2: generate the enhanced summary with tier classification and scores.
        """
        if not self.data["history"]:
            self.data["summary"] = {"tier": 3, "final_status": "compile_failed"}
            self.save()
            return

        # ==================== base data ====================

        # Sum token usage and time.
        total_tokens = 0
        total_time = 0.0
        for entry in self.data["history"]:
            if entry.get("token_usage"):
                tu = entry["token_usage"]
                total_tokens += tu.get("total_tokens", 0)
            total_time += entry.get("time_cost", 0.0)

        # Determine the final status and tier.
        final_status = self.data["final_status"]

        if final_status == "success":
            tier = 1
        elif self.first_compile_success_iter is not None:
            tier = 2
            # Rewrite legacy "failed" into the tier-2 terminal status.
            if final_status == "failed":
                final_status = "linker_failed"
                self.data["final_status"] = final_status
        else:
            tier = 3
            if final_status == "failed":
                final_status = "compile_failed"
                self.data["final_status"] = final_status

        # Initial state
        initial_state = {
            "error_count": self.initial_error_count,
            "error_types": self.initial_error_types,
        }

        # ==================== growth_rate ====================

        growth_rate = calculate_error_growth_rate(
            self.error_trajectory, self.phase_list
        )

        # ==================== tier-specific metrics ====================

        total_iterations = self.data["total_iterations"]

        if tier == 1:
            # Tier 1: fully repaired
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
            # Tier 2: compiles successfully but still fails at link time
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
            # Tier 3: never reached compile success
            lowest_count = min(self.error_trajectory) if self.error_trajectory else self.initial_error_count
            lowest_iter = self.error_trajectory.index(lowest_count) + 1 if self.error_trajectory else 1
            max_count = max(self.error_trajectory) if self.error_trajectory else self.initial_error_count

            if self.initial_error_count > 0:
                reduction_ratio = max(0, (self.initial_error_count - lowest_count) / self.initial_error_count)
            else:
                reduction_ratio = 0.0

            # Final error-type distribution
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

        # ==================== assemble final summary ====================

        self.data["enhanced_summary"] = {
            "tier": tier,
            "final_status": final_status,
            "total_iterations": total_iterations,
            "total_tokens": total_tokens,
            "total_time_seconds": round(total_time, 2),
            "initial_state": initial_state,
            f"tier{tier}_metrics": tier_metrics,
        }

        # Preserve the legacy summary format for backward compatibility.
        self._generate_legacy_summary()

        self.save()

    def _generate_legacy_summary(self):
        """Preserve the legacy summary format for older analysis code."""
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
