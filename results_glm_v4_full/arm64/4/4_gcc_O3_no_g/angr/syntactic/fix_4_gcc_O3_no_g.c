// Angr Decompilation of 4_gcc_O3_no_g
// Platform: AARCH64

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* CRT stub function _init removed by preprocessor */

// Stub functions for CRT functions removed by preprocessor
void deregister_tm_clones(void) {}
void __do_global_dtors_aux(void) {}
long long frame_dummy(void) { return 0; }

// Global data definitions for format strings and constants
extern char __dollar_d[];
char __dollar_d[] = "CALLING CONVENTIONS TESTS\n";

extern char g_401660[];
char g_401660[] = "CALL-L1-11: %d\n";

extern char g_401688[];
char g_401688[] = "CALL-L1-12: %d\n";

extern char g_4016b0[];
char g_4016b0[] = "CALL-L1-13: %d\n";

extern char g_4016d8[];
char g_4016d8[] = "CALL-L1-14: %d\n";

extern char g_401700[];
char g_401700[] = "CALL-L1-15: %d\n";

extern char g_401730[];
char g_401730[] = "CALL-L1-16: %d\n";

extern char g_401760[];
char g_401760[] = "PARAMETER PASSING TESTS\n";

extern char g_401890[];
char g_401890[] = "RETURN VALUES TESTS\n";

extern char g_4018b0[];
char g_4018b0[] = "RETURN-L1-01: %d\n";

extern char g_4018d0[];
char g_4018d0[] = "RETURN-L1-02: %d\n";

extern char g_4018f0[];
char g_4018f0[] = "RETURN-L1-03: %d\n";

extern char g_401910[];
char g_401910[] = "RETURN-L1-04: %d\n";

extern char g_401930[];
char g_401930[] = "RETURN-L1-05: %d\n";

extern char g_401950[];
char g_401950[] = "RETURN-L1-06: %d\n";

extern char g_401970[];
char g_401970[] = "RETURN-L1-07: %d\n";

extern char g_401990[];
char g_401990[] = "RETURN-L1-08: %d\n";

extern char g_4019b0[];
char g_4019b0[] = "RETURN-L1-09: %d\n";

extern unsigned int handle1_1;
unsigned int handle1_1 = 5;

extern unsigned long long g_412f80;
unsigned long long g_412f80 = 0;

extern char handle2_0;
char handle2_0 = 0;

// Forward declarations for functions used before definition
int test_return_values(void);
int test_parameter_passing(void);
int test_calling_conventions(void);
void _start(void);
int func_a(unsigned int a0);
long long param_varargs_constprop_0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4);
unsigned int func_b(unsigned int a0);
int cdecl_func(unsigned int a0, unsigned int a1);
void __stack_chk_fail(void);
unsigned long long call_cdecl(void);
int stdcall_func(unsigned int a0, unsigned int a1);
unsigned long long call_stdcall(void);
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned long long call_fastcall(void);
unsigned long long call_thiscall(void);
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
unsigned long long call_amd64_sysv(void);
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned long long call_ms_x64(void);
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned long long call_vectorcall(void);
unsigned long long mixed_conventions_test(void);
unsigned long long varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7);
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7);
unsigned long long func_struct_byptr(unsigned int *a0);
unsigned long long call_by_value_int(void);
unsigned long long param_by_value_ptr(unsigned int *ptr);
unsigned long long call_by_value_ptr(void);
unsigned long long param_array_decay(void);
unsigned long long call_array_decay(void);
int param_string(char *a0);
unsigned long long call_string_param(void);
unsigned long long param_ptr_array(unsigned long a0, unsigned int i);
unsigned long long call_ptr_array(void);
unsigned long long param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7);
long long param_varargs_constprop_0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4);
unsigned long long call_varargs_param(void);
int param_func_ptr(int (*a0)(unsigned int), unsigned int a1);
unsigned long long call_func_ptr_param(void);
unsigned long long param_double_ptr(void **ptr, unsigned int a1);
unsigned long long call_double_ptr(void);
unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1);
unsigned long long call_complex_cast(void);
int param_struct_byval(unsigned int *a0);
unsigned long long call_struct_byval(void);
int param_order_dep(unsigned int a0, unsigned int a1);
unsigned long long call_order_dep(void);
unsigned int ret_basic_type(unsigned int a0);
unsigned long long call_ret_basic(void);
long long ret_pointer(unsigned long a0);
unsigned long long call_ret_pointer(void);
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1);
unsigned long long call_ret_small_struct(void);
long long ret_large_struct(unsigned int a0);
unsigned long long call_ret_large_struct(void);
long long ret_func_ptr(unsigned int a0);
unsigned long long call_ret_func_ptr(void);
long long ret_opaque_handle(unsigned int a0);
int call_ret_opaque(void);
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned long long call_ret_complex_expr(void);
unsigned long long ret_multi_branch(unsigned int a0);
unsigned long long call_ret_multi_branch(void);
unsigned int ret_void(unsigned int a0, unsigned int *ptr);
unsigned long long call_ret_void(void);

// Function: __dollar_x at 0x400710
extern unsigned long long g_412f80;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 __asm__ volatile ("b %0" : : "X"(g_412f80));
 return 0;
}


// Function: sub_400724 at 0x400724
long long sub_400724()
{
 char *v0; // x0
 unsigned long long len; // x0

 len = strlen(v0);
 return strlen(v0);
}


// Function: main at 0x4007c0
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


// Function: sub_4007e0 at 0x4007e0
void sub_4007e0(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400830 at 0x400830
void sub_400830()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400848 at 0x400848
void sub_400848()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4008bc at 0x4008bc
void sub_4008bc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400908 at 0x400908
long long sub_400908()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_400914 at 0x400914
void sub_400914(unsigned long a0)
{
 func_a(a0);
 return;
}


// Function: func_a at 0x400920
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: sub_400928 at 0x400928
void sub_400928(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 param_varargs_constprop_0(a0, a1, a2, a3, a4);
 return;
}


// Function: param_varargs_constprop_0 at 0x400930
extern char __stack_chk_guard;

long long param_varargs_constprop_0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 char *v0; // [bp-0x60]
 char *v1; // [bp-0x48]
 char *v2; // [bp-0x40]
 unsigned long *v3; // [bp-0x38]
 unsigned int v4; // [bp-0x30]
 unsigned int result; // [bp-0x2c]
 unsigned long v6; // [bp-0x28]
 unsigned long v7; // [bp-0x20]
 unsigned long v8; // [bp-0x18]
 unsigned long v9; // [bp-0x10]
 unsigned long v10; // [bp-0x8]
 char v11; // [bp+0x0]

 v0 = &v11;
 v7 = a1;
 v8 = a2;
 v9 = a3;
 v10 = a4;
 v6 = *((long long *)&__stack_chk_guard);
 v1 = &v11;
 v2 = &v11;
 v3 = &v7;
 v4 = 0xfffffff8;
 result = 0;
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return (unsigned int)v7 + (unsigned int)v8 + (unsigned int)v9 + (unsigned int)v10;
}


// Function: varargs_func_constprop_0 at 0x4009b0
extern char __stack_chk_guard;

long long varargs_func_constprop_0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 char *v0; // [bp-0x70]
 char *v1; // [bp-0x58]
 char *v2; // [bp-0x50]
 char *v3; // [bp-0x48]
 unsigned int v4; // [bp-0x40]
 unsigned int result; // [bp-0x3c]
 unsigned long v6; // [bp-0x38]
 char v7; // [bp-0x30]
 unsigned long v8; // [bp-0x28]
 unsigned long v9; // [bp-0x20]
 unsigned long v10; // [bp-0x18]
 unsigned long v11; // [bp-0x10]
 unsigned long v12; // [bp-0x8]
 char v13; // [bp+0x0]

 v0 = &v13;
 v8 = a1;
 v9 = a2;
 v10 = a3;
 v11 = a4;
 v12 = a5;
 v6 = *((long long *)&__stack_chk_guard);
 v1 = &v13;
 v2 = &v13;
 v3 = &v7;
 v4 = 0xfffffff8;
 result = 0;
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return (unsigned int)v8 + (unsigned int)v9 + (unsigned int)v10 + (unsigned int)v11 + (unsigned int)v12;
}


// Function: sub_400a3c at 0x400a3c
void sub_400a3c(unsigned long a0)
{
 func_b(a0);
 return;
}


// Function: func_b at 0x400a40
unsigned int func_b(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_400a48 at 0x400a48
void sub_400a48(unsigned long a0, unsigned long a1)
{
 cdecl_func(a0, a1);
 return;
}


// Function: cdecl_func at 0x400a50
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_400a58 at 0x400a58
void sub_400a58()
{
 call_cdecl();
 return;
}


// Function: call_cdecl at 0x400a60
unsigned long long call_cdecl()
{
 return 15;
}


// Function: sub_400a68 at 0x400a68
void sub_400a68(unsigned long a0, unsigned long a1)
{
 stdcall_func(a0, a1);
 return;
}


// Function: stdcall_func at 0x400a70
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: sub_400a78 at 0x400a78
void sub_400a78()
{
 call_stdcall();
 return;
}


// Function: call_stdcall at 0x400a80
unsigned long long call_stdcall()
{
 return 50;
}


// Function: sub_400a88 at 0x400a88
void sub_400a88(unsigned long a0, unsigned long a1, unsigned long a2)
{
 fastcall_func((unsigned int)a0, (unsigned int)a1, (unsigned int)a2);
 return;
}


// Function: fastcall_func at 0x400a90
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: sub_400a9c at 0x400a9c
void sub_400a9c()
{
 call_fastcall();
 return;
}


// Function: call_fastcall at 0x400aa0
unsigned long long call_fastcall()
{
 return 6;
}


// Function: sub_400aa8 at 0x400aa8
void sub_400aa8()
{
 call_thiscall();
 return;
}


// Function: call_thiscall at 0x400ab0
unsigned long long call_thiscall()
{
 return 15;
}


// Function: sub_400ab8 at 0x400ab8
void sub_400ab8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 arm_aapcs_func((unsigned int)a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a3, (unsigned int)a4);
 return;
}


// Function: arm_aapcs_func at 0x400ac0
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x400ad4
unsigned long long call_arm_aapcs()
{
 return 15;
}


// Function: sub_400adc at 0x400adc
void sub_400adc(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 mips_func((unsigned int)a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a3);
 return;
}


// Function: mips_func at 0x400ae0
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x400af0
unsigned long long call_mips()
{
 return 100;
}


// Function: sub_400af8 at 0x400af8
void sub_400af8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 amd64_sysv_func((unsigned int)a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a3, (unsigned int)a4, (unsigned int)a5);
 return;
}


// Function: amd64_sysv_func at 0x400b00
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: sub_400b18 at 0x400b18
void sub_400b18()
{
 call_amd64_sysv();
 return;
}


// Function: call_amd64_sysv at 0x400b20
unsigned long long call_amd64_sysv()
{
 return 21;
}


// Function: sub_400b28 at 0x400b28
void sub_400b28(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 ms_x64_func((unsigned int)a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a3, (unsigned int)a4);
 return;
}


// Function: ms_x64_func at 0x400b30
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x400b44
unsigned long long call_ms_x64()
{
 return 15;
}


// Function: sub_400b4c at 0x400b4c
void sub_400b4c(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 vectorcall_func((unsigned int)a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a3);
 return;
}


// Function: vectorcall_func at 0x400b50
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x400b60
unsigned long long call_vectorcall()
{
 return 10;
}


// Function: sub_400b68 at 0x400b68
void sub_400b68()
{
 mixed_conventions_test();
 return;
}


// Function: mixed_conventions_test at 0x400b70
unsigned long long mixed_conventions_test()
{
 return 33;
}


// Function: sub_400b78 at 0x400b78
void sub_400b78(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
 varargs_func((unsigned int)a0, a1, a2, a3, a4, a5, a6, a7);
 return;
}


// Function: varargs_func at 0x400b80
typedef struct struct_0 {
 char field_0[4];
 char padding_4[4];
 unsigned int field_8;
} struct_0;

extern char __stack_chk_guard;

unsigned long long varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 unsigned long long v16; // x3
 struct_0 *ptr; // x1
 unsigned long long cur; // x0
 struct_0 *v26; // x2
 unsigned int v18; // w1
 unsigned int v19; // w5
 struct_0 *p; // x3
 unsigned int i; // w1
 struct_0 *addr; // x2
 char *v0; // [bp-0x80]
 char *v1; // [bp-0x68]
 char *v2; // [bp-0x60]
 char *v3; // [bp-0x58]
 unsigned int v4; // [bp-0x50]
 unsigned int result; // [bp-0x4c]
 unsigned long v6; // [bp-0x48]
 char v7; // [bp-0x40]
 unsigned long long v8; // [bp-0x38]
 unsigned long long v9; // [bp-0x30]
 unsigned long long v10; // [bp-0x28]
 unsigned long long v11; // [bp-0x20]
 unsigned long long v12; // [bp-0x18]
 unsigned long long v13; // [bp-0x10]
 unsigned long long v14; // [bp-0x8]
 char v15; // [bp+0x0]

 v0 = &v15;
 v8 = a1;
 v9 = a2;
 v10 = a3;
 v11 = a4;
 v16 = 4294967240;
 v12 = a5;
 v13 = a6;
 v14 = a7;
 v6 = *((long long *)&__stack_chk_guard);
 v3 = &v7;
 ptr = (struct_0 *)&v15;
 v1 = &v15;
 v2 = &v15;
 v4 = 4294967240;
 result = 0;
 if (a0 > 0)
 {
 cur = 0;
 v18 = 0;
 while (true)
 {
 if (!((char)(v16 >> 31) & 1))
 {
 i = v18 + 1;
 addr = (struct_0 *)&ptr->field_8;
 cur += (unsigned long long)ptr->field_0;
 if (a0 != i)
 {
 do
 {
 i += 1;
 v26 = (struct_0 *)&addr->field_8;
 cur += (unsigned long long)addr->field_0;
 addr = v26;
 } while (i < a0);
 }
 }
 else
 {
 v19 = (unsigned int)v16 + 8;
 if (v19 > 0)
 {
 p = ptr;
 ptr = (struct_0 *)&ptr->field_8;
 }
 else
 {
 p = (struct_0 *)&((char *)&v15)[v16 & 4294967295];
 }
 v18 += 1;
 cur += (unsigned long long)p->field_0;
 if (a0 == v18)
 break;
 v16 = v19;
 }
 }
 }
 else
 {
 cur = 0;
 }
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return cur;
}


// Function: func_no_args at 0x400c80
unsigned long long func_no_args()
{
 return 42;
}


// Function: sub_400c88 at 0x400c88
void sub_400c88(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
 func_many_args((unsigned int)a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a3, (unsigned int)a4, (unsigned int)a5, (unsigned int)a6, (unsigned int)a7);
 return;
}


// Function: func_many_args at 0x400c90
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x400cb0
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2)
{
 unsigned long v4; // x19
 unsigned long long v5; // d8
 unsigned long long v6; // d9
 unsigned int v7; // s0
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v4 = a0;
 v1 = (unsigned long long)(unsigned long)&v5;
 v2 = (unsigned long long)(unsigned long)&v6;
 if (a1)
 v4 += strlen(a1);
 return (unsigned int)v4 + v7 + a2;
}


// Function: func_struct_byval at 0x400d00
long long func_struct_byval(unsigned long a0)
{
 return 0;
}


// Function: sub_400d3c at 0x400d3c
long long sub_400d3c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = func_struct_byptr((unsigned int *)a0);
 return func_struct_byptr((unsigned int *)a0);
}


// Function: func_struct_byptr at 0x400d40
unsigned long long func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return a0[1] * *(a0);
}


// Function: sub_400d58 at 0x400d58
void sub_400d58()
{
 test_calling_conventions();
 return;
}


// Function: test_calling_conventions at 0x400d60
extern char __dollar_d[];
extern char g_401660[];
extern char g_401688[];
extern char g_4016b0[];
extern char g_4016d8[];
extern char g_401700[];
extern char g_401730[];

int test_calling_conventions()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(__dollar_d);
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
 __printf_chk(1, g_401660, varargs_func_constprop_0(5, 1, 2, 3, 4, 5) & 4294967295);
 __printf_chk(1, g_401688, 42);
 __printf_chk(1, g_4016b0, 36);
 __printf_chk(1, g_4016d8, 117);
 __printf_chk(1, g_401700, 136);
 return __printf_chk(1, g_401730, 50);
}


// Function: param_by_value_int at 0x400ed4
unsigned int param_by_value_int(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_400edc at 0x400edc
void sub_400edc()
{
 call_by_value_int();
 return;
}


// Function: call_by_value_int at 0x400ee0
unsigned long long call_by_value_int()
{
 return 15;
}


// Function: sub_400ee8 at 0x400ee8
void sub_400ee8(unsigned long a0)
{
 param_by_value_ptr((unsigned int *)a0);
 return;
}


// Function: param_by_value_ptr at 0x400ef0
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = (*(ptr) * 2 | *(ptr) >> 31) & 4294967294;
 return 1;
}


// Function: sub_400f08 at 0x400f08
void sub_400f08()
{
 call_by_value_ptr();
 return;
}


// Function: call_by_value_ptr at 0x400f10
unsigned long long call_by_value_ptr()
{
 return 11;
}


// Function: sub_400f18 at 0x400f18
void sub_400f18()
{
 param_array_decay();
 return;
}


// Function: param_array_decay at 0x400f20
unsigned long long param_array_decay()
{
 return 8;
}


// Function: sub_400f28 at 0x400f28
void sub_400f28()
{
 call_array_decay();
 return;
}


// Function: call_array_decay at 0x400f30
unsigned long long call_array_decay()
{
 return 8;
}


// Function: sub_400f38 at 0x400f38
void sub_400f38(unsigned long a0)
{
 param_string((char *)a0);
 return;
}


// Function: param_string at 0x400f40
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: call_string_param at 0x400f50
unsigned long long call_string_param()
{
 return 173;
}


// Function: sub_400f58 at 0x400f58
long long sub_400f58(unsigned long a0, unsigned long a1)
{
 unsigned long long v0; // x0

 v0 = param_ptr_array(a0, (unsigned int)a1);
 return param_ptr_array(a0, (unsigned int)a1);
}


// Function: param_ptr_array at 0x400f60
unsigned long long param_ptr_array(unsigned long a0, unsigned int i)
{
 unsigned long long v0; // x2
 unsigned long long v1; // x0
 unsigned long long v2; // x0
 unsigned long long v3; // x2
 unsigned long long v4; // x3
 unsigned long long v5; // x0

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v2 = v1;
 v3 = v0 + 1;
 v5 = v2 + *((char *)*((long long *)(a0 + v0 * 8)));
 v0 = v3;
 v1 = v5;
 } while ((unsigned int)v0 < i);
 return v2 + v4;
}


// Function: sub_400f9c at 0x400f9c
void sub_400f9c()
{
 call_ptr_array();
 return;
}


// Function: call_ptr_array at 0x400fa0
unsigned long long call_ptr_array()
{
 return 300;
}


// Function: sub_400fa8 at 0x400fa8
void sub_400fa8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
 param_varargs((unsigned int)a0, a1, a2, a3, a4, a5, a6, a7);
 return;
}


// Function: param_varargs at 0x400fb0
typedef struct struct_0 {
 char field_0[4];
 char padding_4[4];
 unsigned int field_8;
} struct_0;

extern char __stack_chk_guard;

unsigned long long param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
 unsigned long long v16; // x3
 struct_0 *ptr; // x1
 unsigned long long cur; // x0
 struct_0 *v26; // x2
 unsigned int v18; // w1
 unsigned int v19; // w5
 struct_0 *p; // x3
 unsigned int i; // w1
 struct_0 *addr; // x2
 char *v0; // [bp-0x80]
 char *v1; // [bp-0x68]
 char *v2; // [bp-0x60]
 char *v3; // [bp-0x58]
 unsigned int v4; // [bp-0x50]
 unsigned int result; // [bp-0x4c]
 unsigned long v6; // [bp-0x48]
 char v7; // [bp-0x40]
 unsigned long long v8; // [bp-0x38]
 unsigned long long v9; // [bp-0x30]
 unsigned long long v10; // [bp-0x28]
 unsigned long long v11; // [bp-0x20]
 unsigned long long v12; // [bp-0x18]
 unsigned long long v13; // [bp-0x10]
 unsigned long long v14; // [bp-0x8]
 char v15; // [bp+0x0]

 v0 = &v15;
 v8 = a1;
 v9 = a2;
 v10 = a3;
 v11 = a4;
 v16 = 4294967240;
 v12 = a5;
 v13 = a6;
 v14 = a7;
 v6 = *((long long *)&__stack_chk_guard);
 v3 = &v7;
 ptr = (struct_0 *)&v15;
 v1 = &v15;
 v2 = &v15;
 v4 = 4294967240;
 result = 0;
 if (a0 > 0)
 {
 cur = 0;
 v18 = 0;
 while (true)
 {
 if (!((char)(v16 >> 31) & 1))
 {
 i = v18 + 1;
 addr = (struct_0 *)&ptr->field_8;
 cur += (unsigned long long)ptr->field_0;
 if (a0 != i)
 {
 do
 {
 i += 1;
 v26 = (struct_0 *)&addr->field_8;
 cur += (unsigned long long)addr->field_0;
 addr = v26;
 } while (i < a0);
 }
 }
 else
 {
 v19 = (unsigned int)v16 + 8;
 if (v19 > 0)
 {
 p = ptr;
 ptr = (struct_0 *)&ptr->field_8;
 }
 else
 {
 p = (struct_0 *)&((char *)&v15)[v16 & 4294967295];
 }
 v18 += 1;
 cur += (unsigned long long)p->field_0;
 if (a0 == v18)
 break;
 v16 = v19;
 }
 }
 }
 else
 {
 cur = 0;
 }
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return cur;
}


// Function: call_varargs_param at 0x4010b0
unsigned long long call_varargs_param()
{
 unsigned long long v0; // x0

 v0 = param_varargs_constprop_0(4, 10, 20, 30, 40);
 return param_varargs_constprop_0(4, 10, 20, 30, 40);
}


// Function: sub_4010c8 at 0x4010c8
void sub_4010c8(unsigned long a0, unsigned long a1)
{
 param_func_ptr((int (*)(unsigned int))a0, (unsigned int)a1);
 return;
}


// Function: param_func_ptr at 0x4010d0
int param_func_ptr(int (*a0)(unsigned int), unsigned int a1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x4010f0
unsigned long long call_func_ptr_param()
{
 return 20;
}


// Function: sub_4010f8 at 0x4010f8
long long sub_4010f8(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = param_double_ptr((void **)a0, 0);
 return param_double_ptr((void **)a0, 0);
}


// Function: param_double_ptr at 0x401100
typedef struct struct_0 {
 char field_0[4];
 char padding_4[4];
 unsigned int field_8;
} struct_0;

unsigned long long param_double_ptr(void **ptr, unsigned int a1)
{
 if (!ptr)
 {
 return 4294967295;
 }
 else if (*(ptr))
 {
 *(unsigned int *)(((struct_0 *)(*ptr))->field_0) = a1;
 *ptr = NULL;
 return 1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_401128 at 0x401128
void sub_401128()
{
 call_double_ptr();
 return;
}


// Function: call_double_ptr at 0x401130
unsigned long long call_double_ptr()
{
 return 21;
}


// Function: sub_401138 at 0x401138
long long sub_401138(unsigned long a0, unsigned long a1)
{
 unsigned long long v0; // x0

 v0 = param_complex_cast((unsigned int *)a0, (unsigned int)a1);
 return param_complex_cast((unsigned int *)a0, (unsigned int)a1);
}


// Function: param_complex_cast at 0x401140
unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1)
{
 if (!a1)
 {
 return *(a0);
 }
 else if (a1 == 1)
 {
 return *(a0) + a0[1];
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_401168 at 0x401168
void sub_401168()
{
 call_complex_cast();
 return;
}


// Function: call_complex_cast at 0x401170
unsigned long long call_complex_cast()
{
 return 305419896;
}


// Function: sub_40117c at 0x40117c
void sub_40117c(unsigned long a0)
{
 param_struct_byval((unsigned int *)a0);
 return;
}


// Function: param_struct_byval at 0x401180
int param_struct_byval(unsigned int *a0)
{
 return *(a0) + a0[15];
}


// Function: call_struct_byval at 0x401190
unsigned long long call_struct_byval()
{
 return 15;
}


// Function: sub_401198 at 0x401198
void sub_401198(unsigned long a0, unsigned long a1)
{
 param_order_dep((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: param_order_dep at 0x4011a0
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_4011a8 at 0x4011a8
void sub_4011a8()
{
 call_order_dep();
 return;
}


// Function: call_order_dep at 0x4011b0
unsigned long long call_order_dep()
{
 return 4;
}


// Function: sub_4011b8 at 0x4011b8
void sub_4011b8()
{
 test_parameter_passing();
 return;
}


// Function: test_parameter_passing at 0x4011c0
extern char g_401760[];

int test_parameter_passing()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401760);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 8);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 __printf_chk(1, "PARAM-L2-03: %d\n", 300);
 __printf_chk(1, "PARAM-L2-04: %d\n", param_varargs_constprop_0(4, 10, 20, 30, 40) & 4294967295);
 __printf_chk(1, "PARAM-L3-01: %d\n", 20);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 __printf_chk(1, "PARAM-L3-04: %d\n", 15);
 return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


// Function: ret_basic_type at 0x4012d0
unsigned int ret_basic_type(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_4012d8 at 0x4012d8
void sub_4012d8()
{
 call_ret_basic();
 return;
}


// Function: call_ret_basic at 0x4012e0
unsigned long long call_ret_basic()
{
 return 42;
}


// Function: sub_4012e8 at 0x4012e8
void sub_4012e8(unsigned long a0)
{
 ret_pointer(a0);
 return;
}


// Function: ret_pointer at 0x4012f0
long long ret_pointer(unsigned long a0)
{
 return a0 + 4;
}


// Function: sub_4012f8 at 0x4012f8
void sub_4012f8()
{
 call_ret_pointer();
 return;
}


// Function: call_ret_pointer at 0x401300
unsigned long long call_ret_pointer()
{
 return 20;
}


// Function: sub_401308 at 0x401308
void sub_401308(unsigned long a0, unsigned long a1)
{
 ret_small_struct(a0, a1);
 return;
}


// Function: ret_small_struct at 0x401310
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
 return a0 & 4294967295 | a1 * 0x100000000;
}


// Function: sub_40131c at 0x40131c
void sub_40131c()
{
 call_ret_small_struct();
 return;
}


// Function: call_ret_small_struct at 0x401320
unsigned long long call_ret_small_struct()
{
 return 7;
}


// Function: sub_401328 at 0x401328
void sub_401328(unsigned long a0)
{
 ret_large_struct((unsigned int)a0);
 return;
}


// Function: ret_large_struct at 0x401330
extern char __stack_chk_guard;

long long ret_large_struct(unsigned int a0)
{
 unsigned long long ptr[4]; // x8
 char *v0; // [bp-0x60]
 int v1; // [bp-0x50]
 int v2; // [bp-0x40]
 int v3; // [bp-0x30]
 int v4; // [bp-0x20]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 v1 = a0 + 3;
 v2 = a0 + 55;
 v3 = a0 + 87;
 v4 = a0 + 118;
 ptr[0] = (unsigned long long)(unsigned int)v1;
 ptr[1] = (unsigned long long)(unsigned int)v2;
 ptr[2] = (unsigned long long)(unsigned int)v3;
 ptr[3] = (unsigned long long)(unsigned int)v4;
 if (v5 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return (long long)ptr[0];
}


// Function: call_ret_large_struct at 0x4013c4
unsigned long long call_ret_large_struct()
{
 return 215;
}


// Function: sub_4013cc at 0x4013cc
void sub_4013cc(unsigned long a0)
{
 ret_func_ptr((unsigned int)a0);
 return;
}


// Function: ret_func_ptr at 0x4013d0
long long ret_func_ptr(unsigned int a0)
{
 if (!a0)
 return (long long)(int (*)(unsigned int))func_a;
 return (long long)(unsigned int (*)(unsigned int))func_b;
}


// Function: sub_4013ec at 0x4013ec
void sub_4013ec()
{
 call_ret_func_ptr();
 return;
}


// Function: call_ret_func_ptr at 0x4013f0
unsigned long long call_ret_func_ptr()
{
 return 10;
}


// Function: sub_4013f8 at 0x4013f8
void sub_4013f8(unsigned long a0)
{
 ret_opaque_handle((unsigned int)a0);
 return;
}


// Function: ret_opaque_handle at 0x401400
extern char handle2_0;

long long ret_opaque_handle(unsigned int a0)
{
 if (a0)
 return (long long)&handle2_0;
 return (long long)"d";
}


// Function: sub_401418 at 0x401418
void sub_401418()
{
 call_ret_opaque();
 return;
}


// Function: call_ret_opaque at 0x401420
extern unsigned int handle1_1;

int call_ret_opaque()
{
 return handle1_1;
}


// Function: sub_40142c at 0x40142c
void sub_40142c(unsigned long a0, unsigned long a1, unsigned long a2)
{
 ret_complex_expr((unsigned int)a0, (unsigned int)a1, (unsigned int)a2);
 return;
}


// Function: ret_complex_expr at 0x401430
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a0 > a1)
 return __ROL__(a2, 1) & 4294967294;
 return a2 + 10;
}


// Function: call_ret_complex_expr at 0x401444
unsigned long long call_ret_complex_expr()
{
 return 40;
}


// Function: sub_40144c at 0x40144c
void sub_40144c(unsigned long a0)
{
 ret_multi_branch((unsigned int)a0);
 return;
}


// Function: ret_multi_branch at 0x401450
unsigned long long ret_multi_branch(unsigned int a0)
{
 if (a0 >= 3)
 return 4294967295;
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))
 return __ROL__((a0 + 1) * 5, 1) & 4294967294;
}


// Function: sub_401468 at 0x401468
void sub_401468()
{
 call_ret_multi_branch();
 return;
}


// Function: call_ret_multi_branch at 0x401470
unsigned long long call_ret_multi_branch()
{
 return 60;
}


// Function: sub_401478 at 0x401478
void sub_401478(unsigned long a0, unsigned long a1)
{
 ret_void((unsigned int)a0, (unsigned int *)a1);
 return;
}


// Function: ret_void at 0x401480
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return a0 * 3;
}


// Function: sub_40148c at 0x40148c
void sub_40148c()
{
 call_ret_void();
 return;
}


// Function: call_ret_void at 0x401490
unsigned long long call_ret_void()
{
 return 21;
}


// Function: sub_401498 at 0x401498
void sub_401498()
{
 test_return_values();
 return;
}


// Function: test_return_values at 0x4014a0
extern char g_401890[];
extern char g_4018b0[];
extern char g_4018d0[];
extern char g_4018f0[];
extern char g_401910[];
extern char g_401930[];
extern char g_401950[];
extern char g_401970[];
extern char g_401990[];
extern char g_4019b0[];
extern unsigned int handle1_1;

int test_return_values()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401890);
 __printf_chk(1, g_4018b0, 42);
 __printf_chk(1, g_4018d0, 20);
 __printf_chk(1, g_4018f0, 7);
 __printf_chk(1, g_401910, 215);
 __printf_chk(1, g_401930, 10);
 __printf_chk(1, g_401950, handle1_1);
 __printf_chk(1, g_401970, 40);
 __printf_chk(1, g_401990, 60);
 return __printf_chk(1, g_4019b0, 21);
}



/* CRT stub function _fini removed by preprocessor */


