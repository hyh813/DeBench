/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/4/4_clang_O0_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/* Global string constants */
const char *asc_1DC0 = "=== Testing Calling Conventions ===\n";

/* Global data references */
const unsigned long long off_12DC0[3] = {0x6867660000000000ULL, 0x0000000000000000ULL, 0x0000000000000000ULL};

/* Handle variables for ret_opaque_handle */
unsigned int ret_opaque_handle_handle1 = 42;
unsigned int ret_opaque_handle_handle2 = 100;

/* Macros for 64-bit operations */
#define __PAIR64__(high, low) (((unsigned long long)(high) << 32) | (unsigned int)(low))
#define HIDWORD(x) ((unsigned int)((x) >> 32))

/* Forward declarations */
long long callback_func(int a1);
const char *aCallL206 = "CALL-L2-06: %d\n";
const char *aCallL207 = "CALL-L2-07: %d\n";
const char *aCallL208 = "CALL-L2-08: %d\n";
const char *aCallL209 = "CALL-L2-09: %d\n";
const char *aCallL210 = "CALL-L2-10: %d\n";
const char *aCallL211 = "CALL-L2-11: %d\n";
const char *asc_1F8B = "=== Testing Parameter Passing ===\n";
const char *asc_2068 = "=== Testing Return Values ===\n";
const char *aRetL101D = "RET-L1-01: %d\n";
const char *aRetL102D = "RET-L1-02: %d\n";
const char *aRetL103D = "RET-L1-03: %d\n";
const char *aRetL104D = "RET-L1-04: %d\n";
const char *aRetL201D = "RET-L2-01: %d\n";
const char *aRetL202D = "RET-L2-02: %d\n";
const char *aRetL301D = "RET-L3-01: %d\n";
const char *aRetL302D = "RET-L3-02: %d\n";
const char *aRetL303D = "RET-L3-03: %d\n";

/* Function: .init_proc @ 0x6B0 */
long long call_weak_fn(void);
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_6D0 @ 0x6D0 */
void sub_6D0()
{
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn - providing stub definition */
long long call_weak_fn(void)
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x894 */
long long cdecl_func(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x8B4 */
long long call_cdecl()
{
 return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x8D0 */
long long stdcall_func(int a1, int a2)
{
 return (unsigned int)(a1 * a2);
}


/* Function: call_stdcall @ 0x8F0 */
long long call_stdcall()
{
 return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x90C */
long long fastcall_func(int a1, int a2, int a3)
{
 return (unsigned int)(a1 + a2 + a3);
}


/* Function: call_fastcall @ 0x938 */
long long call_fastcall()
{
 return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x958 */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x960 */
long long arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5);
}


/* Function: call_arm_aapcs @ 0x9A4 */
long long call_arm_aapcs()
{
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x9CC */
long long mips_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a1 + a2 + a3 + a4);
}


/* Function: call_mips @ 0xA04 */
long long call_mips()
{
 return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0xA28 */
long long amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5 + a6);
}


/* Function: call_amd64_sysv @ 0xA78 */
long long call_amd64_sysv()
{
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0xAA4 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5);
}


/* Function: call_ms_x64 @ 0xAE8 */
long long call_ms_x64()
{
 return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0xB10 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a1 + a2 + a3 + a4);
}


/* Function: call_vectorcall @ 0xB48 */
long long call_vectorcall()
{
 return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0xB6C */
long long mixed_conventions_test()
{
 int v1; // [xsp+Ch] [xbp-4h]
 int v2; // [xsp+Ch] [xbp-4h]

 v1 = cdecl_func(1, 2);
 v2 = v1 + stdcall_func(3, 4);
 return v2 + (unsigned int)fastcall_func(5, 6, 7);
}


/* Function: varargs_func @ 0xBD8 */
long long varargs_func(int a1, ...)
{
 int i; // [xsp+E0h] [xbp-40h]
 unsigned int v6; // [xsp+E4h] [xbp-3Ch]
 va_list va; // [xsp+E8h] [xbp-38h] BYREF

 va_start(va, a1);
 v6 = 0;
 for ( i = 0; i < a1; ++i )
 {
 v6 += va_arg(va, unsigned int);
 }
 va_end(va);
 return v6;
}


/* Function: func_no_args @ 0xD10 */
long long func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0xD18 */
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return (unsigned int)(a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8);
}


/* Function: func_mixed_args @ 0xD80 */
long long func_mixed_args(int a1, const char *a2, long long a3, double a4)
{
 int v5; // [xsp+0h] [xbp-30h]

 if ( a2 )
 v5 = strlen(a2);
 else
 v5 = 0;
 return (unsigned int)(int)((double)(a1 + v5) + a4 + (double)a3);
}


/* Function: func_struct_byval @ 0xE00 */
long long func_struct_byval(long long a1)
{
 int i; // [xsp+14h] [xbp-Ch]
 long long v3; // [xsp+18h] [xbp-8h]

 v3 = 0;
 for ( i = 0; i < 16; ++i )
 v3 += *(unsigned long long *)(a1 + 8LL * i);
 return (unsigned int)v3;
}


/* Function: func_struct_byptr @ 0xE60 */
long long func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return (unsigned int)(*a1 * a1[1]);
 else
 return (unsigned int)-1;
}


/* Function: test_calling_conventions @ 0xEA8 */
long long test_calling_conventions()
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
 unsigned int v11; // [xsp+2Ch] [xbp-134h]
 long long v12; // [xsp+30h] [xbp-130h] BYREF
 unsigned char dest[128]; // [xsp+38h] [xbp-128h] BYREF
 unsigned int v14; // [xsp+B8h] [xbp-A8h]
 int i; // [xsp+BCh] [xbp-A4h]
 unsigned long long src[16]; // [xsp+C0h] [xbp-A0h] BYREF
 unsigned int v17; // [xsp+144h] [xbp-1Ch]
 const char *v18; // [xsp+148h] [xbp-18h]
 unsigned int v19; // [xsp+154h] [xbp-Ch]
 unsigned int v20; // [xsp+158h] [xbp-8h]
 unsigned int v21; // [xsp+15Ch] [xbp-4h]

 printf(asc_1DC0);
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
 v21 = varargs_func(5);
 printf(aCallL206, v21);
 v20 = func_no_args();
 printf(aCallL207, v20);
 v19 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 printf(aCallL208, v19);
 v18 = "test";
 v17 = func_mixed_args(10, "test", 100, 3.14);
 printf(aCallL209, v17);
 for ( i = 0; i < 16; ++i )
 src[i] = i + 1;
 memcpy(dest, src, sizeof(dest));
 v14 = func_struct_byval((long long)dest);
 printf(aCallL210, v14);
 v12 = 0xA00000005LL;
 v11 = func_struct_byptr((unsigned int *)&v12);
 return printf(aCallL211, v11);
}


/* Function: param_by_value_int @ 0x1118 */
long long param_by_value_int(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x1138 */
long long call_by_value_int()
{
 return (unsigned int)param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x1170 */
long long param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x11A8 */
long long call_by_value_ptr()
{
 int v1; // [xsp+Ch] [xbp-14h]
 int v2; // [xsp+1Ch] [xbp-4h] BYREF

 v2 = 5;
 v1 = param_by_value_ptr(&v2);
 return (unsigned int)(v2 + v1);
}


/* Function: param_array_decay @ 0x11E8 */
long long param_array_decay()
{
 return 8;
}


/* Function: call_array_decay @ 0x1200 */
long long call_array_decay()
{
 unsigned char s[40]; // [xsp+8h] [xbp-28h] BYREF

 memset(s, 0, sizeof(s));
 return param_array_decay();
}


/* Function: param_string @ 0x1238 */
long long param_string(unsigned char *a1)
{
 return *a1 + (unsigned int)a1[1];
}


/* Function: call_string_param @ 0x125C */
long long call_string_param()
{
 return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1278 */
long long param_ptr_array(long long a1, int a2)
{
 int i; // [xsp+Ch] [xbp-14h]
 unsigned int v4; // [xsp+10h] [xbp-10h]

 v4 = 0;
 for ( i = 0; i < a2; ++i )
 v4 += **(unsigned char **)(a1 + 8LL * i);
 return v4;
}


/* Function: call_ptr_array @ 0x12E0 */
long long call_ptr_array()
{
 __int128 v1; // [xsp+0h] [xbp-20h] BYREF
 const char *v2; // [xsp+10h] [xbp-10h]

 v1 = *(unsigned long long *)off_12DC0;
 v2 = "ghi";
 return param_ptr_array((long long)&v1, 3);
}


/* Function: param_varargs @ 0x131C */
long long param_varargs(int a1, ...)
{
 int i; // [xsp+E0h] [xbp-40h]
 unsigned int v6; // [xsp+E4h] [xbp-3Ch]
 va_list va; // [xsp+E8h] [xbp-38h] BYREF

 va_start(va, a1);
 v6 = 0;
 for ( i = 0; i < a1; ++i )
 {
 v6 += va_arg(va, unsigned int);
 }
 va_end(va);
 return v6;
}


/* Function: call_varargs_param @ 0x1454 */
long long call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x147C */
long long param_func_ptr(unsigned int ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x14AC */
long long call_func_ptr_param()
{
 return param_func_ptr((unsigned int ( *)(unsigned long long))callback_func, 5u);
}


/* Function: callback_func @ 0x14CC */
long long callback_func(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: param_double_ptr @ 0x14E4 */
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


/* Function: call_double_ptr @ 0x1548 */
long long call_double_ptr()
{
 int *v1; // [xsp+10h] [xbp-10h] BYREF
 int v2; // [xsp+1Ch] [xbp-4h] BYREF

 v2 = 10;
 v1 = &v2;
 param_double_ptr((unsigned int **)&v1, 20);
 return v2 + (unsigned int)(v1 == 0);
}


/* Function: param_complex_cast @ 0x1598 */
long long param_complex_cast(unsigned int *a1, int a2)
{
 if ( a2 )
 {
 if ( a2 == 1 )
 return *a1 + a1[1];
 else
 return (unsigned int)-1;
 }
 else
 {
 return *a1;
 }
}


/* Function: call_complex_cast @ 0x1628 */
long long call_complex_cast()
{
 long long v1; // [xsp+10h] [xbp-10h] BYREF
 unsigned int v2; // [xsp+1Ch] [xbp-4h] BYREF

 v2 = 305419896;
 v1 = 0xC800000064LL;
 param_complex_cast((unsigned int *)&v1, 1);
 return param_complex_cast(&v2, 0);
}


/* Function: param_struct_byval @ 0x167C */
long long param_struct_byval(unsigned int *a1)
{
 return (unsigned int)(*a1 + a1[15]);
}


/* Function: call_struct_byval @ 0x168C */
long long call_struct_byval()
{
 unsigned int dest[16]; // [xsp+Ch] [xbp-84h] BYREF
 int i; // [xsp+4Ch] [xbp-44h]
 unsigned int src[16]; // [xsp+50h] [xbp-40h] BYREF

 for ( i = 0; i < 16; ++i )
 src[i] = i;
 memcpy(dest, src, sizeof(dest));
 return param_struct_byval(dest);
}


/* Function: param_order_dep @ 0x16FC */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x171C */
long long call_order_dep()
{
 return param_order_dep(1, 2);
}


/* Function: test_parameter_passing @ 0x1754 */
long long test_parameter_passing()
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
 int v10; // w0

 printf(asc_1F8B);
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


/* Function: ret_basic_type @ 0x184C */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x1864 */
long long call_ret_basic()
{
 return (unsigned int)ret_basic_type(21);
}


/* Function: ret_pointer @ 0x1894 */
long long ret_pointer(long long a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x18AC */
long long call_ret_pointer()
{
 long long v1; // [xsp+10h] [xbp-10h] BYREF
 int v2; // [xsp+18h] [xbp-8h]

 v1 = 0x140000000ALL;
 v2 = 30;
 return *(unsigned int *)ret_pointer((long long)&v1);
}


/* Function: ret_small_struct @ 0x18F0 */
unsigned long long ret_small_struct(unsigned int a1, unsigned int a2)
{
 return __PAIR64__(a2, a1);
}


/* Function: call_ret_small_struct @ 0x1918 */
long long call_ret_small_struct()
{
 unsigned long long v1; // [xsp+8h] [xbp-8h]

 v1 = ret_small_struct(3u, 4u);
 return (unsigned int)(v1 + HIDWORD(v1));
}


/* Function: ret_large_struct @ 0x194C */
long long ret_large_struct(long long result, long long a2)
{
 int i; // [xsp+8h] [xbp-8h]

 for ( i = 0; i < 16; ++i )
 *(unsigned int *)(a2 + 4LL * i) = result + i;
 return result;
}


/* Function: call_ret_large_struct @ 0x19A4 */
long long call_ret_large_struct()
{
 unsigned int v1[16]; // [xsp+0h] [xbp-40h] BYREF

 ret_large_struct(100, (long long)v1);
 return (unsigned int)(v1[0] + v1[15]);
}


/* Function: func_a @ 0x19D4 */
long long func_a(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x19EC */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: ret_func_ptr @ 0x1A04 */
long long ( * ret_func_ptr(int a1))(int a1)
{
 if ( a1 )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0x1A30 */
long long call_ret_func_ptr()
{
 long long ( *v1)(int); // [xsp+8h] [xbp-8h]

 v1 = ret_func_ptr(1);
 return v1(5);
}


/* Function: ret_opaque_handle @ 0x1A60 */
void * ret_opaque_handle(int a1)
{
 if ( a1 )
 return &ret_opaque_handle_handle2;
 else
 return &ret_opaque_handle_handle1;
}


/* Function: call_ret_opaque @ 0x1A8C */
long long call_ret_opaque()
{
 return *(unsigned int *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x1AB8 */
long long ret_complex_expr(int a1, int a2, int a3)
{
 if ( a1 <= a2 )
 return (unsigned int)(a3 + 10);
 else
 return (unsigned int)(2 * a3);
}


/* Function: call_ret_complex_expr @ 0x1B08 */
long long call_ret_complex_expr()
{
 int v1; // [xsp+1Ch] [xbp-4h]

 v1 = ret_complex_expr(5, 3, 10);
 return v1 + (unsigned int)ret_complex_expr(3, 5, 10);
}


/* Function: ret_multi_branch @ 0x1B64 */
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


/* Function: call_ret_multi_branch @ 0x1BD8 */
long long call_ret_multi_branch()
{
 int v1; // [xsp+Ch] [xbp-4h]
 int v2; // [xsp+Ch] [xbp-4h]

 v1 = ret_multi_branch(0);
 v2 = v1 + ret_multi_branch(1);
 return v2 + (unsigned int)ret_multi_branch(2);
}


/* Function: ret_void @ 0x1C34 */
long long ret_void(long long result, unsigned int *a2)
{
 *a2 = 3 * result;
 return result;
}


/* Function: call_ret_void @ 0x1C5C */
long long call_ret_void()
{
 unsigned int v1; // [xsp+Ch] [xbp-4h] BYREF

 ret_void(7, &v1);
 return v1;
}


/* Function: test_return_values @ 0x1C84 */
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

 printf(asc_2068);
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


/* Function: main @ 0x1D54 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x1D88 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x130B8 */

/* FAILED to decompile: strlen @ 0x130C0 */

/* FAILED to decompile: __libc_start_main @ 0x130C8 */

/* FAILED to decompile: __cxa_finalize @ 0x130D0 */

/* FAILED to decompile: memset @ 0x130D8 */

/* FAILED to decompile: abort @ 0x130E0 */

/* FAILED to decompile: printf @ 0x130E8 */

/* FAILED to decompile: __gmon_start__ @ 0x130F8 */

/* Total functions decompiled: 80, failed: 8 */
