// Decompiled by BinaryAI
// SHA256: 4f90cbe313bbcfc515d9c93e220032081275869181358a11c78228e3a9836620

#include <stdint.h>
#include <stdbool.h>

// Type definitions
typedef unsigned int uint;
typedef unsigned char byte;

// Global variables
unsigned long __dso_handle;
unsigned long fpcr;
char completed_0;
unsigned long ___stack_chk_guard;
unsigned long __stack_chk_guard;

// Forward declarations
int call_weak_fn(int);
void test_data_types_l1(void);
void test_array_types(void);
void test_pointer_types(void);
void test_composite_types(void);

// Builtin functions
static inline int __attribute__((always_inline)) SBORROW4(unsigned int a, unsigned int b) {
    return (int)((a - b) < (unsigned int)a);
}
static inline int __attribute__((always_inline)) CARRY8(unsigned long a, unsigned long b) {
    return (int)((a + b) < a);
}

// External function declarations
unsigned int NEON_fmadd(unsigned int, unsigned int, unsigned int);
unsigned long __multf3(unsigned long, unsigned long);
unsigned long __addtf3(unsigned long, unsigned long);
int __printf_chk(int, const char *, ...);
void __stack_chk_fail(void *);
void __sfp_handle_exceptions(unsigned long, unsigned long long);
int __libc_start_main(int (*)(int, char**, char**), void *, void *, void *, void *, unsigned long long);
void __cxa_finalize(long);
void __gmon_start__(void);
void abort(void);
int puts(char *);
int double_value(int);
bool complex_callback(int *, long *);

// Data constants
char DAT_00102b24[] = "Testing Data Types Level 1";
char DAT_00102c8f[] = "Testing Array Types";
char DAT_00102da6[] = "Testing Pointer Types";
char DAT_00102dab[] = "Testing Pointer Types";
char DAT_00102f44[] = "Testing Composite Types";
char stack0x00000008[8];

// Switch case table for enum_switch
char CSWTCH_62[4] = {0, -1, -2, -3};

// Function: _init @ 0x1006b8
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_001006d0 @ 0x1006d0
void FUN_001006d0(void)
{
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100730
// Removed self-referential wrapper - using external declaration

// Function: main @ 0x100780
int main(int argc, char **argv, char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

// Function: _start @ 0x1007c0
void _start(unsigned long long param_1)
{
 __libc_start_main(main,0,&stack0x00000008,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x1007f4
int call_weak_fn(int param_1)
{
 void (*ptr)(void) = __gmon_start__;
 ptr();
 return param_1;
}

// Function: deregister_tm_clones @ 0x100810
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100840
void register_tm_clones(void)
{
 return;
}

// Function: FUN_0010087c @ 0x10087c
void FUN_0010087c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100880
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: double_value @ 0x1008d4
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: process_int @ 0x1008dc
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: complex_callback @ 0x1008e8
bool complex_callback(int *param_1,long *param_2)
{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}

// Function: process_char @ 0x100904
char process_char(char param_1)
{
 if ((byte)(param_1 + 0xbfU) < 0x1a) {
 param_1 = param_1 + ' ';
 }
 return param_1;
}

// Function: process_short @ 0x100924
int process_short(short param_1,short param_2)
{
 return (int)param_2 + (int)param_1;
}

// Function: process_long @ 0x100930
long process_long(long param_1)
{
 return param_1 << 1;
}

// Function: process_ll @ 0x100938
long process_ll(long param_1)
{
 return param_1 * param_1;
}

// Function: process_float @ 0x100940
unsigned int process_float(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = NEON_fmadd(param_1,0x3fc00000,0x3f000000);
 return uVar1;
}

// Function: process_double @ 0x100950
unsigned long long process_double(unsigned long long param_1)
{
 unsigned long long uVar1;
 uVar1 = NEON_fmadd(param_1,0x3fe0000000000000,0x3fb999999999999a);
 return uVar1;
}

// Function: process_ld @ 0x100964
void process_ld(unsigned long long param_1)
{
 unsigned long long uVar1;
 uVar1 = __multf3(param_1,param_1);
 __addtf3(uVar1,0);
 return;
}

// Function: process_bool @ 0x10098c
uint process_bool(uint param_1)
{
 uint uVar1;
 uVar1 = ~param_1 & 1;
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: const_param @ 0x1009a0
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x1009ac
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x1009bc
void test_data_types_l1(void)
{
 puts(DAT_00102b24);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",(int)0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",(int)0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",(int)300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",process_float(0x3f000000));
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",(double)process_double(0x3fb999999999999aULL));
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",0.0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",process_bool(1));
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",process_bool(0));
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",process_bool(0));
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x100b0c
int array_1d_stack(long param_1,int param_2)
{
 int iVar1;
 long lVar2;
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 }
 return iVar1;
}

// Function: array_string @ 0x100b34
unsigned long array_string(long param_1)
{
 unsigned long uVar1;
 unsigned long uVar2;
 uVar2 = 0;
 do {
 uVar1 = uVar2 & 0xffffffff;
 uVar2 = uVar2 + 1;
 } while (*(char *)(param_1 + -1 + uVar2) != '\0');
 return uVar1;
}

// Function: array_2d_stack @ 0x100b50
int array_2d_stack(int *param_1)
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

// Function: array_3d @ 0x100b70
int array_3d(int *param_1)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 piVar1 = param_1 + 0x7d;
 iVar3 = 0;
 do {
 piVar2 = param_1 + 0x19;
 piVar4 = param_1;
 do {
 param_1 = piVar4 + 5;
 iVar3 = iVar3 + *piVar4 + piVar4[1] + piVar4[2] + piVar4[3] + piVar4[4];
 piVar4 = param_1;
 } while (param_1 != piVar2);
 } while (piVar1 != param_1);
 return iVar3;
}

// Function: array_vla @ 0x100bc0
int array_vla(int param_1,long param_2)
{
 int iVar1;
 long lVar2;
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_1; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_2 + lVar2 * 4);
 }
 return iVar1;
}

// Function: array_pointer @ 0x100be8
int array_pointer(long param_1,int param_2)
{
 int iVar1;
 long lVar2;
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 0x28);
 }
 return iVar1;
}

// Function: pointer_array @ 0x100c18
int pointer_array(long param_1,int param_2)
{
 int iVar1;
 long lVar2;
 int *piVar3;
 lVar2 = 0;
 if (10 < param_2) {
 param_2 = 10;
 }
 iVar1 = 0;
 for (; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 piVar3 = *(int **)(param_1 + lVar2 * 8);
 if (piVar3 != (int *)0x0) {
 iVar1 = iVar1 + *piVar3;
 }
 }
 return iVar1;
}

// Function: array_complex_index @ 0x100c54
unsigned int array_complex_index(long param_1,int param_2,int param_3,uint param_4,uint param_5)
{
 bool bVar1;
 bool bVar2;
 unsigned int uVar3;
 bVar2 = -1 < (int)(param_4 | param_5);
 bVar1 = false;
 if (bVar2) {
 bVar1 = (int)(param_4 - param_2) < 0;
 }
 if ((bVar1 == (bVar2 && SBORROW4(param_4,param_2))) || (param_3 <= (int)param_5)) {
 uVar3 = 0xffffffff;
 }
 else {
 uVar3 = *(unsigned int *)(param_1 + (long)(int)(param_4 + param_2 * param_5) * 4);
 }
 return uVar3;
}

// Function: array_oob @ 0x100c80
int array_oob(long param_1,int param_2)
{
 int iVar1;
 long lVar2;
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 <= param_2; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 }
 return iVar1;
}

// Function: test_array_types @ 0x100ca8
void test_array_types(void)
{
 unsigned int uVar1;
 int iVar2;
 long lVar3;
 unsigned int *puVar4;
 int iVar5;
 char *puVar6;
 unsigned int *puVar7;
 unsigned int local_534;
 unsigned int uStack_530;
 unsigned int local_52c;
 unsigned long long local_528;
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
 unsigned int local_4b0 [20];
 unsigned int local_460 [10];
 unsigned int local_438;
 unsigned int local_410;
 unsigned int local_3e8;
 unsigned int local_3c0;
 char local_398 [400];
 unsigned int local_208 [126];
 unsigned int local_10;
 unsigned short local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(DAT_00102c8f);
 local_518 = 0x200000001;
 uStack_510 = 0x400000003;
 local_508 = 5;
 uVar1 = array_1d_stack((long)&local_518,5);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_c = (unsigned short)'o';
 local_10 = (unsigned int)'hell';
 uVar1 = array_string((long)local_398);
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar1);
 iVar5 = 0;
 puVar6 = local_398;
 do {
 lVar3 = 0;
 do {
 iVar2 = (int)lVar3;
 if (iVar5 != iVar2) {
 iVar2 = 0;
 }
 *(int *)(puVar6 + lVar3 * 4) = iVar2;
 lVar3 = lVar3 + 1;
 } while (lVar3 != 10);
 iVar5 = iVar5 + 1;
 puVar6 = puVar6 + 0x28;
 } while (iVar5 != 10);
 uVar1 = array_2d_stack((int *)local_398);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 iVar5 = 5;
 puVar7 = local_208;
 do {
 iVar2 = 5;
 puVar4 = puVar7;
 do {
 *puVar4 = 1;
 puVar4[1] = 1;
 iVar2 = iVar2 + -1;
 puVar4[2] = 1;
 puVar4[3] = 1;
 puVar4[4] = 1;
 puVar4 = puVar4 + 5;
 } while (iVar2 != 0);
 puVar7 = puVar7 + 0x19;
 iVar5 = iVar5 + -1;
 } while (iVar5 != 0);
 uVar1 = array_3d(local_208);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",uVar1);
 local_528 = 0x140000000a;
 local_520 = 0x1e;
 uVar1 = array_vla(3,(long)&local_528);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",uVar1);
 local_460[0] = 0;
 local_438 = 10;
 local_410 = 0x14;
 local_3e8 = 0x1e;
 local_3c0 = 0x28;
 uVar1 = array_pointer((long)local_460,5);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_4b8 = 0;
 local_534 = 10;
 uStack_530 = 0x14;
 local_52c = 0x1e;
 uStack_4e0 = 0;
 local_4e8 = 0;
 uStack_4d0 = 0;
 uStack_4d8 = 0;
 uStack_4c0 = 0;
 local_4c8 = 0;
 local_500 = &local_534;
 local_4f8 = &uStack_530;
 local_4f0 = &local_52c;
 uVar1 = pointer_array((long)&local_500,3);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",uVar1);
 lVar3 = 0;
 do {
 local_4b0[lVar3] = (int)lVar3;
 lVar3 = lVar3 + 1;
 } while (lVar3 != 0x14);
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",local_4b0[17]);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(&__stack_chk_guard);
 }
 return;
}

// Function: ptr_single @ 0x100f14
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x100f20
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x100f30
int ptr_triple(unsigned long long *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x100f44
int ptr_increment(long param_1,int param_2)
{
 int iVar1;
 long lVar2;
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 }
 return iVar1;
}

// Function: ptr_offset @ 0x100f6c
unsigned int ptr_offset(long param_1,int param_2)
{
 return *(unsigned int *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x100f74
unsigned long ptr_diff(long param_1,long param_2)
{
 return (unsigned long)(param_1 - param_2) >> 2 & 0xffffffff;
}

// Function: ptr_void @ 0x100f80
uint ptr_void(uint *param_1,int param_2)
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

// Function: ptr_const @ 0x100fa4
int ptr_const(int *param_1)
{
 return *param_1 << 1;
}

// Function: ptr_const_ptr @ 0x100fb0
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x100fc4
int ptr_func_simple(int (*func)(int), unsigned int param_2)
{
 return func(param_2);
}

// Function: ptr_func_complex @ 0x100fd0
int ptr_func_complex(void *param_1,unsigned long long param_2)
{
 char *local_18;
 unsigned long long uStack_10;
 long local_8;
 int local_34;
 long local_30;
 int retVal;
 int (*func_ptr)(int *, long *);
 local_8 = ___stack_chk_guard;
 local_18 = DAT_00102da6;
 uStack_10 = 0;
 func_ptr = (int (*)(int *, long *))param_1;
 retVal = func_ptr((int *)&local_34,(long *)&local_30);
 if (retVal == 0) {
 retVal = 0;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(&__stack_chk_guard);
 }
 return retVal;
}

// Function: ptr_cast @ 0x101030
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x101038
long opaque_handle_create(int param_1)
{
 return (long)param_1;
}

// Function: opaque_handle_op @ 0x101040
int opaque_handle_op(int param_1)
{
 return param_1 << 1;
}

// Function: test_pointer_types @ 0x101048
void test_pointer_types(void)
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
 puts(DAT_00102dab);
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
 uVar1 = ptr_increment((long)&local_20,5);
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 uVar1 = ptr_func_simple(double_value,5);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
 local_34 = 5;
 uVar1 = ptr_func_complex(complex_callback,(unsigned long long)&local_34);
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(&__stack_chk_guard);
 }
 return;
}

// Function: struct_simple @ 0x101224
int struct_simple(int *param_1)
{
 return *param_1 + param_1[1] + param_1[2];
}

// Function: struct_array @ 0x101238
int struct_array(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + *param_1 + param_1[1] + param_1[2];
 param_1 = param_1 + 3;
 }
 return iVar1;
}

// Function: struct_nested @ 0x101270
int struct_nested(int *param_1)
{
 return *param_1 + param_1[3];
}

// Function: struct_deep @ 0x101280
int struct_deep(long param_1)
{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}

// Function: struct_with_ptr @ 0x101290
int struct_with_ptr(int *param_1)
{
 int iVar1;
 if (*(int **)(param_1 + 2) == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = **(int **)(param_1 + 2);
 }
 return *param_1 + iVar1;
}

// Function: struct_bitfields @ 0x1012b0
int struct_bitfields(uint *param_1)
{
 uint uVar1;
 uVar1 = *param_1;
 return (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7) + (uVar1 >> 6 & 0x3ff);
}

// Function: union_type @ 0x1012d4
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
 fVar1 = (float)(uint)*(byte *)param_1;
 }
 return fVar1;
}

// Function: union_array @ 0x1012fc
int union_array(long param_1,int param_2)
{
 int iVar1;
 long lVar2;
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 }
 return iVar1;
}

// Function: enum_type @ 0x101324
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x101330
long enum_switch(uint param_1)
{
 long lVar1;
 if (param_1 < 4) {
 lVar1 = (long)*(char *)((long)&CSWTCH_62 + (unsigned long)param_1);
 }
 else {
 lVar1 = 0xffffff9d;
 }
 return lVar1;
}

// Function: struct_func_ptr @ 0x101354
void struct_func_ptr(unsigned int *param_1)
{
 (**(void **)(param_1 + 2))(*param_1);
 return;
}

// Function: linked_list @ 0x101364
int linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}

// Function: doubly_linked_list @ 0x101384
int doubly_linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}

// Function: binary_tree_sum @ 0x1013a4
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 4)) {
 iVar1 = binary_tree_sum(*(unsigned long long *)(param_1 + 2));
 iVar2 = iVar2 + iVar1 + *param_1;
 }
 return iVar2;
}

// Function: graph_traverse @ 0x1013ec
int graph_traverse(long param_1)
{
 int iVar1;
 long lVar2;
 int *piVar3;
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < *(int *)(param_1 + 0x50); lVar2 = lVar2 + 1) {
 for (piVar3 = *(int **)(param_1 + lVar2 * 8); piVar3 != (int *)0x0;
 piVar3 = *(int **)(piVar3 + 2)) {
 iVar1 = iVar1 + *piVar3;
 }
 }
 return iVar1;
}

// Function: test_composite_types @ 0x101428
void test_composite_types(void)
{
 unsigned int uVar1;
 unsigned long uVar2;
 unsigned long local_148;
 unsigned int local_140 [2];
 unsigned long long local_138;
 unsigned int local_130 [2];
 unsigned int *local_128;
 unsigned int local_120 [2];
 void *local_118;
 unsigned int local_110 [2];
 unsigned long long local_108;
 unsigned int local_100 [2];
 unsigned long long local_f8;
 unsigned long long uStack_f0;
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
 unsigned long long uStack_80;
 unsigned int local_78 [2];
 unsigned long long local_70;
 unsigned int *puStack_68;
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
 puts(DAT_00102f44);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
 local_d8 = 0x100000001;
 uStack_d0 = 0x200000001;
 local_c8 = 0x200000002;
 uVar1 = struct_array(&local_d8,2);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 local_140[0] = 0x14;
 local_128 = local_140;
 local_138 = 0;
 local_130[0] = 10;
 uVar1 = struct_with_ptr(local_130);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_148 = (unsigned long)((local_148 & 0xfff00000ffff0000) | 0x191d);
 uVar1 = struct_bitfields((uint *)(unsigned long *)&local_148);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 local_e8 = 0x140000000a;
 local_e0 = 0x1e;
 uVar1 = union_array(&local_e8,3);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 local_120[0] = 10;
 local_118 = process_int;
 uVar1 = struct_func_ptr(local_120);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
 local_b8 = local_b0;
 local_a8 = local_a0;
 local_c0[0] = 10;
 local_b0[0] = 0x14;
 local_a0[0] = 0x1e;
 local_98 = 0;
 uVar1 = linked_list(local_c0);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",uVar1);
 local_90[0] = 10;
 local_88 = local_78;
 puStack_68 = local_90;
 uStack_80 = 0;
 local_78[0] = 0x14;
 local_70 = 0;
 uVar1 = doubly_linked_list(local_c0);
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_100[0] = 100;
 local_f8 = 0;
 uStack_f0 = 0;
 uVar1 = binary_tree_sum(&local_100);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_108 = 0;
 uVar2 = 1;
 local_110[0] = 1;
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
 uVar1 = graph_traverse(&local_60);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",uVar1);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(&__stack_chk_guard);
 }
 return;
}

// Function: __addtf3 @ 0x1016f0
unsigned long __addtf3(unsigned long param_1,unsigned long param_2)
{
 unsigned long uVar1;
 unsigned long uVar2;
 bool bVar3;
 bool bVar4;
 int iVar5;
 uint uVar6;
 long lVar7;
 unsigned long uVar8;
 unsigned long uVar9;
 unsigned long uVar10;
 unsigned long uVar11;
 unsigned long uVar12;
 unsigned long uVar13;
 long lVar14;
 unsigned long uVar15;
 unsigned long uVar16;
 unsigned long uVar17;
 unsigned long uVar18;
 unsigned long uVar19;
 unsigned long uVar20;
 unsigned long uVar21;
 unsigned long in_register_00005008;
 unsigned long in_register_00005028;
 uVar10 = fpcr;
 uVar1 = (in_register_00005008 & 0xffffffffffff) << 3;
 lVar14 = -((long)in_register_00005008 >> 0x3f);
 lVar7 = -((long)in_register_00005028 >> 0x3f);
 uVar13 = in_register_00005028 << 3;
 uVar2 = uVar13 & 0x7fffffffffff8;
 uVar21 = uVar1 | param_1 >> 0x3d;
 uVar17 = in_register_00005008 >> 0x30 & 0x7fff;
 uVar15 = in_register_00005028 >> 0x30 & 0x7fff;
 uVar12 = uVar2 | param_2 >> 0x3d;
 uVar18 = param_1 * 8;
 uVar20 = param_2 * 8;
 uVar19 = uVar18;
 uVar9 = uVar21;
 if ((long)in_register_00005028 >> 0x3f == (long)in_register_00005008 >> 0x3f) {
 uVar6 = (int)uVar17 - (int)uVar15;
 uVar8 = (unsigned long)uVar6;
 if ((int)uVar6 < 1) {
 if (uVar6 == 0) {
 uVar11 = uVar17 + 1;
 if ((uVar11 & 0x7ffe) == 0) {
 uVar11 = uVar21 | uVar18;
 if (uVar17 != 0) {
 uVar6 = 0;
 if (uVar17 == 0x7fff) {
 if (uVar11 == 0) {
 if (uVar15 != 0x7fff) goto LAB_00101fe0;
 if ((uVar12 | uVar20) == 0) {
 return 0;
 }
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar6 = (uint)uVar8;
 if (uVar15 != 0x7fff) goto LAB_00102188;
 if ((uVar12 | uVar20) == 0) goto LAB_00102220;
 }
LAB_0010224c:
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar11 != 0) {
LAB_00102190:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101bd4;
 }
LAB_00101fe0:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 else {
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) != 0) goto LAB_0010224c;
 if (uVar11 == 0) {
 return 0;
 }
 }
 else {
 if (uVar11 == 0) goto LAB_00101fe0;
LAB_00102188:
 if ((uVar12 | uVar20) != 0) goto LAB_00102190;
 }
LAB_00102220:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 }
 goto LAB_00101bd4;
 }
 if (uVar11 == 0) {
 uVar19 = uVar20;
 uVar9 = uVar12;
 if ((uVar12 | uVar20) == 0) {
 param_1 = 0;
 goto LAB_00101888;
 }
 goto LAB_00101f58;
 }
 if ((uVar12 | uVar20) == 0) goto LAB_00101f58;
 uVar19 = uVar18 + uVar20;
 uVar9 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 if ((uVar9 >> 0x33 & 1) != 0) {
 uVar9 = uVar9 & 0xfff7ffffffffffff;
 uVar12 = 0;
 bVar3 = false;
 uVar11 = 1;
 goto LAB_0010183c;
 }
LAB_00101828:
 lVar7 = lVar14;
 uVar18 = uVar19 | uVar9;
 goto joined_r0x0010197c;
 }
 if (uVar11 != 0x7fff) {
 uVar19 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 bVar3 = false;
 uVar12 = uVar18 + uVar20 >> 1 & 7;
 uVar9 = uVar19 >> 1;
 uVar19 = uVar18 + uVar20 >> 1 | uVar19 << 0x3f;
 goto LAB_0010183c;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) goto LAB_00101f84;
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) goto LAB_00102230;
 if (uVar19 != 0x800000) goto LAB_00101ef4;
 if (lVar14 == 0) goto LAB_001021cc;
LAB_00102098:
 uVar8 = 0x14;
 }
 else {
 uVar17 = uVar15;
 if (uVar17 == 0) {
 if ((uVar21 | uVar18) == 0) {
 uVar19 = uVar20;
 uVar9 = uVar12;
 lVar7 = lVar14;
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = uVar2 >> 0x32 ^ 1;
 goto LAB_00101a10;
 }
 goto LAB_00101cc4;
 }
 goto LAB_0010196c;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_00101b28;
 }
 }
 else {
 uVar6 = -uVar6;
 uVar21 = uVar21 | 0x8000000000000;
 }
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) == 0) {
 return 0;
 }
 uVar8 = uVar2 >> 0x32 ^ 1;
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 goto LAB_00101bd4;
 }
 if ((int)uVar6 < 0x75) {
 if ((int)uVar6 < 0x40) {
 uVar19 = uVar21 << ((unsigned long)(0x40 - uVar6) & 0x3f) | uVar18 >> ((unsigned long)uVar6 & 0x3f) |
 (unsigned long)(uVar18 << ((unsigned long)(0x40 - uVar6) & 0x3f) != 0);
 uVar12 = uVar12 + (uVar21 >> ((unsigned long)uVar6 & 0x3f));
 }
 else {
 uVar19 = uVar18 | uVar21 << ((unsigned long)(0x80 - uVar6) & 0x3f);
 if (uVar6 - 0x40 == 0) {
 uVar19 = uVar18;
 }
 uVar19 = (unsigned long)(uVar19 != 0) | uVar21 >> ((unsigned long)(uVar6 - 0x40) & 0x3f);
 }
 }
 else {
 uVar19 = (unsigned long)((uVar21 | uVar18) != 0);
 }
 uVar18 = uVar19 + uVar20;
 if (CARRY8(uVar19,uVar20)) {
 uVar12 = uVar12 + 1;
 }
LAB_00101b28:
 uVar15 = uVar17;
 uVar19 = uVar18;
 uVar9 = uVar12;
 lVar7 = lVar14;
 if ((uVar12 >> 0x33 & 1) == 0) goto LAB_0010196c;
 uVar11 = uVar17 + 1;
 if (uVar11 != 0x7fff) {
 bVar3 = false;
 uVar19 = uVar18 & 1 | uVar18 >> 1 | uVar12 << 0x3f;
 uVar9 = (uVar12 & 0xfff7ffffffffffff) >> 1;
 uVar12 = uVar18 & 1 | uVar18 >> 1 & 7;
 goto LAB_0010183c;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) {
LAB_00101f84:
 uVar8 = 0x14;
 goto LAB_00101a7c;
 }
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) {
LAB_00102230:
 uVar8 = 0x14;
 goto LAB_00101a7c;
 }
 if (uVar19 == 0x800000) {
 if (lVar14 != 0) goto LAB_00102098;
LAB_001021cc:
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto LAB_0010186c;
 }
LAB_00101ef4:
 uVar6 = 0x14;
 if ((uVar10 & 0xc00000) == 0x400000) {
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 bVar3 = false;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto joined_r0x00101f14;
 }
LAB_00101a38:
 uVar10 = uVar10 & 0xc00000;
 if (uVar10 != 0) {
 if (uVar10 == 0x400000) {
 if (lVar14 != 0) goto LAB_00101a54;
 }
 else if (((uint)(uVar10 == 0x800000) & (uint)lVar14) == 0) {
LAB_00101a54:
 param_1 = 0xffffffffffffffff;
 uVar8 = (unsigned long)(uVar6 | 0x14);
 goto LAB_00101888;
 }
 }
 uVar8 = (unsigned long)(uVar6 | 0x14);
 }
LAB_00101a7c:
 param_1 = 0;
 goto LAB_00101a90;
 }
 if (uVar15 == 0) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = (unsigned long)(uVar6 - 1);
 if (uVar6 - 1 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_00101b28;
 }
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 goto LAB_00101a04;
 }
 goto LAB_00101900;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 != 0x7fff) goto LAB_0010196c;
 if ((uVar21 | uVar18) == 0) goto LAB_00101cc4;
 uVar8 = (unsigned long)((uint)(uVar1 >> 0x32) ^ 1);
 uVar20 = uVar18;
 uVar12 = uVar21;
LAB_00101a10:
 uVar11 = 0x7fff;
 goto LAB_00101a18;
 }
 uVar12 = uVar12 | 0x8000000000000;
 if (uVar17 != 0x7fff) {
LAB_00101900:
 iVar5 = (int)uVar8;
 if (iVar5 < 0x75) {
 if (iVar5 < 0x40) {
 uVar19 = uVar12 << ((unsigned long)(0x40 - iVar5) & 0x3f) | uVar20 >> (uVar8 & 0x3f) |
 (unsigned long)(uVar20 << ((unsigned long)(0x40 - iVar5) & 0x3f) != 0);
 uVar12 = uVar21 + (uVar12 >> (uVar8 & 0x3f));
 }
 else {
 uVar19 = uVar20 | uVar12 << ((unsigned long)(0x80 - iVar5) & 0x3f);
 if (iVar5 - 0x40U == 0) {
 uVar19 = uVar20;
 }
 uVar19 = (unsigned long)(uVar19 != 0) | uVar12 >> ((unsigned long)(iVar5 - 0x40U) & 0x3f);
 uVar12 = uVar21;
 }
 }
 else {
 uVar19 = (unsigned long)((uVar12 | uVar20) != 0);
 uVar12 = uVar21;
 }
 uVar18 = uVar19 + uVar18;
 if (CARRY8(uVar19,uVar18)) {
 uVar12 = uVar12 + 1;
 }
 goto LAB_00101b28;
 }
LAB_00101bb4:
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar19 = in_register_00005008 & 0xffffffffffff;
LAB_00101bd4:
 if ((uVar19 | param_1) == 0) {
 param_1 = 0;
 }
 }
 else {
 uVar6 = (int)uVar17 - (int)uVar15;
 uVar8 = (unsigned long)uVar6;
 if ((int)uVar6 < 1) {
 if (uVar6 != 0) {
 if (uVar17 == 0) {
 if ((uVar21 | uVar18) == 0) {
 uVar19 = uVar20;
 uVar9 = uVar12;
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = uVar2 >> 0x32 ^ 1;
 goto LAB_00101a10;
 }
 goto LAB_00101cc4;
 }
 goto LAB_0010196c;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 goto LAB_001017bc;
 }
 }
 else {
 uVar6 = -uVar6;
 uVar21 = uVar21 | 0x8000000000000;
 }
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) == 0) {
 return 0;
 }
 uVar8 = uVar2 >> 0x32 ^ 1;
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 goto LAB_00101bd4;
 }
 if ((int)uVar6 < 0x75) {
 if ((int)uVar6 < 0x40) {
 uVar18 = uVar21 << ((unsigned long)(0x40 - uVar6) & 0x3f) | uVar18 >> ((unsigned long)uVar6 & 0x3f) |
 (unsigned long)(uVar18 << ((unsigned long)(0x40 - uVar6) & 0x3f) != 0);
 uVar12 = uVar12 - (uVar21 >> ((unsigned long)uVar6 & 0x3f));
 }
 else {
 uVar19 = uVar18 | uVar21 << ((unsigned long)(0x80 - uVar6) & 0x3f);
 if (uVar6 - 0x40 == 0) {
 uVar19 = uVar18;
 }
 uVar18 = (unsigned long)(uVar19 != 0) | uVar21 >> ((unsigned long)(uVar6 - 0x40) & 0x3f);
 }
 }
 else {
 uVar18 = (unsigned long)((uVar21 | uVar18) != 0);
 }
 uVar19 = uVar20 - uVar18;
 uVar9 = uVar12 - (uVar20 < uVar18);
 goto LAB_001017bc;
 }
 if ((uVar17 + 1 & 0x7ffe) != 0) {
 uVar19 = uVar18 + param_2 * -8;
 uVar13 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar13 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar13) == 0) {
 param_1 = 0;
 goto LAB_00101888;
 }
 }
 else {
 uVar19 = uVar20 + param_1 * -8;
 uVar13 = uVar12 - (uVar21 + (uVar20 < uVar18));
 lVar14 = lVar7;
 }
 goto LAB_001017c4;
 }
 uVar16 = uVar21 | uVar18;
 uVar11 = uVar12 | uVar20;
 if (uVar17 != 0) {
 if (uVar17 == 0x7fff) {
 if (uVar16 == 0) {
 if (uVar15 != 0x7fff) goto LAB_00101e98;
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 if (uVar15 != 0x7fff) goto LAB_00101e68;
 }
LAB_001020e0:
 if (uVar11 != 0) {
 uVar6 = (uint)uVar8;
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar16 == 0) {
LAB_0010215c:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 goto LAB_00101bd4;
 }
LAB_001020f8:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101bd4;
 }
 if (uVar16 != 0) goto LAB_00101e68;
 }
 else {
 if (uVar15 == 0x7fff) goto LAB_001020e0;
 if (uVar16 != 0) {
LAB_00101e68:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if (uVar11 == 0) goto LAB_00101bd4;
 goto LAB_001020f8;
 }
LAB_00101e98:
 if (uVar11 != 0) goto LAB_0010215c;
 }
 param_1 = 0xffffffffffffffff;
 uVar8 = 1;
 goto LAB_00101888;
 }
 if (uVar16 != 0) {
 if (uVar11 == 0) goto LAB_00101f58;
 uVar19 = uVar18 + param_2 * -8;
 uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar9 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar9) != 0) {
 uVar12 = 0;
 bVar3 = true;
 uVar11 = uVar17;
 goto LAB_0010183c;
 }
 goto LAB_00102030;
 }
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 uVar18 = uVar19 | uVar9;
 goto joined_r0x0010197c;
 }
 uVar19 = uVar20;
 uVar9 = uVar12;
 lVar14 = lVar7;
 if (uVar11 == 0) {
LAB_00102030:
 param_1 = 0;
 goto LAB_00101888;
 }
LAB_00101f58:
 uVar18 = 0;
 uVar11 = 0;
LAB_00101f60:
 uVar8 = 0;
 if (((uint)uVar10 >> 0xb & 1) != 0) {
 uVar8 = 8;
 }
LAB_00101868:
 uVar20 = uVar19;
 uVar12 = uVar9;
 if (uVar18 == 0) {
LAB_00101a18:
 param_1 = uVar20 >> 3 | uVar12 << 0x3d;
 uVar19 = uVar12 >> 3;
 if (uVar11 == 0x7fff) goto LAB_00101bd4;
 }
 else {
LAB_0010186c:
 uVar6 = (uint)uVar8;
 if (uVar11 == 0x7ffe) goto LAB_00101a38;
 param_1 = uVar19 >> 3 | uVar9 << 0x3d;
 }
 }
 else {
 if (uVar15 == 0) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = (unsigned long)(uVar6 - 1);
 if (uVar6 - 1 == 0) {
 uVar19 = uVar18 + param_2 * -8;
 uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
 uVar15 = uVar17;
 lVar7 = lVar14;
 goto LAB_001017bc;
 }
 goto LAB_00101768;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) != 0) {
LAB_00101a04:
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar20 = uVar18;
 uVar12 = uVar21;
 goto LAB_00101a10;
 }
LAB_00101cc4:
 uVar8 = 0;
 uVar19 = 0;
 param_1 = 0;
 goto LAB_00101bd4;
 }
 }
 else {
 uVar12 = uVar12 | 0x8000000000000;
LAB_00101768:
 if (uVar17 == 0x7fff) goto LAB_00101bb4;
 iVar5 = (int)uVar8;
 if (iVar5 < 0x75) {
 if (iVar5 < 0x40) {
 uVar9 = uVar12 << ((unsigned long)(0x40 - iVar5) & 0x3f) | uVar20 >> (uVar8 & 0x3f) |
 (unsigned long)(uVar20 << ((unsigned long)(0x40 - iVar5) & 0x3f) != 0);
 uVar21 = uVar21 - (uVar12 >> (uVar8 & 0x3f));
 }
 else {
 uVar19 = uVar20 | uVar12 << ((unsigned long)(0x80 - iVar5) & 0x3f);
 if (iVar5 - 0x40U == 0) {
 uVar19 = uVar20;
 }
 uVar9 = (unsigned long)(uVar19 != 0) | uVar12 >> ((unsigned long)(iVar5 - 0x40U) & 0x3f);
 }
 }
 else {
 uVar9 = (unsigned long)((uVar12 | uVar20) != 0);
 }
 uVar19 = uVar18 - uVar9;
 uVar9 = uVar21 - (uVar18 < uVar9);
 uVar15 = uVar17;
 lVar7 = lVar14;
LAB_001017bc:
 uVar13 = uVar9 & 0x7ffffffffffff;
 uVar17 = uVar15;
 lVar14 = lVar7;
 if ((uVar9 >> 0x33 & 1) != 0) {
LAB_001017c4:
 if (uVar13 == 0) {
 uVar12 = uVar19 | uVar19 >> 1;
 uVar12 = uVar12 | uVar12 >> 2;
 uVar12 = uVar12 | uVar12 >> 4;
 uVar12 = uVar12 | uVar12 >> 8;
 uVar12 = uVar12 | uVar12 >> 0x10;
 uVar12 = uVar12 | uVar12 >> 0x20;
 uVar12 = ((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar12 & 0x5555555555555555);
 uVar12 = ((uVar12 & 0xcccccccccccccccc) >> 2) + (uVar12 & 0x3333333333333333);
 uVar12 = ((uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar12 & 0xf0f0f0f0f0f0f0f);
 uVar12 = ((uVar12 & 0xff00ff00ff00ff00) >> 8) + (uVar12 & 0xff00ff00ff00ff);
 lVar7 = ((uVar12 & 0xffff0000ffff0000) >> 0x10) + (uVar12 & 0xffff0000ffff);
 iVar5 = -((int)((unsigned long)lVar7 >> 0x20) + (int)lVar7);
 uVar6 = iVar5 + 0x74;
 if ((int)uVar6 < 0x40) goto LAB_001017d0;
 uVar18 = uVar19 << ((unsigned long)(iVar5 + 0x34) & 0x3f);
 uVar12 = 0;
 }
 else {
 uVar12 = uVar13 | uVar13 >> 1;
 uVar12 = uVar12 | uVar12 >> 2;
 uVar12 = uVar12 | uVar12 >> 4;
 uVar12 = uVar12 | uVar12 >> 8;
 uVar12 = uVar12 | uVar12 >> 0x10;
 uVar12 = uVar12 | uVar12 >> 0x20;
 uVar12 = ((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar12 & 0x5555555555555555);
 uVar12 = ((uVar12 & 0xcccccccccccccccc) >> 2) + (uVar12 & 0x3333333333333333);
 uVar12 = ((uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar12 & 0xf0f0f0f0f0f0f0f);
 uVar12 = ((uVar12 & 0xff00ff00ff00ff00) >> 8) + (uVar12 & 0xff00ff00ff00ff);
 lVar7 = ((uVar12 & 0xffff0000ffff0000) >> 0x10) + (uVar12 & 0xffff0000ffff);
 uVar6 = 0x34 - ((int)((unsigned long)lVar7 >> 0x20) + (int)lVar7);
LAB_001017d0:
 uVar12 = uVar19 << ((unsigned long)uVar6 & 0x3f);
 uVar18 = uVar19 >> ((unsigned long)-uVar6 & 0x3f) | uVar13 << ((unsigned long)uVar6 & 0x3f);
 }
 lVar7 = lVar14;
 if ((long)uVar17 <= (long)(int)uVar6) {
 iVar5 = uVar6 - (int)uVar17;
 uVar6 = iVar5 + 1;
 if ((int)uVar6 < 0x40) {
 uVar9 = uVar18 >> ((unsigned long)uVar6 & 0x3f);
 uVar19 = uVar18 << ((unsigned long)(0x40 - uVar6) & 0x3f) | uVar12 >> ((unsigned long)uVar6 & 0x3f) |
 (unsigned long)(uVar12 << ((unsigned long)(0x40 - uVar6) & 0x3f) != 0);
 goto LAB_00101828;
 }
 uVar19 = uVar12 | uVar18 << ((unsigned long)(0x80 - uVar6) & 0x3f);
 if (uVar6 == 0x40) {
 uVar19 = uVar12;
 }
 uVar9 = 0;
 uVar19 = (unsigned long)(uVar19 != 0) | uVar18 >> ((unsigned long)(iVar5 - 0x3f) & 0x3f);
 uVar18 = uVar19;
 goto joined_r0x0010197c;
 }
 uVar15 = uVar17 - (long)(int)uVar6;
 uVar19 = uVar12;
 uVar9 = uVar18 & 0xfff7ffffffffffff;
 }
 }
LAB_0010196c:
 uVar12 = uVar19 & 7;
 bVar3 = false;
 uVar11 = uVar15;
 lVar14 = lVar7;
 uVar18 = uVar19 | uVar9;
 if (uVar15 != 0) {
LAB_0010183c:
 if (uVar12 == 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0;
 if (bVar3) goto LAB_00101f60;
 }
 else {
 uVar12 = uVar10 & 0xc00000;
 if (uVar12 == 0x400000) {
 uVar8 = 0x10;
joined_r0x00101f14:
 if (lVar14 == 0) {
LAB_00101b64:
 bVar4 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar4) {
 uVar9 = uVar9 + 1;
 }
 }
 }
 else if (uVar12 == 0x800000) {
 uVar8 = 0x10;
 if (lVar14 != 0) goto LAB_00101b64;
 }
 else {
 if (uVar12 != 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0x10;
 if (bVar3) {
 uVar8 = 0x18;
 }
 goto LAB_00101868;
 }
 uVar8 = 0x10;
 if (((uVar19 & 0xf) != 4) &&
 (bVar4 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar4)) {
 uVar9 = uVar9 + 1;
 }
 }
 uVar18 = uVar9 & 0x8000000000000;
 if (bVar3) {
 uVar8 = (unsigned long)((uint)uVar8 | 8);
 }
 }
 goto LAB_00101868;
 }
joined_r0x0010197c:
 if (uVar18 != 0) {
 uVar12 = uVar19 & 7;
 bVar3 = true;
 uVar11 = 0;
 lVar14 = lVar7;
 goto LAB_0010183c;
 }
 param_1 = 0;
 uVar8 = 0;
 }
 }
LAB_00101888:
 if ((int)uVar8 == 0) {
 return param_1;
 }
LAB_00101a90:
 __sfp_handle_exceptions(uVar8, 0);
 return param_1;
}

// Function: __multf3 @ 0x102290
unsigned long __multf3(unsigned long param_1,unsigned long param_2)
{
 unsigned long uVar1;
 uint uVar2;
 bool bVar3;
 uint uVar4;
 unsigned long uVar5;
 unsigned long uVar6;
 unsigned long uVar7;
 long lVar8;
 long lVar9;
 int iVar10;
 unsigned long uVar11;
 long lVar12;
 unsigned long uVar13;
 long lVar14;
 unsigned long uVar15;
 unsigned long uVar16;
 unsigned long uVar17;
 unsigned long uVar18;
 unsigned long uVar19;
 long lVar20;
 unsigned long uVar21;
 long lVar22;
 unsigned long uVar23;
 unsigned long uVar24;
 unsigned long uVar25;
 unsigned long uVar26;
 unsigned long uVar27;
 unsigned long uVar28;
 unsigned long in_register_00005008;
 unsigned long in_register_00005028;
 uVar17 = fpcr;
 uVar19 = in_register_00005008 & 0xffffffffffff;
 uVar11 = in_register_00005008 >> 0x30 & 0x7fff;
 iVar10 = (int)uVar11;
 if (iVar10 == 0) {
 if ((param_1 | uVar19) == 0) {
 uVar19 = 0;
 uVar6 = 4;
 lVar14 = 0;
 lVar22 = 1;
 uVar5 = 0;
 uVar11 = 0;
 }
 else {
 if (uVar19 == 0) {
 uVar11 = param_1 | param_1 >> 1;
 uVar11 = uVar11 | uVar11 >> 2;
 uVar11 = uVar11 | uVar11 >> 4;
 uVar11 = uVar11 | uVar11 >> 8;
 uVar11 = uVar11 | uVar11 >> 0x10;
 uVar11 = uVar11 | uVar11 >> 0x20;
 uVar11 = ((uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar11 & 0x5555555555555555);
 uVar11 = ((uVar11 & 0xcccccccccccccccc) >> 2) + (uVar11 & 0x3333333333333333);
 uVar11 = ((uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar11 & 0xf0f0f0f0f0f0f0f);
 uVar11 = ((uVar11 & 0xff00ff00ff00ff00) >> 8) + (uVar11 & 0xff00ff00ff00ff);
 uVar11 = ((uVar11 & 0xffff0000ffff0000) >> 0x10) + (uVar11 & 0xffff0000ffff);
 lVar14 = -((uVar11 >> 0x20) + (uVar11 & 0xffffffff));
 lVar22 = lVar14 + 0x71;
 lVar14 = lVar14 + 0x80;
 if (lVar22 < 0x3d) goto LAB_001026e8;
 uVar11 = 0;
 uVar19 = param_1 << ((unsigned long)((int)lVar22 - 0x3d) & 0x3f);
 }
 else {
 uVar11 = uVar19 | uVar19 >> 1;
 uVar11 = uVar11 | uVar11 >> 2;
 uVar11 = uVar11 | uVar11 >> 4;
 uVar11 = uVar11 | uVar11 >> 8;
 uVar11 = uVar11 | uVar11 >> 0x10 | uVar11 >> 0x20;
 uVar11 = ((uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar11 & 0x5555555555555555);
 uVar11 = ((uVar11 & 0xcccccccccccccccc) >> 2) + (uVar11 & 0x3333333333333333);
 uVar11 = ((uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar11 & 0xf0f0f0f0f0f0f0f);
 uVar11 = ((uVar11 & 0xff00ff00ff00ff00) >> 8) + (uVar11 & 0xff00ff00ff00ff);
 uVar11 = ((uVar11 & 0xffff0000ffff0000) >> 0x10) + (uVar11 & 0xffff0000ffff);
 lVar22 = -((uVar11 >> 0x20) + (uVar11 & 0xffffffff));
 lVar14 = lVar22 + 0x40;
 lVar22 = lVar22 + 0x31;
LAB_001026e8:
 uVar11 = (unsigned long)((int)lVar22 + 3);
 uVar19 = param_1 >> ((unsigned long)(0x3d - (int)lVar22) & 0x3f) | uVar19 << (uVar11 & 0x3f);
 uVar11 = param_1 << (uVar11 & 0x3f);
 }
 uVar6 = 0;
 lVar14 = -0x3fef - lVar14;
 lVar22 = 0;
 uVar5 = 0;
 }
 }
 else if (iVar10 == 0x7fff) {
 if ((param_1 | uVar19) == 0) {
 uVar19 = 0;
 uVar6 = 8;
 lVar14 = 0x7fff;
 lVar22 = 2;
 uVar5 = 0;
 uVar11 = 0;
 }
 else {
 uVar5 = uVar19 >> 0x2f ^ 1;
 uVar6 = 0xc;
 lVar14 = 0x7fff;
 lVar22 = 3;
 uVar11 = param_1;
 }
 }
 else {
 uVar19 = param_1 >> 0x3d | uVar19 << 3 | 0x8000000000000;
 lVar14 = uVar11 - 0x3fff;
 lVar22 = 0;
 uVar6 = 0;
 uVar5 = 0;
 uVar11 = param_1 << 3;
 }
 uVar15 = in_register_00005028 >> 0x3f;
 uVar13 = in_register_00005028 & 0xffffffffffff;
 uVar21 = in_register_00005028 >> 0x30 & 0x7fff;
 iVar10 = (int)uVar21;
 uVar4 = (uint)(in_register_00005008 >> 0x20);
 uVar2 = (uint)(in_register_00005028 >> 0x20);
 if (iVar10 == 0) {
 if ((param_2 | uVar13) == 0) {
 uVar6 = uVar6 | 1;
 lVar8 = lVar14 + 1;
 uVar21 = 0;
 param_2 = 0;
 lVar12 = 1;
 lVar20 = lVar14;
 }
 else {
 if (uVar13 == 0) {
 uVar21 = param_2 | param_2 >> 1;
 uVar21 = uVar21 | uVar21 >> 2;
 uVar21 = uVar21 | uVar21 >> 4;
 uVar21 = uVar21 | uVar21 >> 8;
 uVar21 = uVar21 | uVar21 >> 0x10;
 uVar21 = uVar21 | uVar21 >> 0x20;
 uVar21 = ((uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar21 & 0x5555555555555555);
 uVar21 = ((uVar21 & 0xcccccccccccccccc) >> 2) + (uVar21 & 0x3333333333333333);
 uVar21 = ((uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar21 & 0xf0f0f0f0f0f0f0f);
 uVar21 = ((uVar21 & 0xff00ff00ff00ff00) >> 8) + (uVar21 & 0xff00ff00ff00ff);
 uVar21 = ((uVar21 & 0xffff0000ffff0000) >> 0x10) + (uVar21 & 0xffff0000ffff);
 lVar12 = -((uVar21 >> 0x20) + (uVar21 & 0xffffffff));
 lVar8 = lVar12 + 0x71;
 lVar12 = lVar12 + 0x80;
 if (lVar8 < 0x3d) goto LAB_0010268c;
 uVar21 = param_2 << ((unsigned long)((int)lVar8 - 0x3d) & 0x3f);
 param_2 = 0;
 }
 else {
 uVar21 = uVar13 | uVar13 >> 1;
 uVar21 = uVar21 | uVar21 >> 2;
 uVar21 = uVar21 | uVar21 >> 4;
 uVar21 = uVar21 | uVar21 >> 8;
 uVar21 = uVar21 | uVar21 >> 0x10 | uVar21 >> 0x20;
 uVar21 = ((uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar21 & 0x5555555555555555);
 uVar21 = ((uVar21 & 0xcccccccccccccccc) >> 2) + (uVar21 & 0x3333333333333333);
 uVar21 = ((uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar21 & 0xf0f0f0f0f0f0f0f);
 uVar21 = ((uVar21 & 0xff00ff00ff00ff00) >> 8) + (uVar21 & 0xff00ff00ff00ff);
 uVar21 = ((uVar21 & 0xffff0000ffff0000) >> 0x10) + (uVar21 & 0xffff0000ffff);
 lVar8 = -((uVar21 >> 0x20) + (uVar21 & 0xffffffff));
 lVar12 = lVar8 + 0x40;
 lVar8 = lVar8 + 0x31;
LAB_0010268c:
 uVar7 = (unsigned long)((int)lVar8 + 3);
 uVar21 = param_2 >> ((unsigned long)(0x3d - (int)lVar8) & 0x3f) | uVar13 << (uVar7 & 0x3f);
 param_2 = param_2 << (uVar7 & 0x3f);
 }
 lVar20 = (lVar14 - lVar12) + -0x3fef;
 lVar8 = (lVar14 - lVar12) + -0x3fee;
 lVar12 = 0;
 }
 uVar7 = (unsigned long)((uVar4 ^ uVar2) >> 0x1f);
 if (uVar6 < 0xb) goto LAB_0010239c;
LAB_00102350:
 if (uVar6 != 0xb) {
LAB_00102358:
 uVar18 = uVar11;
 uVar21 = uVar19;
 uVar23 = in_register_00005008 >> 0x3f;
 lVar9 = lVar22;
 goto LAB_0010245c;
 }
LAB_00102478:
 uVar11 = param_2;
 uVar7 = uVar15;
 if (lVar12 != 3) {
LAB_001023b8:
 lVar20 = lVar8;
 if (lVar12 == 1) {
 uVar11 = 0;
 }
 else {
LAB_0010261c:
 lVar14 = lVar20 + 0x3fff;
 uVar4 = (uint)uVar5;
 if (lVar14 < 1) {
 uVar19 = 1 - lVar14;
 if (0x74 < (long)uVar19) {
 uVar11 = param_2 | uVar21;
 if ((param_2 | uVar21) != 0) {
 uVar4 = uVar4 | 0x10;
 uVar11 = 1 - uVar7;
 if (((uVar17 & 0xc00000) != 0x400000) &&
 (uVar11 = uVar7, (uVar17 & 0xc00000) != 0x800000)) {
 uVar11 = 0;
 }
 }
 uVar5 = (unsigned long)(uVar4 | 8);
 goto LAB_00102884;
 }
 iVar10 = (int)uVar19;
 if ((long)uVar19 < 0x40) {
 uVar11 = (unsigned long)(param_2 << ((unsigned long)(0x40 - iVar10) & 0x3f) != 0);
 uVar6 = uVar21 << ((unsigned long)(0x40 - iVar10) & 0x3f) | param_2 >> (uVar19 & 0x3f);
 uVar21 = uVar21 >> (uVar19 & 0x3f);
 uVar19 = uVar6 | uVar11;
 if ((uVar6 & 7 | uVar11) != 0) goto LAB_00102804;
 if ((uVar21 >> 0x33 & 1) == 0) goto LAB_0010294c;
 }
 else {
 uVar11 = param_2 | uVar21 << ((unsigned long)(0x80 - iVar10) & 0x3f);
 if (uVar19 == 0x40) {
 uVar11 = param_2;
 }
 uVar21 = uVar21 >> ((unsigned long)(iVar10 - 0x40) & 0x3f);
 uVar19 = uVar11 != 0 | uVar21;
 uVar21 = (unsigned long)(uVar11 != 0) | uVar21 & 7;
 if (uVar21 == 0) {
LAB_0010294c:
 uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
 if (((uint)uVar17 >> 0xb & 1) != 0) {
 uVar5 = (unsigned long)(uVar4 | 8);
 goto LAB_00102884;
 }
 goto LAB_001023cc;
 }
 uVar21 = 0;
LAB_00102804:
 uVar17 = uVar17 & 0xc00000;
 if (uVar17 == 0x400000) {
 if (uVar7 == 0) {
LAB_001029ac:
 bVar3 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar17 == 0x800000) {
 if (uVar7 != 0) goto LAB_001029ac;
 }
 else if (((uVar17 == 0) && ((uVar19 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
 uVar21 = uVar21 + 1;
 }
 if ((uVar21 >> 0x33 & 1) == 0) {
 uVar5 = (unsigned long)(uVar4 | 0x18);
 uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
 goto LAB_00102884;
 }
 }
 uVar5 = (unsigned long)(uVar4 | 0x18);
 uVar11 = 0;
 goto LAB_00102884;
 }
 if ((param_2 & 7) != 0) {
 uVar19 = uVar17 & 0xc00000;
 uVar5 = (unsigned long)(uVar4 | 0x10);
 if (uVar19 == 0x400000) {
 if (uVar7 == 0) {
LAB_0010299c:
 bVar3 = 0xfffffffffffffff7 < param_2;
 param_2 = param_2 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar19 == 0x800000) {
 if (uVar7 != 0) goto LAB_0010299c;
 }
 else if (((uVar19 == 0) && ((param_2 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < param_2, param_2 = param_2 + 4, bVar3)) {
 uVar21 = uVar21 + 1;
 }
 }
 if ((uVar21 >> 0x34 & 1) != 0) {
 uVar21 = uVar21 & 0xffefffffffffffff;
 lVar14 = lVar20 + 0x4000;
 }
 if (0x7ffe < lVar14) {
 uVar11 = uVar17 & 0xc00000;
 if (uVar11 == 0x400000) {
 uVar11 = -(unsigned long)(uVar7 != 0);
 }
 else if (uVar11 == 0x800000) {
 uVar11 = -(unsigned long)(uVar7 == 0);
 }
 else if (uVar11 != 0) {
 uVar11 = 0xffffffffffffffff;
 }
 uVar5 = (unsigned long)((uint)uVar5 | 0x14);
 goto LAB_00102884;
 }
 uVar11 = param_2 >> 3 | uVar21 << 0x3d;
 }
 }
 }
 else if (iVar10 == 0x7fff) {
 lVar20 = lVar14 + 0x7fff;
 if ((param_2 | uVar13) == 0) {
 uVar7 = (unsigned long)((uVar4 ^ uVar2) >> 0x1f);
 uVar6 = uVar6 | 2;
 lVar8 = lVar14 + 0x8000;
 param_2 = 0;
 if (uVar6 < 0xb) {
 uVar21 = 0;
 lVar12 = 2;
 goto LAB_0010239c;
 }
 lVar9 = 2;
 uVar13 = 0;
 }
 else {
 uVar7 = (unsigned long)((uVar4 ^ uVar2) >> 0x1f);
 uVar6 = uVar6 | 3;
 lVar8 = lVar14 + 0x8000;
 uVar4 = (uint)uVar5;
 if ((in_register_00005028 & 0x800000000000) == 0) {
 uVar4 = 1;
 }
 uVar5 = (unsigned long)uVar4;
 lVar12 = 3;
 if (uVar6 < 0xb) goto LAB_00102418;
 lVar9 = 3;
 }
 lVar8 = lVar14 + 0x8000;
 if (uVar6 != 0xf) {
 uVar18 = param_2;
 uVar21 = uVar13;
 uVar23 = uVar15;
 if (uVar6 != 0xb) goto LAB_00102358;
 goto LAB_0010245c;
 }
 if (((uVar19 >> 0x2f & 1) != 0) && (uVar13 >> 0x2f == 0)) {
 uVar11 = param_2;
 }
 }
 else {
 lVar20 = (uVar21 - 0x3fff) + lVar14;
 uVar7 = (unsigned long)((uVar4 ^ uVar2) >> 0x1f);
 uVar21 = param_2 >> 0x3d | uVar13 << 3 | 0x8000000000000;
 param_2 = param_2 << 3;
 lVar8 = lVar20 + 1;
 lVar12 = 0;
 if (10 < uVar6) goto LAB_00102350;
LAB_0010239c:
 uVar13 = uVar21;
 if (uVar6 < 3) {
 if (uVar6 - 1 < 2) {
 if (lVar12 == 2) goto LAB_001024ac;
 goto LAB_001023b8;
 }
LAB_001024bc:
 uVar27 = param_2 & 0xffffffff;
 uVar23 = uVar11 >> 0x20;
 uVar21 = uVar13 & 0xffffffff;
 uVar11 = uVar11 & 0xffffffff;
 param_2 = param_2 >> 0x20;
 uVar13 = uVar13 >> 0x20;
 uVar24 = uVar23 * uVar27;
 uVar26 = uVar19 >> 0x20;
 uVar18 = uVar23 * uVar21;
 uVar19 = uVar19 & 0xffffffff;
 uVar6 = uVar24 + param_2 * uVar11 + (uVar27 * uVar11 >> 0x20);
 uVar15 = uVar18 + uVar13 * uVar11 + (uVar11 * uVar21 >> 0x20);
 uVar25 = uVar26 * uVar27;
 uVar28 = uVar26 * uVar21;
 lVar14 = uVar23 * param_2 + 0x100000000;
 if (uVar24 < uVar6 || uVar24 - uVar6 == 0) {
 lVar14 = uVar23 * param_2;
 }
 uVar24 = (uVar11 * uVar21 & 0xffffffff) + (uVar15 << 0x20);
 uVar1 = uVar25 + param_2 * uVar19 + (uVar27 * uVar19 >> 0x20);
 uVar16 = uVar28 + uVar13 * uVar19 + (uVar19 * uVar21 >> 0x20);
 lVar22 = uVar23 * uVar13 + 0x100000000;
 if (uVar18 < uVar15 || uVar18 - uVar15 == 0) {
 lVar22 = uVar23 * uVar13;
 }
 uVar18 = uVar24 + (uVar6 >> 0x20) + lVar14;
 lVar14 = param_2 * uVar26 + 0x100000000;
 if (uVar25 < uVar1 || uVar25 - uVar1 == 0) {
 lVar14 = param_2 * uVar26;
 }
 uVar15 = lVar22 + (uVar15 >> 0x20);
 uVar21 = (uVar19 * uVar21 & 0xffffffff) + (uVar16 << 0x20);
 lVar22 = uVar13 * uVar26 + 0x100000000;
 if (uVar28 < uVar16 || uVar28 - uVar16 == 0) {
 lVar22 = uVar13 * uVar26;
 }
 uVar13 = uVar21 + uVar15;
 uVar25 = (unsigned long)(uVar18 < uVar24);
 uVar19 = (uVar27 * uVar19 & 0xffffffff) + (uVar1 << 0x20);
 uVar23 = uVar13 + uVar25;
 uVar16 = uVar16 >> 0x20;
 uVar24 = lVar14 + (uVar1 >> 0x20);
 if (CARRY8(uVar21,uVar15) != false || CARRY8(uVar13,uVar25) != false) {
 uVar16 = uVar16 + 1;
 }
 uVar13 = uVar18 + uVar19;
 uVar21 = (unsigned long)CARRY8(uVar18,uVar19);
 uVar19 = uVar23 + uVar24;
 uVar15 = uVar19 + uVar21;
 if (CARRY8(uVar23,uVar24) != false || CARRY8(uVar19,uVar21) != false) {
 lVar22 = lVar22 + 1;
 }
 uVar19 = (unsigned long)(((uVar27 * uVar11 & 0xffffffff) + (uVar6 << 0x20) | uVar13 * 0x2000) != 0);
 uVar13 = uVar13 >> 0x33;
 param_2 = uVar19 | uVar13 | uVar15 * 0x2000;
 uVar15 = uVar15 >> 0x33;
 uVar21 = uVar15 | (lVar22 + uVar16) * 0x2000;
 if ((lVar22 + uVar16 >> 0x27 & 1) != 0) {
 param_2 = uVar19 | uVar13 & 1 | param_2 >> 1 | uVar15 << 0x3f;
 uVar21 = uVar21 >> 1;
 lVar20 = lVar8;
 }
 goto LAB_0010261c;
 }
LAB_00102418:
 uVar6 = 1L << uVar6;
 uVar18 = uVar11;
 uVar21 = uVar19;
 uVar23 = uVar7;
 lVar9 = lVar22;
 if ((uVar6 & 0x530) == 0) {
 if ((uVar6 & 0x240) != 0) {
 uVar5 = 1;
 uVar11 = 0xffffffffffffffff;
 goto LAB_001023cc;
 }
 uVar18 = param_2;
 uVar21 = uVar13;
 uVar23 = uVar15;
 lVar9 = lVar12;
 if ((uVar6 & 0x88) == 0) goto LAB_001024bc;
 }
LAB_0010245c:
 lVar12 = lVar9;
 uVar15 = uVar23;
 param_2 = uVar18;
 if (lVar12 != 2) goto LAB_00102478;
LAB_001024ac:
 uVar11 = 0;
 }
LAB_001023cc:
 if ((int)uVar5 == 0) {
 return uVar11;
 }
LAB_00102884:
 __sfp_handle_exceptions(uVar5, 0);
 return uVar11;
}

// Function: __sfp_handle_exceptions @ 0x102a90
char [16] __sfp_handle_exceptions(unsigned long param_1,unsigned long long param_2)
{
 uint uVar1;
 char auVar2 [16];
 uVar1 = (uint)param_1;
 if ((param_1 & 1) != 0) {
 param_2 = fpsr;
 }
 if ((uVar1 >> 1 & 1) != 0) {
 param_2 = fpsr;
 }
 if ((uVar1 >> 2 & 1) != 0) {
 param_2 = fpsr;
 }
 if ((uVar1 >> 3 & 1) != 0) {
 param_2 = fpsr;
 }
 if ((uVar1 >> 4 & 1) != 0) {
 param_1 = fpsr;
 }
 auVar2._8_8_ = param_2;
 auVar2._0_8_ = param_1;
 return auVar2;
}

// Function: _fini @ 0x102b00
void _fini(void)
{
 return;
}

