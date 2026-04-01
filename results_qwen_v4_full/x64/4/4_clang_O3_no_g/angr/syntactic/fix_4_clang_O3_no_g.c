// Angr Decompilation of 4_clang_O3_no_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>

typedef struct struct_0 {
 unsigned int field_0;
 unsigned int field_8;
 unsigned int field_10;
 unsigned int field_18;
} struct_0;

typedef unsigned long long (*func_ptr_t)(unsigned int);

struct_0 *g_403fe8 = NULL;
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;
char g_4020e0[] = "%d\n";
char g_402108[] = "%d\n";
char g_40212a[] = "%d\n";
char g_402151[] = "%d\n";
char g_402179[] = "%d\n";
char g_4021a5[] = "%d\n";
char g_40238a[] = "Testing calling conventions";
char g_4023ab[] = "Testing parameter passing";
char g_40228d[] = "RET-L1-01: %d\n";
char g_4022a9[] = "RET-L1-02: %d\n";
char g_4022c5[] = "RET-L1-03: %d\n";
char g_4022e0[] = "RET-L1-04: %d\n";
char g_4022fd[] = "RET-L1-05: %d\n";
char g_402319[] = "RET-L1-06: %d\n";
char g_402336[] = "RET-L1-07: %d\n";
char g_402352[] = "RET-L1-08: %d\n";
char g_40236e[] = "RET-L1-09: %d\n";
char g_4023cc[] = "Testing return values";
unsigned int ret_opaque_handle_handle1 = 42;
char ret_opaque_handle_handle2 = 'H';
char *ret_opaque_handle_handle2_ptr = &ret_opaque_handle_handle2;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_403fe8;
 if (g_403fe8)
 v1 = (unsigned long long *)g_403fe8;
 return v1;
}


// Function: sub_401020 at 0x401020

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 return;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1 = "test"; // rdi

 return puts(v1);
}


// Function: cdecl_func at 0x401160
int cdecl_func(unsigned int a0, unsigned int a1);

// Function: call_cdecl at 0x401170
unsigned long long call_cdecl();

// Function: stdcall_func at 0x401180
int stdcall_func(unsigned int a0, unsigned int a1);

// Function: call_stdcall at 0x401190
unsigned long long call_stdcall();

// Function: fastcall_func at 0x4011a0
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2);

// Function: call_fastcall at 0x4011b0
unsigned long long call_fastcall();

// Function: call_thiscall at 0x4011c0
unsigned long long call_thiscall();

// Function: arm_aapcs_func at 0x4011d0
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);

// Function: call_arm_aapcs at 0x4011e0
unsigned long long call_arm_aapcs();

// Function: mips_func at 0x4011f0
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);

// Function: call_mips at 0x401200
unsigned long long call_mips();

// Function: amd64_sysv_func at 0x401210
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);

// Function: call_amd64_sysv at 0x401220
unsigned long long call_amd64_sysv();

// Function: ms_x64_func at 0x401230
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);

// Function: call_ms_x64 at 0x401240
unsigned long long call_ms_x64();

// Function: vectorcall_func at 0x401250
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);

// Function: call_vectorcall at 0x401260
unsigned long long call_vectorcall();

// Function: mixed_conventions_test at 0x401270
unsigned long long mixed_conventions_test();

// Function: varargs_func at 0x401280
unsigned long long varargs_func(unsigned int a0, ...);

// Function: func_no_args at 0x401450
unsigned long long func_no_args();

// Function: func_many_args at 0x401460
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7);

// Function: func_mixed_args at 0x401480
int func_mixed_args(unsigned long a0, char *a1, unsigned long a2);

// Function: func_struct_byval at 0x4014d0
int func_struct_byval(struct_0 s);

// Function: func_struct_byptr at 0x401520
unsigned long long func_struct_byptr(unsigned int *a0);

// Function: param_by_value_int at 0x4016b0
unsigned int param_by_value_int(unsigned int a0);

// Function: call_by_value_int at 0x4016c0
unsigned long long call_by_value_int();

// Function: param_by_value_ptr at 0x4016d0
unsigned long long param_by_value_ptr(unsigned int *ptr);

// Function: call_by_value_ptr at 0x4016e0
unsigned long long call_by_value_ptr();

// Function: param_array_decay at 0x4016f0
unsigned long long param_array_decay();

// Function: call_array_decay at 0x401700
unsigned long long call_array_decay();

// Function: param_string at 0x401710
int param_string(char *a0);

// Function: call_string_param at 0x401720
unsigned long long call_string_param();

// Function: param_ptr_array at 0x401730
unsigned long long param_ptr_array(unsigned long a0, unsigned int a1);

// Function: call_ptr_array at 0x4017c0
unsigned long long call_ptr_array();

// Function: param_varargs at 0x4017d0
unsigned long long param_varargs(unsigned int a0);

// Function: call_varargs_param at 0x4019a0
unsigned long long call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5);

// Function: param_func_ptr at 0x4019d0
int param_func_ptr(func_ptr_t a0, unsigned int a1);

// Function: call_func_ptr_param at 0x4019e0
unsigned long long call_func_ptr_param();

// Function: param_double_ptr at 0x4019f0
unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1);

// Function: call_double_ptr at 0x401a20
unsigned long long call_double_ptr();

// Function: param_complex_cast at 0x401a30
unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1);

// Function: call_complex_cast at 0x401a50
unsigned long long call_complex_cast();

// Function: param_struct_byval at 0x401a60
int param_struct_byval(struct_0 s);

// Function: call_struct_byval at 0x401a70
unsigned long long call_struct_byval();

// Function: param_order_dep at 0x401a80
int param_order_dep(unsigned int a0, unsigned int a1);

// Function: call_order_dep at 0x401a90
unsigned long long call_order_dep();

// Function: ret_basic_type at 0x401ba0
unsigned int ret_basic_type(unsigned int a0);

// Function: call_ret_basic at 0x401bb0
unsigned long long call_ret_basic();

// Function: ret_pointer at 0x401bc0
long long ret_pointer(unsigned long a0);

// Function: call_ret_pointer at 0x401bd0
unsigned long long call_ret_pointer();

// Function: ret_small_struct at 0x401be0
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1);

// Function: call_ret_small_struct at 0x401bf0
unsigned long long call_ret_small_struct();

// Function: ret_large_struct at 0x401c00
struct_0 * ret_large_struct(struct_0 *ptr, unsigned int a1);

// Function: call_ret_large_struct at 0x401c50
unsigned long long call_ret_large_struct();

// Function: func_a at 0x401c60
int func_a(unsigned int a0);

// Function: func_b at 0x401c70
unsigned int func_b(unsigned int a0);

// Function: ret_func_ptr at 0x401c80
long long ret_func_ptr(unsigned int a0);

// Function: call_ret_func_ptr at 0x401ca0
unsigned long long call_ret_func_ptr();

// Function: ret_opaque_handle at 0x401cb0
long long ret_opaque_handle(unsigned int a0);

// Function: call_ret_opaque at 0x401cd0
int call_ret_opaque();

// Function: ret_complex_expr at 0x401ce0
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2);

// Function: call_ret_complex_expr at 0x401cf0
unsigned long long call_ret_complex_expr();

// Function: ret_multi_branch at 0x401d00
unsigned long long ret_multi_branch(unsigned int a0);

// Function: call_ret_multi_branch at 0x401d20
unsigned long long call_ret_multi_branch();

// Function: ret_void at 0x401d30
unsigned int ret_void(unsigned int a0, unsigned int *ptr);

// Function: call_ret_void at 0x401d40
unsigned long long call_ret_void();

// Function: main at 0x401e10
unsigned int main();



/* CRT stub function _start removed by preprocessor */



// Function: sub_401095 at 0x401095
void sub_401095()
{
 // [D] Unsupported jumpkind Ijk_SigTRAP at address 4198549
}


// Function: sub_401096 at 0x401096
void sub_401096()
{
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010c9 at 0x4010c9
void sub_4010c9()
{
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401109 at 0x401109
void sub_401109()
{
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401145 at 0x401145
void sub_401145()
{
}


// Function: sub_401149 at 0x401149
void sub_401149()
{
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401159 at 0x401159
void sub_401159(unsigned long a0, unsigned long a1)
{
 cdecl_func((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: cdecl_func at 0x401160
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_401164 at 0x401164
void sub_401164()
{
 call_cdecl();
 return;
}


// Function: call_cdecl at 0x401170
unsigned long long call_cdecl()
{
 return 15;
}


// Function: sub_401176 at 0x401176
void sub_401176(unsigned long a0, unsigned long a1)
{
 stdcall_func((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: stdcall_func at 0x401180
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: sub_401186 at 0x401186
void sub_401186()
{
 call_stdcall();
 return;
}


// Function: call_stdcall at 0x401190
unsigned long long call_stdcall()
{
 return 50;
}


// Function: sub_401196 at 0x401196
void sub_401196(unsigned long a0, unsigned long a1, unsigned long a2)
{
 fastcall_func((unsigned int)a0, (unsigned int)a1, (unsigned int)a2);
 return;
}


// Function: fastcall_func at 0x4011a0
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: sub_4011a6 at 0x4011a6
void sub_4011a6()
{
 call_fastcall();
 return;
}


// Function: call_fastcall at 0x4011b0
unsigned long long call_fastcall()
{
 return 6;
}


// Function: sub_4011b6 at 0x4011b6
void sub_4011b6()
{
 call_thiscall();
 return;
}


// Function: call_thiscall at 0x4011c0
unsigned long long call_thiscall()
{
 return 15;
}


// Function: sub_4011c6 at 0x4011c6
void sub_4011c6(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 arm_aapcs_func((unsigned int)a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a3, (unsigned int)a4);
 return;
}


// Function: arm_aapcs_func at 0x4011d0
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_4011db at 0x4011db
void sub_4011db()
{
 call_arm_aapcs();
 return;
}


// Function: call_arm_aapcs at 0x4011e0
unsigned long long call_arm_aapcs()
{
 return 15;
}


// Function: sub_4011e6 at 0x4011e6
void sub_4011e6(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 mips_func((unsigned int)a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a3);
 return;
}


// Function: mips_func at 0x4011f0
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: sub_4011f8 at 0x4011f8
void sub_4011f8()
{
 call_mips();
 return;
}


// Function: call_mips at 0x401200
unsigned long long call_mips()
{
 return 100;
}


// Function: sub_401206 at 0x401206
void sub_401206(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 amd64_sysv_func((unsigned int)a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a3, (unsigned int)a4, (unsigned int)a5);
 return;
}


// Function: amd64_sysv_func at 0x401210
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: sub_40121e at 0x40121e
void sub_40121e()
{
 call_amd64_sysv();
 return;
}


// Function: call_amd64_sysv at 0x401220
unsigned long long call_amd64_sysv()
{
 return 21;
}


// Function: sub_401226 at 0x401226
void sub_401226(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 ms_x64_func((unsigned int)a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a3, (unsigned int)a4);
 return;
}


// Function: ms_x64_func at 0x401230
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_40123b at 0x40123b
void sub_40123b()
{
 call_ms_x64();
 return;
}


// Function: call_ms_x64 at 0x401240
unsigned long long call_ms_x64()
{
 return 15;
}


// Function: sub_401246 at 0x401246
void sub_401246(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 vectorcall_func((unsigned int)a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a3);
 return;
}


// Function: vectorcall_func at 0x401250
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: sub_401258 at 0x401258
void sub_401258()
{
 call_vectorcall();
 return;
}


// Function: call_vectorcall at 0x401260
unsigned long long call_vectorcall()
{
 return 10;
}


// Function: sub_401266 at 0x401266
void sub_401266()
{
 mixed_conventions_test();
 return;
}


// Function: mixed_conventions_test at 0x401270
unsigned long long mixed_conventions_test()
{
 return 33;
}


// Function: sub_401276 at 0x401276
void sub_401276(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 varargs_func((unsigned int)a0);
 return;
}


// Function: varargs_func at 0x401280
unsigned long long varargs_func(unsigned int a0, ...)
{
 va_list args;
 unsigned long long v35 = 0;
 unsigned long v33 = 0;
 struct_0 *v2 = 0;
 char *v3 = 0;
 char v4 = 0;
 unsigned long long v46 = 0;
 unsigned int flag1 = 0;
 struct_0 *cur = 0;
 struct_0 *iter = 0;
 unsigned int v47 = 0;

 va_start(args, a0);

 v3 = &v4;
 v2 = (struct_0 *)&v35;
 if (a0 <= 0)
 {
 va_end(args);
 return 0;
 }
 if (a0 == 1)
 {
 va_end(args);
 return 0;
 }
 if (!((char)a0 & 1))
 {
 va_end(args);
 return v35;
 }
 else if ((unsigned int)v33 < 41)
 {
 va_end(args);
 return (unsigned int)v35 + ((int *)v3)[(v33 & 4294967295) / sizeof(int)];
 }
 else
 {
 cur = (struct_0 *)v2;
 flag1 = a0 & 3;
 if (a0 - 1 < 3)
 {
 v46 = 0;
 }
 else
 {
 v47 = a0 & 0xfffffffc;
 v46 = 0;
 do
 {
 v46 = (unsigned long long)((unsigned int)v46 + cur->field_0 + cur->field_8 + cur->field_10 + cur->field_18);
 cur = (struct_0 *)((char *)cur + sizeof(struct_0));
 v47 -= 4;
 } while (v47 != 0);
 }
 if (!flag1)
 {
 va_end(args);
 return v46;
 }
 iter = cur;
 do
 {
 v46 = (unsigned int)v46 + iter->field_8;
 iter = (struct_0 *)((char *)iter + 8);
 flag1 -= 1;
 } while (flag1 != 0);
 va_end(args);
 return v46;
 }
}


// Function: sub_401338 at 0x401338
void sub_401338()
{
}


// Function: sub_401375 at 0x401375
void sub_401375()
{
}


// Function: sub_40144b at 0x40144b
void sub_40144b()
{
 func_no_args();
 return;
}


// Function: func_no_args at 0x401450
unsigned long long func_no_args()
{
 return 42;
}


// Function: sub_401456 at 0x401456
void sub_401456(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned int a6, unsigned int a7)
{
 func_many_args((unsigned int)a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a3, (unsigned int)a4, (unsigned int)a5, a6, a7);
 return;
}


// Function: func_many_args at 0x401460
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: sub_401476 at 0x401476
void sub_401476(unsigned long a0, unsigned long a1, unsigned long a2)
{
 func_mixed_args(a0, a1, a2);
 return;
}


// Function: func_mixed_args at 0x401480
int func_mixed_args(unsigned long a0, char *a1, unsigned long a2)
{
 unsigned long long len;

 if (a1)
 {
 len = strlen(a1);
 }
 else
 {
 len = 0;
 }
 return (unsigned int)(a2 + len + (a0 & 4294967295));
}


// Function: sub_4014c1 at 0x4014c1
int sub_4014c1()
{
 struct_0 s = {0};
 func_struct_byval(s);
 return 0;
}


// Function: func_struct_byval at 0x4014d0
int func_struct_byval(struct_0 s)
{
 return 0;
}


// Function: sub_40151a at 0x40151a
void sub_40151a(unsigned long a0)
{
 unsigned int arr[2] = {3, 5};
 func_struct_byptr(arr);
 return;
}


// Function: func_struct_byptr at 0x401520
unsigned long long func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0) * a0[1];
}


// Function: sub_401532 at 0x401532
void sub_401532()
{
 return;
}


// Function: test_calling_conventions at 0x401540

int test_calling_conventions()
{
 puts(g_40238a);
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
 printf((char *)g_4020e0, varargs_func(5) & 4294967295);
 printf((char *)g_402108, 42);
 printf((char *)g_40212a, 36);
 printf((char *)g_402151, 117);
 printf((char *)g_402179, 136);
 return printf((char *)g_4021a5, 50);
}


// Function: sub_4016a2 at 0x4016a2
void sub_4016a2(unsigned long a0)
{
 param_by_value_int((unsigned int)a0);
 return;
}


// Function: param_by_value_int at 0x4016b0
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4016b4 at 0x4016b4
void sub_4016b4()
{
 call_by_value_int();
 return;
}


// Function: call_by_value_int at 0x4016c0
unsigned long long call_by_value_int()
{
 return 15;
}


// Function: sub_4016c6 at 0x4016c6
void sub_4016c6(unsigned long a0)
{
 unsigned int val = 5;
 param_by_value_ptr(&val);
 return;
}


// Function: param_by_value_ptr at 0x4016d0
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2;
 return 1;
}


// Function: sub_4016d8 at 0x4016d8
void sub_4016d8()
{
 call_by_value_ptr();
 return;
}


// Function: call_by_value_ptr at 0x4016e0
unsigned long long call_by_value_ptr()
{
 return 11;
}


// Function: sub_4016e6 at 0x4016e6
void sub_4016e6()
{
 param_array_decay();
 return;
}


// Function: param_array_decay at 0x4016f0
unsigned long long param_array_decay()
{
 return 8;
}


// Function: sub_4016f6 at 0x4016f6
void sub_4016f6()
{
 call_array_decay();
 return;
}


// Function: call_array_decay at 0x401700
unsigned long long call_array_decay()
{
 return 8;
}


// Function: sub_401706 at 0x401706
void sub_401706(unsigned long a0)
{
 param_string((char *)a0);
 return;
}


// Function: param_string at 0x401710
int param_string(char *a0)
{
 return a0[1] + *(a0);
}


// Function: sub_40171a at 0x40171a
void sub_40171a()
{
 call_string_param();
 return;
}


// Function: call_string_param at 0x401720
unsigned long long call_string_param()
{
 return 173;
}


// Function: sub_401726 at 0x401726
void sub_401726(unsigned long a0, unsigned long a1)
{
 param_ptr_array(a0, (unsigned int)a1);
 return;
}


// Function: param_ptr_array at 0x401730
unsigned long long param_ptr_array(unsigned long a0, unsigned int a1)
{
 unsigned long v1; // r9
 unsigned long long j; // r8
 unsigned long long i; // rdx
 unsigned long long v4; // rax
 unsigned long long v5; // rsi
 unsigned char *base_ptr;

 if (a1 <= 0)
 return 0;
 v1 = a0;
 base_ptr = (unsigned char *)a0;
 j = (unsigned int)a1 & 3;
 if (a1 - 1 < 3)
 {
 i = 0;
 v4 = 0;
 }
 else
 {
 i = 0;
 v4 = 0;
 do
 {
 v4 = base_ptr[i * 8 + 24] + base_ptr[i * 8 + 16] + base_ptr[i * 8 + 8] + base_ptr[i * 8] + v4;
 i += 4;
 } while (((unsigned int)a1 & 0xfffffffc) != i);
 }
 if (!j)
 return v4;
 v5 = 0;
 do
 {
 v4 += base_ptr[i * 8 + v5 * 8];
 v5 += 1;
 } while (j != v5);
 return v4;
}


// Function: sub_4017b3 at 0x4017b3
void sub_4017b3()
{
 call_ptr_array();
 return;
}


// Function: call_ptr_array at 0x4017c0
unsigned long long call_ptr_array()
{
 return 300;
}


// Function: sub_4017c6 at 0x4017c6
void sub_4017c6(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 param_varargs((unsigned int)a0);
 return;
}


// Function: sub_401888 at 0x401888
void sub_401888()
{
}








// Function: call_varargs_param at 0x4019a0
unsigned long long call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 return param_varargs(4);
}


// Function: sub_4019c1 at 0x4019c1
void sub_4019c1(unsigned long a0, unsigned long a1)
{
 param_func_ptr((func_ptr_t)a0, (unsigned int)a1);
 return;
}


// Function: param_func_ptr at 0x4019d0
int param_func_ptr(func_ptr_t a0, unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: sub_4019dd at 0x4019dd
void sub_4019dd()
{
 call_func_ptr_param();
 return;
}


// Function: call_func_ptr_param at 0x4019e0
unsigned long long call_func_ptr_param()
{
 return 20;
}


// Function: sub_4019e6 at 0x4019e6
void sub_4019e6(unsigned long a0)
{
 struct_0 *s = NULL;
 param_double_ptr(&s, (unsigned int)a0);
 return;
}


// Function: param_double_ptr at 0x4019f0
unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (ptr && *ptr)
 {
 (*ptr)->field_0 = a1;
 *ptr = NULL;
 v1 = 1;
 }
 return v1;
}


// Function: sub_401a11 at 0x401a11
void sub_401a11()
{
 call_double_ptr();
 return;
}


// Function: call_double_ptr at 0x401a20
unsigned long long call_double_ptr()
{
 return 21;
}


// Function: sub_401a26 at 0x401a26
void sub_401a26(unsigned long a0, unsigned long a1)
{
 unsigned int arr[2] = {1, 2};
 param_complex_cast(arr, (unsigned int)a1);
 return;
}


// Function: param_complex_cast at 0x401a30
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


// Function: sub_401a47 at 0x401a47
void sub_401a47()
{
 call_complex_cast();
 return;
}


// Function: call_complex_cast at 0x401a50
unsigned long long call_complex_cast()
{
 return 305419896;
}


// Function: sub_401a56 at 0x401a56
int sub_401a56()
{
 struct_0 s = {0};
 param_struct_byval(s);
 return 0;
}


// Function: param_struct_byval at 0x401a60
int param_struct_byval(struct_0 s)
{
 return 0;
}


// Function: sub_401a69 at 0x401a69
void sub_401a69()
{
 call_struct_byval();
 return;
}


// Function: call_struct_byval at 0x401a70
unsigned long long call_struct_byval()
{
 return 15;
}


// Function: sub_401a76 at 0x401a76
void sub_401a76(unsigned long a0, unsigned long a1)
{
 param_order_dep((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: param_order_dep at 0x401a80
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_401a84 at 0x401a84
void sub_401a84()
{
 call_order_dep();
 return;
}


// Function: call_order_dep at 0x401a90
unsigned long long call_order_dep()
{
 return 3;
}


// Function: sub_401a96 at 0x401a96
void sub_401a96()
{
 return;
}


// Function: test_parameter_passing at 0x401aa0

int test_parameter_passing()
{
 puts(g_4023ab);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 8);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 printf("PARAM-L2-04: %d\n", param_varargs(4) & 4294967295);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 printf("PARAM-L3-04: %d\n", 15);
 return printf("PARAM-L3-05: %d\n", 3);
}


// Function: sub_401b9d at 0x401b9d
void sub_401b9d(unsigned long a0)
{
 ret_basic_type((unsigned int)a0);
 return;
}


// Function: ret_basic_type at 0x401ba0
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401ba4 at 0x401ba4
void sub_401ba4()
{
 call_ret_basic();
 return;
}


// Function: call_ret_basic at 0x401bb0
unsigned long long call_ret_basic()
{
 return 42;
}


// Function: sub_401bb6 at 0x401bb6
void sub_401bb6(unsigned long a0)
{
 ret_pointer(a0);
 return;
}


// Function: ret_pointer at 0x401bc0
long long ret_pointer(unsigned long a0)
{
 return a0 + 4;
}


// Function: sub_401bc5 at 0x401bc5
void sub_401bc5()
{
 call_ret_pointer();
 return;
}


// Function: call_ret_pointer at 0x401bd0
unsigned long long call_ret_pointer()
{
 return 20;
}


// Function: sub_401bd6 at 0x401bd6
void sub_401bd6(unsigned long a0, unsigned long a1)
{
 ret_small_struct(a0, a1);
 return;
}


// Function: ret_small_struct at 0x401be0
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
 return a0 & 4294967295 | a1 * 0x100000000;
}


// Function: sub_401bea at 0x401bea
void sub_401bea()
{
 call_ret_small_struct();
 return;
}


// Function: call_ret_small_struct at 0x401bf0
unsigned long long call_ret_small_struct()
{
 return 7;
}


// Function: sub_401bf6 at 0x401bf6
void sub_401bf6(unsigned long a0, unsigned long a1)
{
 struct_0 s = {0};
 ret_large_struct(&s, (unsigned int)a1);
 return;
}


// Function: ret_large_struct at 0x401c00
struct_0 * ret_large_struct(struct_0 *ptr, unsigned int a1)
{
 ptr->field_0 = a1;
 ptr->field_8 = a1;
 ptr->field_10 = a1;
 ptr->field_18 = a1;
 return ptr;
}


// Function: call_ret_large_struct at 0x401c50
unsigned long long call_ret_large_struct()
{
 return 215;
}


// Function: sub_401c56 at 0x401c56
void sub_401c56(unsigned long a0)
{
 func_a((unsigned int)a0);
 return;
}


// Function: func_a at 0x401c60
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: sub_401c64 at 0x401c64
void sub_401c64(unsigned long a0)
{
 func_b((unsigned int)a0);
 return;
}


// Function: func_b at 0x401c70
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401c74 at 0x401c74
void sub_401c74(unsigned long a0)
{
 ret_func_ptr((unsigned int)a0);
 return;
}


// Function: ret_func_ptr at 0x401c80
long long ret_func_ptr(unsigned int a0)
{
 if (a0)
 return (long long)func_b;
 return (long long)func_a;
}


// Function: sub_401c95 at 0x401c95
void sub_401c95()
{
 call_ret_func_ptr();
 return;
}


// Function: call_ret_func_ptr at 0x401ca0
unsigned long long call_ret_func_ptr()
{
 return 10;
}


// Function: sub_401ca6 at 0x401ca6
void sub_401ca6(unsigned long a0)
{
 ret_opaque_handle((unsigned int)a0);
 return;
}


// Function: ret_opaque_handle at 0x401cb0

long long ret_opaque_handle(unsigned int a0)
{
 if (a0)
 return (long long)(unsigned long long)&ret_opaque_handle_handle2;
 return (long long)(unsigned long long)"d";
}


// Function: sub_401cc5 at 0x401cc5
void sub_401cc5()
{
 call_ret_opaque();
 return;
}


// Function: call_ret_opaque at 0x401cd0

int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


// Function: sub_401cd7 at 0x401cd7
void sub_401cd7(unsigned long a0, unsigned long a1, unsigned long a2)
{
 ret_complex_expr((unsigned int)a0, (unsigned int)a1, (unsigned int)a2);
 return;
}


// Function: ret_complex_expr at 0x401ce0
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a1 < a0 ? a2 * 2 : a2 + 10);
}


// Function: sub_401cec at 0x401cec
void sub_401cec()
{
 call_ret_complex_expr();
 return;
}


// Function: call_ret_complex_expr at 0x401cf0
unsigned long long call_ret_complex_expr()
{
 return 40;
}


// Function: sub_401cf6 at 0x401cf6
void sub_401cf6(unsigned long a0)
{
 ret_multi_branch((unsigned int)a0);
 return;
}


// Function: ret_multi_branch at 0x401d00
unsigned long long ret_multi_branch(unsigned int a0)
{
 return (a0 < 3 ? a0 * 10 + 10 : 4294967295);
}


// Function: sub_401d13 at 0x401d13
void sub_401d13()
{
 call_ret_multi_branch();
 return;
}


// Function: call_ret_multi_branch at 0x401d20
unsigned long long call_ret_multi_branch()
{
 return 60;
}


// Function: sub_401d26 at 0x401d26
void sub_401d26(unsigned long a0, unsigned long a1)
{
 unsigned int val = 0;
 ret_void((unsigned int)a0, &val);
 return;
}


// Function: ret_void at 0x401d30
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return a0 * 3;
}


// Function: sub_401d36 at 0x401d36
void sub_401d36()
{
 call_ret_void();
 return;
}


// Function: call_ret_void at 0x401d40
unsigned long long call_ret_void()
{
 return 21;
}


// Function: sub_401d46 at 0x401d46
void sub_401d46()
{
 return;
}


// Function: test_return_values at 0x401d50

int test_return_values()
{
 puts(g_4023cc);
 printf((char *)g_40228d, 42);
 printf((char *)g_4022a9, 20);
 printf((char *)g_4022c5, 7);
 printf((char *)g_4022e0, 215);
 printf((char *)g_4022fd, 10);
 printf((char *)g_402319, ret_opaque_handle_handle1);
 printf((char *)g_402336, 40);
 printf((char *)g_402352, 60);
 return printf((char *)g_40236e, 21);
}


// Function: sub_401e0a at 0x401e0a
void sub_401e0a()
{
 main();
 return;
}


// Function: main at 0x401e10
unsigned int main()
{
 test_calling_conventions();
 test_parameter_passing();
 puts(g_4023cc);
 printf((char *)g_40228d, 42);
 printf((char *)g_4022a9, 20);
 printf((char *)g_4022c5, 7);
 printf((char *)g_4022e0, 215);
 printf((char *)g_4022fd, 10);
 printf((char *)g_402319, ret_opaque_handle_handle1);
 printf((char *)g_402336, 40);
 printf((char *)g_402352, 60);
 printf((char *)g_40236e, 21);
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


