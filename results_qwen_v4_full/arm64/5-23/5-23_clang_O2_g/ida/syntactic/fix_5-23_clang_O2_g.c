/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <sys/auxv.h>
#include <stdatomic.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* size_t, ssize_t, uintptr_t, intptr_t, ptrdiff_t already defined by standard headers */

/* External function declarations */
long __getauxval(int type);
unsigned int __ldaxr(unsigned int *);
int __stlxr(unsigned int, unsigned int *);
long long call_weak_fn(void);
void JUMPOUT(int val);
long long _aarch64_ldadd4_acq_rel(unsigned int a1, unsigned int *a2);

/* Stub implementations for ARM intrinsics */
long __getauxval(int type)
{
 (void)type;
 return 0;
}

/* ARM NEON intrinsic stubs */
typedef struct {
    int data[4];
} int32x4_t;

int32x4_t vdupq_n_s32(int value)
{
 int32x4_t result;
 result.data[0] = value;
 result.data[1] = value;
 result.data[2] = value;
 result.data[3] = value;
 return result;
}

int32x4_t vaddq_s32(int32x4_t a, int32x4_t b)
{
 int32x4_t result;
 result.data[0] = a.data[0]+b.data[0];
 result.data[1] = a.data[1]+b.data[1];
 result.data[2] = a.data[2]+b.data[2];
 result.data[3] = a.data[3]+b.data[3];
 return result;
}

int vaddvq_s32(int32x4_t a)
{
 return a.data[0] + a.data[1] + a.data[2] + a.data[3];
}



unsigned int __ldaxr(unsigned int *ptr)
{
 if (ptr) return *ptr;
 return 0;
}

int __stlxr(unsigned int val, unsigned int *ptr)
{
 if (ptr) *ptr = val;
 return 0;
}

/* Standard library function prototypes (already provided by headers) */
/* void *memcpy(void *dest, const void *src, size_t n); */
/* int printf(const char *format, ...); */
/* int puts(const char *s); */
/* void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset); */
/* int munmap(void *addr, size_t length); */
/* long sysconf(int name); */
/* int mprotect(void *addr, size_t len, int prot); */

/* Global variable declarations */
int global_var = 0;

/* String constants from decompilation */
const char *asc_1407 = "Testing preprocessing features...";
const char *aPpL201D = "LOG: param_macro_constants returned %d\n";
const char *aPpL202D = "LOG: call_macro_functions returned %d\n";
const char *aPpL203D = "LOG: call_conditional_compile returned %d\n";
const char *aPpL204D = "LOG: call_multi_branch_compile returned %d\n";
const char *aPpL301D = "LOG: call_macro_recursion returned %d\n";
const char *aPpL302D = "LOG: call_stringize returned %d\n";
const char *aPpL303D = "LOG: call_token_paste returned %d\n";
const char *aPpL304D = "LOG: call_variadic_macro returned %d\n";
const char *aPpL305D = "LOG: call_macro_override returned %d\n";
const char *aPpL306D = "LOG: call_include_guard returned %d\n";
const char *aPpL307D = "LOG: call_builtin_macros returned %d\n";
const char *asc_142E = "Testing ASM features...";
const char *aAsmL401D = "LOG: call_asm_basic returned %d\n";
const char *aAsmL402D = "LOG: call_asm_clobber returned %d\n";
const char *aAsmL403D = "LOG: call_asm_multi_insn returned %d\n";
const char *aAsmL404D = "LOG: call_asm_simd returned %d\n";
const char *aAsmL405D = "LOG: call_asm_atomic returned %d\n";
const char *aAsmL406D = "LOG: call_asm_privileged returned %lld\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-23/5-23_clang_O2_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x780 */
long long init_proc()
{
 return call_weak_fn();
}

/* Stub implementation for call_weak_fn */
long long call_weak_fn(void)
{
 return 0;
}


/* Function: sub_7A0 @ 0x7A0 */
void sub_7A0()
{
 JUMPOUT(0);
}

/* Stub implementation for JUMPOUT */
void JUMPOUT(int val)
{
 (void)val;
}


/* Function: init_have_lse_atomics @ 0x880 */
long _aarch64_have_lse_atomics = 0;

long init_have_lse_atomics()
{
 long result; // x0

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



/* Function: param_macro_constants @ 0x9D4 */
int param_macro_constants(int size)
{
 if ( size <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0x9E8 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x9F0 */
int param_macro_functions(int x, int y)
{
 int v2; // w8

 if ( x <= y )
 v2 = y;
 else
 v2 = x;
 return v2 + x * x;
}


/* Function: call_macro_functions @ 0xA00 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0xA08 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0xA14 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0xA1C */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0xA2C */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0xA34 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0xA3C */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0xA44 */
long long param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0xA4C */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0xA54 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0xA60 */
int param_token_paste(int x)
{
 return 11 * x + 5;
}


/* Function: call_token_paste @ 0xA70 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0xA78 */
int param_variadic_macro(int x, int y, int z)
{
 printf("LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0xAB0 */
int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0xADC */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0xAE8 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0xAF0 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0xAF8 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0xB00 */
int param_builtin_macros(int x)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:41");
 return x + 282;
}


/* Function: call_builtin_macros @ 0xB50 */
int call_builtin_macros()
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:41");
 return 382;
}


/* Function: test_preprocessing_features @ 0xB94 */
void test_preprocessing_features()
{
 puts(asc_1407);
 printf(aPpL201D, 64);
 printf(aPpL202D, 30);
 printf(aPpL203D, 32);
 printf(aPpL204D, 57122);
 printf(aPpL301D, 116);
 printf(aPpL302D, 19);
 printf(aPpL303D, 60);
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 printf(aPpL304D, 60);
 printf(aPpL305D, 16);
 printf(aPpL306D, 500);
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:41");
 printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0xCA4 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0xCAC */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0xCB4 */
int param_asm_clobber(int *arr, int n)
{
 long long v2; // x10
 int v3; // w8
 int *v5; // x8
 int32x4_t v6; // q0
 long long v7; // x11
 int32x4_t v8; // q1
 int32x4_t v9; // q2
 int32x4_t v10; // q3
 int *v11; // x11
 long long v12; // x9
 int v13; // t1

 if ( n < 1 )
 return 0;
 if ( (unsigned int)n >= 8 )
 {
 v2 = n & 0xFFFFFFF8;
 v5 = arr + 4;
 v6 = vdupq_n_s32(0);
 v7 = v2;
 v8 = vdupq_n_s32(0);
 do
 {
 v9 = *((int32x4_t *)v5 - 1);
 v10 = *(int32x4_t *)v5;
 v5 += 8;
 v7 -= 8;
 v6 = vaddq_s32(v9, v6);
 v8 = vaddq_s32(v10, v8);
 }
 while ( v7 );
 v3 = vaddvq_s32(vaddq_s32(v8, v6));
 if ( v2 == n )
 return v3;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 }
 v11 = &arr[v2];
 v12 = (unsigned int)n - v2;
 do
 {
 v13 = *v11++;
 --v12;
 v3 += v13;
 }
 while ( v12 );
 return v3;
}


/* Function: call_asm_clobber @ 0xD3C */
int call_asm_clobber()
{
 return 15;
}


/* Function: param_asm_multi_insn @ 0xD44 */
// attributes: thunk
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0xD48 */
int call_asm_multi_insn()
{
 return 42;
}


/* Function: param_asm_simd @ 0xD50 */
int param_asm_simd(int *a, int *b, int *result)
{
 int v3; // w8
 int v4; // w0

 *result = *b + *a;
 result[1] = b[1] + a[1];
 result[2] = b[2] + a[2];
 v3 = a[3];
 v4 = 0;
 result[3] = b[3] + v3;
 return v4;
}


/* Function: param_simd_intrinsics @ 0xD98 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 int v3; // w8
 int v4; // w0

 *result = *b + *a;
 result[1] = b[1] + a[1];
 result[2] = b[2] + a[2];
 v3 = a[3];
 v4 = 0;
 result[3] = b[3] + v3;
 return v4;
}


/* Function: call_asm_simd @ 0xDE0 */
int call_asm_simd()
{
 return 36;
}


/* Function: param_asm_atomic @ 0xDE8 */
int param_asm_atomic(int *counter, int increment)
{
 return _aarch64_ldadd4_acq_rel((unsigned int)increment, (unsigned int *)counter) + increment;
}


/* Function: param_atomic_c11 @ 0xE14 */
int param_atomic_c11(int *counter, int increment)
{
 return _aarch64_ldadd4_acq_rel((unsigned int)increment, (unsigned int *)counter) + increment;
}


/* Function: call_asm_atomic @ 0xE40 */
int call_asm_atomic()
{
 int v0; // w0
 unsigned int counter; // [xsp+Ch] [xbp-4h] BYREF

 counter = 10;
 v0 = _aarch64_ldadd4_acq_rel(5, &counter);
 return v0 + counter + 5;
}


/* Function: param_dynamic_code @ 0xE78 */
int param_dynamic_code(int x)
{
 size_t v2; // x20
 int v3; // w21
 void *v4; // x0

 v2 = sysconf(30);
 v3 = -1;
 v4 = mmap(0, v2, 7, 34, -1, 0);
 if ( v4 != (void *)-1LL )
 {
 v3 = x + 5;
 munmap(v4, v2);
 }
 return v3;
}


/* Function: param_memory_protection @ 0xEE0 */
int param_memory_protection()
{
 size_t v0; // x19
 int v1; // w21
 int *v2; // x0
 int *v3; // x20

 v0 = sysconf(30);
 v1 = -1;
 v2 = (int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v2 != (int *)-1LL )
 {
 v3 = v2;
 *v2 = 42;
 if ( mprotect(v2, v0, 1) )
 {
 v1 = -2;
 }
 else
 {
 v1 = *v3;
 if ( mprotect(v3, v0, 3) )
 v1 = -3;
 else
 *v3 = 100;
 }
 munmap(v3, v0);
 }
 return v1;
}


/* Function: param_clobber_importance @ 0xF90 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0xF9C */
int call_asm_privileged()
{
 size_t v0; // x20
 int v1; // w21
 void *v2; // x0
 void *v3; // x19

 v0 = sysconf(30);
 v1 = -1;
 v2 = mmap(0, v0, 7, 34, -1, 0);
 v3 = v2;
 if ( v2 != (void *)-1LL )
 {
 munmap(v2, v0);
 v1 = 15;
 }
 if ( param_memory_protection() != 42 || v3 == (void *)-1LL )
 return v1;
 else
 return 77;
}


/* Function: param_memory_clobber_demo @ 0x101C */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x102C */
void test_asm_features()
{
 int v0; // w0
 size_t v1; // x20
 unsigned int v2; // w21
 void *v3; // x0
 void *v4; // x19
 long long v6; // x1
 unsigned int v7; // [xsp+1Ch] [xbp+1Ch] BYREF

 puts(asc_142E);
 printf(aAsmL401D, 15);
 printf(aAsmL402D, 15);
 printf(aAsmL403D, 42);
 printf(aAsmL404D, 36);
 v7 = 10;
 v0 = _aarch64_ldadd4_acq_rel(5, &v7);
 printf(aAsmL405D, (unsigned int)(v0 + v7 + 5));
 v1 = sysconf(30);
 v2 = -1;
 v3 = mmap(0, v1, 7, 34, -1, 0);
 v4 = v3;
 if ( v3 != (void *)-1LL )
 {
 munmap(v3, v1);
 v2 = 15;
 }
 if ( param_memory_protection() != 42 || v4 == (void *)-1LL )
 v6 = v2;
 else
 v6 = 77;
 printf(aAsmL406D, v6);
}


/* Function: main @ 0x1130 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: _aarch64_ldadd4_acq_rel @ 0x1150 */
long long _aarch64_ldadd4_acq_rel(unsigned int a1, unsigned int *a2)
{
 unsigned int result; // x0

 if ( _aarch64_have_lse_atomics )
 {
 _Atomic unsigned int *atomic_ptr = (_Atomic unsigned int *)a2;
 return (long long)atomic_fetch_add(atomic_ptr, a1);
 }
 do
 result = __ldaxr((unsigned int *)a2);
 while ( __stlxr(result + a1, (unsigned int *)a2) );
 return (long long)result;
}


/* Function: .term_proc @ 0x1180 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x120D8 */

/* FAILED to decompile: __libc_start_main @ 0x120E0 */

/* FAILED to decompile: __cxa_finalize @ 0x120E8 */

/* FAILED to decompile: __getauxval @ 0x120F0 */

/* FAILED to decompile: abort @ 0x120F8 */

/* FAILED to decompile: puts @ 0x12100 */

/* FAILED to decompile: mmap @ 0x12108 */

/* FAILED to decompile: munmap @ 0x12110 */

/* FAILED to decompile: sysconf @ 0x12118 */

/* FAILED to decompile: printf @ 0x12120 */

/* FAILED to decompile: mprotect @ 0x12128 */

/* FAILED to decompile: __gmon_start__ @ 0x12138 */

/* Total functions decompiled: 54, failed: 12 */
