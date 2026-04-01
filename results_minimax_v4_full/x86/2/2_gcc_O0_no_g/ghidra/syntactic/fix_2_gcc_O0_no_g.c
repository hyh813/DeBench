/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/2/2_gcc_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */


/* Type definitions for Ghidra types */
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned char byte;
typedef long double longdouble;
typedef void (*code)(int, char**);  /* Function pointer type */
typedef unsigned short ushort;
typedef char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined8;
typedef unsigned long long ulonglong;
typedef int undefined6;
typedef unsigned int uint6;
typedef unsigned char undefined10[10];
typedef unsigned long long unkwuint10;
typedef char *undefined10p;
typedef int bool;

/* Ghidra macro definitions */
#define CONCAT44(high, low) (((ulonglong)(high) << 32) | (uint)(low))
#define SUB84(x, y) (*(longdouble *)((char *)&(x) - (y)))
#define NULL ((void*)0)

/* External declarations for linker symbols */
extern int _GLOBAL_OFFSET_TABLE_[];


/* Data declarations for string constants */
char DAT_00013010[] = "Testing Data Types Level 1\n";
char DAT_0001317c[] = "Testing Array Types\n";
char DAT_0001329a[] = "Testing Pointer Types\n";
char DAT_00013295[] = "callback";
char DAT_0001343e[] = "Testing Composite Types\n";
char _DAT_00013660[] = "GOT";

/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000110fc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011100 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011239 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001123d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: double_value @ 00011241 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: process_char @ 00011259 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

uint process_char(byte param_1)

{
 uint uVar1;
 
 if (((char)param_1 < 'A') || ('Z' < (char)param_1)) {
 uVar1 = (uint)param_1;
 }
 else {
 uVar1 = param_1 + 0x20;
 }
 return uVar1;
}



/* Function: process_short @ 0001128e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int process_short(ushort param_1,ushort param_2)

{
 return (uint)param_2 + (uint)param_1;
}



/* Function: process_int @ 000112bc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: process_long @ 000112d7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int process_long(int param_1)

{
 return param_1 * 2;
}



/* Function: process_ll @ 000112ef */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

ulonglong process_ll(uint param_1,int param_2)

{
 return CONCAT44(param_2 * param_1 + param_2 * param_1 +
 (int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20),
 (int)((ulonglong)param_1 * (ulonglong)param_1));
}



/* Function: process_float @ 0001132e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

longdouble process_float(float param_1)

{
 return (longdouble)0.5 + (longdouble)1.5 * (longdouble)param_1;
}



/* Function: process_double @ 00011354 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

longdouble process_double(undefined4 param_1,undefined4 param_2)

{
 return (longdouble)0.1 + (longdouble)(double)CONCAT44(param_2,param_1) / (longdouble)2.0;
}



/* Function: process_ld @ 00011389 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int * process_ld(void)

{
 static int *got_ptr = NULL;
 if (got_ptr == NULL) {
  got_ptr = _GLOBAL_OFFSET_TABLE_;
 }
 return got_ptr;
}



/* Function: process_bool @ 000113a7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 process_bool(uint param_1)

{
 undefined4 uVar1;
 
 if (((int)param_1 < 1) || ((param_1 & 1) != 0)) {
 uVar1 = 0;
 }
 else {
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: const_param @ 000113d9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 000113f4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 00011422 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_data_types_l1(void)

{
 char cVar1;
 short sVar2;
 undefined4 uVar3;
 uint uVar4;
 int in_GS_OFFSET;
 longdouble lVar5;
 unkwuint10 Var6;
 undefined6 uVar7;
 undefined4 local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013010);
 cVar1 = process_char(0x41);
 printf("DT-L1-01 (process_char): %c\n",(int)cVar1);
 cVar1 = process_char(0x62);
 printf("DT-L1-01 (process_char): %c\n",(int)cVar1);
 sVar2 = process_short(100,200);
 printf("DT-L1-02 (process_short): %d\n",(int)sVar2);
 uVar3 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n",uVar3);
 uVar3 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n",uVar3);
 uVar7 = process_ll(100,0);
 printf("DT-L1-05 (process_ll): %lld\n",(int)uVar7,(short)((uint6)uVar7 >> 0x20));
 lVar5 = (longdouble)process_float(0x40000000);
 printf("DT-L1-06 (process_float): %.2f\n",SUB84((double)lVar5,0),
 (short)((ulonglong)(double)lVar5 >> 0x20));
 lVar5 = (longdouble)process_double(0,0x40100000);
 printf("DT-L1-07 (process_double): %.2f\n",SUB84((double)lVar5,0),
 (short)((ulonglong)(double)lVar5 >> 0x20));
 Var6 = process_ld();
 printf("DT-L1-08 (process_ld): %p\n",Var6);
 uVar4 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n",uVar4 & 0xff);
 uVar4 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n",uVar4 & 0xff);
 uVar4 = process_bool(0xfffffffe);
 printf("DT-L1-09 (process_bool): %d\n",uVar4 & 0xff);
 local_18 = 5;
 uVar3 = const_param(&local_18);
 printf("DT-L1-10 (const_param): %d\n",uVar3);
 local_14 = 10;
 uVar3 = volatile_access(&local_14);
 printf("DT-L1-11 (volatile_access): %d\n",uVar3);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: array_1d_stack @ 00011686 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int array_1d_stack(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_c = 0;
 for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
 local_c = local_c + *(int *)(param_1 + local_8 * 4);
 }
 return local_c;
}



/* Function: array_string @ 000116cf */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int array_string(int param_1)

{
 undefined4 local_8;
 
 for (local_8 = 0; *(char *)(param_1 + local_8) != '\0'; local_8 = local_8 + 1) {
 }
 return local_8;
}



/* Function: array_2d_stack @ 00011704 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int array_2d_stack(int param_1)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_c = 0;
 for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
 local_c = local_c + *(int *)(local_8 * 0x2c + param_1);
 }
 return local_c;
}



/* Function: array_3d @ 00011754 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int array_3d(int param_1)

{
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 undefined4 local_8;
 
 local_14 = 0;
 for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
 for (local_c = 0; local_c < 5; local_c = local_c + 1) {
 for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
 local_14 = local_14 + *(int *)(local_10 * 100 + param_1 + (local_c * 5 + local_8) * 4);
 }
 }
 }
 return local_14;
}



/* Function: array_vla @ 000117ce */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int array_vla(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_c = 0;
 for (local_8 = 0; local_8 < param_1; local_8 = local_8 + 1) {
 local_c = local_c + *(int *)(param_2 + local_8 * 4);
 }
 return local_c;
}



/* Function: array_pointer @ 00011817 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int array_pointer(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_c = 0;
 for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
 local_c = local_c + *(int *)(param_1 + local_8 * 0x28);
 }
 return local_c;
}



/* Function: pointer_array @ 00011865 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int pointer_array(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 if (10 < param_2) {
 param_2 = 10;
 }
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 if (*(int *)(param_1 + local_c * 4) != 0) {
 local_10 = local_10 + **(int **)(param_1 + local_c * 4);
 }
 }
 return local_10;
}



/* Function: array_complex_index @ 000118d5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 uVar1;
 
 if ((((param_4 < 0) || (param_2 <= param_4)) || (param_5 < 0)) || (param_3 <= param_5)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(undefined4 *)(param_1 + (param_4 + param_5 * param_2) * 4);
 }
 return uVar1;
}



/* Function: array_oob @ 00011927 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int array_oob(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_c = 0;
 for (local_8 = 0; local_8 <= param_2; local_8 = local_8 + 1) {
 local_c = local_c + *(int *)(param_1 + local_8 * 4);
 }
 return local_c;
}



/* Function: test_array_types @ 00011970 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_array_types(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 **ppuVar3;
 int in_GS_OFFSET;
 byte bVar4;
 undefined4 local_524;
 undefined4 local_520;
 undefined4 local_51c;
 int local_518;
 int local_514;
 int local_510;
 int local_50c;
 int local_508;
 int local_504;
 int local_500;
 undefined4 local_4fc;
 undefined4 local_4f8;
 undefined4 local_4f4;
 undefined4 local_4f0;
 undefined4 local_4ec;
 undefined4 local_4e8;
 undefined4 local_4e4;
 undefined4 local_4e0;
 undefined4 *local_4dc;
 undefined4 *local_4d8;
 undefined4 *local_4d4;
 int local_4b4 [20];
 int local_464 [50];
 int local_39c [100];
 undefined4 local_20c [125];
 undefined4 local_16;
 undefined2 local_12;
 int local_10;
 
 bVar4 = 0;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_0001317c);
 local_4f0 = 1;
 local_4ec = 2;
 local_4e8 = 3;
 local_4e4 = 4;
 local_4e0 = 5;
 uVar1 = array_1d_stack(&local_4f0,5);
 printf("ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_16 = 0x6c6c6568;
 local_12 = 0x6f;
 uVar1 = array_string(&local_16);
 printf("ARR-L1-02 (array_string): %d\n",uVar1);
 for (local_518 = 0; local_518 < 10; local_518 = local_518 + 1) {
 for (local_514 = 0; local_514 < 10; local_514 = local_514 + 1) {
 iVar2 = local_518;
 if (local_518 != local_514) {
 iVar2 = 0;
 }
 local_39c[local_518 * 10 + local_514] = iVar2;
 }
 }
 uVar1 = array_2d_stack(local_39c);
 printf("ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 for (local_510 = 0; local_510 < 5; local_510 = local_510 + 1) {
 for (local_50c = 0; local_50c < 5; local_50c = local_50c + 1) {
 for (local_508 = 0; local_508 < 5; local_508 = local_508 + 1) {
 local_20c[local_508 + local_50c * 5 + local_510 * 0x19] = 1;
 }
 }
 }
 uVar1 = array_3d(local_20c);
 printf("ARR-L1-04 (array_3d): %d\n",uVar1);
 local_4fc = 10;
 local_4f8 = 0x14;
 local_4f4 = 0x1e;
 uVar1 = array_vla(3,&local_4fc);
 printf("ARR-L2-01 (array_vla): %d\n",uVar1);
 for (local_504 = 0; local_504 < 5; local_504 = local_504 + 1) {
 local_464[local_504 * 10] = local_504 * 10;
 }
 uVar1 = array_pointer(local_464,5);
 printf("ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_524 = 10;
 local_520 = 0x14;
 local_51c = 0x1e;
 ppuVar3 = &local_4dc;
 for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
 *ppuVar3 = (undefined4 *)0x0;
 ppuVar3 = ppuVar3 + (uint)bVar4 * -2 + 1;
 }
 local_4dc = &local_524;
 local_4d8 = &local_520;
 local_4d4 = &local_51c;
 uVar1 = pointer_array(&local_4dc,3);
 printf("ARR-L2-03 (pointer_array): %d\n",uVar1);
 for (local_500 = 0; local_500 < 0x14; local_500 = local_500 + 1) {
 local_4b4[local_500] = local_500;
 }
 uVar1 = array_complex_index(local_4b4,5,4,2,3);
 printf("ARR-L2-04 (array_complex_index): %d\n",uVar1);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: ptr_single @ 00011d1d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00011d38 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ptr_double(undefined4 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00011d55 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ptr_triple(undefined4 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00011d74 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ptr_increment(int *param_1,int param_2)

{
 int local_c;
 int local_8;
 
 local_c = 0;
 for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
 local_c = local_c + *param_1;
 param_1 = param_1 + 1;
 }
 return local_c;
}



/* Function: ptr_offset @ 00011db5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 ptr_offset(int param_1,int param_2)

{
 return *(undefined4 *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 00011dd9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ptr_diff(int param_1,int param_2)

{
 return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 00011df5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ptr_void(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 0) {
 iVar1 = *param_1;
 }
 else if (param_2 == 1) {
 iVar1 = (int)(char)*param_1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: ptr_const @ 00011e2b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ptr_const(int *param_1)

{
 return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 00011e45 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return *param_1;
}



/* Function: ptr_func_simple @ 00011e6a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void ptr_func_simple(void (*param_1)(int), int param_2)

{
 (*param_1)(param_2);
 return;
}



/* Function: ptr_func_complex @ 00011e8e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void ptr_func_complex(code *param_1,undefined4 param_2)

{
 int in_GS_OFFSET;
 undefined *local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = &DAT_00013295;
 local_14 = 0;
 (*param_1)(param_2,&local_18);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: ptr_cast @ 00011eef */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00011f1c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 opaque_handle_create(undefined4 param_1)

{
 return param_1;
}



/* Function: opaque_handle_op @ 00011f32 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int opaque_handle_op(int param_1)

{
 return param_1 * 2;
}



/* Function: complex_callback @ 00011f4a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

bool complex_callback(int *param_1,int *param_2)

{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}



/* Function: test_pointer_types @ 00011f77 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_pointer_types(void)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 undefined1 local_85;
 undefined4 local_84;
 undefined4 local_80;
 undefined4 *local_7c;
 undefined4 local_78;
 undefined4 *local_74;
 undefined4 **local_70;
 undefined4 local_6c;
 undefined4 local_68;
 undefined4 local_64;
 undefined4 local_60;
 undefined4 local_5c;
 undefined4 **local_58;
 undefined4 **local_54;
 undefined4 local_50;
 undefined4 local_4c;
 undefined4 local_48;
 undefined4 local_44;
 undefined4 local_40;
 undefined4 local_3c;
 undefined4 local_38;
 undefined4 local_34;
 undefined4 local_30;
 undefined4 local_2c;
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_20;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_0001329a);
 local_84 = 5;
 uVar1 = ptr_single(&local_84);
 printf("PTR-L2-01 (ptr_single): %d\n",uVar1);
 local_80 = 10;
 local_7c = &local_80;
 local_58 = &local_7c;
 uVar1 = ptr_double(local_58);
 printf("PTR-L2-02 (ptr_double): %d\n",uVar1);
 local_78 = 5;
 local_74 = &local_78;
 local_70 = &local_74;
 local_54 = &local_70;
 uVar1 = ptr_triple(local_54);
 printf("PTR-L2-03 (ptr_triple): %d\n",uVar1);
 local_4c = 1;
 local_48 = 2;
 local_44 = 3;
 local_40 = 4;
 local_3c = 5;
 uVar1 = ptr_increment(&local_4c,5);
 printf("PTR-L2-04 (ptr_increment): %d\n",uVar1);
 local_38 = 10;
 local_34 = 0x14;
 local_30 = 0x1e;
 local_2c = 0x28;
 local_28 = 0x32;
 uVar1 = ptr_offset(&local_38,2);
 printf("PTR-L2-05 (ptr_offset): %d\n",uVar1);
 local_24 = 0;
 local_20 = 10;
 local_1c = 0x14;
 local_18 = 0x1e;
 local_14 = 0x28;
 uVar1 = ptr_diff(&local_14,&local_24);
 printf("PTR-L2-06 (ptr_diff): %d\n",uVar1);
 local_6c = 0x2a;
 local_85 = 0x41;
 uVar1 = ptr_void(&local_6c,0);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar1);
 uVar1 = ptr_void(&local_85,1);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar1);
 local_68 = 10;
 uVar1 = ptr_const(&local_68);
 printf("PTR-L2-08 (ptr_const): %d\n",uVar1);
 local_64 = 10;
 uVar1 = ptr_const_ptr(&local_64);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",uVar1);
 ptr_func_simple((code *)&double_value,5);
 printf("PTR-L2-10 (ptr_func_simple): done\n");
 local_60 = 5;
 ptr_func_complex(complex_callback,&local_60);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 local_5c = 0x12345678;
 uVar1 = ptr_cast(&local_5c);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",uVar1);
 local_50 = opaque_handle_create(10);
 uVar1 = opaque_handle_op(local_50);
 printf("PTR-L2-13 (opaque_handle_op): %d\n",uVar1);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: struct_simple @ 00012291 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int struct_simple(int *param_1)

{
 return param_1[2] + *param_1 + param_1[1];
}



/* Function: struct_array @ 000122b9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int struct_array(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_c = 0;
 for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
 local_c = local_c + *(int *)(param_1 + local_8 * 0xc + 8) +
 *(int *)(param_1 + local_8 * 0xc) + *(int *)(param_1 + local_8 * 0xc + 4);
 }
 return local_c;
}



/* Function: struct_nested @ 00012336 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int struct_nested(int *param_1)

{
 return param_1[3] + *param_1;
}



/* Function: struct_deep @ 00012356 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int struct_deep(int param_1)

{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 00012377 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int struct_with_ptr(int *param_1)

{
 int iVar1;
 
 if (param_1[1] == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = *(int *)param_1[1];
 }
 return iVar1 + *param_1;
}



/* Function: struct_bitfields @ 000123aa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

short struct_bitfields(ushort *param_1)

{
 return (*param_1 >> 6) +
 (ushort)((byte)*param_1 & 1) + (ushort)((byte)*param_1 >> 1 & 3) +
 (ushort)((byte)*param_1 >> 3 & 7);
}



/* Function: union_type @ 000123f9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

float union_type(float *param_1,int param_2)

{
 float fVar1;
 
 if (param_2 == 0) {
 fVar1 = *param_1;
 }
 else if (param_2 == 1) {
 fVar1 = (float)(int)ROUND(*param_1);
 }
 else {
 fVar1 = (float)(int)*(char *)param_1;
 }
 return fVar1;
}



/* Function: union_array @ 0001244c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int union_array(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_c = 0;
 for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
 local_c = local_c + *(int *)(param_1 + local_8 * 4);
 }
 return local_c;
}



/* Function: enum_type @ 00012495 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 000124b4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 enum_switch(uint param_1)

{
 if (param_1 == 3) {
 return 0xffffffff;
 }
 if (param_1 < 4) {
 if (param_1 == 2) {
 return 0x32;
 }
 if (param_1 < 3) {
 if (param_1 == 0) {
 return 0;
 }
 if (param_1 == 1) {
 return 100;
 }
 }
 }
 return 0xffffff9d;
}



/* Function: struct_func_ptr @ 0001250e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void struct_func_ptr(undefined4 *param_1)

{
 (*(code *)param_1[1])(*param_1);
 return;
}



/* Function: linked_list @ 00012538 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int linked_list(int *param_1)

{
 int local_c;
 int *local_8;
 
 local_c = 0;
 for (local_8 = param_1; local_8 != (int *)0x0; local_8 = (int *)local_8[1]) {
 local_c = local_c + *local_8;
 }
 return local_c;
}



/* Function: doubly_linked_list @ 00012577 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int doubly_linked_list(int *param_1)

{
 int local_c;
 int *local_8;
 
 local_c = 0;
 for (local_8 = param_1; local_8 != (int *)0x0; local_8 = (int *)local_8[1]) {
 local_c = local_c + *local_8;
 }
 return local_c;
}



/* Function: binary_tree_sum @ 000125b6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int binary_tree_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (param_1 == (int *)0x0) {
 iVar2 = 0;
 }
 else {
 iVar1 = *param_1;
 iVar3 = binary_tree_sum(param_1[1]);
 iVar2 = binary_tree_sum(param_1[2]);
 iVar2 = iVar2 + iVar1 + iVar3;
 }
 return iVar2;
}



/* Function: binary_tree @ 0001260a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void binary_tree(undefined4 param_1)

{
 binary_tree_sum(param_1);
 return;
}



/* Function: graph_traverse @ 0001262e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int graph_traverse(int param_1)

{
 int local_10;
 int local_c;
 int *local_8;
 
 local_10 = 0;
 for (local_c = 0; local_c < *(int *)(param_1 + 0x28); local_c = local_c + 1) {
 for (local_8 = *(int **)(param_1 + local_c * 4); local_8 != (int *)0x0;
 local_8 = (int *)local_8[1]) {
 local_10 = local_10 + *local_8;
 }
 }
 return local_10;
}



/* Function: test_composite_types @ 0001268b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_composite_types(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 **ppuVar3;
 int in_GS_OFFSET;
 byte bVar4;
 undefined4 local_118;
 undefined4 local_114;
 undefined4 local_110;
 undefined4 *local_10c;
 undefined2 local_108 [2];
 uint local_104;
 undefined4 local_100;
 code *local_fc;
 undefined4 local_f8;
 undefined4 local_f4;
 undefined4 local_f0;
 undefined4 local_ec;
 undefined4 local_e8;
 undefined4 local_e4;
 undefined4 local_e0;
 undefined4 local_dc;
 undefined4 local_d8;
 undefined4 local_d4;
 undefined4 local_d0;
 undefined4 local_cc;
 undefined4 local_c8;
 undefined4 local_c4;
 undefined4 local_c0;
 undefined4 local_bc;
 undefined4 local_b8;
 undefined4 local_b4;
 undefined4 local_b0;
 undefined4 local_ac;
 undefined4 local_a8;
 undefined4 local_a4;
 undefined4 local_a0;
 undefined4 local_9c;
 undefined4 local_98;
 undefined4 local_94;
 undefined4 local_90;
 undefined4 local_8c;
 undefined4 local_88;
 undefined4 local_84;
 undefined4 local_80;
 undefined4 local_7c;
 undefined4 local_78;
 undefined4 local_74;
 undefined4 local_70;
 undefined4 local_6c;
 undefined4 *local_68;
 undefined4 local_64;
 undefined4 *local_60;
 undefined4 local_5c;
 undefined4 local_58;
 undefined4 local_54;
 undefined4 *local_50;
 undefined4 local_4c;
 undefined4 local_48;
 undefined4 local_44;
 undefined4 *local_40;
 undefined4 *local_3c [10];
 undefined4 local_14;
 int local_10;
 
 bVar4 = 0;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_0001343e);
 local_f0 = 1;
 local_ec = 2;
 local_e8 = 3;
 uVar1 = struct_simple(&local_f0);
 printf("CMP-L2-01 (struct_simple): %d\n",uVar1);
 local_84 = 1;
 local_80 = 1;
 local_7c = 1;
 local_78 = 2;
 local_74 = 2;
 local_70 = 2;
 uVar1 = struct_array(&local_84,2);
 printf("CMP-L2-02 (struct_array): %d\n",uVar1);
 local_d8 = 5;
 local_d4 = 10;
 local_d0 = 0;
 local_cc = 100;
 local_c8 = 200;
 uVar1 = struct_nested(&local_d8);
 printf("CMP-L2-03 (struct_nested): %d\n",uVar1);
 local_c4 = 1;
 local_c0 = 2;
 local_bc = 3;
 local_b8 = 10;
 local_b4 = 0x14;
 local_b0 = 0xff;
 local_ac = 0;
 local_a8 = 0;
 local_a4 = 0;
 local_a0 = 0;
 local_9c = 0xff;
 local_98 = 0x2a;
 uVar1 = struct_deep(&local_c4);
 printf("CMP-L2-04 (struct_deep): %d\n",uVar1);
 local_118 = 0x14;
 local_114 = 0;
 local_110 = 10;
 local_10c = &local_118;
 uVar1 = struct_with_ptr(&local_110);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_108[0] = 0x191d;
 local_104 = local_104 & 0xfff00000;
 uVar1 = struct_bitfields(local_108);
 printf("CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 local_94 = 0x12345678;
 uVar1 = union_type(&local_94,0);
 printf("CMP-L2-07 (union_type): %d\n",uVar1);
 local_90 = 10;
 local_8c = 0x14;
 local_88 = 0x1e;
 uVar1 = union_array(&local_90,3);
 printf("CMP-L2-08 (union_array): %d\n",uVar1);
 uVar1 = enum_type(1);
 printf("CMP-L2-09 (enum_type): %d\n",uVar1);
 uVar1 = enum_switch(2);
 printf("CMP-L2-10 (enum_switch): %d\n",uVar1);
 local_100 = 10;
 local_fc = process_int;
 uVar1 = struct_func_ptr(&local_100);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
 local_6c = 10;
 local_68 = &local_64;
 local_64 = 0x14;
 local_60 = &local_5c;
 local_5c = 0x1e;
 local_58 = 0;
 uVar1 = linked_list(&local_6c);
 printf("CMP-L2-12 (linked_list): %d\n",uVar1);
 local_54 = 10;
 local_4c = 0;
 local_48 = 0x14;
 local_44 = 0;
 local_40 = &local_54;
 local_50 = &local_48;
 uVar1 = doubly_linked_list(&local_54);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_e4 = 100;
 local_e0 = 0;
 local_dc = 0;
 uVar1 = binary_tree(&local_e4);
 printf("CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_f8 = 1;
 local_f4 = 0;
 ppuVar3 = local_3c;
 for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
 *ppuVar3 = (undefined4 *)0x0;
 ppuVar3 = ppuVar3 + (uint)bVar4 * -2 + 1;
 }
 local_14 = 2;
 local_3c[0] = &local_f8;
 uVar1 = graph_traverse(local_3c);
 printf("CMP-L2-15 (graph_traverse): %d\n",uVar1);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: main @ 00012b69 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00012b98 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00012ba0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 71 */
