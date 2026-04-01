#include <stdio.h>
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
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra decompiler types */
typedef unsigned char undefined;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char byte;
typedef int (*code)(int);
typedef unsigned long ulong;
typedef unsigned int uint;

/* Global variables */
extern long __stack_chk_guard;
extern void __stack_chk_fail(void);

/* Forward declarations */
void test_calling_conventions(void);
void test_parameter_passing(void);
void test_return_values(void);
void __cxa_finalize(undefined8);
static void deregister_tm_clones(void);

/* Define missing global variables */
static undefined8 handle1_1 = 0;
static undefined8 handle2_0 = 0;
static int completed_0 = 0;
static undefined8 __dso_handle = 0;
static char DAT_0010145c[] = "Calling Conventions Test";
static char DAT_0010151d[] = "CALL-L1-12: %d\n";
static char DAT_00101545[] = "CALL-L1-13: %d\n";
static char DAT_00101567[] = "CALL-L1-14: %d\n";
static char DAT_001015bb[] = "CALL-L1-11: %ld\n";
static char DAT_0010158e[] = "test_string";
static char DAT_00101593[] = "PARAM-L2-04: %d\n";
static char DAT_001015e7[] = "CALL-L1-11: %d\n";
static char DAT_00101614[] = "Parameter Passing Test";
static char DAT_001016f0[] = "Return Values Test";
static char DAT_0010170e[] = "RET-L3-01: %d\n";
static char DAT_0010172a[] = "RET-L3-02: %d\n";
static char DAT_00101746[] = "RET-L3-03: %d\n";
static char DAT_00101761[] = "RET-L3-04: %d\n";
static char DAT_0010177e[] = "RET-L3-05: %d\n";
static char DAT_0010179a[] = "RET-L3-06: %d\n";
static char DAT_001017b7[] = "RET-L3-07: %d\n";
static char DAT_001017d3[] = "RET-L3-09: %d\n";
static char DAT_001017ef[] = "RET-L3-08: %d\n";
static undefined *PTR_DAT_00113010 = (undefined *)"test1";
static undefined *PTR_DAT_00113018 = (undefined *)"test2";
static undefined *PTR_DAT_00113020 = (undefined *)"test3";
static long ___stack_chk_guard = 0;

/* Define CRT stub function */
static void deregister_tm_clones(void)
{
 return;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/4/4_gcc_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100750 @ 00100750 */

void FUN_00100750(void)

{
 (*(code *)(undefined *)0x0)(0);
 return;
}



/* Function: main @ 00100800 */

undefined8 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001008fc @ 001008fc */

void FUN_001008fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: func_a @ 00100954 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 0010095c */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: callback_func @ 00100964 */

int callback_func(int param_1)

{
 return param_1 << 1;
}



/* Function: cdecl_func @ 0010096c */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 00100974 */

undefined8 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 0010097c */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 00100984 */

undefined8 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 0010098c */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 00100998 */

undefined8 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 001009a0 */

undefined8 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 001009a8 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 001009bc */

undefined8 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 001009c4 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 001009d4 */

undefined8 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 001009dc */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 001009f4 */

undefined8 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 001009fc */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00100a10 */

undefined8 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00100a18 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00100a28 */

undefined8 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00100a30 */

undefined8 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 00100a38 */

/* WARNING: Removing unreachable block (ram,0x00100ab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int varargs_func(int param_1, ...)

{
 int iVar1;
 int iVar2;
 
 iVar1 = -0x38;
 for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
 if (iVar1 < 0) {
 iVar1 = iVar1 + 8;
 }
 }
 return iVar1;
}



/* Function: func_no_args @ 00100b0c */

undefined8 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00100b14 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00100b34 */

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



/* Function: func_struct_byval @ 00100b8c */

long func_struct_byval(long param_1)

{
 long lVar1;
 long lVar2;
 long lVar3;
 
 lVar3 = 0;
 lVar2 = 0;
 do {
 lVar1 = lVar3 * 8;
 lVar3 = lVar3 + 1;
 lVar2 = lVar2 + *(long *)(param_1 + lVar1);
 } while (lVar3 != 0x10);
 return lVar2;
}



/* Function: func_struct_byptr @ 00100bb0 */

int func_struct_byptr(int *param_1)

{
 int iVar1;
 
 if (param_1 == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = *param_1 * param_1[1];
 }
 return iVar1;
}



/* Function: test_calling_conventions @ 00100bc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_calling_conventions(void)

{
 long *plVar1;
 undefined4 uVar2;
 long lVar3;
 long lVar4;
 long local_108 [16];
 long local_88 [16];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_0010145c);
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
 uVar2 = varargs_func(5,1,2,3,4);
 __printf_chk(1,DAT_0010151d,uVar2);
 __printf_chk(1,DAT_00101545,0x2a);
 __printf_chk(1,DAT_00101567,0x24);
 uVar2 = func_mixed_args(0x40091eb851eb851f,10,DAT_0010158e,100);
 __printf_chk(1,DAT_00101593,uVar2);
 lVar3 = 0;
 do {
 lVar4 = lVar3 + 1;
 local_108[lVar3] = lVar4;
 lVar3 = lVar4;
 } while (lVar4 != 0x10);
 lVar4 = 0;
 local_88[1] = local_108[1];
 local_88[0] = local_108[0];
 local_88[3] = local_108[3];
 local_88[2] = local_108[2];
 local_88[5] = local_108[5];
 local_88[4] = local_108[4];
 local_88[7] = local_108[7];
 local_88[6] = local_108[6];
 local_88[9] = local_108[9];
 local_88[8] = local_108[8];
 local_88[0xb] = local_108[0xb];
 local_88[10] = local_108[10];
 lVar3 = 0;
 local_88[0xd] = local_108[0xd];
 local_88[0xc] = local_108[0xc];
 local_88[0xf] = local_108[0xf];
 local_88[0xe] = local_108[0xe];
 do {
 plVar1 = local_88 + lVar3;
 lVar3 = lVar3 + 1;
 lVar4 = lVar4 + *plVar1;
 } while (lVar3 != 0x10);
 __printf_chk(1,DAT_001015bb,lVar4);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,DAT_001015e7,0x32);
 return;
}



/* Function: param_by_value_int @ 00100de4 */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 00100dec */

undefined8 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 00100df4 */

undefined8 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00100e08 */

undefined8 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 00100e10 */

undefined8 param_array_decay(void)

{
 return 8;
}



/* Function: call_array_decay @ 00100e18 */

undefined8 call_array_decay(void)

{
 return 8;
}



/* Function: param_string @ 00100e20 */

int param_string(byte *param_1)

{
 return (uint)*param_1 + (uint)param_1[1];
}



/* Function: call_string_param @ 00100e30 */

undefined8 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00100e38 */

int param_ptr_array(long param_1,int param_2)

{
 int iVar1;
 long lVar2;
 
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + (uint)**(byte **)(param_1 + lVar2 * 8);
 }
 return iVar1;
}



/* Function: call_ptr_array @ 00100e64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 call_ptr_array(void)

{
 undefined8 uVar1;
 undefined *local_20;
 undefined *puStack_18;
 undefined *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20 = PTR_DAT_00113010;
 puStack_18 = PTR_DAT_00113018;
 local_10 = PTR_DAT_00113020;
 uVar1 = param_ptr_array((long)&local_20,3);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar1;
}



/* Function: param_varargs @ 00100ecc */

/* WARNING: Removing unreachable block (ram,0x00100f48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_varargs(int param_1, ...)

{
 int iVar1;
 int iVar2;
 
 iVar1 = -0x38;
 for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
 if (iVar1 < 0) {
 iVar1 = iVar1 + 8;
 }
 }
 return iVar1;
}



/* Function: call_varargs_param @ 00100fa0 */

undefined8 call_varargs_param(void)

{
 return param_varargs(4,10,0x14,0x1e,0x28);
}



/* Function: param_func_ptr @ 00100fb8 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00100fd8 */

undefined8 call_func_ptr_param(void)

{
 return param_func_ptr((code *)callback_func,5);
}



/* Function: param_double_ptr @ 00100fe8 */

undefined8 param_double_ptr(undefined8 *param_1,undefined4 param_2)

{
 undefined8 uVar1;
 
 if ((param_1 == (undefined8 *)0x0) || ((undefined4 *)*param_1 == (undefined4 *)0x0)) {
 uVar1 = 0xffffffff;
 }
 else {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: call_double_ptr @ 0010100c */

undefined8 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00101014 */

int param_complex_cast(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 0) {
 iVar1 = *param_1;
 }
 else if (param_2 == 1) {
 iVar1 = *param_1 + param_1[1];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_complex_cast @ 0010103c */

undefined8 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 00101048 */

int param_struct_byval(int *param_1)

{
 return *param_1 + param_1[0xf];
}



/* Function: call_struct_byval @ 00101058 */

/* WARNING: Removing unreachable block (ram,0x001010b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 call_struct_byval(void)

{
 long lVar1;
 undefined4 local_48 [18];
 
 lVar1 = 0;
 do {
 local_48[lVar1] = (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 return param_struct_byval(local_48);
}



/* Function: param_order_dep @ 001010c0 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 001010c8 */

undefined8 call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 001010d0 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 
 puts(DAT_00101614);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",8);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 uVar1 = call_ptr_array();
 __printf_chk(1,"PARAM-L2-03: %d\n",uVar1);
 uVar1 = call_varargs_param();
 __printf_chk(1,"PARAM-L2-04: %d\n",uVar1);
 uVar1 = call_func_ptr_param();
 __printf_chk(1,"PARAM-L3-01: %d\n",uVar1);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 uVar1 = call_struct_byval();
 __printf_chk(1,"PARAM-L3-04: %d\n",uVar1);
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
}



/* Function: ret_basic_type @ 001011d8 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 001011e0 */

undefined8 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 001011e8 */

long ret_pointer(long param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 001011f0 */

undefined8 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 001011f8 */

ulong ret_small_struct(ulong param_1,long param_2)

{
 return param_1 & 0xffffffff | param_2 << 0x20;
}



/* Function: call_ret_small_struct @ 00101204 */

undefined8 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 0010120c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ret_large_struct(undefined8 *param_1,int param_2)

{
 long lVar1;
 long lVar2;
 undefined8 local_48;
 undefined8 uStack_40;
 undefined8 uStack_38;
 undefined8 uStack_30;
 undefined8 local_28;
 undefined8 uStack_20;
 undefined8 uStack_18;
 undefined8 uStack_10;
 long local_8;
 
 lVar1 = ___stack_chk_guard;
 local_8 = ___stack_chk_guard;
 lVar2 = 0;
 do {
 *(int *)((long)&local_48 + lVar2 * 4) = param_2 + (int)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 param_1[1] = uStack_40;
 *param_1 = local_48;
 param_1[3] = uStack_30;
 param_1[2] = uStack_38;
 param_1[5] = uStack_20;
 param_1[4] = local_28;
 param_1[7] = uStack_10;
 param_1[6] = uStack_18;
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: call_ret_large_struct @ 00101278 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 call_ret_large_struct(void)

{
 int local_48 [15];
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 ret_large_struct((undefined8 *)local_48,100);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_48[0] + local_c;
}



/* Function: ret_func_ptr @ 001012d4 */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = (code *)func_b;
 if (param_1 == 0) {
 pcVar1 = (code *)func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 001012f0 */

undefined8 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 001012f8 */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101314 */

undefined4 call_ret_opaque(void)

{
 return handle1_1;
}



/* Function: ret_complex_expr @ 00101320 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 << 1;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101334 */

undefined8 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 0010133c */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 10 + 10;
 if (2 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101350 */

undefined8 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00101358 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00101364 */

undefined8 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 0010136c */

void test_return_values(void)

{
 undefined4 uVar1;
 
 puts(DAT_001016f0);
 __printf_chk(1,DAT_0010170e,0x2a);
 __printf_chk(1,DAT_0010172a,0x14);
 __printf_chk(1,DAT_00101746,7);
 uVar1 = call_ret_large_struct();
 __printf_chk(1,DAT_00101761,uVar1);
 __printf_chk(1,DAT_0010177e,10);
 __printf_chk(1,DAT_0010179a,handle1_1);
 __printf_chk(1,DAT_001017b7,0x28);
 __printf_chk(1,DAT_001017d3,0x3c);
 __printf_chk(1,DAT_001017ef,0x15);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 80 */
