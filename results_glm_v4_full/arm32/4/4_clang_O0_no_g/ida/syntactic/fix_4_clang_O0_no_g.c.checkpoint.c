/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
#include <stdbool.h>
#include <setjmp.h>

/* JUMPOUT macro for decompiled control flow */
#define JUMPOUT(addr) do { longjmp(jump_buf, (addr)); } while(0)
static jmp_buf jump_buf;

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
 * Binary: build/arm32/4/4_clang_O0_no_g
 * Processor: arm
 */

/* Function: call_weak_fn @ 0x408 */
int call_weak_fn()
{
 return 0;
}


/* Function: .init_proc @ 0x400 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_40C @ 0x40C */
void sub_40C()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



const char asc_2180[] = "Testing Calling Conventions\n";
const char asc_234B[] = "Testing Parameter Passing\n";
const char aCallL206[] = "CALL-L2-06: %d\n";
const char aCallL207[] = "CALL-L2-07: %d\n";
const char aCallL208[] = "CALL-L2-08: %d\n";
const char aCallL209[] = "CALL-L2-09: %d\n";
const char aCallL210[] = "CALL-L2-10: %d\n";
const char aCallL211[] = "CALL-L2-11: %d\n";
const char aRetL101D[] = "RET-L1-01: %d\n";
const char aRetL102D[] = "RET-L1-02: %d\n";
const char aRetL103D[] = "RET-L1-03: %d\n";
const char aRetL104D[] = "RET-L1-04: %d\n";
const char aRetL201D[] = "RET-L2-01: %d\n";
const char aRetL202D[] = "RET-L2-02: %d\n";
const char aRetL301D[] = "RET-L3-01: %d\n";
const char aRetL302D[] = "RET-L3-02: %d\n";
const char aRetL303D[] = "RET-L3-03: %d\n";
const char asc_2428[] = "Testing Return Values\n";

int dword_70;
int dword_64;
int dword_C8;
char byte_4;

/* Forward declaration */
int callback_func(int a1);

/* Function: cdecl_func @ 0x5DC */
int cdecl_func(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_cdecl @ 0x5FC */
int call_cdecl()
{
 return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x618 */
int stdcall_func(int a1, int a2)
{
 return a1 * a2;
}


/* Function: call_stdcall @ 0x638 */
int call_stdcall()
{
 return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x654 */
int fastcall_func(int a1, int a2, int a3)
{
 return a1 + a2 + a3;
}


/* Function: call_fastcall @ 0x680 */
int call_fastcall()
{
 return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x6A0 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x6A8 */
int arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return a1 + a2 + a3 + a4 + a5;
}


/* Function: call_arm_aapcs @ 0x6EC */
int call_arm_aapcs()
{
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x724 */
int mips_func(int a1, int a2, int a3, int a4)
{
 return a1 + a2 + a3 + a4;
}


/* Function: call_mips @ 0x75C */
int call_mips()
{
 return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x780 */
int amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return a1 + a2 + a3 + a4 + a5 + a6;
}


/* Function: call_amd64_sysv @ 0x7D0 */
int call_amd64_sysv()
{
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x810 */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a1 + a2 + a3 + a4 + a5;
}


/* Function: call_ms_x64 @ 0x854 */
int call_ms_x64()
{
 return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x88C */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a1 + a2 + a3 + a4;
}


/* Function: call_vectorcall @ 0x8C4 */
int call_vectorcall()
{
 return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x8E8 */
int mixed_conventions_test()
{
 int v1; // [sp+4h] [bp-4h]
 int v2; // [sp+4h] [bp-4h]

 v1 = cdecl_func(1, 2);
 v2 = v1 + stdcall_func(3, 4);
 return v2 + fastcall_func(5, 6, 7);
}


/* Function: varargs_func @ 0x964 */
int varargs_func(int a1, ...)
{
 int i;
 int v4;
 va_list va;
 int arg;

 va_start(va, a1);
 v4 = 0;
 for ( i = 0; i < a1; ++i )
 {
 arg = va_arg(va, int);
 v4 += arg;
 }
 va_end(va);
 return v4;
}


/* Function: func_no_args @ 0x9E0 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x9E8 */
int func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8;
}


/* Function: func_mixed_args @ 0xA50 */
int func_mixed_args(int a1, const char *a2, double a3, long long a4)
{
 size_t v5; // [sp+8h] [bp-28h]

 if ( a2 )
 v5 = strlen(a2);
 else
 v5 = 0;
 return (int)((double)(int)(a1 + v5) + a3 + (double)a4);
}


/* Function: func_struct_byval @ 0xB0C */
int func_struct_byval(int a1, int a2, int a3, int a4)
{
 int i; // [sp+4h] [bp-1Ch]
 long long v6; // [sp+8h] [bp-18h]
 unsigned int v7[32]; // [sp+10h] [bp-10h]

 v7[3] = a4;
 v7[2] = a3;
 v7[1] = a2;
 v7[0] = a1;
 v6 = 0;
 for ( i = 0; i <= 15; ++i )
 v6 += *(unsigned long long *)&v7[2 * i];
 return v6;
}


/* Function: func_struct_byptr @ 0xB94 */
int func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return *a1 * a1[1];
 else
 return -1;
}


/* Function: test_calling_conventions @ 0xBDC */
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
 int v10; // r0
 int *v11; // r1
 long long *v12; // r0
 int *v13; // r2
 int *v14; // r1
 int v15; // r3
 long long v17; // [sp+0h] [bp-150h] BYREF
 unsigned int v18; // [sp+70h] [bp-E0h]
 unsigned int v19; // [sp+74h] [bp-DCh]
 int *v20; // [sp+78h] [bp-D8h]
 int *v21; // [sp+7Ch] [bp-D4h]
 long long *v22; // [sp+80h] [bp-D0h]
 int v23; // [sp+84h] [bp-CCh]
 int v24; // [sp+88h] [bp-C8h]
 int v25; // [sp+8Ch] [bp-C4h]
 int v26; // [sp+90h] [bp-C0h]
 int v27; // [sp+94h] [bp-BCh]
 int v28; // [sp+98h] [bp-B8h]
 int v29; // [sp+9Ch] [bp-B4h]
 unsigned int v30[2]; // [sp+A0h] [bp-B0h] BYREF
 int v31; // [sp+A8h] [bp-A8h]
 int i; // [sp+ACh] [bp-A4h]
 int v33[4]; // [sp+B0h] [bp-A0h] BYREF
 int v34; // [sp+C0h] [bp-90h] BYREF
 int v35; // [sp+134h] [bp-1Ch]
 const char *v36; // [sp+138h] [bp-18h]
 int v37; // [sp+13Ch] [bp-14h]
 int v38; // [sp+140h] [bp-10h]
 int v39; // [sp+144h] [bp-Ch]

 printf(asc_2180);
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
 v23 = 5;
 v26 = 4;
 v27 = 1;
 v24 = 2;
 v25 = 3;
 v39 = varargs_func(5);
 printf(aCallL206, v39);
 v38 = func_no_args();
 printf(aCallL207, v38);
 v37 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 printf(aCallL208, v37);
 v36 = "test";
 v28 = 0;
 v35 = func_mixed_args(10, "test", 3.14, 100);
 printf(aCallL209, v35);
 for ( i = 0; i <= 15; ++i )
 {
 v10 = (i + 1) >> 31;
 v11 = &v33[2 * i];
 *v11 = i + 1;
 v11[1] = v10;
 }
 v20 = &dword_70;
 v21 = &v34;
 v22 = &v17;
 do
 {
 unsigned int *temp_ptr1;
 unsigned int *temp_ptr2;
 v12 = v22;
 v13 = v20;
 v14 = v21 + 1;
 v15 = *v21;
 temp_ptr1 = (unsigned int *)v22;
 *temp_ptr1 = v15;
 temp_ptr2 = (unsigned int *)v12;
 v20 = v13 - 1;
 v21 = v14;
 v12 = (long long *)((char *)v12 + 4);
 }
 while ( v13 != (int *)&byte_4 );
 v31 = func_struct_byval(v33[0], v33[1], v33[2], v33[3]);
 printf(aCallL210, v31);
 v30[1] = 10;
 v30[0] = 5;
 v29 = func_struct_byptr(v30);
 return printf(aCallL211, v29);
}


/* Function: param_by_value_int @ 0xF18 */
int param_by_value_int(int a1)
{
 return 2 * a1;
}


/* Function: call_by_value_int @ 0xF38 */
int call_by_value_int()
{
 return param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0xF70 */
int param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0xFA4 */
int call_by_value_ptr()
{
 int v0; // r1
 int v2; // [sp+Ch] [bp-4h] BYREF

 v2 = 5;
 v0 = param_by_value_ptr(&v2);
 return v2 + v0;
}


/* Function: param_array_decay @ 0xFE4 */
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0xFFC */
int call_array_decay()
{
 unsigned char s[40]; // [sp+8h] [bp-28h] BYREF

 memset(s, 0, sizeof(s));
 return param_array_decay();
}


/* Function: param_string @ 0x1034 */
int param_string(unsigned char *a1)
{
 return *a1 + a1[1];
}


/* Function: call_string_param @ 0x1054 */
int call_string_param()
{
 return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1074 */
int param_ptr_array(const char **a1, int a2)
{
 int i; // [sp+0h] [bp-10h]
 int v4; // [sp+4h] [bp-Ch]

 v4 = 0;
 for ( i = 0; i < a2; ++i )
 v4 += *(unsigned char *)a1[i];
 return v4;
}


/* Function: call_ptr_array @ 0x10E0 */
int call_ptr_array()
{
 const char *v1[3]; // [sp+4h] [bp-Ch] BYREF

 v1[0] = "abc";
 v1[2] = "ghi";
 v1[1] = "def";
 return param_ptr_array(v1, 3);
}


/* Function: param_varargs @ 0x1130 */
int param_varargs(int a1, ...)
{
 int i;
 int v4;
 va_list va;
 int arg;

 va_start(va, a1);
 v4 = 0;
 for ( i = 0; i < a1; ++i )
 {
 arg = va_arg(va, int);
 v4 += arg;
 }
 va_end(va);
 return v4;
}


/* Function: call_varargs_param @ 0x11AC */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x11E4 */
int param_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x1218 */
int call_func_ptr_param()
{
 return param_func_ptr((int ( *)(int))callback_func, 5);
}


/* Function: callback_func @ 0x123C */
int callback_func(int a1)
{
 return 2 * a1;
}


/* Function: param_double_ptr @ 0x1254 */
int param_double_ptr(unsigned int *a1, int a2)
{
 if ( !a1 || !*a1 )
 return -1;
 *(unsigned int *)*a1 = a2;
 *a1 = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x12C4 */
int call_double_ptr()
{
 int result; // r0
 int *v1; // [sp+8h] [bp-8h] BYREF
 int v2; // [sp+Ch] [bp-4h] BYREF

 v2 = 10;
 v1 = &v2;
 param_double_ptr(&v1, 20);
 result = v2;
 if ( !v1 )
 return v2 + 1;
 return result;
}


/* Function: param_complex_cast @ 0x1310 */
int param_complex_cast(uintptr_t *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return -1;
}


/* Function: call_complex_cast @ 0x13A0 */
int call_complex_cast()
{
 uintptr_t v1[2]; // [sp+4h] [bp-Ch] BYREF
 uintptr_t v2; // [sp+Ch] [bp-4h] BYREF

 v2 = 305419896;
 v1[1] = (uintptr_t)&dword_C8;
 v1[0] = (uintptr_t)&dword_64;
 param_complex_cast(v1, 1);
 return param_complex_cast(&v2, 0);
}


/* Function: param_struct_byval @ 0x1400 */
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


/* Function: call_struct_byval @ 0x14B8 */
int call_struct_byval()
{
 int i; // [sp+40h] [bp-60h]
 int v2[23]; // [sp+44h] [bp-5Ch]

 for ( i = 0; i <= 15; ++i )
 v2[i] = i;
 return param_struct_byval(
 v2[0],
 v2[1],
 v2[2],
 v2[3],
 v2[4],
 v2[5],
 v2[6],
 v2[7],
 v2[8],
 v2[9],
 v2[10],
 v2[11],
 v2[12],
 v2[13],
 v2[14],
 v2[15]);
}


/* Function: param_order_dep @ 0x15A4 */
int param_order_dep(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_order_dep @ 0x15C4 */
int call_order_dep()
{
 return param_order_dep(1, 2);
}


/* Function: test_parameter_passing @ 0x1600 */
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

 printf(asc_234B);
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


/* Function: ret_basic_type @ 0x1728 */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x1740 */
int call_ret_basic()
{
 return ret_basic_type(21);
}


/* Function: ret_pointer @ 0x1770 */
int ret_pointer(int a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1788 */
int call_ret_pointer()
{
 unsigned int v1[3]; // [sp+4h] [bp-Ch] BYREF

 v1[0] = 10;
 v1[2] = 30;
 v1[1] = 20;
 return *(unsigned int *)ret_pointer((int)v1);
}


/* Function: ret_small_struct @ 0x17E0 */
int ret_small_struct(unsigned int *a1, int a2, int a3)
{
 int result; // r0

 *a1 = a2;
 result = a3;
 a1[1] = a3;
 return result;
}


/* Function: call_ret_small_struct @ 0x1810 */
int call_ret_small_struct()
{
 unsigned int v1[2]; // [sp+0h] [bp-8h] BYREF

 ret_small_struct(v1, 3, 4);
 return v1[0] + v1[1];
}


/* Function: ret_large_struct @ 0x1844 */
int ret_large_struct(int a1, int a2)
{
 int result; // r0
 int i; // [sp+4h] [bp-8h]

 for ( i = 0; ; ++i )
 {
 result = i;
 if ( i > 15 )
 break;
 *(unsigned int *)(a1 + 4 * i) = a2 + i;
 }
 return result;
}


/* Function: call_ret_large_struct @ 0x189C */
int call_ret_large_struct()
{
 unsigned int v1[16]; // [sp+0h] [bp-40h] BYREF

 ret_large_struct((int)v1, 100);
 return v1[0] + v1[15];
}


/* Function: func_a @ 0x18CC */
int func_a(int a1)
{
 return a1 + 10;
}


/* Function: func_b @ 0x18E4 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: ret_func_ptr @ 0x18FC */
int ( * ret_func_ptr(int a1))(int)
{
 int ( *result)(int); // r0

 result = func_a;
 if ( a1 )
 return func_b;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1930 */
int call_ret_func_ptr()
{
 int ( *v1)(int); // [sp+4h] [bp-4h]

 v1 = ret_func_ptr(1);
 return v1(5);
}


/* Function: ret_opaque_handle @ 0x1964 */
int ** ret_opaque_handle(int a1)
{
 int **result; // r0
 static int *ret_opaque_handle_handle1;
 static int *ret_opaque_handle_handle2;

 result = (int **)&ret_opaque_handle_handle2;
 if ( !a1 )
 return &ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x1998 */
int *call_ret_opaque()
{
 return *ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x19C4 */
int ret_complex_expr(int a1, int a2, int a3)
{
 if ( a1 <= a2 )
 return a3 + 10;
 else
 return 2 * a3;
}


/* Function: call_ret_complex_expr @ 0x1A14 */
int call_ret_complex_expr()
{
 int v1; // [sp+14h] [bp-4h]

 v1 = ret_complex_expr(5, 3, 10);
 return v1 + ret_complex_expr(3, 5, 10);
}


/* Function: ret_multi_branch @ 0x1A70 */
int ret_multi_branch(int a1)
{
 switch ( a1 )
 {
 case 0:
 return 10;
 case 1:
 return 20;
 case 2:
 return 30;
 }
 return -1;
}


/* Function: call_ret_multi_branch @ 0x1AE8 */
int call_ret_multi_branch()
{
 int v1; // [sp+4h] [bp-4h]
 int v2; // [sp+4h] [bp-4h]

 v1 = ret_multi_branch(0);
 v2 = v1 + ret_multi_branch(1);
 return v2 + ret_multi_branch(2);
}


/* Function: ret_void @ 0x1B50 */
int ret_void(int a1, int *a2)
{
 int result; // r0

 result = 3 * a1;
 *a2 = result;
 return result;
}


/* Function: call_ret_void @ 0x1B74 */
int call_ret_void()
{
 int v1; // [sp+4h] [bp-4h] BYREF

 ret_void(7, &v1);
 return v1;
}


/* Function: test_return_values @ 0x1B9C */
int test_return_values()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int *v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0

 printf(asc_2428);
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


/* Function: main @ 0x1C94 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: __aeabi_drsub @ 0x1CC8 */
typedef union { double d; struct { uint32_t lo; uint32_t hi; } u; } double_u_t;

double _aeabi_drsub(double a1, double a2)
{
 double_u_t u;
 u.d = a1;
 u.u.hi ^= 0x80000000;
 return u.d + a2;
}


/* Function: __subdf3 @ 0x1CD0 */
double _subdf3(double a1, double a2)
{
 double_u_t u;
 u.d = a2;
 u.u.hi ^= 0x80000000;
 return a1 + u.d;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x1F80 */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x1E1C);
 return result;
}


/* Function: __floatsidf @ 0x1FA4 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x1E1C);
 return result;
}


/* Function: __extendsfdf2 @ 0x1FCC */
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
 JUMPOUT(0x1E1C);
 }
 return result;
}


/* Function: __floatundidf @ 0x2014 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x2044);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __fixdfsi @ 0x2088 */
unsigned int _fixdfsi(unsigned int a1, int a2)
{
 int v2; // r2
 bool v3; // cf
 int v5; // r2
 unsigned int result; // r0
 unsigned int v4; // local variable

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


/* Function: .term_proc @ 0x20E4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x1308C */

/* FAILED to decompile: __imp___cxa_finalize @ 0x13090 */

/* FAILED to decompile: __imp_printf @ 0x13094 */

/* FAILED to decompile: __imp_strlen @ 0x13098 */

/* FAILED to decompile: __imp_memset @ 0x1309C */

/* FAILED to decompile: __imp_abort @ 0x130A0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x130A8 */

/* Total functions decompiled: 89, failed: 7 */
