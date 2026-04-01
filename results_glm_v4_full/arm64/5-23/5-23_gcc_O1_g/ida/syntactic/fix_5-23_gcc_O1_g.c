/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
/* int64_t and uint64_t are defined by system headers */
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
/* intmax_t and uintmax_t are defined by system headers */

#include <stdio.h>
#include <stdatomic.h>
#include <sys/auxv.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

/* String constants */
static const char asc_1320[] = "Testing preprocessing features:\n";
static const char aPpL201D[] = "PPL201: %d\n";
static const char aPpL202D[] = "PPL202: %d\n";
static const char aPpL203D[] = "PPL203: %d\n";
static const char aPpL204D[] = "PPL204: %d\n";
static const char aPpL301D[] = "PPL301: %d\n";
static const char aPpL302D[] = "PPL302: %d\n";
static const char aPpL303D[] = "PPL303: %d\n";
static const char aPpL304D[] = "PPL304: %d\n";
static const char aPpL305D[] = "PPL305: %d\n";
static const char aPpL306D[] = "PPL306: %d\n";
static const char aPpL307D[] = "PPL307: %d\n";
static const char asc_14D8[] = "Testing ASM features:\n";
static const char aAsmL401D[] = "ASML401: %d\n";
static const char aAsmL402D[] = "ASML402: %d\n";
static const char aAsmL403D[] = "ASML403: %d\n";
static const char aAsmL404D[] = "ASML404: %d\n";
static const char aAsmL405D[] = "ASML405: %d\n";
static const char aAsmL406D[] = "ASML406: %d\n";

/* Global variable */
static int global_var = 0;
int _aarch64_have_lse_atomics = 0;

/* External declarations */
extern long long call_weak_fn(void);
#define JUMPOUT(x) __builtin_unreachable()
extern int _aarch64_have_lse_atomics;

/* CRT stub function implementation */
long long call_weak_fn(void)
{
    return 0;
}

/* ARM64 atomic intrinsics */
static inline unsigned int __ldaxr(const volatile unsigned int *ptr)
{
    unsigned int result;
    __asm__ __volatile__("ldaxr %w0, [%1]" : "=r"(result) : "r"(ptr) : "memory");
    return result;
}

static inline int __stlxr(unsigned int val, volatile unsigned int *ptr)
{
    int result;
    __asm__ __volatile__("stlxr %w0, %w1, [%2]" : "=&r"(result) : "r"(val), "r"(ptr) : "memory");
    return result;
}

/* Forward declaration */
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-23/5-23_gcc_O1_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x7F0 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_810 @ 0x810 */
void sub_810()
{
 JUMPOUT(0);
}


/* Function: init_have_lse_atomics @ 0x900 */
long long init_have_lse_atomics()
{
 long long result; // x0

 result = ((unsigned int)getauxval(16) >> 8) & 1;
 _aarch64_have_lse_atomics = result;
 return result;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0xA54 */
int param_macro_constants(int size)
{
 if ( size > 1024 )
 return 64;
 else
 return 512;
}


/* Function: call_macro_constants @ 0xA68 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0xA70 */
int param_macro_functions(int x, int y)
{
 if ( x >= y )
 y = x;
 return y + x * x;
}


/* Function: call_macro_functions @ 0xA80 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0xA88 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0xA94 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0xA9C */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0xAAC */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0xAB4 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0xABC */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0xAC4 */
int param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0xACC */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0xAD4 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0xAE0 */
int param_token_paste(int x)
{
 return x + 5 + 10 * x;
}


/* Function: call_token_paste @ 0xAF0 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0xAF8 */
int param_variadic_macro(int x, int y, int z)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0xB34 */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0xB54 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0xB60 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0xB68 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0xB70 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0xB78 */
int param_builtin_macros(int x)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:27");
 return x + 282;
}


/* Function: call_builtin_macros @ 0xBCC */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0xBE4 */
void test_preprocessing_features()
{
 unsigned int v0; // w0
 unsigned int v1; // w0

 __printf_chk(1, asc_1320);
 __printf_chk(1, aPpL201D, 64);
 __printf_chk(1, aPpL202D, 30);
 __printf_chk(1, aPpL203D, 32);
 __printf_chk(1, aPpL204D, 57122);
 __printf_chk(1, aPpL301D, 116);
 __printf_chk(1, aPpL302D, 19);
 __printf_chk(1, aPpL303D, 60);
 v0 = call_variadic_macro();
 __printf_chk(1, aPpL304D, v0);
 __printf_chk(1, aPpL305D, 16);
 __printf_chk(1, aPpL306D, 500);
 v1 = call_builtin_macros();
 __printf_chk(1, aPpL307D, v1);
}


/* Function: param_asm_basic @ 0xCE8 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0xCF0 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0xCF8 */
int param_asm_clobber(int *arr, int n)
{
 long long v3; // x2
 int result; // w0

 if ( n <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 result += arr[v3++];
 while ( n > (int)v3 );
 return result;
}


/* Function: call_asm_clobber @ 0xD2C */
int call_asm_clobber()
{
 int arr[5]; // [xsp+10h] [xbp+10h] BYREF

 *(unsigned long long *)arr = 0x200000001LL;
 *(unsigned long long *)&arr[2] = 0x400000003LL;
 arr[4] = 5;
 return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0xD94 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0xDA8 */
int call_asm_multi_insn()
{
 char src[16]; // [xsp+18h] [xbp+18h] BYREF
 char dst[32]; // [xsp+28h] [xbp+28h] BYREF

 strcpy(src, "Hello ASM");
 memset(dst, 0, sizeof(dst));
 param_asm_multi_insn(dst, src, 9u);
 if ( dst[0] != 72 )
 return -1;
 if ( dst[4] == 111 )
 return 42;
 return -1;
}


/* Function: param_asm_simd @ 0xE40 */
int param_asm_simd(int *a, int *b, int *result)
{
 long long i; // x3

 for ( i = 0; i != 4; ++i )
 result[i] = a[i] + b[i];
 return 0;
}


/* Function: param_simd_intrinsics @ 0xE68 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 long long i; // x3

 for ( i = 0; i != 4; ++i )
 result[i] = a[i] + b[i];
 return 0;
}


/* Function: call_asm_simd @ 0xE90 */
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


/* Function: param_asm_atomic @ 0xF40 */
int param_asm_atomic(int *counter, int increment)
{
 return _aarch64_ldadd4_acq_rel((unsigned int)increment, (atomic_uint *)counter) + increment;
}


/* Function: param_atomic_c11 @ 0xF6C */
int param_atomic_c11(int *counter, int increment)
{
 return _aarch64_ldadd4_acq_rel((unsigned int)increment, (atomic_uint *)counter) + increment;
}


/* Function: call_asm_atomic @ 0xF98 */
int call_asm_atomic()
{
 int v0; // w0
 int counter; // [xsp+14h] [xbp+14h] BYREF

 counter = 10;
 v0 = param_asm_atomic(&counter, 5);
 return v0 + counter;
}


/* Function: param_dynamic_code @ 0xFF8 */
int param_dynamic_code(int x)
{
 size_t v2; // x20
 void *v3; // x0
 int v4; // w19

 v2 = sysconf(30);
 v3 = mmap(0, v2, 7, 34, -1, 0);
 if ( v3 == (void *)-1LL )
 return -1;
 v4 = x + 5;
 munmap(v3, v2);
 return v4;
}


/* Function: param_memory_protection @ 0x105C */
int param_memory_protection()
{
 size_t v0; // x20
 int *v1; // x0
 int *v2; // x19
 int v3; // w21

 v0 = sysconf(30);
 v1 = (int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v1 == (int *)-1LL )
 return -1;
 v2 = v1;
 *v1 = 42;
 if ( mprotect(v1, v0, 1) )
 {
 munmap(v2, v0);
 return -2;
 }
 else
 {
 v3 = *v2;
 if ( mprotect(v2, v0, 3) )
 {
 munmap(v2, v0);
 return -3;
 }
 else
 {
 *v2 = 100;
 munmap(v2, v0);
 }
 }
 return v3;
}


/* Function: param_clobber_importance @ 0x112C */
int param_clobber_importance(int a, int b)
{
 return 2 * (a + b);
}


/* Function: call_asm_privileged @ 0x1138 */
int call_asm_privileged()
{
 int v0; // w19

 v0 = param_dynamic_code(10);
 if ( param_memory_protection() == 42 && v0 == 15 )
 return 77;
 else
 return v0;
}


/* Function: param_memory_clobber_demo @ 0x1170 */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x1180 */
void test_asm_features()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0

 __printf_chk(1, asc_14D8);
 __printf_chk(1, aAsmL401D, 15);
 v0 = call_asm_clobber();
 __printf_chk(1, aAsmL402D, v0);
 v1 = call_asm_multi_insn();
 __printf_chk(1, aAsmL403D, v1);
 v2 = call_asm_simd();
 __printf_chk(1, aAsmL404D, v2);
 v3 = call_asm_atomic();
 __printf_chk(1, aAsmL405D, v3);
 v4 = call_asm_privileged();
 __printf_chk(1, aAsmL406D, v4);
}


/* Function: main @ 0x122C */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: __aarch64_ldadd4_acq_rel @ 0x1250 */
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


/* Function: .term_proc @ 0x1280 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x12078 */

/* FAILED to decompile: __libc_start_main @ 0x12080 */

/* FAILED to decompile: __cxa_finalize @ 0x12088 */

/* FAILED to decompile: __printf_chk @ 0x12090 */

/* FAILED to decompile: __stack_chk_fail @ 0x12098 */

/* FAILED to decompile: __getauxval @ 0x120A8 */

/* FAILED to decompile: abort @ 0x120B0 */

/* FAILED to decompile: mmap @ 0x120B8 */

/* FAILED to decompile: munmap @ 0x120C0 */

/* FAILED to decompile: sysconf @ 0x120C8 */

/* FAILED to decompile: mprotect @ 0x120D0 */

/* FAILED to decompile: __gmon_start__ @ 0x120E0 */

/* Total functions decompiled: 54, failed: 12 */
