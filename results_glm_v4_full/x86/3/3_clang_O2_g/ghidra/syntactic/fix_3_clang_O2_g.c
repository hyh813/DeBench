/* Auto-injected type definitions by preprocessor */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/* Type definitions */
typedef void (*code)(void);
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef int undefined;
typedef int _func_int_int(int);

/* Structure definitions */
typedef struct {
    int x;
    int y;
} Point;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* Global variables */
int global_counter = 0;
int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
extern int extern_global_var;
const char const_string[] = "Hello";
static int file_scope_static = 0;
_func_int_int *global_func_ptr = NULL;
int *global_heap_ptr = NULL;

/* External data references */
char DAT_000135c1[] = "Testing stack memory functions";
char DAT_000135df[] = "Testing heap memory functions";
char DAT_000132e3[] = "fork error";
char DAT_0001327d[] = "exited: %d";
char DAT_000132a2[] = "signaled: %d";
char DAT_0001326d[] = "%d";
char DAT_000135fd[] = "Testing static and global memory";
char DAT_00013621[] = "Testing memory operations";
char DAT_00013670[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
char DAT_0001367c[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

/* Lock functions */
void LOCK(void) {}
void UNLOCK(void) {}

/* Forward declarations */
int double_value(int x);
int call_extern_func(void);

/* External function declaration */
extern int extern_function(int x);

/* Namespace-like structure for static_local_counter */
struct {
    int counter;
} static_local_counter = {0};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/3/3_clang_O2_g
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













/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */












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
 /* Unresolved local var: int[10] arr@[???] */
 /* Unresolved local var: int i@[???] */
 return n * 5;
}



/* Function: local_struct @ 000112e0 */

int local_struct(int x)

{
 /* Unresolved local var: Point p@[DW_OP_breg4(ESP): +4; DW_OP_piece: 4;
 DW_OP_breg4(ESP): +4; DW_OP_deref_size: 4; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value; DW_OP_piece: 4] */
 return x * 3;
}



/* Function: address_of_local @ 000112f0 */

int address_of_local(int *out)

{
 /* Unresolved local var: int local@[???] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00011300 */

int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[???]
 Unresolved local var: int * p2@[???] */
 return *arr * 2;
}



/* Function: large_stack_frame @ 00011310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 char cVar1;
 int iVar2;
 char local_800 [2048];
 
 /* Unresolved local var: char[2048] large_buf@[???] */
 iVar2 = 0;
 do {
 cVar1 = (char)iVar2;
 /* Unresolved local var: int i@[???] */
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

/* WARNING: Unknown calling convention */

int vla_stack(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 int aiStack_24 [4];
 undefined1 *local_14;
 
 /* Unresolved local var: uint __vla_expr0@[???]
 Unresolved local var: int[740] vla@[???] */
 iVar2 = -1;
 if (0xfffffc17 < n - 0x3e9U) {
 local_14 = (undefined1 *)(aiStack_24 + 2);
 iVar2 = -(n * 4 + 0xfU & 0xfffffff0);
 iVar1 = iVar2 + -0x1c;
 /* Unresolved local var: int i@[???] */
 uVar4 = n & 3;
 uVar5 = 0;
 if (2 < n - 1U) {
 uVar5 = 0;
 iVar3 = 4;
 do {
 *(int *)((int)aiStack_24 + iVar3 * 2 + iVar2) = iVar3 + -4;
 *(int *)((int)aiStack_24 + iVar3 * 2 + iVar2 + 4) = iVar3 + -2;
 *(int *)((int)aiStack_24 + iVar3 * 2 + iVar1 + 0x24) = iVar3;
 *(int *)((int)aiStack_24 + iVar3 * 2 + iVar2 + 0xc) = iVar3 + 2;
 uVar5 = uVar5 + 4;
 iVar3 = iVar3 + 8;
 } while ((n & 0xfffffffcU) != uVar5);
 }
 if (uVar4 != 0) {
 iVar2 = uVar5 * 2;
 do {
 *(int *)((int)aiStack_24 + iVar2 * 2 + iVar1 + 0x24) = iVar2;
 iVar2 = iVar2 + 2;
 uVar4 = uVar4 - 1;
 } while (uVar4 != 0);
 }
 iVar2 = *(int *)((int)aiStack_24 + (n - (n >> 0x1f) & 0xfffffffeU) * 2 + iVar1 + 0x24);
 }
 return iVar2;
}



/* Function: alloca_usage @ 00011430 */

/* WARNING: Unknown calling convention */

int alloca_usage(int n)

{
 int iVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 int aiStack_1c [3];
 
 /* Unresolved local var: int * arr@[???] */
 if (n < 1) {
 iVar5 = -1;
 }
 else {
 iVar5 = -(n * 4 + 0xfU & 0xfffffff0);
 iVar1 = iVar5 + -0x1c;
 /* Unresolved local var: int i@[???] */
 uVar4 = 0;
 if (2 < n - 1U) {
 uVar4 = 0;
 iVar2 = 6;
 do {
 *(int *)((int)aiStack_1c + uVar4 * 4 + iVar1 + 0x1c) = iVar2 + -6;
 *(int *)((int)aiStack_1c + uVar4 * 4 + iVar5 + 4) = iVar2 + -3;
 *(int *)((int)aiStack_1c + uVar4 * 4 + iVar5 + 8) = iVar2;
 *(int *)((int)aiStack_1c + uVar4 * 4 + iVar5 + 0xc) = iVar2 + 3;
 uVar4 = uVar4 + 4;
 iVar2 = iVar2 + 0xc;
 } while ((n & 0xfffffffcU) != uVar4);
 }
 if ((n & 3U) != 0) {
 iVar5 = uVar4 * 3;
 uVar3 = 0;
 do {
 *(int *)((int)aiStack_1c + uVar3 * 4 + uVar4 * 4 + iVar1 + 0x1c) = iVar5;
 uVar3 = uVar3 + 1;
 iVar5 = iVar5 + 3;
 } while ((n & 3U) != uVar3);
 }
 iVar5 = *(int *)((int)aiStack_1c + (n - (n >> 0x1f) & 0xfffffffeU) * 2 + iVar1 + 0x1c);
 }
 return iVar5;
}



/* Function: stack_alias @ 000114d0 */

int stack_alias(int *p1,int *p2)

{
 /* Unresolved local var: int local@[???] */
 return 0x14;
}



/* Function: test_stack_memory @ 000114e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 char cVar1;
 int iVar2;
 char acStack_804 [2048];
 
 /* Unresolved local var: int[10] arr5@[???]
 Unresolved local var: int alias_val@[???]
 Unresolved local var: int out@[???] */
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

int heap_basic(int n)

{
 void *__ptr;
 uint uVar1;
 uint uVar2;
 int iVar3;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(n * 4);
 if (__ptr == (void *)0x0) {
 iVar3 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar1 = n & 3;
 uVar2 = 0;
 if (2 < n - 1U) {
 uVar2 = 0;
 iVar3 = 4;
 do {
 *(int *)((int)__ptr + iVar3 * 2 + -8) = iVar3 + -4;
 *(int *)((int)__ptr + iVar3 * 2 + -4) = iVar3 + -2;
 *(int *)((int)__ptr + iVar3 * 2) = iVar3;
 *(int *)((int)__ptr + iVar3 * 2 + 4) = iVar3 + 2;
 uVar2 = uVar2 + 4;
 iVar3 = iVar3 + 8;
 } while ((n & 0xfffffffcU) != uVar2);
 }
 if (uVar1 != 0) {
 iVar3 = uVar2 * 2;
 do {
 *(int *)((int)__ptr + iVar3 * 2) = iVar3;
 iVar3 = iVar3 + 2;
 uVar1 = uVar1 - 1;
 } while (uVar1 != 0);
 }
 }
 iVar3 = *(int *)((int)__ptr + (n - (n >> 0x1f) & 0xfffffffeU) * 2);
 free(__ptr);
 }
 return iVar3;
}



/* Function: heap_calloc @ 00011700 */

int heap_calloc(int n)

{
 void *__ptr;
 uint uVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = calloc(n,4);
 if (__ptr == (void *)0x0) {
 iVar4 = -1;
 }
 else {
 iVar4 = 0;
 /* Unresolved local var: int i@[???] */
 if (1 < n) {
 uVar1 = n - 1U & 7;
 if (n - 2U < 7) {
 iVar4 = 0;
 iVar2 = 1;
 }
 else {
 iVar4 = 0;
 uVar5 = 0;
 do {
 uVar3 = uVar5;
 iVar4 = iVar4 + *(int *)((int)__ptr + uVar3 * 4 + 4) +
 *(int *)((int)__ptr + uVar3 * 4 + 8) + *(int *)((int)__ptr + uVar3 * 4 + 0xc) +
 *(int *)((int)__ptr + uVar3 * 4 + 0x10) + *(int *)((int)__ptr + uVar3 * 4 + 0x14)
 + *(int *)((int)__ptr + uVar3 * 4 + 0x18) +
 *(int *)((int)__ptr + uVar3 * 4 + 0x1c) + *(int *)((int)__ptr + uVar3 * 4 + 0x20);
 uVar5 = uVar3 + 8;
 } while ((n - 1U & 0xfffffff8) != uVar3 + 8);
 iVar2 = uVar3 + 9;
 }
 if (uVar1 != 0) {
 uVar5 = 0;
 do {
 iVar4 = iVar4 + *(int *)((int)__ptr + uVar5 * 4 + iVar2 * 4);
 uVar5 = uVar5 + 1;
 } while (uVar1 != uVar5);
 }
 }
 free(__ptr);
 }
 return iVar4;
}



/* Function: heap_realloc @ 000117c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 undefined4 *__ptr;
 undefined4 *__ptr_00;
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
 if (__ptr_00 == (undefined4 *)0x0) {
 iVar1 = -2;
 __ptr_00 = __ptr;
 }
 else {
 /* Unresolved local var: int i@[???] */
 __ptr_00[5] = 0x32;
 __ptr_00[6] = 0x3c;
 __ptr_00[7] = 0x46;
 __ptr_00[8] = 0x50;
 __ptr_00[9] = 0x5a;
 iVar1 = -3;
 if (__ptr_00[2] == 3) {
 iVar1 = 0x32;
 }
 }
 free(__ptr_00);
 }
 return iVar1;
}



/* Function: heap_array @ 00011870 */

int heap_array(int n)

{
 void *__ptr;
 uint uVar1;
 int iVar2;
 uint uVar3;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(n * 4);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar1 = 0;
 if (2 < n - 1U) {
 uVar1 = 0;
 iVar2 = 6;
 do {
 *(int *)((int)__ptr + uVar1 * 4) = iVar2 + -6;
 *(int *)((int)__ptr + uVar1 * 4 + 4) = iVar2 + -3;
 *(int *)((int)__ptr + uVar1 * 4 + 8) = iVar2;
 *(int *)((int)__ptr + uVar1 * 4 + 0xc) = iVar2 + 3;
 uVar1 = uVar1 + 4;
 iVar2 = iVar2 + 0xc;
 } while ((n & 0xfffffffcU) != uVar1);
 }
 if ((n & 3U) != 0) {
 iVar2 = uVar1 * 3;
 uVar3 = 0;
 do {
 *(int *)((int)__ptr + uVar3 * 4 + uVar1 * 4) = iVar2;
 uVar3 = uVar3 + 1;
 iVar2 = iVar2 + 3;
 } while ((n & 3U) != uVar3);
 }
 }
 iVar2 = *(int *)((int)__ptr + (n - (n >> 0x1f) & 0xfffffffeU) * 2);
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_struct @ 00011940 */

int heap_struct(int x)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: Point * p@[???] */
 return x * 3;
}



/* Function: heap_nested @ 00011950 */

int heap_nested(Node **head)

{
 Node *__ptr;
 Node *pNVar1;
 int iVar2;
 
 __ptr = malloc(8);
 *head = __ptr;
 if (__ptr == (Node *)0x0) {
 iVar2 = -1;
 }
 else {
 __ptr->data = 10;
 pNVar1 = malloc(8);
 __ptr->next = pNVar1;
 if (pNVar1 == (Node *)0x0) {
 free(__ptr);
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



/* Function: linked_list_heap @ 000119c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 int *__ptr;
 undefined4 *puVar1;
 undefined4 *puVar2;
 int *piVar3;
 int iVar4;
 
 /* Unresolved local var: Node * current@[???]
 Unresolved local var: Node * head@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: Node * temp@[???]
 Unresolved local var: int i@[???]
 Unresolved local var: Node * new_node@[???] */
 __ptr = malloc(8);
 iVar4 = -1;
 if (__ptr != (int *)0x0) {
 *__ptr = 0;
 puVar1 = malloc(8);
 if (puVar1 == (undefined4 *)0x0) {
 free(__ptr);
 }
 else {
 *puVar1 = 10;
 puVar1[1] = 0;
 __ptr[1] = (int)puVar1;
 puVar2 = malloc(8);
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
 puVar1[1] = puVar2;
 puVar1 = malloc(8);
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
 puVar2 = malloc(8);
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
 puVar1[1] = puVar2;
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



/* Function: tree_heap_traversal @ 00011b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 /* Unresolved local var: int sum@[???]
 Unresolved local var: TreeNode * root@[???] */
 return 0x3c;
}



/* Function: memory_leak @ 00011b90 */

int memory_leak(int n)

{
 void *pvVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 
 /* Unresolved local var: int * leak@[???] */
 pvVar1 = malloc(n * 4);
 if (pvVar1 == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar3 = n & 7;
 uVar4 = 0;
 if (6 < n - 1U) {
 uVar4 = 0;
 do {
 *(uint *)((int)pvVar1 + uVar4 * 4) = uVar4;
 *(uint *)((int)pvVar1 + uVar4 * 4 + 4) = uVar4 + 1;
 *(uint *)((int)pvVar1 + uVar4 * 4 + 8) = uVar4 + 2;
 *(uint *)((int)pvVar1 + uVar4 * 4 + 0xc) = uVar4 + 3;
 *(uint *)((int)pvVar1 + uVar4 * 4 + 0x10) = uVar4 + 4;
 *(uint *)((int)pvVar1 + uVar4 * 4 + 0x14) = uVar4 + 5;
 *(uint *)((int)pvVar1 + uVar4 * 4 + 0x18) = uVar4 + 6;
 *(uint *)((int)pvVar1 + uVar4 * 4 + 0x1c) = uVar4 + 7;
 uVar4 = uVar4 + 8;
 } while (uVar4 != (n & 0xfffffff8U));
 }
 for (; uVar3 != 0; uVar3 = uVar3 - 1) {
 *(uint *)((int)pvVar1 + uVar4 * 4) = uVar4;
 uVar4 = uVar4 + 1;
 }
 }
 iVar2 = *(int *)((int)pvVar1 + (n - (n >> 0x1f) & 0xfffffffeU) * 2);
 }
 return iVar2;
}



/* Function: dangling_pointer @ 00011c50 */

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
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 iVar1 = *__ptr;
 }
 return iVar1;
}



/* Function: double_free @ 00011ca0 */

int double_free(int *p)

{
 if (p != (int *)0x0) {
 return *p;
 }
 return -2;
}



/* Function: heap_overflow @ 00011cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: int * arr@[???] */
 return 0;
}



/* Function: test_heap_memory @ 00011cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 undefined4 *puVar1;
 undefined4 *puVar2;
 int iVar3;
 __pid_t __pid;
 uint uVar4;
 undefined4 uVar5;
 char *__format;
 uint local_10;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: pid_t pid@[???] */
 puts(&DAT_000135df);
 printf("HEAP-L2-01 (heap_basic): %d\n",10);
 printf("HEAP-L2-02 (heap_calloc): %d\n",0);
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int old_val@[???]
 Unresolved local var: int * new_p@[???]
 Unresolved local var: int result@[???] */
 puVar1 = malloc(0x14);
 if (puVar1 == (undefined4 *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *puVar1 = 1;
 puVar1[1] = 2;
 puVar1[2] = 3;
 puVar1[3] = 4;
 puVar1[4] = 5;
 puVar2 = realloc(puVar1,0x28);
 if (puVar2 == (undefined4 *)0x0) {
 uVar5 = 0xfffffffe;
 puVar2 = puVar1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 puVar2[5] = 0x32;
 puVar2[6] = 0x3c;
 puVar2[7] = 0x46;
 puVar2[8] = 0x50;
 puVar2[9] = 0x5a;
 uVar5 = 0xfffffffd;
 if (puVar2[2] == 3) {
 uVar5 = 0x32;
 }
 }
 free(puVar2);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar5);
 printf("HEAP-L2-04 (heap_array): %d\n",0xf);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 puVar1 = malloc(8);
 if (puVar1 == (undefined4 *)0x0) {
 printf("HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 *puVar1 = 10;
 puVar2 = malloc(8);
 puVar1[1] = puVar2;
 if (puVar2 == (undefined4 *)0x0) {
 free(puVar1);
 uVar5 = 0xfffffffe;
 }
 else {
 *puVar2 = 0x14;
 puVar2[1] = 0;
 uVar5 = 0;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar5);
 free((void *)puVar1[1]);
 free(puVar1);
 }
 iVar3 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",iVar3);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
 printf("HEAP-L3-03 (memory_leak): %d\n",2);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_000132e3);
 }
 else {
 /* Unresolved local var: int status@[???] */
 waitpid(__pid,(int *)&local_10,0);
 uVar4 = local_10 & 0x7f;
 if (uVar4 == 0) {
 uVar4 = local_10 >> 8 & 0xff;
 __format = &DAT_0001327d;
 }
 else {
 if ((int)(uVar4 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = &DAT_000132a2;
 }
 printf(__format,uVar4);
 }
 return;
 }
 /* Unresolved local var: int result@[???] */
 iVar3 = dangling_pointer();
 printf(&DAT_0001326d,iVar3);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 00011f70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00011f90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter * 2;
}



/* Function: global_array_access @ 00011fb0 */

int global_array_access(int idx)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)idx < 10) {
 iVar1 = global_array[idx];
 }
 return iVar1;
}



/* Function: static_local @ 00011fe0 */

int static_local(int reset)

{
 int iVar1;
 
 iVar1 = 0;
 if (reset == 0) {
 iVar1 = static_local_counter.counter + 1;
 }
 static_local_counter.counter = iVar1;
 return iVar1;
}



/* Function: call_static_func @ 00012010 */

int call_static_func(int x)

{
 return x * 2 + 1;
}



/* Function: access_extern_global @ 00012020 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00012040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 00012070 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00012090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 000120a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 000120b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 000120c0 */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 000120e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00012100 */

void set_global_callback(_func_int_int *f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00012120 */

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



/* Function: global_heap_store @ 00012150 */

int global_heap_store(int *p)

{
 global_heap_ptr = p;
 if (p != (int *)0x0) {
 return *p;
 }
 return -1;
}



/* Function: static_complex_init @ 00012180 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00012190 */

int tls_access(int val)

{
 return val * 2;
}



/* Function: init_order_test @ 000121a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 /* Unresolved local var: int external_val@[???] */
 return 0x14;
}



/* Function: test_static_global @ 000121b0 */

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
 static_local_counter.counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter.counter = static_local_counter.counter + 1;
 printf("STM-L1-03 (static_local): %d\n",static_local_counter.counter);
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



/* Function: double_value @ 000123c0 */

int double_value(int x)

{
 return x * 2;
}



/* Function: memop_memset @ 000123d0 */

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



/* Function: memop_memcpy @ 00012410 */

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



/* Function: memop_memmove @ 00012460 */

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



/* Function: memop_memcmp @ 000124b0 */

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



/* Function: memop_bzero @ 00012500 */

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



/* Function: memop_bcopy @ 00012540 */

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



/* Function: memop_unaligned_access @ 00012590 */

int memop_unaligned_access(char *buf)

{
 /* Unresolved local var: int value@[???] */
 if (buf != (char *)0x0) {
 return *(int *)(buf + 1);
 }
 return -1;
}



/* Function: memop_memory_barrier @ 000125b0 */

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



/* Function: test_memory_op_functions @ 000125d0 */

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
 uVar4 = 0x125d9;
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
 printf("MEMOP-L3-02: %d\n",10);
 return;
}



/* Function: main @ 00012700 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}








/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
