# BinBench 评估流水线使用文档

本文档描述如何运行单个 task 的完整流水线。

## 1. 入口脚本

单 task 主入口：

- `scripts/run_single_task.py`

执行边界：

1. 宿主机 Step1: Readability
2. guest Step2: Syntactic Correctness / Recompilation
3. guest Step3: Semantic Fidelity

## 2. 基本命令

```bash
python3 scripts/run_single_task.py \
  src/7.c \
  decompiled/retdec_out/arm32/7/7_gcc_O2_no_g.c \
  --arch arm32 \
  --original-bin build/arm32/7/7_gcc_O2_no_g \
  --results-dir runs/qwen_demo \
  --llm-profile qwen3.5-plus
```

参数说明：

- 第一个位置参数：原始源码
- 第二个位置参数：反编译源码
- `--arch`：目标架构，用于选择 Lima 实例
- `--original-bin`：原始二进制
- `--results-dir`：目标结果树根目录
- `--llm-profile`：当前使用的 profile

## 3. 常用开关

### `--restart`

强制重跑当前 task，不复用已有 Step2 成果。

### `--skip-readability`

跳过宿主机 Step1，仅在调试时使用。

### `--skip-step3`

只执行 Step1 + Step2，不执行 Step3。

### `--step3-only`

要求目标 task 已有成功的 Step2 产物，只补跑 Step3。

## 4. 输出目录

运行后结果写入：

```text
results_<llm>_v4_full/<arch>/<src>/<bin_name>/<decompiler>/
```

其中包含：

- `readability/`
- `syntactic/`
- `semantic/`
- `report.md`

## 5. 结果判读

- `readability/test_results_*.json`：Step1 结构化结果
- `syntactic/repair_trace.json`：Step2 迭代修复轨迹
- `semantic/result_metrics.json`：Step3 指标汇总
- `report.md`：单 task 汇总报告

## 6. 环境要求

- 对应架构的 Lima 实例已启动
- 若 guest 时钟漂移，需要先手动同步时间
- `config/` 中的 profile 与 key inventory 已配置
- 必要时已完成 `scripts/setup_lima_*.sh`
