// Angr Decompilation of 1_clang_O3_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */



// Function: sub_4004dc at 0x4004dc
void dummy_init_func() {}

void (*g_413008)() = dummy_init_func;

int sub_4004dc()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 ((void (*)())g_413008)();
 return 0;
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

// ARM condition code helper function (decompiler artifact)
int armg_calculate_condition(unsigned int cond, int a, int b, int flags)
{
 switch (cond)
 {
 case 0: return 0; // NV (never)
 case 1: return (a == b); // EQ (equal)
 case 2: return (a != b); // NE (not equal)
 case 3: return ((unsigned)a >= (unsigned)b); // CS/HS (carry set/unsigned higher or same)
 case 4: return ((unsigned)a < (unsigned)b); // CC/LO (carry clear/unsigned lower)
 case 5: return (a < 0); // MI (minus/negative)
 case 6: return (a >= 0); // PL (plus/positive or zero)
 case 7: return 0; // VS (overflow set) - simplified
 case 8: return 1; // VC (overflow clear) - simplified
 case 9: return ((unsigned)a > (unsigned)b); // HI (unsigned higher)
 case 10: return ((unsigned)a <= (unsigned)b); // LS (unsigned lower or same)
 case 11: return (a >= b); // GE (signed greater or equal)
 case 12: return (a < b); // LT (signed less than)
 case 13: return (a > b); // GT (signed greater than)
 case 14: return (a <= b); // LE (signed less or equal)
 case 15: return 1; // AL (always)
 default: return 0;
 }
}



char g_401ded[] = "=== Control Flow Level 1 Tests ===";
char g_401e35[] = "=== Control Flow Level 3 Tests ===";
char g_401e11[] = "=== Control Flow Level 2 Tests ===";
unsigned int g_401e5c[4] = {10, 20, 50, 80};
unsigned int g_401e6c[4] = {1, 2, 3, 4};
unsigned int g_401e9c[4] = {10, 11, 12, 13};


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
extern unsigned int g_401e5c[4];

int switch_small(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = 5812;
 if (a0 <= 3)
 v0 = &g_401e5c;
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
 if (a0 > 0)
 return (0 < a1 ? a1 * a0 : 0);
 return 0;
}


// Function: loop_break at 0x4008dc

unsigned int loop_break(unsigned int a0)
{
 unsigned int v0; // r0

 switch (a0)
 {
 case 20:
 return 1;
 case 30:
 return 2;
 case 40:
 return 3;
 case 50:
 v0 = 4;
 case 10:
 return v0;
 default:
 return 4294967295;
 }
}


// Function: loop_continue at 0x4009c4
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


// Function: goto_forward at 0x4009fc
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v1; // r1

 if (a0 <= 1)
 v1 = 1;
 else
 v1 = a0;
 return a0 * v1 * 2;
}


// Function: goto_backward at 0x400a14
unsigned int goto_backward(unsigned int a0)
{
 unsigned int result; // r0
 unsigned int i; // r0
 unsigned int v2; // r3
 unsigned int v3; // r2
 unsigned int v4; // r3
 unsigned int v5; // r1

 if (a0 < 1)
 {
 result = 1;
 if (!((char)armg_calculate_condition(178, a0, 1, 0)))
 goto LABEL_400a20;
 return 1;
 i = result;
 }
 else
 {
 if (!((char)armg_calculate_condition(178, a0, 1, 0)))
 goto LABEL_400a20;
 return a0;
 i = a0;
 }
LABEL_400a20:
 v2 = 1;
 v3 = 0;
 do
 {
 v3 += 1;
 v5 = v3 * v2;
 v2 = v5;
 } while (i != v3);
 return v3 * v4;
}


// Function: ternary_op at 0x400a44
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 > a1)
 return a0;
 return a1;
}


// Function: test_control_flow_l1 at 0x400a50
extern char g_401ded[];

int test_control_flow_l1()
{
 unsigned int v0; // r0

 puts(&g_401ded);
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


// Function: loop_multi_exit at 0x400c64
extern unsigned int g_401e6c[4];
extern unsigned int g_401e9c[4];

unsigned int loop_multi_exit(unsigned int a0)
{
 if (11 >= a0 - 1)
 goto LABEL_400c74;
 return 4294967295;
LABEL_400c74:
 return g_401e9c[1 + a0] + g_401e6c[1 + a0];
}


// Function: infinite_loop at 0x400c9c
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
 if (!((char)armg_calculate_condition(2, *(ptr), 1, 0)))
 goto LABEL_0x400cbc;
 return v0;
 v2 = v0;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, *(ptr), 1, 0)))
 goto LABEL_0x400cbc;
 return v1;
 v2 = v1;
 }
 } while ((v1 = v2, v0 += 1, v0 != v1));
LABEL_0x400cbc:
 *(ptr) = 1;
 return v1;
}


// Function: multi_return at 0x400cd4
unsigned int multi_return(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int v2; // r1

 if (armg_calculate_condition(66, a0, 0, 0))
 {
 v0 = 4294967295;
 if (!((char)armg_calculate_condition(66, a0, 0, 0)))
 goto LABEL_400ce0;
 return 4294967295;
 v1 = v0;
 }
 else
 {
 if (!((char)armg_calculate_condition(66, a0, 0, 0)))
 goto LABEL_400ce0;
 return a0;
 v1 = a0;
 }
LABEL_400ce0:
 v2 = v1;
 if (50 >= v2)
 goto LABEL_400cf0;
 return 4294967294;
LABEL_400cf0:
 if (((char)v2 & 1))
 return v2 + 1;
 return v2 * 2;
}


// Function: conditional_return at 0x400d00
unsigned int conditional_return(unsigned int a0)
{
 if (0 >= a0)
 return -(a0);
 return a0 * 2;
}


// Function: duffs_device at 0x400d14

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


// Function: __dollar_a_14 at 0x400d5c
int __dollar_a_14(unsigned int *ptr, unsigned int *a1, unsigned int a2)
{
 unsigned int v0; // r4
 unsigned int v1; // r0

 *(ptr) = *(a1);
 if (v0 > 1)
 {
 v1 = sub_400d6c();
 return sub_400d6c();
 }
}


// Function: sub_400d6c at 0x400d6c
int sub_400d6c(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r0

 *(ptr) = *(a1);
 v0 = sub_400d74();
 return sub_400d74();
}


// Function: sub_400d74 at 0x400d74
int sub_400d74(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r0

 *(ptr) = *(a1);
 v0 = sub_400d7c();
 return sub_400d7c();
}


// Function: sub_400d7c at 0x400d7c
int sub_400d7c(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r0

 *(ptr) = *(a1);
 v0 = sub_400d84();
 return sub_400d84();
}


// Function: sub_400d84 at 0x400d84
int sub_400d84(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r0

 *(ptr) = *(a1);
 v0 = sub_400d8c();
 return sub_400d8c();
}


// Function: sub_400d8c at 0x400d8c
int sub_400d8c(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r0

 *(ptr) = *(a1);
 v0 = sub_400d94();
 return sub_400d94();
}


// Function: sub_400d94 at 0x400d94
int sub_400d94(unsigned int *ptr, unsigned int *a1)
{
 unsigned int v0; // r0

 *(ptr) = *(a1);
 v0 = sub_400d9c();
 return sub_400d9c();
}


// Function: sub_400d9c at 0x400d9c
int sub_400d9c(unsigned int *ptr, unsigned int *a1)
{
 unsigned int *v0; // r1
 unsigned int *p; // r0
 unsigned int v2; // r4
 unsigned int v3; // r0

 v0 = a1 + 1;
 p = ptr + 1;
 *(ptr) = *(a1);
 p[0] = v0[0];
 if (1 >= v2)
 goto LABEL_0x400db4;
 v3 = sub_400d6c(&p[1], &v0[1]);
 return sub_400d6c(&p[1], &v0[1]);
LABEL_0x400db4:
 return v3;
}


// Function: loop_complex_cond at 0x400dc4
unsigned int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // r3
 unsigned int v1; // r1
 unsigned int v2; // r3
 unsigned int v3; // r12
 unsigned int v4; // r0

 if (a0 < 1)
 return a0;
 v0 = 0;
 v1 = 0;
 do
 {
 v1 += 2;
 v3 = v0 + 1;
 v4 = a0 - 1;
 } while (a0 >= 2 && v4 > v1 && (v0 = v3, a0 = v4, v2 < 9));
 return v4 + v1 + v2 + 1;
}


// Function: loop_modify_var at 0x400e24
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


// Function: loop_external_state at 0x400e60
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // r0

 v0 = 0;
 do
 {
 if (!*(a0))
 goto LABEL_0x400e74;
 return v0;
 } while ((v0 += 1, v0 != 101));
 return 101;
LABEL_0x400e74:
 return 0;
}


// Function: recursion_factorial at 0x400e88
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


// Function: tail_recursion at 0x400eb8
unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int v1; // r1
 unsigned int v2; // r0
 unsigned int v3; // r2

 if (a0 < 2)
 {
 if (!((char)armg_calculate_condition(178, a0, 2, 0)))
 goto LABEL_400ec4;
 return a1;
 v0 = a1;
 }
 else
 {
 if (!((char)armg_calculate_condition(178, a0, 2, 0)))
 goto LABEL_400ec4;
 return a0;
 v0 = a0;
 }
 do
 {
LABEL_400ec4:
 v2 = v0;
 v3 = a1 * v2;
 v0 = v2 - 1;
 a1 = v3;
 } while (2 < v2);
 return v1 * v2;
}


// Function: indirect_recursion_a at 0x400ee4
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int cur; // r1
 unsigned int v1; // r0

 if (a1 < 1)
 return a0;
 cur = a1 + 2;
 while (1)
 {
 v1 = a0;
 if (!((char)v1 & 1))
 {
 if (cur != 3)
 goto LABEL_400f04;
 return v1 + (v1 >> 31) >> 1;
LABEL_400f04:
 cur -= 2;
 a0 = (v1 + (v1 >> 31) >> 1) + 1;
 if (cur < 3)
 return (v1 + (v1 >> 31) >> 1) + 1;
 }
 else if (cur != 3)
 {
 cur -= 2;
 a0 = v1 * 3 + 2;
 if (3 > cur)
 return v1 * 3 + 2;
 }
 else
 {
 return v1 * 3 + 1;
 }
 }
}


// Function: call_func_ptr at 0x400f44
int call_func_ptr(unsigned int a0, unsigned int a1)
{
 return a0;
}


// Function: call_func_ptr_array at 0x400f50

unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 if (2 < a0)
 {
 v0 = 4294967295;
 if (!((char)armg_calculate_condition(130, a0, 2, 0)))
 goto LABEL_0x400f5c;
 return 4294967295;
 v1 = v0;
 }
 else
 {
 if (!((char)armg_calculate_condition(130, a0, 2, 0)))
 goto LABEL_0x400f5c;
 return a0;
 v1 = a0;
 }
LABEL_0x400f5c:
 return v1;
}


// Function: __dollar_a_16 at 0x400f74
unsigned int __dollar_a_16(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x400f7c
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: call_virtual_func at 0x400f84
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x400f8c
unsigned int process_with_callback(unsigned int *a0, unsigned int a1, unsigned int (*a2)(unsigned int))
{
 unsigned int v0; // r6
 unsigned int result; // r5
 unsigned int v2; // r6
 unsigned int *v3; // r7
 unsigned int v4; // r0
 unsigned int v5; // r6
 unsigned int v6; // r5

 if (a1 < 1)
 return 0;
 v0 = 0;
 do
 {
 result = a1;
 v2 = v0;
 v3 = a0 + 1;
 v4 = a2(*(a0));
 v5 = v4 + v2;
 v6 = result - 1;
 a0 = v3;
 v0 = v5;
 a1 = v6;
 } while (result != 1);
 return v4 + v2;
}


// Function: test_control_flow_l2 at 0x400fdc
int test_control_flow_l2()
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 unsigned int v4; // r1
 unsigned int v5; // r5
 unsigned int v6; // r6
 unsigned int v7; // r0
 unsigned int v8; // r6
 unsigned int v9; // r6
 unsigned int v10; // r1
 unsigned int v11; // r0
 unsigned int result; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 puts(&g_401e11);
 printf("CF-L2-01 (loop_multi_exit): %d\n", 12);
 v2 = 0;
 v3 = 1001;
 v1 = 0;
 do
 {
 if (v1 == 1)
 {
 v4 = v2;
 goto LABEL_401038;
 }
 } while ((v2 += 1, v2 != 1001));
 v1 = 1;
 v4 = v3;
LABEL_401038:
 printf("CF-L2-02 (infinite_loop): %d\n", v4);
 v5 = 4294967295;
 printf("CF-L2-03 (multi_return): %d\n", 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", 4294967294);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v6 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 printf("CF-L2-05 (duffs_device): %d\n", 8);
 v7 = 11;
 do
 {
 v8 = v6;
 } while (v7 - 2 > v8 - 8 && (v5 += 1, v7 -= 1, v9 = v8 + 2, v6 = v8 + 2, v5 < 9));
 printf("CF-L2-06 (loop_complex_cond): %d\n", v8 + 2);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 v10 = 0;
 result = 0;
 while (!result)
 {
 if (v10 + 1 == 101)
 {
 v10 = 101;
 break;
 }
 }
 printf("CF-L2-08 (loop_external_state): %d\n", v10);
 printf("CF-L2-09 (recursion_factorial): %d\n", 120);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 printf("CF-L2-11 (indirect_recursion): %d\n", 3);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
 v11 = printf("CF-L2-15 (process_with_callback): %d\n", 30);
 return printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


// Function: cpp_exception at 0x401248
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


// Function: large_jump_table at 0x401264

unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v0 = 4294967295;
 if (!((char)armg_calculate_condition(130, a0, 9, 0)))
 goto LABEL_0x401270;
 return 4294967295;
LABEL_0x401270:
 v1 = v0;
}


// Function: __dollar_a_22 at 0x40128c
int __dollar_a_22(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: op_sub at 0x401294
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x40129c
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: op_div at 0x4012a8
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x4]

 if (!a1)
 {
 a0 = 0;
 if (!((char)armg_calculate_condition(2, a1, 0, 0)))
 goto LABEL_4012b4;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a1, 0, 0)))
 goto LABEL_4012b4;
 return a0;
 }
LABEL_4012b4:
 v0 = a0 / a1;
 v1 = __divsi3(a0);
 return __divsi3(a0);
}


// Function: op_mod at 0x4012c4
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r1
 unsigned int v0; // [bp-0x4]

 if (!a1)
 {
 a0 = 0;
 if (!((char)armg_calculate_condition(2, a1, 0, 0)))
 goto LABEL_4012d0;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a1, 0, 0)))
 goto LABEL_4012d0;
 return a0;
 }
LABEL_4012d0:
 v0 = a0 % a1;
 v1 = __aeabi_idivmod(a0, a1);
 return v1;
}


// Function: op_and at 0x4012e4
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: op_or at 0x4012ec
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a1 | a0;
}


// Function: op_xor at 0x4012f4
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: op_shl at 0x4012fc
unsigned int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31) & a1 - 32 >> 31;
}


// Function: op_shr at 0x401304
unsigned int op_shr(unsigned int a0, char a1)
{
 return (a1 < 32 ? a0 >> a1 : a0 >> 31);
}


// Function: conditional_func_ptr at 0x40130c
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int (*v0)(unsigned int); // r2
 unsigned int (*v1)(unsigned int); // r3
 unsigned int (*v2)(unsigned int); // r3
 unsigned int (*v3)(unsigned int); // r2
 unsigned int (*v4)(unsigned int); // r2

 v0 = (unsigned int (*)(unsigned int))triple_value;
 v1 = (unsigned int (*)(unsigned int))recursion_factorial;
 if (a0 == 1)
 v2 = v0;
 else
 v2 = v1;
 v3 = (unsigned int (*)(unsigned int))__dollar_a_16;
 if (a0)
 v4 = v2;
 else
 v4 = v3;
 return v4(a1);
}


// Function: state_machine at 0x401348

unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 switch (a1)
 {
 case 0:
 return a0 - 1 + -(a0 - 1) + (a0 - 1 <= 0);
 case 1:
 if (a0 == 2)
 return 2;
 return (a0 == 99 ? 3 : 1);
 case 2:
 return a1;
 case 3:
 return (a0 ? 3 : 0);
 default:
 a1 = 3;
 break;
 }
}


// Function: fsm_func_table at 0x4013b0

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 if (!((char)armg_calculate_condition(130, a1, 3, 0)))
 goto LABEL_0x4013bc;
 return 3;
LABEL_0x4013bc:
 return a1;
}


// Function: __dollar_a_28 at 0x4013d0
int __dollar_a_28(unsigned int a0)
{
 return a0 - 1 + -(a0 - 1) + (a0 - 1 <= 0);
}


// Function: state_processing at 0x4013e0
unsigned int state_processing(unsigned int a0)
{
 if (a0 == 2)
 return 2;
 return (a0 == 99 ? 3 : 1);
}


// Function: state_done at 0x4013f8
unsigned int state_done()
{
 return 2;
}


// Function: state_error at 0x401400
unsigned int state_error(unsigned int a0)
{
 return (a0 ? 3 : 0);
}


// Function: computed_goto at 0x40140c

unsigned int computed_goto(unsigned int a0, unsigned int a1)
{
}


// Function: obfuscated_cf at 0x40144c
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: opaque_predicate at 0x401454
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: overlapped_code at 0x40145c
unsigned int overlapped_code(unsigned int a0)
{
 if (((char)a0 & 1))
 return a0 * 3 + 1;
 return a0 + (a0 >> 31) >> 1;
}


// Function: test_control_flow_l3 at 0x401478
int test_control_flow_l3()
{
 unsigned int v3; // r0

 puts(&g_401e35);
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


// Function: main at 0x401590
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



// Function: sub_401800 at 0x401800
int sub_401800(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0;
}

