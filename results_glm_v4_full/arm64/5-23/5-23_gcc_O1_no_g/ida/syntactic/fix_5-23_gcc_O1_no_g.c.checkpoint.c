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
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

/* IDA decompiler helper macros */
#define LODWORD(x) (((uint32_t*)(&x))[0])
#define HIBYTE(x)  ((uint8_t)(((uintptr_t)(x) >> 24) & 0xFF))
#define LOBYTE(x)  ((uint8_t)(x))
#define BYTE4(x)   ((uint8_t)(((uintptr_t)(x) >> 32) & 0xFF))

/* External function declarations */
extern long long call_weak_fn(void);
extern void JUMPOUT(long long target);
extern unsigned long __getauxval(unsigned long type);
extern long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);
extern unsigned int __ldaxr(const volatile unsigned int *addr);
extern unsigned int __stlxr(unsigned int val, volatile unsigned int *addr);

/* Global variable for LSE atomics support */
extern int _aarch64_have_lse_atomics;

/* String constants for printf output */
extern const char asc_1320[];
extern const char aPpL201D[];
extern const char aPpL202D[];
extern const char aPpL203D[];
extern const char aPpL204D[];
extern const char aPpL301D[];
extern const char aPpL302D[];
extern const char aPpL303D[];
extern const char aPpL304D[];
extern const char aPpL305D[];
extern const char aPpL306D[];
extern const char aPpL307D[];
extern const char asc_14D8[];
extern const char aAsmL401D[];
extern const char aAsmL402D[];
extern const char aAsmL403D[];
extern const char aAsmL404D[];
extern const char aAsmL405D[];
extern const char aAsmL406D[];

/* Global variable */
extern int global_var;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-23/5-23_gcc_O1_no_g
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



/* Function: param_macro_constants @ 0xA54 */
long long param_macro_constants(int a1)
{
 if ( a1 > 1024 )
 return 64;
 else
 return 512;
}


/* Function: call_macro_constants @ 0xA68 */
long long call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0xA70 */
long long param_macro_functions(int a1, int a2)
{
 if ( a1 >= a2 )
 a2 = a1;
 return (unsigned int)(a2 + a1 * a1);
}


/* Function: call_macro_functions @ 0xA80 */
long long call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0xA88 */
long long param_conditional_compile(int a1)
{
 return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0xA94 */
long long call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0xA9C */
long long param_multi_branch_compile(int a1)
{
 return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0xAAC */
long long call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0xAB4 */
long long param_macro_recursion(int a1)
{
 return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0xABC */
long long call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0xAC4 */
long long param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0xACC */
long long call_stringize()
{
 return 19;
}


/* Function: my_func @ 0xAD4 */
long long my_func(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0xAE0 */
long long param_token_paste(int a1)
{
 return (unsigned int)(a1 + 5 + 10 * a1);
}


/* Function: call_token_paste @ 0xAF0 */
long long call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0xAF8 */
long long param_variadic_macro(int a1, int a2, int a3)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0xB34 */
long long call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0xB54 */
long long param_macro_override(int a1)
{
 return (unsigned int)(3 * a1 + 1);
}


/* Function: call_macro_override @ 0xB60 */
long long call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0xB68 */
long long param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0xB70 */
long long call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0xB78 */
long long param_builtin_macros(int a1)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:28");
 return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0xBCC */
long long call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0xBE4 */
long long test_preprocessing_features()
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
 return __printf_chk(1, aPpL307D, v1);
}


/* Function: param_asm_basic @ 0xCE8 */
long long param_asm_basic(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0xCF0 */
long long call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0xCF8 */
long long param_asm_clobber(long long a1, int a2)
{
 long long v3; // x2
 long long result; // x0

 if ( a2 <= 0 )
 return 0;
 v3 = 0;
 LODWORD(result) = 0;
 do
 result = (unsigned int)(result + *(unsigned int *)(a1 + 4 * v3++));
 while ( a2 > (int)v3 );
 return result;
}


/* Function: call_asm_clobber @ 0xD2C */
long long call_asm_clobber()
{
 unsigned long long v1[2]; // [xsp+10h] [xbp+10h] BYREF
 int v2; // [xsp+20h] [xbp+20h]

 v1[0] = 0x200000001LL;
 v1[1] = 0x400000003LL;
 v2 = 5;
 return param_asm_clobber((long long)v1, 5);
}


/* Function: param_asm_multi_insn @ 0xD94 */
void * param_asm_multi_insn(void *a1, const void *a2, size_t a3)
{
 return memcpy(a1, a2, a3);
}


/* Function: call_asm_multi_insn @ 0xDA8 */
long long call_asm_multi_insn()
{
 char v1[16]; // [xsp+18h] [xbp+18h] BYREF
 unsigned long long v2[4]; // [xsp+28h] [xbp+28h] BYREF

 strcpy(v1, "Hello ASM");
 memset(v2, 0, sizeof(v2));
 param_asm_multi_insn(v2, v1, 9u);
 if ( LOBYTE(v2[0]) != 72 )
 return 0xFFFFFFFFLL;
 if ( BYTE4(v2[0]) == 111 )
 return 42;
 return 0xFFFFFFFFLL;
}


/* Function: param_asm_simd @ 0xE40 */
long long param_asm_simd(long long a1, long long a2, long long a3)
{
 long long i; // x3

 for ( i = 0; i != 16; i += 4 )
 *(unsigned int *)(a3 + i) = *(unsigned int *)(a1 + i) + *(unsigned int *)(a2 + i);
 return 0;
}


/* Function: param_simd_intrinsics @ 0xE68 */
long long param_simd_intrinsics(long long a1, long long a2, long long a3)
{
 long long i; // x3

 for ( i = 0; i != 16; i += 4 )
 *(unsigned int *)(a3 + i) = *(unsigned int *)(a1 + i) + *(unsigned int *)(a2 + i);
 return 0;
}


/* Function: call_asm_simd @ 0xE90 */
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


/* Function: param_asm_atomic @ 0xF40 */
long long param_asm_atomic(long long a1, unsigned int a2)
{
 return (unsigned int)_aarch64_ldadd4_acq_rel(a2, (atomic_uint *)a1) + a2;
}


/* Function: param_atomic_c11 @ 0xF6C */
long long param_atomic_c11(long long a1, unsigned int a2)
{
 return (unsigned int)_aarch64_ldadd4_acq_rel(a2, (atomic_uint *)a1) + a2;
}


/* Function: call_asm_atomic @ 0xF98 */
long long call_asm_atomic()
{
 int v0; // w0
 int v2; // [xsp+14h] [xbp+14h] BYREF

 v2 = 10;
 v0 = param_asm_atomic((long long)&v2, 5u);
 return (unsigned int)(v0 + v2);
}


/* Function: param_dynamic_code @ 0xFF8 */
long long param_dynamic_code(int a1)
{
 size_t v2; // x20
 void *v3; // x0
 unsigned int v4; // w19

 v2 = sysconf(30);
 v3 = mmap(0, v2, 7, 34, -1, 0);
 if ( v3 == (void *)-1LL )
 {
 return (unsigned int)-1;
 }
 else
 {
 v4 = a1 + 5;
 munmap(v3, v2);
 }
 return v4;
}


/* Function: param_memory_protection @ 0x105C */
long long param_memory_protection()
{
 size_t v0; // x20
 unsigned int *v1; // x0
 unsigned int *v2; // x19
 unsigned int v3; // w21

 v0 = sysconf(30);
 v1 = mmap(0, v0, 3, 34, -1, 0);
 if ( v1 == (unsigned int *)-1LL )
 {
 return (unsigned int)-1;
 }
 else
 {
 v2 = v1;
 *v1 = 42;
 if ( mprotect(v1, v0, 1) )
 {
 munmap(v2, v0);
 return (unsigned int)-2;
 }
 else
 {
 v3 = *v2;
 if ( mprotect(v2, v0, 3) )
 {
 munmap(v2, v0);
 return (unsigned int)-3;
 }
 else
 {
 *v2 = 100;
 munmap(v2, v0);
 }
 }
 }
 return v3;
}


/* Function: param_clobber_importance @ 0x112C */
long long param_clobber_importance(int a1, int a2)
{
 return (unsigned int)(2 * (a1 + a2));
}


/* Function: call_asm_privileged @ 0x1138 */
long long call_asm_privileged()
{
 unsigned int v0; // w19

 v0 = param_dynamic_code(10);
 if ( (unsigned int)param_memory_protection() == 42 && v0 == 15 )
 return 77;
 else
 return v0;
}


/* Function: param_memory_clobber_demo @ 0x1170 */
long long param_memory_clobber_demo()
{
 return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x1180 */
long long test_asm_features()
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
 return __printf_chk(1, aAsmL406D, v4);
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
 unsigned int current_value; // w0
 unsigned int status; // w1

 if ( _aarch64_have_lse_atomics )
 return atomic_fetch_add(a2, a1);
 do
 {
 current_value = __ldaxr((unsigned int *)a2);
 status = __stlxr(current_value + a1, (unsigned int *)a2);
 } while ( status != 0 );
 return current_value;
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
