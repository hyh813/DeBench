// Angr Decompilation of 1_gcc_O0_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>

/* CRT stub function _init removed by preprocessor */



// Macro for rotate left
#define __ROL__(val, shift) (((val) << (shift)) | ((val) >> (32 - (shift))))

// Stack protection function
void __stack_chk_fail(void);

// ARM64 condition calculation
int arm64g_calculate_condition(int cond, unsigned long long val1, unsigned long long val2, int flag)
{
 return 0;
}

// Forward declaration for indirect recursion
unsigned int indirect_recursion_b(unsigned int a0, unsigned int a1);

// Global variable definitions
unsigned long long g_413f78 = 0;
char g_4029e8 = 0;
jmp_buf __dollar_d;
unsigned long long g_414018 = 0;
unsigned long long g_414020 = 0;
char g_402cc0 = 0;
unsigned long long g_414028 = 0;
unsigned long long g_414038 = 0;
unsigned long long g_414048 = 0;
unsigned long long g_414058 = 0;
unsigned long long g_414068 = 0;
unsigned long long g_414078 = 0;
unsigned long long g_414088 = 0;
unsigned long long g_414098 = 0;
unsigned long long g_4140a8 = 0;
char g_402f18 = 0;


// Function: __dollar_x at 0x400930
extern unsigned long long g_413f78;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return g_413f78;
}


// Function: sub_400944 at 0x400944
long long sub_400944()
{
 unsigned long long v0; // x0
 jmp_buf env;

 v0 = _setjmp(env);
 return _setjmp(env);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400a30 at 0x400a30
void sub_400a30()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */







/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */







/* CRT stub function frame_dummy removed by preprocessor */



// Function: sequential_ops at 0x400b14
unsigned int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v0 = a0 + a1;
 v1 = (v0 * 2 | v0 >> 31) & 4294967294;
 v2 = v1 - a2;
 return v2;
}


// Function: single_if at 0x400b5c
unsigned int single_if(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 if (v0 > 0)
 v0 = (v0 * 2 | v0 >> 31) & 4294967294;
 return v0;
}


// Function: if_else at 0x400b88
unsigned long long if_else(unsigned int a0)
{
 if (a0 <= 0)
 return 0;
 return 1;
}


// Function: nested_if_2 at 0x400bb0
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
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


// Function: nested_if_deep at 0x400bf8
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
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
 else if (a3 <= 0)
 {
 return 3;
 }
 else if (a4 > 0)
 {
 return 5;
 }
 else
 {
 return 4;
 }
}


// Function: if_elseif_chain at 0x400c80
unsigned long long if_elseif_chain(unsigned int a0)
{
 if (!a0)
 {
 return 10;
 }
 else if (a0 == 1)
 {
 return 20;
 }
 else if (a0 == 2)
 {
 return 30;
 }
 else
 {
 return 4294967295;
 }
}


// Function: if_elseif_long at 0x400cd0
unsigned long long if_elseif_long(unsigned int a0)
{
 if (!a0)
 {
 return 100;
 }
 else if (a0 == 1)
 {
 return 200;
 }
 else if (a0 == 2)
 {
 return 300;
 }
 else if (a0 == 3)
 {
 return 400;
 }
 else if (a0 == 4)
 {
 return 500;
 }
 else
 {
 return 4294967295;
 }
}


// Function: switch_small at 0x400d48
unsigned long long switch_small(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v0 = 10;
 v1 = 5;
 if (a0 == 3)
 return v0 / v1;
 if (3 < a0)
 return 4294967295;
 if (a0 == 2)
 {
 return v1 * v0;
 }
 else if (2 >= a0)
 {
 if (!a0)
 {
 return v0 + v1;
 }
 else if (a0 == 1)
 {
 return v0 - v1;
 }
 }
 return 4294967295;
}


// Function: switch_large at 0x400df8
unsigned long long switch_large(unsigned int a0)
{
 if (a0 == 9)
 return 90;
 if (9 < a0)
 return 4294967295;
 if (a0 == 8)
 {
 return 80;
 }
 else if (8 >= a0)
 {
 if (a0 == 7)
 {
 return 70;
 }
 else if (7 >= a0)
 {
 if (a0 == 6)
 {
 return 60;
 }
 else if (6 >= a0)
 {
 if (a0 == 5)
 {
 return 50;
 }
 else if (5 >= a0)
 {
 if (a0 == 4)
 {
 return 40;
 }
 else if (4 >= a0)
 {
 if (a0 == 3)
 {
 return 30;
 }
 else if (3 >= a0)
 {
 if (a0 == 2)
 {
 return 20;
 }
 else if (2 >= a0)
 {
 if (!a0)
 {
 return 0;
 }
 else if (a0 == 1)
 {
 return 10;
 }
 }
 }
 }
 }
 }
 }
 }
 return 4294967295;
}


// Function: switch_default at 0x400f38
unsigned long long switch_default(unsigned int a0)
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


// Function: switch_fallthrough at 0x400f98
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int cur; // [bp-0x4]

 cur = 0;
 if (a0 == 3)
 {
 cur += (a0 * 4 | a0 >> 30) & 0xfffffffc;
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
 cur += (a0 * 2 | a0 >> 31) & 4294967294;
 cur += a0;
 return cur;
}


// Function: loop_for_fixed at 0x401028
unsigned int loop_for_fixed(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]
 unsigned int i; // [bp-0x4]

 v0 = 0;
 for (i = 0; i < a0; i += 1)
 {
 v0 += i;
 }
 return v0;
}


// Function: loop_while at 0x401074
unsigned long long loop_while(unsigned int a0)
{
 unsigned int result; // [bp-0x14]
 unsigned int i; // [bp-0x4]

 result = a0;
 for (i = 0; result; i += 1)
 {
 result = (__ROL__(result * 1717986919, 32) >> 31 & 0xc0000000 | __ROL__(__ROL__(result * 1717986919, 32), 30) & 1073741823) - (result >> 31 & 4294967294 | __ROL__(result, 1) & 1);
 }
 if (0 >= i)
 return 1;
 return i;
}


// Function: loop_dowhile at 0x4010dc
unsigned int loop_dowhile(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x4]

 v0 = a0;
 v1 = 0;
 do
 {
 v0 = (__ROL__(v0 * 1717986919, 32) >> 31 & 0xc0000000 | (__ROL__(v0 * 1717986919, 32) * 0x40000000 | __ROL__(v0 * 1717986919, 32) >> 2) & 1073741823) - (v0 >> 31 & 4294967294 | (v0 * 2 | v0 >> 31) & 1);
 v1 += 1;
 } while (v0);
 return v1;
}


// Function: loop_nested at 0x401130
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int i; // [bp-0x8]
 unsigned int j; // [bp-0x4]

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


// Function: loop_break at 0x4011a0
extern char __stack_chk_guard;

long long loop_break(unsigned int a0)
{
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x28]
 unsigned int v2; // [bp-0x24]
 unsigned long v3; // [bp-0x20]
 unsigned long long v4; // [bp-0x18]
 unsigned int v5; // [bp-0x10]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 v3 = 85899345930;
 v4 = 171798691870;
 v5 = 50;
 v2 = 5;
 v1 = 0;
 while (true)
 {
 if (v1 >= v2)
 {
 v1 = 4294967295;
 break;
 }
 else if (a0 == *((int *)((char *)&v3 + (__ROL__(v1, 2) & 18446744073709551612))))
 {
 break;
 }
 else
 {
 v1 += 1;
 }
 }
 if (v6 == *((long long *)&__stack_chk_guard))
 return v1;
 __stack_chk_fail(); /* do not return */
}


// Function: loop_continue at 0x401264
unsigned int loop_continue(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v0 = 0;
 for (v1 = 1; v1 <= a0; v1 += 1)
 {
 if (((char)v1 & 1))
 v0 += v1;
 }
 return v0;
}


// Function: goto_forward at 0x4012cc
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 if (a0 > 0)
 v0 = a0 * a0;
 else
 v0 = a0;
 v0 = (v0 * 2 | v0 >> 31) & 4294967294;
 return v0;
}


// Function: goto_backward at 0x401310
unsigned long long goto_backward(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]
 unsigned int i; // [bp-0x4]

 if (0 >= a0)
 return 1;
 v0 = 1;
 for (i = 1; a0 >= i; i += 1)
 {
 v0 *= i;
 }
 return v0;
}


// Function: ternary_op at 0x40137c
long long ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 > a1)
 return a0;
 return a1;
}


// Function: test_control_flow_l1 at 0x4013a4
extern char g_4029e8;

int test_control_flow_l1()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_4029e8);
 printf("CF-L1-01 (sequential_ops): %d\n", sequential_ops(5, 7, 3) & 4294967295);
 printf("CF-L1-02 (single_if): %d\n", single_if(10) & 4294967295);
 printf("CF-L1-02 (single_if): %d\n", single_if(4294967291) & 4294967295);
 printf("CF-L1-03 (if_else): %d\n", if_else(5) & 4294967295);
 printf("CF-L1-03 (if_else): %d\n", if_else(4294967293) & 4294967295);
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(10, 5) & 4294967295);
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(10, 4294967291) & 4294967295);
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(4294967286, 5) & 4294967295);
 printf("CF-L1-05 (nested_if_deep): %d\n", nested_if_deep(1, 1, 1, 1, 1) & 4294967295);
 printf("CF-L1-06 (if_elseif_chain): %d\n", if_elseif_chain(1) & 4294967295);
 printf("CF-L1-07 (if_elseif_long): %d\n", if_elseif_long(3) & 4294967295);
 printf("CF-L1-08 (switch_small): %d\n", switch_small(2) & 4294967295);
 printf("CF-L1-09 (switch_large): %d\n", switch_large(7) & 4294967295);
 printf("CF-L1-10 (switch_default): %d\n", switch_default(5) & 4294967295);
 printf("CF-L1-11 (switch_fallthrough): %d\n", switch_fallthrough(3) & 4294967295);
 printf("CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10) & 4294967295);
 printf("CF-L1-13 (loop_while): %d\n", loop_while(12345) & 4294967295);
 printf("CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876) & 4294967295);
 printf("CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4) & 4294967295);
 printf("CF-L1-16 (loop_break): %d\n", loop_break(30) & 4294967295);
 printf("CF-L1-16 (loop_break): %d\n", loop_break(99) & 4294967295);
 printf("CF-L1-17 (loop_continue): %d\n", loop_continue(10) & 4294967295);
 printf("CF-L1-18 (goto_forward): %d\n", goto_forward(5) & 4294967295);
 printf("CF-L1-18 (goto_forward): %d\n", goto_forward(4294967293) & 4294967295);
 printf("CF-L1-19 (goto_backward): %d\n", goto_backward(5) & 4294967295);
 printf("CF-L1-20 (ternary_op): %d\n", ternary_op(10, 5) & 4294967295);
 return printf("CF-L1-20 (ternary_op): %d\n", ternary_op(3, 8) & 4294967295);
}


// Function: loop_multi_exit at 0x40167c
extern char __stack_chk_guard;

long long loop_multi_exit(unsigned int a0)
{
 unsigned int v8; // w0
 char *v0; // [bp-0x60]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 int v3; // [bp-0x38]
 unsigned long long v4; // [bp-0x28]
 unsigned long long v5; // [bp-0x18]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 v3 = 316912650112397582603894390785;
 v4 = 633825300243241909290088267781;
 v5 = 950737950374086235976282144777;
 v1 = 0;
 while (true)
 {
 if (v1 <= 2)
 {
 v2 = 0;
 if (v2 > 3)
 {
 v1 += 1;
 }
 else if (a0 == *((int *)((char *)&v3 + (__ROL__((__ROL__(v1, 2) & 18446744073709551612) + v2, 2) & 18446744073709551612))))
 {
 v8 = (((((v1 * 4 | v1 >> 30) & 0xfffffffc) + v1) * 2 | ((v1 * 4 | v1 >> 30) & 0xfffffffc) + v1 >> 31) & 4294967294) + v2;
 break;
 }
 else
 {
 v2 += 1;
 }
 }
 else
 {
 v8 = 4294967295;
 break;
 }
 }
 if (v6 == *((long long *)&__stack_chk_guard))
 return v8;
 __stack_chk_fail(); /* do not return */
}


// Function: infinite_loop at 0x401778
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x4]

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


// Function: multi_return at 0x4017cc
unsigned long long multi_return(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 if (0 > a0)
 return 4294967295;
 v0 = __ROL__(a0, 1) & 4294967294;
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


// Function: conditional_return at 0x401830
unsigned long long conditional_return(unsigned int a0)
{
 if (a0 > 0)
 {
 return (a0 * 2 | a0 >> 31) & 4294967294;
 }
 else if (0 > a0)
 {
 return -(a0);
 }
 else
 {
 return 0;
 }
}


// Function: duffs_device at 0x401874
unsigned long long duffs_device(unsigned int *a0, unsigned int *a1, unsigned int a2)
{
 unsigned int v3; // w0
 unsigned long v4; // x0
 unsigned int *iter; // [bp-0x20]
 unsigned int *cur; // [bp-0x18]
 unsigned int v2; // [bp-0x4]

 cur = a0;
 iter = a1;
 if (0 >= a2)
 return 4294967295;
 v3 = a2 + 7;
 v2 = (v3 < 0 ? v3 + 7 : v3) >> 31 & 0xe0000000 | ((v3 < 0 ? v3 + 7 : v3) * 0x20000000 | (v3 < 0 ? v3 + 7 : v3) >> 3) & 536870911;
 v4 = a2;
 if (a2 == 0)
 return a2;
 while (true)
 {
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
 v2 -= 1;
 if (0 >= v2)
 break;
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
 iter += 1;
 cur += 1;
 *(cur) = *(iter);
 }
 return a2;
}


// Function: loop_complex_cond at 0x401a64
int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int i; // [bp-0x4]

 v0 = 0;
 v1 = a0;
 for (i = 0; v1 > v0 && 9 >= i && 0 < v1; i += 1)
 {
 v0 += 2;
 v1 -= 1;
 }
 return v0 + v1 + i;
}


// Function: loop_modify_var at 0x401ae8
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]
 unsigned int cur; // [bp-0x4]

 v0 = 0;
 for (cur = 0; cur < a0; cur += 1)
 {
 v0 += cur;
 if (cur > 5)
 cur += 2;
 }
 return v0;
}


// Function: loop_external_state at 0x401b4c
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 += 1, 100 >= v0));
 return v0;
}


// Function: recursion_factorial at 0x401b98
unsigned long long recursion_factorial(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (1 < a0)
 return a0 * (recursion_factorial(a0 - 1) & 4294967295);
 return 1;
}


// Function: tail_recursion at 0x401bd8
int tail_recursion(unsigned int a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (1 < a0)
 return tail_recursion(a0 - 1, a1 * a0 & 4294967295);
 return a1;
}


// Function: indirect_recursion_a at 0x401c24
int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (0 >= a1)
 {
 return a0;
 }
 else if (!((char)a0 & 1))
 {
 return indirect_recursion_b(((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647, a1 - 1);
 }
 else
 {
 return indirect_recursion_b(((a0 * 2 | a0 >> 31) & 4294967294) + a0 + 1, a1 - 1);
 }
}


// Function: indirect_recursion_b at 0x401cb4
unsigned int indirect_recursion_b(unsigned int a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (0 < a1)
 return indirect_recursion_a(a0 + 1, a1 - 1);
 return a0;
}


// Function: call_func_ptr at 0x401cfc
typedef unsigned int (*func_ptr_t)(unsigned int, void*);

int call_func_ptr(func_ptr_t a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return a0(a1, (void*)a0);
}


// Function: double_value at 0x401d20
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: triple_value at 0x401d38
int triple_value(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + a0;
}


// Function: call_func_ptr_array at 0x401d58
extern jmp_buf __dollar_d;
extern char __stack_chk_guard;
extern unsigned long long g_414018;
extern unsigned long long g_414020;

long long call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int v7; // w0
 char *v0; // [bp-0x40]
 char v1; // [bp-0x24]
 unsigned long v2; // [bp-0x20]
 unsigned long v3; // [bp-0x18]
 unsigned long v4; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 v2 = (unsigned long)__dollar_d;
 v3 = g_414018;
 v4 = g_414020;
 if (a0 < 0 || a0 > 2)
 v7 = 4294967295;
 else
 v7 = ((func_ptr_t)*((long long *)((char *)&v2 + (__ROL__(a0, 3) & 18446744073709551608))))(a1, (void*)*((long long *)((char *)&v2 + (__ROL__(a0, 3) & 18446744073709551608))));
 if (v5 == *((long long *)&__stack_chk_guard))
 return v7;
 __stack_chk_fail(); /* do not return */
}


// Function: call_virtual_func at 0x401e04
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return (a1 * 2 | a1 >> 31) & 4294967294;
}


// Function: process_with_callback at 0x401e20
typedef unsigned int (*callback_t)(int, void*);

unsigned int process_with_callback(unsigned long a0, unsigned int a1, callback_t a2)
{
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x8]
 unsigned int i; // [bp-0x4]
 char v3; // [bp+0x0]

 v0 = &v3;
 v1 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v1 += a2(*((int *)(a0 + (__ROL__(i, 2) & 18446744073709551612))), (void*)a2);
 }
 return v1;
}


// Function: test_control_flow_l2 at 0x401e94
extern char __stack_chk_guard;
extern char g_402cc0;

unsigned long long test_control_flow_l2()
{
 char *v0; // [bp-0x80]
 unsigned int result[1]; // [bp-0x68]
 unsigned int flag1[1]; // [bp-0x64]
 unsigned long v3; // [bp-0x60]
 unsigned long long v4; // [bp-0x58]
 unsigned int v5; // [bp-0x50]
 unsigned int v6[4]; // [bp-0x48]
 unsigned long long v7; // [bp-0x38]
 char v8; // [bp-0x28]
 unsigned long v9; // [bp-0x8]
 char v10; // [bp+0x0]

 v0 = &v10;
 v9 = *((long long *)&__stack_chk_guard);
 puts(&g_402cc0);
 printf("CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7) & 4294967295);
 *result = 0;
 printf("CF-L2-02 (infinite_loop): %d\n", infinite_loop(result) & 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", multi_return(4294967291) & 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", multi_return(100) & 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", multi_return(3) & 4294967295);
 printf("CF-L2-04 (conditional_return): %d\n", conditional_return(5) & 4294967295);
 printf("CF-L2-04 (conditional_return): %d\n", conditional_return(4294967291) & 4294967295);
 v6[0] = 316912650112397582603894390785;
 v7 = 633825300243241909290088267781;
 memset(&v8, 0, 32);
 printf("CF-L2-05 (duffs_device): %d\n", duffs_device((unsigned int *)&v8, v6, 8) & 4294967295);
 printf("CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10) & 4294967295);
 printf("CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(10) & 4294967295);
 *flag1 = 0;
 printf("CF-L2-08 (loop_external_state): %d\n", loop_external_state(flag1) & 4294967295);
 printf("CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5) & 4294967295);
 printf("CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1) & 4294967295);
 printf("CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3) & 4294967295);
 printf("CF-L2-12 (call_func_ptr): %d\n", call_func_ptr((func_ptr_t)double_value, 5) & 4294967295);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5) & 4294967295);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5) & 4294967295);
 v3 = 8589934593;
 v4 = 17179869187;
 v5 = 5;
 printf("CF-L2-15 (process_with_callback): %d\n", process_with_callback(v3, 5, (callback_t)double_value) & 4294967295);
 if (v9 == *((long long *)&__stack_chk_guard))
 return 0;
 __stack_chk_fail(); /* do not return */
}


// Function: non_local_jump at 0x40210c
extern jmp_buf __dollar_d;

unsigned long long non_local_jump(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (_setjmp(__dollar_d))
 {
 return 4294967295;
 }
 else if (0 > a0)
 {
 longjmp(__dollar_d, 1); /* do not return */
 }
 else if (a0 > 100)
 {
 longjmp(__dollar_d, 2); /* do not return */
 }
 else
 {
 return (a0 * 2 | a0 >> 31) & 4294967294;
 }
}


// Function: cpp_exception at 0x40217c
unsigned long long cpp_exception(unsigned int a0)
{
 if (0 > a0)
 {
 return 4294967295;
 }
 else if (a0 > 100)
 {
 return 4294967294;
 }
 else
 {
 return (a0 * 2 | a0 >> 31) & 4294967294;
 }
}


// Function: op_add at 0x4021bc
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: op_sub at 0x4021dc
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x4021fc
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: op_div at 0x40221c
unsigned long long op_div(unsigned int a0, unsigned int a1)
{
 if (!a1)
 return 0;
 return a0 / a1;
}


// Function: op_mod at 0x402250
unsigned long long op_mod(unsigned int a0, unsigned int a1)
{
 if (!a1)
 return 0;
 return a0 - a1 * a0 / a1;
}


// Function: op_and at 0x402290
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: op_or at 0x4022b0
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: op_xor at 0x4022d0
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: op_shl at 0x4022f0
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: op_shr at 0x402310
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: large_jump_table at 0x402330
extern char __stack_chk_guard;
extern unsigned long long g_414028;
extern unsigned long long g_414038;
extern unsigned long long g_414048;
extern unsigned long long g_414058;
extern unsigned long long g_414068;

long long large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v9; // w0
 char *v0; // [bp-0x80]
 char v1; // [bp-0x64]
 int v2; // [bp-0x58]
 int v3; // [bp-0x48]
 int v4; // [bp-0x38]
 int v5; // [bp-0x28]
 int v6; // [bp-0x18]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 *((unsigned long long *)&v2) = g_414028;
 *((unsigned long long *)&v3) = g_414038;
 *((unsigned long long *)&v4) = g_414048;
 *((unsigned long long *)&v5) = g_414058;
 *((unsigned long long *)&v6) = g_414068;
 if (a0 < 0 || a0 > 9)
 v9 = 4294967295;
 else
 v9 = ((unsigned int (*)(unsigned int, unsigned int))*((long long *)((char *)&v2 + (__ROL__(a0, 3) & 18446744073709551608))))(a1, a2);
 if (v7 == *((long long *)&__stack_chk_guard))
 return v9;
 __stack_chk_fail(); /* do not return */
}


// Function: conditional_func_ptr at 0x4023e8
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 char *v0; // [bp-0x30]
 func_ptr_t v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 if (!a0)
 {
 v1 = (func_ptr_t)double_value;
 }
 else if (a0 == 1)
 {
 v1 = (func_ptr_t)triple_value;
 }
 else
 {
 v1 = (func_ptr_t)recursion_factorial;
 }
 return v1(a1, (void*)v1);
}


// Function: state_machine at 0x402450
unsigned long long state_machine(unsigned int a0, unsigned int a1)
{
 if (a1 != 3)
 {
 if (3 < a1)
 return 3;
 if (a1 != 2)
 {
 if (2 >= a1)
 {
 if (a1)
 {
 if (a1 == 1)
 {
 switch (a0)
 {
 case 2:
 return 2;
 case 99:
 return 3;
 default:
 return 1;
 }
 }
 }
 else
 {
 if (a0 == 1)
 return 1;
 return 0;
 }
 }
 }
 else
 {
 return 2;
 }
 return 3;
 }
 else if (!a0)
 {
 return 0;
 }
 else
 {
 return 3;
 }
}


// Function: state_idle at 0x402524
long long state_idle(unsigned int a0)
{
 unsigned int v0; // w0

 if (a0 != 1)
 v0 = 0;
 else
 v0 = 1;
 return v0 & 255;
}


// Function: state_processing at 0x402544
unsigned long long state_processing(unsigned int a0)
{
 switch (a0)
 {
 case 2:
 return 2;
 case 99:
 return 3;
 default:
 return 1;
 }
}


// Function: state_done at 0x402580
unsigned long long state_done(unsigned long a0)
{
 return 2;
}


// Function: state_error at 0x402594
unsigned long long state_error(unsigned int a0)
{
 if (a0)
 return 3;
 return 0;
}


// Function: fsm_func_table at 0x4025bc
extern char __stack_chk_guard;
extern unsigned long long g_414078;
extern unsigned long long g_414088;

long long fsm_func_table(unsigned int a0, unsigned int a1)
{
 unsigned int v6; // w0
 char *v0; // [bp-0x50]
 char v1; // [bp-0x38]
 int v2; // [bp-0x28]
 int v3; // [bp-0x18]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 *((unsigned long long *)&v3) = g_414088;
 *((unsigned long long *)&v2) = g_414078;
 if (a1 < 0 || a1 > 3)
 v6 = 3;
 else
 v6 = ((unsigned long long (*)(unsigned int))*((long long *)((char *)&v2 + 8 * a1)))(a0);
 if (v4 == *((long long *)&__stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: computed_goto at 0x402660
extern char __stack_chk_guard;
extern unsigned long long g_414098;
extern unsigned long long g_4140a8;

unsigned long long computed_goto(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x50]
 unsigned long long v1; // [bp-0x38]
 int v2; // [bp-0x28]
 int v3; // [bp-0x18]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v1 = a0;
 v4 = *((long long *)&__stack_chk_guard);
 *((unsigned long long *)&v3) = g_4140a8;
 *((unsigned long long *)&v2) = g_414098;
 if (a1 >= 0 && a1 <= 3)
 goto *((long long *)((char *)&v2 + 8 * a1));
 if (v4 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 __stack_chk_fail(); /* do not return */
}


// Function: obfuscated_cf at 0x402720
unsigned int obfuscated_cf(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 if (!((char)arm64g_calculate_condition(161, (unsigned long long)a0 * (unsigned long long)a0 & 4294967295, 1, 0)))
 v0 = ((v0 * 2 | v0 >> 31) & 4294967294) + 1;
 v0 = (v0 * 2 | v0 >> 31) & 4294967294;
 return v0;
}


// Function: opaque_predicate at 0x402768
unsigned int opaque_predicate(unsigned int a0)
{
 unsigned int result; // [bp-0x4]

 result = 0;
 if (result)
 return ((a0 * 2 | a0 >> 31) & 4294967294) + a0;
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: overlapped_code at 0x4027a4
int overlapped_code(unsigned int a0)
{
 if (!((char)a0 & 1))
 return ((a0 * 2 | a0 >> 31) & 1) + a0 >> 31 & 0x80000000 | __ROL__(((a0 * 2 | a0 >> 31) & 1) + a0, 31) & 2147483647;
 return ((a0 * 2 | a0 >> 31) & 4294967294) + a0 + 1;
}


// Function: test_control_flow_l3 at 0x4027ec
extern char __stack_chk_guard;
extern char g_402f18;

unsigned long long test_control_flow_l3()
{
 char *v0; // [bp-0x30]
 unsigned int result; // [bp-0x18]
 unsigned int flag1; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 puts(&g_402f18);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
 printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(5) & 4294967295);
 printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(4294967291) & 4294967295);
 printf("CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5) & 4294967295);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5) & 4294967295);
 printf("CF-L3-05 (state_machine): %d\n", state_machine(1, 0) & 4294967295);
 printf("CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1) & 4294967295);
 result = 0;
 flag1 = 1;
 v3 = 2;
 v4 = 3;
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto((unsigned long long)&result, 2) & 4294967295);
 printf("CF-L3-08 (obfuscated_cf): %d\n", obfuscated_cf(5) & 4294967295);
 printf("CF-L3-09 (opaque_predicate): %d\n", opaque_predicate(5) & 4294967295);
 printf("CF-L3-10 (overlapped_code): %d\n", overlapped_code(5) & 4294967295);
 if (v5 == *((long long *)&__stack_chk_guard))
 return 0;
 __stack_chk_fail(); /* do not return */
}


// Function: main at 0x402994
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


