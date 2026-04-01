/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_clang_O2_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <string.h>

typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char undefined1;
typedef int (*_func_int_int)(int);
typedef void (*code)(void);

/* NEON vector type for 128-bit registers */
typedef union {
 undefined1 bytes[16];
 int ints[4];
 struct {
  int _0_4_;
  int _4_4_;
  int _8_4_;
  int _12_4_;
 };
} vec128;



/* Ghidra decompiler macros */
#define CONCAT11(a,b) ((int)(a) | ((int)(b) << 8))
#define CONCAT12(a,b) ((int)(a) | ((int)(b) << 16))
#define CONCAT13(a,b) ((int)(a) | ((int)(b) << 24))
#define NEON_ext(a,b,c,d) (a)

/* External data declarations */
int DAT_00101a00[4] = {10, 20, 30, 50};
int DAT_001019ac[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int DAT_0010197c[12] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1};
char DAT_00101f65[] = "=== Control Flow Level 1 Tests ===";
char DAT_00101f89[] = "=== Control Flow Level 2 Tests ===";
char DAT_00101fad[] = "=== Control Flow Level 3 Tests ===";
static jmp_buf jump_buffer;

/* Global variables for CRT */
static char completed_0 = '\0';

/* CRT function declarations - already provided by standard headers */

/* CRT stub function _init removed by preprocessor */

/* CRT stub implementations */
static void __cxa_finalize(void *d) { (void)d; }
static void deregister_tm_clones(void) { }
static void register_tm_clones(void) { }
static void call_weak_fn(void) { }
static void __stack_chk_fail(void) { }

/* Function: FUN_00100880 @ 00100880 */

void FUN_00100880(void)

{
 /* Stub function - null call removed */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: sequential_ops @ 00100a54 */

int sequential_ops(int a,int b,int c)

{
 /* Unresolved local var: int temp1@[???]
 Unresolved local var: int temp2@[???]
 Unresolved local var: int temp3@[???] */
 return (b + a) * 2 - c;
}



/* Function: single_if @ 00100a64 */

int single_if(int x)

{
 return x << (0 < x);
}



/* Function: if_else @ 00100a74 */

int if_else(int x)

{
 return (int)(0 < x);
}



/* Function: nested_if_2 @ 00100a80 */

int nested_if_2(int a,int b)

{
 int iVar1;
 
 iVar1 = (b & (b >> 0x1f ^ 0xffffffffU)) + a;
 if (a < 1) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: nested_if_deep @ 00100a94 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
 int iVar1;
 
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
 iVar1 = 4;
 if (0 < e) {
 iVar1 = 5;
 }
 return iVar1;
 }
 return 3;
}



/* Function: if_elseif_chain @ 00100ae4 */

int if_elseif_chain(int x)

{
 int iVar1;
 
 iVar1 = x * 10 + 10;
 if (2 < (uint)x) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 00100afc */

int if_elseif_long(int x)

{
 int iVar1;
 
 iVar1 = x * 100 + 100;
 if (4 < (uint)x) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_small @ 00100b14 */

int switch_small(int op)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 if ((uint)op < 4) {
 return *(int *)(&DAT_00101a00 + (long)op * 4);
 }
 return -1;
}



/* Function: switch_large @ 00100b34 */

int switch_large(int op)

{
 int iVar1;
 
 iVar1 = op * 10;
 if (9 < (uint)op) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_default @ 00100b48 */

int switch_default(int op)

{
 int iVar1;
 
 iVar1 = (op - 1U) * 100 + 100;
 if (2 < op - 1U) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00100b64 */

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



/* Function: loop_for_fixed @ 00100b98 */

int loop_for_fixed(int n)

{
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 return (int)((ulong)(n - 1) * (ulong)(n - 2) >> 1) + n + -1;
 }
 return 0;
}



/* Function: loop_while @ 00100bc0 */

int loop_while(int x)

{
 uint uVar1;
 int iVar2;
 
 /* Unresolved local var: int count@[???] */
 if (x != 0) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 uVar1 = x + 9;
 x = x / 10;
 } while (0x12 < uVar1);
 return iVar2;
 }
 return 1;
}



/* Function: loop_dowhile @ 00100c04 */

int loop_dowhile(int x)

{
 uint uVar1;
 int iVar2;
 
 /* Unresolved local var: int count@[???] */
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 uVar1 = x + 9;
 x = x / 10;
 } while (0x12 < uVar1);
 return iVar2;
}



/* Function: loop_nested @ 00100c3c */

int loop_nested(int m,int n)

{
 int iVar1;
 
 /* Unresolved local var: int total@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 n = 0;
 }
 iVar1 = n * m;
 if (m < 1) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: loop_break @ 00100c54 */

int loop_break(int target)

{
 int iVar1;
 
 /* Unresolved local var: int n@[???]
 Unresolved local var: int[5] arr@[???]
 Unresolved local var: int i@[???] */
 iVar1 = 0;
 switch(target) {
 case 10:
 break;
 default:
 return -1;
 case 0x14:
 return 1;
 case 0x1e:
 return 2;
 case 0x28:
 return 3;
 case 0x32:
 iVar1 = 4;
 }
 return iVar1;
}



/* Function: loop_continue @ 00100ca4 */

int loop_continue(int n)

{
 uint uVar1;
 uint uVar2;
 ulong uVar3;
 ulong uVar4;
 ulong uVar5;
 ulong uVar6;
 ulong uVar7;
 ulong uVar8;
 uint uVar9;
 int iVar10;
 int iVar11;
 ulong uVar12;
 ulong uVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 if ((uint)n < 8) {
 iVar10 = 0;
 uVar9 = 1;
 }
 else {
 uVar1 = n & 0xfffffff8;
 iVar10 = 0;
 iVar11 = 0;
 uVar9 = uVar1 | 1;
 uVar13 = 0x400000003;
 uVar12 = 0x200000001;
 iVar14 = 0;
 iVar15 = 0;
 uVar2 = uVar1;
 do {
 uVar3 = uVar12 >> 8;
 uVar4 = uVar12 >> 0x10;
 uVar5 = uVar12 >> 0x18;
 uVar6 = uVar13 >> 8;
 uVar7 = uVar13 >> 0x10;
 uVar8 = uVar13 >> 0x18;
 uVar2 = uVar2 - 8;
 iVar16 = (int)uVar12 + 4;
 iVar17 = (int)uVar13 + 4;
 uVar12 = (ulong)((int)uVar12 + 8);
 uVar13 = (ulong)((int)uVar13 + 8);
 iVar10 = (CONCAT13((char)uVar5,CONCAT12((char)uVar4,CONCAT11((char)uVar3,0xff))) & 0xffffff01)
 + iVar10;
 iVar11 = (CONCAT13((char)uVar8,CONCAT12((char)uVar7,CONCAT11((char)uVar6,0xff))) & 0xffffff01)
 + iVar11;
 iVar14 = (CONCAT13((char)((uint)iVar16 >> 0x18),
 CONCAT12((char)((uint)iVar16 >> 0x10),
 CONCAT11((char)((uint)iVar16 >> 8),0xff))) & 0xffffff01) + iVar14;
 iVar15 = (CONCAT13((char)((uint)iVar17 >> 0x18),
 CONCAT12((char)((uint)iVar17 >> 0x10),
 CONCAT11((char)((uint)iVar17 >> 8),0xff))) & 0xffffff01) + iVar15;
 } while (uVar2 != 0);
 iVar10 = iVar14 + iVar10 + iVar15 + iVar11;
 if (uVar1 == n) {
 return iVar10;
 }
 }
 do {
 uVar1 = -(uVar9 & 1) & uVar9;
 uVar9 = uVar9 + 1;
 iVar10 = uVar1 + iVar10;
 } while (n + 1U != uVar9);
 return iVar10;
}



/* Function: goto_forward @ 00100d50 */

int goto_forward(int x)

{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 iVar1 = x;
 if (x < 2) {
 iVar1 = 1;
 }
 return x * iVar1 * 2;
}



/* Function: goto_backward @ 00100d64 */

int goto_backward(int x)

{
 uint uVar1;
 uint uVar2;
 vec128 auVar3;
 uint uVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 vec128 auVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
 int iVar20;
 int iVar21;
 
 /* Unresolved local var: int i@[???]
 Unresolved local var: int result@[???] */
 if (x < 1) {
 return 1;
 }
 if ((uint)x < 8) {
 uVar4 = 1;
 iVar5 = 1;
 }
 else {
 uVar1 = x & 0xfffffff8;
 iVar5 = 1;
 iVar6 = 1;
 iVar7 = 1;
 iVar8 = 1;
 uVar4 = uVar1 | 1;
 iVar16 = 3;
 iVar17 = 4;
 iVar14 = 1;
 iVar15 = 2;
 iVar10 = 1;
 iVar11 = 1;
 iVar12 = 1;
 iVar13 = 1;
 uVar2 = uVar1;
 do {
 iVar18 = iVar14 + 4;
 iVar19 = iVar15 + 4;
 iVar20 = iVar16 + 4;
 iVar21 = iVar17 + 4;
 uVar2 = uVar2 - 8;
 iVar5 = iVar14 * iVar5;
 iVar6 = iVar15 * iVar6;
 iVar7 = iVar16 * iVar7;
 iVar8 = iVar17 * iVar8;
 iVar14 = iVar14 + 8;
 iVar15 = iVar15 + 8;
 iVar16 = iVar16 + 8;
 iVar17 = iVar17 + 8;
 iVar10 = iVar18 * iVar10;
 iVar11 = iVar19 * iVar11;
 iVar12 = iVar20 * iVar12;
 iVar13 = iVar21 * iVar13;
 } while (uVar2 != 0);
 iVar10 = iVar10 * iVar5;
 iVar11 = iVar11 * iVar6;
 auVar9._4_4_ = iVar11;
 auVar9._0_4_ = iVar10;
 auVar9._8_4_ = iVar12 * iVar7;
 auVar9._12_4_ = iVar13 * iVar8;
 auVar3._4_4_ = iVar11;
 auVar3._0_4_ = iVar10;
 auVar3._8_4_ = iVar12 * iVar7;
 auVar3._12_4_ = iVar13 * iVar8;
 auVar9 = NEON_ext(auVar9,auVar3,8,1);
 iVar5 = iVar10 * auVar9._0_4_ * iVar11 * auVar9._4_4_;
 if (uVar1 == x) {
 return iVar5;
 }
 }
 do {
 iVar5 = uVar4 * iVar5;
 uVar4 = uVar4 + 1;
 } while (x + 1U != uVar4);
 return iVar5;
}



/* Function: ternary_op @ 00100e00 */

int ternary_op(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: test_control_flow_l1 @ 00100e0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 puts(DAT_00101f65);
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



/* Function: loop_multi_exit @ 00100fd8 */

int loop_multi_exit(int target)

{
 uint uVar1;
 ulong uVar2;
 
 /* Unresolved local var: int[3][4] matrix@[???]
 Unresolved local var: int i@[???]
 Unresolved local var: int j@[???] */
 uVar1 = target - 1;
 if (uVar1 < 0xc) {
 uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
 return *(int *)(&DAT_001019ac + uVar2) + *(int *)(&DAT_0010197c + uVar2);
 }
 return -1;
}



/* Function: infinite_loop @ 00101010 */

int infinite_loop(int *flag)

{
 int iVar1;
 
 /* Unresolved local var: int count@[???] */
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



/* Function: multi_return @ 0010103c */

int multi_return(int x)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int temp@[???] */
 if (-1 < x) {
 iVar2 = x << 1;
 if ((x & 1U) != 0) {
 iVar2 = x + 1;
 }
 iVar1 = -2;
 if ((uint)x < 0x33) {
 iVar1 = iVar2;
 }
 return iVar1;
 }
 return -1;
}



/* Function: conditional_return @ 00101064 */

int conditional_return(int x)

{
 int iVar1;
 
 iVar1 = x << 1;
 if (x < 1) {
 iVar1 = -x;
 }
 return iVar1;
}



/* Function: duffs_device @ 00101074 */

int duffs_device(int *dst,int *src,int n)

{
 int *piVar1;
 int *piVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 
 /* Unresolved local var: int count@[???] */
 iVar5 = -1;
 if (0 < n) {
 uVar3 = n + 7U >> 3;
 piVar1 = dst;
 piVar2 = src;
 uVar4 = uVar3;
 switch(n & 7) {
 case 1:
 goto switchD_001010a0_caseD_1;
 case 2:
 goto switchD_001010a0_caseD_2;
 case 3:
 goto switchD_001010a0_caseD_3;
 case 4:
 goto switchD_001010a0_caseD_4;
 case 5:
 goto switchD_001010a0_caseD_5;
 case 6:
 goto switchD_001010a0_caseD_6;
 case 7:
 goto switchD_001010a0_caseD_7;
 }
 do {
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
 uVar4 = uVar3;
switchD_001010a0_caseD_7:
 src = piVar2 + 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
switchD_001010a0_caseD_6:
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
switchD_001010a0_caseD_5:
 src = piVar2 + 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
switchD_001010a0_caseD_4:
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
switchD_001010a0_caseD_3:
 src = piVar2 + 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
switchD_001010a0_caseD_2:
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
switchD_001010a0_caseD_1:
 src = piVar2 + 1;
 uVar3 = uVar4 - 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
 iVar5 = n;
 } while (uVar3 != 0 && 0 < (int)uVar4);
 }
 return iVar5;
}



/* Function: loop_complex_cond @ 001010f8 */

int loop_complex_cond(int x)

{
 bool bVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 
 /* Unresolved local var: int b@[DW_OP_reg0(x0)]
 Unresolved local var: int a@[???]
 Unresolved local var: int c@[???] */
 if (x < 1) {
 iVar3 = 0;
 uVar4 = 0;
 }
 else {
 iVar3 = 0;
 uVar2 = x;
 uVar5 = 0;
 do {
 iVar3 = iVar3 + 2;
 x = uVar2 - 1;
 uVar4 = uVar5 + 1;
 if ((uVar2 < 2) || (x <= iVar3)) break;
 bVar1 = uVar5 < 9;
 uVar2 = x;
 uVar5 = uVar4;
 } while (bVar1);
 }
 return x + iVar3 + uVar4;
}



/* Function: loop_modify_var @ 0010114c */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar3 = 0;
 iVar2 = 0;
 do {
 iVar1 = iVar3 + 2;
 if (iVar3 < 6) {
 iVar1 = iVar3;
 }
 iVar2 = iVar3 + iVar2;
 iVar3 = iVar1 + 1;
 } while (iVar3 < n);
 return iVar2;
 }
 return 0;
}



/* Function: loop_external_state @ 0010118c */

int loop_external_state(int *flag)

{
 int iVar1;
 
 /* Unresolved local var: int count@[???] */
 iVar1 = 0;
 do {
 if (*flag != 0) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return 0x65;
}



/* Function: recursion_factorial @ 001011ac */

int recursion_factorial(int n)

{
 bool bVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 vec128 auVar5;
 uint uVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 vec128 auVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
 int iVar20;
 int iVar21;
 int iVar22;
 
 if (n < 2) {
 return 1;
 }
 iVar7 = 0;
 if (1 < (uint)n) {
 iVar7 = n + -2;
 }
 uVar2 = iVar7 + 1;
 if (uVar2 < 8) {
 iVar7 = 1;
 uVar6 = n;
 }
 else {
 uVar3 = uVar2 & 0xfffffff8;
 iVar7 = 1;
 iVar8 = 1;
 iVar9 = 1;
 iVar10 = 1;
 uVar6 = n - uVar3;
 iVar12 = n + -1;
 iVar13 = n + -2;
 iVar14 = n + -3;
 iVar15 = 1;
 iVar16 = 1;
 iVar17 = 1;
 iVar18 = 1;
 uVar4 = uVar3;
 do {
 iVar19 = n + -4;
 iVar20 = iVar12 + -4;
 iVar21 = iVar13 + -4;
 iVar22 = iVar14 + -4;
 uVar4 = uVar4 - 8;
 iVar7 = n * iVar7;
 iVar8 = iVar12 * iVar8;
 iVar9 = iVar13 * iVar9;
 iVar10 = iVar14 * iVar10;
 n = n + -8;
 iVar12 = iVar12 + -8;
 iVar13 = iVar13 + -8;
 iVar14 = iVar14 + -8;
 iVar15 = iVar19 * iVar15;
 iVar16 = iVar20 * iVar16;
 iVar17 = iVar21 * iVar17;
 iVar18 = iVar22 * iVar18;
 } while (uVar4 != 0);
 iVar15 = iVar15 * iVar7;
 iVar16 = iVar16 * iVar8;
 auVar11._4_4_ = iVar16;
 auVar11._0_4_ = iVar15;
 auVar11._8_4_ = iVar17 * iVar9;
 auVar11._12_4_ = iVar18 * iVar10;
 auVar5._4_4_ = iVar16;
 auVar5._0_4_ = iVar15;
 auVar5._8_4_ = iVar17 * iVar9;
 auVar5._12_4_ = iVar18 * iVar10;
 auVar11 = NEON_ext(auVar11,auVar5,8,1);
 iVar7 = iVar15 * auVar11._0_4_ * iVar16 * auVar11._4_4_;
 if (uVar2 == uVar3) {
 return iVar7;
 }
 }
 do {
 iVar7 = uVar6 * iVar7;
 bVar1 = 2 < uVar6;
 uVar6 = uVar6 - 1;
 } while (bVar1);
 return iVar7;
}



/* Function: tail_recursion @ 00101254 */

int tail_recursion(int n,int acc)

{
 bool bVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 vec128 auVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar12;
 int iVar13;
 int iVar14;
 vec128 auVar11;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
 int iVar20;
 int iVar21;
 
 if (1 < n) {
 iVar10 = 0;
 if (1 < (uint)n) {
 iVar10 = n + -2;
 }
 uVar2 = iVar10 + 1;
 if (7 < uVar2) {
 iVar7 = 1;
 iVar8 = 1;
 iVar9 = 1;
 uVar3 = uVar2 & 0xfffffff8;
 iVar14 = 1;
 iVar10 = 1;
 iVar12 = 1;
 iVar13 = 1;
 uVar4 = n - uVar3;
 iVar15 = n + -1;
 iVar16 = n + -2;
 iVar17 = n + -3;
 uVar5 = uVar3;
 do {
 iVar18 = n + -4;
 iVar19 = iVar15 + -4;
 iVar20 = iVar16 + -4;
 iVar21 = iVar17 + -4;
 uVar5 = uVar5 - 8;
 acc = acc * n;
 iVar7 = iVar7 * iVar15;
 iVar8 = iVar8 * iVar16;
 iVar9 = iVar9 * iVar17;
 n = n + -8;
 iVar15 = iVar15 + -8;
 iVar16 = iVar16 + -8;
 iVar17 = iVar17 + -8;
 iVar10 = iVar10 * iVar18;
 iVar12 = iVar12 * iVar19;
 iVar13 = iVar13 * iVar20;
 iVar14 = iVar14 * iVar21;
 } while (uVar5 != 0);
 iVar10 = iVar10 * acc;
 iVar12 = iVar12 * iVar7;
 auVar11._4_4_ = iVar12;
 auVar11._0_4_ = iVar10;
 auVar11._8_4_ = iVar13 * iVar8;
 auVar11._12_4_ = iVar14 * iVar9;
 auVar6._4_4_ = iVar12;
 auVar6._0_4_ = iVar10;
 auVar6._8_4_ = iVar13 * iVar8;
 auVar6._12_4_ = iVar14 * iVar9;
 auVar11 = NEON_ext(auVar11,auVar6,8,1);
 acc = iVar10 * auVar11._0_4_ * iVar12 * auVar11._4_4_;
 n = uVar4;
 if (uVar2 == uVar3) {
 return acc;
 }
 }
 do {
 acc = acc * n;
 bVar1 = 2 < (uint)n;
 n = n - 1;
 } while (bVar1);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 001012f0 */

int indirect_recursion_a(int n,int depth)

{
 int iVar1;
 
 if (0 < depth) {
 iVar1 = depth + 2;
 do {
 if ((n & 1U) == 0) {
 if (n < 0) {
 n = n + 1;
 }
 if (iVar1 == 3) {
 return n >> 1;
 }
 n = (n >> 1) + 1;
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



/* Function: call_func_ptr @ 00101348 */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101350. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 00101354 */

int call_func_ptr_array(int idx,int x)

{
 bool bVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 vec128 auVar5;
 uint uVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 vec128 auVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
 int iVar20;
 int iVar21;
 int iVar22;
 
 switch(idx) {
 case 0:
 return x << 1;
 case 1:
 return x * 3;
 case 2:
 break;
 default:
 return -1;
 }
 if (x < 2) {
 return 1;
 }
 iVar7 = 0;
 if (1 < (uint)x) {
 iVar7 = x + -2;
 }
 uVar2 = iVar7 + 1;
 if (uVar2 < 8) {
 iVar7 = 1;
 uVar6 = x;
 }
 else {
 uVar3 = uVar2 & 0xfffffff8;
 iVar7 = 1;
 iVar8 = 1;
 iVar9 = 1;
 iVar10 = 1;
 uVar6 = x - uVar3;
 iVar12 = x + -1;
 iVar13 = x + -2;
 iVar14 = x + -3;
 iVar15 = 1;
 iVar16 = 1;
 iVar17 = 1;
 iVar18 = 1;
 uVar4 = uVar3;
 do {
 iVar19 = x + -4;
 iVar20 = iVar12 + -4;
 iVar21 = iVar13 + -4;
 iVar22 = iVar14 + -4;
 uVar4 = uVar4 - 8;
 iVar7 = x * iVar7;
 iVar8 = iVar12 * iVar8;
 iVar9 = iVar13 * iVar9;
 iVar10 = iVar14 * iVar10;
 x = x + -8;
 iVar12 = iVar12 + -8;
 iVar13 = iVar13 + -8;
 iVar14 = iVar14 + -8;
 iVar15 = iVar19 * iVar15;
 iVar16 = iVar20 * iVar16;
 iVar17 = iVar21 * iVar17;
 iVar18 = iVar22 * iVar18;
 } while (uVar4 != 0);
 iVar15 = iVar15 * iVar7;
 iVar16 = iVar16 * iVar8;
 auVar11._4_4_ = iVar16;
 auVar11._0_4_ = iVar15;
 auVar11._8_4_ = iVar17 * iVar9;
 auVar11._12_4_ = iVar18 * iVar10;
 auVar5._4_4_ = iVar16;
 auVar5._0_4_ = iVar15;
 auVar5._8_4_ = iVar17 * iVar9;
 auVar5._12_4_ = iVar18 * iVar10;
 auVar11 = NEON_ext(auVar11,auVar5,8,1);
 iVar7 = iVar15 * auVar11._0_4_ * iVar16 * auVar11._4_4_;
 if (uVar2 == uVar3) {
 return iVar7;
 }
 }
 do {
 iVar7 = uVar6 * iVar7;
 bVar1 = 2 < uVar6;
 uVar6 = uVar6 - 1;
 } while (bVar1);
 return iVar7;
}



/* Function: double_value @ 00101378 */

int double_value(int x)

{
 return x << 1;
}



/* Function: triple_value @ 00101380 */

int triple_value(int x)

{
 return x * 3;
}



/* Function: call_virtual_func @ 00101388 */

int call_virtual_func(void *obj,int x)

{
 return x << 1;
}



/* Function: process_with_callback @ 00101390 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 ulong uVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???] */
 uVar2 = (ulong)(uint)n;
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 do {
 iVar1 = (*cb)(*arr);
 uVar2 = uVar2 - 1;
 iVar3 = iVar1 + iVar3;
 arr = arr + 1;
 } while (uVar2 != 0);
 }
 return iVar3;
}



/* Function: test_control_flow_l2 @ 001013e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 
 /* Unresolved local var: int flag@[???]
 Unresolved local var: int ext_flag@[???]
 Unresolved local var: int[8] src@[???]
 Unresolved local var: int[8] dst@[???]
 Unresolved local var: int[5] arr@[???] */
 puts(DAT_00101f89);
 printf("CF-L2-01 (loop_multi_exit): %d\n",0xc);
 iVar2 = 0;
 do {
 /* Unresolved local var: int count@[DW_OP_reg1(x1)] */
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n", iVar2);
 uVar4 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 uVar3 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 iVar2 = 0xb;
 do {
 /* Unresolved local var: int c@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int a@[???] */
 uVar1 = uVar3 - 8;
 uVar3 = uVar3 + 2;
 if (iVar2 - 2U <= uVar1) break;
 uVar4 = uVar4 + 1;
 iVar2 = iVar2 + -1;
 } while (uVar4 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar3);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar2 = 0;
 do {
 /* Unresolved local var: int count@[DW_OP_reg1(x1)] */
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n", iVar2);
 printf("CF-L2-09 (recursion_factorial): %d\n",0x78);
 printf("CF-L2-10 (tail_recursion): %d\n",0x78);
 printf("CF-L2-11 (indirect_recursion): %d\n",3);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}



/* Function: non_local_jump @ 00101598 */

int non_local_jump(int x)

{
 int iVar1;
 
 iVar1 = setjmp(jump_buffer);
 if (iVar1 == 0) {
 if (x < 0) {
 /* WARNING: Subroutine does not return */
 ((void (*)(jmp_buf, int))longjmp)(jump_buffer,1);
 }
 if (100 < (uint)x) {
 /* WARNING: Subroutine does not return */
 ((void (*)(jmp_buf, int))longjmp)(jump_buffer,2);
 }
 iVar1 = x << 1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: cpp_exception @ 001015fc */

int cpp_exception(int x)

{
 int iVar1;
 
 iVar1 = -2;
 if (x < 0x65) {
 iVar1 = x << 1;
 }
 if (x < 0) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: large_jump_table @ 00101618 */

int large_jump_table(int op,int a,int b)

{
 int iVar1;
 
 switch(op) {
 case 0:
 return b + a;
 case 1:
 return a - b;
 case 2:
 return b * a;
 case 3:
 break;
 case 4:
 if (b == 0) {
 return 0;
 }
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a / b;
 }
 return a - iVar1 * b;
 case 5:
 return b & a;
 case 6:
 return b | a;
 case 7:
 return b ^ a;
 case 8:
 return a << (ulong)(b & 0x1f);
 case 9:
 return a >> (b & 0x1fU);
 default:
 return -1;
 }
 if (b == 0) {
 return 0;
 }
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a / b;
 }
 return iVar1;
}



/* Function: op_add @ 00101640 */

int op_add(int a,int b)

{
 return b + a;
}



/* Function: op_sub @ 00101648 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 00101650 */

int op_mul(int a,int b)

{
 return b * a;
}



/* Function: op_div @ 00101658 */

int op_div(int a,int b)

{
 int iVar1;
 
 if (b != 0) {
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a / b;
 }
 return iVar1;
 }
 return 0;
}



/* Function: op_mod @ 0010166c */

int op_mod(int a,int b)

{
 int iVar1;
 
 if (b != 0) {
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a / b;
 }
 return a - iVar1 * b;
 }
 return 0;
}



/* Function: op_and @ 00101684 */

int op_and(int a,int b)

{
 return b & a;
}



/* Function: op_or @ 0010168c */

int op_or(int a,int b)

{
 return b | a;
}



/* Function: op_xor @ 00101694 */

int op_xor(int a,int b)

{
 return b ^ a;
}



/* Function: op_shl @ 0010169c */

int op_shl(int a,int b)

{
 return a << (ulong)(b & 0x1f);
}



/* Function: op_shr @ 001016a4 */

int op_shr(int a,int b)

{
 return a >> (b & 0x1fU);
}



/* Function: conditional_func_ptr @ 001016ac */

int conditional_func_ptr(int mode,int x)

{
 _func_int_int pcVar1;
 _func_int_int UNRECOVERED_JUMPTABLE;
 int iVar2;
 
 /* Unresolved local var: _func_int_int func@[???] */
 pcVar1 = triple_value;
 if (mode != 1) {
 pcVar1 = recursion_factorial;
 }
 UNRECOVERED_JUMPTABLE = double_value;
 if (mode != 0) {
 UNRECOVERED_JUMPTABLE = pcVar1;
 }
 /* WARNING: Could not recover jumptable at 0x001016d8. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar2 = (*UNRECOVERED_JUMPTABLE)(x);
 return iVar2;
}



/* Function: state_machine @ 001016dc */

int state_machine(int event,int state)

{
 int iVar1;
 
 switch(state) {
 case 0:
 return (int)(event == 1);
 case 1:
 iVar1 = 3;
 if (event != 99) {
 iVar1 = 1;
 }
 if (event != 2) {
 event = iVar1;
 }
 return event;
 case 2:
 break;
 case 3:
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
 default:
 state = 3;
 }
 return state;
}



/* Function: fsm_func_table @ 00101740 */

int fsm_func_table(int event,int state)

{
 int iVar1;
 
 switch(state) {
 case 0:
 return (int)(event == 1);
 case 1:
 iVar1 = 3;
 if (event != 99) {
 iVar1 = 1;
 }
 break;
 case 2:
 return 2;
 case 3:
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
 default:
 return 3;
 }
 if (event != 2) {
 event = iVar1;
 }
 return event;
}



/* Function: state_idle @ 00101760 */

int state_idle(int event)

{
 return (int)(event == 1);
}



/* Function: state_processing @ 0010176c */

int state_processing(int event)

{
 int iVar1;
 
 iVar1 = 3;
 if (event != 99) {
 iVar1 = 1;
 }
 if (event != 2) {
 event = iVar1;
 }
 return event;
}



/* Function: state_done @ 00101784 */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 0010178c */

int state_error(int event)

{
 int iVar1;
 
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: computed_goto @ 0010179c */

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



/* Function: obfuscated_cf @ 001017dc */

int obfuscated_cf(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(x0)] */
 return x << 1;
}



/* Function: opaque_predicate @ 001017e4 */

int opaque_predicate(int x)

{
 /* Unresolved local var: int cond@[???] */
 return x << 1;
}



/* Function: overlapped_code @ 001017ec */

int overlapped_code(int x)

{
 int iVar1;
 
 iVar1 = x;
 if (x < 0) {
 iVar1 = x + 1;
 }
 iVar1 = iVar1 >> 1;
 if ((x & 1U) != 0) {
 iVar1 = x * 3 + 1;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 00101808 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 uint uVar1;
 int labels[4] = {0, 10, 20, 30};
 
 puts(DAT_00101fad);
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
 uVar1 = computed_goto(labels,2);
 printf("CF-L3-07 (computed_goto): %d\n",(ulong)uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 00101900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 74 */
