/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#include <stddef.h>
#include <emmintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

extern void _gmon_start__(void);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_gcc_Os_g
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
 void *target = 0;
 __asm__ volatile("jmp *%0" : : "r" (target));
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


static unsigned int _pc_thunk_bx;

/* Function: _x86_get_pc_thunk_bx @ 0x1180 */
unsigned int _x86_get_pc_thunk_bx()
{
 unsigned int tmp;
 __asm__ volatile("mov %%ebx, %0" : "=r"(tmp));
 return tmp;
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


/* Function: param_macro_constants @ 0x12C1 */
int param_macro_constants(int size)
{
 int result; // eax

 result = 512;
 if ( size > 1024 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x12DE */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x12E8 */
int param_macro_functions(int x, int y)
{
 int v2; // edx

 v2 = x;
 if ( x < y )
 v2 = y;
 return v2 + x * x;
}


/* Function: call_macro_functions @ 0x1303 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x130D */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x131D */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x1327 */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x1339 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x1343 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x1352 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x135C */
int param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0x1366 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x1370 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x137D */
int param_token_paste(int x)
{
 return 11 * x + 5;
}


/* Function: call_token_paste @ 0x138D */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1397 */
int param_variadic_macro(int x, int y, int z)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x13D0 */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x13E7 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0x13FA */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x1404 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x140E */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x1418 */
int param_builtin_macros(int x)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:00");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x146A */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Global variables */
int global_var = 100;

/* Data arrays for SIMD tests */
static const int unk_22C0[4] = {1, 2, 3, 4};
static const int unk_22D0[4] = {5, 6, 7, 8};

/* String constants */
static const char asc_21EC[] = "ASM Tests:\n";
static const char aAsmL401D[] = "asm_l4_01: %d\n";
static const char aAsmL402D[] = "asm_l4_02: %d\n";
static const char aAsmL403D[] = "asm_l4_03: %d\n";
static const char aAsmL404D[] = "asm_l4_04: %d\n";
static const char aAsmL405D[] = "asm_l4_05: %d\n";
static const char aAsmL406D[] = "asm_l4_06: %d\n";

/* Function: test_preprocessing_features @ 0x147D */
void test_preprocessing_features()
{
 int v0; // eax
 int v1; // eax

 __printf_chk(1, "Preprocessing Tests:\n");
 __printf_chk(1, "macro_constants: %d\n", 64);
 __printf_chk(1, "macro_functions: %d\n", 30);
 __printf_chk(1, "conditional_compile: %d\n", 32);
 __printf_chk(1, "multi_branch_compile: %d\n", 57122);
 __printf_chk(1, "macro_recursion: %d\n", 116);
 __printf_chk(1, "stringize: %d\n", 19);
 __printf_chk(1, "token_paste: %d\n", 60);
 v0 = call_variadic_macro();
 __printf_chk(1, "variadic_macro: %d\n", v0);
 __printf_chk(1, "macro_override: %d\n", 16);
 __printf_chk(1, "include_guard: %d\n", 500);
 v1 = call_builtin_macros();
 __printf_chk(1, "builtin_macros: %d\n", v1);
}


/* Function: param_asm_basic @ 0x1588 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x159D */
int call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x15B0 */
int param_asm_clobber(int *arr, int n)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < n; ++i )
 result += arr[i];
 return result;
}


/* Function: call_asm_clobber @ 0x15D3 */
int call_asm_clobber()
{
 int arr[5]; // [esp+10h] [ebp-20h] BYREF
 unsigned int v2; // [esp+24h] [ebp-Ch]

 v2 = 0;
 return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0x1606 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 qmemcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x1629 */
int call_asm_multi_insn()
{
 int result; // eax
 char src[10]; // [esp+0h] [ebp-3Ah] BYREF
 char dst[32]; // [esp+Ah] [ebp-30h] BYREF
 unsigned int v3; // [esp+2Ah] [ebp-10h]

 v3 = 0;
 memset(dst, 0, sizeof(dst));
 strcpy(src, "Hello ASM");
 param_asm_multi_insn(dst, src, 9u);
 result = -1;
 if ( dst[0] == 72 && dst[4] == 111 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x16AD */
int param_asm_simd(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x16CE */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(*(__m128i *)b, *(__m128i *)a);
 return 0;
}


/* Function: call_asm_simd @ 0x16EC */
long long call_asm_simd()
{
 long long v0; // rax
 int a[4]; // [esp+0h] [ebp-40h] BYREF
 int b[4]; // [esp+10h] [ebp-30h] BYREF
 int result[4]; // [esp+20h] [ebp-20h] BYREF

 qmemcpy(a, &unk_22C0, sizeof(a));
 qmemcpy(b, &unk_22D0, sizeof(b));
 param_asm_simd(a, b, result);
 LODWORD(v0) = result[3] + result[2] + result[0] + result[1];
 return v0;
}


/* Function: param_asm_atomic @ 0x1763 */
int param_asm_atomic(int *counter, int increment)
{
 int old = __sync_fetch_and_add(counter, increment);
 return old + increment;
}


/* Function: param_atomic_c11 @ 0x177A */
int param_atomic_c11(int *counter, int increment)
{
 int old = __sync_fetch_and_add(counter, increment);
 return old + increment;
}


/* Function: call_asm_atomic @ 0x1791 */
long long call_asm_atomic()
{
 int counter; // [esp+8h] [ebp-10h] BYREF
 int *pcounter = &counter;
 int old1 = __sync_fetch_and_add(pcounter, 15);
 int old2 = __sync_fetch_and_add(pcounter, 5);
 long long result = (long long)(10 + old1 + old2);
 return result;
}


/* Function: param_dynamic_code @ 0x17D3 */
int param_dynamic_code(int x)
{
 size_t v1; // edi
 int v2; // esi
 void *v3; // eax

 v1 = sysconf(30);
 v2 = -1;
 v3 = mmap(0, v1, 7, 34, -1, 0);
 if ( v3 != (void *)-1 )
 {
 v2 = x + 5;
 munmap(v3, v1);
 }
 return v2;
}


/* Function: param_memory_protection @ 0x182D */
int param_memory_protection()
{
 size_t v0; // edi
 unsigned int *v1; // eax
 int v2; // edx
 unsigned int *v3; // esi
 int value; // [esp+0h] [ebp-1Ch]

 v0 = sysconf(30);
 v1 = mmap(0, v0, 3, 34, -1, 0);
 v2 = -1;
 if ( v1 != (unsigned int *)-1 )
 {
 v3 = v1;
 *v1 = 42;
 if ( mprotect(v1, v0, 1) )
 {
 munmap(v3, v0);
 return -2;
 }
 else
 {
 value = *v3;
 if ( mprotect(v3, v0, 3) )
 {
 munmap(v3, v0);
 return -3;
 }
 else
 {
 *v3 = 100;
 munmap(v3, v0);
 return value;
 }
 }
 }
 return v2;
}


/* Function: param_clobber_importance @ 0x18E5 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1907 */
int call_asm_privileged()
{
 int v0; // ebx
 int v1; // esi
 int v2; // eax

 v0 = param_dynamic_code(10);
 v1 = param_memory_protection();
 v2 = param_clobber_importance(3, 7);
 if ( v0 == 15 && v1 == 42 && v2 == 20 )
 return 77;
 return v0;
}


/* Function: param_memory_clobber_demo @ 0x194F */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x1970 */
void test_asm_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 __printf_chk(1, asc_21EC);
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


/* Function: __x86.get_pc_thunk.ax @ 0x1A26 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr;
 __asm__ volatile("movl 4(%%ebp), %0" : "=a"(retaddr));
 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x1A2A */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x1A30 */
void _stack_chk_fail_local()
{
 __asm__ volatile("add $0, %%ebx" : : "r"(0));
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1A9C */
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

/* Total functions decompiled: 67, failed: 8 */
