// Decompiled by BinaryAI
// SHA256: a4e4c352d4e684f01b41d1a21a4e83cbc9a24cc57165494df95babd438ee4641

#include <setjmp.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

// Type definitions
typedef unsigned char byte;

// Struct for 128-bit values with various member access
typedef union {
    unsigned char bytes[16];
    unsigned int words[4];
    struct { unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; } i;
    struct { unsigned long long _0_8_; unsigned long long _8_8_; } q;
    struct { unsigned int _0_4_; unsigned int _1_7_; unsigned int _8_4_; unsigned int _9_7_; } i7;
    struct { unsigned int _8_4_; unsigned int _9_7_; } i9;
    struct { unsigned long long _0_8_; unsigned int _8_4_; unsigned int _9_7_; unsigned int _12_4_; } mix;
    struct { unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; unsigned int _16_4_; } i5;
    unsigned long long _0_8_;
    unsigned int _4_4_;
    unsigned int _8_4_;
    unsigned int _12_4_;
} unpacked128;

// Global variables
char completed_0 = 0;
void *__dso_handle = 0;
jmp_buf jump_buffer;

// Function declarations
void call_weak_fn(void);
int main(void);

// External data references
unsigned int DAT_00101a00[4] = {0, 1, 2, 3};
unsigned int DAT_0010197c[4] = {0, 4, 8, 12};
unsigned int DAT_001019ac[4] = {0, 1, 2, 3};
char DAT_00101f65[] = "Control Flow Tests Level 1";
char DAT_00101f89[] = "Control Flow Tests Level 2";
char DAT_00101fad[] = "Control Flow Tests Level 3";

// Stack variable
void *stack0x00000008 = 0;

// NEON intrinsic stubs
unpacked128 NEON_cmeq(unpacked128 dst, int val, int num);
unpacked128 NEON_ext(unpacked128 dst, unpacked128 src, int offset, int num);

// Stub for __libc_start_main_impl
void __libc_start_main_impl(int (*main)(void), void *init, void *fini, void *rtld_fini, void *stack_end, unsigned long long auxv);

// CONCAT macros for combining byte values
#define CONCAT11(a, b) (((unsigned int)(b) << 8) | (unsigned char)(a))
#define CONCAT12(a, b) (((unsigned int)(b) << 8) | (unsigned char)(a))
#define CONCAT13(a, b) (((unsigned int)(b) << 8) | (unsigned char)(a))
#define CONCAT14(a, b) (((unsigned int)(b) << 8) | (unsigned char)(a))
#define CONCAT15(a, b) (((unsigned int)(b) << 8) | (unsigned char)(a))
#define CONCAT16(a, b) (((unsigned int)(b) << 8) | (unsigned char)(a))
#define CONCAT17(a, b) (((unsigned long long)(b) << 32) | (unsigned int)(a))
#define CONCAT44(a, b) (((unsigned long long)(b) << 32) | (unsigned int)(a))

// Function: _init @ 0x100860
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_00100880 @ 0x100880
void FUN_00100880(void)
{
 // Stub implementation - was calling null pointer
 return;
}

// Function: <EXTERNAL>::_setjmp @ 0x1008a0
int _setjmp(jmp_buf __env)
{
 // External function - just return 0 as a stub
 return 0;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1008b0
void __libc_start_main(int (*main)(void), void *init, void *fini, void *rtld_fini, void *stack_end, unsigned long long auxv)
{
 extern void __libc_start_main_impl(int (*main)(void), void *init, void *fini, void *rtld_fini, void *stack_end, unsigned long long auxv);
 __libc_start_main_impl(main, init, fini, rtld_fini, stack_end, auxv);
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1008c0
void __cxa_finalize(void *ptr)
{
 // Stub implementation
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1008d0
void __gmon_start__(void)
{
 // Stub implementation
 return;
}

// Function: <EXTERNAL>::abort @ 0x1008e0
void abort(void)
{
 // Stub implementation - just return
 return;
}

// Function: <EXTERNAL>::puts @ 0x1008f0
int stub_puts(char *__s)
{
 // Stub implementation - just return 0
 return 0;
}

// Function: <EXTERNAL>::longjmp @ 0x100900
void longjmp(jmp_buf __env,int __val)
{
 // Stub implementation - just return
 return;
}

// Function: <EXTERNAL>::printf @ 0x100910
int stub_printf(char *__format,...)
{
 // Stub implementation - just return 0
 return 0;
}

// Function: _start @ 0x100940
void _start(unsigned long long param_1)
{
 void *param_9;
 __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x100974
void call_weak_fn(void)
{
 __gmon_start__();
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
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100a00
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
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
int nested_if_2(int param_1,unsigned int param_2)
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
int if_elseif_chain(unsigned int param_1)
{
 int iVar1;
 iVar1 = param_1 * 10 + 10;
 if (2 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: if_elseif_long @ 0x100afc
int if_elseif_long(unsigned int param_1)
{
 int iVar1;
 iVar1 = param_1 * 100 + 100;
 if (4 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_small @ 0x100b14
unsigned int switch_small(unsigned int param_1)
{
 if (param_1 < 4) {
 return *(unsigned int *)(&DAT_00101a00 + (long)(int)param_1 * 4);
 }
 return 0xffffffff;
}

// Function: switch_large @ 0x100b34
int switch_large(unsigned int param_1)
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
 unsigned int uVar1;
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
 unsigned int uVar1;
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

// Function: loop_continue @ 0x100ca4
int loop_continue(unsigned int param_1)
{
 unsigned int uVar1;
 unsigned int uVar2;
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
 unsigned int uVar17;
 int iVar18;
 int iVar19;
 int iVar20;
 int iVar21;
 byte bVar22;
 unsigned long long uVar23;
 int iVar24;
 byte bVar25;
 unsigned long long uVar26;
 int iVar27;
 int iVar28;
 int iVar29;
 int iVar30;
 int iVar31;
 unpacked128 auVar32;
 unpacked128 auVar33;
 int iVar35;
 int iVar36;
 int iVar37;
 int iVar38;
 unpacked128 auVar34;
 unpacked128 auVar35;
 if ((int)param_1 < 1) {
 return 0;
 }
 if (param_1 < 8) {
 iVar18 = 0;
 uVar17 = 1;
 }
 else {
 uVar1 = param_1 & 0xfffffff8;
 iVar18 = 0;
 iVar19 = 0;
 iVar20 = 0;
 iVar21 = 0;
 uVar17 = uVar1 | 1;
 uVar26 = 0x400000003;
 uVar23 = 0x200000001;
 iVar28 = 0;
 iVar29 = 0;
 iVar30 = 0;
 iVar31 = 0;
 uVar2 = uVar1;
 do {
 bVar22 = (byte)uVar23;
 auVar33.bytes[0] = bVar22 & 1;
 uVar3 = (unsigned long)uVar23 >> 8;
 uVar4 = (unsigned long)uVar23 >> 0x10;
 uVar5 = (unsigned long)uVar23 >> 0x18;
 uVar6 = (unsigned long)uVar23 >> 0x20;
 uVar7 = (unsigned long)uVar23 >> 0x28;
 uVar8 = (unsigned long)uVar23 >> 0x30;
 uVar9 = (unsigned long)uVar23 >> 0x38;
 auVar33.i7._1_7_ = 0;
 bVar25 = (byte)uVar26;
 auVar33.bytes[8] = bVar25 & 1;
 uVar10 = (unsigned long)uVar26 >> 8;
 uVar11 = (unsigned long)uVar26 >> 0x10;
 uVar12 = (unsigned long)uVar26 >> 0x18;
 uVar13 = (unsigned long)uVar26 >> 0x20;
 uVar14 = (unsigned long)uVar26 >> 0x28;
 uVar15 = (unsigned long)uVar26 >> 0x30;
 uVar16 = (unsigned long)uVar26 >> 0x38;
 auVar33._9_7_ = 0;
 uVar2 = uVar2 - 8;
 iVar35 = (int)uVar23 + 4;
 iVar24 = (int)((unsigned long)uVar23 >> 0x20);
 iVar36 = iVar24 + 4;
 iVar37 = (int)uVar26 + 4;
 iVar27 = (int)((unsigned long)uVar26 >> 0x20);
 iVar38 = iVar27 + 4;
 auVar33 = NEON_cmeq(auVar33,0,2);
 iVar35 = CONCAT13((byte)((unsigned int)iVar35 >> 0x18) & ~auVar33.bytes[3],
 CONCAT12((byte)((unsigned int)iVar35 >> 0x10) & ~auVar33.bytes[2],
 CONCAT11((byte)((unsigned int)iVar35 >> 8) & ~auVar33.bytes[1],
 (byte)iVar35 & ~auVar33.bytes[0])));
 auVar32.q._0_8_ =
 CONCAT17((byte)((unsigned int)iVar36 >> 0x18) & ~auVar33.bytes[7],
 CONCAT16((byte)((unsigned int)iVar36 >> 0x10) & ~auVar33.bytes[6],
 CONCAT15((byte)((unsigned int)iVar36 >> 8) & ~auVar33.bytes[5],
 CONCAT14((byte)iVar36 & ~auVar33.bytes[4],iVar35))));
 auVar32.bytes[8] = (byte)iVar37 & ~auVar33.bytes[8];
 auVar32.bytes[9] = (byte)((unsigned int)iVar37 >> 8) & ~auVar33.bytes[9];
 auVar32.bytes[10] = (byte)((unsigned int)iVar37 >> 0x10) & ~auVar33.bytes[10];
 auVar32.bytes[11] = (byte)((unsigned int)iVar37 >> 0x18) & ~auVar33.bytes[11];
 auVar34.bytes[12] = (byte)iVar38 & ~auVar33.bytes[12];
 auVar34.mix._0_8_ = auVar32.q._0_8_;
 auVar34.bytes[13] = (byte)((unsigned int)iVar38 >> 8) & ~auVar33.bytes[13];
 auVar34.bytes[14] = (byte)((unsigned int)iVar38 >> 0x10) & ~auVar33.bytes[14];
 auVar34.bytes[15] = (byte)((unsigned int)iVar38 >> 0x18) & ~auVar33.bytes[15];
 uVar23 = CONCAT44(iVar24 + 8,(int)uVar23 + 8);
 uVar26 = CONCAT44(iVar27 + 8,(int)uVar26 + 8);
 iVar18 = CONCAT13((byte)uVar5 & ~auVar33.bytes[3],
 CONCAT12((byte)uVar4 & ~auVar33.bytes[2],
 CONCAT11((byte)uVar3 & ~auVar33.bytes[1],bVar22 & ~auVar33.bytes[0]))) + iVar18
 ;
 iVar19 = CONCAT13((byte)uVar9 & ~auVar33.bytes[7],
 CONCAT12((byte)uVar8 & ~auVar33.bytes[6],
 CONCAT11((byte)uVar7 & ~auVar33.bytes[5],(byte)uVar6 & ~auVar33.bytes[4]))) +
 iVar19;
 iVar20 = CONCAT13((byte)uVar12 & ~auVar33.bytes[11],
 CONCAT12((byte)uVar11 & ~auVar33.bytes[10],
 CONCAT11((byte)uVar10 & ~auVar33.bytes[9],bVar25 & ~auVar33.bytes[8]))) +
 iVar20;
 iVar21 = CONCAT13((byte)uVar16 & ~auVar33.bytes[15],
 CONCAT12((byte)uVar15 & ~auVar33.bytes[14],
 CONCAT11((byte)uVar14 & ~auVar33.bytes[13],(byte)uVar13 & ~auVar33.bytes[12])))
 + iVar21;
 iVar28 = iVar35 + iVar28;
 iVar29 = (int)((unsigned long)auVar32.q._0_8_ >> 0x20) + iVar29;
 iVar30 = auVar32.i._8_4_ + iVar30;
 iVar31 = auVar34.i._12_4_ + iVar31;
 } while (uVar2 != 0);
 iVar18 = iVar28 + iVar18 + iVar29 + iVar19 + iVar30 + iVar20 + iVar31 + iVar21;
 if (uVar1 == param_1) {
 return iVar18;
 }
 }
 do {
 uVar1 = -(uVar17 & 1) & uVar17;
 uVar17 = uVar17 + 1;
 iVar18 = uVar1 + iVar18;
 } while (param_1 + 1 != uVar17);
 return iVar18;
}

// Function: goto_forward @ 0x100d50
int goto_forward(int param_1)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < 2) {
 iVar1 = 1;
 }
 return param_1 * iVar1 * 2;
}

// Function: goto_backward @ 0x100d64
int goto_backward(unsigned int param_1)
{
 unsigned int uVar1;
 unsigned int uVar2;
 unpacked128 auVar3;
 unsigned int uVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 unpacked128 auVar9;
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
 auVar9.i._4_4_ = iVar11;
 auVar9.i._0_4_ = iVar10;
 auVar9.i._8_4_ = iVar12 * iVar7;
 auVar9.i._12_4_ = iVar13 * iVar8;
 auVar3.i._4_4_ = iVar11;
 auVar3.i._0_4_ = iVar10;
 auVar3.i._8_4_ = iVar12 * iVar7;
 auVar3.i._12_4_ = iVar13 * iVar8;
 auVar9 = NEON_ext(auVar9, auVar3, 8, 1);
 iVar5 = iVar10 * auVar9.i._0_4_ * iVar11 * auVar9.i._4_4_;
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

// Function: ternary_op @ 0x100e00
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x100e0c
int test_control_flow_l1(void)
{
 int iVar1;
 puts((char*)&DAT_00101f65);
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

// Function: loop_multi_exit @ 0x100fd8
int loop_multi_exit(int param_1)
{
 unsigned int uVar1;
 unsigned long uVar2;
 uVar1 = param_1 - 1;
 if (uVar1 < 0xc) {
 uVar2 = -(unsigned long)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (unsigned long)uVar1 << 2;
 return *(int *)(&DAT_001019ac + uVar2) + *(int *)(&DAT_0010197c + uVar2);
 }
 return -1;
}

// Function: infinite_loop @ 0x101010
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

// Function: multi_return @ 0x10103c
int multi_return(unsigned int param_1)
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

// Function: conditional_return @ 0x101064
int conditional_return(int param_1)
{
 int iVar1;
 iVar1 = param_1 << 1;
 if (param_1 < 1) {
 iVar1 = -param_1;
 }
 return iVar1;
}

// Function: duffs_device @ 0x101074
unsigned int duffs_device(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 unsigned int uVar5;
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

// Function: loop_complex_cond @ 0x1010f8
int loop_complex_cond(unsigned int param_1)
{
 bool bVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int uVar4;
 unsigned int uVar5;
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

// Function: loop_modify_var @ 0x10114c
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

// Function: loop_external_state @ 0x10118c
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

// Function: recursion_factorial @ 0x1011ac
int recursion_factorial(unsigned int param_1)
{
 bool bVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 unpacked128 auVar5;
 unsigned int uVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 unpacked128 auVar11;
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
 auVar11.i._4_4_ = iVar16;
 auVar11.i._0_4_ = iVar15;
 auVar11.i._8_4_ = iVar17 * iVar9;
 auVar11.i._12_4_ = iVar18 * iVar10;
 auVar5.i._4_4_ = iVar16;
 auVar5.i._0_4_ = iVar15;
 auVar5.i._8_4_ = iVar17 * iVar9;
 auVar5.i._12_4_ = iVar18 * iVar10;
 auVar11 = NEON_ext(auVar11,auVar5,8,1);
 iVar7 = iVar15 * auVar11.i._0_4_ * iVar16 * auVar11.i._4_4_;
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

// Function: tail_recursion @ 0x101254
int tail_recursion(unsigned int param_1,int param_2)
{
 bool bVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 unsigned int uVar5;
 unpacked128 auVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar12;
 int iVar13;
 int iVar14;
 unpacked128 auVar11;
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
 auVar11.i._4_4_ = iVar12;
 auVar11.i._0_4_ = iVar10;
 auVar11.i._8_4_ = iVar13 * iVar8;
 auVar11.i._12_4_ = iVar14 * iVar9;
 auVar6.i._4_4_ = iVar12;
 auVar6.i._0_4_ = iVar10;
 auVar6.i._8_4_ = iVar13 * iVar8;
 auVar6.i._12_4_ = iVar14 * iVar9;
 auVar11 = NEON_ext(auVar11,auVar6,8,1);
 param_2 = iVar10 * auVar11.i._0_4_ * iVar12 * auVar11.i._4_4_;
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

// Function: indirect_recursion_a @ 0x1012f0
unsigned long indirect_recursion_a(unsigned long param_1,int param_2)
{
 unsigned int uVar1;
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
 return (unsigned long)(unsigned int)(iVar2 >> 1);
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

// Function: call_func_ptr @ 0x101348
void call_func_ptr(void *UNRECOVERED_JUMPTABLE,unsigned int param_2)
{
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x101354
int call_func_ptr_array(unsigned int param_1,unsigned int param_2)
{
 bool bVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 unpacked128 auVar5;
 unsigned int uVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 unpacked128 auVar11;
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
 auVar11.i._4_4_ = iVar16;
 auVar11.i._0_4_ = iVar15;
 auVar11.i._8_4_ = iVar17 * iVar9;
 auVar11.i._12_4_ = iVar18 * iVar10;
 auVar5.i._4_4_ = iVar16;
 auVar5.i._0_4_ = iVar15;
 auVar5.i._8_4_ = iVar17 * iVar9;
 auVar5.i._12_4_ = iVar18 * iVar10;
 auVar11 = NEON_ext(auVar11,auVar5,8,1);
 iVar7 = iVar15 * auVar11.i._0_4_ * iVar16 * auVar11.i._4_4_;
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

// Function: double_value @ 0x101378
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x101380
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x101388
int call_virtual_func(unsigned long long param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x101390
int process_with_callback(unsigned int *param_1,unsigned int param_2,void *param_3)
{
 int iVar1;
 int iVar2;
 unsigned long uVar3;
 if ((int)param_2 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 uVar3 = (unsigned long)param_2;
 do {
 iVar1 = (*param_3)(*param_1);
 uVar3 = uVar3 - 1;
 iVar2 = iVar1 + iVar2;
 param_1 = param_1 + 1;
 } while (uVar3 != 0);
 }
 return iVar2;
}

// Function: test_control_flow_l2 @ 0x1013e8
int test_control_flow_l2(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 puts((char*)&DAT_00101f89);
 printf("CF-L2-01 (loop_multi_exit): %d\n",0xc);
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n");
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
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n");
 printf("CF-L2-09 (recursion_factorial): %d\n",0x78);
 printf("CF-L2-10 (tail_recursion): %d\n",0x78);
 printf("CF-L2-11 (indirect_recursion): %d\n",3);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 iVar2 = printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return iVar2;
}

// Function: non_local_jump @ 0x101598
int non_local_jump(unsigned int param_1)
{
 int iVar1;
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 == 0) {
 if ((int)param_1 < 0) {
 longjmp(jump_buffer,1);
 }
 if (100 < param_1) {
 longjmp(jump_buffer,2);
 }
 iVar1 = param_1 << 1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: cpp_exception @ 0x1015fc
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

// Function: large_jump_table @ 0x101618
unsigned int large_jump_table(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned int uVar1;
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

// Function: op_add @ 0x101640
int op_add(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: op_sub @ 0x101648
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x101650
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x101658
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

// Function: op_mod @ 0x10166c
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

// Function: op_and @ 0x101684
unsigned int op_and(unsigned int param_1,unsigned int param_2)
{
 return param_2 & param_1;
}

// Function: op_or @ 0x10168c
unsigned int op_or(unsigned int param_1,unsigned int param_2)
{
 return param_2 | param_1;
}

// Function: op_xor @ 0x101694
unsigned int op_xor(unsigned int param_1,unsigned int param_2)
{
 return param_2 ^ param_1;
}

// Function: op_shl @ 0x10169c
int op_shl(int param_1,unsigned int param_2)
{
 return param_1 << (unsigned long)(param_2 & 0x1f);
}

// Function: op_shr @ 0x1016a4
int op_shr(int param_1,unsigned int param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: conditional_func_ptr @ 0x1016ac
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *pcVar1;
 void *UNRECOVERED_JUMPTABLE;
 pcVar1 = triple_value;
 if (param_1 != 1) {
 pcVar1 = recursion_factorial;
 }
 UNRECOVERED_JUMPTABLE = double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = pcVar1;
 }
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: state_machine @ 0x1016dc
unsigned int state_machine(unsigned int param_1,unsigned int param_2)
{
 unsigned int uVar1;
 switch(param_2) {
 case 0:
 return (unsigned int)(param_1 == 1);
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

// Function: fsm_func_table @ 0x101740
unsigned int fsm_func_table(unsigned int param_1,unsigned int param_2)
{
 unsigned int uVar1;
 switch(param_2) {
 case 0:
 return (unsigned int)(param_1 == 1);
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

// Function: state_idle @ 0x101760
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x10176c
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

// Function: state_done @ 0x101784
unsigned long long state_done(void)
{
 return 2;
}

// Function: state_error @ 0x10178c
unsigned int state_error(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}

// Function: computed_goto @ 0x10179c
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

// Function: obfuscated_cf @ 0x1017dc
int obfuscated_cf(int param_1)
{
 return param_1 << 1;
}

// Function: opaque_predicate @ 0x1017e4
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x1017ec
int overlapped_code(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
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

// Function: test_control_flow_l3 @ 0x101808
int test_control_flow_l3(void)
{
 int iVar1;
 unsigned long uVar2;
 puts(&DAT_00101fad);
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

// Function: main @ 0x101900
unsigned long long main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: _fini @ 0x101920
void _fini(void)
{
 return;
}

