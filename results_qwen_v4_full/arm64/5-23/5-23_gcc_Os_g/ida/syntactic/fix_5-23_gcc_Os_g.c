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
typedef unsigned int atomic_uint;

/* Function forward declarations */
long long call_weak_fn();
void JUMPOUT(int);
void test_preprocessing_features();
void test_asm_features();
unsigned long __getauxval(unsigned long);
long long atomic_fetch_add(atomic_uint *obj, unsigned int arg);
unsigned int __ldaxr(unsigned int *addr);
int __stlxr(unsigned int val, unsigned int *addr);
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);
int __printf_chk(int flag, const char *format, ...);
void *memcpy(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
char *strcpy(char *dest, const char *src);
long sysconf(int name);
void *mmap(void *addr, size_t length, int prot, int flags, int fd, long offset);
int munmap(void *addr, size_t length);
int mprotect(void *addr, size_t len, int prot);

/* Global variable declarations */
long long _aarch64_have_lse_atomics;
int global_var;

/* String constant declarations */
static const char asc_12AE[] = "Testing preprocessing features\n";
static const char aPpL201D[] = "param_macro_constants: %d\n";
static const char aPpL202D[] = "call_macro_functions: %d\n";
static const char aPpL203D[] = "call_conditional_compile: %d\n";
static const char aPpL204D[] = "call_multi_branch_compile: %d\n";
static const char aPpL301D[] = "call_macro_recursion: %d\n";
static const char aPpL302D[] = "call_stringize: %d\n";
static const char aPpL303D[] = "call_token_paste: %d\n";
static const char aPpL304D[] = "call_variadic_macro: %d\n";
static const char aPpL305D[] = "call_macro_override: %d\n";
static const char aPpL306D[] = "call_include_guard: %d\n";
static const char aPpL307D[] = "call_builtin_macros: %d\n";
static const char asc_142C[] = "Testing ASM features\n";
static const char aAsmL401D[] = "call_asm_basic: %d\n";
static const char aAsmL402D[] = "call_asm_clobber: %d\n";
static const char aAsmL403D[] = "call_asm_multi_insn: %d\n";
static const char aAsmL404D[] = "call_asm_simd: %d\n";
static const char aAsmL405D[] = "call_asm_atomic: %d\n";
static const char aAsmL406D[] = "call_asm_privileged: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-23/5-23_gcc_Os_g
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


/* Function: main @ 0x900 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: init_have_lse_atomics @ 0x920 */
long long init_have_lse_atomics()
{
 long long result; // x0

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



/* Function: param_macro_constants @ 0xA94 */
int param_macro_constants(int size)
{
 if ( size > 1024 )
 return 64;
 else
 return 512;
}


/* Function: call_macro_constants @ 0xAA8 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0xAB0 */
int param_macro_functions(int x, int y)
{
 if ( x >= y )
 y = x;
 return y + x * x;
}


/* Function: call_macro_functions @ 0xAC0 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0xAC8 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0xAD4 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0xADC */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0xAEC */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0xAF4 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0xAFC */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0xB04 */
int param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0xB0C */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0xB14 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0xB20 */
int param_token_paste(int x)
{
 return x + 5 + 10 * x;
}


/* Function: call_token_paste @ 0xB30 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0xB38 */
int param_variadic_macro(int x, int y, int z)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0xB74 */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0xB84 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0xB90 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0xB98 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0xBA0 */
long long call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0xBA8 */
int param_builtin_macros(int x)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:34");
 return x + 282;
}


/* Function: call_builtin_macros @ 0xBFC */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0xC04 */
void test_preprocessing_features()
{
 unsigned int v0; // w0
 unsigned int v1; // w0

 __printf_chk(1, asc_12AE);
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


/* Function: param_asm_basic @ 0xD04 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0xD0C */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0xD14 */
int param_asm_clobber(int *arr, int n)
{
 long long v3; // x2
 int result; // w0
 int v5; // w4

 v3 = 0;
 result = 0;
 while ( n > (int)v3 )
 {
 v5 = arr[v3++];
 result += v5;
 }
 return result;
}


/* Function: call_asm_clobber @ 0xD3C */
int call_asm_clobber()
{
 int arr[5]; // [xsp+10h] [xbp+10h] BYREF

 *(unsigned long long *)arr = 0x200000001LL;
 *(unsigned long long *)&arr[2] = 0x400000003LL;
 arr[4] = 5;
 return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0xDA4 */
// attributes: thunk
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0xDA8 */
int call_asm_multi_insn()
{
 char src[16]; // [xsp+18h] [xbp+18h] BYREF
 char dst[32]; // [xsp+28h] [xbp+28h] BYREF

 memset(dst, 0, sizeof(dst));
 strcpy(src, "Hello ASM");
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
// attributes: thunk
int param_simd_intrinsics(int *a, int *b, int *result)
{
 return param_asm_simd(a, b, result);
}


/* Function: call_asm_simd @ 0xE6C */
int call_asm_simd()
{
 int a[4]; // [xsp+18h] [xbp+18h] BYREF
 int b[4]; // [xsp+28h] [xbp+28h] BYREF
 int result[4]; // [xsp+38h] [xbp+38h] BYREF

 *(unsigned long long *)a = 0x200000001LL;
 *(unsigned long long *)&a[2] = 0x400000003LL;
 *(unsigned long long *)b = 0x600000005LL;
 *(unsigned long long *)&b[2] = 0x800000007LL;
 param_asm_simd(a, b, result);
 return result[0] + result[1] + result[2] + result[3];
}


/* Function: param_asm_atomic @ 0xF08 */
int param_asm_atomic(int *counter, int increment)
{
 return _aarch64_ldadd4_acq_rel((unsigned int)increment, counter) + increment;
}


/* Function: param_atomic_c11 @ 0xF34 */
int param_atomic_c11(int *counter, int increment)
{
 return _aarch64_ldadd4_acq_rel((unsigned int)increment, counter) + increment;
}


/* Function: call_asm_atomic @ 0xF60 */
int call_asm_atomic()
{
 int v0; // w0
 int counter; // [xsp+14h] [xbp+14h] BYREF

 counter = 10;
 v0 = param_asm_atomic(&counter, 5);
 return v0 + counter;
}


/* Function: param_dynamic_code @ 0xFC0 */
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


/* Function: param_memory_protection @ 0x102C */
int param_memory_protection()
{
 size_t v0; // x20
 int *v1; // x0
 int *v2; // x19
 int v3; // w21

 v0 = sysconf(30);
 v1 = (int *)mmap(0, v0, 3, 34, -1, 0);
 v2 = v1;
 if ( v1 == (int *)-1LL )
 return -1;
 *v1 = 42;
 if ( mprotect(v1, v0, 1) )
 {
 v3 = -2;
 munmap(v2, v0);
 }
 else
 {
 v3 = *v2;
 if ( mprotect(v2, v0, 3) )
 v3 = -3;
 else
 *v2 = 100;
 munmap(v2, v0);
 }
 return v3;
}


/* Function: param_clobber_importance @ 0x10F8 */
int param_clobber_importance(int a, int b)
{
 return 2 * (a + b);
}


/* Function: call_asm_privileged @ 0x1104 */
int call_asm_privileged()
{
 int v0; // w19

 v0 = param_dynamic_code(10);
 if ( param_memory_protection() == 42 && v0 == 15 )
 return 77;
 else
 return v0;
}


/* Function: param_memory_clobber_demo @ 0x113C */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x114C */
void test_asm_features()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0

 __printf_chk(1, asc_142C);
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


/* Function: __aarch64_ldadd4_acq_rel @ 0x1200 */
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


/* Function: .term_proc @ 0x1230 */
void term_proc()
{
 ;
}


/* Stub implementations for undefined references */

/* JUMPOUT - CRT stub function */
void JUMPOUT(int code)
{
 (void)code;
}

/* call_weak_fn - CRT stub function */
long long call_weak_fn()
{
 return 0;
}

/* atomic_fetch_add - atomic operation stub */
long long atomic_fetch_add(atomic_uint *obj, unsigned int arg)
{
 long long old_val = *obj;
 *obj += arg;
 return old_val;
}

/* __ldaxr - Load-acquire exclusive register stub */
unsigned int __ldaxr(unsigned int *addr)
{
 return *addr;
}

/* __stlxr - Store-release exclusive register stub */
int __stlxr(unsigned int val, unsigned int *addr)
{
 *addr = val;
 return 0;
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
