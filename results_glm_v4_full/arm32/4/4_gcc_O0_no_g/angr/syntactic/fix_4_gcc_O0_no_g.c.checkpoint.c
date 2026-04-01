// Angr Decompilation of 4_gcc_O0_no_g
// Platform: ARMEL

#include <stddef.h>
#include <stdbool.h>

/* CRT stub function _init removed by preprocessor */

/* Angr-specific ARM flag calculation stubs */
static unsigned int armg_calculate_flag_c(unsigned int op, unsigned int dep1, unsigned int dep2, unsigned int ndep)
{
    return 0;
}

static unsigned int armg_calculate_flag_v(unsigned int op, unsigned int dep1, unsigned int dep2, unsigned int ndep)
{
    return 0;
}

static int armg_calculate_condition(unsigned int cond, unsigned int dep1, unsigned int dep2, unsigned int ndep)
{
    return 0;
}

/* Global variables */
unsigned int vvar_4;
unsigned int vvar_32;
unsigned int __glibc___stack_chk_guard;



// Function: sub_10408 at 0x10408
extern unsigned int g_23008;

int sub_10408()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_104c0 at 0x104c0
void sub_104c0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: cdecl_func at 0x10580
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_cdecl at 0x105b0
unsigned int call_cdecl()
{
 unsigned int v0; // r0

 v0 = cdecl_func(5, 10);
 return cdecl_func(5, 10);
}


// Function: stdcall_func at 0x105d0
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: call_stdcall at 0x10600
unsigned int call_stdcall()
{
 unsigned int v0; // r0

 v0 = stdcall_func(5, 10);
 return stdcall_func(5, 10);
}


// Function: fastcall_func at 0x10620
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: call_fastcall at 0x1065c
unsigned int call_fastcall()
{
 unsigned int v0; // r0

 v0 = fastcall_func(1, 2, 3);
 return fastcall_func(1, 2, 3);
}


// Function: call_thiscall at 0x10680
unsigned int call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x1069c
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_arm_aapcs at 0x106ec
unsigned int call_arm_aapcs()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x10]

 v0 = 5;
 v1 = arm_aapcs_func(1, 2, 3, 4);
 return arm_aapcs_func(1, 2, 3, 4);
}


// Function: mips_func at 0x10724
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x1076c
unsigned int call_mips()
{
 unsigned int v0; // r0

 v0 = mips_func(10, 20, 30, 40);
 return mips_func(10, 20, 30, 40);
}


// Function: amd64_sysv_func at 0x10794
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x107ec
unsigned int call_amd64_sysv()
{
 unsigned int v0; // r0

 v0 = amd64_sysv_func(1, 2, 3, 4, 5, 6);
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


// Function: ms_x64_func at 0x1082c
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_ms_x64 at 0x1087c
unsigned int call_ms_x64()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x10]

 v0 = 5;
 v1 = ms_x64_func(1, 2, 3, 4);
 return ms_x64_func(1, 2, 3, 4);
}


// Function: vectorcall_func at 0x108b4
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x108fc
unsigned int call_vectorcall()
{
 unsigned int v0; // r0

 v0 = vectorcall_func(1, 2, 3, 4);
 return vectorcall_func(1, 2, 3, 4);
}


// Function: mixed_conventions_test at 0x10924
unsigned int mixed_conventions_test()
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 v0 += cdecl_func(1, 2);
 v0 += stdcall_func(3, 4);
 v0 += fastcall_func(5, 6, 7);
 return v0;
}


// Function: varargs_func at 0x109a0
extern unsigned int __glibc___stack_chk_guard;

unsigned int varargs_func(unsigned int a0, unsigned int a1)
{
 unsigned int v7; // r3
 unsigned int v8; // r2
 char *ptr; // r3
 char v0[4]; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int i; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 unsigned int v4; // [bp-0xc]
 unsigned int v5; // [bp-0x8]
 unsigned int v6; // [bp-0x4]

 v6 = v7;
 v5 = v8;
 v4 = a1;
 v3 = __glibc___stack_chk_guard;
 v1 = 0;
 *((unsigned int **)&v0[0]) = &v4;
 for (i = 0; i < a0; i += 1)
 {
 ptr = (char *)*((unsigned int **)&v0[0]);
 *((unsigned int **)&v0[0]) = (unsigned int *)((char *)ptr + 1);
 v1 = v1 + *(ptr);
 }
 if (!(v3 ^ __glibc___stack_chk_guard))
 return v1;
 __stack_chk_fail(); /* do not return */
}


// Function: func_no_args at 0x10a4c
unsigned int func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x10a68
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x10ad0
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int v3; // r3
 unsigned int v4; // r0
 unsigned int v5; // r1
 unsigned int v6; // r0
 unsigned int v7; // r0
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x8]

 v1 = &vvar_4;
 v3 = (!a1 ? NULL : strlen(a1));
 v0 = (!a1 ? NULL : strlen(a1));
 v4 = __aeabi_dadd(__floatsidf(a0 + v0), a1, a2, a3);
 v6 = __aeabi_dadd(v4, v5, __aeabi_l2d(a4, a5, v4, v5), v5);
 v7 = __aeabi_d2iz(v6, v5, v6, v5);
 return __aeabi_d2iz(v6, v5, v6, v5);
}


// Function: func_struct_byval at 0x10b80
typedef struct struct_0 {
 char field_0[4];
 unsigned int field_4;
} struct_0;

unsigned int func_struct_byval(unsigned int a0, unsigned int a1)
{
 unsigned int v8; // r2
 unsigned int v9; // r3
 struct_0 *ptr; // r3
 char v0; // [bp-0x2c], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x28]
 unsigned int v2; // [bp-0x28]
 unsigned int v3; // [bp-0x24]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]
 unsigned int v6; // [bp-0x8]
 unsigned int v7; // [bp-0x4]

 v4 = a0;
 v5 = a1;
 v6 = v8;
 v7 = v9;
 memset(&v0, 0, 12);
 while (true)
 {
 if (v0 > 15)
 break;
 ptr = &(&v4)[2 * v0];
 v2 = v1 + *(unsigned int *)&ptr->field_0;
 v3 = v3 + ptr->field_4 + armg_calculate_flag_c(1, v1, ptr->field_0, 0);
 v0 += 1;
 v1 = v2;
 }
 return v1;
}


// Function: func_struct_byptr at 0x10c10
unsigned int func_struct_byptr(unsigned int *a0)
{
 return (a0 ? a0[1] * *(a0) : 4294967295);
}


// Function: test_calling_conventions at 0x10c58
extern unsigned int __glibc___stack_chk_guard;
extern char g_12400;
extern char g_124c4;
extern char g_124ec;
extern char g_12510;
extern char g_12540;
extern char g_12568;
extern char g_12594;

unsigned int test_calling_conventions()
{
 unsigned int v25; // r3
 unsigned int v27; // r0
 unsigned int v0; // [bp-0x130]
 unsigned int i; // [bp-0xc0]
 unsigned int v2; // [bp-0xbc]
 unsigned int v3; // [bp-0xb8]
 unsigned int v4; // [bp-0xb4]
 char *v5; // [bp-0xb0]
 unsigned int v6; // [bp-0xac]
 unsigned int v7; // [bp-0xa8]
 unsigned int v8; // [bp-0xa4]
 unsigned int v9[1]; // [bp-0xa0]
 unsigned int v10; // [bp-0x9c]
 unsigned int v11; // [bp-0x98]
 unsigned int v12; // [bp-0x94]
 char v13; // [bp-0x88]
 unsigned int v14; // [bp-0x14]

 v14 = __glibc___stack_chk_guard;
 puts(0x12400);
 printf("CALL-L1-01: %d\n", call_cdecl());
 printf("CALL-L1-02: %d\n", call_stdcall());
 printf("CALL-L1-03: %d\n", call_fastcall());
 printf("CALL-L1-04: %d\n", call_thiscall());
 printf("CALL-L1-05: %d\n", call_arm_aapcs());
 printf("CALL-L1-06: %d\n", call_mips());
 printf("CALL-L1-07: %d\n", call_amd64_sysv());
 printf("CALL-L1-08: %d\n", call_ms_x64());
 printf("CALL-L1-09: %d\n", call_vectorcall());
 printf("CALL-L1-10: %d\n", mixed_conventions_test());
 v2 = varargs_func(5, 1);
 printf(0x124c4, v2);
 v3 = func_no_args();
 printf(0x124ec, v3);
 v4 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 printf(0x12510, v4);
 v5 = "test";
 v0 = 100;
 v6 = func_mixed_args(10, v5, 1374389535, 1074339512, 100, 0);
 printf(0x12540, v6);
 for (i = 0; i <= 15; i += 1)
 {
 v25 = i + 1;
 (&v11)[2 * i] = v25;
 (&v11)[1 + 2 * i] = v25 >> 31;
 }
 memcpy(&v0, &v13, 112);
 v7 = func_struct_byval(v11, v12);
 printf(0x12568, v7);
 v9[0] = 5;
 v10 = 10;
 v8 = func_struct_byptr(&v9);
 v27 = printf(0x12594, v8);
 if (!(v14 ^ __glibc___stack_chk_guard))
 return v27;
 __stack_chk_fail(); /* do not return */
}


// Function: param_by_value_int at 0x10f34
unsigned int param_by_value_int(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 v0 *= 2;
 return v0;
}


// Function: call_by_value_int at 0x10f64
int call_by_value_int()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = 5;
 v1 = param_by_value_int(v0);
 return v0 + v1;
}


// Function: param_by_value_ptr at 0x10f9c
unsigned int param_by_value_ptr(unsigned int *a0)
{
 unsigned int flag1; // r3
 unsigned int v3; // r3
 unsigned int *ptr; // [bp-0xc], Other Possible Types: unsigned int

 ptr = a0;
 *(ptr) = *(ptr) * 2;
 ptr = 0;
 flag1 = ptr;
 if (!flag1)
 {
 v3 = 1;
 if (!armg_calculate_condition(18, flag1, 0, 0))
 goto LABEL_10fd6;
LABEL_10fd5:
 v3 = 0;
 }
 else
 {
 v3 = flag1;
 if (armg_calculate_condition(18, v3, 0, 0))
 goto LABEL_10fd5;
LABEL_10fd6:
 ;
 }
 return v3 & 255;
}


// Function: call_by_value_ptr at 0x10fec
extern unsigned int __glibc___stack_chk_guard;

int call_by_value_ptr()
{
 unsigned int v0; // [bp-0x18]
 char *v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 v0 = 5;
 v1 = &v0;
 v2 = param_by_value_ptr(v1);
 if (!(v3 ^ __glibc___stack_chk_guard))
 return v0 + v2;
 __stack_chk_fail(); /* do not return */
}


// Function: param_array_decay at 0x1105c
unsigned int param_array_decay(unsigned int a0, unsigned int a1)
{
 return 4;
}


// Function: call_array_decay at 0x11084
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_array_decay()
{
 unsigned int v2; // r0
 char v0; // [bp-0x34]
 unsigned int v1; // [bp-0xc]

 v1 = __glibc___stack_chk_guard;
 memset(&v0, 0, 40);
 v2 = param_array_decay(&v0, 10);
 if (!(v1 ^ __glibc___stack_chk_guard))
 return v2;
 __stack_chk_fail(); /* do not return */
}


// Function: param_string at 0x110f4
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: call_string_param at 0x11130
unsigned int call_string_param()
{
 unsigned int v0; // r0

 v0 = param_string("Hello");
 return param_string("Hello");
}


// Function: param_ptr_array at 0x11150
unsigned int param_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += *((char *)*((int *)(a0 + i * 4)));
 }
 return v0;
}


// Function: call_ptr_array at 0x111d0
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_ptr_array()
{
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 v0 = "abc";
 v1 = "def";
 v2 = "ghi";
 v4 = param_ptr_array(&v0, 3);
 if (!(v3 ^ __glibc___stack_chk_guard))
 return v4;
 __stack_chk_fail(); /* do not return */
}


// Function: param_varargs at 0x11240
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_varargs(unsigned int a0, unsigned int a1)
{
 unsigned int v7; // r3
 unsigned int v8; // r2
 char *ptr; // r3
 char v0[4]; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int i; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 unsigned int v4; // [bp-0xc]
 unsigned int v5; // [bp-0x8]
 unsigned int v6; // [bp-0x4]

 v6 = v7;
 v5 = v8;
 v4 = a1;
 v3 = __glibc___stack_chk_guard;
 *((unsigned int **)&v0[0]) = &v4;
 v1 = 0;
 for (i = 0; i < a0; i += 1)
 {
 ptr = (char *)*((unsigned int **)&v0[0]);
 *((unsigned int **)&v0[0]) = (unsigned int *)((char *)ptr + 1);
 v1 = v1 + *(ptr);
 }
 if (!(v3 ^ __glibc___stack_chk_guard))
 return v1;
 __stack_chk_fail(); /* do not return */
}


// Function: call_varargs_param at 0x112ec
unsigned int call_varargs_param()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x10]

 v0 = 40;
 v1 = param_varargs(4, 10);
 return param_varargs(4, 10);
}


// Function: param_func_ptr at 0x11324
int param_func_ptr(int (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: callback_func at 0x11358
unsigned int callback_func(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_func_ptr_param at 0x11380
unsigned int call_func_ptr_param()
{
 unsigned int v0; // r0

 v0 = param_func_ptr(callback_func, 5);
 return param_func_ptr(callback_func, 5);
}


// Function: param_double_ptr at 0x113a4
typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int param_double_ptr(struct_1 **ptr, unsigned int a1)
{
 if (ptr && *(ptr))
 {
 (*ptr)->field_0 = a1;
 *(ptr) = NULL;
 return 1;
 }
 return 4294967295;
}


// Function: call_double_ptr at 0x1140c
extern unsigned int __glibc___stack_chk_guard;

int call_double_ptr()
{
 char *flag1; // r3
 char *v6; // r3
 unsigned int v0; // [bp-0x18]
 char *v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 v0 = 10;
 v1 = &v0;
 v2 = param_double_ptr(&v1, 20);
 flag1 = v1;
 if (!flag1)
 {
 v6 = 0x1;
 if (!armg_calculate_condition(18, flag1, 0, 0))
 goto LABEL_1145a;
LABEL_11459:
 v6 = NULL;
 }
 else
 {
LABEL_1145a:
 v6 = NULL;
 }
 if (!(v3 ^ __glibc___stack_chk_guard))
 return ((int)v6 & 255) + v0;
 __stack_chk_fail(); /* do not return */
}


// Function: param_complex_cast at 0x11498
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1)
{
 unsigned int v0[2]; // [bp-0x18]
 unsigned int v1[2]; // [bp-0x14]
 unsigned int v2[2]; // [bp-0x10]
 unsigned int v3[2]; // [bp-0xc]

 if (!a1)
 {
 v1[0] = a0;
 v2[0] = v1;
 v3[0] = v2;
 return v3[0];
 }
 else if (a1 == 1)
 {
 v0[0] = a0;
 return v0[0] + v0[1];
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_complex_cast at 0x1151c
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_complex_cast()
{
 unsigned int v4; // r0
 unsigned int v0[1]; // [bp-0x18]
 unsigned int v1[1]; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 v0[0] = 305419896;
 v1[0] = 100;
 v2 = 200;
 param_complex_cast(&v1, 1);
 v4 = param_complex_cast(&v0, 0);
 if (!(v3 ^ __glibc___stack_chk_guard))
 return v4;
 __stack_chk_fail(); /* do not return */
}


// Function: param_struct_byval at 0x115a8
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a0 + a15;
}


// Function: call_struct_byval at 0x115dc
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_struct_byval()
{
 unsigned int v18; // r0
 unsigned int idx; // [bp-0x50]
 unsigned int v1; // [bp-0x4c]
 unsigned int v2; // [bp-0x48]
 unsigned int v3; // [bp-0x44]
 unsigned int v4; // [bp-0x40]
 unsigned int v5; // [bp-0x3c]
 unsigned int v6; // [bp-0x38]
 unsigned int v7; // [bp-0x34]
 unsigned int v8; // [bp-0x30]
 unsigned int v9; // [bp-0x2c]
 unsigned int v10; // [bp-0x28]
 unsigned int v11; // [bp-0x24]
 unsigned int v12; // [bp-0x20]
 unsigned int v13; // [bp-0x1c]
 unsigned int v14; // [bp-0x18]
 unsigned int v15; // [bp-0x14]
 unsigned int v16; // [bp-0x10]
 unsigned int v17; // [bp-0xc]

 v17 = __glibc___stack_chk_guard;
 for (idx = 0; idx <= 15; idx += 1)
 {
 (&v1)[idx] = idx;
 }
 v18 = param_struct_byval(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
 if (!(v17 ^ __glibc___stack_chk_guard))
 return v18;
 __stack_chk_fail(); /* do not return */
}


// Function: param_order_dep at 0x11690
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_order_dep at 0x116c0
unsigned int call_order_dep()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 v0 += 1;
 v0 += 1;
 v1 = param_order_dep(v0, v0);
 return param_order_dep(v0, v0);
}


// Function: test_parameter_passing at 0x11708
extern char g_125f4;

int test_parameter_passing()
{
 unsigned int v10; // r0

 puts(0x125f4);
 printf("PARAM-L1-01: %d\n", call_by_value_int());
 printf("PARAM-L1-02: %d\n", call_by_value_ptr());
 printf("PARAM-L2-01: %d\n", call_array_decay());
 printf("PARAM-L2-02: %d\n", call_string_param());
 printf("PARAM-L2-03: %d\n", call_ptr_array());
 printf("PARAM-L2-04: %d\n", call_varargs_param());
 printf("PARAM-L3-01: %d\n", call_func_ptr_param());
 printf("PARAM-L3-02: %d\n", call_double_ptr());
 printf("PARAM-L3-03: %d\n", call_complex_cast());
 printf("PARAM-L3-04: %d\n", call_struct_byval());
 v10 = printf("PARAM-L3-05: %d\n", call_order_dep());
 return printf("PARAM-L3-05: %d\n", call_order_dep());
}


// Function: ret_basic_type at 0x1182c
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x11854
unsigned int call_ret_basic()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = 21;
 v1 = ret_basic_type(v0);
 return v1;
}


// Function: ret_pointer at 0x11884
int ret_pointer(unsigned int a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x118ac
extern unsigned int __glibc___stack_chk_guard;

int call_ret_pointer()
{
 unsigned int *v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 v1 = 10;
 v2 = 20;
 v3 = 30;
 v0 = ret_pointer(&v1);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return *(v0);
 __stack_chk_fail(); /* do not return */
}


// Function: ret_small_struct at 0x11920
unsigned int *ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 *(ptr) = a1;
 ptr[1] = a2;
 return ptr;
}


// Function: call_ret_small_struct at 0x1196c
extern unsigned int __glibc___stack_chk_guard;

int call_ret_small_struct()
{
 unsigned int v0[1]; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = __glibc___stack_chk_guard;
 ret_small_struct(&v0, 3, 4);
 if (!(v2 ^ __glibc___stack_chk_guard))
 return *(v0) + v1;
 __stack_chk_fail(); /* do not return */
}


// Function: ret_large_struct at 0x119d4
extern unsigned int __glibc___stack_chk_guard;

unsigned int *ret_large_struct(unsigned int *ptr, unsigned int a1)
{
 unsigned int index; // [bp-0x50]
 unsigned int v1; // [bp-0x4c]
 unsigned int v2; // [bp-0x48]
 unsigned int v3; // [bp-0x44]
 unsigned int v4; // [bp-0x40]
 unsigned int v5; // [bp-0x3c]
 unsigned int v6; // [bp-0x38]
 unsigned int v7; // [bp-0x34]
 unsigned int v8; // [bp-0x30]
 unsigned int v9; // [bp-0x2c]
 unsigned int v10; // [bp-0x28]
 unsigned int v11; // [bp-0x24]
 unsigned int v12; // [bp-0x20]
 unsigned int v13; // [bp-0x1c]
 unsigned int v14; // [bp-0x18]
 unsigned int v15; // [bp-0x14]
 unsigned int v16; // [bp-0x10]
 unsigned int v17; // [bp-0xc]

 v17 = __glibc___stack_chk_guard;
 for (index = 0; index <= 15; index += 1)
 {
 (&v1)[index] = a1 + index;
 }
 *(ptr) = v1;
 ptr[1] = v2;
 ptr[2] = v3;
 ptr[3] = v4;
 ptr[4] = v5;
 ptr[5] = v6;
 ptr[6] = v7;
 ptr[7] = v8;
 *(ptr + 8) = v9;
 ptr[1] = v10;
 ptr[2] = v11;
 ptr[3] = v12;
 *(ptr + 4) = v13;
 ptr[1] = v14;
 ptr[2] = v15;
 ptr[3] = v16;
 if (!(v17 ^ __glibc___stack_chk_guard))
 return ptr;
 __stack_chk_fail(); /* do not return */
}


// Function: call_ret_large_struct at 0x11a94
extern unsigned int __glibc___stack_chk_guard;

int call_ret_large_struct()
{
 unsigned int v0[15]; // [bp-0x4c]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = __glibc___stack_chk_guard;
 ret_large_struct(&v0, 100);
 if (!(v2 ^ __glibc___stack_chk_guard))
 return v0[0] + v1;
 __stack_chk_fail(); /* do not return */
}


// Function: func_a at 0x11af8
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x11b20
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: ret_func_ptr at 0x11b48
int ret_func_ptr(unsigned int a0)
{
 return (!a0 ? func_a : func_b);
}


// Function: call_ret_func_ptr at 0x11b88
int call_ret_func_ptr()
{
 unsigned int v1; // r0
 unsigned int *v0; // [bp-0xc]

 v0 = ret_func_ptr(1);
 v1 = ((int (*)(unsigned int))v0)(5);
 return ((int (*)(unsigned int))v0)(5);
}


// Function: ret_opaque_handle at 0x11bbc
extern char handle2_0;

int ret_opaque_handle(unsigned int a0)
{
 return (a0 ? 143432 : (int)"d");
}


// Function: call_ret_opaque at 0x11bfc
int call_ret_opaque()
{
 unsigned int *v0; // [bp-0xc]

 v0 = ret_opaque_handle(0);
 return *(v0);
}


// Function: ret_complex_expr at 0x11c28
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a0 <= a1 ? a2 + 10 : a2 * 2);
}


// Function: call_ret_complex_expr at 0x11c74
int call_ret_complex_expr()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = ret_complex_expr(5, 3, 10);
 v1 = ret_complex_expr(3, 5, 10);
 return v0 + v1;
}


// Function: ret_multi_branch at 0x11cc0
unsigned int ret_multi_branch(unsigned int a0)
{
 if (a0 == 2)
 return 30;
 if (2 < a0)
 return 4294967295;
 if (!a0)
 {
 return 10;
 }
 else if (a0 == 1)
 {
 return 20;
 }
 return 4294967295;
}


// Function: call_ret_multi_branch at 0x11d30
unsigned int call_ret_multi_branch()
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 v0 += ret_multi_branch(0);
 v0 += ret_multi_branch(1);
 v0 += ret_multi_branch(2);
 return v0;
}


// Function: ret_void at 0x11d9c
int ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return a0;
}


// Function: call_ret_void at 0x11dd8
extern unsigned int __glibc___stack_chk_guard;

int call_ret_void()
{
 unsigned int v0[1]; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = __glibc___stack_chk_guard;
 ret_void(7, &v0);
 if (!(v1 ^ __glibc___stack_chk_guard))
 return *(v0);
 __stack_chk_fail(); /* do not return */
}


// Function: test_return_values at 0x11e34
extern char g_12700;
extern char g_12720;
extern char g_1273c;
extern char g_12758;
extern char g_12774;
extern char g_12794;
extern char g_127b0;
extern char g_127d0;
extern char g_127ec;
extern char g_12808;

int test_return_values()
{
 unsigned int v8; // r0

 puts(0x12700);
 printf(0x12720, call_ret_basic());
 printf(0x1273c, call_ret_pointer());
 printf(0x12758, call_ret_small_struct());
 printf(0x12774, call_ret_large_struct());
 printf(0x12794, call_ret_func_ptr());
 printf(0x127b0, call_ret_opaque());
 printf(0x127d0, call_ret_complex_expr());
 printf(0x127ec, call_ret_multi_branch());
 v8 = printf(0x12808, call_ret_void());
 return printf(0x12808, call_ret_void());
}


// Function: main at 0x11f28
unsigned int main()
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


// Function: __aeabi_drsub at 0x11f48
static int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd();
 return __aeabi_dadd();
}


// Function: __subdf3 at 0x11f50
static int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __aeabi_dadd();
 return __aeabi_dadd();
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



// Function: __aeabi_ui2d at 0x12200
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
 goto LABEL_1220c;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_1220c;
 return a0;
 }
LABEL_1220c:
 v2 = vvar_4;
 v1 = v9;
 v0 = v10;
 return v0;
}


// Function: __floatsidf at 0x12224
unsigned int ___floatsidf(unsigned int a0, unsigned int a1)
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
 goto LABEL_12230;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_12230;
 return a0;
 }
LABEL_12230:
 v2 = vvar_4;
 v1 = v9;
 v0 = v10;
 return v0;
}


// Function: __extendsfdf2 at 0x1224c
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
 goto LABEL_12262;
LABEL_12261:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_12266;
LABEL_12265:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_1226c;
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
 goto LABEL_12261;
LABEL_12262:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_12265;
LABEL_12266:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_1226c;
 return v4;
 }
LABEL_1226c:
 if ((v3 & 16777215))
 goto LABEL_12274;
 return v4;
LABEL_12274:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_12280;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_12280;
 return v4;
 }
LABEL_12280:
 v2 = vvar_32;
 v1 = v44;
 v0 = v45;
 return v0;
}


// Function: __floatundidf at 0x12294
static unsigned int __floatundidf(unsigned int a0, unsigned int a1)
{
 if (a0 || a1)
 return 0;
 return a0;
}

// Function: __aeabi_l2d at 0x122a8
unsigned int ___aeabi_l2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_122b0;
 return a0;
LABEL_122b0:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 return 0;
}



/* CRT stub function __aeabi_d2iz removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */


