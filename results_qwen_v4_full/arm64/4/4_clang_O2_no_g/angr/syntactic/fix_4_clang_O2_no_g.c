// Angr Decompilation of 4_clang_O2_no_g
// Platform: AARCH64

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>



// Forward declarations for structs
typedef struct struct_1 {
 char field_0;
} struct_1;

typedef struct struct_2 {
 char field_0;
} struct_2;

typedef struct struct_3 {
 struct struct_1 *field_0;
 struct struct_2 *field_8;
} struct_3;

typedef struct struct_4 {
 unsigned int field_0;
} struct_4;

typedef struct struct_0 {
 unsigned int field_0;
 unsigned long long field_4;
 unsigned long long field_14;
 unsigned long long field_24;
 unsigned long long field_34;
 unsigned int field_3c;
} struct_0;

typedef int (*func_ptr_t)(unsigned int);

/* CRT stub function _init removed by preprocessor */

// Forward declarations
int test_calling_conventions(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7);
int test_parameter_passing(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7);
int test_return_values();
int main(int argc, char *argv[]);

// Global variables
unsigned int g_dollar_d_4 = 10;
char g_401228[] = "VARARGS-L1-01: %d\n";
char g_401250[] = "VARARGS-L1-02: %d\n";
char g_401272[] = "VARARGS-L2-01: %d\n";
char g_401299[] = "VARARGS-L2-02: %d\n";
char g_4012c1[] = "VARARGS-L2-03: %d\n";
char g_4012ed[] = "VARARGS-L2-04: %d\n";
char g_4014d2[] = "=== Calling Conventions Test ===";
char g_4014f3[] = "=== Parameter Passing Test ===";
char g_4013d5[] = "RET-L1-01: %d\n";
char g_4013f1[] = "RET-L1-02: %d\n";
char g_40140d[] = "RET-L1-03: %d\n";
char g_401428[] = "RET-L1-04: %d\n";
char g_401445[] = "RET-L2-01: %d\n";
char g_401461[] = "RET-L2-02: %d\n";
char g_40147e[] = "RET-L2-03: %d\n";
char g_40149a[] = "RET-L2-04: %d\n";
char g_4014b6[] = "RET-L3-01: %d\n";
char g_401514[] = "=== Return Values Test ===";
char ret_opaque_handle_handle2 = 0;
char g_ret_opaque_handle_d[] = "d";

void deregister_tm_clones(void) {}
void __do_global_dtors_aux(void) {}
unsigned long long frame_dummy(void) { return 0; }
int arm64g_calculate_condition(int a0, unsigned int a1, int a2, int a3) { return 0; }

// Rotate left macro
#define __ROL__(val, shift) (((val) << (shift)) | ((val) >> (32 - (shift))))



// Function: __dollar_x at 0x400640
long long __dollar_x(void)
{
 return 0;
}


// Function: sub_400654 at 0x400654
long long sub_400654(void)
{
 return 0;
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
unsigned long long call_cdecl(void)
{
 return 15;
}


// Function: stdcall_func at 0x400824
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: call_stdcall at 0x40082c
unsigned long long call_stdcall(void)
{
 return 50;
}


// Function: fastcall_func at 0x400834
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a1 + a0 + a2;
}


// Function: call_fastcall at 0x400840
unsigned long long call_fastcall(void)
{
 return 6;
}


// Function: call_thiscall at 0x400848
unsigned long long call_thiscall(void)
{
 return 15;
}


// Function: arm_aapcs_func at 0x400850
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x400864
unsigned long long call_arm_aapcs(void)
{
 return 15;
}


// Function: mips_func at 0x40086c
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_mips at 0x40087c
unsigned long long call_mips(void)
{
 return 100;
}


// Function: amd64_sysv_func at 0x400884
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x40089c
unsigned long long call_amd64_sysv(void)
{
 return 21;
}


// Function: ms_x64_func at 0x4008a4
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x4008b8
unsigned long long call_ms_x64(void)
{
 return 15;
}


// Function: vectorcall_func at 0x4008c0
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_vectorcall at 0x4008d0
unsigned long long call_vectorcall(void)
{
 return 10;
}


// Function: mixed_conventions_test at 0x4008d8
unsigned long long mixed_conventions_test(void)
{
 return 33;
}


// Function: varargs_func at 0x4008e0
unsigned int varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 unsigned long long v22; // x8
 unsigned long long v23; // q0
 unsigned int result; // w0
 unsigned int v33; // w10
 char *ptr; // x11
 unsigned int v35; // w0
 unsigned long long v24; // q1
 unsigned long long v25; // q2
 unsigned long long v26; // q3
 unsigned long long v27; // q4
 unsigned long long v28; // q5
 unsigned long long v29; // q6
 unsigned long long v30; // q7
 unsigned long v31; // x11
 unsigned long long v0; // [bp-0xe0]
 unsigned long long v1; // [bp-0xd0]
 unsigned long long v2; // [bp-0xc0]
 unsigned long long v3; // [bp-0xb0]
 unsigned long long v4; // [bp-0xa0]
 unsigned long long v5; // [bp-0x90]
 unsigned long long v6; // [bp-0x80]
 unsigned long long v7; // [bp-0x70]
 char v8; // [bp-0x60]
 unsigned long long v9; // [bp-0x58]
 unsigned long long v10; // [bp-0x50]
 unsigned long long v11; // [bp-0x48]
 unsigned long long v12; // [bp-0x40]
 unsigned long long v13; // [bp-0x38]
 unsigned long long v14; // [bp-0x30]
 unsigned long long v15; // [bp-0x28]
 char v16[4]; // [bp-0x20], Other Possible Types: char
 char *v17; // [bp-0x18]
 char *v18; // [bp-0x10]
 unsigned int v19; // [bp-0x8], Other Possible Types: unsigned long long
 unsigned int v20; // [bp-0x8]
 char v21; // [bp+0x0]

 v18 = &v8;
 v19 = 18446743528248704968;
 v22 = 0;
 v11 = a3;
 v12 = a4;
 v9 = a1;
 v10 = a2;
 v13 = a5;
 v14 = a6;
 v0 = v23;
 v1 = v24;
 v2 = v25;
 v3 = v26;
 v4 = v27;
 v5 = v28;
 v6 = v29;
 v7 = v30;
 v17 = v16;
 v15 = a7;
 ptr = &v21;
 if (a0 < 1)
 return 0;
 v31 = v20;
 do
 {
 result = a0;
 if (!((char)(v31 >> 31) & 1))
 {
 v33 = v31;
 goto LABEL_400944;
 }
 else
 {
 v33 = (unsigned int)v31 + 8;
 v19 = v33;
 if ((char)arm64g_calculate_condition(129, v31 & 4294967295, 8, 0))
 {
LABEL_400944:
 ptr = v16;
 ptr = ptr + 2;
 continue;
 }
 else
 {
 ptr = &v17[v31 & 4294967295];
 }
 }
 v35 = result - 1;
 v22 += (unsigned long long)*(ptr);
 v31 = v33;
 a0 = v35;
 } while (result != 1);
 return v22;
}


// Function: func_no_args at 0x40098c
unsigned long long func_no_args(void)
{
 return 42;
}


// Function: func_many_args at 0x400994
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x4009b4
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


// Function: func_struct_byval at 0x400a0c
int func_struct_byval(unsigned int *a0)
{
 return 0;
}


// Function: func_struct_byptr at 0x400a8c
unsigned long long func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0) * a0[1];
}


// Function: test_calling_conventions at 0x400aa4
int test_calling_conventions(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_4014d2);
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
 printf(g_401228, varargs_func(5, 1, 2, 3, 4, 5, a6, a7) & 4294967295);
 printf(g_401250, 42);
 printf(g_401272, 36);
 printf(g_401299, 117);
 printf(g_4012c1, 136);
 return printf(g_4012ed, 50);
}


// Function: param_by_value_int at 0x400bd8
unsigned int param_by_value_int(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_by_value_int at 0x400be0
unsigned long long call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x400be8
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = (*(ptr) * 2 | *(ptr) >> 31) & 4294967294;
 return 1;
}


// Function: call_by_value_ptr at 0x400c00
unsigned long long call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x400c08
unsigned long long param_array_decay(void)
{
 return 8;
}


// Function: call_array_decay at 0x400c10
unsigned long long call_array_decay(void)
{
 return 8;
}


// Function: param_string at 0x400c18
int param_string(char *a0)
{
 return a0[1] + *(a0);
}


// Function: call_string_param at 0x400c28
unsigned long long call_string_param(void)
{
 return 173;
}


// Function: param_ptr_array at 0x400c30
unsigned long long param_ptr_array(struct_3 *a0, unsigned int a1)
{
 unsigned long v0; // x9
 unsigned long long v1; // x10
 unsigned long long j; // x9
 unsigned long long v2; // x8
 unsigned long long v3; // x8
 unsigned long long v4; // x11
 struct_3 *v5; // x12
 unsigned long long i; // x13
 struct_3 *v9; // x11

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
 v5 = (struct_3 *)&a0->field_8;
 i = v1;
 do
 {
 v3 += v5->field_8->field_0;
 v4 += v5->field_0->field_0;
 v5 += 1;
 i -= 2;
 } while (i != 2);
 v2 = v4 + v3;
 if (v1 == v0)
 return v4 + v3 & 4294967295;
 }
 v9 = &((struct_3 *)&a0->field_0)[v1];
 j = v0 - v1;
 do
 {
 v2 += v9->field_0->field_0;
 j -= 1;
 v9 = (struct_3 *)&v9->field_8;
 } while (j != 1);
 return v2 & 4294967295;
}


// Function: call_ptr_array at 0x400cbc
unsigned long long call_ptr_array(void)
{
 return 300;
}


// Function: param_varargs at 0x400cc4
unsigned int param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 unsigned long long v22; // x8
 unsigned long long v23; // q0
 unsigned int result; // w0
 unsigned int v33; // w10
 char *ptr; // x11
 unsigned int v35; // w0
 unsigned long long v24; // q1
 unsigned long long v25; // q2
 unsigned long long v26; // q3
 unsigned long long v27; // q4
 unsigned long long v28; // q5
 unsigned long long v29; // q6
 unsigned long long v30; // q7
 unsigned long v31; // x11
 unsigned long long v0; // [bp-0xe0]
 unsigned long long v1; // [bp-0xd0]
 unsigned long long v2; // [bp-0xc0]
 unsigned long long v3; // [bp-0xb0]
 unsigned long long v4; // [bp-0xa0]
 unsigned long long v5; // [bp-0x90]
 unsigned long long v6; // [bp-0x80]
 unsigned long long v7; // [bp-0x70]
 char v8; // [bp-0x60]
 unsigned long long v9; // [bp-0x58]
 unsigned long long v10; // [bp-0x50]
 unsigned long long v11; // [bp-0x48]
 unsigned long long v12; // [bp-0x40]
 unsigned long long v13; // [bp-0x38]
 unsigned long long v14; // [bp-0x30]
 unsigned long long v15; // [bp-0x28]
 char v16[4]; // [bp-0x20], Other Possible Types: char
 char *v17; // [bp-0x18]
 char *v18; // [bp-0x10]
 unsigned int v19; // [bp-0x8], Other Possible Types: unsigned long long
 unsigned int v20; // [bp-0x8]
 char v21; // [bp+0x0]

 v18 = &v8;
 v19 = 18446743528248704968;
 v22 = 0;
 v11 = a3;
 v12 = a4;
 v9 = a1;
 v10 = a2;
 v13 = a5;
 v14 = a6;
 v0 = v23;
 v1 = v24;
 v2 = v25;
 v3 = v26;
 v4 = v27;
 v5 = v28;
 v6 = v29;
 v7 = v30;
 v17 = v16;
 v15 = a7;
 ptr = &v21;
 if (a0 < 1)
 return 0;
 v31 = v20;
 do
 {
 result = a0;
 if (!((char)(v31 >> 31) & 1))
 {
 v33 = v31;
 goto LABEL_400d28;
 }
 else
 {
 v33 = (unsigned int)v31 + 8;
 v19 = v33;
 if ((char)arm64g_calculate_condition(129, v31 & 4294967295, 8, 0))
 {
LABEL_400d28:
 ptr = v16;
 ptr = ptr + 2;
 continue;
 }
 else
 {
 ptr = &v17[v31 & 4294967295];
 }
 }
 v35 = result - 1;
 v22 += (unsigned long long)*(ptr);
 v31 = v33;
 a0 = v35;
 } while (result != 1);
 return v22;
}


// Function: call_varargs_param at 0x400d70
int call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 return param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
}


// Function: param_func_ptr at 0x400d88
int param_func_ptr(func_ptr_t a0, unsigned int a1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x400da8
unsigned long long call_func_ptr_param(void)
{
 return 20;
}


// Function: param_double_ptr at 0x400db0
unsigned long long param_double_ptr(struct_4 **ptr, unsigned int a1)
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


// Function: call_double_ptr at 0x400dd8
unsigned long long call_double_ptr(void)
{
 return 21;
}


// Function: param_complex_cast at 0x400de0
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


// Function: call_complex_cast at 0x400e08
unsigned long long call_complex_cast(void)
{
 return 305419896;
}


// Function: param_struct_byval at 0x400e14
int param_struct_byval(unsigned int *a0)
{
 return a0[15] + *(a0);
}


// Function: call_struct_byval at 0x400e24
unsigned long long call_struct_byval(void)
{
 return 15;
}


// Function: param_order_dep at 0x400e2c
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_order_dep at 0x400e34
unsigned long long call_order_dep(void)
{
 return 3;
}


// Function: test_parameter_passing at 0x400e3c
int test_parameter_passing(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_4014f3);
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


// Function: ret_basic_type at 0x400f20
unsigned int ret_basic_type(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_ret_basic at 0x400f28
unsigned long long call_ret_basic(void)
{
 return 42;
}


// Function: ret_pointer at 0x400f30
long long ret_pointer(unsigned long a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x400f38
unsigned long long call_ret_pointer(void)
{
 return 20;
}


// Function: ret_small_struct at 0x400f40
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
 return a0 & 4294967295 | (a1 * 0x100000000 | a1 >> 32) & 0xffffffff00000000;
}


// Function: call_ret_small_struct at 0x400f4c
unsigned long long call_ret_small_struct(void)
{
 return 7;
}


// Function: ret_large_struct at 0x400f54
long long ret_large_struct(unsigned long a0)
{
 return a0;
}


// Function: call_ret_large_struct at 0x400fac
unsigned long long call_ret_large_struct(void)
{
 return 215;
}


// Function: func_a at 0x400fb4
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x400fbc
unsigned int func_b(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: ret_func_ptr at 0x400fc4
long long ret_func_ptr(unsigned int a0)
{
 if (a0)
 return (long long)func_b;
 return (long long)func_a;
}


// Function: call_ret_func_ptr at 0x400fe0
unsigned long long call_ret_func_ptr(void)
{
 return 10;
}


// Function: ret_opaque_handle at 0x400fe8
long long ret_opaque_handle(unsigned int a0)
{
 if (a0)
 return (long long)&ret_opaque_handle_handle2;
 return (long long)g_ret_opaque_handle_d;
}


// Function: call_ret_opaque at 0x401004
int call_ret_opaque(void)
{
 return g_dollar_d_4;
}


// Function: ret_complex_expr at 0x401010
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a1 >= a0)
 return a2 + 10;
 return __ROL__(a2, 1) & 4294967294;
}


// Function: call_ret_complex_expr at 0x401024
unsigned long long call_ret_complex_expr(void)
{
 return 40;
}


// Function: ret_multi_branch at 0x40102c
unsigned long long ret_multi_branch(unsigned int a0)
{
 if (a0 >= 3)
 return 4294967295;
 return 10 * a0 + 10;
}


// Function: call_ret_multi_branch at 0x401044
unsigned long long call_ret_multi_branch(void)
{
 return 60;
}


// Function: ret_void at 0x40104c
long long ret_void(unsigned long a0, unsigned int *ptr)
{
 *(ptr) = (unsigned int)a0 * 3;
 return a0;
}


// Function: call_ret_void at 0x401058
unsigned long long call_ret_void(void)
{
 return 21;
}


// Function: test_return_values at 0x401060
int test_return_values()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401514);
 printf(g_4013d5, 42);
 printf(g_4013f1, 20);
 printf(g_40140d, 7);
 printf(g_401428, 215);
 printf(g_401445, 10);
 printf(g_401461, g_dollar_d_4);
 printf(g_40147e, 40);
 printf(g_40149a, 60);
 return printf(g_4014b6, 21);
}


// Function: main at 0x40110c
int main(int argc, char *argv[])
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_parameter_passing(test_calling_conventions(0, 0, 0, 0, 0, 0, 0, 0), 0, 0, 0, 0, 0, 0, 0);
 test_return_values();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


