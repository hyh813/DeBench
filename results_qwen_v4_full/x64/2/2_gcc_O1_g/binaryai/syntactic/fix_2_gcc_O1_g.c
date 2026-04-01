// Decompiled by BinaryAI
// SHA256: eb2afdc0851926320db9fa939472ef7806234ad7127026285f866768caa1bfa7

#include <stdbool.h>

// Type definitions
typedef unsigned char byte;

// Global variables
int completed_0 = 0;
void *__dso_handle = 0;
char DAT_00103008[] = "Data Types L1 Test";
char DAT_001033e1[] = "Array Types Test";
char DAT_0010344f[] = "Callback";
char DAT_00103454[] = "Pointer Types Test";
char DAT_0010354a[] = "Composite Types Test";

// Function: _init @ 0x101000
int __gmon_start__(void);
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 ((void (*)(void))0x0)();
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
int __printf_chk(int __flag, const char *__format, ...)
{
 return 0;
}

// Function: _start @ 0x1010a0
int main(void);
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&auStack_8,0,0,param_1,auStack_8);
 do {
 } while( true );
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

// Function: process_int @ 0x101191
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: complex_callback @ 0x10119a
_Bool complex_callback(int *param_1,long *param_2)
{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}

// Function: process_char @ 0x1011ac
int process_char(int param_1)
{
 int iVar1;
 iVar1 = param_1 + 0x20;
 if (0x19 < (byte)((char)param_1 + 0xbfU)) {
 iVar1 = param_1;
 }
 return iVar1;
}

// Function: process_short @ 0x1011bd
int process_short(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: process_long @ 0x1011c5
long process_long(long param_1)
{
 return param_1 * 2;
}

// Function: process_ll @ 0x1011ce
long process_ll(long param_1)
{
 return param_1 * param_1;
}

// Function: process_float @ 0x1011da
float process_float(float param_1)
{
 return param_1 * 1.5 + 0.5;
}

// Function: process_double @ 0x1011ef
double process_double(double param_1)
{
 return param_1 * 0.5 + 0.1;
}

// Function: process_ld @ 0x101204
void process_ld(void)
{
 return;
}

// Function: process_bool @ 0x101213
unsigned int process_bool(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = ~param_1 & 1;
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: const_param @ 0x10122c
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x101236
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x101241
void test_data_types_l1(void)
{
 puts(&DAT_00103008);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000);
 __printf_chk(0x400c000000000000,1,"DT-L1-06 (process_float): %.2f\n", 1.5);
 __printf_chk(0x4000cccccccccccd,1,"DT-L1-07 (process_double): %.2f\n", 1.1);
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n", 0.0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x1013f1
int array_1d_stack(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 piVar1 = param_1 + (unsigned long)(param_2 - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 }
 return iVar2;
}

// Function: array_string @ 0x10141e
unsigned long array_string(char *param_1)
{
 char *pcVar1;
 unsigned long uVar2;
 unsigned long uVar3;
 if (*param_1 == '\0') {
 uVar3 = 0;
 }
 else {
 uVar2 = 1;
 do {
 uVar3 = uVar2 & 0xffffffff;
 pcVar1 = param_1 + uVar2;
 uVar2 = uVar2 + 1;
 } while (*pcVar1 != '\0');
 }
 return uVar3;
}

// Function: array_2d_stack @ 0x101443
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

// Function: array_3d @ 0x10145f
int array_3d(long param_1)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 piVar2 = (int *)(param_1 + 100);
 iVar1 = 0;
 do {
 piVar3 = piVar2 + -0x19;
 do {
 iVar1 = iVar1 + *piVar3 + piVar3[1] + piVar3[2] + piVar3[3] + piVar3[4];
 piVar3 = piVar3 + 5;
 } while (piVar3 != piVar2);
 piVar2 = piVar2 + 0x19;
 } while (piVar2 != (int *)(param_1 + 600));
 return iVar1;
}

// Function: array_vla @ 0x101498
int array_vla(int param_1,int *param_2)
{
 int *piVar1;
 int iVar2;
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 piVar1 = param_2 + (unsigned long)(param_1 - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_2;
 param_2 = param_2 + 1;
 } while (param_2 != piVar1);
 }
 return iVar2;
}

// Function: array_pointer @ 0x1014c5
int array_pointer(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 piVar1 = param_1 + (unsigned long)(param_2 - 1) * 10 + 10;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 10;
 } while (param_1 != piVar1);
 }
 return iVar2;
}

// Function: pointer_array @ 0x1014f6
int pointer_array(long param_1,int param_2)
{
 int *piVar1;
 long lVar2;
 int iVar3;
 int iVar4;
 iVar4 = 10;
 if (param_2 < 0xb) {
 iVar4 = param_2;
 }
 if (param_2 < 1) {
 iVar3 = 0;
 }
 else {
 lVar2 = 0;
 iVar3 = 0;
 do {
 piVar1 = *(int **)(param_1 + lVar2 * 8);
 if (piVar1 != (int *)0x0) {
 iVar3 = iVar3 + *piVar1;
 }
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < iVar4);
 }
 return iVar3;
}

// Function: array_complex_index @ 0x101535
unsigned int array_complex_index(long param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)
{
 if ((-1 < (int)(param_4 | param_5)) && ((int)param_4 < param_2)) {
 if ((int)param_5 < param_3) {
 return *(unsigned int *)(param_1 + (long)(int)(param_2 * param_5 + param_4) * 4);
 }
 return 0xffffffff;
 }
 return 0xffffffff;
}

// Function: array_oob @ 0x101565
int array_oob(int *param_1,unsigned int param_2)
{
 int *piVar1;
 int iVar2;
 if ((int)param_2 < 0) {
 iVar2 = 0;
 }
 else {
 piVar1 = param_1 + (unsigned long)param_2 + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 }
 return iVar2;
}

// Function: test_array_types @ 0x101591
void test_array_types(void)
{
 unsigned int uVar1;
 long lVar2;
 unsigned int *puVar3;
 int iVar4;
 int iVar5;
 unsigned int *puVar6;
 char *puVar7;
 long in_FS_OFFSET;
 unsigned int local_550;
 unsigned int local_54c;
 unsigned int local_548;
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
 unsigned int auStack_4c8 [20];
 unsigned int local_478 [10];
 unsigned int local_450;
 unsigned int local_428;
 unsigned int local_400;
 unsigned int local_3d8;
 char local_3a8 [400];
 char local_218 [100];
 unsigned int local_1b4 [103];
 unsigned int local_16;
 unsigned short local_12;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001033e1);
 local_538 = 1;
 local_534 = 2;
 local_530 = 3;
 local_52c = 4;
 local_528 = 5;
 uVar1 = array_1d_stack(&local_538,5);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_16 = 0x6c6c6568;
 local_12 = 0x6f;
 uVar1 = array_string(&local_16);
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar1);
 puVar7 = local_3a8;
 iVar4 = 0;
 do {
 lVar2 = 0;
 do {
 iVar5 = 0;
 if (iVar4 == (int)lVar2) {
 iVar5 = (int)lVar2;
 }
 *(int *)(puVar7 + lVar2 * 4) = iVar5;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 10);
 iVar4 = iVar4 + 1;
 puVar7 = puVar7 + 0x28;
 } while (iVar4 != 10);
 uVar1 = array_2d_stack(local_3a8);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 puVar6 = local_1b4;
 do {
 puVar3 = puVar6 + -0x19;
 do {
 *puVar3 = 1;
 puVar3[1] = 1;
 puVar3[2] = 1;
 puVar3[3] = 1;
 puVar3[4] = 1;
 puVar3 = puVar3 + 5;
 } while (puVar3 != puVar6);
 puVar6 = puVar6 + 0x19;
 } while (puVar6 != (unsigned int *)(local_1b4 + 103));
 uVar1 = array_3d(local_218);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",uVar1);
 local_544 = 10;
 local_540 = 0x14;
 local_53c = 0x1e;
 uVar1 = array_vla(3,&local_544);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",uVar1);
 local_478[0] = 0;
 local_450 = 10;
 local_428 = 0x14;
 local_400 = 0x1e;
 local_3d8 = 0x28;
 uVar1 = array_pointer(local_478,5);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_550 = 10;
 local_54c = 0x14;
 local_548 = 0x1e;
 local_500 = 0;
 local_4f8 = 0;
 local_4f0 = 0;
 local_4e8 = 0;
 local_4e0 = 0;
 local_4d8 = 0;
 local_4d0 = 0;
 local_518 = &local_550;
 local_510 = &local_54c;
 local_508 = &local_548;
 uVar1 = pointer_array(&local_518,3);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",uVar1);
 lVar2 = 0;
 do {
 auStack_4c8[lVar2] = (int)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x14);
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",auStack_4c8[17]);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 __stack_chk_fail();
}

// Function: ptr_single @ 0x1018a6
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x1018b0
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x1018bd
int ptr_triple(unsigned long long *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x1018cd
int ptr_increment(int *param_1,unsigned int param_2)
{
 int *piVar1;
 int iVar2;
 if (0 < (int)param_2) {
 piVar1 = param_1 + param_2;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}

// Function: ptr_offset @ 0x1018f2
unsigned int ptr_offset(long param_1,int param_2)
{
 return *(unsigned int *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x1018fd
unsigned long ptr_diff(long param_1,long param_2)
{
 return param_1 - param_2 >> 2 & 0xffffffff;
}

// Function: ptr_void @ 0x10190b
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

// Function: ptr_const @ 0x101925
int ptr_const(int *param_1)
{
 return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x10192e
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x10193a
unsigned int ptr_func_simple(void *param_1,unsigned int param_2)
{
 return ((unsigned int (*)(unsigned int))param_1)(param_2);
}

// Function: ptr_func_complex @ 0x10194e
unsigned int ptr_func_complex(void *param_1,unsigned long long param_2)
{
 long in_FS_OFFSET;
 char *local_28;
 unsigned long long local_20;
 long local_10;
 unsigned int result;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28 = &DAT_0010344f;
 local_20 = 0;
 result = ((unsigned int (*)(unsigned long long, char **, int))param_1)(param_2,&local_28,0);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return result;
 }
 __stack_chk_fail();
}

// Function: ptr_cast @ 0x10199f
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x1019a6
long opaque_handle_create(int param_1)
{
 return (long)param_1;
}

// Function: opaque_handle_op @ 0x1019ae
int opaque_handle_op(int param_1)
{
 return param_1 * 2;
}

// Function: test_pointer_types @ 0x1019b6
void test_pointer_types(void)
{
 unsigned int uVar1;
 long in_FS_OFFSET;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int *local_38;
 unsigned int **local_30;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103454);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 local_40 = 5;
 local_38 = &local_40;
 local_30 = &local_38;
 uVar1 = ptr_triple(&local_30);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",uVar1);
 local_28 = 1;
 local_24 = 2;
 local_20 = 3;
 local_1c = 4;
 local_18 = 5;
 uVar1 = ptr_increment(&local_28,5);
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
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 __stack_chk_fail();
}

// Function: struct_simple @ 0x101bea
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x101bf7
int struct_array(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 piVar1 = param_1 + (unsigned long)(param_2 - 1) * 3 + 3;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + param_1[1] + *param_1 + param_1[2];
 param_1 = param_1 + 3;
 } while (param_1 != piVar1);
 }
 return iVar2;
}

// Function: struct_nested @ 0x101c30
int struct_nested(int *param_1)
{
 return *param_1 + param_1[3];
}

// Function: struct_deep @ 0x101c3a
int struct_deep(long param_1)
{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}

// Function: struct_with_ptr @ 0x101c45
int struct_with_ptr(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 iVar1 = **(int **)(param_1 + 2);
 }
 return *param_1 + iVar1;
}

// Function: struct_bitfields @ 0x101c5e
short struct_bitfields(unsigned short *param_1)
{
 unsigned char bVar1;
 bVar1 = *(unsigned char *)param_1;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6);
}

// Function: union_type @ 0x101c88
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

// Function: union_array @ 0x101ca1
int union_array(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 piVar1 = param_1 + (unsigned long)(param_2 - 1) + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 }
 return iVar2;
}

// Function: enum_type @ 0x101cce
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x101cd8
unsigned int enum_switch(unsigned int param_1)
{
 unsigned int uVar1;
 if (param_1 == 2) {
 return 0x32;
 }
 if (param_1 < 3) {
 return -(unsigned int)(param_1 != 0) & 100;
 }
 uVar1 = 0xffffff9d;
 if (param_1 == 3) {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x101d02
unsigned int struct_func_ptr(unsigned int *param_1)
{
 return ((unsigned int (*)(unsigned int))**(void **)(param_1 + 2))(*param_1);
}

// Function: linked_list @ 0x101d17
int linked_list(int *param_1)
{
 int iVar1;
 if (param_1 != (int *)0x0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = *(int **)(param_1 + 2);
 } while (param_1 != (int *)0x0);
 return iVar1;
 }
 return 0;
}

// Function: doubly_linked_list @ 0x101d37
int doubly_linked_list(int *param_1)
{
 int iVar1;
 if (param_1 != (int *)0x0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = *(int **)(param_1 + 2);
 } while (param_1 != (int *)0x0);
 return iVar1;
 }
 return 0;
}

// Function: binary_tree_sum @ 0x101d57
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_1 != (int *)0x0) {
 iVar2 = binary_tree_sum(*(unsigned long long *)(param_1 + 2));
 iVar1 = *param_1;
 iVar3 = binary_tree_sum(*(unsigned long long *)(param_1 + 4));
 return iVar3 + iVar2 + iVar1;
 }
 return 0;
}

// Function: binary_tree @ 0x101d8e
int binary_tree(void)
{
 return binary_tree_sum((int *)0);
}

// Function: graph_traverse @ 0x101da0
int graph_traverse(int **param_1)
{
 int **ppiVar1;
 int *piVar2;
 int iVar3;
 if (*(int *)(param_1 + 10) < 1) {
 iVar3 = 0;
 }
 else {
 ppiVar1 = param_1 + (unsigned long)(*(int *)(param_1 + 10) - 1) + 1;
 iVar3 = 0;
 do {
 for (piVar2 = *param_1; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 2)) {
 iVar3 = iVar3 + *piVar2;
 }
 param_1 = param_1 + 1;
 } while (param_1 != ppiVar1);
 }
 return iVar3;
}

// Function: test_composite_types @ 0x101de1
void test_composite_types(void)
{
 unsigned int uVar1;
 long in_FS_OFFSET;
 unsigned short local_160 [2];
 unsigned int local_15c;
 unsigned int local_158 [2];
 unsigned long long local_150;
 unsigned int local_148 [2];
 unsigned int *local_140;
 unsigned int local_138 [2];
 void *local_130;
 unsigned int local_128 [2];
 unsigned long long local_120;
 unsigned int local_118 [2];
 unsigned long long local_110;
 unsigned long long local_108;
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
 unsigned long long local_88;
 unsigned int local_80 [2];
 unsigned long long local_78;
 int *local_70;
 int *local_68;
 unsigned long long local_60;
 unsigned long long local_58;
 unsigned long long local_50;
 unsigned long long local_48;
 unsigned long long local_40;
 unsigned long long local_38;
 unsigned long long local_30;
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_0010354a);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
 local_e8 = 1;
 local_e4 = 1;
 local_e0 = 1;
 local_dc = 2;
 local_d8 = 2;
 local_d4 = 2;
 uVar1 = struct_array(&local_e8,2);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 local_158[0] = 0x14;
 local_150 = 0;
 local_148[0] = 10;
 local_140 = local_158;
 uVar1 = struct_with_ptr(local_148);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_160[0] = 0x191d;
 local_15c = local_15c & 0xfff00000;
 uVar1 = struct_bitfields(local_160);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 local_f4 = 10;
 local_f0 = 0x14;
 local_ec = 0x1e;
 uVar1 = union_array(&local_f4,3);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 local_138[0] = 10;
 local_130 = process_int;
 uVar1 = struct_func_ptr(local_138);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
 local_c8[0] = 10;
 local_c0 = local_b8;
 local_b8[0] = 0x14;
 local_b0 = local_a8;
 local_a8[0] = 0x1e;
 local_a0 = 0;
 uVar1 = linked_list(local_c8);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",uVar1);
local_98[0] = 10;
local_70 = (int *)&local_98[0];
local_88 = 0;
 local_80[0] = 0x14;
 local_78 = 0;
 uVar1 = doubly_linked_list(local_70);
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_118[0] = 100;
 local_110 = 0;
 local_108 = 0;
 uVar1 = binary_tree_sum(local_118);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_128[0] = 1;
 local_120 = 0;
 local_60 = 0;
 local_58 = 0;
 local_50 = 0;
 local_48 = 0;
 local_40 = 0;
 local_38 = 0;
 local_30 = 0;
 local_28 = 0;
 local_20 = 0;
 local_68 = local_128;
 local_18 = 2;
 uVar1 = graph_traverse(&local_68);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",uVar1);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 __stack_chk_fail();
}

// Function: main @ 0x10221b
int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

// Function: _fini @ 0x102258
void _fini(void)
{
 return;
}

