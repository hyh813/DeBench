#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdbool.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

#ifndef __ssize_t_defined
typedef long ssize_t;
#endif
typedef unsigned long uintptr_t;
#ifndef __intptr_t_defined
typedef long intptr_t;
#endif
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned short undefined2;

/* Structure definitions */
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

/* Generic code type for function pointer casts (Ghidra compatibility) */
typedef int (*code)(int, int, void *);

/* Forward declarations */
int double_value(int x);
extern int SUB_ffff0fc0(int old_val, int new_val, void *ptr);
extern void SUB_ffff0fa0(void);

/* Global variable declarations */
int global_counter = 0;
int global_array[10];
int extern_global_var;
int (*global_func_ptr)(int);
int *global_heap_ptr;
static int file_scope_static;
const char *const_string = "test";



/* Data definitions */
static const char DAT_00012cfe[] = "=== Stack Memory Tests ===";
static const char DAT_00012d1c[] = "=== Heap Memory Tests ===";
static const char DAT_00012d3a[] = "=== Static and Global Variables Tests ===";
static const char DAT_00012d5e[] = "=== Memory Operations Tests ===";
static const char DAT_00012dac[] = "test";
static const char DAT_00012db8[] = "test";
static const char DAT_000129c5[] = "exit code: %d\n";
static const char DAT_000129ea[] = "signal: %d\n";
static const char DAT_000129b5[] = "%d\n";
static const char DAT_00012a2b[] = "fork error";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/3/3_clang_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: local_vars @ 000107bc */

int local_vars(int x)

{
 /* Unresolved local var: int a@[DW_OP_reg0(r0)]
 Unresolved local var: int c@[???]
 Unresolved local var: int b@[???] */
 return x * 2 + 10;
}



/* Function: local_array @ 000107c8 */

int local_array(int n)

{
 int iVar1;
 int iVar2;
 int local_28 [10];
 
 /* Unresolved local var: int[10] arr@[???] */
 iVar1 = 0;
 iVar2 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 local_28[-iVar2] = iVar1;
 iVar2 = iVar2 + -1;
 iVar1 = iVar1 + n;
 } while (iVar2 != -10);
 return local_28[5];
}



/* Function: local_struct @ 000107f8 */

int local_struct(int x)

{
 /* Unresolved local var: Point p@[DW_OP_reg0(r0); DW_OP_piece: 4;
 DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4]
 */
 return x * 3;
}



/* Function: address_of_local @ 00010800 */

int address_of_local(int *out)

{
 /* Unresolved local var: int local@[???] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00010810 */

int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[DW_OP_reg0(r0)]
 Unresolved local var: int * p2@[DW_OP_reg0(r0)] */
 return *arr << 1;
}



/* Function: large_stack_frame @ 0001081c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 int iVar1;
 byte local_808 [2048];
 
 /* Unresolved local var: char[2048] large_buf@[???] */
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(r0)] */
 local_808[iVar1] = (byte)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 return (uint)local_808[0x400];
}



/* Function: vla_stack @ 0001084c */

int vla_stack(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iStack_10;
 
 /* Unresolved local var: uint __vla_expr0@[???]
 Unresolved local var: int[707] vla@[???] */
 iVar1 = -1;
 if (0xfffffc17 < n - 0x3e9U) {
 iVar1 = -0x10 - (n * 4 + 7U & 0xfffffff8);
 iVar3 = 0;
 iVar2 = n;
 do {
 /* Unresolved local var: int i@[???] */
 *(int *)((int)&iStack_10 + iVar3 * 2 + iVar1 + 0x10) = iVar3;
 iVar3 = iVar3 + 2;
 iVar2 = iVar2 + -1;
 } while (iVar2 != 0);
 iVar1 = *(int *)((int)&iStack_10 + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 return iVar1;
}



/* Function: alloca_usage @ 000108c0 */

int alloca_usage(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int local_10;
 
 /* Unresolved local var: int * arr@[???] */
 if (0 < n) {
 iVar1 = -0x10 - (n * 4 + 7U & 0xfffffff8);
 iVar2 = 0;
 iVar3 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg3(r3)] */
 *(int *)((int)&local_10 + iVar3 * 4 + iVar1 + 0x10) = iVar2;
 iVar3 = iVar3 + 1;
 iVar2 = iVar2 + 3;
 } while (n != iVar3);
 return *(int *)((int)&local_10 + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 return -1;
}



/* Function: stack_alias @ 00010924 */

int stack_alias(int *p1,int *p2)

{
 /* Unresolved local var: int local@[???] */
 return 0x14;
}



/* Function: test_stack_memory @ 0001092c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 int iVar1;
 int *piVar2;
 int local_810 [256];
 byte local_410;
 
 /* Unresolved local var: int[10] arr5@[???]
 Unresolved local var: int alias_val@[???]
 Unresolved local var: int out@[???] */
 puts(&DAT_00012cfe);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 iVar1 = 0;
 do {
 /* Unresolved local var: int[10] arr@[???]
 Unresolved local var: int i@[???] */
 *(int *)((int)local_810 + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 printf("MEM-L1-02 (local_array): %d\n",local_810[5]);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 iVar1 = 0;
 do {
 /* Unresolved local var: char[2048] large_buf@[???]
 Unresolved local var: int i@[DW_OP_reg0(r0)] */
 *(char *)((int)local_810 + iVar1) = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(uint)local_410);
 iVar1 = 0;
 /* Unresolved local var: uint __vla_expr0@[???]
 Unresolved local var: int[707] vla@[???] */
 do {
 /* Unresolved local var: int i@[???] */
 *(int *)((int)local_810 + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 } while (iVar1 != 0x14);
 printf("MEM-L2-02 (vla_stack): %d\n",local_810[5]);
 iVar1 = 0;
 piVar2 = local_810;
 do {
 /* Unresolved local var: int * arr@[DW_OP_reg13(sp)]
 Unresolved local var: int i@[???] */
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x1e);
 printf("MEM-L2-03 (alloca_usage): %d\n",local_810[5]);
 printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 00010a5c */

int heap_basic(int n)

{
 void *__ptr;
 int iVar1;
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
 iVar1 = 0;
 iVar2 = n;
 do {
 *(int *)((int)__ptr + iVar1 * 2) = iVar1;
 iVar1 = iVar1 + 2;
 iVar2 = iVar2 + -1;
 } while (iVar2 != 0);
 }
 iVar2 = *(int *)((int)__ptr + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_calloc @ 00010abc */

int heap_calloc(int n)

{
 int *__ptr;
 int *piVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = calloc(n,4);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 iVar3 = 0;
 /* Unresolved local var: int i@[???] */
 if (1 < n) {
 iVar2 = n + -1;
 iVar3 = 0;
 piVar1 = __ptr;
 do {
 piVar1 = piVar1 + 1;
 iVar2 = iVar2 + -1;
 iVar3 = *piVar1 + iVar3;
 } while (iVar2 != 0);
 }
 free(__ptr);
 }
 return iVar3;
}



/* Function: heap_realloc @ 00010b14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 void *__ptr;
 void *__ptr_00;
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int old_val@[???]
 Unresolved local var: int * new_p@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = iVar2 + 1;
 *(int *)((int)__ptr + iVar2 * 4) = iVar1;
 iVar2 = iVar1;
 } while (iVar1 != 5);
 iVar1 = *(int *)((int)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 iVar2 = -2;
 __ptr_00 = __ptr;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *(undefined4 *)((int)__ptr_00 + 0x24) = 0x5a;
 *(undefined4 *)((int)__ptr_00 + 0x18) = 0x3c;
 iVar2 = -3;
 *(undefined4 *)((int)__ptr_00 + 0x14) = 0x32;
 *(undefined4 *)((int)__ptr_00 + 0x1c) = 0x46;
 *(undefined4 *)((int)__ptr_00 + 0x20) = 0x50;
 if (*(int *)((int)__ptr_00 + 8) == iVar1) {
 iVar2 = 0x32;
 }
 }
 free(__ptr_00);
 }
 return iVar2;
}



/* Function: heap_array @ 00010bbc */

int heap_array(int n)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(n << 2);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 piVar2 = __ptr;
 iVar3 = n;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 iVar3 = iVar3 + -1;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0);
 }
 iVar3 = *(int *)((int)__ptr + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU));
 free(__ptr);
 }
 return iVar3;
}



/* Function: heap_struct @ 00010c20 */

int heap_struct(int x)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: Point * p@[???] */
 return x * 3;
}



/* Function: heap_nested @ 00010c28 */

int heap_nested(Node **head)

{
 Node *__ptr;
 Node *pNVar1;
 int iVar2;
 
 __ptr = malloc(8);
 *head = __ptr;
 if (__ptr == (Node *)0x0) {
 iVar2 = -1;
 }
 else {
 __ptr->data = 10;
 pNVar1 = malloc(8);
 __ptr->next = pNVar1;
 if (pNVar1 == (Node *)0x0) {
 free(__ptr);
 iVar2 = -2;
 }
 else {
 iVar2 = 0;
 pNVar1->data = 0x14;
 pNVar1->next = (Node *)0x0;
 }
 }
 return iVar2;
}



/* Function: linked_list_heap @ 00010c98 */

/* WARNING: Removing unreachable block (ram,0x00010d44) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 uint uVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *__ptr;
 uint uVar6;
 int iVar7;
 bool bVar8;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: Node * temp@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???]
 Unresolved local var: Node * new_node@[???] */
 piVar2 = malloc(8);
 if (piVar2 == (int *)0x0) {
 bVar8 = true;
 __ptr = (int *)0x0;
 }
 else {
 iVar7 = 0;
 piVar4 = (int *)0x0;
 piVar5 = (int *)0x0;
 uVar1 = 0;
 do {
 uVar6 = uVar1;
 *piVar2 = iVar7;
 piVar2[1] = 0;
 __ptr = piVar2;
 if (piVar5 != (int *)0x0) {
 piVar4[1] = (int)piVar2;
 __ptr = piVar5;
 }
 if (uVar6 == 4) {
 bVar8 = false;
 goto LAB_00010d48;
 }
 piVar3 = malloc(8);
 iVar7 = iVar7 + 10;
 piVar4 = piVar2;
 piVar5 = __ptr;
 piVar2 = piVar3;
 uVar1 = uVar6 + 1;
 } while (piVar3 != (int *)0x0);
 bVar8 = uVar6 < 4;
 }
 while (__ptr != (int *)0x0) {
 /* Unresolved local var: Node * temp@[DW_OP_reg4(r4)] */
 piVar2 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar2;
 }
 __ptr = (int *)0x0;
LAB_00010d48:
 iVar7 = -1;
 if ((!bVar8) && (iVar7 = 0, piVar2 = __ptr, __ptr != (int *)0x0)) {
 do {
 piVar4 = piVar2 + 1;
 iVar7 = *piVar2 + iVar7;
 piVar2 = (int *)*piVar4;
 } while ((int *)*piVar4 != (int *)0x0);
 while (__ptr != (int *)0x0) {
 /* Unresolved local var: Node * temp@[DW_OP_reg4(r4)] */
 piVar2 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar2;
 }
 }
 return iVar7;
}



/* Function: create_tree_node @ 00010da4 */

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



/* Function: tree_heap_traversal @ 00010dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 /* Unresolved local var: int sum@[???]
 Unresolved local var: TreeNode * root@[???] */
 return 0x3c;
}



/* Function: memory_leak @ 00010dd8 */

int memory_leak(int n)

{
 void *pvVar1;
 int iVar2;
 
 /* Unresolved local var: int * leak@[???] */
 pvVar1 = malloc(n << 2);
 if (pvVar1 == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 do {
 *(int *)((int)pvVar1 + iVar2 * 4) = iVar2;
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 }
 iVar2 = *(int *)((int)pvVar1 + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU));
 }
 return iVar2;
}



/* Function: dangling_pointer @ 00010e2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 int *__ptr;
 int iVar1;
 
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int value@[???]
 Unresolved local var: int dangerous@[???] */
 __ptr = malloc(4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 iVar1 = *__ptr;
 }
 return iVar1;
}



/* Function: double_free @ 00010e74 */

int double_free(int *p)

{
 int iVar1;
 
 if (p == (int *)0x0) {
 iVar1 = -2;
 }
 else {
 iVar1 = *p;
 }
 return iVar1;
}



/* Function: heap_overflow @ 00010e84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 int *__ptr;
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 iVar2 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 __ptr[-iVar2] = iVar1;
 iVar2 = iVar2 + -1;
 iVar1 = iVar1 + 100;
 } while (iVar2 != -0xb);
 iVar1 = *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: test_heap_memory @ 00010ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 Node *__ptr;
 int iVar1;
 void *pvVar2;
 pid_t __pid;
 char *__format;
 undefined4 uVar3;
 uint uVar4;
 uint local_10;
 Node *local_c;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: pid_t pid@[???] */
 puts(&DAT_00012d1c);
 iVar1 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",iVar1);
 iVar1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n",iVar1);
 iVar1 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n",iVar1);
 iVar1 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n",iVar1);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 local_c = (Node *)0x0;
 iVar1 = heap_nested(&local_c);
 printf("HEAP-L2-06 (heap_nested): %d\n",iVar1);
 __ptr = local_c;
 if (local_c != (Node *)0x0) {
 free(local_c->next);
 free(__ptr);
 }
 iVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",iVar1);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
 /* Unresolved local var: int * leak@[???] */
 pvVar2 = malloc(0x14);
 if (pvVar2 == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg1(r1)] */
 *(int *)((int)pvVar2 + iVar1 * 4) = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 5);
 uVar3 = *(undefined4 *)((int)pvVar2 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar3);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_00012a2b);
 return;
 }
 /* Unresolved local var: int status@[???] */
 waitpid(__pid,(int *)&local_10,0);
 uVar4 = local_10 & 0x7f;
 if (uVar4 == 0) {
 uVar4 = local_10 >> 8 & 0xff;
 __format = &DAT_000129c5;
 }
 else {
 if ((int)(uVar4 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = &DAT_000129ea;
 }
 printf(__format,uVar4);
 return;
 }
 /* Unresolved local var: int result@[???] */
 iVar1 = dangling_pointer();
 printf(&DAT_000129b5,iVar1);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 000110cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 000110f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00011104 */

int global_array_access(int idx)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)idx < 10) {
 iVar1 = global_array[idx];
 }
 return iVar1;
}



/* Function: static_local @ 00011124 */

static int static_local_counter = 0;

int static_local(int reset)

{
 int iVar1;
 
 iVar1 = 0;
 if (reset == 0) {
 iVar1 = static_local_counter + 1;
 }
 static_local_counter = iVar1;
 return iVar1;
}



/* Function: call_static_func @ 00011154 */

int call_static_func(int x)

{
 return x << 1 | 1;
}



/* Function: access_extern_global @ 00011160 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00011178 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 00011180 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00011198 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 000111a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 000111a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 000111b0 */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 000111c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 000111d4 */

void set_global_callback(_func_int_int *f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 000111e8 */

int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr != (_func_int_int *)0x0) {
 /* WARNING: Could not recover jumptable at 0x000111fc. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*global_func_ptr)(x);
 return iVar1;
 }
 return -1;
}



/* Function: global_heap_store @ 00011204 */

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



/* Function: static_complex_init @ 00011224 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 0001122c */

int tls_access(int val)

{
 return val << 1;
}



/* Function: init_order_test @ 00011234 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 /* Unresolved local var: int external_val@[???] */
 return 0x14;
}



/* Function: test_static_global @ 0001123c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 int iVar1;
 int local_14;
 
 /* Unresolved local var: int heap_val@[???] */
 puts(&DAT_00012d3a);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n",global_counter);
 printf("STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n",static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 iVar1 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n",iVar1);
 printf("STM-L2-03 (read_const_data): %d\n",(byte)const_string[4] + 0x2a);
 printf("STM-L2-04 (access_bss_var): %d\n",0);
 printf("STM-L2-04 (access_bss_buffer): %d\n",0);
 printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 printf("STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 global_heap_ptr = &local_14;
 local_14 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



/* Function: double_value @ 00011484 */

int double_value(int x)

{
 return x << 1;
}



/* Function: memop_memset @ 0001148c */

int memop_memset(void *buf,size_t size,int fill_value)

{
 uint uVar1;
 size_t in_r3;
 
 uVar1 = 0xffffffff;
 if (buf != (void *)0x0) {
 in_r3 = size;
 }
 if (buf != (void *)0x0 && size != 0) {
 memset(buf,fill_value,in_r3);
 uVar1 = (uint)*(byte *)buf;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 000114c4 */

int memop_memcpy(void *dst,void *src,size_t n)

{
 int iVar1;
 uint unaff_r4;
 
 iVar1 = -1;
 if (dst != (void *)0x0) {
 if (src != (void *)0x0) {
 unaff_r4 = n;
 }
 if (src != (void *)0x0 && n != 0) {
 memcpy(dst,src,unaff_r4);
 iVar1 = *(int *)((int)dst + ((unaff_r4 & 0xfffffffc) - 4));
 }
 }
 return iVar1;
}



/* Function: memop_memmove @ 00011508 */

int memop_memmove(void *buf,size_t n)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if ((buf != (void *)0x0) && (1 < n)) {
 memmove((void *)((int)buf + 1),buf,n - 1);
 uVar1 = (uint)*(byte *)((int)buf + 1);
 }
 return uVar1;
}



/* Function: memop_memcmp @ 00011540 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???] */
 if (p1 == (void *)0x0) {
 return 0;
 }
 if (p2 == (void *)0x0 || n == 0) {
 return 0;
 }
 iVar1 = memcmp(p1,p2,n);
 iVar2 = 0;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}



/* Function: memop_bzero @ 00011588 */

int memop_bzero(void *buf,size_t n)

{
 if (buf != (void *)0x0) {
 memset(buf,0,n);
 return (uint)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_bcopy @ 000115b4 */

int memop_bcopy(void *src,void *dst,size_t n)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if ((src != (void *)0x0) && (dst != (void *)0x0 && n != 0)) {
 memmove(dst,src,n);
 uVar1 = (uint)*(byte *)dst;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 000115ec */

int memop_unaligned_access(char *buf)

{
 /* Unresolved local var: int value@[???] */
 if (buf != (char *)0x0) {
 return *(int *)(buf + 1);
 }
 return -1;
}



/* Function: memop_memory_barrier @ 00011618 */

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



/* Function: test_memory_op_functions @ 00011644 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 int iVar1;
 undefined4 uVar2;
 struct {
  unsigned char _0_1_;
  unsigned char _1_1_;
  unsigned char _2_1_;
  unsigned char _3_1_;
 } local_14;
 char acStack_10 [4];
 char local_c [4];
 
 /* Unresolved local var: char[11] move_buf@[???]
 Unresolved local var: int flag@[???]
 Unresolved local var: char[256] buffer@[???]
 Unresolved local var: int[5] int_dst@[???]
 Unresolved local var: int[5] int_src@[???]
 Unresolved local var: char[10] zero_buf@[???]
 Unresolved local var: char[4] bcopy_dst@[???]
 Unresolved local var: char[4] bcopy_src@[???]
 Unresolved local var: char[8] unalign_buf@[???]
 Unresolved local var: int[3] cmp_a@[???]
 Unresolved local var: int[3] cmp_b@[???] */
 puts(&DAT_00012d5e);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 local_14._0_1_ = 'H';
 local_14._1_1_ = 'e';
 local_14._2_1_ = 'l';
 local_14._3_1_ = 'l';
 acStack_10[0] = 'o';
 acStack_10[1] = 'W';
 acStack_10[2] = 'o';
 acStack_10[3] = 'r';
 local_c[0] = 'l';
 local_c[1] = 'd';
 memmove((void *)((uint)&local_14 | 1),&local_14,9);
 printf("MEMOP-L2-03: %c\n",*(unsigned int *)&local_14 >> 8 & 0xff);
 /* Unresolved local var: int result@[???] */
 iVar1 = memcmp(&DAT_00012dac,&DAT_00012db8,0xc);
 uVar2 = 0;
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 }
 if (0 < iVar1) {
 uVar2 = 1;
 }
 printf("MEMOP-L2-04: %d\n",uVar2);
 printf("MEMOP-L2-05: %d\n",0);
 printf("MEMOP-L2-06: %d\n",1);
 printf("MEMOP-L3-01: 0x%x\n",0x4030201);
 /* Unresolved local var: int local@[???] */
 __sync_synchronize();
 printf("MEMOP-L3-02: %d\n",10);
 return;
}



/* Function: main @ 00011780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 000117a0 */

extern int extern_function(int x);




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 112 */
