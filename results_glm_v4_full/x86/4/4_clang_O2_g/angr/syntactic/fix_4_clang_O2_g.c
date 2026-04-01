// Angr Decompilation of 4_clang_O2_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    char padding_0[256];
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_varargs {
    char field_0[4];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} struct_varargs;

typedef struct struct_param_varargs {
    char field_0[4];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} struct_param_varargs;

typedef struct struct_param_double_ptr {
    unsigned int field_0;
} struct_param_double_ptr;

extern struct_0 *g_403ff4;

void __x86_get_pc_thunk_dx(void);
void __x86_get_pc_thunk_bx(void);
unsigned int __x86_get_pc_thunk_di(void);
unsigned int frame_dummy(void);
unsigned int deregister_tm_clones(void);
unsigned int __do_global_dtors_aux(void);
unsigned int __do_global_ctors_aux(void);
int cdecl_func(unsigned int a0, unsigned int a1);
int stdcall_func(unsigned int a0, unsigned int a1);
int fastcall_func(unsigned int a0);
int thiscall_func(unsigned int a0);
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int varargs_func(unsigned int a0);
unsigned int register_tm_clones(void);
unsigned int call_cdecl(void);
unsigned int call_stdcall(void);
unsigned int call_fastcall(void);
unsigned int call_thiscall(void);
unsigned int call_arm_aapcs(void);
unsigned int call_mips(void);
unsigned int call_amd64_sysv(void);
unsigned int call_ms_x64(void);
unsigned int call_vectorcall(void);
unsigned int mixed_conventions_test(void);
unsigned int func_no_args(void);
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7);
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4);
int func_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15, unsigned int a16, unsigned int a17, unsigned int a18, unsigned int a19, unsigned int a20, unsigned int a21, unsigned int a22, unsigned int a23, unsigned int a24, unsigned int a25, unsigned int a26, unsigned int a27, unsigned int a28, unsigned int a29, unsigned int a30);
unsigned int func_struct_byptr(unsigned int *a0);
unsigned int test_calling_conventions(void);
unsigned int test_parameter_passing(void);
unsigned int test_return_values(void);
unsigned int param_by_value_int(unsigned int a0);
unsigned int call_by_value_int(void);
unsigned int param_by_value_ptr(unsigned int *ptr);
unsigned int call_by_value_ptr(void);
unsigned int param_array_decay(void);
unsigned int call_array_decay(void);
int param_string(char *a0);
unsigned int call_string_param(void);
unsigned int param_ptr_array(unsigned int a0, unsigned int a1);
unsigned int call_ptr_array(void);
unsigned int param_varargs(unsigned int a0);
unsigned int call_varargs_param(void);
int param_func_ptr(int (*a0)(unsigned int), unsigned int a1);
unsigned int call_func_ptr_param(void);
unsigned int param_double_ptr(struct_param_double_ptr **ptr, unsigned int a1);
unsigned int call_double_ptr(void);
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1);
unsigned int call_complex_cast(void);
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15);
unsigned int call_struct_byval(void);
int param_order_dep(unsigned int a0, unsigned int a1);
unsigned int call_order_dep(void);
unsigned int ret_basic_type(unsigned int a0);
unsigned int call_ret_basic(void);
int ret_pointer(unsigned int a0);
unsigned int call_ret_pointer(void);
unsigned int* ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2);
unsigned int call_ret_small_struct(void);
unsigned int* ret_large_struct(unsigned int *ptr, unsigned int a1);
unsigned int call_ret_large_struct(void);
int func_a(unsigned int a0);
unsigned int func_b(unsigned int a0);
int (*ret_func_ptr(unsigned int a0))(unsigned int);
unsigned int call_ret_func_ptr(void);
int ret_opaque_handle(unsigned int a0);
int call_ret_opaque(void);
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned int call_ret_complex_expr(void);
unsigned int ret_multi_branch(unsigned int a0);
unsigned int call_ret_multi_branch(void);
unsigned int* ret_void(unsigned int a0, unsigned int *ptr);
unsigned int call_ret_void(void);

int _init()
{
 frame_dummy();
 __do_global_ctors_aux();
 return 0;
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return 0;
}


// Function: sub_401080 at 0x401080
int sub_401080(void *v1)
{
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
 return;
}



unsigned int deregister_tm_clones(void);

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



unsigned int register_tm_clones(void);

unsigned int register_tm_clones()
{
 unsigned int pc; // eax
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 pc = __x86_get_pc_thunk_dx();
 v2 = (struct_0 *)(void *)pc;
 v3 = (struct_0 *)((void *)((char *)v2 + 3));
 v0 = v4;
 if (!(((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56] >> 31) + ((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56] >> 2) >> 1))
 {
 return ((unsigned int)((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56] >> 31) + ((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56] >> 2) >> 1);
 }
 else if (*((int *)&v3->padding_0[4]))
 {
 unsigned int (*func_ptr)(struct_0 *, unsigned int) = (unsigned int (*)(struct_0 *, unsigned int))(*((int *)&v3->padding_0[4]));
 return func_ptr(&v3->padding_0[56], (unsigned int)((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56] >> 31) + ((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56] >> 2) >> 1);
 }
 else
 {
 return (unsigned int)((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56] >> 31) + ((char *)&v3->padding_0[56] - (char *)&v3->padding_0[56] >> 2) >> 1;
 }
}


// Function: sub_401157 at 0x401157
void sub_401157()
{
 __do_global_dtors_aux();
 return;
}



unsigned int __do_global_dtors_aux(void);

unsigned int __do_global_dtors_aux()
{
 unsigned int v5; // eax
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

 v5 = __x86_get_pc_thunk_di();
 ptr = (struct_0 *)((void *)((char *)v6 + 11));
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[56])
 return v5;
 if (*((int *)&ptr->padding_0[16]))
 sub_401080((void *)(*((int *)&ptr->padding_0[36])));
 v10 = (struct_0 *)((char *)&ptr->padding_0[236] - 4);
 v11 = *((int *)&ptr->padding_0[60]);
 i = (&ptr->padding_0[232] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[60]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[60]) = v13;
 ((void (*)(void))(*((int *)&v10->padding_0[4 * v13])))();
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



unsigned int frame_dummy(void);



// Function: __x86.get_pc_thunk_dx at 0x4011f9
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x4011fd
unsigned int __x86_get_pc_thunk_di(void)
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


// Function: thiscall_func at 0x401268
int thiscall_func(unsigned int a0)
{
 return a0 * 3;
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
 varargs_func(a0);
 return;
}


// Function: varargs_func at 0x401380
unsigned int varargs_func(unsigned int a0)
{
 struct_varargs *cur;
 unsigned int result;
 unsigned int v5;
 unsigned int i;
 struct_varargs *iter;
 struct_varargs *v0;
 char v1;

 if (a0 <= 0)
 return 0;
 cur = (struct_varargs *)&v1;
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
 v5 = v5 + cur->field_0 + cur->field_4 + cur->field_8 + cur->field_c;
 cur += 1;
 i -= 4;
 } while (i != 4);
 }
 if (!result)
 return v5;
 iter = cur;
 do
 {
 v5 += iter->field_4;
 iter = (struct_varargs *)((char *)iter + 4);
 result -= 1;
 } while (result != 1);
 return v5;
}


// Function: sub_401414 at 0x401414
unsigned int sub_401414()
{
 return func_no_args();
}


// Function: func_no_args at 0x401420
unsigned int func_no_args()
{
 return 42;
}


// Function: sub_401426 at 0x401426
int sub_401426(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return func_many_args(a0, a1, a2, a3, a4, a5, a6, a7);
}


// Function: func_many_args at 0x401430
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: sub_401451 at 0x401451
int sub_401451(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return func_mixed_args(a0, a1, a2, a3, a4);
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
 if (a1)
 {
 *((unsigned long long *)&v4) = 0ULL;
 len = strlen(a1);
 }
 else
 {
 len = 0;
 }
 v0 = len + a0;
 v2 = a2;
 v3 = a3;
 v1 = 0.0;
 return v1;
}


// Function: sub_4014e2 at 0x4014e2
int sub_4014e2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15, unsigned int a16, unsigned int a17, unsigned int a18, unsigned int a19, unsigned int a20, unsigned int a21, unsigned int a22, unsigned int a23, unsigned int a24, unsigned int a25, unsigned int a26, unsigned int a27, unsigned int a28, unsigned int a29, unsigned int a30)
{
 return func_struct_byval(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30);
}


// Function: func_struct_byval at 0x4014f0
int func_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15, unsigned int a16, unsigned int a17, unsigned int a18, unsigned int a19, unsigned int a20, unsigned int a21, unsigned int a22, unsigned int a23, unsigned int a24, unsigned int a25, unsigned int a26, unsigned int a27, unsigned int a28, unsigned int a29, unsigned int a30)
{
 return a2 + a0 + a4 + a6 + a8 + a10 + a12 + a14 + a16 + a18 + a20 + a22 + a24 + a26 + a28 + a30;
}


// Function: sub_401531 at 0x401531
unsigned int sub_401531(unsigned int *a0)
{
 return func_struct_byptr(a0);
}


// Function: func_struct_byptr at 0x401540
unsigned int func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0) * a0[1];
}


// Function: sub_401555 at 0x401555
int sub_401555()
{
 test_calling_conventions();
 return 0;
}


// Function: test_calling_conventions at 0x401560
extern char g_4020a8;
extern char g_4020d0;
extern char g_4020f2;
extern char g_402119;
extern char g_402141;
extern char g_40216d;
extern char g_402352;

unsigned int test_calling_conventions()
{
 unsigned int result; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x18]

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
 v3 = 136;
 printf(&g_402141);
 v3 = 50;
 return printf(&g_40216d);
}


// Function: sub_4016aa at 0x4016aa
void sub_4016aa(unsigned int a0)
{
 param_by_value_int(a0);
 return;
}


// Function: param_by_value_int at 0x4016b0
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4016b7 at 0x4016b7
void sub_4016b7()
{
 call_by_value_int();
 return;
}


// Function: call_by_value_int at 0x4016c0
unsigned int call_by_value_int()
{
 return 15;
}


// Function: sub_4016c6 at 0x4016c6
void sub_4016c6(unsigned int a0)
{
 (void)a0;
 param_by_value_ptr((unsigned int *)0);
 return;
}


// Function: param_by_value_ptr at 0x4016d0
unsigned int param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2;
 return 1;
}


// Function: sub_4016dc at 0x4016dc
void sub_4016dc()
{
 call_by_value_ptr();
 return;
}


// Function: call_by_value_ptr at 0x4016e0
unsigned int call_by_value_ptr()
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
unsigned int param_array_decay()
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
unsigned int call_array_decay()
{
 return 4;
}


// Function: sub_401706 at 0x401706
void sub_401706(unsigned int a0)
{
 (void)a0;
 param_string((char *)0);
 return;
}


// Function: param_string at 0x401710
int param_string(char *a0)
{
 if (!a0)
 return 0;
 return a0[1] + *(a0);
}


// Function: sub_40171e at 0x40171e
void sub_40171e()
{
 call_string_param();
 return;
}


// Function: call_string_param at 0x401720
unsigned int call_string_param()
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
 call_ptr_array();
 return;
}


// Function: call_ptr_array at 0x4017c0
unsigned int call_ptr_array()
{
 return 300;
}


// Function: sub_4017c6 at 0x4017c6
void sub_4017c6(unsigned int a0)
{
 param_varargs(a0);
 return;
}


// Function: param_varargs at 0x4017d0
unsigned int param_varargs(unsigned int a0)
{
 struct_param_varargs *cur;
 unsigned int result;
 unsigned int v5;
 unsigned int i;
 struct_param_varargs *iter;
 struct_param_varargs *v0;
 char v1;

 if (a0 <= 0)
 return 0;
 cur = (struct_param_varargs *)&v1;
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
 v5 = v5 + cur->field_0 + cur->field_4 + cur->field_8 + cur->field_c;
 cur += 1;
 i -= 4;
 } while (i != 4);
 }
 if (!result)
 return v5;
 iter = cur;
 do
 {
 v5 += iter->field_4;
 iter = (struct_param_varargs *)((char *)iter + 4);
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
 param_func_ptr((int (*)(unsigned int))0, 0);
 return 0;
}


// Function: param_func_ptr at 0x4018a0
int param_func_ptr(int (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: sub_4018c3 at 0x4018c3
void sub_4018c3()
{
 call_func_ptr_param();
 return;
}


// Function: call_func_ptr_param at 0x4018d0
unsigned int call_func_ptr_param()
{
 return 20;
}


// Function: sub_4018d6 at 0x4018d6
void sub_4018d6(unsigned int a0)
{
 (void)a0;
 param_double_ptr((struct_param_double_ptr **)0, 0);
 return;
}


// Function: param_double_ptr at 0x4018e0
unsigned int param_double_ptr(struct_param_double_ptr **ptr, unsigned int a1)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (ptr && *(ptr))
 {
 (*ptr)->field_0 = a1;
 *ptr = NULL;
 v0 = 1;
 }
 return v0;
}


// Function: sub_401905 at 0x401905
void sub_401905()
{
 call_double_ptr();
 return;
}


// Function: call_double_ptr at 0x401910
unsigned int call_double_ptr()
{
 return 21;
}


// Function: sub_401916 at 0x401916
void sub_401916(unsigned int a0, unsigned int a1)
{
 (void)a0;
 (void)a1;
 param_complex_cast((unsigned int *)0, 0);
 return;
}


// Function: param_complex_cast at 0x401920
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


// Function: sub_40193f at 0x40193f
void sub_40193f()
{
 call_complex_cast();
 return;
}


// Function: call_complex_cast at 0x401940
unsigned int call_complex_cast()
{
 return 305419896;
}


// Function: sub_401946 at 0x401946
void sub_401946(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 (void)a0; (void)a1; (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7;
 (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; (void)a13; (void)a14;
 param_struct_byval(a15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
 return;
}


// Function: param_struct_byval at 0x401950
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a15 + a0;
}


// Function: sub_401959 at 0x401959
void sub_401959()
{
 call_struct_byval();
 return;
}


// Function: call_struct_byval at 0x401960
unsigned int call_struct_byval()
{
 return 15;
}


// Function: sub_401966 at 0x401966
void sub_401966(unsigned int a0, unsigned int a1)
{
 param_order_dep(a0, a1);
 return;
}


// Function: param_order_dep at 0x401970
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: sub_401979 at 0x401979
void sub_401979()
{
 call_order_dep();
 return;
}


// Function: call_order_dep at 0x401980
unsigned int call_order_dep()
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
extern char g_402373;

unsigned int test_parameter_passing()
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x18]

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
 v3 = 15;
 printf("PARAM-L3-04: %d\n");
 v3 = 3;
 return printf("PARAM-L3-05: %d\n");
}


// Function: sub_401a89 at 0x401a89
void sub_401a89(unsigned int a0)
{
 ret_basic_type(a0);
 return;
}


// Function: ret_basic_type at 0x401a90
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401a97 at 0x401a97
void sub_401a97()
{
 call_ret_basic();
 return;
}


// Function: call_ret_basic at 0x401aa0
unsigned int call_ret_basic()
{
 return 42;
}


// Function: sub_401aa6 at 0x401aa6
void sub_401aa6(unsigned int a0)
{
 ret_pointer(a0);
 return;
}


// Function: ret_pointer at 0x401ab0
int ret_pointer(unsigned int a0)
{
 return a0 + 4;
}


// Function: sub_401ab8 at 0x401ab8
void sub_401ab8()
{
 call_ret_pointer();
 return;
}


// Function: call_ret_pointer at 0x401ac0
unsigned int call_ret_pointer()
{
 return 20;
}


// Function: sub_401ac6 at 0x401ac6
void sub_401ac6(unsigned int a0, unsigned int a1, unsigned int a2)
{
 (void)a0;
 ret_small_struct((unsigned int *)0, a1, a2);
 return;
}


// Function: ret_small_struct at 0x401ad0
unsigned int* ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 *(ptr) = a1;
 ptr[1] = a2;
 return ptr;
}


// Function: sub_401ae4 at 0x401ae4
void sub_401ae4()
{
 call_ret_small_struct();
 return;
}


// Function: call_ret_small_struct at 0x401af0
unsigned int call_ret_small_struct()
{
 return 7;
}


// Function: sub_401af6 at 0x401af6
void sub_401af6(unsigned int a0, unsigned int a1)
{
 (void)a0;
 ret_large_struct((unsigned int *)0, a1);
 return;
}


// Function: ret_large_struct at 0x401b00
unsigned int* ret_large_struct(unsigned int *ptr, unsigned int a1)
{
 *(ptr) = a1;
 ptr[1] = a1 + 1;
 ptr[2] = a1 + 2;
 ptr[3] = a1 + 3;
 ptr[4] = a1 + 4;
 ptr[5] = a1 + 5;
 ptr[6] = a1 + 6;
 ptr[7] = a1 + 7;
 ptr[8] = a1 + 8;
 ptr[9] = a1 + 9;
 ptr[10] = a1 + 10;
 ptr[11] = a1 + 11;
 ptr[12] = a1 + 12;
 ptr[13] = a1 + 13;
 ptr[14] = a1 + 14;
 ptr[15] = a1 + 15;
 return ptr;
}


// Function: sub_401b67 at 0x401b67
void sub_401b67()
{
 call_ret_large_struct();
 return;
}


// Function: call_ret_large_struct at 0x401b70
unsigned int call_ret_large_struct()
{
 return 215;
}


// Function: sub_401b76 at 0x401b76
void sub_401b76(unsigned int a0)
{
 func_a(a0);
 return;
}


// Function: func_a at 0x401b80
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: sub_401b88 at 0x401b88
void sub_401b88(unsigned int a0)
{
 func_b(a0);
 return;
}


// Function: func_b at 0x401b90
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401b97 at 0x401b97
void sub_401b97(unsigned int a0)
{
 ret_func_ptr(a0);
 return;
}


// Function: ret_func_ptr at 0x401ba0
int (*ret_func_ptr(unsigned int a0))(unsigned int)
{
 if (a0)
 return func_b;
 return func_a;
}


// Function: sub_401bc1 at 0x401bc1
void sub_401bc1()
{
 call_ret_func_ptr();
 return;
}


// Function: call_ret_func_ptr at 0x401bd0
unsigned int call_ret_func_ptr()
{
 return 10;
}


// Function: sub_401bd6 at 0x401bd6
void sub_401bd6(unsigned int a0)
{
 ret_opaque_handle(a0);
 return;
}


// Function: ret_opaque_handle at 0x401be0
extern unsigned int ret_opaque_handle_handle1;
extern char ret_opaque_handle_handle2;

int ret_opaque_handle(unsigned int a0)
{
 if (a0)
 return (int)&ret_opaque_handle_handle2;
 return (int)"d";
}


// Function: sub_401c01 at 0x401c01
void sub_401c01()
{
 call_ret_opaque();
 return;
}


// Function: call_ret_opaque at 0x401c10
extern unsigned int ret_opaque_handle_handle1;

int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


// Function: sub_401c23 at 0x401c23
void sub_401c23(unsigned int a0, unsigned int a1, unsigned int a2)
{
 ret_complex_expr(a0, a1, a2);
 return;
}


// Function: ret_complex_expr at 0x401c30
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a0 <= a1)
 return a2 + 10;
 return a2 * 2;
}


// Function: sub_401c46 at 0x401c46
void sub_401c46()
{
 call_ret_complex_expr();
 return;
}


// Function: call_ret_complex_expr at 0x401c50
unsigned int call_ret_complex_expr()
{
 return 40;
}


// Function: sub_401c56 at 0x401c56
void sub_401c56(unsigned int a0)
{
 ret_multi_branch(a0);
 return;
}


// Function: ret_multi_branch at 0x401c60
unsigned int ret_multi_branch(unsigned int a0)
{
 if (a0 >= 3)
 return 4294967295;
 return a0 * 10 + 10;
}


// Function: sub_401c77 at 0x401c77
void sub_401c77()
{
 call_ret_multi_branch();
 return;
}


// Function: call_ret_multi_branch at 0x401c80
unsigned int call_ret_multi_branch()
{
 return 60;
}


// Function: sub_401c86 at 0x401c86
void sub_401c86(unsigned int a0, unsigned int a1)
{
 (void)a1;
 ret_void(a0, (unsigned int *)0);
 return;
}


// Function: ret_void at 0x401c90
unsigned int * ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return ptr;
}


// Function: sub_401c9e at 0x401c9e
void sub_401c9e()
{
 call_ret_void();
 return;
}


// Function: call_ret_void at 0x401ca0
unsigned int call_ret_void()
{
 return 21;
}


// Function: sub_401ca6 at 0x401ca6
int sub_401ca6()
{
 test_return_values();
 return 0;
}


// Function: test_return_values at 0x401cb0
extern char g_402255;
extern char g_402271;
extern char g_40228d;
extern char g_4022a8;
extern char g_4022c5;
extern char g_4022e1;
extern char g_4022fe;
extern char g_40231a;
extern char g_402336;
extern char g_402394;
extern unsigned int ret_opaque_handle_handle1;

unsigned int test_return_values()
{
 unsigned int v0; // [bp-0x8]

 puts(&g_402394);
 v0 = 42;
 printf(&g_402255);
 v0 = 20;
 printf(&g_402271);
 v0 = 7;
 printf(&g_40228d);
 v0 = 215;
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


// Function: sub_401d9b at 0x401d9b
int sub_401d9b()
{
 main();
 return 0;
}


// Function: main at 0x401da0
int main()
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


// Function: sub_401dc6 at 0x401dc6
void sub_401dc6()
{
 __do_global_ctors_aux();
 return;
}



unsigned int __do_global_ctors_aux(void);

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = (struct_0 *)((void *)((char *)&v2[1] + 239));
 v4 = *((int *)&ptr->padding_0[244]);
 if (*((int *)&ptr->padding_0[244]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[244];
 do
 {
 p = v6;
 ((void (*)(void))v4)();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401e12 at 0x401e12
void sub_401e12()
{
}



/* CRT stub function _fini removed by preprocessor */


