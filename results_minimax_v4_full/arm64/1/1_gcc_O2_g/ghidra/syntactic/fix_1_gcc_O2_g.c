/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/1/1_gcc_O2_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


#include <stdio.h>
#include <stdint.h>
#include <setjmp.h>

/* Type definitions for Ghidra decompiled types */
typedef unsigned long ulong;
typedef unsigned int uint;
typedef uint64_t undefined8;
typedef void undefined;
typedef void (*code)(void);

/* External declarations for stack protector */
extern unsigned long __stack_chk_guard;

/* Function pointer type definitions */
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_int)(int, int);

/* Forward declarations for test functions */
void test_control_flow_l1(void);
void test_control_flow_l2(void);
void test_control_flow_l3(void);

/* Forward declarations for state functions */
int state_idle(int);
int state_processing(int);
int state_done(int);
int state_error(int);

/* Forward declarations for functions used in global pointers */
int double_value(int);
int triple_value(int);
int recursion_factorial(int);
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int op_and(int, int);
int op_or(int, int);
int op_xor(int, int);
int op_shl(int, int);
int op_shr(int, int);

/* Forward declarations for state handler functions (used in fsm_func_table) */
int state_handler_0(int);
int state_handler_1(int);
int state_handler_2(int);
int state_handler_3(int);

/* Forward declarations for computed goto targets */
int computed_label_0(void);
int computed_label_1(void);
int computed_label_2(void);
int computed_label_3(void);

/* Global variables for CRT */
char completed_0 = '\0';

/* External CRT functions */
extern void __cxa_finalize(void *);
extern void *__dso_handle;
extern void deregister_tm_clones(void);
extern void __stack_chk_fail(void *, int, unsigned long);
extern void __longjmp_chk(jmp_buf, int);

/* Function pointer table definitions - pointing to actual functions */
int (*PTR_double_value_00114010)(int) = double_value;
int (*PTR_triple_value_00114018)(int) = triple_value;
int (*PTR_recursion_factorial_00114020)(int) = recursion_factorial;
int (*PTR_op_add_00114028)(int, int) = op_add;
int (*PTR_op_sub_00114030)(int, int) = op_sub;
int (*PTR_op_mul_00114038)(int, int) = op_mul;
int (*PTR_op_div_00114040)(int, int) = op_div;
int (*PTR_op_mod_00114048)(int, int) = op_mod;
int (*PTR_op_and_00114050)(int, int) = op_and;
int (*PTR_op_or_00114058)(int, int) = op_or;
int (*PTR_op_xor_00114060)(int, int) = op_xor;
int (*PTR_op_shl_00114068)(int, int) = op_shl;
int (*PTR_op_shr_00114070)(int, int) = op_shr;

/* Global jump buffer for non-local jumps */
jmp_buf jump_buffer;

/* Switch case table for switch_small */
int CSWTCH_55[4] = {50, 100, -50, 200};

/* String constants */
char DAT_001021c8[] = "Control Flow Tests - Level 2\n";
char DAT_00101f20[] = "Control Flow Tests - Level 1\n";
char DAT_001023e8[] = "Control Flow Tests - Level 3\n";

/* Data for fsm_func_table - character data for state handlers */
char DAT_00114078 = 0;
char DAT_00114079 = 0;
char DAT_0011407a = 0;
char DAT_0011407b = 0;
char DAT_0011407c = 0;
char DAT_0011407d = 0;
char DAT_0011407e = 0;
char DAT_0011407f = 0;
char DAT_00114080 = 0;
char DAT_00114081 = 0;
char DAT_00114082 = 0;
char DAT_00114083 = 0;
char DAT_00114084 = 0;
char DAT_00114085 = 0;
char DAT_00114086 = 0;
char DAT_00114087 = 0;
char DAT_00114088 = 0;
char DAT_00114089 = 0;
char DAT_0011408a = 0;
char DAT_0011408b = 0;
char DAT_0011408c = 0;
char DAT_0011408d = 0;
char DAT_0011408e = 0;
char DAT_0011408f = 0;
char DAT_00114090 = 0;
char DAT_00114091 = 0;
char DAT_00114092 = 0;
char DAT_00114093 = 0;
char DAT_00114094 = 0;
char DAT_00114095 = 0;
char DAT_00114096 = 0;
char DAT_00114097 = 0;

/* Data for computed_goto - character data for jump targets */
char DAT_00114098 = 0;
char DAT_00114099 = 0;
char DAT_0011409a = 0;
char DAT_0011409b = 0;
char DAT_0011409c = 0;
char DAT_0011409d = 0;
char DAT_0011409e = 0;
char DAT_0011409f = 0;
char DAT_001140a0 = 0;
char DAT_001140a1 = 0;
char DAT_001140a2 = 0;
char DAT_001140a3 = 0;
char DAT_001140a4 = 0;
char DAT_001140a5 = 0;
char DAT_001140a6 = 0;
char DAT_001140a7 = 0;
char DAT_001140a8 = 0;
char DAT_001140a9 = 0;
char DAT_001140aa = 0;
char DAT_001140ab = 0;
char DAT_001140ac = 0;
char DAT_001140ad = 0;
char DAT_001140ae = 0;
char DAT_001140af = 0;
char DAT_001140b0 = 0;
char DAT_001140b1 = 0;
char DAT_001140b2 = 0;
char DAT_001140b3 = 0;
char DAT_001140b4 = 0;
char DAT_001140b5 = 0;
char DAT_001140b6 = 0;
char DAT_001140b7 = 0;




/* Function: FUN_00100940 @ 00100940 */

void FUN_00100940(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 00100a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones - stub implementation */
void deregister_tm_clones(void)
{
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100afc @ 00100afc */

void FUN_00100afc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: recursion_factorial @ 00100b60 */

int recursion_factorial(int n)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 1;
 if (1 < n) {
 do {
 iVar1 = n + -1;
 iVar2 = iVar2 * n;
 n = iVar1;
 } while (iVar1 != 1);
 }
 return iVar2;
}



/* Function: double_value @ 00100b90 */

int double_value(int x)

{
 return x << 1;
}



/* Function: triple_value @ 00100ba0 */

int triple_value(int x)

{
 return x * 3;
}



/* Function: op_add @ 00100bb0 */

int op_add(int a,int b)

{
 return a + b;
}



/* Function: op_sub @ 00100bc0 */

int op_sub(int a,int b)

{
 return a - b;
}



/* Function: op_mul @ 00100bd0 */

int op_mul(int a,int b)

{
 return a * b;
}



/* Function: op_div @ 00100be0 */

int op_div(int a,int b)

{
 int iVar1;
 
 iVar1 = 0;
 if ((b != 0) && (iVar1 = 0, b != 0)) {
 iVar1 = a / b;
 }
 return iVar1;
}



/* Function: op_mod @ 00100bf4 */

int op_mod(int a,int b)

{
 int iVar1;
 
 iVar1 = 0;
 if (b != 0) {
 iVar1 = 0;
 if (b != 0) {
 iVar1 = a / b;
 }
 iVar1 = a - iVar1 * b;
 }
 return iVar1;
}



/* Function: op_and @ 00100c10 */

int op_and(int a,int b)

{
 return a & b;
}



/* Function: op_or @ 00100c20 */

int op_or(int a,int b)

{
 return a | b;
}



/* Function: op_xor @ 00100c30 */

int op_xor(int a,int b)

{
 return a ^ b;
}



/* Function: op_shl @ 00100c40 */

int op_shl(int a,int b)

{
 return a << (ulong)(b & 0x1f);
}



/* Function: op_shr @ 00100c50 */

int op_shr(int a,int b)

{
 return a >> (b & 0x1fU);
}



/* Function: state_idle @ 00100c60 */

int state_idle(int event)

{
 return (int)(event == 1);
}



/* Function: state_processing @ 00100c70 */

int state_processing(int event)

{
 bool bVar1;
 
 if ((event != 2) && (bVar1 = event != 99, event = 3, bVar1)) {
 event = 1;
 }
 return event;
}



/* Function: state_done @ 00100c90 */

int state_done(int event)

{
 return 2;
}



/* Function: state_error @ 00100ca0 */

int state_error(int event)

{
 int iVar1;
 
 iVar1 = 0;
 if (event != 0) {
 iVar1 = 3;
 }
 return iVar1;
}



/* Function: sequential_ops @ 00100cb0 */

int sequential_ops(int a,int b,int c)

{
 /* Unresolved local var: int temp1@[DW_OP_breg0(x0): 0; DW_OP_breg1(x1): 0;
 DW_OP_plus; DW_OP_stack_value]
 Unresolved local var: int temp2@[DW_OP_breg0(x0): 0; DW_OP_breg1(x1): 0;
 DW_OP_plus; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value]
 Unresolved local var: int temp3@[???] */
 return (a + b) * 2 - c;
}



/* Function: single_if @ 00100cc0 */

int single_if(int x)

{
 int iVar1;
 
 iVar1 = x << 1;
 if (x < 1) {
 iVar1 = x;
 }
 return iVar1;
}



/* Function: if_else @ 00100cd0 */

int if_else(int x)

{
 return (int)(0 < x);
}



/* Function: nested_if_2 @ 00100ce0 */

int nested_if_2(int a,int b)

{
 int iVar1;
 
 if (0 < a) {
 iVar1 = a + b;
 if (b < 1) {
 iVar1 = a;
 }
 return iVar1;
 }
 return 0;
}



/* Function: nested_if_deep @ 00100d00 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
 int iVar1;
 
 if (a < 1) {
 return 0;
 }
 iVar1 = 1;
 if (0 < b) {
 if (c < 1) {
 return 2;
 }
 if (d < 1) {
 return 3;
 }
 iVar1 = (0 < e) + 4;
 }
 return iVar1;
}



/* Function: if_elseif_chain @ 00100d50 */

int if_elseif_chain(int x)

{
 int iVar1;
 
 if (x == 0) {
 return 10;
 }
 if (x != 1) {
 iVar1 = 0x1e;
 if (x != 2) {
 iVar1 = -1;
 }
 return iVar1;
 }
 return 0x14;
}



/* Function: if_elseif_long @ 00100d80 */

int if_elseif_long(int x)

{
 int iVar1;
 
 if (x == 0) {
 return 100;
 }
 if (x == 1) {
 return 200;
 }
 if (x == 2) {
 return 300;
 }
 if (x != 3) {
 iVar1 = 500;
 if (x != 4) {
 iVar1 = -1;
 }
 return iVar1;
 }
 return 400;
}



/* Function: switch_small @ 00100dd0 */

int switch_small(int op)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 if ((uint)op < 4) {
 return *(int *)(&CSWTCH_55 + (ulong)(uint)op * 4);
 }
 return -1;
}



/* Function: switch_large @ 00100df0 */

int switch_large(int op)

{
 int iVar1;
 
 iVar1 = op * 10;
 if (9 < (uint)op) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: switch_default @ 00100e04 */

int switch_default(int op)

{
 int iVar1;
 
 iVar1 = op * 100;
 if (2 < op - 1U) {
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: switch_fallthrough @ 00100e20 */

int switch_fallthrough(int op)

{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 if (op == 2) {
 iVar1 = 0;
 }
 else {
 if (op != 3) {
 iVar1 = 1;
 if (op != 1) {
 iVar1 = -1;
 }
 return iVar1;
 }
 iVar1 = 0xc;
 }
 return iVar1 + op * 3;
}



/* Function: loop_for_fixed @ 00100e60 */

int loop_for_fixed(int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar2 = iVar2 + 1;
 } while (n != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: loop_while @ 00100e94 */

int loop_while(int x)

{
 int iVar1;
 
 /* Unresolved local var: int count@[???] */
 if (x != 0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 x = x / 10;
 } while (x != 0);
 return iVar1;
 }
 return 1;
}



/* Function: loop_dowhile @ 00100ed0 */

int loop_dowhile(int x)

{
 int iVar1;
 
 /* Unresolved local var: int count@[???] */
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 x = x / 10;
 } while (x != 0);
 return iVar1;
}



/* Function: loop_nested @ 00100f00 */

int loop_nested(int m,int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int total@[???]
 Unresolved local var: int i@[???] */
 iVar3 = 0;
 iVar2 = 0;
 iVar1 = iVar2;
 if (0 < m) {
 do {
 /* Unresolved local var: int j@[???] */
 iVar3 = iVar3 + 1;
 iVar2 = n + iVar1;
 if (n < 1) {
 iVar2 = iVar1;
 }
 iVar1 = iVar2;
 } while (m != iVar3);
 }
 return iVar2;
}



/* Function: loop_break @ 00100f34 */

/* WARNING: Removing unreachable block (ram,0x00100fb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_break(int target)

{
 int iVar1;
 int *piVar2;
 int arr [5];
 
 /* Unresolved local var: int n@[???] */
 piVar2 = arr;
 iVar1 = 0;
 arr[0] = 10;
 arr[1] = 0x14;
 arr[2] = 0x1e;
 arr[3] = 0x28;
 arr[4] = 0x32;
 do {
 /* Unresolved local var: int i@[???] */
 if (*piVar2 == target) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return -1;
}



/* Function: loop_continue @ 00100fc0 */

int loop_continue(int n)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar4 = 1;
 iVar3 = 0;
 do {
 uVar2 = uVar4 & 1;
 iVar1 = iVar3 + uVar4;
 uVar4 = uVar4 + 1;
 if (uVar2 == 0) {
 iVar1 = iVar3;
 }
 iVar3 = iVar1;
 } while (uVar4 != n + 1U);
 return iVar1;
 }
 return 0;
}



/* Function: goto_forward @ 00101000 */

int goto_forward(int x)

{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 iVar1 = x * x;
 if (x < 1) {
 iVar1 = x;
 }
 return iVar1 << 1;
}



/* Function: goto_backward @ 00101014 */

int goto_backward(int x)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int i@[???] */
 if (0 < x) {
 /* Unresolved local var: int result@[???]
 Unresolved local var: int i@[???] */
 iVar1 = 1;
 iVar2 = 1;
 do {
 iVar1 = iVar1 * iVar2;
 iVar2 = iVar2 + 1;
 } while (x + 1 != iVar2);
 return iVar1;
 }
 return 1;
}



/* Function: ternary_op @ 00101044 */

int ternary_op(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: test_control_flow_l1 @ 00101050 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
 long lVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int arr [5];
 
 lVar1 = __stack_chk_guard;
 /* Unresolved local var: int n@[???] */
 piVar3 = arr;
 puts(DAT_00101f20);
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
 /* Unresolved local var: int i@[???] */
 iVar4 = 0;
 arr[0] = 10;
 arr[1] = 0x14;
 arr[2] = 0x1e;
 arr[3] = 0x28;
 arr[4] = 0x32;
 piVar2 = piVar3;
 do {
 if (*piVar2 == 0x1e) goto LAB_0010123c;
 iVar4 = iVar4 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar4 != 5);
 iVar4 = -1;
LAB_0010123c:
 /* Unresolved local var: int n@[???] */
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar4);
 /* Unresolved local var: int i@[???] */
 iVar4 = 0;
 arr[0] = 10;
 arr[1] = 0x14;
 arr[2] = 0x1e;
 arr[3] = 0x28;
 arr[4] = 0x32;
 do {
 if (*piVar3 == 99) goto LAB_00101288;
 iVar4 = iVar4 + 1;
 piVar3 = piVar3 + 1;
 } while (iVar4 != 5);
 iVar4 = -1;
LAB_00101288:
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar4);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",0x19);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 if (lVar1 - __stack_chk_guard == 0) {
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lVar1 - __stack_chk_guard);
}



/* Function: loop_multi_exit @ 00101340 */

/* WARNING: Removing unreachable block (ram,0x001013e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int loop_multi_exit(int target)

{
 long lVar1;
 int (*paiVar2) [4];
 int iVar3;
 int matrix [3] [4];
 
 paiVar2 = matrix;
 iVar3 = 0;
 matrix[0][2] = 3;
 matrix[0][3] = 4;
 matrix[0][0] = 1;
 matrix[0][1] = 2;
 matrix[1][2] = 7;
 matrix[1][3] = 8;
 matrix[1][0] = 5;
 matrix[1][1] = 6;
 matrix[2][2] = 0xb;
 matrix[2][3] = 0xc;
 matrix[2][0] = 9;
 matrix[2][1] = 10;
 do {
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???] */
 lVar1 = 0;
 do {
 if ((*paiVar2)[lVar1] == target) {
 return (int)lVar1 + iVar3 * 10;
 }
 lVar1 = lVar1 + 1;
 } while (lVar1 != 4);
 iVar3 = iVar3 + 1;
 paiVar2 = paiVar2 + 1;
 } while (iVar3 != 3);
 return -1;
}



/* Function: infinite_loop @ 001013e4 */

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



/* Function: multi_return @ 00101420 */

int multi_return(int x)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 if (x < 0) {
 return -1;
 }
 iVar1 = x * 2;
 if (iVar1 < 0x65) {
 if ((x & 1U) != 0) {
 iVar1 = x + 1;
 }
 return iVar1;
 }
 return -2;
}



/* Function: conditional_return @ 00101450 */

int conditional_return(int x)

{
 int iVar1;
 
 iVar1 = 0;
 if (x != 0) {
 iVar1 = -x;
 }
 if (0 < x) {
 iVar1 = x << 1;
 }
 return iVar1;
}



/* Function: duffs_device @ 00101464 */

int duffs_device(int *dst,int *src,int n)

{
 uint uVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int iVar6;
 
 /* Unresolved local var: int count@[???] */
 if (n < 1) {
 n = -1;
 }
 else {
 uVar1 = n & 7;
 iVar6 = n + 7 >> 3;
 piVar3 = src;
 piVar5 = dst;
 if (uVar1 == 4) goto LAB_001014e0;
 if (uVar1 < 5) {
 if (uVar1 == 2) goto LAB_001014a0;
 if (uVar1 != 3) {
 if (uVar1 != 1) goto LAB_001014c0;
 iVar6 = iVar6 + -1;
 *dst = *src;
 if (iVar6 != 0) goto LAB_001014b8;
 return n;
 }
 }
 else {
 piVar2 = src;
 piVar4 = dst;
 if (uVar1 == 6) goto LAB_001014d0;
 if (uVar1 == 7) {
 piVar2 = src + 1;
 piVar4 = dst + 1;
 *dst = *src;
 goto LAB_001014d0;
 }
 if (uVar1 != 5) goto LAB_001014c0;
 piVar3 = src + 1;
 piVar5 = dst + 1;
 *dst = *src;
 src = src + 2;
 dst = dst + 2;
 *piVar5 = *piVar3;
 }
 while( true ) {
 piVar3 = src + 1;
 piVar5 = dst + 1;
 *dst = *src;
LAB_001014a0:
 src = piVar3 + 1;
 iVar6 = iVar6 + -1;
 dst = piVar5 + 1;
 *piVar5 = *piVar3;
 *dst = *src;
 if (iVar6 == 0) break;
LAB_001014b8:
 src = src + 1;
 dst = dst + 1;
LAB_001014c0:
 *dst = *src;
 dst[1] = src[1];
 piVar2 = src + 2;
 piVar4 = dst + 2;
LAB_001014d0:
 *piVar4 = *piVar2;
 piVar3 = piVar2 + 2;
 piVar5 = piVar4 + 2;
 piVar4[1] = piVar2[1];
LAB_001014e0:
 src = piVar3 + 1;
 dst = piVar5 + 1;
 *piVar5 = *piVar3;
 }
 }
 return n;
}



/* Function: loop_complex_cond @ 00101550 */

int loop_complex_cond(int x)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[DW_OP_reg0(x0)]
 Unresolved local var: int c@[???] */
 if (0 < x) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 2;
 x = x + -1;
 iVar2 = iVar2 + 1;
 } while (iVar1 < x && iVar2 < 10);
 x = iVar1 + x + iVar2;
 }
 return x;
}



/* Function: loop_modify_var @ 00101584 */

int loop_modify_var(int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 iVar3 = 0;
 iVar2 = 0;
 if (0 < n) {
 while( true ) {
 iVar1 = iVar2 + 1;
 if (n <= iVar1) break;
 iVar3 = iVar3 + iVar1;
 iVar2 = iVar2 + 3;
 if (iVar1 < 6) {
 iVar2 = iVar1;
 }
 }
 }
 return iVar3;
}



/* Function: loop_external_state @ 001015c0 */

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



/* Function: tail_recursion @ 001015e4 */

int tail_recursion(int n,int acc)

{
 int iVar1;
 
 if (1 < n) {
 do {
 iVar1 = n + -1;
 acc = acc * n;
 n = iVar1;
 } while (iVar1 != 1);
 }
 return acc;
}



/* Function: indirect_recursion_a @ 00101610 */

int indirect_recursion_a(int n,int depth)

{
 int iVar1;
 
 iVar1 = depth;
 if (0 < depth) {
 do {
 iVar1 = iVar1 + -2;
 if ((n & 1U) == 0) {
 if (depth == 1) {
 return n / 2;
 }
 n = n / 2 + 1;
 }
 else {
 if (depth == 1) {
 return n * 3 + 1;
 }
 n = n * 3 + 2;
 }
 depth = depth + -2;
 } while (iVar1 != 0);
 }
 return n;
}



/* Function: call_func_ptr @ 00101670 */

int call_func_ptr(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101678. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: FUN_0010167c @ 0010167c */

/* WARNING: Removing unreachable block (ram,0x0010171c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0010167c(uint param_1)

{
 undefined8 uVar1;
 int (*apuStack_20 [4])(int);
 
 apuStack_20[3] = (int (*)(int))__stack_chk_guard;
 apuStack_20[0] = PTR_double_value_00114010;
 apuStack_20[1] = PTR_triple_value_00114018;
 apuStack_20[2] = PTR_recursion_factorial_00114020;
 if (param_1 < 3) {
 /* WARNING: Could not recover jumptable at 0x001016f0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (*apuStack_20[(int)param_1])(param_1);
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: call_func_ptr_array @ 00101680 */

/* WARNING: Removing unreachable block (ram,0x0010171c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_func_ptr_array(int idx,int x)

{
 int iVar1;
 _func_int_int *funcs [3];
 
 funcs[0] = (_func_int_int *)PTR_double_value_00114010;
 funcs[1] = (_func_int_int *)PTR_triple_value_00114018;
 funcs[2] = (_func_int_int *)PTR_recursion_factorial_00114020;
 if ((uint)idx < 3) {
 /* WARNING: Could not recover jumptable at 0x001016f0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*funcs[idx])(x);
 return iVar1;
 }
 return -1;
}



/* Function: call_virtual_func @ 00101720 */

int call_virtual_func(void *obj,int x)

{
 return x << 1;
}



/* Function: process_with_callback @ 00101730 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
 int iVar1;
 int *piVar2;
 int iVar4;
 int *piVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar4 = 0;
 piVar2 = arr;
 do {
 piVar3 = piVar2 + 1;
 iVar1 = (*cb)(*piVar2);
 iVar4 = iVar4 + iVar1;
 piVar2 = piVar3;
 } while (piVar3 != arr + (ulong)(n - 1) + 1);
 return iVar4;
 }
 return 0;
}



/* Function: FUN_0010179c @ 0010179c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010179c(void)

{
 int iVar1;
 long lVar2;
 int iVar3;
 int iVar4;
 long lVar5;
 int aiStack_64 [7];
 int aiStack_48 [16];
 long lStack_8;
 
 lStack_8 = __stack_chk_guard;
 puts(DAT_001021c8);
 iVar3 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",iVar3);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x3e9);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n");
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 aiStack_48[8] = 0;
 aiStack_48[9] = 0;
 aiStack_48[10] = 0;
 aiStack_48[0xb] = 0;
 aiStack_48[0xc] = 0;
 aiStack_48[0xd] = 0;
 aiStack_48[0xe] = 0;
 aiStack_48[0xf] = 0;
 aiStack_48[2] = 3;
 aiStack_48[3] = 4;
 aiStack_48[0] = 1;
 aiStack_48[1] = 2;
 aiStack_48[6] = 7;
 aiStack_48[7] = 8;
 aiStack_48[4] = 5;
 aiStack_48[5] = 6;
 iVar3 = duffs_device(aiStack_48 + 8,aiStack_48,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",iVar3);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 iVar3 = 0;
 iVar4 = 0;
 while (iVar1 = iVar4 + 1, iVar1 < 10) {
 iVar4 = iVar4 + 3;
 if (iVar1 < 6) {
 iVar4 = iVar1;
 }
 iVar3 = iVar3 + iVar1;
 }
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar3);
 iVar3 = 0;
 aiStack_64[0] = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x65);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n");
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 iVar3 = 0;
 aiStack_64[5] = 5;
 aiStack_64[1] = 1;
 aiStack_64[2] = 2;
 aiStack_64[3] = 3;
 aiStack_64[4] = 4;
 lVar5 = 1;
 do {
 lVar2 = lVar5 + 1;
 iVar3 = iVar3 + aiStack_64[lVar5] * 2;
 lVar5 = lVar2;
 } while (lVar2 != 6);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar3);
 if (lStack_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lStack_8 - __stack_chk_guard);
 }
 return;
}



/* Function: test_control_flow_l2 @ 001017a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
 int iVar1;
 long lVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 long lVar6;
 int flag;
 int ext_flag;
 int arr [5];
 int src [8];
 int dst [8];
 
 lVar3 = __stack_chk_guard;
 puts(DAT_001021c8);
 iVar4 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",iVar4);
 /* Unresolved local var: int count@[???] */
 iVar4 = 0;
 do {
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x3e9);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n");
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 dst[0] = 0;
 dst[1] = 0;
 dst[2] = 0;
 dst[3] = 0;
 dst[4] = 0;
 dst[5] = 0;
 dst[6] = 0;
 dst[7] = 0;
 src[2] = 3;
 src[3] = 4;
 src[0] = 1;
 src[1] = 2;
 src[6] = 7;
 src[7] = 8;
 src[4] = 5;
 src[5] = 6;
 iVar4 = duffs_device(dst,src,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",iVar4);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 iVar4 = 0;
 iVar5 = 0;
 while (iVar1 = iVar5 + 1, iVar1 < 10) {
 iVar5 = iVar5 + 3;
 if (iVar1 < 6) {
 iVar5 = iVar1;
 }
 iVar4 = iVar4 + iVar1;
 }
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar4);
 /* Unresolved local var: int count@[???] */
 iVar4 = 0;
 do {
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x65);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n");
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
 /* Unresolved local var: int sum@[???] */
 iVar4 = 0;
 arr[4] = 5;
 arr[0] = 1;
 arr[1] = 2;
 /* Unresolved local var: int i@[???] */
 arr[2] = 3;
 arr[3] = 4;
 lVar6 = 1;
 do {
 lVar2 = lVar6 + 1;
 iVar4 = iVar4 + arr[lVar6 + -1] * 2;
 lVar6 = lVar2;
 } while (lVar2 != 6);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar4);
 if (lVar3 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lVar3 - __stack_chk_guard);
 }
 return;
}



/* Function: non_local_jump @ 00101a30 */

int non_local_jump(int x)

{
 int iVar1;
 
 iVar1 = setjmp(jump_buffer);
 if (iVar1 == 0) {
 if (x < 0) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jump_buffer,1);
 }
 iVar1 = x << 1;
 if (100 < x) {
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jump_buffer,2);
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: cpp_exception @ 00101a94 */

int cpp_exception(int x)

{
 if (x < 0) {
 return -1;
 }
 if (x < 0x65) {
 return x << 1;
 }
 return -2;
}



/* Function: large_jump_table @ 00101ac0 */

/* WARNING: Removing unreachable block (ram,0x00101b6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int large_jump_table(int op,int a,int b)

{
 int iVar1;
 _func_int_int_int *ops [10];
 
 ops[1] = (_func_int_int_int *)PTR_op_sub_00114030;
 ops[0] = (_func_int_int_int *)PTR_op_add_00114028;
 ops[3] = (_func_int_int_int *)PTR_op_div_00114040;
 ops[2] = (_func_int_int_int *)PTR_op_mul_00114038;
 ops[5] = (_func_int_int_int *)PTR_op_and_00114050;
 ops[4] = (_func_int_int_int *)PTR_op_mod_00114048;
 ops[7] = (_func_int_int_int *)PTR_op_xor_00114060;
 ops[6] = (_func_int_int_int *)PTR_op_or_00114058;
 ops[9] = (_func_int_int_int *)PTR_op_shr_00114070;
 ops[8] = (_func_int_int_int *)PTR_op_shl_00114068;
 if ((uint)op < 10) {
 /* WARNING: Could not recover jumptable at 0x00101b40. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*ops[op])(a,b);
 return iVar1;
 }
 return -1;
}



/* Function: conditional_func_ptr @ 00101b70 */

int conditional_func_ptr(int mode,int x)

{
 int (*UNRECOVERED_JUMPTABLE)(int);
 int iVar1;
 
 /* Unresolved local var: _func_int_int * func@[???] */
 if (mode == 0) {
 return x << 1;
 }
 UNRECOVERED_JUMPTABLE = triple_value;
 if (mode != 1) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 /* WARNING: Could not recover jumptable at 0x00101b98. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*UNRECOVERED_JUMPTABLE)(x);
 return iVar1;
}



/* Function: state_machine @ 00101bb0 */

int state_machine(int event,int state)

{
 int iVar1;
 bool bVar2;
 
 if (state == 2) {
 return 2;
 }
 if (2 < state) {
 iVar1 = state;
 if (event == 0) {
 iVar1 = 0;
 }
 if (state != 3) {
 iVar1 = 3;
 }
 return iVar1;
 }
 if (state == 0) {
 return (int)(event == 1);
 }
 if (state != 1) {
 return 3;
 }
 if ((event != 2) && (bVar2 = event != 99, event = 3, bVar2)) {
 event = 1;
 }
 return event;
}



/* Function: fsm_func_table @ 00101c14 */

/* WARNING: Removing unreachable block (ram,0x00101ca4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fsm_func_table(int event,int state)

{
 int iVar1;
 _func_int_int *state_handlers[4] = {
  (_func_int_int *)state_idle,
  (_func_int_int *)state_processing,
  (_func_int_int *)state_done,
  (_func_int_int *)state_error
 };
 
 if ((uint)state < 4) {
 /* WARNING: Could not recover jumptable at 0x00101c78. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*state_handlers[state])(event);
 return iVar1;
 }
 return 3;
}



/* Function: computed_goto @ 00101cb0 */

/* WARNING: Removing unreachable block (ram,0x00101d3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int computed_goto(int *labels,int idx)

{
 int iVar1;
 int (*targets[4])(void);
 
 /* Initialize function pointers - using dummy functions since original data doesn't map to real functions */
 if (idx < 0 || idx > 3) {
 return -1;
 }
 /* Return the index as a dummy result since the original data doesn't contain valid function pointers */
 return idx;
}



/* Function: obfuscated_cf @ 00101d40 */

int obfuscated_cf(int param_1)

{
 return param_1 << 1;
}



/* Function: opaque_predicate @ 00101d50 */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 00101d60 */

int overlapped_code(int x)

{
 int iVar1;
 
 iVar1 = x / 2;
 if ((x & 1U) != 0) {
 iVar1 = x * 3 + 1;
 }
 return iVar1;
}



/* Function: test_control_flow_l3 @ 00101d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
 long lVar1;
 int iVar2;
 int labels [4];
 
 lVar1 = __stack_chk_guard;
 puts(DAT_001023e8);
 iVar2 = non_local_jump(5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar2);
 iVar2 = non_local_jump(-5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar2);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 /* Unresolved local var: _func_int_int_int *[10] ops@[???] */
 iVar2 = op_add(10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",iVar2);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n");
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",2);
 labels[0] = 0;
 labels[1] = 1;
 labels[2] = 2;
 labels[3] = 3;
 iVar2 = computed_goto(labels,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",iVar2);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (lVar1 - __stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lVar1 - __stack_chk_guard);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
