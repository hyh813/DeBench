/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra-specific type definitions */
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef unsigned char byte;
typedef void (*code)(void);

/* Ghidra CONCAT macros */
#define CONCAT14(a,b) ((ulong)(a) << 8 | (ulong)(b))
#define CONCAT15(a,b) ((ulong)(a) << 16 | (ulong)(b))
#define CONCAT16(a,b) ((ulong)(a) << 24 | (ulong)(b))
#define CONCAT17(a,b) ((ulong)(a) << 32 | (ulong)(b))
#define CONCAT12(a,b) ((ulong)(a) << 4 | (ulong)(b))
#define CONCAT13(a,b) ((ulong)(a) << 8 | (ulong)(b))
#define CONCAT11(a,b) ((ulong)(a) | (ulong)(b))
#define CONCAT44(hi,lo) (((ulong)(hi) << 32) | ((ulong)(lo) & 0xffffffff))

/* Global variable declarations */
long ___stack_chk_guard = 0;
long __stack_chk_guard = 0;
int global_counter = 0;
int file_scope_static = 0;
undefined8 global_func_ptr = 0;
int counter_1 = 0;
int extern_global_var = 0;
char const_string[16] = {0};
int global_array[10] = {0};
char DAT_00102428[32] = {0};
char DAT_00102578[32] = {0};
char DAT_001025f8[32] = {0};
char DAT_00102588[32] = {0};
char DAT_001025b0[32] = {0};
char DAT_001022b8[32] = {0};
char DAT_00102628[32] = {0};
char DAT_001028d8[32] = {0};
char completed_0 = 0;
void *__dso_handle = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/3/3_gcc_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001009b0 @ 001009b0 */

void FUN_001009b0(void)

{
 (*(code *)(undefined1 *)0x0)();
 return;
}



/* Function prototypes */
void test_stack_memory(void);
void test_heap_memory(void);
void test_static_global(void);
void test_memory_op_functions(void);
void __cxa_finalize(void *);
void deregister_tm_clones(void);
void __stack_chk_fail(void);
int extern_function(int);
ulong memop_memset(byte *param_1,size_t param_2,int param_3);
ulong memop_bzero(byte *param_1,size_t param_2);
ulong memop_memmove(void *param_1,ulong param_2);
int memop_memcmp(void *param_1,void *param_2,size_t param_3);
ulong memop_bcopy(void *param_1,void *param_2,size_t param_3);
undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3);
undefined4 memop_unaligned_access(long param_1);
int memop_memory_barrier(int *param_1);
void DataMemoryBarrier(int param_1, int param_2);

/* Function: DataMemoryBarrier */
void DataMemoryBarrier(int param_1, int param_2)
{
 (void)param_1;
 (void)param_2;
 return;
}

/* Function: main @ 00100b00 */

undefined8 main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100bfc @ 00100bfc */

void FUN_00100bfc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 00100c60 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: alloca_usage.constprop.0 @ 00100c70 */

undefined8 alloca_usage_constprop_0(void)

{
 return 0xf;
}



/* Function: local_vars @ 00100c80 */

int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 00100c90 */

int local_array(int param_1)

{
 return param_1 * 5;
}



/* Function: local_struct @ 00100cb0 */

int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 00100cc0 */

void address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return;
}



/* Function: address_of_array @ 00100cd0 */

int address_of_array(int *param_1)

{
 return *param_1 << 1;
}



/* Function: large_stack_frame @ 00100ce0 */

/* WARNING: Removing unreachable block (ram,0x00100d84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void large_stack_frame(void)

{
 char cVar1;
 char cVar2;
 char cVar3;
 char cVar4;
 undefined8 *puVar5;
 undefined8 *puVar6;
 undefined8 uVar7;
 undefined8 uVar8;
 undefined8 auStack_810 [256];
 undefined8 auStack_10 [2];
 
 puVar5 = auStack_810;
 uVar7 = 0x100000000;
 uVar8 = 0x300000002;
 do {
 cVar3 = (char)uVar7;
 cVar4 = (char)((ulong)uVar7 >> 0x20);
 cVar2 = (char)uVar8;
 cVar1 = (char)((ulong)uVar8 >> 0x20);
 puVar6 = puVar5 + 2;
 puVar5[1] = CONCAT17(cVar1 + '\f',
 CONCAT16(cVar2 + '\f',
 CONCAT15(cVar4 + '\f',
 CONCAT14(cVar3 + '\f',
 CONCAT13(cVar1 + '\b',
 CONCAT12(cVar2 + '\b',
 CONCAT11(cVar4 + '\b',
 cVar3 + '\b')))))));
 *puVar5 = CONCAT17(cVar1 + '\x04',
 CONCAT16(cVar2 + '\x04',
 CONCAT15(cVar4 + '\x04',
 CONCAT14(cVar3 + '\x04',
 CONCAT13(cVar1,CONCAT12(cVar2,CONCAT11(cVar4,cVar3
 )))))));
 puVar5 = puVar6;
 uVar7 = CONCAT44((int)((ulong)uVar7 >> 0x20) + 0x10,(int)uVar7 + 0x10);
 uVar8 = CONCAT44((int)((ulong)uVar8 >> 0x20) + 0x10,(int)uVar8 + 0x10);
 } while (auStack_10 != puVar6);
 return;
}



/* Function: vla_stack @ 00100d90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vla_stack(ulong param_1)

{
 long lVar1;
 undefined1 *puVar2;
 long lVar3;
 undefined1 *puVar4;
 uint uVar6;
 undefined4 uVar7;
 int iVar8;
 ulong uVar9;
 undefined8 *puVar10;
 undefined8 *puVar11;
 undefined8 *puVar12;
 ulong uVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 undefined1 auStack_30 [16];
 undefined1 *puVar5;
 
 lVar3 = ___stack_chk_guard;
 uVar6 = (uint)param_1;
 puVar4 = auStack_30;
 puVar5 = auStack_30;
 if (999 < uVar6 - 1) {
 uVar7 = 0xffffffff;
 goto LAB_00100e8c;
 }
 uVar9 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
 puVar2 = auStack_30;
 while (puVar5 != auStack_30 + -(uVar9 & 0xffffffffffff0000)) {
 puVar4 = puVar2 + -0x10000;
 *(undefined8 *)(puVar2 + -0xfc00) = 0;
 puVar5 = puVar2 + -0x10000;
 puVar2 = puVar2 + -0x10000;
 }
 uVar9 = uVar9 & 0xfff0;
 lVar1 = -uVar9;
 *(undefined8 *)(puVar4 + lVar1) = 0;
 if (0x3ff < uVar9) {
 *(undefined8 *)(puVar4 + lVar1 + 0x400) = 0;
 }
 puVar12 = (undefined8 *)(puVar4 + lVar1 + 0x10);
 if (uVar6 - 1 < 3) {
 uVar9 = 0;
LAB_00100e4c:
 uVar13 = -(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2;
 iVar8 = (int)uVar9;
 iVar14 = iVar8 * 2;
 *(int *)(puVar4 + uVar13 + lVar1 + 0x10) = iVar14;
 if ((iVar8 + 1 < (int)uVar6) &&
 (*(int *)((long)puVar12 + uVar13 + 4) = iVar14 + 2, iVar8 + 2 < (int)uVar6)) {
 *(int *)((long)puVar12 + uVar13 + 8) = iVar14 + 4;
 }
 }
 else {
 puVar10 = puVar12;
 iVar14 = 0;
 iVar8 = 1;
 iVar15 = 2;
 iVar16 = 3;
 do {
 puVar11 = puVar10 + 2;
 puVar10[1] = CONCAT44(iVar16 << 1,iVar15 << 1);
 *puVar10 = CONCAT44(iVar8 << 1,iVar14 << 1);
 puVar10 = puVar11;
 iVar14 = iVar14 + 4;
 iVar8 = iVar8 + 4;
 iVar15 = iVar15 + 4;
 iVar16 = iVar16 + 4;
 } while (puVar11 != puVar12 + (ulong)(uVar6 >> 2) * 2);
 uVar9 = (ulong)(uVar6 & 0xfffffffc);
 if ((param_1 & 3) != 0) goto LAB_00100e4c;
 }
 uVar7 = *(undefined4 *)((long)puVar12 + (long)((int)uVar6 >> 1) * 4);
LAB_00100e8c:
 if (lVar3 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: alloca_usage @ 00100ed0 */

/* WARNING: Removing unreachable block (ram,0x00101008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void alloca_usage(ulong param_1)

{
 undefined8 *puVar1;
 long lVar2;
 undefined1 *puVar3;
 undefined1 *puVar4;
 uint uVar6;
 int iVar7;
 ulong uVar8;
 undefined8 *puVar9;
 undefined8 *puVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 undefined1 auStack_30 [16];
 undefined1 *puVar5;
 
 puVar4 = auStack_30;
 puVar5 = auStack_30;
 uVar6 = (uint)param_1;
 if (0 < (int)uVar6) {
 uVar8 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
 puVar3 = auStack_30;
 while (puVar5 != auStack_30 + -(uVar8 & 0xffffffffffff0000)) {
 puVar4 = puVar3 + -0x10000;
 *(undefined8 *)(puVar3 + -0xfc00) = 0;
 puVar5 = puVar3 + -0x10000;
 puVar3 = puVar3 + -0x10000;
 }
 uVar8 = uVar8 & 0xfff0;
 lVar2 = -uVar8;
 *(undefined8 *)(puVar4 + lVar2) = 0;
 if (0x3ff < uVar8) {
 *(undefined8 *)(puVar4 + lVar2 + 0x400) = 0;
 }
 puVar1 = (undefined8 *)(puVar4 + lVar2 + 0x10);
 if (uVar6 - 1 < 3) {
 uVar8 = 0;
 }
 else {
 puVar9 = puVar1;
 iVar11 = 0;
 iVar7 = 1;
 iVar12 = 2;
 iVar13 = 3;
 do {
 puVar10 = puVar9 + 2;
 puVar9[1] = CONCAT44(iVar13 * 3,iVar12 * 3);
 *puVar9 = CONCAT44(iVar7 * 3,iVar11 * 3);
 puVar9 = puVar10;
 iVar11 = iVar11 + 4;
 iVar7 = iVar7 + 4;
 iVar12 = iVar12 + 4;
 iVar13 = iVar13 + 4;
 } while (puVar10 != puVar1 + (ulong)(uVar6 >> 2) * 2);
 uVar8 = (ulong)(uVar6 & 0xfffffffc);
 if ((param_1 & 3) == 0) {
 return;
 }
 }
 iVar7 = (int)uVar8;
 iVar7 = (int)uVar8;
 iVar11 = iVar7 * 3;
 *(int *)((long)puVar1 + (long)iVar7 * 4) = iVar11;
 uVar8 = -(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2;
 if ((iVar7 + 1 < (int)uVar6) &&
 (*(int *)((long)puVar1 + uVar8 + 4) = iVar11 + 3, iVar7 + 2 < (int)uVar6)) {
 *(int *)((long)puVar1 + uVar8 + 8) = iVar11 + 6;
 }
 }
 return;
}



/* Function: stack_alias @ 00101010 */

undefined8 stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 00101020 */

void test_stack_memory(void)

{
 undefined4 uVar1;
 
 puts((const char *)&DAT_001022b8);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",10);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",0);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",10);
 uVar1 = alloca_usage_constprop_0();
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",uVar1);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 001010f4 */

undefined4 heap_basic(ulong param_1)

{
 undefined4 uVar1;
 uint uVar2;
 undefined8 *__ptr;
 int iVar3;
 undefined8 *puVar4;
 undefined8 *puVar5;
 ulong uVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 
 uVar2 = (uint)param_1;
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (__ptr == (undefined8 *)0x0) {
 return 0xffffffff;
 }
 if (0 < (int)uVar2) {
 if (uVar2 - 1 < 3) {
 uVar6 = 0;
 }
 else {
 puVar4 = __ptr;
 iVar7 = 0;
 iVar3 = 1;
 iVar8 = 2;
 iVar9 = 3;
 do {
 puVar5 = puVar4 + 2;
 puVar4[1] = CONCAT44(iVar9 << 1,iVar8 << 1);
 *puVar4 = CONCAT44(iVar3 << 1,iVar7 << 1);
 puVar4 = puVar5;
 iVar7 = iVar7 + 4;
 iVar3 = iVar3 + 4;
 iVar8 = iVar8 + 4;
 iVar9 = iVar9 + 4;
 } while (puVar5 != __ptr + (ulong)(uVar2 >> 2) * 2);
 uVar6 = (ulong)(uVar2 & 0xfffffffc);
 if ((param_1 & 3) == 0) goto LAB_0010119c;
 }
 iVar3 = (int)uVar6;
 iVar7 = iVar3 * 2;
 *(int *)((long)__ptr + (long)iVar3 * 4) = iVar7;
 uVar6 = -(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2;
 if (iVar3 + 1 < (int)uVar2) {
 *(int *)((long)__ptr + uVar6 + 4) = iVar7 + 2;
 if (iVar3 + 2 < (int)uVar2) {
 *(int *)((long)__ptr + uVar6 + 8) = iVar7 + 4;
 }
 }
 }
LAB_0010119c:
 uVar1 = *(undefined4 *)((long)__ptr + (long)((int)uVar2 / 2) * 4);
 free(__ptr);
 return uVar1;
}



/* Function: FUN_001011cc @ 001011cc */

int FUN_001011cc(uint param_1)

{
 undefined8 *__ptr;
 undefined8 *puVar1;
 ulong uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 undefined8 *puVar2;
 
 __ptr = calloc((long)(int)param_1,4);
 if (__ptr == (undefined8 *)0x0) {
 return -1;
 }
 if ((int)param_1 < 1) {
 iVar4 = 0;
 }
 else {
 if (param_1 - 1 < 3) {
 uVar3 = 0;
 iVar4 = 0;
 }
 else {
 iVar4 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 puVar1 = __ptr;
 do {
 puVar2 = puVar1 + 2;
 iVar4 = iVar4 + (int)*puVar1;
 iVar5 = iVar5 + (int)((ulong)*puVar1 >> 0x20);
 iVar6 = iVar6 + (int)puVar1[1];
 iVar7 = iVar7 + (int)((ulong)puVar1[1] >> 0x20);
 puVar1 = puVar2;
 } while (puVar2 != __ptr + (ulong)(param_1 >> 2) * 2);
 iVar4 = iVar4 + iVar5 + iVar6 + iVar7;
 uVar3 = (ulong)(param_1 & 0xfffffffc);
 if (((long)(int)param_1 & 3U) == 0) goto LAB_00101274;
 }
 iVar5 = (int)uVar3;
 uVar3 = -(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
 iVar4 = iVar4 + *(int *)((long)__ptr + (long)iVar5 * 4);
 if (iVar5 + 1 < (int)param_1) {
 iVar4 = iVar4 + *(int *)((long)__ptr + uVar3 + 4);
 if (iVar5 + 2 < (int)param_1) {
 iVar4 = iVar4 + *(int *)((long)__ptr + uVar3 + 8);
 }
 }
 }
LAB_00101274:
 free(__ptr);
 return iVar4;
}



/* Function: heap_calloc @ 001011d0 */

int heap_calloc(uint param_1)

{
 undefined8 *__ptr;
 undefined8 *puVar1;
 ulong uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 undefined8 *puVar2;
 
 __ptr = calloc((long)(int)param_1,4);
 if (__ptr == (undefined8 *)0x0) {
 return -1;
 }
 if ((int)param_1 < 1) {
 iVar4 = 0;
 }
 else {
 if (param_1 - 1 < 3) {
 uVar3 = 0;
 iVar4 = 0;
 }
 else {
 iVar4 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 puVar1 = __ptr;
 do {
 puVar2 = puVar1 + 2;
 iVar4 = iVar4 + (int)*puVar1;
 iVar5 = iVar5 + (int)((ulong)*puVar1 >> 0x20);
 iVar6 = iVar6 + (int)puVar1[1];
 iVar7 = iVar7 + (int)((ulong)puVar1[1] >> 0x20);
 puVar1 = puVar2;
 } while (puVar2 != __ptr + (ulong)(param_1 >> 2) * 2);
 iVar4 = iVar4 + iVar5 + iVar6 + iVar7;
 uVar3 = (ulong)(param_1 & 0xfffffffc);
 if (((long)(int)param_1 & 3U) == 0) goto LAB_00101274;
 }
 iVar5 = (int)uVar3;
 uVar3 = -(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
 iVar4 = iVar4 + *(int *)((long)__ptr + (long)iVar5 * 4);
 if (iVar5 + 1 < (int)param_1) {
 iVar4 = iVar4 + *(int *)((long)__ptr + uVar3 + 4);
 if (iVar5 + 2 < (int)param_1) {
 iVar4 = iVar4 + *(int *)((long)__ptr + uVar3 + 8);
 }
 }
 }
LAB_00101274:
 free(__ptr);
 return iVar4;
}



/* Function: heap_realloc @ 001012a4 */

undefined4 heap_realloc(void)

{
 undefined8 *__ptr;
 void *__ptr_00;
 undefined4 uVar1;
 
 __ptr = malloc(0x14);
 if (__ptr == (undefined8 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 *(undefined4 *)(__ptr + 2) = 5;
 __ptr[1] = 0x400000003;
 *__ptr = 0x200000001;
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 uVar1 = 0xfffffffe;
 free(__ptr);
 }
 else {
 uVar1 = 0x32;
 if (*(int *)((long)__ptr_00 + 8) != 3) {
 uVar1 = 0xfffffffd;
 }
 *(undefined8 *)((long)__ptr_00 + 0x1c) = 0x5000000046;
 *(undefined8 *)((long)__ptr_00 + 0x14) = 0x3c00000032;
 free(__ptr_00);
 }
 }
 return uVar1;
}



/* Function: FUN_0010132c @ 0010132c */

undefined4 FUN_0010132c(ulong param_1)

{
 undefined4 uVar1;
 uint uVar2;
 undefined8 *__ptr;
 int iVar3;
 undefined8 *puVar4;
 undefined8 *puVar5;
 ulong uVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 
 uVar2 = (uint)param_1;
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (__ptr == (undefined8 *)0x0) {
 return 0xffffffff;
 }
 if (0 < (int)uVar2) {
 if (uVar2 - 1 < 3) {
 uVar6 = 0;
 }
 else {
 puVar4 = __ptr;
 iVar7 = 0;
 iVar3 = 1;
 iVar8 = 2;
 iVar9 = 3;
 do {
 puVar5 = puVar4 + 2;
 puVar4[1] = CONCAT44(iVar9 * 3,iVar8 * 3);
 *puVar4 = CONCAT44(iVar3 * 3,iVar7 * 3);
 puVar4 = puVar5;
 iVar7 = iVar7 + 4;
 iVar3 = iVar3 + 4;
 iVar8 = iVar8 + 4;
 iVar9 = iVar9 + 4;
 } while (puVar5 != __ptr + (ulong)(uVar2 >> 2) * 2);
 uVar6 = (ulong)(uVar2 & 0xfffffffc);
 if ((param_1 & 3) == 0) goto LAB_001013d8;
 }
 iVar3 = (int)uVar6;
 iVar7 = iVar3 * 3;
 *(int *)((long)__ptr + (long)iVar3 * 4) = iVar7;
 uVar6 = -(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2;
 if (iVar3 + 1 < (int)uVar2) {
 *(int *)((long)__ptr + uVar6 + 4) = iVar7 + 3;
 if (iVar3 + 2 < (int)uVar2) {
 *(int *)((long)__ptr + uVar6 + 8) = iVar7 + 6;
 }
 }
 }
LAB_001013d8:
 uVar1 = *(undefined4 *)((long)__ptr + (long)((int)uVar2 / 2) * 4);
 free(__ptr);
 return uVar1;
}



/* Function: heap_array @ 00101330 */

undefined4 heap_array(ulong param_1)

{
 undefined4 uVar1;
 uint uVar2;
 undefined8 *__ptr;
 int iVar3;
 undefined8 *puVar4;
 undefined8 *puVar5;
 ulong uVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 
 uVar2 = (uint)param_1;
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (__ptr == (undefined8 *)0x0) {
 return 0xffffffff;
 }
 if (0 < (int)uVar2) {
 if (uVar2 - 1 < 3) {
 uVar6 = 0;
 }
 else {
 puVar4 = __ptr;
 iVar7 = 0;
 iVar3 = 1;
 iVar8 = 2;
 iVar9 = 3;
 do {
 puVar5 = puVar4 + 2;
 puVar4[1] = CONCAT44(iVar9 * 3,iVar8 * 3);
 *puVar4 = CONCAT44(iVar3 * 3,iVar7 * 3);
 puVar4 = puVar5;
 iVar7 = iVar7 + 4;
 iVar3 = iVar3 + 4;
 iVar8 = iVar8 + 4;
 iVar9 = iVar9 + 4;
 } while (puVar5 != __ptr + (ulong)(uVar2 >> 2) * 2);
 uVar6 = (ulong)(uVar2 & 0xfffffffc);
 if ((param_1 & 3) == 0) goto LAB_001013d8;
 }
 iVar3 = (int)uVar6;
 iVar7 = iVar3 * 3;
 *(int *)((long)__ptr + (long)iVar3 * 4) = iVar7;
 uVar6 = -(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2;
 if (iVar3 + 1 < (int)uVar2) {
 *(int *)((long)__ptr + uVar6 + 4) = iVar7 + 3;
 if (iVar3 + 2 < (int)uVar2) {
 *(int *)((long)__ptr + uVar6 + 8) = iVar7 + 6;
 }
 }
 }
LAB_001013d8:
 uVar1 = *(undefined4 *)((long)__ptr + (long)((int)uVar2 / 2) * 4);
 free(__ptr);
 return uVar1;
}



/* Function: heap_struct @ 00101410 */

int heap_struct(int param_1)

{
 void *__ptr;
 
 __ptr = malloc(8);
 if (__ptr == (void *)0x0) {
 param_1 = -1;
 }
 else {
 param_1 = param_1 * 3;
 free(__ptr);
 }
 return param_1;
}



/* Function: FUN_0010144c @ 0010144c */

undefined8 FUN_0010144c(undefined8 *param_1)

{
 undefined4 *__ptr;
 undefined4 *puVar1;
 undefined8 uVar2;
 
 __ptr = malloc(0x10);
 *param_1 = (undefined8)__ptr;
 if (__ptr == (undefined4 *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 puVar1 = malloc(0x10);
 *(undefined4 **)(__ptr + 2) = puVar1;
 if (puVar1 == (undefined4 *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0;
 *puVar1 = 0x14;
 *(undefined8 *)(puVar1 + 2) = 0;
 }
 }
 return uVar2;
}



/* Function: heap_nested @ 00101450 */

undefined8 heap_nested(undefined8 *param_1)

{
 undefined4 *__ptr;
 undefined4 *puVar1;
 undefined8 uVar2;
 
 __ptr = malloc(0x10);
 *param_1 = (undefined8)__ptr;
 if (__ptr == (undefined4 *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 puVar1 = malloc(0x10);
 *(undefined4 **)(__ptr + 2) = puVar1;
 if (puVar1 == (undefined4 *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0;
 *puVar1 = 0x14;
 *(undefined8 *)(puVar1 + 2) = 0;
 }
 }
 return uVar2;
}



/* Function: linked_list_heap @ 001014c4 */

int linked_list_heap(void)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *__ptr;
 int iVar5;
 
 iVar5 = 0;
 __ptr = (int *)0x0;
 piVar4 = (int *)0x0;
 while( true ) {
 piVar3 = malloc(0x10);
 if (piVar3 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 }
 return -1;
 }
 *piVar3 = iVar5;
 piVar3[2] = 0;
 piVar3[3] = 0;
 piVar2 = piVar3;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar4 + 2) = piVar3;
 piVar2 = __ptr;
 }
 __ptr = piVar2;
 if (iVar5 == 0x28) break;
 iVar5 = iVar5 + 10;
 piVar4 = piVar3;
 }
 iVar5 = 0;
 piVar4 = __ptr;
 do {
 iVar1 = *piVar4;
 piVar4 = *(int **)(piVar4 + 2);
 iVar5 = iVar5 + iVar1;
 } while (piVar4 != (int *)0x0);
 do {
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 } while (piVar4 != (int *)0x0);
 return iVar5;
}



/* Function: create_tree_node @ 00101580 */

void create_tree_node(undefined4 param_1)

{
 undefined4 *puVar1;
 
 puVar1 = malloc(0x18);
 if (puVar1 != (undefined4 *)0x0) {
 *puVar1 = param_1;
 *(undefined8 *)(puVar1 + 2) = 0;
 *(undefined8 *)(puVar1 + 4) = 0;
 }
 return;
}



/* Function: tree_heap_traversal @ 001015b0 */

undefined8 tree_heap_traversal(void)

{
 void *__ptr;
 void *pvVar1;
 void *__ptr_00;
 undefined8 uVar2;
 
 __ptr = malloc(0x18);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 pvVar1 = malloc(0x18);
 if (pvVar1 == (void *)0x0) {
 pvVar1 = malloc(0x18);
 if (pvVar1 != (void *)0x0) {
 free(pvVar1);
 }
 }
 else {
 __ptr_00 = malloc(0x18);
 if (__ptr_00 != (void *)0x0) {
 free(pvVar1);
 free(__ptr_00);
 free(__ptr);
 return 0x3c;
 }
 free(pvVar1);
 }
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 return uVar2;
}



/* Function: memory_leak @ 00101660 */

undefined4 memory_leak(ulong param_1)

{
 uint uVar1;
 undefined8 *puVar2;
 int iVar3;
 undefined8 *puVar4;
 undefined8 *puVar5;
 ulong uVar6;
 undefined8 uVar7;
 undefined8 uVar8;
 
 uVar1 = (uint)param_1;
 puVar2 = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
 if (puVar2 == (undefined8 *)0x0) {
 return 0xffffffff;
 }
 if (0 < (int)uVar1) {
 if (uVar1 - 1 < 3) {
 uVar6 = 0;
 }
 else {
 puVar4 = puVar2;
 uVar7 = 0x100000000;
 uVar8 = 0x300000002;
 do {
 puVar5 = puVar4 + 2;
 puVar4[1] = uVar8;
 *puVar4 = uVar7;
 puVar4 = puVar5;
 uVar7 = CONCAT44((int)((ulong)uVar7 >> 0x20) + 4,(int)uVar7 + 4);
 uVar8 = CONCAT44((int)((ulong)uVar8 >> 0x20) + 4,(int)uVar8 + 4);
 } while (puVar5 != puVar2 + (ulong)(uVar1 >> 2) * 2);
 uVar6 = (ulong)(uVar1 & 0xfffffffc);
 if ((param_1 & 3) == 0) goto LAB_001016f4;
 }
 iVar3 = (int)uVar6;
 *(int *)((long)puVar2 + (long)iVar3 * 4) = iVar3;
 uVar6 = -(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2;
 if (iVar3 + 1 < (int)uVar1) {
 *(int *)((long)puVar2 + uVar6 + 4) = iVar3 + 1;
 if (iVar3 + 2 < (int)uVar1) {
 *(int *)((long)puVar2 + uVar6 + 8) = iVar3 + 2;
 }
 }
 }
LAB_001016f4:
 return *(undefined4 *)((long)puVar2 + (long)((int)uVar1 / 2) * 4);
}



/* Function: FUN_0010171c @ 0010171c */

undefined4 FUN_0010171c(void)

{
 undefined4 uVar1;
 undefined4 *__ptr;
 
 __ptr = malloc(4);
 if (__ptr == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(__ptr);
 uVar1 = *__ptr;
 }
 return uVar1;
}



/* Function: dangling_pointer @ 00101720 */

undefined4 dangling_pointer(void)

{
 undefined4 uVar1;
 undefined4 *__ptr;
 
 __ptr = malloc(4);
 if (__ptr == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(__ptr);
 uVar1 = *__ptr;
 }
 return uVar1;
}



/* Function: double_free @ 00101770 */

undefined4 double_free(undefined4 *param_1)

{
 undefined4 uVar1;
 void *__ptr;
 
 if (param_1 != (undefined4 *)0x0) {
 return *param_1;
 }
 __ptr = malloc(4);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 free(__ptr);
 free(__ptr);
 uVar1 = 0xfffffffe;
 }
 return uVar1;
}



/* Function: FUN_001017bc @ 001017bc */

undefined8 FUN_001017bc(void)

{
 void *__ptr;
 undefined8 uVar1;
 
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 free(__ptr);
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: heap_overflow @ 001017c0 */

undefined8 heap_overflow(void)

{
 void *__ptr;
 undefined8 uVar1;
 
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 free(__ptr);
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: FUN_001017ec @ 001017ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001017ec(void)

{
 int iVar1;
 int *piVar2;
 undefined4 uVar3;
 __pid_t __pid;
 void *pvVar4;
 undefined8 *puVar5;
 undefined4 *puVar6;
 int *piVar7;
 int *piVar8;
 undefined8 uVar9;
 long lVar10;
 int iVar11;
 int *__ptr;
 uint uStack_c;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 puts((const char *)&DAT_00102428);
 pvVar4 = malloc(0x28);
 if (pvVar4 == (void *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 *(undefined8 *)((long)pvVar4 + 0x18) = 0xe0000000c;
 *(undefined8 *)((long)pvVar4 + 0x10) = 0xa00000008;
 *(undefined8 *)((long)pvVar4 + 0x20) = 0x1200000010;
 free(pvVar4);
 uVar9 = 10;
 }
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",(int)uVar9);
 puVar5 = calloc(5,4);
 if (puVar5 == (undefined8 *)0x0) {
 iVar11 = -1;
 }
 else {
 iVar11 = (int)*puVar5 + (int)((ulong)*puVar5 >> 0x20) +
 (int)puVar5[1] + (int)((ulong)puVar5[1] >> 0x20) + *(int *)(puVar5 + 2);
 free(puVar5);
 }
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar11);
 uVar3 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",(int)uVar3);
 pvVar4 = malloc(0x28);
 if (pvVar4 == (void *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 *(undefined8 *)((long)pvVar4 + 0x18) = 0x1500000012;
 *(undefined8 *)((long)pvVar4 + 0x10) = 0xf0000000c;
 *(undefined8 *)((long)pvVar4 + 0x20) = 0x1b00000018;
 free(pvVar4);
 uVar9 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",(int)uVar9);
 pvVar4 = malloc(8);
 if (pvVar4 == (void *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 free(pvVar4);
 uVar9 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",(int)uVar9);
 pvVar4 = malloc(0x10);
 if (pvVar4 == (void *)0x0) {
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 puVar6 = malloc(0x10);
 *(undefined4 **)((long)pvVar4 + 8) = puVar6;
 if (puVar6 == (undefined4 *)0x0) {
 free(pvVar4);
 uVar9 = 0xfffffffe;
 }
 else {
 uVar9 = 0;
 *puVar6 = 0x14;
 *(undefined8 *)(puVar6 + 2) = 0;
 }
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",(int)uVar9);
 free(*(void **)((long)pvVar4 + 8));
 free(pvVar4);
 }
 iVar11 = 0;
 __ptr = (int *)0x0;
 piVar8 = (int *)0x0;
 do {
 piVar7 = malloc(0x10);
 if (piVar7 == (int *)0x0) goto joined_r0x00101b54;
 *piVar7 = iVar11;
 iVar11 = iVar11 + 10;
 piVar7[2] = 0;
 piVar7[3] = 0;
 piVar2 = piVar7;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar8 + 2) = piVar7;
 piVar2 = __ptr;
 }
 __ptr = piVar2;
 piVar8 = piVar7;
 } while (iVar11 != 0x32);
 iVar11 = 0;
 piVar8 = __ptr;
 do {
 iVar1 = *piVar8;
 piVar8 = *(int **)(piVar8 + 2);
 iVar11 = iVar11 + iVar1;
 } while (piVar8 != (int *)0x0);
 do {
 piVar8 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar8;
 } while (piVar8 != (int *)0x0);
LAB_001019d8:
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar11);
 uVar3 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",(int)uVar3);
 puVar5 = malloc(0x14);
 if (puVar5 == (undefined8 *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 uVar9 = 2;
 *(undefined4 *)(puVar5 + 2) = 4;
 puVar5[1] = 0x300000002;
 *puVar5 = 0x100000000;
 }
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",(int)uVar9);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 puVar6 = malloc(4);
 if (puVar6 == (undefined4 *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(puVar6);
 uVar3 = *puVar6;
 }
 __printf_chk(1,(const char *)&DAT_00102578,(int)uVar3);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 lVar10 = lStack_8 - ___stack_chk_guard;
 if (lVar10 == 0) {
 perror((const char *)&DAT_001025f8);
 return;
 }
 }
 else {
 waitpid(__pid,(int *)&uStack_c,0);
 if ((uStack_c & 0x7f) == 0) {
 __printf_chk(1,(const char *)&DAT_00102588,(int)(uStack_c >> 8 & 0xff));
 }
 else if (0 < (int)((long)((ulong)((uStack_c & 0x7f) + 1) << 0x38) >> 0x39)) {
 __printf_chk(1,(const char *)&DAT_001025b0);
 }
 lVar10 = lStack_8 - ___stack_chk_guard;
 if (lVar10 == 0) {
 return;
 }
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
joined_r0x00101b54:
 while (__ptr != (int *)0x0) {
 piVar8 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar8;
 }
 iVar11 = -1;
 goto LAB_001019d8;
}



/* Function: test_heap_memory @ 001017f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_heap_memory(void)

{
 int iVar1;
 int *piVar2;
 undefined4 uVar3;
 __pid_t __pid;
 void *pvVar4;
 undefined8 *puVar5;
 undefined4 *puVar6;
 int *piVar7;
 int *piVar8;
 undefined8 uVar9;
 long lVar10;
 int iVar11;
 int *__ptr;
 uint local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts((const char *)&DAT_00102428);
 pvVar4 = malloc(0x28);
 if (pvVar4 == (void *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 *(undefined8 *)((long)pvVar4 + 0x18) = 0xe0000000c;
 *(undefined8 *)((long)pvVar4 + 0x10) = 0xa00000008;
 *(undefined8 *)((long)pvVar4 + 0x20) = 0x1200000010;
 free(pvVar4);
 uVar9 = 10;
 }
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",(int)uVar9);
 puVar5 = calloc(5,4);
 if (puVar5 == (undefined8 *)0x0) {
 iVar11 = -1;
 }
 else {
 iVar11 = (int)*puVar5 + (int)((ulong)*puVar5 >> 0x20) +
 (int)puVar5[1] + (int)((ulong)puVar5[1] >> 0x20) + *(int *)(puVar5 + 2);
 free(puVar5);
 }
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar11);
 uVar3 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",(int)uVar3);
 pvVar4 = malloc(0x28);
 if (pvVar4 == (void *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 *(undefined8 *)((long)pvVar4 + 0x18) = 0x1500000012;
 *(undefined8 *)((long)pvVar4 + 0x10) = 0xf0000000c;
 *(undefined8 *)((long)pvVar4 + 0x20) = 0x1b00000018;
 free(pvVar4);
 uVar9 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",(int)uVar9);
 pvVar4 = malloc(8);
 if (pvVar4 == (void *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 free(pvVar4);
 uVar9 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",(int)uVar9);
 pvVar4 = malloc(0x10);
 if (pvVar4 == (void *)0x0) {
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 puVar6 = malloc(0x10);
 *(undefined4 **)((long)pvVar4 + 8) = puVar6;
 if (puVar6 == (undefined4 *)0x0) {
 free(pvVar4);
 uVar9 = 0xfffffffe;
 }
 else {
 uVar9 = 0;
 *puVar6 = 0x14;
 *(undefined8 *)(puVar6 + 2) = 0;
 }
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",(int)uVar9);
 free(*(void **)((long)pvVar4 + 8));
 free(pvVar4);
 }
 iVar11 = 0;
 __ptr = (int *)0x0;
 piVar8 = (int *)0x0;
 do {
 piVar7 = malloc(0x10);
 if (piVar7 == (int *)0x0) goto joined_r0x00101b54;
 *piVar7 = iVar11;
 iVar11 = iVar11 + 10;
 piVar7[2] = 0;
 piVar7[3] = 0;
 piVar2 = piVar7;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar8 + 2) = piVar7;
 piVar2 = __ptr;
 }
 __ptr = piVar2;
 piVar8 = piVar7;
 } while (iVar11 != 0x32);
 iVar11 = 0;
 piVar8 = __ptr;
 do {
 iVar1 = *piVar8;
 piVar8 = *(int **)(piVar8 + 2);
 iVar11 = iVar11 + iVar1;
 } while (piVar8 != (int *)0x0);
 do {
 piVar8 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar8;
 } while (piVar8 != (int *)0x0);
LAB_001019d8:
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar11);
 uVar3 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",(int)uVar3);
 puVar5 = malloc(0x14);
 if (puVar5 == (undefined8 *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 uVar9 = 2;
 *(undefined4 *)(puVar5 + 2) = 4;
 puVar5[1] = 0x300000002;
 *puVar5 = 0x100000000;
 }
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",(int)uVar9);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 puVar6 = malloc(4);
 if (puVar6 == (undefined4 *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(puVar6);
 uVar3 = *puVar6;
 }
 __printf_chk(1,(const char *)&DAT_00102578,(int)uVar3);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 lVar10 = local_8 - ___stack_chk_guard;
 if (lVar10 == 0) {
 perror((const char *)&DAT_001025f8);
 return;
 }
 }
 else {
 waitpid(__pid,(int *)&local_c,0);
 if ((local_c & 0x7f) == 0) {
 __printf_chk(1,(const char *)&DAT_00102588,(int)(local_c >> 8 & 0xff));
 }
 else if (0 < (int)((long)((ulong)((local_c & 0x7f) + 1) << 0x38) >> 0x39)) {
 __printf_chk(1,(const char *)&DAT_001025b0);
 }
 lVar10 = local_8 - ___stack_chk_guard;
 if (lVar10 == 0) {
 return;
 }
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
joined_r0x00101b54:
 while (__ptr != (int *)0x0) {
 piVar8 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar8;
 }
 iVar11 = -1;
 goto LAB_001019d8;
}



/* Function: global_var_access @ 00101bd0 */

void global_var_access(void)

{
 global_counter = global_counter + 1;
 return;
}



/* Function: global_var_read @ 00101be4 */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00101bf4 */

undefined4 global_array_access(uint param_1)

{
 if (param_1 < 10) {
 return *(undefined4 *)(&global_array + (long)(int)param_1 * 4);
 }
 return 0xffffffff;
}



/* Function: static_local @ 00101c14 */

void static_local(int param_1)

{
 if (param_1 == 0) {
 counter_1 = counter_1 + 1;
 return;
 }
 counter_1 = 0;
 return;
}



/* Function: call_static_func @ 00101c50 */

int call_static_func(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: access_extern_global @ 00101c60 */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101c74 */

void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: read_const_data @ 00101c80 */

int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101c94 */

undefined8 access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 00101ca0 */

undefined8 access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 00101cb0 */

undefined8 global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 00101cc0 */

void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 00101cd0 */

undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00101ce0 */

void set_global_callback(undefined8 param_1)

{
 global_func_ptr = param_1;
 return;
}



/* Function: call_global_callback @ 00101cf0 */

undefined8 call_global_callback(void)

{
 undefined8 uVar1;
 
 if (global_func_ptr != 0) {
 /* WARNING: Could not recover jumptable at 0x00101d00. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (*(code *)global_func_ptr)();
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: global_heap_store @ 00101d10 */

undefined4 global_heap_store(undefined4 *param_1)

{
 if (param_1 != (undefined4 *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}



/* Function: static_complex_init @ 00101d24 */

undefined8 static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00101d30 */

int tls_access(int param_1)

{
 return param_1 << 1;
}



/* Function: init_order_test @ 00101d40 */

undefined8 init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 00101d50 */

void test_static_global(void)

{
 undefined4 uVar1;
 
 puts((const char *)&DAT_00102628);
 global_counter = global_counter + 1;
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",1);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = extern_function(5);
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",(int)uVar1);
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",(byte)const_string[4] + 0x2a);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n",file_scope_static);
 global_func_ptr = (undefined8)double_value;
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",10);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",0xf);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



/* Function: memop_memset @ 00101f40 */

ulong memop_memset(byte *param_1,size_t param_2,int param_3)

{
 ulong result;
 if (param_1 != (byte *)0x0 && param_2 != 0) {
 memset(param_1,param_3,param_2);
 result = (ulong)(param_1[0]);
 return result;
 }
 return 0xffffffff;
}



/* Function: memop_memcpy @ 00101f84 */

undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3)

{
 if ((param_2 != (void *)0x0 && param_3 != 0) && param_1 != (void *)0x0) {
 memcpy(param_1,param_2,param_3);
 return *(undefined4 *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return 0xffffffff;
}



/* Function: memop_memmove @ 00101fd0 */

ulong memop_memmove(void *param_1,ulong param_2)

{
 if (param_1 != (void *)0x0 && 1 < param_2) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 return (ulong)*((byte *)param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memcmp @ 00102014 */

int memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 if ((param_2 == (void *)0x0 || param_3 == 0) || param_1 == (void *)0x0) {
 return 0;
 }
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: memop_bzero @ 00102050 */

ulong memop_bzero(byte *param_1,size_t param_2)

{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (ulong)(param_1[0]);
 }
 return 0xffffffff;
}



/* Function: memop_bcopy @ 00102090 */

ulong memop_bcopy(void *param_1,void *param_2,size_t param_3)

{
 byte *pbVar1;
 
 if ((param_2 != (void *)0x0 && param_3 != 0) && param_1 != (void *)0x0) {
 memmove(param_2,param_1,param_3);
 pbVar1 = (byte *)param_2;
 return (ulong)*pbVar1;
 }
 return 0xffffffff;
}



/* Function: memop_unaligned_access @ 001020d0 */

undefined4 memop_unaligned_access(long param_1)

{
 if (param_1 != 0) {
 return *(undefined4 *)(param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memory_barrier @ 001020e4 */

int memop_memory_barrier(int *param_1)

{
 if (param_1 != (int *)0x0) {
 DataMemoryBarrier(2,3);
 return *param_1 + *param_1;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 00102104 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_memory_op_functions(void)

{
 int iVar1;
 int iVar2;
 undefined8 local_148;
 undefined4 local_140;
 undefined8 local_138;
 undefined4 local_130;
 undefined8 local_128;
 undefined2 local_120;
 undefined1 local_118 [7];
 char acStack_111 [9];
 undefined8 local_108;
 undefined2 local_100;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts((const char *)&DAT_001028d8);
  local_108 = 0x4141414141414141;
  local_100 = 0x4141;
  iVar1 = (int)memop_memset(local_118, 50, 0x41);
  __printf_chk(1,"MEMOP-L2-01: %d\n",iVar1);
  iVar1 = (int)memop_bzero(local_118, 50);
  __printf_chk(1,"MEMOP-L2-02: %d\n",iVar1);
  memcpy(local_118, "HelloW", 7);
  memmove(local_118 + 1, local_118, 6);
  __printf_chk(1,"MEMOP-L2-03: %c\n",local_118[0]);
  local_140 = 3;
  local_130 = 4;
  local_148 = 0x200000001;
  local_138 = 0x200000001;
  iVar2 = memcmp(&local_148,&local_138,0xc);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
 iVar1 = 1;
  }
  __printf_chk(1,"MEMOP-L2-04: %d\n",iVar1);
  memop_bzero(local_118, 8);
  iVar1 = 0;
  __printf_chk(1,"MEMOP-L2-05: %d\n",iVar1);
  memop_memset(local_118, 8, 1);
  iVar1 = local_118[0];
  __printf_chk(1,"MEMOP-L2-06: %d\n",iVar1);
  memop_memset(local_118, 8, 0x4030201);
  iVar1 = local_118[0];
  __printf_chk(1,"MEMOP-L3-01: 0x%x\n",iVar1);
 DataMemoryBarrier(2,3);
 if (local_8 == ___stack_chk_guard) {
 __printf_chk(1,"MEMOP-L3-02: %d\n",10);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: extern_function @ 00102290 */

int extern_function(int param_1)

{
 return param_1 * 3;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 72 */
