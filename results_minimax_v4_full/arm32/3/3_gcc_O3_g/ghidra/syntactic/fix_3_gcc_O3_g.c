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

/* Additional type definitions needed by decompiled code */
typedef unsigned int uint;
typedef int undefined4;
typedef short undefined2;
typedef char undefined1;
typedef unsigned char byte;
typedef unsigned short __pid_t;
typedef int (*code)();

/* Boolean type */
typedef int bool;
#define true 1
#define false 0

/* NULL definition */
#define NULL ((void*)0)

/* Function pointer types */
typedef int (*_func_int_int)(int, int);

/* Atomic operation stubs */
int __sync_val_compare_and_swap_4(int *ptr, int old_val, int new_val);
void __syncSynchronize(void);

/* Atomic compare-and-swap function pointer stub */
typedef int (*atomic_cas_func)(int, int, int*);
static atomic_cas_func SUB_ffff0fc0 = NULL;

/* Atomic lock release function pointer stub */
typedef void (*atomic_lock_func)(void);
static atomic_lock_func SUB_ffff0fa0 = NULL;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* Global variables */
int global_counter = 0;
static int counter_1 = 0;
int global_array[10];
static int file_scope_static = 0;
int extern_global_var = 0;
_func_int_int global_func_ptr = NULL;
char const_string[] = "Test string for const read";

/* Data section strings */
const char DAT_0001297c[] = "Testing Stack Memory";
const char DAT_00012ad8[] = "Testing Heap Memory";
const char DAT_00012c24[] = ", value after free: %d\n";
const char DAT_00012ca0[] = "fork";
const char DAT_00012c34[] = ", child exited with status: %d\n";
const char DAT_00012c5c[] = ", child terminated by signal: %d\n";
const char DAT_00012ccc[] = "Testing Static and Global Variables";
const char DAT_00012f50[] = "Testing Memory Operation Functions";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/3/3_gcc_O3_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: main @ 00010684 */

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





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 00010798 */

int double_value(int x)

{
 return x << 1;
}



/* Function: alloca_usage @ 000107a0 */

int alloca_usage(int n)

{
 /* Unresolved local var: int * arr@[???] */
 return 0xf;
}



/* Function: local_vars @ 000107a8 */

int local_vars(int x)

{
 /* Unresolved local var: int a@[DW_OP_reg0(r0)]
 Unresolved local var: int b@[DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value]
 Unresolved local var: int c@[DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_plus_uconst: 10; DW_OP_stack_value] */
 return x * 2 + 10;
}



/* Function: local_array @ 000107b4 */

int local_array(int n)

{
 /* Unresolved local var: int[10] arr@[???] */
 return n * 5;
}



/* Function: local_struct @ 000107bc */

int local_struct(int x)

{
 /* Unresolved local var: Point p@[DW_OP_reg0(r0); DW_OP_piece: 4;
 DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4]
 */
 return x * 3;
}



/* Function: address_of_local @ 000107c4 */

int address_of_local(int *out)

{
 /* Unresolved local var: int local@[???] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 000107d4 */

int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[DW_OP_reg0(r0)]
 Unresolved local var: int * p2@[DW_OP_reg0(r0)] */
 return *arr << 1;
}



/* Function: large_stack_frame @ 000107e0 */

/* WARNING: Removing unreachable block (ram,0x00010848) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 char cVar1;
 char *pcVar2;
 char cStack_80d;
 char large_buf [2048];
 
 /* Unresolved local var: int i@[???] */
 cVar1 = '\0';
 pcVar2 = &cStack_80d;
 do {
 pcVar2 = pcVar2 + 1;
 *pcVar2 = cVar1;
 cVar1 = cVar1 + '\x01';
 } while (pcVar2 != large_buf + 0x7ff);
 return (uint)(byte)large_buf[0x400];
}



/* Function: vla_stack @ 00010850 */

int vla_stack(int n)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 int aiStack_14 [3];
 
 /* Unresolved local var: int[9623] vla@[???] */
 aiStack_14[2] = 0;
 if (n - 1U < 1000) {
 iVar1 = -(n * 4 + 7U & 0xfffffff8);
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 piVar2 = (int *)((int)aiStack_14 + iVar1);
 do {
 piVar2 = piVar2 + 1;
 *piVar2 = iVar3;
 iVar3 = iVar3 + 2;
 } while (iVar3 != n * 2);
 iVar1 = *(int *)((int)aiStack_14 + (n >> 1) * 4 + iVar1 + 4);
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



/* Function: alloca_usage_2 @ 000108e0 */

int alloca_usage_2(int n)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int aiStack_14 [3];
 
 /* Unresolved local var: int * arr@[???] */
 aiStack_14[2] = 0;
 if (n < 1) {
 iVar1 = -1;
 }
 else {
 iVar1 = -(n * 4 + 7U & 0xfffffff8);
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 piVar3 = (int *)((int)aiStack_14 + iVar1);
 do {
 piVar3 = piVar3 + 1;
 *piVar3 = iVar2;
 iVar2 = iVar2 + 3;
 } while (piVar3 != (int *)((int)aiStack_14 + n * 4 + iVar1));
 iVar1 = *(int *)((int)aiStack_14 + (n >> 1) * 4 + iVar1 + 4);
 }
 if (aiStack_14[2] == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: stack_alias @ 00010970 */

int stack_alias(int *p1,int *p2)

{
 /* Unresolved local var: int local@[???] */
 return 0x14;
}



/* Function: test_stack_memory @ 00010978 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 int iVar1;
 
 /* Unresolved local var: int out@[???]
 Unresolved local var: int[10] arr5@[???]
 Unresolved local var: int alias_val@[???]
 Unresolved local var: uint anon_var_0@[???] */
 puts(&DAT_0001297c);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",10);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 iVar1 = large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",iVar1);
 iVar1 = __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",10);
 iVar1 = alloca_usage(iVar1);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",iVar1);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 00010a48 */

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
 iVar2 = 0;
 piVar1 = (int *)((int)__ptr + -4);
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



/* Function: heap_calloc @ 00010aa4 */

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
 iVar2 = 0;
 if (0 < n) {
 piVar1 = (int *)((int)__ptr + -4);
 do {
 piVar1 = piVar1 + 1;
 iVar2 = iVar2 + *piVar1;
 } while ((int *)((int)__ptr + n * 4 + -4) != piVar1);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 00010af8 */

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
 __ptr[4] = 5;
 __ptr[2] = 3;
 __ptr[3] = 4;
 *__ptr = 1;
 __ptr[1] = 2;
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 iVar1 = -2;
 }
 else {
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



/* Function: heap_array @ 00010b74 */

int heap_array(int n)

{
 void *__ptr;
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(n * 4);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 piVar2 = (int *)((int)__ptr + -4);
 do {
 piVar2 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 } while (piVar2 != (int *)((int)__ptr + (n * 4 - 4U)));
 }
 iVar1 = *(int *)((int)__ptr + (n / 2) * 4);
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_struct @ 00010bd8 */

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



/* Function: heap_nested @ 00010c08 */

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



/* Function: linked_list_heap @ 00010c74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int *__ptr;
 int *piVar4;
 int iVar5;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: Node * temp@[???]
 Unresolved local var: int i@[???] */
 /* Unresolved local var: Node * new_node@[???] */
 piVar1 = malloc(8);
 iVar5 = 0;
 __ptr = (int *)0x0;
 piVar4 = (int *)0x0;
 while( true ) {
 if (piVar1 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 /* Unresolved local var: Node * temp@[???] */
 piVar4 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar4;
 }
 return -1;
 }
 *piVar1 = iVar5;
 piVar1[1] = 0;
 iVar5 = iVar5 + 10;
 piVar2 = piVar1;
 if (__ptr != (int *)0x0) {
 piVar4[1] = (int)piVar1;
 piVar2 = __ptr;
 }
 __ptr = piVar2;
 if (iVar5 == 0x32) break;
 piVar2 = malloc(8);
 piVar4 = piVar1;
 piVar1 = piVar2;
 }
 iVar5 = 0;
 piVar4 = __ptr;
 do {
 iVar3 = *piVar4;
 piVar4 = (int *)piVar4[1];
 iVar5 = iVar5 + iVar3;
 } while (piVar4 != (int *)0x0);
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar4 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar4;
 } while (piVar4 != (int *)0x0);
 return iVar5;
}



/* Function: create_tree_node @ 00010d2c */

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



/* Function: tree_heap_traversal @ 00010d54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 void *__ptr;
 void *pvVar1;
 void *__ptr_00;
 
 /* Unresolved local var: TreeNode * root@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: TreeNode * node@[???] */
 __ptr = malloc(0xc);
 if (__ptr == (void *)0x0) {
 return -1;
 }
 /* Unresolved local var: TreeNode * node@[???] */
 pvVar1 = malloc(0xc);
 /* Unresolved local var: TreeNode * node@[???] */
 if (pvVar1 == (void *)0x0) {
 pvVar1 = malloc(0xc);
 if (pvVar1 != (void *)0x0) {
 free(pvVar1);
 }
 }
 else {
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
 return -2;
}



/* Function: memory_leak @ 00010ddc */

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
 iVar3 = 0;
 piVar2 = (int *)((int)pvVar1 + -4);
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



/* Function: dangling_pointer @ 00010e2c */

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



/* Function: double_free @ 00010e6c */

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



/* Function: heap_overflow @ 00010eac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 void *__ptr;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(0x28);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return 0;
 }
 return -1;
}



/* Function: test_heap_memory @ 00010ed4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 void *pvVar1;
 int *piVar2;
 undefined4 *puVar3;
 int *piVar4;
 int *piVar5;
 __pid_t __pid;
 undefined4 uVar6;
 int iVar7;
 int iVar8;
 int *__ptr;
 int status;
 int local_1c;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: pid_t pid@[???] */
 local_1c = 0;
 puts(&DAT_00012ad8);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 pvVar1 = malloc(0x28);
 if (pvVar1 == (void *)0x0) {
 uVar6 = 0xffffffff;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *(undefined4 *)((int)pvVar1 + 4) = 2;
 *(undefined4 *)((int)pvVar1 + 8) = 4;
 *(undefined4 *)((int)pvVar1 + 0xc) = 6;
 *(undefined4 *)((int)pvVar1 + 0x10) = 8;
 *(undefined4 *)((int)pvVar1 + 0x18) = 0xc;
 *(undefined4 *)((int)pvVar1 + 0x14) = 10;
 *(undefined4 *)((int)pvVar1 + 0x24) = 0x12;
 *(undefined4 *)((int)pvVar1 + 0x1c) = 0xe;
 *(undefined4 *)((int)pvVar1 + 0x20) = 0x10;
 free(pvVar1);
 uVar6 = 10;
 }
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar6);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 piVar2 = calloc(5,4);
 if (piVar2 == (int *)0x0) {
 iVar8 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 iVar8 = *piVar2 + piVar2[1] + piVar2[2] + piVar2[3] + piVar2[4];
 free(piVar2);
 }
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar8);
 iVar8 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",iVar8);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 pvVar1 = malloc(0x28);
 if (pvVar1 == (void *)0x0) {
 uVar6 = 0xffffffff;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *(undefined4 *)((int)pvVar1 + 4) = 3;
 *(undefined4 *)((int)pvVar1 + 8) = 6;
 *(undefined4 *)((int)pvVar1 + 0xc) = 9;
 *(undefined4 *)((int)pvVar1 + 0x10) = 0xc;
 *(undefined4 *)((int)pvVar1 + 0x18) = 0x12;
 *(undefined4 *)((int)pvVar1 + 0x14) = 0xf;
 *(undefined4 *)((int)pvVar1 + 0x24) = 0x1b;
 *(undefined4 *)((int)pvVar1 + 0x1c) = 0x15;
 *(undefined4 *)((int)pvVar1 + 0x20) = 0x18;
 free(pvVar1);
 uVar6 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",uVar6);
 /* Unresolved local var: Point * p@[???]
 Unresolved local var: int result@[???] */
 pvVar1 = malloc(8);
 if (pvVar1 == (void *)0x0) {
 uVar6 = 0xffffffff;
 }
 else {
 free(pvVar1);
 uVar6 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar6);
 pvVar1 = malloc(8);
 if (pvVar1 == (void *)0x0) {
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 puVar3 = malloc(8);
 *(undefined4 **)((int)pvVar1 + 4) = puVar3;
 if (puVar3 == (undefined4 *)0x0) {
 free(pvVar1);
 uVar6 = 0xfffffffe;
 }
 else {
 uVar6 = 0;
 *puVar3 = 0x14;
 puVar3[1] = 0;
 }
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar6);
 free(*(void **)((int)pvVar1 + 4));
 free(pvVar1);
 }
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: Node * temp@[???]
 Unresolved local var: int i@[???]
 Unresolved local var: Node * new_node@[???] */
 piVar4 = malloc(8);
 iVar8 = 0;
 __ptr = (int *)0x0;
 piVar2 = (int *)0x0;
 do {
 if (piVar4 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 /* Unresolved local var: Node * temp@[???] */
 piVar2 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar2;
 }
 iVar8 = -1;
LAB_000110fc:
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar8);
 iVar8 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",iVar8);
 /* Unresolved local var: int * leak@[???] */
 puVar3 = malloc(0x14);
 if (puVar3 == (undefined4 *)0x0) {
 uVar6 = 0xffffffff;
 }
 else {
 /* Unresolved local var: int i@[???] */
 puVar3[2] = 2;
 puVar3[3] = 3;
 uVar6 = 2;
 *puVar3 = 0;
 puVar3[1] = 1;
 puVar3[4] = 4;
 }
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar6);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 /* Unresolved local var: int result@[???]
 Unresolved local var: int * p@[???]
 Unresolved local var: int value@[???]
 Unresolved local var: int dangerous@[???] */
 puVar3 = malloc(4);
 if (puVar3 == (undefined4 *)0x0) {
 uVar6 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(puVar3);
 uVar6 = *puVar3;
 }
 __printf_chk(1,&DAT_00012c24,uVar6);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 if (local_1c == 0) {
 perror(&DAT_00012ca0);
 return;
 }
 }
 else {
 waitpid(__pid,&status,0);
 if ((status & 0x7fU) == 0) {
 __printf_chk(1,&DAT_00012c34,status >> 8 & 0xff);
 }
 else if (0x1ffffff < (int)(((status & 0x7fU) + 1) * 0x1000000)) {
 __printf_chk(1,&DAT_00012c5c);
 }
 if (local_1c == 0) {
 return;
 }
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 *piVar4 = iVar8;
 piVar4[1] = 0;
 iVar8 = iVar8 + 10;
 piVar5 = piVar4;
 if (__ptr != (int *)0x0) {
 piVar2[1] = (int)piVar4;
 piVar5 = __ptr;
 }
 __ptr = piVar5;
 if (iVar8 == 0x32) {
 iVar8 = 0;
 piVar2 = __ptr;
 do {
 iVar7 = *piVar2;
 piVar2 = (int *)piVar2[1];
 iVar8 = iVar8 + iVar7;
 } while (piVar2 != (int *)0x0);
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar2 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar2;
 } while (piVar2 != (int *)0x0);
 goto LAB_000110fc;
 }
 piVar5 = malloc(8);
 piVar2 = piVar4;
 piVar4 = piVar5;
 } while( true );
}



/* Function: global_var_access @ 00011330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00011348 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 0001135c */

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



/* Function: static_local @ 00011374 */

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



/* Function: call_static_func @ 00011398 */

int call_static_func(int x)

{
 return x * 2 + 1;
}



/* Function: access_extern_global @ 000113a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 000113b8 */

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
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 000113d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 000113e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 000113e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 000113f0 */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00011410 */

void set_global_callback(_func_int_int *f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00011420 */

int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr != (_func_int_int *)0x0) {
 /* WARNING: Could not recover jumptable at 0x00011430. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*global_func_ptr)(x, x);
 return iVar1;
 }
 return -1;
}



/* Function: global_heap_store @ 00011440 */

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



/* Function: static_complex_init @ 00011450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00011458 */

int tls_access(int val)

{
 return val << 1;
}



/* Function: init_order_test @ 00011460 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 /* Unresolved local var: int external_val@[???] */
 return 0x14;
}



/* Function: test_static_global @ 00011468 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 int iVar1;
 
 /* Unresolved local var: int heap_val@[???] */
 puts(&DAT_00012ccc);
 global_counter = global_counter + 1;
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n");
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n");
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 iVar1 = extern_function(5);
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",iVar1);
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",(byte)const_string[4] + 0x2a);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n");
 global_func_ptr = double_value;
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",10);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",0xf);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



/* Function: memop_memset @ 0001163c */

int memop_memset(void *buf,size_t size,int fill_value)

{
 if (size != 0 && buf != (void *)0x0) {
 memset(buf,fill_value,size);
 return (uint)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_memcpy @ 00011670 */

int memop_memcpy(void *dst,void *src,size_t n)

{
 if (dst == (void *)0x0 || (n == 0 || src == (void *)0x0)) {
 return -1;
 }
 memcpy(dst,src,n);
 return *(int *)((int)dst + ((n & 0xfffffffc) - 4));
}



/* Function: memop_memmove @ 000116b8 */

int memop_memmove(void *buf,size_t n)

{
 if (buf != (void *)0x0 && 1 < n) {
 memmove((void *)((int)buf + 1),buf,n - 1);
 return (uint)*(byte *)((int)buf + 1);
 }
 return -1;
}



/* Function: memop_memcmp @ 000116f0 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 if (p1 == (void *)0x0 || (n == 0 || p2 == (void *)0x0)) {
 return 0;
 }
 /* Unresolved local var: int result@[???] */
 iVar1 = memcmp(p1,p2,n);
 if (iVar1 < 1) {
 if (iVar1 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
 }
 return 1;
}



/* Function: memop_bzero @ 0001173c */

int memop_bzero(void *buf,size_t n)

{
 if (buf != (void *)0x0) {
 memset(buf,0,n);
 return (uint)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_bcopy @ 00011764 */

int memop_bcopy(void *src,void *dst,size_t n)

{
 if (src == (void *)0x0 || (n == 0 || dst == (void *)0x0)) {
 return -1;
 }
 memmove(dst,src,n);
 return (uint)*(byte *)dst;
}



/* Function: memop_unaligned_access @ 000117a8 */

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



/* Function: memop_memory_barrier @ 0001180c */

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



/* Function: test_memory_op_functions @ 00011834 */

/* WARNING: Removing unreachable block (ram,0x00011990) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 int flag;
 int cmp_a [3];
 int cmp_b [3];
 char zero_buf [10];
 char move_buf [11];
 char buffer [256];
 
 /* Unresolved local var: int[5] int_src@[???]
 Unresolved local var: int[5] int_dst@[???]
 Unresolved local var: char[4] bcopy_src@[???]
 Unresolved local var: char[4] bcopy_dst@[???]
 Unresolved local var: char[8] unalign_buf@[???] */
 puts(&DAT_00012f50);
 __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
 __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
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
 memmove(move_buf + 1,move_buf,9);
 __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 /* Unresolved local var: int result@[???] */
 memcmp(cmp_a,cmp_b,0xc);
 __printf_chk(1,"MEMOP-L2-04: %d\n");
 __printf_chk(1,"MEMOP-L2-05: %d\n");
 __printf_chk(1,"MEMOP-L2-06: %d\n");
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 /* Unresolved local var: int local@[???] */
 __sync_synchronize();
 __printf_chk(1,"MEMOP-L3-02: %d\n",10);
 return;
}



/* Function: __sync_fetch_and_add_4 @ 000119d4 */

int __sync_fetch_and_add_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 + param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_fetch_and_sub_4 @ 00011a0c */

int __sync_fetch_and_sub_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 - param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_fetch_and_or_4 @ 00011a44 */

uint __sync_fetch_and_or_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 | param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_and_4 @ 00011a7c */

uint __sync_fetch_and_and_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 & param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_xor_4 @ 00011ab4 */

uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 ^ param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_nand_4 @ 00011aec */

uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,~(uVar2 & param_2),param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_add_2 @ 00011b28 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_sub_2 @ 00011b88 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_or_2 @ 00011be8 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_and_2 @ 00011c48 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_xor_2 @ 00011ca8 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_nand_2 @ 00011d08 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_add_1 @ 00011d6c */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_sub_1 @ 00011dc8 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_or_1 @ 00011e24 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_and_1 @ 00011e80 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_xor_1 @ 00011edc */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_nand_1 @ 00011f38 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_add_and_fetch_4 @ 00011f98 */

int __sync_add_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_sub_and_fetch_4 @ 00011fd0 */

int __sync_sub_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_or_and_fetch_4 @ 00012008 */

uint __sync_or_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_and_and_fetch_4 @ 00012040 */

uint __sync_and_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_xor_and_fetch_4 @ 00012078 */

uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_nand_and_fetch_4 @ 000120b0 */

uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_add_and_fetch_2 @ 000120ec */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_2 @ 00012154 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_2 @ 000121bc */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_2 @ 00012224 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_2 @ 0001228c */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_2 @ 000122f4 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_add_and_fetch_1 @ 00012360 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_1 @ 000123c4 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_1 @ 00012428 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_1 @ 0001248c */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_1 @ 000124f0 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_1 @ 00012554 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_val_compare_and_swap_4 @ 000125bc */

int __sync_val_compare_and_swap_4(int *param_1,int param_2,undefined4 param_3)

{
 int iVar1;
 
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}



/* Function: __sync_val_compare_and_swap_2 @ 0001260c */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: __sync_val_compare_and_swap_1 @ 00012684 */

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
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: __sync_bool_compare_and_swap_4 @ 000126f8 */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 int iVar1;
 
 iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
 return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 00012724 */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 int iVar1;
 
 iVar1 = __sync_val_compare_and_swap_2(param_1,param_2,param_3);
 return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 00012740 */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __sync_val_compare_and_swap_1(param_1,param_2 & 0xff,param_2);
 return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 00012768 */

undefined4 __sync_lock_test_and_set_4(undefined4 *param_1,undefined4 param_2)

{
 int iVar1;
 undefined4 uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_lock_test_and_set_2 @ 000127a0 */

int __sync_lock_test_and_set_2(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_test_and_set_1 @ 00012800 */

int __sync_lock_test_and_set_1(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_release_8 @ 0001285c */

void __sync_lock_release_8(undefined4 *param_1)

{
 (*(code *)&SUB_ffff0fa0)();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}



/* Function: __sync_lock_release_4 @ 00012880 */

void __sync_lock_release_4(undefined4 *param_1)

{
 (*(code *)&SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}



/* Function: __sync_lock_release_2 @ 000128a0 */

void __sync_lock_release_2(undefined2 *param_1)

{
 (*(code *)&SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}



/* Function: __sync_lock_release_1 @ 000128c0 */

void __sync_lock_release_1(undefined1 *param_1)

{
 (*(code *)&SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 113 */
