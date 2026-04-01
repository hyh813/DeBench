#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned int uint;
typedef unsigned long long uint64_t;
typedef unsigned long ulong;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
#define NULL ((void*)0)

/* Type definitions for decompiled code */
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t byte;
typedef uint8_t undefined1;
typedef void (*code)(void);
typedef unsigned char undefined7[7];

/* POSIX type definitions */
typedef int pid_t;

/* Function pointer type */
typedef int (*_func_int_int)(int);

/* Global variables */
int global_counter = 0;
static int file_scope_static = 0;
int (*global_func_ptr)(int) = NULL;
char completed_0 = '\0';
void *__dso_handle = NULL;
int global_array[10];
int extern_global_var = 0;
static const char const_string[] = "Hello World";
int *global_heap_ptr = NULL;

/* BSS section variables */
int bss_var;
char bss_buffer[100];

/* Point structure for global point access */
struct Point {
    int x;
    int y;
};

struct Point global_point = {0, 0};

/* Complex initialization array */
static int complex_init[] = {1, 2, 3, 4, 5, 6};

/* TLS register for ARM64 */
static long tpidr_el0;

/* Data symbols (string constants from decompilation) */
static const char DAT_00102714[] = "=== Stack Memory Tests ===\n";
static const char DAT_0010285e[] = "=== Heap Memory Tests ===\n";
static const char DAT_001029b7[] = "%d\n";
static const char DAT_001029c7[] = "Exit status: %d\n";
static const char DAT_001029ec[] = "Signal: %d\n";
static const char DAT_00102a2d[] = "fork failed";
static const char DAT_00102a43[] = "=== Static/Global Tests ===\n";
static const char DAT_00102ca6[] = "=== Memory Operations Tests ===\n";

/* Struct definitions */
struct Node {
    int data;
    struct Node *next;
};

typedef struct Node Node;

struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

typedef struct TreeNode TreeNode;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/3/3_clang_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init */
void _init(void) {
    return;
}




/* Function: FUN_00100920 @ 00100920 */

void FUN_00100920(void)

{
 return;
}




/* Forward declaration of extern_function */
int extern_function(int x);

/* Function: extern_function - External function definition */
int extern_function(int x) {
    return x * 2;
}





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones(void) {
    return;
}

/* CRT stub function __cxa_finalize - C++ runtime cleanup */
void __cxa_finalize(void *dso_handle) {
    return;
}

/* CRT stub function register_tm_clones removed by preprocessor */

void register_tm_clones(void) {
    return;
}




/* Function: FUN_00100b3c @ 00100b3c */

void FUN_00100b3c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux */
void __do_global_dtors_aux(void) {
    return;
}




/* Function: local_vars @ 00100b94 */

int local_vars(int x)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int c@[???] */
 return x * 2 + 10;
}



/* Function: local_array @ 00100bc8 */

int local_array(int n)

{
 int local_30;
 int aiStack_2c [11];
 
 /* Unresolved local var: int[10] arr@[???] */
 /* Unresolved local var: int i@[???] */
 for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
 aiStack_2c[local_30] = local_30 * n;
 }
 return aiStack_2c[5];
}



/* Function: local_struct @ 00100c20 */

int local_struct(int x)

{
 /* Unresolved local var: Point p@[???] */
 return x * 3;
}



/* Function: address_of_local @ 00100c50 */

int address_of_local(int *out)

{
 /* Unresolved local var: int local@[???] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00100c78 */

int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[???]
 Unresolved local var: int * p2@[???] */
 return *arr + *arr;
}



/* Function: large_stack_frame @ 00100cac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 int local_814;
 byte abStack_810 [2048];
 
 /* Unresolved local var: char[2048] large_buf@[???] */
 /* Unresolved local var: int i@[???] */
 for (local_814 = 0; local_814 < 0x800; local_814 = local_814 + 1) {
 abStack_810[local_814] = (byte)local_814;
 }
 return (int)abStack_810[0x400];
}



/* Function: vla_stack @ 00100d00 */

int vla_stack(int n)

{
 long lVar1;
 int aiStack_40 [5];
 int local_2c;
 int local_14;
 
 /* Unresolved local var: unsigned long __vla_expr0@[???]
 Unresolved local var: int[812] vla@[???] */
 if ((n < 1) || (1000 < n)) {
 local_14 = -1;
 }
 else {
 lVar1 = -0x40 - ((ulong)(uint)n * 4 + 0xf & 0xfffffffffffffff0);
 /* Unresolved local var: int i@[???] */
 for (local_2c = 0; local_2c < n; local_2c = local_2c + 1) {
 *(int *)((long)aiStack_40 + (long)local_2c * 4 + lVar1 + 0x40) = local_2c << 1;
 }
 local_14 = *(int *)((long)aiStack_40 + (long)(n / 2) * 4 + lVar1 + 0x40);
 }
 return local_14;
}



/* Function: alloca_usage @ 00100de0 */

int alloca_usage(int n)

{
 long lVar1;
 int aiStack_30 [7];
 int local_14;
 
 /* Unresolved local var: int * arr@[???] */
 if (n < 1) {
 local_14 = -1;
 }
 else {
 lVar1 = -0x30 - ((long)n * 4 + 0xfU & 0xfffffffffffffff0);
 /* Unresolved local var: int i@[???] */
 for (aiStack_30[3] = 0; aiStack_30[3] < n; aiStack_30[3] = aiStack_30[3] + 1) {
 *(int *)((long)aiStack_30 + (long)aiStack_30[3] * 4 + lVar1 + 0x30) = aiStack_30[3] * 3;
 }
 local_14 = *(int *)((long)aiStack_30 + (long)(n / 2) * 4 + lVar1 + 0x30);
 }
 return local_14;
}



/* Function: stack_alias @ 00100ea4 */

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffe4 : 0x00100ef8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int stack_alias(int *p1,int *p2)

{
 undefined4 local_1c;
 undefined4 local_4;
 
 /* Unresolved local var: int local@[???] */
 /* stack0x00000000 is a Ghidra stack reference - always take else branch */
 local_4 = local_1c;
 return local_4;
}



/* Function: test_stack_memory @ 00100f1c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 uint32_t uVar1;
 int local_40 [11];
 int iStack_14;
 
 /* Unresolved local var: int out@[???]
 Unresolved local var: int[10] arr5@[DW_OP_breg31(sp): +36]
 Unresolved local var: int alias_val@[DW_OP_breg31(sp): +32] */
 printf(DAT_00102714);
 uVar1 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",(ulong)uVar1);
 uVar1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n",(ulong)uVar1);
 uVar1 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",(ulong)uVar1);
 uVar1 = address_of_local(&iStack_14);
 printf("MEM-L1-04 (address_of_local): %d\n",(ulong)uVar1);
 memset(local_40 + 1,0,0x28);
 local_40[1] = 1;
 local_40[2] = 2;
 local_40[3] = 3;
 uVar1 = address_of_array(local_40 + 1);
 printf("MEM-L1-05 (address_of_array): %d\n",(ulong)uVar1);
 uVar1 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)uVar1);
 uVar1 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",(ulong)uVar1);
 uVar1 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",(ulong)uVar1);
 local_40[0] = 0;
 uVar1 = stack_alias(local_40,local_40);
 printf("MEM-L2-04 (stack_alias): %d\n",(ulong)uVar1);
 return;
}



/* Function: heap_basic @ 00101054 */

int heap_basic(int n)

{
 void *__ptr;
 undefined4 local_24;
 undefined4 local_14;
 
 /* Unresolved local var: int * arr@[DW_OP_breg31(sp): +16]
 Unresolved local var: int result@[DW_OP_breg31(sp): +8] */
 __ptr = malloc((long)n << 2);
 if (__ptr == (void *)0x0) {
 local_14 = -1;
 }
 else {
 /* Unresolved local var: int i@[DW_OP_breg31(sp): +12] */
 for (local_24 = 0; local_24 < n; local_24 = local_24 + 1) {
 *(int *)((long)__ptr + (long)local_24 * 4) = local_24 << 1;
 }
 local_14 = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 }
 return local_14;
}



/* Function: heap_calloc @ 0010110c */

int heap_calloc(int n)

{
 void *__ptr;
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_14;
 
 /* Unresolved local var: int * arr@[DW_OP_breg31(sp): +16]
 Unresolved local var: int sum@[DW_OP_breg31(sp): +12] */
 __ptr = calloc((long)n,4);
 if (__ptr == (void *)0x0) {
 local_14 = -1;
 }
 else {
 local_24 = 0;
 /* Unresolved local var: int i@[DW_OP_breg31(sp): +8] */
 for (local_28 = 0; local_28 < n; local_28 = local_28 + 1) {
 local_24 = local_24 + *(int *)((long)__ptr + (long)local_28 * 4);
 }
 free(__ptr);
 local_14 = local_24;
 }
 return local_14;
}



/* Function: heap_realloc @ 001011b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 int iVar1;
 void *__ptr;
 void *__ptr_00;
 undefined4 local_3c;
 undefined4 local_34;
 undefined4 local_24;
 undefined4 local_14;
 
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int old_val@[DW_OP_breg31(sp): +24]
 Unresolved local var: int * new_p@[DW_OP_breg31(sp): +16]
 Unresolved local var: int result@[DW_OP_breg31(sp): +8] */
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 local_14 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
 *(int *)((long)__ptr + (long)local_24 * 4) = local_24 + 1;
 }
 iVar1 = *(int *)((long)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 local_14 = -2;
 }
 else {
 /* Unresolved local var: int i@[DW_OP_breg31(sp): +12] */
 for (local_34 = 5; local_34 < 10; local_34 = local_34 + 1) {
 *(int *)((long)__ptr_00 + (long)local_34 * 4) = local_34 * 10;
 }
 if (*(int *)((long)__ptr_00 + 8) == iVar1) {
 local_3c = *(int *)((long)__ptr_00 + 0x14);
 }
 else {
 local_3c = -3;
 }
 free(__ptr_00);
 local_14 = local_3c;
 }
 }
 return local_14;
}



/* Function: heap_array @ 00101310 */

int heap_array(int n)

{
 void *__ptr;
 undefined4 local_24;
 undefined4 local_14;
 
 /* Unresolved local var: int * arr@[DW_OP_breg31(sp): +16]
 Unresolved local var: int result@[DW_OP_breg31(sp): +8] */
 __ptr = malloc((long)n << 2);
 if (__ptr == (void *)0x0) {
 local_14 = -1;
 }
 else {
 /* Unresolved local var: int i@[DW_OP_breg31(sp): +12] */
 for (local_24 = 0; local_24 < n; local_24 = local_24 + 1) {
 *(int *)((long)__ptr + (long)local_24 * 4) = local_24 * 3;
 }
 local_14 = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 }
 return local_14;
}



/* Function: heap_struct @ 001013cc */

int heap_struct(int x)

{
 int *__ptr;
 int local_14;
 
 /* Unresolved local var: Point * p@[DW_OP_breg31(sp): +16]
 Unresolved local var: int result@[DW_OP_breg31(sp): +12] */
 __ptr = malloc(8);
 if (__ptr == (int *)0x0) {
 local_14 = -1;
 }
 else {
 *__ptr = x;
 __ptr[1] = x << 1;
 local_14 = *__ptr + __ptr[1];
 free(__ptr);
 }
 return local_14;
}



/* Function: heap_nested @ 00101458 */

int heap_nested(Node **head)

{
 Node *pNVar1;
 int local_14;
 
 pNVar1 = malloc(0x10);
 *head = pNVar1;
 if (*head == (Node *)0x0) {
 local_14 = -1;
 }
 else {
 (*head)->data = 10;
 pNVar1 = malloc(0x10);
 (*head)->next = pNVar1;
 if ((*head)->next == (Node *)0x0) {
 free(*head);
 local_14 = -2;
 }
 else {
 (*head)->next->data = 0x14;
 (*head)->next->next = (Node *)0x0;
 local_14 = 0;
 }
 }
 return local_14;
}



/* Function: linked_list_heap @ 00101520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int *local_50;
 int local_44;
 int local_2c;
 int *local_28;
 int *local_20;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: int sum@[DW_OP_breg31(sp): +28]
 Unresolved local var: Node * temp@[DW_OP_breg31(sp): +16] */
 local_20 = (int *)0x0;
 local_28 = (int *)0x0;
 /* Unresolved local var: int i@[???] */
 local_2c = 0;
 while( true ) {
 if (4 < local_2c) {
 local_44 = 0;
 for (local_50 = local_20; local_50 != (int *)0x0; local_50 = *(int **)(local_50 + 2)) {
 local_44 = local_44 + *local_50;
 }
 while (local_20 != (int *)0x0) {
 /* Unresolved local var: Node * temp@[DW_OP_breg31(sp): +8] */
 piVar2 = *(int **)(local_20 + 2);
 free(local_20);
 local_20 = piVar2;
 }
 return local_44;
 }
 /* Unresolved local var: Node * new_node@[DW_OP_breg31(sp): +40] */
 piVar2 = malloc(0x10);
 if (piVar2 == (int *)0x0) break;
 *piVar2 = local_2c * 10;
 piVar2[2] = 0;
 piVar2[3] = 0;
 piVar1 = piVar2;
 if (local_20 != (int *)0x0) {
 *(int **)(local_28 + 2) = piVar2;
 piVar1 = local_20;
 }
 local_20 = piVar1;
 local_2c = local_2c + 1;
 local_28 = piVar2;
 }
 while (local_20 != (int *)0x0) {
 /* Unresolved local var: Node * temp@[DW_OP_breg31(sp): +32] */
 piVar2 = *(int **)(local_20 + 2);
 free(local_20);
 local_20 = piVar2;
 }
 return -1;
}



/* Function: create_tree_node @ 00101694 */

TreeNode * create_tree_node(int data)

{
 TreeNode *pTVar1;
 
 /* Unresolved local var: TreeNode * node@[DW_OP_breg31(sp): 0] */
 pTVar1 = malloc(0x18);
 if (pTVar1 != (TreeNode *)0x0) {
 pTVar1->data = data;
 pTVar1->left = (TreeNode *)0x0;
 pTVar1->right = (TreeNode *)0x0;
 }
 return pTVar1;
}



/* Function: tree_heap_traversal @ 001016ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 TreeNode *__ptr;
 TreeNode *pTVar1;
 int local_14;
 
 /* Unresolved local var: TreeNode * root@[DW_OP_breg31(sp): +16]
 Unresolved local var: int sum@[DW_OP_breg31(sp): +12] */
 __ptr = create_tree_node(10);
 if (__ptr == (TreeNode *)0x0) {
 local_14 = -1;
 }
 else {
 pTVar1 = create_tree_node(0x14);
 __ptr->left = pTVar1;
 pTVar1 = create_tree_node(0x1e);
 __ptr->right = pTVar1;
 if ((__ptr->left == (TreeNode *)0x0) || (__ptr->right == (TreeNode *)0x0)) {
 if (__ptr->left != (TreeNode *)0x0) {
 free(__ptr->left);
 }
 if (__ptr->right != (TreeNode *)0x0) {
 free(__ptr->right);
 }
 free(__ptr);
 local_14 = -2;
 }
 else {
 local_14 = __ptr->data + __ptr->left->data + __ptr->right->data;
 free(__ptr->left);
 free(__ptr->right);
 free(__ptr);
 }
 }
 return local_14;
}



/* Function: memory_leak @ 00101818 */

int memory_leak(int n)

{
 void *pvVar1;
 undefined4 local_24;
 undefined4 local_14;
 
 /* Unresolved local var: int * leak@[DW_OP_breg31(sp): +16] */
 pvVar1 = malloc((long)n << 2);
 if (pvVar1 == (void *)0x0) {
 local_14 = -1;
 }
 else {
 /* Unresolved local var: int i@[DW_OP_breg31(sp): +12] */
 for (local_24 = 0; local_24 < n; local_24 = local_24 + 1) {
 *(int *)((long)pvVar1 + (long)local_24 * 4) = local_24;
 }
 local_14 = *(int *)((long)pvVar1 + (long)(n / 2) * 4);
 }
 return local_14;
}



/* Function: dangling_pointer @ 001018bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 uint32_t *__ptr;
 uint32_t local_14;
 
 /* Unresolved local var: int * p@[DW_OP_breg31(sp): +16]
 Unresolved local var: int value@[DW_OP_breg31(sp): +12]
 Unresolved local var: int dangerous@[DW_OP_breg31(sp): +8] */
 __ptr = malloc(4);
 if (__ptr == (uint32_t *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 *__ptr = 0x2a;
 printf("value before free: %d\n",(ulong)*__ptr);
 free(__ptr);
 local_14 = *__ptr;
 }
 return local_14;
}



/* Function: double_free @ 00101944 */

int double_free(int *p)

{
 undefined4 *__ptr;
 undefined4 local_14;
 
 if (p == (int *)0x0) {
 /* Unresolved local var: int * temp@[DW_OP_breg31(sp): +8] */
 __ptr = malloc(4);
 if (__ptr == (undefined4 *)0x0) {
 local_14 = -1;
 }
 else {
 *__ptr = 10;
 free(__ptr);
 free(__ptr);
 local_14 = -2;
 }
 }
 else {
 local_14 = *p;
 }
 return local_14;
}



/* Function: heap_overflow @ 001019cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 int *__ptr;
 int local_24;
 int local_14;
 
 /* Unresolved local var: int * arr@[DW_OP_breg31(sp): +16]
 Unresolved local var: int result@[DW_OP_breg31(sp): +8] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 local_14 = -1;
 }
 else {
 /* Unresolved local var: int i@[DW_OP_breg31(sp): +12] */
 for (local_24 = 0; local_24 < 0xb; local_24 = local_24 + 1) {
 __ptr[local_24] = local_24 * 100;
 }
 local_14 = *__ptr;
 free(__ptr);
 }
 return local_14;
}



/* Function: test_heap_memory @ 00101a70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 uint32_t uVar1;
 uint32_t local_24;
 uint32_t local_20;
 pid_t local_1c;
 Node *local_18;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: pid_t pid@[???] */
 printf((const char *)&DAT_0010285e);
 uVar1 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",(ulong)uVar1);
 uVar1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n",(ulong)uVar1);
 uVar1 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n",(ulong)uVar1);
 uVar1 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n",(ulong)uVar1);
 uVar1 = heap_struct(5);
 printf("HEAP-L2-05 (heap_struct): %d\n",(ulong)uVar1);
 local_18 = (Node *)0x0;
 uVar1 = heap_nested(&local_18);
 printf("HEAP-L2-06 (heap_nested): %d\n",(ulong)uVar1);
 if (local_18 != (Node *)0x0) {
 free(local_18->next);
 free(local_18);
 }
 uVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar1);
 uVar1 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",(ulong)uVar1);
 uVar1 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n",(ulong)uVar1);
 printf("HEAP-L3-04 (dangling_pointer): ");
 local_1c = fork();
 if (local_1c != 0) {
 if (local_1c < 1) {
 perror(DAT_00102a2d);
 }
 else {
 int status;
 waitpid(local_1c,&status,0);
 if ((local_24 & 0x7f) == 0) {
 printf((const char *)&DAT_001029c7,(ulong)(uint)((int)(local_24 & 0xff00) >> 8));
 }
 else if ('\0' < (char)(((byte)local_24 & 0x7f) + 1) >> 1) {
 printf((const char *)&DAT_001029ec,(ulong)(local_24 & 0x7f));
 }
 }
 return;
 }
 /* Unresolved local var: int result@[DW_OP_breg31(sp): +16] */
 local_20 = dangling_pointer();
 printf((const char *)&DAT_001029b7,(ulong)local_20);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 00101c70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00101c88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00101c98 */

int global_array_access(int idx)

{
 int local_4;
 
 if ((idx < 0) || (9 < idx)) {
 local_4 = -1;
 }
 else {
 local_4 = global_array[idx];
 }
 return local_4;
}



/* Function: static_local @ 00101cec */

int static_local(int reset)

{
 static int counter = 0;
 undefined4 local_4;
 
 if (reset == 0) {
 local_4 = counter + 1;
 }
 else {
 local_4 = 0;
 }
 counter = local_4;
 return local_4;
}





/* Forward declaration of static_helper */
int static_helper(int x);

/* Function: call_static_func @ 00101d38 */

int call_static_func(int x)

{
 int iVar1;
 
 iVar1 = static_helper(x);
 return iVar1 + 1;
}



/* Function: static_helper @ 00101d60 */

int static_helper(int x)

{
 return x << 1;
}



/* ARM64 Data Memory Barrier intrinsic */
static inline void DataMemoryBarrier(void) {
    __asm__ volatile("dmb sy" ::: "memory");
}

/* Function: access_extern_global @ 00101d78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101d8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 00101da4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101db8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return bss_var;
}



/* Function: access_bss_buffer @ 00101dc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return (int)(byte)bss_buffer[0];
}



/* Function: global_struct_access @ 00101dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return global_point.x + global_point.y;
}



/* Function: set_file_static @ 00101dec */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 00101e08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00101e14 */

void set_global_callback(_func_int_int f)
{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00101e30 */

int call_global_callback(int x)

{
 int local_14;
 
 if (global_func_ptr == (_func_int_int)0x0) {
 local_14 = -1;
 }
 else {
 local_14 = (*global_func_ptr)(x);
 }
 return local_14;
}



/* Function: global_heap_store @ 00101e84 */

int global_heap_store(int *p)

{
 undefined4 local_4;
 
 global_heap_ptr = p;
 if (p == (int *)0x0) {
 local_4 = -1;
 }
 else {
 local_4 = *p;
 }
 return local_4;
}



/* Function: static_complex_init @ 00101ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return complex_init[0] + complex_init[2] + complex_init[4];
}



/* Function: tls_access @ 00101ef4 */

int tls_access(int val)

{
 long lVar1;
 
 lVar1 = tpidr_el0;
 *(int *)(lVar1 + 0x10) = val;
 return *(int *)(lVar1 + 0x10) << 1;
}



/* Forward declaration of init_depends_on */
int init_depends_on(int *p);

/* Function: init_order_test @ 00101f20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 int iVar1;
 int local_14;
 
 /* Unresolved local var: int external_val@[???] */
 local_14 = 0x14;
 iVar1 = init_depends_on(&local_14);
 return iVar1;
}



/* Function: init_depends_on @ 00101f48 */

int init_depends_on(int *p)

{
 static int static_depends = 0;
 if (p != (int *)0x0) {
 static_depends = *p;
 }
 return static_depends;
}



/* Forward declaration of double_value */
int double_value(int x);

/* Function: test_static_global @ 00101f80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 uint32_t uVar1;
 int local_14;
 
 /* Unresolved local var: int heap_val@[???] */
 printf((const char *)&DAT_00102a43);
 uVar1 = global_var_access();
 printf("STM-L1-01 (global_var_access): %d\n",(ulong)uVar1);
 uVar1 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n",(ulong)uVar1);
 uVar1 = global_array_access(5);
 printf("STM-L1-02 (global_array_access): %d\n",(ulong)uVar1);
 static_local(1);
 uVar1 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",(ulong)uVar1);
 uVar1 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",(ulong)uVar1);
 uVar1 = call_static_func(5);
 printf("STM-L1-04 (call_static_func): %d\n",(ulong)uVar1);
 uVar1 = access_extern_global();
 printf("STM-L2-01 (access_extern_global): %d\n",(ulong)uVar1);
 uVar1 = call_extern_func();
 printf("STM-L2-02 (call_extern_func): %d\n",(ulong)uVar1);
 uVar1 = read_const_data();
 printf("STM-L2-03 (read_const_data): %d\n",(ulong)uVar1);
 uVar1 = access_bss_var();
 printf("STM-L2-04 (access_bss_var): %d\n",(ulong)uVar1);
 uVar1 = access_bss_buffer();
 printf("STM-L2-04 (access_bss_buffer): %d\n",(ulong)uVar1);
 uVar1 = global_struct_access();
 printf("STM-L2-05 (global_struct_access): %d\n",(ulong)uVar1);
 set_file_static(0x32);
 uVar1 = get_file_static();
 printf("STM-L2-06 (file_static): %d\n",(ulong)uVar1);
 set_global_callback(double_value);
 uVar1 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n",(ulong)uVar1);
 local_14 = 100;
 uVar1 = global_heap_store(&local_14);
 printf("STM-L2-08 (global_heap_store): %d\n",(ulong)uVar1);
 uVar1 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n",(ulong)uVar1);
 uVar1 = tls_access(10);
 printf("STM-L3-01 (tls_access): %d\n",(ulong)uVar1);
 uVar1 = init_order_test();
 printf("STM-L3-02 (init_order_test): %d\n",(ulong)uVar1);
 return;
}



/* Function: double_value @ 00102154 */

int double_value(int x)

{
 return x << 1;
}



/* Function: memop_memset @ 0010216c */

int memop_memset(void *buf,size_t size,int fill_value)

{
 uint32_t local_14;
 
 if ((buf == (void *)0x0) || (size == 0)) {
 local_14 = 0xffffffff;
 }
 else {
 memset(buf,fill_value,size);
 local_14 = (uint)*(byte *)buf;
 }
 return local_14;
}



/* Function: memop_memcpy @ 001021d8 */

int memop_memcpy(void *dst,void *src,size_t n)

{
 int local_14;
 
 if (((dst == (void *)0x0) || (src == (void *)0x0)) || (n == 0)) {
 local_14 = -1;
 }
 else {
 memcpy(dst,src,n);
 local_14 = *(int *)((long)dst + (n / 4 - 1) * 4);
 }
 return local_14;
}



/* Function: memop_memmove @ 00102260 */

int memop_memmove(void *buf,size_t n)

{
 uint32_t local_14;
 
 if ((buf == (void *)0x0) || (n < 2)) {
 local_14 = 0xffffffff;
 }
 else {
 memmove((void *)((long)buf + 1),buf,n - 1);
 local_14 = (uint)*(byte *)((long)buf + 1);
 }
 return local_14;
}



/* Function: memop_memcmp @ 001022d4 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int local_38;
 int local_14;
 
 /* Unresolved local var: int result@[DW_OP_breg31(sp): +12] */
 if (((p1 == (void *)0x0) || (p2 == (void *)0x0)) || (n == 0)) {
 local_14 = 0;
 }
 else {
 iVar1 = memcmp(p1,p2,n);
 if (iVar1 < 1) {
 local_38 = 0;
 if (iVar1 < 0) {
 local_38 = -1;
 }
 }
 else {
 local_38 = 1;
 }
 local_14 = local_38;
 }
 return local_14;
}



/* Function: memop_bzero @ 0010237c */

int memop_bzero(void *buf,size_t n)

{
 undefined4 local_14;
 
 if (buf == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 memset(buf,0,n);
 local_14 = (uint)*(byte *)buf;
 }
 return local_14;
}



/* Function: memop_bcopy @ 001023d8 */

int memop_bcopy(void *src,void *dst,size_t n)

{
 uint32_t local_14;
 
 if (((src == (void *)0x0) || (dst == (void *)0x0)) || (n == 0)) {
 local_14 = 0xffffffff;
 }
 else {
 bcopy(src,dst,n);
 local_14 = (uint)*(byte *)dst;
 }
 return local_14;
}



/* Function: memop_unaligned_access @ 00102450 */

int memop_unaligned_access(char *buf)

{
 int local_4;
 
 /* Unresolved local var: int value@[???] */
 if (buf == (char *)0x0) {
 local_4 = -1;
 }
 else {
 local_4 = *(int *)(buf + 1);
 }
 return local_4;
}



/* Function: memop_memory_barrier @ 00102494 */

int memop_memory_barrier(int *flag)

{
 undefined4 local_4;
 
 /* Unresolved local var: int local@[???] */
 if (flag == (int *)0x0) {
 local_4 = -1;
 }
 else {
 DataMemoryBarrier();
 local_4 = *flag + *flag;
 }
 return local_4;
}



/* Function: test_memory_op_functions @ 001024e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 uint32_t uVar1;
 int local_1ac;
 char local_1a8 [12];
 undefined4 local_19c;
 undefined4 local_198;
 undefined1 auStack_192 [10];
 undefined8 local_188;
 undefined4 local_180;
 undefined8 local_178;
 undefined4 local_170;
 uint64_t local_168;
 char acStack_161 [9];
 undefined8 local_158;
 undefined8 local_150;
 undefined4 local_148;
 undefined8 local_140;
 undefined8 uStack_138;
 undefined4 local_130;
 undefined1 auStack_120 [256];
 
 /* Unresolved local var: char[256] buffer@[DW_OP_breg31(sp): +176]
 Unresolved local var: int[5] int_src@[DW_OP_breg31(sp): +144]
 Unresolved local var: int[5] int_dst@[DW_OP_breg31(sp): +120]
 Unresolved local var: char[11] move_buf@[DW_OP_breg31(sp): +104]
 Unresolved local var: int[3] cmp_a@[DW_OP_breg31(sp): +88]
 Unresolved local var: int[3] cmp_b@[DW_OP_breg31(sp): +72]
 Unresolved local var: char[10] zero_buf@[DW_OP_breg31(sp): +62]
 Unresolved local var: char[4] bcopy_src@[DW_OP_breg31(sp): +56]
 Unresolved local var: char[4] bcopy_dst@[DW_OP_breg31(sp): +52]
 Unresolved local var: char[8] unalign_buf@[DW_OP_breg31(sp): +40]
 Unresolved local var: int flag@[DW_OP_breg31(sp): +36] */
 printf(DAT_00102ca6);
 uStack_138 = 0x280000001e;
 local_140 = 0x140000000a;
 local_130 = 0x32;
 local_158 = 0;
 local_150 = 0;
 local_148 = 0;
 uVar1 = memop_memset(auStack_120,10,0x41);
 printf("MEMOP-L2-01: %d\n",(ulong)uVar1);
 uVar1 = memop_memcpy(&local_158,&local_140,0x14);
 printf("MEMOP-L2-02: %d\n",(ulong)uVar1);
 local_168 = 0x6f576f6c6c6548;
 strncpy(acStack_161,"rld",4);
 uVar1 = memop_memmove(&local_168,10);
 printf("MEMOP-L2-03: %c\n",(ulong)uVar1);
 local_178 = 0x200000001;
 local_170 = 3;
 local_188 = 0x200000001;
 local_180 = 4;
 uVar1 = memop_memcmp(&local_178,&local_188,0xc);
 printf("MEMOP-L2-04: %d\n",(ulong)uVar1);
 uVar1 = memop_bzero(auStack_192,10);
 printf("MEMOP-L2-05: %d\n",(ulong)uVar1);
 local_198 = 0x4030201;
 local_19c = 0;
 uVar1 = memop_bcopy(&local_198,&local_19c,4);
 printf("MEMOP-L2-06: %d\n",(ulong)uVar1);
 local_1a8[0] = '\0';
 local_1a8[1] = '\x01';
 local_1a8[2] = '\x02';
 local_1a8[3] = '\x03';
 local_1a8[4] = '\x04';
 local_1a8[5] = '\x05';
 local_1a8[6] = '\x06';
 local_1a8[7] = '\a';
 uVar1 = memop_unaligned_access(local_1a8);
 printf("MEMOP-L3-01: 0x%x\n",(ulong)uVar1);
 local_1ac = 5;
 uVar1 = memop_memory_barrier(&local_1ac);
 printf("MEMOP-L3-02: %d\n",(ulong)uVar1);
 return;
}



/* Function: main @ 001026a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}








/* CRT stub function _fini */
void _fini(void) {
    return;
}




/* Total functions decompiled: 67 */
