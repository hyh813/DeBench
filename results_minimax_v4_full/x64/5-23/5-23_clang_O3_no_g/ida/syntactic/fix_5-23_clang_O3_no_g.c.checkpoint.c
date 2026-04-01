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

/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <emmintrin.h>

/* Missing assembly/compiler intrinsics and macros */
#define LODWORD(x) (*(unsigned int*)&(x))
#define HIDWORD(x) (*((unsigned int*)&(x) + 1))
#define HILOWORD(x) (((x) >> 16) & 0xFFFF)
#define BYTE4(x) (((x) >> 32) & 0xFF)
#define LOBYTE(x) ((unsigned char)((x) & 0xFF))
#define JUMPOUT(addr) ((void(*)())(addr))()
#define qmemcpy(d, s, n) memcpy((d), (s), (n))

/* Missing _InterlockedExchangeAdd intrinsic */
#ifdef _MSC_VER
#define _InterlockedExchangeAdd(ptr, val) InterlockedExchangeAdd(ptr, val)
#else
static inline int _InterlockedExchangeAdd(volatile int *ptr, int val) {
    int old;
    __asm__ __volatile__("lock; xaddl %0, %1" : "=r"(old), "+m"(*ptr) : "0"(val) : "memory");
    return old;
}
#endif

/* Missing string constants */
static const char s[] = "some_string";
static const char aPpL201D[] = "Preprocessing test: %d\n";
static const char aPpL202D[] = "Preprocessing test: %d\n";
static const char aPpL203D[] = "Preprocessing test: %d\n";
static const char aPpL204D[] = "Preprocessing test: %d\n";
static const char aPpL301D[] = "Preprocessing test: %d\n";
static const char aPpL302D[] = "Preprocessing test: %d\n";
static const char aPpL303D[] = "Preprocessing test: %d\n";
static const char aPpL304D[] = "Preprocessing test: %d\n";
static const char aPpL305D[] = "Preprocessing test: %d\n";
static const char aPpL306D[] = "Preprocessing test: %d\n";
static const char aPpL307D[] = "Preprocessing test: %d\n";
static const char aAsmL401D[] = "ASM basic: %d\n";
static const char aAsmL402D[] = "ASM clobber: %d, %lld, %lld, %lld, %lld, %llx, %llu\n";
static const char aAsmL403D[] = "ASM multi: %d, %s, %u, %lld, %lld, %llx, %llu, %llx\n";
static const char aAsmL404D[] = "ASM SIMD: %u\n";
static const char aAsmL405D[] = "ASM atomic: %u\n";
static const char aAsmL406D[] = "ASM privileged: %u\n";
static const char asc_22A4[] = "ASM Test";

/* Missing SIMD constants */
static const unsigned char xmmword_22D0[16] = {0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00};
static const unsigned char xmmword_22F0[16] = {0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00};
static const unsigned char xmmword_2300[16] = {0x05, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00};

/* Missing global variable */
static int global_var = 100;

/* Missing gmon_start symbol */
static void (*_gmon_start__)(void) = NULL;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-23/5-23_clang_O3_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&_gmon_start__;
 if ( &_gmon_start__ )
 {
 _gmon_start__();
 }
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x1190 */
long long param_macro_constants(int a1)
{
 long long result; // rax

 result = 512;
 if ( a1 >= 1025 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x11B0 */
long long call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x11C0 */
long long param_macro_functions(int a1, int a2)
{
 if ( a1 > a2 )
 a2 = a1;
 return (unsigned int)(a2 + a1 * a1);
}


/* Function: call_macro_functions @ 0x11D0 */
long long call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x11E0 */
long long param_conditional_compile(int a1)
{
 return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0x11F0 */
long long call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x1200 */
long long param_multi_branch_compile(int a1)
{
 return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0x1210 */
long long call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x1220 */
long long param_macro_recursion(int a1)
{
 return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0x1230 */
long long call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x1240 */
long long param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x1250 */
long long call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x1260 */
long long my_func(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0x1270 */
long long param_token_paste(int a1)
{
 return (unsigned int)(11 * a1 + 5);
}


/* Function: call_token_paste @ 0x1280 */
long long call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1290 */
long long param_variadic_macro(int a1, int a2, int a3)
{
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0x12B0 */
long long call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x12E0 */
long long param_macro_override(int a1)
{
 return (unsigned int)(3 * a1 + 1);
}


/* Function: call_macro_override @ 0x12F0 */
long long call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x1300 */
long long param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x1310 */
long long call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x1320 */
long long param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:56");
 return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0x1360 */
long long call_builtin_macros()
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:56");
 return 382;
}


/* Function: test_preprocessing_features @ 0x13A0 */
int test_preprocessing_features()
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
 "03:00:56");
 return printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x14D0 */
long long param_asm_basic(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0x14E0 */
long long call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x14F0 */
long long param_asm_clobber(long long a1, int a2)
{
 long long result; // rax
 long long i; // rcx

 LODWORD(result) = 0;
 for ( i = 0; (int)i < a2; i = (unsigned int)(i + 1) )
 LODWORD(result) = *(unsigned int *)(a1 + 4 * i) + result;
 return (unsigned int)result;
}


/* Function: call_asm_clobber @ 0x1510 */
long long call_asm_clobber()
{
 long long result; // rax
 long long i; // rcx
 __m128i v2; // [rsp+0h] [rbp-18h]
 int v3; // [rsp+10h] [rbp-8h]

 v3 = 5;
 v2 = *(__m128i*)xmmword_22D0;
 LODWORD(result) = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 LODWORD(result) = *((unsigned int *)&v2 + i) + result;
 return (unsigned int)result;
}


/* Function: param_asm_multi_insn @ 0x1550 */
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


/* Function: call_asm_multi_insn @ 0x1570 */
long long call_asm_multi_insn()
{
 long long result; // rax
 char v1[16]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v2[2]; // [rsp+10h] [rbp-28h] BYREF

 strcpy(v1, "Hello ASM");
 memset(v2, 0, sizeof(v2));
 qmemcpy(v2, v1, 9u);
 result = 0xFFFFFFFFLL;
 if ( !(LOBYTE(v2[0]) ^ 0x48 | BYTE4(v2[0]) ^ 0x6F) )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x15E0 */
long long param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a1, *a2);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x15F0 */
long long param_simd_intrinsics(__m128i *a1, const __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(_mm_load_si128(a2), *a1);
 return 0;
}


/* Function: call_asm_simd @ 0x1600 */
long long call_asm_simd()
{
 __m128i si128; // xmm0
 __m128i v1; // xmm1
 __m128i v3[3]; // [rsp+0h] [rbp-38h] BYREF

 v3[2] = _mm_load_si128((const __m128i*)xmmword_22F0);
 v3[1] = _mm_load_si128((const __m128i*)xmmword_2300);
 v3[0] = _mm_add_epi32(v3[2], v3[1]);
 si128 = _mm_load_si128((const __m128i*)v3);
 v1 = _mm_add_epi32(_mm_shuffle_epi32(si128, 238), si128);
 return (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v1, 85), v1));
}


/* Function: param_asm_atomic @ 0x1660 */
long long param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: param_atomic_c11 @ 0x1670 */
long long param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: call_asm_atomic @ 0x1680 */
long long call_asm_atomic()
{
 signed int v0; // eax
 signed int v2; // [rsp+0h] [rbp-4h] BYREF

 v2 = 10;
 v0 = _InterlockedExchangeAdd(&v2, 5u);
 return (unsigned int)(v2 + v0 + 5);
}


/* Function: param_dynamic_code @ 0x16A0 */
long long param_dynamic_code(unsigned int a1)
{
 size_t v1; // rbx
 unsigned int *v2; // rax
 void *v3; // rbp
 unsigned int v4; // r14d

 v1 = sysconf(30);
 v2 = mmap(0, v1, 7, 34, -1, 0);
 if ( v2 == (unsigned int *)-1LL )
 return 0xFFFFFFFFLL;
 v3 = v2;
 *((unsigned short *)v2 + 2) = -15611;
 *v2 = -1065092983;
 v4 = ((long long ( *)(unsigned long long))v2)(a1);
 munmap(v3, v1);
 return v4;
}


/* Function: param_memory_protection @ 0x1710 */
long long param_memory_protection()
{
 size_t v0; // r14
 unsigned int v1; // ebp
 unsigned int *v2; // rax
 unsigned int *v3; // rbx
 unsigned int v4; // r15d

 v0 = sysconf(30);
 v1 = -1;
 v2 = (unsigned int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v2 != (unsigned int *)-1LL )
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
long long param_clobber_importance(int a1, int a2)
{
 return (unsigned int)(2 * (a2 + a1));
}


/* Function: call_asm_privileged @ 0x17C0 */
long long call_asm_privileged()
{
 size_t v0; // r15
 int v1; // ebx
 unsigned int *v2; // rax
 unsigned int v3; // r14d
 void *v4; // rbp
 size_t v5; // r15
 int *v6; // rax
 int *v7; // rbp
 int v8; // r13d
 long long result; // rax

 v0 = sysconf(30);
 v1 = -1;
 v2 = mmap(0, v0, 7, 34, -1, 0);
 v3 = -1;
 if ( v2 != (unsigned int *)-1LL )
 {
 v4 = v2;
 *((unsigned short *)v2 + 2) = -15611;
 *v2 = -1065092983;
 v3 = ((long long ( *)(long long))v2)(10);
 munmap(v4, v0);
 }
 v5 = sysconf(30);
 v6 = (int *)mmap(0, v5, 3, 34, -1, 0);
 if ( v6 != (int *)-1LL )
 {
 v7 = v6;
 *v6 = 42;
 v1 = -2;
 if ( !mprotect(v6, v5, 1) )
 {
 v8 = *v7;
 v1 = -3;
 if ( !mprotect(v7, v5, 3) )
 {
 *v7 = 100;
 v1 = v8;
 }
 }
 munmap(v7, v5);
 }
 result = 77;
 if ( v3 ^ 0xF | v1 ^ 0x2A )
 return v3;
 return result;
}


/* Function: param_memory_clobber_demo @ 0x1900 */
long long param_memory_clobber_demo()
{
 return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x1920 */
int test_asm_features()
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
 __int128 v13; // [rsp+0h] [rbp-58h] BYREF
 __int128 v14; // [rsp+10h] [rbp-48h]
 __int128 v15; // [rsp+20h] [rbp-38h] BYREF
 __m128i v16[2]; // [rsp+30h] [rbp-28h] BYREF

 puts(asc_22A4);
 printf(aAsmL401D, 15);
 LODWORD(v14) = 5;
 v13 = (__int128)xmmword_22D0;
 v3 = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 v3 += *((unsigned int *)&v13 + i);
 printf(aAsmL402D, v3, v0, i, v1, v2, v13, (unsigned long long)v14);
 strcpy((char *)&v15, "Hello ASM");
 v14 = 0;
 v13 = 0;
 qmemcpy(&v13, &v15, 9u);
 v7 = 0xFFFFFFFFLL;
 if ( !((unsigned char)v13 ^ 0x48 | BYTE4(v13) ^ 0x6F) )
 v7 = 42;
 printf(aAsmL403D, v7, (char *)&v15 + 9, (unsigned char)v13 ^ 0x48 | BYTE4(v13) ^ 0x6Fu, v5, v6, v13, v14, v15);
 v13 = (__int128)_mm_load_si128((const __m128i*)xmmword_22F0);
 v15 = (__int128)_mm_load_si128((const __m128i*)xmmword_2300);
 v16[0] = _mm_add_epi32(_mm_load_si128((const __m128i*)xmmword_22F0), _mm_load_si128((const __m128i*)xmmword_2300));
 si128 = _mm_load_si128(v16);
 v9 = _mm_add_epi32(_mm_shuffle_epi32(si128, 238), si128);
 printf(aAsmL404D, (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v9, 85), v9)));
 LODWORD(v13) = 10;
 v10 = _InterlockedExchangeAdd((volatile signed int *)&v13, 5u);
 printf(aAsmL405D, (unsigned int)(v10 + v13 + 5));
 v11 = call_asm_privileged();
 return printf(aAsmL406D, v11);
}


/* Function: main @ 0x1A90 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: .term_proc @ 0x1AA0 */
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
