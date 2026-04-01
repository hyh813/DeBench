# Step3 语义评估说明

Step3 评估修复后二进制与原始二进制的运行时语义一致性。

## 1. 主入口

主线调用链：

```text
scripts/run_pipeline_in_docker.py
  -> evaluator/semantic/run_instrumentation.py
  -> evaluator/semantic/analyze_traces.py
```

## 2. 评估层次

当前保留三层语义证据：

### Program-level

基于 stdout 中可解析的稳定测试 case 行比较：

- `exact`
- `partial`
- `fail`
- `unsupported`

### Function-level

基于可比较的函数调用证据：

- evidence available
- function I/O match

### Instruction-level

基于低层 token-sequence 诊断证据：

- evidence available
- similarity

说明：

- 这里的 instruction-level 是诊断型低层 token 序列相似度
- 它不是 full instruction-trace equivalence

## 3. 主要产物

每个 task 的 Step3 输出位于：

```text
results_<llm>_v4_full/<arch>/<src>/<bin_name>/<decompiler>/semantic/
```

关键文件：

- `program_original.json`
- `program_decompiled.json`
- `stdout_original.txt`
- `stdout_decompiled.txt`
- `trace_original.txt`
- `trace_decompiled.txt`
- `semantic_context.json`
- `result_metrics.json`
- `result_analysis.md`

## 4. `result_metrics.json`

这是 Step3 的核心结构化结果文件，通常包含：

- `execution_status`
- `quality_status`
- program-level 指标
- function-level 指标
- instruction-level 指标

## 5. 架构特殊说明

对 `arm32` 和 `x86`，Step3 运行时可能需要 native recompilation，以避免原始二进制与 guest runtime 的 glibc 不兼容问题。相关信息会记录在 `semantic_context.json` 中。

## 6. 说明

- 仓库保留完整 Step3 结果树
- 历史 rerun 目录与维护 supervisor 已移除
- 结果元数据中的本机绝对路径和历史 rerun 路径已清洗为当前结构可接受形式
