/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/2/2_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

/* Ghidra-specific type definitions */
typedef void (*code)(void);
typedef void undefined;
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint64_t undefined6;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef uint8_t byte;
typedef long double longdouble;
typedef unsigned long long ulonglong;

/* Ghidra helper macros */
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | ((uint32_t)(low) & 0xFFFFFFFF))
#define ROUND(x) ((x) >= 0 ? (int)((x) + 0.5) : (int)((x) - 0.5))

/* 10-byte opaque types (used for long double split operations) */
typedef struct {
    uint32_t low;
    uint32_t mid;
    uint16_t high;
} unkbyte10;

typedef unkbyte10 unkuint10;

/* External data references */
extern char DAT_00013298[];
extern char DAT_00013098[];
extern char DAT_000133b5[];
extern char DAT_000130d0[];
extern char DAT_000130e4[];

/* Test data arrays */
char DAT_0001312c[] = "=== DATA TYPES TEST ===\n";
char DAT_00013050[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
char DAT_00013070[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
char DAT_00013084[20] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
char DAT_00013098[20] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
char DAT_000133b0[4] = {0, 0, 0, 0};
char DAT_000130b8[24] = {1, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 0, 10, 11, 12, 0, 13, 14, 15, 0, 16, 17, 18, 0};
char DAT_000130d0[20] = {5, 10, 15, 20, 25, 1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
char DAT_000130e4[48] = {10, 20, 30, 40, 50, 0, 0, 0, 60, 70, 80, 90, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
char DAT_00013298[] = "=== ARRAY TYPES TEST ===\n";
char DAT_000133b5[] = "=== POINTER TYPES TEST ===\n";
char DAT_0001354f[] = "=== COMPOSITE TYPES TEST ===\n";

/* Helper functions for long double operations */
extern longdouble SUB104(longdouble, int);
extern char* _GLOBAL_OFFSET_TABLE_;

/* Forward declarations */
int binary_tree_sum(int *param_1, int extra1, int extra2, void **extra3);

/* Function forward declarations for usage before definition */
undefined4 double_value(void);
undefined4 complex_callback(void *param_1, void *param_2);

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000110ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000111e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000111ed */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: process_char @ 00011200 */

int process_char(char param_1)

{
 undefined1 local_5;
 
 if ((param_1 < 'A') || ('Z' < param_1)) {
 local_5 = param_1;
 }
 else {
 local_5 = param_1 + ' ';
 }
 return (int)local_5;
}



/* Function: process_short @ 00011240 */

int process_short(short param_1,short param_2)

{
 return (int)(short)(param_1 + param_2);
}



/* Function: process_int @ 00011260 */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}

/* Wrapper for struct_func_ptr callback */
void process_int_wrapper(int param_1)

{
 process_int(param_1);
}



/* Function: process_long @ 00011280 */

int process_long(int param_1)

{
 return param_1 << 1;
}



/* Function: process_ll @ 00011290 */

undefined8 process_ll(uint param_1)

{
 return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_1 * param_1 * 2,
 (int)((ulonglong)param_1 * (ulonglong)param_1));
}



/* Function: process_float @ 000112b0 */

longdouble process_float(float param_1)

{
 return (longdouble)0.5 + (longdouble)1.5 * (longdouble)param_1;
}



/* Function: process_double @ 000112e0 */

longdouble process_double(int mid, int high)

{
 return (longdouble)0.1 + (longdouble)((longdouble)high * 4294967296.0L + (longdouble)mid) / (longdouble)2.0;
}



/* Function: process_ld @ 00011310 */

longdouble process_ld(longdouble param_1, int mid, short high)

{
 return (longdouble)1 + param_1 * param_1;
}



/* Function: process_bool @ 00011330 */

bool process_bool(int param_1)

{
 bool local_5;
 
 local_5 = 0 < param_1 && param_1 % 2 == 0;
 return local_5;
}



/* Function: const_param @ 00011370 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 00011380 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 000113b0 */

void test_data_types_l1(void)

{
 char cVar1;
 byte bVar2;
 short sVar3;
 undefined4 uVar4;
 longdouble lVar5;
 unkbyte10 Var6;
 undefined6 uVar7;
 undefined4 local_10;
 undefined4 local_c;
 
 printf(&DAT_0001312c);
 cVar1 = process_char(0x41);
 printf("DT-L1-01 (process_char): %c\n",(int)cVar1);
 cVar1 = process_char(0x62);
 printf("DT-L1-01 (process_char): %c\n",(int)cVar1);
 sVar3 = process_short(100,200);
 printf("DT-L1-02 (process_short): %d\n",(int)sVar3);
 uVar4 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n",uVar4);
 uVar4 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n",uVar4);
 uVar7 = process_ll(100);
 printf("DT-L1-05 (process_ll): %lld\n",(ulonglong)uVar7);
 lVar5 = (longdouble)process_float(2.0f);
 printf("DT-L1-06 (process_float): %.2f\n",(double)lVar5);
 lVar5 = (longdouble)process_double(0,0x40100000);
 printf("DT-L1-07 (process_double): %.2f\n",(double)lVar5);
 lVar5 = (longdouble)3.0;
 {
   uint64_t temp64 = (uint64_t)lVar5;
   Var6.low = (uint32_t)temp64;
   Var6.mid = (uint32_t)(temp64 >> 32);
   Var6.high = (uint16_t)(temp64 >> 48);
   lVar5 = process_ld(lVar5, (int)Var6.mid, (short)Var6.high);
   Var6.low = (uint32_t)lVar5;
   Var6.mid = (uint32_t)((ulonglong)lVar5 >> 32);
   Var6.high = (uint16_t)((ulonglong)lVar5 >> 48);
 }
 printf("DT-L1-08 (process_ld): %.2Lf\n",(longdouble)Var6.low + (longdouble)Var6.mid * 4294967296.0L + (longdouble)Var6.high * 281474976710656.0L);
 bVar2 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n",(uint)(bVar2 & 1));
 bVar2 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n",(uint)(bVar2 & 1));
 bVar2 = process_bool(0xfffffffe);
 printf("DT-L1-09 (process_bool): %d\n",(uint)(bVar2 & 1));
 local_c = 5;
 uVar4 = const_param(&local_c);
 printf("DT-L1-10 (const_param): %d\n",uVar4);
 local_10 = 10;
 uVar4 = volatile_access(&local_10);
 printf("DT-L1-11 (volatile_access): %d\n",uVar4);
 return;
}



/* Function: array_1d_stack @ 00011640 */

int array_1d_stack(int param_1)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_8 = *(int *)(param_1 + local_c * 4) + local_8;
 }
 return local_8;
}



/* Function: array_string @ 00011690 */

int array_string(int param_1)

{
 undefined4 local_8;
 
 for (local_8 = 0; *(char *)(param_1 + local_8) != '\0'; local_8 = local_8 + 1) {
 }
 return local_8;
}



/* Function: array_2d_stack @ 000116d0 */

int array_2d_stack(int param_1)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < 10; local_c = local_c + 1) {
 local_8 = *(int *)(param_1 + local_c * 0x2c) + local_8;
 }
 return local_8;
}



/* Function: array_3d @ 00011720 */

int array_3d(int param_1)

{
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 undefined4 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < 5; local_c = local_c + 1) {
 for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
 for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
 local_8 = *(int *)(param_1 + local_c * 100 + local_10 * 0x14 + local_14 * 4) + local_8;
 }
 }
 }
 return local_8;
}



/* Function: array_vla @ 000117c0 */

int array_vla(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_8 = *(int *)(param_2 + local_c * 4) + local_8;
 }
 return local_8;
}



/* Function: array_pointer @ 00011810 */

int array_pointer(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_8 = *(int *)(param_1 + local_c * 0x28) + local_8;
 }
 return local_8;
}



/* Function: pointer_array @ 00011860 */

int pointer_array(int param_1,int param_2)

{
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_8;
 
 local_8 = 0;
 if (param_2 < 10) {
 local_14 = param_2;
 }
 else {
 local_14 = 10;
 }
 for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
 if (*(int *)(param_1 + local_10 * 4) != 0) {
 local_8 = **(int **)(param_1 + local_10 * 4) + local_8;
 }
 }
 return local_8;
}



/* Function: array_complex_index @ 000118f0 */

undefined4 array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 local_8;
 
 if ((((param_4 < 0) || (param_2 <= param_4)) || (param_5 < 0)) || (param_3 <= param_5)) {
 local_8 = 0xffffffff;
 }
 else {
 local_8 = *(undefined4 *)(param_1 + (param_5 * param_2 + param_4) * 4);
 }
 return local_8;
}



/* Function: array_oob @ 00011960 */

int array_oob(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c <= param_2; local_c = local_c + 1) {
 local_8 = *(int *)(param_1 + local_c * 4) + local_8;
 }
 return local_8;
}



/* Function: test_array_types @ 000119b0 */

void test_array_types(void)

{
 undefined4 uVar1;
 undefined4 *local_528;
 int local_524;
 int local_51c;
 int local_518 [20];
 undefined4 *local_4c8;
 undefined4 *local_4c4;
 undefined4 *local_4c0;
 undefined4 local_4bc;
 undefined4 local_4b8 [6];
 undefined4 local_4a0;
 undefined4 local_49c;
 undefined4 local_498;
 int local_494;
 int local_490 [50];
 undefined4 local_3c8;
 undefined4 local_3c4;
 undefined4 local_3c0;
 int local_3bc;
 int local_3b8;
 int local_3b4;
 undefined4 local_3b0 [125];
 int local_1bc;
 int local_1b8;
 int local_1b4 [100];
 char local_22 [4];
 char local_1e [2];
 undefined1 local_1c [20];
 
 printf(&DAT_00013298);
 memcpy(local_1c,&DAT_00013050,0x14);
 uVar1 = array_1d_stack(5);
 printf("ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_22[0] = 'h';
 local_22[1] = 'e';
 local_22[2] = 'l';
 local_22[3] = 'l';
 local_1e[0] = 'o';
 local_1e[1] = '\0';
 uVar1 = array_string(local_22);
 printf("ARR-L1-02 (array_string): %d\n",uVar1);
 for (local_1b8 = 0; local_1b8 < 10; local_1b8 = local_1b8 + 1) {
 for (local_1bc = 0; local_1bc < 10; local_1bc = local_1bc + 1) {
 if (local_1b8 == local_1bc) {
 local_524 = local_1b8;
 }
 else {
 local_524 = 0;
 }
 local_1b4[local_1b8 * 10 + local_1bc] = local_524;
 }
 }
 uVar1 = array_2d_stack(local_1b4);
 printf("ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 for (local_3b4 = 0; local_3b4 < 5; local_3b4 = local_3b4 + 1) {
 for (local_3b8 = 0; local_3b8 < 5; local_3b8 = local_3b8 + 1) {
 for (local_3bc = 0; local_3bc < 5; local_3bc = local_3bc + 1) {
 local_3b0[local_3b4 * 0x19 + local_3b8 * 5 + local_3bc] = 1;
 }
 }
 }
 uVar1 = array_3d(local_3b0);
 printf("ARR-L1-04 (array_3d): %d\n",uVar1);
 local_3c8 = 10;
 local_3c4 = 0x14;
 local_3c0 = 0x1e;
 uVar1 = array_vla(3,&local_3c8);
 printf("ARR-L2-01 (array_vla): %d\n",uVar1);
 for (local_494 = 0; local_494 < 5; local_494 = local_494 + 1) {
 local_490[local_494 * 10] = local_494 * 10;
 }
 uVar1 = array_pointer(local_490,5);
 printf("ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_498 = 10;
 local_49c = 0x14;
 local_4a0 = 0x1e;
 local_4c8 = &local_498;
 local_4c4 = &local_49c;
 local_4c0 = &local_4a0;
 local_4bc = 0;
 local_528 = local_4b8;
 do {
 *local_528 = 0;
 local_528 = local_528 + 1;
 } while (local_528 != &local_4a0);
 uVar1 = pointer_array(&local_4c8,3);
 printf("ARR-L2-03 (pointer_array): %d\n",uVar1);
 for (local_51c = 0; local_51c < 0x14; local_51c = local_51c + 1) {
 local_518[local_51c] = local_51c;
 }
 uVar1 = array_complex_index(local_518,5,4,2,3);
 printf("ARR-L2-04 (array_complex_index): %d\n",uVar1);
 return;
}



/* Function: ptr_single @ 00011e50 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00011e60 */

int ptr_double(undefined4 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00011e80 */

int ptr_triple(undefined4 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00011ea0 */

int ptr_increment(int *param_1,int param_2)

{
 int local_c;
 int local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_8 = *param_1 + local_8;
 param_1 = param_1 + 1;
 }
 return local_8;
}



/* Function: ptr_offset @ 00011ef0 */

undefined4 ptr_offset(int param_1,int param_2)

{
 return *(undefined4 *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 00011f10 */

int ptr_diff(int param_1,int param_2)

{
 return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 00011f30 */

int ptr_void(int *param_1,int param_2)

{
 undefined4 local_8;
 
 if (param_2 == 0) {
 local_8 = *param_1;
 }
 else if (param_2 == 1) {
 local_8 = (int)(char)*param_1;
 }
 else {
 local_8 = -1;
 }
 return local_8;
}



/* Function: ptr_const @ 00011f80 */

int ptr_const(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: ptr_const_ptr @ 00011fa0 */

int ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return *param_1;
}



/* Function: ptr_func_simple @ 00011fc0 */

undefined4 ptr_func_simple(code *param_1)

{
 (*param_1)();
 return 0;
}



/* Function: ptr_func_complex @ 00011ff0 */

undefined4 ptr_func_complex(code *param_1)

{
 undefined *local_10;
 
 local_10 = (undefined *)&DAT_000133b0;
 (*(code *)param_1)();
 return 0;
}



/* Function: ptr_cast @ 00012040 */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00012070 */

undefined4 opaque_handle_create(undefined4 param_1)

{
 return param_1;
}



/* Function: opaque_handle_op @ 00012080 */

int opaque_handle_op(int param_1)

{
 return param_1 << 1;
}



/* Function: test_pointer_types @ 00012090 */

void test_pointer_types(void)

{
 undefined4 uVar1;
 undefined4 local_7c;
 undefined4 local_78;
 undefined4 local_74;
 undefined4 local_70;
 undefined1 local_69;
 undefined4 local_68;
 undefined1 local_64 [16];
 undefined1 auStack_54 [4];
 undefined1 local_50 [20];
 undefined1 local_3c [20];
 undefined4 **local_28;
 undefined4 **local_24;
 undefined4 *local_20;
 undefined4 local_1c;
 undefined4 **local_18;
 undefined4 *local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 printf(&DAT_000133b5);
 local_c = 5;
 uVar1 = ptr_single(&local_c);
 printf("PTR-L2-01 (ptr_single): %d\n",uVar1);
 local_10 = 10;
 local_14 = &local_10;
 local_18 = &local_14;
 uVar1 = ptr_double(local_18);
 printf("PTR-L2-02 (ptr_double): %d\n",uVar1);
 local_1c = 5;
 local_20 = &local_1c;
 local_24 = &local_20;
 local_28 = &local_24;
 uVar1 = ptr_triple(local_28);
 printf("PTR-L2-03 (ptr_triple): %d\n",uVar1);
 memcpy(local_3c,&DAT_00013070,0x14);
 uVar1 = ptr_increment(local_3c,5);
 printf("PTR-L2-04 (ptr_increment): %d\n",uVar1);
 memcpy(local_50,&DAT_00013084,0x14);
 uVar1 = ptr_offset(local_50,2);
 printf("PTR-L2-05 (ptr_offset): %d\n",uVar1);
 memcpy(local_64,&DAT_00013098,0x14);
 uVar1 = ptr_diff(auStack_54,local_64);
 printf("PTR-L2-06 (ptr_diff): %d\n",uVar1);
 local_68 = 0x2a;
 local_69 = 0x41;
 uVar1 = ptr_void(&local_68,0);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar1);
 uVar1 = ptr_void(&local_69,1);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar1);
 local_70 = 10;
 uVar1 = ptr_const(&local_70);
 printf("PTR-L2-08 (ptr_const): %d\n",uVar1);
 local_74 = 10;
 uVar1 = ptr_const_ptr(&local_74);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",uVar1);
 uVar1 = ptr_func_simple((code *)(void *)double_value);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
 local_78 = 5;
 uVar1 = ptr_func_complex((code *)complex_callback);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 local_7c = 0x12345678;
 uVar1 = ptr_cast(&local_7c);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",uVar1);
 uVar1 = opaque_handle_create(10);
 uVar1 = opaque_handle_op(uVar1);
 printf("PTR-L2-13 (opaque_handle_op): %d\n",uVar1);
 return;
}



/* Function: double_value @ 000123c0 */

undefined4 double_value(void)

{
 return 1;
}



/* Function: complex_callback @ 000123d0 */

undefined4 complex_callback(void *param_1,void *param_2)

{
 return param_2 != (void *)0x0 ? 1 : 0;
}



/* Function: struct_simple @ 00012400 */

int struct_simple(int *param_1)

{
 return *param_1 + param_1[1] + param_1[2];
}



/* Function: struct_array @ 00012420 */

int struct_array(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_8 = *(int *)(param_1 + local_c * 0xc) + *(int *)(param_1 + local_c * 0xc + 4) +
 *(int *)(param_1 + local_c * 0xc + 8) + local_8;
 }
 return local_8;
}



/* Function: struct_nested @ 00012490 */

int struct_nested(int *param_1)

{
 return *param_1 + param_1[3];
}



/* Function: struct_deep @ 000124b0 */

int struct_deep(int param_1)

{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}



/* Function: struct_with_ptr @ 000124d0 */

int struct_with_ptr(int *param_1)

{
 int local_c;
 
 if (param_1[1] == 0) {
 local_c = 0;
 }
 else {
 local_c = *(int *)param_1[1];
 }
 return *param_1 + local_c;
}



/* Function: struct_bitfields @ 00012520 */

short struct_bitfields(ushort *param_1)

{
 return (*param_1 & 1) + (*param_1 >> 1 & 3) + (*param_1 >> 3 & 7) + (*param_1 >> 6);
}



/* Function: union_type @ 00012570 */

float union_type(float *param_1,int param_2)

{
 undefined4 local_8;
 
 if (param_2 == 0) {
 local_8 = *param_1;
 }
 else if (param_2 == 1) {
 local_8 = (float)(int)ROUND(*param_1);
 }
 else {
 local_8 = (float)(int)*(char *)param_1;
 }
 return local_8;
}



/* Function: union_array @ 000125e0 */

int union_array(int param_1,int param_2)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_8 = *(int *)(param_1 + local_c * 4) + local_8;
 }
 return local_8;
}



/* Function: enum_type @ 00012630 */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 00012640 */

undefined4 enum_switch(undefined4 param_1)

{
 undefined4 local_8;
 
 switch(param_1) {
 case 0:
 local_8 = 0;
 break;
 case 1:
 local_8 = 100;
 break;
 case 2:
 local_8 = 0x32;
 break;
 case 3:
 local_8 = 0xffffffff;
 break;
 default:
 local_8 = 0xffffff9d;
 }
 return local_8;
}



/* Function: struct_func_ptr @ 000126c0 */

void struct_func_ptr(void *param_1)

{
 (*(code *)param_1)();
 return;
}



/* Function: linked_list @ 000126f0 */

int linked_list(int *param_1)

{
 int *local_c;
 int local_8;
 
 local_8 = 0;
 for (local_c = param_1; local_c != (int *)0x0; local_c = (int *)local_c[1]) {
 local_8 = *local_c + local_8;
 }
 return local_8;
}



/* Function: doubly_linked_list @ 00012740 */

int doubly_linked_list(int *param_1)

{
 int *local_c;
 int local_8;
 
 local_8 = 0;
 for (local_c = param_1; local_c != (int *)0x0; local_c = (int *)local_c[1]) {
 local_8 = *local_c + local_8;
 }
 return local_8;
}



/* Function: binary_tree_sum @ 00012790 */

int binary_tree_sum(int *param_1, int extra1, int extra2, void **extra3)

{
 undefined **ppuVar1;
 int iVar2;
 int local_c;
 
 (void)extra1;
 (void)extra2;
 (void)extra3;
 ppuVar1 = &_GLOBAL_OFFSET_TABLE_;
 if (param_1 == (int *)0x0) {
 local_c = 0;
 }
 else {
 iVar2 = *param_1;
 local_c = binary_tree_sum(param_1[1], 0, 0, ppuVar1);
 local_c = iVar2 + local_c;
 iVar2 = binary_tree_sum(param_1[2],iVar2,local_c,ppuVar1);
 local_c = local_c + iVar2;
 }
 return local_c;
}



/* Function: binary_tree @ 00012810 */

void binary_tree(int *param_1)

{
 binary_tree_sum(param_1, 0, 0, &_GLOBAL_OFFSET_TABLE_);
 return;
}



/* Function: graph_traverse @ 00012840 */

int graph_traverse(int param_1)

{
 int *local_10;
 int local_c;
 int local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < *(int *)(param_1 + 0x28); local_c = local_c + 1) {
 for (local_10 = *(int **)(param_1 + local_c * 4); local_10 != (int *)0x0;
 local_10 = (int *)local_10[1]) {
 local_8 = *local_10 + local_8;
 }
 }
 return local_8;
}



/* Function: test_composite_types @ 000128b0 */

void test_composite_types(void)

{
 undefined4 uVar1;
 undefined4 *local_124;
 undefined4 local_120;
 undefined4 local_11c;
 undefined4 local_118;
 undefined4 local_114;
 undefined4 local_110;
 undefined4 local_10c;
 undefined4 local_108;
 undefined4 local_104;
 undefined4 local_100;
 undefined4 local_fc;
 undefined4 local_f4;
 undefined4 local_f0;
 undefined4 local_ec;
 undefined4 local_e8;
 undefined4 local_e4;
 undefined4 local_dc;
 undefined4 *local_d8;
 undefined4 local_d4;
 undefined4 local_d0;
 undefined4 local_cc;
 undefined4 *local_c8;
 undefined4 *local_c4;
 undefined4 *local_c0;
 undefined4 local_bc;
 undefined4 *local_b8;
 undefined4 local_b4;
 undefined4 local_b0;
 undefined4 local_ac;
 code *local_a8;
 undefined4 local_a4;
 undefined4 local_a0;
 undefined4 local_9c;
 undefined4 local_94 [2];
 undefined4 local_8c;
 undefined4 local_88;
 undefined4 local_84;
 undefined4 *local_80;
 undefined4 local_7c;
 undefined4 local_78;
 undefined1 local_74 [48];
 undefined1 local_44 [24];
 undefined1 local_2c [24];
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 printf(&DAT_0001354f);
 local_14 = 1;
 local_10 = 2;
 local_c = 3;
 uVar1 = struct_simple(&local_14);
 printf("CMP-L2-01 (struct_simple): %d\n",uVar1);
 memcpy(local_2c,&DAT_000130b8,0x18);
 uVar1 = struct_array(local_2c,2);
 printf("CMP-L2-02 (struct_array): %d\n",uVar1);
 memcpy(local_44,&DAT_000130d0,0x14);
 uVar1 = struct_nested(local_44);
 printf("CMP-L2-03 (struct_nested): %d\n",uVar1);
 memcpy(local_74,&DAT_000130e4,0x30);
 uVar1 = struct_deep(local_74);
 printf("CMP-L2-04 (struct_deep): %d\n",uVar1);
 local_7c = 0x14;
 local_78 = 0;
 local_84 = 10;
 local_80 = &local_7c;
 uVar1 = struct_with_ptr(&local_84);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_8c = 0x191d;
 local_88 = 0;
 uVar1 = struct_bitfields(&local_8c);
 printf("CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 local_94[0] = 0x12345678;
 uVar1 = union_type(local_94,0);
 printf("CMP-L2-07 (union_type): %d\n",uVar1);
 local_a4 = 10;
 local_a0 = 0x14;
 local_9c = 0x1e;
 uVar1 = union_array(&local_a4,3);
 printf("CMP-L2-08 (union_array): %d\n",uVar1);
 uVar1 = enum_type(1);
 printf("CMP-L2-09 (enum_type): %d\n",uVar1);
 uVar1 = enum_switch(2);
 printf("CMP-L2-10 (enum_switch): %d\n",uVar1);
local_ac = 10;
local_a8 = process_int_wrapper;
struct_func_ptr(&local_ac);
printf("CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
 local_c4 = 10;
 local_c0 = &local_bc;
 local_bc = 0x14;
 local_b8 = &local_b4;
 local_b4 = 0x1e;
 local_b0 = 0;
 uVar1 = linked_list(&local_c4);
 printf("CMP-L2-12 (linked_list): %d\n",(int)uVar1);
 local_dc = 10;
 local_d4 = 0;
 local_d0 = 0x14;
 local_cc = 0;
 local_c8 = &local_dc;
 local_d8 = &local_d0;
 uVar1 = doubly_linked_list(&local_dc);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",(int)uVar1);
local_ec = 100;
local_e8 = 0;
local_e4 = 0;
binary_tree(&local_ec);
printf("CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_f4 = 1;
 local_f0 = 0;
 local_100 = 0;
 local_104 = 0;
 local_108 = 0;
 local_10c = 0;
 local_110 = 0;
 local_114 = 0;
 local_118 = 0;
 local_11c = 0;
 local_120 = 0;
 local_fc = 2;
 local_124 = &local_f4;
 uVar1 = graph_traverse(&local_124);
 printf("CMP-L2-15 (graph_traverse): %d\n",uVar1);
 return;
}



/* Function: main @ 00012dd0 */

undefined4 main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
