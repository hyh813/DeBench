/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/4/4_clang_O2_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <string.h>
#include <arm_neon.h>

/* Forward declaration */
long long call_weak_fn(void);

/* Function: .init_proc @ 0x628 */
long long init_proc()
{
 return call_weak_fn();
}

long long call_weak_fn(void)
{
 return 0;
}


#define JUMPOUT(x) return

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





/* Define LODWORD macro for low dword extraction */
#define LODWORD(x) (*((unsigned int*)&(x)))

/* Global variables for ret_opaque_handle */
static int ret_opaque_handle_handle1;
static int ret_opaque_handle_handle2;

/* ARM NEON data constants */
static const int32x4_t xmmword_1150 = {1, 2, 3, 4};
static const int32x4_t xmmword_1160 = {5, 6, 7, 8};
static const int32x4_t xmmword_1170 = {9, 10, 11, 12};

/* String constants */
static const char *asc_14D2 = "Testing calling conventions:";
static const char *asc_14F3 = "Testing parameter passing:";
static const char *asc_1514 = "Testing return values:";
static const char *aCallL211 = "CALL-L2-11: %d\n";
static const char *aRetL101D = "RET-L1-01: %d\n";
static const char *aRetL102D = "RET-L1-02: %d\n";
static const char *aRetL103D = "RET-L1-03: %d\n";
static const char *aRetL104D = "RET-L1-04: %d\n";
static const char *aRetL201D = "RET-L2-01: %d\n";
static const char *aRetL202D = "RET-L2-02: %d\n";
static const char *aRetL301D = "RET-L3-01: %d\n";
static const char *aRetL302D = "RET-L3-02: %d\n";
static const char *aRetL303D = "RET-L3-03: %d\n";

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
 unsigned int v9; // w11
 unsigned int v10; // w10
 unsigned int *v11; // x11
 unsigned long long v13[8]; // [xsp+80h] [xbp-60h] BYREF
 unsigned int *v14; // [xsp+C0h] [xbp-20h] BYREF
 unsigned int **v15; // [xsp+C8h] [xbp-18h]
 unsigned long long *v16; // [xsp+D0h] [xbp-10h]
 unsigned long long v17; // [xsp+D8h] [xbp-8h]

 v16 = v13;
 v17 = 0xFFFFFF80FFFFFFC8LL;
 v8 = 0;
 v13[3] = a4;
 v13[4] = a5;
 v13[1] = a2;
 v13[2] = a3;
 v13[5] = a6;
 v13[6] = a7;
 v15 = &v14;
 v13[7] = a8;
 if ( a1 >= 1 )
 {
 v9 = v17;
 do
 {
 if ( (v9 & 0x80000000) != 0 )
 {
 v10 = v9 + 8;
 LODWORD(v17) = v9 + 8;
 if ( v9 <= 0xFFFFFFF8 )
 {
 v11 = (unsigned int *)((char *)v15 + (int)v9);
 goto LABEL_5;
 }
 }
 else
 {
 v10 = v9;
 }
 v11 = v14;
 v14 += 2;
LABEL_5:
 --a1;
 v8 += *v11;
 v9 = v10;
 }
 while ( a1 );
 }
 return v8;
}


/* Function: func_no_args @ 0x98C */
long long func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x994 */
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return (unsigned int)(a2 + a1 + a3 + a4 + a5 + a6 + a7 + a8);
}


/* Function: func_mixed_args @ 0x9B4 */
long long func_mixed_args(int a1, char *s, long long a3, double a4)
{
 int v7; // w0

 if ( s )
 v7 = strlen(s);
 else
 v7 = 0;
 return (unsigned int)(int)((double)(v7 + a1) + a4 + (double)a3);
}


/* Function: func_struct_byval @ 0xA0C */
long long func_struct_byval(unsigned int *a1)
{
 return (unsigned int)(a1[30]
 + a1[28]
 + a1[26]
 + a1[24]
 + a1[22]
 + a1[20]
 + a1[18]
 + a1[16]
 + a1[14]
 + a1[12]
 + a1[10]
 + a1[8]
 + a1[6]
 + a1[4]
 + a1[2]
 + *a1);
}


/* Function: func_struct_byptr @ 0xA8C */
long long func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return (unsigned int)(a1[1] * *a1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0xAA4 */
long long test_calling_conventions()
{
 long long v0; // x6
 long long v1; // x7
 unsigned int v2; // w0

 puts(asc_14D2);
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
 printf("CALL-L2-06: %d\n", v2);
 printf("CALL-L2-07: %d\n", 42);
 printf("CALL-L2-08: %d\n", 36);
 printf("CALL-L2-09: %d\n", 117);
 printf("CALL-L2-10: %d\n", 136);
 return printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0xBD8 */
long long param_by_value_int(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0xBE0 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0xBE8 */
long long param_by_value_ptr(unsigned int *a1)
{
 long long result; // x0

 result = 1;
 *a1 *= 2;
 return result;
}


/* Function: call_by_value_ptr @ 0xC00 */
long long call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0xC08 */
long long param_array_decay()
{
 return 8;
}


/* Function: call_array_decay @ 0xC10 */
long long call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0xC18 */
long long param_string(unsigned char *a1)
{
 return a1[1] + (unsigned int)*a1;
}


/* Function: call_string_param @ 0xC28 */
long long call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0xC30 */
long long param_ptr_array(long long a1, int a2)
{
 long long v2; // x10
 unsigned int v3; // w8
 int v5; // w8
 int v6; // w11
 unsigned char **v7; // x12
 long long v8; // x13
 unsigned char *v9; // x14
 unsigned char *v10; // x15
 unsigned char **v11; // x11
 long long v12; // x9
 unsigned char *v13; // t1

 if ( a2 < 1 )
 return 0;
 if ( a2 == 1 )
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = a2 & 0xFFFFFFFE;
 v5 = 0;
 v6 = 0;
 v7 = (unsigned char **)(a1 + 8);
 v8 = v2;
 do
 {
 v9 = *(v7 - 1);
 v10 = *v7;
 v7 += 2;
 v8 -= 2;
 v5 += *v9;
 v6 += *v10;
 }
 while ( v8 );
 v3 = v6 + v5;
 if ( v2 == a2 )
 return v3;
 }
 v11 = (unsigned char **)(a1 + 8 * v2);
 v12 = (unsigned int)a2 - v2;
 do
 {
 v13 = *v11++;
 --v12;
 v3 += *v13;
 }
 while ( v12 );
 return v3;
}


/* Function: call_ptr_array @ 0xCBC */
long long call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0xCC4 */
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
 unsigned int v9; // w11
 unsigned int v10; // w10
 unsigned int *v11; // x11
 unsigned long long v13[8]; // [xsp+80h] [xbp-60h] BYREF
 unsigned int *v14; // [xsp+C0h] [xbp-20h] BYREF
 unsigned int **v15; // [xsp+C8h] [xbp-18h]
 unsigned long long *v16; // [xsp+D0h] [xbp-10h]
 unsigned long long v17; // [xsp+D8h] [xbp-8h]

 v16 = v13;
 v17 = 0xFFFFFF80FFFFFFC8LL;
 v8 = 0;
 v13[3] = a4;
 v13[4] = a5;
 v13[1] = a2;
 v13[2] = a3;
 v13[5] = a6;
 v13[6] = a7;
 v15 = &v14;
 v13[7] = a8;
 if ( a1 >= 1 )
 {
 v9 = v17;
 do
 {
 if ( (v9 & 0x80000000) != 0 )
 {
 v10 = v9 + 8;
 LODWORD(v17) = v9 + 8;
 if ( v9 <= 0xFFFFFFF8 )
 {
 v11 = (unsigned int *)((char *)v15 + (int)v9);
 goto LABEL_5;
 }
 }
 else
 {
 v10 = v9;
 }
 v11 = v14;
 v14 += 2;
LABEL_5:
 --a1;
 v8 += *v11;
 v9 = v10;
 }
 while ( a1 );
 }
 return v8;
}


/* Function: call_varargs_param @ 0xD70 */
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


/* Function: param_func_ptr @ 0xD88 */
long long param_func_ptr(unsigned int ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0xDA8 */
long long call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0xDB0 */
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


/* Function: call_double_ptr @ 0xDD8 */
long long call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0xDE0 */
long long param_complex_cast(unsigned int *a1, int a2)
{
 if ( a2 == 1 )
 return a1[1] + *a1;
 if ( a2 )
 return 0xFFFFFFFFLL;
 return *a1;
}


/* Function: call_complex_cast @ 0xE08 */
long long call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0xE14 */
long long param_struct_byval(unsigned int *a1)
{
 return (unsigned int)(a1[15] + *a1);
}


/* Function: call_struct_byval @ 0xE24 */
long long call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0xE2C */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a2 + a1);
}


/* Function: call_order_dep @ 0xE34 */
long long call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0xE3C */
long long test_parameter_passing()
{
 long long v0; // x5
 long long v1; // x6
 long long v2; // x7
 int v3; // w0

 puts(asc_14F3);
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
 printf("PARAM-L3-04: %d\n", 15);
 return printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0xF20 */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0xF28 */
long long call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0xF30 */
long long ret_pointer(long long a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0xF38 */
long long call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0xF40 */
unsigned long long ret_small_struct(unsigned int a1, unsigned int a2)
{
 return a1 | ((unsigned long long)a2 << 32);
}


/* Function: call_ret_small_struct @ 0xF4C */
long long call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0xF54 */
int32x4_t ret_large_struct(unsigned int a1, long long a2)
{
 int32x4_t v2; // q3
 int32x4_t result; // q0

 v2 = vdupq_n_s32(a1);
 *(unsigned int *)a2 = a1;
 result = vaddq_s32(v2, (int32x4_t)xmmword_1150);
 *(unsigned int *)(a2 + 60) = a1 + 15;
 *(int32x4_t *)(a2 + 4) = result;
 *(int32x4_t *)(a2 + 20) = vaddq_s32(v2, (int32x4_t)xmmword_1160);
 *(int32x4_t *)(a2 + 36) = vaddq_s32(v2, (int32x4_t)xmmword_1170);
 *(int32x2_t *)(a2 + 52) = vadd_s32(vdup_n_s32(a1), (int32x2_t)0xE0000000DLL);
 return result;
}


/* Function: call_ret_large_struct @ 0xFAC */
long long call_ret_large_struct()
{
 return 215;
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
long long ( * ret_func_ptr(int a1))(int a1)
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
 puts(asc_1514);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 printf(aRetL104D, 215);
 printf(aRetL201D, 10);
 printf(aRetL202D, (unsigned int)ret_opaque_handle_handle1);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 return printf(aRetL303D, 21);
}


/* Function: main @ 0x110C */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x112C */
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
