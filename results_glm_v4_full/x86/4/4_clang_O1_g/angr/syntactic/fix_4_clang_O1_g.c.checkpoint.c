

struct struct_0 {
    unsigned int padding_0[100];
    unsigned int field_2ee7;
};

extern void (*g_403ff4)(void);
unsigned int vvar_1;

/* Define global format string variables */
char g_4020a8[] = "VARARGS-L1-01: %d\n";
char g_4020d0[] = "FUNC-NONE-01: %d\n";
char g_4020f2[] = "FUNC-MANY-01: %d\n";
char g_402119[] = "FUNC-MIXED-01: %d\n";
char g_402141[] = "STRUCT-BYVAL-01: %d\n";
char g_40216d[] = "STRUCT-BYPTR-01: %d\n";
char g_402352[] = "=== Calling Conventions Test ===";
char g_402373[] = "=== Parameter Passing Test ===";
char g_402255[] = "RET-BASIC-01: %d\n";
char g_402271[] = "RET-PTR-01: %d\n";
char g_40228d[] = "RET-SMALL-01: %d\n";
char g_4022a8[] = "RET-LARGE-01: %d\n";
char g_4022c5[] = "RET-FUNC-PTR: %d\n";
char g_4022e1[] = "RET-OPAQUE-01: %d\n";
char g_4022fe[] = "RET-COMPLEX-01: %d\n";
char g_40231a[] = "RET-MULTI-01: %d\n";
char g_402336[] = "RET-VOID-01: %d\n";
char g_402394[] = "=== Return Values Test ===";
unsigned int ret_opaque_handle_handle1 = 0;


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Function declarations */
void frame_dummy(void);
unsigned int *deregister_tm_clones(void);
unsigned int __do_global_ctors_aux(void);
unsigned int register_tm_clones(void);
int cdecl_func(unsigned int a0, unsigned int a1);
unsigned int call_cdecl(void);
int stdcall_func(unsigned int a0, unsigned int a1);
unsigned int call_stdcall(void);
int fastcall_func(unsigned int a0);
unsigned int call_fastcall(void);
unsigned int __x86_get_pc_thunk_dx(void);
int __x86_get_pc_thunk_di(int a0);
unsigned int *__do_global_dtors_aux(void);
unsigned int call_thiscall(void);
void sub_401080(unsigned int a0);
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned int call_arm_aapcs(void);
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int call_mips(void);
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
unsigned int call_amd64_sysv(void);
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned int call_ms_x64(void);
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int call_vectorcall(void);
unsigned int mixed_conventions_test(void);
unsigned int varargs_func(unsigned int a0, unsigned int a1);
unsigned int func_no_args(void);
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7);
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned int func_struct_byval(void);
unsigned int func_struct_byptr(unsigned int *a0);
int test_calling_conventions(void);
unsigned int param_by_value_int(void);
unsigned int call_by_value_int(void);
unsigned int param_by_value_ptr(void);
unsigned int call_by_value_ptr(void);
unsigned int param_array_decay(void);
unsigned int call_array_decay(void);
int param_string(void);
unsigned int call_string_param(void);
unsigned int param_ptr_array(unsigned int a0, unsigned int a1);
unsigned int call_ptr_array(void);
unsigned int param_varargs(unsigned int a0, unsigned int a1);
unsigned int call_varargs_param(void);
unsigned int param_func_ptr(unsigned int a0);
unsigned int call_func_ptr_param(void);
unsigned int param_double_ptr(unsigned int a0);
unsigned int call_double_ptr(void);
unsigned int param_complex_cast(unsigned int a0, unsigned int a1);
unsigned int call_complex_cast(void);
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15);
int call_struct_byval(void);
int param_order_dep(void);
unsigned int call_order_dep(void);
int test_parameter_passing(void);
unsigned int ret_basic_type(unsigned int a0);
unsigned int call_ret_basic(void);
int ret_pointer(unsigned int a0);
unsigned int call_ret_pointer(void);
unsigned int *ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2);
unsigned int call_ret_small_struct(void);
int ret_large_struct(unsigned int ptr, unsigned int a1);
int call_ret_large_struct(void);
int func_a(unsigned int a0);
unsigned int func_b(unsigned int a0);
unsigned int (*ret_func_ptr(unsigned int a0))(unsigned int);
unsigned int call_ret_func_ptr(void);
int ret_opaque_handle(unsigned int a0);
int call_ret_opaque(void);
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned int call_ret_complex_expr(void);
unsigned int ret_multi_branch(unsigned int a0);
unsigned int call_ret_multi_branch(void);
unsigned int *ret_void(unsigned int a0, unsigned int *ptr);
unsigned int call_ret_void(void);
int test_return_values(void);
int main(void);

int _init()
{
 if (g_403ff4)
 ((void (*)())g_403ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 return 0;
}


// Function: sub_401201 at 0x401201
void sub_401201(unsigned int a0, unsigned int a1)
{
 cdecl_func(a0, a1);
 return;
}


// Function: sub_401086 at 0x401086
void sub_401086()
{
}

// Function: sub_401080 at 0x401080
void sub_401080(unsigned int a0)
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010bb at 0x4010bb
void sub_4010bb()
{
}


// Function: sub_4010bc at 0x4010bc
void sub_4010bc()
{
 return;
}





// Function: sub_4010c4 at 0x4010c4
void sub_4010c4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401103 at 0x401103
void sub_401103()
{
}


// Function: sub_401109 at 0x401109
void sub_401109()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int register_tm_clones()
{
 return 0;
}

/* Add missing CRT function stubs */
void frame_dummy(void)
{
}

unsigned int *deregister_tm_clones(void)
{
 return 0;
}


// Function: sub_401157 at 0x401157
void sub_401157()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int *__do_global_dtors_aux(void)
{
 deregister_tm_clones();
 return 0;
}


// Function: sub_4011ea at 0x4011ea
void sub_4011ea()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x4011f9
unsigned int __x86_get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86_get_pc_thunk_di at 0x4011fd
int __x86_get_pc_thunk_di(int a0)
{
 return a0;
}





// Function: cdecl_func at 0x401210
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: sub_401219 at 0x401219
void sub_401219()
{
 call_cdecl();
 return;
}


// Function: call_cdecl at 0x401220
unsigned int call_cdecl()
{
 return 15;
}


// Function: sub_401226 at 0x401226
void sub_401226(unsigned int a0, unsigned int a1)
{
 stdcall_func(a0, a1);
 return;
}


// Function: stdcall_func at 0x401230
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: sub_40123c at 0x40123c
void sub_40123c()
{
 call_stdcall();
 return;
}


// Function: call_stdcall at 0x401240
unsigned int call_stdcall()
{
 return 50;
}


// Function: sub_401246 at 0x401246
void sub_401246(unsigned int a0)
{
 fastcall_func(a0);
 return;
}


// Function: fastcall_func at 0x401250
int fastcall_func(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // edx

 return v0 + v1 + a0;
}


// Function: sub_40125a at 0x40125a
void sub_40125a()
{
 call_fastcall();
 return;
}


// Function: call_fastcall at 0x401260
unsigned int call_fastcall()
{
 return 6;
}


// Function: sub_401266 at 0x401266
void sub_401266()
{
 call_thiscall();
 return;
}


// Function: call_thiscall at 0x401270
unsigned int call_thiscall()
{
 return 15;
}


// Function: sub_401276 at 0x401276
void sub_401276(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 arm_aapcs_func(a0, a1, a2, a3, a4);
 return;
}


// Function: arm_aapcs_func at 0x401280
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: sub_401295 at 0x401295
void sub_401295()
{
 call_arm_aapcs();
 return;
}


// Function: call_arm_aapcs at 0x4012a0
unsigned int call_arm_aapcs()
{
 return 15;
}


// Function: sub_4012a6 at 0x4012a6
void sub_4012a6(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 mips_func(a0, a1, a2, a3);
 return;
}


// Function: mips_func at 0x4012b0
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: sub_4012c1 at 0x4012c1
void sub_4012c1()
{
 call_mips();
 return;
}


// Function: call_mips at 0x4012d0
unsigned int call_mips()
{
 return 100;
}


// Function: sub_4012d6 at 0x4012d6
void sub_4012d6(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 amd64_sysv_func(a0, a1, a2, a3, a4, a5);
 return;
}


// Function: amd64_sysv_func at 0x4012e0
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: sub_4012f9 at 0x4012f9
void sub_4012f9()
{
 call_amd64_sysv();
 return;
}


// Function: call_amd64_sysv at 0x401300
unsigned int call_amd64_sysv()
{
 return 21;
}


// Function: sub_401306 at 0x401306
void sub_401306(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 ms_x64_func(a0, a1, a2, a3, a4);
 return;
}


// Function: ms_x64_func at 0x401310
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: sub_401325 at 0x401325
void sub_401325()
{
 call_ms_x64();
 return;
}


// Function: call_ms_x64 at 0x401330
unsigned int call_ms_x64()
{
 return 15;
}


// Function: sub_401336 at 0x401336
void sub_401336(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 vectorcall_func(a0, a1, a2, a3);
 return;
}


// Function: vectorcall_func at 0x401340
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: sub_401351 at 0x401351
void sub_401351()
{
 call_vectorcall();
 return;
}


// Function: call_vectorcall at 0x401360
unsigned int call_vectorcall()
{
 return 10;
}


// Function: sub_401366 at 0x401366
void sub_401366()
{
 mixed_conventions_test();
 return;
}


// Function: mixed_conventions_test at 0x401370
unsigned int mixed_conventions_test()
{
 return 33;
}


// Function: sub_401376 at 0x401376
void sub_401376(unsigned int a0)
{
 varargs_func(a0, 0);
 return;
}


// Function: varargs_func at 0x401380
unsigned int varargs_func(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // eax
 unsigned int i; // ecx
 unsigned int v3; // eax
 unsigned int *ptr; // edx
 unsigned int *v0; // [bp-0x8], Other Possible Types: unsigned int

 i = a0;
 v0 = &vvar_1;
 v3 = 0;
 if (i > 0)
 {
 do
 {
 ptr = v0;
 v0 = ptr + 1;
 v3 += *(ptr);
 i -= 1;
 } while (i != 1);
 }
 return v3;
}


// Function: sub_4013b5 at 0x4013b5
void sub_4013b5()
{
 func_no_args();
 return;
}


// Function: func_no_args at 0x4013c0
unsigned int func_no_args()
{
 return 42;
}


// Function: sub_4013c6 at 0x4013c6
void sub_4013c6(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 func_many_args(a0, a1, a2, a3, a4, a5, a6, a7);
 return;
}


// Function: func_many_args at 0x4013d0
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: sub_4013f1 at 0x4013f1
int sub_4013f1()
{
 func_mixed_args(0, NULL, 0, 0, 0);
 return 0;
}


// Function: func_mixed_args at 0x401400
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int len;
 unsigned int v0;
 unsigned int v1;

 if (a1)
 {
 len = strlen(a1);
 }
 else
 {
 len = 0;
 }
 v0 = len + a0;
 v1 = (a0 + a2 + a3 + a4);
 return (int)v1;
}


// Function: sub_401482 at 0x401482
void sub_401482()
{
 func_struct_byval();
 return;
}


// Function: func_struct_byval at 0x401490
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


// Function: sub_4014b1 at 0x4014b1
void sub_4014b1(unsigned int a0)
{
 func_struct_byptr((unsigned int*)a0);
 return;
}


// Function: func_struct_byptr at 0x4014c0
unsigned int func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0) * a0[1];
}


// Function: sub_4014d5 at 0x4014d5
int sub_4014d5()
{
 test_calling_conventions();
 return 0;
}


// Function: test_calling_conventions at 0x4014e0
int test_calling_conventions()
{
 unsigned int idx; // eax
 unsigned int index; // ecx
 unsigned int v7; // eax
 unsigned int v0; // [bp-0xa4]
 unsigned int v1; // [bp-0xa0]
 unsigned int v2; // [bp-0x98]
 unsigned int v8; // [bp-0x8c]
 unsigned int v9; // [bp-0x88]
 char v3; // [bp-0x84]

 puts(g_402352);
 v2 = 15;
 printf("CALL-L1-01: %d\n", v2);
 v2 = 50;
 printf("CALL-L1-02: %d\n", v2);
 v2 = 6;
 printf("CALL-L1-03: %d\n", v2);
 v2 = 15;
 printf("CALL-L1-04: %d\n", v2);
 v2 = 15;
 printf("CALL-L1-05: %d\n", v2);
 v2 = 100;
 printf("CALL-L1-06: %d\n", v2);
 v2 = 21;
 printf("CALL-L1-07: %d\n", v2);
 v2 = 15;
 printf("CALL-L1-08: %d\n", v2);
 v2 = 10;
 printf("CALL-L1-09: %d\n", v2);
 v2 = 33;
 printf("CALL-L1-10: %d\n", v2);
 v2 = 5;
 v1 = 3;
 v0 = 2;
 v2 = varargs_func(5, 1);
 printf(g_4020a8, v2);
 v2 = 42;
 printf(g_4020d0, v2);
 v2 = 36;
 printf(g_4020f2, v2);
 v2 = 117;
 printf(g_402119, v2);
 idx = 1;
 do
 {
 (&v9)[2 * idx] = 0;
 (&v8)[2 * idx] = idx;
 idx += 1;
 } while (idx != 17);
 index = 0;
 v7 = 0;
 do
 {
 v7 += *((int *)&(&v3)[8 * index]);
 index += 1;
 } while (index != 16);
 v2 = v7;
 printf(g_402141, v7);
 v2 = 50;
 return printf(g_40216d, v2);
}


// Function: sub_401669 at 0x401669
void sub_401669(unsigned int a0)
{
 param_by_value_int();
 return;
}


// Function: param_by_value_int at 0x401670
unsigned int param_by_value_int(void)
{
 return 15;
}


// Function: sub_401677 at 0x401677
void sub_401677()
{
 call_by_value_int();
 return;
}


// Function: call_by_value_int at 0x401680
unsigned int call_by_value_int()
{
 return 15;
}


// Function: sub_401686 at 0x401686
void sub_401686(unsigned int a0)
{
 param_by_value_ptr();
 return;
}


// Function: param_by_value_ptr at 0x401690
unsigned int param_by_value_ptr(void)
{
 return 11;
}


// Function: sub_40169c at 0x40169c
void sub_40169c()
{
 call_by_value_ptr();
 return;
}


// Function: call_by_value_ptr at 0x4016a0
unsigned int call_by_value_ptr()
{
 return 11;
}


// Function: sub_4016a6 at 0x4016a6
void sub_4016a6()
{
 param_array_decay();
 return;
}


// Function: param_array_decay at 0x4016b0
unsigned int param_array_decay()
{
 return 4;
}


// Function: sub_4016b6 at 0x4016b6
void sub_4016b6()
{
 call_array_decay();
 return;
}


// Function: call_array_decay at 0x4016c0
unsigned int call_array_decay()
{
 return 4;
}


// Function: sub_4016c6 at 0x4016c6
void sub_4016c6(unsigned int a0)
{
 param_string();
 return;
}


// Function: param_string at 0x4016d0
int param_string(void)
{
 return 173;
}


// Function: sub_4016de at 0x4016de
void sub_4016de()
{
 call_string_param();
 return;
}


// Function: call_string_param at 0x4016e0
unsigned int call_string_param()
{
 return 173;
}


// Function: sub_4016e6 at 0x4016e6
void sub_4016e6(unsigned int a0, unsigned int a1)
{
 param_ptr_array(a0, a1);
 return;
}


// Function: param_ptr_array at 0x4016f0
unsigned int param_ptr_array(unsigned int a0, unsigned int a1)
{
 return 300;
}


// Function: sub_401726 at 0x401726
void sub_401726()
{
 call_ptr_array();
 return;
}


// Function: call_ptr_array at 0x401730
unsigned int call_ptr_array()
{
 return 300;
}


// Function: sub_401736 at 0x401736
void sub_401736(unsigned int a0)
{
 param_varargs(a0, 0);
 return;
}


// Function: param_varargs at 0x401740
unsigned int param_varargs(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // eax
 unsigned int i; // ecx
 unsigned int v3; // eax
 unsigned int *ptr; // edx
 unsigned int *v0; // [bp-0x8], Other Possible Types: unsigned int

 i = a0;
 v0 = &vvar_1;
 v3 = 0;
 if (i > 0)
 {
 do
 {
 ptr = v0;
 v0 = ptr + 1;
 v3 += *(ptr);
 i -= 1;
 } while (i != 1);
 }
 return v3;
}


// Function: sub_401775 at 0x401775
int sub_401775()
{
 call_varargs_param();
 return 0;
}


// Function: call_varargs_param at 0x401780
unsigned int call_varargs_param()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]

 v2 = 40;
 v1 = 30;
 v0 = 20;
 return param_varargs(4, 10);
}


// Function: sub_4017a7 at 0x4017a7
int sub_4017a7()
{
 param_func_ptr(0);
 return 0;
}


// Function: param_func_ptr at 0x4017b0
unsigned int param_func_ptr(unsigned int a0)
{
 return 20;
}


// Function: sub_4017d3 at 0x4017d3
void sub_4017d3()
{
 call_func_ptr_param();
 return;
}


// Function: call_func_ptr_param at 0x4017e0
unsigned int call_func_ptr_param()
{
 return 20;
}


// Function: sub_4017e6 at 0x4017e6
void sub_4017e6(unsigned int a0)
{
 param_double_ptr(a0);
 return;
}


// Function: param_double_ptr at 0x4017f0
unsigned int param_double_ptr(unsigned int a0)
{
 return 21;
}


// Function: sub_401815 at 0x401815
void sub_401815()
{
 call_double_ptr();
 return;
}


// Function: call_double_ptr at 0x401820
unsigned int call_double_ptr()
{
 return 21;
}


// Function: sub_401826 at 0x401826
void sub_401826(unsigned int a0, unsigned int a1)
{
 param_complex_cast(a0, a1);
 return;
}


// Function: param_complex_cast at 0x401830
unsigned int param_complex_cast(unsigned int a0, unsigned int a1)
{
 return 305419896;
}


// Function: sub_40184f at 0x40184f
void sub_40184f()
{
 call_complex_cast();
 return;
}


// Function: call_complex_cast at 0x401850
unsigned int call_complex_cast()
{
 return 305419896;
}


// Function: sub_401856 at 0x401856
void sub_401856(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 param_struct_byval(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
 return;
;
}


// Function: param_struct_byval at 0x401860
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a15 + a0;
}


// Function: sub_401869 at 0x401869
void sub_401869()
{
 call_struct_byval();
 return;
}


// Function: call_struct_byval at 0x401870
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


// Function: sub_401896 at 0x401896
void sub_401896(unsigned int a0, unsigned int a1)
{
 param_order_dep();
 return;
}


// Function: param_order_dep at 0x4018a0
int param_order_dep(void)
{
 return 3;
}


// Function: sub_4018a9 at 0x4018a9
void sub_4018a9()
{
 call_order_dep();
 return;
}


// Function: call_order_dep at 0x4018b0
unsigned int call_order_dep()
{
 return 3;
}


// Function: sub_4018b6 at 0x4018b6
int sub_4018b6()
{
 return test_parameter_passing();
}


// Function: test_parameter_passing at 0x4018c0
int test_parameter_passing()
{
 unsigned int idx; // eax
 unsigned int v0; // [bp-0x64]
 unsigned int v1; // [bp-0x60]
 unsigned int v2; // [bp-0x58]
 unsigned long v3; // [bp-0x44]
 char v4; // [bp-0x8]

 puts(g_402373);
 v2 = 15;
 printf("PARAM-L1-01: %d\n", v2);
 v2 = 11;
 printf("PARAM-L1-02: %d\n", v2);
 v2 = 4;
 printf("PARAM-L2-01: %d\n", v2);
 v2 = 173;
 printf("PARAM-L2-02: %d\n", v2);
 v2 = 300;
 printf("PARAM-L2-03: %d\n", v2);
 v1 = 30;
 v0 = 20;
 v2 = param_varargs(4, 10);
 printf("PARAM-L2-04: %d\n", v2);
 v2 = 20;
 printf("PARAM-L3-01: %d\n", v2);
 v2 = 21;
 printf("PARAM-L3-02: %d\n", v2);
 v2 = 305419896;
 printf("PARAM-L3-03: %d\n", v2);
 idx = 0;
 do
 {
 (&v3)[idx] = idx;
 idx += 1;
 } while (idx != 16);
 v2 = *((int *)&v4) + v3;
 printf("PARAM-L3-04: %d\n", v2);
 v2 = 3;
 return printf("PARAM-L3-05: %d\n", v2);
}


// Function: sub_4019da at 0x4019da
void sub_4019da(unsigned int a0)
{
 ret_basic_type(a0);
 return;
}


// Function: ret_basic_type at 0x4019e0
unsigned int ret_basic_type(unsigned int a0)
{
 return 42;
}


// Function: sub_4019e7 at 0x4019e7
void sub_4019e7()
{
 call_ret_basic();
 return;
}


// Function: call_ret_basic at 0x4019f0
unsigned int call_ret_basic()
{
 return 42;
}


// Function: sub_4019f6 at 0x4019f6
void sub_4019f6(unsigned int a0)
{
 ret_pointer(a0);
 return;
}


// Function: ret_pointer at 0x401a00
int ret_pointer(unsigned int a0)
{
 return 20;
}


// Function: sub_401a08 at 0x401a08
void sub_401a08()
{
 call_ret_pointer();
 return;
}


// Function: call_ret_pointer at 0x401a10
unsigned int call_ret_pointer()
{
 return 20;
}


// Function: sub_401a16 at 0x401a16
void sub_401a16(unsigned int a0, unsigned int a1, unsigned int a2)
{
 ret_small_struct(NULL, a1, a2);
 return;
}


// Function: ret_small_struct at 0x401a20
unsigned int *ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 return (unsigned int *)7;
}


// Function: sub_401a34 at 0x401a34
void sub_401a34()
{
 call_ret_small_struct();
 return;
}


// Function: call_ret_small_struct at 0x401a40
unsigned int call_ret_small_struct()
{
 return 7;
}


// Function: sub_401a46 at 0x401a46
void sub_401a46(unsigned int a0, unsigned int a1)
{
 ret_large_struct(a0, a1);
 return;
}


// Function: ret_large_struct at 0x401a50
int ret_large_struct(unsigned int ptr, unsigned int a1)
{
 return 0;
}


// Function: sub_401a72 at 0x401a72
void sub_401a72()
{
 call_ret_large_struct();
 return;
}


// Function: call_ret_large_struct at 0x401a80
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


// Function: sub_401aaa at 0x401aaa
void sub_401aaa(unsigned int a0)
{
 func_a(a0);
 return;
}


// Function: func_a at 0x401ab0
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: sub_401ab8 at 0x401ab8
void sub_401ab8(unsigned int a0)
{
 func_b(a0);
 return;
}


// Function: func_b at 0x401ac0
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401ac7 at 0x401ac7
void sub_401ac7(unsigned int a0)
{
 ret_func_ptr(a0);
 return;
}


// Function: ret_func_ptr at 0x401ad0
unsigned int (*ret_func_ptr(unsigned int a0))(unsigned int)
{
 if (a0)
 return (unsigned int (*)(unsigned int))func_b;
 return (unsigned int (*)(unsigned int))func_a;
}


// Function: sub_401af1 at 0x401af1
void sub_401af1()
{
 call_ret_func_ptr();
 return;
}


// Function: call_ret_func_ptr at 0x401b00
unsigned int call_ret_func_ptr()
{
 return 10;
}


// Function: sub_401b06 at 0x401b06
void sub_401b06(unsigned int a0)
{
 ret_opaque_handle(a0);
 return;
}


// Function: ret_opaque_handle at 0x401b10


int ret_opaque_handle(unsigned int a0)
{
 if (a0)
 return (int)&ret_opaque_handle_handle1;
 return (int)"d";
}


// Function: sub_401b31 at 0x401b31
void sub_401b31()
{
 call_ret_opaque();
 return;
}


// Function: call_ret_opaque at 0x401b40
int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


// Function: sub_401b53 at 0x401b53
void sub_401b53(unsigned int a0, unsigned int a1, unsigned int a2)
{
 ret_complex_expr(a0, a1, a2);
 return;
}


// Function: ret_complex_expr at 0x401b60
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return 40;
}


// Function: sub_401b76 at 0x401b76
void sub_401b76()
{
 call_ret_complex_expr();
 return;
}


// Function: call_ret_complex_expr at 0x401b80
unsigned int call_ret_complex_expr()
{
 return 40;
}


// Function: sub_401b86 at 0x401b86
void sub_401b86(unsigned int a0)
{
 ret_multi_branch(a0);
 return;
}


// Function: ret_multi_branch at 0x401b90
unsigned int ret_multi_branch(unsigned int a0)
{
 if (a0 >= 3)
 return 4294967295;
 return a0 * 10 + 10;
}


// Function: sub_401ba7 at 0x401ba7
void sub_401ba7()
{
 call_ret_multi_branch();
 return;
}


// Function: call_ret_multi_branch at 0x401bb0
unsigned int call_ret_multi_branch()
{
 return 60;
}


// Function: sub_401bb6 at 0x401bb6
void sub_401bb6(unsigned int a0, unsigned int a1)
{
 ret_void(a0, (unsigned int*)a1);
 return;
}


// Function: ret_void at 0x401bc0
unsigned int *ret_void(unsigned int a0, unsigned int *ptr)
{
 return (unsigned int *)21;
}


// Function: sub_401bce at 0x401bce
void sub_401bce()
{
 call_ret_void();
 return;
}


// Function: call_ret_void at 0x401bd0
unsigned int call_ret_void()
{
 return 21;
}


// Function: sub_401cee at 0x401cee
int sub_401cee()
{
 return main();
}


// Function: test_return_values at 0x401be0
int test_return_values()
{
 unsigned int idx; // eax
 unsigned long v5; // [bp-0x1d4]
 unsigned int v0; // [bp-0x48]
 char v1; // [bp-0x44]
 char v2; // [bp-0x8]

 puts(g_402394);
 v0 = 42;
 printf(g_402255, v0);
 v0 = 20;
 printf(g_402271, v0);
 v0 = 7;
 printf(g_40228d, v0);
 idx = 100;
 do
 {
 (&v5)[idx] = idx;
 idx += 1;
 } while (idx != 116);
 v0 = *((int *)&v2) + *((int *)&v1);
 printf(g_4022a8, v0);
 v0 = 10;
 printf(g_4022c5, v0);
 v0 = ret_opaque_handle_handle1;
 printf(g_4022e1, v0);
 v0 = 40;
 printf(g_4022fe, v0);
 v0 = 60;
 printf(g_40231a, v0);
 v0 = 21;
 return printf(g_402336, v0);
}


// Function: main at 0x401cf0
int main()
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


// Function: sub_401d16 at 0x401d16
void sub_401d16()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_401d62 at 0x401d62
void sub_401d62()
{
}



/* CRT stub function _fini removed by preprocessor */


