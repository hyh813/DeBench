/* Auto-injected type definitions by preprocessor */
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

#include <stdatomic.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

/* Global variable for LSE atomics support */
int _aarch64_have_lse_atomics;

/* Global variable for memory clobber demo */
int global_var;

/* ARM64 atomic intrinsics */
static inline unsigned int __ldaxr(const unsigned int *ptr)
{
    unsigned int result;
    __asm__ volatile("ldaxr %w0, [%1]" : "=r"(result) : "r"(ptr) : "memory");
    return result;
}

static inline int __stlxr(unsigned int val, unsigned int *ptr)
{
    int result;
    __asm__ volatile("stlxr %w0, %w1, [%2]" : "=&r"(result) : "r"(val), "r"(ptr) : "memory");
    return result;
}

/* Forward declaration */
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);

/* String constants from original binary */
#define asc_1840 "=== Testing Preprocessing Features ==="
#define aPpL201D "call_macro_constants() = %d\n"
#define aPpL202D "call_macro_functions() = %d\n"
#define aPpL203D "call_conditional_compile() = %d\n"
#define aPpL204D "call_multi_branch_compile() = %d\n"
#define aPpL301D "call_macro_recursion() = %d\n"
#define aPpL302D "call_stringize() = %d\n"
#define aPpL303D "call_token_paste() = %d\n"
#define aPpL304D "call_variadic_macro() = %d\n"
#define aPpL305D "call_macro_override() = %d\n"
#define aPpL306D "call_include_guard() = %d\n"
#define aPpL307D "call_builtin_macros() = %d\n"
#define asc_1A10 "=== Testing ASM Features ==="
#define aAsmL401D "call_asm_basic() = %d\n"
#define aAsmL402D "call_asm_clobber() = %d\n"
#define aAsmL403D "call_asm_multi_insn() = %d\n"
#define aAsmL404D "call_asm_simd() = %d\n"
#define aAsmL405D "call_asm_atomic() = %d\n"
#define aAsmL406D "call_asm_privileged() = %d\n"

/* CRT stub function declarations */
long long call_weak_fn(void);

/* Decompiler macro for unconditional jumps */
#define JUMPOUT(x) __builtin_unreachable()

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-23/5-23_gcc_O0_g
 * Processor: arm
 */

/* CRT stub function call_weak_fn */
long long call_weak_fn(void)
{
 return 0;
}


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

 extern unsigned long __getauxval(unsigned long);
 result = ((unsigned int)__getauxval(16) >> 8) & 1;
 _aarch64_have_lse_atomics = result;
 return result;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0xAD4 */
int param_macro_constants(int size)
{
 if ( size <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0xAFC */
int call_macro_constants()
{
 return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0xB14 */
int param_macro_functions(int x, int y)
{
 int v2; // w1

 v2 = x * x;
 if ( y >= x )
 x = y;
 return v2 + x;
}


/* Function: call_macro_functions @ 0xB48 */
int call_macro_functions()
{
 return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0xB64 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0xB98 */
int call_conditional_compile()
{
 return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0xBB0 */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0xBD8 */
int call_multi_branch_compile()
{
 return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0xBF0 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0xC08 */
int call_macro_recursion()
{
 return param_macro_recursion(100);
}


/* Function: param_stringize @ 0xC20 */
int param_stringize(int value)
{
 int v1; // w19
 int v2; // w19

 v1 = strlen("Hello World");
 v2 = v1 + strlen("1.2.3");
 return v2 + strlen("155");
}


/* Function: call_stringize @ 0xC84 */
int call_stringize()
{
 return param_stringize(0);
}


/* Function: my_func @ 0xC9C */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0xCC0 */
int param_token_paste(int x)
{
 return my_func(x) + x + 5;
}


/* Function: call_token_paste @ 0xD00 */
int call_token_paste()
{
 return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0xD18 */
int param_variadic_macro(int x, int y, int z)
{
 printf("LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0xDB0 */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0xDD0 */
int param_macro_override(int x)
{
 return x + 1 + 2 * x;
}


/* Function: call_macro_override @ 0xE04 */
int call_macro_override()
{
 return param_macro_override(5);
}


/* Function: header_func @ 0xE1C */
int header_func(int x)
{
 return 100 * x;
}


/* Function: param_include_guard @ 0xE38 */
int param_include_guard()
{
 return header_func(5);
}


/* Function: call_include_guard @ 0xE50 */
int call_include_guard()
{
 return param_include_guard();
}


/* Function: param_builtin_macros @ 0xE64 */
int param_builtin_macros(int x)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:25");
 return x + 282;
}


/* Function: call_builtin_macros @ 0xF08 */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0xF20 */
void test_preprocessing_features()
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
 printf(aPpL307D, v10);
}


/* Function: param_asm_basic @ 0x101C */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x103C */
int call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x1054 */
int param_asm_clobber(int *arr, int n)
{
 int sum; // [xsp+14h] [xbp-8h]
 int i; // [xsp+18h] [xbp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 return sum;
}


/* Function: call_asm_clobber @ 0x10B4 */
int call_asm_clobber()
{
 int arr[5]; // [xsp+10h] [xbp+10h] BYREF

 *(unsigned long long *)arr = 0x200000001LL;
 *(unsigned long long *)&arr[2] = 0x400000003LL;
 arr[4] = 5;
 return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0x112C */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x115C */
int call_asm_multi_insn()
{
 char src[16]; // [xsp+18h] [xbp+18h] BYREF
 char dst[32]; // [xsp+28h] [xbp+28h] BYREF

 strcpy(src, "Hello ASM");
 memset(dst, 0, sizeof(dst));
 param_asm_multi_insn(dst, src, 9u);
 if ( dst[0] == 72 && dst[4] == 111 )
 return 42;
 else
 return -1;
}


/* Function: param_asm_simd @ 0x1200 */
int param_asm_simd(int *a, int *b, int *result)
{
 int i; // [xsp+24h] [xbp-4h]

 for ( i = 0; i <= 3; ++i )
 result[i] = a[i] + b[i];
 return 0;
}


/* Function: param_simd_intrinsics @ 0x127C */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 int i; // [xsp+24h] [xbp-4h]

 for ( i = 0; i <= 3; ++i )
 result[i] = a[i] + b[i];
 return 0;
}


/* Function: call_asm_simd @ 0x12F8 */
int call_asm_simd()
{
 int a[4]; // [xsp+18h] [xbp+18h] BYREF
 int b[4]; // [xsp+28h] [xbp+28h] BYREF
 int result[4]; // [xsp+38h] [xbp+38h] BYREF

 a[0] = 1;
 a[1] = 2;
 a[2] = 3;
 a[3] = 4;
 b[0] = 5;
 b[1] = 6;
 b[2] = 7;
 b[3] = 8;
 param_asm_simd(a, b, result);
 return result[0] + result[1] + result[2] + result[3];
}


/* Function: param_asm_atomic @ 0x13B0 */
int param_asm_atomic(int *counter, int increment)
{
 return _aarch64_ldadd4_acq_rel((unsigned int)increment, (atomic_uint *)counter) + increment;
}


/* Function: param_atomic_c11 @ 0x13E4 */
int param_atomic_c11(int *counter, int increment)
{
 return _aarch64_ldadd4_acq_rel((unsigned int)increment, (atomic_uint *)counter) + increment;
}


/* Function: call_asm_atomic @ 0x1414 */
int call_asm_atomic()
{
 int counter; // [xsp+10h] [xbp+10h] BYREF
 int new_val; // [xsp+14h] [xbp+14h]

 counter = 10;
 new_val = param_asm_atomic(&counter, 5);
 return counter + new_val;
}


/* Function: param_dynamic_code @ 0x1484 */
int param_dynamic_code(int x)
{
 long long page_size; // [xsp+30h] [xbp+30h]
 void *exec_mem; // [xsp+38h] [xbp+38h]

 page_size = sysconf(30);
 exec_mem = mmap(0, page_size, 7, 34, -1, 0);
 if ( exec_mem == (void *)-1LL )
 return -1;
 munmap(exec_mem, page_size);
 return x + 5;
}


/* Function: param_memory_protection @ 0x14F4 */
int param_memory_protection()
{
 int value; // [xsp+14h] [xbp+14h]
 long long page_size; // [xsp+18h] [xbp+18h]
 unsigned int *mem; // [xsp+20h] [xbp+20h]

 page_size = sysconf(30);
 mem = mmap(0, page_size, 3, 34, -1, 0);
 if ( mem == (unsigned int *)-1LL )
 return -1;
 *mem = 42;
 if ( mprotect(mem, page_size, 1) )
 {
 munmap(mem, page_size);
 return -2;
 }
 else
 {
 value = *mem;
 if ( mprotect(mem, page_size, 3) )
 {
 munmap(mem, page_size);
 return -3;
 }
 else
 {
 *mem = 100;
 munmap(mem, page_size);
 return value;
 }
 }
}


/* Function: param_clobber_importance @ 0x15D8 */
int param_clobber_importance(int a, int b)
{
 return 2 * (a + b);
}


/* Function: call_asm_privileged @ 0x15FC */
int call_asm_privileged()
{
 int r1; // [xsp+14h] [xbp+14h]
 int r2; // [xsp+18h] [xbp+18h]
 int r3; // [xsp+1Ch] [xbp+1Ch]

 r1 = param_dynamic_code(10);
 r2 = param_memory_protection();
 r3 = param_clobber_importance(3, 7);
 if ( r1 == 15 && r2 == 42 && r3 == 20 )
 return 77;
 else
 return r1;
}


/* Function: param_memory_clobber_demo @ 0x1660 */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x1690 */
void test_asm_features()
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
 printf(aAsmL406D, v5);
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
