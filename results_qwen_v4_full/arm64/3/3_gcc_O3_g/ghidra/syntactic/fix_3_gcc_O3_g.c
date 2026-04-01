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
typedef unsigned long undefined8;
typedef unsigned char undefined1;
typedef unsigned long ulong;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned char byte;
typedef long __pid_t;
typedef unsigned long undefined;
typedef void (*code)(void);
typedef unsigned short ushort;
typedef unsigned char uchar;

typedef struct Node {
    int data;
    struct Node *next;
    int padding1;
    int padding2;
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

typedef int (*_func_int_int)(int);

/* Ghidra CONCAT macros */
#define CONCAT11(a,b) (ushort)(((uchar)(b) << 8) | (uchar)(a))
#define CONCAT12(a,b) (uint)(((ushort)(b) << 8) | (uchar)(a))
#define CONCAT13(a,b) (ulong)(((uint)(b) << 8) | (uchar)(a))
#define CONCAT14(a,b) (ulong)(((ulong)(b) << 8) | (uchar)(a))
#define CONCAT15(a,b) (ulong)(((ulong)(b) << 16) | (ushort)(a))
#define CONCAT16(a,b) (ulong)(((ulong)(b) << 24) | (uchar)(a))
#define CONCAT17(a,b) (ulong)(((ulong)(b) << 32) | (uint)(a))
#define CONCAT44(a,b) (ulong)(((ulong)(b) << 32) | (uint)(a))

/* Function declarations for CRT functions */
void __cxa_finalize(void *);
void deregister_tm_clones(void);
void __stack_chk_fail(void *, unsigned long, unsigned long, long);
void *malloc(unsigned long);
void free(void *);
void *calloc(unsigned long, unsigned long);
void *realloc(void *, unsigned long);
int puts(const char *);
int __printf_chk(int, const char *, ...);
int fork(void);
int waitpid(int, int *, int);
void perror(const char *);
void exit(int);
void *memset(void *, int, unsigned long);
void *memcpy(void *, const void *, unsigned long);
void *memmove(void *, const void *, unsigned long);
int memcmp(const void *, const void *, unsigned long);
char *strncpy(char *, const char *, unsigned long);
void DataMemoryBarrier(int, int);
extern int extern_function(int);

/* Global variables */
static int global_counter = 0;
static int global_array[10] = {0};
static int counter_1 = 0;
static int extern_global_var = 0;
static char const_string[] = "constant";
static int file_scope_static = 0;
static _func_int_int global_func_ptr = 0;
extern long ___stack_chk_guard;
extern void *__dso_handle;
static char completed_0 = 0;
char DAT_001022b8[] = "=== Stack Memory Tests ===";
char DAT_00102428[] = "=== Heap Memory Tests ===";
char DAT_00102578[] = "%d\n";
char DAT_00102588[] = "Child exited with status %d\n";
char DAT_001025b0[] = "Child terminated by signal\n";
char DAT_001025f8[] = "fork failed";
char DAT_00102628[] = "=== Static/Global Tests ===";
char DAT_001028d8[] = "=== Memory Op Tests ===";



/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/3/3_gcc_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001009b0 @ 001009b0 */

static void FUN_001009b0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function declarations */
static void test_stack_memory(void);
static void test_heap_memory(void);
static void test_static_global(void);
static void test_memory_op_functions(void);

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




/* Function: FUN_00100bfc @ 00100bfc */

static void FUN_00100bfc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: double_value @ 00100c60 */

static int double_value(int x)

{
 return x << 1;
}



/* Function: alloca_usage @ 00100c70 */

static int alloca_usage(int n);

static int alloca_usage(int n)

{
 /* Unresolved local var: int * arr@[???] */
 return 0xf;
}



/* Function: local_vars @ 00100c80 */

static int local_vars(int x);

static int local_vars(int x)

{
 /* Unresolved local var: int a@[DW_OP_reg0(x0)]
 Unresolved local var: int b@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value]
 Unresolved local var: int c@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_plus_uconst: 10; DW_OP_stack_value] */
 return x * 2 + 10;
}



/* Function: local_array @ 00100c90 */

static int local_array(int n);

static int local_array(int n)

{
 /* Unresolved local var: int[10] arr@[???]
 Unresolved local var: int i@[???] */
 return n * 5;
}



/* Function: local_struct @ 00100cb0 */

static int local_struct(int x);

static int local_struct(int x)

{
 /* Unresolved local var: Point p@[DW_OP_reg0(x0); DW_OP_piece: 4;
 DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4]
 */
 return x * 3;
}



/* Function: address_of_local @ 00100cc0 */

static int address_of_local(int *out);

static int address_of_local(int *out)

{
 /* Unresolved local var: int local@[???] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00100cd0 */

static int address_of_array(int *arr);

static int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[DW_OP_reg0(x0)]
 Unresolved local var: int * p2@[DW_OP_reg0(x0)] */
 return *arr << 1;
}



/* Function: large_stack_frame @ 00100ce0 */

/* WARNING: Removing unreachable block (ram,0x00100d84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int large_stack_frame(void);

static int large_stack_frame(void)

{
 char cVar1;
 char cVar2;
 char cVar3;
 char cVar4;
 char *pcVar5;
 char *pcVar6;
 undefined8 uVar7;
 undefined8 uVar8;
 char large_buf [2048];
 char acStack_10 [16];
 
 /* Unresolved local var: int i@[???] */
 pcVar5 = large_buf;
 uVar7 = 0x100000000;
 uVar8 = 0x300000002;
 do {
 cVar3 = (char)uVar7;
 cVar4 = (char)((ulong)uVar7 >> 0x20);
 cVar2 = (char)uVar8;
 cVar1 = (char)((ulong)uVar8 >> 0x20);
 pcVar6 = pcVar5 + 0x10;
 *(ulong *)(pcVar5 + 8) =
 CONCAT17(cVar1 + '\f',
 CONCAT16(cVar2 + '\f',
 CONCAT15(cVar4 + '\f',
 CONCAT14(cVar3 + '\f',
 CONCAT13(cVar1 + '\b',
 CONCAT12(cVar2 + '\b',
 CONCAT11(cVar4 + '\b',cVar3 + '\b')))
 ))));
 *(ulong *)pcVar5 =
 CONCAT17(cVar1 + '\x04',
 CONCAT16(cVar2 + '\x04',
 CONCAT15(cVar4 + '\x04',
 CONCAT14(cVar3 + '\x04',
 CONCAT13(cVar1,CONCAT12(cVar2,CONCAT11(cVar4,cVar3)))))
 ));
 pcVar5 = pcVar6;
 uVar7 = CONCAT44((int)((ulong)uVar7 >> 0x20) + 0x10,(int)uVar7 + 0x10);
 uVar8 = CONCAT44((int)((ulong)uVar8 >> 0x20) + 0x10,(int)uVar8 + 0x10);
 } while (acStack_10 != pcVar6);
 return (int)(byte)large_buf[0x400];
}



/* Function: vla_stack @ 00100d90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static int vla_stack(int n);

static int vla_stack(int n)

{
 long lVar1;
 undefined1 *puVar2;
 long lVar3;
 undefined1 *puVar4;
 int iVar6;
 ulong uVar7;
 undefined8 *puVar8;
 undefined8 *puVar9;
 undefined8 *puVar10;
 ulong uVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 undefined1 auStack_30 [16];
 undefined1 *puVar5;
 
 lVar3 = ___stack_chk_guard;
 /* Unresolved local var: int[11038] vla@[???] */
 puVar4 = auStack_30;
 puVar5 = auStack_30;
 if (999 < n - 1U) {
 iVar12 = -1;
 goto LAB_00100e8c;
 }
 uVar7 = (-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2) + 0xf;
 puVar2 = auStack_30;
 while (puVar5 != auStack_30 + -(uVar7 & 0xffffffffffff0000)) {
 puVar4 = puVar2 + -0x10000;
 *(undefined8 *)(puVar2 + -0xfc00) = 0;
 puVar5 = puVar2 + -0x10000;
 puVar2 = puVar2 + -0x10000;
 }
 uVar7 = uVar7 & 0xfff0;
 lVar1 = -uVar7;
 *(undefined8 *)(puVar4 + lVar1) = 0;
 if (0x3ff < uVar7) {
 *(undefined8 *)(puVar4 + lVar1 + 0x400) = 0;
 }
 puVar10 = (undefined8 *)(puVar4 + lVar1 + 0x10);
 /* Unresolved local var: int i@[???] */
 if (n - 1U < 3) {
 uVar7 = 0;
LAB_00100e4c:
 uVar11 = -(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2;
 iVar6 = (int)uVar7;
 iVar12 = iVar6 * 2;
 *(int *)(puVar4 + uVar11 + lVar1 + 0x10) = iVar12;
 if ((iVar6 + 1 < n) && (*(int *)((long)puVar10 + uVar11 + 4) = iVar12 + 2, iVar6 + 2 < n)) {
 *(int *)((long)puVar10 + uVar11 + 8) = iVar12 + 4;
 }
 }
 else {
 puVar8 = puVar10;
 iVar12 = 0;
 iVar6 = 1;
 iVar13 = 2;
 iVar14 = 3;
 do {
 puVar9 = puVar8 + 2;
 puVar8[1] = CONCAT44(iVar14 << 1,iVar13 << 1);
 *puVar8 = CONCAT44(iVar6 << 1,iVar12 << 1);
 puVar8 = puVar9;
 iVar12 = iVar12 + 4;
 iVar6 = iVar6 + 4;
 iVar13 = iVar13 + 4;
 iVar14 = iVar14 + 4;
 } while (puVar9 != puVar10 + (ulong)((uint)n >> 2) * 2);
 uVar7 = (ulong)(n & 0xfffffffc);
 if ((n & 3U) != 0) goto LAB_00100e4c;
 }
 iVar12 = *(int *)((long)puVar10 + (long)(n >> 1) * 4);
LAB_00100e8c:
 if (lVar3 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,0,lVar3 - ___stack_chk_guard,0);
 }
 return iVar12;
}



/* Function: alloca_usage_2 @ 00100ed0 */

/* WARNING: Removing unreachable block (ram,0x00101008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static int alloca_usage_2(int n)

{
 undefined8 *puVar1;
 long lVar2;
 undefined1 *puVar3;
 undefined1 *puVar4;
 int iVar6;
 ulong uVar7;
 undefined8 *puVar8;
 undefined8 *puVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 undefined1 auStack_30 [16];
 undefined1 *puVar5;
 
 /* Unresolved local var: int * arr@[???] */
 puVar4 = auStack_30;
 puVar5 = auStack_30;
 if (n < 1) {
 return -1;
 }
 uVar7 = (-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2) + 0xf;
 puVar3 = auStack_30;
 while (puVar5 != auStack_30 + -(uVar7 & 0xffffffffffff0000)) {
 puVar4 = puVar3 + -0x10000;
 *(undefined8 *)(puVar3 + -0xfc00) = 0;
 puVar5 = puVar3 + -0x10000;
 puVar3 = puVar3 + -0x10000;
 }
 uVar7 = uVar7 & 0xfff0;
 lVar2 = -uVar7;
 *(undefined8 *)(puVar4 + lVar2) = 0;
 if (0x3ff < uVar7) {
 *(undefined8 *)(puVar4 + lVar2 + 0x400) = 0;
 }
 puVar1 = (undefined8 *)(puVar4 + lVar2 + 0x10);
 /* Unresolved local var: int i@[???] */
 if (n - 1U < 3) {
 uVar7 = 0;
 }
 else {
 puVar8 = puVar1;
 iVar10 = 0;
 iVar6 = 1;
 iVar11 = 2;
 iVar12 = 3;
 do {
 puVar9 = puVar8 + 2;
 puVar8[1] = CONCAT44(iVar12 * 3,iVar11 * 3);
 *puVar8 = CONCAT44(iVar6 * 3,iVar10 * 3);
 puVar8 = puVar9;
 iVar10 = iVar10 + 4;
 iVar6 = iVar6 + 4;
 iVar11 = iVar11 + 4;
 iVar12 = iVar12 + 4;
 } while (puVar9 != puVar1 + (ulong)((uint)n >> 2) * 2);
 uVar7 = (ulong)(n & 0xfffffffc);
 if ((n & 3U) == 0) goto LAB_00100fc0;
 }
 iVar6 = (int)uVar7;
 iVar10 = iVar6 * 3;
 *(int *)((long)puVar1 + (long)iVar6 * 4) = iVar10;
 uVar7 = -(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2;
 if (iVar6 + 1 < n) {
 *(int *)((long)puVar1 + uVar7 + 4) = iVar10 + 3;
 if (iVar6 + 2 < n) {
 *(int *)((long)puVar1 + uVar7 + 8) = iVar10 + 6;
 }
 }
LAB_00100fc0:
 return *(int *)((long)puVar1 + (long)(n >> 1) * 4);
}



/* Function: stack_alias @ 00101010 */

static int stack_alias(int *p1,int *p2)

{
 /* Unresolved local var: int local@[???] */
 return 0x14;
}



/* Function: test_stack_memory @ 00101020 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static void test_stack_memory(void)

{
 int iVar1;
 
 /* Unresolved local var: int out@[???]
 Unresolved local var: int[10] arr5@[???]
 Unresolved local var: int alias_val@[???]
 Unresolved local var: ulong anon_var_0@[???] */
 puts(DAT_001022b8);
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



/* Function: heap_basic @ 001010f4 */

static int heap_basic(int n)

{
 undefined8 *__ptr;
 int iVar1;
 undefined8 *puVar2;
 undefined8 *puVar3;
 ulong uVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
 if (__ptr == (undefined8 *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 if (n - 1U < 3) {
 uVar4 = 0;
 }
 else {
 puVar2 = __ptr;
 iVar5 = 0;
 iVar1 = 1;
 iVar6 = 2;
 iVar7 = 3;
 do {
 puVar3 = puVar2 + 2;
 puVar2[1] = CONCAT44(iVar7 << 1,iVar6 << 1);
 *puVar2 = CONCAT44(iVar1 << 1,iVar5 << 1);
 puVar2 = puVar3;
 iVar5 = iVar5 + 4;
 iVar1 = iVar1 + 4;
 iVar6 = iVar6 + 4;
 iVar7 = iVar7 + 4;
 } while (puVar3 != __ptr + (ulong)((uint)n >> 2) * 2);
 uVar4 = (ulong)(n & 0xfffffffc);
 if ((n & 3U) == 0) goto LAB_0010119c;
 }
 iVar1 = (int)uVar4;
 iVar5 = iVar1 * 2;
 *(int *)((long)__ptr + (long)iVar1 * 4) = iVar5;
 uVar4 = -(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2;
 if (iVar1 + 1 < n) {
 *(int *)((long)__ptr + uVar4 + 4) = iVar5 + 2;
 if (iVar1 + 2 < n) {
 *(int *)((long)__ptr + uVar4 + 8) = iVar5 + 4;
 }
 }
 }
LAB_0010119c:
 iVar5 = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 return iVar5;
}







/* Function: heap_calloc @ 001011d0 */

static int heap_calloc(int n)

{
 undefined8 *__ptr;
 undefined8 *puVar1;
 ulong uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 undefined8 *puVar2;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = calloc((long)n,4);
 if (__ptr == (undefined8 *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar4 = 0;
 }
 else {
 if (n - 1U < 3) {
 uVar3 = 0;
 iVar4 = 0;
 }
 else {
 iVar4 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 puVar1 = __ptr;
 do {
 puVar2 = puVar1 + 2;
 iVar4 = iVar4 + (int)*puVar1;
 iVar5 = iVar5 + (int)((ulong)*puVar1 >> 0x20);
 iVar6 = iVar6 + (int)puVar1[1];
 iVar7 = iVar7 + (int)((ulong)puVar1[1] >> 0x20);
 puVar1 = puVar2;
 } while (puVar2 != __ptr + (ulong)((uint)n >> 2) * 2);
 iVar4 = iVar4 + iVar5 + iVar6 + iVar7;
 uVar3 = (ulong)(n & 0xfffffffc);
 if (((long)n & 3U) == 0) goto LAB_00101274;
 }
 iVar5 = (int)uVar3;
 uVar3 = -(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
 iVar4 = iVar4 + *(int *)((long)__ptr + (long)iVar5 * 4);
 if (iVar5 + 1 < n) {
 iVar4 = iVar4 + *(int *)((long)__ptr + uVar3 + 4);
 if (iVar5 + 2 < n) {
 iVar4 = iVar4 + *(int *)((long)__ptr + uVar3 + 8);
 }
 }
 }
LAB_00101274:
 free(__ptr);
 return iVar4;
}



/* Function: heap_realloc @ 001012a4 */

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
 *(undefined4 *)(__ptr + 2) = 5;
 __ptr[1] = 0x400000003;
 *__ptr = 0x200000001;
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 iVar1 = -2;
 free(__ptr);
 }
 else {
 /* Unresolved local var: int i@[???] */
 iVar1 = 0x32;
 if (*(int *)((long)__ptr_00 + 8) != 3) {
 iVar1 = -3;
 }
 *(undefined8 *)((long)__ptr_00 + 0x1c) = 0x5000000046;
 *(undefined8 *)((long)__ptr_00 + 0x14) = 0x3c00000032;
 free(__ptr_00);
 }
 }
 return iVar1;
}







/* Function: heap_array @ 00101330 */

static int heap_array(int n)

{
 undefined8 *__ptr;
 int iVar1;
 undefined8 *puVar2;
 undefined8 *puVar3;
 ulong uVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
 if (__ptr == (undefined8 *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 if (n - 1U < 3) {
 uVar4 = 0;
 }
 else {
 puVar2 = __ptr;
 iVar5 = 0;
 iVar1 = 1;
 iVar6 = 2;
 iVar7 = 3;
 do {
 puVar3 = puVar2 + 2;
 puVar2[1] = CONCAT44(iVar7 * 3,iVar6 * 3);
 *puVar2 = CONCAT44(iVar1 * 3,iVar5 * 3);
 puVar2 = puVar3;
 iVar5 = iVar5 + 4;
 iVar1 = iVar1 + 4;
 iVar6 = iVar6 + 4;
 iVar7 = iVar7 + 4;
 } while (puVar3 != __ptr + (ulong)((uint)n >> 2) * 2);
 uVar4 = (ulong)(n & 0xfffffffc);
 if ((n & 3U) == 0) goto LAB_001013d8;
 }
 iVar1 = (int)uVar4;
 iVar5 = iVar1 * 3;
 *(int *)((long)__ptr + (long)iVar1 * 4) = iVar5;
 uVar4 = -(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2;
 if (iVar1 + 1 < n) {
 *(int *)((long)__ptr + uVar4 + 4) = iVar5 + 3;
 if (iVar1 + 2 < n) {
 *(int *)((long)__ptr + uVar4 + 8) = iVar5 + 6;
 }
 }
 }
LAB_001013d8:
 iVar5 = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 return iVar5;
}



/* Function: heap_struct @ 00101410 */

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







/* Function: heap_nested @ 00101450 */

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



/* Function: linked_list_heap @ 001014c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int linked_list_heap(void)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *__ptr;
 int iVar5;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: Node * temp@[???]
 Unresolved local var: int i@[???] */
 iVar5 = 0;
 __ptr = (int *)0x0;
 piVar4 = (int *)0x0;
 while( true ) {
 /* Unresolved local var: Node * new_node@[???] */
 piVar3 = malloc(0x10);
 if (piVar3 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 /* Unresolved local var: Node * temp@[???] */
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 }
 return -1;
 }
 *piVar3 = iVar5;
 piVar3[2] = 0;
 piVar3[3] = 0;
 piVar2 = piVar3;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar4 + 2) = piVar3;
 piVar2 = __ptr;
 }
 __ptr = piVar2;
 if (iVar5 == 0x28) break;
 iVar5 = iVar5 + 10;
 piVar4 = piVar3;
 }
 iVar5 = 0;
 piVar4 = __ptr;
 do {
 iVar1 = *piVar4;
 piVar4 = *(int **)(piVar4 + 2);
 iVar5 = iVar5 + iVar1;
 } while (piVar4 != (int *)0x0);
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 } while (piVar4 != (int *)0x0);
 return iVar5;
}



/* Function: create_tree_node @ 00101580 */

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



/* Function: tree_heap_traversal @ 001015b0 */

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



/* Function: memory_leak @ 00101660 */

static int memory_leak(int n)

{
 undefined8 *puVar1;
 int iVar2;
 undefined8 *puVar3;
 undefined8 *puVar4;
 ulong uVar5;
 undefined8 uVar6;
 undefined8 uVar7;
 
 /* Unresolved local var: int * leak@[???] */
 puVar1 = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
 if (puVar1 == (undefined8 *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 if (n - 1U < 3) {
 uVar5 = 0;
 }
 else {
 puVar3 = puVar1;
 uVar6 = 0x100000000;
 uVar7 = 0x300000002;
 do {
 puVar4 = puVar3 + 2;
 puVar3[1] = uVar7;
 *puVar3 = uVar6;
 puVar3 = puVar4;
 uVar6 = CONCAT44((int)((ulong)uVar6 >> 0x20) + 4,(int)uVar6 + 4);
 uVar7 = CONCAT44((int)((ulong)uVar7 >> 0x20) + 4,(int)uVar7 + 4);
 } while (puVar4 != puVar1 + (ulong)((uint)n >> 2) * 2);
 uVar5 = (ulong)(n & 0xfffffffc);
 if ((n & 3U) == 0) goto LAB_001016f4;
 }
 iVar2 = (int)uVar5;
 *(int *)((long)puVar1 + (long)iVar2 * 4) = iVar2;
 uVar5 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
 if (iVar2 + 1 < n) {
 *(int *)((long)puVar1 + uVar5 + 4) = iVar2 + 1;
 if (iVar2 + 2 < n) {
 *(int *)((long)puVar1 + uVar5 + 8) = iVar2 + 2;
 }
 }
 }
LAB_001016f4:
 return *(int *)((long)puVar1 + (long)(n / 2) * 4);
}







/* Function: dangling_pointer @ 00101720 */

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



/* Function: double_free @ 00101770 */

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







/* Function: heap_overflow @ 001017c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int heap_overflow(void)

{
 int iVar1;
 void *__ptr;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 free(__ptr);
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: test_heap_memory @ 001017f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static void test_heap_memory(void)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 __pid_t __pid;
 void *pvVar4;
 undefined8 *puVar5;
 undefined4 *puVar6;
 int *piVar7;
 int *piVar8;
 undefined4 uVar9;
 undefined8 uVar10;
 long lVar11;
 int *__ptr;
 int status;
 long local_8;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: pid_t pid@[???] */
 local_8 = ___stack_chk_guard;
 puts(DAT_00102428);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 pvVar4 = malloc(0x28);
 if (pvVar4 == (void *)0x0) {
 uVar10 = 0xffffffff;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *(undefined8 *)((long)pvVar4 + 0x18) = 0xe0000000c;
 *(undefined8 *)((long)pvVar4 + 0x10) = 0xa00000008;
 *(undefined8 *)((long)pvVar4 + 0x20) = 0x1200000010;
 free(pvVar4);
 uVar10 = 10;
 }
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar10);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 puVar5 = calloc(5,4);
 if (puVar5 == (undefined8 *)0x0) {
 iVar3 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 iVar3 = (int)*puVar5 + (int)((ulong)*puVar5 >> 0x20) +
 (int)puVar5[1] + (int)((ulong)puVar5[1] >> 0x20) + *(int *)(puVar5 + 2);
 free(puVar5);
 }
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar3);
 iVar3 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",iVar3);
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 pvVar4 = malloc(0x28);
 if (pvVar4 == (void *)0x0) {
 uVar10 = 0xffffffff;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *(undefined8 *)((long)pvVar4 + 0x18) = 0x1500000012;
 *(undefined8 *)((long)pvVar4 + 0x10) = 0xf0000000c;
 *(undefined8 *)((long)pvVar4 + 0x20) = 0x1b00000018;
 free(pvVar4);
 uVar10 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",uVar10);
 /* Unresolved local var: Point * p@[???]
 Unresolved local var: int result@[???] */
 pvVar4 = malloc(8);
 if (pvVar4 == (void *)0x0) {
 uVar10 = 0xffffffff;
 }
 else {
 free(pvVar4);
 uVar10 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar10);
 pvVar4 = malloc(0x10);
 if (pvVar4 == (void *)0x0) {
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 puVar6 = malloc(0x10);
 *(undefined4 **)((long)pvVar4 + 8) = puVar6;
 if (puVar6 == (undefined4 *)0x0) {
 free(pvVar4);
 uVar10 = 0xfffffffe;
 }
 else {
 uVar10 = 0;
 *puVar6 = 0x14;
 *(undefined8 *)(puVar6 + 2) = 0;
 }
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar10);
 free(*(void **)((long)pvVar4 + 8));
 free(pvVar4);
 }
 iVar3 = 0;
 __ptr = (int *)0x0;
 piVar8 = (int *)0x0;
 do {
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: Node * temp@[???]
 Unresolved local var: int i@[???]
 Unresolved local var: Node * new_node@[???] */
 piVar7 = malloc(0x10);
 if (piVar7 == (int *)0x0) goto joined_r0x00101b54;
 *piVar7 = iVar3;
 iVar3 = iVar3 + 10;
 piVar7[2] = 0;
 piVar7[3] = 0;
 piVar2 = piVar7;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar8 + 2) = piVar7;
 piVar2 = __ptr;
 }
 __ptr = piVar2;
 piVar8 = piVar7;
 } while (iVar3 != 0x32);
 iVar3 = 0;
 piVar8 = __ptr;
 do {
 iVar1 = *piVar8;
 piVar8 = *(int **)(piVar8 + 2);
 iVar3 = iVar3 + iVar1;
 } while (piVar8 != (int *)0x0);
 do {
 /* Unresolved local var: Node * temp@[???] */
 piVar8 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar8;
 } while (piVar8 != (int *)0x0);
LAB_001019d8:
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar3);
 iVar3 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",iVar3);
 /* Unresolved local var: int * leak@[???] */
 puVar5 = malloc(0x14);
 if (puVar5 == (undefined8 *)0x0) {
 uVar10 = 0xffffffff;
 }
 else {
 /* Unresolved local var: int i@[???] */
 uVar10 = 2;
 *(undefined4 *)(puVar5 + 2) = 4;
 puVar5[1] = 0x300000002;
 *puVar5 = 0x100000000;
 }
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar10);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 /* Unresolved local var: int result@[???]
 Unresolved local var: int * p@[???]
 Unresolved local var: int value@[???]
 Unresolved local var: int dangerous@[???] */
 puVar6 = malloc(4);
 if (puVar6 == (undefined4 *)0x0) {
 uVar9 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(puVar6);
 uVar9 = *puVar6;
 }
 __printf_chk(1,"%s",DAT_00102578,uVar9);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 lVar11 = local_8 - ___stack_chk_guard;
 if (lVar11 == 0) {
 perror((char *)DAT_001025f8);
 return;
 }
 }
 else {
 waitpid(__pid,&status,0);
 if ((status & 0x7fU) == 0) {
 __printf_chk(1,DAT_00102588,(uint)status >> 8 & 0xff);
 }
 else if (0 < (int)((long)((ulong)((status & 0x7fU) + 1) << 0x38) >> 0x39)) {
 __printf_chk(1,"%s",DAT_001025b0);
 }
 lVar11 = local_8 - ___stack_chk_guard;
 if (lVar11 == 0) {
 return;
 }
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,0,lVar11,0);
joined_r0x00101b54:
 while (__ptr != (int *)0x0) {
 /* Unresolved local var: Node * temp@[???] */
 piVar8 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar8;
 }
 iVar3 = -1;
 goto LAB_001019d8;
}



/* Function: global_var_access @ 00101bd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00101be4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00101bf4 */

static int global_array_access(int idx)

{
 if ((uint)idx < 10) {
 return global_array[idx];
 }
 return -1;
}



/* Function: static_local @ 00101c14 */

static int static_local(int reset)

{
 if (reset == 0) {
 counter_1 = counter_1 + 1;
 return counter_1;
 }
 counter_1 = 0;
 return 0;
}



/* Function: call_static_func @ 00101c50 */

static int call_static_func(int x)

{
 return x * 2 + 1;
}



/* Function: access_extern_global @ 00101c60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101c74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 00101c80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101c94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 00101ca0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 00101cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 00101cc0 */

static void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 00101cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00101ce0 */

static void set_global_callback(_func_int_int f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00101cf0 */

static int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr != (_func_int_int *)0x0) {
 /* WARNING: Could not recover jumptable at 0x00101d00. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*global_func_ptr)(x);
 return iVar1;
 }
 return -1;
}



/* Function: global_heap_store @ 00101d10 */

static int global_heap_store(int *p)

{
 if (p != (int *)0x0) {
 return *p;
 }
 return -1;
}



/* Function: static_complex_init @ 00101d24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00101d30 */

static int tls_access(int val)

{
 return val << 1;
}



/* Function: init_order_test @ 00101d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static int init_order_test(void)

{
 /* Unresolved local var: int external_val@[???] */
 return 0x14;
}



/* Function: test_static_global @ 00101d50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static void test_static_global(void)

{
 int iVar1;
 
 /* Unresolved local var: int heap_val@[???] */
 puts(DAT_00102628);
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



/* Function: memop_memset @ 00101f40 */

static int memop_memset(void *buf,size_t size,int fill_value)

{
 if (buf != (void *)0x0 && size != 0) {
 memset(buf,fill_value,size);
 return (int)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_memcpy @ 00101f84 */

static int memop_memcpy(void *dst,void *src,size_t n)

{
 if ((src != (void *)0x0 && n != 0) && dst != (void *)0x0) {
 memcpy(dst,src,n);
 return *(int *)((long)dst + ((n & 0xfffffffffffffffc) - 4));
 }
 return -1;
}



/* Function: memop_memmove @ 00101fd0 */

static int memop_memmove(void *buf,size_t n)

{
 if (buf != (void *)0x0 && 1 < n) {
 memmove((void *)((long)buf + 1),buf,n - 1);
 return (int)*(byte *)((long)buf + 1);
 }
 return -1;
}



/* Function: memop_memcmp @ 00102014 */

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



/* Function: memop_bzero @ 00102050 */

static int memop_bzero(void *buf,size_t n)

{
 if (buf != (void *)0x0) {
 memset(buf,0,n);
 return (int)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_bcopy @ 00102090 */

static int memop_bcopy(void *src,void *dst,size_t n)

{
 byte *pbVar1;
 
 if ((dst != (void *)0x0 && n != 0) && src != (void *)0x0) {
 pbVar1 = memmove(dst,src,n);
 return (int)*pbVar1;
 }
 return -1;
}



/* Function: memop_unaligned_access @ 001020d0 */

static int memop_unaligned_access(char *buf)

{
 /* Unresolved local var: int value@[???] */
 if (buf != (char *)0x0) {
 return *(int *)(buf + 1);
 }
 return -1;
}



/* Function: memop_memory_barrier @ 001020e4 */

static int memop_memory_barrier(int *flag)

{
 /* Unresolved local var: int local@[???] */
 if (flag != (int *)0x0) {
 return *flag + *flag;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 00102104 */

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
 lVar2 = ___stack_chk_guard;
 /* Unresolved local var: int result@[???] */
 puts(DAT_001028d8);
 __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
 __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
 strncpy(move_buf,"HelloWorld",0xb);
 memmove(move_buf + 1,move_buf,9);
 __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
 cmp_a[2] = 3;
 cmp_b[2] = 4;
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 iVar3 = memcmp(cmp_a,cmp_b,0xc);
 iVar1 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar1 = 1;
 }
 __printf_chk(1,"MEMOP-L2-04: %d\n",iVar1);
 __printf_chk(1,"MEMOP-L2-05: %d\n",0);
 __printf_chk(1,"MEMOP-L2-06: %d\n",1);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 if (lVar2 == ___stack_chk_guard) {
 __printf_chk(1,"MEMOP-L3-02: %d\n",10);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,0,lVar2,0);
}








/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 72 */
