// Angr Decompilation of 4_gcc_O1_no_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 char field_0;
} struct_0;

extern struct_0 *g_403fe8;

// Define missing global variables
char g_402008[] = "Calling Conventions Test";
char g_402030[] = "VARARGS-L1-01: %d\n";
char g_402058[] = "NOARGS-L1-01: %d\n";
char g_402080[] = "MIXED-L1-01: %d\n";
char g_4020a8[] = "MIXED-L1-02: %d\n";
char g_4020d0[] = "STRUCT-L1-01: %d\n";
char g_402100[] = "STRUCT-L1-02: %d\n";
char g_402130[] = "Parameter Passing Test";
char g_4022bd[] = "Return Values Test";
char g_4022db[] = "BASIC-L1-01: %d\n";
char g_4022f7[] = "POINTER-L1-01: %d\n";
char g_402313[] = "SMALL_STRUCT-L1-01: %d\n";
char g_40232e[] = "LARGE_STRUCT-L1-01: %d\n";
char g_40234b[] = "FUNC_PTR-L1-01: %d\n";
char g_402367[] = "OPAQUE-L1-01: %d\n";
char g_402384[] = "COMPLEX-L1-01: %d\n";
char g_4023a0[] = "MULTI_BRANCH-L1-01: %d\n";
char g_4023bc[] = "VOID-L1-01: %d\n";
char handle2_0[] = "handle2";
unsigned int handle1_1 = 100;






/* CRT stub function _start removed by preprocessor */







/* CRT stub function deregister_tm_clones removed by preprocessor */







/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */







/* CRT stub function frame_dummy removed by preprocessor */



// Function: callback_func at 0x4011a9
unsigned int callback_func(unsigned int a0)
{
 return a0 * 2;
}


// Function: func_a at 0x4011b1
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x4011b9
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: cdecl_func at 0x4011c1
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_cdecl at 0x4011c9
unsigned long long call_cdecl()
{
 return 15;
}


// Function: stdcall_func at 0x4011d3
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: call_stdcall at 0x4011dd
unsigned long long call_stdcall()
{
 return 50;
}


// Function: fastcall_func at 0x4011e7
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: call_fastcall at 0x4011f1
unsigned long long call_fastcall()
{
 return 6;
}


// Function: call_thiscall at 0x4011fb
unsigned long long call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x401205
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x401214
unsigned long long call_arm_aapcs()
{
 return 15;
}


// Function: mips_func at 0x40121e
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x40122a
unsigned long long call_mips()
{
 return 100;
}


// Function: amd64_sysv_func at 0x401234
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x401246
unsigned long long call_amd64_sysv()
{
 return 21;
}


// Function: ms_x64_func at 0x401250
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x40125f
unsigned long long call_ms_x64()
{
 return 15;
}


// Function: vectorcall_func at 0x401269
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x401275
unsigned long long call_vectorcall()
{
 return 10;
}


// Function: mixed_conventions_test at 0x40127f
unsigned long long mixed_conventions_test()
{
 return 33;
}


// Function: varargs_func at 0x401289
unsigned long long varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
 unsigned int v10; // ecx
 unsigned int v11; // esi
 unsigned long v12; // rax
 char *ptr; // rdx
 unsigned int v0; // [bp-0x58]
 char *v1; // [bp-0x50]
 char *v2; // [bp-0x48]
 char v3; // [bp-0x38]
 unsigned long long v4; // [bp-0x30]
 unsigned long long v5; // [bp-0x28]
 unsigned long long v6; // [bp-0x20]
 unsigned long long v7; // [bp-0x18]
 unsigned long long v8; // [bp-0x10]
 unsigned long v9; // [bp+0x8]

 v4 = a1;
 v5 = a2;
 v6 = a3;
 v7 = a4;
 v8 = a5;
 v0 = 8;
 v1 = (char*)&v9;
 v2 = &v3;
 if (a0 <= 0)
 return 0;
 v10 = 0;
 v11 = 0;
 do
 {
 v12 = v0;
 if ((unsigned int)v12 > 47)
 {
 v1 = v1 + 2;
 }
 else
 {
 ptr = &(&v3)[v12 & 4294967295];
 v0 = (unsigned int)v12 + 8;
 }
 } while ((v11 += *(ptr), v10 += 1, a0 != v10));
 return v11;
}


// Function: func_no_args at 0x401335
unsigned long long func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x40133f
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x401359
int func_mixed_args(unsigned long a0, char *a1, unsigned long a2)
{
 unsigned long long len; // rax
 int v2; // xmm0

 len = 0;
 if (a1)
 len = strlen(a1);
 return (unsigned int)((len + (a0 & 4294967295) & 4294967295) + a2);
}


// Function: func_struct_byval at 0x4013a6
unsigned long long func_struct_byval()
{
 char *cur; // rdx
 unsigned long long v3; // rax
 unsigned long v0; // [bp+0x8]
 char v1; // [bp+0x88]

 cur = (char*)&v0;
 v3 = 0;
 do
 {
 v3 += *(cur);
 cur += 1;
 } while (cur != &v1);
 return v3;
}


// Function: func_struct_byptr at 0x4013c9
unsigned long long func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return a0[1] * *(a0);
}


// Function: test_calling_conventions at 0x4013df
long long test_calling_conventions()
{
 unsigned long long idx; // rax
 char *cur; // rax
 unsigned long long v24; // rdx
 unsigned long v25; // fs
 char v0; // [bp-0x120]
 char v1; // [bp-0x118]
 char v2; // [bp-0x108]
 char v3; // [bp-0xf8]
 char v4; // [bp-0xe8]
 char v5; // [bp-0xd8]
 char v6; // [bp-0xc8]
 char v7; // [bp-0xb8]
 char v8; // [bp-0xa8]
 char v9; // [bp-0x98]
 char v10; // [bp-0x88]
 char v11; // [bp-0x78]
 char v12; // [bp-0x68]
 char v13; // [bp-0x58]
 char v14; // [bp-0x48]
 char v15; // [bp-0x38]
 char v16; // [bp-0x28]
 char v17; // [bp-0x18]
 unsigned long v18; // [bp-0x10]

 puts(&g_402008);
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
 __printf_chk(1, &g_402030, varargs_func(5, 1, 2, 3, 4, 5) & 4294967295);
 __printf_chk(1, &g_402058, 42);
 __printf_chk(1, &g_402080, 36);
 __printf_chk(1, &g_4020a8, func_mixed_args(10, "test", 100) & 4294967295);
 idx = 1;
 do
 {
 *((unsigned long long *)&(&v0)[8 * idx]) = idx;
 idx += 1;
 } while (idx != 17);
 memcpy(&v9, &v1, 16);
 memcpy(&v10, &v2, 16);
 memcpy(&v11, &v3, 16);
 memcpy(&v12, &v4, 16);
 memcpy(&v13, &v5, 16);
 memcpy(&v14, &v6, 16);
 memcpy(&v15, &v7, 16);
 memcpy(&v16, &v8, 16);
 cur = &v9;
 v24 = 0;
 do
 {
 v24 += *(cur);
 cur += 1;
 } while (&v17 != cur);
 __printf_chk(1, &g_4020d0, v24);
 __printf_chk(1, &g_402100, 50);
 return v18 - *((long long *)(40 + v25));
}


// Function: param_by_value_int at 0x4016ba
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_by_value_int at 0x4016c2
unsigned long long call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x4016cc
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2;
 return 1;
}


// Function: call_by_value_ptr at 0x4016d8
unsigned long long call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x4016e2
unsigned long long param_array_decay()
{
 return 8;
}


// Function: call_array_decay at 0x4016ec
unsigned long long call_array_decay()
{
 return 8;
}


// Function: param_string at 0x4016f6
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: call_string_param at 0x401704
unsigned long long call_string_param()
{
 return 173;
}


// Function: param_ptr_array at 0x40170e
typedef struct struct_1 {
 char field_0;
} struct_1;

unsigned int param_ptr_array(struct_1 **a0, unsigned int a1)
{
 unsigned long long v1; // rdx
 struct_1 **i; // rax

 if (a1 <= 0)
 return 0;
 v1 = 0;
 i = a0;
 do
 {
 v1 += (*i)->field_0;
 i += 1;
 } while (i != &a0[1 + a1 + 1]);
 return v1;
}


// Function: call_ptr_array at 0x401741
int call_ptr_array()
{
 void* v0[3]; // [bp-0x28]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]

 v0[0] = "abc";
 v0[1] = "def";
 v0[2] = "ghi";
 return param_ptr_array(v0, 3);
}


// Function: param_varargs at 0x4017a3
unsigned long long param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
 unsigned int v10; // ecx
 unsigned int v11; // esi
 unsigned long v12; // rax
 char *ptr; // rdx
 unsigned int v0; // [bp-0x58]
 char *v1; // [bp-0x50]
 char *v2; // [bp-0x48]
 char v3; // [bp-0x38]
 unsigned long long v4; // [bp-0x30]
 unsigned long long v5; // [bp-0x28]
 unsigned long long v6; // [bp-0x20]
 unsigned long long v7; // [bp-0x18]
 unsigned long long v8; // [bp-0x10]
 unsigned long v9; // [bp+0x8]

 v4 = a1;
 v5 = a2;
 v6 = a3;
 v7 = a4;
 v8 = a5;
 v0 = 8;
 v1 = (char*)&v9;
 v2 = &v3;
 if (a0 <= 0)
 return 0;
 v10 = 0;
 v11 = 0;
 do
 {
 v12 = v0;
 if ((unsigned int)v12 > 47)
 {
 v1 = v1 + 2;
 }
 else
 {
 ptr = &(&v3)[v12 & 4294967295];
 v0 = (unsigned int)v12 + 8;
 }
 } while ((v11 += *(ptr), v10 += 1, a0 != v10));
 return v11;
}


// Function: call_varargs_param at 0x40184f
unsigned long long call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
 return param_varargs(4, 10, 20, 30, 40, a5);
}


// Function: param_func_ptr at 0x401880
int param_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x401897
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


// Function: param_double_ptr at 0x4018b5
typedef struct struct_2 {
 unsigned int field_0;
} struct_2;

unsigned long long param_double_ptr(struct_2 **ptr, unsigned int a1)
{
 if (!ptr)
 {
 return 4294967295;
 }
 else if (*(ptr))
 {
 (*ptr)->field_0 = a1;
 *(ptr) = ((void*)0);
 return 1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_double_ptr at 0x4018e1
char call_double_ptr()
{
 unsigned int v0; // [bp-0x1c]
 char *v1; // [bp-0x18]

 v0 = 10;
 v1 = &v0;
 param_double_ptr(&v1, 20);
 return (!v1) + (char)v0;
}


// Function: param_complex_cast at 0x401944
unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1)
{
 if (!a1)
 {
 return *(a0);
 }
 else if (a1 == 1)
 {
 return a0[1] + *(a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_complex_cast at 0x401960
unsigned long long call_complex_cast()
{
 return 305419896;
}


// Function: param_struct_byval at 0x40196a
int param_struct_byval()
{
 return;
}


// Function: call_struct_byval at 0x401977
long long call_struct_byval()
{
 unsigned long long idx; // rax
 unsigned long v0; // [bp-0x58]
 char v1; // [bp-0x1c]

 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v0 + 4 * idx)) = idx;
 idx += 1;
 } while (idx != 16);
 return (int)v0 + *((int *)&v1);
}


// Function: param_order_dep at 0x4019bd
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_order_dep at 0x4019c5
unsigned long long call_order_dep()
{
 return 4;
}


// Function: test_parameter_passing at 0x4019cf
int test_parameter_passing()
{
 unsigned int v3; // rdi
 unsigned int v4; // rsi
 unsigned int v5; // rdx
 unsigned int v6; // rcx
 unsigned int v7; // r8
 unsigned long long v8; // r9

 puts(&g_402130);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", call_by_value_ptr() & 4294967295);
 __printf_chk(1, "PARAM-L2-01: %d\n", 8);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 __printf_chk(1, "PARAM-L2-03: %d\n", call_ptr_array() & 4294967295);
 __printf_chk(1, "PARAM-L2-04: %d\n", call_varargs_param(v3, v4, v5, v6, v7, v8) & 4294967295);
 __printf_chk(1, "PARAM-L3-01: %d\n", call_func_ptr_param() & 4294967295);
 __printf_chk(1, "PARAM-L3-02: %d\n", call_double_ptr() & 4294967295);
 __printf_chk(1, "PARAM-L3-03: %d\n", call_complex_cast() & 4294967295);
 __printf_chk(1, "PARAM-L3-04: %d\n", call_struct_byval() & 4294967295);
 return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


// Function: ret_basic_type at 0x401b42
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x401b4a
unsigned long long call_ret_basic()
{
 return 42;
}


// Function: ret_pointer at 0x401b54
long long ret_pointer(unsigned long a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x401b5d
unsigned long long call_ret_pointer()
{
 return 20;
}


// Function: ret_small_struct at 0x401b67
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
 return a0 & 4294967295 | a1 * 0x100000000;
}


// Function: call_ret_small_struct at 0x401b75
unsigned long long call_ret_small_struct()
{
 return 7;
}


// Function: ret_large_struct at 0x401b7f
unsigned long long *ret_large_struct(unsigned long long *ptr, unsigned int a1)
{
 unsigned int *cur; // rdx
 unsigned int v0; // [bp-0x58]
 char v1; // [bp-0x48]
 char v2; // [bp-0x38]
 char v3; // [bp-0x28]
 char v4; // [bp-0x18]

 cur = &v0;
 do
 {
 *(cur) = a1;
 a1 += 1;
 cur += 1;
 } while (cur != &v4);
 *(ptr) = *((__int128 *)&v0);
 ptr[1] = *((__int128 *)&v1);
 ptr[2] = *((__int128 *)&v2);
 ptr[3] = *((__int128 *)&v3);
 return ptr;
}


// Function: call_ret_large_struct at 0x401bf0
long long call_ret_large_struct()
{
 char v0; // [bp-0x58]
 char v1; // [bp-0x1c]

 ret_large_struct(&v0, 100);
 return *((int *)&v1) + *((int *)&v0);
}


// Function: ret_func_ptr at 0x401c36
long long ret_func_ptr(unsigned int a0)
{
 if (a0)
 return func_b;
 return func_a;
}


// Function: call_ret_func_ptr at 0x401c4f
int call_ret_func_ptr()
{
 return func_b(5);
}


// Function: ret_opaque_handle at 0x401c5e
long long ret_opaque_handle(unsigned int a0)
{
 if (!a0)
 return "d";
 return &handle2_0;
}


// Function: call_ret_opaque at 0x401c77
unsigned int handle1_1;

int call_ret_opaque()
{
 return handle1_1;
}


// Function: ret_complex_expr at 0x401c82
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a0 <= a1 ? a2 + 10 : a2 * 2);
}


// Function: call_ret_complex_expr at 0x401c92
unsigned long long call_ret_complex_expr()
{
 return 40;
}


// Function: ret_multi_branch at 0x401c9c
unsigned long long ret_multi_branch(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 20;
 if (a0 != 1)
 {
 v1 = 30;
 if (a0 != 2)
 v1 = (-(a0 < 1) & 11) - 1;
 }
 return v1;
}


// Function: call_ret_multi_branch at 0x401cc0
unsigned long long call_ret_multi_branch()
{
 return 60;
}


// Function: ret_void at 0x401cca
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return a0 * 3;
}


// Function: call_ret_void at 0x401cd4
unsigned long long call_ret_void()
{
 return 21;
}


// Function: test_return_values at 0x401cde
int test_return_values()
{
 puts(&g_4022bd);
 __printf_chk(1, &g_4022db, 42);
 __printf_chk(1, &g_4022f7, call_ret_pointer() & 4294967295);
 __printf_chk(1, &g_402313, call_ret_small_struct() & 4294967295);
 __printf_chk(1, &g_40232e, call_ret_large_struct() & 4294967295);
 __printf_chk(1, &g_40234b, call_ret_func_ptr() & 4294967295);
 __printf_chk(1, &g_402367, handle1_1);
 __printf_chk(1, &g_402384, 40);
 __printf_chk(1, &g_4023a0, 60);
 return __printf_chk(1, &g_4023bc, 21);
}


// Function: main at 0x401e07
unsigned int main()
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


