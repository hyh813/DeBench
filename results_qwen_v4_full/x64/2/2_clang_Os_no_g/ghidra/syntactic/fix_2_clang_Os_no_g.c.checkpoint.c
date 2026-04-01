/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/2/2_clang_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

#include <stdbool.h>
#include <stdio.h>

typedef unsigned int uint;
typedef unsigned long ulong;
typedef void* undefined;
typedef void (*code)(void);
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned short ushort;

/* Ghidra helper macro for extracting 32-bit values from 128-bit values */
#define SUB164(val, offset) (*(int*)((char*)&(val) + (offset)))

/* Global data definitions for external symbols */
char DAT_0010266f[] = "";
undefined8 DAT_001026ab = 0;
undefined8 DAT_001020d0 = 0;
char DAT_001026c6[] = "";
undefined8 DAT_00102050 = 0;
char DAT_00102690[] = "";

/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: process_char @ 0010114c */

uint process_char(uint param_1)

{
 uint uVar1;
 
 uVar1 = param_1 + 0x20 & 0xff;
 if (0x19 < (byte)((char)param_1 + 0xbfU)) {
 uVar1 = param_1;
 }
 return uVar1;
}



/* Function: process_short @ 0010115b */

int process_short(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: process_int @ 0010115f */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: process_long @ 00101165 */

long process_long(long param_1)

{
 return param_1 * 2;
}



/* Function: process_ll @ 0010116a */

long process_ll(long param_1)

{
 return param_1 * param_1;
}



/* Function: process_float @ 00101172 */

float process_float(float param_1)

{
 return param_1 * 1.5 + 0.5;
}



/* Function: process_double @ 00101183 */

double process_double(double param_1)

{
 return param_1 * 0.5 + 0.1;
}



/* Function: process_ld @ 00101194 */

void process_ld(void)

{
 return;
}



/* Function: process_bool @ 0010119f */

bool process_bool(uint param_1)

{
 return (param_1 & 1) == 0 && 0 < (int)param_1;
}



/* Function: const_param @ 001011ae */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 001011b4 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 001011b9 */

extern char DAT_0010266f[];
extern undefined8 DAT_001026ab;
extern undefined8 DAT_001020d0;
extern char DAT_001026c6[];

void test_data_types_l1(void)

{
 puts(DAT_0010266f);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000);
 printf("DT-L1-06 (process_float): %.2f\n",0x400c000000000000);
 printf("DT-L1-07 (process_double): %.2f\n",0x4000cccccccccccd);
 printf("DT-L1-08 (process_ld): %.2Lf\n",0.0);
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 001012e2 */

int array_1d_stack(long param_1,uint param_2)

{
 int iVar1;
 ulong uVar2;
 
 if (0 < (int)param_2) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
 uVar2 = uVar2 + 1;
 } while (param_2 != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: array_string @ 001012fb */

int array_string(char *param_1)

{
 char cVar1;
 int iVar2;
 
 iVar2 = -1;
 do {
 iVar2 = iVar2 + 1;
 cVar1 = *param_1;
 param_1 = param_1 + 1;
 } while (cVar1 != '\0');
 return iVar2;
}



/* Function: array_2d_stack @ 0010130c */

int array_2d_stack(long param_1)

{
 int iVar1;
 long lVar2;
 
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2);
 lVar2 = lVar2 + 0x2c;
 } while (lVar2 != 0x1b8);
 return iVar1;
}



/* Function: array_3d @ 00101321 */

int array_3d(long param_1)

{
 int iVar1;
 long lVar2;
 long lVar3;
 long lVar4;
 long lVar5;
 
 lVar5 = 0;
 iVar1 = 0;
 do {
 lVar4 = 0;
 lVar3 = param_1;
 do {
 lVar2 = 0;
 do {
 iVar1 = iVar1 + *(int *)(lVar3 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while (lVar2 != 5);
 lVar4 = lVar4 + 1;
 lVar3 = lVar3 + 0x14;
 } while (lVar4 != 5);
 lVar5 = lVar5 + 1;
 param_1 = param_1 + 100;
 } while (lVar5 != 5);
 return iVar1;
}



/* Function: array_vla @ 00101354 */

int array_vla(uint param_1,long param_2)

{
 int iVar1;
 ulong uVar2;
 
 if (0 < (int)param_1) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_2 + uVar2 * 4);
 uVar2 = uVar2 + 1;
 } while (param_1 != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: array_pointer @ 0010136d */

int array_pointer(long param_1,uint param_2)

{
 int iVar1;
 long lVar2;
 
 if (0 < (int)param_2) {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2);
 lVar2 = lVar2 + 0x28;
 } while ((ulong)param_2 * 0x28 != lVar2);
 return iVar1;
 }
 return 0;
}



/* Function: pointer_array @ 0010138f */

int pointer_array(long param_1,uint param_2)

{
 int *piVar1;
 int iVar2;
 ulong uVar3;
 ulong uVar4;
 
 if (0 < (int)param_2) {
 uVar3 = 10;
 if (param_2 < 10) {
 uVar3 = (ulong)param_2;
 }
 uVar4 = 0;
 iVar2 = 0;
 do {
 piVar1 = *(int **)(param_1 + uVar4 * 8);
 if (piVar1 != (int *)0x0) {
 iVar2 = iVar2 + *piVar1;
 }
 uVar4 = uVar4 + 1;
 } while (uVar3 != uVar4);
 return iVar2;
 }
 return 0;
}



/* Function: array_complex_index @ 001013b9 */

undefined4 array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if ((((-1 < param_4) && (param_5 < param_3)) && (param_4 < param_2)) && (-1 < param_5)) {
 uVar1 = *(undefined4 *)(param_1 + (long)(param_5 * param_2 + param_4) * 4);
 }
 return uVar1;
}



/* Function: array_oob @ 001013de */

int array_oob(long param_1,int param_2)

{
 int iVar1;
 ulong uVar2;
 
 if (-1 < param_2) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
 uVar2 = uVar2 + 1;
 } while (param_2 + 1 != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: test_array_types @ 001013f7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _DAT_00102030 = 0;
undefined8 _DAT_00102040 = 0;
extern char DAT_00102690[];
extern undefined8 DAT_00102050;

void test_array_types(void)

{
 bool bVar1;
 undefined1 *puVar2;
 int *piVar3;
 undefined1 *puVar4;
 long lVar5;
 long lVar6;
 undefined4 uVar7;
 long lVar8;
 ulong uVar9;
 undefined8 auVar10;
 int iVar11;
 int iVar12;
 undefined4 local_514;
 undefined4 local_510;
 int local_50c;
 int *local_508;
 undefined4 *local_500 [2];
 undefined1 local_4f0 [16];
 undefined1 local_4e0 [16];
 undefined1 local_4d0 [16];
 undefined8 local_4c0;
 undefined8 local_4b8;
 undefined8 uStack_4b0;
 undefined8 local_4a8;
 undefined8 uStack_4a0;
 undefined8 local_498;
 undefined8 uStack_490;
 undefined8 local_488;
 undefined8 uStack_480;
 undefined8 local_478;
 undefined8 uStack_470;
 int aiStack_468 [53];
 undefined1 local_394 [396];
 undefined1 local_208 [512];
 
 puts(DAT_00102690);
 lVar6 = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 puVar2 = local_394;
 do {
 lVar5 = 0;
 auVar10 = _DAT_00102030;
 do {
  local_4c0 = auVar10 ^ _DAT_00102040;
  bVar1 = SUB164(local_4c0,0) < (int)DAT_00102050;
  iVar11 = SUB164(local_4c0,4);
  iVar12 = SUB164(DAT_00102050,4);
 if (iVar11 < iVar12 || iVar11 == iVar12 && bVar1) {
 uVar7 = 0;
 if (lVar6 == lVar5) {
 uVar7 = (int)lVar6;
 }
 *(undefined4 *)(puVar2 + lVar5 * 4 + -4) = uVar7;
 }
 if (iVar11 < iVar12 || iVar11 == iVar12 && bVar1) {
 uVar7 = 0;
 if (lVar6 + -1 == lVar5) {
 uVar7 = (int)lVar6;
 }
 *(undefined4 *)(puVar2 + lVar5 * 4) = uVar7;
 }
  lVar5 = lVar5 + 2;
 auVar10 = _DAT_00102030 + lVar6 + 1;
 } while (lVar5 != 10);
 lVar6 = lVar6 + 1;
 puVar2 = puVar2 + 0x28;
 } while (lVar6 != 10);
 lVar6 = 0;
 do {
 lVar6 = lVar6 + 0x2c;
 } while (lVar6 != 0x1b8);
 lVar6 = 0;
 printf("ARR-L1-03 (array_2d_stack): %d\n",0);
 puVar2 = local_208;
 do {
 lVar5 = 0;
 puVar4 = puVar2;
 do {
 lVar8 = 0;
 do {
 *(undefined4 *)(puVar4 + lVar8 * 4) = 1;
 lVar8 = lVar8 + 1;
 } while (lVar8 != 5);
 lVar5 = lVar5 + 1;
 puVar4 = puVar4 + 0x14;
 } while (lVar5 != 5);
 lVar6 = lVar6 + 1;
 puVar2 = puVar2 + 100;
 } while (lVar6 != 5);
 lVar6 = 0;
 puVar2 = local_208;
 uVar9 = 0;
 do {
 lVar5 = 0;
 puVar4 = puVar2;
 do {
 lVar8 = 0;
 do {
 uVar9 = (ulong)(uint)((int)uVar9 + *(int *)(puVar4 + lVar8 * 4));
 lVar8 = lVar8 + 1;
 } while (lVar8 != 5);
 lVar5 = lVar5 + 1;
 puVar4 = puVar4 + 0x14;
 } while (lVar5 != 5);
 lVar6 = lVar6 + 1;
 puVar2 = puVar2 + 100;
 } while (lVar6 != 5);
 lVar6 = 0;
 printf("ARR-L1-04 (array_3d): %d\n",uVar9);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 do {
 aiStack_468[lVar6] = (int)lVar6;
 lVar6 = lVar6 + 10;
 } while (lVar6 != 0x32);
 lVar6 = 0;
 uVar9 = 0;
 do {
 uVar9 = (ulong)(uint)((int)uVar9 + *(int *)((long)aiStack_468 + lVar6));
 lVar6 = lVar6 + 0x28;
 } while (lVar6 != 200);
 lVar6 = 0;
 printf("ARR-L2-02 (array_pointer): %d\n",uVar9);
 piVar3 = &local_50c;
 local_50c = 10;
 local_510 = 0x14;
 local_514 = 0x1e;
 local_508 = piVar3;
 local_500[0] = &local_510;
 local_500[1] = &local_514;
  local_4c0 = 0;
 uVar9 = 0;
 while( true ) {
 if (piVar3 != (int *)0x0) {
 uVar9 = (ulong)(uint)((int)uVar9 + *piVar3);
 }
 if (lVar6 == 2) break;
 piVar3 = local_500[lVar6];
 lVar6 = lVar6 + 1;
 }
 printf("ARR-L2-03 (pointer_array): %d\n",uVar9);
 local_4b8 = 0x100000000;
 uStack_4b0 = 0x300000002;
 local_4a8 = 0x500000004;
 uStack_4a0 = 0x700000006;
 local_498 = 0x900000008;
 uStack_490 = 0xb0000000a;
 local_488 = 0xd0000000c;
 uStack_480 = 0xf0000000e;
 local_478 = 0x1100000010;
 uStack_470 = 0x1300000012;
 printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
 return;
}



/* Function: ptr_single @ 001016a5 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 001016ab */

int ptr_double(undefined8 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 001016b4 */

int ptr_triple(undefined8 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 001016bf */

int ptr_increment(long param_1,int param_2)

{
 int iVar1;
 long lVar2;
 
 if (0 < param_2) {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while (param_2 != (int)lVar2);
 return iVar1;
 }
 return 0;
}



/* Function: ptr_offset @ 001016d7 */

undefined4 ptr_offset(long param_1,int param_2)

{
 return *(undefined4 *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 001016de */

ulong ptr_diff(long param_1,long param_2)

{
 return (ulong)(param_1 - param_2) >> 2;
}



/* Function: ptr_void @ 001016e9 */

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



/* Function: ptr_const @ 001016fe */

int ptr_const(int *param_1)

{
 return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 00101703 */

void ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return;
}



/* Function: ptr_func_simple @ 0010170b */

void ptr_func_simple(void)

{
 return;
}



/* Function: ptr_func_complex @ 00101712 */

void ptr_func_complex(void)

{
 return;
}



/* Function: ptr_cast @ 00101733 */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00101736 */

long opaque_handle_create(int param_1)

{
 return (long)param_1;
}



/* Function: opaque_handle_op @ 0010173a */

int opaque_handle_op(int param_1)

{
 return param_1 * 2;
}



/* Function: test_pointer_types @ 0010173e */

void test_pointer_types(void)

{
 puts(&DAT_001026ab);
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



/* Function: struct_simple @ 00101855 */

int struct_simple(int *param_1)

{
 return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 0010185e */

int struct_array(long param_1,uint param_2)

{
 int iVar1;
 long lVar2;
 
 if (0 < (int)param_2) {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2) + *(int *)(param_1 + 4 + lVar2) +
 *(int *)(param_1 + 8 + lVar2);
 lVar2 = lVar2 + 0xc;
 } while ((ulong)param_2 * 0xc != lVar2);
 return iVar1;
 }
 return 0;
}



/* Function: struct_nested @ 00101888 */

int struct_nested(int *param_1)

{
 return param_1[3] + *param_1;
}



/* Function: struct_deep @ 0010188e */

int struct_deep(long param_1)

{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 00101895 */

int struct_with_ptr(int *param_1)

{
 int iVar1;
 
 if (*(int **)(param_1 + 2) == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = **(int **)(param_1 + 2);
 }
 return iVar1 + *param_1;
}



/* Function: struct_bitfields @ 001018a9 */

short struct_bitfields(ushort *param_1)

{
 ushort uVar1;
 
 uVar1 = *param_1;
 return (uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 001018ca */

float union_type(float *param_1,int param_2)

{
 if (param_2 == 1) {
 return (float)(int)*param_1;
 }
 if (param_2 == 0) {
 return *param_1;
 }
 return (float)(int)*(char *)param_1;
}



/* Function: union_array @ 001018df */

int union_array(long param_1,uint param_2)

{
 int iVar1;
 ulong uVar2;
 
 if (0 < (int)param_2) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
 uVar2 = uVar2 + 1;
 } while (param_2 != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: enum_type @ 001018f8 */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 001018fe */

undefined4 enum_switch(uint param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffff9d;
 if (param_1 < 4) {
 uVar1 = *(undefined4 *)(&DAT_001020d0 + (long)(int)param_1 * 4);
 }
 return uVar1;
}



/* Function: struct_func_ptr @ 00101916 */

void struct_func_ptr(void)

{
 return;
}



/* Function: linked_list @ 0010191e */

int linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 0010192e */

int doubly_linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 0010193e */

int binary_tree_sum(void)

{
 return 0;
}



/* Function: graph_traverse @ 00101976 */

int graph_traverse(long param_1)

{
 int iVar1;
 ulong uVar2;
 int *piVar3;
 
 if (0 < (int)*(uint *)(param_1 + 0x50)) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 for (piVar3 = *(int **)(param_1 + uVar2 * 8); piVar3 != (int *)0x0;
 piVar3 = *(int **)(piVar3 + 2)) {
 iVar1 = iVar1 + *piVar3;
 }
 uVar2 = uVar2 + 1;
 } while (uVar2 != *(uint *)(param_1 + 0x50));
 return iVar1;
 }
 return 0;
}



/* Function: test_composite_types @ 0010199e */

void test_composite_types(void)

{
 int *piVar1;
 uint uVar2;
 uint uVar3;
 long lVar4;
 ulong uVar5;
 int *local_100 [11];
 int local_a8 [6];
 undefined4 *local_90;
 undefined4 local_88 [2];
 undefined4 *local_80;
 undefined4 local_78 [2];
 undefined8 local_70;
 undefined4 local_68;
 undefined4 uStack_64;
 undefined4 uStack_60;
 undefined4 uStack_5c;
 undefined8 local_58;
 int local_48 [2];
 undefined4 *local_40;
 undefined8 local_38;
 undefined4 local_30 [2];
 undefined8 local_28;
 int *local_20;
 
 puts(&DAT_001026c6);
 uVar3 = 0;
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
 piVar1 = local_a8 + 4;
 local_a8[4] = 10;
 local_90 = local_88;
 local_88[0] = 0x14;
 local_80 = local_78;
 local_78[0] = 0x1e;
 local_70 = 0;
 do {
 uVar3 = uVar3 + *piVar1;
 piVar1 = *(int **)(piVar1 + 2);
 } while (piVar1 != (int *)0x0);
 uVar2 = 0;
 printf("CMP-L2-12 (linked_list): %d\n",(ulong)uVar3);
 piVar1 = local_48;
 local_48[0] = 10;
 local_38 = 0;
 local_30[0] = 0x14;
 local_28 = 0;
 local_20 = piVar1;
 local_40 = local_30;
 do {
 uVar2 = uVar2 + *piVar1;
 piVar1 = *(int **)(piVar1 + 2);
 } while (piVar1 != (int *)0x0);
 lVar4 = 0;
 printf("CMP-L2-13 (doubly_linked_list): %d\n",(ulong)uVar2);
 local_58 = 0;
 local_68 = 100;
 uStack_64 = 0;
 uStack_60 = 0;
 uStack_5c = 0;
 uVar3 = 0;
 printf("CMP-L2-14 (binary_tree): %d\n",uVar3);
 local_100[0] = local_a8;
 local_a8[0] = 1;
 local_a8[1] = 0;
 local_a8[2] = 0;
 local_a8[3] = 0;
 local_100[9] = (int *)0x0;
 local_100[10] = (int *)0x0;
 local_100[7] = (int *)0x0;
 local_100[8] = (int *)0x0;
 local_100[5] = (int *)0x0;
 local_100[6] = (int *)0x0;
 local_100[3] = (int *)0x0;
 local_100[4] = (int *)0x0;
 local_100[1] = (int *)0x0;
 local_100[2] = (int *)0x0;
 uVar5 = 0;
 piVar1 = local_100[0];
 while( true ) {
 for (; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 2)) {
 uVar5 = (ulong)(uint)((int)uVar5 + *piVar1);
 }
 lVar4 = lVar4 + 1;
 if (lVar4 == 2) break;
 piVar1 = local_100[lVar4];
 }
 printf("CMP-L2-15 (graph_traverse): %d\n",uVar5);
 return;
}



/* Function: main @ 00101bbc */

undefined8 main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 61 */
