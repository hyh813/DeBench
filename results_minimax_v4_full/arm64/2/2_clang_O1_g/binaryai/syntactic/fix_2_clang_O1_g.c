// Decompiled by BinaryAI
// SHA256: a2cffa8713793eb56e01059cbd21a447873d9261dc6741b1fb3bad1710d35be3

#include <stdint.h>
#include <stdbool.h>

// Type definitions
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char byte;

// Forward declarations
int main(void);
unsigned long long stack0x00000008;
unsigned int NEON_fmadd(unsigned int, unsigned int, unsigned int);
unsigned long __multf3(unsigned long, unsigned long);
unsigned long __addtf3(unsigned long, unsigned long);
unsigned long CARRY8(unsigned long, unsigned long);
char *__sfp_handle_exceptions(unsigned long, unsigned long long);
void __cxa_finalize(void *arg);
int binary_tree_sum(long);
unsigned long fpsr;

// Data variables
char DAT_00102ebf[] = "Test Data Types L1";
char DAT_00102ee0[] = "Test Array Types";
char DAT_00102efb[] = "Test Pointer Types";
char DAT_00102f16[] = "Test Composite Types";
char DAT_00102b70[] = "Test";
unsigned int DAT_00102920[] = { 0x32, 0x1e, 0x28, 0x1e };

// External declarations
extern unsigned long fpcr;
int call_weak_fn(int ctx);

// Global variables
char completed_0;
void *__dso_handle;

// Function: _init @ 0x100608
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_00100620 @ 0x100620
void FUN_00100620(void)
{
 // Null function pointer call - removed as it's invalid
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100640
void __libc_start_main(void *main_fn, void *stack, void *rtld_fini, void *fini, void *ctx, void *unused)
{
 // External libc function - implementation not needed
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100650
void __cxa_finalize(void *arg)
{
 (void)arg;
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100660
void __gmon_start__(void)
{
 // External function - implementation not needed
 return;
}

// Function: <EXTERNAL>::abort @ 0x100670
void abort(void)
{
 // External function - implementation not needed
}

// Function: <EXTERNAL>::puts @ 0x100680
int puts(char *__s)
{
 // Stub - actual implementation in libc
 return 0;
}

// Function: <EXTERNAL>::printf @ 0x100690
int printf(char *__format,...)
{
 // Stub - actual implementation in libc
 return 0;
}

// Function: _start @ 0x1006c0
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main((void *)main,(void *)param_9,&stack0x00000008,(void *)0,(void *)0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x1006f4
int call_weak_fn(int ctx)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x100710
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100740
void register_tm_clones(void)
{
 return;
}

// Function: FUN_0010077c @ 0x10077c
void FUN_0010077c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100780
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: process_char @ 0x1007d4
int process_char(int param_1)
{
 int iVar1;
 iVar1 = param_1 + 0x20;
 if (0x19 < (param_1 - 0x41U & 0xff)) {
 iVar1 = param_1;
 }
 return iVar1;
}

// Function: process_short @ 0x1007ec
int process_short(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: process_int @ 0x1007f4
uint process_int(int param_1)
{
 return param_1 << 1 | 1;
}

// Function: process_long @ 0x100804
long process_long(long param_1)
{
 return param_1 << 1;
}

// Function: process_ll @ 0x10080c
long process_ll(long param_1)
{
 return param_1 * param_1;
}

// Function: process_float @ 0x100814
unsigned int process_float(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = NEON_fmadd(param_1,0x3fc00000,0x3f000000);
 return uVar1;
}

// Function: process_double @ 0x100824
double process_double(double param_1)
{
 return param_1 * 0.5 + 0.1;
}

// Function: process_ld @ 0x10083c
void process_ld(unsigned long long param_1)
{
 unsigned long long uVar1;
 uVar1 = __multf3(param_1,param_1);
 __addtf3(uVar1,0);
 return;
}

// Function: process_bool @ 0x10085c
bool process_bool(uint param_1)
{
 return 0 < (int)param_1 && (param_1 & 1) == 0;
}

// Function: const_param @ 0x100874
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x100880
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x100890
int test_data_types_l1(void)
{
 int iVar1;
 puts(DAT_00102ebf);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000);
 printf("DT-L1-06 (process_float): %.2f\n",0x400c000000000000);
 printf("DT-L1-07 (process_double): %.2f\n",0x4000cccccccccccd);
 printf("DT-L1-08 (process_ld): %.2Lf\n",0);
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 iVar1 = printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return iVar1;
}

// Function: array_1d_stack @ 0x1009a8
int array_1d_stack(int *param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
 if (0 < (int)param_2) {
 iVar1 = 0;
 uVar2 = (unsigned long)param_2;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: array_string @ 0x1009d8
int array_string(char *param_1)
{
 char cVar1;
 int iVar2;
 iVar2 = -1;
 do {
 cVar1 = *param_1;
 iVar2 = iVar2 + 1;
 param_1 = param_1 + 1;
 } while (cVar1 != '\0');
 return iVar2;
}

// Function: array_2d_stack @ 0x1009f0
int array_2d_stack(long param_1)
{
 int *piVar1;
 int iVar2;
 long lVar3;
 lVar3 = 0;
 iVar2 = 0;
 do {
 piVar1 = (int *)(param_1 + lVar3);
 lVar3 = lVar3 + 0x2c;
 iVar2 = *piVar1 + iVar2;
 } while (lVar3 != 0x1b8);
 return iVar2;
}

// Function: array_3d @ 0x100a14
int array_3d(long param_1)
{
 int *piVar1;
 int iVar2;
 long lVar3;
 long lVar4;
 long lVar5;
 long lVar6;
 lVar3 = 0;
 iVar2 = 0;
 do {
 lVar4 = 0;
 lVar5 = param_1;
 do {
 lVar6 = 0;
 do {
 piVar1 = (int *)(lVar5 + lVar6);
 lVar6 = lVar6 + 4;
 iVar2 = *piVar1 + iVar2;
 } while (lVar6 != 0x14);
 lVar4 = lVar4 + 1;
 lVar5 = lVar5 + 0x14;
 } while (lVar4 != 5);
 lVar3 = lVar3 + 1;
 param_1 = param_1 + 100;
 } while (lVar3 != 5);
 return iVar2;
}

// Function: array_vla @ 0x100a64
int array_vla(uint param_1,int *param_2)
{
 int iVar1;
 unsigned long uVar2;
 if (0 < (int)param_1) {
 uVar2 = (unsigned long)param_1;
 iVar1 = 0;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *param_2 + iVar1;
 param_2 = param_2 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: array_pointer @ 0x100a94
int array_pointer(int *param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
 if (0 < (int)param_2) {
 iVar1 = 0;
 uVar2 = (unsigned long)param_2;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 10;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: pointer_array @ 0x100ac4
int pointer_array(int **param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 if (9 < (int)param_2) {
 param_2 = 10;
 }
 iVar1 = 0;
 if ((int)param_2 < 2) {
 param_2 = 1;
 }
 uVar2 = (unsigned long)param_2;
 do {
 if (*param_1 != (int *)0x0) {
 iVar1 = **param_1 + iVar1;
 }
 param_1 = param_1 + 1;
 uVar2 = uVar2 - 1;
 } while (uVar2 != 0);
 }
 return iVar1;
}

// Function: array_complex_index @ 0x100b14
unsigned int array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int uVar1;
 if (-1 < param_4) {
 uVar1 = 0xffffffff;
 if (((param_5 < param_3) && (param_4 < param_2)) && (-1 < param_5)) {
 uVar1 = *(unsigned int *)(param_1 + (long)(param_4 + param_5 * param_2) * 4);
 }
 return uVar1;
 }
 return 0xffffffff;
}

// Function: array_oob @ 0x100b48
int array_oob(int *param_1,int param_2)
{
 int iVar1;
 unsigned long uVar2;
 if (-1 < param_2) {
 iVar1 = 0;
 uVar2 = (unsigned long)(param_2 + 1);
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: test_array_types @ 0x100b74
int test_array_types(void)
{
 int iVar1;
 unsigned long uVar2;
 long lVar3;
 int *piVar4;
 char *puVar5;
 long lVar6;
 char *puVar7;
 long lVar8;
 uint local_510 [20];
 int *local_4c0 [4];
 unsigned long long uStack_4a0;
 unsigned long long local_498;
 unsigned long long uStack_490;
 unsigned long long local_488;
 unsigned long long uStack_480;
 unsigned long long local_478;
 unsigned int local_470;
 int local_46c [50];
 char local_3a4 [500];
 int local_1b0 [100];
 unsigned int local_8;
 int local_4;
 puts(DAT_00102ee0);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 lVar3 = 0;
 piVar4 = local_1b0;
 do {
 lVar6 = 0;
 do {
 iVar1 = (int)lVar3;
 if (lVar3 != lVar6) {
 iVar1 = 0;
 }
 piVar4[lVar6] = iVar1;
 lVar6 = lVar6 + 1;
 } while (lVar6 != 10);
 lVar3 = lVar3 + 1;
 piVar4 = piVar4 + 10;
 } while (lVar3 != 10);
 lVar3 = 0;
 uVar2 = 0;
 do {
 piVar4 = (int *)((long)local_1b0 + lVar3);
 lVar3 = lVar3 + 0x2c;
 uVar2 = (unsigned long)(uint)(*piVar4 + (int)uVar2);
 } while (lVar3 != 0x1b8);
 printf("ARR-L1-03 (array_2d_stack): %d\n",uVar2);
 lVar3 = 0;
 puVar5 = local_3a4;
 do {
 lVar6 = 0;
 puVar7 = puVar5;
 do {
 lVar8 = 0;
 do {
 *(unsigned int *)(puVar7 + lVar8) = 1;
 lVar8 = lVar8 + 4;
 } while (lVar8 != 0x14);
 lVar6 = lVar6 + 1;
 puVar7 = puVar7 + 0x14;
 } while (lVar6 != 5);
 lVar3 = lVar3 + 1;
 puVar5 = puVar5 + 100;
 } while (lVar3 != 5);
 lVar3 = 0;
 uVar2 = 0;
 puVar5 = local_3a4;
 do {
 lVar6 = 0;
 puVar7 = puVar5;
 do {
 lVar8 = 0;
 do {
 piVar4 = (int *)(puVar7 + lVar8);
 lVar8 = lVar8 + 4;
 uVar2 = (unsigned long)(uint)(*piVar4 + (int)uVar2);
 } while (lVar8 != 0x14);
 lVar6 = lVar6 + 1;
 puVar7 = puVar7 + 0x14;
 } while (lVar6 != 5);
 lVar3 = lVar3 + 1;
 puVar5 = puVar5 + 100;
 } while (lVar3 != 5);
 printf("ARR-L1-04 (array_3d): %d\n",uVar2);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 lVar3 = 0;
 do {
 local_46c[lVar3] = (int)lVar3;
 lVar3 = lVar3 + 10;
 } while (lVar3 != 0x32);
 lVar3 = 0;
 uVar2 = 0;
 do {
 piVar4 = (int *)((long)local_46c + lVar3);
 lVar3 = lVar3 + 0x28;
 uVar2 = (unsigned long)(uint)(*piVar4 + (int)uVar2);
 } while (lVar3 != 200);
 printf("ARR-L2-02 (array_pointer): %d\n",uVar2);
 lVar3 = 0;
 uVar2 = 0;
 local_8 = 0x14;
 local_4 = 10;
 local_470 = 0x1e;
 local_478 = 0;
 uStack_4a0 = 0;
 local_4c0[3] = (int *)0x0;
 local_4c0[0] = &local_4;
 local_4c0[1] = &local_8;
 local_4c0[2] = &local_470;
 uStack_490 = 0;
 local_498 = 0;
 uStack_480 = 0;
 local_488 = 0;
 do {
 if (*(int **)((long)local_4c0 + lVar3) != (int *)0x0) {
 uVar2 = (unsigned long)(uint)(**(int **)((long)local_4c0 + lVar3) + (int)uVar2);
 }
 lVar3 = lVar3 + 8;
 } while (lVar3 != 0x18);
 printf("ARR-L2-03 (pointer_array): %d\n",uVar2);
 lVar3 = 0;
 do {
 local_510[lVar3] = (uint)lVar3;
 lVar3 = lVar3 + 1;
 } while (lVar3 != 0x14);
 iVar1 = printf("ARR-L2-04 (array_complex_index): %d\n",(unsigned long)local_510[17]);
 return iVar1;
}

// Function: ptr_single @ 0x100db4
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x100dc0
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x100dd0
int ptr_triple(unsigned long long *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x100de4
int ptr_increment(int *param_1,int param_2)
{
 int iVar1;
 if (0 < param_2) {
 iVar1 = 0;
 do {
 param_2 = param_2 + -1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: ptr_offset @ 0x100e14
unsigned int ptr_offset(long param_1,int param_2)
{
 return *(unsigned int *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x100e1c
unsigned long ptr_diff(long param_1,long param_2)
{
 return (unsigned long)(param_1 - param_2) >> 2;
}

// Function: ptr_void @ 0x100e28
uint ptr_void(uint *param_1,int param_2)
{
 if (param_2 == 1) {
 return (uint)*(byte *)param_1;
 }
 if (param_2 == 0) {
 return *param_1;
 }
 return 0xffffffff;
}

// Function: ptr_const @ 0x100e4c
int ptr_const(int *param_1)
{
 return *param_1 << 1;
}

// Function: ptr_const_ptr @ 0x100e58
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x100e6c
void ptr_func_simple(void *param_1,unsigned int param_2)
{
 // Function pointer call - cast to function type before calling
 typedef void (*func_t)(unsigned int);
 ((func_t)param_1)(param_2);
 return;
}

// Function pointer type for ptr_func_complex
typedef void (*func_t)(unsigned long long, char **);

// Function: ptr_func_complex @ 0x100e88
void ptr_func_complex(void *param_1,unsigned long long param_2)
{
 char *local_20;
 char **local_20_ptr;
 unsigned long long uStack_18;
 uStack_18 = 0;
 local_20 = DAT_00102b70;
 local_20_ptr = &local_20;
 ((func_t)param_1)(param_2,local_20_ptr);
 return;
}

// Function: ptr_cast @ 0x100ec4
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x100ecc
long opaque_handle_create(int param_1)
{
 return (long)param_1;
}

// Function: opaque_handle_op @ 0x100ed4
int opaque_handle_op(int param_1)
{
 return param_1 << 1;
}

// Function: test_pointer_types @ 0x100edc
int test_pointer_types(void)
{
 int *piVar1;
 int iVar2;
 unsigned long uVar3;
 long lVar4;
 unsigned long long local_40;
 unsigned long long uStack_38;
 unsigned int local_30;
 puts(DAT_00102efb);
 printf("PTR-L2-01 (ptr_single): %d\n",0xf);
 printf("PTR-L2-02 (ptr_double): %d\n",0xf);
 printf("PTR-L2-03 (ptr_triple): %d\n",6);
 lVar4 = 0;
 uVar3 = 0;
 uStack_38 = 0x400000003;
 local_40 = 0x200000001;
 local_30 = 5;
 do {
 piVar1 = (int *)((long)&local_40 + lVar4);
 lVar4 = lVar4 + 4;
 uVar3 = (unsigned long)(uint)(*piVar1 + (int)uVar3);
 } while ((int)lVar4 != 0x14);
 printf("PTR-L2-04 (ptr_increment): %d\n",uVar3);
 printf("PTR-L2-05 (ptr_offset): %d\n",0x1e);
 printf("PTR-L2-06 (ptr_diff): %d\n",4);
 printf("PTR-L2-07 (ptr_void): %d\n",0x2a);
 printf("PTR-L2-07 (ptr_void): %d\n",0x41);
 printf("PTR-L2-08 (ptr_const): %d\n",0x14);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",10);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",1);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 iVar2 = printf("PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 return iVar2;
}

// Function: struct_simple @ 0x101020
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x101034
int struct_array(long param_1,uint param_2)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int *piVar5;
 unsigned long uVar6;
 if (0 < (int)param_2) {
 iVar4 = 0;
 uVar6 = (unsigned long)param_2;
 piVar5 = (int *)(param_1 + 4);
 do {
 piVar2 = piVar5 + -1;
 iVar3 = *piVar5;
 piVar1 = piVar5 + 1;
 piVar5 = piVar5 + 3;
 uVar6 = uVar6 - 1;
 iVar4 = *piVar2 + iVar4 + iVar3 + *piVar1;
 } while (uVar6 != 0);
 return iVar4;
 }
 return 0;
}

// Function: struct_nested @ 0x101078
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x101088
int struct_deep(long param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x101098
int struct_with_ptr(int *param_1)
{
 uint *puVar1;
 puVar1 = *(uint **)(param_1 + 2);
 if (puVar1 != (uint *)0x0) {
 puVar1 = (uint *)(unsigned long)*puVar1;
 }
 return (int)puVar1 + *param_1;
}

// Function: struct_bitfields @ 0x1010b0
short struct_bitfields(ushort *param_1)
{
 ushort uVar1;
 uVar1 = *param_1;
 return (uVar1 & 1) + (uVar1 >> 6) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}

// Function: union_type @ 0x1010d0
float union_type(float *param_1,int param_2)
{
 if (param_2 == 1) {
 return (float)(int)*param_1;
 }
 if (param_2 == 0) {
 return *param_1;
 }
 return (float)(uint)*(byte *)param_1;
}

// Function: union_array @ 0x1010f8
int union_array(int *param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
 if (0 < (int)param_2) {
 iVar1 = 0;
 uVar2 = (unsigned long)param_2;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: enum_type @ 0x101128
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x101134
unsigned int enum_switch(uint param_1)
{
 if (param_1 < 4) {
 return *(unsigned int *)(&DAT_00102920 + (long)(int)param_1 * 4);
 }
 return 0xffffff9d;
}

// Function: struct_func_ptr @ 0x101154
void struct_func_ptr(unsigned int *param_1)
{
 (**(void **)(param_1 + 2))(*param_1);
 return;
}

// Function: linked_list @ 0x101170
int linked_list(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar1 = *param_1;
 param_1 = *(int **)(param_1 + 2);
 iVar2 = iVar1 + iVar2;
 } while (param_1 != (int *)0x0);
 }
 return iVar2;
}

// Function: doubly_linked_list @ 0x101190
int doubly_linked_list(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar1 = *param_1;
 param_1 = *(int **)(param_1 + 2);
 iVar2 = iVar1 + iVar2;
 } while (param_1 != (int *)0x0);
 }
 return iVar2;
}

// Function: binary_tree_sum @ 0x1011b0
int binary_tree_sum(long param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int *param_1_ptr;
 if (param_1 != 0) {
 param_1_ptr = (int *)param_1;
 iVar1 = *param_1_ptr;
 iVar2 = binary_tree_sum((long)*(int **)(param_1_ptr + 2));
 iVar3 = binary_tree_sum((long)*(int **)(param_1_ptr + 4));
 iVar1 = iVar2 + iVar1 + iVar3;
 return iVar1;
 }
 return 0;
}

// Function: binary_tree @ 0x1011f0
void binary_tree(void)
{
 int local_b0 = 100;
 binary_tree_sum((long)&local_b0);
 return;
}

// Function: graph_traverse @ 0x101204
int graph_traverse(long param_1)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 if ((int)*(uint *)(param_1 + 0x50) < 1) {
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 for (piVar3 = *(int **)(param_1 + uVar2 * 8); piVar3 != (int *)0x0;
 piVar3 = *(int **)(piVar3 + 2)) {
 iVar1 = *piVar3 + iVar1;
 }
 uVar2 = uVar2 + 1;
 } while (uVar2 != *(uint *)(param_1 + 0x50));
 }
 return iVar1;
}

// Function: test_composite_types @ 0x101250
int test_composite_types(void)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 long lVar4;
 unsigned long long *puVar5;
 unsigned long long *local_120 [4];
 unsigned long long local_100;
 unsigned long long uStack_f8;
 unsigned long long local_f0;
 unsigned long long uStack_e8;
 unsigned long long uStack_e0;
 unsigned long long uStack_d8;
 unsigned long long local_d0;
 unsigned long long local_c0;
 unsigned long long uStack_b8;
 unsigned long long local_b0;
 unsigned long long uStack_a8;
 unsigned long long local_a0;
 int local_90 [2];
 unsigned int *local_88;
 unsigned long long uStack_80;
 unsigned int local_78 [2];
 unsigned long long local_70;
 int *piStack_68;
 int local_60 [2];
 unsigned int *local_58;
 unsigned int local_50 [2];
 unsigned int *local_48;
 unsigned int local_40 [2];
 unsigned long long local_38;
 puts(DAT_00102f16);
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
 piVar3 = local_60;
 uVar2 = 0;
 local_60[0] = 10;
 local_40[0] = 0x1e;
 local_50[0] = 0x14;
 local_58 = local_50;
 local_48 = local_40;
 local_38 = 0;
 do {
 iVar1 = *piVar3;
 piVar3 = *(int **)(piVar3 + 2);
 uVar2 = (unsigned long)(uint)(iVar1 + (int)uVar2);
 } while (piVar3 != (int *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",uVar2);
 piVar3 = local_90;
 uVar2 = 0;
 local_70 = 0;
 piStack_68 = piVar3;
 local_90[0] = 10;
 local_78[0] = 0x14;
 local_88 = local_78;
 uStack_80 = 0;
 do {
 iVar1 = *piVar3;
 piVar3 = *(int **)(piVar3 + 2);
 uVar2 = (unsigned long)(uint)(iVar1 + (int)uVar2);
 } while (piVar3 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar2);
 uStack_a8 = 0;
 local_b0 = 100;
 local_a0 = 0;
 uVar2 = binary_tree_sum((long)&local_b0);
 printf("CMP-L2-14 (binary_tree): %d\n",uVar2 & 0xffffffff);
 lVar4 = 0;
 uVar2 = 0;
 local_120[1] = (unsigned long long *)0x0;
 local_120[3] = (unsigned long long *)0x0;
 local_120[2] = (unsigned long long *)0x0;
 local_120[0] = &local_c0;
 uStack_b8 = 0;
 local_c0 = 1;
 uStack_e8 = 0;
 local_f0 = 0;
 uStack_d8 = 0;
 uStack_e0 = 0;
 local_d0 = 2;
 uStack_f8 = 0;
 local_100 = 0;
 do {
 for (puVar5 = local_120[lVar4]; puVar5 != (unsigned long long *)0x0; puVar5 = (unsigned long long *)puVar5[1]) {
 uVar2 = (unsigned long)(uint)(*(int *)puVar5 + (int)uVar2);
 }
 lVar4 = lVar4 + 1;
 } while (lVar4 != 2);
 iVar1 = printf("CMP-L2-15 (graph_traverse): %d\n",uVar2);
 return iVar1;
}

// Function: main @ 0x101470
int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

// Function: __addtf3 @ 0x1014a0
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
 if (uVar15 != 0x7fff) goto LAB_00101d90;
 if ((uVar12 | uVar20) == 0) {
 return 0;
 }
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar6 = (uint)uVar8;
 if (uVar15 != 0x7fff) goto LAB_00101f38;
 if ((uVar12 | uVar20) == 0) goto LAB_00101fd0;
 }
LAB_00101ffc:
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar11 != 0) {
LAB_00101f40:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101984;
 }
LAB_00101d90:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 else {
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) != 0) goto LAB_00101ffc;
 if (uVar11 == 0) {
 return 0;
 }
 }
 else {
 if (uVar11 == 0) goto LAB_00101d90;
LAB_00101f38:
 if ((uVar12 | uVar20) != 0) goto LAB_00101f40;
 }
LAB_00101fd0:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 }
 goto LAB_00101984;
 }
 if (uVar11 == 0) {
 uVar19 = uVar20;
 uVar9 = uVar12;
 if ((uVar12 | uVar20) == 0) {
 param_1 = 0;
 goto LAB_00101638;
 }
 goto LAB_00101d08;
 }
 if ((uVar12 | uVar20) == 0) goto LAB_00101d08;
 uVar19 = uVar18 + uVar20;
 uVar9 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 if ((uVar9 >> 0x33 & 1) != 0) {
 uVar9 = uVar9 & 0xfff7ffffffffffff;
 uVar12 = 0;
 bVar3 = false;
 uVar11 = 1;
 goto LAB_001015ec;
 }
LAB_001015d8:
 lVar7 = lVar14;
 uVar18 = uVar19 | uVar9;
 goto joined_r0x0010172c;
 }
 if (uVar11 != 0x7fff) {
 uVar19 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 bVar3 = false;
 uVar12 = uVar18 + uVar20 >> 1 & 7;
 uVar9 = uVar19 >> 1;
 uVar19 = uVar18 + uVar20 >> 1 | uVar19 << 0x3f;
 goto LAB_001015ec;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) goto LAB_00101d34;
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) goto LAB_00101fe0;
 if (uVar19 != 0x800000) goto LAB_00101ca4;
 if (lVar14 == 0) goto LAB_00101f7c;
LAB_00101e48:
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
 goto LAB_001017c0;
 }
 goto LAB_00101a74;
 }
 goto LAB_0010171c;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_001018d8;
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
 goto LAB_00101984;
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
LAB_001018d8:
 uVar15 = uVar17;
 uVar19 = uVar18;
 uVar9 = uVar12;
 lVar7 = lVar14;
 if ((uVar12 >> 0x33 & 1) == 0) goto LAB_0010171c;
 uVar11 = uVar17 + 1;
 if (uVar11 != 0x7fff) {
 bVar3 = false;
 uVar19 = uVar18 & 1 | uVar18 >> 1 | uVar12 << 0x3f;
 uVar9 = (uVar12 & 0xfff7ffffffffffff) >> 1;
 uVar12 = uVar18 & 1 | uVar18 >> 1 & 7;
 goto LAB_001015ec;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) {
LAB_00101d34:
 uVar8 = 0x14;
 goto LAB_0010182c;
 }
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) {
LAB_00101fe0:
 uVar8 = 0x14;
 goto LAB_0010182c;
 }
 if (uVar19 == 0x800000) {
 if (lVar14 != 0) goto LAB_00101e48;
LAB_00101f7c:
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto LAB_0010161c;
 }
LAB_00101ca4:
 uVar6 = 0x14;
 if ((uVar10 & 0xc00000) == 0x400000) {
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 bVar3 = false;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto joined_r0x00101cc4;
 }
LAB_001017e8:
 uVar10 = uVar10 & 0xc00000;
 if (uVar10 != 0) {
 if (uVar10 == 0x400000) {
 if (lVar14 != 0) goto LAB_00101804;
 }
 else if (((uint)(uVar10 == 0x800000) & (uint)lVar14) == 0) {
LAB_00101804:
 param_1 = 0xffffffffffffffff;
 uVar8 = (unsigned long)(uVar6 | 0x14);
 goto LAB_00101638;
 }
 }
 uVar8 = (unsigned long)(uVar6 | 0x14);
 }
LAB_0010182c:
 param_1 = 0;
 goto LAB_00101840;
 }
 if (uVar15 == 0) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = (unsigned long)(uVar6 - 1);
 if (uVar6 - 1 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_001018d8;
 }
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 goto LAB_001017b4;
 }
 goto LAB_001016b0;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 != 0x7fff) goto LAB_0010171c;
 if ((uVar21 | uVar18) == 0) goto LAB_00101a74;
 uVar8 = (unsigned long)((uint)(uVar1 >> 0x32) ^ 1);
 uVar20 = uVar18;
 uVar12 = uVar21;
LAB_001017c0:
 uVar11 = 0x7fff;
 goto LAB_001017c8;
 }
 uVar12 = uVar12 | 0x8000000000000;
 if (uVar17 != 0x7fff) {
LAB_001016b0:
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
 goto LAB_001018d8;
 }
LAB_00101964:
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar19 = in_register_00005008 & 0xffffffffffff;
LAB_00101984:
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
 goto LAB_001017c0;
 }
 goto LAB_00101a74;
 }
 goto LAB_0010171c;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 goto LAB_0010156c;
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
 goto LAB_00101984;
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
 goto LAB_0010156c;
 }
 if ((uVar17 + 1 & 0x7ffe) != 0) {
 uVar19 = uVar18 + param_2 * -8;
 uVar13 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar13 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar13) == 0) {
 param_1 = 0;
 goto LAB_00101638;
 }
 }
 else {
 uVar19 = uVar20 + param_1 * -8;
 uVar13 = uVar12 - (uVar21 + (uVar20 < uVar18));
 lVar14 = lVar7;
 }
 goto LAB_00101574;
 }
 uVar16 = uVar21 | uVar18;
 uVar11 = uVar12 | uVar20;
 if (uVar17 != 0) {
 if (uVar17 == 0x7fff) {
 if (uVar16 == 0) {
 if (uVar15 != 0x7fff) goto LAB_00101c48;
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 if (uVar15 != 0x7fff) goto LAB_00101c18;
 }
LAB_00101e90:
 if (uVar11 != 0) {
 uVar6 = (uint)uVar8;
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar16 == 0) {
LAB_00101f0c:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 goto LAB_00101984;
 }
LAB_00101ea8:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101984;
 }
 if (uVar16 != 0) goto LAB_00101c18;
 }
 else {
 if (uVar15 == 0x7fff) goto LAB_00101e90;
 if (uVar16 != 0) {
LAB_00101c18:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if (uVar11 == 0) goto LAB_00101984;
 goto LAB_00101ea8;
 }
LAB_00101c48:
 if (uVar11 != 0) goto LAB_00101f0c;
 }
 param_1 = 0xffffffffffffffff;
 uVar8 = 1;
 goto LAB_00101638;
 }
 if (uVar16 != 0) {
 if (uVar11 == 0) goto LAB_00101d08;
 uVar19 = uVar18 + param_2 * -8;
 uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar9 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar9) != 0) {
 uVar12 = 0;
 bVar3 = true;
 uVar11 = uVar17;
 goto LAB_001015ec;
 }
 goto LAB_00101de0;
 }
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 uVar18 = uVar19 | uVar9;
 goto joined_r0x0010172c;
 }
 uVar19 = uVar20;
 uVar9 = uVar12;
 lVar14 = lVar7;
 if (uVar11 == 0) {
LAB_00101de0:
 param_1 = 0;
 goto LAB_00101638;
 }
LAB_00101d08:
 uVar18 = 0;
 uVar11 = 0;
LAB_00101d10:
 uVar8 = 0;
 if (((uint)uVar10 >> 0xb & 1) != 0) {
 uVar8 = 8;
 }
LAB_00101618:
 uVar20 = uVar19;
 uVar12 = uVar9;
 if (uVar18 == 0) {
LAB_001017c8:
 param_1 = uVar20 >> 3 | uVar12 << 0x3d;
 uVar19 = uVar12 >> 3;
 if (uVar11 == 0x7fff) goto LAB_00101984;
 }
 else {
LAB_0010161c:
 uVar6 = (uint)uVar8;
 if (uVar11 == 0x7ffe) goto LAB_001017e8;
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
 goto LAB_0010156c;
 }
 goto LAB_00101518;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) != 0) {
LAB_001017b4:
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar20 = uVar18;
 uVar12 = uVar21;
 goto LAB_001017c0;
 }
LAB_00101a74:
 uVar8 = 0;
 uVar19 = 0;
 param_1 = 0;
 goto LAB_00101984;
 }
 }
 else {
 uVar12 = uVar12 | 0x8000000000000;
LAB_00101518:
 if (uVar17 == 0x7fff) goto LAB_00101964;
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
LAB_0010156c:
 uVar13 = uVar9 & 0x7ffffffffffff;
 uVar17 = uVar15;
 lVar14 = lVar7;
 if ((uVar9 >> 0x33 & 1) != 0) {
LAB_00101574:
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
 if ((int)uVar6 < 0x40) goto LAB_00101580;
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
LAB_00101580:
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
 goto LAB_001015d8;
 }
 uVar19 = uVar12 | uVar18 << ((unsigned long)(0x80 - uVar6) & 0x3f);
 if (uVar6 == 0x40) {
 uVar19 = uVar12;
 }
 uVar9 = 0;
 uVar19 = (unsigned long)(uVar19 != 0) | uVar18 >> ((unsigned long)(iVar5 - 0x3f) & 0x3f);
 uVar18 = uVar19;
 goto joined_r0x0010172c;
 }
 uVar15 = uVar17 - (long)(int)uVar6;
 uVar19 = uVar12;
 uVar9 = uVar18 & 0xfff7ffffffffffff;
 }
 }
LAB_0010171c:
 uVar12 = uVar19 & 7;
 bVar3 = false;
 uVar11 = uVar15;
 lVar14 = lVar7;
 uVar18 = uVar19 | uVar9;
 if (uVar15 != 0) {
LAB_001015ec:
 if (uVar12 == 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0;
 if (bVar3) goto LAB_00101d10;
 }
 else {
 uVar12 = uVar10 & 0xc00000;
 if (uVar12 == 0x400000) {
 uVar8 = 0x10;
joined_r0x00101cc4:
 if (lVar14 == 0) {
LAB_00101914:
 bVar4 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar4) {
 uVar9 = uVar9 + 1;
 }
 }
 }
 else if (uVar12 == 0x800000) {
 uVar8 = 0x10;
 if (lVar14 != 0) goto LAB_00101914;
 }
 else {
 if (uVar12 != 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0x10;
 if (bVar3) {
 uVar8 = 0x18;
 }
 goto LAB_00101618;
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
 goto LAB_00101618;
 }
joined_r0x0010172c:
 if (uVar18 != 0) {
 uVar12 = uVar19 & 7;
 bVar3 = true;
 uVar11 = 0;
 lVar14 = lVar7;
 goto LAB_001015ec;
 }
 param_1 = 0;
 uVar8 = 0;
 }
 }
LAB_00101638:
 if ((int)uVar8 == 0) {
 return param_1;
 }
LAB_00101840:
 __sfp_handle_exceptions(uVar8, 0);
 return param_1;
}

// Function: __multf3 @ 0x102040
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
 if (lVar22 < 0x3d) goto LAB_00102498;
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
LAB_00102498:
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
 if (lVar8 < 0x3d) goto LAB_0010243c;
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
LAB_0010243c:
 uVar7 = (unsigned long)((int)lVar8 + 3);
 uVar21 = param_2 >> ((unsigned long)(0x3d - (int)lVar8) & 0x3f) | uVar13 << (uVar7 & 0x3f);
 param_2 = param_2 << (uVar7 & 0x3f);
 }
 lVar20 = (lVar14 - lVar12) + -0x3fef;
 lVar8 = (lVar14 - lVar12) + -0x3fee;
 lVar12 = 0;
 }
 uVar7 = (unsigned long)((uVar4 ^ uVar2) >> 0x1f);
 if (uVar6 < 0xb) goto LAB_0010214c;
LAB_00102100:
 if (uVar6 != 0xb) {
LAB_00102108:
 uVar18 = uVar11;
 uVar21 = uVar19;
 uVar23 = in_register_00005008 >> 0x3f;
 lVar9 = lVar22;
 goto LAB_0010220c;
 }
LAB_00102228:
 uVar11 = param_2;
 uVar7 = uVar15;
 if (lVar12 != 3) {
LAB_00102168:
 lVar20 = lVar8;
 if (lVar12 == 1) {
 uVar11 = 0;
 }
 else {
LAB_001023cc:
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
 goto LAB_00102634;
 }
 iVar10 = (int)uVar19;
 if ((long)uVar19 < 0x40) {
 uVar11 = (unsigned long)(param_2 << ((unsigned long)(0x40 - iVar10) & 0x3f) != 0);
 uVar6 = uVar21 << ((unsigned long)(0x40 - iVar10) & 0x3f) | param_2 >> (uVar19 & 0x3f);
 uVar21 = uVar21 >> (uVar19 & 0x3f);
 uVar19 = uVar6 | uVar11;
 if ((uVar6 & 7 | uVar11) != 0) goto LAB_001025b4;
 if ((uVar21 >> 0x33 & 1) == 0) goto LAB_001026fc;
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
LAB_001026fc:
 uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
 if (((uint)uVar17 >> 0xb & 1) != 0) {
 uVar5 = (unsigned long)(uVar4 | 8);
 goto LAB_00102634;
 }
 goto LAB_0010217c;
 }
 uVar21 = 0;
LAB_001025b4:
 uVar17 = uVar17 & 0xc00000;
 if (uVar17 == 0x400000) {
 if (uVar7 == 0) {
LAB_0010275c:
 bVar3 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar17 == 0x800000) {
 if (uVar7 != 0) goto LAB_0010275c;
 }
 else if (((uVar17 == 0) && ((uVar19 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
 uVar21 = uVar21 + 1;
 }
 if ((uVar21 >> 0x33 & 1) == 0) {
 uVar5 = (unsigned long)(uVar4 | 0x18);
 uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
 goto LAB_00102634;
 }
 }
 uVar5 = (unsigned long)(uVar4 | 0x18);
 uVar11 = 0;
 goto LAB_00102634;
 }
 if ((param_2 & 7) != 0) {
 uVar19 = uVar17 & 0xc00000;
 uVar5 = (unsigned long)(uVar4 | 0x10);
 if (uVar19 == 0x400000) {
 if (uVar7 == 0) {
LAB_0010274c:
 bVar3 = 0xfffffffffffffff7 < param_2;
 param_2 = param_2 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar19 == 0x800000) {
 if (uVar7 != 0) goto LAB_0010274c;
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
 goto LAB_00102634;
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
 goto LAB_0010214c;
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
 if (uVar6 < 0xb) goto LAB_001021c8;
 lVar9 = 3;
 }
 lVar8 = lVar14 + 0x8000;
 if (uVar6 != 0xf) {
 uVar18 = param_2;
 uVar21 = uVar13;
 uVar23 = uVar15;
 if (uVar6 != 0xb) goto LAB_00102108;
 goto LAB_0010220c;
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
 if (10 < uVar6) goto LAB_00102100;
LAB_0010214c:
 uVar13 = uVar21;
 if (uVar6 < 3) {
 if (uVar6 - 1 < 2) {
 if (lVar12 == 2) goto LAB_0010225c;
 goto LAB_00102168;
 }
LAB_0010226c:
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
 goto LAB_001023cc;
 }
LAB_001021c8:
 uVar6 = 1L << uVar6;
 uVar18 = uVar11;
 uVar21 = uVar19;
 uVar23 = uVar7;
 lVar9 = lVar22;
 if ((uVar6 & 0x530) == 0) {
 if ((uVar6 & 0x240) != 0) {
 uVar5 = 1;
 uVar11 = 0xffffffffffffffff;
 goto LAB_0010217c;
 }
 uVar18 = param_2;
 uVar21 = uVar13;
 uVar23 = uVar15;
 lVar9 = lVar12;
 if ((uVar6 & 0x88) == 0) goto LAB_0010226c;
 }
LAB_0010220c:
 lVar12 = lVar9;
 uVar15 = uVar23;
 param_2 = uVar18;
 if (lVar12 != 2) goto LAB_00102228;
LAB_0010225c:
 uVar11 = 0;
 }
LAB_0010217c:
 if ((int)uVar5 == 0) {
 return uVar11;
 }
LAB_00102634:
 __sfp_handle_exceptions(uVar5, 0);
 return uVar11;
}

// Function: __sfp_handle_exceptions @ 0x102840
char *__sfp_handle_exceptions(unsigned long param_1, unsigned long long param_2)
{
 uint uVar1;
 union {
   unsigned long long _8_8_;
   unsigned long _0_8_;
 } auVar2;
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
 return (char *)&auVar2;
}

// Function: _fini @ 0x1028b0
void _fini(void)
{
 return;
}

