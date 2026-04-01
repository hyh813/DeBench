/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
// size_t is already defined in system headers (stddef.h)
typedef unsigned long uintptr_t;
// typedef long intptr_t;  // Already defined in system headers
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra types */
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef void (*code)();

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/3/3_clang_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */


/* Data section - string constants */
char DAT_000135c1[] = "Stack Memory Test\n";
char DAT_000135df[] = "Heap Memory Test\n";
char DAT_000135fd[] = "Static/Global Test\n";
char DAT_00013621[] = "Memory Operations Test\n";
char DAT_00013670[] = "HelloWorld";
char DAT_0001367c[] = "HelloWorld";
char DAT_000132e3[] = "fork";
char DAT_0001327d[] = "%d\n";
char DAT_000132a2[] = "Signal %d\n";
char DAT_0001326d[] = "%d\n";

/* Global variables */
int global_counter = 0;
int static_local_counter = 0;
int extern_global_var = 10;
code global_func_ptr = NULL;
int file_scope_static = 0;
int *global_heap_ptr = NULL;
char const_string[] = "TestString";

/* External function declarations */
int extern_function(int param_1);
int double_value(int param_1);


/* Function: FUN_00011030 @ 00011030 - NULL function pointer call (will crash) */

void FUN_00011030(void)

{
 // Calling NULL function pointer - this would crash in practice
 // Keeping for binary accuracy
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001116c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011170 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000112a9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000112ad */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: local_vars @ 000112c0 */

int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 000112d0 */

int local_array(int param_1)

{
 return param_1 * 5;
}



/* Function: local_struct @ 000112e0 */

int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 000112f0 */

undefined4 address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00011300 */

int address_of_array(int *param_1)

{
 return *param_1 * 2;
}



/* Function: large_stack_frame @ 00011310 */

int large_stack_frame(void)

{
 char cVar1;
 int iVar2;
 char local_800 [2048];
 
 iVar2 = 0;
 do {
 cVar1 = (char)iVar2;
 local_800[iVar2] = cVar1;
 local_800[iVar2 + 1] = cVar1 + '\x01';
 local_800[iVar2 + 2] = cVar1 + '\x02';
 local_800[iVar2 + 3] = cVar1 + '\x03';
 local_800[iVar2 + 4] = cVar1 + '\x04';
 local_800[iVar2 + 5] = cVar1 + '\x05';
 local_800[iVar2 + 6] = cVar1 + '\x06';
 local_800[iVar2 + 7] = cVar1 + '\a';
 iVar2 = iVar2 + 8;
 } while (iVar2 != 0x800);
 return (int)local_800[0x400];
}



/* Function: vla_stack @ 00011380 */

undefined4 vla_stack(uint param_1)

{
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 int aiStack_24 [4];
 undefined1 *local_14;
 
 uVar2 = 0xffffffff;
 if (0xfffffc17 < param_1 - 0x3e9) {
 local_14 = (undefined1 *)(aiStack_24 + 2);
 iVar6 = -(param_1 * 4 + 0xf & 0xfffffff0);
 iVar1 = iVar6 + -0x1c;
 uVar4 = param_1 & 3;
 uVar5 = 0;
 if (2 < param_1 - 1) {
 uVar5 = 0;
 iVar3 = 4;
 do {
 *(int *)((uintptr_t)aiStack_24 + iVar3 * 2 + iVar6) = iVar3 + -4;
 *(int *)((uintptr_t)aiStack_24 + iVar3 * 2 + iVar6 + 4) = iVar3 + -2;
 *(int *)((uintptr_t)aiStack_24 + iVar3 * 2 + iVar1 + 0x24) = iVar3;
 *(int *)((uintptr_t)aiStack_24 + iVar3 * 2 + iVar6 + 0xc) = iVar3 + 2;
 uVar5 = uVar5 + 4;
 iVar3 = iVar3 + 8;
 } while ((param_1 & 0xfffffffc) != uVar5);
 }
 if (uVar4 != 0) {
 iVar6 = uVar5 * 2;
 do {
 *(int *)((uintptr_t)aiStack_24 + iVar6 * 2 + iVar1 + 0x24) = iVar6;
 iVar6 = iVar6 + 2;
 uVar4 = uVar4 - 1;
 } while (uVar4 != 0);
 }
 uVar2 = *(undefined4 *)
 ((uintptr_t)aiStack_24 + (param_1 - ((int)param_1 >> 0x1f) & 0xfffffffe) * 2 + iVar1 + 0x24);
 }
 return uVar2;
}



/* Function: alloca_usage @ 00011430 */

undefined4 alloca_usage(uint param_1)

{
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 int aiStack_1c [3];
 
 if ((int)param_1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar6 = -(param_1 * 4 + 0xf & 0xfffffff0);
 iVar1 = iVar6 + -0x1c;
 uVar5 = 0;
 if (2 < param_1 - 1) {
 uVar5 = 0;
 iVar3 = 6;
 do {
 *(int *)((uintptr_t)aiStack_1c + uVar5 * 4 + iVar1 + 0x1c) = iVar3 + -6;
 *(int *)((uintptr_t)aiStack_1c + uVar5 * 4 + iVar6 + 4) = iVar3 + -3;
 *(int *)((uintptr_t)aiStack_1c + uVar5 * 4 + iVar6 + 8) = iVar3;
 *(int *)((uintptr_t)aiStack_1c + uVar5 * 4 + iVar6) = iVar3 + 3;
 uVar5 = uVar5 + 4;
 iVar3 = iVar3 + 0xc;
 } while ((param_1 & 0xfffffffc) != uVar5);
 }
 if ((param_1 & 3) != 0) {
 iVar6 = uVar5 * 3;
 uVar4 = 0;
 do {
 *(int *)((int)aiStack_1c + uVar4 * 4 + uVar5 * 4 + iVar1 + 0x1c) = iVar6;
 uVar4 = uVar4 + 1;
 iVar6 = iVar6 + 3;
 } while ((param_1 & 3) != uVar4);
 }
 uVar2 = *(undefined4 *)
 ((uintptr_t)aiStack_1c + (param_1 - ((int)param_1 >> 0x1f) & 0xfffffffe) * 2 + iVar1 + 0x1c);
 }
 return uVar2;
}



/* Function: stack_alias @ 000114d0 */

undefined4 stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 000114e0 */

void test_stack_memory(void)

{
 char cVar1;
 int iVar2;
 char acStack_804 [2048];
 
 puts(&DAT_000135c1);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 printf("MEM-L1-02 (local_array): %d\n",10);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 iVar2 = 0;
 do {
 cVar1 = (char)iVar2;
 acStack_804[iVar2] = cVar1;
 acStack_804[iVar2 + 1] = cVar1 + '\x01';
 acStack_804[iVar2 + 2] = cVar1 + '\x02';
 acStack_804[iVar2 + 3] = cVar1 + '\x03';
 acStack_804[iVar2 + 4] = cVar1 + '\x04';
 acStack_804[iVar2 + 5] = cVar1 + '\x05';
 acStack_804[iVar2 + 6] = cVar1 + '\x06';
 acStack_804[iVar2 + 7] = cVar1 + '\a';
 iVar2 = iVar2 + 8;
 } while (iVar2 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(int)acStack_804[0x400]);
 printf("MEM-L2-02 (vla_stack): %d\n",10);
 printf("MEM-L2-03 (alloca_usage): %d\n",0xf);
 printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 00011640 */

undefined4 heap_basic(uint param_1)

{
 void *__ptr;
 uint uVar1;
 uint uVar2;
 int iVar3;
 undefined4 uVar4;
 
 __ptr = (void *)(uintptr_t)malloc(param_1 * 4);
 if (__ptr == (void *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 if (0 < (int)param_1) {
 uVar1 = param_1 & 3;
 uVar2 = 0;
 if (2 < param_1 - 1) {
 uVar2 = 0;
 iVar3 = 4;
 do {
 *(int *)((uintptr_t)__ptr + iVar3 * 2 + -8) = iVar3 + -4;
 *(int *)((uintptr_t)__ptr + iVar3 * 2 + -4) = iVar3 + -2;
 *(int *)((uintptr_t)__ptr + iVar3 * 2) = iVar3;
 *(int *)((uintptr_t)__ptr + iVar3 * 2 + 4) = iVar3 + 2;
 uVar2 = uVar2 + 4;
 iVar3 = iVar3 + 8;
 } while ((param_1 & 0xfffffffc) != uVar2);
 }
 if (uVar1 != 0) {
 iVar3 = uVar2 * 2;
 do {
 *(int *)((uintptr_t)__ptr + iVar3 * 2) = iVar3;
 iVar3 = iVar3 + 2;
 uVar1 = uVar1 - 1;
 } while (uVar1 != 0);
 }
 }
 uVar4 = *(undefined4 *)((uintptr_t)__ptr + (param_1 - ((int)param_1 >> 0x1f) & 0xfffffffe) * 2);
 free(__ptr);
 }
 return uVar4;
}



/* Function: heap_calloc @ 00011700 */

int heap_calloc(size_t param_1)

{
 void *__ptr;
 uint uVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 
 __ptr = (void *)(uintptr_t)calloc(param_1,4);
 if (__ptr == (void *)0x0) {
 iVar4 = -1;
 }
 else {
 iVar4 = 0;
 if (1 < (int)param_1) {
 uVar1 = param_1 - 1 & 7;
 if (param_1 - 2 < 7) {
 iVar4 = 0;
 iVar2 = 1;
 }
 else {
 iVar4 = 0;
 uVar5 = 0;
 do {
 uVar3 = uVar5;
 iVar4 = iVar4 + *(int *)((uintptr_t)__ptr + uVar3 * 4 + 4) +
 *(int *)((uintptr_t)__ptr + uVar3 * 4 + 8) + *(int *)((uintptr_t)__ptr + uVar3 * 4 + 0xc) +
 *(int *)((uintptr_t)__ptr + uVar3 * 4 + 0x10) + *(int *)((uintptr_t)__ptr + uVar3 * 4 + 0x14)
 + *(int *)((uintptr_t)__ptr + uVar3 * 4 + 0x18) +
 *(int *)((uintptr_t)__ptr + uVar3 * 4 + 0x1c) + *(int *)((uintptr_t)__ptr + uVar3 * 4 + 0x20);
 uVar5 = uVar3 + 8;
 } while ((param_1 - 1 & 0xfffffff8) != uVar3 + 8);
 iVar2 = uVar3 + 9;
 }
 if (uVar1 != 0) {
 uVar5 = 0;
 do {
 iVar4 = iVar4 + *(int *)((uintptr_t)__ptr + uVar5 * 4 + iVar2 * 4);
 uVar5 = uVar5 + 1;
 } while (uVar1 != uVar5);
 }
 }
 free(__ptr);
 }
 return iVar4;
}



/* Function: heap_realloc @ 000117c0 */

undefined4 heap_realloc(void)

{
 undefined4 *__ptr;
 undefined4 *__ptr_00;
 undefined4 uVar1;
 
 __ptr = (undefined4 *)(uintptr_t)malloc(0x14);
 if (__ptr == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 *__ptr = 1;
 __ptr[1] = 2;
 __ptr[2] = 3;
 __ptr[3] = 4;
 __ptr[4] = 5;
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (undefined4 *)0x0) {
 uVar1 = 0xfffffffe;
 __ptr_00 = __ptr;
 }
 else {
 __ptr_00[5] = 0x32;
 __ptr_00[6] = 0x3c;
 __ptr_00[7] = 0x46;
 __ptr_00[8] = 0x50;
 __ptr_00[9] = 0x5a;
 uVar1 = 0xfffffffd;
 if (__ptr_00[2] == 3) {
 uVar1 = 0x32;
 }
 }
 free(__ptr_00);
 }
 return uVar1;
}



/* Function: heap_array @ 00011870 */

undefined4 heap_array(uint param_1)

{
 void *__ptr;
 uint uVar1;
 int iVar2;
 uint uVar3;
 undefined4 uVar4;
 
 __ptr = (void *)(uintptr_t)malloc(param_1 * 4);
 if (__ptr == (void *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 if (0 < (int)param_1) {
 uVar1 = 0;
 if (2 < param_1 - 1) {
 uVar1 = 0;
 iVar2 = 6;
 do {
 *(int *)((int)__ptr + uVar1 * 4) = iVar2 + -6;
 *(int *)((int)__ptr + uVar1 * 4 + 4) = iVar2 + -3;
 *(int *)((int)__ptr + uVar1 * 4 + 8) = iVar2;
 *(int *)((int)__ptr + uVar1 * 4 + 0xc) = iVar2 + 3;
 uVar1 = uVar1 + 4;
 iVar2 = iVar2 + 0xc;
 } while ((param_1 & 0xfffffffc) != uVar1);
 }
 if ((param_1 & 3) != 0) {
 iVar2 = uVar1 * 3;
 uVar3 = 0;
 do {
 *(int *)((int)__ptr + uVar3 * 4 + uVar1 * 4) = iVar2;
 uVar3 = uVar3 + 1;
 iVar2 = iVar2 + 3;
 } while ((param_1 & 3) != uVar3);
 }
 }
 uVar4 = *(undefined4 *)((uintptr_t)__ptr + (param_1 - ((int)param_1 >> 0x1f) & 0xfffffffe) * 2);
 free(__ptr);
 }
 return uVar4;
}



/* Function: heap_struct @ 00011940 */

int heap_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: heap_nested @ 00011950 */

undefined4 heap_nested(undefined4 *param_1)

{
 undefined4 *__ptr;
 undefined4 *puVar1;
 undefined4 uVar2;
 
 __ptr = (undefined4 *)(uintptr_t)malloc(8);
 *param_1 = (undefined4)(uintptr_t)__ptr;
 if (__ptr == (undefined4 **)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 puVar1 = (undefined4 *)(uintptr_t)malloc(8);
 __ptr[1] = (int)(uintptr_t)puVar1;
 if (puVar1 == (undefined4 *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 *puVar1 = 0x14;
 puVar1[1] = 0;
 uVar2 = 0;
 }
 }
 return uVar2;
}



/* Function: linked_list_heap @ 000119c0 */

int linked_list_heap(void)

{
 int *__ptr;
 undefined4 *puVar1;
 undefined4 *puVar2;
 int *piVar3;
 int iVar4;
 
 __ptr = (int *)(uintptr_t)malloc(8);
 iVar4 = -1;
 if (__ptr != (int *)0x0) {
 *__ptr = 0;
 puVar1 = (undefined4 *)(uintptr_t)malloc(8);
 if (puVar1 == (undefined4 *)0x0) {
 free(__ptr);
 }
 else {
 *puVar1 = 10;
 puVar1[1] = 0;
 __ptr[1] = (int)puVar1;
 puVar2 = (undefined4 *)(uintptr_t)malloc(8);
 if (puVar2 == (undefined4 *)0x0) {
 do {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 }
 else {
 *puVar2 = 0x14;
 puVar2[1] = 0;
 puVar1[1] = (int)(uintptr_t)puVar2;
 puVar1 = (undefined4 *)(uintptr_t)malloc(8);
 if (puVar1 == (undefined4 *)0x0) {
 do {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 }
 else {
 *puVar1 = 0x1e;
 puVar1[1] = 0;
 puVar2[1] = puVar1;
 puVar2 = (undefined4 *)(uintptr_t)malloc(8);
 if (puVar2 == (undefined4 *)0x0) {
 do {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 }
 else {
 *puVar2 = 0x28;
 puVar2[1] = 0;
 puVar1[1] = (int)(uintptr_t)puVar2;
 iVar4 = 0;
 piVar3 = __ptr;
 do {
 iVar4 = iVar4 + *piVar3;
 piVar3 = (int *)piVar3[1];
 } while (piVar3 != (int *)0x0);
 do {
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 }
 }
 }
 }
 }
 return iVar4;
}



/* Function: create_tree_node @ 00011b40 */

void create_tree_node(undefined4 param_1)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)(uintptr_t)malloc(0xc);
 if (puVar1 != (undefined4 *)0x0) {
 *puVar1 = param_1;
 puVar1[1] = 0;
 puVar1[2] = 0;
 }
 return;
}



/* Function: tree_heap_traversal @ 00011b80 */

undefined4 tree_heap_traversal(void)

{
 return 0x3c;
}



/* Function: memory_leak @ 00011b90 */

undefined4 memory_leak(uint param_1)

{
 void *pvVar1;
 undefined4 uVar2;
 uint uVar3;
 uint uVar4;
 
 pvVar1 = (void *)(uintptr_t)malloc(param_1 * 4);
 if (pvVar1 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (0 < (int)param_1) {
 uVar3 = param_1 & 7;
 uVar4 = 0;
 if (6 < param_1 - 1) {
 uVar4 = 0;
 do {
 *(uint *)((uintptr_t)pvVar1 + uVar4 * 4) = uVar4;
 *(uint *)((uintptr_t)pvVar1 + uVar4 * 4 + 4) = uVar4 + 1;
 *(uint *)((uintptr_t)pvVar1 + uVar4 * 4 + 8) = uVar4 + 2;
 *(uint *)((uintptr_t)pvVar1 + uVar4 * 4 + 0xc) = uVar4 + 3;
 *(uint *)((uintptr_t)pvVar1 + uVar4 * 4 + 0x10) = uVar4 + 4;
 *(uint *)((uintptr_t)pvVar1 + uVar4 * 4 + 0x14) = uVar4 + 5;
 *(uint *)((uintptr_t)pvVar1 + uVar4 * 4 + 0x18) = uVar4 + 6;
 *(uint *)((uintptr_t)pvVar1 + uVar4 * 4 + 0x1c) = uVar4 + 7;
 uVar4 = uVar4 + 8;
 } while (uVar4 != (param_1 & 0xfffffff8));
 }
 for (; uVar3 != 0; uVar3 = uVar3 - 1) {
 *(uint *)((int)pvVar1 + uVar4 * 4) = uVar4;
 uVar4 = uVar4 + 1;
 }
 }
 uVar2 = *(undefined4 *)((uintptr_t)pvVar1 + (param_1 - ((int)param_1 >> 0x1f) & 0xfffffffe) * 2);
 }
 return uVar2;
}



/* Function: dangling_pointer @ 00011c50 */

undefined4 dangling_pointer(void)

{
 undefined4 *__ptr;
 undefined4 uVar1;
 
 __ptr = (undefined4 *)(uintptr_t)malloc(4);
 if (__ptr == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 uVar1 = *__ptr;
 }
 return uVar1;
}



/* Function: double_free @ 00011ca0 */

undefined4 double_free(undefined4 *param_1)

{
 if (param_1 != (undefined4 *)0x0) {
 return *param_1;
 }
 return 0xfffffffe;
}



/* Function: heap_overflow @ 00011cc0 */

undefined4 heap_overflow(void)

{
 return 0;
}



/* Function: test_heap_memory @ 00011cd0 */

void test_heap_memory(void)

{
 undefined4 *puVar1;
 undefined4 *puVar2;
 __pid_t __pid;
 uint uVar3;
 undefined4 uVar4;
 char *__format;
 uint local_10;
 
 puts(&DAT_000135df);
 printf("HEAP-L2-01 (heap_basic): %d\n",10);
 printf("HEAP-L2-02 (heap_calloc): %d\n",0);
 puVar1 = (undefined4 *)(uintptr_t)malloc(0x14);
 if (puVar1 == (undefined4 *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 *puVar1 = 1;
 puVar1[1] = 2;
 puVar1[2] = 3;
 puVar1[3] = 4;
 puVar1[4] = 5;
 puVar2 = realloc(puVar1,0x28);
 if (puVar2 == (undefined4 *)0x0) {
 uVar4 = 0xfffffffe;
 puVar2 = puVar1;
 }
 else {
 puVar2[5] = 0x32;
 puVar2[6] = 0x3c;
 puVar2[7] = 0x46;
 puVar2[8] = 0x50;
 puVar2[9] = 0x5a;
 uVar4 = 0xfffffffd;
 if (puVar2[2] == 3) {
 uVar4 = 0x32;
 }
 }
 free(puVar2);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar4);
 printf("HEAP-L2-04 (heap_array): %d\n",0xf);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 puVar1 = (undefined4 *)(uintptr_t)malloc(8);
 if (puVar1 == (undefined4 *)0x0) {
 printf("HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 *puVar1 = 10;
 puVar2 = (undefined4 *)(uintptr_t)malloc(8);
 if (puVar2 == (undefined4 *)0x0) {
 free(puVar1);
 uVar4 = 0xfffffffe;
 }
 else {
 *puVar2 = 0x14;
 puVar2[1] = 0;
 uVar4 = 0;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar4);
 free(puVar2);
 free(puVar1);
 }
 uVar4 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar4);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
 printf("HEAP-L3-03 (memory_leak): %d\n",2);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_000132e3);
 }
 else {
 waitpid(__pid,(int *)&local_10,0);
 uVar3 = local_10 & 0x7f;
 if (uVar3 == 0) {
 uVar3 = local_10 >> 8 & 0xff;
 __format = &DAT_0001327d;
 }
 else {
 if ((int)(uVar3 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = &DAT_000132a2;
 }
 printf(__format,uVar3);
 }
 return;
 }
 uVar4 = dangling_pointer();
 printf(&DAT_0001326d,uVar4);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: FUN_00011f75 @ 00011f75 */

void FUN_00011f75(void)

{
 int unaff_retaddr;
 
 *(int *)(unaff_retaddr + 0x40ef) = *(int *)(unaff_retaddr + 0x40ef) + 1;
 return;
}



/* Function: FUN_00011f95 @ 00011f95 */

int FUN_00011f95(void)

{
 int unaff_retaddr;
 
 return *(int *)(unaff_retaddr + 0x40cf) * 2;
}



/* Function: FUN_00011fb5 @ 00011fb5 */

undefined4 FUN_00011fb5(undefined4 param_1,uint param_2)

{
 undefined4 uVar1;
 int unaff_retaddr;
 
 uVar1 = 0xffffffff;
 if (param_2 < 10) {
 uVar1 = *(undefined4 *)(unaff_retaddr + 0x168f + param_2 * 4);
 }
 return uVar1;
}



/* Function: FUN_00011fe5 @ 00011fe5 */

void FUN_00011fe5(undefined4 param_1,int param_2)

{
 int iVar1;
 int unaff_retaddr;
 
 iVar1 = 0;
 if (param_2 == 0) {
 iVar1 = *(int *)(unaff_retaddr + 0x4083) + 1;
 }
 *(int *)(unaff_retaddr + 0x4083) = iVar1;
 return;
}



/* Function: call_static_func @ 00012010 */

int call_static_func(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: FUN_00012025 @ 00012025 */

int FUN_00012025(void)

{
 int unaff_retaddr;
 
 return *(int *)(unaff_retaddr + 0x4033) + 100;
}



/* Function: call_extern_func @ 00012040 */

void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: FUN_00012075 @ 00012075 */

int FUN_00012075(void)

{
 int unaff_retaddr;
 
 return *(char *)(*(int *)(unaff_retaddr + 0x3fdb) + 4) + 0x2a;
}



/* Function: access_bss_var @ 00012090 */

undefined4 access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 000120a0 */

undefined4 access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 000120b0 */

undefined4 global_struct_access(void)

{
 return 0x1e;
}



/* Function: FUN_000120c5 @ 000120c5 */

void FUN_000120c5(undefined4 param_1,undefined4 param_2)

{
 int unaff_retaddr;
 
 *(undefined4 *)(unaff_retaddr + 0x3f8f) = param_2;
 return;
}



/* Function: FUN_000120e5 @ 000120e5 */

undefined4 FUN_000120e5(void)

{
 int unaff_retaddr;
 
 return *(undefined4 *)(unaff_retaddr + 0x3f6f);
}



/* Function: FUN_00012105 @ 00012105 */

void FUN_00012105(undefined4 param_1,undefined4 param_2)

{
 int unaff_retaddr;
 
 *(undefined4 *)(unaff_retaddr + 0x3f67) = param_2;
 return;
}



/* Function: call_global_callback @ 00012120 */

undefined4 call_global_callback(undefined4 param_1)

{
 undefined4 uVar1;
 
 if (global_func_ptr == (code *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = (*global_func_ptr)(param_1);
 }
 return uVar1;
}



/* Function: FUN_00012155 @ 00012155 */

undefined4 FUN_00012155(undefined4 param_1,undefined4 *param_2)

{
 int unaff_retaddr;
 
 *(undefined4 **)(unaff_retaddr + 0x3f1b) = param_2;
 if (param_2 != (undefined4 *)0x0) {
 return *param_2;
 }
 return 0xffffffff;
}



/* Function: static_complex_init @ 00012180 */

undefined4 static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00012190 */

int tls_access(int param_1)

{
 return param_1 * 2;
}



/* Function: init_order_test @ 000121a0 */

undefined4 init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 000121b0 */

void test_static_global(void)

{
 undefined4 uVar1;
 undefined4 local_c;
 
 puts(&DAT_000135fd);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n",global_counter);
 printf("STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n",static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n",uVar1);
 printf("STM-L2-03 (read_const_data): %d\n",(char)const_string[4] + 0x2a);
 printf("STM-L2-04 (access_bss_var): %d\n",0);
 printf("STM-L2-04 (access_bss_buffer): %d\n",0);
 printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 printf("STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 local_c = 100;
 global_heap_ptr = &local_c;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



/* Function: double_value @ 000123c0 */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: memop_memset @ 000123d0 */

uint memop_memset(byte *param_1,size_t param_2,int param_3)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
 memset(param_1,param_3,param_2);
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 00012410 */

undefined4 memop_memcpy(void *param_1,void *param_2,uint param_3)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(undefined4 *)(((param_3 & 0xfffffffc) - 4) + (int)param_1);
 }
 return uVar1;
}



/* Function: memop_memmove @ 00012460 */

int memop_memmove(void *param_1,uint param_2)

{
 int iVar1;
 
 iVar1 = -1;
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
 iVar1 = (int)*(char *)((int)param_1 + 1);
 }
 return iVar1;
}



/* Function: memop_memcmp @ 000124b0 */

int memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = 1;
 if (iVar2 < 1) {
 iVar1 = -(uint)(iVar2 != 0);
 }
 }
 return iVar1;
}



/* Function: memop_bzero @ 00012500 */

uint memop_bzero(byte *param_1,size_t param_2)

{
 uint uVar1;
 
 if (param_1 == (byte *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(param_1,0,param_2);
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}



/* Function: memop_bcopy @ 00012540 */

uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 uVar1 = (uint)*param_2;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 00012590 */

undefined4 memop_unaligned_access(int param_1)

{
 if (param_1 != 0) {
 return *(undefined4 *)(param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memory_barrier @ 000125b0 */

int memop_memory_barrier(int *param_1)

{
 if (param_1 != (int *)0x0) {
 LOCK();
 UNLOCK();
 return *param_1 + *param_1;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 000125d0 */

void test_memory_op_functions(void)

{
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 undefined4 uVar4;
 undefined4 in_stack_ffffffe4;
 
 uVar4 = 0x125d9;
 puts(&DAT_00013621);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 printf("MEMOP-L2-03: %c\n",0x48);
 uVar3 = 0xc;
 iVar1 = memcmp(&DAT_00013670,&DAT_0001367c,0xc);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 printf("MEMOP-L2-04: %d\n",iVar2);
 printf("MEMOP-L2-05: %d\n",0);
 printf("MEMOP-L2-06: %d\n",1);
 printf("MEMOP-L3-01: 0x%x\n",0x4030201);
 LOCK();
 UNLOCK();
 printf("MEMOP-L3-02: %d\n",10,uVar3,uVar4,in_stack_ffffffe4);
 return;
}



/* Function: main @ 00012700 */

undefined4 main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 00012730 */

int extern_function(int param_1)

{
 return param_1 * 3;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
