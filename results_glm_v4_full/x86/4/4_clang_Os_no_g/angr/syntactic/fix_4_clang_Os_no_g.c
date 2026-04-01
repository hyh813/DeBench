// Angr Decompilation of 4_clang_Os_no_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

unsigned int __x86_get_pc_thunk_dx(void);

/* Global string constants */
char g_402352[] = "Testing calling conventions\n";
char g_40216d[] = "CALL-L3-05: %d\n";
char g_402336[] = "RET-L3-04: %d\n";
char g_4022a8[] = "RET-L2-04: %d\n";
char g_402119[] = "PARAM-L1-05: %d\n";
char g_402141[] = "PARAM-L1-06: %d\n";
char g_402373[] = "Testing parameter passing\n";
char g_4020a8[] = "PARAM-L2-01: %d\n";
char g_4020d0[] = "PARAM-L2-02: %d\n";
char g_4020f2[] = "PARAM-L2-03: %d\n";
char g_402255[] = "RET-L1-01: %d\n";
char g_402271[] = "RET-L1-02: %d\n";
char g_40228d[] = "RET-L1-03: %d\n";
char g_4022c5[] = "RET-L2-02: %d\n";
char g_4022e1[] = "RET-L2-03: %d\n";
char g_4022fe[] = "RET-L3-02: %d\n";
char g_40231a[] = "RET-L3-03: %d\n";
char g_402394[] = "Testing return values\n";
unsigned int ret_opaque_handle_handle1 = 0;
char ret_opaque_handle_handle2;

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int padding_0[100];
    unsigned int field_2ee7;
    unsigned int padding_2e87[100];
} struct_0;

struct_0 *g_403ff4 = NULL;

/* _init function removed to avoid multiple definition conflicts with CRT */


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return 0;
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
 void* v1; // ebx

 return 0;
}


// Function: sub_401086 at 0x401086
void sub_401086()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010bb at 0x4010bb
void sub_4010bb()
{
 __builtin_unreachable();
}


// Function: sub_4010bc at 0x4010bc
void sub_4010bc()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4010c0
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_4010c4 at 0x4010c4
void sub_4010c4()
{
 deregister_tm_clones();
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
int deregister_tm_clones()
{
 return 0;
}



// Function: sub_401103 at 0x401103
void sub_401103()
{
}


// Function: sub_401109 at 0x401109
void sub_401109()
{
 register_tm_clones();
}



/* CRT stub function register_tm_clones removed by preprocessor */
int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v3 = (char *)&v2->field_2ee7 + 3;
 v0 = v4;
 if (!(&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1)
 {
 return (&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[4]))
 {
 return ((int (*)(void*, int))(*((int *)&v3->padding_0[4])))(&v3->padding_0[56], (&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1);
 }
 else
 {
 return (&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1;
 }
}


// Function: sub_401157 at 0x401157
void sub_401157()
{
 __do_global_dtors_aux();
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
int __do_global_dtors_aux()
{
 unsigned int v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 unsigned int *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86_get_pc_thunk_di((unsigned int)*((int *)&v2), (unsigned int *)&v3);
 ptr = (struct_0 *)&v6->padding_2e87[11];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[56])
 return v5;
 if (*((int *)&ptr->padding_0[16]))
 sub_401080(*((int *)&ptr->padding_0[36]));
 v10 = &ptr->padding_0[236];
 v11 = *((int *)&ptr->padding_0[60]);
 i = (&ptr->padding_0[232] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[60]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[60]) = v13;
 ((void (*)(void))(*((int *)&v10[1 + 4 * v13])))();
 v11 = *((int *)&ptr->padding_0[60]);
 } while (*((int *)&ptr->padding_0[60]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[56] = 1;
 return v14;
}


// Function: sub_4011ea at 0x4011ea
void sub_4011ea()
{
 frame_dummy();
}



/* CRT stub function __x86_get_pc_thunk_dx removed by preprocessor */

/* CRT stub function frame_dummy removed by preprocessor */
int frame_dummy() {
 return 0;
}



// Function: __x86.get_pc_thunk_dx at 0x4011f9
unsigned int __x86_get_pc_thunk_dx()
{
 unsigned int v0; // eax

 return v0;
}


// Function: __x86.get_pc_thunk_di at 0x4011fd
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401201 at 0x401201
void sub_401201(unsigned int a0, unsigned int a1)
{
 cdecl_func();
 return;
}


// Function: cdecl_func at 0x401204
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_cdecl at 0x40120d
unsigned int call_cdecl()
{
 return 15;
}


// Function: stdcall_func at 0x401213
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: call_stdcall at 0x40121f
unsigned int call_stdcall()
{
 return 50;
}


// Function: fastcall_func at 0x401225
int fastcall_func(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // edx

 return v0 + v1 + a0;
}


// Function: call_fastcall at 0x40122f
unsigned int call_fastcall()
{
 return 6;
}


// Function: call_thiscall at 0x401235
unsigned int call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x40123b
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x401250
unsigned int call_arm_aapcs()
{
 return 15;
}


// Function: mips_func at 0x401256
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_mips at 0x401267
unsigned int call_mips()
{
 return 100;
}


// Function: amd64_sysv_func at 0x40126d
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x401286
unsigned int call_amd64_sysv()
{
 return 21;
}


// Function: ms_x64_func at 0x40128c
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x4012a1
unsigned int call_ms_x64()
{
 return 15;
}


// Function: vectorcall_func at 0x4012a7
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_vectorcall at 0x4012b8
unsigned int call_vectorcall()
{
 return 10;
}


// Function: mixed_conventions_test at 0x4012be
unsigned int mixed_conventions_test()
{
 return 33;
}


// Function: varargs_func at 0x4012c4
unsigned int varargs_func(unsigned int a0, ...)
{
 va_list args;
 unsigned int i;
 unsigned int sum;
 unsigned int cur;

 va_start(args, a0);
 i = a0;
 sum = 0;
 while (i-- > 0) {
 cur = va_arg(args, unsigned int);
 sum += cur;
 }
 va_end(args);
 return sum;
}


// Function: func_no_args at 0x4012ee
unsigned int func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x4012f4
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x401315
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v8; // ebx
 unsigned int v9; // edi
 unsigned int v10; // esi
 unsigned int len; // eax
 unsigned int v0; // [bp-0x2c]
 unsigned int v1; // [bp-0x28]
 unsigned int v2; // [bp-0x24]
 unsigned int v3; // [bp-0x20]
 double v4; // [bp-0x18], Other Possible Types: unsigned long
 unsigned int v5; // [bp-0x10]
 unsigned int v6; // [bp-0xc]
 unsigned int v7; // [bp-0x8]

 v7 = v8;
 v6 = v9;
 v5 = v10;
 if (a1)
 {
 *((unsigned long long *)&v4) = 0x7FF80000ULL;
 len = strlen(a1);
 }
 else
 {
 len = 0;
 }
 v0 = len + a0;
 v2 = a2;
 v3 = a3;
 v1 = a2 + a3 + len;
 return v1;
}


// Function: func_struct_byval at 0x401397
unsigned int func_struct_byval()
{
 unsigned int idx; // ecx
 unsigned int v2; // eax
 unsigned int v0; // [bp+0x4]

 idx = 0;
 v2 = 0;
 do
 {
 v2 += (&v0)[2 * idx];
 idx += 1;
 } while (idx != 16);
 return v2;
}


// Function: func_struct_byptr at 0x4013b1
unsigned int func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0) * a0[1];
}


// Function: test_calling_conventions at 0x4013c4
int test_calling_conventions()
{
 unsigned int idx; // eax
 unsigned int index; // ecx
 unsigned int v8; // eax
 unsigned int result; // [bp-0xa8]
 unsigned int v1; // [bp-0xa4]
 unsigned int v2; // [bp-0xa0]
 unsigned int v3; // [bp-0x98]
 unsigned int v9; // [bp-0x94]
 unsigned int v10; // [bp-0x90]
 char v4; // [bp-0x8c]

 puts(&g_402352);
 v3 = 15;
 printf("CALL-L1-01: %d\n");
 v3 = 50;
 printf("CALL-L1-02: %d\n");
 v3 = 6;
 printf("CALL-L1-03: %d\n");
 v3 = 15;
 printf("CALL-L1-04: %d\n");
 v3 = 15;
 printf("CALL-L1-05: %d\n");
 v3 = 100;
 printf("CALL-L1-06: %d\n");
 v3 = 21;
 printf("CALL-L1-07: %d\n");
 v3 = 15;
 printf("CALL-L1-08: %d\n");
 v3 = 10;
 printf("CALL-L1-09: %d\n");
 v3 = 33;
 printf("CALL-L1-10: %d\n");
 v3 = 5;
 v2 = 3;
 v1 = 2;
 result = 1;
 v3 = varargs_func(5);
 printf(&g_4020a8);
 v3 = 42;
 printf(&g_4020d0);
 v3 = 36;
 printf(&g_4020f2);
 v3 = 117;
 printf(&g_402119);
 idx = 1;
 do
 {
 (&v10)[2 * idx] = 0;
 (&v9)[2 * idx] = idx;
 idx += 1;
 } while (idx != 17);
 index = 0;
 v8 = 0;
 do
 {
 v8 += *((int *)&(&v4)[8 * index]);
 index += 1;
 } while (index != 16);
 v3 = v8;
 printf(&g_402141);
 v3 = 50;
 return printf(&g_40216d);
}


// Function: param_by_value_int at 0x401541
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_by_value_int at 0x401548
unsigned int call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x40154e
unsigned int param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2;
 return 1;
}


// Function: call_by_value_ptr at 0x401558
unsigned int call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x40155e
unsigned int param_array_decay()
{
 return 4;
}


// Function: call_array_decay at 0x401564
unsigned int call_array_decay()
{
 return 4;
}


// Function: param_string at 0x40156a
int param_string(char *a0)
{
 return a0[1] + *(a0);
}


// Function: call_string_param at 0x401578
unsigned int call_string_param()
{
 return 173;
}


// Function: param_ptr_array at 0x40157e
unsigned int param_ptr_array(unsigned int a0, unsigned int i)
{
 unsigned int v0; // esi
 unsigned int v1; // eax

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v1 += *((char *)*((int *)(a0 + v0 * 4)));
 v0 += 1;
 } while (i != v0);
 return v1;
}


// Function: call_ptr_array at 0x4015a4
unsigned int call_ptr_array()
{
 return 300;
}


// Function: param_varargs at 0x4015aa
unsigned int param_varargs(unsigned int a0, ...)
{
 va_list args;
 unsigned int i;
 unsigned int sum;
 unsigned int cur;

 va_start(args, a0);
 i = a0;
 sum = 0;
 while (i-- > 0) {
 cur = va_arg(args, unsigned int);
 sum += cur;
 }
 va_end(args);
 return sum;
}


// Function: call_varargs_param at 0x4015d4
unsigned int call_varargs_param()
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]

 v3 = 40;
 v2 = 30;
 v1 = 20;
 v0 = 10;
 return param_varargs(4);
}


// Function: param_func_ptr at 0x4015fb
int param_func_ptr(unsigned int *a0, unsigned int a1)
{
 return ((int (*)(unsigned int))a0)(a1) + 10;
}


// Function: call_func_ptr_param at 0x40161e
unsigned int call_func_ptr_param()
{
 return 20;
}


// Function: param_double_ptr at 0x401624
unsigned int param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (ptr && *(ptr))
 {
 (*ptr)->field_0 = a1;
 *(ptr) = NULL;
 v0 = 1;
 }
 return v0;
}


// Function: call_double_ptr at 0x401645
unsigned int call_double_ptr()
{
 return 21;
}


// Function: param_complex_cast at 0x40164b
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1)
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


// Function: call_complex_cast at 0x401669
unsigned int call_complex_cast()
{
 return 305419896;
}


// Function: param_struct_byval at 0x40166f
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a15 + a0;
}


// Function: call_struct_byval at 0x401678
int call_struct_byval()
{
 unsigned int idx; // eax
 unsigned long v0; // [bp-0x44]
 char v1; // [bp-0x8]

 idx = 0;
 do
 {
 (&v0)[idx] = idx;
 idx += 1;
 } while (idx != 16);
 return *((int *)&v1) + v0;
}


// Function: param_order_dep at 0x401691
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_order_dep at 0x40169a
unsigned int call_order_dep()
{
 return 3;
}


// Function: test_parameter_passing at 0x4016a0

int test_parameter_passing()
{
 unsigned int idx; // eax
 unsigned int v0; // [bp-0x68]
 unsigned int v1; // [bp-0x64]
 unsigned int v2; // [bp-0x60]
 unsigned int v3; // [bp-0x58]
 unsigned long v4; // [bp-0x4c]
 char v5; // [bp-0x10]

 puts(&g_402373);
 v3 = 15;
 printf("PARAM-L1-01: %d\n");
 v3 = 11;
 printf("PARAM-L1-02: %d\n");
 v3 = 4;
 printf("PARAM-L2-01: %d\n");
 v3 = 173;
 printf("PARAM-L2-02: %d\n");
 v3 = 300;
 printf("PARAM-L2-03: %d\n");
 v2 = 30;
 v1 = 20;
 v0 = 10;
 v3 = param_varargs(4);
 printf("PARAM-L2-04: %d\n");
 v3 = 20;
 printf("PARAM-L3-01: %d\n");
 v3 = 21;
 printf("PARAM-L3-02: %d\n");
 v3 = 305419896;
 printf("PARAM-L3-03: %d\n");
 idx = 0;
 do
 {
 (&v4)[idx] = idx;
 idx += 1;
 } while (idx != 16);
 v3 = *((int *)&v5) + v4;
 printf("PARAM-L3-04: %d\n");
 v3 = 3;
 return printf("PARAM-L3-05: %d\n");
}


// Function: ret_basic_type at 0x4017b7
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x4017be
unsigned int call_ret_basic()
{
 return 42;
}


// Function: ret_pointer at 0x4017c4
int ret_pointer(unsigned int a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x4017cc
unsigned int call_ret_pointer()
{
 return 20;
}


// Function: ret_small_struct at 0x4017d2
unsigned int *ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 *(ptr) = a1;
 ptr[1] = a2;
 return ptr;
}


// Function: call_ret_small_struct at 0x4017e6
unsigned int call_ret_small_struct()
{
 return 7;
}


// Function: ret_large_struct at 0x4017ec
int ret_large_struct(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // ecx

 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = a1 + idx;
 idx += 1;
 } while (idx != 16);
 return ptr;
}


// Function: call_ret_large_struct at 0x401807
int call_ret_large_struct()
{
 unsigned int idx; // eax
 unsigned long v4; // [bp-0x1d4]
 char v0; // [bp-0x44]
 char v1; // [bp-0x8]

 idx = 100;
 do
 {
 (&v4)[idx] = idx;
 idx += 1;
 } while (idx != 116);
 return *((int *)&v1) + *((int *)&v0);
}


// Function: func_a at 0x401827
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x40182f
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: ret_func_ptr at 0x401836
int ret_func_ptr(unsigned int a0)
{
 if (a0)
 return (int)func_b;
 return (int)func_a;
}


// Function: call_ret_func_ptr at 0x401857
unsigned int call_ret_func_ptr()
{
 return 10;
}


// Function: ret_opaque_handle at 0x40185d
extern char ret_opaque_handle_handle2;

int ret_opaque_handle(unsigned int a0)
{
 if (a0)
 return (int)&ret_opaque_handle_handle2;
 return (int)"d";
}


// Function: call_ret_opaque at 0x40187e

int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


// Function: ret_complex_expr at 0x401891
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a0 <= a1)
 return a2 + 10;
 return a2 * 2;
}


// Function: call_ret_complex_expr at 0x4018a7
unsigned int call_ret_complex_expr()
{
 return 40;
}


// Function: ret_multi_branch at 0x4018ad
unsigned int ret_multi_branch(unsigned int a0)
{
 if (a0 < 3)
 return a0 * 10 + 10;
 return 4294967295;
}


// Function: call_ret_multi_branch at 0x4018c2
unsigned int call_ret_multi_branch()
{
 return 60;
}


// Function: ret_void at 0x4018c8
unsigned int * ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return ptr;
}


// Function: call_ret_void at 0x4018d6
unsigned int call_ret_void()
{
 return 21;
}


// Function: test_return_values at 0x4018dc

int test_return_values()
{
 unsigned int idx; // eax
 unsigned long v5; // [bp-0x1d4]
 unsigned int v0; // [bp-0x48]
 char v1; // [bp-0x44]
 char v2; // [bp-0x8]

 puts(&g_402394);
 v0 = 42;
 printf(&g_402255);
 v0 = 20;
 printf(&g_402271);
 v0 = 7;
 printf(&g_40228d);
 idx = 100;
 do
 {
 (&v5)[idx] = idx;
 idx += 1;
 } while (idx != 116);
 v0 = *((int *)&v2) + *((int *)&v1);
 printf(&g_4022a8);
 v0 = 10;
 printf(&g_4022c5);
 v0 = ret_opaque_handle_handle1;
 printf(&g_4022e1);
 v0 = 40;
 printf(&g_4022fe);
 v0 = 60;
 printf(&g_40231a);
 v0 = 21;
 return printf(&g_402336);
}


// Function: main at 0x4019dd
unsigned int main()
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


// Function: sub_401a03 at 0x401a03
void sub_401a03()
{
 __do_global_ctors_aux();
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */
int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 int (*v4)(void);
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = (struct_0 *)((char *)(&v2[1]) + 239);
 v4 = (int (*)(void))(*((int *)&ptr->padding_0[244]));
 if (*((int *)&ptr->padding_0[244]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[244];
 do
 {
 p = v6;
 v4();
 v4 = (int (*)(void))(*((int *)&p->padding_0[4]));
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401a52 at 0x401a52
void sub_401a52()
{
}



/* CRT stub function _fini removed by preprocessor */


