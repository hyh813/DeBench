// Angr Decompilation of 1_gcc_O3_g
// Platform: ARMEL

#include <stdbool.h>

/* CRT stub function _init removed by preprocessor */



// Function: sub_10454 at 0x10454
extern unsigned int g_23008;

int sub_10454()
{
 return 0;
}


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
 unsigned int result; // r3
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int v3; // r3
 unsigned int v5; // r0

 result = a0;
 v1 = 1;
 if (result > 1)
 goto LABEL_10600;
 return 1;
 do
 {
LABEL_10600:
 v3 = result;
 v5 = v3 * v1;
 result = v3 - 1;
 v1 = v5;
 } while (result != 1);
 return v3 * v2;
}


// Function: double_value at 0x10618
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x10620
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: op_add at 0x10628
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: op_sub at 0x10630
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x10638
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: op_div at 0x10640
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


// Function: op_mod at 0x1065c
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


// Function: op_and at 0x1067c
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: op_or at 0x10684
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: op_xor at 0x1068c
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: op_shl at 0x10694
unsigned int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31) & a1 - 32 >> 31;
}


// Function: op_shr at 0x1069c
unsigned int op_shr(unsigned int a0, char a1)
{
 return (a1 < 32 ? a0 >> a1 : a0 >> 31);
}


// Function: state_idle at 0x106a4
unsigned int state_idle(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = a0 - 1;
 return (!v0 ? 32 : Clz(v0)) >> 5;
}


// Function: state_processing at 0x106b4
unsigned int state_processing(unsigned int a0)
{
 if (a0 != 2)
 goto LABEL_106bc;
 return a0;
LABEL_106bc:
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


// Function: state_done at 0x106cc
unsigned int state_done()
{
 return 2;
}


// Function: state_error at 0x106d4
unsigned int state_error(unsigned int a0)
{
 return (a0 ? 3 : 0);
}


// Function: non_local_jump_constprop_0 at 0x106e0
extern unsigned int jump_buffer;

unsigned int non_local_jump_constprop_0()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int result; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 result = _setjmp(0x23050);
 if (result)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 return 4294967295;
 }
 else
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 return 0;
 }
 return 10;
}


// Function: sequential_ops at 0x10700
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a0 + a1) * 2 - a2;
}


// Function: single_if at 0x1070c
unsigned int single_if(unsigned int a0)
{
 if (0 >= a0)
 return a0;
 return a0 * 2;
}


// Function: if_else at 0x10718
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


// Function: nested_if_2 at 0x10728
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


// Function: nested_if_deep at 0x10744
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


// Function: if_elseif_chain at 0x10798
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


// Function: if_elseif_long at 0x107c8
unsigned int if_elseif_long(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int v2; // r0

 if (a0 <= 4)
 {
 v0 = a0 + 1;
 if (!armg_calculate_condition(146, a0, 4, 0))
 goto LABEL_107d2;
LABEL_107d1:
 v1 = v0 * 5;
 if (!armg_calculate_condition(146, a0, 4, 0))
 goto LABEL_107d6;
LABEL_107d5:
 v2 = v1 * 5;
 if (!armg_calculate_condition(146, a0, 4, 0))
 goto LABEL_107da;
 }
 else
 {
 v0 = a0;
 if (armg_calculate_condition(146, a0, 4, 0))
 goto LABEL_107d1;
LABEL_107d2:
 v1 = v0;
 if (armg_calculate_condition(146, a0, 4, 0))
 goto LABEL_107d5;
LABEL_107d6:
 v2 = v1;
 if (!armg_calculate_condition(146, a0, 4, 0))
 {
LABEL_107da:
 if (!armg_calculate_condition(130, a0, 4, 0))
 return v2;
 return 4294967295;
 }
 }
 if (!armg_calculate_condition(130, a0, 4, 0))
 return v2 * 4;
 return 4294967295;
}


// Function: switch_small at 0x107e4
extern unsigned int CSWTCH_56[4];

unsigned int switch_small(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 if (3 >= a0)
 return *((int *)(74072 + a0 * 4));
 return 4294967295;
}


// Function: switch_large at 0x107fc
unsigned int switch_large(unsigned int a0)
{
 unsigned int v0; // r0

 if (a0 <= 9)
 {
 v0 = a0 * 5;
 if (!armg_calculate_condition(146, a0, 9, 0))
 goto LABEL_10806;
LABEL_10805:
 if (!armg_calculate_condition(130, a0, 9, 0))
 return v0 * 2;
 }
 else
 {
 v0 = a0;
 if (armg_calculate_condition(146, a0, 9, 0))
 goto LABEL_10805;
LABEL_10806:
 if (!armg_calculate_condition(130, a0, 9, 0))
 return v0;
 }
 return 4294967295;
}


// Function: switch_default at 0x10810
unsigned int switch_default(unsigned int a0)
{
 unsigned int v0; // r3
 unsigned int v1; // r0
 unsigned int v2; // r0

 v0 = a0 - 1;
 if (v0 <= 2)
 {
 v1 = a0 * 5;
 if (!armg_calculate_condition(146, v0, 2, 0))
 goto LABEL_1081e;
LABEL_1081d:
 v2 = v1 * 5;
 if (!armg_calculate_condition(146, v0, 2, 0))
 goto LABEL_10822;
LABEL_10821:
 if (!armg_calculate_condition(130, v0, 2, 0))
 return v2 * 4;
 }
 else
 {
 v1 = a0;
 if (armg_calculate_condition(146, v0, 2, 0))
 goto LABEL_1081d;
LABEL_1081e:
 v2 = v1;
 if (armg_calculate_condition(146, v0, 2, 0))
 goto LABEL_10821;
LABEL_10822:
 if (!armg_calculate_condition(130, v0, 2, 0))
 return v2;
 }
 return 0;
}


// Function: switch_fallthrough at 0x1082c
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int v1; // r0
 unsigned int v2; // r3

 if (a0 != 2)
 {
 if (a0 != 3)
 {
 if (a0 == 1)
 {
 v1 = 1;
 if (!armg_calculate_condition(18, a0, 1, 0))
 return v1;
 }
 else if (!armg_calculate_condition(18, v1, 1, 0))
 {
 return a0;
 }
 return 4294967295;
 }
 v2 = 12;
 }
 else
 {
 v2 = 0;
 }
 return v2 + a0 * 2 + a0;
}


// Function: loop_for_fixed at 0x10864
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


// Function: loop_while at 0x10890
unsigned int loop_while(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int v2; // r2
 unsigned int i; // r3
 unsigned int v4; // r0

 if (!a0)
 return 1;
 v0 = 0;
 do
 {
 a0 = (1717986919 * a0 >> 34) - (a0 >> 31);
 v4 = v0 + 1;
 v0 = v4;
 } while (v2 >> 2 != i);
 return v1 + 1;
}


// Function: loop_dowhile at 0x108c4
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
 a0 = (1717986919 * a0 >> 34) - (a0 >> 31);
 v4 = v0 + 1;
 v0 = v4;
 } while (v2 >> 2 != i);
 return v1 + 1;
}


// Function: loop_nested at 0x108ec
unsigned int loop_nested(unsigned int i, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int v1; // r0

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v0 += 1;
 if (0 < a1)
 v1 += a1;
 } while (i != v0);
 return v1;
}


// Function: loop_break at 0x1091c
unsigned int loop_break(unsigned int a0)
{
 switch (a0)
 {
 case 10:
 return 0;
 case 20:
 return 1;
 case 30:
 return 2;
 case 40:
 return 3;
 case 50:
 if (!armg_calculate_condition(2, a0, 50, 0))
 return 50;
 default:
 if (!armg_calculate_condition(2, a0, 50, 0))
 return 4294967295;
 }
 return 4;
}


// Function: loop_continue at 0x1096c
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
 } while ((v0 += 1, a0 + 1 != v0));
 return v1;
}


// Function: goto_forward at 0x109a0
unsigned int goto_forward(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r3

 if (0 < a0)
 {
 v0 = a0;
 if (!armg_calculate_condition(194, v0, 0, 0))
 goto LABEL_109aa;
LABEL_109a9:
 a0 *= v0;
 }
 else
 {
 v0 = a3;
 if (armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_109a9;
LABEL_109aa:
 }
 return a0 * 2;
}


// Function: goto_backward at 0x109b4
unsigned int goto_backward(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int i; // r3
 unsigned int v2; // r3
 unsigned int v3; // r0
 unsigned int v4; // r0

 v0 = 1;
 if (a0 > 0)
 goto LABEL_109c0;
 return 1;
LABEL_109c0:
	i = 1;
	do
	{
		v2 = i;
		v4 = v2 * v0;
		v0 = v4;
		i = v2 + 1;
	} while (a0 + 1 != i);
	return v2 * v3;
}


// Function: ternary_op at 0x109dc
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 > a1)
 return a0;
 return a1;
}


// Function: test_control_flow_l1 at 0x109e8
extern char g_11b58;

int test_control_flow_l1()
{
 unsigned int v0; // r0

 puts(0x11b58);
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
 __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", 45);
 __printf_chk(1, "CF-L1-13 (loop_while): %d\n", 5);
 __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", 4);
 __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", 12);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", 2);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", 4294967295);
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", 25);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 v0 = __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
 return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x10c14
unsigned int loop_multi_exit(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r3
 unsigned int v1; // r0

	if (a0 == 1)
	{
		v0 = 0;
		v1 = 0;
		goto LABEL_10c90;
	}
 if (a0 == 2)
 {
 v0 = 0;
 goto LABEL_10ca4;
 }
 if (a0 == 3)
 {
 v0 = 0;
 goto LABEL_10cb0;
 }
 if (a0 == 4)
 {
 v0 = 0;
 v1 = 0;
 goto LABEL_10c90;
 }
 if (a0 != 5)
 {
 if (a0 == 6)
 {
 v0 = 1;
LABEL_10ca4:
 v1 = 1;
 }
 else if (a0 == 7)
 {
 v0 = 1;
LABEL_10cb0:
 v1 = 2;
 }
	else if (a0 != 8)
	{
		if (a0 == 9)
		{
			v0 = 2;
			if (!((char)armg_calculate_condition(2, a0, 9, 0)))
				goto LABEL_10c60;
		}
		else
		{
			v0 = a3;
			if (!((char)armg_calculate_condition(2, a0, 9, 0)))
			{
LABEL_10c60:
				if (a0 == 10)
				{
					v0 = 2;
					if (!((char)armg_calculate_condition(2, a0, 10, 0)))
						goto LABEL_10c6c;
					goto LABEL_10ca4;
				}
				else
				{
					v0 = v0;
					if (!((char)armg_calculate_condition(2, a0, 10, 0)))
					{
LABEL_10c6c:
						if (a0 == 11)
						{
							v0 = 2;
							if (!((char)armg_calculate_condition(2, a0, 11, 0)))
								goto LABEL_10c78;
							goto LABEL_10cb0;
						}
						if (!((char)armg_calculate_condition(2, a0, 11, 0)))
						{
LABEL_10c78:
							if (a0 == 12)
								{
									v0 = 2;
									if (!((char)armg_calculate_condition(2, a0, 12, 0)))
										return 4294967295;
								}
								else
								{
									if (!((char)armg_calculate_condition(2, a0, 12, 0)))
									{
										return 4294967295;
									}
								}
								v1 = 3;
								return v0 + v1;
							}
						}
					}
				}
			}
		}
		else
		{
			v0 = 0;
			v1 = 0;
		}
	}
LABEL_10c90:
	return v0 + v1;
}


// Function: infinite_loop at 0x10ce4
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // r3

 v0 = 0;
 while (*(ptr) != 1)
 {
 v0 += 1;
 if (v0 == 1001)
 {
 *(ptr) = 1;
 return v0;
 }
 }
 return v0;
}


// Function: multi_return at 0x10d24
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


// Function: conditional_return at 0x10d54
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


// Function: duffs_device at 0x10d6c
unsigned int duffs_device(unsigned int *a0, unsigned int *iter, unsigned int a2)
{
 unsigned int cur; // r3
 unsigned int ptr; // r3
 unsigned int v5; // r1
 unsigned int v6; // r1
 unsigned int v7; // r3

 switch (a2)
 {
 case 4:
 break;
 case 5:
 v6 = (unsigned int)(iter + 1);
 v7 = (unsigned int)(&cur + 1);
 cur = *(iter);
 ptr = v7;
 v5 = v6;
 break;
 default:
 return 4294967295;
 }
 return 0;
}


// Function: loop_complex_cond at 0x10e24
unsigned int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // r3
 unsigned int v1; // r2
 unsigned int v2; // r1

 if (a0 > 0)
 goto LABEL_10e2c;
 return a0;
LABEL_10e2c:
 v0 = a0 - 1;
 if (v0 > 2)
 {
 v0 = a0 - 2;
 if (v0 > 4)
 {
 v0 = a0 - 3;
 if (v0 > 6)
 {
 v0 = a0 - 4;
 if (v0 > 8)
 {
 v0 = a0 - 5;
 if (v0 > 10)
 {
 v0 = a0 - 6;
 if (v0 > 12)
 {
 v0 = a0 - 7;
 if (v0 > 14)
 {
 v0 = a0 - 8;
 if (v0 > 16)
 {
 v0 = a0 - 9;
 if (v0 > 18)
 {
 v1 = 10;
 v2 = 20;
 v0 = a0 - 10;
 }
 else
 {
 v1 = 9;
 v2 = 18;
 }
 }
 else
 {
 v1 = 8;
 v2 = 16;
 }
 }
 else
 {
 v1 = 7;
 v2 = 14;
 }
 }
 else
 {
 v1 = 6;
 v2 = 12;
 }
 }
 else
 {
 v1 = 5;
 v2 = 10;
 }
 }
 else
 {
 v1 = 4;
 v2 = 8;
 }
 }
 else
 {
 v1 = 3;
 v2 = 6;
 }
 }
 else
 {
 v1 = 2;
 v2 = 4;
 }
 }
 else
 {
 v1 = 1;
 v2 = 2;
 }
 return v0 + v2 + v1;
}


// Function: loop_modify_var at 0x10f1c
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int cur; // r0
 unsigned int v1; // r3
 unsigned int iter; // r2
 unsigned int v3; // r3

 cur = 0;
 if (a0 > 0)
 goto LABEL_10f28;
 return 0;
LABEL_10f28:
 if (a0 != 1)
 goto LABEL_10f30;
 return 0;
LABEL_10f30:
	v1 = 1;
	iter = 0;
	while (true)
	{
		v1 += 1;
		cur += v1;
		v3 = v1;
		if (v3 > 5)
		{
			do
			{
				iter += 3;
				if (a0 > iter + 4)
					goto LABEL_10f70;
				return cur;
			} while ((v1 = v3 + 1, cur += v3, 5 < v3));
		}
		iter = v3;
		if (a0 > v1)
			goto LABEL_10f70;
		return cur;
	}
LABEL_10f70:
	return cur;
}


// Function: loop_external_state at 0x10f7c
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // r3

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 += 1, v0 != 101));
 return v0;
}


// Function: tail_recursion at 0x10fa4
unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
 unsigned int result; // r3
 unsigned int v1; // r0
 unsigned int v2; // r3
 unsigned int v4; // r0

 result = a0;
 if (result > 1)
 goto LABEL_10fb4;
 return a1;
 do
 {
LABEL_10fb4:
 v2 = result;
 v4 = v2 * a1;
 result = v2 - 1;
 a1 = v4;
 } while (result != 1);
 return v2 * v1;
}


// Function: indirect_recursion_a at 0x10fcc
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int v1; // r1
 unsigned int v2; // r0
 unsigned int v3; // r1
 unsigned int v4; // r0

 if (a1 > 0)
 goto LABEL_10fd4;
 return a0;
LABEL_10fd4:
 v0 = a1;
 v1 = a1 - 4;
 if (!(a0 & 1))
 goto LABEL_11030;
 else
 goto LABEL_10fe4;
 while (true)
 {
 v1 = v3 - 4;
 v0 -= 4;
 if (v1)
 goto LABEL_11028;
 return a0;
LABEL_11028:
 if (((char)a0 & 1))
 {
LABEL_10fe4:
 v4 = a0 * 3;
 if (v0 == 1)
 break;
 v2 = v4 + 2;
 if (v0 > 2)
 goto LABEL_10ffc;
 return v2;
LABEL_10ffc:
 if (!(v2 & 1))
 goto LABEL_11054;
 goto LABEL_11004;
 }
 else
 {
LABEL_11030:
 if (v0 != 1)
 goto LABEL_11040;
 return a0 + (a0 >> 31) >> 1;
LABEL_11040:
 v2 = (a0 + (a0 >> 31) >> 1) + 1;
 if (v0 > 2)
 goto LABEL_1104c;
 return v2;
LABEL_1104c:
 if (((char)v2 & 1))
 {
LABEL_11004:
 v4 = v2 * 3;
 if (v0 == 3)
 break;
 a0 = v4 + 2;
 v3 = v1;
 }
 else
 {
LABEL_11054:
 if (v0 != 3)
 goto LABEL_11064;
 return v2 + (v2 >> 31) >> 1;
LABEL_11064:
 a0 = (v2 + (v2 >> 31) >> 1) + 1;
 v3 = v1;
 }
 }
 }
 return v4 + 1;
}


// Function: call_func_ptr at 0x11078
int call_func_ptr(unsigned int a0, unsigned int a1)
{
	return ((int (*)(unsigned int, unsigned int))a0)(a0, a1);
}


// Function: call_func_ptr_array at 0x11084
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 v0 = (unsigned int)double_value;
 v1 = (unsigned int)triple_value;
 v2 = (unsigned int)recursion_factorial;
 if (2 >= a0)
 {
		if (!(v3 ^ __glibc___stack_chk_guard))
			return ((unsigned int (*)(unsigned int))((&v0)[a0]))(a1);
	}
	else
	{
		if (!(v3 ^ __glibc___stack_chk_guard))
			return 4294967295;
	}
	__stack_chk_fail(); /* do not return */
}

// Function: call_virtual_func at 0x11120
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x11128
unsigned int process_with_callback(unsigned int *a0, unsigned int i, unsigned int *a2)
{
 unsigned int v0; // r4
 unsigned int v1; // r6
 unsigned int *v2; // r5
 unsigned int v3; // r6
 unsigned int *v4; // r5
 unsigned int v5; // r0
 unsigned int v6; // r6

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 v2 = a0 + 1;
 do
 {
 v3 = v1;
 v4 = v2 + 1;
	v0 += 1;
	v6 = v3 + ((unsigned int (*)(unsigned int))a2)(v2[1]);
	v1 = v6;
	v2 = v4;
	} while (i != v0);
	return v3 + v5;
}


// Function: test_control_flow_l2 at 0x11170
extern unsigned int __glibc___stack_chk_guard;
extern char g_11de0;

int test_control_flow_l2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int v13; // lr
 unsigned int v14; // r2
 unsigned int v16; // r3
 unsigned int cur; // r2
 unsigned int v18; // r3
 unsigned int v19; // r2
 unsigned int v20; // r0
 unsigned int v0; // [bp-0x54]
 unsigned int result; // [bp-0x50]
 unsigned int flag1[1]; // [bp-0x4c]
 unsigned int v3; // [bp-0x48]
 unsigned int v4; // [bp-0x44]
 unsigned int v5; // [bp-0x40]
 unsigned int v6; // [bp-0x3c]
 unsigned int v7; // [bp-0x38]
 unsigned int v8; // [bp-0x34]
 unsigned int v9; // [bp-0x30]
 char v10; // [bp-0x2c]
 unsigned int v11; // [bp-0xc]
 unsigned int v12; // [bp-0x4]

 v12 = v13;
 v11 = __glibc___stack_chk_guard;
 puts(0x11de0);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", 12);
 v14 = 0;
 v0 = 0;
 do
 {
 if (v0 == 1)
 goto LABEL_111cc;
 } while ((v14 += 1, v14 != 1001));
 v0 = 1;
LABEL_111cc:
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v14);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
	flag1[0] = 1;
 v3 = 2;
 v4 = 3;
 v5 = 4;
 v6 = 5;
 v7 = 6;
 v8 = 7;
 v9 = 8;
 memset(&v10, 0, 32);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", duffs_device(&v10, &flag1, 8));
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v16 = 0;
 v16 = 1;
 cur = 0;
 while (true)
 {
 cur += v16;
 if (v16 > 5)
 {
 do
 {
 v18 = v16 + 3;
 if (v16 != 5)
 {
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", cur);
 v19 = 0;
 result = 0;
 do
 {
 } while (!result && (v19 += 1, v19 != 101));
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v19);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 120);
 v20 = __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", 30);
 if ((v11 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v20;
 }
 } while ((v16 = 9, cur += 9, v16 = v18, true));
 }
 v16 += 1;
 }
}


// Function: non_local_jump at 0x113e8
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


// Function: cpp_exception at 0x1144c
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


// Function: large_jump_table at 0x11474
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
			return ((int (*)(unsigned int, unsigned int))(&v0)[a0])(a0, a1);
	}
	else
	{
		if (!(v10 ^ __glibc___stack_chk_guard))
			return 4294967295;
	}
	__stack_chk_fail(); /* do not return */
}


// Function: conditional_func_ptr at 0x11524
unsigned int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r1
 unsigned int v1; // r2
 unsigned int v2; // r2
 unsigned int v3; // r0

 if (!a0)
 {
 v3 = double_value(a1);
 return double_value(a1);
 }
 v0 = recursion_factorial;
 v1 = triple_value;
	if (a0 != 1)
		v2 = v0;
	else
		v2 = v1;
	return ((unsigned int (*)(unsigned int))v2)(a1);
}


// Function: state_machine at 0x11558
unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 if (!a0)
 {
 a1 = 0;
	if (!armg_calculate_condition(2, a0, 0, 0))
	{
LABEL_115ae:
 return a1;
 }
 }
 else if (!(armg_calculate_condition(2, a0, 0, 0)))
 {
 goto LABEL_115ae;
 }
 return 0;
}


// Function: fsm_func_table at 0x115bc
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
			return ((int (*)(unsigned int, unsigned int))(&v0)[a1])(a0, a1);
	}
	else
	{
		if (!(v4 ^ __glibc___stack_chk_guard))
			return 3;
	}
	__stack_chk_fail(); /* do not return */
}


// Function: computed_goto at 0x11654
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11694;
extern unsigned int g_116b8;
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
 v0 = 71368;
 v1 = (unsigned int)"\n";
 v2 = 71352;
 v3 = 71316;
	if (3 >= a1)
	{
		return a0;
	}
	else if (!(v4 ^ __glibc___stack_chk_guard))
	{
		return 4294967295;
	}
	else
	{
		__stack_chk_fail(); /* do not return */
	}
	return 0;
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
		;
	}
	return (armg_calculate_condition(5, v0, v5, v6) ? (armg_calculate_condition(5, v0, v5, v6) ? v7 : v7 + (v7 >> 31)) : (armg_calculate_condition(5, v0, v5, v6) ? v7 : v7 + (v7 >> 31)) >> 1);
}


// Function: test_control_flow_l3 at 0x1170c
extern unsigned int __glibc___stack_chk_guard;
extern char g_11fe4;

int test_control_flow_l3()
{
 unsigned int v6; // lr
 unsigned int v10; // r0
 unsigned int result; // [bp-0x1c]
 unsigned int flag1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = __glibc___stack_chk_guard;
 puts(0x11fe4);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump_constprop_0());
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291));
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", 15);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
 result = 0;
 flag1 = 1;
 v2 = 2;
 v3 = 3;
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", computed_goto(&result, 2));
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 v10 = __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v10;
}



/* CRT stub function __aeabi_idiv removed by preprocessor */




/* CRT stub function _divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */



// Function: __aeabi_idiv0 at 0x11aac
int __aeabi_idiv0(int a0)
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */



// Function: sub_11ac0 at 0x11ac0
int sub_11ac0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
	return a0;
}
