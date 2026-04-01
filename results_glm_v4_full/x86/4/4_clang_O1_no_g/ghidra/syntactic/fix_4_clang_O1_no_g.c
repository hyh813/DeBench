#include <stdio.h>
#include <stdarg.h>
#include <string.h>

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

/* Ghidra decompiler types */
typedef int undefined;
typedef int undefined4;
typedef int (*code)(undefined4);

/* Data references */
extern const char DAT_00012352[];
extern const char DAT_000120a8[];
extern const char DAT_000120d0[];
extern const char DAT_000120f2[];
extern const char DAT_00012119[];
extern const char DAT_00012141[];
extern const char DAT_0001216d[];
extern const char DAT_00012373[];
extern const char DAT_00012255[];
extern const char DAT_00012271[];
extern const char DAT_0001228d[];
extern const char DAT_000122a8[];
extern const char DAT_000122c5[];
extern const char DAT_000122e1[];
extern const char DAT_000122fe[];
extern const char DAT_0001231a[];
extern const char DAT_00012336[];
extern const char DAT_00012394[];

/* Data definitions */
const char DAT_000120a8[] = "CALL-L2-01: %d\n";
const char DAT_000120d0[] = "CALL-L2-02: %d\n";
const char DAT_000120f2[] = "CALL-L2-03: %d\n";
const char DAT_00012119[] = "CALL-L1-10: %d\n";
const char DAT_00012141[] = "CALL-L2-04: %d\n";
const char DAT_0001216d[] = "CALL-L2-05: %d\n";
const char DAT_00012255[] = "RET-L1-01: %d\n";
const char DAT_00012271[] = "RET-L1-02: %d\n";
const char DAT_0001228d[] = "RET-L2-01: %d\n";
const char DAT_000122a8[] = "RET-L3-01: %d\n";
const char DAT_000122c5[] = "RET-L3-02: %d\n";
const char DAT_000122e1[] = "RET-L3-03: %d\n";
const char DAT_000122fe[] = "RET-L4-01: %d\n";
const char DAT_0001231a[] = "RET-L4-02: %d\n";
const char DAT_00012336[] = "RET-L4-03: %d\n";
const char DAT_00012352[] = "========== Testing Calling Conventions ==========";
const char DAT_00012373[] = "========== Testing Parameter Passing ==========";
const char DAT_00012394[] = "========== Testing Return Values ==========";

/* Helper macros for Ghidra constructs */
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | (uint32_t)(low))
#define ROUND(x) ((int)(x))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/4/4_clang_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


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

void __x86_get_pc_thunk_dx(int param)

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

int varargs_func(int param_1, ...)

{
 int iVar1;
 va_list local_8;
 
 iVar1 = 0;
 va_start(local_8, param_1);
 if (0 < param_1) {
 do {
 iVar1 = iVar1 + va_arg(local_8, int);
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 va_end(local_8);
 return iVar1;
}



/* Function: func_no_args @ 000113c0 */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 000113d0 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00011400 */

int func_mixed_args(int param_1,char *param_2,double param_3,undefined4 param_4,undefined4 param_5)

{
 size_t sVar1;
 
 if (param_2 == (char *)0x0) {
 sVar1 = 0;
 }
 else {
 sVar1 = strlen(param_2);
 }
 return (int)ROUND((double)CONCAT44(param_5,param_4) + param_3 + (double)(int)(sVar1 + param_1));
}



/* Function: func_struct_byval @ 00011490 */

int func_struct_byval(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 iVar1 = 0;
 if (param_1 != NULL) {
 do {
 iVar1 = iVar1 + param_1[iVar2 * 2];
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x10);
 }
 return iVar1;
}



/* Function: func_struct_byptr @ 000114c0 */

int func_struct_byptr(int *param_1)

{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}



/* Function: test_calling_conventions @ 000114e0 */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 int iVar2;
 int iVar3;
 int aiStack_8c [34];
 
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
 iVar2 = 1;
 do {
 aiStack_8c[iVar2 * 2 + 1] = 0;
 aiStack_8c[iVar2 * 2] = iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x11);
 iVar3 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + aiStack_8c[iVar3 * 2 + 2];
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x10);
 printf(&DAT_00012141,iVar2);
 printf(&DAT_0001216d,0x32);
 return;
}



/* Function: param_by_value_int @ 00011670 */

int param_by_value_int(int param_1)

{
 return param_1 * 2;
}



/* Function: call_by_value_int @ 00011680 */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 00011690 */

undefined4 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 000116a0 */

undefined4 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 000116b0 */

undefined4 param_array_decay(void)

{
 return 4;
}



/* Function: call_array_decay @ 000116c0 */

undefined4 call_array_decay(void)

{
 return 4;
}



/* Function: param_string @ 000116d0 */

int param_string(char *param_1)

{
 return (int)param_1[1] + (int)*param_1;
}



/* Function: call_string_param @ 000116e0 */

undefined4 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 000116f0 */

int param_ptr_array(int param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + **(char **)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 }
 return iVar1;
}



/* Function: call_ptr_array @ 00011730 */

undefined4 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 00011740 */

int param_varargs(int param_1, ...)

{
 int iVar1;
 va_list local_8;
 
 iVar1 = 0;
 va_start(local_8, param_1);
 if (0 < param_1) {
 do {
 iVar1 = iVar1 + va_arg(local_8, int);
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 va_end(local_8);
 return iVar1;
}



/* Function: call_varargs_param @ 00011780 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: param_func_ptr @ 000117b0 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 000117e0 */

undefined4 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 000117f0 */

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



/* Function: call_double_ptr @ 00011820 */

undefined4 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00011830 */

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



/* Function: call_complex_cast @ 00011850 */

undefined4 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 00011860 */

int param_struct_byval(int param_1)

{
 int in_stack_00000040;
 
 return in_stack_00000040 + param_1;
}



/* Function: call_struct_byval @ 00011870 */

int call_struct_byval(void)

{
 int iVar1;
 int local_44 [17];
 
 iVar1 = 0;
 do {
 local_44[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 return local_44[0xf] + local_44[0];
}



/* Function: param_order_dep @ 000118a0 */

int param_order_dep(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_order_dep @ 000118b0 */

undefined4 call_order_dep(void)

{
 return 3;
}



/* Function: test_parameter_passing @ 000118c0 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 int iVar2;
 int local_44 [16];
 
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
 iVar2 = 0;
 do {
 local_44[iVar2] = iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x10);
 printf("PARAM-L3-04: %d\n",local_44[0xf] + local_44[0]);
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 000119e0 */

int ret_basic_type(int param_1)

{
 return param_1 * 2;
}



/* Function: call_ret_basic @ 000119f0 */

undefined4 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00011a00 */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00011a10 */

undefined4 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00011a20 */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}



/* Function: call_ret_small_struct @ 00011a40 */

undefined4 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00011a50 */

void ret_large_struct(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 *(int *)(param_1 + iVar1 * 4) = param_2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 return;
}



/* Function: call_ret_large_struct @ 00011a80 */

int call_ret_large_struct(void)

{
 int iVar1;
 int local_44 [17];
 
 iVar1 = 100;
 do {
 local_44[iVar1 + -100] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x74);
 return local_44[0xf] + local_44[0];
}



/* Function: func_a @ 00011ab0 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00011ac0 */

int func_b(int param_1)

{
 return param_1 * 2;
}



/* Function: FUN_00011ad5 @ 00011ad5 */

int FUN_00011ad5(undefined4 param_1,int param_2)

{
 int iVar1;
 int unaff_retaddr;
 
 iVar1 = unaff_retaddr + -0x15;
 if (param_2 == 0) {
 iVar1 = unaff_retaddr + -0x25;
 }
 return iVar1;
}



/* Function: call_ret_func_ptr @ 00011b00 */

undefined4 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: FUN_00011b15 @ 00011b15 */

int FUN_00011b15(undefined4 param_1,int param_2)

{
 int iVar1;
 int unaff_retaddr;
 
 iVar1 = unaff_retaddr + 0x251b;
 if (param_2 == 0) {
 iVar1 = unaff_retaddr + 0x2513;
 }
 return iVar1;
}



/* Function: FUN_00011b45 @ 00011b45 */

undefined4 FUN_00011b45(void)

{
 int unaff_retaddr;
 
 return *(undefined4 *)(unaff_retaddr + 0x24e3);
}



/* Function: ret_complex_expr @ 00011b60 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00011b80 */

undefined4 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00011b90 */

int ret_multi_branch(unsigned int param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00011bb0 */

undefined4 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00011bc0 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00011bd0 */

undefined4 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00011be0 */

void test_return_values(void)

{
 int iVar1;
 int aiStackY_1d4 [97];
 undefined4 uStackY_50;
 int local_44 [16];
 
 uStackY_50 = 0x11bfe;
 puts(&DAT_00012394);
 uStackY_50 = 0x11c14;
 printf(&DAT_00012255);
 uStackY_50 = 0x11c2a;
 printf(&DAT_00012271);
 uStackY_50 = 0x11c40;
 printf(&DAT_0001228d);
 iVar1 = 100;
 do {
 aiStackY_1d4[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x74);
 uStackY_50 = 0x11c79;
 printf(&DAT_000122a8);
 uStackY_50 = 0x11c8f;
 printf(&DAT_000122c5);
 uStackY_50 = 0x11ca7;
 printf(&DAT_000122e1);
 uStackY_50 = 0x11cbd;
 printf(&DAT_000122fe);
 uStackY_50 = 0x11cd3;
 printf(&DAT_0001231a);
 uStackY_50 = 0x11ce9;
 printf(&DAT_00012336);
 return;
}



/* Function: main @ 00011cf0 */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 82 */
