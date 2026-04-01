// Angr Decompilation of 1_clang_Os_no_g
// Platform: ARMEL

// Global variable definitions
unsigned int g_40185c[12] = {0};
char g_401de1[] = "CF-L1";
char g_401e05[] = "CF-L2";
char g_401e29[] = "CF-L3";
unsigned int g_401e70[4] = {10, 20, 30, 50};


// Stub function for armg_calculate_condition
int armg_calculate_condition(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return 1;
}


/* CRT stub function _init removed by preprocessor */



// Function: sub_4004dc at 0x4004dc
extern unsigned int g_413008;

int sub_4004dc()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400594 at 0x400594
void sub_400594()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: sequential_ops at 0x4006c4
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a1 + a0) * 2 - a2;
}


// Function: single_if at 0x4006d0
unsigned int single_if(unsigned int a0)
{
 return a0 << ((char)(0 < a0 ? 1 : 0) & 31) & (0 < a0 ? 1 : 0) - 32 >> 31;
}


// Function: if_else at 0x4006e4
unsigned int if_else(unsigned int a0)
{
 return (0 < a0 ? 1 : 0);
}


// Function: nested_if_2 at 0x4006f8
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r2

 v0 = a0;
 if (0 < a1)
 v0 += a1;
 if (a0 > 0)
 return v0;
 return 0;
}


// Function: nested_if_deep at 0x400714
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int result; // r0
 unsigned int v2; // r0
 char v0; // [bp+0x0]

 if (a0 < 1)
 {
 result = 0;
 if (!((char)armg_calculate_condition(178, a0, 1, 0)))
 goto LABEL_400720;
 return 0;
 v2 = result;
 }
 else
 {
 if (!((char)armg_calculate_condition(178, a0, 1, 0)))
 goto LABEL_400720;
 return a0;
 v2 = a0;
 }
LABEL_400720:
 if (a1 < 1)
 {
 v2 = 1;
 if (!((char)armg_calculate_condition(178, a1, 1, 0)))
 goto LABEL_40072c;
 return 1;
 }
 else
 {
 if (!((char)armg_calculate_condition(178, a1, 1, 0)))
 goto LABEL_40072c;
 return v2;
 }
LABEL_40072c:
 if (a2 < 1)
 {
 v2 = 2;
 if (!((char)armg_calculate_condition(178, a2, 1, 0)))
 goto LABEL_400738;
 return 2;
 }
 else
 {
 if (!((char)armg_calculate_condition(178, a2, 1, 0)))
 goto LABEL_400738;
 return v2;
 }
LABEL_400738:
 if (a3 < 1)
 {
 if (!((char)armg_calculate_condition(178, a3, 1, 0)))
 goto LABEL_400744;
 return 3;
 }
 else
 {
 if (!((char)armg_calculate_condition(178, a3, 1, 0)))
 goto LABEL_400744;
 return v2;
 }
LABEL_400744:
 return (0 < *((int *)&v0) ? 5 : 4);
}


// Function: if_elseif_chain at 0x400758
unsigned int if_elseif_chain(unsigned int a0)
{
 return (a0 < 3 ? 10 + a0 * 10 : 4294967295);
}


// Function: if_elseif_long at 0x400774
unsigned int if_elseif_long(unsigned int a0)
{
 return (a0 < 5 ? a0 * 100 + 100 : 4294967295);
}


// Function: switch_small at 0x400790

int switch_small(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = 5832;
 if (a0 <= 3)
 v0 = &g_401e70;
 return *((int *)(v0 + a0 * 4));
}


// Function: switch_large at 0x4007b0
unsigned int switch_large(unsigned int a0)
{
 return (a0 < 10 ? a0 * 10 : 4294967295);
}


// Function: switch_default at 0x4007c8
unsigned int switch_default(unsigned int a0)
{
 unsigned int v0; // r1

 v0 = a0 - 1;
 return (v0 < 3 ? v0 * 100 + 100 : 0);
}


// Function: switch_fallthrough at 0x4007e4
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int v0; // r1

 v0 = 0;
 if (a0 != 1)
 {
 if (a0 != 2)
 {
 if (a0 == 3)
 v0 = 12;
 else
 return 4294967295;
 }
 v0 += a0 * 2;
 }
 return v0 + a0;
}


// Function: loop_for_fixed at 0x400818
unsigned int loop_for_fixed(unsigned int a0)
{
 unsigned int result; // r0
 unsigned int v1; // r0

 if (a0 < 1)
 {
 result = 0;
 if (!((char)armg_calculate_condition(178, a0, 1, 0)))
 goto LABEL_400824;
 return 0;
 v1 = result;
 }
 else
 {
 if (!((char)armg_calculate_condition(178, a0, 1, 0)))
 goto LABEL_400824;
 return a0;
 v1 = a0;
 }
LABEL_400824:
 return (((v1 - 1) * (v1 - 2) >> 32 & 1) * 0x80000000 | (v1 - 1) * (v1 - 2) >> 1) + v1 - 1;
}


// Function: loop_while at 0x400848
unsigned int loop_while(unsigned int a0)
{
 unsigned int result; // r0
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int v3; // r0
 unsigned int v4; // r0

 if (!a0)
 {
 result = 1;
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_400854;
 return 1;
 v1 = result;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_400854;
 return a0;
 v1 = a0;
 }
LABEL_400854:
 v2 = 0;
 do
 {
 v4 = v2 + 1;
 v2 = v4;
 v1 = (v1 * 1717986919 >> 34) + (v1 * 1717986919 >> 63);
 } while (18 < v1 + 9);
 return v3 + 1;
}


// Function: loop_dowhile at 0x400888
unsigned int loop_dowhile(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int v2; // r0

 v0 = 0;
 do
 {
 v2 = v0 + 1;
 a0 = (a0 * 1717986919 >> 34) + (a0 * 1717986919 >> 63);
 v0 = v2;
 } while (18 < a0 + 9);
 return v1 + 1;
}


// Function: loop_nested at 0x4008bc
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 return (0 < a0 ? (a1 & ~(a1 >> 31)) * a0 : 0);
}


// Function: loop_break at 0x4008d4
unsigned int loop_break(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = 0;
 do
 {
 if (*((int *)(4200520 + 4 * v0)) != a0)
 {
  v0 += 1;
  continue;
 }
 return v0;
 } while ((v0 += 1, v0 != 5));
 return 4294967295;
}


// Function: loop_continue at 0x400908
unsigned int loop_continue(unsigned int i)
{
 unsigned int v0; // r2
 unsigned int v1; // r1

 if (i < 1)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v0 += 1;
 if (((char)v0 & 1))
 v1 += v0;
 } while (i != v0);
 return v1;
}


// Function: goto_forward at 0x40093c
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v1; // r1

 if (a0 <= 1)
 v1 = 1;
 else
 v1 = a0;
 return a0 * v1 * 2;
}


// Function: goto_backward at 0x400954
unsigned int goto_backward(unsigned int i)
{
 unsigned int v0; // r3
 unsigned int v1; // r2
 unsigned int v2; // r3
 unsigned int v3; // r1

 if (i < 1)
 return 1;
 v0 = 1;
 v1 = 0;
 do
 {
 v1 += 1;
 v3 = v1 * v0;
 v0 = v3;
 } while (i != v1);
 return v1 * v2;
}


// Function: ternary_op at 0x400988
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 > a1)
 return a0;
 return a1;
}


// Function: test_control_flow_l1 at 0x400994
extern char g_401de1[];

int test_control_flow_l1()
{
 unsigned int v0; // r0

 puts(&g_401de1);
 printf("CF-L1-01 (sequential_ops): %d\n", 21);
 printf("CF-L1-02 (single_if): %d\n", 20);
 printf("CF-L1-02 (single_if): %d\n", 4294967291);
 printf("CF-L1-03 (if_else): %d\n", 1);
 printf("CF-L1-03 (if_else): %d\n", 0);
 printf("CF-L1-04 (nested_if_2): %d\n", 15);
 printf("CF-L1-04 (nested_if_2): %d\n", 10);
 printf("CF-L1-04 (nested_if_2): %d\n", 0);
 printf("CF-L1-05 (nested_if_deep): %d\n", 5);
 printf("CF-L1-06 (if_elseif_chain): %d\n", 20);
 printf("CF-L1-07 (if_elseif_long): %d\n", 400);
 printf("CF-L1-08 (switch_small): %d\n", 50);
 printf("CF-L1-09 (switch_large): %d\n", 70);
 printf("CF-L1-10 (switch_default): %d\n", 0);
 printf("CF-L1-11 (switch_fallthrough): %d\n", 21);
 printf("CF-L1-12 (loop_for_fixed): %d\n", 45);
 printf("CF-L1-13 (loop_while): %d\n", 5);
 printf("CF-L1-14 (loop_dowhile): %d\n", 4);
 printf("CF-L1-15 (loop_nested): %d\n", 12);
 printf("CF-L1-16 (loop_break): %d\n", 2);
 printf("CF-L1-16 (loop_break): %d\n", 4294967295);
 printf("CF-L1-17 (loop_continue): %d\n", 25);
 printf("CF-L1-18 (goto_forward): %d\n", 50);
 printf("CF-L1-18 (goto_forward): %d\n", 4294967290);
 printf("CF-L1-19 (goto_backward): %d\n", 120);
 printf("CF-L1-20 (ternary_op): %d\n", 10);
 v0 = printf("CF-L1-20 (ternary_op): %d\n", 8);
 return printf("CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x400ba8

unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned int v0; // r12
 unsigned int v1; // r2
 unsigned int v2; // r1
 unsigned int vvar_32;
 unsigned int vvar_45;
 unsigned int vvar_2;

 v0 = 0;
 vvar_32 = 0;
 v1 = &g_40185c;
 do
 {
 v2 = 0;
 do
 {
 if (*((int *)(v1 + v2 * 4)) == a0)
 return v2 - v0;
 } while ((v2 += 1, v2 != 4));
 vvar_45 = vvar_2 + 1;
 v1 += 16;
 v0 -= 10;
 } while (vvar_2 != 3);
 return 4294967295;
}


// Function: infinite_loop at 0x400c04
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // r2
 unsigned int v1; // r0
 unsigned int v2; // r0

 v0 = 0;
 v1 = 1001;
 do
 {
 if (*(ptr) == 1)
 {
 return v0;
 }
 else
 {
 return v1;
 }
 } while ((v1 = v2, v0 += 1, v0 != v1));
 *(ptr) = 1;
 return v1;
}


// Function: multi_return at 0x400c3c
unsigned int multi_return(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int v2; // r1

 if (armg_calculate_condition(66, a0, 0, 0))
 {
 v0 = 4294967295;
 if (!((char)armg_calculate_condition(66, a0, 0, 0)))
 goto LABEL_400c48;
 return 4294967295;
 v1 = v0;
 }
 else
 {
 if (!((char)armg_calculate_condition(66, a0, 0, 0)))
 goto LABEL_400c48;
 return a0;
 v1 = a0;
 }
LABEL_400c48:
 v2 = v1;
 if (50 >= v2)
 goto LABEL_400c58;
 return 4294967294;
LABEL_400c58:
 if (((char)v2 & 1))
 return v2 + 1;
 return v2 * 2;
}


// Function: conditional_return at 0x400c68
unsigned int conditional_return(unsigned int a0)
{
 if (0 >= a0)
 return -(a0);
 return a0 * 2;
}


// Function: duffs_device at 0x400c7c

unsigned int duffs_device(unsigned int a0, unsigned int a1, unsigned int a2)
{
 switch (a2)
 {
 case 0:
 break;
 default:
 return 4294967295;
 }
}


// Function: __dollar_a_14 at 0x400cc4
int __dollar_a_14(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r0

 *(ptr) = *(a1);
 v0 = sub_400ccc();
 return sub_400ccc();
}


// Function: sub_400ccc at 0x400ccc
int sub_400ccc(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r0

 *(ptr) = *(a1);
 v0 = sub_400cd4();
 return sub_400cd4();
}


// Function: sub_400cd4 at 0x400cd4
int sub_400cd4(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r0

 *(ptr) = *(a1);
 v0 = sub_400cdc();
 return sub_400cdc();
}


// Function: sub_400cdc at 0x400cdc
int sub_400cdc(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r0

 *(ptr) = *(a1);
 v0 = sub_400ce4();
 return sub_400ce4();
}


// Function: sub_400ce4 at 0x400ce4
int sub_400ce4(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r0

 *(ptr) = *(a1);
 v0 = sub_400cec();
 return sub_400cec();
}


// Function: sub_400cec at 0x400cec
int sub_400cec(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r0

 *(ptr) = *(a1);
 v0 = sub_400cf4();
 return sub_400cf4();
}


// Function: sub_400cf4 at 0x400cf4
int sub_400cf4(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r0

 *(ptr) = *(a1);
 v0 = sub_400cfc();
 return sub_400cfc();
}


// Function: sub_400cfc at 0x400cfc
int sub_400cfc(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r4
 unsigned int v1; // r0

 *(ptr) = *(a1);
 if (1 < v0)
 {
 v1 = __dollar_a_14((char *)ptr + 1, (char *)a1 + 1);
 return __dollar_a_14((char *)ptr + 1, (char *)a1 + 1);
 }
}


// Function: loop_complex_cond at 0x400d1c
int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // r3
 unsigned int v1; // r1
 unsigned int v2; // r3
 unsigned int v3; // r12

 if (a0 >= 1)
 {
 v0 = 0;
 v1 = 0;
 do
 {
 v1 += 2;
 v3 = v0 + 1;
 a0 -= 1;
 } while (a0 >= 2 && a0 > v1 && (v0 = v3, a0 = a0, v2 < 9));
 }
 else
 {
 v1 = 0;
 v3 = 0;
 }
 return a0 + v1 + v3;
}


// Function: loop_modify_var at 0x400d74
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int v0; // r2
 unsigned int v1; // r1
 unsigned int v2; // r1
 unsigned int v3; // r2
 unsigned int v4; // r1
 unsigned int v6; // r2
 unsigned int v7; // r2

 if (a0 < 1)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v3 = v0;
 v4 = v3 + v1;
 if (5 < v3)
 v6 = v3 + 2;
 else
 v6 = v3;
 } while ((v7 = v6 + 1, v0 = v6 + 1, v1 = v4, v0 < a0));
 return v3 + v2;
}


// Function: loop_external_state at 0x400dac
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


// Function: recursion_factorial at 0x400dd4
unsigned int recursion_factorial(unsigned int a0)
{
 unsigned int v0; // r2
 unsigned int v1; // r0
 unsigned int v2; // r2
 unsigned int v3; // r1

 if (a0 < 2)
 return 1;
 v0 = 1;
 do
 {
 v1 = a0;
 v3 = v1 * v0;
 v0 = v3;
 a0 = v1 - 1;
 } while (2 < v1);
 return v1 * v2;
}


// Function: tail_recursion at 0x400e04
unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int v1; // r1
 unsigned int v2; // r2

 if (2 > a0)
 return a1;
 do
 {
 v0 = a0;
 v2 = a1 * v0;
 a1 = v2;
 a0 = v0 - 1;
 } while (2 < v0);
 return v1 * v0;
}


// Function: indirect_recursion_a at 0x400e34
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r1

 if (a1 < 1)
 return a0;
 v0 = a1 + 2;
 while (1)
 {
 if (!((char)a0 & 1))
 {
 if (v0 != 3)
 goto LABEL_400e58;
 return a0 + (a0 >> 31) >> 1;
LABEL_400e58:
 a0 = (a0 + (a0 >> 31) >> 1) + 1;
 }
 else if (v0 != 3)
 {
 a0 = a0 * 3 + 2;
 }
 else
 {
 return a0 * 3 + 1;
 }
 v0 -= 2;
 if (3 > v0)
 return a0;
 }
}


// Function: call_func_ptr at 0x400e88
int call_func_ptr(unsigned int a0, unsigned int a1)
{
 return ((int (*)(unsigned int, unsigned int))a0)(a0, a1);
}


// Function: call_func_ptr_array at 0x400e94

unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 if (2 < a0)
 {
 v0 = 4294967295;
 if (!((char)armg_calculate_condition(130, a0, 2, 0)))
 return 4294967295;
 return 4294967295;
 v1 = v0;
 }
 else
 {
 if (!((char)armg_calculate_condition(130, a0, 2, 0)))
 return a0;
 return a0;
 v1 = a0;
 }
}


// Function: __dollar_a_16 at 0x400eb8
unsigned int __dollar_a_16(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x400ec0
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: call_virtual_func at 0x400ec8
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x400ed0
unsigned int process_with_callback(unsigned int *a0, unsigned int a1, unsigned int (*a2)(unsigned int))
{
 unsigned int v0; // r6
 unsigned int result; // r5
 unsigned int *v2; // r7
 unsigned int *v3; // r7
 unsigned int v4; // r5

 if (a1 < 1)
 return 0;
 v0 = 0;
 do
 {
 result = a1;
 v2 = a0;
 v3 = v2 + 1;
 v0 += a2(*(v2));
 v4 = result - 1;
 a0 = v3;
 a1 = v4;
 } while (result != 1);
 return v0;
}


// Function: test_control_flow_l2 at 0x400f18

int test_control_flow_l2()
{
 unsigned int v11; // r0
 unsigned int v12; // r2
 unsigned int v22; // r0
 unsigned int v23; // r6
 unsigned int v24; // r6
 unsigned int v25; // r1
 unsigned int v26; // r0
 unsigned int v13; // r1
 unsigned int v14; // r3
 unsigned int v15; // r1
 unsigned int v16; // r0
 unsigned int v17; // r1
 unsigned int v18; // r1
 unsigned int v19; // r7
 unsigned int v20; // r6
 unsigned int result; // [bp-0x60]
 char v1; // [bp-0x5c]
 unsigned int flag1; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 unsigned int v4; // [bp-0x34]
 unsigned int v5; // [bp-0x30]
 unsigned int v6; // [bp-0x2c]
 unsigned int v7; // [bp-0x28]
 unsigned int v8; // [bp-0x24]
 unsigned int v9; // [bp-0x20]
 unsigned int v10; // [bp-0x1c]

 puts(&g_401e05);
 v11 = 0;
 v12 = 0;
 v13 = &g_40185c;
while (1)
 {
  v14 = 0;
 do
 {
 if (*((int *)(v13 + v14 * 4)) == 7)
 {
 v15 = v14 - v11;
 goto LABEL_400f78;
 }
 } while ((v14 += 1, v14 != 4));
 v12 += 1;
 v13 += 16;
 v11 -= 10;
 if (v12 == 3)
 {
 v15 = 4294967295;
LABEL_400f78:
 printf("CF-L2-01 (loop_multi_exit): %d\n", v15);
 v16 = 0;
 v17 = 1001;
 v10 = 0;
 do
 {
 if (v10 == 1)
 {
 v18 = v16;
 goto LABEL_400fbc;
 }
 } while ((v16 += 1, v16 != 1001));
 v10 = 1;
 v18 = v17;
LABEL_400fbc:
 printf("CF-L2-02 (infinite_loop): %d\n", v18);
 v19 = 4294967295;
 printf("CF-L2-03 (multi_return): %d\n", 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", 4294967294);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v20 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 flag1 = 1;
 v3 = 2;
 v4 = 3;
 v5 = 4;
 v6 = 5;
 v7 = 6;
 v8 = 7;
 v9 = 8;
 printf("CF-L2-05 (duffs_device): %d\n", duffs_device(&v1, &flag1, 8));
 v22 = 11;
 do
 {
 v23 = v20;
 } while (v22 - 2 > v23 - 8 && (v19 += 1, v22 -= 1, v24 = v23 + 2, v20 = v23 + 2, v19 < 9));
 printf("CF-L2-06 (loop_complex_cond): %d\n", v23 + 2);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 v25 = 0;
 result = 0;
 do
 {
 if (result)
 goto LABEL_4010c4;
 } while ((v25 += 1, v25 != 101));
 v25 = 101;
LABEL_4010c4:
 printf("CF-L2-08 (loop_external_state): %d\n", v25);
 printf("CF-L2-09 (recursion_factorial): %d\n", 120);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 printf("CF-L2-11 (indirect_recursion): %d\n", 3);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
 v26 = printf("CF-L2-15 (process_with_callback): %d\n", 30);
 return printf("CF-L2-15 (process_with_callback): %d\n", 30);
 }
 }
}





// Function: cpp_exception at 0x4011f8
unsigned int cpp_exception(unsigned int a0)
{
 unsigned int v0; // r1

 v0 = a0 * 2;
 if (100 < a0)
 v0 = 4294967294;
 if (!armg_calculate_condition(209, a0, 1, 0))
 return v0;
 return 4294967295;
}


// Function: large_jump_table at 0x401214

unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v0 = 4294967295;
 if (!((char)armg_calculate_condition(130, a0, 9, 0)))
 return 4294967295;
 return 4294967295;
 v1 = v0;
}


// Function: __dollar_a_22 at 0x40123c
int __dollar_a_22(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: op_sub at 0x401244
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x40124c
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: op_div at 0x401258
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x4]
 unsigned int vvar_4;

 if (!a1)
 {
 a0 = 0;
 if (!((char)armg_calculate_condition(2, a1, 0, 0)))
 goto LABEL_401264;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a1, 0, 0)))
 goto LABEL_401264;
 return a0;
 }
LABEL_401264:
 v0 = vvar_4;
 v1 = __divsi3(a0);
 return __divsi3(a0);
}


// Function: op_mod at 0x401274
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r1
 unsigned int v0; // [bp-0x4]
 unsigned int vvar_4;

 if (!a1)
 {
 a0 = 0;
 if (!((char)armg_calculate_condition(2, a1, 0, 0)))
 goto LABEL_401280;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a1, 0, 0)))
 goto LABEL_401280;
 return a0;
 }
LABEL_401280:
 v0 = vvar_4;
 __aeabi_idivmod(a0);
 return v1;
}


// Function: op_and at 0x401294
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: op_or at 0x40129c
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a1 | a0;
}


// Function: op_xor at 0x4012a4
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: op_shl at 0x4012ac
unsigned int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31) & a1 - 32 >> 31;
}


// Function: op_shr at 0x4012b4
unsigned int op_shr(unsigned int a0, char a1)
{
 return (a1 < 32 ? a0 >> a1 : a0 >> 31);
}


// Function: conditional_func_ptr at 0x4012bc
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r2
 unsigned int v1; // r3
 unsigned int v2; // r3
 unsigned int v3; // r2
 unsigned int v4; // r2

 v0 = triple_value;
 v1 = recursion_factorial;
 if (a0 == 1)
 v2 = v0;
 else
 v2 = v1;
 v3 = __dollar_a_16;
 if (a0)
 v4 = v2;
 else
 v4 = v3;
 return ((int (*)(unsigned int, unsigned int))v4)(a0, a1);
}


// Function: state_machine at 0x4012f8

unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 switch (a1)
 {
 case 0:
 a1 = a0 - 1 + -(a0 - 1) + (a0 - 1 <= 0);
 break;
 case 1:
 a1 = (a0 == 99 ? 3 : 1);
 if (a0 == 2)
 a1 = 2;
 break;
 case 2:
 break;
 case 3:
 a1 = (a0 ? 3 : 0);
 break;
 default:
 a1 = 3;
 break;
 }
 return a1;
}


// Function: fsm_func_table at 0x401360

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 if (!((char)armg_calculate_condition(130, a1, 3, 0)))
 return 0;
 return 3;
}


// Function: __dollar_a_28 at 0x401380
int __dollar_a_28(unsigned int a0)
{
 return a0 - 1 + -(a0 - 1) + (a0 - 1 <= 0);
}


// Function: state_processing at 0x401390
unsigned int state_processing(unsigned int a0)
{
 if (a0 == 2)
 return 2;
 return (a0 == 99 ? 3 : 1);
}


// Function: state_done at 0x4013a8
unsigned int state_done()
{
 return 2;
}


// Function: state_error at 0x4013b0
unsigned int state_error(unsigned int a0)
{
 return (a0 ? 3 : 0);
}


// Function: computed_goto at 0x4013bc

unsigned int computed_goto(unsigned int a0, unsigned int a1)
{
}


// Function: obfuscated_cf at 0x4013fc
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: opaque_predicate at 0x401404
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: overlapped_code at 0x40140c
unsigned int overlapped_code(unsigned int a0)
{
 if (((char)a0 & 1))
 return a0 * 3 + 1;
 return a0 + (a0 >> 31) >> 1;
}


// Function: test_control_flow_l3 at 0x401428

int test_control_flow_l3()
{
 unsigned int v3; // r0

 puts(&g_401e29);
 printf("CF-L3-01 (non_local_jump): %d\n", 10);
 printf("CF-L3-01 (non_local_jump): %d\n", 4294967295);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", 4294967295);
 printf("CF-L3-03 (large_jump_table): %d\n", 15);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto(printf("CF-L3-06 (fsm_func_table): %d\n", 2), 2));
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 v3 = printf("CF-L3-10 (overlapped_code): %d\n", 16);
 return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


// Function: main at 0x401540
unsigned int main()
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function _divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */



// Function: sub_4017b0 at 0x4017b0
int sub_4017b0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0;
}

