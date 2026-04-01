/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_clang_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Ghidra type definitions */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef int bool;
typedef int (*func_ptr_t)(int);

/* NEON vector type for Ghidra decompilation */
typedef union {
    undefined1 bytes[16];
    struct {
        undefined4 _0_4_;
        undefined4 _4_4_;
        undefined4 _8_4_;
        undefined4 _12_4_;
    };
} uint128;

/* jmp_buf tag for setjmp/longjmp */
typedef struct __jmp_buf_tag {
    undefined8 __jmpbuf[8];
    int __mask_was_saved;
    undefined8 __saved_mask;
} __jmp_buf_tag;

/* Ghidra macros */
#define CONCAT11(a,b) (((unsigned int)(a) << 8) | (b))
#define CONCAT12(a,b) (((unsigned int)(a) << 16) | (b))
#define CONCAT13(a,b) (((unsigned int)(a) << 24) | (b))

/* Global declarations */
undefined completed_0 = 0;
undefined8 jump_buffer[256] = {0};
undefined4 DAT_00101a00[4] = {0, 1, 2, 0x32};
undefined4 DAT_001019ac[12] = {0};
undefined4 DAT_0010197c[12] = {0};
char DAT_00101f65[] = "=== Control Flow Level 1 ===";
char DAT_00101f89[] = "=== Control Flow Level 2 ===";
char DAT_00101fad[] = "=== Control Flow Level 3 ===";

/* CRT stub function deregister_tm_clones removed by preprocessor */

/* Standard library functions */
extern int puts(const char*);
extern int printf(const char*, ...);

/* setjmp/longjmp implementations */
int _setjmp(void* buf) { ((int*)buf)[0] = 0; return 0; }
__attribute__((noreturn)) void longjmp(void* buf, int val) { (void)buf; (void)val; for(;;); }

/* CRT stub functions */
void deregister_tm_clones(void) { }

/* NEON vector extension helper function */
uint128 NEON_ext(uint128 a, uint128 b, int c, int d) { (void)a; (void)b; (void)c; (void)d; uint128 r = {0}; return r; }

/* Forward declarations for functions used as function pointers */
int double_value(int param_1);
int triple_value(int param_1);
int recursion_factorial(int param_1);
ulong indirect_recursion_a(ulong param_1,int param_2);

/* Function: sequential_ops @ 00100a54 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_2 + param_1) * 2 - param_3;
}



/* Function: single_if @ 00100a64 */

int single_if(int param_1)

{
 return param_1 << (0 < param_1);
}



/* Function: if_else @ 00100a74 */

bool if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 00100a80 */

int nested_if_2(int param_1,uint param_2)

{
 int iVar1;
 
 iVar1 = (param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)) + param_1;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: nested_if_deep @ 00100a94 */

undefined4 nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 uVar1;
 
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
 uVar1 = 4;
 if (0 < param_5) {
 uVar1 = 5;
 }
 return uVar1;
 }
 return 3;
}



/* Function: if_elseif_chain @ 00100ae4 */

int if_elseif_chain(uint param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 10 + 10;
 if (2 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 00100afc */

int if_elseif_long(uint param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 100 + 100;
 if (4 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_small @ 00100b14 */

undefined4 switch_small(uint param_1)

{
 if (param_1 < 4) {
 return *(undefined4 *)(&DAT_00101a00 + (long)(int)param_1 * 4);
 }
 return 0xffffffff;
}



/* Function: switch_large @ 00100b34 */

int switch_large(uint param_1)

{
 int iVar1;
 
 iVar1 = param_1 * 10;
 if (9 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_default @ 00100b48 */

int switch_default(int param_1)

{
 int iVar1;
 
 iVar1 = (param_1 - 1U) * 100 + 100;
 if (2 < param_1 - 1U) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00100b64 */

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



/* Function: loop_for_fixed @ 00100b98 */

int loop_for_fixed(int param_1)

{
 if (0 < param_1) {
 return (int)((ulong)(param_1 - 1) * (ulong)(param_1 - 2) >> 1) + param_1 + -1;
 }
 return 0;
}



/* Function: loop_while @ 00100bc0 */

int loop_while(int param_1)

{
 uint uVar1;
 int iVar2;
 
 if (param_1 != 0) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 uVar1 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar1);
 return iVar2;
 }
 return 1;
}



/* Function: loop_dowhile @ 00100c04 */

int loop_dowhile(int param_1)

{
 uint uVar1;
 int iVar2;
 
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 uVar1 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar1);
 return iVar2;
}



/* Function: loop_nested @ 00100c3c */

int loop_nested(int param_1,int param_2)

{
 if (param_2 < 1) {
 param_2 = 0;
 }
 param_2 = param_2 * param_1;
 if (param_1 < 1) {
 param_2 = 0;
 }
 return param_2;
}



/* Function: loop_break @ 00100c54 */

undefined8 loop_break(undefined4 param_1)

{
 undefined8 uVar1;
 
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



/* Function: loop_continue @ 00100ca4 */

int loop_continue(uint param_1)

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
 
 if ((int)param_1 < 1) {
 return 0;
 }
 if (param_1 < 8) {
 iVar10 = 0;
 uVar9 = 1;
 }
 else {
 uVar1 = param_1 & 0xfffffff8;
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
 if (uVar1 == param_1) {
 return iVar10;
 }
 }
 do {
 uVar1 = -(uVar9 & 1) & uVar9;
 uVar9 = uVar9 + 1;
 iVar10 = uVar1 + iVar10;
 } while (param_1 + 1 != uVar9);
 return iVar10;
}



/* Function: goto_forward @ 00100d50 */

int goto_forward(int param_1)

{
 int iVar1;
 
 iVar1 = param_1;
 if (param_1 < 2) {
 iVar1 = 1;
 }
 return param_1 * iVar1 * 2;
}



/* Function: goto_backward @ 00100d64 */

int goto_backward(uint param_1)

{
 uint uVar1;
 uint uVar2;
 uint128 auVar3;
 uint uVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 uint128 auVar9;
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
 
 if ((int)param_1 < 1) {
 return 1;
 }
 if (param_1 < 8) {
 uVar4 = 1;
 iVar5 = 1;
 }
 else {
 uVar1 = param_1 & 0xfffffff8;
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
 if (uVar1 == param_1) {
 return iVar5;
 }
 }
 do {
 iVar5 = uVar4 * iVar5;
 uVar4 = uVar4 + 1;
 } while (param_1 + 1 != uVar4);
 return iVar5;
}



/* Function: ternary_op @ 00100e00 */

int ternary_op(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: test_control_flow_l1 @ 00100e0c */

int test_control_flow_l1(void)

{
 int iVar1;
 
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
 iVar1 = printf("CF-L1-20 (ternary_op): %d\n",8);
 return iVar1;
}



/* Function: loop_multi_exit @ 00100fd8 */

int loop_multi_exit(int param_1)

{
 uint uVar1;
 ulong uVar2;
 
 uVar1 = param_1 - 1;
 if (uVar1 < 0xc) {
 uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
 return *(int *)(&DAT_001019ac + uVar2) + *(int *)(&DAT_0010197c + uVar2);
 }
 return -1;
}



/* Function: infinite_loop @ 00101010 */

void infinite_loop(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 if (*param_1 == 1) {
 return;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *param_1 = 1;
 return;
}



/* Function: multi_return @ 0010103c */

int multi_return(uint param_1)

{
 int iVar1;
 int iVar2;
 
 if (-1 < (int)param_1) {
 iVar2 = param_1 << 1;
 if ((param_1 & 1) != 0) {
 iVar2 = param_1 + 1;
 }
 iVar1 = -2;
 if (param_1 < 0x33) {
 iVar1 = iVar2;
 }
 return iVar1;
 }
 return -1;
}



/* Function: conditional_return @ 00101064 */

int conditional_return(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 << 1;
 if (param_1 < 1) {
 iVar1 = -param_1;
 }
 return iVar1;
}



/* Function: duffs_device @ 00101074 */

uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
 undefined4 *puVar1;
 undefined4 *puVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 
 uVar5 = 0xffffffff;
 if (0 < (int)param_3) {
 uVar3 = param_3 + 7 >> 3;
 puVar1 = param_1;
 puVar2 = param_2;
 uVar4 = uVar3;
 switch(param_3 & 7) {
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
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
 uVar4 = uVar3;
switchD_001010a0_caseD_7:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_001010a0_caseD_6:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_001010a0_caseD_5:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_001010a0_caseD_4:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_001010a0_caseD_3:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_001010a0_caseD_2:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_001010a0_caseD_1:
 param_2 = puVar2 + 1;
 uVar3 = uVar4 - 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
 uVar5 = param_3;
 } while (uVar3 != 0 && 0 < (int)uVar4);
 }
 return uVar5;
}



/* Function: loop_complex_cond @ 001010f8 */

int loop_complex_cond(uint param_1)

{
 bool bVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 
 if ((int)param_1 < 1) {
 iVar3 = 0;
 uVar4 = 0;
 }
 else {
 iVar3 = 0;
 uVar2 = param_1;
 uVar5 = 0;
 do {
 iVar3 = iVar3 + 2;
 param_1 = uVar2 - 1;
 uVar4 = uVar5 + 1;
 if ((uVar2 < 2) || ((int)param_1 <= iVar3)) break;
 bVar1 = uVar5 < 9;
 uVar2 = param_1;
 uVar5 = uVar4;
 } while (bVar1);
 }
 return param_1 + iVar3 + uVar4;
}



/* Function: loop_modify_var @ 0010114c */

int loop_modify_var(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (0 < param_1) {
 iVar3 = 0;
 iVar2 = 0;
 do {
 iVar1 = iVar3 + 2;
 if (iVar3 < 6) {
 iVar1 = iVar3;
 }
 iVar2 = iVar3 + iVar2;
 iVar3 = iVar1 + 1;
 } while (iVar3 < param_1);
 return iVar2;
 }
 return 0;
}



/* Function: loop_external_state @ 0010118c */

void loop_external_state(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 if (*param_1 != 0) {
 return;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return;
}



/* Function: recursion_factorial @ 001011ac */

int recursion_factorial(int param_1)

{
 bool bVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint128 auVar5;
 uint uVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 uint128 auVar11;
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
 
 if ((int)param_1 < 2) {
 return 1;
 }
 iVar7 = 0;
 if (1 < param_1) {
 iVar7 = param_1 - 2;
 }
 uVar2 = iVar7 + 1;
 if (uVar2 < 8) {
 iVar7 = 1;
 uVar6 = param_1;
 }
 else {
 uVar3 = uVar2 & 0xfffffff8;
 iVar7 = 1;
 iVar8 = 1;
 iVar9 = 1;
 iVar10 = 1;
 uVar6 = param_1 - uVar3;
 iVar12 = param_1 - 1;
 iVar13 = param_1 - 2;
 iVar14 = param_1 - 3;
 iVar15 = 1;
 iVar16 = 1;
 iVar17 = 1;
 iVar18 = 1;
 uVar4 = uVar3;
 do {
 iVar19 = param_1 - 4;
 iVar20 = iVar12 + -4;
 iVar21 = iVar13 + -4;
 iVar22 = iVar14 + -4;
 uVar4 = uVar4 - 8;
 iVar7 = param_1 * iVar7;
 iVar8 = iVar12 * iVar8;
 iVar9 = iVar13 * iVar9;
 iVar10 = iVar14 * iVar10;
 param_1 = param_1 - 8;
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

int tail_recursion(uint param_1,int param_2)

{
 bool bVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint128 auVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar12;
 int iVar13;
 int iVar14;
 uint128 auVar11;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
 int iVar20;
 int iVar21;
 
 if (1 < (int)param_1) {
 iVar10 = 0;
 if (1 < param_1) {
 iVar10 = param_1 - 2;
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
 uVar4 = param_1 - uVar3;
 iVar15 = param_1 - 1;
 iVar16 = param_1 - 2;
 iVar17 = param_1 - 3;
 uVar5 = uVar3;
 do {
 iVar18 = param_1 - 4;
 iVar19 = iVar15 + -4;
 iVar20 = iVar16 + -4;
 iVar21 = iVar17 + -4;
 uVar5 = uVar5 - 8;
 param_2 = param_2 * param_1;
 iVar7 = iVar7 * iVar15;
 iVar8 = iVar8 * iVar16;
 iVar9 = iVar9 * iVar17;
 param_1 = param_1 - 8;
 iVar15 = iVar15 + -8;
 iVar16 = iVar16 + -8;
 iVar17 = iVar17 + -8;
 iVar10 = iVar10 * iVar18;
 iVar12 = iVar12 * iVar19;
 iVar13 = iVar13 * iVar20;
 iVar14 = iVar14 * iVar21;
 } while (uVar5 != 0);
 iVar10 = iVar10 * param_2;
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
 param_2 = iVar10 * auVar11._0_4_ * iVar12 * auVar11._4_4_;
 param_1 = uVar4;
 if (uVar2 == uVar3) {
 return param_2;
 }
 }
 do {
 param_2 = param_2 * param_1;
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 }
 return param_2;
}



/* Function: indirect_recursion_a @ 001012f0 */

ulong indirect_recursion_a(ulong param_1,int param_2)

{
 uint uVar1;
 int iVar2;
 
 if (0 < param_2) {
 param_2 = param_2 + 2;
 do {
 iVar2 = (int)param_1;
 if ((param_1 & 1) == 0) {
 if (iVar2 < 0) {
 iVar2 = iVar2 + 1;
 }
 if (param_2 == 3) {
 return (ulong)(uint)(iVar2 >> 1);
 }
 uVar1 = (iVar2 >> 1) + 1;
 }
 else {
 if (param_2 == 3) {
 return (ulong)(iVar2 * 3 + 1);
 }
 uVar1 = iVar2 * 3 + 2;
 }
 param_1 = (ulong)uVar1;
 param_2 = param_2 + -2;
 } while (2 < param_2);
 }
 return param_1;
}



/* Function: call_func_ptr @ 00101348 */

int call_func_ptr(func_ptr_t func_ptr,undefined4 param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101350. Too many branches */
 /* WARNING: Treating indirect jump as call */
 if (func_ptr != 0) {
 return func_ptr((int)param_2);
 }
 return 0;
}



/* Function: call_func_ptr_array @ 00101354 */

int call_func_ptr_array(undefined4 param_1,uint param_2)

{
 bool bVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint128 auVar5;
 uint uVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 uint128 auVar11;
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
 
 switch(param_1) {
 case 0:
 return param_2 << 1;
 case 1:
 return param_2 * 3;
 case 2:
 break;
 default:
 return -1;
 }
 if ((int)param_2 < 2) {
 return 1;
 }
 iVar7 = 0;
 if (1 < param_2) {
 iVar7 = param_2 - 2;
 }
 uVar2 = iVar7 + 1;
 if (uVar2 < 8) {
 iVar7 = 1;
 uVar6 = param_2;
 }
 else {
 uVar3 = uVar2 & 0xfffffff8;
 iVar7 = 1;
 iVar8 = 1;
 iVar9 = 1;
 iVar10 = 1;
 uVar6 = param_2 - uVar3;
 iVar12 = param_2 - 1;
 iVar13 = param_2 - 2;
 iVar14 = param_2 - 3;
 iVar15 = 1;
 iVar16 = 1;
 iVar17 = 1;
 iVar18 = 1;
 uVar4 = uVar3;
 do {
 iVar19 = param_2 - 4;
 iVar20 = iVar12 + -4;
 iVar21 = iVar13 + -4;
 iVar22 = iVar14 + -4;
 uVar4 = uVar4 - 8;
 iVar7 = param_2 * iVar7;
 iVar8 = iVar12 * iVar8;
 iVar9 = iVar13 * iVar9;
 iVar10 = iVar14 * iVar10;
 param_2 = param_2 - 8;
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

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: triple_value @ 00101380 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: call_virtual_func @ 00101388 */

int call_virtual_func(undefined8 param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 00101390 */

int process_with_callback(undefined4 *param_1,uint param_2,int (*param_3)(int))

{
 int iVar1;
 int iVar2;
 ulong uVar3;
 
 if ((int)param_2 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 uVar3 = (ulong)param_2;
 do {
 iVar1 = param_3(*param_1);
 uVar3 = uVar3 - 1;
 iVar2 = iVar1 + iVar2;
 param_1 = param_1 + 1;
 } while (uVar3 != 0);
 }
 return iVar2;
}



/* Function: test_control_flow_l2 @ 001013e8 */

int test_control_flow_l2(void)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 
 puts(DAT_00101f89);
 printf("CF-L2-01 (loop_multi_exit): %d\n",0xc);
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n",1);
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
 printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar3);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n",1);
 printf("CF-L2-09 (recursion_factorial): %d\n",0x78);
 printf("CF-L2-10 (tail_recursion): %d\n",0x78);
 printf("CF-L2-11 (indirect_recursion): %d\n",3);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 iVar2 = printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return iVar2;
}



/* Function: non_local_jump @ 00101598 */

int non_local_jump(uint param_1)

{
 int iVar1;
 
 iVar1 = _setjmp((__jmp_buf_tag *)&jump_buffer);
 if (iVar1 == 0) {
 if ((int)param_1 < 0) {
 /* WARNING: Subroutine does not return */
 longjmp((__jmp_buf_tag *)&jump_buffer,1);
 }
 if (100 < param_1) {
 /* WARNING: Subroutine does not return */
 longjmp((__jmp_buf_tag *)&jump_buffer,2);
 }
 iVar1 = param_1 << 1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: cpp_exception @ 001015fc */

int cpp_exception(int param_1)

{
 int iVar1;
 
 iVar1 = -2;
 if (param_1 < 0x65) {
 iVar1 = param_1 << 1;
 }
 if (param_1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: large_jump_table @ 00101618 */

uint large_jump_table(undefined4 param_1,uint param_2,uint param_3)

{
 uint uVar1;
 int iVar2;
 
 switch(param_1) {
 case 0:
 return param_3 + param_2;
 case 1:
 return param_2 - param_3;
 case 2:
 return param_3 * param_2;
 case 3:
 break;
 case 4:
 if (param_3 == 0) {
 return 0;
 }
 iVar2 = 0;
 if (param_3 != 0) {
 iVar2 = (int)param_2 / (int)param_3;
 }
 return param_2 - iVar2 * param_3;
 case 5:
 return param_3 & param_2;
 case 6:
 return param_3 | param_2;
 case 7:
 return param_3 ^ param_2;
 case 8:
 return param_2 << (ulong)(param_3 & 0x1f);
 case 9:
 return (int)param_2 >> (param_3 & 0x1f);
 default:
 return 0xffffffff;
 }
 if (param_3 == 0) {
 return 0;
 }
 uVar1 = 0;
 if (param_3 != 0) {
 uVar1 = (int)param_2 / (int)param_3;
 }
 return uVar1;
}



/* Function: op_add @ 00101640 */

int op_add(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: op_sub @ 00101648 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 00101650 */

int op_mul(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: op_div @ 00101658 */

int op_div(int param_1,int param_2)

{
 int iVar1;
 
 if (param_2 != 0) {
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 / param_2;
 }
 return iVar1;
 }
 return 0;
}



/* Function: op_mod @ 0010166c */

int op_mod(int param_1,int param_2)

{
 int iVar1;
 
 if (param_2 != 0) {
 iVar1 = 0;
 if (param_2 != 0) {
 iVar1 = param_1 / param_2;
 }
 return param_1 - iVar1 * param_2;
 }
 return 0;
}



/* Function: op_and @ 00101684 */

uint op_and(uint param_1,uint param_2)

{
 return param_2 & param_1;
}



/* Function: op_or @ 0010168c */

uint op_or(uint param_1,uint param_2)

{
 return param_2 | param_1;
}



/* Function: op_xor @ 00101694 */

uint op_xor(uint param_1,uint param_2)

{
 return param_2 ^ param_1;
}



/* Function: op_shl @ 0010169c */

int op_shl(int param_1,uint param_2)

{
 return param_1 << (ulong)(param_2 & 0x1f);
}



/* Function: op_shr @ 001016a4 */

int op_shr(int param_1,uint param_2)

{
 return param_1 >> (param_2 & 0x1f);
}



/* Function: conditional_func_ptr @ 001016ac */

void conditional_func_ptr(int param_1,int param_2)

{
 func_ptr_t pcVar1;
 func_ptr_t func_ptr;
 
 pcVar1 = triple_value;
 if (param_1 != 1) {
 pcVar1 = recursion_factorial;
 }
 func_ptr = double_value;
 if (param_1 != 0) {
 func_ptr = pcVar1;
 }
 /* WARNING: Could not recover jumptable at 0x001016d8. Too many branches */
 /* WARNING: Treating indirect jump as call */
 func_ptr(param_2);
 return;
}



/* Function: state_machine @ 001016dc */

uint state_machine(uint param_1,uint param_2)

{
 uint uVar1;
 
 switch(param_2) {
 case 0:
 return (uint)(param_1 == 1);
 case 1:
 uVar1 = 3;
 if (param_1 != 99) {
 uVar1 = 1;
 }
 if (param_1 != 2) {
 param_1 = uVar1;
 }
 return param_1;
 case 2:
 break;
 case 3:
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
 default:
 param_2 = 3;
 }
 return param_2;
}



/* Function: fsm_func_table @ 00101740 */

uint fsm_func_table(uint param_1,undefined4 param_2)

{
 uint uVar1;
 
 switch(param_2) {
 case 0:
 return (uint)(param_1 == 1);
 case 1:
 uVar1 = 3;
 if (param_1 != 99) {
 uVar1 = 1;
 }
 break;
 case 2:
 return 2;
 case 3:
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
 default:
 return 3;
 }
 if (param_1 != 2) {
 param_1 = uVar1;
 }
 return param_1;
}



/* Function: state_idle @ 00101760 */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 0010176c */

int state_processing(int param_1)

{
 int iVar1;
 
 iVar1 = 3;
 if (param_1 != 99) {
 iVar1 = 1;
 }
 if (param_1 != 2) {
 param_1 = iVar1;
 }
 return param_1;
}



/* Function: state_done @ 00101784 */

undefined8 state_done(void)

{
 return 2;
}



/* Function: state_error @ 0010178c */

undefined4 state_error(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: computed_goto @ 0010179c */

undefined8 computed_goto(undefined8 param_1,undefined4 param_2)

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



/* Function: obfuscated_cf @ 001017dc */

int obfuscated_cf(int param_1)

{
 return param_1 << 1;
}



/* Function: opaque_predicate @ 001017e4 */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 001017ec */

int overlapped_code(uint param_1)

{
 int iVar1;
 uint uVar2;
 
 uVar2 = param_1;
 if ((int)param_1 < 0) {
 uVar2 = param_1 + 1;
 }
 iVar1 = (int)uVar2 >> 1;
 if ((param_1 & 1) != 0) {
 iVar1 = param_1 * 3 + 1;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 00101808 */

int test_control_flow_l3(void)

{
 int iVar1;
 ulong uVar2;
 
 puts(DAT_00101fad);
 uVar2 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar2 & 0xffffffff);
 uVar2 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar2 & 0xffffffff);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 iVar1 = printf("CF-L3-06 (fsm_func_table): %d\n",2);
 uVar2 = computed_goto(iVar1,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar2 & 0xffffffff);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 iVar1 = printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return iVar1;
}



/* Function: main @ 00101900 */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}
