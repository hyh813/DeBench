/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef void (*code)();
typedef unsigned int uint;

/* Standard library includes */
#include <stdio.h>
#include <string.h>
#include <math.h>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/4/4_clang_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Data references from binary */
char DAT_00012352[] = "Calling Conventions Test\n";
char DAT_000120a8[] = "VARARGS: %d\n";
char DAT_000120d0[] = "NOARGS: %d\n";
char DAT_000120f2[] = "MANYARGS: %d\n";
char DAT_00012119[] = "MANYARGS2: %d\n";
char DAT_00012141[] = "MANYARGS3: %d\n";
char DAT_0001216d[] = "MANYARGS4: %d\n";
char DAT_00012373[] = "Parameter Passing Test\n";
char DAT_00012394[] = "Return Values Test\n";
char DAT_00012255[] = "BASIC: %d\n";
char DAT_00012271[] = "POINTER: %d\n";
char DAT_0001228d[] = "SMALL_STRUCT: %d\n";
char DAT_000122a8[] = "LARGE_STRUCT: %d\n";
char DAT_000122c5[] = "FUNC_PTR: %d\n";
char DAT_000122e1[] = "OPAQUE: %d\n";
char DAT_000122fe[] = "COMPLEX: %d\n";
char DAT_0001231a[] = "MULTI: %d\n";
char DAT_00012336[] = "VOID: %d\n";

/* External function reference - defined below for linking */
int ret_opaque_handle_handle1 = 0;

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
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
 return param_2 + param_1;
}



/* Function: call_cdecl @ 00011220 */

undefined4 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00011230 */

int stdcall_func(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: call_stdcall @ 00011240 */

undefined4 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00011250 */

int fastcall_func(int param_1)

{
 int in_ECX;
 int in_EDX;
 
 return in_ECX + in_EDX + param_1;
}



/* Function: call_fastcall @ 00011260 */

undefined4 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00011270 */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00011280 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 000112a0 */

undefined4 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 000112b0 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_mips @ 000112d0 */

undefined4 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 000112e0 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00011300 */

undefined4 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00011310 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00011330 */

undefined4 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00011340 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00011360 */

undefined4 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00011370 */

undefined4 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 00011380 */

#include <stdarg.h>

int varargs_func(uint param_1, ...)

{
 va_list args;
 int iVar2;
 uint uVar3;
 int val;
 
 va_start(args, param_1);
 if ((int)param_1 < 1) {
 iVar2 = 0;
 }
 else {
 uVar3 = param_1 & 3;
 if (param_1 - 1 < 3) {
 iVar2 = 0;
 }
 else {
 param_1 = param_1 & 0xfffffffc;
 iVar2 = 0;
 while (param_1 != 0) {
 val = va_arg(args, int);
 iVar2 = iVar2 + val;
 val = va_arg(args, int);
 iVar2 = iVar2 + val;
 val = va_arg(args, int);
 iVar2 = iVar2 + val;
 val = va_arg(args, int);
 iVar2 = iVar2 + val;
 param_1 = param_1 - 4;
 }
 }
 for (; uVar3 != 0; uVar3 = uVar3 - 1) {
 iVar2 = iVar2 + va_arg(args, int);
 }
 }
 va_end(args);
 return iVar2;
}



/* Function: func_no_args @ 00011420 */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00011430 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00011460 */

/* Manual implementation of round without using math library functions */
static double my_round(double x)
{
 if (x >= 0.0) {
 return (double)(long long)(x + 0.5);
 }
 return (double)(long long)(x - 0.5);
}

int func_mixed_args(int param_1,char *param_2,double param_3,undefined4 param_4,undefined4 param_5)

{
 size_t sVar1;
 
 if (param_2 == (char *)0x0) {
 sVar1 = 0;
 }
 else {
 sVar1 = strlen(param_2);
 }
 return (int)my_round((double)(((uint64_t)param_5 << 32) | (uint32_t)param_4) + param_3 + (double)(int)(sVar1 + param_1));
}



/* Function: func_struct_byval @ 000114f0 */

int func_struct_byval(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
 undefined4 param_6,int param_7,undefined4 param_8,int param_9,
 undefined4 param_10,int param_11,undefined4 param_12,int param_13,
 undefined4 param_14,int param_15,undefined4 param_16,int param_17,
 undefined4 param_18,int param_19,undefined4 param_20,int param_21,
 undefined4 param_22,int param_23,undefined4 param_24,int param_25,
 undefined4 param_26,int param_27,undefined4 param_28,int param_29,
 undefined4 param_30,int param_31)

{
 return param_3 + param_1 + param_5 + param_7 + param_9 + param_11 + param_13 + param_15 + param_17
 + param_19 + param_21 + param_23 + param_25 + param_27 + param_29 + param_31;
}



/* Function: func_struct_byptr @ 00011540 */

int func_struct_byptr(int *param_1)

{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}



/* Function: test_calling_conventions @ 00011560 */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00012352);
 printf("CALL-L1-01: %d\n",0xf);
 printf("CALL-L1-02: %d\n",0x32);
 printf("CALL-L1-03: %d\n",6);
 printf("CALL-L1-04: %d\n",0xf);
 printf("CALL-L1-05: %d\n",0xf);
 printf("CALL-L1-06: %d\n",100);
 printf("CALL-L1-07: %d\n",0x15);
 printf("CALL-L1-08: %d\n",0xf);
 printf("CALL-L1-09: %d\n",10);
 printf("CALL-L1-10: %d\n",0x21);
 uVar1 = varargs_func(5,1,2,3,4,5);
 printf(&DAT_000120a8,uVar1);
 printf(&DAT_000120d0,0x2a);
 printf(&DAT_000120f2,0x24);
 printf(&DAT_00012119,0x75);
 printf(&DAT_00012141,0x88);
 printf(&DAT_0001216d,0x32);
 return;
}



/* Function: param_by_value_int @ 000116b0 */

int param_by_value_int(int param_1)

{
 return param_1 * 2;
}



/* Function: call_by_value_int @ 000116c0 */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 000116d0 */

undefined4 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 000116e0 */

undefined4 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 000116f0 */

undefined4 param_array_decay(void)

{
 return 4;
}



/* Function: call_array_decay @ 00011700 */

undefined4 call_array_decay(void)

{
 return 4;
}



/* Function: param_string @ 00011710 */

int param_string(char *param_1)

{
 return (int)param_1[1] + (int)*param_1;
}



/* Function: call_string_param @ 00011720 */

undefined4 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00011730 */

int param_ptr_array(int param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 if (param_2 - 1 < 3) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = (int)**(char **)(param_1 + 0xc + uVar2 * 4) +
 (int)**(char **)(param_1 + 8 + uVar2 * 4) +
 (int)**(char **)(param_1 + 4 + uVar2 * 4) + **(char **)(param_1 + uVar2 * 4) + iVar1
 ;
 uVar2 = uVar2 + 4;
 } while ((param_2 & 0xfffffffc) != uVar2);
 }
 if ((param_2 & 3) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + **(char **)(param_1 + uVar2 * 4 + uVar3 * 4);
 uVar3 = uVar3 + 1;
 } while ((param_2 & 3) != uVar3);
 }
 }
 return iVar1;
}



/* Function: call_ptr_array @ 000117c0 */

undefined4 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 000117d0 */

int param_varargs(uint param_1, ...)

{
 va_list args;
 int iVar2;
 uint uVar3;
 int val;
 
 va_start(args, param_1);
 if ((int)param_1 < 1) {
 iVar2 = 0;
 }
 else {
 uVar3 = param_1 & 3;
 if (param_1 - 1 < 3) {
 iVar2 = 0;
 }
 else {
 param_1 = param_1 & 0xfffffffc;
 iVar2 = 0;
 while (param_1 != 0) {
 val = va_arg(args, int);
 iVar2 = iVar2 + val;
 val = va_arg(args, int);
 iVar2 = iVar2 + val;
 val = va_arg(args, int);
 iVar2 = iVar2 + val;
 val = va_arg(args, int);
 iVar2 = iVar2 + val;
 param_1 = param_1 - 4;
 }
 }
 for (; uVar3 != 0; uVar3 = uVar3 - 1) {
 iVar2 = iVar2 + va_arg(args, int);
 }
 }
 va_end(args);
 return iVar2;
}



/* Function: call_varargs_param @ 00011870 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: param_func_ptr @ 000118a0 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 (*param_1)(param_2);
 return 10;
}



/* Function: call_func_ptr_param @ 000118d0 */

undefined4 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 000118e0 */

undefined4 param_double_ptr(int *param_1,undefined4 param_2)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: call_double_ptr @ 00011910 */

undefined4 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00011920 */

int param_complex_cast(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 0) {
 return *param_1;
 }
 }
 return iVar1;
}



/* Function: call_complex_cast @ 00011940 */

undefined4 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 00011950 */

int param_struct_byval(int param_1)

{
 int in_stack_00000040;
 
 return in_stack_00000040 + param_1;
}



/* Function: call_struct_byval @ 00011960 */

undefined4 call_struct_byval(void)

{
 return 0xf;
}



/* Function: param_order_dep @ 00011970 */

int param_order_dep(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_order_dep @ 00011980 */

undefined4 call_order_dep(void)

{
 return 3;
}



/* Function: test_parameter_passing @ 00011990 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00012373);
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",4);
 printf("PARAM-L2-02: %d\n",0xad);
 printf("PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 printf("PARAM-L2-04: %d\n",uVar1);
 printf("PARAM-L3-01: %d\n",0x14);
 printf("PARAM-L3-02: %d\n",0x15);
 printf("PARAM-L3-03: %d\n",0x12345678);
 printf("PARAM-L3-04: %d\n",0xf);
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 00011a90 */

int ret_basic_type(int param_1)

{
 return param_1 * 2;
}



/* Function: call_ret_basic @ 00011aa0 */

undefined4 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00011ab0 */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00011ac0 */

undefined4 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00011ad0 */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}



/* Function: call_ret_small_struct @ 00011af0 */

undefined4 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00011b00 */

void ret_large_struct(int *param_1,int param_2)

{
 *param_1 = param_2;
 param_1[1] = param_2 + 1;
 param_1[2] = param_2 + 2;
 param_1[3] = param_2 + 3;
 param_1[4] = param_2 + 4;
 param_1[5] = param_2 + 5;
 param_1[6] = param_2 + 6;
 param_1[7] = param_2 + 7;
 param_1[8] = param_2 + 8;
 param_1[9] = param_2 + 9;
 param_1[10] = param_2 + 10;
 param_1[0xb] = param_2 + 0xb;
 param_1[0xc] = param_2 + 0xc;
 param_1[0xd] = param_2 + 0xd;
 param_1[0xe] = param_2 + 0xe;
 param_1[0xf] = param_2 + 0xf;
 return;
}



/* Function: call_ret_large_struct @ 00011b70 */

undefined4 call_ret_large_struct(void)

{
 return 0xd7;
}



/* Function: func_a @ 00011b80 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00011b90 */

int func_b(int param_1)

{
 return param_1 * 2;
}



/* Function: FUN_00011ba5 @ 00011ba5 */

int FUN_00011ba5(undefined4 param_1,int param_2)

{
 int iVar1;
 int unaff_retaddr;
 
 iVar1 = unaff_retaddr + -0x15;
 if (param_2 == 0) {
 iVar1 = unaff_retaddr + -0x25;
 }
 return iVar1;
}



/* Function: call_ret_func_ptr @ 00011bd0 */

undefined4 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: FUN_00011be5 @ 00011be5 */

int FUN_00011be5(undefined4 param_1,int param_2)

{
 int iVar1;
 int unaff_retaddr;
 
 iVar1 = unaff_retaddr + 0x244b;
 if (param_2 == 0) {
 iVar1 = unaff_retaddr + 0x2443;
 }
 return iVar1;
}



/* Function: FUN_00011c15 @ 00011c15 */

undefined4 FUN_00011c15(void)

{
 int unaff_retaddr;
 
 return *(undefined4 *)(unaff_retaddr + 0x2413);
}



/* Function: ret_complex_expr @ 00011c30 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00011c50 */

undefined4 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00011c60 */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00011c80 */

undefined4 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00011c90 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00011ca0 */

undefined4 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00011cb0 */

void test_return_values(void)

{
 puts(&DAT_00012394);
 printf(&DAT_00012255,0x2a);
 printf(&DAT_00012271,0x14);
 printf(&DAT_0001228d,7);
 printf(&DAT_000122a8,0xd7);
 printf(&DAT_000122c5,10);
 printf(&DAT_000122e1,ret_opaque_handle_handle1);
 printf(&DAT_000122fe,0x28);
 printf(&DAT_0001231a,0x3c);
 printf(&DAT_00012336,0x15);
 return;
}



/* Function: main @ 00011da0 */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 puts(&DAT_00012394);
 printf(&DAT_00012255,0x2a);
 printf(&DAT_00012271,0x14);
 printf(&DAT_0001228d,7);
 printf(&DAT_000122a8,0xd7);
 printf(&DAT_000122c5,10);
 printf(&DAT_000122e1,ret_opaque_handle_handle1);
 printf(&DAT_000122fe,0x28);
 printf(&DAT_0001231a,0x3c);
 printf(&DAT_00012336,0x15);
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 82 */
