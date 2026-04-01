// Angr Decompilation of 1_gcc_O0_g
// Platform: ARMEL
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>

typedef unsigned int (*func_t)(unsigned int);


/* CRT stub function _init removed by preprocessor */



// Dummy angr function for decompilation artifact
unsigned int armg_calculate_condition(unsigned int a, unsigned int b, unsigned int c, unsigned int d)
{
 return 1;
}

// Dummy global for CRT stub
unsigned int g_24008 = 0;

// Stack canary definition
unsigned int __glibc___stack_chk_guard = 0;

// Function: sub_10430 at 0x10430

int sub_10430()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 ((void (*)(void))g_24008)();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_104f4 at 0x104f4
void sub_104f4()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: sequential_ops at 0x105b4
unsigned int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v0 = a0 + a1;
 v1 = v0 * 2;
 v2 = v1 - a2;
 return v2;
}


// Function: single_if at 0x1060c
unsigned int single_if(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 if (v0 > 0)
 v0 *= 2;
 return v0;
}


// Function: if_else at 0x10648
unsigned int if_else(unsigned int a0)
{
 return (a0 <= 0 ? 0 : 1);
}


// Function: nested_if_2 at 0x10680
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
 if (a0 <= 0)
 {
 return 0;
 }
 else if (a1 > 0)
 {
 return a0 + a1;
 }
 else
 {
 return a0;
 }
}


// Function: nested_if_deep at 0x106d8
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v1; // r3
 char v0; // [bp+0x0]

 return (a0 <= 0 ? 0 : (a1 <= 0 ? 1 : (a2 <= 0 ? 2 : (v1 <= 0 ? 3 : (*((int *)&v0) <= 0 ? 4 : 5)))));
}


// Function: if_elseif_chain at 0x1076c
unsigned int if_elseif_chain(unsigned int a0)
{
 return (a0 ? (a0 != 1 ? (a0 != 2 ? 4294967295 : 30) : 20) : 10);
}


// Function: if_elseif_long at 0x107cc
unsigned int if_elseif_long(unsigned int a0)
{
 return (a0 ? (a0 != 1 ? (a0 != 2 ? (a0 != 3 ? (a0 != 4 ? 4294967295 : 500) : 400) : 300) : 200) : 100);
}


// Function: switch_small at 0x10854
unsigned int switch_small(unsigned int a0)
{
 unsigned int v2; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v2 = __aeabi_idiv(v0, v1);
 return __aeabi_idiv(v0, v1);
}


// Function: switch_large at 0x108e8
unsigned int switch_large(unsigned int a0)
{
 return 90;
}


// Function: switch_default at 0x10994
unsigned int switch_default(unsigned int a0)
{
 if (a0 == 3)
 return 300;
 if (3 < a0)
 return 0;
 if (a0 == 1)
 {
 return 100;
 }
 else if (a0 == 2)
 {
 return 200;
 }
 return 0;
}


// Function: switch_fallthrough at 0x10a04
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int cur; // [bp-0xc]

 cur = 0;
 if (a0 == 3)
 {
 cur += a0 * 4;
 }
 else if (3 < a0)
 {
 cur = 4294967295;
 return cur;
 }
 else if (a0 == 1)
 {
 cur += a0;
 return cur;
 }
 else if (a0 != 2)
 {
 cur = 4294967295;
 return cur;
 }
 cur += a0 * 2;
 cur += a0;
 return cur;
}


// Function: loop_for_fixed at 0x10aa8
unsigned int loop_for_fixed(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 for (i = 0; i < a0; i += 1)
 {
 v0 += i;
 }
 return v0;
}


// Function: loop_while at 0x10b0c
unsigned int loop_while(unsigned int a0)
{
 unsigned int result; // [bp-0x14]
 unsigned int i; // [bp-0xc]

 result = a0;
 for (i = 0; result; i += 1)
 {
 result = (result * 1717986919 >> 34) - (result >> 31);
 }
 if (i >= 1)
 return i;
 return 1;
}


// Function: loop_dowhile at 0x10b80
unsigned int loop_dowhile(unsigned int a0)
{
 unsigned int result; // [bp-0x14]
 unsigned int v1; // [bp-0xc]

 result = a0;
 v1 = 0;
 do
 {
 result = (result * 1717986919 >> 34) - (result >> 31);
 v1 += 1;
 } while (result);
 return v1;
}


// Function: loop_nested at 0x10be4
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]
 unsigned int i; // [bp-0x10]
 unsigned int j; // [bp-0xc]

 v0 = 0;
 for (i = 0; i < a0; i += 1)
 {
 for (j = 0; j < a1; j += 1)
 {
 v0 += 1;
 }
 }
 return v0;
}


// Function: loop_break at 0x10c70
extern unsigned int __glibc___stack_chk_guard;

unsigned int loop_break(unsigned int a0)
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]
 unsigned int v5; // [bp-0x14]
 unsigned int v6; // [bp-0x10]
 unsigned int v7; // [bp-0xc]

 v7 = __glibc___stack_chk_guard;
 v2 = 10;
 v3 = 20;
 v4 = 30;
 v5 = 40;
 v6 = 50;
 v1 = 5;
 v0 = 0;
 while (true)
 {
 if (v0 >= v1)
 {
 v0 = 4294967295;
 break;
 }
 else if (a0 == (&v2)[v0])
 {
 break;
 }
 else
 {
 v0 += 1;
 }
 }
 if (!(v7 ^ __glibc___stack_chk_guard))
 return v0;
 __stack_chk_fail(); /* do not return */
}


// Function: loop_continue at 0x10d38
unsigned int loop_continue(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 for (i = 1; i <= a0; i += 1)
 {
 if (((char)i & 1))
 v0 += i;
 }
 return v0;
}


// Function: goto_forward at 0x10db4
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (a0 <= 0 ? a0 : a0 * a0);
 v0 *= 2;
 return v0;
}


// Function: goto_backward at 0x10e10
unsigned int goto_backward(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 if (0 >= a0)
 return 1;
 v0 = 1;
 for (i = 1; a0 >= i; i += 1)
 {
 v0 *= i;
 }
 return v0;
}


// Function: ternary_op at 0x10e8c
int ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 > a1)
 return a0;
 return a1;
}


// Function: test_control_flow_l1 at 0x10ec4
extern char g_12aa8;

int test_control_flow_l1()
{
 unsigned int v27; // r0
 unsigned int result; // [bp-0x10]

 puts(0x12aa8);
 printf("CF-L1-01 (sequential_ops): %d\n", sequential_ops(5, 7, 3));
 printf("CF-L1-02 (single_if): %d\n", single_if(10));
 printf("CF-L1-02 (single_if): %d\n", single_if(4294967291));
 printf("CF-L1-03 (if_else): %d\n", if_else(5));
 printf("CF-L1-03 (if_else): %d\n", if_else(4294967293));
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(10, 5));
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(10, 4294967291));
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(4294967286, 5));
 result = 1;
 printf("CF-L1-05 (nested_if_deep): %d\n", nested_if_deep(1, 1, 1));
 printf("CF-L1-06 (if_elseif_chain): %d\n", if_elseif_chain(1));
 printf("CF-L1-07 (if_elseif_long): %d\n", if_elseif_long(3));
 printf("CF-L1-08 (switch_small): %d\n", switch_small(2));
 printf("CF-L1-09 (switch_large): %d\n", switch_large(7));
 printf("CF-L1-10 (switch_default): %d\n", switch_default(5));
 printf("CF-L1-11 (switch_fallthrough): %d\n", switch_fallthrough(3));
 printf("CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10));
 printf("CF-L1-13 (loop_while): %d\n", loop_while(12345));
 printf("CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876));
 printf("CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4));
 printf("CF-L1-16 (loop_break): %d\n", loop_break(30));
 printf("CF-L1-16 (loop_break): %d\n", loop_break(99));
 printf("CF-L1-17 (loop_continue): %d\n", loop_continue(10));
 printf("CF-L1-18 (goto_forward): %d\n", goto_forward(5));
 printf("CF-L1-18 (goto_forward): %d\n", goto_forward(4294967293));
 printf("CF-L1-19 (goto_backward): %d\n", goto_backward(5));
 printf("CF-L1-20 (ternary_op): %d\n", ternary_op(10, 5));
 v27 = printf("CF-L1-20 (ternary_op): %d\n", ternary_op(3, 8));
 return printf("CF-L1-20 (ternary_op): %d\n", ternary_op(3, 8));
}


// Function: loop_multi_exit at 0x111fc
extern unsigned int __glibc___stack_chk_guard;

unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned int v15; // r3
 unsigned int v0; // [bp-0x44]
 unsigned int v1; // [bp-0x40]
 unsigned int result; // [bp-0x3c]
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
 unsigned int v13; // [bp-0x10]
 unsigned int v14; // [bp-0xc]

 v14 = __glibc___stack_chk_guard;
 result = 1;
 v3 = 2;
 v4 = 3;
 v5 = 4;
 v6 = 5;
 v7 = 6;
 v8 = 7;
 v9 = 8;
 v10 = 9;
 v11 = 10;
 v12 = 11;
 v13 = 12;
 v0 = 0;
 while (true)
 {
 if (v0 <= 2)
 {
 v1 = 0;
 if (v1 > 3)
 {
 v0 += 1;
 }
 else if (a0 == (&result)[4 * v0 + v1])
 {
 v15 = v0 * 10 + v1;
 break;
 }
 else
 {
 v1 += 1;
 }
 }
 else
 {
 v15 = 4294967295;
 break;
 }
 }
 if (!(v14 ^ __glibc___stack_chk_guard))
 return v15;
 __stack_chk_fail(); /* do not return */
}


// Function: infinite_loop at 0x1130c
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 while (*(ptr) != 1)
 {
 v0 += 1;
 if (v0 > 1000)
 {
 *(ptr) = 1;
 return v0;
 }
 }
 return v0;
}


// Function: multi_return at 0x11374
unsigned int multi_return(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 if (0 > a0)
 return 4294967295;
 v0 = a0 * 2;
 if (v0 > 100)
 {
 return 4294967294;
 }
 else if (!((char)a0 & 1))
 {
 return v0;
 }
 else
 {
 return a0 + 1;
 }
}


// Function: conditional_return at 0x113e8
unsigned int conditional_return(unsigned int a0)
{
 return (a0 <= 0 ? (0 <= a0 ? 0 : -(a0)) : a0 * 2);
}


// Function: duffs_device at 0x1143c
unsigned int duffs_device(unsigned int *a0, unsigned int *a1, unsigned int a2)
{
 unsigned int *iter; // [bp-0x18]
 unsigned int *cur; // [bp-0x14]

 cur = a0;
 iter = a1;
 switch (a2)
 {
 case 0:
 break;
 default:
 return 4294967295;
 }
}


// Function: loop_complex_cond at 0x115f8
int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 v1 = a0;
 for (i = 0; v1 > v0 && 9 >= i && 0 < v1; i += 1)
 {
 v0 += 2;
 v1 -= 1;
 }
 return v0 + v1 + i;
}


// Function: loop_modify_var at 0x11694
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int cur; // [bp-0xc]

 v0 = 0;
 for (cur = 0; cur < a0; cur += 1)
 {
 v0 += cur;
 if (cur > 5)
 cur += 2;
 }
 return v0;
}


// Function: loop_external_state at 0x11710
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 while (!*(a0))
 {
 v0 += 1;
 if (100 < v0)
 return v0;
 }
 return v0;
}


// Function: recursion_factorial at 0x11770
unsigned int recursion_factorial(unsigned int a0)
{
 return (1 < a0 ? recursion_factorial(a0 - 1) * a0 : 1);
}


// Function: tail_recursion at 0x117bc
unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0

 if (1 < a0)
 {
 v0 = tail_recursion(a0 - 1, a1 * a0);
 return tail_recursion(a0 - 1, a1 * a0);
 }
 return a1;
}


// Function: indirect_recursion_a at 0x11810
unsigned int indirect_recursion_b(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);

unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 if (0 < a1)
 return ((a0 & 1) ? indirect_recursion_b(a0 * 3 + 1, a1 - 1, a0 * 3 + 1, a1 - 1) : indirect_recursion_b((a0 >> 31) + a0 >> 1, a1 - 1, (a0 >> 31) + a0 >> 1, a1 - 1));
 return a0;
}


// Function: indirect_recursion_b at 0x118b0
unsigned int indirect_recursion_b(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 if (0 < a1)
 {
 v0 = indirect_recursion_a(a0 + 1, a1 - 1);
 return indirect_recursion_a(a0 + 1, a1 - 1);
 }
 return a0;
}


// Function: call_func_ptr at 0x11904
int call_func_ptr(func_t a0, unsigned int a1)
{
 unsigned int v0; // r0

 v0 = a0(a1);
 return a0(a1);
}


// Function: double_value at 0x11934
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x1195c
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: call_func_ptr_array at 0x1198c
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v5; // r0
 char v0; // [bp-0x1c]
 func_t v1; // [bp-0x18]
 func_t v2; // [bp-0x14]
 func_t v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 v1 = double_value;
 v2 = triple_value;
 v3 = recursion_factorial;
 if (a0 < 0 || a0 > 2)
 v5 = 4294967295;
 else
 v5 = (&v1)[a0](a1);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return v5;
 __stack_chk_fail(); /* do not return */
}


// Function: call_virtual_func at 0x11a30
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x11a5c
unsigned int process_with_callback(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = 0;
 for (v1 = 0; v1 < a1; v1 += 1)
 {
 v0 += double_value(*((int *)(a0 + v1 * 4)));
 }
 return v0;
}


// Function: test_control_flow_l2 at 0x11ae4
extern unsigned int __glibc___stack_chk_guard;
extern char g_12d6c;

unsigned int test_control_flow_l2()
{
 unsigned int v34; // r0
 unsigned int result[1]; // [bp-0x68]
 unsigned int flag2[1]; // [bp-0x64]
 unsigned int flag3; // [bp-0x60]
 unsigned int v3; // [bp-0x5c]
 unsigned int v4; // [bp-0x58]
 unsigned int v5; // [bp-0x54]
 unsigned int v6; // [bp-0x50]
 unsigned int flag1[1]; // [bp-0x4c]
 unsigned int v8; // [bp-0x48]
 unsigned int v9; // [bp-0x44]
 unsigned int v10; // [bp-0x40]
 unsigned int v11; // [bp-0x3c]
 unsigned int v12; // [bp-0x38]
 unsigned int v13; // [bp-0x34]
 unsigned int v14; // [bp-0x30]
 char v15; // [bp-0x2c]
 unsigned int v16; // [bp-0xc]
 unsigned int cb_data[6];

 v16 = __glibc___stack_chk_guard;
 puts("Testing Control Flow Level 2");
 printf("CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7));
 *((unsigned int *)result) = 0;
 printf("CF-L2-02 (infinite_loop): %d\n", infinite_loop(result));
 printf("CF-L2-03 (multi_return): %d\n", multi_return(4294967291));
 printf("CF-L2-03 (multi_return): %d\n", multi_return(100));
 printf("CF-L2-03 (multi_return): %d\n", multi_return(3));
 printf("CF-L2-04 (conditional_return): %d\n", conditional_return(5));
 printf("CF-L2-04 (conditional_return): %d\n", conditional_return(4294967291));
 *((unsigned int *)flag1) = 1;
 v8 = 2;
 v9 = 3;
 v10 = 4;
 v11 = 5;
 v12 = 6;
 v13 = 7;
 v14 = 8;
 memset(&v15, 0, 32);
 printf("CF-L2-05 (duffs_device): %d\n", duffs_device(&v15, flag1, 8));
 printf("CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10));
 printf("CF-L2-07 (loop)modify_var): %d\n", loop_modify_var(10));
 *((unsigned int *)flag2) = 0;
 printf("CF-L2-08 (loop_external_state): %d\n", loop_external_state(flag2));
 printf("CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5));
 printf("CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1));
 printf("CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3));
 printf("CF-L2-12 (call_func_ptr): %d\n", call_func_ptr(double_value, 5));
 printf("CF-L22-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5));
 printf("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5));
 cb_data[0] = 1;
 cb_data[1] = 2;
 cb_data[2] = 3;
 cb_data[3] = 4;
 cb_data[4] = 5;
 cb_data[5] = 6;
 v34 = printf("CF-L2-15 (process)with_callback): %d\n", process_with_callback(cb_data, 5));
 if (!(v16 ^ __glibc___stack_chk_guard))
 return v34;
 __stack_chk_fail(); /* do not return */
}


// Function: non_local_jump at 0x11dbc
extern unsigned int jump_buffer;

unsigned int non_local_jump(unsigned int a0)
{
 if (_setjmp(0x24050))
 {
 return 4294967295;
 }
 else if (0 > a0)
 {
 longjmp(0x24050, 1); /* do not return */
 }
 else if (a0 > 100)
 {
 longjmp(0x24050, 2); /* do not return */
 }
 else
 {
 return a0 * 2;
 }
}


// Function: cpp_exception at 0x11e30
unsigned int cpp_exception(unsigned int a0)
{
 return (0 <= a0 ? (a0 <= 100 ? a0 * 2 : 4294967294) : 4294967295);
}


// Function: op_add at 0x11e80
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: op_sub at 0x11eb0
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x11ee0
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: op_div at 0x11f10
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 return (!a1 ? 0 : __aeabi_idiv(a0, a1));
}


// Function: op_mod at 0x11f54
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 if (!a1)
 return 0;
 return a0 % a1;
}


// Function: op_and at 0x11f9c
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: op_or at 0x11fcc
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: op_xor at 0x11ffc
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: op_shl at 0x1202c
unsigned int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31) & a1 - 32 >> 31;
}


// Function: op_shr at 0x1205c
unsigned int op_shr(unsigned int a0, char a1)
{
 return (a1 < 32 ? a0 >> a1 : a0 >> 31);
}


// Function: large_jump_table at 0x1208c
extern unsigned int __glibc___stack_chk_guard;

unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v12; // r0
 int (*func_array[10])(unsigned int, unsigned int);
 unsigned int v11; // [bp-0xc]

 v11 = __glibc___stack_chk_guard;
 func_array[0] = op_add;
 func_array[1] = op_sub;
 func_array[2] = op_mul;
 func_array[3] = op_div;
 func_array[4] = op_mod;
 func_array[5] = op_and;
 func_array[6] = op_or;
 func_array[7] = op_xor;
 func_array[8] = op_shl;
 func_array[9] = op_shr;
 if (a0 < 0 || a0 > 9)
 v12 = 4294967295;
 else
 v12 = func_array[a0](a1, a2);
 if (!(v11 ^ __glibc___stack_chk_guard))
 return v12;
 __stack_chk_fail(); /* do not return */
}


// Function: conditional_func_ptr at 0x1214c
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r0
 func_t v0; // [bp-0xc]

 v0 = (a0 ? (a0 != 1 ? recursion_factorial : triple_value) : double_value);
 v1 = v0(a1);
 return v0(a1);
}


// Function: state_machine at 0x121c0
unsigned int state_machine(unsigned int a0, unsigned int a1)
{
 return (a0 ? 3 : 0);
}


// Function: state_idle at 0x12278
unsigned int state_idle(unsigned int a0)
{
 return (a0 == 1 ? 0 : a0) & 255;
}


// Function: state_processing at 0x122ac
unsigned int state_processing(unsigned int a0)
{
 return (a0 != 2 ? (a0 != 99 ? 1 : 3) : 2);
}


// Function: state_done at 0x122f8
unsigned int state_done(unsigned int a0)
{
 return 2;
}


// Function: state_error at 0x1231c
unsigned int state_error(unsigned int a0)
{
 return (a0 ? 3 : 0);
}


// Function: fsm_func_table at 0x12354
extern unsigned int __glibc___stack_chk_guard;

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 unsigned int v6; // r0
 unsigned int (*state_array[4])(unsigned int);
 unsigned int v5; // [bp-0xc]

 v5 = __glibc___stack_chk_guard;
 state_array[0] = state_idle;
 state_array[1] = state_processing;
 state_array[2] = state_done;
 state_array[3] = state_error;
 if (a1 < 0 || a1 > 3)
 v6 = 3;
 else
 v6 = state_array[a1](a0);
 if (!(v5 ^ __glibc___stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: computed_goto at 0x123f8
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_12468;
extern unsigned int g_12470;
extern unsigned int g_12478;
extern unsigned int g_12480;

unsigned int computed_goto(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v0 = a0;
 v5 = __glibc___stack_chk_guard;
 v1 = 74856;
 v2 = 74864;
 v3 = 74872;
 v4 = 74880;
 if (a1 >= 0 && a1 <= 3)
 {
 switch(a1) {
 case 0: goto label0;
 case 1: goto label1;
 case 2: goto label2;
 case 3: goto label3;
 }
 }
 else
 {
 if (!(v5 ^ __glibc___stack_chk_guard))
 return 4294967295;
 __stack_chk_fail();
 }
label0:
 v0 = v1;
 goto label_end;
label1:
 v0 = v2;
 goto label_end;
label2:
 v0 = v3;
 goto label_end;
label3:
 v0 = v4;
label_end:
 if (!(v5 ^ __glibc___stack_chk_guard))
 return v0;
 __stack_chk_fail(); /* do not return */
}


// Function: obfuscated_cf at 0x124b4
unsigned int obfuscated_cf(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 if (!((char)armg_calculate_condition(161, a0 * a0, 1, 0)))
 v0 = v0 * 2 + 1;
 v0 *= 2;
 return v0;
}


// Function: opaque_predicate at 0x12514
unsigned int opaque_predicate(unsigned int a0)
{
 unsigned int result; // [bp-0xc]

 result = 0;
 return (result ? a0 * 3 : a0 * 2);
}


// Function: overlapped_code at 0x12564
unsigned int overlapped_code(unsigned int a0)
{
 return (!(a0 & 1) ? (a0 >> 31) + a0 >> 1 : a0 * 3 + 1);
}


// Function: test_control_flow_l3 at 0x125bc
extern unsigned int __glibc___stack_chk_guard;
extern char g_12fec;

unsigned int test_control_flow_l3()
{
 unsigned int v16; // r0
 unsigned int result; // [bp-0x1c]
 unsigned int flag1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 puts(0x12fec);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5));
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291));
 printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(5));
 printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(4294967291));
 printf("CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5));
 printf("CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5));
 printf("CF-L3-05 (state_machine): %d\n", state_machine(1, 0));
 printf("CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1));
 result = 0;
 flag1 = 1;
 v2 = 2;
 v3 = 3;
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto(&result, 2));
 printf("CF-L3-08 (obfuscated_cf): %d\n", obfuscated_cf(5));
 printf("CF-L3-09 (opaque_predicate): %d\n", opaque_predicate(5));
 v16 = printf("CF-L3-10 (overlapped_code): %d\n", overlapped_code(5));
 if (!(v4 ^ __glibc___stack_chk_guard))
 return v16;
 __stack_chk_fail(); /* do not return */
}


// Function: main at 0x12788
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



// Function: __aeabi_idiv0 at 0x129e8
int __aeabi_idiv0(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = a1;
}



/* CRT stub function _fini removed by preprocessor */



// Function: sub_129fc at 0x129fc
int sub_129fc(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0;
}

