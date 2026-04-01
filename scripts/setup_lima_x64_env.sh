#!/bin/bash
set -e

# Lima Setup Script for BinBench (x86_64 Environment)
# Run this script INSIDE the binbench-x64 Lima VM

echo "🚀 Starting BinBench x86_64 Environment Setup..."

# 1. Update and install base tools
echo "📦 Installing base tools..."
sudo apt-get update
sudo apt-get install -y python3 python3-pip python3-venv build-essential git curl strace

# 2. Install Compilers matching successful_builds.json
echo "🔧 Installing x86/x64 compilers..."

# Install 32-bit x86 cross-compiler
sudo apt-get install -y gcc-i686-linux-gnu g++-i686-linux-gnu

# Install Native (64-bit) capabilities
# On Ubuntu x86_64, 'gcc' targets x86_64-linux-gnu by default.
sudo apt-get install -y gcc g++ clang

# 3. Ensure Command Consistency
# successful_builds.json uses "x86_64-linux-gnu-gcc".
# On native Ubuntu, this is usually ready, but let's verify.
echo "🔍 Verifying compiler commands..."

if ! command -v x86_64-linux-gnu-gcc &> /dev/null; then
    echo "   [FIX] 'x86_64-linux-gnu-gcc' not found. Creating symlink to 'gcc'..."
    # Usually it exists, but if not:
    sudo ln -sf "$(which gcc)" /usr/bin/x86_64-linux-gnu-gcc
else
    echo "   [OK] 'x86_64-linux-gnu-gcc' found."
fi

if ! command -v x86_64-linux-gnu-g++ &> /dev/null; then
    echo "   [FIX] 'x86_64-linux-gnu-g++' not found. Creating symlink to 'g++'..."
    sudo ln -sf "$(which g++)" /usr/bin/x86_64-linux-gnu-g++
fi

if ! command -v i686-linux-gnu-gcc &> /dev/null; then
     echo "❌ Error: 'i686-linux-gnu-gcc' installation failed."
     exit 1
else
     echo "   [OK] 'i686-linux-gnu-gcc' found."
fi

if ! command -v i686-linux-gnu-g++ &> /dev/null; then
     echo "❌ Error: 'i686-linux-gnu-g++' installation failed."
     exit 1
else
     echo "   [OK] 'i686-linux-gnu-g++' found."
fi

# 4. Install Python Dependencies
echo "🐍 Installing Python dependencies..."
# Using --break-system-packages as we are in a disposable VM environment
pip3 install frida-tools requests openai --break-system-packages

# 5. Verification
echo "✅ Verifying setup..."
i686-linux-gnu-gcc --version | head -n 1
x86_64-linux-gnu-gcc --version | head -n 1
clang --version | head -n 1
echo "Python Version: $(python3 --version)"
FRIDA_VERSION=$(python3 -c 'import frida; print(getattr(frida, "__version__", "unknown"))')
echo "Frida Version: ${FRIDA_VERSION}"

echo "🎉 Setup Complete! Ready for x86/x64 evaluation."
