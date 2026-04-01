/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
#ifndef int64_t
typedef long int64_t;
#endif
#ifndef size_t
typedef unsigned long size_t;
#endif
#ifndef ssize_t
typedef long ssize_t;
#endif
#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif
#ifndef intptr_t
typedef long intptr_t;
#endif
#ifndef ptrdiff_t
typedef unsigned long ptrdiff_t;
#endif
#ifndef intmax_t
typedef long long intmax_t;
#endif
#ifndef uintmax_t
typedef unsigned long long uintmax_t;
#endif

/* Ghidra decompiler type fixes */
typedef unsigned char undefined;
typedef unsigned char byte;
typedef uint32_t undefined4;
typedef void (*code)(void);

/* Struct type definitions */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct Point {
    int x;
    int y;
} Point;

/* Function pointer type */
typedef int (*_func_int_int)(int);

/* Forward declarations */
extern int extern_function(int x);
int double_value(int x);

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <alloca.h>

/* Global variable definitions */
int global_counter = 0;
int global_array[10] = {0};
extern int extern_global_var;
static int file_scope_static = 0;
int (*global_func_ptr)(int) = NULL;
int *global_heap_ptr = NULL;
const char *const_string = "Hello World";

/* String constants */
static const char DAT_001025e9[] = "Testing stack memory operations:";
static const char DAT_00102607[] = "Testing heap memory operations:";
static const char DAT_00102625[] = "Testing static/global variables:";
static const char DAT_00102649[] = "Testing memory operations:";
static const char DAT_0010230b[] = "fork failed";
static const char DAT_001022a5[] = "%d\n";
static const char DAT_001022ca[] = "signal %d\n";
static const char DAT_00102295[] = "%d\n";

/* DAT_00102020 structure for byte increment pattern */
struct DAT_00102020_t {
    char _0_1_;
    char _1_1_;
    char _2_1_;
    char _3_1_;
    char _4_1_;
    char _5_1_;
    char _6_1_;
    char _7_1_;
    char _8_1_;
    char _9_1_;
    char _10_1_;
    char _11_1_;
    char _12_1_;
    char _13_1_;
    char _14_1_;
    char _15_1_;
};

static const struct DAT_00102020_t DAT_00102020 = {
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/3/3_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */









/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: local_vars @ 0010120c */

int local_vars(int x)

{
 /* Unresolved local var: int a@[DW_OP_reg5(RDI)]
 Unresolved local var: int c@[???]
 Unresolved local var: int b@[???] */
 return x * 2 + 10;
}



/* Function: local_array @ 00101213 */

int local_array(int n)

{
 int iVar1;
 long lVar2;
 int aiStack_28 [10];
 
 /* Unresolved local var: int[10] arr@[???] */
 iVar1 = 0;
 lVar2 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg2(RCX)] */
 aiStack_28[lVar2] = iVar1;
 lVar2 = lVar2 + 1;
 iVar1 = iVar1 + n;
 } while (lVar2 != 10);
 return aiStack_28[5];
}



/* Function: local_struct @ 0010122b */

int local_struct(int x)

{
 /* Unresolved local var: Point p@[DW_OP_reg5(RDI); DW_OP_piece: 4;
 DW_OP_breg5(RDI): 0; DW_OP_constu: 4294967295; DW_OP_and; DW_OP_lit1;
 DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4] */
 return x * 3;
}



/* Function: address_of_local @ 0010122f */

int address_of_local(int *out)

{
 /* Unresolved local var: int local@[???] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 0010123b */

int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[DW_OP_reg5(RDI)]
 Unresolved local var: int * p2@[DW_OP_reg5(RDI)] */
 return *arr * 2;
}



/* Function: large_stack_frame @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 long lVar1;
 char cVar2;
 char cVar3;
 char cVar4;
 char cVar5;
 char cVar6;
 char cVar7;
 char cVar8;
 char cVar9;
 char cVar10;
 char cVar11;
 char cVar12;
 char cVar13;
 char cVar14;
 char cVar15;
 char cVar16;
 char cVar17;
 char acStack_808 [2056];
 
 /* Unresolved local var: char[2048] large_buf@[???] */
 cVar2 = '\0';
 cVar3 = '\x01';
 cVar4 = '\x02';
 cVar5 = '\x03';
 cVar6 = '\x04';
 cVar7 = '\x05';
 cVar8 = '\x06';
 cVar9 = '\a';
 cVar10 = '\b';
 cVar11 = '\t';
 cVar12 = '\n';
 cVar13 = '\v';
 cVar14 = '\f';
 cVar15 = '\r';
 cVar16 = '\x0e';
 cVar17 = '\x0f';
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 acStack_808[lVar1] = cVar2;
 acStack_808[lVar1 + 1] = cVar3;
 acStack_808[lVar1 + 2] = cVar4;
 acStack_808[lVar1 + 3] = cVar5;
 acStack_808[lVar1 + 4] = cVar6;
 acStack_808[lVar1 + 5] = cVar7;
 acStack_808[lVar1 + 6] = cVar8;
 acStack_808[lVar1 + 7] = cVar9;
 acStack_808[lVar1 + 8] = cVar10;
 acStack_808[lVar1 + 9] = cVar11;
 acStack_808[lVar1 + 10] = cVar12;
 acStack_808[lVar1 + 0xb] = cVar13;
 acStack_808[lVar1 + 0xc] = cVar14;
 acStack_808[lVar1 + 0xd] = cVar15;
 acStack_808[lVar1 + 0xe] = cVar16;
 acStack_808[lVar1 + 0xf] = cVar17;
 lVar1 = lVar1 + 0x10;
 cVar2 = cVar2 + '\x10';
 cVar3 = cVar3 + '\x10';
 cVar4 = cVar4 + '\x10';
 cVar5 = cVar5 + '\x10';
 cVar6 = cVar6 + '\x10';
 cVar7 = cVar7 + '\x10';
 cVar8 = cVar8 + '\x10';
 cVar9 = cVar9 + '\x10';
 cVar10 = cVar10 + '\x10';
 cVar11 = cVar11 + '\x10';
 cVar12 = cVar12 + '\x10';
 cVar13 = cVar13 + '\x10';
 cVar14 = cVar14 + '\x10';
 cVar15 = cVar15 + '\x10';
 cVar16 = cVar16 + '\x10';
 cVar17 = cVar17 + '\x10';
 } while (lVar1 != 0x800);
 return (int)acStack_808[0x400];
}



/* Function: vla_stack @ 0010127f */

int vla_stack(int n)

{
 long lVar3;
 int iVar2;
 int *vla;
 
 /* Unresolved local var: unsigned long __vla_expr0@[???]
 Unresolved local var: int[718] vla@[???] */
 iVar2 = -1;
 if (0xfffffc17 < n - 0x3e9U) {
 vla = alloca(n * sizeof(int));
 /* Unresolved local var: int i@[???] */
 lVar3 = 0;
 do {
 vla[lVar3 * 2] = (int)lVar3;
 lVar3 = lVar3 + 2;
 } while ((ulong)(uint)n * 2 != lVar3);
 iVar2 = vla[n / 2];
 }
 return iVar2;
}



/* Function: alloca_usage @ 001012d5 */

int alloca_usage(int n)

{
 long lVar1;
 undefined4 *puVar2;
 
 /* Unresolved local var: int * arr@[???] */
 if (0 < n) {
 /* Unresolved local var: int i@[???] */
 lVar1 = 0;
 puVar2 = (undefined4 *)alloca(n * sizeof(int));
 do {
 *puVar2 = (int)lVar1;
 lVar1 = lVar1 + 3;
 puVar2 = puVar2 + 1;
 } while ((ulong)(uint)n * 3 != lVar1);
 return puVar2[n / 2];
 }
 return -1;
}



/* Function: stack_alias @ 00101323 */

int stack_alias(int *p1,int *p2)

{
 /* Unresolved local var: int local@[???] */
 return 0x14;
}



/* Function: test_stack_memory @ 00101329 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 long lVar1;
 char *pcVar2;
 char cVar3;
 char cVar4;
 char cVar5;
 char cVar6;
 char cVar7;
 char cVar8;
 char cVar9;
 char cVar10;
 char cVar11;
 char cVar12;
 char cVar13;
 char cVar14;
 char cVar15;
 char cVar16;
 char cVar17;
 char cVar18;
 char local_818 [20];
 uint local_804;
 char local_418;
 
 /* Unresolved local var: int[10] arr5@[???]
 Unresolved local var: int alias_val@[???]
 Unresolved local var: int out@[???] */
 pcVar2 = local_818;
 puts(&DAT_001025e9);
 lVar1 = 0;
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 do {
 /* Unresolved local var: int[10] arr@[???]
 Unresolved local var: int i@[???] */
 *(int *)(local_818 + lVar1 * 2) = (int)lVar1;
 lVar1 = lVar1 + 2;
 } while (lVar1 != 0x14);
 lVar1 = 0;
 printf("MEM-L1-02 (local_array): %d\n",(ulong)local_804);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 cVar3 = '\0';
 cVar4 = '\x01';
 cVar5 = '\x02';
 cVar6 = '\x03';
 cVar7 = '\x04';
 cVar8 = '\x05';
 cVar9 = '\x06';
 cVar10 = '\a';
 cVar11 = '\b';
 cVar12 = '\t';
 cVar13 = '\n';
 cVar14 = '\v';
 cVar15 = '\f';
 cVar16 = '\r';
 cVar17 = '\x0e';
 cVar18 = '\x0f';
 do {
 /* Unresolved local var: char[2048] large_buf@[???]
 Unresolved local var: int i@[???] */
 local_818[lVar1] = cVar3;
 local_818[lVar1 + 1] = cVar4;
 local_818[lVar1 + 2] = cVar5;
 local_818[lVar1 + 3] = cVar6;
 local_818[lVar1 + 4] = cVar7;
 local_818[lVar1 + 5] = cVar8;
 local_818[lVar1 + 6] = cVar9;
 local_818[lVar1 + 7] = cVar10;
 local_818[lVar1 + 8] = cVar11;
 local_818[lVar1 + 9] = cVar12;
 local_818[lVar1 + 10] = cVar13;
 local_818[lVar1 + 0xb] = cVar14;
 local_818[lVar1 + 0xc] = cVar15;
 local_818[lVar1 + 0xd] = cVar16;
 local_818[lVar1 + 0xe] = cVar17;
 local_818[lVar1 + 0xf] = cVar18;
 lVar1 = lVar1 + 0x10;
 cVar3 = cVar3 + DAT_00102020._0_1_;
 cVar4 = cVar4 + DAT_00102020._1_1_;
 cVar5 = cVar5 + DAT_00102020._2_1_;
 cVar6 = cVar6 + DAT_00102020._3_1_;
 cVar7 = cVar7 + DAT_00102020._4_1_;
 cVar8 = cVar8 + DAT_00102020._5_1_;
 cVar9 = cVar9 + DAT_00102020._6_1_;
 cVar10 = cVar10 + DAT_00102020._7_1_;
 cVar11 = cVar11 + DAT_00102020._8_1_;
 cVar12 = cVar12 + DAT_00102020._9_1_;
 cVar13 = cVar13 + DAT_00102020._10_1_;
 cVar14 = cVar14 + DAT_00102020._11_1_;
 cVar15 = cVar15 + DAT_00102020._12_1_;
 cVar16 = cVar16 + DAT_00102020._13_1_;
 cVar17 = cVar17 + DAT_00102020._14_1_;
 cVar18 = cVar18 + DAT_00102020._15_1_;
 } while (lVar1 != 0x800);
 lVar1 = 0;
 printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)(uint)(int)local_418);
 /* Unresolved local var: unsigned long __vla_expr0@[???]
 Unresolved local var: int[718] vla@[???] */
 do {
 /* Unresolved local var: int i@[???] */
 *(int *)(local_818 + lVar1 * 2) = (int)lVar1;
 lVar1 = lVar1 + 2;
 } while (lVar1 != 0x14);
 lVar1 = 0;
 printf("MEM-L2-02 (vla_stack): %d\n",(ulong)local_804);
 do {
 /* Unresolved local var: int * arr@[DW_OP_reg7(RSP)]
 Unresolved local var: int i@[???] */
 *(int *)pcVar2 = (int)lVar1;
 pcVar2 = (char *)((long)pcVar2 + 4);
 lVar1 = lVar1 + 3;
 } while (lVar1 != 0x1e);
 printf("MEM-L2-03 (alloca_usage): %d\n",(ulong)local_804);
 printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 00101456 */

int heap_basic(int n)

{
 void *__ptr;
 long lVar1;
 int iVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc((long)n << 2);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 lVar1 = 0;
 do {
 *(int *)((long)__ptr + lVar1 * 2) = (int)lVar1;
 lVar1 = lVar1 + 2;
 } while ((ulong)(uint)n * 2 != lVar1);
 }
 iVar2 = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_calloc @ 001014a3 */

int heap_calloc(int n)

{
 void *__ptr;
 ulong uVar1;
 int iVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = calloc((long)n,4);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 if ((0 < n) && (iVar2 = 0, n != 1)) {
 iVar2 = 0;
 uVar1 = 1;
 do {
 iVar2 = iVar2 + *(int *)((long)__ptr + uVar1 * 4);
 uVar1 = uVar1 + 1;
 } while ((uint)n != uVar1);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 001014f1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 long lVar1;
 int iVar2;
 void *__ptr;
 void *__ptr_00;
 long lVar3;
 int iVar4;
 
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int old_val@[???]
 Unresolved local var: int * new_p@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 iVar4 = -1;
 }
 else {
 lVar3 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 lVar1 = lVar3 + 1;
 *(int *)((long)__ptr + lVar3 * 4) = (int)lVar1;
 lVar3 = lVar1;
 } while (lVar1 != 5);
 iVar2 = *(int *)((long)__ptr + 8);
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 iVar4 = -2;
 __ptr_00 = __ptr;
 }
 else {
 lVar3 = 5;
 iVar4 = 0x32;
 do {
 /* Unresolved local var: int i@[DW_OP_reg2(RCX)] */
 *(int *)((long)__ptr_00 + lVar3 * 4) = iVar4;
 lVar3 = lVar3 + 1;
 iVar4 = iVar4 + 10;
 } while (lVar3 != 10);
 iVar4 = -3;
 if (*(int *)((long)__ptr_00 + 8) == iVar2) {
 iVar4 = *(int *)((long)__ptr_00 + 0x14);
 }
 }
 free(__ptr_00);
 }
 return iVar4;
}



/* Function: heap_array @ 00101576 */

int heap_array(int n)

{
 undefined4 *__ptr;
 long lVar1;
 int iVar2;
 undefined4 *puVar3;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc((long)n << 2);
 if (__ptr == (undefined4 *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 lVar1 = 0;
 puVar3 = __ptr;
 do {
 *puVar3 = (int)lVar1;
 lVar1 = lVar1 + 3;
 puVar3 = puVar3 + 1;
 } while ((ulong)(uint)n * 3 != lVar1);
 }
 iVar2 = __ptr[n / 2];
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_struct @ 001015ca */

int heap_struct(int x)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: Point * p@[???] */
 return x * 3;
}



/* Function: heap_nested @ 001015ce */

int heap_nested(Node **head)

{
 int iVar1;
 Node *__ptr;
 Node *pNVar2;
 
 __ptr = malloc(0x10);
 *head = __ptr;
 if (__ptr == (Node *)0x0) {
 iVar1 = -1;
 }
 else {
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



/* Function: linked_list_heap @ 00101631 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 uint uVar3;
 int iVar4;
 int *piVar5;
 int *__ptr;
 int *piVar6;
 bool bVar7;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: Node * temp@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???]
 Unresolved local var: Node * new_node@[???] */
 piVar1 = malloc(0x10);
 iVar4 = 0;
 if (piVar1 == (int *)0x0) {
 bVar7 = true;
 __ptr = (int *)0x0;
 }
 else {
 uVar3 = 0;
 piVar5 = (int *)0x0;
 piVar6 = (int *)0x0;
 do {
 piVar2 = piVar1;
 *piVar2 = iVar4;
 piVar2[2] = 0;
 piVar2[3] = 0;
 __ptr = piVar2;
 if (piVar5 != (int *)0x0) {
 *(int **)(piVar6 + 2) = piVar2;
 __ptr = piVar5;
 }
 if (uVar3 == 0xfffffffc) {
 bVar7 = false;
 goto LAB_001016ba;
 }
 piVar1 = malloc(0x10);
 uVar3 = uVar3 - 1;
 iVar4 = iVar4 + 10;
 piVar5 = __ptr;
 piVar6 = piVar2;
 } while (piVar1 != (int *)0x0);
 bVar7 = ~uVar3 < 4;
 }
 while (__ptr != (int *)0x0) {
 /* Unresolved local var: Node * temp@[DW_OP_reg14(R14)] */
 piVar1 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar1;
 }
 __ptr = (int *)0x0;
LAB_001016ba:
 iVar4 = -1;
 if ((!bVar7) && (iVar4 = 0, piVar1 = __ptr, __ptr != (int *)0x0)) {
 do {
 iVar4 = iVar4 + *piVar1;
 piVar5 = piVar1 + 2;
 piVar1 = *(int **)piVar5;
 } while (*(int **)piVar5 != (int *)0x0);
 while (__ptr != (int *)0x0) {
 /* Unresolved local var: Node * temp@[DW_OP_reg14(R14)] */
 piVar1 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar1;
 }
 }
 return iVar4;
}



/* Function: create_tree_node @ 001016fe */

TreeNode * create_tree_node(int data)

{
 TreeNode *pTVar1;
 
 /* Unresolved local var: TreeNode * node@[???] */
 pTVar1 = malloc(0x18);
 if (pTVar1 != (TreeNode *)0x0) {
 pTVar1->data = data;
 pTVar1->left = (TreeNode *)0x0;
 pTVar1->right = (TreeNode *)0x0;
 }
 return pTVar1;
}



/* Function: tree_heap_traversal @ 0010171b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 /* Unresolved local var: int sum@[???]
 Unresolved local var: TreeNode * root@[???] */
 return 0x3c;
}



/* Function: memory_leak @ 00101721 */

int memory_leak(int n)

{
 int iVar1;
 void *pvVar2;
 ulong uVar3;
 
 /* Unresolved local var: int * leak@[???] */
 pvVar2 = malloc((long)n << 2);
 if (pvVar2 == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar3 = 0;
 do {
 *(int *)((long)pvVar2 + uVar3 * 4) = (int)uVar3;
 uVar3 = uVar3 + 1;
 } while ((uint)n != uVar3);
 }
 iVar1 = *(int *)((long)pvVar2 + (long)(n / 2) * 4);
 }
 return iVar1;
}



/* Function: dangling_pointer @ 00101760 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 int iVar1;
 int *__ptr;
 
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



/* Function: double_free @ 00101799 */

int double_free(int *p)

{
 if (p != (int *)0x0) {
 return *p;
 }
 return -2;
}



/* Function: heap_overflow @ 001017a7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 int *__ptr;
 long lVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 lVar1 = 0;
 piVar2 = __ptr;
 do {
 /* Unresolved local var: int i@[???] */
 *piVar2 = (int)lVar1;
 lVar1 = lVar1 + 100;
 piVar2 = piVar2 + 1;
 } while (lVar1 != 0x44c);
 iVar3 = *__ptr;
 free(__ptr);
 }
 return iVar3;
}



/* Function: test_heap_memory @ 001017e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 Node *__ptr;
 uint uVar1;
 __pid_t __pid;
 void *pvVar2;
 long lVar3;
 ulong uVar4;
 char *__format;
 uint local_14;
 Node *local_10;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: pid_t pid@[???] */
 puts(&DAT_00102607);
 uVar1 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",(ulong)uVar1);
 uVar1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n",(ulong)uVar1);
 uVar1 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n",(ulong)uVar1);
 uVar1 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n",(ulong)uVar1);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 local_10 = (Node *)0x0;
 uVar1 = heap_nested(&local_10);
 printf("HEAP-L2-06 (heap_nested): %d\n",(ulong)uVar1);
 __ptr = local_10;
 if (local_10 != (Node *)0x0) {
 free(local_10->next);
 free(__ptr);
 }
 uVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar1);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
 /* Unresolved local var: int * leak@[???] */
 pvVar2 = malloc(0x14);
 if (pvVar2 == (void *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 lVar3 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg2(RCX)] */
 *(int *)((long)pvVar2 + lVar3 * 4) = (int)lVar3;
 lVar3 = lVar3 + 1;
 } while (lVar3 != 5);
 uVar4 = (ulong)*(uint *)((long)pvVar2 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar4);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_0010230b);
 return;
 }
 /* Unresolved local var: int status@[???] */
 waitpid(__pid,(int *)&local_14,0);
 uVar1 = local_14 & 0x7f;
 if (uVar1 == 0) {
 uVar4 = (ulong)(byte)(local_14 >> 8);
 __format = &DAT_001022a5;
 }
 else {
 if ((int)(uVar1 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = &DAT_001022ca;
 uVar4 = (ulong)uVar1;
 }
 printf(__format,uVar4);
 return;
 }
 /* Unresolved local var: int result@[???] */
 uVar1 = dangling_pointer();
 printf(&DAT_00102295,(ulong)uVar1);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 0010199a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 001019a9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter * 2;
}



/* Function: global_array_access @ 001019b2 */

int global_array_access(int idx)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)idx < 10) {
 iVar1 = global_array[(uint)idx];
 }
 return iVar1;
}



/* Function: static_local @ 001019c9 */

int static_local(int reset)

{
 static int counter = 0;
 int iVar1;
 
 iVar1 = 0;
 if (reset == 0) {
 iVar1 = counter + 1;
 }
 counter = iVar1;
 return iVar1;
}



/* Function: call_static_func @ 001019df */

int call_static_func(int x)

{
 return x * 2 + 1;
}



/* Function: access_extern_global @ 001019e5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 001019f2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 001019fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101a0b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 00101a0e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 00101a11 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 00101a17 */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 00101a1e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00101a25 */

void set_global_callback(_func_int_int *f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00101a2d */

int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr != (_func_int_int *)0x0) {
 /* WARNING: Could not recover jumptable at 0x00101a39. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*global_func_ptr)(x);
 return iVar1;
 }
 return -1;
}



/* Function: global_heap_store @ 00101a41 */

int global_heap_store(int *p)

{
 global_heap_ptr = p;
 if (p != (int *)0x0) {
 return *p;
 }
 return -1;
}



/* Function: static_complex_init @ 00101a56 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00101a5c */

int tls_access(int val)

{
 return val * 2;
}



/* Function: init_order_test @ 00101a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 /* Unresolved local var: int external_val@[???] */
 return 0x14;
}



/* Function: test_static_global @ 00101a66 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 uint uVar1;
 int local_c;
 
 /* Unresolved local var: int heap_val@[???] */
 puts(&DAT_00102625);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n", global_counter);
 printf("STM-L1-01 (global_var_read): %d\n",(ulong)(uint)(global_counter * 2));
 printf("STM-L1-02 (global_array_access): %d\n",5);
 printf("STM-L1-03 (static_local): %d\n",1);
 printf("STM-L1-03 (static_local): %d\n", 2);
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",(ulong)(extern_global_var + 100));
 uVar1 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n",(ulong)uVar1);
 printf("STM-L2-03 (read_const_data): %d\n",(ulong)((int)const_string[4] + 0x2a));
 printf("STM-L2-04 (access_bss_var): %d\n",0);
 printf("STM-L2-04 (access_bss_buffer): %d\n",0);
 printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 printf("STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 global_heap_ptr = &local_c;
 local_c = 100;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



/* Function: double_value @ 00101c2c */

int double_value(int x)

{
 return x * 2;
}



/* Function: memop_memset @ 00101c30 */

int memop_memset(void *buf,size_t size,int fill_value)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if ((buf != (void *)0x0) && (size != 0)) {
 memset(buf,fill_value,size);
 uVar1 = (uint)*(byte *)buf;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 00101c55 */

int memop_memcpy(void *dst,void *src,size_t n)

{
 int iVar1;
 
 iVar1 = -1;
 if (((dst != (void *)0x0) && (src != (void *)0x0)) && (n != 0)) {
 memcpy(dst,src,n);
 iVar1 = *(int *)(((n & 0xfffffffffffffffc) - 4) + (long)dst);
 }
 return iVar1;
}



/* Function: memop_memmove @ 00101c8c */

int memop_memmove(void *buf,size_t n)

{
 int iVar1;
 
 iVar1 = -1;
 if ((buf != (void *)0x0) && (1 < n)) {
 memmove((void *)((long)buf + 1),buf,n - 1);
 iVar1 = (int)*(char *)((long)buf + 1);
 }
 return iVar1;
}



/* Function: memop_memcmp @ 00101cb7 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???] */
 iVar2 = 0;
 if (((p1 != (void *)0x0) && (p2 != (void *)0x0)) && (n != 0)) {
 iVar1 = memcmp(p1,p2,n);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 }
 return iVar2;
}



/* Function: memop_bzero @ 00101ce6 */

int memop_bzero(void *buf,size_t n)

{
 if (buf != (void *)0x0) {
 memset(buf,0,n);
 return (int)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_bcopy @ 00101d04 */

int memop_bcopy(void *src,void *dst,size_t n)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if (((src != (void *)0x0) && (dst != (void *)0x0)) && (n != 0)) {
 memmove(dst,src,n);
 uVar1 = (uint)*(byte *)dst;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 00101d2c */

int memop_unaligned_access(char *buf)

{
 /* Unresolved local var: int value@[???] */
 if (buf != (char *)0x0) {
 return *(int *)(buf + 1);
 }
 return -1;
}



/* Function: memop_memory_barrier @ 00101d3b */

int memop_memory_barrier(int *flag)

{
 /* Unresolved local var: int local@[???] */
 if (flag != (int *)0x0) {
 return *flag + *flag;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 00101d4e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
 /* Unresolved local var: char[11] move_buf@[???]
 Unresolved local var: int flag@[???]
 Unresolved local var: int[5] int_src@[???]
 Unresolved local var: int[5] int_dst@[???]
 Unresolved local var: char[256] buffer@[???]
 Unresolved local var: char[10] zero_buf@[???]
 Unresolved local var: char[4] bcopy_src@[???]
 Unresolved local var: char[4] bcopy_dst@[???]
 Unresolved local var: char[8] unalign_buf@[???]
 Unresolved local var: int[3] cmp_a@[???]
 Unresolved local var: int[3] cmp_b@[???] */
 puts(&DAT_00102649);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 printf("MEMOP-L2-03: %c\n",0x48);
 printf("MEMOP-L2-04: %d\n",0xffffffff);
 printf("MEMOP-L2-05: %d\n",0);
 printf("MEMOP-L2-06: %d\n",1);
 printf("MEMOP-L3-01: 0x%x\n",0x4030201);
 /* Unresolved local var: int local@[???] */
 printf("MEMOP-L3-02: %d\n",10);
 return;
}



/* Function: main @ 00101e25 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}








/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 63 */
