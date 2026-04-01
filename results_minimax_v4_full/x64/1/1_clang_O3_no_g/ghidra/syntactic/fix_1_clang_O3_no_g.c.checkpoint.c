/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/1/1_clang_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdbool.h>
#include <setjmp.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */


/* Global data declarations */
jmp_buf jump_buffer;
unsigned int DAT_00103280[] = {0, 10, 20, 30};
unsigned int _DAT_00103140 = 0;
unsigned int _DAT_00103160 = 0;
int DAT_00103108[] = {0};
int DAT_001030d8[] = {0};
char DAT_001037e5[] = "Control Flow Tests - Level 1";
char DAT_00103809[] = "Control Flow Tests - Level 2";
char DAT_0010382d[] = "Control Flow Tests - Level 3";

/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(void (*)(void))0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: sequential_ops @ 00101170 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 00101180 */

int single_if(int param_1)

{
 return param_1 << (0 < param_1);
}



/* Function: if_else @ 00101190 */

int if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 001011a0 */

int nested_if_2(int param_1,int param_2)

{
 if (param_2 < 0) {
 param_2 = 0;
 }
 param_2 = param_2 + param_1;
 if (param_1 < 1) {
 param_2 = 0;
 }
 return param_2;
}



/* Function: nested_if_deep @ 001011b0 */

unsigned char nested_if_deep(int param_1, int param_2, int param_3, int param_4, int param_5)

{
 if (param_1 < 1) {
 return 0;
 }
 if (param_2 < 1) {
 return 1;
 }
 if (param_3 < 1) {
 return 2;
 }
 if (0 < param_4) {
 return 0 < param_5 | 4;
 }
 return 3;
}



/* Function: if_elseif_chain @ 001011f0 */

int if_elseif_chain(unsigned int param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 00101210 */

int if_elseif_long(unsigned int param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = param_1 * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_small @ 00101230 */

int switch_small(unsigned int param_1)

{
 int uVar1;
 
 uVar1 = -1;
 if (param_1 < 4) {
 uVar1 = *(int *)(&DAT_00103280 + (long)(int)param_1 * 4);
 }
 return uVar1;
}



/* Function: switch_large @ 00101250 */

int switch_large(unsigned int param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}



/* Function: switch_default @ 00101270 */

int switch_default(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = (param_1 - 1U) * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00101290 */

int switch_fallthrough(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 != 1) {
 if (param_1 != 2) {
 if (param_1 != 3) {
 return -1;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
 }
 return iVar1 + param_1;
}



/* Function: loop_for_fixed @ 001012c0 */

int loop_for_fixed(int param_1)

{
 if (0 < param_1) {
 return (int)((unsigned long)(param_1 - 2) * (unsigned long)(param_1 - 1) >> 1) + param_1 + -1;
 }
 return 0;
}



/* Function: loop_while @ 001012e0 */

int loop_while(int param_1)

{
 int iVar1;
 unsigned int uVar2;
 
 if (param_1 != 0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
 }
 return 1;
}



/* Function: loop_dowhile @ 00101320 */

int loop_dowhile(int param_1)

{
 int iVar1;
 unsigned int uVar2;
 
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
}



/* Function: loop_nested @ 00101360 */

int loop_nested(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = param_2 * param_1;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 if (param_1 < 1) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: loop_break @ 00101380 */

unsigned long loop_break(int param_1)

{
 unsigned long uVar1;
 
 uVar1 = 0;
 switch(param_1) {
 case 10:
 break;
 default:
 return 0xffffffff;
 case 0x14:
 return 1;
 case 0x1e:
 return 2;
 case 0x28:
 return 3;
 case 0x32:
 uVar1 = 4;
 }
 return uVar1;
}



/* Function: loop_continue @ 001013c0 */

/* WARNING: Removing unreachable block (ram,0x0010152b) */

int loop_continue(unsigned int param_1)

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
 
 if ((int)param_1 < 1) {
 return 0;
 }
 if (param_1 < 8) {
 iVar2 = 0;
 uVar3 = 1;
 goto LAB_001014fb;
 }
 uVar3 = param_1 & 0xfffffff8;
 uVar1 = (uVar3 - 8 >> 3) + 1;
 if (uVar3 - 8 == 0) {
 iVar2 = 0;
 iVar5 = 0;
 uVar10 = 1;
 uVar11 = 3;
 iVar7 = 0;
 iVar9 = 0;
LAB_001014a6:
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
 if ((uVar1 & 1) != 0) goto LAB_001014a6;
 }
 iVar2 = iVar5 + iVar9 + iVar2 + iVar7;
 if (uVar3 == param_1) {
 return iVar2;
 }
 uVar3 = uVar3 | 1;
LAB_001014fb:
 do {
 iVar2 = iVar2 + (-(uVar3 & 1) & uVar3);
 uVar3 = uVar3 + 1;
 } while (param_1 + 1 != uVar3);
 return iVar2;
}



/* Function: goto_forward @ 00101530 */

int goto_forward(int param_1)

{
 int iVar1;
 
 iVar1 = 1;
 if (0 < param_1) {
 iVar1 = param_1;
 }
 return iVar1 * param_1 * 2;
}



/* Function: goto_backward @ 00101540 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

typedef union {
    unsigned long u[16];
    struct {
        unsigned long _0_4_;
        unsigned long _4_4_;
        unsigned long _8_4_;
        unsigned long _12_4_;
    };
    struct {
        unsigned long _0_8_;
        unsigned long _8_8_;
    };
} auVar_t;

unsigned long goto_backward(unsigned int param_1)

{
 unsigned int uVar1;
 unsigned long uVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 auVar_t auVar5;
 auVar_t auVar6;
 int iVar10;
 auVar_t auVar8;
 auVar_t auVar9;
 unsigned int uVar15;
 auVar_t auVar11;
 auVar_t auVar12;
 auVar_t auVar13;
 auVar_t auVar14;
 auVar_t auVar16;
 int iVar21;
 auVar_t auVar17;
 int iVar22;
 auVar_t auVar19;
 auVar_t auVar20;
 int iVar28;
 auVar_t auVar24;
 auVar_t auVar25;
 auVar_t auVar31;
 auVar_t auVar32;
 auVar_t auVar33;
 auVar_t auVar36;
 auVar_t auVar37;
 auVar_t auVar38;
 auVar_t auVar7;
 auVar_t auVar18;
 int iVar23;
 auVar_t auVar26;
 int iVar27;
 unsigned int uVar29;
 int iVar30;
 auVar_t auVar34;
 int iVar35;
 
 if ((int)param_1 < 1) {
 return 1;
 }
 uVar3 = 1;
 uVar2 = 1;
 if (7 < param_1) {
 uVar3 = param_1 & 0xfffffff8;
 uVar4 = (uVar3 - 8 >> 3) + 1;
 uVar1 = uVar4 & 3;
 auVar5.u[0] = _DAT_00103140;
 auVar7.u[0] = _DAT_00103160;
 auVar18.u[0] = _DAT_00103160;
 if (0x17 < uVar3 - 8) {
 uVar4 = uVar4 & 0xfffffffc;
 do {
 iVar23 = auVar5._0_4_;
 auVar24._0_4_ = iVar23 + 4;
 iVar27 = auVar5._4_4_;
 auVar24._4_4_ = iVar27 + 4;
 uVar29 = auVar5._8_4_;
 iVar30 = auVar5._12_4_;
 auVar24._8_4_ = uVar29 + 4;
 auVar24._12_4_ = iVar30 + 4;
 iVar10 = auVar7._4_4_;
 auVar36._4_4_ = iVar27;
 auVar36._0_4_ = iVar27;
 auVar36._8_4_ = iVar30;
 auVar36._12_4_ = iVar30;
 iVar21 = auVar18._4_4_;
 auVar11._4_4_ = auVar24._4_4_;
 auVar11._0_4_ = auVar24._4_4_;
 auVar11._8_4_ = auVar24._12_4_;
 auVar11._12_4_ = auVar24._12_4_;
 auVar17._4_4_ = iVar27 + 8;
 auVar17._12_4_ = iVar30 + 8;
 auVar31._4_4_ = iVar27 + 0xc;
 auVar31._12_4_ = iVar30 + 0xc;
 auVar17._0_4_ = auVar17._4_4_;
 auVar17._8_4_ = auVar17._12_4_;
 auVar31._0_4_ = auVar31._4_4_;
 auVar31._8_4_ = auVar31._12_4_;
 auVar12._0_4_ = iVar23 + 0x10;
 auVar12._4_4_ = iVar27 + 0x10;
 auVar12._8_4_ = uVar29 + 0x10;
 auVar12._12_4_ = iVar30 + 0x10;
 auVar37._0_4_ = iVar23 + 0x14;
 auVar37._4_4_ = iVar27 + 0x14;
 auVar37._8_4_ = uVar29 + 0x14;
 auVar37._12_4_ = iVar30 + 0x14;
 auVar16._4_4_ = auVar12._4_4_;
 auVar16._0_4_ = auVar12._4_4_;
 auVar16._8_4_ = auVar12._12_4_;
 auVar16._12_4_ = auVar12._12_4_;
 iVar22 = iVar27 + 0x18;
 iVar28 = iVar27 + 0x1c;
 iVar35 = auVar12._0_4_ * auVar7._0_4_ * iVar23 * (iVar23 + 8) * (iVar23 + 0x18);
 uVar15 = (unsigned int)
 (((auVar12._8_8_ & 0xffffffff) *
 (((auVar7._8_8_ & 0xffffffff) * (unsigned long)uVar29 & 0xffffffff) * (unsigned long)(uVar29 + 8)
 & 0xffffffff) & 0xffffffff) * (unsigned long)(uVar29 + 0x18));
 auVar8._4_4_ = uVar15;
 auVar8._0_4_ = iVar35;
 auVar13._4_4_ = iVar22;
 auVar13._0_4_ = iVar22;
 auVar13._8_4_ = iVar30 + 0x18;
 auVar13._12_4_ = iVar30 + 0x18;
 auVar8._8_4_ = uVar15;
 auVar8._12_4_ =
 (int)((auVar13._8_8_ & 0xffffffff) *
 ((auVar16._8_8_ & 0xffffffff) *
 ((auVar17._8_8_ & 0xffffffff) *
 ((auVar36._8_8_ & 0xffffffff) * (unsigned long)auVar7._12_4_ & 0xffffffff) & 0xffffffff)
 & 0xffffffff));
 auVar7._8_8_ = auVar8._8_8_;
 auVar7._4_4_ = iVar22 * auVar12._4_4_ * auVar17._4_4_ * iVar27 * iVar10;
 auVar7._0_4_ = iVar35;
 iVar10 = auVar37._0_4_ * auVar24._0_4_ * auVar18._0_4_ * (iVar23 + 0xc) * (iVar23 + 0x1c);
 uVar15 = (unsigned int)
 (((auVar37._8_8_ & 0xffffffff) *
 (((auVar24._8_8_ & 0xffffffff) * (unsigned long)auVar18._8_4_ & 0xffffffff) *
 (unsigned long)(uVar29 + 0xc) & 0xffffffff) & 0xffffffff) * (unsigned long)(uVar29 + 0x1c));
 auVar19._4_4_ = uVar15;
 auVar19._0_4_ = iVar10;
 auVar14._4_4_ = iVar28;
 auVar14._0_4_ = iVar28;
 auVar14._8_4_ = iVar30 + 0x1c;
 auVar14._12_4_ = iVar30 + 0x1c;
 auVar19._8_4_ = uVar15;
 auVar19._12_4_ =
 (int)((auVar14._8_8_ & 0xffffffff) *
 ((unsigned long)auVar37._12_4_ *
 ((auVar31._8_8_ & 0xffffffff) *
 ((auVar11._8_8_ & 0xffffffff) * (unsigned long)auVar18._12_4_ & 0xffffffff) & 0xffffffff
 ) & 0xffffffff));
 auVar18._8_8_ = auVar19._8_8_;
 auVar18._4_4_ = iVar28 * auVar37._4_4_ * auVar31._4_4_ * auVar24._4_4_ * iVar21;
 auVar18._0_4_ = iVar10;
 auVar5._0_4_ = iVar23 + 0x20;
 auVar5._4_4_ = iVar27 + 0x20;
 auVar5._8_4_ = uVar29 + 0x20;
 auVar5._12_4_ = iVar30 + 0x20;
 uVar4 = uVar4 - 4;
 } while (uVar4 != 0);
 }
 while( true ) {
 auVar20._4_4_ = auVar18._4_4_;
 auVar20._12_4_ = auVar18._12_4_;
 if (uVar1 == 0) break;
 iVar10 = auVar5._0_4_;
 auVar32._0_4_ = iVar10 + 4;
 iVar35 = auVar5._4_4_;
 auVar32._4_4_ = iVar35 + 4;
 iVar21 = auVar5._12_4_;
 auVar32._8_4_ = auVar5._8_4_ + 4;
 auVar32._12_4_ = iVar21 + 4;
 auVar25._0_4_ = iVar10 * auVar7._0_4_;
 auVar26._8_4_ = (unsigned int)((auVar5._8_8_ & 0xffffffff) * (unsigned long)auVar7._8_4_);
 auVar26._4_4_ = auVar26._8_4_;
 auVar26._0_4_ = auVar25._0_4_;
 auVar38._4_4_ = iVar35;
 auVar38._0_4_ = iVar35;
 auVar38._8_4_ = iVar21;
 auVar38._12_4_ = iVar21;
 auVar26._12_4_ = (int)((auVar38._8_8_ & 0xffffffff) * (unsigned long)auVar7._12_4_);
 auVar25._8_8_ = auVar26._8_8_;
 auVar25._4_4_ = iVar35 * auVar7._4_4_;
 auVar33._0_4_ = auVar32._0_4_ * auVar18._0_4_;
 auVar34._8_4_ = (unsigned int)((auVar32._8_8_ & 0xffffffff) * (unsigned long)auVar18._8_4_);
 auVar34._4_4_ = auVar34._8_4_;
 auVar34._0_4_ = auVar33._0_4_;
 auVar20._0_4_ = auVar20._4_4_;
 auVar20._8_4_ = auVar20._12_4_;
 auVar34._12_4_ = (int)((auVar20._8_8_ & 0xffffffff) * (unsigned long)auVar32._12_4_);
 auVar33._8_8_ = auVar34._8_8_;
 auVar33._4_4_ = auVar20._4_4_ * auVar32._4_4_;
 auVar6._0_4_ = iVar10 + 8;
 auVar6._4_4_ = iVar35 + 8;
 auVar6._8_4_ = auVar5._8_4_ + 8;
 auVar6._12_4_ = iVar21 + 8;
 uVar1 = uVar1 - 1;
 auVar5 = auVar6;
 auVar7 = auVar25;
 auVar18 = auVar33;
 }
 auVar9._4_4_ = auVar20._4_4_;
 auVar9._0_4_ = auVar20._4_4_;
 auVar9._8_4_ = auVar20._12_4_;
 auVar9._12_4_ = auVar20._12_4_;
 uVar2 = (((auVar9._8_8_ & 0xffffffff) * (unsigned long)auVar7._12_4_ & 0xffffffff) *
 ((unsigned long)auVar20._4_4_ * (unsigned long)auVar7._4_4_ & 0xffffffff) & 0xffffffff) *
 (((auVar18._8_8_ & 0xffffffff) * (unsigned long)auVar7._8_4_ & 0xffffffff) *
 ((unsigned long)auVar18._0_4_ * (unsigned long)auVar7._0_4_ & 0xffffffff) & 0xffffffff) & 0xffffffff;
 if (uVar3 == param_1) {
 return uVar2;
 }
 uVar3 = uVar3 | 1;
 }
 do {
 uVar2 = (unsigned long)((int)uVar2 * uVar3);
 uVar3 = uVar3 + 1;
 } while (param_1 + 1 != uVar3);
 return uVar2;
}



/* Function: ternary_op @ 001017a0 */

int ternary_op(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: test_control_flow_l1 @ 001017b0 */

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



/* Function: loop_multi_exit @ 001019b0 */

int loop_multi_exit(int param_1)

{
 int iVar1;
 unsigned int uVar2;
 
 uVar2 = param_1 - 1;
 iVar1 = -1;
 if (uVar2 < 0xc) {
 iVar1 = *(int *)(&DAT_00103108 + (long)(int)uVar2 * 4) +
 *(int *)(&DAT_001030d8 + (long)(int)uVar2 * 4);
 }
 return iVar1;
}



/* Function: infinite_loop @ 001019e0 */

int infinite_loop(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 iVar1 = *param_1;
 while( true ) {
 if (iVar1 == 1) {
 return iVar2;
 }
 if (iVar2 == 1000) {
 *param_1 = 1;
 return 0x3e9;
 }
 if (*param_1 == 1) {
 return iVar2 + 1;
 }
 if (*param_1 == 1) break;
 if (*param_1 == 1) {
 return iVar2 + 3;
 }
 iVar2 = iVar2 + 4;
 iVar1 = *param_1;
 }
 return iVar2 + 2;
}



/* Function: multi_return @ 00101a30 */

int multi_return(unsigned int param_1)

{
 int iVar1;
 
 if (-1 < (int)param_1) {
 iVar1 = -2;
 if (param_1 < 0x33) {
 iVar1 = param_1 + 1;
 if ((param_1 & 1) == 0) {
 iVar1 = param_1 * 2;
 }
 }
 return iVar1;
 }
 return -1;
}



/* Function: conditional_return @ 00101a60 */

int conditional_return(int param_1)

{
 int iVar1;
 
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 * 2;
 }
 return iVar1;
}



/* Function: duffs_device @ 00101a70 */

unsigned int duffs_device(int *param_1, int *param_2, unsigned int param_3)

{
 int uVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 
 uVar4 = 0xffffffff;
 if (0 < (int)param_3) {
 uVar2 = param_3 + 7 >> 3;
 uVar3 = uVar2;
 switch(param_3 & 7) {
 case 1:
 goto switchD_00101a96_caseD_1;
 case 2:
 goto switchD_00101a96_caseD_2;
 case 3:
 goto switchD_00101a96_caseD_3;
 case 4:
 goto switchD_00101a96_caseD_4;
 case 5:
 goto switchD_00101a96_caseD_5;
 case 6:
 goto switchD_00101a96_caseD_6;
 case 7:
 goto switchD_00101a96_caseD_7;
 }
 do {
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar3 = uVar2;
switchD_00101a96_caseD_7:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a96_caseD_6:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a96_caseD_5:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a96_caseD_4:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a96_caseD_3:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a96_caseD_2:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a96_caseD_1:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar2 = uVar3 - 1;
 uVar4 = param_3;
 } while (1 < (int)uVar3);
 }
 return uVar4;
}



/* Function: loop_complex_cond @ 00101b10 */

unsigned int loop_complex_cond(unsigned int param_1)

{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 bool bVar5;
 
 if ((int)param_1 < 1) {
 return param_1;
 }
 iVar1 = 0;
 uVar3 = 0;
 do {
 iVar1 = iVar1 + 2;
 uVar4 = param_1 - 1;
 uVar2 = uVar3 + 1;
 if ((param_1 < 2) || ((int)uVar4 <= iVar1)) break;
 bVar5 = uVar3 < 9;
 param_1 = uVar4;
 uVar3 = uVar2;
 } while (bVar5);
 return iVar1 + uVar4 + uVar2;
}



/* Function: loop_modify_var @ 00101b50 */

int loop_modify_var(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar3 = iVar2 + 2;
 if (iVar2 < 6) {
 iVar3 = iVar2;
 }
 iVar2 = iVar3 + 1;
 } while (iVar2 < param_1);
 return iVar1;
 }
 return 0;
}



/* Function: loop_external_state @ 00101b80 */

int loop_external_state(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 iVar1 = *param_1;
 while( true ) {
 if (iVar1 != 0) {
 return iVar2;
 }
 if (iVar2 == 100) {
 return 0x65;
 }
 if (*param_1 != 0) {
 return iVar2 + 1;
 }
 if (*param_1 != 0) break;
 if (*param_1 != 0) {
 return iVar2 + 3;
 }
 iVar2 = iVar2 + 4;
 iVar1 = *param_1;
 }
 return iVar2 + 2;
}



/* Function: recursion_factorial @ 00101bc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned long recursion_factorial(unsigned int param_1)

{
 bool bVar1;
 auVar_t auVar2;
 unsigned int uVar3;
 unsigned long uVar4;
 int iVar5;
 unsigned int uVar6;
 unsigned int uVar7;
 unsigned int uVar8;
 auVar_t auVar9;
 auVar_t auVar10;
 auVar_t auVar11;
 auVar_t auVar12;
 auVar_t auVar13;
 int iVar17;
 auVar_t auVar16;
 int iVar18;
 unsigned int uVar22;
 auVar_t auVar19;
 auVar_t auVar20;
 auVar_t auVar21;
 auVar_t auVar23;
 int iVar28;
 auVar_t auVar24;
 auVar_t auVar26;
 auVar_t auVar27;
 int iVar32;
 auVar_t auVar29;
 auVar_t auVar30;
 unsigned int uVar33;
 unsigned int uVar34;
 int iVar35;
 auVar_t auVar36;
 auVar_t auVar37;
 auVar_t auVar38;
 auVar_t auVar14;
 auVar_t auVar15;
 auVar_t auVar25;
 auVar_t auVar31;
 
 uVar4 = 1;
 if (1 < (int)param_1) {
 iVar5 = param_1 - 2;
 if (param_1 < 2) {
 iVar5 = 0;
 }
 uVar6 = iVar5 + 1;
 uVar4 = 1;
 if (7 < uVar6) {
 uVar8 = uVar6 & 0xfffffff8;
 iVar5 = param_1 - 1;
 uVar34 = param_1 - 2;
 iVar35 = param_1 - 3;
 uVar7 = (uVar8 - 8 >> 3) + 1;
 uVar3 = uVar7 & 3;
 auVar15.u[0] = _DAT_00103160;
 auVar25.u[0] = _DAT_00103160;
 uVar33 = param_1;
 if (0x17 < uVar8 - 8) {
 uVar7 = uVar7 & 0xfffffffc;
 do {
 auVar9._0_4_ = uVar33 - 4;
 auVar9._4_4_ = iVar5 + -4;
 auVar9._8_4_ = uVar34 - 4;
 auVar9._12_4_ = iVar35 + -4;
 iVar17 = auVar15._4_4_;
 auVar36._4_4_ = iVar5;
 auVar36._0_4_ = iVar5;
 auVar36._8_4_ = iVar35;
 auVar36._12_4_ = iVar35;
 iVar28 = auVar25._4_4_;
 auVar19._4_4_ = auVar9._4_4_;
 auVar19._0_4_ = auVar9._4_4_;
 auVar19._8_4_ = auVar9._12_4_;
 auVar19._12_4_ = auVar9._12_4_;
 auVar24._4_4_ = iVar5 + -8;
 auVar24._12_4_ = iVar35 + -8;
 auVar29._4_4_ = iVar5 + -0xc;
 auVar29._12_4_ = iVar35 + -0xc;
 auVar24._0_4_ = auVar24._4_4_;
 auVar24._8_4_ = auVar24._12_4_;
 auVar29._0_4_ = auVar29._4_4_;
 auVar29._8_4_ = auVar29._12_4_;
 auVar20._0_4_ = uVar33 - 0x10;
 auVar20._4_4_ = iVar5 + -0x10;
 auVar20._8_4_ = uVar34 - 0x10;
 auVar20._12_4_ = iVar35 + -0x10;
 auVar37._0_4_ = uVar33 - 0x14;
 auVar37._4_4_ = iVar5 + -0x14;
 auVar37._8_4_ = uVar34 - 0x14;
 auVar37._12_4_ = iVar35 - 0x14;
 auVar23._4_4_ = auVar20._4_4_;
 auVar23._0_4_ = auVar20._4_4_;
 auVar23._8_4_ = auVar20._12_4_;
 auVar23._12_4_ = auVar20._12_4_;
 auVar10._4_4_ = iVar5 + -0x18;
 auVar10._12_4_ = iVar35 + -0x18;
 iVar32 = iVar5 + -0x1c;
 iVar18 = auVar20._0_4_ * auVar15._0_4_ * uVar33 * (uVar33 - 8) * (uVar33 - 0x18);
 uVar22 = (unsigned int)
 (((auVar20._8_8_ & 0xffffffff) *
 (((auVar15._8_8_ & 0xffffffff) * (unsigned long)uVar34 & 0xffffffff) *
 (unsigned long)(uVar34 - 8) & 0xffffffff) & 0xffffffff) * (unsigned long)(uVar34 - 0x18));
 auVar16._4_4_ = uVar22;
 auVar16._0_4_ = iVar18;
 auVar10._0_4_ = auVar10._4_4_;
 auVar10._8_4_ = auVar10._12_4_;
 auVar16._8_4_ = uVar22;
 auVar16._12_4_ =
 (int)((auVar10._8_8_ & 0xffffffff) *
 ((auVar23._8_8_ & 0xffffffff) *
 ((auVar24._8_8_ & 0xffffffff) *
 ((auVar36._8_8_ & 0xffffffff) * (unsigned long)auVar15._12_4_ & 0xffffffff) &
 0xffffffff) & 0xffffffff));
 auVar15._8_8_ = auVar16._8_8_;
 auVar15._4_4_ = auVar10._4_4_ * auVar20._4_4_ * auVar24._4_4_ * iVar5 * iVar17;
 auVar15._0_4_ = iVar18;
 iVar17 = auVar37._0_4_ * auVar9._0_4_ * auVar25._0_4_ * (uVar33 - 0xc) * (uVar33 - 0x1c);
 uVar22 = (unsigned int)
 (((auVar37._8_8_ & 0xffffffff) *
 (((auVar9._8_8_ & 0xffffffff) * (unsigned long)auVar25._8_4_ & 0xffffffff) *
 (unsigned long)(uVar34 - 0xc) & 0xffffffff) & 0xffffffff) * (unsigned long)(uVar34 - 0x1c));
 auVar26._4_4_ = uVar22;
 auVar26._0_4_ = iVar17;
 auVar11._4_4_ = iVar32;
 auVar11._0_4_ = iVar32;
 auVar11._8_4_ = iVar35 + -0x1c;
 auVar11._12_4_ = iVar35 + -0x1c;
 auVar26._8_4_ = uVar22;
 auVar26._12_4_ =
 (int)((auVar11._8_8_ & 0xffffffff) *
 ((unsigned long)auVar37._12_4_ *
 ((auVar29._8_8_ & 0xffffffff) *
 ((auVar19._8_8_ & 0xffffffff) * (unsigned long)auVar25._12_4_ & 0xffffffff) &
 0xffffffff) & 0xffffffff));
 auVar25._8_8_ = auVar26._8_8_;
 auVar25._4_4_ = iVar32 * auVar37._4_4_ * auVar29._4_4_ * auVar9._4_4_ * iVar28;
 auVar25._0_4_ = iVar17;
 uVar33 = uVar33 - 0x20;
 iVar5 = iVar5 + -0x20;
 uVar34 = uVar34 - 0x20;
 iVar35 = iVar35 + -0x20;
 uVar7 = uVar7 - 4;
 } while (uVar7 != 0);
 }
 while( true ) {
 auVar27._4_4_ = auVar25._4_4_;
 auVar27._12_4_ = auVar25._12_4_;
 if (uVar3 == 0) break;
 auVar12._0_4_ = uVar33 - 4;
 auVar12._4_4_ = iVar5 + -4;
 auVar12._8_4_ = uVar34 - 4;
 auVar12._12_4_ = iVar35 - 4;
 auVar2._4_4_ = iVar5;
 auVar2._0_4_ = uVar33;
 auVar2._8_4_ = uVar34;
 auVar2._12_4_ = iVar35;
 auVar30._0_4_ = uVar33 * auVar15._0_4_;
 auVar31._8_4_ = (unsigned int)((auVar2._8_8_ & 0xffffffff) * (unsigned long)auVar15._8_4_);
 auVar31._4_4_ = auVar31._8_4_;
 auVar31._0_4_ = auVar30._0_4_;
 auVar38._4_4_ = iVar5;
 auVar38._0_4_ = iVar5;
 auVar38._8_4_ = iVar35;
 auVar38._12_4_ = iVar35;
 auVar31._12_4_ = (int)((auVar38._8_8_ & 0xffffffff) * (unsigned long)auVar15._12_4_);
 auVar30._8_8_ = auVar31._8_8_;
 auVar30._4_4_ = iVar5 * auVar15._4_4_;
 auVar13._0_4_ = auVar12._0_4_ * auVar25._0_4_;
 auVar14._8_4_ = (unsigned int)((auVar12._8_8_ & 0xffffffff) * (unsigned long)auVar25._8_4_);
 auVar14._4_4_ = auVar14._8_4_;
 auVar14._0_4_ = auVar13._0_4_;
 auVar27._0_4_ = auVar27._4_4_;
 auVar27._8_4_ = auVar27._12_4_;
 auVar14._12_4_ = (int)((auVar27._8_8_ & 0xffffffff) * (unsigned long)auVar12._12_4_);
 auVar13._8_8_ = auVar14._8_8_;
 auVar13._4_4_ = auVar27._4_4_ * auVar12._4_4_;
 iVar5 = iVar5 + -8;
 uVar34 = uVar34 - 8;
 iVar35 = iVar35 + -8;
 uVar3 = uVar3 - 1;
 auVar15 = auVar30;
 auVar25 = auVar13;
 uVar33 = uVar33 - 8;
 }
 auVar21._4_4_ = auVar27._4_4_;
 auVar21._0_4_ = auVar27._4_4_;
 auVar21._8_4_ = auVar27._12_4_;
 auVar21._12_4_ = auVar27._12_4_;
 uVar4 = (((auVar21._8_8_ & 0xffffffff) * (unsigned long)auVar15._12_4_ & 0xffffffff) *
 ((unsigned long)auVar27._4_4_ * (unsigned long)auVar15._4_4_ & 0xffffffff) & 0xffffffff) *
 (((auVar25._8_8_ & 0xffffffff) * (unsigned long)auVar15._8_4_ & 0xffffffff) *
 ((unsigned long)auVar25._0_4_ * (unsigned long)auVar15._0_4_ & 0xffffffff) & 0xffffffff) & 0xffffffff
 ;
 if (uVar6 == uVar8) {
 return uVar4;
 }
 param_1 = param_1 - uVar8;
 }
 do {
 uVar4 = (unsigned long)((int)uVar4 * param_1);
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 }
 return uVar4;
}



/* Function: tail_recursion @ 00101e30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned long tail_recursion(unsigned int param_1,unsigned int param_2)

{
 bool bVar1;
 unsigned int uVar2;
 unsigned long uVar3;
 int iVar4;
 unsigned int uVar5;
 unsigned int uVar6;
 unsigned int uVar7;
 unsigned int uVar8;
 unsigned int uVar13;
 auVar_t auVar9;
 auVar_t auVar10;
 auVar_t auVar11;
 auVar_t auVar12;
 int iVar19;
 auVar_t auVar14;
 auVar_t auVar16;
 unsigned int uVar20;
 auVar_t auVar17;
 int iVar24;
 auVar_t auVar21;
 auVar_t auVar22;
 auVar_t auVar23;
 unsigned int uVar27;
 auVar_t auVar25;
 auVar_t auVar26;
 unsigned int uVar28;
 int iVar29;
 unsigned int uVar30;
 int iVar31;
 int iVar34;
 unsigned int uVar35;
 auVar_t auVar32;
 auVar_t auVar33;
 auVar_t auVar15;
 auVar_t auVar18;
 
 uVar3 = (unsigned long)param_2;
 if (1 < (int)param_1) {
 iVar4 = param_1 - 2;
 if (param_1 < 2) {
 iVar4 = 0;
 }
 uVar5 = iVar4 + 1;
 if (7 < uVar5) {
 uVar7 = uVar5 & 0xfffffff8;
 uVar8 = 1;
 uVar27 = 1;
 uVar13 = 1;
 iVar4 = param_1 - 1;
 iVar29 = param_1 - 2;
 uVar30 = param_1 - 3;
 uVar6 = (uVar7 - 8 >> 3) + 1;
 uVar2 = uVar6 & 3;
 auVar15.u[0] = _DAT_00103160;
 uVar28 = param_1;
 if (0x17 < uVar7 - 8) {
 uVar6 = uVar6 & 0xfffffffc;
 do {
 auVar9._0_4_ = uVar28 - 4;
 auVar9._4_4_ = iVar4 + -4;
 auVar9._8_4_ = iVar29 + -4;
 auVar9._12_4_ = uVar30 - 4;
 auVar21._4_4_ = uVar8;
 auVar21._0_4_ = uVar8;
 auVar21._8_4_ = uVar13;
 auVar21._12_4_ = uVar13;
 iVar19 = auVar15._4_4_;
 auVar25._4_4_ = auVar9._4_4_;
 auVar25._0_4_ = auVar9._4_4_;
 auVar25._8_4_ = auVar9._12_4_;
 auVar25._12_4_ = auVar9._12_4_;
 auVar14._4_4_ = iVar4 + -8;
 auVar14._12_4_ = uVar30 - 8;
 iVar34 = iVar4 + -0xc;
 auVar14._0_4_ = auVar14._4_4_;
 auVar14._8_4_ = auVar14._12_4_;
 auVar22._4_4_ = iVar34;
 auVar22._0_4_ = iVar34;
 auVar22._8_4_ = uVar30 - 0xc;
 auVar22._12_4_ = uVar30 - 0xc;
 auVar26._0_4_ = uVar28 - 0x10;
 auVar26._4_4_ = iVar4 + -0x10;
 auVar26._8_4_ = iVar29 + -0x10;
 auVar26._12_4_ = uVar30 - 0x10;
 auVar32._0_4_ = uVar28 - 0x14;
 auVar32._4_4_ = iVar4 + -0x14;
 auVar32._8_4_ = iVar29 + -0x14;
 auVar32._12_4_ = uVar30 - 0x14;
 auVar10._4_4_ = iVar4 + -0x18;
 auVar10._12_4_ = uVar30 - 0x18;
 iVar24 = iVar4 + -0x1c;
 param_2 = auVar26._0_4_ * param_2 * uVar28 * (uVar28 - 8) * (uVar28 - 0x18);
 uVar27 = (unsigned int)(((auVar26._8_8_ & 0xffffffff) *
 ((unsigned long)(uVar27 * iVar29) * (unsigned long)(iVar29 - 8) & 0xffffffff) &
 0xffffffff) * (unsigned long)(iVar29 - 0x18));
 auVar10._0_4_ = auVar10._4_4_;
 auVar10._8_4_ = auVar10._12_4_;
 uVar8 = auVar10._4_4_ * auVar26._4_4_ * auVar14._4_4_ * uVar8 * iVar4;
 uVar13 = (unsigned int)((auVar10._8_8_ & 0xffffffff) *
 ((unsigned long)auVar26._12_4_ *
 ((auVar14._8_8_ & 0xffffffff) *
 ((auVar21._8_8_ & 0xffffffff) * (unsigned long)uVar30 & 0xffffffff) & 0xffffffff)
 & 0xffffffff));
 iVar31 = auVar32._0_4_ * auVar9._0_4_ * auVar15._0_4_ * (uVar28 - 0xc) * (uVar28 - 0x1c);
 uVar35 = (unsigned int)
 (((auVar32._8_8_ & 0xffffffff) *
 (((auVar9._8_8_ & 0xffffffff) * (unsigned long)auVar15._8_4_ & 0xffffffff) *
 (unsigned long)(iVar29 - 0xc) & 0xffffffff) & 0xffffffff) * (unsigned long)(iVar29 - 0x1c));
 auVar16._4_4_ = uVar35;
 auVar16._0_4_ = iVar31;
 auVar11._4_4_ = iVar24;
 auVar11._0_4_ = iVar24;
 auVar11._8_4_ = uVar30 - 0x1c;
 auVar11._12_4_ = uVar30 - 0x1c;
 auVar16._8_4_ = uVar35;
 auVar16._12_4_ =
 (int)((auVar11._8_8_ & 0xffffffff) *
 ((unsigned long)auVar32._12_4_ *
 ((auVar22._8_8_ & 0xffffffff) *
 ((auVar25._8_8_ & 0xffffffff) * (unsigned long)auVar15._12_4_ & 0xffffffff) &
 0xffffffff) & 0xffffffff));
 auVar15._8_8_ = auVar16._8_8_;
 auVar15._4_4_ = iVar24 * auVar32._4_4_ * iVar34 * auVar9._4_4_ * iVar19;
 auVar15._0_4_ = iVar31;
 uVar28 = uVar28 - 0x20;
 iVar4 = iVar4 + -0x20;
 iVar29 = iVar29 + -0x20;
 uVar30 = uVar30 - 0x20;
 uVar6 = uVar6 - 4;
 } while (uVar6 != 0);
 }
 while( true ) {
 uVar6 = auVar15._4_4_;
 uVar20 = auVar15._12_4_;
 if (uVar2 == 0) break;
 auVar12._4_4_ = iVar4 + -4;
 auVar12._12_4_ = uVar30 - 4;
 param_2 = param_2 * uVar28;
 uVar27 = uVar27 * iVar29;
 auVar33._4_4_ = iVar4;
 auVar33._0_4_ = iVar4;
 auVar33._8_4_ = uVar30;
 auVar33._12_4_ = uVar30;
 uVar8 = iVar4 * uVar8;
 uVar13 = (unsigned int)((auVar33._8_8_ & 0xffffffff) * (unsigned long)uVar13);
 auVar17._0_4_ = auVar15._0_4_ * (uVar28 - 4);
 auVar18._8_4_ = (unsigned int)((auVar15._8_8_ & 0xffffffff) * (unsigned long)(iVar29 - 4));
 auVar18._4_4_ = auVar18._8_4_;
 auVar18._0_4_ = auVar17._0_4_;
 auVar12._0_4_ = auVar12._4_4_;
 auVar12._8_4_ = auVar12._12_4_;
 auVar18._12_4_ = (int)((auVar12._8_8_ & 0xffffffff) * (unsigned long)uVar20);
 auVar17._8_8_ = auVar18._8_8_;
 auVar17._4_4_ = auVar12._4_4_ * uVar6;
 iVar4 = iVar4 + -8;
 iVar29 = iVar29 + -8;
 uVar30 = uVar30 - 8;
 uVar2 = uVar2 - 1;
 auVar15 = auVar17;
 uVar28 = uVar28 - 8;
 }
 auVar23._4_4_ = uVar6;
 auVar23._0_4_ = uVar6;
 auVar23._8_4_ = uVar20;
 auVar23._12_4_ = uVar20;
 uVar3 = (((auVar23._8_8_ & 0xffffffff) * (unsigned long)uVar13 & 0xffffffff) *
 ((unsigned long)uVar6 * (unsigned long)uVar8 & 0xffffffff) & 0xffffffff) *
 (((auVar15._8_8_ & 0xffffffff) * (unsigned long)uVar27 & 0xffffffff) *
 ((unsigned long)auVar15._0_4_ * (unsigned long)param_2 & 0xffffffff) & 0xffffffff) & 0xffffffff;
 if (uVar5 == uVar7) {
 return uVar3;
 }
 param_1 = param_1 - uVar7;
 }
 do {
 uVar3 = (unsigned long)((int)uVar3 * param_1);
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 }
 return uVar3;
}



/* Function: indirect_recursion_a @ 00102090 */

unsigned long indirect_recursion_a(unsigned int param_1,int param_2)

{
 int iVar1;
 unsigned long uVar2;
 unsigned int uVar3;
 
 uVar2 = (unsigned long)param_1;
 if (0 < param_2) {
 param_2 = param_2 + 2;
 do {
 if ((uVar2 & 1) == 0) {
 uVar3 = (int)(uVar2 >> 0x1f) + (int)uVar2 >> 1;
 if (param_2 == 3) {
 return (unsigned long)uVar3;
 }
 uVar3 = uVar3 + 1;
 }
 else {
 iVar1 = (int)uVar2 * 3;
 if (param_2 == 3) {
 return (unsigned long)(iVar1 + 1);
 }
 uVar3 = iVar1 + 2;
 }
 uVar2 = (unsigned long)uVar3;
 param_2 = param_2 + -2;
 } while (2 < param_2);
 }
 return uVar2;
}



/* Function: call_func_ptr @ 001020f0 */

void call_func_ptr(int (*UNRECOVERED_JUMPTABLE)(int), int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001020f5. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}



/* Function: call_func_ptr_array @ 00102100 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned long call_func_ptr_array(int param_1, unsigned int param_2)

{
 bool bVar1;
 auVar_t auVar2;
 unsigned int uVar3;
 unsigned long uVar4;
 int iVar5;
 unsigned int uVar6;
 unsigned int uVar7;
 unsigned int uVar8;
 auVar_t auVar9;
 auVar_t auVar10;
 auVar_t auVar11;
 auVar_t auVar12;
 auVar_t auVar13;
 int iVar17;
 auVar_t auVar16;
 int iVar18;
 unsigned int uVar22;
 auVar_t auVar19;
 auVar_t auVar20;
 auVar_t auVar21;
 auVar_t auVar23;
 int iVar28;
 auVar_t auVar24;
 auVar_t auVar26;
 auVar_t auVar27;
 int iVar32;
 auVar_t auVar29;
 auVar_t auVar30;
 unsigned int uVar33;
 unsigned int uVar34;
 int iVar35;
 auVar_t auVar36;
 auVar_t auVar37;
 auVar_t auVar38;
 auVar_t auVar14;
 auVar_t auVar15;
 auVar_t auVar25;
 auVar_t auVar31;
 
 switch(param_1) {
 case 0:
 return (unsigned long)(param_2 * 2);
 case 1:
 return (unsigned long)(param_2 * 3);
 case 2:
 break;
 default:
 return 0xffffffff;
 }
 uVar4 = 1;
 if (1 < (int)param_2) {
 iVar5 = param_2 - 2;
 if (param_2 < 2) {
 iVar5 = 0;
 }
 uVar6 = iVar5 + 1;
 uVar4 = 1;
 if (7 < uVar6) {
 uVar8 = uVar6 & 0xfffffff8;
 iVar5 = param_2 - 1;
 uVar34 = param_2 - 2;
 iVar35 = param_2 - 3;
 uVar7 = (uVar8 - 8 >> 3) + 1;
 uVar3 = uVar7 & 3;
 auVar15.u[0] = _DAT_00103160;
 auVar25.u[0] = _DAT_00103160;
 uVar33 = param_2;
 if (0x17 < uVar8 - 8) {
 uVar7 = uVar7 & 0xfffffffc;
 do {
 auVar9._0_4_ = uVar33 - 4;
 auVar9._4_4_ = iVar5 + -4;
 auVar9._8_4_ = uVar34 - 4;
 auVar9._12_4_ = iVar35 + -4;
 iVar17 = auVar15._4_4_;
 auVar36._4_4_ = iVar5;
 auVar36._0_4_ = iVar5;
 auVar36._8_4_ = iVar35;
 auVar36._12_4_ = iVar35;
 iVar28 = auVar25._4_4_;
 auVar19._4_4_ = auVar9._4_4_;
 auVar19._0_4_ = auVar9._4_4_;
 auVar19._8_4_ = auVar9._12_4_;
 auVar19._12_4_ = auVar9._12_4_;
 auVar24._4_4_ = iVar5 + -8;
 auVar24._12_4_ = iVar35 + -8;
 auVar29._4_4_ = iVar5 + -0xc;
 auVar29._12_4_ = iVar35 + -0xc;
 auVar24._0_4_ = auVar24._4_4_;
 auVar24._8_4_ = auVar24._12_4_;
 auVar29._0_4_ = auVar29._4_4_;
 auVar29._8_4_ = auVar29._12_4_;
 auVar20._0_4_ = uVar33 - 0x10;
 auVar20._4_4_ = iVar5 + -0x10;
 auVar20._8_4_ = uVar34 - 0x10;
 auVar20._12_4_ = iVar35 + -0x10;
 auVar37._0_4_ = uVar33 - 0x14;
 auVar37._4_4_ = iVar5 + -0x14;
 auVar37._8_4_ = uVar34 - 0x14;
 auVar37._12_4_ = iVar35 - 0x14;
 auVar23._4_4_ = auVar20._4_4_;
 auVar23._0_4_ = auVar20._4_4_;
 auVar23._8_4_ = auVar20._12_4_;
 auVar23._12_4_ = auVar20._12_4_;
 auVar10._4_4_ = iVar5 + -0x18;
 auVar10._12_4_ = iVar35 + -0x18;
 iVar32 = iVar5 + -0x1c;
 iVar18 = auVar20._0_4_ * auVar15._0_4_ * uVar33 * (uVar33 - 8) * (uVar33 - 0x18);
 uVar22 = (unsigned int)
 (((auVar20._8_8_ & 0xffffffff) *
 (((auVar15._8_8_ & 0xffffffff) * (unsigned long)uVar34 & 0xffffffff) *
 (unsigned long)(uVar34 - 8) & 0xffffffff) & 0xffffffff) * (unsigned long)(uVar34 - 0x18));
 auVar16._4_4_ = uVar22;
 auVar16._0_4_ = iVar18;
 auVar10._0_4_ = auVar10._4_4_;
 auVar10._8_4_ = auVar10._12_4_;
 auVar16._8_4_ = uVar22;
 auVar16._12_4_ =
 (int)((auVar10._8_8_ & 0xffffffff) *
 ((auVar23._8_8_ & 0xffffffff) *
 ((auVar24._8_8_ & 0xffffffff) *
 ((auVar36._8_8_ & 0xffffffff) * (unsigned long)auVar15._12_4_ & 0xffffffff) &
 0xffffffff) & 0xffffffff));
 auVar15._8_8_ = auVar16._8_8_;
 auVar15._4_4_ = auVar10._4_4_ * auVar20._4_4_ * auVar24._4_4_ * iVar5 * iVar17;
 auVar15._0_4_ = iVar18;
 iVar17 = auVar37._0_4_ * auVar9._0_4_ * auVar25._0_4_ * (uVar33 - 0xc) * (uVar33 - 0x1c);
 uVar22 = (unsigned int)
 (((auVar37._8_8_ & 0xffffffff) *
 (((auVar9._8_8_ & 0xffffffff) * (unsigned long)auVar25._8_4_ & 0xffffffff) *
 (unsigned long)(uVar34 - 0xc) & 0xffffffff) & 0xffffffff) * (unsigned long)(uVar34 - 0x1c));
 auVar26._4_4_ = uVar22;
 auVar26._0_4_ = iVar17;
 auVar11._4_4_ = iVar32;
 auVar11._0_4_ = iVar32;
 auVar11._8_4_ = iVar35 + -0x1c;
 auVar11._12_4_ = iVar35 + -0x1c;
 auVar26._8_4_ = uVar22;
 auVar26._12_4_ =
 (int)((auVar11._8_8_ & 0xffffffff) *
 ((unsigned long)auVar37._12_4_ *
 ((auVar29._8_8_ & 0xffffffff) *
 ((auVar19._8_8_ & 0xffffffff) * (unsigned long)auVar25._12_4_ & 0xffffffff) &
 0xffffffff) & 0xffffffff));
 auVar25._8_8_ = auVar26._8_8_;
 auVar25._4_4_ = iVar32 * auVar37._4_4_ * auVar29._4_4_ * auVar9._4_4_ * iVar28;
 auVar25._0_4_ = iVar17;
 uVar33 = uVar33 - 0x20;
 iVar5 = iVar5 + -0x20;
 uVar34 = uVar34 - 0x20;
 iVar35 = iVar35 + -0x20;
 uVar7 = uVar7 - 4;
 } while (uVar7 != 0);
 }
 while( true ) {
 auVar27._4_4_ = auVar25._4_4_;
 auVar27._12_4_ = auVar25._12_4_;
 if (uVar3 == 0) break;
 auVar12._0_4_ = uVar33 - 4;
 auVar12._4_4_ = iVar5 + -4;
 auVar12._8_4_ = uVar34 - 4;
 auVar12._12_4_ = iVar35 - 4;
 auVar2._4_4_ = iVar5;
 auVar2._0_4_ = uVar33;
 auVar2._8_4_ = uVar34;
 auVar2._12_4_ = iVar35;
 auVar30._0_4_ = uVar33 * auVar15._0_4_;
 auVar31._8_4_ = (unsigned int)((auVar2._8_8_ & 0xffffffff) * (unsigned long)auVar15._8_4_);
 auVar31._4_4_ = auVar31._8_4_;
 auVar31._0_4_ = auVar30._0_4_;
 auVar38._4_4_ = iVar5;
 auVar38._0_4_ = iVar5;
 auVar38._8_4_ = iVar35;
 auVar38._12_4_ = iVar35;
 auVar31._12_4_ = (int)((auVar38._8_8_ & 0xffffffff) * (unsigned long)auVar15._12_4_);
 auVar30._8_8_ = auVar31._8_8_;
 auVar30._4_4_ = iVar5 * auVar15._4_4_;
 auVar13._0_4_ = auVar12._0_4_ * auVar25._0_4_;
 auVar14._8_4_ = (unsigned int)((auVar12._8_8_ & 0xffffffff) * (unsigned long)auVar25._8_4_);
 auVar14._4_4_ = auVar14._8_4_;
 auVar14._0_4_ = auVar13._0_4_;
 auVar27._0_4_ = auVar27._4_4_;
 auVar27._8_4_ = auVar27._12_4_;
 auVar14._12_4_ = (int)((auVar27._8_8_ & 0xffffffff) * (unsigned long)auVar12._12_4_);
 auVar13._8_8_ = auVar14._8_8_;
 auVar13._4_4_ = auVar27._4_4_ * auVar12._4_4_;
 iVar5 = iVar5 + -8;
 uVar34 = uVar34 - 8;
 iVar35 = iVar35 + -8;
 uVar3 = uVar3 - 1;
 auVar15 = auVar30;
 auVar25 = auVar13;
 uVar33 = uVar33 - 8;
 }
 auVar21._4_4_ = auVar27._4_4_;
 auVar21._0_4_ = auVar27._4_4_;
 auVar21._8_4_ = auVar27._12_4_;
 auVar21._12_4_ = auVar27._12_4_;
 uVar4 = (((auVar21._8_8_ & 0xffffffff) * (unsigned long)auVar15._12_4_ & 0xffffffff) *
 ((unsigned long)auVar27._4_4_ * (unsigned long)auVar15._4_4_ & 0xffffffff) & 0xffffffff) *
 (((auVar25._8_8_ & 0xffffffff) * (unsigned long)auVar15._8_4_ & 0xffffffff) *
 ((unsigned long)auVar25._0_4_ * (unsigned long)auVar15._0_4_ & 0xffffffff) & 0xffffffff) & 0xffffffff
 ;
 if (uVar6 == uVar8) {
 return uVar4;
 }
 param_2 = param_2 - uVar8;
 }
 do {
 uVar4 = (unsigned long)((int)uVar4 * param_2);
 bVar1 = 2 < param_2;
 param_2 = param_2 - 1;
 } while (bVar1);
 }
 return uVar4;
}



/* Function: double_value @ 00102120 */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: triple_value @ 00102130 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: call_virtual_func @ 00102140 */

int call_virtual_func(long param_1,int param_2)

{
 return param_2 * 2;
}



/* Function: process_with_callback @ 00102150 */

int process_with_callback(long param_1,unsigned int param_2,int (*param_3)(int))

{
 int iVar1;
 unsigned long uVar2;
 int iVar3;
 
 if ((int)param_2 < 1) {
 iVar3 = 0;
 }
 else {
 uVar2 = 0;
 iVar3 = 0;
 do {
 iVar1 = (*param_3)(*(int *)(param_1 + uVar2 * 4));
 iVar3 = iVar3 + iVar1;
 uVar2 = uVar2 + 1;
 } while (param_2 != uVar2);
 }
 return iVar3;
}



/* Function: test_control_flow_l2 @ 001021a0 */

/* WARNING: Removing unreachable block (ram,0x00102342) */
/* WARNING: Removing unreachable block (ram,0x00102334) */
/* WARNING: Removing unreachable block (ram,0x0010220f) */
/* WARNING: Removing unreachable block (ram,0x00102225) */
/* WARNING: Removing unreachable block (ram,0x0010222a) */
/* WARNING: Removing unreachable block (ram,0x00102220) */
/* WARNING: Removing unreachable block (ram,0x00102347) */
/* WARNING: Removing unreachable block (ram,0x0010233d) */

void test_control_flow_l2(void)

{
 unsigned int uVar1;
 int iVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 
 puts(&DAT_00103809);
 printf("CF-L2-01 (loop_multi_exit): %d\n",0xc);
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
 do {
 uVar1 = uVar3 - 8;
 uVar3 = uVar3 + 2;
 if (iVar2 - 2U <= uVar1) break;
 uVar4 = uVar4 + 1;
 iVar2 = iVar2 + -1;
 } while (uVar4 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",(unsigned long)uVar3);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
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



/* Function: non_local_jump @ 001023f0 */

int non_local_jump(unsigned int param_1)

{
 int iVar1;
 
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 if (-1 < (int)param_1) {
 if (param_1 < 0x65) {
 return param_1 * 2;
 }
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
}



/* Function: cpp_exception @ 00102440 */

int cpp_exception(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = -2;
 if (param_1 < 0x65) {
 iVar2 = param_1 * 2;
 }
 iVar1 = -1;
 if (-1 < param_1) {
 iVar1 = iVar2;
 }
 return iVar1;
}



/* Function: large_jump_table @ 00102460 */

unsigned long large_jump_table(int param_1, unsigned int param_2, unsigned long param_3)

{
 auVar_t auVar1;
 auVar_t auVar2;
 unsigned int uVar3;
 auVar_t auVar4;
 auVar_t auVar5;
 auVar_t auVar6;
 auVar_t auVar7;
 auVar_t auVar8;
 auVar_t auVar9;
 auVar_t auVar10;
 auVar_t auVar11;
 auVar_t auVar12;
 auVar_t auVar13;
 auVar_t auVar14;
 
 uVar3 = (unsigned int)param_3;
 switch(param_1) {
 case 0:
 auVar5._0_4_ = param_2 + uVar3;
 auVar5._4_4_ = 0;
 auVar5._8_8_ = param_3;
 return auVar5.u[0];
 case 1:
 auVar6._0_4_ = param_2 - uVar3;
 auVar6._4_4_ = 0;
 auVar6._8_8_ = param_3;
 return auVar6.u[0];
 case 2:
 auVar7._0_4_ = param_2 * uVar3;
 auVar7._4_4_ = 0;
 auVar7._8_8_ = param_3;
 return auVar7.u[0];
 case 3:
 break;
 case 4:
 if (uVar3 == 0) {
 auVar2._8_8_ = 0;
 auVar2._0_8_ = param_3;
 return (unsigned long)(auVar2.u[0] << 0x40);
 }
 auVar9._8_8_ = (long)(int)param_2 % (long)(int)uVar3 & 0xffffffff;
 auVar9._0_8_ = auVar9._8_8_;
 return auVar9.u[0];
 case 5:
 auVar10._0_4_ = param_2 & uVar3;
 auVar10._4_4_ = 0;
 auVar10._8_8_ = param_3;
 return auVar10.u[0];
 case 6:
 auVar11._0_4_ = param_2 | uVar3;
 auVar11._4_4_ = 0;
 auVar11._8_8_ = param_3;
 return auVar11.u[0];
 case 7:
 auVar12._0_4_ = param_2 ^ uVar3;
 auVar12._4_4_ = 0;
 auVar12._8_8_ = param_3;
 return auVar12.u[0];
 case 8:
 auVar13._0_4_ = param_2 << ((unsigned char)param_3 & 0x1f);
 auVar13._4_4_ = 0;
 auVar13._8_8_ = param_3;
 return auVar13.u[0];
 case 9:
 auVar14._0_4_ = (int)param_2 >> ((unsigned char)param_3 & 0x1f);
 auVar14._4_4_ = 0;
 auVar14._8_8_ = param_3;
 return auVar14.u[0];
 default:
 auVar4._8_8_ = param_3;
 auVar4._0_8_ = 0xffffffff;
 return auVar4.u[0];
 }
 if (uVar3 == 0) {
 auVar1._8_8_ = 0;
 auVar1._0_8_ = param_3;
 return (unsigned long)(auVar1.u[0] << 0x40);
 }
 auVar8._0_8_ = (long)(int)param_2 / (long)(int)uVar3 & 0xffffffff;
 auVar8._8_8_ = (long)(int)param_2 % (long)(int)uVar3 & 0xffffffff;
 return auVar8.u[0];
}



/* Function: op_add @ 00102480 */

int op_add(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: op_sub @ 00102490 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 001024a0 */

int op_mul(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: op_div @ 001024b0 */

unsigned long op_div(int param_1, unsigned int param_2, unsigned long param_3)

{
 unsigned long result;
 
 if (param_2 != 0) {
 result = ((unsigned long)param_1 / (unsigned long)param_2 & 0xffffffff) |
          ((unsigned long)param_1 % (unsigned long)param_2 << 32);
 return result;
 }
 result = param_3 << 0x40;
 return result;
}



/* Function: op_mod @ 001024c0 */

unsigned long op_mod(int param_1,int param_2)

{
 if (param_2 != 0) {
 return (long)param_1 % (long)param_2 & 0xffffffff;
 }
 return 0;
}



/* Function: op_and @ 001024d0 */

unsigned int op_and(unsigned int param_1,unsigned int param_2)

{
 return param_1 & param_2;
}



/* Function: op_or @ 001024e0 */

unsigned int op_or(unsigned int param_1,unsigned int param_2)

{
 return param_1 | param_2;
}



/* Function: op_xor @ 001024f0 */

unsigned int op_xor(unsigned int param_1,unsigned int param_2)

{
 return param_1 ^ param_2;
}



/* Function: op_shl @ 00102500 */

int op_shl(int param_1,unsigned char param_2)

{
 return param_1 << (param_2 & 0x1f);
}



/* Function: op_shr @ 00102510 */

int op_shr(int param_1,unsigned char param_2)

{
 return param_1 >> (param_2 & 0x1f);
}



/* Function: conditional_func_ptr @ 00102520 */

void conditional_func_ptr(int param_1, int param_2)

{
 int (*UNRECOVERED_JUMPTABLE)(int);
 int (*pcVar1)(int);
 
 pcVar1 = (int (*)(int))recursion_factorial;
 if (param_1 == 1) {
 pcVar1 = triple_value;
 }
 UNRECOVERED_JUMPTABLE = double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = pcVar1;
 }
 /* WARNING: Could not recover jumptable at 0x00102544. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}



/* Function: state_machine @ 00102550 */

unsigned int state_machine(int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 
 switch(param_2) {
 case 0:
 return (unsigned int)(param_1 == 1);
 case 1:
 uVar1 = (unsigned int)(param_1 == 99) * 2 + 1;
 if (param_1 == 2) {
 uVar1 = 2;
 }
 return uVar1;
 case 2:
 break;
 case 3:
 return (unsigned int)(param_1 != 0) * 3;
 default:
 param_2 = 3;
 }
 return param_2;
}



/* Function: fsm_func_table @ 001025a0 */

unsigned long fsm_func_table(int param_1, int param_2)

{
 int iVar1;
 
 switch(param_2) {
 case 0:
 return (unsigned long)(param_1 == 1);
 case 1:
 break;
 case 2:
 return 2;
 case 3:
 return (unsigned long)((param_1 != 0) * 3);
 default:
 return 3;
 }
 iVar1 = (param_1 == 99) * 2 + 1;
 if (param_1 == 2) {
 iVar1 = 2;
 }
 return (unsigned long)iVar1;
}



/* Function: state_idle @ 001025c0 */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 001025d0 */

char state_processing(int param_1)

{
 char cVar1;
 
 cVar1 = (param_1 == 99) * '\x02' + '\x01';
 if (param_1 == 2) {
 cVar1 = '\x02';
 }
 return cVar1;
}



/* Function: state_done @ 001025f0 */

unsigned long state_done(void)

{
 return 2;
}



/* Function: state_error @ 00102600 */

char state_error(int param_1)

{
 return (param_1 != 0) * '\x03';
}



/* Function: computed_goto @ 00102610 */

unsigned long computed_goto(unsigned long param_1,unsigned int param_2)

{
 switch(param_2) {
 case 0:
 return 0;
 case 1:
 return 10;
 case 2:
 return 0x14;
 case 3:
 return 0x1e;
 default:
 return 0xffffffff;
 }
}



/* Function: obfuscated_cf @ 00102640 */

int obfuscated_cf(int param_1)

{
 return param_1 * 2;
}



/* Function: opaque_predicate @ 00102650 */

int opaque_predicate(int param_1)

{
 return param_1 * 2;
}



/* Function: overlapped_code @ 00102660 */

int overlapped_code(unsigned int param_1)

{
 if ((param_1 & 1) == 0) {
 return (int)param_1 / 2;
 }
 return param_1 * 3 + 1;
}



/* Function: test_control_flow_l3 @ 00102680 */

void test_control_flow_l3(void)

{
 unsigned int uVar1;
 
 puts(&DAT_0010382d);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",(unsigned long)uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",(unsigned long)uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar1 = computed_goto(0, 0);
 printf("CF-L3-07 (computed_goto): %d\n",(unsigned long)uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 00102790 */

unsigned long main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 72 */
