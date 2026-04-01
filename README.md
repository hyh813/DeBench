# BinBench

BinBench 是一个面向二进制反编译结果评估的自动化基准框架，覆盖三个阶段：

1. Step 1: Readability
2. Step 2: Syntactic Correctness / Recompilation
3. Step 3: Semantic Fidelity

当前仓库保留了完整的核心代码、基准源码、构建产物、反编译产物和三套主结果树，便于复现与二次分析；论文工程、历史运维工具、内部接手材料和非核心分析脚本已移除。

## 目录概览

```text
bindebench/
├── src/                     # 基准源码
├── build/                   # 原始二进制与 successful_builds.json
├── decompiled/              # 各反编译器输出
├── evaluator/               # Step1 / Step2 / Step3 核心实现
├── scripts/                 # 构建、单任务流水线、批量评估与必要辅助脚本
├── config/                  # LLM 配置模板（通过环境变量注入 key）
├── prompt/                  # Step1 提示词
├── results_glm_v4_full/     # GLM 主结果树
├── results_qwen_v4_full/    # Qwen 主结果树
├── results_minimax_v4_full/ # MiniMax 主结果树
├── docs/                    # 核心文档
├── binbench-*.yaml          # Lima/VM 配置
└── README.md
```

更细的目录说明见 [docs/PROJECT_STRUCTURE.md](docs/PROJECT_STRUCTURE.md)。脚本逐项说明见 [scripts/README.md](scripts/README.md)。

## 快速开始

### 1. 配置 LLM

仓库不包含真实密钥。先配置环境变量，再根据需要调整 [config/llm_config.json](config/llm_config.json) 和 [config/llm_key_inventory.json](config/llm_key_inventory.json)。

示例：

```bash
export BINBENCH_GLM_API_KEY=...
export BINBENCH_DASHSCOPE_API_KEY=...
export BINBENCH_MINIMAX_API_KEY=...
```

说明见 [docs/LLM_CONFIGURATION_GUIDE.md](docs/LLM_CONFIGURATION_GUIDE.md)。

### 2. 构建原始二进制

```bash
podman build -t cross-compiler -f scripts/Dockerfile .
podman run --platform linux/amd64 --rm -v "$(pwd):/work" cross-compiler \
  python3 scripts/build_in_docker.py
```

### 3. 跑单个 task 的完整流水线

```bash
python3 scripts/run_single_task.py \
  src/7.c \
  decompiled/retdec_out/arm32/7/7_gcc_O2_no_g.c \
  --arch arm32 \
  --original-bin build/arm32/7/7_gcc_O2_no_g \
  --llm-profile qwen3.5-plus \
  --results-dir runs/qwen_demo
```

这条命令会在宿主机执行 Step1，然后进入对应 Lima 实例执行 Step2 / Step3。

### 4. 批量评估

推荐入口是 launcher：

```bash
python3 scripts/launch_auto_eval.py \
  --llm-profile glm_official \
  --arch arm64 \
  --results-dir results_glm_v4_full \
  --retry
```

调用链：

```text
launch_auto_eval.py
  -> auto_eval.py
    -> host orchestration helpers (scripts/pipeline_host.py)
      -> host Step1 (evaluator/readability/eval_readability.py)
    -> guest Step2/3 (scripts/run_pipeline_in_docker.py)
```

### 5. 批量评估示例

```bash
python3 scripts/auto_eval.py \
  --arch arm32 \
  --src 7 \
  --bin-name 7_gcc_O2_no_g \
  --decompiler retdec \
  --llm-profile qwen3.5-plus \
  --results-dir runs/qwen_batch
```

```bash
python3 scripts/auto_eval.py \
  --arch arm32 \
  --src 7 \
  --bin-name 7_gcc_O2_no_g \
  --decompiler retdec \
  --llm-profile minimax \
  --results-dir runs/minimax_batch
```

补充说明：

- `scripts/pipeline_host.py` 是内部共享 helper，不是面向读者直接调用的 CLI；`run_single_task.py` 和 `auto_eval.py` 都通过它复用宿主机 Step1、guest preflight 和 host→guest 环境变量转发逻辑。
- 带过滤条件的 `auto_eval.py` 运行适合先验证单个 task；如果要做大规模整库跑数，仍建议使用 `launch_auto_eval.py` 或带 `--retry` 的 `auto_eval.py`。

## 结果说明

- `results_{llm}_v4_full/` 是当前的主结果树，Step1 / Step2 / Step3 共用同一 task 目录。
- Step1 的历史独立结果已并入三套主结果树的 `readability/` 子目录，不再保留单独的 Step1 归档目录。
- 三套主结果树体积较大；`decompiled/` 也包含完整反编译产物，更适合研究复现和结果审查，不是轻量 demo。

## 文档入口

- [docs/PROJECT_STRUCTURE.md](docs/PROJECT_STRUCTURE.md)：目录和结果树结构
- [docs/BinBench 评估流水线使用文档.md](docs/BinBench%20评估流水线使用文档.md)：单 task 流水线
- [docs/AUTO_EVAL_IMPLEMENTATION.md](docs/AUTO_EVAL_IMPLEMENTATION.md)：批量评估主入口
- [docs/LLM_CONFIGURATION_GUIDE.md](docs/LLM_CONFIGURATION_GUIDE.md)：配置模板与 key 注入
- [docs/反编译可读性评估说明.md](docs/%E5%8F%8D%E7%BC%96%E8%AF%91%E5%8F%AF%E8%AF%BB%E6%80%A7%E8%AF%84%E4%BC%B0%E8%AF%B4%E6%98%8E.md)：Step1 指标与结果
- [docs/Step2 评估指标说明.md](docs/Step2%20%E8%AF%84%E4%BC%B0%E6%8C%87%E6%A0%87%E8%AF%B4%E6%98%8E.md)：Step2 指标
- [docs/SEMANTIC_EVALUATION_DETAILS.md](docs/SEMANTIC_EVALUATION_DETAILS.md)：Step3 实现与产物
