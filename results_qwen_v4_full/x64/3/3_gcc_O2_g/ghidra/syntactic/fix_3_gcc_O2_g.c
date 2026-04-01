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

/* Additional type definitions for decompiled code */
typedef unsigned char undefined1;
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned char undefined;
typedef int __pid_t;

/* Struct definitions */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* Function pointer type */
typedef int (*_func_int_int)(int);
typedef void (*code)(void);

/* Global variable declarations */
int global_counter = 0;
int global_array[10] = {0};
int counter_1 = 0;
extern int extern_global_var;
char const_string[] = "Hello World";
int file_scope_static = 0;
_func_int_int global_func_ptr = 0;
extern char UNK_00101504;
extern char UNK_001015d4;
char DAT_00103004[] = "Testing stack memory\n";
char DAT_001030e6[] = "Testing heap memory\n";
char DAT_001031a8[] = "fork error";
char DAT_001033c8[] = "child exited with status %d\n";
char DAT_001033f0[] = "child terminated abnormally\n";
char DAT_00103198[] = "value after free: %d\n";
char DAT_00103438[] = "Static/Global Memory Test\n";
char DAT_00103688[] = "Testing memory operations\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/3/3_gcc_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 00101220 */

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





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 00101340 */

int double_value(int x)

{
 return x * 2;
}



/* Function: local_vars @ 00101350 */

int local_vars(int x)

{
 return x * 2 + 10;
}



/* Function: local_array @ 00101360 */

int local_array(int n)

{
 long *plVar1;
 int iVar2;
 long in_FS_OFFSET;
 int arr [10];
 long local_10 [2];
 
 plVar1 = (long *)arr;
 iVar2 = 0;
 local_10[0] = *(long *)(in_FS_OFFSET + 0x28);
 do {
 /* Unresolved local var: int i@[???] */
 *(int *)plVar1 = iVar2;
 plVar1 = (long *)((long)plVar1 + 4);
 iVar2 = iVar2 + n;
 } while (plVar1 != local_10);
 if (local_10[0] == *(long *)(in_FS_OFFSET + 0x28)) {
 return arr[5];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: local_struct @ 001013b0 */

int local_struct(int x)

{
 return x * 3;
}



/* Function: address_of_local @ 001013c0 */

int address_of_local(int *out)

{
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 001013d0 */

int address_of_array(int *arr)

{
 return *arr * 2;
}



/* Function: large_stack_frame @ 001013e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 long lVar1;
 long lVar2;
 long in_FS_OFFSET;
 char large_buf [2048];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 lVar2 = 0;
 /* Unresolved local var: int i@[???] */
 do {
 large_buf[lVar2] = (char)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x800);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)large_buf[0x400];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: vla_stack @ 00101440 */

int vla_stack(int n)

{
 long lVar1;
 undefined1 *puVar2;
 int iVar3;
 ulong uVar4;
 undefined1 *puVar5;
 undefined1 *puVar7;
 long in_FS_OFFSET;
 undefined1 auStack_18 [8];
 long local_10;
 undefined1 *puVar6;
 
 puVar7 = auStack_18;
 puVar5 = auStack_18;
 puVar6 = auStack_18;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 if (n - 1U < 1000) {
 uVar4 = (long)n * 4 + 0xf;
 puVar2 = auStack_18;
 while (puVar6 != auStack_18 + -(uVar4 & 0xfffffffffffff000)) {
 puVar5 = puVar2 + -0x1000;
 *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
 puVar6 = puVar2 + -0x1000;
 puVar2 = puVar2 + -0x1000;
 }
 uVar4 = (ulong)((uint)uVar4 & 0xff0);
 lVar1 = -uVar4;
 puVar7 = puVar5 + lVar1;
 if (uVar4 != 0) {
 *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
 }
 /* Unresolved local var: int i@[???] */
 uVar4 = 0;
 do {
 *(int *)(puVar5 + uVar4 * 4 + lVar1) = (int)uVar4 * 2;
 uVar4 = uVar4 + 1;
 } while (uVar4 != (uint)n);
 iVar3 = *(int *)(puVar5 + (long)(n >> 1) * 4 + lVar1);
 }
 else {
 iVar3 = -1;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 *(undefined **)(puVar7 + -8) = &UNK_00101504;
 __stack_chk_fail();
 }
 return iVar3;
}



/* Function: alloca_usage @ 00101510 */

int alloca_usage(int n)

{
 long lVar1;
 undefined1 *puVar2;
 int iVar3;
 ulong uVar4;
 int *piVar5;
 undefined1 *puVar6;
 undefined1 *puVar8;
 long in_FS_OFFSET;
 undefined1 auStack_18 [8];
 long local_10;
 undefined1 *puVar7;
 
 puVar8 = auStack_18;
 puVar6 = auStack_18;
 puVar7 = auStack_18;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 if (n < 1) {
 iVar3 = -1;
 }
 else {
 uVar4 = (long)n * 4 + 0x17;
 puVar2 = auStack_18;
 while (puVar7 != auStack_18 + -(uVar4 & 0xfffffffffffff000)) {
 puVar6 = puVar2 + -0x1000;
 *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
 puVar7 = puVar2 + -0x1000;
 puVar2 = puVar2 + -0x1000;
 }
 uVar4 = (ulong)((uint)uVar4 & 0xff0);
 lVar1 = -uVar4;
 puVar8 = puVar6 + lVar1;
 if (uVar4 != 0) {
 *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
 }
 iVar3 = 0;
 /* Unresolved local var: int i@[???] */
 piVar5 = (int *)((ulong)(puVar6 + lVar1 + 0xf) & 0xfffffffffffffff0);
 do {
 *piVar5 = iVar3;
 iVar3 = iVar3 + 3;
 piVar5 = piVar5 + 1;
 } while (iVar3 != n * 3);
 iVar3 = ((int *)((ulong)(puVar6 + lVar1 + 0xf) & 0xfffffffffffffff0))[n >> 1];
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 *(undefined **)(puVar8 + -8) = &UNK_001015d4;
 __stack_chk_fail();
 }
 return iVar3;
}



/* Function: stack_alias @ 001015e0 */

int stack_alias(int *p1,int *p2)

{
 return 0x14;
}



/* Function: test_stack_memory @ 001015f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 int iVar1;
 
 puts(&DAT_00103004);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",10);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 iVar1 = large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",iVar1);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",10);
 iVar1 = alloca_usage(10);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",iVar1);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 001016f0 */

int heap_basic(int n)

{
 void *__ptr;
 ulong uVar1;
 ulong uVar2;
 int iVar3;
 
 uVar2 = (ulong)n;
 __ptr = malloc(uVar2 * 4);
 if (__ptr == (void *)0x0) {
 iVar3 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar1 = 0;
 do {
 *(int *)((long)__ptr + uVar1 * 4) = (int)uVar1 * 2;
 uVar1 = uVar1 + 1;
 } while (uVar1 != uVar2);
 }
 iVar3 = *(int *)((long)__ptr + (long)((int)(((uint)(uVar2 >> 0x1f) & 1) + n) >> 1) * 4);
 free(__ptr);
 }
 return iVar3;
}



/* Function: heap_calloc @ 00101760 */

int heap_calloc(int n)

{
 int *__ptr;
 int *piVar1;
 int iVar2;
 
 __ptr = calloc((long)n,4);
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
 } while (piVar1 != __ptr + (uint)n);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 001017c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 undefined8 *__ptr;
 void *__ptr_00;
 int iVar1;
 
 __ptr = malloc(0x14);
 if (__ptr == (undefined8 *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *__ptr = 0x200000001;
 __ptr[1] = 0x400000003;
 *(undefined4 *)(__ptr + 2) = 5;
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 iVar1 = -2;
 free(__ptr);
 }
 else {
 iVar1 = 0x32;
 if (*(int *)((long)__ptr_00 + 8) != 3) {
 iVar1 = -3;
 }
 free(__ptr_00);
 }
 }
 return iVar1;
}



/* Function: heap_array @ 00101850 */

int heap_array(int n)

{
 int *__ptr;
 int *piVar1;
 int iVar2;
 
 __ptr = malloc((long)n << 2);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 piVar1 = __ptr;
 do {
 *piVar1 = iVar2;
 iVar2 = iVar2 + 3;
 piVar1 = piVar1 + 1;
 } while (iVar2 != n * 3);
 }
 iVar2 = __ptr[(int)(((uint)((ulong)(long)n >> 0x1f) & 1) + n) >> 1];
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_struct @ 001018c0 */

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



/* Function: heap_nested @ 00101900 */

int heap_nested(Node **head)

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



/* Function: linked_list_heap @ 00101970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *__ptr;
 int iVar4;
 
 /* Unresolved local var: int i@[???] */
 iVar4 = 0;
 piVar1 = (int *)0x0;
 piVar3 = (int *)0x0;
 do {
 /* Unresolved local var: Node * new_node@[???] */
 piVar2 = malloc(0x10);
 if (piVar2 == (int *)0x0) {
 while (piVar3 != (int *)0x0) {
 /* Unresolved local var: Node * temp@[???] */
 piVar1 = *(int **)(piVar3 + 2);
 free(piVar3);
 piVar3 = piVar1;
 }
 return -1;
 }
 *piVar2 = iVar4;
 piVar2[2] = 0;
 piVar2[3] = 0;
 __ptr = piVar2;
 if (piVar3 != (int *)0x0) {
 *(int **)(piVar1 + 2) = piVar2;
 __ptr = piVar3;
 }
 iVar4 = iVar4 + 10;
 piVar1 = piVar2;
 piVar3 = __ptr;
 } while (iVar4 != 0x32);
 iVar4 = 0;
 do {
 iVar4 = iVar4 + *piVar3;
 piVar3 = *(int **)(piVar3 + 2);
 } while (piVar3 != (int *)0x0);
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar3 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 return iVar4;
}



/* Function: create_tree_node @ 00101a10 */

TreeNode * create_tree_node(int data)

{
 TreeNode *pTVar1;
 
 pTVar1 = malloc(0x18);
 if (pTVar1 != (TreeNode *)0x0) {
 pTVar1->data = data;
 pTVar1->left = (TreeNode *)0x0;
 pTVar1->right = (TreeNode *)0x0;
 }
 return pTVar1;
}



/* Function: tree_heap_traversal @ 00101a40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 int iVar1;
 void *__ptr;
 void *pvVar2;
 void *__ptr_00;
 
 /* Unresolved local var: TreeNode * node@[???] */
 __ptr = malloc(0x18);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: TreeNode * node@[???] */
 pvVar2 = malloc(0x18);
 /* Unresolved local var: TreeNode * node@[???] */
 if (pvVar2 == (void *)0x0) {
 pvVar2 = malloc(0x18);
 if (pvVar2 != (void *)0x0) {
 free(pvVar2);
 }
 }
 else {
 __ptr_00 = malloc(0x18);
 if (__ptr_00 != (void *)0x0) {
 free(pvVar2);
 free(__ptr_00);
 free(__ptr);
 return 0x3c;
 }
 free(pvVar2);
 }
 free(__ptr);
 iVar1 = -2;
 }
 return iVar1;
}



/* Function: memory_leak @ 00101ae0 */

int memory_leak(int n)

{
 int iVar1;
 void *pvVar2;
 ulong uVar3;
 ulong uVar4;
 
 uVar4 = (ulong)n;
 pvVar2 = malloc(uVar4 * 4);
 if (pvVar2 == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar3 = 0;
 do {
 *(int *)((long)pvVar2 + uVar3 * 4) = (int)uVar3;
 uVar3 = uVar3 + 1;
 } while (uVar3 != uVar4);
 }
 iVar1 = *(int *)((long)pvVar2 + (long)((int)(((uint)(uVar4 >> 0x1f) & 1) + n) >> 1) * 4);
 }
 return iVar1;
}



/* Function: dangling_pointer @ 00101b40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 int *__ptr;
 
 __ptr = malloc(4);
 if (__ptr != (int *)0x0) {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(__ptr);
 return *__ptr;
 }
 return -1;
}



/* Function: double_free @ 00101b80 */

int double_free(int *p)

{
 void *__ptr;
 
 if (p != (int *)0x0) {
 return *p;
 }
 /* Unresolved local var: int * temp@[???] */
 __ptr = malloc(4);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 free(__ptr);
 return -2;
 }
 return -1;
}



/* Function: heap_overflow @ 00101bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 int *__ptr;
 int *piVar1;
 int iVar2;
 
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 piVar1 = __ptr;
 do {
 /* Unresolved local var: int i@[???] */
 *piVar1 = iVar2;
 iVar2 = iVar2 + 100;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 0x44c);
 iVar2 = *__ptr;
 free(__ptr);
 }
 return iVar2;
}



/* Function: test_heap_memory @ 00101c10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 __pid_t __pid;
 void *pvVar1;
 int *piVar2;
 undefined4 *puVar3;
 undefined8 *puVar4;
 int *piVar5;
 long lVar6;
 undefined8 uVar7;
 undefined4 uVar8;
 int iVar9;
 long in_FS_OFFSET;
 int status;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001030e6);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 pvVar1 = malloc(0x28);
 if (pvVar1 == (void *)0x0) {
 uVar8 = 0xffffffff;
 }
 else {
 lVar6 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 *(int *)((long)pvVar1 + lVar6 * 4) = (int)lVar6 * 2;
 lVar6 = lVar6 + 1;
 } while (lVar6 != 10);
 uVar8 = *(undefined4 *)((long)pvVar1 + 0x14);
 free(pvVar1);
 }
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar8);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 piVar2 = calloc(5,4);
 if (piVar2 == (int *)0x0) {
 iVar9 = -1;
 }
 else {
 iVar9 = 0;
 piVar5 = piVar2;
 do {
 /* Unresolved local var: int i@[???] */
 iVar9 = iVar9 + *piVar5;
 piVar5 = piVar5 + 1;
 } while (piVar2 + 5 != piVar5);
 free(piVar2);
 }
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar9);
 iVar9 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",iVar9);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 piVar2 = malloc(0x28);
 if (piVar2 == (int *)0x0) {
 iVar9 = -1;
 }
 else {
 iVar9 = 0;
 piVar5 = piVar2;
 do {
 /* Unresolved local var: int i@[???] */
 *piVar5 = iVar9;
 iVar9 = iVar9 + 3;
 piVar5 = piVar5 + 1;
 } while (iVar9 != 0x1e);
 iVar9 = piVar2[5];
 free(piVar2);
 }
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",iVar9);
 /* Unresolved local var: Point * p@[???]
 Unresolved local var: int result@[???] */
 pvVar1 = malloc(8);
 if (pvVar1 == (void *)0x0) {
 uVar7 = 0xffffffff;
 }
 else {
 free(pvVar1);
 uVar7 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar7);
 pvVar1 = malloc(0x10);
 if (pvVar1 == (void *)0x0) {
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 puVar3 = malloc(0x10);
 *(undefined4 **)((long)pvVar1 + 8) = puVar3;
 if (puVar3 == (undefined4 *)0x0) {
 free(pvVar1);
 uVar7 = 0xfffffffe;
 }
 else {
 *puVar3 = 0x14;
 uVar7 = 0;
 *(undefined8 *)(puVar3 + 2) = 0;
 }
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar7);
 free(*(void **)((long)pvVar1 + 8));
 free(pvVar1);
 }
 iVar9 = linked_list_heap();
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar9);
 iVar9 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",iVar9);
 /* Unresolved local var: int * leak@[???] */
 puVar4 = malloc(0x14);
 if (puVar4 == (undefined8 *)0x0) {
 uVar7 = 0xffffffff;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *(undefined4 *)(puVar4 + 2) = 4;
 uVar7 = 2;
 *puVar4 = 0x100000000;
 puVar4[1] = 0x300000002;
 }
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar7);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 perror(&DAT_001031a8);
 return;
 }
 }
 else {
 waitpid(__pid,&status,0);
 if ((status & 0x7fU) == 0) {
 __printf_chk(1,&DAT_001033c8,(uint)status >> 8 & 0xff);
 }
 else if ('\x01' < (char)((char)(status & 0x7fU) + '\x01')) {
 __printf_chk(1,&DAT_001033f0);
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 /* Unresolved local var: int result@[???]
 Unresolved local var: int * p@[???]
 Unresolved local var: int value@[???]
 Unresolved local var: int dangerous@[???] */
 puVar3 = malloc(4);
 if (puVar3 == (undefined4 *)0x0) {
 uVar8 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(puVar3);
 uVar8 = *puVar3;
 }
 __printf_chk(1,&DAT_00103198,uVar8);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 00101fe0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00102000 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter * 2;
}



/* Function: global_array_access @ 00102010 */

int global_array_access(int idx)

{
 if ((uint)idx < 10) {
 return global_array[idx];
 }
 return -1;
}



/* Function: static_local @ 00102040 */

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



/* Function: call_static_func @ 00102060 */

int call_static_func(int x)

{
 return x * 2 + 1;
}



/* Function: access_extern_global @ 00102070 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00102080 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 00102090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 001020b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 001020c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 001020d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 001020e0 */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 001020f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00102100 */

void set_global_callback(_func_int_int *f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00102110 */

int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr != (_func_int_int *)0x0) {
 /* WARNING: Could not recover jumptable at 0x00102120. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*global_func_ptr)(x);
 return iVar1;
 }
 return -1;
}



/* Function: global_heap_store @ 00102130 */

int global_heap_store(int *p)

{
 if (p != (int *)0x0) {
 return *p;
 }
 return -1;
}



/* Function: static_complex_init @ 00102150 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00102160 */

int tls_access(int val)

{
 return val * 2;
}



/* Function: init_order_test @ 00102170 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 00102180 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 int iVar1;
 
 puts(&DAT_00103438);
 global_counter = global_counter + 1;
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n");
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n");
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



/* Function: memop_memset @ 00102390 */

int memop_memset(void *buf,size_t size,int fill_value)

{
 byte *pbVar1;
 
 if ((buf != (void *)0x0) && (size != 0)) {
 pbVar1 = memset(buf,fill_value,size);
 return (int)*pbVar1;
 }
 return -1;
}



/* Function: memop_memcpy @ 001023d0 */

int memop_memcpy(void *dst,void *src,size_t n)

{
 void *pvVar1;
 
 if ((src != (void *)0x0 && n != 0) && (dst != (void *)0x0)) {
 pvVar1 = memcpy(dst,src,n);
 return *(int *)((long)pvVar1 + ((n & 0xfffffffffffffffc) - 4));
 }
 return -1;
}



/* Function: memop_memmove @ 00102410 */

int memop_memmove(void *buf,size_t n)

{
 if ((buf != (void *)0x0) && (1 < n)) {
 memmove((void *)((long)buf + 1),buf,n - 1);
 return (int)*(char *)((long)buf + 1);
 }
 return -1;
}



/* Function: memop_memcmp @ 00102450 */

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



/* Function: memop_bzero @ 001024a0 */

int memop_bzero(void *buf,size_t n)

{
 byte *pbVar1;
 
 if (buf != (void *)0x0) {
 pbVar1 = memset(buf,0,n);
 return (int)*pbVar1;
 }
 return -1;
}



/* Function: memop_bcopy @ 001024d0 */

int memop_bcopy(void *src,void *dst,size_t n)

{
 byte *pbVar1;
 
 if ((dst != (void *)0x0 && n != 0) && (src != (void *)0x0)) {
 pbVar1 = memmove(dst,src,n);
 return (int)*pbVar1;
 }
 return -1;
}



/* Function: memop_unaligned_access @ 00102510 */

int memop_unaligned_access(char *buf)

{
 if (buf != (char *)0x0) {
 return *(int *)(buf + 1);
 }
 return -1;
}



/* Function: LOCK */
void LOCK(void)
{
 return;
}

/* Function: UNLOCK */
void UNLOCK(void)
{
 return;
}

/* Function: memop_memory_barrier @ 00102530 */

int memop_memory_barrier(int *flag)

{
 if (flag != (int *)0x0) {
 LOCK();
 UNLOCK();
 return *flag + *flag;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 00102550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 int flag;
 int cmp_a [3];
 int cmp_b [3];
 char zero_buf [10];
 char move_buf [11];
 char buffer [256];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103688);
 __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
 __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
  strncpy(move_buf,"HelloWorld",0xb);
 memmove(move_buf + 1,move_buf,9);
 __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
 /* Unresolved local var: int result@[???] */
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 iVar3 = memcmp(cmp_a,cmp_b,0xc);
 iVar2 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar2 = 1;
 }
 __printf_chk(1,"MEMOP-L2-04: %d\n",iVar2);
 __printf_chk(1,"MEMOP-L2-05: %d\n",0);
 __printf_chk(1,"MEMOP-L2-06: %d\n",1);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 /* Unresolved local var: int local@[???] */
 LOCK();
 UNLOCK();
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,"MEMOP-L3-02: %d\n",10);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: extern_function - declared extern, defined elsewhere */
extern int extern_function(int x);




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 63 */
