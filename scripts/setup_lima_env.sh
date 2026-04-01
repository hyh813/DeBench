#!/bin/bash
set -e

# Lima Setup Script for BinBench
# Run this script INSIDE the Lima VM

echo "🚀 Starting BinBench Environment Setup..."

# 1. Update and install base tools
echo "📦 Installing base tools..."
sudo apt-get update
sudo apt-get install -y python3 python3-pip python3-venv build-essential git curl strace

# 2. Install Cross-Compilers
echo "🔧 Installing cross-compilers..."
# Installing only essential cross-compilers for ARM64 testing
# MIPS packages often fail on ARM64 ports repository, skipping them for now
sudo apt-get install -y \
    gcc g++ \
    gcc-aarch64-linux-gnu g++-aarch64-linux-gnu \
    gcc-arm-linux-gnueabi g++-arm-linux-gnueabi \
    clang

# 3. Install Python Dependencies
echo "🐍 Installing Python dependencies..."
# Using --break-system-packages as we are in a disposable VM environment
pip3 install frida-tools requests openai --break-system-packages

# 4. Verification
echo "✅ Verifying ptrace..."
if strace -f echo "ptrace test" >/dev/null 2>&1; then
    echo "   [OK] Ptrace is working!"
else
    echo "   [FAIL] Ptrace verification failed!"
    exit 1
fi

echo "✅ Verifying compilers..."
aarch64-linux-gnu-gcc --version | head -n 1
echo "   [OK] Compilers installed."

echo "🎉 Setup Complete! You can now run the evaluation pipeline."
