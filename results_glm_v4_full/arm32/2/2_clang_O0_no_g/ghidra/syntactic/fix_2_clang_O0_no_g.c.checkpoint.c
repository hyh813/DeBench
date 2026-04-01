/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/2/2_clang_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */


#include <stdbool.h>
#include <string.h>
#include <stdio.h>

typedef unsigned char byte;
typedef unsigned short ushort;
typedef unsigned short undefined2;
typedef unsigned int uint;
typedef unsigned long long undefined8;
typedef unsigned long long ulonglong;
typedef unsigned int undefined4;
typedef void *code;
typedef void undefined;
typedef unsigned char undefined1;
typedef long long longlong;

/* Ghidra helper macros for arithmetic flag detection */
static inline uint CARRY4(uint a, uint b) {
    ulonglong sum = (ulonglong)a + (ulonglong)b;
    return (uint)(sum >> 32);
}

static inline bool SBORROW4(uint a, uint b) {
    return ((int)a < (int)b);
}

static inline bool SCARRY4(uint a, uint b) {
    return ((int)a > 0 && (int)b > 0 && (int)(a + b) < 0) ||
           ((int)a < 0 && (int)b < 0 && (int)(a + b) > 0);
}

static inline bool SUB41(uint a, uint b) {
    return (int)(a - b) < 0;
}

static inline ulonglong CONCAT44(uint hi, uint lo) {
    return ((ulonglong)hi << 32) | (ulonglong)lo;
}

static inline uint LZCOUNT(uint x) {
    if (x == 0) return 32;
    return __builtin_clz(x);
}

/* Forward declarations for floating-point functions */
ulonglong FUN_000122d0(int param_1, uint param_2, int param_3, uint param_4);
uint __mulsf3(uint param_1, uint param_2);
ulonglong __adddf3(uint param_1, uint param_2, uint param_3, uint param_4, undefined4 param_5, undefined4 param_6);
ulonglong __extendsfdf2(uint param_1, undefined4 param_2, undefined4 param_3, uint param_4);
ulonglong __muldf3(undefined4 param_1, uint param_2, uint param_3, uint param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8);
ulonglong __divdf3(undefined4 param_1, uint param_2, uint param_3, uint param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8);
uint __addsf3(uint param_1, uint param_2, undefined4 param_3, uint param_4, undefined4 param_5, undefined4 param_6);
ulonglong __subdf3(uint param_1, uint param_2, uint param_3, uint param_4, undefined4 param_5, undefined4 param_6);
ulonglong FUN_00012a94(int param_1, uint param_2, int param_3, uint param_4);
ulonglong FUN_00012cb4(int param_1, uint param_2, int param_3, uint param_4);
uint __fixsfsi(uint param_1);

/* Function: process_char @ 000105a4 */

byte process_char(byte param_1)

{
 byte local_1;
 
 local_1 = param_1;
 if ((0x40 < param_1) && (param_1 < 0x5b)) {
 local_1 = param_1 + 0x20;
 }
 return local_1;
}



/* Function: process_short @ 000105f4 */

int process_short(ushort param_1,ushort param_2)

{
 return (int)(((uint)param_1 + (uint)param_2) * 0x10000) >> 0x10;
}



/* Function: process_int @ 0001061c */

uint process_int(int param_1)

{
 return param_1 << 1 | 1;
}



/* Function: process_long @ 00010638 */

int process_long(int param_1)

{
 return param_1 << 1;
}



/* Function: process_ll @ 00010650 */

undefined8 process_ll(uint param_1,int param_2)

{
 return CONCAT44(param_1 * param_2 +
 param_1 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20),
 (int)((ulonglong)param_1 * (ulonglong)param_1));
}



/* Function: process_float @ 00010678 */

void process_float(undefined4 param_1)

{
 undefined4 uVar1;
 
 uVar1 = __mulsf3(param_1,0x3fc00000);
 uVar1 = __addsf3(uVar1,0x3f000000, 0, 0, 0, 0);
 return;
}



/* Function: process_double @ 000106a8 */

undefined8 process_double(undefined4 param_1,undefined4 param_2)

{
 undefined8 uVar1;
 
 uVar1 = __divdf3(param_1,param_2,0,0x40000000,0,0,0,0);
 uVar1 = __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20), 0, 0, 0, 0);
 return uVar1;
}



/* Function: process_ld @ 000106f0 */

undefined8 process_ld(undefined4 param_1,undefined4 param_2)

{
 undefined8 uVar1;
 
 uVar1 = __muldf3(param_1,param_2,0,0,0,0,0,0);
 uVar1 = __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20), 0, 0, 0, 0);
 return uVar1;
}



/* Function: process_bool @ 00010734 */

bool process_bool(int param_1)

{
 return 0 < param_1 && param_1 % 2 == 0;
}



/* Function: const_param @ 00010784 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 000107a0 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 000107d4 */

static const char DAT_0001306c[] = "=== Data Types Tests ===\n";
static const char DAT_000131d8[] = "=== Array Types Tests ===\n";
static const char DAT_000132f0[] = "Data: %d\n";
static const char DAT_000132f5[] = "=== Pointer Types Tests ===\n";
static const char DAT_0001348f[] = "=== Composite Types Tests ===\n";

void test_data_types_l1(void)

{
 undefined4 uVar1;
 undefined8 uVar2;
 undefined4 local_10;
 undefined4 local_c;
 
 printf(DAT_0001306c);
 uVar1 = process_char(0x41);
 printf("DT-L1-01 (process_char): %c\n",uVar1);
 uVar1 = process_char(0x62);
 printf("DT-L1-01 (process_char): %c\n",uVar1);
 uVar1 = process_short(100,200);
 printf("DT-L1-02 (process_short): %d\n",uVar1);
 uVar1 = process_int(100);
 printf("DT-L1-03 (process_int): %d\n",uVar1);
 uVar1 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n",uVar1);
 uVar2 = process_ll(100, 2);
 uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
 printf("DT-L1-05 (process_ll): %lld\n",uVar1,(int)uVar2,uVar1);
 process_float(0x40000000);
 uVar2 = __extendsfdf2(0x40000000, 0, 0, 0);
 uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
 printf("DT-L1-06 (process_float): %.2f\n",uVar1,(int)uVar2,uVar1);
 uVar2 = process_double(0,0x40100000);
 uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
 printf("DT-L1-07 (process_double): %.2f\n",uVar1,(int)uVar2,uVar1);
 uVar2 = process_ld(0,0x40080000);
 uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
 printf("DT-L1-08 (process_ld): %.2Lf\n",uVar1,(int)uVar2,uVar1);
 uVar1 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n",uVar1);
 uVar1 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n",uVar1);
 uVar1 = process_bool(0xfffffffe);
 printf("DT-L1-09 (process_bool): %d\n",uVar1);
 local_c = 5;
 uVar1 = const_param(&local_c);
 printf("DT-L1-10 (const_param): %d\n",uVar1);
 local_10 = 10;
 uVar1 = volatile_access(&local_10);
 printf("DT-L1-11 (volatile_access): %d\n",uVar1);
 return;
}



/* Function: array_1d_stack @ 000109bc */

int array_1d_stack(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_c = 0;
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 local_c = local_c + *(int *)(param_1 + local_10 * 4);
 }
 return local_c;
}



/* Function: array_string @ 00010a24 */

int array_string(int param_1)

{
 undefined4 local_8;
 
 for (local_8 = 0; *(char *)(param_1 + local_8) != '\0'; local_8 = local_8 + 1) {
 }
 return local_8;
}



/* Function: array_2d_stack @ 00010a6c */

int array_2d_stack(int param_1)

{
 undefined4 local_c;
 undefined4 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < 10; local_c = local_c + 1) {
 local_8 = local_8 + *(int *)(param_1 + local_c * 0x2c);
 }
 return local_8;
}



/* Function: array_3d @ 00010ad4 */

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
 local_8 = local_8 + *(int *)(local_c * 100 + param_1 + local_10 * 0x14 + local_14 * 4);
 }
 }
 }
 return local_8;
}



/* Function: array_vla @ 00010bac */

int array_vla(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_c = 0;
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 local_c = local_c + *(int *)(param_2 + local_10 * 4);
 }
 return local_c;
}



/* Function: array_pointer @ 00010c14 */

int array_pointer(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_c = 0;
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 local_c = local_c + *(int *)(param_1 + local_10 * 0x28);
 }
 return local_c;
}



/* Function: pointer_array @ 00010c80 */

int pointer_array(int param_1,int param_2)

{
 undefined4 local_18;
 undefined4 local_14;
 undefined4 local_c;
 
 local_c = 0;
 local_18 = param_2;
 if (9 < param_2) {
 local_18 = 10;
 }
 for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
 if (*(int *)(param_1 + local_14 * 4) != 0) {
 local_c = local_c + **(int **)(param_1 + local_14 * 4);
 }
 }
 return local_c;
}



/* Function: array_complex_index @ 00010d3c */

undefined4 array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 local_4;
 
 if ((((param_4 < 0) || (param_2 <= param_4)) || (param_5 < 0)) || (param_3 <= param_5)) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = *(undefined4 *)(param_1 + (param_5 * param_2 + param_4) * 4);
 }
 return local_4;
}



/* Function: array_oob @ 00010dd4 */

int array_oob(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_c = 0;
 for (local_10 = 0; local_10 <= param_2; local_10 = local_10 + 1) {
 local_c = local_c + *(int *)(param_1 + local_10 * 4);
 }
 return local_c;
}



/* Function: test_array_types @ 00010e3c */

void test_array_types(void)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 undefined4 *local_534;
 int local_530;
 int local_52c;
 int aiStack_528 [20];
 undefined4 *local_4d8;
 undefined4 *local_4d4;
 undefined4 *local_4d0;
 undefined4 local_4cc;
 undefined4 auStack_4c8 [6];
 undefined4 local_4b0;
 undefined4 local_4ac;
 undefined4 local_4a8;
 int local_4a4;
 int aiStack_4a0 [50];
 undefined4 local_3d8;
 undefined4 local_3d4;
 undefined4 local_3d0;
 int local_3cc;
 int local_3c8;
 int local_3c4;
 undefined4 auStack_3c0 [125];
 int local_1cc;
 int local_1c8;
 int aiStack_1c4 [100];
 undefined4 local_34;
 undefined2 local_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined4 uStack_1c;
 
 printf(&DAT_000131d8);
 local_2c = 1;
 uStack_28 = 2;
 uStack_24 = 3;
 uStack_20 = 4;
 uStack_1c = 5;
 uVar1 = array_1d_stack(&local_2c,5);
 printf("ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_30 = 0x6f;
 local_34 = 0x6c6c6568;
 uVar1 = array_string(&local_34);
 printf("ARR-L1-02 (array_string): %d\n",uVar1);
 for (local_1c8 = 0; local_1c8 < 10; local_1c8 = local_1c8 + 1) {
 for (local_1cc = 0; local_1cc < 10; local_1cc = local_1cc + 1) {
 if (local_1c8 == local_1cc) {
 local_530 = local_1c8;
 }
 else {
 local_530 = 0;
 }
 aiStack_1c4[local_1c8 * 10 + local_1cc] = local_530;
 }
 }
 uVar1 = array_2d_stack(aiStack_1c4);
 printf("ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 for (local_3c4 = 0; local_3c4 < 5; local_3c4 = local_3c4 + 1) {
 for (local_3c8 = 0; local_3c8 < 5; local_3c8 = local_3c8 + 1) {
 for (local_3cc = 0; local_3cc < 5; local_3cc = local_3cc + 1) {
 auStack_3c0[local_3c4 * 0x19 + local_3c8 * 5 + local_3cc] = 1;
 }
 }
 }
 uVar1 = array_3d(auStack_3c0);
 printf("ARR-L1-04 (array_3d): %d\n",uVar1);
 local_3d4 = 0x14;
 local_3d0 = 0x1e;
 local_3d8 = 10;
 uVar1 = array_vla(3,&local_3d8);
 printf("ARR-L2-01 (array_vla): %d\n",uVar1);
 for (local_4a4 = 0; local_4a4 < 5; local_4a4 = local_4a4 + 1) {
 aiStack_4a0[local_4a4 * 10] = local_4a4 * 10;
 }
 uVar1 = array_pointer(aiStack_4a0,5);
 printf("ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_4a8 = 10;
 local_4ac = 0x14;
 local_4b0 = 0x1e;
 local_4d8 = &local_4a8;
 local_4d4 = &local_4ac;
 local_4d0 = &local_4b0;
 local_4cc = 0;
 local_534 = auStack_4c8;
 do {
 puVar2 = local_534 + 1;
 *local_534 = 0;
 local_534 = puVar2;
 } while (puVar2 != &local_4b0);
 uVar1 = pointer_array(&local_4d8,3);
 printf("ARR-L2-03 (pointer_array): %d\n",uVar1);
 for (local_52c = 0; local_52c < 0x14; local_52c = local_52c + 1) {
 aiStack_528[local_52c] = local_52c;
 }
 uVar1 = array_complex_index(aiStack_528,5,4,2,3);
 printf("ARR-L2-04 (array_complex_index): %d\n",uVar1);
 return;
}



/* Function: ptr_single @ 0001121c */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00011238 */

int ptr_double(undefined4 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00011258 */

int ptr_triple(undefined4 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 0001127c */

int ptr_increment(int *param_1,int param_2)

{
 int local_10;
 int local_c;
 int *local_4;
 
 local_c = 0;
 local_4 = param_1;
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 local_c = local_c + *local_4;
 local_4 = local_4 + 1;
 }
 return local_c;
}



/* Function: ptr_offset @ 000112ec */

undefined4 ptr_offset(int param_1,int param_2)

{
 return *(undefined4 *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 0001130c */

int ptr_diff(int param_1,int param_2)

{
 return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 00011330 */

uint ptr_void(uint *param_1,int param_2)

{
 undefined4 local_4;
 
 if (param_2 == 0) {
 local_4 = *param_1;
 }
 else if (param_2 == 1) {
 local_4 = (uint)(byte)*param_1;
 }
 else {
 local_4 = 0xffffffff;
 }
 return local_4;
}



/* Function: ptr_const @ 00011398 */

int ptr_const(int *param_1)

{
 return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 000113b4 */

int ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return *param_1;
}



/* Function: ptr_func_simple @ 000113dc */

void ptr_func_simple(code *param_1,undefined4 param_2)

{
 ((void (*)(int))*param_1)(param_2);
 return;
}

int double_value(int param_1);
bool complex_callback(int *param_1,int *param_2);

/* Function: ptr_func_complex @ 0001140c */

void ptr_func_complex(code *param_1,undefined4 param_2)

{
 undefined *local_18;
 undefined4 local_14;
 undefined4 local_10;
 code *local_c;
 
 local_14 = 0;
 local_18 = &DAT_000132f0;
 local_10 = param_2;
 local_c = param_1;
 ((bool (*)(int, undefined**))param_1)(param_2,(undefined**)&local_18);
 return;
}



/* Function: ptr_cast @ 00011464 */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00011494 */

undefined4 opaque_handle_create(undefined4 param_1)

{
 return param_1;
}



/* Function: opaque_handle_op @ 000114a8 */

int opaque_handle_op(int param_1)

{
 return param_1 << 1;
}



/* Function: test_pointer_types @ 000114c0 */

void test_pointer_types(void)

{
 undefined4 uVar1;
 undefined4 local_8c;
 undefined4 local_88;
 undefined4 local_84;
 undefined4 local_80;
 undefined1 local_79;
 undefined4 local_78;
 undefined4 local_74;
 undefined4 uStack_70;
 undefined4 uStack_6c;
 undefined4 uStack_68;
 undefined4 uStack_64;
 undefined4 local_60;
 undefined4 uStack_5c;
 undefined4 uStack_58;
 undefined4 uStack_54;
 undefined4 uStack_50;
 undefined4 local_4c;
 undefined4 uStack_48;
 undefined4 uStack_44;
 undefined4 uStack_40;
 undefined4 uStack_3c;
 undefined4 **local_38;
 undefined4 **local_34;
 undefined4 *local_30;
 undefined4 local_2c;
 undefined4 **local_28;
 undefined4 *local_24;
 undefined4 local_20;
 undefined4 local_1c;
 
 printf(&DAT_000132f5);
 local_1c = 5;
 uVar1 = ptr_single(&local_1c);
 printf("PTR-L2-01 (ptr_single): %d\n",uVar1);
 local_20 = 10;
 local_24 = &local_20;
 local_28 = &local_24;
 uVar1 = ptr_double(local_28);
 printf("PTR-L2-02 (ptr_double): %d\n",uVar1);
 local_2c = 5;
 local_30 = &local_2c;
 local_34 = &local_30;
 local_38 = &local_34;
 uVar1 = ptr_triple(local_38);
 printf("PTR-L2-03 (ptr_triple): %d\n",uVar1);
 local_4c = 1;
 uStack_48 = 2;
 uStack_44 = 3;
 uStack_40 = 4;
 uStack_3c = 5;
 uVar1 = ptr_increment(&local_4c,5);
 printf("PTR-L2-04 (ptr_increment): %d\n",uVar1);
 local_60 = 10;
 uStack_5c = 0x14;
 uStack_58 = 0x1e;
 uStack_54 = 0x28;
 uStack_50 = 0x32;
 uVar1 = ptr_offset(&local_60,2);
 printf("PTR-L2-05 (ptr_offset): %d\n",uVar1);
 local_74 = 0;
 uStack_70 = 10;
 uStack_6c = 0x14;
 uStack_68 = 0x1e;
 uStack_64 = 0x28;
 uVar1 = ptr_diff(&uStack_64, &uStack_70);
 printf("PTR-L2-06 (ptr_diff): %d\n",uVar1);
 local_78 = 0x2a;
 local_79 = 0x41;
 uVar1 = ptr_void(&local_78,0);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar1);
 uVar1 = ptr_void(&local_79,1);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar1);
 local_80 = 10;
 uVar1 = ptr_const(&local_80);
 printf("PTR-L2-08 (ptr_const): %d\n",uVar1);
 local_84 = 10;
 uVar1 = ptr_const_ptr(&local_84);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",uVar1);
 uVar1 = double_value(5);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
 local_88 = 5;
 uVar1 = complex_callback(&local_88, &local_88);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 local_8c = 0x12345678;
 uVar1 = ptr_cast(&local_8c);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",uVar1);
 uVar1 = opaque_handle_create(10);
 uVar1 = opaque_handle_op(uVar1);
 printf("PTR-L2-13 (opaque_handle_op): %d\n",uVar1);
 return;
}



/* Function: double_value @ 00011768 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: complex_callback @ 00011780 */

bool complex_callback(int *param_1,int *param_2)

{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}



/* Function: struct_simple @ 000117b4 */

int struct_simple(int *param_1)

{
 return *param_1 + param_1[1] + param_1[2];
}



/* Function: struct_array @ 000117dc */

int struct_array(int param_1,int param_2)

{
 int *piVar1;
 int local_10;
 int local_c;
 
 local_c = 0;
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 piVar1 = (int *)(param_1 + local_10 * 0xc);
 local_c = local_c + *piVar1 + piVar1[1] + piVar1[2];
 }
 return local_c;
}



/* Function: struct_nested @ 00011858 */

int struct_nested(int *param_1)

{
 return *param_1 + param_1[3];
}



/* Function: struct_deep @ 00011878 */

int struct_deep(int param_1)

{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}



/* Function: struct_with_ptr @ 00011898 */

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



/* Function: struct_bitfields @ 000118f0 */

short struct_bitfields(ushort *param_1)

{
 ushort uVar1;
 
 uVar1 = *param_1;
 return (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7) + (uVar1 >> 6);
}



/* Function: union_type @ 00011928 */

uint union_type(uint *param_1,int param_2)

{
 undefined4 local_c;
 
 if (param_2 == 0) {
 local_c = *param_1;
 }
 else if (param_2 == 1) {
 local_c = __fixsfsi(*param_1);
 }
 else {
 local_c = (uint)(byte)*param_1;
 }
 return local_c;
}



/* Function: union_array @ 000119a0 */

int union_array(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_c = 0;
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 local_c = local_c + *(int *)(param_1 + local_10 * 4);
 }
 return local_c;
}



/* Function: enum_type @ 00011a08 */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 00011a24 */

undefined4 enum_switch(undefined4 param_1)

{
 undefined4 local_4;
 
 switch(param_1) {
 case 0:
 local_4 = 0;
 break;
 case 1:
 local_4 = 100;
 break;
 case 2:
 local_4 = 0x32;
 break;
 case 3:
 local_4 = 0xffffffff;
 break;
 default:
 local_4 = 0xffffff9d;
 }
 return local_4;
}



/* Function: struct_func_ptr @ 00011aa4 */

void struct_func_ptr(undefined4 *param_1)

{
 ((void (*)(int))param_1[1])(*param_1);
 return;
}



/* Function: linked_list @ 00011ad4 */

int linked_list(int *param_1)

{
 int *local_c;
 int local_8;
 
 local_8 = 0;
 for (local_c = param_1; local_c != (int *)0x0; local_c = (int *)local_c[1]) {
 local_8 = local_8 + *local_c;
 }
 return local_8;
}



/* Function: doubly_linked_list @ 00011b30 */

int doubly_linked_list(int *param_1)

{
 int *local_c;
 int local_8;
 
 local_8 = 0;
 for (local_c = param_1; local_c != (int *)0x0; local_c = (int *)local_c[1]) {
 local_8 = local_8 + *local_c;
 }
 return local_8;
}



/* Function: binary_tree_sum @ 00011b8c */

int binary_tree_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 int local_c;
 
 if (param_1 == (int *)0x0) {
 local_c = 0;
 }
 else {
 iVar2 = *param_1;
 iVar1 = binary_tree_sum(param_1[1]);
 local_c = binary_tree_sum(param_1[2]);
 local_c = iVar2 + iVar1 + local_c;
 }
 return local_c;
}



/* Function: binary_tree @ 00011c0c */

int binary_tree(undefined4 param_1)

{
 return binary_tree_sum(param_1);
}



/* Function: graph_traverse @ 00011c30 */

int graph_traverse(int param_1)

{
 int *local_10;
 int local_c;
 int local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < *(int *)(param_1 + 0x28); local_c = local_c + 1) {
 for (local_10 = *(int **)(param_1 + local_c * 4); local_10 != (int *)0x0;
 local_10 = (int *)local_10[1]) {
 local_8 = local_8 + *local_10;
 }
 }
 return local_8;
}



/* Function: test_composite_types @ 00011cc8 */

void test_composite_types(void)

{
 undefined4 uVar1;
 undefined4 *local_120 [10];
 undefined4 local_f8;
 undefined4 local_f4;
 undefined4 local_f0;
 undefined4 local_ec;
 undefined4 local_e8;
 undefined4 local_e4;
 undefined4 local_e0;
 undefined4 *local_dc;
 undefined4 local_d8;
 undefined4 local_d4;
 undefined4 local_d0;
 undefined4 *local_cc;
 undefined4 local_c8;
 undefined4 *local_c4;
 undefined4 local_c0;
 undefined4 *local_bc;
 undefined4 local_b8;
 undefined4 local_b4;
 undefined4 local_b0;
 code *local_ac;
 undefined4 local_a8;
 undefined4 local_a4;
 undefined4 local_a0;
 undefined4 local_9c;
 undefined4 local_98;
 undefined4 local_94;
 undefined4 local_90;
 undefined4 *local_8c;
 undefined4 local_88;
 undefined4 local_84;
 undefined4 local_80;
 undefined4 uStack_7c;
 undefined4 uStack_78;
 undefined4 uStack_74;
 undefined4 uStack_70;
 undefined4 uStack_6c;
 undefined4 local_68;
 undefined4 uStack_64;
 undefined4 uStack_60;
 undefined4 uStack_5c;
 undefined4 uStack_58;
 undefined4 uStack_54;
 undefined4 local_50;
 undefined4 uStack_4c;
 undefined4 uStack_48;
 undefined4 uStack_44;
 undefined4 uStack_40;
 undefined4 local_3c;
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 uStack_2c;
 undefined4 uStack_28;
 undefined4 local_24;
 undefined4 local_20;
 undefined4 local_1c;
 
 printf(&DAT_0001348f);
 local_20 = 2;
 local_1c = 3;
 local_24 = 1;
 uVar1 = struct_simple(&local_24);
 printf("CMP-L2-01 (struct_simple): %d\n",uVar1);
 local_3c = 1;
 uStack_38 = 1;
 uStack_34 = 1;
 uStack_30 = 2;
 uStack_2c = 2;
 uStack_28 = 2;
 uVar1 = struct_array(&local_3c, 2);
 printf("CMP-L2-02 (struct_array): %d\n",uVar1);
 local_50 = 5;
 uStack_4c = 10;
 uStack_48 = 0;
 uStack_44 = 100;
 uStack_40 = 200;
 uVar1 = struct_nested(&local_50);
 printf("CMP-L2-03 (struct_nested): %d\n",uVar1);
 local_80 = 1;
 uStack_7c = 2;
 uStack_78 = 3;
 uStack_74 = 10;
 uStack_70 = 0x14;
 uStack_6c = 0xff;
 local_68 = 0;
 uStack_64 = 0;
 uStack_60 = 0;
 uStack_5c = 0;
 uStack_58 = 0xff;
 uStack_54 = 0x2a;
 uVar1 = struct_deep(&local_80);
 printf("CMP-L2-04 (struct_deep): %d\n",uVar1);
 local_84 = 0;
 local_88 = 0x14;
 local_90 = 10;
 local_8c = &local_88;
 uVar1 = struct_with_ptr(&local_90);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_94 = 0;
 local_98 = 0x191d;
 uVar1 = struct_bitfields(&local_98);
 printf("CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 local_9c = 0x12345678;
 uVar1 = union_type(&local_9c, 0);
 printf("CMP-L2-07 (union_type): %d\n",uVar1);
 local_a4 = 0x14;
 local_a0 = 0x1e;
 local_a8 = 10;
 uVar1 = union_array(&local_a8,3);
 printf("CMP-L2-08 (union_array): %d\n",uVar1);
 uVar1 = enum_type(1);
 printf("CMP-L2-09 (enum_type): %d\n",uVar1);
 uVar1 = enum_switch(2);
 printf("CMP-L2-10 (enum_switch): %d\n",uVar1);
 local_ac = process_int;
 local_b0 = 10;
 ((void (*)(int))local_ac)(local_b0);
 uVar1 = local_b0;
 printf("CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
 local_c8 = 10;
 local_c4 = &local_c0;
 local_c0 = 0x14;
 local_bc = &local_b8;
 local_b8 = 0x1e;
 local_b4 = 0;
 uVar1 = linked_list(&local_c8);
 printf("CMP-L2-12 (linked_list): %d\n",uVar1);
 local_e0 = 10;
 local_cc = &local_e0;
 local_dc = &local_d4;
 local_d8 = 0;
 local_d4 = 0x14;
 local_d0 = 0;
 uVar1 = doubly_linked_list(&local_e0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_e8 = 0;
 local_e4 = 0;
 local_ec = 100;
 uVar1 = binary_tree(&local_ec);
 printf("CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_f0 = 0;
 local_f4 = 1;
 memset(local_120,0,0x2c);
 local_120[0] = &local_f4;
 local_f8 = 2;
 uVar1 = graph_traverse(local_120);
 printf("CMP-L2-15 (graph_traverse): %d\n",uVar1);
 return;
}



/* Function: main @ 000120b8 */

undefined4 main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* Function: FUN_000120f0 @ 000120f0 */

ulonglong FUN_000120f0(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
 longlong lVar1;
 ulonglong uVar2;
 byte bVar3;
 uint uVar4;
 uint extraout_r2;
 uint extraout_r3;
 uint uVar5;
 uint uVar6;
 int iVar7;
 uint uVar8;
 uint unaff_r5;
 uint uVar9;
 uint uVar10;
 uint extraout_r12;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 ulonglong uVar14;
 
 uVar14 = CONCAT44(param_2,param_1);
 uVar10 = 0x7ff;
 uVar6 = param_2 >> 0x14 & 0x7ff;
 bVar11 = uVar6 == 0;
 if (!bVar11) {
 unaff_r5 = param_4 >> 0x14 & 0x7ff;
 bVar11 = unaff_r5 == 0;
 }
 if (!bVar11) {
 bVar11 = uVar6 == 0x7ff;
 }
 if (!bVar11) {
 bVar11 = unaff_r5 == 0x7ff;
 }
 if (bVar11) {
 uVar14 = FUN_000122d0(param_1,param_2,param_3,param_4);
 param_3 = extraout_r2;
 param_4 = extraout_r3;
 uVar10 = extraout_r12;
 }
 uVar4 = (uint)(uVar14 >> 0x20);
 iVar7 = uVar6 + unaff_r5;
 uVar9 = uVar4 ^ param_4;
 uVar4 = uVar4 & ~(uVar10 << 0x15);
 param_4 = param_4 & ~(uVar10 << 0x15);
 uVar6 = uVar4 | 0x100000;
 uVar5 = param_4 | 0x100000;
 if ((uint)uVar14 == 0 && (uVar4 & 0xfffff) == 0 || param_3 == 0 && (param_4 & 0xfffff) == 0) {
 param_3 = (uint)uVar14 | param_3;
 uVar5 = (uVar9 & 0x80000000 | uVar6) ^ uVar5;
 uVar6 = uVar10 >> 1;
 bVar13 = SBORROW4(iVar7,uVar6);
 uVar8 = iVar7 - uVar6;
 bVar11 = uVar8 == 0;
 uVar4 = uVar8;
 if (!bVar11 && (int)uVar6 <= iVar7) {
 bVar13 = SBORROW4(uVar10,uVar8);
 uVar4 = uVar10 - uVar8;
 bVar11 = uVar10 == uVar8;
 }
 if (!bVar11 && (int)uVar4 < 0 == bVar13) {
 return CONCAT44(uVar5 | uVar8 * 0x100000,param_3);
 }
 uVar5 = uVar5 | 0x100000;
 uVar10 = 0;
 bVar13 = SBORROW4(uVar8,1);
 uVar8 = uVar8 - 1;
 bVar11 = uVar8 == 0;
 uVar6 = uVar8;
 }
 else {
 uVar2 = (ulonglong)param_3 * (uVar14 & 0xffffffff);
 uVar14 = (ulonglong)uVar5 * (uVar14 & 0xffffffff) +
 (ulonglong)param_3 * (ulonglong)uVar6 + (uVar2 >> 0x20);
 uVar4 = (uint)uVar14;
 lVar1 = (ulonglong)uVar5 * (ulonglong)uVar6 + (uVar14 >> 0x20);
 uVar10 = (uint)lVar1;
 uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
 if ((int)uVar2 != 0) {
 uVar4 = uVar4 | 1;
 }
 uVar8 = (iVar7 + -0xff) - ((uVar6 < 0x200) + 0x300);
 if (uVar6 < 0x200) {
 bVar3 = (byte)(uVar4 >> 0x1f);
 uVar4 = uVar4 << 1;
 lVar1 = CONCAT44(uVar6 * 2 + (uint)(CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar3)),
 uVar10 * 2 + (uint)bVar3);
 }
 uVar5 = uVar9 & 0x80000000 | (int)((ulonglong)lVar1 >> 0x20) << 0xb | (uint)lVar1 >> 0x15;
 param_3 = (uint)lVar1 << 0xb | uVar4 >> 0x15;
 uVar10 = uVar4 * 0x800;
 bVar12 = 0xfc < uVar8;
 bVar13 = SBORROW4(uVar8,0xfd);
 uVar9 = uVar8 - 0xfd;
 bVar11 = uVar9 == 0;
 uVar6 = uVar9;
 if (bVar12 && !bVar11) {
 bVar12 = 0x6ff < uVar9;
 bVar13 = SBORROW4(uVar9,0x700);
 uVar6 = uVar8 - 0x7fd;
 bVar11 = uVar9 == 0x700;
 }
 if (!bVar12 || bVar11) {
 bVar11 = 0x7fffffff < uVar10;
 if (uVar10 == 0x80000000) {
 bVar11 = (bool)((byte)(uVar4 >> 0x15) & 1);
 }
 return CONCAT44(uVar5 + uVar8 * 0x100000 + (uint)CARRY4(param_3,(uint)bVar11),param_3 + bVar11
 );
 }
 }
 if (!bVar11 && (int)uVar6 < 0 == bVar13) {
 return (ulonglong)(uVar5 & 0x80000000 | 0x7ff00000) << 0x20;
 }
 if (-0x36 < (int)uVar8) {
 uVar6 = -uVar8;
 uVar4 = uVar6 - 0x20;
 if (0x1f < (int)uVar6) {
 uVar9 = param_3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff);
 uVar6 = (uVar5 >> (uVar4 & 0xff) & ~((uVar5 & 0x80000000) >> (uVar4 & 0xff))) -
 ((int)uVar9 >> 0x1f);
 if ((uVar10 == 0 && param_3 << (0x20 - uVar4 & 0xff) == 0) && (uVar9 & 0x7fffffff) == 0) {
 uVar6 = uVar6 & ~(uVar9 >> 0x1f);
 }
 return CONCAT44(uVar5,uVar6) & 0x80000000ffffffff;
 }
 if (uVar6 - 0x14 != 0 && -0xd < (int)uVar4) {
 uVar4 = 0xc - (uVar6 - 0x14);
 uVar6 = param_3 << (uVar4 & 0xff);
 uVar4 = param_3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff);
 uVar9 = uVar4 + -((int)uVar6 >> 0x1f);
 if (uVar10 == 0 && (uVar6 & 0x7fffffff) == 0) {
 uVar9 = uVar9 & ~(uVar6 >> 0x1f);
 }
 return CONCAT44((uVar5 & 0x80000000) + (uint)CARRY4(uVar4,-((int)uVar6 >> 0x1f)),uVar9);
 }
 uVar4 = param_3 << (uVar8 + 0x20 & 0xff);
 uVar9 = param_3 >> (uVar6 & 0xff) | uVar5 << (uVar8 + 0x20 & 0xff);
 uVar8 = uVar9 + -((int)uVar4 >> 0x1f);
 if (uVar10 == 0 && (uVar4 & 0x7fffffff) == 0) {
 uVar8 = uVar8 & ~(uVar4 >> 0x1f);
 }
 return CONCAT44((uVar5 & 0x80000000) + ((uVar5 & 0x7fffffff) >> (uVar6 & 0xff)) +
 (uint)CARRY4(uVar9,-((int)uVar4 >> 0x1f)),uVar8);
 }
 return (ulonglong)(uVar5 & 0x80000000) << 0x20;
}



/* Function: FUN_000122d0 @ 000122d0 */

ulonglong FUN_000122d0(int param_1,uint param_2,int param_3,uint param_4)

{
 bool bVar1;
 int iVar2;
 uint uVar3;
 uint unaff_r4;
 uint uVar4;
 uint uVar5;
 uint in_r12;
 
 uVar4 = in_r12 & param_4 >> 0x14;
 if (unaff_r4 != in_r12 && uVar4 != in_r12) {
 if (param_1 == 0 && (param_2 & 0x7fffffff) == 0 || param_3 == 0 && (param_4 & 0x7fffffff) == 0)
 {
 return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
 }
 if (unaff_r4 == 0) {
 uVar5 = param_2 & 0x80000000;
 do {
 iVar2 = param_1 >> 0x1f;
 param_1 = param_1 << 1;
 param_2 = param_2 * 2 - iVar2;
 } while ((param_2 & 0x100000) == 0);
 param_2 = param_2 | uVar5;
 if (uVar4 != 0) {
 return CONCAT44(param_2,param_1);
 }
 }
 do {
 iVar2 = param_3 >> 0x1f;
 param_3 = param_3 << 1;
 param_4 = param_4 * 2 - iVar2;
 } while ((param_4 & 0x100000) == 0);
 return CONCAT44(param_2,param_1);
 }
 bVar1 = (param_2 & 0x7fffffff) != 0;
 uVar5 = param_4;
 iVar2 = param_3;
 if (param_1 != 0 || bVar1) {
 uVar5 = param_2;
 iVar2 = param_1;
 }
 uVar3 = uVar5;
 if ((((param_1 != 0 || bVar1) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) &&
 ((unaff_r4 != in_r12 || (iVar2 == 0 && (uVar5 & 0xfffff) == 0)))) &&
 ((uVar4 != in_r12 ||
 (iVar2 = param_3, uVar3 = param_4, param_3 == 0 && (param_4 & 0xfffff) == 0)))) {
 return (ulonglong)((uVar5 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
 }
 return CONCAT44(uVar3,iVar2) | 0x7ff8000000000000;
}



/* Function: __mulsf3 @ 0001235c */

uint __mulsf3(uint param_1,uint param_2)

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
 uint param_4;
 bool bVar10;
 bool bVar11;
 
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
 goto LAB_000124d8;
 }
 if ((param_1 & 0x7fffffff) == 0 || (param_2 & 0x7fffffff) == 0) {
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
 return uVar9 | iVar6 * 0x800000;
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
 if (-0x19 < (int)uVar5) {
 uVar1 = (uVar9 << 1) >> (-uVar5 & 0xff);
 uVar3 = uVar9 << (uVar5 + 0x20 & 0xff);
 uVar9 = (uVar9 & 0x80000000 | uVar1 >> 1) + (uint)((byte)uVar1 & 1);
 if (uVar8 == 0 && (uVar3 & 0x7fffffff) == 0) {
 uVar9 = uVar9 & ~(uVar3 >> 0x1f);
 }
 return uVar9;
 }
 return uVar9 & 0x80000000;
 }
LAB_000124d8:
 return uVar9 & 0x80000000 | 0x7f800000;
}



/* Function: __aeabi_drsub @ 000124f4 */

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
 __adddf3(param_1,param_2 ^ 0x80000000,0,0,0,0);
 return;
}



/* Function: __subdf3 @ 000124fc */

ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,undefined4 param_6)

{
 int iVar1;
 byte bVar2;
 byte bVar3;
 uint uVar4;
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
 
 uVar8 = param_4 ^ 0x80000000;
 uVar11 = param_2 << 1;
 param_4 = param_4 << 1;
 iVar10 = (int)uVar11 >> 0x15;
 iVar1 = (int)param_4 >> 0x15;
 if ((((uVar11 == param_4 && param_1 == param_3 || uVar11 == 0 && param_1 == 0) ||
 param_4 == 0 && param_3 == 0) || iVar10 == -1) || iVar1 == -1) {
 if (iVar10 == -1 || iVar1 == -1) {
 uVar11 = param_3;
 uVar12 = uVar8;
 if (iVar10 == -1) {
 uVar11 = param_1;
 uVar12 = param_2;
 }
 if (iVar10 != -1 || iVar1 != -1) {
 param_3 = uVar11;
 uVar8 = uVar12;
 }
 bVar14 = (uVar12 & 0xfffff) == 0;
 bVar15 = uVar11 == 0 && bVar14;
 if (uVar11 == 0 && bVar14) {
 bVar15 = param_3 == 0 && (uVar8 & 0xfffff) == 0;
 }
 if (!bVar15 || uVar12 != uVar8) {
 uVar12 = uVar12 | 0x80000;
 }
 return CONCAT44(uVar12,uVar11);
 }
 if (uVar11 != param_4 || param_1 != param_3) {
 if (uVar11 == 0 && param_1 == 0) {
 param_1 = param_3;
 param_2 = uVar8;
 }
 return CONCAT44(param_2,param_1);
 }
 if (param_2 != uVar8) {
 return 0;
 }
 if (uVar11 >> 0x15 == 0) {
 bVar2 = (byte)(param_1 >> 0x1f);
 uVar11 = param_2 * 2 + (uint)bVar2;
 if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
 uVar11 = uVar11 | 0x80000000;
 }
 return CONCAT44(uVar11,param_1 << 1);
 }
 if (uVar11 < 0xffc00000) {
 return CONCAT44(param_2 + 0x100000,param_1);
 }
 param_2 = param_2 & 0x80000000;
LAB_00012770:
 return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
 }
 uVar11 = uVar11 >> 0x15;
 param_4 = param_4 >> 0x15;
 uVar12 = param_4 - uVar11;
 bVar14 = uVar12 != 0;
 if (param_4 < uVar11) {
 uVar12 = -uVar12;
 }
 uVar6 = param_1;
 uVar9 = param_2;
 if (bVar14 && uVar11 <= param_4) {
 uVar11 = uVar11 + uVar12;
 uVar6 = param_3;
 uVar9 = uVar8;
 param_3 = param_1;
 uVar8 = param_2;
 }
 if (0x36 < uVar12) {
 return CONCAT44(uVar9,uVar6);
 }
 uVar5 = uVar9 & 0xfffff | 0x100000;
 if ((uVar9 & 0x80000000) != 0) {
 bVar14 = uVar6 != 0;
 uVar6 = -uVar6;
 uVar5 = -(uVar5 + bVar14);
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
 uVar5 = uVar5 ^ 0x100000;
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
 uVar4 = uVar6 + param_3;
 uVar7 = uVar9 << (uVar8 & 0xff);
 uVar8 = uVar4 + uVar7;
 uVar12 = uVar5 + CARRY4(uVar6,param_3) + ((int)uVar9 >> (uVar12 & 0xff)) +
 (uint)CARRY4(uVar4,uVar7);
 }
 else {
 uVar13 = uVar9 << (-uVar12 + 0x40 & 0xff);
 if (param_3 != 0) {
 uVar13 = uVar13 | 2;
 }
 uVar12 = (int)uVar9 >> (uVar12 - 0x20 & 0xff);
 uVar8 = uVar6 + uVar12;
 uVar12 = uVar5 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar6,uVar12);
 }
 param_2 = uVar12 & 0x80000000;
 uVar6 = uVar12;
 if ((int)uVar12 < 0) {
 bVar14 = uVar13 == 0;
 uVar13 = -uVar13;
 uVar6 = -uVar8;
 uVar8 = -(uVar8 + !bVar14);
 uVar6 = -(uVar12 + (bVar14 <= uVar6));
 }
 if (0xfffff < uVar6) {
 uVar9 = uVar11 - 1;
 if (0x1fffff < uVar6) {
 bVar2 = (byte)uVar6;
 uVar6 = uVar6 >> 1;
 bVar3 = (byte)uVar8;
 uVar8 = (uint)(bVar2 & 1) << 0x1f | uVar8 >> 1;
 uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
 uVar9 = uVar11;
 if (0xffbfffff < uVar11 * 0x200000) goto LAB_00012770;
 }
LAB_00012618:
 bVar14 = 0x7fffffff < uVar13;
 if (uVar13 == 0x80000000) {
 bVar14 = (bool)((byte)uVar8 & 1);
 }
 return CONCAT44(uVar6 + uVar9 * 0x100000 + (uint)CARRY4(uVar8,(uint)bVar14) | param_2,
 uVar8 + bVar14);
 }
 bVar2 = (byte)(uVar13 >> 0x1f);
 uVar13 = uVar13 << 1;
 uVar9 = uVar8 * 2;
 bVar14 = CARRY4(uVar8,uVar8);
 uVar8 = uVar8 * 2 + (uint)bVar2;
 uVar6 = uVar6 * 2 + (uint)(bVar14 || CARRY4(uVar9,(uint)bVar2));
 uVar9 = uVar11 - 2;
 if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_00012618;
 uVar11 = uVar8;
 uVar5 = uVar6;
 if (uVar6 == 0) {
 uVar11 = 0;
 uVar5 = uVar8;
 }
 iVar10 = LZCOUNT(uVar5);
 if (uVar6 == 0) {
 iVar10 = iVar10 + 0x20;
 }
 uVar4 = iVar10 - 0xb;
 bVar15 = SBORROW4(uVar4,0x20);
 uVar7 = iVar10 - 0x2b;
 bVar14 = uVar7 == 0;
 uVar8 = uVar7;
 uVar6 = uVar7;
 if ((int)uVar4 < 0x20) {
 bVar15 = SCARRY4(uVar7,0xc);
 uVar6 = iVar10 - 0x1f;
 bVar14 = uVar6 == 0;
 uVar8 = uVar4;
 if (!bVar14 && -0xd < (int)uVar7) {
 uVar11 = uVar5 << (uVar4 & 0xff);
 uVar5 = uVar5 >> (0xc - uVar6 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar14 || (int)uVar6 < 0 != bVar15) {
 uVar13 = 0x20 - uVar8;
 }
 uVar5 = uVar5 << (uVar8 & 0xff);
 if (bVar14 || (int)uVar6 < 0 != bVar15) {
 uVar5 = uVar5 | uVar11 >> (uVar13 & 0xff);
 uVar11 = uVar11 << (uVar8 & 0xff);
 }
LAB_00012698:
 if ((int)uVar4 <= (int)uVar9) {
 return CONCAT44(uVar5 + (uVar9 - uVar4) * 0x100000 | param_2,uVar11);
 }
 uVar8 = ~(uVar9 - uVar4);
 if ((int)uVar8 < 0x1f) {
 if (uVar8 - 0x13 != 0 && -0xd < (int)(uVar8 - 0x1f)) {
 uVar8 = 0xc - (uVar8 - 0x13);
 return CONCAT44(uVar12,uVar11 >> (0x20 - uVar8 & 0xff) | uVar5 << (uVar8 & 0xff)) &
 0x80000000ffffffff;
 }
 uVar8 = uVar8 + 1;
 return CONCAT44(param_2 | uVar5 >> (uVar8 & 0xff),
 uVar11 >> (uVar8 & 0xff) | uVar5 << (0x20 - uVar8 & 0xff));
 }
 return CONCAT44(uVar12,uVar5 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __adddf3 @ 00012500 */

ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,undefined4 param_6)

{
 int iVar1;
 byte bVar2;
 byte bVar3;
 uint uVar4;
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
 
 uVar9 = param_2 << 1;
 uVar5 = param_4 << 1;
 iVar8 = (int)uVar9 >> 0x15;
 iVar1 = (int)uVar5 >> 0x15;
 if ((((uVar9 == uVar5 && param_1 == param_3 || uVar9 == 0 && param_1 == 0) ||
 uVar5 == 0 && param_3 == 0) || iVar8 == -1) || iVar1 == -1) {
 if (iVar8 == -1 || iVar1 == -1) {
 uVar9 = param_3;
 uVar5 = param_4;
 if (iVar8 == -1) {
 uVar9 = param_1;
 uVar5 = param_2;
 }
 if (iVar8 != -1 || iVar1 != -1) {
 param_3 = uVar9;
 param_4 = uVar5;
 }
 bVar14 = (uVar5 & 0xfffff) == 0;
 bVar15 = uVar9 == 0 && bVar14;
 if (uVar9 == 0 && bVar14) {
 bVar15 = param_3 == 0 && (param_4 & 0xfffff) == 0;
 }
 if (!bVar15 || uVar5 != param_4) {
 uVar5 = uVar5 | 0x80000;
 }
 return CONCAT44(uVar5,uVar9);
 }
 if (uVar9 != uVar5 || param_1 != param_3) {
 if (uVar9 == 0 && param_1 == 0) {
 param_1 = param_3;
 param_2 = param_4;
 }
 return CONCAT44(param_2,param_1);
 }
 if (param_2 != param_4) {
 return 0;
 }
 if (uVar9 >> 0x15 == 0) {
 bVar2 = (byte)(param_1 >> 0x1f);
 uVar9 = param_2 * 2 + (uint)bVar2;
 if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
 uVar9 = uVar9 | 0x80000000;
 }
 return CONCAT44(uVar9,param_1 << 1);
 }
 if (uVar9 < 0xffc00000) {
 return CONCAT44(param_2 + 0x100000,param_1);
 }
 param_2 = param_2 & 0x80000000;
LAB_00012770:
 return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
 }
 uVar9 = uVar9 >> 0x15;
 uVar5 = uVar5 >> 0x15;
 uVar11 = uVar5 - uVar9;
 bVar14 = uVar11 != 0;
 if (uVar5 < uVar9) {
 uVar11 = -uVar11;
 }
 uVar10 = param_1;
 uVar7 = param_2;
 if (bVar14 && uVar9 <= uVar5) {
 uVar9 = uVar9 + uVar11;
 uVar10 = param_3;
 uVar7 = param_4;
 param_3 = param_1;
 param_4 = param_2;
 }
 if (0x36 < uVar11) {
 return CONCAT44(uVar7,uVar10);
 }
 uVar5 = uVar7 & 0xfffff | 0x100000;
 if ((uVar7 & 0x80000000) != 0) {
 bVar14 = uVar10 != 0;
 uVar10 = -uVar10;
 uVar5 = -(uVar5 + bVar14);
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
 uVar5 = uVar5 ^ 0x100000;
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
 uVar4 = uVar10 + param_3;
 uVar6 = uVar7 << (uVar13 & 0xff);
 uVar13 = uVar4 + uVar6;
 uVar5 = uVar5 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
 (uint)CARRY4(uVar4,uVar6);
 }
 else {
 uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
 if (param_3 != 0) {
 uVar12 = uVar12 | 2;
 }
 uVar11 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
 uVar13 = uVar10 + uVar11;
 uVar5 = uVar5 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
 }
 param_2 = uVar5 & 0x80000000;
 uVar11 = uVar5;
 if ((int)uVar5 < 0) {
 bVar14 = uVar12 == 0;
 uVar12 = -uVar12;
 uVar11 = -uVar13;
 uVar13 = -(uVar13 + !bVar14);
 uVar11 = -(uVar5 + (bVar14 <= uVar11));
 }
 if (0xfffff < uVar11) {
 uVar10 = uVar9 - 1;
 if (0x1fffff < uVar11) {
 bVar2 = (byte)uVar11;
 uVar11 = uVar11 >> 1;
 bVar3 = (byte)uVar13;
 uVar13 = (uint)(bVar2 & 1) << 0x1f | uVar13 >> 1;
 uVar12 = (uint)(bVar3 & 1) << 0x1f | uVar12 >> 1;
 uVar10 = uVar9;
 if (0xffbfffff < uVar9 * 0x200000) goto LAB_00012770;
 }
LAB_00012618:
 bVar14 = 0x7fffffff < uVar12;
 if (uVar12 == 0x80000000) {
 bVar14 = (bool)((byte)uVar13 & 1);
 }
 return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar13,(uint)bVar14) | param_2,
 uVar13 + bVar14);
 }
 bVar2 = (byte)(uVar12 >> 0x1f);
 uVar12 = uVar12 << 1;
 uVar10 = uVar13 * 2;
 bVar14 = CARRY4(uVar13,uVar13);
 uVar13 = uVar13 * 2 + (uint)bVar2;
 uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar2));
 uVar10 = uVar9 - 2;
 if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_00012618;
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
 uVar4 = iVar8 - 0xb;
 bVar15 = SBORROW4(uVar4,0x20);
 uVar6 = iVar8 - 0x2b;
 bVar14 = uVar6 == 0;
 uVar11 = uVar6;
 uVar13 = uVar6;
 if ((int)uVar4 < 0x20) {
 bVar15 = SCARRY4(uVar6,0xc);
 uVar13 = iVar8 - 0x1f;
 bVar14 = uVar13 == 0;
 uVar11 = uVar4;
 if (!bVar14 && -0xd < (int)uVar6) {
 uVar9 = uVar7 << (uVar4 & 0xff);
 uVar7 = uVar7 >> (0xc - uVar13 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar14 || (int)uVar13 < 0 != bVar15) {
 uVar12 = 0x20 - uVar11;
 }
 uVar7 = uVar7 << (uVar11 & 0xff);
 if (bVar14 || (int)uVar13 < 0 != bVar15) {
 uVar7 = uVar7 | uVar9 >> (uVar12 & 0xff);
 uVar9 = uVar9 << (uVar11 & 0xff);
 }
LAB_00012698:
 if ((int)uVar4 <= (int)uVar10) {
 return CONCAT44(uVar7 + (uVar10 - uVar4) * 0x100000 | param_2,uVar9);
 }
 uVar11 = ~(uVar10 - uVar4);
 if ((int)uVar11 < 0x1f) {
 if (uVar11 - 0x13 != 0 && -0xd < (int)(uVar11 - 0x1f)) {
 uVar11 = 0xc - (uVar11 - 0x13);
 return CONCAT44(uVar5,uVar9 >> (0x20 - uVar11 & 0xff) | uVar7 << (uVar11 & 0xff)) &
 0x80000000ffffffff;
 }
 uVar11 = uVar11 + 1;
 return CONCAT44(param_2 | uVar7 >> (uVar11 & 0xff),
 uVar9 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff));
 }
 return CONCAT44(uVar5,uVar7 >> (uVar11 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __aeabi_ui2d @ 000127ac */

ulonglong __aeabi_ui2d(uint param_1)

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
 
 if (param_1 == 0) {
 return 0;
 }
 uVar1 = 0;
 iVar4 = LZCOUNT(param_1);
 uVar5 = iVar4 + 0x15;
 bVar8 = SBORROW4(uVar5,0x20);
 uVar2 = iVar4 - 0xb;
 bVar7 = uVar2 == 0;
 uVar6 = uVar2;
 uVar3 = uVar2;
 if (uVar5 < 0x20) {
 bVar8 = SCARRY4(uVar2,0xc);
 uVar3 = iVar4 + 1;
 bVar7 = uVar3 == 0;
 uVar6 = uVar5;
 if (!bVar7 && -0xd < (int)uVar2) {
 uVar1 = param_1 << uVar5;
 param_1 = param_1 >> (0xc - uVar3 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar7 || (int)uVar3 < 0 != bVar8) {
 in_r12 = 0x20 - uVar6;
 }
 param_1 = param_1 << (uVar6 & 0xff);
 if (bVar7 || (int)uVar3 < 0 != bVar8) {
 param_1 = param_1 | 0U >> (in_r12 & 0xff);
 uVar1 = 0 << (uVar6 & 0xff);
 }
LAB_00012698:
 if (uVar5 < 0x433) {
 return CONCAT44(param_1 + (0x432 - uVar5) * 0x100000,uVar1);
 }
 uVar6 = ~(0x432 - uVar5);
 if (0x1e < (int)uVar6) {
 return (ulonglong)(param_1 >> (uVar6 - 0x1f & 0xff));
 }
 if (uVar6 - 0x13 == 0 || (int)(uVar6 - 0x1f) < -0xc) {
 uVar6 = uVar6 + 1;
 return CONCAT44(param_1 >> (uVar6 & 0xff),
 uVar1 >> (uVar6 & 0xff) | param_1 << (0x20 - uVar6 & 0xff));
 }
 uVar6 = 0xc - (uVar6 - 0x13);
 return (ulonglong)(uVar1 >> (0x20 - uVar6 & 0xff) | param_1 << (uVar6 & 0xff));
}



/* Function: __floatsidf @ 000127d0 */

ulonglong __floatsidf(uint param_1)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint in_r12;
 bool bVar9;
 bool bVar10;
 
 if (param_1 == 0) {
 return 0;
 }
 uVar8 = param_1 & 0x80000000;
 uVar2 = param_1;
 if ((int)uVar8 < 0) {
 uVar2 = -param_1;
 }
 uVar1 = 0;
 iVar5 = LZCOUNT(uVar2);
 uVar6 = iVar5 + 0x15;
 bVar10 = SBORROW4(uVar6,0x20);
 uVar3 = iVar5 - 0xb;
 bVar9 = uVar3 == 0;
 uVar7 = uVar3;
 uVar4 = uVar3;
 if (uVar6 < 0x20) {
 bVar10 = SCARRY4(uVar3,0xc);
 uVar4 = iVar5 + 1;
 bVar9 = uVar4 == 0;
 uVar7 = uVar6;
 if (!bVar9 && -0xd < (int)uVar3) {
 uVar1 = uVar2 << uVar6;
 uVar2 = uVar2 >> (0xc - uVar4 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar9 || (int)uVar4 < 0 != bVar10) {
 in_r12 = 0x20 - uVar7;
 }
 uVar2 = uVar2 << (uVar7 & 0xff);
 if (bVar9 || (int)uVar4 < 0 != bVar10) {
 uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
 uVar1 = 0 << (uVar7 & 0xff);
 }
LAB_00012698:
 if (uVar6 < 0x433) {
 return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar8,uVar1);
 }
 uVar7 = ~(0x432 - uVar6);
 if (0x1e < (int)uVar7) {
 return CONCAT44(param_1,uVar2 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
 uVar7 = uVar7 + 1;
 return CONCAT44(uVar8 | uVar2 >> (uVar7 & 0xff),
 uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff));
 }
 uVar8 = 0xc - (uVar7 - 0x13);
 return CONCAT44(param_1,uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff)) &
 0x80000000ffffffff;
}



/* Function: __extendsfdf2 @ 000127f8 */

ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint in_r12;
 bool bVar10;
 bool bVar11;
 
 uVar2 = param_1 << 1;
 bVar10 = uVar2 == 0;
 uVar9 = param_1 & 0x80000000;
 uVar8 = (uint)((int)uVar2 >> 3) >> 1;
 uVar1 = uVar9 | uVar8;
 param_1 = param_1 << 0x1d;
 if (!bVar10) {
 param_4 = uVar2 & 0xff000000;
 bVar10 = param_4 == 0;
 }
 if (!bVar10) {
 bVar10 = param_4 == 0xff000000;
 }
 if (!bVar10) {
 return CONCAT44(uVar1,param_1) ^ 0x3800000000000000;
 }
 if ((uVar2 & 0xffffff) == 0) {
 return CONCAT44(uVar1,param_1);
 }
 if (param_4 == 0xff000000) {
 return CONCAT44(uVar1,param_1) | 0x8000000000000;
 }
 uVar2 = param_1;
 uVar3 = uVar8;
 if (uVar8 == 0) {
 uVar2 = 0;
 uVar3 = param_1;
 }
 iVar6 = LZCOUNT(uVar3);
 if (uVar8 == 0) {
 iVar6 = iVar6 + 0x20;
 }
 uVar7 = iVar6 - 0xb;
 bVar11 = SBORROW4(uVar7,0x20);
 uVar4 = iVar6 - 0x2b;
 bVar10 = uVar4 == 0;
 uVar8 = uVar4;
 uVar5 = uVar4;
 if ((int)uVar7 < 0x20) {
 bVar11 = SCARRY4(uVar4,0xc);
 uVar5 = iVar6 - 0x1f;
 bVar10 = uVar5 == 0;
 uVar8 = uVar7;
 if (!bVar10 && -0xd < (int)uVar4) {
 uVar2 = uVar3 << (uVar7 & 0xff);
 uVar3 = uVar3 >> (0xc - uVar5 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar10 || (int)uVar5 < 0 != bVar11) {
 in_r12 = 0x20 - uVar8;
 }
 uVar3 = uVar3 << (uVar8 & 0xff);
 if (bVar10 || (int)uVar5 < 0 != bVar11) {
 uVar3 = uVar3 | uVar2 >> (in_r12 & 0xff);
 uVar2 = uVar2 << (uVar8 & 0xff);
 }
LAB_00012698:
 if ((int)uVar7 < 0x381) {
 return CONCAT44(uVar3 + (0x380 - uVar7) * 0x100000 | uVar9,uVar2);
 }
 uVar8 = ~(0x380 - uVar7);
 if (0x1e < (int)uVar8) {
 return CONCAT44(uVar1,uVar3 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 if (uVar8 - 0x13 == 0 || (int)(uVar8 - 0x1f) < -0xc) {
 uVar8 = uVar8 + 1;
 return CONCAT44(uVar9 | uVar3 >> (uVar8 & 0xff),
 uVar2 >> (uVar8 & 0xff) | uVar3 << (0x20 - uVar8 & 0xff));
 }
 uVar9 = 0xc - (uVar8 - 0x13);
 return CONCAT44(uVar1,uVar2 >> (0x20 - uVar9 & 0xff) | uVar3 << (uVar9 & 0xff)) &
 0x80000000ffffffff;
}



/* Function: __floatundidf @ 00012840 */

ulonglong __floatundidf(uint param_1,uint param_2)

{
 byte bVar1;
 byte bVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 uint uVar10;
 int iVar11;
 bool bVar12;
 bool bVar13;
 
 if (param_1 == 0 && param_2 == 0) {
 return CONCAT44(param_2,param_1);
 }
 iVar11 = 0x432;
 uVar10 = 0;
 if (param_2 >> 0x16 != 0) {
 iVar11 = 3;
 if (param_2 >> 0x19 != 0) {
 iVar11 = 6;
 }
 if (param_2 >> 0x1c != 0) {
 iVar11 = iVar11 + 3;
 }
 iVar11 = iVar11 - ((int)param_2 >> 0x1f);
 uVar10 = param_1 << (0x20U - iVar11 & 0xff);
 param_1 = param_1 >> iVar11 | param_2 << (0x20U - iVar11 & 0xff);
 param_2 = param_2 >> iVar11;
 iVar11 = iVar11 + 0x432;
 }
 if (0xfffff < param_2) {
 if (0x1fffff < param_2) {
 bVar1 = (byte)param_2;
 param_2 = param_2 >> 1;
 bVar2 = (byte)param_1;
 param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
 uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
 iVar11 = iVar11 + 1;
 if (0xffbfffff < (uint)(iVar11 * 0x200000)) {
 return 0x7ff0000000000000;
 }
 }
LAB_00012618:
 bVar12 = 0x7fffffff < uVar10;
 if (uVar10 == 0x80000000) {
 bVar12 = (bool)((byte)param_1 & 1);
 }
 return CONCAT44(param_2 + iVar11 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12),
 param_1 + bVar12);
 }
 bVar1 = (byte)(uVar10 >> 0x1f);
 uVar10 = uVar10 << 1;
 uVar3 = param_1 * 2;
 bVar12 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 param_2 = param_2 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
 bVar12 = iVar11 != 0;
 iVar11 = iVar11 + -1;
 if (bVar12 && 0xfffff < param_2) goto LAB_00012618;
 uVar3 = param_1;
 uVar4 = param_2;
 if (param_2 == 0) {
 uVar3 = 0;
 uVar4 = param_1;
 }
 iVar8 = LZCOUNT(uVar4);
 if (param_2 == 0) {
 iVar8 = iVar8 + 0x20;
 }
 uVar9 = iVar8 - 0xb;
 bVar13 = SBORROW4(uVar9,0x20);
 uVar5 = iVar8 - 0x2b;
 bVar12 = uVar5 == 0;
 uVar7 = uVar5;
 uVar6 = uVar5;
 if ((int)uVar9 < 0x20) {
 bVar13 = SCARRY4(uVar5,0xc);
 uVar6 = iVar8 - 0x1f;
 bVar12 = uVar6 == 0;
 uVar7 = uVar9;
 if (!bVar12 && -0xd < (int)uVar5) {
 uVar3 = uVar4 << (uVar9 & 0xff);
 uVar4 = uVar4 >> (0xc - uVar6 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar12 || (int)uVar6 < 0 != bVar13) {
 uVar10 = 0x20 - uVar7;
 }
 uVar4 = uVar4 << (uVar7 & 0xff);
 if (bVar12 || (int)uVar6 < 0 != bVar13) {
 uVar4 = uVar4 | uVar3 >> (uVar10 & 0xff);
 uVar3 = uVar3 << (uVar7 & 0xff);
 }
LAB_00012698:
 if ((int)uVar9 <= iVar11) {
 return CONCAT44(uVar4 + (iVar11 - uVar9) * 0x100000,uVar3);
 }
 uVar10 = ~(iVar11 - uVar9);
 if ((int)uVar10 < 0x1f) {
 if (uVar10 - 0x13 != 0 && -0xd < (int)(uVar10 - 0x1f)) {
 uVar10 = 0xc - (uVar10 - 0x13);
 return (ulonglong)(uVar3 >> (0x20 - uVar10 & 0xff) | uVar4 << (uVar10 & 0xff));
 }
 uVar10 = uVar10 + 1;
 return CONCAT44(uVar4 >> (uVar10 & 0xff),
 uVar3 >> (uVar10 & 0xff) | uVar4 << (0x20 - uVar10 & 0xff));
 }
 return (ulonglong)(uVar4 >> (uVar10 - 0x1f & 0xff));
}



/* Function: __aeabi_l2d @ 00012854 */

ulonglong __aeabi_l2d(uint param_1,uint param_2)

{
 byte bVar1;
 byte bVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 int iVar10;
 uint uVar11;
 uint uVar12;
 bool bVar13;
 bool bVar14;
 
 if (param_1 == 0 && param_2 == 0) {
 return CONCAT44(param_2,param_1);
 }
 uVar11 = param_2 & 0x80000000;
 uVar4 = param_2;
 if ((int)uVar11 < 0) {
 bVar13 = param_1 != 0;
 param_1 = -param_1;
 uVar4 = -(param_2 + bVar13);
 }
 iVar10 = 0x432;
 uVar12 = 0;
 if (uVar4 >> 0x16 != 0) {
 iVar10 = 3;
 if (uVar4 >> 0x19 != 0) {
 iVar10 = 6;
 }
 if (uVar4 >> 0x1c != 0) {
 iVar10 = iVar10 + 3;
 }
 iVar10 = iVar10 - ((int)uVar4 >> 0x1f);
 uVar12 = param_1 << (0x20U - iVar10 & 0xff);
 param_1 = param_1 >> iVar10 | uVar4 << (0x20U - iVar10 & 0xff);
 uVar4 = uVar4 >> iVar10;
 iVar10 = iVar10 + 0x432;
 }
 if (0xfffff < uVar4) {
 if (0x1fffff < uVar4) {
 bVar1 = (byte)uVar4;
 uVar4 = uVar4 >> 1;
 bVar2 = (byte)param_1;
 param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
 uVar12 = (uint)(bVar2 & 1) << 0x1f | uVar12 >> 1;
 iVar10 = iVar10 + 1;
 if (0xffbfffff < (uint)(iVar10 * 0x200000)) {
 return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
 }
 }
LAB_00012618:
 bVar13 = 0x7fffffff < uVar12;
 if (uVar12 == 0x80000000) {
 bVar13 = (bool)((byte)param_1 & 1);
 }
 return CONCAT44(uVar4 + iVar10 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar13) | uVar11,
 param_1 + bVar13);
 }
 bVar1 = (byte)(uVar12 >> 0x1f);
 uVar12 = uVar12 << 1;
 uVar3 = param_1 * 2;
 bVar13 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 uVar4 = uVar4 * 2 + (uint)(bVar13 || CARRY4(uVar3,(uint)bVar1));
 bVar13 = iVar10 != 0;
 iVar10 = iVar10 + -1;
 if (bVar13 && 0xfffff < uVar4) goto LAB_00012618;
 uVar3 = param_1;
 uVar5 = uVar4;
 if (uVar4 == 0) {
 uVar3 = 0;
 uVar5 = param_1;
 }
 iVar8 = LZCOUNT(uVar5);
 if (uVar4 == 0) {
 iVar8 = iVar8 + 0x20;
 }
 uVar9 = iVar8 - 0xb;
 bVar14 = SBORROW4(uVar9,0x20);
 uVar6 = iVar8 - 0x2b;
 bVar13 = uVar6 == 0;
 uVar4 = uVar6;
 uVar7 = uVar6;
 if ((int)uVar9 < 0x20) {
 bVar14 = SCARRY4(uVar6,0xc);
 uVar7 = iVar8 - 0x1f;
 bVar13 = uVar7 == 0;
 uVar4 = uVar9;
 if (!bVar13 && -0xd < (int)uVar6) {
 uVar3 = uVar5 << (uVar9 & 0xff);
 uVar5 = uVar5 >> (0xc - uVar7 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar13 || (int)uVar7 < 0 != bVar14) {
 uVar12 = 0x20 - uVar4;
 }
 uVar5 = uVar5 << (uVar4 & 0xff);
 if (bVar13 || (int)uVar7 < 0 != bVar14) {
 uVar5 = uVar5 | uVar3 >> (uVar12 & 0xff);
 uVar3 = uVar3 << (uVar4 & 0xff);
 }
LAB_00012698:
 if ((int)uVar9 <= iVar10) {
 return CONCAT44(uVar5 + (iVar10 - uVar9) * 0x100000 | uVar11,uVar3);
 }
 uVar4 = ~(iVar10 - uVar9);
 if ((int)uVar4 < 0x1f) {
 if (uVar4 - 0x13 != 0 && -0xd < (int)(uVar4 - 0x1f)) {
 uVar4 = 0xc - (uVar4 - 0x13);
 return CONCAT44(param_2,uVar3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff)) &
 0x80000000ffffffff;
 }
 uVar4 = uVar4 + 1;
 return CONCAT44(uVar11 | uVar5 >> (uVar4 & 0xff),
 uVar3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
 }
 return CONCAT44(param_2,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __muldf3 @ 000128b4 */

ulonglong __muldf3(undefined4 param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
 longlong lVar1;
 ulonglong uVar2;
 byte bVar3;
 uint uVar4;
 uint extraout_r2;
 uint extraout_r3;
 uint uVar5;
 uint uVar6;
 int iVar7;
 uint uVar8;
 uint unaff_r5;
 uint uVar9;
 uint uVar10;
 uint extraout_r12;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 ulonglong uVar14;
 
 uVar14 = CONCAT44(param_2,param_1);
 uVar10 = 0x7ff;
 uVar6 = param_2 >> 0x14 & 0x7ff;
 bVar11 = uVar6 == 0;
 if (!bVar11) {
 unaff_r5 = param_4 >> 0x14 & 0x7ff;
 bVar11 = unaff_r5 == 0;
 }
 if (!bVar11) {
 bVar11 = uVar6 == 0x7ff;
 }
 if (!bVar11) {
 bVar11 = unaff_r5 == 0x7ff;
 }
 if (bVar11) {
 uVar14 = FUN_00012a94(param_1,param_2,param_3,param_4);
 param_3 = extraout_r2;
 param_4 = extraout_r3;
 uVar10 = extraout_r12;
 }
 uVar4 = (uint)(uVar14 >> 0x20);
 iVar7 = uVar6 + unaff_r5;
 uVar9 = uVar4 ^ param_4;
 uVar4 = uVar4 & ~(uVar10 << 0x15);
 param_4 = param_4 & ~(uVar10 << 0x15);
 uVar6 = uVar4 | 0x100000;
 uVar5 = param_4 | 0x100000;
 if ((uint)uVar14 == 0 && (uVar4 & 0xfffff) == 0 || param_3 == 0 && (param_4 & 0xfffff) == 0) {
 param_3 = (uint)uVar14 | param_3;
 uVar5 = (uVar9 & 0x80000000 | uVar6) ^ uVar5;
 uVar6 = uVar10 >> 1;
 bVar13 = SBORROW4(iVar7,uVar6);
 uVar8 = iVar7 - uVar6;
 bVar11 = uVar8 == 0;
 uVar4 = uVar8;
 if (!bVar11 && (int)uVar6 <= iVar7) {
 bVar13 = SBORROW4(uVar10,uVar8);
 uVar4 = uVar10 - uVar8;
 bVar11 = uVar10 == uVar8;
 }
 if (!bVar11 && (int)uVar4 < 0 == bVar13) {
 return CONCAT44(uVar5 | uVar8 * 0x100000,param_3);
 }
 uVar5 = uVar5 | 0x100000;
 uVar10 = 0;
 bVar13 = SBORROW4(uVar8,1);
 uVar8 = uVar8 - 1;
 bVar11 = uVar8 == 0;
 uVar6 = uVar8;
 }
 else {
 uVar2 = (ulonglong)param_3 * (uVar14 & 0xffffffff);
 uVar14 = (ulonglong)uVar5 * (uVar14 & 0xffffffff) +
 (ulonglong)param_3 * (ulonglong)uVar6 + (uVar2 >> 0x20);
 uVar4 = (uint)uVar14;
 lVar1 = (ulonglong)uVar5 * (ulonglong)uVar6 + (uVar14 >> 0x20);
 uVar10 = (uint)lVar1;
 uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
 if ((int)uVar2 != 0) {
 uVar4 = uVar4 | 1;
 }
 uVar8 = (iVar7 + -0xff) - ((uVar6 < 0x200) + 0x300);
 if (uVar6 < 0x200) {
 bVar3 = (byte)(uVar4 >> 0x1f);
 uVar4 = uVar4 << 1;
 lVar1 = CONCAT44(uVar6 * 2 + (uint)(CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar3)),
 uVar10 * 2 + (uint)bVar3);
 }
 uVar5 = uVar9 & 0x80000000 | (int)((ulonglong)lVar1 >> 0x20) << 0xb | (uint)lVar1 >> 0x15;
 param_3 = (uint)lVar1 << 0xb | uVar4 >> 0x15;
 uVar10 = uVar4 * 0x800;
 bVar12 = 0xfc < uVar8;
 bVar13 = SBORROW4(uVar8,0xfd);
 uVar9 = uVar8 - 0xfd;
 bVar11 = uVar9 == 0;
 uVar6 = uVar9;
 if (bVar12 && !bVar11) {
 bVar12 = 0x6ff < uVar9;
 bVar13 = SBORROW4(uVar9,0x700);
 uVar6 = uVar8 - 0x7fd;
 bVar11 = uVar9 == 0x700;
 }
 if (!bVar12 || bVar11) {
 bVar11 = 0x7fffffff < uVar10;
 if (uVar10 == 0x80000000) {
 bVar11 = (bool)((byte)(uVar4 >> 0x15) & 1);
 }
 return CONCAT44(uVar5 + uVar8 * 0x100000 + (uint)CARRY4(param_3,(uint)bVar11),param_3 + bVar11
 );
 }
 }
 if (!bVar11 && (int)uVar6 < 0 == bVar13) {
 return (ulonglong)(uVar5 & 0x80000000 | 0x7ff00000) << 0x20;
 }
 if (-0x36 < (int)uVar8) {
 uVar6 = -uVar8;
 uVar4 = uVar6 - 0x20;
 if (0x1f < (int)uVar6) {
 uVar9 = param_3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff);
 uVar6 = (uVar5 >> (uVar4 & 0xff) & ~((uVar5 & 0x80000000) >> (uVar4 & 0xff))) -
 ((int)uVar9 >> 0x1f);
 if ((uVar10 == 0 && param_3 << (0x20 - uVar4 & 0xff) == 0) && (uVar9 & 0x7fffffff) == 0) {
 uVar6 = uVar6 & ~(uVar9 >> 0x1f);
 }
 return CONCAT44(uVar5,uVar6) & 0x80000000ffffffff;
 }
 if (uVar6 - 0x14 != 0 && -0xd < (int)uVar4) {
 uVar4 = 0xc - (uVar6 - 0x14);
 uVar6 = param_3 << (uVar4 & 0xff);
 uVar4 = param_3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff);
 uVar9 = uVar4 + -((int)uVar6 >> 0x1f);
 if (uVar10 == 0 && (uVar6 & 0x7fffffff) == 0) {
 uVar9 = uVar9 & ~(uVar6 >> 0x1f);
 }
 return CONCAT44((uVar5 & 0x80000000) + (uint)CARRY4(uVar4,-((int)uVar6 >> 0x1f)),uVar9);
 }
 uVar4 = param_3 << (uVar8 + 0x20 & 0xff);
 uVar9 = param_3 >> (uVar6 & 0xff) | uVar5 << (uVar8 + 0x20 & 0xff);
 uVar8 = uVar9 + -((int)uVar4 >> 0x1f);
 if (uVar10 == 0 && (uVar4 & 0x7fffffff) == 0) {
 uVar8 = uVar8 & ~(uVar4 >> 0x1f);
 }
 return CONCAT44((uVar5 & 0x80000000) + ((uVar5 & 0x7fffffff) >> (uVar6 & 0xff)) +
 (uint)CARRY4(uVar9,-((int)uVar4 >> 0x1f)),uVar8);
 }
 return (ulonglong)(uVar5 & 0x80000000) << 0x20;
}



/* Function: FUN_00012a94 @ 00012a94 */

ulonglong FUN_00012a94(int param_1,uint param_2,int param_3,uint param_4)

{
 bool bVar1;
 int iVar2;
 uint uVar3;
 uint unaff_r4;
 uint uVar4;
 uint uVar5;
 uint in_r12;
 
 uVar4 = in_r12 & param_4 >> 0x14;
 if (unaff_r4 != in_r12 && uVar4 != in_r12) {
 if (param_1 == 0 && (param_2 & 0x7fffffff) == 0 || param_3 == 0 && (param_4 & 0x7fffffff) == 0)
 {
 return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
 }
 if (unaff_r4 == 0) {
 uVar5 = param_2 & 0x80000000;
 do {
 iVar2 = param_1 >> 0x1f;
 param_1 = param_1 << 1;
 param_2 = param_2 * 2 - iVar2;
 } while ((param_2 & 0x100000) == 0);
 param_2 = param_2 | uVar5;
 if (uVar4 != 0) {
 return CONCAT44(param_2,param_1);
 }
 }
 do {
 iVar2 = param_3 >> 0x1f;
 param_3 = param_3 << 1;
 param_4 = param_4 * 2 - iVar2;
 } while ((param_4 & 0x100000) == 0);
 return CONCAT44(param_2,param_1);
 }
 bVar1 = (param_2 & 0x7fffffff) != 0;
 uVar5 = param_4;
 iVar2 = param_3;
 if (param_1 != 0 || bVar1) {
 uVar5 = param_2;
 iVar2 = param_1;
 }
 uVar3 = uVar5;
 if ((((param_1 != 0 || bVar1) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) &&
 ((unaff_r4 != in_r12 || (iVar2 == 0 && (uVar5 & 0xfffff) == 0)))) &&
 ((uVar4 != in_r12 ||
 (iVar2 = param_3, uVar3 = param_4, param_3 == 0 && (param_4 & 0xfffff) == 0)))) {
 return (ulonglong)((uVar5 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
 }
 return CONCAT44(uVar3,iVar2) | 0x7ff8000000000000;
}



/* Function: __divdf3 @ 00012b20 */

ulonglong __divdf3(undefined4 param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
 uint uVar1;
 uint uVar2;
 uint extraout_r2;
 uint uVar3;
 uint extraout_r3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 int iVar7;
 uint uVar8;
 uint unaff_r5;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 uint extraout_r12;
 uint uVar12;
 bool bVar13;
 bool bVar14;
 bool bVar15;
 undefined8 uVar16;
 
 uVar16 = CONCAT44(param_2,param_1);
 uVar11 = 0x7ff;
 uVar6 = param_2 >> 0x14 & 0x7ff;
 bVar13 = uVar6 == 0;
 if (!bVar13) {
 unaff_r5 = param_4 >> 0x14 & 0x7ff;
 bVar13 = unaff_r5 == 0;
 }
 if (!bVar13) {
 bVar13 = uVar6 == 0x7ff;
 }
 if (!bVar13) {
 bVar13 = unaff_r5 == 0x7ff;
 }
 if (bVar13) {
 uVar16 = FUN_00012cb4(param_1, param_2, param_3, param_4);
 param_3 = extraout_r2;
 param_4 = extraout_r3;
 uVar11 = extraout_r12;
 }
 uVar8 = (uint)((ulonglong)uVar16 >> 0x20);
 uVar2 = (uint)uVar16;
 iVar7 = uVar6 - unaff_r5;
 if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
 uVar6 = (uVar8 ^ param_4) & 0x80000000 | uVar8 & 0xfffff;
 bVar14 = SCARRY4(iVar7,uVar11 >> 1);
 uVar8 = iVar7 + (uVar11 >> 1);
 bVar13 = (int)uVar8 < 0;
 bVar15 = uVar8 == 0;
 if (!bVar15 && bVar13 == bVar14) {
 bVar14 = SBORROW4(uVar11,uVar8);
 bVar13 = (int)(uVar11 - uVar8) < 0;
 bVar15 = uVar11 == uVar8;
 }
 if (!bVar15 && bVar13 == bVar14) {
 return CONCAT44(uVar6 | uVar8 * 0x100000,uVar2);
 }
 uVar6 = uVar6 | 0x100000;
 uVar4 = 0;
 bVar15 = SBORROW4(uVar8,1);
 uVar8 = uVar8 - 1;
 bVar13 = uVar8 == 0;
 uVar11 = uVar8;
 }
 else {
 uVar4 = (param_4 << 0xc) >> 4 | 0x10000000 | param_3 >> 0x18;
 uVar11 = param_3 << 8;
 uVar9 = (uVar8 << 0xc) >> 4 | 0x10000000 | uVar2 >> 0x18;
 uVar2 = uVar2 * 0x100;
 uVar6 = (uVar8 ^ param_4) & 0x80000000;
 bVar13 = uVar4 <= uVar9;
 if (uVar9 == uVar4) {
 bVar13 = uVar11 <= uVar2;
 }
 iVar7 = iVar7 + (uint)bVar13;
 uVar8 = iVar7 + 0x3fd;
 if (!bVar13) {
 uVar4 = uVar4 >> 1;
 uVar11 = (uint)((byte)(param_3 >> 0x18) & 1) << 0x1f | uVar11 >> 1;
 }
 uVar10 = uVar2 - uVar11;
 uVar9 = uVar9 - (uVar4 + (uVar2 < uVar11));
 uVar5 = uVar4 >> 1;
 uVar3 = (uint)((byte)uVar4 & 1) << 0x1f | uVar11 >> 1;
 uVar2 = 0x100000;
 uVar11 = 0x80000;
 while( true ) {
 bVar13 = uVar3 <= uVar10;
 if (uVar5 < uVar9 || uVar9 - uVar5 < (uint)bVar13) {
 uVar10 = uVar10 - uVar3;
 uVar2 = uVar2 | uVar11;
 uVar9 = uVar9 - (uVar5 + !bVar13);
 }
 uVar4 = uVar5 >> 1;
 uVar3 = (uint)((byte)uVar5 & 1) << 0x1f | uVar3 >> 1;
 bVar13 = uVar3 <= uVar10;
 if (uVar4 < uVar9 || uVar9 - uVar4 < (uint)bVar13) {
 uVar10 = uVar10 - uVar3;
 uVar2 = uVar2 | uVar11 >> 1;
 uVar9 = uVar9 - (uVar4 + !bVar13);
 }
 uVar12 = uVar5 >> 2;
 uVar1 = (uint)((byte)uVar4 & 1) << 0x1f | uVar3 >> 1;
 bVar13 = uVar1 <= uVar10;
 if (uVar12 < uVar9 || uVar9 - uVar12 < (uint)bVar13) {
 uVar10 = uVar10 - uVar1;
 uVar2 = uVar2 | uVar11 >> 2;
 uVar9 = uVar9 - (uVar12 + !bVar13);
 }
 uVar5 = uVar5 >> 3;
 uVar3 = (uint)((byte)uVar12 & 1) << 0x1f | uVar1 >> 1;
 bVar13 = uVar3 <= uVar10;
 if (uVar5 < uVar9 || uVar9 - uVar5 < (uint)bVar13) {
 uVar10 = uVar10 - uVar3;
 uVar2 = uVar2 | uVar11 >> 3;
 uVar9 = uVar9 - (uVar5 + !bVar13);
 }
 uVar4 = uVar9 | uVar10;
 if (uVar4 == 0) break;
 uVar9 = uVar9 << 4 | uVar10 >> 0x1c;
 uVar10 = uVar10 << 4;
 uVar5 = uVar5 << 3 | uVar3 >> 0x1d;
 uVar3 = (uVar1 >> 1) << 3;
 uVar11 = uVar11 >> 4;
 if (uVar11 == 0) {
 if ((uVar6 & 0x100000) != 0) goto LAB_00012c60;
 uVar6 = uVar6 | uVar2;
 uVar2 = 0;
 uVar11 = 0x80000000;
 }
 }
 if ((uVar6 & 0x100000) == 0) {
 uVar6 = uVar6 | uVar2;
 uVar2 = 0;
 }
LAB_00012c60:
 bVar14 = 0xfc < uVar8;
 bVar15 = SBORROW4(uVar8,0xfd);
 uVar12 = iVar7 + 0x300;
 bVar13 = uVar12 == 0;
 uVar11 = uVar12;
 if (bVar14 && !bVar13) {
 bVar14 = 0x6ff < uVar12;
 bVar15 = SBORROW4(uVar12,0x700);
 uVar11 = iVar7 - 0x400;
 bVar13 = uVar12 == 0x700;
 }
 if (!bVar14 || bVar13) {
 bVar13 = uVar5 <= uVar9;
 if (uVar9 == uVar5) {
 bVar13 = uVar3 <= uVar10;
 }
 if (uVar9 == uVar5 && uVar10 == uVar3) {
 bVar13 = (bool)((byte)uVar2 & 1);
 }
 return CONCAT44(uVar6 + uVar8 * 0x100000 + (uint)CARRY4(uVar2,(uint)bVar13),uVar2 + bVar13);
 }
 }
 if (!bVar13 && (int)uVar11 < 0 == bVar15) {
 return (ulonglong)(uVar6 & 0x80000000 | 0x7ff00000) << 0x20;
 }
 if ((int)uVar8 < -0x35) {
 return (ulonglong)(uVar6 & 0x80000000) << 0x20;
 }
 uVar11 = -uVar8;
 uVar9 = uVar11 - 0x20;
 if (0x1f < (int)uVar11) {
 uVar8 = uVar2 >> (uVar9 & 0xff) | uVar6 << (0x20 - uVar9 & 0xff);
 uVar11 = (uVar6 >> (uVar9 & 0xff) & ~((uVar6 & 0x80000000) >> (uVar9 & 0xff))) -
 ((int)uVar8 >> 0x1f);
 if ((uVar4 == 0 && uVar2 << (0x20 - uVar9 & 0xff) == 0) && (uVar8 & 0x7fffffff) == 0) {
 uVar11 = uVar11 & ~(uVar8 >> 0x1f);
 }
 return CONCAT44(uVar6,uVar11) & 0x80000000ffffffff;
 }
 if (uVar11 - 0x14 != 0 && -0xd < (int)uVar9) {
 uVar8 = 0xc - (uVar11 - 0x14);
 uVar11 = uVar2 << (uVar8 & 0xff);
 uVar2 = uVar2 >> (0x20 - uVar8 & 0xff) | uVar6 << (uVar8 & 0xff);
 uVar8 = uVar2 + -((int)uVar11 >> 0x1f);
 if (uVar4 == 0 && (uVar11 & 0x7fffffff) == 0) {
 uVar8 = uVar8 & ~(uVar11 >> 0x1f);
 }
 return CONCAT44((uVar6 & 0x80000000) + (uint)CARRY4(uVar2,-((int)uVar11 >> 0x1f)),uVar8);
 }
 uVar9 = uVar2 << (uVar8 + 0x20 & 0xff);
 uVar2 = uVar2 >> (uVar11 & 0xff) | uVar6 << (uVar8 + 0x20 & 0xff);
 uVar8 = uVar2 + -((int)uVar9 >> 0x1f);
 if (uVar4 == 0 && (uVar9 & 0x7fffffff) == 0) {
 uVar8 = uVar8 & ~(uVar9 >> 0x1f);
 }
 return CONCAT44((uVar6 & 0x80000000) + ((uVar6 & 0x7fffffff) >> (uVar11 & 0xff)) +
 (uint)CARRY4(uVar2,-((int)uVar9 >> 0x1f)),uVar8);
}



/* Function: FUN_00012cb4 @ 00012cb4 */

ulonglong FUN_00012cb4(int param_1,uint param_2,int param_3,uint param_4)

{
 int iVar1;
 uint unaff_r4;
 uint uVar2;
 uint uVar3;
 uint in_r12;
 
 uVar2 = in_r12 & param_4 >> 0x14;
 uVar3 = param_2;
 if (unaff_r4 != in_r12 || uVar2 != in_r12) {
 if (unaff_r4 == in_r12) {
 if ((param_1 == 0 && (param_2 & 0xfffff) == 0) &&
 (param_1 = param_3, uVar3 = param_4, uVar2 != in_r12)) {
LAB_00012afc:
 return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
 }
 }
 else if (uVar2 == in_r12) {
 param_1 = param_3;
 uVar3 = param_4;
 if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
LAB_00012ab0:
 return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
 }
 }
 else {
 if ((param_1 != 0 || (param_2 & 0x7fffffff) != 0) &&
 (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) {
 if (unaff_r4 == 0) {
 uVar3 = param_2 & 0x80000000;
 do {
 iVar1 = param_1 >> 0x1f;
 param_1 = param_1 << 1;
 param_2 = param_2 * 2 - iVar1;
 } while ((param_2 & 0x100000) == 0);
 param_2 = param_2 | uVar3;
 if (uVar2 != 0) {
 return CONCAT44(param_2,param_1);
 }
 }
 do {
 iVar1 = param_3 >> 0x1f;
 param_3 = param_3 << 1;
 param_4 = param_4 * 2 - iVar1;
 } while ((param_4 & 0x100000) == 0);
 return CONCAT44(param_2,param_1);
 }
 if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) goto LAB_00012afc;
 if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) goto LAB_00012ab0;
 }
 }
 return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}



/* Function: __aeabi_frsub @ 00012d24 */

void __aeabi_frsub(uint param_1, uint param_2)

{
 __addsf3(param_1 ^ 0x80000000, param_2, 0, 0, 0, 0);
 return;
}




/* CRT stub function __aeabi_fsub removed by preprocessor */




/* Function: __addsf3 @ 00012d30 */

uint __addsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4,undefined4 param_5,undefined4 param_6)

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
 uVar4 = param_2;
 if (iVar1 == -1) {
 uVar4 = param_1;
 }
 if (iVar1 != -1 || iVar2 != -1) {
 param_2 = uVar4;
 }
 if (((uVar4 & 0x7fffff) != 0 || (param_2 & 0x7fffff) != 0) || uVar4 != param_2) {
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
LAB_00012e90:
 return param_1 | 0x7f800000;
 }
 uVar4 = uVar4 >> 0x18;
 param_4 = param_4 >> 0x18;
 uVar8 = param_4 - uVar4;
 uVar5 = param_2;
 uVar7 = uVar4;
 if (uVar8 != 0 && uVar4 <= param_4) {
 uVar7 = uVar4 + uVar8;
 uVar5 = param_1;
 param_1 = param_2;
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
 uVar8 = uVar7 - 2;
 if (uVar7 - 1 == 0 || uVar4 < 0x800000) {
 uVar7 = LZCOUNT(uVar4) - 8;
 uVar4 = uVar4 << (uVar7 & 0xff);
 if ((int)uVar8 < (int)uVar7) {
 uVar4 = uVar4 >> (-(uVar8 - uVar7) & 0xff);
 }
 else {
 uVar4 = uVar4 + (uVar8 - uVar7) * 0x800000;
 }
 return uVar4 | param_1;
 }
 }
 else {
 uVar8 = uVar7 - 1;
 if (0xffffff < uVar4) {
 bVar3 = (byte)uVar4;
 uVar4 = uVar4 >> 1;
 uVar6 = (uint)(bVar3 & 1) << 0x1f | uVar6 >> 1;
 uVar8 = uVar7;
 if (0xfd < uVar7) goto LAB_00012e90;
 }
 }
 uVar4 = uVar4 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar6);
 if (uVar6 == 0x80000000) {
 uVar4 = uVar4 & 0xfffffffe;
 }
 return uVar4 | param_1;
}



/* Function: __aeabi_ui2f @ 00012ec0 */

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



/* Function: __floatsisf @ 00012ec8 */

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



/* Function: __floatundisf @ 00012ee8 */

uint __floatundisf(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 
 if (param_1 == 0 && param_2 == 0) {
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
 if (uVar1 == 0 && (uVar4 & 0x7fffffff) == 0) {
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



/* Function: __aeabi_l2f @ 00012ef8 */

uint __aeabi_l2f(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 bool bVar7;
 
 if (param_1 == 0 && param_2 == 0) {
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
 if (uVar1 == 0 && (uVar5 & 0x7fffffff) == 0) {
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



/* Function: __fixsfsi @ 00012f74 */

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




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 87 */
