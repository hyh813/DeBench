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
typedef unsigned char byte;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef void undefined;
typedef void code;
#define NULL ((void *)0)

/* Forward declarations */
typedef int (*_func_int_int)(int);
typedef int __pid_t;
int extern_function(int x);

/* Global variables */
int global_counter = 0;
static int file_scope_static = 0;
static int counter_1 = 0;
extern int extern_global_var;
_func_int_int *global_func_ptr = NULL;
const char DAT_00103004[] = "Testing Stack Memory\n";
const char DAT_0010314d[] = "Testing Heap Memory\n";
const char DAT_001032a5[] = "%d\n";
const char DAT_0010331b[] = "fork failed";
const char DAT_001032b5[] = "Process exited with status %d\n";
const char DAT_001032da[] = "Process terminated by signal %d\n";
const char DAT_00103326[] = "Testing Static/Global Memory\n";
const char DAT_00103588[] = "Testing Memory Operations\n";
const char const_string[] = "HelloWorld";
int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

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

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/3/3_gcc_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 return;
}



/* Function: main @ 001011e0 */

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




/* Function: double_value @ 001012f9 */

int double_value(int x)

{
 return x * 2;
}



/* Function: local_vars @ 00101301 */

int local_vars(int x)

{
 return x * 2 + 10;
}



/* Function: local_array @ 0010130a */

int local_array(int n)

{
 long lVar1;
 long lVar2;
 int iVar3;
 long in_FS_OFFSET;
 int arr [10];
 
 iVar3 = 0;
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 lVar2 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 arr[lVar2] = iVar3;
 lVar2 = lVar2 + 1;
 iVar3 = iVar3 + n;
 } while (lVar2 != 10);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return arr[5];
}



/* Function: local_struct @ 00101350 */

int local_struct(int x)

{
 return x * 3;
}



/* Function: address_of_local @ 00101358 */

int address_of_local(int *out)

{
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00101368 */

int address_of_array(int *arr)

{
 return *arr * 2;
}



/* Function: large_stack_frame @ 00101371 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 long lVar1;
 long lVar2;
 long in_FS_OFFSET;
 char large_buf [2048];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 lVar2 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 large_buf[lVar2] = (char)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x800);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)large_buf[0x400];
}



/* Function: vla_stack @ 001013c6 */

int vla_stack(int n)

{
 long lVar1;
 int iVar2;
 ulong uVar3;
 long lVar4;
 undefined1 *puVar5;
 undefined1 *puVar6;
 long in_FS_OFFSET;
 undefined1 auStack_18 [8];
 long local_10;
 
 puVar6 = auStack_18;
 puVar5 = auStack_18;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar2 = -1;
 if (n - 1U < 1000) {
 uVar3 = (long)n * 4 + 0xf;
 for (; puVar5 != auStack_18 + -(uVar3 & 0xfffffffffffff000); puVar5 = puVar5 + -0x1000) {
 *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
 }
 uVar3 = (ulong)((uint)uVar3 & 0xff0);
 lVar1 = -uVar3;
 puVar6 = puVar5 + lVar1;
 if (uVar3 != 0) {
 *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
 }
 /* Unresolved local var: int i@[???] */
 lVar4 = 0;
 do {
 *(int *)(puVar5 + lVar4 * 4 + lVar1) = (int)lVar4 * 2;
 lVar4 = lVar4 + 1;
 } while ((int)lVar4 < n);
 iVar2 = *(int *)(puVar5 + (long)(n >> 1) * 4 + lVar1);
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 *(undefined8 *)(puVar6 + -8) = 0x101466;
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: alloca_usage @ 00101468 */

int alloca_usage(int n)

{
 long lVar1;
 int iVar2;
 ulong uVar3;
 long lVar4;
 undefined1 *puVar5;
 undefined1 *puVar6;
 long in_FS_OFFSET;
 undefined1 auStack_18 [8];
 long local_10;
 
 puVar6 = auStack_18;
 puVar5 = auStack_18;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar2 = -1;
 if (0 < n) {
 uVar3 = (long)n * 4 + 0x17;
 for (; puVar5 != auStack_18 + -(uVar3 & 0xfffffffffffff000); puVar5 = puVar5 + -0x1000) {
 *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
 }
 uVar3 = (ulong)((uint)uVar3 & 0xff0);
 lVar1 = -uVar3;
 puVar6 = puVar5 + lVar1;
 if (uVar3 != 0) {
 *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
 }
 lVar4 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 *(int *)(((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0) + lVar4 * 4) = (int)lVar4 * 3;
 lVar4 = lVar4 + 1;
 } while ((int)lVar4 < n);
 iVar2 = *(int *)(((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0) + (long)(n >> 1) * 4);
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 *(undefined8 *)(puVar6 + -8) = 0x101507;
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: stack_alias @ 00101509 */

int stack_alias(int *p1,int *p2)

{
 return 0x14;
}



/* Function: test_stack_memory @ 00101513 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 int iVar1;
 undefined8 in_RAX;
 
 puts(&DAT_00103004);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 iVar1 = local_array(2);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",iVar1);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 iVar1 = large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",iVar1);
 iVar1 = vla_stack(10);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",iVar1);
 iVar1 = alloca_usage(10);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",iVar1);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14,in_RAX);
 return;
}



/* Function: heap_basic @ 00101616 */

int heap_basic(int n)

{
 void *__ptr;
 long lVar1;
 int iVar2;
 
 iVar2 = -1;
 __ptr = malloc((long)n << 2);
 if (__ptr != (void *)0x0) {
 /* Unresolved local var: int i@[???] */
 for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
 *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 * 2;
 }
 iVar2 = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_calloc @ 00101667 */

int heap_calloc(int n)

{
 void *__ptr;
 long lVar1;
 int iVar2;
 
 iVar2 = -1;
 __ptr = calloc((long)n,4);
 if (__ptr != (void *)0x0) {
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + *(int *)((long)__ptr + lVar1 * 4);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 001016aa */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 undefined8 *__ptr;
 void *__ptr_00;
 int iVar1;
 
 iVar1 = -1;
 __ptr = malloc(0x14);
 if (__ptr != (undefined8 *)0x0) {
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



/* Function: heap_array @ 00101730 */

int heap_array(int n)

{
 void *__ptr;
 long lVar1;
 int iVar2;
 
 iVar2 = -1;
 __ptr = malloc((long)n << 2);
 if (__ptr != (void *)0x0) {
 /* Unresolved local var: int i@[???] */
 for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
 *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 * 3;
 }
 iVar2 = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_struct @ 00101781 */

int heap_struct(int x)

{
 void *__ptr;
 int iVar1;
 
 iVar1 = -1;
 __ptr = malloc(8);
 if (__ptr != (void *)0x0) {
 iVar1 = x * 3;
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_nested @ 001017b2 */

int heap_nested(Node **head)

{
 int iVar1;
 Node *__ptr;
 Node *pNVar2;
 
 __ptr = malloc(0x10);
 *head = __ptr;
 iVar1 = -1;
 if (__ptr != (Node *)0x0) {
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



/* Function: linked_list_heap @ 00101811 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int *__ptr;
 int *__ptr_00;
 int iVar3;
 
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 piVar2 = (int *)0x0;
 __ptr = (int *)0x0;
 do {
 /* Unresolved local var: Node * new_node@[???] */
 piVar1 = malloc(0x10);
 if (piVar1 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 /* Unresolved local var: Node * temp@[???] */
 piVar2 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar2;
 }
 return -1;
 }
 *piVar1 = iVar3;
 piVar1[2] = 0;
 piVar1[3] = 0;
 __ptr_00 = piVar1;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar2 + 2) = piVar1;
 __ptr_00 = __ptr;
 }
 iVar3 = iVar3 + 10;
 piVar2 = piVar1;
 __ptr = __ptr_00;
 } while (iVar3 != 0x32);
 iVar3 = 0;
 piVar2 = __ptr_00;
 do {
 iVar3 = iVar3 + *piVar2;
 piVar2 = *(int **)(piVar2 + 2);
 } while (piVar2 != (int *)0x0);
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar2 = *(int **)(__ptr_00 + 2);
 free(__ptr_00);
 __ptr_00 = piVar2;
 } while (piVar2 != (int *)0x0);
 return iVar3;
}



/* Function: create_tree_node @ 0010189c */

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



/* Function: tree_heap_traversal @ 001018c6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 int iVar1;
 int iVar2;
 TreeNode *__ptr;
 TreeNode *pTVar3;
 TreeNode *pTVar4;
 int iVar5;
 
 iVar5 = -1;
 __ptr = create_tree_node(10);
 if (__ptr != (TreeNode *)0x0) {
 pTVar3 = create_tree_node(0x14);
 __ptr->left = pTVar3;
 pTVar4 = create_tree_node(0x1e);
 pTVar3 = __ptr->left;
 __ptr->right = pTVar4;
 if (pTVar3 != (TreeNode *)0x0) {
 if (pTVar4 != (TreeNode *)0x0) {
 iVar5 = pTVar3->data;
 iVar1 = __ptr->data;
 iVar2 = pTVar4->data;
 free(pTVar3);
 free(__ptr->right);
 free(__ptr);
 return iVar5 + iVar1 + iVar2;
 }
 free(pTVar3);
 }
 if (__ptr->right != (TreeNode *)0x0) {
 free(__ptr->right);
 }
 iVar5 = -2;
 free(__ptr);
 }
 return iVar5;
}



/* Function: memory_leak @ 00101959 */

int memory_leak(int n)

{
 int iVar1;
 void *pvVar2;
 long lVar3;
 
 pvVar2 = malloc((long)n << 2);
 lVar3 = 0;
 if (pvVar2 == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 for (; (int)lVar3 < n; lVar3 = lVar3 + 1) {
 *(int *)((long)pvVar2 + lVar3 * 4) = (int)lVar3;
 }
 iVar1 = *(int *)((long)pvVar2 + (long)(n / 2) * 4);
 }
 return iVar1;
}



/* Function: dangling_pointer @ 00101999 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 int iVar1;
 int *__ptr;
 
 __ptr = malloc(4);
 iVar1 = -1;
 if (__ptr != (int *)0x0) {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(__ptr);
 iVar1 = *__ptr;
 }
 return iVar1;
}



/* Function: double_free @ 001019d7 */

int double_free(int *p)

{
 int iVar1;
 void *__ptr;
 
 if (p == (int *)0x0) {
 /* Unresolved local var: int * temp@[???] */
 __ptr = malloc(4);
 iVar1 = -1;
 if (__ptr != (void *)0x0) {
 free(__ptr);
 free(__ptr);
 iVar1 = -2;
 }
 return iVar1;
 }
 return *p;
}



/* Function: heap_overflow @ 00101a12 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 int *__ptr;
 long lVar1;
 int iVar2;
 
 iVar2 = -1;
 __ptr = malloc(0x28);
 if (__ptr != (int *)0x0) {
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 __ptr[lVar1] = (int)lVar1 * 100;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0xb);
 iVar2 = *__ptr;
 free(__ptr);
 }
 return iVar2;
}



/* Function: test_heap_memory @ 00101a4d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 uint uVar1;
 int iVar2;
 __pid_t __pid;
 void *puVar3;
 uint uVar4;
 long in_FS_OFFSET;
 int status;
 Node *head;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_0010314d);
 iVar2 = heap_basic(10);
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",iVar2);
 iVar2 = heap_calloc(5);
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar2);
 iVar2 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",iVar2);
 iVar2 = heap_array(10);
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",iVar2);
 iVar2 = heap_struct(5);
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",iVar2);
 head = (Node *)0x0;
 iVar2 = heap_nested(&head);
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",iVar2);
 if (head != (Node *)0x0) {
 free(head->next);
 free(head);
 }
 iVar2 = linked_list_heap();
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar2);
 iVar2 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",iVar2);
 iVar2 = memory_leak(5);
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",iVar2);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 /* Unresolved local var: int result@[???] */
 iVar2 = dangling_pointer();
 __printf_chk(1,&DAT_001032a5,iVar2);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 perror(&DAT_0010331b);
 }
 else {
 waitpid(__pid,&status,0);
 puVar3 = &DAT_001032b5;
 uVar4 = status & 0x7f;
 uVar1 = (uint)status >> 8 & 0xff;
 if (uVar4 != 0) {
 if ((char)((char)uVar4 + '\x01') < '\x02') goto LAB_00101c37;
 puVar3 = &DAT_001032da;
 uVar1 = uVar4;
 }
 __printf_chk(1,puVar3,uVar1);
 }
LAB_00101c37:
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: global_var_access @ 00101c51 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00101c64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter * 2;
}



/* Function: global_array_access @ 00101c71 */

int global_array_access(int idx)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)idx < 10) {
 iVar1 = global_array[idx];
 }
 return iVar1;
}



/* Function: static_local @ 00101c8b */

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



/* Function: call_static_func @ 00101ca4 */

int call_static_func(int x)

{
 return x * 2 + 1;
}



/* Function: access_extern_global @ 00101cad */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101cbb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 00101cc9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101cdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 00101ce3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 00101cea */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 00101cf4 */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 00101cff */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00101d0a */

void set_global_callback(_func_int_int *f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00101d16 */

int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr != (_func_int_int *)0x0) {
 /* WARNING: Could not recover jumptable at 0x00101d26. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*global_func_ptr)(x);
 return iVar1;
 }
 return -1;
}



/* Function: global_heap_store @ 00101d2c */

int global_heap_store(int *p)

{
 int iVar1;
 
 iVar1 = -1;
 if (p != (int *)0x0) {
 iVar1 = *p;
 }
 return iVar1;
}



/* Function: static_complex_init @ 00101d3b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00101d45 */

int tls_access(int val)

{
 return val * 2;
}



/* Function: init_order_test @ 00101d4d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 00101d57 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 int iVar1;
 
 puts(&DAT_00103326);
 global_var_access();
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n");
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 iVar1 = call_extern_func();
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",iVar1);
 read_const_data();
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 global_struct_access();
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 iVar1 = call_global_callback(5);
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",iVar1);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 static_complex_init();
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



/* Function: memop_memset @ 00101f61 */

int memop_memset(void *buf,size_t size,int fill_value)

{
 undefined1 *puVar1;
 
 if ((buf != (void *)0x0) && (puVar1 = buf, size != 0)) {
 for (; size != 0; size = size - 1) {
 *puVar1 = (char)fill_value;
 puVar1 = puVar1 + 1;
 }
 return (int)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_memcpy @ 00101f82 */

int memop_memcpy(void *dst,void *src,size_t n)

{
 ulong uVar1;
 undefined1 *puVar2;
 
 if ((src != (void *)0x0 && n != 0) && (dst != (void *)0x0)) {
 uVar1 = n & 0xfffffffffffffffc;
 puVar2 = dst;
 for (; n != 0; n = n - 1) {
 *puVar2 = *(undefined1 *)src;
 src = (undefined1 *)((long)src + 1);
 puVar2 = puVar2 + 1;
 }
 return *(int *)((long)dst + (uVar1 - 4));
 }
 return -1;
}



/* Function: memop_memmove @ 00101fb5 */

int memop_memmove(void *buf,size_t n)

{
 if ((buf != (void *)0x0) && (1 < n)) {
 memmove((void *)((long)buf + 1),buf,n - 1);
 return (int)*(char *)((long)buf + 1);
 }
 return -1;
}



/* Function: memop_memcmp @ 00101fe2 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 if ((p2 != (void *)0x0 && n != 0) && (p1 != (void *)0x0)) {
 /* Unresolved local var: int result@[???] */
 iVar1 = memcmp(p1,p2,n);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
 }
 return 0;
}



/* Function: memop_bzero @ 0010201d */

int memop_bzero(void *buf,size_t n)

{
 uint uVar1;
 undefined1 *puVar2;
 
 uVar1 = 0xffffffff;
 puVar2 = buf;
 if (buf != (void *)0x0) {
 for (; n != 0; n = n - 1) {
 *puVar2 = 0;
 puVar2 = puVar2 + 1;
 }
 uVar1 = (uint)*(byte *)buf;
 }
 return uVar1;
}



/* Function: memop_bcopy @ 00102037 */

int memop_bcopy(void *src,void *dst,size_t n)

{
 byte *pbVar1;
 
 if ((dst != (void *)0x0 && n != 0) && (src != (void *)0x0)) {
 pbVar1 = memmove(dst,src,n);
 return (int)*pbVar1;
 }
 return -1;
}



/* Function: memop_unaligned_access @ 0010206a */

int memop_unaligned_access(char *buf)

{
 int iVar1;
 
 iVar1 = -1;
 if (buf != (char *)0x0) {
 iVar1 = *(int *)(buf + 1);
 }
 return iVar1;
}



/* Function: memop_memory_barrier @ 0010207a */

int memop_memory_barrier(int *flag)

{
 int iVar1;
 
 iVar1 = -1;
 if (flag != (int *)0x0) {
 iVar1 = *flag + *flag;
 }
 return iVar1;
}



/* Function: test_memory_op_functions @ 00102090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 long lVar1;
 int iVar2;
 long lVar3;
 int iVar4;
 char *pcVar5;
 int *piVar6;
 char *pcVar7;
 long in_FS_OFFSET;
 byte bVar8;
 int flag;
 int cmp_a [3];
 int cmp_b [3];
 int int_src [5];
 int int_dst [5];
 char bcopy_src [4];
 char bcopy_dst [4];
 char zero_buf [10];
 char move_buf [11];
 char buffer [256];
 
 bVar8 = 0;
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103588);
 int_src[0] = 10;
 int_src[1] = 0x14;
 int_src[2] = 0x1e;
 int_src[3] = 0x28;
 piVar6 = int_dst;
 for (lVar3 = 5; lVar3 != 0; lVar3 = lVar3 + -1) {
 *piVar6 = 0;
 piVar6 = piVar6 + (ulong)bVar8 * -2 + 1;
 }
 int_src[4] = 0x32;
 iVar2 = memop_memset(buffer,10,0x41);
 __printf_chk(1,"MEMOP-L2-01: %d\n",iVar2);
 iVar2 = memop_memcpy(int_dst,int_src,0x14);
 __printf_chk(1,"MEMOP-L2-02: %d\n",iVar2);
 pcVar5 = "HelloWorld";
 pcVar7 = move_buf;
 for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
 *pcVar7 = *pcVar5;
 pcVar5 = pcVar5 + (ulong)bVar8 * -2 + 1;
 pcVar7 = pcVar7 + (ulong)bVar8 * -2 + 1;
 }
 iVar2 = memop_memmove(move_buf,10);
 __printf_chk(1,"MEMOP-L2-03: %c\n",iVar2);
 /* Unresolved local var: int result@[???] */
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 iVar2 = memcmp(cmp_a,cmp_b,0xc);
 iVar4 = 1;
 if (iVar2 < 1) {
 iVar4 = -(uint)(iVar2 != 0);
 }
 __printf_chk(1,"MEMOP-L2-04: %d\n",iVar4);
 iVar2 = memop_bzero(zero_buf,10);
 __printf_chk(1,"MEMOP-L2-05: %d\n",iVar2);
 strncpy(bcopy_src,"\x01\x02\x03\x04",4);
 bcopy_dst[0] = '\0';
 bcopy_dst[1] = '\0';
 bcopy_dst[2] = '\0';
 bcopy_dst[3] = '\0';
 iVar2 = memop_bcopy(bcopy_src,bcopy_dst,4);
 __printf_chk(1,"MEMOP-L2-06: %d\n",iVar2);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 flag = 5;
 memop_memory_barrier(&flag);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}













/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 64 */
