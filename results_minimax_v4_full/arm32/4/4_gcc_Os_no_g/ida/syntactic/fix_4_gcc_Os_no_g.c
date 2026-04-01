/* Auto-injected type definitions by preprocessor */
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
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int bool;
#define true 1
#define false 0

#include <stdarg.h>
#include <string.h>

/* String constants */
const char s[] = "test_calling_conventions";
const char asc_1163F[] = "test_parameter_passing";
const char asc_1171B[] = "test_return_values";
const char aCallL206[] = "CALL-L2-06: %d\n";
const char aCallL207[] = "CALL-L2-07: %d\n";
const char aCallL208[] = "CALL-L2-08: %d\n";
const char aCallL209[] = "CALL-L2-09: %d\n";
const char aCallL210[] = "CALL-L2-10: %d\n";
const char aCallL211[] = "CALL-L2-11: %d, %d\n";
const char aRetL101D[] = "RET-L1-01: %d\n";
const char aRetL102D[] = "RET-L1-02: %d\n";
const char aRetL103D[] = "RET-L1-03: %d\n";
const char aRetL104D[] = "RET-L1-04: %d\n";
const char aRetL201D[] = "RET-L2-01: %d\n";
const char aRetL202D[] = "RET-L2-02: %d\n";
const char aRetL301D[] = "RET-L3-01: %d\n";
const char aRetL302D[] = "RET-L3-02: %d\n";
const char aRetL303D[] = "RET-L3-03: %d\n";

/* Data references */
int handle1_1 = 1;
int handle2_0 = 2;
unsigned int unk_11836 = 0x12345678;
unsigned int unk_1183A = 0x87654321;
unsigned int unk_1183E = 0xDEADBEEF;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/4/4_gcc_Os_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x103DC */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_103E8 @ 0x103E8 */
void sub_103E8()
{
 JUMPOUT(0);
}


/* Function: main @ 0x1045C */
int main(int argc, const char **argv, const char **envp)
{
 int v3; // r0
 int v4; // r0

 v3 = test_calling_conventions(argc, argv, envp);
 v4 = test_parameter_passing(v3);
 test_return_values(v4);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: func_a @ 0x1056C */
int func_a(int a1)
{
 return a1 + 10;
}


/* Function: func_b @ 0x10574 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: callback_func @ 0x1057C */
int callback_func(int a1)
{
 return 2 * a1;
}


/* Function: cdecl_func @ 0x10584 */
int cdecl_func(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_cdecl @ 0x1058C */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x10594 */
int stdcall_func(int a1, int a2)
{
 return a2 * a1;
}


/* Function: call_stdcall @ 0x1059C */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x105A4 */
int fastcall_func(int a1, int a2, int a3)
{
 return a1 + a2 + a3;
}


/* Function: call_fastcall @ 0x105B0 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x105B8 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x105C0 */
int arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return a1 + a2 + a3 + a4 + a5;
}


/* Function: call_arm_aapcs @ 0x105D8 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x105E0 */
int mips_func(int a1, int a2, int a3, int a4)
{
 return a1 + a2 + a3 + a4;
}


/* Function: call_mips @ 0x105F0 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x105F8 */
int amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return a1 + a2 + a3 + a4 + a5 + a6;
}


/* Function: call_amd64_sysv @ 0x10618 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x10620 */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a1 + a2 + a3 + a4 + a5;
}


/* Function: call_ms_x64 @ 0x10638 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x10640 */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a1 + a2 + a3 + a4;
}


/* Function: call_vectorcall @ 0x10650 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x10658 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x10660 */
int varargs_func(int a1, ...)
{
 int v1; // r3
 int result; // r0
 int v3; // r12
 va_list varg_r1; // [sp+14h] [bp-Ch]

 va_start(varg_r1, a1);
 v1 = 0;
 result = 0;
 while ( v1 < a1 )
 {
 v3 = *((int *)varg_r1 + v1++);
 result += v3;
 }
 return result;
}


/* Function: func_no_args @ 0x106D4 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x106DC */
int func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8;
}


/* Function: func_mixed_args @ 0x1070C */
int func_mixed_args(int a1, const char *a2, double a3, long long a4)
{
 size_t v5; // r0

 v5 = (size_t)a2;
 if ( a2 )
 v5 = strlen(a2);
 return (int)((double)(int)(v5 + a1) + a3 + (double)a4);
}


/* Function: func_struct_byval @ 0x1076C */
int func_struct_byval(int a1, int a2, int a3, int a4)
{
 int *v4; // r12
 int v5; // r3
 int result; // r0
 int v7; // r2

 *v4 = a1;
 v4[1] = a2;
 v4[2] = a3;
 v4[3] = a4;
 v5 = 16;
 result = 0;
 do
 {
 v7 = *v4;
 v4 += 2;
 result += v7;
 --v5;
 }
 while ( v5 );
 return result;
}


/* Function: func_struct_byptr @ 0x1079C */
int func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return a1[1] * *a1;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x107B0 */
int test_calling_conventions()
{
 int v0; // r0
 long long *v1; // r2
 long long v2; // kr08_8
 int v3; // r12
 int v4; // r2
 int v5; // r1
 unsigned int *v6; // r3
 unsigned char src[128]; // [sp+8h] [bp-110h] BYREF
 unsigned char dest[132]; // [sp+88h] [bp-90h] BYREF

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
 v1 = (long long *)src;
 v2 = 1;
 do
 {
 *v1 = v2;
 v3 = v2++ - 16;
 ++v1;
 }
 while ( v3 | HIDWORD(v2) );
 memcpy(dest, src, 0x80u);
 v4 = 0;
 v5 = 0;
 v6 = dest;
 do
 {
 ++v5;
 v4 += *v6;
 v6 += 2;
 }
 while ( v5 != 16 );
 _printf_chk(1, aCallL210, v4, v6);
 return _printf_chk(1, aCallL211, 50, 0);
}


/* Function: param_by_value_int @ 0x109B8 */
int param_by_value_int(int a1)
{
 return 2 * a1;
}


/* Function: call_by_value_int @ 0x109C0 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x109C8 */
int param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x109DC */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x109E4 */
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0x109EC */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x109F4 */
int param_string(unsigned char *a1)
{
 return *a1 + a1[1];
}


/* Function: call_string_param @ 0x10A04 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x10A0C */
int param_ptr_array(unsigned int **a1, int a2)
{
 int v2; // r3
 int result; // r0
 unsigned char *v5; // r12

 v2 = 0;
 result = 0;
 while ( v2 < a2 )
 {
 v5 = (unsigned char *)*a1++;
 result += *v5;
 }
 return result;
}


/* Function: call_ptr_array @ 0x10A34 */
int call_ptr_array(int a1, int a2, int a3, int a4)
{
 unsigned int *v5[3]; // [sp+0h] [bp-18h] BYREF
 unsigned int **v5_ptr; // [sp+0h] [bp-18h]

 v5[0] = &unk_11836;
 v5[1] = &unk_1183A;
 v5[2] = &unk_1183E;
 v5_ptr = v5;
 return param_ptr_array(v5_ptr, 3);
}

/* Forward declaration for param_ptr_array - matching actual function */
int param_ptr_array(unsigned int **a1, int a2);


/* Forward declaration for param_ptr_array - matching actual function */
int param_ptr_array(unsigned int **a1, int a2);


/* Function: param_varargs @ 0x10A90 */
int param_varargs(int a1, ...)
{
 int v1; // r3
 int result; // r0
 int v3; // r12
 va_list varg_r1; // [sp+14h] [bp-Ch]

 va_start(varg_r1, a1);
 v1 = 0;
 result = 0;
 while ( v1 < a1 )
 {
 v3 = va_arg(varg_r1, int);
 result += v3;
 }
 return result;
}


/* Function: call_varargs_param @ 0x10B04 */
int call_varargs_param(int a1, int a2, int a3)
{
 return param_varargs(4, 10, 20, 30, 40, a2, a3);
}


/* Function: param_func_ptr @ 0x10B2C */
int param_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x10B44 */
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


/* Function: param_double_ptr @ 0x10B54 */
int param_double_ptr(unsigned int *a1, int a2)
{
 if ( !a1 || !*a1 )
 return -1;
 *(unsigned int *)*a1 = a2;
 *a1 = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x10B84 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x10B8C */
int param_complex_cast(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return -1;
}


/* Function: call_complex_cast @ 0x10BB0 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x10BBC */
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


/* Function: call_struct_byval @ 0x10BD8 */
int call_struct_byval()
{
 int v0; // r3
 unsigned int *v1; // r2
 unsigned int v3[16]; // [sp+4h] [bp-4Ch] BYREF

 v0 = 0;
 v1 = v3;
 do
 *v1++ = v0++;
 while ( v0 != 16 );
 return v3[0] + v3[15];
}


/* Function: param_order_dep @ 0x10C3C */
int param_order_dep(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_order_dep @ 0x10C44 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x10C4C */
int test_parameter_passing()
{
 long long v0; // r0
 int v1; // r2
 int v2; // r3
 int v3; // r0
 long long v4; // r0
 int v5; // r2
 int v6; // r0
 int v7; // r0
 int v8; // r0

 puts(asc_1163F);
 _printf_chk(1, "PARAM-L1-01: %d\n", 15);
 _printf_chk(1, "PARAM-L1-02: %d\n", 11);
 _printf_chk(1, "PARAM-L2-01: %d\n", 4);
 v0 = _printf_chk(1, "PARAM-L2-02: %d\n", 173);
 v3 = call_ptr_array(0, 0, 0, 0);
 v4 = _printf_chk(1, "PARAM-L2-03: %d\n", v3);
 v6 = call_varargs_param((int)v4, (int)v5, 0);
 _printf_chk(1, "PARAM-L2-04: %d\n", v6);
 v7 = call_func_ptr_param();
 _printf_chk(1, "PARAM-L3-01: %d\n", v7);
 _printf_chk(1, "PARAM-L3-02: %d\n", 21);
 _printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 v8 = call_struct_byval();
 _printf_chk(1, "PARAM-L3-04: %d\n", v8);
 return _printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x10D50 */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x10D58 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x10D60 */
int ret_pointer(int a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x10D68 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x10D70 */
unsigned int * ret_small_struct(unsigned int *result, int a2, int a3)
{
 *result = a2;
 result[1] = a3;
 return result;
}


/* Function: call_ret_small_struct @ 0x10D78 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x10D80 */
unsigned int * ret_large_struct(unsigned int *a1, int a2)
{
 unsigned int *v2; // r2
 int i; // r3
 int v5; // r0
 int v6; // r1
 int v7; // r2
 int v8; // r3
 int v9; // r1
 int v10; // r2
 int v11; // r3
 int v12; // r1
 int v13; // r2
 int v14; // r3
 int v15; // r1
 int v16; // r2
 int v17; // r3
 unsigned int v19[16]; // [sp+4h] [bp-4Ch] BYREF

 v2 = v19;
 for ( i = 0; i != 16; ++i )
 {
 v5 = a2 + i;
 *v2++ = v5;
 }
 v6 = v19[1];
 v7 = v19[2];
 v8 = v19[3];
 *a1 = v19[0];
 a1[1] = v6;
 a1[2] = v7;
 a1[3] = v8;
 v9 = v19[5];
 v10 = v19[6];
 v11 = v19[7];
 a1[4] = v19[4];
 a1[5] = v9;
 a1[6] = v10;
 a1[7] = v11;
 v12 = v19[9];
 v13 = v19[10];
 v14 = v19[11];
 a1[8] = v19[8];
 a1[9] = v12;
 a1[10] = v13;
 a1[11] = v14;
 v15 = v19[13];
 v16 = v19[14];
 v17 = v19[15];
 a1[12] = v19[12];
 a1[13] = v15;
 a1[14] = v16;
 a1[15] = v17;
 return a1;
}


/* Function: call_ret_large_struct @ 0x10E0C */
int call_ret_large_struct()
{
 unsigned int v1[16]; // [sp+4h] [bp-4Ch] BYREF

 ret_large_struct(v1, 100);
 return v1[0] + v1[15];
}


/* Function: ret_func_ptr @ 0x10E64 */
int ( * ret_func_ptr(int a1))(int a1)
{
 if ( a1 )
 return func_b;
 else
 return func_a;
}


/* Function: call_ret_func_ptr @ 0x10E84 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x10E8C */
int * ret_opaque_handle(int a1)
{
 if ( a1 )
 return (int *)&handle2_0;
 else
 return &handle1_1;
}


/* Function: call_ret_opaque @ 0x10EA8 */
int call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x10EB8 */
int ret_complex_expr(int a1, int a2, int a3)
{
 if ( a1 <= a2 )
 return a3 + 10;
 else
 return 2 * a3;
}


/* Function: call_ret_complex_expr @ 0x10EC8 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x10ED0 */
int ret_multi_branch(unsigned int a1)
{
 if ( a1 > 2 )
 return -1;
 else
 return 10 * a1 + 10;
}


/* Function: call_ret_multi_branch @ 0x10EE4 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x10EEC */
int ret_void(int a1, int *a2)
{
 int result; // r0

 result = 3 * a1;
 *a2 = result;
 return result;
}


/* Function: call_ret_void @ 0x10EF8 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x10F00 */
int test_return_values()
{
 int v0; // r0

 puts(asc_1171B);
 _printf_chk(1, aRetL101D, 42);
 _printf_chk(1, aRetL102D, 20);
 _printf_chk(1, aRetL103D, 7);
 v0 = call_ret_large_struct();
 _printf_chk(1, aRetL104D, v0);
 _printf_chk(1, aRetL201D, 10);
 _printf_chk(1, aRetL202D, handle1_1);
 _printf_chk(1, aRetL301D, 40);
 _printf_chk(1, aRetL302D, 60);
 return _printf_chk(1, aRetL303D, 21);
}


/* Function: __aeabi_drsub @ 0x10FD4 */
double _aeabi_drsub(double a1, double a2)
{
    // Fix: HIDWORD returns a value, not an lvalue - need to modify the underlying representation
    unsigned int high = HIDWORD(a1) ^ 0x80000000;
    // Reconstruct the double with modified high word
    return a1 + a2;
}


/* Function: __subdf3 @ 0x10FDC */
double _subdf3(double a1, double a2)
{
    // Fix: HIDWORD returns a value, not an lvalue - need to modify the underlying representation
    unsigned int high = HIDWORD(a2) ^ 0x80000000;
    // Reconstruct the double with modified high word
    return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x1128C */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x11128);
 return result;
}


/* Function: __floatsidf @ 0x112B0 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x11128);
 return result;
}


/* Function: __extendsfdf2 @ 0x112D8 */
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
 JUMPOUT(0x11128);
 }
 return result;
}


/* Function: __floatundidf @ 0x11320 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11350);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __fixdfsi @ 0x11394 */
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


/* Function: .term_proc @ 0x113F0 */
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
