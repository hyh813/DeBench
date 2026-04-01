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
typedef long long longlong;
typedef _Bool bool;
#define true 1
#define false 0
typedef unsigned char byte;
typedef unsigned short ushort;

/* Global variables */
static char completed_0 = 0;
static void *__dso_handle = 0;
static int stack0x00000004 = 0;
static char DAT_00012453 = 0;
static char DAT_00012474 = 0;
static char DAT_0001248f = 0;
static char DAT_000124aa = 0;
static char DAT_00012104 = 0;
static int UNK_000124f8 = 0;

/* External function declarations */
int main(void);
void __libc_start_main(void *main, int argc, void *ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
void __cxa_finalize(void *d);
int printf(char *__format, ...);
int puts(char *__s);
void *memset(void *__s, int __c, size_t __n);
void abort(void);
int call_weak_fn(void) { return 0; }
ulonglong __muldf3(unsigned int param_1,uint param_2,uint param_3,uint param_4);
ulonglong FUN_00011594(uint param_1,uint param_2,uint param_3,uint param_4);
uint __mulsf3(uint param_1,uint param_2,unsigned int param_3,uint param_4);
ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4);
uint __addsf3(uint param_1,uint param_2,unsigned int param_3,uint param_4);
uint __fixsfsi(uint param_1);

ulonglong __floatsidf(uint param_1);
ulonglong __aeabi_ui2d(uint param_1);
void __aeabi_frsub(uint param_1);
uint __aeabi_fsub(uint param_1,uint param_2,unsigned int param_3,uint param_4);
uint __aeabi_ui2f(uint param_1);
uint __floatsisf(uint param_1);
uint __floatundisf(uint param_1,uint param_2);
uint __aeabi_l2f(uint param_1,uint param_2);
void __aeabi_drsub(unsigned int param_1,uint param_2);

/* Helper macros */
#define CONCAT44(hi, lo) (((ulonglong)(hi) << 32) | (lo))
#define SBORROW4(a, b) ((int)((a) - (b)) < 0 && (int)(a) >= 0)
#define SCARRY4(a, b) ((int)((a) + (b)) < 0 && (int)(a) > 0)
#define CARRY4(a, b) ((a) + (b) < (a))
#define LZCOUNT(x) __builtin_clz(x)
#define SUB41(x, y) ((x) - (y))

// Decompiled by BinaryAI
// SHA256: 4785ae524e3921f7bb9699e01124c1fb509a2d0fd605e00257c16b229827ba00





// Function: <EXTERNAL>::__cxa_finalize @ 0x10418
void __cxa_finalize(void *d)
{
 __cxa_finalize(d);
 return;
}

// Function: <EXTERNAL>::printf @ 0x10424
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10430
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x10448
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x10454
void abort(void)
{
 abort();
}



// Function: deregister_tm_clones @ 0x104c8
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1050c
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1055c
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: process_char @ 0x105c8
char process_char(char param_1)
{
 if ((byte)(param_1 + 0xbfU) < 0x1a) {
 param_1 = param_1 + ' ';
 }
 return param_1;
}

// Function: process_short @ 0x105e0
int process_short(int param_1,int param_2)
{
 return (param_2 + param_1) * 0x10000 >> 0x10;
}

// Function: process_int @ 0x105f0
uint process_int(int param_1)
{
 return param_1 << 1 | 1;
}

// Function: process_long @ 0x105fc
int process_long(int param_1)
{
 return param_1 << 1;
}

// Function: process_ll @ 0x10604
unsigned long long process_ll(uint param_1,int param_2)
{
 return CONCAT44(param_1 * param_2 +
 param_1 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20),
 (int)((ulonglong)param_1 * (ulonglong)param_1));
}

// Function: process_float @ 0x1061c
void process_float(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = __mulsf3(param_1,0x3fc00000,0,0);
 __addsf3(uVar1,0x3f000000,0,0);
 return;
}

// Function: process_double @ 0x10638
void process_double(unsigned int param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 uVar1 = __muldf3(param_1,param_2,0,0x3fe00000);
 __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0x9999999a,0x3fb99999);
 return;
}

// Function: process_ld @ 0x10668
void process_ld(unsigned int param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 uVar1 = __muldf3(param_1,param_2,param_1,param_2);
 __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,0x3ff00000);
 return;
}

// Function: process_bool @ 0x10690
bool process_bool(uint param_1)
{
 return 0 < (int)param_1 && (param_1 & 1) == 0;
}

// Function: const_param @ 0x106b0
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x106bc
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x106cc
void test_data_types_l1(void)
{
 puts(&DAT_00012453);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n");
 printf("DT-L1-06 (process_float): %.2f\n");
 printf("DT-L1-07 (process_double): %.2f\n");
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x10828
int array_1d_stack(int *param_1,int param_2)
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

// Function: array_string @ 0x10854
int array_string(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 do {
 iVar2 = iVar1;
 iVar1 = iVar2 + 1;
 } while (*(char *)(param_1 + iVar2) != '\0');
 return iVar2;
}

// Function: array_2d_stack @ 0x10870
int array_2d_stack(int param_1)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 iVar3 = 0;
 iVar2 = 0;
 do {
 piVar1 = (int *)(param_1 + iVar3);
 iVar3 = iVar3 + 0x2c;
 iVar2 = *piVar1 + iVar2;
 } while (iVar3 != 0x1b8);
 return iVar2;
}

// Function: array_3d @ 0x10894
int array_3d(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 iVar5 = 0;
 iVar2 = 0;
 do {
 iVar6 = 0;
 iVar4 = param_1;
 do {
 iVar3 = 0;
 do {
 iVar1 = iVar3 * -4;
 iVar3 = iVar3 + -1;
 iVar2 = *(int *)(iVar4 + iVar1) + iVar2;
 } while (iVar3 != -5);
 iVar6 = iVar6 + 1;
 iVar4 = iVar4 + 0x14;
 } while (iVar6 != 5);
 iVar5 = iVar5 + 1;
 param_1 = param_1 + 100;
 } while (iVar5 != 5);
 return iVar2;
}

// Function: array_vla @ 0x108ec
int array_vla(int param_1,int *param_2)
{
 int iVar1;
 if (0 < param_1) {
 iVar1 = 0;
 do {
 param_1 = param_1 + -1;
 iVar1 = *param_2 + iVar1;
 param_2 = param_2 + 1;
 } while (param_1 != 0);
 return iVar1;
 }
 return 0;
}

// Function: array_pointer @ 0x10918
int array_pointer(int *param_1,int param_2)
{
 int iVar1;
 if (0 < param_2) {
 iVar1 = 0;
 do {
 param_2 = param_2 + -1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 10;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: pointer_array @ 0x10944
int pointer_array(int **param_1,uint param_2)
{
 int iVar1;
 int *piVar2;
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 if (9 < param_2) {
 param_2 = 10;
 }
 do {
 piVar2 = *param_1;
 param_1 = param_1 + 1;
 if (piVar2 != (int *)0x0) {
 iVar1 = *piVar2 + iVar1;
 }
 param_2 = param_2 - 1;
 } while (param_2 != 0);
 }
 return iVar1;
}

// Function: array_complex_index @ 0x10984
unsigned int array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 int iVar1;
 unsigned int uVar2;
 bool bVar3;
 uVar2 = 0xffffffff;
 if (-1 < param_4) {
 bVar3 = SBORROW4(param_5,param_3);
 iVar1 = param_5 - param_3;
 if (param_5 < param_3) {
 bVar3 = SBORROW4(param_4,param_2);
 iVar1 = param_4 - param_2;
 }
 if ((iVar1 < 0 != bVar3) && (-1 < param_5)) {
 uVar2 = *(unsigned int *)(param_1 + (param_5 * param_2 + param_4) * 4);
 }
 }
 return uVar2;
}

// Function: array_oob @ 0x109bc
int array_oob(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 < 0) {
 iVar1 = 0;
 }
 else {
 param_2 = param_2 + 1;
 iVar1 = 0;
 do {
 param_2 = param_2 + -1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 }
 return iVar1;
}

// Function: test_array_types @ 0x109ec
void test_array_types(void)
{
 int iVar1;
 int iVar2;
 char *puVar3;
 int iVar4;
 char *puVar5;
 int iVar6;
 int iVar7;
 int *piVar8;
 int local_4e8 [20];
 int *local_498;
 int *local_494 [2];
 char auStack_48c [28];
 unsigned int local_470;
 int local_46c;
 int local_468;
 int local_464 [50];
 char local_39c [500];
 int local_1a8 [100];
 puts(&DAT_00012474);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 iVar2 = 0;
 piVar8 = local_1a8;
 do {
 iVar4 = 0;
 do {
 iVar6 = 0;
 if (iVar2 == iVar4) {
 iVar6 = iVar2;
 }
 piVar8[iVar4] = iVar6;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 10);
 iVar2 = iVar2 + 1;
 piVar8 = piVar8 + 10;
 } while (iVar2 != 10);
 iVar2 = 0;
 iVar4 = 0;
 do {
 piVar8 = (int *)((int)local_1a8 + iVar2);
 iVar2 = iVar2 + 0x2c;
 iVar4 = *piVar8 + iVar4;
 } while (iVar2 != 0x1b8);
 printf("ARR-L1-03 (array_2d_stack): %d\n",iVar4);
 iVar2 = 0;
 puVar3 = local_39c;
 do {
 iVar4 = 0;
 puVar5 = puVar3;
 do {
 iVar6 = 0;
 do {
 *(unsigned int *)(puVar5 + iVar6 * -4) = 1;
 iVar6 = iVar6 + -1;
 } while (iVar6 != -5);
 iVar4 = iVar4 + 1;
 puVar5 = puVar5 + 0x14;
 } while (iVar4 != 5);
 iVar2 = iVar2 + 1;
 puVar3 = puVar3 + 100;
 } while (iVar2 != 5);
 iVar4 = 0;
 puVar3 = local_39c;
 iVar2 = 0;
 do {
 iVar6 = 0;
 puVar5 = puVar3;
 do {
 iVar7 = 0;
 do {
 iVar1 = iVar7 * -4;
 iVar7 = iVar7 + -1;
 iVar2 = *(int *)(puVar5 + iVar1) + iVar2;
 } while (iVar7 != -5);
 iVar6 = iVar6 + 1;
 puVar5 = puVar5 + 0x14;
 } while (iVar6 != 5);
 iVar4 = iVar4 + 1;
 puVar3 = puVar3 + 100;
 } while (iVar4 != 5);
 printf("ARR-L1-04 (array_3d): %d\n",iVar2);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 iVar2 = 0;
 do {
 local_464[iVar2] = iVar2;
 iVar2 = iVar2 + 10;
 } while (iVar2 != 0x32);
 iVar4 = 0;
 iVar2 = 0;
 do {
 piVar8 = (int *)((int)local_464 + iVar4);
 iVar4 = iVar4 + 0x28;
 iVar2 = *piVar8 + iVar2;
 } while (iVar4 != 200);
 printf("ARR-L2-02 (array_pointer): %d\n",iVar2);
 piVar8 = &local_468;
 iVar4 = 0;
 local_468 = 10;
 local_46c = 0x14;
 local_470 = 0x1e;
 local_494[1] = &local_470;
 local_494[0] = &local_46c;
 local_498 = piVar8;
 memset(auStack_48c,0,0x1c);
 iVar2 = 0;
 while( true ) {
 if (piVar8 != (int *)0x0) {
 iVar2 = *piVar8 + iVar2;
 }
 if (iVar4 == 2) break;
 piVar8 = local_494[iVar4];
 iVar4 = iVar4 + 1;
 }
 printf("ARR-L2-03 (pointer_array): %d\n",iVar2);
 iVar2 = 0;
 do {
 local_4e8[iVar2] = iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x14);
 printf("ARR-L2-04 (array_complex_index): %d\n",local_4e8[17]);
 return;
}

// Function: ptr_single @ 0x10c48
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x10c54
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x10c64
int ptr_triple(unsigned int *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x10c78
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

// Function: ptr_offset @ 0x10ca4
unsigned int ptr_offset(int param_1,int param_2)
{
 return *(unsigned int *)(param_1 + param_2 * 4);
}

// Function: ptr_diff @ 0x10cac
int ptr_diff(int param_1,int param_2)
{
 return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x10cb8
uint ptr_void(uint *param_1,int param_2)
{
 if (param_2 == 1) {
 return (uint)*(byte *)param_1;
 }
 if (param_2 != 0) {
 return 0xffffffff;
 }
 return *param_1;
}

// Function: ptr_const @ 0x10ce0
int ptr_const(int *param_1)
{
 return *param_1 << 1;
}

// Function: ptr_const_ptr @ 0x10cec
int ptr_const_ptr(int *param_1)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = iVar1 + 5;
 return iVar1 + 5;
}

// Function: ptr_func_simple @ 0x10d00
void ptr_func_simple(void *UNRECOVERED_JUMPTABLE,unsigned int param_2)
{
 ((void (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: ptr_func_complex @ 0x10d0c
void ptr_func_complex(void *param_1,unsigned int param_2)
{
 char *local_10;
 unsigned int local_c;
 local_10 = &DAT_00012104;
 local_c = 0;
 ((void (*)(unsigned int, char **))param_1)(param_2,&local_10);
 return;
}

// Function: ptr_cast @ 0x10d5c
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x10d64
void opaque_handle_create(void)
{
 return;
}

// Function: opaque_handle_op @ 0x10d68
int opaque_handle_op(int param_1)
{
 return param_1 << 1;
}

// Function: test_pointer_types @ 0x10d70
void test_pointer_types(void)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 int local_20 [4];
 puts(&DAT_0001248f);
 printf("PTR-L2-01 (ptr_single): %d\n",0xf);
 printf("PTR-L2-02 (ptr_double): %d\n",0xf);
 printf("PTR-L2-03 (ptr_triple): %d\n",6);
 local_20[0] = 2;
 local_20[1] = 3;
 local_20[2] = 4;
 local_20[3] = 5;
 iVar2 = 1;
 iVar3 = 0;
 do {
 piVar1 = local_20 + iVar3;
 iVar3 = iVar3 + 1;
 iVar2 = *piVar1 + iVar2;
 } while (iVar3 != 4);
 printf("PTR-L2-04 (ptr_increment): %d\n",iVar2);
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

// Function: struct_simple @ 0x10ee0
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x10ef4
int struct_array(int param_1,int param_2)
{
 int iVar1;
 int *piVar2;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 piVar2 = (int *)(param_1 + 4);
 do {
 param_2 = param_2 + -1;
 iVar1 = piVar2[-1] + iVar1 + *piVar2 + piVar2[1];
 piVar2 = piVar2 + 3;
 } while (param_2 != 0);
 }
 return iVar1;
}

// Function: struct_nested @ 0x10f38
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x10f48
int struct_deep(int param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x10f58
int struct_with_ptr(int *param_1)
{
 int iVar1;
 if ((int *)param_1[1] == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = *(int *)param_1[1];
 }
 return iVar1 + *param_1;
}

// Function: struct_bitfields @ 0x10f74
short struct_bitfields(ushort *param_1)
{
 ushort uVar1;
 uVar1 = *param_1;
 return (uVar1 & 1) + (uVar1 >> 6) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}

// Function: union_type @ 0x10f9c
uint union_type(uint *param_1,int param_2)
{
 uint uVar1;
 if (param_2 == 1) {
 uVar1 = __fixsfsi(*param_1);
 }
 else if (param_2 == 0) {
 uVar1 = *param_1;
 }
 else {
 uVar1 = (uint)*(byte *)param_1;
 }
 return uVar1;
}

// Function: union_array @ 0x10fc8
int union_array(int *param_1,int param_2)
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

// Function: enum_type @ 0x10ff4
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x11000
unsigned int enum_switch(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffff9d;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(&UNK_000124f8 + param_1 * 4);
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x11020
void struct_func_ptr(unsigned int *param_1)
{
 ((void (*)(unsigned int))param_1[1])(*param_1);
 return;
}

// Function: linked_list @ 0x1102c
int linked_list(int *param_1)
{
 int iVar1;
 int iVar2;
 if (param_1 != (int *)0x0) {
 iVar1 = 0;
 do {
 iVar2 = *param_1;
 param_1 = (int *)param_1[1];
 iVar1 = iVar2 + iVar1;
 } while (param_1 != (int *)0x0);
 return iVar1;
 }
 return 0;
}

// Function: doubly_linked_list @ 0x11058
int doubly_linked_list(int *param_1)
{
 int iVar1;
 int iVar2;
 if (param_1 != (int *)0x0) {
 iVar1 = 0;
 do {
 iVar2 = *param_1;
 param_1 = (int *)param_1[1];
 iVar1 = iVar2 + iVar1;
 } while (param_1 != (int *)0x0);
 return iVar1;
 }
 return 0;
}

// Function: binary_tree_sum @ 0x11084
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_1 == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar3 = *param_1;
 iVar2 = binary_tree_sum(param_1[1]);
 param_1 = (int *)param_1[2];
 iVar1 = iVar3 + iVar1 + iVar2;
 } while (param_1 != (int *)0x0);
 }
 return iVar1;
}

// Function: graph_traverse @ 0x110d0
int graph_traverse(int param_1)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 if (*(int *)(param_1 + 0x28) < 1) {
 iVar1 = 0;
 }
 else {
 iVar3 = 0;
 iVar1 = 0;
 do {
 for (piVar2 = *(int **)(param_1 + iVar3 * 4); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1])
 {
 iVar1 = *piVar2 + iVar1;
 }
 iVar3 = iVar3 + 1;
 } while (iVar3 != *(int *)(param_1 + 0x28));
 }
 return iVar1;
}

// Function: test_composite_types @ 0x11124
void test_composite_types(void)
{
 int *piVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 int *local_84;
 char auStack_80 [40];
 unsigned int local_58;
 unsigned int local_54;
 unsigned int local_4c;
 unsigned int uStack_48;
 unsigned int uStack_44;
 int local_40;
 unsigned int *local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 int *local_2c;
 int local_28;
 unsigned int *local_24;
 unsigned int local_20;
 unsigned int *local_1c;
 unsigned int local_18;
 unsigned int local_14;
 puts(&DAT_000124aa);
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
 iVar3 = 0;
 local_28 = 10;
 local_18 = 0x1e;
 piVar1 = &local_28;
 local_14 = 0;
 local_1c = &local_18;
 local_20 = 0x14;
 local_24 = &local_20;
 do {
 iVar4 = *piVar1;
 piVar1 = (int *)piVar1[1];
 iVar3 = iVar4 + iVar3;
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",iVar3);
 piVar1 = &local_40;
 iVar3 = 0;
 local_34 = 0x14;
 local_2c = piVar1;
 local_30 = 0;
 local_38 = 0;
 local_40 = 10;
 local_3c = &local_34;
 do {
 iVar4 = *piVar1;
 piVar1 = (int *)piVar1[1];
 iVar3 = iVar4 + iVar3;
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
 local_4c = 100;
 uStack_48 = 0;
 uStack_44 = 0;
 uVar2 = binary_tree_sum(0);
 printf("CMP-L2-14 (binary_tree): %d\n",uVar2);
 iVar4 = 0;
 local_54 = 0;
 local_58 = 1;
 memset(auStack_80,0,0x24);
 iVar3 = 0;
 local_84 = &local_58;
 do {
 for (piVar1 = *(int **)(auStack_80 + iVar4 * 4 + -4); piVar1 != (int *)0x0;
 piVar1 = (int *)piVar1[1]) {
 iVar3 = *piVar1 + iVar3;
 }
 iVar4 = iVar4 + 1;
 } while (iVar4 != 2);
 printf("CMP-L2-15 (graph_traverse): %d\n",iVar3);
 return;
}

// Function: main @ 0x11394
int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}























// Function: __aeabi_frsub @ 0x11b78
void __aeabi_frsub(uint param_1)
{
 __addsf3(param_1 ^ 0x80000000,0,0,0);
 return;
}

// Function: __aeabi_fsub @ 0x11b80
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
LAB_00011ce4:
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
 if (0xfd < uVar7) goto LAB_00011ce4;
 }
 }
 uVar4 = uVar4 + uVar5 * 0x800000 + (uint)(0x7fffffff < uVar6);
 if (uVar6 == 0x80000000) {
 uVar4 = uVar4 & 0xfffffffe;
 }
 return uVar4 | param_1;
}

// Function: __addsf3 @ 0x11b84
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
LAB_00011ce4:
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
 if (0xfd < uVar6) goto LAB_00011ce4;
 }
 }
 uVar4 = uVar4 + uVar7 * 0x800000 + (uint)(0x7fffffff < uVar5);
 if (uVar5 == 0x80000000) {
 uVar4 = uVar4 & 0xfffffffe;
 }
 return uVar4 | param_1;
}

// Function: __aeabi_ui2f @ 0x11d14
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

// Function: __floatsisf @ 0x11d1c
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

// Function: __floatundisf @ 0x11d3c
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

// Function: __aeabi_l2f @ 0x11d4c
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

// Function: __fixsfsi @ 0x11dc8
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



