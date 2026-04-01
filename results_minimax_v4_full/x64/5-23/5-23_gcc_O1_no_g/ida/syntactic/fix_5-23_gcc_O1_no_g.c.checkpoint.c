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
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Global variable declaration */
unsigned int global_var = 0;

/* External declarations - removed _gmon_start__ (CRT stub) */

/* String constants */
const char asc_21F0[] = "=== Preprocessing Features Test ===\n";
const char aPpL201D[] = "param_macro_constants(64) = %d\n";
const char aPpL202D[] = "call_macro_constants() = %d\n";
const char aPpL203D[] = "param_conditional_compile(10) = %d\n";
const char aPpL204D[] = "param_multi_branch_compile(10) = %d\n";
const char aPpL301D[] = "param_macro_recursion(100) = %d\n";
const char aPpL302D[] = "param_stringize() = %d\n";
const char aPpL303D[] = "param_token_paste(5) = %d\n";
const char aPpL304D[] = "call_variadic_macro() = %d\n";
const char aPpL305D[] = "param_macro_override(5) = %d\n";
const char aPpL306D[] = "param_include_guard() = %d\n";
const char aPpL307D[] = "call_builtin_macros() = %d\n";

const char asc_2298[] = "=== Assembly Features Test ===\n";
const char aAsmL401D[] = "call_asm_basic() = %d\n";
const char aAsmL402D[] = "call_asm_clobber() = %d\n";
const char aAsmL403D[] = "call_asm_multi_insn() = %d\n";
const char aAsmL404D[] = "call_asm_simd() = %d\n";
const char aAsmL405D[] = "call_asm_atomic() = %d\n";
const char aAsmL406D[] = "call_asm_privileged() = %d\n";

/* Include for SIMD intrinsics */
#include <immintrin.h>
#include <stddef.h>

/* Define JUMPOUT macro - used for jump tables in decompiled code */
#define JUMPOUT(x) ((void(*)())(x))()

/* Define __readfsqword - reads from FS segment register (stack canary) */
/* On Linux, we just return 0 as these are canary reads */
static inline unsigned long long __readfsqword(unsigned long offset)
{
    volatile unsigned long long val = 0;
    return val;
}

/* Define _InterlockedExchangeAdd using GCC builtins */
static inline int _InterlockedExchangeAdd(volatile int *ptr, int val)
{
    return __sync_fetch_and_add((int*)ptr, val);
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-23/5-23_gcc_O1_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 /* _gmon_start__ is a CRT stub that may not exist - return NULL */
 return 0;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1020();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x11E9 */
long long param_macro_constants(int a1)
{
 long long result; // rax

 result = 512;
 if ( a1 > 1024 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x1201 */
long long call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x120B */
long long param_macro_functions(int a1, int a2)
{
 int v2; // eax

 v2 = a1 * a1;
 if ( a1 < a2 )
 a1 = a2;
 return (unsigned int)(a1 + v2);
}


/* Function: call_macro_functions @ 0x121C */
long long call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x1226 */
long long param_conditional_compile(int a1)
{
 return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0x122F */
long long call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x1239 */
long long param_multi_branch_compile(int a1)
{
 return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0x1245 */
long long call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x124F */
long long param_macro_recursion(int a1)
{
 return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0x1257 */
long long call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x1261 */
long long param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x126B */
long long call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x1275 */
long long my_func(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0x127F */
long long param_token_paste(int a1)
{
 return (unsigned int)(11 * a1 + 5);
}


/* Function: call_token_paste @ 0x128B */
long long call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1295 */
long long param_variadic_macro(int a1, int a2, int a3)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0x12BE */
long long call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x12DF */
long long param_macro_override(int a1)
{
 return (unsigned int)(3 * a1 + 1);
}


/* Function: call_macro_override @ 0x12E8 */
long long call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x12F2 */
long long param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x12FC */
long long call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x1306 */
long long param_builtin_macros(int a1)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:28");
 return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0x1356 */
long long call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x136D */
long long test_preprocessing_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax

 __printf_chk(1, asc_21F0);
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


/* Function: param_asm_basic @ 0x14C7 */
long long param_asm_basic(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0x14D5 */
long long call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x14E4 */
long long param_asm_clobber(long long a1, int a2)
{
 long long result; // rax
 int i; // rcx

 result = 0;
 for ( i = 0; i < a2; i++ )
 result += *(unsigned int *)(a1 + 4 * i);
 return (unsigned int)result;
}


/* Function: call_asm_clobber @ 0x14FC */
long long call_asm_clobber()
{
 unsigned long long v1[5]; // [rsp+0h] [rbp-28h] BYREF

 v1[3] = __readfsqword(0x28u);
 return param_asm_clobber((long long)v1, 5);
}


/* Function: param_asm_multi_insn @ 0x153B */
char param_asm_multi_insn(unsigned char *a1, char *a2, long long a3)
{
 char result; // al

 while ( a3 )
 {
 result = *a2;
 *a1++ = *a2++;
 --a3;
 }
 return result;
}


/* Function: call_asm_multi_insn @ 0x1556 */
long long call_asm_multi_insn()
{
 long long result; // rax
 char v1[10]; // [rsp+6h] [rbp-42h] BYREF
 unsigned long long v2[7]; // [rsp+10h] [rbp-38h] BYREF

 v2[5] = __readfsqword(0x28u);
 strcpy(v1, "Hello ASM");
 memset(v2, 0, 32);
 param_asm_multi_insn((unsigned char *)v2, v1, 9);
 if ( v1[0] != 72 )
 return 0xFFFFFFFFLL;
 result = 0xFFFFFFFFLL;
 if ( v1[1] == 111 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x15F6 */
long long param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a1, *a2);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x160D */
long long param_simd_intrinsics(__m128i *a1, const __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(_mm_load_si128(a2), *a1);
 return 0;
}


/* Function: call_asm_simd @ 0x1622 */
long long call_asm_simd()
{
 __m128i v1; // [rsp+0h] [rbp-48h] BYREF
 __m128i v2; // [rsp+10h] [rbp-38h] BYREF
 __m128i v3; // [rsp+20h] [rbp-28h] BYREF
 unsigned long long v4; // [rsp+38h] [rbp-10h]
 union {
   long long i64[2];
   int i32[4];
 } vu;

 v4 = __readfsqword(0x28u);
 v1 = _mm_set_epi64x(0x400000003LL, 0x200000001LL);
 v2 = _mm_set_epi64x(0x800000007LL, 0x600000005LL);
 param_asm_simd(&v1, &v2, &v3);
 vu.i64[0] = _mm_cvtsi128_si64(v3);
 vu.i64[1] = _mm_cvtsi128_si64(_mm_srli_si128(v3, 8));
 return (unsigned int)(vu.i32[0] + vu.i32[1] + vu.i32[2] + vu.i32[3]);
}


/* Function: param_asm_atomic @ 0x16B5 */
long long param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: param_atomic_c11 @ 0x16C2 */
long long param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: call_asm_atomic @ 0x16CF */
long long call_asm_atomic()
{
 signed int v0; // eax
 signed int v2; // [rsp+4h] [rbp-14h] BYREF
 unsigned long long v3; // [rsp+8h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 v2 = 10;
 v0 = _InterlockedExchangeAdd(&v2, 5u);
 return (unsigned int)(v0 + v2 + 5);
}


/* Function: param_dynamic_code @ 0x171F */
long long param_dynamic_code(unsigned int a1)
{
 size_t v1; // rbp
 unsigned int *v2; // rax
 void *v3; // rbx
 unsigned int v4; // r12d

 v1 = sysconf(30);
 v2 = mmap(0, v1, 7, 34, -1, 0);
 if ( v2 == (unsigned int *)-1LL )
 {
 return (unsigned int)-1;
 }
 else
 {
 v3 = v2;
 *v2 = -1065092983;
 *((unsigned short *)v2 + 2) = -15611;
 v4 = ((long long ( *)(unsigned long long))v2)(a1);
 munmap(v3, v1);
 }
 return v4;
}


/* Function: param_memory_protection @ 0x17BF */
long long param_memory_protection()
{
 size_t v0; // rbp
 unsigned int *v1; // rax
 unsigned int *v2; // rbx
 unsigned int v3; // r12d

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


/* Function: param_clobber_importance @ 0x1878 */
long long param_clobber_importance(int a1, int a2)
{
 return (unsigned int)(2 * (a2 + a1));
}


/* Function: call_asm_privileged @ 0x188C */
long long call_asm_privileged()
{
 unsigned int v0; // ebx
 int v1; // ebp
 int v2; // eax

 v0 = param_dynamic_code(0xAu);
 v1 = param_memory_protection();
 v2 = param_clobber_importance(3, 7);
 if ( v1 == 42 && v0 == 15 && v2 == 20 )
 return 77;
 return v0;
}


/* Function: param_memory_clobber_demo @ 0x18E1 */
long long param_memory_clobber_demo()
{
 return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x18F7 */
long long test_asm_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 __printf_chk(1, asc_2298);
 v0 = call_asm_basic();
 __printf_chk(1, aAsmL401D, v0);
 v1 = call_asm_clobber();
 __printf_chk(1, aAsmL402D, v1);
 v2 = call_asm_multi_insn();
 __printf_chk(1, aAsmL403D, v2);
 v3 = call_asm_simd();
 __printf_chk(1, aAsmL404D, v3);
 v4 = call_asm_atomic();
 __printf_chk(1, aAsmL405D, v4);
 v5 = call_asm_privileged();
 return __printf_chk(1, aAsmL406D, v5);
}


/* Function: main @ 0x19E6 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features(argc, argv, envp);
 test_asm_features();
 return 0;
}


/* Function: .term_proc @ 0x1A0C */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4020 */

/* FAILED to decompile: __stack_chk_fail @ 0x4028 */

/* FAILED to decompile: mmap @ 0x4030 */

/* FAILED to decompile: munmap @ 0x4038 */

/* FAILED to decompile: __printf_chk @ 0x4040 */

/* FAILED to decompile: mprotect @ 0x4048 */

/* FAILED to decompile: sysconf @ 0x4050 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4058 */

/* FAILED to decompile: __gmon_start__ @ 0x4068 */

/* Total functions decompiled: 57, failed: 9 */
