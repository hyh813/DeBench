# BinBench Evaluation Report

**Generated:** 2026-03-08 17:39:10

## 1. Test Object

| Attribute | Value |
|-----------|-------|
| Source | `src/4.c` |
| Decompiled | `decompiled/ida_out/arm64/4/4_clang_O0_no_g.c` |
| Decompiler | IDA |
| Architecture | arm64 |
| Compiler | clang |
| Optimization | O0 |
| Debug | no |

## 2. Evaluation Results

| Dimension | Status |
|-----------|--------|
| Readability | ✅ Completed |
| Syntactic | ✅ Compiled |
| Semantic | ⏭ Skipped (--skip-step3) |

## 3. Detailed Results

### 3.1 Readability Evaluation

*No readability results found.*

### 3.2 Syntactic Correctness Evaluation

#### Repair Trace Log

```json
{
  "file_name": "results_minimax_v4_full/arm64/4/4_clang_O0_no_g/ida/syntactic/fix_4_clang_O0_no_g.c",
  "total_iterations": 15,
  "successful_tool_calls": 18,
  "final_status": "success",
  "history": [
    {
      "iteration": 1,
      "compile_success": false,
      "error_summary": {
        "total_count": 48,
        "stats": {
          "Implicit Function Declaration": 10,
          "Unknown Type": 2,
          "Other": 11,
          "Undeclared Identifier": 22,
          "Incompatible Pointer Type": 2,
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
        "prompt_tokens": 6992,
        "completion_tokens": 628,
        "total_tokens": 7620
      },
      "time_cost": 16.793496131896973,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 2,
      "compile_success": false,
      "error_summary": {
        "total_count": 45,
        "stats": {
          "Implicit Function Declaration": 5,
          "Unknown Type": 2,
          "Incompatible Pointer Type": 4,
          "Other": 11,
          "Undeclared Identifier": 22,
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
        "prompt_tokens": 7082,
        "completion_tokens": 380,
        "total_tokens": 7462
      },
      "time_cost": 14.133502006530762,
      "phase": "compile",
      "new_errors_introduced": 2
    },
    {
      "iteration": 3,
      "compile_success": false,
      "error_summary": {
        "total_count": 44,
        "stats": {
          "Implicit Function Declaration": 4,
          "Unknown Type": 2,
          "Incompatible Pointer Type": 4,
          "Other": 11,
          "Undeclared Identifier": 22,
          "Syntax Error": 1
        },
        "phase": "compile"
      },
      "result": {
        "tool_results": [
          {
            "call": "edit_code_block",
            "success": true,
            "msg": "Code block matched (ignoring whitespace/blank lines) and replaced near line 190."
          }
        ]
      },
      "token_usage": {
        "prompt_tokens": 7116,
        "completion_tokens": 766,
        "total_tokens": 7882
      },
      "time_cost": 16.186278820037842,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 4,
      "compile_success": false,
      "error_summary": {
        "total_count": 42,
        "stats": {
          "Implicit Function Declaration": 4,
          "Other": 11,
          "Undeclared Identifier": 22,
          "Incompatible Pointer Type": 3,
          "Unknown Type": 1,
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
        "prompt_tokens": 7139,
        "completion_tokens": 552,
        "total_tokens": 7691
      },
      "time_cost": 14.29343032836914,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 5,
      "compile_success": false,
      "error_summary": {
        "total_count": 42,
        "stats": {
          "Implicit Function Declaration": 4,
          "Other": 11,
          "Undeclared Identifier": 22,
          "Incompatible Pointer Type": 3,
          "Unknown Type": 1,
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
        "prompt_tokens": 7167,
        "completion_tokens": 573,
        "total_tokens": 7740
      },
      "time_cost": 17.683107614517212,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 6,
      "compile_success": false,
      "error_summary": {
        "total_count": 39,
        "stats": {
          "Other": 11,
          "Undeclared Identifier": 22,
          "Incompatible Pointer Type": 2,
          "Implicit Function Declaration": 3,
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
        "prompt_tokens": 7232,
        "completion_tokens": 1455,
        "total_tokens": 8687
      },
      "time_cost": 38.11618423461914,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 7,
      "compile_success": false,
      "error_summary": {
        "total_count": 32,
        "stats": {
          "Other": 11,
          "Incompatible Pointer Type": 2,
          "Undeclared Identifier": 15,
          "Implicit Function Declaration": 3,
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
        "prompt_tokens": 7394,
        "completion_tokens": 1224,
        "total_tokens": 8618
      },
      "time_cost": 25.527791261672974,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 8,
      "compile_success": false,
      "error_summary": {
        "total_count": 19,
        "stats": {
          "Other": 11,
          "Incompatible Pointer Type": 2,
          "Undeclared Identifier": 4,
          "Syntax Error": 1,
          "Implicit Function Declaration": 1
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
        "prompt_tokens": 7744,
        "completion_tokens": 954,
        "total_tokens": 8698
      },
      "time_cost": 27.52804684638977,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 9,
      "compile_success": false,
      "error_summary": {
        "total_count": 12,
        "stats": {
          "Other": 10,
          "Incompatible Pointer Type": 2
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
        "prompt_tokens": 7821,
        "completion_tokens": 1432,
        "total_tokens": 9253
      },
      "time_cost": 30.478965044021606,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 10,
      "compile_success": false,
      "error_summary": {
        "total_count": 8,
        "stats": {
          "Incompatible Pointer Type": 3,
          "Other": 5
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
        "prompt_tokens": 7859,
        "completion_tokens": 1164,
        "total_tokens": 9023
      },
      "time_cost": 19.835426092147827,
      "phase": "compile",
      "new_errors_introduced": 1
    },
    {
      "iteration": 11,
      "compile_success": false,
      "error_summary": {
        "total_count": 7,
        "stats": {
          "Incompatible Pointer Type": 2,
          "Other": 5
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
        "prompt_tokens": 7853,
        "completion_tokens": 1275,
        "total_tokens": 9128
      },
      "time_cost": 31.5026113986969,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 12,
      "compile_success": false,
      "error_summary": {
        "total_count": 7,
        "stats": {
          "Incompatible Pointer Type": 2,
          "Other": 5
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
        "prompt_tokens": 7890,
        "completion_tokens": 1339,
        "total_tokens": 9229
      },
      "time_cost": 34.83019971847534,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 13,
      "compile_success": false,
      "error_summary": {
        "total_count": 2,
        "stats": {
          "Incompatible Pointer Type": 2
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
        "prompt_tokens": 7834,
        "completion_tokens": 677,
        "total_tokens": 8511
      },
      "time_cost": 14.963927030563354,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 14,
      "compile_success": false,
      "error_summary": {
        "total_count": 1,
        "stats": {
          "Incompatible Pointer Type": 1
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
        "prompt_tokens": 7788,
        "completion_tokens": 665,
        "total_tokens": 8453
      },
      "time_cost": 22.578004121780396,
      "phase": "compile",
      "new_errors_introduced": 0
    },
    {
      "iteration": 15,
      "compile_success": true,
      "error_summary": {
        "total_count": 0,
        "stats": {},
        "phase": "linker"
      },
      "result": {
        "msg": "Success"
      },
      "token_usage": null,
      "time_cost": 0.0,
      "phase": "linker",
      "new_errors_introduced": 0
    }
  ],
  "enhanced_summary": {
    "tier": 1,
    "final_status": "success",
    "total_iterations": 15,
    "total_tokens": 117995,
    "total_time_seconds": 324.45,
    "initial_state": {
      "error_count": 48,
      "error_types": {
        "Implicit Function Declaration": 10,
        "Unknown Type": 2,
        "Other": 11,
        "Undeclared Identifier": 22,
        "Incompatible Pointer Type": 2,
        "Syntax Error": 1
      }
    },
    "tier1_metrics": {
      "compile_phase": {
        "iterations_to_first_compile_success": 15
      },
      "linker_phase": {
        "iterations_from_first_compile_to_success": 0
      },
      "stability": {
        "error_growth_rate": 0.0,
        "phase_regression_count": 0,
        "total_new_errors_introduced": 3
      },
      "score": {
        "compile_efficiency_score": 38.73,
        "linker_efficiency_score": 35.0,
        "stability_score": 20.0,
        "total_score": 93.73,
        "grade": "A+"
      }
    }
  },
  "summary": {
    "total_unique_types": 6,
    "type_breakdown": {
      "Undeclared Identifier": {
        "initial_count": 22,
        "max_count": 22,
        "final_count": 0
      },
      "Unknown Type": {
        "initial_count": 2,
        "max_count": 2,
        "final_count": 0
      },
      "Incompatible Pointer Type": {
        "initial_count": 2,
        "max_count": 4,
        "final_count": 0
      },
      "Other": {
        "initial_count": 11,
        "max_count": 11,
        "final_count": 0
      },
      "Syntax Error": {
        "initial_count": 1,
        "max_count": 1,
        "final_count": 0
      },
      "Implicit Function Declaration": {
        "initial_count": 10,
        "max_count": 10,
        "final_count": 0
      }
    }
  }
}
```

### 3.3 Semantic Fidelity Evaluation

# Trace Analysis Report

## Executive Summary
| Metric | Original | Decompiled |
|--------|----------|------------|
| Total Function Calls | 67 | 9 |
| Perfect Matches | 8 | - |
| **Similarity Score** | **11.9%** | - |

## 1. Input/Output Comparison
Compares arguments, return values, and captured stdout (printf).

| Depth | Function | Args | Ret (Orig) | Ret (Decomp) | Print (Orig) | Print (Decomp) | Status |
|-------|----------|------|------------|--------------|--------------|----------------|--------|
| 0 | `test_calling_conventions` | (4) 1, -429643256, -429643240... | 44 | N/A | - | - | ⚠️ Ret Diff |
| 1 | `call_cdecl` | (4) 33, 1094126744, 0... | 15 | 15 | - | - | ✅ |
| 1 | `call_stdcall` | (4) 15, 1094126744, 0... | 50 | 50 | - | - | ✅ |
| 1 | `call_fastcall` | (4) 15, 1094126744, 0... | 6 | 6 | - | - | ✅ |
| 1 | `call_thiscall` | (4) 14, 1094126744, 0... | 15 | 15 | - | - | ✅ |
| 1 | `call_arm_aapcs` | (4) 15, 1094126744, 0... | 15 | 15 | - | - | ✅ |
| 1 | `call_mips` | (4) 15, 1094126744, 0... | 100 | 100 | - | - | ✅ |
| 1 | `call_amd64_sysv` | (4) 16, 1094126744, 0... | 21 | 21 | - | - | ✅ |
| 2 | `amd64_sysv_func` | (4) 1, 2, 3... | 21 | 21 | - | - | ✅ |
| 1 | `call_ms_x64` | (4) 15, 1094126744, 0... | 15 | N/A | - | - | ❌ Missing |
| 2 | `ms_x64_func` | (4) 1, 2, 3... | 15 | N/A | - | - | ❌ Missing |
| 1 | `call_vectorcall` | (4) 15, 1094126744, 0... | 10 | N/A | - | - | ❌ Missing |
| 1 | `mixed_conventions_test` | (4) 15, 1094126744, 0... | 33 | N/A | - | - | ❌ Missing |
| 1 | `varargs_func` | (4) 5, 1, 2... | 15 | N/A | - | - | ❌ Missing |
| 1 | `func_no_args` | (4) 39, 1094126744, 0... | 42 | N/A | - | - | ❌ Missing |
| 1 | `func_many_args` | (4) 1, 2, 3... | 36 | N/A | - | - | ❌ Missing |
| 1 | `func_mixed_args` | (4) 10, -281600269, 100... | 117 | N/A | - | - | ❌ Missing |
| 1 | `func_struct_byval` | (4) -429643992, -429643856, 128... | 136 | N/A | - | - | ❌ Missing |
| 1 | `func_struct_byptr` | (4) -429644000, 1094126744, 0... | 50 | N/A | - | - | ❌ Missing |
| 0 | `test_parameter_passing` | (4) 44, 1094126744, 0... | 15 | N/A | - | - | ❌ Missing |
| 1 | `call_by_value_int` | (4) 33, 1094126744, 0... | 15 | N/A | - | - | ❌ Missing |
| 2 | `param_by_value_int` | (4) 5, 1094126744, 0... | 10 | N/A | - | - | ❌ Missing |
| 1 | `call_by_value_ptr` | (4) 16, 1094126744, 0... | 11 | N/A | - | - | ❌ Missing |
| 2 | `param_by_value_ptr` | (4) -429643700, 1094126744, 0... | 1 | N/A | - | - | ❌ Missing |
| 1 | `call_array_decay` | (4) 16, 1094126744, 0... | 8 | N/A | - | - | ❌ Missing |
| 2 | `param_array_decay` | (4) -429643736, 10, 40... | 8 | N/A | - | - | ❌ Missing |
| 1 | `call_string_param` | (4) 15, 1094126744, 0... | 173 | N/A | - | - | ❌ Missing |
| 2 | `param_string` | (4) -281600135, 1094126744, 0... | 173 | N/A | - | - | ❌ Missing |
| 1 | `call_ptr_array` | (4) 17, 1094126744, 0... | 300 | N/A | - | - | ❌ Missing |
| 2 | `param_ptr_array` | (4) -429643728, 3, 0... | 300 | N/A | - | - | ❌ Missing |
| 1 | `call_varargs_param` | (4) 17, 1094126744, 0... | 100 | N/A | - | - | ❌ Missing |
| 2 | `param_varargs` | (4) 4, 10, 20... | 100 | N/A | - | - | ❌ Missing |
| 1 | `call_func_ptr_param` | (4) 17, 1094126744, 0... | 20 | N/A | - | - | ❌ Missing |
| 2 | `param_func_ptr` | (4) -281602868, 5, 0... | 20 | N/A | - | - | ❌ Missing |
| 3 | `callback_func` | (4) 5, 5, 0... | 10 | N/A | - | - | ❌ Missing |
| 1 | `call_double_ptr` | (4) 16, 1094126744, 0... | 21 | N/A | - | - | ❌ Missing |
| 2 | `param_double_ptr` | (4) -429643712, 20, 0... | 1 | N/A | - | - | ❌ Missing |
| 1 | `call_complex_cast` | (4) 16, 1094126744, 0... | 305419896 | N/A | - | - | ❌ Missing |
| 2 | `param_complex_cast` | (4) -429643712, 1, 0... | 300 | N/A | - | - | ❌ Missing |
| 2 | `param_complex_cast` | (4) -429643700, 0, 0... | 305419896 | N/A | - | - | ❌ Missing |
| 1 | `call_struct_byval` | (4) 23, 1094126744, 0... | 15 | N/A | - | - | ❌ Missing |
| 2 | `param_struct_byval` | (4) -429643828, -429643760, 64... | 15 | N/A | - | - | ❌ Missing |
| 1 | `call_order_dep` | (4) 16, 1094126744, 0... | 3 | N/A | - | - | ❌ Missing |
| 2 | `param_order_dep` | (4) 1, 2, 0... | 3 | N/A | - | - | ❌ Missing |
| 0 | `test_return_values` | (4) 15, 1094126744, 0... | 27 | N/A | - | - | ❌ Missing |
| 1 | `call_ret_basic` | (4) 30, 1094126744, 0... | 42 | N/A | - | - | ❌ Missing |
| 2 | `ret_basic_type` | (4) 21, 1094126744, 0... | 42 | N/A | - | - | ❌ Missing |
| 1 | `call_ret_pointer` | (4) 27, 1094126744, 0... | 20 | N/A | - | - | ❌ Missing |
| 2 | `ret_pointer` | (4) -429643712, 1094126744, 0... | -429643708 | N/A | - | - | ❌ Missing |
| 1 | `call_ret_small_struct` | (4) 27, 1094126744, 0... | 7 | N/A | - | - | ❌ Missing |
| 2 | `ret_small_struct` | (4) 3, 4, 0... | 3 | N/A | - | - | ❌ Missing |
| 1 | `call_ret_large_struct` | (4) 25, 1094126744, 0... | 215 | N/A | - | - | ❌ Missing |
| 2 | `ret_large_struct` | (4) 100, 1094126744, 0... | 100 | N/A | - | - | ❌ Missing |
| 1 | `call_ret_func_ptr` | (4) 29, 1094126744, 0... | 10 | N/A | - | - | ❌ Missing |
| 2 | `ret_func_ptr` | (4) 1, 1094126744, 0... | -281601556 | N/A | - | - | ❌ Missing |
| 2 | `func_b` | (4) 5, 1094126744, 0... | 10 | N/A | - | - | ❌ Missing |
| 1 | `call_ret_opaque` | (4) 27, 1094126744, 0... | 100 | N/A | - | - | ❌ Missing |
| 2 | `ret_opaque_handle` | (4) 0, 1094126744, 0... | -281530288 | N/A | - | - | ❌ Missing |
| 1 | `call_ret_complex_expr` | (4) 29, 1094126744, 0... | 40 | N/A | - | - | ❌ Missing |
| 2 | `ret_complex_expr` | (4) 5, 3, 10... | 20 | N/A | - | - | ❌ Missing |
| 2 | `ret_complex_expr` | (4) 3, 5, 10... | 20 | N/A | - | - | ❌ Missing |
| 1 | `call_ret_multi_branch` | (4) 27, 1094126744, 0... | 60 | N/A | - | - | ❌ Missing |
| 2 | `ret_multi_branch` | (4) 0, 1094126744, 0... | 10 | N/A | - | - | ❌ Missing |
| 2 | `ret_multi_branch` | (4) 1, 1094126744, 0... | 20 | N/A | - | - | ❌ Missing |
| 2 | `ret_multi_branch` | (4) 2, 1094126744, 0... | 30 | N/A | - | - | ❌ Missing |
| 1 | `call_ret_void` | (4) 27, 1094126744, 0... | 21 | N/A | - | - | ❌ Missing |
| 2 | `ret_void` | (4) 7, -429643700, 0... | 7 | N/A | - | - | ❌ Missing |

## 2. Call Sequence Visualization
Visualizes control flow. Indentation represents call stack depth.

| Seq | Depth | Call Tree | Status |
|-----|-------|-----------|--------|
| 0 | 0 | `test_calling_conventions` | ✅ Match |
| 1 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_cdecl` | ✅ Match |
| 2 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_stdcall` | ✅ Match |
| 3 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_fastcall` | ✅ Match |
| 4 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_thiscall` | ✅ Match |
| 5 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_arm_aapcs` | ✅ Match |
| 6 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_mips` | ✅ Match |
| 7 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_amd64_sysv` | ✅ Match |
| 8 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `amd64_sysv_func` | ✅ Match |
| 9 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_ms_x64` | ❌ Missing in Decomp |
| 10 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `ms_x64_func` | ❌ Missing in Decomp |
| 11 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_vectorcall` | ❌ Missing in Decomp |
| 12 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `mixed_conventions_test` | ❌ Missing in Decomp |
| 13 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `varargs_func` | ❌ Missing in Decomp |
| 14 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `func_no_args` | ❌ Missing in Decomp |
| 15 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `func_many_args` | ❌ Missing in Decomp |
| 16 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `func_mixed_args` | ❌ Missing in Decomp |
| 17 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `func_struct_byval` | ❌ Missing in Decomp |
| 18 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `func_struct_byptr` | ❌ Missing in Decomp |
| 19 | 0 | `test_parameter_passing` | ❌ Missing in Decomp |
| 20 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_by_value_int` | ❌ Missing in Decomp |
| 21 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `param_by_value_int` | ❌ Missing in Decomp |
| 22 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_by_value_ptr` | ❌ Missing in Decomp |
| 23 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `param_by_value_ptr` | ❌ Missing in Decomp |
| 24 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_array_decay` | ❌ Missing in Decomp |
| 25 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `param_array_decay` | ❌ Missing in Decomp |
| 26 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_string_param` | ❌ Missing in Decomp |
| 27 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `param_string` | ❌ Missing in Decomp |
| 28 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_ptr_array` | ❌ Missing in Decomp |
| 29 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `param_ptr_array` | ❌ Missing in Decomp |
| 30 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_varargs_param` | ❌ Missing in Decomp |
| 31 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `param_varargs` | ❌ Missing in Decomp |
| 32 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_func_ptr_param` | ❌ Missing in Decomp |
| 33 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `param_func_ptr` | ❌ Missing in Decomp |
| 34 | 3 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `callback_func` | ❌ Missing in Decomp |
| 35 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_double_ptr` | ❌ Missing in Decomp |
| 36 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `param_double_ptr` | ❌ Missing in Decomp |
| 37 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_complex_cast` | ❌ Missing in Decomp |
| 38 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `param_complex_cast` | ❌ Missing in Decomp |
| 39 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `param_complex_cast` | ❌ Missing in Decomp |
| 40 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_struct_byval` | ❌ Missing in Decomp |
| 41 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `param_struct_byval` | ❌ Missing in Decomp |
| 42 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_order_dep` | ❌ Missing in Decomp |
| 43 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `param_order_dep` | ❌ Missing in Decomp |
| 44 | 0 | `test_return_values` | ❌ Missing in Decomp |
| 45 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_ret_basic` | ❌ Missing in Decomp |
| 46 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `ret_basic_type` | ❌ Missing in Decomp |
| 47 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_ret_pointer` | ❌ Missing in Decomp |
| 48 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `ret_pointer` | ❌ Missing in Decomp |
| 49 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_ret_small_struct` | ❌ Missing in Decomp |
| 50 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `ret_small_struct` | ❌ Missing in Decomp |
| 51 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_ret_large_struct` | ❌ Missing in Decomp |
| 52 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `ret_large_struct` | ❌ Missing in Decomp |
| 53 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_ret_func_ptr` | ❌ Missing in Decomp |
| 54 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `ret_func_ptr` | ❌ Missing in Decomp |
| 55 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `func_b` | ❌ Missing in Decomp |
| 56 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_ret_opaque` | ❌ Missing in Decomp |
| 57 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `ret_opaque_handle` | ❌ Missing in Decomp |
| 58 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_ret_complex_expr` | ❌ Missing in Decomp |
| 59 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `ret_complex_expr` | ❌ Missing in Decomp |
| 60 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `ret_complex_expr` | ❌ Missing in Decomp |
| 61 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_ret_multi_branch` | ❌ Missing in Decomp |
| 62 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `ret_multi_branch` | ❌ Missing in Decomp |
| 63 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `ret_multi_branch` | ❌ Missing in Decomp |
| 64 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `ret_multi_branch` | ❌ Missing in Decomp |
| 65 | 1 | &nbsp;&nbsp;&nbsp;&nbsp;↳ `call_ret_void` | ❌ Missing in Decomp |
| 66 | 2 | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;↳ `ret_void` | ❌ Missing in Decomp |

## 3. Deep Data Flow Analysis (Registers)
Values of key registers at function entry.

| Seq | Function | Register Values (Original) | Register Values (Decompiled) |
|-----|----------|-----------------------------|------------------------------|
| 0 | `test_calling_conventions` | **x0**=0x1 **x1**=0xffffe6642a08 **x2**=0xffffe6642a18 x3=0xbe84ef371d54 x4=0x5d35126ab32283aa x5=0xea8741311d90 | **x0**=0x1 **x1**=0xffffc845ca18 **x2**=0xffffc845ca28 x3=0xc07f79e41f98 x4=0x9609bdbb9a4387ef x5=0xf53445e81d90 |
| 1 | `call_cdecl` | **x0**=0x21 **x1**=0xea8741370c98 **x2**=0x0 x3=0x0 x4=0xea8741367f00 x5=0xbe851f563451 | **x0**=0x19 **x1**=0xf53445eeac98 **x2**=0x0 x3=0x0 x4=0xf53445ee1f00 x5=0xc07fa77eb449 |
| 2 | `call_stdcall` | **x0**=0xf **x1**=0xea8741370c98 **x2**=0x0 x3=0x0 x4=0xea8741367f00 x5=0xbe851f564430 | **x0**=0xf **x1**=0xf53445eeac98 **x2**=0x0 x3=0x0 x4=0xf53445ee1f00 x5=0xc07fa77ec430 |
| 3 | `call_fastcall` | **x0**=0xf **x1**=0xea8741370c98 **x2**=0x0 x3=0x0 x4=0xea8741367f00 x5=0xbe851f564430 | **x0**=0xf **x1**=0xf53445eeac98 **x2**=0x0 x3=0x0 x4=0xf53445ee1f00 x5=0xc07fa77ec430 |
| 4 | `call_thiscall` | **x0**=0xe **x1**=0xea8741370c98 **x2**=0x0 x3=0x0 x4=0xea8741367f00 x5=0xbe851f564430 | **x0**=0xe **x1**=0xf53445eeac98 **x2**=0x0 x3=0x0 x4=0xf53445ee1f00 x5=0xc07fa77ec430 |
| 5 | `call_arm_aapcs` | **x0**=0xf **x1**=0xea8741370c98 **x2**=0x0 x3=0x0 x4=0xea8741367f00 x5=0xbe851f564430 | **x0**=0xf **x1**=0xf53445eeac98 **x2**=0x0 x3=0x0 x4=0xf53445ee1f00 x5=0xc07fa77ec430 |
| 6 | `call_mips` | **x0**=0xf **x1**=0xea8741370c98 **x2**=0x0 x3=0x0 x4=0xea8741367f00 x5=0xbe851f564430 | **x0**=0xf **x1**=0xf53445eeac98 **x2**=0x0 x3=0x0 x4=0xf53445ee1f00 x5=0xc07fa77ec430 |
| 7 | `call_amd64_sysv` | **x0**=0x10 **x1**=0xea8741370c98 **x2**=0x0 x3=0x0 x4=0xea8741367f00 x5=0xbe851f564430 | **x0**=0x10 **x1**=0xf53445eeac98 **x2**=0x0 x3=0x0 x4=0xf53445ee1f00 x5=0xc07fa77ec430 |
| 8 | `amd64_sysv_func` | **x0**=0x1 **x1**=0x2 **x2**=0x3 x3=0x4 x4=0x5 x5=0x6 | **x0**=0x1 **x1**=0x2 **x2**=0x3 x3=0x4 x4=0x5 x5=0x6 |

## 5. Conclusion
❌ **Call Count Mismatch**: Original 67 vs Decompiled 9
   - Decompiled binary likely **CRASHED** or exited early at Seq 9.
## 6. Performance
**Total Instrumentation & Analysis Time**: 2.39s


