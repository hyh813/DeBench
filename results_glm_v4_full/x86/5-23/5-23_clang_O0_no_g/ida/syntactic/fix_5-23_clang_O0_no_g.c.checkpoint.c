/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t defined in stddef.h */
/* ssize_t defined in unistd.h */
/* uintptr_t, intptr_t defined in stdint.h */
/* ptrdiff_t defined in stddef.h */
/* intmax_t, uintmax_t defined in stdint.h */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <sys/mman.h>
#include <unistd.h>
#include <emmintrin.h>

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_clang_O0_no_g
 * Processor: pc
 */

/* Global variable definition */
int global_var[100];

/* Data constants */
const unsigned char unk_32EC[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

/* String constants */
static const char asc_3099[] = "\n=== Preprocessing Features Test ===\n";
static const char aPpL201D[] = "PP1.01: %d\n";
static const char aPpL202D[] = "PP1.02: %d\n";
static const char aPpL203D[] = "PP1.03: %d\n";
static const char aPpL204D[] = "PP1.04: %d\n";
static const char aPpL301D[] = "PP3.01: %d\n";
static const char aPpL302D[] = "PP3.02: %zu\n";
static const char aPpL303D[] = "PP3.03: %d\n";
static const char aPpL304D[] = "PP3.04: %d\n";
static const char aPpL305D[] = "PP3.05: %d\n";
static const char aPpL306D[] = "PP3.06: %d\n";
static const char aPpL307D[] = "PP3.07: %d\n";

static const char asc_3217[] = "\n=== ASM Features Test ===\n";
static const char aAsmL401D[] = "ASM4.01: %d\n";
static const char aAsmL402D[] = "ASM4.02: %d\n";
static const char aAsmL403D[] = "ASM4.03: %d\n";
static const char aAsmL404D[] = "ASM4.04: %d\n";
static const char aAsmL405D[] = "ASM4.05: %d\n";
static const char aAsmL406D[] = "ASM4.06: %d\n";

/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *8(%%ebx)" :::);
}


/* Function: sub_10D0 @ 0x10D0 */
int sub_10D0(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_110C @ 0x110C */
void sub_110C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1110 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1249 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x124D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_macro_constants @ 0x1260 */
int param_macro_constants(int a1)
{
 if ( a1 <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0x1290 */
int call_macro_constants()
{
 return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0x12C0 */
int param_macro_functions(int a1, int a2)
{
 int v3; // [esp+0h] [ebp-8h]

 if ( a1 <= a2 )
 v3 = a2;
 else
 v3 = a1;
 return v3 + a1 * a1;
}


/* Function: call_macro_functions @ 0x1300 */
int call_macro_functions()
{
 return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0x1330 */
int param_conditional_compile(int a1)
{
 return 3 * a1 + 2;
}


/* Function: call_conditional_compile @ 0x1350 */
int call_conditional_compile()
{
 return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0x1380 */
int param_multi_branch_compile(int a1)
{
 return 5 * a1 + 57072;
}


/* Function: call_multi_branch_compile @ 0x13A0 */
int call_multi_branch_compile()
{
 return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0x13D0 */
int param_macro_recursion(int a1)
{
 return a1 + 16;
}


/* Function: call_macro_recursion @ 0x1410 */
int call_macro_recursion()
{
 return param_macro_recursion(100);
}


/* Function: param_stringize @ 0x1440 */
size_t param_stringize()
{
 size_t v1; // [esp+10h] [ebp-18h]
 size_t v2; // [esp+14h] [ebp-14h]

 v1 = strlen("Hello World");
 v2 = strlen("1.2.3") + v1;
 return strlen("155") + v2;
}


/* Function: call_stringize @ 0x14C0 */
size_t call_stringize()
{
 return param_stringize();
}


/* Function: my_func @ 0x14F0 */
int my_func(int a1)
{
 return 10 * a1;
}


/* Function: param_token_paste @ 0x1500 */
int param_token_paste(int a1)
{
 return my_func(a1) + a1 + 5;
}


/* Function: call_token_paste @ 0x1540 */
int call_token_paste()
{
 return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0x1570 */
int param_variadic_macro(int a1, int a2, int a3)
{
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return a1 + 50;
}


/* Function: call_variadic_macro @ 0x15D0 */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x1610 */
int param_macro_override(int a1)
{
 return 2 * a1 + a1 + 1;
}


/* Function: call_macro_override @ 0x1640 */
int call_macro_override()
{
 return param_macro_override(5);
}


/* Function: param_include_guard @ 0x1670 */
int param_include_guard()
{
 return header_func(5);
}


/* Function: header_func @ 0x16A0 */
int header_func(int a1)
{
 return 100 * a1;
}


/* Function: call_include_guard @ 0x16B0 */
int call_include_guard()
{
 return param_include_guard();
}


/* Function: param_builtin_macros @ 0x16D0 */
int param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:06",
 "03:00:06");
 return a1 + 282;
}


/* Function: call_builtin_macros @ 0x1780 */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x17B0 */
int test_preprocessing_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 size_t v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax

 printf(asc_3099);
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


/* Function: param_asm_basic @ 0x1920 */
int param_asm_basic(int a1)
{
 return a1 + 10;
}


/* Function: call_asm_basic @ 0x1950 */
int call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x1980 */
int param_asm_clobber(int a1, int a2)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < a2; ++i )
 result += *(unsigned int *)(a1 + 4 * i);
 return result;
}


/* Function: call_asm_clobber @ 0x19D0 */
int call_asm_clobber()
{
 unsigned char dest[24]; // [esp+10h] [ebp-18h] BYREF

 memcpy(dest, &unk_32EC, 0x14u);
 return param_asm_clobber((int)dest, 5);
}


/* Function: param_asm_multi_insn @ 0x1A20 */
int param_asm_multi_insn(void *a1, const void *a2, unsigned int a3)
{
 memcpy(a1, a2, a3);
 return 0;
}


/* Function: call_asm_multi_insn @ 0x1A70 */
int call_asm_multi_insn()
{
 int result; // eax
 bool v1; // [esp+19h] [ebp-2Fh]
 unsigned char s[32]; // [esp+1Ah] [ebp-2Eh] BYREF
 char v3[14]; // [esp+3Ah] [ebp-Eh] BYREF

 strcpy(v3, "Hello ASM");
 memset(s, 0, sizeof(s));
 param_asm_multi_insn(s, v3, 9u);
 v1 = 0;
 if ( s[0] == 72 )
 v1 = s[4] == 111;
 result = -1;
 if ( v1 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x1B20 */
int param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a1, *a2);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x1B50 */
int param_simd_intrinsics(const __m128i *a1, const __m128i *a2, __m128i *a3)
{
 __m128i v3; // xmm0
 __m128i v4; // xmm0
 __m128i v6; // [esp+0h] [ebp-78h] BYREF
 __m128i v7; // [esp+10h] [ebp-68h] BYREF
 __m128i si128; // [esp+20h] [ebp-58h] BYREF
 const __m128i *v9; // [esp+38h] [ebp-40h]
 const __m128i *v10; // [esp+3Ch] [ebp-3Ch]
 __m128i v11; // [esp+40h] [ebp-38h] BYREF
 __m128i v12; // [esp+50h] [ebp-28h] BYREF
 __m128i v13; // [esp+60h] [ebp-18h] BYREF
 __m128i *v14; // [esp+74h] [ebp-4h]

 v10 = a1;
 si128 = _mm_load_si128(a1);
 v9 = a2;
 v7 = _mm_load_si128(a2);
 v3 = _mm_load_si128(&v7);
 v12 = _mm_load_si128(&si128);
 v11 = v3;
 v6 = _mm_add_epi32(_mm_load_si128(&v12), _mm_load_si128(&v11));
 v4 = _mm_load_si128(&v6);
 v14 = a3;
 v13 = v4;
 *a3 = _mm_load_si128(&v13);
 return 0;
}


/* Function: call_asm_simd @ 0x1BD0 */
int call_asm_simd()
{
 __m128i v1; // [esp+14h] [ebp-34h] BYREF
 __m128i v2; // [esp+24h] [ebp-24h] BYREF
 __m128i v3; // [esp+34h] [ebp-14h] BYREF
 union { __m128i v; int64_t i64[2]; int32_t i32[4]; } u3, u2, u1;

 u3.i64[0] = 0x200000001LL;
 u3.i64[1] = 0x400000003LL;
 u2.i64[0] = 0x600000005LL;
 u2.i64[1] = 0x800000007LL;
 v3 = u3.v;
 v2 = u2.v;
 param_asm_simd(&v3, &v2, &v1);
 u1.v = v1;
 return u1.i32[3] + u1.i32[2] + u1.i32[1] + u1.i32[0];
}


/* Function: param_asm_atomic @ 0x1C60 */
unsigned int param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return a2 + __sync_fetch_and_add(a1, a2);
}


/* Function: param_atomic_c11 @ 0x1C90 */
unsigned int param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return a2 + __sync_fetch_and_add(a1, a2);
}


/* Function: call_asm_atomic @ 0x1CC0 */
int call_asm_atomic()
{
 unsigned int v1; // [esp+Ch] [ebp-Ch]
 signed int v2; // [esp+10h] [ebp-8h] BYREF

 v2 = 10;
 v1 = param_asm_atomic(&v2, 5u);
 return v1 + v2;
}


/* Function: param_dynamic_code @ 0x1D00 */
int param_dynamic_code(int a1)
{
 void *addr; // [esp+28h] [ebp-10h]
 int len; // [esp+2Ch] [ebp-Ch]

 len = sysconf(30);
 addr = mmap(0, len, 7, 34, -1, 0);
 if ( addr == (void *)-1 )
 return -1;
 munmap(addr, len);
 return a1 + 5;
}


/* Function: param_memory_protection @ 0x1DB0 */
int param_memory_protection()
{
 int v1; // [esp+20h] [ebp-18h]
 int *addr; // [esp+28h] [ebp-10h]
 int len; // [esp+2Ch] [ebp-Ch]

 len = sysconf(30);
 addr = (int *)mmap(0, len, 3, 34, -1, 0);
 if ( addr == (int *)-1 )
 return -1;
 *addr = 42;
 if ( mprotect(addr, len, 1) )
 {
 munmap(addr, len);
 return -2;
 }
 else
 {
 v1 = *addr;
 if ( mprotect(addr, len, 3) )
 {
 munmap(addr, len);
 return -3;
 }
 else
 {
 *addr = 100;
 munmap(addr, len);
 return v1;
 }
 }
}


/* Function: param_clobber_importance @ 0x1F00 */
int param_clobber_importance(int a1, int a2)
{
 return 2 * (a2 + a1);
}


/* Function: call_asm_privileged @ 0x1F40 */
int call_asm_privileged()
{
 int v1; // [esp+14h] [ebp-14h]
 int v2; // [esp+18h] [ebp-10h]
 int v3; // [esp+1Ch] [ebp-Ch]

 v3 = param_dynamic_code(10);
 v2 = param_memory_protection();
 v1 = param_clobber_importance(3, 7);
 if ( v3 == 15 && v2 == 42 && v1 == 20 )
 return 77;
 else
 return v3;
}


/* Function: param_memory_clobber_demo @ 0x1FD0 */
char *param_memory_clobber_demo()
{
 return (char *)global_var + 50;
}


/* Function: test_asm_features @ 0x2010 */
int test_asm_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 printf(asc_3217);
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


/* Function: main @ 0x20F0 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* FAILED to decompile: __libc_start_main @ 0x5048 */

/* FAILED to decompile: mprotect @ 0x504C */

/* FAILED to decompile: printf @ 0x5050 */

/* FAILED to decompile: memcpy @ 0x5054 */

/* FAILED to decompile: sysconf @ 0x5058 */

/* FAILED to decompile: __cxa_finalize @ 0x505C */

/* FAILED to decompile: mmap @ 0x5060 */

/* FAILED to decompile: strlen @ 0x5064 */

/* FAILED to decompile: memset @ 0x5068 */

/* FAILED to decompile: munmap @ 0x506C */

/* Total functions decompiled: 58, failed: 10 */
