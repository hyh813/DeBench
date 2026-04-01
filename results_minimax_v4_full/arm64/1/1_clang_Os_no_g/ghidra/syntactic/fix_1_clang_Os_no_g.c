/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_clang_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Type definitions for decompiled code */
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <setjmp.h>

/* Ghidra-style CONCAT macros for combining bytes into larger integers */
#define CONCAT11(a,b) (((uint32_t)(uint8_t)(a) << 8) | (uint32_t)(uint8_t)(b))
/* CONCAT12 with 2-3 args using VA_ARGS */
#define CONCAT12_2(a,b) (((uint32_t)(uint8_t)(a) << 8) | (uint32_t)(uint8_t)(b))
#define CONCAT12_3(a,b,c) (((uint32_t)(uint8_t)(a) << 16) | ((uint32_t)(uint8_t)(b) << 8) | (uint32_t)(uint8_t)(c))
#define CONCAT12(...) CONCAT12_GET(__VA_ARGS__, CONCAT12_3, CONCAT12_2, CONCAT12_DUMMY)(__VA_ARGS__)
#define CONCAT12_GET(_1, _2, _3, NAME, ...) NAME
/* CONCAT13 with 2-3 args using VA_ARGS */
#define CONCAT13_2(a,b) (((uint32_t)(uint8_t)(a) << 8) | (uint32_t)(uint8_t)(b))
#define CONCAT13_3(a,b,c) (((uint32_t)(uint8_t)(a) << 16) | ((uint32_t)(uint8_t)(b) << 8) | (uint32_t)(uint8_t)(c))
#define CONCAT13(...) CONCAT13_GET(__VA_ARGS__, CONCAT13_3, CONCAT13_2, CONCAT13_DUMMY)(__VA_ARGS__)
#define CONCAT13_GET(_1, _2, _3, NAME, ...) NAME
/* CONCAT14 with 2-4 args using VA_ARGS */
#define CONCAT14_2(a,b) (((uint32_t)(uint8_t)(a) << 8) | (uint32_t)(uint8_t)(b))
#define CONCAT14_3(a,b,c) (((uint32_t)(uint8_t)(a) << 16) | ((uint32_t)(uint8_t)(b) << 8) | (uint32_t)(uint8_t)(c))
#define CONCAT14_4(a,b,c,d) (((uint32_t)(uint8_t)(a) << 24) | ((uint32_t)(uint8_t)(b) << 16) | ((uint32_t)(uint8_t)(c) << 8) | (uint32_t)(uint8_t)(d))
#define CONCAT14(...) CONCAT14_GET(__VA_ARGS__, CONCAT14_4, CONCAT14_3, CONCAT14_2, CONCAT14_DUMMY)(__VA_ARGS__)
#define CONCAT14_GET(_1, _2, _3, _4, NAME, ...) NAME
/* CONCAT15 with 2-4 args using VA_ARGS */
#define CONCAT15_2(a,b) (((uint32_t)(uint8_t)(a) << 8) | (uint32_t)(uint8_t)(b))
#define CONCAT15_3(a,b,c) (((uint32_t)(uint8_t)(a) << 16) | ((uint32_t)(uint8_t)(b) << 8) | (uint32_t)(uint8_t)(c))
#define CONCAT15_4(a,b,c,d) (((uint32_t)(uint8_t)(a) << 24) | ((uint32_t)(uint8_t)(b) << 16) | ((uint32_t)(uint8_t)(c) << 8) | (uint32_t)(uint8_t)(d))
#define CONCAT15(...) CONCAT15_GET(__VA_ARGS__, CONCAT15_4, CONCAT15_3, CONCAT15_2, CONCAT15_DUMMY)(__VA_ARGS__)
#define CONCAT15_GET(_1, _2, _3, _4, NAME, ...) NAME
/* CONCAT16 with 2-4 args using VA_ARGS */
#define CONCAT16_2(a,b) (((uint32_t)(uint8_t)(a) << 8) | (uint32_t)(uint8_t)(b))
#define CONCAT16_3(a,b,c) (((uint32_t)(uint8_t)(a) << 16) | ((uint32_t)(uint8_t)(b) << 8) | (uint32_t)(uint8_t)(c))
#define CONCAT16_4(a,b,c,d) (((uint32_t)(uint8_t)(a) << 24) | ((uint32_t)(uint8_t)(b) << 16) | ((uint32_t)(uint8_t)(c) << 8) | (uint32_t)(uint8_t)(d))
#define CONCAT16(...) CONCAT16_GET(__VA_ARGS__, CONCAT16_4, CONCAT16_3, CONCAT16_2, CONCAT16_DUMMY)(__VA_ARGS__)
#define CONCAT16_GET(_1, _2, _3, _4, NAME, ...) NAME
/* CONCAT17 with 2 args for nested calls */
#define CONCAT17_2(a,b) (((uint32_t)(uint8_t)(a) << 8) | (uint32_t)(uint8_t)(b))
#define CONCAT17_3(a,b,c) (((uint32_t)(uint8_t)(a) << 16) | ((uint32_t)(uint8_t)(b) << 8) | (uint32_t)(uint8_t)(c))
#define CONCAT17_4(a,b,c,d) (((uint32_t)(uint8_t)(a) << 24) | ((uint32_t)(uint8_t)(b) << 16) | ((uint32_t)(uint8_t)(c) << 8) | (uint32_t)(uint8_t)(d))
/* Use VA_ARGS to select correct version based on argument count */
#define CONCAT17(...) CONCAT17_GET(__VA_ARGS__, CONCAT17_4, CONCAT17_3, CONCAT17_2, CONCAT17_DUMMY)(__VA_ARGS__)
#define CONCAT17_GET(_1, _2, _3, _4, NAME, ...) NAME
#define CONCAT25(a,b,c,d) CONCAT24(a,b,c,d)
#define CONCAT26(a,b,c,d) CONCAT24(a,b,c,d)
#define CONCAT27(a,b,c,d) CONCAT24(a,b,c,d)
#define CONCAT28(a,b,c,d) CONCAT24(a,b,c,d)
#define CONCAT18(a,b,c,d) CONCAT14(a,b,c,d)
#define CONCAT31(a,b) ((uint32_t)(uint8_t)(a) | ((uint32_t)(uint8_t)(b) << 8))
#define CONCAT32(a,b,c) ((uint32_t)(uint8_t)(a) | ((uint32_t)(uint8_t)(b) << 8) | ((uint32_t)(uint8_t)(c) << 16))
#define CONCAT33(a,b,c,d) ((uint32_t)(uint8_t)(a) | ((uint32_t)(uint8_t)(b) << 8) | ((uint32_t)(uint8_t)(c) << 16) | ((uint32_t)(uint8_t)(d) << 24))
#define CONCAT21(a,b) (((uint64_t)(uint8_t)(a) << 8) | (uint64_t)(uint8_t)(b))
#define CONCAT22(a,b,c) (((uint64_t)(uint8_t)(a) << 16) | ((uint64_t)(uint8_t)(b) << 8) | (uint64_t)(uint8_t)(c))
#define CONCAT23(a,b,c,d) (((uint64_t)(uint8_t)(a) << 24) | ((uint64_t)(uint8_t)(b) << 16) | ((uint64_t)(uint8_t)(c) << 8) | (uint64_t)(uint8_t)(d))

/* Additional CONCAT macros for 64-bit */
#define CONCAT41(a,b,c,d,e,f,g,h) (((uint64_t)(uint8_t)(a) << 56) | ((uint64_t)(uint8_t)(b) << 48) | ((uint64_t)(uint8_t)(c) << 40) | ((uint64_t)(uint8_t)(d) << 32) | ((uint64_t)(uint8_t)(e) << 24) | ((uint64_t)(uint8_t)(f) << 16) | ((uint64_t)(uint8_t)(g) << 8) | (uint64_t)(uint8_t)(h))

/* NEON intrinsics stub */
#define NEON_ext(a,b,c,d) (a)

/* Helper macros for nested CONCAT calls (combining 2 values at a time) */
/* CONCAT14_2, CONCAT15_2, CONCAT16_2 already defined above */

/* Generic undefined type */
typedef uintptr_t undefined;

typedef unsigned int uint;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t undefined1;
typedef unsigned long ulong;
typedef void (*code)(void);  /* Function pointer type */

/* Union for accessing 16-byte arrays as various sized integers (Ghidra style) */
typedef union {
    uint8_t ubytes[16];
    uint32_t u32[4];
    uint64_t u64[2];
    int32_t s32[4];
    int64_t s64[2];
    struct { uint32_t _0_4_; uint32_t _4_4_; uint32_t _8_4_; uint32_t _12_4_; } st32;
    struct { uint64_t _0_8_; uint64_t _8_8_; } st64;
    uint32_t _0_4_;
    uint32_t _4_4_;
    uint32_t _8_4_;
    uint32_t _12_4_;
    uint64_t _0_8_;
    uint64_t _8_8_;
} unaligned_union;

/* Data declarations */
undefined4 DAT_00101950 [4];
undefined4 DAT_0010196c [5];
undefined4 DAT_00101980 [0x10];
undefined1 DAT_00101f05;
undefined1 DAT_00101f29;
undefined1 DAT_00101f4d;

/* CRT data */
char completed_0 = 0;
void *__dso_handle;
jmp_buf jump_buffer;

/* External CRT functions */
void deregister_tm_clones(void);
void __cxa_finalize(void *);

/* Define __jmp_buf_tag if not available */
#ifndef __jmp_buf_tag
struct __jmp_buf_tag {
    int __jb[16];
    unsigned long __fl;
    unsigned long __ss[128/sizeof(long)];
};
typedef struct __jmp_buf_tag jmp_buf[1];
#endif




/* Function: FUN_00100880 @ 00100880 */

void FUN_00100880(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001009fc @ 001009fc */

void FUN_001009fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




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
 return *(undefined4 *)(&DAT_00101950 + (long)(int)param_1 * 4);
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



/* Function: loop_continue @ 00100c84 */

int loop_continue(int param_1)

{
 ulong uVar1;
 ulong uVar2;
 ulong uVar3;
 ulong uVar4;
 ulong uVar5;
 ulong uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 uint uVar12;
 ulong uVar13;
 ulong uVar14;
 
 if (0 < param_1) {
 uVar14 = 0x400000003;
 uVar13 = 0x200000001;
 uVar7 = 0;
 uVar10 = 0;
 uVar12 = 0;
 do {
 uVar11 = uVar12;
 uVar9 = uVar10;
 uVar8 = uVar7;
 uVar1 = uVar13 >> 8;
 uVar2 = uVar13 >> 0x10;
 uVar3 = uVar13 >> 0x18;
 uVar4 = uVar14 >> 8;
 uVar5 = uVar14 >> 0x10;
 uVar6 = uVar14 >> 0x18;
 uVar13 = (ulong)((int)uVar13 + 4);
 uVar14 = (ulong)((int)uVar14 + 4);
 uVar10 = (CONCAT13((char)uVar3,CONCAT12((char)uVar2,CONCAT11((char)uVar1,0xff))) & 0xffffff01)
 + uVar9;
 uVar12 = (CONCAT13((char)uVar6,CONCAT12((char)uVar5,CONCAT11((char)uVar4,0xff))) & 0xffffff01)
 + uVar11;
 uVar7 = uVar8 + 4;
 } while ((param_1 + 3U & 0xfffffffc) != uVar8 + 4);
 return (uVar10 ^ (uVar10 ^ uVar9) & -(uint)(param_1 - 1U < uVar8)) +
 (uVar12 ^ (uVar12 ^ uVar11) & -(uint)(param_1 - 1U < (uVar8 | 2)));
 }
 return 0;
}



/* Function: goto_forward @ 00100d04 */

int goto_forward(int param_1)

{
 int iVar1;
 
 iVar1 = param_1;
 if (param_1 < 2) {
 iVar1 = 1;
 }
 return param_1 * iVar1 * 2;
}



/* Function: goto_backward @ 00100d18 */

int goto_backward(int param_1)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 unaligned_union auVar4;
 unaligned_union auVar5;
 unaligned_union auVar6;
 uint8_t uVar8;
 uint8_t uVar9;
 int iVar7;
 uint8_t uVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 
 uVar1 = param_1 - 1;
 if (0 < param_1) {
 auVar4.st32._8_4_ = 1;
 auVar4.st64._0_8_ = 0x100000001;
 auVar4.st32._12_4_ = 1;
 iVar12 = 3;
 iVar13 = 4;
 iVar7 = 1;
 iVar11 = 2;
 uVar2 = 0;
 do {
 uVar3 = uVar2;
 auVar6 = auVar4;
 auVar4.st32._0_4_ = iVar7 * auVar6.st32._0_4_;
 auVar4.st32._4_4_ = iVar11 * auVar6.st32._4_4_;
 auVar4.st32._8_4_ = iVar12 * auVar6.st32._8_4_;
 auVar4.st32._12_4_ = iVar13 * auVar6.st32._12_4_;
 iVar7 = iVar7 + 4;
 iVar11 = iVar11 + 4;
 iVar12 = iVar12 + 4;
 iVar13 = iVar13 + 4;
 uVar2 = uVar3 + 4;
 } while ((param_1 + 3U & 0xfffffffc) != uVar3 + 4);
 uVar8 = (undefined1)(uVar3 >> 8);
 uVar9 = (undefined1)(uVar3 >> 0x10);
 uVar10 = (undefined1)(uVar3 >> 0x18);
 auVar5._0_4_ = -(uint)(uVar1 < uVar3);
 auVar5._4_4_ = -(uint)(uVar1 < ((uint)(CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14((
 char)uVar3,uVar3)))) >> 0x20) | 1));
 auVar5._8_4_ = -(uint)(uVar1 < (uVar3 | 2));
 auVar5._12_4_ =
 -(uint)(uVar1 < ((uint)(CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14((char)uVar3,
 uVar3)))) >>
 0x20) | 3));
 auVar4._0_4_ = auVar4._0_4_ ^ (auVar4._0_4_ ^ auVar6._0_4_) & auVar5._0_4_;
 auVar4._4_4_ = auVar4._4_4_ ^ (auVar4._4_4_ ^ auVar6._4_4_) & auVar5._4_4_;
 auVar4._8_4_ = auVar4._8_4_ ^ (auVar4._8_4_ ^ auVar6._8_4_) & auVar5._8_4_;
 auVar4._12_4_ = auVar4._12_4_ ^ (auVar4._12_4_ ^ auVar6._12_4_) & auVar5._12_4_;
 auVar6 = NEON_ext(auVar4,auVar4,8,1);
 return auVar4._0_4_ * auVar6._0_4_ * auVar4._4_4_ * auVar6._4_4_;
 }
 return 1;
}



/* Function: ternary_op @ 00100d94 */

int ternary_op(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: test_control_flow_l1 @ 00100da0 */

int test_control_flow_l1(void)

{
 int iVar1;
 
 puts(&DAT_00101f05);
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



/* Function: loop_multi_exit @ 00100f6c */

int loop_multi_exit(int param_1)

{
 int iVar1;
 long lVar2;
 undefined4 *puVar3;
 long lVar4;
 
 iVar1 = 0;
 lVar2 = 0;
 puVar3 = &DAT_00101980;
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



/* Function: infinite_loop @ 00100fbc */

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



/* Function: multi_return @ 00100fe8 */

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



/* Function: conditional_return @ 00101010 */

int conditional_return(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 << 1;
 if (param_1 < 1) {
 iVar1 = -param_1;
 }
 return iVar1;
}



/* Function: duffs_device @ 00101020 */

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



/* Function: loop_complex_cond @ 001010a4 */

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



/* Function: loop_modify_var @ 001010f8 */

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



/* Function: loop_external_state @ 00101134 */

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



/* Function: recursion_factorial @ 00101154 */

int recursion_factorial(uint param_1)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 undefined1 uVar10;
 undefined1 uVar11;
 undefined1 uVar12;
 unaligned_union auVar4;
 unaligned_union auVar5;
 unaligned_union auVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 
 if ((int)param_1 < 2) {
 return 1;
 }
 auVar4.st32._8_4_ = 1;
 auVar4.st64._0_8_ = 0x100000001;
 auVar4.st32._12_4_ = 1;
 uVar1 = 0;
 if (1 < param_1) {
 uVar1 = param_1 - 2;
 }
 iVar7 = param_1 - 1;
 iVar8 = param_1 - 2;
 iVar9 = param_1 - 3;
 uVar2 = 0;
 do {
 uVar3 = uVar2;
 auVar6 = auVar4;
 auVar4.st32._0_4_ = param_1 * auVar6.st32._0_4_;
 auVar4.st32._4_4_ = iVar7 * auVar6.st32._4_4_;
 auVar4.st32._8_4_ = iVar8 * auVar6.st32._8_4_;
 auVar4.st32._12_4_ = iVar9 * auVar6.st32._12_4_;
 param_1 = param_1 - 4;
 iVar7 = iVar7 + -4;
 iVar8 = iVar8 + -4;
 iVar9 = iVar9 + -4;
 uVar2 = uVar3 + 4;
 } while ((uVar1 + 4 & 0xfffffffc) != uVar3 + 4);
 uVar10 = (undefined1)(uVar3 >> 8);
 uVar11 = (undefined1)(uVar3 >> 0x10);
 uVar12 = (undefined1)(uVar3 >> 0x18);
 auVar5.st32._0_4_ = -(uint)(uVar1 < uVar3);
 auVar5.st32._4_4_ = -(uint)(uVar1 < ((uint)(CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14((
 char)uVar3,uVar3)))) >> 0x20) | 1));
 auVar5.st32._8_4_ = -(uint)(uVar1 < (uVar3 | 2));
 auVar5.st32._12_4_ =
 -(uint)(uVar1 < ((uint)(CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14((char)uVar3,
 uVar3)))) >>
 0x20) | 3));
 auVar4.st32._0_4_ = auVar4.st32._0_4_ ^ (auVar4.st32._0_4_ ^ auVar6.st32._0_4_) & auVar5.st32._0_4_;
 auVar4.st32._4_4_ = auVar4.st32._4_4_ ^ (auVar4.st32._4_4_ ^ auVar6.st32._4_4_) & auVar5.st32._4_4_;
 auVar4.st32._8_4_ = auVar4.st32._8_4_ ^ (auVar4.st32._8_4_ ^ auVar6.st32._8_4_) & auVar5.st32._8_4_;
 auVar4.st32._12_4_ = auVar4.st32._12_4_ ^ (auVar4.st32._12_4_ ^ auVar6.st32._12_4_) & auVar5.st32._12_4_;
 auVar6 = NEON_ext(auVar4,auVar4,8,1);
 return auVar4.st32._0_4_ * auVar6.st32._0_4_ * auVar4.st32._4_4_ * auVar6.st32._4_4_;
}



/* Function: tail_recursion @ 001011dc */

int tail_recursion(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 unaligned_union auVar4;
 unaligned_union auVar5;
 unaligned_union auVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 undefined1 uVar10;
 undefined1 uVar11;
 undefined1 uVar12;
 
 if (1 < (int)param_1) {
 auVar6._8_4_ = 1;
 auVar6._0_8_ = 0x100000000;
 auVar6._12_4_ = 1;
 uVar1 = 0;
 if (1 < param_1) {
 uVar1 = param_1 - 2;
 }
 auVar4._4_12_ = auVar6._4_12_;
 auVar4._0_4_ = param_2;
 iVar7 = param_1 - 1;
 iVar8 = param_1 - 2;
 iVar9 = param_1 - 3;
 uVar2 = 0;
 do {
 uVar3 = uVar2;
 auVar6 = auVar4;
 auVar4._0_4_ = auVar6._0_4_ * param_1;
 auVar4._4_4_ = auVar6._4_4_ * iVar7;
 auVar4._8_4_ = auVar6._8_4_ * iVar8;
 auVar4._12_4_ = auVar6._12_4_ * iVar9;
 param_1 = param_1 - 4;
 iVar7 = iVar7 + -4;
 iVar8 = iVar8 + -4;
 iVar9 = iVar9 + -4;
 uVar2 = uVar3 + 4;
 } while ((uVar1 + 4 & 0xfffffffc) != uVar3 + 4);
 uVar10 = (undefined1)(uVar3 >> 8);
 uVar11 = (undefined1)(uVar3 >> 0x10);
 uVar12 = (undefined1)(uVar3 >> 0x18);
 auVar5._0_4_ = -(uint)(uVar1 < uVar3);
 auVar5._4_4_ = -(uint)(uVar1 < ((uint)(CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14(
 (char)uVar3,uVar3)))) >> 0x20) | 1));
 auVar5._8_4_ = -(uint)(uVar1 < (uVar3 | 2));
 auVar5._12_4_ =
 -(uint)(uVar1 < ((uint)(CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14((char)
 uVar3,uVar3)))) >> 0x20) | 3));
 auVar4 = auVar4 ^ (auVar4 ^ auVar6) & auVar5;
 auVar6 = NEON_ext(auVar4,auVar4,8,1);
 param_2 = auVar4._0_4_ * auVar6._0_4_ * auVar4._4_4_ * auVar6._4_4_;
 }
 return param_2;
}



/* Function: indirect_recursion_a @ 00101264 */

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



/* Function: call_func_ptr @ 001012b8 */

void call_func_ptr(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
 /* WARNING: Could not recover jumptable at 0x001012c0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}



/* Function: call_func_ptr_array @ 001012c4 */

int call_func_ptr_array(undefined4 param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 undefined1 auVar4 [16];
 undefined1 auVar5 [16];
 undefined1 auVar6 [16];
 int iVar7;
 int iVar8;
 int iVar9;
 undefined1 uVar10;
 undefined1 uVar11;
 undefined1 uVar12;
 
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
 if (1 < (int)param_2) {
 auVar4.st32._8_4_ = 1;
 auVar4.st64._0_8_ = 0x100000001;
 auVar4.st32._12_4_ = 1;
 uVar1 = 0;
 if (1 < param_2) {
 uVar1 = param_2 - 2;
 }
 iVar7 = param_2 - 1;
 iVar8 = param_2 - 2;
 iVar9 = param_2 - 3;
 uVar2 = 0;
 do {
 uVar3 = uVar2;
 auVar6 = auVar4;
 auVar4._0_4_ = param_2 * auVar6._0_4_;
 auVar4._4_4_ = iVar7 * auVar6._4_4_;
 auVar4._8_4_ = iVar8 * auVar6._8_4_;
 auVar4._12_4_ = iVar9 * auVar6._12_4_;
 param_2 = param_2 - 4;
 iVar7 = iVar7 + -4;
 iVar8 = iVar8 + -4;
 iVar9 = iVar9 + -4;
 uVar2 = uVar3 + 4;
 } while ((uVar1 + 4 & 0xfffffffc) != uVar3 + 4);
 uVar10 = (undefined1)(uVar3 >> 8);
 uVar11 = (undefined1)(uVar3 >> 0x10);
 uVar12 = (undefined1)(uVar3 >> 0x18);
 auVar5._0_4_ = -(uint)(uVar1 < uVar3);
 auVar5._4_4_ = -(uint)(uVar1 < ((uint)(CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14(
 (char)uVar3,uVar3)))) >> 0x20) | 1));
 auVar5._8_4_ = -(uint)(uVar1 < (uVar3 | 2));
 auVar5._12_4_ =
 -(uint)(uVar1 < ((uint)(CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14((char)
 uVar3,uVar3)))) >> 0x20) | 3));
 auVar4 = auVar4 ^ (auVar4 ^ auVar6) & auVar5;
 auVar6 = NEON_ext(auVar4,auVar4,8,1);
 return auVar4._0_4_ * auVar6._0_4_ * auVar4._4_4_ * auVar6._4_4_;
 }
 return 1;
}



/* Function: double_value @ 001012e8 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: triple_value @ 001012f0 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: call_virtual_func @ 001012f8 */

int call_virtual_func(undefined8 param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 00101300 */

int process_with_callback(undefined4 *param_1,uint param_2,code *param_3)

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
 iVar1 = (*param_3)(*param_1);
 uVar3 = uVar3 - 1;
 iVar2 = iVar1 + iVar2;
 param_1 = param_1 + 1;
 } while (uVar3 != 0);
 }
 return iVar2;
}



/* Function: test_control_flow_l2 @ 00101358 */

int test_control_flow_l2(void)

{
 uint uVar1;
 int iVar2;
 ulong uVar3;
 long lVar4;
 undefined4 *puVar5;
 long lVar6;
 uint uVar7;
 uint uVar8;
 undefined1 auStack_70 [32];
 undefined8 local_50;
 undefined8 uStack_48;
 undefined8 uStack_40;
 undefined8 uStack_38;
 
 puts(&DAT_00101f29);
 iVar2 = 0;
 lVar4 = 0;
 puVar5 = &DAT_00101980;
 do {
 lVar6 = 0;
 do {
 if (puVar5[lVar6] == 7) {
 uVar3 = (ulong)(uint)((int)lVar6 - iVar2);
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
 printf("CF-L2-02 (infinite_loop): %d\n");
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
 uVar3 = duffs_device(auStack_70,&local_50,8);
 printf("CF-L2-05 (duffs_device): %d\n",uVar3 & 0xffffffff);
 iVar2 = 0xb;
 do {
 uVar1 = uVar7 - 8;
 uVar7 = uVar7 + 2;
 if (iVar2 - 2U <= uVar1) break;
 uVar8 = uVar8 + 1;
 iVar2 = iVar2 + -1;
 } while (uVar8 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar7);
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



/* Function: non_local_jump @ 00101578 */

int non_local_jump(uint param_1)

{
 int iVar1;
 
 iVar1 = _setjmp((jmp_buf *)&jump_buffer);
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
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,iVar1);
}



/* Function: cpp_exception @ 001015d8 */

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



/* Function: large_jump_table @ 001015f4 */

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



/* Function: op_add @ 0010161c */

int op_add(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: op_sub @ 00101624 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 0010162c */

int op_mul(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: op_div @ 00101634 */

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



/* Function: op_mod @ 00101648 */

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



/* Function: op_and @ 00101660 */

uint op_and(uint param_1,uint param_2)

{
 return param_2 & param_1;
}



/* Function: op_or @ 00101668 */

uint op_or(uint param_1,uint param_2)

{
 return param_2 | param_1;
}



/* Function: op_xor @ 00101670 */

uint op_xor(uint param_1,uint param_2)

{
 return param_2 ^ param_1;
}



/* Function: op_shl @ 00101678 */

int op_shl(int param_1,uint param_2)

{
 return param_1 << (ulong)(param_2 & 0x1f);
}



/* Function: op_shr @ 00101680 */

int op_shr(int param_1,uint param_2)

{
 return param_1 >> (param_2 & 0x1f);
}



/* Function: conditional_func_ptr @ 00101688 */

void conditional_func_ptr(int param_1,undefined4 param_2)

{
 code *pcVar1;
 code *UNRECOVERED_JUMPTABLE;
 
 pcVar1 = triple_value;
 if (param_1 != 1) {
 pcVar1 = recursion_factorial;
 }
 UNRECOVERED_JUMPTABLE = double_value;
 if (param_1 != 0) {
 UNRECOVERED_JUMPTABLE = pcVar1;
 }
 /* WARNING: Could not recover jumptable at 0x001016b4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)(param_2);
 return;
}



/* Function: state_machine @ 001016b8 */

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



/* Function: fsm_func_table @ 0010171c */

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



/* Function: state_idle @ 0010173c */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 00101748 */

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



/* Function: state_done @ 00101760 */

undefined8 state_done(void)

{
 return 2;
}



/* Function: state_error @ 00101768 */

undefined4 state_error(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: computed_goto @ 00101778 */

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



/* Function: obfuscated_cf @ 001017b8 */

int obfuscated_cf(int param_1)

{
 return param_1 << 1;
}



/* Function: opaque_predicate @ 001017c0 */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 001017c8 */

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



/* Function: test_control_flow_l3 @ 001017e4 */

int test_control_flow_l3(void)

{
 int iVar1;
 ulong uVar2;
 
 puts(&DAT_00101f4d);
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



/* Function: main @ 001018dc */

undefined8 main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 74 */
