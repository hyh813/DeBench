/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_clang_Os_no_g
 * Processor: pc
 */

#include <immintrin.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* External function pointer for profiling */
void (*_gmon_start__)(void);

/* String constants */
const char asc_23EB[] = "Parameter Passing Test\n";
const char asc_240C[] = "Return Values Test\n";
const char aRetL101D[] = "RET-L1-01: %d\n";
const char aRetL102D[] = "RET-L1-02: %d\n";
const char aRetL103D[] = "RET-L1-03: %d\n";
const char aRetL104D[] = "RET-L1-04: %d\n";
const char aRetL201D[] = "RET-L2-01: %d\n";
const char aRetL202D[] = "RET-L2-02: %d\n";
const char aRetL301D[] = "RET-L3-01: %d\n";
const char aRetL302D[] = "RET-L3-02: %d\n";
const char aRetL303D[] = "RET-L3-03: %d\n";

/* SIMD constants */
const __m128i xmmword_2010 = {0x0102030405060708LL, 0x090A0B0C0D0E0F10LL};
const __m128i xmmword_2020 = {0x1112131415161718LL, 0x191A1B1C1D1E1F20LL};
const __m128i xmmword_2030 = {0x0101010101010101LL, 0x0101010101010101LL};
const __m128i xmmword_2050 = {0x0404040404040404LL, 0x0404040404040404LL};

/* Helper macros for extracting high/low dwords */
#define LODWORD(x) ((unsigned int)((x) & 0xFFFFFFFF))
#define HIDWORD(x) ((unsigned int)(((x) >> 32) & 0xFFFFFFFF))


int ret_opaque_handle_handle1 = 0;
int ret_opaque_handle_handle2 = 0;

/* Function: .init_proc @ 0x1000 */
void init_proc(void)
{
 if ( _gmon_start__ )
 _gmon_start__();
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 return;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x115C */
long long cdecl_func(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x1160 */
long long call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1166 */
long long stdcall_func(int a1, int a2)
{
 return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x116C */
long long call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1172 */
long long fastcall_func(int a1, int a2, int a3)
{
 return (unsigned int)(a3 + a1 + a2);
}


/* Function: call_fastcall @ 0x1178 */
long long call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x117E */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1184 */
long long arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a5 + a4 + a3 + a1 + a2);
}


/* Function: call_arm_aapcs @ 0x118F */
long long call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x1195 */
long long mips_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a4 + a3 + a1 + a2);
}


/* Function: call_mips @ 0x119D */
long long call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x11A3 */
long long amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a6 + a5 + a4 + a3 + a1 + a2);
}


/* Function: call_amd64_sysv @ 0x11B1 */
long long call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x11B7 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a5 + a4 + a3 + a1 + a2);
}


/* Function: call_ms_x64 @ 0x11C2 */
long long call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x11C8 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a4 + a3 + a1 + a2);
}


/* Function: call_vectorcall @ 0x11D0 */
long long call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x11D6 */
long long mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x11DC */
long long varargs_func(int a1, long long a2, long long a3, long long a4, long long a5, long long a6, double a7, ...)
{
 long long result; // rax
 unsigned int v8; // edx
 long long *v9; // rsi
 long long v10; // kr00_8
 va_list va; // [rsp+0h] [rbp-D8h] BYREF
 unsigned char v12[8]; // [rsp+20h] [rbp-B8h] BYREF
 long long v13; // [rsp+28h] [rbp-B0h]
 long long v14; // [rsp+30h] [rbp-A8h]
 long long v15; // [rsp+38h] [rbp-A0h]
 long long v16; // [rsp+40h] [rbp-98h]
 long long v17; // [rsp+48h] [rbp-90h]

 va_start(va, a7);
 v13 = a2;
 v14 = a3;
 v15 = a4;
 v16 = a5;
 v17 = a6;
 if ( a1 <= 0 )
 return 0;
 result = 0;
 v8 = 8;
 do
 {
 if ( v8 > 0x28 )
 {
 v10 = va_arg(va, unsigned long long);
 v9 = &v10;
 }
 else
 {
 v9 = (long long *)&v12[v8];
 v8 += 8;
 }
 result = (unsigned int)(*(unsigned int *)v9 + result);
 --a1;
 }
 while ( a1 );
 return result;
}


/* Function: func_no_args @ 0x1281 */
long long func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1287 */
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return (unsigned int)(a8 + a7 + a6 + a5 + a4 + a3 + a1 + a2);
}


/* Function: func_mixed_args @ 0x129D */
long long func_mixed_args(int a1, const char *a2, int a3, double a4)
{
 int v5; // eax

 if ( a2 )
 v5 = strlen(a2);
 else
 v5 = 0;
 return (unsigned int)(int)((double)a3 + (double)(a1 + v5) + a4);
}


/* Function: func_struct_byval @ 0x12DE */
unsigned long long func_struct_byval(
 long long a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 char *a7)
{
 __m128i v7; // xmm0
 __m128i v8;
 long long i; // rcx

 v7 = _mm_setzero_si128();
 for ( i = 0; i != 16; i += 2 )
 v7 = _mm_add_epi64(v7, _mm_loadu_si128((const __m128i *)(a7 + 8 * i)));
 v8 = _mm_add_epi64(_mm_shuffle_epi32(v7, 238), v7);
 return _mm_cvtsi128_si64(v8);
}


/* Function: func_struct_byptr @ 0x130B */
long long func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return (unsigned int)(*a1 * a1[1]);
 else
 return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0x131D */
int test_calling_conventions(double a1)
{
 long long v1; // rbx
 unsigned int v2; // eax
 __m128i si128; // xmm0
 __m128i v4; // xmm2
 __m128i v5; // xmm0
 long long i; // rax
 unsigned long long v8[8]; // [rsp+0h] [rbp-88h] BYREF
 const char *s = "Calling Conventions Test\n";
 const char *aCallL206 = "CALL-L2-01: %d\n";
 const char *aCallL207 = "CALL-L2-02: %d\n";
 const char *aCallL208 = "CALL-L2-03: %d\n";
 const char *aCallL209 = "CALL-L2-04: %d\n";
 const char *aCallL210 = "CALL-L2-05: %d\n";
 const char *aCallL211 = "CALL-L2-06: %d\n";

 puts(s);
 v1 = 0;
 printf("CALL-L1-01: %d\n", 15);
 printf("CALL-L1-02: %d\n", 50);
 printf("CALL-L1-03: %d\n", 6);
 printf("CALL-L1-04: %d\n", 15);
 printf("CALL-L1-05: %d\n", 15);
 printf("CALL-L1-06: %d\n", 100);
 printf("CALL-L1-07: %d\n", 21);
 printf("CALL-L1-08: %d\n", 15);
 printf("CALL-L1-09: %d\n", 10);
 printf("CALL-L1-10: %d\n", 33);
 v2 = varargs_func(5, 1, 2, 3, 4, 5, a1);
 printf(aCallL206, v2);
 printf(aCallL207, 42);
 printf(aCallL208, 36);
 printf(aCallL209, 117);
 si128 = _mm_load_si128((const __m128i *)&xmmword_2010);
 v4 = _mm_load_si128((const __m128i *)&xmmword_2020);
 do
 {
 __m128i tmp = _mm_sub_epi64(si128, _mm_set1_epi64x(-1));
 v8[v1++] = (unsigned long long)_mm_cvtsi128_si64(tmp);
 v8[v1++] = (unsigned long long)_mm_cvtsi128_si64(_mm_srli_si128(tmp, 8));
 v8[v1++] = (unsigned long long)_mm_cvtsi128_si64(_mm_srli_si128(tmp, 8));
 si128 = _mm_add_epi64(si128, v4);
 }
 while ( v1 != 8 );
 v5 = _mm_setzero_si128();
 for ( i = 0; i != 8; ++i )
 v5 = _mm_add_epi64(v5, _mm_loadu_si128((const __m128i *)&v8[i]));
 {
 __m128i tmp = _mm_add_epi64(_mm_shuffle_epi32(v5, 238), v5);
 printf(aCallL210, _mm_cvtsi128_si64(tmp));
 }
 return printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x14E0 */
long long param_by_value_int(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x14E4 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x14EA */
long long param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x14F2 */
long long call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x14F8 */
long long param_array_decay()
{
 return 8;
}


/* Function: call_array_decay @ 0x14FE */
long long call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0x1504 */
long long param_string(char *a1)
{
 return (unsigned int)(*a1 + a1[1]);
}


/* Function: call_string_param @ 0x150E */
long long call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x1514 */
long long param_ptr_array(long long a1, int a2)
{
 long long v2; // rdx
 long long result; // rax

 if ( a2 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result = (unsigned int)(**(char **)(a1 + 8 * v2++) + (unsigned int)result);
 while ( a2 != v2 );
 return result;
}


/* Function: call_ptr_array @ 0x1533 */
long long call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x1539 */
long long param_varargs(int a1, long long a2, long long a3, long long a4, long long a5, long long a6, double a7, ...)
{
 long long result; // rax
 unsigned int v8; // edx
 long long *v9; // rsi
 long long v10; // kr00_8
 unsigned char v12[8]; // [rsp+20h] [rbp-B8h] BYREF
 long long v13; // [rsp+28h] [rbp-B0h]
 long long v14; // [rsp+30h] [rbp-A8h]
 long long v15; // [rsp+38h] [rbp-A0h]
 long long v16; // [rsp+40h] [rbp-98h]
 long long v17; // [rsp+48h] [rbp-90h]
 va_list va; // [rsp+0h] [rbp-D8h]

 va_start(va, a7);
 v13 = a2;
 v14 = a3;
 v15 = a4;
 v16 = a5;
 v17 = a6;
 if ( a1 <= 0 )
 return 0;
 result = 0;
 v8 = 8;
 do
 {
 if ( v8 > 0x28 )
 {
 v10 = va_arg(va, unsigned long long);
 v9 = &v10;
 }
 else
 {
 v9 = (long long *)&v12[v8];
 v8 += 8;
 }
 result = (unsigned int)(*(unsigned int *)v9 + result);
 --a1;
 }
 while ( a1 );
 return result;
}


/* Function: call_varargs_param @ 0x15DE */
long long call_varargs_param(
 double a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 long long a7)
{
 return param_varargs(4, 10, 20, 30, 40, a7, a1);
}


/* Function: param_func_ptr @ 0x15FF */
long long param_func_ptr(unsigned int ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x160C */
long long call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1612 */
long long param_double_ptr(unsigned int **a1, int a2)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 )
 {
 if ( *a1 )
 {
 **a1 = a2;
 *a1 = 0;
 return 1;
 }
 }
 return result;
}


/* Function: call_double_ptr @ 0x1633 */
long long call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1639 */
long long param_complex_cast(unsigned int *a1, int a2)
{
 long long result; // rax

 if ( a2 == 1 )
 return *a1 + a1[1];
 result = 0xFFFFFFFFLL;
 if ( !a2 )
 return *a1;
 return result;
}


/* Function: call_complex_cast @ 0x1650 */
long long call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1656 */
long long param_struct_byval(
 long long a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 long long a14)
{
 return (unsigned int)(a7 + HIDWORD(a14));
}


/* Function: call_struct_byval @ 0x165F */
long long call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x1680 */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1684 */
long long call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0x168A */
int test_parameter_passing(double a1)
{
 long long v1; // r9
 int v2; // eax

 puts(asc_23EB);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 8);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 v2 = param_varargs(4, 10, 20, 30, 40, v1, a1);
 printf("PARAM-L2-04: %d\n", v2);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 printf("PARAM-L3-04: %d\n", 15);
 return printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0x17A6 */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x17AA */
long long call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x17B0 */
long long ret_pointer(long long a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x17B5 */
long long call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x17BB */
long long ret_small_struct(unsigned int a1, long long a2)
{
 return (a2 << 32) | a1;
}


/* Function: call_ret_small_struct @ 0x17C5 */
long long call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x17CB */
long long ret_large_struct(long long a1, unsigned int a2)
{
 long long result; // rax
 __m128i v3; // xmm0
 __m128i si128; // xmm1
 long long v5; // rcx
 __m128i v6; // xmm2

 result = a1;
 v3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 0);
 si128 = _mm_load_si128((const __m128i *)&xmmword_2030);
 v5 = 0;
 v6 = _mm_load_si128((const __m128i *)&xmmword_2050);
 do
 {
 *(__m128i *)(a1 + 4 * v5) = _mm_add_epi32(si128, v3);
 v5 += 4;
 si128 = _mm_add_epi32(si128, v6);
 }
 while ( v5 != 16 );
 return result;
}


/* Function: call_ret_large_struct @ 0x1805 */
long long call_ret_large_struct()
{
 return 215;
}


/* Function: func_a @ 0x1826 */
long long func_a(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x182A */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: ret_func_ptr @ 0x182E */
long long ( * ret_func_ptr(int a1))(int a1)
{
 long long ( *result)(int); // rax

 result = func_b;
 if ( !a1 )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1843 */
long long call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1849 */
int * ret_opaque_handle(int a1)
{
 int *result; // rax

 result = (int *)&ret_opaque_handle_handle2;
 if ( !a1 )
 return &ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x185E */
long long call_ret_opaque()
{
 return (unsigned int)ret_opaque_handle_handle1;
}


/* Function: ret_complex_expr @ 0x1865 */
long long ret_complex_expr(int a1, int a2, int a3)
{
 long long result; // rax

 result = (unsigned int)(a3 + 10);
 if ( a1 > a2 )
 return (unsigned int)(2 * a3);
 return result;
}


/* Function: call_ret_complex_expr @ 0x1871 */
long long call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1877 */
long long ret_multi_branch(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 < 3 )
 return 10 * a1 + 10;
 return result;
}


/* Function: call_ret_multi_branch @ 0x188A */
long long call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1890 */
long long ret_void(int a1, unsigned int *a2)
{
 long long result; // rax

 result = (unsigned int)(3 * a1);
 *a2 = result;
 return result;
}


/* Function: call_ret_void @ 0x1896 */
long long call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x189C */
int test_return_values()
{
 puts(asc_240C);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 printf(aRetL104D, 215);
 printf(aRetL201D, 10);
 printf(aRetL202D, (unsigned int)ret_opaque_handle_handle1);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 return printf(aRetL303D, 21);
}


/* Function: main @ 0x1975 */
int main(int argc, const char **argv, const char **envp)
{
 double v3; // xmm0_8

 test_calling_conventions(v3);
 test_parameter_passing(v3);
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x198C */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4060 */

/* FAILED to decompile: puts @ 0x4068 */

/* FAILED to decompile: strlen @ 0x4070 */

/* FAILED to decompile: printf @ 0x4078 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4080 */

/* FAILED to decompile: __gmon_start__ @ 0x4090 */

/* Total functions decompiled: 78, failed: 6 */
