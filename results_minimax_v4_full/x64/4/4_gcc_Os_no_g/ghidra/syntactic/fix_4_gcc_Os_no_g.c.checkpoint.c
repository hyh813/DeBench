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

/* Additional types needed for decompiled code */
typedef uint8_t undefined;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint16_t undefined2;
typedef uint8_t undefined1;
typedef uint32_t uint;
typedef unsigned long ulong;
typedef uint8_t byte;
typedef int (*code)(int);

/* Stack parameter reference for varargs functions - Ghidra representation */
static char stack0x00000008[256];

/* Standard library headers */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* External symbols from the binary */
extern int handle1_1;
extern int handle2_0;

/* String data */
extern char DAT_00102004[];
extern char DAT_001020c5[];
extern char DAT_001020ed[];
extern char DAT_0010210f[];
extern char DAT_00102136[];
extern char DAT_0010213b[];
extern char DAT_00102163[];
extern char DAT_0010218f[];
extern char DAT_001021bc[];
extern char DAT_001021c0[];
extern char DAT_001021c4[];
extern char DAT_001021c8[];
extern char DAT_001022a4[];
extern char DAT_001022c2[];
extern char DAT_001022de[];
extern char DAT_001022fa[];
extern char DAT_00102315[];
extern char DAT_00102332[];
extern char DAT_0010234e[];
extern char DAT_0010236b[];
extern char DAT_00102387[];
extern char DAT_001023a3[];

/* Missing string definitions */
char DAT_00102004[] = "TEST-CALLING-CONVENTIONS\n";
char DAT_001020c5[] = "VARARG-01: %d\n";
char DAT_0010210f[] = "CALL-L1-03: %d\n";
char DAT_001020ed[] = "PARAM-L2-03: %d\n";
char DAT_0010213b[] = "PARAM-L2-06: %d\n";
char DAT_00102136[] = "PARAM-L2-05: %d\n";
char DAT_00102163[] = "PARAM-L2-06: %d\n";
char DAT_0010218f[] = "CALL-L1-10: %d\n";
char DAT_001021c8[] = "TEST-PARAMETER-PASSING\n";
char DAT_001022a4[] = "TEST-RETURN-VALUES\n";
char DAT_001022c2[] = "RETURNS-01: %d\n";
char DAT_001022de[] = "RETURNS-02: %d\n";
char DAT_001022fa[] = "RETURNS-03: %d\n";
char DAT_00102315[] = "RETURNS-04: %d\n";
char DAT_00102332[] = "RETURNS-05: %d\n";
char DAT_0010234e[] = "RETURNS-06: %d\n";
char DAT_0010236b[] = "RETURNS-07: %d\n";
char DAT_00102387[] = "RETURNS-07: %d\n";
char DAT_001023a3[] = "RETURNS-08: %d\n";

/* Handle definitions */
int handle1_1 = 0;
int handle2_0 = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/4/4_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 return;
}



/* Function: main @ 001010c0 */

int main(void)

{
 ulong in_RAX;
 
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 /* Return the value in RAX (upper 64 bits are 0) */
 return (int)in_RAX;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: func_a @ 001011c9 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 001011d1 */

int func_b(int param_1)

{
 return param_1 * 2;
}



/* Function: callback_func @ 001011d9 */

int callback_func(int param_1)

{
 return param_1 * 2;
}



/* Function: cdecl_func @ 001011e1 */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 001011e9 */

undefined8 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 001011f3 */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 001011fd */

undefined8 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00101207 */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 00101211 */

undefined8 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 0010121b */

undefined8 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00101225 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 00101234 */

undefined8 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 0010123e */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 0010124a */

undefined8 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 00101254 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00101266 */

undefined8 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00101270 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 0010127f */

undefined8 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00101289 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00101295 */

undefined8 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 0010129f */

undefined8 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 001012a9 */

int varargs_func(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
 undefined8 param_5,undefined8 param_6)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 ulong uVar5;
 ulong uVar6;
 int iVar7;
 long in_FS_OFFSET;
 int local_38 [2];
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 undefined8 local_18;
 undefined8 local_10;
 
 local_28 = param_3;
 local_20 = param_4;
 iVar4 = 0;
 local_18 = param_5;
 iVar7 = 0;
 local_10 = param_6;
 local_30 = param_2;
 piVar2 = (int *)&stack0x00000008;
 uVar5 = 8;
 while( true ) {
 if (param_1 <= iVar4) break;
 piVar3 = piVar2;
 uVar6 = uVar5;
 piVar1 = piVar2 + 2;
 if ((uint)uVar5 < 0x30) {
 uVar6 = (ulong)((uint)uVar5 + 8);
 piVar3 = (int *)((long)local_38 + uVar5);
 piVar1 = piVar2;
 }
 piVar2 = piVar1;
 iVar7 = iVar7 + *piVar3;
 iVar4 = iVar4 + 1;
 uVar5 = uVar6;
 }
 if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar7;
}



/* Function: func_no_args @ 00101345 */

undefined8 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 0010134f */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00101369 */

int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = 0;
 if (param_3 != (char *)0x0) {
 sVar2 = strlen(param_3);
 iVar1 = (int)sVar2;
 }
 return (int)((double)(iVar1 + param_2) + param_1 + (double)param_4);
}



/* Function: func_struct_byval @ 001013ad */

long func_struct_byval(void)

{
 long lVar1;
 long lVar2;
 
 lVar2 = 0;
 lVar1 = 0;
 do {
 lVar1 = lVar1 + *(long *)(&stack0x00000008 + lVar2 * 8);
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 return lVar1;
}



/* Function: func_struct_byptr @ 001013c4 */

int func_struct_byptr(int *param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 != (int *)0x0) {
 iVar1 = *param_1 * param_1[1];
 }
 return iVar1;
}



/* Function: test_calling_conventions @ 001013d7 */

/* WARNING: Type propagation algorithm not settling */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 long lVar2;
 long lVar3;
 long lVar4;
 long *plVar5;
 long *plVar6;
 long in_FS_OFFSET;
 byte bVar7;
 long alStack_118 [17];
 long local_90 [16];
 long local_10;
 
 bVar7 = 0;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102004);
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
 __printf_chk(1,&DAT_001020c5,uVar1);
 __printf_chk(1,&DAT_001020ed,0x2a);
 __printf_chk(1,&DAT_0010210f,0x24);
 uVar1 = func_mixed_args(0x40091eb851eb851f,10,&DAT_00102136,100);
 __printf_chk(1,&DAT_0010213b,uVar1);
 lVar2 = 1;
 do {
 alStack_118[lVar2] = lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x11);
 lVar2 = 0;
 lVar4 = 0;
 plVar5 = alStack_118 + 1;
 plVar6 = local_90;
 for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
 *(int *)plVar6 = (int)*plVar5;
 plVar5 = (long *)((long)plVar5 + ((ulong)bVar7 * -2 + 1) * 4);
 plVar6 = (long *)((long)plVar6 + (ulong)bVar7 * -8 + 4);
 }
 do {
 lVar4 = lVar4 + local_90[lVar2];
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 __printf_chk(1,&DAT_00102163,lVar4);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_0010218f,0x32);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_by_value_int @ 00101619 */

int param_by_value_int(int param_1)

{
 return param_1 * 2;
}



/* Function: call_by_value_int @ 00101621 */

undefined8 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 0010162b */

undefined8 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00101642 */

undefined8 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 0010164c */

undefined8 param_array_decay(void)

{
 return 8;
}



/* Function: call_array_decay @ 00101656 */

undefined8 call_array_decay(void)

{
 return 8;
}



/* Function: param_string @ 00101660 */

int param_string(char *param_1)

{
 return (int)*param_1 + (int)param_1[1];
}



/* Function: call_string_param @ 0010166e */

undefined8 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00101678 */

int param_ptr_array(long param_1,int param_2)

{
 long lVar1;
 int iVar2;
 
 iVar2 = 0;
 for (lVar1 = 0; (int)lVar1 < param_2; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + **(char **)(param_1 + lVar1 * 8);
 }
 return iVar2;
}



/* Function: call_ptr_array @ 00101698 */

void call_ptr_array(void)

{
 long in_FS_OFFSET;
 undefined *local_28;
 undefined *local_20;
 undefined *local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28 = &DAT_001021bc;
 local_20 = &DAT_001021c0;
 local_18 = &DAT_001021c4;
 param_ptr_array(&local_28,3);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: param_varargs @ 001016f8 */

int param_varargs(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
 undefined8 param_5,undefined8 param_6)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 ulong uVar5;
 ulong uVar6;
 int iVar7;
 long in_FS_OFFSET;
 int local_38 [2];
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 undefined8 local_18;
 undefined8 local_10;
 
 local_28 = param_3;
 local_20 = param_4;
 iVar4 = 0;
 local_18 = param_5;
 iVar7 = 0;
 local_10 = param_6;
 local_30 = param_2;
 piVar2 = (int *)&stack0x00000008;
 uVar5 = 8;
 while( true ) {
 if (param_1 <= iVar4) break;
 piVar3 = piVar2;
 uVar6 = uVar5;
 piVar1 = piVar2 + 2;
 if ((uint)uVar5 < 0x30) {
 uVar6 = (ulong)((uint)uVar5 + 8);
 piVar3 = (int *)((long)local_38 + uVar5);
 piVar1 = piVar2;
 }
 piVar2 = piVar1;
 iVar7 = iVar7 + *piVar3;
 iVar4 = iVar4 + 1;
 uVar5 = uVar6;
 }
 if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar7;
}



/* Function: call_varargs_param @ 00101794 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28,0x32);
 return;
}



/* Function: param_func_ptr @ 001017b9 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 001017cb */

void call_func_ptr_param(void)

{
 param_func_ptr(callback_func,5);
 return;
}



/* Function: param_double_ptr @ 001017dd */

undefined8 param_double_ptr(long *param_1,undefined4 param_2)

{
 undefined8 uVar1;
 
 uVar1 = 0xffffffff;
 if ((param_1 != (long *)0x0) && (uVar1 = 0xffffffff, (undefined4 *)*param_1 != (undefined4 *)0x0))
 {
 *(undefined4 *)*param_1 = param_2;
 uVar1 = 1;
 *param_1 = 0;
 }
 return uVar1;
}



/* Function: call_double_ptr @ 00101800 */

undefined8 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 0010180a */

int param_complex_cast(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 0) {
 return *param_1;
 }
 iVar1 = -1;
 if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 return iVar1;
}



/* Function: call_complex_cast @ 00101822 */

undefined8 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 0010182c */

int param_struct_byval(void)

{
 int in_stack_00000008;
 int in_stack_0000000c;
 
 return in_stack_0000000c + in_stack_00000008;
}



/* Function: call_struct_byval @ 00101839 */

int call_struct_byval(void)

{
 long lVar1;
 long in_FS_OFFSET;
 int local_50 [16];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 lVar1 = 0;
 do {
 local_50[lVar1] = (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_50[0xf] + local_50[0];
}



/* Function: param_order_dep @ 00101880 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 00101888 */

undefined8 call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 00101892 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 undefined8 in_RAX;
 
 puts(&DAT_001021c8);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",8);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 (void)call_ptr_array();
 __printf_chk(1,"PARAM-L2-03: %d\n",0);
 call_varargs_param();
 __printf_chk(1,"PARAM-L2-04: %d\n",0);
 (void)call_func_ptr_param();
 __printf_chk(1,"PARAM-L3-01: %d\n",0);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 uVar1 = call_struct_byval();
 __printf_chk(1,"PARAM-L3-04: %d\n",uVar1);
 __printf_chk(1,"PARAM-L3-05: %d\n",4,in_RAX);
 return;
}



/* Function: ret_basic_type @ 001019bc */

int ret_basic_type(int param_1)

{
 return param_1 * 2;
}



/* Function: call_ret_basic @ 001019c4 */

undefined8 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 001019ce */

long ret_pointer(long param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 001019d7 */

undefined8 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 001019e1 */

ulong ret_small_struct(uint param_1,long param_2)

{
 return (ulong)param_1 | param_2 << 0x20;
}



/* Function: call_ret_small_struct @ 001019ef */

undefined8 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 001019f9 */

void ret_large_struct(int *param_1,int param_2)

{
 long lVar1;
 int *piVar2;
 long in_FS_OFFSET;
 int local_50 [16];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 lVar1 = 0;
 do {
 local_50[lVar1] = param_2 + (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 piVar2 = local_50;
 for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
 *param_1 = *piVar2;
 piVar2 = piVar2 + 1;
 param_1 = param_1 + 1;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: call_ret_large_struct @ 00101a49 */

int call_ret_large_struct(void)

{
 long in_FS_OFFSET;
 int local_50 [15];
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 ret_large_struct(local_50,100);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_14 + local_50[0];
}



/* Function: ret_func_ptr @ 00101a92 */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101aab */

undefined8 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00101ab5 */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101ace */

undefined4 call_ret_opaque(void)

{
 return handle1_1;
}



/* Function: ret_complex_expr @ 00101ad9 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101ae8 */

undefined8 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00101af2 */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = (param_1 + 1) * 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101b04 */

undefined8 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00101b0e */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00101b18 */

undefined8 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00101b22 */

void test_return_values(void)

{
 undefined4 uVar1;
 undefined8 in_RAX;
 
 puts(&DAT_001022a4);
 __printf_chk(1,&DAT_001022c2,0x2a);
 __printf_chk(1,&DAT_001022de,0x14);
 __printf_chk(1,&DAT_001022fa,7);
 uVar1 = call_ret_large_struct();
 __printf_chk(1,&DAT_00102315,uVar1);
 __printf_chk(1,&DAT_00102332,10);
 __printf_chk(1,&DAT_0010234e,handle1_1);
 __printf_chk(1,&DAT_0010236b,0x28);
 __printf_chk(1,&DAT_00102387,0x3c);
 __printf_chk(1,&DAT_001023a3,0x15,in_RAX);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 78 */
