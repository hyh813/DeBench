/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/1/1_clang_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */


/* Type definitions for decompiled code */
typedef unsigned int uint;
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef unsigned char byte;
typedef int bool;
typedef unsigned int undefined4;
typedef int (*_func_int_int)(int);
typedef int (*code)(int);

/* External data declarations */
extern char DAT_00011e70[];
extern char DAT_00011848[];
extern char DAT_0001185c[];
extern char DAT_00011de1[];
extern char DAT_00011e05[];
extern char DAT_00011e29[];
extern char jump_buffer[];

/* External data definitions */
char DAT_00011e70[256];
char DAT_00011848[20];
char DAT_0001185c[48];
char DAT_00011de1[] = "=== Control Flow Tests Level 1 ===";
char DAT_00011e05[] = "=== Control Flow Tests Level 2 ===";
char DAT_00011e29[] = "=== Control Flow Tests Level 3 ===";
char jump_buffer[256];

/* Function prototypes */
int puts(int *);
int printf(int *, ...);
int _setjmp(void *);
void longjmp(void *, int);
int __divsi3(void);
void __aeabi_idivmod(void);


/* Function: sequential_ops @ 000106c4 */

int sequential_ops(int a,int b,int c)

{
 /* Unresolved local var: int temp1@[???]
 Unresolved local var: int temp3@[???]
 Unresolved local var: int temp2@[???] */
 return (b + a) * 2 - c;
}



/* Function: single_if @ 000106d0 */

int single_if(int x)

{
 return x << (uint)(0 < x);
}



/* Function: if_else @ 000106e4 */

int if_else(int x)

{
 return (uint)(0 < x);
}



/* Function: nested_if_2 @ 000106f8 */

int nested_if_2(int a,int b)

{
 int iVar1;
 
 iVar1 = a;
 if (0 < b) {
 iVar1 = a + b;
 }
 if (a < 1) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: nested_if_deep @ 00010714 */

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



/* Function: if_elseif_chain @ 00010758 */

int if_elseif_chain(int x)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)x < 3) {
 iVar1 = x * 10 + 10;
 }
 return iVar1;
}



/* Function: if_elseif_long @ 00010774 */

int if_elseif_long(int x)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)x < 5) {
 iVar1 = x * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_small @ 00010790 */

int switch_small(int op)

{
 int iVar1;
 
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???] */
 iVar1 = -1;
 if ((uint)op < 4) {
 iVar1 = *(int *)(DAT_00011e70 + op * 4);
 }
 return iVar1;
}



/* Function: switch_large @ 000107b0 */

int switch_large(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 10) {
 iVar1 = op * 10;
 }
 return iVar1;
}



/* Function: switch_default @ 000107c8 */

int switch_default(int op)

{
 int iVar1;
 
 iVar1 = 0;
 if (op - 1U < 3) {
 iVar1 = (op - 1U) * 100 + 100;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 000107e4 */

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



/* Function: loop_for_fixed @ 00010818 */

int loop_for_fixed(int n)

{
 longlong lVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 lVar1 = (ulonglong)(n - 2) * (ulonglong)(n - 1);
 return ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1) + n + -1;
 }
 return 0;
}



/* Function: loop_while @ 00010848 */

int loop_while(int x)

{
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int count@[???] */
 if (x != 0) {
 iVar1 = 0;
 do {
 uVar2 = x + 9;
 iVar1 = iVar1 + 1;
 x = x / 10;
 } while (0x12 < uVar2);
 return iVar1;
 }
 return 1;
}



/* Function: loop_dowhile @ 00010888 */

int loop_dowhile(int x)

{
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int count@[DW_OP_reg0(r0)] */
 iVar1 = 0;
 do {
 uVar2 = x + 9;
 iVar1 = iVar1 + 1;
 x = x / 10;
 } while (0x12 < uVar2);
 return iVar1;
}



/* Function: loop_nested @ 000108bc */

int loop_nested(int m,int n)

{
 int iVar1;
 
 /* Unresolved local var: int total@[???]
 Unresolved local var: int i@[???] */
 iVar1 = 0;
 if (0 < m) {
 iVar1 = (n & ~(n >> 0x1f)) * m;
 }
 return iVar1;
}



/* Function: loop_break @ 000108d4 */

int loop_break(int target)

{
 int iVar1;
 
 /* Unresolved local var: int n@[???]
 Unresolved local var: int[5] arr@[???] */
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(r0)] */
 if (((int *)DAT_00011848)[iVar1] == target) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 5);
 return -1;
}



/* Function: loop_continue @ 00010908 */

int loop_continue(int n)

{
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 uVar2 = uVar2 + 1;
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 } while (n != uVar2);
 }
 return iVar1;
}



/* Function: goto_forward @ 0001093c */

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



/* Function: goto_backward @ 00010954 */

int goto_backward(int x)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int i@[???] */
 if (x < 1) {
 iVar2 = 1;
 }
 else {
 iVar2 = 1;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 iVar2 = iVar1 * iVar2;
 } while (x != iVar1);
 }
 return iVar2;
}



/* Function: ternary_op @ 00010988 */

int ternary_op(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: test_control_flow_l1 @ 00010994 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 puts((int *)DAT_00011de1);
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



/* Function: loop_multi_exit @ 00010ba8 */

int loop_multi_exit(int target)

{
 int iVar1;
 undefined4 *puVar2;
 int iVar3;
 int iVar4;
 
 /* Unresolved local var: int[3][4] matrix@[???] */
 iVar3 = 0;
 iVar4 = 0;
 puVar2 = (undefined4 *)DAT_0001185c;
 do {
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg14(lr)]
 Unresolved local var: int j@[DW_OP_reg1(r1)] */
 if (puVar2[iVar1] == target) {
 return iVar1 - iVar3;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 iVar4 = iVar4 + 1;
 puVar2 = puVar2 + 4;
 iVar3 = iVar3 + -10;
 } while (iVar4 != 3);
 return -1;
}



/* Function: infinite_loop @ 00010c04 */

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



/* Function: multi_return @ 00010c3c */

int multi_return(int x)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 if (x < 0) {
 return -1;
 }
 if ((uint)x < 0x33) {
 iVar1 = x + 1;
 if ((x & 1U) == 0) {
 iVar1 = x << 1;
 }
 return iVar1;
 }
 return -2;
}



/* Function: conditional_return @ 00010c68 */

int conditional_return(int x)

{
 int iVar1;
 
 iVar1 = -x;
 if (0 < x) {
 iVar1 = x << 1;
 }
 return iVar1;
}



/* Function: duffs_device @ 00010c7c */

int duffs_device(int *dst,int *src,int n)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 
 /* Unresolved local var: int count@[???] */
 iVar3 = -1;
 if (0 < n) {
 uVar5 = n + 7U >> 3;
 piVar1 = dst;
 piVar2 = src;
 uVar4 = uVar5;
 switch(n & 7) {
 case 1:
 goto switchD_00010ca0_caseD_1;
 case 2:
 goto switchD_00010ca0_caseD_2;
 case 3:
 goto switchD_00010ca0_caseD_3;
 case 4:
 goto switchD_00010ca0_caseD_4;
 case 5:
 goto switchD_00010ca0_caseD_5;
 case 6:
 goto switchD_00010ca0_caseD_6;
 case 7:
 goto switchD_00010ca0_caseD_7;
 }
 do {
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
switchD_00010ca0_caseD_7:
 src = piVar2 + 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
switchD_00010ca0_caseD_6:
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
switchD_00010ca0_caseD_5:
 src = piVar2 + 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
switchD_00010ca0_caseD_4:
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
switchD_00010ca0_caseD_3:
 src = piVar2 + 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
switchD_00010ca0_caseD_2:
 piVar2 = src + 1;
 piVar1 = dst + 1;
 *dst = *src;
 uVar4 = uVar5;
switchD_00010ca0_caseD_1:
 src = piVar2 + 1;
 uVar5 = uVar4 - 1;
 dst = piVar1 + 1;
 *piVar1 = *piVar2;
 iVar3 = n;
 } while (uVar5 != 0 && 0 < (int)uVar4);
 }
 return iVar3;
}



/* Function: loop_complex_cond @ 00010d1c */

int loop_complex_cond(int x)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 int bVar5;
 
 /* Unresolved local var: int b@[DW_OP_reg0(r0)]
 Unresolved local var: int a@[???]
 Unresolved local var: int c@[???] */
 if (x < 1) {
 iVar1 = 0;
 uVar4 = 0;
 }
 else {
 iVar1 = 0;
 uVar2 = x;
 uVar3 = 0;
 do {
 iVar1 = iVar1 + 2;
 uVar4 = uVar3 + 1;
 x = uVar2 - 1;
 if ((uVar2 < 2) || (x <= iVar1)) break;
 bVar5 = uVar3 < 9;
 uVar2 = x;
 uVar3 = uVar4;
 } while (bVar5);
 }
 return x + iVar1 + uVar4;
}



/* Function: loop_modify_var @ 00010d74 */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar2 + iVar1;
 if (5 < iVar2) {
 iVar2 = iVar2 + 2;
 }
 iVar2 = iVar2 + 1;
 } while (iVar2 < n);
 }
 return iVar1;
}



/* Function: loop_external_state @ 00010dac */

int loop_external_state(int *flag)

{
 int iVar1;
 
 /* Unresolved local var: int count@[DW_OP_reg0(r0)] */
 iVar1 = 0;
 do {
 if (*flag != 0) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return 0x65;
}



/* Function: recursion_factorial @ 00010dd4 */

int recursion_factorial(int n)

{
 int bVar1;
 int iVar2;
 
 iVar2 = 1;
 if (1 < n) {
 iVar2 = 1;
 do {
 iVar2 = n * iVar2;
 bVar1 = 2 < (uint)n;
 n = n - 1;
 } while (bVar1);
 }
 return iVar2;
}



/* Function: tail_recursion @ 00010e04 */

int tail_recursion(int n,int acc)

{
 int bVar1;
 
 if (1 < n) {
 do {
 acc = acc * n;
 bVar1 = 2 < (uint)n;
 n = n - 1;
 } while (bVar1);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00010e34 */

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



/* Function: call_func_ptr @ 00010e88 */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010e90. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: call_func_ptr_array @ 00010e94 */

int call_func_ptr_array(int idx,int x)

{
 bool bVar1;
 int iVar2;
 
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
 iVar2 = 1;
 if (1 < x) {
 iVar2 = 1;
 do {
 iVar2 = x * iVar2;
 bVar1 = 2 < (uint)x;
 x = x - 1;
 } while (bVar1);
 }
 return iVar2;
}



/* Function: double_value @ 00010eb8 */

int double_value(int x)

{
 return x << 1;
}



/* Function: triple_value @ 00010ec0 */

int triple_value(int x)

{
 return x * 3;
}



/* Function: call_virtual_func @ 00010ec8 */

int call_virtual_func(void *obj,int x)

{
 return x << 1;
}



/* Function: process_with_callback @ 00010ed0 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 do {
 iVar1 = (*cb)(*arr);
 iVar2 = iVar1 + iVar2;
 n = n + -1;
 arr = arr + 1;
 } while (n != 0);
 }
 return iVar2;
}



/* Function: test_control_flow_l2 @ 00010f18 */

/* WARNING: Removing unreachable block (ram,0x00010fb8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 int iVar1;
 undefined4 *puVar2;
 int iVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 int aiStack_5c [8];
 int local_3c;
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined4 local_1c;
 
 /* Unresolved local var: int flag@[???]
 Unresolved local var: int[8] src@[???]
 Unresolved local var: int[8] dst@[???]
 Unresolved local var: int ext_flag@[???]
 Unresolved local var: int[5] arr@[???] */
 puts((int *)DAT_00011e05);
 iVar1 = 0;
 iVar3 = 0;
 puVar2 = (undefined4 *)DAT_0001185c;
 do {
 iVar4 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg2(r2)]
 Unresolved local var: int j@[DW_OP_reg3(r3)] */
 if (puVar2[iVar4] == 7) {
 iVar4 = iVar4 - iVar1;
 goto LAB_00010f78;
 }
 iVar4 = iVar4 + 1;
 } while (iVar4 != 4);
 iVar3 = iVar3 + 1;
 puVar2 = puVar2 + 4;
 iVar1 = iVar1 + -10;
 } while (iVar3 != 3);
 iVar4 = -1;
LAB_00010f78:
 printf("CF-L2-01 (loop_multi_exit): %d\n",iVar4);
 iVar1 = 0;
 do {
 /* Unresolved local var: int count@[???] */
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 local_1c = 1;
 printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
 uVar6 = 0xffffffff;
 printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
 printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
 printf("CF-L2-03 (multi_return): %d\n",4);
 iVar3 = 10;
 printf("CF-L2-04 (conditional_return): %d\n",10);
 printf("CF-L2-04 (conditional_return): %d\n",5);
 local_3c = 1;
 uStack_38 = 2;
 uStack_34 = 3;
 uStack_30 = 4;
 local_2c = 5;
 uStack_28 = 6;
 uStack_24 = 7;
 uStack_20 = 8;
 iVar1 = duffs_device(aiStack_5c,&local_3c,8);
 printf("CF-L2-05 (duffs_device): %d\n",iVar1);
 iVar1 = 0xb;
 do {
 /* Unresolved local var: int c@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int a@[???] */
 uVar5 = iVar3 - 8;
 iVar3 = iVar3 + 2;
 if (iVar1 - 2U <= uVar5) break;
 uVar6 = uVar6 + 1;
 iVar1 = iVar1 + -1;
 } while (uVar6 < 9);
 printf("CF-L2-06 (loop_complex_cond): %d\n");
 printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
 iVar1 = 0;
 do {
 /* Unresolved local var: int count@[DW_OP_reg1(r1)] */
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



/* Function: non_local_jump @ 0001118c */

int non_local_jump(int x)

{
 int iVar1;
 int iVar2;
 
 iVar1 = _setjmp((void *)DAT_00011e70);
 iVar2 = -1;
 if (iVar1 == 0) {
 if (x < 0) {
 /* WARNING: Subroutine does not return */
 longjmp((void *)DAT_00011e70,1);
 }
 if (100 < (uint)x) {
 /* WARNING: Subroutine does not return */
 longjmp((void *)DAT_00011e70,2);
 }
 iVar2 = x << 1;
 }
 return iVar2;
}



/* Function: cpp_exception @ 000111f8 */

int cpp_exception(int x)

{
 int iVar1;
 
 iVar1 = x << 1;
 if (100 < x) {
 iVar1 = -2;
 }
 if (0x7fffffff < (uint)x) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: large_jump_table @ 00011214 */

int large_jump_table(int op,int a,int b)

{
 int iVar1;
 int extraout_r1;
 
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
 __aeabi_idivmod();
 return extraout_r1;
 case 5:
 return b & a;
 case 6:
 return b | a;
 case 7:
 return b ^ a;
 case 8:
 return a << (b & 0xffU);
 case 9:
 return a >> (b & 0xffU);
 default:
 return -1;
 }
 if (b == 0) {
 return 0;
 }
 iVar1 = __divsi3();
 return iVar1;
}



/* Function: op_add @ 0001123c */

int op_add(int a,int b)

{
 return b + a;
}



/* Function: op_sub @ 00011244 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 0001124c */

int op_mul(int a,int b)

{
 return b * a;
}



/* Function: op_div @ 00011258 */

int op_div(int a,int b)

{
 int iVar1;
 
 if (b != 0) {
 iVar1 = __divsi3();
 return iVar1;
 }
 return 0;
}



/* Function: op_mod @ 00011274 */

int op_mod(int a,int b)

{
 int extraout_r1;
 
 if (b != 0) {
 __aeabi_idivmod();
 return extraout_r1;
 }
 return 0;
}



/* Function: op_and @ 00011294 */

int op_and(int a,int b)

{
 return b & a;
}



/* Function: op_or @ 0001129c */

int op_or(int a,int b)

{
 return b | a;
}



/* Function: op_xor @ 000112a4 */

int op_xor(int a,int b)

{
 return b ^ a;
}



/* Function: op_shl @ 000112ac */

int op_shl(int a,int b)

{
 return a << (b & 0xffU);
}



/* Function: op_shr @ 000112b4 */

int op_shr(int a,int b)

{
 return a >> (b & 0xffU);
}



/* Function: conditional_func_ptr @ 000112bc */

int conditional_func_ptr(int mode,int x)

{
 int iVar1;
 code UNRECOVERED_JUMPTABLE;
 code pcVar2;
 
 /* Unresolved local var: _func_int_int * func@[???] */
 pcVar2 = (code)recursion_factorial;
 if (mode == 1) {
 pcVar2 = (code)triple_value;
 }
 UNRECOVERED_JUMPTABLE = (code)double_value;
 if (mode != 0) {
 UNRECOVERED_JUMPTABLE = pcVar2;
 }
 /* WARNING: Could not recover jumptable at 0x000112e8. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = UNRECOVERED_JUMPTABLE(x);
 return iVar1;
}



/* Function: state_machine @ 000112f8 */

int state_machine(int event,int state)

{
 switch(state) {
 case 0:
 state = (int)(event == 1);
 break;
 case 1:
 state = 1;
 if (event == 99) {
 state = 3;
 }
 if (event == 2) {
 state = event;
 }
 break;
 case 2:
 break;
 case 3:
 state = event;
 if (event != 0) {
 state = 3;
 }
 break;
 default:
 state = 3;
 }
 return state;
}



/* Function: fsm_func_table @ 00011360 */

int fsm_func_table(int event,int state)

{
 int iVar1;
 
 switch(state) {
 case 0:
 return (uint)(event == 1);
 case 1:
 iVar1 = 1;
 if (event == 99) {
 iVar1 = 3;
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



/* Function: state_idle @ 00011380 */

int state_idle(int event)

{
 return (uint)(event == 1);
}



/* Function: state_processing @ 00011390 */

int state_processing(int event)

{
 int iVar1;
 
 iVar1 = 1;
 if (event == 99) {
 iVar1 = 3;
 }
 if (event != 2) {
 event = iVar1;
 }
 return event;
}



/* Function: state_done @ 000113a8 */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 000113b0 */

int state_error(int event)

{
 int iVar1;
 
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: computed_goto @ 000113bc */

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



/* Function: obfuscated_cf @ 000113fc */

int obfuscated_cf(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(r0)] */
 return x << 1;
}



/* Function: opaque_predicate @ 00011404 */

int opaque_predicate(int x)

{
 /* Unresolved local var: int cond@[???] */
 return x << 1;
}



/* Function: overlapped_code @ 0001140c */

int overlapped_code(int x)

{
 int iVar1;
 
 iVar1 = x * 3 + 1;
 if ((x & 1U) == 0) {
 iVar1 = x / 2;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 00011428 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 int iVar1;
 int *labels;
 
 /* Unresolved local var: int[4] labels@[???] */
 puts((int *)DAT_00011e29);
 iVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",iVar1);
 iVar1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n",iVar1);
 printf("CF-L3-02 (cpp_exception): %d\n",10);
 printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 printf("CF-L3-03 (large_jump_table): %d\n",0xf);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
 printf("CF-L3-05 (state_machine): %d\n",1);
 labels = (int *)printf("CF-L3-06 (fsm_func_table): %d\n",2);
 iVar1 = computed_goto(labels,2);
 printf("CF-L3-07 (computed_goto): %d\n",iVar1);
 printf("CF-L3-08 (obfuscated_cf): %d\n",10);
 printf("CF-L3-09 (opaque_predicate): %d\n",10);
 printf("CF-L3-10 (overlapped_code): %d\n",0x10);
 return;
}



/* Function: main @ 00011540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function __divsi3 removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */





/* CRT stub function __aeabi_ldiv0 removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
