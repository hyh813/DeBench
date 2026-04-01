/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
#include <stdbool.h>
typedef unsigned char uint8_t;

/* Missing string constants */
static int handle1_1 = 1;
static int handle2_0 = 2;
static const char *aCallL208 = "CALL-L2-08: %d\n";
static const char *aCallL209 = "CALL-L2-09: %d\n";
static const char *aCallL210 = "CALL-L2-10: %d\n";
static const char *aCallL211 = "CALL-L2-11: %d\n";
static const char *asc_125F4 = "Parameter Passing Tests:";
static const char *asc_12700 = "Return Value Tests:";
static const char *aRetL101D = "RET-L1-01: %d\n";
static const char *aRetL102D = "RET-L1-02: %d\n";
static const char *aRetL103D = "RET-L1-03: %d\n";
static const char *aRetL104D = "RET-L1-04: %d\n";
static const char *aRetL201D = "RET-L2-01: %d\n";
static const char *aRetL202D = "RET-L2-02: %d\n";
static const char *aRetL301D = "RET-L3-01: %d\n";
static const char *aRetL302D = "RET-L3-02: %d\n";
static const char *aRetL303D = "RET-L3-03: %d\n";
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

/* Auto-injected helper definitions */
#define JUMPOUT(addr) ((void)0)

int call_weak_fn()
{
 return 0;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/4/4_gcc_O0_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x103FC */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_10408 @ 0x10408 */
void sub_10408()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x10580 */
int cdecl_func(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_cdecl @ 0x105B0 */
int call_cdecl()
{
 return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x105D0 */
int stdcall_func(int a1, int a2)
{
 return a2 * a1;
}


/* Function: call_stdcall @ 0x10600 */
int call_stdcall()
{
 return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x10620 */
int fastcall_func(int a1, int a2, int a3)
{
 return a1 + a2 + a3;
}


/* Function: call_fastcall @ 0x1065C */
int call_fastcall()
{
 return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x10680 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1069C */
int arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return a1 + a2 + a3 + a4 + a5;
}


/* Function: call_arm_aapcs @ 0x106EC */
int call_arm_aapcs()
{
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x10724 */
int mips_func(int a1, int a2, int a3, int a4)
{
 return a1 + a2 + a3 + a4;
}


/* Function: call_mips @ 0x1076C */
int call_mips()
{
 return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x10794 */
int amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return a1 + a2 + a3 + a4 + a5 + a6;
}


/* Function: call_amd64_sysv @ 0x107EC */
int call_amd64_sysv()
{
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1082C */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a1 + a2 + a3 + a4 + a5;
}


/* Function: call_ms_x64 @ 0x1087C */
int call_ms_x64()
{
 return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x108B4 */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a1 + a2 + a3 + a4;
}


/* Function: call_vectorcall @ 0x108FC */
int call_vectorcall()
{
 return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x10924 */
int mixed_conventions_test()
{
 int v1; // [sp+4h] [bp-8h]
 int v2; // [sp+4h] [bp-8h]

 v1 = cdecl_func(1, 2);
 v2 = v1 + stdcall_func(3, 4);
 return v2 + fastcall_func(5, 6, 7);
}


/* Function: varargs_func @ 0x109A0 */
int varargs_func(int a1, ...)
{
 int v1; // kr00_4
 va_list v3; // [sp+0h] [bp-14h]
 int v4; // [sp+4h] [bp-10h]
 int i; // [sp+8h] [bp-Ch]
 va_list varg_r1; // [sp+1Ch] [bp+8h] BYREF

 va_start(varg_r1, a1);
 v4 = 0;
 va_copy(v3, varg_r1);
 for ( i = 0; i < a1; ++i )
 {
 v1 = va_arg(v3, unsigned int);
 v4 += v1;
 }
 return v4;
}


/* Function: func_no_args @ 0x10A4C */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x10A68 */
int func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8;
}


/* Function: func_mixed_args @ 0x10AD0 */
int func_mixed_args(int a1, const char *a2, double a3, long long a4)
{
 size_t v4; // r3

 if ( a2 )
 v4 = strlen(a2);
 else
 v4 = 0;
 return (int)((double)(int)(a1 + v4) + a3 + (double)a4);
}


/* Function: func_struct_byval @ 0x10B80 */
int func_struct_byval(int a1, int a2, int a3, int a4)
{
 int i; // [sp+4h] [bp-18h]
 long long v6; // [sp+8h] [bp-14h]
 unsigned int vars4[4]; // [sp+20h] [bp+4h]

 vars4[0] = a1;
 vars4[1] = a2;
 vars4[2] = a3;
 vars4[3] = a4;
 v6 = 0;
 for ( i = 0; i <= 15; ++i )
 v6 += *(unsigned long long *)&vars4[2 * i];
 return v6;
}


/* Function: func_struct_byptr @ 0x10C10 */
int func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return a1[1] * *a1;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x10C58 */
int test_calling_conventions()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int v9; // r0
 unsigned long long v11[14]; // [sp+0h] [bp-12Ch] BYREF
 int i; // [sp+70h] [bp-BCh]
 int v13; // [sp+74h] [bp-B8h]
 int v14; // [sp+78h] [bp-B4h]
 int v15; // [sp+7Ch] [bp-B0h]
 const char *v16; // [sp+80h] [bp-ACh]
 int v17; // [sp+84h] [bp-A8h]
 int v18; // [sp+88h] [bp-A4h]
 int v19; // [sp+8Ch] [bp-A0h]
 unsigned int v20[5]; // [sp+90h] [bp-9Ch] BYREF
 int v21; // [sp+A4h] [bp-88h]
 unsigned char src[112]; // [sp+A8h] [bp-84h] BYREF

 puts("Calling Convention Tests:");
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
 v13 = varargs_func(5, 1, 2, 3, 4, 5);
 printf("CALL-L2-06: %d\n", v13);
 v14 = func_no_args();
 printf("CALL-L2-07: %d\n", v14);
 v15 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 printf(aCallL208, v15);
 v16 = "test";
 v17 = func_mixed_args(10, "test", 3.14, 100);
 printf(aCallL209, v17);
 for ( i = 0; i <= 15; ++i )
 *(unsigned long long *)(&v21 + 2 * i - 3) = i + 1;
 memcpy(v11, src, sizeof(v11));
 v18 = func_struct_byval(v20[2], v20[3], v20[4], v21);
 printf(aCallL210, v18);
 v20[0] = 5;
 v20[1] = 10;
 v19 = func_struct_byptr(v20);
 return printf(aCallL211, v19);
}


/* Function: param_by_value_int @ 0x10F34 */
int param_by_value_int(int a1)
{
 return 2 * a1;
}


/* Function: call_by_value_int @ 0x10F64 */
int call_by_value_int()
{
 return param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x10F9C */
int param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x10FEC */
int call_by_value_ptr()
{
 unsigned int v1[2]; // [sp+0h] [bp-14h] BYREF
 int v2; // [sp+8h] [bp-Ch]

 v1[0] = 5;
 v1[1] = v1;
 v2 = param_by_value_ptr(v1);
 return v1[0] + v2;
}


/* Function: param_array_decay @ 0x1105C */
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0x11084 */
int call_array_decay()
{
 unsigned char s[40]; // [sp+4h] [bp-30h] BYREF

 memset(s, 0, sizeof(s));
 return param_array_decay();
}


/* Function: param_string @ 0x110F4 */
int param_string(unsigned char *a1)
{
 return *a1 + a1[1];
}


/* Function: call_string_param @ 0x11130 */
int call_string_param()
{
 return param_string("Hello");
}


/* Function: param_ptr_array @ 0x11150 */
int param_ptr_array(int a1, int a2)
{
 int v3; // [sp+8h] [bp-Ch]
 int i; // [sp+Ch] [bp-8h]

 v3 = 0;
 for ( i = 0; i < a2; ++i )
 v3 += **(unsigned char **)(a1 + 4 * i);
 return v3;
}


/* Function: call_ptr_array @ 0x111D0 */
int call_ptr_array()
{
 unsigned int v1[3]; // [sp+0h] [bp-14h] BYREF

 v1[0] = "abc";
 v1[1] = "def";
 v1[2] = "ghi";
 return param_ptr_array((int)v1, 3);
}


/* Function: param_varargs @ 0x11240 */
int param_varargs(int a1, ...)
{
 int v1; // kr00_4
 va_list v3; // [sp+0h] [bp-14h]
 int v4; // [sp+4h] [bp-10h]
 int i; // [sp+8h] [bp-Ch]
 va_list varg_r1; // [sp+1Ch] [bp+8h] BYREF

 va_start(varg_r1, a1);
 va_copy(v3, varg_r1);
 v4 = 0;
 for ( i = 0; i < a1; ++i )
 {
 v1 = va_arg(v3, unsigned int);
 v4 += v1;
 }
 return v4;
}


/* Function: call_varargs_param @ 0x112EC */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x11324 */
int param_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2) + 10;
}


/* Function: callback_func @ 0x11358 */
int callback_func(int a1)
{
 return 2 * a1;
}


/* Function: call_func_ptr_param @ 0x11380 */
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


/* Function: param_double_ptr @ 0x113A4 */
int param_double_ptr(unsigned int *a1, int a2)
{
 if ( !a1 || !*a1 )
 return -1;
 *(unsigned int *)*a1 = a2;
 *a1 = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x1140C */
int call_double_ptr()
{
 int v1; // [sp+0h] [bp-14h] BYREF
 int *v2; // [sp+4h] [bp-10h] BYREF

 v1 = 10;
 v2 = &v1;
 param_double_ptr(&v2, 20);
 return (v2 == 0) + v1;
}


/* Function: param_complex_cast @ 0x11498 */
int param_complex_cast(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return -1;
}


/* Function: call_complex_cast @ 0x1151C */
int call_complex_cast()
{
 int v1; // [sp+0h] [bp-14h] BYREF
 unsigned int v2[2]; // [sp+4h] [bp-10h] BYREF

 v1 = 305419896;
 v2[0] = 100;
 v2[1] = 200;
 param_complex_cast(v2, 1);
 return param_complex_cast(&v1, 0);
}


/* Function: param_struct_byval @ 0x115A8 */
int param_struct_byval(
 int a1,
 int a2,
 int a3,
 int a4,
 int a5,
 int a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 int a14,
 int a15,
 int a16)
{
 return a1 + a16;
}


/* Function: call_struct_byval @ 0x115DC */
int call_struct_byval()
{
 int i; // [sp+30h] [bp-4Ch]
 int v2; // [sp+34h] [bp-48h]
 int v3[15]; // [sp+38h] [bp-44h]

 for ( i = 0; i <= 15; ++i )
 v3[i - 1] = i;
 return param_struct_byval(
 v2,
 v3[0],
 v3[1],
 v3[2],
 v3[3],
 v3[4],
 v3[5],
 v3[6],
 v3[7],
 v3[8],
 v3[9],
 v3[10],
 v3[11],
 v3[12],
 v3[13],
 v3[14]);
}


/* Function: param_order_dep @ 0x11690 */
int param_order_dep(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_order_dep @ 0x116C0 */
int call_order_dep()
{
 return param_order_dep(2, 2);
}


/* Function: test_parameter_passing @ 0x11708 */
int test_parameter_passing()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int v9; // r0
 int v10; // r0

 puts(asc_125F4);
 v0 = call_by_value_int();
 printf("PARAM-L1-01: %d\n", v0);
 v1 = call_by_value_ptr();
 printf("PARAM-L1-02: %d\n", v1);
 v2 = call_array_decay();
 printf("PARAM-L2-01: %d\n", v2);
 v3 = call_string_param();
 printf("PARAM-L2-02: %d\n", v3);
 v4 = call_ptr_array();
 printf("PARAM-L2-03: %d\n", v4);
 v5 = call_varargs_param();
 printf("PARAM-L2-04: %d\n", v5);
 v6 = call_func_ptr_param();
 printf("PARAM-L3-01: %d\n", v6);
 v7 = call_double_ptr();
 printf("PARAM-L3-02: %d\n", v7);
 v8 = call_complex_cast();
 printf("PARAM-L3-03: %d\n", v8);
 v9 = call_struct_byval();
 printf("PARAM-L3-04: %d\n", v9);
 v10 = call_order_dep();
 return printf("PARAM-L3-05: %d\n", v10);
}


/* Function: ret_basic_type @ 0x1182C */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x11854 */
int call_ret_basic()
{
 return ret_basic_type(21);
}


/* Function: ret_pointer @ 0x11884 */
int ret_pointer(int a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x118AC */
int call_ret_pointer()
{
 unsigned int v1[3]; // [sp+8h] [bp-14h] BYREF

 v1[0] = *(unsigned int *)"\n";
 v1[1] = 20;
 v1[2] = 30;
 return *(unsigned int *)ret_pointer((int)v1);
}


/* Function: ret_small_struct @ 0x11920 */
unsigned int * ret_small_struct(unsigned int *result, int a2, int a3)
{
 *result = a2;
 result[1] = a3;
 return result;
}


/* Function: call_ret_small_struct @ 0x1196C */
int call_ret_small_struct()
{
 unsigned int v1[2]; // [sp+4h] [bp-10h] BYREF

 ret_small_struct(v1, 3, 4);
 return v1[0] + v1[1];
}


/* Function: ret_large_struct @ 0x119D4 */
unsigned int * ret_large_struct(unsigned int *result, int a2)
{
 int v2; // r1
 int v3; // r2
 int v4; // r3
 int v5; // r1
 int v6; // r2
 int v7; // r3
 int v8; // r1
 int v9; // r2
 int v10; // r3
 int v11; // r1
 int v12; // r2
 int v13; // r3
 int i; // [sp+8h] [bp-4Ch]
 int v15; // [sp+Ch] [bp-48h]
 unsigned int v16[15]; // [sp+10h] [bp-44h]

 for ( i = 0; i <= 15; ++i )
 v16[i - 1] = a2 + i;
 v2 = v16[0];
 v3 = v16[1];
 v4 = v16[2];
 *result = v15;
 result[1] = v2;
 result[2] = v3;
 result[3] = v4;
 v5 = v16[4];
 v6 = v16[5];
 v7 = v16[6];
 result[4] = v16[3];
 result[5] = v5;
 result[6] = v6;
 result[7] = v7;
 v8 = v16[8];
 v9 = v16[9];
 v10 = v16[10];
 result[8] = v16[7];
 result[9] = v8;
 result[10] = v9;
 result[11] = v10;
 v11 = v16[12];
 v12 = v16[13];
 v13 = v16[14];
 result[12] = v16[11];
 result[13] = v11;
 result[14] = v12;
 result[15] = v13;
 return result;
}


/* Function: call_ret_large_struct @ 0x11A94 */
int call_ret_large_struct()
{
 unsigned int v1[16]; // [sp+4h] [bp-48h] BYREF

 ret_large_struct(v1, 100);
 return v1[0] + v1[15];
}


/* Function: func_a @ 0x11AF8 */
int func_a(int a1)
{
 return a1 + 10;
}


/* Function: func_b @ 0x11B20 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: ret_func_ptr @ 0x11B48 */
int ( * ret_func_ptr(int a1))(int a1)
{
 if ( a1 )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0x11B88 */
int call_ret_func_ptr()
{
 int ( *v1)(int); // [sp+4h] [bp-8h]

 v1 = ret_func_ptr(1);
 return v1(5);
}


/* Function: ret_opaque_handle @ 0x11BBC */
void * ret_opaque_handle(int a1)
{
 if ( a1 )
 return &handle2_0;
 else
 return &handle1_1;
}


/* Function: call_ret_opaque @ 0x11BFC */
int call_ret_opaque()
{
 return *(unsigned int *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x11C28 */
int ret_complex_expr(int a1, int a2, int a3)
{
 if ( a1 <= a2 )
 return a3 + 10;
 else
 return 2 * a3;
}


/* Function: call_ret_complex_expr @ 0x11C74 */
int call_ret_complex_expr()
{
 int v1; // [sp+0h] [bp-Ch]

 v1 = ret_complex_expr(5, 3, 10);
 return v1 + ret_complex_expr(3, 5, 10);
}


/* Function: ret_multi_branch @ 0x11CC0 */
int ret_multi_branch(int a1)
{
 if ( a1 == 2 )
 return 30;
 if ( a1 > 2 )
 return -1;
 if ( !a1 )
 return 10;
 if ( a1 != 1 )
 return -1;
 return 20;
}


/* Function: call_ret_multi_branch @ 0x11D30 */
int call_ret_multi_branch()
{
 int v1; // [sp+4h] [bp-8h]
 int v2; // [sp+4h] [bp-8h]

 v1 = ret_multi_branch(0);
 v2 = v1 + ret_multi_branch(1);
 return v2 + ret_multi_branch(2);
}


/* Function: ret_void @ 0x11D9C */
int ret_void(int result, unsigned int *a2)
{
 *a2 = 3 * result;
 return result;
}


/* Function: call_ret_void @ 0x11DD8 */
int call_ret_void()
{
 int v1; // [sp+0h] [bp-Ch] BYREF

 ret_void(7, &v1);
 return v1;
}


/* Function: test_return_values @ 0x11E34 */
int test_return_values()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0

 puts(asc_12700);
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


/* Function: main @ 0x11F28 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: __aeabi_drsub @ 0x11F48 */
double _aeabi_drsub(double a1, double a2)
{
 return a2 - a1;
}


/* Function: __subdf3 @ 0x11F50 */
double _subdf3(double a1, double a2)
{
 return a1 - a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x12200 */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x1209C);
 return result;
}


/* Function: __floatsidf @ 0x12224 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x1209C);
 return result;
}


/* Function: __extendsfdf2 @ 0x1224C */
int _extendsfdf2(int a1, int a2, int a3, unsigned int a4)
{
 bool v4; // zf
 int v5; // r2
 int result; // r0

 v5 = 2 * a1;
 v4 = 2 * a1 == 0;
 result = a1 << 29;
 if ( v4 || (a4 = v5 & 0xFF000000, (v5 & 0xFF000000) == 0) || a4 == 0xFF000000 )
 {
 if ( (v5 & 0xFFFFFF) != 0 && a4 != 0xFF000000 )
 JUMPOUT(0x1209C);
 }
 return result;
}


/* Function: __floatundidf @ 0x12294 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x122C4);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __fixdfsi @ 0x12308 */
unsigned int _fixdfsi(unsigned int a1, int a2)
{
 int v2; // r2
 bool v3; // cf
 int v4; // r2
 unsigned int result; // r0

 v2 = 2 * a2 + 0x200000;
 if ( (unsigned int)(2 * a2) >= 0xFFE00000 )
 {
 if ( a1 | (a2 << 12) )
 return 0;
 goto LABEL_10;
 }
 if ( 2 * a2 + 0x200000 >= 0 )
 return 0;
 v3 = (unsigned int)(v2 >> 21) <= 0xFFFFFC1F;
 v4 = -993 - (v2 >> 21);
 if ( v4 == 0 || !v3 )
 {
LABEL_10:
 result = a2 & 0x80000000;
 if ( a2 >= 0 )
 return 0x7FFFFFFF;
 return result;
 }
 result = ((a2 << 11) | 0x80000000 | (a1 >> 21)) >> v4;
 if ( a2 < 0 )
 return -result;
 return result;
}


/* Function: .term_proc @ 0x12364 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x23058 */

/* FAILED to decompile: __imp_strlen @ 0x2305C */

/* FAILED to decompile: __imp_memset @ 0x23060 */

/* FAILED to decompile: __imp_printf @ 0x23064 */

/* FAILED to decompile: __imp_abort @ 0x23068 */

/* FAILED to decompile: __imp___libc_start_main @ 0x2306C */

/* FAILED to decompile: __imp_memcpy @ 0x23070 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x23074 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23078 */

/* Total functions decompiled: 89, failed: 9 */
