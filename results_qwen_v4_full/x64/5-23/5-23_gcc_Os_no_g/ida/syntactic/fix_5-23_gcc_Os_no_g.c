#include <emmintrin.h>

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

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-23/5-23_gcc_Os_no_g
 * Processor: pc
 */

/* External declaration for gprof */
extern void *_gmon_start__;

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&_gmon_start__;
 if ( _gmon_start__ )
 return (long long (**)(void))((long long (*)(void))_gmon_start__);
 return result;
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


/* Forward declarations */
long long test_preprocessing_features(int argc, const char **argv, const char **envp);
long long test_asm_features(void);

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



/* Union for __m128i initialization */
typedef union {
 __m128i vec;
 long long ll[2];
 int i[4];
} m128i_union;

/* Function: param_macro_constants @ 0x1209 */
long long param_macro_constants(int a1)
{
 long long result; // rax

 result = 512;
 if ( a1 > 1024 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x1221 */
long long call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x122B */
long long param_macro_functions(int a1, int a2)
{
 int v2; // eax

 v2 = a1 * a1;
 if ( a1 < a2 )
 a1 = a2;
 return (unsigned int)(a1 + v2);
}


/* Function: call_macro_functions @ 0x123C */
long long call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x1246 */
long long param_conditional_compile(int a1)
{
 return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0x1251 */
long long call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x125B */
long long param_multi_branch_compile(int a1)
{
 return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0x1268 */
long long call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x1272 */
long long param_macro_recursion(int a1)
{
 return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0x127A */
long long call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x1284 */
long long param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x128E */
long long call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x1298 */
long long my_func(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0x12A0 */
long long param_token_paste(int a1)
{
 return (unsigned int)(11 * a1 + 5);
}


/* Function: call_token_paste @ 0x12AB */
long long call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x12B5 */
long long param_variadic_macro(int a1, int a2, int a3)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0x12DB */
long long call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x12F0 */
long long param_macro_override(int a1)
{
 return (unsigned int)(3 * a1 + 1);
}


/* Function: call_macro_override @ 0x12FC */
long long call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x1306 */
long long param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x1310 */
long long call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x131A */
long long param_builtin_macros(int a1)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:41");
 return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0x1362 */
long long call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* String constants */
static const char *asc_206A = "Testing preprocessing features:\n";
static const char *aPpL201D = "  param_macro_constants: %d\n";
static const char *aPpL202D = "  call_macro_functions: %d\n";
static const char *aPpL203D = "  call_conditional_compile: %d\n";
static const char *aPpL204D = "  call_multi_branch_compile: %d\n";
static const char *aPpL301D = "  call_macro_recursion: %d\n";
static const char *aPpL302D = "  call_stringize: %d\n";
static const char *aPpL303D = "  call_token_paste: %d\n";
static const char *aPpL304D = "  call_variadic_macro: %d\n";
static const char *aPpL305D = "  call_macro_override: %d\n";
static const char *aPpL306D = "  call_include_guard: %d\n";
static const char *aPpL307D = "  call_builtin_macros: %d\n";
static const char *asc_21DE = "Testing ASM features:\n";
static const char *aAsmL401D = "  call_asm_basic: %d\n";
static const char *aAsmL402D = "  call_asm_clobber: %d\n";
static const char *aAsmL403D = "  call_asm_multi_insn: %d\n";
static const char *aAsmL404D = "  call_asm_simd: %d\n";
static const char *aAsmL405D = "  call_asm_atomic: %d\n";
static const char *aAsmL406D = "  call_asm_privileged: %d\n";

/* Global variable */
static int global_var = 100;

/* Function: test_preprocessing_features @ 0x136D */
long long test_preprocessing_features(int argc, const char **argv, const char **envp)
{
 unsigned int v0; // eax
 unsigned int v1; // eax

 __printf_chk(1, asc_206A);
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


/* Function: param_asm_basic @ 0x1496 */
long long param_asm_basic(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0x14A6 */
long long call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x14B1 */
long long param_asm_clobber(long long a1, int a2)
{
 long long result; // rax
 long long i; // rcx

 LODWORD(result) = 0;
 for ( i = 0; (int)i < a2; i = (unsigned int)(i + 1) )
 LODWORD(result) = *(unsigned int *)(a1 + 4 * i) + result;
 return (unsigned int)result;
}


/* Function: call_asm_clobber @ 0x14CB */
// bad sp value at call has been detected, the output may be wrong!
long long call_asm_clobber()
{
 unsigned char v1[20]; // [rsp+4h] [rbp-24h] BYREF

 return param_asm_clobber((long long)&v1, 5);
}


/* Function: param_asm_multi_insn @ 0x1508 */
char param_asm_multi_insn(unsigned char *a1, char *a2, long long a3)
{
 char result; // al
 unsigned char *p1;
 char *p2;

 p1 = a1;
 p2 = a2;
 while ( a3 )
 {
 result = *p2;
 *p1++ = *p2++;
 --a3;
 }
 return result;
}


/* Function: call_asm_multi_insn @ 0x1523 */
long long call_asm_multi_insn()
{
 long long result; // rax
 char v1[10]; // [rsp+Eh] [rbp-3Ah] BYREF
 unsigned long long v2[2]; // [rsp+18h] [rbp-30h] BYREF
 unsigned long long v3; // [rsp+38h] [rbp-10h]
 unsigned int local_tmp0_val, local_tmp1_val;
 unsigned long long tmp_val;

 v3 = __readfsqword(0x28u);
 memset(v2, 0, sizeof(v2));
 strcpy(v1, "Hello ASM");
 param_asm_multi_insn((unsigned char *)v2, v1, 9);
 result = 0xFFFFFFFFLL;
 tmp_val = v2[0];
 local_tmp0_val = (unsigned int)(tmp_val & 0xFF);
 local_tmp1_val = (unsigned int)((tmp_val >> 32) & 0xFF);
 if ( local_tmp0_val == 72 && local_tmp1_val == 111 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x15A1 */
long long param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 m128i_union tmp1, tmp2, tmp3;
 tmp1.vec = _mm_load_si128(a1);
 tmp2.vec = _mm_load_si128(a2);
 tmp3.vec = _mm_add_epi32(tmp1.vec, tmp2.vec);
 _mm_store_si128(a3, tmp3.vec);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x15B5 */
long long param_simd_intrinsics(__m128i *a1, __m128i *a2, __m128i *a3)
{
 long long result; // rax
 m128i_union tmp1, tmp2, tmp3;

 result = 0;
 tmp1.vec = _mm_load_si128(a1);
 tmp2.vec = _mm_load_si128(a2);
 tmp3.vec = _mm_add_epi32(tmp1.vec, tmp2.vec);
 _mm_store_si128(a3, tmp3.vec);
 return result;
}


/* Function: call_asm_simd @ 0x15C6 */
long long call_asm_simd()
{
 m128i_union u1, u2, u3;
 unsigned long long v4; // [rsp+38h] [rbp-10h]
 int e0, e1, e2, e3;

 v4 = __readfsqword(0x28u);
 u1.i[0] = 1; u1.i[1] = 2; u1.i[2] = 3; u1.i[3] = 4;
 u2.i[0] = 5; u2.i[1] = 6; u2.i[2] = 7; u2.i[3] = 8;
 param_asm_simd(&u1.vec, &u2.vec, &u3.vec);
 e0 = u3.i[0];
 e1 = u3.i[1];
 e2 = u3.i[2];
 e3 = u3.i[3];
 return (unsigned int)(e0 + e1 + e2 + e3);
}


/* Function: param_asm_atomic @ 0x1656 */
long long param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 long long result;
 result = _InterlockedExchangeAdd(a1, a2);
 return a2 + result;
}


/* Function: param_atomic_c11 @ 0x1663 */
long long param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 long long result;
 result = _InterlockedExchangeAdd(a1, a2);
 return a2 + result;
}


/* Function: call_asm_atomic @ 0x1670 */
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


/* Function: param_dynamic_code @ 0x16C0 */
long long param_dynamic_code(unsigned int a1)
{
 unsigned int v1; // r12d
 size_t v2; // r13
 unsigned int *v3; // rax
 void *v4; // rbp

 v1 = -1;
 v2 = sysconf(30);
 v3 = mmap(0, v2, 7, 34, -1, 0);
 if ( v3 != (unsigned int *)-1LL )
 {
 v4 = v3;
 *v3 = -1065092983;
 *((unsigned short *)v3 + 2) = -15611;
 v1 = ((long long ( *)(unsigned long long))v3)(a1);
 munmap(v4, v2);
 }
 return v1;
}


/* Function: param_memory_protection @ 0x175A */
long long param_memory_protection()
{
 unsigned int v0; // r12d
 size_t v1; // rbp
 unsigned int *v2; // rax
 unsigned int *v3; // rdi
 unsigned int *addr; // [rsp+8h] [rbp-20h]

 v0 = -1;
 v1 = sysconf(30);
 v2 = (unsigned int *)mmap(0, v1, 3, 34, -1, 0);
 if ( v2 != (unsigned int *)-1LL )
 {
 addr = v2;
 *v2 = 42;
 v3 = v2;
 if ( mprotect(v2, v1, 1) )
 {
 v0 = -2;
 munmap(v3, v1);
 }
 else
 {
 v0 = *addr;
 if ( mprotect(v3, v1, 3) )
 v0 = -3;
 else
 *addr = 100;
 munmap(addr, v1);
 }
 }
 return v0;
}


/* Function: param_clobber_importance @ 0x1812 */
long long param_clobber_importance(int a1, int a2)
{
 return (unsigned int)(2 * (a2 + a1));
}


/* Function: call_asm_privileged @ 0x1826 */
long long call_asm_privileged()
{
 unsigned int v0; // r12d
 int v1; // eax
 int v2; // r8d

 v0 = param_dynamic_code(0xAu);
 param_memory_protection();
 v1 = param_clobber_importance(3, 7);
 if ( v0 == 15 && v2 == 42 && v1 == 20 )
 return 77;
 return v0;
}


/* Function: param_memory_clobber_demo @ 0x1870 */
long long param_memory_clobber_demo()
{
 return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x188A */
long long test_asm_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 __printf_chk(1, asc_21DE);
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


/* Function: .term_proc @ 0x194C */
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
