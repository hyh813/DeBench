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

/* Additional type definitions */
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned char bool;
typedef int __pid_t;
typedef int (*_func_int_int)(int);
typedef void (*code)(void);

/* Standard library function declarations */
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern void *malloc(size_t size);
extern void free(void *ptr);
extern void *calloc(size_t nmemb, size_t size);
extern void *realloc(void *ptr, size_t size);
extern void *memset(void *s, int c, size_t n);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *memmove(void *dest, const void *src, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern __pid_t fork(void);
extern __pid_t waitpid(__pid_t pid, int *status, int options);
extern void exit(int status);
extern void perror(const char *s);
extern void __sync_synchronize(void);

/* Global variable declarations */
static int global_counter = 0;
static int file_scope_static = 0;
static int extern_global_var = 0;
static int *global_heap_ptr = 0;
static _func_int_int global_func_ptr = (_func_int_int)0x0;
static char const_string[] = "Hello World";
static int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static int static_local_counter = 0;

/* Forward declarations */
static int double_value(int x);
static int extern_function(int x);

/* Implementation of SUB_ffff0fc0 - compare and swap operation */
static int SUB_ffff0fc0_impl(int old_val, int new_val, int *ptr)
{
 if (*ptr == old_val) {
  *ptr = new_val;
  return 0;
 }
 return 1;
}

/* Implementation of SUB_ffff0fa0 - memory barrier */
static void SUB_ffff0fa0_impl(void)
{
 __sync_synchronize();
}

/* Initialize function pointers */
static int (*SUB_ffff0fc0)(int, int, int *) = SUB_ffff0fc0_impl;
static void (*SUB_ffff0fa0)(void) = SUB_ffff0fa0_impl;

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

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/3/3_clang_O1_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* External data declarations */
char DAT_00012f62[] = "=== Stack Memory Tests ===";
char DAT_00012f80[] = "=== Heap Memory Tests ===";
char DAT_00012f9e[] = "=== Static/Global Tests ===";
char DAT_00012fc2[] = "=== Memory Op Tests ===";
char DAT_00013010[] = "test_string_a";
char DAT_0001301c[] = "test_string_b";
char DAT_00012c8f[] = "fork failed";
char DAT_00012c29[] = "exit status: %d\n";
char DAT_00012c4e[] = "signal: %d\n";
char DAT_00012c19[] = "dangling value: %d\n";

/* Function: local_vars @ 000107bc */

static int local_vars(int x)

{
 /* Unresolved local var: int a@[DW_OP_reg0(r0)]
 Unresolved local var: int c@[???]
 Unresolved local var: int b@[???] */
 return x * 2 + 10;
}



/* Function: local_array @ 000107c8 */

static int local_array(int n)

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
 iVar1 = iVar1 + n;
 iVar2 = iVar2 + -1;
 } while (iVar2 != -10);
 return local_28[5];
}



/* Function: local_struct @ 000107f8 */

static int local_struct(int x)

{
 /* Unresolved local var: Point p@[DW_OP_reg0(r0); DW_OP_piece: 4;
 DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4]
 */
 return x * 3;
}



/* Function: address_of_local @ 00010800 */

static int address_of_local(int *out)

{
 /* Unresolved local var: int local@[???] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00010810 */

static int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[DW_OP_reg0(r0)]
 Unresolved local var: int * p2@[DW_OP_reg0(r0)] */
 return *arr << 1;
}



/* Function: large_stack_frame @ 0001081c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int large_stack_frame(void)

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

static int vla_stack(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iStack_10;
 
 /* Unresolved local var: uint __vla_expr0@[???]
 Unresolved local var: int[703] vla@[???] */
 iVar1 = -1;
 if (0xfffffc17 < n - 0x3e9U) {
 iVar1 = -0x10 - (n * 4 + 7U & 0xfffffff8);
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar3 = 0;
 iVar2 = n;
 do {
 *(int *)((int)&iStack_10 + iVar3 * 2 + iVar1 + 0x10) = iVar3;
 iVar3 = iVar3 + 2;
 iVar2 = iVar2 + -1;
 } while (iVar2 != 0);
 }
 iVar1 = *(int *)((int)&iStack_10 + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 return iVar1;
}



/* Function: alloca_usage @ 000108c8 */

static int alloca_usage(int n)

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
 iVar2 = iVar2 + 3;
 iVar3 = iVar3 + 1;
 } while (n != iVar3);
 return *(int *)((int)&local_10 + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
 }
 return -1;
}



/* Function: stack_alias @ 0001092c */

static int stack_alias(int *p1,int *p2)

{
 /* Unresolved local var: int local@[???] */
 return 0x14;
}



/* Function: test_stack_memory @ 00010934 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static void test_stack_memory(void)

{
 int iVar1;
 int *piVar2;
 int local_810 [256];
 byte local_410;
 
 /* Unresolved local var: int[10] arr5@[???]
 Unresolved local var: int alias_val@[???]
 Unresolved local var: int out@[???] */
 puts(&DAT_00012f62);
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
 Unresolved local var: int[703] vla@[???] */
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



/* Function: heap_basic @ 00010a68 */

static int heap_basic(int n)

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



/* Function: heap_calloc @ 00010ac8 */

static int heap_calloc(int n)

{
 int *__ptr;
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = calloc(n,4);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 piVar1 = __ptr;
 if (0 < n) {
 do {
 iVar2 = *piVar1 + iVar2;
 n = n + -1;
 piVar1 = piVar1 + 1;
 } while (n != 0);
 }
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_realloc @ 00010b18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int heap_realloc(void)

{
 void *__ptr;
 void *__ptr_00;
 int iVar1;
 int iVar2;
 int iVar3;
 
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
 iVar2 = 5;
 iVar3 = 0x32;
 do {
 /* Unresolved local var: int i@[DW_OP_reg1(r1)] */
 *(int *)((int)__ptr_00 + iVar2 * 4) = iVar3;
 iVar3 = iVar3 + 10;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 10);
 iVar2 = -3;
 if (*(int *)((int)__ptr_00 + 8) == iVar1) {
 iVar2 = *(int *)((int)__ptr_00 + 0x14);
 }
 }
 free(__ptr_00);
 }
 return iVar2;
}



/* Function: heap_array @ 00010bb4 */

static int heap_array(int n)

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



/* Function: heap_struct @ 00010c18 */

static int heap_struct(int x)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: Point * p@[???] */
 return x * 3;
}



/* Function: heap_nested @ 00010c20 */

static int heap_nested(Node **head)

{
 Node *pNVar1;
 
 pNVar1 = malloc(8);
 *head = pNVar1;
 if (pNVar1 == (Node *)0x0) {
 return -1;
 }
 pNVar1->data = 10;
 pNVar1 = malloc(8);
 (*head)->next = pNVar1;
 pNVar1 = (*head)->next;
 if (pNVar1 == (Node *)0x0) {
 free(*head);
 return -2;
 }
 pNVar1->data = 0x14;
 pNVar1->next = (Node *)0x0;
 return 0;
}



/* Function: linked_list_heap @ 00010c94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int linked_list_heap(void)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int *__ptr;
 uint uVar5;
 bool bVar6 = 0;
 
 /* Unresolved local var: Node * current@[???]
 Unresolved local var: Node * head@[???]
 Unresolved local var: Node * temp@[???]
 Unresolved local var: int sum@[???] */
 bVar6 = 1;
 __ptr = (int *)0x0;
 uVar5 = 0;
 piVar3 = (int *)0x0;
 do {
 /* Unresolved local var: Node * new_node@[???] */
 piVar2 = malloc(8);
 if (piVar2 == (int *)0x0) goto joined_r0x00010d18;
 *piVar2 = uVar5 * 10;
 piVar2[1] = 0;
 piVar1 = piVar2;
 if (__ptr != (int *)0x0) {
 piVar3[1] = (int)piVar2;
 piVar1 = __ptr;
 }
 __ptr = piVar1;
 if (piVar2 == (int *)0x0) break;
 /* Unresolved local var: int i@[???] */
 bVar6 = uVar5 < 4;
 uVar5 = uVar5 + 1;
 piVar3 = piVar2;
 } while (uVar5 != 5);
LAB_00010d40:
 iVar4 = -1;
 if (!bVar6) {
 iVar4 = 0;
 for (piVar3 = __ptr; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
 iVar4 = *piVar3 + iVar4;
 }
 while (__ptr != (int *)0x0) {
 /* Unresolved local var: Node * temp@[DW_OP_reg5(r5)] */
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 }
 }
 return iVar4;
joined_r0x00010d18:
 while (__ptr != (int *)0x0) {
 /* Unresolved local var: Node * temp@[DW_OP_reg5(r5)] */
 piVar3 = (int *)__ptr[1];
 free(__ptr);
 __ptr = piVar3;
 }
 __ptr = (int *)0x0;
 goto LAB_00010d40;
}



/* Function: create_tree_node @ 00010d9c */

static TreeNode * create_tree_node(int data)

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



/* Function: tree_heap_traversal @ 00010dc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int tree_heap_traversal(void)

{
 int *__ptr;
 int *__ptr_00;
 int *__ptr_01;
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: TreeNode * root@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: TreeNode * node@[???] */
 __ptr = malloc(0xc);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 *__ptr = 10;
 __ptr[1] = 0;
 __ptr[2] = 0;
 /* Unresolved local var: TreeNode * node@[???] */
 __ptr_00 = malloc(0xc);
 if (__ptr_00 != (int *)0x0) {
 *__ptr_00 = 0x14;
 __ptr_00[1] = 0;
 __ptr_00[2] = 0;
 }
 __ptr[1] = (int)__ptr_00;
 /* Unresolved local var: TreeNode * node@[???] */
 __ptr_01 = malloc(0xc);
 if (__ptr_01 != (int *)0x0) {
 *__ptr_01 = 0x1e;
 __ptr_01[1] = 0;
 __ptr_01[2] = 0;
 }
 __ptr[2] = (int)__ptr_01;
 if (__ptr_00 == (int *)0x0 || __ptr_01 == (int *)0x0) {
 if (__ptr_00 != (int *)0x0) {
 free(__ptr_00);
 }
 iVar1 = -2;
 if (__ptr_01 == (int *)0x0) goto LAB_00010e94;
 }
 else {
 iVar1 = *__ptr_01;
 iVar3 = *__ptr_00;
 iVar2 = *__ptr;
 free(__ptr_00);
 iVar1 = iVar3 + iVar2 + iVar1;
 __ptr_01 = (int *)__ptr[2];
 }
 free(__ptr_01);
LAB_00010e94:
 free(__ptr);
 return iVar1;
}



/* Function: memory_leak @ 00010ea8 */

static int memory_leak(int n)

{
 void *pvVar1;
 int iVar2;
 
 /* Unresolved local var: int * leak@[???] */
 pvVar1 = malloc(n << 2);
 if (pvVar1 != (void *)0x0) {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 do {
 *(int *)((int)pvVar1 + iVar2 * 4) = iVar2;
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 }
 return *(int *)((int)pvVar1 + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU));
 }
 return -1;
}



/* Function: dangling_pointer @ 00010efc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int dangling_pointer(void)

{
 int *__ptr;
 
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int value@[???]
 Unresolved local var: int dangerous@[???] */
 __ptr = malloc(4);
 if (__ptr != (int *)0x0) {
 *__ptr = 0x2a;
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 return *__ptr;
 }
 return -1;
}



/* Function: double_free @ 00010f4c */

static int double_free(int *p)

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



/* Function: heap_overflow @ 00010f5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int heap_overflow(void)

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
 iVar1 = iVar1 + 100;
 iVar2 = iVar2 + -1;
 } while (iVar2 != -0xb);
 iVar1 = *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: test_heap_memory @ 00010fa8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static void test_heap_memory(void)

{
 void *pvVar1;
 void *__ptr;
 undefined4 *__ptr_00;
 undefined4 *puVar2;
 __pid_t __pid;
 char *__format;
 int iVar3;
 uint uVar4;
 int iVar5;
 int iVar6;
 undefined4 uVar7 = 0;
 undefined4 uVar8 = 0;
 uint local_1c;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: pid_t pid@[???] */
 puts(&DAT_00012f80);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 pvVar1 = malloc(0x28);
 iVar6 = -1;
 uVar7 = 0xffffffff;
 if (pvVar1 != (void *)0x0) {
 iVar3 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 *(int *)((int)pvVar1 + iVar3 * 2) = iVar3;
 iVar3 = iVar3 + 2;
 } while (iVar3 != 0x14);
 uVar7 = *(undefined4 *)((int)pvVar1 + 0x14);
 free(pvVar1);
 }
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar7);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 pvVar1 = calloc(5,4);
 if (pvVar1 != (void *)0x0) {
 iVar3 = 0;
 iVar6 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar6 = *(int *)((int)pvVar1 + iVar3 * -4) + iVar6;
 iVar3 = iVar3 + -1;
 } while (iVar3 != -5);
 free(pvVar1);
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n",iVar6);
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int old_val@[???]
 Unresolved local var: int * new_p@[???] */
 pvVar1 = malloc(0x14);
 uVar7 = 0xffffffff;
 uVar8 = 0xffffffff;
 if (pvVar1 != (void *)0x0) {
 iVar6 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar3 = iVar6 + 1;
 *(int *)((int)pvVar1 + iVar6 * 4) = iVar3;
 iVar6 = iVar3;
 } while (iVar3 != 5);
 iVar6 = *(int *)((int)pvVar1 + 8);
 __ptr = realloc(pvVar1,0x28);
 if (__ptr == (void *)0x0) {
 uVar8 = 0xfffffffe;
 __ptr = pvVar1;
 }
 else {
 iVar3 = 5;
 iVar5 = 0x32;
 do {
 /* Unresolved local var: int i@[DW_OP_reg1(r1)] */
 *(int *)((int)__ptr + iVar3 * 4) = iVar5;
 iVar5 = iVar5 + 10;
 iVar3 = iVar3 + 1;
 } while (iVar3 != 10);
 uVar8 = 0xfffffffd;
 if (*(int *)((int)__ptr + 8) == iVar6) {
 uVar8 = *(undefined4 *)((int)__ptr + 0x14);
 }
 }
 free(__ptr);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar8);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 pvVar1 = malloc(0x28);
 if (pvVar1 != (void *)0x0) {
 iVar6 = 0;
 iVar3 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 *(int *)((int)pvVar1 + iVar3 * -4) = iVar6;
 iVar6 = iVar6 + 3;
 iVar3 = iVar3 + -1;
 } while (iVar3 != -10);
 uVar7 = *(undefined4 *)((int)pvVar1 + 0x14);
 free(pvVar1);
 }
 printf("HEAP-L2-04 (heap_array): %d\n",uVar7);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 __ptr_00 = malloc(8);
 if (__ptr_00 == (undefined4 *)0x0) {
 uVar7 = 0xffffffff;
 }
 else {
 *__ptr_00 = 10;
 puVar2 = malloc(8);
 __ptr_00[1] = puVar2;
 if (puVar2 == (undefined4 *)0x0) {
 free(__ptr_00);
 uVar7 = 0xfffffffe;
 }
 else {
 uVar7 = 0;
 *puVar2 = 0x14;
 puVar2[1] = 0;
 }
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar7);
 if (__ptr_00 != (undefined4 *)0x0) {
 free((void *)__ptr_00[1]);
 free(__ptr_00);
 }
 iVar6 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",iVar6);
 iVar6 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",iVar6);
 /* Unresolved local var: int * leak@[???] */
 pvVar1 = malloc(0x14);
 if (pvVar1 == (void *)0x0) {
 uVar7 = 0xffffffff;
 }
 else {
 iVar6 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg1(r1)] */
 *(int *)((int)pvVar1 + iVar6 * 4) = iVar6;
 iVar6 = iVar6 + 1;
 } while (iVar6 != 5);
 uVar7 = *(undefined4 *)((int)pvVar1 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar7);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_00012c8f);
 }
 else {
 /* Unresolved local var: int status@[???] */
 waitpid(__pid,(int *)&local_1c,0);
 uVar4 = local_1c & 0x7f;
 if (uVar4 == 0) {
 uVar4 = local_1c >> 8 & 0xff;
 __format = &DAT_00012c29;
 }
 else {
 if ((int)(uVar4 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = &DAT_00012c4e;
 }
 printf(__format,uVar4);
 }
 return;
 }
 /* Unresolved local var: int result@[???] */
 iVar6 = dangling_pointer();
 printf(&DAT_00012c19,iVar6);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 000112f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00011314 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00011328 */

static int global_array_access(int idx)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)idx < 10) {
 iVar1 = global_array[idx];
 }
 return iVar1;
}



/* Function: static_local @ 00011348 */

static int static_local(int reset)

{
 int iVar1;
 
 iVar1 = 0;
 if (reset == 0) {
 iVar1 = static_local_counter + 1;
 }
 static_local_counter = iVar1;
 return iVar1;
}



/* Function: call_static_func @ 00011378 */

static int call_static_func(int x)

{
 return x << 1 | 1;
}



/* Function: access_extern_global @ 00011384 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 0001139c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 000113b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 000113c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 000113d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 000113d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 000113e0 */

static void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 000113f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00011404 */

static void set_global_callback(_func_int_int f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00011418 */

static int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr != (_func_int_int)0x0) {
 iVar1 = global_func_ptr(x);
 return iVar1;
 }
 return -1;
}



/* Function: global_heap_store @ 00011448 */

static int global_heap_store(int *p)

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



/* Function: static_complex_init @ 00011468 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00011470 */

static int tls_access(int val)

{
 return val << 1;
}



/* Function: init_order_test @ 00011478 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int init_order_test(void)

{
 /* Unresolved local var: int external_val@[???] */
 return 0x14;
}



/* Function: test_static_global @ 00011480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static void test_static_global(void)

{
 int iVar1;
 int local_14;
 
 /* Unresolved local var: int heap_val@[???] */
 puts(&DAT_00012f9e);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n");
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



/* Function: double_value @ 000116c8 */

static int double_value(int x)

{
 return x << 1;
}



/* Function: memop_memset @ 000116d0 */

static int memop_memset(void *buf,size_t size,int fill_value)

{
 size_t in_r3;
 
 if (buf != (void *)0x0) {
 in_r3 = size;
 }
 if (buf != (void *)0x0 && size != 0) {
 memset(buf,fill_value,in_r3);
 return (uint)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_memcpy @ 00011710 */

static int memop_memcpy(void *dst,void *src,size_t n)

{
 uint unaff_r4;
 
 if (dst != (void *)0x0) {
 if (src != (void *)0x0) {
 unaff_r4 = n;
 }
 if (src != (void *)0x0 && n != 0) {
 memcpy(dst,src,unaff_r4);
 return *(int *)((int)dst + ((unaff_r4 & 0xfffffffc) - 4));
 }
 }
 return -1;
}



/* Function: memop_memmove @ 0001175c */

static int memop_memmove(void *buf,size_t n)

{
 uint uVar1;
 
 uVar1 = 0xffffffff;
 if ((buf != (void *)0x0) && (1 < n)) {
 memmove((void *)((int)buf + 1),buf,n - 1);
 uVar1 = (uint)*(byte *)((int)buf + 1);
 }
 return uVar1;
}



/* Function: memop_memcmp @ 00011794 */

static int memop_memcmp(void *p1,void *p2,size_t n)

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



/* Function: memop_bzero @ 000117dc */

static int memop_bzero(void *buf,size_t n)

{
 if (buf != (void *)0x0) {
 memset(buf,0,n);
 return (uint)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_bcopy @ 00011808 */

static int memop_bcopy(void *src,void *dst,size_t n)

{
 if ((src != (void *)0x0) && (dst != (void *)0x0 && n != 0)) {
 memmove(dst,src,n);
 return (uint)*(byte *)dst;
 }
 return -1;
}



/* Function: memop_unaligned_access @ 00011848 */

static int memop_unaligned_access(char *buf)

{
 /* Unresolved local var: int value@[???] */
 if (buf != (char *)0x0) {
 return *(int *)(buf + 1);
 }
 return -1;
}



/* Function: memop_memory_barrier @ 00011874 */

static int memop_memory_barrier(int *flag)

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



/* Function: test_memory_op_functions @ 000118a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static void test_memory_op_functions(void)

{
 int iVar1;
 undefined4 uVar2;
 uint local_14 [2];
 undefined2 local_c;
 
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
 puts(&DAT_00012fc2);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 local_c = 0x646c;
 local_14[1] = 0x726f576f;
 local_14[0] = 0x6c6c6548;
 memmove((void *)((uint)local_14 | 1),local_14,9);
 printf("MEMOP-L2-03: %c\n",local_14[0] >> 8 & 0xff);
 /* Unresolved local var: int result@[???] */
 iVar1 = memcmp(&DAT_00013010,&DAT_0001301c,0xc);
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



/* Function: main @ 000119e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 00011a04 */

static int extern_function(int x)

{
 return x * 3;
}



/* Function: my_sync_fetch_and_add_4 @ 00011a0c */

static int my_sync_fetch_and_add_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 + param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: my_sync_fetch_and_sub_4 @ 00011a44 */

static int my_sync_fetch_and_sub_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 - param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: my_sync_fetch_and_or_4 @ 00011a7c */

static uint my_sync_fetch_and_or_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 | param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_fetch_and_and_4 @ 00011ab4 */

static uint my_sync_fetch_and_and_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 & param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_fetch_and_xor_4 @ 00011aec */

static uint my_sync_fetch_and_xor_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 ^ param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_fetch_and_nand_4 @ 00011b24 */

static uint my_sync_fetch_and_nand_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,~(uVar2 & param_2),param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_fetch_and_add_2 @ 00011b60 */

static int my_sync_fetch_and_add_2(uint param_1,int param_2)

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



/* Function: my_sync_fetch_and_sub_2 @ 00011bc0 */

static int my_sync_fetch_and_sub_2(uint param_1,int param_2)

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



/* Function: my_sync_fetch_and_or_2 @ 00011c20 */

static int my_sync_fetch_and_or_2(uint param_1,uint param_2)

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



/* Function: my_sync_fetch_and_and_2 @ 00011c80 */

static int my_sync_fetch_and_and_2(uint param_1,uint param_2)

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



/* Function: my_sync_fetch_and_xor_2 @ 00011ce0 */

static int my_sync_fetch_and_xor_2(uint param_1,uint param_2)

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



/* Function: my_sync_fetch_and_nand_2 @ 00011d40 */

static int my_sync_fetch_and_nand_2(uint param_1,uint param_2)

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



/* Function: my_sync_fetch_and_add_1 @ 00011da4 */

static int my_sync_fetch_and_add_1(uint param_1,int param_2)

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



/* Function: my_sync_fetch_and_sub_1 @ 00011e00 */

static int my_sync_fetch_and_sub_1(uint param_1,int param_2)

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



/* Function: my_sync_fetch_and_or_1 @ 00011e5c */

static int my_sync_fetch_and_or_1(uint param_1,uint param_2)

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



/* Function: my_sync_fetch_and_and_1 @ 00011eb8 */

static int my_sync_fetch_and_and_1(uint param_1,uint param_2)

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



/* Function: my_sync_fetch_and_xor_1 @ 00011f14 */

static int my_sync_fetch_and_xor_1(uint param_1,uint param_2)

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



/* Function: my_sync_fetch_and_nand_1 @ 00011f70 */

static int my_sync_fetch_and_nand_1(uint param_1,uint param_2)

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



/* Function: my_sync_add_and_fetch_4 @ 00011fd0 */

static int my_sync_add_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: my_sync_sub_and_fetch_4 @ 00012008 */

static int my_sync_sub_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: my_sync_or_and_fetch_4 @ 00012040 */

static uint my_sync_or_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_and_and_fetch_4 @ 00012078 */

static uint my_sync_and_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_xor_and_fetch_4 @ 000120b0 */

static uint my_sync_xor_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_nand_and_fetch_4 @ 000120e8 */

static uint my_sync_nand_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_add_and_fetch_2 @ 00012124 */

static int my_sync_add_and_fetch_2(uint param_1,int param_2)

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



/* Function: my_sync_sub_and_fetch_2 @ 0001218c */

static int my_sync_sub_and_fetch_2(uint param_1,int param_2)

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



/* Function: my_sync_or_and_fetch_2 @ 000121f4 */

static int my_sync_or_and_fetch_2(uint param_1,uint param_2)

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



/* Function: my_sync_and_and_fetch_2 @ 0001225c */

static int my_sync_and_and_fetch_2(uint param_1,uint param_2)

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



/* Function: my_sync_xor_and_fetch_2 @ 000122c4 */

static int my_sync_xor_and_fetch_2(uint param_1,uint param_2)

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



/* Function: my_sync_nand_and_fetch_2 @ 0001232c */

static int my_sync_nand_and_fetch_2(uint param_1,uint param_2)

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



/* Function: my_sync_add_and_fetch_1 @ 00012398 */

static int my_sync_add_and_fetch_1(uint param_1,int param_2)

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



/* Function: my_sync_sub_and_fetch_1 @ 000123fc */

static int my_sync_sub_and_fetch_1(uint param_1,int param_2)

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



/* Function: my_sync_or_and_fetch_1 @ 00012460 */

static int my_sync_or_and_fetch_1(uint param_1,uint param_2)

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



/* Function: my_sync_and_and_fetch_1 @ 000124c4 */

static int my_sync_and_and_fetch_1(uint param_1,uint param_2)

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



/* Function: my_sync_xor_and_fetch_1 @ 00012528 */

static int my_sync_xor_and_fetch_1(uint param_1,uint param_2)

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



/* Function: my_sync_nand_and_fetch_1 @ 0001258c */

static int my_sync_nand_and_fetch_1(uint param_1,uint param_2)

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



/* Function: my_sync_val_compare_and_swap_4 @ 000125f4 */

static int my_sync_val_compare_and_swap_4(int *param_1,int param_2,undefined4 param_3)

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



/* Function: my_sync_val_compare_and_swap_2 @ 00012644 */

static uint my_sync_val_compare_and_swap_2(uint param_1,uint param_2,int param_3)

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



/* Function: my_sync_val_compare_and_swap_1 @ 000126bc */

static uint my_sync_val_compare_and_swap_1(uint param_1,uint param_2,int param_3)

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



/* Function: my_sync_bool_compare_and_swap_4 @ 00012730 */

static bool my_sync_bool_compare_and_swap_4(int *param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = SUB_ffff0fc0(param_2,param_3,param_1);
 return iVar1 == 0;
}



/* Function: my_sync_bool_compare_and_swap_2 @ 0001275c */

static bool my_sync_bool_compare_and_swap_2(uint param_1,uint param_2,int param_3)

{
 int iVar1;
 
 iVar1 = my_sync_val_compare_and_swap_2(param_1,param_2,param_3);
 return param_2 == iVar1;
}



/* Function: my_sync_bool_compare_and_swap_1 @ 00012778 */

static bool my_sync_bool_compare_and_swap_1(uint param_1,uint param_2,int param_3)

{
 int iVar1;
 
 iVar1 = my_sync_val_compare_and_swap_1(param_1,param_2,param_3);
 return param_2 == iVar1;
}



/* Function: my_sync_lock_test_and_set_4 @ 000127a0 */

static undefined4 my_sync_lock_test_and_set_4(undefined4 *param_1,undefined4 param_2)

{
 int iVar1;
 undefined4 uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: my_sync_lock_test_and_set_2 @ 000127d8 */

static int my_sync_lock_test_and_set_2(uint param_1,int param_2)

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



/* Function: my_sync_lock_test_and_set_1 @ 00012838 */

static int my_sync_lock_test_and_set_1(uint param_1,int param_2)

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



/* Function: my_sync_lock_release_8 @ 00012894 */

static void my_sync_lock_release_8(undefined4 *param_1)

{
 ((code)SUB_ffff0fa0)();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}



/* Function: my_sync_lock_release_4 @ 000128b8 */

static void my_sync_lock_release_4(undefined4 *param_1)

{
 ((code)SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}



/* Function: my_sync_lock_release_2 @ 000128d8 */

static void my_sync_lock_release_2(undefined2 *param_1)

{
 ((code)SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}



/* Function: my_sync_lock_release_1 @ 000128f8 */

static void my_sync_lock_release_1(undefined1 *param_1)

{
 ((code)SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 112 */
