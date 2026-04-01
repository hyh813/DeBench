/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/2/2_gcc_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* CRT stub function _init removed by preprocessor */

/* Stack guard for stack protection */
unsigned long __stack_chk_guard = 0;
unsigned long ___stack_chk_guard = 0;

/* Function pointer type */
typedef void (*code)();

/* Common type definitions */
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef void undefined;

/* External CRT function declarations */
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);
extern void __stack_chk_fail(void);

/* ARM64 floating point status register */
register unsigned long fpsr asm("fpsr");
register unsigned long fpcr asm("fpcr");

/* Forward function declarations */
int process_double(double param_1);

/* Long double representation for soft float */
typedef struct { unsigned long _0_8_; unsigned long _8_8_; unsigned int _12_4_; unsigned int _16_4_; } long_double_rep;

/* Floating point helper function declarations */
extern long_double_rep __multf3(long_double_rep a, long_double_rep b);
extern long_double_rep __addtf3(long_double_rep a, long_double_rep b);

/* Builtin functions for floating point operations */
#define CARRY8(x, y) (((x) + (y) < (x)) || ((x) + (y) < (y)))
#define LZCOUNT(x) __builtin_clzll(x)

/* Soft float exception handler declaration */
extern unsigned long __sfp_handle_exceptions(unsigned long param_1);

/* Global variables */
char completed_0 = 0;
void *__dso_handle = 0;

/* String data from binary */
extern const char DAT_00103660[];
extern const char DAT_001037f0[];
extern const char DAT_00103948[];
extern const char DAT_00103950[];
extern const char DAT_00103b58[];




/* Function: FUN_001006d0 @ 001006d0 */

void FUN_001006d0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010083c @ 0010083c */

void FUN_0010083c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 00100894 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: process_char @ 001008ac */

unsigned char process_char(unsigned char param_1)

{
 if ((0x40 < param_1) && (param_1 < 0x5b)) {
 param_1 = param_1 + 0x20;
 }
 return param_1;
}



/* Function: process_short @ 001008e8 */

int process_short(short param_1,short param_2)

{
 return (int)(short)(param_1 + param_2);
}



/* Function: process_int @ 00100910 */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: process_long @ 0010092c */

long process_long(long param_1)

{
 return param_1 << 1;
}



/* Function: process_ll @ 00100944 */

long process_ll(long param_1)

{
 return param_1 * param_1;
}



/* Function: process_float @ 0010095c */

float process_float(float param_1)

{
 return param_1 * 1.5 + 0.5;
}



/* Function: process_double @ 00100980 */

long double process_double(double param_1)

{
 return param_1 / 2.0 + 0.1;
}



/* Function: process_ld @ 001009a8 */

long_double_rep process_ld(long param_1)

{
 long_double_rep uVar1;
 long_double_rep zero = {0, 0, 0, 0};
 
 uVar1 = __multf3((long_double_rep)param_1,(long_double_rep)param_1);
 uVar1 = __addtf3(uVar1, zero);
 return uVar1;
}



/* Function: process_bool @ 001009d8 */

int process_bool(unsigned int param_1)

{
 int uVar1;
 
 if (((int)param_1 < 1) || ((param_1 & 1) != 0)) {
 uVar1 = 0;
 }
 else {
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: const_param @ 00100a18 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 00100a34 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 00100a68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_data_types_l1(void)

{
 short sVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned long uVar4;
 long uVar5;
 float fVar6;
 int local_10;
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts((const char*)DAT_00103660);
 uVar2 = process_char(0x41);
 printf("DT-L1-01 (process_char): %c\n",(unsigned long)(uVar2 & 0xff));
 uVar2 = process_char(0x62);
 printf("DT-L1-01 (process_char): %c\n",(unsigned long)(uVar2 & 0xff));
 sVar1 = process_short(100,200);
 printf("DT-L1-02 (process_short): %d\n",(unsigned long)(unsigned int)(int)sVar1);
 uVar4 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n",uVar4 & 0xffffffff);
 uVar5 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n",uVar5);
 uVar5 = process_ll(100);
 iVar3 = printf("DT-L1-05 (process_ll): %lld\n",uVar5);
 fVar6 = (float)process_float(0x40000000,iVar3);
 iVar3 = printf("DT-L1-06 (process_float): %.2f\n",(double)fVar6);
 process_double(0x4010000000000000);
 printf("DT-L1-07 (process_double): %.2f\n");
 process_ld(0);
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 uVar2 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n",(unsigned long)(uVar2 & 0xff));
 uVar2 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n",(unsigned long)(uVar2 & 0xff));
 uVar2 = process_bool(0xfffffffe);
 printf("DT-L1-09 (process_bool): %d\n",(unsigned long)(uVar2 & 0xff));
 local_10 = 5;
 uVar4 = const_param(&local_10);
 printf("DT-L1-10 (const_param): %d\n",uVar4 & 0xffffffff);
 local_c = 10;
 uVar4 = volatile_access(&local_c);
 printf("DT-L1-11 (volatile_access): %d\n",uVar4 & 0xffffffff);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: array_1d_stack @ 00100c38 */

int array_1d_stack(long param_1,int param_2)

{
 int local_8;
 int local_4;
 
 local_8 = 0;
 for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
 local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 4);
 }
 return local_8;
}



/* Function: array_string @ 00100c98 */

int array_string(long param_1)

{
 int local_4;
 
 for (local_4 = 0; *(char *)(param_1 + local_4) != '\0'; local_4 = local_4 + 1) {
 }
 return local_4;
}



/* Function: array_2d_stack @ 00100cd8 */

int array_2d_stack(long param_1)

{
 int local_8;
 int local_4;
 
 local_8 = 0;
 for (local_4 = 0; local_4 < 10; local_4 = local_4 + 1) {
 local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 0x28 + (long)local_4 * 4);
 }
 return local_8;
}



/* Function: array_3d @ 00100d44 */

int array_3d(long param_1)

{
 int local_10;
 int local_c;
 int local_8;
 int local_4;
 
 local_10 = 0;
 for (local_c = 0; local_c < 5; local_c = local_c + 1) {
 for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
 for (local_4 = 0; local_4 < 5; local_4 = local_4 + 1) {
 local_10 = local_10 +
 *(int *)(param_1 + (long)local_c * 100 + ((long)local_8 * 5 + (long)local_4) * 4)
 ;
 }
 }
 }
 return local_10;
}



/* Function: array_vla @ 00100e0c */

int array_vla(int param_1,long param_2)

{
 int local_8;
 int local_4;
 
 local_8 = 0;
 for (local_4 = 0; local_4 < param_1; local_4 = local_4 + 1) {
 local_8 = local_8 + *(int *)(param_2 + (long)local_4 * 4);
 }
 return local_8;
}



/* Function: array_pointer @ 00100e6c */

int array_pointer(long param_1,int param_2)

{
 int local_8;
 int local_4;
 
 local_8 = 0;
 for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
 local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 0x28);
 }
 return local_8;
}



/* Function: pointer_array @ 00100edc */

int pointer_array(long param_1,int param_2)

{
 int local_c;
 int local_8;
 
 local_c = 0;
 if (10 < param_2) {
 param_2 = 10;
 }
 for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
 if (*(long *)(param_1 + (long)local_8 * 8) != 0) {
 local_c = local_c + **(int **)(param_1 + (long)local_8 * 8);
 }
 }
 return local_c;
}



/* Function: array_complex_index @ 00100f74 */

int array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)

{
 int uVar1;
 
 if ((((param_4 < 0) || (param_2 <= param_4)) || (param_5 < 0)) || (param_3 <= param_5)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(int *)(param_1 + (long)(param_5 * param_2 + param_4) * 4);
 }
 return uVar1;
}



/* Function: array_oob @ 00100ffc */

int array_oob(long param_1,int param_2)

{
 int local_8;
 int local_4;
 
 local_8 = 0;
 for (local_4 = 0; local_4 <= param_2; local_4 = local_4 + 1) {
 local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 4);
 }
 return local_8;
}



/* Function: test_array_types @ 0010105c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_array_types(void)

{
 unsigned long uVar1;
 int iVar2;
 int local_550;
 int local_54c;
 int local_548;
 int local_544;
 int local_540;
 int local_53c;
 int local_538;
 int local_534;
 int local_530;
 int local_52c;
 long local_528;
 int local_520;
 long local_518;
 long uStack_510;
 int local_508;
 int *local_500;
 int *puStack_4f8;
 int *local_4f0;
 long uStack_4e8;
 long local_4e0;
 long uStack_4d8;
 long uStack_4d0;
 long uStack_4c8;
 long local_4c0;
 long uStack_4b8;
 int aiStack_4b0 [20];
 int aiStack_460 [50];
 int aiStack_398 [100];
 int auStack_208 [126];
 char local_10 [8];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts((const char*)&DAT_001037f0);
 local_518 = 0x200000001;
 uStack_510 = 0x400000003;
 local_508 = 5;
 uVar1 = array_1d_stack(&local_518,5);
 printf("ARR-L1-01 (array_1d_stack): %d\n",uVar1 & 0xffffffff);
 strncpy(local_10,"hello",6);
 uVar1 = array_string(local_10);
 printf("ARR-L1-02 (array_string): %d\n",uVar1 & 0xffffffff);
 for (local_544 = 0; local_544 < 10; local_544 = local_544 + 1) {
 for (local_540 = 0; local_540 < 10; local_540 = local_540 + 1) {
 iVar2 = local_544;
 if (local_544 != local_540) {
 iVar2 = 0;
 }
 aiStack_398[(long)local_544 * 10 + (long)local_540] = iVar2;
 }
 }
 uVar1 = array_2d_stack(aiStack_398);
 printf("ARR-L1-03 (array_2d_stack): %d\n",uVar1 & 0xffffffff);
 for (local_53c = 0; local_53c < 5; local_53c = local_53c + 1) {
 for (local_538 = 0; local_538 < 5; local_538 = local_538 + 1) {
 for (local_534 = 0; local_534 < 5; local_534 = local_534 + 1) {
 auStack_208[(long)local_53c * 0x19 + (long)local_538 * 5 + (long)local_534] = 1;
 }
 }
 }
 uVar1 = array_3d(auStack_208);
 printf("ARR-L1-04 (array_3d): %d\n",uVar1 & 0xffffffff);
 local_528 = 0x140000000a;
 local_520 = 0x1e;
 uVar1 = array_vla(3,&local_528);
 printf("ARR-L2-01 (array_vla): %d\n",uVar1 & 0xffffffff);
 for (local_530 = 0; local_530 < 5; local_530 = local_530 + 1) {
 aiStack_460[(long)local_530 * 10] = local_530 * 10;
 }
 uVar1 = array_pointer(aiStack_460,5);
 printf("ARR-L2-02 (array_pointer): %d\n",uVar1 & 0xffffffff);
 local_550 = 10;
 local_54c = 0x14;
 local_548 = 0x1e;
 uStack_4e8 = 0;
 uStack_4d8 = 0;
 local_4e0 = 0;
 uStack_4c8 = 0;
 uStack_4d0 = 0;
 uStack_4b8 = 0;
 local_4c0 = 0;
 local_500 = &local_550;
 puStack_4f8 = &local_54c;
 local_4f0 = &local_548;
 uVar1 = pointer_array(&local_500,3);
 printf("ARR-L2-03 (pointer_array): %d\n",uVar1 & 0xffffffff);
 for (local_52c = 0; local_52c < 0x14; local_52c = local_52c + 1) {
 aiStack_4b0[local_52c] = local_52c;
 }
 uVar1 = array_complex_index(aiStack_4b0,5,4,2,3);
 printf("ARR-L2-04 (array_complex_index): %d\n",uVar1 & 0xffffffff);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: ptr_single @ 001013e8 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00101404 */

int ptr_double(long *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00101424 */

int ptr_triple(long *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00101448 */

int ptr_increment(int *param_1,int param_2)

{
 int *local_18;
 int local_8;
 int local_4;
 
 local_8 = 0;
 local_18 = param_1;
 for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
 local_8 = local_8 + *local_18;
 local_18 = local_18 + 1;
 }
 return local_8;
}



/* Function: ptr_offset @ 001014a8 */

int ptr_offset(long param_1,int param_2)

{
 return *(int *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 001014d0 */

long ptr_diff(long param_1,long param_2)

{
 return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 001014f4 */

unsigned int ptr_void(unsigned int *param_1,int param_2)

{
 unsigned int uVar1;
 
 if (param_2 == 0) {
 uVar1 = *param_1;
 }
 else if (param_2 == 1) {
 uVar1 = (unsigned int)(byte)*param_1;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: ptr_const @ 0010153c */

int ptr_const(int *param_1)

{
 return *param_1 << 1;
}



/* Function: ptr_const_ptr @ 00101558 */

int ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return *param_1;
}



/* Function: ptr_func_simple @ 00101584 */

void ptr_func_simple(code *param_1,int param_2)

{
 (*param_1)(param_2);
 return;
}



/* Function: ptr_func_complex @ 001015a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ptr_func_complex(code *param_1,long param_2)

{
 int uVar1;
 undefined *local_18;
 long local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_18 = (undefined *)DAT_00103948;
 local_10 = 0;
 uVar1 = (*param_1)(param_2,&local_18);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar1;
}



/* Function: ptr_cast @ 00101620 */

int ptr_cast(int *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00101650 */

long opaque_handle_create(int param_1)

{
 return (long)param_1;
}



/* Function: opaque_handle_op @ 00101664 */

int opaque_handle_op(int param_1)

{
 return param_1 << 1;
}



/* Function: complex_callback @ 0010167c */

bool complex_callback(int *param_1,long *param_2)

{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}



/* Function: test_pointer_types @ 001016b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_pointer_types(void)

{
 unsigned long uVar1;
 undefined1 local_a1;
 int local_a0;
 int local_9c;
 int local_98;
 int local_94;
 int local_90;
 int local_8c;
 int local_88;
 int local_84;
 int *local_80;
 int *local_78;
 int **local_70;
 int **local_68;
 long **local_60;
 long local_58;
 long local_50;
 long uStack_48;
 int local_40;
 long local_38;
 long uStack_30;
 int local_28;
 long local_20;
 long uStack_18;
 int local_10 [2];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(&DAT_00103950);
 local_a0 = 5;
 uVar1 = ptr_single(&local_a0);
 printf("PTR-L2-01 (ptr_single): %d\n",uVar1 & 0xffffffff);
 local_9c = 10;
 local_80 = &local_9c;
 local_68 = &local_80;
 uVar1 = ptr_double(local_68);
 printf("PTR-L2-02 (ptr_double): %d\n",uVar1 & 0xffffffff);
 local_98 = 5;
 local_78 = &local_98;
 local_70 = &local_78;
 local_60 = &local_70;
 uVar1 = ptr_triple(local_60);
 printf("PTR-L2-03 (ptr_triple): %d\n",uVar1 & 0xffffffff);
 local_50 = 0x200000001;
 uStack_48 = 0x400000003;
 local_40 = 5;
 uVar1 = ptr_increment(&local_50,5);
 printf("PTR-L2-04 (ptr_increment): %d\n",uVar1 & 0xffffffff);
 local_38 = 0x140000000a;
 uStack_30 = 0x280000001e;
 local_28 = 0x32;
 uVar1 = ptr_offset(&local_38,2);
 printf("PTR-L2-05 (ptr_offset): %d\n",uVar1 & 0xffffffff);
 local_20 = 0xa00000000;
 uStack_18 = 0x1e00000014;
 local_10[0] = 0x28;
 uVar1 = ptr_diff(local_10,&local_20);
 printf("PTR-L2-06 (ptr_diff): %d\n",uVar1 & 0xffffffff);
 local_94 = 0x2a;
 local_a1 = 0x41;
 uVar1 = ptr_void(&local_94,0);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar1 & 0xffffffff);
 uVar1 = ptr_void(&local_a1,1);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar1 & 0xffffffff);
 local_90 = 10;
 uVar1 = ptr_const(&local_90);
 printf("PTR-L2-08 (ptr_const): %d\n",uVar1 & 0xffffffff);
 local_8c = 10;
 uVar1 = ptr_const_ptr(&local_8c);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",uVar1 & 0xffffffff);
 uVar1 = ptr_func_simple(double_value,5);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",uVar1 & 0xffffffff);
 local_88 = 5;
 uVar1 = ptr_func_complex(complex_callback,&local_88);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",uVar1 & 0xffffffff);
 local_84 = 0x12345678;
 uVar1 = ptr_cast(&local_84);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",uVar1 & 0xffffffff);
 local_58 = opaque_handle_create(10);
 uVar1 = opaque_handle_op(local_58);
 printf("PTR-L2-13 (opaque_handle_op): %d\n",uVar1 & 0xffffffff);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: struct_simple @ 00101968 */

int struct_simple(int *param_1)

{
 return *param_1 + param_1[1] + param_1[2];
}



/* Function: struct_array @ 00101998 */

int struct_array(long param_1,int param_2)

{
 int local_8;
 int local_4;
 
 local_8 = 0;
 for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
 local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 0xc) +
 *(int *)(param_1 + (long)local_4 * 0xc + 4) +
 *(int *)(param_1 + (long)local_4 * 0xc + 8);
 }
 return local_8;
}



/* Function: struct_nested @ 00101a58 */

int struct_nested(int *param_1)

{
 return *param_1 + param_1[3];
}



/* Function: struct_deep @ 00101a7c */

int struct_deep(long param_1)

{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}



/* Function: struct_with_ptr @ 00101aa0 */

int struct_with_ptr(int *param_1)

{
 int iVar1;
 
 if (*(long *)(param_1 + 2) == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = **(int **)(param_1 + 2);
 }
 return iVar1 + *param_1;
}



/* Function: struct_bitfields @ 00101ae0 */

int struct_bitfields(unsigned int *param_1)

{
 return (*param_1 & 1) + (*param_1 >> 1 & 3) + (*param_1 >> 3 & 7) + (*param_1 >> 6 & 0x3ff);
}



/* Function: union_type @ 00101b40 */

float union_type(float *param_1,int param_2)

{
 float fVar1;
 
 if (param_2 == 0) {
 fVar1 = *param_1;
 }
 else if (param_2 == 1) {
 fVar1 = (float)(int)*param_1;
 }
 else {
 fVar1 = (float)(unsigned int)*(byte *)param_1;
 }
 return fVar1;
}



/* Function: union_array @ 00101b98 */

int union_array(long param_1,int param_2)

{
 int local_8;
 int local_4;
 
 local_8 = 0;
 for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
 local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 4);
 }
 return local_8;
}



/* Function: enum_type @ 00101bf8 */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 00101c1c */

long enum_switch(unsigned int param_1)

{
 if (param_1 == 3) {
 return 0xffffffff;
 }
 if (param_1 < 4) {
 if (param_1 == 2) {
 return 0x32;
 }
 if (param_1 < 3) {
 if (param_1 == 0) {
 return 0;
 }
 if (param_1 == 1) {
 return 100;
 }
 }
 }
 return 0xffffff9d;
}



/* Function: struct_func_ptr @ 00101c9c */

void struct_func_ptr(int *param_1)

{
 (**(code **)(param_1 + 2))(*param_1);
 return;
}



/* Function: linked_list @ 00101cc4 */

int linked_list(int *param_1)

{
 int local_c;
 int *local_8;
 
 local_c = 0;
 for (local_8 = param_1; local_8 != (int *)0x0; local_8 = *(int **)(local_8 + 2)) {
 local_c = local_c + *local_8;
 }
 return local_c;
}



/* Function: doubly_linked_list @ 00101d14 */

int doubly_linked_list(int *param_1)

{
 int local_c;
 int *local_8;
 
 local_c = 0;
 for (local_8 = param_1; local_8 != (int *)0x0; local_8 = *(int **)(local_8 + 2)) {
 local_c = local_c + *local_8;
 }
 return local_c;
}



/* Function: binary_tree_sum @ 00101d64 */

int binary_tree_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (param_1 == (int *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar1 = *param_1;
 iVar2 = binary_tree_sum(*(long *)(param_1 + 2));
 iVar3 = binary_tree_sum(*(long *)(param_1 + 4));
 iVar3 = iVar1 + iVar2 + iVar3;
 }
 return iVar3;
}



/* Function: binary_tree @ 00101dbc */

void binary_tree(long param_1)

{
 binary_tree_sum(param_1);
 return;
}



/* Function: graph_traverse @ 00101dd8 */

int graph_traverse(long param_1)

{
 int local_10;
 int local_c;
 int *local_8;
 
 local_10 = 0;
 for (local_c = 0; local_c < *(int *)(param_1 + 0x50); local_c = local_c + 1) {
 for (local_8 = *(int **)(param_1 + (long)local_c * 8); local_8 != (int *)0x0;
 local_8 = *(int **)(local_8 + 2)) {
 local_10 = local_10 + *local_8;
 }
 }
 return local_10;
}



/* Function: test_composite_types @ 00101e58 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_composite_types(void)

{
 unsigned long uVar1;
 unsigned long local_1a8 [2];
 int local_198;
 int local_190 [2];
 long local_188;
 int local_180 [2];
 int *local_178;
 int local_170 [2];
 code *local_168;
 int local_160 [2];
 long local_158;
 long local_150;
 long uStack_148;
 int local_140;
 int local_138 [2];
 long local_130;
 long local_128;
 long local_120;
 long uStack_118;
 long uStack_110;
 long uStack_108;
 long local_100;
 long uStack_f8;
 int local_f0 [2];
 long local_e8;
 int local_e0;
 long local_d8;
 long uStack_d0;
 long local_c8;
 int local_c0 [2];
 int *local_b8;
 int local_b0 [2];
 int *local_a8;
 int local_a0 [2];
 long local_98;
 int local_90 [2];
 int *local_88;
 long local_80;
 int local_78 [2];
 long local_70;
 int *local_68;
 int *local_60;
 long uStack_58;
 long uStack_50;
 long uStack_48;
 long local_40;
 long uStack_38;
 long uStack_30;
 long uStack_28;
 long local_20;
 long uStack_18;
 long local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(&DAT_00103b58);
 local_1a8[1] = 0x200000001;
 local_198 = 3;
 uVar1 = struct_simple(local_1a8 + 1);
 printf("CMP-L2-01 (struct_simple): %d\n",uVar1 & 0xffffffff);
 local_d8 = 0x100000001;
 uStack_d0 = 0x200000001;
 local_c8 = 0x200000002;
 uVar1 = struct_array(&local_d8,2);
 printf("CMP-L2-02 (struct_array): %d\n",uVar1 & 0xffffffff);
 local_150 = 0xa00000005;
 uStack_148 = 0x6400000000;
 local_140 = 200;
 uVar1 = struct_nested(&local_150);
 printf("CMP-L2-03 (struct_nested): %d\n",uVar1 & 0xffffffff);
 uStack_118 = 0xa00000003;
 local_120 = 0x200000001;
 uStack_108 = 0;
 uStack_110 = 0xff00000014;
 uStack_f8 = 0x2a000000ff;
 local_100 = 0;
 uVar1 = struct_deep(&local_120);
 printf("CMP-L2-04 (struct_deep): %d\n",uVar1 & 0xffffffff);
 local_190[0] = 0x14;
 local_188 = 0;
 local_180[0] = 10;
 local_178 = local_190;
 uVar1 = struct_with_ptr(local_180);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",uVar1 & 0xffffffff);
 local_1a8[0] = local_1a8[0] & 0xfff00000ffff0000 | 0x191d;
 uVar1 = struct_bitfields(local_1a8);
 printf("CMP-L2-06 (struct_bitfields): %d\n",uVar1 & 0xffffffff);
 local_f0[0] = 0x12345678;
 uVar1 = union_type(local_f0,0);
 printf("CMP-L2-07 (union_type): %d\n",uVar1 & 0xffffffff);
 local_e8 = 0x140000000a;
 local_e0 = 0x1e;
 uVar1 = union_array(&local_e8,3);
 printf("CMP-L2-08 (union_array): %d\n",uVar1 & 0xffffffff);
 uVar1 = enum_type(1);
 printf("CMP-L2-09 (enum_type): %d\n",uVar1 & 0xffffffff);
 uVar1 = enum_switch(2);
 printf("CMP-L2-10 (enum_switch): %d\n",uVar1 & 0xffffffff);
 local_170[0] = 10;
 local_168 = process_int;
 uVar1 = struct_func_ptr(local_170);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",uVar1 & 0xffffffff);
 local_c0[0] = 10;
 local_b8 = local_b0;
 local_b0[0] = 0x14;
 local_a8 = local_a0;
 local_a0[0] = 0x1e;
 local_98 = 0;
 uVar1 = linked_list(local_c0);
 printf("CMP-L2-12 (linked_list): %d\n",uVar1 & 0xffffffff);
 local_90[0] = 10;
 local_80 = 0;
 local_78[0] = 0x14;
 local_70 = 0;
 local_68 = local_90;
 local_88 = local_78;
 uVar1 = doubly_linked_list(local_90);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar1 & 0xffffffff);
 local_138[0] = 100;
 local_130 = 0;
 local_128 = 0;
 uVar1 = binary_tree(local_138);
 printf("CMP-L2-14 (binary_tree): %d\n",uVar1 & 0xffffffff);
 local_160[0] = 1;
 local_158 = 0;
 uStack_58 = 0;
 uStack_48 = 0;
 uStack_50 = 0;
 uStack_38 = 0;
 local_40 = 0;
 uStack_28 = 0;
 uStack_30 = 0;
 uStack_18 = 0;
 local_20 = 0;
 local_10 = 2;
 local_60 = local_160;
 uVar1 = graph_traverse(&local_60);
 printf("CMP-L2-15 (graph_traverse): %d\n",uVar1 & 0xffffffff);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: main @ 001021f4 */

long main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* Function: __addtf3 @ 00102220 */

long_double_rep __addtf3(long_double_rep param_1,long_double_rep param_2)

{
 int iVar1;
 unsigned long uVar2;
 unsigned long uVar3;
 unsigned long uVar4;
 long_double_rep auVar5;
 bool bVar6;
 bool bVar7;
 unsigned int uVar8;
 long lVar9;
 unsigned long uVar10;
 unsigned long uVar11;
 unsigned int uVar12;
 unsigned long uVar13;
 unsigned int uVar14;
 unsigned long uVar15;
 unsigned long uVar16;
 unsigned long uVar17;
 long lVar18;
 unsigned long uVar19;
 unsigned long uVar20;
 unsigned long uVar21;
 unsigned long uVar22;
 unsigned long uVar23;
 unsigned long uVar24;
 unsigned long uVar25;
 unsigned long uVar26;
 unsigned long uVar28;
 long_double_rep auVar27;
 unsigned long uVar29;
 
 uVar11 = param_2._8_8_;
 uVar29 = param_2._0_8_;
 uVar28 = param_1._8_8_;
 uVar26 = param_1._0_8_;
 uVar13 = fpcr;
 uVar3 = (uVar28 & 0xffffffffffff) << 3;
 lVar18 = -((long)uVar28 >> 0x3f);
 uVar12 = (unsigned int)lVar18;
 lVar9 = -((long)uVar11 >> 0x3f);
 uVar14 = (unsigned int)lVar9;
 uVar2 = uVar11 << 3;
 uVar4 = uVar2 & 0x7fffffffffff8;
 uVar10 = uVar26 >> 0x3d;
 uVar24 = uVar3 | uVar10;
 uVar20 = uVar28 >> 0x30 & 0x7fff;
 uVar19 = uVar11 >> 0x30 & 0x7fff;
 uVar17 = uVar29 >> 0x3d;
 uVar16 = uVar4 | uVar17;
 uVar21 = uVar26 * 8;
 uVar23 = uVar29 * 8;
 uVar22 = uVar21;
 uVar25 = uVar24;
 if ((long)uVar11 >> 0x3f == (long)uVar28 >> 0x3f) {
 uVar8 = (int)uVar20 - (int)uVar19;
 lVar9 = lVar18;
 if ((int)uVar8 < 1) {
 if (uVar8 != 0) {
 if (uVar20 == 0) {
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar19 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar16 != 0 || uVar23 != 0) {
 uVar11 = uVar4 >> 0x32 ^ 1;
 goto LAB_00102540;
 }
 goto LAB_001027f4;
 }
 goto LAB_0010249c;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (unsigned long)CARRY8(uVar21,uVar23);
 uVar20 = uVar19;
 goto LAB_00102658;
 }
 }
 else {
 uVar8 = -uVar8;
 uVar24 = uVar24 | 0x8000000000000;
 }
 if (uVar19 != 0x7fff) {
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar17 = uVar24 << ((unsigned long)(0x40 - uVar8) & 0x3f) | uVar21 >> ((unsigned long)uVar8 & 0x3f) |
 (unsigned long)(uVar21 << ((unsigned long)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar16 + (uVar24 >> ((unsigned long)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar21 | uVar24 << ((unsigned long)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar21;
 }
 uVar17 = (unsigned long)(uVar10 != 0) | uVar24 >> ((unsigned long)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar17 = (unsigned long)(uVar24 != 0 || uVar21 != 0);
 }
 uVar10 = uVar17 + uVar23;
 uVar20 = uVar19;
 if (CARRY8(uVar17,uVar23)) {
 uVar16 = uVar16 + 1;
 }
 goto LAB_00102658;
 }
 if (uVar16 != 0 || uVar23 != 0) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 goto LAB_00102704;
 }
LAB_00102888:
 uVar22 = 0;
 uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
 goto LAB_001023d4;
 }
 uVar15 = uVar20 + 1;
 if ((uVar15 & 0x7ffe) == 0) {
 if (uVar20 != 0) {
 uVar8 = 0;
 uVar11 = 0;
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00102b10;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102888;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar8 = (unsigned int)uVar11;
 if (uVar19 != 0x7fff) goto LAB_00102cb8;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102d50;
 }
LAB_00102d7c:
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (unsigned long)uVar8;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00102cc0:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00102704;
 }
LAB_00102b10:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 }
 else {
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) goto LAB_00102d7c;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00102888;
 }
 else {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00102b10;
LAB_00102cb8:
 if (uVar16 != 0 || uVar23 != 0) goto LAB_00102cc0;
 }
LAB_00102d50:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 }
 goto LAB_00102704;
 }
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 goto LAB_001024bc;
 }
 goto LAB_00102a88;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102a88;
 uVar22 = uVar21 + uVar23;
 uVar25 = uVar16 + uVar24 + (unsigned long)CARRY8(uVar21,uVar23);
 if ((uVar25 >> 0x33 & 1) != 0) {
 uVar25 = uVar25 & 0xfff7ffffffffffff;
 uVar10 = 0;
 bVar6 = false;
 uVar15 = 1;
 goto LAB_0010236c;
 }
LAB_00102358:
 uVar17 = uVar22 | uVar25;
 goto LAB_0010235c;
 }
 if (uVar15 != 0x7fff) {
 uVar17 = uVar16 + uVar24 + (unsigned long)CARRY8(uVar21,uVar23);
 bVar6 = false;
 uVar10 = uVar21 + uVar23 >> 1 & 7;
 uVar25 = uVar17 >> 1;
 uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
 goto LAB_0010236c;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 != 0) {
 if (((unsigned int)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_00102d60:
 uVar11 = 0x14;
 lVar18 = 0;
 goto LAB_001025ac;
 }
 if (uVar10 == 0x800000) {
 if (lVar18 == 0) goto LAB_00102cfc;
LAB_00102bc8:
 uVar11 = 0x14;
 lVar18 = 1;
 goto LAB_001025ac;
 }
LAB_00102a24:
 uVar14 = 0x14;
 if ((uVar13 & 0xc00000) == 0x400000) {
 uVar22 = 0xffffffffffffffff;
 uVar15 = 0x7ffe;
 bVar6 = false;
 uVar11 = 0x14;
 uVar25 = uVar22;
 goto joined_r0x00102a44;
 }
 goto LAB_00102568;
 }
LAB_00102ab4:
 uVar11 = 0x14;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (unsigned long)CARRY8(uVar21,uVar23);
 goto LAB_00102658;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00102888;
 goto LAB_00102534;
 }
 goto LAB_00102430;
 }
 uVar19 = uVar20;
 if (uVar20 != 0x7fff) goto LAB_0010249c;
 uVar14 = uVar12;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_001027f4;
 uVar11 = (unsigned long)((unsigned int)(uVar3 >> 0x32) ^ 1);
 uVar23 = uVar21;
 uVar16 = uVar24;
LAB_00102540:
 uVar20 = 0x7fff;
 goto LAB_00102548;
 }
 uVar16 = uVar16 | 0x8000000000000;
 if (uVar20 == 0x7fff) goto LAB_001026e4;
LAB_00102430:
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar17 = uVar16 << ((unsigned long)(0x40 - uVar8) & 0x3f) | uVar23 >> ((unsigned long)uVar8 & 0x3f) |
 (unsigned long)(uVar23 << ((unsigned long)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar24 + (uVar16 >> ((unsigned long)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar23 | uVar16 << ((unsigned long)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar23;
 }
 uVar17 = (unsigned long)(uVar10 != 0) | uVar16 >> ((unsigned long)(uVar8 - 0x40) & 0x3f);
 uVar16 = uVar24;
 }
 }
 else {
 uVar17 = (unsigned long)(uVar16 != 0 || uVar23 != 0);
 uVar16 = uVar24;
 }
 uVar10 = uVar17 + uVar21;
 if (CARRY8(uVar17,uVar21)) {
 uVar16 = uVar16 + 1;
 }
LAB_00102658:
 uVar19 = uVar20;
 uVar22 = uVar10;
 uVar25 = uVar16;
 if ((uVar16 >> 0x33 & 1) == 0) goto LAB_0010249c;
 uVar15 = uVar20 + 1;
 if (uVar15 != 0x7fff) {
 bVar6 = false;
 uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
 uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
 uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
 goto LAB_0010236c;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0) goto LAB_00102ab4;
 if (((unsigned int)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_00102d60;
 if (uVar10 != 0x800000) goto LAB_00102a24;
 if (lVar18 != 0) goto LAB_00102bc8;
LAB_00102cfc:
 uVar22 = 0xffffffffffffffff;
 lVar18 = 0;
 uVar15 = 0x7ffe;
 uVar11 = 0x14;
 uVar25 = uVar22;
LAB_0010239c:
 uVar14 = (unsigned int)uVar11;
 uVar12 = (unsigned int)lVar18;
 if (uVar15 + 1 != 0x7fff) {
 uVar10 = uVar25 >> 3 & 0xffffffffffff;
 uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
 uVar14 = (unsigned int)(uVar15 + 1) & 0x7fff;
 goto LAB_001023b8;
 }
LAB_00102568:
 uVar12 = (unsigned int)lVar18;
 uVar13 = uVar13 & 0xc00000;
 if (uVar13 != 0) {
 if (uVar13 == 0x400000) {
 if (lVar9 != 0) goto LAB_00102584;
 }
 else if (((unsigned int)(uVar13 == 0x800000) & (unsigned int)lVar9) == 0) {
LAB_00102584:
 uVar22 = 0xffffffffffffffff;
 uVar11 = (unsigned long)(uVar14 | 0x14);
 uVar10 = 0x1fffffffffffffff;
 uVar20 = 0x7ffe;
 goto LAB_001024bc;
 }
 }
 uVar11 = (unsigned long)(uVar14 | 0x14);
 }
LAB_001025ac:
 uVar22 = 0;
 uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
 goto LAB_001025c0;
 }
 uVar8 = (int)uVar20 - (int)uVar19;
 if ((int)uVar8 < 1) {
 if (uVar8 == 0) {
 uVar11 = 0;
 if ((uVar20 + 1 & 0x7ffe) != 0) {
 uVar22 = uVar21 + uVar29 * -8;
 uVar10 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar10 >> 0x33 & 1) != 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar10 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_001022f4;
 }
 lVar9 = lVar18;
 if (uVar22 != 0 || uVar10 != 0) goto LAB_001022f4;
 uVar22 = 0;
 uVar20 = 0;
 uVar12 = (unsigned int)((uVar13 & 0xc00000) == 0x800000);
 uVar10 = 0;
 goto LAB_001024bc;
 }
 if (uVar20 == 0) {
 if (uVar24 != 0 || uVar21 != 0) {
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102a88;
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar25 >> 0x33 & 1) == 0) {
 if (uVar22 != 0 || uVar25 != 0) {
 uVar10 = 0;
 bVar6 = true;
 uVar15 = uVar20;
 goto LAB_0010236c;
 }
 goto LAB_00102b60;
 }
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 uVar17 = uVar22 | uVar25;
 goto LAB_0010235c;
 }
 uVar22 = uVar23;
 uVar25 = uVar16;
 lVar18 = lVar9;
 if (uVar16 == 0 && uVar23 == 0) {
LAB_00102b60:
 uVar10 = 0;
 uVar22 = 0;
 uVar12 = (unsigned int)((uVar13 & 0xc00000) == 0x800000);
 goto LAB_001024bc;
 }
LAB_00102a88:
 uVar10 = 0;
 uVar15 = 0;
 goto LAB_00102a90;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_001029c8;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 if (uVar19 != 0x7fff) goto LAB_00102998;
 }
LAB_00102c10:
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = (unsigned int)uVar11;
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (unsigned long)uVar8;
 if (uVar24 == 0 && uVar21 == 0) {
LAB_00102c8c:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 goto LAB_00102704;
 }
LAB_00102c28:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00102704;
 }
 if (uVar24 != 0 || uVar21 != 0) goto LAB_00102998;
 }
 else {
 if (uVar19 == 0x7fff) goto LAB_00102c10;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00102998:
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00102704;
 }
 goto LAB_00102c28;
 }
LAB_001029c8:
 uVar11 = 0;
 if (uVar16 != 0 || uVar23 != 0) goto LAB_00102c8c;
 }
 uVar22 = 0xffffffffffffffff;
 uVar10 = 0xffffffffffff;
 uVar12 = 0;
 uVar11 = 1;
 }
 else {
 if (uVar20 == 0) {
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar12 = uVar14;
 goto LAB_00102540;
 }
 goto LAB_001027f4;
 }
 goto LAB_0010249c;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_001022ec;
 }
 }
 else {
 uVar8 = -uVar8;
 uVar24 = uVar24 | 0x8000000000000;
 }
 if (uVar19 != 0x7fff) {
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar10 = uVar24 << ((unsigned long)(0x40 - uVar8) & 0x3f) | uVar21 >> ((unsigned long)uVar8 & 0x3f) |
 (unsigned long)(uVar21 << ((unsigned long)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar16 - (uVar24 >> ((unsigned long)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar21 | uVar24 << ((unsigned long)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar21;
 }
 uVar10 = (unsigned long)(uVar10 != 0) | uVar24 >> ((unsigned long)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar10 = (unsigned long)(uVar24 != 0 || uVar21 != 0);
 }
 uVar22 = uVar23 - uVar10;
 uVar25 = uVar16 - (uVar23 < uVar10);
 goto LAB_001022ec;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102888;
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
LAB_00102704:
 if (uVar10 == 0 && uVar22 == 0) {
 uVar22 = 0;
 uVar14 = 0x7fff;
 uVar10 = 0;
 goto LAB_001023b8;
 }
 }
 uVar14 = 0x7fff;
 uVar10 = uVar10 & 0xffffffffffff | 0x800000000000;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 uVar19 = uVar20;
 lVar9 = lVar18;
 goto LAB_001022ec;
 }
 goto LAB_00102298;
 }
 uVar19 = uVar20;
 lVar9 = lVar18;
 if (uVar20 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00102534:
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar23 = uVar21;
 uVar16 = uVar24;
 goto LAB_00102540;
 }
LAB_001027f4:
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 uVar12 = uVar14;
 goto LAB_00102704;
 }
LAB_0010249c:
 uVar12 = (unsigned int)lVar9;
 uVar17 = uVar22 | uVar25;
 uVar10 = uVar22 & 7;
 bVar6 = false;
 uVar15 = uVar19;
 lVar18 = lVar9;
 if (uVar19 == 0) goto joined_r0x001024ac;
LAB_0010236c:
 if (uVar10 == 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0;
 if (bVar6) {
LAB_00102a90:
 uVar11 = 0;
 if (((unsigned int)uVar13 >> 0xb & 1) != 0) {
 uVar11 = 8;
 }
 }
 }
 else {
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0x400000) {
 uVar11 = 0x10;
joined_r0x00102a44:
 if (lVar18 == 0) {
LAB_00102694:
 bVar7 = 0xfffffffffffffff7 < uVar22;
 uVar22 = uVar22 + 8;
 if (bVar7) {
 uVar25 = uVar25 + 1;
 }
 }
 }
 else if (uVar10 == 0x800000) {
 uVar11 = 0x10;
 if (lVar18 != 0) goto LAB_00102694;
 }
 else {
 if (uVar10 != 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0x10;
 if (bVar6) {
 uVar11 = 0x18;
 }
 goto LAB_00102398;
 }
 uVar11 = 0x10;
 if (((uVar22 & 0xf) != 4) &&
 (bVar7 = 0xfffffffffffffffb < uVar22, uVar22 = uVar22 + 4, bVar7)) {
 uVar25 = uVar25 + 1;
 }
 }
 uVar10 = uVar25 & 0x8000000000000;
 if (bVar6) {
 uVar11 = (unsigned long)((unsigned int)uVar11 | 8);
 }
 }
LAB_00102398:
 uVar12 = (unsigned int)lVar18;
 uVar20 = uVar15;
 uVar23 = uVar22;
 uVar16 = uVar25;
 lVar9 = lVar18;
 if (uVar10 != 0) goto LAB_0010239c;
LAB_00102548:
 uVar10 = uVar16 >> 3;
 uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
 if (uVar20 == 0x7fff) goto LAB_00102704;
 }
 else {
 uVar16 = uVar16 | 0x8000000000000;
LAB_00102298:
 if (uVar20 == 0x7fff) {
LAB_001026e4:
 lVar9 = lVar18;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00102888;
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00102704;
 }
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar10 = uVar16 << ((unsigned long)(0x40 - uVar8) & 0x3f) | uVar23 >> ((unsigned long)uVar8 & 0x3f) |
 (unsigned long)(uVar23 << ((unsigned long)(0x40 - uVar8) & 0x3f) != 0);
 uVar24 = uVar24 - (uVar16 >> ((unsigned long)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar23 | uVar16 << ((unsigned long)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar23;
 }
 uVar10 = (unsigned long)(uVar10 != 0) | uVar16 >> ((unsigned long)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar10 = (unsigned long)(uVar16 != 0 || uVar23 != 0);
 }
 uVar22 = uVar21 - uVar10;
 uVar25 = uVar24 - (uVar21 < uVar10);
 uVar19 = uVar20;
 lVar9 = lVar18;
LAB_001022ec:
 uVar10 = uVar25 & 0x7ffffffffffff;
 uVar20 = uVar19;
 if ((uVar25 >> 0x33 & 1) == 0) goto LAB_0010249c;
LAB_001022f4:
 if (uVar10 == 0) {
 uVar12 = (int)LZCOUNT(uVar22) + 0x34;
 if (uVar12 < 0x40) goto LAB_00102300;
 uVar10 = uVar22 << ((unsigned long)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
 uVar17 = 0;
 }
 else {
 uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_00102300:
 uVar17 = uVar22 << ((unsigned long)uVar12 & 0x3f);
 uVar10 = uVar22 >> ((unsigned long)-uVar12 & 0x3f) | uVar10 << ((unsigned long)uVar12 & 0x3f);
 }
 if ((long)(int)uVar12 < (long)uVar20) {
 uVar19 = uVar20 - (long)(int)uVar12;
 uVar22 = uVar17;
 uVar25 = uVar10 & 0xfff7ffffffffffff;
 goto LAB_0010249c;
 }
 iVar1 = uVar12 - (int)uVar20;
 uVar12 = iVar1 + 1;
 if ((int)uVar12 < 0x40) {
 uVar25 = uVar10 >> ((unsigned long)uVar12 & 0x3f);
 uVar22 = uVar10 << ((unsigned long)(0x40 - uVar12) & 0x3f) | uVar17 >> ((unsigned long)uVar12 & 0x3f) |
 (unsigned long)(uVar17 << ((unsigned long)(0x40 - uVar12) & 0x3f) != 0);
 goto LAB_00102358;
 }
 uVar22 = uVar17 | uVar10 << ((unsigned long)(0x80 - uVar12) & 0x3f);
 if (uVar12 == 0x40) {
 uVar22 = uVar17;
 }
 uVar25 = 0;
 uVar17 = (unsigned long)(uVar22 != 0) | uVar10 >> ((unsigned long)(iVar1 - 0x3f) & 0x3f);
 uVar22 = uVar17;
LAB_0010235c:
 uVar12 = (unsigned int)lVar9;
joined_r0x001024ac:
 if (uVar17 != 0) {
 uVar10 = uVar22 & 7;
 bVar6 = true;
 uVar15 = 0;
 lVar18 = lVar9;
 goto LAB_0010236c;
 }
 uVar22 = 0;
 uVar20 = 0;
 uVar11 = 0;
 uVar10 = 0;
 }
LAB_001024bc:
 uVar10 = uVar10 & 0xffffffffffff;
 uVar14 = (unsigned int)uVar20 & 0x7fff;
 }
LAB_001023b8:
 uVar10 = uVar10 | (unsigned long)(uVar14 | uVar12 << 0xf) << 0x30;
 if ((int)uVar11 == 0) {
LAB_001023d4:
 auVar27._8_8_ = uVar10;
 auVar27._0_8_ = uVar22;
 return auVar27;
 }
LAB_001025c0:
 uVar11 = __sfp_handle_exceptions(uVar11);
 auVar5._8_8_ = uVar10;
 auVar5._0_8_ = uVar22;
 return auVar5;
}



/* Function: __multf3 @ 00102dc0 */

long_double_rep __multf3(long_double_rep param_1,long_double_rep param_2)

{
 unsigned long uVar1;
 undefined1 auVar2 [16];
 bool bVar3;
 unsigned int uVar4;
 unsigned int uVar5;
 unsigned long uVar6;
 unsigned long uVar7;
 int iVar8;
 long lVar9;
 unsigned long uVar10;
 unsigned long uVar11;
 long lVar12;
 long lVar13;
 unsigned long uVar14;
 unsigned long uVar15;
 unsigned long uVar16;
 unsigned long uVar17;
 unsigned long uVar18;
 unsigned long uVar19;
 long lVar20;
 unsigned long uVar21;
 unsigned long uVar22;
 long lVar23;
 long lVar24;
 unsigned long uVar25;
 unsigned long uVar26;
 unsigned long uVar27;
 unsigned long uVar28;
 unsigned long uVar29;
 unsigned long uVar30;
 undefined1 auVar31 [16];
 
 uVar21 = param_2._8_8_;
 uVar17 = param_2._0_8_;
 uVar11 = param_1._8_8_;
 uVar15 = param_1._0_8_;
 uVar18 = fpcr;
 uVar10 = uVar11 >> 0x3f;
 uVar19 = uVar11 & 0xffffffffffff;
 uVar11 = uVar11 >> 0x30 & 0x7fff;
 iVar8 = (int)uVar11;
 if (iVar8 == 0) {
 if (uVar15 == 0 && uVar19 == 0) {
 uVar19 = 0;
 uVar7 = 4;
 lVar13 = 0;
 lVar24 = 1;
 uVar6 = 0;
 uVar11 = 0;
 }
 else {
 if (uVar19 == 0) {
 uVar11 = LZCOUNT(uVar15) + 0x31;
 iVar8 = (int)uVar11;
 lVar13 = LZCOUNT(uVar15) + 0x40;
 if (uVar11 < 0x3d) goto LAB_00103218;
 uVar11 = 0;
 uVar19 = uVar15 << ((unsigned long)(iVar8 - 0x3d) & 0x3f);
 }
 else {
 lVar13 = LZCOUNT(uVar19);
 iVar8 = (int)lVar13 + -0xf;
LAB_00103218:
 uVar19 = uVar15 >> ((unsigned long)(0x3d - iVar8) & 0x3f) | uVar19 << ((unsigned long)(iVar8 + 3) & 0x3f);
 uVar11 = uVar15 << ((unsigned long)(iVar8 + 3) & 0x3f);
 }
 uVar7 = 0;
 lVar13 = -0x3fef - lVar13;
 lVar24 = 0;
 uVar6 = 0;
 }
 }
 else if (iVar8 == 0x7fff) {
 if (uVar15 == 0 && uVar19 == 0) {
 uVar19 = 0;
 uVar7 = 8;
 lVar13 = 0x7fff;
 lVar24 = 2;
 uVar6 = 0;
 uVar11 = 0;
 }
 else {
 uVar6 = uVar19 >> 0x2f ^ 1;
 uVar7 = 0xc;
 lVar13 = 0x7fff;
 lVar24 = 3;
 uVar11 = uVar15;
 }
 }
 else {
 uVar19 = uVar15 >> 0x3d | uVar19 << 3 | 0x8000000000000;
 lVar13 = uVar11 - 0x3fff;
 lVar24 = 0;
 uVar7 = 0;
 uVar6 = 0;
 uVar11 = uVar15 << 3;
 }
 uVar14 = uVar21 >> 0x3f;
 uVar15 = uVar21 & 0xffffffffffff;
 uVar22 = uVar21 >> 0x30 & 0x7fff;
 iVar8 = (int)uVar22;
 uVar4 = param_1._12_4_;
 uVar5 = param_2._12_4_;
 if (iVar8 == 0) {
 if (uVar17 == 0 && uVar15 == 0) {
 uVar7 = uVar7 | 1;
 lVar23 = lVar13 + 1;
 uVar21 = 0;
 uVar17 = 0;
 lVar12 = 1;
 lVar20 = lVar13;
 }
 else {
 if (uVar15 == 0) {
 uVar21 = LZCOUNT(uVar17) + 0x31;
 iVar8 = (int)uVar21;
 lVar23 = LZCOUNT(uVar17) + 0x40;
 if (uVar21 < 0x3d) goto LAB_001031bc;
 uVar21 = uVar17 << ((unsigned long)(iVar8 - 0x3d) & 0x3f);
 uVar17 = 0;
 }
 else {
 lVar23 = LZCOUNT(uVar15);
 iVar8 = (int)lVar23 + -0xf;
LAB_001031bc:
 uVar21 = uVar17 >> ((unsigned long)(0x3d - iVar8) & 0x3f) | uVar15 << ((unsigned long)(iVar8 + 3) & 0x3f);
 uVar17 = uVar17 << ((unsigned long)(iVar8 + 3) & 0x3f);
 }
 lVar20 = (lVar13 - lVar23) + -0x3fef;
 lVar23 = (lVar13 - lVar23) + -0x3fee;
 lVar12 = 0;
 }
 uVar22 = (unsigned long)((uVar4 ^ uVar5) >> 0x1f);
 if (uVar7 < 0xb) {
LAB_00102ecc:
 uVar15 = uVar21;
 if (2 < uVar7) {
LAB_00102f48:
 uVar7 = 1L << uVar7;
 uVar25 = uVar11;
 uVar21 = uVar19;
 uVar26 = uVar22;
 lVar9 = lVar24;
 if ((uVar7 & 0x530) == 0) {
 if ((uVar7 & 0x240) != 0) {
 uVar6 = 1;
 uVar15 = 0xffffffffffff;
 uVar4 = 0x7fff;
 uVar11 = 0xffffffffffffffff;
 uVar10 = 0;
 goto LAB_00102efc;
 }
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 lVar9 = lVar12;
 if ((uVar7 & 0x88) == 0) goto LAB_00102fec;
 }
LAB_00102f8c:
 lVar12 = lVar9;
 uVar14 = uVar26;
 uVar17 = uVar25;
 uVar22 = uVar14;
 if (lVar12 == 2) {
LAB_00102fdc:
 uVar4 = 0x7fff;
 uVar15 = 0;
 uVar11 = 0;
 uVar10 = uVar22;
 goto LAB_00102efc;
 }
 goto LAB_00102fa8;
 }
 if (uVar7 - 1 < 2) {
 if (lVar12 == 2) goto LAB_00102fdc;
 goto LAB_00102ee8;
 }
LAB_00102fec:
 uVar29 = uVar17 & 0xffffffff;
 uVar25 = uVar11 >> 0x20;
 uVar7 = uVar15 & 0xffffffff;
 uVar11 = uVar11 & 0xffffffff;
 uVar17 = uVar17 >> 0x20;
 uVar15 = uVar15 >> 0x20;
 uVar26 = uVar25 * uVar29;
 uVar28 = uVar19 >> 0x20;
 uVar14 = uVar25 * uVar7;
 uVar19 = uVar19 & 0xffffffff;
 uVar10 = uVar26 + uVar17 * uVar11 + (uVar29 * uVar11 >> 0x20);
 uVar21 = uVar14 + uVar15 * uVar11 + (uVar11 * uVar7 >> 0x20);
 uVar27 = uVar28 * uVar29;
 uVar30 = uVar28 * uVar7;
 lVar13 = uVar25 * uVar17 + 0x100000000;
 if (uVar26 < uVar10 || uVar26 - uVar10 == 0) {
 lVar13 = uVar25 * uVar17;
 }
 uVar26 = (uVar11 * uVar7 & 0xffffffff) + (uVar21 << 0x20);
 uVar1 = uVar27 + uVar17 * uVar19 + (uVar29 * uVar19 >> 0x20);
 uVar16 = uVar30 + uVar15 * uVar19 + (uVar19 * uVar7 >> 0x20);
 lVar24 = uVar25 * uVar15 + 0x100000000;
 if (uVar14 < uVar21 || uVar14 - uVar21 == 0) {
 lVar24 = uVar25 * uVar15;
 }
 uVar14 = uVar26 + (uVar10 >> 0x20) + lVar13;
 lVar13 = uVar17 * uVar28 + 0x100000000;
 if (uVar27 < uVar1 || uVar27 - uVar1 == 0) {
 lVar13 = uVar17 * uVar28;
 }
 uVar17 = lVar24 + (uVar21 >> 0x20);
 uVar21 = (uVar19 * uVar7 & 0xffffffff) + (uVar16 << 0x20);
 lVar24 = uVar15 * uVar28 + 0x100000000;
 if (uVar30 < uVar16 || uVar30 - uVar16 == 0) {
 lVar24 = uVar15 * uVar28;
 }
 uVar15 = uVar21 + uVar17;
 uVar26 = (unsigned long)(uVar14 < uVar26);
 uVar19 = (uVar29 * uVar19 & 0xffffffff) + (uVar1 << 0x20);
 uVar7 = uVar15 + uVar26;
 uVar16 = uVar16 >> 0x20;
 uVar25 = lVar13 + (uVar1 >> 0x20);
 if (CARRY8(uVar21,uVar17) || CARRY8(uVar15,uVar26)) {
 uVar16 = uVar16 + 1;
 }
 uVar15 = uVar14 + uVar19;
 uVar21 = (unsigned long)CARRY8(uVar14,uVar19);
 uVar17 = uVar7 + uVar25;
 uVar19 = uVar17 + uVar21;
 if (CARRY8(uVar7,uVar25) || CARRY8(uVar17,uVar21)) {
 lVar24 = lVar24 + 1;
 }
 uVar10 = (unsigned long)((uVar29 * uVar11 & 0xffffffff) + (uVar10 << 0x20) != 0 ||
 (uVar15 & 0x7ffffffffffff) != 0);
 uVar15 = uVar15 >> 0x33;
 uVar17 = uVar10 | uVar15 | uVar19 * 0x2000;
 uVar19 = uVar19 >> 0x33;
 uVar21 = uVar19 | (lVar24 + uVar16) * 0x2000;
 if ((lVar24 + uVar16 >> 0x27 & 1) != 0) {
 uVar17 = uVar10 | uVar15 & 1 | uVar17 >> 1 | uVar19 << 0x3f;
 uVar21 = uVar21 >> 1;
 lVar20 = lVar23;
 }
LAB_0010314c:
 lVar13 = lVar20 + 0x3fff;
 uVar5 = (unsigned int)uVar6;
 uVar10 = uVar22;
 if (lVar13 < 1) {
 uVar19 = 1 - lVar13;
 if ((long)uVar19 < 0x75) {
 iVar8 = (int)uVar19;
 if ((long)uVar19 < 0x40) {
 uVar11 = (unsigned long)(uVar17 << ((unsigned long)(0x40 - iVar8) & 0x3f) != 0);
 uVar17 = uVar21 << ((unsigned long)(0x40 - iVar8) & 0x3f) | uVar17 >> (uVar19 & 0x3f);
 uVar15 = uVar21 >> (uVar19 & 0x3f);
 uVar19 = uVar17 | uVar11;
 if ((uVar17 & 7) != 0 || uVar11 != 0) goto LAB_00103334;
 if ((uVar15 >> 0x33 & 1) == 0) goto LAB_0010347c;
LAB_001034e8:
 uVar6 = (unsigned long)(uVar5 | 0x18);
 uVar17 = 1;
 uVar15 = 0;
 uVar11 = 0;
 }
 else {
 uVar11 = uVar17 | uVar21 << ((unsigned long)(0x80 - iVar8) & 0x3f);
 if (uVar19 == 0x40) {
 uVar11 = uVar17;
 }
 uVar21 = uVar21 >> ((unsigned long)(iVar8 - 0x40) & 0x3f);
 uVar19 = uVar11 != 0 | uVar21;
 uVar15 = 0;
 if ((unsigned long)(uVar11 != 0) == 0 && (uVar21 & 7) == 0) {
LAB_0010347c:
 uVar17 = 0;
 uVar4 = 0;
 uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
 uVar15 = uVar15 >> 3 & 0xffffffffffff;
 if (((unsigned int)uVar18 >> 0xb & 1) == 0) goto LAB_00102efc;
 uVar6 = (unsigned long)(uVar5 | 8);
 }
 else {
 uVar15 = 0;
LAB_00103334:
 uVar18 = uVar18 & 0xc00000;
 if (uVar18 == 0x400000) {
 if (uVar22 == 0) {
LAB_001034dc:
 bVar3 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar3) {
 uVar15 = uVar15 + 1;
 }
 }
 }
 else if (uVar18 == 0x800000) {
 if (uVar22 != 0) goto LAB_001034dc;
 }
 else if (((uVar18 == 0) && ((uVar19 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
 uVar15 = uVar15 + 1;
 }
 if ((uVar15 >> 0x33 & 1) != 0) goto LAB_001034e8;
 uVar6 = (unsigned long)(uVar5 | 0x18);
 uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
 uVar17 = 0;
 uVar15 = uVar15 >> 3 & 0xffffffffffff;
 }
 }
 }
 else {
 uVar11 = 0;
 if (uVar17 != 0 || uVar21 != 0) {
 uVar5 = uVar5 | 0x10;
 uVar11 = 1 - uVar22;
 if (((uVar18 & 0xc00000) != 0x400000) &&
 (uVar11 = uVar22, (uVar18 & 0xc00000) != 0x800000)) {
 uVar11 = 0;
 }
 }
 uVar6 = (unsigned long)(uVar5 | 8);
 uVar17 = 0;
 uVar15 = 0;
 }
 }
 else {
 if ((uVar17 & 7) != 0) {
 uVar19 = uVar18 & 0xc00000;
 uVar6 = (unsigned long)(uVar5 | 0x10);
 if (uVar19 == 0x400000) {
 if (uVar22 == 0) {
LAB_001034cc:
 bVar3 = 0xfffffffffffffff7 < uVar17;
 uVar17 = uVar17 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar19 == 0x800000) {
 if (uVar22 != 0) goto LAB_001034cc;
 }
 else if (((uVar19 == 0) && ((uVar17 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar17, uVar17 = uVar17 + 4, bVar3)) {
 uVar21 = uVar21 + 1;
 }
 }
 if ((uVar21 >> 0x34 & 1) != 0) {
 uVar21 = uVar21 & 0xffefffffffffffff;
 lVar13 = lVar20 + 0x4000;
 }
 if (lVar13 < 0x7fff) {
 uVar15 = uVar21 >> 3 & 0xffffffffffff;
 uVar4 = (unsigned int)lVar13 & 0x7fff;
 uVar11 = uVar17 >> 3 | uVar21 << 0x3d;
 goto LAB_00102efc;
 }
 uVar18 = uVar18 & 0xc00000;
 uVar4 = 0x7ffe;
 if (uVar18 == 0x400000) {
 bVar3 = uVar22 != 0;
 if (!bVar3) {
 uVar4 = 0x7fff;
 }
 uVar17 = (unsigned long)uVar4;
 uVar15 = 0xffffffffffff;
 if (!bVar3) {
 uVar15 = 0;
 }
 uVar11 = -(unsigned long)bVar3;
 }
 else if (uVar18 == 0x800000) {
 bVar3 = uVar22 == 0;
 if (!bVar3) {
 uVar4 = 0x7fff;
 }
 uVar17 = (unsigned long)uVar4;
 uVar15 = 0xffffffffffff;
 if (!bVar3) {
 uVar15 = 0;
 }
 uVar11 = -(unsigned long)bVar3;
 }
 else {
 uVar17 = 0x7fff;
 uVar15 = 0;
 uVar11 = 0;
 if (uVar18 != 0) {
 uVar17 = 0x7ffe;
 uVar15 = 0xffffffffffff;
 uVar11 = 0xffffffffffffffff;
 }
 }
 uVar6 = (unsigned long)((unsigned int)uVar6 | 0x14);
 }
 uVar15 = uVar15 | uVar17 << 0x30 | uVar22 << 0x3f;
 goto LAB_001033b4;
 }
LAB_00102e80:
 if (uVar7 != 0xb) {
LAB_00102e88:
 uVar25 = uVar11;
 uVar21 = uVar19;
 uVar26 = uVar10;
 lVar9 = lVar24;
 goto LAB_00102f8c;
 }
LAB_00102fa8:
 uVar22 = uVar14;
 if (lVar12 == 3) {
 uVar15 = uVar21 & 0xffffffffffff | 0x800000000000;
 uVar4 = 0x7fff;
 uVar11 = uVar17;
 uVar10 = uVar14;
 }
 else {
LAB_00102ee8:
 lVar20 = lVar23;
 if (lVar12 != 1) goto LAB_0010314c;
 uVar4 = 0;
 uVar15 = 0;
 uVar11 = 0;
 uVar10 = uVar22;
 }
 }
 else {
 if (iVar8 != 0x7fff) {
 lVar20 = (uVar22 - 0x3fff) + lVar13;
 uVar22 = (unsigned long)((uVar4 ^ uVar5) >> 0x1f);
 uVar21 = uVar17 >> 0x3d | uVar15 << 3 | 0x8000000000000;
 uVar17 = uVar17 << 3;
 lVar23 = lVar20 + 1;
 lVar12 = 0;
 if (10 < uVar7) goto LAB_00102e80;
 goto LAB_00102ecc;
 }
 lVar20 = lVar13 + 0x7fff;
 if (uVar17 != 0 || uVar15 != 0) {
 uVar22 = (unsigned long)((uVar4 ^ uVar5) >> 0x1f);
 uVar7 = uVar7 | 3;
 lVar23 = lVar13 + 0x8000;
 uVar4 = (unsigned int)uVar6;
 if ((uVar21 & 0x800000000000) == 0) {
 uVar4 = 1;
 }
 uVar6 = (unsigned long)uVar4;
 lVar12 = 3;
 if (10 < uVar7) {
 lVar9 = 3;
 goto LAB_00103524;
 }
 goto LAB_00102f48;
 }
 uVar22 = (unsigned long)((uVar4 ^ uVar5) >> 0x1f);
 uVar7 = uVar7 | 2;
 lVar23 = lVar13 + 0x8000;
 uVar17 = 0;
 if (uVar7 < 0xb) {
 uVar21 = 0;
 lVar12 = 2;
 goto LAB_00102ecc;
 }
 lVar9 = 2;
 uVar15 = 0;
LAB_00103524:
 lVar23 = lVar13 + 0x8000;
 if (uVar7 != 0xf) {
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 if (uVar7 != 0xb) goto LAB_00102e88;
 goto LAB_00102f8c;
 }
 if (((uVar19 >> 0x2f & 1) == 0) || (uVar15 >> 0x2f != 0)) {
 uVar15 = uVar19 & 0xffffffffffff | 0x800000000000;
 uVar4 = 0x7fff;
 }
 else {
 uVar15 = uVar15 | 0x800000000000;
 uVar4 = 0x7fff;
 uVar11 = uVar17;
 uVar10 = uVar14;
 }
 }
LAB_00102efc:
 uVar15 = uVar15 | (unsigned long)(uVar4 | (int)uVar10 << 0xf) << 0x30;
 if ((int)uVar6 == 0) {
 auVar31._8_8_ = uVar15;
 auVar31._0_8_ = uVar11;
 return auVar31;
 }
LAB_001033b4:
 (void)__sfp_handle_exceptions(uVar6);
 auVar2._8_8_ = uVar15;
 auVar2._0_8_ = uVar11;
 return auVar2;
}



/* Function: __sfp_handle_exceptions @ 001035c0 */

unsigned long __sfp_handle_exceptions(unsigned long param_1)

{
 long uVar1;
 unsigned int uVar2;
 
 uVar2 = (unsigned int)param_1;
 if ((param_1 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 1 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 2 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 3 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 4 & 1) != 0) {
 param_1 = fpsr;
 }
 return param_1;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
