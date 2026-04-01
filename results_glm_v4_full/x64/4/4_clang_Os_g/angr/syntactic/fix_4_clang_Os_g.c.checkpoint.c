// Angr Decompilation of 4_clang_Os_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <inttypes.h>
#include <stdarg.h>

/* Helper macros for decompiled code */
#define AddV(a, b) ((a) + (b))
#define SubV(a, b) ((a) - (b))
#define CONCAT(a, b) (((unsigned long long)(a) << 32) | (unsigned long long)(b))
#if defined(__SIZEOF_INT128__)
typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
#define CONCAT4(a, b, c, d) ((unsigned long long)(((uint128_t)(a) << 96) | ((uint128_t)(b) << 64) | ((uint128_t)(c) << 32) | (uint128_t)(d)))
#else
typedef struct { uint64_t lo, hi; } int128_t;
typedef struct { uint64_t lo, hi; } uint128_t;
#define CONCAT4(a, b, c, d) ((((unsigned long long)(a) << 32) | (unsigned long long)(b)) << 32 | ((unsigned long long)(c) << 32) | (unsigned long long)(d))
#endif

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

/* Forward declarations for CRT stub functions */
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

typedef unsigned long long *(*init_func_ptr)(void);

/* Global definitions */
extern init_func_ptr g_403fe8;
init_func_ptr g_403fe8 = NULL;

/* Global string variables */
extern char g_402120[];
extern char g_402148[];
extern char g_40216a[];
extern char g_402191[];
extern char g_4021b9[];
extern char g_4021e5[];
extern char g_4022cd[];
extern char g_4022e9[];
extern char g_402305[];
extern char g_402320[];
extern char g_40233d[];
extern char g_402359[];
extern char g_402376[];
extern char g_402392[];
extern char g_4023ae[];
extern char g_4023ca[];
extern char g_4023eb[];
extern char g_40240c[];
extern unsigned long long g_404008;
extern unsigned long long g_404010;
extern char ret_opaque_handle_handle2;
extern unsigned int ret_opaque_handle_handle1;

/* Define placeholder values for extern variables */
char g_402120[32] = "CALL-L2-01: %d\n";
char g_402148[32] = "CALL-L2-02: %d\n";
char g_40216a[32] = "CALL-L2-03: %d\n";
char g_402191[32] = "CALL-L2-04: %d\n";
char g_4021b9[32] = "CALL-L2-05: %d\n";
char g_4021e5[32] = "CALL-L2-06: %d\n";
char g_4022cd[32] = "RET-L1-01: %d\n";
char g_4022e9[32] = "RET-L1-02: %d\n";
char g_402305[32] = "RET-L1-03: %d\n";
char g_402320[32] = "RET-L1-04: %d\n";
char g_40233d[32] = "RET-L1-05: %d\n";
char g_402359[32] = "RET-L1-06: %d\n";
char g_402376[32] = "RET-L1-07: %d\n";
char g_402392[32] = "RET-L1-08: %d\n";
char g_4023ae[32] = "RET-L1-09: %d\n";
char g_4023ca[32] = "CALLING CONVENTIONS TEST\n";
char g_4023eb[32] = "PARAMETER PASSING TEST\n";
char g_40240c[32] = "RETURN VALUES TEST\n";
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;
char ret_opaque_handle_handle2 = 'x';
unsigned int ret_opaque_handle_handle1 = 100;

/* CRT stub function _init removed by preprocessor */

// Function: sub_401020 at 0x401020
extern unsigned long long g_404008;
extern unsigned long long g_404010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 /* goto g_404010; - computed goto not supported, stub function */
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 /* char *v1; - uninitialized, stub function */
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401095 at 0x401095
void sub_401095()
{
}


// Function: sub_401096 at 0x401096
void sub_401096()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones(void) {}



// Function: sub_4010c9 at 0x4010c9
void sub_4010c9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */
void register_tm_clones(void) {}



// Function: sub_401109 at 0x401109
void sub_401109()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
void __do_global_dtors_aux(void) {}



// Function: sub_401145 at 0x401145
void sub_401145()
{
}


// Function: sub_401149 at 0x401149
void sub_401149()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy(void) {}



// Forward declarations for functions used before definition
int cdecl_func(unsigned int a0, unsigned int a1);
int func_a(unsigned int a0);
unsigned int func_b(unsigned int a0);

// Function: sub_401159 at 0x401159
void sub_401159(unsigned long a0, unsigned long a1)
{
 cdecl_func(0, 0);
 return;
}
int cdecl_func(unsigned int a0, unsigned int a1);
int func_a(unsigned int a0);
unsigned int func_b(unsigned int a0);

// Function: cdecl_func at 0x40115c
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_cdecl at 0x401160
unsigned long long call_cdecl()
{
 return 15;
}


// Function: stdcall_func at 0x401166
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: call_stdcall at 0x40116c
unsigned long long call_stdcall()
{
 return 50;
}


// Function: fastcall_func at 0x401172
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: call_fastcall at 0x401178
unsigned long long call_fastcall()
{
 return 6;
}


// Function: call_thiscall at 0x40117e
unsigned long long call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x401184
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x40118f
unsigned long long call_arm_aapcs()
{
 return 15;
}


// Function: mips_func at 0x401195
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x40119d
unsigned long long call_mips()
{
 return 100;
}


// Function: amd64_sysv_func at 0x4011a3
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x4011b1
unsigned long long call_amd64_sysv()
{
 return 21;
}


// Function: ms_x64_func at 0x4011b7
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x4011c2
unsigned long long call_ms_x64()
{
 return 15;
}


// Function: vectorcall_func at 0x4011c8
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x4011d0
unsigned long long call_vectorcall()
{
 return 10;
}


// Function: mixed_conventions_test at 0x4011d6
unsigned long long mixed_conventions_test()
{
 return 33;
}


// Function: varargs_func at 0x4011dc
unsigned long long varargs_func(unsigned int a0)
{
 unsigned long long v33; // rax
 unsigned long v34; // rdx
 unsigned int i; // edi
 char *ptr; // rsi
 unsigned int v37; // edi
 unsigned long long v0; // [bp-0xd8], Other Possible Types: unsigned long long
 unsigned long long v1; // [bp-0xd8]
 char v2[4]; // [bp-0xd0]
 char *v3; // [bp-0xc8]
 char v4; // [bp-0xb8]
 unsigned long v18; // [bp+0x8]

 /* Initialize local variables - stub implementation */
 v3 = &v4;
 *((unsigned long **)&v2) = &v18;
 v0 = 0;
 v1 = 0;
 if (a0 <= 0)
 return 0;
 v33 = 0;
 v34 = v1;
 do
 {
 i = a0;
 if ((unsigned int)v34 <= 40)
 {
 ptr = &v3[v34 & 0xffffffffu];
 v34 = (unsigned int)v34 + 8;
 v0 = v34;
 }
 else
 {
 ptr = v2;
 *((unsigned long *)&v2) = (unsigned long)(ptr + 2);
 }
 v33 = (unsigned long long)((unsigned int)v33 + *(unsigned int *)ptr);
 v37 = i - 1;
 a0 = v37;
 } while (i != 1);
 return v33;
}


// Function: func_no_args at 0x401281
unsigned long long func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x401287
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x40129d
int func_mixed_args(unsigned long a0, char *a1, unsigned long a2)
{
 unsigned long long len; // rax
 unsigned long long v0; // [bp-0x18]

 v0 = 0;
 if (a1)
 {
 v0 = 0;
 len = strlen(a1);
 }
 else
 {
 len = 0;
 }
 return (unsigned int)(AddV(0ull | a2, AddV(0ull | len + (a0 & 0xffffffffu) & 0xffffffffu, v0 & 0xffffffffffffffffull)));
}


// Function: func_struct_byval at 0x4012de
long long func_struct_byval()
{
 unsigned long long v1; // xmm0
 unsigned long long idx; // rcx
 unsigned long v0; // [bp+0x8]

 v1 = 0;
 idx = 0;
 do
 {
 v1 = AddV(v1, *((int128_t *)&(&v0)[idx]));
 idx += 2;
 } while (idx != 16);
 return AddV((CONCAT4((unsigned int)(v1 >> 96), (unsigned int)(v1 >> 64), (unsigned int)(v1 >> 96), (unsigned int)(v1 >> 64)) & 18446744073709551615), v1);
}


// Function: func_struct_byptr at 0x40130b
unsigned long long func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0) * a0[1];
}


// Function: test_calling_conventions at 0x40131d
extern char g_402120[];
extern char g_402148[];
extern char g_40216a[];
extern char g_402191[];
extern char g_4021b9[];
extern char g_4021e5[];
extern char g_4023ca[];

int test_calling_conventions()
{
 unsigned long long index; // rbx
 unsigned long long v4; // xmm0
 unsigned long long v5; // xmm0
 unsigned long long idx; // rax
 char v0; // [bp-0x88]

 puts(&g_4023ca);
 index = 0;
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
 printf(&g_402120, varargs_func(5) & 4294967295ULL);
 printf(&g_402148, 42);
 printf(&g_40216a, 36);
 printf(&g_402191, 117);
 v4 = 0;
 do
 {
 *((unsigned long long *)&(&v0)[8 * index]) = 1;
 index += 2;
 v4 += 0;
 } while (index != 16);
 v5 = 0;
 idx = 0;
 do
 {
 v5 = AddV(v5, *((int128_t *)&(&v0)[8 * idx]));
 idx += 2;
 } while (idx != 16);
 printf(&g_4021b9, (unsigned long long)(AddV((CONCAT4((unsigned int)(v5 >> 96), (unsigned int)(v5 >> 64), (unsigned int)(v5 >> 96), (unsigned int)(v5 >> 64)) & 18446744073709551615ULL), v5)));
 return printf(&g_4021e5, 50);
}


// Function: param_by_value_int at 0x4014e0
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_by_value_int at 0x4014e4
unsigned long long call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x4014ea
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2;
 return 1;
}


// Function: call_by_value_ptr at 0x4014f2
unsigned long long call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x4014f8
unsigned long long param_array_decay()
{
 return 8;
}


// Function: call_array_decay at 0x4014fe
unsigned long long call_array_decay()
{
 return 8;
}


// Function: param_string at 0x401504
int param_string(char *a0)
{
 return a0[1] + *(a0);
}


// Function: call_string_param at 0x40150e
unsigned long long call_string_param()
{
 return 173;
}


// Function: param_ptr_array at 0x401514
unsigned long long param_ptr_array(unsigned long a0, unsigned long a1)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax
 unsigned long long v3; // rax
 unsigned long v4; // rsi
 unsigned long long v5; // rax

 if ((unsigned int)a1 <= 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v3 = v2;
 v5 = v3 + *((char *)*((long long *)(a0 + i * 8)));
 i += 1;
 v2 = v5;
 } while (a1 != i);
 return v3 + v4;
}


// Function: call_ptr_array at 0x401533
unsigned long long call_ptr_array()
{
 return 300;
}


// Function: param_varargs at 0x401539
unsigned long long param_varargs(unsigned int a0)
{
 unsigned long long v33; // rax
 unsigned long v34; // rdx
 unsigned int i; // edi
 char *ptr; // rsi
 unsigned int v37; // edi
 unsigned long long v0; // [bp-0xd8], Other Possible Types: unsigned long long
 unsigned long long v1; // [bp-0xd8]
 char v2[4]; // [bp-0xd0]
 char *v3; // [bp-0xc8]
 char v4; // [bp-0xb8]
 unsigned long v18; // [bp+0x8]

 /* Initialize local variables - stub implementation */
 v3 = &v4;
 *((unsigned long **)&v2) = &v18;
 v0 = CONCAT4(3, 2, 0, 0);
 v1 = 0;
 if (a0 <= 0)
 return 0;
 v33 = 0;
 v34 = v1;
 do
 {
 i = a0;
 if ((unsigned int)v34 <= 40)
 {
 ptr = &v3[v34 & 0xffffffffu];
 v34 = (unsigned int)v34 + 8;
 v0 = v34;
 }
 else
 {
 ptr = v2;
 *((unsigned long *)&v2) = (unsigned long)(ptr + 2);
 }
 v33 = (unsigned long long)((unsigned int)v33 + *(unsigned int *)ptr);
 v37 = i - 1;
 a0 = v37;
 } while (i != 1);
 return v33;
}


// Function: call_varargs_param at 0x4015de
unsigned long long call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 return param_varargs(4);
}


// Function: param_func_ptr at 0x4015ff
typedef int (*func_ptr_t)(unsigned int);

int param_func_ptr(func_ptr_t a0, unsigned int a1)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x40160c
unsigned long long call_func_ptr_param()
{
 return 20;
}


// Function: param_double_ptr at 0x401612

unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (ptr && *(ptr))
 {
 (*ptr)->field_0 = a1;
 *ptr = NULL;
 v1 = 1;
 }
 return v1;
}


// Function: call_double_ptr at 0x401633
unsigned long long call_double_ptr()
{
 return 21;
}


// Function: param_complex_cast at 0x401639
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


// Function: call_complex_cast at 0x401650
unsigned long long call_complex_cast()
{
 return 305419896;
}


// Function: param_struct_byval at 0x401656
int param_struct_byval()
{
 return 0;
}


// Function: call_struct_byval at 0x40165f
int call_struct_byval()
{
 int v0; // [bp-0x48]
 char v1; // [bp-0xc]

 v0 = (unsigned long long)CONCAT4(3, 2, 1, 0);
 return *((int *)&v1) + (int)v0;
}


// Function: param_order_dep at 0x401680
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: call_order_dep at 0x401684
unsigned long long call_order_dep()
{
 return 3;
}


// Function: test_parameter_passing at 0x40168a

int test_parameter_passing()
{
 int v0; // [bp-0x48]
 unsigned long long v1; // [bp-0x18]

 puts(&g_4023eb);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 8);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 printf("PARAM-L2-04: %d\n", param_varargs(4) & 4294967295);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 v0 = (unsigned long long)CONCAT4(3, 2, 1, 0);
 v1 = (unsigned long long)CONCAT4(0x7d, 0x6b, 0x59, 0x47);
 printf("PARAM-L3-04: %d\n", *((int *)((char *)&v1 + 12)) + (int)v0);
 return printf("PARAM-L3-05: %d\n", 3);
}


// Function: ret_basic_type at 0x4017a6
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x4017aa
unsigned long long call_ret_basic()
{
 return 42;
}


// Function: ret_pointer at 0x4017b0
long long ret_pointer(unsigned long a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x4017b5
unsigned long long call_ret_pointer()
{
 return 20;
}


// Function: ret_small_struct at 0x4017bb
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
 return a0 & 4294967295 | a1 * 0x100000000;
}


// Function: call_ret_small_struct at 0x4017c5
unsigned long long call_ret_small_struct()
{
 return 7;
}


// Function: ret_large_struct at 0x4017cb
long long ret_large_struct(unsigned long ptr, unsigned int a1)
{
 unsigned long long v1; // xmm1
 unsigned long long idx; // rcx

 v1 = (unsigned long long)CONCAT4(3, 2, 1, 0);
 idx = 0;
 do
 {
 *((unsigned long long *)(ptr + idx * 4)) = AddV(v1, CONCAT4(a1, a1, a1, (unsigned long long)a1));
 idx += 4;
 v1 = AddV(v1, (unsigned long long)CONCAT4(0x12, 0, 0, 0));
 } while (idx != 16);
 return ptr;
}


// Function: call_ret_large_struct at 0x401805
int call_ret_large_struct()
{
 int v0; // [bp-0x48]
 char v1; // [bp-0xc]

 v0 = (unsigned long long)CONCAT4(0x70, 0x5e, 0x4c, 0x3a);
 return *((int *)&v1) + (int)v0;
}


// Function: func_a at 0x401826
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x40182a
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: ret_func_ptr at 0x40182e
long long ret_func_ptr(unsigned int a0)
{
 if (a0)
 return (long long)(uintptr_t)func_b;
 return (long long)(uintptr_t)func_a;
}


// Function: call_ret_func_ptr at 0x401843
unsigned long long call_ret_func_ptr()
{
 return 10;
}


// Function: ret_opaque_handle at 0x401849
extern char ret_opaque_handle_handle2;

long long ret_opaque_handle(unsigned int a0)
{
 if (a0)
 return (long long)(uintptr_t)&ret_opaque_handle_handle2;
 return (long long)(uintptr_t)"d";
}


// Function: call_ret_opaque at 0x40185e
extern unsigned int ret_opaque_handle_handle1;

int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


// Function: ret_complex_expr at 0x401865
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a1 < a0 ? a2 * 2 : a2 + 10);
}


// Function: call_ret_complex_expr at 0x401871
unsigned long long call_ret_complex_expr()
{
 return 40;
}


// Function: ret_multi_branch at 0x401877
unsigned long long ret_multi_branch(unsigned int a0)
{
 return (a0 < 3 ? a0 * 10 + 10 : 4294967295);
}


// Function: call_ret_multi_branch at 0x40188a
unsigned long long call_ret_multi_branch()
{
 return 60;
}


// Function: ret_void at 0x401890
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return a0 * 3;
}


// Function: call_ret_void at 0x401896
unsigned long long call_ret_void()
{
 return 21;
}


// Function: test_return_values at 0x40189c

int test_return_values()
{
 int v0; // [bp-0x48]
 unsigned long long v1; // [bp-0x18]

 puts(&g_40240c);
 printf(&g_4022cd, 42);
 printf(&g_4022e9, 20);
 printf(&g_402305, 7);
 v0 = (unsigned long long)CONCAT4(0x70, 0x5e, 0x4c, 0x3a);
 v1 = (unsigned long long)CONCAT4(0x7e, 0x6a, 0x56, 0x42);
 printf(&g_402320, *((int *)((char *)&v1 + 12)) + (int)v0);
 printf(&g_40233d, 10);
 printf(&g_402359, ret_opaque_handle_handle1);
 printf(&g_402376, 40);
 printf(&g_402392, 60);
 return printf(&g_4023ae, 21);
}


// Function: main at 0x401975
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


