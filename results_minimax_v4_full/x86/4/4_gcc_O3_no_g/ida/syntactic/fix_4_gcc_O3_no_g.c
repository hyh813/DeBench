/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/4/4_gcc_O3_no_g
 * Processor: pc
 */

#include <stddef.h>

/* External declarations for string constants and globals */
static const char asc_2008[] = "Calling Convention Tests\n";
static const char unk_202C[] = "VARARG-01: %d\n";
static const char unk_2054[] = "VARARG-02: %d\n";
static const char unk_2078[] = "VARARG-03: %d\n";
static const char unk_20A0[] = "VARARG-04: %d\n";
static const char unk_20C8[] = "VARARG-05: %d\n";
static const char unk_20F4[] = "VARARG-06: %d\n";
static const char asc_2124[] = "Parameter Passing Tests\n";
static const char asc_22A0[] = "Return Value Tests\n";
static const char unk_22BE[] = "RET-01: %d\n";
static const char unk_22DA[] = "RET-02: %d\n";
static const char unk_22F6[] = "RET-03: %d\n";
static const char unk_2311[] = "RET-04: %d\n";
static const char unk_232E[] = "RET-05: %d\n";
static const char unk_234A[] = "RET-06: %d\n";
static const char unk_2367[] = "RET-07: %d\n";
static const char unk_2383[] = "RET-08: %d\n";
static const char unk_239F[] = "RET-09: %d\n";
extern int *handle1_1;
int *handle2_0;
int *handle1_1 = NULL;
extern void (*_gmon_start__)(void);


void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" : : : "memory");
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
int sub_1080(int a1)
{
 return (*(int (**)(void))(a1 + 32))();
}


/* Function: main @ 0x10D0 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_111C @ 0x111C */
void sub_111C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1120 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1259 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x125D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: func_a @ 0x1270 */
int func_a(int a1)
{
 return a1 + 10;
}


/* Function: param_varargs.constprop.0 @ 0x1280 */
int param_varargs_constprop_0(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a2 + a3;
}


/* Function: varargs_func.constprop.0 @ 0x12A0 */
int varargs_func_constprop_0(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return a6 + a5 + a4 + a2 + a3;
}


/* Function: func_b @ 0x12C0 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: cdecl_func @ 0x12D0 */
int cdecl_func(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_cdecl @ 0x12E0 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x12F0 */
int stdcall_func(int a1, int a2)
{
 return a1 * a2;
}


/* Function: call_stdcall @ 0x1300 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1310 */
int fastcall_func(int a1, int a2, int a3)
{
 return a3 + a1 + a2;
}


/* Function: call_fastcall @ 0x1320 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x1330 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1340 */
int arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a1 + a2;
}


/* Function: call_arm_aapcs @ 0x1360 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x1370 */
int mips_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a1 + a2;
}


/* Function: call_mips @ 0x1390 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x13A0 */
int amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return a6 + a5 + a4 + a3 + a1 + a2;
}


/* Function: call_amd64_sysv @ 0x13C0 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x13D0 */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a1 + a2;
}


/* Function: call_ms_x64 @ 0x13F0 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1400 */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a1 + a2;
}


/* Function: call_vectorcall @ 0x1420 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x1430 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1440 */
int varargs_func(int a1, char a2)
{
 int v2; // eax
 int v3; // edx

 if ( a1 <= 0 )
 return 0;
 v2 = 0;
 v3 = 0;
 do
 v3 += *((unsigned int *)&a2 + v2++);
 while ( a1 != v2 );
 return v3;
}


/* Function: func_no_args @ 0x1480 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1490 */
int func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return a8 + a7 + a6 + a5 + a4 + a3 + a1 + a2;
}


/* Function: func_mixed_args @ 0x14C0 */
int func_mixed_args(int a1, char *s, double a3, long long a4)
{
 long double v4; // fst7

 v4 = a3;
 if ( s )
 {
 v4 = a3;
 a1 += strlen(s);
 }
 return (int)(v4 + (long double)a1 + (long double)a4);
}


/* Function: func_struct_byval @ 0x1540 */
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
 int a31)
{
 return a31 + a29 + a27 + a25 + a23 + a21 + a19 + a17 + a15 + a13 + a11 + a9 + a7 + a5 + a1 + a3;
}


/* Function: func_struct_byptr @ 0x1590 */
int func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return a1[1] * *a1;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x15B0 */
int test_calling_conventions()
{
 int v0; // eax

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
 v0 = varargs_func_constprop_0(5, 1, 2, 3, 4, 5);
 __printf_chk(1, &unk_202C, v0);
 __printf_chk(1, &unk_2054, 42);
 __printf_chk(1, &unk_2078, 36);
 __printf_chk(1, &unk_20A0, 117);
 __printf_chk(1, &unk_20C8, 136);
 return __printf_chk(1, &unk_20F4, 50);
}


/* Function: param_by_value_int @ 0x1720 */
int param_by_value_int(int a1)
{
 return 2 * a1;
}


/* Function: call_by_value_int @ 0x1730 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x1740 */
int param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1750 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x1760 */
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0x1770 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x1780 */
int param_string(char *a1)
{
 return a1[1] + *a1;
}


/* Function: call_string_param @ 0x17A0 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x17B0 */
int param_ptr_array(char **a1, int a2)
{
 char **v2; // eax
 int v3; // edx
 char *v4; // ecx

 if ( a2 <= 0 )
 return 0;
 v2 = a1;
 v3 = 0;
 do
 {
 v4 = *v2++;
 v3 += *v4;
 }
 while ( &a1[a2] != v2 );
 return v3;
}


/* Function: call_ptr_array @ 0x17F0 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x1800 */
int param_varargs(int a1, char a2)
{
 int v2; // eax
 int v3; // edx

 if ( a1 <= 0 )
 return 0;
 v2 = 0;
 v3 = 0;
 do
 v3 += *((unsigned int *)&a2 + v2++);
 while ( a1 != v2 );
 return v3;
}


/* Function: call_varargs_param @ 0x1840 */
int call_varargs_param()
{
 return param_varargs_constprop_0(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1860 */
int param_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x1880 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1890 */
int param_double_ptr(unsigned int *a1, int a2)
{
 if ( !a1 || !*a1 )
 return -1;
 *(unsigned int *)*a1 = a2;
 *a1 = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x18C0 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x18D0 */
int param_complex_cast(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return -1;
}


/* Function: call_complex_cast @ 0x1900 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1910 */
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


/* Function: call_struct_byval @ 0x1920 */
int call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x1930 */
int param_order_dep(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_order_dep @ 0x1940 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x1950 */
int test_parameter_passing()
{
 int v0; // eax

 puts(asc_2124);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 4);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 __printf_chk(1, "PARAM-L2-03: %d\n", 300);
 v0 = param_varargs_constprop_0(4, 10, 20, 30, 40);
 __printf_chk(1, "PARAM-L2-04: %d\n", v0);
 __printf_chk(1, "PARAM-L3-01: %d\n", 20);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 __printf_chk(1, "PARAM-L3-04: %d\n", 15);
 return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x1A70 */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x1A80 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1A90 */
int ret_pointer(int a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1AA0 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1AB0 */
unsigned int * ret_small_struct(unsigned int *a1, int a2, int a3)
{
 unsigned int *result; // eax

 result = a1;
 *a1 = a2;
 a1[1] = a3;
 return result;
}


/* Function: call_ret_small_struct @ 0x1AD0 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1AE0 */
unsigned int * ret_large_struct(unsigned int *a1, int a2)
{
 unsigned int *result; // eax

 *a1 = a2;
 a1[1] = a2 + 1;
 a1[2] = a2 + 2;
 a1[3] = a2 + 3;
 a1[4] = a2 + 4;
 a1[5] = a2 + 5;
 a1[6] = a2 + 6;
 a1[7] = a2 + 7;
 a1[8] = a2 + 8;
 a1[9] = a2 + 9;
 a1[10] = a2 + 10;
 a1[11] = a2 + 11;
 a1[12] = a2 + 12;
 a1[13] = a2 + 13;
 a1[15] = a2 + 15;
 result = a1;
 a1[14] = a2 + 14;
 return result;
}


/* Function: call_ret_large_struct @ 0x1B50 */
int call_ret_large_struct()
{
 return 215;
}


/* Function: ret_func_ptr @ 0x1B60 */
int ( * ret_func_ptr(int a1))(int a1)
{
 int ( *result)(int); // eax

 result = func_b;
 if ( !a1 )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1B90 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1BA0 */
int ** ret_opaque_handle(int a1)
{
 int **result; // eax

 result = &handle1_1;
 if ( a1 )
 return (int **)&handle2_0;
 return result;
}


/* Function: call_ret_opaque @ 0x1BD0 */
int *call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x1BF0 */
int ret_complex_expr(int a1, int a2, int a3)
{
 int result; // eax

 result = a3 + 10;
 if ( a1 > a2 )
 return 2 * a3;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1C10 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1C20 */
int ret_multi_branch(unsigned int a1)
{
 int result; // eax

 result = -1;
 if ( a1 <= 2 )
 return 2 * (5 * a1 + 5);
 return result;
}


/* Function: call_ret_multi_branch @ 0x1C40 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1C50 */
unsigned int * ret_void(int a1, unsigned int *a2)
{
 unsigned int *result; // eax

 result = a2;
 *a2 = 3 * a1;
 return result;
}


/* Function: call_ret_void @ 0x1C70 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1C80 */
int test_return_values()
{
 puts(asc_22A0);
 __printf_chk(1, &unk_22BE, 42);
 __printf_chk(1, &unk_22DA, 20);
 __printf_chk(1, &unk_22F6, 7);
 __printf_chk(1, &unk_2311, 215);
 __printf_chk(1, &unk_232E, 10);
 __printf_chk(1, &unk_234A, handle1_1);
 __printf_chk(1, &unk_2367, 40);
 __printf_chk(1, &unk_2383, 60);
 return __printf_chk(1, &unk_239F, 21);
}


/* Function: __x86.get_pc_thunk.ax @ 0x1D56 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* FAILED to decompile: __libc_start_main @ 0x4020 */

/* FAILED to decompile: __cxa_finalize @ 0x4024 */

/* FAILED to decompile: puts @ 0x4028 */

/* FAILED to decompile: strlen @ 0x402C */

/* FAILED to decompile: __printf_chk @ 0x4030 */

/* Total functions decompiled: 91, failed: 5 */
