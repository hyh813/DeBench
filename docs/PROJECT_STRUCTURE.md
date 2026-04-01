# 项目结构说明

本文档只描述当前仍然保留的主目录、核心文件和结果树组织方式。

## 1. 顶层目录

```text
bindebench/
├── src/                       # 基准源码
├── build/                     # 原始二进制与 successful_builds.json
├── decompiled/                # 各反编译器输出
├── evaluator/                 # Step1 / Step2 / Step3 核心实现
├── scripts/                   # 构建、单任务流水线、批量评估脚本
├── config/                    # LLM 配置模板
├── prompt/                    # Step1 提示词
├── results_glm_v4_full/       # GLM 主结果树
├── results_qwen_v4_full/      # Qwen 主结果树
├── results_minimax_v4_full/   # MiniMax 主结果树
├── docs/                      # 核心文档
├── binbench-arm32.yaml
├── binbench-x64.yaml
├── binbench-x86.yaml
└── README.md
```

## 2. 数据层

### `src/`

基准源码入口。当前保留：

- `1.c`
- `2.c`
- `3.c`
- `3-3_extern_defs.c`
- `4.c`
- `5-1.cpp`
- `5-23.c`
- `6.c`
- `7.c`

说明：

- `3.c` 与 `3-3_extern_defs.c` 是多源文件 case。
- `5-1.cpp` 是唯一的 C++ case。

### `build/`

保存原始二进制与构建元数据。

关键文件：

- `build/successful_builds.json`

常见路径：

```text
build/<arch>/<src>/<bin_name>
```

### `decompiled/`

保存各反编译器产物。

主目录：

- `ghidra_out/`
- `ida_out/`
- `retdec_out/`
- `BinaryAI_out/`
- `angr_out/`

常见路径：

```text
decompiled/<tool>_out/<arch>/<src>/<bin_name>.c
```

## 3. 实现层

### `evaluator/readability/`

Step1 可读性评估实现。

核心文件：

- `eval_readability.py`

### `evaluator/syntactic/`

Step2 可重编译性评估实现。

这里只保留当前主线版本：

- `auto_fixer_v3.py`
- `utils/compiler.py`
- `utils/error_parser_v3.py`
- `utils/file_manager_v3.py`
- `utils/logger_v2.py`
- `utils/llm_client.py`
- `utils/trace_repair.py`

### `evaluator/semantic/`

Step3 语义保真实现。

核心文件：

- `run_instrumentation.py`
- `analyze_traces.py`
- `semantic_utils.py`
- `trace_format.py`
- `hook_trace.js`
- `case_stability_config.json`
- `target_functions.json`

## 4. 脚本层

主线脚本见 [scripts/README.md](../scripts/README.md)。

最常用的调用链：

```text
launch_auto_eval.py
  -> auto_eval.py
    -> pipeline_host.py
      -> evaluator/readability
    -> run_pipeline_in_docker.py
      -> evaluator/syntactic
      -> evaluator/semantic
```

## 5. 结果树

### `results_{llm}_v4_full/`

这是当前主结果树，三步评估共用同一 task 目录。

常见结构：

```text
results_<llm>_v4_full/
├── eval_state_arm64.json
├── eval_state_arm32.json
├── eval_state_x64.json
├── eval_state_x86.json
└── <arch>/<src>/<bin_name>/<decompiler>/
   ├── readability/
   ├── syntactic/
   ├── semantic/
   └── report.md
```

说明：

- `readability/` 中保存 Step1 的原始 `raw_response_*.txt` 和可直接消费的 `test_results_*.json`
- `syntactic/` 中保存 `repair_trace.json`、编译检查点、修复后的源码与二进制
- `semantic/` 中保存 stdout、trace、program json、metrics 和分析报告

## 6. 配置层

### `config/llm_config.json`

profile 模板，不包含真实密钥。

### `config/llm_key_inventory.json`

通过环境变量引用真实 key，例如：

- `${BINBENCH_GLM_API_KEY}`
- `${BINBENCH_DASHSCOPE_API_KEY}`
- `${BINBENCH_MINIMAX_API_KEY}`

详细说明见 [LLM_CONFIGURATION_GUIDE.md](LLM_CONFIGURATION_GUIDE.md)。
