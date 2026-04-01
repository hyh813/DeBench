/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/2/2_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/* Type definitions for decompiled code */
typedef unsigned char byte;
typedef unsigned short undefined2;
typedef unsigned char undefined;
typedef void (*code)();  /* Generic function pointer */

/* CRT stub function _init removed by preprocessor */

/* String constants from binary */
static const char DAT_00102004[] = "Data Types Level 1 Test";
static const char DAT_0010216f[] = "Array Types Test";
static const char DAT_00102280[] = "test_string";
static const char DAT_00102285[] = "Pointer Types Test";
static const char DAT_0010241e[] = "Composite Types Test";

/* Switch table for enum_switch */
static const char CSWTCH_61[] = {10, 20, 30, 40};



/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 001010a0 */

int main(void)

{
 unsigned long in_RAX;
 
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return (int)(in_RAX & 0xFFFFFFFF);
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 001011b9 */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: process_int @ 001011c1 */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: complex_callback @ 001011ca */

bool complex_callback(int *param_1,long *param_2)

{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}



/* Function: process_char @ 001011db */

int process_char(int param_1)

{
 if ((byte)((char)param_1 + 0xbfU) < 0x1a) {
 param_1 = param_1 + 0x20;
 }
 return param_1;
}



/* Function: process_short @ 001011ed */

int process_short(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: process_long @ 001011f5 */

long process_long(long param_1)

{
 return param_1 * 2;
}



/* Function: process_ll @ 001011fe */

long process_ll(long param_1)

{
 return param_1 * param_1;
}



/* Function: process_float @ 0010120a */

float process_float(float param_1)

{
 return param_1 * 1.5 + 0.5;
}



/* Function: process_double @ 0010121f */

double process_double(double param_1)

{
 return param_1 * 0.5 + 0.1;
}



/* Function: process_ld @ 00101234 */

long process_ld(void)

{
 return 0;
}



/* Function: process_bool @ 00101243 */

unsigned int process_bool(unsigned int param_1)

{
 unsigned int uVar1;
 
 uVar1 = 0;
 if (0 < (int)param_1) {
 uVar1 = ~param_1 & 1;
 }
 return uVar1;
}



/* Function: const_param @ 00101258 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 00101262 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 0010126d */

void test_data_types_l1(void)

{
 puts(&DAT_00102004);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",process_float(5.5f));
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",process_double(2.4));
 process_ld();
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 001013ec */

int array_1d_stack(long param_1,int param_2)

{
 long lVar1;
 int iVar2;
 
 iVar2 = 0;
 for (lVar1 = 0; (int)lVar1 < param_2; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_1 + lVar1 * 4);
 }
 return iVar2;
}



/* Function: array_string @ 00101406 */

unsigned long array_string(long param_1)

{
 unsigned long uVar1;
 unsigned long uVar2;
 
 uVar1 = 0;
 do {
 uVar2 = uVar1 & 0xffffffff;
 uVar1 = uVar1 + 1;
 } while (*(char *)(param_1 + -1 + uVar1) != '\0');
 return uVar2;
}



/* Function: array_2d_stack @ 0010141d */

int array_2d_stack(int *param_1)

{
 int *piVar1;
 int iVar2;
 
 piVar1 = param_1 + 0x6e;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 0xb;
 } while (param_1 != piVar1);
 return iVar2;
}



/* Function: array_3d @ 00101436 */

int array_3d(int *param_1)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 
 piVar2 = param_1 + 0x7d;
 iVar3 = 0;
 do {
 piVar1 = param_1 + 0x19;
 piVar4 = param_1;
 do {
 param_1 = piVar4 + 5;
 iVar3 = iVar3 + *piVar4 + piVar4[1] + piVar4[2] + piVar4[3] + piVar4[4];
 piVar4 = param_1;
 } while (param_1 != piVar1);
 } while (piVar2 != param_1);
 return iVar3;
}



/* Function: array_vla @ 00101464 */

int array_vla(int param_1,long param_2)

{
 long lVar1;
 int iVar2;
 
 iVar2 = 0;
 for (lVar1 = 0; (int)lVar1 < param_1; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_2 + lVar1 * 4);
 }
 return iVar2;
}



/* Function: array_pointer @ 0010147e */

int array_pointer(long param_1,int param_2)

{
 long lVar1;
 int iVar2;
 
 iVar2 = 0;
 for (lVar1 = 0; (int)lVar1 < param_2; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_1 + lVar1 * 0x28);
 }
 return iVar2;
}



/* Function: pointer_array @ 0010149c */

int pointer_array(long param_1,int param_2)

{
 int *piVar1;
 long lVar2;
 int iVar3;
 
 if (10 < param_2) {
 param_2 = 10;
 }
 iVar3 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 piVar1 = *(int **)(param_1 + lVar2 * 8);
 if (piVar1 != (int *)0x0) {
 iVar3 = iVar3 + *piVar1;
 }
 }
 return iVar3;
}



/* Function: array_complex_index @ 001014c8 */

int array_complex_index(long param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
 if (((-1 < (int)(param_4 | param_5)) && ((int)param_4 < param_2)) && ((int)param_5 < param_3)) {
 return *(int *)(param_1 + (long)(int)(param_2 * param_5 + param_4) * 4);
 }
 return 0xffffffff;
}



/* Function: array_oob @ 001014ef */

int array_oob(long param_1,int param_2)

{
 long lVar1;
 int iVar2;
 
 iVar2 = 0;
 for (lVar1 = 0; (int)lVar1 <= param_2; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_1 + lVar1 * 4);
 }
 return iVar2;
}



/* Function: test_array_types @ 00101509 */

void test_array_types(void)

{
 int uVar1;
 long lVar2;
 int *puVar3;
 char *puVar4;
 int iVar5;
 int *puVar6;
 int iVar7;
 long in_FS_OFFSET;
 byte bVar8;
 int local_534;
 int local_530;
 int local_52c;
 long local_528;
 int local_520;
 long local_51c;
 long local_514;
 int local_50c;
 int *local_508;
 int *local_500;
 int *local_4f8;
 int local_4f0 [15];
 int auStack_4b4 [20];
 int local_464 [10];
 int local_43c;
 int local_414;
 int local_3ec;
 int local_3c4;
 char local_39c [400];
 int local_20c [125];
 char local_18 [2];
 int local_16;
 undefined2 local_12;
 long local_10;
 
 bVar8 = 0;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_0010216f);
 local_51c = 0x200000001;
 local_514 = 0x400000003;
 local_50c = 5;
 uVar1 = array_1d_stack(&local_51c,5);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_16 = 0x6c6c6568;
 local_12 = 0x6f;
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",array_string(&local_16));
 iVar5 = 0;
 puVar4 = local_39c;
 do {
 lVar2 = 0;
 do {
 iVar7 = (int)lVar2;
 if (iVar5 != (int)lVar2) {
 iVar7 = 0;
 }
 *(int *)(puVar4 + lVar2 * 4) = iVar7;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 10);
 iVar5 = iVar5 + 1;
 puVar4 = puVar4 + 0x28;
 } while (iVar5 != 10);
 uVar1 = array_2d_stack(local_39c);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 puVar6 = local_20c;
 do {
 iVar5 = 5;
 puVar3 = puVar6;
 do {
 *puVar3 = 1;
 puVar3[1] = 1;
 puVar3[2] = 1;
 puVar3[3] = 1;
 puVar3[4] = 1;
 iVar5 = iVar5 + -1;
 puVar3 = puVar3 + 5;
 } while (iVar5 != 0);
 puVar6 = puVar6 + 0x19;
 } while ((int *)local_18 != puVar6);
 uVar1 = array_3d(local_20c);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",uVar1);
 local_528 = 0x140000000a;
 local_520 = 0x1e;
 uVar1 = array_vla(3,&local_528);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",uVar1);
 local_464[0] = 0;
 local_43c = 10;
 local_414 = 0x14;
 local_3ec = 0x1e;
 local_3c4 = 0x28;
 uVar1 = array_pointer(local_464,5);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",uVar1);
 puVar6 = local_4f0;
 for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
 *puVar6 = 0;
 puVar6 = puVar6 + (unsigned long)bVar8 * -2 + 1;
 }
 local_508 = &local_534;
 local_500 = &local_530;
 local_4f8 = &local_52c;
 local_534 = 10;
 local_530 = 0x14;
 local_52c = 0x1e;
 uVar1 = pointer_array(&local_508,3);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",uVar1);
 lVar2 = 0;
 do {
 auStack_4b4[lVar2] = (int)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x14);
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",auStack_4b4[0x11]);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: ptr_single @ 001017b6 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 001017c0 */

int ptr_double(long *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 001017cd */

void ptr_triple(long *param_1)

{
 return;
}

void dummy(void) {}



/* Function: ptr_increment @ 001017dc */

int ptr_increment(long param_1,int param_2)

{
 long lVar1;
 int iVar2;
 
 iVar2 = 0;
 for (lVar1 = 0; (int)lVar1 < param_2; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_1 + lVar1 * 4);
 }
 return iVar2;
}



/* Function: ptr_offset @ 001017f6 */

int ptr_offset(long param_1,int param_2)

{
 return *(int *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 00101801 */

unsigned long ptr_diff(long param_1,long param_2)

{
 return param_1 - param_2 >> 2 & 0xffffffff;
}



/* Function: ptr_void @ 0010180f */

int ptr_void(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 0) {
 return *param_1;
 }
 iVar1 = -1;
 if (param_2 == 1) {
 iVar1 = (int)(char)*param_1;
 }
 return iVar1;
}



/* Function: ptr_const @ 00101825 */

int ptr_const(int *param_1)

{
 return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 0010182e */

void ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return;
}



/* Function: ptr_func_simple @ 0010183a */

void ptr_func_simple(code *UNRECOVERED_JUMPTABLE,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101843. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)(param_2);
}



/* Function: ptr_func_complex @ 00101845 */

void ptr_func_complex(code *param_1,long param_2)

{
 long in_FS_OFFSET;
 undefined *local_20;
 long local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_18 = 0;
 local_20 = &DAT_00102280;
 (*param_1)(param_2,&local_20);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: ptr_cast @ 00101898 */

int ptr_cast(int *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 0010189f */

long opaque_handle_create(int param_1)

{
 return (long)param_1;
}



/* Function: opaque_handle_op @ 001018a7 */

int opaque_handle_op(int param_1)

{
 return param_1 * 2;
}



/* Function: test_pointer_types @ 001018af */

void test_pointer_types(void)

{
 int uVar1;
 long in_FS_OFFSET;
 int local_40;
 int local_3c;
 int *local_38;
 int **local_30;
 long local_24;
 long local_1c;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102285);
 ptr_triple(&local_30);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 local_38 = &local_40;
 local_40 = 5;
 local_30 = &local_38;
 ptr_triple(&local_30);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",0xf);
 local_24 = 0x200000001;
 local_1c = 0x400000003;
 local_14 = 5;
 uVar1 = ptr_increment(&local_24,5);
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 ptr_func_simple(double_value,5);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",0xa);
 local_3c = 5;
 uVar1 = ptr_func_complex(complex_callback,&local_3c);
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: struct_simple @ 00101ab7 */

int struct_simple(int *param_1)

{
 return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00101ac4 */

int struct_array(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + param_1[1] + *param_1 + param_1[2];
 param_1 = param_1 + 3;
 }
 return iVar2;
}



/* Function: struct_nested @ 00101ae8 */

int struct_nested(int *param_1)

{
 return *param_1 + param_1[3];
}



/* Function: struct_deep @ 00101af2 */

int struct_deep(long param_1)

{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}



/* Function: struct_with_ptr @ 00101afd */

int struct_with_ptr(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 iVar1 = **(int **)(param_1 + 2);
 }
 return *param_1 + iVar1;
}



/* Function: struct_bitfields @ 00101b13 */

int struct_bitfields(unsigned int *param_1)

{
 byte bVar1;
 
 bVar1 = (byte)*param_1;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6 & 0x3ff);
}



/* Function: union_type @ 00101b3b */

float union_type(float *param_1,int param_2)

{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 return (float)(int)*param_1;
 }
 return (float)(int)*(char *)param_1;
}



/* Function: union_array @ 00101b53 */

int union_array(long param_1,int param_2)

{
 long lVar1;
 int iVar2;
 
 iVar2 = 0;
 for (lVar1 = 0; (int)lVar1 < param_2; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_1 + lVar1 * 4);
 }
 return iVar2;
}



/* Function: enum_type @ 00101b6d */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 00101b75 */

int enum_switch(unsigned int param_1)

{
 int iVar1;
 
 iVar1 = -99;
 if (param_1 < 4) {
 iVar1 = (int)*(char *)((long)&CSWTCH_61 + (unsigned long)param_1);
 }
 return iVar1;
}



/* Function: struct_func_ptr @ 00101b91 */

void struct_func_ptr(int *param_1)

{
 /* WARNING: Could not recover jumptable at 0x00101b9b. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (**(code **)(param_1 + 2))(*param_1);
 return;
}



/* Function: linked_list @ 00101b9d */

int linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 00101bb1 */

int doubly_linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 00101bc5 */

int binary_tree_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 4)) {
 iVar1 = binary_tree_sum(*(long *)(param_1 + 2));
 iVar2 = iVar2 + iVar1 + *param_1;
 }
 return iVar2;
}



/* Function: graph_traverse @ 00101bfa */

int graph_traverse(long param_1)

{
 long lVar1;
 int *piVar2;
 int iVar3;
 
 iVar3 = 0;
 for (lVar1 = 0; (int)lVar1 < *(int *)(param_1 + 0x50); lVar1 = lVar1 + 1) {
 for (piVar2 = *(int **)(param_1 + lVar1 * 8); piVar2 != (int *)0x0;
 piVar2 = *(int **)(piVar2 + 2)) {
 iVar3 = iVar3 + *piVar2;
 }
 }
 return iVar3;
}



/* Function: test_composite_types @ 00101c25 */

void test_composite_types(void)

{
 int uVar1;
 long lVar2;
 int *puVar3;
 long in_FS_OFFSET;
 byte bVar4;
 unsigned long local_150;
 int local_148 [2];
 long local_140;
 int local_138 [2];
 int *local_130;
 int local_128 [2];
 code *local_120;
 int local_118 [2];
 long local_110;
 int local_108 [2];
 long local_100;
 long local_f8;
 long local_ec;
 int local_e4;
 long local_e0;
 long local_d8;
 long local_d0;
 int local_c8 [2];
 int *local_c0;
 int local_b8 [2];
 int *local_b0;
 int local_a8 [2];
 long local_a0;
 int local_98 [2];
 int *local_90;
 long local_88;
 int local_80 [2];
 long local_78;
 int *local_70;
 int *local_68;
 int local_60 [18];
 int local_18;
 long local_10;
 
 bVar4 = 0;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_0010241e);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
 local_e0 = 0x100000001;
 local_d8 = 0x200000001;
 local_d0 = 0x200000002;
 uVar1 = struct_array(&local_e0,2);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 local_130 = local_148;
 local_148[0] = 0x14;
 local_140 = 0;
 local_138[0] = 10;
 uVar1 = struct_with_ptr(local_138);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_150 = local_150 & 0xfff00000ffff0000 | 0x191d;
 uVar1 = struct_bitfields(&local_150);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 local_ec = 0x140000000a;
 local_e4 = 0x1e;
 uVar1 = union_array(&local_ec,3);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 local_128[0] = 10;
 local_120 = process_int;
 uVar1 = struct_func_ptr(local_128);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
 local_c0 = local_b8;
 local_c8[0] = 10;
 local_b0 = local_a8;
 local_b8[0] = 0x14;
 local_a8[0] = 0x1e;
 local_a0 = 0;
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",linked_list(local_c8));
 local_70 = local_98;
 local_90 = local_80;
 local_98[0] = 10;
 local_88 = 0;
 local_80[0] = 0x14;
 local_78 = 0;
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",doubly_linked_list(local_70));
 local_108[0] = 100;
 local_100 = 0;
 local_f8 = 0;
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",binary_tree_sum(local_108));
 puVar3 = local_60;
 for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
 *puVar3 = 0;
 puVar3 = puVar3 + (unsigned long)bVar4 * -2 + 1;
 }
 local_68 = local_118;
 local_118[0] = 1;
 local_110 = 0;
 local_18 = 2;
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",graph_traverse(&local_68));
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 63 */
