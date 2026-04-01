/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <unistd.h>
#include <emmintrin.h>
#include <stdint.h>

/* SSE type compatibility */
typedef __m128i xmmword_t;

/* __int128 support (GCC/Clang extension) */
#ifdef __SIZEOF_INT128__
typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
typedef unsigned __int128 u__int128;
#else
/* Fallback: use struct for 128-bit values */
typedef struct { uint64_t lo; uint64_t hi; } int128_t;
typedef struct { uint64_t lo; uint64_t hi; } uint128_t;
typedef struct { uint64_t lo; uint64_t hi; } u__int128;
#endif

/* Forward declarations for external symbols */
extern void *_gmon_start__;
extern int global_var;
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);
extern __m128i xmmword_2010;
extern __m128i xmmword_2020;
extern __m128i xmmword_2030;
extern __m128i xmmword_2040;
extern __m128i xmmword_231C;
extern char asc_22C9[];
extern char asc_22F0[];
extern char aPpL201D[];
extern char aPpL202D[];
extern char aPpL203D[];
extern char aPpL204D[];
extern char aPpL301D[];
extern char aPpL302D[];
extern char aPpL303D[];
extern char aPpL304D[];
extern char aPpL305D[];
extern char aPpL306D[];
extern char aPpL307D[];
extern char aAsmL401D[];
extern char aAsmL402D[];
extern char aAsmL403D[];
extern char aAsmL404D[];
extern char aAsmL405D[];
extern char aAsmL406D[];

/* Helper macros for __int128 access */
#ifdef __SIZEOF_INT128__
#define DWORD1(x) ((unsigned int)((uint64_t)(x) & 0xFFFFFFFF))
#define DWORD2(x) ((unsigned int)(((uint64_t)(x) >> 32) & 0xFFFFFFFF))
#define HIDWORD(x) ((unsigned int)(((uint64_t)(x) >> 32) & 0xFFFFFFFF))
#define LODWORD(x) ((unsigned int)((uint64_t)(x) & 0xFFFFFFFF))
#define LOBYTE(x) ((unsigned char)((x) & 0xFF))
#define BYTE4(x) ((unsigned char)(((x) >> 32) & 0xFF))
#else
/* Fallback macros using bitwise operations (works on any integer type) */
#define DWORD1(x) ((unsigned int)((uint64_t)(x) & 0xFFFFFFFF))
#define DWORD2(x) ((unsigned int)(((uint64_t)(x) >> 32) & 0xFFFFFFFF))
#define HIDWORD(x) ((unsigned int)(((uint64_t)(x) >> 32) & 0xFFFFFFFF))
#define LODWORD(x) ((unsigned int)((uint64_t)(x) & 0xFFFFFFFF))
#define LOBYTE(x) ((unsigned char)((x) & 0xFF))
#define BYTE4(x) ((unsigned char)(((x) >> 32) & 0xFF))
#endif

/* GCC atomic builtin wrapper for _InterlockedExchangeAdd */
#define _InterlockedExchangeAdd(p, v) __sync_fetch_and_add((p), (v))

/* qmemcpy is just memcpy */
#define qmemcpy(d, s, n) memcpy((d), (s), (n))

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_clang_O2_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp dword ptr [ebx+8]");
}


/* Function: sub_10B0 @ 0x10B0 */
int sub_10B0(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_10EC @ 0x10EC */
void sub_10EC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x10F0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1229 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x122D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_macro_constants @ 0x1240 */
int param_macro_constants(int a1)
{
 int result; // eax

 result = 512;
 if ( a1 >= 1025 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x1260 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x1270 */
int param_macro_functions(int a1, int a2)
{
 int v2; // eax

 v2 = a2;
 if ( a1 > a2 )
 v2 = a1;
 return a1 * a1 + v2;
}


/* Function: call_macro_functions @ 0x1290 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x12A0 */
int param_conditional_compile(int a1)
{
 return 3 * a1 + 2;
}


/* Function: call_conditional_compile @ 0x12B0 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x12C0 */
int param_multi_branch_compile(int a1)
{
 return 5 * a1 + 57072;
}


/* Function: call_multi_branch_compile @ 0x12D0 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x12E0 */
int param_macro_recursion(int a1)
{
 return a1 + 16;
}


/* Function: call_macro_recursion @ 0x12F0 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x1300 */
int param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x1310 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x1320 */
int my_func(int a1)
{
 return 10 * a1;
}


/* Function: param_token_paste @ 0x1330 */
int param_token_paste(int a1)
{
 return 11 * a1 + 5;
}


/* Function: call_token_paste @ 0x1340 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1350 */
int param_variadic_macro(int a1, int a2, int a3)
{
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return a1 + 50;
}


/* Function: call_variadic_macro @ 0x1390 */
int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x13C0 */
int param_macro_override(int a1)
{
 return 3 * a1 + 1;
}


/* Function: call_macro_override @ 0x13D0 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x13E0 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x13F0 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x1400 */
int param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:13");
 return a1 + 282;
}


/* Function: call_builtin_macros @ 0x1450 */
int call_builtin_macros()
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:13");
 return 382;
}


/* Function: test_preprocessing_features @ 0x14A0 */
int test_preprocessing_features()
{
 puts(asc_22C9);
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
 "03:00:13");
 return printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x15D0 */
int param_asm_basic(int a1)
{
 return a1 + 10;
}


/* Function: call_asm_basic @ 0x15E0 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x15F0 */
int param_asm_clobber(int a1, int a2)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < a2; ++i )
 result += *(unsigned int *)(a1 + 4 * i);
 return result;
}


/* Function: call_asm_clobber @ 0x1610 */
int call_asm_clobber()
{
 int result; // eax
 int i; // ecx
 __m128i v2; // [esp+0h] [ebp-1Ch]
 int v3; // [esp+10h] [ebp-Ch]

 v3 = 5;
 v2 = xmmword_231C;
 result = 0;
 for ( i = 0; i < 5; ++i )
 result += *((unsigned int *)&v2 + i);
 return result;
}


/* Function: param_asm_multi_insn @ 0x1660 */
char param_asm_multi_insn(unsigned char *a1, char *a2, int a3)
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


/* Function: call_asm_multi_insn @ 0x1680 */
int call_asm_multi_insn()
{
 int result; // eax
 char v1[12]; // [esp+4h] [ebp-38h] BYREF
 unsigned long long v2[2]; // [esp+10h] [ebp-2Ch] BYREF

 strcpy(v1, "Hello ASM");
 memset(v2, 0, sizeof(v2));
 qmemcpy(v2, v1, 9u);
 result = -1;
 if ( !(LOBYTE(v2[0]) ^ 0x48 | BYTE4(v2[0]) ^ 0x6F) )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x16F0 */
int param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a1, *a2);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x1710 */
int param_simd_intrinsics(__m128i *a1, const __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(_mm_load_si128(a2), *a1);
 return 0;
}


/* Function: call_asm_simd @ 0x1730 */
int call_asm_simd()
{
 __m128i si128; // xmm0
 __m128i v1; // xmm1
 __m128i v3[3]; // [esp+0h] [ebp-3Ch] BYREF

 v3[2] = xmmword_2030;
 v3[1] = xmmword_2040;
 v3[0] = _mm_add_epi32(xmmword_2030, xmmword_2040);
 si128 = _mm_load_si128(v3);
 v1 = _mm_add_epi32(_mm_shuffle_epi32(si128, 238), si128);
 return _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v1, 85), v1));
}


/* Function: param_asm_atomic @ 0x1790 */
unsigned int param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: param_atomic_c11 @ 0x17B0 */
unsigned int param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: call_asm_atomic @ 0x17D0 */
signed int call_asm_atomic()
{
 signed int v0; // eax
 signed int v2; // [esp+0h] [ebp-4h] BYREF

 v2 = 10;
 v0 = _InterlockedExchangeAdd(&v2, 5u);
 return v2 + v0 + 5;
}


/* Function: param_dynamic_code @ 0x17F0 */
int param_dynamic_code(int a1)
{
 size_t len; // esi
 void *v2; // eax
 int v3; // edi
 uint64_t *xmm_ptr;
 uint64_t xmm_val0, xmm_val1;
 unsigned int flags_val;
 int fd_val, offset_val;

 len = sysconf(30);
 xmm_ptr = (uint64_t*)&xmmword_2010;
 xmm_val0 = xmm_ptr[0];
 xmm_val1 = xmm_ptr[1];
 flags_val = (unsigned int)DWORD1(xmm_val0);
 fd_val = (int)DWORD2(xmm_val0);
 offset_val = (int)HIDWORD(xmm_val1);
 v2 = mmap(0, len, 7, flags_val, fd_val, (off_t)offset_val);
 if ( v2 == (void *)-1 )
 return -1;
 v3 = a1 + 5;
 munmap(v2, len);
 return v3;
}


/* Function: param_memory_protection @ 0x1860 */
int param_memory_protection()
{
 size_t len; // esi
 int *v1; // eax
 int *v2; // edi
 int v3; // ebp
 int v5; // [esp+18h] [ebp-14h]
 uint64_t *xmm_ptr_2020;
 uint64_t xmm_val0_2020, xmm_val1_2020;
 int flags_val_2020, fd_val_2020, offset_val_2020;

 len = sysconf(30);
 xmm_ptr_2020 = (uint64_t*)&xmmword_2020;
 xmm_val0_2020 = xmm_ptr_2020[0];
 xmm_val1_2020 = xmm_ptr_2020[1];
 flags_val_2020 = (int)xmm_val0_2020;
 fd_val_2020 = (int)(xmm_val0_2020 >> 32);
 offset_val_2020 = (int)xmm_val1_2020;
 v1 = (int *)mmap(0, len, 3, flags_val_2020, fd_val_2020, offset_val_2020);
 if ( v1 == (int *)-1 )
 return -1;
 v2 = v1;
 *v1 = 42;
 v3 = -2;
 if ( !mprotect(v1, len, 1) )
 {
 v5 = *v2;
 v3 = -3;
 if ( !mprotect(v2, len, 3) )
 {
 *v2 = 100;
 v3 = v5;
 }
 }
 munmap(v2, len);
 return v3;
}


/* Function: param_clobber_importance @ 0x1920 */
int param_clobber_importance(int a1, int a2)
{
 return 2 * (a2 + a1);
}


/* Function: call_asm_privileged @ 0x1940 */
int call_asm_privileged()
{
 size_t len; // edi
 void *v1; // eax
 void *v2; // esi
 int v3; // edi
 int v4; // ecx
 int result; // eax
 uint64_t *xmm_ptr_2010;
 uint64_t xmm_val0_2010, xmm_val1_2010;
 int flags_val_2010, fd_val_2010, offset_val_2010;

 len = sysconf(30);
 xmm_ptr_2010 = (uint64_t*)&xmmword_2010;
 xmm_val0_2010 = xmm_ptr_2010[0];
 xmm_val1_2010 = xmm_ptr_2010[1];
 flags_val_2010 = (int)xmm_val0_2010;
 fd_val_2010 = (int)(xmm_val0_2010 >> 32);
 offset_val_2010 = (int)xmm_val1_2010;
 v1 = mmap(0, len, 7, flags_val_2010, fd_val_2010, offset_val_2010);
 v2 = v1;
 if ( v1 == (void *)-1 )
 {
 v3 = -1;
 }
 else
 {
 munmap(v1, len);
 v3 = 15;
 }
 v4 = param_memory_protection() ^ 0x2A;
 result = 77;
 if ( v4 )
 result = v3;
 if ( v2 == (void *)-1 )
 return v3;
 return result;
}


/* Function: param_memory_clobber_demo @ 0x19E0 */
char *param_memory_clobber_demo()
{
 return (char *)global_var + 50;
}


/* Function: test_asm_features @ 0x1A00 */
int test_asm_features()
{
 int v0; // eax
 int i; // ecx
 int v2; // eax
 int v3; // ebp
 __m128i si128; // xmm0
 __m128i v5; // xmm1
 signed int v6; // esi
 size_t len; // edi
 void *v8; // eax
 void *v9; // esi
 int v10; // ecx
 int v11; // eax
 int128_t v13; // [esp+20h] [ebp-5Ch] BYREF
 __m128i v14; // [esp+30h] [ebp-4Ch] BYREF
 __m128i v15; // [esp+40h] [ebp-3Ch]
 __m128i v16[2]; // [esp+50h] [ebp-2Ch] BYREF
 uint64_t *xmm_ptr_2010_t;
 uint64_t xmm_val0_2010_t, xmm_val1_2010_t;
 int flags_val_2010_t, fd_val_2010_t, offset_val_2010_t;

 puts(asc_22F0);
 printf(aAsmL401D, 15);
 *((unsigned int *)&v15) = 5;
 v14 = xmmword_231C;
 v0 = 0;
 for ( i = 0; i < 5; ++i )
 v0 += *((unsigned int *)&v14 + i);
 printf(aAsmL402D, v0);
 strcpy((char *)&v13, "Hello ASM");
 v15 = _mm_setzero_si128();
 v14 = _mm_setzero_si128();
 qmemcpy(&v14, &v13, 9u);
 v2 = 42;
 v3 = -1;
 if ( (unsigned char)_mm_cvtsi128_si32(v14) ^ 0x48 | BYTE4(_mm_cvtsi128_si32(v14)) ^ 0x6F )
 v2 = -1;
 printf(aAsmL403D, v2);
 v14 = xmmword_2030;
 v13 = *(int128_t*)&xmmword_2040;
 v16[0] = _mm_add_epi32(xmmword_2030, xmmword_2040);
 si128 = _mm_load_si128(v16);
 v5 = _mm_add_epi32(_mm_shuffle_epi32(si128, 238), si128);
 printf(aAsmL404D, _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v5, 85), v5)));
 *((unsigned int *)&v14) = 10;
 v6 = _InterlockedExchangeAdd((volatile signed int *)&v14, 5u);
 printf(aAsmL405D, v6 + (unsigned int)_mm_cvtsi128_si32(v14) + 5);
 len = sysconf(30);
 xmm_ptr_2010_t = (uint64_t*)&xmmword_2010;
 xmm_val0_2010_t = xmm_ptr_2010_t[0];
 xmm_val1_2010_t = xmm_ptr_2010_t[1];
 flags_val_2010_t = (int)xmm_val0_2010_t;
 fd_val_2010_t = (int)(xmm_val0_2010_t >> 32);
 offset_val_2010_t = (int)xmm_val1_2010_t;
 v8 = mmap(0, len, 7, flags_val_2010_t, fd_val_2010_t, offset_val_2010_t);
 v9 = v8;
 if ( v8 != (void *)-1 )
 {
 munmap(v8, len);
 v3 = 15;
 }
 v10 = param_memory_protection() ^ 0x2A;
 v11 = 77;
 if ( v10 )
 v11 = v3;
 if ( v9 == (void *)-1 )
 v11 = v3;
 return printf(aAsmL406D, v11);
}


/* Function: main @ 0x1C10 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1C8C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x4040 */

/* FAILED to decompile: mprotect @ 0x4044 */

/* FAILED to decompile: printf @ 0x4048 */

/* FAILED to decompile: sysconf @ 0x404C */

/* FAILED to decompile: __cxa_finalize @ 0x4050 */

/* FAILED to decompile: puts @ 0x4054 */

/* FAILED to decompile: mmap @ 0x4058 */

/* FAILED to decompile: munmap @ 0x405C */

/* Total functions decompiled: 57, failed: 8 */
