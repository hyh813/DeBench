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
typedef int __pid_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef int bool;
#define true 1
#define false 0
typedef unsigned char byte;
typedef unsigned long long ulonglong;
typedef int (*_func_int_int)(int);
typedef void (*code)(void);
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned long long undefined8;

/* Forward declarations for structs used in decompiled code */
/* Global variables */
int global_counter;
int global_array[10];
struct { int x; int y; } global_point;
int bss_var;
char bss_buffer[256];
int file_scope_static;
int *global_heap_ptr;
int (*global_func_ptr)(int);
int complex_init[6];
int extern_global_var;
char const_string[100];

/* External function declarations */
extern int double_value(int x);
extern int init_depends_on(int *p);
extern int static_helper(int x);

/* Standard library functions */
extern int printf(const char *format, ...);
extern void *memset(void *s, int c, size_t n);
extern void *malloc(size_t size);
extern void free(void *ptr);
extern void *calloc(size_t nmemb, size_t size);
extern void *realloc(void *ptr, size_t size);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *memmove(void *dest, const void *src, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern void bcopy(const void *src, void *dest, size_t n);
extern __pid_t fork(void);
extern __pid_t waitpid(__pid_t pid, int *status, int options);
extern void exit(int status);
extern void __sync_synchronize(void);
extern unsigned long long __aeabi_read_tp(void);

/* Data references */
extern char DAT_000135b4[];
extern char DAT_000136fe[];
extern char DAT_000138cd[];
extern char DAT_00013867[];
extern char DAT_0001388c[];
extern char DAT_00013857[];
extern char DAT_000138e3[];
extern char DAT_00013b46[];
extern int SUB_ffff0fc0(int, int, void*);
extern void SUB_ffff0fa0(void);

/* Definition for SUB_ffff0fc0 - atomic compare-and-swap */
int SUB_ffff0fc0(int old_val, int new_val, void *ptr)
{
 int *p = (int *)ptr;
 if (*p == old_val) {
  *p = new_val;
  return 0;
 }
 return 1;
}

/* Data definitions */
char DAT_000135b4[] = "MEM-L1-00 (test_stack_memory):\n";
char DAT_000136fe[] = "HEAP-L1-00 (test_heap_memory):\n";
char DAT_000138cd[] = "fork failed";
char DAT_00013867[] = "child exited with status %d\n";
char DAT_0001388c[] = "child terminated by signal %d\n";
char DAT_00013857[] = "%d\n";
char DAT_000138e3[] = "STM-L0-00 (test_static_global):\n";
char DAT_00013b46[] = "MEMOP-L1-00 (test_memory_op_functions):\n";

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
 * Binary: build/arm32/3/3_clang_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: local_vars @ 000107e8 */

int local_vars(int x)

{
 /* Unresolved local var: int a@[DW_OP_breg13(sp): +8]
 Unresolved local var: int b@[DW_OP_breg13(sp): +4]
 Unresolved local var: int c@[DW_OP_breg13(sp): 0] */
 return x * 2 + 10;
}



/* Function: local_array @ 0001081c */

int local_array(int n)

{
 int local_30;
 int aiStack_2c [11];
 
 /* Unresolved local var: int[10] arr@[DW_OP_breg13(sp): +4] */
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
 aiStack_2c[local_30] = local_30 * n;
 }
 return aiStack_2c[5];
}



/* Function: local_struct @ 00010874 */

int local_struct(int x)

{
 /* Unresolved local var: Point p@[DW_OP_breg13(sp): 0] */
 return x * 3;
}



/* Function: address_of_local @ 000108a4 */

int address_of_local(int *out)

{
 /* Unresolved local var: int local@[DW_OP_breg13(sp): 0] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 000108cc */

int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[DW_OP_breg13(sp): +4]
 Unresolved local var: int * p2@[DW_OP_breg13(sp): 0] */
 return *arr + *arr;
}



/* Function: large_stack_frame @ 00010900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 int local_814;
 byte abStack_810 [2048];
 
 /* Unresolved local var: char[2048] large_buf@[DW_OP_breg13(sp): +4] */
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_814 = 0; local_814 < 0x800; local_814 = local_814 + 1) {
 abStack_810[local_814] = (byte)local_814;
 }
 return (uint)abStack_810[0x400];
}



/* Function: vla_stack @ 0001095c */

int vla_stack(int n)

{
 int iVar1;
 int local_28 [5];
 int local_14;
 
 /* Unresolved local var: uint __vla_expr0@[???]
 Unresolved local var: int[819] vla@[???] */
 if ((n < 1) || (1000 < n)) {
 local_14 = -1;
 }
 else {
 iVar1 = -0x28 - (n * 4 + 7U & 0xfffffff8);
 /* Unresolved local var: int i@[???] */
 for (local_28[1] = 0; local_28[1] < n; local_28[1] = local_28[1] + 1) {
 *(int *)((int)local_28 + local_28[1] * 4 + iVar1 + 0x28) = local_28[1] << 1;
 }
 local_14 = *(int *)((int)local_28 + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x28);
 }
 return local_14;
}



/* Function: alloca_usage @ 00010a40 */

int alloca_usage(int n)

{
 int iVar1;
 int local_20 [4];
 
 /* Unresolved local var: int * arr@[???] */
 if (n < 1) {
 local_20[3] = -1;
 }
 else {
 iVar1 = -0x20 - (n * 4 + 7U & 0xfffffff8);
 /* Unresolved local var: int i@[???] */
 for (local_20[0] = 0; local_20[0] < n; local_20[0] = local_20[0] + 1) {
 *(int *)((int)local_20 + local_20[0] * 4 + iVar1 + 0x20) = local_20[0] * 3;
 }
 local_20[3] = *(int *)((int)local_20 + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x20);
 }
 return local_20[3];
}



/* Function: stack_alias @ 00010b00 */

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x00010b54 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int stack_alias(int *p1,int *p2)

{
 undefined4 local_10;
 undefined4 local_4;
 
 /* Unresolved local var: int local@[DW_OP_breg13(sp): 0] */
 if (p1 == (int *)0x0) {
 local_4 = -1;
 }
 else {
 local_4 = local_10;
 }
 return local_4;
}



/* Function: test_stack_memory @ 00010b78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 int iVar1;
 int local_38 [11];
 int iStack_c;
 
 /* Unresolved local var: int out@[???]
 Unresolved local var: int[10] arr5@[DW_OP_breg13(sp): +28]
 Unresolved local var: int alias_val@[DW_OP_breg13(sp): +24] */
 printf(&DAT_000135b4);
 iVar1 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",iVar1);
 iVar1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n",iVar1);
 iVar1 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",iVar1);
 iVar1 = address_of_local(&iStack_c);
 printf("MEM-L1-04 (address_of_local): %d\n",iVar1);
 memset(local_38 + 1,0,0x28);
 local_38[1] = 1;
 local_38[2] = 2;
 local_38[3] = 3;
 iVar1 = address_of_array(local_38 + 1);
 printf("MEM-L1-05 (address_of_array): %d\n",iVar1);
 iVar1 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",iVar1);
 iVar1 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",iVar1);
 iVar1 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",iVar1);
 local_38[0] = 0;
 iVar1 = stack_alias(local_38,local_38);
 printf("MEM-L2-04 (stack_alias): %d\n",iVar1);
 return;
}



/* Function: heap_basic @ 00010ce0 */

int heap_basic(int n)

{
 void *__ptr;
 undefined4 local_18;
 undefined4 local_c;
 
 /* Unresolved local var: int * arr@[DW_OP_breg13(sp): +12]
 Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
 __ptr = malloc(n << 2);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +8] */
 for (local_18 = 0; local_18 < n; local_18 = local_18 + 1) {
 *(int *)((int)__ptr + local_18 * 4) = local_18 << 1;
 }
 local_c = *(int *)((int)__ptr + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return local_c;
}



/* Function: heap_calloc @ 00010da0 */

int heap_calloc(int n)

{
 void *__ptr;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_c;
 
 /* Unresolved local var: int * arr@[DW_OP_breg13(sp): +12]
 Unresolved local var: int sum@[DW_OP_breg13(sp): +8] */
 __ptr = calloc(n,4);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 local_18 = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
 for (local_1c = 0; local_1c < n; local_1c = local_1c + 1) {
 local_18 = local_18 + *(int *)((int)__ptr + local_1c * 4);
 }
 free(__ptr);
 local_c = local_18;
 }
 return local_c;
}



/* Function: heap_realloc @ 00010e50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 void *__ptr;
 int iVar1;
 void *__ptr_00;
 undefined4 local_28;
 undefined4 local_20;
 undefined4 local_14;
 undefined4 local_c;
 
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int old_val@[DW_OP_breg13(sp): +16]
 Unresolved local var: int * new_p@[DW_OP_breg13(sp): +12]
 Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
 *(int *)((int)__ptr + local_14 * 4) = local_14 + 1;
 }
 iVar1 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 local_c = -2;
 }
 else {
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +8] */
 for (local_20 = 5; local_20 < 10; local_20 = local_20 + 1) {
 *(int *)((int)__ptr_00 + local_20 * 4) = local_20 * 10;
 }
 if (*(int *)((int)__ptr_00 + 8) == iVar1) {
 local_28 = *(int *)((int)__ptr_00 + 0x14);
 }
 else {
 local_28 = -3;
 }
 free(__ptr_00);
 local_c = local_28;
 }
 }
 return local_c;
}



/* Function: heap_array @ 00010fb0 */

int heap_array(int n)

{
 void *__ptr;
 undefined4 local_18;
 undefined4 local_c;
 
 /* Unresolved local var: int * arr@[DW_OP_breg13(sp): +12]
 Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
 __ptr = malloc(n << 2);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +8] */
 for (local_18 = 0; local_18 < n; local_18 = local_18 + 1) {
 *(int *)((int)__ptr + local_18 * 4) = local_18 * 3;
 }
 local_c = *(int *)((int)__ptr + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return local_c;
}



/* Function: heap_struct @ 00011070 */

int heap_struct(int x)

{
 int *__ptr;
 int local_c;
 
 /* Unresolved local var: Point * p@[DW_OP_breg13(sp): +4]
 Unresolved local var: int result@[DW_OP_breg13(sp): 0] */
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



/* Function: heap_nested @ 000110fc */

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



/* Function: linked_list_heap @ 000111d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int *local_28;
 int local_24;
 int local_18;
 int *local_14;
 int *local_10;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: int sum@[DW_OP_breg13(sp): +12]
 Unresolved local var: Node * temp@[DW_OP_breg13(sp): +8] */
 local_10 = (int *)0x0;
 local_14 = (int *)0x0;
 /* Unresolved local var: int i@[???] */
 local_18 = 0;
 while( true ) {
 if (4 < local_18) {
 local_24 = 0;
 for (local_28 = local_10; local_28 != (int *)0x0; local_28 = (int *)local_28[1]) {
 local_24 = local_24 + *local_28;
 }
 while (local_10 != (int *)0x0) {
 /* Unresolved local var: Node * temp@[DW_OP_breg13(sp): +4] */
 piVar2 = (int *)local_10[1];
 free(local_10);
 local_10 = piVar2;
 }
 return local_24;
 }
 /* Unresolved local var: Node * new_node@[DW_OP_breg13(sp): +20] */
 piVar2 = malloc(8);
 if (piVar2 == (int *)0x0) break;
 *piVar2 = local_18 * 10;
 piVar2[1] = 0;
 piVar1 = piVar2;
 if (local_10 != (int *)0x0) {
 local_14[1] = (int)piVar2;
 piVar1 = local_10;
 }
 local_10 = piVar1;
 local_18 = local_18 + 1;
 local_14 = piVar2;
 }
 while (local_10 != (int *)0x0) {
 /* Unresolved local var: Node * temp@[DW_OP_breg13(sp): +16] */
 piVar2 = (int *)local_10[1];
 free(local_10);
 local_10 = piVar2;
 }
 return -1;
}



/* Function: create_tree_node @ 00011364 */

TreeNode * create_tree_node(int data)

{
 TreeNode *pTVar1;
 
 /* Unresolved local var: TreeNode * node@[DW_OP_breg13(sp): 0] */
 pTVar1 = malloc(0xc);
 if (pTVar1 != (TreeNode *)0x0) {
 pTVar1->data = data;
 pTVar1->left = (TreeNode *)0x0;
 pTVar1->right = (TreeNode *)0x0;
 }
 return pTVar1;
}



/* Function: tree_heap_traversal @ 000113c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 TreeNode *__ptr;
 TreeNode *pTVar1;
 int local_c;
 
 /* Unresolved local var: TreeNode * root@[DW_OP_breg13(sp): +8]
 Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
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



/* Function: memory_leak @ 000114fc */

int memory_leak(int n)

{
 void *pvVar1;
 undefined4 local_18;
 undefined4 local_c;
 
 /* Unresolved local var: int * leak@[DW_OP_breg13(sp): +4] */
 pvVar1 = malloc(n << 2);
 if (pvVar1 == (void *)0x0) {
 local_c = -1;
 }
 else {
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_18 = 0; local_18 < n; local_18 = local_18 + 1) {
 *(int *)((int)pvVar1 + local_18 * 4) = local_18;
 }
 local_c = *(int *)((int)pvVar1 + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU));
 }
 return local_c;
}



/* Function: dangling_pointer @ 000115a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 int *__ptr;
 int local_c;
 
 /* Unresolved local var: int * p@[DW_OP_breg13(sp): +8]
 Unresolved local var: int value@[DW_OP_breg13(sp): +4]
 Unresolved local var: int dangerous@[DW_OP_breg13(sp): 0] */
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



/* Function: double_free @ 00011638 */

int double_free(int *p)

{
 undefined4 *__ptr;
 undefined4 local_c;
 
 if (p == (int *)0x0) {
 /* Unresolved local var: int * temp@[DW_OP_breg13(sp): +4] */
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



/* Function: heap_overflow @ 000116c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 int *__ptr;
 int local_14;
 int local_c;
 
 /* Unresolved local var: int * arr@[DW_OP_breg13(sp): +8]
 Unresolved local var: int result@[DW_OP_breg13(sp): 0] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
 for (local_14 = 0; local_14 < 0xb; local_14 = local_14 + 1) {
 __ptr[local_14] = local_14 * 100;
 }
 local_c = *__ptr;
 free(__ptr);
 }
 return local_c;
}



/* Function: test_heap_memory @ 00011770 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 int iVar1;
 uint local_18;
 int local_14;
 __pid_t local_10;
 Node *local_c;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: pid_t pid@[???] */
 printf(&DAT_000136fe);
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
 local_c = (Node *)0x0;
 iVar1 = heap_nested(&local_c);
 printf("HEAP-L2-06 (heap_nested): %d\n",iVar1);
 if (local_c != (Node *)0x0) {
 free(local_c->next);
 free(local_c);
 }
 iVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",iVar1);
 iVar1 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",iVar1);
 iVar1 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n",iVar1);
 printf("HEAP-L3-04 (dangling_pointer): ");
 local_10 = fork();
 if (local_10 != 0) {
 if (local_10 < 1) {
 perror(&DAT_000138cd);
 }
 else {
 /* Unresolved local var: int status@[DW_OP_breg13(sp): +8] */
 waitpid(local_10,(int *)&local_18,0);
 if ((local_18 & 0x7f) == 0) {
 printf(&DAT_00013867,local_18 >> 8 & 0xff);
 }
 else if (0 < (int)(((local_18 & 0x7f) + 1) * 0x1000000) >> 0x19) {
 printf(&DAT_0001388c,local_18 & 0x7f);
 }
 }
 return;
 }
 /* Unresolved local var: int result@[DW_OP_breg13(sp): +12] */
 local_14 = dangling_pointer();
 printf(&DAT_00013857,local_14);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 000119b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 000119e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 000119f4 */

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



/* Function: static_local @ 00011a50 */

static int static_local_counter;

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



/* Function: call_static_func @ 00011ac4 */

int call_static_func(int x)

{
 int iVar1;
 
 iVar1 = static_helper(x);
 return iVar1 + 1;
}



/* Function: static_helper @ 00011aec */

int static_helper(int x)

{
 return x << 1;
}



/* Function: access_extern_global @ 00011b04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00011b1c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int extern_function(int x);

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 00011b34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00011b4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return bss_var;
}



/* Function: access_bss_buffer @ 00011b5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return (uint)(byte)bss_buffer[0];
}



/* Function: global_struct_access @ 00011b70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return global_point.x + global_point.y;
}



/* Function: set_file_static @ 00011b94 */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 00011bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00011bc8 */

void set_global_callback(_func_int_int *f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00011bec */

int call_global_callback(int x)

{
 int local_c;
 
 if (global_func_ptr == (_func_int_int *)0x0) {
 local_c = -1;
 }
 else {
 local_c = (*global_func_ptr)(x);
 }
 return local_c;
}



/* Function: global_heap_store @ 00011c50 */

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



/* Function: static_complex_init @ 00011cb4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return complex_init[0] + complex_init[2] + complex_init[4];
}



/* Function: tls_access @ 00011ce0 */

int tls_access(int val)

{
 int iVar1;
 undefined4 extraout_r2;
 undefined8 uVar2;
 undefined4 local_10;
 
 uVar2 = __aeabi_read_tp();
 iVar1 = (int)((ulonglong)uVar2 >> 0x20);
 *(undefined4 *)((int)uVar2 + iVar1) = extraout_r2;
 return *(int *)((int)uVar2 + iVar1) << 1;
}



/* Function: init_order_test @ 00011d18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 int iVar1;
 int local_c;
 
 /* Unresolved local var: int external_val@[DW_OP_breg13(sp): +4] */
 local_c = 0x14;
 iVar1 = init_depends_on(&local_c);
 return iVar1;
}



/* Function: init_depends_on @ 00011d40 */

static int init_depends_on_static_depends;

int init_depends_on(int *p)

{
 if (p != (int *)0x0) {
 init_depends_on_static_depends = *p;
 }
 return init_depends_on_static_depends;
}



/* Function: test_static_global @ 00011d88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 int iVar1;
 int local_c;
 
 /* Unresolved local var: int heap_val@[???] */
 printf(&DAT_000138e3);
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
 local_c = 100;
 iVar1 = global_heap_store(&local_c);
 printf("STM-L2-08 (global_heap_store): %d\n",iVar1);
 iVar1 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n",iVar1);
 iVar1 = tls_access(10);
 printf("STM-L3-01 (tls_access): %d\n",iVar1);
 iVar1 = init_order_test();
 printf("STM-L3-02 (init_order_test): %d\n",iVar1);
 return;
}



/* Function: double_value @ 00011fa8 */

int double_value(int x)

{
 return x << 1;
}



/* Function: memop_memset @ 00011fc0 */

int memop_memset(void *buf,size_t size,int fill_value)

{
 uint local_c;
 
 if ((buf == (void *)0x0) || (size == 0)) {
 local_c = 0xffffffff;
 }
 else {
 memset(buf,fill_value,size);
 local_c = (uint)*(byte *)buf;
 }
 return local_c;
}



/* Function: memop_memcpy @ 00012034 */

int memop_memcpy(void *dst,void *src,size_t n)

{
 int local_c;
 
 if (((dst == (void *)0x0) || (src == (void *)0x0)) || (n == 0)) {
 local_c = -1;
 }
 else {
 memcpy(dst,src,n);
 local_c = *(int *)((int)dst + ((n & 0xfffffffc) - 4));
 }
 return local_c;
}



/* Function: memop_memmove @ 000120c4 */

int memop_memmove(void *buf,size_t n)

{
 uint local_c;
 
 if ((buf == (void *)0x0) || (n < 2)) {
 local_c = 0xffffffff;
 }
 else {
 memmove((void *)((int)buf + 1),buf,n - 1);
 local_c = (uint)*(byte *)((int)buf + 1);
 }
 return local_c;
}



/* Function: memop_memcmp @ 00012138 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int local_20;
 int local_c;
 
 /* Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
 if (((p1 == (void *)0x0) || (p2 == (void *)0x0)) || (n == 0)) {
 local_c = 0;
 }
 else {
 local_20 = memcmp(p1,p2,n);
 if (local_20 < 1) {
 local_20 = local_20 >> 0x1f;
 }
 else {
 local_20 = 1;
 }
 local_c = local_20;
 }
 return local_c;
}



/* Function: memop_bzero @ 000121e8 */

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



/* Function: memop_bcopy @ 00012248 */

int memop_bcopy(void *src,void *dst,size_t n)

{
 uint local_c;
 
 if (((src == (void *)0x0) || (dst == (void *)0x0)) || (n == 0)) {
 local_c = 0xffffffff;
 }
 else {
 bcopy(src,dst,n);
 local_c = (uint)*(byte *)dst;
 }
 return local_c;
}



/* Function: memop_unaligned_access @ 000122cc */

int memop_unaligned_access(char *buf)

{
 int local_4;
 
 /* Unresolved local var: int value@[DW_OP_breg13(sp): 0] */
 if (buf == (char *)0x0) {
 local_4 = -1;
 }
 else {
 local_4 = *(int *)(buf + 1);
 }
 return local_4;
}



/* Function: memop_memory_barrier @ 0001232c */

int memop_memory_barrier(int *flag)

{
 undefined4 local_c;
 
 /* Unresolved local var: int local@[DW_OP_breg13(sp): +4] */
 if (flag == (int *)0x0) {
 local_c = -1;
 }
 else {
 local_c = *flag;
 __sync_synchronize();
 local_c = local_c + *flag;
 }
 return local_c;
}



/* Function: test_memory_op_functions @ 00012390 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 int iVar1;
 int local_17c;
 char local_178 [8];
 undefined4 local_170;
 undefined4 local_16c;
 undefined1 auStack_166 [10];
 undefined4 local_15c;
 undefined4 local_158;
 undefined4 local_154;
 undefined4 local_150;
 undefined4 local_14c;
 undefined4 local_148;
 undefined4 local_144;
 undefined4 local_140;
 undefined2 local_13c;
 undefined1 local_13a;
 undefined4 local_138;
 undefined4 local_134;
 undefined4 local_130;
 undefined4 local_12c;
 undefined4 local_128;
 undefined4 local_124;
 undefined4 uStack_120;
 undefined4 uStack_11c;
 undefined4 uStack_118;
 undefined4 uStack_114;
 undefined1 auStack_110 [256];
 
 /* Unresolved local var: char[256] buffer@[DW_OP_breg13(sp): +120]
 Unresolved local var: int[5] int_src@[DW_OP_breg13(sp): +100]
 Unresolved local var: int[5] int_dst@[DW_OP_breg13(sp): +80]
 Unresolved local var: char[11] move_buf@[DW_OP_breg13(sp): +68]
 Unresolved local var: int[3] cmp_a@[DW_OP_breg13(sp): +56]
 Unresolved local var: int[3] cmp_b@[DW_OP_breg13(sp): +44]
 Unresolved local var: char[10] zero_buf@[DW_OP_breg13(sp): +34]
 Unresolved local var: char[4] bcopy_src@[DW_OP_breg13(sp): +28]
 Unresolved local var: char[4] bcopy_dst@[DW_OP_breg13(sp): +24]
 Unresolved local var: char[8] unalign_buf@[DW_OP_breg13(sp): +16]
 Unresolved local var: int flag@[DW_OP_breg13(sp): +12] */
 printf(&DAT_00013b46);
 local_124 = 10;
 uStack_120 = 0x14;
 uStack_11c = 0x1e;
 uStack_118 = 0x28;
 uStack_114 = 0x32;
 local_128 = 0;
 local_12c = 0;
 local_130 = 0;
 local_134 = 0;
 local_138 = 0;
 iVar1 = memop_memset(auStack_110,10,0x41);
 printf("MEMOP-L2-01: %d\n",iVar1);
 iVar1 = memop_memcpy(&local_138,&local_124,0x14);
 printf("MEMOP-L2-02: %d\n",iVar1);
 local_13a = 0;
 local_13c = 0x646c;
 local_140 = 0x726f576f;
 local_144 = 0x6c6c6548;
 iVar1 = memop_memmove(&local_144,10);
 printf("MEMOP-L2-03: %c\n",iVar1);
 local_14c = 2;
 local_148 = 3;
 local_150 = 1;
 local_158 = 2;
 local_154 = 4;
 local_15c = 1;
 iVar1 = memop_memcmp(&local_150,&local_15c,0xc);
 printf("MEMOP-L2-04: %d\n",iVar1);
 iVar1 = memop_bzero(auStack_166,10);
 printf("MEMOP-L2-05: %d\n",iVar1);
 local_16c = 0x4030201;
 local_170 = 0;
 iVar1 = memop_bcopy(&local_16c,&local_170,4);
 printf("MEMOP-L2-06: %d\n",iVar1);
  strncpy(local_178 + 4,"\x04\x05\x06\a",4);
 local_178[0] = '\0';
 local_178[1] = '\x01';
 local_178[2] = '\x02';
 local_178[3] = '\x03';
 iVar1 = memop_unaligned_access(local_178);
 printf("MEMOP-L3-01: 0x%x\n",iVar1);
 local_17c = 5;
 iVar1 = memop_memory_barrier(&local_17c);
 printf("MEMOP-L3-02: %d\n",iVar1);
 return;
}



/* Function: main @ 000125b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 000125ec */

static int extern_function(int x)

{
 return x * 3;
}



/* Function: decompiled_sync_fetch_and_add_4 @ 00012604 */

int decompiled_sync_fetch_and_add_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 + param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_fetch_and_sub_4 - GCC builtin, removed */



/* Function: __sync_fetch_and_or_4 - GCC builtin, removed */



/* Function: __sync_fetch_and_and_4 - GCC builtin, removed */



/* Function: __sync_fetch_and_xor_4 - GCC builtin, removed */



/* Function: __sync_fetch_and_nand_4 - GCC builtin, removed */



/* Function: decompiled_sync_fetch_and_add_2 @ 00012758 */

int decompiled_sync_fetch_and_add_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: decompiled_sync_fetch_and_sub_2 @ 000127b8 */

int decompiled_sync_fetch_and_sub_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: decompiled_sync_fetch_and_or_2 @ 00012818 */

int decompiled_sync_fetch_and_or_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: decompiled_sync_fetch_and_and_2 @ 00012878 */

int decompiled_sync_fetch_and_and_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: decompiled_sync_fetch_and_xor_2 @ 000128d8 */

int decompiled_sync_fetch_and_xor_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: decompiled_sync_fetch_and_nand_2 @ 00012938 */

int decompiled_sync_fetch_and_nand_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: decompiled_sync_fetch_and_add_1 @ 0001299c */

int decompiled_sync_fetch_and_add_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: decompiled_sync_fetch_and_sub_1 @ 000129f8 */

int decompiled_sync_fetch_and_sub_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: decompiled_sync_fetch_and_or_1 @ 00012a54 */

int decompiled_sync_fetch_and_or_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: decompiled_sync_fetch_and_and_1 @ 00012ab0 */

int decompiled_sync_fetch_and_and_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: decompiled_sync_fetch_and_xor_1 @ 00012b0c */

int decompiled_sync_fetch_and_xor_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: decompiled_sync_fetch_and_nand_1 @ 00012b68 */

int decompiled_sync_fetch_and_nand_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: decompiled_sync_add_and_fetch_4 @ 00012bc8 */

int decompiled_sync_add_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: decompiled_sync_sub_and_fetch_4 @ 00012c00 */

int decompiled_sync_sub_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: decompiled_sync_or_and_fetch_4 @ 00012c38 */

uint decompiled_sync_or_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: decompiled_sync_and_and_fetch_4 @ 00012c70 */

uint decompiled_sync_and_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: decompiled_sync_xor_and_fetch_4 @ 00012ca8 */

uint decompiled_sync_xor_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: decompiled_sync_nand_and_fetch_4 @ 00012ce0 */

uint decompiled_sync_nand_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: decompiled_sync_add_and_fetch_2 @ 00012d1c */

int decompiled_sync_add_and_fetch_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: decompiled_sync_sub_and_fetch_2 @ 00012d84 */

int decompiled_sync_sub_and_fetch_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: decompiled_sync_or_and_fetch_2 @ 00012dec */

int decompiled_sync_or_and_fetch_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: decompiled_sync_and_and_fetch_2 @ 00012e54 */

int decompiled_sync_and_and_fetch_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: decompiled_sync_xor_and_fetch_2 @ 00012ebc */

int decompiled_sync_xor_and_fetch_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: decompiled_sync_nand_and_fetch_2 @ 00012f24 */

int decompiled_sync_nand_and_fetch_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: decompiled_sync_add_and_fetch_1 @ 00012f90 */

int decompiled_sync_add_and_fetch_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: decompiled_sync_sub_and_fetch_1 @ 00012ff4 */

int decompiled_sync_sub_and_fetch_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: decompiled_sync_or_and_fetch_1 @ 00013058 */

int decompiled_sync_or_and_fetch_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: decompiled_sync_and_and_fetch_1 @ 000130bc */

int decompiled_sync_and_and_fetch_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: decompiled_sync_xor_and_fetch_1 @ 00013120 */

int decompiled_sync_xor_and_fetch_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: decompiled_sync_nand_and_fetch_1 @ 00013184 */

int decompiled_sync_nand_and_fetch_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: decompiled_sync_val_compare_and_swap_4 @ 000131ec */

int decompiled_sync_val_compare_and_swap_4(int *param_1,int param_2,undefined4 param_3)

{
 int iVar1;
 
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = SUB_ffff0fc0(param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}



/* Function: decompiled_sync_val_compare_and_swap_2 @ 0001323c */

uint decompiled_sync_val_compare_and_swap_2(uint *param_1,uint param_2,int param_3)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = ((uintptr_t)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xffff)) {
 return (int)(short)uVar1;
 }
 iVar3 = SUB_ffff0fc0
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (uint *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: decompiled_sync_val_compare_and_swap_1 @ 000132b4 */

uint decompiled_sync_val_compare_and_swap_1(uint *param_1,uint param_2,int param_3)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = ((uintptr_t)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((uintptr_t)param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xff)) {
 return (int)(char)uVar1;
 }
 iVar3 = SUB_ffff0fc0
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (uint *)((uintptr_t)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: decompiled_sync_bool_compare_and_swap_4 @ 00013328 */

bool decompiled_sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 int iVar1;
 
 iVar1 = SUB_ffff0fc0(param_2,param_3,param_1);
 return iVar1 == 0;
}



/* Function: decompiled_sync_bool_compare_and_swap_2 @ 00013354 */

bool decompiled_sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = decompiled_sync_val_compare_and_swap_2((uint *)param_1, param_2, param_2);
 return param_2 == iVar1;
}



/* Function: decompiled_sync_bool_compare_and_swap_1 @ 00013370 */

bool decompiled_sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = decompiled_sync_val_compare_and_swap_1((uint *)param_1, param_2, param_2);
 return param_2 == iVar1;
}



/* Function: decompiled_sync_lock_test_and_set_4 @ 00013398 */

undefined4 decompiled_sync_lock_test_and_set_4(undefined4 *param_1,undefined4 param_2)

{
 int iVar1;
 undefined4 uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: decompiled_sync_lock_test_and_set_2 @ 000133d0 */

int decompiled_sync_lock_test_and_set_2(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = SUB_ffff0fc0
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}



/* Function: decompiled_sync_lock_test_and_set_1 @ 00013430 */

int decompiled_sync_lock_test_and_set_1(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = SUB_ffff0fc0
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}



/* Function: SUB_ffff0fa0 - memory barrier stub */
void SUB_ffff0fa0(void)
{
 __sync_synchronize();
 return;
}

/* Function: decompiled_sync_lock_release_8 @ 0001348c */

void decompiled_sync_lock_release_8(undefined4 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}



/* Function: decompiled_sync_lock_release_4 @ 000134b0 */

void decompiled_sync_lock_release_4(undefined4 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}



/* Function: decompiled_sync_lock_release_2 @ 000134d0 */

void decompiled_sync_lock_release_2(undefined2 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}



/* Function: decompiled_sync_lock_release_1 @ 000134f0 */

void decompiled_sync_lock_release_1(undefined1 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 114 */
