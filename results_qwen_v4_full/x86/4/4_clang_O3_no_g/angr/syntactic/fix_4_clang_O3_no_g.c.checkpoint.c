// Angr Decompilation of 4_clang_O3_no_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

// Forward declarations for CRT stub functions
unsigned int *deregister_tm_clones(void);
unsigned int register_tm_clones(void);
void frame_dummy(void);
int __do_global_ctors_aux(void);
unsigned int *__do_global_dtors_aux(void);

// Stub implementations for CRT functions
unsigned int *deregister_tm_clones(void) { return NULL; }
void frame_dummy(void) { return; }

// Forward declarations for thunk functions
int __x86_get_pc_thunk_dx(void);
int __x86_get_pc_thunk_di(int a0);

// Forward declarations for other functions
typedef int (*func_ptr_t)(void);
int cdecl_func(unsigned int a0, unsigned int a1);
int stdcall_func(unsigned int a0, unsigned int a1);
int fastcall_func(unsigned int a0);
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int func_no_args(void);
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7);

// Forward declarations for called functions
unsigned int call_cdecl(unsigned int a0, unsigned int a1);
unsigned int call_stdcall(unsigned int a0, unsigned int a1);
unsigned int call_fastcall(unsigned int a0);
unsigned int call_thiscall(unsigned int a0);
unsigned int call_arm_aapcs(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned int call_mips(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int call_amd64_sysv(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
unsigned int call_ms_x64(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned int call_vectorcall(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int mixed_conventions_test(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned int varargs_func(unsigned int a0);
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4);
int func_struct_byval(void);
unsigned int func_struct_byptr(void);
int test_calling_conventions(void);
unsigned int param_by_value_int(void);
unsigned int call_by_value_int(unsigned int a0);
unsigned int param_by_value_ptr(void);
unsigned int call_by_value_ptr(unsigned int a0);
unsigned int param_array_decay(void);
unsigned int call_array_decay(void);
int param_string(void);
unsigned int call_string_param(unsigned int a0);
unsigned int param_ptr_array(unsigned int a0, unsigned int a1);
unsigned int call_ptr_array(unsigned int a0);
unsigned int param_varargs(unsigned int a0);
unsigned int call_varargs_param(void);
int param_func_ptr(void);
unsigned int call_func_ptr_param(unsigned int a0);
unsigned int param_double_ptr(unsigned int a0, unsigned int a1);
unsigned int call_double_ptr(unsigned int a0, unsigned int a1);
unsigned int param_complex_cast(unsigned int a0, unsigned int a1);
unsigned int call_complex_cast(unsigned int a0, unsigned int a1);
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15);
unsigned int call_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15);
int param_order_dep(unsigned int a0, unsigned int a1);
unsigned int call_order_dep(unsigned int a0, unsigned int a1);
int test_parameter_passing(void);
unsigned int ret_basic_type(void);
unsigned int call_ret_basic(unsigned int a0);
int ret_pointer(void);
unsigned int call_ret_pointer(unsigned int a0);
unsigned int ret_small_struct(void);
unsigned int call_ret_small_struct(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned int ret_large_struct(void);
unsigned int call_ret_large_struct(unsigned int a0, unsigned int a1);
int func_a(void);
unsigned int func_b(void);
func_ptr_t ret_func_ptr(void);
unsigned int call_ret_func_ptr(unsigned int a0);
unsigned int ret_opaque_handle(void);
int call_ret_opaque(unsigned int a0);
unsigned int ret_complex_expr(void);
unsigned int call_ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned int ret_multi_branch(void);
unsigned int call_ret_multi_branch(unsigned int a0);
void ret_void(void);
unsigned int call_ret_void(unsigned int a0, unsigned int a1);
int test_return_values(void);
unsigned int main(void);

typedef struct struct_0 {
 char field_0[4];
 unsigned int field_4;
 unsigned int field_8;
 unsigned int field_c;
 char padding_0[256];
 char padding_2e87[12];
 char field_2ee7[4];
} struct_0;

/* CRT stub function _init removed by preprocessor */

void (*g_403ff4)(void) = NULL;

// Global string variables
const char *g_4020a8 = "VARARGS-L1-01: %d\n";
const char *g_4020d0 = "VARARGS-L1-02: %d\n";
const char *g_4020f2 = "VARARGS-L1-03: %d\n";
const char *g_402119 = "VARARGS-L1-04: %d\n";
const char *g_402141 = "VARARGS-L1-05: %d\n";
const char *g_40216d = "VARARGS-L1-06: %d\n";
const char *g_402255 = "RET-L1-01: %d\n";
const char *g_402271 = "RET-L1-02: %d\n";
const char *g_40228d = "RET-L1-03: %d\n";
const char *g_4022a8 = "RET-L1-04: %d\n";
const char *g_4022c5 = "RET-L1-05: %d\n";
const char *g_4022e1 = "RET-L1-06: %d\n";
const char *g_4022fe = "RET-L1-07: %d\n";
const char *g_40231a = "RET-L1-08: %d\n";
const char *g_402336 = "RET-L1-09: %d\n";
const char *g_402352 = "=== Calling Conventions Test ===";
const char *g_402373 = "=== Parameter Passing Test ===";
const char *g_402394 = "=== Return Values Test ===";
unsigned int ret_opaque_handle_handle1 = 100;
char ret_opaque_handle_handle2 = 0;

static int _init()
{
 if (g_403ff4)
 g_403ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return ptr[2];
}


// Function: sub_401080 at 0x401080
int sub_401080(unsigned int a0)
{
 void* v1; // ebx

 return (int)((unsigned int*)v1)[16];
}


// Function: sub_401086 at 0x401086
void sub_401086()
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


// Function: __x86_get_pc_thunk_bx at 0x4010c0
void __x86_get_pc_thunk_bx()
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
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v2 = (struct_0 *)0;
 v3 = (struct_0 *)((char *)v2 + 743 + 3);
 v0 = v4;
 if (!((int)((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56]) >> 31) + ((int)((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56]) >> 2) >> 1)
 {
 return ((int)((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56]) >> 31) + ((int)((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56]) >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[4]))
 {
 return ((int(*)())(*((int *)&v3->padding_0[4])))((char *)&v3->padding_0[56], ((int)((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56]) >> 31) + ((int)((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56]) >> 2) >> 1);
 }
 else
 {
 return ((int)((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56]) >> 31) + ((int)((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56]) >> 2) >> 1;
 }
}


// Function: sub_401157 at 0x401157
void sub_401157()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v6 = (struct_0 *)0;
 v5 = (unsigned int *)__x86_get_pc_thunk_di(*((int *)&v2));
 ptr = (struct_0 *)((char *)v6 + 743 + 11);
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[56] != 0)
 return v5;
 if (*((int *)&ptr->padding_0[16]))
 sub_401080(*((int *)&ptr->padding_0[36]));
 v10 = (struct_0 *)((char *)&ptr->padding_0[236]);
 v11 = *((int *)&ptr->padding_0[60]);
 i = (((char *)&ptr->padding_0[232] - (char *)v10) >> 2) - 1;
 if (*((int *)&ptr->padding_0[60]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[60]) = v13;
 ((void(*)())(*((int *)&v10->padding_0[4 * v13])))();
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
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x4011f9
int __x86_get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86_get_pc_thunk_di at 0x4011fd
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401201 at 0x401201
void sub_401201(unsigned int a0, unsigned int a1)
{
 cdecl_func(a0, a1);
 return;
}


// Function: cdecl_func at 0x401210
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: sub_401219 at 0x401219
void sub_401219()
{
 call_cdecl(5, 10);
 return;
}


// Function: call_cdecl at 0x401220
unsigned int call_cdecl(unsigned int a0, unsigned int a1)
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
 call_stdcall(5, 10);
 return;
}


// Function: call_stdcall at 0x401240
unsigned int call_stdcall(unsigned int a0, unsigned int a1)
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
 call_fastcall(1);
 return;
}


// Function: call_fastcall at 0x401260
unsigned int call_fastcall(unsigned int a0)
{
 return 6;
}


// Function: sub_401266 at 0x401266
void sub_401266()
{
 call_thiscall(5);
 return;
}


// Function: call_thiscall at 0x401270
unsigned int call_thiscall(unsigned int a0)
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
 call_arm_aapcs(1, 2, 3, 4, 5);
 return;
}


// Function: call_arm_aapcs at 0x4012a0
unsigned int call_arm_aapcs(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
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
 call_mips(10, 20, 30, 40);
 return;
}


// Function: call_mips at 0x4012d0
unsigned int call_mips(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
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
 call_amd64_sysv(1, 2, 3, 4, 5, 6);
 return;
}


// Function: call_amd64_sysv at 0x401300
unsigned int call_amd64_sysv(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
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
 call_ms_x64(1, 2, 3, 4, 5);
 return;
}


// Function: call_ms_x64 at 0x401330
unsigned int call_ms_x64(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
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
 call_vectorcall(1, 2, 3, 4);
 return;
}


// Function: call_vectorcall at 0x401360
unsigned int call_vectorcall(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return 10;
}


// Function: sub_401366 at 0x401366
void sub_401366()
{
 mixed_conventions_test(1, 2, 3, 4, 5);
 return;
}


// Function: mixed_conventions_test at 0x401370
unsigned int mixed_conventions_test(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return 33;
}


// Function: sub_401376 at 0x401376
void sub_401376(unsigned int a0)
{
 varargs_func(a0);
 return;
}


// Function: varargs_func at 0x401380
unsigned int varargs_func(unsigned int a0)
{
 unsigned int v2; // eax
 struct_0 *cur; // edx
 unsigned int result; // ecx
 unsigned int v5; // eax
 unsigned int i; // esi
 struct_0 *iter; // edx
 struct_0 *v0; // [bp-0xc], Other Possible Types: unsigned int
 char v1; // [bp+0x8]

 v0 = v2;
 v0 = (struct_0 *)&v1;
 if (a0 <= 0)
 return 0;
 cur = v0;
 result = a0 & 3;
 if (a0 - 1 < 3)
 {
 v5 = 0;
 }
 else
 {
 i = a0 & 0xfffffffc;
 v5 = 0;
 do
 {
 v0 = &cur->field_4;
 v0 = &cur->field_8;
 v0 = &cur->field_c;
 cur += 1;
 v0 = cur;
 v5 = v5 + cur->field_0 + cur->field_4 + cur->field_8 + cur->field_c;
 i -= 4;
 } while (i != 4);
 }
 if (!result)
 return v5;
 iter = &cur->field_4;
 do
 {
 v0 = iter;
 v5 += iter->field_4;
 iter = &iter->field_4;
 result -= 1;
 } while (result != 1);
 return v5;
}


// Function: sub_401414 at 0x401414
void sub_401414()
{
 func_no_args();
 return;
}


// Function: func_no_args at 0x401420
unsigned int func_no_args(void)
{
 (void)0;
 return 42;
}


// Function: sub_401426 at 0x401426
void sub_401426(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 func_many_args(a0, a1, a2, a3, a4, a5, a6, a7);
 return;
}


// Function: func_many_args at 0x401430
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 (void)a0; (void)a1; (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7;
 return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: sub_401451 at 0x401451
int sub_401451()
{
 func_mixed_args(1, "test", 3, 4, 5);
 return 0;
}


// Function: func_mixed_args at 0x401460
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
 if (a0)
 {
 v4 = 0.0;
 }
 else
 {
 v4 = 0.0;
 }
 if (a1)
 {
 if (a0)
 {
 v4 = 0.0;
 }
 else
 {
 *((unsigned long long *)&v4) = 0;
 }
 len = strlen(a1);
 if (a0)
 {
 }
 else
 {
 }
 }
 else
 {
 len = 0;
 }
 v0 = len + a0;
 if (a0)
 {
 }
 else
 {
 }
 v2 = a2;
 v3 = a3;
 if (a0)
 {
 }
 else
 {
 }
 v1 = 0;
 return v1;
}


// Function: sub_4014e2 at 0x4014e2
void sub_4014e2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15, unsigned int a16, unsigned int a17, unsigned int a18, unsigned int a19, unsigned int a20, unsigned int a21, unsigned int a22, unsigned int a23, unsigned int a24, unsigned int a25, unsigned int a26, unsigned int a27, unsigned int a28, unsigned int a29, unsigned int a30)
{
 func_struct_byval();
 return;
}


// Function: func_struct_byval at 0x4014f0
int func_struct_byval(void)
{
 return 0;
}


// Function: sub_401531 at 0x401531
void sub_401531(unsigned int a0)
{
 func_struct_byptr();
 return;
}


// Function: func_struct_byptr at 0x401540
unsigned int func_struct_byptr(void)
{
 return 0;
}


// Function: sub_401555 at 0x401555
int sub_401555()
{
 test_calling_conventions();
 return 0;
}


// Function: test_calling_conventions at 0x401560
int test_calling_conventions()
{
 unsigned int result; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x18]

 puts(g_402352);
 v3 = 15;
 printf("CALL-L1-01: %d\n", v3);
 v3 = 50;
 printf("CALL-L1-02: %d\n", v3);
 v3 = 6;
 printf("CALL-L1-03: %d\n", v3);
 v3 = 15;
 printf("CALL-L1-04: %d\n", v3);
 v3 = 15;
 printf("CALL-L1-05: %d\n", v3);
 v3 = 100;
 printf("CALL-L1-06: %d\n", v3);
 v3 = 21;
 printf("CALL-L1-07: %d\n", v3);
 v3 = 15;
 printf("CALL-L1-08: %d\n", v3);
 v3 = 10;
 printf("CALL-L1-09: %d\n", v3);
 v3 = 33;
 printf("CALL-L1-10: %d\n", v3);
 v3 = 5;
 v2 = 3;
 v1 = 2;
 result = 1;
 v3 = varargs_func(5);
 printf(g_4020a8, v3);
 v3 = 42;
 printf(g_4020d0, v3);
 v3 = 36;
 printf(g_4020f2, v3);
 v3 = 117;
 printf(g_402119, v3);
 v3 = 136;
 printf(g_402141, v3);
 v3 = 50;
 return printf(g_40216d, v3);
}


// Function: sub_4016aa at 0x4016aa
void sub_4016aa(unsigned int a0)
{
 param_by_value_int();
 return;
}


// Function: param_by_value_int at 0x4016b0
unsigned int param_by_value_int(void)
{
 return 0;
}


// Function: sub_4016b7 at 0x4016b7
void sub_4016b7()
{
 call_by_value_int(0);
 return;
}


// Function: call_by_value_int at 0x4016c0
unsigned int call_by_value_int(unsigned int a0)
{
 return 15;
}


// Function: sub_4016c6 at 0x4016c6
void sub_4016c6(unsigned int a0)
{
 param_by_value_ptr();
 return;
}


// Function: param_by_value_ptr at 0x4016d0
unsigned int param_by_value_ptr(void)
{
 return 0;
}


// Function: sub_4016dc at 0x4016dc
void sub_4016dc()
{
 call_by_value_ptr(0);
 return;
}


// Function: call_by_value_ptr at 0x4016e0
unsigned int call_by_value_ptr(unsigned int a0)
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
unsigned int param_array_decay(void)
{
 return 4;
}


// Function: sub_4016f6 at 0x4016f6
void sub_4016f6()
{
 call_array_decay();
 return;
}


// Function: call_array_decay at 0x401700
unsigned int call_array_decay(void)
{
 return 4;
}


// Function: sub_401706 at 0x401706
void sub_401706(unsigned int a0)
{
 (void)a0;
 param_string();
 return;
}


// Function: param_string at 0x401710
int param_string(void)
{
 return 0;
}


// Function: sub_40171e at 0x40171e
void sub_40171e()
{
 call_string_param(0);
 return;
}


// Function: call_string_param at 0x401720
unsigned int call_string_param(unsigned int a0)
{
 return 173;
}


// Function: sub_401726 at 0x401726
int sub_401726()
{
 param_ptr_array(0, 0);
 return 0;
}


// Function: param_ptr_array at 0x401730
unsigned int param_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int result; // ecx
 unsigned int i; // esi
 unsigned int v2; // eax
 unsigned int v3; // esi

 if (a1 <= 0)
 return 0;
 result = a1 & 3;
 if (a1 - 1 < 3)
 {
 i = 0;
 v2 = 0;
 }
 else
 {
 i = 0;
 v2 = 0;
 do
 {
 v2 = *((char *)*((int *)(a0 + i * 4 + 12))) + *((char *)*((int *)(a0 + i * 4 + 8))) + *((char *)*((int *)(a0 + i * 4 + 4))) + *((char *)*((int *)(a0 + i * 4))) + v2;
 i += 4;
 } while ((a1 & 0xfffffffc) != i);
 }
 if (!result)
 return v2;
 v3 = 0;
 do
 {
 v2 += *((char *)*((int *)(a0 + i * 4 + v3 * 4)));
 v3 += 1;
 } while (result != v3);
 return v2;
}


// Function: sub_4017b4 at 0x4017b4
void sub_4017b4()
{
 call_ptr_array(0);
 return;
}


// Function: call_ptr_array at 0x4017c0
unsigned int call_ptr_array(unsigned int a0)
{
 return 300;
}


// Function: sub_4017c6 at 0x4017c6
void sub_4017c6(unsigned int a0)
{
 (void)a0;
 param_varargs(0);
 return;
}


// Function: param_varargs at 0x4017d0
unsigned int param_varargs(unsigned int a0)
{
 unsigned int v2; // eax
 struct_0 *cur; // edx
 unsigned int result; // ecx
 unsigned int v5; // eax
 unsigned int i; // esi
 struct_0 *iter; // edx
 struct_0 *v0; // [bp-0xc], Other Possible Types: unsigned int
 char v1; // [bp+0x8]

 v0 = v2;
 v0 = (struct_0 *)&v1;
 if (a0 <= 0)
 return 0;
 cur = v0;
 result = a0 & 3;
 if (a0 - 1 < 3)
 {
 v5 = 0;
 }
 else
 {
 i = a0 & 0xfffffffc;
 v5 = 0;
 do
 {
 v0 = &cur->field_4;
 v0 = &cur->field_8;
 v0 = &cur->field_c;
 cur += 1;
 v0 = cur;
 v5 = v5 + cur->field_0 + cur->field_4 + cur->field_8 + cur->field_c;
 i -= 4;
 } while (i != 4);
 }
 if (!result)
 return v5;
 iter = &cur->field_4;
 do
 {
 v0 = iter;
 v5 += iter->field_4;
 iter = &iter->field_4;
 result -= 1;
 } while (result != 1);
 return v5;
}


// Function: sub_401864 at 0x401864
int sub_401864()
{
 call_varargs_param();
 return 0;
}


// Function: call_varargs_param at 0x401870
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


// Function: sub_401897 at 0x401897
int sub_401897()
{
 param_func_ptr();
 return 0;
}


// Function: param_func_ptr at 0x4018a0
int param_func_ptr(void)
{
 return 0;
}


// Function: sub_4018c3 at 0x4018c3
void sub_4018c3()
{
 call_func_ptr_param(0);
 return;
}


// Function: call_func_ptr_param at 0x4018d0
unsigned int call_func_ptr_param(unsigned int a0)
{
 return 20;
}


// Function: sub_4018d6 at 0x4018d6
void sub_4018d6(unsigned int a0)
{
 (void)a0;
 param_double_ptr(0, 0);
 return;
}


// Function: param_double_ptr at 0x4018e0
unsigned int param_double_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // eax
 struct_0 **ptr; // local variable

 ptr = (struct_0 **)a0;
 v0 = 4294967295;
 if (ptr && (*ptr))
 {
 (*ptr)->field_0[0] = (char)a1;
 (*ptr) = NULL;
 v0 = 1;
 }
 return v0;
}


// Function: sub_401905 at 0x401905
void sub_401905()
{
 call_double_ptr(0, 0);
 return;
}


// Function: call_double_ptr at 0x401910
unsigned int call_double_ptr(unsigned int a0, unsigned int a1)
{
 return 21;
}


// Function: sub_401916 at 0x401916
void sub_401916(unsigned int a0, unsigned int a1)
{
 (void)a0; (void)a1;
 param_complex_cast(0, 0);
 return;
}


// Function: param_complex_cast at 0x401920
unsigned int param_complex_cast(unsigned int a0, unsigned int a1)
{
 unsigned int *arr; // local variable

 arr = (unsigned int *)a0;
 if (a1 == 1)
 {
 return arr[1] + arr[0];
 }
 else if (!a1)
 {
 return arr[0];
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_40193f at 0x40193f
void sub_40193f()
{
 call_complex_cast(0, 0);
 return;
}


// Function: call_complex_cast at 0x401940
unsigned int call_complex_cast(unsigned int a0, unsigned int a1)
{
 return 305419896;
}


// Function: sub_401946 at 0x401946
void sub_401946(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 (void)a0; (void)a1; (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; (void)a13; (void)a14; (void)a15;
 param_struct_byval(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
 return;
}


// Function: param_struct_byval at 0x401950
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return 0;
}


// Function: sub_401959 at 0x401959
void sub_401959()
{
 call_struct_byval(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
 return;
}


// Function: call_struct_byval at 0x401960
unsigned int call_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return 15;
}


// Function: sub_401966 at 0x401966
void sub_401966(unsigned int a0, unsigned int a1)
{
 (void)a0; (void)a1;
 param_order_dep(0, 0);
 return;
}


// Function: param_order_dep at 0x401970
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: sub_401979 at 0x401979
void sub_401979()
{
 call_order_dep(0, 0);
 return;
}


// Function: call_order_dep at 0x401980
unsigned int call_order_dep(unsigned int a0, unsigned int a1)
{
 return 3;
}


// Function: sub_401986 at 0x401986
int sub_401986()
{
 test_parameter_passing();
 return 0;
}


// Function: test_parameter_passing at 0x401990
int test_parameter_passing()
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x18]

 puts(g_402373);
 v3 = 15;
 printf("PARAM-L1-01: %d\n", v3);
 v3 = 11;
 printf("PARAM-L1-02: %d\n", v3);
 v3 = 4;
 printf("PARAM-L2-01: %d\n", v3);
 v3 = 173;
 printf("PARAM-L2-02: %d\n", v3);
 v3 = 300;
 printf("PARAM-L2-03: %d\n", v3);
 v2 = 30;
 v1 = 20;
 v0 = 10;
 v3 = param_varargs(4);
 printf("PARAM-L2-04: %d\n", v3);
 v3 = 20;
 printf("PARAM-L3-01: %d\n", v3);
 v3 = 21;
 printf("PARAM-L3-02: %d\n", v3);
 v3 = 305419896;
 printf("PARAM-L3-03: %d\n", v3);
 v3 = 15;
 printf("PARAM-L3-04: %d\n", v3);
 v3 = 3;
 return printf("PARAM-L3-05: %d\n", v3);
}


// Function: sub_401a89 at 0x401a89
void sub_401a89(unsigned int a0)
{
 ret_basic_type();
 return;
}


// Function: ret_basic_type at 0x401a90
unsigned int ret_basic_type(void)
{
 return 0;
}


// Function: sub_401a97 at 0x401a97
void sub_401a97()
{
 call_ret_basic(0);
 return;
}


// Function: call_ret_basic at 0x401aa0
unsigned int call_ret_basic(unsigned int a0)
{
 return 42;
}


// Function: sub_401aa6 at 0x401aa6
void sub_401aa6(unsigned int a0)
{
 ret_pointer();
 return;
}


// Function: ret_pointer at 0x401ab0
int ret_pointer(void)
{
 return 0;
}


// Function: sub_401ab8 at 0x401ab8
void sub_401ab8()
{
 call_ret_pointer(0);
 return;
}


// Function: call_ret_pointer at 0x401ac0
unsigned int call_ret_pointer(unsigned int a0)
{
 return 20;
}


// Function: sub_401ac6 at 0x401ac6
void sub_401ac6(unsigned int a0, unsigned int a1, unsigned int a2)
{
 ret_small_struct();
 return;
}


// Function: ret_small_struct at 0x401ad0
unsigned int ret_small_struct(void)
{
 return 0;
}


// Function: sub_401ae4 at 0x401ae4
void sub_401ae4()
{
 call_ret_small_struct(0, 0, 0);
 return;
}


// Function: call_ret_small_struct at 0x401af0
unsigned int call_ret_small_struct(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return 7;
}


// Function: sub_401af6 at 0x401af6
void sub_401af6(unsigned int a0, unsigned int a1)
{
 ret_large_struct();
 return;
}


// Function: ret_large_struct at 0x401b00
unsigned int ret_large_struct(void)
{
 return 0;
}


// Function: sub_401b67 at 0x401b67
void sub_401b67()
{
 call_ret_large_struct(0, 0);
 return;
}


// Function: call_ret_large_struct at 0x401b70
unsigned int call_ret_large_struct(unsigned int a0, unsigned int a1)
{
 return 215;
}


// Function: sub_401b76 at 0x401b76
void sub_401b76(unsigned int a0)
{
 func_a();
 return;
}


// Function: func_a at 0x401b80
int func_a(void)
{
 return 10;
}


// Function: sub_401b88 at 0x401b88
void sub_401b88(unsigned int a0)
{
 func_b();
 return;
}


// Function: func_b at 0x401b90
unsigned int func_b(void)
{
 return 20;
}


// Function: sub_401b97 at 0x401b97
void sub_401b97(unsigned int a0)
{
 ret_func_ptr();
 return;
}


// Function: ret_func_ptr at 0x401ba0
func_ptr_t ret_func_ptr(void)
{
 return (func_ptr_t)0;
}


// Function: sub_401bc1 at 0x401bc1
void sub_401bc1()
{
 call_ret_func_ptr(0);
 return;
}


// Function: call_ret_func_ptr at 0x401bd0
unsigned int call_ret_func_ptr(unsigned int a0)
{
 return 10;
}


// Function: sub_401bd6 at 0x401bd6
void sub_401bd6(unsigned int a0)
{
 ret_opaque_handle();
 return;
}


// Function: ret_opaque_handle at 0x401be0
unsigned int ret_opaque_handle(void)
{
 return ret_opaque_handle_handle1;
}


// Function: sub_401c01 at 0x401c01
void sub_401c01()
{
 call_ret_opaque(0);
 return;
}


// Function: call_ret_opaque at 0x401c10
int call_ret_opaque(unsigned int a0)
{
 return ret_opaque_handle_handle1;
}


// Function: sub_401c23 at 0x401c23
void sub_401c23(unsigned int a0, unsigned int a1, unsigned int a2)
{
 ret_complex_expr();
 return;
}


// Function: ret_complex_expr at 0x401c30
unsigned int ret_complex_expr(void)
{
 return 40;
}


// Function: sub_401c46 at 0x401c46
void sub_401c46()
{
 call_ret_complex_expr(0, 0, 0);
 return;
}


// Function: call_ret_complex_expr at 0x401c50
unsigned int call_ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return 40;
}


// Function: sub_401c56 at 0x401c56
void sub_401c56(unsigned int a0)
{
 ret_multi_branch();
 return;
}


// Function: ret_multi_branch at 0x401c60
unsigned int ret_multi_branch(void)
{
 return 60;
}


// Function: sub_401c77 at 0x401c77
void sub_401c77()
{
 call_ret_multi_branch(0);
 return;
}


// Function: call_ret_multi_branch at 0x401c80
unsigned int call_ret_multi_branch(unsigned int a0)
{
 return 60;
}


// Function: sub_401c86 at 0x401c86
void sub_401c86(unsigned int a0, unsigned int a1)
{
 ret_void();
 return;
}


// Function: ret_void at 0x401c90
void ret_void(void)
{
 return;
}


// Function: sub_401c9e at 0x401c9e
void sub_401c9e()
{
 call_ret_void(0, 0);
 return;
}


// Function: call_ret_void at 0x401ca0
unsigned int call_ret_void(unsigned int a0, unsigned int a1)
{
 ret_void();
 return 21;
}


// Function: sub_401ca6 at 0x401ca6
int sub_401ca6()
{
 test_return_values();
 return 0;
}


// Function: test_return_values at 0x401cb0
int test_return_values()
{
 unsigned int v0; // [bp-0x8]

 puts(g_402394);
 v0 = 42;
 printf(g_402255, v0);
 v0 = 20;
 printf(g_402271, v0);
 v0 = 7;
 printf(g_40228d, v0);
 v0 = 215;
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


// Function: sub_401d9b at 0x401d9b
int sub_401d9b()
{
 main();
 return 0;
}


// Function: main at 0x401da0
unsigned int main()
{
 unsigned int v0; // [bp-0x8]

 test_calling_conventions();
 test_parameter_passing();
 puts(g_402394);
 v0 = 42;
 printf(g_402255, v0);
 v0 = 20;
 printf(g_402271, v0);
 v0 = 7;
 printf(g_40228d, v0);
 v0 = 215;
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
 printf(g_402336, v0);
 return 0;
}


// Function: sub_401e97 at 0x401e97
void sub_401e97()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

 int __do_global_ctors_aux(void)
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v2 = (struct_0 *)0;
 ptr = (struct_0 *)((char *)&v2 + 239);
 v4 = (unsigned int *)&ptr->field_c;
 if (*((int *)&ptr->field_c) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = (struct_0 *)&ptr->field_c;
 do
 {
 p = v6;
 ((void(*)())(*v4))();
 v4 = (unsigned int *)&p->field_c;
 v6 = (struct_0 *)&p->field_c;
 } while (*((int *)&p->field_c) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401ee2 at 0x401ee2
void sub_401ee2()
{
}



/* CRT stub function _fini removed by preprocessor */


