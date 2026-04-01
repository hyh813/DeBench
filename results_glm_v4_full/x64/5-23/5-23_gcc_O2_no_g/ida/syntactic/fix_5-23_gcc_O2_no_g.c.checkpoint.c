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

#include <emmintrin.h>
#include <sys/mman.h>
#include <unistd.h>

/* Helper union for m128i access */
typedef union {
  __m128i v;
  long long i64[2];
  int i32[4];
} m128i_union;

/* Helper macros for byte access */
#define LOBYTE(x) ((unsigned char)((x) & 0xFF))
#define BYTE4(x) ((unsigned char)(((x) >> 32) & 0xFF))
#define LODWORD(x) (*((uint32_t*)(&(x))))

int global_var = 0;

const char asc_21F0[] = "Preprocessing Features:\n";
const char aPpL201D[] = "MACRO_CONSTANTS: %d\n";
const char aPpL202D[] = "MACRO_FUNCTIONS: %d\n";
const char aPpL203D[] = "CONDITIONAL_COMPILE: %d\n";
const char aPpL204D[] = "MULTI_BRANCH_COMPILE: %d\n";
const char aPpL301D[] = "MACRO_RECURSION: %d\n";
const char aPpL302D[] = "STRINGIZE: %d\n";
const char aPpL303D[] = "TOKEN_PASTE: %d\n";
const char aPpL304D[] = "VARIADIC_MACRO: %d\n";
const char aPpL305D[] = "MACRO_OVERRIDE: %d\n";
const char aPpL306D[] = "INCLUDE_GUARD: %d\n";
const char aPpL307D[] = "BUILTIN_MACROS: %d\n";
const char asc_2298[] = "ASM Features:\n";
const char aAsmL401D[] = "ASM_BASIC: %d\n";
const char aAsmL402D[] = "ASM_CLOBBER: %d\n";
const char aAsmL403D[] = "ASM_MULTI_INSN: %d\n";
const char aAsmL404D[] = "ASM_SIMD: %d\n";
const char aAsmL405D[] = "ASM_ATOMIC: %d\n";
const char aAsmL406D[] = "ASM_PRIVILEGED: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-23/5-23_gcc_O2_no_g
 * Processor: pc
 */

/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 return;
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


/* Function: main @ 0x1100 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features(argc, argv, envp);
 test_asm_features();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x1210 */
long long param_macro_constants(int a1)
{
 long long result; // rax

 result = 512;
 if ( a1 > 1024 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x1230 */
long long call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x1240 */
long long param_macro_functions(int a1, int a2)
{
 int v2; // eax

 v2 = a1 * a1;
 if ( a1 < a2 )
 a1 = a2;
 return (unsigned int)(a1 + v2);
}


/* Function: call_macro_functions @ 0x1260 */
long long call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x1270 */
long long param_conditional_compile(int a1)
{
 return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0x1280 */
long long call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x1290 */
long long param_multi_branch_compile(int a1)
{
 return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0x12A0 */
long long call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x12B0 */
long long param_macro_recursion(int a1)
{
 return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0x12C0 */
long long call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x12D0 */
long long param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x12E0 */
long long call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x12F0 */
long long my_func(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0x1300 */
long long param_token_paste(int a1)
{
 return (unsigned int)(11 * a1 + 5);
}


/* Function: call_token_paste @ 0x1310 */
long long call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1320 */
long long param_variadic_macro(int a1, int a2, int a3)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0x1350 */
long long call_variadic_macro()
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x1390 */
long long param_macro_override(int a1)
{
 return (unsigned int)(3 * a1 + 1);
}


/* Function: call_macro_override @ 0x13A0 */
long long call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x13B0 */
long long param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x13C0 */
long long call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x13D0 */
long long param_builtin_macros(int a1)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:32");
 return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0x1420 */
long long call_builtin_macros()
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:32");
 return 382;
}


/* Function: test_preprocessing_features @ 0x1470 */
void test_preprocessing_features(int argc, const char **argv, const char **envp)
{
 __printf_chk(1, asc_21F0);
 __printf_chk(1, aPpL201D, 64);
 __printf_chk(1, aPpL202D, 30);
 __printf_chk(1, aPpL203D, 32);
 __printf_chk(1, aPpL204D, 57122);
 __printf_chk(1, aPpL301D, 116);
 __printf_chk(1, aPpL302D, 19);
 __printf_chk(1, aPpL303D, 60);
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 __printf_chk(1, aPpL304D, 60);
 __printf_chk(1, aPpL305D, 16);
 __printf_chk(1, aPpL306D, 500);
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:32");
 __printf_chk(1, aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x1600 */
long long param_asm_basic(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0x1610 */
long long call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x1630 */
long long param_asm_clobber(long long a1, int a2)
{
 long long result; // rax
 long long i; // rcx

 LODWORD(result) = 0;
 for ( i = 0; (int)i < a2; i = (unsigned int)(i + 1) )
 LODWORD(result) = *(unsigned int *)(a1 + 4 * i) + result;
 return (unsigned int)result;
}


/* Function: call_asm_clobber @ 0x1650 */
long long call_asm_clobber()
{
 long long result; // rax
 long long i; // rcx
 unsigned int v2[6]; // [rsp+0h] [rbp-28h]
 unsigned long long v3; // [rsp+18h] [rbp-10h]

 v3 = 0;
 result = 0;
 memset(v2, 0, sizeof(v2));
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 result = (result & ~0xFFFFFFFFLL) | ((unsigned int)(v2[i] + (unsigned int)result));
 return (unsigned int)result;
}


/* Function: param_asm_multi_insn @ 0x16A0 */
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


/* Function: call_asm_multi_insn @ 0x16C0 */
long long call_asm_multi_insn()
{
 long long result; // rax
 char v1[10]; // [rsp+6h] [rbp-42h] BYREF
 unsigned long long v2[2]; // [rsp+10h] [rbp-38h] BYREF
 unsigned long long v3; // [rsp+38h] [rbp-10h]

 v3 = 0;
 memset(v2, 0, sizeof(v2));
 strcpy(v1, "Hello ASM");
 memcpy(v2, v1, 9u);
 if ( ((unsigned int)v2[0] & 0xFF) != 72 )
 return 0xFFFFFFFFLL;
 result = 0xFFFFFFFFLL;
 if ( ((unsigned int)(v2[0] >> 32) & 0xFF) == 111 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x1760 */
long long param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a1, *a2);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x1780 */
long long param_simd_intrinsics(__m128i *a1, const __m128i *a2, __m128i *a3)
{
 long long result; // rax

 result = 0;
 *a3 = _mm_add_epi32(_mm_load_si128(a2), *a1);
 return result;
}


/* Function: call_asm_simd @ 0x17A0 */
long long call_asm_simd()
{
 __m128i v1; // [rsp+0h] [rbp-48h]
 __m128i v2; // [rsp+10h] [rbp-38h]
 __m128i v3; // [rsp+20h] [rbp-28h]
 m128i_union u1, u2, u3;

 u1.i64[0] = (long long)0x200000001LL;
 u1.i64[1] = (long long)0x400000003LL;
 u2.i64[0] = (long long)0x600000005LL;
 u2.i64[1] = (long long)0x800000007LL;
 v1 = u1.v;
 v2 = u2.v;
 v3 = _mm_add_epi32(v1, v2);
 u3.v = v3;
 return (unsigned int)(u3.i32[0] + u3.i32[1] + u3.i32[2] + u3.i32[3]);
}


/* Function: param_asm_atomic @ 0x1840 */
long long param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return a2 + __sync_fetch_and_add(a1, a2);
}


/* Function: param_atomic_c11 @ 0x1850 */
long long param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return a2 + __sync_fetch_and_add(a1, a2);
}


/* Function: call_asm_atomic @ 0x1860 */
long long call_asm_atomic()
{
 signed int v0; // eax
 signed int v2; // [rsp+4h] [rbp-14h] BYREF
 unsigned long long v3; // [rsp+8h] [rbp-10h]

 v3 = 0;
 v2 = 10;
 v0 = __sync_fetch_and_add(&v2, 5u);
 return (unsigned int)(v0 + v2 + 5);
}


/* Function: param_dynamic_code @ 0x18B0 */
long long param_dynamic_code(unsigned int a1)
{
 size_t v1; // r12
 void *v2; // rax
 void *v3; // rbp
 unsigned int v4; // r13d
 typedef unsigned int (*func_ptr_t)(unsigned int);
 func_ptr_t func_ptr;

 v1 = sysconf(30);
 v2 = mmap(0, v1, 7, 34, -1, 0);
 if ( v2 == (void *)-1 )
 {
 return (unsigned int)-1;
 }
 else
 {
 v3 = v2;
 *(unsigned int *)v2 = 0xC0C7C031;
 {
   uint8_t *p = (uint8_t *)v2;
   p[4] = 0xC3;
   p[5] = 0xC7;
 }
 typedef unsigned int (*func_ptr_t)(unsigned int);
 func_ptr_t fp = (func_ptr_t)v2;
 v4 = fp(a1);
 munmap(v3, v1);
 }
 return v4;
}


/* Function: param_memory_protection @ 0x1950 */
long long param_memory_protection()
{
 size_t v0; // r12
 void *v1; // rax
 unsigned int *v2; // rbp
 void *v2_void; // helper for mprotect/munmap
 unsigned int v3; // r13d

 v0 = sysconf(30);
 v1 = mmap(0, v0, 3, 34, -1, 0);
 if ( v1 == (void *)-1 )
 {
 return (unsigned int)-1;
 }
 else
 {
 v2 = (unsigned int *)v1;
 *v2 = 42;
 if ( mprotect(v1, v0, 1) )
 {
 v3 = 0xFFFFFFFEu;
 munmap(v1, v0);
 }
 else
 {
 v3 = *v2;
 if ( mprotect(v1, v0, 3) )
 {
 v3 = 0xFFFFFFFDu;
 munmap(v1, v0);
 }
 else
 {
 *v2 = 100;
 munmap(v1, v0);
 }
 }
 }
 return v3;
}


/* Function: param_clobber_importance @ 0x1A20 */
long long param_clobber_importance(int a1, int a2)
{
 return (unsigned int)(2 * (a2 + a1));
}


/* Function: call_asm_privileged @ 0x1A40 */
long long call_asm_privileged()
{
 unsigned int v0; // r12d
 int v1; // esi

 v0 = param_dynamic_code(0xAu);
 v1 = param_memory_protection();
 if ( v0 == 15 && v1 == 42 )
 return 77;
 return v0;
}


/* Function: param_memory_clobber_demo @ 0x1AA0 */
long long param_memory_clobber_demo()
{
 return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x1AC0 */
void test_asm_features()
{
 unsigned int v0; // eax
 long long i; // rcx
 unsigned int v2; // eax
 unsigned int v3; // eax
 signed int v4; // ebx
 long long v5; // rdx
 signed int v7[7]; // [rsp+Ch] [rbp-2Ch] BYREF
 unsigned long long v8; // [rsp+28h] [rbp-10h];

 v8 = 0;
 __printf_chk(1, asc_2298);
 __printf_chk(1, aAsmL401D, 15);
 v0 = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 v0 += v7[i + 1];
 __printf_chk(1, aAsmL402D, v0);
 v2 = (unsigned int)call_asm_multi_insn();
 __printf_chk(1, aAsmL403D, v2);
 v3 = call_asm_simd();
 __printf_chk(1, aAsmL404D, v3);
 v7[0] = 10;
 v4 = __sync_fetch_and_add(v7, 5u);
 __printf_chk(1, aAsmL405D, (unsigned int)(v4 + v7[0] + 5));
 v5 = (unsigned int)call_asm_privileged();
 __printf_chk(1, aAsmL406D, v5);
}


/* Function: .term_proc @ 0x1BCC */
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
