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
typedef unsigned int uint;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined3;
typedef unsigned long undefined8;
typedef unsigned char undefined;
typedef unsigned char byte;
typedef int pid_t;

/* Struct definitions */
typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

typedef struct Point {
    int x;
    int y;
} Point;

/* Function pointer type */
typedef int (*_func_int_int)(int);

/* Global variables declarations */
_func_int_int *global_func_ptr;
int global_counter;
int global_array[10];
int file_scope_static;
int *global_heap_ptr;
int extern_global_var;
int bss_var;
char bss_buffer[16];
Point global_point;
int complex_init[10];

/* External function declarations */
void LOCK(void);
void UNLOCK(void);
static int extern_function(int x);

/* Stub definitions for LOCK/UNLOCK */
void LOCK(void) { }
void UNLOCK(void) { }

/* String literals from binary */
const char DAT_00013008[] = "Stack Memory Tests\n";
const char DAT_00013158[] = "Heap Memory Tests\n";
const char DAT_000132b4[] = "%d (dangling pointer after free)\n";
const char DAT_000132c4[] = "Child exited with status: %d\n";
const char DAT_000132ec[] = "Child killed by signal: %d\n";
const char DAT_0001332d[] = "fork";
const char DAT_00013348[] = "Static/Global Tests\n";
const char DAT_000135c4[] = "Memory Operation Tests\n";

/* Struct definitions (already defined above) */

/* Code pointer type */
typedef void (*code)(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/3/3_gcc_O0_g
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




/* Function: __i686.get_pc_thunk.bx @ 0001127c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011280 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000113b9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000113bd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: double_value @ 000113c1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int double_value(int x)

{
 return x * 2;
}



/* Function: local_vars @ 000113d9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int local_vars(int x)

{
 int a;
 int b;
 int c;
 
 return x * 2 + 10;
}



/* Function: local_array @ 00011409 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int local_array(int n)

{
 int iVar1;
 int in_GS_OFFSET;
 int i;
 int arr [10];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 for (i = 0; i < 10; i = i + 1) {
 arr[i] = i * n;
 }
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 arr[5] = __stack_chk_fail_local();
 }
 return arr[5];
}



/* Function: local_struct @ 00011461 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int local_struct(int x)

{
 Point p;
 
 return x * 3;
}



/* Function: address_of_local @ 0001148d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int address_of_local(int *out)

{
 int local;
 
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 000114b5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int address_of_array(int *arr)

{
 int *p1;
 int *p2;
 
 return *arr + *arr;
}



/* Function: large_stack_frame @ 000114e3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int i;
 char large_buf [2048];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 for (i = 0; i < 0x800; i = i + 1) {
 large_buf[i] = (char)i;
 }
 iVar2 = (int)large_buf[0x400];
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: vla_stack @ 00011559 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int vla_stack(int n)

{
 int iVar1;
 int iVar2;
 uint uVar3;
 int *piVar4;
 int in_GS_OFFSET;
 int i;
 int local_18;
 int *vla;
 int local_10;
 
 piVar4 = &i;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 if ((n < 1) || (1000 < n)) {
 iVar2 = -1;
 }
 else {
 local_18 = n + -1;
 uVar3 = ((n * 4 + 0xfU) / 0x10) * 0x10;
 for (; piVar4 != (int *)((int)&i - (uVar3 & 0xfffff000));
 piVar4 = (int *)((int)piVar4 + -0x1000)) {
 *(undefined4 *)((int)piVar4 + -4) = *(undefined4 *)((int)piVar4 + -4);
 }
 iVar1 = -(uVar3 & 0xfff);
 if ((uVar3 & 0xfff) != 0) {
 *(undefined4 *)((int)piVar4 + ((uVar3 & 0xfff) - 4) + iVar1) =
 *(undefined4 *)((int)piVar4 + ((uVar3 & 0xfff) - 4) + iVar1);
 }
 for (i = 0; i < n; i = i + 1) {
 *(int *)((int)piVar4 + i * 4 + iVar1) = i * 2;
 }
 iVar2 = *(int *)((int)piVar4 + (n / 2) * 4 + iVar1);
 vla = (undefined1 *)((int)piVar4 + iVar1);
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: alloca_usage @ 00011660 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int alloca_usage(int n)

{
 int iVar1;
 uint uVar2;
 undefined1 *puVar3;
 undefined1 *puVar4;
 int in_GS_OFFSET;
 undefined1 auStack_1c [4];
 int i;
 int *arr;
 int local_10;
 
 puVar3 = auStack_1c;
 puVar4 = auStack_1c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 if (n < 1) {
 iVar1 = -1;
 }
 else {
 uVar2 = ((n * 4 + 0x1bU) / 0x10) * 0x10;
 for (; puVar3 != auStack_1c + -(uVar2 & 0xfffff000); puVar3 = puVar3 + -0x1000) {
 *(undefined4 *)(puVar3 + -4) = *(undefined4 *)(puVar3 + -4);
 }
 iVar1 = -(uVar2 & 0xfff);
 puVar4 = puVar3 + iVar1;
 if ((uVar2 & 0xfff) != 0) {
 *(undefined4 *)(puVar3 + ((uVar2 & 0xfff) - 4) + iVar1) =
 *(undefined4 *)(puVar3 + ((uVar2 & 0xfff) - 4) + iVar1);
 }
 arr = (int *)((uint)(puVar3 + iVar1 + 0xf) & 0xfffffff0);
 for (i = 0; i < n; i = i + 1) {
 arr[i] = i * 3;
 }
 iVar1 = arr[n / 2];
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 *(undefined4 *)(puVar4 + -4) = 0x1175d;
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: stack_alias @ 0001175f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int stack_alias(int *p1,int *p2)

{
 int iVar1;
 int in_GS_OFFSET;
 int *p2_local;
 int *p1_local;
 int local;
 
 if (p1 == p2) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0x14;
 }
 if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_stack_memory @ 000117d3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int in_GS_OFFSET;
 byte bVar4;
 int out;
 int alias_val;
 int arr5 [10];
 
 bVar4 = 0;
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013008);
 iVar2 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",iVar2);
 iVar2 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n",iVar2);
 iVar2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",iVar2);
 iVar2 = address_of_local(&out);
 printf("MEM-L1-04 (address_of_local): %d\n",iVar2);
 piVar3 = arr5;
 for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar3 = 0;
 piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
 }
 arr5[0] = 1;
 arr5[1] = 2;
 arr5[2] = 3;
 iVar2 = address_of_array(arr5);
 printf("MEM-L1-05 (address_of_array): %d\n",iVar2);
 iVar2 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",iVar2);
 iVar2 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",iVar2);
 iVar2 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",iVar2);
 alias_val = 0;
 iVar2 = stack_alias(&alias_val,&alias_val);
 printf("MEM-L2-04 (stack_alias): %d\n",iVar2);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: heap_basic @ 0001196f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int heap_basic(int n)

{
 void *__ptr;
 int iVar1;
 int i;
 int *arr;
 int result;
 
 __ptr = malloc(n << 2);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 for (i = 0; i < n; i = i + 1) {
 *(int *)((int)__ptr + i * 4) = i * 2;
 }
 iVar1 = *(int *)((int)__ptr + (n / 2) * 4);
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_calloc @ 00011a05 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int heap_calloc(int n)

{
 void *__ptr;
 int sum;
 int i;
 int *arr;
 
 __ptr = calloc(n,4);
 if (__ptr == (void *)0x0) {
 sum = -1;
 }
 else {
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + *(int *)((int)__ptr + i * 4);
 }
 free(__ptr);
 }
 return sum;
}



/* Function: heap_realloc @ 00011a82 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 void *__ptr;
 int iVar1;
 void *__ptr_00;
 int i;
 int i_1;
 int *p;
 int old_val;
 int *new_p;
 int result;
 
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 for (i = 0; i < 5; i = i + 1) {
 *(int *)((int)__ptr + i * 4) = i + 1;
 }
 iVar1 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 iVar1 = -2;
 }
 else {
 for (i_1 = 5; i_1 < 10; i_1 = i_1 + 1) {
 *(int *)(i_1 * 4 + (int)__ptr_00) = i_1 * 10;
 }
 if (iVar1 == *(int *)((int)__ptr_00 + 8)) {
 iVar1 = *(int *)((int)__ptr_00 + 0x14);
 }
 else {
 iVar1 = -3;
 }
 free(__ptr_00);
 }
 }
 return iVar1;
}



/* Function: heap_array @ 00011b83 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int heap_array(int n)

{
 void *__ptr;
 int iVar1;
 int i;
 int *arr;
 int result;
 
 __ptr = malloc(n << 2);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 for (i = 0; i < n; i = i + 1) {
 *(int *)(i * 4 + (int)__ptr) = i * 3;
 }
 iVar1 = *(int *)((int)__ptr + (n / 2) * 4);
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_struct @ 00011c1e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int heap_struct(int x)

{
 int *__ptr;
 int iVar1;
 Point *p;
 int result;
 
 __ptr = malloc(8);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 *__ptr = x;
 __ptr[1] = x * 2;
 iVar1 = __ptr[1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_nested @ 00011c8b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int heap_nested(Node **head)

{
 Node *pNVar1;
 int iVar2;
 Node *pNVar3;
 
 pNVar1 = malloc(8);
 *head = pNVar1;
 if (*head == (Node *)0x0) {
 iVar2 = -1;
 }
 else {
 (*head)->data = 10;
 pNVar1 = *head;
 pNVar3 = malloc(8);
 pNVar1->next = pNVar3;
 if ((*head)->next == (Node *)0x0) {
 free(*head);
 iVar2 = -2;
 }
 else {
 (*head)->next->data = 0x14;
 (*head)->next->next = (Node *)0x0;
 iVar2 = 0;
 }
 }
 return iVar2;
}



/* Function: linked_list_heap @ 00011d30 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 Node *pNVar1;
 Node *pNVar2;
 Node *head;
 Node *current;
 int i;
 int sum;
 Node *temp;
 Node *temp_2;
 Node *new_node;
 Node *temp_1;
 
 head = (Node *)0x0;
 current = (Node *)0x0;
 i = 0;
 while( 1 ) {
 if (4 < i) {
 sum = 0;
 for (temp = head; temp != (Node *)0x0; temp = temp->next) {
 sum = sum + temp->data;
 }
 while (head != (Node *)0x0) {
 pNVar2 = head->next;
 free(head);
 head = pNVar2;
 }
 return sum;
 }
 pNVar2 = malloc(8);
 if (pNVar2 == (Node *)0x0) break;
 pNVar2->data = i * 10;
 pNVar2->next = (Node *)0x0;
 pNVar1 = pNVar2;
 if (head != (Node *)0x0) {
 current->next = pNVar2;
 pNVar1 = head;
 }
 head = pNVar1;
 i = i + 1;
 current = pNVar2;
 }
 while (head != (Node *)0x0) {
 pNVar2 = head->next;
 free(head);
 head = pNVar2;
 }
 return -1;
}



/* Function: create_tree_node @ 00011e46 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

TreeNode * create_tree_node(int data)

{
 TreeNode *pTVar1;
 TreeNode *node;
 
 pTVar1 = malloc(0xc);
 if (pTVar1 != (TreeNode *)0x0) {
 pTVar1->data = data;
 pTVar1->left = (TreeNode *)0x0;
 pTVar1->right = (TreeNode *)0x0;
 }
 return pTVar1;
}



/* Function: tree_heap_traversal @ 00011e97 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 TreeNode *__ptr;
 int iVar1;
 TreeNode *pTVar2;
 TreeNode *root;
 int sum;
 
 __ptr = create_tree_node(10);
 if (__ptr == (TreeNode *)0x0) {
 iVar1 = -1;
 }
 else {
 pTVar2 = create_tree_node(0x14);
 __ptr->left = pTVar2;
 pTVar2 = create_tree_node(0x1e);
 __ptr->right = pTVar2;
 if ((__ptr->left == (TreeNode *)0x0) || (__ptr->right == (TreeNode *)0x0)) {
 if (__ptr->left != (TreeNode *)0x0) {
 free(__ptr->left);
 }
 if (__ptr->right != (TreeNode *)0x0) {
 free(__ptr->right);
 }
 free(__ptr);
 iVar1 = -2;
 }
 else {
 iVar1 = __ptr->right->data + __ptr->data + __ptr->left->data;
 free(__ptr->left);
 free(__ptr->right);
 free(__ptr);
 }
 }
 return iVar1;
}



/* Function: memory_leak @ 00011faa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int memory_leak(int n)

{
 void *pvVar1;
 int iVar2;
 int i;
 int *leak;
 
 pvVar1 = malloc(n << 2);
 if (pvVar1 == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 for (i = 0; i < n; i = i + 1) {
 *(int *)(i * 4 + (int)pvVar1) = i;
 }
 iVar2 = *(int *)((int)pvVar1 + (n / 2) * 4);
 }
 return iVar2;
}



/* Function: dangling_pointer @ 0001202b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 int *__ptr;
 int iVar1;
 int *p;
 int value;
 int dangerous;
 
 __ptr = malloc(4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 *__ptr = 0x2a;
 printf("value before free: %d\n",*__ptr);
 free(__ptr);
 iVar1 = *__ptr;
 }
 return iVar1;
}



/* Function: double_free @ 000120a2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int double_free(int *p)

{
 undefined4 *__ptr;
 int iVar1;
 int *temp;
 
 if (p == (int *)0x0) {
 __ptr = malloc(4);
 if (__ptr == (undefined4 *)0x0) {
 iVar1 = -1;
 }
 else {
 *__ptr = 10;
 free(__ptr);
 free(__ptr);
 iVar1 = -2;
 }
 }
 else {
 iVar1 = *p;
 }
 return iVar1;
}



/* Function: heap_overflow @ 00012111 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 int *__ptr;
 int iVar1;
 int i;
 int *arr;
 int result;
 
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 for (i = 0; i < 0xb; i = i + 1) {
 __ptr[i] = i * 100;
 }
 iVar1 = *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: test_heap_memory @ 0001218c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 int iVar1;
 int in_GS_OFFSET;
 Node *head;
 int status;
 pid_t pid;
 int result;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013158);
 iVar1 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",iVar1);
 iVar1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n",iVar1);
 iVar1 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n",iVar1);
 iVar1 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n",iVar1);
 iVar1 = heap_struct(5);
 printf("HEAP-L2-05 (heap_struct): %d\n",iVar1);
 head = (Node *)0x0;
 iVar1 = heap_nested(&head);
 printf("HEAP-L2-06 (heap_nested): %d\n",iVar1);
 if (head != (Node *)0x0) {
 free(head->next);
 free(head);
 }
 iVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",iVar1);
 iVar1 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",iVar1);
 iVar1 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n",iVar1);
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (pid == 0) {
 result = dangling_pointer();
 printf(&DAT_000132b4,result);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (pid < 1) {
 perror(&DAT_0001332d);
 }
 else {
 waitpid(pid,&status,0);
 if ((status & 0x7fU) == 0) {
 printf(&DAT_000132c4,status >> 8 & 0xff);
 }
 else if ('\0' < (char)(((byte)status & 0x7f) + 1) >> 1) {
 printf(&DAT_000132ec,status & 0x7f);
 }
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: global_var_access @ 000123d4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 000123fc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter * 2;
}



/* Function: global_array_access @ 00012417 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int global_array_access(int idx)

{
 int iVar1;
 
 if ((idx < 0) || (9 < idx)) {
 iVar1 = -1;
 }
 else {
 iVar1 = global_array[idx];
 }
 return iVar1;
}



/* Static variable for static_local function */
static int static_local_counter;

/* Function: static_local @ 00012447 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int static_local(int reset)

{
 if (reset == 0) {
 static_local_counter = static_local_counter + 1;
 }
 else {
 static_local_counter = 0;
 }
 return static_local_counter;
}



/* Function: static_helper @ 00012486 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int static_helper(int x)

{
 return x * 2;
}



/* Function: call_static_func @ 0001249e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int call_static_func(int x)

{
 int iVar1;
 
 iVar1 = static_helper(x);
 return iVar1 + 1;
}



/* Function: access_extern_global @ 000124bf */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 000124dd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* String literal for read_const_data */
const char const_string[] = "HelloWorld";

/* Function: read_const_data @ 00012506 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 0001252f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return bss_var;
}



/* Function: access_bss_buffer @ 00012548 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return (int)bss_buffer[0];
}



/* Function: global_struct_access @ 00012565 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return global_point.y + global_point.x;
}



/* Function: set_file_static @ 00012586 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 000125a3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 000125bc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void set_global_callback(_func_int_int *f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 000125d9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

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



/* Function: global_heap_store @ 00012611 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int global_heap_store(int *p)

{
 int iVar1;
 
 global_heap_ptr = p;
 if (p == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = *p;
 }
 return iVar1;
}



/* Function: static_complex_init @ 00012646 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return complex_init[4] + complex_init[2] + complex_init[0];
}



/* Function: tls_access @ 0001266f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int tls_access(int val)

{
 int in_GS_OFFSET;
 
 *(int *)(in_GS_OFFSET + -4) = val;
 return *(int *)(in_GS_OFFSET + -4) * 2;
}



/* Static variable for init_depends_on function */
static int init_depends_on_static_depends;

/* Function: init_depends_on @ 00012693 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int init_depends_on(int *p)

{
 if (p != (int *)0x0) {
 init_depends_on_static_depends = *p;
 }
 return init_depends_on_static_depends;
}



/* Function: init_order_test @ 000126bd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int external_val;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 external_val = 0x14;
 iVar1 = init_depends_on(&external_val);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_static_global @ 00012702 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int heap_val;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013348);
 iVar1 = global_var_access();
 printf("STM-L1-01 (global_var_access): %d\n",iVar1);
 iVar1 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n",iVar1);
 iVar1 = global_array_access(5);
 printf("STM-L1-02 (global_array_access): %d\n",iVar1);
 static_local(1);
 iVar1 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",iVar1);
 iVar1 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n",iVar1);
 iVar1 = call_static_func(5);
 printf("STM-L1-04 (call_static_func): %d\n",iVar1);
 iVar1 = access_extern_global();
 printf("STM-L2-01 (access_extern_global): %d\n",iVar1);
 iVar1 = call_extern_func();
 printf("STM-L2-02 (call_extern_func): %d\n",iVar1);
 iVar1 = read_const_data();
 printf("STM-L2-03 (read_const_data): %d\n",iVar1);
 iVar1 = access_bss_var();
 printf("STM-L2-04 (access_bss_var): %d\n",iVar1);
 iVar1 = access_bss_buffer();
 printf("STM-L2-04 (access_bss_buffer): %d\n",iVar1);
 iVar1 = global_struct_access();
 printf("STM-L2-05 (global_struct_access): %d\n",iVar1);
 set_file_static(0x32);
 iVar1 = get_file_static();
 printf("STM-L2-06 (file_static): %d\n",iVar1);
 set_global_callback(double_value);
 iVar1 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n",iVar1);
 heap_val = 100;
 iVar1 = global_heap_store(&heap_val);
 printf("STM-L2-08 (global_heap_store): %d\n",iVar1);
 iVar1 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n",iVar1);
 iVar1 = tls_access(10);
 printf("STM-L3-01 (tls_access): %d\n",iVar1);
 iVar1 = init_order_test();
 printf("STM-L3-02 (init_order_test): %d\n",iVar1);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: memop_memset @ 00012969 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: memop_memcpy @ 000129b5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int memop_memcpy(void *dst,void *src,size_t n)

{
 int iVar1;
 
 if (((dst == (void *)0x0) || (src == (void *)0x0)) || (n == 0)) {
 iVar1 = -1;
 }
 else {
 memcpy(dst,src,n);
 iVar1 = *(int *)((int)dst + ((n & 0xfffffffc) - 4));
 }
 return iVar1;
}



/* Function: memop_memmove @ 00012a0e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: memop_memcmp @ 00012a65 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int result;
 
 if (((p1 == (void *)0x0) || (p2 == (void *)0x0)) || (n == 0)) {
 iVar1 = 0;
 }
 else {
 iVar1 = memcmp(p1,p2,n);
 if (iVar1 < 1) {
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 }
 }
 else {
 iVar1 = 1;
 }
 }
 return iVar1;
}



/* Function: memop_bzero @ 00012ad0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: memop_bcopy @ 00012b19 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int memop_bcopy(void *src,void *dst,size_t n)

{
 uint uVar1;
 
 if (((src == (void *)0x0) || (dst == (void *)0x0)) || (n == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memmove(dst,src,n);
 uVar1 = (uint)*(byte *)dst;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 00012b6b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int memop_unaligned_access(char *buf)

{
 int iVar1;
 int in_GS_OFFSET;
 char *buf_local;
 int value;
 
 if (buf == (char *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = *(int *)(buf + 1);
 }
 if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: memop_memory_barrier @ 00012bbe */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int memop_memory_barrier(int *flag)

{
 int iVar1;
 int local;
 
 if (flag == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 LOCK();
 UNLOCK();
 iVar1 = *flag + *flag;
 }
 return iVar1;
}



/* Function: test_memory_op_functions @ 00012bf8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int flag;
 int cmp_a [3];
 int cmp_b [3];
 int int_src [5];
 int int_dst [5];
 char bcopy_src [4];
 char bcopy_dst [4];
 char unalign_buf [8];
 char zero_buf [10];
 char move_buf [11];
 char buffer [256];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_000135c4);
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
 printf("MEMOP-L2-01: %d\n",iVar2);
 iVar2 = memop_memcpy(int_dst,int_src,0x14);
 printf("MEMOP-L2-02: %d\n",iVar2);
 strncpy(move_buf,"HelloWorld",0xb);
 iVar2 = memop_memmove(move_buf,10);
 printf("MEMOP-L2-03: %c\n",iVar2);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 iVar2 = memop_memcmp(cmp_a,cmp_b,0xc);
 printf("MEMOP-L2-04: %d\n",iVar2);
 iVar2 = memop_bzero(zero_buf,10);
 printf("MEMOP-L2-05: %d\n",iVar2);
 strncpy(bcopy_src,"\x01\x02\x03\x04",4);
 bcopy_dst[0] = '\0';
 bcopy_dst[1] = '\0';
 bcopy_dst[2] = '\0';
 bcopy_dst[3] = '\0';
 iVar2 = memop_bcopy(bcopy_src,bcopy_dst,4);
 printf("MEMOP-L2-06: %d\n",iVar2);
 unalign_buf[0] = '\0';
 unalign_buf[1] = '\x01';
 unalign_buf[2] = '\x02';
 unalign_buf[3] = '\x03';
 unalign_buf[4] = '\x04';
 unalign_buf[5] = '\x05';
 unalign_buf[6] = '\x06';
 unalign_buf[7] = '\a';
 iVar2 = memop_unaligned_access(unalign_buf);
 printf("MEMOP-L3-01: 0x%x\n",iVar2);
 flag = 5;
 iVar2 = memop_memory_barrier(&flag);
 printf("MEMOP-L3-02: %d\n",iVar2);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: main @ 00012e86 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00012eb5 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: extern_function @ 00012eb9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

static int extern_function(int x)

{
 return x * 3;
}



/* Function: __stack_chk_fail_local @ 00012ee0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 72 */
