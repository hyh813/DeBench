// Decompiled by BinaryAI
// SHA256: b3068b509c859f17b503fc4780fb9a9f69e4869837aafbfab7471acb481a5ef5

#include <stdbool.h>

// Global variables
char completed_0 = 0;
void *__dso_handle = 0;
char DAT_00103008[] = "Data Types L1";
char DAT_001033e1[] = "Array Types";
char DAT_0010344f[] = "";
char DAT_00103454[] = "Pointer Types";
char DAT_0010354a[] = "Composite Types";
unsigned int CSWTCH_61[4] = {0, 10, 20, 30};

// Forward declarations
int binary_tree(int *param_1);
int binary_tree_sum(int *param_1);
int graph_traverse(int **param_1);
void test_data_types_l1(void);
void test_array_types(void);
void test_pointer_types(void);
void test_composite_types(void);

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

// Function: <EXTERNAL>::__cxa_finalize @ 0x101060
void __cxa_finalize(void *param_1)
{
 __cxa_finalize(param_1);
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
int __printf_chk(int flag, const char *format, ...)
{
 int iVar1;
 iVar1 = 0;
 return iVar1;
}

// Function: main @ 0x1010a0
unsigned long long main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

// Function: _start @ 0x1010d0
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,auStack_8,0,0,param_1,auStack_8);
 do {
 } while( 1 );
}

// Function: deregister_tm_clones @ 0x101100
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101130
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101170
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

// Function: process_char @ 0x1011c0
int process_char(int param_1)
{
 int iVar1;
 iVar1 = param_1 + 0x20;
 if (0x19 < (unsigned char)((char)param_1 + 0xbfU)) {
 iVar1 = param_1;
 }
 return iVar1;
}

// Function: process_short @ 0x1011e0
int process_short(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: process_int @ 0x1011f0
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: process_long @ 0x101200
long process_long(long param_1)
{
 return param_1 * 2;
}

// Function: process_ll @ 0x101210
long process_ll(long param_1)
{
 return param_1 * param_1;
}

// Function: process_float @ 0x101220
float process_float(float param_1)
{
 return param_1 * 1.5 + 0.5;
}

// Function: process_double @ 0x101240
double process_double(double param_1)
{
 return param_1 * 0.5 + 0.1;
}

// Function: process_ld @ 0x101260
void process_ld(void)
{
 return;
}

// Function: process_bool @ 0x101270
unsigned int process_bool(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = ~param_1 & 1;
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: const_param @ 0x101290
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x1012a0
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x1012b0
void test_data_types_l1(void)
{
 puts(&DAT_00103008);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",1.0);
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",1.0);
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",1.0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x101440
int array_1d_stack(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (0 < param_2) {
 piVar1 = param_1 + (unsigned long)(param_2 - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}

// Function: array_string @ 0x101470
unsigned long array_string(char *param_1)
{
 char *pcVar1;
 unsigned long uVar2;
 unsigned long uVar3;
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

// Function: array_2d_stack @ 0x1014a0
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

// Function: array_3d @ 0x1014c0
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

// Function: array_vla @ 0x101500
int array_vla(int param_1,int *param_2)
{
 int *piVar1;
 int iVar2;
 if (0 < param_1) {
 piVar1 = param_2 + (unsigned long)(param_1 - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_2;
 param_2 = param_2 + 1;
 } while (param_2 != piVar1);
 return iVar2;
 }
 return 0;
}

// Function: array_pointer @ 0x101530
int array_pointer(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (0 < param_2) {
 piVar1 = param_1 + (unsigned long)(param_2 - 1) * 10 + 10;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 10;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}

// Function: pointer_array @ 0x101570
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

// Function: array_complex_index @ 0x1015c0
unsigned int array_complex_index(long param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)
{
 if (((-1 < (int)(param_4 | param_5)) && ((int)param_4 < param_2)) && ((int)param_5 < param_3)) {
 return *(unsigned int *)(param_1 + (long)(int)(param_2 * param_5 + param_4) * 4);
 }
 return 0xffffffff;
}

// Function: array_oob @ 0x1015f0
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

// Function: test_array_types @ 0x101620
void test_array_types(void)
{
 char *pcVar1;
 unsigned long uVar2;
 long lVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int iVar7;
 int *piVar8;
 int iVar9;
 unsigned long uVar10;
 long in_FS_OFFSET;
 unsigned int local_3f8 [20];
 int local_3a8 [110];
 int local_1f0 [15];
 int local_1b4 [103];
 unsigned int local_16;
 unsigned short local_12;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001033e1);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
 local_16 = 0x6c6c6568;
 local_12 = 0x6f;
 uVar2 = 1;
 do {
 uVar10 = uVar2 & 0xffffffff;
 pcVar1 = (char *)((long)&local_16 + uVar2);
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
 } while (piVar5 != (int *)&local_1b4[102]);
 iVar7 = 0;
 do {
 piVar5 = piVar8 + -0x19;
 do {
 piVar6 = piVar5 + 5;
 iVar7 = iVar7 + *piVar5 + piVar5[1] + piVar5[2] + piVar5[3] + piVar5[4];
 piVar5 = piVar6;
 } while (piVar8 != piVar6);
 piVar8 = piVar8 + 0x19;
 } while (piVar8 != (int *)&local_1b4[102]);
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
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",local_3f8[17]);
 return;
 }
 __stack_chk_fail();
}

// Function: ptr_single @ 0x101840
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x101850
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x101860
int ptr_triple(unsigned long long *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x101870
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

// Function: ptr_offset @ 0x1018a0
unsigned int ptr_offset(long param_1,int param_2)
{
 return *(unsigned int *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x1018b0
unsigned long ptr_diff(long param_1,long param_2)
{
 return param_1 - param_2 >> 2 & 0xffffffff;
}

// Function: ptr_void @ 0x1018c0
int ptr_void(int *param_1,int param_2)
{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 return (int)*(char *)param_1;
 }
 return -1;
}

// Function: ptr_const @ 0x1018f0
int ptr_const(int *param_1)
{
 return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x101900
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x101910
void ptr_func_simple(void *UNRECOVERED_JUMPTABLE,unsigned int param_2)
{
 ((void (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: ptr_func_complex @ 0x101920
void ptr_func_complex(void *param_1,unsigned long long param_2)
{
 long in_FS_OFFSET;
 char *local_28;
 unsigned long long local_20;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_20 = 0;
 local_28 = &DAT_0010344f;
 ((void (*)(unsigned long long, char **))param_1)(param_2,&local_28);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 __stack_chk_fail();
}

// Function: ptr_cast @ 0x101970
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x101980
long opaque_handle_create(int param_1)
{
 return (long)param_1;
}

// Function: opaque_handle_op @ 0x101990
int opaque_handle_op(int param_1)
{
 return param_1 * 2;
}

// Function: test_pointer_types @ 0x1019a0
void test_pointer_types(void)
{
 unsigned long long *puVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned int local_18;
 int local_14;
 long local_10;
 puVar1 = &local_28;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103454);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",6);
 local_18 = 5;
 iVar2 = 1;
 local_28 = 0x200000001;
 iVar3 = 0;
 local_20 = 0x400000003;
 while( 1 ) {
 puVar1 = (unsigned long long *)((long)puVar1 + 4);
 iVar3 = iVar3 + iVar2;
 if (puVar1 == (unsigned long long *)&local_14) break;
 iVar2 = *(int *)puVar1;
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
 __stack_chk_fail();
}

// Function: struct_simple @ 0x101b80
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x101b90
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
 } while (piVar2 != param_1 + (unsigned long)(param_2 - 1) * 3 + 3);
 return iVar3;
 }
 return 0;
}

// Function: struct_nested @ 0x101be0
int struct_nested(int *param_1)
{
 return *param_1 + param_1[3];
}

// Function: struct_deep @ 0x101bf0
int struct_deep(long param_1)
{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}

// Function: struct_with_ptr @ 0x101c00
int struct_with_ptr(int *param_1)
{
 int iVar1;
 iVar1 = *param_1;
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 iVar1 = iVar1 + **(int **)(param_1 + 2);
 }
 return iVar1;
}

// Function: struct_bitfields @ 0x101c20
short struct_bitfields(unsigned short *param_1)
{
 unsigned char bVar1;
 bVar1 = *(unsigned char *)param_1;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6);
}

// Function: union_type @ 0x101c50
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

// Function: union_array @ 0x101c80
int union_array(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (0 < param_2) {
 piVar1 = param_1 + (unsigned long)(param_2 - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}

// Function: enum_type @ 0x101cb0
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x101cc0
unsigned int enum_switch(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffff9d;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(CSWTCH_61 + (unsigned long)param_1 * 4);
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x101ce0
int struct_func_ptr(unsigned int *param_1)
{
 ((void (*)(unsigned int))**(void **)(param_1 + 2))(*param_1);
 return 0x15;
}

// Function: linked_list @ 0x101cf0
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

// Function: doubly_linked_list @ 0x101d20
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

// Function: binary_tree_sum @ 0x101d50
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
 int *local_90;
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
 local_90 = param_1;
 if (param_1 != (int *)0x0) {
 do {
 local_7c = 0;
 local_84 = *local_90;
 local_a0 = *(int **)(local_90 + 2);
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
 iVar2 = binary_tree_sum((int *)(piVar13 + 2));
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
 local_90 = *(int **)(local_90 + 4);
 } while (local_90 != (int *)0x0);
 }
 return local_58;
}

// Function: binary_tree @ 0x101fb0
int binary_tree(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar3 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar2 = binary_tree_sum(*(int **)(param_1 + 2));
 iVar1 = *param_1;
 param_1 = *(int **)(param_1 + 4);
 iVar3 = iVar3 + iVar2 + iVar1;
 } while (param_1 != (int *)0x0);
 }
 return iVar3;
}

// Function: graph_traverse @ 0x101ff0
int graph_traverse(int **param_1)
{
 int **ppiVar1;
 int *piVar2;
 int iVar3;
 if (0 < *(int *)(param_1 + 10)) {
 iVar3 = 0;
 ppiVar1 = param_1 + (unsigned long)(*(int *)(param_1 + 10) - 1) + 1;
 do {
 piVar2 = *param_1;
 while (piVar2 != (int *)0x0) {
 iVar3 = iVar3 + *piVar2;
 piVar2 = *(int **)(piVar2 + 2);
 }
 param_1 = param_1 + 1;
 } while (param_1 != ppiVar1);
 return iVar3;
 }
 return 0;
}

// Function: test_composite_types @ 0x102040
void test_composite_types(void)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 long in_FS_OFFSET;
 int local_68 [2];
 unsigned int *local_60;
 unsigned int local_58 [2];
 unsigned long long local_50;
 int local_48 [2];
 unsigned int *local_40;
 unsigned long long local_38;
 unsigned int local_30 [2];
 unsigned long long local_28;
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
 local_68[1] = 0;
 local_58[0] = 0x1e;
 local_50 = 0;
 piVar2 = local_68;
 iVar3 = 0;
 iVar3 = iVar3 + piVar2[0] + piVar2[1];
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
 iVar3 = 0;
iVar3 = iVar3 + local_48[0];
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
 iVar1 = binary_tree((int *)0);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",iVar1);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",1);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 __stack_chk_fail();
}

// Function: _fini @ 0x102280
void _fini(void)
{
 return;
}

