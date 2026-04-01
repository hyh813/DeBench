/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_clang_Os_g
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
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef void (*code)(void);
typedef int (*_func_int_int)(int);

/* Vector type for 128-bit SIMD registers */
typedef union {
    undefined1 bytes[16];
    struct {
        int _0_4_;
        int _4_4_;
        int _8_4_;
        int _12_4_;
    };
    struct {
        long _0_8_;
        long _8_8_;
    };
} vec128;

/* Forward declarations for helper functions */
vec128 vec128_xor(vec128 a, vec128 b);
vec128 vec128_and(vec128 a, vec128 b);
vec128 NEON_ext(vec128 a, vec128 b, int c, int d);

/* NEON intrinsic stub - implementation */
vec128 NEON_intrinsic_stub(vec128 a, vec128 b) {
    return a;
}

/* NEON_ext implementation - extracts bytes from vector */
vec128 NEON_ext(vec128 a, vec128 b, int c, int d) {
    vec128 result;
    for (int i = 0; i < 16; i++) {
        int idx = i + c;
        if (idx < 16) {
            result.bytes[i] = a.bytes[idx];
        } else {
            result.bytes[i] = 0;
        }
    }
    return result;
}

/* Helper function for vec128 XOR */
vec128 vec128_xor(vec128 a, vec128 b) {
    vec128 result;
    for (int i = 0; i < 16; i++) {
        result.bytes[i] = a.bytes[i] ^ b.bytes[i];
    }
    return result;
}

/* Helper function for vec128 AND */
vec128 vec128_and(vec128 a, vec128 b) {
    vec128 result;
    for (int i = 0; i < 16; i++) {
        result.bytes[i] = a.bytes[i] & b.bytes[i];
    }
    return result;
}

/* Ghidra CONCAT macros */
#define CONCAT11(v1, v2) ((uint)(v1) | ((uint)(v2) << 8))
#define CONCAT12(v1, v2) ((uint)(v1) | ((uint)(v2) << 16))
#define CONCAT13(v1, v2) ((uint)(v1) | ((uint)(v2) << 24))
#define CONCAT14(v1, v2) ((uint)(v1) | ((uint)(v2) << 8))
#define CONCAT15(v1, v2) ((uint)(v1) | ((uint)(v2) << 16))
#define CONCAT16(v1, v2) ((uint)(v1) | ((uint)(v2) << 24))
#define CONCAT17(v1, v2) ((ulong)(v1) | ((ulong)(v2) << 32))

/* Additional CONCAT macros for multi-byte concatenation */
#define CONCAT44(v1, v2) (((ulong)(v1) << 32) | (uint)(v2))

/* CRT function declarations - using standard headers */
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern int setjmp(jmp_buf env);
extern void longjmp(jmp_buf env, int val);

/* CRT function stubs */
void __cxa_finalize(void *p) { (void)p; }
void deregister_tm_clones(void) { }

/* Global variables */
char completed_0 = '\0';
int DAT_00101980[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int DAT_00101950[4] = {10, 20, 30, 40};
char DAT_00101f05[] = "Control Flow Tests - Level 1";
char DAT_00101f29[] = "Control Flow Tests - Level 2";
char DAT_00101f4d[] = "Control Flow Tests - Level 3";
void *__dso_handle = 0;
jmp_buf jump_buffer;
int DAT_0010196c[5] = {0, 1, 2, 3, 4};

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100880 @ 00100880 */

void FUN_00100880(void)

{
 /* Stub - null function pointer call removed */
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
 return *(int *)(&DAT_00101950 + (long)op * 4);
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
 long lVar1;
 
 /* Unresolved local var: int n@[???]
 Unresolved local var: int[5] arr@[???] */
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(x0)] */
 if (DAT_0010196c[lVar1] == target) goto LAB_00100c80;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 5);
 lVar1 = 0xffffffff;
LAB_00100c80:
 return (int)lVar1;
}



/* Function: loop_continue @ 00100c84 */

int loop_continue(int n)

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
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
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
 } while ((n + 3U & 0xfffffffc) != uVar8 + 4);
 return (uVar10 ^ (uVar10 ^ uVar9) & -(uint)(n - 1U < uVar8)) +
 (uVar12 ^ (uVar12 ^ uVar11) & -(uint)(n - 1U < (uVar8 | 2)));
 }
 return 0;
}



/* Function: goto_forward @ 00100d04 */

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



/* Function: goto_backward @ 00100d18 */

int goto_backward(int x)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 vec128 auVar4;
 vec128 auVar5;
 vec128 auVar6;
 undefined1 uVar8;
 undefined1 uVar9;
 int iVar7;
 undefined1 uVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int i@[???] */
 uVar1 = x - 1;
 if (0 < x) {
 auVar4._8_4_ = 1;
 auVar4._0_8_ = 0x100000001;
 auVar4._12_4_ = 1;
 iVar12 = 3;
 iVar13 = 4;
 iVar7 = 1;
 iVar11 = 2;
 uVar2 = 0;
 do {
 uVar3 = uVar2;
 auVar6 = auVar4;
 auVar4._0_4_ = iVar7 * auVar6._0_4_;
 auVar4._4_4_ = iVar11 * auVar6._4_4_;
 auVar4._8_4_ = iVar12 * auVar6._8_4_;
 auVar4._12_4_ = iVar13 * auVar6._12_4_;
 iVar7 = iVar7 + 4;
 iVar11 = iVar11 + 4;
 iVar12 = iVar12 + 4;
 iVar13 = iVar13 + 4;
 uVar2 = uVar3 + 4;
 } while ((x + 3U & 0xfffffffc) != uVar3 + 4);
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
 auVar4 = vec128_xor(auVar4, vec128_and(vec128_xor(auVar4, auVar6), auVar5));
 auVar6 = NEON_ext(auVar4,auVar4,8,1);
 return auVar4._0_4_ * auVar6._0_4_ * auVar4._4_4_ * auVar6._4_4_;
 }
 return 1;
}



/* Function: ternary_op @ 00100d94 */

int ternary_op(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: test_control_flow_l1 @ 00100da0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 puts((char *)&DAT_00101f05);
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



/* Function: loop_multi_exit @ 00100f6c */

int loop_multi_exit(int target)

{
 int iVar1;
 long lVar2;
 undefined4 *puVar3;
 long lVar4;
 
 /* Unresolved local var: int[3][4] matrix@[???] */
 iVar1 = 0;
 lVar2 = 0;
 puVar3 = (undefined4 *)&DAT_00101980;
 do {
 lVar4 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg9(x9)]
 Unresolved local var: int j@[DW_OP_reg11(x11)] */
 if (puVar3[lVar4] == target) {
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



/* Function: multi_return @ 00100fe8 */

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



/* Function: conditional_return @ 00101010 */

int conditional_return(int x)

{
 int iVar1;
 
 iVar1 = x << 1;
 if (x < 1) {
 iVar1 = -x;
 }
 return iVar1;
}



/* Function: duffs_device @ 00101020 */

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
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
 uVar4 = uVar3;
switchD_0010104c_caseD_7:
 src = piVar2 + 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
switchD_0010104c_caseD_6:
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
switchD_0010104c_caseD_5:
 src = piVar2 + 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
switchD_0010104c_caseD_4:
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
switchD_0010104c_caseD_3:
 src = piVar2 + 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
switchD_0010104c_caseD_2:
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
switchD_0010104c_caseD_1:
 src = piVar2 + 1;
 uVar3 = uVar4 - 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
 iVar5 = n;
 } while (uVar3 != 0 && 0 < (int)uVar4);
 }
 return iVar5;
}



/* Function: loop_complex_cond @ 001010a4 */

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



/* Function: loop_modify_var @ 001010f8 */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
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
 } while (iVar3 < n);
 }
 return iVar2;
}



/* Function: loop_external_state @ 00101134 */

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



/* Function: recursion_factorial @ 00101154 */

int recursion_factorial(int n)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 vec128 auVar4;
 vec128 auVar5;
 vec128 auVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 undefined1 uVar10;
 undefined1 uVar11;
 undefined1 uVar12;
 
 if (n < 2) {
 return 1;
 }
 auVar4._8_4_ = 1;
 auVar4._0_8_ = 0x100000001;
 auVar4._12_4_ = 1;
 uVar1 = 0;
 if (1 < (uint)n) {
 uVar1 = n - 2;
 }
 iVar7 = n + -1;
 iVar8 = n + -2;
 iVar9 = n + -3;
 uVar2 = 0;
 do {
 uVar3 = uVar2;
 auVar6 = auVar4;
 auVar4._0_4_ = n * auVar6._0_4_;
 auVar4._4_4_ = iVar7 * auVar6._4_4_;
 auVar4._8_4_ = iVar8 * auVar6._8_4_;
 auVar4._12_4_ = iVar9 * auVar6._12_4_;
 n = n + -4;
 iVar7 = iVar7 + -4;
 iVar8 = iVar8 + -4;
 iVar9 = iVar9 + -4;
 uVar2 = uVar3 + 4;
 } while ((uVar1 + 4 & 0xfffffffc) != uVar3 + 4);
 uVar10 = (undefined1)(uVar3 >> 8);
 uVar11 = (undefined1)(uVar3 >> 0x10);
 uVar12 = (undefined1)(uVar3 >> 0x18);
 auVar5._0_4_ = -(uint)(uVar1 < uVar3);
 auVar5._4_4_ = -(uint)(uVar1 < ((uint)(CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14((
 char)uVar3,uVar3)))) >> 0x20) | 1));
 auVar5._8_4_ = -(uint)(uVar1 < (uVar3 | 2));
 auVar5._12_4_ =
 -(uint)(uVar1 < ((uint)(CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14((char)uVar3,
 uVar3)))) >>
 0x20) | 3));
 auVar4 = vec128_xor(auVar4, vec128_and(vec128_xor(auVar4, auVar6), auVar5));
 auVar6 = NEON_ext(auVar4,auVar4,8,1);
 return auVar4._0_4_ * auVar6._0_4_ * auVar4._4_4_ * auVar6._4_4_;
}



/* Function: tail_recursion @ 001011dc */

int tail_recursion(int n,int acc)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 vec128 auVar4;
 vec128 auVar5;
 vec128 auVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 undefined1 uVar10;
 undefined1 uVar11;
 undefined1 uVar12;
 
 if (1 < n) {
 auVar6._8_4_ = 1;
 auVar6._0_8_ = 0x100000000;
 auVar6._12_4_ = 1;
 uVar1 = 0;
 if (1 < (uint)n) {
 uVar1 = n - 2;
 }
 auVar4._4_4_ = auVar6._4_4_;
 auVar4._0_4_ = acc;
 iVar7 = n + -1;
 iVar8 = n + -2;
 iVar9 = n + -3;
 uVar2 = 0;
 do {
 uVar3 = uVar2;
 auVar6 = auVar4;
 auVar4._0_4_ = auVar6._0_4_ * n;
 auVar4._4_4_ = auVar6._4_4_ * iVar7;
 auVar4._8_4_ = auVar6._8_4_ * iVar8;
 auVar4._12_4_ = auVar6._12_4_ * iVar9;
 n = n + -4;
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
 auVar4 = vec128_xor(auVar4, vec128_and(vec128_xor(auVar4, auVar6), auVar5));
 auVar6 = NEON_ext(auVar4,auVar4,8,1);
 acc = auVar4._0_4_ * auVar6._0_4_ * auVar4._4_4_ * auVar6._4_4_;
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00101264 */

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



/* Function: call_func_ptr @ 001012b8 */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x001012c0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 001012c4 */

int call_func_ptr_array(int idx,int x)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 vec128 auVar4;
 vec128 auVar5;
 vec128 auVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 undefined1 uVar10;
 undefined1 uVar11;
 undefined1 uVar12;
 
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
 if (1 < x) {
 auVar4._8_4_ = 1;
 auVar4._0_8_ = 0x100000001;
 auVar4._12_4_ = 1;
 uVar1 = 0;
 if (1 < (uint)x) {
 uVar1 = x - 2;
 }
 iVar7 = x + -1;
 iVar8 = x + -2;
 iVar9 = x + -3;
 uVar2 = 0;
 do {
 uVar3 = uVar2;
 auVar6 = auVar4;
 auVar4._0_4_ = x * auVar6._0_4_;
 auVar4._4_4_ = iVar7 * auVar6._4_4_;
 auVar4._8_4_ = iVar8 * auVar6._8_4_;
 auVar4._12_4_ = iVar9 * auVar6._12_4_;
 x = x + -4;
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
 auVar4 = vec128_xor(auVar4, vec128_and(vec128_xor(auVar4, auVar6), auVar5));
 auVar6 = NEON_ext(auVar4,auVar4,8,1);
 return auVar4._0_4_ * auVar6._0_4_ * auVar4._4_4_ * auVar6._4_4_;
 }
 return 1;
}



/* Function: double_value @ 001012e8 */

int double_value(int x)

{
 return x << 1;
}



/* Function: triple_value @ 001012f0 */

int triple_value(int x)

{
 return x * 3;
}



/* Function: call_virtual_func @ 001012f8 */

int call_virtual_func(void *obj,int x)

{
 return x << 1;
}



/* Function: process_with_callback @ 00101300 */

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



/* Function: test_control_flow_l2 @ 00101358 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 uint uVar1;
 ulong uVar2;
 int iVar3;
 long lVar4;
 undefined4 *puVar5;
 long lVar6;
 uint uVar7;
 uint uVar8;
 int aiStack_70 [8];
 int local_50 [8];
 
 /* Unresolved local var: int flag@[???]
 Unresolved local var: int[8] src@[DW_OP_breg31(sp): +32]
 Unresolved local var: int[8] dst@[DW_OP_breg31(sp): 0]
 Unresolved local var: int ext_flag@[???]
 Unresolved local var: int[5] arr@[???] */
 puts((char *)&DAT_00101f29);
 iVar3 = 0;
 lVar4 = 0;
 puVar5 = (undefined4 *)&DAT_00101980;
 do {
 lVar6 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg9(x9)]
 Unresolved local var: int j@[DW_OP_reg11(x11)] */
 if (puVar5[lVar6] == 7) {
 uVar2 = (ulong)(uint)((int)lVar6 - iVar3);
 goto LAB_001013c4;
 }
 lVar6 = lVar6 + 1;
 } while (lVar6 != 4);
 lVar4 = lVar4 + 1;
 iVar3 = iVar3 + -10;
 puVar5 = puVar5 + 4;
 } while (lVar4 != 3);
 uVar2 = 0xffffffff;
LAB_001013c4:
 printf("CF-L2-01 (loop_multi_exit): %d\n",uVar2);
 iVar3 = 0;
 do {
 /* Unresolved local var: int count@[DW_OP_reg1(x1)] */
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x3e9);
 printf("CF-L2-02 (infinite_loop): %d\n", iVar3);
 uVar8 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 uVar7 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 local_50[2] = 3;
 local_50[3] = 4;
 local_50[0] = 1;
 local_50[1] = 2;
 local_50[6] = 7;
 local_50[7] = 8;
 local_50[4] = 5;
 local_50[5] = 6;
 uVar1 = duffs_device(aiStack_70,local_50,8);
 printf("CF-L2-05 (duffs_device): %d\n",(ulong)uVar1);
 iVar3 = 0xb;
 do {
 /* Unresolved local var: int c@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int a@[???] */
 uVar1 = uVar7 - 8;
 uVar7 = uVar7 + 2;
 if (iVar3 - 2U <= uVar1) break;
 uVar8 = uVar8 + 1;
 iVar3 = iVar3 + -1;
 } while (uVar8 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar7);
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar3 = 0;
 do {
 /* Unresolved local var: int count@[DW_OP_reg1(x1)] */
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x65);
 printf("CF-L2-08 (loop_external_state): %d\n", iVar3);
 printf("CF-L2-09 (recursion_factorial): %d\n",0x78);
 printf("CF-L2-10 (tail_recursion): %d\n",0x78);
 printf("CF-L2-11 (indirect_recursion): %d\n",3);
 printf("CF-L2-12 (call_func_ptr): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
 return;
}



/* Function: non_local_jump @ 00101578 */

int non_local_jump(int x)

{
 int iVar1;
 
 iVar1 = setjmp(jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 if (x < 0) {
 iVar1 = 1;
 }
 else {
 if ((uint)x < 0x65) {
 return x << 1;
 }
 iVar1 = 2;
 }
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,iVar1);
 return 0;
}



/* Function: cpp_exception @ 001015d8 */

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



/* Function: large_jump_table @ 001015f4 */

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



/* Function: op_add @ 0010161c */

int op_add(int a,int b)

{
 return b + a;
}



/* Function: op_sub @ 00101624 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 0010162c */

int op_mul(int a,int b)

{
 return b * a;
}



/* Function: op_div @ 00101634 */

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



/* Function: op_mod @ 00101648 */

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



/* Function: op_and @ 00101660 */

int op_and(int a,int b)

{
 return b & a;
}



/* Function: op_or @ 00101668 */

int op_or(int a,int b)

{
 return b | a;
}



/* Function: op_xor @ 00101670 */

int op_xor(int a,int b)

{
 return b ^ a;
}



/* Function: op_shl @ 00101678 */

int op_shl(int a,int b)

{
 return a << (ulong)(b & 0x1f);
}



/* Function: op_shr @ 00101680 */

int op_shr(int a,int b)

{
 return a >> (b & 0x1fU);
}



/* Function: conditional_func_ptr @ 00101688 */

int conditional_func_ptr(int mode,int x)

{
 _func_int_int *pcVar1;
 _func_int_int *UNRECOVERED_JUMPTABLE;
 int iVar2;
 
 /* Unresolved local var: _func_int_int * func@[???] */
 pcVar1 = (_func_int_int *)triple_value;
 if (mode != 1) {
 pcVar1 = (_func_int_int *)recursion_factorial;
 }
 UNRECOVERED_JUMPTABLE = (_func_int_int *)double_value;
 if (mode != 0) {
 UNRECOVERED_JUMPTABLE = pcVar1;
 }
 /* WARNING: Could not recover jumptable at 0x001016b4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar2 = (*UNRECOVERED_JUMPTABLE)(x);
 return iVar2;
}



/* Function: state_machine @ 001016b8 */

int state_machine(int event,int state)

{
 uint uVar1;
 
 switch(state) {
 case 0:
 state = (uint)(event == 1);
 break;
 case 1:
 uVar1 = 3;
 if (event != 99) {
 uVar1 = 1;
 }
 state = event;
 if (event != 2) {
 state = uVar1;
 }
 break;
 case 2:
 break;
 case 3:
 state = 0;
 if (event != 0) {
 state = 3;
 }
 break;
 default:
 state = 3;
 }
 return state;
}



/* Function: fsm_func_table @ 0010171c */

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



/* Function: state_idle @ 0010173c */

int state_idle(int event)

{
 return (int)(event == 1);
}



/* Function: state_processing @ 00101748 */

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



/* Function: state_done @ 00101760 */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 00101768 */

int state_error(int event)

{
 int iVar1;
 
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: computed_goto @ 00101778 */

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



/* Function: obfuscated_cf @ 001017b8 */

int obfuscated_cf(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(x0)] */
 return x << 1;
}



/* Function: opaque_predicate @ 001017c0 */

int opaque_predicate(int x)

{
 /* Unresolved local var: int cond@[???] */
 return x << 1;
}



/* Function: overlapped_code @ 001017c8 */

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



/* Function: test_control_flow_l3 @ 001017e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 uint uVar1;
 int labels[4] = {0, 10, 0x14, 0x1e};
 
 puts((char *)&DAT_00101f4d);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
 uVar1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 uVar1 = computed_goto(labels,2);
 printf("CF-L3-07 (computed_goto): %d\n",(ulong)uVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 001018dc */

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
