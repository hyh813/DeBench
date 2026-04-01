// Angr Decompilation of 4_gcc_O3_g
// Platform: ARMEL
#include <stddef.h>

// Angr helper function stubs
unsigned int armg_calculate_condition(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3) {
    return 0;
}

unsigned int armg_calculate_flag_c(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3) {
    return 0;
}

unsigned int armg_calculate_flag_v(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3) {
    return 0;
}

/* CRT stub function _init removed by preprocessor */



// Function: sub_103c4 at 0x103c4
extern unsigned int g_22008;
unsigned int g_22008 = 0;

int sub_103c4()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return g_22008;
}


// Function: main at 0x1042c
unsigned int main()
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 unsigned int v4; // r2
 unsigned int v5; // r3
 unsigned int v6; // r0
 char v0; // [bp-0x8]
 char v1; // [bp-0x4]

 v2 = test_calling_conventions();
 v6 = test_parameter_passing(v2, v3, v4, v5, *((int *)&v0), *((int *)&v1));
 test_return_values(v6, v3, v4, v5);
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_1047c at 0x1047c
void sub_1047c()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: func_a at 0x1053c
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: param_varargs_constprop_0 at 0x10544
extern unsigned int __glibc___stack_chk_guard;

int param_varargs_constprop_0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 char v4; // [bp+0x0]

 v3 = a1;
 v2 = a0;
 v1 = __glibc___stack_chk_guard;
 v0 = &v3;
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v3 + a2 + a3 + *((int *)&v4);
}


// Function: varargs_func_constprop_0 at 0x105b4
extern unsigned int __glibc___stack_chk_guard;

int varargs_func_constprop_0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = a1;
 v2 = a0;
 v1 = __glibc___stack_chk_guard;
 v0 = &v3;
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v3 + a2 + a3 + a4 + a5;
}


// Function: func_b at 0x10628
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: cdecl_func at 0x10630
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_cdecl at 0x10638
unsigned int call_cdecl()
{
 return 15;
}


// Function: stdcall_func at 0x10640
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: call_stdcall at 0x10648
unsigned int call_stdcall()
{
 return 50;
}


// Function: fastcall_func at 0x10650
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: call_fastcall at 0x1065c
unsigned int call_fastcall()
{
 return 6;
}


// Function: call_thiscall at 0x10664
unsigned int call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x1066c
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_arm_aapcs at 0x10684
unsigned int call_arm_aapcs()
{
 return 15;
}


// Function: mips_func at 0x1068c
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x1069c
unsigned int call_mips()
{
 return 100;
}


// Function: amd64_sysv_func at 0x106a4
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x106c4
unsigned int call_amd64_sysv()
{
 return 21;
}


// Function: ms_x64_func at 0x106cc
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_ms_x64 at 0x106e4
unsigned int call_ms_x64()
{
 return 15;
}


// Function: vectorcall_func at 0x106ec
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x106fc
unsigned int call_vectorcall()
{
 return 10;
}


// Function: mixed_conventions_test at 0x10704
unsigned int mixed_conventions_test()
{
 return 33;
}


// Function: varargs_func at 0x1070c
extern unsigned int __glibc___stack_chk_guard;

unsigned int varargs_func(unsigned int i, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char *ptr;
 unsigned int v6; // r3
 unsigned int v7; // r0
 char *v8;
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]
 unsigned int v4; // [bp-0x4]

 v4 = a3;
 v3 = a2;
 v2 = a1;
 ptr = (char *)&v2;
 v1 = __glibc___stack_chk_guard;
 v0 = (char *)&v2;
 if (i > 0)
 {
 v6 = 0;
 v7 = 0;
 do
 {
 v8 = ptr + 1;
 v6 += 1;
 v7 += *(ptr);
 ptr = v8;
 } while (i != v6);
 }
 else
 {
 v7 = 0;
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v7;
}


// Function: func_no_args at 0x10790
unsigned int func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x10798
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x107c0
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int v0; // r4
 unsigned int v1; // r0
 unsigned int v2; // r1
 unsigned int v3; // r0
 unsigned int v4; // r0

 v0 = a0;
 if (a1)
 v0 += strlen(a1);
 v1 = __aeabi_dadd(__floatsidf(v0), a1, a2, a3);
 v3 = __aeabi_dadd(v1, v2, __aeabi_l2d(a4, a5), v2);
 v4 = __aeabi_d2iz(v3, a1, a2, a3);
 return __aeabi_d2iz(v3, a1, a2, a3);
}


// Function: func_struct_byval at 0x10824
int func_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15, unsigned int a16, unsigned int a17, unsigned int a18, unsigned int a19, unsigned int a20, unsigned int a21, unsigned int a22, unsigned int a23, unsigned int a24, unsigned int a25, unsigned int a26, unsigned int a27, unsigned int a28, unsigned int a29, unsigned int a30)
{
 unsigned int v0; // lr

 return a0 + v0 + a4 + a6 + a8 + a10 + a12 + a14 + a16 + a18 + a20 + a22 + a24 + a26 + a28 + a30;
}


// Function: func_struct_byptr at 0x108b8
unsigned int func_struct_byptr(unsigned int *ptr, unsigned int a1, unsigned int a2, unsigned int a3)
{
 if (ptr)
 {
 if (!armg_calculate_condition(2, ptr, 0, 0))
 return ptr[1] * *(ptr);
 }
 else
 {
 if (!armg_calculate_condition(2, ptr, 0, 0))
 return 0;
 }
 return 4294967295;
}


// Function: test_calling_conventions at 0x108d0
extern char g_1143c;
extern char g_11500;
extern char g_11528;
extern char g_1154c;
extern char g_11574;
extern char g_1159c;
extern char g_115c8;

int test_calling_conventions()
{
 unsigned int v1; // r0

 puts(0x1143c);
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
 __printf_chk(1, 0x11500, varargs_func_constprop_0(5, 1, 2, 3, 4, 5));
 __printf_chk(1, 0x11528, 42);
 __printf_chk(1, 0x1154c, 36);
 __printf_chk(1, 0x11574, 117);
 __printf_chk(1, 0x1159c, 136);
 v1 = __printf_chk(1, 0x115c8, 50);
 return __printf_chk(1, 0x115c8, 50);
}


// Function: param_by_value_int at 0x10a4c
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_by_value_int at 0x10a54
unsigned int call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x10a5c
unsigned int param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2 & 1;
 return 1;
}


// Function: call_by_value_ptr at 0x10a74
unsigned int call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x10a7c
unsigned int param_array_decay()
{
 return 4;
}


// Function: call_array_decay at 0x10a84
unsigned int call_array_decay()
{
 return 4;
}


// Function: param_string at 0x10a8c
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: call_string_param at 0x10a9c
unsigned int call_string_param()
{
 return 173;
}


// Function: param_ptr_array at 0x10aa4
typedef struct struct_ptr_array {
 char field_0;
} struct_ptr_array;

unsigned int param_ptr_array(struct_ptr_array **a0, unsigned int a1)
{
 unsigned int* v0; // r0
 struct_ptr_array **v1; // r3
 struct_ptr_array **i; // r3
 unsigned int v3; // r0
 struct_ptr_array **v4; // r3
 unsigned int v5; // r2
 unsigned int v6; // r0

 v0 = (unsigned int*)0;
 if (a1 > 0)
 goto LABEL_10ab4;
 return 0;
LABEL_10ab4:
 v1 = a0 + 1;
 i = v1;
 do
 {
 v3 = (unsigned int)v0;
 v4 = i + 1;
 v6 = v3 + i[1]->field_0;
 i = v4;
 v0 = (unsigned int*)v6;
 } while (v1 != i);
 return (unsigned int)v0;
}


// Function: call_ptr_array at 0x10ad4
unsigned int call_ptr_array()
{
 return 300;
}


// Function: param_varargs at 0x10adc
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_varargs(unsigned int i, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char *ptr;
 unsigned int v6; // r3
 unsigned int v7; // r0
 char *v8;
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]
 unsigned int v4; // [bp-0x4]

 v4 = a3;
 v3 = a2;
 v2 = a1;
 ptr = (char *)&v2;
 v1 = __glibc___stack_chk_guard;
 v0 = (char *)&v2;
 if (i > 0)
 {
 v6 = 0;
 v7 = 0;
 do
 {
 v8 = ptr + 1;
 v6 += 1;
 v7 += *(ptr);
 ptr = v8;
 } while (i != v6);
 }
 else
 {
 v7 = 0;
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v7;
}


// Function: call_varargs_param at 0x10b60
unsigned int call_varargs_param()
{
 unsigned int v2; // lr
 unsigned int v3; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = 40;
 v3 = param_varargs_constprop_0(4, 10, 20, 30);
 return param_varargs_constprop_0(4, 10, 20, 30);
}


// Function: param_func_ptr at 0x10b8c
typedef unsigned int (*func_ptr_t)(unsigned int);
int param_func_ptr(func_ptr_t a0, unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x10ba4
unsigned int call_func_ptr_param()
{
 return 20;
}


// Function: param_double_ptr at 0x10bac
typedef struct struct_double_ptr {
 unsigned int field_0;
} struct_double_ptr;

unsigned int param_double_ptr(struct_double_ptr **ptr, unsigned int a1)
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


// Function: call_double_ptr at 0x10bdc
unsigned int call_double_ptr()
{
 return 21;
}


// Function: param_complex_cast at 0x10be4
typedef struct struct_0 {
 struct struct_0 *field_0;
} struct_0;

struct_0 ** param_complex_cast(struct_0 **a0, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int v1; // r2

 if (!a1)
 return *(a0);
 if (armg_calculate_condition(2, a1, 1, 0))
 {
 if (!armg_calculate_condition(18, a1, 1, 0))
 return v0 + v1;
 }
 else
 {
 if (!armg_calculate_condition(18, a1, 1, 0))
 return a0;
 }
 return 0xffffffff;
}


// Function: call_complex_cast at 0x10c08
unsigned int call_complex_cast()
{
 return 305419896;
}


// Function: param_struct_byval at 0x10c14
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a0 + a15;
}


// Function: call_struct_byval at 0x10c30
unsigned int call_struct_byval()
{
 return 15;
}


// Function: param_order_dep at 0x10c38
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_order_dep at 0x10c40
unsigned int call_order_dep()
{
 return 4;
}


// Function: test_parameter_passing at 0x10c48
extern char g_115f8;

int test_parameter_passing()
{
 unsigned int v2; // r0
 unsigned int v0; // [bp-0x10]

 puts(0x115f8);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 4);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 __printf_chk(1, "PARAM-L2-03: %d\n", 300);
 v0 = 40;
 __printf_chk(1, "PARAM-L2-04: %d\n", param_varargs_constprop_0(4, 10, 20, 30));
 __printf_chk(1, "PARAM-L3-01: %d\n", 20);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 __printf_chk(1, "PARAM-L3-04: %d\n", 15);
 v2 = __printf_chk(1, "PARAM-L3-05: %d\n", 4);
 return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


// Function: ret_basic_type at 0x10d60
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x10d68
unsigned int call_ret_basic()
{
 return 42;
}


// Function: ret_pointer at 0x10d70
int ret_pointer(unsigned int a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x10d78
unsigned int call_ret_pointer()
{
 return 20;
}


// Function: ret_small_struct at 0x10d80
unsigned int *ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 *(ptr) = a1;
 ptr[1] = a2;
 return ptr;
}


// Function: call_ret_small_struct at 0x10d88
unsigned int call_ret_small_struct()
{
 return 7;
}


// Function: ret_large_struct at 0x10d90
unsigned int *ret_large_struct(unsigned int *ptr, unsigned int a1)
{
 *(ptr) = a1;
 ptr[1] = a1 + 1;
 ptr[2] = a1 + 2;
 ptr[3] = a1 + 3;
 ptr[4] = a1 + 4;
 ptr[5] = a1 + 5;
 ptr[6] = a1 + 6;
 ptr[7] = a1 + 7;
 ptr[8] = a1 + 8;
 ptr[9] = a1 + 9;
 ptr[10] = a1 + 10;
 ptr[11] = a1 + 11;
 ptr[12] = a1 + 12;
 ptr[13] = a1 + 13;
 ptr[14] = a1 + 14;
 ptr[15] = a1 + 15;
 return ptr;
}


// Function: call_ret_large_struct at 0x10e0c
unsigned int call_ret_large_struct()
{
 return 215;
}


// Function: ret_func_ptr at 0x10e14
unsigned int ret_func_ptr(unsigned int a0)
{
 if (a0)
 {
 if (!armg_calculate_condition(2, a0, 0, 0))
 return func_b;
 }
 else
 {
 if (!armg_calculate_condition(2, a0, 0, 0))
 return 0;
 }
 return func_a;
}


// Function: call_ret_func_ptr at 0x10e34
unsigned int call_ret_func_ptr()
{
 return 10;
}


// Function: ret_opaque_handle at 0x10e3c
extern unsigned int handle2_0;

unsigned int ret_opaque_handle(unsigned int a0)
{
 unsigned int v1; // r0

 if (!a0)
 {
 v1 = "d";
 if (!armg_calculate_condition(18, a0, 0, 0))
 return v1;
 }
 else if (!armg_calculate_condition(18, v1, 0, 0))
 {
 return a0;
 }
 return 139328;
}


// Function: call_ret_opaque at 0x10e58
extern unsigned int handle1_1;
unsigned int handle1_1 = 0;

int call_ret_opaque()
{
 return handle1_1;
}


// Function: ret_complex_expr at 0x10e68
unsigned int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v1; // r0

 if (a1 < a0)
 {
 v1 = a2 * 2;
 if (!armg_calculate_condition(210, a0, a1, 0))
 return v1;
 }
 else if (!armg_calculate_condition(210, v1, a1, 0))
 {
 return a0;
 }
 return a2 + 10;
}


// Function: call_ret_complex_expr at 0x10e78
unsigned int call_ret_complex_expr()
{
 return 40;
}


// Function: ret_multi_branch at 0x10e80
unsigned int ret_multi_branch(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 if (a0 <= 2)
 {
 v0 = a0 + 1;
 if (!armg_calculate_condition(146, a0, 2, 0))
 goto LABEL_10e8a;
LABEL_10e89:
 v1 = v0 * 5;
 if (!armg_calculate_condition(146, a0, 2, 0))
 goto LABEL_10e8e;
LABEL_10e8d:
 if (!armg_calculate_condition(130, a0, 2, 0))
 return v1 * 2;
 }
 else
 {
 v0 = a0;
 if (armg_calculate_condition(146, a0, 2, 0))
 goto LABEL_10e89;
LABEL_10e8a:
 v1 = v0;
 if (armg_calculate_condition(146, a0, 2, 0))
 goto LABEL_10e8d;
LABEL_10e8e:
 if (!armg_calculate_condition(130, a0, 2, 0))
 return v1;
 }
 return 4294967295;
}


// Function: call_ret_multi_branch at 0x10e98
unsigned int call_ret_multi_branch()
{
 return 60;
}


// Function: ret_void at 0x10ea0
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return a0 * 3;
}


// Function: call_ret_void at 0x10eac
unsigned int call_ret_void()
{
 return 21;
}


// Function: test_return_values at 0x10eb4
extern char g_116f8;
extern char g_11718;
extern char g_11734;
extern char g_11750;
extern char g_1176c;
extern char g_1178c;
extern char g_117a8;
extern char g_117c8;
extern char g_117e4;
extern char g_11800;
extern unsigned int handle1_1;

int test_return_values()
{
 unsigned int v0; // r0

 puts(0x116f8);
 __printf_chk(1, 0x11718, 42);
 __printf_chk(1, 0x11734, 20);
 __printf_chk(1, 0x11750, 7);
 __printf_chk(1, 0x1176c, 215);
 __printf_chk(1, 0x1178c, 10);
 __printf_chk(1, 0x117a8, handle1_1);
 __printf_chk(1, 0x117c8, 40);
 __printf_chk(1, 0x117e4, 60);
 v0 = __printf_chk(1, 0x11800, 21);
 return __printf_chk(1, 0x11800, 21);
}


// Function: __aeabi_drsub at 0x10f84
// Compiler built-in function - removed conflicting definition


// Function: __subdf3 at 0x10f8c
// Compiler built-in function - removed conflicting definition



/* CRT stub function __aeabi_dadd removed by preprocessor */



// Function: __aeabi_ui2d at 0x1123c
// Compiler built-in function - removed conflicting definition


// Function: __floatsidf at 0x11260
// Compiler built-in function - removed conflicting definition


// Function: __extendsfdf2 at 0x11288
// Compiler built-in function - removed conflicting definition


// Function: __floatundidf at 0x112d0
// Compiler built-in function - removed conflicting definition


// Function: __aeabi_l2d at 0x112e4
// Compiler built-in function - removed conflicting definition



/* CRT stub function __aeabi_d2iz removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */


