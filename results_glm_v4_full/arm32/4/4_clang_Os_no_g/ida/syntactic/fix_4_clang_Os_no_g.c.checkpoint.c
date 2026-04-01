/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int bool;
#define true 1
#define false 0

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* Global variables for ret_opaque_handle function */
static int *ret_opaque_handle_handle1[1] = {(int *)10};
static int *ret_opaque_handle_handle2[1] = {(int *)20};

/* Helper macro for carry flag detection */
#define __CFADD__(a, b) (((a) + (b) < (a)) || ((a) + (b) < (b)))

/* Decompilation artifact macro for control flow jumps */
#define JUMPOUT(x) ((void)0)

/* Helper macros for 64-bit value access */
#define HIDWORD(x) (((uint32_t*)&(x))[1])
#define LODWORD(x) (*(uint32_t*)&(x))

/* Helper macros for decompilation artifacts */
#define COERCE_DOUBLE(x) ((double)(x))
#define __PAIR64__(low, high) (((uint64_t)(high) << 32) | (uint32_t)(low))

/* String constant */
#define asc_178B "Calling Conventions Test"
#define aCallL206 "CALL-L2-01: %d\n"
#define aCallL207 "CALL-L2-02: %d\n"
#define aCallL208 "CALL-L2-03: %d\n"
#define aCallL209 "CALL-L2-04: %d\n"
#define aCallL210 "CALL-L2-05: %d, %p, %d\n"
#define aCallL211 "CALL-L2-06: %d\n"
#define asc_17AC "Parameter Passing Test"
#define aRetL101D "RET-L1-01: %d\n"
#define aRetL102D "RET-L1-02: %d\n"
#define aRetL103D "RET-L1-03: %d\n"
#define aRetL104D "RET-L1-04: %d\n"
#define aRetL201D "RET-L2-01: %d\n"
#define aRetL202D "RET-L2-02: %d\n"
#define aRetL301D "RET-L3-01: %d\n"
#define aRetL302D "RET-L3-02: %d\n"
#define aRetL303D "RET-L3-03: %d\n"
#define asc_17CD "Return Values Test"

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/4/4_clang_Os_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x3E4 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_3F0 @ 0x3F0 */
void sub_3F0()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */
int call_weak_fn()
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x5C0 */
int cdecl_func(int a1, int a2)
{
 return a2 + a1;
}


/* Function: call_cdecl @ 0x5C8 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x5D0 */
int stdcall_func(int a1, int a2)
{
 return a2 * a1;
}


/* Function: call_stdcall @ 0x5DC */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x5E4 */
int fastcall_func(int a1, int a2, int a3)
{
 return a2 + a1 + a3;
}


/* Function: call_fastcall @ 0x5F0 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x5F8 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x600 */
int arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return a2 + a1 + a3 + a4 + a5;
}


/* Function: call_arm_aapcs @ 0x618 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x620 */
int mips_func(int a1, int a2, int a3, int a4)
{
 return a2 + a1 + a3 + a4;
}


/* Function: call_mips @ 0x630 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x638 */
int amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return a2 + a1 + a3 + a4 + a5 + a6;
}


/* Function: call_amd64_sysv @ 0x658 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x660 */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a2 + a1 + a3 + a4 + a5;
}


/* Function: call_ms_x64 @ 0x678 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x680 */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a2 + a1 + a3 + a4;
}


/* Function: call_vectorcall @ 0x690 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x698 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x6A0 */
int varargs_func(int a1, int a2, ...)
{
 va_list v2; // r2
 int v3; // r1
 int v4; // r3
 va_list va; // [sp+8h] [bp-8h] BYREF

 va_start(va, a2);
 if ( a1 < 1 )
 return 0;
 va_copy(v2, va);
 v3 = 0;
 do
 {
 --a1;
 v4 = va_arg(v2, int);
 v3 += v4;
 }
 while ( a1 );
 va_end(v2);
 return v3;
}


/* Function: func_no_args @ 0x6F0 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x6F8 */
int func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return a2 + a1 + a3 + a4 + a5 + a6 + a7 + a8;
}


/* Function: func_mixed_args @ 0x728 */
int func_mixed_args(int a1, char *s, unsigned int a3, unsigned int a4, long long a5)
{
 size_t v8; // r0

 if ( s )
 v8 = strlen(s);
 else
 v8 = 0;
 return (int)((double)(int)(v8 + a1) + COERCE_DOUBLE(__PAIR64__(a4, a3)) + (double)a5);
}


/* Function: func_struct_byval @ 0x7A0 */
int func_struct_byval(int a1, int a2, int a3, int a4)
{
 int v4; // r1
 int result; // r0
 int v6; // r3
 unsigned int *v7; // r2
 int v8; // lr
 bool v9; // cf
 unsigned int v10[4]; // [sp+8h] [bp-10h] BYREF

 v10[0] = a1;
 v10[1] = a2;
 v10[2] = a3;
 v10[3] = a4;
 v4 = 0;
 result = 0;
 v6 = 0;
 do
 {
 v7 = &v10[v4];
 v8 = v10[v4];
 v4 += 2;
 v9 = __CFADD__(v8, result);
 result += v8;
 v6 += v9 + v7[1];
 }
 while ( v4 != 32 );
 return result;
}


/* Function: func_struct_byptr @ 0x7EC */
int func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return a1[1] * *a1;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x800 */
int test_calling_conventions()
{
 int v0; // r5
 int v1; // r0
 int v2; // r0
 int *v3; // r0
 int v4; // r0
 int v5; // r1
 int v6; // r3
 unsigned char *v7; // r6
 int v8; // r5
 bool v9; // cf
 unsigned char v11[144]; // [sp+8h] [bp-90h] BYREF

 puts(asc_178B);
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
 v0 = 1;
 v1 = varargs_func(5, 1, 2, 3, 4, 5);
 printf(aCallL206, v1);
 printf(aCallL207, 42);
 printf(aCallL208, 36);
 v2 = func_mixed_args(10, "test", 0x51EB851Fu, 0x40091EB8u, 100);
 printf(aCallL209, v2);
 v3 = (int *)v11;
 do
 {
 *v3 = v0;
 v3[1] = 0;
 v3 += 2;
 ++v0;
 }
 while ( v0 != 17 );
 v4 = 0;
 v5 = 0;
 v6 = 0;
 do
 {
 v7 = &v11[v4];
 v8 = *(unsigned int *)&v11[v4];
 v4 += 8;
 v9 = __CFADD__(v8, v5);
 v5 += v8;
 v6 += v9 + *((unsigned int *)v7 + 1);
 }
 while ( v4 != 128 );
 printf(aCallL210, v5, v11, v6);
 return printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x9F8 */
int param_by_value_int(int a1)
{
 return 2 * a1;
}


/* Function: call_by_value_int @ 0xA00 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0xA08 */
int param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0xA1C */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0xA24 */
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0xA2C */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0xA34 */
int param_string(unsigned char *a1)
{
 return a1[1] + *a1;
}


/* Function: call_string_param @ 0xA44 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0xA4C */
int param_ptr_array(unsigned char **a1, int a2)
{
 int result; // r0
 unsigned char *v4; // t1

 if ( a2 < 1 )
 return 0;
 result = 0;
 do
 {
 v4 = *a1++;
 --a2;
 result += *v4;
 }
 while ( a2 );
 return result;
}


/* Function: call_ptr_array @ 0xA7C */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0xA84 */
int param_varargs(int a1, int a2, ...)
{
 va_list v2; // r2
 int v3; // r1
 int v4; // r3
 va_list va; // [sp+8h] [bp-8h] BYREF

 va_start(va, a2);
 if ( a1 < 1 )
 return 0;
 va_copy(v2, va);
 v3 = 0;
 do
 {
 --a1;
 v4 = va_arg(v2, int);
 v3 += v4;
 }
 while ( a1 );
 va_end(v2);
 return v3;
}


/* Function: call_varargs_param @ 0xAD4 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0xB04 */
int param_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0xB24 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0xB2C */
int param_double_ptr(unsigned int **a1, int a2, int a3, unsigned int *a4)
{
 int result; // r0
 bool v6; // zf

 result = -1;
 v6 = a1 == 0;
 if ( a1 )
 {
 a4 = *a1;
 v6 = *a1 == 0;
 }
 if ( !v6 )
 {
 *a4 = a2;
 *a1 = 0;
 return 1;
 }
 return result;
}


/* Function: call_double_ptr @ 0xB54 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0xB5C */
int param_complex_cast(unsigned int *a1, int a2)
{
 int v2; // r2

 if ( a2 == 1 )
 return a1[1] + *a1;
 v2 = -1;
 if ( !a2 )
 return *a1;
 return v2;
}


/* Function: call_complex_cast @ 0xB88 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0xB94 */
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


/* Function: call_struct_byval @ 0xBA0 */
int call_struct_byval()
{
 int i; // r0
 unsigned int v2[16]; // [sp+0h] [bp-40h]

 for ( i = 0; i != 16; ++i )
 v2[i] = i;
 return v2[15] + v2[0];
}


/* Function: param_order_dep @ 0xBD0 */
int param_order_dep(int a1, int a2)
{
 return a2 + a1;
}


/* Function: call_order_dep @ 0xBD8 */
int call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0xBE0 */
int test_parameter_passing()
{
 int v0; // r0
 int i; // r0
 unsigned int v3[18]; // [sp+8h] [bp-48h]

 puts(asc_17AC);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 4);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 v0 = param_varargs(4, 10, 20, 30, 40);
 printf("PARAM-L2-04: %d\n", v0);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 for ( i = 0; i != 16; ++i )
 v3[i] = i;
 printf("PARAM-L3-04: %d\n", v3[15] + v3[0]);
 return printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0xD1C */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0xD24 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0xD2C */
int ret_pointer(int a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0xD34 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0xD3C */
unsigned int * ret_small_struct(unsigned int *result, int a2, int a3)
{
 *result = a2;
 result[1] = a3;
 return result;
}


/* Function: call_ret_small_struct @ 0xD44 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0xD4C */
int ret_large_struct(int result, int a2)
{
 int i; // r2

 for ( i = 0; i != 16; ++i )
 *(unsigned int *)(result + 4 * i) = a2 + i;
 return result;
}


/* Function: call_ret_large_struct @ 0xD68 */
int call_ret_large_struct()
{
 int i; // r0
 unsigned int v2[16]; // [sp+0h] [bp-40h]

 for ( i = 0; i != 16; ++i )
 v2[i] = i + 100;
 return v2[15] + v2[0];
}


/* Function: func_a @ 0xD9C */
int func_a(int a1)
{
 return a1 + 10;
}


/* Function: func_b @ 0xDA4 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: ret_func_ptr @ 0xDAC */
int (* ret_func_ptr(int a1))(int)
{
 int (*v1)(int); // r1

 v1 = func_b;
 if ( !a1 )
 return func_a;
 return v1;
}


/* Function: call_ret_func_ptr @ 0xDD4 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0xDDC */
int ** ret_opaque_handle(int a1)
{
 void *v1; // r1

 v1 = &ret_opaque_handle_handle2;
 if ( !a1 )
 return ret_opaque_handle_handle1;
 return (int **)v1;
}


/* Function: call_ret_opaque @ 0xE04 */
int *call_ret_opaque()
{
 return ret_opaque_handle_handle1[0];
}


/* Function: ret_complex_expr @ 0xE14 */
int ret_complex_expr(int a1, int a2, int a3)
{
 int v3; // r3

 v3 = a3 + 10;
 if ( a1 > a2 )
 return 2 * a3;
 return v3;
}


/* Function: call_ret_complex_expr @ 0xE28 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0xE30 */
int ret_multi_branch(unsigned int a1)
{
 int v1; // r1

 v1 = -1;
 if ( a1 < 3 )
 return 10 * a1 + 10;
 return v1;
}


/* Function: call_ret_multi_branch @ 0xE4C */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0xE54 */
int ret_void(int a1, int *a2)
{
 int result; // r0

 result = 3 * a1;
 *a2 = result;
 return result;
}


/* Function: call_ret_void @ 0xE60 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0xE68 */
int test_return_values()
{
 int i; // r0
 unsigned int v2[18]; // [sp+0h] [bp-48h]

 puts(asc_17CD);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 for ( i = 0; i != 16; ++i )
 v2[i] = i + 100;
 printf(aRetL104D, v2[15] + v2[0]);
 printf(aRetL201D, 10);
 printf(aRetL202D, ret_opaque_handle_handle1[0]);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 return printf(aRetL303D, 21);
}


/* Function: main @ 0xF68 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: __aeabi_drsub @ 0xF84 */
double _aeabi_drsub(double a1, double a2)
{
 HIDWORD(a1) ^= 0x80000000;
 return a1 + a2;
}


/* Function: __subdf3 @ 0xF8C */
double _subdf3(double a1, double a2)
{
 HIDWORD(a2) ^= 0x80000000;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x123C */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x10D8);
 return result;
}


/* Function: __floatsidf @ 0x1260 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x10D8);
 return result;
}


/* Function: __extendsfdf2 @ 0x1288 */
int _extendsfdf2(int a1, int a2, int a3, unsigned int a4)
{
 bool v4; // zf
 int v5; // r2
 int result; // r0
 unsigned int local_a4; // local copy

 v5 = 2 * a1;
 v4 = 2 * a1 == 0;
 result = a1 << 29;
 local_a4 = v5 & 0xFF000000;
 if ( v4 || (local_a4 = v5 & 0xFF000000, (v5 & 0xFF000000) == 0) || local_a4 == 0xFF000000 )
 {
 if ( (v5 & 0xFFFFFF) != 0 && a4 != 0xFF000000 )
 JUMPOUT(0x10D8);
 }
 return result;
}


/* Function: __floatundidf @ 0x12D0 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x1300);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __fixdfsi @ 0x1344 */
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


/* Function: .term_proc @ 0x13A0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x1208C */

/* FAILED to decompile: __imp___cxa_finalize @ 0x12090 */

/* FAILED to decompile: __imp_printf @ 0x12094 */

/* FAILED to decompile: __imp_puts @ 0x12098 */

/* FAILED to decompile: __imp_strlen @ 0x1209C */

/* FAILED to decompile: __imp_abort @ 0x120A0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x120A8 */

/* Total functions decompiled: 88, failed: 7 */
