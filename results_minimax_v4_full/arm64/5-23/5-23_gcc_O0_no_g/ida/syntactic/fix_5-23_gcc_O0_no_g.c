/* Required includes */
#include <stdint.h>
#include <stdatomic.h>
#include <sys/auxv.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>

/* Required for ptrdiff_t */
#include <stddef.h>

/* Auto-injected type definitions by preprocessor - using stdint.h equivalents */
typedef uint8_t custom_uint8_t;
typedef uint16_t custom_uint16_t;
typedef uint32_t custom_uint32_t;
typedef uint64_t custom_uint64_t;
typedef int8_t custom_int8_t;
typedef int16_t custom_int16_t;
typedef int32_t custom_int32_t;
typedef int64_t custom_int64_t;
typedef size_t custom_size_t;
typedef ssize_t custom_ssize_t;
typedef uintptr_t custom_uintptr_t;
typedef intptr_t custom_intptr_t;
typedef ptrdiff_t custom_ptrdiff_t;
typedef intmax_t custom_intmax_t;
typedef uintmax_t custom_uintmax_t;

/* IDA/Hex-Rays macros for commonly used operations */
#define LOBYTE(x) ((unsigned char)((x) & 0xFF))
#define BYTE4(x) ((unsigned char)(((x) >> 32) & 0xFF))
#define LODWORD(x) (*(unsigned int*)&(x))

/* ARM64 intrinsic declarations */
unsigned int __ldaxr(unsigned int *ptr);
unsigned int __stlxr(unsigned int val, unsigned int *ptr);

/* Implement ARM64 load/store exclusive intrinsics */
static inline unsigned int __ldaxr_impl(unsigned int *ptr) {
    unsigned int val;
    __asm__ __volatile__("ldaxr %w0, [%1]" : "=r"(val) : "r"(ptr) : "memory");
    return val;
}

static inline unsigned int __stlxr_impl(unsigned int val, unsigned int *ptr) {
    unsigned int status;
    __asm__ __volatile__("stlxr %w0, %w1, [%2]" : "=r"(status) : "r"(val), "r"(ptr) : "memory");
    return status;
}

/* Override declarations with implementations */
#undef __ldaxr
#undef __stlxr
#define __ldaxr __ldaxr_impl
#define __stlxr __stlxr_impl

/* Forward declaration for atomic function */
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);

/* Global variable declarations */
int _aarch64_have_lse_atomics;
int global_var;

/* Format string declarations */
const char *asc_1840 = "Testing Preprocessing Features:\n";
const char *aPpL201D = "Macro constants: %u\n";
const char *aPpL202D = "Macro functions: %u\n";
const char *aPpL203D = "Conditional compile: %u\n";
const char *aPpL204D = "Multi-branch compile: %u\n";
const char *aPpL301D = "Macro recursion: %u\n";
const char *aPpL302D = "Stringize: %u\n";
const char *aPpL303D = "Token paste: %u\n";
const char *aPpL304D = "Variadic macro: %u\n";
const char *aPpL305D = "Macro override: %u\n";
const char *aPpL306D = "Include guard: %u\n";
const char *aPpL307D = "Builtin macros: %u\n";
const char *asc_1A10 = "Testing ASM Features:\n";
const char *aAsmL401D = "ASM basic: %u\n";
const char *aAsmL402D = "ASM clobber: %u\n";
const char *aAsmL403D = "ASM multi insn: %u\n";
const char *aAsmL404D = "ASM SIMD: %u\n";
const char *aAsmL405D = "ASM atomic: %u\n";
const char *aAsmL406D = "ASM privileged: %u\n";

/* CRT stub function declarations */
int call_weak_fn(void);

/* IDA/Hex-Rays macro for jumps */
#define JUMPOUT(addr) ((void(*)())(addr))()

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-23/5-23_gcc_O0_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x860 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_880 @ 0x880 */
void sub_880()
{
 JUMPOUT(0);
}


/* Function: init_have_lse_atomics @ 0x980 */
long long init_have_lse_atomics()
{
 long long result; // x0

 result = ((unsigned int)getauxval(16) >> 8) & 1;
 _aarch64_have_lse_atomics = result;
 return result;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn */
int call_weak_fn(void)
{
    return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0xAD4 */
long long param_macro_constants(int a1)
{
 if ( a1 <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0xAFC */
long long call_macro_constants()
{
 return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0xB14 */
long long param_macro_functions(int a1, int a2)
{
 int v2; // w1

 v2 = a1 * a1;
 if ( a2 >= a1 )
 a1 = a2;
 return (unsigned int)(v2 + a1);
}


/* Function: call_macro_functions @ 0xB48 */
long long call_macro_functions()
{
 return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0xB64 */
long long param_conditional_compile(int a1)
{
 return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0xB98 */
long long call_conditional_compile()
{
 return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0xBB0 */
long long param_multi_branch_compile(int a1)
{
 return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0xBD8 */
long long call_multi_branch_compile()
{
 return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0xBF0 */
long long param_macro_recursion(int a1)
{
 return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0xC08 */
long long call_macro_recursion()
{
 return param_macro_recursion(100);
}


/* Function: param_stringize @ 0xC20 */
long long param_stringize()
{
 int v0; // w19
 int v1; // w19

 v0 = strlen("Hello World");
 v1 = v0 + strlen("1.2.3");
 return v1 + (unsigned int)strlen("155");
}


/* Function: call_stringize @ 0xC84 */
long long call_stringize()
{
 return param_stringize();
}


/* Function: my_func @ 0xC9C */
long long my_func(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0xCC0 */
long long param_token_paste(int a1)
{
 return (unsigned int)my_func(a1) + a1 + 5;
}


/* Function: call_token_paste @ 0xD00 */
long long call_token_paste()
{
 return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0xD18 */
long long param_variadic_macro(int a1, int a2, int a3)
{
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0xDB0 */
long long call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0xDD0 */
long long param_macro_override(int a1)
{
 return (unsigned int)(a1 + 1 + 2 * a1);
}


/* Function: call_macro_override @ 0xE04 */
long long call_macro_override()
{
 return param_macro_override(5);
}


/* Function: header_func @ 0xE1C */
long long header_func(int a1)
{
 return (unsigned int)(100 * a1);
}


/* Function: param_include_guard @ 0xE38 */
long long param_include_guard()
{
 return header_func(5);
}


/* Function: call_include_guard @ 0xE50 */
long long call_include_guard()
{
 return param_include_guard();
}


/* Function: param_builtin_macros @ 0xE64 */
long long param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:26");
 return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0xF08 */
long long call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0xF20 */
long long test_preprocessing_features()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0
 unsigned int v8; // w0
 unsigned int v9; // w0
 unsigned int v10; // w0

 puts(asc_1840);
 v0 = call_macro_constants();
 printf(aPpL201D, v0);
 v1 = call_macro_functions();
 printf(aPpL202D, v1);
 v2 = call_conditional_compile();
 printf(aPpL203D, v2);
 v3 = call_multi_branch_compile();
 printf(aPpL204D, v3);
 v4 = call_macro_recursion();
 printf(aPpL301D, v4);
 v5 = call_stringize();
 printf(aPpL302D, v5);
 v6 = call_token_paste();
 printf(aPpL303D, v6);
 v7 = call_variadic_macro();
 printf(aPpL304D, v7);
 v8 = call_macro_override();
 printf(aPpL305D, v8);
 v9 = call_include_guard();
 printf(aPpL306D, v9);
 v10 = call_builtin_macros();
 return printf(aPpL307D, v10);
}


/* Function: param_asm_basic @ 0x101C */
long long param_asm_basic(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0x103C */
long long call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x1054 */
long long param_asm_clobber(long long a1, int a2)
{
 unsigned int v3; // [xsp+18h] [xbp-8h]
 int i; // [xsp+1Ch] [xbp-4h]

 v3 = 0;
 for ( i = 0; i < a2; ++i )
 v3 += *(unsigned int *)(a1 + 4LL * i);
 return v3;
}


/* Function: call_asm_clobber @ 0x10B4 */
long long call_asm_clobber()
{
 unsigned long long v1[2]; // [xsp+10h] [xbp+10h] BYREF
 int v2; // [xsp+20h] [xbp+20h]

 v1[0] = 0x200000001LL;
 v1[1] = 0x400000003LL;
 v2 = 5;
 return (unsigned int)param_asm_clobber((long long)v1, 5);
}


/* Function: param_asm_multi_insn @ 0x112C */
void * param_asm_multi_insn(void *a1, const void *a2, size_t a3)
{
 return memcpy(a1, a2, a3);
}


/* Function: call_asm_multi_insn @ 0x115C */
long long call_asm_multi_insn()
{
 long long result; // x0
 char v1[16]; // [xsp+18h] [xbp+18h] BYREF
 unsigned long long v2[4]; // [xsp+28h] [xbp+28h] BYREF

 strcpy(v1, "Hello ASM");
 memset(v2, 0, sizeof(v2));
 param_asm_multi_insn(v2, v1, 9u);
 if ( LOBYTE(v2[0]) == 72 && BYTE4(v2[0]) == 111 )
 LODWORD(result) = 42;
 else
 LODWORD(result) = -1;
 return (unsigned int)result;
}


/* Function: param_asm_simd @ 0x1200 */
long long param_asm_simd(long long a1, long long a2, long long a3)
{
 int i; // [xsp+2Ch] [xbp-4h]

 for ( i = 0; i <= 3; ++i )
 *(unsigned int *)(a3 + 4LL * i) = *(unsigned int *)(a1 + 4LL * i) + *(unsigned int *)(a2 + 4LL * i);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x127C */
long long param_simd_intrinsics(long long a1, long long a2, long long a3)
{
 int i; // [xsp+2Ch] [xbp-4h]

 for ( i = 0; i <= 3; ++i )
 *(unsigned int *)(a3 + 4LL * i) = *(unsigned int *)(a1 + 4LL * i) + *(unsigned int *)(a2 + 4LL * i);
 return 0;
}


/* Function: call_asm_simd @ 0x12F8 */
long long call_asm_simd()
{
 unsigned int v1[4]; // [xsp+18h] [xbp+18h] BYREF
 unsigned int v2[4]; // [xsp+28h] [xbp+28h] BYREF
 unsigned int v3[4]; // [xsp+38h] [xbp+38h] BYREF

 v1[0] = 1;
 v1[1] = 2;
 v1[2] = 3;
 v1[3] = 4;
 v2[0] = 5;
 v2[1] = 6;
 v2[2] = 7;
 v2[3] = 8;
 param_asm_simd((long long)v1, (long long)v2, (long long)v3);
 return (unsigned int)(v3[0] + v3[1] + v3[2] + v3[3]);
}


/* Function: param_asm_atomic @ 0x13B0 */
long long param_asm_atomic(long long a1, unsigned int a2)
{
 return (unsigned int)_aarch64_ldadd4_acq_rel(a2, (atomic_uint *)a1) + a2;
}


/* Function: param_atomic_c11 @ 0x13E4 */
long long param_atomic_c11(long long a1, unsigned int a2)
{
 return (unsigned int)_aarch64_ldadd4_acq_rel(a2, (atomic_uint *)a1) + a2;
}


/* Function: call_asm_atomic @ 0x1414 */
long long call_asm_atomic()
{
 int v1; // [xsp+10h] [xbp+10h] BYREF
 int v2; // [xsp+14h] [xbp+14h]

 v1 = 10;
 v2 = param_asm_atomic((long long)&v1, 5u);
 return (unsigned int)(v1 + v2);
}


/* Function: param_dynamic_code @ 0x1484 */
long long param_dynamic_code(int a1)
{
 long long len; // [xsp+30h] [xbp+30h]
 void *addr; // [xsp+38h] [xbp+38h]

 len = sysconf(30);
 addr = mmap(0, len, 7, 34, -1, 0);
 if ( addr == (void *)-1LL )
 return 0xFFFFFFFFLL;
 munmap(addr, len);
 return (unsigned int)(a1 + 5);
}


/* Function: param_memory_protection @ 0x14F4 */
long long param_memory_protection()
{
 unsigned int v1; // [xsp+14h] [xbp+14h]
 long long len; // [xsp+18h] [xbp+18h]
 unsigned int *addr; // [xsp+20h] [xbp+20h]

 len = sysconf(30);
 addr = mmap(0, len, 3, 34, -1, 0);
 if ( addr == (unsigned int *)-1LL )
 return 0xFFFFFFFFLL;
 *addr = 42;
 if ( mprotect(addr, len, 1) )
 {
 munmap(addr, len);
 return 4294967294LL;
 }
 else
 {
 v1 = *addr;
 if ( mprotect(addr, len, 3) )
 {
 munmap(addr, len);
 return 4294967293LL;
 }
 else
 {
 *addr = 100;
 munmap(addr, len);
 return v1;
 }
 }
}


/* Function: param_clobber_importance @ 0x15D8 */
long long param_clobber_importance(int a1, int a2)
{
 return (unsigned int)(2 * (a1 + a2));
}


/* Function: call_asm_privileged @ 0x15FC */
long long call_asm_privileged()
{
 unsigned int v1; // [xsp+14h] [xbp+14h]
 int v2; // [xsp+18h] [xbp+18h]
 int v3; // [xsp+1Ch] [xbp+1Ch]

 v1 = param_dynamic_code(10);
 v2 = param_memory_protection();
 v3 = param_clobber_importance(3, 7);
 if ( v1 == 15 && v2 == 42 && v3 == 20 )
 return 77;
 else
 return v1;
}


/* Function: param_memory_clobber_demo @ 0x1660 */
long long param_memory_clobber_demo()
{
 return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x1690 */
long long test_asm_features()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0

 puts(asc_1A10);
 v0 = call_asm_basic();
 printf(aAsmL401D, v0);
 v1 = call_asm_clobber();
 printf(aAsmL402D, v1);
 v2 = call_asm_multi_insn();
 printf(aAsmL403D, v2);
 v3 = call_asm_simd();
 printf(aAsmL404D, v3);
 v4 = call_asm_atomic();
 printf(aAsmL405D, v4);
 v5 = call_asm_privileged();
 return printf(aAsmL406D, v5);
}


/* Function: main @ 0x1728 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: __aarch64_ldadd4_acq_rel @ 0x1750 */
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2)
{
 long long result; // x0

 if ( _aarch64_have_lse_atomics )
 return atomic_fetch_add(a2, a1);
 do
 result = __ldaxr((unsigned int *)a2);
 while ( __stlxr(result + a1, (unsigned int *)a2) );
 return result;
}


/* Function: .term_proc @ 0x1780 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x13078 */

/* FAILED to decompile: strlen @ 0x13080 */

/* FAILED to decompile: __libc_start_main @ 0x13088 */

/* FAILED to decompile: __cxa_finalize @ 0x13090 */

/* FAILED to decompile: __stack_chk_fail @ 0x13098 */

/* FAILED to decompile: __getauxval @ 0x130A8 */

/* FAILED to decompile: abort @ 0x130B0 */

/* FAILED to decompile: puts @ 0x130B8 */

/* FAILED to decompile: mmap @ 0x130C0 */

/* FAILED to decompile: munmap @ 0x130C8 */

/* FAILED to decompile: sysconf @ 0x130D0 */

/* FAILED to decompile: printf @ 0x130D8 */

/* FAILED to decompile: mprotect @ 0x130E0 */

/* FAILED to decompile: __gmon_start__ @ 0x130F0 */

/* Total functions decompiled: 55, failed: 14 */
