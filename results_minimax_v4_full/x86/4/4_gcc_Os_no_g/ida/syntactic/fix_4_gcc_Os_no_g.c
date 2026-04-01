/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>

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
 * Binary: build/x86/4/4_gcc_Os_no_g
 * Processor: pc
 */

/* External symbols (typically from CRT or data sections) */
extern void (*_gmon_start__)(void);
extern char asc_2008[];
extern char unk_20C9[];
extern char unk_20F1[];
extern char unk_2113[];
extern char unk_213A[];
extern char unk_2162[];
extern char unk_218E[];
extern char unk_22C1[];
extern char unk_22DD[];
extern char unk_22F9[];
extern char unk_2314[];
extern char unk_2331[];
extern char unk_234D[];
extern char unk_236A[];
extern char unk_2386[];
extern char unk_23A2[];
extern int *handle1_1;
extern int handle2_0;
extern char off_4008[];
extern char asc_21C7[];
extern char asc_22A3[];

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
    __asm__ volatile("jmp *8(%ebx)");
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
int sub_1090(int a1)
{
 return (*(int (**)(void))(a1 + 36))();
}


/* Function: main @ 0x10F0 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_113C @ 0x113C */
void sub_113C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1140 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1279 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x127D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: func_a @ 0x1281 */
int func_a(int a1)
{
 return a1 + 10;
}


/* Function: func_b @ 0x1290 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: callback_func @ 0x129E */
int callback_func(int a1)
{
 return 2 * a1;
}


/* Function: cdecl_func @ 0x12AC */
int cdecl_func(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_cdecl @ 0x12BB */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x12C5 */
int stdcall_func(int a1, int a2)
{
 return a1 * a2;
}


/* Function: call_stdcall @ 0x12D7 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x12E1 */
int fastcall_func(int a1, int a2, int a3)
{
 return a3 + a1 + a2;
}


/* Function: call_fastcall @ 0x12F2 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x12FC */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1306 */
int arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a1 + a2;
}


/* Function: call_arm_aapcs @ 0x131E */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x1328 */
int mips_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a1 + a2;
}


/* Function: call_mips @ 0x133D */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x1347 */
int amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return a6 + a5 + a4 + a3 + a1 + a2;
}


/* Function: call_amd64_sysv @ 0x1362 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x136C */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a1 + a2;
}


/* Function: call_ms_x64 @ 0x1384 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x138E */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a1 + a2;
}


/* Function: call_vectorcall @ 0x13A3 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x13AD */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x13B7 */
int varargs_func(int a1, ...)
{
 int v2; // eax
 int v3; // edx
 va_list args;

 v2 = 0;
 v3 = 0;
 va_start(args, a1);
 while ( v2 < a1 )
 {
 v3 += va_arg(args, int);
 v2++;
 }
 va_end(args);
 return v3;
}


/* Function: func_no_args @ 0x13D4 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x13DE */
int func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return a8 + a7 + a6 + a5 + a4 + a3 + a1 + a2;
}


/* Function: func_mixed_args @ 0x13FF */
int func_mixed_args(int a1, char *s, double a3, long long a4)
{
 size_t v4; // eax
 long double v5; // fst7

 v4 = 0;
 v5 = a3;
 if ( s )
 {
 v4 = strlen(s);
 v5 = a3;
 }
 return (int)(v5 + (long double)(int)(a1 + v4) + (long double)a4);
}


/* Function: func_struct_byval @ 0x1471 */
long long func_struct_byval(unsigned int a1_0, unsigned int a2_0, unsigned int a1_1, unsigned int a2_1, unsigned int a1_2, unsigned int a2_2, unsigned int a1_3, unsigned int a2_3, unsigned int a1_4, unsigned int a2_4, unsigned int a1_5, unsigned int a2_5, unsigned int a1_6, unsigned int a2_6, unsigned int a1_7, unsigned int a2_7, unsigned int a1_8, unsigned int a2_8, unsigned int a1_9, unsigned int a2_9, unsigned int a1_10, unsigned int a2_10, unsigned int a1_11, unsigned int a2_11, unsigned int a1_12, unsigned int a2_12, unsigned int a1_13, unsigned int a2_13, unsigned int a1_14, unsigned int a2_14, unsigned int a1_15, unsigned int a2_15)
{
 int v2; // ecx
 long long result; // rax

 // Store all 32 32-bit values in an array for easy access
 unsigned int values[32] = {
     a1_0, a2_0, a1_1, a2_1, a1_2, a2_2, a1_3, a2_3,
     a1_4, a2_4, a1_5, a2_5, a1_6, a2_6, a1_7, a2_7,
     a1_8, a2_8, a1_9, a2_9, a1_10, a2_10, a1_11, a2_11,
     a1_12, a2_12, a1_13, a2_13, a1_14, a2_14, a1_15, a2_15
 };

 result = 0;
 v2 = 0;
 do
 {
 result = result + ((((unsigned long long)values[2 * v2 + 1]) << 32) | ((unsigned long long)values[2 * v2]));
 ++v2;
 }
 while ( v2 != 16 );
 return result;
}


/* Function: func_struct_byptr @ 0x148E */
int func_struct_byptr(unsigned int *a1)
{
 int result; // eax

 result = -1;
 if ( a1 )
 return a1[1] * *a1;
 return result;
}


/* Function: test_calling_conventions @ 0x14A7 */
int test_calling_conventions()
{
 int v0; // eax
 long long i; // rax
 int v2; // eax
 long long v3; // kr08_8
 unsigned long long v5[16]; // [esp+0h] [ebp-11Ch] BYREF
 unsigned long long v6[16]; // [esp+80h] [ebp-9Ch] BYREF
 int v7; // [esp+100h] [ebp-1Ch]
 int v8; // [esp+10Ch] [ebp-10h]

 puts(asc_2008);
 __printf_chk(1, "CALL-L1-01: %d\n", 15);
 __printf_chk(1, "CALL-L1-02: %d\n", 50);
 __printf_chk(1, "CALL-L1-03: %d\n", 6);
 __printf_chk(1, "CALL-L1-04: %d\n", 15);
 __printf_chk(1, "CALL-L1-05: %d\n", 15);
 __printf_chk(1, "CALL-L1-06: %d\n", 100);
 __printf_chk(1, "CALL-L1-07: %d\n", 21);
 __printf_chk(1, "CALL-L1-08: %d\n", 15);
 __printf_chk(1, "CALL-L1-09: %d\n", 10);
 __printf_chk(1, "CALL-L1-10: %d\n", 33);
 v6[15] = 0x300000002LL;
 v0 = varargs_func(5, 1);
 __printf_chk(1, &unk_20C9, v0);
 __printf_chk(1, &unk_20F1, 42);
 __printf_chk(1, &unk_2113, 36);
 __printf_chk(1, &unk_213A, 117);
 for ( i = 1; i != 17; ++i )
 v5[(int)i - 1] = i;
 v2 = 0;
 qmemcpy(v6, v5, sizeof(v6));
 v3 = 0;
 do
 v3 += v6[v2++];
 while ( v2 != 16 );
 v8 = 16;
 __printf_chk(1, &unk_2162, v3);
 __printf_chk(1, &unk_218E, 50);
 return v7 - __readgsdword(0x14u);
}


/* Function: param_by_value_int @ 0x1688 */
int param_by_value_int(int a1)
{
 return 2 * a1;
}


/* Function: call_by_value_int @ 0x1696 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x16A0 */
int param_by_value_ptr(unsigned int *a1)
{
 *a1 = *a1 * 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x16B3 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x16BD */
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0x16C7 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x16D1 */
int param_string(char *a1)
{
 return a1[1] + *a1;
}


/* Function: call_string_param @ 0x16E6 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x16F0 */
int param_ptr_array(int a1, int a2)
{
 int v2; // eax
 int v3; // edx
 char *v4; // ebx

 v2 = 0;
 v3 = 0;
 while ( v2 < a2 )
 {
 v4 = *(char **)(a1 + 4 * v2++);
 v3 += *v4;
 }
 return v3;
}


/* Function: call_ptr_array @ 0x1714 */
int call_ptr_array()
{
 unsigned char v1[12]; // [esp-1Ch] [ebp-1Ch] BYREF
 unsigned int v2; // [esp-10h] [ebp-10h]

 v2 = __readgsdword(0x14u);
 qmemcpy(v1, &off_4008, sizeof(v1));
 return param_ptr_array((int)v1, 3);
}


/* Function: param_varargs @ 0x176C */
int param_varargs(int a1, ...)
{
 int v2; // eax
 int v3; // edx
 va_list args;

 v2 = 0;
 v3 = 0;
 va_start(args, a1);
 while ( v2 < a1 )
 {
 v3 += va_arg(args, int);
 v2++;
 }
 va_end(args);
 return v3;
}


/* Function: call_varargs_param @ 0x1789 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30);
}


/* Function: param_func_ptr @ 0x17A4 */
int param_func_ptr(int (*a1)(int), int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x17B9 */
int call_func_ptr_param()
{
 return param_func_ptr((int ( *)(int))callback_func, 5);
}


/* Function: param_double_ptr @ 0x17DD */
int param_double_ptr(unsigned int **a1, int a2)
{
 int result; // eax

 result = -1;
 if ( a1 )
 {
 if ( *a1 )
 {
 **a1 = a2;
 result = 1;
 *a1 = 0;
 }
 }
 return result;
}


/* Function: call_double_ptr @ 0x1806 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1810 */
int param_complex_cast(unsigned int *a1, int a2)
{
 int result; // eax

 if ( !a2 )
 return *a1;
 result = -1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return result;
}


/* Function: call_complex_cast @ 0x1832 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x183C */
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


/* Function: call_struct_byval @ 0x184B */
long long call_struct_byval()
{
 int i; // eax
 long long result; // rax
 unsigned int v2[16]; // [esp+Ch] [ebp-4Ch]
 unsigned int v3; // [esp+4Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i != 16; ++i )
 v2[i] = i;
 LODWORD(result) = v2[0] + v2[15];
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: param_order_dep @ 0x1883 */
int param_order_dep(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_order_dep @ 0x1892 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x189C */
int test_parameter_passing()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax

 puts(asc_21C7);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 4);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 v0 = call_ptr_array();
 __printf_chk(1, "PARAM-L2-03: %d\n", v0);
 v1 = call_varargs_param();
 __printf_chk(1, "PARAM-L2-04: %d\n", v1);
 v2 = call_func_ptr_param();
 __printf_chk(1, "PARAM-L3-01: %d\n", v2);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 v3 = call_struct_byval();
 __printf_chk(1, "PARAM-L3-04: %d\n", v3);
 return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x19AD */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x19BB */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x19C5 */
int ret_pointer(int a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x19D4 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x19DE */
unsigned int *ret_small_struct(unsigned int *a1, int a2, int a3)
{
 unsigned int *result; // eax

 result = a1;
 *a1 = a2;
 a1[1] = a3;
 return result;
}


/* Function: call_ret_small_struct @ 0x19F7 */
int call_ret_small_struct()
{
 unsigned int v[2];
 ret_small_struct(v, 3, 4);
 return v[0] + v[1];
}


/* Function: ret_large_struct @ 0x1A01 */
void *ret_large_struct(void *a1, int a2)
{
 int v2; // ecx
 void *result; // eax
 unsigned int v4[19]; // [esp+Ch] [ebp-4Ch] BYREF

 v2 = 0;
 result = a1;
 v4[16] = __readgsdword(0x14u);
 do
 {
 v4[v2] = v2 + a2;
 ++v2;
 }
 while ( v2 != 16 );
 qmemcpy(a1, v4, 0x40u);
 return result;
}


/* Function: call_ret_large_struct @ 0x1A4D */
long long call_ret_large_struct()
{
 long long result; // rax
 unsigned int v1[16]; // [esp+14h] [ebp-4Ch] BYREF
 unsigned int v2; // [esp+54h] [ebp-Ch]

 v2 = __readgsdword(0x14u);
 ret_large_struct(v1, 100);
 result = (long long)(v1[0] + v1[15]) | ((long long)(v2 - __readgsdword(0x14u)) << 32);
 return result;
}


/* Function: ret_func_ptr @ 0x1A86 */
int (*ret_func_ptr(int a1))(int)
{
 int ( *result)(int); // eax

 result = func_a;
 if ( a1 )
 return func_b;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1AAC */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1AB6 */
int *ret_opaque_handle(int a1)
{
 int *result; // eax

 result = (int *)&handle2_0;
 if ( !a1 )
 return handle1_1;
 return result;
}


/* Function: call_ret_opaque @ 0x1ADC */
int *call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x1AF1 */
int ret_complex_expr(int a1, int a2, int a3)
{
 int result; // eax

 result = a3 + 10;
 if ( a1 > a2 )
 return 2 * a3;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1B0C */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1B16 */
int ret_multi_branch(unsigned int a1)
{
 int result; // eax

 result = -1;
 if ( a1 <= 2 )
 return 10 * (a1 + 1);
 return result;
}


/* Function: call_ret_multi_branch @ 0x1B30 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1B3A */
unsigned int * ret_void(int a1, unsigned int *a2)
{
 unsigned int *result; // eax

 result = a2;
 *a2 = 3 * a1;
 return result;
}


/* Function: call_ret_void @ 0x1B4C */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1B56 */
int test_return_values()
{
 int v0; // eax

 puts(asc_22A3);
 __printf_chk(1, &unk_22C1, 42);
 __printf_chk(1, &unk_22DD, 20);
 __printf_chk(1, &unk_22F9, 7);
 v0 = call_ret_large_struct();
 __printf_chk(1, &unk_2314, v0);
 __printf_chk(1, &unk_2331, 10);
 __printf_chk(1, &unk_234D, handle1_1);
 __printf_chk(1, &unk_236A, 40);
 __printf_chk(1, &unk_2386, 60);
 return __printf_chk(1, &unk_23A2, 21);
}


/* Function: __x86.get_pc_thunk.ax @ 0x1C33 */
void *_x86_get_pc_thunk_ax()
{
 return 0;
}


/* Function: __stack_chk_fail_local @ 0x1C40 */
void _stack_chk_fail_local()
{
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1CAC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x4030 */

/* FAILED to decompile: __stack_chk_fail @ 0x4034 */

/* FAILED to decompile: __cxa_finalize @ 0x4038 */

/* FAILED to decompile: puts @ 0x403C */

/* FAILED to decompile: strlen @ 0x4040 */

/* FAILED to decompile: __printf_chk @ 0x4044 */

/* Total functions decompiled: 92, failed: 6 */
