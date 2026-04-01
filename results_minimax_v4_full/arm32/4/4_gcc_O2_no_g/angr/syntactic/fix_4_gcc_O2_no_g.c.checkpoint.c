// Angr Decompilation of 4_gcc_O2_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */

// Stub implementations for ARM floating point helper functions
unsigned int armg_calculate_flag_v(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3) { return 0; }
unsigned int armg_calculate_flag_c(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3) { return 0; }
unsigned int armg_calculate_condition(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3) { return 0; }

// ARM floating point helper function declarations
unsigned int __floatsidf(unsigned int a0);
unsigned int __aeabi_l2d(unsigned int a0, unsigned int a1);
unsigned int __aeabi_dadd(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int __aeabi_d2iz(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);

// Handle definitions
unsigned int handle1_1 = 0;
unsigned int __glibc___stack_chk_guard = 0;
unsigned int g_22008 = 0;



// Function: sub_103e8 at 0x103e8
extern unsigned int g_22008;
#define NULL ((void*)0)

int sub_103e8()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return g_22008;
}


// Function: main at 0x1045c
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



// Function: sub_104ac at 0x104ac
void sub_104ac()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: func_a at 0x1056c
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x10574
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: cdecl_func at 0x1057c
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_cdecl at 0x10584
unsigned int call_cdecl()
{
 return 15;
}


// Function: stdcall_func at 0x1058c
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: call_stdcall at 0x10594
unsigned int call_stdcall()
{
 return 50;
}


// Function: fastcall_func at 0x1059c
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: call_fastcall at 0x105a8
unsigned int call_fastcall()
{
 return 6;
}


// Function: call_thiscall at 0x105b0
unsigned int call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x105b8
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_arm_aapcs at 0x105d0
unsigned int call_arm_aapcs()
{
 return 15;
}


// Function: mips_func at 0x105d8
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x105e8
unsigned int call_mips()
{
 return 100;
}


// Function: amd64_sysv_func at 0x105f0
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x10610
unsigned int call_amd64_sysv()
{
 return 21;
}


// Function: ms_x64_func at 0x10618
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_ms_x64 at 0x10630
unsigned int call_ms_x64()
{
 return 15;
}


// Function: vectorcall_func at 0x10638
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x10648
unsigned int call_vectorcall()
{
 return 10;
}


// Function: mixed_conventions_test at 0x10650
unsigned int mixed_conventions_test()
{
 return 33;
}


// Function: varargs_func at 0x10658
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


// Function: func_no_args at 0x106dc
unsigned int func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x106e4
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x1070c
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int v0; // r4
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int v3; // r1
 unsigned int v4; // r0

 v0 = a0;
 if (a1)
 v0 += strlen(a1);
 v1 = __floatsidf(v0);
 v2 = __aeabi_l2d(a2, a3);
 v3 = __aeabi_dadd(v1, 0, v2, 0);
 v4 = __aeabi_d2iz(__aeabi_dadd(v1, 0, v2, 0), a1, a2, a3);
 return __aeabi_d2iz(__aeabi_dadd(v1, 0, v2, 0), a1, a2, a3);
}


// Function: func_struct_byval at 0x10770
int func_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char *i; // r3
 unsigned int v6; // r0
 unsigned int v7; // r0
 char *ptr; // r3
 char *v9; // r3
 unsigned int v10; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]
 char *v4; // [bp+0x70]

 v0 = a0;
 v1 = a1;
 v2 = a2;
 v3 = a3;
 i = &v0;
 v6 = 0;
 do
 {
 v7 = v6;
 ptr = i;
 v9 = ptr + 2;
 v10 = *(ptr) + v7;
 i = v9;
 v6 = v10;
 } while (i != v4);
 return *(ptr) + v7;
}


// Function: func_struct_byptr at 0x107a4
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


// Function: test_calling_conventions at 0x107bc
extern unsigned int __glibc___stack_chk_guard;
extern char g_114cc;
extern char g_11590;
extern char g_115b8;
extern char g_115dc;
extern char g_11604;
extern char g_1162c;
extern char g_11658;

int test_calling_conventions()
{
 unsigned int v6; // r3
 unsigned int v7; // r2
 unsigned int *cur; // r1 - changed from unsigned int cur[2]
 unsigned int v9; // r0
 char *i; // r3
 unsigned int v11; // r2
 unsigned int v12; // r0
 unsigned int v0; // [bp-0x118]
 unsigned int v1; // [bp-0x114]
 char v2; // [bp-0x110]
 char v3; // [bp-0x90]
 unsigned int v13; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 puts(0x114cc);
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
 v0 = 4;
 v1 = 5;
 __printf_chk(1, 0x11590, varargs_func(5, 1, 2, 3));
 __printf_chk(1, 0x115b8, 42);
 __printf_chk(1, 0x115dc, 36);
 __printf_chk(1, 0x11604, 117);
 v6 = 1;
 v7 = 0;
 cur = (unsigned int*)&v2;
 do
 {
 v9 = v6 + 1;
 cur[0] = v6;
 cur[1] = v7;
 v7 += armg_calculate_flag_c(1, v6, 1, 0);
 cur += 1;
 v6 = v9;
 } while (v6 - 17 || v7);
 memcpy(&v3, &v2, 128);
 i = &v3;
 do
 {
 i += 8;
 } while (&v13 != i);
 __printf_chk(1, 0x1162c, v11);
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v12 = __printf_chk(1, 0x11658, 50);
 return __printf_chk(1, 0x11658, 50);
}


// Function: param_by_value_int at 0x109c4
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_by_value_int at 0x109cc
unsigned int call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x109d4
unsigned int param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2 & 1;
 return 1;
}


// Function: call_by_value_ptr at 0x109ec
unsigned int call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x109f4
unsigned int param_array_decay()
{
 return 4;
}


// Function: call_array_decay at 0x109fc
unsigned int call_array_decay()
{
 return 4;
}


// Function: param_string at 0x10a04
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: call_string_param at 0x10a14
unsigned int call_string_param()
{
 return 173;
}


typedef struct struct_0 {
 unsigned int field_0;
} struct_0;

// Function: param_ptr_array at 0x10a1c
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
 goto LABEL_10a2c;
 return 0;
LABEL_10a2c:
 v1 = a0 + 1;
 i = v1;
 do
 {
 v3 = v0;
 v4 = i + 1;
 v6 = v3 + i[1]->field_0;
 i = v4;
 v0 = v6;
 } while (i != &v1[a1]);
 return v3 + v5;
}


// Function: call_ptr_array at 0x10a4c
unsigned int call_ptr_array()
{
 return 300;
}


// Function: param_varargs at 0x10a54
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


// Function: call_varargs_param at 0x10ad8
unsigned int call_varargs_param()
{
 unsigned int v2; // lr
 unsigned int v3; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = 40;
 v3 = param_varargs(4, 10, 20, 30);
 return param_varargs(4, 10, 20, 30);
}


// Function: param_func_ptr at 0x10b04
int param_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x10b1c
unsigned int call_func_ptr_param()
{
 return 20;
}


typedef struct struct_0_inner {
 struct struct_0_inner *field_0;
} struct_0_inner;

// Function: param_ptr_array at 0x10a1c
unsigned int param_double_ptr(struct_0 **ptr, unsigned int a1)
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


// Function: call_double_ptr at 0x10b54
unsigned int call_double_ptr()
{
 return 21;
}


// Function: param_complex_cast at 0x10b5c
typedef struct struct_0_local {
 struct struct_0_local *field_0;
} struct_0_local;

struct_0_local * param_complex_cast(struct_0_local **a0, unsigned int a1)
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


// Function: call_complex_cast at 0x10b80
unsigned int call_complex_cast()
{
 return 305419896;
}


// Function: param_struct_byval at 0x10b8c
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a0 + a15;
}


// Function: call_struct_byval at 0x10ba8
extern unsigned int __glibc___stack_chk_guard;

int call_struct_byval()
{
 unsigned int v4; // lr
 unsigned int i; // r3
 unsigned int *ptr; // r2
 unsigned int *v7; // r2
 unsigned int v0; // [bp-0x4c]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 i = 0;
 ptr = &v0;
 do
 {
 v7 = ptr + 1;
 *(ptr) = i;
 i += 1;
 ptr = v7;
 } while (i != 16);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v0 + v1;
}


// Function: param_order_dep at 0x10c0c
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_order_dep at 0x10c14
unsigned int call_order_dep()
{
 return 4;
}


// Function: test_parameter_passing at 0x10c1c
extern unsigned int __glibc___stack_chk_guard;
extern char g_11688;

int test_parameter_passing()
{
 unsigned int i; // r3
 unsigned int *ptr; // r2
 unsigned int *v7; // r2
 unsigned int v8; // r0
 unsigned int v0; // [bp-0x58]
 unsigned int v1; // [bp-0x4c]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 puts(0x11688);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 4);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 __printf_chk(1, "PARAM-L2-03: %d\n", 300);
 v0 = 40;
 __printf_chk(1, "PARAM-L2-04: %d\n", param_varargs(4, 10, 20, 30));
 __printf_chk(1, "PARAM-L3-01: %d\n", 20);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 i = 0;
 ptr = &v1;
 do
 {
 v7 = ptr + 1;
 *(ptr) = i;
 i += 1;
 ptr = v7;
 } while (i != 16);
 __printf_chk(1, "PARAM-L3-04: %d\n", v1 + v2);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v8 = __printf_chk(1, "PARAM-L3-05: %d\n", 4);
 return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


// Function: ret_basic_type at 0x10d84
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x10d8c
unsigned int call_ret_basic()
{
 return 42;
}


// Function: ret_pointer at 0x10d94
int ret_pointer(unsigned int a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x10d9c
unsigned int call_ret_pointer()
{
 return 20;
}


// Function: ret_small_struct at 0x10da4
unsigned int* ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 *(ptr) = a1;
 ptr[1] = a2;
 return ptr;
}


// Function: call_ret_small_struct at 0x10dac
unsigned int call_ret_small_struct()
{
 return 7;
}


// Function: ret_large_struct at 0x10db4
extern unsigned int __glibc___stack_chk_guard;

unsigned int* ret_large_struct(unsigned int *ptr, unsigned int a1)
{
 unsigned int *p; // r3
 unsigned int *v18; // r3
 unsigned int v0; // [bp-0x4c]
 unsigned int v1; // [bp-0x48]
 unsigned int v2; // [bp-0x44]
 unsigned int v3; // [bp-0x40]
 unsigned int v4; // [bp-0x3c]
 unsigned int v5; // [bp-0x38]
 unsigned int v6; // [bp-0x34]
 unsigned int v7; // [bp-0x30]
 unsigned int v8; // [bp-0x2c]
 unsigned int v9; // [bp-0x28]
 unsigned int v10; // [bp-0x24]
 unsigned int v11; // [bp-0x20]
 unsigned int v12; // [bp-0x1c]
 unsigned int v13; // [bp-0x18]
 unsigned int v14; // [bp-0x14]
 unsigned int v15; // [bp-0x10]
 unsigned int v16; // [bp-0xc]

 v16 = __glibc___stack_chk_guard;
 p = &v0;
 do
 {
 v18 = p + 1;
 *(p) = a1;
 a1 += 1;
 p = v18;
 } while (p != &v16);
 *(ptr) = v0;
 ptr[1] = v1;
 ptr[2] = v2;
 ptr[3] = v3;
 ptr[4] = v4;
 ptr[5] = v5;
 ptr[6] = v6;
 ptr[7] = v7;
 ptr = ptr;
 *(ptr) = v8;
 ptr[1] = v9;
 ptr[2] = v10;
 ptr[3] = v11;
 *(ptr) = v12;
 ptr[1] = v13;
 ptr[2] = v14;
 ptr[3] = v15;
 if ((v16 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return ptr;
}


// Function: call_ret_large_struct at 0x10e3c
extern unsigned int __glibc___stack_chk_guard;

int call_ret_large_struct()
{
 unsigned int v4; // lr
 unsigned int i; // r3
 unsigned int *ptr; // r2
 unsigned int *v7; // r2
 unsigned int v0; // [bp-0x4c]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 i = 100;
 ptr = &v0;
 do
 {
 v7 = ptr + 1;
 *(ptr) = i;
 i += 1;
 ptr = v7;
 } while (i != 116);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v1 + v0;
}


// Function: ret_func_ptr at 0x10ea0
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


// Function: call_ret_func_ptr at 0x10ec0
unsigned int call_ret_func_ptr()
{
 return 10;
}


// Function: ret_opaque_handle at 0x10ec8
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
 return 139336;
}


// Function: call_ret_opaque at 0x10ee4
extern unsigned int handle1_1;

int call_ret_opaque()
{
 return handle1_1;
}


// Function: ret_complex_expr at 0x10ef4
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


// Function: call_ret_complex_expr at 0x10f04
unsigned int call_ret_complex_expr()
{
 return 40;
}


// Function: ret_multi_branch at 0x10f0c
unsigned int ret_multi_branch(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 if (a0 <= 2)
 {
 v0 = a0 + 1;
 if (!armg_calculate_condition(146, a0, 2, 0))
 goto LABEL_10f16;
LABEL_10f15:
 v1 = v0 * 5;
 if (!armg_calculate_condition(146, a0, 2, 0))
 goto LABEL_10f1a;
LABEL_10f19:
 if (!armg_calculate_condition(130, a0, 2, 0))
 return v1 * 2;
 }
 else
 {
 v0 = a0;
 if (armg_calculate_condition(146, a0, 2, 0))
 goto LABEL_10f15;
LABEL_10f16:
 v1 = v0;
 if (armg_calculate_condition(146, a0, 2, 0))
 goto LABEL_10f19;
LABEL_10f1a:
 if (!armg_calculate_condition(130, a0, 2, 0))
 return v1;
 }
 return 4294967295;
}


// Function: call_ret_multi_branch at 0x10f24
unsigned int call_ret_multi_branch()
{
 return 60;
}


// Function: ret_void at 0x10f2c
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return a0 * 3;
}


// Function: call_ret_void at 0x10f38
unsigned int call_ret_void()
{
 return 21;
}


// Function: test_return_values at 0x10f40
extern char g_11788;
extern char g_117a8;
extern char g_117c4;
extern char g_117e0;
extern char g_117fc;
extern char g_1181c;
extern char g_11838;
extern char g_11858;
extern char g_11874;
extern char g_11890;
extern unsigned int handle1_1;

int test_return_values()
{
 unsigned int v1; // r0

 puts(0x11788);
 __printf_chk(1, 0x117a8, 42);
 __printf_chk(1, 0x117c4, 20);
 __printf_chk(1, 0x117e0, 7);
 __printf_chk(1, 0x117fc, call_ret_large_struct());
 __printf_chk(1, 0x1181c, 10);
 __printf_chk(1, 0x11838, handle1_1);
 __printf_chk(1, 0x11858, 40);
 __printf_chk(1, 0x11874, 60);
 v1 = __printf_chk(1, 0x11890, 21);
 return __printf_chk(1, 0x11890, 21);
}


// Function: __aeabi_drsub at 0x11014
static unsigned int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd(a0, a1, a2, a3);
 return __aeabi_dadd(a0, a1, a2, a3);
}






/* CRT stub function __aeabi_dadd removed by preprocessor */



// Function: __aeabi_ui2d at 0x112cc
unsigned int __aeabi_ui2d(unsigned int a0, unsigned int a1)
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
 goto LABEL_112d8;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_112d8;
 return a0;
 }
LABEL_112d8:
 v2 = v0;
 v1 = v9;
 v0 = v10;
}


// Function: __floatsidf at 0x112f0
unsigned int __floatsidf(unsigned int a0)
{
 return a0;
}

// Function: __extendsfdf2 at 0x11318
unsigned int __extendsfdf2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
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
 goto LABEL_1132e;
LABEL_1132d:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_11332;
LABEL_11331:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_11338;
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
 goto LABEL_1132d;
LABEL_1132e:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_11331;
LABEL_11332:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_11338;
 return v4;
 }
LABEL_11338:
 if ((v3 & 16777215))
 goto LABEL_11340;
 return v4;
LABEL_11340:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_1134c;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_1134c;
 return v4;
 }
LABEL_1134c:
 v2 = v0;
 v1 = v9;
 v0 = v10;
}


// Function: __floatundidf at 0x11360
unsigned int __floatundidf(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v6; // r12
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_11368;
 return a0;
LABEL_11368:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a1 >> 22;
 if (!a1 >> 22)
 {
 // Empty then-block leads to label at end of compound statement
 }
 return 0;
}


// Function: __aeabi_l2d at 0x11374
unsigned int __aeabi_l2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_1137c;
 return a0;
LABEL_1137c:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 if (!(a1 & 0x80000000) >> 31)
 {
 // handle the case
 }
 return 0;
}


/* CRT stub function __aeabi_d2iz removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */



