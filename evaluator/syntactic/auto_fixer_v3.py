import sys
import json
import argparse
import os
import time
import shutil
from utils.llm_client import LLMClient, is_context_exceeded_error
from utils.compiler import Compiler
from utils.error_parser_v3 import ErrorParser
from utils.file_manager_v3 import FileManager
from utils.logger_v2 import Logger
from utils.trace_repair import canonicalize_history, normalize_history
import re

# V3 Tools definition: Search/Replace Block Tool & Global String Replace Tool
TOOLS = [
    {
        "type": "function",
        "function": {
            "name": "edit_code_block",
            "description": "Replace a specific block of code with new code. This is the SAFER and PREFERRED way to edit code. The search block must EXACTLY MATCH the existing code (including surrounding lines for context if needed for uniqueness).",
            "parameters": {
                "type": "object",
                "properties": {
                    "search_block": {
                        "type": "string", 
                        "description": "The exact lines of code you want to replace. Include a few lines of context before and after if necessary to make it unique within the file."
                    },
                    "replace_block": {
                        "type": "string", 
                        "description": "The new code that will replace the search_block."
                    }
                },
                "required": ["search_block", "replace_block"]
            }
        }
    },
    {
        "type": "function",
        "function": {
            "name": "replace_string",
            "description": "Replace occurrences of a string. Use this ONLY for global typo/type replacements (set replace_all=true). For specific localized fixes, use edit_code_block instead.",
            "parameters": {
                "type": "object",
                "properties": {
                    "old_str": {"type": "string", "description": "The exact string to find"},
                    "new_str": {"type": "string", "description": "The string to replace it with"},
                    "replace_all": {"type": "boolean", "description": "If true, replace ALL occurrences in the file. Default: false."}
                },
                "required": ["old_str", "new_str"]
            }
        }
    }
]
# ===========================================================================
# CRT (C Runtime) symbols that cannot be resolved in standalone compilation
# These are typically references to linker-provided or startup code
CRT_SYMBOLS = {
    # BSS/Data segment markers
    '_bss_start', '__bss_start', '_edata', '_end', '__data_start',
    # GLIBC startup
    '__gmon_start__', '_gmon_start__', '__libc_start_main', '_libc_start_main',
    # Init/fini sections
    '_init', '_fini', '__do_global_dtors_aux', '__do_global_ctors_aux',
    # DSO handles
    '__dso_handle', '__TMC_END__',
    # Frame handling
    '__register_frame_info', '__deregister_frame_info',
    # ARM-specific intrinsics
    '__clz', '__clzsi2', '__aeabi_ldiv0', '_aeabi_ldiv0',
    '__aeabi_idiv', '__aeabi_uidiv', '__aeabi_idivmod', '__aeabi_uidivmod',
    # Common decompiler global variables
    'MEMORY', 'jump_buffer',
}

# Function names that are CRT stubs and should be deleted
CRT_STUB_FUNCTIONS = {
    '_start', 'start', 'init_proc', '__init_proc',
    'call_weak_fn', 'deregister_tm_clones', 'register_tm_clones',
    '__do_global_dtors_aux', 'frame_dummy', '__libc_csu_init', '__libc_csu_fini',
    # ARM/division stubs
    '_divsi3', 'divsi3_skip_div0_test', '__divsi3',
}

# Prefixes for IDA/Ghidra auto-generated symbols that are unresolvable
DECOMPILER_SYMBOL_PREFIXES = ('off_', 'sub_', 'loc_', 'asc_', 'unk_', 'byte_', 'word_', 'dword_', 'qword_')

def is_crt_symbol(symbol):
    """Check if a symbol is a CRT/startup symbol that cannot be resolved."""
    if not symbol:
        return False
    symbol_lower = symbol.lower()
    
    # Check against known CRT symbols
    for crt in CRT_SYMBOLS:
        if crt.lower() in symbol_lower:
            return True
    
    # IDA/Ghidra auto-generated symbol prefixes
    for prefix in DECOMPILER_SYMBOL_PREFIXES:
        if symbol.startswith(prefix):
            return True
    
    # GCC internal symbols
    if symbol.startswith('__x86.') or symbol.startswith('__arm.'):
        return True
    
    # Single-character external data (common in IDA: extern const char s[])
    if len(symbol) == 1 and symbol.islower():
        return True
    
    return False


def detect_decompiler(code):
    """
    Auto-detect the decompiler based on code patterns.
    Returns: 'ida', 'ghidra', 'binaryai', 'angr', 'retdec', or 'unknown'
    """
    # Check for distinctive patterns
    if '// Decompiled by BinaryAI' in code or '// SHA256:' in code:
        return 'binaryai'
    if '// Angr Decompilation' in code or '__ROL__(' in code or '$x' in code:
        return 'angr'
    if 'Retargetable Decompiler' in code or 'int33_t' in code:
        return 'retdec'
    if '__fastcall' in code or '__usercall' in code:
        return 'ida'
    if '/* Function:' in code and 'Ghidra' not in code:
        # Both Ghidra and IDA use /* Function: */ but IDA has __fastcall
        return 'ghidra'
    return 'unknown'


def preprocess_decompiled_code(code, decompiler_hint=None, inject_typedefs=True):
    """
    Preprocess decompiled code with FAIR per-decompiler handling.

    Design principles:
    1. FORMAT/SYNTAX issues (OK to preprocess): type names, calling conventions
    2. SEMANTIC errors (NOT OK): wrong arguments, logic errors
    3. Each decompiler gets EQUIVALENT help for their specific format quirks

    Args:
        code: The decompiled C code string
        decompiler_hint: Optional hint for decompiler type
        inject_typedefs: Whether to auto-inject common typedefs (default: True)

    Returns: (preprocessed_code, stats_dict)
    """

    stats = {
        "detected_decompiler": None,
        "removed_functions": [],
        "pattern_replacements": {},
        "injected_typedefs": False
    }
    
    # ============================================================
    # Phase 0: Detect decompiler
    # ============================================================
    
    decompiler = decompiler_hint or detect_decompiler(code)
    stats["detected_decompiler"] = decompiler
    
    # ============================================================
    # Phase 1: Common preprocessing (all decompilers)
    # ============================================================
    
    # MSVC type replacements -> standard C (used by IDA primarily, but fair game)
    COMMON_TYPE_PATTERNS = [
        (r'\b__int64\b', 'long long'),
        (r'\b__int32\b', 'int'),
        (r'\b__int16\b', 'short'),
        (r'\b__int8\b', 'char'),
        (r'\bunsigned __int64\b', 'unsigned long long'),
        (r'\bunsigned __int32\b', 'unsigned int'),
        (r'\bunsigned __int16\b', 'unsigned short'),
        (r'\bunsigned __int8\b', 'unsigned char'),
    ]
    
    for pattern, replacement in COMMON_TYPE_PATTERNS:
        count = len(re.findall(pattern, code))
        if count > 0:
            code = re.sub(pattern, replacement, code)
            stats["pattern_replacements"][f"common:{pattern}"] = count
    
    # ============================================================
    # Phase 2: Per-decompiler syntax normalization (FAIR)
    # ============================================================
    
    # IDA-specific patterns
    IDA_PATTERNS = [
        (r'\b__fastcall\b', ''),
        (r'\b__cdecl\b', ''),
        (r'\b__stdcall\b', ''),
        (r'\b__thiscall\b', ''),
        (r'\b__usercall\b', ''),
        (r'\b__userpurge\b', ''),
        (r'\b__noreturn\b', ''),
        (r'\b__spoils\b', ''),
        (r'\b__pure\b', ''),
        (r'\b_BOOL1\b', 'char'),
        (r'\b_BOOL2\b', 'short'),
        (r'\b_BOOL4\b', 'int'),
        (r'\b_BYTE\b', 'unsigned char'),
        (r'\b_WORD\b', 'unsigned short'),
        (r'\b_DWORD\b', 'unsigned int'),
        (r'\b_QWORD\b', 'unsigned long long'),
        (r'\b_OWORD\b', 'unsigned long long'),  # 128-bit simplified
    ]
    
    # Ghidra-specific patterns
    GHIDRA_PATTERNS = [
        (r'\bundefined8\b', 'unsigned long long'),
        (r'\bundefined4\b', 'unsigned int'),
        (r'\bundefined2\b', 'unsigned short'),
        (r'\bundefined1\b', 'unsigned char'),
        (r'\bundefined\s+\*', 'char *'),  # undefined * -> char *
        (r'\bundefined\b', 'char'),  # single byte
        (r'\bcode\s*\*', 'void *'),  # code * -> void *
    ]
    
    # BinaryAI-specific patterns (similar to Ghidra)
    BINARYAI_PATTERNS = [
        (r'\bundefined8\b', 'unsigned long long'),
        (r'\bundefined4\b', 'unsigned int'),
        (r'\bundefined2\b', 'unsigned short'),
        (r'\bundefined1\b', 'unsigned char'),
        (r'\bundefined\s+\*', 'char *'),
        (r'\bundefined\b', 'char'),
        (r'\bcode\s*\*', 'void *'),
        (r'\bulong\b', 'unsigned long'),
        (r'\bEVP_PKEY_CTX\s*\*', 'void *'),  # OpenSSL type
    ]
    
    # angr-specific patterns
    ANGR_PATTERNS = [
        # GLIBC namespace syntax (C++ style, invalid in C)
        (r'GLIBC_\d+\.\d+::(\w+)', r'__glibc_\1'),
        # Function names starting with $ (invalid C identifier)
        (r'\$x\b', '__dollar_x'),
        (r'\$(\w+)', r'__dollar_\1'),
        # Function names starting with . (invalid C identifier) 
        (r'(?<![0-9])\.([a-zA-Z_]\w*)', r'_\1'),
        # Variable names with dots: completed.0 -> completed_0
        (r'\b(\w+)\.(\d+)\b', r'\1_\2'),
        # uint128_t (non-standard, simplify to long long)
        (r'\buint128_t\b', 'unsigned long long'),
        # __ROL__ macro (complex, keep as-is but may need header)
    ]
    
    # RetDec-specific patterns
    RETDEC_PATTERNS = [
        (r'\bint33_t\b', 'long long'),
        (r'\bint128_t\b', 'long long'),  # Simplify 128-bit
        # RetDec often adds includes - keep them as they may be needed
    ]
    
    # Select patterns based on detected decompiler
    decompiler_patterns = {
        'ida': IDA_PATTERNS,
        'ghidra': GHIDRA_PATTERNS,
        'binaryai': BINARYAI_PATTERNS,
        'angr': ANGR_PATTERNS,
        'retdec': RETDEC_PATTERNS,
        'unknown': [],  # No specific patterns for unknown
    }
    
    patterns = decompiler_patterns.get(decompiler, [])
    for pattern, replacement in patterns:
        count = len(re.findall(pattern, code))
        if count > 0:
            code = re.sub(pattern, replacement, code)
            stats["pattern_replacements"][f"{decompiler}:{pattern}"] = count
    
    # Clean up extra whitespace from removals
    code = re.sub(r'  +', ' ', code)
    
    # ============================================================
    # Phase 3: CRT stub function removal (all decompilers)
    # ============================================================
    
    # Comprehensive CRT/Startup function list - expanded coverage
    CRT_FUNCTION_NAMES = [
        # === Entry points & init/fini ===
        '_start', 'start', '_start_c', '_start_main',
        '_init', '__init', 'init_proc', '__init_proc', '_init_proc',
        '_fini', '__fini', 'fini_proc', '_fini_proc',
        'call_weak_fn', '_call_weak_fn',

        # === GCC runtime helpers ===
        'deregister_tm_clones', '_deregister_tm_clones',
        'register_tm_clones', '_register_tm_clones',
        '__do_global_dtors_aux', '_do_global_dtors_aux',
        '__do_global_ctors_aux', '_do_global_ctors_aux',
        'frame_dummy', '_frame_dummy',
        '__libc_csu_init', '_libc_csu_init',
        '__libc_csu_fini', '_libc_csu_fini',

        # === ARM division & arithmetic helpers ===
        '__divsi3', '_divsi3', '.divsi3', '__aeabi_idiv',
        '__udivsi3', '_udivsi3', '.udivsi3', '__aeabi_uidiv',
        '__modsi3', '_modsi3', '.modsi3', '__aeabi_idivmod',
        '__umodsi3', '_umodsi3', '.umodsi3', '__aeabi_uidivmod',
        'divsi3_skip_div0_test', '.divsi3_skip_div0_test', '_divsi3_skip_div0_test',
        '__aeabi_ldiv0', '_aeabi_ldiv0',
        '__aeabi_ddiv', '__aeabi_fdiv',  # ARM soft-float division
        '__aeabi_dmul', '__aeabi_fmul',  # ARM soft-float multiply
        '__aeabi_dadd', '__aeabi_fadd',  # ARM soft-float add
        '__aeabi_dsub', '__aeabi_fsub',  # ARM soft-float subtract
        '__aeabi_d2iz', '__aeabi_f2iz',  # float to int conversion
        '__aeabi_i2d', '__aeabi_i2f',    # int to float conversion
        '__aeabi_read_tp',               # TLS for ARM

        # === 64-bit integer helpers (GCC libgcc) ===
        '__ashldi3', '_ashldi3',         # arithmetic shift left
        '__ashrdi3', '_ashrdi3',         # arithmetic shift right
        '__lshrdi3', '_lshrdi3',         # logical shift right
        '__negdi2', '_negdi2',           # negate
        '__muldi3', '_muldi3',           # multiply
        '__divdi3', '_divdi3',           # divide 64-bit
        '__moddi3', '_moddi3',           # modulo 64-bit
        '__udivdi3', '_udivdi3',         # unsigned divide
        '__umoddi3', '_umoddi3',         # unsigned modulo
        '__cmpdi2', '_cmpdi2',           # compare
        '__ucmpdi2', '_ucmpdi2',         # unsigned compare
        '__fixdfdi', '_fixdfdi',         # double to long long
        '__fixsfdi', '_fixsfdi',         # float to long long
        '__floatdidf', '_floatdidf',     # long long to double
        '__floatdisf', '_floatdisf',     # long long to float

        # === Stack protection ===
        '__stack_chk_fail', '_stack_chk_fail',
        '__stack_chk_guard', '_stack_chk_guard',

        # === C++ runtime (may be referenced even in C code) ===
        '__cxa_finalize', '_cxa_finalize',
        '__cxa_atexit', '_cxa_atexit',
        '__gxx_personality_v0',
        '_ITM_deregisterTMCloneTable',
        '_ITM_registerTMCloneTable',

        # === TLS (Thread Local Storage) ===
        '__tls_get_addr', '_tls_get_addr',
        '__tls_get_offset', '_tls_get_offset',

        # === Dynamic linker helpers ===
        '_dl_relocate_static_pie',
        '_dl_starting_up',
        '_dl_argv',

        # === FORTIFY_SOURCE functions ===
        '__memcpy_chk', '__memmove_chk', '__memset_chk',
        '__strcpy_chk', '__strcat_chk', '__sprintf_chk', '__snprintf_chk',

        # === Misc common CRT symbols ===
        '__gmon_start__', '_gmon_start__',
        '__libc_start_main', '_libc_start_main',
        '_Jv_RegisterClasses',
    ]
    
    # ============================================================
    # Phase 3: CRT stub function removal (Enhanced)
    # ============================================================
    # Strategy 1: Remove by comment pattern (original method)
    # Strategy 2: Remove by direct function definition pattern (new method)

    for func_name in CRT_FUNCTION_NAMES:
        # Strategy 1: Comment-based removal (original)
        comment_patterns = [
            rf'/\* Function: {re.escape(func_name)} @[^*]*\*/',
            rf'// Function: {re.escape(func_name)} at [^\n]*\n',
        ]

        for comment_pattern in comment_patterns:
            matches = list(re.finditer(comment_pattern, code))
            for match in reversed(matches):
                start_pos = match.start()
                brace_search_start = match.end()
                remaining = code[brace_search_start:brace_search_start + 800]

                open_brace_idx = remaining.find('{')
                if open_brace_idx == -1:
                    continue

                func_start = brace_search_start + open_brace_idx
                brace_count = 1
                pos = func_start + 1

                while pos < len(code) and brace_count > 0:
                    if code[pos] == '{':
                        brace_count += 1
                    elif code[pos] == '}':
                        brace_count -= 1
                    pos += 1

                if brace_count == 0:
                    func_end = pos
                    code = code[:start_pos] + f'\n/* CRT stub function {func_name} removed by preprocessor */\n' + code[func_end:]
                    stats["removed_functions"].append(func_name)

    # Strategy 2: Direct function definition pattern (new - more robust)
    # Match patterns like:
    #   int func_name(...) { ... }
    #   void func_name(...) { ... }
    #   __return_type func_name(...) { ... }
    # This catches functions without standard decompiler comments

    # Build regex to find function definitions
    func_def_pattern = rf'^(\s*(?:__attribute__\s*)?)?(?:inline\s+)?(\w+)\s+{re.escape(func_name)}\s*\([^;)]*\{{'
    func_def_matches = list(re.finditer(func_def_pattern, code, re.MULTILINE))

    for match in reversed(func_def_matches):
        # Extract the verify it func_body_start = match.end()
        remaining = code[func_body_start:func_body_start + 1000]

        open_brace_idx = remaining.find('{')
        if open_brace_idx == -1:
            continue

        func_start = func_body_start + open_brace_idx
        brace_count = 1
        pos = func_start + 1

        while pos < len(code) and brace_count > 0:
            if code[pos] == '{':
                brace_count += 1
            elif code[pos] == '}':
                brace_count -= 1
            pos += 1

        if brace_count == 0:
            func_end = pos
            # Remove the function
            code = code[:match.start()] + f'\n/* CRT stub function {func_name} removed by preprocessor */\n' + code[func_end:]
            stats["removed_functions"].append(func_name)
            if func_name not in stats["removed_functions"]:
                stats["removed_functions"].append(func_name)

    # ============================================================
    # Phase 4: Auto-inject common typedefs (Optional)
    # ============================================================
    if inject_typedefs:
        COMMON_TYPEDEFS = """/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
"""

        # Check if any of these types are used
        type_patterns = [
            r'\buint8_t\b', r'\buint16_t\b', r'\buint32_t\b', r'\buint64_t\b',
            r'\bint8_t\b', r'\bint16_t\b', r'\bint32_t\b', r'\bint64_t\b',
            r'\bsize_t\b', r'\bssize_t\b', r'\buintptr_t\b', r'\bintptr_t\b',
            r'\bptrdiff_t\b', r'\bintmax_t\b', r'\buintmax_t\b',
        ]

        needs_typedef = any(re.search(p, code) for p in type_patterns)

        if needs_typedef:
            # Check if typedefs are already present
            if 'typedef unsigned int uint32_t' not in code and 'typedef uint32_t' not in code:
                # Find a good insertion point (after any existing includes, before first function)
                insert_pos = 0

                # Look for existing includes or comments at the top
                lines = code.split('\n')
                for i, line in enumerate(lines):
                    stripped = line.strip()
                    if stripped.startswith('#include') or stripped.startswith('#define'):
                        insert_pos = i + 1
                    elif stripped.startswith('/*') or stripped.startswith('//'):
                        continue
                    elif stripped:  # First non-comment, non-include line
                        break

                if insert_pos > 0:
                    # Insert after the includes/comments
                    lines.insert(insert_pos, COMMON_TYPEDEFS)
                    code = '\n'.join(lines)
                else:
                    # Insert at the beginning
                    code = COMMON_TYPEDEFS + '\n' + code

                stats["injected_typedefs"] = True

    return code, stats


def parse_linker_errors(stderr, max_unique_errors=10, max_message_length=2000):
    """
    Parse linker errors from stderr.
    - Deduplicates similar errors
    - Limits the number of unique errors shown
    - Extracts symbol names for context lookup
    
    Returns: (errors_list, stats_dict, error_patterns_dict)
    """
    if not stderr or not stderr.strip():
        return [], {}, {}
    
    lines = stderr.strip().split('\n')
    
    # Common linker error patterns
    error_patterns = {
        'undefined_reference': [],
        'multiple_definition': [],
        'cannot_find': [],
        'other': []
    }
    
    for line in lines:
        line_lower = line.lower()
        
        # Skip empty or non-error lines
        if not line.strip() or 'warning' in line_lower:
            continue
            
        # Categorize errors
        if 'undefined reference' in line_lower:
            # Extract the symbol name
            if '`' in line:
                symbol = line.split('`')[1].split("'")[0] if "'" in line.split('`')[1] else line.split('`')[1].strip()
                error_patterns['undefined_reference'].append(symbol)
            else:
                error_patterns['undefined_reference'].append(line[:50])
        elif 'multiple definition' in line_lower:
            # Extract symbol from "multiple definition of `symbol`"
            if '`' in line:
                symbol = line.split('`')[1].split("'")[0] if "'" in line.split('`')[1] else line.split('`')[1].strip()
                error_patterns['multiple_definition'].append(symbol)
            else:
                error_patterns['multiple_definition'].append(line[:80])
        elif 'cannot find' in line_lower or 'not found' in line_lower:
            error_patterns['cannot_find'].append(line[:80])
        elif 'error' in line_lower:
            error_patterns['other'].append(line[:80])
    
    # Deduplicate
    for key in error_patterns:
        error_patterns[key] = list(set(error_patterns[key]))
    
    # Build stats
    stats = {
        'Undefined Reference': len(error_patterns['undefined_reference']),
        'Multiple Definition': len(error_patterns['multiple_definition']),
        'Cannot Find': len(error_patterns['cannot_find']),
        'Other Linker Error': len(error_patterns['other'])
    }
    # Remove zero counts
    stats = {k: v for k, v in stats.items() if v > 0}
    
    # Build errors list (for compatibility with existing code)
    errors = []
    
    # Add multiple definitions (highest priority for linker errors)
    for symbol in error_patterns['multiple_definition'][:max_unique_errors]:
        errors.append({
            'line': 0,
            'column': 0,
            'message': f"Multiple definition of `{symbol}`",
            'severity': 'linker_error',
            'error_type': 'multiple_definition',
            'symbol': symbol
        })
    
    # Add undefined references
    for symbol in error_patterns['undefined_reference'][:max_unique_errors]:
        errors.append({
            'line': 0,
            'column': 0,
            'message': f"Undefined reference to `{symbol}`",
            'severity': 'linker_error',
            'error_type': 'undefined_reference',
            'symbol': symbol
        })
    
    for err in error_patterns['other'][:3]:
        errors.append({
            'line': 0,
            'column': 0,
            'message': err,
            'severity': 'linker_error',
            'error_type': 'other',
            'symbol': None
        })
    
    return errors, stats, error_patterns


def extract_linker_context(file_path, error_patterns, max_context_lines=50):
    """
    Extract relevant code context for linker errors by searching the source file.
    Returns a formatted string with relevant code snippets.
    """
    
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            lines = f.readlines()
    except:
        return "Unable to read source file for context."
    
    context_parts = []
    
    # Handle Multiple Definition errors - find ALL definitions of the symbol
    if error_patterns.get('multiple_definition'):
        context_parts.append("## Multiple Definitions Found:\n")
        for symbol in error_patterns['multiple_definition'][:5]:  # Limit to 5 symbols
            # Search for function definitions: "type symbol(" or "symbol(" at line start
            matches = []
            for i, line in enumerate(lines):
                # Match function definition patterns
                if re.search(rf'\b{re.escape(symbol)}\s*\(', line):
                    # Check if this looks like a definition (not just a call)
                    # Definitions usually have return type before, or are at line start
                    stripped = line.strip()
                    # Skip if it looks like a call (starts with symbol directly or has = before)
                    if stripped.startswith(symbol) or '=' in line.split(symbol)[0][-10:]:
                        # Could be definition OR call, include for context
                        pass
                    matches.append((i + 1, line.rstrip()))  # 1-indexed
            
            if matches:
                context_parts.append(f"\nSymbol `{symbol}` found at {len(matches)} locations:\n")
                for line_num, line_content in matches[:10]:  # Max 10 occurrences
                    context_parts.append(f"  Line {line_num}: {line_content[:100]}\n")
    
    # Handle Undefined Reference errors - find where symbol is called
    if error_patterns.get('undefined_reference'):
        context_parts.append("\n## Undefined References:\n")
        for symbol in error_patterns['undefined_reference'][:5]:
            matches = []
            for i, line in enumerate(lines):
                if symbol in line:
                    matches.append((i + 1, line.rstrip()))
            
            if matches:
                context_parts.append(f"\nSymbol `{symbol}` referenced at:\n")
                for line_num, line_content in matches[:5]:
                    context_parts.append(f"  Line {line_num}: {line_content[:100]}\n")
            else:
                context_parts.append(f"\nSymbol `{symbol}` not found in source (may be external library)\n")
    
    # Truncate if too long
    result = ''.join(context_parts)
    if len(result) > max_context_lines * 80:
        result = result[:max_context_lines * 80] + "\n... (truncated)"
    
    return result if result else "No relevant context found."


def build_linker_error_message(iteration, max_iters, stats, error_patterns, code_context):
    """
    Build a comprehensive but concise message for LLM to fix linker errors.
    Enhanced with CRT symbol detection and explicit delete guidance.
    """
    total_errors = sum(stats.values())
    
    parts = [
        f"Linking failed. Iteration {iteration}/{max_iters}.",
        f"Total linker errors: {total_errors}",
        ""
    ]
    
    # Add stats
    for error_type, count in stats.items():
        parts.append(f"- {count} {error_type}")
    
    parts.append("")
    
    # Categorize undefined references
    crt_symbols_found = []
    data_symbols_found = []  # External data (strings, globals)
    non_crt_symbols = []
    
    for symbol in error_patterns.get('undefined_reference', []):
        if is_crt_symbol(symbol):
            # Further categorize: data symbol or function symbol
            if symbol.startswith('asc_') or symbol.startswith('loc_') or len(symbol) == 1:
                data_symbols_found.append(symbol)
            else:
                crt_symbols_found.append(symbol)
        else:
            non_crt_symbols.append(symbol)
    
    # Add CRT warning if applicable
    if crt_symbols_found:
        parts.append("## ⚠️ CRT/STARTUP CODE DETECTED")
        parts.append("The following symbols are from C Runtime startup code and CANNOT be resolved:")
        for sym in crt_symbols_found[:10]:
            parts.append(f"  - `{sym}`")
        parts.append("")
        parts.append("**CRITICAL ACTION REQUIRED:**")
        parts.append("These symbols come from functions that are decompiler artifacts (CRT stubs).")
        parts.append("You MUST DELETE the entire functions that reference these symbols.")
        parts.append("Common CRT stub functions to DELETE include:")
        parts.append("  - `_start`, `start`, `init_proc`")
        parts.append("  - `call_weak_fn`, `deregister_tm_clones`, `register_tm_clones`")
        parts.append("  - `__do_global_dtors_aux`, `frame_dummy`")
        parts.append("  - `_divsi3`, `divsi3_skip_div0_test` (ARM division stubs)")
        parts.append("  - Any function named `sub_XXXXX` (decompiler-generated)")
        parts.append("")
        parts.append("Use `apply_patch` to delete these functions entirely (replace with empty string).")
        parts.append("")
    
    # Add external data symbol guidance
    if data_symbols_found:
        parts.append("## ⚠️ EXTERNAL DATA SYMBOLS DETECTED")
        parts.append("The following are external data references that cannot be resolved:")
        for sym in data_symbols_found[:10]:
            parts.append(f"  - `{sym}`")
        parts.append("")
        parts.append("**HOW TO FIX:**")
        parts.append("1. For string constants (e.g., `s`, `asc_XXXXX`):")
        parts.append("   - Change `extern const char s[]` to `static const char s[] = \"test\"`")
        parts.append("   - Or replace `puts(s)` with `puts(\"test\")`")
        parts.append("2. For global variables (e.g., `jump_buffer`, `MEMORY`):")
        parts.append("   - Define them locally: `static jmp_buf jump_buffer;`")
        parts.append("   - Or remove the functions that use them")
        parts.append("3. For IDA labels (e.g., `loc_XXXXX`):")
        parts.append("   - Replace with a valid C label or remove the goto")
        parts.append("")
    
    # Add code context
    if code_context and code_context.strip():
        parts.append("Relevant Code Context:")
        parts.append(code_context)
        parts.append("")
    
    parts.append("Common fixes:")
    
    if error_patterns.get('multiple_definition'):
        parts.append("- Multiple definitions: Remove duplicate function definitions, or add 'static' keyword")
    
    if non_crt_symbols:
        parts.append("- Undefined references (non-CRT): Add missing function definitions, or remove calls")
    
    if crt_symbols_found:
        parts.append("- CRT symbols: DELETE the functions that use them (see list above)")
    
    if data_symbols_found:
        parts.append("- Data symbols: Define locally or replace with literals (see guidance above)")
    
    parts.append("")
    parts.append("Please fix the code using the available tools.")
    
    return '\n'.join(parts)





# ===========================================================================

class ContextManager:
    """
    v3 Context Manager:
    - Stateless: Does NOT keep past tool executions/outputs in a giant rolling window.
    - Uses a concise `changelog` of applied fixes to maintain long-term memory.
    - For each iteration, builds the prompt directly from current errors + full code + changelog.
    """
    def __init__(self, system_prompt):
        self.system_prompt = system_prompt
        self.changelog = []
        self.failed_attempts = []
        self.current_phase = "compile" 

    def set_phase(self, new_phase):
        if self.current_phase != new_phase:
            print(f"[Context] Phase transition: {self.current_phase} -> {new_phase}")
            self.current_phase = new_phase

    def record_success(self, description):
        """Record what was successfully fixed."""
        self.changelog.append(description)

    def record_failure(self, error_desc, attempt_desc, result_msg):
        """Record an attempt that completely failed (e.g. search block not found, or error still exists)."""
        fail_record = f"Try to fix: {error_desc}\nTried: {attempt_desc}\nResult: {result_msg}"
        self.failed_attempts.append(fail_record)
        if len(self.failed_attempts) > 10:
            self.failed_attempts.pop(0)

    def build_user_message(self, phase, errors_summary, code_context=None, linker_context=None):
        """Builds the prompt based on the *current* state of errors."""
        parts = []
        parts.append(f"CURRENT PHASE: {phase.upper()}")
        
        # Add Changelog
        if self.changelog:
            parts.append("\n## Applied Fixes (Changelog)")
            parts.append("You have already made the following changes successfully:")
            for i, change in enumerate(self.changelog[-15:]): # last 15
                parts.append(f"{i+1}. {change}")
                
        # Add Failed attempts
        if self.failed_attempts:
            parts.append("\n## Failed / Ineffective Attempts")
            parts.append("DO NOT try these approaches again:")
            for attempt in self.failed_attempts:
                parts.append(f"- {attempt}")

        # Add Code Context
        if code_context:
            parts.append("\n## Current Code Context")
            parts.append("```c")
            parts.append(code_context)
            parts.append("```")
            
        if linker_context:
            parts.append("\n## Linker Context Findings")
            parts.append(linker_context)

        # Add Current Errors
        parts.append("\n## Current Errors to Fix")
        parts.append(errors_summary)
        
        parts.append("\n## Instructions")
        parts.append(
            "Use the `edit_code_block` tool to fix the errors. "
            "You can make MULTIPLE tool calls in one response to fix different error locations simultaneously! "
            "To remove code, just make `replace_block` an empty string."
        )

        return "\n".join(parts)

    def build_messages(self, user_msg):
        return [
            {"role": "system", "content": self.system_prompt},
            {"role": "user", "content": user_msg}
        ]

def build_compile_error_summary(grouped_errors):
    """Format grouped compile errors into a concise summary."""
    if not grouped_errors:
        return "No standard compile errors parsed."
    
    parts = []
    parts.append(f"To be efficient, multiple instances of the same error are grouped together.")
    for i, g in enumerate(grouped_errors[:5]): # Only top 5 groups to prevent context blowup
        parts.append(f"{i+1}. Category: {g['category']}")
        parts.append(f"   Message: {g['message']}")
        if g["lines"]:
            line_summary = f"at lines: {', '.join(map(str, g['lines'][:10]))}{' ...' if len(g['lines']) > 10 else ''}"
        else:
            line_summary = "no source line information"
        parts.append(f"   Occurrences: {g['count']} ({line_summary})")
    return "\n".join(parts)


def normalize_no_progress_history(existing_data):
    """Drop all no-progress retries so resume uses only meaningful iterations."""
    if not existing_data:
        return existing_data, 0

    history = list(existing_data.get("history", []))
    canonical_history, structural_removed, _ = canonicalize_history(
        history,
        existing_data.get("total_iterations"),
    )
    normalized_history, removed_entries, _, _ = normalize_history(canonical_history)
    trimmed = len(structural_removed) + len(removed_entries)

    if not trimmed:
        return existing_data, 0

    normalized = dict(existing_data)
    normalized["history"] = normalized_history
    last_iteration = normalized_history[-1].get("iteration", 0) if normalized_history else 0
    normalized["total_iterations"] = last_iteration
    normalized["next_iteration"] = last_iteration + 1 if normalized_history else 1
    return normalized, trimmed


def restore_logger_from_existing_trace(logger, existing_data):
    """Restore logger state from an existing repair_trace.json history."""
    logger.data = existing_data
    logger.data.setdefault("termination_reason", None)
    logger.data.setdefault("resumable", False)
    logger.data.setdefault("resume_mode", None)
    logger.data.setdefault("next_iteration", None)

    logger.error_trajectory = []
    logger.phase_list = []
    logger.first_compile_success_iter = None
    logger.phase_regression_count = 0
    logger.initial_error_count = 0
    logger.initial_error_types = {}
    logger.error_tracker.first_linker_errors = None
    logger.error_tracker.first_linker_error_count = 0
    logger.error_tracker.last_linker_error_count = 0
    logger.error_tracker.total_new_errors = 0
    logger.error_tracker.current_phase = "compile"
    logger.error_tracker.is_first_call = True

    history = existing_data.get("history", [])
    for entry in history:
        phase = entry.get("phase", "compile")
        error_count = entry.get("error_summary", {}).get("total_count", 0)
        logger.error_trajectory.append(error_count)
        logger.phase_list.append(phase)

        if phase == "linker":
            if logger.first_compile_success_iter is None:
                logger.first_compile_success_iter = entry.get("iteration", 1)
            if logger.error_tracker.first_linker_errors is None:
                logger.error_tracker.first_linker_errors = set()
                logger.error_tracker.first_linker_error_count = error_count
            logger.error_tracker.last_linker_error_count = error_count

        if len(logger.phase_list) >= 2:
            if logger.phase_list[-2] == "linker" and logger.phase_list[-1] == "compile":
                logger.phase_regression_count += 1

    if history:
        first_entry = history[0]
        logger.initial_error_count = first_entry.get("error_summary", {}).get("total_count", 0)
        logger.initial_error_types = dict(first_entry.get("error_summary", {}).get("stats", {}))

    # A resumed run should clear stale terminal metadata before appending more history.
    logger.data["final_status"] = "pending"
    logger.data["termination_reason"] = None
    logger.data["resumable"] = False
    logger.data["resume_mode"] = None
    logger.data["next_iteration"] = None
    logger.data.pop("summary", None)
    logger.data.pop("enhanced_summary", None)
    logger.save()


def prepare_resume_context(source_path, target_file, checkpoint_file, checkpoint_src_backup, log_file_path, restart=False):
    """Figure out where to resume from and which working file should be used."""
    existing_data = None
    start_iteration = 1
    compile_checkpoint_saved = False
    should_preprocess = True

    if restart:
        if os.path.exists(checkpoint_file):
            os.remove(checkpoint_file)
        if os.path.exists(checkpoint_src_backup):
            os.remove(checkpoint_src_backup)
        return {
            "existing_data": None,
            "start_iteration": 1,
            "compile_checkpoint_saved": False,
            "should_preprocess": True,
        }

    if os.path.exists(log_file_path):
        try:
            with open(log_file_path, "r", encoding="utf-8") as f:
                existing_data = json.load(f)
            existing_data, trimmed_entries = normalize_no_progress_history(existing_data)
            if trimmed_entries:
                print(f"🧹 Removed {trimmed_entries} stale no-progress retry entries from repair_trace.json.")
            history = existing_data.get("history", [])
            if history:
                start_iteration = existing_data.get("next_iteration") or (existing_data.get("total_iterations", len(history)) + 1)
        except Exception as e:
            print(f"⚠️ Failed to load existing repair_trace.json: {e}, starting fresh")
            existing_data = None

    checkpoint_available = os.path.exists(checkpoint_file) and os.path.exists(checkpoint_src_backup)
    if checkpoint_available:
        shutil.copy2(checkpoint_src_backup, target_file)
        should_preprocess = False
        compile_checkpoint_saved = True
        checkpoint_iteration = start_iteration - 1
        try:
            with open(checkpoint_file, "r", encoding="utf-8") as f:
                checkpoint_data = json.load(f)
            checkpoint_iteration = checkpoint_data.get("iteration", checkpoint_iteration)
        except Exception:
            pass
        print("🔄 Restored source file from checkpoint backup.")
        print(f"✅ Found checkpoint: Compilation succeeded at iteration {checkpoint_iteration}")
    elif existing_data and existing_data.get("history") and os.path.exists(target_file):
        should_preprocess = False
        print(f"🔄 Resuming from existing working file at iteration {start_iteration}.")

    return {
        "existing_data": existing_data,
        "start_iteration": start_iteration,
        "compile_checkpoint_saved": compile_checkpoint_saved,
        "should_preprocess": should_preprocess,
    }


def compute_resume_state(iteration, max_iters, checkpoint_file, checkpoint_src_backup, target_file):
    checkpoint_available = os.path.exists(checkpoint_file) and os.path.exists(checkpoint_src_backup)
    working_file_available = os.path.exists(target_file)
    resumable = iteration < max_iters and (checkpoint_available or working_file_available)
    return {
        "resumable": resumable,
        "resume_mode": "linker" if checkpoint_available else ("compile" if resumable else None),
        "next_iteration": iteration + 1 if resumable else None,
    }


def build_diagnostic_excerpt(stderr, max_lines=20, max_chars=2000):
    if not stderr:
        return "<no compiler diagnostics captured>"
    lines = [line for line in stderr.splitlines() if line.strip()]
    excerpt = "\n".join(lines[:max_lines]).strip()
    if len(excerpt) > max_chars:
        excerpt = excerpt[:max_chars].rstrip() + "\n...[truncated]"
    return excerpt or "<no compiler diagnostics captured>"


def finalize_unsuccessful_run(
    logger,
    reason,
    iteration,
    max_iters,
    checkpoint_file,
    checkpoint_src_backup,
    target_file,
    total_time_start,
    total_tokens_used,
    effective_iteration=None,
):
    if effective_iteration is None:
        effective_iteration = iteration
    if reason == "context_length_exceeded":
        resume_state = {
            "resumable": False,
            "resume_mode": None,
            "next_iteration": None,
        }
    else:
        resume_state = compute_resume_state(
            iteration=effective_iteration,
            max_iters=max_iters,
            checkpoint_file=checkpoint_file,
            checkpoint_src_backup=checkpoint_src_backup,
            target_file=target_file,
        )
    logger.set_status("failed")
    logger.set_resume_state(
        termination_reason=reason,
        resumable=resume_state["resumable"],
        resume_mode=resume_state["resume_mode"],
        next_iteration=resume_state["next_iteration"],
    )
    logger.finalize_report()
    print(
        f"\n❌ Repair loop stopped at iteration {iteration}/{max_iters} | "
        f"Reason: {reason} | Resumable: {resume_state['resumable']} | "
        f"Next: {resume_state['next_iteration']} | Total Time: {time.time() - total_time_start:.2f}s | "
        f"Total Tokens: {total_tokens_used}"
    )
    return 1

def main():
    parser = argparse.ArgumentParser(description="Automated Decompiled C Code Repair Agent (v3 - Search/Replace)")
    parser.add_argument("file_path", help="Path to the C file to repair")
    parser.add_argument("--max-iters", type=int, default=50, help="Maximum iterations")
    parser.add_argument("--restart", action="store_true", help="Force restart from beginning")
    
    args = parser.parse_args()

    source_path = args.file_path
    if not os.path.exists(source_path):
        print(f"Error: File {source_path} not found.")
        sys.exit(1)

    # Setup output directory
    output_dir = os.environ.get("BINBENCH_SYNTACTIC_OUTPUT")
    if not output_dir:
        output_dir = os.path.abspath(os.path.join(os.path.dirname(__file__), "../../results/syntactic"))
    os.makedirs(output_dir, exist_ok=True)
    
    filename = os.path.basename(source_path)
    target_file = os.path.join(output_dir, f"fix_{filename}")
    checkpoint_file = os.path.join(output_dir, "compile_checkpoint.json")
    checkpoint_src_backup = os.path.join(output_dir, f"fix_{filename}.checkpoint.c")

    log_file_path = os.path.join(output_dir, "repair_trace.json")
    resume_context = prepare_resume_context(
        source_path=source_path,
        target_file=target_file,
        checkpoint_file=checkpoint_file,
        checkpoint_src_backup=checkpoint_src_backup,
        log_file_path=log_file_path,
        restart=args.restart,
    )
    start_iteration = resume_context["start_iteration"]
    compile_checkpoint_saved = resume_context["compile_checkpoint_saved"]

    if resume_context["should_preprocess"]:
        print(f"Copying and preprocessing {source_path} to {target_file}...")
        with open(source_path, 'r', encoding='utf-8', errors='ignore') as f:
            original_code = f.read()
        preprocessed_code, _ = preprocess_decompiled_code(original_code)
        with open(target_file, 'w', encoding='utf-8') as f:
            f.write(preprocessed_code)
    
    # Init modules
    llm = LLMClient()
    compiler = Compiler()
    err_parser = ErrorParser()
    file_manager = FileManager()
    
    # Initialize Logger
    logger = Logger(log_path=log_file_path)
    if resume_context["existing_data"] and resume_context["existing_data"].get("history"):
        restore_logger_from_existing_trace(logger, resume_context["existing_data"])
        print(f"✅ Loaded existing repair_trace.json with {len(resume_context['existing_data'].get('history', []))} history entries")
    else:
        logger.init_log(target_file)
    
    system_prompt = (
        "You are an expert C programmer fixing compilation errors in decompiled code. "
        "You use 'edit_code_block' tool to change code. "
        "IMPORTANT RULES:\n"
        "1. Fix the ROOT CAUSE. If something is undeclared, define it globally or include a header.\n"
        "2. You MUST write the exact `search_block` as it appears currently in the file. If you make a typo, the tool will fail.\n"
        "3. You CAN and SHOULD output multiple tool calls at once if there are errors in different places.\n"
        "4. If you have been warned that an approach failed, switch your approach. Don't retry the same edit."
    )
    
    ctx = ContextManager(system_prompt)
    total_time_start = time.time()
    total_tokens_used = 0
    repair_succeeded = False
    failure_reason = None
    failure_iteration = 0
    failure_effective_iteration = None

    if start_iteration > args.max_iters:
        return finalize_unsuccessful_run(
            logger=logger,
            reason="max_iters_reached",
            iteration=max(start_iteration - 1, args.max_iters),
            max_iters=args.max_iters,
            checkpoint_file=checkpoint_file,
            checkpoint_src_backup=checkpoint_src_backup,
            target_file=target_file,
            total_time_start=total_time_start,
            total_tokens_used=total_tokens_used,
        )

    for iteration in range(start_iteration, args.max_iters + 1):
        print(f"\n--- Iteration {iteration} ---")
        
        # 1. Compile
        ret, stderr = compiler.compile(target_file)
        
        if ret == 0:
            print("Compilation (Syntax) SUCCESS! Now attempting to Link...")
            with open(checkpoint_file, 'w', encoding='utf-8') as f:
                json.dump(
                    {
                        "compile_success": True,
                        "iteration": iteration,
                        "source_file": source_path,
                        "fixed_file": target_file,
                    },
                    f,
                    indent=2,
                    ensure_ascii=False,
                )
            shutil.copy2(target_file, checkpoint_src_backup)
            compile_checkpoint_saved = True
            
            output_bin_dir = os.path.join(output_dir, "bin")
            os.makedirs(output_bin_dir, exist_ok=True)
            final_binary_path = os.path.join(output_bin_dir, f"{os.path.splitext(filename)[0]}_fixed")
            
            try:
                link_ret, link_stderr = compiler.link(target_file, final_binary_path)
                if link_ret == 0:
                    print(f"Linking SUCCESS! Binary generated: {final_binary_path}")
                    logger.add_history(iteration, True, {"total_count": 0, "stats": {}, "phase": "linker"}, {"msg": "Success"}, errors=[], current_phase="linker")
                    logger.set_resume_state(
                        termination_reason=None,
                        resumable=False,
                        resume_mode=None,
                        next_iteration=None,
                    )
                    logger.set_status("success")
                    logger.finalize_report()
                    print(f"\n✨ Repair loop completed in {time.time() - total_time_start:.2f}s | Total Tokens: {total_tokens_used}")
                    repair_succeeded = True
                    break
                else:
                    linker_errors, linker_stats, linker_error_patterns = parse_linker_errors(link_stderr)
                    ctx.set_phase("linker")
                    is_linker_error = True
                    errors = linker_errors
                    stats = linker_stats
                    current_error_patterns = linker_error_patterns
            except Exception as e:
                print(f"Linking process crashed: {e}")
                failure_reason = "link_process_crashed"
                failure_iteration = iteration
                failure_effective_iteration = max(iteration - 1, 0)
                break
        else:
            is_linker_error = False
            current_error_patterns = {}

        # 2. Parse Errors
        if not is_linker_error:
            errors, stats = err_parser.parse(stderr)
            is_linker_error = False
        
        if not errors:
            print("Compilation/Linking failed but no standard errors parsed.")
            unknown_phase = "linker" if is_linker_error else "compile"
            diagnostic_excerpt = build_diagnostic_excerpt(stderr)
            print("Captured diagnostics:")
            print(diagnostic_excerpt)
            failure_reason = "unknown_error_no_parsed_diagnostics"
            failure_iteration = iteration
            failure_effective_iteration = max(iteration - 1, 0)
            break
        
        error_phase = "linker" if is_linker_error else "compile"
        print(f"Found {len(errors)} {error_phase} errors.")
        
        # 3. Context & Summary Construction
        if is_linker_error:
            linker_context = extract_linker_context(target_file, current_error_patterns)
            errors_summary = build_linker_error_message(iteration, args.max_iters, stats, current_error_patterns, linker_context)
            total_lines, code_context, _ = file_manager.get_full_context(target_file)
            user_msg = ctx.build_user_message(error_phase, errors_summary, code_context=code_context, linker_context=linker_context)
        else:
            grouped_errors = err_parser.group_errors(errors)
            errors_summary = build_compile_error_summary(grouped_errors)
            total_lines, code_context, _ = file_manager.get_full_context(target_file)
            user_msg = ctx.build_user_message(error_phase, errors_summary, code_context=code_context)

        # 4. Call LLM
        print("Calling LLM...")
        iter_start_time = time.time()
        try:
            messages = ctx.build_messages(user_msg)
            # Add reasoning_content explicitly requested from LLM for visibility
            content, reasoning, tool_calls, usage = llm.chat(messages, tools=TOOLS)
            iter_time_cost = time.time() - iter_start_time
            total_tokens_used += usage.get("total_tokens", 0)
        except Exception as e:
            print(f"LLM Call Failed: {e}")
            failure_reason = "context_length_exceeded" if is_context_exceeded_error(e) else "llm_call_failed"
            failure_iteration = iteration
            failure_effective_iteration = max(iteration - 1, 0)
            break

        # Print detailed token and timing info
        prompt_tokens = usage.get("prompt_tokens", 0)
        completion_tokens = usage.get("completion_tokens", 0)
        total_tokens = usage.get("total_tokens", 0)
        print(f"📊 Tokens: Input={prompt_tokens} | Output={completion_tokens} | Total={total_tokens} | Time={iter_time_cost:.2f}s")
        print(f"🧠 Reasoning: {reasoning[:200]}..." if len(reasoning) > 200 else f"🧠 Reasoning: {reasoning}")

        # 5. Execute Tools & Record Feedback
        tool_results = []
        has_success = False

        if tool_calls:
            for tc in tool_calls:
                func_name_call = tc["function"]["name"]
                args_str = tc["function"]["arguments"]
                
                try:
                    tool_args = json.loads(args_str)
                    
                    if func_name_call == "edit_code_block":
                        sb = tool_args.get("search_block", "")
                        rb = tool_args.get("replace_block", "")
                        print(f"  > edit_code_block:\nSEARCH:\n{sb[:40]}...\nREPLACE:\n{rb[:40]}...")
                        success, result_msg = file_manager.edit_code_block(target_file, sb, rb)
                        desc = f"edit_code_block: replaced '{sb[:30]}' with '{rb[:30]}'."
                        
                        if success:
                            ctx.record_success(desc[:150])
                            has_success = True
                        else:
                            ctx.record_failure("Specific error context", desc[:150], result_msg)
                            print(f"[Tool Error] {result_msg}")
                            
                        tool_results.append({"call": func_name_call, "success": success, "msg": result_msg})

                    elif func_name_call == "replace_string":
                        old_s = tool_args.get('old_str', '')
                        new_s = tool_args.get('new_str', '')
                        replace_all = tool_args.get('replace_all', False)
                        success, result_msg = file_manager.replace_string(target_file, old_s, new_s, replace_all=replace_all)
                        desc = f"replace_string: '{old_s}' -> '{new_s}'"
                        if success:
                            ctx.record_success(desc)
                            has_success = True
                        else:
                            ctx.record_failure("Specific string replace", desc, result_msg)
                        tool_results.append({"call": func_name_call, "success": success, "msg": result_msg})

                except json.JSONDecodeError:
                    print("Invalid JSON arguments")
                except Exception as e:
                    print(f"Tool execution failed: {e}")
        else:
            print("No tool calls made.")
            ctx.record_failure("No fix produced", "LLM decided not to make any edits", "Produced plain text.")

        if not has_success and tool_calls:
            # Important feedback for agent that its intended fix failed immediately
            print("Warning: All tool calls failed to apply. The context memory logged the failures.")
        
        logger.add_history(
            iteration, False, 
            {"total_count": len(errors), "stats": stats, "phase": error_phase}, 
            {"tool_results": tool_results},
            token_usage=usage if 'usage' in locals() else None,
            time_cost=time.time() - iter_start_time if 'iter_start_time' in locals() else 0.0,
            errors=errors,
            current_phase=error_phase
        )
    
    else:
        return finalize_unsuccessful_run(
            logger=logger,
            reason="max_iters_reached",
            iteration=args.max_iters,
            max_iters=args.max_iters,
            checkpoint_file=checkpoint_file,
            checkpoint_src_backup=checkpoint_src_backup,
            target_file=target_file,
            total_time_start=total_time_start,
            total_tokens_used=total_tokens_used,
        )

    if repair_succeeded:
        return 0

    if failure_reason is None:
        failure_reason = "repair_stopped"
        failure_iteration = max(start_iteration, 1)

    return finalize_unsuccessful_run(
        logger=logger,
        reason=failure_reason,
        iteration=failure_iteration,
        max_iters=args.max_iters,
        checkpoint_file=checkpoint_file,
        checkpoint_src_backup=checkpoint_src_backup,
        target_file=target_file,
        total_time_start=total_time_start,
        total_tokens_used=total_tokens_used,
        effective_iteration=failure_effective_iteration,
    )

if __name__ == "__main__":
    sys.exit(main())
