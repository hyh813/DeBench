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
typedef long long longlong;
typedef int bool;
#define true 1
#define false 0
char completed_0 = 0;

// String constants
char DAT_00011ed4[] = "Testing Data Types Level 1\n";
char DAT_0001203f[] = "Testing Array Types\n";
char DAT_00012156[] = "callback";
char DAT_0001215b[] = "Testing Pointer Types\n";
char DAT_000122f4[] = "Testing Composite Types\n";

// Switch case table for enum_switch
char CSWTCH_73[4] = {10, 20, 30, 40};

// Decompiled by BinaryAI
// SHA256: b5b8f74ebc3d22ee62353b8de6d58d99c725a28bb5198f31e6ff9650f6a9f5e3

// Function: _init @ 0x103dc
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x103fc
void __libc_start_main(void *main_func, void *init_func, void *fini_func, void *rtld_fini, void *stack_end)
{
 // This is the actual libc startup function - it calls main
 // and handles initialization
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x10408
void * memcpy(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10414
void __stack_chk_fail(void)
{
 // External function - no implementation needed for linking
}

// Function: <EXTERNAL>::puts @ 0x10420
// External libc function - declaration only
int puts(char *__s);

// Function: <EXTERNAL>::memset @ 0x10438
void * memset(void *__s,int __c,size_t __n);

// Implementation
void * __impl_memset(void *__s,int __c,size_t __n)
{
 // Standard library function - just return the pointer
 return __s;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10444
int __printf_chk(int flag, char *format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::__aeabi_dadd @ 0x117d8
// Returns double as 64-bit result
ulonglong __aeabi_dadd(uint param_1, uint param_2, uint param_3, uint param_4);

// Implementation of __aeabi_dadd
ulonglong __aeabi_dadd_impl(uint param_1, uint param_2, uint param_3, uint param_4);

// Function: <EXTERNAL>::abort @ 0x10450
// External libc function - declaration only
void abort(void);

// Function: main @ 0x1045c
unsigned int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

// Function: _start @ 0x10478
void _start(unsigned int param_1,unsigned int param_2)
{
 // param_2 contains argv pointer, param_1 contains argc
 // Stack setup for calling main
 main();
 // Exit cleanly - don't call abort
}

// External function declaration for gmon
void __gmon_start__(void);

// Function: call_weak_fn @ 0x104bc
void call_weak_fn(void)
{
 void (*__gmon_start__ptr)(void) = &__gmon_start__;
 if (__gmon_start__ptr != 0) {
 __gmon_start__ptr();
 }
 return;
}

// Function: deregister_tm_clones @ 0x104e0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1050c
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10544
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
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
unsigned int process_float(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = __mulsf3(param_1,0x3fc00000);
 return __addsf3(uVar1,0x3f000000);
}

// Function: process_double @ 0x105f8
unsigned long long process_double(unsigned int param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 unsigned long long uVar2;
 uVar1 = __muldf3(param_1,param_2,0,0x3fe00000);
 uVar2 = __aeabi_dadd((uint)uVar1,(uint)((ulonglong)uVar1 >> 0x20),0x9999999a,0x3fb99999);
 return uVar2;
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
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",process_bool(0));
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",process_bool(1));
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",process_bool(2));
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
void array_string(int param_1)
{
 int iVar1;
 for (iVar1 = 0; *(char *)(param_1 + iVar1) != '\0'; iVar1 = iVar1 + 1) {
 }
 return;
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
int ptr_func_simple(int (*func)(int), int param_2)
{
 return func(param_2);
}

// Function: ptr_func_complex @ 0x10ca8
void ptr_func_complex(void *param_1,unsigned int param_2)
{
 char *local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_14 = &DAT_00012156;
 local_10 = 0;
 (*param_1)(param_2,&local_14,0,param_1,param_1);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return;
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
void struct_func_ptr(unsigned int *param_1)
{
 (*(void *)param_1[1])(*param_1);
 return;
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
int doubly_linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[2]) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
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
 uVar1 = doubly_linked_list(&local_78);
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

// Function: __muldf3 @ 0x113c8
ulonglong __muldf3(uint param_1, uint param_2, uint param_3, uint param_4);

// Function: FUN_000115a8 @ 0x115a8
ulonglong FUN_000115a8(uint param_1,uint param_2,uint param_3,uint param_4)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint unaff_r4;
 uint uVar4;
 uint uVar5;
 uint in_r12;
 bool bVar6;
 uVar4 = in_r12 & param_4 >> 0x14;
 if (unaff_r4 == in_r12 || uVar4 == in_r12) {
 bVar6 = (param_1 | param_2 << 1) == 0;
 uVar5 = param_3;
 uVar1 = param_4;
 if (!bVar6) {
 bVar6 = (param_3 | param_4 << 1) == 0;
 uVar5 = param_1;
 uVar1 = param_2;
 }
 uVar3 = uVar1;
 if (((!bVar6) && ((unaff_r4 != in_r12 || ((uVar5 | uVar1 << 0xc) == 0)))) &&
 ((uVar4 != in_r12 || (uVar5 = param_3, uVar3 = param_4, (param_3 | param_4 << 0xc) == 0)))) {
 return (ulonglong)((uVar1 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
 }
 return CONCAT44(uVar3,uVar5) | 0x7ff8000000000000;
 }
 bVar6 = (param_1 | param_2 << 1) == 0;
 if (!bVar6) {
 bVar6 = (param_3 | param_4 << 1) == 0;
 }
 if (bVar6) {
 return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
 }
 if (unaff_r4 == 0) {
 uVar5 = param_2 & 0x80000000;
 do {
 iVar2 = (int)param_1 >> 0x1f;
 param_1 = param_1 << 1;
 param_2 = param_2 * 2 - iVar2;
 } while ((param_2 & 0x100000) == 0);
 param_2 = param_2 | uVar5;
 if (uVar4 != 0) {
 return CONCAT44(param_2,param_1);
 }
 }
 do {
 iVar2 = (int)param_3 >> 0x1f;
 param_3 = param_3 << 1;
 param_4 = param_4 * 2 - iVar2;
 } while ((param_4 & 0x100000) == 0);
 return CONCAT44(param_2,param_1);
}

// Function: __mulsf3 @ 0x11634
// Returns float as 32-bit result
uint __mulsf3(uint param_1, uint param_2, uint param_3, uint param_4)
{
 uint uVar1;
 longlong lVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 int iVar6;
 int iVar7;
 uint uVar8;
 uint uVar9;
 bool bVar10;
 bool bVar11;
 uint param_4_local = param_4;
 uVar3 = param_1 >> 0x17 & 0xff;
 bVar10 = uVar3 == 0;
 if (!bVar10) {
 param_4 = param_2 >> 0x17 & 0xff;
 bVar10 = param_4 == 0;
 }
 if (!bVar10) {
 bVar10 = uVar3 == 0xff;
 }
 if (!bVar10) {
 bVar10 = param_4 == 0xff;
 }
 if (bVar10) {
 param_4 = param_2 >> 0x17 & 0xff;
 if (uVar3 == 0xff || param_4 == 0xff) {
 uVar9 = param_2;
 if (param_1 != 0 && param_1 != 0x80000000) {
 uVar9 = param_1;
 }
 uVar5 = uVar9;
 if (((((param_1 == 0 || param_1 == 0x80000000) || param_2 == 0) || param_2 == 0x80000000) ||
 ((uVar3 == 0xff && ((uVar9 & 0x7fffff) != 0)))) ||
 ((param_4 == 0xff && (uVar5 = param_2, (param_2 & 0x7fffff) != 0)))) {
 return uVar5 | 0x7fc00000;
 }
 uVar9 = uVar9 ^ param_2;
 goto LAB_000117b0;
 }
 bVar10 = (param_1 & 0x7fffffff) == 0;
 if (!bVar10) {
 bVar10 = (param_2 & 0x7fffffff) == 0;
 }
 if (bVar10) {
 return (param_1 ^ param_2) & 0x80000000;
 }
 bVar10 = uVar3 == 0;
 uVar9 = param_1 & 0x80000000;
 while( true ) {
 if (bVar10) {
 param_1 = param_1 << 1;
 bVar10 = (param_1 & 0x800000) == 0;
 }
 if (!bVar10) break;
 uVar3 = uVar3 - 1;
 }
 param_1 = param_1 | uVar9;
 bVar10 = param_4 == 0;
 uVar9 = param_2 & 0x80000000;
 while( true ) {
 if (bVar10) {
 param_2 = param_2 << 1;
 bVar10 = (param_2 & 0x800000) == 0;
 }
 if (!bVar10) break;
 param_4 = param_4 - 1;
 }
 param_2 = param_2 | uVar9;
 }
 iVar4 = uVar3 + param_4;
 uVar9 = param_1 ^ param_2;
 uVar3 = param_1 << 9;
 bVar10 = uVar3 == 0;
 if (!bVar10) {
 param_2 = param_2 << 9;
 bVar10 = param_2 == 0;
 }
 if (bVar10) {
 if (uVar3 == 0) {
 param_2 = param_2 << 9;
 }
 uVar9 = uVar9 & 0x80000000 | param_1 & 0x7fffff | param_2 >> 9;
 bVar11 = SBORROW4(iVar4,0x7f);
 iVar6 = iVar4 + -0x7f;
 bVar10 = iVar6 == 0;
 iVar7 = iVar6;
 if (!bVar10 && 0x7e < iVar4) {
 bVar11 = SBORROW4(0xff,iVar6);
 iVar7 = -iVar6 + 0xff;
 bVar10 = -iVar6 == -0xff;
 }
 if (!bVar10 && iVar7 < 0 == bVar11) {
 uVar9 = uVar9 | iVar6 * 0x800000;
 }
 if (!bVar10 && iVar7 < 0 == bVar11) {
 return uVar9;
 }
 uVar9 = uVar9 | 0x800000;
 uVar8 = 0;
 bVar11 = SBORROW4(iVar6,1);
 uVar5 = iVar4 - 0x80;
 bVar10 = uVar5 == 0;
 uVar3 = uVar5;
 }
 else {
 lVar2 = (ulonglong)(param_2 >> 5 | 0x8000000) * (ulonglong)(uVar3 >> 5 | 0x8000000);
 bVar10 = (uint)((ulonglong)lVar2 >> 0x20) < 0x800000;
 if (bVar10) {
 lVar2 = lVar2 * 2;
 }
 uVar8 = (uint)lVar2;
 uVar9 = uVar9 & 0x80000000 | (uint)((ulonglong)lVar2 >> 0x20);
 uVar5 = iVar4 - (bVar10 + 0x7f);
 bVar11 = SBORROW4(uVar5,0xfd);
 bVar10 = uVar5 == 0xfd;
 uVar3 = uVar5 - 0xfd;
 if (uVar5 < 0xfe) {
 uVar3 = uVar9 + uVar5 * 0x800000 + (uint)(0x7fffffff < uVar8);
 if (uVar8 == 0x80000000) {
 uVar3 = uVar3 & 0xfffffffe;
 }
 return uVar3;
 }
 }
 if (bVar10 || (int)uVar3 < 0 != bVar11) {
 bVar10 = (int)(uVar5 + 0x19) < 0;
 if (uVar5 == 0xffffffe7 || bVar10 != SCARRY4(uVar5,0x19)) {
 uVar9 = uVar9 & 0x80000000;
 }
 if (uVar5 != 0xffffffe7 && bVar10 == SCARRY4(uVar5,0x19)) {
 uVar1 = (uVar9 << 1) >> (-uVar5 & 0xff);
 uVar3 = uVar9 << (uVar5 + 0x20 & 0xff);
 uVar9 = (uVar9 & 0x80000000 | uVar1 >> 1) + (uint)((byte)uVar1 & 1);
 if ((uVar8 | uVar3 << 1) == 0) {
 uVar9 = uVar9 & ~(uVar3 >> 0x1f);
 }
 return uVar9;
 }
 return uVar9;
 }
LAB_000117b0:
 return uVar9 & 0x80000000 | 0x7f800000;
}

// Function: __aeabi_drsub @ 0x117cc
ulonglong __aeabi_drsub(unsigned int param_1,uint param_2,uint param_3,uint param_4)
{
 return __aeabi_dadd(param_1,param_2,param_3 ^ 0x80000000,param_4);
}

// Function: __subdf3 @ 0x117d4
ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)
{
 int iVar1;
 uint uVar2;
 byte bVar3;
 byte bVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 int iVar10;
 uint uVar11;
 uint uVar12;
 uint uVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 uVar8 = param_4 ^ 0x80000000;
 uVar11 = param_2 << 1;
 param_4 = param_4 << 1;
 bVar14 = uVar11 == param_4 && param_1 == param_3;
 if (uVar11 != param_4 || param_1 != param_3) {
 bVar14 = (uVar11 | param_1) == 0;
 }
 if (!bVar14) {
 bVar14 = (param_4 | param_3) == 0;
 }
 iVar10 = (int)uVar11 >> 0x15;
 if (!bVar14) {
 bVar14 = iVar10 == -1;
 }
 iVar1 = (int)param_4 >> 0x15;
 if (!bVar14) {
 bVar14 = iVar1 == -1;
 }
 if (bVar14) {
 if (iVar10 == -1 || iVar1 == -1) {
 uVar11 = uVar8;
 uVar12 = param_3;
 if (iVar10 == -1) {
 uVar11 = param_2;
 uVar12 = param_1;
 }
 if (iVar10 != -1 || iVar1 != -1) {
 param_3 = uVar12;
 uVar8 = uVar11;
 }
 bVar14 = (uVar12 | uVar11 << 0xc) == 0;
 if (bVar14) {
 bVar14 = (param_3 | uVar8 << 0xc) == 0;
 }
 if (bVar14) {
 bVar14 = uVar11 == uVar8;
 }
 if (!bVar14) {
 uVar11 = uVar11 | 0x80000;
 }
 return CONCAT44(uVar11,uVar12);
 }
 if (uVar11 != param_4 || param_1 != param_3) {
 if ((uVar11 | param_1) == 0) {
 param_1 = param_3;
 param_2 = uVar8;
 }
 return CONCAT44(param_2,param_1);
 }
 if (param_2 != uVar8) {
 return 0;
 }
 if (uVar11 >> 0x15 == 0) {
 bVar3 = (byte)(param_1 >> 0x1f);
 uVar11 = param_2 * 2 + (uint)bVar3;
 if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar3)) {
 uVar11 = uVar11 | 0x80000000;
 }
 return CONCAT44(uVar11,param_1 << 1);
 }
 if (uVar11 < 0xffc00000) {
 return CONCAT44(param_2 + 0x100000,param_1);
 }
 param_2 = param_2 & 0x80000000;
LAB_00011a48:
 return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
 }
 uVar11 = uVar11 >> 0x15;
 param_4 = param_4 >> 0x15;
 uVar12 = param_4 - uVar11;
 bVar14 = uVar12 != 0;
 if (param_4 < uVar11) {
 uVar12 = -uVar12;
 }
 uVar7 = param_1;
 uVar9 = param_2;
 if (bVar14 && uVar11 <= param_4) {
 uVar11 = uVar11 + uVar12;
 uVar7 = param_3;
 uVar9 = uVar8;
 param_3 = param_1;
 uVar8 = param_2;
 }
 if (0x36 < uVar12) {
 return CONCAT44(uVar9,uVar7);
 }
 uVar6 = uVar9 & 0xfffff | 0x100000;
 if ((uVar9 & 0x80000000) != 0) {
 bVar14 = uVar7 != 0;
 uVar7 = -uVar7;
 uVar6 = -(uVar6 + bVar14);
 }
 uVar9 = uVar8 & 0xfffff | 0x100000;
 if ((uVar8 & 0x80000000) != 0) {
 bVar14 = param_3 != 0;
 param_3 = -param_3;
 uVar9 = -(uVar9 + bVar14);
 }
 if (uVar11 == uVar12) {
 uVar9 = uVar9 ^ 0x100000;
 if (uVar11 == 0) {
 uVar6 = uVar6 ^ 0x100000;
 uVar11 = 1;
 }
 else {
 uVar12 = uVar12 - 1;
 }
 }
 uVar8 = -uVar12 + 0x20;
 if ((int)uVar12 < 0x21) {
 uVar13 = param_3 << (uVar8 & 0xff);
 param_3 = param_3 >> (uVar12 & 0xff);
 uVar5 = uVar7 + param_3;
 uVar2 = uVar9 << (uVar8 & 0xff);
 uVar8 = uVar5 + uVar2;
 uVar12 = uVar6 + CARRY4(uVar7,param_3) + ((int)uVar9 >> (uVar12 & 0xff)) +
 (uint)CARRY4(uVar5,uVar2);
 }
 else {
 uVar13 = uVar9 << (-uVar12 + 0x40 & 0xff);
 if (param_3 != 0) {
 uVar13 = uVar13 | 2;
 }
 uVar12 = (int)uVar9 >> (uVar12 - 0x20 & 0xff);
 uVar8 = uVar7 + uVar12;
 uVar12 = uVar6 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar7,uVar12);
 }
 param_2 = uVar12 & 0x80000000;
 uVar7 = uVar12;
 if ((int)uVar12 < 0) {
 bVar14 = uVar13 == 0;
 uVar13 = -uVar13;
 uVar7 = -uVar8;
 uVar8 = -(uVar8 + !bVar14);
 uVar7 = -(uVar12 + (bVar14 <= uVar7));
 }
 if (0xfffff < uVar7) {
 uVar9 = uVar11 - 1;
 if (0x1fffff < uVar7) {
 bVar3 = (byte)uVar7;
 uVar7 = uVar7 >> 1;
 bVar4 = (byte)uVar8;
 uVar8 = (uint)(bVar3 & 1) << 0x1f | uVar8 >> 1;
 uVar13 = (uint)(bVar4 & 1) << 0x1f | uVar13 >> 1;
 uVar9 = uVar11;
 if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011a48;
 }
LAB_000118f0:
 bVar14 = 0x7fffffff < uVar13;
 if (uVar13 == 0x80000000) {
 bVar14 = (bool)((byte)uVar8 & 1);
 }
 return CONCAT44(uVar7 + uVar9 * 0x100000 + (uint)CARRY4(uVar8,(uint)bVar14) | param_2,
 uVar8 + bVar14);
 }
 bVar3 = (byte)(uVar13 >> 0x1f);
 uVar13 = uVar13 << 1;
 uVar9 = uVar8 * 2;
 bVar14 = CARRY4(uVar8,uVar8);
 uVar8 = uVar8 * 2 + (uint)bVar3;
 uVar7 = uVar7 * 2 + (uint)(bVar14 || CARRY4(uVar9,(uint)bVar3));
 uVar9 = uVar11 - 2;
 if (uVar11 - 1 != 0 && 0xfffff < uVar7) goto LAB_000118f0;
 uVar11 = uVar8;
 uVar6 = uVar7;
 if (uVar7 == 0) {
 uVar11 = 0;
 uVar6 = uVar8;
 }
 iVar10 = LZCOUNT(uVar6);
 if (uVar7 == 0) {
 iVar10 = iVar10 + 0x20;
 }
 uVar7 = iVar10 - 0xb;
 bVar16 = SBORROW4(uVar7,0x20);
 uVar8 = iVar10 - 0x2b;
 bVar14 = (int)uVar8 < 0;
 bVar15 = uVar8 == 0;
 if ((int)uVar7 < 0x20) {
 bVar16 = SCARRY4(uVar8,0xc);
 iVar10 = iVar10 + -0x1f;
 bVar14 = iVar10 < 0;
 bVar15 = iVar10 == 0;
 uVar8 = uVar7;
 if (!bVar15 && bVar14 == bVar16) {
 uVar11 = uVar6 << (uVar7 & 0xff);
 uVar6 = uVar6 >> (0xcU - iVar10 & 0xff);
 goto LAB_00011970;
 }
 }
 if (bVar15 || bVar14 != bVar16) {
 uVar13 = 0x20 - uVar8;
 }
 uVar6 = uVar6 << (uVar8 & 0xff);
 if (bVar15 || bVar14 != bVar16) {
 uVar6 = uVar6 | uVar11 >> (uVar13 & 0xff);
 }
 if (bVar15 || bVar14 != bVar16) {
 uVar11 = uVar11 << (uVar8 & 0xff);
 }
LAB_00011970:
 if ((int)uVar7 <= (int)uVar9) {
 return CONCAT44(uVar6 + (uVar9 - uVar7) * 0x100000 | param_2,uVar11);
 }
 uVar8 = ~(uVar9 - uVar7);
 if ((int)uVar8 < 0x1f) {
 iVar10 = uVar8 - 0x13;
 if (iVar10 != 0 && iVar10 < 0 == SCARRY4(uVar8 - 0x1f,0xc)) {
 return CONCAT44(uVar12,uVar11 >> (0x20 - (0xcU - iVar10) & 0xff) |
 uVar6 << (0xcU - iVar10 & 0xff)) & 0x80000000ffffffff;
 }
 uVar8 = uVar8 + 1;
 return CONCAT44(param_2 | uVar6 >> (uVar8 & 0xff),
 uVar11 >> (uVar8 & 0xff) | uVar6 << (0x20 - uVar8 & 0xff));
 }
 return CONCAT44(uVar12,uVar6 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
}

// Function: __aeabi_dadd @ 0x117d8
ulonglong __aeabi_dadd(uint param_1,uint param_2,uint param_3,uint param_4)
{
 int iVar1;
 uint uVar2;
 byte bVar3;
 byte bVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 uint uVar12;
 uint uVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 uVar9 = param_2 << 1;
 uVar6 = param_4 << 1;
 bVar14 = uVar9 == uVar6 && param_1 == param_3;
 if (uVar9 != uVar6 || param_1 != param_3) {
 bVar14 = (uVar9 | param_1) == 0;
 }
 if (!bVar14) {
 bVar14 = (uVar6 | param_3) == 0;
 }
 iVar8 = (int)uVar9 >> 0x15;
 if (!bVar14) {
 bVar14 = iVar8 == -1;
 }
 iVar1 = (int)uVar6 >> 0x15;
 if (!bVar14) {
 bVar14 = iVar1 == -1;
 }
 if (bVar14) {
 if (iVar8 == -1 || iVar1 == -1) {
 uVar9 = param_4;
 uVar6 = param_3;
 if (iVar8 == -1) {
 uVar9 = param_2;
 uVar6 = param_1;
 }
 if (iVar8 != -1 || iVar1 != -1) {
 param_3 = uVar6;
 param_4 = uVar9;
 }
 bVar14 = (uVar6 | uVar9 << 0xc) == 0;
 if (bVar14) {
 bVar14 = (param_3 | param_4 << 0xc) == 0;
 }
 if (bVar14) {
 bVar14 = uVar9 == param_4;
 }
 if (!bVar14) {
 uVar9 = uVar9 | 0x80000;
 }
 return CONCAT44(uVar9,uVar6);
 }
 if (uVar9 != uVar6 || param_1 != param_3) {
 if ((uVar9 | param_1) == 0) {
 param_1 = param_3;
 param_2 = param_4;
 }
 return CONCAT44(param_2,param_1);
 }
 if (param_2 != param_4) {
 return 0;
 }
 if (uVar9 >> 0x15 == 0) {
 bVar3 = (byte)(param_1 >> 0x1f);
 uVar9 = param_2 * 2 + (uint)bVar3;
 if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar3)) {
 uVar9 = uVar9 | 0x80000000;
 }
 return CONCAT44(uVar9,param_1 << 1);
 }
 if (uVar9 < 0xffc00000) {
 return CONCAT44(param_2 + 0x100000,param_1);
 }
 param_2 = param_2 & 0x80000000;
LAB_00011a48:
 return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
 }
 uVar9 = uVar9 >> 0x15;
 uVar6 = uVar6 >> 0x15;
 uVar11 = uVar6 - uVar9;
 bVar14 = uVar11 != 0;
 if (uVar6 < uVar9) {
 uVar11 = -uVar11;
 }
 uVar10 = param_1;
 uVar7 = param_2;
 if (bVar14 && uVar9 <= uVar6) {
 uVar9 = uVar9 + uVar11;
 uVar10 = param_3;
 uVar7 = param_4;
 param_3 = param_1;
 param_4 = param_2;
 }
 if (0x36 < uVar11) {
 return CONCAT44(uVar7,uVar10);
 }
 uVar6 = uVar7 & 0xfffff | 0x100000;
 if ((uVar7 & 0x80000000) != 0) {
 bVar14 = uVar10 != 0;
 uVar10 = -uVar10;
 uVar6 = -(uVar6 + bVar14);
 }
 uVar7 = param_4 & 0xfffff | 0x100000;
 if ((param_4 & 0x80000000) != 0) {
 bVar14 = param_3 != 0;
 param_3 = -param_3;
 uVar7 = -(uVar7 + bVar14);
 }
 if (uVar9 == uVar11) {
 uVar7 = uVar7 ^ 0x100000;
 if (uVar9 == 0) {
 uVar6 = uVar6 ^ 0x100000;
 uVar9 = 1;
 }
 else {
 uVar11 = uVar11 - 1;
 }
 }
 uVar13 = -uVar11 + 0x20;
 if ((int)uVar11 < 0x21) {
 uVar12 = param_3 << (uVar13 & 0xff);
 param_3 = param_3 >> (uVar11 & 0xff);
 uVar5 = uVar10 + param_3;
 uVar2 = uVar7 << (uVar13 & 0xff);
 uVar13 = uVar5 + uVar2;
 uVar6 = uVar6 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
 (uint)CARRY4(uVar5,uVar2);
 }
 else {
 uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
 if (param_3 != 0) {
 uVar12 = uVar12 | 2;
 }
 uVar11 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
 uVar13 = uVar10 + uVar11;
 uVar6 = uVar6 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
 }
 param_2 = uVar6 & 0x80000000;
 uVar11 = uVar6;
 if ((int)uVar6 < 0) {
 bVar14 = uVar12 == 0;
 uVar12 = -uVar12;
 uVar11 = -uVar13;
 uVar13 = -(uVar13 + !bVar14);
 uVar11 = -(uVar6 + (bVar14 <= uVar11));
 }
 if (0xfffff < uVar11) {
 uVar10 = uVar9 - 1;
 if (0x1fffff < uVar11) {
 bVar3 = (byte)uVar11;
 uVar11 = uVar11 >> 1;
 bVar4 = (byte)uVar13;
 uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
 uVar12 = (uint)(bVar4 & 1) << 0x1f | uVar12 >> 1;
 uVar10 = uVar9;
 if (0xffbfffff < uVar9 * 0x200000) goto LAB_00011a48;
 }
LAB_000118f0:
 bVar14 = 0x7fffffff < uVar12;
 if (uVar12 == 0x80000000) {
 bVar14 = (bool)((byte)uVar13 & 1);
 }
 return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar13,(uint)bVar14) | param_2,
 uVar13 + bVar14);
 }
 bVar3 = (byte)(uVar12 >> 0x1f);
 uVar12 = uVar12 << 1;
 uVar10 = uVar13 * 2;
 bVar14 = CARRY4(uVar13,uVar13);
 uVar13 = uVar13 * 2 + (uint)bVar3;
 uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar3));
 uVar10 = uVar9 - 2;
 if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_000118f0;
 uVar9 = uVar13;
 uVar7 = uVar11;
 if (uVar11 == 0) {
 uVar9 = 0;
 uVar7 = uVar13;
 }
 iVar8 = LZCOUNT(uVar7);
 if (uVar11 == 0) {
 iVar8 = iVar8 + 0x20;
 }
 uVar13 = iVar8 - 0xb;
 bVar16 = SBORROW4(uVar13,0x20);
 uVar11 = iVar8 - 0x2b;
 bVar14 = (int)uVar11 < 0;
 bVar15 = uVar11 == 0;
 if ((int)uVar13 < 0x20) {
 bVar16 = SCARRY4(uVar11,0xc);
 iVar8 = iVar8 + -0x1f;
 bVar14 = iVar8 < 0;
 bVar15 = iVar8 == 0;
 uVar11 = uVar13;
 if (!bVar15 && bVar14 == bVar16) {
 uVar9 = uVar7 << (uVar13 & 0xff);
 uVar7 = uVar7 >> (0xcU - iVar8 & 0xff);
 goto LAB_00011970;
 }
 }
 if (bVar15 || bVar14 != bVar16) {
 uVar12 = 0x20 - uVar11;
 }
 uVar7 = uVar7 << (uVar11 & 0xff);
 if (bVar15 || bVar14 != bVar16) {
 uVar7 = uVar7 | uVar9 >> (uVar12 & 0xff);
 }
 if (bVar15 || bVar14 != bVar16) {
 uVar9 = uVar9 << (uVar11 & 0xff);
 }
LAB_00011970:
 if ((int)uVar13 <= (int)uVar10) {
 return CONCAT44(uVar7 + (uVar10 - uVar13) * 0x100000 | param_2,uVar9);
 }
 uVar11 = ~(uVar10 - uVar13);
 if ((int)uVar11 < 0x1f) {
 iVar8 = uVar11 - 0x13;
 if (iVar8 != 0 && iVar8 < 0 == SCARRY4(uVar11 - 0x1f,0xc)) {
 return CONCAT44(uVar6,uVar9 >> (0x20 - (0xcU - iVar8) & 0xff) | uVar7 << (0xcU - iVar8 & 0xff)
 ) & 0x80000000ffffffff;
 }
 uVar11 = uVar11 + 1;
 return CONCAT44(param_2 | uVar7 >> (uVar11 & 0xff),
 uVar9 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff));
 }
 return CONCAT44(uVar6,uVar7 >> (uVar11 - 0x1f & 0xff)) & 0x80000000ffffffff;
}

// Function: __aeabi_ui2d @ 0x11a84
ulonglong __aeabi_ui2d(uint param_1)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 uint in_r12;
 bool bVar5;
 bool bVar6;
 bool bVar7;
 if (param_1 == 0) {
 return 0;
 }
 uVar1 = 0;
 iVar3 = LZCOUNT(param_1);
 uVar4 = iVar3 + 0x15;
 bVar7 = SBORROW4(uVar4,0x20);
 uVar2 = iVar3 - 0xb;
 bVar5 = (int)uVar2 < 0;
 bVar6 = uVar2 == 0;
 if (uVar4 < 0x20) {
 bVar7 = SCARRY4(uVar2,0xc);
 bVar5 = false;
 bVar6 = iVar3 + 1 == 0;
 uVar2 = uVar4;
 if (!bVar6 && bVar7 == false) {
 uVar1 = param_1 << uVar4;
 param_1 = param_1 >> (0xcU - (iVar3 + 1) & 0xff);
 goto LAB_00011970;
 }
 }
 if (bVar6 || bVar5 != bVar7) {
 in_r12 = 0x20 - uVar2;
 }
 param_1 = param_1 << (uVar2 & 0xff);
 if (bVar6 || bVar5 != bVar7) {
 param_1 = param_1 | 0U >> (in_r12 & 0xff);
 }
 if (bVar6 || bVar5 != bVar7) {
 uVar1 = 0 << (uVar2 & 0xff);
 }
LAB_00011970:
 if (uVar4 < 0x433) {
 return CONCAT44(param_1 + (0x432 - uVar4) * 0x100000,uVar1);
 }
 uVar2 = ~(0x432 - uVar4);
 if (0x1e < (int)uVar2) {
 return (ulonglong)(param_1 >> (uVar2 - 0x1f & 0xff));
 }
 iVar3 = uVar2 - 0x13;
 if (iVar3 == 0 || iVar3 < 0 != SCARRY4(uVar2 - 0x1f,0xc)) {
 uVar2 = uVar2 + 1;
 return CONCAT44(param_1 >> (uVar2 & 0xff),
 uVar1 >> (uVar2 & 0xff) | param_1 << (0x20 - uVar2 & 0xff));
 }
 return (ulonglong)(uVar1 >> (0x20 - (0xcU - iVar3) & 0xff) | param_1 << (0xcU - iVar3 & 0xff));
}

// Function: __floatsidf @ 0x11aa8
ulonglong __floatsidf(uint param_1)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 uint in_r12;
 bool bVar7;
 bool bVar8;
 bool bVar9;
 if (param_1 == 0) {
 return 0;
 }
 uVar6 = param_1 & 0x80000000;
 uVar2 = param_1;
 if ((int)uVar6 < 0) {
 uVar2 = -param_1;
 }
 uVar1 = 0;
 iVar4 = LZCOUNT(uVar2);
 uVar5 = iVar4 + 0x15;
 bVar9 = SBORROW4(uVar5,0x20);
 uVar3 = iVar4 - 0xb;
 bVar7 = (int)uVar3 < 0;
 bVar8 = uVar3 == 0;
 if (uVar5 < 0x20) {
 bVar9 = SCARRY4(uVar3,0xc);
 bVar7 = false;
 bVar8 = iVar4 + 1 == 0;
 uVar3 = uVar5;
 if (!bVar8 && bVar9 == false) {
 uVar1 = uVar2 << uVar5;
 uVar2 = uVar2 >> (0xcU - (iVar4 + 1) & 0xff);
 goto LAB_00011970;
 }
 }
 if (bVar8 || bVar7 != bVar9) {
 in_r12 = 0x20 - uVar3;
 }
 uVar2 = uVar2 << (uVar3 & 0xff);
 if (bVar8 || bVar7 != bVar9) {
 uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
 }
 if (bVar8 || bVar7 != bVar9) {
 uVar1 = 0 << (uVar3 & 0xff);
 }
LAB_00011970:
 if (uVar5 < 0x433) {
 return CONCAT44(uVar2 + (0x432 - uVar5) * 0x100000 | uVar6,uVar1);
 }
 uVar3 = ~(0x432 - uVar5);
 if (0x1e < (int)uVar3) {
 return CONCAT44(param_1,uVar2 >> (uVar3 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 iVar4 = uVar3 - 0x13;
 if (iVar4 == 0 || iVar4 < 0 != SCARRY4(uVar3 - 0x1f,0xc)) {
 uVar3 = uVar3 + 1;
 return CONCAT44(uVar6 | uVar2 >> (uVar3 & 0xff),
 uVar1 >> (uVar3 & 0xff) | uVar2 << (0x20 - uVar3 & 0xff));
 }
 return CONCAT44(param_1,uVar1 >> (0x20 - (0xcU - iVar4) & 0xff) | uVar2 << (0xcU - iVar4 & 0xff))
 & 0x80000000ffffffff;
}

// Function: __extendsfdf2 @ 0x11ad0
ulonglong __extendsfdf2(uint param_1,unsigned int param_2,unsigned int param_3,uint param_4)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 uint uVar7;
 uint in_r12;
 bool bVar8;
 bool bVar9;
 bool bVar10;
 uVar3 = param_1 << 1;
 bVar9 = uVar3 == 0;
 uVar1 = param_1 & 0x80000000;
 uVar5 = (uint)((int)uVar3 >> 3) >> 1;
 uVar2 = uVar1 | uVar5;
 param_1 = param_1 << 0x1d;
 if (!bVar9) {
 param_4 = uVar3 & 0xff000000;
 bVar9 = param_4 == 0;
 }
 if (!bVar9) {
 bVar9 = param_4 == 0xff000000;
 }
 if (!bVar9) {
 return CONCAT44(uVar2,param_1) ^ 0x3800000000000000;
 }
 if ((uVar3 & 0xffffff) == 0) {
 return CONCAT44(uVar2,param_1);
 }
 if (param_4 == 0xff000000) {
 return CONCAT44(uVar2,param_1) | 0x8000000000000;
 }
 uVar3 = param_1;
 uVar4 = uVar5;
 if (uVar5 == 0) {
 uVar3 = 0;
 uVar4 = param_1;
 }
 iVar6 = LZCOUNT(uVar4);
 if (uVar5 == 0) {
 iVar6 = iVar6 + 0x20;
 }
 uVar7 = iVar6 - 0xb;
 bVar10 = SBORROW4(uVar7,0x20);
 uVar5 = iVar6 - 0x2b;
 bVar9 = (int)uVar5 < 0;
 bVar8 = uVar5 == 0;
 if ((int)uVar7 < 0x20) {
 bVar10 = SCARRY4(uVar5,0xc);
 iVar6 = iVar6 + -0x1f;
 bVar9 = iVar6 < 0;
 bVar8 = iVar6 == 0;
 uVar5 = uVar7;
 if (!bVar8 && bVar9 == bVar10) {
 uVar3 = uVar4 << (uVar7 & 0xff);
 uVar4 = uVar4 >> (0xcU - iVar6 & 0xff);
 goto LAB_00011970;
 }
 }
 if (bVar8 || bVar9 != bVar10) {
 in_r12 = 0x20 - uVar5;
 }
 uVar4 = uVar4 << (uVar5 & 0xff);
 if (bVar8 || bVar9 != bVar10) {
 uVar4 = uVar4 | uVar3 >> (in_r12 & 0xff);
 }
 if (bVar8 || bVar9 != bVar10) {
 uVar3 = uVar3 << (uVar5 & 0xff);
 }
LAB_00011970:
 if ((int)uVar7 < 0x381) {
 return CONCAT44(uVar4 + (0x380 - uVar7) * 0x100000 | uVar1,uVar3);
 }
 uVar5 = ~(0x380 - uVar7);
 if (0x1e < (int)uVar5) {
 return CONCAT44(uVar2,uVar4 >> (uVar5 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 iVar6 = uVar5 - 0x13;
 if (iVar6 == 0 || iVar6 < 0 != SCARRY4(uVar5 - 0x1f,0xc)) {
 uVar5 = uVar5 + 1;
 return CONCAT44(uVar1 | uVar4 >> (uVar5 & 0xff),
 uVar3 >> (uVar5 & 0xff) | uVar4 << (0x20 - uVar5 & 0xff));
 }
 return CONCAT44(uVar2,uVar3 >> (0x20 - (0xcU - iVar6) & 0xff) | uVar4 << (0xcU - iVar6 & 0xff)) &
 0x80000000ffffffff;
}

// Function: __floatundidf @ 0x11b18
ulonglong __floatundidf(uint param_1,uint param_2)
{
 byte bVar1;
 byte bVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 uint uVar7;
 uint uVar8;
 int iVar9;
 bool bVar10;
 bool bVar11;
 bool bVar12;
 if ((param_1 | param_2) == 0) {
 return CONCAT44(param_2,param_1);
 }
 iVar9 = 0x432;
 uVar8 = param_2 >> 0x16;
 if (uVar8 != 0) {
 iVar9 = 3;
 if (param_2 >> 0x19 != 0) {
 iVar9 = 6;
 }
 if (param_2 >> 0x1c != 0) {
 iVar9 = iVar9 + 3;
 }
 iVar9 = iVar9 - ((int)param_2 >> 0x1f);
 uVar8 = param_1 << (0x20U - iVar9 & 0xff);
 param_1 = param_1 >> iVar9 | param_2 << (0x20U - iVar9 & 0xff);
 param_2 = param_2 >> iVar9;
 iVar9 = iVar9 + 0x432;
 }
 if (0xfffff < param_2) {
 if (0x1fffff < param_2) {
 bVar1 = (byte)param_2;
 param_2 = param_2 >> 1;
 bVar2 = (byte)param_1;
 param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
 uVar8 = (uint)(bVar2 & 1) << 0x1f | uVar8 >> 1;
 iVar9 = iVar9 + 1;
 if (0xffbfffff < (uint)(iVar9 * 0x200000)) {
 return 0x7ff0000000000000;
 }
 }
LAB_000118f0:
 bVar11 = 0x7fffffff < uVar8;
 if (uVar8 == 0x80000000) {
 bVar11 = (bool)((byte)param_1 & 1);
 }
 return CONCAT44(param_2 + iVar9 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar11),param_1 + bVar11
 );
 }
 bVar1 = (byte)(uVar8 >> 0x1f);
 uVar8 = uVar8 << 1;
 uVar3 = param_1 * 2;
 bVar11 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 param_2 = param_2 * 2 + (uint)(bVar11 || CARRY4(uVar3,(uint)bVar1));
 bVar11 = iVar9 != 0;
 iVar9 = iVar9 + -1;
 if (bVar11 && 0xfffff < param_2) goto LAB_000118f0;
 uVar3 = param_1;
 uVar4 = param_2;
 if (param_2 == 0) {
 uVar3 = 0;
 uVar4 = param_1;
 }
 iVar6 = LZCOUNT(uVar4);
 if (param_2 == 0) {
 iVar6 = iVar6 + 0x20;
 }
 uVar7 = iVar6 - 0xb;
 bVar12 = SBORROW4(uVar7,0x20);
 uVar5 = iVar6 - 0x2b;
 bVar11 = (int)uVar5 < 0;
 bVar10 = uVar5 == 0;
 if ((int)uVar7 < 0x20) {
 bVar12 = SCARRY4(uVar5,0xc);
 iVar6 = iVar6 + -0x1f;
 bVar11 = iVar6 < 0;
 bVar10 = iVar6 == 0;
 uVar5 = uVar7;
 if (!bVar10 && bVar11 == bVar12) {
 uVar3 = uVar4 << (uVar7 & 0xff);
 uVar4 = uVar4 >> (0xcU - iVar6 & 0xff);
 goto LAB_00011970;
 }
 }
 if (bVar10 || bVar11 != bVar12) {
 uVar8 = 0x20 - uVar5;
 }
 uVar4 = uVar4 << (uVar5 & 0xff);
 if (bVar10 || bVar11 != bVar12) {
 uVar4 = uVar4 | uVar3 >> (uVar8 & 0xff);
 }
 if (bVar10 || bVar11 != bVar12) {
 uVar3 = uVar3 << (uVar5 & 0xff);
 }
LAB_00011970:
 if ((int)uVar7 <= iVar9) {
 return CONCAT44(uVar4 + (iVar9 - uVar7) * 0x100000,uVar3);
 }
 uVar8 = ~(iVar9 - uVar7);
 if ((int)uVar8 < 0x1f) {
 iVar9 = uVar8 - 0x13;
 if (iVar9 != 0 && iVar9 < 0 == SCARRY4(uVar8 - 0x1f,0xc)) {
 return (ulonglong)(uVar3 >> (0x20 - (0xcU - iVar9) & 0xff) | uVar4 << (0xcU - iVar9 & 0xff));
 }
 uVar8 = uVar8 + 1;
 return CONCAT44(uVar4 >> (uVar8 & 0xff),uVar3 >> (uVar8 & 0xff) | uVar4 << (0x20 - uVar8 & 0xff)
 );
 }
 return (ulonglong)(uVar4 >> (uVar8 - 0x1f & 0xff));
}

// Function: __aeabi_l2d @ 0x11b2c
ulonglong __aeabi_l2d(uint param_1,uint param_2)
{
 byte bVar1;
 byte bVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 uint uVar10;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 if ((param_1 | param_2) == 0) {
 return CONCAT44(param_2,param_1);
 }
 uVar9 = param_2 & 0x80000000;
 uVar4 = param_2;
 if ((int)uVar9 < 0) {
 bVar12 = param_1 != 0;
 param_1 = -param_1;
 uVar4 = -(param_2 + bVar12);
 }
 iVar8 = 0x432;
 uVar10 = uVar4 >> 0x16;
 if (uVar10 != 0) {
 iVar8 = 3;
 if (uVar4 >> 0x19 != 0) {
 iVar8 = 6;
 }
 if (uVar4 >> 0x1c != 0) {
 iVar8 = iVar8 + 3;
 }
 iVar8 = iVar8 - ((int)uVar4 >> 0x1f);
 uVar10 = param_1 << (0x20U - iVar8 & 0xff);
 param_1 = param_1 >> iVar8 | uVar4 << (0x20U - iVar8 & 0xff);
 uVar4 = uVar4 >> iVar8;
 iVar8 = iVar8 + 0x432;
 }
 if (0xfffff < uVar4) {
 if (0x1fffff < uVar4) {
 bVar1 = (byte)uVar4;
 uVar4 = uVar4 >> 1;
 bVar2 = (byte)param_1;
 param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
 uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
 iVar8 = iVar8 + 1;
 if (0xffbfffff < (uint)(iVar8 * 0x200000)) {
 return (ulonglong)(uVar9 | 0x7ff00000) << 0x20;
 }
 }
LAB_000118f0:
 bVar12 = 0x7fffffff < uVar10;
 if (uVar10 == 0x80000000) {
 bVar12 = (bool)((byte)param_1 & 1);
 }
 return CONCAT44(uVar4 + iVar8 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12) | uVar9,
 param_1 + bVar12);
 }
 bVar1 = (byte)(uVar10 >> 0x1f);
 uVar10 = uVar10 << 1;
 uVar3 = param_1 * 2;
 bVar12 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 uVar4 = uVar4 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
 bVar12 = iVar8 != 0;
 iVar8 = iVar8 + -1;
 if (bVar12 && 0xfffff < uVar4) goto LAB_000118f0;
 uVar3 = param_1;
 uVar5 = uVar4;
 if (uVar4 == 0) {
 uVar3 = 0;
 uVar5 = param_1;
 }
 iVar6 = LZCOUNT(uVar5);
 if (uVar4 == 0) {
 iVar6 = iVar6 + 0x20;
 }
 uVar7 = iVar6 - 0xb;
 bVar13 = SBORROW4(uVar7,0x20);
 uVar4 = iVar6 - 0x2b;
 bVar12 = (int)uVar4 < 0;
 bVar11 = uVar4 == 0;
 if ((int)uVar7 < 0x20) {
 bVar13 = SCARRY4(uVar4,0xc);
 iVar6 = iVar6 + -0x1f;
 bVar12 = iVar6 < 0;
 bVar11 = iVar6 == 0;
 uVar4 = uVar7;
 if (!bVar11 && bVar12 == bVar13) {
 uVar3 = uVar5 << (uVar7 & 0xff);
 uVar5 = uVar5 >> (0xcU - iVar6 & 0xff);
 goto LAB_00011970;
 }
 }
 if (bVar11 || bVar12 != bVar13) {
 uVar10 = 0x20 - uVar4;
 }
 uVar5 = uVar5 << (uVar4 & 0xff);
 if (bVar11 || bVar12 != bVar13) {
 uVar5 = uVar5 | uVar3 >> (uVar10 & 0xff);
 }
 if (bVar11 || bVar12 != bVar13) {
 uVar3 = uVar3 << (uVar4 & 0xff);
 }
LAB_00011970:
 if ((int)uVar7 <= iVar8) {
 return CONCAT44(uVar5 + (iVar8 - uVar7) * 0x100000 | uVar9,uVar3);
 }
 uVar4 = ~(iVar8 - uVar7);
 if ((int)uVar4 < 0x1f) {
 iVar8 = uVar4 - 0x13;
 if (iVar8 != 0 && iVar8 < 0 == SCARRY4(uVar4 - 0x1f,0xc)) {
 return CONCAT44(param_2,uVar3 >> (0x20 - (0xcU - iVar8) & 0xff) |
 uVar5 << (0xcU - iVar8 & 0xff)) & 0x80000000ffffffff;
 }
 uVar4 = uVar4 + 1;
 return CONCAT44(uVar9 | uVar5 >> (uVar4 & 0xff),
 uVar3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
 }
 return CONCAT44(param_2,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
}

// Function: __aeabi_frsub @ 0x11b8c
void __aeabi_frsub(uint param_1)
{
 __addsf3(param_1 ^ 0x80000000);
 return;
}

// Function: __aeabi_fsub @ 0x11b94
uint __aeabi_fsub(uint param_1,uint param_2,unsigned int param_3,uint param_4)
{
 int iVar1;
 int iVar2;
 byte bVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 bool bVar9;
 uVar5 = param_2 ^ 0x80000000;
 uVar4 = param_1 << 1;
 bVar9 = uVar4 == 0;
 if (!bVar9) {
 param_4 = param_2 << 1;
 bVar9 = param_4 == 0;
 }
 if (!bVar9) {
 bVar9 = uVar4 == param_4;
 }
 iVar1 = (int)uVar4 >> 0x18;
 if (!bVar9) {
 bVar9 = iVar1 == -1;
 }
 if (!bVar9) {
 bVar9 = (int)param_4 >> 0x18 == -1;
 }
 if (bVar9) {
 iVar2 = (int)(param_2 << 1) >> 0x18;
 if (iVar1 == -1 || iVar2 == -1) {
 uVar4 = uVar5;
 if (iVar1 == -1) {
 uVar4 = param_1;
 }
 if (iVar1 != -1 || iVar2 != -1) {
 uVar5 = uVar4;
 }
 bVar9 = (uVar4 & 0x7fffff) == 0;
 if (bVar9) {
 bVar9 = (uVar5 & 0x7fffff) == 0;
 }
 if (bVar9) {
 bVar9 = uVar4 == uVar5;
 }
 if (!bVar9) {
 uVar4 = uVar4 | 0x400000;
 }
 return uVar4;
 }
 if (uVar4 != param_2 << 1) {
 if (uVar4 == 0) {
 param_1 = uVar5;
 }
 return param_1;
 }
 if (param_1 != uVar5) {
 return 0;
 }
 if ((uVar4 & 0xff000000) == 0) {
 uVar4 = param_1 << 1;
 if (SUB41(param_1 >> 0x1f,0)) {
 uVar4 = uVar4 | 0x80000000;
 }
 return uVar4;
 }
 if (uVar4 < 0xfe000000) {
 return param_1 + 0x800000;
 }
 param_1 = param_1 & 0x80000000;
LAB_00011cf8:
 return param_1 | 0x7f800000;
 }
 uVar4 = uVar4 >> 0x18;
 param_4 = param_4 >> 0x18;
 uVar8 = param_4 - uVar4;
 bVar9 = uVar8 != 0;
 uVar7 = uVar4;
 if (bVar9 && uVar4 <= param_4) {
 uVar7 = uVar4 + uVar8;
 }
 if (bVar9 && uVar4 <= param_4) {
 uVar5 = param_1 ^ uVar5;
 }
 if (bVar9 && uVar4 <= param_4) {
 param_1 = uVar5 ^ param_1;
 }
 if (bVar9 && uVar4 <= param_4) {
 uVar5 = param_1 ^ uVar5;
 }
 if (param_4 < uVar4) {
 uVar8 = -uVar8;
 }
 if (0x19 < uVar8) {
 return param_1;
 }
 uVar4 = param_1 & 0xffffff | 0x800000;
 if ((param_1 & 0x80000000) != 0) {
 uVar4 = -uVar4;
 }
 uVar6 = uVar5 & 0xffffff | 0x800000;
 if ((uVar5 & 0x80000000) != 0) {
 uVar6 = -uVar6;
 }
 if (uVar7 == uVar8) {
 uVar6 = uVar6 ^ 0x800000;
 if (uVar7 == 0) {
 uVar4 = uVar4 ^ 0x800000;
 uVar7 = 1;
 }
 else {
 uVar8 = uVar8 - 1;
 }
 }
 uVar4 = uVar4 + ((int)uVar6 >> (uVar8 & 0xff));
 uVar6 = uVar6 << (0x20 - uVar8 & 0xff);
 param_1 = uVar4 & 0x80000000;
 if ((int)uVar4 < 0) {
 bVar9 = uVar6 != 0;
 uVar6 = -uVar6;
 uVar4 = -(uVar4 + bVar9);
 }
 if (uVar4 < 0x800000) {
 iVar1 = (int)uVar6 >> 0x1f;
 uVar6 = uVar6 << 1;
 uVar4 = uVar4 * 2 - iVar1;
 uVar5 = uVar7 - 2;
 if (uVar7 - 1 == 0 || uVar4 < 0x800000) {
 uVar8 = LZCOUNT(uVar4) - 8;
 uVar4 = uVar4 << (uVar8 & 0xff);
 if ((int)uVar5 < (int)uVar8) {
 uVar4 = uVar4 >> (-(uVar5 - uVar8) & 0xff);
 }
 else {
 uVar4 = uVar4 + (uVar5 - uVar8) * 0x800000;
 }
 return uVar4 | param_1;
 }
 }
 else {
 uVar5 = uVar7 - 1;
 if (0xffffff < uVar4) {
 bVar3 = (byte)uVar4;
 uVar4 = uVar4 >> 1;
 uVar6 = (uint)(bVar3 & 1) << 0x1f | uVar6 >> 1;
 uVar5 = uVar7;
 if (0xfd < uVar7) goto LAB_00011cf8;
 }
 }
 uVar4 = uVar4 + uVar5 * 0x800000 + (uint)(0x7fffffff < uVar6);
 if (uVar6 == 0x80000000) {
 uVar4 = uVar4 & 0xfffffffe;
 }
 return uVar4 | param_1;
}

// Function: __addsf3 @ 0x11b98
uint __addsf3(uint param_1,uint param_2,unsigned int param_3,uint param_4)
{
 int iVar1;
 int iVar2;
 byte bVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 bool bVar8;
 uVar4 = param_1 << 1;
 bVar8 = uVar4 == 0;
 if (!bVar8) {
 param_4 = param_2 << 1;
 bVar8 = param_4 == 0;
 }
 if (!bVar8) {
 bVar8 = uVar4 == param_4;
 }
 iVar1 = (int)uVar4 >> 0x18;
 if (!bVar8) {
 bVar8 = iVar1 == -1;
 }
 if (!bVar8) {
 bVar8 = (int)param_4 >> 0x18 == -1;
 }
 if (bVar8) {
 iVar2 = (int)(param_2 << 1) >> 0x18;
 if (iVar1 == -1 || iVar2 == -1) {
 uVar4 = param_2;
 if (iVar1 == -1) {
 uVar4 = param_1;
 }
 if (iVar1 != -1 || iVar2 != -1) {
 param_2 = uVar4;
 }
 bVar8 = (uVar4 & 0x7fffff) == 0;
 if (bVar8) {
 bVar8 = (param_2 & 0x7fffff) == 0;
 }
 if (bVar8) {
 bVar8 = uVar4 == param_2;
 }
 if (!bVar8) {
 uVar4 = uVar4 | 0x400000;
 }
 return uVar4;
 }
 if (uVar4 != param_2 << 1) {
 if (uVar4 == 0) {
 param_1 = param_2;
 }
 return param_1;
 }
 if (param_1 != param_2) {
 return 0;
 }
 if ((uVar4 & 0xff000000) == 0) {
 uVar4 = param_1 << 1;
 if (SUB41(param_1 >> 0x1f,0)) {
 uVar4 = uVar4 | 0x80000000;
 }
 return uVar4;
 }
 if (uVar4 < 0xfe000000) {
 return param_1 + 0x800000;
 }
 param_1 = param_1 & 0x80000000;
LAB_00011cf8:
 return param_1 | 0x7f800000;
 }
 uVar4 = uVar4 >> 0x18;
 param_4 = param_4 >> 0x18;
 uVar7 = param_4 - uVar4;
 bVar8 = uVar7 != 0;
 uVar6 = uVar4;
 if (bVar8 && uVar4 <= param_4) {
 uVar6 = uVar4 + uVar7;
 }
 if (bVar8 && uVar4 <= param_4) {
 param_2 = param_1 ^ param_2;
 }
 if (bVar8 && uVar4 <= param_4) {
 param_1 = param_2 ^ param_1;
 }
 if (bVar8 && uVar4 <= param_4) {
 param_2 = param_1 ^ param_2;
 }
 if (param_4 < uVar4) {
 uVar7 = -uVar7;
 }
 if (0x19 < uVar7) {
 return param_1;
 }
 uVar4 = param_1 & 0xffffff | 0x800000;
 if ((param_1 & 0x80000000) != 0) {
 uVar4 = -uVar4;
 }
 uVar5 = param_2 & 0xffffff | 0x800000;
 if ((param_2 & 0x80000000) != 0) {
 uVar5 = -uVar5;
 }
 if (uVar6 == uVar7) {
 uVar5 = uVar5 ^ 0x800000;
 if (uVar6 == 0) {
 uVar4 = uVar4 ^ 0x800000;
 uVar6 = 1;
 }
 else {
 uVar7 = uVar7 - 1;
 }
 }
 uVar4 = uVar4 + ((int)uVar5 >> (uVar7 & 0xff));
 uVar5 = uVar5 << (0x20 - uVar7 & 0xff);
 param_1 = uVar4 & 0x80000000;
 if ((int)uVar4 < 0) {
 bVar8 = uVar5 != 0;
 uVar5 = -uVar5;
 uVar4 = -(uVar4 + bVar8);
 }
 if (uVar4 < 0x800000) {
 iVar1 = (int)uVar5 >> 0x1f;
 uVar5 = uVar5 << 1;
 uVar4 = uVar4 * 2 - iVar1;
 uVar7 = uVar6 - 2;
 if (uVar6 - 1 == 0 || uVar4 < 0x800000) {
 uVar6 = LZCOUNT(uVar4) - 8;
 uVar4 = uVar4 << (uVar6 & 0xff);
 if ((int)uVar7 < (int)uVar6) {
 uVar4 = uVar4 >> (-(uVar7 - uVar6) & 0xff);
 }
 else {
 uVar4 = uVar4 + (uVar7 - uVar6) * 0x800000;
 }
 return uVar4 | param_1;
 }
 }
 else {
 uVar7 = uVar6 - 1;
 if (0xffffff < uVar4) {
 bVar3 = (byte)uVar4;
 uVar4 = uVar4 >> 1;
 uVar5 = (uint)(bVar3 & 1) << 0x1f | uVar5 >> 1;
 uVar7 = uVar6;
 if (0xfd < uVar6) goto LAB_00011cf8;
 }
 }
 uVar4 = uVar4 + uVar7 * 0x800000 + (uint)(0x7fffffff < uVar5);
 if (uVar5 == 0x80000000) {
 uVar4 = uVar4 & 0xfffffffe;
 }
 return uVar4 | param_1;
}

// Function: __aeabi_ui2f @ 0x11d28
uint __aeabi_ui2f(uint param_1)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 if (param_1 == 0) {
 return 0;
 }
 uVar1 = LZCOUNT(param_1);
 uVar2 = uVar1 - 8;
 iVar3 = uVar2 * -0x800000 + 0x4a800000;
 if (7 < uVar1) {
 uVar1 = 0 << (uVar2 & 0xff);
 uVar2 = iVar3 + (param_1 << (uVar2 & 0xff)) + (0U >> (0x20 - uVar2 & 0xff)) +
 (uint)(0x7fffffff < uVar1);
 if (uVar1 == 0x80000000) {
 uVar2 = uVar2 & 0xfffffffe;
 }
 return uVar2;
 }
 uVar2 = param_1 << uVar1 + 0x18;
 uVar1 = (iVar3 + (param_1 >> (0x20 - (uVar1 + 0x18) & 0xff))) - ((int)uVar2 >> 0x1f);
 if ((uVar2 & 0x7fffffff) == 0) {
 uVar1 = uVar1 & ~(uVar2 >> 0x1f);
 }
 return uVar1;
}

// Function: __floatsisf @ 0x11d30
uint __floatsisf(uint param_1)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 uVar3 = param_1 & 0x80000000;
 if ((int)uVar3 < 0) {
 param_1 = -param_1;
 }
 if (param_1 == 0) {
 return 0;
 }
 uVar1 = LZCOUNT(param_1);
 uVar2 = uVar1 - 8;
 iVar4 = ((uVar3 | 0x4b000000) - 0x800000) + uVar2 * -0x800000;
 if (7 < uVar1) {
 uVar3 = 0 << (uVar2 & 0xff);
 uVar1 = iVar4 + (param_1 << (uVar2 & 0xff)) + (0U >> (0x20 - uVar2 & 0xff)) +
 (uint)(0x7fffffff < uVar3);
 if (uVar3 == 0x80000000) {
 uVar1 = uVar1 & 0xfffffffe;
 }
 return uVar1;
 }
 uVar3 = param_1 << uVar1 + 0x18;
 uVar1 = (iVar4 + (param_1 >> (0x20 - (uVar1 + 0x18) & 0xff))) - ((int)uVar3 >> 0x1f);
 if ((uVar3 & 0x7fffffff) == 0) {
 uVar1 = uVar1 & ~(uVar3 >> 0x1f);
 }
 return uVar1;
}

// Function: __floatundisf @ 0x11d50
uint __floatundisf(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 if ((param_1 | param_2) == 0) {
 return param_1;
 }
 uVar1 = param_1;
 uVar2 = param_2;
 if (param_2 == 0) {
 uVar1 = 0;
 uVar2 = param_1;
 }
 iVar5 = 0x5b000000;
 if (param_2 == 0) {
 iVar5 = 0x4b000000;
 }
 uVar3 = LZCOUNT(uVar2);
 uVar4 = uVar3 - 8;
 iVar5 = iVar5 + -0x800000 + uVar4 * -0x800000;
 if (uVar3 < 8) {
 uVar4 = uVar2 << uVar3 + 0x18;
 uVar2 = (iVar5 + (uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff))) - ((int)uVar4 >> 0x1f);
 if ((uVar1 | uVar4 << 1) == 0) {
 uVar2 = uVar2 & ~(uVar4 >> 0x1f);
 }
 return uVar2;
 }
 uVar3 = uVar1 << (uVar4 & 0xff);
 uVar2 = iVar5 + (uVar2 << (uVar4 & 0xff)) + (uVar1 >> (0x20 - uVar4 & 0xff)) +
 (uint)(0x7fffffff < uVar3);
 if (uVar3 == 0x80000000) {
 uVar2 = uVar2 & 0xfffffffe;
 }
 return uVar2;
}

// Function: __aeabi_l2f @ 0x11d60
uint __aeabi_l2f(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 bool bVar7;
 if ((param_1 | param_2) == 0) {
 return param_1;
 }
 uVar5 = param_2 & 0x80000000;
 if ((int)uVar5 < 0) {
 bVar7 = param_1 != 0;
 param_1 = -param_1;
 param_2 = -(param_2 + bVar7);
 }
 uVar1 = param_1;
 uVar2 = param_2;
 if (param_2 == 0) {
 uVar1 = 0;
 uVar2 = param_1;
 }
 uVar5 = uVar5 | 0x5b000000;
 if (param_2 == 0) {
 uVar5 = uVar5 + 0xf0000000;
 }
 uVar3 = LZCOUNT(uVar2);
 uVar4 = uVar3 - 8;
 iVar6 = (uVar5 - 0x800000) + uVar4 * -0x800000;
 if (uVar3 < 8) {
 uVar5 = uVar2 << uVar3 + 0x18;
 uVar2 = (iVar6 + (uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff))) - ((int)uVar5 >> 0x1f);
 if ((uVar1 | uVar5 << 1) == 0) {
 uVar2 = uVar2 & ~(uVar5 >> 0x1f);
 }
 return uVar2;
 }
 uVar5 = uVar1 << (uVar4 & 0xff);
 uVar2 = iVar6 + (uVar2 << (uVar4 & 0xff)) + (uVar1 >> (0x20 - uVar4 & 0xff)) +
 (uint)(0x7fffffff < uVar5);
 if (uVar5 == 0x80000000) {
 uVar2 = uVar2 & 0xfffffffe;
 }
 return uVar2;
}

// Function: __fixsfsi @ 0x11ddc
uint __fixsfsi(uint param_1)
{
 uint uVar1;
 uint uVar2;
 if (param_1 << 1 < 0x7f000000) {
 return 0;
 }
 uVar1 = (param_1 << 1) >> 0x18;
 uVar2 = 0x9e - uVar1;
 if (uVar1 < 0x9f && uVar2 != 0) {
 uVar1 = (param_1 << 8 | 0x80000000) >> (uVar2 & 0xff);
 if ((param_1 & 0x80000000) != 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 if ((uVar2 == 0xffffff9f) && ((param_1 & 0x7fffff) != 0)) {
 return 0;
 }
 param_1 = param_1 & 0x80000000;
 if (param_1 == 0) {
 param_1 = 0x7fffffff;
 }
 return param_1;
}

// Function: _fini @ 0x11e38
void _fini(void)
{
 return;
}

