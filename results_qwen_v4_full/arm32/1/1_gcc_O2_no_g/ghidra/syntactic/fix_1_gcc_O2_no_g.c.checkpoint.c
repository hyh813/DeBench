/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/1/1_gcc_O2_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Type definitions for Ghidra decompiler types */
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned char undefined1;
typedef _Bool bool;
typedef undefined4 (*code)();

/* Define __jmp_buf_tag for setjmp/longjmp */
typedef struct {
 undefined4 __jmpbuf[6];
} __jmp_buf_tag;

/* Define true/false for C compatibility */
#ifndef true
#define true 1
#endif
#ifndef false
#define false 0
#endif

/* Define SBORROW4 for signed borrow check */
#define SBORROW4(a, b) (((int)(a)) < ((int)(b)))

/* External data declarations */
char DAT_00011b10[256] = "Control Flow Tests - Level 1";
char DAT_00011d98[256] = "Control Flow Tests - Level 2";
char DAT_00011f9c[256] = "Control Flow Tests - Level 3";
undefined4 CSWTCH_56[256] = {0, 0, 0, 0};
__jmp_buf_tag jump_buffer = {{0}};
char DAT_00011668[256] = {0};
char DAT_00011660[256] = {0};
char DAT_00011658[256] = {0};
char DAT_00011634[256] = {0};

/* External function declarations */
extern undefined4 __aeabi_idiv(undefined4, int);
extern undefined4 __aeabi_idivmod(undefined4, int);
extern int __printf_chk(undefined4, char *, ...);
extern int puts(char *);
extern void memset(void *, int, unsigned int);
extern int _setjmp(__jmp_buf_tag *);
extern void __longjmp_chk(__jmp_buf_tag *, int);
extern int raise(int);
extern void __stack_chk_fail(void);

/* Function: main @ 000104e0 */

undefined4 main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: recursion_factorial @ 000105f0 */

int recursion_factorial(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 1;
 if (param_1 < 2) {
 return 1;
 }
 do {
 iVar2 = param_1 + -1;
 iVar1 = param_1 * iVar1;
 param_1 = iVar2;
 } while (iVar2 != 1);
 return iVar1;
}



/* Function: double_value @ 00010618 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: triple_value @ 00010620 */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: op_add @ 00010628 */

int op_add(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: op_sub @ 00010630 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 00010638 */

int op_mul(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: op_div @ 00010640 */

undefined4 op_div(undefined4 param_1,int param_2)

{
 if (param_2 != 0) {
 return __aeabi_idiv(param_1, param_2);
 }
 return 0;
}



/* Function: op_mod @ 0001065c */

undefined4 op_mod(undefined4 param_1,int param_2)

{
 if (param_2 != 0) {
 return __aeabi_idivmod(param_1, param_2);
 }
 return 0;
}



/* Function: op_and @ 0001067c */

uint op_and(uint param_1,uint param_2)

{
 return param_1 & param_2;
}



/* Function: op_or @ 00010684 */

uint op_or(uint param_1,uint param_2)

{
 return param_1 | param_2;
}



/* Function: op_xor @ 0001068c */

uint op_xor(uint param_1,uint param_2)

{
 return param_1 ^ param_2;
}



/* Function: op_shl @ 00010694 */

int op_shl(int param_1,uint param_2)

{
 return param_1 << (param_2 & 0xff);
}



/* Function: op_shr @ 0001069c */

int op_shr(int param_1,uint param_2)

{
 return param_1 >> (param_2 & 0xff);
}



/* Function: state_idle @ 000106a4 */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 000106b4 */

undefined4 state_processing(int param_1)

{
 undefined4 uVar1;
 
 if (param_1 != 2) {
 if (param_1 == 99) {
 uVar1 = 3;
 }
 else {
 uVar1 = 1;
 }
 return uVar1;
 }
 return 2;
}



/* Function: state_done @ 000106cc */

undefined4 state_done(void)

{
 return 2;
}



/* Function: state_error @ 000106d4 */

undefined4 state_error(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 != 0) {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: sequential_ops @ 000106e0 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 000106ec */

int single_if(int param_1)

{
 if (0 < param_1) {
 param_1 = param_1 << 1;
 }
 return param_1;
}



/* Function: if_else @ 000106f8 */

bool if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 00010708 */

int nested_if_2(int param_1,int param_2)

{
 if (0 < param_1) {
 if (0 < param_2) {
 param_1 = param_1 + param_2;
 }
 return param_1;
 }
 return 0;
}



/* Function: nested_if_deep @ 00010724 */

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
 if (param_4 < 1) {
 return 3;
 }
 if (param_5 < 1) {
 uVar1 = 4;
 }
 else {
 uVar1 = 5;
 }
 return uVar1;
}



/* Function: if_elseif_chain @ 00010778 */

undefined4 if_elseif_chain(int param_1)

{
 undefined4 uVar1;
 
 if (param_1 == 0) {
 return 10;
 }
 if (param_1 == 1) {
 return 0x14;
 }
 if (param_1 == 2) {
 uVar1 = 0x1e;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: if_elseif_long @ 000107a8 */

int if_elseif_long(uint param_1)

{
 int iVar1;
 
 if (param_1 < 5) {
 iVar1 = (param_1 + 1) * 100;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_small @ 000107c4 */

undefined4 switch_small(uint param_1)

{
 undefined4 uVar1;
 
 if (param_1 < 4) {
 uVar1 = *(undefined4 *)(&CSWTCH_56 + param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: switch_large @ 000107dc */

int switch_large(uint param_1)

{
 int iVar1;
 
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_default @ 000107f0 */

int switch_default(int param_1)

{
 if (param_1 - 1U < 3) {
 param_1 = param_1 * 100;
 }
 else {
 param_1 = 0;
 }
 return param_1;
}



/* Function: switch_fallthrough @ 0001080c */

int switch_fallthrough(int param_1)

{
 int iVar1;
 
 if (param_1 == 2) {
 iVar1 = 0;
 }
 else {
 if (param_1 != 3) {
 if (param_1 == 1) {
 iVar1 = 1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
 }
 iVar1 = 0xc;
 }
 return iVar1 + param_1 * 3;
}



/* Function: loop_for_fixed @ 00010844 */

int loop_for_fixed(int param_1)

{
 int iVar1;
 int iVar2;
 
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: loop_while @ 00010870 */

int loop_while(int param_1)

{
 int iVar1;
 
 if (param_1 != 0) {
 iVar1 = 0;
 do {
 param_1 = param_1 / 10;
 iVar1 = iVar1 + 1;
 } while (param_1 != 0);
 return iVar1;
 }
 return 1;
}



/* Function: loop_dowhile @ 000108a4 */

int loop_dowhile(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 param_1 = param_1 / 10;
 iVar1 = iVar1 + 1;
 } while (param_1 != 0);
 return iVar1;
}



/* Function: loop_nested @ 000108cc */

int loop_nested(int param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 if (param_1 < 1) {
 return 0;
 }
 iVar1 = 0;
 iVar2 = iVar1;
 do {
 iVar2 = iVar2 + 1;
 if (0 < param_2) {
 iVar1 = param_2 + iVar1;
 }
 } while (param_1 != iVar2);
 return iVar1;
}



/* Function: loop_break @ 000108fc */

/* WARNING: Removing unreachable block (ram,0x00010978) */

int loop_break(int param_1)

{
 int iVar1;
 int *piVar2;
 int local_28 [6];
 
 iVar1 = 0;
 local_28[5] = 0;
 local_28[0] = 10;
 local_28[1] = 0x14;
 local_28[2] = 0x1e;
 local_28[3] = 0x28;
 local_28[4] = 0x32;
 piVar2 = local_28;
 do {
 if (*piVar2 == param_1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return -1;
}



/* Function: loop_continue @ 00010984 */

int loop_continue(int param_1)

{
 int iVar1;
 uint uVar2;
 
 if (0 < param_1) {
 uVar2 = 1;
 iVar1 = 0;
 do {
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 uVar2 = uVar2 + 1;
 } while (uVar2 != param_1 + 1U);
 return iVar1;
 }
 return 0;
}



/* Function: goto_forward @ 000109b8 */

int goto_forward(int param_1)

{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 << 1;
}



/* Function: goto_backward @ 000109cc */

int goto_backward(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 1;
 if (param_1 < 1) {
 return 1;
 }
 iVar2 = 1;
 do {
 iVar1 = iVar2 * iVar1;
 iVar2 = iVar2 + 1;
 } while (param_1 + 1 != iVar2);
 return iVar1;
}



/* Function: ternary_op @ 000109f4 */

int ternary_op(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: test_control_flow_l1 @ 00010a00 */

void test_control_flow_l1(void)

{
 int *piVar1;
 int iVar2;
 int local_28 [7];
 
 local_28[5] = 0;
 puts(&DAT_00011b10);
 __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n");
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",0);
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0xf);
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",10);
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0);
 __printf_chk(1,"CF-L1-05 (nested_if_deep): %d\n",5);
 __printf_chk(1,"CF-L1-06 (if_elseif_chain): %d\n",0x14);
 __printf_chk(1,"CF-L1-07 (if_elseif_long): %d\n",400);
 __printf_chk(1,"CF-L1-08 (switch_small): %d\n",0x32);
 __printf_chk(1,"CF-L1-09 (switch_large): %d\n",0x46);
 __printf_chk(1,"CF-L1-10 (switch_default): %d\n",0);
 __printf_chk(1,"CF-L1-11 (switch_fallthrough): %d\n",0x15);
 __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",0x2d);
 __printf_chk(1,"CF-L1-13 (loop_while): %d\n",5);
 __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",4);
 __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",0xc);
 iVar2 = 0;
 local_28[0] = 10;
 local_28[1] = 0x14;
 local_28[2] = 0x1e;
 local_28[3] = 0x28;
 local_28[4] = 0x32;
 piVar1 = local_28;
 do {
 if (*piVar1 == 0x1e) goto LAB_00010b8c;
 iVar2 = iVar2 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 5);
 iVar2 = -1;
LAB_00010b8c:
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar2);
 iVar2 = 0;
 local_28[0] = 10;
 local_28[1] = 0x14;
 local_28[2] = 0x1e;
 local_28[3] = 0x28;
 local_28[4] = 0x32;
 piVar1 = local_28;
 do {
 if (*piVar1 == 99) goto LAB_00010bd8;
 iVar2 = iVar2 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 5);
 iVar2 = -1;
LAB_00010bd8:
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar2);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",0x19);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 if (local_28[5] == 0) {
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: loop_multi_exit @ 00010cc8 */

/* WARNING: Removing unreachable block (ram,0x00010d6c) */

void loop_multi_exit(int param_1)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int *piVar4;
 int local_44 [13];
 
 iVar3 = 0;
 piVar4 = local_44;
 local_44[0xc] = 0;
 local_44[0] = 1;
 local_44[1] = 2;
 local_44[2] = 3;
 local_44[3] = 4;
 local_44[4] = 5;
 local_44[5] = 6;
 local_44[6] = 7;
 local_44[7] = 8;
 local_44[8] = 9;
 local_44[9] = 10;
 local_44[10] = 0xb;
 local_44[0xb] = 0xc;
 do {
 iVar2 = 0;
 piVar1 = piVar4;
 do {
 if (*piVar1 == param_1) {
 return;
 }
 iVar2 = iVar2 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 4);
 iVar3 = iVar3 + 1;
 piVar4 = piVar4 + 4;
 } while (iVar3 != 3);
 return;
}



/* Function: infinite_loop @ 00010d78 */

int infinite_loop(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 if (*param_1 == 1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *param_1 = 1;
 return 0x3e9;
}



/* Function: multi_return @ 00010db8 */

int multi_return(uint param_1)

{
 int iVar1;
 
 if ((int)param_1 < 0) {
 return -1;
 }
 iVar1 = param_1 * 2;
 if (iVar1 < 0x65) {
 if ((param_1 & 1) != 0) {
 iVar1 = param_1 + 1;
 }
 return iVar1;
 }
 return -2;
}



/* Function: conditional_return @ 00010de8 */

int conditional_return(int param_1)

{
 int iVar1;
 
 if (0 < param_1) {
 return param_1 << 1;
 }
 iVar1 = 0;
 if (param_1 != 0) {
 iVar1 = -param_1;
 }
 return iVar1;
}



/* Function: duffs_device @ 00010e00 */

uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
 undefined4 *puVar1;
 undefined4 *puVar2;
 undefined4 *puVar3;
 undefined4 *puVar4;
 int iVar5;
 
 if (0 < (int)param_3) {
 iVar5 = (int)(param_3 + 7) >> 3;
 puVar1 = param_2;
 puVar2 = param_2;
 puVar3 = param_1;
 puVar4 = param_1;
 switch(param_3 & 7) {
 case 1:
 while( true ) {
 iVar5 = iVar5 + -1;
 *param_1 = *param_2;
 if (iVar5 == 0) break;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
switchD_00010e24_default:
 puVar2 = param_2 + 1;
 puVar4 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010e24_caseD_7:
 *puVar4 = *puVar2;
 puVar1 = puVar2 + 2;
 puVar3 = puVar4 + 2;
 puVar4[1] = puVar2[1];
switchD_00010e24_caseD_5:
 puVar2 = puVar1 + 1;
 puVar4 = puVar3 + 1;
 *puVar3 = *puVar1;
switchD_00010e24_caseD_4:
 param_2 = puVar2 + 1;
 param_1 = puVar4 + 1;
 *puVar4 = *puVar2;
switchD_00010e24_caseD_3:
 puVar1 = param_2 + 1;
 puVar3 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010e24_caseD_2:
 param_2 = puVar1 + 1;
 param_1 = puVar3 + 1;
 *puVar3 = *puVar1;
 }
 break;
 case 2:
 goto switchD_00010e24_caseD_2;
 case 3:
 goto switchD_00010e24_caseD_3;
 case 4:
 goto switchD_00010e24_caseD_4;
 case 5:
 goto switchD_00010e24_caseD_5;
 case 6:
 puVar1 = param_2 + 1;
 puVar3 = param_1 + 1;
 *param_1 = *param_2;
 goto switchD_00010e24_caseD_5;
 case 7:
 goto switchD_00010e24_caseD_7;
 default:
 goto switchD_00010e24_default;
 }
 return param_3;
 }
 return 0xffffffff;
}



/* Function: loop_complex_cond @ 00010eb8 */

int loop_complex_cond(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 bool bVar5;
 
 if (param_1 < 1) {
 return param_1;
 }
 iVar4 = 0;
 iVar2 = 0;
 do {
 iVar4 = iVar4 + 2;
 param_1 = param_1 + -1;
 iVar3 = iVar2 + 1;
 bVar5 = SBORROW4(iVar3,9);
 iVar1 = iVar2 + -8;
 if (iVar3 < 10) {
 bVar5 = SBORROW4(iVar4,param_1);
 iVar1 = iVar4 - param_1;
 }
 iVar2 = iVar3;
 } while (iVar1 < 0 != bVar5);
 return iVar4 + param_1 + iVar3;
}



/* Function: loop_modify_var @ 00010eec */

int loop_modify_var(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = 0;
 if (0 < param_1) {
 iVar2 = 0;
 while (iVar3 = iVar2 + 1, iVar3 < param_1) {
 if (iVar3 < 6) {
 iVar2 = iVar3;
 }
 iVar1 = iVar1 + iVar3;
 if (5 < iVar3) {
 iVar2 = iVar2 + 3;
 }
 }
 return iVar1;
 }
 return 0;
}



/* Function: loop_external_state @ 00010f1c */

int loop_external_state(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 if (*param_1 != 0) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return 0x65;
}



/* Function: tail_recursion @ 00010f44 */

int tail_recursion(int param_1,int param_2)

{
 int iVar1;
 
 if (param_1 < 2) {
 return param_2;
 }
 do {
 iVar1 = param_1 + -1;
 param_2 = param_1 * param_2;
 param_1 = iVar1;
 } while (iVar1 != 1);
 return param_2;
}



/* Function: indirect_recursion_a @ 00010f6c */

uint indirect_recursion_a(uint param_1,int param_2)

{
 int iVar1;
 bool bVar2;
 
 if (param_2 < 1) {
 return param_1;
 }
 iVar1 = param_2 + -2;
 if ((param_1 & 1) == 0) goto LAB_00010fb0;
 do {
 if (param_2 == 1) {
 return param_1 * 3 + 1;
 }
 param_1 = param_1 * 3 + 2;
 while( true ) {
 bVar2 = iVar1 == 0;
 iVar1 = iVar1 + -2;
 param_2 = param_2 + -2;
 if (bVar2) {
 return param_1;
 }
 if ((param_1 & 1) != 0) break;
LAB_00010fb0:
 if (param_2 == 1) {
 return (int)param_1 / 2;
 }
 param_1 = (int)param_1 / 2 + 1;
 }
 } while( true );
}



/* Function: call_func_ptr @ 00010fd8 */

undefined4 call_func_ptr(code UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010fe0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 UNRECOVERED_JUMPTABLE(param_2);
 return 0;
}



/* Function: call_func_ptr_array @ 00010fe4 */

/* WARNING: Removing unreachable block (ram,0x00011074) */

undefined4 call_func_ptr_array(uint param_1,undefined4 param_2)

{
 undefined4 uVar1;
 code apcStack_18 [5];
 
 apcStack_18[3] = (code)0x0;
 apcStack_18[0] = double_value;
 apcStack_18[1] = triple_value;
 apcStack_18[2] = recursion_factorial;
 if (param_1 < 3) {
 /* WARNING: Could not recover jumptable at 0x0001104c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = apcStack_18[param_1](param_2);
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: call_virtual_func @ 00011080 */

int call_virtual_func(undefined4 param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 00011088 */

int process_with_callback(int param_1,int param_2,code param_3)

{
 int iVar1;
 int iVar2;
 undefined4 *puVar3;
 int iVar4;
 
 if (0 < param_2) {
 iVar2 = 0;
 iVar4 = 0;
 puVar3 = (undefined4 *)(param_1 + -4);
 do {
 puVar3 = puVar3 + 1;
 iVar1 = param_3(*puVar3);
 iVar2 = iVar2 + 1;
 iVar4 = iVar4 + iVar1;
 } while (param_2 != iVar2);
 return iVar4;
 }
 return 0;
}



/* Function: test_control_flow_l2 @ 000110d0 */

void test_control_flow_l2(void)

{
 undefined4 uVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int *piVar5;
 int local_68 [6];
 undefined4 uStack_50;
 undefined4 uStack_4c;
 undefined4 uStack_48;
 undefined4 local_44;
 undefined4 uStack_40;
 undefined4 uStack_3c;
 undefined4 uStack_38;
 undefined1 auStack_34 [32];
 int local_14;
 int *piVar6;
 
 local_14 = 0;
 puts(&DAT_00011d98);
 loop_multi_exit(7);
 loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",0);
 loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",0);
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x3e9);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",0x3e9);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_68[5] = 1;
 uStack_50 = 2;
 uStack_4c = 3;
 uStack_48 = 4;
 local_44 = 5;
 uStack_40 = 6;
 uStack_3c = 7;
 uStack_38 = 8;
 memset(auStack_34,0,0x20);
 duffs_device(auStack_34,local_68 + 5,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",8);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 iVar3 = 0;
 iVar2 = 0;
 while (iVar4 = iVar2 + 1, iVar4 < 10) {
 if (iVar4 < 6) {
 iVar2 = iVar4;
 }
 iVar3 = iVar3 + iVar4;
 if (5 < iVar4) {
 iVar2 = iVar2 + 3;
 }
 }
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar3);
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x65);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",0x65);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 call_func_ptr((code *)0x0,5);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 call_func_ptr_array(0,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 iVar2 = 0;
 local_68[0] = 1;
 local_68[1] = 2;
 local_68[2] = 3;
 local_68[3] = 4;
 local_68[4] = 5;
 piVar5 = local_68;
 do {
 piVar6 = piVar5 + 1;
 iVar2 = iVar2 + *piVar5 * 2;
 piVar5 = piVar6;
 } while (local_68 + 5 != piVar6);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar2);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: non_local_jump @ 00011380 */

int non_local_jump(int param_1)

{
 int iVar1;
 
 iVar1 = _setjmp((__jmp_buf_tag *)&jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(&jump_buffer,1);
 }
 if (100 < param_1) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(&jump_buffer,2);
 }
 param_1 = param_1 << 1;
 }
 else {
 param_1 = -1;
 }
 return param_1;
}



/* Function: cpp_exception @ 000113ec */

int cpp_exception(int param_1)

{
 if (param_1 < 0) {
 return -1;
 }
 if (param_1 < 0x65) {
 return param_1 << 1;
 }
 return -2;
}



/* Function: large_jump_table @ 00011414 */

/* WARNING: Removing unreachable block (ram,0x000114b8) */

undefined4 large_jump_table(uint param_1,undefined4 param_2,undefined4 param_3)

{
 undefined4 uVar1;
 code apcStack_3c [10];
 undefined4 local_14;
 
 local_14 = 0;
 apcStack_3c[0] = op_add;
 apcStack_3c[1] = op_sub;
 apcStack_3c[2] = op_mul;
 apcStack_3c[3] = op_div;
 apcStack_3c[4] = op_mod;
 apcStack_3c[5] = op_and;
 apcStack_3c[6] = op_or;
 apcStack_3c[7] = op_xor;
 apcStack_3c[8] = op_shl;
 apcStack_3c[9] = op_shr;
 if (param_1 < 10) {
 /* WARNING: Could not recover jumptable at 0x00011494. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = apcStack_3c[param_1](param_2,param_3);
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: conditional_func_ptr @ 000114c4 */

int conditional_func_ptr(int param_1,int param_2)

{
 int iVar1;
 code UNRECOVERED_JUMPTABLE;
 
 if (param_1 == 0) {
 return param_2 << 1;
 }
 UNRECOVERED_JUMPTABLE = triple_value;
 if (param_1 != 1) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 /* WARNING: Could not recover jumptable at 0x000114e0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = UNRECOVERED_JUMPTABLE();
 return iVar1;
}



/* Function: state_machine @ 000114f8 */

uint state_machine(int param_1,uint param_2)

{
 switch(param_2) {
 case 0:
 return (uint)(param_1 == 1);
 case 1:
 break;
 case 2:
 return param_2;
 case 3:
 if (param_1 == 0) {
 param_2 = 0;
 }
 return param_2;
 default:
 return 3;
 }
 if (param_1 == 2) {
 return 2;
 }
 if (param_1 == 99) {
 param_2 = 3;
 }
 return param_2;
}



/* Function: fsm_func_table @ 0001155c */

/* WARNING: Removing unreachable block (ram,0x000115e8) */

undefined4 fsm_func_table(undefined4 param_1,uint param_2)

{
 undefined4 uVar1;
 code apcStack_1c [4];
 undefined4 local_c;
 
 local_c = 0;
 apcStack_1c[0] = state_idle;
 apcStack_1c[1] = state_processing;
 apcStack_1c[2] = state_done;
 apcStack_1c[3] = state_error;
 if (param_2 < 4) {
 /* WARNING: Could not recover jumptable at 0x000115c4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = apcStack_1c[param_2](param_1);
 return uVar1;
 }
 return 3;
}



/* Function: computed_goto @ 000115f4 */

/* WARNING: Removing unreachable block (ram,0x00011678) */

void computed_goto(undefined4 param_1,uint param_2)

{
 undefined1 *apuStack_1c [4];
 undefined4 local_c;
 
 local_c = 0;
 apuStack_1c[0] = &DAT_00011668;
 apuStack_1c[1] = &DAT_00011660;
 apuStack_1c[2] = &DAT_00011658;
 apuStack_1c[3] = &DAT_00011634;
 if (3 < param_2) {
 return;
 }
 /* WARNING: Could not recover jumptable at 0x00011630. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)apuStack_1c[param_2])();
 return;
}



/* Function: obfuscated_cf @ 00011684 */

int obfuscated_cf(int param_1)

{
 return param_1 << 1;
}



/* Function: opaque_predicate @ 0001168c */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 00011694 */

int overlapped_code(uint param_1)

{
 int iVar1;
 
 if ((param_1 & 1) == 0) {
 iVar1 = (int)param_1 / 2;
 }
 else {
 iVar1 = param_1 * 3 + 1;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 000116ac */

void test_control_flow_l3(void)

{
 undefined4 uVar1;
 undefined4 local_1c;
 undefined4 uStack_18;
 undefined4 uStack_14;
 undefined4 uStack_10;
 int local_c;
 
 local_c = 0;
 puts(&DAT_00011f9c);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",10);
 non_local_jump(0xfffffffb);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",-1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 large_jump_table(0,5,10);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",15);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
 conditional_func_ptr(1,5);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",0);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",0);
 local_1c = 0;
 uStack_18 = 1;
 uStack_14 = 2;
 uStack_10 = 3;
 computed_goto(&local_1c,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",0);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 overlapped_code(5);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",16);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Function: __aeabi_idiv0 @ 00011a64 */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
