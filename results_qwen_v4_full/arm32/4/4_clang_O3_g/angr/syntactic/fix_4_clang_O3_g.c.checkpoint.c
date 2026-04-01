// Angr Decompilation of 4_clang_O3_g
// Platform: ARMEL

#include <stddef.h>

// Missing global variable definitions
unsigned int g_412008 = 0;
char g_401818[] = "=== Return Value Tests ===";
char g_4015f1[] = "CALL-L1-10: %d\n";
char g_40179e[] = "RET-L1-09: %d\n";
char g_401711[] = "RET-L1-03: %d\n";
char g_4015c5[] = "PARAM-L3-02: %d\n";
char g_401554[] = "PARAM-L2-02: %d\n";
char g_401782[] = "RET-L1-07: %d\n";
char g_40152c[] = "PARAM-L2-01: %d\n";
char g_401576[] = "PARAM-L2-03: %d\n";
char g_40159d[] = "PARAM-L3-01: %d\n";
char g_4017d6[] = "=== Calling Convention Tests ===";
char g_4017f7[] = "=== Parameter Passing Tests ===";
char g_4016d9[] = "RET-L1-01: %d\n";
char g_4016f5[] = "RET-L1-02: %d\n";
char g_40172c[] = "RET-L1-04: %d\n";
char g_401749[] = "RET-L1-05: %d\n";
char g_401765[] = "RET-L1-06: %d\n";
char g_4017ba[] = "RET-L1-08: %d\n";
unsigned int ret_opaque_handle_handle1 = 0;
char ret_opaque_handle_handle2 = 'd';

// Missing function declarations
extern unsigned int armg_calculate_flag_c(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int armg_calculate_flag_v(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int armg_calculate_condition(unsigned int, unsigned int, unsigned int, unsigned int);
extern int __adddf3(int a0, ...);

// Missing function implementations
unsigned int armg_calculate_flag_c(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return 0;
}

unsigned int armg_calculate_flag_v(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return 0;
}

unsigned int armg_calculate_condition(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return 1;
}

/* CRT stub function _init removed by preprocessor */



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
 char *ptr; // r2
 unsigned int v5; // r1
 unsigned int v6; // r0
 char *v7; // r2
 char v0[16]; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v1 = a1;
 v2 = a2;
 v3 = a3;
 *((unsigned int **)&v0[0]) = &v1;
 if (i < 1)
 return 0;
 ptr = v0 + 1;
 v5 = 0;
 do
 {
 *((char **)&v0[0]) = ptr;
 v6 = i - 1;
 v7 = ptr + 1;
 v5 += ptr[1];
 ptr = v7;
 i = v6;
 } while (i != 1);
 return v5;
}


// Function: func_no_args at 0x4006f8
unsigned int func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x400700
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x400730
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


// Function: func_struct_byval at 0x4007a8
int func_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15, unsigned int a16, unsigned int a17, unsigned int a18, unsigned int a19, unsigned int a20, unsigned int a21, unsigned int a22, unsigned int a23, unsigned int a24, unsigned int a25, unsigned int a26, unsigned int a27, unsigned int a28, unsigned int a29, unsigned int a30)
{
 return a30 + a28 + a26 + a24 + a22 + a20 + a18 + a16 + a14 + a12 + a10 + a8 + a6 + a4 + a2 + a0;
}


// Function: func_struct_byptr at 0x40082c
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


// Function: test_calling_conventions at 0x400840
extern char g_40152c[];
extern char g_401554[];
extern char g_401576[];
extern char g_40159d[];
extern char g_4015c5[];
extern char g_4015f1[];
extern char g_4017d6[];

int test_calling_conventions()
{
 unsigned int v3; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 puts(&g_4017d6);
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
 printf(&g_40152c, varargs_func(5, 1, 2, 3));
 printf(&g_401554, 42);
 printf(&g_401576, 36);
 printf(&g_40159d, 117);
 printf(&g_4015c5, 136);
 v3 = printf(&g_4015f1, 50);
 return printf(&g_4015f1, 50);
}


// Function: param_by_value_int at 0x4009c4
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_by_value_int at 0x4009cc
unsigned int call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x4009d4
unsigned int param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2;
 return 1;
}


// Function: call_by_value_ptr at 0x4009e8
unsigned int call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x4009f0
unsigned int param_array_decay()
{
 return 4;
}


// Function: call_array_decay at 0x4009f8
unsigned int call_array_decay()
{
 return 4;
}


// Function: param_string at 0x400a00
int param_string(char *a0)
{
 return a0[1] + *(a0);
}


// Function: call_string_param at 0x400a10
unsigned int call_string_param()
{
 return 173;
}


// Function: param_ptr_array at 0x400a18
typedef struct struct_0 {
 char field_0;
} struct_0;

unsigned int param_ptr_array(struct_0 **a0, unsigned int i)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 struct_0 **v2; // r2
 unsigned int v3; // r1
 unsigned int v4; // r3
 unsigned int v5; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 v2 = a0 + 1;
 v3 = i - 1;
 v5 = v1 + (*a0)->field_0;
 a0 = v2;
 v0 = v5;
 i = v3;
 } while (i != 1);
 return v1 + v4;
}


// Function: call_ptr_array at 0x400a48
unsigned int call_ptr_array()
{
 return 300;
}


// Function: param_varargs at 0x400a50
unsigned int param_varargs(unsigned int i, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char *ptr; // r2
 unsigned int v5; // r1
 unsigned int v6; // r0
 char *v7; // r2
 char v0[16]; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v1 = a1;
 v2 = a2;
 v3 = a3;
 *((unsigned int **)&v0[0]) = &v1;
 if (i < 1)
 return 0;
 ptr = v0 + 1;
 v5 = 0;
 do
 {
 *((char **)&v0[0]) = ptr;
 v6 = i - 1;
 v7 = ptr + 1;
 v5 += ptr[1];
 ptr = v7;
 i = v6;
 } while (i != 1);
 return v5;
}


// Function: call_varargs_param at 0x400aa8
unsigned int call_varargs_param()
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x10]

 v0 = 40;
 v1 = param_varargs(4, 10, 20, 30);
 return param_varargs(4, 10, 20, 30);
}


// Function: param_func_ptr at 0x400ad8
typedef int (*func_ptr_t)(unsigned int);

int param_func_ptr(func_ptr_t a0, unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x400af8
unsigned int call_func_ptr_param()
{
 return 20;
}


// Function: param_double_ptr at 0x400b00
typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int * param_double_ptr(struct_1 **ptr, unsigned int a1, unsigned int a2, unsigned int a3)
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
 goto LABEL_400b16;
LABEL_400b15:
 v10 = NULL;
 }
 else
 {
 v17 = (armg_calculate_condition(18, v4, v5, v6) ? p : v4);
 v18 = (armg_calculate_condition(18, v4, v5, v6) ? 0 : v5);
 v19 = (armg_calculate_condition(18, v4, v5, v6) ? 0 : v6);
 if (armg_calculate_condition(18, v17, v18, v19))
 goto LABEL_400b15;
LABEL_400b16:
 v10 = 0xffffffff;
 }
 *(p) = a1;
 *(ptr) = v10;
 if (!armg_calculate_condition(18, v17, v18, v19))
 return v10;
 return 0x1;
}


// Function: call_double_ptr at 0x400b28
unsigned int call_double_ptr()
{
 return 21;
}


// Function: param_complex_cast at 0x400b30
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1)
{
 if (a1 == 1)
 return a0[1] + *(a0);
 if (a1)
 goto LABEL_400b48;
 return *(a0);
LABEL_400b48:
 return 4294967295;
}


// Function: call_complex_cast at 0x400b64
unsigned int call_complex_cast()
{
 return 305419896;
}


// Function: param_struct_byval at 0x400b70
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a0 + a15;
}


// Function: call_struct_byval at 0x400b7c
unsigned int call_struct_byval()
{
 return 15;
}


// Function: param_order_dep at 0x400b84
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_order_dep at 0x400b8c
unsigned int call_order_dep()
{
 return 3;
}


// Function: test_parameter_passing at 0x400b94
extern char g_4017f7[];

int test_parameter_passing()
{
 unsigned int v2; // r0
 unsigned int v0; // [bp-0x10]

 puts(&g_4017f7);
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
 printf("PARAM-L3-04: %d\n", 15);
 v2 = printf("PARAM-L3-05: %d\n", 3);
 return printf("PARAM-L3-05: %d\n", 3);
}


// Function: ret_basic_type at 0x400cb0
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x400cb8
unsigned int call_ret_basic()
{
 return 42;
}


// Function: ret_pointer at 0x400cc0
int ret_pointer(unsigned int a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x400cc8
unsigned int call_ret_pointer()
{
 return 20;
}


// Function: ret_small_struct at 0x400cd0
unsigned int * ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 *(ptr) = a1;
 ptr[1] = a2;
 return ptr;
}


// Function: call_ret_small_struct at 0x400cd8
unsigned int call_ret_small_struct()
{
 return 7;
}


// Function: ret_large_struct at 0x400ce0
unsigned int * ret_large_struct(unsigned int *ptr, unsigned int a1)
{
 ptr[12] = a1 + 12;
 ptr[15] = a1 + 15;
 ptr[8] = a1 + 8;
 ptr[9] = a1 + 9;
 ptr[10] = a1 + 10;
 ptr[11] = a1 + 11;
 ptr[13] = a1 + 13;
 ptr[14] = a1 + 14;
 *(ptr) = a1;
 ptr[1] = a1 + 1;
 ptr[2] = a1 + 2;
 ptr[3] = a1 + 3;
 ptr[4] = a1 + 4;
 ptr[5] = a1 + 5;
 ptr[6] = a1 + 6;
 ptr[7] = a1 + 7;
 return ptr;
}


// Function: call_ret_large_struct at 0x400d54
unsigned int call_ret_large_struct()
{
 return 215;
}


// Function: func_a at 0x400d5c
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x400d64
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: ret_func_ptr at 0x400d6c
int ret_func_ptr(unsigned int a0)
{
 if (a0)
 return func_b;
 return func_a;
}


// Function: call_ret_func_ptr at 0x400d94
unsigned int call_ret_func_ptr()
{
 return 10;
}


// Function: ret_opaque_handle at 0x400d9c
extern char ret_opaque_handle_handle2;

int ret_opaque_handle(unsigned int a0)
{
 if (!a0)
 return "d";
 return &ret_opaque_handle_handle2;
}


// Function: call_ret_opaque at 0x400db8
extern unsigned int ret_opaque_handle_handle1;

int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


// Function: ret_complex_expr at 0x400dc8
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a1 >= a0)
 return a2 + 10;
 return a2 * 2;
}


// Function: call_ret_complex_expr at 0x400ddc
unsigned int call_ret_complex_expr()
{
 return 40;
}


// Function: ret_multi_branch at 0x400de4
unsigned int ret_multi_branch(unsigned int a0)
{
 return (a0 < 3 ? 10 + a0 * 10 : 4294967295);
}


// Function: call_ret_multi_branch at 0x400e00
unsigned int call_ret_multi_branch()
{
 return 60;
}


// Function: ret_void at 0x400e08
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return a0 * 3;
}


// Function: call_ret_void at 0x400e14
unsigned int call_ret_void()
{
 return 21;
}


// Function: test_return_values at 0x400e1c
extern char g_4016d9[];
extern char g_4016f5[];
extern char g_401711[];
extern char g_40172c[];
extern char g_401749[];
extern char g_401765[];
extern char g_401782[];
extern char g_40179e[];
extern char g_4017ba[];
extern char g_401818[];
extern unsigned int ret_opaque_handle_handle1;

int test_return_values()
{
 unsigned int v0; // r0

 puts(&g_401818);
 printf(&g_4016d9, 42);
 printf(&g_4016f5, 20);
 printf(&g_401711, 7);
 printf(&g_40172c, 215);
 printf(&g_401749, 10);
 printf(&g_401765, ret_opaque_handle_handle1);
 printf(&g_401782, 40);
 printf(&g_40179e, 60);
 v0 = printf(&g_4017ba, 21);
 return printf(&g_4017ba, 21);
}


// Function: main at 0x400ef0
extern char g_4016d9[];
extern char g_4016f5[];
extern char g_401711[];
extern char g_40172c[];
extern char g_401749[];
extern char g_401765[];
extern char g_401782[];
extern char g_40179e[];
extern char g_4017ba[];
extern char g_401818[];
extern unsigned int ret_opaque_handle_handle1;

unsigned int main()
{
 test_calling_conventions();
 test_parameter_passing();
 puts(&g_401818);
 printf(&g_4016d9, 42);
 printf(&g_4016f5, 20);
 printf(&g_401711, 7);
 printf(&g_40172c, 215);
 printf(&g_401749, 10);
 printf(&g_401765, ret_opaque_handle_handle1);
 printf(&g_401782, 40);
 printf(&g_40179e, 60);
 printf(&g_4017ba, 21);
 return 0;
}


// Function: __aeabi_drsub at 0x400fd4
static int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __adddf3(0);
 return __adddf3(0);
}


// Function: __subdf3 at 0x400fdc
static int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __adddf3(0);
 return __adddf3(0);
}





// Function: __aeabi_ui2d at 0x40128c
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
 goto LABEL_401298;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_401298;
 return a0;
 }
LABEL_401298:
 v2 = 0;
 v1 = v9;
 v0 = v10;
 return 0;
}


// Function: __floatsidf at 0x4012b0
unsigned int my_floatsidf(unsigned int a0, unsigned int a1)
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
 goto LABEL_4012bc;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_4012bc;
 return a0;
 }
LABEL_4012bc:
 v2 = 0;
 v1 = v9;
 v0 = v10;
 return 0;
}


// Function: __extendsfdf2 at 0x4012d8
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
 goto LABEL_4012ee;
LABEL_4012ed:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_4012f2;
LABEL_4012f1:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_4012f8;
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
 goto LABEL_4012ed;
LABEL_4012ee:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_4012f1;
LABEL_4012f2:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_4012f8;
 return v4;
 }
LABEL_4012f8:
 if ((v3 & 16777215))
 goto LABEL_401300;
 return v4;
LABEL_401300:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_40130c;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_40130c;
 return v4;
 }
LABEL_40130c:
 v2 = 0;
 v1 = v44;
 v0 = v45;
 return 0;
}


// Function: __floatundidf at 0x401320
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
 {
  v2 = v3;
  v1 = v4;
  v0 = v5;
  v6 = a1 >> 22;
 }
 return a0;
}



/* CRT stub function __floatdidf removed by preprocessor */



// Function: __fixdfsi at 0x401394
unsigned int my_fixdfsi(unsigned int a0, unsigned int a1)
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


