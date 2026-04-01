/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef unsigned long uintmax_t;


/* Additional types from Ghidra decompilation */
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined;
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef int (*code)(int);

/* CONCAT44 macro for combining two 32-bit values into a 64-bit value */
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))

/* Standard library declarations */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Global variables for CRT */
extern void *__dso_handle;
void __cxa_finalize(void *);

/* Global variables for decompiled functions */
char completed_0 = 0;
undefined8 ret_opaque_handle_handle1 = 0;
undefined8 ret_opaque_handle_handle2 = 0;

/* Varargs support - registers and stack */
unsigned long register0x00000008;
unsigned long stack0xffffffffffffffe0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/4/4_clang_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* String data from binary */
const char DAT_0010157a[] = "Testing calling conventions:\n";
const char DAT_001012d0[] = "VARARGS: %d\n";
const char DAT_001012f8[] = "NOARGS: %d\n";
const char DAT_0010131a[] = "MANYARGS: %d\n";
const char DAT_00101341[] = "STRUCT: %d\n";
const char DAT_00101369[] = "MEMCPY: %d\n";
const char DAT_00101395[] = "DOUBLE: %d\n";
const char DAT_0010159b[] = "Testing parameter passing:\n";
const char DAT_001015bc[] = "Testing return values:\n";
const char DAT_0010147d[] = "RET-BASIC: %d\n";
const char DAT_00101499[] = "RET-POINTER: %d\n";
const char DAT_001014b5[] = "RET-SMALL: %d\n";
const char DAT_001014d0[] = "RET-LARGE: %d\n";
const char DAT_001014ed[] = "RET-FUNC: %d\n";
const char DAT_00101509[] = "RET-OPAQUE: %lu\n";
const char DAT_00101526[] = "RET-EXPR: %d\n";
const char DAT_00101542[] = "RET-BRANCH: %d\n";
const char DAT_0010155e[] = "RET-VOID: %d\n";

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100680 @ 00100680 */

void FUN_00100680(void)

{
 (*(code *)(undefined *)0x0)(0);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones */
void deregister_tm_clones(void) { }





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001007fc @ 001007fc */

void FUN_001007fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 00100854 */

int cdecl_func(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_cdecl @ 0010085c */

undefined8 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00100864 */

int stdcall_func(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: call_stdcall @ 0010086c */

undefined8 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00100874 */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_2 + param_1 + param_3;
}



/* Function: call_fastcall @ 00100880 */

undefined8 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00100888 */

undefined8 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00100890 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 001008a4 */

undefined8 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 001008ac */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_mips @ 001008bc */

undefined8 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 001008c4 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 001008dc */

undefined8 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 001008e4 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 001008f8 */

undefined8 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00100900 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00100910 */

undefined8 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00100918 */

undefined8 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 00100920 */

#include <stdarg.h>

int varargs_func(int param_1, ...)

{
 uint uVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 uint local_8;
 va_list args;
 
 iVar2 = 0;
 va_start(args, param_1);
 if (0 < param_1) {
 local_8 = 0xffffffc8;
 piVar4 = (int *)register0x00000008;
 do {
 uVar1 = local_8;
 if (((int)local_8 < 0) && (uVar1 = local_8 + 8, local_8 < 0xfffffff9)) {
 piVar3 = (int *)(&stack0xffffffffffffffe0 + (int)local_8);
 local_8 = local_8 + 8;
 }
 else {
 piVar3 = piVar4;
 local_8 = uVar1;
 piVar4 = piVar4 + 2;
 }
 param_1 = param_1 + -1;
 iVar2 = *piVar3 + iVar2;
 } while (param_1 != 0);
 }
 va_end(args);
 return iVar2;
}



/* Function: func_no_args @ 001009cc */

undefined8 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 001009d4 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 001009f4 */

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
 return (int)((double)(iVar1 + param_2) + param_1 + (double)param_4);
}



/* Function: func_struct_byval @ 00100a4c */

long func_struct_byval(long param_1)

{
 long *plVar1;
 long lVar2;
 long lVar3;
 long lVar4;
 
 lVar3 = 0;
 lVar4 = 0;
 lVar2 = 0;
 do {
 plVar1 = (long *)(param_1 + lVar2);
 lVar2 = lVar2 + 0x10;
 lVar3 = *plVar1 + lVar3;
 lVar4 = plVar1[1] + lVar4;
 } while (lVar2 != 0x80);
 return lVar3 + lVar4;
}



/* Function: func_struct_byptr @ 00100a74 */

int func_struct_byptr(int *param_1)

{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}



/* Function: test_calling_conventions @ 00100a8c */

int test_calling_conventions(void)

{
 long *plVar1;
 int iVar2;
 ulong uVar3;
 long lVar4;
 long lVar5;
 long lVar6;
 long lVar7;
 long lVar8;
 long local_130 [32];
 
 puts(DAT_0010157a);
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
 uVar3 = varargs_func(5,1,2,3,4,5);
 printf(DAT_001012d0,uVar3 & 0xffffffff);
 printf(DAT_001012f8,0x2a);
 printf(DAT_0010131a,0x24);
 printf(DAT_00101341,0x75);
 lVar4 = 0;
 lVar6 = 1;
 lVar5 = 0;
 do {
 lVar7 = lVar5 + 1;
 lVar8 = lVar6 + 1;
 lVar5 = lVar5 + 2;
 lVar6 = lVar6 + 2;
 *(long *)((long)local_130 + lVar4 + 0x88) = lVar8;
 *(long *)((long)local_130 + lVar4 + 0x80) = lVar7;
 lVar4 = lVar4 + 0x10;
 } while (lVar4 != 0x80);
 memcpy(local_130,local_130 + 0x10,0x80);
 lVar5 = 0;
 lVar6 = 0;
 lVar4 = 0;
 do {
 plVar1 = (long *)((long)local_130 + lVar4);
 lVar7 = lVar4 + 8;
 lVar4 = lVar4 + 0x10;
 lVar5 = *plVar1 + lVar5;
 lVar6 = *(long *)((long)local_130 + lVar7) + lVar6;
 } while (lVar4 != 0x80);
 printf(DAT_00101369,lVar5 + lVar6);
 iVar2 = printf(DAT_00101395,0x32);
 return iVar2;
}



/* Function: param_by_value_int @ 00100c44 */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 00100c4c */

undefined8 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 00100c54 */

undefined8 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00100c6c */

undefined8 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 00100c74 */

undefined8 param_array_decay(void)

{
 return 8;
}



/* Function: call_array_decay @ 00100c7c */

undefined8 call_array_decay(void)

{
 return 8;
}



/* Function: param_string @ 00100c84 */

int param_string(byte *param_1)

{
 return (uint)param_1[1] + (uint)*param_1;
}



/* Function: call_string_param @ 00100c94 */

undefined8 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00100c9c */

int param_ptr_array(undefined8 *param_1,uint param_2)

{
 int iVar1;
 ulong uVar2;
 
 if (0 < (int)param_2) {
 iVar1 = 0;
 uVar2 = (ulong)param_2;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = iVar1 + (uint)*(byte *)*param_1;
 param_1 = param_1 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: call_ptr_array @ 00100cd0 */

undefined8 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 00100cd8 */

#include <stdarg.h>

int param_varargs(int param_1, ...)

{
 uint uVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 uint local_8;
 
 iVar2 = 0;
 if (0 < param_1) {
 local_8 = 0xffffffc8;
 piVar4 = (int *)register0x00000008;
 do {
 uVar1 = local_8;
 if (((int)local_8 < 0) && (uVar1 = local_8 + 8, local_8 < 0xfffffff9)) {
 piVar3 = (int *)(&stack0xffffffffffffffe0 + (int)local_8);
 local_8 = local_8 + 8;
 }
 else {
 piVar3 = piVar4;
 local_8 = uVar1;
 piVar4 = piVar4 + 2;
 }
 param_1 = param_1 + -1;
 iVar2 = *piVar3 + iVar2;
 } while (param_1 != 0);
 }
 return iVar2;
}



/* Function: call_varargs_param @ 00100d84 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}



/* Function: param_func_ptr @ 00100d9c */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00100dbc */

undefined8 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00100dc4 */

undefined8 param_double_ptr(undefined8 *param_1,undefined8 param_2)

{
 if ((param_1 != (undefined8 *)0x0) && (*(undefined8 **)param_1 != (undefined8 *)0x0)) {
 **(undefined8 **)param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}



/* Function: call_double_ptr @ 00100dec */

undefined8 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00100df4 */

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



/* Function: call_complex_cast @ 00100e1c */

undefined8 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 00100e28 */

int param_struct_byval(int *param_1)

{
 return param_1[0xf] + *param_1;
}



/* Function: call_struct_byval @ 00100e38 */

undefined4 call_struct_byval(void)

{
 return 0xf;
}



/* Function: param_order_dep @ 00100e64 */

int param_order_dep(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: call_order_dep @ 00100e6c */

undefined8 call_order_dep(void)

{
 return 3;
}



/* Function: test_parameter_passing @ 00100e74 */

int test_parameter_passing(void)

{
 int iVar1;
 ulong uVar2;
 
 puts(DAT_0010159b);
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",8);
 printf("PARAM-L2-02: %d\n",0xad);
 printf("PARAM-L2-03: %d\n",300);
 uVar2 = param_varargs(4,10,0x14,0x1e,0x28);
 printf("PARAM-L2-04: %d\n",uVar2 & 0xffffffff);
 printf("PARAM-L3-01: %d\n",0x14);
 printf("PARAM-L3-02: %d\n",0x15);
 printf("PARAM-L3-03: %d\n",0x12345678);
 printf("PARAM-L3-04: %d\n",0xf);
 iVar1 = printf("PARAM-L3-05: %d\n",3);
 return iVar1;
}



/* Function: ret_basic_type @ 00100f80 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00100f88 */

undefined8 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00100f90 */

long ret_pointer(long param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00100f98 */

undefined8 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00100fa0 */

ulong ret_small_struct(ulong param_1,long param_2)

{
 return param_1 & 0xffffffff | param_2 << 0x20;
}



/* Function: call_ret_small_struct @ 00100fac */

undefined8 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00100fb4 */

void ret_large_struct(long param_1,int param_2)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 
 lVar1 = 0;
 iVar4 = 2;
 iVar5 = 3;
 iVar2 = 0;
 iVar3 = 1;
 do {
 iVar6 = iVar2 + param_2;
 iVar7 = iVar3 + param_2;
 iVar8 = iVar4 + param_2;
 iVar9 = iVar5 + param_2;
 iVar2 = iVar2 + 4;
 iVar3 = iVar3 + 4;
 iVar4 = iVar4 + 4;
 iVar5 = iVar5 + 4;
 ((undefined8 *)(param_1 + lVar1))[1] = CONCAT44(iVar9,iVar8);
 *(undefined8 *)(param_1 + lVar1) = CONCAT44(iVar7,iVar6);
 lVar1 = lVar1 + 0x10;
 } while (lVar1 != 0x40);
 return;
}



/* Function: call_ret_large_struct @ 00100fe4 */

undefined4 call_ret_large_struct(void)

{
 return 0xd7;
}



/* Function: func_a @ 00101010 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00101018 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: ret_func_ptr @ 00101020 */

code ret_func_ptr(int param_1)

{
 code pcVar1;
 
 pcVar1 = func_a;
 if (param_1 != 0) {
 pcVar1 = func_b;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 0010103c */

undefined8 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00101044 */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
 if (param_1 != 0) {
 puVar1 = &ret_opaque_handle_handle2;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101060 */

undefined4 call_ret_opaque(void)

{
 return ret_opaque_handle_handle1;
}



/* Function: ret_complex_expr @ 0010106c */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 << 1;
 if (param_1 <= param_2) {
 iVar1 = param_3 + 10;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101080 */

undefined8 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00101088 */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 10 + 10;
 if (2 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 001010a0 */

undefined8 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 001010a8 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 001010b4 */

undefined8 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 001010bc */

int test_return_values(void)

{
 int iVar1;
 
 puts(DAT_001015bc);
 printf(DAT_0010147d,0x2a);
 printf(DAT_00101499,0x14);
 printf(DAT_001014b5,7);
 printf(DAT_001014d0,0xd7);
 printf(DAT_001014ed,10);
 printf(DAT_00101509,(ulong)ret_opaque_handle_handle1);
 printf(DAT_00101526,0x28);
 printf(DAT_00101542,0x3c);
 iVar1 = printf(DAT_0010155e,0x15);
 return iVar1;
}



/* Function: main @ 00101190 */

undefined8 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 79 */
