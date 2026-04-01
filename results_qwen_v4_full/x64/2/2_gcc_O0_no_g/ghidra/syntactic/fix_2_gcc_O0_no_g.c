/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/2/2_gcc_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Ghidra type definitions */
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned int uint;
typedef unsigned char byte;
typedef void (*code)();
typedef unsigned short ushort;
typedef unsigned short undefined2;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef _Bool bool;
typedef unsigned long ulong;

/* External data declarations */
extern char DAT_00103010[];
extern char DAT_00103180[];
extern char DAT_0010329d[];
extern char DAT_001032a2[];
extern char DAT_00103452[];

/* Data definitions */
char DAT_00103010[] = "=== Data Types Level 1 ===";
char DAT_00103180[] = "=== Array Types ===";
char DAT_0010329d[] = "callback";
char DAT_001032a2[] = "=== Pointer Types ===";
char DAT_00103452[] = "=== Composite Types ===";


/* CRT stub function _init removed by preprocessor */




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




/* Function: double_value @ 00101189 */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: process_char @ 0010119b */

uint process_char(byte param_1)

{
 uint uVar1;
 
 if (((char)param_1 < 'A') || ('Z' < (char)param_1)) {
 uVar1 = (uint)param_1;
 }
 else {
 uVar1 = param_1 + 0x20;
 }
 return uVar1;
}



/* Function: process_short @ 001011c3 */

int process_short(ushort param_1,ushort param_2)

{
 return (uint)param_2 + (uint)param_1;
}



/* Function: process_int @ 001011e3 */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: process_long @ 001011f8 */

long process_long(long param_1)

{
 return param_1 * 2;
}



/* Function: process_ll @ 0010120d */

long process_ll(long param_1)

{
 return param_1 * param_1;
}



/* Function: process_float @ 00101223 */

float process_float(float param_1)

{
 return param_1 * 1.5 + 0.5;
}



/* Function: process_double @ 0010124f */

double process_double(double param_1)

{
 return param_1 / 2.0 + 0.1;
}



/* Function: process_ld @ 00101289 */

void process_ld(void)

{
 return;
}



/* Function: process_bool @ 0010129e */

undefined4 process_bool(uint param_1)

{
 undefined4 uVar1;
 
 if (((int)param_1 < 1) || ((param_1 & 1) != 0)) {
 uVar1 = 0;
 }
 else {
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: const_param @ 001012ca */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 001012e1 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 00101309 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_data_types_l1(void)

{
 char cVar1;
 byte bVar2;
 short sVar3;
 uint uVar4;
 undefined8 uVar5;
 long in_FS_OFFSET;
 float fVar6;
 undefined4 local_18;
 undefined4 local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103010);
 cVar1 = process_char(0x41);
 printf("DT-L1-01 (process_char): %c\n",(ulong)(uint)(int)cVar1);
 cVar1 = process_char(0x62);
 printf("DT-L1-01 (process_char): %c\n",(ulong)(uint)(int)cVar1);
 sVar3 = process_short(100,200);
 printf("DT-L1-02 (process_short): %d\n",(ulong)(uint)(int)sVar3);
 uVar4 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n",(ulong)uVar4);
 uVar5 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n",uVar5);
 uVar5 = process_ll(100);
 printf("DT-L1-05 (process_ll): %lld\n",uVar5);
 fVar6 = (float)process_float(0x40000000);
 printf("DT-L1-06 (process_float): %.2f\n",(double)fVar6);
 uVar5 = process_double(0x4010000000000000);
 printf("DT-L1-07 (process_double): %.2f\n",uVar5);
 process_ld();
 printf("DT-L1-08 (process_ld): called\n");
 bVar2 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n",(ulong)bVar2);
 bVar2 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n",(ulong)bVar2);
 bVar2 = process_bool(0xfffffffe);
 printf("DT-L1-09 (process_bool): %d\n",(ulong)bVar2);
 local_18 = 5;
 uVar4 = const_param(&local_18);
 printf("DT-L1-10 (const_param): %d\n",(ulong)uVar4);
 local_14 = 10;
 uVar4 = volatile_access(&local_14);
 printf("DT-L1-11 (volatile_access): %d\n",(ulong)uVar4);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: array_1d_stack @ 0010156e */

int array_1d_stack(long param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_c * 4);
 }
 return local_10;
}



/* Function: array_string @ 001015b7 */

int array_string(long param_1)

{
 undefined4 local_c;
 
 for (local_c = 0; *(char *)(param_1 + local_c) != '\0'; local_c = local_c + 1) {
 }
 return local_c;
}



/* Function: array_2d_stack @ 001015e9 */

int array_2d_stack(long param_1)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < 10; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)((long)local_c * 0x28 + param_1 + (long)local_c * 4);
 }
 return local_10;
}



/* Function: array_3d @ 0010163d */

int array_3d(long param_1)

{
 undefined4 local_18;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_18 = 0;
 for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
 for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
 for (local_c = 0; local_c < 5; local_c = local_c + 1) {
 local_18 = local_18 +
 *(int *)((long)local_14 * 100 + param_1 +
 ((long)local_10 * 5 + (long)local_c) * 4);
 }
 }
 }
 return local_18;
}



/* Function: array_vla @ 001016d7 */

int array_vla(int param_1,long param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_2 + (long)local_c * 4);
 }
 return local_10;
}



/* Function: array_pointer @ 00101720 */

int array_pointer(long param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_c * 0x28);
 }
 return local_10;
}



/* Function: pointer_array @ 00101773 */

int pointer_array(long param_1,int param_2)

{
 undefined4 local_14;
 undefined4 local_10;
 
 local_14 = 0;
 if (10 < param_2) {
 param_2 = 10;
 }
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 if (*(long *)(param_1 + (long)local_10 * 8) != 0) {
 local_14 = local_14 + **(int **)(param_1 + (long)local_10 * 8);
 }
 }
 return local_14;
}



/* Function: array_complex_index @ 001017eb */

undefined4 array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 uVar1;
 
 if ((((param_4 < 0) || (param_2 <= param_4)) || (param_5 < 0)) || (param_3 <= param_5)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(undefined4 *)(param_1 + (long)(param_4 + param_5 * param_2) * 4);
 }
 return uVar1;
}



/* Function: array_oob @ 0010184a */

int array_oob(long param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c <= param_2; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_c * 4);
 }
 return local_10;
}



/* Function: test_array_types @ 00101893 */

void test_array_types(void)

{
 uint uVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined4 local_56c;
 undefined4 local_568;
 undefined4 local_564;
 int local_560;
 int local_55c;
 int local_558;
 int local_554;
 int local_550;
 int local_54c;
 int local_548;
 undefined4 local_544;
 undefined4 local_540;
 undefined4 local_53c;
 undefined4 local_538;
 undefined4 local_534;
 undefined4 local_530;
 undefined4 local_52c;
 undefined4 local_528;
 undefined4 *local_518;
 undefined4 *local_510;
 undefined4 *local_508;
 undefined8 local_500;
 undefined8 local_4f8;
 undefined8 local_4f0;
 undefined8 local_4e8;
 undefined8 local_4e0;
 undefined8 local_4d8;
 undefined8 local_4d0;
 int local_4c8 [20];
 int local_478 [52];
 int local_3a8 [100];
 undefined4 local_218 [128];
 undefined4 local_16;
 undefined2 local_12;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103180);
 local_538 = 1;
 local_534 = 2;
 local_530 = 3;
 local_52c = 4;
 local_528 = 5;
 uVar1 = array_1d_stack(&local_538,5);
 printf("ARR-L1-01 (array_1d_stack): %d\n",(ulong)uVar1);
 local_16 = 0x6c6c6568;
 local_12 = 0x6f;
 uVar1 = array_string(&local_16);
 printf("ARR-L1-02 (array_string): %d\n",(ulong)uVar1);
 for (local_560 = 0; local_560 < 10; local_560 = local_560 + 1) {
 for (local_55c = 0; local_55c < 10; local_55c = local_55c + 1) {
 iVar2 = local_560;
 if (local_560 != local_55c) {
 iVar2 = 0;
 }
 local_3a8[(long)local_560 * 10 + (long)local_55c] = iVar2;
 }
 }
 uVar1 = array_2d_stack(local_3a8);
 printf("ARR-L1-03 (array_2d_stack): %d\n",(ulong)uVar1);
 for (local_558 = 0; local_558 < 5; local_558 = local_558 + 1) {
 for (local_554 = 0; local_554 < 5; local_554 = local_554 + 1) {
 for (local_550 = 0; local_550 < 5; local_550 = local_550 + 1) {
 local_218[(long)local_558 * 0x19 + (long)local_554 * 5 + (long)local_550] = 1;
 }
 }
 }
 uVar1 = array_3d(local_218);
 printf("ARR-L1-04 (array_3d): %d\n",(ulong)uVar1);
 local_544 = 10;
 local_540 = 0x14;
 local_53c = 0x1e;
 uVar1 = array_vla(3,&local_544);
 printf("ARR-L2-01 (array_vla): %d\n",(ulong)uVar1);
 for (local_54c = 0; local_54c < 5; local_54c = local_54c + 1) {
 local_478[(long)local_54c * 10] = local_54c * 10;
 }
 uVar1 = array_pointer(local_478,5);
 printf("ARR-L2-02 (array_pointer): %d\n",(ulong)uVar1);
 local_56c = 10;
 local_568 = 0x14;
 local_564 = 0x1e;
 local_500 = 0;
 local_4f8 = 0;
 local_4f0 = 0;
 local_4e8 = 0;
 local_4e0 = 0;
 local_4d8 = 0;
 local_4d0 = 0;
 local_518 = &local_56c;
 local_510 = &local_568;
 local_508 = &local_564;
 uVar1 = pointer_array(&local_518,3);
 printf("ARR-L2-03 (pointer_array): %d\n",(ulong)uVar1);
 for (local_548 = 0; local_548 < 0x14; local_548 = local_548 + 1) {
 local_4c8[local_548] = local_548;
 }
 uVar1 = array_complex_index(local_4c8,5,4,2,3);
 printf("ARR-L2-04 (array_complex_index): %d\n",(ulong)uVar1);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ptr_single @ 00101cda */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00101cf1 */

int ptr_double(undefined8 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00101d0b */

int ptr_triple(undefined8 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00101d28 */

int ptr_increment(int *param_1,int param_2)

{
 int *local_20;
 int local_10;
 int local_c;
 
 local_10 = 0;
 local_20 = param_1;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 + *local_20;
 local_20 = local_20 + 1;
 }
 return local_10;
}



/* Function: ptr_offset @ 00101d66 */

undefined4 ptr_offset(long param_1,int param_2)

{
 return *(undefined4 *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 00101d8d */

long ptr_diff(long param_1,long param_2)

{
 return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 00101dab */

int ptr_void(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 0) {
 iVar1 = *param_1;
 }
 else if (param_2 == 1) {
 iVar1 = (int)(char)*param_1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: ptr_const @ 00101de1 */

int ptr_const(int *param_1)

{
 return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 00101df7 */

int ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return *param_1;
}



/* Function: ptr_func_simple @ 00101e1a */

void ptr_func_simple(code *param_1,undefined4 param_2)

{
 (*param_1)(param_2);
 return;
}



/* Function: ptr_func_complex @ 00101e3a */

void ptr_func_complex(code *param_1,undefined8 param_2)

{
 long in_FS_OFFSET;
 undefined *local_28;
 undefined8 local_20;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28 = &DAT_0010329d;
 local_20 = 0;
 (*param_1)(param_2,&local_28);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: ptr_cast @ 00101e9a */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00101ec6 */

long opaque_handle_create(int param_1)

{
 return (long)param_1;
}



/* Function: opaque_handle_op @ 00101ed8 */

int opaque_handle_op(int param_1)

{
 return param_1 * 2;
}



/* Function: complex_callback @ 00101eec */

bool complex_callback(int *param_1,long *param_2)

{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}



/* Function: test_pointer_types @ 00101f1d */

void test_pointer_types(void)

{
 uint uVar1;
 long in_FS_OFFSET;
 undefined1 local_b9;
 undefined4 local_b8;
 undefined4 local_b4;
 undefined4 local_b0;
 undefined4 local_ac;
 undefined4 local_a8;
 undefined4 local_a4;
 undefined4 local_a0;
 undefined4 local_9c;
 undefined4 *local_98;
 undefined4 *local_90;
 undefined4 **local_88;
 undefined4 **local_80;
 undefined8 **local_78;
 undefined8 local_70;
 undefined4 local_68;
 undefined4 local_64;
 undefined4 local_60;
 undefined4 local_5c;
 undefined4 local_58;
 undefined4 local_48;
 undefined4 local_44;
 undefined4 local_40;
 undefined4 local_3c;
 undefined4 local_38;
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_20;
 undefined4 local_1c;
 undefined4 local_18 [2];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001032a2);
 local_b8 = 5;
 uVar1 = ptr_single(&local_b8);
 printf("PTR-L2-01 (ptr_single): %d\n",(ulong)uVar1);
 local_b4 = 10;
 local_98 = &local_b4;
 local_80 = &local_98;
 uVar1 = ptr_double(local_80);
 printf("PTR-L2-02 (ptr_double): %d\n",(ulong)uVar1);
 local_b0 = 5;
 local_90 = &local_b0;
 local_88 = &local_90;
 local_78 = &local_88;
 uVar1 = ptr_triple(local_78);
 printf("PTR-L2-03 (ptr_triple): %d\n",(ulong)uVar1);
 local_68 = 1;
 local_64 = 2;
 local_60 = 3;
 local_5c = 4;
 local_58 = 5;
 uVar1 = ptr_increment(&local_68,5);
 printf("PTR-L2-04 (ptr_increment): %d\n",(ulong)uVar1);
 local_48 = 10;
 local_44 = 0x14;
 local_40 = 0x1e;
 local_3c = 0x28;
 local_38 = 0x32;
 uVar1 = ptr_offset(&local_48,2);
 printf("PTR-L2-05 (ptr_offset): %d\n",(ulong)uVar1);
 local_28 = 0;
 local_24 = 10;
 local_20 = 0x14;
 local_1c = 0x1e;
 local_18[0] = 0x28;
 uVar1 = ptr_diff(local_18,&local_28);
 printf("PTR-L2-06 (ptr_diff): %d\n",(ulong)uVar1);
 local_ac = 0x2a;
 local_b9 = 0x41;
 uVar1 = ptr_void(&local_ac,0);
 printf("PTR-L2-07 (ptr_void): %d\n",(ulong)uVar1);
 uVar1 = ptr_void(&local_b9,1);
 printf("PTR-L2-07 (ptr_void): %d\n",(ulong)uVar1);
 local_a8 = 10;
 uVar1 = ptr_const(&local_a8);
 printf("PTR-L2-08 (ptr_const): %d\n",(ulong)uVar1);
 local_a4 = 10;
 uVar1 = ptr_const_ptr(&local_a4);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",(ulong)uVar1);
 ptr_func_simple(double_value,5);
 printf("PTR-L2-10 (ptr_func_simple): called\n");
 local_a0 = 5;
 ptr_func_complex(complex_callback,&local_a0);
 printf("PTR-L2-11 (ptr_func_complex): called\n");
 local_9c = 0x12345678;
 uVar1 = ptr_cast(&local_9c);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",(ulong)uVar1);
 local_70 = opaque_handle_create(10);
 uVar1 = opaque_handle_op(local_70);
 printf("PTR-L2-13 (opaque_handle_op): %d\n",(ulong)uVar1);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: struct_simple @ 0010228b */

int struct_simple(int *param_1)

{
 return param_1[2] + *param_1 + param_1[1];
}



/* Function: struct_array @ 001022b1 */

int struct_array(long param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 +
 *(int *)(param_1 + (long)local_c * 0xc + 8) +
 *(int *)(param_1 + (long)local_c * 0xc) + *(int *)(param_1 + (long)local_c * 0xc + 4)
 ;
 }
 return local_10;
}



/* Function: struct_nested @ 00102347 */

int struct_nested(int *param_1)

{
 return param_1[3] + *param_1;
}



/* Function: struct_deep @ 00102364 */

int struct_deep(long param_1)

{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 00102382 */

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



/* Function: struct_bitfields @ 001023b6 */

short struct_bitfields(ushort *param_1)

{
 return (*param_1 >> 6) +
 (ushort)((byte)*param_1 & 1) + (ushort)((byte)*param_1 >> 1 & 3) +
 (ushort)((byte)*param_1 >> 3 & 7);
}



/* Function: union_type @ 00102404 */

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
 fVar1 = (float)(int)*(char *)param_1;
 }
 return fVar1;
}



/* Function: union_array @ 00102441 */

int union_array(long param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_c * 4);
 }
 return local_10;
}



/* Function: enum_type @ 0010248a */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 001024a3 */

undefined8 enum_switch(uint param_1)

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



/* Function: struct_func_ptr @ 001024f7 */

void struct_func_ptr(undefined4 *param_1)

{
 (**(code **)(param_1 + 2))(*param_1);
 return;
}



/* Function: linked_list @ 0010251b */

int linked_list(int *param_1)

{
 int local_14;
 int *local_10;
 
 local_14 = 0;
 for (local_10 = param_1; local_10 != (int *)0x0; local_10 = *(int **)(local_10 + 2)) {
 local_14 = local_14 + *local_10;
 }
 return local_14;
}



/* Function: doubly_linked_list @ 00102559 */

int doubly_linked_list(int *param_1)

{
 int local_14;
 int *local_10;
 
 local_14 = 0;
 for (local_10 = param_1; local_10 != (int *)0x0; local_10 = *(int **)(local_10 + 2)) {
 local_14 = local_14 + *local_10;
 }
 return local_14;
}



/* Function: binary_tree_sum @ 00102597 */

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
 iVar2 = binary_tree_sum(*(undefined8 *)(param_1 + 2));
 iVar3 = binary_tree_sum(*(undefined8 *)(param_1 + 4));
 iVar3 = iVar3 + iVar1 + iVar2;
 }
 return iVar3;
}



/* Function: binary_tree @ 001025e6 */

void binary_tree(undefined8 param_1)

{
 binary_tree_sum(param_1);
 return;
}



/* Function: graph_traverse @ 00102604 */

int graph_traverse(long param_1)

{
 int local_18;
 int local_14;
 int *local_10;
 
 local_18 = 0;
 for (local_14 = 0; local_14 < *(int *)(param_1 + 0x50); local_14 = local_14 + 1) {
 for (local_10 = *(int **)(param_1 + (long)local_14 * 8); local_10 != (int *)0x0;
 local_10 = *(int **)(local_10 + 2)) {
 local_18 = local_18 + *local_10;
 }
 }
 return local_18;
}



/* Function: test_composite_types @ 00102665 */

void test_composite_types(void)

{
 uint uVar1;
 long lVar2;
 undefined4 **ppuVar3;
 long in_FS_OFFSET;
 byte bVar4;
 undefined2 local_1bc [2];
 uint local_1b8;
 undefined4 local_1b4;
 undefined4 local_1b0;
 undefined4 local_1ac;
 undefined4 local_1a8 [2];
 undefined8 local_1a0;
 undefined4 local_198 [2];
 undefined4 *local_190;
 undefined4 local_188 [2];
 code *local_180;
 undefined4 local_178 [2];
 undefined8 local_170;
 undefined4 local_168;
 undefined4 local_164;
 undefined4 local_160;
 undefined4 local_15c;
 undefined4 local_158;
 undefined4 local_148 [2];
 undefined8 local_140;
 undefined8 local_138;
 undefined4 local_128;
 undefined4 local_124;
 undefined4 local_120;
 undefined4 local_11c;
 undefined4 local_118;
 undefined4 local_114;
 undefined4 local_110;
 undefined4 local_10c;
 undefined4 local_108;
 undefined4 local_104;
 undefined4 local_100;
 undefined4 local_fc;
 undefined4 local_f8;
 undefined4 local_f4;
 undefined4 local_f0;
 undefined4 local_ec;
 undefined4 local_e8;
 undefined4 local_e4;
 undefined4 local_e0;
 undefined4 local_dc;
 undefined4 local_d8;
 undefined4 local_d4;
 undefined4 local_c8 [2];
 undefined4 *local_c0;
 undefined4 local_b8 [2];
 undefined4 *local_b0;
 undefined4 local_a8 [2];
 undefined8 local_a0;
 undefined4 local_98 [2];
 undefined4 *local_90;
 undefined8 local_88;
 undefined4 local_80 [2];
 undefined8 local_78;
 undefined4 *local_70;
 undefined4 *local_68 [10];
 undefined4 local_18;
 long local_10;
 
 bVar4 = 0;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103452);
 local_1b4 = 1;
 local_1b0 = 2;
 local_1ac = 3;
 uVar1 = struct_simple(&local_1b4);
 printf("CMP-L2-01 (struct_simple): %d\n",(ulong)uVar1);
 local_e8 = 1;
 local_e4 = 1;
 local_e0 = 1;
 local_dc = 2;
 local_d8 = 2;
 local_d4 = 2;
 uVar1 = struct_array(&local_e8,2);
 printf("CMP-L2-02 (struct_array): %d\n",(ulong)uVar1);
 local_168 = 5;
 local_164 = 10;
 local_160 = 0;
 local_15c = 100;
 local_158 = 200;
 uVar1 = struct_nested(&local_168);
 printf("CMP-L2-03 (struct_nested): %d\n",(ulong)uVar1);
 local_128 = 1;
 local_124 = 2;
 local_120 = 3;
 local_11c = 10;
 local_118 = 0x14;
 local_114 = 0xff;
 local_110 = 0;
 local_10c = 0;
 local_108 = 0;
 local_104 = 0;
 local_100 = 0xff;
 local_fc = 0x2a;
 uVar1 = struct_deep(&local_128);
 printf("CMP-L2-04 (struct_deep): %d\n",(ulong)uVar1);
 local_1a8[0] = 0x14;
 local_1a0 = 0;
 local_198[0] = 10;
 local_190 = local_1a8;
 uVar1 = struct_with_ptr(local_198);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",(ulong)uVar1);
 local_1bc[0] = 0x191d;
 local_1b8 = local_1b8 & 0xfff00000;
 uVar1 = struct_bitfields(local_1bc);
 printf("CMP-L2-06 (struct_bitfields): %d\n",(ulong)uVar1);
 local_f8 = 0x12345678;
 uVar1 = union_type(&local_f8,0);
 printf("CMP-L2-07 (union_type): %d\n",(ulong)uVar1);
 local_f4 = 10;
 local_f0 = 0x14;
 local_ec = 0x1e;
 uVar1 = union_array(&local_f4,3);
 printf("CMP-L2-08 (union_array): %d\n",(ulong)uVar1);
 uVar1 = enum_type(1);
 printf("CMP-L2-09 (enum_type): %d\n",(ulong)uVar1);
 uVar1 = enum_switch(2);
 printf("CMP-L2-10 (enum_switch): %d\n",(ulong)uVar1);
 local_188[0] = 10;
 local_180 = process_int;
 struct_func_ptr(local_188);
 printf("CMP-L2-11 (struct_func_ptr): called\n");
 local_c8[0] = 10;
 local_c0 = local_b8;
 local_b8[0] = 0x14;
 local_b0 = local_a8;
 local_a8[0] = 0x1e;
 local_a0 = 0;
 uVar1 = linked_list(local_c8);
 printf("CMP-L2-12 (linked_list): %d\n",(ulong)uVar1);
 local_98[0] = 10;
 local_88 = 0;
 local_80[0] = 0x14;
 local_78 = 0;
 local_70 = local_98;
 local_90 = local_80;
 uVar1 = doubly_linked_list(local_98);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",(ulong)uVar1);
 local_148[0] = 100;
 local_140 = 0;
 local_138 = 0;
 binary_tree(local_148);
 printf("CMP-L2-14 (binary_tree): called\n");
 local_178[0] = 1;
 local_170 = 0;
 ppuVar3 = local_68;
 for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
 *ppuVar3 = (undefined4 *)0x0;
 ppuVar3 = ppuVar3 + (ulong)bVar4 * -2 + 1;
 }
 local_18 = 2;
 local_68[0] = local_178;
 uVar1 = graph_traverse(local_68);
 printf("CMP-L2-15 (graph_traverse): %d\n",(ulong)uVar1);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: main @ 00102ba5 */

undefined8 main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 64 */
