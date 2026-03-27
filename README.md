# BinBench
BindeBench 是一个系统化、自动化的二进制反编译评估基准测试框架。旨在从多维度对主流反编译工具（如 Ghidra, IDA Pro, RetDec 等）的输出质量进行细粒度且高保真的评估评测。本项目基于 LLM-as-Judge 和动态插桩技术，为逆向工程领域的学术研究和工程实践提供了一个可重复、高并发且公平的基准数据平台。

1. Step1: Readability
2. Step2: Syntactic Correctness / Recompilation
3. Step3: Semantic Fidelity
- **三大评估维度深度覆盖**：
1. **可读性 (Readability)**：基于多维度 LLM 打分
2. **语法正确性 (Syntactic Correctness)**：通过 LLM 感知的迭代编译修复流水线，测试反编译代码重编译率与修复成本。
3. **语义保真度 (Semantic Fidelity)**：结合 Frida 等动态插桩技术，进行基于运行时行为（I/O与内存状态）的功能等价性验证。


## 2. 项目当前结构

```text
bindebench/
├── src/                    # 测试源码
├── build/                  # 多架构原始二进制与 successful_builds.json
├── decompiled/             # 各反编译器输出
├── evaluator/              # Step1 / Step2 / Step3 核心实现
├── scripts/                # 构建、单次流水线、批量评估、环境初始化
├── config/                 # LLM profile 与 key inventory
├── results_*/              # 各 LLM 主评估结果目录
├── results_readability/    # 独立可读性评估结果
```


## 3. 三条主执行链路

### 3.1 构建原始二进制

```bash
podman build -t cross-compiler -f scripts/Dockerfile .
podman run --platform linux/amd64 --rm -v "$(pwd):/work" cross-compiler \
  python3 scripts/build_in_docker.py
```

原始二进制通常在容器环境中由 `scripts/build_in_docker.py` 完成，产物写入 `build/`，元数据写入 `build/successful_builds.json`。

### 3.2 单个 task 的完整流水线

```bash
limactl shell binbench python3 -u scripts/run_pipeline_in_docker.py \
  src/1.c \
  decompiled/ghidra_out/arm64/1/1_gcc_O0_g.c \
  --original-bin build/arm64/1/1_gcc_O0_g
```

这条链路适合：

- 单个 case 调试
- 验证 Step2 / Step3 行为
- 复现具体问题


### 3.3 批量自动评估

推荐入口是 launcher，而不是直接手工拼 `LLM_KEY_INDEX`：

```bash
python3 scripts/launch_auto_eval.py \
  --llm-profile glm \
  --arch arm64 \
  --results-dir results \
  --skip-step3 \
  --retry
```

调用关系是：

```text
launch_auto_eval.py
  -> auto_eval.py
    -> run_pipeline_in_docker.py
```

## 4. 常用入口命令

### 4.1 启动批量 Step2 compilability评估

```bash
python3 scripts/launch_auto_eval.py \
  --llm-profile glm_official \
  --arch arm32 \
  --results-dir results_glm_v4_full \
  --skip-step3 \
  --retry
```

### 9.2 独立跑可读性

```bash
python3 scripts/auto_eval_readability.py
```
