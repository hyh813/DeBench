// Decompiled by BinaryAI
// SHA256: cb28c9ae53fd09faab5b35b55e8c83c2cf34b5529e7b7b0e7bd6ace6f27097dc

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Type definitions
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned char byte;

// Global variables
int completed_0 = 0;
void *__dso_handle = 0;
unsigned long long main(void);
int __gmon_start__(void);
void __libc_start_main(void *main, unsigned long long argc, void *udata, void *init, void *fini, void *rtld_fini, void *stack_end);
int binary_tree_sum(int *param_1);
void test_data_types_l1(void);
void test_array_types(void);
void test_pointer_types(void);
void test_composite_types(void);

// External data
char DAT_001025bf[] = "Data Types Level 1:";
char DAT_001025e0[] = "Array Types:";
char DAT_001025fb[] = "Pointer Types:";
char DAT_00102616[] = "Composite Types:";
unsigned int DAT_00102680[4] = {0x32, 0x64, 0x96, 0xc8};

// Function: _init @ 0x101000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x101030
// External puts - already declared in stdio.h

// Function: <EXTERNAL>::printf @ 0x101040
// External printf - already declared in stdio.h

// Function: <EXTERNAL>::__cxa_finalize @ 0x101050
void __cxa_finalize(void *dso_handle);

// Function: _start @ 0x101060
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main((void *)main,param_2,NULL,0,0,(void *)param_1,auStack_8);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x101090
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1010c0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101100
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

// Function: process_char @ 0x101150
uint process_char(uint param_1)
{
 uint uVar1;
 uVar1 = param_1 + 0x20 & 0xff;
 if (0x19 < (byte)((char)param_1 + 0xbfU)) {
 uVar1 = param_1;
 }
 return uVar1;
}

// Function: process_short @ 0x101160
int process_short(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: process_int @ 0x101170
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: process_long @ 0x101180
long process_long(long param_1)
{
 return param_1 * 2;
}

// Function: process_ll @ 0x101190
long process_ll(long param_1)
{
 return param_1 * param_1;
}

// Function: process_float @ 0x1011a0
float process_float(float param_1)
{
 return param_1 * 1.5 + 0.5;
}

// Function: process_double @ 0x1011c0
double process_double(double param_1)
{
 return param_1 * 0.5 + 0.1;
}

// Function: process_ld @ 0x1011e0
long double process_ld(long double param_1)
{
 return param_1 * 0.25 + 0.05;
}

// Function: process_bool @ 0x1011f0
bool process_bool(uint param_1)
{
 return (param_1 & 1) == 0 && 0 < (int)param_1;
}

// Function: const_param @ 0x101200
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x101210
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x101220
void test_data_types_l1(void)
{
 puts(&DAT_001025bf);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000);
 printf("DT-L1-06 (process_float): %.2f\n", 3.0);
 printf("DT-L1-07 (process_double): %.2f\n", 2.2);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 0.0);
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x101350
int array_1d_stack(long param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
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

// Function: array_string @ 0x101370
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

// Function: array_2d_stack @ 0x101390
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

// Function: array_3d @ 0x1013c0
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

// Function: array_vla @ 0x101420
int array_vla(uint param_1,long param_2)
{
 int iVar1;
 unsigned long uVar2;
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

// Function: array_pointer @ 0x101440
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
 } while ((unsigned long)param_2 * 0x28 != lVar2);
 return iVar1;
 }
 return 0;
}

// Function: pointer_array @ 0x101470
int pointer_array(long param_1,uint param_2)
{
 int *piVar1;
 uint uVar2;
 int iVar3;
 unsigned long uVar4;
 unsigned long uVar5;
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
 uVar4 = (unsigned long)uVar2;
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

// Function: array_complex_index @ 0x1014b0
unsigned int array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if ((((-1 < param_4) && (param_5 < param_3)) && (param_4 < param_2)) && (-1 < param_5)) {
 uVar1 = *(unsigned int *)(param_1 + (long)(param_5 * param_2 + param_4) * 4);
 }
 return uVar1;
}

// Function: array_oob @ 0x1014e0
int array_oob(long param_1,int param_2)
{
 int iVar1;
 unsigned long uVar2;
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

// Function: test_array_types @ 0x101500
void test_array_types(void)
{
 char *puVar1;
 long lVar2;
 char *puVar3;
 unsigned int uVar4;
 long lVar5;
 long lVar6;
 unsigned long uVar7;
 unsigned int local_514;
 unsigned int local_510;
 int local_50c;
 int *local_508 [3];
 char local_4f0 [16];
 char local_4e0 [16];
 char local_4d0 [16];
 unsigned long long local_4c0;
 uint auStack_4b8 [20];
 int aiStack_468 [52];
 char local_398 [400];
 char local_208 [512];
 puts(&DAT_001025e0);
 lVar5 = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n", 0);
 puVar1 = local_398;
 do {
 lVar2 = 0;
 do {
 uVar4 = 0;
 if (lVar5 == lVar2) {
 uVar4 = (unsigned int)lVar5;
 }
 *(unsigned int *)(puVar1 + lVar2 * 4) = uVar4;
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
 printf("ARR-L1-03 (array_2d_stack): %d\n", 0);
 puVar1 = local_208;
 do {
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 lVar6 = 0;
 do {
 *(unsigned int *)(puVar3 + lVar6 * 4) = 1;
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
 uVar7 = (unsigned long)(uint)((int)uVar7 + *(int *)(puVar3 + lVar6 * 4));
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
 uVar7 = (unsigned long)(uint)((int)uVar7 + *(int *)((long)aiStack_468 + lVar5));
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
 for (int i = 0; i < 16; i++) { local_4f0[i] = 0; }
 for (int i = 0; i < 16; i++) { local_4e0[i] = 0; }
 for (int i = 0; i < 16; i++) { local_4d0[i] = 0; }
 local_4c0 = 0;
 uVar7 = 0;
 do {
 if (local_508[lVar5] != (int *)0x0) {
 uVar7 = (unsigned long)(uint)((int)uVar7 + *local_508[lVar5]);
 }
 lVar5 = lVar5 + 1;
 } while (lVar5 != 3);
 lVar5 = 0;
 printf("ARR-L2-03 (pointer_array): %d\n",uVar7);
 do {
 auStack_4b8[lVar5] = (uint)lVar5;
 lVar5 = lVar5 + 1;
 } while (lVar5 != 0x14);
 printf("ARR-L2-04 (array_complex_index): %d\n",(unsigned long)auStack_4b8[17]);
 return;
}

// Function: ptr_single @ 0x101790
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x1017a0
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x1017b0
int ptr_triple(unsigned long long *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x1017c0
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

// Function: ptr_offset @ 0x1017e0
unsigned int ptr_offset(long param_1,int param_2)
{
 return *(unsigned int *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x1017f0
unsigned long ptr_diff(long param_1,long param_2)
{
 return (unsigned long)(param_1 - param_2) >> 2;
}

// Function: ptr_void @ 0x101800
int ptr_void(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 1) {
 iVar1 = (int)*(char *)param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 0) {
 return *param_1;
 }
 }
 return iVar1;
}

// Function: ptr_const @ 0x101820
int ptr_const(int *param_1)
{
 return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x101830
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x101840
void ptr_func_simple(void *param_1,unsigned int param_2)
{
 ((void (*)(unsigned int))param_1)(param_2);
 return;
}

// Function: ptr_func_complex @ 0x101850
void ptr_func_complex_callback(unsigned long long param_2, unsigned int *param_3)
{
 if (param_3 != 0) {
 *param_3 = 1;
 }
 return;
}

void ptr_func_complex(void *param_1,unsigned long long param_2)
{
 unsigned int local_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 unsigned int uStack_c;
 local_18 = 0;
 uStack_14 = 0;
 uStack_10 = 0;
 uStack_c = 0;
 ptr_func_complex_callback(param_2,&local_18);
 return;
}

// Function: ptr_cast @ 0x101880
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x101890
long opaque_handle_create(int param_1)
{
 return (long)param_1;
}

// Function: opaque_handle_op @ 0x1018a0
int opaque_handle_op(int param_1)
{
 return param_1 * 2;
}

// Function: test_pointer_types @ 0x1018b0
void test_pointer_types(void)
{
 long lVar1;
 unsigned long uVar2;
 int local_28 [4];
 unsigned int local_18;
 puts(&DAT_001025fb);
 lVar1 = 0;
 printf("PTR-L2-01 (ptr_single): %d\n",0xf);
 printf("PTR-L2-02 (ptr_double): %d\n",0xf);
 printf("PTR-L2-03 (ptr_triple): %d\n",6);
 local_18 = 5;
 local_28[0] = 1;
 local_28[1] = 2;
 local_28[2] = 3;
 local_28[3] = 4;
 uVar2 = 0;
 do {
 uVar2 = (unsigned long)(uint)((int)uVar2 + local_28[lVar1]);
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

// Function: struct_simple @ 0x101a00
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x101a10
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
 } while ((unsigned long)param_2 * 0xc != lVar2);
 return iVar1;
 }
 return 0;
}

// Function: struct_nested @ 0x101a50
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x101a60
int struct_deep(long param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x101a70
int struct_with_ptr(int *param_1)
{
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 return **(int **)(param_1 + 2) + *param_1;
 }
 return *param_1;
}

// Function: struct_bitfields @ 0x101a90
short struct_bitfields(ushort *param_1)
{
 ushort uVar1;
 uVar1 = *param_1;
 return (uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}

// Function: union_type @ 0x101ac0
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

// Function: union_array @ 0x101ae0
int union_array(long param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
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

// Function: enum_type @ 0x101b00
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x101b10
unsigned int enum_switch(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffff9d;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(&DAT_00102680 + (long)(int)param_1 * 4);
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x101b30
void struct_func_ptr(unsigned int *param_1)
{
 ((void (*)(unsigned int))**(void **)(param_1 + 2))(*param_1);
 return;
}

// Function: linked_list @ 0x101b40
int linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = *(int **)(param_1 + 2);
 } while (param_1 != (int *)0x0);
 }
 return iVar1;
}

// Function: doubly_linked_list @ 0x101b60
int doubly_linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = *(int **)(param_1 + 2);
 } while (param_1 != (int *)0x0);
 }
 return iVar1;
}

// Function: binary_tree_sum @ 0x101b80
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_1 != (int *)0x0) {
 iVar1 = *param_1;
 iVar2 = binary_tree_sum((int *)0x0);
 iVar3 = binary_tree_sum((int *)0x0);
 return iVar3 + iVar2 + iVar1;
 }
 return 0;
}

// Function: binary_tree @ 0x101bb0
void binary_tree(void)
{
 int test_data = 100;
 binary_tree_sum(&test_data);
 return;
}

// Function: graph_traverse @ 0x101bc0
int graph_traverse(long param_1)
{
 int *piVar1;
 int iVar2;
 unsigned long uVar3;
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

// Function: test_composite_types @ 0x101c00
void test_composite_types(void)
{
 int *piVar1;
 uint uVar2;
 long lVar3;
 uint uVar4;
 unsigned long uVar5;
 int local_f8 [2];
 unsigned int *local_f0;
 unsigned int local_e8 [2];
 unsigned int *local_e0;
 unsigned int local_d8 [2];
 unsigned long long local_d0;
 int local_c8 [2];
 unsigned int *local_c0;
 unsigned long long local_b8;
 unsigned int local_b0 [2];
 unsigned long long local_a8;
 int *local_a0;
 unsigned int local_98;
 unsigned int uStack_94;
 unsigned int uStack_90;
 unsigned int uStack_8c;
 int local_88;
 unsigned int uStack_84;
 unsigned int uStack_80;
 unsigned int uStack_7c;
unsigned long long local_78;
int *local_68[2];
char local_58 [16];
 char local_48 [16];
 char local_38 [16];
 char local_28 [16];
 unsigned long long local_18;
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
 local_f8[1] = 0;
 local_f0 = local_e8;
 local_e8[0] = 0x14;
 local_e8[1] = 0;
 local_e0 = local_d8;
 local_d8[0] = 0x1e;
 local_d8[1] = 0;
 local_d0 = 0;
 uVar2 = local_f8[0];
 uVar4 = 0;
 printf("CMP-L2-12 (linked_list): %d\n",(unsigned long)uVar2);
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
 printf("CMP-L2-13 (doubly_linked_list): %d\n",(unsigned long)uVar4);
 local_78 = 0;
 local_88 = 100;
 uStack_84 = 0;
 uStack_80 = 0;
 uStack_7c = 0;
 uVar2 = binary_tree_sum(&local_88);
 printf("CMP-L2-14 (binary_tree): %d\n",(unsigned long)uVar2);
 local_98 = 1;
 uStack_94 = 0;
 uStack_90 = 0;
 uStack_8c = 0;
 for (int i = 0; i < 16; i++) { local_28[i] = 0; }
 for (int i = 0; i < 16; i++) { local_38[i] = 0; }
 for (int i = 0; i < 16; i++) { local_48[i] = 0; }
 for (int i = 0; i < 16; i++) { local_58[i] = 0; }
local_68[0] = (int *)&local_98;
local_68[1] = (int *)0x0;
 lVar3 = 0;
 local_18 = 2;
 uVar5 = 0;
 do {
 piVar1 = local_68[(int)lVar3];
 if (piVar1 != (int *)0x0) {
 uVar5 = (unsigned long)(uint)((int)uVar5 + *piVar1);
 }
 lVar3 = lVar3 + 1;
 } while (lVar3 != local_18);
 printf("CMP-L2-15 (graph_traverse): %d\n",uVar5);
 return;
}

// Function: main @ 0x101e90
unsigned long long main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

// Function: _fini @ 0x101eac
void _fini(void)
{
 return;
}

