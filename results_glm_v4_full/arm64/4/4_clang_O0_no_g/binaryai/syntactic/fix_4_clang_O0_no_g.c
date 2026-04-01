#include <stdint.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
/* uint64_t, int64_t, intmax_t, uintmax_t defined in stdint.h */
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef unsigned int uint;
typedef unsigned char byte;
#define NULL ((void*)0)

/* Helper macros for decompiled code */
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | ((uint32_t)(low) & 0xFFFFFFFF))

/* Global variable declarations */
static char completed_0 = 0;
static void *__dso_handle = NULL;
static unsigned long long stack0x00000008 = 0;
static unsigned long long ret_opaque_handle_handle1 = 0;
static unsigned long long ret_opaque_handle_handle2 = 0;
static const char *DAT_00101dc0 = "Calling Conventions Test:\n";
static const char *DAT_00101e82 = "CALL-L1-00: %lu\n";
static const char *DAT_00101eaa = "CALL-L1-11: %lu\n";
static const char *DAT_00101ecc = "CALL-L1-12: %lu\n";
static const char *DAT_00101ef3 = "Hello";
static const char *DAT_00101ef8 = "CALL-L1-13: %lu\n";
static const char *DAT_00101f20 = "CALL-L1-14: %lu\n";
static const char *DAT_00101f4c = "CALL-L1-15: %lu\n";
static const char *DAT_00101f7f = "A";
static const char *DAT_00101f83 = "B";
static const char *DAT_00101f87 = "C";
static const char *DAT_00101f8b = "Parameter Passing Test:\n";
static const char *DAT_00102068 = "Return Values Test:\n";
static const char *DAT_00102087 = "RET-L1-01: %lu\n";
static const char *DAT_001020a3 = "RET-L1-02: %lu\n";
static const char *DAT_001020bf = "RET-L1-03: %lu\n";
static const char *DAT_001020da = "RET-L1-04: %lu\n";
static const char *DAT_001020f7 = "RET-L1-05: %lu\n";
static const char *DAT_00102113 = "RET-L1-06: %lu\n";
static const char *DAT_00102130 = "RET-L1-07: %lu\n";
static const char *DAT_0010214c = "RET-L1-08: %lu\n";
static const char *DAT_00102168 = "RET-L1-09: %lu\n";

/* Forward declarations */
void __cxa_finalize(void *dso_handle);
void call_weak_fn(void);
void deregister_tm_clones(void);
int callback_func(int);

// Decompiled by BinaryAI
// SHA256: 223b2bb2d305c533daee07f1e07cec063f88332257f7c9ad7787c298fbf7325c



// Function: FUN_001006d0 @ 0x1006d0
void FUN_001006d0(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x100700
void deregister_tm_clones(void)
{
 return;
}

// Function: call_weak_fn @ 0x100718
void call_weak_fn(void)
{
 return;
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>







// Function: FUN_0010083c @ 0x10083c
void FUN_0010083c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}



// Function: cdecl_func @ 0x100894
int cdecl_func(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_cdecl @ 0x1008b4
int call_cdecl(int param_1)
{
 return cdecl_func(5,10);
}

// Function: stdcall_func @ 0x1008d0
int stdcall_func(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: call_stdcall @ 0x1008f0
int call_stdcall(int param_1)
{
 return stdcall_func(5,10);
}

// Function: fastcall_func @ 0x10090c
int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x100938
int call_fastcall(int param_1)
{
 return fastcall_func(1,2,3);
}

// Function: call_thiscall @ 0x100958
int call_thiscall(int param_1)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x100960
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x1009a4
int call_arm_aapcs(void)
{
 return arm_aapcs_func(1,2,3,4,5);
}

// Function: mips_func @ 0x1009cc
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x100a04
int call_mips(void)
{
 return mips_func(10,0x14,0x1e,0x28);
}

// Function: amd64_sysv_func @ 0x100a28
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x100a78
int call_amd64_sysv(void)
{
 return amd64_sysv_func(1,2,3,4,5,6);
}

// Function: ms_x64_func @ 0x100aa4
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x100ae8
int call_ms_x64(void)
{
 return ms_x64_func(1,2,3,4,5);
}

// Function: vectorcall_func @ 0x100b10
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x100b48
int call_vectorcall(void)
{
 return vectorcall_func(1,2,3,4);
}

// Function: mixed_conventions_test @ 0x100b6c
int mixed_conventions_test(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = cdecl_func(1,2);
 iVar2 = stdcall_func(3,4);
 iVar3 = fastcall_func(5,6,7);
 return iVar1 + iVar2 + iVar3;
}

// Function: varargs_func @ 0x100bd8
int varargs_func(int param_1, ...)
{
 int sum;
 __builtin_va_list args;
 int i;
 sum = 0;
 __builtin_va_start(args, param_1);
 for (i = 0; i < param_1; i = i + 1) {
 sum = sum + __builtin_va_arg(args, int);
 }
 __builtin_va_end(args);
 return sum;
}

// Function: func_no_args @ 0x100d10
unsigned long long func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x100d18
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x100d80
int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)
{
 size_t sVar1;
 int local_40;
 if (param_3 == (char *)0x0) {
 local_40 = 0;
 }
 else {
 sVar1 = strlen(param_3);
 local_40 = (int)sVar1;
 }
 return (int)((double)(param_2 + local_40) + param_1 + (double)param_4);
}

// Function: func_struct_byval @ 0x100e00
unsigned long func_struct_byval(long param_1)
{
 int local_c;
 unsigned long local_8;
 local_8 = 0;
 for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
 local_8 = local_8 + *(long *)(param_1 + (long)local_c * 8);
 }
 return local_8 & 0xffffffff;
}

// Function: func_struct_byptr @ 0x100e60
long long func_struct_byptr(long long *param_1)
{
 int local_4;
 if (param_1 == (int *)0x0) {
 local_4 = -1;
 }
 else {
 local_4 = *param_1 * param_1[1];
 }
 return local_4;
}

// Function: test_calling_conventions @ 0x100ea8
int test_calling_conventions(void)
{
 int iVar1;
 uint uVar2;
 unsigned long uVar3;
 unsigned long long local_150;
 char auStack_148 [128];
 uint local_c8;
 int local_c4;
 long alStack_c0 [16];
 uint local_3c;
 char *local_38;
 uint local_2c;
 uint local_28;
 uint local_24;
 iVar1 = printf(DAT_00101dc0);
 uVar3 = call_cdecl(iVar1);
 iVar1 = printf("CALL-L1-01: %d\n",uVar3 & 0xffffffff);
 uVar3 = call_stdcall(iVar1);
 iVar1 = printf("CALL-L1-02: %d\n",uVar3 & 0xffffffff);
 uVar3 = call_fastcall(iVar1);
 iVar1 = printf("CALL-L1-03: %d\n",uVar3 & 0xffffffff);
 uVar3 = call_thiscall(iVar1);
 iVar1 = printf("CALL-L1-04: %d\n",uVar3 & 0xffffffff);
 uVar3 = call_arm_aapcs();
 iVar1 = printf("CALL-L1-05: %d\n",uVar3 & 0xffffffff);
 uVar3 = call_mips();
 iVar1 = printf("CALL-L1-06: %d\n",uVar3 & 0xffffffff);
 uVar3 = call_amd64_sysv();
 iVar1 = printf("CALL-L1-07: %d\n",uVar3 & 0xffffffff);
 uVar3 = call_ms_x64();
 iVar1 = printf("CALL-L1-08: %d\n",uVar3 & 0xffffffff);
 uVar3 = call_vectorcall();
 iVar1 = printf("CALL-L1-09: %d\n",uVar3 & 0xffffffff);
 uVar3 = mixed_conventions_test();
 printf("CALL-L1-10: %d\n",uVar3 & 0xffffffff);
 local_24 = varargs_func(5);
 iVar1 = printf(DAT_00101e82,(unsigned long)local_24);
 local_28 = func_no_args();
 printf(DAT_00101eaa,(unsigned long)local_28);
 local_2c = func_many_args(1,2,3,4,5,6,7,8);
 printf(DAT_00101ecc,(unsigned long)local_2c);
 local_38 = DAT_00101ef3;
 local_3c = func_mixed_args(0x40091eb851eb851f,10,DAT_00101ef3,100);
 printf(DAT_00101ef8,(unsigned long)local_3c);
 for (local_c4 = 0; local_c4 < 0x10; local_c4 = local_c4 + 1) {
 alStack_c0[local_c4] = (long)(local_c4 + 1);
 }
 memcpy(auStack_148,alStack_c0,0x80);
 local_c8 = func_struct_byval((long)auStack_148);
 printf(DAT_00101f20,(unsigned long)local_c8);
 local_150 = 0xa00000005;
 uVar2 = func_struct_byptr(&local_150);
 iVar1 = printf(DAT_00101f4c,(unsigned long)uVar2);
 return iVar1;
}

// Function: param_by_value_int @ 0x101118
int param_by_value_int(int param_1)
{
 return param_1 << 1;
}

// Function: call_by_value_int @ 0x101138
int call_by_value_int(void)
{
 int iVar1;
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}

// Function: param_by_value_ptr @ 0x101170
char param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x1011a8
int call_by_value_ptr(void)
{
 int iVar1;
 int local_14;
 local_14 = 5;
 iVar1 = param_by_value_ptr(&local_14);
 return local_14 + iVar1;
}

// Function: param_array_decay @ 0x1011e8
unsigned long long param_array_decay(char *param_1, int param_2)
{
 return 8;
}

// Function: call_array_decay @ 0x101200
unsigned long long call_array_decay(void)
{
 char auStack_38 [40];
 memset(auStack_38,0,0x28);
 return param_array_decay(auStack_38,10);
}

// Function: param_string @ 0x101238
int param_string(byte *param_1)
{
 return (uint)*param_1 + (uint)param_1[1];
}

// Function: call_string_param @ 0x10125c
int call_string_param(void)
{
 return param_string("Hello");
}

// Function: param_ptr_array @ 0x101278
int param_ptr_array(const char **param_1,int param_2)
{
 int local_14;
 int local_10;
 local_10 = 0;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_10 = local_10 + (uint)**(byte **)((long)param_1 + (long)local_14 * 8);
 }
 return local_10;
}

// Function: call_ptr_array @ 0x1012e0
int call_ptr_array(void)
{
 const char *local_30;
 const char *puStack_28;
 const char *local_20;
 puStack_28 = DAT_00101f83;
 local_30 = DAT_00101f7f;
 local_20 = DAT_00101f87;
 return param_ptr_array(&local_30,3);
}

// Function: param_varargs @ 0x10131c
int param_varargs(int param_1, ...)
{
 int sum;
 __builtin_va_list args;
 int i;
 sum = 0;
 __builtin_va_start(args, param_1);
 for (i = 0; i < param_1; i = i + 1) {
 sum = sum + __builtin_va_arg(args, int);
 }
 __builtin_va_end(args);
 return sum;
}

// Function: call_varargs_param @ 0x101454
int call_varargs_param(void)
{
 return param_varargs(4,10,0x14,0x1e,0x28);
}

// Function: param_func_ptr @ 0x10147c
int param_func_ptr(int (*param_1)(int),unsigned int param_2)
{
 int iVar1;
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x1014ac
int call_func_ptr_param(void)
{
 return param_func_ptr(callback_func,5);
}

// Function: callback_func @ 0x1014cc
int callback_func(int param_1)
{
 return param_1 << 1;
}

// Function: param_double_ptr @ 0x1014e4
unsigned int param_double_ptr(int **param_1,unsigned int param_2)
{
 unsigned int local_4;
 if ((param_1 == (int **)0x0) || (*param_1 == (int *)0x0)) {
 local_4 = 0xffffffff;
 }
 else {
 **param_1 = param_2;
 *param_1 = (int *)0x0;
 local_4 = 1;
 }
 return local_4;
}

// Function: call_double_ptr @ 0x101548
int call_double_ptr(void)
{
 int *local_20;
 int local_14;
 local_20 = &local_14;
 local_14 = 10;
 param_double_ptr(&local_20,0x14);
 return local_14 + (uint)(local_20 == (int *)0x0);
}

// Function: param_complex_cast @ 0x101598
int param_complex_cast(unsigned long long *param_1,int param_2)
{
 int local_4;
 if (param_2 == 0) {
 local_4 = *(unsigned int *)param_1;
 }
 else if (param_2 == 1) {
 local_4 = *(unsigned int *)param_1 + ((unsigned int *)param_1)[1];
 }
 else {
 local_4 = -1;
 }
 return local_4;
}

// Function: call_complex_cast @ 0x101628
int call_complex_cast(void)
{
 unsigned long long local_20;
 unsigned int local_14;
 int iVar1;
 int iVar2;
 local_14 = 0x12345678;
 local_20 = 0xc800000064;
 iVar1 = param_complex_cast((unsigned long long *)&local_20,1);
 iVar2 = param_complex_cast((unsigned long long *)&local_14,0);
 return iVar1 + iVar2;
}

// Function: param_struct_byval @ 0x10167c
int param_struct_byval(int *param_1)
{
 return *param_1 + param_1[0xf];
}

// Function: call_struct_byval @ 0x10168c
int call_struct_byval(void)
{
 char auStack_94 [64];
 int local_54;
 int aiStack_50 [16];
 for (local_54 = 0; local_54 < 0x10; local_54 = local_54 + 1) {
 aiStack_50[local_54] = local_54;
 }
 memcpy(auStack_94,aiStack_50,0x40);
 return param_struct_byval((int *)auStack_94);
}

// Function: param_order_dep @ 0x1016fc
int param_order_dep(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_order_dep @ 0x10171c
int call_order_dep(void)
{
 return param_order_dep(0, 0);
}

// Function: test_parameter_passing @ 0x101754
int test_parameter_passing(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = printf(DAT_00101f8b);
 uVar2 = call_by_value_int();
 iVar1 = printf("PARAM-L1-01: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_by_value_ptr();
 iVar1 = printf("PARAM-L1-02: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_array_decay();
 iVar1 = printf("PARAM-L2-01: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_string_param();
 iVar1 = printf("PARAM-L2-02: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_ptr_array();
 iVar1 = printf("PARAM-L2-03: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_varargs_param();
 iVar1 = printf("PARAM-L2-04: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_func_ptr_param();
 iVar1 = printf("PARAM-L3-01: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_double_ptr();
 iVar1 = printf("PARAM-L3-02: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_complex_cast();
 iVar1 = printf("PARAM-L3-03: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_struct_byval();
 iVar1 = printf("PARAM-L3-04: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_order_dep();
 iVar1 = printf("PARAM-L3-05: %d\n",uVar2 & 0xffffffff);
 return iVar1;
}

// Function: ret_basic_type @ 0x10184c
int ret_basic_type(int param_1)
{
 return param_1 << 1;
}

// Function: call_ret_basic @ 0x101864
unsigned int call_ret_basic(void)
{
 unsigned int uVar1;
 uVar1 = ret_basic_type(0x15);
 return uVar1;
}

// Function: ret_pointer @ 0x101894
long ret_pointer(long param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x1018ac
unsigned int call_ret_pointer(void)
{
 unsigned int *puVar1;
 unsigned long long local_20;
 unsigned int local_18;
 local_20 = 0x140000000a;
 local_18 = 0x1e;
 puVar1 = (unsigned int *)ret_pointer((long)&local_20);
 return *puVar1;
}

// Function: ret_small_struct @ 0x1018f0
unsigned long long ret_small_struct(unsigned int param_1,unsigned int param_2)
{
 return CONCAT44(param_2,param_1);
}

// Function: call_ret_small_struct @ 0x101918
int call_ret_small_struct(void)
{
 unsigned long long uVar1;
 int local_18;
 int iStack_14;
 uVar1 = ret_small_struct(3,4);
 local_18 = (int)uVar1;
 iStack_14 = (int)((unsigned long)uVar1 >> 0x20);
 return local_18 + iStack_14;
}

// Function: ret_large_struct @ 0x10194c
void ret_large_struct(int param_1)
{
 long in_x8;
 int local_8;
 for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
 *(int *)(in_x8 + (long)local_8 * 4) = param_1 + local_8;
 }
 return;
}

// Function: call_ret_large_struct @ 0x1019a4
int call_ret_large_struct(void)
{
 int local_50;
 int local_14;
 ret_large_struct(100);
 return local_50 + local_14;
}

// Function: func_a @ 0x1019d4
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x1019ec
int func_b(int param_1)
{
 return param_1 << 1;
}

// Function: ret_func_ptr @ 0x101a04
void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x101a30
int call_ret_func_ptr(void)
{
 int (*pcVar1)(int);
 pcVar1 = (int (*)(int))ret_func_ptr(1);
 return (*pcVar1)(5);
}

// Function: ret_opaque_handle @ 0x101a60
unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)&ret_opaque_handle_handle1;
 if (param_1 != 0) {
 puVar1 = &ret_opaque_handle_handle2;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x101a8c
unsigned int call_ret_opaque(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)ret_opaque_handle(0);
 return *puVar1;
}

// Function: ret_complex_expr @ 0x101ab8
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int local_10;
 if (param_2 < param_1) {
 local_10 = param_3 << 1;
 }
 else {
 local_10 = param_3 + 10;
 }
 return local_10;
}

// Function: call_ret_complex_expr @ 0x101b08
int call_ret_complex_expr(void)
{
 int iVar1;
 int iVar2;
 iVar1 = ret_complex_expr(1,1,0);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar1 + iVar2;
}

// Function: ret_multi_branch @ 0x101b64
unsigned int ret_multi_branch(int param_1)
{
 unsigned int local_4;
 if (param_1 == 0) {
 local_4 = 10;
 }
 else if (param_1 == 1) {
 local_4 = 0x14;
 }
 else if (param_1 == 2) {
 local_4 = 0x1e;
 }
 else {
 local_4 = 0xffffffff;
 }
 return local_4;
}

// Function: call_ret_multi_branch @ 0x101bd8
int call_ret_multi_branch(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = ret_multi_branch(0);
 iVar2 = ret_multi_branch(1);
 iVar3 = ret_multi_branch(2);
 return iVar1 + iVar2 + iVar3;
}

// Function: ret_void @ 0x101c34
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x101c5c
unsigned int call_ret_void(void)
{
 unsigned int local_14;
 ret_void(7,&local_14);
 return local_14;
}

// Function: test_return_values @ 0x101c84
int test_return_values(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = printf(DAT_00102068);
 uVar2 = call_ret_basic();
 iVar1 = printf(DAT_00102087,uVar2 & 0xffffffff);
 uVar2 = call_ret_pointer();
 iVar1 = printf(DAT_001020a3,uVar2 & 0xffffffff);
 uVar2 = call_ret_small_struct();
 iVar1 = printf(DAT_001020bf,uVar2 & 0xffffffff);
 uVar2 = call_ret_large_struct();
 iVar1 = printf(DAT_001020da,uVar2 & 0xffffffff);
 uVar2 = call_ret_func_ptr();
 iVar1 = printf(DAT_001020f7,uVar2 & 0xffffffff);
 uVar2 = call_ret_opaque();
 iVar1 = printf(DAT_00102113,uVar2 & 0xffffffff);
 uVar2 = call_ret_complex_expr();
 iVar1 = printf(DAT_00102130,uVar2 & 0xffffffff);
 uVar2 = call_ret_multi_branch();
 iVar1 = printf(DAT_0010214c,uVar2 & 0xffffffff);
 uVar2 = call_ret_void();
 iVar1 = printf(DAT_00102168,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x101d54
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



