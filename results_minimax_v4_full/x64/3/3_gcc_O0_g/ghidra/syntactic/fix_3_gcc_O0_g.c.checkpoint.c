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
typedef unsigned int uint;
typedef unsigned long ulong;
typedef char undefined1;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned char byte;
typedef int (*_func_int_int)(int);
typedef int code;
typedef void undefined;
typedef int int_0_;
typedef int pid_t;

/* Stub definitions for LOCK/UNLOCK (typically in sys/lock.h on some systems) */
#define LOCK()
#define UNLOCK()

/* Structure definitions */
typedef struct Point {
    int x;
    int y;
} Point;

/* Global variables */
int global_counter;
int global_array[10];
int extern_global_var;
char const_string[10];
int bss_var;
char bss_buffer[10];
Point global_point;
int file_scope_static;
_func_int_int global_func_ptr;
int *global_heap_ptr;
int complex_init[10];

/* Function declarations */
int extern_function(int x);

/* String constants */
#include <stdbool.h>

#define DAT_00103008 "=== Stack Memory Tests ==="
#define DAT_00103160 "=== Heap Memory Tests ==="
#define DAT_001032c8 "result: %d (child)\n"
#define DAT_001032d8 "exit status: %d\n"
#define DAT_00103300 "signal: %d\n"
#define DAT_00103341 "fork failed"
#define DAT_00103360 "=== Static/Global Memory Tests ==="
#define DAT_00103610 "=== Memory Operation Tests ==="

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/3/3_gcc_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 00101309 */

int double_value(int x)

{
 int x_local;
 
 return x * 2;
}



/* Function: local_vars @ 0010131b */

int local_vars(int x)

{
 int x_local;
 int a;
 int b;
 int c;
 
 return x * 2 + 10;
}



/* Function: local_array @ 00101342 */

int local_array(int n)

{
 long lVar1;
 long in_FS_OFFSET;
 int n_local;
 int i;
 int arr [10];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 for (i = 0; i < 10; i = i + 1) {
 arr[i] = i * n;
 }
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return arr[5];
}



/* Function: local_struct @ 0010139e */

int local_struct(int x)

{
 int x_local;
 Point p;
 
 return x * 3;
}



/* Function: address_of_local @ 001013c1 */

int address_of_local(int *out)

{
 int *out_local;
 int local;
 
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 001013e2 */

int address_of_array(int *arr)

{
 int *arr_local;
 int *p1;
 int *p2;
 
 return *arr + *arr;
}



/* Function: large_stack_frame @ 0010140e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 long lVar1;
 long in_FS_OFFSET;
 int i;
 char large_buf [2048];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 for (i = 0; i < 0x800; i = i + 1) {
 large_buf[i] = (char)i;
 }
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)large_buf[0x400];
}



/* Function: vla_stack @ 00101482 */

int vla_stack(int n)

{
 long lVar1;
 int iVar2;
 ulong uVar3;
 undefined1 *puVar4;
 long in_FS_OFFSET;
 undefined1 auStack_48 [12];
 int n_local;
 int i;
 long local_30;
 int_0_ *vla;
 long local_20;
 
 puVar4 = auStack_48;
 n_local = n;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 if ((n < 1) || (1000 < n)) {
 iVar2 = -1;
 }
 else {
 local_30 = (long)n + -1;
 uVar3 = (((long)n * 4 + 0xfU) / 0x10) * 0x10;
 for (; puVar4 != auStack_48 + -(uVar3 & 0xfffffffffffff000); puVar4 = puVar4 + -0x1000) {
 *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
 }
 lVar1 = -(ulong)((uint)uVar3 & 0xfff);
 if ((uVar3 & 0xfff) != 0) {
 *(undefined8 *)(puVar4 + ((ulong)((uint)uVar3 & 0xfff) - 8) + lVar1) =
 *(undefined8 *)(puVar4 + ((ulong)((uint)uVar3 & 0xfff) - 8) + lVar1);
 }
 for (i = 0; i < n_local; i = i + 1) {
 *(int *)(puVar4 + (long)i * 4 + lVar1) = i * 2;
 }
 iVar2 = *(int *)(puVar4 + (long)(n_local / 2) * 4 + lVar1);
 vla = puVar4 + lVar1;
 }
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: alloca_usage @ 001015cd */

int alloca_usage(int n)

{
 long lVar1;
 int iVar2;
 ulong uVar3;
 undefined1 *puVar4;
 undefined1 *puVar5;
 long in_FS_OFFSET;
 undefined1 auStack_38 [12];
 int n_local;
 int i;
 int *arr;
 long local_10;
 
 puVar4 = auStack_38;
 puVar5 = auStack_38;
 n_local = n;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 if (n < 1) {
 iVar2 = -1;
 }
 else {
 uVar3 = (((long)n * 4 + 0x17U) / 0x10) * 0x10;
 for (; puVar4 != auStack_38 + -(uVar3 & 0xfffffffffffff000); puVar4 = puVar4 + -0x1000) {
 *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
 }
 lVar1 = -(ulong)((uint)uVar3 & 0xfff);
 puVar5 = puVar4 + lVar1;
 if ((uVar3 & 0xfff) != 0) {
 *(undefined8 *)(puVar4 + ((ulong)((uint)uVar3 & 0xfff) - 8) + lVar1) =
 *(undefined8 *)(puVar4 + ((ulong)((uint)uVar3 & 0xfff) - 8) + lVar1);
 }
 arr = (int *)((ulong)(puVar4 + lVar1 + 0xf) & 0xfffffffffffffff0);
 for (i = 0; i < n_local; i = i + 1) {
 arr[i] = i * 3;
 }
 iVar2 = arr[n_local / 2];
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 *(undefined8 *)(puVar5 + -8) = 0x1016f1;
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: stack_alias @ 001016f3 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int stack_alias(int *p1,int *p2)

{
 int iVar1;
 long in_FS_OFFSET;
 int *p2_local;
 int *p1_local;
 int local;
 char stack0x00000000;
 
 if (&stack0x00000000 == (undefined1 *)0x14) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0x14;
 }
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_stack_memory @ 0010176b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 long lVar1;
 uint uVar2;
 long in_FS_OFFSET;
 int out;
 int alias_val;
 int arr5 [10];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103008);
 uVar2 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",(ulong)uVar2);
 uVar2 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n",(ulong)uVar2);
 uVar2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",(ulong)uVar2);
 uVar2 = address_of_local(&out);
 printf("MEM-L1-04 (address_of_local): %d\n",(ulong)uVar2);
 arr5[4] = 0;
 arr5[5] = 0;
 arr5[6] = 0;
 arr5[7] = 0;
 arr5[8] = 0;
 arr5[9] = 0;
 arr5[0] = 1;
 arr5[1] = 2;
 arr5[2] = 3;
 arr5[3] = 0;
 uVar2 = address_of_array(arr5);
 printf("MEM-L1-05 (address_of_array): %d\n",(ulong)uVar2);
 uVar2 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)uVar2);
 uVar2 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",(ulong)uVar2);
 uVar2 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",(ulong)uVar2);
 alias_val = 0;
 uVar2 = stack_alias(&alias_val,&alias_val);
 printf("MEM-L2-04 (stack_alias): %d\n",(ulong)uVar2);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: heap_basic @ 0010191d */

int heap_basic(int n)

{
 int iVar1;
 void *__ptr;
 int n_local;
 int i;
 int result;
 int *arr;
 
 __ptr = malloc((long)n << 2);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 for (i = 0; i < n; i = i + 1) {
 *(int *)((long)__ptr + (long)i * 4) = i * 2;
 }
 iVar1 = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_calloc @ 001019b2 */

int heap_calloc(int n)

{
 void *__ptr;
 int n_local;
 int sum;
 int i;
 int *arr;
 
 __ptr = calloc((long)n,4);
 if (__ptr == (void *)0x0) {
 sum = -1;
 }
 else {
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + *(int *)((long)__ptr + (long)i * 4);
 }
 free(__ptr);
 }
 return sum;
}



/* Function: heap_realloc @ 00101a2b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 int iVar1;
 void *__ptr;
 void *__ptr_00;
 int i;
 int i_1;
 int old_val;
 int result;
 int *p;
 int *new_p;
 
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 for (i = 0; i < 5; i = i + 1) {
 *(int *)((long)__ptr + (long)i * 4) = i + 1;
 }
 iVar1 = *(int *)((long)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 iVar1 = -2;
 }
 else {
 for (i_1 = 5; i_1 < 10; i_1 = i_1 + 1) {
 *(int *)((long)i_1 * 4 + (long)__ptr_00) = i_1 * 10;
 }
 if (iVar1 == *(int *)((long)__ptr_00 + 8)) {
 iVar1 = *(int *)((long)__ptr_00 + 0x14);
 }
 else {
 iVar1 = -3;
 }
 free(__ptr_00);
 }
 }
 return iVar1;
}



/* Function: heap_array @ 00101b2d */

int heap_array(int n)

{
 int iVar1;
 void *__ptr;
 int n_local;
 int i;
 int result;
 int *arr;
 
 __ptr = malloc((long)n << 2);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 for (i = 0; i < n; i = i + 1) {
 *(int *)((long)i * 4 + (long)__ptr) = i * 3;
 }
 iVar1 = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_struct @ 00101bc7 */

int heap_struct(int x)

{
 int iVar1;
 int *__ptr;
 int x_local;
 int result;
 Point *p;
 
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



/* Function: heap_nested @ 00101c2b */

int heap_nested(Node **head)

{
 int iVar1;
 Node *pNVar2;
 Node *pNVar3;
 Node **head_local;
 
 pNVar2 = malloc(0x10);
 *head = pNVar2;
 if (*head == (Node *)0x0) {
 iVar1 = -1;
 }
 else {
 (*head)->data = 10;
 pNVar2 = *head;
 pNVar3 = malloc(0x10);
 pNVar2->next = pNVar3;
 if ((*head)->next == (Node *)0x0) {
 free(*head);
 iVar1 = -2;
 }
 else {
 (*head)->next->data = 0x14;
 (*head)->next->next = (Node *)0x0;
 iVar1 = 0;
 }
 }
 return iVar1;
}



/* Function: linked_list_heap @ 00101cda */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 Node *pNVar1;
 Node *pNVar2;
 int i;
 int sum;
 Node *head;
 Node *current;
 Node *temp;
 Node *temp_2;
 Node *new_node;
 Node *temp_1;
 
 head = (Node *)0x0;
 current = (Node *)0x0;
 i = 0;
 while( true ) {
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
 pNVar2 = malloc(0x10);
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



/* Function: create_tree_node @ 00101e00 */

TreeNode * create_tree_node(int data)

{
 TreeNode *pTVar1;
 int data_local;
 TreeNode *node;
 
 pTVar1 = malloc(0x18);
 if (pTVar1 != (TreeNode *)0x0) {
 pTVar1->data = data;
 pTVar1->left = (TreeNode *)0x0;
 pTVar1->right = (TreeNode *)0x0;
 }
 return pTVar1;
}



/* Function: tree_heap_traversal @ 00101e4b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 int iVar1;
 TreeNode *__ptr;
 TreeNode *pTVar2;
 int sum;
 TreeNode *root;
 
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



/* Function: memory_leak @ 00101f53 */

int memory_leak(int n)

{
 int iVar1;
 void *pvVar2;
 int n_local;
 int i;
 int *leak;
 
 pvVar2 = malloc((long)n << 2);
 if (pvVar2 == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 for (i = 0; i < n; i = i + 1) {
 *(int *)((long)i * 4 + (long)pvVar2) = i;
 }
 iVar1 = *(int *)((long)pvVar2 + (long)(n / 2) * 4);
 }
 return iVar1;
}



/* Function: dangling_pointer @ 00101fd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 uint uVar1;
 uint *__ptr;
 int value;
 int dangerous;
 int *p;
 
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



/* Function: double_free @ 00102042 */

int double_free(int *p)

{
 int iVar1;
 undefined4 *__ptr;
 int *p_local;
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



/* Function: heap_overflow @ 001020a6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 int iVar1;
 int *__ptr;
 int i;
 int result;
 int *arr;
 
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



/* Function: test_heap_memory @ 00102117 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 uint uVar1;
 long in_FS_OFFSET;
 int status;
 pid_t pid;
 int result;
 Node *head;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103160);
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
 head = (Node *)0x0;
 uVar1 = heap_nested(&head);
 printf("HEAP-L2-06 (heap_nested): %d\n",(ulong)uVar1);
 if (head != (Node *)0x0) {
 free(head->next);
 free(head);
 }
 uVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar1);
 uVar1 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",(ulong)uVar1);
 uVar1 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n",(ulong)uVar1);
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (pid == 0) {
 result = dangling_pointer();
 printf(&DAT_001032c8,(ulong)(uint)result);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (pid < 1) {
 perror(&DAT_00103341);
 }
 else {
 waitpid(pid,&status,0);
 if ((status & 0x7fU) == 0) {
 printf(&DAT_001032d8,(ulong)(status >> 8 & 0xff));
 }
 else if ('\0' < (char)(((byte)status & 0x7f) + 1) >> 1) {
 printf(&DAT_00103300,(ulong)(status & 0x7f));
 }
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: global_var_access @ 0010237c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 0010239b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter * 2;
}



/* Function: global_array_access @ 001023ad */

int global_array_access(int idx)

{
 int iVar1;
 int idx_local;
 
 if ((idx < 0) || (9 < idx)) {
 iVar1 = -1;
 }
 else {
 iVar1 = global_array[idx];
 }
 return iVar1;
}



/* Function: static_local @ 001023e4 */

static int static_local_counter;

int static_local(int reset)

{
 int reset_local;
 
 if (reset == 0) {
 static_local_counter = static_local_counter + 1;
 }
 else {
 static_local_counter = 0;
 }
 return static_local_counter;
}



/* Function: static_helper @ 0010241d */

int static_helper(int x)

{
 int x_local;
 
 return x * 2;
}



/* Function: call_static_func @ 0010242f */

int call_static_func(int x)

{
 int iVar1;
 int x_local;
 
 iVar1 = static_helper(x);
 return iVar1 + 1;
}



/* Function: access_extern_global @ 0010244d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00102460 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00102496 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return bss_var;
}



/* Function: access_bss_buffer @ 001024a6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return (int)bss_buffer[0];
}



/* Function: global_struct_access @ 001024ba */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return global_point.y + global_point.x;
}



/* Function: set_file_static @ 001024d2 */

void set_file_static(int val)

{
 int val_local;
 
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 001024e9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 001024f9 */

void set_global_callback(_func_int_int *f)

{
 _func_int_int *f_local;
 
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00102513 */

int call_global_callback(int x)

{
 int iVar1;
 int x_local;
 
 if (global_func_ptr == (_func_int_int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = (*global_func_ptr)(x);
 }
 return iVar1;
}



/* Function: global_heap_store @ 00102545 */

int global_heap_store(int *p)

{
 int iVar1;
 int *p_local;
 
 global_heap_ptr = p;
 if (p == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = *p;
 }
 return iVar1;
}



/* Function: static_complex_init @ 0010257a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return complex_init[4] + complex_init[0] + complex_init[2];
}



/* Function: tls_access @ 0010259a */

int tls_access(int val)

{
 long in_FS_OFFSET;
 int val_local;
 
 *(int *)(in_FS_OFFSET + -4) = val;
 return *(int *)(in_FS_OFFSET + -4) * 2;
}



/* Function: init_depends_on @ 001025bc */

static int static_depends;

int init_depends_on(int *p)

{
 int *p_local;
 
 if (p != (int *)0x0) {
 static_depends = *p;
 }
 return static_depends;
}



/* Function: init_order_test @ 001025e3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 int iVar1;
 long in_FS_OFFSET;
 int external_val;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 external_val = 0x14;
 iVar1 = init_depends_on(&external_val);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: test_static_global @ 00102627 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 uint uVar1;
 long in_FS_OFFSET;
 int heap_val;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103360);
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
 heap_val = 100;
 uVar1 = global_heap_store(&heap_val);
 printf("STM-L2-08 (global_heap_store): %d\n",(ulong)uVar1);
 uVar1 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n",(ulong)uVar1);
 uVar1 = tls_access(10);
 printf("STM-L3-01 (tls_access): %d\n",(ulong)uVar1);
 uVar1 = init_order_test();
 printf("STM-L3-02 (init_order_test): %d\n",(ulong)uVar1);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: memop_memset @ 001028d4 */

int memop_memset(void *buf,size_t size,int fill_value)

{
 uint uVar1;
 int fill_value_local;
 size_t size_local;
 void *buf_local;
 
 if ((buf == (void *)0x0) || (size == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(buf,fill_value,size);
 uVar1 = (uint)*(byte *)buf;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 00102921 */

int memop_memcpy(void *dst,void *src,size_t n)

{
 int iVar1;
 size_t n_local;
 void *src_local;
 void *dst_local;
 
 if (((dst == (void *)0x0) || (src == (void *)0x0)) || (n == 0)) {
 iVar1 = -1;
 }
 else {
 memcpy(dst,src,n);
 iVar1 = *(int *)((long)dst + ((n & 0xfffffffffffffffc) - 4));
 }
 return iVar1;
}



/* Function: memop_memmove @ 00102983 */

int memop_memmove(void *buf,size_t n)

{
 int iVar1;
 size_t n_local;
 void *buf_local;
 
 if ((buf == (void *)0x0) || (n < 2)) {
 iVar1 = -1;
 }
 else {
 memmove((void *)((long)buf + 1),buf,n - 1);
 iVar1 = (int)*(char *)((long)buf + 1);
 }
 return iVar1;
}



/* Function: memop_memcmp @ 001029db */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 size_t n_local;
 void *p2_local;
 void *p1_local;
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



/* Function: memop_bzero @ 00102a4a */

int memop_bzero(void *buf,size_t n)

{
 uint uVar1;
 size_t n_local;
 void *buf_local;
 
 if (buf == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 memset(buf,0,n);
 uVar1 = (uint)*(byte *)buf;
 }
 return uVar1;
}



/* Function: memop_bcopy @ 00102a93 */

int memop_bcopy(void *src,void *dst,size_t n)

{
 uint uVar1;
 size_t n_local;
 void *dst_local;
 void *src_local;
 
 if (((src == (void *)0x0) || (dst == (void *)0x0)) || (n == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 memmove(dst,src,n);
 uVar1 = (uint)*(byte *)dst;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 00102aea */

int memop_unaligned_access(char *buf)

{
 int iVar1;
 long in_FS_OFFSET;
 char *buf_local;
 int value;
 
 if (buf == (char *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = *(int *)(buf + 1);
 }
 if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: memop_memory_barrier @ 00102b3d */

int memop_memory_barrier(int *flag)

{
 int iVar1;
 int *flag_local;
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



/* Function: test_memory_op_functions @ 00102b73 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 long lVar1;
 uint uVar2;
 long in_FS_OFFSET;
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
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103610);
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
 uVar2 = memop_memset(buffer,10,0x41);
 printf("MEMOP-L2-01: %d\n",(ulong)uVar2);
 uVar2 = memop_memcpy(int_dst,int_src,0x14);
 printf("MEMOP-L2-02: %d\n",(ulong)uVar2);
 strncpy(move_buf,"HelloWorld",0xb);
 uVar2 = memop_memmove(move_buf,10);
 printf("MEMOP-L2-03: %c\n",(ulong)uVar2);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 uVar2 = memop_memcmp(cmp_a,cmp_b,0xc);
 printf("MEMOP-L2-04: %d\n",(ulong)uVar2);
 uVar2 = memop_bzero(zero_buf,10);
 printf("MEMOP-L2-05: %d\n",(ulong)uVar2);
 strncpy(bcopy_src,"\x01\x02\x03\x04",4);
 bcopy_dst[0] = '\0';
 bcopy_dst[1] = '\0';
 bcopy_dst[2] = '\0';
 bcopy_dst[3] = '\0';
 uVar2 = memop_bcopy(bcopy_src,bcopy_dst,4);
 printf("MEMOP-L2-06: %d\n",(ulong)uVar2);
 unalign_buf[0] = '\0';
 unalign_buf[1] = '\x01';
 unalign_buf[2] = '\x02';
 unalign_buf[3] = '\x03';
 unalign_buf[4] = '\x04';
 unalign_buf[5] = '\x05';
 unalign_buf[6] = '\x06';
 unalign_buf[7] = '\a';
 uVar2 = memop_unaligned_access(unalign_buf);
 printf("MEMOP-L3-01: 0x%x\n",(ulong)uVar2);
 flag = 5;
 uVar2 = memop_memory_barrier(&flag);
 printf("MEMOP-L3-02: %d\n",(ulong)uVar2);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: main @ 00102dfe */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 00102e35 - implementation */

int extern_function(int x)

{
 return x * 3;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 65 */
