// Decompiled by BinaryAI
// SHA256: 57b3357f430e9c38fa05e2608a4bebce553faeec535d7f13bcbb6a79640e89f4

#include <stdint.h>

typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char byte;

// Global declarations for stack protection and floating point
unsigned long fpcr = 0;
unsigned long fpsr = 0;
unsigned long ___stack_chk_guard = 0;

// External function declarations
void __libc_start_main(int (*main)(void), int argc, void **argv, void (*init)(void), void (*fini)(void), void *stack);
void __cxa_finalize(void *);
void __printf_chk(int flag, const char *format, ...);
void __stack_chk_fail(void);
void __gmon_start__(void);
void abort(void);
int puts(const char *__s);
void call_weak_fn(void);
unsigned long __addtf3(unsigned long param_1, unsigned long param_2);
unsigned long __multf3(unsigned long param_1, unsigned long param_2);
void __sfp_handle_exceptions(unsigned long param_1, unsigned long long param_2);

// Macro for signed borrow detection
#define SBORROW4(a,b) ((int)(a) < (int)(b))

// Macro for carry detection in 64-bit addition
#define CARRY8(a,b) (((a) + (b)) < (a))

// Global data declarations
char DAT_00102c58[] = "Data Types L1";
char DAT_00102de8[] = "Array Types";
char DAT_00102f18[] = "Pointer Test";
char DAT_00102f20[] = "Pointer Types";
char DAT_001030f8[] = "Composite Types";
void *stack0x00000008 = 0;































// Function: double_value @ 0x100894
static int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: process_int @ 0x10089c
static int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: complex_callback @ 0x1008a8
static bool complex_callback(int *param_1,long *param_2)
{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}

// Function: process_char @ 0x1008c4
static char process_char(char param_1)
{
 if ((byte)(param_1 + 0xbfU) < 0x1a) {
 param_1 = param_1 + ' ';
 }
 return param_1;
}

// Function: process_short @ 0x1008e8
static int process_short(short param_1,short param_2)
{
 return (int)param_2 + (int)param_1;
}

// Function: process_long @ 0x1008f4
static long process_long(long param_1)
{
 return param_1 << 1;
}

// Function: process_ll @ 0x1008fc
static long process_ll(long param_1)
{
 return param_1 * param_1;
}

// Function: process_float @ 0x100904
static float process_float(float param_1)
{
 return param_1 * 1.5 + 0.5;
}

// Function: process_double @ 0x100918
static double process_double(double param_1)
{
 return param_1 * 0.5 + 0.1;
}

// Function: process_ld @ 0x100930
static void process_ld(unsigned long long param_1)
{
 unsigned long long uVar1;
 uVar1 = __multf3(param_1,param_1);
 __addtf3(uVar1,0);
 return;
}

// Function: process_bool @ 0x100958
static uint process_bool(uint param_1)
{
 uint uVar1;
 uVar1 = ~param_1 & 1;
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: const_param @ 0x10096c
static int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x100978
static int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x100988
static void test_data_types_l1(void)
{
 puts(DAT_00102c58);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",1.5);
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",0.6);
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",0.0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x100adc
static int array_1d_stack(long param_1,int param_2)
{
 int iVar1;
 long lVar2;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_2);
 }
 return iVar1;
}

// Function: array_string @ 0x100b10
static unsigned long array_string(char *param_1)
{
 char *pcVar1;
 unsigned long uVar2;
 unsigned long uVar3;
 if (*param_1 == '\0') {
 uVar2 = 0;
 }
 else {
 uVar3 = 1;
 do {
 uVar2 = uVar3 & 0xffffffff;
 pcVar1 = param_1 + uVar3;
 uVar3 = uVar3 + 1;
 } while (*pcVar1 != '\0');
 }
 return uVar2;
}

// Function: array_2d_stack @ 0x100b3c
static int array_2d_stack(int *param_1)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 iVar1 = 0;
 piVar2 = param_1;
 do {
 piVar3 = piVar2 + 0xb;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while (piVar3 != param_1 + 0x6e);
 return iVar1;
}

// Function: array_3d @ 0x100b5c
static int array_3d(long param_1)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 piVar3 = (int *)(param_1 + 100);
 iVar1 = 0;
 do {
 piVar2 = piVar3 + -0x19;
 do {
 iVar1 = iVar1 + *piVar2 + piVar2[1] + piVar2[2] + piVar2[3] + piVar2[4];
 piVar2 = piVar2 + 5;
 } while (piVar2 != piVar3);
 piVar3 = piVar3 + 0x19;
 } while (piVar3 != (int *)(param_1 + 600));
 return iVar1;
}

// Function: array_vla @ 0x100bb0
static int array_vla(int param_1,long param_2)
{
 int iVar1;
 long lVar2;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_2 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_1);
 }
 return iVar1;
}

// Function: array_pointer @ 0x100be4
static int array_pointer(int *param_1,int param_2)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 piVar2 = param_1;
 do {
 piVar3 = piVar2 + 10;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while (piVar3 != param_1 + (unsigned long)(param_2 - 1) * 10 + 10);
 }
 return iVar1;
}

// Function: pointer_array @ 0x100c20
static int pointer_array(long param_1,int param_2)
{
 int iVar1;
 long lVar2;
 int *piVar3;
 int iVar4;
 iVar4 = param_2;
 if (10 < param_2) {
 iVar4 = 10;
 }
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 piVar3 = *(int **)(param_1 + lVar2 * 8);
 if (piVar3 != (int *)0x0) {
 iVar1 = iVar1 + *piVar3;
 }
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < iVar4);
 }
 return iVar1;
}

// Function: array_complex_index @ 0x100c6c
static unsigned int array_complex_index(long param_1,int param_2,int param_3,uint param_4,uint param_5)
{
 bool bVar1;
 bool bVar2;
 unsigned int uVar3;
 bVar2 = -1 < (int)(param_4 | param_5);
 bVar1 = false;
 if (bVar2) {
 bVar1 = (int)(param_4 - param_2) < 0;
 }
 if (bVar1 == (bVar2 && SBORROW4(param_4,param_2))) {
 uVar3 = 0xffffffff;
 }
 else if ((int)param_5 < param_3) {
 uVar3 = *(unsigned int *)(param_1 + (long)(int)(param_4 + param_2 * param_5) * 4);
 }
 else {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}

// Function: array_oob @ 0x100ca0
static int array_oob(int *param_1,uint param_2)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 if ((int)param_2 < 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 piVar2 = param_1;
 do {
 piVar3 = piVar2 + 1;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while (piVar3 != param_1 + (unsigned long)param_2 + 1);
 }
 return iVar1;
}

// Function: test_array_types @ 0x100cd0
static void test_array_types(void)
{
 unsigned int uVar1;
 int iVar2;
 int iVar3;
 long lVar4;
 unsigned int *puVar5;
 int *piVar6;
 char *puVar7;
 unsigned int *puVar8;
 unsigned int local_534;
 unsigned int local_530;
 unsigned int local_52c;
 unsigned int local_528;
 unsigned int local_524;
 unsigned int local_520;
 unsigned long long local_518;
 unsigned long long uStack_510;
 unsigned int local_508;
 unsigned int *local_500;
 unsigned int *local_4f8;
 unsigned int *local_4f0;
 unsigned long long local_4e8;
 unsigned long long uStack_4e0;
 unsigned long long uStack_4d8;
 unsigned long long uStack_4d0;
 unsigned long long local_4c8;
 unsigned long long uStack_4c0;
 unsigned long long local_4b8;
 int aiStack_4b0 [17];
 unsigned int local_46c;
 unsigned int local_460 [10];
 unsigned int local_438;
 unsigned int local_410;
 unsigned int local_3e8;
 unsigned int local_3c0;
 char local_398 [400];
 unsigned int local_208 [125];
 unsigned int uStack_14;
 union { unsigned int _0_4_; byte _0_1_; byte _1_1_; byte _2_1_; byte _3_1_; } local_10;
 union { unsigned short _0_2_; byte _0_1_; byte _1_1_; } local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(DAT_00102de8);
 local_518 = 0x200000001;
 uStack_510 = 0x400000003;
 local_508 = 5;
 uVar1 = array_1d_stack((long)&local_518,5);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_10._0_1_ = 'h';
 local_10._1_1_ = 'e';
 local_10._2_1_ = 'l';
 local_10._3_1_ = 'l';
 local_c._0_1_ = 'o';
 local_c._1_1_ = '\0';
 uVar1 = array_string(local_398);
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar1);
 puVar7 = local_398;
 iVar3 = 0;
 do {
 lVar4 = 0;
 do {
 iVar2 = (int)lVar4;
 if (iVar3 != iVar2) {
 iVar2 = 0;
 }
 *(int *)(puVar7 + lVar4 * 4) = iVar2;
 lVar4 = lVar4 + 1;
 } while (lVar4 != 10);
 iVar3 = iVar3 + 1;
 puVar7 = puVar7 + 0x28;
 } while (iVar3 != 10);
 uVar1 = array_2d_stack((int *)local_398);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 puVar8 = local_208;
 do {
 iVar3 = 0;
 puVar5 = puVar8;
 do {
 *puVar5 = 1;
 puVar5[1] = 1;
 puVar5[2] = 1;
 puVar5[3] = 1;
 puVar5[4] = 1;
 iVar3 = iVar3 + 1;
 puVar5 = puVar5 + 5;
 } while (iVar3 != 5);
 puVar8 = puVar8 + 0x19;
 } while (puVar8 != &uStack_14);
 uVar1 = array_3d((long)local_208);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",uVar1);
 local_528 = 10;
 local_524 = 0x14;
 local_520 = 0x1e;
 uVar1 = array_vla(3,(long)&local_528);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",uVar1);
 local_460[0] = 0;
 local_438 = 10;
 local_410 = 0x14;
 local_3e8 = 0x1e;
 local_3c0 = 0x28;
 uVar1 = array_pointer(local_460,5);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_534 = 10;
 local_530 = 0x14;
 local_52c = 0x1e;
 uStack_4e0 = 0;
 local_4e8 = 0;
 uStack_4d0 = 0;
 uStack_4d8 = 0;
 uStack_4c0 = 0;
 local_4c8 = 0;
 local_4b8 = 0;
 local_500 = &local_534;
 local_4f8 = &local_530;
 local_4f0 = &local_52c;
 uVar1 = pointer_array((long)&local_500,3);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",uVar1);
 iVar3 = 0;
 piVar6 = aiStack_4b0;
 do {
 *piVar6 = iVar3;
 iVar3 = iVar3 + 1;
 piVar6 = piVar6 + 1;
 } while (iVar3 != 0x14);
 local_46c = array_complex_index((long)aiStack_4b0,0x14,5,0,4);
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",local_46c);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: ptr_single @ 0x100f54
static int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x100f60
static int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x100f70
static int ptr_triple(unsigned long long *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x100f84
static int ptr_increment(int *param_1,uint param_2)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 piVar2 = param_1;
 do {
 piVar3 = piVar2 + 1;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while (piVar3 != param_1 + param_2);
 }
 return iVar1;
}

// Function: ptr_offset @ 0x100fb4
static unsigned int ptr_offset(long param_1,int param_2)
{
 return *(unsigned int *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x100fbc
static unsigned long ptr_diff(long param_1,long param_2)
{
 return (unsigned long)(param_1 - param_2) >> 2 & 0xffffffff;
}

// Function: ptr_void @ 0x100fc8
static uint ptr_void(uint *param_1,int param_2)
{
 uint uVar1;
 if (param_2 == 0) {
 uVar1 = *param_1;
 }
 else if (param_2 == 1) {
 uVar1 = (uint)*(byte *)param_1;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: ptr_const @ 0x100fec
static int ptr_const(int *param_1)
{
 return *param_1 << 1;
}

// Function: ptr_const_ptr @ 0x100ff8
static void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x10100c
static void ptr_func_simple(void *param_1,unsigned int param_2)
{
 ((void (*)(unsigned int))param_1)(param_2);
 return;
}

// Function: ptr_func_complex @ 0x101028
static void ptr_func_complex(void *param_1,unsigned long long param_2)
{
 unsigned long long uVar1;
 char *local_18;
 unsigned long long local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_18 = DAT_00102f18;
 local_10 = 0;
 uVar1 = ((unsigned long long (*)(unsigned long long,char **,void *,int))param_1)(param_2,&local_18,param_1,0);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: ptr_cast @ 0x10108c
static unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x101094
static long opaque_handle_create(int param_1)
{
 return (long)param_1;
}

// Function: opaque_handle_op @ 0x10109c
static int opaque_handle_op(int param_1)
{
 return param_1 << 1;
}

// Function: test_pointer_types @ 0x1010a4
static void test_pointer_types(void)
{
 unsigned int uVar1;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int *local_30;
 unsigned int **local_28;
 unsigned long long local_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(DAT_00102f20);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 local_38 = 5;
 local_30 = &local_38;
 local_28 = &local_30;
 uVar1 = ptr_triple((unsigned long long *)&local_28);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",uVar1);
 local_20 = 0x200000001;
 uStack_18 = 0x400000003;
 local_10 = 5;
 uVar1 = ptr_increment((int *)&local_20,5);
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 uVar1 = double_value(5);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
 local_34 = 5;
 complex_callback(&local_34,(long *)0);
 ptr_func_complex(&local_34,0);
 uVar1 = 1;
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: struct_simple @ 0x101280
static int struct_simple(int *param_1)
{
 return *param_1 + param_1[1] + param_1[2];
}

// Function: struct_array @ 0x101298
static int struct_array(int *param_1,int param_2)
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
 iVar2 = iVar2 + *param_1 + param_1[1] + param_1[2];
 param_1 = param_1 + 3;
 } while (param_1 != piVar1);
 }
 return iVar2;
}

// Function: struct_nested @ 0x1012e8
static int struct_nested(int *param_1)
{
 return *param_1 + param_1[3];
}

// Function: struct_deep @ 0x1012f8
static int struct_deep(long param_1)
{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}

// Function: struct_with_ptr @ 0x101308
static int struct_with_ptr(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 iVar1 = **(int **)(param_1 + 2);
 }
 return *param_1 + iVar1;
}

// Function: struct_bitfields @ 0x101324
static int struct_bitfields(uint *param_1)
{
 uint uVar1;
 uVar1 = *param_1;
 return (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7) + (uVar1 >> 6 & 0x3ff);
}

// Function: union_type @ 0x101348
static float union_type(float *param_1,int param_2)
{
 float fVar1;
 if (param_2 == 0) {
 fVar1 = *param_1;
 }
 else if (param_2 == 1) {
 fVar1 = (float)(int)*param_1;
 }
 else {
 fVar1 = (float)(uint)*(byte *)param_1;
 }
 return fVar1;
}

// Function: union_array @ 0x101370
static int union_array(long param_1,int param_2)
{
 int iVar1;
 long lVar2;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_2);
 }
 return iVar1;
}

// Function: enum_type @ 0x1013a4
static int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x1013b0
static unsigned int enum_switch(uint param_1)
{
 unsigned int uVar1;
 if (param_1 == 2) {
 uVar1 = 0x32;
 }
 else if (param_1 < 3) {
 uVar1 = 100;
 if (param_1 == 0) {
 uVar1 = 0;
 }
 }
 else {
 uVar1 = 0xffffff9d;
 if (param_1 == 3) {
 uVar1 = 0xffffffff;
 }
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x1013e8
static void struct_func_ptr(unsigned int *param_1)
{
 ((void (*)(unsigned int))*(void **)(param_1 + 2))(*param_1);
 return;
}

// Function: linked_list @ 0x101404
static int linked_list(int *param_1)
{
 int iVar1;
 if (param_1 == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = *(int **)(param_1 + 2);
 } while (param_1 != (int *)0x0);
 }
 return iVar1;
}

// Function: doubly_linked_list @ 0x10142c
static int doubly_linked_list(int *param_1)
{
 int iVar1;
 if (param_1 == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = *(int **)(param_1 + 2);
 } while (param_1 != (int *)0x0);
 }
 return iVar1;
}

// Function: binary_tree_sum @ 0x101454
static int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_1 != (int *)0x0) {
 iVar2 = binary_tree_sum((int *)(param_1 + 2));
 iVar1 = *param_1;
 iVar3 = binary_tree_sum((int *)(param_1 + 4));
 return iVar2 + iVar1 + iVar3;
 }
 return 0;
}

// Function: binary_tree @ 0x101498
static void binary_tree(void)
{
 int local_10 = 0;
 binary_tree_sum(&local_10);
 return;
}

// Function: graph_traverse @ 0x1014ac
static int graph_traverse(long param_1)
{
 int iVar1;
 int *piVar2;
 long lVar3;
 if (*(int *)(param_1 + 0x50) < 1) {
 iVar1 = 0;
 }
 else {
 lVar3 = 0;
 iVar1 = 0;
 do {
 for (piVar2 = *(int **)(param_1 + lVar3 * 8); piVar2 != (int *)0x0;
 piVar2 = *(int **)(piVar2 + 2)) {
 iVar1 = iVar1 + *piVar2;
 }
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < *(int *)(param_1 + 0x50));
 }
 return iVar1;
}

// Function: test_composite_types @ 0x1014f4
static void test_composite_types(void)
{
 unsigned int uVar1;
 unsigned long local_158;
 unsigned int local_150;
 unsigned int local_14c;
 unsigned int local_148;
 unsigned int local_140 [2];
 unsigned long long local_138;
 unsigned int local_130 [2];
 unsigned int *local_128;
 unsigned int local_120 [3];
 unsigned long local_118;
 unsigned int local_110 [2];
 unsigned long long local_108;
 unsigned int local_100 [2];
 unsigned long long local_f8;
 unsigned long long local_f0;
 unsigned long long local_e8;
 unsigned int local_e0;
 unsigned long long local_d8;
 unsigned long long uStack_d0;
 unsigned long long local_c8;
 unsigned int local_c0 [2];
 unsigned int *local_b8;
 unsigned int local_b0 [2];
 unsigned int *local_a8;
 unsigned int local_a0 [2];
 unsigned long long local_98;
 unsigned int local_90 [2];
 unsigned int *local_88;
 unsigned long long local_80;
 unsigned int local_78 [2];
 unsigned long long local_70;
 unsigned int *local_68;
 unsigned int *local_60;
 unsigned long long local_58;
 unsigned long long uStack_50;
 unsigned long long uStack_48;
 unsigned long long uStack_40;
 unsigned long long local_38;
 unsigned long long uStack_30;
 unsigned long long uStack_28;
 unsigned long long uStack_20;
 unsigned long long local_18;
 unsigned long long uStack_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(DAT_001030f8);
 local_150 = 1;
 local_14c = 2;
 local_148 = 3;
 uVar1 = struct_simple(&local_150);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",uVar1);
 local_d8 = 0x100000001;
 uStack_d0 = 0x200000001;
 local_c8 = 0x200000002;
 uVar1 = struct_array((int *)&local_d8,2);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 local_140[0] = 0x14;
 local_138 = 0;
 local_130[0] = 10;
 local_128 = local_140;
 uVar1 = struct_with_ptr(local_130);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_158 = 0;
 local_158 = local_158 & 0xfff00000ffff0000 | 0x191d;
 uVar1 = struct_bitfields((uint *)&local_158);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 local_e8 = 0x140000000a;
 local_e0 = 0x1e;
 uVar1 = union_array((long)&local_e8,3);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 local_120[0] = 10;
 local_118 = (unsigned long)&double_value;
 local_120[1] = (unsigned int)local_118;
 local_120[2] = (unsigned int)local_118;
 struct_func_ptr(local_120);
 uVar1 = 10;
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
 local_c0[0] = 10;
 local_b8 = local_b0;
 local_b0[0] = 0x14;
 local_a8 = local_a0;
 local_a0[0] = 0x1e;
 local_98 = 0;
 uVar1 = linked_list(local_c0);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",uVar1);
 local_90[0] = 10;
 local_68 = local_90;
 local_88 = local_78;
 local_80 = 0;
 local_78[0] = 0x14;
 local_70 = 0;
 uVar1 = doubly_linked_list(local_90);
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_100[0] = 100;
 local_f8 = 0;
 local_f0 = 0;
 uVar1 = binary_tree_sum((int *)local_100);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_110[0] = 1;
 local_108 = 0;
 uStack_50 = 0;
 local_58 = 0;
 uStack_40 = 0;
 uStack_48 = 0;
 uStack_30 = 0;
 local_38 = 0;
 uStack_20 = 0;
 uStack_28 = 0;
 local_18 = 0;
 local_60 = local_110;
 uStack_10 = 2;
 uVar1 = graph_traverse((long)&local_60);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",uVar1);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: main @ 0x1017f8
int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}











