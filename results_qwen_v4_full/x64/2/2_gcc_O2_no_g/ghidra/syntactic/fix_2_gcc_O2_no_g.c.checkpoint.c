/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/2/2_gcc_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Ghidra type definitions */
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef unsigned char undefined;
typedef unsigned char byte;
typedef unsigned short ushort;
typedef void (*code)(void);

#define true 1

/* External data declarations */
extern char DAT_00103008[];
extern char DAT_001033e1[];
extern char DAT_0010344f[];
extern char DAT_00103454[];
extern char DAT_0010354a[];
extern int stack0x00000040;
extern undefined4 CSWTCH_61[];

/* External data definitions */
char DAT_00103008[] = "Data Types Level 1";
char DAT_001033e1[] = "Array Types";
char DAT_0010344f[] = "callback_data";
char DAT_00103454[] = "Pointer Types";
char DAT_0010354a[] = "Composite Types";
int stack0x00000040 = 0;
undefined4 CSWTCH_61[4] = {0xffffff9d, 0x32, 0x64, 0x96};

/* CRT stub function _init removed by preprocessor */

/* Builtin function definition */
char *builtin_strncpy(char *dest, const char *src, int n) {
 int i;
 for (i = 0; i < n - 1 && src[i] != '\0'; i++) {
  dest[i] = src[i];
 }
 dest[i] = '\0';
 return dest;
}

/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 001010a0 */

undefined8 main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: process_char @ 001011c0 */

int process_char(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 + 0x20;
 if (0x19 < (byte)((char)param_1 + 0xbfU)) {
 iVar1 = param_1;
 }
 return iVar1;
}



/* Function: process_short @ 001011e0 */

int process_short(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: process_int @ 001011f0 */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: process_long @ 00101200 */

long process_long(long param_1)

{
 return param_1 * 2;
}



/* Function: process_ll @ 00101210 */

long process_ll(long param_1)

{
 return param_1 * param_1;
}



/* Function: process_float @ 00101220 */

float process_float(float param_1)

{
 return param_1 * 1.5 + 0.5;
}



/* Function: process_double @ 00101240 */

double process_double(double param_1)

{
 return param_1 * 0.5 + 0.1;
}



/* Function: process_ld @ 00101260 */

void process_ld(void)

{
 return;
}



/* Function: process_bool @ 00101270 */

uint process_bool(uint param_1)

{
 uint uVar1;
 
 uVar1 = ~param_1 & 1;
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: const_param @ 00101290 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 001012a0 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 001012b0 */

void test_data_types_l1(void)

{
 puts(&DAT_00103008);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000);
 __printf_chk(0x400c000000000000,1,"DT-L1-06 (process_float): %.2f\n");
 __printf_chk(0x4000cccccccccccd,1,"DT-L1-07 (process_double): %.2f\n");
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n");
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 00101440 */

int array_1d_stack(int *param_1,int param_2)

{
 int *piVar1;
 int iVar2;
 
 if (0 < param_2) {
 piVar1 = param_1 + (ulong)(param_2 - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}



/* Function: array_string @ 00101470 */

ulong array_string(char *param_1)

{
 char *pcVar1;
 ulong uVar2;
 ulong uVar3;
 
 if (*param_1 != '\0') {
 uVar2 = 1;
 do {
 uVar3 = uVar2 & 0xffffffff;
 pcVar1 = param_1 + uVar2;
 uVar2 = uVar2 + 1;
 } while (*pcVar1 != '\0');
 return uVar3;
 }
 return 0;
}



/* Function: array_2d_stack @ 001014a0 */

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



/* Function: array_3d @ 001014c0 */

int array_3d(long param_1)

{
 int *piVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 
 piVar3 = (int *)(param_1 + 100);
 iVar2 = 0;
 do {
 piVar1 = piVar3 + -0x19;
 do {
 piVar4 = piVar1;
 iVar2 = iVar2 + *piVar4 + piVar4[1] + piVar4[2] + piVar4[3] + piVar4[4];
 piVar1 = piVar4 + 5;
 } while (piVar4 + 5 != piVar3);
 piVar3 = piVar4 + 0x1e;
 } while (piVar3 != (int *)(param_1 + 600));
 return iVar2;
}



/* Function: array_vla @ 00101500 */

int array_vla(int param_1,int *param_2)

{
 int *piVar1;
 int iVar2;
 
 if (0 < param_1) {
 piVar1 = param_2 + (ulong)(param_1 - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_2;
 param_2 = param_2 + 1;
 } while (param_2 != piVar1);
 return iVar2;
 }
 return 0;
}



/* Function: array_pointer @ 00101530 */

int array_pointer(int *param_1,int param_2)

{
 int *piVar1;
 int iVar2;
 
 if (0 < param_2) {
 piVar1 = param_1 + (ulong)(param_2 - 1) * 10 + 10;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 10;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}



/* Function: pointer_array @ 00101570 */

int pointer_array(long param_1,int param_2)

{
 int *piVar1;
 long lVar2;
 int iVar3;
 int iVar4;
 
 iVar3 = 10;
 if (param_2 < 0xb) {
 iVar3 = param_2;
 }
 if (0 < param_2) {
 lVar2 = 0;
 iVar4 = 0;
 do {
 piVar1 = *(int **)(param_1 + lVar2 * 8);
 if (piVar1 != (int *)0x0) {
 iVar4 = iVar4 + *piVar1;
 }
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < iVar3);
 return iVar4;
 }
 return 0;
}



/* Function: array_complex_index @ 001015c0 */

undefined4 array_complex_index(long param_1,int param_2,int param_3,uint param_4,uint param_5)

{
 if (((-1 < (int)(param_4 | param_5)) && ((int)param_4 < param_2)) && ((int)param_5 < param_3)) {
 return *(undefined4 *)(param_1 + (long)(int)(param_2 * param_5 + param_4) * 4);
 }
 return 0xffffffff;
}



/* Function: array_oob @ 001015f0 */

int array_oob(int *param_1,int param_2)

{
 int *piVar1;
 int iVar2;
 
 if (-1 < param_2) {
 iVar2 = 0;
 piVar1 = param_1 + (long)param_2 + 1;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}



/* Function: test_array_types @ 00101620 */

void test_array_types(void)

{
 char *pcVar1;
 ulong uVar2;
 long lVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int iVar7;
 int *piVar8;
 int iVar9;
 ulong uVar10;
 long in_FS_OFFSET;
 undefined4 local_3f8 [20];
 int local_3a8 [110];
 int local_1f0 [15];
 int local_1b4 [103];
 char local_16 [6];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001033e1);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
 builtin_strncpy(local_16,"hello",6);
 uVar2 = 1;
 do {
 uVar10 = uVar2 & 0xffffffff;
 pcVar1 = local_16 + uVar2;
 uVar2 = uVar2 + 1;
 } while (*pcVar1 != '\0');
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar10);
 piVar5 = local_3a8;
 iVar7 = 0;
 piVar8 = piVar5;
 do {
 lVar3 = 0;
 do {
 iVar9 = 0;
 if (iVar7 == (int)lVar3) {
 iVar9 = (int)lVar3;
 }
 piVar8[lVar3] = iVar9;
 lVar3 = lVar3 + 1;
 } while (lVar3 != 10);
 iVar7 = iVar7 + 1;
 piVar8 = piVar8 + 10;
 } while (iVar7 != 10);
 iVar7 = 0;
 do {
 iVar7 = iVar7 + *piVar5;
 piVar5 = piVar5 + 0xb;
 } while (local_1f0 != piVar5);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",iVar7);
 piVar8 = local_1b4;
 piVar5 = piVar8;
 do {
 piVar6 = piVar5 + -0x19;
 do {
 piVar4 = piVar6;
 *piVar4 = 1;
 piVar4[1] = 1;
 piVar4[2] = 1;
 piVar4[3] = 1;
 piVar4[4] = 1;
 piVar6 = piVar4 + 5;
 } while (piVar4 + 5 != piVar5);
 piVar5 = piVar4 + 0x1e;
 } while ((int *)&stack0x00000040 != piVar5);
 iVar7 = 0;
 do {
 piVar5 = piVar8 + -0x19;
 do {
 piVar6 = piVar5 + 5;
 iVar7 = iVar7 + *piVar5 + piVar5[1] + piVar5[2] + piVar5[3] + piVar5[4];
 piVar5 = piVar6;
 } while (piVar8 != piVar6);
 piVar8 = piVar8 + 0x19;
 } while (piVar8 != (int *)&stack0x00000040);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",iVar7);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",100);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
 lVar3 = 0;
 do {
 local_3f8[lVar3] = (int)lVar3;
 lVar3 = lVar3 + 1;
 } while (lVar3 != 0x14);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",local_3f8[0x11]);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ptr_single @ 00101840 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00101850 */

int ptr_double(undefined8 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00101860 */

int ptr_triple(undefined8 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00101870 */

int ptr_increment(int *param_1,int param_2)

{
 int *piVar1;
 int iVar2;
 
 if (0 < param_2) {
 iVar2 = 0;
 piVar1 = param_1 + param_2;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}



/* Function: ptr_offset @ 001018a0 */

undefined4 ptr_offset(long param_1,int param_2)

{
 return *(undefined4 *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 001018b0 */

ulong ptr_diff(long param_1,long param_2)

{
 return param_1 - param_2 >> 2 & 0xffffffff;
}



/* Function: ptr_void @ 001018c0 */

int ptr_void(int *param_1,int param_2)

{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 return (int)(char)*param_1;
 }
 return -1;
}



/* Function: ptr_const @ 001018f0 */

int ptr_const(int *param_1)

{
 return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 00101900 */

void ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return;
}



/* Function: ptr_func_simple @ 00101910 */

void ptr_func_simple(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101919. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((void (*)(undefined4))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}



/* Function: ptr_func_complex @ 00101920 */

void ptr_func_complex(code *param_1,undefined8 param_2)

{
 long in_FS_OFFSET;
 undefined *local_28;
 undefined8 local_20;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_20 = 0;
 local_28 = &DAT_0010344f;
 ((void (*)(undefined8, undefined *))param_1)(param_2,&local_28);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ptr_cast @ 00101970 */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00101980 */

long opaque_handle_create(int param_1)

{
 return (long)param_1;
}



/* Function: opaque_handle_op @ 00101990 */

int opaque_handle_op(int param_1)

{
 return param_1 * 2;
}



/* Function: test_pointer_types @ 001019a0 */

void test_pointer_types(void)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 int local_28 [6];
 long local_10;
 
 piVar1 = local_28;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103454);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",6);
 local_28[4] = 5;
 iVar2 = 1;
 local_28[0] = 1;
 local_28[1] = 2;
 iVar3 = 0;
 local_28[2] = 3;
 local_28[3] = 4;
 while( true ) {
 piVar1 = piVar1 + 1;
 iVar3 = iVar3 + iVar2;
 if (piVar1 == local_28 + 5) break;
 iVar2 = *piVar1;
 }
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",iVar3);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",10);
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",1);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: struct_simple @ 00101b80 */

int struct_simple(int *param_1)

{
 return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00101b90 */

int struct_array(int *param_1,int param_2)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 
 if (0 < param_2) {
 iVar3 = 0;
 piVar1 = param_1;
 do {
 piVar2 = piVar1 + 3;
 iVar3 = iVar3 + piVar1[1] + *piVar1 + piVar1[2];
 piVar1 = piVar2;
 } while (piVar2 != param_1 + (ulong)(param_2 - 1) * 3 + 3);
 return iVar3;
 }
 return 0;
}



/* Function: struct_nested @ 00101be0 */

int struct_nested(int *param_1)

{
 return *param_1 + param_1[3];
}



/* Function: struct_deep @ 00101bf0 */

int struct_deep(long param_1)

{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}



/* Function: struct_with_ptr @ 00101c00 */

int struct_with_ptr(int *param_1)

{
 int iVar1;
 
 iVar1 = *param_1;
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 iVar1 = iVar1 + **(int **)(param_1 + 2);
 }
 return iVar1;
}



/* Function: struct_bitfields @ 00101c20 */

short struct_bitfields(ushort *param_1)

{
 byte bVar1;
 
 bVar1 = (byte)*param_1;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6);
}



/* Function: union_type @ 00101c50 */

float union_type(float *param_1,int param_2)

{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 != 1) {
 return (float)(int)*(char *)param_1;
 }
 return (float)(int)*param_1;
}



/* Function: union_array @ 00101c80 */

int union_array(int *param_1,int param_2)

{
 int *piVar1;
 int iVar2;
 
 if (0 < param_2) {
 piVar1 = param_1 + (ulong)(param_2 - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}



/* Function: enum_type @ 00101cb0 */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 00101cc0 */

undefined4 enum_switch(uint param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffff9d;
 if (param_1 < 4) {
 uVar1 = *(undefined4 *)(CSWTCH_61 + (ulong)param_1 * 4);
 }
 return uVar1;
}



/* Function: struct_func_ptr @ 00101ce0 */

void struct_func_ptr(undefined4 *param_1)

{
 /* WARNING: Could not recover jumptable at 0x00101cea. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((void (*)(undefined4))**(code **)(param_1 + 2))(*param_1);
 return;
}



/* Function: linked_list @ 00101cf0 */

int linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 == (int *)0x0) {
 return 0;
 }
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = *(int **)(param_1 + 2);
 } while (param_1 != (int *)0x0);
 return iVar1;
}



/* Function: doubly_linked_list @ 00101d20 */

int doubly_linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 == (int *)0x0) {
 return 0;
 }
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = *(int **)(param_1 + 2);
 } while (param_1 != (int *)0x0);
 return iVar1;
}



/* Function: binary_tree_sum @ 00101d50 */

int binary_tree_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int *piVar4;
 int iVar5;
 int *piVar6;
 int *piVar7;
 int *piVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int *piVar12;
 int *piVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int *local_a0;
 int *local_98;
 int local_88;
 int local_84;
 int local_80;
 int local_7c;
 int local_78;
 int local_74;
 int local_70;
 int local_6c;
 int local_58;
 
 local_58 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 4)) {
 local_7c = 0;
 local_84 = *param_1;
 local_a0 = *(int **)(param_1 + 2);
 if (local_a0 != (int *)0x0) {
 do {
 local_78 = 0;
 local_80 = *local_a0;
 local_98 = *(int **)(local_a0 + 2);
 if (local_98 != (int *)0x0) {
 do {
 local_74 = 0;
 local_6c = *local_98;
 piVar12 = *(int **)(local_98 + 2);
 if (piVar12 != (int *)0x0) {
 do {
 local_70 = *piVar12;
 piVar6 = *(int **)(piVar12 + 2);
 iVar10 = 0;
 if (piVar6 != (int *)0x0) {
 do {
 piVar4 = *(int **)(piVar6 + 2);
 iVar14 = *piVar6;
 iVar11 = 0;
 if (piVar4 != (int *)0x0) {
 do {
 piVar8 = *(int **)(piVar4 + 2);
 iVar3 = *piVar4;
 iVar9 = 0;
 if (piVar8 != (int *)0x0) {
 do {
 local_88 = *piVar8;
 piVar7 = *(int **)(piVar8 + 2);
 iVar16 = 0;
 if (piVar7 != (int *)0x0) {
 do {
 piVar13 = *(int **)(piVar7 + 2);
 iVar15 = *piVar7;
 iVar5 = 0;
 if (piVar13 != (int *)0x0) {
 do {
 iVar2 = binary_tree_sum(*(undefined8 *)(piVar13 + 2));
 iVar1 = *piVar13;
 piVar13 = *(int **)(piVar13 + 4);
 iVar5 = iVar5 + iVar2 + iVar1;
 } while (piVar13 != (int *)0x0);
 iVar15 = iVar15 + iVar5;
 }
 piVar7 = *(int **)(piVar7 + 4);
 iVar16 = iVar16 + iVar15;
 } while (piVar7 != (int *)0x0);
 local_88 = local_88 + iVar16;
 }
 piVar8 = *(int **)(piVar8 + 4);
 iVar9 = iVar9 + local_88;
 } while (piVar8 != (int *)0x0);
 iVar3 = iVar3 + iVar9;
 }
 piVar4 = *(int **)(piVar4 + 4);
 iVar11 = iVar11 + iVar3;
 } while (piVar4 != (int *)0x0);
 iVar14 = iVar14 + iVar11;
 }
 piVar6 = *(int **)(piVar6 + 4);
 iVar10 = iVar10 + iVar14;
 } while (piVar6 != (int *)0x0);
 local_70 = local_70 + iVar10;
 }
 piVar12 = *(int **)(piVar12 + 4);
 local_74 = local_74 + local_70;
 } while (piVar12 != (int *)0x0);
 local_6c = local_6c + local_74;
 }
 local_78 = local_78 + local_6c;
 local_98 = *(int **)(local_98 + 4);
 } while (local_98 != (int *)0x0);
 local_80 = local_80 + local_78;
 }
 local_7c = local_7c + local_80;
 local_a0 = *(int **)(local_a0 + 4);
 } while (local_a0 != (int *)0x0);
 local_84 = local_84 + local_7c;
 }
 local_58 = local_58 + local_84;
 }
 return local_58;
}



/* Function: binary_tree @ 00101fb0 */

int binary_tree(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 4)) {
 iVar1 = binary_tree_sum(*(undefined8 *)(param_1 + 2));
 iVar2 = iVar2 + iVar1 + *param_1;
 }
 return iVar2;
}



/* Function: graph_traverse @ 00101ff0 */

int graph_traverse(undefined8 *param_1)

{
 undefined8 *puVar1;
 int *piVar2;
 int iVar3;
 
 if (0 < *(int *)(param_1 + 10)) {
 iVar3 = 0;
 puVar1 = param_1 + (ulong)(*(int *)(param_1 + 10) - 1) + 1;
 do {
 for (piVar2 = (int *)*param_1; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 2)) {
 iVar3 = iVar3 + *piVar2;
 }
 param_1 = param_1 + 1;
 } while (param_1 != puVar1);
 return iVar3;
 }
 return 0;
}



/* Function: test_composite_types @ 00102040 */

void test_composite_types(void)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 long in_FS_OFFSET;
 int local_68 [2];
 undefined4 *local_60;
 undefined4 local_58 [2];
 undefined8 local_50;
 int local_48 [2];
 undefined4 *local_40;
 undefined8 local_38;
 undefined4 local_30 [2];
 undefined8 local_28;
 int *local_20;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_0010354a);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",9);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",0x1e);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",0x6a);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",0x3c);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",0x15);
 local_60 = local_58;
 iVar1 = 10;
 iVar3 = 0;
 local_68[0] = 0x14;
 local_58[0] = 0x1e;
 local_50 = 0;
 for (piVar2 = local_68; iVar3 = iVar3 + iVar1, piVar2 != (int *)0x0;
 piVar2 = *(int **)(piVar2 + 2)) {
 iVar1 = *piVar2;
 }
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar3);
 piVar2 = local_48;
 local_48[0] = 10;
 local_40 = local_30;
 iVar1 = 10;
 iVar3 = 0;
 local_38 = 0;
 local_30[0] = 0x14;
 local_28 = 0;
 local_20 = piVar2;
 while( true ) {
 piVar2 = *(int **)(piVar2 + 2);
 iVar3 = iVar3 + iVar1;
 if (piVar2 == (int *)0x0) break;
 iVar1 = *piVar2;
 }
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
 iVar1 = binary_tree_sum(0);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",iVar1 + 100);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",1);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 62 */
