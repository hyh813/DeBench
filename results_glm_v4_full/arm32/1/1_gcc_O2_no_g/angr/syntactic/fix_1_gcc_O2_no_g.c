// Angr Decompilation of 1_gcc_O2_no_g
// Platform: ARMEL

#ifndef true
#define true 1
#endif
#ifndef false
#define false 0
#endif

/* CRT stub function _init removed by preprocessor */

/* Stub implementations for angr-specific functions */

static unsigned int Clz(unsigned int x) {
    if (x == 0) return 32;
    unsigned int count = 0;
    while (!(x & 0x80000000)) {
        count++;
        x <<= 1;
    }
    return count;
}

static int armg_calculate_condition(unsigned int op, unsigned int a, unsigned int b, unsigned int c) {
    /* Stub implementation - return a reasonable default */
    (void)op; (void)a; (void)b; (void)c;
    return 1;
}

static unsigned int armg_calculate_flag_c(unsigned int v1, unsigned int v2, unsigned int v3, unsigned int v4) {
    /* Stub implementation - return a reasonable default */
    (void)v1; (void)v2; (void)v3; (void)v4;
    return 0;
}

static unsigned int armg_calculate_flag_v(unsigned int v1, unsigned int v2, unsigned int v3, unsigned int v4) {
    /* Stub implementation - return a reasonable default */
    (void)v1; (void)v2; (void)v3; (void)v4;
    return 0;
}

unsigned int __glibc___stack_chk_guard = 0;



// Function: sub_10454 at 0x10454
extern unsigned int g_23008;

int sub_10454()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}


// Function: main at 0x104e0
unsigned int test_control_flow_l2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);

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


// Function: sequential_ops at 0x106e0
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a0 + a1) * 2 - a2;
}


// Function: single_if at 0x106ec
unsigned int single_if(unsigned int a0)
{
 if (0 >= a0)
 return a0;
 return a0 * 2;
}


// Function: if_else at 0x106f8
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


// Function: nested_if_2 at 0x10708
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


// Function: nested_if_deep at 0x10724
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


// Function: if_elseif_chain at 0x10778
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


// Function: if_elseif_long at 0x107a8
unsigned int if_elseif_long(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int v2; // r0

 if (a0 <= 4)
 {
 v0 = a0 + 1;
 if (!armg_calculate_condition(146, a0, 4, 0))
 goto LABEL_107b2;
LABEL_107b1:
 v1 = v0 * 5;
 if (!armg_calculate_condition(146, a0, 4, 0))
 goto LABEL_107b6;
LABEL_107b5:
 v2 = v1 * 5;
 if (!armg_calculate_condition(146, a0, 4, 0))
 goto LABEL_107ba;
 }
 else
 {
 v0 = a0;
 if (armg_calculate_condition(146, a0, 4, 0))
 goto LABEL_107b1;
LABEL_107b2:
 v1 = v0;
 if (armg_calculate_condition(146, a0, 4, 0))
 goto LABEL_107b5;
LABEL_107b6:
 v2 = v1;
 if (!armg_calculate_condition(146, a0, 4, 0))
 {
LABEL_107ba:
 if (!armg_calculate_condition(130, a0, 4, 0))
 return v2;
 return 4294967295;
 }
 a0 = a0; /* suppress unused warning */
 }
 if (!armg_calculate_condition(130, a0, 4, 0))
 return v2 * 4;
 return 4294967295;
}


// Function: switch_small at 0x107c4
extern unsigned int CSWTCH_56[4];

unsigned int switch_small(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 if (3 >= a0)
 return *((int *)(74000 + a0 * 4));
 return 4294967295;
}


// Function: switch_large at 0x107dc
unsigned int switch_large(unsigned int a0)
{
 unsigned int v0; // r0

 if (a0 <= 9)
 {
 v0 = a0 * 5;
 if (!armg_calculate_condition(146, a0, 9, 0))
 goto LABEL_107e6;
LABEL_107e5:
 if (!armg_calculate_condition(130, a0, 9, 0))
 return v0 * 2;
 }
 else
 {
 v0 = a0;
 if (armg_calculate_condition(146, a0, 9, 0))
 goto LABEL_107e5;
LABEL_107e6:
 if (!armg_calculate_condition(130, a0, 9, 0))
 return v0;
 }
 return 4294967295;
}


// Function: switch_default at 0x107f0
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
 goto LABEL_107fe;
LABEL_107fd:
 v2 = v1 * 5;
 if (!armg_calculate_condition(146, v0, 2, 0))
 goto LABEL_10802;
LABEL_10801:
 if (!armg_calculate_condition(130, v0, 2, 0))
 return v2 * 4;
 }
 else
 {
 v1 = a0;
 if (armg_calculate_condition(146, v0, 2, 0))
 goto LABEL_107fd;
LABEL_107fe:
 v2 = v1;
 if (armg_calculate_condition(146, v0, 2, 0))
 goto LABEL_10801;
LABEL_10802:
 if (!armg_calculate_condition(130, v0, 2, 0))
 return v2;
 }
 return 0;
}


// Function: switch_fallthrough at 0x1080c
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


// Function: loop_for_fixed at 0x10844
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


// Function: loop_while at 0x10870
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


// Function: loop_dowhile at 0x108a4
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


// Function: loop_nested at 0x108cc
unsigned int loop_nested(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int cur; // r3
 unsigned int v1; // r0
 unsigned int v2; // r0

 if (0 < a0)
 {
 cur = 0;
 if (!armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_108d6;
LABEL_108d5:
 v1 = cur;
 if ((char)armg_calculate_condition(210, a0, 0, 0))
 return 0;
 }
 else
 {
 cur = a3;
 if (armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_108d5;
LABEL_108d6:
 v1 = a0;
 if ((char)armg_calculate_condition(210, v1, 0, 0))
 return 0;
 }
 do
 {
 v2 = v1;
 cur += 1;
 if (0 < a1)
 v2 += a1;
 } while ((v1 = v2, a0 != cur));
 return v2;
}


// Function: loop_break at 0x108fc
extern unsigned int __glibc___stack_chk_guard;

unsigned int loop_break(unsigned int i)
{
 unsigned int v6; // r12
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]
 unsigned int v5; // [bp-0x14]
 unsigned int *ptr;

 v6 = 0;
 v5 = __glibc___stack_chk_guard;
 v0 = 10;
;
 v1 = 20;
 v2 = 30;
 v3 = 40;
 v4 = 50;
 ptr = &v0;
 while (*ptr != i)
 {
 ptr = ptr + 1;
 v6++;
 if (v6 == 5)
 {
 if (!(v5 ^ __glibc___stack_chk_guard))
 return 4294967295;
 __stack_chk_fail(); /* do not return */
 }
 }
 if ((v5 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: loop_continue at 0x10984
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


// Function: goto_forward at 0x109b8
unsigned int goto_forward(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r3

 if (0 < a0)
 {
 v0 = a0;
 if (!armg_calculate_condition(194, v0, 0, 0))
 goto LABEL_109c2;
LABEL_109c1:
 a0 *= v0;
 }
 else
 {
 v0 = a3;
 if (armg_calculate_condition(194, a0, 0, 0))
 goto LABEL_109c1;
LABEL_109c2:
 (void)v0;  /* prevent label at end of compound statement */
 }
 return a0;
}


// Function: goto_backward at 0x109cc
unsigned int goto_backward(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int i; // r3
 unsigned int v2; // r3
 unsigned int v3; // r0
 unsigned int v4; // r0

 v0 = 1;
 if (a0 > 0)
 goto LABEL_109d8;
 return 1;
LABEL_109d8:
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


// Function: ternary_op at 0x109f4
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 > a1)
 return a0;
 return a1;
}


// Function: test_control_flow_l1 at 0x10a00
extern unsigned int __glibc___stack_chk_guard;
extern char g_11b10;

int test_control_flow_l1()
{
 unsigned int v6; // r12
 unsigned int v7; // r12
 unsigned int *v8; // r4
 unsigned int *v9; // r4
 unsigned int v10; // r0
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]
 unsigned int v5; // [bp-0x14]

 v5 = __glibc___stack_chk_guard;
 puts(0x11b10);
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
 unsigned int *ptr1, *ptr2;
 ptr1 = &v0;
 v6 = 0;
 v0 = 10;
 v1 = 20;
 v2 = 30;
 v3 = 40;
 v4 = 50;
 do
 {
 ptr2 = ptr1 + 1;
 if (*((int *)ptr1) == 30)
 goto LABEL_10b8c;
 } while ((v6 += 1, ptr1 = ptr2, v6 != 5));
 v6 = 4294967295;
LABEL_10b8c:
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v6);
 v7 = 0;
 (void)v7;  // suppress unused warning
 v8 = &v0;
 v0 = 10;
 v1 = 20;
 v2 = 30;
 v3 = 40;
 v4 = 50;
 do
 {
 v9 = v8 + 1;
 if (*(v8) == 99)
 goto LABEL_10bd8;
 } while ((v7 += 1, v8 = v9, v7 != 5));
 v7 = 4294967295;
LABEL_10bd8:
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v7);
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", 25);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 if ((v5 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v10 = __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
 return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x10cc8
extern unsigned int __glibc___stack_chk_guard;

unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned int v13; // r5
 char v14[4]; // r6
 unsigned int v15; // r3
 char *v16; // r2
 char v0; // [bp-0x44], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 unsigned int v4; // [bp-0x34]
 unsigned int v5; // [bp-0x30]
 unsigned int v6; // [bp-0x2c]
 unsigned int v7; // [bp-0x28]
 unsigned int v8; // [bp-0x24]
 unsigned int v9; // [bp-0x20]
 unsigned int v10; // [bp-0x1c]
 unsigned int v11; // [bp-0x18]
 unsigned int v12; // [bp-0x14]

 v13 = 0;
 v12 = __glibc___stack_chk_guard;
 v16 = (char *)&v0;
 v0 = 1;
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
 while (true)
 {
 v15 = 0;
 v16 = (char *)(&v0 + v13 * 4);
 do
 {
 if (*(v16) == a0)
 {
 if (!(v12 ^ __glibc___stack_chk_guard))
 return v15 + v13 * 10;
 __stack_chk_fail(); /* do not return */
 }
 } while ((v15 += 1, v16 += 4, v15 != 4));
 v13 += 1;
 /* v14 += 4; */
 if (v13 == 3)
 {
 if (!(v12 ^ __glibc___stack_chk_guard))
 return 4294967295;
 __stack_chk_fail(); /* do not return */
 }
 }
}


// Function: infinite_loop at 0x10d78
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


// Function: multi_return at 0x10db8
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


// Function: conditional_return at 0x10de8
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


// Function: duffs_device at 0x10e00
unsigned int duffs_device(unsigned int *a0, unsigned int *iter, unsigned int a2)
{
 unsigned int cur[2]; // r3
 unsigned int *ptr; // r3
 unsigned int *v5; // r1
 unsigned int *v6; // r1
 unsigned int *v7; // r3

 switch (a2)
 {
 case 4:
 cur[0] = *(iter);
 ptr = &cur[0];
 break;
 case 5:
 v6 = iter + 1;
 v7 = &cur[1];
 cur[0] = *(iter);
 ptr = v7;
 v5 = v6;
 break;
 default:
 return 4294967295;
 }
}


// Function: loop_complex_cond at 0x10eb8
unsigned int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // cc_dep2
 unsigned int v1; // cc_ndep
 unsigned int v2; // r2
 unsigned int v3; // r3
 unsigned int v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_dep1

 v0 = 0;
 v1 = 0;
 if (a0 > 0)
 goto LABEL_10ec0;
 return a0;
LABEL_10ec0:
 v2 = 0;
 v3 = 0;
 v4 = a0;
 while (true)
 {
 v5 = v0;
 v6 = v4;
 v3 += 2;
 a0 -= 1;
 v2 += 1;
 if (v2 <= 9)
 {
 v1 = (armg_calculate_condition(210, v6, v5, v1) ? 0 : v1);
 v4 = (armg_calculate_condition(210, v6, v5, v1) ? v3 : v6);
 v0 = (armg_calculate_condition(210, v6, v5, v1) ? a0 : v5);
 if (!((char)armg_calculate_condition(178, v4, v0, v1)))
 break;
 }
 else
 {
 v1 = (armg_calculate_condition(210, v6, v5, v1) ? 0 : v1);
 v4 = (armg_calculate_condition(210, v6, v5, v1) ? v3 : v6);
 v0 = (armg_calculate_condition(210, v6, v5, v1) ? a0 : v5);
 if (!((char)armg_calculate_condition(178, v4, v0, v1)))
 break;
 }
 }
 return v3 + a0 + v2;
}


// Function: loop_modify_var at 0x10eec
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int cur; // r2
 unsigned int v2; // r3
 unsigned int v3; // r2

 v0 = 0;
 if (a0 > 0)
 goto LABEL_10ef8;
 return 0;
LABEL_10ef8:
 cur = 0;
 while (true)
 {
 v2 = cur + 1;
 if (a0 > v2)
 goto LABEL_10f08;
 return v0;
LABEL_10f08:
 if (v2 <= 5)
 v3 = v2;
 else
 v3 = cur;
 cur = v3;
 v0 += v2;
 if (armg_calculate_condition(194, v2, 5, 0))
 cur += 3;
 }
}


// Function: loop_external_state at 0x10f1c
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // r3

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 += 1, v0 != 101));
 return v0;
}


// Function: tail_recursion at 0x10f44
unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
 unsigned int result; // r3
 unsigned int v1; // r0
 unsigned int v2; // r3
 unsigned int v4; // r0

 result = a0;
 if (result > 1)
 goto LABEL_10f54;
 return a1;
 do
 {
LABEL_10f54:
 v2 = result;
 v4 = v2 * a1;
 result = v2 - 1;
 a1 = v4;
 } while (result != 1);
 return v2 * v1;
}


// Function: indirect_recursion_a at 0x10f6c
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int result; // r3
 unsigned int flag1; // r1
 unsigned int v2; // r1

 if (a1 > 0)
 goto LABEL_10f74;
 return a0;
LABEL_10f74:
 result = a1;
 flag1 = a1 - 2;
 if (!(a0 & 1))
 goto LABEL_10fb0;
 while (result != 1)
 {
 a0 = a0 * 3 + 2;
 v2 = flag1;
 while (true)
 {
 flag1 = v2 - 2;
 result -= 2;
 if (flag1)
 goto LABEL_10fa8;
 return a0;
LABEL_10fa8:
 if (((char)a0 & 1))
 break;
LABEL_10fb0:
 if (result != 1)
 goto LABEL_10fc4;
 return a0 + (a0 >> 31) >> 1;
LABEL_10fc4:
 a0 = (a0 + (a0 >> 31) >> 1) + 1;
 v2 = flag1;
 }
 }
 return a0 * 3 + 1;
 a0 = a0; /* suppress unused warning */
}


// Function: call_func_ptr at 0x10fd8
int call_func_ptr(unsigned int a0, unsigned int a1)
{
 ((int (*)(unsigned int, unsigned int))a0)(a0, a1);
 return a0;
}


// Function: call_func_ptr_array at 0x10fe4
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int (*func_ptr[])(unsigned int) = {double_value, triple_value, recursion_factorial};

 v3 = __glibc___stack_chk_guard;
 v0 = double_value;
 v1 = triple_value;
 v2 = recursion_factorial;
 if (2 >= a0)
 {
 if (!(v3 ^ __glibc___stack_chk_guard))
 return func_ptr[a0](a1);
 }
 else
 {
 if (!(v3 ^ __glibc___stack_chk_guard))
 return 4294967295;
 }
 __stack_chk_fail(); /* do not return */
}


// Function: call_virtual_func at 0x11080
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x11088
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


// Function: test_control_flow_l2 at 0x110d0
extern unsigned int __glibc___stack_chk_guard;
extern char g_11d98;

unsigned int test_control_flow_l2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int v18; // r2
 char *ptr; // r12
 char *v28; // r12
 unsigned int v29; // r0
 unsigned int v20; // r2
 unsigned int cur; // r1
 unsigned int v22; // r3
 unsigned int v23; // r1
 unsigned int v24; // r2
 unsigned int v0; // [bp-0x70]
 unsigned int result; // [bp-0x6c]
 unsigned int v2[1]; // [bp-0x68]
 unsigned int v3; // [bp-0x64]
 unsigned int v4; // [bp-0x60]
 unsigned int v5; // [bp-0x5c]
 unsigned int v6; // [bp-0x58]
 unsigned int flag1[1]; // [bp-0x54]
 unsigned int v8; // [bp-0x50]
 unsigned int v9; // [bp-0x4c]
 unsigned int v10; // [bp-0x48]
 unsigned int v11; // [bp-0x44]
 unsigned int v12; // [bp-0x40]
 unsigned int v13; // [bp-0x3c]
 unsigned int v14; // [bp-0x38]
 char v15; // [bp-0x34]
 unsigned int v16; // [bp-0x14]

 (void)a5;  /* suppress unused */
 v16 = __glibc___stack_chk_guard;
 puts(0x11d98);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7));
 v18 = 0;
 v0 = 0;
 do
 {
 if (v0 == 1)
 goto LABEL_11134;
 } while ((v18 += 1, v18 != 1001));
 v0 = 0; /* prevent label at end of compound statement */
 v0 = 1;
LABEL_11134:
 (void)v0;  /* suppress unused - prevent label at end */
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v18);
 (void)v0; /* ensure label isn't at end of compound statement */;
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 flag1[0] = 1;
 v8 = 2;
 v9 = 3;
 v10 = 4;
 v11 = 5;
 v12 = 6;
 v13 = 7;
 v14 = 8;
 memset(&v15, 0, 32);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", duffs_device(&v15, flag1, 8));
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v20 = 0;
 cur = 0;
 while (true)
 {
 v22 = cur + 1;
 if (v22 > 9)
 break;
 if (v22 <= 5)
 v23 = v22;
 else
 v23 = cur;
 cur = v23;
 v20 += v22;
 if (armg_calculate_condition(194, v22, 5, 0))
 cur += 3;
 }
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v20);
 v24 = 0;
 result = 0;
 do
 {
 } while (!result && (v24 += 1, v24 != 101));
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v24);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", double_value(5));
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", recursion_factorial(5));
 unsigned int sum = 0;
 ptr = &v2;
 v2[0] = 1;
 v3 = 2;
 v4 = 3;
 v5 = 4;
 v6 = 5;
 do
 {
 v28 = ptr + 1;
 sum += *(ptr) * 2;
 ptr = v28;
 } while (&flag1 != ptr);
 v29 = __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", sum);
 if ((v16 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v29;
}


// Function: non_local_jump at 0x11380
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


// Function: cpp_exception at 0x113ec
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


// Function: large_jump_table at 0x11414
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
 /* v0 - v9 store function pointers but are unused - keep for stack layout */
 if (9 >= a0)
 {
 if (!(v10 ^ __glibc___stack_chk_guard))
 {
 switch(a0) {
 case 0: return op_add(a1, a2);
 case 1: return op_sub(a1, a2);
 case 2: return op_mul(a1, a2);
 case 3: return op_div(a1, a2);
 case 4: return op_mod(a1, a2);
 case 5: return op_and(a1, a2);
 case 6: return op_or(a1, a2);
 case 7: return op_xor(a1, a2);
 case 8: return op_shl(a1, a2);
 case 9: return op_shr(a1, a2);
 default: break;
 }
 }
 }
 else
 {
 if (!(v10 ^ __glibc___stack_chk_guard))
 return 4294967295;
 }
 __stack_chk_fail(); /* do not return */
}


// Function: conditional_func_ptr at 0x114c4
unsigned int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int (*v0)(unsigned int); // r1
 unsigned int (*v1)(unsigned int); // r2
 unsigned int (*v2)(unsigned int); // r2
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
 return v2(a1);
}


// Function: state_machine at 0x114f8
unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 if (!a0)
 {
 a1 = 0;
 if (!armg_calculate_condition(2, a0, 0, 0))
 {
 LABEL_1154e:
 return a1;
 }
 }
 else if (!(armg_calculate_condition(2, a0, 0, 0)))
 {
 goto LABEL_1154e;
 }
 (void)a1;  // suppress unused warning
 return 0;
}


// Function: fsm_func_table at 0x1155c
extern unsigned int __glibc___stack_chk_guard;

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 /* v0 - v3 store function pointers but are unused - keep for stack layout */
 if (3 >= a1)
 {
 if (!(v4 ^ __glibc___stack_chk_guard))
 {
 switch(a1) {
 case 0: return state_idle(a0);
 case 1: return state_processing(a0);
 case 2: return state_done();
 case 3: return state_error(a0);
 default: return 3;
 }
 }
 }
 else
 {
 if (!(v4 ^ __glibc___stack_chk_guard))
 return 3;
 }
 __stack_chk_fail(); /* do not return */
}


// Function: computed_goto at 0x115f4
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11634;
extern unsigned int g_11658;
extern unsigned int g_11668;

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
 /* v0 - v3 store values but are unused - keep for stack layout */
 if (3 >= a1)
 {
 switch(a1) {
 case 0: v0 = 71272; break;
 case 1: v1 = "\n"; break;
 case 2: v2 = 71256; break;
 case 3: v3 = 71220; break;
 default: break;
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


// Function: obfuscated_cf at 0x11684
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: opaque_predicate at 0x1168c
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: overlapped_code at 0x11694
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
 goto LABEL_1169e;
LABEL_1169d:
 v7 += 1;
 }
 else
 {
 v7 = a0;
 if (armg_calculate_condition(21, v0, v5, v6))
 goto LABEL_1169d;
LABEL_1169e:
 v7 = v7; /* prevent label at end of compound statement */
 }
 return (armg_calculate_condition(5, v0, v5, v6) ? (armg_calculate_condition(5, v0, v5, v6) ? v7 : v7 + (v7 >> 31)) : (armg_calculate_condition(5, v0, v5, v6) ? v7 : v7 + (v7 >> 31)) >> 1);
}


// Function: test_control_flow_l3 at 0x116ac
extern unsigned int __glibc___stack_chk_guard;
extern char g_11f9c;
extern char g_12000;

void test_control_flow_l3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v6; // lr
 unsigned int v12; // r0
 unsigned int result; // [bp-0x1c]
 unsigned int flag1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = __glibc___stack_chk_guard;
 puts(0x11f9c);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(5));
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291));
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
 __printf_chk(1, 0x12000, op_add(10, 5));
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", state_processing(2));
 result = 0;
 flag1 = 1;
 v2 = 2;
 v3 = 3;
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", computed_goto(&result, 2));
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 v12 = __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v12;
}



/* CRT stub function __aeabi_idiv removed by preprocessor */




/* CRT stub function _divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */



// Function: __aeabi_idiv0 at 0x11a64
int __aeabi_idiv0(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = a1;
}



/* CRT stub function _fini removed by preprocessor */



// Function: sub_11a78 at 0x11a78
int sub_11a78(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0;
}

