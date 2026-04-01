/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_gcc_O3_no_g
 * Processor: pc
 */

#include <emmintrin.h>
#include <stdint.h>
#include <stdio.h>

#define HIDWORD(x) ((unsigned int)((x) >> 32))
#define JUMPOUT(x) return

/* External symbols */
extern void (*_gmon_start__)(void);

/* Forward declarations */
long long test_calling_conventions();
long long test_parameter_passing();
long long test_return_values();

/* Global variables */
extern const char s[];
extern const char asc_2130[];
extern const char aCallL206[];
extern const char aCallL207[];
extern const char aCallL208[];
extern const char aCallL209[];
extern const char aCallL210[];
extern const char aCallL211[];
extern const char asc_22AC[];
extern const char aRetL101D[];
extern const char aRetL102D[];
extern const char aRetL103D[];
extern const char aRetL104D[];
extern const char aRetL201D[];
extern const char aRetL202D[];
extern const char aRetL301D[];
extern const char aRetL302D[];
extern const char aRetL303D[];
extern const __m128i xmmword_23D0;
extern const __m128i xmmword_23E0;
extern const __m128i xmmword_23F0;
extern const __m128i xmmword_2400;
extern int handle1_1;
extern int handle2_0;

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( _gmon_start__ )
 {
 _gmon_start__();
 return result;
 }
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


/* Function: varargs_func.cold @ 0x10C0 */
void varargs_func_cold(int a1, long long a2, unsigned int *a3, long long a4, int a5)
{
 int v5; // eax
 unsigned int *v6; // rcx

 v5 = 0;
 do
 {
 v6 = a3;
 ++v5;
 a3 += 2;
 a5 += *v6;
 }
 while ( a1 > v5 );
 JUMPOUT(0x14E0);
}


/* Function: param_varargs.cold @ 0x10DB */
void param_varargs_cold(int a1, long long a2, unsigned int *a3, long long a4, int a5)
{
 int v5; // eax
 unsigned int *v6; // rcx

 v5 = 0;
 do
 {
 v6 = a3;
 ++v5;
 a3 += 2;
 a5 += *v6;
 }
 while ( a1 > v5 );
 JUMPOUT(0x1960);
}


/* Function: main @ 0x1100 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions(argc, argv, envp);
 test_parameter_passing(argc, argv, envp);
 test_return_values(argc, argv, envp);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: func_a @ 0x1220 */
long long func_a(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: param_varargs.constprop.0 @ 0x1230 */
long long param_varargs_constprop_0(long long a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a5 + a4 + a2 + a3);
}


/* Function: varargs_func.constprop.0 @ 0x12A0 */
long long varargs_func_constprop_0(long long a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a6 + a5 + a4 + a2 + a3);
}


/* Function: func_b @ 0x1320 */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0x1330 */
long long cdecl_func(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x1340 */
long long call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1350 */
long long stdcall_func(int a1, int a2)
{
 return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x1360 */
long long call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1370 */
long long fastcall_func(int a1, int a2, int a3)
{
 return (unsigned int)(a2 + a1 + a3);
}


/* Function: call_fastcall @ 0x1380 */
long long call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x1390 */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x13A0 */
long long arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_arm_aapcs @ 0x13B0 */
long long call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x13C0 */
long long mips_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_mips @ 0x13D0 */
long long call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x13E0 */
long long amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a5 + a4 + a3 + a2 + a1 + a6);
}


/* Function: call_amd64_sysv @ 0x1400 */
long long call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x1410 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_ms_x64 @ 0x1420 */
long long call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1430 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_vectorcall @ 0x1440 */
long long call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x1450 */
long long mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1460 */
void varargs_func(int a1, long long a2, long long a3, long long a4, long long a5, long long a6, int a7, int a8)
{
 /* Stubbed varargs function - original decompilation had invalid stack access */
 (void)a1;
 (void)a2;
 (void)a3;
 (void)a4;
 (void)a5;
 (void)a6;
 (void)a7;
 (void)a8;
 return;
}


/* Function: func_no_args @ 0x1530 */
long long func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1540 */
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return (unsigned int)(a8 + a7 + a5 + a4 + a3 + a2 + a1 + a6);
}


/* Function: func_mixed_args @ 0x1560 */
long long func_mixed_args(int a1, const char *a2, int a3, double a4)
{
 double v4; // xmm1_8
 int v6; // ebx

 v4 = a4;
 v6 = a1;
 if ( a2 )
 {
 v4 = a4;
 v6 = strlen(a2) + a1;
 }
 return (unsigned int)(int)((double)v6 + v4 + (double)a3);
}


/* Function: func_struct_byval @ 0x15C0 */
unsigned long long func_struct_byval(
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
 __int128 a11,
 __int128 a12,
 __int128 a13,
 __int128 a14)
{
 __m128i v14; // xmm0
 __m128i v15; // xmm1

 v14 = _mm_add_epi64(
 _mm_add_epi64(
 _mm_add_epi64(
 _mm_add_epi64(
 _mm_add_epi64(
 _mm_add_epi64(
 _mm_add_epi64(_mm_loadu_si128((const __m128i *)&a7), _mm_loadu_si128((const __m128i *)&a8)),
 _mm_loadu_si128((const __m128i *)&a9)),
 _mm_loadu_si128((const __m128i *)&a10)),
 _mm_loadu_si128((const __m128i *)&a11)),
 _mm_loadu_si128((const __m128i *)&a12)),
 _mm_loadu_si128((const __m128i *)&a13)),
 _mm_loadu_si128((const __m128i *)&a14));
 v15 = _mm_srli_si128(v14, 8);
 v14 = _mm_add_epi64(v14, v15);
 return (unsigned long long)_mm_cvtsi128_si64(v14);
}


/* Function: func_struct_byptr @ 0x1630 */
long long func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return (unsigned int)(a1[1] * *a1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0x1650 */
long long test_calling_conventions()
{
 unsigned int v0; // eax

 puts(s);
 __printf_chk(1, "CALL-L1-01: %d\n", 15);
 __printf_chk(1, "CALL-L1-02: %d\n", 50);
 __printf_chk(1, "CALL-L1-03: %d\n", 6);
 __printf_chk(1, "CALL-L1-04: %d\n", 15);
 __printf_chk(1, "CALL-L1-05: %d\n", 15);
 __printf_chk(1, "CALL-L1-06: %d\n", 100);
 __printf_chk(1, "CALL-L1-07: %d\n", 21);
 __printf_chk(1, "CALL-L1-08: %d\n", 15);
 __printf_chk(1, "CALL-L1-09: %d\n", 10);
 __printf_chk(1, "CALL-L1-10: %d\n", 33);
 v0 = varargs_func_constprop_0(5, 1, 2, 3, 4, 5);
 __printf_chk(1, aCallL206, v0);
 __printf_chk(1, aCallL207, 42);
 __printf_chk(1, aCallL208, 36);
 __printf_chk(1, aCallL209, 117);
 __printf_chk(1, aCallL210, 136);
 return __printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x1810 */
long long param_by_value_int(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x1820 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x1830 */
long long param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1840 */
long long call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x1850 */
long long param_array_decay()
{
 return 8;
}


/* Function: call_array_decay @ 0x1860 */
long long call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0x1870 */
long long param_string(char *a1)
{
 return (unsigned int)(a1[1] + *a1);
}


/* Function: call_string_param @ 0x1880 */
long long call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x1890 */
long long param_ptr_array(char **a1, int a2)
{
 long long v2; // rcx
 long long result; // rax
 char *v4; // rdx

 if ( a2 <= 0 )
 return 0;
 v2 = (long long)&a1[(unsigned int)(a2 - 1) + 1];
 LODWORD(result) = 0;
 do
 {
 v4 = *a1++;
 result = (unsigned int)(*v4 + (unsigned int)result);
 }
 while ( (char **)v2 != a1 );
 return result;
}


/* Function: call_ptr_array @ 0x18D0 */
long long call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x18E0 */
void param_varargs(int a1, long long a2, long long a3, long long a4, long long a5, long long a6, int a7, int a8)
{
 /* Stubbed varargs function - original decompilation had invalid stack access */
 return;
}


/* Function: call_varargs_param @ 0x19B0 */
long long call_varargs_param()
{
 return param_varargs_constprop_0(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x19E0 */
long long param_func_ptr(unsigned int ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x1A00 */
long long call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1A10 */
long long param_double_ptr(unsigned long long *a1, int a2)
{
 unsigned long long *ptr;
 if ( !a1 )
 return 0xFFFFFFFFLL;
 if ( !*a1 )
 return 0xFFFFFFFFLL;
 ptr = (unsigned long long *)*a1;
 *ptr = a2;
 return 1;
}


/* Function: call_double_ptr @ 0x1A40 */
long long call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1A50 */
long long param_complex_cast(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return 0xFFFFFFFFLL;
}


/* Function: call_complex_cast @ 0x1A80 */
long long call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1A90 */
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


/* Function: call_struct_byval @ 0x1AA0 */
long long call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x1AB0 */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1AC0 */
long long call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x1AD0 */
long long test_parameter_passing()
{
 int v0; // eax

 puts(asc_2130);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 8);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 __printf_chk(1, "PARAM-L2-03: %d\n", 300);
 v0 = param_varargs_constprop_0(4, 10, 20, 30, 40);
 __printf_chk(1, "PARAM-L2-04: %d\n", v0);
 __printf_chk(1, "PARAM-L3-01: %d\n", 20);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 __printf_chk(1, "PARAM-L3-04: %d\n", 15);
 return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x1C10 */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x1C20 */
long long call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1C30 */
long long ret_pointer(long long a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1C40 */
long long call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1C50 */
unsigned long long ret_small_struct(unsigned int a1, unsigned int a2)
{
 __m128i v1;
 __m128i v2;
 __m128i result;
 unsigned long long ret_val;

 v1 = _mm_cvtsi32_si128(a1);
 v2 = _mm_cvtsi32_si128(a2);
 result = _mm_unpacklo_epi32(v1, v2);
 _mm_storeu_si128((__m128i *)&ret_val, result);
 return ret_val;
}


/* Function: call_ret_small_struct @ 0x1C70 */
long long call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1C80 */
__m128i * ret_large_struct(__m128i *a1, unsigned int a2)
{
 __m128i *result; // rax
 __m128i v3; // xmm0
 __m128i v4; // xmm5
 __m128i v5; // xmm6

 result = a1;
 v3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 0);
 v4 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_23E0), v3);
 v5 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_23F0), v3);
 *a1 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_23D0), v3);
 a1[1] = v4;
 a1[2] = v5;
 a1[3] = _mm_add_epi32(v3, xmmword_2400);
 return result;
}


/* Function: call_ret_large_struct @ 0x1D00 */
long long call_ret_large_struct()
{
 return 215;
}


/* Function: ret_func_ptr @ 0x1D10 */
long long ( * ret_func_ptr(int a1))(int)
{
 long long ( *result)(int); // rax

 result = func_b;
 if ( !a1 )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1D30 */
long long call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1D40 */
int * ret_opaque_handle(int a1)
{
 int *result; // rax

 result = &handle1_1;
 if ( a1 )
 return (int *)&handle2_0;
 return result;
}


/* Function: call_ret_opaque @ 0x1D60 */
long long call_ret_opaque()
{
 return (unsigned int)handle1_1;
}


/* Function: ret_complex_expr @ 0x1D70 */
long long ret_complex_expr(int a1, int a2, int a3)
{
 long long result; // rax
 unsigned int v4; // edx

 result = (unsigned int)(2 * a3);
 v4 = a3 + 10;
 if ( a1 <= a2 )
 return v4;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1D80 */
long long call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1D90 */
long long ret_multi_branch(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 <= 2 )
 return 2 * (5 * a1 + 5);
 return result;
}


/* Function: call_ret_multi_branch @ 0x1DB0 */
long long call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1DC0 */
long long ret_void(int a1, unsigned int *a2)
{
 long long result; // rax

 result = (unsigned int)(3 * a1);
 *a2 = result;
 return result;
}


/* Function: call_ret_void @ 0x1DD0 */
long long call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1DE0 */
long long test_return_values()
{
 puts(asc_22AC);
 __printf_chk(1, aRetL101D, 42);
 __printf_chk(1, aRetL102D, 20);
 __printf_chk(1, aRetL103D, 7);
 __printf_chk(1, aRetL104D, 215);
 __printf_chk(1, aRetL201D, 10);
 __printf_chk(1, aRetL202D, (unsigned int)handle1_1);
 __printf_chk(1, aRetL301D, 40);
 __printf_chk(1, aRetL302D, 60);
 return __printf_chk(1, aRetL303D, 21);
}


/* Function: .term_proc @ 0x1ED4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4028 */

/* FAILED to decompile: puts @ 0x4030 */

/* FAILED to decompile: strlen @ 0x4038 */

/* FAILED to decompile: __stack_chk_fail @ 0x4040 */

/* FAILED to decompile: __printf_chk @ 0x4048 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4050 */

/* FAILED to decompile: __gmon_start__ @ 0x4060 */

/* Total functions decompiled: 86, failed: 7 */
