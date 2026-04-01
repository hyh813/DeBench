/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/4/4_clang_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

typedef unsigned char undefined1;
typedef unsigned char byte;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void *undefined;
typedef int (*code)(int);

/* C++ runtime symbols */
extern void __cxa_finalize(void *dso_handle);
extern void *__dso_handle;
extern void deregister_tm_clones(void);

/* Global variables */
char completed_0 = '\0';

undefined8 ret_opaque_handle_handle1 = 0;
undefined8 ret_opaque_handle_handle2 = 0;

/* Data symbols */
char DAT_00101dc0[] = "Testing calling conventions...\n";
char DAT_00101e82[] = "CALL-L2-07: %d\n";
char DAT_00101eaa[] = "CALL-L2-08: %d\n";
char DAT_00101ecc[] = "CALL-L2-09: %d\n";
char DAT_00101ef3[] = "test string";
char DAT_00101ef8[] = "CALL-L2-10: %d\n";
char DAT_00101f20[] = "CALL-L2-07: %d\n";
char DAT_00101f4c[] = "CALL-L2-08: %d\n";
char DAT_00101f7f[] = "ptr1";
char DAT_00101f83[] = "ptr2";
char DAT_00101f87[] = "ptr3";
char DAT_00101f8b[] = "Testing parameter passing...\n";

char DAT_00102068[] = "Testing return values...\n";
char DAT_00102087[] = "RET-L1-01: %d\n";
char DAT_001020a3[] = "RET-L1-02: %d\n";
char DAT_001020bf[] = "RET-L1-03: %d\n";
char DAT_001020da[] = "RET-L2-01: %d\n";
char DAT_001020f7[] = "RET-L2-02: %d\n";
char DAT_00102113[] = "RET-L2-03: %d\n";
char DAT_00102130[] = "RET-L2-04: %d\n";
char DAT_0010214c[] = "RET-L2-05: %d\n";
char DAT_00102168[] = "RET-L2-06: %d\n";

/* Helper for accessing variadic arguments */
int *register0x00000008(void) {
    static int va_args_buffer[32];
    return va_args_buffer;
}


/* Function: FUN_001006d0 @ 001006d0 */

void FUN_001006d0(void)

{
 (*(code *)(undefined *)0x0)(0);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones(void)
{
    return;
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010083c @ 0010083c */

void FUN_0010083c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 00100894 */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 001008b4 */

int call_cdecl(void)

{
 return cdecl_func(5,10);
}



/* Function: stdcall_func @ 001008d0 */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 001008f0 */

int call_stdcall(void)

{
 return stdcall_func(5,10);
}



/* Function: fastcall_func @ 0010090c */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 00100938 */

int call_fastcall(void)

{
 return fastcall_func(1,2,3);
}



/* Function: call_thiscall @ 00100958 */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00100960 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 001009a4 */

int call_arm_aapcs(void)

{
 return arm_aapcs_func(1,2,3,4,5);
}



/* Function: mips_func @ 001009cc */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 00100a04 */

int call_mips(void)

{
 return mips_func(10,0x14,0x1e,0x28);
}



/* Function: amd64_sysv_func @ 00100a28 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00100a78 */

int call_amd64_sysv(void)

{
 return amd64_sysv_func(1,2,3,4,5,6);
}



/* Function: ms_x64_func @ 00100aa4 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00100ae8 */

int call_ms_x64(void)

{
 return ms_x64_func(1,2,3,4,5);
}



/* Function: vectorcall_func @ 00100b10 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00100b48 */

int call_vectorcall(void)

{
 return vectorcall_func(1,2,3,4);
}



/* Function: mixed_conventions_test @ 00100b6c */

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



/* Function: varargs_func @ 00100bd8 */

int varargs_func(int param_1)

{
 int iVar1;
 int *local_118;
 int local_40 [2];
 int *piVar2;
 int *piVar3;
 int local_20;
 
 local_40[1] = 0;
 local_20 = -0x38;
 piVar2 = (int *)register0x00000008;
 for (local_40[0] = 0; local_40[0] < param_1; local_40[0] = local_40[0] + 1) {
 iVar1 = local_20;
 if ((local_20 < 0) && (iVar1 = local_20 + 8, iVar1 < 1)) {
 local_118 = (int *)((long)local_40 + (long)local_20);
 piVar3 = piVar2;
 local_20 = iVar1;
 }
 else {
 local_20 = iVar1;
 piVar3 = piVar2 + 2;
 local_118 = piVar2;
 }
 local_40[1] = local_40[1] + *local_118;
 piVar2 = piVar3;
 }
 return local_40[1];
}



/* Function: func_no_args @ 00100d10 */

undefined8 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00100d18 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00100d80 */

int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)

{
 size_t sVar1;
 undefined4 local_40;
 
 if (param_3 == (char *)0x0) {
 local_40 = 0;
 }
 else {
 sVar1 = strlen(param_3);
 local_40 = (int)sVar1;
 }
 return (int)((double)(param_2 + local_40) + param_1 + (double)param_4);
}



/* Function: func_struct_byval @ 00100e00 */

ulong func_struct_byval(long param_1)

{
 undefined4 local_c;
 undefined8 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
 local_8 = local_8 + *(long *)(param_1 + (long)local_c * 8);
 }
 return local_8 & 0xffffffff;
}



/* Function: func_struct_byptr @ 00100e60 */

int func_struct_byptr(int *param_1)

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



/* Function: test_calling_conventions @ 00100ea8 */

int test_calling_conventions(void)

{
 int iVar1;
 uint uVar2;
 ulong uVar3;
 undefined8 local_150;
 undefined1 auStack_148 [128];
 uint local_c8;
 int local_c4;
 long alStack_c0 [16];
 uint local_3c;
 undefined *local_38;
 uint local_2c;
 uint local_28;
 uint local_24;
 
 iVar1 = printf(DAT_00101dc0);
 uVar3 = call_cdecl();
 iVar1 = printf("CALL-L1-01: %d\n",uVar3 & 0xffffffff);
 uVar3 = call_stdcall();
 iVar1 = printf("CALL-L1-02: %d\n",uVar3 & 0xffffffff);
 uVar3 = call_fastcall();
 iVar1 = printf("CALL-L1-03: %d\n",uVar3 & 0xffffffff);
 uVar3 = call_thiscall();
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
 iVar1 = printf(DAT_00101e82,(ulong)local_24);
 local_28 = func_no_args();
 printf(DAT_00101eaa,(ulong)local_28);
 local_2c = func_many_args(1,2,3,4,5,6,7,8);
 printf(DAT_00101ecc,(ulong)local_2c);
 local_38 = (undefined *)DAT_00101ef3;
 local_3c = func_mixed_args(0x40091eb851eb851f,10,DAT_00101ef3,100);
 printf(DAT_00101ef8,(ulong)local_3c);
 for (local_c4 = 0; local_c4 < 0x10; local_c4 = local_c4 + 1) {
 alStack_c0[local_c4] = (long)(local_c4 + 1);
 }
 memcpy(auStack_148,alStack_c0,0x80);
 local_c8 = func_struct_byval((long)auStack_148);
 printf(DAT_00101f20,(ulong)local_c8);
 local_150 = 0xa00000005;
 uVar2 = func_struct_byptr((int *)&local_150);
 iVar1 = printf(DAT_00101f4c,(ulong)uVar2);
 return iVar1;
}



/* Function: param_by_value_int @ 00101118 */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 00101138 */

int call_by_value_int(void)

{
 int iVar1;
 
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 00101170 */

undefined1 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 001011a8 */

int call_by_value_ptr(void)

{
 int iVar1;
 int local_14;
 
 local_14 = 5;
 iVar1 = param_by_value_ptr(&local_14);
 return local_14 + iVar1;
}



/* Function: param_array_decay @ 001011e8 */

undefined8 param_array_decay(void *param_1, int param_2)

{
 return 8;
}



/* Function: call_array_decay @ 00101200 */

int call_array_decay(void)

{
 undefined1 auStack_38 [40];
 
 memset(auStack_38,0,0x28);
 return param_array_decay(auStack_38,10);
}



/* Function: param_string @ 00101238 */

int param_string(unsigned char *param_1)

{
 return (uint)*param_1 + (uint)param_1[1];
}



/* Function: call_string_param @ 0010125c */

int call_string_param(void)

{
 return param_string("Hello");
}



/* Function: param_ptr_array @ 00101278 */

int param_ptr_array(long param_1,int param_2)

{
 undefined4 local_14;
 undefined4 local_10;
 
 local_10 = 0;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_10 = local_10 + (uint)**(byte **)(param_1 + (long)local_14 * 8);
 }
 return local_10;
}



/* Function: call_ptr_array @ 001012e0 */

int call_ptr_array(void)

{
 undefined *local_30;
 undefined *puStack_28;
 undefined *local_20;
 
 puStack_28 = (undefined *)&DAT_00101f83;
 local_30 = (undefined *)&DAT_00101f7f;
 local_20 = (undefined *)&DAT_00101f87;
 return param_ptr_array((long)&local_30,3);
}



/* Function: param_varargs @ 0010131c */

int param_varargs(int param_1, ...)

{
 int iVar1;
 int *local_118;
 int local_40 [2];
 int *piVar2;
 int *piVar3;
 int local_20;
 
 local_20 = -0x38;
 local_40[1] = 0;
 piVar2 = (int *)register0x00000008;
 for (local_40[0] = 0; local_40[0] < param_1; local_40[0] = local_40[0] + 1) {
 iVar1 = local_20;
 if ((local_20 < 0) && (iVar1 = local_20 + 8, iVar1 < 1)) {
 local_118 = (int *)((long)local_40 + (long)local_20);
 piVar3 = piVar2;
 local_20 = iVar1;
 }
 else {
 local_20 = iVar1;
 piVar3 = piVar2 + 2;
 local_118 = piVar2;
 }
 local_40[1] = local_40[1] + *local_118;
 piVar2 = piVar3;
 }
 return local_40[1];
}



/* Function: call_varargs_param @ 00101454 */

int call_varargs_param(void)

{
 return param_varargs(4,10,0x14,0x1e,0x28);
}



/* Forward declaration */
int callback_func(int param_1);

/* Function: param_func_ptr @ 0010147c */

int param_func_ptr(code param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = param_1(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 001014ac */

int call_func_ptr_param(void)

{
 return param_func_ptr(callback_func,5);
}



/* Function: callback_func @ 001014cc */

int callback_func(int param_1)

{
 return param_1 << 1;
}



/* Function: param_double_ptr @ 001014e4 */

undefined4 param_double_ptr(int **param_1,undefined4 param_2)

{
 undefined4 local_4;
 
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



/* Function: call_double_ptr @ 00101548 */

int call_double_ptr(void)

{
 int **local_20;
 int *local_18;
 int local_14;
 
 local_18 = &local_14;
 local_20 = &local_18;
 local_14 = 10;
 param_double_ptr(local_20,0x14);
 return local_14 + (uint)(local_18 == (int *)0x0);
}



/* Function: param_complex_cast @ 00101598 */

int param_complex_cast(int *param_1,int param_2)

{
 int local_4;
 
 if (param_2 == 0) {
 local_4 = *param_1;
 }
 else if (param_2 == 1) {
 local_4 = *param_1 + param_1[1];
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: call_complex_cast @ 00101628 */

int call_complex_cast(void)

{
 undefined8 local_20;
 undefined4 local_14;
 
 local_14 = 0x12345678;
 local_20 = 0xc800000064;
 return param_complex_cast(&local_14,0);
}



/* Function: param_struct_byval @ 0010167c */

int param_struct_byval(void *param_1)

{
 int *piVar1 = (int *)param_1;
 return *piVar1 + piVar1[0xf];
}



/* Function: call_struct_byval @ 0010168c */

int call_struct_byval(void)

{
 undefined1 auStack_94 [64];
 int local_54;
 int aiStack_50 [16];
 
 for (local_54 = 0; local_54 < 0x10; local_54 = local_54 + 1) {
 aiStack_50[local_54] = local_54;
 }
 memcpy(auStack_94,aiStack_50,0x40);
 return param_struct_byval((int *)auStack_94);
}



/* Function: param_order_dep @ 001016fc */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 0010171c */

int call_order_dep(void)

{
 return param_order_dep(1,2);
}



/* Function: test_parameter_passing @ 00101754 */

int test_parameter_passing(void)

{
 int iVar1;
 ulong uVar2;
 
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



/* Function: ret_basic_type @ 0010184c */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00101864 */

undefined4 call_ret_basic(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = ret_basic_type(param_1);
 return uVar1;
}



/* Function: ret_pointer @ 00101894 */

long ret_pointer(void *param_1)

{
 return (long)param_1 + 4;
}



/* Function: call_ret_pointer @ 001018ac */

undefined4 call_ret_pointer(int param_1)

{
 undefined4 *puVar1;
 undefined8 local_20;
 undefined4 local_18;
 
 local_20 = 0x140000000a;
 local_18 = 0x1e;
 puVar1 = (undefined4 *)ret_pointer(&local_20);
 return *puVar1;
}



/* Function: ret_small_struct @ 001018f0 */

undefined8 ret_small_struct(undefined4 param_1,undefined4 param_2)

{
 return ((uint64_t)param_2 << 32) | (uint64_t)param_1;
}



/* Function: call_ret_small_struct @ 00101918 */

int call_ret_small_struct(void)

{
 undefined8 uVar1;
 undefined4 local_18;
 undefined4 uStack_14;
 
 uVar1 = ret_small_struct(3,4);
 local_18 = (int)uVar1;
 uStack_14 = (int)((ulong)uVar1 >> 0x20);
 return local_18 + uStack_14;
}



/* Function: ret_large_struct @ 0010194c */

void ret_large_struct(int *param_1,int param_2)

{
 undefined4 local_8;
 
 for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
 param_1[local_8] = param_2 + local_8;
 }
 return;
}



/* Function: call_ret_large_struct @ 001019a4 */

int call_ret_large_struct(void)

{
 int local_50 [15];
 int local_14;
 
 ret_large_struct(local_50,100);
 return local_50[0] + local_14;
}



/* Function: func_a @ 001019d4 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 001019ec */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: ret_func_ptr @ 00101a04 */

code ret_func_ptr(int param_1)

{
 code pcVar1;
 
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101a30 */

int call_ret_func_ptr(void)

{
 code pcVar1;
 
 pcVar1 = ret_func_ptr(1);
 return pcVar1(5);
}



/* Function: ret_opaque_handle @ 00101a60 */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
 if (param_1 != 0) {
 puVar1 = &ret_opaque_handle_handle2;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101a8c */

undefined4 call_ret_opaque(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)ret_opaque_handle(0);
 return *puVar1;
}



/* Function: ret_complex_expr @ 00101ab8 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 undefined4 local_10;
 
 if (param_1 != 0) {
 local_10 = param_3 << 1;
 }
 else {
 local_10 = param_3 + 10;
 }
 return local_10;
}



/* Function: call_ret_complex_expr @ 00101b08 */

int call_ret_complex_expr(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = ret_complex_expr(0,5,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar1 + iVar2;
}



/* Function: ret_multi_branch @ 00101b64 */

undefined4 ret_multi_branch(int param_1)

{
 undefined4 local_4;
 
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



/* Function: call_ret_multi_branch @ 00101bd8 */

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



/* Function: ret_void @ 00101c34 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00101c5c */

undefined4 call_ret_void(void)

{
 undefined4 local_14;
 
 ret_void(7,&local_14);
 return local_14;
}



/* Function: test_return_values @ 00101c84 */

int test_return_values(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = printf(DAT_00102068);
 uVar2 = call_ret_basic(iVar1);
 iVar1 = printf(DAT_00102087,uVar2 & 0xffffffff);
 uVar2 = call_ret_pointer(iVar1);
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



/* Function: main @ 00101d54 */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* Function: _fini @ 00101d88 */

static void _fini(void)

{
 return;
}



/* Total functions decompiled: 80 */
