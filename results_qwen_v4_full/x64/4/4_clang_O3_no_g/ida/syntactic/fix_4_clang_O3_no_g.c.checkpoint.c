/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_clang_O3_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <emmintrin.h>
#include <stdarg.h>

typedef __builtin_va_list gcc_va_list;
#define va_start(v, l) __builtin_va_start(v, l)
#define va_end(v) __builtin_va_end(v)
#define va_arg(v, l) __builtin_va_arg(v, l)
#define LODWORD(x) (*(unsigned int*)&(x))
#define HIDWORD(x) (*(unsigned int*)((char*)&(x) + 4))

extern long long _gmon_start__(void);
static const char *s = "=== Calling Convention Tests ===";
static const char *aCallL206 = "CALL-L2-01: %d\n";
static const char *aCallL207 = "CALL-L2-02: %d\n";
static const char *aCallL208 = "CALL-L2-03: %d\n";
static const char *aCallL209 = "CALL-L2-04: %d\n";
static const char *aCallL210 = "CALL-L2-05: %d\n";
static const char *aCallL211 = "CALL-L2-06: %d\n";
static const char *asc_23AB = "=== Parameter Passing Tests ===";
static const char *asc_23CC = "=== Return Value Tests ===";
static const char *aRetL101D = "RET-L1-01: %d\n";
static const char *aRetL102D = "RET-L1-02: %d\n";
static const char *aRetL103D = "RET-L1-03: %d\n";
static const char *aRetL104D = "RET-L1-04: %d\n";
static const char *aRetL201D = "RET-L2-01: %d\n";
static const char *aRetL202D = "RET-L2-02: %d\n";
static const char *aRetL301D = "RET-L3-01: %d\n";
static const char *aRetL302D = "RET-L3-02: %d\n";
static const char *aRetL303D = "RET-L3-03: %d\n";
static int ret_opaque_handle_handle1 = 100;
static int ret_opaque_handle_handle2 = 200;
static __m128i xmmword_2010 = {0};
static __m128i xmmword_2020 = {0};
static __m128i xmmword_2030 = {0};




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x1160 */
long long cdecl_func(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x1170 */
long long call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1180 */
long long stdcall_func(int a1, int a2)
{
 return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x1190 */
long long call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x11A0 */
long long fastcall_func(int a1, int a2, int a3)
{
 return (unsigned int)(a3 + a1 + a2);
}


/* Function: call_fastcall @ 0x11B0 */
long long call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x11C0 */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x11D0 */
long long arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a5 + a4 + a3 + a1 + a2);
}


/* Function: call_arm_aapcs @ 0x11E0 */
long long call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x11F0 */
long long mips_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a4 + a3 + a1 + a2);
}


/* Function: call_mips @ 0x1200 */
long long call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x1210 */
long long amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a6 + a5 + a4 + a3 + a1 + a2);
}


/* Function: call_amd64_sysv @ 0x1220 */
long long call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x1230 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a5 + a4 + a3 + a1 + a2);
}


/* Function: call_ms_x64 @ 0x1240 */
long long call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1250 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a4 + a3 + a1 + a2);
}


/* Function: call_vectorcall @ 0x1260 */
long long call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x1270 */
long long mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1280 */
long long varargs_func(int a1, long long a2, long long a3, long long a4, long long a5, long long a6, double a7, ...)
{
 unsigned int v7; // r9d
 long long result; // rax
 unsigned int v9; // esi
 unsigned int *v10; // rdx
 unsigned int *v11; // rdx
 int v12; // eax
 int v13; // kr00_4
 int v14; // kr08_4
 gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
 unsigned char v16[8]; // [rsp+20h] [rbp-B8h] BYREF
 long long v17; // [rsp+28h] [rbp-B0h]
 long long v18; // [rsp+30h] [rbp-A8h]
 long long v19; // [rsp+38h] [rbp-A0h]
 long long v20; // [rsp+40h] [rbp-98h]
 long long v21; // [rsp+48h] [rbp-90h]

 va_start(va, a7);
 v17 = a2;
 v18 = a3;
 v19 = a4;
 v20 = a5;
 v21 = a6;
 if ( a1 <= 0 )
 return 0;
 v7 = 8;
 if ( a1 != 1 )
 {
 v9 = a1 & 0xFFFFFFFE;
 LODWORD(result) = 0;
 while ( 1 )
 {
 if ( v7 > 0x28 )
 {
 v13 = va_arg(va, unsigned long long);
 v12 = v13 + result;
LABEL_11:
 v14 = va_arg(va, unsigned long long);
 result = (unsigned int)(v14 + v12);
 v9 -= 2;
 if ( !v9 )
 goto LABEL_12;
 }
 else
 {
 v11 = &v16[v7];
 v7 += 8;
 v12 = *v11 + result;
 if ( v7 >= 0x29 )
 goto LABEL_11;
 v10 = &v16[v7];
 v7 += 8;
 result = (unsigned int)(*v10 + v12);
 v9 -= 2;
 if ( !v9 )
 goto LABEL_12;
 }
 }
 }
 result = 0;
LABEL_12:
 if ( (a1 & 1) != 0 )
 {
 if ( v7 >= 0x29 )
 return (unsigned int)(*(unsigned int *)va[0].overflow_arg_area + result);
 else
 return (unsigned int)(*(unsigned int *)&v16[v7] + result);
 }
 return result;
}


/* Function: func_no_args @ 0x1450 */
long long func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1460 */
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return (unsigned int)(a8 + a7 + a6 + a5 + a4 + a3 + a1 + a2);
}


/* Function: func_mixed_args @ 0x1480 */
long long func_mixed_args(int a1, const char *a2, int a3, double a4)
{
 int v5; // eax

 if ( a2 )
 v5 = strlen(a2);
 else
 v5 = 0;
 return (unsigned int)(int)((double)a3 + (double)(a1 + v5) + a4);
}


/* Function: func_struct_byval @ 0x14D0 */
long long func_struct_byval(
 long long a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 __int128 a7,
 __int128 a8,
 __int128 a9,
 __int128 a10,
 __m128i a11,
 __m128i a12,
 __m128i a13,
 __m128i a14)
{
 __m128i v14; // xmm1

 v14 = _mm_add_epi64(
 _mm_add_epi64(
 _mm_add_epi64(_mm_load_si128((const __m128i *)&a8), a12),
 _mm_add_epi64(_mm_load_si128((const __m128i *)&a10), a14)),
 _mm_add_epi64(
 _mm_add_epi64(_mm_load_si128((const __m128i *)&a7), a11),
 _mm_add_epi64(_mm_load_si128((const __m128i *)&a9), a13)));
 return (unsigned int)_mm_cvtsi128_si32(_mm_add_epi64(_mm_shuffle_epi32(v14, 238), v14));
}


/* Function: func_struct_byptr @ 0x1520 */
long long func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return (unsigned int)(*a1 * a1[1]);
 else
 return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0x1540 */
int test_calling_conventions(double a1)
{
 long long v1; // rax
 unsigned int v2; // eax
 long long v4; // [rsp-8h] [rbp-8h]

 v4 = v1;
 puts(s);
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
 v2 = varargs_func(5, 1, 2, 3, 4, 5, a1, v4);
 printf(aCallL206, v2);
 printf(aCallL207, 42);
 printf(aCallL208, 36);
 printf(aCallL209, 117);
 printf(aCallL210, 136);
 return printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x16B0 */
long long param_by_value_int(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x16C0 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x16D0 */
long long param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x16E0 */
long long call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x16F0 */
long long param_array_decay()
{
 return 8;
}


/* Function: call_array_decay @ 0x1700 */
long long call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0x1710 */
long long param_string(char *a1)
{
 return (unsigned int)(*a1 + a1[1]);
}


/* Function: call_string_param @ 0x1720 */
long long call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x1730 */
long long param_ptr_array(long long a1, int a2)
{
 long long v2; // r8
 long long v3; // rdx
 long long result; // rax
 long long v5; // rdx
 long long v6; // rsi

 if ( a2 <= 0 )
 return 0;
 v2 = a2 & 3;
 if ( (unsigned long long)(unsigned int)a2 - 1 >= 3 )
 {
 v3 = 0;
 LODWORD(result) = 0;
 do
 {
 result = (unsigned int)(result
 + **(char **)(a1 + 8 * v3)
 + **(char **)(a1 + 8 * v3 + 8)
 + **(char **)(a1 + 8 * v3 + 16)
 + **(char **)(a1 + 8 * v3 + 24));
 v3 += 4;
 }
 while ( (a2 & 0xFFFFFFFC) != v3 );
 }
 else
 {
 v3 = 0;
 result = 0;
 }
 if ( (a2 & 3) != 0 )
 {
 v5 = a1 + 8 * v3;
 v6 = 0;
 do
 result = (unsigned int)(**(char **)(v5 + 8 * v6++) + (unsigned int)result);
 while ( v2 != v6 );
 }
 return result;
}


/* Function: call_ptr_array @ 0x17C0 */
long long call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x17D0 */
long long param_varargs(int a1, long long a2, long long a3, long long a4, long long a5, long long a6, double a7, ...)
{
 unsigned int v7; // r9d
 long long result; // rax
 unsigned int v9; // esi
 unsigned int *v10; // rdx
 unsigned int *v11; // rdx
 int v12; // eax
 int v13; // kr00_4
 int v14; // kr08_4
 gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
 unsigned char v16[8]; // [rsp+20h] [rbp-B8h] BYREF
 long long v17; // [rsp+28h] [rbp-B0h]
 long long v18; // [rsp+30h] [rbp-A8h]
 long long v19; // [rsp+38h] [rbp-A0h]
 long long v20; // [rsp+40h] [rbp-98h]
 long long v21; // [rsp+48h] [rbp-90h]

 va_start(va, a7);
 v17 = a2;
 v18 = a3;
 v19 = a4;
 v20 = a5;
 v21 = a6;
 if ( a1 <= 0 )
 return 0;
 v7 = 8;
 if ( a1 != 1 )
 {
 v9 = a1 & 0xFFFFFFFE;
 LODWORD(result) = 0;
 while ( 1 )
 {
 if ( v7 > 0x28 )
 {
 v13 = va_arg(va, unsigned long long);
 v12 = v13 + result;
LABEL_11:
 v14 = va_arg(va, unsigned long long);
 result = (unsigned int)(v14 + v12);
 v9 -= 2;
 if ( !v9 )
 goto LABEL_12;
 }
 else
 {
 v11 = &v16[v7];
 v7 += 8;
 v12 = *v11 + result;
 if ( v7 >= 0x29 )
 goto LABEL_11;
 v10 = &v16[v7];
 v7 += 8;
 result = (unsigned int)(*v10 + v12);
 v9 -= 2;
 if ( !v9 )
 goto LABEL_12;
 }
 }
 }
 result = 0;
LABEL_12:
 if ( (a1 & 1) != 0 )
 {
 if ( v7 >= 0x29 )
 return (unsigned int)(*(unsigned int *)va[0].overflow_arg_area + result);
 else
 return (unsigned int)(*(unsigned int *)&v16[v7] + result);
 }
 return result;
}


/* Function: call_varargs_param @ 0x19A0 */
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


/* Function: param_func_ptr @ 0x19D0 */
long long param_func_ptr(unsigned int ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x19E0 */
long long call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x19F0 */
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


/* Function: call_double_ptr @ 0x1A20 */
long long call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1A30 */
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


/* Function: call_complex_cast @ 0x1A50 */
long long call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1A60 */
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


/* Function: call_struct_byval @ 0x1A70 */
long long call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x1A80 */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1A90 */
long long call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0x1AA0 */
int test_parameter_passing(double a1)
{
 long long v1; // rax
 long long v2; // r9
 int v3; // eax
 long long v5; // [rsp-8h] [rbp-8h]

 v5 = v1;
 puts(asc_23AB);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 8);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 v3 = param_varargs(4, 10, 20, 30, 40, v2, a1, v5);
 printf("PARAM-L2-04: %d\n", v3);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 printf("PARAM-L3-04: %d\n", 15);
 return printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0x1BA0 */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x1BB0 */
long long call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1BC0 */
long long ret_pointer(long long a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1BD0 */
long long call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1BE0 */
long long ret_small_struct(unsigned int a1, long long a2)
{
 return (a2 << 32) | a1;
}


/* Function: call_ret_small_struct @ 0x1BF0 */
long long call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1C00 */
long long ret_large_struct(long long a1, unsigned int a2)
{
 long long result; // rax
 __m128i v3; // xmm0

 result = a1;
 *(unsigned int *)a1 = a2;
 v3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 0);
 *(__m128i *)(a1 + 4) = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_2010), v3);
 *(__m128i *)(a1 + 20) = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_2020), v3);
 *(__m128i *)(a1 + 36) = _mm_add_epi32(v3, (__m128i)xmmword_2030);
 *(unsigned int *)(a1 + 52) = a2 + 13;
 *(unsigned int *)(a1 + 56) = a2 + 14;
 *(unsigned int *)(a1 + 60) = a2 + 15;
 return result;
}


/* Function: call_ret_large_struct @ 0x1C50 */
long long call_ret_large_struct()
{
 return 215;
}


/* Function: func_a @ 0x1C60 */
long long func_a(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x1C70 */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: ret_func_ptr @ 0x1C80 */
long long ( * ret_func_ptr(int a1))(int a1)
{
 long long ( *result)(int); // rax

 result = func_b;
 if ( !a1 )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1CA0 */
long long call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1CB0 */
int * ret_opaque_handle(int a1)
{
 int *result; // rax

 result = (int *)&ret_opaque_handle_handle2;
 if ( !a1 )
 return &ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x1CD0 */
long long call_ret_opaque()
{
 return (unsigned int)ret_opaque_handle_handle1;
}


/* Function: ret_complex_expr @ 0x1CE0 */
long long ret_complex_expr(int a1, int a2, int a3)
{
 long long result; // rax

 result = (unsigned int)(a3 + 10);
 if ( a1 > a2 )
 return (unsigned int)(2 * a3);
 return result;
}


/* Function: call_ret_complex_expr @ 0x1CF0 */
long long call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1D00 */
long long ret_multi_branch(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 < 3 )
 return 10 * a1 + 10;
 return result;
}


/* Function: call_ret_multi_branch @ 0x1D20 */
long long call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1D30 */
long long ret_void(int a1, unsigned int *a2)
{
 long long result; // rax

 result = (unsigned int)(3 * a1);
 *a2 = result;
 return result;
}


/* Function: call_ret_void @ 0x1D40 */
long long call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1D50 */
int test_return_values()
{
 puts(asc_23CC);
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


/* Function: main @ 0x1E10 */
int main(int argc, const char **argv, const char **envp)
{
 double v3; // xmm0_8

 test_calling_conventions(v3);
 test_parameter_passing(v3);
 puts(asc_23CC);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 printf(aRetL104D, 215);
 printf(aRetL201D, 10);
 printf(aRetL202D, (unsigned int)ret_opaque_handle_handle1);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 printf(aRetL303D, 21);
 return 0;
}


/* Function: .term_proc @ 0x1ED8 */
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
