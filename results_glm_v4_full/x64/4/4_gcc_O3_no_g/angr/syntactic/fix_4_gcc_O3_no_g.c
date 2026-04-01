// Angr Decompilation of 4_gcc_O3_no_g
// Platform: AMD64

#include <stddef.h>
#include <stdint.h>

typedef struct struct_0 {
 char field_0;
} struct_0;

typedef unsigned __int128 uint256_t;

/* Helper function for 128-bit/256-bit arithmetic */
static unsigned long long AddV(unsigned long long a, unsigned long long b) {
    return a + b;
}

/* Helper function for interleaving low values */
static unsigned long long InterleaveLOV(unsigned long long a, unsigned long long b) {
    return ((a & 0xFFFFFFFF) << 32) | (b & 0xFFFFFFFF);
}

/* CRT stub function _init removed by preprocessor */

struct_0 *g_403fe8 = NULL;

static unsigned long long * _init_internal()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_403fe8;
 if (g_403fe8)
 v1 = ((unsigned long long *(*)())g_403fe8)();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_403fa8;
static void (*g_403fb0)() = NULL;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_403fa8;
 if (g_403fb0)
 ((void (*)())g_403fb0)();
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

// Forward declarations to prevent implicit declaration conflicts
unsigned long long param_varargs_constprop_0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, ...);
unsigned long long varargs_func_constprop_0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, ...);
unsigned long long func_b(unsigned int a0);
unsigned long long call_fastcall(void);
unsigned long long call_thiscall(void);
unsigned long long call_arm_aapcs(void);
unsigned long long call_mips(void);
unsigned long long call_amd64_sysv(void);
unsigned long long call_ms_x64(void);
unsigned long long call_vectorcall(void);
unsigned long long mixed_conventions_test(void);
unsigned int varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5);
unsigned long long func_no_args(void);
unsigned long long func_struct_byptr(unsigned int *a0);
unsigned int param_by_value_int(unsigned int a0);
unsigned long long call_by_value_int(void);
unsigned long long param_by_value_ptr(unsigned int *ptr);
unsigned long long call_by_value_ptr(void);
unsigned long long param_array_decay(void);
unsigned long long call_array_decay(void);
unsigned long long call_string_param(void);
unsigned long long param_ptr_array(struct_0 **a0, unsigned int a1);
unsigned long long call_ptr_array(void);
int param_struct_byval(void);
unsigned long long call_struct_byval(void);
unsigned long long call_order_dep(void);
unsigned long long ret_basic_type(void);
unsigned long long call_ret_basic(void);
long long ret_pointer(unsigned long a0);
unsigned long long call_ret_pointer(void);
long long ret_small_struct(unsigned long a0, unsigned long a1);
unsigned long long* ret_large_struct(unsigned long long *ptr, unsigned int a1);
unsigned long long call_ret_small_struct(void);
unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1);
unsigned long long call_complex_cast(void);
unsigned int param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5);
unsigned long long call_varargs_param(void);
unsigned long long call_func_ptr_param(void);
unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1);
unsigned long long call_double_ptr(void);
unsigned long long* ret_large_struct(unsigned long long *ptr, unsigned int a1);
unsigned long long call_ret_large_struct(void);
long long ret_func_ptr(unsigned int a0);
unsigned long long call_ret_func_ptr(void);
long long ret_opaque_handle(unsigned int a0);
unsigned int call_ret_opaque(void);
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned long long call_ret_complex_expr(void);
unsigned long long ret_multi_branch(unsigned int a0);
unsigned long long call_ret_multi_branch(void);
unsigned long long ret_void(unsigned int a0, unsigned int *ptr);
unsigned long long call_ret_void(void);


// Function: varargs_func_cold at 0x4010c0
int varargs_func_cold()
{
 unsigned long long v2; // rdx
 unsigned int v3; // eax
 unsigned int i; // edi
 unsigned long v5; // fs
 unsigned long long v0; // [bp+0x8]
 char v1; // [bp+0x18]

 v0 = v2;
 do
 {
 v3 += 1;
 } while (i > v3);
 if (*((long long *)&v1) != *((long long *)(40 + v5)))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: param_varargs_cold at 0x4010db
int param_varargs_cold()
{
 unsigned long long v2; // rdx
 unsigned int v3; // eax
 unsigned int i; // edi
 unsigned long v5; // fs
 unsigned long long v0; // [bp+0x8]
 char v1; // [bp+0x18]

 v0 = v2;
 do
 {
 v3 += 1;
 } while (i > v3);
 if (*((long long *)&v1) != *((long long *)(40 + v5)))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: sub_4010f6 at 0x4010f6
void sub_4010f6()
{
 main();
 return;
}


// Function: main at 0x401100
int main()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi
 unsigned long long v3; // rdx
 unsigned long long v4; // rcx
 unsigned long long v5; // r8
 unsigned long long v6; // r9

 test_calling_conventions();
 test_parameter_passing(v1, v2, v3, v4, v5, v6);
 test_return_values(v1, v2, v3, v4, v5, v6);
 return 0;
}


// Function: sub_401124 at 0x401124
void sub_401124(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401155 at 0x401155
void sub_401155()
{
 __builtin_trap();
}














// Function: sub_401205 at 0x401205
void sub_401205()
{
}






// Function: sub_401219 at 0x401219
void sub_401219(unsigned long a0)
{
 func_a();
 return;
}


// Function: func_a at 0x401220
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: sub_401228 at 0x401228
void sub_401228(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 param_varargs_constprop_0(a0, a1, a2, a3, a4);
 return;
}


// Function: param_varargs_constprop_0 at 0x401230
unsigned long long param_varargs_constprop_0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, ...)
{
 unsigned long ptr; // fs
 unsigned int v0; // [bp-0x58]
 char *v1; // [bp-0x50]
 char *v2; // [bp-0x48]
 unsigned long v3; // [bp-0x40]
 char v4; // [bp-0x38]
 unsigned long v5; // [bp-0x30]
 unsigned long v6; // [bp-0x28]
 unsigned long v7; // [bp-0x20]
 unsigned long v8; // [bp-0x18]
 unsigned long v9; // [bp+0x8]

 v6 = a2;
 v5 = a1;
 v7 = a3;
 v8 = a4;
 v3 = *((long long *)(40 + ptr));
 v0 = 8;
 v1 = &v9;
 v2 = &v4;
 return (int)v6 + (int)v5 + (int)v7 + (int)v8;
}


// Function: sub_40129d at 0x40129d
void sub_40129d(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 varargs_func_constprop_0(a0, a1, a2, a3, a4, a5);
 return;
}


// Function: varargs_func_constprop_0 at 0x4012a0
unsigned long long varargs_func_constprop_0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, ...)
{
 unsigned long ptr; // fs
 unsigned int v0; // [bp-0x58]
 char *v1; // [bp-0x50]
 char *v2; // [bp-0x48]
 unsigned long v3; // [bp-0x40]
 char v4; // [bp-0x38]
 unsigned long v5; // [bp-0x30]
 unsigned long v6; // [bp-0x28]
 unsigned long v7; // [bp-0x20]
 unsigned long v8; // [bp-0x18]
 unsigned long v9; // [bp-0x10]
 unsigned long v10; // [bp+0x8]

 v6 = a2;
 v5 = a1;
 v7 = a3;
 v8 = a4;
 v9 = a5;
 v3 = *((long long *)(40 + ptr));
 v0 = 8;
 v1 = &v10;
 v2 = &v4;
 return (int)v6 + (int)v5 + (int)v7 + (int)v8 + (int)v9;
}


// Function: sub_401316 at 0x401316
void sub_401316(unsigned long a0)
{
 func_b(a0);
 return;
}


// Function: func_b at 0x401320
unsigned long long func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401328 at 0x401328
void sub_401328(unsigned long a0, unsigned long a1)
{
 cdecl_func();
 return;
}


// Function: cdecl_func at 0x401330
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_401338 at 0x401338
void sub_401338()
{
 call_cdecl();
 return;
}


// Function: call_cdecl at 0x401340
int call_cdecl()
{
 return 15;
}


// Function: sub_40134a at 0x40134a
void sub_40134a(unsigned long a0, unsigned long a1)
{
 stdcall_func();
 return;
}


// Function: stdcall_func at 0x401350
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: sub_40135a at 0x40135a
void sub_40135a()
{
 call_stdcall();
 return;
}


// Function: call_stdcall at 0x401360
int call_stdcall()
{
 return 50;
}


// Function: sub_40136a at 0x40136a
void sub_40136a(unsigned long a0, unsigned long a1, unsigned long a2)
{
 fastcall_func();
 return;
}


// Function: fastcall_func at 0x401370
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: sub_40137a at 0x40137a
void sub_40137a()
{
 call_fastcall();
 return;
}


// Function: call_fastcall at 0x401380
unsigned long long call_fastcall()
{
 return 6;
}


// Function: sub_40138a at 0x40138a
void sub_40138a()
{
 call_thiscall();
 return;
}


// Function: call_thiscall at 0x401390
unsigned long long call_thiscall()
{
 return 15;
}


// Function: sub_40139a at 0x40139a
void sub_40139a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 arm_aapcs_func();
 return;
}


// Function: arm_aapcs_func at 0x4013a0
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_4013af at 0x4013af
void sub_4013af()
{
 call_arm_aapcs();
 return;
}


// Function: call_arm_aapcs at 0x4013b0
unsigned long long call_arm_aapcs()
{
 return 15;
}


// Function: sub_4013ba at 0x4013ba
void sub_4013ba(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 mips_func();
 return;
}


// Function: mips_func at 0x4013c0
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: sub_4013cc at 0x4013cc
void sub_4013cc()
{
 call_mips();
 return;
}


// Function: call_mips at 0x4013d0
unsigned long long call_mips()
{
 return 100;
}


// Function: sub_4013da at 0x4013da
void sub_4013da(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 amd64_sysv_func();
 return;
}


// Function: amd64_sysv_func at 0x4013e0
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: sub_4013f2 at 0x4013f2
void sub_4013f2()
{
 call_amd64_sysv();
 return;
}


// Function: call_amd64_sysv at 0x401400
unsigned long long call_amd64_sysv()
{
 return 21;
}


// Function: sub_40140a at 0x40140a
void sub_40140a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 ms_x64_func();
 return;
}


// Function: ms_x64_func at 0x401410
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_40141f at 0x40141f
void sub_40141f()
{
 call_ms_x64();
 return;
}


// Function: call_ms_x64 at 0x401420
unsigned long long call_ms_x64()
{
 return 15;
}


// Function: sub_40142a at 0x40142a
void sub_40142a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 vectorcall_func();
 return;
}


// Function: vectorcall_func at 0x401430
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: sub_40143c at 0x40143c
void sub_40143c()
{
 call_vectorcall();
 return;
}


// Function: call_vectorcall at 0x401440
unsigned long long call_vectorcall()
{
 return 10;
}


// Function: sub_40144a at 0x40144a
void sub_40144a()
{
 mixed_conventions_test();
 return;
}


// Function: mixed_conventions_test at 0x401450
unsigned long long mixed_conventions_test()
{
 return 33;
}


// Function: sub_40145a at 0x40145a
void sub_40145a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 varargs_func((unsigned int)a0, a1, a2, a3, a4, a5);
 return;
}


// Function: varargs_func at 0x401460
unsigned int varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
 unsigned long ptr; // fs
 unsigned int i; // edx
 unsigned int v13; // eax
 unsigned int v0; // [bp-0x58]
 char *v1; // [bp-0x50]
 char *v2; // [bp-0x48]
 unsigned long v3; // [bp-0x40]
 char v4; // [bp-0x38]
 unsigned long long v5; // [bp-0x30]
 unsigned long long v6; // [bp-0x28]
 unsigned long long v7; // [bp-0x20]
 unsigned long long v8; // [bp-0x18]
 unsigned long long v9; // [bp-0x10]
 unsigned long v10; // [bp+0x8]

 v5 = a1;
 v6 = a2;
 v7 = a3;
 v8 = a4;
 v9 = a5;
 v3 = *((long long *)(40 + ptr));
 v0 = 8;
 v1 = &v10;
 v2 = &v4;
 if (a0 > 0)
 {
 i = 8;
 for (v13 = 0; i <= 47; i += 8)
 {
 v13 += 1;
 }
 if (a0 != v13 + 1)
 return varargs_func_cold();
 }
}


// Function: sub_4014f8 at 0x4014f8
void sub_4014f8()
{
}


// Function: sub_401514 at 0x401514
void sub_401514()
{
}


// Function: sub_401522 at 0x401522
void sub_401522()
{
 func_no_args();
 return;
}


// Function: func_no_args at 0x401530
unsigned long long func_no_args()
{
 return 42;
}


// Function: sub_40153a at 0x40153a
void sub_40153a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned int a6, unsigned int a7)
{
 func_many_args();
 return;
}


// Function: func_many_args at 0x401540
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: sub_40155a at 0x40155a
void sub_40155a(unsigned long a0, unsigned long a1, unsigned long a2)
{
 func_mixed_args();
 return;
}


// Function: func_mixed_args at 0x401560
int func_mixed_args(unsigned int a0, char *a1, unsigned long a2)
{
 int v1; // ymm1
 int v2; // ymm0
 unsigned long long v3; // ymm1
 unsigned long v4; // rbx

 v3 = v1 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2 & 340282366920938463463374607431768211455;
 v4 = a0;
 if (a1)
 {
 v3 = v3 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v2 & 18446744073709551615;
 v4 += strlen(a1);
 }
 return AddV(AddV(v4 & 4294967295, (unsigned long long)v3 & 340282366920938463463374607431768211455) & 4294967295, a2);
}


// Function: sub_4015b2 at 0x4015b2
int sub_4015b2()
{
 func_struct_byval();
 return;
}


// Function: func_struct_byval at 0x4015c0
int func_struct_byval()
{
 return;
}


// Function: sub_401623 at 0x401623
void sub_401623(unsigned long a0)
{
 func_struct_byptr((unsigned int *)a0);
 return;
}


// Function: func_struct_byptr at 0x401630
unsigned long long func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return a0[1] * *(a0);
}


// Function: sub_401646 at 0x401646
void sub_401646()
{
 test_calling_conventions();
 return;
}


// Function: test_calling_conventions at 0x401650
static const char g_402008[] = "Testing Calling Conventions:";
static const char g_402030[] = "CALL-L1-02: %d\n";
static const char g_402058[] = "CALL-L1-03: %d\n";
static const char g_402080[] = "CALL-L1-04: %d\n";
static const char g_4020a8[] = "CALL-L1-05: %d\n";
static const char g_4020d0[] = "CALL-L1-06: %d\n";
static const char g_402100[] = "CALL-L1-07: %d\n";

int test_calling_conventions()
{
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
 __printf_chk(1, &g_402030, varargs_func_constprop_0(5, 1, 2, 3, 4, 5) & 4294967295);
 __printf_chk(1, "CALL-L2-01: %d\n", 42);
 __printf_chk(1, "CALL-L2-02: %d\n", 36);
 __printf_chk(1, "CALL-L2-03: %d\n", 117);
 __printf_chk(1, "CALL-L2-04: %d\n", 136);
 return __printf_chk(1, "CALL-L2-05: %d\n", 50);
}


// Function: sub_40180c at 0x40180c
void sub_40180c(unsigned long a0)
{
 param_by_value_int((unsigned int)a0);
 return;
}


// Function: param_by_value_int at 0x401810
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401818 at 0x401818
void sub_401818()
{
 call_by_value_int();
 return;
}


// Function: call_by_value_int at 0x401820
unsigned long long call_by_value_int()
{
 return 15;
}


// Function: sub_40182a at 0x40182a
void sub_40182a(unsigned long a0)
{
 param_by_value_ptr((unsigned int *)a0);
 return;
}


// Function: param_by_value_ptr at 0x401830
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2;
 return 1;
}


// Function: sub_40183c at 0x40183c
void sub_40183c()
{
 call_by_value_ptr();
 return;
}


// Function: call_by_value_ptr at 0x401840
unsigned long long call_by_value_ptr()
{
 return 11;
}


// Function: sub_40184a at 0x40184a
void sub_40184a()
{
 param_array_decay();
 return;
}


// Function: param_array_decay at 0x401850
unsigned long long param_array_decay()
{
 return 8;
}


// Function: sub_40185a at 0x40185a
void sub_40185a()
{
 call_array_decay();
 return;
}


// Function: call_array_decay at 0x401860
unsigned long long call_array_decay()
{
 return 8;
}


// Function: sub_40186a at 0x40186a
void sub_40186a(unsigned long a0)
{
 param_string();
 return;
}


// Function: param_string at 0x401870
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: sub_40187e at 0x40187e
void sub_40187e()
{
 call_string_param();
 return;
}


// Function: call_string_param at 0x401880
unsigned long long call_string_param()
{
 return 173;
}


// Function: sub_40188a at 0x40188a
void sub_40188a(unsigned long a0, unsigned long a1)
{
 param_ptr_array((struct_0 **)a0, (unsigned int)a1);
 return;
}


// Function: param_ptr_array at 0x401890

unsigned long long param_ptr_array(struct_0 **a0, unsigned int a1)
{
 unsigned long long v1; // rax
 struct_0 **i; // rdi
 unsigned long long v3; // rax
 struct_0 **v4; // rdi
 unsigned long v5; // rdx
 unsigned long long v6; // rax

 if (a1 <= 0)
 return 0;
 v1 = 0;
 i = a0;
 do
 {
 v3 = v1;
 v4 = i + 1;
 v6 = v3 + (*i)->field_0;
 v1 = v6;
 i = v4;
 } while (&a0[1 + a1 + 1] != i);
 return v3 + v5;
}


// Function: sub_4018ba at 0x4018ba
void sub_4018ba()
{
}


// Function: sub_4018c3 at 0x4018c3
void sub_4018c3()
{
 call_ptr_array();
 return;
}


// Function: call_ptr_array at 0x4018d0
unsigned long long call_ptr_array()
{
 return 300;
}


// Function: sub_4018da at 0x4018da
void sub_4018da(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 param_varargs((unsigned int)a0, a1, a2, a3, a4, a5);
 return;
}


// Function: param_varargs at 0x4018e0
unsigned int param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
 unsigned long ptr; // fs
 unsigned int i; // edx
 unsigned int v13; // eax
 unsigned int v0; // [bp-0x58]
 char *v1; // [bp-0x50]
 char *v2; // [bp-0x48]
 unsigned long v3; // [bp-0x40]
 char v4; // [bp-0x38]
 unsigned long long v5; // [bp-0x30]
 unsigned long long v6; // [bp-0x28]
 unsigned long long v7; // [bp-0x20]
 unsigned long long v8; // [bp-0x18]
 unsigned long long v9; // [bp-0x10]
 unsigned long v10; // [bp+0x8]

 v5 = a1;
 v6 = a2;
 v7 = a3;
 v8 = a4;
 v9 = a5;
 v3 = *((long long *)(40 + ptr));
 v0 = 8;
 v1 = &v10;
 v2 = &v4;
 if (a0 > 0)
 {
 i = 8;
 for (v13 = 0; i <= 47; i += 8)
 {
 v13 += 1;
 }
 if (a0 != v13 + 1)
 return param_varargs_cold();
 }
}


// Function: sub_401978 at 0x401978
void sub_401978()
{
}


// Function: sub_401994 at 0x401994
void sub_401994()
{
}


// Function: sub_4019a2 at 0x4019a2
void sub_4019a2()
{
 call_varargs_param();
 return;
}


// Function: call_varargs_param at 0x4019b0
unsigned long long call_varargs_param()
{
 return param_varargs_constprop_0(4, 10, 20, 30, 40);
}


// Function: sub_4019d5 at 0x4019d5
void sub_4019d5(unsigned long a0, unsigned long a1)
{
 param_func_ptr();
 return;
}


// Function: param_func_ptr at 0x4019e0
int param_func_ptr(int (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: sub_4019f8 at 0x4019f8
void sub_4019f8()
{
 call_func_ptr_param();
 return;
}


// Function: call_func_ptr_param at 0x401a00
unsigned long long call_func_ptr_param()
{
 return 20;
}


// Function: sub_401a0a at 0x401a0a
void sub_401a0a(unsigned long a0, unsigned long a1)
{
 param_double_ptr((struct_0 **)a0, (unsigned int)a1);
 return;
}


// Function: param_double_ptr at 0x401a10

unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 if (!ptr)
 {
 return 4294967295;
 }
 else if (*(ptr))
 {
 (*ptr)->field_0 = a1;
 *(ptr) = NULL;
 return 1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_401a36 at 0x401a36
void sub_401a36()
{
 call_double_ptr();
 return;
}


// Function: call_double_ptr at 0x401a40
unsigned long long call_double_ptr()
{
 return 21;
}


// Function: sub_401a4a at 0x401a4a
void sub_401a4a(unsigned long a0, unsigned long a1)
{
 param_complex_cast((unsigned int *)a0, (unsigned int)a1);
 return;
}


// Function: param_complex_cast at 0x401a50
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


// Function: sub_401a63 at 0x401a63
void sub_401a63()
{
}


// Function: sub_401a6b at 0x401a6b
void sub_401a6b()
{
}


// Function: sub_401a76 at 0x401a76
void sub_401a76()
{
 call_complex_cast();
 return;
}


// Function: call_complex_cast at 0x401a80
unsigned long long call_complex_cast()
{
 return 305419896;
}


// Function: sub_401a8a at 0x401a8a
int sub_401a8a()
{
 param_struct_byval();
 return;
}


// Function: param_struct_byval at 0x401a90
int param_struct_byval()
{
 return 0;
}


// Function: sub_401a9d at 0x401a9d
void sub_401a9d()
{
 call_struct_byval();
 return;
}


// Function: call_struct_byval at 0x401aa0
unsigned long long call_struct_byval()
{
 return 15;
}


// Function: sub_401aaa at 0x401aaa
void sub_401aaa(unsigned long a0, unsigned long a1)
{
 param_order_dep();
 return;
}


// Function: param_order_dep at 0x401ab0
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_401ab8 at 0x401ab8
void sub_401ab8()
{
 call_order_dep();
 return;
}


// Function: call_order_dep at 0x401ac0
unsigned long long call_order_dep()
{
 return 4;
}


// Function: sub_401aca at 0x401aca
void sub_401aca()
{
 test_parameter_passing();
 return;
}


// Function: test_parameter_passing at 0x401ad0

static const char g_402130[] = "Testing Parameter Passing:";

int test_parameter_passing()
{
 puts(&g_402130);
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


// Function: sub_401c0e at 0x401c0e
void sub_401c0e(unsigned long a0)
{
 ret_basic_type();
 return;
}


// Function: ret_basic_type at 0x401c10
unsigned long long ret_basic_type()
{
 return 42;
}


// Function: sub_401c18 at 0x401c18
void sub_401c18()
{
 call_ret_basic();
 return;
}


// Function: call_ret_basic at 0x401c20
unsigned long long call_ret_basic()
{
 return 42;
}


// Function: sub_401c2a at 0x401c2a
void sub_401c2a(unsigned long a0)
{
 ret_pointer(a0);
 return;
}


// Function: ret_pointer at 0x401c30
long long ret_pointer(unsigned long a0)
{
 return a0 + 4;
}


// Function: sub_401c39 at 0x401c39
void sub_401c39()
{
 call_ret_pointer();
 return;
}


// Function: call_ret_pointer at 0x401c40
unsigned long long call_ret_pointer()
{
 return 20;
}


// Function: sub_401c4a at 0x401c4a
void sub_401c4a(unsigned long a0, unsigned long a1)
{
 ret_small_struct(a0, a1);
 return;
}


// Function: ret_small_struct at 0x401c50
long long ret_small_struct(unsigned long a0, unsigned long a1)
{
 return InterleaveLOV(a1, a0);
}


// Function: sub_401c66 at 0x401c66
void sub_401c66()
{
 call_ret_small_struct();
 return;
}


// Function: call_ret_small_struct at 0x401c70
unsigned long long call_ret_small_struct()
{
 return 7;
}


// Function: sub_401c7a at 0x401c7a
void sub_401c7a(unsigned long a0, unsigned long a1)
{
 unsigned long long buffer[4];
 ret_large_struct(buffer, (unsigned int)a0);
 return;
}


// Function: ret_large_struct at 0x401c80
unsigned long long* ret_large_struct(unsigned long long *ptr, unsigned int a1)
{
 unsigned long p; // fs
 int v3; // xmm0
 unsigned long v0; // [bp-0x10]

 v0 = *((long long *)(40 + p));
 v3 = ((unsigned long long)a1 << 48) | ((unsigned long long)a1 << 32) | ((unsigned long long)a1 << 16) | a1;
 *((unsigned long long*)ptr) = AddV(0x3000000020000000100000000, v3);
 *((unsigned long long*)&ptr[1]) = AddV(554597137710530827618539798532, v3);
 *((unsigned long long*)&ptr[2]) = AddV(871509787841375154304733675528, v3);
 *((unsigned long long*)&ptr[3]) = AddV(v3, 1188422437972219480990927552524);
 return ptr;
}


// Function: sub_401cf9 at 0x401cf9
void sub_401cf9()
{
 call_ret_large_struct();
 return;
}


// Function: call_ret_large_struct at 0x401d00
unsigned long long call_ret_large_struct()
{
 return 215;
}


// Function: sub_401d0a at 0x401d0a
void sub_401d0a(unsigned long a0)
{
 ret_func_ptr((unsigned int)a0);
 return;
}


// Function: ret_func_ptr at 0x401d10
long long ret_func_ptr(unsigned int a0)
{
 if (a0)
 return func_b;
 return func_a;
}


// Function: sub_401d29 at 0x401d29
void sub_401d29()
{
 call_ret_func_ptr();
 return;
}


// Function: call_ret_func_ptr at 0x401d30
unsigned long long call_ret_func_ptr()
{
 return 10;
}


// Function: sub_401d3a at 0x401d3a
void sub_401d3a(unsigned long a0)
{
 ret_opaque_handle((unsigned int)a0);
 return;
}


// Function: ret_opaque_handle at 0x401d40
char handle2_0 = 'x';

long long ret_opaque_handle(unsigned int a0)
{
 if (!a0)
 return "d";
 return &handle2_0;
}


// Function: sub_401d59 at 0x401d59
void sub_401d59()
{
 call_ret_opaque();
 return;
}


// Function: call_ret_opaque at 0x401d60
unsigned int handle1_1 = 100;

unsigned int call_ret_opaque()
{
 return handle1_1;
}


// Function: sub_401d6b at 0x401d6b
void sub_401d6b(unsigned long a0, unsigned long a1, unsigned long a2)
{
 ret_complex_expr((unsigned int)a0, (unsigned int)a1, (unsigned int)a2);
 return;
}


// Function: ret_complex_expr at 0x401d70
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a0 <= a1 ? a2 + 10 : a2 * 2);
}


// Function: call_ret_complex_expr at 0x401d80
unsigned long long call_ret_complex_expr()
{
 return 40;
}


// Function: sub_401d8a at 0x401d8a
void sub_401d8a(unsigned long a0)
{
 ret_multi_branch((unsigned int)a0);
 return;
}


// Function: ret_multi_branch at 0x401d90
unsigned long long ret_multi_branch(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a0 <= 2)
 v1 = (a0 * 5 + 5) * 2;
 return v1;
}


// Function: sub_401da5 at 0x401da5
void sub_401da5()
{
 call_ret_multi_branch();
 return;
}


// Function: call_ret_multi_branch at 0x401db0
unsigned long long call_ret_multi_branch()
{
 return 60;
}


// Function: sub_401dba at 0x401dba
void sub_401dba(unsigned long a0, unsigned long a1)
{
 unsigned int temp;
 ret_void((unsigned int)a0, &temp);
 return;
}


// Function: ret_void at 0x401dc0
unsigned long long ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return a0 * 3;
}


// Function: sub_401dca at 0x401dca
void sub_401dca()
{
 call_ret_void();
 return;
}


// Function: call_ret_void at 0x401dd0
unsigned long long call_ret_void()
{
 return 21;
}


// Function: sub_401dda at 0x401dda
void sub_401dda()
{
 test_return_values();
 return;
}


// Function: test_return_values at 0x401de0

static const char g_4022ac[] = "Testing Return Values:";
static const char g_4022ca[] = "RET-L1-02: %d\n";
static const char g_4022e6[] = "RET-L1-03: %d\n";
static const char g_402302[] = "RET-L1-04: %d\n";
static const char g_40231d[] = "RET-L1-05: %d\n";
static const char g_40233a[] = "RET-L1-07: %d\n";
static const char g_402356[] = "RET-L1-08: %d\n";
static const char g_402373[] = "RET-L1-09: %d\n";
static const char g_40238f[] = "placeholder";
static const char g_4023ab[] = "placeholder";

int test_return_values()
{
 puts(&g_4022ac);
 __printf_chk(1, "RET-L1-01: %d\n", 42);
 __printf_chk(1, "RET-L1-02: %d\n", 20);
 __printf_chk(1, "RET-L1-03: %d\n", 7);
 __printf_chk(1, "RET-L1-04: %d\n", 215);
 __printf_chk(1, "RET-L1-05: %d\n", 10);
 __printf_chk(1, "RET-L1-06: %d\n", handle1_1);
 __printf_chk(1, "RET-L1-07: %d\n", 40);
 __printf_chk(1, "RET-L1-08: %d\n", 60);
 return __printf_chk(1, "RET-L1-09: %d\n", 21);
}



/* CRT stub function _fini removed by preprocessor */


