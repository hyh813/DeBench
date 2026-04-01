# 我们强制使用 linux/amd64 架构的 Ubuntu
# 这样可以确保 apt-get 能下载到最全的交叉编译工具链 (mips, x86 multilib 等)
# 因为你在第一步开启了 Rosetta，所以在 M4 上跑这个也不会太慢

# 因为用了 podman，原来的写法: FROM --platform=linux/amd64 ubuntu:22.04
# 修改后的写法: 使用国内镜像源 (华为云/DaoCloud 等代理) 直接拉取
FROM --platform=linux/amd64 swr.cn-north-4.myhuaweicloud.com/ddn-k8s/docker.io/ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

# === 核心修改：将源替换为阿里云镜像，解决 Hash Mismatch 和下载慢的问题 ===
RUN sed -i 's/archive.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list && \
    sed -i 's/security.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list

# 2. 安装编译器全家桶
# build-essential: 基础编译工具
# gcc-multilib: 编译 32位 x86 程序，在 Ubuntu 22.04 中，gcc-multilib（用于让 64位系统编译 32位 x86 程序）和 gcc-aarch64-linux-gnu（ARM64 交叉编译器）底层依赖的某些库版本互斥，无法同时安装。放弃 gcc-multilib，改用 x86 的交叉编译器 (gcc-i686-linux-gnu)
# gcc-arm...: 编译 ARM 程序
# gcc-mips...: 编译 MIPS 程序
# clang: Clang 编译器
RUN apt-get update && apt-get install -y \
    python3 \
    python3-pip \
    build-essential \
    gcc-i686-linux-gnu g++-i686-linux-gnu \
    gcc-aarch64-linux-gnu g++-aarch64-linux-gnu \
    gcc-arm-linux-gnueabi g++-arm-linux-gnueabi \
    gcc-mips-linux-gnu g++-mips-linux-gnu \
    gcc-mips64-linux-gnuabi64 g++-mips64-linux-gnuabi64 \
    clang \
    && rm -rf /var/lib/apt/lists/*

# 3. 安装 Python 依赖 (Frida 用于语义评估插桩, requests 用于 LLM API 调用, openai 用于 LLM 客户端)
RUN pip3 install frida-tools requests openai

WORKDIR /work