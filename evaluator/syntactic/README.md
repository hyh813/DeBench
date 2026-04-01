# Step2: Syntactic Correctness / Recompilation

本目录是 BinBench 的 Step2 实现。

公开版只保留当前主线所需的最新实现，不再保留历史迭代入口。

## 主入口

- `auto_fixer_v3.py`

它负责完整的 LLM 修复循环：

```text
反编译代码
  -> 尝试编译 / 链接
  -> 解析错误
  -> 调用 LLM 生成修复
  -> 应用补丁
  -> 再次编译 / 链接
```

## 关键依赖

- `utils/compiler.py`
  - 解析和复用原始构建命令，执行编译与链接
- `utils/error_parser_v3.py`
  - 提取编译/链接错误并做聚合
- `utils/file_manager_v3.py`
  - 备份源码、应用块级编辑补丁
- `utils/logger_v2.py`
  - 记录修复历史并输出 `repair_trace.json`
- `utils/llm_client.py`
  - 统一 LLM 调用接口
- `utils/trace_repair.py`
  - 历史修复轨迹标准化工具

## 主要输出

每个 task 的 Step2 输出位于：

```text
results_<llm>_v4_full/<arch>/<src>/<bin_name>/<decompiler>/syntactic/
```

核心产物：

- `repair_trace.json`
- `compile_checkpoint.json`
- `fix_<bin_name>.c`
- `bin/<bin_name>_fixed`

## 对外公开版说明

- 历史入口 `auto_fixer.py` / `auto_fixer_v2.py` 已移除
- 当前公开版只维护 `auto_fixer_v3.py` 这一条主线
- 如果你从 `scripts/run_pipeline_in_docker.py` 或 `scripts/auto_eval.py` 进入，本目录会被自动调用，无需单独运行
