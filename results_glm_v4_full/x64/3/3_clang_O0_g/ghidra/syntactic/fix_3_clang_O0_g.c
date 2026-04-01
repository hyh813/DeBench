#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <sys/wait.h>

#define true 1
#define false 0

/* Standard types (int8_t, int16_t, int32_t, int64_t, uint8_t, etc.) are defined in included headers */

/* Additional type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long unsigned_long;
typedef unsigned char byte;
typedef void (*code)(void);
typedef int (*_func_int_int)(int);

/* Ghidra undefined types - standard C replacements */
typedef unsigned int undefined;
typedef unsigned int undefined4;
typedef unsigned char undefined1;

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

/* Global variable declarations */
extern int global_counter;
extern int global_array[10];
extern int extern_global_var;
extern const char const_string[];
extern Point global_point;
extern int file_scope_static;
extern _func_int_int global_func_ptr;
extern int *global_heap_ptr;
extern int complex_init[5];

/* Data references */
extern const char DAT_00103004[];
extern const char DAT_0010314e[];
extern const char DAT_0010331d[];
extern const char DAT_001032b7[];
extern const char DAT_001032dc[];
extern const char DAT_001032a7[];
extern const char DAT_00103333[];
extern const char DAT_00103596[];

/* Data constant definitions */
const char DAT_00103004[] = "Testing stack memory...\n";
const char DAT_0010314e[] = "Testing heap memory...\n";
const char DAT_0010331d[] = "fork failed";
const char DAT_001032b7[] = "exited with status %d\n";
const char DAT_001032dc[] = "killed by signal %d\n";
const char DAT_001032a7[] = "%d\n";
const char DAT_00103333[] = "Testing static/global memory...\n";
const char DAT_00103596[] = "Testing memory operations...\n";

/* Stack reference for stack_alias function - removed to prevent multiple definition */

/* BSS variable definitions */
int bss_var = 0;
char bss_buffer[10];

/* Global variable definitions */
int global_counter = 0;
int global_array[10] = {0};
const char const_string[] = "Hello";
Point global_point = {0, 0};
int file_scope_static = 0;
_func_int_int global_func_ptr = NULL;
int *global_heap_ptr = NULL;
int complex_init[5] = {1, 3, 5, 7, 9};
int static_local_counter = 0;

/* Forward declarations */
int static_helper(int x);
int helper_function(int x);
int init_depends_on(int *p);
int double_value(int x);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/3/3_clang_O0_g
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




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */







/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: local_vars @ 00101210 */

int local_vars(int x)

{
 int c;
 int b;
 int a;
 int x_local;
 
 return x * 2 + 10;
}



/* Function: local_array @ 00101240 */

int local_array(int n)

{
 int i;
 int arr [10];
 int n_local;
 
 for (i = 0; i < 10; i = i + 1) {
 arr[i] = i * n;
 }
 return arr[5];
}



/* Function: local_struct @ 00101280 */

int local_struct(int x)

{
 Point p;
 int x_local;
 
 return x * 3;
}



/* Function: address_of_local @ 001012a0 */

int address_of_local(int *out)

{
 int local;
 int *out_local;
 
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 001012c0 */

int address_of_array(int *arr)

{
 int *p2;
 int *p1;
 int *arr_local;
 
 return *arr + *arr;
}



/* Function: large_stack_frame @ 001012f0 */

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



/* Function: vla_stack @ 00101360 */

int vla_stack(int n)

{
 long lVar1;
 int aiStack_38 [5];
 int i;
 unsigned_long __vla_expr0;
 int n_local;
 int local_c;
 
 /* Unresolved local var: int[825] vla@[???] */
 if ((n < 1) || (1000 < n)) {
 local_c = -1;
 }
 else {
 lVar1 = -0x38 - ((ulong)(uint)n * 4 + 0xf & 0xfffffffffffffff0);
 for (i = 0; i < n; i = i + 1) {
 *(int *)((long)aiStack_38 + (long)i * 4 + lVar1 + 0x38) = i << 1;
 }
 local_c = *(int *)((long)aiStack_38 + (long)(n / 2) * 4 + lVar1 + 0x38);
 }
 return local_c;
}



/* Function: alloca_usage @ 00101410 */

int alloca_usage(int n)

{
 long lVar1;
 int local_28 [3];
 int i;
 int *arr;
 int n_local;
 int local_c;
 
 if (n < 1) {
 local_c = -1;
 }
 else {
 lVar1 = -0x28 - ((long)n * 4 + 0xfU & 0xfffffffffffffff0);
 for (i = 0; i < n; i = i + 1) {
 *(int *)((long)local_28 + (long)i * 4 + lVar1 + 0x28) = i * 3;
 }
 local_c = *(int *)((long)local_28 + (long)(n / 2) * 4 + lVar1 + 0x28);
 }
 return local_c;
}



/* Function: stack_alias @ 001014b0 */

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffdc : 0x001014fa */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int stack_alias(int *p1,int *p2)

{
 int local;
 int *p2_local;
 int *p1_local;
 undefined4 local_c;
 
 if (p1 == p2) {
 local_c = -1;
 }
 else {
 local_c = local;
 }
 return local_c;
}



/* Function: test_stack_memory @ 00101510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 uint uVar1;
 int alias_val;
 int arr5 [10];
 int out;
 
 printf(&DAT_00103004);
 uVar1 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n",(ulong)uVar1);
 uVar1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n",(ulong)uVar1);
 uVar1 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n",(ulong)uVar1);
 address_of_local(&out);
 printf("MEM-L1-04 (address_of_local): %d\n");
 memset(arr5,0,0x28);
 arr5[0] = 1;
 arr5[1] = 2;
 arr5[2] = 3;
 uVar1 = address_of_array(arr5);
 printf("MEM-L1-05 (address_of_array): %d\n",(ulong)uVar1);
 uVar1 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)uVar1);
 uVar1 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n",(ulong)uVar1);
 uVar1 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n",(ulong)uVar1);
 alias_val = 0;
 uVar1 = stack_alias(&alias_val,&alias_val);
 printf("MEM-L2-04 (stack_alias): %d\n",(ulong)uVar1);
 return;
}



/* Function: heap_basic @ 00101640 */

int heap_basic(int n)

{
 void *__ptr;
 int result;
 int i;
 int *arr;
 int n_local;
 undefined4 local_c;
 
 __ptr = malloc((long)n << 2);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 for (i = 0; i < n; i = i + 1) {
 *(int *)((long)__ptr + (long)i * 4) = i << 1;
 }
 local_c = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 }
 return local_c;
}



/* Function: heap_calloc @ 001016e0 */

int heap_calloc(int n)

{
 void *__ptr;
 int i;
 int sum;
 int *arr;
 int n_local;
 undefined4 local_c;
 
 __ptr = calloc((long)n,4);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = *(int *)((long)__ptr + (long)i * 4) + sum;
 }
 free(__ptr);
 local_c = sum;
 }
 return local_c;
}



/* Function: heap_realloc @ 00101770 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 int iVar1;
 void *__ptr;
 void *__ptr_00;
 undefined4 local_34;
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
 *(int *)((long)__ptr + (long)i * 4) = i + 1;
 }
 iVar1 = *(int *)((long)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 local_c = -2;
 }
 else {
 for (i_1 = 5; i_1 < 10; i_1 = i_1 + 1) {
 *(int *)((long)__ptr_00 + (long)i_1 * 4) = i_1 * 10;
 }
 if (*(int *)((long)__ptr_00 + 8) == iVar1) {
 local_34 = *(int *)((long)__ptr_00 + 0x14);
 }
 else {
 local_34 = -3;
 }
 free(__ptr_00);
 local_c = local_34;
 }
 }
 return local_c;
}



/* Function: heap_array @ 00101890 */

int heap_array(int n)

{
 void *__ptr;
 int result;
 int i;
 int *arr;
 int n_local;
 undefined4 local_c;
 
 __ptr = malloc((long)n << 2);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 for (i = 0; i < n; i = i + 1) {
 *(int *)((long)__ptr + (long)i * 4) = i * 3;
 }
 local_c = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 }
 return local_c;
}



/* Function: heap_struct @ 00101930 */

int heap_struct(int x)

{
 int *__ptr;
 int result;
 Point *p;
 int x_local;
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



/* Function: heap_nested @ 001019a0 */

int heap_nested(Node **head)

{
 Node *pNVar1;
 Node **head_local;
 int local_c;
 
 pNVar1 = malloc(0x10);
 *head = pNVar1;
 if (*head == (Node *)0x0) {
 local_c = -1;
 }
 else {
 (*head)->data = 10;
 pNVar1 = malloc(0x10);
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



/* Function: linked_list_heap @ 00101a60 */

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



/* Function: create_tree_node @ 00101bc0 */

TreeNode * create_tree_node(int data)

{
 TreeNode *pTVar1;
 TreeNode *node;
 int data_local;
 
 pTVar1 = malloc(0x18);
 if (pTVar1 != (TreeNode *)0x0) {
 pTVar1->data = data;
 pTVar1->left = (TreeNode *)0x0;
 pTVar1->right = (TreeNode *)0x0;
 }
 return pTVar1;
}



/* Function: tree_heap_traversal @ 00101c10 */

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



/* Function: memory_leak @ 00101d30 */

int memory_leak(int n)

{
 void *pvVar1;
 int i;
 int *leak;
 int n_local;
 undefined4 local_c;
 
 pvVar1 = malloc((long)n << 2);
 if (pvVar1 == (void *)0x0) {
 local_c = -1;
 }
 else {
 for (i = 0; i < n; i = i + 1) {
 *(int *)((long)pvVar1 + (long)i * 4) = i;
 }
 local_c = *(int *)((long)pvVar1 + (long)(n / 2) * 4);
 }
 return local_c;
}



/* Function: dangling_pointer @ 00101dc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 uint *__ptr;
 int dangerous;
 int value;
 int *p;
 uint local_c;
 
 __ptr = malloc(4);
 if (__ptr == (uint *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 *__ptr = 0x2a;
 printf("value before free: %d\n",(ulong)*__ptr);
 free(__ptr);
 local_c = *__ptr;
 }
 return local_c;
}



/* Function: double_free @ 00101e40 */

int double_free(int *p)

{
 undefined4 *__ptr;
 int *temp;
 int *p_local;
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



/* Function: heap_overflow @ 00101ec0 */

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



/* Function: test_heap_memory @ 00101f40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 uint uVar1;
 int status;
 int result;
 pid_t pid;
 Node *head;
 
 printf(&DAT_0010314e);
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
 if (pid != 0) {
 if (pid < 1) {
 perror(&DAT_0010331d);
 }
 else {
 waitpid(pid,&status,0);
 if ((status & 0x7fU) == 0) {
 printf(&DAT_001032b7,(ulong)(uint)((int)(status & 0xff00U) >> 8));
 }
 else if ('\0' < (char)(((byte)status & 0x7f) + 1) >> 1) {
 printf(&DAT_001032dc,(ulong)(status & 0x7f));
 }
 }
 return;
 }
 result = dangling_pointer();
 printf(&DAT_001032a7,(ulong)(uint)result);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 00102130 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00102150 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00102160 */

int global_array_access(int idx)

{
 int idx_local;
 int local_c;
 
 if ((idx < 0) || (9 < idx)) {
 local_c = -1;
 }
 else {
 local_c = global_array[idx];
 }
 return local_c;
}



/* Function: static_local @ 001021a0 */

int static_local(int reset)

{
 int reset_local;
 undefined4 local_c;
 static int counter;
 
 if (reset == 0) {
 local_c = counter + 1;
 }
 else {
 local_c = 0;
 }
 counter = local_c;
 return local_c;
}



/* Function: call_static_func @ 001021f0 */

int call_static_func(int x)

{
 int iVar1;
 int x_local;
 
 iVar1 = static_helper(x);
 return iVar1 + 1;
}



/* Function: static_helper @ 00102210 */

int static_helper(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: access_extern_global @ 00102220 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00102240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = helper_function(5);
 return iVar1;
}



/* Function: read_const_data @ 00102250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00102270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return bss_var;
}



/* Function: access_bss_buffer @ 00102280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return (int)bss_buffer[0];
}



/* Function: global_struct_access @ 00102290 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return global_point.x + global_point.y;
}



/* Function: set_file_static @ 001022b0 */

void set_file_static(int val)

{
 int val_local;
 
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 001022d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 001022e0 */

void set_global_callback(_func_int_int *f)

{
 _func_int_int *f_local;
 
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00102300 */

int call_global_callback(int x)

{
 int x_local;
 int local_c;
 
 if (global_func_ptr == (_func_int_int *)0x0) {
 local_c = -1;
 }
 else {
 local_c = (*global_func_ptr)(x);
 }
 return local_c;
}



/* Function: global_heap_store @ 00102340 */

int global_heap_store(int *p)

{
 int *p_local;
 undefined4 local_c;
 
 global_heap_ptr = p;
 if (p == (int *)0x0) {
 local_c = -1;
 }
 else {
 local_c = *p;
 }
 return local_c;
}



/* Function: static_complex_init @ 00102380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return complex_init[0] + complex_init[2] + complex_init[4];
}



/* Function: tls_access @ 001023a0 */

int tls_access(int val)

{
 long in_FS_OFFSET;
 int val_local;
 
 *(int *)(in_FS_OFFSET + -4) = val;
 return *(int *)(in_FS_OFFSET + -4) << 1;
}



/* Function: init_order_test @ 001023c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 int iVar1;
 int external_val;
 
 external_val = 0x14;
 iVar1 = init_depends_on(&external_val);
 return iVar1;
}



/* Function: init_depends_on @ 001023e0 */

int init_depends_on(int *p)

{
 int *p_local;
 static int static_depends;
 
 if (p != (int *)0x0) {
 static_depends = *p;
 }
 return static_depends;
}



/* Function: test_static_global @ 00102410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 uint uVar1;
 int heap_val;
 
 printf(&DAT_00103333);
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
 return;
}



/* Function: double_value @ 001025f0 */

int double_value(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: memop_memset @ 00102600 */

int memop_memset(void *buf,size_t size,int fill_value)

{
 int fill_value_local;
 size_t size_local;
 void *buf_local;
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



/* Function: memop_memcpy @ 00102660 */

int memop_memcpy(void *dst,void *src,size_t n)

{
 size_t n_local;
 void *src_local;
 void *dst_local;
 undefined4 local_c;
 
 if (((dst == (void *)0x0) || (src == (void *)0x0)) || (n == 0)) {
 local_c = -1;
 }
 else {
 memcpy(dst,src,n);
 local_c = *(int *)((long)dst + ((n >> 2) - 1) * 4);
 }
 return local_c;
}



/* Function: memop_memmove @ 001026e0 */

int memop_memmove(void *buf,size_t n)

{
 size_t n_local;
 void *buf_local;
 undefined4 local_c;
 
 if ((buf == (void *)0x0) || (n < 2)) {
 local_c = -1;
 }
 else {
 memmove((void *)((long)buf + 1),buf,n - 1);
 local_c = (int)*(char *)((long)buf + 1);
 }
 return local_c;
}



/* Function: memop_memcmp @ 00102740 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 undefined4 local_30;
 int result;
 size_t n_local;
 void *p2_local;
 void *p1_local;
 undefined4 local_c;
 
 if (((p1 == (void *)0x0) || (p2 == (void *)0x0)) || (n == 0)) {
 local_c = 0;
 }
 else {
 iVar1 = memcmp(p1,p2,n);
 if (iVar1 < 1) {
 local_30 = 0;
 if (iVar1 < 0) {
 local_30 = -1;
 }
 }
 else {
 local_30 = 1;
 }
 local_c = local_30;
 }
 return local_c;
}



/* Function: memop_bzero @ 001027d0 */

int memop_bzero(void *buf,size_t n)

{
 size_t n_local;
 void *buf_local;
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



/* Function: memop_bcopy @ 00102820 */

int memop_bcopy(void *src,void *dst,size_t n)

{
 size_t n_local;
 void *dst_local;
 void *src_local;
 undefined4 local_c;
 
 if (((src == (void *)0x0) || (dst == (void *)0x0)) || (n == 0)) {
 local_c = 0xffffffff;
 }
 else {
 bcopy(src,dst,n);
 local_c = (uint)*(byte *)dst;
 }
 return local_c;
}



/* Function: memop_unaligned_access @ 00102890 */

int memop_unaligned_access(char *buf)

{
 int value;
 char *buf_local;
 int local_c;
 
 if (buf == (char *)0x0) {
 local_c = -1;
 }
 else {
 local_c = *(int *)(buf + 1);
 }
 return local_c;
}



/* Function: memop_memory_barrier @ 001028d0 */

int memop_memory_barrier(int *flag)

{
 int local;
 int *flag_local;
 undefined4 local_c;
 
 if (flag == (int *)0x0) {
 local_c = -1;
 }
 else {
 local_c = *flag + *flag;
 }
 return local_c;
}



/* Function: test_memory_op_functions @ 00102910 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 uint uVar1;
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
 
 printf(&DAT_00103596);
 int_src[0] = 10;
 int_src[1] = 0x14;
 int_src[2] = 0x1e;
 int_src[3] = 0x28;
 int_src[4] = 0x32;
 memset(int_dst,0,0x14);
 uVar1 = memop_memset(buffer,10,0x41);
 printf("MEMOP-L2-01: %d\n",(ulong)uVar1);
 uVar1 = memop_memcpy(int_dst,int_src,0x14);
 printf("MEMOP-L2-02: %d\n",(ulong)uVar1);
 strncpy(move_buf,"HelloWorld",0xb);
 uVar1 = memop_memmove(move_buf,10);
 printf("MEMOP-L2-03: %c\n",(ulong)uVar1);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 uVar1 = memop_memcmp(cmp_a,cmp_b,0xc);
 printf("MEMOP-L2-04: %d\n",(ulong)uVar1);
 memop_bzero(zero_buf,10);
 printf("MEMOP-L2-05: %d\n");
 strncpy(bcopy_src,"\x01\x02\x03\x04",4);
 memset(bcopy_dst,0,4);
 uVar1 = memop_bcopy(bcopy_src,bcopy_dst,4);
 printf("MEMOP-L2-06: %d\n",(ulong)uVar1);
 unalign_buf[0] = '\0';
 unalign_buf[1] = '\x01';
 unalign_buf[2] = '\x02';
 unalign_buf[3] = '\x03';
 unalign_buf[4] = '\x04';
 unalign_buf[5] = '\x05';
 unalign_buf[6] = '\x06';
 unalign_buf[7] = '\a';
 uVar1 = memop_unaligned_access(unalign_buf);
 printf("MEMOP-L3-01: 0x%x\n",(ulong)uVar1);
 flag = 5;
 uVar1 = memop_memory_barrier(&flag);
 printf("MEMOP-L3-02: %d\n",(ulong)uVar1);
 return;
}



/* Function: main @ 00102b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: helper_function @ 00102b50 */

int helper_function(int x)

{
 int x_local;
 
 return x * 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 65 */
