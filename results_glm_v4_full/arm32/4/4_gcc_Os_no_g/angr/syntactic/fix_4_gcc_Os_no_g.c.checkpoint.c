// Angr Decompilation of 4_gcc_Os_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */



// Function: sub_103e8 at 0x103e8
#include <stddef.h>
#include <stdbool.h>

extern unsigned int vvar_0;
extern unsigned int vvar_1;
extern unsigned int vvar_4;
extern unsigned int vvar_32;
unsigned int g_22008 = 0;

// Angr helper function stubs
int armg_calculate_flag_c(unsigned int op, unsigned int a, unsigned int b, unsigned int ndep) {
    return 0;
}

int armg_calculate_flag_v(unsigned int op, unsigned int a, unsigned int b, unsigned int ndep) {
    return 0;
}

int armg_calculate_condition(unsigned int cond, unsigned int a, unsigned int b, unsigned int ndep) {
    return a;
}

unsigned int handle1_1 = 139336;

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


// Function: callback_func at 0x1057c
unsigned int callback_func(unsigned int a0)
{
 return a0 * 2;
}


// Function: cdecl_func at 0x10584
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_cdecl at 0x1058c
unsigned int call_cdecl()
{
 return 15;
}


// Function: stdcall_func at 0x10594
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: call_stdcall at 0x1059c
unsigned int call_stdcall()
{
 return 50;
}


// Function: fastcall_func at 0x105a4
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: call_fastcall at 0x105b0
unsigned int call_fastcall()
{
 return 6;
}


// Function: call_thiscall at 0x105b8
unsigned int call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x105c0
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_arm_aapcs at 0x105d8
unsigned int call_arm_aapcs()
{
 return 15;
}


// Function: mips_func at 0x105e0
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x105f0
unsigned int call_mips()
{
 return 100;
}


// Function: amd64_sysv_func at 0x105f8
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x10618
unsigned int call_amd64_sysv()
{
 return 21;
}


// Function: ms_x64_func at 0x10620
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_ms_x64 at 0x10638
unsigned int call_ms_x64()
{
 return 15;
}


// Function: vectorcall_func at 0x10640
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x10650
unsigned int call_vectorcall()
{
 return 10;
}


// Function: mixed_conventions_test at 0x10658
unsigned int mixed_conventions_test()
{
 return 33;
}


// Function: varargs_func at 0x10660
unsigned int __glibc___stack_chk_guard = 0;

unsigned int varargs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v6; // r3
 unsigned int v7; // r0
 unsigned int idx; // r3
 unsigned int v9; // r3
 char *v0; // [bp-0x20], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = a3;
 v4 = a2;
 v3 = a1;
 v2 = a2;
 v1 = a1;
 v0 = a0;
 v1 = __glibc___stack_chk_guard;
 v6 = 0;
 v7 = 0;
 v0 = &v3;
 while (true)
 {
 idx = v6;
 if (idx >= a0)
 break;
 v9 = idx + 1;
 v7 += (&v3)[idx];
 v6 = v9;
 }
 if (!(v1 ^ __glibc___stack_chk_guard))
 return v7;
 __stack_chk_fail(); /* do not return */
}


// Function: func_no_args at 0x106d4
unsigned int func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x106dc
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x1070c
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 char *result; // r0
 char *v2; // r0
 unsigned int v3; // r0
 unsigned int v4; // r0
 unsigned int v5; // r1
 unsigned int v6; // r0

 result = a1;
 if (result)
 result = strlen(a1);
 v2 = result;
 v3 = __aeabi_dadd(__floatsidf(&v2[a0]), a1, a2, a3);
 v4 = __aeabi_l2d(a4, a5);
 v6 = __aeabi_d2iz(__aeabi_dadd(v3, v5, v4, v5), a1, a2, a3);
 return __aeabi_d2iz(__aeabi_dadd(v3, v5, v4, v5), a1, a2, a3);
}


// Function: func_struct_byval at 0x1076c
int func_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char *v4; // r12
 unsigned int result; // r3
 unsigned int v6; // r0
 unsigned int v7; // r0
 char *ptr; // r12
 char *v9; // r12
 unsigned int v10; // r0
 char v0; // [bp-0x10], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v4[0] = a0;
 v0 = a0;
 v1 = a1;
 v2 = a2;
 v3 = a3;
 result = 16;
 v6 = 0;
 do
 {
 v7 = v6;
 ptr = v4;
 v9 = ptr + 2;
 v10 = *(ptr) + v7;
 v4 = v9;
 result -= 1;
 v6 = v10;
 } while (result != 1);
 return *(ptr) + v7;
}


// Function: func_struct_byptr at 0x1079c
unsigned int func_struct_byptr(unsigned int a0)
{
 unsigned int v1; // r0

 if (armg_calculate_condition(18, a0, 0, 0))
 {
 v1 = a0 * a0;
 if (!armg_calculate_condition(2, a0, 0, 0))
 return v1;
 }
 else if (!armg_calculate_condition(2, v1, 0, 0))
 {
 return a0;
 }
 return 4294967295;
}


// Function: test_calling_conventions at 0x107b0
extern unsigned int __glibc___stack_chk_guard;
extern char g_1148c;
extern char g_1154d;
extern char g_11575;
extern char g_11597;
extern char g_115be;
extern char g_115e6;
extern char g_11612;

int test_calling_conventions()
{
 unsigned int *cur; // r2
 unsigned int v7; // r3
 unsigned int v8; // r0
 unsigned int v9; // r3
 unsigned int i; // r1
 unsigned int v11; // r2
 unsigned int v12; // r0
 unsigned int v0; // [bp-0x118]
 unsigned int v1; // [bp-0x114]
 char v2; // [bp-0x110]
 char v3; // [bp-0x90]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 puts(0x1148c);
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
 __printf_chk(1, 0x1154d, varargs_func(5, 1, 2, 3));
 __printf_chk(1, 0x11575, 42);
 __printf_chk(1, 0x11597, 36);
 __printf_chk(1, 0x115be, 117);
 cur = &v2;
 v7 = 1;
 v8 = 0;
 do
 {
 cur[0] = v7;
 v9 = v7 + 1;
 cur[1] = v8;
 v8 += armg_calculate_flag_c(1, v7, 1, 0);
 cur += 1;
 v7 = v9;
 } while (v7 - 17 || v8);
 memcpy(&v3, &v2, 128);
 i = 0;
 do
 {
 i += 1;
 } while (i != 16);
 __printf_chk(1, 0x115e6, v11);
 if (!(v4 ^ __glibc___stack_chk_guard))
 {
 v12 = __printf_chk(1, 0x11612, 50);
 return __printf_chk(1, 0x11612, 50);
 }
 __stack_chk_fail(); /* do not return */
}


// Function: param_by_value_int at 0x109b8
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_by_value_int at 0x109c0
unsigned int call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x109c8
unsigned int param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2;
 return 1;
}


// Function: call_by_value_ptr at 0x109dc
unsigned int call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x109e4
unsigned int param_array_decay()
{
 return 4;
}


// Function: call_array_decay at 0x109ec
unsigned int call_array_decay()
{
 return 4;
}


// Function: param_string at 0x109f4
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: call_string_param at 0x10a04
unsigned int call_string_param()
{
 return 173;
}


// Function: param_ptr_array at 0x10a0c
unsigned int param_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int v1; // r0
 unsigned int v2; // r3
 unsigned int v3; // r3

 v0 = 0;
 v1 = 0;
 while (true)
 {
 v2 = v0;
 if (a1 > v2)
 goto LABEL_10a20;
 return v1;
LABEL_10a20:
 v3 = v2 + 1;
 v1 += *((char *)*((int *)(a0 + v2 * 4)));
 v0 = v3;
 }
}


// Function: call_ptr_array at 0x10a34
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_ptr_array(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v6; // lr
 unsigned int v7; // r4
 unsigned int v8; // r0
 const char *v0; // [bp-0x18]
 const char *v1; // [bp-0x14]
 const char *v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = a3;
 v2 = a2;
 v1 = a1;
 v0 = a0;
 v3 = __glibc___stack_chk_guard;
 v0 = "abc";
 v1 = "def";
 v2 = "ghi";
 v8 = param_ptr_array(&v0, 3);
 if (!(v3 ^ __glibc___stack_chk_guard))
 return v8;
 __stack_chk_fail(); /* do not return */
}


// Function: param_varargs at 0x10a90
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_varargs(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v6; // r3
 unsigned int v7; // r0
 unsigned int idx; // r3
 unsigned int v9; // r3
 char *v0; // [bp-0x20], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = a3;
 v4 = a2;
 v3 = a1;
 v2 = a2;
 v1 = a1;
 v0 = a0;
 v1 = __glibc___stack_chk_guard;
 v6 = 0;
 v7 = 0;
 v0 = &v3;
 while (true)
 {
 idx = v6;
 if (idx >= a0)
 break;
 v9 = idx + 1;
 v7 += (&v3)[idx];
 v6 = v9;
 }
 if (!(v1 ^ __glibc___stack_chk_guard))
 return v7;
 __stack_chk_fail(); /* do not return */
}


// Function: call_varargs_param at 0x10b04
unsigned int call_varargs_param(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v4; // lr
 unsigned int v5; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = a2;
 v1 = a1;
 v0 = a0;
 v0 = 40;
 v5 = param_varargs(4, 10, 20, 30);
 return param_varargs(4, 10, 20, 30);
}


// Function: param_func_ptr at 0x10b2c
unsigned int param_func_ptr(unsigned int a0, unsigned int a1)
{
 return callback_func(a1) + 10;
}


// Function: call_func_ptr_param at 0x10b44
unsigned int call_func_ptr_param()
{
 unsigned int v0; // r0

 v0 = param_func_ptr(callback_func, 5);
 return param_func_ptr(callback_func, 5);
}


// Function: param_double_ptr at 0x10b54
typedef struct struct_0 {
 unsigned int field_0;
} struct_0;

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


// Function: call_double_ptr at 0x10b84
unsigned int call_double_ptr()
{
 return 21;
}


// Function: param_complex_cast at 0x10b8c
typedef struct struct_1 {
 struct struct_1 *field_0;
} struct_1;

struct struct_0 ** param_complex_cast(struct struct_0 **a0, unsigned int a1)
{
 unsigned int v0; // r3

 if (!a1)
 return *(a0);
 if (armg_calculate_condition(2, a1, 1, 0))
 {
 if (!armg_calculate_condition(18, a1, 1, 0))
 return (char *)a0 + v0;
 }
 else
 {
 if (!armg_calculate_condition(18, a1, 1, 0))
 return a0;
 }
 return 0xffffffff;
}


// Function: call_complex_cast at 0x10bb0
unsigned int call_complex_cast()
{
 return 305419896;
}


// Function: param_struct_byval at 0x10bbc
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a0 + a15;
}


// Function: call_struct_byval at 0x10bd8
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
 if (!(v2 ^ __glibc___stack_chk_guard))
 return v0 + v1;
 __stack_chk_fail(); /* do not return */
}


// Function: param_order_dep at 0x10c3c
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_order_dep at 0x10c44
unsigned int call_order_dep()
{
 return 4;
}


// Function: test_parameter_passing at 0x10c4c
extern char g_1163f;

int test_parameter_passing()
{
 unsigned int v0; // r0
 unsigned int v1; // r1
 unsigned int v2; // r2
 unsigned int v3; // r3
 unsigned int v4; // r0
 unsigned int v7; // r0

 puts(0x1163f);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 4);
 v0 = __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 v4 = call_varargs_param(__printf_chk(1, "PARAM-L2-03: %d\n", call_ptr_array(v0, v1, v2, v3)), v1, v2);
 __printf_chk(1, "PARAM-L2-04: %d\n", v4);
 __printf_chk(1, "PARAM-L3-01: %d\n", call_func_ptr_param());
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 __printf_chk(1, "PARAM-L3-04: %d\n", call_struct_byval());
 v7 = __printf_chk(1, "PARAM-L3-05: %d\n", 4);
 return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


// Function: ret_basic_type at 0x10d50
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x10d58
unsigned int call_ret_basic()
{
 return 42;
}


// Function: ret_pointer at 0x10d60
int ret_pointer(unsigned int a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x10d68
unsigned int call_ret_pointer()
{
 return 20;
}


// Function: ret_small_struct at 0x10d70
unsigned int* ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 *(ptr) = a1;
 ptr[1] = a2;
 return ptr;
}


// Function: call_ret_small_struct at 0x10d78
unsigned int call_ret_small_struct()
{
 return 7;
}


// Function: ret_large_struct at 0x10d80
extern unsigned int __glibc___stack_chk_guard;

unsigned int* ret_large_struct(unsigned int *ptr, unsigned int a1)
{
 char *ptr3; // r2
 unsigned int i; // r3
 unsigned int v27; // r2
 unsigned int v28; // r3
 char *v29; // r12
 unsigned int v30; // r1
 unsigned int v31; // r2
 unsigned int v32; // r3
 unsigned int v19; // r3
 char *v20; // r2
 char *p; // r12
 unsigned int v22; // r1
 unsigned int v23; // r2
 unsigned int v24; // r3
 char *addr; // r12
 unsigned int v26; // r1
 char v0; // [bp-0x4c], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x48]
 unsigned int v2; // [bp-0x44]
 unsigned int v3; // [bp-0x40]
 char v4; // [bp-0x3c]
 unsigned int v5; // [bp-0x38]
 unsigned int v6; // [bp-0x34]
 unsigned int v7; // [bp-0x30]
 char v8; // [bp-0x2c]
 unsigned int v9; // [bp-0x28]
 unsigned int v10; // [bp-0x24]
 unsigned int v11; // [bp-0x20]
 char v12; // [bp-0x1c]
 unsigned int v13; // [bp-0x18]
 unsigned int v14; // [bp-0x14]
 unsigned int v15; // [bp-0x10]
 unsigned int v16; // [bp-0xc]

 ptr3 = &v0;
 v16 = __glibc___stack_chk_guard;
 i = 0;
 do
 {
 v19 = i + 1;
 v20 = ptr3 + 1;
 *((unsigned int *)&ptr3[0]) = a1 + i;
 i = v19;
 ptr3 = v20;
 } while (i != 16);
 p = &v4;
 *(ptr) = v0;
 ptr[1] = v1;
 ptr[2] = v2;
 ptr[3] = v3;
 v22 = v5;
 v23 = v6;
 v24 = v7;
 addr = p + 16;
 *(ptr) = *((int *)&v4);
 ptr[1] = v22;
 ptr[2] = v23;
 ptr[3] = v24;
 v26 = v9;
 v27 = v10;
 v28 = v11;
 v29 = addr + 16;
 *(ptr) = *((int *)&v8);
 ptr[1] = v26;
 ptr[2] = v27;
 ptr[3] = v28;
 v30 = v13;
 v31 = v14;
 v32 = v15;
 *(ptr) = *((int *)&v12);
 ptr[1] = v30;
 ptr[2] = v31;
 ptr[3] = v32;
 if (!(v16 ^ __glibc___stack_chk_guard))
 return ptr;
 __stack_chk_fail(); /* do not return */
}


// Function: call_ret_large_struct at 0x10e0c
extern unsigned int __glibc___stack_chk_guard;

int call_ret_large_struct()
{
 unsigned int v4; // lr
 unsigned int v0[15]; // [bp-0x4c]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 ret_large_struct(&v0, 100);
 if (!(v2 ^ __glibc___stack_chk_guard))
 return v0[0] + v1;
 __stack_chk_fail(); /* do not return */
}


// Function: ret_func_ptr at 0x10e64
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


// Function: call_ret_func_ptr at 0x10e84
unsigned int call_ret_func_ptr()
{
 return 10;
}


// Function: ret_opaque_handle at 0x10e8c
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


// Function: call_ret_opaque at 0x10ea8
extern unsigned int handle1_1;

int call_ret_opaque()
{
 return handle1_1;
}


// Function: ret_complex_expr at 0x10eb8
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


// Function: call_ret_complex_expr at 0x10ec8
unsigned int call_ret_complex_expr()
{
 return 40;
}


// Function: ret_multi_branch at 0x10ed0
unsigned int ret_multi_branch(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v1; // r0

 if (a0 <= 2)
 {
 a3 = 10;
 if (!armg_calculate_condition(146, a0, 2, 0))
 goto LABEL_10eda;
LABEL_10ed9:
 v1 = a3 + a3 * a0;
 if (!armg_calculate_condition(130, a0, 2, 0))
 return v1;
 }
 else
 {
 if (armg_calculate_condition(146, a0, 2, 0))
 goto LABEL_10ed9;
LABEL_10eda:
 if (!armg_calculate_condition(130, v1, 2, 0))
 return a0;
 }
 return 4294967295;
}


// Function: call_ret_multi_branch at 0x10ee4
unsigned int call_ret_multi_branch()
{
 return 60;
}


// Function: ret_void at 0x10eec
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return a0 * 3;
}


// Function: call_ret_void at 0x10ef8
unsigned int call_ret_void()
{
 return 21;
}


// Function: test_return_values at 0x10f00
extern char g_1171b;
extern char g_11739;
extern char g_11755;
extern char g_11771;
extern char g_1178c;
extern char g_117a9;
extern char g_117c5;
extern char g_117e2;
extern char g_117fe;
extern char g_1181a;
extern unsigned int handle1_1;

int test_return_values()
{
 unsigned int v1; // r0

 puts(0x1171b);
 __printf_chk(1, 0x11739, 42);
 __printf_chk(1, 0x11755, 20);
 __printf_chk(1, 0x11771, 7);
 __printf_chk(1, 0x1178c, call_ret_large_struct());
 __printf_chk(1, 0x117a9, 10);
 __printf_chk(1, 0x117c5, handle1_1);
 __printf_chk(1, 0x117e2, 40);
 __printf_chk(1, 0x117fe, 60);
 v1 = __printf_chk(1, 0x1181a, 21);
 return __printf_chk(1, 0x1181a, 21);
}


// Function: __aeabi_drsub at 0x10fd4
static int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd();
 return __aeabi_dadd();
}


// Function: __subdf3 at 0x10fdc
static int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd();
 return __aeabi_dadd();
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



// Function: __aeabi_ui2d at 0x1128c
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
 goto LABEL_11298;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_11298;
 return a0;
 }
LABEL_11298:
 v2 = vvar_4;
 v1 = v9;
 v0 = v10;
}


// Function: __floatsidf at 0x112b0
// Removed - conflicting types with built-in declaration


// Function: __extendsfdf2 at 0x112d8
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
 goto LABEL_112ee;
LABEL_112ed:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_112f2;
LABEL_112f1:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_112f8;
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
 goto LABEL_112ed;
LABEL_112ee:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_112f1;
LABEL_112f2:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_112f8;
 return v4;
 }
LABEL_112f8:
 if ((v3 & 16777215))
 goto LABEL_11300;
 return v4;
LABEL_11300:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_1130c;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_1130c;
 return v4;
 }
LABEL_1130c:
 v2 = vvar_32;
 v1 = v44;
 v0 = v45;
}


// Function: __floatundidf at 0x11320
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
 goto LABEL_11328;
 return a0;
LABEL_11328:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a1 >> 22;
 if (!a1 >> 22)
 goto LABEL_11340;
LABEL_11340:
 v2 = v3;
 v1 = v4;
 v0 = v5;
}


// Function: __aeabi_l2d at 0x11334
// Removed - conflicting types with built-in declaration



/* CRT stub function __aeabi_d2iz removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */


