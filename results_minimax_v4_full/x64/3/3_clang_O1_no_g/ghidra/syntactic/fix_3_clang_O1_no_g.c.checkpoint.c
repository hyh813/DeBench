/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char byte;

/* String data from binary */
static const char DAT_001035d9[] = "Testing Stack Memory\n";
static const char DAT_001035f7[] = "Testing Heap Memory\n";
static const char DAT_001032fb[] = "fork";
static const char DAT_00103295[] = "%d\n";
static const char DAT_001032ba[] = "%d (signal %d)\n";
static const char DAT_00103285[] = "value after free: %d\n";
static const char DAT_00103615[] = "Testing Static Variables and Globals\n";
static const char DAT_00103639[] = "Testing Memory Operations\n";

/* Global variables */
int global_counter = 0;
int static_local_counter = 0;
int file_scope_static = 0;
int extern_global_var = 0;
int const_string[10] = {0};
undefined4 global_array[10];
undefined4 *global_heap_ptr = NULL;
undefined8 (*global_func_ptr)(void) = NULL;

/* Forward declarations */
int double_value(int param_1);
int extern_function(int param_1);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/3/3_clang_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(void (*)(void))0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: local_vars @ 00101210 */

int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 00101220 */

int local_array(int param_1)

{
 int iVar1;
 long lVar2;
 int aiStack_28 [10];
 
 iVar1 = 0;
 lVar2 = 0;
 do {
 aiStack_28[lVar2] = iVar1;
 lVar2 = lVar2 + 1;
 iVar1 = iVar1 + param_1;
 } while (lVar2 != 10);
 return aiStack_28[5];
}



/* Function: local_struct @ 00101250 */

int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 00101260 */

undefined8 address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00101270 */

int address_of_array(int *param_1)

{
 return *param_1 * 2;
}



/* Function: large_stack_frame @ 00101280 */

int large_stack_frame(void)

{
 long lVar1;
 char acStack_808 [2056];
 
 lVar1 = 0;
 do {
 acStack_808[lVar1] = (char)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x800);
 return (int)acStack_808[0x400];
}



/* Function: vla_stack @ 001012b0 */

undefined4 vla_stack(uint param_1)

{
 long lVar1;
 undefined4 uVar2;
 long lVar3;
 char local_array [1]; /* placeholder for VLA */
 
 uVar2 = 0xffffffff;
 if (0xfffffc17 < param_1 - 0x3e9) {
 lVar1 = -8 - ((ulong)param_1 * 4 + 0xf & 0xfffffffffffffff0);
 if (0 < (int)param_1) {
 lVar3 = 0;
 do {
 *(int *)((char *)&local_array + lVar3 * 2 + lVar1 + 8) = (int)lVar3;
 lVar3 = lVar3 + 2;
 } while ((ulong)param_1 * 2 != lVar3);
 }
 uVar2 = *(undefined4 *)
 ((char *)&local_array + (ulong)(uint)((int)param_1 / 2) * 4 + lVar1 + 8);
 }
 return uVar2;
}



/* Function: alloca_usage @ 00101310 */

undefined4 alloca_usage(uint param_1)

{
 long lVar1;
 undefined4 *puVar2;
 char *stack_buffer;
 
 if (0 < (int)param_1) {
 stack_buffer = alloca((long)(int)param_1 * 4 + 0xfU & 0xfffffffffffffff0);
 lVar1 = 0;
 puVar2 = (undefined4 *)stack_buffer;
 do {
 *puVar2 = (int)lVar1;
 lVar1 = lVar1 + 3;
 puVar2 = puVar2 + 1;
 } while ((ulong)param_1 * 3 != lVar1);
 return *(undefined4 *)(stack_buffer + (ulong)(uint)((int)param_1 / 2) * 4);
 }
 return 0xffffffff;
}



/* Function: stack_alias @ 00101370 */

undefined8 stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 00101380 */

void test_stack_memory(void)

{
 uint *puVar1;
 long lVar2;
 uint local_808 [256];
 char local_408;
 
 puVar1 = local_808;
 puts(&DAT_001035d9);
 lVar2 = 0;
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 do {
 *(int *)((long)local_808 + lVar2 * 2) = (int)lVar2;
 lVar2 = lVar2 + 2;
 } while (lVar2 != 0x14);
 lVar2 = 0;
 printf("MEM-L1-02 (local_array): %d\n",(ulong)local_808[5]);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 do {
 *(char *)((long)local_808 + lVar2) = (char)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x800);
 lVar2 = 0;
 printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)(uint)(int)local_408);
 do {
 *(int *)((long)local_808 + lVar2 * 2) = (int)lVar2;
 lVar2 = lVar2 + 2;
 } while (lVar2 != 0x14);
 lVar2 = 0;
 printf("MEM-L2-02 (vla_stack): %d\n",(ulong)local_808[5]);
 do {
 *puVar1 = (int)lVar2;
 puVar1 = puVar1 + 1;
 lVar2 = lVar2 + 3;
 } while (lVar2 != 0x1e);
 printf("MEM-L2-03 (alloca_usage): %d\n",(ulong)local_808[5]);
 printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 001014b0 */

undefined4 heap_basic(uint param_1)

{
 void *__ptr;
 long lVar1;
 undefined4 uVar2;
 
 __ptr = malloc((long)(int)param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (0 < (int)param_1) {
 lVar1 = 0;
 do {
 *(int *)((long)__ptr + lVar1 * 2) = (int)lVar1;
 lVar1 = lVar1 + 2;
 } while ((ulong)param_1 * 2 != lVar1);
 }
 uVar2 = *(undefined4 *)((long)__ptr + (long)((int)param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar2;
}



/* Function: heap_calloc @ 00101500 */

int heap_calloc(uint param_1)

{
 void *__ptr;
 ulong uVar1;
 int iVar2;
 
 __ptr = calloc((long)(int)param_1,4);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 if ((int)param_1 < 1) {
 iVar2 = 0;
 }
 else {
 uVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(int *)((long)__ptr + uVar1 * 4);
 uVar1 = uVar1 + 1;
 } while (param_1 != uVar1);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 00101550 */

undefined4 heap_realloc(void)

{
 long lVar1;
 int iVar2;
 void *__ptr;
 void *__ptr_00;
 long lVar3;
 int iVar4;
 undefined4 uVar5;
 
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 lVar3 = 0;
 do {
 lVar1 = lVar3 + 1;
 *(int *)((long)__ptr + lVar3 * 4) = (int)lVar1;
 lVar3 = lVar1;
 } while (lVar1 != 5);
 iVar2 = *(int *)((long)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 uVar5 = 0xfffffffe;
 __ptr_00 = __ptr;
 }
 else {
 lVar3 = 5;
 iVar4 = 0x32;
 do {
 *(int *)((long)__ptr_00 + lVar3 * 4) = iVar4;
 lVar3 = lVar3 + 1;
 iVar4 = iVar4 + 10;
 } while (lVar3 != 10);
 uVar5 = 0xfffffffd;
 if (*(int *)((long)__ptr_00 + 8) == iVar2) {
 uVar5 = *(undefined4 *)((long)__ptr_00 + 0x14);
 }
 }
 free(__ptr_00);
 }
 return uVar5;
}



/* Function: heap_array @ 001015e0 */

undefined4 heap_array(uint param_1)

{
 undefined4 *__ptr;
 long lVar1;
 undefined4 uVar2;
 undefined4 *puVar3;
 
 __ptr = malloc((long)(int)param_1 << 2);
 if (__ptr == (undefined4 *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (0 < (int)param_1) {
 lVar1 = 0;
 puVar3 = __ptr;
 do {
 *puVar3 = (int)lVar1;
 lVar1 = lVar1 + 3;
 puVar3 = puVar3 + 1;
 } while ((ulong)param_1 * 3 != lVar1);
 }
 uVar2 = __ptr[(int)param_1 / 2];
 free(__ptr);
 }
 return uVar2;
}



/* Function: heap_struct @ 00101650 */

int heap_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: heap_nested @ 00101660 */

undefined8 heap_nested(long *param_1)

{
 undefined4 *puVar1;
 void *pvVar2;
 
 puVar1 = malloc(0x10);
 *param_1 = (long)puVar1;
 if (puVar1 == (undefined4 *)0x0) {
 return 0xffffffff;
 }
 *puVar1 = 10;
 pvVar2 = malloc(0x10);
 *(void **)(*param_1 + 8) = pvVar2;
 puVar1 = *(undefined4 **)(*param_1 + 8);
 if (puVar1 != (undefined4 *)0x0) {
 *puVar1 = 0x14;
 *(undefined8 *)(puVar1 + 2) = 0;
 return 0;
 }
 free((void *)*param_1);
 return 0xfffffffe;
}



/* Function: linked_list_heap @ 001016c0 */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int *__ptr;
 int *piVar3;
 uint uVar4;
 int iVar5;
 bool bVar6;
 
 __ptr = (int *)0x0;
 bVar6 = true;
 uVar4 = 0;
 piVar3 = (int *)0x0;
 do {
 piVar2 = malloc(0x10);
 if (piVar2 == (int *)0x0) goto joined_r0x00101743;
 *piVar2 = uVar4 * 10;
 piVar2[2] = 0;
 piVar2[3] = 0;
 piVar1 = piVar2;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar3 + 2) = piVar2;
 piVar1 = __ptr;
 }
 __ptr = piVar1;
 if (piVar2 == (int *)0x0) break;
 bVar6 = uVar4 < 4;
 uVar4 = uVar4 + 1;
 piVar3 = piVar2;
 } while (uVar4 != 5);
LAB_0010176b:
 iVar5 = -1;
 if (!bVar6) {
 iVar5 = 0;
 for (piVar3 = __ptr; piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 2)) {
 iVar5 = iVar5 + *piVar3;
 }
 while (__ptr != (int *)0x0) {
 piVar3 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar3;
 }
 }
 return iVar5;
joined_r0x00101743:
 while (__ptr != (int *)0x0) {
 piVar3 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar3;
 }
 __ptr = (int *)0x0;
 goto LAB_0010176b;
}



/* Function: create_tree_node @ 001017e0 */

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



/* Function: tree_heap_traversal @ 00101800 */

int tree_heap_traversal(void)

{
 int *__ptr;
 int *__ptr_00;
 int *__ptr_01;
 int iVar1;
 
 __ptr = malloc(0x18);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 *__ptr = 10;
 __ptr[2] = 0;
 __ptr[3] = 0;
 __ptr[4] = 0;
 __ptr[5] = 0;
 __ptr_00 = malloc(0x18);
 if (__ptr_00 != (int *)0x0) {
 *__ptr_00 = 0x14;
 __ptr_00[2] = 0;
 __ptr_00[3] = 0;
 __ptr_00[4] = 0;
 __ptr_00[5] = 0;
 }
 *(int **)(__ptr + 2) = __ptr_00;
 __ptr_01 = malloc(0x18);
 if (__ptr_01 != (int *)0x0) {
 *__ptr_01 = 0x1e;
 __ptr_01[2] = 0;
 __ptr_01[3] = 0;
 __ptr_01[4] = 0;
 __ptr_01[5] = 0;
 }
 *(int **)(__ptr + 4) = __ptr_01;
 if ((__ptr_00 == (int *)0x0) || (__ptr_01 == (int *)0x0)) {
 if (__ptr_00 != (int *)0x0) {
 free(__ptr_00);
 }
 iVar1 = -2;
 if (__ptr_01 == (int *)0x0) goto LAB_001018b4;
 }
 else {
 iVar1 = *__ptr_00 + *__ptr + *__ptr_01;
 free(__ptr_00);
 __ptr_01 = *(int **)(__ptr + 4);
 }
 free(__ptr_01);
LAB_001018b4:
 free(__ptr);
 return iVar1;
}



/* Function: memory_leak @ 001018d0 */

undefined4 memory_leak(uint param_1)

{
 void *pvVar1;
 ulong uVar2;
 
 pvVar1 = malloc((long)(int)param_1 << 2);
 if (pvVar1 != (void *)0x0) {
 if (0 < (int)param_1) {
 uVar2 = 0;
 do {
 *(int *)((long)pvVar1 + uVar2 * 4) = (int)uVar2;
 uVar2 = uVar2 + 1;
 } while (param_1 != uVar2);
 }
 return *(undefined4 *)((long)pvVar1 + (long)((int)param_1 / 2) * 4);
 }
 return 0xffffffff;
}



/* Function: dangling_pointer @ 00101920 */

undefined4 dangling_pointer(void)

{
 undefined4 *__ptr;
 
 __ptr = malloc(4);
 if (__ptr != (undefined4 *)0x0) {
 *__ptr = 0x2a;
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 return *__ptr;
 }
 return 0xffffffff;
}



/* Function: double_free @ 00101960 */

undefined4 double_free(undefined4 *param_1)

{
 if (param_1 != (undefined4 *)0x0) {
 return *param_1;
 }
 return 0xfffffffe;
}



/* Function: heap_overflow @ 00101970 */

undefined4 heap_overflow(void)

{
 undefined4 *__ptr;
 long lVar1;
 undefined4 *puVar2;
 undefined4 uVar3;
 
 __ptr = malloc(0x28);
 if (__ptr == (undefined4 *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 lVar1 = 0;
 puVar2 = __ptr;
 do {
 *puVar2 = (int)lVar1;
 lVar1 = lVar1 + 100;
 puVar2 = puVar2 + 1;
 } while (lVar1 != 0x44c);
 uVar3 = *__ptr;
 free(__ptr);
 }
 return uVar3;
}



/* Function: test_heap_memory @ 001019c0 */

void test_heap_memory(void)

{
 long lVar1;
 int iVar2;
 uint uVar3;
 __pid_t __pid;
 undefined8 in_RAX;
 void *pvVar4;
 void *__ptr;
 undefined4 *puVar5;
 undefined4 *puVar6;
 long lVar7;
 int iVar8;
 uint uVar9;
 undefined8 uVar10;
 ulong uVar11;
 char *__format;
 uint local_24;
 
 local_24 = (uint)((ulong)in_RAX >> 0x20);
 puts(&DAT_001035f7);
 pvVar4 = malloc(0x28);
 uVar3 = 0xffffffff;
 if (pvVar4 != (void *)0x0) {
 lVar7 = 0;
 do {
 *(int *)((long)pvVar4 + lVar7 * 2) = (int)lVar7;
 lVar7 = lVar7 + 2;
 } while (lVar7 != 0x14);
 uVar3 = *(uint *)((long)pvVar4 + 0x14);
 free(pvVar4);
 }
 uVar9 = 0;
 printf("HEAP-L2-01 (heap_basic): %d\n",(ulong)uVar3);
 pvVar4 = calloc(5,4);
 uVar3 = 0xffffffff;
 if (pvVar4 != (void *)0x0) {
 lVar7 = 0;
 do {
 uVar9 = uVar9 + *(int *)((long)pvVar4 + lVar7 * 4);
 lVar7 = lVar7 + 1;
 } while (lVar7 != 5);
 free(pvVar4);
 uVar3 = uVar9;
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n",(ulong)uVar3);
 pvVar4 = malloc(0x14);
 uVar9 = 0xffffffff;
 uVar3 = 0xffffffff;
 if (pvVar4 != (void *)0x0) {
 lVar7 = 0;
 do {
 lVar1 = lVar7 + 1;
 *(int *)((long)pvVar4 + lVar7 * 4) = (int)lVar1;
 lVar7 = lVar1;
 } while (lVar1 != 5);
 iVar2 = *(int *)((long)pvVar4 + 8);
 __ptr = realloc(pvVar4,0x28);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xfffffffe;
 __ptr = pvVar4;
 }
 else {
 lVar7 = 5;
 iVar8 = 0x32;
 do {
 *(int *)((long)__ptr + lVar7 * 4) = iVar8;
 lVar7 = lVar7 + 1;
 iVar8 = iVar8 + 10;
 } while (lVar7 != 10);
 uVar3 = 0xfffffffd;
 if (*(int *)((long)__ptr + 8) == iVar2) {
 uVar3 = *(uint *)((long)__ptr + 0x14);
 }
 }
 free(__ptr);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n",(ulong)uVar3);
 puVar5 = malloc(0x28);
 if (puVar5 != (undefined4 *)0x0) {
 lVar7 = 0;
 puVar6 = puVar5;
 do {
 *puVar6 = (int)lVar7;
 lVar7 = lVar7 + 3;
 puVar6 = puVar6 + 1;
 } while (lVar7 != 0x1e);
 uVar9 = puVar5[5];
 free(puVar5);
 }
 printf("HEAP-L2-04 (heap_array): %d\n",(ulong)uVar9);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 puVar5 = malloc(0x10);
 if (puVar5 == (undefined4 *)0x0) {
 uVar10 = 0xffffffff;
 }
 else {
 *puVar5 = 10;
 puVar6 = malloc(0x10);
 *(undefined4 **)(puVar5 + 2) = puVar6;
 if (puVar6 == (undefined4 *)0x0) {
 free(puVar5);
 uVar10 = 0xfffffffe;
 }
 else {
 *puVar6 = 0x14;
 *(undefined8 *)(puVar6 + 2) = 0;
 uVar10 = 0;
 }
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar10);
 if (puVar5 != (undefined4 *)0x0) {
 free(*(void **)(puVar5 + 2));
 free(puVar5);
 }
 uVar3 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar3);
 uVar3 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",(ulong)uVar3);
 pvVar4 = malloc(0x14);
 if (pvVar4 == (void *)0x0) {
 uVar11 = 0xffffffff;
 }
 else {
 lVar7 = 0;
 do {
 *(int *)((long)pvVar4 + lVar7 * 4) = (int)lVar7;
 lVar7 = lVar7 + 1;
 } while (lVar7 != 5);
 uVar11 = (ulong)*(uint *)((long)pvVar4 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar11);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_001032fb);
 }
 else {
 waitpid(__pid,(int *)&local_24,0);
 uVar3 = local_24 & 0x7f;
 if (uVar3 == 0) {
 uVar11 = (ulong)(byte)(local_24 >> 8);
 __format = &DAT_00103295;
 }
 else {
 if ((int)(uVar3 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = &DAT_001032ba;
 uVar11 = (ulong)uVar3;
 }
 printf(__format,uVar11);
 }
 return;
 }
 uVar3 = dangling_pointer();
 printf(&DAT_00103285,(ulong)uVar3);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 00101cc0 */

void global_var_access(void)

{
 global_counter = global_counter + 1;
 return;
}



/* Function: global_var_read @ 00101cd0 */

int global_var_read(void)

{
 return global_counter * 2;
}



/* Function: global_array_access @ 00101ce0 */

undefined4 global_array_access(uint param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (param_1 < 10) {
 uVar1 = *(undefined4 *)(global_array + (long)(int)param_1 * 4);
 }
 return uVar1;
}



/* Function: static_local @ 00101d00 */

void static_local(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 == 0) {
 iVar1 = static_local_counter + 1;
 }
 static_local_counter = iVar1;
 return;
}



/* Function: call_static_func @ 00101d20 */

int call_static_func(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: access_extern_global @ 00101d30 */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101d40 */

void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: read_const_data @ 00101d50 */

int read_const_data(void)

{
 return (char)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101d60 */

undefined8 access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 00101d70 */

undefined8 access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 00101d80 */

undefined8 global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 00101d90 */

void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 00101da0 */

undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00101db0 */

void set_global_callback(undefined8 (*param_1)(void))

{
 global_func_ptr = param_1;
 return;
}



/* Function: call_global_callback @ 00101dc0 */

undefined8 call_global_callback(void)

{
 undefined8 uVar1;
 
 if (global_func_ptr != (undefined8 (*)(void))0x0) {
 uVar1 = (*global_func_ptr)();
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: global_heap_store @ 00101de0 */

undefined4 global_heap_store(undefined4 *param_1)

{
 global_heap_ptr = param_1;
 if (param_1 != (undefined4 *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}



/* Function: static_complex_init @ 00101e00 */

undefined8 static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00101e10 */

int tls_access(int param_1)

{
 return param_1 * 2;
}



/* Function: init_order_test @ 00101e20 */

undefined8 init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 00101e30 */

void test_static_global(void)

{
 uint uVar1;
 undefined4 local_c;
 
 puts(&DAT_00103615);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n");
 printf("STM-L1-01 (global_var_read): %d\n",(ulong)(uint)(global_counter * 2));
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n");
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",(ulong)(extern_global_var + 100));
 uVar1 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n",(ulong)uVar1);
 printf("STM-L2-03 (read_const_data): %d\n",(ulong)((int)(char)const_string[4] + 0x2a));
 printf("STM-L2-04 (access_bss_var): %d\n",0);
 printf("STM-L2-04 (access_bss_buffer): %d\n",0);
 printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 printf("STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = (undefined8 (*)(void))double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 local_c = 100;
 global_heap_ptr = &local_c;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



/* Function: double_value @ 00102000 */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: memop_memset @ 00102010 */

ulong memop_memset(byte *param_1,size_t param_2,int param_3)

{
 ulong uVar1;
 
 uVar1 = 0xffffffff;
 if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
 memset(param_1,param_3,param_2);
 uVar1 = (ulong)*param_1;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 00102040 */

undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(undefined4 *)(((param_3 & 0xfffffffffffffffc) - 4) + (long)param_1);
 }
 return uVar1;
}



/* Function: memop_memmove @ 00102080 */

int memop_memmove(void *param_1,ulong param_2)

{
 int iVar1;
 
 iVar1 = -1;
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 iVar1 = (int)*(char *)((long)param_1 + 1);
 }
 return iVar1;
}



/* Function: memop_memcmp @ 001020b0 */

int memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 }
 return iVar2;
}



/* Function: memop_bzero @ 001020e0 */

ulong memop_bzero(byte *param_1,size_t param_2)

{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (ulong)*param_1;
 }
 return 0xffffffff;
}



/* Function: memop_bcopy @ 00102100 */

ulong memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
 ulong uVar1;
 
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 uVar1 = (ulong)*param_2;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 00102130 */

undefined4 memop_unaligned_access(long param_1)

{
 if (param_1 != 0) {
 return *(undefined4 *)(param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memory_barrier @ 00102140 */

int memop_memory_barrier(int *param_1)

{
 if (param_1 != (int *)0x0) {
 return *param_1 + *param_1;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 00102160 */

void test_memory_op_functions(void)

{
 puts(&DAT_00103639);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 printf("MEMOP-L2-03: %c\n",0x48);
 printf("MEMOP-L2-04: %d\n",0xffffffff);
 printf("MEMOP-L2-05: %d\n",0);
 printf("MEMOP-L2-06: %d\n",1);
 printf("MEMOP-L3-01: 0x%x\n",0x4030201);
 printf("MEMOP-L3-02: %d\n",10);
 return;
}



/* Function: main @ 00102240 */

undefined8 main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 00102260 */

int extern_function(int param_1)

{
 return param_1 * 3;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 63 */
