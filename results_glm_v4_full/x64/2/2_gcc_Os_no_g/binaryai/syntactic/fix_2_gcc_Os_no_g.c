// Decompiled by BinaryAI
// SHA256: 0d1ba1564734ed3dafb791427699fae9651b44d57386ce2cde1eebac000530eb

#include <stdint.h>
#include <stdbool.h>

typedef unsigned int uint;
typedef unsigned char byte;

extern void *__dso_handle;
char completed_0 = 0;

// Data declarations
char DAT_00102004[] = "Testing Data Types L1";
char DAT_0010216f[] = "Testing Array Types";
char DAT_00102280[] = "Testing Complex";
char DAT_00102285[] = "Testing Pointer Types";
char DAT_0010241e[] = "Testing Composite Types";
char CSWTCH_61[] = {0, 10, 20, 30};



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101060
void __cxa_finalize(void *d)
{
 __cxa_finalize(d);
 return;
}

// Function: <EXTERNAL>::puts @ 0x101070
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101080
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__printf_chk @ 0x101090
int __printf_chk(int flag, const char *format, ...);

// Function: main @ 0x1010a0
int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}





// Function: double_value @ 0x1011b9
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: process_int @ 0x1011c1
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: complex_callback @ 0x1011ca
bool complex_callback(int *param_1,long *param_2)
{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}

// Function: process_char @ 0x1011db
int process_char(int param_1)
{
 if ((byte)((char)param_1 + 0xbfU) < 0x1a) {
 param_1 = param_1 + 0x20;
 }
 return param_1;
}

// Function: process_short @ 0x1011ed
int process_short(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: process_long @ 0x1011f5
long process_long(long param_1)
{
 return param_1 * 2;
}

// Function: process_ll @ 0x1011fe
long process_ll(long param_1)
{
 return param_1 * param_1;
}

// Function: process_float @ 0x10120a
float process_float(float param_1)
{
 return param_1 * 1.5 + 0.5;
}

// Function: process_double @ 0x10121f
double process_double(double param_1)
{
 return param_1 * 0.5 + 0.1;
}

// Function: process_ld @ 0x101234
void process_ld(void)
{
 return;
}

// Function: process_bool @ 0x101243
uint process_bool(uint param_1)
{
 uint uVar1;
 uVar1 = 0;
 if (0 < (int)param_1) {
 uVar1 = ~param_1 & 1;
 }
 return uVar1;
}

// Function: const_param @ 0x101258
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x101262
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x10126d
void test_data_types_l1(void)
{
 puts(&DAT_00102004);
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

// Function: array_1d_stack @ 0x1013ec
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

// Function: array_string @ 0x101406
unsigned long array_string(long param_1, const char *format)
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

// Function: array_2d_stack @ 0x10141d
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

// Function: array_3d @ 0x101436
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

// Function: array_vla @ 0x101464
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

// Function: array_pointer @ 0x10147e
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

// Function: pointer_array @ 0x10149c
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

// Function: array_complex_index @ 0x1014c8
unsigned int array_complex_index(long param_1,int param_2,int param_3,uint param_4,uint param_5)
{
 if (((-1 < (int)(param_4 | param_5)) && ((int)param_4 < param_2)) && ((int)param_5 < param_3)) {
 return *(unsigned int *)(param_1 + (long)(int)(param_2 * param_5 + param_4) * 4);
 }
 return 0xffffffff;
}

// Function: array_oob @ 0x1014ef
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

// Function: test_array_types @ 0x101509
void test_array_types(void)
{
 unsigned int uVar1;
 long lVar2;
 unsigned int *puVar3;
 char *puVar4;
 int iVar5;
 unsigned int *puVar6;
 int iVar7;
 long in_FS_OFFSET;
 byte bVar8;
 unsigned int local_534;
 unsigned int local_530;
 unsigned int local_52c;
 unsigned long long local_528;
 unsigned int local_520;
 unsigned long long local_51c;
 unsigned long long local_514;
 unsigned int local_50c;
 unsigned int *local_508;
 unsigned int *local_500;
 unsigned int *local_4f8;
 unsigned int local_4f0 [15];
 unsigned int auStack_4b4 [20];
 unsigned int local_464 [10];
 unsigned int local_43c;
 unsigned int local_414;
 unsigned int local_3ec;
 unsigned int local_3c4;
 char local_39c [400];
 unsigned int local_20c [125];
 char local_18 [2];
 unsigned int local_16;
 unsigned short local_12;
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
 uVar1 = array_string(&local_16,"ARR-L1-02 (array) %d\n");
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar1);
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
 } while ((unsigned int *)local_18 != puVar6);
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
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",auStack_4b4[17]);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: ptr_single @ 0x1017b6
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x1017c0
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x1017cd
int ptr_triple(unsigned long long *param_1, const char *format)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x1017dc
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

// Function: ptr_offset @ 0x1017f6
unsigned int ptr_offset(long param_1,int param_2)
{
 return *(unsigned int *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x101801
unsigned long ptr_diff(long param_1,long param_2)
{
 return param_1 - param_2 >> 2 & 0xffffffff;
}

// Function: ptr_void @ 0x10180f
int ptr_void(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 0) {
 return *param_1;
 }
 iVar1 = -1;
 if (param_2 == 1) {
 iVar1 = (int)*(char *)param_1;
 }
 return iVar1;
}

// Function: ptr_const @ 0x101825
int ptr_const(int *param_1)
{
 return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x10182e
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x10183a
int ptr_func_simple(void (*UNRECOVERED_JUMPTABLE)(unsigned int),unsigned int param_2)
{
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return 0;
}

// Function: ptr_func_complex @ 0x101845
int ptr_func_complex(bool (*param_1)(int*,long*),unsigned long long param_2)
{
 long in_FS_OFFSET;
 char *local_20;
 unsigned long long local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_18 = 0;
 local_20 = &DAT_00102280;
 (*param_1)((int*)param_2,(long*)&local_20);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return 0;
}

// Function: ptr_cast @ 0x101898
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x10189f
long opaque_handle_create(int param_1)
{
 return (long)param_1;
}

// Function: opaque_handle_op @ 0x1018a7
int opaque_handle_op(int param_1)
{
 return param_1 * 2;
}

// Function: test_pointer_types @ 0x1018af
void test_pointer_types(void)
{
 unsigned int uVar1;
 long in_FS_OFFSET;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int *local_38;
 unsigned int **local_30;
 unsigned long long local_24;
 unsigned long long local_1c;
 unsigned int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102285);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
  local_38 = &local_40;
 local_40 = 5;
 local_30 = &local_38;
 uVar1 = ptr_triple(&local_30,"PTR-L2-03 (ptr) %d\n");
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",uVar1);
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
 uVar1 = ptr_func_simple(double_value,5);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
 local_3c = 5;
 uVar1 = ptr_func_complex(complex_callback,&local_3c);
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: struct_simple @ 0x101ab7
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x101ac4
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

// Function: struct_nested @ 0x101ae8
int struct_nested(int *param_1)
{
 return *param_1 + param_1[3];
}

// Function: struct_deep @ 0x101af2
int struct_deep(long param_1)
{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}

// Function: struct_with_ptr @ 0x101afd
int struct_with_ptr(int *param_1, const char *format)
{
 int iVar1;
 iVar1 = 0;
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 iVar1 = **(int **)(param_1 + 2);
 }
 return *param_1 + iVar1;
}

// Function: struct_bitfields @ 0x101b13
int struct_bitfields(uint *param_1, const char *format)
{
 byte bVar1;
 bVar1 = *(byte *)param_1;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6 & 0x3ff);
}

// Function: union_type @ 0x101b3b
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

// Function: union_array @ 0x101b53
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

// Function: enum_type @ 0x101b6d
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x101b75
int enum_switch(uint param_1)
{
 int iVar1;
 iVar1 = -99;
 if (param_1 < 4) {
 iVar1 = (int)*(char *)((long)&CSWTCH_61 + (unsigned long)param_1);
 }
 return iVar1;
}

// Function: struct_func_ptr @ 0x101b91
int struct_func_ptr(unsigned int *param_1)
{
 (*(void (**)(unsigned int))(param_1 + 2))(*param_1);
 return 0;
}

// Function: linked_list @ 0x101b9d
int linked_list(int *param_1, const char *format)
{
 int iVar1;
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}

// Function: doubly_linked_list @ 0x101bb1
int doubly_linked_list(int *param_1, const char *format)
{
 int iVar1;
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}

// Function: binary_tree_sum @ 0x101bc5
int binary_tree_sum(int *param_1,unsigned long long param_2,unsigned long long param_3,unsigned long long param_4)
{
 int iVar1;
 uint uVar2;
 char auVar3 [16];
 uVar2 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 4)) {
 iVar1 = binary_tree_sum(*(int **)(param_1 + 2), 0, 0, 0);
 uVar2 = uVar2 + iVar1 + *param_1;
 }
 *(int *)(auVar3 + 4) = 0;
 *(int *)auVar3 = uVar2;
 *(unsigned long long *)(auVar3 + 8) = param_4;
 return uVar2;
}

// Function: graph_traverse @ 0x101bfa
int graph_traverse(long param_1, const char *format)
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

// Function: test_composite_types @ 0x101c25
void test_composite_types(void)
{
 unsigned int uVar1;
 long lVar2;
 unsigned int *puVar3;
 long in_FS_OFFSET;
 byte bVar4;
 unsigned long local_150;
 unsigned int local_148 [2];
 unsigned long long local_140;
 unsigned int local_138 [2];
 unsigned int *local_130;
 unsigned int local_128 [2];
 void *local_120;
 unsigned int local_118 [2];
 unsigned long long local_110;
 unsigned int local_108 [2];
 unsigned long long local_100;
 unsigned long long local_f8;
 unsigned long long local_ec;
 unsigned int local_e4;
 unsigned long long local_e0;
 unsigned long long local_d8;
 unsigned long long local_d0;
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
 unsigned int *local_68;
 unsigned int local_60 [18];
 unsigned int local_18;
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
 uVar1 = struct_with_ptr(local_138,"CMP-L2-05 %d\n");
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
  local_150 = local_150 & 0xfff00000ffff0000 | 0x191d;
  uVar1 = struct_bitfields(&local_150,"CMP %d\n");
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
 linked_list(local_c8,"CMP-L2-12 (linked_list): %d\n");
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",0x2c);
  local_70 = local_98;
 local_90 = local_80;
 local_98[0] = 10;
 local_88 = 0;
 local_80[0] = 0x14;
 local_78 = 0;
 uVar1 = doubly_linked_list(local_70,"CMP-L2-13 %d\n");
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_108[0] = 100;
 local_100 = 0;
 local_f8 = 0;
 uVar1 = binary_tree_sum(local_108,0,0,0);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",uVar1);
 puVar3 = local_60;
 for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
 *puVar3 = 0;
 puVar3 = puVar3 + (unsigned long)bVar4 * -2 + 1;
 }
  local_68 = local_118;
 local_118[0] = 1;
 local_110 = 0;
 local_18 = 2;
 uVar1 = graph_traverse(&local_68,"CMP %d\n");
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",uVar1);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}



