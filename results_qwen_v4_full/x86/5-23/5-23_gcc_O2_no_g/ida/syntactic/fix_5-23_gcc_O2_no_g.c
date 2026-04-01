/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <emmintrin.h>

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_gcc_O2_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
extern void *_gmon_start__;
extern char *asc_21F4;
extern char *aPpL201D;
extern char *aPpL202D;
extern char *aPpL203D;
extern char *aPpL204D;
extern char *aPpL301D;
extern char *aPpL302D;
extern char *aPpL303D;
extern char *aPpL304D;
extern char *aPpL305D;
extern char *aPpL306D;
extern char *aPpL307D;
extern char *asc_2294;
extern char *aAsmL401D;
extern char *aAsmL402D;
extern char *aAsmL403D;
extern char *aAsmL404D;
extern char *aAsmL405D;
extern char *aAsmL406D;
int init_proc()
{
 if ( _gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *%%ebx+8" ::: "memory");
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
int sub_10B0(int a1)
{
 return (*(int (**)(void))(a1 + 44))();
}


/* Function: main @ 0x1130 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_117C @ 0x117C */
void sub_117C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1180 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x12B9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12BD */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_macro_constants @ 0x12D0 */
int param_macro_constants(int a1)
{
 int result; // eax

 result = 512;
 if ( a1 > 1024 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x12F0 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x1300 */
int param_macro_functions(int a1, int a2)
{
 int v2; // edx

 v2 = a1;
 if ( a1 < a2 )
 v2 = a2;
 return v2 + a1 * a1;
}


/* Function: call_macro_functions @ 0x1320 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x1330 */
int param_conditional_compile(int a1)
{
 return 3 * a1 + 2;
}


/* Function: call_conditional_compile @ 0x1340 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x1350 */
int param_multi_branch_compile(int a1)
{
 return 5 * a1 + 57072;
}


/* Function: call_multi_branch_compile @ 0x1360 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x1370 */
int param_macro_recursion(int a1)
{
 return a1 + 16;
}


/* Function: call_macro_recursion @ 0x1380 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x1390 */
int param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x13A0 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x13B0 */
int my_func(int a1)
{
 return 10 * a1;
}


/* Function: param_token_paste @ 0x13C0 */
int param_token_paste(int a1)
{
 return 11 * a1 + 5;
}


/* Function: call_token_paste @ 0x13D0 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x13E0 */
int param_variadic_macro(int a1, int a2, int a3)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return a1 + 50;
}


/* Function: call_variadic_macro @ 0x1420 */
int call_variadic_macro()
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x1460 */
int param_macro_override(int a1)
{
 return 3 * a1 + 1;
}


/* Function: call_macro_override @ 0x1470 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x1480 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x1490 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x14A0 */
int param_builtin_macros(int a1)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "02:59:54");
 return a1 + 282;
}


/* Function: call_builtin_macros @ 0x14F0 */
int call_builtin_macros()
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "02:59:54");
 return 382;
}


/* Function: test_preprocessing_features @ 0x1540 */
int test_preprocessing_features()
{
 __printf_chk(1, asc_21F4);
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
 "02:59:54");
 return __printf_chk(1, aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x1690 */
int param_asm_basic(int a1)
{
 return a1 + 10;
}


/* Function: call_asm_basic @ 0x16B0 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x16D0 */
int param_asm_clobber(int a1, int a2)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < a2; ++i )
 result += *(unsigned int *)(a1 + 4 * i);
 return result;
}


/* Function: call_asm_clobber @ 0x1700 */
int call_asm_clobber()
{
 int result; // eax
 int i; // ecx
 unsigned int v2[9]; // [esp+8h] [ebp-24h]

 v2[5] = __readgsdword(0x14u);
 result = 0;
 for ( i = 0; i < 5; ++i )
 result += v2[i];
 return result;
}


/* Function: param_asm_multi_insn @ 0x1750 */
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


/* Function: call_asm_multi_insn @ 0x1780 */
int call_asm_multi_insn()
{
 int result; // eax
 char v1[10]; // [esp+2h] [ebp-3Ah] BYREF
 long double v2; // [esp+Ch] [ebp-30h] BYREF
 int v3; // [esp+18h] [ebp-24h]
 int v4; // [esp+1Ch] [ebp-20h]
 int v5; // [esp+20h] [ebp-1Ch]
 int v6; // [esp+24h] [ebp-18h]
 int v7; // [esp+28h] [ebp-14h]
 unsigned int v8; // [esp+2Ch] [ebp-10h]

 v8 = __readgsdword(0x14u);
 strcpy(v1, "Hello ASM");
 HIDWORD(v2) = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 qmemcpy(&v2, v1, 9u);
 if ( LOBYTE(v2) != 72 )
 return -1;
 result = -1;
 if ( BYTE4(v2) == 111 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x1850 */
int param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 __m128i result = _mm_add_epi32(*a1, *a2);
 _mm_store_si128(a3, result);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x1870 */
int param_simd_intrinsics(__m128i *a1, const __m128i *a2, __m128i *a3)
{
 __m128i result = _mm_add_epi32(_mm_load_si128(a2), *a1);
 _mm_store_si128(a3, result);
 return 0;
}


/* Function: call_asm_simd @ 0x1890 */
long long call_asm_simd()
{
 union { __m128i v; long long i64[2]; int i32[4]; } v1, v2, v3;

 v1.i64[0] = 0x200000001LL;
 v1.i64[1] = 0x400000003LL;
 v2.i64[0] = 0x600000005LL;
 v2.i64[1] = 0x800000007LL;
 v3.v = _mm_add_epi32(v1.v, v2.v);
 return (unsigned int)(v3.i32[3] + v3.i32[2] + v3.i32[0] + v3.i32[1]);
}


/* Function: param_asm_atomic @ 0x1930 */
unsigned int param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return __sync_fetch_and_add(a1, a2) + a2;
}


/* Function: param_atomic_c11 @ 0x1950 */
unsigned int param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return a2 + __sync_fetch_and_add(a1, a2);
}


/* Function: call_asm_atomic @ 0x1970 */
long long call_asm_atomic()
{
 signed int v0; // eax
 long long result; // rax
 signed int v2; // [esp+8h] [ebp-14h] BYREF
 unsigned int v3; // [esp+Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 v2 = 10;
 v0 = __sync_fetch_and_add(&v2, 5u);
 result = (long long)(unsigned int)(v0 + v2 + 5) | ((long long)(v3 - __readgsdword(0x14u)) << 32);
 return result;
}


/* Function: param_dynamic_code @ 0x19C0 */
int param_dynamic_code(int a1)
{
 size_t v1; // esi
 void *v2; // eax
 int v3; // edi

 v1 = sysconf(30);
 v2 = mmap(0, v1, 7, 34, -1, 0);
 if ( v2 == (void *)-1 )
 return -1;
 v3 = a1 + 5;
 munmap(v2, v1);
 return v3;
}


/* Function: param_memory_protection @ 0x1A20 */
int param_memory_protection()
{
 size_t v0; // edi
 unsigned int *v1; // eax
 unsigned int *v2; // esi
 int v3; // ebp

 v0 = sysconf(30);
 v1 = mmap(0, v0, 3, 34, -1, 0);
 if ( v1 == (unsigned int *)-1 )
 return -1;
 *v1 = 42;
 v2 = v1;
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


/* Function: param_clobber_importance @ 0x1AF0 */
int param_clobber_importance(int a1, int a2)
{
 return 2 * (a2 + a1);
}


/* Function: call_asm_privileged @ 0x1B10 */
int call_asm_privileged()
{
 size_t v0; // esi
 void *v1; // eax
 char v2; // di
 int v3; // esi
 size_t v5; // [esp-18h] [ebp-38h]

 v0 = sysconf(30);
 v1 = mmap(0, v0, 7, 34, -1, 0);
 if ( v1 == (void *)-1 )
 {
 v2 = 0;
 v3 = -1;
 }
 else
 {
 v2 = 1;
 v5 = v0;
 v3 = 15;
 munmap(v1, v5);
 }
 if ( param_memory_protection() == 42 && v2 )
 return 77;
 return v3;
}


/* Function: param_memory_clobber_demo @ 0x1BC0 */
extern char global_var[];
char *param_memory_clobber_demo()
{
 return (char *)global_var + 50;
}


/* Function: test_asm_features @ 0x1BF0 */
int test_asm_features()
{
 int v0; // eax
 int i; // ecx
 int v2; // eax
 int v3; // eax
 signed int v4; // esi
 int v5; // eax
 signed int v7[6] = {0}; // [esp+0h] [ebp-28h]
 unsigned int v8; // [esp+18h] [ebp-10h]

 v8 = __readgsdword(0x14u);
 __printf_chk(1, asc_2294);
 __printf_chk(1, aAsmL401D, 15);
 v0 = 0;
 for ( i = 0; i < 5; ++i )
 v0 += v7[i + 1];
 __printf_chk(1, aAsmL402D, v0);
 v2 = call_asm_multi_insn();
 __printf_chk(1, aAsmL403D, v2);
 v3 = call_asm_simd();
 __printf_chk(1, aAsmL404D, v3);
 v7[0] = 10;
 v4 = __sync_fetch_and_add(&v7[0], 5);
 __printf_chk(1, aAsmL405D, v4 + v7[0] + 5);
 v5 = call_asm_privileged();
 __printf_chk(1, aAsmL406D, v5);
 return v8 - __readgsdword(0x14u);
}


/* Function: __x86.get_pc_thunk.cx @ 0x1CEC */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x1CF0 */
void _stack_chk_fail_local()
{
 __asm__ volatile ("addl $_GLOBAL_OFFSET_TABLE_, %%ebx" ::: "memory");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1D5C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x4018 */

/* FAILED to decompile: mprotect @ 0x401C */

/* FAILED to decompile: __stack_chk_fail @ 0x4020 */

/* FAILED to decompile: sysconf @ 0x4024 */

/* FAILED to decompile: __cxa_finalize @ 0x4028 */

/* FAILED to decompile: mmap @ 0x402C */

/* FAILED to decompile: __printf_chk @ 0x4030 */

/* FAILED to decompile: munmap @ 0x4034 */

/* Total functions decompiled: 66, failed: 8 */
