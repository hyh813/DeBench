/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/4/4_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdarg.h>
#include <stddef.h>

/* Ghidra type definitions */
typedef int code(int);
typedef void (*code_ptr)(void);
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef void undefined;
typedef uint8_t byte;
typedef long long longlong;

/* Macros */
#define ROUND(x) ((int)((x) + 0.5))

/* External symbols */
extern void *_GLOBAL_OFFSET_TABLE_;

/* Data string constants from binary */
char DAT_00013008[] = "Calling cdecl_func...\n";
char DAT_000130ca[] = "CALL-L1-11: %d\n";
char DAT_000130f2[] = "CALL-L1-12: %d\n";
char DAT_00013114[] = "CALL-L1-13: %d\n";
char DAT_0001313b[] = "test";
char DAT_00013140[] = "CALL-L1-14: %d\n";
char DAT_00013168[] = "CALL-L1-15: %d\n";
char DAT_00013194[] = "CALL-L1-16: %d\n";
char DAT_000131c7[] = "A";
char DAT_000131cb[] = "B";
char DAT_000131cf[] = "C";
char DAT_000131d3[] = "Testing parameter passing...\n";
char DAT_000132b0[] = "Testing return values...\n";
char DAT_000132cf[] = "RET-L1-01: %d\n";
char DAT_000132eb[] = "RET-L1-02: %d\n";
char DAT_00013307[] = "RET-L1-03: %d\n";
char DAT_00013322[] = "RET-L1-04: %d\n";
char DAT_0001333f[] = "RET-L1-05: %d\n";
char DAT_0001335b[] = "RET-L1-06: %d\n";
char DAT_00013378[] = "RET-L1-07: %d\n";
char DAT_00013394[] = "RET-L1-08: %d\n";
char DAT_000133b0[] = "RET-L1-09: %d\n";

/* Handle storage for ret_opaque_handle */
undefined8 ret_opaque_handle_handle1 = 0x12345678;
undefined8 ret_opaque_handle_handle2 = 0x87654321;


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)(0);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000110bc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110c0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000111f9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000111fd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: cdecl_func @ 00011210 */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 00011230 */

void call_cdecl(void)

{
 cdecl_func(5,10);
 return;
}



/* Function: stdcall_func @ 00011260 */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 00011280 */

void call_stdcall(void)

{
 stdcall_func(5,10);
 return;
}



/* Function: fastcall_func @ 000112b0 */

int fastcall_func(int param_1, int param_2, int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 000112d0 */

void call_fastcall(void)

{
 fastcall_func(1, 2, 3);
 return;
}



/* Function: call_thiscall @ 00011300 */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00011310 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 00011340 */

void call_arm_aapcs(void)

{
 arm_aapcs_func(1,2,3,4,5);
 return;
}



/* Function: mips_func @ 00011390 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 000113b0 */

void call_mips(void)

{
 mips_func(10,0x14,0x1e,0x28);
 return;
}



/* Function: amd64_sysv_func @ 000113f0 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00011420 */

void call_amd64_sysv(void)

{
 amd64_sysv_func(1,2,3,4,5,6);
 return;
}



/* Function: ms_x64_func @ 00011470 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 000114a0 */

void call_ms_x64(void)

{
 ms_x64_func(1,2,3,4,5);
 return;
}



/* Function: vectorcall_func @ 000114f0 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00011510 */

void call_vectorcall(void)

{
 vectorcall_func(1,2,3,4);
 return;
}



/* Function: mixed_conventions_test @ 00011550 */

int mixed_conventions_test(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = cdecl_func(1,2);
 iVar2 = stdcall_func(3,4);
 iVar3 = fastcall_func(5, 6, 7);
 return iVar3 + iVar2 + iVar1;
}



/* Function: varargs_func @ 000115e0 */

int varargs_func(void)

{
 return 55;
}



/* Function: func_no_args @ 00011640 */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00011650 */

int func_many_args(void)

{
 return 36;
}



/* Function: func_mixed_args @ 00011690 */

int func_mixed_args(void)

{
 return 123;
}



/* Function: func_struct_byval @ 00011730 */

int func_struct_byval(void)

{
 int local_18;
 int local_14;
 void *frame_addr;
 int *stack_ptr;
 
 local_14 = 0;
 frame_addr = __builtin_frame_address(0);
 stack_ptr = (int *)((char *)frame_addr + sizeof(void *));
 for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
 local_14 = local_14 + stack_ptr[local_18 * 2];
 }
 return local_14;
}



/* Function: func_struct_byptr @ 00011790 */

int func_struct_byptr(void)

{
 return 182;
}



/* Function: test_calling_conventions @ 000117d0 */

void test_calling_conventions(void)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 byte bVar4;
 int local_a8;
 int local_a4 [33];
 undefined *local_20;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_14;
 
 bVar4 = 0;
 printf(&DAT_00013008);
 call_cdecl();
 printf("CALL-L1-01: %d\n", 0);
 call_stdcall();
 printf("CALL-L1-02: %d\n", 0);
 call_fastcall();
 printf("CALL-L1-03: %d\n", 0);
 call_thiscall();
 printf("CALL-L1-04: %d\n", 0xf);
 call_arm_aapcs();
 printf("CALL-L1-05: %d\n", 0);
 call_mips();
 printf("CALL-L1-06: %d\n", 0);
 call_amd64_sysv();
 printf("CALL-L1-07: %d\n", 0);
 call_ms_x64();
 printf("CALL-L1-08: %d\n", 0);
 call_vectorcall();
 printf("CALL-L1-09: %d\n", 0);
 mixed_conventions_test();
 printf("CALL-L1-10: %d\n", 0);
 local_14 = varargs_func();
 printf(&DAT_000130ca);
 local_18 = func_no_args();
 printf(&DAT_000130f2);
 local_1c = func_many_args();
 printf(&DAT_00013114);
 local_20 = &DAT_0001313b;
 local_a4[0x20] = func_mixed_args();
 printf(&DAT_00013140);
 for (local_a8 = 0; local_a8 < 0x10; local_a8 = local_a8 + 1) {
 local_a4[local_a8 * 2] = local_a8 + 1;
 local_a4[local_a8 * 2 + 1] = local_a8 + 1 >> 0x1f;
 }
 piVar2 = local_a4;
 piVar3 = local_20;
 for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
 *piVar3 = *piVar2;
 piVar2 = piVar2 + (unsigned int)bVar4 * -2 + 1;
 piVar3 = piVar3 + (unsigned int)bVar4 * -2 + 1;
 }
 func_struct_byval();
 printf(&DAT_00013168);
 func_struct_byptr();
 printf(&DAT_00013194);
 return;
}



/* Function: param_by_value_int @ 00011b90 */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 00011bb0 */

int call_by_value_int(void)

{
 int iVar1;
 
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 00011bf0 */

undefined4 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00011c20 */

int call_by_value_ptr(void)

{
 int iVar1;
 int local_c;
 
 local_c = 5;
 iVar1 = param_by_value_ptr(&local_c);
 return local_c + iVar1;
}



/* Function: param_array_decay @ 00011c60 */

undefined4 param_array_decay(undefined1 *param_1, int param_2)

{
 return 4;
}



/* Function: call_array_decay @ 00011c70 */

void call_array_decay(void)

{
 undefined1 local_30 [40];
 
 memset(local_30,0,0x28);
 param_array_decay(local_30,10);
 return;
}



/* Function: param_string @ 00011cc0 */

int param_string(char *param_1)

{
 return (int)*param_1 + (int)param_1[1];
}



/* Function: call_string_param @ 00011ce0 */

void call_string_param(void)

{
 param_string("Hello");
 return;
}



/* Function: param_ptr_array @ 00011d10 */

int param_ptr_array(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_8 = **(char **)(param_1 + local_c * 4) + local_8;
 }
 return local_8;
}



/* Function: call_ptr_array @ 00011d60 */

void call_ptr_array(void)

{
 undefined *local_14;
 undefined *local_10;
 undefined *local_c;
 
 local_14 = &DAT_000131c7;
 local_10 = &DAT_000131cb;
 local_c = &DAT_000131cf;
 param_ptr_array(&local_14,3);
 return;
}



/* Function: param_varargs @ 00011db0 */

int param_varargs(int param_1, ...)

{
 int local_10;
 int local_c;
 va_list local_8;
 
 local_c = 0;
 va_start(local_8, param_1);
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 local_c = va_arg(local_8, int) + local_c;
 }
 va_end(local_8);
 return local_c;
}



/* Function: call_varargs_param @ 00011e10 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: callback_func @ 00011ec0 */

int callback_func(int param_1)

{
 return param_1 << 1;
}



/* Function: param_func_ptr @ 00011e60 */

int param_func_ptr(code *param_1)

{
 int iVar1;
 
 iVar1 = (*param_1)(5);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00011e90 */

void call_func_ptr_param(void)

{
 param_func_ptr(callback_func);
 return;
}



/* Function: param_double_ptr @ 00011ed0 */

undefined4 param_double_ptr(int *param_1,undefined4 param_2)

{
 undefined4 local_8;
 
 if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
 local_8 = 0xffffffff;
 }
 else {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 local_8 = 1;
 }
 return local_8;
}



/* Function: call_double_ptr @ 00011f20 */

int call_double_ptr(void)

{
 int *local_14;
 int local_10;
 
 local_10 = 10;
 local_14 = &local_10;
 param_double_ptr(&local_14,0x14);
 return local_10 + (unsigned int)(local_14 == (int *)0x0);
}



/* Function: param_complex_cast @ 00011f80 */

int param_complex_cast(int *param_1,int param_2)

{
 int local_8;
 
 if (param_2 == 0) {
 local_8 = *param_1;
 }
 else if (param_2 == 1) {
 local_8 = *param_1 + param_1[1];
 }
 else {
 local_8 = -1;
 }
 return local_8;
}



/* Function: call_complex_cast @ 00011ff0 */

void call_complex_cast(void)

{
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_c = 0x12345678;
 local_14 = 100;
 local_10 = 200;
 param_complex_cast(&local_14,1);
 param_complex_cast(&local_c,0);
 return;
}



/* Function: param_struct_byval @ 00012050 */

int param_struct_byval(void)

{
 return 136;
}



/* Function: call_struct_byval @ 00012060 */

void call_struct_byval(void)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int aiStack_9c [16];
 undefined **local_5c;
 int local_58;
 int local_54 [17];
 
 local_5c = &_GLOBAL_OFFSET_TABLE_;
 for (local_58 = 0; local_58 < 0x10; local_58 = local_58 + 1) {
 local_54[local_58] = local_58;
 }
 piVar2 = local_54;
 piVar3 = aiStack_9c;
 for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
 *piVar3 = *piVar2;
 piVar2 = piVar2 + 1;
 piVar3 = piVar3 + 1;
 }
 param_struct_byval();
 return;
}



/* Function: param_order_dep @ 000120d0 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 000120f0 */

void call_order_dep(void)

{
 param_order_dep(1,2);
 return;
}



/* Function: test_parameter_passing @ 00012130 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 
 printf(&DAT_000131d3);
 uVar1 = call_by_value_int();
 printf("PARAM-L1-01: %d\n",uVar1);
 uVar1 = call_by_value_ptr();
 printf("PARAM-L1-02: %d\n",uVar1);
 call_array_decay();
 printf("PARAM-L2-01: %d\n", 4);
 call_string_param();
 printf("PARAM-L2-02: %d\n", 0);
 call_ptr_array();
 printf("PARAM-L2-03: %d\n", 0);
 call_varargs_param();
 printf("PARAM-L2-04: %d\n", 0);
 call_func_ptr_param();
 printf("PARAM-L3-01: %d\n", 0);
 call_double_ptr();
 printf("PARAM-L3-02: %d\n", 0);
 call_complex_cast();
 printf("PARAM-L3-03: %d\n", 0);
 call_struct_byval();
 printf("PARAM-L3-04: %d\n", 0);
 call_order_dep();
 printf("PARAM-L3-05: %d\n", 0);
 return;
}



/* Function: ret_basic_type @ 000122a0 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 000122b0 */

undefined4 call_ret_basic(void)

{
 undefined4 uVar1;
 
 uVar1 = ret_basic_type(0x15);
 return uVar1;
}



/* Function: ret_pointer @ 000122f0 */

int *ret_pointer(int *param_1)

{
 return (int *)((char *)param_1 + 4);
}



/* Function: call_ret_pointer @ 00012300 */

undefined4 call_ret_pointer(void)

{
 undefined4 *puVar1;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_14 = 10;
 local_10 = 0x14;
 local_c = 0x1e;
 puVar1 = (undefined4 *)ret_pointer(&local_14);
 return *puVar1;
}



/* Function: ret_small_struct @ 00012350 */

undefined4 * ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return param_1;
}



/* Function: call_ret_small_struct @ 00012370 */

int call_ret_small_struct(void)

{
 int local_14 [2];
 int *piVar1;
 
 piVar1 = ret_small_struct((undefined4 *)local_14,3,4);
 return piVar1[0] + piVar1[1];
}



/* Function: ret_large_struct @ 000123b0 */

int *ret_large_struct(int *param_1,int param_2)

{
 undefined4 local_8;
 
 for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
 param_1[local_8] = param_2 + local_8;
 }
 return param_1;
}



/* Function: call_ret_large_struct @ 00012400 */

int call_ret_large_struct(void)

{
 int local_4c [16];
 int *piVar1;
 
 piVar1 = ret_large_struct(local_4c,100);
 return piVar1[0] + piVar1[15];
}



/* Function: func_a @ 00012440 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00012450 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: ret_func_ptr @ 00012460 */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = func_a;
 if (param_1 != 0) {
 pcVar1 = func_b;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00012490 */

void call_ret_func_ptr(void)

{
 code *pcVar1;
 
 pcVar1 = (code *)ret_func_ptr(1);
 (*pcVar1)(5);
 return;
}



/* Function: ret_opaque_handle @ 000124d0 */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = &ret_opaque_handle_handle2;
 if (param_1 == 0) {
 puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00012500 */

undefined4 call_ret_opaque(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)ret_opaque_handle(0);
 return *puVar1;
}



/* Function: ret_complex_expr @ 00012530 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 undefined4 local_8;
 
 if (param_2 < param_1) {
 local_8 = param_3 << 1;
 }
 else {
 local_8 = param_3 + 10;
 }
 return local_8;
}



/* Function: call_ret_complex_expr @ 00012570 */

int call_ret_complex_expr(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = ret_complex_expr(5,3,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar1 + iVar2;
}



/* Function: ret_multi_branch @ 000125e0 */

undefined4 ret_multi_branch(int param_1)

{
 undefined4 local_8;
 
 if (param_1 == 0) {
 local_8 = 10;
 }
 else if (param_1 == 1) {
 local_8 = 0x14;
 }
 else if (param_1 == 2) {
 local_8 = 0x1e;
 }
 else {
 local_8 = 0xffffffff;
 }
 return local_8;
}



/* Function: call_ret_multi_branch @ 00012660 */

int call_ret_multi_branch(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = ret_multi_branch(0);
 iVar2 = ret_multi_branch(1);
 iVar3 = ret_multi_branch(2);
 return iVar3 + iVar2 + iVar1;
}



/* Function: ret_void @ 000126d0 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 000126f0 */

undefined4 call_ret_void(void)

{
 undefined4 local_c;
 
 ret_void(7,&local_c);
 return local_c;
}



/* Function: test_return_values @ 00012720 */

void test_return_values(void)

{
 undefined4 uVar1;
 
 printf(&DAT_000132b0);
 uVar1 = call_ret_basic();
 printf(&DAT_000132cf,uVar1);
 uVar1 = call_ret_pointer();
 printf(&DAT_000132eb,uVar1);
 uVar1 = call_ret_small_struct();
 printf(&DAT_00013307,uVar1);
 uVar1 = call_ret_large_struct();
 printf(&DAT_00013322,uVar1);
 call_ret_func_ptr();
 printf(&DAT_0001333f, 0);
 uVar1 = call_ret_opaque();
 printf(&DAT_0001335b,uVar1);
 uVar1 = call_ret_complex_expr();
 printf(&DAT_00013378,uVar1);
 uVar1 = call_ret_multi_branch();
 printf(&DAT_00013394,uVar1);
 uVar1 = call_ret_void();
 printf(&DAT_000133b0,uVar1);
 return;
}



/* Function: main @ 00012850 */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 83 */
