/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/2/2_gcc_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdbool.h>
#include <math.h>

/* Provide roundf implementation for linking */
float roundf(float x) {
    return (float)(int)(x + (x >= 0 ? 0.5f : -0.5f));
}

/* CRT stub function _init removed by preprocessor */

/* Ghidra macros */
#define CONCAT44(hi, lo) (((ulonglong)(hi) << 32) | (lo))
#define ROUND(x) round(x)

/* Data definitions */
char DAT_00013008[] = "Data Types Level 1";
char DAT_000133bd[] = "Array Types";
char DAT_0001342b[] = "Pointer Types";
char DAT_00013430[] = "Composite Types";
char DAT_00013526[] = "Composite Types Test";
int CSWTCH_75[] = {0xffffff9d, 0x32, 0x32, 0x32};

/* Ghidra type definitions */
typedef unsigned char undefined;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char byte;
typedef unsigned long long ulonglong;
typedef long double longdouble;
typedef void (*code)(void);
typedef void (*code_varargs)(undefined4, undefined*);

/* External data declarations - now defined above */

/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 000110d0 */

undefined4 main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001112c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011130 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011269 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001126d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: process_char @ 00011280 */

int process_char(int param_1)

{
 if ((byte)((char)param_1 + 0xbfU) < 0x1a) {
 param_1 = param_1 + 0x20;
 }
 return param_1;
}



/* Function: process_short @ 000112a0 */

short process_short(short param_1,short param_2)

{
 return param_2 + param_1;
}



/* Function: process_int @ 000112b0 */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: process_long @ 000112c0 */

int process_long(int param_1)

{
 return param_1 * 2;
}



/* Function: process_ll @ 000112d0 */

undefined8 process_ll(uint param_1,int param_2)

{
 return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_2 * param_1 * 2,
 (int)((ulonglong)param_1 * (ulonglong)param_1));
}



/* Function: process_float @ 000112f0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

longdouble process_float(float param_1)

{
 return (longdouble)0.5 + (longdouble)1.5 * (longdouble)param_1;
}



/* Function: process_double @ 00011320 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

longdouble process_double(double param_1)

{
 return (longdouble)0.1 + (longdouble)0.5 * (longdouble)param_1;
}



/* Function: process_ld @ 00011350 */

longdouble process_ld(longdouble param_1)

{
 return (longdouble)1 + param_1 * param_1;
}



/* Function: process_bool @ 00011360 */

uint process_bool(uint param_1)

{
 uint uVar1;
 
 uVar1 = ~param_1 & 1;
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: const_param @ 00011380 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 00011390 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 000113a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_data_types_l1(void)

{
 puts(&DAT_00013008);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000,0);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",0,0xa0000000,0x4002);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 000114f0 */

int array_1d_stack(int *param_1,int param_2)

{
 int *piVar1;
 int iVar2;
 
 if (0 < param_2) {
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



/* Function: array_string @ 00011520 */

void array_string(char *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (*param_1 != '\0') {
 do {
 iVar1 = iVar1 + 1;
 } while (param_1[iVar1] != '\0');
 return;
 }
 return;
}



/* Function: array_2d_stack @ 00011550 */

int array_2d_stack(int *param_1)

{
 int *piVar1;
 int iVar2;
 
 iVar2 = 0;
 piVar1 = param_1 + 0x6e;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 0xb;
 } while (param_1 != piVar1);
 return iVar2;
}



/* Function: array_3d @ 00011570 */

int array_3d(int param_1)

{
 int *piVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 
 iVar2 = 0;
 piVar3 = (int *)(param_1 + 100);
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



/* Function: array_vla @ 000115b0 */

int array_vla(int param_1,int *param_2)

{
 int *piVar1;
 int iVar2;
 
 if (0 < param_1) {
 piVar1 = param_2 + param_1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_2;
 param_2 = param_2 + 1;
 } while (param_2 != piVar1);
 return iVar2;
 }
 return 0;
}



/* Function: array_pointer @ 000115e0 */

int array_pointer(int *param_1,int param_2)

{
 int *piVar1;
 int iVar2;
 
 if (0 < param_2) {
 piVar1 = param_1 + param_2 * 10;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 10;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}



/* Function: pointer_array @ 00011620 */

int pointer_array(int param_1,int param_2)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = 10;
 if (param_2 < 0xb) {
 iVar4 = param_2;
 }
 if (0 < param_2) {
 iVar2 = 0;
 iVar3 = 0;
 do {
 piVar1 = *(int **)(param_1 + iVar2 * 4);
 if (piVar1 != (int *)0x0) {
 iVar3 = iVar3 + *piVar1;
 }
 iVar2 = iVar2 + 1;
 } while (iVar2 < iVar4);
 return iVar3;
 }
 return 0;
}



/* Function: array_complex_index @ 00011660 */

undefined4 array_complex_index(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
 if (((-1 < (int)(param_4 | param_5)) && ((int)param_4 < param_2)) && ((int)param_5 < param_3)) {
 return *(undefined4 *)(param_1 + (param_2 * param_5 + param_4) * 4);
 }
 return 0xffffffff;
}



/* Function: array_oob @ 000116a0 */

int array_oob(int *param_1,int param_2)

{
 int *piVar1;
 int iVar2;
 
 if (-1 < param_2) {
 piVar1 = param_1 + param_2 + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}



/* Function: test_array_types @ 000116e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_array_types(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 int *piVar6;
 int *piVar7;
 int in_GS_OFFSET;
 int local_3fc [20];
 int local_3ac [110];
 int local_1f4 [15];
 int local_1b8 [100];
 undefined4 local_26;
 undefined2 local_22;
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x116ed;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_000133bd);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
 local_26 = 0x6c6c6568;
 local_22 = 0x6f;
 iVar5 = 0;
 do {
 iVar1 = iVar5 + 1;
 iVar2 = iVar5 + 1;
 iVar5 = iVar1;
 } while (*(char *)((int)&local_26 + iVar2) != '\0');
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",iVar1);
 piVar6 = local_3ac;
 iVar5 = 0;
 piVar7 = piVar6;
 do {
 iVar2 = 0;
 do {
 iVar1 = 0;
 if (iVar2 == iVar5) {
 iVar1 = iVar2;
 }
 piVar7[iVar2] = iVar1;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 10);
 iVar5 = iVar5 + 1;
 piVar7 = piVar7 + 10;
 } while (iVar5 != 10);
 iVar5 = 0;
 do {
 iVar5 = iVar5 + *piVar6;
 piVar6 = piVar6 + 0xb;
 } while (local_1f4 != piVar6);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",iVar5);
 piVar6 = local_1b8;
 piVar7 = piVar6;
 do {
 piVar3 = piVar7 + -0x19;
 do {
 *piVar3 = 1;
 piVar4 = piVar3 + 5;
 piVar3[1] = 1;
 piVar3[2] = 1;
 piVar3[3] = 1;
 piVar3[4] = 1;
 piVar3 = piVar4;
 } while (piVar7 != piVar4);
  piVar7 = piVar7 + 0x19;
 } while (piVar7 != (int *)&local_1b8[100]);
 iVar5 = 0;
 do {
 piVar7 = piVar6 + -0x19;
 do {
 piVar3 = piVar7 + 5;
 iVar5 = iVar5 + *piVar7 + piVar7[1] + piVar7[2] + piVar7[3] + piVar7[4];
 piVar7 = piVar3;
 } while (piVar6 != piVar3);
 piVar6 = piVar6 + 0x19;
 } while (piVar6 != (int *)&local_1b8[100]);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",iVar5);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",100);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
 iVar5 = 0;
 do {
 local_3fc[iVar5] = iVar5;
 iVar5 = iVar5 + 1;
 } while (iVar5 != 0x14);
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",local_3fc[0x11]);
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: ptr_single @ 000118d0 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 000118e0 */

int ptr_double(undefined4 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 000118f0 */

int ptr_triple(undefined4 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00011910 */

int ptr_increment(int param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 if (0 < param_2) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4);
 iVar1 = iVar1 + 1;
 } while (param_2 != iVar1);
 return iVar2;
 }
 return 0;
}



/* Function: ptr_offset @ 00011950 */

undefined4 ptr_offset(int param_1,int param_2)

{
 return *(undefined4 *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 00011960 */

int ptr_diff(int param_1,int param_2)

{
 return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 00011970 */

int ptr_void(int *param_1,int param_2)

{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 return (int)(char)*param_1;
 }
 return -1;
}



/* Function: ptr_const @ 000119b0 */

int ptr_const(int *param_1)

{
 return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 000119c0 */

void ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return;
}



/* Function: ptr_func_simple @ 000119d0 */

void ptr_func_simple(code *UNRECOVERED_JUMPTABLE)

{
 /* WARNING: Could not recover jumptable at 0x000119e0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)();
 return;
}



/* Function: ptr_func_complex @ 000119f0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void ptr_func_complex(code_varargs param_1,undefined4 param_2)

{
 int in_GS_OFFSET;
 undefined *local_18;
 undefined4 local_14;
 int local_10;
 undefined4 uStack_4;
 
 uStack_4 = 0x119f9;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 0;
 local_18 = &DAT_0001342b;
 param_1(param_2,&local_18);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: ptr_cast @ 00011a50 */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00011a60 */

undefined4 opaque_handle_create(undefined4 param_1)

{
 return param_1;
}



/* Function: opaque_handle_op @ 00011a70 */

int opaque_handle_op(int param_1)

{
 return param_1 * 2;
}



/* Function: test_pointer_types @ 00011a80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_pointer_types(void)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int local_24 [6];
 undefined4 uStack_c;
 
 uStack_c = 0x11a8b;
 local_24[5] = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013430);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",6);
 local_24[0] = 1;
 iVar3 = 0;
 iVar2 = 1;
 local_24[1] = 2;
 local_24[2] = 3;
 local_24[3] = 4;
 local_24[4] = 5;
 piVar1 = local_24;
 while( true ) {
 piVar1 = piVar1 + 1;
 iVar3 = iVar3 + iVar2;
 if (piVar1 == local_24 + 5) break;
 iVar2 = *piVar1;
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
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (local_24[5] == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: struct_simple @ 00011c20 */

int struct_simple(int *param_1)

{
 return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00011c40 */

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
 } while (param_1 + param_2 * 3 != piVar2);
 return iVar3;
 }
 return 0;
}



/* Function: struct_nested @ 00011c90 */

int struct_nested(int *param_1)

{
 return param_1[3] + *param_1;
}



/* Function: struct_deep @ 00011ca0 */

int struct_deep(int param_1)

{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 00011cb0 */

int struct_with_ptr(int *param_1)

{
 int iVar1;
 
 iVar1 = *param_1;
 if ((int *)param_1[1] != (int *)0x0) {
 iVar1 = iVar1 + *(int *)param_1[1];
 }
 return iVar1;
}



/* Function: struct_bitfields @ 00011cd0 */

short struct_bitfields(ushort *param_1)

{
 byte bVar1;
 
 bVar1 = (byte)*param_1;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6);
}



/* Function: union_type @ 00011d00 */

float union_type(float *param_1,int param_2)

{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 != 1) {
 return (float)(int)*(char *)param_1;
 }
 return (float)(int)ROUND(*param_1);
}



/* Function: union_array @ 00011d60 */

int union_array(int *param_1,int param_2)

{
 int *piVar1;
 int iVar2;
 
 if (0 < param_2) {
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



/* Function: enum_type @ 00011d90 */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 00011da0 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

undefined4 enum_switch(uint param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffff9d;
 if (param_1 < 4) {
 uVar1 = *(undefined4 *)(CSWTCH_75 + param_1 * 4);
 }
 return uVar1;
}



/* Function: struct_func_ptr @ 00011dd0 */

void struct_func_ptr(int param_1)

{
 /* WARNING: Could not recover jumptable at 0x00011dde. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (**(code **)(param_1 + 4))();
 return;
}



/* Function: linked_list @ 00011df0 */

int linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 00011e10 */

int doubly_linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 00011e30 */

int binary_tree_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 int *piVar6;
 int *piVar7;
 int *piVar8;
 int iVar9;
 int *piVar10;
 int iVar11;
 int local_70;
 int local_6c;
 int local_68;
 int local_64;
 int *local_54;
 int *local_50;
 int *local_4c;
 int local_48;
 int local_44;
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 int local_30;
 int local_2c;
 int local_28;
 
 local_28 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[2]) {
 local_3c = 0;
 local_44 = *param_1;
 local_54 = (int *)param_1[1];
 if (local_54 != (int *)0x0) {
 do {
 local_38 = 0;
 local_40 = *local_54;
 local_50 = (int *)local_54[1];
 if (local_50 != (int *)0x0) {
 do {
 local_34 = 0;
 local_2c = *local_50;
 local_4c = (int *)local_50[1];
 if (local_4c != (int *)0x0) {
 do {
 local_68 = 0;
 local_30 = *local_4c;
 piVar6 = (int *)local_4c[1];
 if (piVar6 != (int *)0x0) {
 do {
 piVar3 = (int *)piVar6[1];
 iVar5 = *piVar6;
 local_70 = 0;
 if (piVar3 != (int *)0x0) {
 do {
 local_6c = *piVar3;
 piVar7 = (int *)piVar3[1];
 local_64 = 0;
 if (piVar7 != (int *)0x0) {
 do {
 local_48 = *piVar7;
 piVar8 = (int *)piVar7[1];
 iVar9 = 0;
 if (piVar8 != (int *)0x0) {
 do {
 piVar10 = (int *)piVar8[1];
 iVar11 = *piVar8;
 iVar4 = 0;
 if (piVar10 != (int *)0x0) {
 do {
 iVar2 = binary_tree_sum(piVar10[1]);
 iVar1 = *piVar10;
 piVar10 = (int *)piVar10[2];
 iVar4 = iVar4 + iVar2 + iVar1;
 } while (piVar10 != (int *)0x0);
 iVar11 = iVar11 + iVar4;
 }
 piVar8 = (int *)piVar8[2];
 iVar9 = iVar9 + iVar11;
 } while (piVar8 != (int *)0x0);
 local_48 = local_48 + iVar9;
 }
 piVar7 = (int *)piVar7[2];
 local_64 = local_64 + local_48;
 } while (piVar7 != (int *)0x0);
 local_6c = local_6c + local_64;
 }
 piVar3 = (int *)piVar3[2];
 local_70 = local_70 + local_6c;
 } while (piVar3 != (int *)0x0);
 iVar5 = iVar5 + local_70;
 }
 piVar6 = (int *)piVar6[2];
 local_68 = local_68 + iVar5;
 } while (piVar6 != (int *)0x0);
 local_30 = local_30 + local_68;
 }
 local_34 = local_34 + local_30;
 local_4c = (int *)local_4c[2];
 } while (local_4c != (int *)0x0);
 local_2c = local_2c + local_34;
 }
 local_38 = local_38 + local_2c;
 local_50 = (int *)local_50[2];
 } while (local_50 != (int *)0x0);
 local_40 = local_40 + local_38;
 }
 local_3c = local_3c + local_40;
 local_54 = (int *)local_54[2];
 } while (local_54 != (int *)0x0);
 local_44 = local_44 + local_3c;
 }
 local_28 = local_28 + local_44;
 }
 return local_28;
}



/* Function: binary_tree @ 00012060 */

int binary_tree(int *param_1)

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



/* Function: graph_traverse @ 000120a0 */

int graph_traverse(undefined4 *param_1)

{
 undefined4 *puVar1;
 int *piVar2;
 int iVar3;
 
 if ((int)param_1[10] < 1) {
 return 0;
 }
 puVar1 = param_1 + param_1[10];
 iVar3 = 0;
 do {
 for (piVar2 = (int *)*param_1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
 iVar3 = iVar3 + *piVar2;
 }
 param_1 = param_1 + 1;
 } while (param_1 != puVar1);
 return iVar3;
}



/* Function: test_composite_types @ 000120e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_composite_types(void)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int local_38;
 undefined4 *local_34;
 undefined4 local_30;
 undefined4 local_2c;
 int local_28;
 undefined4 *local_24;
 undefined4 local_20;
 undefined4 local_1c;
 undefined4 local_18;
 int *local_14;
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x120ea;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013526);
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
 local_34 = &local_30;
 iVar2 = 10;
 iVar3 = 0;
 local_38 = 0x14;
 local_30 = 0x1e;
 local_2c = 0;
 for (piVar1 = &local_38; iVar3 = iVar3 + iVar2, piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
 iVar2 = *piVar1;
 }
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar3);
 piVar1 = &local_28;
 local_28 = 10;
 local_24 = &local_1c;
 iVar2 = 10;
 iVar3 = 0;
 local_20 = 0;
 local_1c = 0x14;
 local_18 = 0;
 local_14 = piVar1;
 while( true ) {
 piVar1 = (int *)piVar1[1];
 iVar3 = iVar3 + iVar2;
 if (piVar1 == (int *)0x0) break;
 iVar2 = *piVar1;
 }
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
 iVar2 = binary_tree_sum(0);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",iVar2 + 100);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",1);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: __x86.get_pc_thunk.ax @ 000122eb */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 000122ef */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00012300 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
