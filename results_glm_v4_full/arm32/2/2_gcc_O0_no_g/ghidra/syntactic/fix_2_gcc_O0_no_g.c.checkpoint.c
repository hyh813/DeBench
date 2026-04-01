/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/2/2_gcc_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */





/* Type definitions for Ghidra decompiler types */
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned int undefined;
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef long long longlong;
typedef unsigned long long undefined8;
typedef unsigned long long ulonglong;
typedef _Bool bool;
#ifndef true
#define true 1
#endif
#ifndef false
#define false 0
#endif
typedef int (*code)(int);

/* External data references */

/* String data constants */
static const char DAT_000133b0[] = "Testing Data Types L1";
static const char DAT_00013530[] = "Testing Array Types L1";
static const char DAT_00013674[] = "test_data";
static const char DAT_0001367c[] = "Testing Pointer Types L2";
static const char DAT_0001384c[] = "Testing Composite Types L2";

/* Forward declarations for compiler helper functions */
ulonglong FUN_00012614(uint *param_1, uint *param_2, uint *param_3, uint *param_4,
                       uint *extraout_r2, uint *extraout_r3, uint *extraout_r12,
                       uint *in_r12, uint *unaff_r4);
undefined4 __mulsf3(undefined4 param_1, undefined4 param_2);
uint __addsf3(uint param_1, uint param_2, undefined4 param_3, uint param_4);
uint __fixsfsi(uint param_1);
ulonglong FUN_00012dd8(uint *param_1, uint *param_2, uint *param_3, uint *param_4,
                       uint *in_r12, uint *unaff_r4);
ulonglong __aeabi_dadd(uint param_1, uint param_2, uint param_3, uint param_4);
ulonglong __aeabi_ddiv(uint param_1, uint param_2, uint param_3, uint param_4);
static ulonglong __extendsfdf2(undefined4 param_1);
static ulonglong __muldf3(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);

/* Helper macros for compiler operations */
#define CONCAT44(hi, lo) (((ulonglong)(hi) << 32) | ((uint)(lo) & 0xffffffff))
#define LZCOUNT(x) ((x) ? __builtin_clz(x) : 32)

/* Arithmetic helper macros for carry/borrow detection */
#define SBORROW4(a, b) (((int)(a) - (int)(b)) > (int)(a))
#define CARRY4(a, b) (((uint)(a) + (uint)(b)) < (uint)(a))
#define SUB41(a, b) (((int)(a) - (int)(b)) > (int)(a))
#define SCARRY4(a, b) (((int)(a) + (int)(b)) < (int)(a))

/* Function: double_value @ 00010520 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: process_char @ 00010548 */

byte process_char(byte param_1)

{
 if ((0x40 < param_1) && (param_1 < 0x5b)) {
 param_1 = param_1 + 0x20;
 }
 return param_1;
}



/* Function: process_short @ 00010598 */

int process_short(short param_1,short param_2)

{
 return (int)(short)(param_1 + param_2);
}



/* Function: process_int @ 000105e4 */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: process_long @ 00010610 */

int process_long(int param_1)

{
 return param_1 << 1;
}



/* Function: process_ll @ 00010638 */

undefined8 process_ll(uint param_1,int param_2)

{
 return CONCAT44(param_2 * param_1 + param_1 * param_2 +
 (int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20),
 (int)((ulonglong)param_1 * (ulonglong)param_1));
}



/* Function: process_float @ 00010690 */

undefined4 process_float(undefined4 param_1)

{
 undefined4 uVar1;
 
 uVar1 = __mulsf3(param_1,0x3fc00000);
 uVar1 = __addsf3(uVar1,0x3f000000,0,0);
 return uVar1;
}



/* Function: process_double @ 000106cc */

undefined4 process_double(undefined4 param_1,undefined4 param_2)

{
 undefined4 uVar1;
 undefined8 uVar2;
 
 uVar2 = __aeabi_ddiv(param_1,param_2,0,0x40000000);
 uVar1 = __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x9999999a,0x3fb99999);
 return uVar1;
}



/* Function: process_ld @ 00010730 */

undefined4 process_ld(undefined4 param_1,undefined4 param_2)

{
 undefined4 uVar1;
 undefined8 uVar2;
 
 uVar2 = __muldf3(param_1,param_2,param_1,param_2);
 uVar1 = __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x3ff00000);
 return uVar1;
}



/* Function: process_bool @ 00010790 */

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



/* Function: const_param @ 000107e0 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 0001080c */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 00010850 */

void test_data_types_l1(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined8 uVar3;
 undefined4 local_14;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 puts(&DAT_000133b0);
 uVar1 = process_char(0x41);
 printf("DT-L1-01 (process_char): %c\n",uVar1);
 uVar1 = process_char(0x62);
 printf("DT-L1-01 (process_char): %c\n",uVar1);
 uVar1 = process_short(100,200);
 printf("DT-L1-02 (process_short): %d\n",uVar1);
 uVar1 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n",uVar1);
 uVar1 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n",uVar1);
 uVar3 = process_ll(100,0);
 uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
 printf("DT-L1-05 (process_ll): %lld\n",uVar1,(int)uVar3,uVar1);
 uVar1 = process_float(0x40000000);
 uVar3 = __extendsfdf2(uVar1);
 uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
 printf("DT-L1-06 (process_float): %.2f\n",uVar1,(int)uVar3,uVar1);
 uVar3 = process_double(0,0x40100000);
 uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
 printf("DT-L1-07 (process_double): %.2f\n",uVar1,(int)uVar3,uVar1);
 uVar3 = process_ld(0,0x40080000);
 uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
 printf("DT-L1-08 (process_ld): %.2Lf\n",uVar1,(int)uVar3,uVar1);
 uVar1 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n",uVar1);
 uVar1 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n",uVar1);
 uVar1 = process_bool(0xfffffffe);
 printf("DT-L1-09 (process_bool): %d\n",uVar1);
 local_14 = 5;
 uVar1 = const_param(&local_14);
 printf("DT-L1-10 (const_param): %d\n",uVar1);
 local_10 = 10;
 uVar1 = volatile_access(&local_10);
 iVar2 = printf("DT-L1-11 (volatile_access): %d\n",uVar1);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2);
 }
 return;
}



/* Function: array_1d_stack @ 00010a5c */

int array_1d_stack(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_1 + local_c * 4);
 }
 return local_10;
}



/* Function: array_string @ 00010ad4 */

int array_string(int param_1)

{
 undefined4 local_c;
 
 for (local_c = 0; *(char *)(param_1 + local_c) != '\0'; local_c = local_c + 1) {
 }
 return local_c;
}



/* Function: array_2d_stack @ 00010b28 */

int array_2d_stack(int param_1)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < 10; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_1 + local_c * 0x2c);
 }
 return local_10;
}



/* Function: array_3d @ 00010bac */

int array_3d(int param_1)

{
 undefined4 local_18;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_18 = 0;
 for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
 for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
 for (local_c = 0; local_c < 5; local_c = local_c + 1) {
 local_18 = local_18 + *(int *)(param_1 + local_14 * 100 + (local_10 * 5 + local_c) * 4);
 }
 }
 }
 return local_18;
}



/* Function: array_vla @ 00010c94 */

int array_vla(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_2 + local_c * 4);
 }
 return local_10;
}



/* Function: array_pointer @ 00010d0c */

int array_pointer(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_1 + local_c * 0x28);
 }
 return local_10;
}



/* Function: pointer_array @ 00010d94 */

int pointer_array(int param_1,int param_2)

{
 int local_14;
 int local_10;
 
 local_14 = 0;
 if (9 < param_2) {
 param_2 = 10;
 }
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 if (*(int *)(param_1 + local_10 * 4) != 0) {
 local_14 = local_14 + **(int **)(param_1 + local_10 * 4);
 }
 }
 return local_14;
}



/* Function: array_complex_index @ 00010e40 */

undefined4 array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 uVar1;
 
 if ((((param_4 < 0) || (param_2 <= param_4)) || (param_5 < 0)) || (param_3 <= param_5)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(undefined4 *)(param_1 + (param_5 * param_2 + param_4) * 4);
 }
 return uVar1;
}



/* Function: array_oob @ 00010ed0 */

int array_oob(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c <= param_2; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_1 + local_c * 4);
 }
 return local_10;
}



/* Function: test_array_types @ 00010f48 */

void test_array_types(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 local_520;
 undefined4 local_51c;
 undefined4 local_518;
 int local_514;
 int local_510;
 int local_50c;
 int local_508;
 int local_504;
 int local_500;
 int local_4fc;
 undefined4 local_4f8;
 undefined4 uStack_4f4;
 undefined4 uStack_4f0;
 undefined4 local_4ec;
 undefined4 uStack_4e8;
 undefined4 uStack_4e4;
 undefined4 uStack_4e0;
 undefined4 local_4dc;
 undefined4 *local_4d8;
 undefined4 *local_4d4;
 undefined4 *local_4d0;
 int aiStack_4b0 [20];
 int aiStack_460 [50];
 int aiStack_398 [100];
 undefined4 auStack_208 [125];
 char local_14 [4];
 undefined2 local_10;
 int local_c;
 
 local_c = 0;
 puts(&DAT_00013530);
 local_4ec = 1;
 uStack_4e8 = 2;
 uStack_4e4 = 3;
 uStack_4e0 = 4;
 local_4dc = 5;
 uVar1 = array_1d_stack(&local_4ec,5);
 printf("ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_14[0] = 'h';
 local_14[1] = 'e';
 local_14[2] = 'l';
 local_14[3] = 'l';
 local_10 = 0x6f;
 uVar1 = array_string(local_14);
 printf("ARR-L1-02 (array_string): %d\n",uVar1);
 for (local_514 = 0; local_514 < 10; local_514 = local_514 + 1) {
 for (local_510 = 0; local_510 < 10; local_510 = local_510 + 1) {
 iVar2 = local_514;
 if (local_514 != local_510) {
 iVar2 = 0;
 }
 aiStack_398[local_514 * 10 + local_510] = iVar2;
 }
 }
 uVar1 = array_2d_stack(aiStack_398);
 printf("ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 for (local_50c = 0; local_50c < 5; local_50c = local_50c + 1) {
 for (local_508 = 0; local_508 < 5; local_508 = local_508 + 1) {
 for (local_504 = 0; local_504 < 5; local_504 = local_504 + 1) {
 auStack_208[local_508 * 5 + local_50c * 0x19 + local_504] = 1;
 }
 }
 }
 uVar1 = array_3d(auStack_208);
 printf("ARR-L1-04 (array_3d): %d\n",uVar1);
 local_4f8 = 10;
 uStack_4f4 = 0x14;
 uStack_4f0 = 0x1e;
 uVar1 = array_vla(3,&local_4f8);
 printf("ARR-L2-01 (array_vla): %d\n",uVar1);
 for (local_500 = 0; local_500 < 5; local_500 = local_500 + 1) {
 aiStack_460[local_500 * 10] = local_500 * 10;
 }
 uVar1 = array_pointer(aiStack_460,5);
 printf("ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_520 = 10;
 local_51c = 0x14;
 local_518 = 0x1e;
 memset(&local_4d8,0,0x28);
 local_4d8 = &local_520;
 local_4d4 = &local_51c;
 local_4d0 = &local_518;
 uVar1 = pointer_array(&local_4d8,3);
 printf("ARR-L2-03 (pointer_array): %d\n",uVar1);
 for (local_4fc = 0; local_4fc < 0x14; local_4fc = local_4fc + 1) {
 aiStack_4b0[local_4fc] = local_4fc;
 }
 uVar1 = array_complex_index(aiStack_4b0,5,4,2,3);
 iVar2 = printf("ARR-L2-04 (array_complex_index): %d\n",uVar1);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2);
}



/* Function: ptr_single @ 00011378 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 000113a4 */

int ptr_double(undefined4 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 000113d4 */

int ptr_triple(undefined4 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00011408 */

int ptr_increment(int *param_1,int param_2)

{
 int *local_14;
 int local_10;
 int local_c;
 
 local_10 = 0;
 local_14 = param_1;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 + *local_14;
 local_14 = local_14 + 1;
 }
 return local_10;
}



/* Function: ptr_offset @ 00011480 */

undefined4 ptr_offset(int param_1,int param_2)

{
 return *(undefined4 *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 000114b8 */

int ptr_diff(int param_1,int param_2)

{
 return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 000114ec */

uint ptr_void(uint *param_1,int param_2)

{
 uint uVar1;
 
 if (param_2 == 0) {
 uVar1 = *param_1;
 }
 else if (param_2 == 1) {
 uVar1 = (uint)(byte)*param_1;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: ptr_const @ 00011544 */

int ptr_const(int *param_1)

{
 return *param_1 << 1;
}



/* Function: ptr_const_ptr @ 00011570 */

int ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return *param_1;
}



/* Function: ptr_func_simple @ 000115ac */

undefined4 ptr_func_simple(code *param_1,undefined4 param_2)

{
 undefined4 uVar1;
 
 uVar1 = (*param_1)(param_2);
 return uVar1;
}



/* Function: ptr_func_complex @ 000115dc */

undefined4 ptr_func_complex(code *param_1,undefined4 param_2)

{
 undefined4 uVar1;
 undefined *local_14;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 local_14 = &DAT_00013674;
 local_10 = 0;
 uVar1 = (*param_1)(param_2);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar1,local_c,0);
 }
 return uVar1;
}



/* Function: ptr_cast @ 00011658 */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00011698 */

undefined4 opaque_handle_create(undefined4 param_1)

{
 return param_1;
}



/* Function: opaque_handle_op @ 000116bc */

int opaque_handle_op(int param_1)

{
 return param_1 << 1;
}



/* Function: complex_callback @ 000116e4 */

bool complex_callback(int *param_1,int *param_2)

{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}



/* Function: test_pointer_types @ 00011734 */

void test_pointer_types(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined1 local_81;
 undefined4 local_80;
 undefined4 local_7c;
 undefined4 *local_78;
 undefined4 local_74;
 undefined4 *local_70;
 undefined4 **local_6c;
 undefined4 local_68;
 undefined4 local_64;
 undefined4 local_60;
 undefined4 local_5c;
 undefined4 local_58;
 undefined4 **local_54;
 undefined4 **local_50;
 undefined4 local_4c;
 undefined4 local_48;
 undefined4 uStack_44;
 undefined4 uStack_40;
 undefined4 uStack_3c;
 undefined4 local_38;
 undefined4 local_34;
 undefined4 uStack_30;
 undefined4 uStack_2c;
 undefined4 uStack_28;
 undefined4 local_24;
 undefined4 local_20;
 undefined4 uStack_1c;
 undefined4 uStack_18;
 undefined4 uStack_14;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 puts(&DAT_0001367c);
 local_80 = 5;
 uVar1 = ptr_single(&local_80);
 printf("PTR-L2-01 (ptr_single): %d\n",uVar1);
 local_7c = 10;
 local_78 = &local_7c;
 local_54 = &local_78;
 uVar1 = ptr_double(local_54);
 printf("PTR-L2-02 (ptr_double): %d\n",uVar1);
 local_74 = 5;
 local_70 = &local_74;
 local_6c = &local_70;
 local_50 = &local_6c;
 uVar1 = ptr_triple(local_50);
 printf("PTR-L2-03 (ptr_triple): %d\n",uVar1);
 local_48 = 1;
 uStack_44 = 2;
 uStack_40 = 3;
 uStack_3c = 4;
 local_38 = 5;
 uVar1 = ptr_increment(&local_48,5);
 printf("PTR-L2-04 (ptr_increment): %d\n",uVar1);
 local_34 = 10;
 uStack_30 = 0x14;
 uStack_2c = 0x1e;
 uStack_28 = 0x28;
 local_24 = 0x32;
 uVar1 = ptr_offset(&local_34,2);
 printf("PTR-L2-05 (ptr_offset): %d\n",uVar1);
 local_20 = 0;
 uStack_1c = 10;
 uStack_18 = 0x14;
 uStack_14 = 0x1e;
 local_10 = 0x28;
 uVar1 = ptr_diff(&local_10,&local_20);
 printf("PTR-L2-06 (ptr_diff): %d\n",uVar1);
 local_68 = 0x2a;
 local_81 = 0x41;
 uVar1 = ptr_void(&local_68,0);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar1);
 uVar1 = ptr_void(&local_81,1);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar1);
 local_64 = 10;
 uVar1 = ptr_const(&local_64);
 printf("PTR-L2-08 (ptr_const): %d\n",uVar1);
 local_60 = 10;
 uVar1 = ptr_const_ptr(&local_60);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",uVar1);
 uVar1 = ptr_func_simple(double_value,5);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
 local_5c = 5;
 uVar1 = ptr_func_complex(complex_callback,&local_5c);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 local_58 = 0x12345678;
 uVar1 = ptr_cast(&local_58);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",uVar1);
 local_4c = opaque_handle_create(10);
 uVar1 = opaque_handle_op(local_4c);
 iVar2 = printf("PTR-L2-13 (opaque_handle_op): %d\n",uVar1);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2);
 }
 return;
}



/* Function: struct_simple @ 00011a40 */

int struct_simple(int *param_1)

{
 return *param_1 + param_1[1] + param_1[2];
}



/* Function: struct_array @ 00011a80 */

int struct_array(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 +
 *(int *)(param_1 + local_c * 0xc) + *(int *)(param_1 + local_c * 0xc + 4) +
 *(int *)(param_1 + local_c * 0xc + 8);
 }
 return local_10;
}



/* Function: struct_nested @ 00011b58 */

int struct_nested(int *param_1)

{
 return *param_1 + param_1[3];
}



/* Function: struct_deep @ 00011b8c */

int struct_deep(int param_1)

{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}



/* Function: struct_with_ptr @ 00011bc0 */

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



/* Function: struct_bitfields @ 00011c10 */

short struct_bitfields(ushort *param_1)

{
 return ((byte)*param_1 & 1) + ((byte)((byte)*param_1 >> 1) & 3) +
 ((byte)((byte)*param_1 >> 3) & 7) + (*param_1 >> 6);
}



/* Function: union_type @ 00011c8c */

uint union_type(uint *param_1,int param_2)

{
 uint uVar1;
 
 if (param_2 == 0) {
 uVar1 = *param_1;
 }
 else if (param_2 == 1) {
 uVar1 = __fixsfsi(*param_1);
 }
 else {
 uVar1 = (uint)(byte)*param_1;
 }
 return uVar1;
}



/* Function: union_array @ 00011cf0 */

int union_array(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_1 + local_c * 4);
 }
 return local_10;
}



/* Function: enum_type @ 00011d68 */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 00011d9c */

undefined4 enum_switch(undefined4 param_1)

{
 undefined4 uVar1;
 
 switch(param_1) {
 case 0:
 uVar1 = 0;
 break;
 case 1:
 uVar1 = 100;
 break;
 case 2:
 uVar1 = 0x32;
 break;
 case 3:
 uVar1 = 0xffffffff;
 break;
 default:
 uVar1 = 0xffffff9d;
 }
 return uVar1;
}



/* Function: struct_func_ptr @ 00011e00 */

undefined4 struct_func_ptr(undefined4 *param_1)

{
 undefined4 uVar1;
 
 uVar1 = (*(code *)param_1[1])(*param_1);
 return uVar1;
}



/* Function: linked_list @ 00011e38 */

int linked_list(int *param_1)

{
 int local_10;
 int *local_c;
 
 local_10 = 0;
 for (local_c = param_1; local_c != (int *)0x0; local_c = (int *)local_c[1]) {
 local_10 = local_10 + *local_c;
 }
 return local_10;
}



/* Function: doubly_linked_list @ 00011e9c */

int doubly_linked_list(int *param_1)

{
 int local_10;
 int *local_c;
 
 local_10 = 0;
 for (local_c = param_1; local_c != (int *)0x0; local_c = (int *)local_c[1]) {
 local_10 = local_10 + *local_c;
 }
 return local_10;
}



/* Function: binary_tree_sum @ 00011f00 */

int binary_tree_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (param_1 == (int *)0x0) {
 iVar2 = 0;
 }
 else {
 iVar3 = *param_1;
 iVar1 = binary_tree_sum(param_1[1]);
 iVar2 = binary_tree_sum(param_1[2]);
 iVar2 = iVar3 + iVar1 + iVar2;
 }
 return iVar2;
}



/* Function: binary_tree @ 00011f68 */

undefined4 binary_tree(undefined4 param_1)

{
 undefined4 uVar1;
 
 uVar1 = binary_tree_sum(param_1);
 return uVar1;
}



/* Function: graph_traverse @ 00011f90 */

int graph_traverse(int param_1)

{
 int local_14;
 int local_10;
 int *local_c;
 
 local_14 = 0;
 for (local_10 = 0; local_10 < *(int *)(param_1 + 0x28); local_10 = local_10 + 1) {
 for (local_c = *(int **)(param_1 + local_10 * 4); local_c != (int *)0x0;
 local_c = (int *)local_c[1]) {
 local_14 = local_14 + *local_c;
 }
 }
 return local_14;
}



/* Function: test_composite_types @ 00012028 */

void test_composite_types(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 local_114;
 undefined4 local_110;
 undefined4 local_10c;
 undefined4 *local_108;
 undefined4 local_104;
 undefined4 uStack_100;
 undefined4 uStack_fc;
 code *pcStack_f8;
 undefined4 local_f4;
 undefined4 local_f0;
 undefined4 local_ec;
 undefined4 uStack_e8;
 undefined4 uStack_e4;
 undefined4 local_e0;
 undefined4 local_dc;
 undefined4 local_d8;
 undefined4 local_d4;
 undefined4 uStack_d0;
 undefined4 uStack_cc;
 undefined4 uStack_c8;
 undefined4 local_c4;
 undefined4 local_c0;
 undefined4 uStack_bc;
 undefined4 uStack_b8;
 undefined4 uStack_b4;
 undefined4 local_b0;
 undefined4 uStack_ac;
 undefined4 uStack_a8;
 undefined4 uStack_a4;
 undefined4 local_a0;
 undefined4 uStack_9c;
 undefined4 uStack_98;
 undefined4 uStack_94;
 undefined4 local_90;
 undefined4 local_8c;
 undefined4 uStack_88;
 undefined4 uStack_84;
 undefined4 local_80;
 undefined4 uStack_7c;
 undefined4 uStack_78;
 undefined4 uStack_74;
 undefined4 local_70;
 undefined4 uStack_6c;
 undefined4 local_68;
 undefined4 *local_64;
 undefined4 local_60;
 undefined4 *local_5c;
 undefined4 local_58;
 undefined4 local_54;
 undefined4 local_50;
 undefined4 *local_4c;
 undefined4 local_48;
 undefined4 local_44;
 undefined4 local_40;
 undefined4 *local_3c;
 undefined4 *local_38 [10];
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 puts(&DAT_0001384c);
 local_ec = 1;
 uStack_e8 = 2;
 uStack_e4 = 3;
 uVar1 = struct_simple(&local_ec);
 printf("CMP-L2-01 (struct_simple): %d\n",uVar1);
 local_80 = 1;
 uStack_7c = 1;
 uStack_78 = 1;
 uStack_74 = 2;
 local_70 = 2;
 uStack_6c = 2;
 uVar1 = struct_array(&local_80,2);
 printf("CMP-L2-02 (struct_array): %d\n",uVar1);
 local_d4 = 5;
 uStack_d0 = 10;
 uStack_cc = 0;
 uStack_c8 = 100;
 local_c4 = 200;
 uVar1 = struct_nested(&local_d4);
 printf("CMP-L2-03 (struct_nested): %d\n",uVar1);
 local_c0 = 1;
 uStack_bc = 2;
 uStack_b8 = 3;
 uStack_b4 = 10;
 local_b0 = 0x14;
 uStack_ac = 0xff;
 uStack_a8 = 0;
 uStack_a4 = 0;
 local_a0 = 0;
 uStack_9c = 0;
 uStack_98 = 0xff;
 uStack_94 = 0x2a;
 uVar1 = struct_deep(&local_c0);
 printf("CMP-L2-04 (struct_deep): %d\n",uVar1);
 local_114 = 0x14;
 local_110 = 0;
 local_10c = 10;
 local_108 = &local_114;
 uVar1 = struct_with_ptr(&local_10c);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_104 = 0x191d;
 uStack_100 = 0;
 uVar1 = struct_bitfields(&local_104);
 printf("CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 local_90 = 0x12345678;
 uVar1 = union_type(&local_90,0);
 printf("CMP-L2-07 (union_type): %d\n",uVar1);
 local_8c = 10;
 uStack_88 = 0x14;
 uStack_84 = 0x1e;
 uVar1 = union_array(&local_8c,3);
 printf("CMP-L2-08 (union_array): %d\n",uVar1);
 uVar1 = enum_type(1);
 printf("CMP-L2-09 (enum_type): %d\n",uVar1);
 uVar1 = enum_switch(2);
 printf("CMP-L2-10 (enum_switch): %d\n",uVar1);
 uStack_fc = 10;
 pcStack_f8 = process_int;
 uVar1 = struct_func_ptr(&uStack_fc);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
 local_68 = 10;
 local_64 = &local_60;
 local_60 = 0x14;
 local_5c = &local_58;
 local_58 = 0x1e;
 local_54 = 0;
 uVar1 = linked_list(&local_68);
 printf("CMP-L2-12 (linked_list): %d\n",uVar1);
 local_50 = 10;
 local_48 = 0;
 local_44 = 0x14;
 local_40 = 0;
 local_3c = &local_50;
 local_4c = &local_44;
 uVar1 = doubly_linked_list(&local_50);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_e0 = 100;
 local_dc = 0;
 local_d8 = 0;
 uVar1 = binary_tree(&local_e0);
 printf("CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_f4 = 1;
 local_f0 = 0;
 memset(local_38,0,0x2c);
 local_10 = 2;
 local_38[0] = &local_f4;
 uVar1 = graph_traverse(local_38);
 iVar2 = printf("CMP-L2-15 (graph_traverse): %d\n",uVar1);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2);
 }
 return;
}



/* Function: main @ 00012410 */

undefined4 main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* Function: FUN_00012434 @ 00012434 */

ulonglong FUN_00012434(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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
 uint extraout_r2_local, extraout_r3_local, extraout_r12_local, in_r12_local, unaff_r4_local;
 in_r12_local = uVar6;
 unaff_r4_local = unaff_r5;
 uVar14 = FUN_00012614(&param_1,&param_2,&param_3,&param_4,&extraout_r2_local,&extraout_r3_local,&extraout_r12_local,&in_r12_local,&unaff_r4_local);
 param_3 = extraout_r2_local;
 param_4 = extraout_r3_local;
 uVar10 = extraout_r12_local;
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



/* Function: FUN_00012614 @ 00012614 */

ulonglong FUN_00012614(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *extraout_r2,uint *extraout_r3,uint *extraout_r12,uint *in_r12,uint *unaff_r4)

{
 bool bVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint in_r12_val;
 
 uVar4 = *in_r12 & *param_4 >> 0x14;
 if (*unaff_r4 != *in_r12 && uVar4 != *in_r12) {
 if (*param_1 == 0 && (*param_2 & 0x7fffffff) == 0 || *param_3 == 0 && (*param_4 & 0x7fffffff) == 0)
 {
 *extraout_r2 = *param_2;
 *extraout_r3 = *param_1;
 *extraout_r12 = *param_2 >> 0x14;
 return (ulonglong)((*param_2 ^ *param_4) & 0x80000000) << 0x20;
 }
 if (*unaff_r4 == 0) {
 uVar5 = *param_2 & 0x80000000;
 do {
 iVar2 = *param_1 >> 0x1f;
 *param_1 = *param_1 << 1;
 *param_2 = *param_2 * 2 - iVar2;
 } while ((*param_2 & 0x100000) == 0);
 *param_2 = *param_2 | uVar5;
 if (uVar4 != 0) {
 *extraout_r2 = *param_2;
 *extraout_r3 = *param_1;
 *extraout_r12 = *param_2 >> 0x14;
 return CONCAT44(*param_2,*param_1);
 }
 }
 do {
 iVar2 = *param_3 >> 0x1f;
 *param_3 = *param_3 << 1;
 *param_4 = *param_4 * 2 - iVar2;
 } while ((*param_4 & 0x100000) == 0);
 *extraout_r2 = *param_2;
 *extraout_r3 = *param_1;
 *extraout_r12 = *param_2 >> 0x14;
 return CONCAT44(*param_2,*param_1);
 }
 bVar1 = (*param_2 & 0x7fffffff) != 0;
 uVar5 = *param_4;
 iVar2 = *param_3;
 if (*param_1 != 0 || bVar1) {
 uVar5 = *param_2;
 iVar2 = *param_1;
 }
 uVar3 = uVar5;
 if ((((*param_1 != 0 || bVar1) && (*param_3 != 0 || (*param_4 & 0x7fffffff) != 0)) &&
 ((*unaff_r4 != *in_r12 || (iVar2 == 0 && (uVar5 & 0xfffff) == 0)))) &&
 ((uVar4 != *in_r12 ||
 (iVar2 = *param_3, uVar3 = *param_4, *param_3 == 0 && (*param_4 & 0xfffff) == 0)))) {
 *extraout_r2 = uVar3;
 *extraout_r3 = iVar2;
 *extraout_r12 = uVar5 >> 0x14;
 return (ulonglong)((uVar5 ^ *param_4) & 0x80000000 | 0x7ff00000) << 0x20;
 }
 *extraout_r2 = uVar3;
 *extraout_r3 = iVar2;
 *extraout_r12 = uVar5 >> 0x14;
 return CONCAT44(uVar3,iVar2) | 0x7ff8000000000000;
}



/* Function: __mulsf3 @ 000126a0 */

undefined4 __mulsf3(undefined4 param_1,undefined4 param_2)

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
 uint param_3;
 uint param_4;
 
 param_3 = param_2;
 param_4 = 0;
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
 goto LAB_0001281c;
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
LAB_0001281c:
 return uVar9 & 0x80000000 | 0x7f800000;
}



/* Function: __aeabi_drsub @ 00012838 */

static ulonglong __aeabi_drsub(undefined4 param_1,uint param_2)

{
 return __aeabi_dadd(param_1,param_2 ^ 0x80000000,0,0);
}



/* Function: __subdf3 @ 00012840 */

static ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_00012ab4:
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
 if (0xffbfffff < uVar11 * 0x200000) goto LAB_00012ab4;
 }
LAB_0001295c:
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
 if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_0001295c;
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
 goto LAB_000129dc;
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
LAB_000129dc:
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




/* CRT stub function __aeabi_dadd removed by preprocessor */




/* Function: __aeabi_ui2d @ 00012af0 */

static ulonglong __aeabi_ui2d(uint param_1)

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
 goto LAB_000129dc;
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
LAB_000129dc:
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



/* Function: __floatsidf @ 00012b14 */

static ulonglong __floatsidf(uint param_1)

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
 goto LAB_000129dc;
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
LAB_000129dc:
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



/* Function: __extendsfdf2 @ 00012b3c */

static ulonglong __extendsfdf2(undefined4 param_1)

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
 uVar3 = uVar2 & 0xff000000;
 bVar10 = uVar3 == 0;
 }
 if (!bVar10) {
 bVar10 = uVar3 == 0xff000000;
 }
 if (!bVar10) {
 return CONCAT44(uVar1,param_1) ^ 0x3800000000000000;
 }
 if ((uVar2 & 0xffffff) == 0) {
 return CONCAT44(uVar1,param_1);
 }
 if (uVar3 == 0xff000000) {
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
 goto LAB_000129dc;
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
LAB_000129dc:
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



/* Function: __floatundidf @ 00012b84 */

static ulonglong __floatundidf(uint param_1,uint param_2)

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
LAB_0001295c:
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
 if (bVar12 && 0xfffff < param_2) goto LAB_0001295c;
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
 goto LAB_000129dc;
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
LAB_000129dc:
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



/* Function: __aeabi_l2d @ 00012b98 */

static ulonglong __aeabi_l2d(uint param_1,uint param_2)

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
LAB_0001295c:
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
 if (bVar13 && 0xfffff < uVar4) goto LAB_0001295c;
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
 goto LAB_000129dc;
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
LAB_000129dc:
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



/* Function: __muldf3 @ 00012bf8 */

static ulonglong __muldf3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
 uint in_r12_local, unaff_r4_local;
 in_r12_local = uVar6;
 unaff_r4_local = unaff_r5;
 uVar14 = FUN_00012dd8(&param_1,&param_2,&param_3,&param_4,&in_r12_local,&unaff_r4_local);
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



/* Function: FUN_00012dd8 @ 00012dd8 */

ulonglong FUN_00012dd8(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *in_r12,uint *unaff_r4)

{
 bool bVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint in_r12_val;
 uint extraout_r2;
 uint extraout_r3;
 uint extraout_r12;
 
 uVar4 = *in_r12 & *param_4 >> 0x14;
 if (*unaff_r4 != *in_r12 && uVar4 != *in_r12) {
 if (*param_1 == 0 && (*param_2 & 0x7fffffff) == 0 || *param_3 == 0 && (*param_4 & 0x7fffffff) == 0)
 {
 extraout_r2 = *param_2;
 extraout_r3 = *param_1;
 extraout_r12 = *param_2 >> 0x14;
 *in_r12 = extraout_r12;
 *unaff_r4 = extraout_r12;
 return (ulonglong)((*param_2 ^ *param_4) & 0x80000000) << 0x20;
 }
 if (*unaff_r4 == 0) {
 uVar5 = *param_2 & 0x80000000;
 do {
 iVar2 = *param_1 >> 0x1f;
 *param_1 = *param_1 << 1;
 *param_2 = *param_2 * 2 - iVar2;
 } while ((*param_2 & 0x100000) == 0);
 *param_2 = *param_2 | uVar5;
 if (uVar4 != 0) {
 extraout_r2 = *param_2;
 extraout_r3 = *param_1;
 extraout_r12 = *param_2 >> 0x14;
 *in_r12 = extraout_r12;
 *unaff_r4 = extraout_r12;
 return CONCAT44(*param_2,*param_1);
 }
 }
 do {
 iVar2 = *param_3 >> 0x1f;
 *param_3 = *param_3 << 1;
 *param_4 = *param_4 * 2 - iVar2;
 } while ((*param_4 & 0x100000) == 0);
 extraout_r2 = *param_2;
 extraout_r3 = *param_1;
 extraout_r12 = *param_2 >> 0x14;
 *in_r12 = extraout_r12;
 *unaff_r4 = extraout_r12;
 return CONCAT44(*param_2,*param_1);
 }
 bVar1 = (*param_2 & 0x7fffffff) != 0;
 uVar5 = *param_4;
 iVar2 = *param_3;
 if (*param_1 != 0 || bVar1) {
 uVar5 = *param_2;
 iVar2 = *param_1;
 }
 uVar3 = uVar5;
 if ((((*param_1 != 0 || bVar1) && (*param_3 != 0 || (*param_4 & 0x7fffffff) != 0)) &&
 ((*unaff_r4 != *in_r12 || (iVar2 == 0 && (uVar5 & 0xfffff) == 0)))) &&
 ((uVar4 != *in_r12 ||
 (iVar2 = *param_3, uVar3 = *param_4, *param_3 == 0 && (*param_4 & 0xfffff) == 0)))) {
 extraout_r2 = uVar5;
 extraout_r3 = iVar2;
 extraout_r12 = uVar5 >> 0x14;
 *in_r12 = extraout_r12;
 *unaff_r4 = extraout_r12;
 return (ulonglong)((uVar5 ^ *param_4) & 0x80000000 | 0x7ff00000) << 0x20;
 }
 extraout_r2 = uVar3;
 extraout_r3 = iVar2;
 extraout_r12 = uVar5 >> 0x14;
 *in_r12 = extraout_r12;
 *unaff_r4 = extraout_r12;
 return CONCAT44(uVar3,iVar2) | 0x7ff8000000000000;
}




/* CRT stub function __aeabi_ddiv removed by preprocessor */




/* Function: FUN_00012ff8 @ 00012ff8 */

ulonglong FUN_00012ff8(int param_1,uint param_2,int param_3,uint param_4)

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
LAB_00012e40:
 return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
 }
 }
 else if (uVar2 == in_r12) {
 param_1 = param_3;
 uVar3 = param_4;
 if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
LAB_00012df4:
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
 if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) goto LAB_00012e40;
 if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) goto LAB_00012df4;
 }
 }
 return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}



/* Function: __aeabi_frsub @ 00013068 */

void __aeabi_frsub(uint param_1)

{
 __addsf3(param_1 ^ 0x80000000, 0, 0, 0);
 return;
}




/* CRT stub function __aeabi_fsub removed by preprocessor */




/* Function: __addsf3 @ 00013074 */

uint __addsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
LAB_000131d4:
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
 if (0xfd < uVar7) goto LAB_000131d4;
 }
 }
 uVar4 = uVar4 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar6);
 if (uVar6 == 0x80000000) {
 uVar4 = uVar4 & 0xfffffffe;
 }
 return uVar4 | param_1;
}



/* Function: __aeabi_ui2f @ 00013204 */

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



/* Function: __floatsisf @ 0001320c */

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



/* Function: __floatundisf @ 0001322c */

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



/* Function: __aeabi_l2f @ 0001323c */

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



/* Function: __fixsfsi @ 000132b8 */

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
