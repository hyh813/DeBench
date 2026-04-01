# scripts/ 说明

这里只保留主线运行所需脚本和少量必要辅助脚本。

## 核心入口

### `pipeline_host.py`

内部共享 helper，不是直接给读者手动调用的入口。负责：

- 在宿主机流式执行 Step1 readability
- 做 guest 时钟 / HTTPS preflight
- 统一 host→guest 环境变量转发与子进程流式输出

`run_single_task.py` 和 `auto_eval.py` 都依赖它，因此单任务和批量入口走的是同一套 host orchestration 逻辑。

### `run_single_task.py`

单 task 入口。负责：

- 在宿主机执行 Step1 readability
- 对目标 Lima 实例做 guest preflight
- 在 guest 中执行 Step2 / Step3

示例：

```bash
python3 scripts/run_single_task.py \
  src/7.c \
  decompiled/retdec_out/arm32/7/7_gcc_O2_no_g.c \
  --arch arm32 \
  --original-bin build/arm32/7/7_gcc_O2_no_g \
  --llm-profile qwen3.5-plus \
  --results-dir runs/qwen_demo
```

### `launch_auto_eval.py`

交互式批量评估入口。负责：

- 根据 `config/` 选择 profile
- 选择可用 key alias
- 启动 `auto_eval.py`

示例：

```bash
python3 scripts/launch_auto_eval.py \
  --llm-profile glm_official \
  --arch arm64 \
  --results-dir results_glm_v4_full \
  --retry
```

### `auto_eval.py`

7x24 批量评估主入口。现在的主线行为是：

- 宿主机执行 Step1 readability
- 对目标 guest 做时钟 / HTTPS preflight
- 在 Lima 中执行 Step2 / Step3

常见用法：

```bash
python3 scripts/auto_eval.py \
  --arch arm32 \
  --src 7 \
  --bin-name 7_gcc_O2_no_g \
  --decompiler retdec \
  --llm-profile qwen3.5-plus \
  --results-dir runs/qwen_batch
```

上面这种“带过滤条件的单 task 运行”依然走的是批量入口 `auto_eval.py` 的完整调度代码路径，适合先验证单个任务；而真正的大规模跑数则直接放宽过滤条件或配合 `launch_auto_eval.py` 使用。

仅补跑 Step3：

```bash
python3 scripts/auto_eval.py \
  --src 3 5-23 6 7 \
  --arch arm64 \
  --step3-only \
  --results-dir results_glm_v4_full
```

### `run_pipeline_in_docker.py`

guest worker。通常由 `run_single_task.py` 或 `auto_eval.py` 调用，而不是直接作为宿主机入口使用。

示例：

```bash
limactl shell binbench python3 -u scripts/run_pipeline_in_docker.py \
  src/1.c \
  decompiled/ghidra_out/arm64/1/1_gcc_O0_g.c \
  --original-bin build/arm64/1/1_gcc_O0_g \
  --results-dir results_glm_v4_full \
  --llm-profile glm_official
```

说明：

- 主线通常使用 `--skip-readability`，因为 Step1 已在宿主机完成
- `--skip-step3` 仅作调试开关
- `--step3-only` 仅用于基于既有 Step2 成果补跑语义评估

## 构建与环境

### `build_in_docker.py`

在构建容器中批量编译原始源码，产物进入 `build/`。

```bash
podman build -t cross-compiler -f scripts/Dockerfile .
podman run --platform linux/amd64 --rm -v "$(pwd):/work" cross-compiler \
  python3 scripts/build_in_docker.py
```

### `step3_preflight.py`

Step3 环境检查脚本。用于确认 Lima、Frida、结果树与必要产物是否满足语义评估要求。

### `setup_lima_env.sh`
### `setup_lima_arm32_env.sh`
### `setup_lima_x64_env.sh`
### `setup_lima_x86_env.sh`

初始化各架构 Lima 环境。

### `lima_ssh_no_mux.sh`

供批量脚本内部调用的 SSH wrapper，用于避免 Lima multiplexing 带来的不稳定行为。

## 容器文件

### `Dockerfile`

主构建容器。

### `Dockerfile.arm64`

ARM64 相关构建/运行镜像定义。
