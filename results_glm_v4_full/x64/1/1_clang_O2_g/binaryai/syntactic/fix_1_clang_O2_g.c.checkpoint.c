// Decompiled by BinaryAI
// SHA256: fe605cedf5faaa4abe3c1b1f8ed4f205b43c06e9e126af60f638d70f3ef6c369

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <setjmp.h>
#include <unistd.h>
#include <stdlib.h>

typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long long ulonglong;

// Macro to concatenate two 32-bit values into a 64-bit value
#define CONCAT44(high, low) (((ulonglong)(high) << 32) | ((ulonglong)(low) & 0xFFFFFFFF))

// 16-byte structure for decompiler field access
typedef struct {
    union {
        struct {
            uint _0_4_;
            uint _4_4_;
            uint _8_4_;
            uint _12_4_;
        };
        struct {
            ulonglong _0_8_;
            ulonglong _8_8_;
        };
    };
} bytes16_t;

extern int __gmon_start__(void);
extern void __cxa_finalize(void *dso_handle);
extern void *__dso_handle;
extern void deregister_tm_clones(void);

extern uint SUB164(uint val, uint offset);
extern ulonglong SUB168(uint val, uint offset);

int completed_0 = 0;
jmp_buf jump_buffer;

extern uint DAT_00103280[4];
extern bytes16_t DAT_00103140[4];
extern bytes16_t _DAT_00103140;
extern bytes16_t DAT_00103160[4];
extern bytes16_t _DAT_00103160;
extern bytes16_t DAT_00103270[4];
extern int DAT_00103108[12];
extern int DAT_001030d8[12];
extern char DAT_001037e5[];
extern char DAT_00103809[];
extern char DAT_0010382d[];
extern uint stack0x00000008;

// Definitions for undefined symbols
void deregister_tm_clones(void) {
    // Empty implementation
}

ulonglong SUB168(uint val, uint offset) {
    return 0;
}

uint SUB164(uint val, uint offset) {
    return 0;
}

// Data definitions
char DAT_001037e5[] = "CF-L1 tests:\n";
char DAT_00103809[] = "CF-L2 tests:\n";
char DAT_0010382d[] = "CF-L3 tests:\n";
bytes16_t _DAT_00103160 = {0};
bytes16_t _DAT_00103140 = {0};
bytes16_t DAT_00103270[4] = {0};
uint DAT_00103280[4] = {0};
bytes16_t DAT_00103140[4] = {0};
bytes16_t DAT_00103160[4] = {0};
int DAT_00103108[12] = {0};
int DAT_001030d8[12] = {0};
uint stack0x00000008 = 0;

// Forward declarations
int main(int argc, char **argv, char **envp);

extern int __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, 
                             int (*init)(void), void (*fini)(void), void *rtld_fini,
                             void *stack_end);



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 ((void (*)(void))0x0)();
 return;
}

// Function: <EXTERNAL>::puts @ 0x101030

// Function: <EXTERNAL>::_setjmp @ 0x101050
extern int _setjmp(jmp_buf __env);

// Function: <EXTERNAL>::longjmp @ 0x101060
extern void longjmp(jmp_buf __env,int __val);

// Function: <EXTERNAL>::__cxa_finalize @ 0x101070
extern void __cxa_finalize(void *dso_handle);







// Function: __do_global_dtors_aux @ 0x101120
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: sequential_ops @ 0x101170
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x101180
int single_if(int param_1)
{
 return param_1 << (0 < param_1);
}

// Function: if_else @ 0x101190
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x1011a0
int nested_if_2(int param_1,int param_2)
{
 int iVar1;
 if (param_2 < 0) {
 param_2 = 0;
 }
 iVar1 = param_2 + param_1;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: nested_if_deep @ 0x1011b0
byte nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
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

// Function: if_elseif_chain @ 0x1011f0
int if_elseif_chain(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}

// Function: if_elseif_long @ 0x101210
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 5) {
 iVar1 = param_1 * 100 + 100;
 }
 return iVar1;
}

// Function: switch_small @ 0x101230
unsigned int switch_small(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(&DAT_00103280 + (long)(int)param_1 * 4);
 }
 return uVar1;
}

// Function: switch_large @ 0x101250
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 return iVar1;
}

// Function: switch_default @ 0x101270
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 - 1U < 3) {
 iVar1 = (param_1 - 1U) * 100 + 100;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x101290
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

// Function: loop_for_fixed @ 0x1012c0
int loop_for_fixed(int param_1)
{
 if (0 < param_1) {
 return (int)((unsigned long)(param_1 - 2) * (unsigned long)(param_1 - 1) >> 1) + param_1 + -1;
 }
 return 0;
}

// Function: loop_while @ 0x1012e0
int loop_while(int param_1)
{
 int iVar1;
 uint uVar2;
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

// Function: loop_dowhile @ 0x101320
int loop_dowhile(int param_1)
{
 int iVar1;
 uint uVar2;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 uVar2 = param_1 + 9;
 param_1 = param_1 / 10;
 } while (0x12 < uVar2);
 return iVar1;
}

// Function: loop_nested @ 0x101360
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 if (param_2 < 1) {
 param_2 = 0;
 }
 iVar1 = 0;
 if (0 < param_1) {
 iVar1 = param_2 * param_1;
 }
 return iVar1;
}

// Function: loop_break @ 0x101370
unsigned long long loop_break(unsigned int param_1)
{
 unsigned long long uVar1;
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

// Function: loop_continue @ 0x1013b0
int loop_continue(uint param_1)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 uint uVar6;
 int iVar7;
 uint uVar8;
 int iVar9;
 uint uVar10;
 uint uVar11;
 if ((int)param_1 < 1) {
 return 0;
 }
 if (param_1 < 8) {
 iVar2 = 0;
 uVar3 = 1;
 }
 else {
 uVar3 = param_1 & 0xfffffff8;
 uVar1 = (uVar3 - 8 >> 3) + 1;
 if (uVar3 - 8 == 0) {
 iVar2 = 0;
 iVar5 = 0;
 uVar10 = 1;
 uVar11 = 3;
 iVar7 = 0;
 iVar9 = 0;
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
 uVar6 = -(uint)((uVar10 & 1) == 0);
 uVar8 = -(uint)((uVar11 & 1) == 0);
 iVar2 = (~uVar6 & uVar10 + 8) + (~uVar6 & uVar10) + iVar2;
 iVar5 = (~uVar8 & uVar11 + 8) + (~uVar8 & uVar11) + iVar5;
 iVar7 = (~uVar6 & uVar10 + 0xc) + (~uVar6 & uVar10 + 4) + iVar7;
 iVar9 = (~uVar8 & uVar11 + 0xc) + (~uVar8 & uVar11 + 4) + iVar9;
 uVar10 = uVar10 + 0x10;
 uVar11 = uVar11 + 0x10;
 uVar4 = uVar4 - 2;
 } while (uVar4 != 0);
 }
 if ((uVar1 & 1) != 0) {
 uVar1 = -(uint)((uVar10 & 1) == 0);
 uVar4 = -(uint)((uVar11 & 1) == 0);
 iVar2 = iVar2 + (~uVar1 & uVar10);
 iVar5 = iVar5 + (~uVar4 & uVar11);
 iVar7 = iVar7 + (~uVar1 & uVar10 + 4);
 iVar9 = iVar9 + (~uVar4 & uVar11 + 4);
 }
 iVar2 = iVar5 + iVar9 + iVar2 + iVar7;
 if (uVar3 == param_1) {
 return iVar2;
 }
 uVar3 = uVar3 | 1;
 }
 do {
 iVar2 = iVar2 + (-(uVar3 & 1) & uVar3);
 uVar3 = uVar3 + 1;
 } while (param_1 + 1 != uVar3);
 return iVar2;
}

// Function: goto_forward @ 0x101520
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = 1;
 if (0 < param_1) {
 iVar1 = param_1;
 }
 return iVar1 * param_1 * 2;
}

// Function: goto_backward @ 0x101530
unsigned long goto_backward(uint param_1)
{
 uint uVar1;
 unsigned long uVar2;
 uint uVar3;
 uint uVar4;
 bytes16_t auVar5;
 bytes16_t auVar6;
 int iVar10;
 bytes16_t auVar8;
 bytes16_t auVar9;
 unsigned int uVar15;
 bytes16_t auVar11;
 bytes16_t auVar12;
 bytes16_t auVar13;
 bytes16_t auVar14;
 bytes16_t auVar16;
 int iVar21;
 bytes16_t auVar17;
 int iVar22;
 bytes16_t auVar19;
 bytes16_t auVar20;
 int iVar28;
 bytes16_t auVar24;
 bytes16_t auVar25;
 bytes16_t auVar31;
 bytes16_t auVar32;
 bytes16_t auVar33;
 bytes16_t auVar36;
 bytes16_t auVar37;
 bytes16_t auVar38;
 bytes16_t auVar7;
 bytes16_t auVar18;
 int iVar23;
 bytes16_t auVar26;
 int iVar27;
 uint uVar29;
 int iVar30;
 bytes16_t auVar34;
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
 auVar5 = _DAT_00103140;
 auVar7 = _DAT_00103160;
 auVar18 = _DAT_00103160;
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

// Function: ternary_op @ 0x101790
int ternary_op(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: test_control_flow_l1 @ 0x1017a0
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

// Function: loop_multi_exit @ 0x1019a0
int loop_multi_exit(int param_1)
{
 int iVar1;
 uint uVar2;
 uVar2 = param_1 - 1;
 iVar1 = -1;
 if (uVar2 < 0xc) {
 iVar1 = *(int *)(&DAT_00103108 + (long)(int)uVar2 * 4) +
 *(int *)(&DAT_001030d8 + (long)(int)uVar2 * 4);
 }
 return iVar1;
}

// Function: infinite_loop @ 0x1019d0
int infinite_loop(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 while( true ) {
 if (*param_1 == 1) {
 return iVar1;
 }
 if (iVar1 == 1000) {
 *param_1 = 1;
 return 0x3e9;
 }
 if (*param_1 == 1) {
 return iVar1 + 1;
 }
 if (*param_1 == 1) break;
 if (*param_1 == 1) {
 return iVar1 + 3;
 }
 iVar1 = iVar1 + 4;
 }
 return iVar1 + 2;
}

// Function: multi_return @ 0x101a20
int multi_return(uint param_1)
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

// Function: conditional_return @ 0x101a50
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = -param_1;
 if (0 < param_1) {
 iVar1 = param_1 * 2;
 }
 return iVar1;
}

// Function: duffs_device @ 0x101a60
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uVar4 = 0xffffffff;
 if (0 < (int)param_3) {
 uVar2 = param_3 + 7 >> 3;
 uVar3 = uVar2;
 switch(param_3 & 7) {
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
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
 uVar3 = uVar2;
switchD_00101a86_caseD_7:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a86_caseD_6:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a86_caseD_5:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a86_caseD_4:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a86_caseD_3:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a86_caseD_2:
 uVar1 = *param_2;
 param_2 = param_2 + 1;
 *param_1 = uVar1;
 param_1 = param_1 + 1;
switchD_00101a86_caseD_1:
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

// Function: loop_complex_cond @ 0x101b00
int loop_complex_cond(uint param_1)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 if ((int)param_1 < 1) {
 iVar1 = 0;
 uVar2 = 0;
 }
 else {
 iVar1 = 0;
 uVar4 = param_1;
 uVar3 = 0;
 do {
 iVar1 = iVar1 + 2;
 param_1 = uVar4 - 1;
 uVar2 = uVar3 + 1;
 if ((uVar4 < 2) || ((int)param_1 <= iVar1)) break;
 bVar5 = uVar3 < 9;
 uVar4 = param_1;
 uVar3 = uVar2;
 } while (bVar5);
 }
 return iVar1 + param_1 + uVar2;
}

// Function: loop_modify_var @ 0x101b40
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

// Function: loop_external_state @ 0x101b70
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

// Function: recursion_factorial @ 0x101bb0
unsigned long recursion_factorial(uint param_1)
{
 bool bVar1;
 bytes16_t auVar2;
 uint uVar3;
 unsigned long uVar4;
 int iVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 bytes16_t auVar9;
 bytes16_t auVar10;
 bytes16_t auVar11;
 bytes16_t auVar12;
 bytes16_t auVar13;
 int iVar17;
 bytes16_t auVar16;
 int iVar18;
 unsigned int uVar22;
 bytes16_t auVar19;
 bytes16_t auVar20;
 bytes16_t auVar21;
 bytes16_t auVar23;
 int iVar28;
 bytes16_t auVar24;
 bytes16_t auVar26;
 bytes16_t auVar27;
 int iVar32;
 bytes16_t auVar29;
 bytes16_t auVar30;
 uint uVar33;
 uint uVar34;
 int iVar35;
 bytes16_t auVar36;
 bytes16_t auVar37;
 bytes16_t auVar38;
 bytes16_t auVar14;
 bytes16_t auVar15;
 bytes16_t auVar25;
 bytes16_t auVar31;
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
 auVar15 = _DAT_00103160;
 auVar25 = _DAT_00103160;
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

// Function: tail_recursion @ 0x101e20
unsigned long tail_recursion(uint param_1,unsigned long param_2)
{
 bool bVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 unsigned int uVar10;
 unsigned long uVar9;
 bytes16_t auVar11;
 bytes16_t auVar12;
 bytes16_t auVar13;
 bytes16_t auVar14;
 int iVar20;
 bytes16_t auVar15;
 bytes16_t auVar17;
 uint uVar21;
 bytes16_t auVar18;
 int iVar25;
 bytes16_t auVar22;
 bytes16_t auVar23;
 bytes16_t auVar24;
 bytes16_t auVar26;
 bytes16_t auVar27;
 uint uVar28;
 uint uVar29;
 uint uVar30;
 int iVar31;
 int iVar34;
 bytes16_t auVar32;
 bytes16_t auVar33;
 bytes16_t auVar16;
 bytes16_t auVar19;
 param_2 = param_2 & 0xffffffff;
 if (1 < (int)param_1) {
 iVar4 = param_1 - 2;
 if (param_1 < 2) {
 iVar4 = 0;
 }
 uVar5 = iVar4 + 1;
 if (7 < uVar5) {
 uVar7 = uVar5 & 0xfffffff8;
 uVar2 = (uint)param_2;
 uVar8 = SUB164(*(uint *)&DAT_00103270[0],4);
 uVar9 = SUB168(*(uint *)&DAT_00103270[0],8);
 iVar4 = param_1 - 1;
 uVar29 = param_1 - 2;
 uVar30 = param_1 - 3;
 uVar6 = (uVar7 - 8 >> 3) + 1;
 uVar3 = uVar6 & 3;
 auVar16 = DAT_00103160[0];
 uVar28 = param_1;
 if (0x17 < uVar7 - 8) {
 uVar6 = uVar6 & 0xfffffffc;
 do {
 auVar11._0_4_ = uVar28 - 4;
 auVar11._4_4_ = iVar4 + -4;
 auVar11._8_4_ = uVar29 - 4;
 auVar11._12_4_ = uVar30 - 4;
 uVar10 = (unsigned int)(uVar9 >> 0x20);
 auVar22._4_4_ = uVar8;
 auVar22._0_4_ = uVar8;
 auVar22._8_4_ = uVar10;
 auVar22._12_4_ = uVar10;
 iVar20 = auVar16._4_4_;
 auVar26._4_4_ = auVar11._4_4_;
 auVar26._0_4_ = auVar11._4_4_;
 auVar26._8_4_ = auVar11._12_4_;
 auVar26._12_4_ = auVar11._12_4_;
 auVar15._4_4_ = iVar4 + -8;
 auVar15._12_4_ = uVar30 - 8;
 iVar34 = iVar4 + -0xc;
 auVar15._0_4_ = auVar15._4_4_;
 auVar15._8_4_ = auVar15._12_4_;
 auVar23._4_4_ = iVar34;
 auVar23._0_4_ = iVar34;
 auVar23._8_4_ = uVar30 - 0xc;
 auVar23._12_4_ = uVar30 - 0xc;
 auVar27._0_4_ = uVar28 - 0x10;
 auVar27._4_4_ = iVar4 + -0x10;
 auVar27._8_4_ = uVar29 - 0x10;
 auVar27._12_4_ = uVar30 - 0x10;
 auVar32._0_4_ = uVar28 - 0x14;
 auVar32._4_4_ = iVar4 + -0x14;
 auVar32._8_4_ = uVar29 - 0x14;
 auVar32._12_4_ = uVar30 - 0x14;
 auVar12._4_4_ = iVar4 + -0x18;
 auVar12._12_4_ = uVar30 - 0x18;
 iVar25 = iVar4 + -0x1c;
 uVar2 = auVar27._0_4_ * uVar2 * uVar28 * (uVar28 - 8) * (uVar28 - 0x18);
 auVar12._0_4_ = auVar12._4_4_;
 auVar12._8_4_ = auVar12._12_4_;
 uVar8 = auVar12._4_4_ * auVar27._4_4_ * auVar15._4_4_ * uVar8 * iVar4;
 uVar9 = CONCAT44((int)((auVar12._8_8_ & 0xffffffff) *
 ((unsigned long)auVar27._12_4_ *
 ((auVar15._8_8_ & 0xffffffff) *
 ((auVar22._8_8_ & 0xffffffff) * (unsigned long)uVar30 & 0xffffffff) &
 0xffffffff) & 0xffffffff)),
 (int)(((auVar27._8_8_ & 0xffffffff) *
 (((uVar9 & 0xffffffff) * (unsigned long)uVar29 & 0xffffffff) *
 (unsigned long)(uVar29 - 8) & 0xffffffff) & 0xffffffff) *
 (unsigned long)(uVar29 - 0x18)));
 iVar31 = auVar32._0_4_ * auVar11._0_4_ * auVar16._0_4_ * (uVar28 - 0xc) * (uVar28 - 0x1c);
 uVar10 = (unsigned int)
 (((auVar32._8_8_ & 0xffffffff) *
 (((auVar11._8_8_ & 0xffffffff) * (unsigned long)auVar16._8_4_ & 0xffffffff) *
 (unsigned long)(uVar29 - 0xc) & 0xffffffff) & 0xffffffff) * (unsigned long)(uVar29 - 0x1c));
 auVar17._4_4_ = uVar10;
 auVar17._0_4_ = iVar31;
 auVar13._4_4_ = iVar25;
 auVar13._0_4_ = iVar25;
 auVar13._8_4_ = uVar30 - 0x1c;
 auVar13._12_4_ = uVar30 - 0x1c;
 auVar17._8_4_ = uVar10;
 auVar17._12_4_ =
 (int)((auVar13._8_8_ & 0xffffffff) *
 ((unsigned long)auVar32._12_4_ *
 ((auVar23._8_8_ & 0xffffffff) *
 ((auVar26._8_8_ & 0xffffffff) * (unsigned long)auVar16._12_4_ & 0xffffffff) &
 0xffffffff) & 0xffffffff));
 auVar16._8_8_ = auVar17._8_8_;
 auVar16._4_4_ = iVar25 * auVar32._4_4_ * iVar34 * auVar11._4_4_ * iVar20;
 auVar16._0_4_ = iVar31;
 uVar28 = uVar28 - 0x20;
 iVar4 = iVar4 + -0x20;
 uVar29 = uVar29 - 0x20;
 uVar30 = uVar30 - 0x20;
 uVar6 = uVar6 - 4;
 } while (uVar6 != 0);
 }
 while( true ) {
 uVar6 = auVar16._4_4_;
 uVar21 = auVar16._12_4_;
 if (uVar3 == 0) break;
 auVar14._4_4_ = iVar4 + -4;
 auVar14._12_4_ = uVar30 - 4;
 uVar2 = uVar2 * uVar28;
 auVar33._4_4_ = iVar4;
 auVar33._0_4_ = iVar4;
 auVar33._8_4_ = uVar30;
 auVar33._12_4_ = uVar30;
 uVar8 = iVar4 * uVar8;
 uVar9 = CONCAT44((int)((auVar33._8_8_ & 0xffffffff) * (uVar9 >> 0x20)),
 (int)((uVar9 & 0xffffffff) * (unsigned long)uVar29));
 auVar18._0_4_ = auVar16._0_4_ * (uVar28 - 4);
 auVar19._8_4_ = (unsigned int)((auVar16._8_8_ & 0xffffffff) * (unsigned long)(uVar29 - 4));
 auVar19._4_4_ = auVar19._8_4_;
 auVar19._0_4_ = auVar18._0_4_;
 auVar14._0_4_ = auVar14._4_4_;
 auVar14._8_4_ = auVar14._12_4_;
 auVar19._12_4_ = (int)((auVar14._8_8_ & 0xffffffff) * (unsigned long)uVar21);
 auVar18._8_8_ = auVar19._8_8_;
 auVar18._4_4_ = auVar14._4_4_ * uVar6;
 iVar4 = iVar4 + -8;
 uVar29 = uVar29 - 8;
 uVar30 = uVar30 - 8;
 uVar3 = uVar3 - 1;
 auVar16 = auVar18;
 uVar28 = uVar28 - 8;
 }
 auVar24._4_4_ = uVar6;
 auVar24._0_4_ = uVar6;
 auVar24._8_4_ = uVar21;
 auVar24._12_4_ = uVar21;
 param_2 = (((auVar24._8_8_ & 0xffffffff) * (uVar9 >> 0x20) & 0xffffffff) *
 ((unsigned long)uVar6 * (unsigned long)uVar8 & 0xffffffff) & 0xffffffff) *
 (((auVar16._8_8_ & 0xffffffff) * (uVar9 & 0xffffffff) & 0xffffffff) *
 ((unsigned long)auVar16._0_4_ * (unsigned long)uVar2 & 0xffffffff) & 0xffffffff) & 0xffffffff;
 if (uVar5 == uVar7) {
 return param_2;
 }
 param_1 = param_1 - uVar7;
 }
 do {
 param_2 = (unsigned long)((int)param_2 * param_1);
 bVar1 = 2 < param_1;
 param_1 = param_1 - 1;
 } while (bVar1);
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x102080
unsigned long indirect_recursion_a(uint param_1,int param_2)
{
 int iVar1;
 unsigned long uVar2;
 uint uVar3;
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

// Function: call_func_ptr @ 0x1020e0
void call_func_ptr(void *UNRECOVERED_JUMPTABLE,unsigned int param_2)
{
 ((void (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x1020f0
unsigned long call_func_ptr_array(unsigned int param_1,uint param_2)
{
 bool bVar1;
 bytes16_t auVar2;
 uint uVar3;
 unsigned long uVar4;
 int iVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 bytes16_t auVar9;
 bytes16_t auVar10;
 bytes16_t auVar11;
 bytes16_t auVar12;
 bytes16_t auVar13;
 int iVar17;
 bytes16_t auVar16;
 int iVar18;
 unsigned int uVar22;
 bytes16_t auVar19;
 bytes16_t auVar20;
 bytes16_t auVar21;
 bytes16_t auVar23;
 int iVar28;
 bytes16_t auVar24;
 bytes16_t auVar26;
 bytes16_t auVar27;
 int iVar32;
 bytes16_t auVar29;
 bytes16_t auVar30;
 uint uVar33;
 uint uVar34;
 int iVar35;
 bytes16_t auVar36;
 bytes16_t auVar37;
 bytes16_t auVar38;
 bytes16_t auVar14;
 bytes16_t auVar15;
 bytes16_t auVar25;
 bytes16_t auVar31;
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
 auVar15 = DAT_00103160[0];
 auVar25 = DAT_00103160[0];
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

// Function: double_value @ 0x102110
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: triple_value @ 0x102120
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x102130
int call_virtual_func(unsigned long long param_1,int param_2)
{
 return param_2 * 2;
}

// Function: process_with_callback @ 0x102140
int process_with_callback(long param_1,uint param_2,void *param_3)
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
 iVar1 = ((int (*)(unsigned int))param_3)(*(unsigned int *)(param_1 + uVar2 * 4));
 iVar3 = iVar3 + iVar1;
 uVar2 = uVar2 + 1;
 } while (param_2 != uVar2);
 }
 return iVar3;
}

// Function: test_control_flow_l2 @ 0x102190
void test_control_flow_l2(void)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
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

// Function: non_local_jump @ 0x1023e0
int non_local_jump(uint param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = _setjmp(jump_buffer);
 iVar2 = -1;
 if (iVar1 == 0) {
 if ((int)param_1 < 0) {
 longjmp(jump_buffer,1);
 }
 if (100 < param_1) {
 longjmp(jump_buffer,2);
 }
 iVar2 = param_1 * 2;
 }
 return iVar2;
}

// Function: cpp_exception @ 0x102430
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

// Function: large_jump_table @ 0x102450
bytes16_t large_jump_table(uint param_1,uint param_2,unsigned long param_3)
{
 bytes16_t auVar1;
 bytes16_t auVar2;
 byte bVar3;
 uint uVar4;
 bytes16_t auVar5;
 bytes16_t auVar6;
 bytes16_t auVar7;
 bytes16_t auVar8;
 bytes16_t auVar9;
 bytes16_t auVar10;
 bytes16_t auVar11;
 bytes16_t auVar12;
 bytes16_t auVar13;
 bytes16_t auVar14;
 bytes16_t auVar15;
 if (9 < param_1) {
 auVar5._8_8_ = param_3;
 auVar5._0_8_ = 0xffffffff;
 return auVar5;
 }
 uVar4 = (uint)(param_3 & 0xffffffff);
 bVar3 = (byte)(param_3 & 0xffffffff);
 switch(param_1) {
 case 0:
 auVar6._0_4_ = param_2 + uVar4;
 auVar6._4_4_ = 0;
 auVar6._8_8_ = param_3;
 return auVar6;
 case 1:
 auVar7._0_4_ = param_2 - uVar4;
 auVar7._4_4_ = 0;
 auVar7._8_8_ = param_3;
 return auVar7;
 case 2:
 auVar8._0_4_ = param_2 * uVar4;
 auVar8._4_4_ = 0;
 auVar8._8_8_ = param_3;
 return auVar8;
 case 4:
 if (uVar4 != 0) {
 auVar10._8_8_ = (long)(int)param_2 % (long)(int)uVar4 & 0xffffffff;
 auVar10._0_8_ = auVar10._8_8_;
 return auVar10;
 }
 auVar2._8_8_ = 0;
 auVar2._0_8_ = param_3;
 auVar2._0_8_ = (param_3 << 40) & 0xFFFFFFFFFFFFFFFFULL;
 return auVar2;
 case 5:
 auVar11._0_4_ = param_2 & uVar4;
 auVar11._4_4_ = 0;
 auVar11._8_8_ = param_3;
 return auVar11;
 case 6:
 auVar12._0_4_ = param_2 | uVar4;
 auVar12._4_4_ = 0;
 auVar12._8_8_ = param_3;
 return auVar12;
 case 7:
 auVar13._0_4_ = param_2 ^ uVar4;
 auVar13._4_4_ = 0;
 auVar13._8_8_ = param_3;
 return auVar13;
 case 8:
 auVar14._0_4_ = param_2 << (bVar3 & 0x1f);
 auVar14._4_4_ = 0;
 auVar14._8_8_ = param_3;
 return auVar14;
 case 9:
 auVar15._0_4_ = (int)param_2 >> (bVar3 & 0x1f);
 auVar15._4_4_ = 0;
 auVar15._8_8_ = param_3;
 return auVar15;
 }
 if (uVar4 != 0) {
 auVar9._0_8_ = (long)(int)param_2 / (long)(int)uVar4 & 0xffffffff;
 auVar9._8_8_ = (long)(int)param_2 % (long)(int)uVar4 & 0xffffffff;
 return auVar9;
 }
 auVar1._8_8_ = 0;
 auVar1._0_8_ = param_3 >> 0x20;
 auVar1._0_8_ = (ulonglong)auVar1._0_8_ << 0x40;
 return auVar1;
}

// Function: op_add @ 0x102470
int op_add(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x102480
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x102490
int op_mul(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: op_div @ 0x1024a0
bytes16_t op_div(int param_1,int param_2,unsigned long param_3)
{
 bytes16_t auVar1;
 bytes16_t auVar2;
 if (param_2 != 0) {
 auVar2._0_8_ = (long)param_1 / (long)param_2 & 0xffffffff;
 auVar2._8_8_ = (long)param_1 % (long)param_2 & 0xffffffff;
 return auVar2;
 }
 auVar1._8_8_ = 0;
 auVar1._0_8_ = param_3;
 return auVar1;
}

// Function: op_mod @ 0x1024b0
unsigned long op_mod(int param_1,int param_2)
{
 if (param_2 != 0) {
 return (long)param_1 % (long)param_2 & 0xffffffff;
 }
 return 0;
}

// Function: op_and @ 0x1024c0
uint op_and(uint param_1,uint param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x1024d0
uint op_or(uint param_1,uint param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x1024e0
uint op_xor(uint param_1,uint param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x1024f0
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x102500
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: conditional_func_ptr @ 0x102510
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *UNRECOVERED_JUMPTABLE;
 void *pcVar1;
 pcVar1 = (void *)recursion_factorial;
 if (param_1 == 1) {
 pcVar1 = (void *)triple_value;
 }
 UNRECOVERED_JUMPTABLE = (void *)double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = pcVar1;
 }
 ((void (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: state_machine @ 0x102540
uint state_machine(int param_1,uint param_2)
{
 uint uVar1;
 switch(param_2) {
 case 0:
 return (uint)(param_1 == 1);
 case 1:
 uVar1 = (uint)(param_1 == 99) * 2 + 1;
 if (param_1 == 2) {
 uVar1 = 2;
 }
 return uVar1;
 case 2:
 break;
 case 3:
 return (uint)(param_1 != 0) * 3;
 default:
 param_2 = 3;
 }
 return param_2;
}

// Function: fsm_func_table @ 0x102590
char fsm_func_table(int param_1,unsigned int param_2)
{
 char cVar1;
 switch(param_2) {
 case 0:
 return param_1 == 1;
 case 1:
 break;
 case 2:
 return 2;
 case 3:
 return (param_1 != 0) * '\x03';
 default:
 return 3;
 }
 cVar1 = (param_1 == 99) * '\x02' + '\x01';
 if (param_1 == 2) {
 cVar1 = '\x02';
 }
 return cVar1;
}

// Function: state_idle @ 0x1025b0
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x1025c0
char state_processing(int param_1)
{
 char cVar1;
 cVar1 = (param_1 == 99) * '\x02' + '\x01';
 if (param_1 == 2) {
 cVar1 = '\x02';
 }
 return cVar1;
}

// Function: state_done @ 0x1025e0
unsigned long long state_done(void)
{
 return 2;
}

// Function: state_error @ 0x1025f0
char state_error(int param_1)
{
 return (param_1 != 0) * '\x03';
}

// Function: computed_goto @ 0x102600
unsigned long long computed_goto(unsigned long long param_1,unsigned int param_2)
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

// Function: obfuscated_cf @ 0x102630
int obfuscated_cf(int param_1)
{
 return param_1 * 2;
}

// Function: opaque_predicate @ 0x102640
int opaque_predicate(int param_1)
{
 return param_1 * 2;
}

// Function: overlapped_code @ 0x102650
int overlapped_code(uint param_1)
{
 if ((param_1 & 1) == 0) {
 return (int)param_1 / 2;
 }
 return param_1 * 3 + 1;
}

// Function: test_control_flow_l3 @ 0x102670
void test_control_flow_l3(void)
{
 uint uVar1;
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
 uVar1 = computed_goto(0, 1);
 printf("CF-L3-07 (computed_goto): %d\n",(unsigned long)uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}

// Function: main @ 0x102780
int main(int argc, char **argv, char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



