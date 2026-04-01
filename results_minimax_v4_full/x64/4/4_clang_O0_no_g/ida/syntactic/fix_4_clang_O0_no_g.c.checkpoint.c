#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

// Opaque handle storage - defined as global variables
void *ret_opaque_handle_handle1;
void *ret_opaque_handle_handle2;

// Forward declarations
long long callback_func(int a1);

extern void (*_gmon_start__)(void);

// Format strings
const char *format = "Calling Conventions Test\n";
const char *aCallL206 = "CALL-L2-01: %d\n";
const char *aCallL207 = "CALL-L2-02: %d\n";
const char *aCallL208 = "CALL-L2-03: %d\n";
const char *aCallL209 = "CALL-L2-04: %d\n";
const char *aCallL210 = "CALL-L2-05: %d\n";
const char *aCallL211 = "CALL-L2-06: %d\n";
const char *asc_31EB = "Parameter Passing Test\n";
const char *asc_32C8 = "Return Values Test\n";
const char *aRetL101D = "RET-L1-01: %d\n";
const char *aRetL102D = "RET-L1-02: %d\n";
const char *aRetL103D = "RET-L1-03: %d\n";
const char *aRetL104D = "RET-L1-04: %d\n";
const char *aRetL201D = "RET-L2-01: %d\n";
const char *aRetL202D = "RET-L2-02: %d\n";
const char *aRetL301D = "RET-L3-01: %d\n";
const char *aRetL302D = "RET-L3-02: %d\n";
const char *aRetL303D = "RET-L3-03: %d\n";

#define HIDWORD(x) ((int32_t)((uint64_t)(x) >> 32))
#define __PAIR64__(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))

/* CRT stub function init_proc removed - references CRT symbol _gmon_start__ */


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* Empty function - was a jump target */
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x1160 */
long long cdecl_func(int a1, int a2)
{
 return (unsigned int)(a2 + a1);
}


/* Function: call_cdecl @ 0x1180 */
long long call_cdecl()
{
 return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x11A0 */
long long stdcall_func(int a1, int a2)
{
 return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x11C0 */
long long call_stdcall()
{
 return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x11E0 */
long long fastcall_func(int a1, int a2, int a3)
{
 return (unsigned int)(a3 + a2 + a1);
}


/* Function: call_fastcall @ 0x1200 */
long long call_fastcall()
{
 return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x1220 */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1230 */
long long arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a5 + a4 + a3 + a2 + a1);
}


/* Function: call_arm_aapcs @ 0x1260 */
long long call_arm_aapcs()
{
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x1290 */
long long mips_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a4 + a3 + a2 + a1);
}


/* Function: call_mips @ 0x12B0 */
long long call_mips()
{
 return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x12D0 */
long long amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a6 + a5 + a4 + a3 + a2 + a1);
}


/* Function: call_amd64_sysv @ 0x1300 */
long long call_amd64_sysv()
{
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1330 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a5 + a4 + a3 + a2 + a1);
}


/* Function: call_ms_x64 @ 0x1360 */
long long call_ms_x64()
{
 return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x1390 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a4 + a3 + a2 + a1);
}


/* Function: call_vectorcall @ 0x13B0 */
long long call_vectorcall()
{
 return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x13D0 */
long long mixed_conventions_test()
{
 int v1; // [rsp+Ch] [rbp-4h]
 int v2; // [rsp+Ch] [rbp-4h]

 v1 = cdecl_func(1, 2);
 v2 = v1 + stdcall_func(3, 4);
 return v2 + (unsigned int)fastcall_func(5, 6, 7);
}


/* Function: varargs_func @ 0x1430 */
long long varargs_func(int a1, ...)
{
 unsigned int *overflow_arg_area; // rax
 int i; // [rsp+D0h] [rbp-28h]
 unsigned int v4; // [rsp+D4h] [rbp-24h]
 va_list va; // [rsp+D8h] [rbp-20h] BYREF
 int v6; // [rsp+F4h] [rbp-4h]

 va_start(va, a1);
 v6 = a1;
 v4 = 0;
 for ( i = 0; i < v6; ++i )
 {
 if ( va[0].gp_offset > 0x28 )
 {
 overflow_arg_area = va[0].overflow_arg_area;
 va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
 }
 else
 {
 overflow_arg_area = (char *)va[0].reg_save_area + (int)va[0].gp_offset;
 va[0].gp_offset += 8;
 }
 v4 += *overflow_arg_area;
 }
 return v4;
}


/* Function: func_no_args @ 0x1560 */
long long func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1570 */
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return (unsigned int)(a8 + a7 + a6 + a5 + a4 + a3 + a2 + a1);
}


/* Function: func_mixed_args @ 0x15B0 */
long long func_mixed_args(int a1, const char *a2, int a3, double a4)
{
 int v5; // [rsp+0h] [rbp-30h]

 if ( a2 )
 v5 = strlen(a2);
 else
 v5 = 0;
 return (unsigned int)(int)((double)(v5 + a1) + a4 + (double)a3);
}


/* Function: func_struct_byval @ 0x1620 */
long long func_struct_byval(long long a1, long long a2, long long a3, long long a4, long long a5, long long a6, char a7)
{
 int i; // [rsp+Ch] [rbp-Ch]
 long long v9; // [rsp+10h] [rbp-8h]

 v9 = 0;
 for ( i = 0; i < 16; ++i )
 v9 += *((unsigned long long *)&a7 + i);
 return (unsigned int)v9;
}


/* Function: func_struct_byptr @ 0x1680 */
long long func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return (unsigned int)(a1[1] * *a1);
 else
 return (unsigned int)-1;
}


/* Function: test_calling_conventions @ 0x16C0 */
int test_calling_conventions()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 long long v10; // rsi
 long long v11; // rdx
 long long v12; // rcx
 long long v13; // r8
 long long v14; // r9
 unsigned int v16; // [rsp+8Ch] [rbp-B4h]
 long long v17; // [rsp+90h] [rbp-B0h] BYREF
 unsigned int v18; // [rsp+98h] [rbp-A8h]
 int i; // [rsp+9Ch] [rbp-A4h]
 __int128 v20; // [rsp+A0h] [rbp-A0h]
 unsigned int v21; // [rsp+124h] [rbp-1Ch]
 const char *v22; // [rsp+128h] [rbp-18h]
 unsigned int v23; // [rsp+134h] [rbp-Ch]
 unsigned int v24; // [rsp+138h] [rbp-8h]
 unsigned int v25; // [rsp+13Ch] [rbp-4h]

 printf(format);
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
 v25 = varargs_func(5, 1, 2, 3, 4);
 printf(aCallL206, v25);
 v24 = func_no_args();
 printf(aCallL207, v24);
 v23 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 printf(aCallL208, v23);
 v22 = "test";
 v21 = func_mixed_args(10, "test", 100, 3.14);
 v10 = v21;
 printf(aCallL209, v21);
 for ( i = 0; i < 16; ++i )
 {
 v12 = i + 1;
 *((unsigned long long *)&v20 + i) = v12;
 }
 v18 = func_struct_byval((long long)aCallL209, v10, v11, v12, v13, v14, v20);
 printf(aCallL210, v18);
 v17 = 0xA00000005LL;
 v16 = func_struct_byptr(&v17);
 return printf(aCallL211, v16);
}


/* Function: param_by_value_int @ 0x1970 */
long long param_by_value_int(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x1990 */
long long call_by_value_int()
{
 return (unsigned int)param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x19C0 */
long long param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1A00 */
long long call_by_value_ptr()
{
 int v1; // [rsp+Ch] [rbp-14h]
 int v2; // [rsp+1Ch] [rbp-4h] BYREF

 v2 = 5;
 v1 = param_by_value_ptr(&v2);
 return (unsigned int)(v1 + v2);
}


/* Function: param_array_decay @ 0x1A30 */
long long param_array_decay()
{
 return 8;
}


/* Function: call_array_decay @ 0x1A50 */
long long call_array_decay()
{
 unsigned char s[48]; // [rsp+0h] [rbp-30h] BYREF

 memset(s, 0, 0x28u);
 return param_array_decay(s, 10);
}


/* Function: param_string @ 0x1A80 */
long long param_string(char *a1)
{
 return (unsigned int)(a1[1] + *a1);
}


/* Function: call_string_param @ 0x1AA0 */
long long call_string_param()
{
 return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1AC0 */
long long param_ptr_array(long long a1, int a2)
{
 int i; // [rsp+0h] [rbp-14h]
 unsigned int v4; // [rsp+4h] [rbp-10h]

 v4 = 0;
 for ( i = 0; i < a2; ++i )
 v4 += **(char **)(a1 + 8LL * i);
 return v4;
}


/* Function: call_ptr_array @ 0x1B10 */
long long call_ptr_array()
{
 const char *v1[4]; // [rsp+0h] [rbp-20h] BYREF

 v1[0] = "abc";
 v1[1] = "def";
 v1[2] = "ghi";
 return param_ptr_array((long long)v1, 3);
}


/* Function: param_varargs @ 0x1B50 */
long long param_varargs(int a1, ...)
{
 unsigned int *overflow_arg_area; // rax
 int i; // [rsp+D0h] [rbp-28h]
 unsigned int v4; // [rsp+D4h] [rbp-24h]
 va_list va; // [rsp+D8h] [rbp-20h] BYREF
 int v6; // [rsp+F4h] [rbp-4h]

 va_start(va, a1);
 v6 = a1;
 v4 = 0;
 for ( i = 0; i < v6; ++i )
 {
 if ( va[0].gp_offset > 0x28 )
 {
 overflow_arg_area = va[0].overflow_arg_area;
 va[0].overflow_arg_area = (char *)va[0].overflow_arg_area + 8;
 }
 else
 {
 overflow_arg_area = (char *)va[0].reg_save_area + (int)va[0].gp_offset;
 va[0].gp_offset += 8;
 }
 v4 += *overflow_arg_area;
 }
 return v4;
}


/* Function: call_varargs_param @ 0x1C80 */
long long call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1CB0 */
long long param_func_ptr(unsigned int ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x1CE0 */
long long call_func_ptr_param()
{
 return param_func_ptr((unsigned int ( *)(unsigned long long))callback_func, 5u);
}


/* Function: callback_func @ 0x1D00 */
long long callback_func(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: param_double_ptr @ 0x1D10 */
long long param_double_ptr(unsigned int **a1, int a2)
{
 if ( a1 && *a1 )
 {
 **a1 = a2;
 *a1 = 0;
 return 1;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_double_ptr @ 0x1D70 */
long long call_double_ptr()
{
 int *v1; // [rsp+10h] [rbp-10h] BYREF
 int v2; // [rsp+1Ch] [rbp-4h] BYREF

 v2 = 10;
 v1 = &v2;
 param_double_ptr(&v1, 20);
 return (unsigned int)(v1 == 0) + v2;
}


/* Function: param_complex_cast @ 0x1DC0 */
long long param_complex_cast(unsigned int *a1, int a2)
{
 if ( a2 )
 {
 if ( a2 == 1 )
 return a1[1] + *a1;
 else
 return (unsigned int)-1;
 }
 else
 {
 return *a1;
 }
}


/* Function: call_complex_cast @ 0x1E40 */
long long call_complex_cast()
{
 long long v1; // [rsp+0h] [rbp-10h] BYREF
 unsigned int v2; // [rsp+Ch] [rbp-4h] BYREF

 v2 = 305419896;
 v1 = 0xC800000064LL;
 param_complex_cast((unsigned int *)&v1, 1);
 return param_complex_cast(&v2, 0);
}


/* Function: param_struct_byval @ 0x1E80 */
long long param_struct_byval(
 long long a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 int a7,
 long long a8,
 long long a9,
 long long a10,
 long long a11,
 long long a12,
 long long a13,
 long long a14)
{
 return (unsigned int)(HIDWORD(a14) + a7);
}


/* Function: call_struct_byval @ 0x1E90 */
long long call_struct_byval(long long a1, long long a2, long long a3, long long a4, long long a5, long long a6)
{
 int i; // [rsp+4Ch] [rbp-44h]
 int v8[2]; // [rsp+50h] [rbp-40h]
 long long v9; // [rsp+58h] [rbp-38h]
 long long v10; // [rsp+60h] [rbp-30h]
 long long v11; // [rsp+68h] [rbp-28h]
 long long v12; // [rsp+70h] [rbp-20h]
 long long v13; // [rsp+78h] [rbp-18h]
 long long v14; // [rsp+80h] [rbp-10h]
 long long v15; // [rsp+88h] [rbp-8h]

 for ( i = 0; i < 16; ++i )
 {
 a4 = (unsigned int)i;
 v8[i] = i;
 }
 return param_struct_byval(a1, a2, a3, a4, a5, a6, v8[0], v9, v10, v11, v12, v13, v14, v15);
}


/* Function: param_order_dep @ 0x1F00 */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a2 + a1);
}


/* Function: call_order_dep @ 0x1F20 */
long long call_order_dep()
{
 return param_order_dep(1, 2);
}


/* Function: test_parameter_passing @ 0x1F50 */
int test_parameter_passing()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 unsigned int v8; // eax
 long long v9; // rsi
 long long v10; // rdx
 long long v11; // rcx
 long long v12; // r8
 long long v13; // r9
 int v14; // eax
 int v15; // eax

 printf(asc_31EB);
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
 v9 = v8;
 printf("PARAM-L3-03: %d\n", v8);
 v14 = call_struct_byval((long long)"PARAM-L3-03: %d\n", v9, v10, v11, v12, v13);
 printf("PARAM-L3-04: %d\n", v14);
 v15 = call_order_dep();
 return printf("PARAM-L3-05: %d\n", v15);
}


/* Function: ret_basic_type @ 0x2050 */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x2060 */
long long call_ret_basic()
{
 return (unsigned int)ret_basic_type(21);
}


/* Function: ret_pointer @ 0x2090 */
long long ret_pointer(long long a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x20B0 */
long long call_ret_pointer()
{
 long long v1; // [rsp+14h] [rbp-Ch] BYREF
 int v2; // [rsp+1Ch] [rbp-4h]

 v1 = 0x140000000ALL;
 v2 = 30;
 return *(unsigned int *)ret_pointer((long long)&v1);
}


/* Function: ret_small_struct @ 0x20F0 */
unsigned long long ret_small_struct(unsigned int a1, unsigned int a2)
{
 return __PAIR64__(a2, a1);
}


/* Function: call_ret_small_struct @ 0x2110 */
long long call_ret_small_struct()
{
 unsigned long long v1; // [rsp+8h] [rbp-8h]

 v1 = ret_small_struct(3u, 4u);
 return (unsigned int)(HIDWORD(v1) + v1);
}


/* Function: ret_large_struct @ 0x2140 */
long long ret_large_struct(long long a1, int a2)
{
 int i; // [rsp+10h] [rbp-8h]

 for ( i = 0; i < 16; ++i )
 *(unsigned int *)(a1 + 4LL * i) = i + a2;
 return a1;
}


/* Function: call_ret_large_struct @ 0x2190 */
long long call_ret_large_struct()
{
 unsigned int v1[16]; // [rsp+0h] [rbp-40h] BYREF

 ret_large_struct((long long)v1, 100);
 return (unsigned int)(v1[15] + v1[0]);
}


/* Function: func_a @ 0x21C0 */
long long func_a(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x21D0 */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: ret_func_ptr @ 0x21E0 */
long long ( * ret_func_ptr(int a1))(int a1)
{
 long long ( *result)(int); // rax

 result = func_a;
 if ( a1 )
 return func_b;
 return result;
}


/* Function: call_ret_func_ptr @ 0x2210 */
long long call_ret_func_ptr()
{
 long long ( *v1)(int); // [rsp+8h] [rbp-8h]

 v1 = ret_func_ptr(1);
 return v1(5);
}


/* Function: ret_opaque_handle @ 0x2240 */
void * ret_opaque_handle(int a1)
{
 void *result; // rax

 result = &ret_opaque_handle_handle2;
 if ( !a1 )
 return &ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x2270 */
long long call_ret_opaque()
{
 return *(unsigned int *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x2290 */
long long ret_complex_expr(int a1, int a2, int a3)
{
 if ( a1 <= a2 )
 return (unsigned int)(a3 + 10);
 else
 return (unsigned int)(2 * a3);
}


/* Function: call_ret_complex_expr @ 0x22D0 */
long long call_ret_complex_expr()
{
 int v1; // [rsp+Ch] [rbp-4h]

 v1 = ret_complex_expr(5, 3, 10);
 return (unsigned int)ret_complex_expr(3, 5, 10) + v1;
}


/* Function: ret_multi_branch @ 0x2320 */
long long ret_multi_branch(int a1)
{
 if ( a1 )
 {
 if ( a1 == 1 )
 {
 return 20;
 }
 else if ( a1 == 2 )
 {
 return 30;
 }
 else
 {
 return (unsigned int)-1;
 }
 }
 else
 {
 return 10;
 }
}


/* Function: call_ret_multi_branch @ 0x2390 */
long long call_ret_multi_branch()
{
 int v1; // [rsp+Ch] [rbp-4h]
 int v2; // [rsp+Ch] [rbp-4h]

 v1 = ret_multi_branch(0);
 v2 = v1 + ret_multi_branch(1);
 return v2 + (unsigned int)ret_multi_branch(2);
}


/* Function: ret_void @ 0x23E0 */
unsigned int * ret_void(int a1, unsigned int *a2)
{
 unsigned int *result; // rax

 result = a2;
 *a2 = 3 * a1;
 return result;
}


/* Function: call_ret_void @ 0x2400 */
long long call_ret_void()
{
 unsigned int v1; // [rsp+Ch] [rbp-4h] BYREF

 ret_void(7, &v1);
 return v1;
}


/* Function: test_return_values @ 0x2420 */
int test_return_values()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax

 printf(asc_32C8);
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


/* Function: main @ 0x2500 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x2528 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6060 */

/* FAILED to decompile: strlen @ 0x6068 */

/* FAILED to decompile: printf @ 0x6070 */

/* FAILED to decompile: memset @ 0x6078 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6080 */

/* FAILED to decompile: __gmon_start__ @ 0x6090 */

/* Total functions decompiled: 79, failed: 6 */
