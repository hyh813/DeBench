// Angr Decompilation of 1_gcc_Os_no_g
// Platform: ARMEL

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>

/* CRT stub function _init removed by preprocessor */

// ARM helper function stubs
unsigned int __glibc___stack_chk_guard = 0;

unsigned int Clz(unsigned int v)
{
 if (v == 0) return 32;
 unsigned int count = 0;
 while (!(v & 0x80000000)) {
  v <<= 1;
  count++;
 }
 return count;
}

unsigned int armg_calculate_condition(unsigned int cond, unsigned int cc_dep1, unsigned int cc_dep2, unsigned int cc_ndep)
{
 return 1;
}

unsigned int armg_calculate_flag_c(unsigned int cc_op, unsigned int cc_dep1, unsigned int cc_dep2, unsigned int cc_ndep)
{
 return 0;
}

unsigned int armg_calculate_flag_v(unsigned int cc_op, unsigned int cc_dep1, unsigned int cc_dep2, unsigned int cc_ndep)
{
 return 0;
}



// Function: sub_10454 at 0x10454
extern unsigned int g_23008;

int sub_10454()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
}


// Function: test_control_flow_l2 at 0x10fc4
extern unsigned int __glibc___stack_chk_guard;
extern char g_11c2d;

unsigned int test_control_flow_l2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);

// Function: main at 0x104e0
unsigned int main()
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 unsigned int v4; // r2
 unsigned int v5; // r3
 unsigned int v6; // r0
 char v0; // [bp-0x8]
 char v1; // [bp-0x4]

 v2 = test_control_flow_l1();
 v6 = test_control_flow_l2(v2, v3, v4, v5, *((int *)&v0), *((int *)&v1));
 test_control_flow_l3(v6, v3, v4, v5);
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10530 at 0x10530
void sub_10530()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: recursion_factorial at 0x105f0
unsigned int recursion_factorial(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = 1;
 while (a0 > 1)
 {
 v0 *= a0;
 a0 -= 1;
 }
 return v0;
}


// Function: double_value at 0x1060c
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x10614
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: op_add at 0x1061c
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: op_sub at 0x10624
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x1062c
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: op_div at 0x10634
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (!a1)
 return a1;
 v1 = v2;
 v0 = v3;
 v4 = __aeabi_idiv();
 return __aeabi_idiv();
}


// Function: op_mod at 0x10650
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r1
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (!a1)
 return a1;
 v1 = v2;
 v0 = v3;
 __aeabi_idivmod();
 return v4;
}


// Function: op_and at 0x10670
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: op_or at 0x10678
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: op_xor at 0x10680
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: op_shl at 0x10688
unsigned int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31) & a1 - 32 >> 31;
}


// Function: op_shr at 0x10690
unsigned int op_shr(unsigned int a0, char a1)
{
 return (a1 < 32 ? a0 >> a1 : a0 >> 31);
}


// Function: state_idle at 0x10698
unsigned int state_idle(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = a0 - 1;
 return (!v0 ? 32 : Clz(v0)) >> 5;
}


// Function: state_processing at 0x106a8
unsigned int state_processing(unsigned int a0)
{
 if (a0 != 2)
 goto LABEL_106b0;
 return a0;
LABEL_106b0:
 if (a0 != 99)
 {
 if (!armg_calculate_condition(2, a0, 99, 0))
 return 1;
 }
 else
 {
 if (!armg_calculate_condition(2, a0, 99, 0))
 return 99;
 }
 return 3;
}


// Function: state_done at 0x106c0
unsigned int state_done()
{
 return 2;
}


// Function: state_error at 0x106c8
unsigned int state_error(unsigned int a0)
{
 return (a0 ? 3 : 0);
}


// Function: sequential_ops at 0x106d4
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a0 + a1) * 2 - a2;
}


// Function: single_if at 0x106e0
unsigned int single_if(unsigned int a0)
{
 if (0 >= a0)
 return a0;
 return a0 * 2;
}


// Function: if_else at 0x106ec
unsigned int if_else(unsigned int a0)
{
 unsigned int v1; // r0

 if (a0 <= 0)
 {
 v1 = 0;
 if (!armg_calculate_condition(194, a0, 0, 0))
 return v1;
 }
 else if (!armg_calculate_condition(194, v1, 0, 0))
 {
 return a0;
 }
 return 1;
}


// Function: nested_if_2 at 0x106fc
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
 if (a0 <= 0)
 {
 return 0;
 }
 else if (0 < a1)
 {
 return a0 + a1;
 }
 else
 {
 return a0;
 }
}


// Function: nested_if_deep at 0x10718
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]

 if (a0 <= 0)
 {
 return 0;
 }
 else if (a1 <= 0)
 {
 return 1;
 }
 else if (a2 <= 0)
 {
 return 2;
 }
 else if (a3 > 0)
 {
 if (0 < *((int *)&v0))
 {
 if (!armg_calculate_condition(210, *((int *)&v0), 0, 0))
 return 5;
 }
 else
 {
 if (!armg_calculate_condition(210, *((int *)&v0), 0, 0))
 return a0;
 }
 return 4;
 }
 else
 {
 return 3;
 }
}


// Function: if_elseif_chain at 0x1076c
unsigned int if_elseif_chain(unsigned int a0)
{
 unsigned int v1; // r0

 if (!a0)
 {
 return 10;
 }
 else if (a0 != 1)
 {
 if (a0 == 2)
 {
 v1 = 30;
 if (!armg_calculate_condition(18, a0, 2, 0))
 return v1;
 }
 else if (!armg_calculate_condition(18, v1, 2, 0))
 {
 return a0;
 }
 return 4294967295;
 }
 else
 {
 return 20;
 }
}


// Function: if_elseif_long at 0x1079c
unsigned int if_elseif_long(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v1; // r0

 if (a0 <= 4)
 {
 a3 = 100;
 if (!armg_calculate_condition(146, a0, 4, 0))
 goto LABEL_107a6;
LABEL_107a5:
 v1 = a3 + a3 * a0;
 if (!armg_calculate_condition(130, a0, 4, 0))
 return v1;
 }
 else
 {
 if (armg_calculate_condition(146, a0, 4, 0))
 goto LABEL_107a5;
LABEL_107a6:
 if (!armg_calculate_condition(130, v1, 4, 0))
 return a0;
 }
 return 4294967295;
}


// Function: switch_small at 0x107b0
extern char CSWTCH_56;

unsigned int switch_small(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 if (3 >= a0)
 return *((char *)(73604 + a0));
 return 4294967295;
}


// Function: switch_large at 0x107c8
unsigned int switch_large(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v1; // r0

 if (a0 <= 9)
 {
 a3 = 10;
 if (!armg_calculate_condition(146, a0, 9, 0))
 goto LABEL_107d2;
LABEL_107d1:
 v1 = a3 * a0;
 if (!armg_calculate_condition(130, a0, 9, 0))
 return v1;
 }
 else
 {
 if (armg_calculate_condition(146, a0, 9, 0))
 goto LABEL_107d1;
LABEL_107d2:
 if (!armg_calculate_condition(130, v1, 9, 0))
 return a0;
 }
 return 4294967295;
}


// Function: switch_default at 0x107dc
unsigned int switch_default(unsigned int a0)
{
 unsigned int v0; // r3
 unsigned int v2; // r3

 v0 = a0 - 1;
 if (v0 <= 2)
 {
 v2 = 100;
 if (!armg_calculate_condition(146, v0, 2, 0))
 goto LABEL_107ea;
LABEL_107e9:
 if (!armg_calculate_condition(130, v0, 2, 0))
 return v2 * a0;
 }
 else
 {
 v2 = v0;
 if (armg_calculate_condition(146, v2, 2, 0))
 goto LABEL_107e9;
LABEL_107ea:
 if (!armg_calculate_condition(130, v0, 2, 0))
 return a0;
 }
 return 0;
}


// Function: switch_fallthrough at 0x107f4
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int v0; // r3
 unsigned int v1; // r3

 if (a0 != 2)
 {
 if (a0 != 3)
 {
 if (a0 != 1)
 return 4294967295;
 v0 = 0;
 }
 else
 {
 v1 = 12;
 v0 = v1 + a0 * 2;
 }
 return v0 + a0;
 }
 v1 = 0;
 v0 = v1 + a0 * 2;
 return v0 + a0;
}


// Function: loop_for_fixed at 0x10834
unsigned int loop_for_fixed(unsigned int a0)
{
 unsigned int v0; // r3
 unsigned int v1; // r0

 v0 = 0;
 v1 = 0;
 while (v0 < a0)
 {
 v1 += v0;
 v0 += 1;
 }
 return v1;
}


// Function: loop_while at 0x10854
unsigned int loop_while(unsigned int a0)
{
 unsigned int i; // r3
 unsigned int v1; // r0

 for (i = 0; a0; i += 1)
 {
 a0 = (a0 * 1717986919 >> 34) - (a0 >> 31);
 }
 if (1 <= i)
 {
 v1 = i;
 if (!armg_calculate_condition(178, v1, 1, 0))
 return v1;
 }
 else
 {
 v1 = 0;
 if (!armg_calculate_condition(178, i, 1, 0))
 return v1;
 }
 return 1;
}


// Function: loop_dowhile at 0x1088c
unsigned int loop_dowhile(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int v2; // r2
 unsigned int i; // r3
 unsigned int v4; // r0

 v0 = 0;
 do
 {
 a0 = (a0 * 1717986919 >> 34) - (a0 >> 31);
 v4 = v0 + 1;
 v0 = v4;
 } while (v2 >> 2 != i);
 return v1 + 1;
}


// Function: loop_nested at 0x108b4
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int v1; // r0

 v0 = 0;
 v1 = 0;
 while (v0 < a0)
 {
 v1 += a1 & ~(a1 >> 31);
 v0 += 1;
 }
 return v1;
}


// Function: loop_break at 0x108d8
extern unsigned int __glibc___stack_chk_guard;

unsigned int loop_break(unsigned int i)
{
 unsigned int v6; // r0
 char *v7; // r3
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v5 = __glibc___stack_chk_guard;
 v0 = 10;
 v1 = 20;
 v2 = 30;
 v3 = 40;
 v6 = 0;
 v4 = 50;
 v7 = (char *)&v0;
 while (*(v7) != i)
 {
 v7 += 1;
 if (v6 + 1 == 5)
 {
 if ((v5 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967295;
 }
 }
 if (!(v5 ^ __glibc___stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: loop_continue at 0x1095c
unsigned int loop_continue(unsigned int a0)
{
 unsigned int v0; // r3
 unsigned int v1; // r0

 v0 = 1;
 v1 = 0;
 while (true)
 {
 if (a0 >= v0)
 goto LABEL_10970;
 return v1;
LABEL_10970:
 if (((char)v0 & 1))
 v1 += v0;
 v0 += 1;
 }
}


// Function: goto_forward at 0x10980
unsigned int goto_forward(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r3

 if (0 < a0)
 {
 v0 = a0;
 if (!armg_calculate_condition(194, v0, 0, 0))
 goto LABEL_1098a;
LABEL_10989:
 a0 *= v0;
 }
 else
 {
 v0 = a3;
 if (armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_10989;
LABEL_1098a:
 ;
 }
 return a0 * 2;
}


// Function: goto_backward at 0x10994
unsigned int goto_backward(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int i; // r3
 unsigned int v2; // r3
 unsigned int v3; // r0
 unsigned int v4; // r0

 v0 = 1;
 if (a0 > 0)
 goto LABEL_109a0;
 return 1;
LABEL_109a0:
 i = 1;
 do
 {
 v2 = i;
 v4 = v2 * v0;
 v0 = v4;
 i = v2 + 1;
 } while (i <= a0);
 return v2 * v3;
}


// Function: ternary_op at 0x109b8
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 > a1)
 return a0;
 return a1;
}


// Function: test_control_flow_l1 at 0x109c4
extern char g_119c0;

int test_control_flow_l1()
{
 unsigned int v7; // r0

 puts(0x119c0);
 __printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", 4294967291);
 __printf_chk(1, "CF-L1-03 (if_else): %d\n", 1);
 __printf_chk(1, "CF-L1-03 (if_else): %d\n", 0);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 15);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 10);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 0);
 __printf_chk(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
 __printf_chk(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
 __printf_chk(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
 __printf_chk(1, "CF-L1-08 (switch_small): %d\n", 50);
 __printf_chk(1, "CF-L1-09 (switch_large): %d\n", 70);
 __printf_chk(1, "CF-L1-10 (switch_default): %d\n", 0);
 __printf_chk(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
 __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10));
 __printf_chk(1, "CF-L1-13 (loop_while): %d\n", loop_while(12345));
 __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876));
 __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4));
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", loop_break(30));
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", loop_break(99));
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", loop_continue(10));
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 v7 = __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
 return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x10c34
extern unsigned int __glibc___stack_chk_guard;

unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned int v13; // r2
 char *v14; // r1
 unsigned int v15; // r3
 char *v16; // r0
 unsigned int result; // [bp-0x3c]
 unsigned int v1; // [bp-0x38]
 unsigned int v2; // [bp-0x34]
 unsigned int v3; // [bp-0x30]
 unsigned int v4; // [bp-0x2c]
 unsigned int v5; // [bp-0x28]
 unsigned int v6; // [bp-0x24]
 unsigned int v7; // [bp-0x20]
 unsigned int v8; // [bp-0x1c]
 unsigned int v9; // [bp-0x18]
 unsigned int v10; // [bp-0x14]
 unsigned int v11; // [bp-0x10]
 unsigned int v12; // [bp-0xc]

 v12 = __glibc___stack_chk_guard;
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 6;
 v6 = 7;
 v7 = 8;
 v8 = 9;
 v9 = 10;
 v10 = 11;
 v11 = 12;
 v13 = 0;
 v14 = (char *)&result;
 while (true)
 {
 v15 = 0;
 v16 = v14;
 do
 {
 if (*(v16) == a0)
 {
 if ((v12 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v15 + 10 * v13;
 }
 } while ((v15 += 1, v16 += 4, v15 != 4));
 v13 += 1;
 v14 += 4;
 if (v13 == 3)
 {
 if ((v12 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967295;
 }
 }
}


// Function: infinite_loop at 0x10ce4
unsigned int infinite_loop(unsigned int ptr)
{
 unsigned int v0; // r0

 v0 = 0;
 do
 {
 if (*((int *)ptr) != 1)
 {
 return v0;
 }
 return v0;
 } while ((v0 += 1, v0 != 1001));
 *((unsigned int *)ptr) = 1;
 return v0;
}


// Function: multi_return at 0x10d18
unsigned int multi_return(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (100 < a0 * 2)
 {
 return 4294967294;
 }
 else if (((char)a0 & 1))
 {
 return a0 + 1;
 }
 else
 {
 return a0 * 2;
 }
}


// Function: conditional_return at 0x10d48
unsigned int conditional_return(unsigned int a0)
{
 if (a0 > 0)
 {
 return a0 * 2;
 }
 else if (armg_calculate_condition(18, a0, 0, 0))
 {
 return -(a0);
 }
 else
 {
 return a0;
 }
}


// Function: duffs_device at 0x10d60
unsigned int duffs_device(unsigned int *a0, unsigned int *iter, unsigned int a2)
{
 unsigned int *cur; // r3

 cur = a0;
 switch (a2)
 {
 case 0:
 break;
 default:
 return 4294967295;
 }
}


// Function: loop_complex_cond at 0x10e00
int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // r3
 unsigned int v5; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v4; // cc_ndep
 unsigned int v1; // r1
 unsigned int v2; // r2

 v0 = 0;
 while (true)
 {
 v1 = a0 - v0;
 v2 = v0 * 2;
 if (v0 <= 9)
 {
 v5 = (armg_calculate_condition(210, v5, v3, v4) ? v2 : v5);
 v3 = (armg_calculate_condition(210, v5, v3, v4) ? v1 : v3);
 v4 = (armg_calculate_condition(210, v5, v3, v4) ? 0 : v4);
 if (!((char)armg_calculate_condition(178, v5, v3, v4)))
 break;
 }
 else
 {
 v5 = (armg_calculate_condition(210, v5, v3, v4) ? v2 : v5);
 v3 = (armg_calculate_condition(210, v5, v3, v4) ? v1 : v3);
 v4 = (armg_calculate_condition(210, v5, v3, v4) ? 0 : v4);
 if (!((char)armg_calculate_condition(178, v5, v3, v4)))
 break;
 }
 v0 += 1;
 }
 return v2 + v1 + v0;
}


// Function: loop_modify_var at 0x10e2c
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int cur; // r3
 unsigned int v1; // r0

 cur = 0;
 v1 = 0;
 while (true)
 {
 if (a0 > cur)
 goto LABEL_10e40;
 return v1;
LABEL_10e40:
 v1 += cur;
 if (5 < cur)
 cur += 2;
 cur += 1;
 }
}


// Function: loop_external_state at 0x10e54
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // r0

 v0 = 0;
 do
 {
 if (!*(a0))
 {
 return v0;
 }
 return v0;
 } while ((v0 += 1, v0 != 101));
 return 101;
}


// Function: tail_recursion at 0x10e78
unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
 while (true)
 {
 if (a0 > 1)
 goto LABEL_10e88;
 return a1;
LABEL_10e88:
 a1 *= a0;
 a0 -= 1;
 }
}


// Function: indirect_recursion_a at 0x10e94
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int result; // r1
 unsigned int v2; // r0

 if (!((char)v0 & 1))
 {
 if (result != 1)
 goto LABEL_10eb4;
 return v0 + (v0 >> 31) >> 1;
LABEL_10eb4:
 v2 = (v0 + (v0 >> 31) >> 1) + 1;
 }
 else
 {
 if (result == 1)
 return v0 * 3 + 1;
 v2 = v0 * 3 + 2;
 }
 v0 = indirect_recursion_a(v2, result - 2);
 return v0;
}


// Function: call_func_ptr at 0x10edc
int call_func_ptr(unsigned int a0, unsigned int a1)
{
 return ((int (*)(unsigned int, unsigned int))a0)(a0, a1);
}


// Function: call_func_ptr_array at 0x10ee8
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v5; // r4
 unsigned int v6; // r3
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]

 v4 = v5;
 v3 = v6;
 v2 = a2;
 v1 = a1;
 v0 = a0;
 v3 = __glibc___stack_chk_guard;
 v0 = double_value;
 v1 = triple_value;
 v2 = recursion_factorial;
 if (2 >= a0)
 {
 if (!(v3 ^ __glibc___stack_chk_guard))
 {
 unsigned int (*func_table[3])(unsigned int) = {double_value, triple_value, recursion_factorial};
 return func_table[a0](a1);
 }
 }
 else
 {
 if (!(v3 ^ __glibc___stack_chk_guard))
 return 4294967295;
 }
 __stack_chk_fail(); /* do not return */
}


// Function: call_virtual_func at 0x10f80
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x10f88
unsigned int process_with_callback(unsigned int a0, unsigned int a1, unsigned int (*a2)(unsigned int))
{
 unsigned int v0; // r4
 unsigned int v1; // r5
 unsigned int v2; // r4
 unsigned int v3; // r4

 v0 = 0;
 v1 = 0;
 while (true)
 {
 v2 = v0;
 if (v2 >= a1)
 break;
 v3 = v2 + 1;
 v1 += a2(*((int *)(a0 + v2 * 4)));
 v0 = v3;
 }
 return v1;
}


// Function: test_control_flow_l2 at 0x10fc4
extern unsigned int __glibc___stack_chk_guard;
extern char g_11c2d;

unsigned int test_control_flow_l2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int v29; // r0
 unsigned int v26; // r2
 unsigned int result; // [bp-0x70]
 unsigned int flag1; // [bp-0x6c]
 unsigned int flag3; // [bp-0x68]
 unsigned int v3; // [bp-0x64]
 unsigned int v4; // [bp-0x60]
 unsigned int v5; // [bp-0x5c]
 unsigned int v6; // [bp-0x58]
 unsigned int flag2; // [bp-0x54]
 unsigned int v8; // [bp-0x50]
 unsigned int v9; // [bp-0x4c]
 unsigned int v10; // [bp-0x48]
 unsigned int v11; // [bp-0x44]
 unsigned int v12; // [bp-0x40]
 unsigned int v13; // [bp-0x3c]
 unsigned int v14; // [bp-0x38]
 char v15; // [bp-0x34]
 unsigned int v16; // [bp-0x14]

 v16 = __glibc___stack_chk_guard;
 puts(0x11c2d);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7));
 result = 0;
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", infinite_loop(&result));
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 flag2 = 1;
 v8 = 2;
 v9 = 3;
 v10 = 4;
 v11 = 5;
 v12 = 6;
 v13 = 7;
 v14 = 8;
 memset(&v15, 0, 32);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", duffs_device((unsigned int *)&v15, &flag2, 8));
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10));
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(10));
 flag1 = 0;
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", loop_external_state(&flag1));
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5));
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(6, 1));
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", call_func_ptr(double_value, 5));
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5, v26));
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5, v26));
 flag3 = 1;
 v3 = 2;
 v4 = 3;
 v5 = 4;
 v6 = 5;
 v29 = __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", process_with_callback(&flag3, 5, double_value));
 if (!(v16 ^ __glibc___stack_chk_guard))
 return v29;
 __stack_chk_fail(); /* do not return */
}


// Function: non_local_jump at 0x1123c
extern unsigned int jump_buffer;

unsigned int non_local_jump(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v4; // lr
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]
 jmp_buf buf;

 v3 = v4;
 v2 = a2;
 v1 = a1;
 v0 = a0;
 v1 = a0;
 if (_setjmp(buf))
 return 4294967295;
 if (v1 < 0)
 {
 if (!((char)armg_calculate_condition(178, v1, 0, 0)))
 goto LABEL_11264;
 }
 else
 {
 if (!((char)armg_calculate_condition(178, v1, 0, 0)))
 {
LABEL_11264:
 if (v1 <= 100)
 {
 if ((char)armg_calculate_condition(210, v1, 100, 0))
 return v1 * 2;
 }
 else
 {
 if ((char)armg_calculate_condition(210, v1, 100, 0))
 return 0;
 }
 }
 }
 __longjmp_chk(buf, 1); /* do not return */
}


// Function: cpp_exception at 0x11294
unsigned int cpp_exception(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (100 >= a0)
 {
 return a0 * 2;
 }
 else
 {
 return 4294967294;
 }
}


// Function: large_jump_table at 0x112bc
extern unsigned int __glibc___stack_chk_guard;

unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x3c]
 unsigned int v1; // [bp-0x38]
 unsigned int v2; // [bp-0x34]
 unsigned int v3; // [bp-0x30]
 unsigned int v4; // [bp-0x2c]
 unsigned int v5; // [bp-0x28]
 unsigned int v6; // [bp-0x24]
 unsigned int v7; // [bp-0x20]
 unsigned int v8; // [bp-0x1c]
 unsigned int v9; // [bp-0x18]
 unsigned int v10; // [bp-0x14]

 v10 = __glibc___stack_chk_guard;
 v0 = op_add;
 v1 = op_sub;
 v2 = op_mul;
 v3 = op_div;
 v4 = op_mod;
 v5 = op_and;
 v6 = op_or;
 v7 = op_xor;
 v8 = op_shl;
 v9 = op_shr;
 if (9 >= a0)
 {
 if (!(v10 ^ __glibc___stack_chk_guard))
 {
 int (*func_table[10])(unsigned int, unsigned int) = {op_add, op_sub, op_mul, op_div, op_mod, op_and, op_or, op_xor, op_shl, op_shr};
 return func_table[a0](a1, a2);
 }
 }
 else
 {
 if (!(v10 ^ __glibc___stack_chk_guard))
 return 4294967295;
 }
 __stack_chk_fail(); /* do not return */
}


// Function: conditional_func_ptr at 0x1136c
int conditional_func_ptr(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r3
 unsigned int v1; // r1
 unsigned int v2; // r3

 v0 = double_value;
 if (a0)
 {
 v1 = recursion_factorial;
 v2 = triple_value;
 if (a0 != 1)
 v0 = v1;
 else
 v0 = v2;
 }
 return ((int (*)(unsigned int))v0)(a1);
}


// Function: state_machine at 0x113a0
unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 if (a0)
 return a1;
 return 0;
}


// Function: fsm_func_table at 0x11404
extern unsigned int __glibc___stack_chk_guard;

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 v0 = state_idle;
 v1 = state_processing;
 v2 = state_done;
 v3 = state_error;
 if (3 >= a1)
 {
 if (!(v4 ^ __glibc___stack_chk_guard))
 {
 unsigned int (*func_table[4])(unsigned int, unsigned int) = {state_idle, state_processing, state_done, state_error};
 return func_table[a1](a0, a1);
 }
 }
 else
 {
 if (!(v4 ^ __glibc___stack_chk_guard))
 return 3;
 }
 __stack_chk_fail(); /* do not return */
}


// Function: computed_goto at 0x1149c
extern unsigned int __glibc___stack_chk_guard;
extern char g_114dc;
extern unsigned int g_11504;
extern unsigned int g_1150c;

int computed_goto(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v8; // lr
 unsigned int v9; // r6
 unsigned int v10; // r5
 unsigned int v11; // r4
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]
 unsigned int v6; // [bp-0x8]
 unsigned int v7; // [bp-0x4]

 v7 = v8;
 v6 = v9;
 v5 = v10;
 v4 = v11;
 v3 = a3;
 v2 = a2;
 v1 = a1;
 v0 = a0;
 v5 = __glibc___stack_chk_guard;
 v1 = 70876;
 v2 = 0;
 v3 = 70916;
 v4 = 70924;
 if (3 < a1)
 {
 if ((char)armg_calculate_condition(130, a1, 3, 0))
 {
 if ((v5 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967295;
 }
 }
 else
 {
 if ((char)armg_calculate_condition(130, a1, 3, 0))
 {
 if ((v5 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 70876;
 }
 }
 return 0;
}


// Function: obfuscated_cf at 0x11524
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: opaque_predicate at 0x1152c
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: overlapped_code at 0x11534
unsigned int overlapped_code(unsigned int a0)
{
 unsigned int v0; // cc_dep1
 unsigned int v1; // cc_op
 unsigned int v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v4; // cc_ndep
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep
 unsigned int v7; // r0

 v0 = a0 & 1;
 v5 = armg_calculate_flag_c(v1, v2, v3, v4);
 v6 = armg_calculate_flag_v(v1, v2, v3, v4);
 if (((char)a0 & 1))
 {
 v7 = a0 * 3;
 if (!armg_calculate_condition(21, v0, v5, v6))
 goto LABEL_1153e;
LABEL_1153d:
 v7 += 1;
 }
 else
 {
 v7 = a0;
 if (armg_calculate_condition(21, v0, v5, v6))
 goto LABEL_1153d;
LABEL_1153e:
 ;
 }
 return (armg_calculate_condition(5, v0, v5, v6) ? (armg_calculate_condition(5, v0, v5, v6) ? v7 : v7 + (v7 >> 31)) : (armg_calculate_condition(5, v0, v5, v6) ? v7 : v7 + (v7 >> 31)) >> 1);
}


// Function: test_control_flow_l3 at 0x1154c
extern unsigned int __glibc___stack_chk_guard;
extern char g_11e20;

int test_control_flow_l3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v8; // lr
 unsigned int v9; // r6
 unsigned int v18; // r0
 unsigned int v10; // r5
 unsigned int v11; // r4
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]
 unsigned int v6; // [bp-0x8]
 unsigned int v7; // [bp-0x4]

 v7 = v8;
 v6 = v9;
 v5 = v10;
 v4 = v11;
 v3 = a3;
 v2 = a2;
 v1 = a1;
 v0 = a0;
 v5 = __glibc___stack_chk_guard;
 puts(0x11e20);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(5, a1, a2));
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291, a1, a2));
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5));
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5, a2, a3));
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1));
 v1 = 0;
 v2 = 1;
 v3 = 2;
 v4 = 3;
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", computed_goto(v1, 2, 2, 3));
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 v18 = __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 if (!(v5 ^ __glibc___stack_chk_guard))
 return v18;
 __stack_chk_fail(); /* do not return */
 return 0;
}



/* CRT stub function __aeabi_idiv removed by preprocessor */




/* CRT stub function _divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */



// Function: __aeabi_idiv0 at 0x11914
int __aeabi_idiv0(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = a1;
 return 0;
}



/* CRT stub function _fini removed by preprocessor */



// Function: sub_11928 at 0x11928
int sub_11928(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0;
}

