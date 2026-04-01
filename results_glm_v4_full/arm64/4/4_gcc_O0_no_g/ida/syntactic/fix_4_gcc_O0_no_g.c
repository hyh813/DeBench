/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/4/4_gcc_O0_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <string.h>

/* CRT stub functions */
long long call_weak_fn() { return 0; }
void JUMPOUT(long long addr) { (void)addr; }

/* Global variables */
unsigned long long _stack_chk_guard = 0;
unsigned int handle1_1 = 0;
unsigned int handle2_0 = 0;

/* String constants */
const char *asc_1FB0 = "Testing Calling Conventions";
const char *aCallL206 = "CALL-L2-06: %d\n";
const char *aCallL207 = "CALL-L3-01: %d\n";
const char *aCallL208 = "CALL-L3-02: %d\n";
const char *aCallL209 = "CALL-L3-03: %d\n";
const char *aCallL210 = "CALL-L3-04: %d\n";
const char *aCallL211 = "CALL-L3-05: %d\n";
const char *asc_21A0 = "Testing Parameter Passing";
const char *asc_22E0 = "Testing Return Values";
const char *aRetL101D = "RET-L1-01: %d\n";
const char *aRetL102D = "RET-L1-02: %d\n";
const char *aRetL103D = "RET-L1-03: %d\n";
const char *aRetL104D = "RET-L1-04: %d\n";
const char *aRetL201D = "RET-L2-01: %d\n";
const char *aRetL202D = "RET-L2-02: %d\n";
const char *aRetL301D = "RET-L3-01: %d\n";
const char *aRetL302D = "RET-L3-02: %d\n";
const char *aRetL303D = "RET-L3-03: %d\n";

/* Pointer constants */
const char *off_14010 = "A";
const char *off_14018 = "B";
const char *off_14020 = "C";

/* Macros */
#define __PAIR64__(low, high) (((unsigned long long)(high) << 32) | (unsigned int)(low))
#define HIDWORD(x) (((unsigned long long)(x) >> 32) & 0xFFFFFFFF)
#define LODWORD(x) ((unsigned int)(x))

/* Function: .init_proc @ 0x730 */
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



/* Function: cdecl_func @ 0x914 */
long long cdecl_func(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x934 */
long long call_cdecl()
{
 return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x950 */
long long stdcall_func(int a1, int a2)
{
 return (unsigned int)(a1 * a2);
}


/* Function: call_stdcall @ 0x970 */
long long call_stdcall()
{
 return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x98C */
long long fastcall_func(int a1, int a2, int a3)
{
 return (unsigned int)(a1 + a2 + a3);
}


/* Function: call_fastcall @ 0x9B8 */
long long call_fastcall()
{
 return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x9D8 */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x9E0 */
long long arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5);
}


/* Function: call_arm_aapcs @ 0xA24 */
long long call_arm_aapcs()
{
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0xA4C */
long long mips_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a1 + a2 + a3 + a4);
}


/* Function: call_mips @ 0xA84 */
long long call_mips()
{
 return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0xAA8 */
long long amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5 + a6);
}


/* Function: call_amd64_sysv @ 0xAF8 */
long long call_amd64_sysv()
{
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0xB24 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5);
}


/* Function: call_ms_x64 @ 0xB68 */
long long call_ms_x64()
{
 return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0xB90 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a1 + a2 + a3 + a4);
}


/* Function: call_vectorcall @ 0xBC8 */
long long call_vectorcall()
{
 return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0xBEC */
long long mixed_conventions_test()
{
 int v1; // [xsp+1Ch] [xbp+1Ch]
 int v2; // [xsp+1Ch] [xbp+1Ch]

 v1 = cdecl_func(1, 2);
 v2 = v1 + stdcall_func(3, 4);
 return v2 + (unsigned int)fastcall_func(5, 6, 7);
}


/* Function: varargs_func @ 0xC5C */
long long varargs_func(
 int a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 long long a7,
 long long a8,
 long double a9,
 long double a10,
 long double a11,
 long double a12,
 long double a13,
 long double a14,
 long double a15,
 long double a16,
 char a17)
{
 int v17; // w1
 char *v18; // x0
 unsigned int v21; // [xsp+20h] [xbp+20h]
 int i; // [xsp+24h] [xbp+24h]
 char *v23; // [xsp+28h] [xbp+28h]
 int v24; // [xsp+40h] [xbp+40h]

 v21 = 0;
 v23 = &a17;
 v24 = -56;
 for ( i = 0; i < a1; ++i )
 {
 v17 = v24;
 v18 = v23;
 if ( v24 < 0 )
 {
 v24 += 8;
 if ( v17 + 8 <= 0 )
 v18 = &a17 + v17;
 else
 v23 = (char *)((unsigned long long)(v23 + 11) & 0xFFFFFFFFFFFFFFF8LL);
 }
 else
 {
 v23 = (char *)((unsigned long long)(v23 + 11) & 0xFFFFFFFFFFFFFFF8LL);
 }
 v21 += *(unsigned int *)v18;
 }
 return v21;
}


/* Function: func_no_args @ 0xD9C */
long long func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0xDA4 */
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8);
}


/* Function: func_mixed_args @ 0xE0C */
long long func_mixed_args(int a1, const char *a2, long long a3, double a4)
{
 int v4; // w0

 if ( a2 )
 v4 = strlen(a2);
 else
 v4 = 0;
 return (unsigned int)(int)((double)(a1 + v4) + a4 + (double)a3);
}


/* Function: func_struct_byval @ 0xE74 */
long long func_struct_byval(long long a1)
{
 int i; // [xsp+14h] [xbp-Ch]
 long long v3; // [xsp+18h] [xbp-8h]

 v3 = 0;
 for ( i = 0; i <= 15; ++i )
 v3 += *(unsigned long long *)(a1 + 8LL * i);
 return v3;
}


/* Function: func_struct_byptr @ 0xEC0 */
long long func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return (unsigned int)(*a1 * a1[1]);
 else
 return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0xEF8 */
void *test_calling_conventions()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v7; // w0
 int v8; // w0
 int v9; // w0
 long long v10; // x6
 long long v11; // x7
 long double v12; // q0
 long double v13; // q1
 long double v14; // q2
 long double v15; // q3
 long double v16; // q4
 long double v17; // q5
 long double v18; // q6
 long double v19; // q7
 char v21; // [xsp+0h] [xbp+0h]
 unsigned long long v22[8]; // [xsp+10h] [xbp+10h] BYREF
 int i; // [xsp+9Ch] [xbp+9Ch]
 unsigned int v24; // [xsp+A0h] [xbp+A0h]
 unsigned int v25; // [xsp+A4h] [xbp+A4h]
 unsigned int v26; // [xsp+A8h] [xbp+A8h]
 unsigned int v27; // [xsp+ACh] [xbp+ACh]
 unsigned int v28; // [xsp+B0h] [xbp+B0h]
 unsigned int v29; // [xsp+B4h] [xbp+B4h]
 unsigned int v30[2]; // [xsp+B8h] [xbp+B8h] BYREF
 const char *v31; // [xsp+C0h] [xbp+C0h]
 unsigned long long v32[8]; // [xsp+C8h] [xbp+C8h]

 puts(asc_1FB0);
 v0 = call_cdecl();
 printf("CALL-L1-01: %d\n", v0);
 v1 = call_stdcall();
 printf("CALL-L1-02: %d\n", v1);
 v2 = call_fastcall();
 printf("CALL-L1-03: %d\n", v2);
 v3 = call_thiscall();
 printf("CALL-L1-04: %d\n", v3);
 v4 = call_arm_aapcs();
 printf("CALL-L1-05: %d\n", v4);
 v5 = call_mips();
 printf("CALL-L1-06: %d\n", v5);
 v6 = call_amd64_sysv();
 printf("CALL-L1-07: %d\n", v6);
 v7 = call_ms_x64();
 printf("CALL-L1-08: %d\n", v7);
 v8 = call_vectorcall();
 printf("CALL-L1-09: %d\n", v8);
 v9 = mixed_conventions_test();
 printf("CALL-L1-10: %d\n", v9);
 v24 = varargs_func(5, 1, 2, 3, 4, 5, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v21);
 printf(aCallL206, v24);
 v25 = func_no_args();
 printf(aCallL207, v25);
 v26 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 printf(aCallL208, v26);
 v31 = "test";
 v27 = func_mixed_args(10, "test", 100, 3.14);
 printf(aCallL209, v27);
 for ( i = 0; i <= 15; ++i )
 *((unsigned long long *)v32 + i) = i + 1;
 v22[0] = v32[0];
 v22[1] = v32[1];
 v22[2] = v32[2];
 v22[3] = v32[3];
 v22[4] = v32[4];
 v22[5] = v32[5];
 v22[6] = v32[6];
 v22[7] = v32[7];
 v28 = func_struct_byval((long long)v22);
 printf(aCallL210, v28);
 v30[0] = 5;
 v30[1] = 10;
 v29 = func_struct_byptr(v30);
 printf(aCallL211, v29);
 return &_stack_chk_guard;
}


/* Function: param_by_value_int @ 0x1178 */
long long param_by_value_int(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x1198 */
long long call_by_value_int()
{
 return (unsigned int)param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x11C8 */
long long param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1200 */
long long call_by_value_ptr()
{
 int v1; // [xsp+18h] [xbp+18h] BYREF
 int v2; // [xsp+1Ch] [xbp+1Ch]
 int *v3; // [xsp+20h] [xbp+20h]

 v1 = 5;
 v3 = &v1;
 v2 = param_by_value_ptr(&v1);
 return (unsigned int)(v1 + v2);
}


/* Function: param_array_decay @ 0x1274 */
long long param_array_decay()
{
 return 8;
}


/* Function: call_array_decay @ 0x128C */
long long call_array_decay()
{
 return (unsigned int)param_array_decay();
}


/* Function: param_string @ 0x12F0 */
long long param_string(unsigned char *a1)
{
 return *a1 + (unsigned int)a1[1];
}


/* Function: call_string_param @ 0x131C */
long long call_string_param()
{
 return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1338 */
long long param_ptr_array(long long a1, int a2)
{
 unsigned int v3; // [xsp+18h] [xbp-8h]
 int i; // [xsp+1Ch] [xbp-4h]

 v3 = 0;
 for ( i = 0; i < a2; ++i )
 v3 += **(unsigned char **)(a1 + 8LL * i);
 return v3;
}


/* Function: call_ptr_array @ 0x13A0 */
long long call_ptr_array()
{
 unsigned long long v1[3]; // [xsp+10h] [xbp+10h] BYREF

 v1[0] = off_14010[0];
 v1[1] = off_14018[0];
 v1[2] = (unsigned long long)off_14020;
 return (unsigned int)param_ptr_array((long long)v1, 3);
}


/* Function: param_varargs @ 0x1418 */
long long param_varargs(
 int a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 long long a7,
 long long a8,
 long double a9,
 long double a10,
 long double a11,
 long double a12,
 long double a13,
 long double a14,
 long double a15,
 long double a16,
 char a17)
{
 int v17; // w1
 char *v18; // x0
 unsigned int v21; // [xsp+20h] [xbp+20h]
 int i; // [xsp+24h] [xbp+24h]
 char *v23; // [xsp+28h] [xbp+28h]
 int v24; // [xsp+40h] [xbp+40h]

 v23 = &a17;
 v24 = -56;
 v21 = 0;
 for ( i = 0; i < a1; ++i )
 {
 v17 = v24;
 v18 = v23;
 if ( v24 < 0 )
 {
 v24 += 8;
 if ( v17 + 8 <= 0 )
 v18 = &a17 + v17;
 else
 v23 = (char *)((unsigned long long)(v23 + 11) & 0xFFFFFFFFFFFFFFF8LL);
 }
 else
 {
 v23 = (char *)((unsigned long long)(v23 + 11) & 0xFFFFFFFFFFFFFFF8LL);
 }
 v21 += *(unsigned int *)v18;
 }
 return v21;
}


/* Function: call_varargs_param @ 0x1558 */
long long call_varargs_param(
 long double a1,
 long double a2,
 long double a3,
 long double a4,
 long double a5,
 long double a6,
 long double a7,
 long double a8,
 long long a9,
 long long a10,
 long long a11,
 long long a12,
 long long a13,
 long long a14,
 long long a15,
 long long a16)
{
 char vars0; // [xsp+0h] [xbp+0h]

 return param_varargs(4, 10, 20, 30, 40, a14, a15, a16, a1, a2, a3, a4, a5, a6, a7, a8, vars0);
}


/* Function: param_func_ptr @ 0x1580 */
long long param_func_ptr(unsigned int ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2) + 10;
}


/* Function: callback_func @ 0x15A8 */
long long callback_func(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_func_ptr_param @ 0x15C0 */
long long call_func_ptr_param()
{
 return param_func_ptr((unsigned int ( *)(unsigned long long))callback_func, 5u);
}


/* Function: param_double_ptr @ 0x15E0 */
long long param_double_ptr(unsigned long long *a1, int a2)
{
 if ( !a1 || !*a1 )
 return 0xFFFFFFFFLL;
 *(unsigned int *)*a1 = a2;
 *a1 = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x1634 */
long long call_double_ptr()
{
 int v1; // [xsp+18h] [xbp+18h] BYREF
 int *v2; // [xsp+20h] [xbp+20h] BYREF

 v1 = 10;
 v2 = &v1;
 param_double_ptr((unsigned long long *)&v2, 20);
 return (unsigned int)(v2 == 0) + v1;
}


/* Function: param_complex_cast @ 0x16BC */
long long param_complex_cast(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return 0xFFFFFFFFLL;
}


/* Function: call_complex_cast @ 0x1730 */
long long call_complex_cast()
{
 unsigned int v1; // [xsp+1Ch] [xbp+1Ch] BYREF
 unsigned int v2[2]; // [xsp+20h] [xbp+20h] BYREF

 v1 = 305419896;
 v2[0] = 100;
 v2[1] = 200;
 param_complex_cast(v2, 1);
 return (unsigned int)param_complex_cast(&v1, 0);
}


/* Function: param_struct_byval @ 0x17B0 */
long long param_struct_byval(unsigned int *a1)
{
 return (unsigned int)(*a1 + a1[15]);
}


/* Function: call_struct_byval @ 0x17CC */
long long call_struct_byval()
{
 unsigned long long v1[4]; // [xsp+10h] [xbp+10h] BYREF
 int i; // [xsp+54h] [xbp+54h]
 unsigned long long v3[4]; // [xsp+58h] [xbp+58h]

 for ( i = 0; i <= 15; ++i )
 *((unsigned int *)v3 + i) = i;
 v1[0] = v3[0];
 v1[1] = v3[1];
 v1[2] = v3[2];
 v1[3] = v3[3];
 return (unsigned int)param_struct_byval((unsigned int *)v1);
}


/* Function: param_order_dep @ 0x186C */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x188C */
long long call_order_dep()
{
 return param_order_dep(2, 2);
}


/* Function: test_parameter_passing @ 0x18C4 */
long long test_parameter_passing()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 long long v5; // x0
 long long v6; // x1
 long long v7; // x2
 long long v8; // x3
 long long v9; // x4
 long long v10; // x5
 long long v11; // x6
 long long v12; // x7
 long double v13; // q0
 long double v14; // q1
 long double v15; // q2
 long double v16; // q3
 long double v17; // q4
 long double v18; // q5
 long double v19; // q6
 long double v20; // q7
 int v21; // w0
 int v22; // w0
 int v23; // w0
 int v24; // w0
 int v25; // w0
 int v26; // w0

 puts(asc_21A0);
 v0 = call_by_value_int();
 printf("PARAM-L1-01: %d\n", v0);
 v1 = call_by_value_ptr();
 printf("PARAM-L1-02: %d\n", v1);
 v2 = call_array_decay();
 printf("PARAM-L2-01: %d\n", v2);
 v3 = call_string_param();
 printf("PARAM-L2-02: %d\n", v3);
 v4 = call_ptr_array();
 v5 = printf("PARAM-L2-03: %d\n", v4);
 v21 = call_varargs_param(v13, v14, v15, v16, v17, v18, v19, v20, v5, v6, v7, v8, v9, v10, v11, v12);
 printf("PARAM-L2-04: %d\n", v21);
 v22 = call_func_ptr_param();
 printf("PARAM-L3-01: %d\n", v22);
 v23 = call_double_ptr();
 printf("PARAM-L3-02: %d\n", v23);
 v24 = call_complex_cast();
 printf("PARAM-L3-03: %d\n", v24);
 v25 = call_struct_byval();
 printf("PARAM-L3-04: %d\n", v25);
 v26 = call_order_dep();
 return printf("PARAM-L3-05: %d\n", v26);
}


/* Function: ret_basic_type @ 0x19C0 */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x19D8 */
long long call_ret_basic()
{
 return (unsigned int)ret_basic_type(21);
}


/* Function: ret_pointer @ 0x1A00 */
long long ret_pointer(long long a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1A18 */
long long call_ret_pointer()
{
 long long v1; // [xsp+18h] [xbp+18h] BYREF
 int v2; // [xsp+20h] [xbp+20h]

 v1 = *(unsigned long long *)"\n";
 v2 = 30;
 return *(unsigned int *)ret_pointer((long long)&v1);
}


/* Function: ret_small_struct @ 0x1A94 */
unsigned long long ret_small_struct(unsigned int a1, unsigned int a2)
{
 return __PAIR64__(a2, a1);
}


/* Function: call_ret_small_struct @ 0x1ABC */
long long call_ret_small_struct()
{
 unsigned long long v1; // [xsp+18h] [xbp+18h]

 v1 = ret_small_struct(3u, 4u);
 return (unsigned int)(v1 + HIDWORD(v1));
}


/* Function: ret_large_struct @ 0x1AE8 */
void * ret_large_struct(int a1, unsigned long long *a2)
{
 __int128 v2; // q1
 __int128 v3; // q1
 int i; // [xsp+24h] [xbp+24h]
 unsigned long long v6[4]; // [xsp+28h] [xbp+28h]

 for ( i = 0; i <= 15; ++i )
 *((unsigned int *)v6 + i) = a1 + i;
 v2 = v6[1];
 *a2 = v6[0];
 a2[1] = v2;
 v3 = v6[3];
 a2[2] = v6[2];
 a2[3] = v3;
 return &_stack_chk_guard;
}


/* Function: call_ret_large_struct @ 0x1B88 */
long long call_ret_large_struct()
{
 unsigned long long v1[3]; // [xsp+18h] [xbp+18h] BYREF
 int v2; // [xsp+54h] [xbp+54h]

 ret_large_struct(100, v1);
 return (unsigned int)(LODWORD(v1[0]) + v2);
}


/* Function: func_a @ 0x1BF0 */
long long func_a(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x1C08 */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: ret_func_ptr @ 0x1C20 */
long long ( * ret_func_ptr(int a1))(int a1)
{
 if ( a1 )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0x1C50 */
long long call_ret_func_ptr()
{
 long long ( *v1)(int); // [xsp+18h] [xbp+18h]

 v1 = ret_func_ptr(1);
 return v1(5);
}


/* Function: ret_opaque_handle @ 0x1C78 */
void * ret_opaque_handle(int a1)
{
 if ( a1 )
 return &handle2_0;
 else
 return &handle1_1;
}


/* Function: call_ret_opaque @ 0x1CA8 */
long long call_ret_opaque()
{
 return *(unsigned int *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x1CCC */
long long ret_complex_expr(int a1, int a2, int a3)
{
 if ( a1 <= a2 )
 return (unsigned int)(a3 + 10);
 else
 return (unsigned int)(2 * a3);
}


/* Function: call_ret_complex_expr @ 0x1D08 */
long long call_ret_complex_expr()
{
 int v1; // [xsp+18h] [xbp+18h]

 v1 = ret_complex_expr(5, 3, 10);
 return v1 + (unsigned int)ret_complex_expr(3, 5, 10);
}


/* Function: ret_multi_branch @ 0x1D4C */
long long ret_multi_branch(int a1)
{
 if ( a1 == 2 )
 return 30;
 if ( a1 > 2 )
 return 0xFFFFFFFFLL;
 if ( !a1 )
 return 10;
 if ( a1 == 1 )
 return 20;
 else
 return 0xFFFFFFFFLL;
}


/* Function: call_ret_multi_branch @ 0x1DAC */
long long call_ret_multi_branch()
{
 int v1; // [xsp+1Ch] [xbp+1Ch]
 int v2; // [xsp+1Ch] [xbp+1Ch]

 v1 = ret_multi_branch(0);
 v2 = v1 + ret_multi_branch(1);
 return v2 + (unsigned int)ret_multi_branch(2);
}


/* Function: ret_void @ 0x1E0C */
int * ret_void(int a1, int *a2)
{
 int v2; // w1
 int *result; // x0

 v2 = 3 * a1;
 result = a2;
 *a2 = v2;
 return result;
}


/* Function: call_ret_void @ 0x1E3C */
long long call_ret_void()
{
 unsigned int v1; // [xsp+14h] [xbp+14h] BYREF

 ret_void(7, (int *)&v1);
 return v1;
}


/* Function: test_return_values @ 0x1E9C */
long long test_return_values()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0
 unsigned int v8; // w0

 puts(asc_22E0);
 v0 = call_ret_basic();
 printf(aRetL101D, v0);
 v1 = call_ret_pointer();
 printf(aRetL102D, v1);
 v2 = call_ret_small_struct();
 printf(aRetL103D, v2);
 v3 = call_ret_large_struct();
 printf(aRetL104D, v3);
 v4 = call_ret_func_ptr();
 printf(aRetL201D, v4);
 v5 = call_ret_opaque();
 printf(aRetL202D, v5);
 v6 = call_ret_complex_expr();
 printf(aRetL301D, v6);
 v7 = call_ret_multi_branch();
 printf(aRetL302D, v7);
 v8 = call_ret_void();
 return printf(aRetL303D, v8);
}


/* Function: main @ 0x1F70 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x1F90 */
void term_proc()
{
 ;
}


/* FAILED to decompile: strlen @ 0x14090 */

/* FAILED to decompile: __libc_start_main @ 0x14098 */

/* FAILED to decompile: __cxa_finalize @ 0x140A0 */

/* FAILED to decompile: __stack_chk_fail @ 0x140A8 */

/* FAILED to decompile: abort @ 0x140B8 */

/* FAILED to decompile: puts @ 0x140C0 */

/* FAILED to decompile: printf @ 0x140C8 */

/* FAILED to decompile: __gmon_start__ @ 0x140D8 */

/* Total functions decompiled: 80, failed: 8 */
