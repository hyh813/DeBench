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
typedef unsigned char bool;
#define true 1
#define false 0

/* Global variables */
static int word_32 = 0;
static int global_var = 0;

/* CRT and compiler intrinsic stubs */
#define JUMPOUT(x) return

static int call_weak_fn()
{
 return 0;
}

static int _atomic_fetch_add_4(int *ptr, int val, int mem_order)
{
 int old = *ptr;
 *ptr += val;
 return old;
}

/* String constants */
static const char asc_1551[] = "=== Preprocessing Features Test ===\n";
static const char aPpL201D[] = "PPL2.01: %d\n";
static const char aPpL202D[] = "PPL2.02: %d\n";
static const char aPpL203D[] = "PPL2.03: %d\n";
static const char aPpL204D[] = "PPL2.04: %d\n";
static const char aPpL301D[] = "PPL3.01: %d\n";
static const char aPpL302D[] = "PPL3.02: %zu\n";
static const char aPpL303D[] = "PPL3.03: %d\n";
static const char aPpL304D[] = "PPL3.04: %d\n";
static const char aPpL305D[] = "PPL3.05: %d\n";
static const char aPpL306D[] = "PPL3.06: %d\n";
static const char aPpL307D[] = "PPL3.07: %d\n";
static const char asc_16CF[] = "=== ASM Features Test ===\n";
static const char aAsmL401D[] = "AsmL4.01: %d\n";
static const char aAsmL402D[] = "AsmL4.02: %d\n";
static const char aAsmL403D[] = "AsmL4.03: %d\n";
static const char aAsmL404D[] = "AsmL4.04: %d\n";
static const char aAsmL405D[] = "AsmL4.05: %d\n";
static const char aAsmL406D[] = "AsmL4.06: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-23/5-23_clang_O0_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x4E0 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_4EC @ 0x4EC */
void sub_4EC()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x6F8 */
int param_macro_constants(int a1)
{
 if ( a1 <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0x734 */
int call_macro_constants()
{
 return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0x74C */
int param_macro_functions(int a1, int a2)
{
 int v3; // [sp+0h] [bp-10h]

 if ( a1 <= a2 )
 v3 = a2;
 else
 v3 = a1;
 return a1 * a1 + v3;
}


/* Function: call_macro_functions @ 0x7A0 */
int call_macro_functions()
{
 return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0x7BC */
int param_conditional_compile(int a1)
{
 return 3 * a1 + 2;
}


/* Function: call_conditional_compile @ 0x7E8 */
int call_conditional_compile()
{
 return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0x800 */
int param_multi_branch_compile(int a1)
{
 return 5 * a1 + 57072;
}


/* Function: call_multi_branch_compile @ 0x824 */
int call_multi_branch_compile()
{
 return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0x83C */
int param_macro_recursion(int a1)
{
 return a1 + 16;
}


/* Function: call_macro_recursion @ 0x854 */
int call_macro_recursion()
{
 return param_macro_recursion(100);
}


/* Function: param_stringize @ 0x86C */
size_t param_stringize()
{
 size_t v1; // [sp+0h] [bp-18h]
 size_t v2; // [sp+4h] [bp-14h]

 v1 = strlen("Hello World");
 v2 = v1 + strlen("1.2.3");
 return v2 + strlen("155");
}


/* Function: call_stringize @ 0x8F0 */
size_t call_stringize()
{
 return param_stringize();
}


/* Function: my_func @ 0x908 */
int my_func(int a1)
{
 return 10 * a1;
}


/* Function: param_token_paste @ 0x924 */
int param_token_paste(int a1)
{
 return my_func(a1) + a1 + 5;
}


/* Function: call_token_paste @ 0x96C */
int call_token_paste()
{
 return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0x984 */
int param_variadic_macro(int a1, int a2, int a3)
{
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return a1 + 50;
}


/* Function: call_variadic_macro @ 0x9DC */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x9FC */
int param_macro_override(int a1)
{
 return a1 + 1 + 2 * a1;
}


/* Function: call_macro_override @ 0xA30 */
int call_macro_override()
{
 return param_macro_override(5);
}


/* Function: param_include_guard @ 0xA48 */
int param_include_guard()
{
 return header_func(5);
}


/* Function: header_func @ 0xA60 */
int header_func(int a1)
{
 return 100 * a1;
}


/* Function: call_include_guard @ 0xA7C */
int call_include_guard()
{
 return param_include_guard();
}


/* Function: param_builtin_macros @ 0xA90 */
int param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:14");
 return a1 + 282;
}


/* Function: call_builtin_macros @ 0xB64 */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0xB7C */
int test_preprocessing_features()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 size_t v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int v9; // r0
 int v10; // r0

 printf(asc_1551);
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


/* Function: param_asm_basic @ 0xCA4 */
int param_asm_basic(int a1)
{
 return a1 + 10;
}


/* Function: call_asm_basic @ 0xCC4 */
int call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0xCDC */
int param_asm_clobber(int a1, int a2)
{
 int i; // [sp+0h] [bp-10h]
 int v4; // [sp+4h] [bp-Ch]

 v4 = 0;
 for ( i = 0; i < a2; ++i )
 v4 += *(unsigned int *)(a1 + 4 * i);
 return v4;
}


/* Function: call_asm_clobber @ 0xD44 */
int call_asm_clobber()
{
 unsigned int v1[7]; // [sp+4h] [bp-1Ch] BYREF

 v1[0] = 1;
 v1[1] = 2;
 v1[2] = 3;
 v1[3] = 4;
 v1[4] = 5;
 return param_asm_clobber((int)v1, 5);
}


/* Function: param_asm_multi_insn @ 0xD80 */
void * param_asm_multi_insn(void *a1, const void *a2, size_t a3)
{
 return memcpy(a1, a2, a3);
}


/* Function: call_asm_multi_insn @ 0xDB4 */
int call_asm_multi_insn()
{
 int result; // r0
 bool v1; // [sp+8h] [bp-30h]
 int v2; // [sp+Ch] [bp-2Ch] BYREF
 int v3; // [sp+10h] [bp-28h]
 int v4; // [sp+14h] [bp-24h]
 int v5; // [sp+18h] [bp-20h]
 int v6; // [sp+1Ch] [bp-1Ch]
 int v7; // [sp+20h] [bp-18h]
 int v8; // [sp+24h] [bp-14h]
 int v9; // [sp+28h] [bp-10h]
 char v10[12]; // [sp+2Ch] [bp-Ch] BYREF

 strcpy(v10, "Hello ASM");
 v9 = 0;
 v8 = 0;
 v7 = 0;
 v6 = 0;
 v5 = 0;
 v4 = 0;
 v3 = 0;
 v2 = 0;
 param_asm_multi_insn(&v2, v10, 9u);
 v1 = 0;
 if ( (unsigned char)v2 == 72 )
 v1 = (unsigned char)v3 == 111;
 result = -1;
 if ( v1 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0xE64 */
int param_asm_simd(int a1, int a2, int a3)
{
 int i; // [sp+0h] [bp-10h]

 for ( i = 0; i <= 3; ++i )
 *(unsigned int *)(a3 + 4 * i) = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 return 0;
}


/* Function: param_simd_intrinsics @ 0xED0 */
int param_simd_intrinsics(int a1, int a2, int a3)
{
 int i; // [sp+0h] [bp-10h]

 for ( i = 0; i <= 3; ++i )
 *(unsigned int *)(a3 + 4 * i) = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 return 0;
}


/* Function: call_asm_simd @ 0xF3C */
int call_asm_simd()
{
 unsigned int v1[4]; // [sp+0h] [bp-30h] BYREF
 unsigned int v2[4]; // [sp+10h] [bp-20h] BYREF
 unsigned int v3[4]; // [sp+20h] [bp-10h] BYREF

 v3[0] = 1;
 v3[3] = 4;
 v3[2] = 3;
 v3[1] = 2;
 v2[3] = 8;
 v2[2] = 7;
 v2[1] = 6;
 v2[0] = 5;
 param_asm_simd((int)v3, (int)v2, (int)v1);
 return v1[0] + v1[1] + v1[2] + v1[3];
}


/* Function: param_asm_atomic @ 0xFE8 */
int param_asm_atomic(int a1, int a2)
{
 return _atomic_fetch_add_4(a1, a2, 5) + a2;
}


/* Function: param_atomic_c11 @ 0x1038 */
int param_atomic_c11(int a1, int a2)
{
 return _atomic_fetch_add_4(a1, a2, 5) + a2;
}


/* Function: call_asm_atomic @ 0x1080 */
int call_asm_atomic()
{
 int v0; // r1
 int v2; // [sp+4h] [bp-4h] BYREF

 v2 = 10;
 v0 = param_asm_atomic((int)&v2, 5);
 return v2 + v0;
}


/* Function: param_dynamic_code @ 0x10BC */
int param_dynamic_code(int a1)
{
 void *addr; // [sp+10h] [bp-10h]
 int len; // [sp+14h] [bp-Ch]

 len = sysconf(30);
 addr = mmap(0, len, 7, 34, -1, 0);
 if ( addr == (void *)-1 )
 return -1;
 munmap(addr, len);
 return a1 + 5;
}


/* Function: param_memory_protection @ 0x1150 */
int param_memory_protection()
{
 int v1; // [sp+Ch] [bp-14h]
 int *addr; // [sp+14h] [bp-Ch]
 int len; // [sp+18h] [bp-8h]

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


/* Function: param_clobber_importance @ 0x1268 */
int param_clobber_importance(int a1, int a2)
{
 return 2 * (a1 + a2);
}


/* Function: call_asm_privileged @ 0x128C */
int call_asm_privileged()
{
 int v1; // [sp+0h] [bp-10h]
 int v2; // [sp+4h] [bp-Ch]
 int v3; // [sp+8h] [bp-8h]

 v3 = param_dynamic_code(10);
 v2 = param_memory_protection();
 v1 = param_clobber_importance(3, 7);
 if ( v3 == 15 && v2 == 42 && v1 == 20 )
 return 77;
 else
 return v3;
}


/* Function: param_memory_clobber_demo @ 0x1314 */
char *param_memory_clobber_demo()
{
 return (char *)&word_32 + (unsigned int)global_var;
}


/* Function: test_asm_features @ 0x1344 */
int test_asm_features()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0

 printf(asc_16CF);
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


/* Function: main @ 0x13F4 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: .term_proc @ 0x1424 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x12088 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x1208C */

/* FAILED to decompile: __imp_printf @ 0x12090 */

/* FAILED to decompile: __imp_mprotect @ 0x12094 */

/* FAILED to decompile: __imp_memcpy @ 0x12098 */

/* FAILED to decompile: __imp___atomic_fetch_add_4 @ 0x1209C */

/* FAILED to decompile: __imp_sysconf @ 0x120A0 */

/* FAILED to decompile: __imp_strlen @ 0x120A4 */

/* FAILED to decompile: __imp_mmap @ 0x120A8 */

/* FAILED to decompile: __imp_munmap @ 0x120AC */

/* FAILED to decompile: __imp_abort @ 0x120B0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x120B8 */

/* Total functions decompiled: 53, failed: 12 */
