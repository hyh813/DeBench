import os
import subprocess
import json

# === 配置矩阵 ===
SOURCES = {
    "1": ["1.c"],
    "2": ["2.c"],
    "3": ["3.c", "3-3_extern_defs.c"],
    "4": ["4.c"],
    "5-1": ["5-1.cpp"],
    "5-23": ["5-23.c"],
    "6": ["6.c"],
    "7": ["7.c"]
}

COMPILERS = ["gcc", "clang"]
OPT_LEVELS = ["O0", "O1", "O2", "O3", "Os"]
ARCHS = ["x86", "x64", "arm32", "arm64", "mips32", "mips64"]
DEBUG_OPTS = {"yes": "-g", "no": ""}

# === 架构基础映射 ===
ARCH_MAP = {
    "x86":    {"cc": "i686-linux-gnu-",       "flags": []}, 
    "x64":    {"cc": "x86_64-linux-gnu-",     "flags": []},
    "arm32":  {"cc": "arm-linux-gnueabi-",    "flags": []},
    "arm64":  {"cc": "aarch64-linux-gnu-",    "flags": []},
    "mips32": {"cc": "mips-linux-gnu-",       "flags": ["-static"]},
    "mips64": {"cc": "mips64-linux-gnuabi64-", "flags": ["-static"]}
}

CLANG_TARGETS = {
    "x86":    "i686-linux-gnu",
    "x64":    "x86_64-linux-gnu",
    "arm32":  "arm-linux-gnueabi",
    "arm64":  "aarch64-linux-gnu",
    "mips32": "mips-linux-gnu",
    "mips64": "mips64-linux-gnuabi64"
}

def compile():
    total_tasks = len(SOURCES) * len(ARCHS) * len(COMPILERS) * len(OPT_LEVELS) * len(DEBUG_OPTS)
    current_task = 0
    skipped = 0
    success_count = 0
    
    # 用于存储构建记录的列表
    build_records = []
    
    for src_name, src_files in SOURCES.items():
        is_cpp = any(f.endswith(".cpp") for f in src_files)
        
        for arch in ARCHS:
            out_dir = os.path.join("build", arch, src_name)
            os.makedirs(out_dir, exist_ok=True)

            for comp in COMPILERS:
                # 确定基础编译器命令
                if comp == "gcc":
                    tool_suffix = "g++" if is_cpp else "gcc"
                    compiler_bin = ARCH_MAP[arch]["cc"] + tool_suffix
                else:
                    compiler_bin = "clang++" if is_cpp else "clang"
                
                for opt in OPT_LEVELS:
                    for dbg_name, dbg_flag in DEBUG_OPTS.items():
                        current_task += 1
                        dbg_suffix = "g" if dbg_name == "yes" else "no_g"
                        
                        # 输出文件路径
                        out_filename = f"{src_name}_{comp}_{opt}_{dbg_suffix}"
                        out_path = os.path.join(out_dir, out_filename)

                        # === 构建编译命令 ===
                        cmd = [compiler_bin]
                        
                        # 1. Clang Target
                        if comp == "clang":
                            cmd.append(f"--target={CLANG_TARGETS[arch]}")
                        
                        # 2. 优化与调试
                        cmd.append(f"-{opt}")
                        if dbg_flag:
                            cmd.append(dbg_flag)
                        
                        # 3. 架构基础 Flag (如 mips static)
                        cmd.extend(ARCH_MAP[arch]["flags"])

                        # 4. === 最小化特定 Flag 策略 ===
                        
                        # 针对 5-23.c
                        if src_name == "5-23":
                            cmd.append("-std=c99") # 必须: 循环变量定义
                            cmd.append("-lm")      # 必须: 数学库
                            
                            # 仅 x86 需要 SSE 支持 (源码包含 intrinsics)
                            if arch == "x86":
                                cmd.extend(["-msse2", "-mfpmath=sse"])
                            
                            # 仅非 x86 架构需要链接 atomic (解决链接错误)
                            if arch not in ["x86", "x64"]:
                                cmd.append("-latomic")

                        # 针对 6.c
                        if src_name == "6":
                            cmd.append("-lpthread") # 必须: 线程库
                            
                            # 根据经验，MIPS/ARM 在 atomic 操作上需要显式链接
                            if arch not in ["x86", "x64"]:
                                cmd.append("-latomic")

                        # 5. 输入输出
                        cmd.extend([os.path.join("src", f) for f in src_files])
                        cmd.extend(["-o", out_path])
                        
                        # 生成命令字符串
                        cmd_str = " ".join(cmd)

                        # === 增量处理逻辑 ===
                        
                        file_exists = os.path.exists(out_path) and os.path.getsize(out_path) > 0
                        
                        if file_exists:
                            skipped += 1
                            # 即使跳过编译，也要记录到 JSON 中，保证记录完整性
                            record = {
                                "cmd": cmd_str,
                                "bin_path": out_path,
                                "arch": arch,
                                "src": src_name,
                                "compiler": comp,
                                "opt": opt,
                                "debug": dbg_name
                            }
                            build_records.append(record)
                            continue

                        # === 执行编译 ===
                        print(f"[{current_task}/{total_tasks}] Compiling {out_filename}...")
                        
                        try:
                            # 运行编译
                            subprocess.run(cmd, check=True, stdout=subprocess.DEVNULL, stderr=subprocess.PIPE)
                            
                            # 编译成功，记录信息
                            success_count += 1
                            record = {
                                "cmd": cmd_str,
                                "bin_path": out_path,
                                "arch": arch,
                                "src": src_name,
                                "compiler": comp,
                                "opt": opt,
                                "debug": dbg_name
                            }
                            build_records.append(record)
                            
                        except subprocess.CalledProcessError as e:
                            err_msg = e.stderr.decode().strip()
                            short_err = "\n".join(err_msg.splitlines()[:3])
                            print(f"FAILED: {out_filename}")
                            print(f"  Error: {short_err}")

    # === 写入 JSON ===
    json_path = "successful_builds.json"
    with open(json_path, "w") as f:
        json.dump(build_records, f, indent=2)
    
    print(f"\nBuild Complete!")
    print(f"  - Total Skipped (Existing): {skipped}")
    print(f"  - Newly Compiled: {success_count}")
    print(f"  - Build records saved to: {json_path}")

if __name__ == "__main__":
    print("Starting Smart Incremental Build with JSON Logging...")
    compile()