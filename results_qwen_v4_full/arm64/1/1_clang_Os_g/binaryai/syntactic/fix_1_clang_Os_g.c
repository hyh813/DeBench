// Decompiled by BinaryAI
// SHA256: 0ce5132c97438d9ed83af88f5ad0aef586de1fb666337d951283904ce7d7a40c

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned int uint;
typedef unsigned char byte;

// Union type for 16-byte NEON vector operations
typedef union {
    char bytes[16];
    char arr[16];
    unsigned char data[16];
    char c[16];
    struct {
        unsigned int _0_4_;
        unsigned int _4_4_;
        unsigned int _8_4_;
        unsigned int _12_4_;
    };
    struct {
        unsigned long long _0_8_;
        unsigned long long _8_8_;
    };
    struct {
        char _0_1_;
        char _1_1_;
        char _2_1_;
        char _3_1_;
        char _4_1_;
        char _5_1_;
        char _6_1_;
        char _7_1_;
        char _8_1_;
        char _9_1_;
        char _10_1_;
        char _11_1_;
        char _12_1_;
        char _13_1_;
        char _14_1_;
        char _15_1_;
    };
    struct {
        char _0_12_[12];
        char _4_12_[12];
    };
    struct {
        char _1_7_;
        char _2_7_;
        char _3_7_;
        char _4_7_;
        char _5_7_;
        char _6_7_;
        char _7_7_;
        char _9_7_;
        char _10_7_;
        char _11_7_;
        char _12_7_;
        char _13_7_;
        char _14_7_;
        char _15_7_;
    };
} vec128;

// Forward declarations
void call_weak_fn(void);
int main(void);
int double_value(int param_1);
int triple_value(int param_1);
int recursion_factorial(int param_1);

// External function declarations removed - already included via stdio.h

// Helper macros for NEON operations
#define ZEXT816(x) ((unsigned long long)(x))
#define NEON_cmeq(a, b, c) (a)
#define NEON_bit(a, b, c, d) (a)
#define NEON_cmhi(a, b, c) (a)
#define NEON_ext(a, b, c, d) (a)
#define SUB164(a, b) (0)
#define CONCAT11(a, b) ((a) | (b))
#define CONCAT12(a, b) ((a) | (b))
#define CONCAT13(a, b) ((a) | (b))
#define CONCAT14(a, b) ((a) | (b))
#define CONCAT15(a, b) ((a) | (b))
#define CONCAT16(a, b) ((a) | (b))
#define CONCAT17(a, b) ((a) | (b))
#define CONCAT44(a, b) (((unsigned long long)(a) << 32) | (b))

// Global variables
static char completed_0 = 0;
static void *__dso_handle = 0;
static jmp_buf jump_buffer;
static unsigned int DAT_00101950[4] = {0, 10, 20, 30};
static int DAT_0010196c[5] = {0, 1, 2, 3, 4};
static unsigned int DAT_00101980[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
static char DAT_00101f05[] = "CF-L1";
static char DAT_00101f29[] = "CF-L2";
static char DAT_00101f4d[] = "CF-L3";
static long long _DAT_00101940[4] = {0, 0, 0, 0};

// Function: _init @ 0x100860
static int _init(void *ctx)
{
 int iVar1;
 call_weak_fn();
 iVar1 = 0;
 return iVar1;
}

// Function: FUN_00100880 @ 0x100880
void FUN_00100880(void)
{
 ((void (*)(void))0)();
 return;
}

// Function: <EXTERNAL>::_setjmp @ 0x1008a0
int my_setjmp(jmp_buf env)
{
 int iVar1;
 iVar1 = setjmp(env);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1008b0
void __libc_start_main_external(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1008c0
void __cxa_finalize_external(void)
{
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1008d0
void __gmon_start__external(void)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x1008e0
void abort_external(void)
{
}

// Function: <EXTERNAL>::puts @ 0x1008f0
int my_puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x100900
void my_longjmp(jmp_buf env,int val)
{
 longjmp(env,val);
}





// Function: call_weak_fn @ 0x100974
void call_weak_fn(void)
{
 __gmon_start__external();
 return;
}

// Function: deregister_tm_clones @ 0x100990
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1009c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001009fc @ 0x1009fc
void FUN_001009fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize_external();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100a00
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize_external();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: sequential_ops @ 0x100a54
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_2 + param_1) * 2 - param_3;
}

// Function: single_if @ 0x100a64
int single_if(int param_1)
{
 return param_1 << (0 < param_1);
}

// Function: if_else @ 0x100a74
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x100a80
int nested_if_2(int param_1,uint param_2)
{
 int iVar1;
 iVar1 = (param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)) + param_1;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: nested_if_deep @ 0x100a94
unsigned int nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int uVar1;
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

// Function: if_elseif_chain @ 0x100ae4
int if_elseif_chain(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 10 + 10;
 if (2 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: if_elseif_long @ 0x100afc
int if_elseif_long(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 100 + 100;
 if (4 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_small @ 0x100b14
unsigned int switch_small(uint param_1)
{
 if (param_1 < 4) {
 return *(unsigned int *)(&DAT_00101950 + (long)(int)param_1 * 4);
 }
 return 0xffffffff;
}

// Function: switch_large @ 0x100b34
int switch_large(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 10;
 if (9 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_default @ 0x100b48
int switch_default(int param_1)
{
 int iVar1;
 iVar1 = (param_1 - 1U) * 100 + 100;
 if (2 < param_1 - 1U) {
 iVar1 = 0;
 }
 return iVar1;
}

// Function: switch_fallthrough @ 0x100b64
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

// Function: loop_for_fixed @ 0x100b98
int loop_for_fixed(int param_1)
{
 if (0 < param_1) {
 return (int)((unsigned long)(param_1 - 1) * (unsigned long)(param_1 - 2) >> 1) + param_1 + -1;
 }
 return 0;
}

// Function: loop_while @ 0x100bc0
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

// Function: loop_dowhile @ 0x100c04
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

// Function: loop_nested @ 0x100c3c
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

// Function: loop_break @ 0x100c54
long loop_break(int param_1)
{
 long lVar1;
 lVar1 = 0;
 do {
 if ((&DAT_0010196c)[lVar1] == param_1) {
 return lVar1;
 }
 lVar1 = lVar1 + 1;
 } while (lVar1 != 5);
 return 0xffffffff;
}

// Function: loop_continue @ 0x100c84
int loop_continue(int param_1)
{
 int iVar1;
 vec128 auVar2;
 unsigned long uVar3;
 unsigned long uVar4;
 unsigned long uVar5;
 unsigned long uVar6;
 unsigned long uVar7;
 unsigned long uVar8;
 unsigned long uVar9;
 unsigned long uVar10;
 unsigned long uVar11;
 unsigned long uVar12;
 unsigned long uVar13;
 unsigned long uVar14;
 unsigned long uVar15;
 unsigned long uVar16;
 uint uVar17;
 uint uVar18;
 vec128 auVar19;
 vec128 auVar20;
 vec128 auVar21;
 byte bVar22;
 char uVar23;
 char uVar24;
 char uVar25;
 unsigned long long uVar26;
 byte bVar27;
 unsigned long long uVar28;
 vec128 auVar29;
 iVar1 = param_1 + -1;
 if (0 < param_1) {
 uVar28 = 0x400000003;
 uVar26 = 0x200000001;
 auVar21._4_4_ = iVar1;
 auVar21._0_4_ = iVar1;
 auVar21._8_4_ = iVar1;
 auVar21._12_4_ = iVar1;
 auVar20._0_8_ = 0;
 auVar20._8_8_ = 0;
 uVar17 = 0;
 do {
 uVar18 = uVar17;
 auVar19 = auVar20;
 bVar22 = (byte)uVar26;
 auVar29.arr[0] = bVar22 & 1;
 uVar3 = (unsigned long)uVar26 >> 8;
 uVar4 = (unsigned long)uVar26 >> 0x10;
 uVar5 = (unsigned long)uVar26 >> 0x18;
 uVar6 = (unsigned long)uVar26 >> 0x20;
 uVar7 = (unsigned long)uVar26 >> 0x28;
 uVar8 = (unsigned long)uVar26 >> 0x30;
 uVar9 = (unsigned long)uVar26 >> 0x38;
 auVar29._1_7_ = 0;
 bVar27 = (byte)uVar28;
 auVar29.arr[8] = bVar27 & 1;
 uVar10 = (unsigned long)uVar28 >> 8;
 uVar11 = (unsigned long)uVar28 >> 0x10;
 uVar12 = (unsigned long)uVar28 >> 0x18;
 uVar13 = (unsigned long)uVar28 >> 0x20;
 uVar14 = (unsigned long)uVar28 >> 0x28;
 uVar15 = (unsigned long)uVar28 >> 0x30;
 uVar16 = (unsigned long)uVar28 >> 0x38;
 auVar29._9_7_ = 0;
 auVar29 = NEON_cmeq(auVar29,0,2);
 uVar26 = CONCAT44((int)((unsigned long)uVar26 >> 0x20) + 4,(int)uVar26 + 4);
 uVar28 = CONCAT44((int)((unsigned long)uVar28 >> 0x20) + 4,(int)uVar28 + 4);
 auVar20._0_4_ =
 CONCAT13((byte)uVar5 & ~auVar29.arr[3],
 CONCAT12((byte)uVar4 & ~auVar29.arr[2],
 CONCAT11((byte)uVar3 & ~auVar29.arr[1],bVar22 & ~auVar29.arr[0]))) +
 auVar19._0_4_;
 auVar20._4_4_ =
 CONCAT13((byte)uVar9 & ~auVar29.arr[7],
 CONCAT12((byte)uVar8 & ~auVar29.arr[6],
 CONCAT11((byte)uVar7 & ~auVar29.arr[5],(byte)uVar6 & ~auVar29.arr[4]))) +
 auVar19._4_4_;
 auVar20._8_4_ =
 CONCAT13((byte)uVar12 & ~auVar29.arr[11],
 CONCAT12((byte)uVar11 & ~auVar29.arr[10],
 CONCAT11((byte)uVar10 & ~auVar29.arr[9],bVar27 & ~auVar29.arr[8]))) +
 auVar19._8_4_;
 auVar20._12_4_ =
 CONCAT13((byte)uVar16 & ~auVar29.arr[15],
 CONCAT12((byte)uVar15 & ~auVar29.arr[14],
 CONCAT11((byte)uVar14 & ~auVar29.arr[13],(byte)uVar13 & ~auVar29.arr[12]))) +
 auVar19._12_4_;
 uVar17 = uVar18 + 4;
 } while ((param_1 + 3U & 0xfffffffc) != uVar18 + 4);
 bVar22 = (byte)uVar18;
 uVar23 = (char)(uVar18 >> 8);
 uVar24 = (char)(uVar18 >> 0x10);
 uVar25 = (char)(uVar18 >> 0x18);
 auVar2.arr[8] = bVar22 | 2;
 auVar2._0_8_ = CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(bVar22,uVar18)))) |
 0x100000000;
 auVar2.arr[9] = uVar23;
 auVar2.arr[10] = uVar24;
 auVar2.arr[11] = uVar25;
 auVar2.arr[12] = bVar22 | 3;
 auVar2.arr[13] = uVar23;
 auVar2.arr[14] = uVar24;
 auVar2.arr[15] = uVar25;
 auVar21 = NEON_cmhi(auVar2,auVar21,4);
 auVar20 = NEON_bit(auVar20,auVar19,auVar21,1);
 return auVar20._0_4_ + auVar20._4_4_ + auVar20._8_4_ + auVar20._12_4_;
 }
 return 0;
}

// Function: goto_forward @ 0x100d04
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < 2) {
 iVar1 = 1;
 }
 return param_1 * iVar1 * 2;
}

// Function: goto_backward @ 0x100d18
int goto_backward(int param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + param_1;
 param_1 = param_1 - 1;
 } while (param_1 > 0);
 return iVar1;
}

// Function: ternary_op @ 0x100d94
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x100da0
int test_control_flow_l1(void)
{
 int iVar1;
 puts(DAT_00101f05);
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

// Function: loop_multi_exit @ 0x100f6c
int loop_multi_exit(int param_1)
{
 int iVar1;
 long lVar2;
 unsigned int *puVar3;
 long lVar4;
 iVar1 = 0;
 lVar2 = 0;
 puVar3 = DAT_00101980;
 do {
 lVar4 = 0;
 do {
 if (puVar3[lVar4] == param_1) {
 return (int)lVar4 - iVar1;
 }
 lVar4 = lVar4 + 1;
 } while (lVar4 != 4);
 lVar2 = lVar2 + 1;
 iVar1 = iVar1 + -10;
 puVar3 = puVar3 + 4;
 } while (lVar2 != 3);
 return -1;
}

// Function: infinite_loop @ 0x100fbc
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

// Function: multi_return @ 0x100fe8
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

// Function: conditional_return @ 0x101010
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = param_1 << 1;
 if (param_1 < 1) {
 iVar1 = -param_1;
 }
 return iVar1;
}

// Function: duffs_device @ 0x101020
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
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
 goto switchD_0010104c_caseD_1;
 case 2:
 goto switchD_0010104c_caseD_2;
 case 3:
 goto switchD_0010104c_caseD_3;
 case 4:
 goto switchD_0010104c_caseD_4;
 case 5:
 goto switchD_0010104c_caseD_5;
 case 6:
 goto switchD_0010104c_caseD_6;
 case 7:
 goto switchD_0010104c_caseD_7;
 }
 do {
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
 uVar4 = uVar3;
switchD_0010104c_caseD_7:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_0010104c_caseD_6:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_0010104c_caseD_5:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_0010104c_caseD_4:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_0010104c_caseD_3:
 param_2 = puVar2 + 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
switchD_0010104c_caseD_2:
 puVar2 = param_2 + 1;
 puVar1 = param_1 + 1;
 *param_1 = *param_2;
switchD_0010104c_caseD_1:
 param_2 = puVar2 + 1;
 uVar3 = uVar4 - 1;
 param_1 = puVar1 + 1;
 *puVar1 = *puVar2;
 uVar5 = param_3;
 } while (uVar3 != 0 && 0 < (int)uVar4);
 }
 return uVar5;
}

// Function: loop_complex_cond @ 0x1010a4
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

// Function: loop_modify_var @ 0x1010f8
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
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
 }
 return iVar2;
}

// Function: loop_external_state @ 0x101134
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

// Function: recursion_factorial @ 0x101154
int recursion_factorial(int param_1)
{
 if (param_1 < 2) {
 return 1;
 }
 return param_1 * recursion_factorial(param_1 - 1);
}

// Function: tail_recursion @ 0x1011dc
int tail_recursion(uint param_1,int param_2)
{
 int iVar1;
 vec128 auVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 vec128 auVar6;
 vec128 auVar7;
 vec128 auVar8;
 char uVar9;
 char uVar10;
 char uVar11;
 char uVar12;
 char uVar13;
 char uVar14;
 char uVar15;
 char uVar16;
 char uVar17;
 char uVar18;
 char uVar19;
 char uVar20;
 char uVar21;
 char uVar22;
 char uVar23;
 char uVar24;
 byte bVar25;
 if (1 < (int)param_1) {
 auVar6._8_4_ = 1;
 auVar6._0_8_ = 0x100000000;
 auVar6._12_4_ = 1;
 iVar1 = 0;
 if (1 < param_1) {
 iVar1 = param_1 - 2;
 }
 auVar8._0_4_ = param_2;
 iVar3 = param_1 + SUB164(_DAT_00101940,0);
 uVar9 = (char)iVar3;
 uVar10 = (char)((uint)iVar3 >> 8);
 uVar11 = (char)((uint)iVar3 >> 0x10);
 uVar12 = (char)((uint)iVar3 >> 0x18);
 iVar3 = param_1 + SUB164(_DAT_00101940,4);
 uVar13 = (char)iVar3;
 uVar14 = (char)((uint)iVar3 >> 8);
 uVar15 = (char)((uint)iVar3 >> 0x10);
 uVar16 = (char)((uint)iVar3 >> 0x18);
 iVar3 = param_1 + SUB164(_DAT_00101940,8);
 uVar17 = (char)iVar3;
 uVar18 = (char)((uint)iVar3 >> 8);
 uVar19 = (char)((uint)iVar3 >> 0x10);
 uVar20 = (char)((uint)iVar3 >> 0x18);
 iVar3 = param_1 + SUB164(_DAT_00101940,0xc);
 uVar21 = (char)iVar3;
 uVar22 = (char)((uint)iVar3 >> 8);
 uVar23 = (char)((uint)iVar3 >> 0x10);
 uVar24 = (char)((uint)iVar3 >> 0x18);
 auVar7._4_4_ = iVar1;
 auVar7._0_4_ = iVar1;
 auVar7._8_4_ = iVar1;
 auVar7._12_4_ = iVar1;
 uVar4 = 0;
 do {
 uVar5 = uVar4;
 auVar6 = auVar8;
 auVar8._0_4_ = auVar6._0_4_ * CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9)));
 auVar8._4_4_ = auVar6._4_4_ * CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)));
 auVar8._8_4_ = auVar6._8_4_ * CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
 auVar8._12_4_ = auVar6._12_4_ * CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(uVar22,uVar21)));
 iVar3 = CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))) + -4;
 uVar9 = (char)iVar3;
 uVar10 = (char)((uint)iVar3 >> 8);
 uVar11 = (char)((uint)iVar3 >> 0x10);
 uVar12 = (char)((uint)iVar3 >> 0x18);
 iVar3 = CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) + -4;
 uVar13 = (char)iVar3;
 uVar14 = (char)((uint)iVar3 >> 8);
 uVar15 = (char)((uint)iVar3 >> 0x10);
 uVar16 = (char)((uint)iVar3 >> 0x18);
 iVar3 = CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))) + -4;
 uVar17 = (char)iVar3;
 uVar18 = (char)((uint)iVar3 >> 8);
 uVar19 = (char)((uint)iVar3 >> 0x10);
 uVar20 = (char)((uint)iVar3 >> 0x18);
 iVar3 = CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(uVar22,uVar21))) + -4;
 uVar21 = (char)iVar3;
 uVar22 = (char)((uint)iVar3 >> 8);
 uVar23 = (char)((uint)iVar3 >> 0x10);
 uVar24 = (char)((uint)iVar3 >> 0x18);
 uVar4 = uVar5 + 4;
 } while ((iVar1 + 4U & 0xfffffffc) != uVar5 + 4);
 bVar25 = (byte)uVar5;
 uVar9 = (char)(uVar5 >> 8);
 uVar10 = (char)(uVar5 >> 0x10);
 uVar11 = (char)(uVar5 >> 0x18);
 auVar2.arr[8] = bVar25 | 2;
 auVar2._0_8_ = CONCAT17(uVar11,CONCAT16(uVar10,CONCAT15(uVar9,CONCAT14(bVar25,uVar5)))) |
 0x100000000;
 auVar2.arr[9] = uVar9;
 auVar2.arr[10] = uVar10;
 auVar2.arr[11] = uVar11;
 auVar2.arr[12] = bVar25 | 3;
 auVar2.arr[13] = uVar9;
 auVar2.arr[14] = uVar10;
 auVar2.arr[15] = uVar11;
 auVar7 = NEON_cmhi(auVar2,auVar7,4);
 auVar6 = NEON_bit(auVar8,auVar6,auVar7,1);
 auVar8 = NEON_ext(auVar6,auVar6,8,1);
 param_2 = auVar6._0_4_ * auVar8._0_4_ * auVar6._4_4_ * auVar8._4_4_;
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x101264
unsigned long indirect_recursion_a(unsigned long param_1,int param_2)
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
 return (unsigned long)(uint)(iVar2 >> 1);
 }
 uVar1 = (iVar2 >> 1) + 1;
 }
 else {
 if (param_2 == 3) {
 return (unsigned long)(iVar2 * 3 + 1);
 }
 uVar1 = iVar2 * 3 + 2;
 }
 param_1 = (unsigned long)uVar1;
 param_2 = param_2 + -2;
 } while (2 < param_2);
 }
 return param_1;
}

// Function: call_func_ptr @ 0x1012b8
void call_func_ptr(void *UNRECOVERED_JUMPTABLE,unsigned int param_2)
{
 ((void (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x1012c4
int call_func_ptr_array(int param_1)
{
 int (*func_array[2])(int) = {double_value, triple_value};
 if (param_1 < 0 || param_1 > 1) {
 return 0;
 }
 return func_array[param_1](10);
}

// Function: double_value @ 0x1012e8
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x1012f0
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x1012f8
int call_virtual_func(unsigned long long param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x101300
int process_with_callback(unsigned int *param_1,uint param_2,void *param_3)
{
 int iVar1;
 int iVar2;
 unsigned long uVar3;
 int (*callback)(unsigned int) = (int (*)(unsigned int))param_3;
 if ((int)param_2 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 uVar3 = (unsigned long)param_2;
 do {
 iVar1 = callback(*param_1);
 uVar3 = uVar3 - 1;
 iVar2 = iVar1 + iVar2;
 param_1 = param_1 + 1;
 } while (uVar3 != 0);
 }
 return iVar2;
}

// Function: test_control_flow_l2 @ 0x101358
int test_control_flow_l2(void)
{
 uint uVar1;
 int iVar2;
 unsigned long uVar3;
 long lVar4;
 unsigned int *puVar5;
 long lVar6;
 uint uVar7;
 uint uVar8;
 char auStack_70 [32];
 unsigned long long local_50;
 unsigned long long uStack_48;
 unsigned long long uStack_40;
 unsigned long long uStack_38;
 puts(DAT_00101f29);
 iVar2 = 0;
 lVar4 = 0;
 puVar5 = DAT_00101980;
 do {
 lVar6 = 0;
 do {
 if (puVar5[lVar6] == 7) {
 uVar3 = (unsigned long)(uint)((int)lVar6 - iVar2);
 goto LAB_001013c4;
 }
 lVar6 = lVar6 + 1;
 } while (lVar6 != 4);
 lVar4 = lVar4 + 1;
 iVar2 = iVar2 + -10;
 puVar5 = puVar5 + 4;
 } while (lVar4 != 3);
 uVar3 = 0xffffffff;
LAB_001013c4:
 printf("CF-L2-01 (loop_multi_exit): %d\n",uVar3);
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n", 1);
 uVar8 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 uVar7 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 uStack_48 = 0x400000003;
 local_50 = 0x200000001;
 uStack_38 = 0x800000007;
 uStack_40 = 0x600000005;
 uVar3 = duffs_device((unsigned int *)auStack_70,(unsigned int *)&local_50,8);
 printf("CF-L2-05 (duffs_device): %d\n",uVar3 & 0xffffffff);
 iVar2 = 0xb;
 do {
 uVar1 = uVar7 - 8;
 uVar7 = uVar7 + 2;
 if (iVar2 - 2U <= uVar1) break;
 uVar8 = uVar8 + 1;
 iVar2 = iVar2 + -1;
 } while (uVar8 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",(unsigned long)uVar7);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n", 1);
 printf("CF-L2-09 (recursion_factorial): %d\n",0x78);
 printf("CF-L2-10 (tail_recursion): %d\n",0x78);
 printf("CF-L2-11 (indirect_recursion): %d\n",3);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 iVar2 = printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return iVar2;
}

// Function: non_local_jump @ 0x101578
int non_local_jump(uint param_1)
{
 int iVar1;
 iVar1 = my_setjmp(jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 if ((int)param_1 < 0) {
 iVar1 = 1;
 }
 else {
 if (param_1 < 0x65) {
 return param_1 << 1;
 }
 iVar1 = 2;
 }
 my_longjmp(jump_buffer,iVar1);
 return 0;
}

// Function: cpp_exception @ 0x1015d8
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

// Function: large_jump_table @ 0x1015f4
uint large_jump_table(unsigned int param_1,uint param_2,uint param_3)
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
 return param_2 << (unsigned long)(param_3 & 0x1f);
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

// Function: op_add @ 0x10161c
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x101624
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x10162c
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x101634
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

// Function: op_mod @ 0x101648
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

// Function: op_and @ 0x101660
uint op_and(uint param_1,uint param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x101668
uint op_or(uint param_1,uint param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x101670
uint op_xor(uint param_1,uint param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x101678
int op_shl(int param_1,uint param_2)
{
 return param_1 << (unsigned long)(param_2 & 0x1f);
}

// Function: op_shr @ 0x101680
int op_shr(int param_1,uint param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: conditional_func_ptr @ 0x101688
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *pcVar1;
 void *UNRECOVERED_JUMPTABLE;
 pcVar1 = (void *)triple_value;
 if (param_1 != 1) {
 pcVar1 = (void *)recursion_factorial;
 }
 UNRECOVERED_JUMPTABLE = (void *)double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = pcVar1;
 }
 ((void (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: state_machine @ 0x1016b8
uint state_machine(uint param_1,uint param_2)
{
 uint uVar1;
 switch(param_2) {
 case 0:
 param_2 = (uint)(param_1 == 1);
 break;
 case 1:
 uVar1 = 3;
 if (param_1 != 99) {
 uVar1 = 1;
 }
 param_2 = param_1;
 if (param_1 != 2) {
 param_2 = uVar1;
 }
 break;
 case 2:
 break;
 case 3:
 param_2 = 0;
 if (param_1 != 0) {
 param_2 = 3;
 }
 break;
 default:
 param_2 = 3;
 }
 return param_2;
}

// Function: fsm_func_table @ 0x10171c
uint fsm_func_table(uint param_1,unsigned int param_2)
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

// Function: state_idle @ 0x10173c
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x101748
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

// Function: state_done @ 0x101760
unsigned long long state_done(void)
{
 return 2;
}

// Function: state_error @ 0x101768
unsigned int state_error(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}

// Function: computed_goto @ 0x101778
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

// Function: obfuscated_cf @ 0x1017b8
int obfuscated_cf(int param_1)
{
 return param_1 << 1;
}

// Function: opaque_predicate @ 0x1017c0
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x1017c8
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

// Function: test_control_flow_l3 @ 0x1017e4
int test_control_flow_l3(void)
{
 int iVar1;
 unsigned long uVar2;
 puts(DAT_00101f4d);
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

// Function: main @ 0x1018dc
int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: _fini @ 0x1018fc
static void _fini(void)
{
 return;
}

