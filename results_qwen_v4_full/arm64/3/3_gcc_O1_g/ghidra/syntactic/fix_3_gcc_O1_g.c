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
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int __pid_t;
typedef int (*_func_int_int)(int);
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned long ulong;
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef void (*code)(void);
typedef undefined8 undefined;

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* Global variable declarations */
static int global_counter;
static int global_array[10];
static int counter_1;
static int extern_global_var;
static char const_string[256];
static int file_scope_static;
static _func_int_int global_func_ptr;
static int static_depends_0;
static unsigned long ___stack_chk_guard;
static char completed_0;
static void *__dso_handle;
static char DAT_00101e38[256];
static char DAT_00101fa8[256];
static char DAT_00102118[256];
static char DAT_00102128[256];
static char DAT_00102150[256];
static char DAT_00102198[256];
static char DAT_001021a8[256];
static char DAT_00102458[256];

/* Function declarations */
int __printf_chk(int, const char *, ...);
int __cxa_finalize(void *);
int extern_function(int);
void __stack_chk_fail(void);
int main(void);

/* CRT stub function definitions */
static void deregister_tm_clones(void) { }
static void DataMemoryBarrier(int a, int b) { }

/* Struct definitions for decompiled code */
typedef struct Node {
    int data;
    int padding1;
    struct Node *next;
    int padding2;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/3/3_gcc_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001009b0 @ 001009b0 */

static void FUN_001009b0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100bbc @ 00100bbc */

static void FUN_00100bbc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 00100c14 */

static int double_value(int x)

{
 return x << 1;
}



/* Function: local_vars @ 00100c1c */

static int local_vars(int x)

{
 /* Unresolved local var: int a@[DW_OP_reg0(x0)]
 Unresolved local var: int b@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value]
 Unresolved local var: int c@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_plus_uconst: 10; DW_OP_stack_value] */
 return x * 2 + 10;
}



/* Function: local_array @ 00100c28 */

/* WARNING: Removing unreachable block (ram,0x00100c88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static int local_array(int n)

{
 int iVar1;
 int *piVar2;
 int arr [10];
 int local_8 [2];
 int *piVar3;
 
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 piVar2 = arr;
 do {
 piVar3 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + n;
 piVar2 = piVar3;
 } while (piVar3 != local_8);
 return arr[5];
}



/* Function: local_struct @ 00100c8c */

static int local_struct(int x)

{
 /* Unresolved local var: Point p@[DW_OP_reg0(x0); DW_OP_piece: 4;
 DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4]
 */
 return x * 3;
}



/* Function: address_of_local @ 00100c94 */

static int address_of_local(int *out)

{
 /* Unresolved local var: int local@[???] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00100ca4 */

static int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[DW_OP_reg0(x0)]
 Unresolved local var: int * p2@[DW_OP_reg0(x0)] */
 return *arr << 1;
}



/* Function: large_stack_frame @ 00100cb0 */

/* WARNING: Removing unreachable block (ram,0x00100d14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int large_stack_frame(void)

{
 int iVar1;
 char *pcVar2;
 char large_buf [2048];
 
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 pcVar2 = large_buf;
 do {
 *pcVar2 = (char)iVar1;
 iVar1 = iVar1 + 1;
 pcVar2 = pcVar2 + 1;
 } while (iVar1 != 0x800);
 return (int)(byte)large_buf[0x400];
}



/* Function: vla_stack @ 00100d18 */

/* WARNING: Removing unreachable block (ram,0x00100ddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static int vla_stack(int n)

{
 long lVar1;
 uint8_t *puVar2;
 int iVar3;
 long lVar4;
 unsigned long uVar5;
 uint8_t auStack_30 [16];
 
 /* Unresolved local var: int[11479] vla@[???]
 Unresolved local var: ulong anon_var_0@[???] */
 puVar2 = auStack_30;
 if (n - 1U < 1000) {
 uVar5 = (-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2) + 0xf;
 for (; puVar2 != auStack_30 + -(uVar5 & 0xffffffffffff0000); puVar2 = puVar2 + -0x10000) {
 *(undefined8 *)(puVar2 + -0xfc00) = 0;
 }
 uVar5 = uVar5 & 0xfff0;
 lVar1 = -uVar5;
 *(undefined8 *)(puVar2 + lVar1) = 0;
 if (0x3ff < uVar5) {
 *(undefined8 *)(puVar2 + lVar1 + 0x400) = 0;
 }
 /* Unresolved local var: int i@[???] */
 lVar4 = 0;
 do {
 *(int *)(puVar2 + lVar4 * 4 + lVar1 + 0x10) = (int)lVar4 << 1;
 lVar4 = lVar4 + 1;
 } while ((int)lVar4 < n);
 iVar3 = *(int *)(puVar2 + (long)(n / 2) * 4 + lVar1 + 0x10);
 }
 else {
 iVar3 = -1;
 }
 return iVar3;
}



/* Function: alloca_usage @ 00100de0 */

/* WARNING: Removing unreachable block (ram,0x00100ea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static int alloca_usage(int n)

{
 long lVar1;
 uint8_t *puVar2;
 int iVar3;
 unsigned long uVar4;
 int *piVar5;
 uint8_t auStack_30 [16];
 
 /* Unresolved local var: int * arr@[???] */
 puVar2 = auStack_30;
 if (n < 1) {
 iVar3 = -1;
 }
 else {
 uVar4 = (-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2) + 0xf;
 for (; puVar2 != auStack_30 + -(uVar4 & 0xffffffffffff0000); puVar2 = puVar2 + -0x10000) {
 *(undefined8 *)(puVar2 + -0xfc00) = 0;
 }
 uVar4 = uVar4 & 0xfff0;
 lVar1 = -uVar4;
 *(undefined8 *)(puVar2 + lVar1) = 0;
 if (0x3ff < uVar4) {
 *(undefined8 *)(puVar2 + lVar1 + 0x400) = 0;
 }
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 piVar5 = (int *)(puVar2 + lVar1 + 0x10);
 do {
 *piVar5 = iVar3;
 iVar3 = iVar3 + 3;
 piVar5 = piVar5 + 1;
 } while (iVar3 != n * 3);
 iVar3 = *(int *)((long)(puVar2 + lVar1 + 0x10) + (long)(n / 2) * 4);
 }
 return iVar3;
}



/* Function: stack_alias @ 00100ea8 */

static int stack_alias(int *p1,int *p2)

{
 /* Unresolved local var: int local@[???] */
 return 0x14;
}



/* Function: test_stack_memory @ 00100eb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static void test_stack_memory(void)

{
 int iVar1;
 
 /* Unresolved local var: int out@[???]
 Unresolved local var: int[10] arr5@[???]
 Unresolved local var: int alias_val@[???] */
 puts((const char *)&DAT_00101e38);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 iVar1 = local_array(2);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",iVar1);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 iVar1 = large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",iVar1);
 iVar1 = vla_stack(10);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",iVar1);
 iVar1 = alloca_usage(10);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",iVar1);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 00100f9c */

static int heap_basic(int n)

{
 void *__ptr;
 long lVar1;
 int iVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 lVar1 = 0;
 do {
 *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 << 1;
 lVar1 = lVar1 + 1;
 } while ((int)lVar1 < n);
 }
 iVar2 = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_calloc @ 00101000 */

static int heap_calloc(int n)

{
 void *__ptr;
 long lVar1;
 int iVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = calloc((long)n,4);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar2 = 0;
 }
 else {
 lVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(int *)((long)__ptr + lVar1 * 4);
 lVar1 = lVar1 + 1;
 } while ((int)lVar1 < n);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 00101068 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int heap_realloc(void)

{
 int *__ptr;
 void *__ptr_00;
 int iVar1;
 
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int old_val@[???]
 Unresolved local var: int * new_p@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(0x14);
 if (__ptr == (undefined4 *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *__ptr = 1;
 __ptr[1] = 2;
 __ptr[2] = 3;
 __ptr[3] = 4;
 __ptr[4] = 5;
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 iVar1 = -2;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *(undefined4 *)((long)__ptr_00 + 0x14) = 0x32;
 *(undefined4 *)((long)__ptr_00 + 0x18) = 0x3c;
 *(undefined4 *)((long)__ptr_00 + 0x1c) = 0x46;
 *(undefined4 *)((long)__ptr_00 + 0x20) = 0x50;
 *(undefined4 *)((long)__ptr_00 + 0x24) = 0x5a;
 iVar1 = -3;
 if (*(int *)((long)__ptr_00 + 8) == 3) {
 iVar1 = *(int *)((long)__ptr_00 + 0x14);
 }
 free(__ptr_00);
 }
 }
 return iVar1;
}



/* Function: heap_array @ 00101128 */

static int heap_array(int n)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 piVar2 = piVar2 + 1;
 } while (iVar1 != n * 3);
 }
 iVar1 = __ptr[n / 2];
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_struct @ 00101190 */

static int heap_struct(int x)

{
 void *__ptr;
 int iVar1;
 
 /* Unresolved local var: Point * p@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(8);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = x * 3;
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_nested @ 001011cc */

static int heap_nested(Node **head)

{
 int iVar1;
 Node *__ptr;
 Node *pNVar2;
 
 __ptr = malloc(0x10);
 *head = __ptr;
 if (__ptr == (Node *)0x0) {
 iVar1 = -1;
 }
 else {
 __ptr->data = 10;
 pNVar2 = malloc(0x10);
 __ptr->next = pNVar2;
 if (pNVar2 == (Node *)0x0) {
 free(__ptr);
 iVar1 = -2;
 }
 else {
 pNVar2->data = 0x14;
 pNVar2->next = (Node *)0x0;
 iVar1 = 0;
 }
 }
 return iVar1;
}



/* Function: linked_list_heap @ 0010123c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int *__ptr;
 int *__ptr_00;
 int iVar3;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: Node * temp@[???] */
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 piVar2 = (int *)0x0;
 __ptr = (int *)0x0;
 /* Unresolved local var: Node * new_node@[???] */
 do {
 piVar1 = malloc(0x10);
 if (piVar1 == (int *)0x0) {
 if (__ptr != (int *)0x0) {
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar2 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar2;
 } while (piVar2 != (int *)0x0);
 return -1;
 }
 return -1;
 }
 *piVar1 = iVar3;
 piVar1[2] = 0;
 piVar1[3] = 0;
 __ptr_00 = piVar1;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar2 + 2) = piVar1;
 __ptr_00 = __ptr;
 }
 iVar3 = iVar3 + 10;
 piVar2 = piVar1;
 __ptr = __ptr_00;
 } while (iVar3 != 0x32);
 if (__ptr_00 == (int *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 piVar2 = __ptr_00;
 do {
 iVar3 = iVar3 + *piVar2;
 piVar2 = *(int **)(piVar2 + 2);
 } while (piVar2 != (int *)0x0);
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar2 = *(int **)(__ptr_00 + 2);
 free(__ptr_00);
 __ptr_00 = piVar2;
 } while (piVar2 != (int *)0x0);
 }
 return iVar3;
}



/* Function: create_tree_node @ 00101300 */

static TreeNode * create_tree_node(int data)

{
 TreeNode *pTVar1;
 
 /* Unresolved local var: TreeNode * node@[???] */
 pTVar1 = malloc(0x18);
 if (pTVar1 != (TreeNode *)0x0) {
 pTVar1->data = data;
 pTVar1->left = (TreeNode *)0x0;
 pTVar1->right = (TreeNode *)0x0;
 }
 return pTVar1;
}



/* Function: tree_heap_traversal @ 00101334 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int tree_heap_traversal(void)

{
 TreeNode *__ptr;
 TreeNode *pTVar1;
 TreeNode *__ptr_00;
 int iVar2;
 
 /* Unresolved local var: TreeNode * root@[???]
 Unresolved local var: int sum@[???] */
 __ptr = create_tree_node(10);
 if (__ptr == (TreeNode *)0x0) {
 iVar2 = -1;
 }
 else {
 pTVar1 = create_tree_node(0x14);
 __ptr->left = pTVar1;
 pTVar1 = create_tree_node(0x1e);
 __ptr->right = pTVar1;
 __ptr_00 = __ptr->left;
 if (pTVar1 == (TreeNode *)0x0 || __ptr_00 == (TreeNode *)0x0) {
 if (__ptr_00 != (TreeNode *)0x0) {
 free(__ptr_00);
 }
 if (__ptr->right != (TreeNode *)0x0) {
 free(__ptr->right);
 }
 free(__ptr);
 iVar2 = -2;
 }
 else {
 iVar2 = __ptr->data + __ptr_00->data + pTVar1->data;
 free(__ptr_00);
 free(__ptr->right);
 free(__ptr);
 }
 }
 return iVar2;
}



/* Function: memory_leak @ 001013e0 */

static int memory_leak(int n)

{
 int iVar1;
 void *pvVar2;
 long lVar3;
 
 /* Unresolved local var: int * leak@[???] */
 pvVar2 = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
 if (pvVar2 == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 lVar3 = 0;
 do {
 *(int *)((long)pvVar2 + lVar3 * 4) = (int)lVar3;
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < n);
 }
 iVar1 = *(int *)((long)pvVar2 + (long)(n / 2) * 4);
 }
 return iVar1;
}



/* Function: dangling_pointer @ 00101438 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int dangling_pointer(void)

{
 int iVar1;
 int *__ptr;
 
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int value@[???]
 Unresolved local var: int dangerous@[???] */
 __ptr = malloc(4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(__ptr);
 iVar1 = *__ptr;
 }
 return iVar1;
}



/* Function: double_free @ 00101488 */

static int double_free(int *p)

{
 int iVar1;
 void *__ptr;
 
 if (p != (int *)0x0) {
 return *p;
 }
 /* Unresolved local var: int * temp@[???] */
 __ptr = malloc(4);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 free(__ptr);
 free(__ptr);
 iVar1 = -2;
 }
 return iVar1;
}



/* Function: heap_overflow @ 001014d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int heap_overflow(void)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 /* Unresolved local var: int i@[???] */
 *piVar2 = iVar1;
 iVar1 = iVar1 + 100;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x44c);
 iVar1 = *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: test_heap_memory @ 00101524 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static void test_heap_memory(void)

{
 int iVar1;
 __pid_t __pid;
 int status;
 Node *head;
 long local_8;
 
 /* Unresolved local var: pid_t pid@[???] */
 local_8 = ___stack_chk_guard;
 puts((const char *)&DAT_00101fa8);
 iVar1 = heap_basic(10);
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",iVar1);
 iVar1 = heap_calloc(5);
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar1);
 iVar1 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",iVar1);
 iVar1 = heap_array(10);
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",iVar1);
 iVar1 = heap_struct(5);
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",iVar1);
 head = (Node *)0x0;
 iVar1 = heap_nested(&head);
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",iVar1);
 if (head != (Node *)0x0) {
 free(head->next);
 free(head);
 }
 iVar1 = linked_list_heap();
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar1);
 iVar1 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",iVar1);
 iVar1 = memory_leak(5);
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",iVar1);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 /* Unresolved local var: int result@[???] */
 iVar1 = dangling_pointer();
 __printf_chk(1,(const char *)&DAT_00102118,iVar1);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 perror((const char *)&DAT_00102198);
 }
 else {
 waitpid(__pid,&status,0);
 if ((status & 0x7fU) == 0) {
 __printf_chk(1,(const char *)&DAT_00102128,(uint)status >> 8 & 0xff);
 }
 else if (0 < (int)((long)((ulong)((status & 0x7fU) + 1) << 0x38) >> 0x39)) {
 __printf_chk(1,(const char *)&DAT_00102150,status & 0x7f);
 }
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: global_var_access @ 00101724 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00101738 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00101748 */

static int global_array_access(int idx)

{
 int iVar1;
 
 if ((uint)idx < 10) {
 iVar1 = global_array[idx];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: static_local @ 00101768 */

static int static_local(int reset)

{
 if (reset == 0) {
 counter_1 = counter_1 + 1;
 }
 else {
 counter_1 = 0;
 }
 return counter_1;
}



/* Function: call_static_func @ 0010178c */

static int call_static_func(int x)

{
 return x * 2 + 1;
}



/* Function: access_extern_global @ 00101798 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 001017ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 001017c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 001017d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 001017e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 001017e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 001017f0 */

static void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 001017fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00101808 */

static void set_global_callback(_func_int_int f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00101814 */

static int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr != (_func_int_int)0x0) {
 iVar1 = global_func_ptr(x);
 return iVar1;
 }
 return -1;
}



/* Function: global_heap_store @ 0010183c */

static int global_heap_store(int *p)

{
 int iVar1;
 
 if (p == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = *p;
 }
 return iVar1;
}



/* Function: static_complex_init @ 00101850 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00101858 */

static int tls_access(int val)

{
 return val << 1;
}



/* Function: init_order_test @ 00101860 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int init_order_test(void)

{
 /* Unresolved local var: int external_val@[???] */
 static_depends_0 = 0x14;
 return 0x14;
}



/* Function: test_static_global @ 00101870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static void test_static_global(void)

{
 int iVar1;
 
 /* Unresolved local var: int heap_val@[???] */
 puts((const char *)&DAT_001021a8);
 iVar1 = global_var_access();
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",iVar1);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 iVar1 = call_extern_func();
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",iVar1);
 iVar1 = read_const_data();
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",iVar1);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 iVar1 = global_struct_access();
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",iVar1);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n",file_scope_static);
 global_func_ptr = (_func_int_int)double_value;
 iVar1 = call_global_callback(5);
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",iVar1);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 iVar1 = static_complex_init();
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",iVar1);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 iVar1 = init_order_test();
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",iVar1);
 return;
}



/* Function: memop_memset @ 00101a60 */

static int memop_memset(void *buf,size_t size,int fill_value)

{
 uint uVar1;
 
 if (buf == (void *)0x0 || size == 0) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(buf,fill_value,size);
 uVar1 = (uint)*(byte *)buf;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 00101aa8 */

static int memop_memcpy(void *dst,void *src,size_t n)

{
 if ((src != (void *)0x0 && n != 0) && dst != (void *)0x0) {
 memcpy(dst,src,n);
 return *(int *)((long)dst + ((n & 0xfffffffffffffffc) - 4));
 }
 return -1;
}



/* Function: memop_memmove @ 00101af0 */

static int memop_memmove(void *buf,size_t n)

{
 if (buf != (void *)0x0 && 1 < n) {
 memmove((void *)((long)buf + 1),buf,n - 1);
 return (int)*(byte *)((long)buf + 1);
 }
 return -1;
}



/* Function: memop_memcmp @ 00101b34 */

static int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???] */
 if ((p2 == (void *)0x0 || n == 0) || p1 == (void *)0x0) {
 return 0;
 }
 iVar2 = memcmp(p1,p2,n);
 iVar1 = iVar2 >> 0x1f;
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: memop_bzero @ 00101b6c */

static int memop_bzero(void *buf,size_t n)

{
 if (buf != (void *)0x0) {
 memset(buf,0,n);
 return (int)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_bcopy @ 00101ba4 */

static int memop_bcopy(void *src,void *dst,size_t n)

{
 if ((dst != (void *)0x0 && n != 0) && src != (void *)0x0) {
 memmove(dst,src,n);
 return (int)*(byte *)dst;
 }
 return -1;
}



/* Function: memop_unaligned_access @ 00101be8 */

static int memop_unaligned_access(char *buf)

{
 int iVar1;
 
 /* Unresolved local var: int value@[???] */
 if (buf == (char *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = *(int *)(buf + 1);
 }
 return iVar1;
}



/* Function: memop_memory_barrier @ 00101bfc */

static int memop_memory_barrier(int *flag)

{
 int iVar1;
 
 /* Unresolved local var: int local@[???] */
 if (flag == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 DataMemoryBarrier(2,3);
 iVar1 = *flag + *flag;
 }
 return iVar1;
}



/* Function: test_memory_op_functions @ 00101c1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static void test_memory_op_functions(void)

{
 long lVar1;
 int iVar2;
 int flag;
 int cmp_a [3];
 int cmp_b [3];
 int int_src [5];
 int int_dst [5];
 char bcopy_src [4];
 char bcopy_dst [4];
 char zero_buf [10];
 char move_buf [11];
 char buffer [256];
 
 /* Unresolved local var: char[8] unalign_buf@[???] */
 lVar1 = ___stack_chk_guard;
 puts((const char *)&DAT_00102458);
 int_src[0] = 10;
 int_src[1] = 0x14;
 int_src[2] = 0x1e;
 int_src[3] = 0x28;
 int_src[4] = 0x32;
 int_dst[0] = 0;
 int_dst[1] = 0;
 int_dst[2] = 0;
 int_dst[3] = 0;
 int_dst[4] = 0;
 iVar2 = memop_memset(buffer,10,0x41);
 __printf_chk(1,"MEMOP-L2-01: %d\n",iVar2);
 iVar2 = memop_memcpy(int_dst,int_src,0x14);
 __printf_chk(1,"MEMOP-L2-02: %d\n",iVar2);
 strncpy(move_buf,"HelloWorld",0xb);
 iVar2 = memop_memmove(move_buf,10);
 __printf_chk(1,"MEMOP-L2-03: %c\n",iVar2);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 iVar2 = memop_memcmp(cmp_a,cmp_b,0xc);
 __printf_chk(1,"MEMOP-L2-04: %d\n",iVar2);
 iVar2 = memop_bzero(zero_buf,10);
 __printf_chk(1,"MEMOP-L2-05: %d\n",iVar2);
 strncpy(bcopy_src,"\x01\x02\x03\x04",4);
 bcopy_dst[0] = '\0';
 bcopy_dst[1] = '\0';
 bcopy_dst[2] = '\0';
 bcopy_dst[3] = '\0';
 iVar2 = memop_bcopy(bcopy_src,bcopy_dst,4);
 __printf_chk(1,"MEMOP-L2-06: %d\n",iVar2);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 flag = 5;
 iVar2 = memop_memory_barrier(&flag);
 __printf_chk(1,"MEMOP-L3-02: %d\n",iVar2);
 if (lVar1 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: main @ 00101df0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}










/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 65 */
