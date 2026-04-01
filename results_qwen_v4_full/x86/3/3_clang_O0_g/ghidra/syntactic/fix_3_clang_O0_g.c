/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/3/3_clang_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdint.h>
#include <stdbool.h>

/* Missing type definitions */
typedef unsigned int undefined4;
typedef unsigned char byte;

typedef struct Point {
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

typedef int (*_func_int_int)(int);

/* Missing global variable declarations */
int global_counter;
int global_array[10];
int extern_global_var = 50;
char const_string[100] = "constant string data";
int bss_var;
char bss_buffer[100];
Point global_point;
int file_scope_static;
_func_int_int global_func_ptr;
int *global_heap_ptr;
int complex_init[10];
int init_depends_on_static_depends;

/* Missing function prototypes */
int static_helper(int x);
int double_value(int x);
int init_depends_on(int *p);
void LOCK(void);
void UNLOCK(void);
int extern_function(int x);
TreeNode * create_tree_node(int data);
int local_vars(int x);
int local_array(int n);
int local_struct(int x);
int address_of_local(int *out);
int address_of_array(int *arr);
int large_stack_frame(void);
int vla_stack(int n);
int alloca_usage(int n);
int stack_alias(int *p1, int *p2);
void test_stack_memory(void);
int heap_basic(int n);
int heap_calloc(int n);
int heap_realloc(void);
int heap_array(int n);
int heap_struct(int x);
int heap_nested(Node **head);
int linked_list_heap(void);
int tree_heap_traversal(void);
int memory_leak(int n);
int dangling_pointer(void);
int double_free(int *p);
int heap_overflow(void);
void test_heap_memory(void);
int global_var_access(void);
int global_var_read(void);
int global_array_access(int idx);
int static_local(int reset);
int call_static_func(int x);
int access_extern_global(void);
int call_extern_func(void);
int read_const_data(void);
int access_bss_var(void);
int access_bss_buffer(void);
int global_struct_access(void);
void set_file_static(int val);
int get_file_static(void);
void set_global_callback(_func_int_int f);
int call_global_callback(int x);
int global_heap_store(int *p);
int static_complex_init(void);
int tls_access(int val);
int init_order_test(void);
void test_static_global(void);
int memop_memset(void *buf, size_t size, int fill_value);
int memop_memcpy(void *dst, void *src, size_t n);
int memop_memmove(void *buf, size_t n);
int memop_memcmp(void *p1, void *p2, size_t n);
int memop_bzero(void *buf, size_t n);
static void local_bcopy(const void *src, void *dst, size_t n);
int memop_bcopy(void *src, void *dst, size_t n);
int memop_unaligned_access(char *buf);
int memop_memory_barrier(int *flag);
void test_memory_op_functions(void);

/* Missing data definitions */
extern char const DAT_00014008[];
extern char const DAT_00014152[];
extern char const DAT_00014321[];
extern char const DAT_000142bb[];
extern char const DAT_000142e0[];
extern char const DAT_000142ab[];
extern char const DAT_00014337[];
extern char const DAT_0001459a[];
extern int const DAT_0001464c[5];

/* Data definitions */
char const DAT_00014008[] = "=== Stack Memory Tests ===\n";
char const DAT_00014152[] = "=== Heap Memory Tests ===\n";
char const DAT_00014321[] = "fork failed";
char const DAT_000142bb[] = "child exited with status %d\n";
char const DAT_000142e0[] = "child terminated by signal %d\n";
char const DAT_000142ab[] = "%d\n";
char const DAT_00014337[] = "=== Static/Global Memory Tests ===\n";
char const DAT_0001459a[] = "=== Memory Operation Tests ===\n";
int const DAT_0001464c[5] = {1, 2, 3, 4, 5};

/* LOCK/UNLOCK definitions */
void LOCK(void) { }
void UNLOCK(void) { }

/* bcopy definition (BSD compatibility) */
static void local_bcopy(const void *src, void *dst, size_t n) {
 memcpy(dst, src, n);
}

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Stub function - null pointer call removed */
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

/* WARNING: Unknown calling convention */

int local_vars(int x)

{
 int c;
 int b;
 int a;
 
 return x * 2 + 10;
}



/* Function: local_array @ 000112f0 */

/* WARNING: Unknown calling convention */

int local_array(int n)

{
 int i;
 int arr [10];
 
 for (i = 0; i < 10; i = i + 1) {
 arr[i] = i * n;
 }
 return arr[5];
}



/* Function: local_struct @ 00011330 */

/* WARNING: Unknown calling convention */

int local_struct(int x)

{
 Point p;
 
 return x * 3;
}



/* Function: address_of_local @ 00011360 */

/* WARNING: Unknown calling convention */

int address_of_local(int *out)

{
 int local;
 
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00011380 */

/* WARNING: Unknown calling convention */

int address_of_array(int *arr)

{
 int *p2;
 int *p1;
 
 return *arr + *arr;
}



/* Function: large_stack_frame @ 000113b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 int i;
 char large_buf [2048];
 
 for (i = 0; i < 0x800; i = i + 1) {
 large_buf[i] = (char)i;
 }
 return (int)large_buf[0x400];
}



/* Function: vla_stack @ 00011410 */

/* WARNING: Unknown calling convention */

int vla_stack(int n)

{
 int iVar1;
 int aiStack_1c [2];
 int i;
 uint __vla_expr0;
 int local_8;
 
 /* Unresolved local var: int[821] vla@[???] */
 if ((n < 1) || (1000 < n)) {
 local_8 = -1;
 }
 else {
 iVar1 = -0x1c - (n * 4 + 0xfU & 0xfffffff0);
 for (i = 0; i < n; i = i + 1) {
 *(int *)((int)aiStack_1c + i * 4 + iVar1 + 0x1c) = i << 1;
 }
 local_8 = *(int *)((int)aiStack_1c + (n / 2) * 4 + iVar1 + 0x1c);
 }
 return local_8;
}



/* Function: alloca_usage @ 000114b0 */

/* WARNING: Unknown calling convention */

int alloca_usage(int n)

{
 int iVar1;
 int aiStack_1c [3];
 int i;
 int *arr;
 int local_8;
 
 if (n < 1) {
 local_8 = -1;
 }
 else {
 iVar1 = -0x1c - (n * 4 + 0xfU & 0xfffffff0);
 for (i = 0; i < n; i = i + 1) {
 *(int *)((int)aiStack_1c + i * 4 + iVar1 + 0x1c) = i * 3;
 }
 local_8 = *(int *)((int)aiStack_1c + (n / 2) * 4 + iVar1 + 0x1c);
 }
 return local_8;
}



/* Function: stack_alias @ 00011540 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

int stack_alias(int *p1,int *p2)

{
 int local;
 int local_8;
 
 if (p1 == p2) {
 local_8 = -1;
 }
 else {
 local_8 = 0x14;
 }
 return local_8;
}



/* Function: test_stack_memory @ 000115a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 int iVar1;
 int alias_val;
 int arr5 [10];
 int out;
 
 printf(&DAT_00014008);
 iVar1 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",iVar1);
 iVar1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n",iVar1);
 iVar1 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",iVar1);
 iVar1 = address_of_local(&out);
 printf("MEM-L1-04 (address_of_local): %d\n",iVar1);
 memset(arr5,0,0x28);
 arr5[0] = 1;
 arr5[1] = 2;
 arr5[2] = 3;
 iVar1 = address_of_array(arr5);
 printf("MEM-L1-05 (address_of_array): %d\n",iVar1);
 iVar1 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",iVar1);
 iVar1 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",iVar1);
 iVar1 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",iVar1);
 alias_val = 0;
 iVar1 = stack_alias(&alias_val,&alias_val);
 printf("MEM-L2-04 (stack_alias): %d\n",iVar1);
 return;
}



/* Function: heap_basic @ 00011750 */

/* WARNING: Unknown calling convention */

int heap_basic(int n)

{
 void *__ptr;
 int result;
 int i;
 int *arr;
 undefined4 local_c;
 
 __ptr = malloc(n << 2);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 for (i = 0; i < n; i = i + 1) {
 *(int *)((int)__ptr + i * 4) = i << 1;
 }
 local_c = *(int *)((int)__ptr + (n / 2) * 4);
 free(__ptr);
 }
 return local_c;
}



/* Function: heap_calloc @ 00011800 */

/* WARNING: Unknown calling convention */

int heap_calloc(int n)

{
 void *__ptr;
 int i;
 int sum;
 int *arr;
 undefined4 local_c;
 
 __ptr = calloc(n,4);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = *(int *)((int)__ptr + i * 4) + sum;
 }
 free(__ptr);
 local_c = sum;
 }
 return local_c;
}



/* Function: heap_realloc @ 000118a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 int iVar1;
 void *__ptr;
 void *__ptr_00;
 undefined4 local_2c;
 int result;
 int i_1;
 int *new_p;
 int old_val;
 int i;
 int *p;
 undefined4 local_c;
 
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 for (i = 0; i < 5; i = i + 1) {
 *(int *)((int)__ptr + i * 4) = i + 1;
 }
 iVar1 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 local_c = -2;
 }
 else {
 for (i_1 = 5; i_1 < 10; i_1 = i_1 + 1) {
 *(int *)((int)__ptr_00 + i_1 * 4) = i_1 * 10;
 }
 if (*(int *)((int)__ptr_00 + 8) == iVar1) {
 local_2c = *(int *)((int)__ptr_00 + 0x14);
 }
 else {
 local_2c = -3;
 }
 free(__ptr_00);
 local_c = local_2c;
 }
 }
 return local_c;
}



/* Function: heap_array @ 000119d0 */

/* WARNING: Unknown calling convention */

int heap_array(int n)

{
 void *__ptr;
 int result;
 int i;
 int *arr;
 undefined4 local_c;
 
 __ptr = malloc(n << 2);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 for (i = 0; i < n; i = i + 1) {
 *(int *)((int)__ptr + i * 4) = i * 3;
 }
 local_c = *(int *)((int)__ptr + (n / 2) * 4);
 free(__ptr);
 }
 return local_c;
}



/* Function: heap_struct @ 00011a80 */

/* WARNING: Unknown calling convention */

int heap_struct(int x)

{
 int *__ptr;
 int result;
 Point *p;
 int local_c;
 
 __ptr = malloc(8);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 *__ptr = x;
 __ptr[1] = x << 1;
 local_c = *__ptr + __ptr[1];
 free(__ptr);
 }
 return local_c;
}



/* Function: heap_nested @ 00011b00 */

/* WARNING: Unknown calling convention */

int heap_nested(Node **head)

{
 Node *pNVar1;
 int local_c;
 
 pNVar1 = malloc(8);
 *head = pNVar1;
 if (*head == (Node *)0x0) {
 local_c = -1;
 }
 else {
 (*head)->data = 10;
 pNVar1 = malloc(8);
 (*head)->next = pNVar1;
 if ((*head)->next == (Node *)0x0) {
 free(*head);
 local_c = -2;
 }
 else {
 (*head)->next->data = 0x14;
 (*head)->next->next = (Node *)0x0;
 local_c = 0;
 }
 }
 return local_c;
}



/* Function: linked_list_heap @ 00011bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 Node *pNVar1;
 Node *pNVar2;
 Node *temp_2;
 Node *temp;
 int sum;
 Node *temp_1;
 Node *new_node;
 int i;
 Node *current;
 Node *head;
 
 head = (Node *)0x0;
 current = (Node *)0x0;
 i = 0;
 while( true ) {
 if (4 < i) {
 sum = 0;
 for (temp = head; temp != (Node *)0x0; temp = temp->next) {
 sum = temp->data + sum;
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



/* Function: create_tree_node @ 00011d10 */

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



/* Function: tree_heap_traversal @ 00011d70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 TreeNode *__ptr;
 TreeNode *pTVar1;
 int sum;
 TreeNode *root;
 int local_c;
 
 __ptr = create_tree_node(10);
 if (__ptr == (TreeNode *)0x0) {
 local_c = -1;
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
 local_c = -2;
 }
 else {
 local_c = __ptr->data + __ptr->left->data + __ptr->right->data;
 free(__ptr->left);
 free(__ptr->right);
 free(__ptr);
 }
 }
 return local_c;
}



/* Function: memory_leak @ 00011ea0 */

/* WARNING: Unknown calling convention */

int memory_leak(int n)

{
 void *pvVar1;
 int i;
 int *leak;
 undefined4 local_c;
 
 pvVar1 = malloc(n << 2);
 if (pvVar1 == (void *)0x0) {
 local_c = -1;
 }
 else {
 for (i = 0; i < n; i = i + 1) {
 *(int *)((int)pvVar1 + i * 4) = i;
 }
 local_c = *(int *)((int)pvVar1 + (n / 2) * 4);
 }
 return local_c;
}



/* Function: dangling_pointer @ 00011f30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 int *__ptr;
 int dangerous;
 int value;
 int *p;
 int local_c;
 
 __ptr = malloc(4);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 *__ptr = 0x2a;
 printf("value before free: %d\n",*__ptr);
 free(__ptr);
 local_c = *__ptr;
 }
 return local_c;
}



/* Function: double_free @ 00011fc0 */

/* WARNING: Unknown calling convention */

int double_free(int *p)

{
 undefined4 *__ptr;
 int *temp;
 undefined4 local_c;
 
 if (p == (int *)0x0) {
 __ptr = malloc(4);
 if (__ptr == (undefined4 *)0x0) {
 local_c = -1;
 }
 else {
 *__ptr = 10;
 free(__ptr);
 free(__ptr);
 local_c = -2;
 }
 }
 else {
 local_c = *p;
 }
 return local_c;
}



/* Function: heap_overflow @ 00012050 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 int *__ptr;
 int result;
 int i;
 int *arr;
 int local_c;
 
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 for (i = 0; i < 0xb; i = i + 1) {
 __ptr[i] = i * 100;
 }
 local_c = *__ptr;
 free(__ptr);
 }
 return local_c;
}



/* Function: test_heap_memory @ 000120e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 int iVar1;
 int status;
 int result;
 pid_t pid;
 Node *head;
 
 printf(&DAT_00014152);
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
 if (pid != 0) {
 if (pid < 1) {
 perror(&DAT_00014321);
 }
 else {
 waitpid(pid,&status,0);
 if ((status & 0x7fU) == 0) {
 printf(&DAT_000142bb,(int)(status & 0xff00U) >> 8);
 }
 else if ('\0' < (char)(((byte)status & 0x7f) + 1) >> 1) {
 printf(&DAT_000142e0,status & 0x7f);
 }
 }
 return;
 }
 result = dangling_pointer();
 printf(&DAT_000142ab,result);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 00012380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 000123b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 000123d0 */

/* WARNING: Unknown calling convention */

int global_array_access(int idx)

{
 int local_8;
 
 if ((idx < 0) || (9 < idx)) {
 local_8 = -1;
 }
 else {
 local_8 = global_array[idx];
 }
 return local_8;
}



/* Function: static_local @ 00012420 */

/* WARNING: Unknown calling convention */

int static_local(int reset)

{
 static int counter = 0;
 if (reset == 0) {
 counter = counter + 1;
 }
 else {
 counter = 0;
 }
 return counter;
}



/* Function: call_static_func @ 00012480 */

/* WARNING: Unknown calling convention */

int call_static_func(int x)

{
 int iVar1;
 
 iVar1 = static_helper(x);
 return iVar1 + 1;
}



/* Function: static_helper @ 000124b0 */

/* WARNING: Unknown calling convention */

int static_helper(int x)

{
 return x << 1;
}



/* Function: access_extern_global @ 000124c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: extern_function @ 000124e0 */

/* WARNING: Unknown calling convention */

int extern_function(int x)

{
 return x * 2;
}



/* Function: call_extern_func @ 000124f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 00012520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00012540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return bss_var;
}



/* Function: access_bss_buffer @ 00012560 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return (int)bss_buffer[0];
}



/* Function: global_struct_access @ 00012580 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return global_point.x + global_point.y;
}



/* Function: set_file_static @ 000125a0 */

/* WARNING: Unknown calling convention */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 000125c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 000125e0 */

/* WARNING: Unknown calling convention */

void set_global_callback(_func_int_int f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00012600 */

/* WARNING: Unknown calling convention */

int call_global_callback(int x)

{
 int local_c;
 
 if (global_func_ptr == (_func_int_int)0x0) {
 local_c = -1;
 }
 else {
 local_c = (*global_func_ptr)(x);
 }
 return local_c;
}



/* Function: global_heap_store @ 00012650 */

/* WARNING: Unknown calling convention */

int global_heap_store(int *p)

{
 undefined4 local_8;
 
 global_heap_ptr = p;
 if (p == (int *)0x0) {
 local_8 = -1;
 }
 else {
 local_8 = *p;
 }
 return local_8;
}



/* Function: static_complex_init @ 000126a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return complex_init[0] + complex_init[2] + complex_init[4];
}



/* Function: tls_access @ 000126d0 */

/* WARNING: Unknown calling convention */

int tls_access(int val)

{
 static int tls_var;
 
 tls_var = val;
 return tls_var << 1;
}



/* Function: init_order_test @ 000126f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 int iVar1;
 int external_val;
 
 external_val = 0x14;
 iVar1 = init_depends_on(&external_val);
 return iVar1;
}



/* Function: init_depends_on @ 00012720 */
/* WARNING: Unknown calling convention */

int init_depends_on(int *p)

{
 if (p != (int *)0x0) {
 init_depends_on_static_depends = *p;
 }
 return init_depends_on_static_depends;
}



/* Function: test_static_global @ 00012760 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 int iVar1;
 int heap_val;
 
 printf(&DAT_00014337);
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
 return;
}



/* Function: double_value @ 00012a00 */

/* WARNING: Unknown calling convention */

int double_value(int x)

{
 return x << 1;
}



/* Function: memop_memset @ 00012a10 */

/* WARNING: Unknown calling convention */

int memop_memset(void *buf,size_t size,int fill_value)

{
 undefined4 local_c;
 
 if ((buf == (void *)0x0) || (size == 0)) {
 local_c = 0xffffffff;
 }
 else {
 memset(buf,fill_value & 0xff,size);
 local_c = (uint)*(byte *)buf;
 }
 return local_c;
}



/* Function: memop_memcpy @ 00012a90 */

/* WARNING: Unknown calling convention */

int memop_memcpy(void *dst,void *src,size_t n)

{
 undefined4 local_c;
 
 if (((dst == (void *)0x0) || (src == (void *)0x0)) || (n == 0)) {
 local_c = -1;
 }
 else {
 memcpy(dst,src,n);
 local_c = *(int *)((int)dst + ((n >> 2) - 1) * 4);
 }
 return local_c;
}



/* Function: memop_memmove @ 00012b10 */

/* WARNING: Unknown calling convention */

int memop_memmove(void *buf,size_t n)

{
 undefined4 local_10;
 
 if ((buf == (void *)0x0) || (n < 2)) {
 local_10 = -1;
 }
 else {
 memmove((void *)((int)buf + 1),buf,n - 1);
 local_10 = (int)*(char *)((int)buf + 1);
 }
 return local_10;
}



/* Function: memop_memcmp @ 00012b90 */

/* WARNING: Unknown calling convention */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 undefined4 local_1c;
 int result;
 undefined4 local_10;
 
 if (((p1 == (void *)0x0) || (p2 == (void *)0x0)) || (n == 0)) {
 local_10 = 0;
 }
 else {
 iVar1 = memcmp(p1,p2,n);
 if (iVar1 < 1) {
 local_1c = 0;
 if (iVar1 < 0) {
 local_1c = -1;
 }
 }
 else {
 local_1c = 1;
 }
 local_10 = local_1c;
 }
 return local_10;
}



/* Function: memop_bzero @ 00012c40 */

/* WARNING: Unknown calling convention */

int memop_bzero(void *buf,size_t n)

{
 undefined4 local_c;
 
 if (buf == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 memset(buf,0,n);
 local_c = (uint)*(byte *)buf;
 }
 return local_c;
}



/* Function: memop_bcopy @ 00012cb0 */

/* WARNING: Unknown calling convention */

int memop_bcopy(void *src,void *dst,size_t n)

{
 undefined4 local_c;
 
 if (((src == (void *)0x0) || (dst == (void *)0x0)) || (n == 0)) {
 local_c = 0xffffffff;
 }
 else {
 local_bcopy(src,dst,n);
 local_c = (uint)*(byte *)dst;
 }
 return local_c;
}



/* Function: memop_unaligned_access @ 00012d30 */

/* WARNING: Unknown calling convention */

int memop_unaligned_access(char *buf)

{
 int value;
 int local_8;
 
 if (buf == (char *)0x0) {
 local_8 = -1;
 }
 else {
 local_8 = *(int *)(buf + 1);
 }
 return local_8;
}



/* Function: memop_memory_barrier @ 00012d70 */

/* WARNING: Unknown calling convention */

int memop_memory_barrier(int *flag)

{
 int local;
 undefined4 local_8;
 
 if (flag == (int *)0x0) {
 local_8 = -1;
 }
 else {
 LOCK();
 UNLOCK();
 local_8 = *flag + *flag;
 }
 return local_8;
}



/* Function: test_memory_op_functions @ 00012dc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 int iVar1;
 int flag;
 char unalign_buf [8];
 char bcopy_dst [4];
 char bcopy_src [4];
 char zero_buf [10];
 int cmp_b [3];
 int cmp_a [3];
 char move_buf [11];
 int int_dst [5];
 int int_src [5];
 char buffer [256];
 
 printf(&DAT_0001459a);
 memcpy(int_src,&DAT_0001464c,0x14);
 memset(int_dst,0,0x14);
 iVar1 = memop_memset(buffer,10,0x41);
 printf("MEMOP-L2-01: %d\n",iVar1);
 iVar1 = memop_memcpy(int_dst,int_src,0x14);
 printf("MEMOP-L2-02: %d\n",iVar1);
 move_buf[0] = 'H';
 move_buf[1] = 'e';
 move_buf[2] = 'l';
 move_buf[3] = 'l';
 move_buf[4] = 'o';
 move_buf[5] = 'W';
 move_buf[6] = 'o';
 move_buf[7] = 'r';
 move_buf[8] = 'l';
 move_buf[9] = 'd';
 move_buf[10] = '\0';
 iVar1 = memop_memmove(move_buf,10);
 printf("MEMOP-L2-03: %c\n",iVar1);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 iVar1 = memop_memcmp(cmp_a,cmp_b,0xc);
 printf("MEMOP-L2-04: %d\n",iVar1);
 iVar1 = memop_bzero(zero_buf,10);
 printf("MEMOP-L2-05: %d\n",iVar1);
 bcopy_src[0] = '\x01';
 bcopy_src[1] = '\x02';
 bcopy_src[2] = '\x03';
 bcopy_src[3] = '\x04';
 memset(bcopy_dst,0,4);
 iVar1 = memop_bcopy(bcopy_src,bcopy_dst,4);
 printf("MEMOP-L2-06: %d\n",iVar1);
 unalign_buf[0] = '\0';
 unalign_buf[1] = '\x01';
 unalign_buf[2] = '\x02';
 unalign_buf[3] = '\x03';
 unalign_buf[4] = '\x04';
 unalign_buf[5] = '\x05';
 unalign_buf[6] = '\x06';
 unalign_buf[7] = '\a';
 iVar1 = memop_unaligned_access(unalign_buf);
 printf("MEMOP-L3-01: 0x%x\n",iVar1);
 flag = 5;
 iVar1 = memop_memory_barrier(&flag);
 printf("MEMOP-L3-02: %d\n",iVar1);
 return;
}



/* Function: main @ 000130d0 */

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




/* Total functions decompiled: 70 */
