/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t and related types will be defined by standard headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra types */
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef int (*code)();
typedef unsigned int uint;

/* Ghidra stack frame references - defined as static to provide storage */
static char stack0x00000008[256];
static char stack0x00000004[256];

/* Standard library headers */
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/* Ghidra intrinsic replacements */
#define ROUND(x) ((int)(x + 0.5))
#define CONCAT44(hi, lo) (((long long)(hi) << 32) | (unsigned int)(lo))

/* External data references from binary - defined as string literals */
const char DAT_00012352[] = "Calling Conventions Test\n";
const char DAT_000120a8[] = "VARARGS-01: %d\n";
const char DAT_000120d0[] = "FUNC_NO_ARGS-01: %d\n";
const char DAT_000120f2[] = "FUNC_MANY_ARGS-01: %d\n";
const char DAT_00012119[] = "FUNC_MIXED_ARGS-01: %d\n";
const char DAT_00012141[] = "FUNC_STRUCT_PASS-01: %d\n";
const char DAT_0001216d[] = "FUNC_STRUCT_PASS-02: %d\n";
const char DAT_00012373[] = "Parameter Passing Test\n";
const char DAT_00012255[] = "RET-BASIC-01: %d\n";
const char DAT_00012271[] = "RET-POINTER-01: %d\n";
const char DAT_0001228d[] = "RET-SMALL-STRUCT-01: %d\n";
const char DAT_000122a8[] = "RET-LARGE-STRUCT-01: %d\n";
const char DAT_000122c5[] = "RET-FUNC-PTR-01: %d\n";
const char DAT_000122e1[] = "RET-COMPLEX-EXPR-01: %d\n";
const char DAT_000122fe[] = "RET-MULTI-BRANCH-01: %d\n";
const char DAT_0001231a[] = "RET-VOID-01: %d\n";
const char DAT_00012336[] = "RET-STRING-01: %d\n";
const char DAT_00012394[] = "Return Values Test\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/4/4_clang_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
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



/* Function: cdecl_func @ 00011204 */

int cdecl_func(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_cdecl @ 0001120d */

undefined4 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00011213 */

int stdcall_func(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: call_stdcall @ 0001121f */

undefined4 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00011225 */

int fastcall_func(int param_1)

{
 int in_ECX;
 int in_EDX;
 
 return in_ECX + in_EDX + param_1;
}



/* Function: call_fastcall @ 0001122f */

undefined4 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00011235 */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 0001123b */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 00011250 */

undefined4 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 00011256 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_mips @ 00011267 */

undefined4 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 0001126d */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00011286 */

undefined4 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 0001128c */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 000112a1 */

undefined4 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 000112a7 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_vectorcall @ 000112b8 */

undefined4 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 000112be */

undefined4 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 000112c4 */

int varargs_func(int param_1, ...)

{
 int *piVar1;
 int iVar2;
 
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 piVar1 = (int *)&stack0x00000008;
 do {
 iVar2 = iVar2 + *piVar1;
 param_1 = param_1 + -1;
 piVar1 = piVar1 + 1;
 } while (param_1 != 0);
 }
 return iVar2;
}



/* Function: func_no_args @ 000112ee */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 000112f4 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00011315 */

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



/* Function: func_struct_byval @ 00011397 */

int func_struct_byval(void)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(&stack0x00000004 + iVar2 * 8);
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x10);
 return iVar1;
}



/* Function: func_struct_byptr @ 000113b1 */

int func_struct_byptr(int *param_1)

{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}



/* Function: test_calling_conventions @ 000113c4 */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 int iVar2;
 int iVar3;
 int aiStack_94 [35];
 
 aiStack_94[1] = 0x113d1;
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
 aiStack_94[iVar2 * 2 + 1] = 0;
 aiStack_94[iVar2 * 2] = iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x11);
 iVar3 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + aiStack_94[iVar3 * 2 + 2];
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x10);
 printf(&DAT_00012141,iVar2);
 printf(&DAT_0001216d,0x32);
 return;
}



/* Function: param_by_value_int @ 00011541 */

int param_by_value_int(int param_1)

{
 return param_1 * 2;
}



/* Function: call_by_value_int @ 00011548 */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 0001154e */

undefined4 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00011558 */

undefined4 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 0001155e */

undefined4 param_array_decay(void)

{
 return 4;
}



/* Function: call_array_decay @ 00011564 */

undefined4 call_array_decay(void)

{
 return 4;
}



/* Function: param_string @ 0001156a */

int param_string(char *param_1)

{
 return (int)param_1[1] + (int)*param_1;
}



/* Function: call_string_param @ 00011578 */

undefined4 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 0001157e */

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



/* Function: call_ptr_array @ 000115a4 */

undefined4 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 000115aa */

int param_varargs(int param_1, ...)

{
 int *piVar1;
 int iVar2;
 
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 piVar1 = (int *)&stack0x00000008;
 do {
 iVar2 = iVar2 + *piVar1;
 param_1 = param_1 + -1;
 piVar1 = piVar1 + 1;
 } while (param_1 != 0);
 }
 return iVar2;
}



/* Function: call_varargs_param @ 000115d4 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: param_func_ptr @ 000115fb */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (int)(*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 0001161e */

undefined4 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00011624 */

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



/* Function: call_double_ptr @ 00011645 */

undefined4 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 0001164b */

int param_complex_cast(int *param_1,int param_2)

{
 if (param_2 == 1) {
 return param_1[1] + *param_1;
 }
 if (param_2 == 0) {
 return *param_1;
 }
 return -1;
}



/* Function: call_complex_cast @ 00011669 */

undefined4 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 0001166f */

int param_struct_byval(int param_1)

{
 int in_stack_00000040;
 
 return in_stack_00000040 + param_1;
}



/* Function: call_struct_byval @ 00011678 */

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



/* Function: param_order_dep @ 00011691 */

int param_order_dep(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_order_dep @ 0001169a */

undefined4 call_order_dep(void)

{
 return 3;
}



/* Function: test_parameter_passing @ 000116a0 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 int iVar2;
 int local_4c [16];
 
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
 local_4c[iVar2] = iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x10);
 printf("PARAM-L3-04: %d\n",local_4c[0xf] + local_4c[0]);
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 000117b7 */

int ret_basic_type(int param_1)

{
 return param_1 * 2;
}



/* Function: call_ret_basic @ 000117be */

undefined4 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 000117c4 */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 000117cc */

undefined4 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 000117d2 */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}



/* Function: call_ret_small_struct @ 000117e6 */

undefined4 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 000117ec */

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



/* Function: call_ret_large_struct @ 00011807 */

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



/* Function: func_a @ 00011827 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 0001182f */

int func_b(int param_1)

{
 return param_1 * 2;
}



/* Function: FUN_0001183b @ 0001183b */

int FUN_0001183b(undefined4 param_1,int param_2)

{
 int iVar1;
 int unaff_retaddr;
 
 iVar1 = unaff_retaddr + -0xc;
 if (param_2 == 0) {
 iVar1 = unaff_retaddr + -0x14;
 }
 return iVar1;
}



/* Function: call_ret_func_ptr @ 00011857 */

undefined4 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: FUN_00011862 @ 00011862 */

int FUN_00011862(undefined4 param_1,int param_2)

{
 int iVar1;
 int unaff_retaddr;
 
 iVar1 = unaff_retaddr + 0x27ce;
 if (param_2 == 0) {
 iVar1 = unaff_retaddr + 0x27c6;
 }
 return iVar1;
}



/* Function: FUN_00011883 @ 00011883 */

undefined4 FUN_00011883(void)

{
 int unaff_retaddr;
 
 return *(undefined4 *)(unaff_retaddr + 0x27a5);
}



/* Function: ret_complex_expr @ 00011891 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 000118a7 */

undefined4 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 000118ad */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 10 + 10;
 if (2 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 000118c2 */

undefined4 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 000118c8 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 000118d6 */

undefined4 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 000118dc */

void test_return_values(void)

{
 int iVar1;
 int aiStackY_1d4 [97];
 undefined4 uStackY_50;
 int local_44 [16];
 
 uStackY_50 = 0x118fa;
 puts(&DAT_00012394);
 uStackY_50 = 0x11910;
 printf(&DAT_00012255);
 uStackY_50 = 0x11926;
 printf(&DAT_00012271);
 uStackY_50 = 0x1193c;
 printf(&DAT_0001228d);
 iVar1 = 100;
 do {
 aiStackY_1d4[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x74);
 uStackY_50 = 0x11968;
 printf(&DAT_000122a8);
 uStackY_50 = 0x1197e;
 printf(&DAT_000122c5);
 uStackY_50 = 0x11996;
 printf(&DAT_000122e1);
 uStackY_50 = 0x119ac;
 printf(&DAT_000122fe);
 uStackY_50 = 0x119c2;
 printf(&DAT_0001231a);
 uStackY_50 = 0x119d8;
 printf(&DAT_00012336);
 return;
}



/* Function: main @ 000119dd */

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
