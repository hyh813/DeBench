# Force a linux/amd64 Ubuntu base image.
# This keeps cross-compilation toolchain availability broad (for example MIPS and x86 multilib-related packages).
# On Apple Silicon, Rosetta keeps this setup reasonably usable.

# With Podman, the image is pulled from a mirrored registry rather than the default Docker Hub path.
FROM --platform=linux/amd64 swr.cn-north-4.myhuaweicloud.com/ddn-k8s/docker.io/ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

# Use Aliyun package mirrors to reduce hash mismatch issues and slow downloads.
RUN sed -i 's/archive.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list && \
    sed -i 's/security.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list

# Install the compiler toolchain.
# build-essential: base toolchain
# gcc-multilib is intentionally avoided because it conflicts with the ARM64 cross toolchain on Ubuntu 22.04.
# gcc-arm...: ARM cross-compilers
# gcc-mips...: MIPS cross-compilers
# clang: Clang toolchain
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

# Install Python dependencies:
# frida-tools for semantic instrumentation, requests for HTTP helpers, and openai for LLM clients.
RUN pip3 install frida-tools requests openai

WORKDIR /work
