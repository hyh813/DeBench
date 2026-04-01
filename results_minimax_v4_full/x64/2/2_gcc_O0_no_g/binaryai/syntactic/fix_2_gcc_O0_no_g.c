// Decompiled by BinaryAI
// SHA256: ab40f6f064b00513ec8f48f55af0ba942f7804fa42118fa057a7805f6b0eed14

#include <stddef.h>
#include <stdbool.h>

// Type definitions for decompiled code
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned short ushort;

// Global variables
char completed_0 = 0;

// External symbols from C runtime
extern void *__dso_handle;

// Data constants (strings referenced by decompiled code)
char DAT_00103010[] = "Testing Data Types (L1):";
char DAT_00103180[] = "Testing Array Types:";
char DAT_0010329d[] = "callback";
char DAT_001032a2[] = "Testing Pointer Types:";
char DAT_00103452[] = "Testing Composite Types:";

// External symbols
extern void __gmon_start__(void);
extern void __cxa_finalize(void *);
extern void __stack_chk_fail(void);
extern unsigned long long main(void);
extern void *stack0x00000008;

// Function: _init @ 0x101000
int _init(void *ctx)
{
 __gmon_start__();
 return 0;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101060
void __cxa_finalize(void *param)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x101070
int puts(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101080
void __stack_chk_fail(void)
{
 return;
}

// Function: <EXTERNAL>::printf @ 0x101090
int printf(char *__format,...)
{
 return 0;
}

// Function: _start @ 0x1010a0
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
 for(;;) { }
}

// Function: deregister_tm_clones @ 0x1010d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101100
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101140
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: double_value @ 0x101189
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: process_char @ 0x10119b
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

// Function: process_short @ 0x1011c3
int process_short(ushort param_1,ushort param_2)
{
 return (uint)param_2 + (uint)param_1;
}

// Function: process_int @ 0x1011e3
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: process_long @ 0x1011f8
long process_long(long param_1)
{
 return param_1 * 2;
}

// Function: process_ll @ 0x10120d
long process_ll(long param_1)
{
 return param_1 * param_1;
}

// Function: process_float @ 0x101223
float process_float(float param_1)
{
 return param_1 * 1.5 + 0.5;
}

// Function: process_double @ 0x10124f
double process_double(double param_1)
{
 return param_1 / 2.0 + 0.1;
}

// Function: process_ld @ 0x101289
void process_ld(void)
{
 return;
}

// Function: process_bool @ 0x10129e
unsigned int process_bool(uint param_1)
{
 unsigned int uVar1;
 if (((int)param_1 < 1) || ((param_1 & 1) != 0)) {
 uVar1 = 0;
 }
 else {
 uVar1 = 1;
 }
 return uVar1;
}

// Function: const_param @ 0x1012ca
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x1012e1
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x101309
void test_data_types_l1(void)
{
 char cVar1;
 byte bVar2;
 short sVar3;
 uint uVar4;
 unsigned long long uVar5;
 long in_FS_OFFSET;
 float fVar6;
 unsigned int local_18;
 unsigned int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103010);
 cVar1 = process_char(0x41);
 printf("DT-L1-01 (process_char): %c\n",(unsigned long)(uint)(int)cVar1);
 cVar1 = process_char(0x62);
 printf("DT-L1-01 (process_char): %c\n",(unsigned long)(uint)(int)cVar1);
 sVar3 = process_short(100,200);
 printf("DT-L1-02 (process_short): %d\n",(unsigned long)(uint)(int)sVar3);
 uVar4 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n",(unsigned long)uVar4);
 uVar5 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n",uVar5);
 uVar5 = process_ll(100);
 printf("DT-L1-05 (process_ll): %lld\n",uVar5);
 fVar6 = (float)process_float(0x40000000);
 printf("DT-L1-06 (process_float): %.2f\n",(double)fVar6);
 uVar5 = process_double(0x4010000000000000);
 printf("DT-L1-07 (process_double): %.2f\n",uVar5);
 process_ld();
 printf("DT-L1-08 (process_ld): void\n");
 bVar2 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n",(unsigned long)bVar2);
 bVar2 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n",(unsigned long)bVar2);
 bVar2 = process_bool(0xfffffffe);
 printf("DT-L1-09 (process_bool): %d\n",(unsigned long)bVar2);
 local_18 = 5;
 uVar4 = const_param(&local_18);
 printf("DT-L1-10 (const_param): %d\n",(unsigned long)uVar4);
 local_14 = 10;
 uVar4 = volatile_access(&local_14);
 printf("DT-L1-11 (volatile_access): %d\n",(unsigned long)uVar4);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: array_1d_stack @ 0x10156e
int array_1d_stack(int *param_1,int param_2)
{
 int local_10;
 int local_c;
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 + param_1[local_c];
 }
 return local_10;
}

// Function: array_string @ 0x1015b7
int array_string(long param_1)
{
 int local_c;
 for (local_c = 0; *(char *)(param_1 + local_c) != '\0'; local_c = local_c + 1) {
 }
 return local_c;
}

// Function: array_2d_stack @ 0x1015e9
int array_2d_stack(long param_1)
{
 int local_10;
 int local_c;
 local_10 = 0;
 for (local_c = 0; local_c < 10; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)((long)local_c * 0x28 + param_1 + (long)local_c * 4);
 }
 return local_10;
}

// Function: array_3d @ 0x10163d
int array_3d(long param_1)
{
 int local_18;
 int local_14;
 int local_10;
 int local_c;
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

// Function: array_vla @ 0x1016d7
int array_vla(int param_1,long param_2)
{
 int local_10;
 int local_c;
 local_10 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_2 + (long)local_c * 4);
 }
 return local_10;
}

// Function: array_pointer @ 0x101720
int array_pointer(long param_1,int param_2)
{
 int local_10;
 int local_c;
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_c * 0x28);
 }
 return local_10;
}

// Function: pointer_array @ 0x101773
int pointer_array(long param_1,int param_2)
{
 int local_14;
 int local_10;
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

// Function: array_complex_index @ 0x1017eb
unsigned int array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int uVar1;
 if ((((param_4 < 0) || (param_2 <= param_4)) || (param_5 < 0)) || (param_3 <= param_5)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(unsigned int *)(param_1 + (long)(param_4 + param_5 * param_2) * 4);
 }
 return uVar1;
}

// Function: array_oob @ 0x10184a
int array_oob(long param_1,int param_2)
{
 int local_10;
 int local_c;
 local_10 = 0;
 for (local_c = 0; local_c <= param_2; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_c * 4);
 }
 return local_10;
}

// Function: test_array_types @ 0x101893
void test_array_types(void)
{
 uint uVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned int local_56c;
 unsigned int local_568;
 unsigned int local_564;
 int local_560;
 int local_55c;
 int local_558;
 int local_554;
 int local_550;
 int local_54c;
 int local_548;
 unsigned int local_544;
 unsigned int local_540;
 unsigned int local_53c;
 unsigned int local_538;
 unsigned int local_534;
 unsigned int local_530;
 unsigned int local_52c;
 unsigned int local_528;
 unsigned int *local_518;
 unsigned int *local_510;
 unsigned int *local_508;
 unsigned long long local_500;
 unsigned long long local_4f8;
 unsigned long long local_4f0;
 unsigned long long local_4e8;
 unsigned long long local_4e0;
 unsigned long long local_4d8;
 unsigned long long local_4d0;
 int local_4c8 [20];
 int local_478 [52];
 int local_3a8 [100];
 unsigned int local_218 [128];
 unsigned int local_16;
 unsigned short local_12;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103180);
 local_538 = 1;
 local_534 = 2;
 local_530 = 3;
 local_52c = 4;
 local_528 = 5;
 uVar1 = array_1d_stack(&local_538,5);
 printf("ARR-L1-01 (array_1d_stack): %d\n",(unsigned long)uVar1);
 local_16 = 0x6c6c6568;
 local_12 = 0x6f;
 uVar1 = array_string(&local_16);
 printf("ARR-L1-02 (array_string): %d\n",(unsigned long)uVar1);
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
 printf("ARR-L1-03 (array_2d_stack): %d\n",(unsigned long)uVar1);
 for (local_558 = 0; local_558 < 5; local_558 = local_558 + 1) {
 for (local_554 = 0; local_554 < 5; local_554 = local_554 + 1) {
 for (local_550 = 0; local_550 < 5; local_550 = local_550 + 1) {
 local_218[(long)local_558 * 0x19 + (long)local_554 * 5 + (long)local_550] = 1;
 }
 }
 }
 uVar1 = array_3d(local_218);
 printf("ARR-L1-04 (array_3d): %d\n",(unsigned long)uVar1);
 local_544 = 10;
 local_540 = 0x14;
 local_53c = 0x1e;
 uVar1 = array_vla(3,&local_544);
 printf("ARR-L2-01 (array_vla): %d\n",(unsigned long)uVar1);
 for (local_54c = 0; local_54c < 5; local_54c = local_54c + 1) {
 local_478[(long)local_54c * 10] = local_54c * 10;
 }
 uVar1 = array_pointer(local_478,5);
 printf("ARR-L2-02 (array_pointer): %d\n",(unsigned long)uVar1);
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
 printf("ARR-L2-03 (pointer_array): %d\n",(unsigned long)uVar1);
 for (local_548 = 0; local_548 < 0x14; local_548 = local_548 + 1) {
 local_4c8[local_548] = local_548;
 }
 uVar1 = array_complex_index(local_4c8,5,4,2,3);
 printf("ARR-L2-04 (array_complex_index): %d\n",(unsigned long)uVar1);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 __stack_chk_fail();
}

// Function: ptr_single @ 0x101cda
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x101cf1
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x101d0b
int ptr_triple(unsigned long long *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x101d28
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

// Function: ptr_offset @ 0x101d66
unsigned int ptr_offset(long param_1,int param_2)
{
 return *(unsigned int *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x101d8d
long ptr_diff(long param_1,long param_2)
{
 return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x101dab
int ptr_void(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 0) {
 iVar1 = *param_1;
 }
 else if (param_2 == 1) {
 iVar1 = (int)*(char *)param_1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: ptr_const @ 0x101de1
int ptr_const(int *param_1)
{
 return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x101df7
int ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return *param_1;
}

// Function: ptr_func_simple @ 0x101e1a
void ptr_func_simple(void *param_1,unsigned int param_2)
{
 ((void (*)(unsigned int))param_1)(param_2);
 return;
}

// Function: ptr_func_complex @ 0x101e3a
void ptr_func_complex(void *param_1,unsigned long long param_2)
{
 long in_FS_OFFSET;
 char *local_28;
 unsigned long long local_20;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28 = &DAT_0010329d;
 local_20 = 0;
 ((void (*)(unsigned long long, char **))param_1)(param_2,&local_28);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: ptr_cast @ 0x101e9a
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x101ec6
long opaque_handle_create(int param_1)
{
 return (long)param_1;
}

// Function: opaque_handle_op @ 0x101ed8
int opaque_handle_op(int param_1)
{
 return param_1 * 2;
}

// Function: complex_callback @ 0x101eec
bool complex_callback(int *param_1,long *param_2)
{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}

// Function: test_pointer_types @ 0x101f1d
void test_pointer_types(void)
{
 uint uVar1;
 long in_FS_OFFSET;
 char local_b9;
 unsigned int local_b8;
 unsigned int local_b4;
 unsigned int local_b0;
 unsigned int local_ac;
 unsigned int local_a8;
 unsigned int local_a4;
 unsigned int local_a0;
 unsigned int local_9c;
 unsigned int *local_98;
 unsigned int *local_90;
 unsigned int **local_88;
 unsigned int **local_80;
 unsigned int ***local_78;
 unsigned long long local_70;
 unsigned int local_68;
 unsigned int local_64;
 unsigned int local_60;
 unsigned int local_5c;
 unsigned int local_58;
 unsigned int local_48;
 unsigned int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18 [2];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001032a2);
 local_b8 = 5;
 uVar1 = ptr_single(&local_b8);
 printf("PTR-L2-01 (ptr_single): %d\n",(unsigned long)uVar1);
 local_b4 = 10;
 local_98 = &local_b4;
 local_80 = &local_98;
 uVar1 = ptr_double(local_80);
 printf("PTR-L2-02 (ptr_double): %d\n",(unsigned long)uVar1);
 local_b0 = 5;
 local_90 = &local_b0;
 local_88 = &local_90;
 local_78 = &local_88;
 uVar1 = ptr_triple(local_78);
 printf("PTR-L2-03 (ptr_triple): %d\n",(unsigned long)uVar1);
 local_68 = 1;
 local_64 = 2;
 local_60 = 3;
 local_5c = 4;
 local_58 = 5;
 uVar1 = ptr_increment(&local_68,5);
 printf("PTR-L2-04 (ptr_increment): %d\n",(unsigned long)uVar1);
 local_48 = 10;
 local_44 = 0x14;
 local_40 = 0x1e;
 local_3c = 0x28;
 local_38 = 0x32;
 uVar1 = ptr_offset(&local_48,2);
 printf("PTR-L2-05 (ptr_offset): %d\n",(unsigned long)uVar1);
 local_28 = 0;
 local_24 = 10;
 local_20 = 0x14;
 local_1c = 0x1e;
 local_18[0] = 0x28;
 uVar1 = ptr_diff((unsigned long long)&local_18[0],(unsigned long long)&local_28);
 printf("PTR-L2-06 (ptr_diff): %d\n",(unsigned long)uVar1);
 local_ac = 0x2a;
 local_b9 = 0x41;
 uVar1 = ptr_void(&local_ac,0);
 printf("PTR-L2-07 (ptr_void): %d\n",(unsigned long)uVar1);
 uVar1 = ptr_void(&local_b9,1);
 printf("PTR-L2-07 (ptr_void): %d\n",(unsigned long)uVar1);
 local_a8 = 10;
 uVar1 = ptr_const(&local_a8);
 printf("PTR-L2-08 (ptr_const): %d\n",(unsigned long)uVar1);
 local_a4 = 10;
 uVar1 = ptr_const_ptr(&local_a4);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",(unsigned long)uVar1);
 ptr_func_simple((void (*)(unsigned int))double_value,5);
 printf("PTR-L2-10 (ptr_func_simple): done\n");
 local_a0 = 5;
 ptr_func_complex((void (*)(unsigned long long, unsigned long long *))complex_callback, (unsigned long long)(unsigned int)&local_a0);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",(unsigned long)local_a0);
 local_28 = 0;
 local_24 = 10;
 local_20 = 0x14;
 local_1c = 0x1e;
 local_18[0] = 0x28;
 uVar1 = uVar1 = ptr_diff((unsigned long long)&local_18[0],(unsigned long long)&local_28);
 printf("PTR-L2-06 (ptr_diff): %d\n",(unsigned long)uVar1);
 local_9c = 0x12345678;
 local_9c = 0x12345678;
 uVar1 = ptr_cast(&local_9c);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",(unsigned long)uVar1);
 local_70 = opaque_handle_create(10);
 uVar1 = opaque_handle_op(local_70);
 printf("PTR-L2-13 (opaque_handle_op): %d\n",(unsigned long)uVar1);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: struct_simple @ 0x10228b
int struct_simple(int *param_1)
{
 return param_1[2] + *param_1 + param_1[1];
}

// Function: struct_array @ 0x1022b1
int struct_array(long param_1,int param_2)
{
 int local_10;
 int local_c;
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 +
 *(int *)(param_1 + (long)local_c * 0xc + 8) +
 *(int *)(param_1 + (long)local_c * 0xc) + *(int *)(param_1 + (long)local_c * 0xc + 4)
 ;
 }
 return local_10;
}

// Function: struct_nested @ 0x102347
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x102364
int struct_deep(long param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x102382
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

// Function: struct_bitfields @ 0x1023b6
short struct_bitfields(ushort *param_1)
{
 return (*param_1 >> 6) +
 (ushort)(*(byte *)param_1 & 1) + (ushort)(*(byte *)param_1 >> 1 & 3) +
 (ushort)(*(byte *)param_1 >> 3 & 7);
}

// Function: union_type @ 0x102404
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

// Function: union_array @ 0x102441
int union_array(long param_1,int param_2)
{
 int local_10;
 int local_c;
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_c * 4);
 }
 return local_10;
}

// Function: enum_type @ 0x10248a
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x1024a3
unsigned long long enum_switch(uint param_1)
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

// Function: struct_func_ptr @ 0x1024f7
void struct_func_ptr(unsigned int *param_1)
{
 (**(void **)(param_1 + 2))(*param_1);
 return;
}

// Function: linked_list @ 0x10251b
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

// Function: doubly_linked_list @ 0x102559
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

// Function: binary_tree_sum @ 0x102597
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
 iVar2 = binary_tree_sum(*(unsigned long long *)(param_1 + 2));
 iVar3 = binary_tree_sum(*(unsigned long long *)(param_1 + 4));
 iVar3 = iVar3 + iVar1 + iVar2;
 }
 return iVar3;
}

// Function: binary_tree @ 0x1025e6
void binary_tree(unsigned long long param_1)
{
 binary_tree_sum(param_1);
 return;
}

// Function: graph_traverse @ 0x102604
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

// Function: test_composite_types @ 0x102665
void test_composite_types(void)
{
 uint uVar1;
 long lVar2;
 unsigned int **ppuVar3;
 long in_FS_OFFSET;
 byte bVar4;
 unsigned short local_1bc [2];
 uint local_1b8;
 unsigned int local_1b4;
 unsigned int local_1b0;
 unsigned int local_1ac;
 unsigned int local_1a8 [2];
 unsigned long long local_1a0;
 unsigned int local_198 [2];
 unsigned int *local_190;
 unsigned int local_188 [2];
 void *local_180;
 unsigned int local_178 [2];
 unsigned long long local_170;
 unsigned int local_168;
 unsigned int local_164;
 unsigned int local_160;
 unsigned int local_15c;
 unsigned int local_158;
 unsigned int local_148 [2];
 unsigned long long local_140;
 unsigned long long local_138;
 unsigned int local_128;
 unsigned int local_124;
 unsigned int local_120;
 unsigned int local_11c;
 unsigned int local_118;
 unsigned int local_114;
 unsigned int local_110;
 unsigned int local_10c;
 unsigned int local_108;
 unsigned int local_104;
 unsigned int local_100;
 unsigned int local_fc;
 unsigned int local_f8;
 unsigned int local_f4;
 unsigned int local_f0;
 unsigned int local_ec;
 unsigned int local_e8;
 unsigned int local_e4;
 unsigned int local_e0;
 unsigned int local_dc;
 unsigned int local_d8;
 unsigned int local_d4;
 unsigned int local_c8 [2];
 unsigned int *local_c0;
 unsigned int local_b8 [2];
 unsigned int *local_b0;
 unsigned int local_a8 [2];
 unsigned long long local_a0;
 unsigned int local_98 [2];
 unsigned int *local_90;
 unsigned long long local_88;
 unsigned int local_80 [2];
 unsigned long long local_78;
 unsigned int *local_70;
 unsigned int *local_68 [10];
 unsigned int local_18;
 long local_10;
 bVar4 = 0;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103452);
 local_1b4 = 1;
 local_1b0 = 2;
 local_1ac = 3;
 uVar1 = struct_simple(&local_1b4);
 printf("CMP-L2-01 (struct_simple): %d\n",(unsigned long)uVar1);
 local_e8 = 1;
 local_e4 = 1;
 local_e0 = 1;
 local_dc = 2;
 local_d8 = 2;
 local_d4 = 2;
 uVar1 = struct_array(&local_e8,2);
 printf("CMP-L2-02 (struct_array): %d\n",(unsigned long)uVar1);
 local_168 = 5;
 local_164 = 10;
 local_160 = 0;
 local_15c = 100;
 local_158 = 200;
 uVar1 = struct_nested(&local_168);
 printf("CMP-L2-03 (struct_nested): %d\n",(unsigned long)uVar1);
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
 printf("CMP-L2-04 (struct_deep): %d\n",(unsigned long)uVar1);
 local_1a8[0] = 0x14;
 local_1a0 = 0;
 local_198[0] = 10;
 local_190 = local_1a8;
 uVar1 = struct_with_ptr(local_198);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",(unsigned long)uVar1);
 local_1bc[0] = 0x191d;
 local_1b8 = local_1b8 & 0xfff00000;
 uVar1 = struct_bitfields(local_1bc);
 printf("CMP-L2-06 (struct_bitfields): %d\n",(unsigned long)uVar1);
 local_f8 = 0x12345678;
 uVar1 = union_type(&local_f8,0);
 printf("CMP-L2-07 (union_type): %d\n",(unsigned long)uVar1);
 local_f4 = 10;
 local_f0 = 0x14;
 local_ec = 0x1e;
 uVar1 = union_array(&local_f4,3);
 printf("CMP-L2-08 (union_array): %d\n",(unsigned long)uVar1);
 uVar1 = enum_type(1);
 printf("CMP-L2-09 (enum_type): %d\n",(unsigned long)uVar1);
 uVar1 = enum_switch(2);
 printf("CMP-L2-10 (enum_switch): %d\n",(unsigned long)uVar1);
 local_188[0] = 10;
 local_180 = process_int;
 uVar1 = struct_func_ptr(local_188);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",(unsigned long)uVar1);
 local_c8[0] = 10;
 local_c0 = local_b8;
 local_b8[0] = 0x14;
 local_b0 = local_a8;
 local_a8[0] = 0x1e;
 local_a0 = 0;
 uVar1 = linked_list(local_c8);
 printf("CMP-L2-12 (linked_list): %d\n",(unsigned long)uVar1);
 local_98[0] = 10;
 local_88 = 0;
 local_80[0] = 0x14;
 local_78 = 0;
 local_70 = local_98;
 local_90 = local_80;
 uVar1 = doubly_linked_list(local_98);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",(unsigned long)uVar1);
 local_148[0] = 100;
 local_140 = 0;
 local_138 = 0;
 uVar1 = binary_tree(local_148);
 printf("CMP-L2-14 (binary_tree): %d\n",(unsigned long)uVar1);
 local_178[0] = 1;
 local_170 = 0;
 ppuVar3 = local_68;
 for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
 *ppuVar3 = (unsigned int *)0x0;
 ppuVar3 = ppuVar3 + (unsigned long)bVar4 * -2 + 1;
 }
 local_18 = 2;
 local_68[0] = local_178;
 uVar1 = graph_traverse(local_68);
 printf("CMP-L2-15 (graph_traverse): %d\n",(unsigned long)uVar1);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: main @ 0x102ba5
unsigned long long main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

// Function: _fini @ 0x102bdc
void _fini(void)
{
 return;
}

