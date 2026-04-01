/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdint.h>
#include <sys/wait.h>

typedef unsigned char byte;
typedef unsigned char undefined;
typedef void (*code)();
typedef unsigned long ulong;
typedef unsigned int uint;
typedef unsigned long undefined8;
typedef unsigned int undefined4;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/3/3_clang_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Stack frame offset macros - Ghidra synthesized symbols */
/* These are now defined as actual variables that can have their address taken */
static const long stack_offset_neg8 = -8;
static const long stack_offset_8 = 8;
static const long stack_offset_18 = 0x18;
static const long stack_offset_28 = 0x28;

/* Stack frame base registers for address calculations */
static const long stack_base = 0;

/* Stack reference helpers - for accessing stack at specific offsets */
#define STACK_REF(offset) ((long)(&stack_base) + (offset))

/* Data section declarations - string literals and constants */
extern char DAT_00103719[];
extern char DAT_00103737[];
extern char DAT_00103755[];
extern char DAT_00103779[];
extern char DAT_0010343b[];
extern char DAT_001033d5[];
extern char DAT_001033fa[];
extern char DAT_001033c5[];
extern char DAT_00103040[];
extern char DAT_00103050[];
extern char DAT_00103060[];
extern char DAT_00103070[];
extern char DAT_00103080[];
extern char DAT_00103090[];
/* Note: _DAT_00103010 and _DAT_00103090 are aliases to above */
/* Data section definitions - actual string literals and data */
char DAT_00103719[] = "=== Stack Memory Test ===\n";
char DAT_00103737[] = "=== Heap Memory Test ===\n";
char DAT_00103755[] = "=== Static/Global Memory Test ===\n";
char DAT_00103779[] = "=== Memory Operations Test ===\n";
char DAT_0010343b[] = "fork";
char DAT_001033d5[] = "Child exited with code %d\n";
char DAT_001033fa[] = "Child terminated by signal %d\n";
char DAT_001033c5[] = "Value after free: %d\n";
char DAT_00103040[] = "ABCDEFGHIJKLMNOP";
char DAT_00103050[] = "abcdefghijklmnop";
char DAT_00103060[] = "0123456789abcdef";
char DAT_00103070[] = "ghijklmnopqrstuv";
char DAT_00103080[] = "GHIJKLMNOPQRSTUV";
char DAT_00103090[] = "WXYZ123456789012";
char _DAT_00103090[] = "WXYZ123456789012";
char _DAT_00103010[] = "0123456789abcdef";

/* Function declarations */
int double_value(int x);

/* Static function declarations - only visible within this file */
static int static_local(int reset);
static int call_static_func(int x);

/* Global variable declarations */
int global_counter;
int global_array[10];
int file_scope_static;
int extern_global_var;
int const_string[10];
typedef int (*_func_int_int)(int);
_func_int_int global_func_ptr;
int *global_heap_ptr;

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


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 /* WARNING: This appears to be a null function call - likely unreachable code */
 /* (*(code *)(undefined *)0x0)(); */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: local_vars @ 00101210 */

int local_vars(int x)

{
 /* Unresolved local var: int a@[DW_OP_reg5(RDI)]
 Unresolved local var: int c@[???]
 Unresolved local var: int b@[???] */
 return x * 2 + 10;
}



/* Function: local_array @ 00101220 */

int local_array(int n)

{
 /* Unresolved local var: int[10] arr@[???]
 Unresolved local var: int i@[???] */
 return n * 5;
}



/* Function: local_struct @ 00101230 */

int local_struct(int x)

{
 /* Unresolved local var: Point p@[DW_OP_reg5(RDI); DW_OP_piece: 4;
 DW_OP_breg5(RDI): 0; DW_OP_constu: 4294967295; DW_OP_and; DW_OP_lit1;
 DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4] */
 return x * 3;
}



/* Function: address_of_local @ 00101240 */

int address_of_local(int *out)

{
 /* Unresolved local var: int local@[???] */
 *out = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00101250 */

int address_of_array(int *arr)

{
 /* Unresolved local var: int * p1@[DW_OP_reg5(RDI)]
 Unresolved local var: int * p2@[DW_OP_reg5(RDI)] */
 return *arr * 2;
}



/* Function: large_stack_frame @ 00101260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
 long lVar1;
 byte bVar2;
 byte bVar3;
 byte bVar4;
 byte bVar5;
 byte bVar6;
 byte bVar7;
 byte bVar8;
 byte bVar9;
 byte bVar10;
 byte bVar11;
 byte bVar12;
 byte bVar13;
 byte bVar14;
 byte bVar15;
 byte bVar16;
 byte bVar17;
 byte abStack_808 [1024];
 char local_408;
 
 /* Unresolved local var: char[2048] large_buf@[???] */
 bVar2 = 0;
 bVar3 = 1;
 bVar4 = 2;
 bVar5 = 3;
 bVar6 = 4;
 bVar7 = 5;
 bVar8 = 6;
 bVar9 = 7;
 bVar10 = 8;
 bVar11 = 9;
 bVar12 = 10;
 bVar13 = 0xb;
 bVar14 = 0xc;
 bVar15 = 0xd;
 bVar16 = 0xe;
 bVar17 = 0xf;
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 abStack_808[lVar1] = bVar2;
 abStack_808[lVar1 + 1] = bVar3;
 abStack_808[lVar1 + 2] = bVar4;
 abStack_808[lVar1 + 3] = bVar5;
 abStack_808[lVar1 + 4] = bVar6;
 abStack_808[lVar1 + 5] = bVar7;
 abStack_808[lVar1 + 6] = bVar8;
 abStack_808[lVar1 + 7] = bVar9;
 abStack_808[lVar1 + 8] = bVar10;
 abStack_808[lVar1 + 9] = bVar11;
 abStack_808[lVar1 + 10] = bVar12;
 abStack_808[lVar1 + 0xb] = bVar13;
 abStack_808[lVar1 + 0xc] = bVar14;
 abStack_808[lVar1 + 0xd] = bVar15;
 abStack_808[lVar1 + 0xe] = bVar16;
 abStack_808[lVar1 + 0xf] = bVar17;
 abStack_808[lVar1 + 0x10] = bVar2 + 0x10;
 abStack_808[lVar1 + 0x11] = bVar3 + 0x10;
 abStack_808[lVar1 + 0x12] = bVar4 + 0x10;
 abStack_808[lVar1 + 0x13] = bVar5 + 0x10;
 abStack_808[lVar1 + 0x14] = bVar6 + 0x10;
 abStack_808[lVar1 + 0x15] = bVar7 + 0x10;
 abStack_808[lVar1 + 0x16] = bVar8 + 0x10;
 abStack_808[lVar1 + 0x17] = bVar9 + 0x10;
 abStack_808[lVar1 + 0x18] = bVar10 + 0x10;
 abStack_808[lVar1 + 0x19] = bVar11 + 0x10;
 abStack_808[lVar1 + 0x1a] = bVar12 + 0x10;
 abStack_808[lVar1 + 0x1b] = bVar13 + 0x10;
 abStack_808[lVar1 + 0x1c] = bVar14 + 0x10;
 abStack_808[lVar1 + 0x1d] = bVar15 + 0x10;
 abStack_808[lVar1 + 0x1e] = bVar16 + 0x10;
 abStack_808[lVar1 + 0x1f] = bVar17 + 0x10;
 abStack_808[lVar1 + 0x20] = bVar2 + 0x20;
 abStack_808[lVar1 + 0x21] = bVar3 + 0x20;
 abStack_808[lVar1 + 0x22] = bVar4 + 0x20;
 abStack_808[lVar1 + 0x23] = bVar5 + 0x20;
 abStack_808[lVar1 + 0x24] = bVar6 + 0x20;
 abStack_808[lVar1 + 0x25] = bVar7 + 0x20;
 abStack_808[lVar1 + 0x26] = bVar8 + 0x20;
 abStack_808[lVar1 + 0x27] = bVar9 + 0x20;
 abStack_808[lVar1 + 0x28] = bVar10 + 0x20;
 abStack_808[lVar1 + 0x29] = bVar11 + 0x20;
 abStack_808[lVar1 + 0x2a] = bVar12 + 0x20;
 abStack_808[lVar1 + 0x2b] = bVar13 + 0x20;
 abStack_808[lVar1 + 0x2c] = bVar14 + 0x20;
 abStack_808[lVar1 + 0x2d] = bVar15 + 0x20;
 abStack_808[lVar1 + 0x2e] = bVar16 + 0x20;
 abStack_808[lVar1 + 0x2f] = bVar17 + 0x20;
 abStack_808[lVar1 + 0x30] = bVar2 + 0x30;
 abStack_808[lVar1 + 0x31] = bVar3 + 0x30;
 abStack_808[lVar1 + 0x32] = bVar4 + 0x30;
 abStack_808[lVar1 + 0x33] = bVar5 + 0x30;
 abStack_808[lVar1 + 0x34] = bVar6 + 0x30;
 abStack_808[lVar1 + 0x35] = bVar7 + 0x30;
 abStack_808[lVar1 + 0x36] = bVar8 + 0x30;
 abStack_808[lVar1 + 0x37] = bVar9 + 0x30;
 abStack_808[lVar1 + 0x38] = bVar10 + 0x30;
 abStack_808[lVar1 + 0x39] = bVar11 + 0x30;
 abStack_808[lVar1 + 0x3a] = bVar12 + 0x30;
 abStack_808[lVar1 + 0x3b] = bVar13 + 0x30;
 abStack_808[lVar1 + 0x3c] = bVar14 + 0x30;
 abStack_808[lVar1 + 0x3d] = bVar15 + 0x30;
 abStack_808[lVar1 + 0x3e] = bVar16 + 0x30;
 abStack_808[lVar1 + 0x3f] = bVar17 + 0x30;
 abStack_808[lVar1 + 0x40] = bVar2 + 0x40;
 abStack_808[lVar1 + 0x41] = bVar3 + 0x40;
 abStack_808[lVar1 + 0x42] = bVar4 + 0x40;
 abStack_808[lVar1 + 0x43] = bVar5 + 0x40;
 abStack_808[lVar1 + 0x44] = bVar6 + 0x40;
 abStack_808[lVar1 + 0x45] = bVar7 + 0x40;
 abStack_808[lVar1 + 0x46] = bVar8 + 0x40;
 abStack_808[lVar1 + 0x47] = bVar9 + 0x40;
 abStack_808[lVar1 + 0x48] = bVar10 + 0x40;
 abStack_808[lVar1 + 0x49] = bVar11 + 0x40;
 abStack_808[lVar1 + 0x4a] = bVar12 + 0x40;
 abStack_808[lVar1 + 0x4b] = bVar13 + 0x40;
 abStack_808[lVar1 + 0x4c] = bVar14 + 0x40;
 abStack_808[lVar1 + 0x4d] = bVar15 + 0x40;
 abStack_808[lVar1 + 0x4e] = bVar16 + 0x40;
 abStack_808[lVar1 + 0x4f] = bVar17 + 0x40;
 abStack_808[lVar1 + 0x50] = bVar2 + 0x50;
 abStack_808[lVar1 + 0x51] = bVar3 + 0x50;
 abStack_808[lVar1 + 0x52] = bVar4 + 0x50;
 abStack_808[lVar1 + 0x53] = bVar5 + 0x50;
 abStack_808[lVar1 + 0x54] = bVar6 + 0x50;
 abStack_808[lVar1 + 0x55] = bVar7 + 0x50;
 abStack_808[lVar1 + 0x56] = bVar8 + 0x50;
 abStack_808[lVar1 + 0x57] = bVar9 + 0x50;
 abStack_808[lVar1 + 0x58] = bVar10 + 0x50;
 abStack_808[lVar1 + 0x59] = bVar11 + 0x50;
 abStack_808[lVar1 + 0x5a] = bVar12 + 0x50;
 abStack_808[lVar1 + 0x5b] = bVar13 + 0x50;
 abStack_808[lVar1 + 0x5c] = bVar14 + 0x50;
 abStack_808[lVar1 + 0x5d] = bVar15 + 0x50;
 abStack_808[lVar1 + 0x5e] = bVar16 + 0x50;
 abStack_808[lVar1 + 0x5f] = bVar17 + 0x50;
 abStack_808[lVar1 + 0x60] = bVar2 + 0x60;
 abStack_808[lVar1 + 0x61] = bVar3 + 0x60;
 abStack_808[lVar1 + 0x62] = bVar4 + 0x60;
 abStack_808[lVar1 + 99] = bVar5 + 0x60;
 abStack_808[lVar1 + 100] = bVar6 + 0x60;
 abStack_808[lVar1 + 0x65] = bVar7 + 0x60;
 abStack_808[lVar1 + 0x66] = bVar8 + 0x60;
 abStack_808[lVar1 + 0x67] = bVar9 + 0x60;
 abStack_808[lVar1 + 0x68] = bVar10 + 0x60;
 abStack_808[lVar1 + 0x69] = bVar11 + 0x60;
 abStack_808[lVar1 + 0x6a] = bVar12 + 0x60;
 abStack_808[lVar1 + 0x6b] = bVar13 + 0x60;
 abStack_808[lVar1 + 0x6c] = bVar14 + 0x60;
 abStack_808[lVar1 + 0x6d] = bVar15 + 0x60;
 abStack_808[lVar1 + 0x6e] = bVar16 + 0x60;
 abStack_808[lVar1 + 0x6f] = bVar17 + 0x60;
 abStack_808[lVar1 + 0x70] = bVar2 + 0x70;
 abStack_808[lVar1 + 0x71] = bVar3 + 0x70;
 abStack_808[lVar1 + 0x72] = bVar4 + 0x70;
 abStack_808[lVar1 + 0x73] = bVar5 + 0x70;
 abStack_808[lVar1 + 0x74] = bVar6 + 0x70;
 abStack_808[lVar1 + 0x75] = bVar7 + 0x70;
 abStack_808[lVar1 + 0x76] = bVar8 + 0x70;
 abStack_808[lVar1 + 0x77] = bVar9 + 0x70;
 abStack_808[lVar1 + 0x78] = bVar10 + 0x70;
 abStack_808[lVar1 + 0x79] = bVar11 + 0x70;
 abStack_808[lVar1 + 0x7a] = bVar12 + 0x70;
 abStack_808[lVar1 + 0x7b] = bVar13 + 0x70;
 abStack_808[lVar1 + 0x7c] = bVar14 + 0x70;
 abStack_808[lVar1 + 0x7d] = bVar15 + 0x70;
 abStack_808[lVar1 + 0x7e] = bVar16 + 0x70;
 abStack_808[lVar1 + 0x7f] = bVar17 + 0x70;
 lVar1 = lVar1 + 0x80;
 bVar2 = bVar2 ^ 0x80;
 bVar3 = bVar3 ^ 0x80;
 bVar4 = bVar4 ^ 0x80;
 bVar5 = bVar5 ^ 0x80;
 bVar6 = bVar6 ^ 0x80;
 bVar7 = bVar7 ^ 0x80;
 bVar8 = bVar8 ^ 0x80;
 bVar9 = bVar9 ^ 0x80;
 bVar10 = bVar10 ^ 0x80;
 bVar11 = bVar11 ^ 0x80;
 bVar12 = bVar12 ^ 0x80;
 bVar13 = bVar13 ^ 0x80;
 bVar14 = bVar14 ^ 0x80;
 bVar15 = bVar15 ^ 0x80;
 bVar16 = bVar16 ^ 0x80;
 bVar17 = bVar17 ^ 0x80;
 } while (lVar1 != 0x800);
 return (int)local_408;
}



/* Function: vla_stack @ 00101350 */

/* WARNING: Removing unreachable block (ram,0x00101483) */

int vla_stack(int n)

{
 int *piVar1;
 long lVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 long lVar7;
 int iVar8;
 long lVar9;
 ulong uVar10;
 ulong uVar11;
 ulong uVar12;
 ulong uVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 
 /* Unresolved local var: unsigned long __vla_expr0@[???]
 Unresolved local var: int[733] vla@[???] */
 if (n - 0x3e9U < 0xfffffc18) {
 return -1;
 }
 uVar13 = (ulong)(uint)n;
 lVar2 = -(uVar13 * 4 + 0xf & 0xfffffffffffffff0);
 lVar7 = lVar2 + -8;
 /* Unresolved local var: int i@[???] */
 if ((uint)n < 8) {
 uVar11 = 0;
 }
 else {
 uVar11 = (ulong)(n & 0xfffffff8);
 uVar12 = (uVar11 - 8 >> 3) + 1;
 if (uVar11 - 8 == 0) {
 iVar8 = 0;
 iVar14 = 2;
 iVar15 = 4;
 iVar16 = 6;
 lVar9 = 0;
LAB_0010142b:
 piVar1 = (int *)(STACK_REF(-8) + lVar9 * 4 + lVar7 + 8);
 *piVar1 = iVar8;
 piVar1[1] = iVar14;
 piVar1[2] = iVar15;
 piVar1[3] = iVar16;
 piVar1 = (int *)(STACK_REF(8) + lVar9 * 4 + lVar2);
 *piVar1 = iVar8 + 8;
 piVar1[1] = iVar14 + 8;
 piVar1[2] = iVar15 + 8;
 piVar1[3] = iVar16 + 8;
 }
 else {
 uVar10 = uVar12 & 0xfffffffffffffffe;
 iVar8 = 0;
 iVar14 = 1;
 iVar15 = 2;
 iVar16 = 3;
 lVar9 = 0;
 do {
 iVar3 = iVar8 * 2;
 iVar4 = iVar14 * 2;
 iVar5 = iVar15 * 2;
 iVar6 = iVar16 * 2;
 piVar1 = (int *)(STACK_REF(-8) + lVar9 * 4 + lVar7 + 8);
 *piVar1 = iVar3;
 piVar1[1] = iVar4;
 piVar1[2] = iVar5;
 piVar1[3] = iVar6;
 piVar1 = (int *)(STACK_REF(8) + lVar9 * 4 + lVar2);
 *piVar1 = iVar3 + 8;
 piVar1[1] = iVar4 + 8;
 piVar1[2] = iVar5 + 8;
 piVar1[3] = iVar6 + 8;
 piVar1 = (int *)(STACK_REF(0x18) + lVar9 * 4 + lVar2);
 *piVar1 = iVar3 + 0x10;
 piVar1[1] = iVar4 + 0x10;
 piVar1[2] = iVar5 + 0x10;
 piVar1[3] = iVar6 + 0x10;
 piVar1 = (int *)(STACK_REF(0x28) + lVar9 * 4 + lVar2);
 *piVar1 = iVar3 + 0x18;
 piVar1[1] = iVar4 + 0x18;
 piVar1[2] = iVar5 + 0x18;
 piVar1[3] = iVar6 + 0x18;
 lVar9 = lVar9 + 0x10;
 iVar8 = iVar8 + 0x10;
 iVar14 = iVar14 + 0x10;
 iVar15 = iVar15 + 0x10;
 iVar16 = iVar16 + 0x10;
 uVar10 = uVar10 - 2;
 } while (uVar10 != 0);
 iVar8 = iVar8 * 2;
 iVar14 = iVar14 * 2;
 iVar15 = iVar15 * 2;
 iVar16 = iVar16 * 2;
 if ((uVar12 & 1) != 0) goto LAB_0010142b;
 }
 if (uVar11 == uVar13) goto LAB_0010145f;
 }
 iVar8 = (int)uVar11 * 2;
 do {
 *(int *)(STACK_REF(-8) + uVar11 * 4 + lVar7 + 8) = iVar8;
 uVar11 = uVar11 + 1;
 iVar8 = iVar8 + 2;
 } while (uVar13 != uVar11);
LAB_0010145f:
 return *(int *)(STACK_REF(-8) + (ulong)(uint)(n / 2) * 4 + lVar7 + 8);
}



/* Function: alloca_usage @ 00101490 */

/* WARNING: Removing unreachable block (ram,0x001015c0) */

int alloca_usage(int n)

{
 int *piVar1;
 long lVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 long lVar7;
 int iVar8;
 ulong uVar9;
 ulong uVar10;
 long lVar11;
 ulong uVar12;
 ulong uVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 
 /* Unresolved local var: int * arr@[???] */
 if (n < 1) {
 return -1;
 }
 uVar13 = (ulong)(uint)n;
 lVar2 = -(uVar13 * 4 + 0xf & 0xfffffffffffffff0);
 lVar7 = lVar2 + -8;
 /* Unresolved local var: int i@[???] */
 if ((uint)n < 8) {
 uVar10 = 0;
 }
 else {
 uVar10 = (ulong)(n & 0xfffffff8);
 uVar12 = (uVar10 - 8 >> 3) + 1;
 if (uVar10 - 8 == 0) {
 iVar8 = 0;
 iVar14 = 1;
 iVar15 = 2;
 iVar16 = 3;
 lVar11 = 0;
LAB_00101563:
 piVar1 = (int *)(STACK_REF(-8) + lVar11 * 4 + lVar7 + 8);
 *piVar1 = iVar8 * 3;
 piVar1[1] = iVar14 * 3;
 piVar1[2] = iVar15 * 3;
 piVar1[3] = iVar16 * 3;
 piVar1 = (int *)(STACK_REF(8) + lVar11 * 4 + lVar2);
 *piVar1 = iVar8 * 3 + 0xc;
 piVar1[1] = iVar14 * 3 + 0xc;
 piVar1[2] = iVar15 * 3 + 0xc;
 piVar1[3] = iVar16 * 3 + 0xc;
 }
 else {
 uVar9 = uVar12 & 0xfffffffffffffffe;
 iVar8 = 0;
 iVar14 = 1;
 iVar15 = 2;
 iVar16 = 3;
 lVar11 = 0;
 do {
 piVar1 = (int *)(STACK_REF(-8) + lVar11 * 4 + lVar7 + 8);
 *piVar1 = iVar8 * 3;
 piVar1[1] = iVar14 * 3;
 piVar1[2] = iVar15 * 3;
 piVar1[3] = iVar16 * 3;
 piVar1 = (int *)(STACK_REF(8) + lVar11 * 4 + lVar2);
 *piVar1 = iVar8 * 3 + 0xc;
 piVar1[1] = iVar14 * 3 + 0xc;
 piVar1[2] = iVar15 * 3 + 0xc;
 piVar1[3] = iVar16 * 3 + 0xc;
 iVar5 = (iVar14 + 8) * 3;
 iVar6 = (iVar15 + 8) * 3;
 iVar3 = (iVar16 + 8) * 3;
 iVar4 = (iVar8 + 8) * 3;
 piVar1 = (int *)(STACK_REF(0x18) + lVar11 * 4 + lVar2);
 *piVar1 = iVar4;
 piVar1[1] = iVar5;
 piVar1[2] = iVar6;
 piVar1[3] = iVar3;
 piVar1 = (int *)(STACK_REF(0x28) + lVar11 * 4 + lVar2);
 *piVar1 = iVar4 + 0xc;
 piVar1[1] = iVar5 + 0xc;
 piVar1[2] = iVar6 + 0xc;
 piVar1[3] = iVar3 + 0xc;
 lVar11 = lVar11 + 0x10;
 iVar8 = iVar8 + 0x10;
 iVar14 = iVar14 + 0x10;
 iVar15 = iVar15 + 0x10;
 iVar16 = iVar16 + 0x10;
 uVar9 = uVar9 - 2;
 } while (uVar9 != 0);
 if ((uVar12 & 1) != 0) goto LAB_00101563;
 }
 if (uVar10 == uVar13) goto LAB_0010159f;
 }
 iVar8 = (int)uVar10 * 3;
 do {
 *(int *)(STACK_REF(-8) + uVar10 * 4 + lVar7 + 8) = iVar8;
 uVar10 = uVar10 + 1;
 iVar8 = iVar8 + 3;
 } while (uVar13 != uVar10);
LAB_0010159f:
 return *(int *)(STACK_REF(-8) + (ulong)(uint)(n / 2) * 4 + lVar7 + 8);
}



/* Function: stack_alias @ 001015d0 */

int stack_alias(int *p1,int *p2)

{
 /* Unresolved local var: int local@[???] */
 return 0x14;
}



/* Function: test_stack_memory @ 001015e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

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
 undefined *auVar18;
 undefined local_808 [16];
 char acStack_7f8 [1008];
 char local_408;
 
 /* Unresolved local var: int[10] arr5@[???]
 Unresolved local var: int alias_val@[???]
 Unresolved local var: int out@[???] */
 puts(&DAT_00103719);
 lVar1 = 0;
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 printf("MEM-L1-02 (local_array): %d\n",10);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 auVar18 = _DAT_00103010;
 do {
 cVar2 = auVar18[0];
 cVar3 = auVar18[1];
 cVar4 = auVar18[2];
 cVar5 = auVar18[3];
 cVar6 = auVar18[4];
 cVar7 = auVar18[5];
 cVar8 = auVar18[6];
 cVar9 = auVar18[7];
 cVar10 = auVar18[8];
 cVar11 = auVar18[9];
 cVar12 = auVar18[10];
 cVar13 = auVar18[0xb];
 cVar14 = auVar18[0xc];
 cVar15 = auVar18[0xd];
 cVar16 = auVar18[0xe];
 cVar17 = auVar18[0xf];
 acStack_7f8[lVar1] = cVar2 + '\x10';
 acStack_7f8[lVar1 + 1] = cVar3 + '\x10';
 acStack_7f8[lVar1 + 2] = cVar4 + '\x10';
 acStack_7f8[lVar1 + 3] = cVar5 + '\x10';
 acStack_7f8[lVar1 + 4] = cVar6 + '\x10';
 acStack_7f8[lVar1 + 5] = cVar7 + '\x10';
 acStack_7f8[lVar1 + 6] = cVar8 + '\x10';
 acStack_7f8[lVar1 + 7] = cVar9 + '\x10';
 acStack_7f8[lVar1 + 8] = cVar10 + '\x10';
 acStack_7f8[lVar1 + 9] = cVar11 + '\x10';
 acStack_7f8[lVar1 + 10] = cVar12 + '\x10';
 acStack_7f8[lVar1 + 0xb] = cVar13 + '\x10';
 acStack_7f8[lVar1 + 0xc] = cVar14 + '\x10';
 acStack_7f8[lVar1 + 0xd] = cVar15 + '\x10';
 acStack_7f8[lVar1 + 0xe] = cVar16 + '\x10';
 acStack_7f8[lVar1 + 0xf] = cVar17 + '\x10';
 acStack_7f8[lVar1 + 0x10] = cVar2 + ' ';
 acStack_7f8[lVar1 + 0x11] = cVar3 + ' ';
 acStack_7f8[lVar1 + 0x12] = cVar4 + ' ';
 acStack_7f8[lVar1 + 0x13] = cVar5 + ' ';
 acStack_7f8[lVar1 + 0x14] = cVar6 + ' ';
 acStack_7f8[lVar1 + 0x15] = cVar7 + ' ';
 acStack_7f8[lVar1 + 0x16] = cVar8 + ' ';
 acStack_7f8[lVar1 + 0x17] = cVar9 + ' ';
 acStack_7f8[lVar1 + 0x18] = cVar10 + ' ';
 acStack_7f8[lVar1 + 0x19] = cVar11 + ' ';
 acStack_7f8[lVar1 + 0x1a] = cVar12 + ' ';
 acStack_7f8[lVar1 + 0x1b] = cVar13 + ' ';
 acStack_7f8[lVar1 + 0x1c] = cVar14 + ' ';
 acStack_7f8[lVar1 + 0x1d] = cVar15 + ' ';
 acStack_7f8[lVar1 + 0x1e] = cVar16 + ' ';
 acStack_7f8[lVar1 + 0x1f] = cVar17 + ' ';
 acStack_7f8[lVar1 + 0x20] = cVar2 + DAT_00103040[0];
 acStack_7f8[lVar1 + 0x21] = cVar3 + DAT_00103040[1];
 acStack_7f8[lVar1 + 0x22] = cVar4 + DAT_00103040[2];
 acStack_7f8[lVar1 + 0x23] = cVar5 + DAT_00103040[3];
 acStack_7f8[lVar1 + 0x24] = cVar6 + DAT_00103040[4];
 acStack_7f8[lVar1 + 0x25] = cVar7 + DAT_00103040[5];
 acStack_7f8[lVar1 + 0x26] = cVar8 + DAT_00103040[6];
 acStack_7f8[lVar1 + 0x27] = cVar9 + DAT_00103040[7];
 acStack_7f8[lVar1 + 0x28] = cVar10 + DAT_00103040[8];
 acStack_7f8[lVar1 + 0x29] = cVar11 + DAT_00103040[9];
 acStack_7f8[lVar1 + 0x2a] = cVar12 + DAT_00103040[10];
 acStack_7f8[lVar1 + 0x2b] = cVar13 + DAT_00103040[11];
 acStack_7f8[lVar1 + 0x2c] = cVar14 + DAT_00103040[12];
 acStack_7f8[lVar1 + 0x2d] = cVar15 + DAT_00103040[13];
 acStack_7f8[lVar1 + 0x2e] = cVar16 + DAT_00103040[14];
 acStack_7f8[lVar1 + 0x2f] = cVar17 + DAT_00103040[15];
 acStack_7f8[lVar1 + 0x30] = cVar2 + DAT_00103050[0];
 acStack_7f8[lVar1 + 0x31] = cVar3 + DAT_00103050[1];
 acStack_7f8[lVar1 + 0x32] = cVar4 + DAT_00103050[2];
 acStack_7f8[lVar1 + 0x33] = cVar5 + DAT_00103050[3];
 acStack_7f8[lVar1 + 0x34] = cVar6 + DAT_00103050[4];
 acStack_7f8[lVar1 + 0x35] = cVar7 + DAT_00103050[5];
 acStack_7f8[lVar1 + 0x36] = cVar8 + DAT_00103050[6];
 acStack_7f8[lVar1 + 0x37] = cVar9 + DAT_00103050[7];
 acStack_7f8[lVar1 + 0x38] = cVar10 + DAT_00103050[8];
 acStack_7f8[lVar1 + 0x39] = cVar11 + DAT_00103050[9];
 acStack_7f8[lVar1 + 0x3a] = cVar12 + DAT_00103050[10];
 acStack_7f8[lVar1 + 0x3b] = cVar13 + DAT_00103050[11];
 acStack_7f8[lVar1 + 0x3c] = cVar14 + DAT_00103050[12];
 acStack_7f8[lVar1 + 0x3d] = cVar15 + DAT_00103050[13];
 acStack_7f8[lVar1 + 0x3e] = cVar16 + DAT_00103050[14];
 acStack_7f8[lVar1 + 0x3f] = cVar17 + DAT_00103050[15];
 acStack_7f8[lVar1 + 0x40] = cVar2 + DAT_00103060[0];
 acStack_7f8[lVar1 + 0x41] = cVar3 + DAT_00103060[1];
 acStack_7f8[lVar1 + 0x42] = cVar4 + DAT_00103060[2];
 acStack_7f8[lVar1 + 0x43] = cVar5 + DAT_00103060[3];
 acStack_7f8[lVar1 + 0x44] = cVar6 + DAT_00103060[4];
 acStack_7f8[lVar1 + 0x45] = cVar7 + DAT_00103060[5];
 acStack_7f8[lVar1 + 0x46] = cVar8 + DAT_00103060[6];
 acStack_7f8[lVar1 + 0x47] = cVar9 + DAT_00103060[7];
 acStack_7f8[lVar1 + 0x48] = cVar10 + DAT_00103060[8];
 acStack_7f8[lVar1 + 0x49] = cVar11 + DAT_00103060[9];
 acStack_7f8[lVar1 + 0x4a] = cVar12 + DAT_00103060[10];
 acStack_7f8[lVar1 + 0x4b] = cVar13 + DAT_00103060[11];
 acStack_7f8[lVar1 + 0x4c] = cVar14 + DAT_00103060[12];
 acStack_7f8[lVar1 + 0x4d] = cVar15 + DAT_00103060[13];
 acStack_7f8[lVar1 + 0x4e] = cVar16 + DAT_00103060[14];
 acStack_7f8[lVar1 + 0x4f] = cVar17 + DAT_00103060[15];
 acStack_7f8[lVar1 + 0x50] = cVar2 + DAT_00103070[0];
 acStack_7f8[lVar1 + 0x51] = cVar3 + DAT_00103070[1];
 acStack_7f8[lVar1 + 0x52] = cVar4 + DAT_00103070[2];
 acStack_7f8[lVar1 + 0x53] = cVar5 + DAT_00103070[3];
 acStack_7f8[lVar1 + 0x54] = cVar6 + DAT_00103070[4];
 acStack_7f8[lVar1 + 0x55] = cVar7 + DAT_00103070[5];
 acStack_7f8[lVar1 + 0x56] = cVar8 + DAT_00103070[6];
 acStack_7f8[lVar1 + 0x57] = cVar9 + DAT_00103070[7];
 acStack_7f8[lVar1 + 0x58] = cVar10 + DAT_00103070[8];
 acStack_7f8[lVar1 + 0x59] = cVar11 + DAT_00103070[9];
 acStack_7f8[lVar1 + 0x5a] = cVar12 + DAT_00103070[10];
 acStack_7f8[lVar1 + 0x5b] = cVar13 + DAT_00103070[11];
 acStack_7f8[lVar1 + 0x5c] = cVar14 + DAT_00103070[12];
 acStack_7f8[lVar1 + 0x5d] = cVar15 + DAT_00103070[13];
 acStack_7f8[lVar1 + 0x5e] = cVar16 + DAT_00103070[14];
 acStack_7f8[lVar1 + 0x5f] = cVar17 + DAT_00103070[15];
 acStack_7f8[lVar1 + 0x60] = cVar2 + DAT_00103080[0];
 acStack_7f8[lVar1 + 0x61] = cVar3 + DAT_00103080[1];
 acStack_7f8[lVar1 + 0x62] = cVar4 + DAT_00103080[2];
 acStack_7f8[lVar1 + 99] = cVar5 + DAT_00103080[3];
 acStack_7f8[lVar1 + 100] = cVar6 + DAT_00103080[4];
 acStack_7f8[lVar1 + 0x65] = cVar7 + DAT_00103080[5];
 acStack_7f8[lVar1 + 0x66] = cVar8 + DAT_00103080[6];
 acStack_7f8[lVar1 + 0x67] = cVar9 + DAT_00103080[7];
 acStack_7f8[lVar1 + 0x68] = cVar10 + DAT_00103080[8];
 acStack_7f8[lVar1 + 0x69] = cVar11 + DAT_00103080[9];
 acStack_7f8[lVar1 + 0x6a] = cVar12 + DAT_00103080[10];
 acStack_7f8[lVar1 + 0x6b] = cVar13 + DAT_00103080[11];
 acStack_7f8[lVar1 + 0x6c] = cVar14 + DAT_00103080[12];
 acStack_7f8[lVar1 + 0x6d] = cVar15 + DAT_00103080[13];
 acStack_7f8[lVar1 + 0x6e] = cVar16 + DAT_00103080[14];
 acStack_7f8[lVar1 + 0x6f] = cVar17 + DAT_00103080[15];
 lVar1 = lVar1 + 0x80;
 memcpy(auVar18, _DAT_00103090, 16);
 } while (lVar1 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)(uint)(int)local_408);
 printf("MEM-L2-02 (vla_stack): %d\n",10);
 printf("MEM-L2-03 (alloca_usage): %d\n",0xf);
 printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}



/* Function: heap_basic @ 00101780 */

/* WARNING: Removing unreachable block (ram,0x001018aa) */

int heap_basic(int n)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 void *__ptr;
 ulong uVar6;
 int iVar7;
 ulong uVar8;
 long lVar9;
 ulong uVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc((long)n << 2);
 if (__ptr == (void *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 if (n < 1) goto LAB_0010187f;
 if ((uint)n < 8) {
 uVar6 = 0;
 }
 else {
 uVar6 = (ulong)(n & 0xfffffff8);
 uVar10 = (uVar6 - 8 >> 3) + 1;
 if (uVar6 - 8 == 0) {
 iVar7 = 0;
 iVar11 = 2;
 iVar12 = 4;
 iVar13 = 6;
 lVar9 = 0;
LAB_0010184b:
 piVar1 = (int *)((long)__ptr + lVar9 * 4);
 *piVar1 = iVar7;
 piVar1[1] = iVar11;
 piVar1[2] = iVar12;
 piVar1[3] = iVar13;
 piVar1 = (int *)((long)__ptr + lVar9 * 4 + 0x10);
 *piVar1 = iVar7 + 8;
 piVar1[1] = iVar11 + 8;
 piVar1[2] = iVar12 + 8;
 piVar1[3] = iVar13 + 8;
 }
 else {
 uVar8 = uVar10 & 0xfffffffffffffffe;
 iVar7 = 0;
 iVar11 = 1;
 iVar12 = 2;
 iVar13 = 3;
 lVar9 = 0;
 do {
 iVar2 = iVar7 * 2;
 iVar3 = iVar11 * 2;
 iVar4 = iVar12 * 2;
 iVar5 = iVar13 * 2;
 piVar1 = (int *)((long)__ptr + lVar9 * 4);
 *piVar1 = iVar2;
 piVar1[1] = iVar3;
 piVar1[2] = iVar4;
 piVar1[3] = iVar5;
 piVar1 = (int *)((long)__ptr + lVar9 * 4 + 0x10);
 *piVar1 = iVar2 + 8;
 piVar1[1] = iVar3 + 8;
 piVar1[2] = iVar4 + 8;
 piVar1[3] = iVar5 + 8;
 piVar1 = (int *)((long)__ptr + lVar9 * 4 + 0x20);
 *piVar1 = iVar2 + 0x10;
 piVar1[1] = iVar3 + 0x10;
 piVar1[2] = iVar4 + 0x10;
 piVar1[3] = iVar5 + 0x10;
 piVar1 = (int *)((long)__ptr + lVar9 * 4 + 0x30);
 *piVar1 = iVar2 + 0x18;
 piVar1[1] = iVar3 + 0x18;
 piVar1[2] = iVar4 + 0x18;
 piVar1[3] = iVar5 + 0x18;
 lVar9 = lVar9 + 0x10;
 iVar7 = iVar7 + 0x10;
 iVar11 = iVar11 + 0x10;
 iVar12 = iVar12 + 0x10;
 iVar13 = iVar13 + 0x10;
 uVar8 = uVar8 - 2;
 } while (uVar8 != 0);
 iVar7 = iVar7 * 2;
 iVar11 = iVar11 * 2;
 iVar12 = iVar12 * 2;
 iVar13 = iVar13 * 2;
 if ((uVar10 & 1) != 0) goto LAB_0010184b;
 }
 if (uVar6 == (uint)n) goto LAB_0010187f;
 }
 iVar7 = (int)uVar6 * 2;
 do {
 *(int *)((long)__ptr + uVar6 * 4) = iVar7;
 uVar6 = uVar6 + 1;
 iVar7 = iVar7 + 2;
 } while ((uint)n != uVar6);
LAB_0010187f:
 iVar7 = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 return iVar7;
}



/* Function: heap_calloc @ 001018b0 */

int heap_calloc(int n)

{
 ulong uVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int *piVar7;
 int *piVar8;
 void *__ptr;
 ulong uVar9;
 int iVar10;
 ulong uVar11;
 long lVar12;
 ulong uVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
 int iVar20;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = calloc((long)n,4);
 if (__ptr == (void *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 iVar10 = 0;
 if ((0 < n) && (iVar10 = 0, n != 1)) {
 uVar1 = (ulong)(uint)n - 1;
 if (uVar1 < 8) {
 iVar10 = 0;
 uVar9 = 1;
 }
 else {
 uVar9 = uVar1 & 0xfffffffffffffff8;
 uVar13 = (uVar9 - 8 >> 3) + 1;
 uVar11 = (ulong)((uint)uVar13 & 3);
 if (uVar9 - 8 < 0x18) {
 iVar10 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 lVar12 = 0;
 iVar17 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 }
 else {
 uVar13 = uVar13 & 0xfffffffffffffffc;
 iVar10 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 lVar12 = 0;
 iVar17 = 0;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 do {
 piVar2 = (int *)((long)__ptr + lVar12 * 4 + 4);
 piVar3 = (int *)((long)__ptr + lVar12 * 4 + 0x14);
 piVar4 = (int *)((long)__ptr + lVar12 * 4 + 0x24);
 piVar5 = (int *)((long)__ptr + lVar12 * 4 + 0x34);
 piVar6 = (int *)((long)__ptr + lVar12 * 4 + 0x44);
 piVar7 = (int *)((long)__ptr + lVar12 * 4 + 0x54);
 piVar8 = (int *)((long)__ptr + lVar12 * 4 + 100);
 iVar10 = *piVar8 + *piVar6 + *piVar4 + *piVar2 + iVar10;
 iVar14 = piVar8[1] + piVar6[1] + piVar4[1] + piVar2[1] + iVar14;
 iVar15 = piVar8[2] + piVar6[2] + piVar4[2] + piVar2[2] + iVar15;
 iVar16 = piVar8[3] + piVar6[3] + piVar4[3] + piVar2[3] + iVar16;
 piVar2 = (int *)((long)__ptr + lVar12 * 4 + 0x74);
 iVar17 = *piVar2 + *piVar7 + *piVar5 + *piVar3 + iVar17;
 iVar18 = piVar2[1] + piVar7[1] + piVar5[1] + piVar3[1] + iVar18;
 iVar19 = piVar2[2] + piVar7[2] + piVar5[2] + piVar3[2] + iVar19;
 iVar20 = piVar2[3] + piVar7[3] + piVar5[3] + piVar3[3] + iVar20;
 lVar12 = lVar12 + 0x20;
 uVar13 = uVar13 - 4;
 } while (uVar13 != 0);
 }
 for (; uVar11 != 0; uVar11 = uVar11 - 1) {
 uVar13 = lVar12 * 4 | 4;
 piVar2 = (int *)((long)__ptr + uVar13);
 iVar10 = iVar10 + *piVar2;
 iVar14 = iVar14 + piVar2[1];
 iVar15 = iVar15 + piVar2[2];
 iVar16 = iVar16 + piVar2[3];
 piVar2 = (int *)((long)__ptr + uVar13 + 0x10);
 iVar17 = iVar17 + *piVar2;
 iVar18 = iVar18 + piVar2[1];
 iVar19 = iVar19 + piVar2[2];
 iVar20 = iVar20 + piVar2[3];
 lVar12 = lVar12 + 8;
 }
 iVar10 = iVar16 + iVar20 + iVar14 + iVar18 + iVar15 + iVar19 + iVar10 + iVar17;
 if (uVar1 == uVar9) goto LAB_001019fc;
 uVar9 = uVar9 | 1;
 }
 do {
 iVar10 = iVar10 + *(int *)((long)__ptr + uVar9 * 4);
 uVar9 = uVar9 + 1;
 } while ((uint)n != uVar9);
 }
LAB_001019fc:
 free(__ptr);
 return iVar10;
}



/* Function: heap_realloc @ 00101a10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
 undefined8 *__ptr;
 undefined8 *__ptr_00;
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
 if (__ptr_00 == (undefined8 *)0x0) {
 __ptr_00 = __ptr;
 iVar1 = -2;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *(undefined8 *)((long)__ptr_00 + 0x14) = 0x3c00000032;
 *(undefined8 *)((long)__ptr_00 + 0x1c) = 0x5000000046;
 *(undefined4 *)((long)__ptr_00 + 0x24) = 0x5a;
 iVar1 = -3;
 if (*(int *)(__ptr_00 + 1) == 3) {
 iVar1 = 0x32;
 }
 }
 free(__ptr_00);
 }
 return iVar1;
}



/* Function: heap_array @ 00101a90 */

/* WARNING: Removing unreachable block (ram,0x00101bca) */

int heap_array(int n)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 void *__ptr;
 ulong uVar6;
 int iVar7;
 ulong uVar8;
 long lVar9;
 ulong uVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 
 /* Unresolved local var: int * arr@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc((long)n << 2);
 if (__ptr == (void *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 if (n < 1) goto LAB_00101b9f;
 if ((uint)n < 8) {
 uVar6 = 0;
 }
 else {
 uVar6 = (ulong)(n & 0xfffffff8);
 uVar10 = (uVar6 - 8 >> 3) + 1;
 if (uVar6 - 8 == 0) {
 iVar7 = 0;
 iVar11 = 1;
 iVar12 = 2;
 iVar13 = 3;
 lVar9 = 0;
LAB_00101b63:
 piVar1 = (int *)((long)__ptr + lVar9 * 4);
 *piVar1 = iVar7 * 3;
 piVar1[1] = iVar11 * 3;
 piVar1[2] = iVar12 * 3;
 piVar1[3] = iVar13 * 3;
 piVar1 = (int *)((long)__ptr + lVar9 * 4 + 0x10);
 *piVar1 = iVar7 * 3 + 0xc;
 piVar1[1] = iVar11 * 3 + 0xc;
 piVar1[2] = iVar12 * 3 + 0xc;
 piVar1[3] = iVar13 * 3 + 0xc;
 }
 else {
 uVar8 = uVar10 & 0xfffffffffffffffe;
 iVar7 = 0;
 iVar11 = 1;
 iVar12 = 2;
 iVar13 = 3;
 lVar9 = 0;
 do {
 piVar1 = (int *)((long)__ptr + lVar9 * 4);
 *piVar1 = iVar7 * 3;
 piVar1[1] = iVar11 * 3;
 piVar1[2] = iVar12 * 3;
 piVar1[3] = iVar13 * 3;
 piVar1 = (int *)((long)__ptr + lVar9 * 4 + 0x10);
 *piVar1 = iVar7 * 3 + 0xc;
 piVar1[1] = iVar11 * 3 + 0xc;
 piVar1[2] = iVar12 * 3 + 0xc;
 piVar1[3] = iVar13 * 3 + 0xc;
 iVar4 = (iVar11 + 8) * 3;
 iVar5 = (iVar12 + 8) * 3;
 iVar2 = (iVar13 + 8) * 3;
 iVar3 = (iVar7 + 8) * 3;
 piVar1 = (int *)((long)__ptr + lVar9 * 4 + 0x20);
 *piVar1 = iVar3;
 piVar1[1] = iVar4;
 piVar1[2] = iVar5;
 piVar1[3] = iVar2;
 piVar1 = (int *)((long)__ptr + lVar9 * 4 + 0x30);
 *piVar1 = iVar3 + 0xc;
 piVar1[1] = iVar4 + 0xc;
 piVar1[2] = iVar5 + 0xc;
 piVar1[3] = iVar2 + 0xc;
 lVar9 = lVar9 + 0x10;
 iVar7 = iVar7 + 0x10;
 iVar11 = iVar11 + 0x10;
 iVar12 = iVar12 + 0x10;
 iVar13 = iVar13 + 0x10;
 uVar8 = uVar8 - 2;
 } while (uVar8 != 0);
 if ((uVar10 & 1) != 0) goto LAB_00101b63;
 }
 if (uVar6 == (uint)n) goto LAB_00101b9f;
 }
 iVar7 = (int)uVar6 * 3;
 do {
 *(int *)((long)__ptr + uVar6 * 4) = iVar7;
 uVar6 = uVar6 + 1;
 iVar7 = iVar7 + 3;
 } while ((uint)n != uVar6);
LAB_00101b9f:
 iVar7 = *(int *)((long)__ptr + (long)(n / 2) * 4);
 free(__ptr);
 return iVar7;
}



/* Function: heap_struct @ 00101bd0 */

int heap_struct(int x)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: Point * p@[???] */
 return x * 3;
}



/* Function: heap_nested @ 00101be0 */

int heap_nested(Node **head)

{
 Node *__ptr;
 Node *pNVar1;
 
 __ptr = malloc(0x10);
 *head = __ptr;
 if (__ptr == (Node *)0x0) {
 return -1;
 }
 __ptr->data = 10;
 pNVar1 = malloc(0x10);
 __ptr->next = pNVar1;
 if (pNVar1 != (Node *)0x0) {
 pNVar1->data = 0x14;
 pNVar1->next = (Node *)0x0;
 return 0;
 }
 free(__ptr);
 return -2;
}



/* Function: linked_list_heap @ 00101c50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
 int *__ptr;
 undefined4 *puVar1;
 undefined4 *puVar2;
 int *piVar3;
 int iVar4;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: Node * current@[???]
 Unresolved local var: Node * temp@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???]
 Unresolved local var: Node * new_node@[???] */
 __ptr = malloc(0x10);
 iVar4 = -1;
 if (__ptr != (int *)0x0) {
 *__ptr = 0;
 puVar1 = malloc(0x10);
 if (puVar1 == (undefined4 *)0x0) {
 free(__ptr);
 }
 else {
 *puVar1 = 10;
 *(undefined8 *)(puVar1 + 2) = 0;
 *(undefined4 **)(__ptr + 2) = puVar1;
 puVar2 = malloc(0x10);
 if (puVar2 == (undefined4 *)0x0) {
 do {
 piVar3 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 }
 else {
 *puVar2 = 0x14;
 *(undefined8 *)(puVar2 + 2) = 0;
 *(undefined4 **)(puVar1 + 2) = puVar2;
 puVar1 = malloc(0x10);
 if (puVar1 == (undefined4 *)0x0) {
 do {
 piVar3 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 }
 else {
 *puVar1 = 0x1e;
 *(undefined8 *)(puVar1 + 2) = 0;
 *(undefined4 **)(puVar2 + 2) = puVar1;
 puVar2 = malloc(0x10);
 if (puVar2 == (undefined4 *)0x0) {
 do {
 piVar3 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 }
 else {
 *puVar2 = 0x28;
 *(undefined8 *)(puVar2 + 2) = 0;
 *(undefined4 **)(puVar1 + 2) = puVar2;
 iVar4 = 0;
 piVar3 = __ptr;
 do {
 iVar4 = iVar4 + *piVar3;
 piVar3 = *(int **)(piVar3 + 2);
 } while (piVar3 != (int *)0x0);
 do {
 piVar3 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 }
 }
 }
 }
 }
 return iVar4;
}



/* Function: create_tree_node @ 00101dc0 */

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



/* Function: tree_heap_traversal @ 00101de0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
 /* Unresolved local var: int sum@[???]
 Unresolved local var: TreeNode * root@[???] */
 return 0x3c;
}



/* Function: memory_leak @ 00101df0 */

int memory_leak(int n)

{
 int *piVar1;
 void *pvVar2;
 ulong uVar3;
 long lVar4;
 long lVar5;
 ulong uVar6;
 ulong uVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 
 /* Unresolved local var: int * leak@[???] */
 pvVar2 = malloc((long)n << 2);
 if (pvVar2 == (void *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 if ((uint)n < 8) {
 uVar3 = 0;
 }
 else {
 uVar3 = (ulong)(n & 0xfffffff8);
 uVar7 = (uVar3 - 8 >> 3) + 1;
 uVar6 = (ulong)((uint)uVar7 & 3);
 if (uVar3 - 8 < 0x18) {
 iVar8 = 0;
 iVar9 = 1;
 iVar10 = 2;
 iVar11 = 3;
 lVar4 = 0;
 }
 else {
 uVar7 = uVar7 & 0xfffffffffffffffc;
 iVar8 = 0;
 iVar9 = 1;
 iVar10 = 2;
 iVar11 = 3;
 lVar4 = 0;
 do {
 piVar1 = (int *)((long)pvVar2 + lVar4 * 4);
 *piVar1 = iVar8;
 piVar1[1] = iVar9;
 piVar1[2] = iVar10;
 piVar1[3] = iVar11;
 piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x10);
 *piVar1 = iVar8 + 4;
 piVar1[1] = iVar9 + 4;
 piVar1[2] = iVar10 + 4;
 piVar1[3] = iVar11 + 4;
 piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x20);
 *piVar1 = iVar8 + 8;
 piVar1[1] = iVar9 + 8;
 piVar1[2] = iVar10 + 8;
 piVar1[3] = iVar11 + 8;
 piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x30);
 *piVar1 = iVar8 + 0xc;
 piVar1[1] = iVar9 + 0xc;
 piVar1[2] = iVar10 + 0xc;
 piVar1[3] = iVar11 + 0xc;
 piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x40);
 *piVar1 = iVar8 + 0x10;
 piVar1[1] = iVar9 + 0x10;
 piVar1[2] = iVar10 + 0x10;
 piVar1[3] = iVar11 + 0x10;
 piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x50);
 *piVar1 = iVar8 + 0x14;
 piVar1[1] = iVar9 + 0x14;
 piVar1[2] = iVar10 + 0x14;
 piVar1[3] = iVar11 + 0x14;
 piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x60);
 *piVar1 = iVar8 + 0x18;
 piVar1[1] = iVar9 + 0x18;
 piVar1[2] = iVar10 + 0x18;
 piVar1[3] = iVar11 + 0x18;
 piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x70);
 *piVar1 = iVar8 + 0x1c;
 piVar1[1] = iVar9 + 0x1c;
 piVar1[2] = iVar10 + 0x1c;
 piVar1[3] = iVar11 + 0x1c;
 lVar4 = lVar4 + 0x20;
 iVar8 = iVar8 + 0x20;
 iVar9 = iVar9 + 0x20;
 iVar10 = iVar10 + 0x20;
 iVar11 = iVar11 + 0x20;
 uVar7 = uVar7 - 4;
 } while (uVar7 != 0);
 }
 if (uVar6 != 0) {
 lVar5 = 0;
 do {
 piVar1 = (int *)((long)pvVar2 + lVar5 + lVar4 * 4);
 *piVar1 = iVar8;
 piVar1[1] = iVar9;
 piVar1[2] = iVar10;
 piVar1[3] = iVar11;
 piVar1 = (int *)((long)pvVar2 + lVar5 + lVar4 * 4 + 0x10);
 *piVar1 = iVar8 + 4;
 piVar1[1] = iVar9 + 4;
 piVar1[2] = iVar10 + 4;
 piVar1[3] = iVar11 + 4;
 iVar8 = iVar8 + 8;
 iVar9 = iVar9 + 8;
 iVar10 = iVar10 + 8;
 iVar11 = iVar11 + 8;
 lVar5 = lVar5 + 0x20;
 } while (uVar6 << 5 != lVar5);
 }
 if (uVar3 == (uint)n) goto LAB_00101f8c;
 }
 do {
 *(int *)((long)pvVar2 + uVar3 * 4) = (int)uVar3;
 uVar3 = uVar3 + 1;
 } while ((uint)n != uVar3);
 }
LAB_00101f8c:
 return *(int *)((long)pvVar2 + (long)(n / 2) * 4);
}



/* Function: dangling_pointer @ 00101fb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
 int *__ptr;
 
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int value@[???]
 Unresolved local var: int dangerous@[???] */
 __ptr = malloc(4);
 if (__ptr != (int *)0x0) {
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 return *__ptr;
 }
 return -1;
}



/* Function: double_free @ 00101ff0 */

int double_free(int *p)

{
 if (p != (int *)0x0) {
 return *p;
 }
 return -2;
}



/* Function: heap_overflow @ 00102000 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: int * arr@[???] */
 return 0;
}



/* Function: test_heap_memory @ 00102010 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
 uint uVar1;
 __pid_t __pid;
 undefined8 in_RAX;
 undefined8 *__ptr;
 undefined8 *__ptr_00;
 undefined4 *__ptr_01;
 undefined4 *puVar2;
 undefined8 uVar3;
 ulong uVar4;
 char *__format;
 uint local_14;
 
 /* Unresolved local var: Node * head@[???]
 Unresolved local var: pid_t pid@[???] */
 local_14 = (uint)((ulong)in_RAX >> 0x20);
 puts(&DAT_00103737);
 printf("HEAP-L2-01 (heap_basic): %d\n",10);
 printf("HEAP-L2-02 (heap_calloc): %d\n",0);
 /* Unresolved local var: int * p@[???]
 Unresolved local var: int old_val@[???]
 Unresolved local var: int * new_p@[???]
 Unresolved local var: int result@[???] */
 __ptr = malloc(0x14);
 if (__ptr == (undefined8 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *__ptr = 0x200000001;
 __ptr[1] = 0x400000003;
 *(undefined4 *)(__ptr + 2) = 5;
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (undefined8 *)0x0) {
 __ptr_00 = __ptr;
 uVar1 = 0xfffffffe;
 }
 else {
 /* Unresolved local var: int i@[???] */
 *(undefined8 *)((long)__ptr_00 + 0x14) = 0x3c00000032;
 *(undefined8 *)((long)__ptr_00 + 0x1c) = 0x5000000046;
 *(undefined4 *)((long)__ptr_00 + 0x24) = 0x5a;
 uVar1 = 0xfffffffd;
 if (*(int *)(__ptr_00 + 1) == 3) {
 uVar1 = 0x32;
 }
 }
 free(__ptr_00);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n",(ulong)uVar1);
 printf("HEAP-L2-04 (heap_array): %d\n",0xf);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 __ptr_01 = malloc(0x10);
 if (__ptr_01 == (undefined4 *)0x0) {
 printf("HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 *__ptr_01 = 10;
 puVar2 = malloc(0x10);
 *(undefined4 **)(__ptr_01 + 2) = puVar2;
 if (puVar2 == (undefined4 *)0x0) {
 free(__ptr_01);
 uVar3 = 0xfffffffe;
 }
 else {
 *puVar2 = 0x14;
 *(undefined8 *)(puVar2 + 2) = 0;
 uVar3 = 0;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar3);
 free(*(void **)(__ptr_01 + 2));
 free(__ptr_01);
 }
 uVar1 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar1);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
 printf("HEAP-L3-03 (memory_leak): %d\n",2);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid != 0) {
 if (__pid < 1) {
 perror(&DAT_0010343b);
 return;
 }
 /* Unresolved local var: int status@[???] */
 waitpid(__pid,(int *)&local_14,0);
 uVar1 = local_14 & 0x7f;
 if (uVar1 == 0) {
 uVar4 = (ulong)(byte)(local_14 >> 8);
 __format = &DAT_001033d5;
 }
 else {
 if ((int)(uVar1 * 0x1000000 + 0x1000000) < 0x2000000) {
 return;
 }
 __format = &DAT_001033fa;
 uVar4 = (ulong)uVar1;
 }
 printf(__format,uVar4);
 return;
 }
 /* Unresolved local var: int result@[???] */
 uVar1 = dangling_pointer();
 printf(&DAT_001033c5,(ulong)uVar1);
 /* WARNING: Subroutine does not return */
 exit(0);
}



/* Function: global_var_access @ 00102240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
 global_counter = global_counter + 1;
 return global_counter;
}



/* Function: global_var_read @ 00102250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
 return global_counter * 2;
}



/* Function: global_array_access @ 00102260 */

int global_array_access(int idx)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)idx < 10) {
 iVar1 = global_array[(uint)idx];
 }
 return iVar1;
}



/* Function: static_local @ 00102280 */

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



/* Function: call_static_func @ 001022a0 */

int call_static_func(int x)

{
 return x * 2 + 1;
}



/* Function: access_extern_global @ 001022b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 001022c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
 int iVar1;
 
 iVar1 = extern_function(5);
 return iVar1;
}



/* Function: read_const_data @ 001022d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
 return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 001022e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 001022f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 00102300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 00102310 */

void set_file_static(int val)

{
 file_scope_static = val;
 return;
}



/* Function: get_file_static @ 00102320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 00102330 */

void set_global_callback(_func_int_int f)

{
 global_func_ptr = f;
 return;
}



/* Function: call_global_callback @ 00102340 */

int call_global_callback(int x)

{
 int iVar1;
 
 if (global_func_ptr != (_func_int_int)0x0) {
 /* WARNING: Could not recover jumptable at 0x0010234c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*global_func_ptr)(x);
 return iVar1;
 }
 return -1;
}



/* Function: global_heap_store @ 00102360 */

int global_heap_store(int *p)

{
 global_heap_ptr = p;
 if (p != (int *)0x0) {
 return *p;
 }
 return -1;
}



/* Function: static_complex_init @ 00102380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00102390 */

int tls_access(int val)

{
 return val * 2;
}



/* Function: init_order_test @ 001023a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
 /* Unresolved local var: int external_val@[???] */
 return 0x14;
}



/* Function: test_static_global @ 001023b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
 uint uVar1;
 int local_c;
 
 /* Unresolved local var: int heap_val@[???] */
 puts(&DAT_00103755);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n",global_counter);
 printf("STM-L1-01 (global_var_read): %d\n",(ulong)(uint)(global_counter * 2));
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n",static_local_counter);
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
 global_func_ptr = &double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",global_func_ptr(10));
 local_c = 100;
 global_heap_ptr = &local_c;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}



/* Function: extern_function @ 001027e0 */

int extern_function(int x)

{
 return x * 3;
}



/* Function: double_value @ 00102580 */

int double_value(int x)

{
 return x * 2;
}



/* Function: memop_memset @ 00102590 */

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



/* Function: memop_memcpy @ 001025c0 */

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



/* Function: memop_memmove @ 00102600 */

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



/* Function: memop_memcmp @ 00102630 */

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



/* Function: memop_bzero @ 00102660 */

int memop_bzero(void *buf,size_t n)

{
 if (buf != (void *)0x0) {
 memset(buf,0,n);
 return (int)*(byte *)buf;
 }
 return -1;
}



/* Function: memop_bcopy @ 00102680 */

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



/* Function: memop_unaligned_access @ 001026b0 */

int memop_unaligned_access(char *buf)

{
 /* Unresolved local var: int value@[???] */
 if (buf != (char *)0x0) {
 return *(int *)(buf + 1);
 }
 return -1;
}



/* Function: memop_memory_barrier @ 001026c0 */

int memop_memory_barrier(int *flag)

{
 /* Unresolved local var: int local@[???] */
 if (flag != (int *)0x0) {
 return *flag + *flag;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 001026e0 */

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
 puts(&DAT_00103779);
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



/* Function: main @ 001027c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}








/* Total functions decompiled: 63 */
