// Angr Decompilation of 4_gcc_O3_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */

#include <stddef.h>


// External declarations for linker undefined references
extern unsigned int armg_calculate_condition(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int armg_calculate_flag_c(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int armg_calculate_flag_v(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int handle1_1;

// Stub implementations for linker
unsigned int armg_calculate_condition(unsigned int cc_op, unsigned int cc_dep1, unsigned int cc_dep2, unsigned int cc_ndep)
{
    // ARM condition code calculation - simplified stub
    // This would need proper implementation based on actual ARM emulator behavior
    return cc_dep1;
}

unsigned int armg_calculate_flag_c(unsigned int cc_op, unsigned int cc_dep1, unsigned int cc_dep2, unsigned int cc_ndep)
{
    // ARM flag C calculation - simplified stub
    // Return the carry flag value
    return cc_dep2;
}

unsigned int armg_calculate_flag_v(unsigned int cc_op, unsigned int cc_dep1, unsigned int cc_dep2, unsigned int cc_ndep)
{
    // ARM flag V calculation - simplified stub
    // Return the overflow flag value
    return cc_ndep;
}

// Global variable definition for handle1_1
unsigned int handle1_1 = 0;


// Function: sub_103c4 at 0x103c4

int sub_103c4()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
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
 char *ptr; // r2
 unsigned int v6; // r3
 unsigned int v7; // r0
 char *v8; // r2
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]
 unsigned int v4; // [bp-0x4]

 v4 = a3;
 v3 = a2;
 v2 = a1;
 ptr = &v2;
 v1 = __glibc___stack_chk_guard;
 v0 = &v2;
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
extern unsigned int __aeabi_dadd(unsigned int, unsigned int, unsigned int, unsigned int);
static unsigned int __floatsidf(unsigned int, unsigned int);
static unsigned int __aeabi_l2d(unsigned int, unsigned int);
extern unsigned int __aeabi_d2iz(unsigned int, unsigned int, unsigned int, unsigned int);

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
 v1 = __aeabi_dadd(__floatsidf(v0, 0), a1, a2, a3);
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
typedef struct struct_0 {
 char field_0;
} struct_0;

unsigned int param_ptr_array(struct_0 **a0, unsigned int a1)
{
 unsigned int v0; // r0
 struct_0 **v1; // r3
 struct_0 **i; // r3
 unsigned int v3; // r0
 struct_0 **v4; // r3
 unsigned int v5; // r2
 unsigned int v6; // r0

 v0 = 0;
 if (a1 > 0)
 goto LABEL_10ab4;
 return 0;
LABEL_10ab4:
 v1 = a0 + 1;
 i = v1;
 do
 {
 v3 = v0;
 v4 = i + 1;
 v6 = v3 + i[1]->field_0;
 i = v4;
 v0 = v6;
 } while (&v1[a1] != i);
 return v3 + v5;
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
 char *ptr; // r2
 unsigned int v6; // r3
 unsigned int v7; // r0
 char *v8; // r2
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]
 unsigned int v4; // [bp-0x4]

 v4 = a3;
 v3 = a2;
 v2 = a1;
 ptr = &v2;
 v1 = __glibc___stack_chk_guard;
 v0 = &v2;
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
int param_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 return (*a0)(a1) + 10;
}


// Function: call_func_ptr_param at 0x10ba4
unsigned int call_func_ptr_param()
{
 return 20;
}


// Function: param_double_ptr at 0x10bac
typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int param_double_ptr(struct_1 **ptr, unsigned int a1)
{
 if (!ptr)
 {
 return 4294967295;
 }
 else if (*ptr)
 {
 (*ptr)->field_0 = a1;
 *ptr = NULL;
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
typedef struct struct_2 {
 struct struct_2 *field_0;
} struct_2;

struct_2 ** param_complex_cast(struct_2 **a0, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int v1; // r2

 if (!a1)
 return *(a0);
 if (a1 != 1)
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
// This is a library function - making it static to avoid multiple definition
static int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd(a0, a1, a2, a3);
 return __aeabi_dadd(a0, a1, a2, a3);
}


// Function: __subdf3 at 0x10f8c
// Making static to avoid multiple definition
static int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd(a0, a1, a2, a3);
 return __aeabi_dadd(a0, a1, a2, a3);
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



// Function: __aeabi_ui2d at 0x1123c
// Making static to avoid multiple definition
static unsigned int __aeabi_ui2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // cc_op
 unsigned int v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // r5
 unsigned int v10; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11248;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11248;
 return a0;
 }
LABEL_11248:
 return v2;
}


// Function: __floatsidf at 0x11260
// Making static to avoid multiple definition
static unsigned int __floatsidf(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // cc_op
 unsigned int v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // r5
 unsigned int v10; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_1126c;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_1126c;
 return a0;
 }
LABEL_1126c:
 return v2;
}


// Function: __extendsfdf2 at 0x11288
// Making static to avoid multiple definition
static unsigned int __extendsfdf2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v3; // r2
 unsigned int v4; // r0
 unsigned int v13; // cc_ndep
 unsigned int v14; // cc_op
 unsigned int v15; // cc_dep1
 unsigned int v16; // cc_dep2
 unsigned int v17; // cc_ndep
 unsigned int v22; // cc_op
 unsigned int v5; // r3
 unsigned int v23; // cc_dep1
 unsigned int v24; // cc_dep2
 unsigned int v25; // cc_ndep
 unsigned int v6; // cc_op
 unsigned int v7; // cc_dep1
 unsigned int v42; // cc_dep1
 unsigned int v43; // cc_ndep
 unsigned int v44; // r5
 unsigned int v45; // r4
 unsigned int v8; // cc_dep2
 unsigned int v9; // cc_ndep
 unsigned int v10; // cc_op
 unsigned int v11; // cc_dep1
 unsigned int v12; // cc_dep2
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v3 = a0 * 2;
 v4 = v3 * 0x10000000;
 if (a0 * 2)
 {
 v5 = v3 & 0xff000000;
 v10 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? 5 : v6);
 v11 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v3 & 0xff000000 : v7);
 v12 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? 1 : v8);
 v13 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (!armg_calculate_condition(v10 | 16, v11, v12, v13))
 goto LABEL_1129e;
LABEL_1129d:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_112a2;
LABEL_112a1:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_112a8;
 return v4;
 }
 else
 {
 v5 = a3;
 v10 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? 5 : v14);
 v11 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? v3 & 0xff000000 : v15);
 v12 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? 1 : v16);
 v13 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? armg_calculate_flag_v(v14, v15, v16, v17) : v17);
 if (armg_calculate_condition(v10 | 16, v11, v12, v13))
 goto LABEL_1129d;
LABEL_1129e:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_112a1;
LABEL_112a2:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_112a8;
 return v4;
 }
LABEL_112a8:
 if ((v3 & 16777215))
 goto LABEL_112b0;
 return v4;
LABEL_112b0:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_112bc;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_112bc;
 return v4;
 }
LABEL_112bc:
 return v2;
}


// Function: __floatundidf at 0x112d0
// Making static to avoid multiple definition
static unsigned int __floatundidf(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v6; // r12
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_112d8;
 return a0;
LABEL_112d8:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a1 >> 22;
 if (!a1 >> 22)
 goto LABEL_0x1107c;
 return 0;
LABEL_0x1107c:
 return 0;
}


// Function: __aeabi_l2d at 0x112e4
// Making static to avoid multiple definition
static unsigned int __aeabi_l2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_112ec;
 return a0;
LABEL_112ec:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 if (!(a1 & 0x80000000) >> 31)
 goto LABEL_0x11300;
 return v0;
LABEL_0x11300:
 return v0;
}



/* CRT stub function __aeabi_d2iz removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */


