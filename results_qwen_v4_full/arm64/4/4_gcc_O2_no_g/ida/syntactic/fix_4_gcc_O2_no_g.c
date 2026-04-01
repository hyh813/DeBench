/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/4/4_gcc_O2_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <string.h>

/* Global variables */
int handle1_1 = 42;
int handle2_0 = 43;
void *_stack_chk_guard = 0;

/* String constants */
const char *asc_15B0 = "Testing calling conventions";
const char *aCallL206 = "CALL-L2-06: %d\n";
const char *aCallL207 = "CALL-L2-07: %d\n";
const char *aCallL208 = "CALL-L2-08: %d\n";
const char *aCallL209 = "CALL-L2-09: %d\n";
const char *aCallL210 = "CALL-L2-10: %lld\n";
const char *aCallL211 = "CALL-L2-11: %d\n";
const char *asc_1778 = "Testing parameter passing";
const char *asc_18A8 = "Testing return values";
const char *aRetL101D = "RET-L1-01: %d\n";
const char *aRetL102D = "RET-L1-02: %d\n";
const char *aRetL103D = "RET-L1-03: %d\n";
const char *aRetL104D = "RET-L1-04: %d\n";
const char *aRetL201D = "RET-L2-01: %d\n";
const char *aRetL202D = "RET-L2-02: %d\n";
const char *aRetL301D = "RET-L3-01: %d\n";
const char *aRetL302D = "RET-L3-02: %d\n";
const char *aRetL303D = "RET-L3-03: %d\n";

/* Macros */
#define LODWORD(x) ((unsigned int)(x))

/* CRT stub functions */
long long call_weak_fn() { return 0; }
void JUMPOUT(int x) { }

/* Forward declarations */
long long test_calling_conventions();
long long test_parameter_passing();
long long test_return_values();

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

 v3 = test_calling_conventions();
 v4 = test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: func_a @ 0x920 */
long long func_a(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x930 */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0x940 */
long long cdecl_func(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x950 */
long long call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x960 */
long long stdcall_func(int a1, int a2)
{
 return (unsigned int)(a1 * a2);
}


/* Function: call_stdcall @ 0x970 */
long long call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x980 */
long long fastcall_func(int a1, int a2, int a3)
{
 return (unsigned int)(a1 + a2 + a3);
}


/* Function: call_fastcall @ 0x990 */
long long call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x9A0 */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x9B0 */
long long arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5);
}


/* Function: call_arm_aapcs @ 0x9C4 */
long long call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x9D0 */
long long mips_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a1 + a2 + a3 + a4);
}


/* Function: call_mips @ 0x9E0 */
long long call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x9F0 */
long long amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5 + a6);
}


/* Function: call_amd64_sysv @ 0xA10 */
long long call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0xA20 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5);
}


/* Function: call_ms_x64 @ 0xA34 */
long long call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0xA40 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a1 + a2 + a3 + a4);
}


/* Function: call_vectorcall @ 0xA50 */
long long call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0xA60 */
long long mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0xA70 */
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
 long long result; // x0

 result = 0;
 if ( a1 >= 1 ) result += a2;
 if ( a1 >= 2 ) result += a3;
 if ( a1 >= 3 ) result += a4;
 if ( a1 >= 4 ) result += a5;
 if ( a1 >= 5 ) result += a6;
 return (unsigned int)result;
}


/* Function: func_no_args @ 0xB40 */
long long func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0xB50 */
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8);
}


/* Function: func_mixed_args @ 0xB70 */
long long func_mixed_args(int a1, char *s, long long a3, double a4)
{
 int v4; // w19

 v4 = a1;
 if ( s )
 v4 = a1 + strlen(s);
 return (unsigned int)(int)((double)v4 + a4 + (double)a3);
}


/* Function: func_struct_byval @ 0xBC0 */
long long func_struct_byval(long long *a1)
{
 long long *v1; // x1
 unsigned int v2; // w2
 long long v3; // t1

 v1 = a1;
 v2 = 0;
 do
 {
 v3 = *v1++;
 v2 += v3;
 }
 while ( v1 != a1 + 16 );
 return v2;
}


/* Function: func_struct_byptr @ 0xBF0 */
long long func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return (unsigned int)(*a1 * a1[1]);
 else
 return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0xC10 */
long long test_calling_conventions()
{
 long long v0; // x6
 long long v1; // x7
 unsigned int v2; // w0
 long long i; // x0
 long long *v4; // x0
 long long v5; // x2
 long long v6; // t1
 char v8; // [xsp+0h] [xbp+0h]
 unsigned long long v9[8]; // [xsp+18h] [xbp+18h] BYREF
 unsigned long long v10[8]; // [xsp+98h] [xbp+98h] BYREF
 long long v11; // [xsp+118h] [xbp+118h] BYREF

 puts(asc_15B0);
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
 v2 = varargs_func(5, 1, 2, 3, 4, 5, v0, v1, v8);
 __printf_chk(1, aCallL206, v2);
 __printf_chk(1, aCallL207, 42);
 __printf_chk(1, aCallL208, 36);
 __printf_chk(1, aCallL209, 117);
 for ( i = 1; i != 17; ++i )
 v9[i - 1] = i;
v10[0] = v9[0];
v10[1] = v9[1];
v4 = v10;
v5 = 0;
v10[2] = v9[2];
v10[3] = v9[3];
v10[4] = v9[4];
v10[5] = v9[5];
v10[6] = v9[6];
v10[7] = v9[7];
 do
 {
 v6 = *v4++;
 v5 += v6;
 }
 while ( &v11 != v4 );
 __printf_chk(1, aCallL210, v5, v9, &v11);
 return __printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0xE20 */
long long param_by_value_int(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0xE30 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0xE40 */
long long param_by_value_ptr(unsigned int *a1)
{
 long long result; // x0

 result = 1;
 *a1 *= 2;
 return result;
}


/* Function: call_by_value_ptr @ 0xE60 */
long long call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0xE70 */
long long param_array_decay()
{
 return 8;
}


/* Function: call_array_decay @ 0xE80 */
long long call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0xE90 */
long long param_string(unsigned char *a1)
{
 return *a1 + (unsigned int)a1[1];
}


/* Function: call_string_param @ 0xEA0 */
long long call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0xEB0 */
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


/* Function: call_ptr_array @ 0xEF0 */
long long call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0xF00 */
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
 long long result; // x0

 result = 0;
 if ( a1 >= 1 ) result += a2;
 if ( a1 >= 2 ) result += a3;
 if ( a1 >= 3 ) result += a4;
 if ( a1 >= 4 ) result += a5;
 return (unsigned int)result;
}


/* Function: call_varargs_param @ 0xFD0 */
long long call_varargs_param(
 long long a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 long long a7,
 long long a8,
 char a9)
{
 (void)a1; (void)a2; (void)a3; (void)a4; (void)a5;
 (void)a6; (void)a7; (void)a8; (void)a9;
 return param_varargs(4, 10, 20, 30, 40, 0, 0, 0, 0);
}


/* Function: param_func_ptr @ 0xFF0 */
long long param_func_ptr(unsigned int ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x1010 */
long long call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1020 */
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


/* Function: call_double_ptr @ 0x1050 */
long long call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1060 */
long long param_complex_cast(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return 0xFFFFFFFFLL;
}


/* Function: call_complex_cast @ 0x1090 */
long long call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x10A0 */
long long param_struct_byval(unsigned int *a1)
{
 return (unsigned int)(*a1 + a1[15]);
}


/* Function: call_struct_byval @ 0x10B0 */
long long call_struct_byval()
{
 int v0; // w0
 unsigned int *v1; // x1
 unsigned int v3[16]; // [xsp+18h] [xbp+18h] BYREF

 v0 = 0;
 v1 = v3;
 do
 *v1++ = v0++;
 while ( v0 != 16 );
 return (unsigned int)(v3[0] + v3[15]);
}


/* Function: param_order_dep @ 0x1120 */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1130 */
long long call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x1140 */
long long test_parameter_passing()
{
 long long v0; // x5
 long long v1; // x6
 long long v2; // x7
 int v3; // w0
 unsigned int *v4; // x1
 int i; // w0
 char v7; // [xsp+0h] [xbp+0h]
 unsigned int v8[16]; // [xsp+18h] [xbp+18h] BYREF

 puts(asc_1778);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 8);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 __printf_chk(1, "PARAM-L2-03: %d\n", 300);
 v3 = param_varargs(4, 10, 20, 30, 40, v0, v1, v2, v7);
 __printf_chk(1, "PARAM-L2-04: %d\n", v3);
 __printf_chk(1, "PARAM-L3-01: %d\n", 20);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 v4 = v8;
 for ( i = 0; i != 16; ++i )
 *v4++ = i;
 __printf_chk(1, "PARAM-L3-04: %d\n", *(v8 + 0) + *(v8 + 15));
 return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x12A4 */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x12B0 */
long long call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x12C0 */
long long ret_pointer(long long a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x12D0 */
long long call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x12E0 */
unsigned long long ret_small_struct(unsigned int a1, long long a2)
{
 return a1 | (unsigned long long)(a2 << 32);
}


/* Function: call_ret_small_struct @ 0x12F0 */
long long call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1300 */
unsigned long long *ret_large_struct(int a1, unsigned long long *a2)
{
 int v2; // w0
 long long i; // x1
 int v5; // w3
 unsigned long long v10[16]; // [xsp+18h] [xbp+18h] BYREF

 v2 = a1 - 1;
 for ( i = 1; i != 17; ++i )
 {
 v5 = v2 + i;
 v10[i - 1] = v5;
 }
 a2[0] = v10[0];
 a2[1] = v10[1];
 a2[2] = v10[2];
 a2[3] = v10[3];
 return a2;
}


/* Function: call_ret_large_struct @ 0x1380 */
long long call_ret_large_struct()
{
 long long i; // x0
 unsigned int *v1; // x1
 int v2; // w2
 unsigned int v4[16]; // [xsp+18h] [xbp+18h] BYREF

 for ( i = 1; i != 17; ++i )
 {
 v2 = i + 99;
 v4[i - 1] = v2;
 }
 return (unsigned int)(v4[15] + v4[0]);
}


/* Function: ret_func_ptr @ 0x13F4 */
long long (*ret_func_ptr(int a1))(int)
{
 bool v1; // zf
 long long (*result)(int); // x0

 v1 = a1 == 0;
 if ( v1 )
 return &func_a;
 return &func_b;
}


/* Function: call_ret_func_ptr @ 0x1410 */
long long call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1420 */
int *ret_opaque_handle(int a1)
{
 bool v1; // zf

 v1 = a1 == 0;
 if ( v1 )
 return &handle1_1;
 return &handle2_0;
}


/* Function: call_ret_opaque @ 0x1440 */
long long call_ret_opaque()
{
 return (unsigned int)handle1_1;
}


/* Function: ret_complex_expr @ 0x1450 */
long long ret_complex_expr(int a1, int a2, int a3)
{
 bool v3; // cc
 long long result; // x0
 unsigned int v5; // w2

 v3 = a1 <= a2;
 result = a3 + 10;
 v5 = 2 * a3;
 if ( v3 )
 return (unsigned int)result;
 else
 return v5;
}


/* Function: call_ret_complex_expr @ 0x1464 */
long long call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1470 */
long long ret_multi_branch(unsigned int a1)
{
 bool v1; // cf
 long long result; // x0

 v1 = a1 >= 3;
 result = 10 * (a1 + 1);
 if ( v1 )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)result;
}


/* Function: call_ret_multi_branch @ 0x1490 */
long long call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x14A0 */
long long ret_void(int a1, unsigned int *a2)
{
 long long result; // x0

 result = (unsigned int)(3 * a1);
 *a2 = result;
 return result;
}


/* Function: call_ret_void @ 0x14B0 */
long long call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x14C0 */
long long test_return_values()
{
 unsigned int v0; // w0

 puts(asc_18A8);
 __printf_chk(1, aRetL101D, 42);
 __printf_chk(1, aRetL102D, 20);
 __printf_chk(1, aRetL103D, 7);
 v0 = call_ret_large_struct();
 __printf_chk(1, aRetL104D, v0);
 __printf_chk(1, aRetL201D, 10);
 __printf_chk(1, aRetL202D, (unsigned int)handle1_1);
 __printf_chk(1, aRetL301D, 40);
 __printf_chk(1, aRetL302D, 60);
 return __printf_chk(1, aRetL303D, 21);
}


/* Function: .term_proc @ 0x1594 */
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

/* Total functions decompiled: 79, failed: 8 */
