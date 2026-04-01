/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/4/4_clang_O1_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LODWORD(x) ((unsigned int)(x))
#define JUMPOUT(x) ((void)0)

static long long call_weak_fn(void) { return 0; }

static int ret_opaque_handle_handle1;
static int ret_opaque_handle_handle2;

/* String constants */
static const char asc_14BE[] = "Testing Calling Conventions";
static const char aCallL206[] = "CALL-L2-01: %d\n";
static const char aCallL207[] = "CALL-L2-02: %d\n";
static const char aCallL208[] = "CALL-L2-03: %d\n";
static const char aCallL209[] = "CALL-L2-04: %d\n";
static const char aCallL210[] = "CALL-L2-05: %d\n";
static const char aCallL211[] = "CALL-L2-06: %d\n";
static const char asc_14DF[] = "Testing Parameter Passing";
static const char aRetL101D[] = "RET-L1-01: %d\n";
static const char aRetL102D[] = "RET-L1-02: %d\n";
static const char aRetL103D[] = "RET-L1-03: %d\n";
static const char aRetL104D[] = "RET-L1-04: %d\n";
static const char aRetL201D[] = "RET-L2-01: %d\n";
static const char aRetL202D[] = "RET-L2-02: %d\n";
static const char aRetL301D[] = "RET-L3-01: %d\n";
static const char aRetL302D[] = "RET-L3-02: %d\n";
static const char aRetL303D[] = "RET-L3-03: %d\n";
static const char asc_1500[] = "Testing Return Values";

/* Function: .init_proc @ 0x628 */
long long init_proc()
{
 return 0;
}


/* Function: sub_640 @ 0x640 */
void sub_640()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x814 */
long long cdecl_func(int a1, int a2)
{
 return (unsigned int)(a2 + a1);
}


/* Function: call_cdecl @ 0x81C */
long long call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x824 */
long long stdcall_func(int a1, int a2)
{
 return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x82C */
long long call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x834 */
long long fastcall_func(int a1, int a2, int a3)
{
 return (unsigned int)(a2 + a1 + a3);
}


/* Function: call_fastcall @ 0x840 */
long long call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x848 */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x850 */
long long arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a2 + a1 + a3 + a4 + a5);
}


/* Function: call_arm_aapcs @ 0x864 */
long long call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x86C */
long long mips_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a2 + a1 + a3 + a4);
}


/* Function: call_mips @ 0x87C */
long long call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x884 */
long long amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a2 + a1 + a3 + a4 + a5 + a6);
}


/* Function: call_amd64_sysv @ 0x89C */
long long call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x8A4 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a2 + a1 + a3 + a4 + a5);
}


/* Function: call_ms_x64 @ 0x8B8 */
long long call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x8C0 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a2 + a1 + a3 + a4);
}


/* Function: call_vectorcall @ 0x8D0 */
long long call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x8D8 */
long long mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x8E0 */
long long varargs_func(
 int a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 long long a7,
 long long a8)
{
 unsigned int v8; // w8
 unsigned int *v9; // x10
 long long v10; // x10
 unsigned long long v12[8]; // [xsp+80h] [xbp-60h] BYREF
 unsigned int *v13; // [xsp+C0h] [xbp-20h] BYREF
 unsigned int **v14; // [xsp+C8h] [xbp-18h]
 unsigned long long *v15; // [xsp+D0h] [xbp-10h]
 unsigned long long v16; // [xsp+D8h] [xbp-8h]

 v15 = v12;
 v16 = 0xFFFFFF80FFFFFFC8LL;
 v8 = 0;
 v12[3] = a4;
 v12[4] = a5;
 v12[1] = a2;
 v12[2] = a3;
 v12[5] = a6;
 v12[6] = a7;
 v14 = &v13;
 v12[7] = a8;
 if ( a1 >= 1 )
 {
 do
 {
 unsigned long long v17; // helper

 v10 = (int)v16;
 v17 = v16 + 8;
 if ( (v16 & 0x80000000) != 0 && (int)v10 + 8 <= 0 )
 {
 v9 = (unsigned int *)((char *)v14 + v10);
 }
 else
 {
 v9 = v13;
 v13 += 2;
 }
 --a1;
 v8 += *v9;
 }
 while ( a1 );
 }
 return v8;
}


/* Function: func_no_args @ 0x984 */
long long func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x98C */
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return (unsigned int)(a2 + a1 + a3 + a4 + a5 + a6 + a7 + a8);
}


/* Function: func_mixed_args @ 0x9AC */
long long func_mixed_args(int a1, char *s, long long a3, double a4)
{
 int v7; // w0

 if ( s )
 v7 = strlen(s);
 else
 v7 = 0;
 return (unsigned int)(int)((double)(v7 + a1) + a4 + (double)a3);
}


/* Function: func_struct_byval @ 0xA04 */
long long func_struct_byval(long long a1)
{
 long long v1; // x9
 unsigned int v2; // w8
 long long v3; // x10

 v1 = 0;
 v2 = 0;
 do
 {
 v3 = *(unsigned long long *)(a1 + v1);
 v1 += 8;
 v2 += v3;
 }
 while ( v1 != 128 );
 return v2;
}


/* Function: func_struct_byptr @ 0xA28 */
long long func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return (unsigned int)(a1[1] * *a1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0xA40 */
long long test_calling_conventions()
{
 long long v0; // x6
 long long v1; // x7
 unsigned int v2; // w0
 long long v3; // x8
 bool v4; // zf
 long long v5; // x8
 long long v6; // x1
 long long v7; // x10
 unsigned long long v9[8]; // [xsp+0h] [xbp-100h]
 unsigned long long v10[8]; // [xsp+80h] [xbp-80h]

 puts(asc_14BE);
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
 v2 = varargs_func(5, 1, 2, 3, 4, 5, v0, v1);
 printf(aCallL206, v2);
 printf(aCallL207, 42);
 printf(aCallL208, 36);
 printf(aCallL209, 117);
 v3 = 0;
 do
 {
 v4 = v3 == 15;
 *((unsigned long long *)v10 + v3) = v3 + 1;
 ++v3;
 }
 while ( !v4 );
 v5 = 0;
 v6 = 0;
 v9[4] = v10[4];
 v9[5] = v10[5];
 v9[6] = v10[6];
 v9[7] = v10[7];
 v9[0] = v10[0];
 v9[1] = v10[1];
 v9[2] = v10[2];
 v9[3] = v10[3];
 do
 {
 v7 = *(unsigned long long *)((char *)v9 + v5);
 v5 += 8;
 v6 += v7;
 }
 while ( v5 != 128 );
 printf(aCallL210, v6);
 return printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0xBE0 */
long long param_by_value_int(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0xBE8 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0xBF0 */
long long param_by_value_ptr(unsigned int *a1)
{
 long long result; // x0

 result = 1;
 *a1 *= 2;
 return result;
}


/* Function: call_by_value_ptr @ 0xC08 */
long long call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0xC10 */
long long param_array_decay()
{
 return 8;
}


/* Function: call_array_decay @ 0xC18 */
long long call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0xC20 */
long long param_string(unsigned char *a1)
{
 return a1[1] + (unsigned int)*a1;
}


/* Function: call_string_param @ 0xC30 */
long long call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0xC38 */
unsigned char ** param_ptr_array(unsigned char **result, int a2)
{
 unsigned char **v2; // x8
 long long v3; // x9
 unsigned char *v4; // t1
 unsigned long long sum;

 if ( a2 < 1 )
 return 0;
 v2 = result;
 sum = 0;
 v3 = (unsigned int)a2;
 do
 {
 v4 = *v2++;
 --v3;
 sum += *v4;
 }
 while ( v3 );
 return (unsigned char **)sum;
}


/* Function: call_ptr_array @ 0xC6C */
long long call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0xC74 */
long long param_varargs(
 int a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 long long a7,
 long long a8)
{
 unsigned int v8; // w8
 unsigned int *v9; // x10
 long long v10; // x10
 unsigned long long v12[8]; // [xsp+80h] [xbp-60h] BYREF
 unsigned int *v13; // [xsp+C0h] [xbp-20h] BYREF
 unsigned int **v14; // [xsp+C8h] [xbp-18h]
 unsigned long long *v15; // [xsp+D0h] [xbp-10h]
 unsigned long long v16; // [xsp+D8h] [xbp-8h]
 unsigned long long v17; // helper

 v15 = v12;
 v16 = 0xFFFFFF80FFFFFFC8LL;
 v8 = 0;
 v12[3] = a4;
 v12[4] = a5;
 v12[1] = a2;
 v12[2] = a3;
 v12[5] = a6;
 v12[6] = a7;
 v14 = (unsigned int **)&v13;
 v12[7] = a8;
 if ( a1 >= 1 )
 {
 do
 {
 v10 = (long long)v16;
 v17 = v16 + 8;
 if ( (v16 & 0x80000000) != 0 && (int)v10 + 8 <= 0 )
 {
 v9 = (unsigned int *)((char *)v14 + v10);
 }
 else
 {
 v9 = v13;
 v13 += 2;
 }
 --a1;
 v8 += *v9;
 }
 while ( a1 );
 }
 return v8;
}


/* Function: call_varargs_param @ 0xD18 */
long long call_varargs_param(
 long long a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 long long a7,
 long long a8)
{
 return param_varargs(4, 10, 20, 30, 40, a6, a7, a8);
}


/* Function: param_func_ptr @ 0xD40 */
long long param_func_ptr(unsigned int ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0xD60 */
long long call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0xD68 */
long long param_double_ptr(unsigned int **a1, int a2)
{
 unsigned int *v3; // x9
 long long result; // x0

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v3 = *a1;
 if ( !*a1 )
 return 0xFFFFFFFFLL;
 result = 1;
 *v3 = a2;
 *a1 = 0;
 return result;
}


/* Function: call_double_ptr @ 0xD90 */
long long call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0xD98 */
long long param_complex_cast(unsigned int *a1, int a2)
{
 if ( a2 == 1 )
 return a1[1] + *a1;
 if ( a2 )
 return 0xFFFFFFFFLL;
 return *a1;
}


/* Function: call_complex_cast @ 0xDC0 */
long long call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0xDCC */
long long param_struct_byval(unsigned int *a1)
{
 return (unsigned int)(a1[15] + *a1);
}


/* Function: call_struct_byval @ 0xDDC */
long long call_struct_byval()
{
 long long i; // x8
 unsigned int v2[16]; // [xsp+0h] [xbp-40h]

 for ( i = 0; i != 16; ++i )
 v2[i] = i;
 return (unsigned int)(v2[15] + v2[0]);
}


/* Function: param_order_dep @ 0xE0C */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a2 + a1);
}


/* Function: call_order_dep @ 0xE14 */
long long call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0xE1C */
long long test_parameter_passing()
{
 long long v0; // x5
 long long v1; // x6
 long long v2; // x7
 int v3; // w0
 long long i; // x8
 unsigned int v6[16]; // [xsp+0h] [xbp-40h]

 puts(asc_14DF);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 8);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 v3 = param_varargs(4, 10, 20, 30, 40, v0, v1, v2);
 printf("PARAM-L2-04: %d\n", v3);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 for ( i = 0; i != 16; ++i )
 v6[i] = i;
 printf("PARAM-L3-04: %d\n", v6[15] + v6[0]);
 return printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0xF2C */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0xF34 */
long long call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0xF3C */
long long ret_pointer(long long a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0xF44 */
long long call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0xF4C */
unsigned long long ret_small_struct(unsigned int a1, unsigned int a2)
{
 return a1 | ((unsigned long long)a2 << 32);
}


/* Function: call_ret_small_struct @ 0xF58 */
long long call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0xF60 */
long long ret_large_struct(long long result, long long a2)
{
 long long i; // x9

 for ( i = 0; i != 16; ++i )
 *(unsigned int *)(a2 + 4 * i) = result + i;
 return result;
}


/* Function: call_ret_large_struct @ 0xF80 */
long long call_ret_large_struct()
{
 long long i; // x8
 unsigned int v2[16]; // [xsp+0h] [xbp-40h]

 for ( i = 0; i != 16; ++i )
 v2[i] = i + 100;
 return (unsigned int)(v2[15] + v2[0]);
}


/* Function: func_a @ 0xFB4 */
long long func_a(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0xFBC */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: ret_func_ptr @ 0xFC4 */
long long ( * ret_func_ptr(int a1))(int)
{
 if ( a1 )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0xFE0 */
long long call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0xFE8 */
int * ret_opaque_handle(int a1)
{
 if ( a1 )
 return (int *)&ret_opaque_handle_handle2;
 else
 return &ret_opaque_handle_handle1;
}


/* Function: call_ret_opaque @ 0x1004 */
long long call_ret_opaque()
{
 return (unsigned int)ret_opaque_handle_handle1;
}


/* Function: ret_complex_expr @ 0x1010 */
long long ret_complex_expr(int a1, int a2, int a3)
{
 if ( a1 <= a2 )
 return (unsigned int)(a3 + 10);
 else
 return (unsigned int)(2 * a3);
}


/* Function: call_ret_complex_expr @ 0x1024 */
long long call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x102C */
long long ret_multi_branch(unsigned int a1)
{
 if ( a1 >= 3 )
 return 0xFFFFFFFFLL;
 else
 return 10 * a1 + 10;
}


/* Function: call_ret_multi_branch @ 0x1044 */
long long call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x104C */
long long ret_void(long long result, unsigned int *a2)
{
 *a2 = 3 * result;
 return result;
}


/* Function: call_ret_void @ 0x1058 */
long long call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1060 */
long long test_return_values()
{
 long long i; // x8
 unsigned int v2[16]; // [xsp+0h] [xbp-40h]

 puts(asc_1500);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 for ( i = 0; i != 16; ++i )
 v2[i] = i + 100;
 printf(aRetL104D, (unsigned int)(v2[15] + v2[0]));
 printf(aRetL201D, 10);
 printf(aRetL202D, (unsigned int)ret_opaque_handle_handle1);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 return printf(aRetL303D, 21);
}


/* Function: main @ 0x113C */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x115C */
void term_proc()
{
 ;
}


/* FAILED to decompile: strlen @ 0x130B0 */

/* FAILED to decompile: __libc_start_main @ 0x130B8 */

/* FAILED to decompile: __cxa_finalize @ 0x130C0 */

/* FAILED to decompile: abort @ 0x130C8 */

/* FAILED to decompile: puts @ 0x130D0 */

/* FAILED to decompile: printf @ 0x130D8 */

/* FAILED to decompile: __gmon_start__ @ 0x130E8 */

/* Total functions decompiled: 79, failed: 7 */
