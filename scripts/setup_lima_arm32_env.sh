#!/bin/bash
set -e

# Lima Setup Script for BinBench (ARM32 - armhf Environment)
# Run this script INSIDE the binbench-arm32 Lima VM

echo "🚀 Starting BinBench ARM32 (armhf) Environment Setup..."

# 1. Update and install base tools
echo "📦 Installing base tools..."
sudo apt-get update
sudo apt-get install -y build-essential git curl strace htop

# 2. Install Python 3.8 (Supported by Frida 16.x and available in Bionic Universe)
echo "🐍 Installing Python 3.8..."
sudo apt-get install -y python3.8 python3.8-dev python3.8-venv python3.8-distutils

install_python38_pip() {
    if python3.8 -m pip --version >/dev/null 2>&1; then
        return 0
    fi

    echo "📦 Installing pip..."
    if python3.8 -m ensurepip --upgrade >/dev/null 2>&1; then
        :
    else
        tmp_get_pip=$(mktemp /tmp/get-pip-arm32-XXXXXX.py)
        curl -fSsSL https://bootstrap.pypa.io/pip/3.8/get-pip.py -o "${tmp_get_pip}"
        sudo python3.8 "${tmp_get_pip}"
        rm -f "${tmp_get_pip}"
    fi

    python3.8 -m pip --version >/dev/null 2>&1
}

install_python38_pip

# 3. Install Compilers
echo "🔧 Installing compilers..."
sudo apt-get install -y gcc g++ clang
# On armhf system, gcc produces arm32 binaries by default.
# We verify this at the end.
if ! command -v arm-linux-gnueabi-gcc &> /dev/null; then
    echo "   Creating 'arm-linux-gnueabi-gcc' symlink..."
    sudo ln -sf "$(which gcc)" /usr/bin/arm-linux-gnueabi-gcc
fi
if ! command -v arm-linux-gnueabi-g++ &> /dev/null; then
    echo "   Creating 'arm-linux-gnueabi-g++' symlink..."
    sudo ln -sf "$(which g++)" /usr/bin/arm-linux-gnueabi-g++
fi

# 4. Install Python Dependencies
echo "📦 Installing Frida and dependencies..."
# ARM32 wheels for Frida are usually provided.
python3.8 -m pip install frida-tools requests openai

# 5. Verification
echo "✅ Verifying setup..."
echo "Kernel Arch: $(uname -m)"
echo "GCC Target: $(gcc -dumpmachine)"
echo "Clang Version: $(clang --version | head -n 1)"
echo "Python Version: $(python3.8 --version)"
FRIDA_VERSION=$(python3.8 -c 'import frida; print(getattr(frida, "__version__", "unknown"))')
echo "Frida Version: ${FRIDA_VERSION}"

echo "🎉 Setup Complete! Ready for ARM32 evaluation."
