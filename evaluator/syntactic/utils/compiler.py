import subprocess
import os
import shlex
import shutil
import platform

class Compiler:
    """
    Compiler utility for BinBench syntactic evaluation.
    
    Supports two modes:
    1. Default mode: Uses gcc with basic flags for syntax checking
    2. Custom command mode: Uses BINBENCH_ORIGINAL_CMD environment variable
       to match the original binary's compilation
    """
    
    def __init__(self):
        # Check if we have a custom compile command from environment
        self.original_cmd = os.environ.get("BINBENCH_ORIGINAL_CMD", "")
        self.primary_source = os.environ.get("BINBENCH_PRIMARY_SOURCE", "")
        
    def compile(self, file_path):
        """
        Compiles the C file for syntax checking.
        Returns (return_code, stderr)
        """
        if not os.path.exists(file_path):
            return -1, "File not found"

        if self.original_cmd:
            cmd = self._adapt_original_cmd(file_path, "/dev/null", compile_only=True)
        else:
            # Fallback: generic local syntax check.
            cmd = ["gcc", "-c", "-g", "-O0", file_path, "-o", "/dev/null"]

        print(f"  Compile command: {' '.join(cmd)}")
        return self._run_command(cmd)
    
    def link(self, file_path, output_path):
        """
        Compiles and links the C file to produce an executable.
        Uses the original compilation command if available.
        
        Returns (return_code, stderr)
        """
        if not os.path.exists(file_path):
            return -1, "File not found"
        
        if self.original_cmd:
            # Parse and adapt the original command
            cmd = self._adapt_original_cmd(file_path, output_path)
        else:
            # Fallback to default gcc command
            cmd = self._get_default_cmd(file_path, output_path)
        
        print(f"  Linking command: {' '.join(cmd)}")
        return self._run_command(cmd)

    def _run_command(self, cmd):
        try:
            result = subprocess.run(
                cmd,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                text=True,
                check=False
            )
            diagnostics = "\n".join(
                stream for stream in [result.stderr.strip(), result.stdout.strip()] if stream
            )
            return result.returncode, diagnostics
        except Exception as e:
            return -1, str(e)
    
    def _adapt_original_cmd(self, file_path, output_path, compile_only=False):
        """
        Adapt the original compilation command for the fixed source file.
        
        Original command example:
        "i686-linux-gnu-gcc -O0 -g src/1.c -o build/x86/1/1_gcc_O0_g"
        
        We need to replace:
        - Input file (src/*.c) with the fixed file
        - Output path with our target path
        """
        parts = shlex.split(self.original_cmd)
        
        if len(parts) < 4:
            # Invalid command, fallback
            return self._get_default_cmd(file_path, output_path)

        parts = self._resolve_available_toolchain(parts)
        parts = self._normalize_target_for_current_vm(parts)

        primary_source_arg_index = self._find_primary_source_arg_index(parts)
        
        # Reconstruct command
        cmd = []
        i = 0
        while i < len(parts):
            part = parts[i]
            
            if part == "-o" and i + 1 < len(parts):
                if not compile_only:
                    # Replace output path
                    cmd.append("-o")
                    cmd.append(output_path)
                i += 2
                continue
            elif compile_only and part in ("-c", "-S", "-E"):
                # Force a consistent compile-only command at the end.
                i += 1
                continue
            elif compile_only and part in ("-shared", "-static", "-pie", "-no-pie"):
                i += 1
                continue
            elif compile_only and part == "-Xlinker":
                i += 2
                continue
            elif compile_only and (part.startswith("-Wl,") or part.startswith("-l") or part.startswith("-L")):
                i += 1
                continue
            elif self._is_source_arg(part):
                if i == primary_source_arg_index:
                    cmd.append(file_path)
                elif not compile_only:
                    # Keep helper sources such as src/3-3_extern_defs.c during the final link step.
                    cmd.append(part)
                i += 1
                continue
            else:
                cmd.append(part)
                i += 1
        
        if compile_only:
            cmd.extend(["-c", "-o", output_path])
        elif "-o" not in cmd:
            # Ensure output is specified
            cmd.extend(["-o", output_path])
        
        return cmd

    def _normalize_target_for_current_vm(self, parts):
        if not parts:
            return parts

        compiler = os.path.basename(parts[0])
        if compiler not in ("clang", "clang++"):
            return parts

        machine = platform.machine().lower()
        if machine not in ("armv7l", "armv6l"):
            return parts

        normalized = []
        i = 0
        while i < len(parts):
            part = parts[i]
            if part == "--target" and i + 1 < len(parts):
                target = parts[i + 1]
                if target == "arm-linux-gnueabi":
                    normalized.extend(["--target", "arm-linux-gnueabihf"])
                else:
                    normalized.extend([part, target])
                i += 2
                continue
            if part.startswith("--target="):
                target = part.split("=", 1)[1]
                if target == "arm-linux-gnueabi":
                    normalized.append("--target=arm-linux-gnueabihf")
                else:
                    normalized.append(part)
                i += 1
                continue
            normalized.append(part)
            i += 1

        return normalized

    def _resolve_available_toolchain(self, parts):
        if not parts:
            return parts

        original_executable = parts[0]
        if shutil.which(original_executable):
            return parts

        replacement = self._select_available_compiler(original_executable, parts)
        if replacement == original_executable:
            return parts

        rewritten = list(parts)
        rewritten[0] = replacement

        # `--target=...` is meaningful for clang, but not for gcc/g++ fallbacks.
        if os.path.basename(replacement) not in ("clang", "clang++"):
            rewritten = self._strip_target_args(rewritten)

        print(
            f"  Toolchain fallback: {original_executable} -> {replacement} "
            f"(current environment lacks `{original_executable}`)"
        )
        return rewritten

    def _select_available_compiler(self, original_executable, parts):
        basename = os.path.basename(original_executable)
        target = self._extract_target_triple(parts, basename)
        language = self._infer_language(parts, basename)
        native = "g++" if language == "c++" else "gcc"
        target_gnu = f"{target}-{'g++' if language == 'c++' else 'gcc'}" if target else None

        candidates = []
        if target_gnu:
            candidates.append(target_gnu)
        candidates.append(native)

        seen = set()
        for candidate in candidates:
            if not candidate or candidate in seen or candidate == original_executable:
                continue
            seen.add(candidate)
            if shutil.which(candidate):
                return candidate

        return original_executable

    def _extract_target_triple(self, parts, executable_basename):
        for idx, part in enumerate(parts):
            if part.startswith("--target="):
                return part.split("=", 1)[1]
            if part == "--target" and idx + 1 < len(parts):
                return parts[idx + 1]

        for suffix in ("-clang++", "-clang", "-g++", "-gcc"):
            if executable_basename.endswith(suffix):
                return executable_basename[:-len(suffix)]

        return None

    def _infer_language(self, parts, executable_basename):
        if "++" in executable_basename:
            return "c++"

        for part in parts:
            if part.endswith((".cpp", ".cc", ".cxx")):
                return "c++"

        return "c"

    def _strip_target_args(self, parts):
        stripped = []
        i = 0
        while i < len(parts):
            part = parts[i]
            if part.startswith("--target="):
                i += 1
                continue
            if part == "--target" and i + 1 < len(parts):
                i += 2
                continue
            stripped.append(part)
            i += 1
        return stripped

    def _is_source_arg(self, arg):
        return arg.startswith("src/") or arg.endswith((".c", ".cpp", ".cc", ".cxx"))

    def _normalize_source_arg(self, arg):
        return os.path.normpath(arg)

    def _find_primary_source_arg_index(self, parts):
        source_indices = [idx for idx, part in enumerate(parts) if self._is_source_arg(part)]
        if not source_indices:
            return None

        if self.primary_source:
            normalized_primary = self._normalize_source_arg(self.primary_source)
            primary_basename = os.path.basename(normalized_primary)
            for idx in source_indices:
                normalized_part = self._normalize_source_arg(parts[idx])
                if normalized_part == normalized_primary or os.path.basename(normalized_part) == primary_basename:
                    return idx

        return source_indices[0]
    
    def _get_default_cmd(self, file_path, output_path):
        """Get default compilation command (for local testing or fallback)."""
        import sys
        
        cmd = ["gcc", "-O0", "-g", file_path, "-o", output_path]
        
        # On macOS, specify arm64 architecture
        if sys.platform == "darwin":
            cmd.extend(["-arch", "arm64"])
        
        return cmd
