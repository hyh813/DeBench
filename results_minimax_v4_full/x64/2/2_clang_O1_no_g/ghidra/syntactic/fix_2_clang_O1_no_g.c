/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/2/2_clang_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long undefined8;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned short ushort;
typedef unsigned char byte;
typedef void (*code)();

/* String constants from binary */
char DAT_001025bf[] = "Data Types Level 1";
char DAT_001025e0[] = "Array Types";
char DAT_001025fb[] = "Pointer Types";
char DAT_00102616[] = "Composite Types";
int DAT_00102680[] = { 0, 1, 2, 3 };



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




/* Function: process_char @ 00101150 */

uint process_char(uint param_1)

{
 uint uVar1;
 
 uVar1 = param_1 + 0x20 & 0xff;
 if (0x19 < (byte)((char)param_1 + 0xbfU)) {
 uVar1 = param_1;
 }
 return uVar1;
}



/* Function: process_short @ 00101160 */

int process_short(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: process_int @ 00101170 */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: process_long @ 00101180 */

long process_long(long param_1)

{
 return param_1 * 2;
}



/* Function: process_ll @ 00101190 */

long process_ll(long param_1)

{
 return param_1 * param_1;
}



/* Function: process_float @ 001011a0 */

float process_float(float param_1)

{
 return param_1 * 1.5 + 0.5;
}



/* Function: process_double @ 001011c0 */

double process_double(double param_1)

{
 return param_1 * 0.5 + 0.1;
}



/* Function: process_ld @ 001011e0 */

void process_ld(void)

{
 return;
}



/* Function: process_bool @ 001011f0 */

bool process_bool(uint param_1)

{
 return (param_1 & 1) == 0 && 0 < (int)param_1;
}



/* Function: const_param @ 00101200 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 00101210 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 00101220 */

void test_data_types_l1(void)

{
 puts(&DAT_001025bf);
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



/* Function: array_1d_stack @ 00101350 */

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



/* Function: array_string @ 00101370 */

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



/* Function: array_2d_stack @ 00101390 */

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



/* Function: array_3d @ 001013c0 */

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



/* Function: array_vla @ 00101420 */

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



/* Function: array_pointer @ 00101440 */

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



/* Function: pointer_array @ 00101470 */

int pointer_array(long param_1,uint param_2)

{
 int *piVar1;
 uint uVar2;
 int iVar3;
 ulong uVar4;
 ulong uVar5;
 
 if ((int)param_2 < 1) {
 iVar3 = 0;
 }
 else {
 uVar2 = 10;
 if ((int)param_2 < 10) {
 uVar2 = param_2;
 }
 uVar4 = 1;
 if (1 < (int)uVar2) {
 uVar4 = (ulong)uVar2;
 }
 uVar5 = 0;
 iVar3 = 0;
 do {
 piVar1 = *(int **)(param_1 + uVar5 * 8);
 if (piVar1 != (int *)0x0) {
 iVar3 = iVar3 + *piVar1;
 }
 uVar5 = uVar5 + 1;
 } while (uVar4 != uVar5);
 }
 return iVar3;
}



/* Function: array_complex_index @ 001014b0 */

undefined4 array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if ((((-1 < param_4) && (param_5 < param_3)) && (param_4 < param_2)) && (-1 < param_5)) {
 uVar1 = *(undefined4 *)(param_1 + (long)(param_5 * param_2 + param_4) * 4);
 }
 return uVar1;
}



/* Function: array_oob @ 001014e0 */

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



/* Function: test_array_types @ 00101500 */

void test_array_types(void)

{
 undefined1 *puVar1;
 long lVar2;
 undefined1 *puVar3;
 undefined4 uVar4;
 long lVar5;
 long lVar6;
 ulong uVar7;
 undefined4 local_514;
 undefined4 local_510;
 undefined4 local_50c;
 undefined4 *local_508 [10];
 uint auStack_4b8 [20];
 int aiStack_468 [52];
 undefined1 local_398 [400];
 undefined1 local_208 [512];
 
 puts(&DAT_001025e0);
 lVar5 = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",0);
 puVar1 = local_398;
 do {
 lVar2 = 0;
 do {
 uVar4 = 0;
 if (lVar5 == lVar2) {
 uVar4 = (undefined4)lVar5;
 }
 *(undefined4 *)(puVar1 + lVar2 * 4) = uVar4;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 10);
 lVar5 = lVar5 + 1;
 puVar1 = puVar1 + 0x28;
 } while (lVar5 != 10);
 lVar5 = 0;
 do {
 lVar5 = lVar5 + 0x2c;
 } while (lVar5 != 0x1b8);
 lVar5 = 0;
 printf("ARR-L1-03 (array_2d_stack): %d\n",0x1b8);
 puVar1 = local_208;
 do {
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 lVar6 = 0;
 do {
 *(undefined4 *)(puVar3 + lVar6 * 4) = 1;
 lVar6 = lVar6 + 1;
 } while (lVar6 != 5);
 lVar2 = lVar2 + 1;
 puVar3 = puVar3 + 0x14;
 } while (lVar2 != 5);
 lVar5 = lVar5 + 1;
 puVar1 = puVar1 + 100;
 } while (lVar5 != 5);
 lVar5 = 0;
 puVar1 = local_208;
 uVar7 = 0;
 do {
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 lVar6 = 0;
 do {
 uVar7 = (ulong)(uint)((int)uVar7 + *(int *)(puVar3 + lVar6 * 4));
 lVar6 = lVar6 + 1;
 } while (lVar6 != 5);
 lVar2 = lVar2 + 1;
 puVar3 = puVar3 + 0x14;
 } while (lVar2 != 5);
 lVar5 = lVar5 + 1;
 puVar1 = puVar1 + 100;
 } while (lVar5 != 5);
 lVar5 = 0;
 printf("ARR-L1-04 (array_3d): %d\n",uVar7);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 do {
 aiStack_468[lVar5] = (int)lVar5;
 lVar5 = lVar5 + 10;
 } while (lVar5 != 0x32);
 lVar5 = 0;
 uVar7 = 0;
 do {
 uVar7 = (ulong)(uint)((int)uVar7 + *(int *)((long)aiStack_468 + lVar5));
 lVar5 = lVar5 + 0x28;
 } while (lVar5 != 200);
 lVar5 = 0;
 printf("ARR-L2-02 (array_pointer): %d\n",uVar7);
 local_50c = 10;
 local_510 = 0x14;
 local_514 = 0x1e;
 local_508[0] = &local_50c;
 local_508[1] = &local_510;
 local_508[2] = &local_514;
 local_508[3] = (undefined4 *)0x0;
 local_508[4] = (undefined4 *)0x0;
 local_508[5] = (undefined4 *)0x0;
 local_508[6] = (undefined4 *)0x0;
 local_508[7] = (undefined4 *)0x0;
 local_508[8] = (undefined4 *)0x0;
 local_508[9] = (undefined4 *)0x0;
 uVar7 = 0;
 do {
 if (local_508[lVar5] != (int *)0x0) {
 uVar7 = (ulong)(uint)((int)uVar7 + *local_508[lVar5]);
 }
 lVar5 = lVar5 + 1;
 } while (lVar5 != 3);
 lVar5 = 0;
 printf("ARR-L2-03 (pointer_array): %d\n",uVar7);
 do {
 auStack_4b8[lVar5] = (uint)lVar5;
 lVar5 = lVar5 + 1;
 } while (lVar5 != 0x14);
 printf("ARR-L2-04 (array_complex_index): %d\n",(ulong)auStack_4b8[0x11]);
 return;
}



/* Function: ptr_single @ 00101790 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 001017a0 */

int ptr_double(int *param_1)

{
  return *param_1 + 5;
}



/* Function: ptr_triple @ 001017b0 */

int ptr_triple(undefined8 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 001017c0 */

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



/* Function: ptr_offset @ 001017e0 */

undefined4 ptr_offset(long param_1,int param_2)

{
 return *(undefined4 *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 001017f0 */

ulong ptr_diff(long param_1,long param_2)

{
 return (ulong)(param_1 - param_2) >> 2;
}



/* Function: ptr_void @ 00101800 */

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



/* Function: ptr_const @ 00101820 */

int ptr_const(int *param_1)

{
 return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 00101830 */

void ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return;
}



/* Function: ptr_func_simple @ 00101840 */

void ptr_func_simple(code *param_1,undefined4 param_2)

{
 (*param_1)(param_2);
 return;
}



/* Function: ptr_func_complex @ 00101850 */

void ptr_func_complex(code *param_1,undefined8 param_2)

{
 undefined4 local_18;
 undefined4 uStack_14;
 undefined4 uStack_10;
 undefined4 uStack_c;
 
 local_18 = 0x102270;
 uStack_14 = 0;
 uStack_10 = 0;
 uStack_c = 0;
 (*param_1)(param_2,&local_18);
 return;
}



/* Function: ptr_cast @ 00101880 */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00101890 */

long opaque_handle_create(int param_1)

{
 return (long)param_1;
}



/* Function: opaque_handle_op @ 001018a0 */

int opaque_handle_op(int param_1)

{
 return param_1 * 2;
}



/* Function: test_pointer_types @ 001018b0 */

void test_pointer_types(void)

{
 long lVar1;
 ulong uVar2;
 int local_28 [8];
 
 puts(&DAT_001025fb);
 local_28[0] = 1;
 local_28[1] = 2;
 local_28[2] = 3;
 local_28[3] = 4;
 local_28[4] = 5;
 lVar1 = 0;
 printf("PTR-L2-01 (ptr_single): %d\n",ptr_single(local_28));
 printf("PTR-L2-02 (ptr_double): %d\n",ptr_double(local_28));
 printf("PTR-L2-03 (ptr_triple): %d\n",ptr_triple((undefined8 *)&local_28));
 local_28[4] = 5;
 local_28[0] = 1;
 local_28[1] = 2;
 local_28[2] = 3;
 local_28[3] = 4;
 uVar2 = 0;
 do {
 uVar2 = (ulong)(uint)((int)uVar2 + local_28[lVar1]);
 lVar1 = lVar1 + 1;
 } while ((int)lVar1 != 5);
 printf("PTR-L2-04 (ptr_increment): %d\n",uVar2);
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



/* Function: struct_simple @ 00101a00 */

int struct_simple(int *param_1)

{
 return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00101a10 */

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



/* Function: struct_nested @ 00101a50 */

int struct_nested(int *param_1)

{
 return param_1[3] + *param_1;
}



/* Function: struct_deep @ 00101a60 */

int struct_deep(long param_1)

{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 00101a70 */

int struct_with_ptr(int *param_1)

{
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 return **(int **)(param_1 + 2) + *param_1;
 }
 return *param_1;
}



/* Function: struct_bitfields @ 00101a90 */

short struct_bitfields(ushort *param_1)

{
 ushort uVar1;
 
 uVar1 = *param_1;
 return (uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 00101ac0 */

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



/* Function: union_array @ 00101ae0 */

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



/* Function: enum_type @ 00101b00 */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 00101b10 */

undefined4 enum_switch(uint param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffff9d;
 if (param_1 < 4) {
 uVar1 = *(undefined4 *)(&DAT_00102680 + (long)(int)param_1 * 4);
 }
 return uVar1;
}



/* Function: struct_func_ptr @ 00101b30 */

void struct_func_ptr(undefined4 *param_1)

{
 (**(code **)(param_1 + 2))(*param_1);
 return;
}



/* Function: linked_list @ 00101b40 */

int linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 00101b60 */

int doubly_linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 00101b80 */

int binary_tree_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (param_1 != (int *)0x0) {
 iVar1 = *param_1;
 iVar2 = binary_tree_sum(*(undefined8 *)(param_1 + 2));
 iVar3 = binary_tree_sum(*(undefined8 *)(param_1 + 4));
 return iVar3 + iVar2 + iVar1;
 }
 return 0;
}



/* Function: binary_tree @ 00101bb0 */

void binary_tree(void)

{
 int local_8;
 
 local_8 = 0;
 binary_tree_sum(&local_8);
 return;
}



/* Function: graph_traverse @ 00101bc0 */

int graph_traverse(long param_1)

{
 int *piVar1;
 int iVar2;
 ulong uVar3;
 
 if ((int)*(uint *)(param_1 + 0x50) < 1) {
 iVar2 = 0;
 }
 else {
 uVar3 = 0;
 iVar2 = 0;
 do {
 for (piVar1 = *(int **)(param_1 + uVar3 * 8); piVar1 != (int *)0x0;
 piVar1 = *(int **)(piVar1 + 2)) {
 iVar2 = iVar2 + *piVar1;
 }
 uVar3 = uVar3 + 1;
 } while (uVar3 != *(uint *)(param_1 + 0x50));
 }
 return iVar2;
}



/* Function: test_composite_types @ 00101c00 */

void test_composite_types(void)

{
 int *piVar1;
 uint uVar2;
 long lVar3;
 uint uVar4;
 ulong uVar5;
 int local_f8 [2];
 undefined4 *local_f0;
 undefined4 local_e8 [2];
 undefined4 *local_e0;
 undefined4 local_d8 [2];
 undefined8 local_d0;
 int local_c8 [2];
 undefined4 *local_c0;
 undefined8 local_b8;
 undefined4 local_b0 [2];
 undefined8 local_a8;
 int *local_a0;
 undefined8 local_98;
 undefined8 uStack_90;
 undefined4 local_88;
 undefined4 uStack_84;
 undefined4 uStack_80;
 undefined4 uStack_7c;
 undefined8 local_78;
 undefined8 *local_68 [11];
 
 piVar1 = local_f8;
 puts(&DAT_00102616);
 uVar2 = 0;
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
 local_f8[0] = 10;
 local_f0 = local_e8;
 local_e8[0] = 0x14;
 local_e0 = local_d8;
 local_d8[0] = 0x1e;
 local_d0 = 0;
 do {
 uVar2 = uVar2 + *piVar1;
 piVar1 = *(int **)(piVar1 + 2);
 } while (piVar1 != (int *)0x0);
 uVar4 = 0;
 printf("CMP-L2-12 (linked_list): %d\n",(ulong)uVar2);
 piVar1 = local_c8;
 local_c8[0] = 10;
 local_c0 = local_b0;
 local_b8 = 0;
 local_b0[0] = 0x14;
 local_a8 = 0;
 local_a0 = piVar1;
 do {
 uVar4 = uVar4 + *piVar1;
 piVar1 = *(int **)(piVar1 + 2);
 } while (piVar1 != (int *)0x0);
 lVar3 = 0;
 printf("CMP-L2-13 (doubly_linked_list): %d\n",(ulong)uVar4);
 local_78 = 0;
 local_88 = 100;
 uStack_84 = 0;
 uStack_80 = 0;
 uStack_7c = 0;
 uVar2 = binary_tree_sum(&local_88);
 printf("CMP-L2-14 (binary_tree): %d\n",(ulong)uVar2);
 local_98 = 1;
 uStack_90 = 0;
 local_68[1] = (undefined8 *)0x0;
 local_68[8] = (undefined8 *)0x0;
 local_68[9] = (undefined8 *)0x0;
 local_68[6] = (undefined8 *)0x0;
 local_68[7] = (undefined8 *)0x0;
 local_68[4] = (undefined8 *)0x0;
 local_68[5] = (undefined8 *)0x0;
 local_68[2] = (undefined8 *)0x0;
 local_68[3] = (undefined8 *)0x0;
 local_68[0] = &local_98;
 local_68[10] = (undefined8 *)0x2;
 uVar5 = 0;
 do {
 for (piVar1 = (int *)local_68[lVar3]; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 2)) {
 uVar5 = (ulong)(uint)((int)uVar5 + *piVar1);
 }
 lVar3 = lVar3 + 1;
 } while (lVar3 != 2);
 printf("CMP-L2-15 (graph_traverse): %d\n",uVar5);
 return;
}



/* Function: main @ 00101e90 */

undefined8 main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 62 */
