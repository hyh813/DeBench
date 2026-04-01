/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>

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
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef void undefined;
typedef int (*code)(undefined4);

/* External data declarations */
char DAT_0010238a[] = "Calling Conventions Test";
char DAT_001020e0[] = "VARARGS-L1-01: %d\n";
char DAT_00102108[] = "MANY-ARGS-L1-01: %d\n";
char DAT_0010212a[] = "MIXED-ARGS-L1-01: %d\n";
char DAT_00102151[] = "STRUCT-BYVAL-L1-01: %d\n";
char DAT_00102179[] = "STRUCT-BYPTR-L1-01: %d\n";
char DAT_001021a5[] = "CALL-L1-11: %d\n";
char DAT_001023ab[] = "Parameter Passing Test";
char DAT_001023cc[] = "Return Values Test";
char DAT_0010228d[] = "RET-L1-01: 42\n";
char DAT_001022a9[] = "RET-L1-02: 20\n";
char DAT_001022c5[] = "RET-L1-03: 7\n";
char DAT_001022e0[] = "RET-L1-04: 215\n";
char DAT_001022fd[] = "RET-L1-05: 10\n";
char DAT_00102319[] = "RET-L1-06: 40\n";
char DAT_00102336[] = "RET-L1-07: 60\n";
char DAT_00102352[] = "RET-L1-08: 21\n";
char DAT_0010236e[] = "RET-L1-09: 21\n";
undefined8 ret_opaque_handle_handle1 = 0x2a;
undefined8 ret_opaque_handle_handle2 = 0x15;
int stack0x00000008;

/* External function declarations */
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/4/4_clang_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)(0);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 00101160 */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 00101170 */

undefined8 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00101180 */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 00101190 */

undefined8 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 001011a0 */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 001011b0 */

undefined8 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 001011c0 */

undefined8 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 001011d0 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 001011e0 */

undefined8 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 001011f0 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 00101200 */

undefined8 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 00101210 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00101220 */

undefined8 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00101230 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00101240 */

undefined8 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00101250 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00101260 */

undefined8 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00101270 */

undefined8 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 00101280 */
/* WARNING: Removing unreachable block (ram,0x00101312) */
/* WARNING: Removing unreachable block (ram,0x001013d2) */
/* WARNING: Removing unreachable block (ram,0x001013e0) */
/* WARNING: Removing unreachable block (ram,0x00101328) */
/* WARNING: Removing unreachable block (ram,0x00101417) */
/* WARNING: Removing unreachable block (ram,0x0010141b) */
/* WARNING: Removing unreachable block (ram,0x00101420) */

int varargs_func(uint param_1, ...)

{
 int *piVar1;
 int iVar2;
 ulong uVar3;
 uint uVar4;
 uint local_d8;
 int *local_d0;
 int local_b8 [46];
 
 if ((int)param_1 < 1) {
 return 0;
 }
 local_d8 = 8;
 local_d0 = (int *)&stack0x00000008;
 if (param_1 == 1) {
 iVar2 = 0;
 }
 else {
 uVar4 = param_1 & 0xfffffffe;
 iVar2 = 0;
 do {
 while (0x28 < local_d8) {
 piVar1 = local_d0 + 2;
 iVar2 = iVar2 + *local_d0;
 local_d0 = piVar1;
 if (0x28 < local_d8) goto LAB_00101396;
LAB_00101340:
 uVar3 = (ulong)local_d8;
 local_d8 = local_d8 + 8;
 iVar2 = iVar2 + *(int *)((long)local_b8 + uVar3);
 uVar4 = uVar4 - 2;
 if (uVar4 == 0) goto LAB_001013ab;
 }
 uVar3 = (ulong)local_d8;
 local_d8 = local_d8 + 8;
 iVar2 = iVar2 + *(int *)((long)local_b8 + uVar3);
 if (local_d8 < 0x29) goto LAB_00101340;
LAB_00101396:
 piVar1 = local_d0 + 2;
 iVar2 = iVar2 + *local_d0;
 uVar4 = uVar4 - 2;
 local_d0 = piVar1;
 } while (uVar4 != 0);
 }
LAB_001013ab:
 if ((param_1 & 1) == 0) {
 return iVar2;
 }
 if (0x28 < local_d8) {
 return iVar2 + *local_d0;
 }
 return iVar2 + *(int *)((long)local_b8 + (ulong)local_d8);
}



/* Function: func_no_args @ 00101450 */

undefined8 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00101460 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00101480 */

int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)

{
 int iVar1;
 size_t sVar2;
 
 if (param_3 == (char *)0x0) {
 iVar1 = 0;
 }
 else {
 sVar2 = strlen(param_3);
 iVar1 = (int)sVar2;
 }
 return (int)((double)param_4 + (double)(iVar1 + param_2) + param_1);
}



/* Function: func_struct_byval @ 001014d0 */

int func_struct_byval(void)

{
 int in_stack_00000008;
 int in_stack_00000010;
 int in_stack_00000018;
 int in_stack_00000020;
 int in_stack_00000028;
 int in_stack_00000030;
 int in_stack_00000038;
 int in_stack_00000040;
 int in_stack_00000048;
 int in_stack_00000050;
 int in_stack_00000058;
 int in_stack_00000060;
 int in_stack_00000068;
 int in_stack_00000070;
 int in_stack_00000078;
 int in_stack_00000080;
 
 return in_stack_00000020 + in_stack_00000060 + in_stack_00000040 + in_stack_00000080 +
 in_stack_00000010 + in_stack_00000050 + in_stack_00000030 + in_stack_00000070 +
 in_stack_00000018 + in_stack_00000058 + in_stack_00000038 + in_stack_00000078 +
 in_stack_00000008 + in_stack_00000048 + in_stack_00000028 + in_stack_00000068;
}



/* Function: func_struct_byptr @ 00101520 */

int func_struct_byptr(int *param_1)

{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}



/* Function: test_calling_conventions @ 00101540 */

void test_calling_conventions(void)

{
 uint uVar1;
 
 puts(&DAT_0010238a);
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
 printf(&DAT_001020e0,(ulong)uVar1);
 printf(&DAT_00102108,0x2a);
 printf(&DAT_0010212a,0x24);
 printf(&DAT_00102151,0x75);
 printf(&DAT_00102179,0x88);
 printf(&DAT_001021a5,0x32);
 return;
}



/* Function: param_by_value_int @ 001016b0 */

int param_by_value_int(int param_1)

{
 return param_1 * 2;
}



/* Function: call_by_value_int @ 001016c0 */

undefined8 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 001016d0 */

undefined8 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 001016e0 */

undefined8 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 001016f0 */

undefined8 param_array_decay(void)

{
 return 8;
}



/* Function: call_array_decay @ 00101700 */

undefined8 call_array_decay(void)

{
 return 8;
}



/* Function: param_string @ 00101710 */

int param_string(char *param_1)

{
 return (int)param_1[1] + (int)*param_1;
}



/* Function: call_string_param @ 00101720 */

undefined8 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00101730 */

int param_ptr_array(long param_1,uint param_2)

{
 int iVar1;
 ulong uVar2;
 ulong uVar3;
 
 if (0 < (int)param_2) {
 if ((ulong)param_2 - 1 < 3) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = (int)**(char **)(param_1 + 0x18 + uVar2 * 8) +
 (int)**(char **)(param_1 + 0x10 + uVar2 * 8) +
 (int)**(char **)(param_1 + 8 + uVar2 * 8) + **(char **)(param_1 + uVar2 * 8) + iVar1
 ;
 uVar2 = uVar2 + 4;
 } while ((param_2 & 0xfffffffc) != uVar2);
 }
 if ((ulong)(param_2 & 3) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + **(char **)(param_1 + uVar2 * 8 + uVar3 * 8);
 uVar3 = uVar3 + 1;
 } while ((param_2 & 3) != uVar3);
 }
 return iVar1;
 }
 return 0;
}



/* Function: call_ptr_array @ 001017c0 */

undefined8 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 001017d0 */
/* WARNING: Removing unreachable block (ram,0x00101862) */
/* WARNING: Removing unreachable block (ram,0x00101922) */
/* WARNING: Removing unreachable block (ram,0x00101930) */
/* WARNING: Removing unreachable block (ram,0x00101878) */
/* WARNING: Removing unreachable block (ram,0x00101967) */
/* WARNING: Removing unreachable block (ram,0x0010196b) */
/* WARNING: Removing unreachable block (ram,0x00101970) */

int param_varargs(uint param_1, ...)

{
 int *piVar1;
 int iVar2;
 ulong uVar3;
 uint uVar4;
 uint local_d8;
 int *local_d0;
 int local_b8 [46];
 
 if ((int)param_1 < 1) {
 return 0;
 }
 local_d8 = 8;
 local_d0 = (int *)&stack0x00000008;
 if (param_1 == 1) {
 iVar2 = 0;
 }
 else {
 uVar4 = param_1 & 0xfffffffe;
 iVar2 = 0;
 do {
 while (0x28 < local_d8) {
 piVar1 = local_d0 + 2;
 iVar2 = iVar2 + *local_d0;
 local_d0 = piVar1;
 if (0x28 < local_d8) goto LAB_001018e6;
LAB_00101890:
 uVar3 = (ulong)local_d8;
 local_d8 = local_d8 + 8;
 iVar2 = iVar2 + *(int *)((long)local_b8 + uVar3);
 uVar4 = uVar4 - 2;
 if (uVar4 == 0) goto LAB_001018fb;
 }
 uVar3 = (ulong)local_d8;
 local_d8 = local_d8 + 8;
 iVar2 = iVar2 + *(int *)((long)local_b8 + uVar3);
 if (local_d8 < 0x29) goto LAB_00101890;
LAB_001018e6:
 piVar1 = local_d0 + 2;
 iVar2 = iVar2 + *local_d0;
 uVar4 = uVar4 - 2;
 local_d0 = piVar1;
 } while (uVar4 != 0);
 }
LAB_001018fb:
 if ((param_1 & 1) == 0) {
 return iVar2;
 }
 if (0x28 < local_d8) {
 return iVar2 + *local_d0;
 }
 return iVar2 + *(int *)((long)local_b8 + (ulong)local_d8);
}



/* Function: call_varargs_param @ 001019a0 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: param_func_ptr @ 001019d0 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 001019e0 */

undefined8 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 001019f0 */

undefined8 param_double_ptr(long *param_1,undefined4 param_2)

{
 undefined8 uVar1;
 
 uVar1 = 0xffffffff;
 if ((param_1 != (long *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: call_double_ptr @ 00101a20 */

undefined8 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00101a30 */

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



/* Function: call_complex_cast @ 00101a50 */

undefined8 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 00101a60 */

int param_struct_byval(void)

{
 int in_stack_00000008;
 undefined8 in_stack_00000040;
 
 return (int)(in_stack_00000040 >> 32) + in_stack_00000008;
}



/* Function: call_struct_byval @ 00101a70 */

undefined8 call_struct_byval(void)

{
 return 0xf;
}



/* Function: param_order_dep @ 00101a80 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 00101a90 */

undefined8 call_order_dep(void)

{
 return 3;
}



/* Function: test_parameter_passing @ 00101aa0 */

void test_parameter_passing(void)

{
 uint uVar1;
 
 puts(&DAT_001023ab);
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",8);
 printf("PARAM-L2-02: %d\n",0xad);
 printf("PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 printf("PARAM-L2-04: %d\n",(ulong)uVar1);
 printf("PARAM-L3-01: %d\n",0x14);
 printf("PARAM-L3-02: %d\n",0x15);
 printf("PARAM-L3-03: %d\n",0x12345678);
 printf("PARAM-L3-04: %d\n",0xf);
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 00101ba0 */

int ret_basic_type(int param_1)

{
 return param_1 * 2;
}



/* Function: call_ret_basic @ 00101bb0 */

undefined8 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00101bc0 */

long ret_pointer(long param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00101bd0 */

undefined8 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00101be0 */

ulong ret_small_struct(uint param_1,long param_2)

{
 return (ulong)param_1 | param_2 << 0x20;
}



/* Function: call_ret_small_struct @ 00101bf0 */

undefined8 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00101c00 */

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
 param_1[0xe] = param_2 + 0xe;
 param_1[0xf] = param_2 + 0xf;
 return param_1;
}



/* Function: call_ret_large_struct @ 00101c50 */

undefined8 call_ret_large_struct(void)

{
 return 0xd7;
}



/* Function: func_a @ 00101c60 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00101c70 */

int func_b(int param_1)

{
 return param_1 * 2;
}



/* Function: ret_func_ptr @ 00101c80 */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101ca0 */

undefined8 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00101cb0 */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = &ret_opaque_handle_handle2;
 if (param_1 == 0) {
 puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101cd0 */

undefined8 call_ret_opaque(void)

{
 return ret_opaque_handle_handle1;
}



/* Function: ret_complex_expr @ 00101ce0 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101cf0 */

undefined8 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00101d00 */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101d20 */

undefined8 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00101d30 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00101d40 */

undefined8 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00101d50 */

void test_return_values(void)

{
 undefined8 in_RAX;
 undefined8 extraout_RDX;
 
 puts(&DAT_001023cc);
 printf("%s", &DAT_0010228d);
 printf("%s", &DAT_001022a9);
 printf("%s", &DAT_001022c5);
 printf("%s", &DAT_001022e0);
 printf("%s", &DAT_001022fd);
 printf("%s", &DAT_00102319);
 printf("%s", &DAT_00102336);
 printf("%s", &DAT_00102352);
 printf("%s", &DAT_0010236e);
 return;
}



/* Function: main @ 00101e10 */

undefined8 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 puts(&DAT_001023cc);
 printf("%s", &DAT_0010228d);
 printf("%s", &DAT_001022a9);
 printf("%s", &DAT_001022c5);
 printf("%s", &DAT_001022e0);
 printf("%s", &DAT_001022fd);
 printf("%s", &DAT_00102319);
 printf("%s", &DAT_00102336);
 printf("%s", &DAT_00102352);
 printf("%s", &DAT_0010236e);
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 77 */
