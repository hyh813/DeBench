# Step2 评估指标说明

Step2 评估反编译代码在 LLM 修复后重新编译/链接的能力。

## 1. 核心流程

```text
反编译代码
  -> 编译 / 链接
  -> 错误解析
  -> LLM 生成修复
  -> 应用补丁
  -> 重试
```

主入口：

- `evaluator/syntactic/auto_fixer_v3.py`

## 2. 结果分层

Step2 结果最终落入三类：

- `success`
  - 完整编译并链接成功
- `linker_failed`
  - 编译通过，但链接仍失败
- `compile_failed`
  - 编译阶段仍失败

此外还可能出现运行级异常状态，例如：

- `context_exceeded`
- `tool_call_invalid`
- `api_error`

## 3. 主要产物

每个 task 的 Step2 输出位于：

```text
results_<llm>_v4_full/<arch>/<src>/<bin_name>/<decompiler>/syntactic/
```

关键文件：

- `repair_trace.json`
- `compile_checkpoint.json`
- `fix_<bin_name>.c`
- `bin/<bin_name>_fixed`

## 4. `repair_trace.json` 中常用字段

- `final_status`
- `total_iterations`
- `history`
- `initial_errors`
- `historical_lowest_errors`

`history` 中每轮通常包含：

- 当前阶段
- 错误摘要
- token 使用
- time_cost

## 5. 批量状态文件中的映射

`eval_state_{arch}.json` 中：

- `steps.syntactic.status` 对应 `final_status`
- `steps.syntactic.iterations` 对应迭代次数
- `steps.syntactic.tokens` / `time_cost` 由 `repair_trace.json` 汇总得到

## 6. 当前实现约定

- 这里只保留 `auto_fixer_v3.py` 主线，不再保留历史入口版本
- 结果树保留完整 Step2 产物，便于复现和二次分析
