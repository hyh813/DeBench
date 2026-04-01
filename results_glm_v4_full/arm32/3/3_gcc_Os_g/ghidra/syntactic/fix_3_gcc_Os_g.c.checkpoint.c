/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned int undefined;
typedef int __pid_t;
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/* Printf_chk stub (fortified printf - normally provided by glibc) */
int __printf_chk(int flag, const char *format, ...) {
    va_list args;
    int ret;
    va_start(args, format);
    ret = vprintf(format, args);
    va_end(args);
    return ret;
}

/* Stack protector failure function stub (normally provided by compiler/runtime) */
static void __stack_chk_fail(void) {
    /* Stack smashing detected - terminate */
    _exit(127);
}

/* Full memory barrier - GCC atomic built-in for ARM32 */
static inline void __sync_synchronize(void) {
    __asm__ __volatile__("" ::: "memory");
}

/* Fetch and add - GCC atomic built-in */
static inline int __sync_fetch_and_add(int *ptr, int value) {
    int ret = *ptr;
    *ptr += value;
    return ret;
}

/* Compare and swap - GCC atomic built-in */
static inline int __sync_val_compare_and_swap(int *ptr, int oldval, int newval) {
    int ret = *ptr;
    if (ret == oldval) {
        *ptr = newval;
    }
    return ret;
}

/* Fetch and or - GCC atomic built-in */
static inline int __sync_fetch_and_or(int *ptr, int value) {
    int ret = *ptr;
    *ptr |= value;
    return ret;
}

/* Fetch and and - GCC atomic built-in */
static inline int __sync_fetch_and_and(int *ptr, int value) {
    int ret = *ptr;
    *ptr &= value;
    return ret;
}

/* Fetch and xor - GCC atomic built-in */
static inline int __sync_fetch_and_xor(int *ptr, int value) {
    int ret = *ptr;
    *ptr ^= value;
    return ret;
}

/* Fetch and nand - GCC atomic built-in */
static inline int __sync_fetch_and_nand(int *ptr, int value) {
    int ret = *ptr;
    *ptr = ~(ret & value);
    return ret;
}

/* Lock test and set - GCC atomic built-in */
static inline char __sync_lock_test_and_set(char *ptr, char value) {
    char ret = *ptr;
    *ptr = value;
    return ret;
}

/* Lock release - GCC atomic built-in */
static inline void __sync_lock_release(char *ptr) {
    *ptr = 0;
}

/* Bool compare and swap - GCC atomic built-in */
static inline int __sync_bool_compare_and_swap(int *ptr, int oldval, int newval) {
    if (*ptr == oldval) {
        *ptr = newval;
        return 1;
    }
    return 0;
}

/* Add and fetch - GCC atomic built-in */
static inline int __sync_add_and_fetch(int *ptr, int value) {
    *ptr += value;
    return *ptr;
}

/* Sub and fetch - GCC atomic built-in */
static inline int __sync_sub_and_fetch(int *ptr, int value) {
    *ptr -= value;
    return *ptr;
}

/* Or and fetch - GCC atomic built-in */
static inline int __sync_or_and_fetch(int *ptr, int value) {
    *ptr |= value;
    return *ptr;
}

/* And and fetch - GCC atomic built-in */
static inline int __sync_and_and_fetch(int *ptr, int value) {
    *ptr &= value;
    return *ptr;
}

/* Xor and fetch - GCC atomic built-in */
static inline int __sync_xor_and_fetch(int *ptr, int value) {
    *ptr ^= value;
    return *ptr;
}

/* Nand and fetch - GCC atomic built-in */
static inline int __sync_nand_and_fetch(int *ptr, int value) {
    int ret = *ptr;
    *ptr = ~(ret & value);
    return *ptr;
}

/* Forward declarations and struct definitions */
struct Node {
    int data;
    struct Node *next;
};
typedef struct Node Node;

struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};
typedef struct TreeNode TreeNode;

typedef int (*_func_int_int)(int);



/* Global variable declarations */
int global_counter = 0;
int counter_1 = 0;
int extern_global_var = 0;
int file_scope_static = 0;
_func_int_int global_func_ptr = NULL;
int global_array[10] = {0};

/* Data label string constants from decompiled binary */
/* Definitions for data label string constants */
const char DAT_00012784[] = "Testing Stack Memory";
const char DAT_00012d08[] = "Testing Memory Operations";
const char DAT_000128cd[] = "Testing Heap Memory";
const char DAT_00012aa6[] = "Testing Static/Global";
const char DAT_00012a25[] = "Result: %d\n";
const char DAT_00012a9b[] = "fork error";
const char DAT_00012a35[] = "Exit status: %d\n";
const char DAT_00012a5a[] = "Signal: %d\n";
const char DAT_00012e14[] = "\x00\x01\x02\x03\x04\x05\x06\x07";

/* Definition for const_string used in read_const_data */
const char const_string[] = "TEST12345";

/* External function stub implementation (static to avoid linker conflicts) */
static int extern_function(int x) {
    return x * 2;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/3/3_gcc_Os_g
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



/* Function: local_vars @ 000107a0 */

int local_vars(int x)

{
 /* Unresolved local var: int a@[DW_OP_reg0(r0)]
 Unresolved local var: int b@[DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value]
 Unresolved local var: int c@[DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_plus_uconst: 10; DW_OP_stack_value] */
 return x * 2 + 10;
}



/* Function: local_array @ 000107ac */

/* WARNING: Removing unreachable block (ram,0x00010800) */

int local_array(int n)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int arr [10];
 
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 iVar2 = 0;
 piVar1 = arr;
 do {
 iVar2 = iVar2 + 1;
 *piVar1 = iVar3;
 iVar3 = iVar3 + n;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 10);
 return arr[5];
}



/* Function: local_struct @ 00010810 */

int local_struct(int x)

{
 /* Unresolved local var: Point p@[DW_OP_reg0(r0); DW_OP_piece: 4;
 DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4]
 */
 return x * 3;
}



/* Function: address_of_local @ 00010818 */

int address_of_local(int *out)

{
 /* Unresolved local var: int local@[???] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00010828 */

int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[DW_OP_reg0(r0)]
 Unresolved local var: int * p2@[DW_OP_reg0(r0)] */
 return *arr << 1;
}



/* Function: large_stack_frame @ 00010834 */

/* WARNING: Removing unreachable block (ram,0x00010884) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 char *pcVar1;
 int iVar2;
 char large_buf [2048];
 
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 pcVar1 = large_buf;
 do {
 *pcVar1 = (char)iVar2;
 iVar2 = iVar2 + 1;
 pcVar1 = pcVar1 + 1;
 } while (iVar2 != 0x800);
 return (uint)(byte)large_buf[0x400];
}



/* Function: vla_stack @ 00010898 */

int vla_stack(int n)

{
 int iVar1;
 int iVar2;
 int local_10 [2];
 
 /* Unresolved local var: int[9670] vla@[???]
 Unresolved local var: uint anon_var_0@[???] */
 local_10[1] = 0;
 if (n - 1U < 1000) {
 iVar1 = -(n * 4 + 7U & 0xfffffff8);
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 do {
 *(int *)((int)local_10 + iVar2 * 4 + iVar1) = iVar2 << 1;
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 iVar1 = *(int *)((int)local_10 + (n >> 1) * 4 + iVar1);
 }
 else {
 iVar1 = -1;
 }
 if (local_10[1] == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: alloca_usage @ 00010920 */

int alloca_usage(int n)

{
 int iVar1;
 int iVar2;
 int local_10 [2];
 
 /* Unresolved local var: int * arr@[???] */
 local_10[1] = 0;
 if (n < 1) {
 iVar1 = -1;
 }
 else {
 iVar1 = -(n * 4 + 7U & 0xfffffff8);
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 do {
 *(int *)((int)local_10 + iVar2 * 4 + iVar1) = iVar2 * 3;
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 iVar1 = *(int *)((int)local_10 + (n >> 1) * 4 + iVar1);
 }
 if (local_10[1] == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: stack_alias @ 000109a4 */

int stack_alias(int *p1,int *p2)

{
 /* Unresolved local var: int local@[???] */
 return 0x14;
}



/* Function: test_stack_memory @ 000109ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 int iVar1;
 
 /* Unresolved local var: int out@[???]
 Unresolved local var: int[10] arr5@[???]
 Unresolved local var: int alias_val@[???] */
 puts(&DAT_00012784);
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



/* Function: heap_basic @ 00010a90 */

int heap_basic(int n)

{
 void *__ptr;
 int iVar1;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(n << 2);
 /* Unresolved local var: int i@[???] */
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
 *(int *)((int)__ptr + iVar1 * 4) = iVar1 << 1;
 }
 iVar1 = *(int *)((int)__ptr + (n / 2) * 4);
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_calloc @ 00010ae0 */

int heap_calloc(int n)

{
 void *__ptr;
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = calloc(n,4);
 /* Unresolved local var: int i@[???] */
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar1 = 0;
 iVar2 = iVar1;
 for (; iVar1 < n; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + *(int *)((int)__ptr + iVar1 * 4);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 00010b28 */

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



/* Function: heap_array @ 00010b98 */

int heap_array(int n)

{
 void *__ptr;
 int iVar1;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(n << 2);
 /* Unresolved local var: int i@[???] */
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
 *(int *)((int)__ptr + iVar1 * 4) = iVar1 * 3;
 }
 iVar1 = *(int *)((int)__ptr + (n / 2) * 4);
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_struct @ 00010be8 */

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



/* Function: heap_nested @ 00010c14 */

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
 if (pNVar1 == (Node *)0x0) {
 free(__ptr);
 return -2;
 }
 pNVar1->data = 0x14;
 pNVar1->next = (Node *)0x0;
 return 0;
}



/* Function: linked_list_heap @ 00010c80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int *__ptr;
 int iVar4;
 int *piVar5;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: Node * temp@[???]
 Unresolved local var: int i@[???] */
 iVar4 = 0;
 __ptr = (int *)0x0;
 /* Unresolved local var: Node * new_node@[???] */
 piVar5 = (int *)0x0;
 do {
 piVar2 = malloc(8);
 if (piVar2 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 /* Unresolved local var: Node * temp@[???] */
 piVar5 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar5;
 }
 return -1;
 }
 *piVar2 = iVar4;
 piVar2[1] = 0;
 iVar4 = iVar4 + 10;
 piVar1 = piVar2;
 if (__ptr != (int *)0x0) {
 piVar5[1] = (int)piVar2;
 piVar1 = __ptr;
 }
 __ptr = piVar1;
 piVar5 = piVar2;
 } while (iVar4 != 0x32);
 iVar4 = 0;
 piVar5 = __ptr;
 do {
 iVar3 = *piVar5;
 piVar5 = (int *)piVar5[1];
 iVar4 = iVar4 + iVar3;
 } while (piVar5 != (int *)0x0);
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar5 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar5;
 } while (piVar5 != (int *)0x0);
 return iVar4;
}



/* Function: create_tree_node @ 00010d20 */

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



/* Function: tree_heap_traversal @ 00010d48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 TreeNode *__ptr;
 TreeNode *pTVar1;
 TreeNode *__ptr_00;
 int iVar2;
 int iVar3;
 int iVar4;
 
 /* Unresolved local var: TreeNode * root@[???]
 Unresolved local var: int sum@[???] */
 __ptr = create_tree_node(10);
 if (__ptr == (TreeNode *)0x0) {
 iVar3 = -1;
 }
 else {
 pTVar1 = create_tree_node(0x14);
 __ptr->left = pTVar1;
 pTVar1 = create_tree_node(0x1e);
 __ptr->right = pTVar1;
 __ptr_00 = __ptr->left;
 if (__ptr_00 != (TreeNode *)0x0) {
 if (pTVar1 != (TreeNode *)0x0) {
 iVar3 = __ptr_00->data;
 iVar4 = __ptr->data;
 iVar2 = pTVar1->data;
 free(__ptr_00);
 free(__ptr->right);
 free(__ptr);
 return iVar4 + iVar3 + iVar2;
 }
 free(__ptr_00);
 }
 if (__ptr->right != (TreeNode *)0x0) {
 free(__ptr->right);
 }
 free(__ptr);
 iVar3 = -2;
 }
 return iVar3;
}



/* Function: memory_leak @ 00010de4 */

int memory_leak(int n)

{
 void *pvVar1;
 int iVar2;
 
 /* Unresolved local var: int * leak@[???] */
 pvVar1 = malloc(n << 2);
 /* Unresolved local var: int i@[???] */
 if (pvVar1 == (void *)0x0) {
 return -1;
 }
 for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
 *(int *)((int)pvVar1 + iVar2 * 4) = iVar2;
 }
 return *(int *)((int)pvVar1 + (n / 2) * 4);
}



/* Function: dangling_pointer @ 00010e28 */

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



/* Function: double_free @ 00010e68 */

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



/* Function: heap_overflow @ 00010ea8 */

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
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 piVar1 = __ptr + -1;
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



/* Function: test_heap_memory @ 00010ef0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 int iVar1;
 __pid_t __pid;
 undefined *puVar2;
 int in_r2;
 uint uVar3;
 Node *head;
 int status;
 int local_c;
 
 /* Unresolved local var: pid_t pid@[???] */
 local_c = 0;
 status = in_r2;
 puts(&DAT_000128cd);
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
 __printf_chk(1,&DAT_00012a25,iVar1);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 perror(&DAT_00012a9b);
 }
 else {
 waitpid(__pid,&status,0);
 uVar3 = status & 0x7f;
 if (uVar3 == 0) {
 puVar2 = &DAT_00012a35;
 uVar3 = status >> 8 & 0xff;
 }
 else {
 if ((int)((uVar3 + 1) * 0x1000000) < 0x2000000) goto LAB_00011060;
 puVar2 = &DAT_00012a5a;
 }
 __printf_chk(1,puVar2,uVar3);
 }
LAB_00011060:
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: global_var_access @ 000110e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00011100 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00011114 */

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



/* Function: static_local @ 0001112c */

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



/* Function: call_static_func @ 0001114c */

int call_static_func(int x)

{
 return x * 2 + 1;
}



/* Function: access_extern_global @ 00011158 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 0001116c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 00011174 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 0001118c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 00011194 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 0001119c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 000111a4 */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 000111b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 000111c4 */

void set_global_callback(_func_int_int *f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 000111d4 */

int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr != (_func_int_int *)0x0) {
 /* WARNING: Could not recover jumptable at 0x000111e4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*global_func_ptr)(x);
 return iVar1;
 }
 return -1;
}



/* Function: global_heap_store @ 000111f4 */

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



/* Function: static_complex_init @ 00011204 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 0001120c */

int tls_access(int val)

{
 return val << 1;
}



/* Function: init_order_test @ 00011214 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 /* Unresolved local var: int external_val@[???] */
 return 0x14;
}



/* Function: test_static_global @ 0001121c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 int iVar1;
 
 /* Unresolved local var: int heap_val@[???] */
 puts(&DAT_00012aa6);
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
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



/* Function: memop_memset @ 000113f4 */

int memop_memset(void *buf,size_t size,int fill_value)

{
 if (size != 0 && buf != (void *)0x0) {
 memset(buf,fill_value,size);
 return (uint)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_memcpy @ 00011428 */

int memop_memcpy(void *dst,void *src,size_t n)

{
 if (dst == (void *)0x0 || (n == 0 || src == (void *)0x0)) {
 return -1;
 }
 memcpy(dst,src,n);
 return *(int *)((int)dst + ((n & 0xfffffffc) - 4));
}



/* Function: memop_memmove @ 00011470 */

int memop_memmove(void *buf,size_t n)

{
 if (buf != (void *)0x0 && 1 < n) {
 memmove((void *)((int)buf + 1),buf,n - 1);
 return (uint)*(byte *)((int)buf + 1);
 }
 return -1;
}



/* Function: memop_memcmp @ 000114a4 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 if (p1 == (void *)0x0 || (n == 0 || p2 == (void *)0x0)) {
 return 0;
 }
 /* Unresolved local var: int result@[???] */
 iVar1 = memcmp(p1,p2,n);
 if (0 < iVar1) {
 return 1;
 }
 if (iVar1 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: memop_bzero @ 000114f0 */

int memop_bzero(void *buf,size_t n)

{
 if (buf != (void *)0x0) {
 memset(buf,0,n);
 return (uint)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_bcopy @ 00011518 */

int memop_bcopy(void *src,void *dst,size_t n)

{
 byte *pbVar1;
 
 if (src == (void *)0x0 || (n == 0 || dst == (void *)0x0)) {
 return -1;
 }
 pbVar1 = memmove(dst,src,n);
 return (uint)*pbVar1;
}



/* Function: memop_unaligned_access @ 0001155c */

int memop_unaligned_access(char *buf)

{
 int iVar1;
 int value;
 int local_c;
 
 local_c = 0;
 value = (int)buf;
 if (buf == (char *)0x0) {
 iVar1 = -1;
 }
 else {
 memcpy(&value,buf + 1,4);
 iVar1 = value;
 }
 if (local_c == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: memop_memory_barrier @ 000115b8 */

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



/* Function: test_memory_op_functions @ 000115e0 */

/* WARNING: Removing unreachable block (ram,0x00011790) */
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
 
 puts(&DAT_00012d08);
 int_src[0] = 10;
 int_src[1] = 0x14;
 int_src[2] = 0x1e;
 int_src[3] = 0x28;
 int_src[4] = 0x32;
 memset(int_dst,0,0x14);
 iVar1 = memop_memset(buffer,10,0x41);
 __printf_chk(1,"MEMOP-L2-01: %d\n",iVar1);
 iVar1 = memop_memcpy(int_dst,int_src,0x14);
 __printf_chk(1,"MEMOP-L2-02: %d\n",iVar1);
 memcpy(move_buf,"HelloWorld",0xb);
 iVar1 = memop_memmove(move_buf,10);
 __printf_chk(1,"MEMOP-L2-03: %c\n",iVar1);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 /* Unresolved local var: int result@[???] */
 memcmp(cmp_a,cmp_b,0xc);
 __printf_chk(1,"MEMOP-L2-04: %d\n");
 iVar1 = memop_bzero(zero_buf,10);
 __printf_chk(1,"MEMOP-L2-05: %d\n",iVar1);
	strncpy(bcopy_src,"\x01\x02\x03\x04",4);
 bcopy_dst[0] = '\0';
 bcopy_dst[1] = '\0';
 bcopy_dst[2] = '\0';
	bcopy_dst[3] = '\0';
	memcpy(bcopy_src,"\x01\x02\x03\x04",4);
	iVar1 = memop_bcopy(bcopy_src,bcopy_dst,4);
	__printf_chk(1,"MEMOP-L2-06: %d\n",iVar1);
	memcpy(unalign_buf,&DAT_00012e14,8);
 iVar1 = memop_unaligned_access(unalign_buf);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",iVar1);
 flag = 5;
 iVar1 = memop_memory_barrier(&flag);
 __printf_chk(1,"MEMOP-L3-02: %d\n",iVar1);
 return;
}




























































































































/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 112 */
