/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef unsigned short ushort;
typedef unsigned char byte;
typedef _Bool bool;
typedef long long longlong;
#define true 1
#define false 0
#define CONCAT44(hi, lo) (((ulonglong)(hi) << 32) | (uint)(lo))

// Global variables
static int completed_0 = 0;
char DAT_00011ed4[] = "Data Types L1";
char DAT_0001203f[] = "Array Types";
char DAT_00012156[] = "hello";
char DAT_0001215b[] = "Pointer Types";
char DAT_000122f4[] = "Composite Types";
char CSWTCH_73[] = {50, 51, 52, 53};

// Soft-float helper function declarations
extern uint __mulsf3(uint param_1, uint param_2);
extern uint __addsf3(uint param_1, uint param_2);
extern ulonglong __muldf3(uint param_1, uint param_2, uint param_3, uint param_4);
extern ulonglong __aeabi_dadd(uint param_1, uint param_2, uint param_3, uint param_4);
extern uint __fixsfsi(uint param_1);
extern char DAT_0001203f[];
extern char DAT_00012156[];
extern char DAT_0001215b[];
extern char DAT_000122f4[];
extern char CSWTCH_73[];
static int stack0x00000004 = 0;

// Decompiled by BinaryAI
// SHA256: 7482c4c6faa680e2933d9c026b8e7b24c35b7d204118cb9f8dfa6cc45b6b60b6



// Function: <EXTERNAL>::__libc_start_main @ 0x103fc
int __libc_start_main(int (*main)(void), int argc, void *argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end)
{
 return __libc_start_main(main, argc, argv, init, fini, rtld_fini, stack_end);
}

// Function: <EXTERNAL>::memcpy @ 0x10408
void * memcpy(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10414
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::puts @ 0x10420
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x10438
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10444
int __printf_chk(int __flag, const char *__format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::abort @ 0x10450
void abort(void)
{
 abort();
}

// Function: main @ 0x1045c
unsigned int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}











// Function: double_value @ 0x10570
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: process_int @ 0x10578
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: complex_callback @ 0x10584
int complex_callback(int *param_1,int *param_2)
{
 int iVar1;
 *param_1 = *param_1 + 10;
 iVar1 = *param_2;
 if (iVar1 != 0) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: process_char @ 0x105a0
uint process_char(uint param_1)
{
 if (param_1 - 0x41 < 0x1a) {
 param_1 = param_1 + 0x20 & 0xff;
 }
 return param_1;
}

// Function: process_short @ 0x105b4
int process_short(int param_1,int param_2)
{
 return (param_1 + param_2) * 0x10000 >> 0x10;
}

// Function: process_long @ 0x105c4
int process_long(int param_1)
{
 return param_1 << 1;
}

// Function: process_ll @ 0x105cc
unsigned long long process_ll(uint param_1,int param_2)
{
 return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_1 * param_2 * 2,
 (int)((ulonglong)param_1 * (ulonglong)param_1));
}

// Function: process_float @ 0x105e0
void process_float(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = __mulsf3(param_1,0x3fc00000);
 uVar1 = __addsf3(uVar1,0x3f000000);
 return;
}

// Function: process_double @ 0x105f8
void process_double(unsigned int param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 uVar1 = __muldf3(param_1,param_2,0,0x3fe00000);
 __aeabi_dadd((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0x9999999a,0x3fb99999);
 return;
}

// Function: process_ld @ 0x10624
void process_ld(unsigned int param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 uVar1 = __muldf3(param_1,param_2,param_1,param_2);
 __aeabi_dadd((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,0x3ff00000);
 return;
}

// Function: process_bool @ 0x10648
uint process_bool(uint param_1)
{
 uint uVar1;
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 else {
 uVar1 = 1 - (param_1 & 1);
 }
 return uVar1 & 1;
}

// Function: const_param @ 0x10660
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x1066c
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x1067c
void test_data_types_l1(void)
{
 puts(&DAT_00011ed4);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000,0);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",0,0x40240000);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x107dc
int array_1d_stack(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 }
 return iVar1;
}

// Function: array_string @ 0x10800
int array_string(int param_1)
{
 int iVar1;
 for (iVar1 = 0; *(char *)(param_1 + iVar1) != '\0'; iVar1 = iVar1 + 1) {
 }
 return iVar1;
}

// Function: array_2d_stack @ 0x1081c
int array_2d_stack(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar3 = 0;
 iVar2 = 0;
 do {
 iVar1 = iVar3 * 4;
 iVar3 = iVar3 + 0xb;
 iVar2 = iVar2 + *(int *)(param_1 + iVar1);
 } while (iVar3 != 0x6e);
 return iVar2;
}

// Function: array_3d @ 0x10840
int array_3d(int *param_1)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 piVar2 = param_1 + 0x7d;
 iVar1 = 0;
 do {
 piVar3 = param_1 + 0x19;
 piVar4 = param_1;
 do {
 param_1 = piVar4 + 5;
 iVar1 = iVar1 + *piVar4 + piVar4[1] + piVar4[2] + piVar4[3] + piVar4[4];
 piVar4 = param_1;
 } while (param_1 != piVar3);
 } while (piVar2 != param_1);
 return iVar1;
}

// Function: array_vla @ 0x10890
int array_vla(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_2 + iVar2 * 4);
 }
 return iVar1;
}

// Function: array_pointer @ 0x108b4
int array_pointer(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar2 = 0;
 iVar1 = 0;
 if (0 < param_2) {
 do {
 iVar3 = iVar2 * 0x28;
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + *(int *)(param_1 + iVar3);
 } while (iVar2 < param_2);
 return iVar1;
 }
 return iVar1;
}

// Function: pointer_array @ 0x108ec
int pointer_array(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 iVar2 = 0;
 if (9 < param_2) {
 param_2 = 10;
 }
 iVar1 = 0;
 while (iVar2 < param_2) {
 piVar3 = *(int **)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 if (piVar3 != (int *)0x0) {
 iVar1 = iVar1 + *piVar3;
 }
 }
 return iVar1;
}

// Function: array_complex_index @ 0x10920
unsigned int array_complex_index(int param_1,int param_2,int param_3,uint param_4,uint param_5)
{
 if ((((uint)(param_2 <= (int)param_4) | (param_4 | param_5) >> 0x1f) == 0) &&
 ((int)param_5 < param_3)) {
 return *(unsigned int *)(param_1 + (param_5 * param_2 + param_4) * 4);
 }
 return 0xffffffff;
}

// Function: array_oob @ 0x1095c
int array_oob(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 <= param_2; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 }
 return iVar1;
}

// Function: test_array_types @ 0x10980
void test_array_types(void)
{
 unsigned int uVar1;
 int *piVar2;
 unsigned int *puVar3;
 int iVar4;
 int iVar5;
 unsigned int *puVar6;
 int *piVar7;
 int iVar8;
 unsigned int local_51c;
 unsigned int local_518;
 unsigned int local_514;
 unsigned int local_510;
 unsigned int uStack_50c;
 unsigned int uStack_508;
 unsigned int local_504;
 unsigned int uStack_500;
 unsigned int uStack_4fc;
 unsigned int uStack_4f8;
 unsigned int local_4f4;
 unsigned int *local_4f0;
 unsigned int *local_4ec;
 unsigned int *local_4e8;
 char auStack_4e4 [28];
 int aiStack_4c8 [17];
 unsigned int local_484;
 int local_478 [10];
 unsigned int local_450;
 unsigned int local_428;
 unsigned int local_400;
 unsigned int local_3d8;
 int aiStack_3b0 [100];
 unsigned int local_220 [125];
 char auStack_2c [8];
 int local_24;
 local_24 = 0;
 puts(&DAT_0001203f);
 local_504 = 1;
 uStack_500 = 2;
 uStack_4fc = 3;
 uStack_4f8 = 4;
 local_4f4 = 5;
 uVar1 = array_1d_stack(&local_504,5);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 memcpy(auStack_2c,"hello",6);
 uVar1 = array_string(auStack_2c);
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar1);
 iVar5 = 0;
 piVar2 = aiStack_3b0;
 do {
 iVar4 = 0;
 piVar7 = piVar2;
 do {
 iVar8 = iVar5;
 if (iVar4 != iVar5) {
 iVar8 = 0;
 }
 iVar4 = iVar4 + 1;
 *piVar7 = iVar8;
 piVar7 = piVar7 + 1;
 } while (iVar4 != 10);
 iVar5 = iVar5 + 1;
 piVar2 = piVar2 + 10;
 } while (iVar5 != 10);
 uVar1 = array_2d_stack(aiStack_3b0);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 iVar5 = 0;
 puVar3 = local_220;
 do {
 local_478[0] = 5;
 puVar6 = puVar3;
 do {
 local_478[0] = local_478[0] + -1;
 *puVar6 = 1;
 puVar6[1] = 1;
 puVar6[2] = 1;
 puVar6[3] = 1;
 puVar6[4] = 1;
 puVar6 = puVar6 + 5;
 } while (local_478[0] != 0);
 iVar5 = iVar5 + 1;
 puVar3 = puVar3 + 0x19;
 } while (iVar5 != 5);
 uVar1 = array_3d(local_220);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",uVar1);
 local_510 = 10;
 uStack_50c = 0x14;
 uStack_508 = 0x1e;
 uVar1 = array_vla(3,&local_510);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",uVar1);
 local_3d8 = 0x28;
 local_450 = 10;
 local_428 = 0x14;
 local_400 = 0x1e;
 uVar1 = array_pointer(local_478,5);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_51c = 10;
 local_518 = 0x14;
 local_514 = 0x1e;
 memset(auStack_4e4,0,0x1c);
 local_4f0 = &local_51c;
 local_4ec = &local_518;
 local_4e8 = &local_514;
 uVar1 = pointer_array(&local_4f0,3);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",uVar1);
  iVar5 = 0;
  piVar2 = aiStack_4c8;
  do {
  *piVar2 = iVar5;
  iVar5 = iVar5 + 1;
  piVar2 = piVar2 + 1;
  } while (iVar5 != 0x14);
  local_484 = array_complex_index(aiStack_4c8,0x14,0x14,0,5);
  __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",local_484);
 if (local_24 != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: ptr_single @ 0x10bf4
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x10c00
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x10c10
int ptr_triple(unsigned int *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x10c24
int ptr_increment(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 }
 return iVar1;
}

// Function: ptr_offset @ 0x10c48
unsigned int ptr_offset(int param_1,int param_2)
{
 return *(unsigned int *)(param_1 + param_2 * 4);
}

// Function: ptr_diff @ 0x10c50
int ptr_diff(int param_1,int param_2)
{
 return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x10c5c
uint ptr_void(uint *param_1,int param_2)
{
 uint uVar1;
 if (param_2 != 0) {
 if (param_2 == 1) {
 uVar1 = (uint)*(byte *)param_1;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
 }
 return *param_1;
}

// Function: ptr_const @ 0x10c7c
int ptr_const(int *param_1)
{
 return *param_1 << 1;
}

// Function: ptr_const_ptr @ 0x10c88
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x10c9c
unsigned int ptr_func_simple(void *UNRECOVERED_JUMPTABLE,unsigned int param_2)
{
 return ((unsigned int (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
}

// Function: ptr_func_complex @ 0x10ca8
unsigned int ptr_func_complex(void *param_1,unsigned int param_2)
{
 char *local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_14 = &DAT_00012156;
 local_10 = 0;
 return ((unsigned int (*)(unsigned int, char **, int, void *, void *))param_1)(param_2,&local_14,0,param_1,param_1);
}

// Function: ptr_cast @ 0x10d08
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x10d10
void opaque_handle_create(void)
{
 return;
}

// Function: opaque_handle_op @ 0x10d14
int opaque_handle_op(int param_1)
{
 return param_1 << 1;
}

// Function: test_pointer_types @ 0x10d1c
void test_pointer_types(void)
{
 unsigned int uVar1;
 unsigned int local_30;
 unsigned int *puStack_2c;
 char **local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int local_10;
 int local_c;
 puStack_2c = &local_30;
 local_c = 0;
 puts(&DAT_0001215b);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 local_28 = (char **)&puStack_2c;
 local_30 = 5;
 uVar1 = ptr_triple(&local_28);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",uVar1);
 local_20 = 1;
 uStack_1c = 2;
 uStack_18 = 3;
 uStack_14 = 4;
 local_10 = 5;
 uVar1 = ptr_increment(&local_20,5);
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 uVar1 = ptr_func_simple(double_value,5);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
 local_24 = 5;
 uVar1 = ptr_func_complex(complex_callback,&local_24);
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: struct_simple @ 0x10ee4
int struct_simple(int *param_1)
{
 return *param_1 + param_1[1] + param_1[2];
}

// Function: struct_array @ 0x10ef8
int struct_array(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 iVar1 = 0;
 param_1 = param_1 + 0xc;
 if (0 < param_2) {
 do {
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + *(int *)(param_1 + -0xc) + *(int *)(param_1 + -8) + *(int *)(param_1 + -4);
 param_1 = param_1 + 0xc;
 } while (iVar2 < param_2);
 return iVar1;
 }
 return iVar1;
}

// Function: struct_nested @ 0x10f40
int struct_nested(int *param_1)
{
 return *param_1 + param_1[3];
}

// Function: struct_deep @ 0x10f50
int struct_deep(int param_1)
{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}

// Function: struct_with_ptr @ 0x10f60
int struct_with_ptr(int *param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)param_1[1];
 if (puVar1 != (unsigned int *)0x0) {
 puVar1 = (unsigned int *)*puVar1;
 }
 return *param_1 + (int)puVar1;
}

// Function: struct_bitfields @ 0x10f78
int struct_bitfields(ushort *param_1)
{
 uint uVar1;
 uVar1 = (uint)*(byte *)param_1;
 return (uVar1 & 1) + ((uVar1 << 0x1d) >> 0x1e) + ((uVar1 << 0x1a) >> 0x1d) + (uint)(*param_1 >> 6)
 ;
}

// Function: union_type @ 0x10f9c
uint union_type(uint *param_1,int param_2)
{
 uint uVar1;
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 uVar1 = __fixsfsi(*param_1);
 return uVar1;
 }
 return (uint)*(byte *)param_1;
}

// Function: union_array @ 0x10fcc
int union_array(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 }
 return iVar1;
}

// Function: enum_type @ 0x10ff0
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x10ffc
int enum_switch(uint param_1)
{
 int iVar1;
 if (param_1 < 4) {
 iVar1 = (int)*(char *)((int)&CSWTCH_73 + param_1);
 }
 else {
 iVar1 = -99;
 }
 return iVar1;
}

// Function: struct_func_ptr @ 0x11018
unsigned int struct_func_ptr(unsigned int *param_1)
{
 return ((unsigned int (*)(unsigned int))param_1[1])(*param_1);
}

// Function: linked_list @ 0x11020
int linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}

// Function: doubly_linked_list @ 0x11040
int doubly_linked_list(void)
{
 return 0;
}

// Function: binary_tree_sum @ 0x11060
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[2]) {
 iVar1 = binary_tree_sum(param_1[1]);
 iVar2 = iVar2 + iVar1 + *param_1;
 }
 return iVar2;
}

// Function: graph_traverse @ 0x1109c
int graph_traverse(int param_1)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 iVar3 = 0;
 iVar1 = 0;
 while( true ) {
 if (*(int *)(param_1 + 0x28) <= iVar3) {
 return iVar1;
 }
 piVar2 = *(int **)(param_1 + iVar3 * 4);
 if (piVar2 != (int *)0x0) break;
 iVar3 = iVar3 + 1;
 }
 do {
 iVar1 = iVar1 + *piVar2;
 piVar2 = (int *)piVar2[1];
 while (piVar2 == (int *)0x0) {
 iVar3 = iVar3 + 1;
 if (*(int *)(param_1 + 0x28) <= iVar3) {
 return iVar1;
 }
 piVar2 = *(int **)(param_1 + iVar3 * 4);
 }
 } while( true );
}

// Function: test_composite_types @ 0x110f8
void test_composite_types(void)
{
 unsigned int uVar1;
 unsigned int local_dc;
 unsigned int local_d8;
 unsigned int local_d4;
 unsigned int *local_d0;
 unsigned int local_cc;
 unsigned int uStack_c8;
 unsigned int local_c4;
 void *local_c0;
 unsigned int local_bc;
 unsigned int local_b8;
 unsigned int local_b4;
 unsigned int uStack_b0;
 unsigned int uStack_ac;
 unsigned int local_a8;
 unsigned int local_a4;
 unsigned int local_a0;
 unsigned int local_9c;
 unsigned int uStack_98;
 unsigned int uStack_94;
 unsigned int local_90;
 unsigned int uStack_8c;
 unsigned int uStack_88;
 unsigned int uStack_84;
 unsigned int local_80;
 unsigned int uStack_7c;
 unsigned int local_78;
 unsigned int *local_74;
 unsigned int local_70;
 unsigned int *local_6c;
 unsigned int local_68;
 unsigned int local_64;
 unsigned int local_60;
 unsigned int *local_5c;
 unsigned int local_58;
 unsigned int local_54;
 unsigned int local_50;
 unsigned int *local_4c;
 unsigned int *local_48;
 char auStack_44 [36];
 unsigned int local_20;
 int local_1c;
 local_1c = 0;
 puts(&DAT_000122f4);
 local_b4 = 1;
 uStack_b0 = 2;
 uStack_ac = 3;
 uVar1 = struct_simple(&local_b4);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",uVar1);
 local_90 = 1;
 uStack_8c = 1;
 uStack_88 = 1;
 uStack_84 = 2;
 local_80 = 2;
 uStack_7c = 2;
 uVar1 = struct_array(&local_90,2);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 local_d0 = &local_dc;
 local_dc = 0x14;
 local_d8 = 0;
 local_d4 = 10;
 uVar1 = struct_with_ptr(&local_d4);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 uStack_c8 = 0;
 local_cc = 0x191d;
 uVar1 = struct_bitfields(&local_cc);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 local_9c = 10;
 uStack_98 = 0x14;
 uStack_94 = 0x1e;
 uVar1 = union_array(&local_9c,3);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 local_c0 = process_int;
 local_c4 = 10;
 uVar1 = struct_func_ptr(&local_c4);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
 local_74 = &local_70;
 local_6c = &local_68;
 local_68 = 0x1e;
 local_78 = 10;
 local_70 = 0x14;
 local_64 = 0;
 uVar1 = linked_list(&local_78);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",uVar1);
 local_5c = &local_54;
 local_4c = &local_60;
 local_60 = 10;
 local_58 = 0;
 local_54 = 0x14;
 local_50 = 0;
 uVar1 = doubly_linked_list();
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_a8 = 100;
 local_a4 = 0;
 local_a0 = 0;
 uVar1 = binary_tree_sum(&local_a8);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_bc = 1;
 local_b8 = 0;
 memset(auStack_44,0,0x24);
 local_48 = &local_bc;
 local_20 = 2;
 uVar1 = graph_traverse(&local_48);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",uVar1);
 if (local_1c != 0) {
 __stack_chk_fail();
 }
 return;
}









