# BinBench Evaluation Report

**Generated:** 2026-03-19 23:39:46

## 1. Test Object

| Attribute | Value |
|-----------|-------|
| Source | `src/2.c` |
| Decompiled | `decompiled/angr_out/x86/2/2_gcc_O0_g.c` |
| Decompiler | ANGR |
| Architecture | x86 |
| Compiler | gcc |
| Optimization | O0 |
| Debug | yes |

## 2. Evaluation Results

| Dimension | Status |
|-----------|--------|
| Readability | ✅ Completed |
| Syntactic | ❌ Failed |
| Semantic | ⏭ Skipped |

## 3. Detailed Results

### 3.1 Readability Evaluation

*No readability results found.*

### 3.2 Syntactic Correctness Evaluation

#### Repair Trace Log

```json
{
  "file_name": "results_minimax_v4_full/x86/2/2_gcc_O0_g/angr/syntactic/fix_2_gcc_O0_g.c",
  "total_iterations": 50,
  "successful_tool_calls": 78,
  "final_status": "compile_failed",
  "termination_reason": "max_iters_reached",
  "resumable": false,
  "resume_mode": null,
  "next_iteration": null,
  "history": [
    {
      "iteration": 1,
      "compile_success": false,
      "error_summary": {
        "total_count": 208,
        "stats": {
          "Syntax Error": 64,
          "Undeclared Identifier": 65,
          "Other": 30,
          "Redefinition": 18,
          "Conflicting Types": 22,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 15424,
        "completion_tokens": 660,
        "total_tokens": 16084
      },
      "time_cost": 19.059049606323242,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 2,
      "compile_success": false,
      "error_summary": {
        "total_count": 211,
        "stats": {
          "Syntax Error": 69,
          "Undeclared Identifier": 63,
          "Other": 30,
          "Redefinition": 18,
          "Conflicting Types": 22,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 15629,
        "completion_tokens": 566,
        "total_tokens": 16195
      },
      "time_cost": 11.186452388763428,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 3,
      "compile_success": false,
      "error_summary": {
        "total_count": 210,
        "stats": {
          "Syntax Error": 68,
          "Other": 31,
          "Redefinition": 18,
          "Conflicting Types": 22,
          "Undeclared Identifier": 62,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "replace_string",
            "success": true,
            "msg": "String replaced"
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 15674,
        "completion_tokens": 825,
        "total_tokens": 16499
      },
      "time_cost": 47.32235050201416,
      "phase": "compile",
      "new_errors_introduced": 1
    },
    {
      "iteration": 4,
      "compile_success": false,
      "error_summary": {
        "total_count": 205,
        "stats": {
          "Other": 31,
          "Syntax Error": 63,
          "Redefinition": 18,
          "Conflicting Types": 22,
          "Undeclared Identifier": 62,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 1 occurrences"
          },
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 4 occurrences"
          },
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 2 occurrences"
          },
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 54 occurrences"
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 15806,
        "completion_tokens": 691,
        "total_tokens": 16497
      },
      "time_cost": 13.207853555679321,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 5,
      "compile_success": false,
      "error_summary": {
        "total_count": 179,
        "stats": {
          "Other": 31,
          "Syntax Error": 59,
          "Redefinition": 18,
          "Conflicting Types": 24,
          "Argument Count Mismatch": 28,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Undeclared Identifier": 5,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "replace_string",
            "success": true,
            "msg": "String replaced"
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 15907,
        "completion_tokens": 1214,
        "total_tokens": 17121
      },
      "time_cost": 23.18840503692627,
      "phase": "compile",
      "new_errors_introduced": 5
    },
    {
      "iteration": 6,
      "compile_success": false,
      "error_summary": {
        "total_count": 171,
        "stats": {
          "Other": 31,
          "Syntax Error": 52,
          "Redefinition": 18,
          "Conflicting Types": 24,
          "Argument Count Mismatch": 28,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Undeclared Identifier": 4,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 16044,
        "completion_tokens": 1317,
        "total_tokens": 17361
      },
      "time_cost": 61.72363233566284,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 7,
      "compile_success": false,
      "error_summary": {
        "total_count": 163,
        "stats": {
          "Other": 31,
          "Syntax Error": 45,
          "Redefinition": 18,
          "Conflicting Types": 24,
          "Argument Count Mismatch": 28,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Undeclared Identifier": 3,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 15641,
        "completion_tokens": 1077,
        "total_tokens": 16718
      },
      "time_cost": 52.38950777053833,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 8,
      "compile_success": false,
      "error_summary": {
        "total_count": 158,
        "stats": {
          "Other": 31,
          "Syntax Error": 41,
          "Redefinition": 18,
          "Conflicting Types": 24,
          "Argument Count Mismatch": 28,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Undeclared Identifier": 2,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 15349,
        "completion_tokens": 1904,
        "total_tokens": 17253
      },
      "time_cost": 61.56182265281677,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 9,
      "compile_success": false,
      "error_summary": {
        "total_count": 122,
        "stats": {
          "Other": 27,
          "Syntax Error": 10,
          "Redefinition": 18,
          "Conflicting Types": 24,
          "Argument Count Mismatch": 28,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Undeclared Identifier": 1,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 14394,
        "completion_tokens": 1142,
        "total_tokens": 15536
      },
      "time_cost": 35.93814468383789,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 10,
      "compile_success": false,
      "error_summary": {
        "total_count": 118,
        "stats": {
          "Other": 27,
          "Syntax Error": 7,
          "Redefinition": 18,
          "Conflicting Types": 24,
          "Argument Count Mismatch": 28,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 14311,
        "completion_tokens": 677,
        "total_tokens": 14988
      },
      "time_cost": 41.32596278190613,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 11,
      "compile_success": false,
      "error_summary": {
        "total_count": 121,
        "stats": {
          "Other": 26,
          "Syntax Error": 7,
          "Redefinition": 20,
          "Conflicting Types": 26,
          "Argument Count Mismatch": 28,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 14379,
        "completion_tokens": 614,
        "total_tokens": 14993
      },
      "time_cost": 11.33167576789856,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 12,
      "compile_success": false,
      "error_summary": {
        "total_count": 119,
        "stats": {
          "Other": 26,
          "Syntax Error": 7,
          "Redefinition": 19,
          "Conflicting Types": 25,
          "Argument Count Mismatch": 28,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 14393,
        "completion_tokens": 1179,
        "total_tokens": 15572
      },
      "time_cost": 22.550520658493042,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 13,
      "compile_success": false,
      "error_summary": {
        "total_count": 111,
        "stats": {
          "Other": 26,
          "Syntax Error": 7,
          "Redefinition": 15,
          "Conflicting Types": 21,
          "Argument Count Mismatch": 28,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 27 occurrences"
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 14264,
        "completion_tokens": 742,
        "total_tokens": 15006
      },
      "time_cost": 13.097881078720093,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 14,
      "compile_success": false,
      "error_summary": {
        "total_count": 84,
        "stats": {
          "Other": 26,
          "Syntax Error": 7,
          "Redefinition": 15,
          "Conflicting Types": 21,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 14173,
        "completion_tokens": 665,
        "total_tokens": 14838
      },
      "time_cost": 16.601763486862183,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 15,
      "compile_success": false,
      "error_summary": {
        "total_count": 82,
        "stats": {
          "Other": 26,
          "Syntax Error": 7,
          "Redefinition": 14,
          "Conflicting Types": 20,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 1 occurrences"
          },
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 1 occurrences"
          },
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 1 occurrences"
          },
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 1 occurrences"
          },
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 1 occurrences"
          },
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 1 occurrences"
          },
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 1 occurrences"
          },
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 1 occurrences"
          },
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 1 occurrences"
          },
          {
            "call": "replace_string",
            "success": true,
            "msg": "Replaced all 1 occurrences"
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 14155,
        "completion_tokens": 1261,
        "total_tokens": 15416
      },
      "time_cost": 20.92000389099121,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 16,
      "compile_success": false,
      "error_summary": {
        "total_count": 72,
        "stats": {
          "Other": 16,
          "Syntax Error": 7,
          "Redefinition": 14,
          "Conflicting Types": 20,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13607,
        "completion_tokens": 916,
        "total_tokens": 14523
      },
      "time_cost": 32.80060338973999,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 17,
      "compile_success": false,
      "error_summary": {
        "total_count": 70,
        "stats": {
          "Other": 16,
          "Syntax Error": 7,
          "Conflicting Types": 19,
          "Redefinition": 13,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13562,
        "completion_tokens": 1180,
        "total_tokens": 14742
      },
      "time_cost": 49.282411098480225,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 18,
      "compile_success": false,
      "error_summary": {
        "total_count": 57,
        "stats": {
          "Other": 15,
          "Syntax Error": 7,
          "Conflicting Types": 10,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Unknown Type": 2,
          "Member Access Error": 10,
          "Redefinition": 4
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13261,
        "completion_tokens": 868,
        "total_tokens": 14129
      },
      "time_cost": 45.248754024505615,
      "phase": "compile",
      "new_errors_introduced": 3
    },
    {
      "iteration": 19,
      "compile_success": false,
      "error_summary": {
        "total_count": 55,
        "stats": {
          "Other": 15,
          "Syntax Error": 7,
          "Conflicting Types": 10,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 10,
          "Redefinition": 4
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13295,
        "completion_tokens": 806,
        "total_tokens": 14101
      },
      "time_cost": 34.29930090904236,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 20,
      "compile_success": false,
      "error_summary": {
        "total_count": 53,
        "stats": {
          "Other": 14,
          "Syntax Error": 6,
          "Conflicting Types": 10,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 10,
          "Redefinition": 4
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13326,
        "completion_tokens": 801,
        "total_tokens": 14127
      },
      "time_cost": 17.837418794631958,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 21,
      "compile_success": false,
      "error_summary": {
        "total_count": 53,
        "stats": {
          "Other": 14,
          "Syntax Error": 6,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 12,
          "Redefinition": 3
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13342,
        "completion_tokens": 845,
        "total_tokens": 14187
      },
      "time_cost": 14.983465194702148,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 22,
      "compile_success": false,
      "error_summary": {
        "total_count": 52,
        "stats": {
          "Other": 16,
          "Syntax Error": 6,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13342,
        "completion_tokens": 1212,
        "total_tokens": 14554
      },
      "time_cost": 58.087536334991455,
      "phase": "compile",
      "new_errors_introduced": 1
    },
    {
      "iteration": 23,
      "compile_success": false,
      "error_summary": {
        "total_count": 52,
        "stats": {
          "Other": 16,
          "Syntax Error": 6,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13372,
        "completion_tokens": 706,
        "total_tokens": 14078
      },
      "time_cost": 17.48897123336792,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 24,
      "compile_success": false,
      "error_summary": {
        "total_count": 50,
        "stats": {
          "Other": 15,
          "Syntax Error": 5,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13362,
        "completion_tokens": 951,
        "total_tokens": 14313
      },
      "time_cost": 43.59880757331848,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 25,
      "compile_success": false,
      "error_summary": {
        "total_count": 50,
        "stats": {
          "Other": 15,
          "Syntax Error": 5,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13380,
        "completion_tokens": 1210,
        "total_tokens": 14590
      },
      "time_cost": 56.12613868713379,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 26,
      "compile_success": false,
      "error_summary": {
        "total_count": 44,
        "stats": {
          "Other": 11,
          "Void Value Error": 7,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13404,
        "completion_tokens": 1523,
        "total_tokens": 14927
      },
      "time_cost": 58.16989541053772,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 27,
      "compile_success": false,
      "error_summary": {
        "total_count": 45,
        "stats": {
          "Other": 11,
          "Conflicting Types": 10,
          "Void Value Error": 7,
          "Argument Count Mismatch": 1,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13424,
        "completion_tokens": 728,
        "total_tokens": 14152
      },
      "time_cost": 13.100876331329346,
      "phase": "compile",
      "new_errors_introduced": 1
    },
    {
      "iteration": 28,
      "compile_success": false,
      "error_summary": {
        "total_count": 44,
        "stats": {
          "Other": 11,
          "Conflicting Types": 10,
          "Void Value Error": 6,
          "Argument Count Mismatch": 1,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13424,
        "completion_tokens": 876,
        "total_tokens": 14300
      },
      "time_cost": 20.08769464492798,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 29,
      "compile_success": false,
      "error_summary": {
        "total_count": 45,
        "stats": {
          "Other": 11,
          "Conflicting Types": 11,
          "Void Value Error": 6,
          "Argument Count Mismatch": 1,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13432,
        "completion_tokens": 856,
        "total_tokens": 14288
      },
      "time_cost": 20.985111474990845,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 30,
      "compile_success": false,
      "error_summary": {
        "total_count": 43,
        "stats": {
          "Other": 11,
          "Void Value Error": 6,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13426,
        "completion_tokens": 1132,
        "total_tokens": 14558
      },
      "time_cost": 20.56408977508545,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 31,
      "compile_success": false,
      "error_summary": {
        "total_count": 43,
        "stats": {
          "Other": 11,
          "Void Value Error": 6,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13435,
        "completion_tokens": 1028,
        "total_tokens": 14463
      },
      "time_cost": 38.145519971847534,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 32,
      "compile_success": false,
      "error_summary": {
        "total_count": 43,
        "stats": {
          "Other": 11,
          "Void Value Error": 6,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13447,
        "completion_tokens": 1485,
        "total_tokens": 14932
      },
      "time_cost": 42.62036609649658,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 33,
      "compile_success": false,
      "error_summary": {
        "total_count": 43,
        "stats": {
          "Other": 11,
          "Void Value Error": 6,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13467,
        "completion_tokens": 765,
        "total_tokens": 14232
      },
      "time_cost": 12.984572172164917,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 34,
      "compile_success": false,
      "error_summary": {
        "total_count": 43,
        "stats": {
          "Other": 11,
          "Void Value Error": 6,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13447,
        "completion_tokens": 720,
        "total_tokens": 14167
      },
      "time_cost": 27.247183799743652,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 35,
      "compile_success": false,
      "error_summary": {
        "total_count": 42,
        "stats": {
          "Other": 11,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13449,
        "completion_tokens": 1069,
        "total_tokens": 14518
      },
      "time_cost": 20.295894861221313,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 36,
      "compile_success": false,
      "error_summary": {
        "total_count": 41,
        "stats": {
          "Other": 11,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 8,
          "Redefinition": 3,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13422,
        "completion_tokens": 866,
        "total_tokens": 14288
      },
      "time_cost": 17.295592069625854,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 37,
      "compile_success": false,
      "error_summary": {
        "total_count": 41,
        "stats": {
          "Other": 10,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13435,
        "completion_tokens": 1099,
        "total_tokens": 14534
      },
      "time_cost": 40.53106069564819,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 38,
      "compile_success": false,
      "error_summary": {
        "total_count": 41,
        "stats": {
          "Other": 10,
          "Conflicting Types": 9,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 9,
          "Redefinition": 3,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13414,
        "completion_tokens": 1657,
        "total_tokens": 15071
      },
      "time_cost": 23.990936279296875,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 39,
      "compile_success": false,
      "error_summary": {
        "total_count": 31,
        "stats": {
          "Other": 9,
          "Conflicting Types": 8,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 3,
          "Redefinition": 2
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": false,
            "msg": "Patch failed: The search_block was not found in the file. Please ensure you copy the OLD code EXACTLY as it appears in the file context, including surrounding lines if necessary for uniqueness."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13140,
        "completion_tokens": 1202,
        "total_tokens": 14342
      },
      "time_cost": 20.528811931610107,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 40,
      "compile_success": false,
      "error_summary": {
        "total_count": 31,
        "stats": {
          "Other": 9,
          "Conflicting Types": 8,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 3,
          "Redefinition": 2
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13231,
        "completion_tokens": 1004,
        "total_tokens": 14235
      },
      "time_cost": 18.592433214187622,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 41,
      "compile_success": false,
      "error_summary": {
        "total_count": 31,
        "stats": {
          "Other": 9,
          "Conflicting Types": 8,
          "Argument Count Mismatch": 1,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 3,
          "Redefinition": 2
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13229,
        "completion_tokens": 957,
        "total_tokens": 14186
      },
      "time_cost": 36.72852158546448,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 42,
      "compile_success": false,
      "error_summary": {
        "total_count": 38,
        "stats": {
          "Other": 11,
          "Argument Count Mismatch": 6,
          "Conflicting Types": 8,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 3,
          "Redefinition": 2
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13267,
        "completion_tokens": 1044,
        "total_tokens": 14311
      },
      "time_cost": 16.25074005126953,
      "phase": "compile",
      "new_errors_introduced": 3
    },
    {
      "iteration": 43,
      "compile_success": false,
      "error_summary": {
        "total_count": 35,
        "stats": {
          "Other": 11,
          "Argument Count Mismatch": 3,
          "Conflicting Types": 8,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 3,
          "Redefinition": 2
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13282,
        "completion_tokens": 1448,
        "total_tokens": 14730
      },
      "time_cost": 28.195852756500244,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 44,
      "compile_success": false,
      "error_summary": {
        "total_count": 32,
        "stats": {
          "Other": 11,
          "Argument Count Mismatch": 3,
          "Conflicting Types": 8,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Redefinition": 2
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13256,
        "completion_tokens": 641,
        "total_tokens": 13897
      },
      "time_cost": 33.594828367233276,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 45,
      "compile_success": false,
      "error_summary": {
        "total_count": 32,
        "stats": {
          "Other": 11,
          "Argument Count Mismatch": 3,
          "Conflicting Types": 8,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Redefinition": 2
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13264,
        "completion_tokens": 997,
        "total_tokens": 14261
      },
      "time_cost": 18.71427273750305,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 46,
      "compile_success": false,
      "error_summary": {
        "total_count": 32,
        "stats": {
          "Other": 11,
          "Argument Count Mismatch": 3,
          "Conflicting Types": 8,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Redefinition": 2
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13266,
        "completion_tokens": 2638,
        "total_tokens": 15904
      },
      "time_cost": 62.84231162071228,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 47,
      "compile_success": false,
      "error_summary": {
        "total_count": 30,
        "stats": {
          "Other": 11,
          "Argument Count Mismatch": 3,
          "Conflicting Types": 8,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Redefinition": 2
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13235,
        "completion_tokens": 910,
        "total_tokens": 14145
      },
      "time_cost": 14.930580615997314,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 48,
      "compile_success": false,
      "error_summary": {
        "total_count": 30,
        "stats": {
          "Other": 11,
          "Argument Count Mismatch": 3,
          "Conflicting Types": 8,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Redefinition": 2
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13239,
        "completion_tokens": 1514,
        "total_tokens": 14753
      },
      "time_cost": 60.015297412872314,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 49,
      "compile_success": false,
      "error_summary": {
        "total_count": 30,
        "stats": {
          "Other": 11,
          "Argument Count Mismatch": 3,
          "Conflicting Types": 8,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Redefinition": 2
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13242,
        "completion_tokens": 734,
        "total_tokens": 13976
      },
      "time_cost": 11.24516773223877,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 50,
      "compile_success": false,
      "error_summary": {
        "total_count": 30,
        "stats": {
          "Other": 11,
          "Argument Count Mismatch": 3,
          "Conflicting Types": 8,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Redefinition": 2
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          },
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block uniquely matched and replaced."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 13236,
        "completion_tokens": 1657,
        "total_tokens": 14893
      },
      "time_cost": 60.92550802230835,
      "phase": "compile",
      "new_errors_introduced": 0
    }
  ],
  "enhanced_summary": {
    "tier": 3,
    "final_status": "compile_failed",
    "total_iterations": 50,
    "total_tokens": 745484,
    "total_time_seconds": 1559.74,
    "initial_state": {
      "error_count": 208,
      "error_types": {
        "Syntax Error": 64,
        "Undeclared Identifier": 65,
        "Other": 30,
        "Redefinition": 18,
        "Conflicting Types": 22,
        "Invalid Operands": 1,
        "Incompatible Pointer Type": 2,
        "Member Access Error": 6
      }
    },
    "tier3_metrics": {
      "oscillation": {
        "error_growth_rate": 0.102,
        "error_trajectory": [
          208,
          211,
          210,
          205,
          179,
          171,
          163,
          158,
          122,
          118,
          121,
          119,
          111,
          84,
          82,
          72,
          70,
          57,
          55,
          53,
          53,
          52,
          52,
          50,
          50,
          44,
          45,
          44,
          45,
          43,
          43,
          43,
          43,
          43,
          42,
          41,
          41,
          41,
          31,
          31,
          31,
          38,
          35,
          32,
          32,
          32,
          30,
          30,
          30,
          30
        ],
        "max_error_count": 211,
        "min_error_count": 30
      },
      "effort": {
        "initial_error_count": 208,
        "lowest_error_count": 30,
        "lowest_at_iteration": 47,
        "error_reduction": 178,
        "error_reduction_ratio": 0.8558
      },
      "error_evolution": {
        "initial_types": {
          "Syntax Error": 64,
          "Undeclared Identifier": 65,
          "Other": 30,
          "Redefinition": 18,
          "Conflicting Types": 22,
          "Invalid Operands": 1,
          "Incompatible Pointer Type": 2,
          "Member Access Error": 6
        },
        "final_types": {
          "Other": 11,
          "Argument Count Mismatch": 3,
          "Conflicting Types": 8,
          "Void Value Error": 5,
          "Invalid Operands": 1,
          "Redefinition": 2
        },
        "types_eliminated": [
          "Incompatible Pointer Type",
          "Member Access Error",
          "Syntax Error",
          "Undeclared Identifier"
        ],
        "types_introduced": [
          "Argument Count Mismatch",
          "Void Value Error"
        ]
      },
      "score": {
        "effort_score": 42.79,
        "stability_score": 44.9,
        "total_score": 87.69,
        "grade": "A"
      }
    }
  },
  "summary": {
    "total_unique_types": 11,
    "type_breakdown": {
      "Redefinition": {
        "initial_count": 18,
        "max_count": 20,
        "final_count": "unknown"
      },
      "Unknown Type": {
        "initial_count": 0,
        "max_count": 2,
        "final_count": "unknown"
      },
      "Other": {
        "initial_count": 30,
        "max_count": 31,
        "final_count": "unknown"
      },
      "Incompatible Pointer Type": {
        "initial_count": 2,
        "max_count": 2,
        "final_count": "unknown"
      },
      "Invalid Operands": {
        "initial_count": 1,
        "max_count": 1,
        "final_count": "unknown"
      },
      "Conflicting Types": {
        "initial_count": 22,
        "max_count": 26,
        "final_count": "unknown"
      },
      "Syntax Error": {
        "initial_count": 64,
        "max_count": 69,
        "final_count": "unknown"
      },
      "Argument Count Mismatch": {
        "initial_count": 0,
        "max_count": 28,
        "final_count": "unknown"
      },
      "Void Value Error": {
        "initial_count": 0,
        "max_count": 7,
        "final_count": "unknown"
      },
      "Undeclared Identifier": {
        "initial_count": 65,
        "max_count": 65,
        "final_count": "unknown"
      },
      "Member Access Error": {
        "initial_count": 6,
        "max_count": 12,
        "final_count": "unknown"
      }
    }
  }
}
```

### 3.3 Semantic Fidelity Evaluation

*No semantic analysis report found.*

