/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/4/4_gcc_O1_no_g
 * Processor: arm
 */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* Global variables for opaque handles */
int handle1_1 = 1;
int handle2_0 = 0;

/* Stack guard for stack checking */
void *__stack_chk_guard = 0;

/* External data pointers */
unsigned long long off_13010 = 0;
unsigned long long off_13018 = 0;
unsigned long long off_13020 = 0;

/* String constants */
const char asc_1570[] = "Calling conventions test";
const char asc_1740[] = "Parameter passing test";
const char asc_1870[] = "Return values test";
const char aRetL101D[] = "RET-L1-01: %d\n";
const char aRetL102D[] = "RET-L1-02: %d\n";
const char aRetL103D[] = "RET-L1-03: %llu\n";
const char aRetL104D[] = "RET-L1-04: %d\n";
const char aRetL201D[] = "RET-L2-01: %d\n";
const char aRetL202D[] = "RET-L2-02: %d %p\n";
const char aRetL301D[] = "RET-L3-01: %d\n";
const char aRetL302D[] = "RET-L3-02: %d\n";
const char aRetL303D[] = "RET-L3-03: %d\n";
const char aCallL206[] = "CALL-L2-06: %d\n";
const char aCallL207[] = "CALL-L2-07: %d\n";
const char aCallL208[] = "CALL-L2-08: %d\n";
const char aCallL209[] = "CALL-L2-09: %d\n";
const char aCallL210[] = "CALL-L2-10: %d %p\n";
const char aCallL211[] = "CALL-L2-11: %d\n";

/* Weak function stub */
int call_weak_fn(void) { return 0; }

/* Jump out stub */
void JUMPOUT(unsigned long long addr) { }

/* LODWORD macro - get lower 32 bits of a 64-bit value */
#define LODWORD(x) ((unsigned int)((x) & 0xFFFFFFFF))

/* Function: .init_proc @ 0x738 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_750 @ 0x750 */
void sub_750()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: callback_func @ 0x914 */
long long callback_func(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: func_a @ 0x91C */
long long func_a(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x924 */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0x92C */
long long cdecl_func(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x934 */
long long call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x93C */
long long stdcall_func(int a1, int a2)
{
 return (unsigned int)(a1 * a2);
}


/* Function: call_stdcall @ 0x944 */
long long call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x94C */
long long fastcall_func(int a1, int a2, int a3)
{
 return (unsigned int)(a1 + a2 + a3);
}


/* Function: call_fastcall @ 0x958 */
long long call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x960 */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x968 */
long long arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5);
}


/* Function: call_arm_aapcs @ 0x97C */
long long call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x984 */
long long mips_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a1 + a2 + a3 + a4);
}


/* Function: call_mips @ 0x994 */
long long call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x99C */
long long amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5 + a6);
}


/* Function: call_amd64_sysv @ 0x9B4 */
long long call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x9BC */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5);
}


/* Function: call_ms_x64 @ 0x9D0 */
long long call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x9D8 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a1 + a2 + a3 + a4);
}


/* Function: call_vectorcall @ 0x9E8 */
long long call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x9F0 */
long long mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x9F8 */
long long varargs_func(
 int a1,
 double a2,
 double a3,
 double a4,
 double a5,
 double a6,
 double a7,
 double a8,
 double a9,
 ...)
{
 int v10; // w1
 long long result; // x0
 va_list va; // [xsp+18h] [xbp+18h] BYREF

 va_start(va, a9);
 v10 = 0;
 if ( a1 <= 0 )
 return 0;
 result = 0;
 do
 {
 result = (unsigned int)(result + va_arg(va, unsigned int));
 ++v10;
 }
 while ( a1 != v10 );
 va_end(va);
 return result;
}


/* Function: func_no_args @ 0xAE8 */
long long func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0xAF0 */
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8);
}


/* Function: func_mixed_args @ 0xB10 */
long long func_mixed_args(int a1, char *s, long long a3, double a4)
{
 int v7; // w0

 v7 = 0;
 if ( s )
 v7 = strlen(s);
 return (unsigned int)(int)((double)(v7 + a1) + a4 + (double)a3);
}


/* Function: func_struct_byval @ 0xB64 */
long long func_struct_byval(long long *a1)
{
 long long *v1; // x1
 long long *v2; // x3
 long long result; // x0
 long long v4; // t1

 v1 = a1;
 v2 = a1 + 16;
 result = 0;
 do
 {
 v4 = *v1++;
 result += v4;
 }
 while ( v1 != v2 );
 return result;
}


/* Function: func_struct_byptr @ 0xB84 */
long long func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return (unsigned int)(*a1 * a1[1]);
 else
 return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0xBA0 */
void *test_calling_conventions()
{
 double v0; // d0
 double v1; // d1
 double v2; // d2
 double v3; // d3
 double v4; // d4
 double v5; // d5
 double v6; // d6
 double v7; // d7
 unsigned int v8; // w0
 unsigned int v9; // w0
 long long i; // x0
 long long *v11; // x0
 long long v12; // x2
 long long v13; // t1
 unsigned long long v15[8]; // [xsp+18h] [xbp+18h] BYREF
 unsigned long long v16[8]; // [xsp+98h] [xbp+98h] BYREF
 long long v17; // [xsp+118h] [xbp+118h] BYREF

 puts(asc_1570);
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
 v8 = varargs_func(5, v0, v1, v2, v3, v4, v5, v6, v7, 1, 2, 3, 4);
 __printf_chk(1, aCallL206, v8);
 __printf_chk(1, aCallL207, 42);
 __printf_chk(1, aCallL208, 36);
 v9 = func_mixed_args(10, "test", 100, 3.14);
 __printf_chk(1, aCallL209, v9);
 for ( i = 1; i != 17; ++i )
 *((unsigned long long *)v15 + i - 1) = i;
 v11 = (long long *)v16;
 v16[0] = v15[0];
 v16[1] = v15[1];
 v16[2] = v15[2];
 v16[3] = v15[3];
 v16[4] = v15[4];
 v16[5] = v15[5];
 v16[6] = v15[6];
 v16[7] = v15[7];
 v12 = 0;
 do
 {
 v13 = *v11++;
 v12 += v13;
 }
 while ( &v17 != v11 );
 __printf_chk(1, aCallL210, v12, &v17);
 __printf_chk(1, aCallL211, 50);
 return &__stack_chk_guard;
}


/* Function: param_by_value_int @ 0xDC0 */
long long param_by_value_int(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0xDC8 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0xDD0 */
long long param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0xDE4 */
long long call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0xDEC */
long long param_array_decay()
{
 return 8;
}


/* Function: call_array_decay @ 0xDF4 */
long long call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0xDFC */
long long param_string(unsigned char *a1)
{
 return *a1 + (unsigned int)a1[1];
}


/* Function: call_string_param @ 0xE0C */
long long call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0xE14 */
long long param_ptr_array(long long a1, int a2)
{
 long long v3; // x2
 long long result; // x0

 if ( a2 <= 0 )
 return 0;
 v3 = 0;
 LODWORD(result) = 0;
 do
 result = (unsigned int)result + **(unsigned char **)(a1 + 8 * v3++);
 while ( a2 > (int)v3 );
 return result;
}


/* Function: call_ptr_array @ 0xE4C */
long long call_ptr_array()
{
 unsigned long long v1[3]; // [xsp+10h] [xbp+10h] BYREF

 v1[0] = off_13010;
 v1[1] = off_13018;
 v1[2] = off_13020;
 return param_ptr_array((long long)v1, 3);
}


/* Function: param_varargs @ 0xEB4 */
long long param_varargs(
 int a1,
 double a2,
 double a3,
 double a4,
 double a5,
 double a6,
 double a7,
 double a8,
 double a9,
 ...)
{
 int v10; // w1
 long long result; // x0
 va_list va; // [xsp+18h] [xbp+18h] BYREF

 va_start(va, a9);
 v10 = 0;
 if ( a1 <= 0 )
  return 0;
 result = 0;
 do
 {
 result = (unsigned int)(result + va_arg(va, unsigned int));
 ++v10;
 }
 while ( a1 != v10 );
 va_end(va);
 return result;
}


/* Function: call_varargs_param @ 0xFA4 */
long long call_varargs_param(
 double a1,
 double a2,
 double a3,
 double a4,
 double a5,
 double a6,
 double a7,
 double a8)
{
 return param_varargs(4, a1, a2, a3, a4, a5, a6, a7, a8, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0xFCC */
long long param_func_ptr(unsigned int ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0xFEC */
long long call_func_ptr_param()
{
 return param_func_ptr((unsigned int ( *)(unsigned long long))callback_func, 5u);
}


/* Function: param_double_ptr @ 0x100C */
long long param_double_ptr(unsigned int **a1, int a2)
{
 if ( !a1 )
  return 0xFFFFFFFFLL;
 if ( !*a1 )
  return 0xFFFFFFFFLL;
 **a1 = (unsigned int)a2;
 a1 = NULL;
 return 1;
}


/* Function: call_double_ptr @ 0x1038 */
long long call_double_ptr()
{
 unsigned int v1; // [xsp+1Ch] [xbp+1Ch] BYREF
 unsigned int *v2; // [xsp+20h] [xbp+20h] BYREF

 v1 = 10;
 v2 = &v1;
 param_double_ptr(&v2, 20);
 if ( v2 == &v1 )
 return v1;
 else
 return v1 + 1;
}


/* Function: param_complex_cast @ 0x10A8 */
long long param_complex_cast(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return 0xFFFFFFFFLL;
}


/* Function: call_complex_cast @ 0x10D4 */
long long call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x10E0 */
long long param_struct_byval(unsigned int *a1)
{
 return (unsigned int)(*a1 + a1[15]);
}


/* Function: call_struct_byval @ 0x10F0 */
long long call_struct_byval()
{
 unsigned int *v0; // x1
 int i; // w0
 unsigned int v3[16]; // [xsp+18h] [xbp+18h] BYREF

 v0 = v3;
 for ( i = 0; i != 16; ++i )
 *v0++ = i;
 return (unsigned int)(v3[15] + v3[0]);
}


/* Function: param_order_dep @ 0x1158 */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1160 */
long long call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x1168 */
double test_parameter_passing()
{
 int v0; // w0
 int v1; // w0
 double v2; // d0
 double v3; // d1
 double v4; // d2
 double v5; // d3
 double v6; // d4
 double v7; // d5
 double v8; // d6
 double v9; // d7
 int v10; // w0
 int v11; // w0
 int v12; // w0
 int v13; // w0
 int v14; // w0

 puts(asc_1740);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 v0 = call_by_value_ptr();
 __printf_chk(1, "PARAM-L1-02: %d\n", v0);
 __printf_chk(1, "PARAM-L2-01: %d\n", 8);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 v1 = call_ptr_array();
 v2 = __printf_chk(1, "PARAM-L2-03: %d\n", v1);
 v10 = call_varargs_param(v2, v3, v4, v5, v6, v7, v8, v9);
 __printf_chk(1, "PARAM-L2-04: %d\n", v10);
 v11 = call_func_ptr_param();
 __printf_chk(1, "PARAM-L3-01: %d\n", v11);
 v12 = call_double_ptr();
 __printf_chk(1, "PARAM-L3-02: %d\n", v12);
 v13 = call_complex_cast();
 __printf_chk(1, "PARAM-L3-03: %d\n", v13);
 v14 = call_struct_byval();
 __printf_chk(1, "PARAM-L3-04: %d\n", v14);
 return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x127C */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x1284 */
long long call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x128C */
long long ret_pointer(long long a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1294 */
long long call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x129C */
unsigned long long ret_small_struct(unsigned int a1, long long a2)
{
 return a1 | (unsigned long long)(a2 << 32);
}


/* Function: call_ret_small_struct @ 0x12A8 */
long long call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x12B0 */
void *ret_large_struct(int a1, unsigned long long *a2)
{
 long long v2; // x1
 int v3; // w0
 __int128 v4; // q1
 __int128 v5; // q1
 unsigned long long v7[4]; // [xsp+18h] [xbp+18h] BYREF

 v2 = 1;
 v3 = a1 - 1;
 do
 {
 *((unsigned int *)v7 + v2 - 1) = v3 + v2;
 ++v2;
 }
 while ( v2 != 17 );
 v4 = v7[1];
 *a2 = v7[0];
 a2[1] = v4;
 v5 = v7[3];
 a2[2] = v7[2];
 a2[3] = v5;
 return &__stack_chk_guard;
}


/* Function: call_ret_large_struct @ 0x132C */
long long call_ret_large_struct()
{
 unsigned long long v1[3]; // [xsp+18h] [xbp+18h] BYREF
 int v2; // [xsp+54h] [xbp+54h]

 ret_large_struct(100, v1);
 return (unsigned int)(LODWORD(v1[0]) + v2);
}


/* Function: ret_func_ptr @ 0x1388 */
long long ( * ret_func_ptr(int a1))(int a1)
{
 if ( a1 )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0x13A4 */
long long call_ret_func_ptr()
{
 return func_b(5);
}


/* Function: ret_opaque_handle @ 0x13BC */
int * ret_opaque_handle(int a1)
{
 if ( a1 )
 return (int *)&handle2_0;
 else
 return &handle1_1;
}


/* Function: call_ret_opaque @ 0x13E0 */
long long call_ret_opaque()
{
 return (unsigned int)handle1_1;
}


/* Function: ret_complex_expr @ 0x13EC */
long long ret_complex_expr(int a1, int a2, int a3)
{
 unsigned int v3; // w3
 unsigned int v4; // w2

 v3 = 2 * a3;
 v4 = a3 + 10;
 if ( a1 > a2 )
 return v3;
 else
 return v4;
}


/* Function: call_ret_complex_expr @ 0x1400 */
long long call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1408 */
long long ret_multi_branch(int a1)
{
 long long result; // x0

 result = 20;
 if ( a1 != 1 )
 {
 result = 30;
 if ( a1 != 2 )
 {
 if ( a1 )
 return 0xFFFFFFFFLL;
 else
 return 10;
 }
 }
 return result;
}


/* Function: call_ret_multi_branch @ 0x1434 */
long long call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x143C */
long long ret_void(int a1, unsigned int *a2)
{
 long long result; // x0

 result = (unsigned int)(3 * a1);
 *a2 = result;
 return result;
}


/* Function: call_ret_void @ 0x1448 */
long long call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1450 */
double test_return_values()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 double v4; // d0
 double v5; // d0
 double v6; // d0
 double v7; // d0

 puts(asc_1870);
 __printf_chk(1, aRetL101D, 42);
 v0 = call_ret_pointer();
 __printf_chk(1, aRetL102D, v0);
 v1 = call_ret_small_struct();
 __printf_chk(1, aRetL103D, v1);
 v2 = call_ret_large_struct();
 __printf_chk(1, aRetL104D, v2);
 v3 = call_ret_func_ptr();
 v4 = __printf_chk(1, aRetL201D, v3);
 v5 = __printf_chk(1, aRetL202D, (unsigned int)handle1_1, v4);
 v6 = __printf_chk(1, aRetL301D, 40, v5);
 v7 = __printf_chk(1, aRetL302D, 60, v6);
 return __printf_chk(1, aRetL303D, 21, v7);
}


/* Function: main @ 0x1534 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x1554 */
void term_proc()
{
 ;
}


/* FAILED to decompile: strlen @ 0x13090 */

/* FAILED to decompile: __libc_start_main @ 0x13098 */

/* FAILED to decompile: __cxa_finalize @ 0x130A0 */

/* FAILED to decompile: __printf_chk @ 0x130A8 */

/* FAILED to decompile: __stack_chk_fail @ 0x130B0 */

/* FAILED to decompile: abort @ 0x130C0 */

/* FAILED to decompile: puts @ 0x130C8 */

/* FAILED to decompile: __gmon_start__ @ 0x130D8 */

/* Total functions decompiled: 80, failed: 8 */
