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
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef int __pid_t;
typedef void (*code)(void);
typedef int bool;
typedef struct Node { int data; struct Node *next; } Node;
typedef struct TreeNode { int data; struct TreeNode *left; struct TreeNode *right; } TreeNode;
typedef int (*_func_int_int)(int);

/* Global variables */
int global_counter;
int counter_1;
int extern_global_var;
int global_array[10];
int file_scope_static;
_func_int_int global_func_ptr;
int static_depends_0;
char const_string[100];
char DAT_000128a0[100];
char DAT_000129fc[100];
char DAT_00012b68[100];
char DAT_00012be4[100];
char DAT_00012b78[100];
char DAT_00012ba0[100];
char DAT_00012bf0[100];
char DAT_00012e74[100];

/* Atomic operation helpers */
extern int SUB_ffff0fc0(int, int, void*);
extern void SUB_ffff0fa0(void);

/* Missing function declarations */
extern char *strncpy(char *dest, const char *src, size_t n);
extern int extern_function(int x);

/* Atomic operation helper implementations */
int SUB_ffff0fc0(int old_val, int new_val, void *ptr)
{
 *(int *)ptr = new_val;
 return 0;
}

void SUB_ffff0fa0(void)
{
 /* Memory barrier - no-op for now */
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/3/3_gcc_O1_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 0001077c */

int double_value(int x)

{
 return x << 1;
}



/* Function: local_vars @ 00010784 */

int local_vars(int x)

{
 /* Unresolved local var: int a@[DW_OP_reg0(r0)]
 Unresolved local var: int b@[DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value]
 Unresolved local var: int c@[DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_plus_uconst: 10; DW_OP_stack_value] */
 return x * 2 + 10;
}



/* Function: local_array @ 00010790 */

/* WARNING: Removing unreachable block (ram,0x000107e8) */

int local_array(int n)

{
 int *piVar1;
 int iVar2;
 int iStack_38;
 int arr [10];
 
 piVar1 = &iStack_38;
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 do {
 piVar1 = piVar1 + 1;
 *piVar1 = iVar2;
 iVar2 = iVar2 + n;
 } while (piVar1 != arr + 9);
 return arr[5];
}



/* Function: local_struct @ 000107f0 */

int local_struct(int x)

{
 /* Unresolved local var: Point p@[DW_OP_reg0(r0); DW_OP_piece: 4;
 DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4]
 */
 return x * 3;
}



/* Function: address_of_local @ 000107f8 */

int address_of_local(int *out)

{
 /* Unresolved local var: int local@[???] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00010808 */

int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[DW_OP_reg0(r0)]
 Unresolved local var: int * p2@[DW_OP_reg0(r0)] */
 return *arr << 1;
}



/* Function: large_stack_frame @ 00010814 */

/* WARNING: Removing unreachable block (ram,0x0001087c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 char *pcVar1;
 char cVar2;
 char cStack_80d;
 char large_buf [2048];
 
 /* Unresolved local var: int i@[???] */
 pcVar1 = &cStack_80d;
 cVar2 = '\0';
 do {
 pcVar1 = pcVar1 + 1;
 *pcVar1 = cVar2;
 cVar2 = cVar2 + '\x01';
 } while (pcVar1 != large_buf + 0x7ff);
 return (uint)(byte)large_buf[0x400];
}



/* Function: vla_stack @ 00010884 */

int vla_stack(int n)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 int aiStack_14 [3];
 
 /* Unresolved local var: int[9714] vla@[???]
 Unresolved local var: uint anon_var_0@[???] */
 aiStack_14[2] = 0;
 if (n - 1U < 1000) {
 iVar1 = -(n * 4 + 7U & 0xfffffff8);
 /* Unresolved local var: int i@[???] */
 piVar2 = (int *)((int)aiStack_14 + iVar1);
 iVar3 = 0;
 do {
 piVar2 = piVar2 + 1;
 *piVar2 = iVar3;
 iVar3 = iVar3 + 2;
 } while (iVar3 != n * 2);
 iVar1 = *(int *)((int)aiStack_14 + (n / 2) * 4 + iVar1 + 4);
 }
 else {
 iVar1 = -1;
 }
 if (aiStack_14[2] == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: alloca_usage @ 00010918 */

int alloca_usage(int n)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 int aiStack_14 [3];
 
 /* Unresolved local var: int * arr@[???] */
 aiStack_14[2] = 0;
 if (n < 1) {
 iVar1 = -1;
 }
 else {
 iVar1 = -(n * 4 + 7U & 0xfffffff8);
 /* Unresolved local var: int i@[???] */
 piVar2 = (int *)((int)aiStack_14 + iVar1);
 iVar3 = 0;
 do {
 piVar2 = piVar2 + 1;
 *piVar2 = iVar3;
 iVar3 = iVar3 + 3;
 } while (piVar2 != (int *)((int)aiStack_14 + n * 4 + iVar1));
 iVar1 = *(int *)((int)aiStack_14 + (n / 2) * 4 + iVar1 + 4);
 }
 if (aiStack_14[2] == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: stack_alias @ 000109ac */

int stack_alias(int *p1,int *p2)

{
 /* Unresolved local var: int local@[???] */
 return 0x14;
}



/* Function: test_stack_memory @ 000109b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 int iVar1;
 
 /* Unresolved local var: int out@[???]
 Unresolved local var: int[10] arr5@[???]
 Unresolved local var: int alias_val@[???] */
 puts(&DAT_000128a0);
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
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 00010a98 */

int heap_basic(int n)

{
 void *__ptr;
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(n << 2);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 piVar1 = (int *)((int)__ptr + -4);
 iVar2 = 0;
 do {
 piVar1 = piVar1 + 1;
 *piVar1 = iVar2;
 iVar2 = iVar2 + 2;
 } while (iVar2 != n * 2);
 }
 iVar2 = *(int *)((int)__ptr + (n / 2) * 4);
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_calloc @ 00010af4 */

int heap_calloc(int n)

{
 void *__ptr;
 int *piVar1;
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
 piVar1 = (int *)((int)__ptr + -4);
 iVar2 = 0;
 do {
 piVar1 = piVar1 + 1;
 iVar2 = iVar2 + *piVar1;
 } while (piVar1 != (int *)((int)__ptr + n * 4 + -4));
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 00010b50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 undefined4 *__ptr;
 void *__ptr_00;
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
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 iVar1 = -2;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *(undefined4 *)((int)__ptr_00 + 0x14) = 0x32;
 *(undefined4 *)((int)__ptr_00 + 0x18) = 0x3c;
 *(undefined4 *)((int)__ptr_00 + 0x1c) = 0x46;
 *(undefined4 *)((int)__ptr_00 + 0x20) = 0x50;
 *(undefined4 *)((int)__ptr_00 + 0x24) = 0x5a;
 if (*(int *)((int)__ptr_00 + 8) == 3) {
 iVar1 = 0x32;
 }
 else {
 iVar1 = -3;
 }
 free(__ptr_00);
 }
 }
 return iVar1;
}



/* Function: heap_array @ 00010bfc */

int heap_array(int n)

{
 void *__ptr;
 int *piVar1;
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
 piVar1 = (int *)((int)__ptr + -4);
 iVar2 = 0;
 do {
 piVar1 = piVar1 + 1;
 *piVar1 = iVar2;
 iVar2 = iVar2 + 3;
 } while (piVar1 != (int *)((int)__ptr + (n * 4 - 4U)));
 }
 iVar2 = *(int *)((int)__ptr + (n / 2) * 4);
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_struct @ 00010c60 */

int heap_struct(int x)

{
 void *__ptr;
 int iVar1;
 
 /* Unresolved local var: Point * p@[???]
 Unresolved local var: int result@[???] */
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



/* Function: heap_nested @ 00010c90 */

int heap_nested(Node **head)

{
 Node *__ptr;
 Node *pNVar1;
 
 __ptr = malloc(8);
 *head = __ptr;
 if (__ptr == (Node *)0x0) {
 return -1;
 }
 __ptr->data = 10;
 pNVar1 = malloc(8);
 __ptr->next = pNVar1;
 if (pNVar1 != (Node *)0x0) {
 pNVar1->data = 0x14;
 pNVar1->next = (Node *)0x0;
 return 0;
 }
 free(__ptr);
 return -2;
}



/* Function: linked_list_heap @ 00010cfc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int *__ptr;
 int *__ptr_00;
 int iVar3;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: Node * temp@[???] */
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 /* Unresolved local var: Node * new_node@[???] */
 piVar2 = (int *)0x0;
 __ptr = (int *)0x0;
 do {
 piVar1 = malloc(8);
 if (piVar1 == (int *)0x0) {
 if (__ptr != (int *)0x0) {
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar2 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar2;
 } while (piVar2 != (int *)0x0);
 return -1;
 }
 return -1;
 }
 *piVar1 = iVar3;
 piVar1[1] = 0;
 __ptr_00 = piVar1;
 if (__ptr != (int *)0x0) {
 piVar2[1] = (int)piVar1;
 __ptr_00 = __ptr;
 }
 iVar3 = iVar3 + 10;
 piVar2 = piVar1;
 __ptr = __ptr_00;
 } while (iVar3 != 0x32);
 if (__ptr_00 == (int *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 piVar2 = __ptr_00;
 do {
 iVar3 = iVar3 + *piVar2;
 piVar2 = (int *)piVar2[1];
 } while (piVar2 != (int *)0x0);
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar2 = (int *)__ptr_00[1];
 free(__ptr_00);
 __ptr_00 = piVar2;
 } while (piVar2 != (int *)0x0);
 }
 return iVar3;
}



/* Function: create_tree_node @ 00010dbc */

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



/* Function: tree_heap_traversal @ 00010de4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 TreeNode *__ptr;
 TreeNode *pTVar1;
 TreeNode *__ptr_00;
 int iVar2;
 
 /* Unresolved local var: TreeNode * root@[???]
 Unresolved local var: int sum@[???] */
 __ptr = create_tree_node(10);
 if (__ptr == (TreeNode *)0x0) {
 iVar2 = -1;
 }
 else {
 pTVar1 = create_tree_node(0x14);
 __ptr->left = pTVar1;
 pTVar1 = create_tree_node(0x1e);
 __ptr->right = pTVar1;
 __ptr_00 = __ptr->left;
 if (__ptr_00 == (TreeNode *)0x0 || pTVar1 == (TreeNode *)0x0) {
 if (__ptr_00 != (TreeNode *)0x0) {
 free(__ptr_00);
 }
 if (__ptr->right != (TreeNode *)0x0) {
 free(__ptr->right);
 }
 free(__ptr);
 iVar2 = -2;
 }
 else {
 iVar2 = __ptr->data + __ptr_00->data + pTVar1->data;
 free(__ptr_00);
 free(__ptr->right);
 free(__ptr);
 }
 }
 return iVar2;
}



/* Function: memory_leak @ 00010e88 */

int memory_leak(int n)

{
 void *pvVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int * leak@[???] */
 pvVar1 = malloc(n << 2);
 if (pvVar1 != (void *)0x0) {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 piVar2 = (int *)((int)pvVar1 + -4);
 iVar3 = 0;
 do {
 piVar2 = piVar2 + 1;
 *piVar2 = iVar3;
 iVar3 = iVar3 + 1;
 } while (n != iVar3);
 }
 return *(int *)((int)pvVar1 + (n / 2) * 4);
 }
 return -1;
}



/* Function: dangling_pointer @ 00010ed8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 int *__ptr;
 
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int value@[???]
 Unresolved local var: int dangerous@[???] */
 __ptr = malloc(4);
 if (__ptr != (int *)0x0) {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(__ptr);
 return *__ptr;
 }
 return -1;
}



/* Function: double_free @ 00010f18 */

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



/* Function: heap_overflow @ 00010f5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 int *__ptr;
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 piVar1 = __ptr + -1;
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 do {
 piVar1 = piVar1 + 1;
 *piVar1 = iVar2;
 iVar2 = iVar2 + 100;
 } while (iVar2 != 0x44c);
 iVar2 = *__ptr;
 free(__ptr);
 }
 return iVar2;
}



/* Function: test_heap_memory @ 00010fa8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 int iVar1;
 __pid_t __pid;
 Node *head;
 int status;
 int local_c;
 
 /* Unresolved local var: pid_t pid@[???] */
 local_c = 0;
 puts(&DAT_000129fc);
 iVar1 = heap_basic(10);
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",iVar1);
 iVar1 = heap_calloc(5);
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar1);
 iVar1 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",iVar1);
 iVar1 = heap_array(10);
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",iVar1);
 iVar1 = heap_struct(5);
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",iVar1);
 head = (Node *)0x0;
 iVar1 = heap_nested(&head);
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",iVar1);
 if (head != (Node *)0x0) {
 free(head->next);
 free(head);
 }
 iVar1 = linked_list_heap();
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar1);
 iVar1 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",iVar1);
 iVar1 = memory_leak(5);
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",iVar1);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 /* Unresolved local var: int result@[???] */
 iVar1 = dangling_pointer();
 __printf_chk(1,&DAT_00012b68,iVar1);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 perror(&DAT_00012be4);
 }
 else {
 waitpid(__pid,&status,0);
 if ((status & 0x7fU) == 0) {
 __printf_chk(1,&DAT_00012b78,status >> 8 & 0xff);
 }
 else if (0x1ffffff < (int)(((status & 0x7fU) + 1) * 0x1000000)) {
 __printf_chk(1,&DAT_00012ba0);
 }
 }
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: global_var_access @ 000111b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 000111cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 000111e0 */

int global_array_access(int idx)

{
 int iVar1;
 
 if ((uint)idx < 10) {
 iVar1 = global_array[idx];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: static_local @ 000111f8 */

int static_local(int reset)

{
 if (reset == 0) {
 counter_1 = counter_1 + 1;
 }
 else {
 counter_1 = 0;
 }
 return counter_1;
}



/* Function: call_static_func @ 0001121c */

int call_static_func(int x)

{
 return x * 2 + 1;
}



/* Function: access_extern_global @ 00011228 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 0001123c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 0001124c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00011264 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 0001126c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 00011274 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 0001127c */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 0001128c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 0001129c */

void set_global_callback(_func_int_int *f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 000112ac */

int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr != (_func_int_int *)0x0) {
 iVar1 = (*global_func_ptr)(x);
 return iVar1;
 }
 return -1;
}



/* Function: global_heap_store @ 000112d4 */

int global_heap_store(int *p)

{
 int iVar1;
 
 if (p == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = *p;
 }
 return iVar1;
}



/* Function: static_complex_init @ 000112e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 000112ec */

int tls_access(int val)

{
 return val << 1;
}



/* Function: init_order_test @ 000112f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 /* Unresolved local var: int external_val@[???] */
 static_depends_0 = 0x14;
 return 0x14;
}



/* Function: test_static_global @ 00011308 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 int iVar1;
 
 /* Unresolved local var: int heap_val@[???] */
 puts(&DAT_00012bf0);
 iVar1 = global_var_access();
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",iVar1);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n");
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 iVar1 = call_extern_func();
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",iVar1);
 iVar1 = read_const_data();
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",iVar1);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 iVar1 = global_struct_access();
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",iVar1);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n");
 global_func_ptr = double_value;
 iVar1 = call_global_callback(5);
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",iVar1);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 iVar1 = static_complex_init();
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",iVar1);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 iVar1 = init_order_test();
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",iVar1);
 return;
}



/* Function: memop_memset @ 000114e4 */

int memop_memset(void *buf,size_t size,int fill_value)

{
 if (size != 0 && buf != (void *)0x0) {
 memset(buf,fill_value,size);
 return (uint)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_memcpy @ 00011518 */

int memop_memcpy(void *dst,void *src,size_t n)

{
 if (dst == (void *)0x0 || (n == 0 || src == (void *)0x0)) {
 return -1;
 }
 memcpy(dst,src,n);
 return *(int *)((int)dst + ((n & 0xfffffffc) - 4));
}



/* Function: memop_memmove @ 00011564 */

int memop_memmove(void *buf,size_t n)

{
 if (buf != (void *)0x0 && 1 < n) {
 memmove((void *)((int)buf + 1),buf,n - 1);
 return (uint)*(byte *)((int)buf + 1);
 }
 return -1;
}



/* Function: memop_memcmp @ 00011598 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 if (p1 == (void *)0x0 || (n == 0 || p2 == (void *)0x0)) {
 return 0;
 }
 iVar1 = memcmp(p1,p2,n);
 if (iVar1 < 1) {
 return iVar1 >> 0x1f;
 }
 return 1;
}



/* Function: memop_bzero @ 000115e4 */

int memop_bzero(void *buf,size_t n)

{
 if (buf != (void *)0x0) {
 memset(buf,0,n);
 return (uint)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_bcopy @ 00011610 */

int memop_bcopy(void *src,void *dst,size_t n)

{
 if (src == (void *)0x0 || (n == 0 || dst == (void *)0x0)) {
 return -1;
 }
 memmove(dst,src,n);
 return (uint)*(byte *)dst;
}



/* Function: memop_unaligned_access @ 00011654 */

int memop_unaligned_access(char *buf)

{
 int value;
 int local_c;
 
 local_c = 0;
 if (buf == (char *)0x0) {
 value = -1;
 }
 else {
 memcpy(&value,buf + 1,4);
 }
 if (local_c == 0) {
 return value;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: memop_memory_barrier @ 000116b8 */

int memop_memory_barrier(int *flag)

{
 int iVar1;
 
 /* Unresolved local var: int local@[???] */
 if (flag != (int *)0x0) {
 iVar1 = *flag;
 __sync_synchronize();
 return *flag + iVar1;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 000116e0 */

/* WARNING: Removing unreachable block (ram,0x0001189c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 int iVar1;
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
 
 puts(&DAT_00012e74);
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
 iVar1 = memop_memset(buffer,10,0x41);
 __printf_chk(1,"MEMOP-L2-01: %d\n",iVar1);
 iVar1 = memop_memcpy(int_dst,int_src,0x14);
 __printf_chk(1,"MEMOP-L2-02: %d\n",iVar1);
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
 __printf_chk(1,"MEMOP-L2-03: %c\n",iVar1);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 iVar1 = memop_memcmp(cmp_a,cmp_b,0xc);
 __printf_chk(1,"MEMOP-L2-04: %d\n",iVar1);
 iVar1 = memop_bzero(zero_buf,10);
 __printf_chk(1,"MEMOP-L2-05: %d\n",iVar1);
 strncpy(bcopy_src,"\x01\x02\x03\x04",4);
 bcopy_dst[0] = '\0';
 bcopy_dst[1] = '\0';
 bcopy_dst[2] = '\0';
 bcopy_dst[3] = '\0';
 iVar1 = memop_bcopy(bcopy_src,bcopy_dst,4);
 __printf_chk(1,"MEMOP-L2-06: %d\n",iVar1);
 unalign_buf[0] = '\0';
 unalign_buf[1] = '\x01';
 unalign_buf[2] = '\x02';
 unalign_buf[3] = '\x03';
 unalign_buf[4] = '\x04';
 unalign_buf[5] = '\x05';
 unalign_buf[6] = '\x06';
 unalign_buf[7] = '\a';
 iVar1 = memop_unaligned_access(unalign_buf);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",iVar1);
 flag = 5;
 iVar1 = memop_memory_barrier(&flag);
 __printf_chk(1,"MEMOP-L3-02: %d\n",iVar1);
 return;
}



/* Function: main @ 000118d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}







/* Function: __sync_fetch_and_add_4 @ 000118f8 */

int __sync_fetch_and_add_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 + param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_fetch_and_sub_4 @ 00011930 */

int __sync_fetch_and_sub_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 - param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_fetch_and_or_4 @ 00011968 */

uint __sync_fetch_and_or_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 | param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_and_4 @ 000119a0 */

uint __sync_fetch_and_and_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 & param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_xor_4 @ 000119d8 */

uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 ^ param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_nand_4 @ 00011a10 */

uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,~(uVar2 & param_2),param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_add_2 @ 00011a4c */

int __sync_fetch_and_add_2(uint param_1,int param_2)

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



/* Function: __sync_fetch_and_sub_2 @ 00011aac */

int __sync_fetch_and_sub_2(uint param_1,int param_2)

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



/* Function: __sync_fetch_and_or_2 @ 00011b0c */

int __sync_fetch_and_or_2(uint param_1,uint param_2)

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



/* Function: __sync_fetch_and_and_2 @ 00011b6c */

int __sync_fetch_and_and_2(uint param_1,uint param_2)

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



/* Function: __sync_fetch_and_xor_2 @ 00011bcc */

int __sync_fetch_and_xor_2(uint param_1,uint param_2)

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



/* Function: __sync_fetch_and_nand_2 @ 00011c2c */

int __sync_fetch_and_nand_2(uint param_1,uint param_2)

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



/* Function: __sync_fetch_and_add_1 @ 00011c90 */

int __sync_fetch_and_add_1(uint param_1,int param_2)

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



/* Function: __sync_fetch_and_sub_1 @ 00011cec */

int __sync_fetch_and_sub_1(uint param_1,int param_2)

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



/* Function: __sync_fetch_and_or_1 @ 00011d48 */

int __sync_fetch_and_or_1(uint param_1,uint param_2)

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



/* Function: __sync_fetch_and_and_1 @ 00011da4 */

int __sync_fetch_and_and_1(uint param_1,uint param_2)

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



/* Function: __sync_fetch_and_xor_1 @ 00011e00 */

int __sync_fetch_and_xor_1(uint param_1,uint param_2)

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



/* Function: __sync_fetch_and_nand_1 @ 00011e5c */

int __sync_fetch_and_nand_1(uint param_1,uint param_2)

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



/* Function: __sync_add_and_fetch_4 @ 00011ebc */

int __sync_add_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_sub_and_fetch_4 @ 00011ef4 */

int __sync_sub_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_or_and_fetch_4 @ 00011f2c */

uint __sync_or_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_and_and_fetch_4 @ 00011f64 */

uint __sync_and_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_xor_and_fetch_4 @ 00011f9c */

uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_nand_and_fetch_4 @ 00011fd4 */

uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_add_and_fetch_2 @ 00012010 */

int __sync_add_and_fetch_2(uint param_1,int param_2)

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



/* Function: __sync_sub_and_fetch_2 @ 00012078 */

int __sync_sub_and_fetch_2(uint param_1,int param_2)

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



/* Function: __sync_or_and_fetch_2 @ 000120e0 */

int __sync_or_and_fetch_2(uint param_1,uint param_2)

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



/* Function: __sync_and_and_fetch_2 @ 00012148 */

int __sync_and_and_fetch_2(uint param_1,uint param_2)

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



/* Function: __sync_xor_and_fetch_2 @ 000121b0 */

int __sync_xor_and_fetch_2(uint param_1,uint param_2)

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



/* Function: __sync_nand_and_fetch_2 @ 00012218 */

int __sync_nand_and_fetch_2(uint param_1,uint param_2)

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



/* Function: __sync_add_and_fetch_1 @ 00012284 */

int __sync_add_and_fetch_1(uint param_1,int param_2)

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



/* Function: __sync_sub_and_fetch_1 @ 000122e8 */

int __sync_sub_and_fetch_1(uint param_1,int param_2)

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



/* Function: __sync_or_and_fetch_1 @ 0001234c */

int __sync_or_and_fetch_1(uint param_1,uint param_2)

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



/* Function: __sync_and_and_fetch_1 @ 000123b0 */

int __sync_and_and_fetch_1(uint param_1,uint param_2)

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



/* Function: __sync_xor_and_fetch_1 @ 00012414 */

int __sync_xor_and_fetch_1(uint param_1,uint param_2)

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



/* Function: __sync_nand_and_fetch_1 @ 00012478 */

int __sync_nand_and_fetch_1(uint param_1,uint param_2)

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



/* Function: __sync_val_compare_and_swap_4 @ 000124e0 */

int __sync_val_compare_and_swap_4(int *param_1,int param_2,undefined4 param_3)

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



/* Function: __sync_val_compare_and_swap_2 @ 00012530 */

uint __sync_val_compare_and_swap_2(uint param_1,uint param_2,int param_3)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xffff)) {
 return (int)(short)uVar1;
 }
 iVar3 = SUB_ffff0fc0
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: __sync_val_compare_and_swap_1 @ 000125a8 */

uint __sync_val_compare_and_swap_1(uint param_1,uint param_2,int param_3)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xff)) {
 return (int)(char)uVar1;
 }
 iVar3 = SUB_ffff0fc0
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: __sync_bool_compare_and_swap_4 @ 0001261c */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 int iVar1;
 
 iVar1 = SUB_ffff0fc0(param_2,param_3,param_1);
 return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 00012648 */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __sync_val_compare_and_swap_2(param_1,param_2,param_2);
 return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 00012664 */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __sync_val_compare_and_swap_1(param_1,param_2,param_2);
 return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 0001268c */

undefined4 __sync_lock_test_and_set_4(undefined4 *param_1,undefined4 param_2)

{
 int iVar1;
 undefined4 uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_lock_test_and_set_2 @ 000126c4 */

int __sync_lock_test_and_set_2(uint param_1,int param_2)

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



/* Function: __sync_lock_test_and_set_1 @ 00012724 */

int __sync_lock_test_and_set_1(uint param_1,int param_2)

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



/* Function: __sync_lock_release_8 @ 00012780 */

void __sync_lock_release_8(undefined4 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}



/* Function: __sync_lock_release_4 @ 000127a4 */

void __sync_lock_release_4(undefined4 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}



/* Function: __sync_lock_release_2 @ 000127c4 */

void __sync_lock_release_2(undefined2 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}



/* Function: __sync_lock_release_1 @ 000127e4 */

void __sync_lock_release_1(undefined1 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 112 */
