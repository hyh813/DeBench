/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t and ssize_t are defined in system headers */
/* uintptr_t, intptr_t, and ptrdiff_t are defined in system headers */
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Missing standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/wait.h>

/* Define LOCK/UNLOCK for memory barrier functionality */
#define LOCK()   /* No-op lock for single-threaded compatibility */
#define UNLOCK() /* No-op unlock for single-threaded compatibility */

/* Define Ghidra types */
typedef uint32_t undefined4;
typedef uint8_t undefined;
typedef uint8_t byte;
/* pid_t is defined in sys/wait.h */

/* Forward struct declarations */
typedef struct Node Node;
typedef struct TreeNode TreeNode;

/* Node structure definition */
struct Node {
    int data;
    Node *next;
};

/* TreeNode structure definition */
struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
};

/* Define code pointer type (Ghidra type) */
typedef void (*code)();

/* Function pointer type */
typedef int (*_func_int_int)(int);

/* Global variables */
int global_counter;
int global_array[10];
int extern_global_var;
int file_scope_static;
_func_int_int global_func_ptr;
int *global_heap_ptr;

/* Static local variable from static_local function (made global for access) */
static int counter = 0;

/* External declarations */
/* extern_function is defined at the end of the file as static */
static int extern_function(int x);
extern int double_value(int x);

/* Constant string (uninitialized - BSS) */
static const char const_string[] = "Hello World";

/* Static local counter */
static int static_local_counter = 0;

/* String literals */
static const char DAT_000135c1[] = "=== Stack Memory Tests ===\n";
static const char DAT_000135df[] = "=== Heap Memory Tests ===\n";
static const char DAT_000132e3[] = "fork";
static const char DAT_0001327d[] = "%d\n";
static const char DAT_000132a2[] = "signal %d\n";
static const char DAT_0001326d[] = "%d\n";
static const char DAT_000135fd[] = "=== Static/Global Tests ===\n";
static const char DAT_00013621[] = "=== Memory Operation Tests ===\n";
static const char DAT_00013670[] = "Hello";
static const char DAT_0001367c[] = "Hello";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/3/3_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
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

int local_vars(int x)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int c@[???]
 Unresolved local var: int b@[???] */
 return x * 2 + 10;
}



/* Function: local_array @ 000112d0 */

int local_array(int n)

{
 int iVar1;
 int iVar2;
 int local_28 [10];
 
 /* Unresolved local var: int[10] arr@[???] */
 iVar1 = 0;
 iVar2 = 0;
 do {
 local_28[iVar2] = iVar1;
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + n;
 } while (iVar2 != 10);
 return local_28[5];
}



/* Function: local_struct @ 00011300 */

int local_struct(int x)

{
 /* Unresolved local var: Point p@[DW_OP_breg4(ESP): +4; DW_OP_piece: 4;
 DW_OP_breg4(ESP): +4; DW_OP_deref_size: 4; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value; DW_OP_piece: 4] */
 return x * 3;
}



/* Function: address_of_local @ 00011310 */

int address_of_local(int *out)

{
 /* Unresolved local var: int local@[???] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00011320 */

int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[???]
 Unresolved local var: int * p2@[???] */
 return *arr * 2;
}



/* Function: large_stack_frame @ 00011330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 int iVar1;
 char local_800 [2048];
 
 /* Unresolved local var: char[2048] large_buf@[???] */
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(EAX)] */
 local_800[iVar1] = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 return (int)local_800[0x400];
}



/* Function: vla_stack @ 00011360 */

/* WARNING: Unknown calling convention */

int vla_stack(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int local_array[1]; /* placeholder for VLA */
 
 /* Unresolved local var: uint __vla_expr0@[???]
 Unresolved local var: int[726] vla@[???] */
 iVar1 = -1;
 if (0xfffffc17 < n - 0x3e9U) {
 iVar1 = -0xc - (n * 4 + 0xfU & 0xfffffff0);
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 iVar3 = n;
 do {
 *(int *)((char *)local_array + iVar2 * 2 + iVar1 + 0xc) = iVar2;
 iVar2 = iVar2 + 2;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 }
 iVar1 = *(int *)((char *)local_array + (n - (n >> 0x1f) & 0xfffffffeU) * 2 + iVar1 + 0xc);
 }
 return iVar1;
}



/* Function: alloca_usage @ 000113d0 */

/* WARNING: Unknown calling convention */

int alloca_usage(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iStack_c;
 
 /* Unresolved local var: int * arr@[???] */
 if (n < 1) {
 iVar1 = -1;
 }
 else {
 iVar1 = -0xc - (n * 4 + 0xfU & 0xfffffff0);
 iVar2 = 0;
 iVar3 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg6(ESI)] */
 *(int *)((int)&iStack_c + iVar3 * 4 + iVar1 + 0xc) = iVar2;
 iVar3 = iVar3 + 1;
 iVar2 = iVar2 + 3;
 } while (n != iVar3);
 iVar1 = *(int *)((int)&iStack_c + (n - (n >> 0x1f) & 0xfffffffeU) * 2 + iVar1 + 0xc);
 }
 return iVar1;
}



/* Function: stack_alias @ 00011420 */

int stack_alias(int *p1,int *p2)

{
 /* Unresolved local var: int local@[???] */
 return 0x14;
}



/* Function: test_stack_memory @ 00011430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 int iVar1;
 int *piVar2;
 int local_80c [256];
 char local_40c;
 
 /* Unresolved local var: int[10] arr5@[???]
 Unresolved local var: int alias_val@[???]
 Unresolved local var: int out@[???] */
 puts(&DAT_000135c1);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 iVar1 = 0;
 do {
 /* Unresolved local var: int[10] arr@[???]
 Unresolved local var: int i@[???] */
 *(int *)((int)local_80c + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 printf("MEM-L1-02 (local_array): %d\n",local_80c[5]);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 iVar1 = 0;
 do {
 *(char *)((int)local_80c + iVar1) = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(int)local_40c);
 /* Unresolved local var: uint __vla_expr0@[???]
 Unresolved local var: int[726] vla@[???] */
 iVar1 = 0;
 do {
 *(int *)((int)local_80c + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 printf("MEM-L2-02 (vla_stack): %d\n",local_80c[5]);
 iVar1 = 0;
 piVar2 = local_80c;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x1e);
 printf("MEM-L2-03 (alloca_usage): %d\n",local_80c[5]);
 printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 00011590 */

int heap_basic(int n)

{
 void *__ptr;
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(n * 4);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 iVar2 = n;
 do {
 *(int *)((int)__ptr + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 iVar2 = iVar2 + -1;
 } while (iVar2 != 0);
 }
 iVar2 = *(int *)((int)__ptr + (n - (n >> 0x1f) & 0xfffffffeU) * 2);
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_calloc @ 000115f0 */

int heap_calloc(int n)

{
 void *__ptr;
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = calloc(n,4);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar2 = 0;
 }
 else {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(int *)((int)__ptr + iVar1 * 4);
 iVar1 = iVar1 + 1;
 } while (n != iVar1);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 00011660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 int iVar1;
 void *__ptr;
 int iVar2;
 void *__ptr_00;
 int *piVar3;
 
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int old_val@[???]
 Unresolved local var: int * new_p@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 1;
 do {
 *(int *)((int)__ptr + iVar2 * 4 + -4) = iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 6);
 iVar1 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 iVar2 = -2;
 __ptr_00 = __ptr;
 }
 else {
 /* Unresolved local var: int i@[???] */
 piVar3 = (int *)((int)__ptr_00 + 0x14);
 iVar2 = 0x32;
 do {
 *piVar3 = iVar2;
 iVar2 = iVar2 + 10;
 piVar3 = piVar3 + 1;
 } while (iVar2 != 100);
 iVar2 = -3;
 if (*(int *)((int)__ptr_00 + 8) == iVar1) {
 iVar2 = *(int *)((int)__ptr_00 + 0x14);
 }
 }
 free(__ptr_00);
 }
 return iVar2;
}



/* Function: heap_array @ 00011700 */

int heap_array(int n)

{
 void *__ptr;
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(n * 4);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 *(int *)((int)__ptr + iVar2 * 4) = iVar1;
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + 3;
 } while (n != iVar2);
 }
 iVar1 = *(int *)((int)__ptr + (n - (n >> 0x1f) & 0xfffffffeU) * 2);
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_struct @ 00011770 */

int heap_struct(int x)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: Point * p@[???] */
 return x * 3;
}



/* Function: heap_nested @ 00011780 */

int heap_nested(Node **head)

{
 Node *pNVar1;
 int iVar2;
 
 pNVar1 = malloc(8);
 *head = pNVar1;
 if (pNVar1 == (Node *)0x0) {
 iVar2 = -1;
 }
 else {
 pNVar1->data = 10;
 pNVar1 = malloc(8);
 (*head)->next = pNVar1;
 pNVar1 = (*head)->next;
 if (pNVar1 == (Node *)0x0) {
 free(*head);
 iVar2 = -2;
 }
 else {
 pNVar1->data = 0x14;
 pNVar1->next = (Node *)0x0;
 iVar2 = 0;
 }
 }
 return iVar2;
}



/* Function: linked_list_heap @ 000117f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 uint uVar3;
 int *__ptr;
 int *piVar4;
 int iVar5;
 bool bVar6;
 
 /* Unresolved local var: Node * current@[???]
 Unresolved local var: Node * head@[???]
 Unresolved local var: Node * temp@[???]
 Unresolved local var: int sum@[???] */
 __ptr = (int *)0x0;
 bVar6 = true;
 uVar3 = 0;
 piVar4 = (int *)0x0;
 do {
 piVar2 = malloc(8);
 if (piVar2 == (int *)0x0) goto joined_r0x00011872;
 *piVar2 = uVar3 * 10;
 piVar2[1] = 0;
 piVar1 = piVar2;
 if (__ptr != (int *)0x0) {
 piVar4[1] = (int)piVar2;
 piVar1 = __ptr;
 }
 __ptr = piVar1;
 /* Unresolved local var: int i@[???]
 Unresolved local var: Node * new_node@[???] */
 if (piVar2 == (int *)0x0) break;
 bVar6 = uVar3 < 4;
 uVar3 = uVar3 + 1;
 piVar4 = piVar2;
 } while (uVar3 != 5);
LAB_000118a7:
 iVar5 = -1;
 if (!bVar6) {
 iVar5 = 0;
 for (piVar4 = __ptr; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
 iVar5 = iVar5 + *piVar4;
 }
 while (__ptr != (int *)0x0) {
 piVar4 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar4;
 }
 }
 return iVar5;
joined_r0x00011872:
 while (__ptr != (int *)0x0) {
 piVar4 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar4;
 }
 __ptr = (int *)0x0;
 goto LAB_000118a7;
}



/* Function: create_tree_node @ 000118f0 */

TreeNode * create_tree_node(int data)

{
 TreeNode *pTVar1;
 
 /* Unresolved local var: TreeNode * node@[???] */
 pTVar1 = malloc(0xc);
 if (pTVar1 != (TreeNode *)0x0) {
 pTVar1->data = data;
 pTVar1->left = (TreeNode *)0x0;
 pTVar1->right = (TreeNode *)0x0;
 }
 return pTVar1;
}



/* Function: tree_heap_traversal @ 00011930 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 int *__ptr;
 int *__ptr_00;
 int *__ptr_01;
 int iVar1;
 
 /* Unresolved local var: TreeNode * root@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: TreeNode * node@[???] */
 __ptr = malloc(0xc);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 *__ptr = 10;
 __ptr[1] = 0;
 __ptr[2] = 0;
 /* Unresolved local var: TreeNode * node@[???] */
 __ptr_00 = malloc(0xc);
 if (__ptr_00 != (int *)0x0) {
 *__ptr_00 = 0x14;
 __ptr_00[1] = 0;
 __ptr_00[2] = 0;
 }
 __ptr[1] = (int)__ptr_00;
 /* Unresolved local var: TreeNode * node@[???] */
 __ptr_01 = malloc(0xc);
 if (__ptr_01 != (int *)0x0) {
 *__ptr_01 = 0x1e;
 __ptr_01[1] = 0;
 __ptr_01[2] = 0;
 }
 __ptr[2] = (int)__ptr_01;
 if ((__ptr_00 == (int *)0x0) || (__ptr_01 == (int *)0x0)) {
 if (__ptr_00 != (int *)0x0) {
 free(__ptr_00);
 }
 iVar1 = -2;
 if (__ptr_01 == (int *)0x0) goto LAB_00011a02;
 }
 else {
 iVar1 = *__ptr_00 + *__ptr + *__ptr_01;
 free(__ptr_00);
 __ptr_01 = (int *)__ptr[2];
 }
 free(__ptr_01);
LAB_00011a02:
 free(__ptr);
 return iVar1;
}



/* Function: memory_leak @ 00011a20 */

int memory_leak(int n)

{
 void *pvVar1;
 int iVar2;
 
 /* Unresolved local var: int * leak@[???] */
 pvVar1 = malloc(n * 4);
 if (pvVar1 == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 do {
 *(int *)((int)pvVar1 + iVar2 * 4) = iVar2;
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 }
 iVar2 = *(int *)((int)pvVar1 + (n - (n >> 0x1f) & 0xfffffffeU) * 2);
 }
 return iVar2;
}



/* Function: dangling_pointer @ 00011a80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 int *__ptr;
 int iVar1;
 
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int value@[???]
 Unresolved local var: int dangerous@[???] */
 __ptr = malloc(4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 *__ptr = 0x2a;
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 iVar1 = *__ptr;
 }
 return iVar1;
}



/* Function: double_free @ 00011ae0 */

int double_free(int *p)

{
 if (p != (int *)0x0) {
 return *p;
 }
 return -2;
}



/* Function: heap_overflow @ 00011b00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

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
 *piVar2 = iVar1;
 iVar1 = iVar1 + 100;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x44c);
 iVar1 = *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: test_heap_memory @ 00011b60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 void *pvVar1;
 void *__ptr;
 undefined4 *__ptr_00;
 undefined4 *puVar2;
 __pid_t __pid;
 uint uVar3;
 int iVar4;
 int *piVar5;
 int iVar6;
 int *piVar7;
 int iVar8;
 undefined4 uVar9;
 char *__format;
 uint local_14;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: pid_t pid@[???] */
 puts(&DAT_000135df);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 pvVar1 = malloc(0x28);
 iVar8 = -1;
 uVar9 = 0xffffffff;
 if (pvVar1 != (void *)0x0) {
 iVar4 = 0;
 do {
 *(int *)((int)pvVar1 + iVar4 * 2) = iVar4;
 iVar4 = iVar4 + 2;
 } while (iVar4 != 0x14);
 uVar9 = *(undefined4 *)((int)pvVar1 + 0x14);
 free(pvVar1);
 }
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar9);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 pvVar1 = calloc(5,4);
 if (pvVar1 != (void *)0x0) {
 iVar4 = 0;
 iVar8 = 0;
 do {
 iVar8 = iVar8 + *(int *)((int)pvVar1 + iVar4 * 4);
 iVar4 = iVar4 + 1;
 } while (iVar4 != 5);
 free(pvVar1);
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n",iVar8);
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int old_val@[???]
 Unresolved local var: int * new_p@[???] */
 pvVar1 = malloc(0x14);
 iVar8 = -1;
 uVar9 = 0xffffffff;
 if (pvVar1 != (void *)0x0) {
 iVar4 = 1;
 do {
 *(int *)((int)pvVar1 + iVar4 * 4 + -4) = iVar4;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 6);
 iVar4 = *(int *)((int)pvVar1 + 8);
 __ptr = realloc(pvVar1,0x28);
 if (__ptr == (void *)0x0) {
 uVar9 = 0xfffffffe;
 __ptr = pvVar1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 piVar5 = (int *)((int)__ptr + 0x14);
 iVar6 = 0x32;
 do {
 *piVar5 = iVar6;
 iVar6 = iVar6 + 10;
 piVar5 = piVar5 + 1;
 } while (iVar6 != 100);
 uVar9 = 0xfffffffd;
 if (*(int *)((int)__ptr + 8) == iVar4) {
 uVar9 = *(undefined4 *)((int)__ptr + 0x14);
 }
 }
 free(__ptr);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar9);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 piVar5 = malloc(0x28);
 if (piVar5 != (int *)0x0) {
 iVar8 = 0;
 piVar7 = piVar5;
 do {
 *piVar7 = iVar8;
 iVar8 = iVar8 + 3;
 piVar7 = piVar7 + 1;
 } while (iVar8 != 0x1e);
 iVar8 = piVar5[5];
 free(piVar5);
 }
 printf("HEAP-L2-04 (heap_array): %d\n",iVar8);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 __ptr_00 = malloc(8);
 if (__ptr_00 == (undefined4 *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 *__ptr_00 = 10;
 puVar2 = malloc(8);
 __ptr_00[1] = puVar2;
 if (puVar2 == (undefined4 *)0x0) {
 free(__ptr_00);
 uVar9 = 0xfffffffe;
 }
 else {
 *puVar2 = 0x14;
 puVar2[1] = 0;
 uVar9 = 0;
 }
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar9);
 if (__ptr_00 != (undefined4 *)0x0) {
 free((void *)__ptr_00[1]);
 free(__ptr_00);
 }
 iVar8 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",iVar8);
 iVar8 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",iVar8);
 /* Unresolved local var: int * leak@[???] */
 pvVar1 = malloc(0x14);
 if (pvVar1 == (void *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 iVar8 = 0;
 do {
 *(int *)((int)pvVar1 + iVar8 * 4) = iVar8;
 iVar8 = iVar8 + 1;
 } while (iVar8 != 5);
 uVar9 = *(undefined4 *)((int)pvVar1 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar9);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_000132e3);
 }
 else {
 /* Unresolved local var: int status@[???] */
 waitpid(__pid,(int *)&local_14,0);
 uVar3 = local_14 & 0x7f;
 if (uVar3 == 0) {
 uVar3 = local_14 >> 8 & 0xff;
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
 /* Unresolved local var: int result@[???] */
 iVar8 = dangling_pointer();
 printf(&DAT_0001326d,iVar8);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 00011eb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00011ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter * 2;
}



/* Function: global_array_access @ 00011ef0 */

int global_array_access(int idx)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)idx < 10) {
 iVar1 = global_array[idx];
 }
 return iVar1;
}



/* Function: static_local @ 00011f20 */

int static_local(int reset)

{
 int iVar1;
 static int counter = 0;
 
 iVar1 = 0;
 if (reset == 0) {
 iVar1 = counter + 1;
 }
 counter = iVar1;
 return iVar1;
}



/* Function: call_static_func @ 00011f50 */

int call_static_func(int x)

{
 return x * 2 + 1;
}



/* Function: access_extern_global @ 00011f60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00011f80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 00011fb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00011fd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 00011fe0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 00011ff0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 00012000 */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 00012020 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00012040 */

void set_global_callback(_func_int_int *f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00012060 */

int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr == (_func_int_int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = (*global_func_ptr)(x);
 }
 return iVar1;
}



/* Function: global_heap_store @ 00012090 */

int global_heap_store(int *p)

{
 global_heap_ptr = p;
 if (p != (int *)0x0) {
 return *p;
 }
 return -1;
}



/* Function: static_complex_init @ 000120c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 000120d0 */

int tls_access(int val)

{
 return val * 2;
}



/* Function: init_order_test @ 000120e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 /* Unresolved local var: int external_val@[???] */
 return 0x14;
}



/* Function: test_static_global @ 000120f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 int iVar1;
 int local_c;
 
 /* Unresolved local var: int heap_val@[???] */
 puts(&DAT_000135fd);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n",global_counter);
 printf("STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local(1);
 printf("STM-L1-03 (static_local): %d\n",1);
 printf("STM-L1-03 (static_local): %d\n",counter);
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 iVar1 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n",iVar1);
 printf("STM-L2-03 (read_const_data): %d\n",const_string[4] + 0x2a);
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



/* Function: double_value @ 00012300 */

int double_value(int x)

{
 return x * 2;
}



/* Function: memop_memset @ 00012310 */

int memop_memset(void *buf,size_t size,int fill_value)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if ((buf != (void *)0x0) && (size != 0)) {
 memset(buf,fill_value,size);
 uVar1 = (uint)*(byte *)buf;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 00012350 */

int memop_memcpy(void *dst,void *src,size_t n)

{
 int iVar1;
 
 iVar1 = -1;
 if (((dst != (void *)0x0) && (src != (void *)0x0)) && (n != 0)) {
 memcpy(dst,src,n);
 iVar1 = *(int *)(((n & 0xfffffffc) - 4) + (int)dst);
 }
 return iVar1;
}



/* Function: memop_memmove @ 000123a0 */

int memop_memmove(void *buf,size_t n)

{
 int iVar1;
 
 iVar1 = -1;
 if ((buf != (void *)0x0) && (1 < n)) {
 memmove((void *)((int)buf + 1),buf,n - 1);
 iVar1 = (int)*(char *)((int)buf + 1);
 }
 return iVar1;
}



/* Function: memop_memcmp @ 000123f0 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???] */
 iVar1 = 0;
 if (((p1 != (void *)0x0) && (p2 != (void *)0x0)) && (n != 0)) {
 iVar2 = memcmp(p1,p2,n);
 iVar1 = 1;
 if (iVar2 < 1) {
 iVar1 = -(uint)(iVar2 != 0);
 }
 }
 return iVar1;
}



/* Function: memop_bzero @ 00012440 */

int memop_bzero(void *buf,size_t n)

{
 uint uVar1;
 
 if (buf == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(buf,0,n);
 uVar1 = (uint)*(byte *)buf;
 }
 return uVar1;
}



/* Function: memop_bcopy @ 00012480 */

int memop_bcopy(void *src,void *dst,size_t n)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if (((src != (void *)0x0) && (dst != (void *)0x0)) && (n != 0)) {
 memmove(dst,src,n);
 uVar1 = (uint)*(byte *)dst;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 000124d0 */

int memop_unaligned_access(char *buf)

{
 /* Unresolved local var: int value@[???] */
 if (buf != (char *)0x0) {
 return *(int *)(buf + 1);
 }
 return -1;
}



/* Function: memop_memory_barrier @ 000124f0 */

int memop_memory_barrier(int *flag)

{
 /* Unresolved local var: int local@[???] */
 if (flag != (int *)0x0) {
 LOCK();
 UNLOCK();
 return *flag + *flag;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 00012510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 undefined4 uVar4;
 undefined4 in_stack_ffffffe4;
 
 /* Unresolved local var: char[11] move_buf@[???]
 Unresolved local var: int flag@[???]
 Unresolved local var: char[256] buffer@[???]
 Unresolved local var: int[5] int_dst@[???]
 Unresolved local var: int[5] int_src@[???]
 Unresolved local var: char[10] zero_buf@[???]
 Unresolved local var: char[4] bcopy_dst@[???]
 Unresolved local var: char[4] bcopy_src@[???]
 Unresolved local var: char[8] unalign_buf@[???]
 Unresolved local var: int[3] cmp_a@[???]
 Unresolved local var: int[3] cmp_b@[???] */
 uVar4 = 0x12519;
 puts(&DAT_00013621);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 printf("MEMOP-L2-03: %c\n",0x48);
 /* Unresolved local var: int result@[???] */
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
 /* Unresolved local var: int local@[???] */
 LOCK();
 UNLOCK();
 printf("MEMOP-L3-02: %d\n",10,uVar3,uVar4,in_stack_ffffffe4);
 return;
}



/* Function: main @ 00012640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 00012670 */

static int extern_function(int x)

{
 return x * 3;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
