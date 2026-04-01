// Angr Decompilation of 1_clang_Os_no_g
// Platform: AARCH64


/* CRT stub function _init removed by preprocessor */

#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>

/* Helper function definitions */
static inline unsigned long long __ROL__(unsigned long long value, int shift)
{
    shift &= 63;
    return (value << shift) | (value >> (64 - shift));
}

/* Forward declarations */
int test_control_flow_l1(void);
int test_control_flow_l2(void);
int test_control_flow_l3(void);

static inline int arm64g_calculate_condition(int cond, unsigned long long cc_op, 
                                              unsigned long long cc_dep1, 
                                              unsigned long long cc_dep2)
{
    return 0;
}

/* CRT stub functions */
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
long long frame_dummy(void);

// Function: __dollar_x at 0x400880
unsigned long long g_412ff8;
void __dollar_x_target(void) {}

unsigned long long g_401980[12];

long long __dollar_x()
{
 unsigned long long v2 = 0; // x16
 unsigned long long v3 = 0; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 if (g_412ff8 != 0)
 {
 /* Computed goto - placeholder for jump table implementation */
 __dollar_x_target();
 }
 return 0;
}


// Function: sub_400894 at 0x400894
long long sub_400894()
{
 unsigned long long v0; // x0
 jmp_buf env;

 v0 = _setjmp(env);
 return _setjmp(env);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400970 at 0x400970
void sub_400970()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400988 at 0x400988
void sub_400988()
{
 deregister_tm_clones();
 return;
}



void deregister_tm_clones(void)
{
}

/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4009fc at 0x4009fc
void sub_4009fc()
{
 __do_global_dtors_aux();
 return;
}



void __do_global_dtors_aux(void)
{
}



// Function: sub_400a48 at 0x400a48
long long sub_400a48()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



long long frame_dummy(void)
{
 return 0;
}



// Function: sequential_ops at 0x400a54
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (((a1 + a0) * 2 | a1 + a0 >> 31) & 4294967294) - a2;
}


// Function: single_if at 0x400a64
long long single_if(unsigned int a0)
{
 char v0; // x8

 if (a0 <= 0)
 v0 = 0;
 else
 v0 = 1;
 return a0 << (v0 & 31);
}


// Function: if_else at 0x400a74
unsigned long long if_else(unsigned int a0)
{
 if (a0 > 0)
 return 1;
 return 0;
}


// Function: nested_if_2 at 0x400a80
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
{
 if (0 >= a0)
 return 0;
 return (a1 & ~(a1 >> 31)) + a0 & 4294967295;
}


// Function: nested_if_deep at 0x400a94
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 if (a0 < 1)
 {
 return 0;
 }
 else if (a1 < 1)
 {
 return 1;
 }
 else if (a2 < 1)
 {
 return 2;
 }
 else if (a3 < 1)
 {
 return 3;
 }
 else if (a4 <= 0)
 {
 return 4;
 }
 else
 {
 return 5;
 }
}


// Function: if_elseif_chain at 0x400ae4
unsigned long long if_elseif_chain(unsigned int a0)
{
 if (a0 >= 3)
 return 4294967295;
 return 10 * a0 + 10;
}


// Function: if_elseif_long at 0x400afc
unsigned long long if_elseif_long(unsigned int a0)
{
 if (a0 >= 5)
 return 4294967295;
 return 100 * a0 + 100;
}


// Function: switch_small at 0x400b14
unsigned int g_401950[4] = {10, 20, 30, 40};

// Function: loop_break data
unsigned int g_401cfc[5] = {0, 1, 2, 3, 4};

unsigned long long switch_small(unsigned int a0)
{
 if (3 < a0)
 return 4294967295;
 return g_401950[a0];
}


// Function: switch_large at 0x400b34
unsigned long long switch_large(unsigned int a0)
{
 if (a0 >= 10)
 return 4294967295;
 return __ROL__(a0 * 5, 1) & 4294967294;
}


// Function: switch_default at 0x400b48
unsigned long long switch_default(unsigned int a0)
{
 if (a0 - 1 >= 3)
 return 0;
 return 100 * (a0 - 1) + 100;
}


// Function: switch_fallthrough at 0x400b64
unsigned long long switch_fallthrough(unsigned long a0)
{
 unsigned long long v0; // x8

 v0 = 0;
 if ((unsigned int)a0 != 1)
 {
 if ((unsigned int)a0 != 2)
 {
 if ((unsigned int)a0 == 3)
 v0 = 12;
 else
 return 4294967295;
 }
 v0 = (unsigned int)v0 + (unsigned int)a0 * 2;
 }
 return v0 + a0;
}


// Function: loop_for_fixed at 0x400b98
unsigned long long loop_for_fixed(unsigned int a0)
{
 if (a0 < 1)
 return 0;
 return __ROL__((a0 - 1) * (a0 - 2), 63) + a0 - 1;
}


// Function: loop_while at 0x400bc0
unsigned long long loop_while(unsigned int a0)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0

 if (!a0)
 return 1;
 v0 = 0;
 do
 {
 v2 = v0 + 1;
 a0 = (a0 * 1717986919 >> 63 & 0xc0000000 | (a0 * 1717986919 * 0x40000000 | a0 * 1717986919 >> 34) & 1073741823) + (__ROL__(a0 * 1717986919, 1) & 1);
 v0 = v2;
 } while (18 < a0 + 9);
 return v1 + 1;
}


// Function: loop_dowhile at 0x400c04
long long loop_dowhile(unsigned int a0)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0

 v0 = 0;
 do
 {
 v2 = v0 + 1;
 a0 = (a0 * 1717986919 >> 63 & 0xc0000000 | (a0 * 1717986919 * 0x40000000 | a0 * 1717986919 >> 34) & 1073741823) + (__ROL__(a0 * 1717986919, 1) & 1);
 v0 = v2;
 } while (18 < a0 + 9);
 return v1 + 1;
}


// Function: loop_nested at 0x400c3c
unsigned long long loop_nested(unsigned long a0, unsigned int a1)
{
 unsigned long v0; // x8

 if (0 < a1)
 v0 = a1;
 else
 v0 = 0;
 if (0 >= (unsigned int)a0)
 return 0;
 return a0 * v0 & 4294967295;
}


// Function: loop_break at 0x400c54
unsigned long long loop_break(unsigned int i)
{
 unsigned long long v0; // x0

 v0 = 0;
 while (g_401cfc[v0] != i)
 {
 v0 += 1;
 if (v0 == 5)
 return 4294967295;
 }
 return v0;
}


// Function: loop_continue at 0x400c84
unsigned long long loop_continue(unsigned int a0)
{
 unsigned int i; // w8

 if (a0 < 1)
 return 0;
 i = 0;
 do
 {
 i += 4;
 } while ((a0 + 3 & 0xfffffffc) != i);
 return i;
}


// Function: goto_forward at 0x400d04
long long goto_forward(unsigned int a0)
{
 unsigned int v0; // w8

 if (1 < a0)
 v0 = a0;
 else
 v0 = 1;
 return (v0 * a0 * 2 | v0 * a0 >> 31) & 4294967294;
}


// Function: goto_backward at 0x400d18
unsigned long long goto_backward(unsigned int a0)
{
 unsigned int i; // w8

 if (a0 < 1)
 return 1;
 i = 0;
 do
 {
 i += 4;
 } while ((a0 + 3 & 0xfffffffc) != i);
 return (a0 * (a0 - 1) / 2) * 2;
}


// Function: ternary_op at 0x400d94
long long ternary_op(unsigned int a0, unsigned int a1)
{
 if (a1 >= a0)
 return a1;
 return a0;
}


// Function: test_control_flow_l1 at 0x400da0
char g_401f05[] = "Control Flow Level 1 Tests";

int test_control_flow_l1()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401f05);
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
 return printf("CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x400f6c
unsigned long long loop_multi_exit(unsigned int a0)
{
 unsigned long long v0; // x8
 unsigned long long i; // x9
 unsigned long long *v2; // x10
 unsigned long long v3; // x11

 v0 = 0;
 i = 0;
 v2 = (unsigned long long *)&g_401980;
 do
 {
 v3 = 0;
 do
 {
 if (*((int *)((unsigned char *)v2 + v3 * 4)) == a0)
 return v3 - v0;
 } while ((v3 += 1, v3 != 4));
 i += 1;
 v0 -= 10;
 v2 = (unsigned long long *)((unsigned char *)v2 + 16);
 } while (i != 3);
 return 4294967295;
}


// Function: infinite_loop at 0x400fbc
unsigned long long infinite_loop(unsigned int *ptr)
{
 unsigned long long v0; // x0

 v0 = 0;
 while (*(ptr) != 1)
 {
 v0 = (unsigned int)v0 + 1;
 if ((unsigned int)v0 == 1001)
 {
 *(ptr) = 1;
 return v0;
 }
 }
 return v0;
}


// Function: multi_return at 0x400fe8
unsigned long long multi_return(unsigned long a0)
{
 unsigned int v0; // w9

 if (((char)(a0 >> 31) & 1))
 return 4294967295;
 if ((char)arm64g_calculate_condition(9, (unsigned long long)((unsigned int)a0 & 1), 0, 0))
 v0 = ((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294;
 else
 v0 = (unsigned int)a0 + 1;
 if (50 >= (unsigned int)a0)
 return v0;
 return 4294967294;
}


// Function: conditional_return at 0x401010
long long conditional_return(unsigned int a0)
{
 if (0 >= a0)
 return -(a0);
 return __ROL__(a0, 1) & 4294967294;
}


// Function: duffs_device at 0x401020

unsigned int duffs_device(unsigned long long *cur, unsigned long long *iter, unsigned int a2)
{
 unsigned int v0; // w8

 v0 = a2;
 switch (a2)
 {
 case 0:
 do
 {
LABEL_401060:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_401068:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_401070:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_401078:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_401080:
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
LABEL_401088:
 iter += 1;
 v0 -= 1;
 *(cur) = *(iter);
 cur += 1;
 } while (1 < v0);
 return a2;
 case 1:
 goto LABEL_401088;
 case 2:
 goto LABEL_401080;
 case 3:
 goto LABEL_401078;
 case 4:
 goto LABEL_401070;
 case 5:
 goto LABEL_401068;
 case 6:
 goto LABEL_401060;
 case 7:
 break;
 default:
 return 4294967295;
 }
 return a2;
}


// Function: loop_complex_cond at 0x4010a4
int loop_complex_cond(unsigned int cur)
{
 unsigned int v0; // w10
 unsigned int v1; // w8
 unsigned int v2; // w10
 unsigned int v3; // w9

 if (cur >= 1)
 {
 v0 = 0;
 v1 = 0;
 do
 {
 v1 += 2;
 cur -= 1;
 v3 = v0 + 1;
 } while (cur >= 2 && cur > v1 && (v0 = v3, cur = cur, v2 < 9));
 }
 else
 {
 v1 = 0;
 v3 = 0;
 }
 return cur + v1 + v3;
}


// Function: loop_modify_var at 0x4010f8
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned long long v0; // x9
 unsigned long long v1; // x8
 unsigned long long v2; // x8
 unsigned long long v3; // x9
 unsigned int v4; // w10
 unsigned long long v5; // x8
 unsigned long v6; // x9

 if (a0 < 1)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v2 = v1;
 v3 = v0;
 if (5 < (unsigned int)v3)
 v4 = (unsigned int)v3 + 2;
 else
 v4 = v3;
 } while ((v5 = v3 + v2, v6 = (unsigned long long)(v4 + 1), v0 = (unsigned long long)(v4 + 1), v1 = v3 + v2, (unsigned int)v0 < a0));
 return (unsigned int)v3 + (unsigned int)v2;
}


// Function: loop_external_state at 0x401134
unsigned long long loop_external_state(unsigned int *a0)
{
 unsigned long long v0; // x0

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 = (unsigned long long)((unsigned int)v0 + 1), (unsigned int)v0 != 101));
 return v0;
}


// Function: recursion_factorial at 0x401154
unsigned long long recursion_factorial(unsigned long a0)
{
 unsigned long result;
 unsigned long i;

 if (a0 <= 1)
 return 1;
 result = 1;
 for (i = 2; i <= a0; i++)
 result *= i;
 return result;
}


// Function: tail_recursion at 0x4011dc
int tail_recursion(unsigned long a0, unsigned int a1)
{
 if (a0 <= 1)
 return a1;
 return tail_recursion(a0 - 1, a1 * a0);
}


// Function: indirect_recursion_a at 0x401264
unsigned long long indirect_recursion_a(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // w8
 unsigned int v1; // w9

 if (a1 < 1)
 return a0;
 v0 = a1 + 2;
 while (true)
 {
 if (!((char)a0 & 1))
 {
 if (0 <= (unsigned int)a0)
 v1 = a0;
 else
 v1 = (unsigned int)a0 + 1;
 if (v0 == 3)
 return v1 >> 31 & 0x80000000 | (v1 * 0x80000000 | v1 >> 1) & 2147483647;
 a0 = (v1 >> 31 & 0x80000000 | (v1 * 0x80000000 | v1 >> 1) & 2147483647) + 1;
 }
 else if (v0 != 3)
 {
 a0 = (unsigned int)a0 * 3 + 2;
 }
 else
 {
 return (unsigned int)a0 * 3 + 1;
 }
 v0 -= 2;
 if (3 > v0)
 return a0;
 }
}


// Function: call_func_ptr at 0x4012b8
int call_func_ptr(unsigned long a0, unsigned long a1)
{
 return ((int (*)(unsigned long))a0)(a1);
}


// Function: call_func_ptr_array at 0x4012c4

unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1)
{
 switch (a0)
 {
 case 0:
 break;
 default:
 return 4294967295;
 }
}


// Function: double_value at 0x4012e8
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: triple_value at 0x4012f0
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: call_virtual_func at 0x4012f8
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return (a1 * 2 | a1 >> 31) & 4294967294;
}


// Function: process_with_callback at 0x401300
unsigned int process_with_callback(unsigned int *a0, unsigned int a1, unsigned int (*a2)(unsigned int))
{
 unsigned long long v2; // x20
 unsigned long v3; // x22
 unsigned int *v4; // x21
 unsigned long i; // x22
 unsigned int *v6; // x21
 unsigned long v7; // x22
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a1 < 1)
 return 0;
 v2 = 0;
 v3 = a1;
 i = 0;
 do
 {
 v4 = a0;
 v6 = v4 + 1;
 v7 = v3 - 1;
 v2 += a2(*(v4));
 v3 = v7;
 a0 = v6;
 i++;
 } while (i != v3);
 return v2;
}


// Function: test_control_flow_l2 at 0x401358
char g_401f29[] = "Control Flow Level 2 Tests";

int test_control_flow_l2()
{
 unsigned long long v7; // x8
 unsigned long long v8; // x9
 unsigned int v16; // w8
 unsigned int v17; // w19
 unsigned long long v18; // x1
 unsigned long long *v9; // x10
 unsigned long long v10; // x11
 unsigned long long v11; // x1
 unsigned long long v12; // x1
 unsigned int v13; // w21
 unsigned int v14; // w19
 unsigned int v0[8]; // [bp-0x70]
 unsigned long long v1; // [bp-0x50]
 unsigned long long v2; // [bp-0x40]
 char *v3; // [bp-0x30]
 unsigned int result; // [bp-0x18]
 unsigned int v5; // [bp-0x14]
 char v6; // [bp+0x0]

 v3 = &v6;
 puts(g_401f29);
 v7 = 0;
 v8 = 0;
 v9 = (unsigned long long *)&g_401980;
 while (true)
 {
 v10 = 0;
 do
 {
 if (*((int *)((unsigned char *)v9 + v10 * 4)) == 7)
 {
 v11 = v10 - v7;
 goto LABEL_4013c4;
 }
 } while ((v10 += 1, v10 != 4));
 v8 += 1;
 v7 -= 10;
 v9 += 16;
 if (v8 == 3)
 {
 v11 = 4294967295;
LABEL_4013c4:
 printf("CF-L2-01 (loop_multi_exit): %d\n", v11);
 v12 = 0;
 v5 = 0;
 do
 {
 if (v5 == 1)
 goto LABEL_4013f8;
 } while ((v12 = (unsigned long long)((unsigned int)v12 + 1), (unsigned int)v12 != 1001));
 v5 = 1;
LABEL_4013f8:
 printf("CF-L2-02 (infinite_loop): %d\n", v12);
 v13 = 4294967295;
 printf("CF-L2-03 (multi_return): %d\n", 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", 4294967294);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v14 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 v1 = 0;
 v2 = 0;
 printf("CF-L2-05 (duffs_device): %d\n", duffs_device((unsigned long long *)&v0, &v1, 8) & 4294967295);
 v16 = 11;
 do
 {
 v17 = v14 + 2;
 } while (v16 - 2 > v14 - 8 && (v13 += 1, v16 -= 1, v14 = v17, v13 < 9));
 printf("CF-L2-06 (loop_complex_cond): %d\n", v17);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 v18 = 0;
 result = 0;
 do
 {
 } while (!result && (v18 = (unsigned long long)((unsigned int)v18 + 1), (unsigned int)v18 != 101));
 printf("CF-L2-08 (loop_external_state): %d\n", v18);
 printf("CF-L2-09 (recursion_factorial): %d\n", 120);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 printf("CF-L2-11 (indirect_recursion): %d\n", 3);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
 return printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


// Function: non_local_jump at 0x401578
jmp_buf __dollar_d_6;

unsigned long long non_local_jump(unsigned int a0)
{
 unsigned long v2; // x19

 v2 = a0;
 if (_setjmp(__dollar_d_6))
 return 4294967295;
 if (!((char)(v2 >> 31) & 1) && 101 > (unsigned int)v2)
 return ((unsigned int)v2 * 2 | (unsigned int)v2 >> 31) & 4294967294;
 longjmp(__dollar_d_6, 1); /* do not return */
}


// Function: cpp_exception at 0x4015d8
unsigned long long cpp_exception(unsigned int a0)
{
 unsigned int v0; // w8

 if (100 < a0)
 v0 = 4294967294;
 else
 v0 = __ROL__(a0, 1) & 4294967294;
 if (0 > a0)
 return 4294967295;
 return v0;
}


// Function: large_jump_table at 0x4015f4

unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2)
{
 switch (a0)
 {
 case 0:
 break;
 default:
 return 4294967295;
 }
}


// Function: op_add at 0x40161c
int op_add(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: op_sub at 0x401624
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x40162c
int op_mul(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: op_div at 0x401634
unsigned long long op_div(unsigned long a0, unsigned long a1)
{
 if (!(unsigned int)a1)
 return 0;
 return a0 / a1;
}


// Function: op_mod at 0x401648
unsigned long long op_mod(unsigned int a0, unsigned int a1)
{
 if (!a1)
 return 0;
 return a0 - a1 * a0 / a1;
}


// Function: op_and at 0x401660
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: op_or at 0x401668
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a1 | a0;
}


// Function: op_xor at 0x401670
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: op_shl at 0x401678
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: op_shr at 0x401680
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: conditional_func_ptr at 0x401688
long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
 unsigned long long (*v0)(unsigned long); // x8
 unsigned long long (*v1)(unsigned int); // x9
 unsigned long long (*v2)(unsigned int); // x10
 unsigned long long (*v3)(unsigned long); // x8
 unsigned long long (*v4)(unsigned int); // x2

 v0 = (unsigned long long (*)(unsigned long))recursion_factorial;
 v1 = (unsigned long long (*)(unsigned int))triple_value;
 v2 = (unsigned long long (*)(unsigned int))double_value;
 if (a0 == 1)
 v3 = (unsigned long long (*)(unsigned long))v1;
 else
 v3 = v0;
 if (!a0)
 v4 = v2;
 else
 v4 = (unsigned long long (*)(unsigned int))v3;
 return v4(a1);
}


// Function: state_machine at 0x4016b8

unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // w8

 switch (a1)
 {
 case 0:
 if (a0 != 1)
 a1 = 0;
 else
 a1 = 1;
 break;
 case 1:
 if (a0 == 99)
 v0 = 3;
 else
 v0 = 1;
 if (a0 == 2)
 a1 = a0;
 else
 a1 = v0;
 break;
 case 2:
 break;
 case 3:
 if (!a0)
 {
 a1 = 0;
 break;
 }
 else
 {
 a1 = 3;
 break;
 }
 default:
 a1 = 3;
 break;
 }
 return a1;
}


// Function: fsm_func_table at 0x40171c

unsigned long long fsm_func_table(unsigned long a0, unsigned int a1)
{
 switch (a1)
 {
 case 0:
 break;
 default:
 return 3;
 }
}


// Function: state_idle at 0x40173c
unsigned long long state_idle(unsigned int a0)
{
 if (a0 == 1)
 return 1;
 return 0;
}


// Function: state_processing at 0x401748
long long state_processing(unsigned int a0)
{
 unsigned int v0; // w8

 if (a0 == 99)
 v0 = 3;
 else
 v0 = 1;
 if (a0 != 2)
 return v0;
 return a0;
}


// Function: state_done at 0x401760
unsigned long long state_done()
{
 return 2;
}


// Function: state_error at 0x401768
unsigned long long state_error(unsigned int a0)
{
 if (a0)
 return 3;
 return 0;
}


// Function: computed_goto at 0x401778

unsigned long long computed_goto(unsigned long a0, unsigned int a1)
{
 switch (a1)
 {
 case 0:
 return 0;
 case 1:
 return 10;
 case 2:
 return 20;
 case 3:
 return 30;
 default:
 return 4294967295;
 }
 return 0;
}


// Function: obfuscated_cf at 0x4017b8
unsigned int obfuscated_cf(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: opaque_predicate at 0x4017c0
unsigned int opaque_predicate(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: overlapped_code at 0x4017c8
long long overlapped_code(unsigned int a0)
{
 unsigned int v0; // w8
 unsigned int v2; // w8

 if (0 <= a0)
 v0 = a0;
 else
 v0 = a0 + 1;
 v2 = v0;
 if (!((char)arm64g_calculate_condition(9, (unsigned long long)(a0 & 1), 0, 0)))
 return a0 * 3 + 1;
 return v2 >> 31 & 0x80000000 | __ROL__(v2, 31) & 2147483647;
}


// Function: test_control_flow_l3 at 0x4017e4
char g_401f4d[] = "Control Flow Level 3 Tests";

int test_control_flow_l3()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401f4d);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", 4294967295);
 printf("CF-L3-03 (large_jump_table): %d\n", 15);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto(printf("CF-L3-06 (fsm_func_table): %d\n", 2), 2) & 4294967295);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


// Function: main at 0x4018dc
int main(void)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

