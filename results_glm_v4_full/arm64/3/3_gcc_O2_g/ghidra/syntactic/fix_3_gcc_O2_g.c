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
typedef unsigned long ulong;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef int __pid_t;
typedef unsigned int uint;
typedef int (*_func_int_int)(int);
typedef void (*code)(void);
typedef undefined1 undefined;

/* Forward declarations for struct types */
typedef struct Node Node;
typedef struct TreeNode TreeNode;



/* External variable declarations */
extern void *__dso_handle;
extern unsigned long __stack_chk_guard;

/* External data constants */

/* Missing data constant definitions */
static const char *const_string = "const";
static const char DAT_00102268[] = "value after free: %d\n";
static const char DAT_00102278[] = "child exited with status: %d\n";
static const char DAT_001022a0[] = "child signaled\n";
static const char DAT_001022e8[] = "fork failed";
static const char DAT_00101fa8[] = "=== Testing Stack Memory ===";
static const char DAT_00102118[] = "=== Testing Heap Memory ===";
static const char DAT_00102318[] = "=== Testing Static/Global Memory ===";
static const char DAT_001025c8[] = "=== Testing Memory Operation Functions ===";

/* Function declarations for CRT and libc functions */
void __cxa_finalize(void *dso_handle);
void deregister_tm_clones(void);
int puts(const char *s);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
__pid_t fork(void);
int waitpid(__pid_t pid, int *status, int options);
void perror(const char *s);
void __stack_chk_fail(void);
void exit(int status);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
char *strncpy(char *dest, const char *src, size_t n);
int __printf_chk(int flag, const char *fmt, ...);
void DataMemoryBarrier(int arg1, int arg2);

/* Forward declarations for test functions */
void test_stack_memory(void);
void test_heap_memory(void);
void test_static_global(void);
static void test_memory_op_functions(void);

/* Definitions for functions that may be called externally */
static int extern_function(int x) {
    return x * 2 + 5;
}

int double_value(int x) {
    return x * 2;
}

/* Global variable definitions */
static int global_array[10] = {0};
static int global_var = 50;
int extern_global_var = 0;

/* Static/file-scope variables */
static int counter_1 = 0;
static char completed_0 = 0;
static int global_counter = 0;
static int file_scope_static = 0;
static _func_int_int *global_func_ptr = (_func_int_int *)0x0;



struct Node {
    int data;
    Node *next;
};

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/3/3_gcc_O2_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */








/* Function: main @ 00100b00 */

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




/* Function: local_vars @ 00100c70 */

static int local_vars(int x)

{
 /* Unresolved local var: int a@[DW_OP_reg0(x0)]
 Unresolved local var: int b@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value]
 Unresolved local var: int c@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_plus_uconst: 10; DW_OP_stack_value] */
 return x * 2 + 10;
}



/* Function: local_array_helper @ 00100c7c */

/* WARNING: Removing unreachable block (ram,0x00100ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static void local_array_helper(int param_1)

{
 int iVar1;
 int *piVar2;
 int aiStack_30 [10];
 int aiStack_8 [2];
 int *piVar3;
 
 iVar1 = 0;
 piVar2 = aiStack_30;
 do {
 piVar3 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + param_1;
 piVar2 = piVar3;
 } while (piVar3 != aiStack_8);
 return;
}



/* Function: local_array @ 00100c80 */

/* WARNING: Removing unreachable block (ram,0x00100ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static int local_array(int n)

{
 int iVar1;
 int *piVar2;
 int arr [10];
 int local_8 [2];
 int *piVar3;
 
 iVar1 = 0;
 piVar2 = arr;
 do {
 piVar3 = piVar2 + 1;
 /* Unresolved local var: int i@[???] */
 *piVar2 = iVar1;
 iVar1 = iVar1 + n;
 piVar2 = piVar3;
 } while (piVar3 != local_8);
 return arr[5];
}



/* Function: local_struct @ 00100ce4 */

static int local_struct(int x)

{
 /* Unresolved local var: Point p@[DW_OP_reg0(x0); DW_OP_piece: 4;
 DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4]
 */
 return x * 3;
}



/* Function: address_of_local @ 00100cf0 */

static int address_of_local(int *out)

{
 /* Unresolved local var: int local@[???] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00100d00 */

static int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[DW_OP_reg0(x0)]
 Unresolved local var: int * p2@[DW_OP_reg0(x0)] */
 return *arr << 1;
}



/* Function: large_stack_frame @ 00100d10 */

/* WARNING: Removing unreachable block (ram,0x00100d74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int large_stack_frame(void)

{
 int iVar1;
 char *pcVar2;
 char large_buf [2048];
 
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 pcVar2 = large_buf;
 do {
 *pcVar2 = (char)iVar1;
 iVar1 = iVar1 + 1;
 pcVar2 = pcVar2 + 1;
 } while (iVar1 != 0x800);
 return (int)(byte)large_buf[0x400];
}



/* Function: vla_stack @ 00100d80 */

/* WARNING: Removing unreachable block (ram,0x00100e4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static int vla_stack(int n)

{
 long lVar1;
 undefined1 *puVar2;
 undefined1 *puVar3;
 int iVar5;
 ulong uVar6;
 long lVar7;
 undefined1 auStack_30 [16];
 undefined1 *puVar4;
 
 /* Unresolved local var: int[10946] vla@[???] */
 puVar3 = auStack_30;
 puVar4 = auStack_30;
 if (n - 1U < 1000) {
 uVar6 = (-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2) + 0xf;
 puVar2 = auStack_30;
 while (puVar4 != auStack_30 + -(uVar6 & 0xffffffffffff0000)) {
 puVar3 = puVar2 + -0x10000;
 *(undefined8 *)(puVar2 + -0xfc00) = 0;
 puVar4 = puVar2 + -0x10000;
 puVar2 = puVar2 + -0x10000;
 }
 uVar6 = uVar6 & 0xfff0;
 lVar1 = -uVar6;
 *(undefined8 *)(puVar3 + lVar1) = 0;
 if (0x3ff < uVar6) {
 *(undefined8 *)(puVar3 + lVar1 + 0x400) = 0;
 }
 /* Unresolved local var: int i@[???] */
 lVar7 = 0;
 do {
 *(int *)(puVar3 + lVar7 * 4 + lVar1 + 0x10) = (int)lVar7 << 1;
 lVar7 = lVar7 + 1;
 } while ((int)lVar7 < n);
 iVar5 = *(int *)(puVar3 + (long)(n >> 1) * 4 + lVar1 + 0x10);
 }
 else {
 iVar5 = -1;
 }
 return iVar5;
}



/* Function: alloca_usage @ 00100e50 */

/* WARNING: Removing unreachable block (ram,0x00100f18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static int alloca_usage(int n)

{
 long lVar1;
 undefined1 *puVar2;
 undefined1 *puVar3;
 int iVar5;
 ulong uVar6;
 int *piVar7;
 undefined1 auStack_30 [16];
 undefined1 *puVar4;
 
 /* Unresolved local var: int * arr@[???] */
 puVar3 = auStack_30;
 puVar4 = auStack_30;
 if (n < 1) {
 iVar5 = -1;
 }
 else {
 uVar6 = (-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2) + 0xf;
 puVar2 = auStack_30;
 while (puVar4 != auStack_30 + -(uVar6 & 0xffffffffffff0000)) {
 puVar3 = puVar2 + -0x10000;
 *(undefined8 *)(puVar2 + -0xfc00) = 0;
 puVar4 = puVar2 + -0x10000;
 puVar2 = puVar2 + -0x10000;
 }
 uVar6 = uVar6 & 0xfff0;
 lVar1 = -uVar6;
 *(undefined8 *)(puVar3 + lVar1) = 0;
 if (0x3ff < uVar6) {
 *(undefined8 *)(puVar3 + lVar1 + 0x400) = 0;
 }
 /* Unresolved local var: int i@[???] */
 iVar5 = 0;
 piVar7 = (int *)(puVar3 + lVar1 + 0x10);
 do {
 *piVar7 = iVar5;
 iVar5 = iVar5 + 3;
 piVar7 = piVar7 + 1;
 } while (iVar5 != n * 3);
 iVar5 = *(int *)((long)(puVar3 + lVar1 + 0x10) + (long)(n >> 1) * 4);
 }
 return iVar5;
}



/* Function: stack_alias @ 00100f20 */

static int stack_alias(int *p1,int *p2)

{
 /* Unresolved local var: int local@[???] */
 return 0x14;
}



/* Function: test_stack_memory @ 00100f30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
 int iVar1;
 int out;
 int arr5 [10];
 int alias_val;
 
 /* Unresolved local var: ulong anon_var_0@[???] */
 puts(DAT_00101fa8);
 iVar1 = local_vars(10);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",iVar1);
 iVar1 = local_array(3);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",iVar1);
 iVar1 = local_struct(5);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",iVar1);
 iVar1 = address_of_local(&out);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",iVar1);
 iVar1 = address_of_array(arr5);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",iVar1);
 iVar1 = large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",iVar1);
 iVar1 = vla_stack(10);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",iVar1);
 iVar1 = alloca_usage(10);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",iVar1);
 iVar1 = stack_alias(&out, arr5);
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",iVar1);
 return;
}



/* Function: heap_basic @ 00101010 */

static int heap_basic(int n)

{
 void *__ptr;
 long lVar1;
 int iVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 lVar1 = 0;
 do {
 *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 << 1;
 lVar1 = lVar1 + 1;
 } while ((int)lVar1 < n);
 }
 iVar2 = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 }
 return iVar2;
}



/* Function: heap_calloc @ 00101074 */

static int heap_calloc(int n)

{
 long lVar1;
 void *__ptr;
 long lVar2;
 int iVar3;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = calloc((long)n,4);
 if (__ptr == (void *)0x0) {
 iVar3 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar3 = 0;
 }
 else {
 lVar2 = 0;
 iVar3 = 0;
 do {
 lVar1 = lVar2 * 4;
 lVar2 = lVar2 + 1;
 iVar3 = iVar3 + *(int *)((long)__ptr + lVar1);
 } while ((int)lVar2 < n);
 }
 free(__ptr);
 }
 return iVar3;
}



/* Function: heap_realloc @ 001010e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int heap_realloc(void)

{
 undefined8 *__ptr;
 void *__ptr_00;
 int iVar1;
 
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int old_val@[???]
 Unresolved local var: int * new_p@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(0x14);
 if (__ptr == (undefined8 *)0x0) {
 iVar1 = -1;
 }
 else {
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



/* Function: heap_array @ 00101164 */

static int heap_array(int n)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 3;
 piVar2 = piVar2 + 1;
 } while (iVar1 != n * 3);
 }
 iVar1 = __ptr[n / 2];
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_struct @ 001011d0 */

static int heap_struct(int x)

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



/* Function: heap_nested_helper @ 0010120c */

static undefined8 heap_nested_helper(undefined8 *param_1)

{
 undefined4 *__ptr;
 undefined4 *puVar1;
 undefined8 uVar2;
 
 __ptr = malloc(0x10);
 *param_1 = (undefined8)__ptr;
 if (__ptr == (undefined4 *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 puVar1 = malloc(0x10);
 *(undefined4 **)(__ptr + 2) = puVar1;
 if (puVar1 == (undefined4 *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0;
 *puVar1 = 0x14;
 *(undefined8 *)(puVar1 + 2) = 0;
 }
 }
 return uVar2;
}



/* Function: heap_nested @ 00101210 */

static int heap_nested(Node **head)

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
 iVar1 = 0;
 pNVar2->data = 0x14;
 pNVar2->next = (Node *)0x0;
 }
 }
 return iVar1;
}



/* Function: linked_list_heap @ 00101284 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int linked_list_heap(void)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int *__ptr;
 int *piVar4;
 int iVar5;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: Node * temp@[???]
 Unresolved local var: int i@[???] */
 iVar5 = 0;
 piVar4 = (int *)0x0;
 piVar3 = (int *)0x0;
 do {
 /* Unresolved local var: Node * new_node@[???] */
 piVar2 = malloc(0x10);
 if (piVar2 == (int *)0x0) {
 while (piVar3 != (int *)0x0) {
 /* Unresolved local var: Node * temp@[???] */
 piVar4 = *(int **)(piVar3 + 2);
 free(piVar3);
 piVar3 = piVar4;
 }
 return -1;
 }
 *piVar2 = iVar5;
 piVar2[2] = 0;
 piVar2[3] = 0;
 __ptr = piVar2;
 if (piVar3 != (int *)0x0) {
 *(int **)(piVar4 + 2) = piVar2;
 __ptr = piVar3;
 }
 iVar5 = iVar5 + 10;
 piVar4 = piVar2;
 piVar3 = __ptr;
 } while (iVar5 != 0x32);
 iVar5 = 0;
 do {
 iVar1 = *piVar3;
 piVar3 = *(int **)(piVar3 + 2);
 iVar5 = iVar5 + iVar1;
 } while (piVar3 != (int *)0x0);
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar3 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 return iVar5;
}



/* Function: create_tree_node @ 00101330 */

static TreeNode * create_tree_node(int data)

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



/* Function: tree_heap_traversal @ 00101360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int tree_heap_traversal(void)

{
 int iVar1;
 void *__ptr;
 void *pvVar2;
 void *__ptr_00;
 
 /* Unresolved local var: TreeNode * root@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: TreeNode * node@[???] */
 __ptr = malloc(0x18);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: TreeNode * node@[???] */
 pvVar2 = malloc(0x18);
 if (pvVar2 == (void *)0x0) {
 pvVar2 = malloc(0x18);
 if (pvVar2 != (void *)0x0) {
 free(pvVar2);
 }
 }
 else {
 /* Unresolved local var: TreeNode * node@[???] */
 __ptr_00 = malloc(0x18);
 if (__ptr_00 != (void *)0x0) {
 free(pvVar2);
 free(__ptr_00);
 free(__ptr);
 return 0x3c;
 }
 free(pvVar2);
 }
 free(__ptr);
 iVar1 = -2;
 }
 return iVar1;
}



/* Function: memory_leak @ 00101410 */

static int memory_leak(int n)

{
 int iVar1;
 void *pvVar2;
 long lVar3;
 
 /* Unresolved local var: int * leak@[???] */
 pvVar2 = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
 if (pvVar2 == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 lVar3 = 0;
 do {
 *(int *)((long)pvVar2 + lVar3 * 4) = (int)lVar3;
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < n);
 }
 iVar1 = *(int *)((long)pvVar2 + (long)(n / 2) * 4);
 }
 return iVar1;
}



/* Function: dangling_pointer @ 00101470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int dangling_pointer(void)

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
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(__ptr);
 iVar1 = *__ptr;
 }
 return iVar1;
}



/* Function: double_free @ 001014c0 */

static int double_free(int *p)

{
 int iVar1;
 void *__ptr;
 
 if (p != (int *)0x0) {
 return *p;
 }
 /* Unresolved local var: int * temp@[???] */
 __ptr = malloc(4);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 free(__ptr);
 free(__ptr);
 iVar1 = -2;
 }
 return iVar1;
}



/* Function: heap_overflow_helper @ 0010150c */

static int heap_overflow_helper(void)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 100;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x44c);
 iVar1 = *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: heap_overflow @ 00101510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int heap_overflow(void)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 /* Unresolved local var: int i@[???] */
 *piVar2 = iVar1;
 iVar1 = iVar1 + 100;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 0x44c);
 iVar1 = *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: test_heap_memory @ 00101560 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 int iVar1;
 __pid_t __pid;
 Node *head;
 void *pvVar2;
 int *piVar3;
 undefined4 *puVar4;
 undefined8 *puVar5;
 long lVar6;
 int *piVar7;
 undefined8 uVar9;
 undefined4 uVar10;
 int status;
 long local_8;
 int *piVar8;
 
 /* Unresolved local var: pid_t pid@[???] */
 local_8 = __stack_chk_guard;
 puts(DAT_00102118);
 iVar1 = heap_basic(10);
 __printf_chk(1,(const char *)"HEAP-L2-01 (heap_basic): %d\n",iVar1);
 iVar1 = heap_calloc(5);
 __printf_chk(1,(const char *)"HEAP-L2-02 (heap_calloc): %d\n",iVar1);
 iVar1 = heap_realloc();
 __printf_chk(1,(const char *)"HEAP-L2-03 (heap_realloc): %d\n",iVar1);
 iVar1 = heap_array(10);
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",iVar1);
 iVar1 = heap_struct(5);
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",iVar1);
 iVar1 = heap_nested(&head);
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",iVar1);
 if (head != (Node *)0x0) {
 if (head->next != (Node *)0x0) {
 free(head->next);
 }
 free(head);
 }
 iVar1 = linked_list_heap();
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar1);
 iVar1 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",iVar1);
 iVar1 = memory_leak(5);
 __printf_chk(1,(const char *)"HEAP-L3-03 (memory_leak): %d\n",iVar1);
 __printf_chk(1,(const char *)"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 lVar6 = local_8 - __stack_chk_guard;
 if (lVar6 == 0) {
 perror(DAT_001022e8);
 return;
 }
 }
 else {
 waitpid(__pid,&status,0);
 if ((status & 0x7fU) == 0) {
 __printf_chk(1,(const char *)&DAT_00102278,(uint)status >> 8 & 0xff);
 }
 else if (0 < (int)((long)((ulong)((status & 0x7fU) + 1) << 0x38) >> 0x39)) {
 __printf_chk(1,(const char *)&DAT_001022a0);
 }
 lVar6 = local_8 - __stack_chk_guard;
 if (lVar6 == 0) {
 return;
 }
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 iVar1 = dangling_pointer();
 __printf_chk(1,(const char *)DAT_00102268,iVar1);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 001018c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 001018d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 001018e4 */

static int global_array_access(int idx)

{
 if ((uint)idx < 10) {
 return global_array[idx];
 }
 return -1;
}



/* Function: static_local @ 00101904 */

static int static_local(int reset)

{
 if (reset == 0) {
 counter_1 = counter_1 + 1;
 return counter_1;
 }
 counter_1 = 0;
 return 0;
}



/* Function: call_static_func @ 00101940 */

static int call_static_func(int x)

{
 return x * 2 + 1;
}



/* Function: access_extern_global @ 00101950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101964 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 00101970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101984 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 00101990 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 001019a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 001019b0 */

static void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 001019c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 001019d0 */

static void set_global_callback(_func_int_int *f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 001019e0 */

static int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr != (_func_int_int *)0x0) {
 /* WARNING: Could not recover jumptable at 0x001019f0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*global_func_ptr)(x);
 return iVar1;
 }
 return -1;
}



/* Function: global_heap_store @ 00101a00 */

static int global_heap_store(int *p)

{
 if (p != (int *)0x0) {
 return *p;
 }
 return -1;
}



/* Function: static_complex_init @ 00101a14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00101a20 */

static int tls_access(int val)

{
 return val << 1;
}



/* Function: init_order_test @ 00101a30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int init_order_test(void)

{
 /* Unresolved local var: int external_val@[???] */
 return 0x14;
}



/* Function: test_static_global @ 00101a40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 int iVar1;
 
 /* Unresolved local var: int heap_val@[???] */
 puts(DAT_00102318);
 global_counter = global_counter + 1;
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",global_counter);
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 iVar1 = extern_function(5);
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",iVar1);
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",(byte)const_string[4] + 0x2a);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n",file_scope_static);
 global_func_ptr = (_func_int_int *)&double_value;
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",10);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",0xf);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



/* Function: memop_memset @ 00101c30 */

static int memop_memset(void *buf,size_t size,int fill_value)

{
 if (buf != (void *)0x0 && size != 0) {
 memset(buf,fill_value,size);
 return (int)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_memcpy @ 00101c74 */

static int memop_memcpy(void *dst,void *src,size_t n)

{
 if ((src != (void *)0x0 && n != 0) && dst != (void *)0x0) {
 memcpy(dst,src,n);
 return *(int *)((long)dst + ((n & 0xfffffffffffffffc) - 4));
 }
 return -1;
}



/* Function: memop_memmove @ 00101cc0 */

static int memop_memmove(void *buf,size_t n)

{
 if (buf != (void *)0x0 && 1 < n) {
 memmove((void *)((long)buf + 1),buf,n - 1);
 return (int)*(byte *)((long)buf + 1);
 }
 return -1;
}



/* Function: memop_memcmp @ 00101d04 */

static int memop_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???] */
 if ((p2 == (void *)0x0 || n == 0) || p1 == (void *)0x0) {
 return 0;
 }
 /* Unresolved local var: int result@[???] */
 iVar2 = memcmp(p1,p2,n);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: memop_bzero @ 00101d40 */

static int memop_bzero(void *buf,size_t n)

{
 if (buf != (void *)0x0) {
 memset(buf,0,n);
 return (int)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_bcopy @ 00101d80 */

static int memop_bcopy(void *src,void *dst,size_t n)

{
 byte *pbVar1;
 
 if ((dst != (void *)0x0 && n != 0) && src != (void *)0x0) {
 pbVar1 = memmove(dst,src,n);
 return (int)*pbVar1;
 }
 return -1;
}



/* Function: memop_unaligned_access @ 00101dc0 */

static int memop_unaligned_access(char *buf)

{
 /* Unresolved local var: int value@[???] */
 if (buf != (char *)0x0) {
 return *(int *)(buf + 1);
 }
 return -1;
}



/* Function: memop_memory_barrier @ 00101dd4 */

static int memop_memory_barrier(int *flag)

{
 /* Unresolved local var: int local@[???] */
 if (flag != (int *)0x0) {
 /* DataMemoryBarrier(2,3); */ /* CRT artifact removed */
 return *flag + *flag;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 00101df4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static void test_memory_op_functions(void)

{
 int iVar1;
 long lVar2;
 int iVar3;
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
 lVar2 = __stack_chk_guard;
 /* Unresolved local var: int result@[???] */
 puts(DAT_001025c8);
 __printf_chk(1,(const char *)"MEMOP-L2-01: %d\n",0x41);
 __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
 strncpy(move_buf,"HelloWorld",0xb);
 memmove(move_buf + 1,move_buf,9);
 __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 iVar3 = memcmp(cmp_a,cmp_b,0xc);
 iVar1 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar1 = 1;
 }
 __printf_chk(1,"MEMOP-L2-04: %d\n",iVar1);
 __printf_chk(1,"MEMOP-L2-05: %d\n",0);
 __printf_chk(1,"MEMOP-L2-06: %d\n",1);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 /* Unresolved local var: int local@[???] */
 /* DataMemoryBarrier(2,3); */ /* CRT artifact removed */
 if (lVar2 == __stack_chk_guard) {
 __printf_chk(1,"MEMOP-L3-02: %d\n",10);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
