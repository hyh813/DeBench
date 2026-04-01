/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/4/4_gcc_O3_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arm_neon.h>

/* Macro definitions */
#define LODWORD(x) (*(int*)&(x))

/* Global variables */
int handle1_1;
int handle2_0;
int32x4_t xmmword_19D0;
int32x4_t xmmword_19E0;
int32x4_t xmmword_19F0;
int32x4_t xmmword_1A00;
long long _stack_chk_guard;

/* Forward declarations */
long long call_weak_fn();
void JUMPOUT(int);
long long test_calling_conventions(int argc, const char **argv, const char **envp);
long long test_parameter_passing(long long v3);
long long test_return_values(long long v4);
long long func_a(int a1);
long long func_b(int a1);
long long param_varargs_constprop_0(long long a1, int a2, int a3, int a4, int a5);
long long varargs_func_constprop_0(long long a1, int a2, int a3, int a4, int a5, int a6);
long long cdecl_func(int a1, int a2);
long long call_cdecl();
long long stdcall_func(int a1, int a2);
long long call_stdcall();
long long fastcall_func(int a1, int a2, int a3);
long long call_fastcall();
long long call_thiscall();
long long arm_aapcs_func(int a1, int a2, int a3, int a4, int a5);
long long call_arm_aapcs();
long long mips_func(int a1, int a2, int a3, int a4);
long long call_mips();
long long amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6);
long long call_amd64_sysv();
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5);
long long call_ms_x64();
long long vectorcall_func(int a1, int a2, int a3, int a4);
long long call_vectorcall();
long long mixed_conventions_test();
long long varargs_func(int a1, long long a2, long long a3, long long a4, long long a5, long long a6, long long a7, long long a8, char a9);
long long func_no_args();
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
long long func_mixed_args(int a1, char *s, long long a3, double a4);
long long func_struct_byval(int64x2_t *a1);
long long func_struct_byptr(unsigned int *a1);
long long param_by_value_int(int a1);
long long call_by_value_int();
long long param_by_value_ptr(unsigned int *a1);
long long call_by_value_ptr();
long long param_array_decay();
long long call_array_decay();
long long param_string(unsigned char *a1);
long long call_string_param();
long long param_ptr_array(long long a1, int a2);
long long call_ptr_array();
long long param_varargs(int a1, long long a2, long long a3, long long a4, long long a5, long long a6, long long a7, long long a8, char a9);
long long call_varargs_param();
long long param_func_ptr(unsigned int (*a1)(unsigned long long), unsigned int a2);
long long call_func_ptr_param();
long long param_double_ptr(unsigned int **a1, int a2);
long long call_double_ptr();
long long param_complex_cast(unsigned int *a1, int a2);
long long call_complex_cast();
long long param_struct_byval(unsigned int *a1);
long long call_struct_byval();
long long param_order_dep(int a1, int a2);
long long call_order_dep();
long long ret_basic_type(int a1);
long long call_ret_basic();
long long ret_pointer(long long a1);
long long call_ret_pointer();
unsigned long long ret_small_struct(unsigned int a1, long long a2);
long long call_ret_small_struct();
long long ret_large_struct(unsigned int a1, int32x4_t *a2);
long long call_ret_large_struct();
long long (*ret_func_ptr(int a1))(int a1);
long long call_ret_func_ptr();
int *ret_opaque_handle(int a1);
long long call_ret_opaque();
long long ret_complex_expr(int a1, int a2, int a3);
long long call_ret_complex_expr();
long long ret_multi_branch(unsigned int a1);
long long call_ret_multi_branch();
long long ret_void(int a1, unsigned int *a2);
long long call_ret_void();
long long init_proc();
void sub_710();
void term_proc();

/* String constants */
const char *asc_1598 = "Testing calling conventions...";
const char *asc_1760 = "Testing parameter passing...";
const char *asc_1890 = "Testing return values...";
const char *aCallL206 = "CALL-L2-06: %d\n";
const char *aCallL207 = "CALL-L2-07: %d\n";
const char *aCallL208 = "CALL-L2-08: %d\n";
const char *aCallL209 = "CALL-L2-09: %d\n";
const char *aCallL210 = "CALL-L2-10: %d\n";
const char *aCallL211 = "CALL-L2-11: %d\n";
const char *aRetL101D = "RET-L1-01: %d\n";
const char *aRetL102D = "RET-L1-02: %d\n";
const char *aRetL103D = "RET-L1-03: %d\n";
const char *aRetL104D = "RET-L1-04: %d\n";
const char *aRetL201D = "RET-L2-01: %d\n";
const char *aRetL202D = "RET-L2-02: %d\n";
const char *aRetL301D = "RET-L3-01: %d\n";
const char *aRetL302D = "RET-L3-02: %d\n";
const char *aRetL303D = "RET-L3-03: %d\n";

/* Function: JUMPOUT */
void JUMPOUT(int a1)
{
 (void)a1;
}


/* Function: .init_proc @ 0x6F0 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_710 @ 0x710 */
void sub_710()
{
 JUMPOUT(0);
}


/* Function: main @ 0x7C0 */
int main(int argc, const char **argv, const char **envp)
{
 long long v3; // x0
 long long v4; // x0

 v3 = test_calling_conventions(argc, argv, envp);
 v4 = test_parameter_passing(v3);
 test_return_values(v4);
 return 0;
}



/* CRT stub function _start removed by preprocessor */


/* Function: call_weak_fn */
long long call_weak_fn()
{
 return 0;
}






/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: func_a @ 0x920 */
long long func_a(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: param_varargs.constprop.0 @ 0x930 */
long long param_varargs_constprop_0(long long a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a2 + a3 + a4 + a5);
}


/* Function: varargs_func.constprop.0 @ 0x9B0 */
long long varargs_func_constprop_0(long long a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a2 + a3 + a4 + a5 + a6);
}


/* Function: func_b @ 0xA40 */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0xA50 */
long long cdecl_func(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0xA60 */
long long call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0xA70 */
long long stdcall_func(int a1, int a2)
{
 return (unsigned int)(a1 * a2);
}


/* Function: call_stdcall @ 0xA80 */
long long call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0xA90 */
long long fastcall_func(int a1, int a2, int a3)
{
 return (unsigned int)(a1 + a2 + a3);
}


/* Function: call_fastcall @ 0xAA0 */
long long call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0xAB0 */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0xAC0 */
long long arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5);
}


/* Function: call_arm_aapcs @ 0xAD4 */
long long call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0xAE0 */
long long mips_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a1 + a2 + a3 + a4);
}


/* Function: call_mips @ 0xAF0 */
long long call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0xB00 */
long long amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5 + a6);
}


/* Function: call_amd64_sysv @ 0xB20 */
long long call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0xB30 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5);
}


/* Function: call_ms_x64 @ 0xB44 */
long long call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0xB50 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a1 + a2 + a3 + a4);
}


/* Function: call_vectorcall @ 0xB60 */
long long call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0xB70 */
long long mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0xB80 */
long long varargs_func(
 int a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 long long a7,
 long long a8,
 char a9)
{
 int v10; // w3
 char *v11; // x2
 long long result; // x0
 int v13; // w1
 int v14; // w3
 int v15; // w1
 unsigned int *v16; // x2
 unsigned int *v17; // x3
 int v18; // w5
 char *v19; // x3

 v10 = -56;
 if ( a1 <= 0 )
 return 0;
 v11 = &a9;
 LODWORD(result) = 0;
 v13 = 0;
 while ( v10 < 0 )
 {
 v18 = v10 + 8;
 if ( v10 + 8 <= 0 )
 {
 v19 = &a9 + v10;
 }
 else
 {
 v19 = v11;
 v11 += 8;
 }
 ++v13;
 result = (unsigned int)(result + *(unsigned int *)v19);
 if ( a1 == v13 )
 return result;
 v10 = v18;
 }
 v14 = *(unsigned int *)v11;
 v15 = v13 + 1;
 v16 = (unsigned int *)(v11 + 8);
 result = (unsigned int)(result + v14);
 if ( a1 != v15 )
 {
 do
 {
 v17 = v16;
 ++v15;
 v16 += 2;
 result = (unsigned int)(result + *v17);
 }
 while ( a1 > v15 );
 }
 return result;
}


/* Function: func_no_args @ 0xC80 */
long long func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0xC90 */
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8);
}


/* Function: func_mixed_args @ 0xCB0 */
long long func_mixed_args(int a1, char *s, long long a3, double a4)
{
 int v4; // w19

 v4 = a1;
 if ( s )
 v4 = a1 + strlen(s);
 return (unsigned int)(int)((double)v4 + a4 + (double)a3);
}


/* Function: func_struct_byval @ 0xD00 */
long long func_struct_byval(int64x2_t *a1)
{
 return vaddvq_s64(
 vaddq_s64(
 a1[7],
 vaddq_s64(
 a1[6],
 vaddq_s64(a1[5], vaddq_s64(a1[4], vaddq_s64(a1[3], vaddq_s64(a1[2], vaddq_s64(*a1, a1[1]))))))));
}


/* Function: func_struct_byptr @ 0xD40 */
long long func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return (unsigned int)(*a1 * a1[1]);
 else
 return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0xD60 */
long long test_calling_conventions(int argc, const char **argv, const char **envp)
{
 unsigned int v0; // w0

 puts(asc_1598);
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


/* Function: param_by_value_int @ 0xED4 */
long long param_by_value_int(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0xEE0 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0xEF0 */
long long param_by_value_ptr(unsigned int *a1)
{
 long long result; // x0

 result = 1;
 *a1 *= 2;
 return result;
}


/* Function: call_by_value_ptr @ 0xF10 */
long long call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0xF20 */
long long param_array_decay()
{
 return 8;
}


/* Function: call_array_decay @ 0xF30 */
long long call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0xF40 */
long long param_string(unsigned char *a1)
{
 return *a1 + (unsigned int)a1[1];
}


/* Function: call_string_param @ 0xF50 */
long long call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0xF60 */
long long param_ptr_array(long long a1, int a2)
{
 long long v3; // x2
 long long result; // x0
 unsigned char *v5; // x3

 if ( a2 <= 0 )
 return 0;
 v3 = 0;
 LODWORD(result) = 0;
 do
 {
 v5 = *(unsigned char **)(a1 + 8 * v3++);
 result = (unsigned int)result + *v5;
 }
 while ( a2 > (int)v3 );
 return result;
}


/* Function: call_ptr_array @ 0xFA0 */
long long call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0xFB0 */
long long param_varargs(
 int a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 long long a7,
 long long a8,
 char a9)
{
 int v10; // w3
 char *v11; // x2
 long long result; // x0
 int v13; // w1
 int v14; // w3
 int v15; // w1
 unsigned int *v16; // x2
 unsigned int *v17; // x3
 int v18; // w5
 char *v19; // x3

 v10 = -56;
 if ( a1 <= 0 )
 return 0;
 v11 = &a9;
 LODWORD(result) = 0;
 v13 = 0;
 while ( v10 < 0 )
 {
 v18 = v10 + 8;
 if ( v10 + 8 <= 0 )
 {
 v19 = (char *)&a9 + v10;
 }
 else
 {
 v19 = v11;
 v11 += 8;
 }
 ++v13;
 result = (unsigned int)(result + *(unsigned int *)v19);
 if ( a1 == v13 )
 return result;
 v10 = v18;
 }
 v14 = *(unsigned int *)v11;
 v15 = v13 + 1;
 v16 = (unsigned int *)(v11 + 8);
 result = (unsigned int)(result + v14);
 if ( a1 != v15 )
 {
 do
 {
 v17 = v16;
 ++v15;
 v16 += 2;
 result = (unsigned int)(result + *v17);
 }
 while ( a1 > v15 );
 }
 return result;
}


/* Function: call_varargs_param @ 0x10B0 */
long long call_varargs_param()
{
 return param_varargs_constprop_0(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x10D0 */
long long param_func_ptr(unsigned int ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x10F0 */
long long call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1100 */
long long param_double_ptr(unsigned int **a1, int a2)
{
 unsigned int *v3; // x0
 long long result; // x0

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v3 = *a1;
 if ( !v3 )
 return 0xFFFFFFFFLL;
 *v3 = a2;
 result = 1;
 *a1 = 0;
 return result;
}


/* Function: call_double_ptr @ 0x1130 */
long long call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1140 */
long long param_complex_cast(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return 0xFFFFFFFFLL;
}


/* Function: call_complex_cast @ 0x1170 */
long long call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1180 */
long long param_struct_byval(unsigned int *a1)
{
 return (unsigned int)(*a1 + a1[15]);
}


/* Function: call_struct_byval @ 0x1190 */
long long call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x11A0 */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x11B0 */
long long call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x11C0 */
long long test_parameter_passing(long long v3)
{
 int v0; // w0

 puts(asc_1760);
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


/* Function: ret_basic_type @ 0x12D0 */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x12E0 */
long long call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x12F0 */
long long ret_pointer(long long a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1300 */
long long call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1310 */
unsigned long long ret_small_struct(unsigned int a1, long long a2)
{
 return a1 | (unsigned long long)(a2 << 32);
}


/* Function: call_ret_small_struct @ 0x1320 */
long long call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1330 */
long long ret_large_struct(unsigned int a1, int32x4_t *a2)
{
 int32x4_t v2; // q0
 long long v4; // [xsp+58h] [xbp+58h]

 v2 = vdupq_n_s32(a1);
 *a2 = vaddq_s32(v2, (int32x4_t)xmmword_19D0);
 a2[1] = vaddq_s32(v2, (int32x4_t)xmmword_19E0);
 a2[2] = vaddq_s32(v2, (int32x4_t)xmmword_19F0);
 a2[3] = vaddq_s32(v2, (int32x4_t)xmmword_1A00);
 return v4 - _stack_chk_guard;
}


/* Function: call_ret_large_struct @ 0x13C4 */
long long call_ret_large_struct()
{
 return 215;
}


/* Function: ret_func_ptr @ 0x13D0 */
long long ( * ret_func_ptr(int a1))(int a1)
{
 bool v1; // zf
 long long ( *result)(int); // x0

 v1 = a1 == 0;
 result = func_b;
 if ( v1 )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x13F0 */
long long call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1400 */
int * ret_opaque_handle(int a1)
{
 bool v1; // zf
 int *result; // x0

 v1 = a1 == 0;
 result = (int *)&handle2_0;
 if ( v1 )
 return &handle1_1;
 return result;
}


/* Function: call_ret_opaque @ 0x1420 */
long long call_ret_opaque()
{
 return (unsigned int)handle1_1;
}


/* Function: ret_complex_expr @ 0x1430 */
long long ret_complex_expr(int a1, int a2, int a3)
{
 bool v3; // cc
 long long result; // x0
 unsigned int v5; // w2

 v3 = a1 <= a2;
 LODWORD(result) = a3 + 10;
 v5 = 2 * a3;
 if ( v3 )
 return (unsigned int)result;
 else
 return v5;
}


/* Function: call_ret_complex_expr @ 0x1444 */
long long call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1450 */
long long ret_multi_branch(unsigned int a1)
{
 bool v1; // cf
 long long result; // x0

 v1 = a1 >= 3;
 LODWORD(result) = 10 * (a1 + 1);
 if ( v1 )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)result;
}


/* Function: call_ret_multi_branch @ 0x1470 */
long long call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1480 */
long long ret_void(int a1, unsigned int *a2)
{
 long long result; // x0

 result = (unsigned int)(3 * a1);
 *a2 = result;
 return result;
}


/* Function: call_ret_void @ 0x1490 */
long long call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x14A0 */
long long test_return_values(long long v4)
{
 puts(asc_1890);
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


/* Function: .term_proc @ 0x1570 */
void term_proc()
{
 ;
}


/* FAILED to decompile: strlen @ 0x13078 */

/* FAILED to decompile: __libc_start_main @ 0x13080 */

/* FAILED to decompile: __cxa_finalize @ 0x13088 */

/* FAILED to decompile: __printf_chk @ 0x13090 */

/* FAILED to decompile: __stack_chk_fail @ 0x13098 */

/* FAILED to decompile: abort @ 0x130A8 */

/* FAILED to decompile: puts @ 0x130B0 */

/* FAILED to decompile: __gmon_start__ @ 0x130C0 */

/* Total functions decompiled: 81, failed: 8 */
