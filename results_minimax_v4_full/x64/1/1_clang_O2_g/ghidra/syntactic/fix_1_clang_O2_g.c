/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/1/1_clang_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdbool.h>
#include <setjmp.h>
#include <string.h>

// Function pointer type definition
typedef int (*_func_int_int)(int);

// byte type for bitwise operations
typedef unsigned char byte;

// Generic function pointer type
typedef int (*code)(int);




/* Function: FUN_00101020 @ 00101020 */

// External data references
extern int DAT_00103280;
extern int DAT_00103160;
extern int DAT_00103140;
extern int DAT_00103108;
extern int DAT_001030d8;
extern unsigned char DAT_001037e5[];
extern unsigned char DAT_00103809[];
extern unsigned char DAT_0010382d[];

void FUN_00101020(void)

{
 // Null function pointer call - removing as it's unreachable
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: sequential_ops @ 00101170 */

int sequential_ops(int a,int b,int c)

{
 /* Unresolved local var: int temp1@[???]
 Unresolved local var: int temp2@[???]
 Unresolved local var: int temp3@[???] */
 return (a + b) * 2 - c;
}



/* Function: single_if @ 00101180 */

int single_if(int x)

{
 return x << (0 < x);
}



/* Function: if_else @ 00101190 */

int if_else(int x)

{
 return (int)(0 < x);
}



/* Function: nested_if_2 @ 001011a0 */

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



/* Function: nested_if_deep @ 001011b0 */

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



/* Function: if_elseif_chain @ 001011f0 */

int if_elseif_chain(int x)

{
 int iVar1;
 
 iVar1 = -1;
 if ((unsigned int)x < 3) {
 iVar1 = x * 10 + 10;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 00101210 */

int if_elseif_long(int x)

{
 int iVar1;
 
 iVar1 = -1;
 if ((unsigned int)x < 5) {
 iVar1 = x * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_small @ 00101230 */

int switch_small(int op)

{
 int iVar1;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 iVar1 = -1;
 if ((unsigned int)op < 4) {
 iVar1 = *(int *)(&DAT_00103280 + (long)op * 4);
 }
 return iVar1;
}



/* Function: switch_large @ 00101250 */

int switch_large(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((unsigned int)op < 10) {
 iVar1 = op * 10;
 }
 return iVar1;
}



/* Function: switch_default @ 00101270 */

int switch_default(int op)

{
 int iVar1;
 
 iVar1 = 0;
 if (op - 1U < 3) {
 iVar1 = (op - 1U) * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00101290 */

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



/* Function: loop_for_fixed @ 001012c0 */

int loop_for_fixed(int n)

{
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 return (int)((unsigned long)(n - 2) * (unsigned long)(n - 1) >> 1) + n + -1;
 }
 return 0;
}



/* Function: loop_while @ 001012e0 */

int loop_while(int x)

{
 int iVar1;
 unsigned int uVar2;
 
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



/* Function: loop_dowhile @ 00101320 */

int loop_dowhile(int x)

{
 int iVar1;
 unsigned int uVar2;
 
 /* Unresolved local var: int count@[DW_OP_reg0(RAX)] */
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = x + 9;
 x = x / 10;
 } while (0x12 < uVar2);
 return iVar1;
}



/* Function: loop_nested @ 00101360 */

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



/* Function: loop_break @ 00101370 */

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



/* Function: loop_continue @ 001013b0 */

/* WARNING: Removing unreachable block (ram,0x0010151b) */

int loop_continue(int n)

{
 unsigned int uVar1;
 int iVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 int iVar5;
 unsigned int uVar6;
 int iVar7;
 unsigned int uVar8;
 int iVar9;
 unsigned int uVar10;
 unsigned int uVar11;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 if ((unsigned int)n < 8) {
 iVar2 = 0;
 uVar3 = 1;
 goto LAB_001014eb;
 }
 uVar3 = n & 0xfffffff8;
 uVar1 = (uVar3 - 8 >> 3) + 1;
 if (uVar3 - 8 == 0) {
 iVar2 = 0;
 iVar5 = 0;
 uVar10 = 1;
 uVar11 = 3;
 iVar7 = 0;
 iVar9 = 0;
LAB_00101496:
 uVar1 = -(unsigned int)((uVar10 & 1) == 0);
 uVar4 = -(unsigned int)((uVar11 & 1) == 0);
 iVar2 = iVar2 + (~uVar1 & uVar10);
 iVar5 = iVar5 + (~uVar4 & uVar11);
 iVar7 = iVar7 + (~uVar1 & uVar10 + 4);
 iVar9 = iVar9 + (~uVar4 & uVar11 + 4);
 }
 else {
 uVar4 = uVar1 & 0xfffffffe;
 uVar10 = 1;
 uVar11 = 3;
 iVar2 = 0;
 iVar5 = 0;
 iVar7 = 0;
 iVar9 = 0;
 do {
 uVar6 = -(unsigned int)((uVar10 & 1) == 0);
 uVar8 = -(unsigned int)((uVar11 & 1) == 0);
 iVar2 = (~uVar6 & uVar10 + 8) + (~uVar6 & uVar10) + iVar2;
 iVar5 = (~uVar8 & uVar11 + 8) + (~uVar8 & uVar11) + iVar5;
 iVar7 = (~uVar6 & uVar10 + 0xc) + (~uVar6 & uVar10 + 4) + iVar7;
 iVar9 = (~uVar8 & uVar11 + 0xc) + (~uVar8 & uVar11 + 4) + iVar9;
 uVar10 = uVar10 + 0x10;
 uVar11 = uVar11 + 0x10;
 uVar4 = uVar4 - 2;
 } while (uVar4 != 0);
 if ((uVar1 & 1) != 0) goto LAB_00101496;
 }
 iVar2 = iVar5 + iVar9 + iVar2 + iVar7;
 if (uVar3 == n) {
 return iVar2;
 }
 uVar3 = uVar3 | 1;
LAB_001014eb:
 do {
 iVar2 = iVar2 + (-(uVar3 & 1) & uVar3);
 uVar3 = uVar3 + 1;
 } while (n + 1U != uVar3);
 return iVar2;
}



/* Function: goto_forward @ 00101520 */

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



/* Function: goto_backward @ 00101530 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int goto_backward(int x)

{
 unsigned int uVar1;
 unsigned long uVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar5;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar6;
 int iVar10;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar8;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar9;
 unsigned long uVar11;
 int uVar16;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar12;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar13;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar14;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar15;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar17;
 int iVar22;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar18;
 int iVar23;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar20;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar21;
 int iVar29;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar25;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar26;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar32;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar33;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar34;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar37;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar38;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar39;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar7;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar19;
 int iVar24;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar27;
 int iVar28;
 unsigned int uVar30;
 int iVar31;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar35;
 int iVar36;
 
 /* Unresolved local var: int i@[???]
 Unresolved local var: int result@[???] */
 if (x < 1) {
 return 1;
 }
 uVar3 = 1;
 uVar2 = 1;
 if (7 < (unsigned int)x) {
 uVar3 = x & 0xfffffff8;
 uVar4 = (uVar3 - 8 >> 3) + 1;
 uVar1 = uVar4 & 3;
 auVar5._0_4_ = DAT_00103140;
 auVar7._0_4_ = DAT_00103160;
 auVar19._0_4_ = DAT_00103160;
 if (0x17 < uVar3 - 8) {
 uVar4 = uVar4 & 0xfffffffc;
 do {
 iVar24 = auVar5._0_4_;
 auVar25._0_4_ = iVar24 + 4;
 iVar28 = auVar5._4_4_;
 auVar25._4_4_ = iVar28 + 4;
 uVar30 = auVar5._8_4_;
 iVar31 = auVar5._12_4_;
 auVar25._8_4_ = uVar30 + 4;
 auVar25._12_4_ = iVar31 + 4;
 iVar10 = auVar7._4_4_;
 auVar37._4_4_ = iVar28;
 auVar37._0_4_ = iVar28;
 auVar37._8_4_ = iVar31;
 auVar37._12_4_ = iVar31;
 iVar22 = auVar19._4_4_;
 auVar12._4_4_ = auVar25._4_4_;
 auVar12._0_4_ = auVar25._4_4_;
 auVar12._8_4_ = auVar25._12_4_;
 auVar12._12_4_ = auVar25._12_4_;
 auVar18._4_4_ = iVar28 + 8;
 auVar18._12_4_ = iVar31 + 8;
 auVar32._4_4_ = iVar28 + 0xc;
 auVar32._12_4_ = iVar31 + 0xc;
 auVar18._0_4_ = auVar18._4_4_;
 auVar18._8_4_ = auVar18._12_4_;
 auVar32._0_4_ = auVar32._4_4_;
 auVar32._8_4_ = auVar32._12_4_;
 auVar13._0_4_ = iVar24 + 0x10;
 auVar13._4_4_ = iVar28 + 0x10;
 auVar13._8_4_ = uVar30 + 0x10;
 auVar13._12_4_ = iVar31 + 0x10;
 auVar38._0_4_ = iVar24 + 0x14;
 auVar38._4_4_ = iVar28 + 0x14;
 auVar38._8_4_ = uVar30 + 0x14;
 auVar38._12_4_ = iVar31 + 0x14;
 auVar17._4_4_ = auVar13._4_4_;
 auVar17._0_4_ = auVar13._4_4_;
 auVar17._8_4_ = auVar13._12_4_;
 auVar17._12_4_ = auVar13._12_4_;
 iVar23 = iVar28 + 0x18;
 iVar29 = iVar28 + 0x1c;
 iVar36 = auVar13._0_4_ * auVar7._0_4_ * iVar24 * (iVar24 + 8) * (iVar24 + 0x18);
 uVar16 = (int)
 (((auVar13._8_8_ & 0xffffffff) *
 (((auVar7._8_8_ & 0xffffffff) * (unsigned long)uVar30 & 0xffffffff) * (unsigned long)(uVar30 + 8)
 & 0xffffffff) & 0xffffffff) * (unsigned long)(uVar30 + 0x18));
 auVar8._4_4_ = uVar16;
 auVar8._0_4_ = iVar36;
 auVar14._4_4_ = iVar23;
 auVar14._0_4_ = iVar23;
 auVar14._8_4_ = iVar31 + 0x18;
 auVar14._12_4_ = iVar31 + 0x18;
 auVar8._8_4_ = uVar16;
 auVar8._12_4_ =
 (int)((auVar14._8_8_ & 0xffffffff) *
 ((auVar17._8_8_ & 0xffffffff) *
 ((auVar18._8_8_ & 0xffffffff) *
 ((auVar37._8_8_ & 0xffffffff) * (unsigned long)auVar7._12_4_ & 0xffffffff) & 0xffffffff)
 & 0xffffffff));
 auVar7._8_8_ = auVar8._8_8_;
 auVar7._4_4_ = iVar23 * auVar13._4_4_ * auVar18._4_4_ * iVar28 * iVar10;
 auVar7._0_4_ = iVar36;
 iVar10 = auVar38._0_4_ * auVar25._0_4_ * auVar19._0_4_ * (iVar24 + 0xc) * (iVar24 + 0x1c);
 uVar16 = (int)
 (((auVar38._8_8_ & 0xffffffff) *
 (((auVar25._8_8_ & 0xffffffff) * (unsigned long)auVar19._8_4_ & 0xffffffff) *
 (unsigned long)(uVar30 + 0xc) & 0xffffffff) & 0xffffffff) * (unsigned long)(uVar30 + 0x1c));
 auVar20._4_4_ = uVar16;
 auVar20._0_4_ = iVar10;
 auVar15._4_4_ = iVar29;
 auVar15._0_4_ = iVar29;
 auVar15._8_4_ = iVar31 + 0x1c;
 auVar15._12_4_ = iVar31 + 0x1c;
 auVar20._8_4_ = uVar16;
 auVar20._12_4_ =
 (int)((auVar15._8_8_ & 0xffffffff) *
 ((unsigned long)auVar38._12_4_ *
 ((auVar32._8_8_ & 0xffffffff) *
 ((auVar12._8_8_ & 0xffffffff) * (unsigned long)auVar19._12_4_ & 0xffffffff) & 0xffffffff
 ) & 0xffffffff));
 auVar19._8_8_ = auVar20._8_8_;
 auVar19._4_4_ = iVar29 * auVar38._4_4_ * auVar32._4_4_ * auVar25._4_4_ * iVar22;
 auVar19._0_4_ = iVar10;
 auVar5._0_4_ = iVar24 + 0x20;
 auVar5._4_4_ = iVar28 + 0x20;
 auVar5._8_4_ = uVar30 + 0x20;
 auVar5._12_4_ = iVar31 + 0x20;
 uVar4 = uVar4 - 4;
 } while (uVar4 != 0);
 }
 while( true ) {
 auVar21._4_4_ = auVar19._4_4_;
 auVar21._12_4_ = auVar19._12_4_;
 if (uVar1 == 0) break;
 iVar10 = auVar5._0_4_;
 auVar33._0_4_ = iVar10 + 4;
 iVar36 = auVar5._4_4_;
 auVar33._4_4_ = iVar36 + 4;
 iVar22 = auVar5._12_4_;
 auVar33._8_4_ = auVar5._8_4_ + 4;
 auVar33._12_4_ = iVar22 + 4;
 auVar26._0_4_ = iVar10 * auVar7._0_4_;
 auVar27._8_4_ = (int)((auVar5._8_8_ & 0xffffffff) * (unsigned long)auVar7._8_4_);
 auVar27._4_4_ = auVar27._8_4_;
 auVar27._0_4_ = auVar26._0_4_;
 auVar39._4_4_ = iVar36;
 auVar39._0_4_ = iVar36;
 auVar39._8_4_ = iVar22;
 auVar39._12_4_ = iVar22;
 auVar27._12_4_ = (int)((auVar39._8_8_ & 0xffffffff) * (unsigned long)auVar7._12_4_);
 auVar26._8_8_ = auVar27._8_8_;
 auVar26._4_4_ = iVar36 * auVar7._4_4_;
 auVar34._0_4_ = auVar33._0_4_ * auVar19._0_4_;
 auVar35._8_4_ = (int)((auVar33._8_8_ & 0xffffffff) * (unsigned long)auVar19._8_4_);
 auVar35._4_4_ = auVar35._8_4_;
 auVar35._0_4_ = auVar34._0_4_;
 auVar21._0_4_ = auVar21._4_4_;
 auVar21._8_4_ = auVar21._12_4_;
 auVar35._12_4_ = (int)((auVar21._8_8_ & 0xffffffff) * (unsigned long)auVar33._12_4_);
 auVar34._8_8_ = auVar35._8_8_;
 auVar34._4_4_ = auVar21._4_4_ * auVar33._4_4_;
 auVar6._0_4_ = iVar10 + 8;
 auVar6._4_4_ = iVar36 + 8;
 auVar6._8_4_ = auVar5._8_4_ + 8;
 auVar6._12_4_ = iVar22 + 8;
 uVar1 = uVar1 - 1;
 memcpy(&auVar5, &auVar6, sizeof(auVar5));
 memcpy(&auVar7, &auVar26, sizeof(auVar7));
 memcpy(&auVar19, &auVar34, sizeof(auVar19));
 }
 auVar9._4_4_ = auVar21._4_4_;
 auVar9._0_4_ = auVar21._4_4_;
 auVar9._8_4_ = auVar21._12_4_;
 auVar9._12_4_ = auVar21._12_4_;
 uVar11 = (((auVar9._8_8_ & 0xffffffff) * (unsigned long)auVar7._12_4_ & 0xffffffff) *
 ((unsigned long)auVar21._4_4_ * (unsigned long)auVar7._4_4_ & 0xffffffff) & 0xffffffff) *
 (((auVar19._8_8_ & 0xffffffff) * (unsigned long)auVar7._8_4_ & 0xffffffff) *
 ((unsigned long)auVar19._0_4_ * (unsigned long)auVar7._0_4_ & 0xffffffff) & 0xffffffff);
 uVar2 = uVar11 & 0xffffffff;
 if (uVar3 == x) {
 return (int)uVar11;
 }
 uVar3 = uVar3 | 1;
 }
 do {
 uVar1 = (int)uVar2 * uVar3;
 uVar2 = (unsigned long)uVar1;
 uVar3 = uVar3 + 1;
 } while (x + 1U != uVar3);
 return uVar1;
}



/* Function: ternary_op @ 00101790 */

int ternary_op(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: test_control_flow_l1 @ 001017a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 puts(&DAT_001037e5);
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



/* Function: loop_multi_exit @ 001019a0 */

int loop_multi_exit(int target)

{
 int iVar1;
 unsigned int uVar2;
 
 /* Unresolved local var: int[3][4] matrix@[???]
 Unresolved local var: int i@[???]
 Unresolved local var: int j@[???] */
 uVar2 = target - 1;
 iVar1 = -1;
 if (uVar2 < 0xc) {
 iVar1 = *(int *)(&DAT_00103108 + (long)(int)uVar2 * 4) +
 *(int *)(&DAT_001030d8 + (long)(int)uVar2 * 4);
 }
 return iVar1;
}



/* Function: infinite_loop @ 001019d0 */

int infinite_loop(int *flag)

{
 int iVar1;
 
 /* Unresolved local var: int count@[???] */
 iVar1 = 0;
 while( true ) {
 if (*flag == 1) {
 return iVar1;
 }
 if (iVar1 == 1000) {
 *flag = 1;
 return 0x3e9;
 }
 if (*flag == 1) {
 return iVar1 + 1;
 }
 if (*flag == 1) break;
 if (*flag == 1) {
 return iVar1 + 3;
 }
 iVar1 = iVar1 + 4;
 }
 return iVar1 + 2;
}



/* Function: multi_return @ 00101a20 */

int multi_return(int x)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 if (-1 < x) {
 iVar1 = -2;
 if ((unsigned int)x < 0x33) {
 iVar1 = x + 1;
 if ((x & 1U) == 0) {
 iVar1 = x * 2;
 }
 }
 return iVar1;
 }
 return -1;
}



/* Function: conditional_return @ 00101a50 */

int conditional_return(int x)

{
 int iVar1;
 
 iVar1 = -x;
 if (0 < x) {
 iVar1 = x * 2;
 }
 return iVar1;
}



/* Function: duffs_device @ 00101a60 */

int duffs_device(int *dst,int *src,int n)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 
 /* Unresolved local var: int count@[???] */
 iVar3 = -1;
 if (0 < n) {
 uVar1 = n + 7U >> 3;
 uVar2 = uVar1;
 switch(n & 7) {
 case 1:
 goto switchD_00101a86_caseD_1;
 case 2:
 goto switchD_00101a86_caseD_2;
 case 3:
 goto switchD_00101a86_caseD_3;
 case 4:
 goto switchD_00101a86_caseD_4;
 case 5:
 goto switchD_00101a86_caseD_5;
 case 6:
 goto switchD_00101a86_caseD_6;
 case 7:
 goto switchD_00101a86_caseD_7;
 }
 do {
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
 uVar2 = uVar1;
switchD_00101a86_caseD_7:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00101a86_caseD_6:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00101a86_caseD_5:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00101a86_caseD_4:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00101a86_caseD_3:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00101a86_caseD_2:
 iVar3 = *src;
 src = src + 1;
 *dst = iVar3;
 dst = dst + 1;
switchD_00101a86_caseD_1:
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



/* Function: loop_complex_cond @ 00101b00 */

int loop_complex_cond(int x)

{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 unsigned int uVar4;
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



/* Function: loop_modify_var @ 00101b40 */

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



/* Function: loop_external_state @ 00101b70 */

int loop_external_state(int *flag)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int count@[???] */
 iVar2 = 0;
 iVar1 = *flag;
 while( true ) {
 if (iVar1 != 0) {
 return iVar2;
 }
 if (iVar2 == 100) {
 return 0x65;
 }
 if (*flag != 0) {
 return iVar2 + 1;
 }
 if (*flag != 0) break;
 if (*flag != 0) {
 return iVar2 + 3;
 }
 iVar2 = iVar2 + 4;
 iVar1 = *flag;
 }
 return iVar2 + 2;
}



/* Function: recursion_factorial @ 00101bb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

 int recursion_factorial(int n)

{
 bool bVar1;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar2;
 unsigned int uVar3;
 unsigned long uVar4;
 int iVar5;
 unsigned int uVar6;
 unsigned int uVar7;
 unsigned int uVar8;
 unsigned long uVar9;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar10;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar11;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar12;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar13;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar14;
 int iVar18;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar17;
 int iVar19;
 int uVar23;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar20;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar21;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar22;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar24;
 int iVar29;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar25;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar27;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar28;
 int iVar33;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar30;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar31;
 int iVar34;
 unsigned int uVar35;
 int iVar36;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar37;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar38;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar39;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar15;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar16;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar26;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar32;
 
 uVar6 = 1;
 if (1 < n) {
 iVar5 = n + -2;
 if ((unsigned int)n < 2) {
 iVar5 = 0;
 }
 uVar6 = iVar5 + 1;
 uVar4 = 1;
 if (7 < uVar6) {
 uVar8 = uVar6 & 0xfffffff8;
 iVar34 = n + -1;
 uVar35 = n - 2;
 iVar36 = n + -3;
 uVar7 = (uVar8 - 8 >> 3) + 1;
 uVar3 = uVar7 & 3;
 auVar16._0_4_ = DAT_00103160;
 auVar26._0_4_ = DAT_00103160;
 iVar5 = n;
 if (0x17 < uVar8 - 8) {
 uVar7 = uVar7 & 0xfffffffc;
 do {
 auVar10._0_4_ = iVar5 + -4;
 auVar10._4_4_ = iVar34 + -4;
 auVar10._8_4_ = uVar35 - 4;
 auVar10._12_4_ = iVar36 + -4;
 iVar18 = auVar16._4_4_;
 auVar37._4_4_ = iVar34;
 auVar37._0_4_ = iVar34;
 auVar37._8_4_ = iVar36;
 auVar37._12_4_ = iVar36;
 iVar29 = auVar26._4_4_;
 auVar20._4_4_ = auVar10._4_4_;
 auVar20._0_4_ = auVar10._4_4_;
 auVar20._8_4_ = auVar10._12_4_;
 auVar20._12_4_ = auVar10._12_4_;
 auVar25._4_4_ = iVar34 + -8;
 auVar25._12_4_ = iVar36 + -8;
 auVar30._4_4_ = iVar34 + -0xc;
 auVar30._12_4_ = iVar36 + -0xc;
 auVar25._0_4_ = auVar25._4_4_;
 auVar25._8_4_ = auVar25._12_4_;
 auVar30._0_4_ = auVar30._4_4_;
 auVar30._8_4_ = auVar30._12_4_;
 auVar21._0_4_ = iVar5 + -0x10;
 auVar21._4_4_ = iVar34 + -0x10;
 auVar21._8_4_ = uVar35 - 0x10;
 auVar21._12_4_ = iVar36 + -0x10;
 auVar38._0_4_ = iVar5 + -0x14;
 auVar38._4_4_ = iVar34 + -0x14;
 auVar38._8_4_ = uVar35 - 0x14;
 auVar38._12_4_ = iVar36 - 0x14;
 auVar24._4_4_ = auVar21._4_4_;
 auVar24._0_4_ = auVar21._4_4_;
 auVar24._8_4_ = auVar21._12_4_;
 auVar24._12_4_ = auVar21._12_4_;
 auVar11._4_4_ = iVar34 + -0x18;
 auVar11._12_4_ = iVar36 + -0x18;
 iVar33 = iVar34 + -0x1c;
 iVar19 = auVar21._0_4_ * auVar16._0_4_ * iVar5 * (iVar5 + -8) * (iVar5 + -0x18);
 uVar23 = (int)
 (((auVar21._8_8_ & 0xffffffff) *
 (((auVar16._8_8_ & 0xffffffff) * (unsigned long)uVar35 & 0xffffffff) *
 (unsigned long)(uVar35 - 8) & 0xffffffff) & 0xffffffff) * (unsigned long)(uVar35 - 0x18));
 auVar17._4_4_ = uVar23;
 auVar17._0_4_ = iVar19;
 auVar11._0_4_ = auVar11._4_4_;
 auVar11._8_4_ = auVar11._12_4_;
 auVar17._8_4_ = uVar23;
 auVar17._12_4_ =
 (int)((auVar11._8_8_ & 0xffffffff) *
 ((auVar24._8_8_ & 0xffffffff) *
 ((auVar25._8_8_ & 0xffffffff) *
 ((auVar37._8_8_ & 0xffffffff) * (unsigned long)auVar16._12_4_ & 0xffffffff) &
 0xffffffff) & 0xffffffff));
 auVar16._8_8_ = auVar17._8_8_;
 auVar16._4_4_ = auVar11._4_4_ * auVar21._4_4_ * auVar25._4_4_ * iVar34 * iVar18;
 auVar16._0_4_ = iVar19;
 iVar18 = auVar38._0_4_ * auVar10._0_4_ * auVar26._0_4_ * (iVar5 + -0xc) * (iVar5 + -0x1c);
 uVar23 = (int)
 (((auVar38._8_8_ & 0xffffffff) *
 (((auVar10._8_8_ & 0xffffffff) * (unsigned long)auVar26._8_4_ & 0xffffffff) *
 (unsigned long)(uVar35 - 0xc) & 0xffffffff) & 0xffffffff) * (unsigned long)(uVar35 - 0x1c));
 auVar27._4_4_ = uVar23;
 auVar27._0_4_ = iVar18;
 auVar12._4_4_ = iVar33;
 auVar12._0_4_ = iVar33;
 auVar12._8_4_ = iVar36 + -0x1c;
 auVar12._12_4_ = iVar36 + -0x1c;
 auVar27._8_4_ = uVar23;
 auVar27._12_4_ =
 (int)((auVar12._8_8_ & 0xffffffff) *
 ((unsigned long)auVar38._12_4_ *
 ((auVar30._8_8_ & 0xffffffff) *
 ((auVar20._8_8_ & 0xffffffff) * (unsigned long)auVar26._12_4_ & 0xffffffff) &
 0xffffffff) & 0xffffffff));
 auVar26._8_8_ = auVar27._8_8_;
 auVar26._4_4_ = iVar33 * auVar38._4_4_ * auVar30._4_4_ * auVar10._4_4_ * iVar29;
 auVar26._0_4_ = iVar18;
 iVar5 = iVar5 + -0x20;
 iVar34 = iVar34 + -0x20;
 uVar35 = uVar35 - 0x20;
 iVar36 = iVar36 + -0x20;
 uVar7 = uVar7 - 4;
 } while (uVar7 != 0);
 }
 while( true ) {
 auVar28._4_4_ = auVar26._4_4_;
 auVar28._12_4_ = auVar26._12_4_;
 if (uVar3 == 0) break;
 auVar13._0_4_ = iVar5 + -4;
 auVar13._4_4_ = iVar34 + -4;
 auVar13._8_4_ = uVar35 - 4;
 auVar13._12_4_ = iVar36 - 4;
 auVar2._4_4_ = iVar34;
 auVar2._0_4_ = iVar5;
 auVar2._8_4_ = uVar35;
 auVar2._12_4_ = iVar36;
 auVar31._0_4_ = iVar5 * auVar16._0_4_;
 auVar32._8_4_ = (int)((auVar2._8_8_ & 0xffffffff) * (unsigned long)auVar16._8_4_);
 auVar32._4_4_ = auVar32._8_4_;
 auVar32._0_4_ = auVar31._0_4_;
 auVar39._4_4_ = iVar34;
 auVar39._0_4_ = iVar34;
 auVar39._8_4_ = iVar36;
 auVar39._12_4_ = iVar36;
 auVar32._12_4_ = (int)((auVar39._8_8_ & 0xffffffff) * (unsigned long)auVar16._12_4_);
 auVar31._8_8_ = auVar32._8_8_;
 auVar31._4_4_ = iVar34 * auVar16._4_4_;
 auVar14._0_4_ = auVar13._0_4_ * auVar26._0_4_;
 auVar15._8_4_ = (int)((auVar13._8_8_ & 0xffffffff) * (unsigned long)auVar26._8_4_);
 auVar15._4_4_ = auVar15._8_4_;
 auVar15._0_4_ = auVar14._0_4_;
 auVar28._0_4_ = auVar28._4_4_;
 auVar28._8_4_ = auVar28._12_4_;
 auVar15._12_4_ = (int)((auVar28._8_8_ & 0xffffffff) * (unsigned long)auVar13._12_4_);
 auVar14._8_8_ = auVar15._8_8_;
 auVar14._4_4_ = auVar28._4_4_ * auVar13._4_4_;
 iVar34 = iVar34 + -8;
 uVar35 = uVar35 - 8;
 iVar36 = iVar36 + -8;
 uVar3 = uVar3 - 1;
 auVar16 = auVar31;
 auVar26 = auVar14;
 iVar5 = iVar5 + -8;
 }
 auVar22._4_4_ = auVar28._4_4_;
 auVar22._0_4_ = auVar28._4_4_;
 auVar22._8_4_ = auVar28._12_4_;
 auVar22._12_4_ = auVar28._12_4_;
 uVar9 = (((auVar22._8_8_ & 0xffffffff) * (unsigned long)auVar16._12_4_ & 0xffffffff) *
 ((unsigned long)auVar28._4_4_ * (unsigned long)auVar16._4_4_ & 0xffffffff) & 0xffffffff) *
 (((auVar26._8_8_ & 0xffffffff) * (unsigned long)auVar16._8_4_ & 0xffffffff) *
 ((unsigned long)auVar26._0_4_ * (unsigned long)auVar16._0_4_ & 0xffffffff) & 0xffffffff);
 uVar4 = uVar9 & 0xffffffff;
 if (uVar6 == uVar8) {
 return (int)uVar9;
 }
 n = n - uVar8;
 }
 do {
 uVar6 = (int)uVar4 * n;
 uVar4 = (unsigned long)uVar6;
 bVar1 = 2 < (unsigned int)n;
 n = n - 1;
 } while (bVar1);
 }
 return uVar6;
}



/* Function: tail_recursion @ 00101e20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int tail_recursion(int n,int acc)

{
 bool bVar1;
 unsigned int uVar2;
 unsigned long uVar3;
 int iVar4;
 unsigned int uVar5;
 unsigned int uVar6;
 unsigned int uVar7;
 unsigned int uVar8;
 unsigned long uVar9;
 unsigned int uVar14;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar10;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar11;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar12;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar13;
 int iVar20;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar15;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar17;
 unsigned int uVar21;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar18;
 int iVar25;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar22;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar23;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar24;
 unsigned int uVar28;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar26;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar27;
 int iVar29;
 int iVar30;
 unsigned int uVar31;
 int iVar32;
 int iVar35;
 int uVar36;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar33;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar34;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar16;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar19;
 
 uVar3 = (unsigned long)(unsigned int)acc;
 if (1 < n) {
 iVar4 = n + -2;
 if ((unsigned int)n < 2) {
 iVar4 = 0;
 }
 uVar5 = iVar4 + 1;
 if (7 < uVar5) {
 uVar7 = uVar5 & 0xfffffff8;
 uVar8 = 1;
 uVar28 = 1;
 uVar14 = 1;
 iVar29 = n + -1;
 iVar30 = n + -2;
 uVar31 = n - 3;
 uVar6 = (uVar7 - 8 >> 3) + 1;
 uVar2 = uVar6 & 3;
 auVar16._0_4_ = DAT_00103160;
 iVar4 = n;
 if (0x17 < uVar7 - 8) {
 uVar6 = uVar6 & 0xfffffffc;
 do {
 auVar10._0_4_ = iVar4 + -4;
 auVar10._4_4_ = iVar29 + -4;
 auVar10._8_4_ = iVar30 + -4;
 auVar10._12_4_ = uVar31 - 4;
 auVar22._4_4_ = uVar8;
 auVar22._0_4_ = uVar8;
 auVar22._8_4_ = uVar14;
 auVar22._12_4_ = uVar14;
 iVar20 = auVar16._4_4_;
 auVar26._4_4_ = auVar10._4_4_;
 auVar26._0_4_ = auVar10._4_4_;
 auVar26._8_4_ = auVar10._12_4_;
 auVar26._12_4_ = auVar10._12_4_;
 auVar15._4_4_ = iVar29 + -8;
 auVar15._12_4_ = uVar31 - 8;
 iVar35 = iVar29 + -0xc;
 auVar15._0_4_ = auVar15._4_4_;
 auVar15._8_4_ = auVar15._12_4_;
 auVar23._4_4_ = iVar35;
 auVar23._0_4_ = iVar35;
 auVar23._8_4_ = uVar31 - 0xc;
 auVar23._12_4_ = uVar31 - 0xc;
 auVar27._0_4_ = iVar4 + -0x10;
 auVar27._4_4_ = iVar29 + -0x10;
 auVar27._8_4_ = iVar30 + -0x10;
 auVar27._12_4_ = uVar31 - 0x10;
 auVar33._0_4_ = iVar4 + -0x14;
 auVar33._4_4_ = iVar29 + -0x14;
 auVar33._8_4_ = iVar30 + -0x14;
 auVar33._12_4_ = uVar31 - 0x14;
 auVar11._4_4_ = iVar29 + -0x18;
 auVar11._12_4_ = uVar31 - 0x18;
 iVar25 = iVar29 + -0x1c;
 acc = auVar27._0_4_ * acc * iVar4 * (iVar4 + -8) * (iVar4 + -0x18);
 uVar28 = (unsigned int)(((auVar27._8_8_ & 0xffffffff) *
 ((unsigned long)(uVar28 * iVar30) * (unsigned long)(iVar30 - 8) & 0xffffffff) &
 0xffffffff) * (unsigned long)(iVar30 - 0x18));
 auVar11._0_4_ = auVar11._4_4_;
 auVar11._8_4_ = auVar11._12_4_;
 uVar8 = auVar11._4_4_ * auVar27._4_4_ * auVar15._4_4_ * uVar8 * iVar29;
 uVar14 = (unsigned int)((auVar11._8_8_ & 0xffffffff) *
 ((unsigned long)auVar27._12_4_ *
 ((auVar15._8_8_ & 0xffffffff) *
 ((auVar22._8_8_ & 0xffffffff) * (unsigned long)uVar31 & 0xffffffff) & 0xffffffff)
 & 0xffffffff));
 iVar32 = auVar33._0_4_ * auVar10._0_4_ * auVar16._0_4_ * (iVar4 + -0xc) * (iVar4 + -0x1c);
 uVar36 = (int)
 (((auVar33._8_8_ & 0xffffffff) *
 (((auVar10._8_8_ & 0xffffffff) * (unsigned long)auVar16._8_4_ & 0xffffffff) *
 (unsigned long)(iVar30 - 0xc) & 0xffffffff) & 0xffffffff) * (unsigned long)(iVar30 - 0x1c));
 auVar17._4_4_ = uVar36;
 auVar17._0_4_ = iVar32;
 auVar12._4_4_ = iVar25;
 auVar12._0_4_ = iVar25;
 auVar12._8_4_ = uVar31 - 0x1c;
 auVar12._12_4_ = uVar31 - 0x1c;
 auVar17._8_4_ = uVar36;
 auVar17._12_4_ =
 (int)((auVar12._8_8_ & 0xffffffff) *
 ((unsigned long)auVar33._12_4_ *
 ((auVar23._8_8_ & 0xffffffff) *
 ((auVar26._8_8_ & 0xffffffff) * (unsigned long)auVar16._12_4_ & 0xffffffff) &
 0xffffffff) & 0xffffffff));
 auVar16._8_8_ = auVar17._8_8_;
 auVar16._4_4_ = iVar25 * auVar33._4_4_ * iVar35 * auVar10._4_4_ * iVar20;
 auVar16._0_4_ = iVar32;
 iVar4 = iVar4 + -0x20;
 iVar29 = iVar29 + -0x20;
 iVar30 = iVar30 + -0x20;
 uVar31 = uVar31 - 0x20;
 uVar6 = uVar6 - 4;
 } while (uVar6 != 0);
 }
 while( true ) {
 uVar6 = auVar16._4_4_;
 uVar21 = auVar16._12_4_;
 if (uVar2 == 0) break;
 auVar13._4_4_ = iVar29 + -4;
 auVar13._12_4_ = uVar31 - 4;
 acc = acc * iVar4;
 uVar28 = uVar28 * iVar30;
 auVar34._4_4_ = iVar29;
 auVar34._0_4_ = iVar29;
 auVar34._8_4_ = uVar31;
 auVar34._12_4_ = uVar31;
 uVar8 = iVar29 * uVar8;
 uVar14 = (unsigned int)((auVar34._8_8_ & 0xffffffff) * (unsigned long)uVar14);
 auVar18._0_4_ = auVar16._0_4_ * (iVar4 + -4);
 auVar19._8_4_ = (int)((auVar16._8_8_ & 0xffffffff) * (unsigned long)(iVar30 - 4));
 auVar19._4_4_ = auVar19._8_4_;
 auVar19._0_4_ = auVar18._0_4_;
 auVar13._0_4_ = auVar13._4_4_;
 auVar13._8_4_ = auVar13._12_4_;
 auVar19._12_4_ = (int)((auVar13._8_8_ & 0xffffffff) * (unsigned long)uVar21);
 auVar18._8_8_ = auVar19._8_8_;
 auVar18._4_4_ = auVar13._4_4_ * uVar6;
 iVar29 = iVar29 + -8;
 iVar30 = iVar30 + -8;
 uVar31 = uVar31 - 8;
 uVar2 = uVar2 - 1;
 auVar16 = auVar18;
 iVar4 = iVar4 + -8;
 }
 auVar24._4_4_ = uVar6;
 auVar24._0_4_ = uVar6;
 auVar24._8_4_ = uVar21;
 auVar24._12_4_ = uVar21;
 uVar9 = (((auVar24._8_8_ & 0xffffffff) * (unsigned long)uVar14 & 0xffffffff) *
 ((unsigned long)uVar6 * (unsigned long)uVar8 & 0xffffffff) & 0xffffffff) *
 (((auVar16._8_8_ & 0xffffffff) * (unsigned long)uVar28 & 0xffffffff) *
 ((unsigned long)auVar16._0_4_ * (unsigned long)(unsigned int)acc & 0xffffffff) & 0xffffffff);
 uVar3 = uVar9 & 0xffffffff;
 if (uVar5 == uVar7) {
 return (int)uVar9;
 }
 n = n - uVar7;
 }
 do {
 acc = (int)uVar3 * n;
 uVar3 = (unsigned long)(unsigned int)acc;
 bVar1 = 2 < (unsigned int)n;
 n = n - 1;
 } while (bVar1);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00102080 */

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



/* Function: call_func_ptr @ 001020e0 */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x001020e5. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 001020f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_func_ptr_array(int idx,int x)

{
 bool bVar1;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar2;
 unsigned int uVar3;
 unsigned long uVar4;
 int iVar5;
 unsigned int uVar6;
 unsigned int uVar7;
 unsigned int uVar8;
 unsigned long uVar9;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar10;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar11;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar12;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar13;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar14;
 int iVar18;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar17;
 int iVar19;
 int uVar23;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar20;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar21;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar22;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar24;
 int iVar29;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar25;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar27;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar28;
 int iVar33;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar30;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar31;
 int iVar34;
 unsigned int uVar35;
 int iVar36;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar37;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar38;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar39;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar15;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar16;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar26;
 union { unsigned int a[4]; unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned long _0_8_; unsigned long _8_8_; } auVar32;
 
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
 uVar6 = 1;
 if (1 < x) {
 iVar5 = x + -2;
 if ((unsigned int)x < 2) {
 iVar5 = 0;
 }
 uVar6 = iVar5 + 1;
 uVar4 = 1;
 if (7 < uVar6) {
 uVar8 = uVar6 & 0xfffffff8;
 iVar34 = x + -1;
 uVar35 = x - 2;
 iVar36 = x + -3;
 uVar7 = (uVar8 - 8 >> 3) + 1;
 uVar3 = uVar7 & 3;
 auVar16._0_4_ = DAT_00103160;
 auVar26._0_4_ = DAT_00103160;
 iVar5 = x;
 if (0x17 < uVar8 - 8) {
 uVar7 = uVar7 & 0xfffffffc;
 do {
 auVar10._0_4_ = iVar5 + -4;
 auVar10._4_4_ = iVar34 + -4;
 auVar10._8_4_ = uVar35 - 4;
 auVar10._12_4_ = iVar36 + -4;
 iVar18 = auVar16._4_4_;
 auVar37._4_4_ = iVar34;
 auVar37._0_4_ = iVar34;
 auVar37._8_4_ = iVar36;
 auVar37._12_4_ = iVar36;
 iVar29 = auVar26._4_4_;
 auVar20._4_4_ = auVar10._4_4_;
 auVar20._0_4_ = auVar10._4_4_;
 auVar20._8_4_ = auVar10._12_4_;
 auVar20._12_4_ = auVar10._12_4_;
 auVar25._4_4_ = iVar34 + -8;
 auVar25._12_4_ = iVar36 + -8;
 auVar30._4_4_ = iVar34 + -0xc;
 auVar30._12_4_ = iVar36 + -0xc;
 auVar25._0_4_ = auVar25._4_4_;
 auVar25._8_4_ = auVar25._12_4_;
 auVar30._0_4_ = auVar30._4_4_;
 auVar30._8_4_ = auVar30._12_4_;
 auVar21._0_4_ = iVar5 + -0x10;
 auVar21._4_4_ = iVar34 + -0x10;
 auVar21._8_4_ = uVar35 - 0x10;
 auVar21._12_4_ = iVar36 + -0x10;
 auVar38._0_4_ = iVar5 + -0x14;
 auVar38._4_4_ = iVar34 + -0x14;
 auVar38._8_4_ = uVar35 - 0x14;
 auVar38._12_4_ = iVar36 - 0x14;
 auVar24._4_4_ = auVar21._4_4_;
 auVar24._0_4_ = auVar21._4_4_;
 auVar24._8_4_ = auVar21._12_4_;
 auVar24._12_4_ = auVar21._12_4_;
 auVar11._4_4_ = iVar34 + -0x18;
 auVar11._12_4_ = iVar36 + -0x18;
 iVar33 = iVar34 + -0x1c;
 iVar19 = auVar21._0_4_ * auVar16._0_4_ * iVar5 * (iVar5 + -8) * (iVar5 + -0x18);
 uVar23 = (int)
 (((auVar21._8_8_ & 0xffffffff) *
 (((auVar16._8_8_ & 0xffffffff) * (unsigned long)uVar35 & 0xffffffff) *
 (unsigned long)(uVar35 - 8) & 0xffffffff) & 0xffffffff) * (unsigned long)(uVar35 - 0x18));
 auVar17._4_4_ = uVar23;
 auVar17._0_4_ = iVar19;
 auVar11._0_4_ = auVar11._4_4_;
 auVar11._8_4_ = auVar11._12_4_;
 auVar17._8_4_ = uVar23;
 auVar17._12_4_ =
 (int)((auVar11._8_8_ & 0xffffffff) *
 ((auVar24._8_8_ & 0xffffffff) *
 ((auVar25._8_8_ & 0xffffffff) *
 ((auVar37._8_8_ & 0xffffffff) * (unsigned long)auVar16._12_4_ & 0xffffffff) &
 0xffffffff) & 0xffffffff));
 auVar16._8_8_ = auVar17._8_8_;
 auVar16._4_4_ = auVar11._4_4_ * auVar21._4_4_ * auVar25._4_4_ * iVar34 * iVar18;
 auVar16._0_4_ = iVar19;
 iVar18 = auVar38._0_4_ * auVar10._0_4_ * auVar26._0_4_ * (iVar5 + -0xc) * (iVar5 + -0x1c);
 uVar23 = (int)
 (((auVar38._8_8_ & 0xffffffff) *
 (((auVar10._8_8_ & 0xffffffff) * (unsigned long)auVar26._8_4_ & 0xffffffff) *
 (unsigned long)(uVar35 - 0xc) & 0xffffffff) & 0xffffffff) * (unsigned long)(uVar35 - 0x1c));
 auVar27._4_4_ = uVar23;
 auVar27._0_4_ = iVar18;
 auVar12._4_4_ = iVar33;
 auVar12._0_4_ = iVar33;
 auVar12._8_4_ = iVar36 + -0x1c;
 auVar12._12_4_ = iVar36 + -0x1c;
 auVar27._8_4_ = uVar23;
 auVar27._12_4_ =
 (int)((auVar12._8_8_ & 0xffffffff) *
 ((unsigned long)auVar38._12_4_ *
 ((auVar30._8_8_ & 0xffffffff) *
 ((auVar20._8_8_ & 0xffffffff) * (unsigned long)auVar26._12_4_ & 0xffffffff) &
 0xffffffff) & 0xffffffff));
 auVar26._8_8_ = auVar27._8_8_;
 auVar26._4_4_ = iVar33 * auVar38._4_4_ * auVar30._4_4_ * auVar10._4_4_ * iVar29;
 auVar26._0_4_ = iVar18;
 iVar5 = iVar5 + -0x20;
 iVar34 = iVar34 + -0x20;
 uVar35 = uVar35 - 0x20;
 iVar36 = iVar36 + -0x20;
 uVar7 = uVar7 - 4;
 } while (uVar7 != 0);
 }
 while( true ) {
 auVar28._4_4_ = auVar26._4_4_;
 auVar28._12_4_ = auVar26._12_4_;
 if (uVar3 == 0) break;
 auVar13._0_4_ = iVar5 + -4;
 auVar13._4_4_ = iVar34 + -4;
 auVar13._8_4_ = uVar35 - 4;
 auVar13._12_4_ = iVar36 - 4;
 auVar2._4_4_ = iVar34;
 auVar2._0_4_ = iVar5;
 auVar2._8_4_ = uVar35;
 auVar2._12_4_ = iVar36;
 auVar31._0_4_ = iVar5 * auVar16._0_4_;
 auVar32._8_4_ = (int)((auVar2._8_8_ & 0xffffffff) * (unsigned long)auVar16._8_4_);
 auVar32._4_4_ = auVar32._8_4_;
 auVar32._0_4_ = auVar31._0_4_;
 auVar39._4_4_ = iVar34;
 auVar39._0_4_ = iVar34;
 auVar39._8_4_ = iVar36;
 auVar39._12_4_ = iVar36;
 auVar32._12_4_ = (int)((auVar39._8_8_ & 0xffffffff) * (unsigned long)auVar16._12_4_);
 auVar31._8_8_ = auVar32._8_8_;
 auVar31._4_4_ = iVar34 * auVar16._4_4_;
 auVar14._0_4_ = auVar13._0_4_ * auVar26._0_4_;
 auVar15._8_4_ = (int)((auVar13._8_8_ & 0xffffffff) * (unsigned long)auVar26._8_4_);
 auVar15._4_4_ = auVar15._8_4_;
 auVar15._0_4_ = auVar14._0_4_;
 auVar28._0_4_ = auVar28._4_4_;
 auVar28._8_4_ = auVar28._12_4_;
 auVar15._12_4_ = (int)((auVar28._8_8_ & 0xffffffff) * (unsigned long)auVar13._12_4_);
 auVar14._8_8_ = auVar15._8_8_;
 auVar14._4_4_ = auVar28._4_4_ * auVar13._4_4_;
 iVar34 = iVar34 + -8;
 uVar35 = uVar35 - 8;
 iVar36 = iVar36 + -8;
 uVar3 = uVar3 - 1;
 auVar16 = auVar31;
 auVar26 = auVar14;
 iVar5 = iVar5 + -8;
 }
 auVar22._4_4_ = auVar28._4_4_;
 auVar22._0_4_ = auVar28._4_4_;
 auVar22._8_4_ = auVar28._12_4_;
 auVar22._12_4_ = auVar28._12_4_;
 uVar9 = (((auVar22._8_8_ & 0xffffffff) * (unsigned long)auVar16._12_4_ & 0xffffffff) *
 ((unsigned long)auVar28._4_4_ * (unsigned long)auVar16._4_4_ & 0xffffffff) & 0xffffffff) *
 (((auVar26._8_8_ & 0xffffffff) * (unsigned long)auVar16._8_4_ & 0xffffffff) *
 ((unsigned long)auVar26._0_4_ * (unsigned long)auVar16._0_4_ & 0xffffffff) & 0xffffffff);
 uVar4 = uVar9 & 0xffffffff;
 if (uVar6 == uVar8) {
 return (int)uVar9;
 }
 x = x - uVar8;
 }
 do {
 uVar6 = (int)uVar4 * x;
 uVar4 = (unsigned long)uVar6;
 bVar1 = 2 < (unsigned int)x;
 x = x - 1;
 } while (bVar1);
 }
 return uVar6;
}



/* Function: double_value @ 00102110 */

int double_value(int x)

{
 return x * 2;
}



/* Function: triple_value @ 00102120 */

int triple_value(int x)

{
 return x * 3;
}



/* Function: call_virtual_func @ 00102130 */

int call_virtual_func(void *obj,int x)

{
 return x * 2;
}



/* Function: process_with_callback @ 00102140 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 unsigned long uVar2;
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
 } while ((unsigned int)n != uVar2);
 }
 return iVar3;
}



/* Function: test_control_flow_l2 @ 00102190 */

/* WARNING: Removing unreachable block (ram,0x00102332) */
/* WARNING: Removing unreachable block (ram,0x00102324) */
/* WARNING: Removing unreachable block (ram,0x0010221a) */
/* WARNING: Removing unreachable block (ram,0x00102215) */
/* WARNING: Removing unreachable block (ram,0x00102210) */
/* WARNING: Removing unreachable block (ram,0x00102337) */
/* WARNING: Removing unreachable block (ram,0x0010232d) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 unsigned int uVar1;
 int iVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 
 /* Unresolved local var: int flag@[???]
 Unresolved local var: int ext_flag@[???]
 Unresolved local var: int[8] src@[???]
 Unresolved local var: int[8] dst@[???]
 Unresolved local var: int[5] arr@[???] */
 puts(&DAT_00103809);
 printf("CF-L2-01 (loop_multi_exit): %d\n",0xc);
 /* Unresolved local var: int count@[???] */
 for (iVar2 = 0; iVar2 != 1000; iVar2 = iVar2 + 4) {
 }
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 uVar4 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 uVar3 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 printf("CF-L2-05 (duffs_device): %d\n",8);
 iVar2 = 0xb;
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int c@[???] */
 do {
 uVar1 = uVar3 - 8;
 uVar3 = uVar3 + 2;
 if (iVar2 - 2U <= uVar1) break;
 uVar4 = uVar4 + 1;
 iVar2 = iVar2 + -1;
 } while (uVar4 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",(unsigned long)uVar3);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 /* Unresolved local var: int count@[???] */
 for (iVar2 = 0; iVar2 != 100; iVar2 = iVar2 + 4) {
 }
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



/* Function: non_local_jump @ 001023e0 */

int non_local_jump(int x)

{
 int iVar1;
 int iVar2;
 jmp_buf jump_buffer;
 
 iVar1 = _setjmp(jump_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 if (x < 0) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
 }
 if (100 < (unsigned int)x) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 iVar2 = x * 2;
 }
 return iVar2;
}



/* Function: cpp_exception @ 00102430 */

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



/* Function: large_jump_table @ 00102450 */

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



/* Function: op_add @ 00102470 */

int op_add(int a,int b)

{
 return a + b;
}



/* Function: op_sub @ 00102480 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 00102490 */

int op_mul(int a,int b)

{
 return a * b;
}



/* Function: op_div @ 001024a0 */

int op_div(int a,int b)

{
 if (b != 0) {
 return a / b;
 }
 return 0;
}



/* Function: op_mod @ 001024b0 */

int op_mod(int a,int b)

{
 if (b != 0) {
 return a % b;
 }
 return 0;
}



/* Function: op_and @ 001024c0 */

int op_and(int a,int b)

{
 return a & b;
}



/* Function: op_or @ 001024d0 */

int op_or(int a,int b)

{
 return a | b;
}



/* Function: op_xor @ 001024e0 */

int op_xor(int a,int b)

{
 return a ^ b;
}



/* Function: op_shl @ 001024f0 */

int op_shl(int a,int b)

{
 return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 00102500 */

int op_shr(int a,int b)

{
 return a >> ((byte)b & 0x1f);
}



/* Function: conditional_func_ptr @ 00102510 */

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
 /* WARNING: Could not recover jumptable at 0x00102534. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*UNRECOVERED_JUMPTABLE)(x);
 return iVar1;
}



/* Function: state_machine @ 00102540 */

int state_machine(int event,int state)

{
 int iVar1;
 
 switch(state) {
 case 0:
 return (unsigned int)(event == 1);
 case 1:
 iVar1 = (unsigned int)(event == 99) * 2 + 1;
 if (event == 2) {
 iVar1 = 2;
 }
 return iVar1;
 case 2:
 break;
 case 3:
 return (unsigned int)(event != 0) * 3;
 default:
 state = 3;
 }
 return state;
}



/* Function: fsm_func_table @ 00102590 */

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
 return (unsigned int)(event != 0) * 3;
 default:
 return 3;
 }
 iVar1 = (unsigned int)(event == 99) * 2 + 1;
 if (event == 2) {
 iVar1 = 2;
 }
 return iVar1;
}



/* Function: state_idle @ 001025b0 */

int state_idle(int event)

{
 return (int)(event == 1);
}



/* Function: state_processing @ 001025c0 */

int state_processing(int event)

{
 int iVar1;
 
 iVar1 = (unsigned int)(event == 99) * 2 + 1;
 if (event == 2) {
 iVar1 = 2;
 }
 return iVar1;
}



/* Function: state_done @ 001025e0 */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 001025f0 */

int state_error(int event)

{
 return (unsigned int)(event != 0) * 3;
}



/* Function: computed_goto @ 00102600 */

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



/* Function: obfuscated_cf @ 00102630 */

int obfuscated_cf(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg5(RDI)] */
 return x * 2;
}



/* Function: opaque_predicate @ 00102640 */

int opaque_predicate(int x)

{
 /* Unresolved local var: int cond@[???] */
 return x * 2;
}



/* Function: overlapped_code @ 00102650 */

int overlapped_code(int x)

{
 if ((x & 1U) == 0) {
 return x / 2;
 }
 return x * 3 + 1;
}



/* Function: test_control_flow_l3 @ 00102670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 unsigned int uVar1;
 char *labels;
 
 /* Unresolved local var: int[4] labels@[???] */
 puts(&DAT_0010382d);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",(unsigned long)uVar1);
 uVar1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",(unsigned long)uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 labels = "CF-L3-06 (fsm_func_table): %d\n";
 printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto((int *)labels,2);
 printf("CF-L3-07 (computed_goto): %d\n",(unsigned long)uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 00102780 */

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
