// Angr Decompilation of 1_gcc_O1_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */



// Function: sub_10454 at 0x10454
extern unsigned int g_23008;

int sub_10454()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10518 at 0x10518
void sub_10518()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: recursion_factorial at 0x105d8
unsigned int recursion_factorial(unsigned int a0)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (a0 <= 1)
 return 1;
 v1 = v2;
 v0 = v3;
 return a0 * recursion_factorial(a0 - 1);
}


// Function: double_value at 0x10600
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x10608
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: op_add at 0x10610
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: op_sub at 0x10618
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x10620
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: op_div at 0x10628
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (!a1)
 return 0;
 v1 = v2;
 v0 = v3;
 v4 = __aeabi_idiv();
 return __aeabi_idiv();
}


// Function: op_mod at 0x10644
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r1
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (!a1)
 return 0;
 v1 = v2;
 v0 = v3;
 __aeabi_idivmod();
 return v4;
}


// Function: op_and at 0x10664
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: op_or at 0x1066c
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: op_xor at 0x10674
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: op_shl at 0x1067c
unsigned int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31) & a1 - 32 >> 31;
}


// Function: op_shr at 0x10684
unsigned int op_shr(unsigned int a0, char a1)
{
 return (a1 < 32 ? a0 >> a1 : a0 >> 31);
}


// Function: state_idle at 0x1068c
unsigned int state_idle(unsigned int a0)
{
 if (a0 != 1)
 {
 if (!armg_calculate_condition(2, a0, 1, 0))
 return 0;
 }
 else
 {
 if (!armg_calculate_condition(2, a0, 1, 0))
 return 1;
 }
 return 1;
}


// Function: state_processing at 0x1069c
unsigned int state_processing(unsigned int a0)
{
 if (a0 != 2)
 goto LABEL_106a4;
 return a0;
LABEL_106a4:
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


// Function: state_done at 0x106b4
unsigned int state_done()
{
 return 2;
}


// Function: state_error at 0x106bc
unsigned int state_error(unsigned int a0)
{
 return (a0 ? 3 : 0);
}


// Function: sequential_ops at 0x106c8
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a0 + a1) * 2 - a2;
}


// Function: single_if at 0x106d4
unsigned int single_if(unsigned int a0)
{
 if (0 >= a0)
 return a0;
 return a0 * 2;
}


// Function: if_else at 0x106e0
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


// Function: nested_if_2 at 0x106f0
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


// Function: nested_if_deep at 0x1070c
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


// Function: if_elseif_chain at 0x10760
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


// Function: if_elseif_long at 0x10790
unsigned int if_elseif_long(unsigned int a0)
{
 return 4294967295;
}


// Function: switch_small at 0x107e0
unsigned int switch_small(unsigned int a0)
{
 return 4294967295;
}


// Function: switch_large at 0x10824
unsigned int switch_large(unsigned int a0)
{
 return 4294967295;
}


// Function: switch_default at 0x108a8
unsigned int switch_default(unsigned int a0)
{
 if (a0 == 2)
 {
 return 200;
 }
 else if (a0 != 3)
 {
 if (a0 != 1)
 {
 if (!armg_calculate_condition(2, a0, 1, 0))
 return 0;
 }
 else
 {
 if (!armg_calculate_condition(2, a0, 1, 0))
 return 1;
 }
 return 100;
 }
 else
 {
 return 300;
 }
}


// Function: switch_fallthrough at 0x108d8
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
LABEL_10904:
 v0 = v1 + a0 * 2;
 }
 return v0 + a0;
 }
 v1 = 0;
 goto LABEL_10904;
}


// Function: loop_for_fixed at 0x10918
unsigned int loop_for_fixed(unsigned int i)
{
 unsigned int v0; // r3
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int v3; // r3
 unsigned int v4; // r0

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v3 = v0;
 v4 = v1 + v3;
 v0 = v3 + 1;
 v1 = v4;
 } while (i != v0);
 return v2 + v3;
}


// Function: loop_while at 0x10944
unsigned int loop_while(unsigned int a0)
{
 unsigned int v0; // r3
 unsigned int v1; // r2
 unsigned int i; // r3

 v0 = a0;
 if (a0)
 {
 v0 = 0;
 do
 {
 v0 += 1;
 v0 = (1717986919 * v0 >> 34) - (v0 >> 31);
 } while (v1 >> 2 != i);
 }
 if (v0 >= 1)
 return v0;
 return 1;
}


// Function: loop_dowhile at 0x10980
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
 v4 = v0 + 1;
 a0 = (1717986919 * a0 >> 34) - (a0 >> 31);
 v0 = v4;
 } while (v2 >> 2 != i);
 return v1 + 1;
}


// Function: loop_nested at 0x109a8
unsigned int loop_nested(unsigned int a0, unsigned int i, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r2
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int v3; // r2

 if (0 < a0)
 {
 v0 = 0;
 if (!armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_109b2;
LABEL_109b1:
 v1 = v0;
 if (!((char)armg_calculate_condition(194, a0, 0, 0)))
 return 0;
 }
 else
 {
 v0 = a2;
 if (armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_109b1;
LABEL_109b2:
 v1 = a0;
 if (!((char)armg_calculate_condition(194, v1, 0, 0)))
 return 0;
 }
while (1)
{
LABEL_109dc:
 v2 = v1;
 v3 = v0;
 if (0 < i)
 {
 a3 = 0;
 if (!((char)armg_calculate_condition(194, i, 0, 0)))
 goto LABEL_109d0;
 }
 else
 {
 a3 = a3;
 if (!((char)armg_calculate_condition(194, i, 0, 0)))
 goto LABEL_109d0;
 }
 do
 {
 a3 += 1;
 } while (i != a3);
 v2 += a3;
LABEL_109d0:
 v2 = v2;
 v0 = v3 + 1;
 if (a0 != v0)
 goto LABEL_109dc;
 return v2;
}


// Function: loop_break at 0x109ec
extern unsigned int __glibc___stack_chk_guard;

unsigned int loop_break(unsigned int i)
{
 char v6[4]; // r3
 unsigned int v7; // r0
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
 v4 = 50;
 v7 = 0;
 while (v7 != i)
 {
 v7 += 1;
 if (v7 + 1 == 5)
 {
 if (!(v5 ^ __glibc___stack_chk_guard))
 return 4294967295;
 __stack_chk_fail(); /* do not return */
 }
 }
 if ((v5 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v7;
}


// Function: loop_continue at 0x10a70
unsigned int loop_continue(unsigned int a0)
{
 unsigned int v0; // r3
 unsigned int v1; // r0

 if (a0 <= 0)
 return 0;
 v0 = 1;
 v1 = 0;
 do
 {
 if (((char)v0 & 1))
 v1 += v0;
 } while ((v0 += 1, v0 != a0 + 1));
 return v1;
}


// Function: goto_forward at 0x10aa4
unsigned int goto_forward(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r3

 if (0 < a0)
 {
 v0 = a0;
 if (!armg_calculate_condition(194, v0, 0, 0))
 goto LABEL_10aae;
LABEL_10aad:
 a0 *= v0;
 }
 else
 {
 v0 = a3;
 if (armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_10aad;
LABEL_10aae:
 a0 = a0;
 }
 return a0 * 2;
}


// Function: goto_backward at 0x10ab8
unsigned int goto_backward(unsigned int a0)
{
 unsigned int i; // r3
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int v3; // r3
 unsigned int v4; // r0

 if (a0 <= 0)
 return 1;
 i = 1;
 v1 = 1;
 do
 {
 v3 = i;
 v4 = v3 * v1;
 i = v3 + 1;
 v1 = v4;
 } while (i != a0 + 1);
 return v3 * v2;
}


// Function: ternary_op at 0x10ae8
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 > a1)
 return a0;
 return a1;
}


// Function: test_control_flow_l1 at 0x10af4
extern char g_11ba4;

int test_control_flow_l1()
{
 unsigned int v10; // r0
 unsigned int v3; // r2
 unsigned int v4; // r3

 puts(0x11ba4);
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
 __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4, v3, v4));
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", loop_break(30));
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", loop_break(99));
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", loop_continue(10));
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", goto_backward(5));
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 v10 = __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
 return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x10d6c
extern unsigned int __glibc___stack_chk_guard;

unsigned int loop_multi_exit(unsigned int a0)
{
 char v13[4]; // r12
 unsigned int v14; // r0
 unsigned int v15; // r3
 char v16[4]; // r2
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
 v14 = 0;
 while (1)
 {
 v15 = 0;
 do
 {
 if ((v14 == 0 && result == a0) || (v14 == 1 && v1 == a0) || (v14 == 2 && v2 == a0) || (v14 == 3 && v3 == a0))
 {
 if (!(v12 ^ __glibc___stack_chk_guard))
 return v15 + v14 * 10;
 __stack_chk_fail(); /* do not return */
 }
 } while ((v15 += 1, v15 != 4));
 v14 += 1;
 if (v14 == 3)
 {
 if (!(v12 ^ __glibc___stack_chk_guard))
 return 4294967295;
 __stack_chk_fail(); /* do not return */
 }
 }
}


// Function: infinite_loop at 0x10e1c
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // r0

 v0 = 0;
 do
 {
 if (*(ptr) != 1)
 {
 *(ptr) = 1;
 return v0;
 }
 return v0;
 } while ((v0 += 1, v0 != 1001));
 *(ptr) = 1;
 return v0;
}


// Function: multi_return at 0x10e50
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


// Function: conditional_return at 0x10e80
unsigned int conditional_return(unsigned int a0)
{
 unsigned int v1; // r0

 if (a0 > 0)
 return a0 * 2;
 if (a0 < 0)
 {
 v1 = -(a0);
 if (!armg_calculate_condition(162, a0, 0, 0))
 return v1;
 }
 else if (!armg_calculate_condition(162, v1, 0, 0))
 {
 return a0;
 }
 return 0;
}


// Function: duffs_device at 0x10ea0
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
 return 0;
}


// Function: loop_complex_cond at 0x10f5c
int loop_complex_cond(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // r3
 unsigned int v1; // r0
 unsigned int v2; // r1
 unsigned int v3; // cc_dep1
 unsigned int v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep

 v0 = a0;
 if (a0 > 0)
 {
 v1 = 0;
 v2 = 0;
 do
 {
 v3 = a0;
 v2 += 2;
 v0 -= 1;
 v1 += 1;
 if (v1 <= 9)
 {
 v4 = (armg_calculate_condition(210, v3, 0, 0) ? v2 : v3);
 v5 = (armg_calculate_condition(210, v3, 0, 0) ? v0 : 0);
 v6 = (armg_calculate_condition(210, v3, 0, 0) ? 0 : 0);
 if (!armg_calculate_condition(178, v4, v5, v6))
 goto LABEL_10f82;
 goto LABEL_10f81;
 }
 else
 {
 v4 = (armg_calculate_condition(210, v3, 0, 0) ? v2 : v3);
 v5 = (armg_calculate_condition(210, v3, 0, 0) ? v0 : 0);
 v6 = (armg_calculate_condition(210, v3, 0, 0) ? 0 : 0);
 if (armg_calculate_condition(178, v4, v5, v6))
 {
LABEL_10f81:
 a2 = 1;
 if (!armg_calculate_condition(162, v4, v5, v6))
 goto LABEL_10f86;
 goto LABEL_10f85;
 }
 else
 {
LABEL_10f82:
 if (armg_calculate_condition(162, v4, v5, v6))
 {
LABEL_10f85:
 a2 = 0;
 goto LABEL_10f88;
 }
 else
 {
LABEL_10f86:
 a2 = 0;
LABEL_10f88:
 if (v0 <= 0)
 {
 a2 = 0;
 if (!armg_calculate_condition(194, v0, 0, 0))
 goto LABEL_10f92;
 goto LABEL_10f91;
 }
 else
 {
 a2 = a2;
 if (armg_calculate_condition(194, v0, 0, 0))
 {
LABEL_10f91:
 a2 &= 1;
 }
 else
 {
LABEL_10f92:
 a2 = 0;
 }
 }
 }
 }
 }
 }
 } while ((a0 = a2, a0));
 }
 else
 {
 v1 = 0;
 v2 = 0;
 }
 return v2 + v0 + v1;
}


// Function: loop_modify_var at 0x10fb4
unsigned int loop_modify_var(unsigned int a0, unsigned int a1, unsigned int cur)
{
 unsigned int v0; // r0
 unsigned int v1; // r3

 if (0 < a0)
 {
 cur = 0;
 if (!armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_10fbe;
LABEL_10fbd:
 cur = cur;
 if (!((char)armg_calculate_condition(194, a0, 0, 0)))
 return 0;
 }
 else
 {
 cur = a0;
 if (armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_10fbd;
LABEL_10fbe:
 if (!((char)armg_calculate_condition(194, a0, 0, 0)))
 return 0;
 }
 while (1)
 {
 v0 = cur;
 v1 = cur + 1;
 if (v1 >= a0)
 break;
 cur = v0 + v1;
 if (5 < v1)
 {
 cur += 3;
 if (!armg_calculate_condition(210, v1, 5, 0))
 goto LABEL_10fda;
 goto LABEL_10fd9;
 }
 else if (armg_calculate_condition(210, v1, 5, 0))
 {
LABEL_10fd9:
 cur = v1;
 }
 else
 {
LABEL_10fda:
 cur = cur;
 }
 }
 cur = cur;
 return v0;
}


// Function: loop_external_state at 0x10fec
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // r0

 v0 = 0;
 do
 {
 if (!*(a0))
 return v0;
 return v0;
 } while ((v0 += 1, v0 != 101));
 return 101;
}


// Function: tail_recursion at 0x11010
int tail_recursion(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (a0 <= 1)
 return a1;
 v1 = v2;
 v0 = v3;
 v4 = tail_recursion(a0 - 1, a0 * a1);
 return tail_recursion(a0 - 1, a0 * a1);
}


// Function: indirect_recursion_a at 0x11034
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int v0; // r4
 unsigned int v1; // lr
 unsigned int v2; // r0
 unsigned int v5; // r0

 if (a1 > 0)
 goto LABEL_1103c;
 return a0;
LABEL_1103c:
 if (!((char)a0 & 1))
 {
 if (a1 > 1)
 goto LABEL_11074;
 return a0 + (a0 >> 31) >> 1;
LABEL_11074:
 v5 = indirect_recursion_a((a0 + (a0 >> 31) >> 1) + 1, a1 - 2, a2, a3, v0, v1);
 return indirect_recursion_a((a0 + (a0 >> 31) >> 1) + 1, a1 - 2, a2, a3, v0, v1);
 }
 else if (a1 > 1)
 {
 v2 = indirect_recursion_a(a0 * 3 + 2, a1 - 2, a2, a3, v0, v1);
 return indirect_recursion_a(a0 * 3 + 2, a1 - 2, a2, a3, v0, v1);
 }
 else
 {
 return a0 * 3 + 1;
 }
}


// Function: call_func_ptr at 0x1108c
int call_func_ptr(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // r0

 v0 = ((unsigned int(*)(unsigned int))a0)(a1);
 return ((unsigned int(*)(unsigned int))a0)(a1);
}


// Function: call_func_ptr_array at 0x110a0
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v5; // lr
 unsigned int v6; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = __glibc___stack_chk_guard;
 v0 = double_value;
 v1 = triple_value;
 v2 = recursion_factorial;
 if (2 < a0)
 v6 = 4294967295;
 else if (a0 == 0)
 v6 = ((unsigned int(*)(unsigned int))v0)(a1);
 else if (a0 == 1)
 v6 = ((unsigned int(*)(unsigned int))v1)(a1);
 else
 v6 = ((unsigned int(*)(unsigned int))v2)(a1);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: call_virtual_func at 0x11120
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x11128
unsigned int process_with_callback(unsigned int *a0, unsigned int i, unsigned int (*a2)(unsigned int))
{
 unsigned int *v0; // r5
 unsigned int v1; // r4
 unsigned int v2; // r6
 unsigned int *v3; // r5
 unsigned int *v4; // r5

 if (i <= 0)
 return 0;
 v0 = a0 + 1;
 v1 = 0;
 v2 = 0;
 do
 {
 v3 = v0;
 v4 = v3 + 1;
 v2 += a2(v3[1]);
 v1 += 1;
 v0 = v4;
 } while (i != v1);
 return v2;
}


// Function: test_control_flow_l2 at 0x1116c
extern unsigned int __glibc___stack_chk_guard;
extern char g_11e2c;

unsigned int test_control_flow_l2()
{
 unsigned int v27; // r3
 unsigned int v32; // r0
 unsigned int v20; // r1
 unsigned int v21; // r2
 unsigned int result[1]; // [bp-0x70]
 unsigned int flag1[1]; // [bp-0x6c]
 unsigned int flag3[1]; // [bp-0x68]
 unsigned int v3; // [bp-0x64]
 unsigned int v4; // [bp-0x60]
 unsigned int v5; // [bp-0x5c]
 unsigned int v6; // [bp-0x58]
 unsigned int flag2[1]; // [bp-0x54]
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
 puts(0x11e2c);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7));
 *result = 0;
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", infinite_loop(&result));
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 *flag2 = 1;
 v8 = 2;
 v9 = 3;
 v10 = 4;
 v11 = 5;
 v12 = 6;
 v13 = 7;
 v14 = 8;
 memset(&v15, 0, 32);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", duffs_device((unsigned int*)&v15, (unsigned int*)flag2, 8));
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10, 0, 0));
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(10, 0, 0));
 *flag1 = 0;
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", loop_external_state((unsigned int*)flag1));
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5));
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1));
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3, 0, 0, 0, 0));
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", call_func_ptr((unsigned int*)double_value, 5));
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5));
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5));
 *flag3 = 1;
 v3 = 2;
 v4 = 3;
 v5 = 4;
 v6 = 5;
 v32 = __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", process_with_callback((unsigned int*)flag3, 5, (unsigned int(*)(unsigned int))double_value));
 if ((v16 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v32;
}


// Function: non_local_jump at 0x11404
extern unsigned int jump_buffer;

unsigned int non_local_jump(unsigned int a0)
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 if (_setjmp(0x23050))
 {
 return 4294967295;
 }
 else if (a0 >= 0)
 {
 if (a0 <= 100)
 {
 if (!((char)armg_calculate_condition(194, a0, 100, 0)))
 return a0 * 2;
 }
 else
 {
 if (!((char)armg_calculate_condition(194, a0, 100, 0)))
 return 0;
 }
 __longjmp_chk(0x23050, 2); /* do not return */
 }
 else
 {
 __longjmp_chk(0x23050, 1); /* do not return */
 }
}


// Function: cpp_exception at 0x1146c
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


// Function: large_jump_table at 0x11494
extern unsigned int __glibc___stack_chk_guard;

unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v12; // r0
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
 char v11; // [bp-0x10]

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
 if (9 < a0)
 v12 = 4294967295;
 else
 {
 unsigned int (*funcs[])(unsigned int, unsigned int) = {op_add, op_sub, op_mul, op_div, op_mod, op_and, op_or, op_xor, op_shl, op_shr};
 v12 = funcs[a0](a1, a2);
 }
 if ((v10 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v12;
}


// Function: conditional_func_ptr at 0x1152c
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int *v1; // r2
 unsigned int *v2; // r1
 unsigned int *v3; // r2
 unsigned int v4; // r0

 v0 = a0;
 if (a0)
 {
 v1 = triple_value;
 v2 = recursion_factorial;
 if (a0 != 1)
 v3 = v2;
 else
 v3 = v1;
 }
 else
 {
 v3 = double_value;
 }
 v4 = ((unsigned int(*)(unsigned int))v3)(a1);
 return ((unsigned int(*)(unsigned int))v3)(a1);
}


// Function: state_machine at 0x1156c
unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 if (a0)
 {
 v1 = a1;
 if (!armg_calculate_condition(2, a0, 0, 0))
 {
 return a0;
 }
 }
 else
 {
 v1 = v0;
 if (!armg_calculate_condition(2, a0, 0, 0))
 {
 return v1;
 }
 }
 return a0;
}


// Function: fsm_func_table at 0x115d8
extern unsigned int __glibc___stack_chk_guard;

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 unsigned int v6; // r0
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]
 char v5; // [bp-0x8]

 v4 = __glibc___stack_chk_guard;
 v0 = state_idle;
 v1 = state_processing;
 v2 = state_done;
 v3 = state_error;
 if (3 < a1)
 {
 v6 = 3;
 if (!((char)armg_calculate_condition(130, a1, 3, 0)))
 {
 v6 = ((unsigned int(*)(unsigned int))(*((int *)&(&v5)[20 + 4 * a1])))(a0);
 }
 }
 else
 {
 v6 = state_idle;
 if (!((char)armg_calculate_condition(130, a1, 3, 0)))
 {
 v6 = ((unsigned int(*)(unsigned int))(*((int *)&(&v5)[20 + 4 * a1])))(a0);
 }
 }
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: computed_goto at 0x11654
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11694;
extern unsigned int g_116c0;
extern unsigned int g_116c8;

unsigned int computed_goto(unsigned int a0, unsigned int a1)
{
 unsigned int v6; // lr
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = __glibc___stack_chk_guard;
 v0 = 71316;
 v1 = "\n";
 v2 = 71360;
 v3 = 71368;
 if (3 >= a1)
 {
 switch(a1)
 {
 case 0: return 71316;
 case 1: return 71360;
 case 2: return 71368;
 case 3: return 71316;
 }
 }
 else if (!(v4 ^ __glibc___stack_chk_guard))
 {
 return 4294967295;
 }
 else
 {
 __stack_chk_fail(); /* do not return */
 }
}


// Function: obfuscated_cf at 0x116e4
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: opaque_predicate at 0x116ec
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: overlapped_code at 0x116f4
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
 goto LABEL_116fe;
LABEL_116fd:
 v7 += 1;
 }
 else
 {
 v7 = a0;
 if (armg_calculate_condition(21, v0, v5, v6))
 goto LABEL_116fd;
LABEL_116fe:
 }
 return (armg_calculate_condition(5, v0, v5, v6) ? (armg_calculate_condition(5, v0, v5, v6) ? v7 : v7 + (v7 >> 31)) : (armg_calculate_condition(5, v0, v5, v6) ? v7 : v7 + (v7 >> 31)) >> 1);
}


// Function: test_control_flow_l3 at 0x1170c
extern unsigned int __glibc___stack_chk_guard;
extern char g_12030;

unsigned int test_control_flow_l3()
{
 unsigned int v11; // r0
 unsigned int result; // [bp-0x1c]
 unsigned int flag1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 puts(0x12030);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(5));
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291));
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5));
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5));
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1));
 result = 0;
 flag1 = 1;
 v2 = 2;
 v3 = 3;
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", computed_goto((unsigned int)result, 2));
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 v11 = __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v11;
}


// Function: main at 0x118a0
unsigned int main()
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function __aeabi_idiv removed by preprocessor */




/* CRT stub function _divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */



// Function: __aeabi_idiv0 at 0x11af8
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



// Function: sub_11b0c at 0x11b0c
int sub_11b0c(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0;
}


