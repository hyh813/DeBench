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
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef void (*code)(void);
typedef unsigned int uint;
#define ROUND(x) ((int)((x) + 0.5))
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | ((uint64_t)(low) & 0xffffffff))

/* Data symbol declarations */
extern const char DAT_000130cc[];
extern const char DAT_000130f4[];
extern const char DAT_00013118[];
extern const char DAT_0001313f[];
extern const char DAT_00013144[];
extern const char DAT_0001316c[];
extern const char DAT_00013198[];
extern const char DAT_000131cb[];
extern const char DAT_000131cf[];
extern const char DAT_000131d3[];
extern const char DAT_000131d8[];
extern const char DAT_000132b4[];
extern const char DAT_000132d2[];
extern const char DAT_000132ee[];
extern const char DAT_0001330a[];
extern const char DAT_00013325[];
extern const char DAT_00013342[];
extern const char DAT_0001335e[];
extern const char DAT_0001337b[];
extern const char DAT_00013397[];
extern const char DAT_000133b3[];

/* Global variable declarations */
undefined8 handle1_1;
undefined8 handle2_0;

/* String constant definitions */
const char DAT_000130cc[] = "VARARGS-TEST: %d\n";
const char DAT_000130f4[] = "RET-L1-01: %d\n";
const char DAT_00013118[] = "FUNC-MANY-02: %d\n";
const char DAT_00013144[] = "PARAM-L2-03: %d\n";
const char DAT_0001316c[] = "STRUCT-BYPTR: %d\n";
const char DAT_00013198[] = "CALL-L1-11: %d\n";
const char DAT_000131cb[] = "A";
const char DAT_000131cf[] = "X";
const char DAT_000131d3[] = "Y";
const char DAT_000131d8[] = "Parameter passing test:\n";
const char DAT_000132b4[] = "Return values test:\n";
const char DAT_000132d2[] = "RET-L1-02: %d\n";
const char DAT_000132ee[] = "RET-L1-03: %d\n";
const char DAT_0001330a[] = "RET-L1-07: %d\n";
const char DAT_00013325[] = "RET-L1-05: %d\n";
const char DAT_00013342[] = "RET-L1-04: %d\n";
const char DAT_0001335e[] = "RET-L1-06: %d\n";
const char DAT_0001337b[] = "RET-L1-08: %d\n";
const char DAT_00013397[] = "RET-L1-09: %d\n";
const char DAT_000133b3[] = "RET-L1-10: %d\n";
const char DAT_0001313f[] = "";

/* External function declarations */
extern void __stack_chk_fail(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/4/4_gcc_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
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



/* Function: cdecl_func @ 00011261 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int cdecl_func(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_cdecl @ 0001127c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_cdecl(void)

{
 cdecl_func(5,10);
 return;
}



/* Function: stdcall_func @ 0001129b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 000112b7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_stdcall(void)

{
 stdcall_func(5,10);
 return;
}



/* Function: fastcall_func @ 000112d3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int fastcall_func(int param_1)

{
 int in_ECX;
 int in_EDX;
 
 return param_1 + in_ECX + in_EDX;
}



/* Function: call_fastcall @ 000112fe */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_fastcall(void)

{
 fastcall_func(3);
 return;
}



/* Function: call_thiscall @ 00011322 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 0001133a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_5 + param_1 + param_2 + param_3 + param_4;
}



/* Function: call_arm_aapcs @ 00011364 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_arm_aapcs(void)

{
 arm_aapcs_func(1,2,3,4,5);
 return;
}



/* Function: mips_func @ 00011389 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_4 + param_1 + param_2 + param_3;
}



/* Function: call_mips @ 000113ae */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_mips(void)

{
 mips_func(10,0x14,0x1e,0x28);
 return;
}



/* Function: amd64_sysv_func @ 000113d1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_6 + param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_amd64_sysv @ 00011400 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_amd64_sysv(void)

{
 amd64_sysv_func(1,2,3,4,5,6);
 return;
}



/* Function: ms_x64_func @ 00011427 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_5 + param_1 + param_2 + param_3 + param_4;
}



/* Function: call_ms_x64 @ 00011451 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_ms_x64(void)

{
 ms_x64_func(1,2,3,4,5);
 return;
}



/* Function: vectorcall_func @ 00011476 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_4 + param_1 + param_2 + param_3;
}



/* Function: call_vectorcall @ 0001149b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_vectorcall(void)

{
 vectorcall_func(1,2,3,4);
 return;
}



/* Function: mixed_conventions_test @ 000114be */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int mixed_conventions_test(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = cdecl_func(1,2);
 iVar2 = stdcall_func(3,4);
 iVar3 = fastcall_func(7);
 return iVar1 + iVar2 + iVar3;
}



/* Function: varargs_func @ 0001150d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int varargs_func(int param_1, ...)

{
 int in_GS_OFFSET;
 int *local_1c;
 int local_18;
 int local_14;
 int local_08[4];
 
 local_18 = 0;
 local_1c = (int *)&local_08;
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 local_18 = local_18 + *local_1c;
 local_1c = local_1c + 1;
 }
 if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
 local_18 = __stack_chk_fail_local();
 }
 return local_18;
}



/* Function: func_no_args @ 00011572 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 0001158a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_8 + param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7;
}



/* Function: func_mixed_args @ 000115c3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int func_mixed_args(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
 undefined4 param_5,undefined4 param_6)

{
 size_t sVar1;
 
 if (param_2 == (char *)0x0) {
 sVar1 = 0;
 }
 else {
 sVar1 = strlen(param_2);
 }
 return (int)ROUND((double)CONCAT44(param_6,param_5) +
 (double)(int)(sVar1 + param_1) + (double)CONCAT44(param_4,param_3));
}



/* Function: func_struct_byval @ 00011645 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int func_struct_byval(void)

{
 int local_10;
 int local_c;
 int local_04[16];
 
 local_c = 0;
 for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
 local_c = local_c + *(int *)(&local_04 + local_10 * 8);
 }
 return local_c;
}



/* Function: func_struct_byptr @ 00011690 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int func_struct_byptr(int *param_1)

{
 int iVar1;
 
 if (param_1 == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = param_1[1] * *param_1;
 }
 return iVar1;
}



/* Function: test_calling_conventions @ 000116be */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_calling_conventions(void)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int in_GS_OFFSET;
 byte bVar4;
 int aiStackY_14c [23];
 undefined4 uStackY_f0;
 undefined4 uStackY_ec;
 undefined *puStackY_e8;
 undefined8 local_e4;
 int local_c8;
 int local_a0 [36];
 
 bVar4 = 0;
 local_a0[0x20] = *(int *)(in_GS_OFFSET + 0x14);
 local_e4 = CONCAT44(0x116f3,(undefined4)local_e4);
 puts("Calling conventions test:");
 call_cdecl();
 local_e4 = CONCAT44(0x1170b,(undefined4)local_e4);
 printf("CALL-L1-01: %d\n");
 call_stdcall();
 local_e4 = CONCAT44(0x11723,(undefined4)local_e4);
 printf("CALL-L1-02: %d\n");
 call_fastcall();
 local_e4 = CONCAT44(0x1173b,(undefined4)local_e4);
 printf("CALL-L1-03: %d\n");
 call_thiscall();
 local_e4 = CONCAT44(0x11753,(undefined4)local_e4);
 printf("CALL-L1-04: %d\n");
 call_arm_aapcs();
 local_e4 = CONCAT44(0x1176b,(undefined4)local_e4);
 printf("CALL-L1-05: %d\n");
 call_mips();
 local_e4 = CONCAT44(0x11783,(undefined4)local_e4);
 printf("CALL-L1-06: %d\n");
 call_amd64_sysv();
 local_e4 = CONCAT44(0x1179b,(undefined4)local_e4);
 printf("CALL-L1-07: %d\n");
 call_ms_x64();
 local_e4 = CONCAT44(0x117b3,(undefined4)local_e4);
 printf("CALL-L1-08: %d\n");
 call_vectorcall();
 local_e4 = CONCAT44(0x117cb,(undefined4)local_e4);
 printf("CALL-L1-09: %d\n");
 mixed_conventions_test();
 local_e4 = CONCAT44(0x117e3,(undefined4)local_e4);
 printf("CALL-L1-10: %d\n");
 local_e4 = 0x300000002;
 puStackY_e8 = (undefined *)0x1;
 uStackY_ec = 5;
 uStackY_f0 = 0x117fa;
 varargs_func(3,1,2,3);
 local_e4 = CONCAT44(0x11818,(undefined4)local_e4);
 printf(&DAT_000130cc);
 func_no_args();
 local_e4 = CONCAT44(0x1183b,(undefined4)local_e4);
 printf(&DAT_000130f4);
 local_e4 = 0x400000003;
 puStackY_e8 = (undefined *)0x2;
 uStackY_ec = 1;
 uStackY_f0 = 0x11853;
 func_many_args(1,2,3,4,5,6,7,8);
 local_e4 = CONCAT44(0x11871,(undefined4)local_e4);
 printf(&DAT_00013118);
 puStackY_e8 = &DAT_0001313f;
 local_e4 = 0x40091eb851eb851f;
 uStackY_ec = 10;
 uStackY_f0 = 0x118a1;
 func_mixed_args(5,(char *)&DAT_0001313f,0,0,0,0);
 local_e4 = CONCAT44(0x118bf,(undefined4)local_e4);
 printf(&DAT_00013144);
 for (local_c8 = 0; local_c8 < 0x10; local_c8 = local_c8 + 1) {
 local_a0[local_c8 * 2] = local_c8 + 1;
 local_a0[local_c8 * 2 + 1] = local_c8 + 1 >> 0x1f;
 }
 piVar2 = local_a0;
 piVar3 = aiStackY_14c;
 for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
 *piVar3 = *piVar2;
 piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
 piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
 }
 func_struct_byval();
 local_e4 = CONCAT44(0x11937,(undefined4)local_e4);
 printf(&DAT_0001316c);
 local_e4 = CONCAT44(0x1195d,(undefined4)local_e4);
 iVar1 = func_struct_byptr(local_a0);
 local_e4 = CONCAT44(0x1197b,(undefined4)local_e4);
 printf(&DAT_00013198);
 if (local_a0[0x20] != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: param_by_value_int @ 00011998 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 000119b1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_by_value_int(void)

{
 int iVar1;
 
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 000119e4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined1 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 * 2;
 return 1;
}



/* Function: call_by_value_ptr @ 00011a15 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_by_value_ptr(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_1c;
 int *local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = 5;
 local_18 = &local_1c;
 local_14 = param_by_value_ptr(local_18);
 iVar1 = local_14 + local_1c;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: param_array_decay @ 00011a6a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 param_array_decay(int *param_1, int param_2)

{
 return 4;
}



/* Function: call_array_decay @ 00011a82 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_array_decay(void)

{
 int iVar1;
 undefined4 *puVar2;
 int in_GS_OFFSET;
 undefined4 local_38 [10];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puVar2 = local_38;
 for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar2 = 0;
 puVar2 = puVar2 + 1;
 }
 param_array_decay(local_38,10);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: param_string @ 00011ad7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_string(char *param_1)

{
 return (int)param_1[1] + (int)*param_1;
}



/* Function: call_string_param @ 00011b01 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_string_param(void)

{
 param_string("Hello");
 return;
}



/* Function: param_ptr_array @ 00011b23 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_ptr_array(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_c = 0;
 for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
 local_c = local_c + **(char **)(param_1 + local_8 * 4);
 }
 return local_c;
}



/* Function: call_ptr_array @ 00011b72 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_ptr_array(void)

{
 int in_GS_OFFSET;
 undefined *local_1c;
 undefined *local_18;
 undefined *local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = &DAT_000131cb;
 local_18 = &DAT_000131cf;
 local_14 = &DAT_000131d3;
 param_ptr_array(&local_1c,3);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: param_varargs @ 00011bce */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_varargs(int param_1, ...)

{
 int in_GS_OFFSET;
 int *local_1c;
 int local_18;
 int local_14;
 int local_08[4];
 
 local_18 = 0;
 local_1c = (int *)&local_08;
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 local_18 = local_18 + *local_1c;
 local_1c = local_1c + 1;
 }
 if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
 local_18 = __stack_chk_fail_local();
 }
 return local_18;
}



/* Function: call_varargs_param @ 00011c33 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: param_func_ptr @ 00011c5e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

typedef int (*int_func_ptr)(int);

int param_func_ptr(int_func_ptr param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: callback_func @ 00011c85 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int callback_func(int param_1)

{
 return param_1 * 2;
}



/* Function: call_func_ptr_param @ 00011c9d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_func_ptr_param(void)

{
 param_func_ptr(callback_func,5);
 return;
}



/* Function: param_double_ptr @ 00011cc7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 param_double_ptr(int *param_1,undefined4 param_2)

{
 undefined4 uVar1;
 
 if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: call_double_ptr @ 00011d08 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_double_ptr(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_1c;
 int *local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = 10;
 local_18 = &local_1c;
 local_14 = param_double_ptr(&local_18,0x14);
 iVar1 = local_1c + (uint)(local_18 == (int *)0x0);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: param_complex_cast @ 00011d68 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_complex_cast(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 0) {
 iVar1 = *param_1;
 }
 else if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_complex_cast @ 00011dbd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_complex_cast(void)

{
 int in_GS_OFFSET;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = 0x12345678;
 local_18 = 100;
 local_14 = 200;
 param_complex_cast(&local_18,1);
 param_complex_cast(&local_1c,0);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: param_struct_byval @ 00011e20 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_struct_byval(int param_1, int param_2, int param_3, int param_4, int param_5,
                       int param_6, int param_7, int param_8, int param_9, int param_10,
                       int param_11, int param_12, int param_13, int param_14, int param_15,
                       int param_16)

{
 int in_stack_00000040;
 
 return in_stack_00000040 + param_1;
}



/* Function: call_struct_byval @ 00011e3b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_struct_byval(void)

{
 int in_GS_OFFSET;
 int local_54;
 int local_50 [16];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 for (local_54 = 0; local_54 < 0x10; local_54 = local_54 + 1) {
 local_50[local_54] = local_54;
 }
 param_struct_byval(local_50[0],local_50[1],local_50[2],local_50[3],local_50[4],local_50[5],
 local_50[6],local_50[7],local_50[8],local_50[9],local_50[10],local_50[0xb],
 local_50[0xc],local_50[0xd],local_50[0xe],local_50[0xf]);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: param_order_dep @ 00011ec2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_order_dep(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_order_dep @ 00011edd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_order_dep(void)

{
 param_order_dep(2,2);
 return;
}



/* Function: test_parameter_passing @ 00011f10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 
 puts(&DAT_000131d8);
 uVar1 = call_by_value_int();
 printf("PARAM-L1-01: %d\n",uVar1);
 uVar1 = call_by_value_ptr();
 printf("PARAM-L1-02: %d\n",uVar1);
 call_array_decay();
 printf("PARAM-L2-01: %d\n",uVar1);
 call_string_param();
 printf("PARAM-L2-02: %d\n",0);
 call_ptr_array();
 printf("PARAM-L2-03: %d\n",0);
 call_varargs_param();
 printf("PARAM-L2-04: %d\n",0);
 call_func_ptr_param();
 printf("PARAM-L3-01: %d\n",0);
 uVar1 = call_double_ptr();
 printf("PARAM-L3-02: %d\n",uVar1);
 call_complex_cast();
 printf("PARAM-L3-03: %d\n",0);
 call_struct_byval();
 printf("PARAM-L3-04: %d\n",0);
 call_order_dep();
 printf("PARAM-L3-05: %d\n",0);
 return;
}



/* Function: ret_basic_type @ 00012046 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ret_basic_type(int param_1)

{
 return param_1 * 2;
}



/* Function: call_ret_basic @ 0001205e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_ret_basic(void)

{
 undefined4 uVar1;
 
 uVar1 = ret_basic_type(0x15);
 return uVar1;
}



/* Function: ret_pointer @ 0001208c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 000120a5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_ret_pointer(void)

{
 undefined4 *puVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = 10;
 local_18 = 0x14;
 local_14 = 0x1e;
 puVar1 = (undefined4 *)ret_pointer(&local_1c);
 uVar2 = *puVar1;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar2 = __stack_chk_fail_local();
 }
 return uVar2;
}



/* Function: ret_small_struct @ 00012100 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 * ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return param_1;
}



/* Function: call_ret_small_struct @ 00012135 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_ret_small_struct(void)

{
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ret_small_struct(&local_18,3,4);
 local_14 = local_14 + local_18;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 local_14 = __stack_chk_fail_local();
 }
 return local_14;
}



/* Function: ret_large_struct @ 0001217f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int * ret_large_struct(int *param_1,int param_2)

{
 int in_GS_OFFSET;
 int local_54;
 int local_50 [16];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 for (local_54 = 0; local_54 < 0x10; local_54 = local_54 + 1) {
 local_50[local_54] = param_2 + local_54;
 }
 *param_1 = local_50[0];
 param_1[1] = local_50[1];
 param_1[2] = local_50[2];
 param_1[3] = local_50[3];
 param_1[4] = local_50[4];
 param_1[5] = local_50[5];
 param_1[6] = local_50[6];
 param_1[7] = local_50[7];
 param_1[8] = local_50[8];
 param_1[9] = local_50[9];
 param_1[10] = local_50[10];
 param_1[0xb] = local_50[0xb];
 param_1[0xc] = local_50[0xc];
 param_1[0xd] = local_50[0xd];
 param_1[0xe] = local_50[0xe];
 param_1[0xf] = local_50[0xf];
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return param_1;
}



/* Function: call_ret_large_struct @ 00012240 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_ret_large_struct(void)

{
 int in_GS_OFFSET;
 undefined4 uVar1;
 int local_50 [15];
 int local_14;
 int local_10;
 
 uVar1 = 0x1224f;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ret_large_struct(local_50,100);
 local_14 = local_14 + local_50[0];
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 local_14 = 0;
 }
 return local_14;
}



/* Function: func_a @ 0001228b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 000122a4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int func_b(int param_1)

{
 return param_1 * 2;
}



/* Function: ret_func_ptr @ 000122bc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int (* ret_func_ptr(int param_1))(int)

{
 int (*pcVar1)(int);
 
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 else {
 pcVar1 = func_b;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 000122e3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_ret_func_ptr(void)

{
 int (*pcVar1)(int);
 
 pcVar1 = ret_func_ptr(1);
 pcVar1(5);
 return;
}



/* Function: ret_opaque_handle @ 00012313 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 if (param_1 == 0) {
 puVar1 = (undefined8 *)&handle1_1;
 }
 else {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 0001233a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_ret_opaque(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)ret_opaque_handle(0);
 return *puVar1;
}



/* Function: ret_complex_expr @ 00012362 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 if (param_2 < param_1) {
 param_3 = param_3 * 2;
 }
 else {
 param_3 = param_3 + 10;
 }
 return param_3;
}



/* Function: call_ret_complex_expr @ 0001238a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_ret_complex_expr(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = ret_complex_expr(5,3,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar2 + iVar1;
}



/* Function: ret_multi_branch @ 000123ca */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 ret_multi_branch(int param_1)

{
 if (param_1 == 2) {
 return 0x1e;
 }
 if (param_1 < 3) {
 if (param_1 == 0) {
 return 10;
 }
 if (param_1 == 1) {
 return 0x14;
 }
 }
 return 0xffffffff;
}



/* Function: call_ret_multi_branch @ 00012411 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: ret_void @ 00012458 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 0001247a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_ret_void(void)

{
 int in_GS_OFFSET;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 0;
 ret_void(7,&local_14);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return local_14;
}



/* Function: test_return_values @ 000124bd */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_return_values(void)

{
 undefined4 uVar1;
 
 puts(&DAT_000132b4);
 uVar1 = call_ret_basic();
 printf(&DAT_000132d2,uVar1);
 uVar1 = call_ret_pointer();
 printf(&DAT_000132ee,uVar1);
 uVar1 = call_ret_small_struct();
 printf(&DAT_0001330a,uVar1);
 uVar1 = call_ret_large_struct();
 printf(&DAT_00013325,uVar1);
 call_ret_func_ptr();
 printf(&DAT_00013342,0);
 uVar1 = call_ret_opaque();
 printf(&DAT_0001335e,uVar1);
 uVar1 = call_ret_complex_expr();
 printf(&DAT_0001337b,uVar1);
 uVar1 = call_ret_multi_branch();
 printf(&DAT_00013397,uVar1);
 uVar1 = call_ret_void();
 printf(&DAT_000133b3,uVar1);
 return;
}



/* Function: main @ 000125c3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 000125ed */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00012600 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 85 */
