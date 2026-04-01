// Angr Decompilation of 4_clang_O3_g
// Platform: AARCH64

#include <string.h>
#include <stdlib.h>
#include <stdio.h>


/* CRT stub function _init removed by preprocessor */

// Declare CRT stub functions
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
unsigned long long frame_dummy(void);
int arm64g_calculate_condition(int a0, unsigned int a1, unsigned int a2, unsigned int a3);

// Declare standard library functions
int printf(const char *format, ...);
int puts(const char *s);
void abort(void);
unsigned long strlen(const char *s);

// Define CRT stub functions
void deregister_tm_clones(void)
{
 return;
}

void __do_global_dtors_aux(void)
{
 return;
}

unsigned long long frame_dummy(void)
{
 return 0;
}

// Helper functions
unsigned long long AddV(unsigned long long a, unsigned long long b)
{
 return a + b;
}

int arm64g_calculate_condition(int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return 1;
}

#define __ROL__(val, n) (((val) << (n)) | ((val) >> (32 - (n))))

// Global struct definitions
typedef struct struct_0 {
 char field_0;
 char field_8;
 char field_24;
} struct_0;

typedef struct struct_1 {
 char field_0;
} struct_1;

typedef struct struct_2 {
 char field_0;
} struct_2;

// Define missing global variables
unsigned long long g_412ff8 = 0;
char g_4014a8[] = "VARARGS-L1-01: %d\n";
char g_4014d0[] = "PARAM-L1-03: %d\n";
char g_4014f2[] = "PARAM-L1-04: %d\n";
char g_401519[] = "PARAM-L1-05: %d\n";
char g_401541[] = "PARAM-L1-06: %d\n";
char g_40156d[] = "PARAM-L1-07: %d\n";
char g_401752[] = "CALLING CONVENTIONS TEST";
char g_401773[] = "PARAMETER PASSING TEST";
char g_401655[] = "RET-L1-01: %d\n";
char g_401671[] = "RET-L1-02: %d\n";
char g_40168d[] = "RET-L1-03: %d\n";
char g_4016a8[] = "RET-L1-04: %d\n";
char g_4016c5[] = "RET-L1-05: %d\n";
char g_4016e1[] = "RET-L1-06: %d\n";
char g_4016fe[] = "RET-L1-07: %d\n";
char g_40171a[] = "RET-L1-08: %d\n";
char g_401736[] = "RET-L1-09: %d\n";
char g_401794[] = "RETURN VALUES TEST";
unsigned int ret_opaque_handle_handle1 = 42;
char ret_opaque_handle_handle2 = 0;

// Function: __dollar_x at 0x400640
long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return 0;
}


// Function: sub_400654 at 0x400654
long long sub_400654()
{
 char *v0 = ""; // x0
 unsigned long long len; // x0

 len = strlen(v0);
 return strlen(v0);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400730 at 0x400730
void sub_400730()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400748 at 0x400748
void sub_400748()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4007bc at 0x4007bc
void sub_4007bc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400808 at 0x400808
long long sub_400808()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: cdecl_func at 0x400814
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_cdecl at 0x40081c
unsigned long long call_cdecl()
{
 return 15;
}


// Function: stdcall_func at 0x400824
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: call_stdcall at 0x40082c
unsigned long long call_stdcall()
{
 return 50;
}


// Function: fastcall_func at 0x400834
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a1 + a0 + a2;
}


// Function: call_fastcall at 0x400840
unsigned long long call_fastcall()
{
 return 6;
}


// Function: call_thiscall at 0x400848
unsigned long long call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x400850
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x400864
unsigned long long call_arm_aapcs()
{
 return 15;
}


// Function: mips_func at 0x40086c
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_mips at 0x40087c
unsigned long long call_mips()
{
 return 100;
}


// Function: amd64_sysv_func at 0x400884
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x40089c
unsigned long long call_amd64_sysv()
{
 return 21;
}


// Function: ms_x64_func at 0x4008a4
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x4008b8
unsigned long long call_ms_x64()
{
 return 15;
}


// Function: vectorcall_func at 0x4008c0
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_vectorcall at 0x4008d0
unsigned long long call_vectorcall()
{
 return 10;
}


// Function: mixed_conventions_test at 0x4008d8
unsigned long long mixed_conventions_test()
{
 return 33;
}


// Function: varargs_func at 0x4008e0
unsigned int varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 (void)a1; (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7;
 return a0 * 20;
}


// Function: func_no_args at 0x400a78
unsigned long long func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x400a80
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x400aa0
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2)
{
 unsigned long long v3; // d8
 unsigned int v4; // w0
 unsigned int v5; // s0
 unsigned long long v0; // [bp-0x30]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v0 = v3;
 v1 = &v2;
 if (a1)
 v4 = strlen(a1);
 else
 v4 = 0;
 return v4 + a0 + v5 + a2;
}


// Function: func_struct_byval at 0x400af8
int func_struct_byval(unsigned int *a0)
{
 return 0;
}


// Function: func_struct_byptr at 0x400b78
unsigned long long func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0) * a0[1];
}


// Function: test_calling_conventions at 0x400b90
int test_calling_conventions(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401752);
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
 printf(g_4014a8, varargs_func(5, 1, 2, 3, 4, 5, a6, a7) & 4294967295);
 printf(g_4014d0, 42);
 printf(g_4014f2, 36);
 printf(g_401519, 117);
 printf(g_401541, 136);
 return printf(g_40156d, 50);
}


// Function: param_by_value_int at 0x400cc4
unsigned int param_by_value_int(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_by_value_int at 0x400ccc
unsigned long long call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x400cd4
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = (*(ptr) * 2 | *(ptr) >> 31) & 4294967294;
 return 1;
}


// Function: call_by_value_ptr at 0x400cec
unsigned long long call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x400cf4
unsigned long long param_array_decay()
{
 return 8;
}


// Function: call_array_decay at 0x400cfc
unsigned long long call_array_decay()
{
 return 8;
}


// Function: param_string at 0x400d04
int param_string(char *a0)
{
 return a0[1] + *(a0);
}


// Function: call_string_param at 0x400d14
unsigned long long call_string_param()
{
 return 173;
}


// Function: param_ptr_array at 0x400d1c
unsigned long long param_ptr_array(struct_0 *a0, unsigned int a1)
{
 unsigned long v0; // x9
 unsigned long long v1; // x10
 unsigned long long j; // x9
 unsigned long long v2; // x8
 unsigned long long v3; // x8
 unsigned long long v4; // x11
 struct_0 *v5; // x12
 unsigned long long i; // x13
 struct_0 *v9; // x11

 if (a1 < 1)
 return 0;
 v0 = a1;
 if (a1 == 1)
 {
 v1 = 0;
 v2 = 0;
 }
 else
 {
 v1 = v0 & 4294967294;
 v3 = 0;
 v4 = 0;
 v5 = (struct_0 *)((char *)a0 + 8);
 i = v1;
 do
 {
 v3 += ((struct_0 *)((char *)v5 + 8))->field_0;
 v4 += v5->field_0;
 v5 = (struct_0 *)((char *)v5 + 1);
 i -= 2;
 } while (i != 2);
 v2 = v4 + v3;
 if (v1 == v0)
 return v4 + v3 & 4294967295;
 }
 v9 = (struct_0 *)((char *)a0 + v1);
 j = v0 - v1;
 do
 {
 v2 += v9->field_0;
 j -= 1;
 v9 = (struct_0 *)((char *)v9 + 8);
 } while (j != 1);
 return v2 & 4294967295;
}


// Function: call_ptr_array at 0x400da8
unsigned long long call_ptr_array()
{
 return 300;
}


// Function: param_varargs at 0x400db0
unsigned int param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 (void)a1; (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7;
 return a0 * 25;
}


// Function: call_varargs_param at 0x400f48
int call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 return param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
}


// Function: param_func_ptr at 0x400f60
typedef int (*func_ptr_t)(unsigned int);
int param_func_ptr(func_ptr_t a0, unsigned int a1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x400f80
unsigned long long call_func_ptr_param()
{
 return 20;
}


// Function: param_double_ptr at 0x400f88

unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 if (!ptr)
 {
 return 4294967295;
 }
 else if (*(ptr))
 {
 (*ptr)->field_0 = a1;
 *(ptr) = NULL;
 return 1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_double_ptr at 0x400fb0
unsigned long long call_double_ptr()
{
 return 21;
}


// Function: param_complex_cast at 0x400fb8
unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1)
{
 if (a1 == 1)
 {
 return a0[1] + *(a0);
 }
 else if (!a1)
 {
 return *(a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_complex_cast at 0x400fe0
unsigned long long call_complex_cast()
{
 return 305419896;
}


// Function: param_struct_byval at 0x400fec
int param_struct_byval(unsigned int *a0)
{
 return a0[15] + *(a0);
}


// Function: call_struct_byval at 0x400ffc
unsigned long long call_struct_byval()
{
 return 15;
}


// Function: param_order_dep at 0x401004
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_order_dep at 0x40100c
unsigned long long call_order_dep()
{
 return 3;
}


// Function: test_parameter_passing at 0x401014
int test_parameter_passing(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401773);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 8);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 printf("PARAM-L2-04: %d\n", param_varargs(4, 10, 20, 30, 40, a5, a6, a7) & 4294967295);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 printf("PARAM-L3-04: %d\n", 15);
 return printf("PARAM-L3-05: %d\n", 3);
}


// Function: ret_basic_type at 0x4010f8
unsigned int ret_basic_type(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_ret_basic at 0x401100
unsigned long long call_ret_basic()
{
 return 42;
}


// Function: ret_pointer at 0x401108
long long ret_pointer(unsigned long a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x401110
unsigned long long call_ret_pointer()
{
 return 20;
}


// Function: ret_small_struct at 0x401118
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
 return a0 & 4294967295 | (a1 * 0x100000000 | a1 >> 32) & 0xffffffff00000000;
}


// Function: call_ret_small_struct at 0x401124
unsigned long long call_ret_small_struct()
{
 return 7;
}


// Function: ret_large_struct at 0x40112c
long long ret_large_struct(unsigned long a0)
{
 unsigned long long v0; // q3
 struct_0 local_ptr; // x8
 unsigned long v2; // d3

 v0 = a0 & 4294967295 | (a0 & 4294967295) * 0x100000000;
 local_ptr.field_0 = a0;
 return (long long)a0;
}


// Function: call_ret_large_struct at 0x401184
unsigned long long call_ret_large_struct()
{
 return 215;
}


// Function: func_a at 0x40118c
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x401194
unsigned int func_b(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: ret_func_ptr at 0x40119c
long long ret_func_ptr(unsigned int a0)
{
 if (a0)
 return (long long)func_b;
 return (long long)func_a;
}


// Function: call_ret_func_ptr at 0x4011b8
unsigned long long call_ret_func_ptr()
{
 return 10;
}


// Function: ret_opaque_handle at 0x4011c0
long long ret_opaque_handle(unsigned int a0)
{
 if (a0)
 return (long long)&ret_opaque_handle_handle2;
 return (long long)"d";
}


// Function: call_ret_opaque at 0x4011d8
int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


// Function: ret_complex_expr at 0x4011e4
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a1 >= a0)
 return a2 + 10;
 return __ROL__(a2, 1) & 4294967294;
}


// Function: call_ret_complex_expr at 0x4011f8
unsigned long long call_ret_complex_expr()
{
 return 40;
}


// Function: ret_multi_branch at 0x401200
unsigned long long ret_multi_branch(unsigned int a0)
{
 if (a0 >= 3)
 return 4294967295;
 return 10 * a0 + 10;
}


// Function: call_ret_multi_branch at 0x401218
unsigned long long call_ret_multi_branch()
{
 return 60;
}


// Function: ret_void at 0x401220
long long ret_void(unsigned long a0, unsigned int *ptr)
{
 *(ptr) = (unsigned int)a0 * 3;
 return a0;
}


// Function: call_ret_void at 0x40122c
unsigned long long call_ret_void()
{
 return 21;
}


// Function: test_return_values at 0x401234
int test_return_values()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401794);
 printf(g_401655, 42);
 printf(g_401671, 20);
 printf(g_40168d, 7);
 printf(g_4016a8, 215);
 printf(g_4016c5, 10);
 printf(g_4016e1, ret_opaque_handle_handle1);
 printf(g_4016fe, 40);
 printf(g_40171a, 60);
 return printf(g_401736, 21);
}


// Function: main at 0x4012e0
int main(int argc, char **argv)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]
 unsigned long a0 = 0;
 unsigned long a1 = 0;
 unsigned long a2 = 0;
 unsigned long a3 = 0;
 unsigned long a4 = 0;
 unsigned long long a5 = 0;
 unsigned long long a6 = 0;
 unsigned long long a7 = 0;

 v0 = &v1;
 test_parameter_passing(test_calling_conventions(a0, a1, a2, a3, a4, a5, a6, a7), a1, a2, a3, a4, a5, a6, a7);
 puts(g_401794);
 printf(g_401655, 42);
 printf(g_401671, 20);
 printf(g_40168d, 7);
 printf(g_4016a8, 215);
 printf(g_4016c5, 10);
 printf(g_4016e1, ret_opaque_handle_handle1);
 printf(g_4016fe, 40);
 printf(g_40171a, 60);
 printf(g_401736, 21);
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


