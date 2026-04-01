/* Auto-injected type definitions by preprocessor */
#include <emmintrin.h>
typedef unsigned char uint8_t;
#define LODWORD(x) (*((int*)&(x)))
#define HIDWORD(x) (*((int*)&(x) + 1))
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

/* Auto-injected stub definitions for linker */
#define _InterlockedExchangeAdd(a, b) __sync_fetch_and_add(a, b)
#define __readgsdword(x) 0
void _do_global_dtors_aux(void) { }

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_gcc_O1_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ __volatile__("");
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



/* CRT stub function _start removed by preprocessor */



/* Function: sub_115C @ 0x115C */
void sub_115C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1160 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1299 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x129D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_macro_constants @ 0x12A1 */
int param_macro_constants(int size)
{
 int result; // eax

 result = 512;
 if ( size > 1024 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x12BB */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x12C5 */
int param_macro_functions(int x, int y)
{
 int v2; // edx

 v2 = x;
 if ( x < y )
 v2 = y;
 return v2 + x * x;
}


/* Function: call_macro_functions @ 0x12DE */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x12E8 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x12F5 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x12FF */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x130F */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x1319 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x1325 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x132F */
int param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0x1339 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x1343 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x1351 */
int param_token_paste(int x)
{
 return 11 * x + 5;
}


/* Function: call_token_paste @ 0x1361 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x136B */
int param_variadic_macro(int x, int y, int z)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x13A3 */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x13B9 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0x13C6 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x13D0 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x13DA */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x13E4 */
int param_builtin_macros(int x)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "02:59:47");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x1434 */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x1446 */
static const char *asc_21F4 = "=== Preprocessing Features Test ===\n";
static const char *aPpL201D = "Line 201: %d\n";
static const char *aPpL202D = "Line 202: %d\n";
static const char *aPpL203D = "Line 203: %d\n";
static const char *aPpL204D = "Line 204: %d\n";
static const char *aPpL301D = "Line 301: %d\n";
static const char *aPpL302D = "Line 302: %d\n";
static const char *aPpL303D = "Line 303: %d\n";
static const char *aPpL304D = "Line 304: %d\n";
static const char *aPpL305D = "Line 305: %d\n";
static const char *aPpL306D = "Line 306: %d\n";
static const char *aPpL307D = "Line 307: %d\n";
void test_preprocessing_features()
{
 int v0; // eax
 int v1; // eax

 __printf_chk(1, asc_21F4);
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


/* Function: param_asm_basic @ 0x154B */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x155D */
int call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x156C */
int param_asm_clobber(int *arr, int n)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < n; ++i )
 result += arr[i];
 return result;
}


/* Function: call_asm_clobber @ 0x158D */
int call_asm_clobber()
{
 int arr[5]; // [esp+8h] [ebp-24h] BYREF
 unsigned int v2; // [esp+1Ch] [ebp-10h]

 v2 = __readgsdword(0x14u);
 return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0x15C5 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x15E7 */
int call_asm_multi_insn()
{
 int result; // eax
 char src[10]; // [esp+2h] [ebp-3Ah] BYREF
 char dst[32]; // [esp+Ch] [ebp-30h] BYREF
 unsigned int v3; // [esp+2Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 strcpy(src, "Hello ASM");
 memset(dst, 0, sizeof(dst));
 param_asm_multi_insn(dst, src, 9u);
 if ( dst[0] != 72 )
 return -1;
 result = -1;
 if ( dst[4] == 111 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x169B */
int param_asm_simd(int *a, int *b, int *result)
{
 _mm_store_si128((__m128i *)result, _mm_add_epi32(_mm_load_si128((const __m128i *)a), _mm_load_si128((const __m128i *)b)));
 return 0;
}


/* Function: param_simd_intrinsics @ 0x16BE */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 _mm_store_si128((__m128i *)result, _mm_add_epi32(_mm_load_si128((const __m128i *)b), _mm_load_si128((const __m128i *)a)));
 return 0;
}


/* Function: call_asm_simd @ 0x16DF */
long long call_asm_simd()
{
 long long v0; // rax
 int a[4]; // [esp+Ch] [ebp-40h] BYREF
 int b[4]; // [esp+1Ch] [ebp-30h] BYREF
 int result[4]; // [esp+2Ch] [ebp-20h] BYREF
 unsigned int v4; // [esp+3Ch] [ebp-10h]

 v4 = __readgsdword(0x14u);
 a[0] = 1;
 a[1] = 2;
 a[2] = 3;
 a[3] = 4;
 b[0] = 5;
 b[1] = 6;
 b[2] = 7;
 b[3] = 8;
 param_asm_simd(a, b, result);
 LODWORD(v0) = result[3] + result[2] + result[0] + result[1];
 HIDWORD(v0) = v4 - __readgsdword(0x14u);
 return v0;
}


/* Function: param_asm_atomic @ 0x176F */
int param_asm_atomic(int *counter, int increment)
{
 return _InterlockedExchangeAdd(counter, increment) + increment;
}


/* Function: param_atomic_c11 @ 0x1784 */
int param_atomic_c11(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: call_asm_atomic @ 0x1799 */
long long call_asm_atomic()
{
 signed int v0; // eax
 long long result; // rax
 int counter; // [esp+8h] [ebp-14h] BYREF
 unsigned int v3; // [esp+Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 counter = 10;
 v0 = _InterlockedExchangeAdd(&counter, 5u);
 LODWORD(result) = v0 + counter + 5;
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: param_dynamic_code @ 0x17DF */
int param_dynamic_code(int x)
{
 size_t v1; // esi
 void *v2; // eax
 int v3; // edi

 v1 = sysconf(30);
 v2 = mmap(0, v1, 7, 34, -1, 0);
 if ( v2 == (void *)-1 )
 return -1;
 v3 = x + 5;
 munmap(v2, v1);
 return v3;
}


/* Function: param_memory_protection @ 0x1839 */
int param_memory_protection()
{
 size_t v0; // edi
 int *v1; // eax
 int *v2; // esi
 int v3; // ebp

 v0 = sysconf(30);
 v1 = (int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v1 == (int *)-1 )
 return -1;
 v2 = v1;
 *v1 = 42;
 if ( mprotect(v1, v0, 1) )
 {
 munmap(v2, v0);
 return -2;
 }
 else
 {
 v3 = *v2;
 if ( mprotect(v2, v0, 3) )
 {
 munmap(v2, v0);
 return -3;
 }
 else
 {
 *v2 = 100;
 munmap(v2, v0);
 }
 }
 return v3;
}


/* Function: param_clobber_importance @ 0x18EF */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x190F */
int call_asm_privileged()
{
 int v0; // ebx
 int v1; // esi
 int v2; // eax

 v0 = param_dynamic_code(10);
 v1 = param_memory_protection();
 v2 = param_clobber_importance(3, 7);
 if ( v1 == 42 && v0 == 15 && v2 == 20 )
 return 77;
 return v0;
}


int global_var = 100;

/* Function: param_memory_clobber_demo @ 0x195A */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x197B */
static const char *asc_2294 = "=== ASM Features Test ===\n";
static const char *aAsmL401D = "Line 401: %d\n";
static const char *aAsmL402D = "Line 402: %d\n";
static const char *aAsmL403D = "Line 403: %d\n";
static const char *aAsmL404D = "Line 404: %d\n";
static const char *aAsmL405D = "Line 405: %d\n";
static const char *aAsmL406D = "Line 406: %d\n";
void test_asm_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 __printf_chk(1, asc_2294);
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
 __printf_chk(1, aAsmL406D, v5);
}


/* Function: main @ 0x1A2B */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: __x86.get_pc_thunk.cx @ 0x1A46 */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x1A50 */
void _stack_chk_fail_local()
{
 __asm__ __volatile__("");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1ABC */
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
