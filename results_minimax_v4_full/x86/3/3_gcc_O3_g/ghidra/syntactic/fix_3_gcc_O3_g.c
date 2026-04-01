/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned char undefined;
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef int __pid_t;
typedef void (*code)();

/* Boolean type */
typedef int bool;
#define true 1
#define false 0

/* Atomic lock macros for memory barrier demonstration */
#define LOCK()   __asm__ __volatile__("lock" ::: "memory")
#define UNLOCK() __asm__ __volatile__("" ::: "memory")

/* Function pointer type */
typedef int (*_func_int_int)(int);

/* Global variables */
int global_counter = 0;
int counter_1 = 0;
int extern_global_var = 0;
char const_string[] = "HelloWorld";
int global_array[10];
int file_scope_static = 0;
int global_bss_var;
char global_bss_buffer[256];
int global_struct_val = 0x1e;
_func_int_int global_func_ptr;
void *global_heap_ptr;

/* Unresolved data symbols from binary */
char DAT_00013008[] = "Testing Stack Memory Functions";
char DAT_000130ea[] = "Testing Heap Memory Functions";
char DAT_0001319c[] = "value after free: %d\n";
char DAT_000131ac[] = "fork";
char DAT_000133bc[] = "Child exited with status: %d\n";
char DAT_000133e4[] = "Child killed by signal: %d\n";
char DAT_00013428[] = "Testing Static and Global Variables";
char DAT_00013650[] = "Testing Memory Operation Functions";

/* Unresolved code symbols (stack canary failure handlers) */
void (*UNK_00011583)(void);
void (*UNK_0001162b)(void);

/* Node structure for linked list */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* TreeNode structure for binary tree */
typedef struct TreeNode {
    struct TreeNode *left;
    struct TreeNode *right;
    int data;
} TreeNode;


/* Function: main @ 00011250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000112ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000112b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000113e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000113ed */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: double_value @ 00011400 */

/* WARNING: Unknown calling convention */

int double_value(int x)

{
 return x * 2;
}



/* Function: local_vars @ 00011420 */

/* WARNING: Unknown calling convention */

int local_vars(int x)

{
 return x * 2 + 10;
}



/* Function: local_array @ 00011430 */

/* WARNING: Unknown calling convention */

int local_array(int n)

{
 /* Unresolved local var: int i@[???] */
 return n * 5;
}



/* Function: local_struct @ 00011440 */

/* WARNING: Unknown calling convention */

int local_struct(int x)

{
 return x * 3;
}



/* Function: address_of_local @ 00011450 */

/* WARNING: Unknown calling convention */

int address_of_local(int *out)

{
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00011470 */

/* WARNING: Unknown calling convention */

int address_of_array(int *arr)

{
 return *arr * 2;
}



/* Function: large_stack_frame @ 00011480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 char large_buf [2048];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 do {
 large_buf[iVar2] = (char)iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x800);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)large_buf[0x400];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: vla_stack @ 000114e0 */

int vla_stack(int n)

{
 undefined1 *puVar1;
 int iVar2;
 int iVar3;
 uint uVar4;
 undefined1 *puVar5;
 undefined1 *puVar7;
 int in_GS_OFFSET;
 undefined1 auStack_1c [12];
 int local_10;
 undefined1 *puVar6;
 
 puVar7 = auStack_1c;
 puVar5 = auStack_1c;
 puVar6 = auStack_1c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 if (n - 1U < 1000) {
 uVar4 = n * 4 + 0xf;
 puVar1 = auStack_1c;
 while (puVar6 != auStack_1c + -(uVar4 & 0xfffff000)) {
 puVar5 = puVar1 + -0x1000;
 *(undefined4 *)(puVar1 + -4) = *(undefined4 *)(puVar1 + -4);
 puVar6 = puVar1 + -0x1000;
 puVar1 = puVar1 + -0x1000;
 }
 uVar4 = uVar4 & 0xff0;
 iVar3 = -uVar4;
 puVar7 = puVar5 + iVar3;
 if (uVar4 != 0) {
 *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar5 + -4);
 }
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 do {
 *(int *)(puVar5 + iVar2 * 2 + iVar3) = iVar2;
 iVar2 = iVar2 + 2;
 } while (iVar2 != n * 2);
 iVar3 = *(int *)(puVar5 + (n >> 1) * 4 + iVar3);
 }
 else {
 iVar3 = -1;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 *(undefined **)(puVar7 + -4) = &UNK_00011583;
 __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: alloca_usage @ 00011590 */

int alloca_usage(int n)

{
 undefined1 *puVar1;
 int iVar2;
 int iVar3;
 uint uVar4;
 undefined1 *puVar5;
 undefined1 *puVar7;
 int in_GS_OFFSET;
 undefined1 auStack_1c [12];
 int local_10;
 undefined1 *puVar6;
 
 puVar7 = auStack_1c;
 puVar5 = auStack_1c;
 puVar6 = auStack_1c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 if (n < 1) {
 iVar3 = -1;
 }
 else {
 uVar4 = n * 4 + 0x1b;
 puVar1 = auStack_1c;
 while (puVar6 != auStack_1c + -(uVar4 & 0xfffff000)) {
 puVar5 = puVar1 + -0x1000;
 *(undefined4 *)(puVar1 + -4) = *(undefined4 *)(puVar1 + -4);
 puVar6 = puVar1 + -0x1000;
 puVar1 = puVar1 + -0x1000;
 }
 uVar4 = uVar4 & 0xff0;
 iVar3 = -uVar4;
 puVar7 = puVar5 + iVar3;
 if (uVar4 != 0) {
 *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar5 + -4);
 }
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 do {
 *(int *)(((uint)(puVar5 + iVar3 + 0xf) & 0xfffffff0) + iVar2 * 4) = iVar2 * 3;
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 iVar3 = *(int *)(((uint)(puVar5 + iVar3 + 0xf) & 0xfffffff0) + (n >> 1) * 4);
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 *(undefined **)(puVar7 + -4) = &UNK_0001162b;
 __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: stack_alias @ 00011630 */

int stack_alias(int *p1,int *p2)

{
 return 0x14;
}



/* Function: test_stack_memory @ 00011640 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 int iVar1;
 
 puts(&DAT_00013008);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",10);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 iVar1 = large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",iVar1);
 /* Unresolved local var: int[7994] vla@[???] */
 iVar1 = 1;
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",10);
 iVar1 = alloca_usage(iVar1);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",iVar1);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 00011720 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int heap_basic(int n)

{
 void *__ptr;
 int iVar1;
 
 __ptr = malloc(n * 4);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 do {
 *(int *)((int)__ptr + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (n * 2 != iVar1);
 }
 iVar1 = *(int *)((int)__ptr + (n / 2) * 4);
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_calloc @ 00011790 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int heap_calloc(int n)

{
 int *__ptr;
 int *piVar1;
 int iVar2;
 
 __ptr = calloc(n,4);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 piVar1 = __ptr;
 do {
 iVar2 = iVar2 + *piVar1;
 piVar1 = piVar1 + 1;
 } while (__ptr + n != piVar1);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 00011800 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 undefined4 *__ptr;
 void *__ptr_00;
 int iVar1;
 
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
 iVar1 = -2;
 free(__ptr);
 }
 else {
 iVar1 = 0x32;
 if (*(int *)((int)__ptr_00 + 8) != 3) {
 iVar1 = -3;
 }
 free(__ptr_00);
 }
 }
 return iVar1;
}



/* Function: heap_array @ 000118a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int heap_array(int n)

{
 void *__ptr;
 int iVar1;
 
 __ptr = malloc(n * 4);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 do {
 *(int *)((int)__ptr + iVar1 * 4) = iVar1 * 3;
 iVar1 = iVar1 + 1;
 } while (n != iVar1);
 }
 iVar1 = *(int *)((int)__ptr + (n / 2) * 4);
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_struct @ 00011910 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int heap_struct(int x)

{
 void *__ptr;
 int iVar1;
 
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



/* Function: heap_nested @ 00011960 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

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



/* Function: linked_list_heap @ 000119e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int *__ptr;
 
 /* Unresolved local var: int i@[???] */
 iVar4 = 0;
 __ptr = (int *)0x0;
 piVar3 = (int *)0x0;
 while( true ) {
 /* Unresolved local var: Node * new_node@[???] */
 piVar2 = malloc(8);
 if (piVar2 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 /* Unresolved local var: Node * temp@[???] */
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 }
 return -1;
 }
 *piVar2 = iVar4;
 piVar2[1] = 0;
 piVar1 = piVar2;
 if (__ptr != (int *)0x0) {
 piVar3[1] = (int)piVar2;
 piVar1 = __ptr;
 }
 __ptr = piVar1;
 if (iVar4 == 0x28) break;
 iVar4 = iVar4 + 10;
 piVar3 = piVar2;
 }
 iVar4 = 0;
 piVar3 = __ptr;
 do {
 iVar4 = iVar4 + *piVar3;
 piVar3 = (int *)piVar3[1];
 } while (piVar3 != (int *)0x0);
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 return iVar4;
}



/* Function: create_tree_node @ 00011a90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

TreeNode * create_tree_node(int data)

{
 TreeNode *pTVar1;
 
 pTVar1 = malloc(0xc);
 if (pTVar1 != (TreeNode *)0x0) {
 pTVar1->left = (TreeNode *)0x0;
 pTVar1->right = (TreeNode *)0x0;
 pTVar1->data = data;
 }
 return pTVar1;
}



/* Function: tree_heap_traversal @ 00011ad0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 void *__ptr;
 void *pvVar1;
 void *__ptr_00;
 int iVar2;
 
 /* Unresolved local var: TreeNode * node@[???] */
 __ptr = malloc(0xc);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: TreeNode * node@[???] */
 pvVar1 = malloc(0xc);
 if (pvVar1 == (void *)0x0) {
 pvVar1 = malloc(0xc);
 if (pvVar1 != (void *)0x0) {
 free(pvVar1);
 }
 }
 else {
 /* Unresolved local var: TreeNode * node@[???] */
 __ptr_00 = malloc(0xc);
 if (__ptr_00 != (void *)0x0) {
 free(pvVar1);
 free(__ptr_00);
 free(__ptr);
 return 0x3c;
 }
 free(pvVar1);
 }
 free(__ptr);
 iVar2 = -2;
 }
 return iVar2;
}



/* Function: memory_leak @ 00011b90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int memory_leak(int n)

{
 void *pvVar1;
 int iVar2;
 
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
 iVar2 = *(int *)((int)pvVar1 + (n / 2) * 4);
 }
 return iVar2;
}



/* Function: dangling_pointer @ 00011bf0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 int *__ptr;
 int iVar1;
 
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



/* Function: double_free @ 00011c40 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int double_free(int *p)

{
 void *__ptr;
 int iVar1;
 
 if (p == (int *)0x0) {
 /* Unresolved local var: int * temp@[???] */
 __ptr = malloc(4);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 free(__ptr);
 return -2;
 }
 iVar1 = -1;
 }
 else {
 iVar1 = *p;
 }
 return iVar1;
}



/* Function: heap_overflow @ 00011ca0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 void *__ptr;
 int iVar1;
 
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 free(__ptr);
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: test_heap_memory @ 00011ce0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 int *piVar1;
 void *pvVar2;
 undefined4 uVar3;
 int *piVar4;
 undefined4 *puVar5;
 int *piVar6;
 int *piVar7;
 __pid_t __pid;
 uint uVar8;
 int iVar9;
 int in_GS_OFFSET;
 int status;
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x11ced;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_000130ea);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 pvVar2 = malloc(0x28);
 if (pvVar2 == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *(undefined4 *)((int)pvVar2 + 4) = 2;
 *(undefined4 *)((int)pvVar2 + 8) = 4;
 *(undefined4 *)((int)pvVar2 + 0xc) = 6;
 *(undefined4 *)((int)pvVar2 + 0x10) = 8;
 *(undefined4 *)((int)pvVar2 + 0x14) = 10;
 *(undefined4 *)((int)pvVar2 + 0x18) = 0xc;
 *(undefined4 *)((int)pvVar2 + 0x1c) = 0xe;
 *(undefined4 *)((int)pvVar2 + 0x20) = 0x10;
 *(undefined4 *)((int)pvVar2 + 0x24) = 0x12;
 free(pvVar2);
 uVar3 = 10;
 }
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar3);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 piVar4 = calloc(5,4);
 if (piVar4 == (int *)0x0) {
 iVar9 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 iVar9 = piVar4[1] + *piVar4 + piVar4[2] + piVar4[3] + piVar4[4];
 free(piVar4);
 }
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar9);
 iVar9 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",iVar9);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 pvVar2 = malloc(0x28);
 if (pvVar2 == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *(undefined4 *)((int)pvVar2 + 4) = 3;
 *(undefined4 *)((int)pvVar2 + 8) = 6;
 *(undefined4 *)((int)pvVar2 + 0xc) = 9;
 *(undefined4 *)((int)pvVar2 + 0x10) = 0xc;
 *(undefined4 *)((int)pvVar2 + 0x14) = 0xf;
 *(undefined4 *)((int)pvVar2 + 0x18) = 0x12;
 *(undefined4 *)((int)pvVar2 + 0x1c) = 0x15;
 *(undefined4 *)((int)pvVar2 + 0x20) = 0x18;
 *(undefined4 *)((int)pvVar2 + 0x24) = 0x1b;
 free(pvVar2);
 uVar3 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",uVar3);
 /* Unresolved local var: Point * p@[???]
 Unresolved local var: int result@[???] */
 pvVar2 = malloc(8);
 if (pvVar2 == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 free(pvVar2);
 uVar3 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar3);
 pvVar2 = malloc(8);
 if (pvVar2 == (void *)0x0) {
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff,0);
 }
 else {
 puVar5 = malloc(8);
 *(undefined4 **)((int)pvVar2 + 4) = puVar5;
 if (puVar5 == (undefined4 *)0x0) {
 free(pvVar2);
 uVar3 = 0xfffffffe;
 }
 else {
 *puVar5 = 0x14;
 puVar5[1] = 0;
 uVar3 = 0;
 }
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar3);
 free(*(void **)((int)pvVar2 + 4));
 free(pvVar2);
 }
 iVar9 = 0;
 piVar4 = (int *)0x0;
 piVar7 = (int *)0x0;
 do {
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: Node * temp@[???]
 Unresolved local var: int i@[???]
 Unresolved local var: Node * new_node@[???] */
 piVar6 = malloc(8);
 if (piVar6 == (int *)0x0) {
 while (piVar4 != (int *)0x0) {
 /* Unresolved local var: Node * temp@[???] */
 piVar7 = (int *)piVar4[1];
 free(piVar4);
 piVar4 = piVar7;
 }
 iVar9 = -1;
LAB_00011f75:
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar9);
 iVar9 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",iVar9);
 /* Unresolved local var: int * leak@[???] */
 puVar5 = malloc(0x14);
 if (puVar5 == (undefined4 *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *puVar5 = 0;
 puVar5[1] = 1;
 puVar5[2] = 2;
 puVar5[3] = 3;
 puVar5[4] = 4;
 uVar3 = 2;
 }
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar3);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 /* Unresolved local var: int result@[???]
 Unresolved local var: int * p@[???]
 Unresolved local var: int value@[???]
 Unresolved local var: int dangerous@[???] */
 puVar5 = malloc(4);
 if (puVar5 == (undefined4 *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(puVar5);
 uVar3 = *puVar5;
 }
 __printf_chk(1,&DAT_0001319c,uVar3);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 perror(&DAT_000131ac);
 }
 else {
 waitpid(__pid,&status,0);
 uVar8 = status & 0x7f;
 if (uVar8 == 0) {
 __printf_chk(1,&DAT_000133bc,(uint)status >> 8 & 0xff);
 }
 else if ('\x01' < (char)((char)uVar8 + '\x01')) {
 __printf_chk(1,&DAT_000133e4,uVar8);
 }
 }
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 *piVar6 = iVar9;
 piVar6[1] = 0;
 piVar1 = piVar6;
 if (piVar4 != (int *)0x0) {
 piVar7[1] = (int)piVar6;
 piVar1 = piVar4;
 }
 piVar4 = piVar1;
 if (iVar9 == 0x28) {
 iVar9 = 0;
 piVar7 = piVar4;
 do {
 iVar9 = iVar9 + *piVar7;
 piVar7 = (int *)piVar7[1];
 } while (piVar7 != (int *)0x0);
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar7 = (int *)piVar4[1];
 free(piVar4);
 piVar4 = piVar7;
 } while (piVar7 != (int *)0x0);
 goto LAB_00011f75;
 }
 iVar9 = iVar9 + 10;
 piVar7 = piVar6;
 } while( true );
}



/* Function: global_var_access @ 00012180 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 000121a0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter * 2;
}



/* Function: global_array_access @ 000121c0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

int global_array_access(int idx)

{
 if ((uint)idx < 10) {
 return global_array[idx];
 }
 return -1;
}



/* Function: static_local @ 000121f0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Unknown calling convention */

int static_local(int reset)

{
 int iVar1;
 
 iVar1 = 0;
 if (reset == 0) {
 iVar1 = counter_1 + 1;
 }
 counter_1 = iVar1;
 return iVar1;
}



/* Function: call_static_func @ 00012220 */

/* WARNING: Unknown calling convention */

int call_static_func(int x)

{
 return x * 2 + 1;
}



/* Function: access_extern_global @ 00012230 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00012250 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 00012270 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00012290 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 000122a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 000122b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 000122c0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 000122e0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00012300 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void set_global_callback(_func_int_int *f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00012320 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr != (_func_int_int *)0x0) {
 /* WARNING: Could not recover jumptable at 0x00012340. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*global_func_ptr)(x);
 return iVar1;
 }
 return -1;
}



/* Function: global_heap_store @ 00012350 */

int global_heap_store(int *p)

{
 if (p != (int *)0x0) {
 return *p;
 }
 return -1;
}



/* Function: static_complex_init @ 00012370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00012380 */

/* WARNING: Unknown calling convention */

int tls_access(int val)

{
 return val * 2;
}



/* Function: init_order_test @ 00012390 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 000123a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 int iVar1;
 
 puts(&DAT_00013428);
 global_counter = global_counter + 1;
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",global_counter);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 iVar1 = extern_function(5);
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",iVar1);
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",const_string[4] + 0x2a);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",10);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",0xf);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



/* Function: memop_memset @ 00012580 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int memop_memset(void *buf,size_t size,int fill_value)

{
 uint uVar1;
 
 if ((buf == (void *)0x0) || (size == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(buf,fill_value,size);
 uVar1 = (uint)*(byte *)buf;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 000125d0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int memop_memcpy(void *dst,void *src,size_t n)

{
 int iVar1;
 
 if ((src == (void *)0x0 || n == 0) || (dst == (void *)0x0)) {
 iVar1 = -1;
 }
 else {
 memcpy(dst,src,n);
 iVar1 = *(int *)((int)dst + ((n & 0xfffffffc) - 4));
 }
 return iVar1;
}



/* Function: memop_memmove @ 00012630 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int memop_memmove(void *buf,size_t n)

{
 int iVar1;
 
 if ((buf == (void *)0x0) || (n < 2)) {
 iVar1 = -1;
 }
 else {
 memmove((void *)((int)buf + 1),buf,n - 1);
 iVar1 = (int)*(char *)((int)buf + 1);
 }
 return iVar1;
}



/* Function: memop_memcmp @ 00012680 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 if ((p2 != (void *)0x0 && n != 0) && (p1 != (void *)0x0)) {
 /* Unresolved local var: int result@[???] */
 iVar1 = memcmp(p1,p2,n);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
 }
 return 0;
}



/* Function: memop_bzero @ 000126f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

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



/* Function: memop_bcopy @ 00012730 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */

int memop_bcopy(void *src,void *dst,size_t n)

{
 uint uVar1;
 
 if ((dst == (void *)0x0 || n == 0) || (src == (void *)0x0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memmove(dst,src,n);
 uVar1 = (uint)*(byte *)dst;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 00012790 */

int memop_unaligned_access(char *buf)

{
 if (buf != (char *)0x0) {
 return *(int *)(buf + 1);
 }
 return -1;
}



/* Function: memop_memory_barrier @ 000127b0 */

int memop_memory_barrier(int *flag)

{
 if (flag != (int *)0x0) {
 LOCK();
 UNLOCK();
 return *flag + *flag;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 000127d0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int flag;
 int cmp_a [3];
 int cmp_b [3];
 char zero_buf [10];
 char move_buf [11];
 char buffer [256];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013650);
 __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
 __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
 strncpy(move_buf,"HelloWorld",0xb);
 memmove(move_buf + 1,move_buf,9);
 __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 /* Unresolved local var: int result@[???] */
 iVar2 = memcmp(cmp_a,cmp_b,0xc);
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 __printf_chk(1,"MEMOP-L2-04: %d\n",iVar3);
 __printf_chk(1,"MEMOP-L2-05: %d\n",0);
 __printf_chk(1,"MEMOP-L2-06: %d\n",1);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 /* Unresolved local var: int local@[???] */
 LOCK();
 UNLOCK();
 __printf_chk(1,"MEMOP-L3-02: %d\n",10);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: __x86.get_pc_thunk.ax @ 0001298f */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_ax(void)

{
 return;
}



/* Forward declaration for extern_function */
extern int extern_function(int x);

/* Function: extern_function @ 000129a0 */
/* WARNING: Unknown calling convention */

int extern_function(int x)
{
 return x * 3;
}



/* Function: __stack_chk_fail_local @ 000129b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 71 */
