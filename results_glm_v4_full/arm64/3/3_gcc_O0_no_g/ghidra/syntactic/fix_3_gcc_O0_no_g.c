/* Auto-injected type definitions by preprocessor */
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

typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef unsigned char byte;
typedef int __pid_t;
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint64_t undefined7;

/* Standard library includes */
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Define NULL if not already defined */
#ifndef NULL
#define NULL ((void *)0)
#endif

/* External declarations for CRT functions */
extern void __cxa_finalize(void *dso_handle);
extern void *__dso_handle;
extern void __stack_chk_fail(void);
extern __pid_t fork(void);
extern int waitpid(__pid_t pid, int *status, int options);
extern void perror(const char *s);
extern void exit(int status);
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern void *malloc(size_t size);
extern void *calloc(size_t nmemb, size_t size);
extern void *realloc(void *ptr, size_t size);
extern void free(void *ptr);
extern void *memset(void *s, int c, size_t n);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *memmove(void *dest, const void *src, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);





/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/3/3_gcc_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Stack canary variables */
extern unsigned long __stack_chk_guard;

/* Additional type definitions needed for Ghidra decompilation */
typedef unsigned char undefined;
typedef void code(void);

/* Global variables */
static int global_counter = 0;
static int file_scope_static = 0;
static void (*global_func_ptr)(int) = NULL;
static void *global_heap_ptr = NULL;
static int global_array[10];
static int global_point;
static int complex_init;
static long tpidr_el0;
static int static_depends_0 = 0;
static char completed_0 = 0;

/* Data strings from original binary */
static const char DAT_001028f8[] = "=== Testing Stack Memory ===";
static const char DAT_00102a68[] = "=== Testing Heap Memory ===";
static const char DAT_00102bd8[] = "%d\n";
static const char DAT_00102c58[] = "fork";
static const char DAT_00102be8[] = "exit status: %d\n";
static const char DAT_00102c10[] = "signal: %d\n";
static const char DAT_00102c78[] = "=== Testing Static and Global Memory ===";
static const char DAT_00102f28[] = "=== Testing Memory Operations ===";
int extern_global_var = 0;
static const char const_string[] = "Hello";
static int bss_var = 0;
static char bss_buffer = 0;
static int DAT_0011403c = 0;
static int DAT_00114050 = 0;
static int DAT_00114058 = 0;


/* Function: FUN_001009e0 @ 001009e0 */

static void FUN_001009e0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones */
static void deregister_tm_clones(void) {
    return;
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100bfc @ 00100bfc */

static void FUN_00100bfc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 00100c54 */

static int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: local_vars @ 00100c6c */

static int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 00100ca0 */
/* WARNING: Removing unreachable block (ram,0x00100d20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static undefined4 local_array(int param_1)

{
 int local_34;
 int aiStack_30 [12];
 
 for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
 aiStack_30[local_34] = local_34 * param_1;
 }
 return aiStack_30[5];
}



/* Function: local_struct @ 00100d30 */

static int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 00100d60 */

static undefined4 address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00100d88 */

static int address_of_array(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: large_stack_frame @ 00100dbc */
/* WARNING: Removing unreachable block (ram,0x00100e34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static undefined1 large_stack_frame(int param_1)

{
 int local_80c;
 undefined1 auStack_808 [2056];
 
 for (local_80c = 0; local_80c < 0x800; local_80c = local_80c + 1) {
 auStack_808[local_80c] = (char)local_80c;
 }
 return auStack_808[0x400];
}



/* Function: vla_stack @ 00100e48 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static undefined4 vla_stack(int param_1)

{
 ulong uVar1;
 long lVar2;
 long lVar3;
 undefined1 *puVar4;
 undefined4 uVar5;
 long in_x4;
 ulong in_x5;
 long in_x6;
 undefined8 in_x7;
 undefined1 auStack_50 [16];
 int local_1c;
 
 lVar3 = __stack_chk_guard;
 puVar4 = auStack_50;
 if ((param_1 < 1) || (1000 < param_1)) {
 uVar5 = 0xffffffff;
 }
 else {
 in_x5 = (ulong)(long)param_1 >> 0x3b;
 in_x4 = (long)param_1 << 5;
 in_x6 = (long)param_1;
 in_x7 = 0;
 uVar1 = (long)param_1 * 4 + 0xf;
 for (; puVar4 != auStack_50 + -(uVar1 & 0xffffffffffff0000); puVar4 = puVar4 + -0x10000) {
 *(undefined8 *)(puVar4 + -0xfc00) = 0;
 }
 lVar2 = -(uVar1 & 0xfff0);
 *(undefined8 *)(puVar4 + lVar2) = 0;
 if (0x3ff < (uVar1 & 0xfff0)) {
 *(undefined8 *)(puVar4 + lVar2 + 0x400) = 0;
 }
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 *(int *)(puVar4 + (long)local_1c * 4 + lVar2 + 0x10) = local_1c << 1;
 }
 uVar5 = *(undefined4 *)(puVar4 + (long)(param_1 / 2) * 4 + lVar2 + 0x10);
 }
 if (lVar3 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar5;
}



/* Function: alloca_usage @ 00100fcc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static undefined4 alloca_usage(int param_1)

{
 ulong uVar1;
 long lVar2;
 long lVar3;
 undefined1 *puVar4;
 undefined4 uVar5;
 undefined1 auStack_50 [16];
 int local_14;
 
 lVar3 = __stack_chk_guard;
 puVar4 = auStack_50;
 if (param_1 < 1) {
 uVar5 = 0xffffffff;
 }
 else {
 uVar1 = (long)param_1 * 4 + 0xf;
 for (; puVar4 != auStack_50 + -(uVar1 & 0xffffffffffff0000); puVar4 = puVar4 + -0x10000) {
 *(undefined8 *)(puVar4 + -0xfc00) = 0;
 }
 lVar2 = -(uVar1 & 0xfff0);
 *(undefined8 *)(puVar4 + lVar2) = 0;
 if (0x3ff < (uVar1 & 0xfff0)) {
 *(undefined8 *)(puVar4 + lVar2 + 0x400) = 0;
 }
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 *(int *)(puVar4 + (long)local_14 * 4 + lVar2 + 0x10) = local_14 * 3;
 }
 uVar5 = *(undefined4 *)(puVar4 + (long)(param_1 / 2) * 4 + lVar2 + 0x10);
 }
 if (lVar3 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar5;
}



/* Function: stack_alias @ 00101104 */

/* WARNING: Removing unreachable block (ram,0x00101198) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

static undefined4 stack_alias(undefined4 *param_1, undefined4 *param_2)

{
 undefined4 uVar1;
 
 if ((undefined1 *)0 == (undefined1 *)0xc) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = 0x14;
 }
 return uVar1;
}



/* Function: test_stack_memory @ 001011a8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void test_stack_memory(void)

{
 int iVar1;
 ulong uVar2;
 undefined1 auStack_38 [4];
 undefined4 local_34;
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 undefined8 uStack_18;
 undefined8 local_10;
 long local_8;
 
 local_8 = __stack_chk_guard;
 puts(DAT_001028f8);
 uVar2 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",uVar2 & 0xffffffff);
 uVar2 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n",uVar2 & 0xffffffff);
 uVar2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",uVar2 & 0xffffffff);
 uVar2 = address_of_local((undefined4 *)auStack_38);
 printf("MEM-L1-04 (address_of_local): %d\n",uVar2 & 0xffffffff);
 local_20 = 0;
 uStack_18 = 0;
 local_10 = 0;
 local_30 = 0x200000001;
 local_28 = 3;
 uVar2 = address_of_array((int *)&local_30);
 iVar1 = printf("MEM-L1-05 (address_of_array): %d\n",uVar2 & 0xffffffff);
 uVar2 = large_stack_frame(iVar1);
 printf("MEM-L2-01 (large_stack_frame): %d\n",uVar2 & 0xffffffff);
 uVar2 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",uVar2 & 0xffffffff);
 uVar2 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",uVar2 & 0xffffffff);
 local_34 = 0;
 uVar2 = stack_alias(&local_34,&local_34);
 printf("MEM-L2-04 (stack_alias): %d\n",uVar2 & 0xffffffff);
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: heap_basic @ 001012fc */

static undefined4 heap_basic(int param_1)

{
 undefined4 uVar1;
 void *__ptr;
 undefined4 local_10;
 
 __ptr = malloc((long)param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 *(int *)((long)__ptr + (long)local_10 * 4) = local_10 << 1;
 }
 uVar1 = *(undefined4 *)((long)__ptr + (long)(param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar1;
}



/* Function: heap_calloc @ 001013a8 */

static int heap_calloc(int param_1)

{
 void *__ptr;
 undefined4 local_10;
 undefined4 local_c;
 
 __ptr = calloc((long)param_1,4);
 if (__ptr == (void *)0x0) {
 local_10 = -1;
 }
 else {
 local_10 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)((long)__ptr + (long)local_c * 4);
 }
 free(__ptr);
 }
 return local_10;
}



/* Function: heap_realloc @ 00101434 */

static undefined4 heap_realloc(int param_1)

{
 int iVar1;
 undefined4 uVar2;
 void *__ptr;
 void *__ptr_00;
 undefined4 local_20;
 undefined4 local_1c;
 
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
 *(int *)((long)__ptr + (long)local_20 * 4) = local_20 + 1;
 }
 iVar1 = *(int *)((long)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 for (local_1c = 5; local_1c < 10; local_1c = local_1c + 1) {
 *(int *)((long)__ptr_00 + (long)local_1c * 4) = local_1c * 10;
 }
 if (iVar1 == *(int *)((long)__ptr_00 + 8)) {
 uVar2 = *(undefined4 *)((long)__ptr_00 + 0x14);
 }
 else {
 uVar2 = 0xfffffffd;
 }
 free(__ptr_00);
 }
 }
 return uVar2;
}



/* Function: heap_array @ 00101564 */

static undefined4 heap_array(int param_1)

{
 undefined4 uVar1;
 void *__ptr;
 undefined4 local_10;
 
 __ptr = malloc((long)param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 *(int *)((long)__ptr + (long)local_10 * 4) = local_10 * 3;
 }
 uVar1 = *(undefined4 *)((long)__ptr + (long)(param_1 / 2) * 4);
 free(__ptr);
 }
 return uVar1;
}



/* Function: heap_struct @ 00101618 */

static int heap_struct(int param_1)

{
 int iVar1;
 int *__ptr;
 
 __ptr = malloc(8);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 *__ptr = param_1;
 __ptr[1] = param_1 << 1;
 iVar1 = *__ptr + __ptr[1];
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_nested @ 0010168c */

static undefined8 heap_nested(void **param_1)

{
 void *pvVar1;
 undefined8 uVar2;
 long lVar3;
 
 pvVar1 = malloc(0x10);
 *param_1 = pvVar1;
 if (*param_1 == 0) {
 uVar2 = 0xffffffff;
 }
 else {
 *(undefined4 *)*param_1 = 10;
 lVar3 = (long)*param_1;
 pvVar1 = malloc(0x10);
 *(void **)(lVar3 + 8) = pvVar1;
 if (*(long *)(*param_1 + 8) == 0) {
 free(*param_1);
 uVar2 = 0xfffffffe;
 }
 else {
 **(undefined4 **)(*param_1 + 8) = 0x14;
 *(undefined8 *)(*(long *)(*param_1 + 8) + 8) = 0;
 uVar2 = 0;
 }
 }
 return uVar2;
}



/* Function: linked_list_heap @ 00101748 */

static int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int local_38;
 int local_34;
 int *local_30;
 int *local_28;
 int *local_20;
 
 local_30 = (int *)0x0;
 local_28 = (int *)0x0;
 local_38 = 0;
 while( true ) {
 if (4 < local_38) {
 local_34 = 0;
 for (local_20 = local_30; local_20 != (int *)0x0; local_20 = *(int **)(local_20 + 2)) {
 local_34 = local_34 + *local_20;
 }
 while (local_30 != (int *)0x0) {
 piVar2 = *(int **)(local_30 + 2);
 free(local_30);
 local_30 = piVar2;
 }
 return local_34;
 }
 piVar2 = malloc(0x10);
 if (piVar2 == (int *)0x0) break;
 *piVar2 = local_38 * 10;
 piVar2[2] = 0;
 piVar2[3] = 0;
 piVar1 = piVar2;
 if (local_30 != (int *)0x0) {
 *(int **)(local_28 + 2) = piVar2;
 piVar1 = local_30;
 }
 local_30 = piVar1;
 local_38 = local_38 + 1;
 local_28 = piVar2;
 }
 while (local_30 != (int *)0x0) {
 piVar2 = *(int **)(local_30 + 2);
 free(local_30);
 local_30 = piVar2;
 }
 return -1;
}



/* Function: create_tree_node @ 00101894 */

static undefined4 * create_tree_node(undefined4 param_1)

{
 undefined4 *puVar1;
 
 puVar1 = malloc(0x18);
 if (puVar1 != (undefined4 *)0x0) {
 *puVar1 = param_1;
 *(undefined8 *)(puVar1 + 2) = 0;
 *(undefined8 *)(puVar1 + 4) = 0;
 }
 return puVar1;
}



/* Function: tree_heap_traversal @ 001018e0 */

static int tree_heap_traversal(void)

{
 int iVar1;
 int *__ptr;
 undefined8 uVar2;
 
 __ptr = (int *)create_tree_node(10);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 uVar2 = (undefined8)create_tree_node(0x14);
 *(undefined8 *)(__ptr + 2) = uVar2;
 uVar2 = (undefined8)create_tree_node(0x1e);
 *(undefined8 *)(__ptr + 4) = uVar2;
 if ((*(long *)(__ptr + 2) == 0) || (*(long *)(__ptr + 4) == 0)) {
 if (*(long *)(__ptr + 2) != 0) {
 free(*(void **)(__ptr + 2));
 }
 if (*(long *)(__ptr + 4) != 0) {
 free(*(void **)(__ptr + 4));
 }
 free(__ptr);
 iVar1 = -2;
 }
 else {
 iVar1 = *__ptr + **(int **)(__ptr + 2) + **(int **)(__ptr + 4);
 free(*(void **)(__ptr + 2));
 free(*(void **)(__ptr + 4));
 free(__ptr);
 }
 }
 return iVar1;
}



/* Function: memory_leak @ 001019f0 */

static undefined4 memory_leak(int param_1)

{
 undefined4 uVar1;
 void *pvVar2;
 undefined4 local_c;
 
 pvVar2 = malloc((long)param_1 << 2);
 if (pvVar2 == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 *(int *)((long)pvVar2 + (long)local_c * 4) = local_c;
 }
 uVar1 = *(undefined4 *)((long)pvVar2 + (long)(param_1 / 2) * 4);
 }
 return uVar1;
}



/* Function: dangling_pointer @ 00101a88 */

static uint dangling_pointer(void)

{
 uint uVar1;
 uint *__ptr;
 
 __ptr = malloc(4);
 if (__ptr == (uint *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 *__ptr = 0x2a;
 printf("value before free: %d\n",(ulong)*__ptr);
 free(__ptr);
 uVar1 = *__ptr;
 }
 return uVar1;
}



/* Function: double_free @ 00101af8 */

static undefined4 double_free(undefined4 *param_1)

{
 undefined4 uVar1;
 undefined4 *__ptr;
 
 if (param_1 == (undefined4 *)0x0) {
 __ptr = malloc(4);
 if (__ptr == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 free(__ptr);
 free(__ptr);
 uVar1 = 0xfffffffe;
 }
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}



/* Function: heap_overflow @ 00101b64 */

static undefined4 heap_overflow(void)

{
 undefined4 uVar1;
 undefined4 *__ptr;
 int local_10;
 
 __ptr = malloc(0x28);
 if (__ptr == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
 __ptr[local_10] = local_10 * 100;
 }
 uVar1 = *__ptr;
 free(__ptr);
 }
 return uVar1;
}



/* Function: test_heap_memory @ 00101bec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void test_heap_memory(void)

{
 int iVar1;
 ulong uVar2;
 uint local_1c;
 __pid_t local_18;
 uint local_14;
 void *local_10;
 long local_8;
 
 local_8 = __stack_chk_guard;
 puts(DAT_00102a68);
 uVar2 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar2 & 0xffffffff);
 uVar2 = heap_calloc(5);
 iVar1 = printf("HEAP-L2-02 (heap_calloc): %d\n",uVar2 & 0xffffffff);
 uVar2 = heap_realloc(iVar1);
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar2 & 0xffffffff);
 uVar2 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n",uVar2 & 0xffffffff);
 uVar2 = heap_struct(5);
 printf("HEAP-L2-05 (heap_struct): %d\n",uVar2 & 0xffffffff);
 local_10 = (void *)0x0;
 uVar2 = heap_nested(&local_10);
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar2 & 0xffffffff);
 if (local_10 != (void *)0x0) {
 free(*(void **)((long)local_10 + 8));
 free(local_10);
 }
 uVar2 = linked_list_heap();
 iVar1 = printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar2 & 0xffffffff);
 uVar2 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar2 & 0xffffffff);
 uVar2 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar2 & 0xffffffff);
 printf("HEAP-L3-04 (dangling_pointer): ");
 local_18 = fork();
 if (local_18 == 0) {
 local_14 = dangling_pointer();
 printf(DAT_00102bd8,(ulong)local_14);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (local_18 < 1) {
 perror(DAT_00102c58);
 }
 else {
 waitpid(local_18,(int *)&local_1c,0);
 if ((local_1c & 0x7f) == 0) {
 printf(DAT_00102be8,(ulong)((int)local_1c >> 8 & 0xff));
 }
 else if ('\0' < (char)(((byte)local_1c & 0x7f) + 1) >> 1) {
 printf(DAT_00102c10,(ulong)(local_1c & 0x7f));
 }
 }
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: global_var_access @ 00101e14 */

static int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00101e40 */

static int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00101e54 */

static undefined4 global_array_access(int param_1)

{
 undefined4 uVar1;
 
 if ((param_1 < 0) || (9 < param_1)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(undefined4 *)(&global_array + (long)param_1 * 4);
 }
 return uVar1;
}



/* Function: static_local @ 00101e94 */

static int static_local(int param_1)

{
 static int counter_1 = 0;
 if (param_1 == 0) {
 counter_1 = counter_1 + 1;
 }
 else {
 counter_1 = 0;
 }
 return counter_1;
}



/* Function: static_helper @ 00101eec */

static int static_helper(int param_1)

{
 return param_1 << 1;
}



/* Function: call_static_func @ 00101f04 */

static int call_static_func(undefined4 param_1)

{
 int iVar1;
 
 iVar1 = static_helper(param_1);
 return iVar1 + 1;
}



/* Function: access_extern_global @ 00101f24 */

static int access_extern_global(void)

{
 return extern_global_var + 100;
}





/* Function: call_extern_func @ 00101f38 */

static void call_extern_func(void)

{
 /* Stub for extern_function */
 return;
}



/* Function: read_const_data @ 00101f50 */

static int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101f74 */

static undefined4 access_bss_var(void)

{
 return bss_var;
}



/* Function: access_bss_buffer @ 00101f84 */

static undefined1 access_bss_buffer(void)

{
 return bss_buffer;
}



/* Function: global_struct_access @ 00101f94 */

static int global_struct_access(void)

{
 return global_point + DAT_0011403c;
}



/* Function: set_file_static @ 00101fb4 */

static void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 00101fd8 */

static undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00101fe8 */

static void set_global_callback(void (*param_1)(int))

{
 global_func_ptr = param_1;
 return;
}



/* Function: call_global_callback @ 0010200c */

static undefined8 call_global_callback(undefined4 param_1)

{
 undefined8 uVar1;
 
 if (global_func_ptr == (code *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 (*global_func_ptr)(param_1);
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: global_heap_store @ 00102050 */

static undefined4 global_heap_store(undefined4 *param_1)

{
 undefined4 uVar1;
 
 global_heap_ptr = param_1;
 if (param_1 == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *param_1;
 }
 return uVar1;
}



/* Function: static_complex_init @ 0010209c */

static int static_complex_init(void)

{
 return complex_init + DAT_00114050 + DAT_00114058;
}



/* Function: tls_access @ 001020cc */

static int tls_access(undefined4 param_1)

{
 long lVar1;
 
 lVar1 = tpidr_el0;
 *(undefined4 *)(lVar1 + 0x10) = param_1;
 lVar1 = tpidr_el0;
 return *(int *)(lVar1 + 0x10) << 1;
}











/* Function: test_static_global @ 0010219c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void test_static_global(void)

{
 int iVar1;
 ulong uVar2;
 undefined4 local_c;
 long local_8;
 
 local_8 = __stack_chk_guard;
 iVar1 = puts(DAT_00102c78);
 uVar2 = global_var_access();
 iVar1 = printf("STM-L1-01 (global_var_access): %d\n",uVar2 & 0xffffffff);
 uVar2 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n",uVar2 & 0xffffffff);
 uVar2 = global_array_access(5);
 printf("STM-L1-02 (global_array_access): %d\n",uVar2 & 0xffffffff);
 static_local(1);
 uVar2 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",uVar2 & 0xffffffff);
 uVar2 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",uVar2 & 0xffffffff);
 uVar2 = call_static_func(5);
 iVar1 = printf("STM-L1-04 (call_static_func): %d\n",uVar2 & 0xffffffff);
 uVar2 = access_extern_global();
 iVar1 = printf("STM-L2-01 (access_extern_global): %d\n",uVar2 & 0xffffffff);
 call_extern_func();
 iVar1 = printf("STM-L2-02 (call_extern_func): %d\n",uVar2 & 0xffffffff);
 uVar2 = read_const_data();
 iVar1 = printf("STM-L2-03 (read_const_data): %d\n",uVar2 & 0xffffffff);
 uVar2 = access_bss_var();
 iVar1 = printf("STM-L2-04 (access_bss_var): %d\n",uVar2 & 0xffffffff);
 uVar2 = access_bss_buffer();
 iVar1 = printf("STM-L2-04 (access_bss_buffer): %d\n",uVar2 & 0xffffffff);
 uVar2 = global_struct_access();
 printf("STM-L2-05 (global_struct_access): %d\n",uVar2 & 0xffffffff);
 set_file_static(0x32);
 uVar2 = get_file_static();
 printf("STM-L2-06 (file_static): %d\n",uVar2 & 0xffffffff);
 set_global_callback((void (*)(int))double_value);
 uVar2 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n",uVar2 & 0xffffffff);
 local_c = 100;
 uVar2 = global_heap_store(&local_c);
 iVar1 = printf("STM-L2-08 (global_heap_store): %d\n",uVar2 & 0xffffffff);
 uVar2 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n",uVar2 & 0xffffffff);
 uVar2 = tls_access(10);
 iVar1 = printf("STM-L3-01 (tls_access): %d\n",uVar2 & 0xffffffff);
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: memop_memset @ 00102398 */

static ulong memop_memset(byte *param_1,size_t param_2,int param_3)

{
 ulong uVar1;
 
 if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(param_1,param_3,param_2);
 uVar1 = (ulong)*param_1;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 001023ec */

static undefined4 memop_memcpy(void *param_1,void *param_2,ulong param_3)

{
 undefined4 uVar1;
 
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(undefined4 *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return uVar1;
}



/* Function: memop_memmove @ 0010245c */

static ulong memop_memmove(void *param_1,ulong param_2)

{
 ulong uVar1;
 
 if ((param_1 == (void *)0x0) || (param_2 < 2)) {
 uVar1 = 0xffffffff;
 }
 else {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 uVar1 = (ulong)*(byte *)((long)param_1 + 1);
 }
 return uVar1;
}



/* Function: memop_memcmp @ 001024c0 */

static undefined8 memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 undefined8 uVar2;
 
 if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
 uVar2 = 0;
 }
 else {
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0;
 }
 }
 else {
 uVar2 = 1;
 }
 }
 return uVar2;
}



/* Function: memop_bzero @ 00102548 */

static ulong memop_bzero(byte *param_1,size_t param_2)

{
 ulong uVar1;
 
 if (param_1 == (byte *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(param_1,0,param_2);
 uVar1 = (ulong)*param_1;
 }
 return uVar1;
}



/* Function: memop_bcopy @ 00102598 */

static ulong memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
 ulong uVar1;
 
 if (((param_1 == (void *)0x0) || (param_2 == (byte *)0x0)) || (param_3 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memmove(param_2,param_1,param_3);
 uVar1 = (ulong)*param_2;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 001025f8 */
/* WARNING: Removing unreachable block (ram,0x00102660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static undefined4 memop_unaligned_access(long param_1)

{
 undefined4 uVar1;
 
 if (param_1 == 0) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(undefined4 *)(param_1 + 1);
 }
 return uVar1;
}



/* Function: memop_memory_barrier @ 00102668 */

static undefined4 memop_memory_barrier(void *param_1)

{
 undefined4 uVar1;
 
 if (param_1 == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 __asm__ __volatile__("dmb ish" ::: "memory");
 uVar1 = *(undefined4 *)param_1;
 }
 return uVar1;
}



/* Function: init_depends_on @ 001026a0 */

static undefined4 init_depends_on(int *param_1)

{
 undefined4 uVar1;
 
 if (param_1 == (int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 *param_1 = static_depends_0 + 10;
 static_depends_0 = *param_1;
 uVar1 = *param_1;
 }
 return uVar1;
}











/* Function: main @ 00102898 */

int main(int argc, char *argv[])
{
 (void)argc;
 (void)argv;
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 return 0;
}








/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 67 */
