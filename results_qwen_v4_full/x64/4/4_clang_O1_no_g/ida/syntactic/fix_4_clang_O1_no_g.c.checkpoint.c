/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_clang_O1_no_g
 * Processor: pc
 */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* GCC va_list structure for x86-64 */
typedef struct {
    unsigned int gp_offset;
    unsigned int fp_offset;
    void *overflow_arg_area;
    void *reg_save_area;
} gcc_va_list;

/* External declarations */
int ret_opaque_handle_handle1 = 100;
int ret_opaque_handle_handle2 = 200;

/* String constants */
static const char *s = "Calling Conventions Test";
static const char *aCallL206 = "CALL-L2-06: %d\n";
static const char *aCallL207 = "CALL-L2-07: %d\n";
static const char *aCallL208 = "CALL-L2-08: %d\n";
static const char *aCallL209 = "CALL-L2-09: %d\n";
static const char *aCallL210 = "CALL-L2-10: %d\n";
static const char *aCallL211 = "CALL-L2-11: %d\n";
static const char *asc_236F = "Parameter Passing Test";
static const char *asc_2390 = "Return Values Test";
static const char *aRetL101D = "RET-L1-01: %d\n";
static const char *aRetL102D = "RET-L1-02: %d\n";
static const char *aRetL103D = "RET-L1-03: %d\n";
static const char *aRetL104D = "RET-L1-04: %d\n";
static const char *aRetL201D = "RET-L2-01: %d\n";
static const char *aRetL202D = "RET-L2-02: %d\n";
static const char *aRetL301D = "RET-L3-01: %d\n";
static const char *aRetL302D = "RET-L3-02: %d\n";
static const char *aRetL303D = "RET-L3-03: %d\n";

/* JUMPOUT macro for decompiled code */
#define JUMPOUT(x) return

/* LODWORD/HIDWORD macros for extracting 32-bit parts from 64-bit values */
#define LODWORD(x) ((unsigned int)(x))
#define HIDWORD(x) ((unsigned int)((x) >> 32))




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x1160 */
long long cdecl_func(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_cdecl @ 0x1170 */
long long call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1180 */
long long stdcall_func(int a1, int a2)
{
 return (unsigned int)(a2 * a1);
}


/* Function: call_stdcall @ 0x1190 */
long long call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x11A0 */
long long fastcall_func(int a1, int a2, int a3)
{
 return (unsigned int)(a3 + a1 + a2);
}


/* Function: call_fastcall @ 0x11B0 */
long long call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x11C0 */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x11D0 */
long long arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a5 + a4 + a3 + a1 + a2);
}


/* Function: call_arm_aapcs @ 0x11E0 */
long long call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x11F0 */
long long mips_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a4 + a3 + a1 + a2);
}


/* Function: call_mips @ 0x1200 */
long long call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x1210 */
long long amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return (unsigned int)(a6 + a5 + a4 + a3 + a1 + a2);
}


/* Function: call_amd64_sysv @ 0x1220 */
long long call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x1230 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a5 + a4 + a3 + a1 + a2);
}


/* Function: call_ms_x64 @ 0x1240 */
long long call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1250 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a4 + a3 + a1 + a2);
}


/* Function: call_vectorcall @ 0x1260 */
long long call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x1270 */
long long mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1280 */
long long varargs_func(int a1, long long a2, long long a3, long long a4, long long a5, long long a6, double a7, ...)
{
 long long result; // rax
 va_list va; // [rsp+0h] [rbp-D8h] BYREF

 va_start(va, a7);
 result = 0;
 if ( a1 > 0 )
 {
 do
 {
 result = (unsigned int)((unsigned int)va_arg(va, unsigned int) + result);
 --a1;
 }
 while ( a1 );
 }
 va_end(va);
 return result;
}


/* Function: func_no_args @ 0x1340 */
long long func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1350 */
long long func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return (unsigned int)(a8 + a7 + a6 + a5 + a4 + a3 + a1 + a2);
}


/* Function: func_mixed_args @ 0x1370 */
long long func_mixed_args(int a1, const char *a2, int a3, double a4)
{
 int v5; // eax

 if ( a2 )
 v5 = strlen(a2);
 else
 v5 = 0;
 return (unsigned int)(int)((double)a3 + (double)(a1 + v5) + a4);
}


/* Function: func_struct_byval @ 0x13C0 */
long long func_struct_byval(long long a1, long long a2, long long a3, long long a4, long long a5, long long a6, char a7)
{
 long long v7; // rdx
 long long result; // rax

 v7 = 0;
 result = 0;
 do
 result += *((unsigned long long *)&a7 + v7++);
 while ( v7 != 16 );
 return result;
}


/* Function: func_struct_byptr @ 0x13E0 */
long long func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return (unsigned int)(*a1 * a1[1]);
 else
 return 0xFFFFFFFFLL;
}


/* Function: test_calling_conventions @ 0x1400 */
int test_calling_conventions(double a1)
{
 unsigned int v1; // eax
 long long i; // rax
 long long v3; // rax
 long long v4; // rsi
 unsigned long long v6[17]; // [rsp+0h] [rbp-88h]

 puts(s);
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
 v1 = varargs_func(5, 1, 2, 3, 4, 5, a1);
 printf(aCallL206, v1);
 printf(aCallL207, 42);
 printf(aCallL208, 36);
 printf(aCallL209, 117);
 for ( i = 1; i != 17; ++i )
 v6[i] = i;
 v3 = 0;
 v4 = 0;
 do
 v4 += v6[++v3];
 while ( v3 != 16 );
 printf(aCallL210, v4);
 return printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x15B0 */
long long param_by_value_int(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_by_value_int @ 0x15C0 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x15D0 */
long long param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x15E0 */
long long call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x15F0 */
long long param_array_decay()
{
 return 8;
}


/* Function: call_array_decay @ 0x1600 */
long long call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0x1610 */
long long param_string(char *a1)
{
 return (unsigned int)(*a1 + a1[1]);
}


/* Function: call_string_param @ 0x1620 */
long long call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x1630 */
long long param_ptr_array(long long a1, int a2)
{
 long long v2; // rdx
 long long result; // rax

 if ( a2 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result = (unsigned int)(**(char **)(a1 + 8 * v2++) + (unsigned int)result);
 while ( a2 != v2 );
 return result;
}


/* Function: call_ptr_array @ 0x1660 */
long long call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x1670 */
long long param_varargs(int a1, long long a2, long long a3, long long a4, long long a5, long long a6, double a7, ...)
{
 long long result; // rax
 va_list va; // [rsp+0h] [rbp-D8h] BYREF

 va_start(va, a7);
 result = 0;
 if ( a1 > 0 )
 {
 do
 {
 result = (unsigned int)((unsigned int)va_arg(va, unsigned int) + result);
 --a1;
 }
 while ( a1 );
 }
 va_end(va);
 return result;
}


/* Function: call_varargs_param @ 0x1730 */
long long call_varargs_param(
 double a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 long long a7)
{
 long long v7; // rax

 return param_varargs(4, 10, 20, 30, 40, a7, a1, v7);
}


/* Function: param_func_ptr @ 0x1760 */
long long param_func_ptr(unsigned int ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x1770 */
long long call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1780 */
long long param_double_ptr(unsigned int **a1, int a2)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 )
 {
 if ( *a1 )
 {
 **a1 = a2;
 *a1 = 0;
 return 1;
 }
 }
 return result;
}


/* Function: call_double_ptr @ 0x17B0 */
long long call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x17C0 */
long long param_complex_cast(unsigned int *a1, int a2)
{
 long long result; // rax

 if ( a2 == 1 )
 return *a1 + a1[1];
 result = 0xFFFFFFFFLL;
 if ( !a2 )
 return *a1;
 return result;
}


/* Function: call_complex_cast @ 0x17E0 */
long long call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x17F0 */
long long param_struct_byval(
 long long a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 long long a14)
{
 return (unsigned int)(a7 + HIDWORD(a14));
}


/* Function: call_struct_byval @ 0x1800 */
long long call_struct_byval()
{
 long long i; // rax
 unsigned int v2[16]; // [rsp+0h] [rbp-40h]

 for ( i = 0; i != 16; ++i )
 v2[i] = i;
 return (unsigned int)(v2[0] + v2[15]);
}


/* Function: param_order_dep @ 0x1830 */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1840 */
long long call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0x1850 */
int test_parameter_passing(double a1)
{
 long long v1; // rbx
 long long v2; // r9
 int v3; // eax
 unsigned int v5[18]; // [rsp+0h] [rbp-48h]

 puts(asc_236F);
 v1 = 0;
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 8);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 v3 = param_varargs(4, 10, 20, 30, 40, v2, a1);
 printf("PARAM-L2-04: %d\n", v3);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 do
 {
 v5[v1] = v1;
 ++v1;
 }
 while ( v1 != 16 );
 printf("PARAM-L3-04: %d\n", v5[0] + v5[15]);
 return printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0x1970 */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x1980 */
long long call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1990 */
long long ret_pointer(long long a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x19A0 */
long long call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x19B0 */
long long ret_small_struct(unsigned int a1, long long a2)
{
 return (a2 << 32) | a1;
}


/* Function: call_ret_small_struct @ 0x19C0 */
long long call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x19D0 */
long long ret_large_struct(long long a1, int a2)
{
 long long result; // rax
 long long i; // rdx

 result = a1;
 for ( i = 0; i != 16; ++i )
 *(unsigned int *)(a1 + 4 * i) = a2 + i;
 return result;
}


/* Function: call_ret_large_struct @ 0x1A00 */
long long call_ret_large_struct()
{
 long long i; // rax
 unsigned int v2[16]; // [rsp+0h] [rbp-40h]

 for ( i = 0; i != 16; ++i )
 v2[i] = i + 100;
 return (unsigned int)(v2[0] + v2[15]);
}


/* Function: func_a @ 0x1A30 */
long long func_a(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: func_b @ 0x1A40 */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: ret_func_ptr @ 0x1A50 */
long long ( * ret_func_ptr(int a1))(int a1)
{
 long long ( *result)(int); // rax

 result = func_b;
 if ( !a1 )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1A70 */
long long call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1A80 */
int * ret_opaque_handle(int a1)
{
 int *result; // rax

 result = (int *)&ret_opaque_handle_handle2;
 if ( !a1 )
 return &ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x1AA0 */
long long call_ret_opaque()
{
 return (unsigned int)ret_opaque_handle_handle1;
}


/* Function: ret_complex_expr @ 0x1AB0 */
long long ret_complex_expr(int a1, int a2, int a3)
{
 long long result; // rax

 result = (unsigned int)(a3 + 10);
 if ( a1 > a2 )
 return (unsigned int)(2 * a3);
 return result;
}


/* Function: call_ret_complex_expr @ 0x1AC0 */
long long call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1AD0 */
long long ret_multi_branch(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 < 3 )
 return 10 * a1 + 10;
 return result;
}


/* Function: call_ret_multi_branch @ 0x1AF0 */
long long call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1B00 */
long long ret_void(int a1, unsigned int *a2)
{
 long long result; // rax

 result = (unsigned int)(3 * a1);
 *a2 = result;
 return result;
}


/* Function: call_ret_void @ 0x1B10 */
long long call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1B20 */
int test_return_values()
{
 long long v0; // rbx
 unsigned int v2[18]; // [rsp+0h] [rbp-48h]

 puts(asc_2390);
 v0 = 0;
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 do
 {
 v2[v0] = v0 + 100;
 ++v0;
 }
 while ( v0 != 16 );
 printf(aRetL104D, (unsigned int)(v2[0] + v2[15]));
 printf(aRetL201D, 10);
 printf(aRetL202D, (unsigned int)ret_opaque_handle_handle1);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 return printf(aRetL303D, 21);
}


/* Function: main @ 0x1C00 */
int main(int argc, const char **argv, const char **envp)
{
 double v3; // xmm0_8

 test_calling_conventions(v3);
 test_parameter_passing(v3);
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x1C14 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4060 */

/* FAILED to decompile: puts @ 0x4068 */

/* FAILED to decompile: strlen @ 0x4070 */

/* FAILED to decompile: printf @ 0x4078 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4080 */

/* FAILED to decompile: __gmon_start__ @ 0x4090 */

/* Total functions decompiled: 78, failed: 6 */
