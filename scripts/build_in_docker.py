import os
import subprocess
import json

# === Build matrix ===
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

# === Architecture mapping ===
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
    
    # Stores build records for successful_builds.json
    build_records = []
    
    for src_name, src_files in SOURCES.items():
        is_cpp = any(f.endswith(".cpp") for f in src_files)
        
        for arch in ARCHS:
            out_dir = os.path.join("build", arch, src_name)
            os.makedirs(out_dir, exist_ok=True)

            for comp in COMPILERS:
                # Resolve the base compiler command
                if comp == "gcc":
                    tool_suffix = "g++" if is_cpp else "gcc"
                    compiler_bin = ARCH_MAP[arch]["cc"] + tool_suffix
                else:
                    compiler_bin = "clang++" if is_cpp else "clang"
                
                for opt in OPT_LEVELS:
                    for dbg_name, dbg_flag in DEBUG_OPTS.items():
                        current_task += 1
                        dbg_suffix = "g" if dbg_name == "yes" else "no_g"
                        
                        # Output file path
                        out_filename = f"{src_name}_{comp}_{opt}_{dbg_suffix}"
                        out_path = os.path.join(out_dir, out_filename)

                        # === Build the compile command ===
                        cmd = [compiler_bin]
                        
                        # 1. Clang target
                        if comp == "clang":
                            cmd.append(f"--target={CLANG_TARGETS[arch]}")
                        
                        # 2. Optimization and debug flags
                        cmd.append(f"-{opt}")
                        if dbg_flag:
                            cmd.append(dbg_flag)
                        
                        # 3. Architecture-specific base flags (for example static MIPS builds)
                        cmd.extend(ARCH_MAP[arch]["flags"])

                        # 4. Minimal source-specific flag policy
                        
                        # Special handling for 5-23.c
                        if src_name == "5-23":
                            cmd.append("-std=c99") # required: loop-variable declarations
                            cmd.append("-lm")      # required: math library
                            
                            # Only x86 needs SSE support because the source uses intrinsics
                            if arch == "x86":
                                cmd.extend(["-msse2", "-mfpmath=sse"])
                            
                            # Non-x86 architectures require libatomic to avoid link failures
                            if arch not in ["x86", "x64"]:
                                cmd.append("-latomic")

                        # Special handling for 6.c
                        if src_name == "6":
                            cmd.append("-lpthread") # required: pthread support
                            
                            # In practice, MIPS and ARM also require explicit atomic linkage
                            if arch not in ["x86", "x64"]:
                                cmd.append("-latomic")

                        # 5. Inputs and outputs
                        cmd.extend([os.path.join("src", f) for f in src_files])
                        cmd.extend(["-o", out_path])
                        
                        # Serialize the command for metadata
                        cmd_str = " ".join(cmd)

                        # === Incremental-build handling ===
                        
                        file_exists = os.path.exists(out_path) and os.path.getsize(out_path) > 0
                        
                        if file_exists:
                            skipped += 1
                            # Even when skipping compilation, record it so the metadata stays complete
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

                        # === Execute the compile ===
                        print(f"[{current_task}/{total_tasks}] Compiling {out_filename}...")
                        
                        try:
                            # Run compilation
                            subprocess.run(cmd, check=True, stdout=subprocess.DEVNULL, stderr=subprocess.PIPE)
                            
                            # Record successful compilation
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

    # === Write JSON metadata ===
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
