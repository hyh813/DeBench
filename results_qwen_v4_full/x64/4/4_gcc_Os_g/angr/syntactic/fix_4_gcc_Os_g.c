// Angr Decompilation of 4_gcc_Os_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */

/* Helper macro for shift operations */
#define ShlNV(val, shift) ((val) << (shift))

/* Helper macro for addition operations */
#define AddV(a, b) ((a) + (b))

typedef struct struct_0 {
 unsigned int field_0;
} struct_0;

extern struct_0 *g_403fe8;




// Function: sub_401020 at 0x401020
extern unsigned long long g_403fa8;
extern unsigned long long g_403fb0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_403fa8;
 return;
}


// Function: sub_40102d at 0x40102d
void sub_40102d()
{
 sub_401030();
 return;
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_401020();
 return;
}


// Function: sub_40103f at 0x40103f
void sub_40103f()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_401020();
 return;
}


// Function: sub_40104f at 0x40104f
void sub_40104f()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_401020();
 return;
}


// Function: sub_40105f at 0x40105f
void sub_40105f()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
void sub_401060()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 3;
 sub_401020();
 return;
}


// Function: sub_40106f at 0x40106f
void sub_40106f()
{
 __cxa_finalize();
 return;
}


// Function: main at 0x4010c0
extern long long test_calling_conventions();
extern int test_parameter_passing();
extern int test_return_values();

unsigned int main()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi
 unsigned long long v3; // rdx
 unsigned long long v4; // rcx
 unsigned long long v5; // r8
 unsigned long long v6; // r9
 unsigned long long v7; // rax

 test_calling_conventions();
 test_parameter_passing(v1, v2, v3, v4, v5, v6, v7);
 test_return_values(v1, v2, v3, v4, v5, v6);
 return 0;
}


// Function: sub_4010de at 0x4010de
void sub_4010de(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401105 at 0x401105
void sub_401105()
{
 // Unsupported jumpkind Ijk_SigTRAP at address 4198661
}


// Function: deregister_tm_clones
void deregister_tm_clones()
{
 return;
}

// Function: sub_401106 at 0x401106
void sub_401106()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: register_tm_clones
void register_tm_clones()
{
 return;
}

// Function: sub_401139 at 0x401139
void sub_401139()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */







// Function: sub_4011b5 at 0x4011b5
void sub_4011b5()
{
}


// Function: sub_4011b9 at 0x4011b9
void sub_4011b9()
{
 frame_dummy();
 return;
}


// Function: frame_dummy
void frame_dummy()
{
 return;
}



// Function: func_a at 0x4011c9
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x4011d1
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: callback_func at 0x4011d9
unsigned int callback_func(unsigned int a0)
{
 return a0 * 2;
}


// Function: cdecl_func at 0x4011e1
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_cdecl at 0x4011e9
unsigned long long call_cdecl()
{
 return 15;
}


// Function: stdcall_func at 0x4011f3
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: call_stdcall at 0x4011fd
unsigned long long call_stdcall()
{
 return 50;
}


// Function: fastcall_func at 0x401207
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: call_fastcall at 0x401211
unsigned long long call_fastcall()
{
 return 6;
}


// Function: call_thiscall at 0x40121b
unsigned long long call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x401225
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x401234
unsigned long long call_arm_aapcs()
{
 return 15;
}


// Function: mips_func at 0x40123e
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x40124a
unsigned long long call_mips()
{
 return 100;
}


// Function: amd64_sysv_func at 0x401254
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x401266
unsigned long long call_amd64_sysv()
{
 return 21;
}


// Function: ms_x64_func at 0x401270
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x40127f
unsigned long long call_ms_x64()
{
 return 15;
}


// Function: vectorcall_func at 0x401289
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x401295
unsigned long long call_vectorcall()
{
 return 10;
}


// Function: mixed_conventions_test at 0x40129f
unsigned long long mixed_conventions_test()
{
 return 33;
}


// Function: varargs_func at 0x4012a9
long long varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
 unsigned long long v10; // rdx
 unsigned int i; // ecx
 unsigned int v12; // r8d
 char *v13; // rax
 char *ptr; // rax
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

 v5 = a2;
 v10 = 8;
 v6 = a3;
 i = 0;
 v7 = a4;
 v12 = 0;
 v8 = a5;
 v4 = a1;
 v0 = 8;
 v2 = &v3;
 v1 = &v9;
 for (v13 = &v9; i < a0; i += 1)
 {
 ptr = v13;
 v13 += 2;
 if ((unsigned int)v10 <= 47)
 {
 v10 = (unsigned int)v10 + 8;
 ptr = &(&v3)[v10 & 4294967295];
 }
 v12 += *(ptr);
 }
 return v12;
}


// Function: func_no_args at 0x401345
unsigned long long func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x40134f
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x401369
int func_mixed_args(unsigned long a0, char *a1, unsigned long a2)
{
 unsigned long long len; // rax
 int v2; // xmm0
 int v3; // xmm1

 len = 0;
 if (a1)
 len = strlen(a1);
 return (unsigned int)(AddV(AddV(v2 & 0xffffffffffffffff0000000000000000 | len + (a0 & 4294967295) & 4294967295, v2 & 18446744073709551615) & 4294967295, v3 & 0xffffffffffffffff0000000000000000 | a2));
}


// Function: func_struct_byval at 0x4013ad
unsigned long long func_struct_byval()
{
 unsigned long long idx; // rdx
 unsigned long long v2; // rax
 unsigned long v0; // [bp+0x8]

 idx = 0;
 v2 = 0;
 do
 {
 v2 += (&v0)[idx];
 idx += 1;
 } while (idx != 16);
 return v2;
}


// Function: func_struct_byptr at 0x4013c4
unsigned long long func_struct_byptr(unsigned int *ptr)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (ptr)
 v1 = ptr[1] * *(ptr);
 return v1;
}


// Function: test_calling_conventions at 0x4013d7
extern char g_402004;
extern char g_4020c5;
extern char g_4020ed;
extern char g_40210f;
extern char g_40213b;
extern char g_402163;
extern char g_40218f;

/* Define missing global variables */
char g_402004 = 0;
char g_4020c5 = 0;
char g_4020ed = 0;
char g_40210f = 0;
char g_40213b = 0;
char g_402163 = 0;
char g_40218f = 0;
char g_4021c8 = 0;
char g_4022a4 = 0;
char g_4022c2 = 0;
char g_4022de = 0;
char g_4022fa = 0;
char g_402315 = 0;
char g_402332 = 0;
char g_40234e = 0;
char g_40236b = 0;
char g_402387 = 0;
char g_4023a3 = 0;
unsigned int handle1_1 = 0;
char handle2_0 = 0;

long long test_calling_conventions()
{
 unsigned long long index; // rax
 char *j; // rsi
 char *cur; // rdi
 unsigned long long v8; // rcx
 unsigned long long idx; // rax
 unsigned long long v10; // rdx
 unsigned long v11; // [bp-0x118]
 unsigned long v0; // [bp-0x110]
 char v1; // [bp-0x90]

 puts(&g_402004);
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
 __printf_chk(1, &g_4020c5, varargs_func(5, 1, 2, 3, 4, 5) & 4294967295);
 __printf_chk(1, &g_4020ed, 42);
 __printf_chk(1, &g_40210f, 36);
 __printf_chk(1, &g_40213b, func_mixed_args(10, "test", 100) & 4294967295);
 index = 1;
 do
 {
 (&v11)[index] = index;
 index += 1;
 j = (char*)&v0;
 } while (index != 17);
 cur = &v1;
 v8 = 32;
 idx = 0;
 for (v10 = 0; v8; j += 1)
 {
 v8 -= 1;
 *(cur) = *(j);
 cur += 1;
 }
 do
 {
 v10 += *((long long *)&(&v1)[8 * idx]);
 idx += 1;
 } while (idx != 16);
 __printf_chk(1, &g_402163, v10);
 return __printf_chk(1, &g_40218f, 50);
}


// Function: param_by_value_int at 0x401619
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_by_value_int at 0x401621
unsigned long long call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x40162b
double param_by_value_ptr(long long *ptr)
{
 *ptr = ShlNV(*ptr, 1);
 return (unsigned long long)(ShlNV(*ptr, 1));
}


// Function: call_by_value_ptr at 0x401642
unsigned long long call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x40164c
unsigned long long param_array_decay()
{
 return 8;
}


// Function: call_array_decay at 0x401656
unsigned long long call_array_decay()
{
 return 8;
}


// Function: param_string at 0x401660
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: call_string_param at 0x40166e
unsigned long long call_string_param()
{
 return 173;
}


// Function: param_ptr_array at 0x401678
int param_ptr_array(unsigned long a0, unsigned int a1)
{
 unsigned long long v1; // rax
 unsigned long long v2; // r8
 unsigned long long v3; // rax
 unsigned long long v4; // rax

 v1 = 0;
 v2 = 0;
 while (1)
 {
 v3 = v1;
 if (a1 <= (unsigned int)v3)
 break;
 v4 = v3 + 1;
 v2 += *((char *)*((long long *)(a0 + v3 * 8)));
 v1 = v4;
 }
 return v2;
}


// Function: call_ptr_array at 0x401698
int call_ptr_array()
{
 unsigned long long v0; // [bp-0x28]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]

 v0 = "abc";
 v1 = "def";
 v2 = "ghi";
 return param_ptr_array(&v0, 3);
}


// Function: param_varargs at 0x4016f8
long long param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
 unsigned long long v10; // rdx
 unsigned int i; // ecx
 unsigned int v12; // r8d
 char *v13; // rax
 char *ptr; // rax
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

 v5 = a2;
 v10 = 8;
 v6 = a3;
 i = 0;
 v7 = a4;
 v12 = 0;
 v8 = a5;
 v4 = a1;
 v0 = 8;
 v2 = &v3;
 v1 = &v9;
 for (v13 = &v9; i < a0; i += 1)
 {
 ptr = v13;
 v13 += 2;
 if ((unsigned int)v10 <= 47)
 {
 v10 = (unsigned int)v10 + 8;
 ptr = &(&v3)[v10 & 4294967295];
 }
 v12 += *(ptr);
 }
 return v12;
}


// Function: call_varargs_param at 0x401794
unsigned long long call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
 return param_varargs(4, 10, 20, 30, 40, a5);
}


// Function: param_func_ptr at 0x4017b9
int param_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x4017cb
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


// Function: param_double_ptr at 0x4017dd
unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (ptr && *(ptr))
 {
 (*ptr)->field_0 = a1;
 v1 = 1;
 *(ptr) = 0;
 }
 return v1;
}


// Function: call_double_ptr at 0x401800
unsigned long long call_double_ptr()
{
 return 21;
}


// Function: param_complex_cast at 0x40180a
unsigned long long param_complex_cast(unsigned int *ptr, unsigned int a1)
{
 unsigned long long v1; // rax

 if (!a1)
 return *(ptr);
 v1 = 4294967295;
 if (a1 == 1)
 v1 = ptr[1] + *(ptr);
 return v1;
}


// Function: call_complex_cast at 0x401822
unsigned long long call_complex_cast()
{
 return 305419896;
}


// Function: param_struct_byval at 0x40182c
int param_struct_byval()
{
 return;
}


// Function: call_struct_byval at 0x401839
long long call_struct_byval()
{
 unsigned long long idx; // rax
 unsigned long v0; // [bp-0x50]
 unsigned int v1; // [bp-0x14]

 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v0 + 4 * idx)) = idx;
 idx += 1;
 } while (idx != 16);
 return v1 + (int)v0;
}


// Function: param_order_dep at 0x401880
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_order_dep at 0x401888
unsigned long long call_order_dep()
{
 return 4;
}


// Function: test_parameter_passing at 0x401892
extern char g_4021c8;

int test_parameter_passing()
{
 unsigned long long v2; // rax
 unsigned int v4; // rdi
 unsigned int v5; // rsi
 unsigned int v6; // rdx
 unsigned int v7; // rcx
 unsigned int v8; // r8
 unsigned long long v9; // r9
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 puts(&g_4021c8);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 8);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 __printf_chk(1, "PARAM-L2-03: %d\n", call_ptr_array() & 4294967295);
 __printf_chk(1, "PARAM-L2-04: %d\n", call_varargs_param(v4, v5, v6, v7, v8, v9) & 4294967295);
 __printf_chk(1, "PARAM-L3-01: %d\n", call_func_ptr_param() & 4294967295);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 __printf_chk(1, "PARAM-L3-04: %d\n", call_struct_byval() & 4294967295);
 return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


// Function: ret_basic_type at 0x4019bc
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x4019c4
unsigned long long call_ret_basic()
{
 return 42;
}


// Function: ret_pointer at 0x4019ce
long long ret_pointer(unsigned long a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x4019d7
unsigned long long call_ret_pointer()
{
 return 20;
}


// Function: ret_small_struct at 0x4019e1
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
 return a0 & 4294967295 | a1 * 0x100000000;
}


// Function: call_ret_small_struct at 0x4019ef
unsigned long long call_ret_small_struct()
{
 return 7;
}


// Function: ret_large_struct at 0x4019f9
void ret_large_struct(unsigned int *a0, unsigned int a1)
{
 unsigned int *cur; // rax
 unsigned long long iter; // rcx
 char *j; // rsi
 unsigned long v0; // [bp-0x50]

 cur = a0;
 iter = 0;
 do
 {
 j = (char*)&v0;
 *((unsigned int *)((char *)&v0 + 4 * iter)) = a1 + (unsigned int)iter;
 iter += 1;
 } while (iter != 16);
 for (; iter; j += 1)
 {
 iter -= 1;
 *((char *)cur) = *(j);
 cur += 1;
 }
 return;
}


// Function: call_ret_large_struct at 0x401a49
long long call_ret_large_struct()
{
 unsigned int v0[15]; // [bp-0x50]
 unsigned int v1; // [bp-0x14]

 ret_large_struct(&v0, 100);
 return v1 + v0[0];
}


// Function: ret_func_ptr at 0x401a92
long long ret_func_ptr(unsigned int a0)
{
 if (a0)
 return func_b;
 return func_a;
}


// Function: call_ret_func_ptr at 0x401aab
unsigned long long call_ret_func_ptr()
{
 return 10;
}


// Function: ret_opaque_handle at 0x401ab5
extern char handle2_0;

long long ret_opaque_handle(unsigned int a0)
{
 if (!a0)
 return "d";
 return &handle2_0;
}


// Function: call_ret_opaque at 0x401ace
extern unsigned int handle1_1;

int call_ret_opaque()
{
 return handle1_1;
}


// Function: ret_complex_expr at 0x401ad9
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned long v1; // rax

 v1 = a2 + 10;
 if (a0 > a1)
 v1 = a2 * 2;
 return v1;
}


// Function: call_ret_complex_expr at 0x401ae8
unsigned long long call_ret_complex_expr()
{
 return 40;
}


// Function: ret_multi_branch at 0x401af2
unsigned long long ret_multi_branch(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a0 <= 2)
 v1 = (a0 + 1) * 10;
 return v1;
}


// Function: call_ret_multi_branch at 0x401b04
unsigned long long call_ret_multi_branch()
{
 return 60;
}


// Function: ret_void at 0x401b0e
void ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return;
}


// Function: call_ret_void at 0x401b18
unsigned long long call_ret_void()
{
 return 21;
}


// Function: test_return_values at 0x401b22
extern char g_4022a4;
extern char g_4022c2;
extern char g_4022de;
extern char g_4022fa;
extern char g_402315;
extern char g_402332;
extern char g_40234e;
extern char g_40236b;
extern char g_402387;
extern char g_4023a3;
extern unsigned int handle1_1;

int test_return_values()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 puts(&g_4022a4);
 __printf_chk(1, &g_4022c2, 42);
 __printf_chk(1, &g_4022de, 20);
 __printf_chk(1, &g_4022fa, 7);
 __printf_chk(1, &g_402315, call_ret_large_struct() & 4294967295);
 __printf_chk(1, &g_402332, 10);
 __printf_chk(1, &g_40234e, handle1_1);
 __printf_chk(1, &g_40236b, 40);
 __printf_chk(1, &g_402387, 60);
 return __printf_chk(1, &g_4023a3, 21);
}



/* CRT stub function _fini removed by preprocessor */


