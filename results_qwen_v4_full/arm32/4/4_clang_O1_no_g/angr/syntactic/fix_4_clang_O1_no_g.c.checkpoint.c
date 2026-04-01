// Angr Decompilation of 4_clang_O1_no_g
// Platform: ARMEL

#include <stddef.h>
#include <stdio.h>
#include <string.h>

/* CRT stub function _init removed by preprocessor */

// Missing global variables
char g_40167d[] = "RET-L1-02: %d\n";
char g_401579[] = "CALL-L2-01: %d\n";
char g_401525[] = "CALL-L1-10: %d\n";
char g_4016b4[] = "RET-L3-04: %d\n";
char g_40177f[] = "PARAM-TEST\n";
char g_401742[] = "RET-L4-01: %d\n";
char g_401699[] = "RET-L2-01: %d\n";
char g_4016ed[] = "RET-L3-02: %d\n";
char g_401726[] = "RET-L4-03: %d\n";
char g_4014fe[] = "CALL-L1-12: %d\n";
char g_4016d1[] = "RET-L3-03: %d\n";
char g_40170a[] = "RET-L4-02: %d\n";
char g_4014b4[] = "CALL-L1-11: %d\n";
char g_4014dc[] = "CALL-L1-13: %d\n";
char g_40154d[] = "CALL-L1-14: %d\n";
char g_401661[] = "RET-L1-01: %d\n";
char g_40175e[] = "CALLING-CONVENTIONS-TEST\n";
char g_4017a0[] = "RETURN-VALUES-TEST\n";
unsigned int g_412008 = 0;
unsigned int ret_opaque_handle_handle1 = 42;
char ret_opaque_handle_handle2 = 'h';

// ARM helper stub functions
unsigned int armg_calculate_flag_c(unsigned int op, unsigned int dep1, unsigned int dep2, unsigned int ndep)
{
 return 0;
}

unsigned int armg_calculate_flag_v(unsigned int op, unsigned int dep1, unsigned int dep2, unsigned int ndep)
{
 return 0;
}

unsigned int armg_calculate_condition(unsigned int cond, unsigned int dep1, unsigned int dep2, unsigned int ndep)
{
 return 1;
}

// Missing compiler runtime functions
static int __floatsidf(int a0)
{
 return a0;
}

static int __floatdidf(unsigned int a0, unsigned int a1)
{
 return a0;
}



// Function: sub_4003f0 at 0x4003f0
extern unsigned int g_412008;

int sub_4003f0()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return g_412008;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400490 at 0x400490
void sub_400490()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: cdecl_func at 0x4005c0
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_cdecl at 0x4005c8
unsigned int call_cdecl()
{
 return 15;
}


// Function: stdcall_func at 0x4005d0
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: call_stdcall at 0x4005dc
unsigned int call_stdcall()
{
 return 50;
}


// Function: fastcall_func at 0x4005e4
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a1 + a0 + a2;
}


// Function: call_fastcall at 0x4005f0
unsigned int call_fastcall()
{
 return 6;
}


// Function: call_thiscall at 0x4005f8
unsigned int call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x400600
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 return a1 + a0 + a2 + a3 + *((int *)&v0);
}


// Function: call_arm_aapcs at 0x400618
unsigned int call_arm_aapcs()
{
 return 15;
}


// Function: mips_func at 0x400620
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_mips at 0x400630
unsigned int call_mips()
{
 return 100;
}


// Function: amd64_sysv_func at 0x400638
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x400658
unsigned int call_amd64_sysv()
{
 return 21;
}


// Function: ms_x64_func at 0x400660
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 return a1 + a0 + a2 + a3 + *((int *)&v0);
}


// Function: call_ms_x64 at 0x400678
unsigned int call_ms_x64()
{
 return 15;
}


// Function: vectorcall_func at 0x400680
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_vectorcall at 0x400690
unsigned int call_vectorcall()
{
 return 10;
}


// Function: mixed_conventions_test at 0x400698
unsigned int mixed_conventions_test()
{
 return 33;
}


// Function: varargs_func at 0x4006a0
unsigned int varargs_func(unsigned int i, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v4; // r1
 char *ptr; // r2
 char v0[4]; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v1 = a1;
 v2 = a2;
 v3 = a3;
 *((unsigned int **)&v0[0]) = &v1;
 v4 = 0;
 if (i >= 1)
 {
 do
 {
 ptr = v0;
 *((char **)&v0[0]) = ptr + 1;
 v4 += *(ptr);
 i -= 1;
 } while (i != 1);
 }
 return v4;
}


// Function: func_no_args at 0x4006e4
unsigned int func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x4006ec
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x40071c
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int v2; // r1
 unsigned int v3; // r0
 unsigned int v4; // r0

 v0 = (!a1 ? NULL : strlen(a1));
 v1 = __adddf3(__floatsidf(v0 + a0), a1, a2, a3);
 v3 = __adddf3(v1, v2, __floatdidf(a4, a5), v2);
 v4 = __fixdfsi(v3, a1, a2, a3);
 return __fixdfsi(v3, a1, a2, a3);
}


// Function: func_struct_byval at 0x400794
int func_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int i; // r1
 unsigned int v5; // r0
 unsigned int v6; // r0
 unsigned int v7; // r1
 unsigned int v8; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v0 = a0;
 v1 = a1;
 v2 = a2;
 v3 = a3;
 i = 0;
 v5 = 0;
 do
 {
 v6 = v5;
 v7 = i;
 v8 = *((int *)((char *)&v0 + v7)) + v6;
 i = v7 + 8;
 v5 = v8;
 } while (i != 128);
 return *((int *)((char *)&v0 + v7)) + v6;
}


// Function: func_struct_byptr at 0x4007e0
unsigned int func_struct_byptr(unsigned int a0)
{
 unsigned int v1; // r0
 unsigned int v2; // r1
 unsigned int v3; // r2

 if (!a0)
 {
 v1 = 4294967295;
 if (!armg_calculate_condition(18, a0, 0, 0))
 return v1;
 }
 else
 {
 if (!armg_calculate_condition(18, v1, 0, 0))
 return a0;
 }
 return v3 * v2;
}


// Function: test_calling_conventions at 0x4007f4
extern char g_4014b4[];
extern char g_4014dc[];
extern char g_4014fe[];
extern char g_401525[];
extern char g_40154d[];
extern char g_401579[];
extern char g_40175e[];

int test_calling_conventions()
{
 unsigned int i; // r4
 unsigned int *cur; // r0
 unsigned int j; // r0
 unsigned int v7; // r1
 unsigned int v8; // r0
 unsigned int v0; // [bp-0x90]
 unsigned int v1; // [bp-0x8c]
 unsigned int v2; // [bp-0x88]

 puts(&g_40175e);
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
 v0 = 4;
 v1 = 5;
 i = 1;
 printf(&g_4014b4, varargs_func(5, 1, 2, 3));
 printf(&g_4014dc, 42);
 printf(&g_4014fe, 36);
 printf(&g_401525, 117);
 cur = &v2;
 do
 {
 cur[0] = i;
 cur[1] = 0;
 cur += 1;
 i += 1;
 } while (i != 17);
 j = 0;
 v7 = 0;
 do
 {
 v7 += *((int *)((char *)&v2 + j));
 j += 8;
 } while (j != 128);
 printf(&g_40154d, v7);
 v8 = printf(&g_401579, 50);
 return printf(&g_401579, 50);
}


// Function: param_by_value_int at 0x4009cc
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_by_value_int at 0x4009d4
unsigned int call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x4009dc
unsigned int param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2;
 return 1;
}


// Function: call_by_value_ptr at 0x4009f0
unsigned int call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x4009f8
unsigned int param_array_decay()
{
 return 4;
}


// Function: call_array_decay at 0x400a00
unsigned int call_array_decay()
{
 return 4;
}


// Function: param_string at 0x400a08
int param_string(char *a0)
{
 return a0[1] + *(a0);
}


// Function: call_string_param at 0x400a18
unsigned int call_string_param()
{
 return 173;
}


// Function: param_ptr_array at 0x400a20
typedef struct struct_0 {
 char field_0;
} struct_0;

typedef struct struct_1 {
 char field_0;
} struct_1;

unsigned int param_ptr_array(struct_1 **a0, unsigned int i)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 struct_0 **v2; // r2
 unsigned int v3; // r3
 unsigned int v4; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 v2 = a0 + 1;
 v4 = v1 + (*(a0))->field_0;
 a0 = v2;
 v0 = v4;
 i -= 1;
 } while (i != 1);
 return v1 + v3;
}


// Function: call_ptr_array at 0x400a50
unsigned int call_ptr_array()
{
 return 300;
}


// Function: param_varargs at 0x400a58
unsigned int param_varargs(unsigned int i, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v4; // r1
 char *ptr; // r2
 char v0[4]; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v1 = a1;
 v2 = a2;
 v3 = a3;
 *((unsigned int **)&v0[0]) = &v1;
 v4 = 0;
 if (i >= 1)
 {
 do
 {
 ptr = v0;
 *((char **)&v0[0]) = ptr + 1;
 v4 += *(ptr);
 i -= 1;
 } while (i != 1);
 }
 return v4;
}


// Function: call_varargs_param at 0x400a9c
unsigned int call_varargs_param()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x10]

 v0 = 40;
 v1 = param_varargs(4, 10, 20, 30);
 return param_varargs(4, 10, 20, 30);
}


// Function: param_func_ptr at 0x400acc
typedef int (*func_ptr_t)(unsigned int);
int param_func_ptr(func_ptr_t a0, unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x400aec
unsigned int call_func_ptr_param()
{
 return 20;
}


// Function: param_double_ptr at 0x400af4
typedef struct struct_2 {
 unsigned int field_0;
} struct_2;

unsigned int * param_double_ptr(struct_2 **ptr, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int *p; // r3
 unsigned int *v1; // cc_dep1
 unsigned int *v10; // r0
 unsigned int v2; // cc_dep2
 unsigned int *v17; // cc_dep1
 unsigned int v18; // cc_dep2
 unsigned int v19; // cc_ndep
 unsigned int v3; // cc_ndep
 unsigned int *v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep

 p = *(ptr);
 if (ptr)
 {
 v17 = (armg_calculate_condition(18, v1, v2, v3) ? p : v1);
 v18 = (armg_calculate_condition(18, v1, v2, v3) ? 0 : v2);
 v19 = (armg_calculate_condition(18, v1, v2, v3) ? 0 : v3);
 if (!armg_calculate_condition(18, v17, v18, v19))
 goto LABEL_400b0a;
LABEL_400b09:
 v10 = NULL;
 }
 else
 {
 v17 = (armg_calculate_condition(18, v4, v5, v6) ? p : v4);
 v18 = (armg_calculate_condition(18, v4, v5, v6) ? 0 : v5);
 v19 = (armg_calculate_condition(18, v4, v5, v6) ? 0 : v6);
 if (armg_calculate_condition(18, v17, v18, v19))
 goto LABEL_400b09;
LABEL_400b0a:
 v10 = 0xffffffff;
 }
 *(ptr) = v10;
 *(p) = a1;
 if (!armg_calculate_condition(18, v17, v18, v19))
 return v10;
 return 0x1;
}


// Function: call_double_ptr at 0x400b1c
unsigned int call_double_ptr()
{
 return 21;
}


// Function: param_complex_cast at 0x400b24
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1)
{
 if (a1 == 1)
 return a0[1] + *(a0);
 if (a1)
 goto LABEL_400b3c;
 return *(a0);
LABEL_400b3c:
 return 4294967295;
}


// Function: call_complex_cast at 0x400b58
unsigned int call_complex_cast()
{
 return 305419896;
}


// Function: param_struct_byval at 0x400b64
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a0 + a15;
}


// Function: call_struct_byval at 0x400b70
int call_struct_byval()
{
 unsigned int idx; // r0
 unsigned long v0; // [bp-0x40]
 char v1; // [bp-0x4]

 idx = 0;
 do
 {
 (&v0)[idx] = idx;
 idx += 1;
 } while (idx != 16);
 return *((int *)&v1) + v0;
}


// Function: param_order_dep at 0x400ba0
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_order_dep at 0x400ba8
unsigned int call_order_dep()
{
 return 3;
}


// Function: test_parameter_passing at 0x400bb0
extern char g_40177f[];

int test_parameter_passing()
{
 unsigned int idx; // r0
 unsigned int v5; // r0
 unsigned int v0; // [bp-0x50]
 unsigned long v1; // [bp-0x48]
 unsigned int v2; // [bp-0xc]

 puts(&g_40177f);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 4);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 v0 = 40;
 printf("PARAM-L2-04: %d\n", param_varargs(4, 10, 20, 30));
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 idx = 0;
 do
 {
 (&v1)[idx] = idx;
 idx += 1;
 } while (idx != 16);
 printf("PARAM-L3-04: %d\n", v2 + v1);
 v5 = printf("PARAM-L3-05: %d\n", 3);
 return printf("PARAM-L3-05: %d\n", 3);
}


// Function: ret_basic_type at 0x400cf0
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x400cf8
unsigned int call_ret_basic()
{
 return 42;
}


// Function: ret_pointer at 0x400d00
int ret_pointer(unsigned int a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x400d08
unsigned int call_ret_pointer()
{
 return 20;
}


// Function: ret_small_struct at 0x400d10
unsigned int * ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 *(ptr) = a1;
 ptr[1] = a2;
 return ptr;
}


// Function: call_ret_small_struct at 0x400d18
unsigned int call_ret_small_struct()
{
 return 7;
}


// Function: ret_large_struct at 0x400d20
int ret_large_struct(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // r2

 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = a1 + idx;
 idx += 1;
 } while (idx != 16);
 return ptr;
}


// Function: call_ret_large_struct at 0x400d3c
int call_ret_large_struct()
{
 unsigned int idx; // r0
 unsigned long v0; // [bp-0x40]
 char v1; // [bp-0x4]

 idx = 0;
 do
 {
 (&v0)[idx] = idx + 100;
 idx += 1;
 } while (idx != 16);
 return *((int *)&v1) + v0;
}


// Function: func_a at 0x400d70
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x400d78
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: ret_func_ptr at 0x400d80
int ret_func_ptr(unsigned int a0)
{
 if (a0)
 return func_b;
 return func_a;
}


// Function: call_ret_func_ptr at 0x400da8
unsigned int call_ret_func_ptr()
{
 return 10;
}


// Function: ret_opaque_handle at 0x400db0
extern char ret_opaque_handle_handle2;

int ret_opaque_handle(unsigned int a0)
{
 if (a0)
 return &ret_opaque_handle_handle2;
 return "d";
}


// Function: call_ret_opaque at 0x400dd8
extern unsigned int ret_opaque_handle_handle1;

int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


// Function: ret_complex_expr at 0x400de8
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a1 >= a0)
 return a2 + 10;
 return a2 * 2;
}


// Function: call_ret_complex_expr at 0x400dfc
unsigned int call_ret_complex_expr()
{
 return 40;
}


// Function: ret_multi_branch at 0x400e04
unsigned int ret_multi_branch(unsigned int a0)
{
 return (a0 < 3 ? 10 + a0 * 10 : 4294967295);
}


// Function: call_ret_multi_branch at 0x400e20
unsigned int call_ret_multi_branch()
{
 return 60;
}


// Function: ret_void at 0x400e28
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return a0 * 3;
}


// Function: call_ret_void at 0x400e34
unsigned int call_ret_void()
{
 return 21;
}


// Function: test_return_values at 0x400e3c
extern char g_401661[];
extern char g_40167d[];
extern char g_401699[];
extern char g_4016b4[];
extern char g_4016d1[];
extern char g_4016ed[];
extern char g_40170a[];
extern char g_401726[];
extern char g_401742[];
extern char g_4017a0[];
extern unsigned int ret_opaque_handle_handle1;

int test_return_values()
{
 unsigned int idx; // r0
 unsigned int v3; // r0
 unsigned long v0; // [bp-0x48]
 unsigned int v1; // [bp-0xc]

 puts(&g_4017a0);
 printf(&g_401661, 42);
 printf(&g_40167d, 20);
 printf(&g_401699, 7);
 idx = 0;
 do
 {
 (&v0)[idx] = idx + 100;
 idx += 1;
 } while (idx != 16);
 printf(&g_4016b4, v1 + v0);
 printf(&g_4016d1, 10);
 printf(&g_4016ed, ret_opaque_handle_handle1);
 printf(&g_40170a, 40);
 printf(&g_401726, 60);
 v3 = printf(&g_401742, 21);
 return printf(&g_401742, 21);
}


// Function: main at 0x400f40
unsigned int main()
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


// Function: __aeabi_drsub at 0x400f5c
static int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __adddf3(a0, a1, a2, a3);
 return __adddf3(a0, a1, a2, a3);
}


// Function: __subdf3 at 0x400f64
static int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __adddf3(a0, a1, a2, a3);
 return __adddf3(a0, a1, a2, a3);
}


// Function: __adddf3 at 0x400f68
// Stub: ARM double-precision add helper
int __adddf3(int a0, int a1, int a2, int a3)
{
 return a0;
}


// Function: __aeabi_ui2d at 0x401214
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
 goto LABEL_401220;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_401220;
 return a0;
 }
LABEL_401220:
 v2 = 0;
 v1 = v9;
 v0 = v10;
 return 0;
}





// Function: __extendsfdf2 at 0x401260
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
 goto LABEL_401276;
LABEL_401275:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_40127a;
LABEL_401279:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_401280;
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
 goto LABEL_401275;
LABEL_401276:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_401279;
LABEL_40127a:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_401280;
 return v4;
 }
LABEL_401280:
 if ((v3 & 16777215))
 goto LABEL_401288;
 return v4;
LABEL_401288:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_401294;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_401294;
 return v4;
 }
LABEL_401294:
 v2 = 0;
 v1 = v44;
 v0 = v45;
 return 0;
}


// Function: __floatundidf at 0x4012a8
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
 goto LABEL_4012b0;
 return a0;
LABEL_4012b0:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a1 >> 22;
 if (!a1 >> 22)
 goto LABEL_4012b8;
LABEL_4012b8:
 return 0;
}



/* CRT stub function __floatdidf removed by preprocessor */



// Function: __fixdfsi at 0x40131c
int __fixdfsi(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r2

 v0 = a1 * 2;
 if (!((char)armg_calculate_condition(33, v0, 0x200000, 0)))
 {
 if ((char)armg_calculate_condition(81, v0, 0x200000, 0))
 {
 return 0;
 }
 else if (4294966303 > v0 + 0x200000 >> 21)
 {
 if ((a1 & 0x80000000))
 return -((a1 * 0x800 | 0x80000000 | a0 >> 21) >> ((char)(4294966303 - (v0 + 0x200000 >> 21)) & 31) & (4294966303 - (v0 + 0x200000 >> 21) & 255) - 32 >> 31);
 return (a1 * 0x800 | 0x80000000 | a0 >> 21) >> ((char)(4294966303 - (v0 + 0x200000 >> 21)) & 31) & (4294966303 - (v0 + 0x200000 >> 21) & 255) - 32 >> 31;
 }
 }
 else
 {
 if (a0 || a1 * 0x1000)
 return 0;
 }
 if ((a1 & 0x80000000))
 return a1 & 0x80000000;
 return 2147483647;
}



/* CRT stub function _fini removed by preprocessor */


