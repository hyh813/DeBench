/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra-specific type definitions */
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef int (*code)(int);
typedef unsigned long long undefined8;
typedef int bool;
typedef unsigned char byte;

/* Ghidra-specific macros */
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))
#define ROUND(x) ((int)((x) + 0.5))

/* Forward declarations for global variables */
extern undefined8 handle1_1;
extern undefined8 handle2_0;
extern undefined4 stack0x00000004;
extern undefined4 stack0x00000084;
extern char DAT_00012008[];
extern char DAT_0001202c[];
extern char DAT_00012054[];
extern char DAT_00012078[];
extern char DAT_000120a0[];
extern char DAT_000120c8[];
extern char DAT_000120f4[];
extern char DAT_00012124[];
extern char DAT_000121e5[];
extern char DAT_000121e9[];
extern char DAT_000121ed[];
extern char DAT_000122ac[];
extern char DAT_000122ca[];
extern char DAT_000122e6[];
extern char DAT_00012302[];
extern char DAT_0001231d[];
extern char DAT_0001233a[];
extern char DAT_00012356[];
extern char DAT_00012373[];
extern char DAT_0001238f[];
extern char DAT_000123ab[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/4/4_gcc_O1_no_g
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




/* Function: __i686.get_pc_thunk.bx @ 0001111c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011120 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011259 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001125d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: callback_func @ 00011261 */

int callback_func(int param_1)

{
 return param_1 * 2;
}



/* Function: func_a @ 0001126c */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00011278 */

int func_b(int param_1)

{
 return param_1 * 2;
}



/* Function: cdecl_func @ 00011283 */

int cdecl_func(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_cdecl @ 00011290 */

undefined4 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 0001129a */

int stdcall_func(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: call_stdcall @ 000112aa */

undefined4 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 000112b4 */

int fastcall_func(int param_1)

{
 int in_ECX;
 int in_EDX;
 
 return in_ECX + in_EDX + param_1;
}



/* Function: call_fastcall @ 000112c2 */

undefined4 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 000112cc */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 000112d6 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 000112ef */

undefined4 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 000112f9 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_mips @ 0001130e */

undefined4 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 00011318 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00011335 */

undefined4 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 0001133f */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00011358 */

undefined4 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00011362 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00011377 */

undefined4 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00011381 */

undefined4 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 0001138b */

int varargs_func(int param_1, ...)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int local_stack[10];
 
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar3 = 0;
 iVar2 = 0;
 piVar1 = local_stack;
 do {
 iVar2 = iVar2 + *piVar1;
 iVar3 = iVar3 + 1;
 piVar1 = piVar1 + 1;
 } while (param_1 != iVar3);
 }
 return iVar2;
}



/* Function: func_no_args @ 000113c1 */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 000113cb */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 000113f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int func_mixed_args(int param_1,char *param_2,double param_3,undefined4 param_4,undefined4 param_5)

{
 size_t sVar1;
 undefined8 local_1c;
 
 sVar1 = 0;
 if (param_2 != (char *)0x0) {
 sVar1 = strlen(param_2);
 }
 local_1c = CONCAT44(param_5,param_4);
 return (int)ROUND((double)local_1c + (double)(int)(sVar1 + param_1) + param_3);
}



/* Function: func_struct_byval @ 0001146e */

int func_struct_byval(void)

{
 int iVar1;
 int *piVar2;
 
 piVar2 = (int *)&stack0x00000004;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar2 + 2;
 } while (piVar2 != (int *)&stack0x00000084);
 return iVar1;
}



/* Function: func_struct_byptr @ 00011498 */

int func_struct_byptr(int *param_1)

{
 if (param_1 != (int *)0x0) {
 return *param_1 * param_1[1];
 }
 return -1;
}



/* Function: test_calling_conventions @ 000114b1 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 uint uVar2;
 uint *puVar3;
 int iVar4;
 uint uVar5;
 uint *puVar6;
 int in_GS_OFFSET;
 bool bVar7;
 byte bVar8;
 uint auStack_118 [34];
 uint local_90 [32];
 uint local_10;
 
 bVar8 = 0;
 local_10 = *(uint *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00012008);
 __printf_chk(1,"CALL-L1-01: %d\n",0xf);
 __printf_chk(1,"CALL-L1-02: %d\n",0x32);
 __printf_chk(1,"CALL-L1-03: %d\n",6);
 __printf_chk(1,"CALL-L1-04: %d\n",0xf);
 __printf_chk(1,"CALL-L1-05: %d\n",0xf);
 __printf_chk(1,"CALL-L1-06: %d\n",100);
 __printf_chk(1,"CALL-L1-07: %d\n",0x15);
 __printf_chk(1,"CALL-L1-08: %d\n",0xf);
 __printf_chk(1,"CALL-L1-09: %d\n",10);
 __printf_chk(1,"CALL-L1-10: %d\n",0x21);
 uVar1 = varargs_func(5,1,2,3,4,5);
 __printf_chk(1,&DAT_0001202c,uVar1);
 __printf_chk(1,&DAT_00012054,0x2a);
 __printf_chk(1,&DAT_00012078,0x24);
 __printf_chk(1,&DAT_000120a0,0x75);
 uVar2 = 1;
 uVar5 = 0;
 do {
 auStack_118[uVar2 * 2] = uVar2;
 auStack_118[uVar2 * 2 + 1] = uVar5;
 bVar7 = 0xfffffffe < uVar2;
 uVar2 = uVar2 + 1;
 uVar5 = uVar5 + bVar7;
 } while (uVar5 != 0 || uVar2 != 0x11);
 puVar3 = auStack_118 + 2;
 puVar6 = local_90;
 for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
 *puVar6 = *puVar3;
 puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
 puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
 }
 puVar3 = local_90;
 iVar4 = 0;
 do {
 iVar4 = iVar4 + *puVar3;
 puVar3 = puVar3 + 2;
 } while (&local_10 != puVar3);
 __printf_chk(1,&DAT_000120c8,iVar4);
 __printf_chk(1,&DAT_000120f4,0x32);
 if (local_10 == *(uint *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_by_value_int @ 000116af */

int param_by_value_int(int param_1)

{
 return param_1 * 2;
}



/* Function: call_by_value_int @ 000116ba */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 000116c4 */

undefined4 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 000116d4 */

undefined4 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 000116de */

undefined4 param_array_decay(void)

{
 return 4;
}



/* Function: call_array_decay @ 000116e8 */

undefined4 call_array_decay(void)

{
 return 4;
}



/* Function: param_string @ 000116f2 */

int param_string(char *param_1)

{
 return (int)*param_1 + (int)param_1[1];
}



/* Function: call_string_param @ 00011704 */

undefined4 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 0001170e */

int param_ptr_array(undefined4 *param_1,int param_2)

{
 undefined4 *puVar1;
 int iVar2;
 
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 puVar1 = param_1 + param_2;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(char *)*param_1;
 param_1 = param_1 + 1;
 } while (param_1 != puVar1);
 }
 return iVar2;
}



/* Function: call_ptr_array @ 00011742 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_ptr_array(void)

{
 int in_GS_OFFSET;
 undefined *local_1c;
 undefined *local_18;
 undefined *local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = &DAT_000121e5;
 local_18 = &DAT_000121e9;
 local_14 = &DAT_000121ed;
 param_ptr_array(&local_1c,3);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_varargs @ 000117a2 */

int param_varargs(int param_1, ...)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int local_stack[10];
 
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar3 = 0;
 iVar2 = 0;
 piVar1 = local_stack;
 do {
 iVar2 = iVar2 + *piVar1;
 iVar3 = iVar3 + 1;
 piVar1 = piVar1 + 1;
 } while (param_1 != iVar3);
 }
 return iVar2;
}



/* Function: call_varargs_param @ 000117d8 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: param_func_ptr @ 000117ef */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00011805 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_func_ptr_param(void)

{
 return param_func_ptr(callback_func,5);
}



/* Function: param_double_ptr @ 00011828 */

undefined4 param_double_ptr(int *param_1,undefined4 param_2)

{
 if (param_1 == (int *)0x0) {
 return 0xffffffff;
 }
 if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}



/* Function: call_double_ptr @ 00011858 */

int call_double_ptr(void)

{
 int in_GS_OFFSET;
 int local_18;
 int *local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = 10;
 local_14 = &local_18;
 param_double_ptr(&local_14,0x14);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (uint)(local_14 == (int *)0x0) + local_18;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_complex_cast @ 000118af */

int param_complex_cast(int *param_1,int param_2)

{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 return param_1[1] + *param_1;
 }
 return -1;
}



/* Function: call_complex_cast @ 000118d3 */

undefined4 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 000118dd */

int param_struct_byval(int param_1)

{
 int in_stack_00000040;
 
 return in_stack_00000040 + param_1;
}



/* Function: call_struct_byval @ 000118ea */

int call_struct_byval(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_50 [16];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 0;
 do {
 local_50[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_50[0] + local_50[0xf];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_order_dep @ 00011927 */

int param_order_dep(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_order_dep @ 00011934 */

undefined4 call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 0001193e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00012124);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 uVar1 = call_by_value_ptr();
 __printf_chk(1,"PARAM-L1-02: %d\n",uVar1);
 __printf_chk(1,"PARAM-L2-01: %d\n",4);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 uVar1 = call_ptr_array();
 __printf_chk(1,"PARAM-L2-03: %d\n",uVar1);
 call_varargs_param();
 __printf_chk(1,"PARAM-L2-04: %d\n",0);
 uVar1 = call_func_ptr_param();
 __printf_chk(1,"PARAM-L3-01: %d\n",uVar1);
 uVar1 = call_double_ptr();
 __printf_chk(1,"PARAM-L3-02: %d\n",uVar1);
 uVar1 = call_complex_cast();
 __printf_chk(1,"PARAM-L3-03: %d\n",uVar1);
 uVar1 = call_struct_byval();
 __printf_chk(1,"PARAM-L3-04: %d\n",uVar1);
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
}



/* Function: ret_basic_type @ 00011a52 */

int ret_basic_type(int param_1)

{
 return param_1 * 2;
}



/* Function: call_ret_basic @ 00011a5d */

undefined4 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00011a67 */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00011a73 */

undefined4 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00011a7d */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}



/* Function: call_ret_small_struct @ 00011a95 */

undefined4 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00011a9f */

int * ret_large_struct(int *param_1,int param_2)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_50 [4];
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 int local_30;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = param_2;
 do {
 local_50[iVar1 - param_2] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != param_2 + 0x10);
 *param_1 = local_50[0];
 param_1[1] = local_50[1];
 param_1[2] = local_50[2];
 param_1[3] = local_50[3];
 param_1[4] = local_40;
 param_1[5] = local_3c;
 param_1[6] = local_38;
 param_1[7] = local_34;
 param_1[8] = local_30;
 param_1[9] = local_2c;
 param_1[10] = local_28;
 param_1[0xb] = local_24;
 param_1[0xc] = local_20;
 param_1[0xd] = local_1c;
 param_1[0xe] = local_18;
 param_1[0xf] = local_14;
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return param_1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_ret_large_struct @ 00011b5a */

int call_ret_large_struct(void)

{
 int in_GS_OFFSET;
 int local_54;
 undefined1 local_50 [56];
 int local_18;
 int local_14;
 undefined4 local_10;
 
 local_10 = *(undefined4 *)(in_GS_OFFSET + 0x14);
 ret_large_struct(local_50,100);
 if (local_14 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_18 + local_54;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: ret_func_ptr @ 00011b9d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00011bc0 */

undefined4 call_ret_func_ptr(void)

{
 return func_b(5);
}



/* Function: ret_opaque_handle @ 00011bcf */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00011bf2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_ret_opaque(void)

{
 return handle1_1;
}



/* Function: ret_complex_expr @ 00011c07 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00011c21 */

undefined4 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00011c2b */

int ret_multi_branch(int param_1)

{
 int iVar1;
 
 iVar1 = 0x14;
 if ((param_1 != 1) && (iVar1 = 0x1e, param_1 != 2)) {
 iVar1 = (-(uint)(param_1 == 0) & 0xb) - 1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00011c53 */

undefined4 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00011c5d */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00011c6f */

undefined4 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00011c79 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_return_values(void)

{
 undefined4 uVar1;
 
 puts(&DAT_000122ac);
 __printf_chk(1,&DAT_000122ca,0x2a);
 uVar1 = call_ret_pointer();
 __printf_chk(1,&DAT_000122e6,uVar1);
 uVar1 = call_ret_small_struct();
 __printf_chk(1,&DAT_00012302,uVar1);
 uVar1 = call_ret_large_struct();
 __printf_chk(1,&DAT_0001231d,uVar1);
 uVar1 = call_ret_func_ptr();
 __printf_chk(1,&DAT_0001233a,uVar1);
 __printf_chk(1,&DAT_00012356,handle1_1);
 __printf_chk(1,&DAT_00012373,0x28);
 __printf_chk(1,&DAT_0001238f,0x3c);
 __printf_chk(1,&DAT_000123ab,0x15);
 return;
}



/* Function: main @ 00011d5c */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00011d7c */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00011d80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Global variables */
undefined8 handle1_1 = 0;
undefined8 handle2_0 = 0;
undefined4 stack0x00000004 = 0;
undefined4 stack0x00000084 = 0;
char DAT_00012008[] = "Calling Conventions Test";
char DAT_0001202c[] = "CALL-L1-11: %d\n";
char DAT_00012054[] = "CALL-L1-12: %d\n";
char DAT_00012078[] = "CALL-L1-13: %d\n";
char DAT_000120a0[] = "CALL-L1-14: %d\n";
char DAT_000120c8[] = "CALL-L1-15: %d\n";
char DAT_000120f4[] = "CALL-L1-16: %d\n";
char DAT_00012124[] = "Parameter Passing Test";
char DAT_000121e5[] = "abc";
char DAT_000121e9[] = "def";
char DAT_000121ed[] = "ghi";
char DAT_000122ac[] = "Return Values Test";
char DAT_000122ca[] = "RET-L1-01: %d\n";
char DAT_000122e6[] = "RET-L1-02: %d\n";
char DAT_00012302[] = "RET-L1-03: %d\n";
char DAT_0001231d[] = "RET-L1-04: %d\n";
char DAT_0001233a[] = "RET-L1-05: %d\n";
char DAT_00012356[] = "RET-L1-06: %d\n";
char DAT_00012373[] = "RET-L1-07: %d\n";
char DAT_0001238f[] = "RET-L1-08: %d\n";
char DAT_000123ab[] = "RET-L1-09: %d\n";

/* Total functions decompiled: 85 */
