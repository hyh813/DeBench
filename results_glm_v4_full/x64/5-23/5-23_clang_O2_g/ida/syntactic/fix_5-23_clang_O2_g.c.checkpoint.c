#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/mman.h>
#include <immintrin.h>
#include <stdatomic.h>

/* Define missing global variables */
static const char s[] = "=== Preprocessing Features Test ===";
static const char aPpL201D[] = "PPL201: macro_constants = %d\n";
static const char aPpL202D[] = "PPL202: macro_functions = %d\n";
static const char aPpL203D[] = "PPL203: conditional_compile = %d\n";
static const char aPpL204D[] = "PPL204: multi_branch_compile = %d\n";
static const char aPpL301D[] = "PPL301: macro_recursion = %d\n";
static const char aPpL302D[] = "PPL302: stringize = %d\n";
static const char aPpL303D[] = "PPL303: token_paste = %d\n";
static const char aPpL304D[] = "PPL304: variadic_macro = %d\n";
static const char aPpL305D[] = "PPL305: macro_override = %d\n";
static const char aPpL306D[] = "PPL306: include_guard = %d\n";
static const char aPpL307D[] = "PPL307: builtin_macros = %d\n";
static const char aAsmL401D[] = "ASM401: basic = %d\n";
static const char aAsmL402D[] = "ASM402: clobber = %d (v0=%lld i=%lld v1=%lld v2=%lld v12=%llx v13=%llx)\n";
static const char aAsmL403D[] = "ASM403: multi_insn = %d (str=%s flags=%x v5=%lld v6=%lld v12=%llx v13=%llx v14=%llx)\n";
static const char aAsmL404D[] = "ASM404: simd = %u\n";
static const char aAsmL405D[] = "ASM405: atomic = %u\n";
static const char aAsmL406D[] = "ASM406: privileged = %u\n";
static const char asc_22A4[] = "=== ASM Features Test ===";
static __m128i xmmword_22D0 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
static __m128i xmmword_22F0 = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160};
static __m128i xmmword_2300 = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600};
int global_var = 0;
extern void _gmon_start__(void);

/* Define missing functions */
#define JUMPOUT(x) __builtin_unreachable()

/* Define _InterlockedExchangeAdd for Linux/GCC compatibility */
static inline int _InterlockedExchangeAdd(volatile int *Target, int Value) {
    return __sync_fetch_and_add(Target, Value);
}

/* Define decompiler helper macros */
#define LODWORD(x) (*(uint32_t*)&(x))
#define HIDWORD(x) (*((uint32_t*)&(x) + 1))
#define BYTE1(x) (*((uint8_t*)&(x) + 1))
#define BYTE2(x) (*((uint8_t*)&(x) + 2))
#define BYTE3(x) (*((uint8_t*)&(x) + 3))
#define BYTE4(x) (*((uint8_t*)&(x) + 4))

static inline void qmemcpy(void *dst, const void *src, size_t n) {
    memcpy(dst, src, n);
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-23/5-23_clang_O2_g
 * Processor: pc
 */

/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x1190 */
int param_macro_constants(int size)
{
 int result; // eax

 result = 512;
 if ( size >= 1025 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x11B0 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x11C0 */
int param_macro_functions(int x, int y)
{
 if ( x > y )
 y = x;
 return y + x * x;
}


/* Function: call_macro_functions @ 0x11D0 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x11E0 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x11F0 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x1200 */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x1210 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x1220 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x1230 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x1240 */
long long param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0x1250 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x1260 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x1270 */
int param_token_paste(int x)
{
 return 11 * x + 5;
}


/* Function: call_token_paste @ 0x1280 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1290 */
int param_variadic_macro(int x, int y, int z)
{
 printf("LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x12B0 */
int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x12E0 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0x12F0 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x1300 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x1310 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x1320 */
int param_builtin_macros(int x)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:50");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x1360 */
int call_builtin_macros()
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:50");
 return 382;
}


/* Function: test_preprocessing_features @ 0x13A0 */
void test_preprocessing_features()
{
 puts(s);
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
 "03:00:50");
 printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x14D0 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x14E0 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x14F0 */
int param_asm_clobber(int *arr, int n)
{
 int result; // eax
 long long i; // rcx

 result = 0;
 for ( i = 0; (int)i < n; i = (unsigned int)(i + 1) )
 result += arr[i];
 return result;
}


/* Function: call_asm_clobber @ 0x1510 */
int call_asm_clobber()
{
 int result; // eax
 long long i; // rcx
 __int128 v2; // [rsp+0h] [rbp-18h]
 int v3; // [rsp+10h] [rbp-8h]

 v3 = 5;
 { typedef union { __m128i m; __int128 i; } m128i_int128_t; m128i_int128_t u; u.m = xmmword_22D0; v2 = u.i; }
 result = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 result += *((unsigned int *)&v2 + i);
 return result;
}


/* Function: param_asm_multi_insn @ 0x1550 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 qmemcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x1570 */
// local variable allocation has failed, the output may be wrong!
int call_asm_multi_insn()
{
 int result; // eax
 unsigned char v1[48]; // [rsp+0h] [rbp-38h] OVERLAPPED BYREF

 strcpy(v1, "Hello ASM");
 memset(&v1[16], 0, 32);
 qmemcpy(&v1[16], v1, 9u);
 result = -1;
 if ( !(v1[16] ^ 0x48 | v1[20] ^ 0x6F) )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x15E0 */
int param_asm_simd(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x15F0 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(_mm_load_si128((const __m128i *)b), *(__m128i *)a);
 return 0;
}


/* Function: call_asm_simd @ 0x1600 */
// local variable allocation has failed, the output may be wrong!
int call_asm_simd()
{
 __m128i si128; // xmm0
 __m128i v1; // xmm1
 __m128i v3[2]; // [rsp+0h] [rbp-38h] BYREF
 __m128i v4; // [rsp+20h] [rbp-18h] OVERLAPPED

 { typedef union { __m128i m; __int128 i; } m128i_int128_t; m128i_int128_t u; u.i = (__int128)xmmword_22F0; v4 = u.m; }
 v3[1] = (__m128i)xmmword_2300;
 v3[0] = _mm_add_epi32((__m128i)xmmword_22F0, (__m128i)xmmword_2300);
 si128 = _mm_load_si128(v3);
 v1 = _mm_add_epi32(_mm_shuffle_epi32(si128, 238), si128);
 return _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v1, 85), v1));
}


/* Function: param_asm_atomic @ 0x1660 */
int param_asm_atomic(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: param_atomic_c11 @ 0x1670 */
int param_atomic_c11(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: call_asm_atomic @ 0x1680 */
int call_asm_atomic()
{
 signed int v0; // eax
 signed int v2; // [rsp+0h] [rbp-4h] BYREF

 v2 = 10;
 v0 = _InterlockedExchangeAdd(&v2, 5u);
 return v2 + v0 + 5;
}


/* Function: param_dynamic_code @ 0x16A0 */
int param_dynamic_code(int x)
{
 size_t v1; // rbx
 unsigned int *v2; // rax
 void *v3; // rbp
 int v4; // r14d

 v1 = sysconf(30);
 v2 = mmap(0, v1, 7, 34, -1, 0);
 if ( v2 == (unsigned int *)-1LL )
 return -1;
 v3 = v2;
 *((unsigned short *)v2 + 2) = -15611;
 *v2 = -1065092983;
 v4 = ((long long ( *)(unsigned long long))v2)((unsigned int)x);
 munmap(v3, v1);
 return v4;
}


/* Function: param_memory_protection @ 0x1710 */
int param_memory_protection()
{
 size_t v0; // r14
 int v1; // ebp
 int *v2; // rax
 int *v3; // rbx
 int v4; // r15d

 v0 = sysconf(30);
 v1 = -1;
 v2 = (int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v2 != (int *)-1LL )
 {
 v3 = v2;
 *v2 = 42;
 v1 = -2;
 if ( !mprotect(v2, v0, 1) )
 {
 v4 = *v3;
 v1 = -3;
 if ( !mprotect(v3, v0, 3) )
 {
 *v3 = 100;
 v1 = v4;
 }
 }
 munmap(v3, v0);
 }
 return v1;
}


/* Function: param_clobber_importance @ 0x17B0 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x17C0 */
int call_asm_privileged()
{
 size_t v0; // r14
 int v1; // ebp
 unsigned int *v2; // rax
 void *v3; // rbx
 int v4; // ecx
 int result; // eax

 v0 = sysconf(30);
 v1 = -1;
 v2 = mmap(0, v0, 7, 34, -1, 0);
 if ( v2 != (unsigned int *)-1LL )
 {
 v3 = v2;
 *((unsigned short *)v2 + 2) = -15611;
 *v2 = -1065092983;
 v1 = ((long long ( *)(long long))v2)(10);
 munmap(v3, v0);
 }
 v4 = v1 ^ 0xF | param_memory_protection() ^ 0x2A;
 result = 77;
 if ( v4 )
 return v1;
 return result;
}


/* Function: param_memory_clobber_demo @ 0x1870 */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x1890 */
void test_asm_features()
{
 long long v0; // rdx
 long long v1; // r8
 long long v2; // r9
 unsigned int v3; // eax
 long long i; // rcx
 long long v5; // r8
 long long v6; // r9
 long long v7; // rsi
 __m128i si128; // xmm0
 __m128i v9; // xmm1
 signed int v10; // ebx
 unsigned int v11; // eax
 __int128 v12; // [rsp+0h] [rbp-58h] BYREF
 __int128 v13; // [rsp+10h] [rbp-48h]
 __int128 v14; // [rsp+20h] [rbp-38h] BYREF
 __m128i v15[2]; // [rsp+30h] [rbp-28h] BYREF
 __m128i v16; // [rsp+0h] [rbp-58h] BYREF
 __m128i v17; // [rsp+10h] [rbp-48h]
 __m128i v18; // [rsp+20h] [rbp-38h] BYREF

 /* Union for safe __m128i to __int128 conversion */
 typedef union { __m128i m; __int128 i; } m128i_int128_t;

 puts(asc_22A4);
 printf(aAsmL401D, 15);
 LODWORD(v17) = 5;
 v16 = xmmword_22D0;
 v3 = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 v3 += *((unsigned int *)&v12 + i);
 printf(aAsmL402D, v3, v0, i, v1, v2, v12, (unsigned long long)v13);
 strcpy((char *)&v14, "Hello ASM");
 v13 = 0;
 v12 = 0;
 qmemcpy(&v12, &v14, 9u);
 v7 = 0xFFFFFFFFLL;
 if ( !((unsigned char)v12 ^ 0x48 | BYTE4(v12) ^ 0x6F) )
 v7 = 42;
 printf(aAsmL403D, v7, (char *)&v14 + 9, (unsigned char)v12 ^ 0x48 | BYTE4(v12) ^ 0x6Fu, v5, v6, v12, v13, v14);
 { m128i_int128_t u; u.m = xmmword_22F0; v12 = u.i; }
 { m128i_int128_t u; u.m = xmmword_2300; v14 = u.i; }
 v15[0] = _mm_add_epi32((__m128i)xmmword_22F0, (__m128i)xmmword_2300);
 si128 = _mm_load_si128(v15);
 v9 = _mm_add_epi32(_mm_shuffle_epi32(si128, 238), si128);
 printf(aAsmL404D, (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v9, 85), v9)));
 LODWORD(v12) = 10;
 v10 = _InterlockedExchangeAdd((volatile signed int *)&v12, 5u);
 printf(aAsmL405D, (unsigned int)(v10 + v12 + 5));
 v11 = call_asm_privileged();
 printf(aAsmL406D, v11);
}


/* Function: main @ 0x1A00 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: .term_proc @ 0x1A10 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4068 */

/* FAILED to decompile: puts @ 0x4070 */

/* FAILED to decompile: mmap @ 0x4078 */

/* FAILED to decompile: printf @ 0x4080 */

/* FAILED to decompile: munmap @ 0x4088 */

/* FAILED to decompile: mprotect @ 0x4090 */

/* FAILED to decompile: sysconf @ 0x4098 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40A0 */

/* FAILED to decompile: __gmon_start__ @ 0x40B0 */

/* Total functions decompiled: 51, failed: 9 */
