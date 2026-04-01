/* Auto-injected type definitions by preprocessor */
#include <stddef.h>
#include <stdarg.h>
#include <stdbool.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/4/4_gcc_O1_no_g
 * Processor: arm
 */

/* IDA Pro macro definitions */
#define JUMPOUT(addr) ((void (*)(void))(addr))()
#define HIDWORD(x) ((uint32_t)(((uint64_t)(x)) >> 32))
#define __PAIR64__(hi, lo) ((((uint64_t)(uint32_t)(hi)) << 32) | ((uint32_t)(lo)))

/* GNU extension - redirect to standard printf */
#define _printf_chk(flag, ...) printf(__VA_ARGS__)

/* String constants */
const char *s = "Calling Convention Tests";
const char *aCallL206 = "CALL-L2-06: %d\n";
const char *aCallL207 = "CALL-L2-07: %d\n";
const char *aCallL208 = "CALL-L2-08: %d\n";
const char *aCallL209 = "CALL-L2-09: %d\n";
const char *aCallL210 = "CALL-L2-10: %d\n";
const char *aCallL211 = "CALL-L2-11: %d\n";
const char *asc_11750 = "Parameter Passing Tests";
const char *asc_11850 = "Return Value Tests";
const char *aRetL101D = "RET-L1-01: %d\n";
const char *aRetL102D = "RET-L1-02: %d\n";
const char *aRetL103D = "RET-L1-03: %d\n";
const char *aRetL104D = "RET-L1-04: %d\n";
const char *aRetL201D = "RET-L2-01: %d\n";
const char *aRetL202D = "RET-L2-02: %d\n";
const char *aRetL301D = "RET-L3-01: %d\n";
const char *aRetL302D = "RET-L3-02: %d\n";
const char *aRetL303D = "RET-L3-03: %d\n";

/* Handle values */
int handle1_1 = 1;
int handle2_0 = 0;

/* Data for call_ptr_array */
unsigned int unk_11974 = 1;
unsigned int unk_11978 = 2;
unsigned int unk_1197C = 3;

/* Function prototypes */
int puts(const char *s);
int _printf_chk(int flag, const char *format, ...);
void *memcpy(void *dest, const void *src, unsigned int n);
unsigned int strlen(const char *s);
int callback_func(int a1);
int func_a(int a1);
int func_b(int a1);
int call_weak_fn(void);
int call_weak_fn()
{
 return 0;
}

int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_103E8 @ 0x103E8 */
void sub_103E8()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: callback_func @ 0x10554 */
int callback_func(int a1)
{
 return 2 * a1;
}


/* Function: func_a @ 0x1055C */
int func_a(int a1)
{
 return a1 + 10;
}


/* Function: func_b @ 0x10564 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: cdecl_func @ 0x1056C */
int cdecl_func(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_cdecl @ 0x10574 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1057C */
int stdcall_func(int a1, int a2)
{
 return a2 * a1;
}


/* Function: call_stdcall @ 0x10584 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1058C */
int fastcall_func(int a1, int a2, int a3)
{
 return a1 + a2 + a3;
}


/* Function: call_fastcall @ 0x10598 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x105A0 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x105A8 */
int arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return a1 + a2 + a3 + a4 + a5;
}


/* Function: call_arm_aapcs @ 0x105C0 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x105C8 */
int mips_func(int a1, int a2, int a3, int a4)
{
 return a1 + a2 + a3 + a4;
}


/* Function: call_mips @ 0x105D8 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x105E0 */
int amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return a1 + a2 + a3 + a4 + a5 + a6;
}


/* Function: call_amd64_sysv @ 0x10600 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x10608 */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a1 + a2 + a3 + a4 + a5;
}


/* Function: call_ms_x64 @ 0x10620 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x10628 */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a1 + a2 + a3 + a4;
}


/* Function: call_vectorcall @ 0x10638 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x10640 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x10648 */
int varargs_func(int a1, ...)
{
 int v2; // r3
 int result; // r0
 int v4; // kr00_4
 va_list v5; // [sp+0h] [bp-20h]
 va_list varg_r1; // [sp+14h] [bp-Ch] BYREF

 va_start(varg_r1, a1);
 va_copy(v5, varg_r1);
 if ( a1 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 {
 v4 = va_arg(v5, unsigned int);
 result += v4;
 ++v2;
 }
 while ( a1 != v2 );
 return result;
}


/* Function: func_no_args @ 0x106D8 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x106E0 */
int func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8;
}


/* Function: func_mixed_args @ 0x10710 */
int func_mixed_args(int a1, const char *a2, double a3, long long a4)
{
 size_t v6; // r0

 if ( a2 )
 v6 = strlen(a2);
 else
 v6 = 0;
 return (int)((double)(int)(v6 + a1) + a3 + (double)a4);
}


/* Function: func_struct_byval @ 0x10774 */
int func_struct_byval(
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
 int a16,
 int a17,
 int a18,
 int a19,
 int a20,
 int a21,
 int a22,
 int a23,
 int a24,
 int a25,
 int a26,
 int a27,
 int a28,
 int a29,
 int a30,
 int a31,
 int a32,
 char a33)
{
 unsigned int buffer[16]; // local buffer to hold struct data
 unsigned int *v34; // r3
 int result; // r0
 unsigned int v36; // r2

 buffer[0] = a1;
 buffer[1] = a2;
 buffer[2] = a3;
 buffer[3] = a4;
 v34 = buffer;
 result = 0;
 do
 {
 v36 = *v34;
 ++v34;
 result += v36;
 }
 while ( v34 != (unsigned int *)((char *)&a33) );
 return result;
}


/* Function: func_struct_byptr @ 0x107A8 */
int func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return a1[1] * *a1;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x107C0 */
int test_calling_conventions()
{
 int v0; // r0
 int *v1; // r1
 int v2; // r2
 int v3; // r0
 unsigned long long v4; // kr00_8
 char *v5; // r3
 int v6; // r2
 int v7; // r1
 unsigned int src[32]; // [sp+8h] [bp-110h] BYREF
 unsigned int dest[32]; // [sp+88h] [bp-90h] BYREF
 char v11; // [sp+108h] [bp-10h] BYREF

 puts(s);
 _printf_chk(1, "CALL-L1-01: %d\n", 15);
 _printf_chk(1, "CALL-L1-02: %d\n", 50);
 _printf_chk(1, "CALL-L1-03: %d\n", 6);
 _printf_chk(1, "CALL-L1-04: %d\n", 15);
 _printf_chk(1, "CALL-L1-05: %d\n", 15);
 _printf_chk(1, "CALL-L1-06: %d\n", 100);
 _printf_chk(1, "CALL-L1-07: %d\n", 21);
 _printf_chk(1, "CALL-L1-08: %d\n", 15);
 _printf_chk(1, "CALL-L1-09: %d\n", 10);
 _printf_chk(1, "CALL-L1-10: %d\n", 33);
 v0 = varargs_func(5, 1, 2, 3, 4, 5);
 _printf_chk(1, aCallL206, v0);
 _printf_chk(1, aCallL207, 42);
 _printf_chk(1, aCallL208, 36);
 _printf_chk(1, aCallL209, 117);
 v1 = src;
 v2 = 1;
 v3 = 0;
 do
 {
 *v1 = v2;
 v1[1] = v3;
 v1 += 2;
 v4 = __PAIR64__(v3, v2) + 1;
 v3 = HIDWORD(v4);
 ++v2;
 }
 while ( v2 < 16 );
 memcpy(dest, src, sizeof(dest));
 v5 = (char *)dest;
 v6 = 0;
 do
 {
 v7 = *(unsigned int *)v5;
 v5 += 8;
 v6 += v7;
 }
 while ( &v11 != v5 );
 _printf_chk(1, aCallL210, v6);
 return _printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x109CC */
int param_by_value_int(int a1)
{
 return 2 * a1;
}


/* Function: call_by_value_int @ 0x109D4 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x109DC */
int param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x109F0 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x109F8 */
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0x10A00 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x10A08 */
int param_string(unsigned char *a1)
{
 return *a1 + a1[1];
}


/* Function: call_string_param @ 0x10A18 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x10A20 */
int param_ptr_array(int a1, int a2)
{
 int v2; // r3
 int v3; // r1
 int result; // r0
 unsigned int *v5;

 if ( a2 <= 0 )
 return 0;
 v2 = a1 - 4;
 v3 = a1 - 4 + 4 * a2;
 result = 0;
 do
 {
 v5 = *(unsigned int **)(v2 + 4);
 v2 += 4;
 result += *v5;
 }
 while ( v2 != v3 );
 return result;
}


/* Function: call_ptr_array @ 0x10A54 */
int call_ptr_array()
{
 unsigned int *v1[3]; // [sp+0h] [bp-18h] BYREF

 v1[0] = &unk_11974;
 v1[1] = &unk_11978;
 v1[2] = &unk_1197C;
 return param_ptr_array((int)&v1, 3);
}


/* Function: param_varargs @ 0x10AB4 */
int param_varargs(int a1, ...)
{
 int v2; // r3
 int result; // r0
 int v4; // kr00_4
 va_list v5; // [sp+0h] [bp-20h]
 va_list varg_r1; // [sp+14h] [bp-Ch] BYREF

 va_start(varg_r1, a1);
 va_copy(v5, varg_r1);
 if ( a1 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 {
 v4 = va_arg(v5, unsigned int);
 result += v4;
 ++v2;
 }
 while ( a1 != v2 );
 return result;
}


/* Function: call_varargs_param @ 0x10B44 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x10B70 */
int param_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x10B88 */
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


/* Function: param_double_ptr @ 0x10BA0 */
int param_double_ptr(unsigned int *a1, int a2)
{
 if ( !a1 )
 return -1;
 if ( !*a1 )
 return -1;
 *(unsigned int *)*a1 = a2;
 *a1 = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x10BD8 */
int call_double_ptr()
{
 int result; // r0
 int v1; // [sp+4h] [bp-14h] BYREF
 int *v2; // [sp+8h] [bp-10h] BYREF

 v1 = 10;
 v2 = &v1;
 param_double_ptr(&v2, 20);
 result = v1;
 if ( !v2 )
 return v1 + 1;
 return result;
}


/* Function: param_complex_cast @ 0x10C44 */
int param_complex_cast(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return -1;
}


/* Function: call_complex_cast @ 0x10C6C */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x10C78 */
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


/* Function: call_struct_byval @ 0x10C94 */
int call_struct_byval()
{
 unsigned int *v0; // r2
 int i; // r3
 unsigned int v3[16]; // [sp+4h] [bp-4Ch] BYREF

 v0 = v3;
 for ( i = 0; i != 16; ++i )
 *v0++ = i;
 return v3[15] + v3[0];
}


/* Function: param_order_dep @ 0x10CF8 */
int param_order_dep(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_order_dep @ 0x10D00 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x10D08 */
int test_parameter_passing()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0

 puts(asc_11750);
 _printf_chk(1, "PARAM-L1-01: %d\n", 15);
 v0 = call_by_value_ptr();
 _printf_chk(1, "PARAM-L1-02: %d\n", v0);
 _printf_chk(1, "PARAM-L2-01: %d\n", 4);
 _printf_chk(1, "PARAM-L2-02: %d\n", 173);
 v1 = call_ptr_array();
 _printf_chk(1, "PARAM-L2-03: %d\n", v1);
 v2 = call_varargs_param();
 _printf_chk(1, "PARAM-L2-04: %d\n", v2);
 v3 = call_func_ptr_param();
 _printf_chk(1, "PARAM-L3-01: %d\n", v3);
 v4 = call_double_ptr();
 _printf_chk(1, "PARAM-L3-02: %d\n", v4);
 v5 = call_complex_cast();
 _printf_chk(1, "PARAM-L3-03: %d\n", v5);
 v6 = call_struct_byval();
 _printf_chk(1, "PARAM-L3-04: %d\n", v6);
 return _printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x10E14 */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x10E1C */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x10E24 */
int ret_pointer(int a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x10E2C */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x10E34 */
unsigned int * ret_small_struct(unsigned int *result, int a2, int a3)
{
 *result = a2;
 result[1] = a3;
 return result;
}


/* Function: call_ret_small_struct @ 0x10E40 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x10E48 */
unsigned int * ret_large_struct(unsigned int *result, int a2)
{
 int *v2; // r3
 int v3; // r1
 int v4; // r2
 int v5; // r3
 int v6; // r1
 int v7; // r2
 int v8; // r3
 int v9; // r1
 int v10; // r2
 int v11; // r3
 int v12; // r1
 int v13; // r2
 int v14; // r3
 unsigned int v15[16]; // [sp+4h] [bp-4Ch] BYREF
 int v16; // [sp+44h] [bp-Ch] BYREF

 v2 = v15;
 do
 *v2++ = a2++;
 while ( v2 != &v16 );
 v3 = v15[1];
 v4 = v15[2];
 v5 = v15[3];
 *result = v15[0];
 result[1] = v3;
 result[2] = v4;
 result[3] = v5;
 v6 = v15[5];
 v7 = v15[6];
 v8 = v15[7];
 result[4] = v15[4];
 result[5] = v6;
 result[6] = v7;
 result[7] = v8;
 v9 = v15[9];
 v10 = v15[10];
 v11 = v15[11];
 result[8] = v15[8];
 result[9] = v9;
 result[10] = v10;
 result[11] = v11;
 v12 = v15[13];
 v13 = v15[14];
 v14 = v15[15];
 result[12] = v15[12];
 result[13] = v12;
 result[14] = v13;
 result[15] = v14;
 return result;
}


/* Function: call_ret_large_struct @ 0x10ED0 */
int call_ret_large_struct()
{
 unsigned int v1[16]; // [sp+4h] [bp-4Ch] BYREF

 ret_large_struct(v1, 100);
 return v1[0] + v1[15];
}


/* Function: ret_func_ptr @ 0x10F28 */
int ( * ret_func_ptr(int a1))(int a1)
{
 if ( a1 )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0x10F48 */
int call_ret_func_ptr()
{
 return func_b(5);
}


/* Function: ret_opaque_handle @ 0x10F58 */
int * ret_opaque_handle(int a1)
{
 bool v1; // zf
 int *result; // r0

 v1 = a1 == 0;
 result = &handle1_1;
 if ( !v1 )
 return (int *)&handle2_0;
 return result;
}


/* Function: call_ret_opaque @ 0x10F70 */
int call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x10F80 */
int ret_complex_expr(int a1, int a2, int a3)
{
 if ( a1 <= a2 )
 return a3 + 10;
 else
 return 2 * a3;
}


/* Function: call_ret_complex_expr @ 0x10F90 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x10F98 */
int ret_multi_branch(int a1)
{
 if ( a1 == 1 )
 return 20;
 if ( a1 == 2 )
 return 30;
 if ( a1 )
 return -1;
 return 10;
}


/* Function: call_ret_multi_branch @ 0x10FC8 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x10FD0 */
int ret_void(int a1, int *a2)
{
 int result; // r0

 result = 3 * a1;
 *a2 = result;
 return result;
}


/* Function: call_ret_void @ 0x10FDC */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x10FE4 */
int test_return_values()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0

 puts(asc_11850);
 _printf_chk(1, aRetL101D, 42);
 v0 = call_ret_pointer();
 _printf_chk(1, aRetL102D, v0);
 v1 = call_ret_small_struct();
 _printf_chk(1, aRetL103D, v1);
 v2 = call_ret_large_struct();
 _printf_chk(1, aRetL104D, v2);
 v3 = call_ret_func_ptr();
 _printf_chk(1, aRetL201D, v3);
 _printf_chk(1, aRetL202D, handle1_1);
 _printf_chk(1, aRetL301D, 40);
 _printf_chk(1, aRetL302D, 60);
 return _printf_chk(1, aRetL303D, 21);
}


/* Function: main @ 0x110C4 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: __aeabi_drsub @ 0x110DC */
double _aeabi_drsub(double a1, double a2)
{
 /* XOR the sign bit of a1 to negate it (for subtraction) */
 unsigned long long *p = (unsigned long long *)&a1;
 *p ^= 0x8000000000000000ULL;
 return a1 + a2;
}


/* Function: __subdf3 @ 0x110E4 */
double _subdf3(double a1, double a2)
{
 /* XOR the sign bit of a2 to negate it (for subtraction) */
 unsigned long long *p = (unsigned long long *)&a2;
 *p ^= 0x8000000000000000ULL;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x11394 */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x11230);
 return result;
}


/* Function: __floatsidf @ 0x113B8 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x11230);
 return result;
}


/* Function: __extendsfdf2 @ 0x113E0 */
int _extendsfdf2(int a1, int a2, int a3, unsigned int a4)
{
 bool v4; // zf
 int v5; // r2
 int result; // r0
 unsigned int a4_val; // local variable to hold modified a4

 v5 = 2 * a1;
 v4 = 2 * a1 == 0;
 result = a1 << 29;
 a4_val = v5 & 0xFF000000;
 if ( v4 || (a4_val == 0) || a4_val == 0xFF000000 )
 {
 if ( (v5 & 0xFFFFFF) != 0 && a4_val != 0xFF000000 )
 JUMPOUT(0x11230);
 }
 return result;
}


/* Function: __floatundidf @ 0x11428 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11458);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __fixdfsi @ 0x1149C */
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


/* Function: .term_proc @ 0x114F8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x22058 */

/* FAILED to decompile: __imp_strlen @ 0x2205C */

/* FAILED to decompile: __imp___printf_chk @ 0x22060 */

/* FAILED to decompile: __imp_abort @ 0x22064 */

/* FAILED to decompile: __imp___libc_start_main @ 0x22068 */

/* FAILED to decompile: __imp_memcpy @ 0x2206C */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x22070 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x22074 */

/* Total functions decompiled: 89, failed: 8 */
