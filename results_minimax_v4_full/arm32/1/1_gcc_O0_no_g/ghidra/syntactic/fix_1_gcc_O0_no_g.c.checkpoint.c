#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <stdint.h>

/* Type definitions for Ghidra decompiled code */
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef long undefined8;
typedef unsigned char undefined1;
typedef unsigned char undefined;
typedef int (*code)(int, int);
typedef int bool;
#define true 1
#define false 0

/* Ghidra macro for concatenating two 32-bit values into a 64-bit return */
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))

/* String constant definitions for external data symbols */
extern void __stack_chk_fail();
extern int __aeabi_idiv(int a, int b);
extern void __aeabi_idivmod(int a, int b);
extern void raise(int sig);
extern int _setjmp(jmp_buf);
extern void longjmp(jmp_buf, int);

jmp_buf jump_buffer;

/* String constant definitions */
char DAT_00012aa8[] = "Test Control Flow - Level 1\n";
char DAT_00012d6c[] = "Test Control Flow - Level 2\n";
char DAT_00012fec[] = "Test Control Flow - Level 3\n";

/* Function pointers for computed_goto */
char DAT_00012468;
char DAT_00012470;
char DAT_00012478;
char DAT_00012480;

/* Function prototypes */
int sequential_ops(int param_1,int param_2,int param_3);
int single_if(int param_1);
bool if_else(int param_1);
int nested_if_2(int param_1,int param_2);
undefined4 nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5);
undefined4 if_elseif_chain(int param_1);
undefined4 if_elseif_long(int param_1);
undefined4 switch_small(undefined4 param_1);
undefined4 switch_large(undefined4 param_1);
undefined4 switch_default(int param_1);
int switch_fallthrough(int param_1);
int loop_for_fixed(int param_1);
undefined8 loop_while(int param_1,int param_2);
undefined8 loop_dowhile(int param_1);
int loop_nested(int param_1,int param_2);
int loop_break(int param_1);
int loop_continue(int param_1);
int goto_forward(int param_1);
int goto_backward(int param_1);
int ternary_op(int param_1,int param_2);
int test_control_flow_l1(void);
int loop_multi_exit(int param_1);
int infinite_loop(int *param_1);
int multi_return(uint param_1);
int conditional_return(int param_1);
uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3);
int loop_complex_cond(int param_1);
int loop_modify_var(int param_1);
int loop_external_state(int *param_1);
int recursion_factorial(int param_1);
int tail_recursion(int param_1,int param_2);
uint indirect_recursion_a(uint param_1,int param_2);
int indirect_recursion_b(int param_1,int param_2);
undefined4 call_func_ptr(code *param_1,undefined4 param_2);
int double_value(int param_1);
int triple_value(int param_1);
code * call_func_ptr_array(int param_1,undefined4 param_2);
int call_virtual_func(undefined4 param_1,int param_2);
int process_with_callback(int param_1,int param_2,code *param_3);
void test_control_flow_l2(void);
int non_local_jump(int param_1);
int cpp_exception(int param_1);
int op_add(int param_1,int param_2);
int op_sub(int param_1,int param_2);
int op_mul(int param_1,int param_2);
undefined4 op_div(undefined4 param_1,int param_2);
undefined4 op_mod(undefined4 param_1,int param_2);
uint op_and(uint param_1,uint param_2);
uint op_or(uint param_1,uint param_2);
uint op_xor(uint param_1,uint param_2);
int op_shl(int param_1,uint param_2);
int op_shr(int param_1,uint param_2);
code * large_jump_table(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 conditional_func_ptr(int param_1,undefined4 param_2);
undefined4 state_machine(int param_1,undefined4 param_2);
bool state_idle(int param_1);
undefined4 state_processing(int param_1);
undefined4 state_done(void);
undefined4 state_error(int param_1);
code * fsm_func_table(undefined4 param_1,int param_2);
undefined4 computed_goto(undefined4 param_1,int param_2);
int obfuscated_cf(int param_1);
int opaque_predicate(int param_1);
int overlapped_code(uint param_1);
void test_control_flow_l3(void);
undefined4 main(void);





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: sequential_ops @ 000105b4 */

int sequential_ops(int param_1,int param_2,int param_3)

{
 return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 0001060c */

int single_if(int param_1)

{
 undefined4 local_c;
 
 local_c = param_1;
 if (0 < param_1) {
 local_c = param_1 << 1;
 }
 return local_c;
}



/* Function: if_else @ 00010648 */

bool if_else(int param_1)

{
 return 0 < param_1;
}



/* Function: nested_if_2 @ 00010680 */

int nested_if_2(int param_1,int param_2)

{
 if (param_1 < 1) {
 param_1 = 0;
 }
 else if (0 < param_2) {
 param_1 = param_1 + param_2;
 }
 return param_1;
}



/* Function: nested_if_deep @ 000106d8 */

undefined4 nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 uVar1;
 
 if (param_1 < 1) {
 uVar1 = 0;
 }
 else if (param_2 < 1) {
 uVar1 = 1;
 }
 else if (param_3 < 1) {
 uVar1 = 2;
 }
 else if (param_4 < 1) {
 uVar1 = 3;
 }
 else if (param_5 < 1) {
 uVar1 = 4;
 }
 else {
 uVar1 = 5;
 }
 return uVar1;
}



/* Function: if_elseif_chain @ 0001076c */

undefined4 if_elseif_chain(int param_1)

{
 undefined4 uVar1;
 
 if (param_1 == 0) {
 uVar1 = 10;
 }
 else if (param_1 == 1) {
 uVar1 = 0x14;
 }
 else if (param_1 == 2) {
 uVar1 = 0x1e;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: if_elseif_long @ 000107cc */

undefined4 if_elseif_long(int param_1)

{
 undefined4 uVar1;
 
 if (param_1 == 0) {
 uVar1 = 100;
 }
 else if (param_1 == 1) {
 uVar1 = 200;
 }
 else if (param_1 == 2) {
 uVar1 = 300;
 }
 else if (param_1 == 3) {
 uVar1 = 400;
 }
 else if (param_1 == 4) {
 uVar1 = 500;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: switch_small @ 00010854 */

undefined4 switch_small(undefined4 param_1)

{
 undefined4 uVar1;
 
 switch(param_1) {
 case 0:
 uVar1 = 0xf;
 break;
 case 1:
 uVar1 = 5;
 break;
 case 2:
 uVar1 = 0x32;
 break;
 case 3:
 uVar1 = __aeabi_idiv(10,5);
 break;
 default:
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: switch_large @ 000108e8 */

undefined4 switch_large(undefined4 param_1)

{
 undefined4 uVar1;
 
 switch(param_1) {
 case 0:
 uVar1 = 0;
 break;
 case 1:
 uVar1 = 10;
 break;
 case 2:
 uVar1 = 0x14;
 break;
 case 3:
 uVar1 = 0x1e;
 break;
 case 4:
 uVar1 = 0x28;
 break;
 case 5:
 uVar1 = 0x32;
 break;
 case 6:
 uVar1 = 0x3c;
 break;
 case 7:
 uVar1 = 0x46;
 break;
 case 8:
 uVar1 = 0x50;
 break;
 case 9:
 uVar1 = 0x5a;
 break;
 default:
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: switch_default @ 00010994 */

undefined4 switch_default(int param_1)

{
 if (param_1 == 3) {
 return 300;
 }
 if (param_1 < 4) {
 if (param_1 == 1) {
 return 100;
 }
 if (param_1 == 2) {
 return 200;
 }
 }
 return 0;
}



/* Function: switch_fallthrough @ 00010a04 */

int switch_fallthrough(int param_1)

{
 undefined4 local_c;
 
 local_c = 0;
 if (param_1 == 3) {
 local_c = 0xc;
LAB_00010a64:
 local_c = local_c + param_1 * 2;
LAB_00010a78:
 local_c = local_c + param_1;
 }
 else {
 if (param_1 < 4) {
 if (param_1 == 1) goto LAB_00010a78;
 if (param_1 == 2) goto LAB_00010a64;
 }
 local_c = -1;
 }
 return local_c;
}



/* Function: loop_for_fixed @ 00010aa8 */

int loop_for_fixed(int param_1)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_10 = local_10 + local_c;
 }
 return local_10;
}



/* Function: loop_while @ 00010b0c */

undefined8 loop_while(int param_1,int param_2)

{
 int local_14;
 int local_c;
 
 local_c = 0;
 for (local_14 = param_1; local_14 != 0; local_14 = local_14 / 10) {
 param_2 = local_14 * 0x66666667;
 local_c = local_c + 1;
 }
 if (local_c < 1) {
 local_c = 1;
 }
 return CONCAT44(param_2,local_c);
}



/* Function: loop_dowhile @ 00010b80 */

undefined8 loop_dowhile(int param_1)

{
 int iVar1;
 undefined4 local_14;
 undefined4 local_c;
 
 local_c = 0;
 local_14 = param_1;
 do {
 iVar1 = local_14 * 0x66666667;
 local_14 = local_14 / 10;
 local_c = local_c + 1;
 } while (local_14 != 0);
 return CONCAT44(iVar1,local_c);
}



/* Function: loop_nested @ 00010be4 */

int loop_nested(int param_1,int param_2)

{
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_14 = 0;
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_14 = local_14 + 1;
 }
 }
 return local_14;
}



/* Function: loop_break @ 00010c70 */

/* WARNING: Removing unreachable block (ram,0x00010d20) */

int loop_break(int param_1)

{
 int local_28;
 int local_20 [6];
 
 local_20[5] = 0;
 local_20[0] = 10;
 local_20[1] = 0x14;
 local_20[2] = 0x1e;
 local_20[3] = 0x28;
 local_20[4] = 0x32;
 local_28 = 0;
 while( true ) {
 if (4 < local_28) {
 return -1;
 }
 if (param_1 == local_20[local_28]) break;
 local_28 = local_28 + 1;
 }
 return local_28;
}



/* Function: loop_continue @ 00010d38 */

int loop_continue(int param_1)

{
 int local_10;
 uint local_c;
 
 local_10 = 0;
 for (local_c = 1; (int)local_c <= param_1; local_c = local_c + 1) {
 if ((local_c & 1) != 0) {
 local_10 = local_10 + local_c;
 }
 }
 return local_10;
}



/* Function: goto_forward @ 00010db4 */

int goto_forward(int param_1)

{
 int local_c;
 
 local_c = param_1;
 if (0 < param_1) {
 local_c = param_1 * param_1;
 }
 return local_c << 1;
}



/* Function: goto_backward @ 00010e10 */

int goto_backward(int param_1)

{
 undefined4 local_10;
 undefined4 local_c;
 
 if (param_1 < 1) {
 local_10 = 1;
 }
 else {
 local_10 = 1;
 for (local_c = 1; local_c <= param_1; local_c = local_c + 1) {
 local_10 = local_c * local_10;
 }
 }
 return local_10;
}



/* Function: ternary_op @ 00010e8c */

int ternary_op(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: test_control_flow_l1 @ 00010ec4 */

int test_control_flow_l1(void)

{
 undefined4 uVar1;
 int iVar2;
 
 puts(&DAT_00012aa8);
 uVar1 = sequential_ops(5,7,3);
 printf("CF-L1-01 (sequential_ops): %d\n",uVar1);
 uVar1 = single_if(10);
 printf("CF-L1-02 (single_if): %d\n",uVar1);
 uVar1 = single_if(0xfffffffb);
 printf("CF-L1-02 (single_if): %d\n",uVar1);
 uVar1 = if_else(5);
 printf("CF-L1-03 (if_else): %d\n",uVar1);
 uVar1 = if_else(0xfffffffd);
 printf("CF-L1-03 (if_else): %d\n",uVar1);
 uVar1 = nested_if_2(10,5);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
 uVar1 = nested_if_2(10,0xfffffffb);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
 uVar1 = nested_if_2(0xfffffff6,5);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
 uVar1 = nested_if_deep(1,1,1,1,1);
 printf("CF-L1-05 (nested_if_deep): %d\n",uVar1);
 uVar1 = if_elseif_chain(1);
 printf("CF-L1-06 (if_elseif_chain): %d\n",uVar1);
 uVar1 = if_elseif_long(3);
 printf("CF-L1-07 (if_elseif_long): %d\n",uVar1);
 uVar1 = switch_small(2);
 printf("CF-L1-08 (switch_small): %d\n",uVar1);
 uVar1 = switch_large(7);
 printf("CF-L1-09 (switch_large): %d\n",uVar1);
 uVar1 = switch_default(5);
 printf("CF-L1-10 (switch_default): %d\n",uVar1);
 uVar1 = switch_fallthrough(3);
 printf("CF-L1-11 (switch_fallthrough): %d\n",uVar1);
 uVar1 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n",uVar1);
 uVar1 = loop_while(0x3039,0);
 printf("CF-L1-13 (loop_while): %d\n",uVar1);
 uVar1 = loop_dowhile(0x2694);
 printf("CF-L1-14 (loop_dowhile): %d\n",uVar1);
 uVar1 = loop_nested(3,4);
 printf("CF-L1-15 (loop_nested): %d\n",uVar1);
 uVar1 = loop_break(0x1e);
 printf("CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_break(99);
 printf("CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_continue(10);
 printf("CF-L1-17 (loop_continue): %d\n",uVar1);
 uVar1 = goto_forward(5);
 printf("CF-L1-18 (goto_forward): %d\n",uVar1);
 uVar1 = goto_forward(0xfffffffd);
 printf("CF-L1-18 (goto_forward): %d\n",uVar1);
 uVar1 = goto_backward(5);
 printf("CF-L1-19 (goto_backward): %d\n",uVar1);
 uVar1 = ternary_op(10,5);
 printf("CF-L1-20 (ternary_op): %d\n",uVar1);
 uVar1 = ternary_op(3,8);
 iVar2 = printf("CF-L1-20 (ternary_op): %d\n",uVar1);
 return iVar2;
}



/* Function: loop_multi_exit @ 000111fc */

/* WARNING: Removing unreachable block (ram,0x000112f4) */

int loop_multi_exit(int param_1)

{
 int local_44;
 int local_40;
 int local_3c [13];
 
 local_3c[0xc] = 0;
 local_3c[0] = 1;
 local_3c[1] = 2;
 local_3c[2] = 3;
 local_3c[3] = 4;
 local_3c[4] = 5;
 local_3c[5] = 6;
 local_3c[6] = 7;
 local_3c[7] = 8;
 local_3c[8] = 9;
 local_3c[9] = 10;
 local_3c[10] = 0xb;
 local_3c[0xb] = 0xc;
 local_44 = 0;
 do {
 if (2 < local_44) {
 return -1;
 }
 for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
 if (param_1 == local_3c[local_44 * 4 + local_40]) {
 return local_44 * 10 + local_40;
 }
 }
 local_44 = local_44 + 1;
 } while( true );
}



/* Function: infinite_loop @ 0001130c */

int infinite_loop(int *param_1)

{
 int local_c;
 
 local_c = 0;
 do {
 if (*param_1 == 1) {
 return local_c;
 }
 local_c = local_c + 1;
 } while (local_c < 0x3e9);
 *param_1 = 1;
 return local_c;
}



/* Function: multi_return @ 00011374 */

int multi_return(uint param_1)

{
 int iVar1;
 
 if ((int)param_1 < 0) {
 iVar1 = -1;
 }
 else {
 iVar1 = param_1 << 1;
 if (iVar1 < 0x65) {
 if ((param_1 & 1) != 0) {
 iVar1 = param_1 + 1;
 }
 }
 else {
 iVar1 = -2;
 }
 }
 return iVar1;
}



/* Function: conditional_return @ 000113e8 */

int conditional_return(int param_1)

{
 if (param_1 < 1) {
 if (param_1 < 0) {
 param_1 = -param_1;
 }
 else {
 param_1 = 0;
 }
 }
 else {
 param_1 = param_1 << 1;
 }
 return param_1;
}



/* Function: duffs_device @ 0001143c */

uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
 uint uVar1;
 undefined4 *local_18;
 undefined4 *local_14;
 int local_c;
 
 if ((int)param_3 < 1) {
 param_3 = 0xffffffff;
 }
 else {
 local_c = param_3 + 0xe;
 if (-1 < (int)(param_3 + 7)) {
 local_c = param_3 + 7;
 }
 local_c = local_c >> 3;
 uVar1 = param_3 & 7;
 if (-1 < (int)-param_3) {
 uVar1 = -(-param_3 & 7);
 }
 local_18 = param_2;
 local_14 = param_1;
 switch(uVar1) {
 case 0:
 do {
 *local_14 = *local_18;
 local_18 = local_18 + 1;
 local_14 = local_14 + 1;
switchD_000114a0_caseD_7:
 *local_14 = *local_18;
 local_18 = local_18 + 1;
 local_14 = local_14 + 1;
switchD_000114a0_caseD_6:
 *local_14 = *local_18;
 local_18 = local_18 + 1;
 local_14 = local_14 + 1;
switchD_000114a0_caseD_5:
 *local_14 = *local_18;
 local_18 = local_18 + 1;
 local_14 = local_14 + 1;
switchD_000114a0_caseD_4:
 *local_14 = *local_18;
 local_18 = local_18 + 1;
 local_14 = local_14 + 1;
switchD_000114a0_caseD_3:
 *local_14 = *local_18;
 local_18 = local_18 + 1;
 local_14 = local_14 + 1;
switchD_000114a0_caseD_2:
 *local_14 = *local_18;
 local_18 = local_18 + 1;
 local_14 = local_14 + 1;
switchD_000114a0_caseD_1:
 *local_14 = *local_18;
 local_c = local_c + -1;
 local_18 = local_18 + 1;
 local_14 = local_14 + 1;
 } while (0 < local_c);
 break;
 case 1:
 goto switchD_000114a0_caseD_1;
 case 2:
 goto switchD_000114a0_caseD_2;
 case 3:
 goto switchD_000114a0_caseD_3;
 case 4:
 goto switchD_000114a0_caseD_4;
 case 5:
 goto switchD_000114a0_caseD_5;
 case 6:
 goto switchD_000114a0_caseD_6;
 case 7:
 goto switchD_000114a0_caseD_7;
 }
 }
 return param_3;
}



/* Function: loop_complex_cond @ 000115f8 */

int loop_complex_cond(int param_1)

{
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_14 = 0;
 local_c = 0;
 for (local_10 = param_1; ((local_14 < local_10 && (local_c < 10)) && (0 < local_10));
 local_10 = local_10 + -1) {
 local_14 = local_14 + 2;
 local_c = local_c + 1;
 }
 return local_14 + local_10 + local_c;
}



/* Function: loop_modify_var @ 00011694 */

int loop_modify_var(int param_1)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_10 = local_10 + local_c;
 if (5 < local_c) {
 local_c = local_c + 2;
 }
 }
 return local_10;
}



/* Function: loop_external_state @ 00011710 */

int loop_external_state(int *param_1)

{
 int local_c;
 
 local_c = 0;
 do {
 if (*param_1 != 0) {
 return local_c;
 }
 local_c = local_c + 1;
 } while (local_c < 0x65);
 return local_c;
}



/* Function: recursion_factorial @ 00011770 */

int recursion_factorial(int param_1)

{
 int iVar1;
 
 if (param_1 < 2) {
 iVar1 = 1;
 }
 else {
 iVar1 = recursion_factorial(param_1 + -1);
 iVar1 = iVar1 * param_1;
 }
 return iVar1;
}



/* Function: tail_recursion @ 000117bc */

int tail_recursion(int param_1,int param_2)

{
 if (1 < param_1) {
 param_2 = tail_recursion(param_1 + -1,param_2 * param_1);
 }
 return param_2;
}



/* Function: indirect_recursion_a @ 00011810 */

uint indirect_recursion_a(uint param_1,int param_2)

{
 if (0 < param_2) {
 if ((param_1 & 1) == 0) {
 param_1 = indirect_recursion_b((int)param_1 / 2,param_2 + -1);
 }
 else {
 param_1 = indirect_recursion_b(param_1 * 3 + 1,param_2 + -1);
 }
 }
 return param_1;
}



/* Function: indirect_recursion_b @ 000118b0 */

int indirect_recursion_b(int param_1,int param_2)

{
 if (0 < param_2) {
 param_1 = indirect_recursion_a(param_1 + 1,param_2 + -1);
 }
 return param_1;
}



/* Function: call_func_ptr @ 00011904 */

undefined4 call_func_ptr(code *param_1,undefined4 param_2)

{
 undefined4 uVar1;
 
 uVar1 = (*param_1)(param_2,0);
 return uVar1;
}



/* Function: double_value @ 00011934 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: triple_value @ 0001195c */

int triple_value(int param_1)

{
 return param_1 * 3;
}



/* Function: call_func_ptr_array @ 0001198c */

code * call_func_ptr_array(int param_1,undefined4 param_2)

{
 code *pcVar1;
 code *pcVar2;
 code *apcStack_18 [3];
 int local_c;
 
 local_c = 0;
 pcVar1 = double_value;
 apcStack_18[0] = double_value;
 apcStack_18[1] = triple_value;
 apcStack_18[2] = recursion_factorial;
 if ((param_1 < 0) || (2 < param_1)) {
 pcVar2 = (code *)0xffffffff;
 }
 else {
 pcVar1 = (code *)(*apcStack_18[param_1])(param_2,0);
 pcVar2 = pcVar1;
 }
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(pcVar1,local_c,0);
 }
 return pcVar2;
}



/* Function: call_virtual_func @ 00011a30 */

int call_virtual_func(undefined4 param_1,int param_2)

{
 return param_2 << 1;
}



/* Function: process_with_callback @ 00011a5c */

int process_with_callback(int param_1,int param_2,code *param_3)

{
 int iVar1;
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 iVar1 = (*param_3)(*(undefined4 *)(param_1 + local_c * 4),0);
 local_10 = local_10 + iVar1;
 }
 return local_10;
}



/* Function: test_control_flow_l2 @ 00011ae4 */

void test_control_flow_l2(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 local_68;
 undefined4 local_64;
 undefined4 local_60;
 undefined4 uStack_5c;
 undefined4 uStack_58;
 undefined4 uStack_54;
 undefined4 local_50;
 undefined4 local_4c;
 undefined4 uStack_48;
 undefined4 uStack_44;
 undefined4 uStack_40;
 undefined4 local_3c;
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined1 auStack_2c [32];
 int local_c;
 
 local_c = 0;
 puts(&DAT_00012d6c);
 uVar1 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n",uVar1);
 local_68 = 0;
 uVar1 = infinite_loop(&local_68);
 printf("CF-L2-02 (infinite_loop): %d\n",uVar1);
 uVar1 = multi_return(0xfffffffb);
 printf("CF-L2-03 (multi_return): %d\n",uVar1);
 uVar1 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n",uVar1);
 uVar1 = multi_return(3);
 printf("CF-L2-03 (multi_return): %d\n",uVar1);
 uVar1 = conditional_return(5);
 printf("CF-L2-04 (conditional_return): %d\n",uVar1);
 uVar1 = conditional_return(0xfffffffb);
 printf("CF-L2-04 (conditional_return): %d\n",uVar1);
 local_4c = 1;
 uStack_48 = 2;
 uStack_44 = 3;
 uStack_40 = 4;
 local_3c = 5;
 uStack_38 = 6;
 uStack_34 = 7;
 uStack_30 = 8;
 memset(auStack_2c,0,0x20);
 uVar1 = duffs_device(auStack_2c,&local_4c,8);
 printf("CF-L2-05 (duffs_device): %d\n",uVar1);
 uVar1 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n",uVar1);
 uVar1 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n",uVar1);
 local_64 = 0;
 uVar1 = loop_external_state(&local_64);
 printf("CF-L2-08 (loop_external_state): %d\n",uVar1);
 uVar1 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",uVar1);
 uVar1 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",uVar1);
 uVar1 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",uVar1);
 uVar1 = call_func_ptr(double_value,5);
 printf("CF-L2-12 (call_func_ptr): %d\n",uVar1);
 uVar1 = call_func_ptr_array(0,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 uVar1 = call_func_ptr_array(2,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 local_60 = 1;
 uStack_5c = 2;
 uStack_58 = 3;
 uStack_54 = 4;
 local_50 = 5;
 uVar1 = process_with_callback(&local_60,5,double_value);
 iVar2 = printf("CF-L2-15 (process_with_callback): %d\n",uVar1);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2);
 }
 return;
}



/* Function: non_local_jump @ 00011dbc */

int non_local_jump(int param_1)

{
 int iVar1;
 
 iVar1 = _setjmp(jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,1);
 }
 if (100 < param_1) {
 /* WARNING: Subroutine does not return */
 longjmp(jump_buffer,2);
 }
 param_1 = param_1 << 1;
 }
 else {
 param_1 = -1;
 }
 return param_1;
}



/* Function: cpp_exception @ 00011e30 */

int cpp_exception(int param_1)

{
 if (param_1 < 0) {
 param_1 = -1;
 }
 else if (param_1 < 0x65) {
 param_1 = param_1 << 1;
 }
 else {
 param_1 = -2;
 }
 return param_1;
}



/* Function: op_add @ 00011e80 */

int op_add(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: op_sub @ 00011eb0 */

int op_sub(int param_1,int param_2)

{
 return param_1 - param_2;
}



/* Function: op_mul @ 00011ee0 */

int op_mul(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: op_div @ 00011f10 */

undefined4 op_div(undefined4 param_1,int param_2)

{
 undefined4 uVar1;
 
 if (param_2 == 0) {
 uVar1 = 0;
 }
 else {
 uVar1 = __aeabi_idiv(param_1,param_2);
 }
 return uVar1;
}



/* Function: op_mod @ 00011f54 */

undefined4 op_mod(undefined4 param_1,int param_2)

{
 undefined4 extraout_r1;
 undefined4 uVar1;
 
 if (param_2 == 0) {
 uVar1 = 0;
 }
 else {
 __aeabi_idivmod(param_1,param_2);
 uVar1 = extraout_r1;
 }
 return uVar1;
}



/* Function: op_and @ 00011f9c */

uint op_and(uint param_1,uint param_2)

{
 return param_2 & param_1;
}



/* Function: op_or @ 00011fcc */

uint op_or(uint param_1,uint param_2)

{
 return param_1 | param_2;
}



/* Function: op_xor @ 00011ffc */

uint op_xor(uint param_1,uint param_2)

{
 return param_2 ^ param_1;
}



/* Function: op_shl @ 0001202c */

int op_shl(int param_1,uint param_2)

{
 return param_1 << (param_2 & 0xff);
}



/* Function: op_shr @ 0001205c */

int op_shr(int param_1,uint param_2)

{
 return param_1 >> (param_2 & 0xff);
}



/* Function: large_jump_table @ 0001208c */

code * large_jump_table(int param_1,undefined4 param_2,undefined4 param_3)

{
 code *pcVar1;
 code *pcVar2;
 code *apcStack_34 [4];
 code *pcStack_24;
 code *pcStack_20;
 code *pcStack_1c;
 code *pcStack_18;
 code *pcStack_14;
 code *pcStack_10;
 int local_c;
 
 local_c = 0;
 apcStack_34[0] = op_add;
 apcStack_34[1] = op_sub;
 apcStack_34[2] = op_mul;
 apcStack_34[3] = op_div;
 pcStack_24 = op_mod;
 pcStack_20 = op_and;
 pcStack_1c = op_or;
 pcStack_18 = op_xor;
 pcVar1 = op_shl;
 pcStack_14 = op_shl;
 pcStack_10 = op_shr;
 if ((param_1 < 0) || (9 < param_1)) {
 pcVar2 = (code *)0xffffffff;
 }
 else {
 pcVar1 = (code *)(*apcStack_34[param_1])(param_2,param_3);
 pcVar2 = pcVar1;
 }
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(pcVar1,local_c,0);
 }
 return pcVar2;
}



/* Function: conditional_func_ptr @ 0001214c */

undefined4 conditional_func_ptr(int param_1,undefined4 param_2)

{
 undefined4 uVar1;
 code *local_c;
 
 if (param_1 == 0) {
 local_c = double_value;
 }
 else if (param_1 == 1) {
 local_c = triple_value;
 }
 else {
 local_c = recursion_factorial;
 }
 uVar1 = (*local_c)(param_2, 0);
 return uVar1;
}



/* Function: state_machine @ 000121c0 */

undefined4 state_machine(int param_1,undefined4 param_2)

{
 undefined4 uVar1;
 
 switch(param_2) {
 case 0:
 if (param_1 == 1) {
 uVar1 = 1;
 }
 else {
 uVar1 = 0;
 }
 break;
 case 1:
 if (param_1 == 2) {
 uVar1 = 2;
 }
 else if (param_1 == 99) {
 uVar1 = 3;
 }
 else {
 uVar1 = 1;
 }
 break;
 case 2:
 uVar1 = 2;
 break;
 case 3:
 if (param_1 == 0) {
 uVar1 = 0;
 }
 else {
 uVar1 = 3;
 }
 break;
 default:
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: state_idle @ 00012278 */

bool state_idle(int param_1)

{
 return param_1 == 1;
}



/* Function: state_processing @ 000122ac */

undefined4 state_processing(int param_1)

{
 undefined4 uVar1;
 
 if (param_1 == 2) {
 uVar1 = 2;
 }
 else if (param_1 == 99) {
 uVar1 = 3;
 }
 else {
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: state_done @ 000122f8 */

undefined4 state_done(void)

{
 return 2;
}



/* Function: state_error @ 0001231c */

undefined4 state_error(int param_1)

{
 undefined4 uVar1;
 
 if (param_1 == 0) {
 uVar1 = 0;
 }
 else {
 uVar1 = 3;
 }
 return uVar1;
}



/* Function: fsm_func_table @ 00012354 */

code * fsm_func_table(undefined4 param_1,int param_2)

{
 code *pcVar1;
 code *pcVar2;
 code *apcStack_1c [4];
 int local_c;
 
 local_c = 0;
 pcVar1 = state_idle;
 apcStack_1c[0] = state_idle;
 apcStack_1c[1] = state_processing;
 apcStack_1c[2] = state_done;
 apcStack_1c[3] = state_error;
 if ((param_2 < 0) || (3 < param_2)) {
 pcVar2 = (code *)0x3;
 }
 else {
 pcVar1 = (code *)(*apcStack_1c[param_2])(param_1, 0);
 pcVar2 = pcVar1;
 }
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(pcVar1,local_c,0);
 }
 return pcVar2;
}



/* Function: computed_goto @ 000123f8 */

/* WARNING: Removing unreachable block (ram,0x0001249c) */

undefined4 computed_goto(undefined4 param_1,int param_2)

{
 undefined4 uVar1;
 undefined *apuStack_1c [4];
 undefined4 local_c;
 
 local_c = 0;
 apuStack_1c[0] = &DAT_00012468;
 apuStack_1c[1] = &DAT_00012470;
 apuStack_1c[2] = &DAT_00012478;
 apuStack_1c[3] = &DAT_00012480;
 if ((-1 < param_2) && (param_2 < 4)) {
 /* WARNING: Could not recover jumptable at 0x00012464. Too many branches */
 /* WARNING: Treating indirect jump as call */
 uVar1 = (*(code *)apuStack_1c[param_2])(param_1, 0);
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: obfuscated_cf @ 000124b4 */

int obfuscated_cf(int param_1)

{
 undefined4 local_c;
 
 local_c = param_1;
 if (param_1 * param_1 < -1) {
 local_c = param_1 * 2 + 1;
 }
 return local_c << 1;
}



/* Function: opaque_predicate @ 00012514 */

/* WARNING: Removing unreachable block (ram,0x00012544) */

int opaque_predicate(int param_1)

{
 return param_1 << 1;
}



/* Function: overlapped_code @ 00012564 */

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



/* Function: test_control_flow_l3 @ 000125bc */

void test_control_flow_l3(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 local_1c;
 undefined4 uStack_18;
 undefined4 uStack_14;
 undefined4 uStack_10;
 int local_c;
 
 local_c = 0;
 puts(&DAT_00012fec);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n",uVar1);
 uVar1 = cpp_exception(0xfffffffb);
 printf("CF-L3-02 (cpp_exception): %d\n",uVar1);
 uVar1 = large_jump_table(0,10,5);
 printf("CF-L3-03 (large_jump_table): %d\n",uVar1);
 uVar1 = conditional_func_ptr(0,5);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",uVar1);
 uVar1 = state_machine(1,0);
 printf("CF-L3-05 (state_machine): %d\n",uVar1);
 uVar1 = fsm_func_table(2,1);
 printf("CF-L3-06 (fsm_func_table): %d\n",uVar1);
 local_1c = 0;
 uStack_18 = 1;
 uStack_14 = 2;
 uStack_10 = 3;
 uVar1 = computed_goto(&local_1c,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar1);
 uVar1 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",uVar1);
 uVar1 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",uVar1);
 uVar1 = overlapped_code(5);
 iVar2 = printf("CF-L3-10 (overlapped_code): %d\n",uVar1);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2);
 }
 return;
}



/* Function: main @ 00012788 */

undefined4 main(void)

{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Function: __aeabi_idiv0 @ 000129e8 */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 77 */
