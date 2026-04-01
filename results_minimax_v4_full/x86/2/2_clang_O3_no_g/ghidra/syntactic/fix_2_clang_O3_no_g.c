/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/2/2_clang_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/* Ghidra type definitions */
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef intptr_t unaff_retaddr;

/* Ghidra macro definitions */
typedef uint32_t unkuint10;
typedef unsigned long long ulonglong;
typedef void (*code)(uint);  /* function pointer type */

/* Ghidra helper macros */
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))
#define SUB104(lval, off) (*(long double *)((char *)(&lval) + (off)))
#define ROUND(x) ((int)((x) + 0.5))

/* External data symbols - will be linked from elsewhere */
extern char DAT_000135bf[];
extern char DAT_000135e0[];
extern char DAT_000135fb[];
extern char DAT_00013616[];
extern char DAT_00013270[];

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)(0);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000110ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000111e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000111ed */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: process_char @ 00011200 */

uint process_char(uint param_1)

{
 uint uVar1;
 
 uVar1 = (uint)(byte)((char)param_1 + 0x20);
 if (0x19 < (byte)((char)param_1 + 0xbfU)) {
 uVar1 = param_1;
 }
 return uVar1;
}



/* Function: process_short @ 00011220 */

short process_short(short param_1,short param_2)

{
 return param_2 + param_1;
}



/* Function: process_int @ 00011230 */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: process_long @ 00011240 */

int process_long(int param_1)

{
 return param_1 * 2;
}



/* Function: process_ll @ 00011250 */

undefined8 process_ll(uint param_1,int param_2)

{
 return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_2 * param_1 * 2,
 (int)((ulonglong)param_1 * (ulonglong)param_1));
}



/* Function: FUN_00011275 @ 00011275 */

long double FUN_00011275(undefined4 param_1,float param_2)

{
 int unaff_retaddr;
 
 return (long double)param_2 * (long double)*(float *)(unaff_retaddr + 0x1d93) +
 (long double)*(float *)(unaff_retaddr + 0x1d97);
}



/* Function: FUN_00011295 @ 00011295 */

long double FUN_00011295(undefined4 param_1,double param_2)

{
 int unaff_retaddr;
 
 return (long double)param_2 * (long double)*(float *)(unaff_retaddr + 0x1d77) +
 (long double)*(double *)(unaff_retaddr + 0x1d83);
}



/* Function: process_ld @ 000112b0 */

long double process_ld(long double param_1)

{
 return (long double)1 + param_1 * param_1;
}



/* Function: process_bool @ 000112c0 */

bool process_bool(uint param_1)

{
 return (param_1 & 1) == 0 && 0 < (int)param_1;
}



/* Function: const_param @ 000112e0 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 000112f0 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 00011300 */

void test_data_types_l1(void)

{
 long double lVar1;
 
 puts(&DAT_000135bf);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000,0);
 printf("DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
 printf("DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
 lVar1 = (long double)10.0;
 printf("DT-L1-08 (process_ld): %.2Lf\n",SUB104(lVar1,0),(int)((unkuint10)lVar1 >> 0x20),
 (short)((unkuint10)lVar1 >> 0x40));
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 00011430 */

int array_1d_stack(int param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 if (param_2 - 1 < 7) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4) + *(int *)(param_1 + 4 + uVar2 * 4) +
 *(int *)(param_1 + 8 + uVar2 * 4) + *(int *)(param_1 + 0xc + uVar2 * 4) +
 *(int *)(param_1 + 0x10 + uVar2 * 4) + *(int *)(param_1 + 0x14 + uVar2 * 4) +
 *(int *)(param_1 + 0x18 + uVar2 * 4) + *(int *)(param_1 + 0x1c + uVar2 * 4);
 uVar2 = uVar2 + 8;
 } while ((param_2 & 0xfffffff8) != uVar2);
 }
 if ((param_2 & 7) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4 + uVar3 * 4);
 uVar3 = uVar3 + 1;
 } while ((param_2 & 7) != uVar3);
 }
 }
 return iVar1;
}



/* Function: array_string @ 000114a0 */

void array_string(int param_1)

{
 char *pcVar1;
 int iVar2;
 
 iVar2 = -1;
 do {
 pcVar1 = (char *)(param_1 + 1 + iVar2);
 iVar2 = iVar2 + 1;
 } while (*pcVar1 != '\0');
 return;
}



/* Function: array_2d_stack @ 000114c0 */

int array_2d_stack(int *param_1)

{
 return param_1[0xb] + *param_1 + param_1[0x16] + param_1[0x21] + param_1[0x2c] + param_1[0x37] +
 param_1[0x42] + param_1[0x4d] + param_1[0x58] + param_1[99];
}



/* Function: array_3d @ 00011500 */

int array_3d(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2) + *(int *)(param_1 + 4 + iVar2) +
 *(int *)(param_1 + 8 + iVar2) + *(int *)(param_1 + 0xc + iVar2) +
 *(int *)(param_1 + 0x10 + iVar2) + *(int *)(param_1 + 0x14 + iVar2) +
 *(int *)(param_1 + 0x18 + iVar2) + *(int *)(param_1 + 0x1c + iVar2) +
 *(int *)(param_1 + 0x20 + iVar2) + *(int *)(param_1 + 0x24 + iVar2) +
 *(int *)(param_1 + 0x28 + iVar2) + *(int *)(param_1 + 0x2c + iVar2) +
 *(int *)(param_1 + 0x30 + iVar2) + *(int *)(param_1 + 0x34 + iVar2) +
 *(int *)(param_1 + 0x38 + iVar2) + *(int *)(param_1 + 0x3c + iVar2) +
 *(int *)(param_1 + 0x40 + iVar2) + *(int *)(param_1 + 0x44 + iVar2) +
 *(int *)(param_1 + 0x48 + iVar2) + *(int *)(param_1 + 0x4c + iVar2) +
 *(int *)(param_1 + 0x50 + iVar2) + *(int *)(param_1 + 0x54 + iVar2) +
 *(int *)(param_1 + 0x58 + iVar2) + *(int *)(param_1 + 0x5c + iVar2) +
 *(int *)(param_1 + 0x60 + iVar2);
 iVar2 = iVar2 + 100;
 } while (iVar2 != 500);
 return iVar1;
}



/* Function: array_vla @ 00011580 */

int array_vla(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 
 if ((int)param_1 < 1) {
 iVar1 = 0;
 }
 else {
 if (param_1 - 1 < 7) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_2 + uVar2 * 4) + *(int *)(param_2 + 4 + uVar2 * 4) +
 *(int *)(param_2 + 8 + uVar2 * 4) + *(int *)(param_2 + 0xc + uVar2 * 4) +
 *(int *)(param_2 + 0x10 + uVar2 * 4) + *(int *)(param_2 + 0x14 + uVar2 * 4) +
 *(int *)(param_2 + 0x18 + uVar2 * 4) + *(int *)(param_2 + 0x1c + uVar2 * 4);
 uVar2 = uVar2 + 8;
 } while ((param_1 & 0xfffffff8) != uVar2);
 }
 if ((param_1 & 7) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_2 + uVar2 * 4 + uVar3 * 4);
 uVar3 = uVar3 + 1;
 } while ((param_1 & 7) != uVar3);
 }
 }
 return iVar1;
}



/* Function: array_pointer @ 000115f0 */

int array_pointer(int *param_1,uint param_2)

{
 int iVar1;
 int *piVar2;
 uint uVar3;
 int iVar4;
 
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 if (param_2 - 1 < 3) {
 uVar3 = 0;
 iVar1 = 0;
 }
 else {
 uVar3 = 0;
 iVar1 = 0;
 piVar2 = param_1;
 do {
 iVar1 = iVar1 + *piVar2 + piVar2[10] + piVar2[0x14] + piVar2[0x1e];
 uVar3 = uVar3 + 4;
 piVar2 = piVar2 + 0x28;
 } while ((param_2 & 0xfffffffc) != uVar3);
 }
 if ((param_2 & 3) != 0) {
 iVar4 = 0;
 do {
 iVar1 = iVar1 + *(int *)((int)param_1 + iVar4 + uVar3 * 0x28);
 iVar4 = iVar4 + 0x28;
 } while ((param_2 & 3) * 0x28 != iVar4);
 }
 }
 return iVar1;
}



/* Function: pointer_array @ 00011660 */

int pointer_array(int param_1,uint param_2)

{
 int *piVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 
 if (0 < (int)param_2) {
 uVar3 = 10;
 if (param_2 < 10) {
 uVar3 = param_2;
 }
 if (uVar3 == 1) {
 uVar4 = 0;
 iVar2 = 0;
 }
 else {
 uVar4 = 0;
 iVar2 = 0;
 do {
 piVar1 = *(int **)(param_1 + uVar4 * 4);
 if (piVar1 != (int *)0x0) {
 iVar2 = iVar2 + *piVar1;
 }
 piVar1 = *(int **)(param_1 + 4 + uVar4 * 4);
 if (piVar1 != (int *)0x0) {
 iVar2 = iVar2 + *piVar1;
 }
 uVar4 = uVar4 + 2;
 } while ((uVar3 & 0xe) != uVar4);
 }
 if (((uVar3 & 1) != 0) && (piVar1 = *(int **)(param_1 + uVar4 * 4), piVar1 != (int *)0x0)) {
 iVar2 = iVar2 + *piVar1;
 }
 return iVar2;
 }
 return 0;
}



/* Function: array_complex_index @ 000116d0 */

undefined4 array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if ((((-1 < param_4) && (param_5 < param_3)) && (param_4 < param_2)) && (-1 < param_5)) {
 uVar1 = *(undefined4 *)(param_1 + (param_5 * param_2 + param_4) * 4);
 }
 return uVar1;
}



/* Function: array_oob @ 00011710 */

int array_oob(int param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 
 if ((int)param_2 < 0) {
 iVar1 = 0;
 }
 else {
 uVar2 = param_2 + 1 & 7;
 if (param_2 < 7) {
 uVar3 = 0;
 iVar1 = 0;
 }
 else {
 uVar3 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar3 * 4) + *(int *)(param_1 + 4 + uVar3 * 4) +
 *(int *)(param_1 + 8 + uVar3 * 4) + *(int *)(param_1 + 0xc + uVar3 * 4) +
 *(int *)(param_1 + 0x10 + uVar3 * 4) + *(int *)(param_1 + 0x14 + uVar3 * 4) +
 *(int *)(param_1 + 0x18 + uVar3 * 4) + *(int *)(param_1 + 0x1c + uVar3 * 4);
 uVar3 = uVar3 + 8;
 } while ((param_2 + 1 & 0xfffffff8) != uVar3);
 }
 if (uVar2 != 0) {
 uVar4 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar3 * 4 + uVar4 * 4);
 uVar4 = uVar4 + 1;
 } while (uVar2 != uVar4);
 }
 }
 return iVar1;
}



/* Function: test_array_types @ 00011780 */

void test_array_types(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 local_1f8 [125];
 
 puts(&DAT_000135e0);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 printf("ARR-L1-03 (array_2d_stack): %d\n",0x2d);
 iVar1 = 0;
 do {
 *(undefined4 *)((int)local_1f8 + iVar1) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 4) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 8) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0xc) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x10) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x14) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x18) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x1c) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x20) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x24) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x28) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x2c) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x30) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x34) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x38) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x3c) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x40) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x44) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x48) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x4c) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x50) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x54) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x58) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x5c) = 1;
 *(undefined4 *)((int)local_1f8 + iVar1 + 0x60) = 1;
 iVar1 = iVar1 + 100;
 } while (iVar1 != 500);
 uVar2 = array_3d(local_1f8);
 printf("ARR-L1-04 (array_3d): %d\n",uVar2);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 printf("ARR-L2-02 (array_pointer): %d\n",100);
 printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
 printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
 return;
}



/* Function: ptr_single @ 00011dc0 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00011dd0 */

int ptr_double(undefined4 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00011de0 */

int ptr_triple(undefined4 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00011df0 */

int ptr_increment(int *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 if (0 < (int)param_2) {
 if (param_2 - 1 < 7) {
 iVar1 = 0;
 }
 else {
 uVar2 = param_2 & 0xfffffff8;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1 + param_1[1] + param_1[2] + param_1[3] + param_1[4] + param_1[5] +
 param_1[6] + param_1[7];
 param_1 = param_1 + 8;
 uVar2 = uVar2 - 8;
 } while (uVar2 != 0);
 }
 if ((param_2 & 7) != 0) {
 uVar2 = 0;
 do {
 iVar1 = iVar1 + param_1[uVar2];
 uVar2 = uVar2 + 1;
 } while ((param_2 & 7) != uVar2);
 }
 return iVar1;
 }
 return 0;
}



/* Function: ptr_offset @ 00011e60 */

undefined4 ptr_offset(int param_1,int param_2)

{
 return *(undefined4 *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 00011e70 */

int ptr_diff(int param_1,int param_2)

{
 return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 00011e80 */

int ptr_void(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 1) {
 iVar1 = (int)(char)*param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 0) {
 return *param_1;
 }
 }
 return iVar1;
}



/* Function: ptr_const @ 00011ea0 */

int ptr_const(int *param_1)

{
 return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 00011eb0 */

void ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return;
}



/* Function: ptr_func_simple @ 00011ec0 */

void ptr_func_simple(code *param_1,undefined4 param_2)

{
 (*param_1)(param_2);
 return;
}



/* Function: ptr_func_complex @ 00011ee0 */

void ptr_func_complex(code *param_1,undefined4 param_2)

{
 undefined *local_c;
 undefined4 local_8;
 
 local_c = &DAT_00013270;
 local_8 = 0;
 (*param_1)(param_2);
 return;
}



/* Function: ptr_cast @ 00011f20 */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00011f30 */

undefined4 opaque_handle_create(undefined4 param_1)

{
 return param_1;
}



/* Function: opaque_handle_op @ 00011f40 */

int opaque_handle_op(int param_1)

{
 return param_1 * 2;
}



/* Function: test_pointer_types @ 00011f50 */

void test_pointer_types(void)

{
 puts(&DAT_000135fb);
 printf("PTR-L2-01 (ptr_single): %d\n",0xf);
 printf("PTR-L2-02 (ptr_double): %d\n",0xf);
 printf("PTR-L2-03 (ptr_triple): %d\n",6);
 printf("PTR-L2-04 (ptr_increment): %d\n",0xf);
 printf("PTR-L2-05 (ptr_offset): %d\n",0x1e);
 printf("PTR-L2-06 (ptr_diff): %d\n",4);
 printf("PTR-L2-07 (ptr_void): %d\n",0x2a);
 printf("PTR-L2-07 (ptr_void): %d\n",0x41);
 printf("PTR-L2-08 (ptr_const): %d\n",0x14);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",10);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",1);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 printf("PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 return;
}



/* Function: struct_simple @ 000120b0 */

int struct_simple(int *param_1)

{
 return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 000120c0 */

int struct_array(int param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 int *piVar3;
 
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 if (param_2 == 1) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 piVar3 = (int *)(param_1 + 0x14);
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + piVar3[-5] + piVar3[-4] + piVar3[-3] + piVar3[-2] + piVar3[-1] + *piVar3;
 uVar2 = uVar2 + 2;
 piVar3 = piVar3 + 6;
 } while ((param_2 & 0xfffffffe) != uVar2);
 }
 if ((param_2 & 1) != 0) {
 return iVar1 + *(int *)(param_1 + uVar2 * 0xc) + *(int *)(param_1 + 4 + uVar2 * 0xc) +
 *(int *)(param_1 + 8 + uVar2 * 0xc);
 }
 }
 return iVar1;
}



/* Function: struct_nested @ 00012130 */

int struct_nested(int *param_1)

{
 return param_1[3] + *param_1;
}



/* Function: struct_deep @ 00012140 */

int struct_deep(int param_1)

{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 00012150 */

int struct_with_ptr(int *param_1)

{
 if ((int *)param_1[1] != (int *)0x0) {
 return *(int *)param_1[1] + *param_1;
 }
 return *param_1;
}



/* Function: struct_bitfields @ 00012170 */

short struct_bitfields(ushort *param_1)

{
 ushort uVar1;
 
 uVar1 = *param_1;
 return (uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 000121a0 */

float union_type(float *param_1,int param_2)

{
 if (param_2 == 1) {
 return (float)(int)ROUND(*param_1);
 }
 if (param_2 == 0) {
 return *param_1;
 }
 return (float)(int)*(char *)param_1;
}



/* Function: union_array @ 000121f0 */

int union_array(int param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 if (param_2 - 1 < 7) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4) + *(int *)(param_1 + 4 + uVar2 * 4) +
 *(int *)(param_1 + 8 + uVar2 * 4) + *(int *)(param_1 + 0xc + uVar2 * 4) +
 *(int *)(param_1 + 0x10 + uVar2 * 4) + *(int *)(param_1 + 0x14 + uVar2 * 4) +
 *(int *)(param_1 + 0x18 + uVar2 * 4) + *(int *)(param_1 + 0x1c + uVar2 * 4);
 uVar2 = uVar2 + 8;
 } while ((param_2 & 0xfffffff8) != uVar2);
 }
 if ((param_2 & 7) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4 + uVar3 * 4);
 uVar3 = uVar3 + 1;
 } while ((param_2 & 7) != uVar3);
 }
 }
 return iVar1;
}



/* Function: enum_type @ 00012260 */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: FUN_00012275 @ 00012275 */

undefined4 FUN_00012275(undefined4 param_1,uint param_2)

{
 undefined4 uVar1;
 int unaff_retaddr;
 
 uVar1 = 0xffffff9d;
 if (param_2 < 4) {
 uVar1 = *(undefined4 *)(unaff_retaddr + 0x13cb + param_2 * 4);
 }
 return uVar1;
}



/* Function: struct_func_ptr @ 000122a0 */

void struct_func_ptr(undefined4 *param_1)

{
 (*(code *)param_1[1])(*param_1);
 return;
}



/* Function: linked_list @ 000122d0 */

int linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 000122f0 */

int doubly_linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 00012310 */

int binary_tree_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar3 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[2]) {
 iVar1 = *param_1;
 iVar2 = binary_tree_sum(param_1[1]);
 iVar3 = iVar3 + iVar1 + iVar2;
 }
 return iVar3;
}



/* Function: binary_tree @ 00012350 */

void binary_tree(undefined4 param_1)

{
 binary_tree_sum(param_1);
 return;
}



/* Function: graph_traverse @ 00012380 */

int graph_traverse(undefined4 *param_1)

{
 uint uVar1;
 int *piVar2;
 int iVar3;
 uint uVar4;
 
 uVar1 = param_1[10];
 if (0 < (int)uVar1) {
 if (uVar1 == 1) {
 uVar4 = 0;
 iVar3 = 0;
 }
 else {
 uVar4 = 0;
 iVar3 = 0;
 piVar2 = (int *)*param_1;
 while( true ) {
 for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
 iVar3 = iVar3 + *piVar2;
 }
 for (piVar2 = *(int **)((int)param_1 + (uVar4 * 4 | 4)); piVar2 != (int *)0x0;
 piVar2 = (int *)piVar2[1]) {
 iVar3 = iVar3 + *piVar2;
 }
 uVar4 = uVar4 + 2;
 if (uVar4 == (uVar1 & 0xfffffffe)) break;
 piVar2 = (int *)param_1[uVar4];
 }
 }
 if ((uVar1 & 1) != 0) {
 for (piVar2 = (int *)param_1[uVar4]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
 iVar3 = iVar3 + *piVar2;
 }
 }
 return iVar3;
 }
 return 0;
}



/* Function: test_composite_types @ 00012420 */

void test_composite_types(void)

{
 int *piVar1;
 undefined4 uVar2;
 int iVar3;
 bool bVar4;
 int local_44;
 undefined4 *local_40;
 undefined4 local_3c;
 undefined4 *local_38;
 undefined4 local_34;
 undefined4 local_30;
 undefined4 local_2c;
 undefined4 local_28;
 undefined4 local_24;
 int local_1c;
 undefined4 *local_18;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 int *local_8;
 
 puts(&DAT_00013616);
 printf("CMP-L2-01 (struct_simple): %d\n",6);
 printf("CMP-L2-02 (struct_array): %d\n",9);
 printf("CMP-L2-03 (struct_nested): %d\n",0x69);
 printf("CMP-L2-04 (struct_deep): %d\n",0x102);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",0x1e);
 printf("CMP-L2-06 (struct_bitfields): %d\n",0x6a);
 printf("CMP-L2-07 (union_type): %d\n",0x12345678);
 printf("CMP-L2-08 (union_array): %d\n",0x3c);
 printf("CMP-L2-09 (enum_type): %d\n",10);
 printf("CMP-L2-10 (enum_switch): %d\n",0x32);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",0x15);
 piVar1 = &local_44;
 local_44 = 10;
 local_40 = &local_3c;
 local_3c = 0x14;
 local_38 = &local_34;
 local_34 = 0x1e;
 local_30 = 0;
 iVar3 = 0;
 do {
 iVar3 = iVar3 + *piVar1;
 piVar1 = (int *)piVar1[1];
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",iVar3);
 piVar1 = &local_1c;
 local_1c = 10;
 local_14 = 0;
 local_10 = 0x14;
 local_c = 0;
 local_8 = piVar1;
 local_18 = &local_10;
 iVar3 = 0;
 do {
 iVar3 = iVar3 + *piVar1;
 piVar1 = (int *)piVar1[1];
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
 local_24 = 0;
 local_28 = 0;
 local_2c = 100;
 uVar2 = binary_tree_sum(&local_2c);
 printf("CMP-L2-14 (binary_tree): %d\n",uVar2);
 iVar3 = 1;
 piVar1 = (int *)0x0;
 bVar4 = false;
 while (bVar4) {
 iVar3 = iVar3 + *piVar1;
 piVar1 = (int *)piVar1[1];
 bVar4 = piVar1 != (int *)0x0;
 }
 printf("CMP-L2-15 (graph_traverse): %d\n",iVar3);
 return;
}



/* Function: main @ 00012660 */

undefined4 main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 67 */

/* String data definitions */
char DAT_000135bf[] = "=== Data Types Test ===";
char DAT_000135e0[] = "=== Array Types Test ===";
char DAT_000135fb[] = "=== Pointer Types Test ===";
char DAT_00013616[] = "=== Composite Types Test ===";
char DAT_00013270[] = "";
