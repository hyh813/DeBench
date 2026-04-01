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

/* Ghidra type definitions */
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined;
typedef void (*code)();
typedef unsigned int uint;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/4/4_gcc_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* String constants */
char DAT_00012008[] = "Testing Calling Conventions:\n";
char DAT_0001202c[] = "CALL-L1-11: %d\n";
char DAT_00012054[] = "CALL-L1-12: %d\n";
char DAT_00012078[] = "CALL-L1-13: %d\n";
char DAT_000120a0[] = "CALL-L1-14: %d\n";
char DAT_000120c8[] = "CALL-L1-15: %d\n";
char DAT_000120f4[] = "CALL-L1-16: %d\n";
char DAT_00012124[] = "Testing Parameter Passing:\n";
char DAT_000122a0[] = "Testing Return Values:\n";
char DAT_000122be[] = "RET-L1-01: %d\n";
char DAT_000122da[] = "RET-L1-02: %d\n";
char DAT_000122f6[] = "RET-L1-03: %d\n";
char DAT_00012311[] = "RET-L1-04: %d\n";
char DAT_0001232e[] = "RET-L1-05: %d\n";
char DAT_0001234a[] = "RET-L1-06: %d\n";
char DAT_00012367[] = "RET-L1-07: %d\n";
char DAT_00012383[] = "RET-L1-08: %d\n";
char DAT_0001239f[] = "RET-L1-09: %d\n";

/* Global variables for opaque handles */
int handle1_1 = 10;
int handle2_0 = 20;

#include <stdarg.h>

/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 void (*func_ptr)(void) = (void (*)(void))0x0;
 func_ptr();
 return;
}



/* Function: main @ 000110d0 */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
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



/* Function: func_a @ 00011270 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: param_varargs.constprop.0 @ 00011280 */

int param_varargs_constprop_0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_3 + param_2 + param_4 + param_5;
}



/* Function: varargs_func.constprop.0 @ 000112a0 */

int varargs_func_constprop_0
 (undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_3 + param_2 + param_4 + param_5 + param_6;
}



/* Function: func_b @ 000112c0 */

int func_b(int param_1)

{
 return param_1 * 2;
}



/* Function: cdecl_func @ 000112d0 */

int cdecl_func(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_cdecl @ 000112e0 */

undefined4 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 000112f0 */

int stdcall_func(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: call_stdcall @ 00011300 */

undefined4 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00011310 */

int fastcall_func(int param_1)

{
 int in_ECX;
 int in_EDX;
 
 return in_ECX + in_EDX + param_1;
}



/* Function: call_fastcall @ 00011320 */

undefined4 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00011330 */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00011340 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 00011360 */

undefined4 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 00011370 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_mips @ 00011390 */

undefined4 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 000113a0 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 000113c0 */

undefined4 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 000113d0 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 000113f0 */

undefined4 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00011400 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00011420 */

undefined4 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00011430 */

undefined4 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 00011440 */

#include <stdarg.h>

int varargs_func(int param_1, ...)

{
 int iVar1;
 int iVar2;
 va_list args;
 
 if (0 < param_1) {
 va_start(args, param_1);
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + va_arg(args, int);
 iVar1 = iVar1 + 1;
 } while (param_1 != iVar1);
 va_end(args);
 return iVar2;
 }
 return 0;
}



/* Function: func_no_args @ 00011480 */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00011490 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 000114c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int func_mixed_args(int param_1,char *param_2,double param_3,undefined4 param_4,undefined4 param_5)

{
 size_t sVar1;
 uint64_t local_1c;
 
 if (param_2 != (char *)0x0) {
 sVar1 = strlen(param_2);
 param_1 = param_1 + sVar1;
 }
 local_1c = ((uint64_t)param_5 << 32) | (uint64_t)param_4;
 return (int)((double)local_1c + (double)param_1 + param_3);
}



/* Function: func_struct_byval @ 00011540 */

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



/* Function: func_struct_byptr @ 00011590 */

int func_struct_byptr(int *param_1)

{
 if (param_1 != (int *)0x0) {
 return *param_1 * param_1[1];
 }
 return -1;
}



/* Function: test_calling_conventions @ 000115b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 
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
 uVar1 = varargs_func_constprop_0(5,1,2,3,4,5);
 __printf_chk(1,&DAT_0001202c,uVar1);
 __printf_chk(1,&DAT_00012054,0x2a);
 __printf_chk(1,&DAT_00012078,0x24);
 __printf_chk(1,&DAT_000120a0,0x75);
 __printf_chk(1,&DAT_000120c8,0x88);
 __printf_chk(1,&DAT_000120f4,0x32);
 return;
}



/* Function: param_by_value_int @ 00011720 */

int param_by_value_int(int param_1)

{
 return param_1 * 2;
}



/* Function: call_by_value_int @ 00011730 */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 00011740 */

undefined4 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00011750 */

undefined4 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 00011760 */

undefined4 param_array_decay(void)

{
 return 4;
}



/* Function: call_array_decay @ 00011770 */

undefined4 call_array_decay(void)

{
 return 4;
}



/* Function: param_string @ 00011780 */

int param_string(char *param_1)

{
 return (int)*param_1 + (int)param_1[1];
}



/* Function: call_string_param @ 000117a0 */

undefined4 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 000117b0 */

int param_ptr_array(undefined4 *param_1,int param_2)

{
 undefined4 *puVar1;
 char *pcVar2;
 int iVar3;
 
 if (0 < param_2) {
 puVar1 = param_1 + param_2;
 iVar3 = 0;
 do {
 pcVar2 = (char *)*param_1;
 param_1 = param_1 + 1;
 iVar3 = iVar3 + *pcVar2;
 } while (puVar1 != param_1);
 return iVar3;
 }
 return 0;
}



/* Function: call_ptr_array @ 000117f0 */

undefined4 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 00011800 */

int param_varargs(int param_1, ...)

{
 int iVar1;
 int iVar2;
 va_list args;
 
 if (0 < param_1) {
 va_start(args, param_1);
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + va_arg(args, int);
 iVar1 = iVar1 + 1;
 } while (param_1 != iVar1);
 va_end(args);
 return iVar2;
 }
 return 0;
}



/* Function: call_varargs_param @ 00011840 */

void call_varargs_param(void)

{
 param_varargs_constprop_0(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: param_func_ptr @ 00011860 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 
 (*param_1)(param_2);
 return param_2 + 10;
}



/* Function: call_func_ptr_param @ 00011880 */

undefined4 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00011890 */

undefined4 param_double_ptr(int *param_1,undefined4 param_2)

{
 if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}



/* Function: call_double_ptr @ 000118c0 */

undefined4 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 000118d0 */

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



/* Function: call_complex_cast @ 00011900 */

undefined4 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 00011910 */

int param_struct_byval(int param_1)

{
 int in_stack_00000040;
 
 return in_stack_00000040 + param_1;
}



/* Function: call_struct_byval @ 00011920 */

undefined4 call_struct_byval(void)

{
 return 0xf;
}



/* Function: param_order_dep @ 00011930 */

int param_order_dep(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_order_dep @ 00011940 */

undefined4 call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 00011950 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00012124);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",4);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 __printf_chk(1,"PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs_constprop_0(4,10,0x14,0x1e,0x28);
 __printf_chk(1,"PARAM-L2-04: %d\n",uVar1);
 __printf_chk(1,"PARAM-L3-01: %d\n",0x14);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 __printf_chk(1,"PARAM-L3-04: %d\n",0xf);
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
}



/* Function: ret_basic_type @ 00011a70 */

int ret_basic_type(int param_1)

{
 return param_1 * 2;
}



/* Function: call_ret_basic @ 00011a80 */

undefined4 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00011a90 */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00011aa0 */

undefined4 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00011ab0 */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}



/* Function: call_ret_small_struct @ 00011ad0 */

undefined4 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00011ae0 */

int * ret_large_struct(int *param_1,int param_2)

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
 param_1[0xf] = param_2 + 0xf;
 param_1[0xe] = param_2 + 0xe;
 return param_1;
}



/* Function: call_ret_large_struct @ 00011b50 */

undefined4 call_ret_large_struct(void)

{
 return 0xd7;
}



/* Function: ret_func_ptr @ 00011b60 */

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



/* Function: call_ret_func_ptr @ 00011b90 */

undefined4 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00011ba0 */

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



/* Function: call_ret_opaque @ 00011bd0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_ret_opaque(void)

{
 return handle1_1;
}



/* Function: ret_complex_expr @ 00011bf0 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00011c10 */

undefined4 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00011c20 */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = (param_1 * 5 + 5) * 2;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00011c40 */

undefined4 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00011c50 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00011c70 */

void call_ret_void(void)

{
 return;
}



/* Function: test_return_values @ 00011c80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_return_values(void)

{
 puts(&DAT_000122a0);
 __printf_chk(1,&DAT_000122be,0x2a);
 __printf_chk(1,&DAT_000122da,0x14);
 __printf_chk(1,&DAT_000122f6,7);
 __printf_chk(1,&DAT_00012311,0xd7);
 __printf_chk(1,&DAT_0001232e,10);
 __printf_chk(1,&DAT_0001234a,handle1_1);
 __printf_chk(1,&DAT_00012367,0x28);
 __printf_chk(1,&DAT_00012383,0x3c);
 __printf_chk(1,&DAT_0001239f,0x15);
 return;
}



/* Function: __x86.get_pc_thunk.ax @ 00011d56 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 85 */
