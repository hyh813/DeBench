/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/1/1_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

#include <stdio.h>
#include <setjmp.h>
#include <stdint.h>
#include <stdbool.h>

/* Type definitions for decompiled code */
typedef int (*code)(int);
typedef int (*_func_int_int)(int);
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint8_t byte;
typedef uint8_t undefined;
typedef unsigned int uint;
typedef unsigned long ulong;

/* Struct type for SIMD-like 16-byte aligned variables */
typedef struct {
    uint32_t _0_4_;
    uint32_t _4_4_;
    uint32_t _8_4_;
    uint32_t _12_4_;
} vec4_t;

/* Global data references */
extern int DAT_00102090[4];
extern int DAT_001020d0[5];
extern vec4_t _DAT_00102010;
extern uint32_t DAT_001020f0[12];
extern char DAT_00102675[];
extern char DAT_00102699[];
extern char DAT_001026bd[];

/* Jump buffer for non-local jumps */
static jmp_buf jump_buffer;

/* Global data definitions */
int DAT_00102090[4] = {10, 20, 30, 40};
int DAT_001020d0[5] = {1, 2, 3, 4, 5};
vec4_t _DAT_00102010 = {1, 2, 3, 4};
uint32_t DAT_001020f0[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
char DAT_00102675[] = "=== Testing Level 1 Control Flow ===";
char DAT_00102699[] = "=== Testing Level 2 Control Flow ===";
char DAT_001026bd[] = "=== Testing Level 3 Control Flow ===";


/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(int arg1)

{
 (*(code *)(undefined *)0x0)(arg1);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: sequential_ops @ 0010116c */

int sequential_ops(int a,int b,int c)

{
 /* Unresolved local var: int temp1@[???]
 Unresolved local var: int temp2@[???]
 Unresolved local var: int temp3@[???] */
 return (a + b) * 2 - c;
}



/* Function: single_if @ 00101174 */

int single_if(int x)

{
 return x << (0 < x);
}



/* Function: if_else @ 0010117e */

int if_else(int x)

{
 return (int)(0 < x);
}



/* Function: nested_if_2 @ 00101186 */

int nested_if_2(int a,int b)

{
 int iVar1;
 
 if (b < 0) {
 b = 0;
 }
 iVar1 = b + a;
 if (a < 1) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: nested_if_deep @ 00101196 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
 if (a < 1) {
 return 0;
 }
 if (b < 1) {
 return 1;
 }
 if (c < 1) {
 return 2;
 }
 if (0 < d) {
 return 0 < e | 4;
 }
 return 3;
}



/* Function: if_elseif_chain @ 001011c7 */

int if_elseif_chain(int x)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)x < 3) {
 iVar1 = x * 10 + 10;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 001011da */

int if_elseif_long(int x)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)x < 5) {
 iVar1 = x * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_small @ 001011ec */

int switch_small(int op)

{
 int iVar1;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 iVar1 = -1;
 if ((uint)op < 4) {
 iVar1 = *(int *)(&DAT_00102090 + (long)op * 4);
 }
 return iVar1;
}



/* Function: switch_large @ 00101204 */

int switch_large(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 10) {
 iVar1 = op * 10;
 }
 return iVar1;
}



/* Function: switch_default @ 00101216 */

int switch_default(int op)

{
 int iVar1;
 
 iVar1 = 0;
 if (op - 1U < 3) {
 iVar1 = (op - 1U) * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00101227 */

int switch_fallthrough(int op)

{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 iVar1 = 0;
 if (op != 1) {
 if (op != 2) {
 if (op != 3) {
 return -1;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + op * 2;
 }
 return iVar1 + op;
}



/* Function: loop_for_fixed @ 00101248 */

int loop_for_fixed(int n)

{
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 return (int)((ulong)(n - 2) * (ulong)(n - 1) >> 1) + n + -1;
 }
 return 0;
}



/* Function: loop_while @ 00101262 */

int loop_while(int x)

{
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int count@[???] */
 if (x != 0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = x + 9;
 x = x / 10;
 } while (0x12 < uVar2);
 return iVar1;
 }
 return 1;
}



/* Function: loop_dowhile @ 00101290 */

int loop_dowhile(int x)

{
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int count@[DW_OP_reg0(RAX)] */
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = x + 9;
 x = x / 10;
 } while (0x12 < uVar2);
 return iVar1;
}



/* Function: loop_nested @ 001012b4 */

int loop_nested(int m,int n)

{
 int iVar1;
 
 /* Unresolved local var: int total@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 n = 0;
 }
 iVar1 = 0;
 if (0 < m) {
 iVar1 = n * m;
 }
 return iVar1;
}



/* Function: loop_break @ 001012c4 */

int loop_break(int target)

{
 long lVar1;
 int *piVar2;
 
 /* Unresolved local var: int n@[???]
 Unresolved local var: int[5] arr@[???] */
 piVar2 = &DAT_001020d0;
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(RAX)] */
 if (*piVar2 == target) goto LAB_001012e3;
 lVar1 = lVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (lVar1 != 5);
 lVar1 = 0xffffffff;
LAB_001012e3:
 return (int)lVar1;
}



/* Function: loop_continue @ 001012e4 */

int loop_continue(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar8 = 1;
 uVar9 = 3;
 iVar1 = 4;
 uVar5 = 0;
 uVar7 = 0;
 do {
 uVar6 = uVar7;
 uVar4 = uVar5;
 uVar5 = ((int)(uVar8 << 0x1f) >> 0x1f & uVar8) + uVar4;
 uVar7 = ((int)(uVar9 << 0x1f) >> 0x1f & uVar9) + uVar6;
 uVar8 = uVar8 + 4;
 uVar9 = uVar9 + 4;
 iVar2 = iVar1 + -4;
 iVar3 = iVar1 + (n + 3U & 0xfffffffc);
 iVar1 = iVar2;
 } while (iVar3 != 8);
 uVar8 = -iVar2;
 uVar9 = -(uint)((int)(n - 1U ^ 0x80000000) < (int)(uVar8 ^ 0x80000000));
 uVar8 = -(uint)((int)(n - 1U ^ 0x80000000) < (int)((uVar8 | 2) ^ 0x80000000));
 return (~uVar8 & uVar7 | uVar6 & uVar8) + (~uVar9 & uVar5 | uVar4 & uVar9);
 }
 return 0;
}



/* Function: goto_forward @ 00101390 */

int goto_forward(int x)

{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 iVar1 = 1;
 if (0 < x) {
 iVar1 = x;
 }
 return iVar1 * x * 2;
}



/* Function: goto_backward @ 001013a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int goto_backward(int x)

{
 int iVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 uint uVar12;
 uint uVar15;
 uint uVar16;
 vec4_t auVar13;
 vec4_t auVar14;
 uint uVar17;
 uint uVar18;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int i@[???] */
 if (0 < x) {
 uVar5 = x - 1;
 auVar13._0_4_ = _DAT_00102010._0_4_;
 auVar13._4_4_ = _DAT_00102010._4_4_;
 auVar13._8_4_ = _DAT_00102010._8_4_;
 auVar13._12_4_ = _DAT_00102010._12_4_;
 iVar1 = 4;
 uVar7 = 1;
 uVar17 = 1;
 uVar10 = 1;
 uVar18 = 1;
 do {
 uVar11 = uVar18;
 uVar9 = uVar10;
 uVar8 = uVar17;
 uVar6 = uVar7;
 uVar7 = auVar13._0_4_ * uVar6;
 uVar10 = (uint)((auVar13._8_4_ & 0xffffffff) * (ulong)uVar9);
 uVar17 = auVar13._4_4_ * uVar8;
 uVar18 = auVar13._12_4_ * uVar11;
 auVar14._0_4_ = auVar13._0_4_ + 4;
 auVar14._4_4_ = auVar13._4_4_ + 4;
 auVar14._8_4_ = auVar13._8_4_ + 4;
 auVar14._12_4_ = auVar13._12_4_ + 4;
 iVar2 = iVar1 + -4;
 iVar4 = iVar1 + (x + 3U & 0xfffffffc);
 auVar13 = auVar14;
 iVar1 = iVar2;
 } while (iVar4 != 8);
 uVar3 = -iVar2;
 uVar12 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)(uVar3 ^ 0x80000000));
 uVar15 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 1) ^ 0x80000000));
 uVar16 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 2) ^ 0x80000000));
 uVar5 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 3) ^ 0x80000000));
 return (~uVar16 & uVar10 | uVar9 & uVar16) * (~uVar12 & uVar7 | uVar6 & uVar12) *
 (~uVar15 & uVar17 | uVar8 & uVar15) * (~uVar5 & uVar18 | uVar11 & uVar5);
 }
 return 1;
}



/* Function: ternary_op @ 0010146a */

int ternary_op(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: test_control_flow_l1 @ 00101472 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 puts(&DAT_00102675);
 printf("CF-L1-01 (sequential_ops): %d\n",0x15);
 printf("CF-L1-02 (single_if): %d\n",0x14);
 printf("CF-L1-02 (single_if): %d\n",0xfffffffb);
 printf("CF-L1-03 (if_else): %d\n",1);
 printf("CF-L1-03 (if_else): %d\n",0);
 printf("CF-L1-04 (nested_if_2): %d\n",0xf);
 printf("CF-L1-04 (nested_if_2): %d\n",10);
 printf("CF-L1-04 (nested_if_2): %d\n",0);
 printf("CF-L1-05 (nested_if_deep): %d\n",5);
 printf("CF-L1-06 (if_elseif_chain): %d\n",0x14);
 printf("CF-L1-07 (if_elseif_long): %d\n",400);
 printf("CF-L1-08 (switch_small): %d\n",0x32);
 printf("CF-L1-09 (switch_large): %d\n",0x46);
 printf("CF-L1-10 (switch_default): %d\n",0);
 printf("CF-L1-11 (switch_fallthrough): %d\n",0x15);
 printf("CF-L1-12 (loop_for_fixed): %d\n",0x2d);
 printf("CF-L1-13 (loop_while): %d\n",5);
 printf("CF-L1-14 (loop_dowhile): %d\n",4);
 printf("CF-L1-15 (loop_nested): %d\n",0xc);
 printf("CF-L1-16 (loop_break): %d\n",2);
 printf("CF-L1-16 (loop_break): %d\n",0xffffffff);
 printf("CF-L1-17 (loop_continue): %d\n",0x19);
 printf("CF-L1-18 (goto_forward): %d\n",0x32);
 printf("CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 printf("CF-L1-19 (goto_backward): %d\n",0x78);
 printf("CF-L1-20 (ternary_op): %d\n",10);
 printf("CF-L1-20 (ternary_op): %d\n",8);
 return;
}



/* Function: loop_multi_exit @ 0010166e */

int loop_multi_exit(int target)

{
 long lVar1;
 int iVar2;
 undefined4 *puVar3;
 long lVar4;
 
 /* Unresolved local var: int[3][4] matrix@[???] */
 puVar3 = &DAT_001020f0;
 iVar2 = 0;
 lVar4 = 0;
 do {
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg4(RSI)]
 Unresolved local var: int j@[DW_OP_reg0(RAX)] */
 if (puVar3[lVar1] == target) {
 return (int)lVar1 - iVar2;
 }
 lVar1 = lVar1 + 1;
 } while (lVar1 != 4);
 lVar4 = lVar4 + 1;
 iVar2 = iVar2 + -10;
 puVar3 = puVar3 + 4;
 } while (lVar4 != 3);
 return -1;
}



/* Function: infinite_loop @ 001016a3 */

int infinite_loop(int *flag)

{
 int iVar1;
 
 /* Unresolved local var: int count@[DW_OP_reg0(RAX)] */
 iVar1 = 0;
 do {
 if (*flag == 1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *flag = 1;
 return 0x3e9;
}



/* Function: multi_return @ 001016c1 */

int multi_return(int x)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 if (-1 < x) {
 iVar1 = -2;
 if ((uint)x < 0x33) {
 iVar1 = x + 1;
 if ((x & 1U) == 0) {
 iVar1 = x * 2;
 }
 }
 return iVar1;
 }
 return -1;
}



/* Function: conditional_return @ 001016e4 */

int conditional_return(int x)

{
 int iVar1;
 
 iVar1 = -x;
 if (0 < x) {
 iVar1 = x * 2;
 }
 return iVar1;
}



/* Function: duffs_device @ 001016f1 */

int duffs_device(int *dst,int *src,int n)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 
 /* Unresolved local var: int count@[???] */
 iVar3 = -1;
 if (0 < n) {
 uVar1 = n + 7U >> 3;
 uVar2 = uVar1;
 switch(n & 7) {
 case 1:
 goto switchD_00101717_caseD_1;
 case 2:
 goto switchD_00101717_caseD_2;
 case 3:
 goto switchD_00101717_caseD_3;
 case 4:
 goto switchD_00101717_caseD_4;
 case 5:
 goto switchD_00101717_caseD_5;
 case 6:
 goto switchD_00101717_caseD_6;
 case 7:
 goto switchD_00101717_caseD_7;
 }
 do {
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
 uVar2 = uVar1;
switchD_00101717_caseD_7:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00101717_caseD_6:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00101717_caseD_5:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00101717_caseD_4:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00101717_caseD_3:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00101717_caseD_2:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00101717_caseD_1:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
 uVar1 = uVar2 - 1;
 iVar3 = n;
 } while (1 < (int)uVar2);
 }
 return iVar3;
}



/* Function: loop_complex_cond @ 00101786 */

int loop_complex_cond(int x)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 
 /* Unresolved local var: int b@[DW_OP_reg5(RDI)]
 Unresolved local var: int a@[???]
 Unresolved local var: int c@[???] */
 if (x < 1) {
 iVar1 = 0;
 uVar2 = 0;
 }
 else {
 iVar1 = 0;
 uVar4 = x;
 uVar3 = 0;
 do {
 iVar1 = iVar1 + 2;
 x = uVar4 - 1;
 uVar2 = uVar3 + 1;
 if ((uVar4 < 2) || (x <= iVar1)) break;
 bVar5 = uVar3 < 9;
 uVar4 = x;
 uVar3 = uVar2;
 } while (bVar5);
 }
 return iVar1 + x + uVar2;
}



/* Function: loop_modify_var @ 001017b4 */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar3 = iVar2 + 2;
 if (iVar2 < 6) {
 iVar3 = iVar2;
 }
 iVar2 = iVar3 + 1;
 } while (iVar2 < n);
 return iVar1;
 }
 return 0;
}



/* Function: loop_external_state @ 001017d3 */

int loop_external_state(int *flag)

{
 int iVar1;
 
 /* Unresolved local var: int count@[DW_OP_reg0(RAX)] */
 iVar1 = 0;
 do {
 if (*flag != 0) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return 0x65;
}



/* Function: recursion_factorial @ 001017e7 */

int recursion_factorial(int n)

{
 int iVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 uint uVar12;
 uint uVar15;
 uint uVar16;
 vec4_t auVar13;
 vec4_t auVar14;
 uint uVar17;
 uint uVar18;
 
 iVar1 = 1;
 if (1 < n) {
 uVar5 = n - 2;
 if ((uint)n < 2) {
 uVar5 = 0;
 }
 auVar13._0_4_ = n;
 auVar13._4_4_ = n + -1;
 auVar13._8_4_ = n + -2;
 auVar13._12_4_ = n + -3;
 iVar1 = 4;
 uVar7 = 1;
 uVar17 = 1;
 uVar10 = 1;
 uVar18 = 1;
 do {
 uVar11 = uVar18;
 uVar9 = uVar10;
 uVar8 = uVar17;
 uVar6 = uVar7;
 uVar7 = auVar13._0_4_ * uVar6;
 uVar10 = (uint)((auVar13._8_4_ & 0xffffffff) * (ulong)uVar9);
 uVar17 = auVar13._4_4_ * uVar8;
 uVar18 = auVar13._12_4_ * uVar11;
 auVar14._0_4_ = auVar13._0_4_ + -4;
 auVar14._4_4_ = auVar13._4_4_ + -4;
 auVar14._8_4_ = auVar13._8_4_ + -4;
 auVar14._12_4_ = auVar13._12_4_ + -4;
 iVar2 = iVar1 + -4;
 iVar4 = iVar1 + (uVar5 + 4 & 0xfffffffc);
 auVar13 = auVar14;
 iVar1 = iVar2;
 } while (iVar4 != 8);
 uVar3 = -iVar2;
 uVar12 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)(uVar3 ^ 0x80000000));
 uVar15 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 1) ^ 0x80000000));
 uVar16 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 2) ^ 0x80000000));
 uVar5 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 3) ^ 0x80000000));
 iVar1 = (~uVar16 & uVar10 | uVar9 & uVar16) * (~uVar12 & uVar7 | uVar6 & uVar12) *
 (~uVar15 & uVar17 | uVar8 & uVar15) * (~uVar5 & uVar18 | uVar11 & uVar5);
 }
 return iVar1;
}



/* Function: tail_recursion @ 001018c0 */

int tail_recursion(int n,int acc)

{
 uint uVar1;
 int iVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 int iVar12;
 uint uVar13;
 int iVar14;
 uint uVar15;
 int iVar16;
 uint uVar17;
 uint uVar18;
 
 if (1 < n) {
 uVar6 = n - 2;
 if ((uint)n < 2) {
 uVar6 = 0;
 }
 iVar12 = n + -1;
 iVar14 = n + -2;
 iVar16 = n + -3;
 uVar17 = 1;
 uVar1 = 1;
 uVar18 = 1;
 iVar2 = 4;
 do {
 uVar10 = uVar18;
 uVar9 = uVar1;
 uVar8 = uVar17;
 uVar7 = acc;
 acc = uVar7 * n;
 uVar1 = uVar9 * iVar14;
 uVar17 = uVar8 * iVar12;
 uVar18 = uVar10 * iVar16;
 n = n + -4;
 iVar12 = iVar12 + -4;
 iVar14 = iVar14 + -4;
 iVar16 = iVar16 + -4;
 iVar3 = iVar2 + -4;
 iVar5 = iVar2 + (uVar6 + 4 & 0xfffffffc);
 iVar2 = iVar3;
 } while (iVar5 != 8);
 uVar4 = -iVar3;
 uVar11 = -(uint)((int)(uVar6 ^ 0x80000000) < (int)(uVar4 ^ 0x80000000));
 uVar13 = -(uint)((int)(uVar6 ^ 0x80000000) < (int)((uVar4 | 1) ^ 0x80000000));
 uVar15 = -(uint)((int)(uVar6 ^ 0x80000000) < (int)((uVar4 | 2) ^ 0x80000000));
 uVar6 = -(uint)((int)(uVar6 ^ 0x80000000) < (int)((uVar4 | 3) ^ 0x80000000));
 acc = (~uVar15 & uVar1 | uVar9 & uVar15) * (~uVar11 & acc | uVar7 & uVar11) *
 (~uVar13 & uVar17 | uVar8 & uVar13) * (~uVar6 & uVar18 | uVar10 & uVar6);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00101998 */

int indirect_recursion_a(int n,int depth)

{
 int iVar1;
 
 if (0 < depth) {
 iVar1 = depth + 2;
 do {
 if ((n & 1U) == 0) {
 if (iVar1 == 3) {
 return n / 2;
 }
 n = n / 2 + 1;
 }
 else {
 if (iVar1 == 3) {
 return n * 3 + 1;
 }
 n = n * 3 + 2;
 }
 iVar1 = iVar1 + -2;
 } while (2 < iVar1);
 }
 return n;
}



/* Function: call_func_ptr @ 001019d3 */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x001019d8. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 001019da */

int call_func_ptr_array(int idx,int x)

{
 int iVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 uint uVar12;
 uint uVar15;
 uint uVar16;
 vec4_t auVar13;
 vec4_t auVar14;
 uint uVar17;
 uint uVar18;
 
 switch(idx) {
 case 0:
 return x * 2;
 case 1:
 return x * 3;
 case 2:
 break;
 default:
 return -1;
 }
 iVar1 = 1;
 if (1 < x) {
 uVar5 = x - 2;
 if ((uint)x < 2) {
 uVar5 = 0;
 }
 auVar13._4_4_ = x + -1;
 auVar13._0_4_ = x;
 auVar13._8_4_ = x + -2;
 auVar13._12_4_ = x + -3;
 iVar1 = 4;
 uVar7 = 1;
 uVar17 = 1;
 uVar10 = 1;
 uVar18 = 1;
 do {
 uVar11 = uVar18;
 uVar9 = uVar10;
 uVar8 = uVar17;
 uVar6 = uVar7;
 uVar7 = auVar13._0_4_ * uVar6;
 uVar10 = (uint)((auVar13._8_4_ & 0xffffffff) * (ulong)uVar9);
 uVar17 = auVar13._4_4_ * uVar8;
 uVar18 = auVar13._12_4_ * uVar11;
 auVar14._0_4_ = auVar13._0_4_ + -4;
 auVar14._4_4_ = auVar13._4_4_ + -4;
 auVar14._8_4_ = auVar13._8_4_ + -4;
 auVar14._12_4_ = auVar13._12_4_ + -4;
 iVar2 = iVar1 + -4;
 iVar4 = iVar1 + (uVar5 + 4 & 0xfffffffc);
 auVar13 = auVar14;
 iVar1 = iVar2;
 } while (iVar4 != 8);
 uVar3 = -iVar2;
 uVar12 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)(uVar3 ^ 0x80000000));
 uVar15 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 1) ^ 0x80000000));
 uVar16 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 2) ^ 0x80000000));
 uVar5 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 3) ^ 0x80000000));
 iVar1 = (~uVar16 & uVar10 | uVar9 & uVar16) * (~uVar12 & uVar7 | uVar6 & uVar12) *
 (~uVar15 & uVar17 | uVar8 & uVar15) * (~uVar5 & uVar18 | uVar11 & uVar5);
 }
 return iVar1;
}



/* Function: double_value @ 001019f3 */

int double_value(int x)

{
 return x * 2;
}



/* Function: triple_value @ 001019f7 */

int triple_value(int x)

{
 return x * 3;
}



/* Function: call_virtual_func @ 001019fb */

int call_virtual_func(void *obj,int x)

{
 return x * 2;
}



/* Function: process_with_callback @ 001019ff */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 ulong uVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar3 = 0;
 }
 else {
 uVar2 = 0;
 iVar3 = 0;
 do {
 iVar1 = (*cb)(arr[uVar2]);
 iVar3 = iVar3 + iVar1;
 uVar2 = uVar2 + 1;
 } while ((uint)n != uVar2);
 }
 return iVar3;
}



/* Function: test_control_flow_l2 @ 00101a38 */

/* WARNING: Variable defined which should be unmapped: count */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 int iVar1;
 uint uVar2;
 undefined4 *puVar3;
 long lVar4;
 uint uVar5;
 uint uVar6;
 long lVar7;
 ulong uVar8;
 int local_58 [8];
 int local_38 [8];
 int count;
 
 /* Unresolved local var: int flag@[???]
 Unresolved local var: int[8] src@[???]
 Unresolved local var: int[8] dst@[???]
 Unresolved local var: int ext_flag@[???]
 Unresolved local var: int[5] arr@[???] */
 puts(&DAT_00102699);
 puVar3 = &DAT_001020f0;
 iVar1 = 0;
 lVar4 = 0;
 do {
 lVar7 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg1(RDX)]
 Unresolved local var: int j@[DW_OP_reg4(RSI)] */
 if (puVar3[lVar7] == 7) {
 uVar8 = (ulong)(uint)((int)lVar7 - iVar1);
 goto LAB_00101a82;
 }
 lVar7 = lVar7 + 1;
 } while (lVar7 != 4);
 lVar4 = lVar4 + 1;
 iVar1 = iVar1 + -10;
 puVar3 = puVar3 + 4;
 } while (lVar4 != 3);
 uVar8 = 0xffffffff;
LAB_00101a82:
 iVar1 = 0;
 printf("CF-L2-01 (loop_multi_exit): %d\n",uVar8);
 do {
 /* Unresolved local var: int count@[DW_OP_reg3(RBX)] */
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 uVar6 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 uVar5 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 local_38[4] = 5;
 local_38[5] = 6;
 local_38[6] = 7;
 local_38[7] = 8;
 local_38[0] = 1;
 local_38[1] = 2;
 local_38[2] = 3;
 local_38[3] = 4;
 uVar2 = duffs_device(local_58,local_38,8);
 printf("CF-L2-05 (duffs_device): %d\n",(ulong)uVar2);
 iVar1 = 0xb;
 do {
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int c@[???] */
 uVar2 = uVar5 - 8;
 uVar5 = uVar5 + 2;
 if (iVar1 - 2U <= uVar2) break;
 uVar6 = uVar6 + 1;
 iVar1 = iVar1 + -1;
 } while (uVar6 < 9);
 iVar1 = 0;
 printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar5);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 do {
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n",0x65);
 printf("CF-L2-09 (recursion_factorial): %d\n",0x78);
 printf("CF-L2-10 (tail_recursion): %d\n",0x78);
 printf("CF-L2-11 (indirect_recursion): %d\n",3);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}



/* Function: non_local_jump @ 00101c5d */

int non_local_jump(int x)

{
 int iVar1;
 int iVar2;
 
 iVar1 = setjmp(jump_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 if (x < 0) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
 }
 if (100 < (uint)x) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 iVar2 = x * 2;
 }
 return iVar2;
}



/* Function: cpp_exception @ 00101ca8 */

int cpp_exception(int x)

{
 int iVar1;
 int iVar2;
 
 iVar2 = -2;
 if (x < 0x65) {
 iVar2 = x * 2;
 }
 iVar1 = -1;
 if (-1 < x) {
 iVar1 = iVar2;
 }
 return iVar1;
}



/* Function: large_jump_table @ 00101cc1 */

int large_jump_table(int op,int a,int b)

{
 switch(op) {
 case 0:
 return a + b;
 case 1:
 return a - b;
 case 2:
 return a * b;
 case 3:
 break;
 case 4:
 if (b == 0) {
 return 0;
 }
 return a % b;
 case 5:
 return a & b;
 case 6:
 return a | b;
 case 7:
 return a ^ b;
 case 8:
 return a << ((byte)b & 0x1f);
 case 9:
 return a >> ((byte)b & 0x1f);
 default:
 return -1;
 }
 if (b == 0) {
 return 0;
 }
 return a / b;
}



/* Function: op_add @ 00101cdc */

int op_add(int a,int b)

{
 return a + b;
}



/* Function: op_sub @ 00101ce0 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 00101ce5 */

int op_mul(int a,int b)

{
 return a * b;
}



/* Function: op_div @ 00101ceb */

int op_div(int a,int b)

{
 if (b != 0) {
 return a / b;
 }
 return 0;
}



/* Function: op_mod @ 00101cf8 */

int op_mod(int a,int b)

{
 if (b != 0) {
 return a % b;
 }
 return 0;
}



/* Function: op_and @ 00101d07 */

int op_and(int a,int b)

{
 return a & b;
}



/* Function: op_or @ 00101d0c */

int op_or(int a,int b)

{
 return a | b;
}



/* Function: op_xor @ 00101d11 */

int op_xor(int a,int b)

{
 return a ^ b;
}



/* Function: op_shl @ 00101d16 */

int op_shl(int a,int b)

{
 return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 00101d1d */

int op_shr(int a,int b)

{
 return a >> ((byte)b & 0x1f);
}



/* Function: conditional_func_ptr @ 00101d24 */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
 code *UNRECOVERED_JUMPTABLE;
 code *pcVar2;
 
 /* Unresolved local var: _func_int_int * func@[???] */
 pcVar2 = recursion_factorial;
 if (mode == 1) {
 pcVar2 = triple_value;
 }
 UNRECOVERED_JUMPTABLE = double_value;
 if (mode != 0) {
 UNRECOVERED_JUMPTABLE = pcVar2;
 }
 /* WARNING: Could not recover jumptable at 0x00101d48. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*UNRECOVERED_JUMPTABLE)(x);
 return iVar1;
}



/* Function: state_machine @ 00101d4a */

int state_machine(int event,int state)

{
 int iVar1;
 
 switch(state) {
 case 0:
 return (uint)(event == 1);
 case 1:
 iVar1 = (uint)(event == 99) * 2 + 1;
 if (event == 2) {
 iVar1 = 2;
 }
 return iVar1;
 case 2:
 break;
 case 3:
 return (uint)(event != 0) * 3;
 default:
 state = 3;
 }
 return state;
}



/* Function: fsm_func_table @ 00101d90 */

int fsm_func_table(int event,int state)

{
 int iVar1;
 
 switch(state) {
 case 0:
 return (int)(event == 1);
 case 1:
 break;
 case 2:
 return 2;
 case 3:
 return (uint)(event != 0) * 3;
 default:
 return 3;
 }
 iVar1 = (uint)(event == 99) * 2 + 1;
 if (event == 2) {
 iVar1 = 2;
 }
 return iVar1;
}



/* Function: state_idle @ 00101da7 */

int state_idle(int event)

{
 return (int)(event == 1);
}



/* Function: state_processing @ 00101db0 */

int state_processing(int event)

{
 int iVar1;
 
 iVar1 = (uint)(event == 99) * 2 + 1;
 if (event == 2) {
 iVar1 = 2;
 }
 return iVar1;
}



/* Function: state_done @ 00101dc3 */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 00101dc9 */

int state_error(int event)

{
 return (uint)(event != 0) * 3;
}



/* Function: computed_goto @ 00101dd4 */

int computed_goto(int *labels,int idx)

{
 switch(idx) {
 case 0:
 return 0;
 case 1:
 return 10;
 case 2:
 return 0x14;
 case 3:
 return 0x1e;
 default:
 return -1;
 }
}



/* Function: obfuscated_cf @ 00101e00 */

int obfuscated_cf(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg5(RDI)] */
 return x * 2;
}



/* Function: opaque_predicate @ 00101e04 */

int opaque_predicate(int x)

{
 /* Unresolved local var: int cond@[???] */
 return x * 2;
}



/* Function: overlapped_code @ 00101e08 */

int overlapped_code(int x)

{
 if ((x & 1U) == 0) {
 return x / 2;
 }
 return x * 3 + 1;
}



/* Function: test_control_flow_l3 @ 00101e1e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 uint uVar1;
 int *labels;
 
 /* Unresolved local var: int[4] labels@[???] */
 puts(&DAT_001026bd);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
 uVar1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto(NULL, 2);
 printf("CF-L3-07 (computed_goto): %d\n",(ulong)uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 00101f23 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 72 */
