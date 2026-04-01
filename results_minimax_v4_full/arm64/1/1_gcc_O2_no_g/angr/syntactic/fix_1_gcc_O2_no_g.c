// Angr Decompilation of 1_gcc_O2_no_g
// Platform: AARCH64


/* CRT stub function _init removed by preprocessor */


#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

// Forward declarations for helper functions
void __stack_chk_fail(void);
int arm64g_calculate_condition(unsigned long long, unsigned long long, unsigned long long, unsigned long long);

// Forward declarations for test functions
unsigned long long test_control_flow_l1(void);
unsigned long long test_control_flow_l2(void);
unsigned long long test_control_flow_l3(void);

// Forward declaration for _start
void _start(void);

// Additional forward declarations for CRT stub functions and other called functions
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
long long frame_dummy(void);
unsigned long long recursion_factorial(unsigned int);
unsigned int double_value(unsigned int);
unsigned int triple_value(unsigned int);
int op_add(unsigned int, unsigned int);
int op_sub(unsigned int, unsigned int);
int op_mul(unsigned int, unsigned int);
unsigned int op_div(unsigned long, unsigned int);
unsigned int op_and(unsigned int, unsigned int);
unsigned int op_or(unsigned int, unsigned int);
int op_xor(unsigned int, unsigned int);
int op_shl(unsigned int, char);
int op_shr(unsigned int, char);
unsigned long long state_idle(unsigned int);
unsigned long long state_processing(unsigned long long);
unsigned long long state_done(void);
unsigned long long state_error(unsigned int);
unsigned int op_mod(unsigned int, unsigned int);
int sequential_ops(unsigned int, unsigned int, unsigned int);
long long single_if(unsigned int);
unsigned long long if_else(unsigned int);
unsigned long long nested_if_2(unsigned int, unsigned int);
unsigned long long nested_if_deep(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
unsigned long long if_elseif_chain(unsigned int);
unsigned long long if_elseif_long(unsigned int);
unsigned long long switch_small(unsigned int);
unsigned long long switch_large(unsigned int);
unsigned long long switch_default(unsigned int);
unsigned long long switch_fallthrough(unsigned long);
unsigned long long loop_for_fixed(unsigned int);
unsigned long long loop_while(unsigned int);
unsigned long long loop_dowhile(unsigned int);
unsigned long long loop_nested(unsigned int, unsigned int);
unsigned long long loop_break(unsigned int);
unsigned long long loop_continue(unsigned int);
long long goto_forward(unsigned int);
unsigned long long goto_backward(unsigned int);
long long ternary_op(unsigned int, unsigned int);
unsigned long long loop_multi_exit(unsigned int);
unsigned int infinite_loop(unsigned int *);
unsigned long long multi_return(unsigned long);
long long conditional_return(unsigned long);
unsigned int duffs_device(unsigned long long *, unsigned long long *, unsigned int);
unsigned int loop_complex_cond(unsigned int);
unsigned int loop_modify_var(unsigned int);
unsigned int loop_external_state(unsigned int *);
long long tail_recursion(unsigned int, unsigned int);
unsigned long long indirect_recursion_a(unsigned long long, unsigned int);
int call_func_ptr(unsigned long, unsigned long);
unsigned long long call_func_ptr_array(unsigned int, unsigned long);
unsigned int call_virtual_func(unsigned long, unsigned int);
unsigned long long process_with_callback(unsigned int *, unsigned int, unsigned long long (*)(unsigned int));
unsigned long long non_local_jump(unsigned int);
unsigned long long cpp_exception(unsigned long);
unsigned long long large_jump_table(unsigned int, unsigned long, unsigned long);
int conditional_func_ptr(unsigned int, unsigned int);
unsigned long long state_machine(unsigned long long, unsigned long);
unsigned long long fsm_func_table(unsigned long, unsigned int);
unsigned long long computed_goto(unsigned long, unsigned int);
unsigned int obfuscated_cf(unsigned int);
unsigned int opaque_predicate(unsigned int);
unsigned int overlapped_code(unsigned long);

// Helper macro for rotate left
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))


// Function: __dollar_x at 0x400940
long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return v0;
}


// Function: sub_400954 at 0x400954
long long sub_400954()
{
 unsigned long long v0; // x0

 v0 = state_processing(0);
 return state_processing(0);
}


// Function: main at 0x400a00
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


// Function: sub_400a20 at 0x400a20
void sub_400a20(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400a70 at 0x400a70
void sub_400a70()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400a88 at 0x400a88
void sub_400a88()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_400afc at 0x400afc
void sub_400afc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400b48 at 0x400b48
long long sub_400b48()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_400b54 at 0x400b54
void sub_400b54(unsigned long a0)
{
 recursion_factorial((unsigned int)a0);
 return;
}


// Function: recursion_factorial at 0x400b60
unsigned long long recursion_factorial(unsigned int a0)
{
 unsigned int result; // w1
 unsigned long long v1; // x0

 result = a0;
 v1 = 1;
 if (result > 1)
 {
 do
 {
 v1 *= result;
 result -= 1;
 } while (result != 1);
 }
 return v1;
}


// Function: sub_400b88 at 0x400b88
void sub_400b88(unsigned long a0)
{
 double_value((unsigned int)a0);
 return;
}


// Function: double_value at 0x400b90
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_400b98 at 0x400b98
void sub_400b98(unsigned long a0)
{
 triple_value((unsigned int)a0);
 return;
}


// Function: triple_value at 0x400ba0
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_400ba8 at 0x400ba8
void sub_400ba8(unsigned long a0, unsigned long a1)
{
 op_add((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_add at 0x400bb0
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_400bb8 at 0x400bb8
void sub_400bb8(unsigned long a0, unsigned long a1)
{
 op_sub((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_sub at 0x400bc0
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: sub_400bc8 at 0x400bc8
void sub_400bc8(unsigned long a0, unsigned long a1)
{
 op_mul((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_mul at 0x400bd0
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: sub_400bd8 at 0x400bd8
void sub_400bd8(unsigned long a0, unsigned long a1)
{
 op_div(a0, (unsigned int)a1);
 return;
}


// Function: op_div at 0x400be0
unsigned int op_div(unsigned long a0, unsigned int a1)
{
 if (a1)
 a1 = (a0 & 4294967295) / a1;
 return a1;
}


// Function: op_mod at 0x400bf4
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // w0

 v0 = a1;
 if (a1)
 v0 = a0 - v0 * a0 / a1;
 return v0;
}


// Function: sub_400c0c at 0x400c0c
void sub_400c0c(unsigned long a0, unsigned long a1)
{
 op_and((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_and at 0x400c10
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: sub_400c18 at 0x400c18
void sub_400c18(unsigned long a0, unsigned long a1)
{
 op_or((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_or at 0x400c20
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: sub_400c28 at 0x400c28
void sub_400c28(unsigned long a0, unsigned long a1)
{
 op_xor((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_xor at 0x400c30
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: sub_400c38 at 0x400c38
void sub_400c38(unsigned long a0, unsigned long a1)
{
 op_shl((unsigned int)a0, (char)a1);
 return;
}


// Function: op_shl at 0x400c40
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: sub_400c48 at 0x400c48
void sub_400c48(unsigned long a0, unsigned long a1)
{
 op_shr((unsigned int)a0, (char)a1);
 return;
}


// Function: op_shr at 0x400c50
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: sub_400c58 at 0x400c58
void sub_400c58(unsigned long a0)
{
 state_idle((unsigned int)a0);
 return;
}


// Function: state_idle at 0x400c60
unsigned long long state_idle(unsigned int a0)
{
 if (a0 == 1)
 return 1;
 return 0;
}


// Function: sub_400c6c at 0x400c6c
long long sub_400c6c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = state_processing(a0);
 return state_processing(a0);
}


// Function: state_processing at 0x400c70
unsigned long long state_processing(unsigned long long a0)
{
 if ((unsigned int)a0 == 2)
 {
 return a0;
 }
 else if ((unsigned int)a0 == 99)
 {
 return 3;
 }
 else
 {
 return 1;
 }
}


// Function: sub_400c88 at 0x400c88
void sub_400c88()
{
 state_done();
 return;
}


// Function: state_done at 0x400c90
unsigned long long state_done()
{
 return 2;
}


// Function: sub_400c98 at 0x400c98
void sub_400c98(unsigned long a0)
{
 state_error((unsigned int)a0);
 return;
}


// Function: state_error at 0x400ca0
unsigned long long state_error(unsigned int a0)
{
 if (a0)
 return 3;
 return a0;
}


// Function: sequential_ops at 0x400cb0
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (((a0 + a1) * 2 | a0 + a1 >> 31) & 4294967294) - a2;
}


// Function: single_if at 0x400cc0
long long single_if(unsigned int a0)
{
 if (0 >= a0)
 return a0;
 return __ROL__(a0, 1) & 4294967294;
}


// Function: if_else at 0x400cd0
unsigned long long if_else(unsigned int a0)
{
 if (a0 > 0)
 return 1;
 return 0;
}


// Function: sub_400cdc at 0x400cdc
long long sub_400cdc(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = nested_if_2(0, 0);
 return nested_if_2(0, 0);
}


// Function: nested_if_2 at 0x400ce0
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
{
 if (a0 <= 0)
 {
 return 0;
 }
 else if (0 < a1)
 {
 return a0 + a1 & 4294967295;
 }
 else
 {
 return a0;
 }
}


// Function: nested_if_deep at 0x400d00
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // w0

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
 if (a4 <= 0)
 v0 = 0;
 else
 v0 = 1;
 return v0 + 4;
 }
 else
 {
 return 3;
 }
}


// Function: sub_400d4c at 0x400d4c
long long sub_400d4c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = if_elseif_chain((unsigned int)a0);
 return if_elseif_chain((unsigned int)a0);
}


// Function: if_elseif_chain at 0x400d50
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


// Function: sub_400d7c at 0x400d7c
long long sub_400d7c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = if_elseif_long((unsigned int)a0);
 return if_elseif_long((unsigned int)a0);
}


// Function: if_elseif_long at 0x400d80
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


// Function: sub_400dcc at 0x400dcc
long long sub_400dcc(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = switch_small((unsigned int)a0);
 return switch_small((unsigned int)a0);
}


// Function: switch_small at 0x400dd0
extern unsigned int CSWTCH_55[4];

unsigned long long switch_small(unsigned int a0)
{
 if (3 < a0)
 return 4294967295;
 return CSWTCH_55[a0];
}


// Function: switch_large at 0x400df0
unsigned long long switch_large(unsigned int a0)
{
 if (a0 >= 10)
 return 4294967295;
 return __ROL__(a0 * 5, 1) & 4294967294;
}


// Function: switch_default at 0x400e04
unsigned long long switch_default(unsigned int a0)
{
 if (a0 - 1 >= 3)
 return 0;
 return 100 * a0;
}


// Function: sub_400e1c at 0x400e1c
long long sub_400e1c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = switch_fallthrough(a0);
 return switch_fallthrough(a0);
}


// Function: switch_fallthrough at 0x400e20
unsigned long long switch_fallthrough(unsigned long a0)
{
 unsigned int v0; // w1

 if ((unsigned int)a0 != 2)
 {
 if ((unsigned int)a0 != 3)
 {
 if ((unsigned int)a0 != 1)
 return 4294967295;
 return 0;
 }
 v0 = 12;
 }
 else
 {
 v0 = 0;
 }
 return v0 + (unsigned int)a0 * 2 + a0;
}


// Function: sub_400e58 at 0x400e58
long long sub_400e58(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = loop_for_fixed((unsigned int)a0);
 return loop_for_fixed((unsigned int)a0);
}


// Function: loop_for_fixed at 0x400e60
unsigned long long loop_for_fixed(unsigned int i)
{
 unsigned long long v0; // x1
 unsigned long long v1; // x0
 unsigned long long v3; // x1
 unsigned long long v4; // x0

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v3 = v0;
 v4 = v1 + v3;
 v0 = (unsigned int)v3 + 1;
 v1 = v4;
 } while (i != (unsigned int)v0);
 return v1 + v3;
}


// Function: loop_while at 0x400e94
unsigned long long loop_while(unsigned int a0)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int i; // w1
 unsigned int v4; // w2

 if (!a0)
 return 1;
 v0 = 0;
 do
 {
 v2 = v0 + 1;
 v4 = (a0 * 1717986919 >> 63 & 0xc0000000 | (a0 * 1717986919 * 0x40000000 | a0 * 1717986919 >> 34) & 1073741823) - (a0 >> 31);
 a0 = v4;
 v0 = v2;
 } while (i != a0 >> 31);
 return v1 + 1;
}


// Function: sub_400ec8 at 0x400ec8
void sub_400ec8(unsigned long a0)
{
 loop_dowhile((unsigned int)a0);
 return;
}


// Function: loop_dowhile at 0x400ed0
unsigned long long loop_dowhile(unsigned int a0)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int i; // w1
 unsigned int v4; // w2

 v0 = 0;
 do
 {
 v2 = v0 + 1;
 v4 = (a0 * 1717986919 >> 63 & 0xc0000000 | (a0 * 1717986919 * 0x40000000 | a0 * 1717986919 >> 34) & 1073741823) - (a0 >> 31);
 a0 = v4;
 v0 = v2;
 } while (i != a0 >> 31);
 return v1 + 1;
}


// Function: sub_400ef8 at 0x400ef8
void sub_400ef8(unsigned long a0)
{
 loop_nested((unsigned int)a0, 2);
 return;
}


// Function: loop_nested at 0x400f00
unsigned long long loop_nested(unsigned int i, unsigned int a1)
{
 unsigned int v0; // w2
 unsigned long long v1; // x0

 v0 = 0;
 v1 = 0;
 if (i <= 0)
 return 0;
 do
 {
 v0 += 1;
 if (0 < a1)
 v1 = a1 + v1 & 4294967295;
 else
 v1 &= 4294967295;
 } while (i != v0);
 return v1;
}


// Function: loop_break at 0x400f34
extern char __stack_chk_guard;

unsigned long long loop_break(unsigned int i)
{
 char *v6; // x1
 unsigned long long v7; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp-0x20], Other Possible Types: unsigned long long
 unsigned long long v2; // [bp-0x18]
 unsigned int v3; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v6 = &v1;
 v4 = *((long long *)&__stack_chk_guard);
 v7 = 0;
 v1 = 85899345930;
 v2 = 171798691870;
 v3 = 50;
 while (*(v6) != i)
 {
 v6 += 1;
 if ((unsigned int)v7 + 1 == 5)
 {
 if (v4 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 __stack_chk_fail(); /* do not return */
 }
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v7;
}


// Function: sub_400fbc at 0x400fbc
long long sub_400fbc(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = loop_continue((unsigned int)a0);
 return loop_continue((unsigned int)a0);
}


// Function: loop_continue at 0x400fc0
unsigned long long loop_continue(unsigned int a0)
{
 unsigned long long v0; // x1
 unsigned long long v1; // x0
 unsigned long long v2; // x1
 unsigned long v3; // x1

 if (a0 <= 0)
 return 0;
 v0 = 1;
 v1 = 0;
 do
 {
 v2 = v0;
 v3 = (unsigned int)v2 + 1;
 if ((char)arm64g_calculate_condition(26, v2 & 1, 0, 0))
 v1 = v1 + v2 & 4294967295;
 else
 v1 &= 4294967295;
 } while ((v0 = v3, (unsigned int)v0 != a0 + 1));
 return v1;
}


// Function: sub_400ffc at 0x400ffc
void sub_400ffc(unsigned long a0)
{
 goto_forward((unsigned int)a0);
 return;
}


// Function: goto_forward at 0x401000
long long goto_forward(unsigned int a0)
{
 if (0 < a0)
 a0 *= a0;
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: goto_backward at 0x401014
unsigned long long goto_backward(unsigned int a0)
{
 unsigned long long v0; // x0
 unsigned long long v1; // x1
 unsigned long long v2; // x1
 unsigned long long v3; // x0
 unsigned long long v4; // x0

 if (a0 <= 0)
 return 1;
 v0 = 1;
 v1 = 1;
 do
 {
 v2 = v1;
 v4 = v2 * v0;
 v0 = v4;
 v1 = (unsigned int)v2 + 1;
 } while (a0 + 1 != (unsigned int)v1);
 return v2 * v3;
}


// Function: ternary_op at 0x401044
long long ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 > a1)
 return a0;
 return a1;
}


// Function: test_control_flow_l1 at 0x401050
extern char __dollar_d;
extern char __stack_chk_guard;

unsigned long long test_control_flow_l1(void)
{
 unsigned int *v7; // x0
 unsigned long long v8; // x2
 unsigned int *v9; // x0
 unsigned long long v10; // x2
 unsigned long long v11; // x0
 char *v0; // [bp-0x50]
 unsigned long long v1; // [bp-0x20]
 unsigned int v2; // [bp-0x20]
 unsigned long long v3; // [bp-0x18]
 unsigned int v4; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 puts(&__dollar_d);
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
 v7 = &v2;
 v8 = 0;
 v2 = 85899345930;
 v3 = 171798691870;
 v4 = 50;
 do
 {
 if (*(v7) == 30)
 goto LABEL_40123c;
 } while ((v8 = (unsigned long long)((unsigned int)v8 + 1), v7 += 4, (unsigned int)v8 != 5));
 v8 = 4294967295;
LABEL_40123c:
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v8);
 v9 = &v2;
 v10 = 0;
 v1 = 85899345930;
 v3 = 171798691870;
 v4 = 50;
 do
 {
 if (*(v9) == 99)
 goto LABEL_401288;
 } while ((v10 = (unsigned long long)((unsigned int)v10 + 1), v9 += 4, (unsigned int)v10 != 5));
 v10 = 4294967295;
LABEL_401288:
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v10);
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", 25);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 if (v5 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v11 = __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
 return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: sub_401338 at 0x401338
long long sub_401338()
{
 unsigned long long v0; // x0

 v0 = loop_multi_exit(0);
 return loop_multi_exit(0);
}


// Function: loop_multi_exit at 0x401340
extern char __stack_chk_guard;

unsigned long long loop_multi_exit(unsigned int a0)
{
 unsigned int v6; // w4
 unsigned int *v7; // x3
 unsigned long long v8; // x1
 char *v0; // [bp-0x50]
 unsigned int v1[4]; // [bp-0x38]
 unsigned long long v2; // [bp-0x28]
 unsigned long long v3; // [bp-0x18]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v6 = 0;
 v7 = v1;
 v1[0] = 316912650112397582603894390785;
 v2 = 633825300243241909290088267781;
 v3 = 950737950374086235976282144777;
 while (true)
 {
 v8 = 0;
 do
 {
 if (*((int *)&v7[4 * v8]) == a0)
 {
 if (v4 == *((long long *)&__stack_chk_guard))
 return (unsigned int)v8 + v6 * 10;
 __stack_chk_fail(); /* do not return */
 }
 } while ((v8 += 1, v8 != 4));
 v6 += 1;
 v7 += 16;
 if (v6 == 3)
 {
 if (v4 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 __stack_chk_fail(); /* do not return */
 }
 }
}


// Function: infinite_loop at 0x4013e4
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // w1

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


// Function: sub_40141c at 0x40141c
long long sub_40141c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = multi_return(a0);
 return multi_return(a0);
}


// Function: multi_return at 0x401420
unsigned long long multi_return(unsigned long a0)
{
 if (((char)(a0 >> 31) & 1))
 {
 return 4294967295;
 }
 else if (100 < (__ROL__((unsigned int)a0, 1) & 4294967294))
 {
 return 4294967294;
 }
 else if ((char)arm64g_calculate_condition(10, a0 & 4294967295 & 1, 0, 0))
 {
 return __ROL__((unsigned int)a0, 1) & 4294967294;
 }
 else
 {
 return (unsigned int)a0 + 1;
 }
}


// Function: conditional_return at 0x401450
long long conditional_return(unsigned long a0)
{
 unsigned int v0; // w1

 if (!(unsigned int)a0)
 v0 = 0;
 else
 v0 = -((unsigned int)a0);
 if (!((char)arm64g_calculate_condition(211, a0 & 4294967295, 0, 0)))
 return ((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294;
 return v0;
}


// Function: duffs_device at 0x401464
unsigned int duffs_device(unsigned long long *a0, unsigned long long *iter, unsigned int a2)
{
 unsigned long long *cur; // x3
 unsigned long long v1; // x4
 unsigned long long *p; // x3
 unsigned int node; // w5
 unsigned long long *v3; // x1
 unsigned long long *v4; // x1
 unsigned long long *v5; // x1
 unsigned long long *ptr; // x3
 unsigned long long *v7; // x1
 unsigned long long *addr; // x3
 unsigned long long *v9; // x1

 cur = a0;
 if (a2 <= 0)
 return 4294967295;
 v1 = a2 & 7;
 node = a2 + 7 >> 31 & 0xe0000000 | ((a2 + 7) * 0x20000000 | a2 + 7 >> 3) & 536870911;
 if ((unsigned int)v1 != 4)
 {
 if ((char)arm64g_calculate_condition(195, v1 & 4294967295, 4, 0))
 {
 v3 = iter;
 if ((unsigned int)v1 != 6)
 {
 if ((unsigned int)v1 == 7)
 {
 v4 = iter + 1;
 cur[0] = *(iter);
 cur = &cur[1];
 v3 = v4;
 goto LABEL_4014d0;
 }
 else
 {
 if ((unsigned int)v1 == 5)
 {
 v5 = iter + 1;
 cur[0] = *(iter);
 ptr = &cur[1];
 iter = &v5[1];
 ptr[0] = v5[0];
 cur = &ptr[1];
 }
 }
 }
 }
 else if ((unsigned int)v1 == 1)
 {
 node -= 1;
 cur[0] = *(iter);
 if (node == 1)
 return a2;
 }
 }
 while (true)
 {
 iter += 1;
 cur[0] = *(iter);
 cur = &cur[1];
 iter += 1;
 node -= 1;
 cur[0] = *(iter);
 cur = &cur[1];
 cur[0] = *(iter);
 if (node == 1)
 break;
 iter += 1;
 cur = &cur[1];
 v7 = iter + 1;
 cur[0] = *(iter);
 addr = &cur[1];
 v3 = &v7[1];
 addr[0] = v7[0];
 cur = &addr[1];
LABEL_4014d0:
 v9 = &v3[1];
 cur[0] = v3[0];
 p = &cur[1];
 iter = &v9[1];
 p[0] = v9[0];
 cur = &p[1];
 iter += 1;
 cur[0] = *(iter);
 cur = &cur[1];
 }
 return a2;
}


// Function: sub_40154c at 0x40154c
long long sub_40154c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = loop_complex_cond((unsigned int)a0);
 return loop_complex_cond((unsigned int)a0);
}


// Function: loop_complex_cond at 0x401550
unsigned int loop_complex_cond(unsigned int a0)
{
 unsigned long long v0; // cc_op
 unsigned long long v1; // cc_dep1
 unsigned long long v2; // cc_dep2
 unsigned long long v3; // x2
 unsigned int v4; // w1
 unsigned long long v5; // cc_dep1
 unsigned long long v6; // cc_op

 v0 = 3;
 v1 = a0;
 v2 = 0;
 if (a0 <= 0)
 return a0;
 v3 = 0;
 v4 = 0;
 while (true)
 {
 v5 = v1;
 v6 = v0;
 v4 += 2;
 a0 -= 1;
 v3 = (unsigned int)v3 + 1;
 if (v4 < a0)
 {
 v2 = ((char)arm64g_calculate_condition(v6 | 176, v5, v2, 0) ? 9 : 0);
 v0 = 3;
 v1 = ((char)arm64g_calculate_condition(v6 | 176, v5, v2, 0) ? v3 & 4294967295 : 0);
 if (!((char)arm64g_calculate_condition(211, v1, v2, 0)))
 break;
 }
 else
 {
 v2 = ((char)arm64g_calculate_condition(v6 | 176, v5, v2, 0) ? 9 : 0);
 v0 = 0;
 v1 = ((char)arm64g_calculate_condition(v6 | 176, v5, v2, 0) ? v3 & 4294967295 : 0);
 if (!((char)arm64g_calculate_condition(208, v1, v2, 0)))
 break;
 }
 }
 return v4 + a0 + (unsigned int)v3;
}


// Function: loop_modify_var at 0x401584
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned long long v0; // x2
 unsigned int v1; // w1
 unsigned long v2; // x1

 v0 = 0;
 v1 = 0;
 if (0 >= a0)
 return 0;
 while (true)
 {
 v2 = v1 + 1;
 if ((unsigned int)v2 >= a0)
 break;
 v0 += v2;
 if (5 < (unsigned int)v2)
 v1 += 3;
 else
 v1 = v2;
 }
 return v0;
}


// Function: sub_4015bc at 0x4015bc
long long sub_4015bc()
{
 unsigned long long v0; // x0

 v0 = loop_external_state((unsigned int *)0);
 return loop_external_state((unsigned int *)0);
}


// Function: loop_external_state at 0x4015c0
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // w1

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 += 1, v0 != 101));
 return v0;
}


// Function: tail_recursion at 0x4015e4
long long tail_recursion(unsigned int a0, unsigned int a1)
{
 unsigned int result; // w2
 unsigned long v1; // x0

 result = a0;
 v1 = a1;
 if (result > 1)
 {
 do
 {
 v1 *= result;
 result -= 1;
 } while (result != 1);
 }
 return v1;
}


// Function: indirect_recursion_a at 0x401610
unsigned long long indirect_recursion_a(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // w2
 unsigned int ptr; // w3

 v0 = a1 - 2;
 if (a1 <= 0)
 return a0;
 while (true)
 {
 if (!((char)a0 & 1))
 {
 if (a1 == 1)
 return (unsigned int)a0 + ((unsigned int)a0 >> 31) >> 31 & 0x80000000 | (((unsigned int)a0 + ((unsigned int)a0 >> 31)) * 0x80000000 | (unsigned int)a0 + ((unsigned int)a0 >> 31) >> 1) & 2147483647;
 a0 = ((unsigned int)a0 + ((unsigned int)a0 >> 31) >> 31 & 0x80000000 | (((unsigned int)a0 + ((unsigned int)a0 >> 31)) * 0x80000000 | (unsigned int)a0 + ((unsigned int)a0 >> 31) >> 1) & 2147483647) + 1;
 ptr = v0;
 }
 else if (a1 != 1)
 {
 a0 = (unsigned int)a0 * 3 + 2;
 ptr = v0;
 }
 else
 {
 return (unsigned int)a0 * 3 + 1;
 }
 v0 -= 2;
 a1 -= 2;
 if (!ptr)
 return a0;
 }
}


// Function: sub_40166c at 0x40166c
void sub_40166c(unsigned long a0, unsigned long a1)
{
 call_func_ptr(a0, a1);
 return;
}


// Function: call_func_ptr at 0x401670
int call_func_ptr(unsigned long a0, unsigned long a1)
{
 typedef int (*func_t)(unsigned long, unsigned long);
 return ((func_t)a0)(a0, a1);
}


// Function: sub_40167c at 0x40167c
void sub_40167c(unsigned long a0)
{
 call_func_ptr_array(0, a0);
 return;
}


// Function: call_func_ptr_array at 0x401680
extern char __dollar_d;
extern char __stack_chk_guard;
extern unsigned long long g_414018;
extern unsigned long long g_414020;

unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1)
{
 char *v0; // [bp-0x30]
 unsigned long v1; // [bp-0x20]
 unsigned long v2; // [bp-0x18]
 unsigned long v3; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v1 = __dollar_d;
 v2 = g_414018;
 v3 = g_414020;
 if (2 >= a0)
 {
 if (v4 == *((long long *)&__stack_chk_guard))
 goto (&v1)[a0];
 }
 else
 {
 if (v4 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 }
 __stack_chk_fail(); /* do not return */
}


// Function: call_virtual_func at 0x401720
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return (a1 * 2 | a1 >> 31) & 4294967294;
}


// Function: sub_401728 at 0x401728
long long sub_401728(unsigned long a0, unsigned long a1)
{
 unsigned long long v0; // x0

 v0 = process_with_callback((unsigned int *)a0, (unsigned int)a1, (unsigned long long (*)(unsigned int))a0);
 return process_with_callback((unsigned int *)a0, (unsigned int)a1, (unsigned long long (*)(unsigned int))a0);
}


// Function: process_with_callback at 0x401730
unsigned long long process_with_callback(unsigned int *a0, unsigned int a1, unsigned long long (*a2)(unsigned int))
{
 unsigned long long v4; // x21
 unsigned long long v5; // x22
 unsigned long long v6; // x20
 unsigned int *i; // x19
 unsigned long long v8; // x20
 unsigned int *v9; // x19
 unsigned long long v10; // x0
 unsigned long long v11; // x20
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 if (a1 <= 0)
 return 0;
 v1 = v4;
 v2 = v5;
 v6 = 0;
 i = a0;
 do
 {
 v8 = v6;
 v9 = i + 1;
 v11 = v8 + a2(*(i));
 i = v9;
 v6 = v11;
 } while (i != (char *)&a0[a1] + 3);
 return v8 + v10 & 4294967295;
}


// Function: sub_40179c at 0x40179c
void sub_40179c()
{
 test_control_flow_l2();
 return;
}


// Function: test_control_flow_l2 at 0x4017a0
extern char __stack_chk_guard;
extern char g_4021c8;

unsigned long long test_control_flow_l2(void)
{
 unsigned long long v15; // x2
 unsigned int v22; // w2
 unsigned long long v23; // x0
 unsigned long long v17; // x2
 unsigned int v18; // w0
 unsigned long v19; // x1
 unsigned long long v20; // x2
 unsigned long long idx; // x0
 char *v0; // [bp-0x90]
 unsigned int v1; // [bp-0x68]
 unsigned int result; // [bp-0x64]
 unsigned long long v3; // [bp-0x60]
 unsigned long long v4; // [bp-0x58]
 unsigned int v5; // [bp-0x50]
 unsigned long long v6; // [bp-0x48]
 unsigned long long v7; // [bp-0x38]
 unsigned long long flag1; // [bp-0x28]
 unsigned long long flag2; // [bp-0x20]
 unsigned long long flag3; // [bp-0x18]
 unsigned long long flag4; // [bp-0x10]
 unsigned long v12; // [bp-0x8]
 char v13; // [bp+0x0]

 v0 = &v13;
 v12 = *((long long *)&__stack_chk_guard);
 puts(&g_4021c8);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7) & 4294967295);
 v1 = 0;
 v15 = 0;
 do
 {
 if (v1 == 1)
 goto LABEL_40180c;
 } while ((v15 = (unsigned long long)((unsigned int)v15 + 1), (unsigned int)v15 != 1001));
 v1 = 1;
LABEL_40180c:
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v15);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 flag1 = 0;
 flag2 = 0;
 flag3 = 0;
 flag4 = 0;
 v6 = 316912650112397582603894390785;
 v7 = 633825300243241909290088267781;
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", duffs_device(&flag1, &v6, 8) & 4294967295);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v17 = 0;
 v18 = 0;
 while (true)
 {
 v19 = v18 + 1;
 if ((unsigned int)v19 > 9)
 break;
 if (5 < (unsigned int)v19)
 v18 += 3;
 else
 v18 = v19;
 v17 += v19;
 }
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v17);
 v20 = 0;
 result = 0;
 do
 {
 } while (!result && (v20 = (unsigned long long)((unsigned int)v20 + 1), (unsigned int)v20 != 101));
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v20);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 120);
 idx = 1;
 v22 = 0;
 v5 = 5;
 v3 = 8589934593;
 v4 = 17179869187;
 do
 {
 v23 = idx + 1;
 v22 += (&result)[idx] * 2;
 idx = v23;
 } while (idx != 6);
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v22);
 if (v12 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return (unsigned long long)(unsigned long)&__stack_chk_guard;
}


// Function: non_local_jump at 0x401a30
extern unsigned long long __data_start;
extern jmp_buf jump_buffer;

unsigned long long non_local_jump(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (_setjmp(jump_buffer))
 {
 return 4294967295;
 }
 else if (((char)(a0 >> 31) & 1))
 {
 _longjmp(jump_buffer, 1); /* do not return */
 }
 else if (100 >= a0)
 {
 return __ROL__(a0, 1) & 4294967294;
 }
 else
 {
 _longjmp(jump_buffer, 2); /* do not return */
 }
}


// Function: cpp_exception at 0x401a94
unsigned long long cpp_exception(unsigned long a0)
{
 if (((char)(a0 >> 31) & 1))
 {
 return 4294967295;
 }
 else if (100 >= (unsigned int)a0)
 {
 return ((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_401ab8 at 0x401ab8
void sub_401ab8(unsigned long a0)
{
 large_jump_table((unsigned int)a0, 0, 0);
 return;
}


// Function: large_jump_table at 0x401ac0
extern char __stack_chk_guard;
extern unsigned long long g_414028;
extern unsigned long long g_414038;
extern unsigned long long g_414048;
extern unsigned long long g_414058;
extern unsigned long long g_414068;

unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2)
{
 char *v0; // [bp-0x70]
 int v1; // [bp-0x58]
 int v2; // [bp-0x48]
 int v3; // [bp-0x38]
 int v4; // [bp-0x28]
 int v5; // [bp-0x18]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 *((unsigned long long *)&v1) = g_414028;
 *((unsigned long long *)&v2) = g_414038;
 *((unsigned long long *)&v3) = g_414048;
 *((unsigned long long *)&v4) = g_414058;
 *((unsigned long long *)&v5) = g_414068;
 if (9 >= a0)
 {
 if (v6 == *((long long *)&__stack_chk_guard))
 goto *((long long *)((char *)&v1 + 8 * a0));
 }
 else
 {
 if (v6 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 }
 __stack_chk_fail(); /* do not return */
}


// Function: conditional_func_ptr at 0x401b70
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
 unsigned int (*v0)(unsigned int); // x1
 unsigned int (*v1)(unsigned int); // x2
 unsigned int (*v2)(unsigned int); // x2

 if (!a0)
 return double_value(a1);
 v0 = double_value;
 v1 = triple_value;
 if (a0 == 1)
 v2 = v1;
 else
 v2 = v0;
 return v2(a1);
}


// Function: sub_401bac at 0x401bac
long long sub_401bac(unsigned long a0, unsigned long a1)
{
 unsigned long long v0; // x0

 v0 = state_machine(a0, a1);
 return state_machine(a0, a1);
}


// Function: state_machine at 0x401bb0
unsigned long long state_machine(unsigned long long a0, unsigned long a1)
{
 unsigned int v0; // w0

 if ((unsigned int)a1 == 2)
 {
 return a1 & 4294967295;
 }
 else if ((char)arm64g_calculate_condition(195, a1 & 4294967295, 2, 0))
 {
 if ((unsigned int)a0)
 v0 = a1;
 else
 v0 = 0;
 if ((unsigned int)a1 != 3)
 return 3;
 return v0;
 }
 else if ((unsigned int)a1)
 {
 if ((unsigned int)a1 != 1)
 {
 return 3;
 }
 else if ((unsigned int)a0 == 2)
 {
 return a0;
 }
 else if ((unsigned int)a0 == 99)
 {
 return 3;
 }
 else
 {
 return a1 & 4294967295;
 }
 }
 else
 {
 if ((unsigned int)a0 != 1)
 return 0;
 return 1;
 }
}


// Function: fsm_func_table at 0x401c14
extern char __stack_chk_guard;
extern unsigned long long g_414078;
extern unsigned long long g_414088;

unsigned long long fsm_func_table(unsigned long a0, unsigned int a1)
{
 char *v0; // [bp-0x40]
 int v1; // [bp-0x28]
 int v2; // [bp-0x18]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 *((unsigned long long *)&v2) = g_414088;
 *((unsigned long long *)&v1) = g_414078;
 if (3 >= a1)
 {
 if (v3 == *((long long *)&__stack_chk_guard))
 goto *((long long *)((char *)&v1 + 8 * a1));
 }
 else
 {
 if (v3 == *((long long *)&__stack_chk_guard))
 return 3;
 }
 __stack_chk_fail(); /* do not return */
}


// Function: sub_401ca8 at 0x401ca8
void sub_401ca8(unsigned long a0, unsigned long a1)
{
 computed_goto(a0, (unsigned int)a1);
 return;
}


// Function: computed_goto at 0x401cb0
extern char __stack_chk_guard;
extern unsigned long long g_414098;
extern unsigned long long g_4140a8;

unsigned long long computed_goto(unsigned long a0, unsigned int a1)
{
 char *v0; // [bp-0x40]
 int v1; // [bp-0x28]
 int v2; // [bp-0x18]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 *((unsigned long long *)&v2) = g_4140a8;
 *((unsigned long long *)&v1) = g_414098;
 if (3 >= a1)
 {
 goto *((long long *)((char *)&v1 + 8 * a1));
 }
 else if (v3 == *((long long *)&__stack_chk_guard))
 {
 return 4294967295;
 }
 else
 {
 __stack_chk_fail(); /* do not return */
 }
}


// Function: obfuscated_cf at 0x401d40
unsigned int obfuscated_cf(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_401d48 at 0x401d48
void sub_401d48(unsigned long a0)
{
 opaque_predicate((unsigned int)a0);
 return;
}


// Function: opaque_predicate at 0x401d50
unsigned int opaque_predicate(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_401d58 at 0x401d58
void sub_401d58(unsigned long a0)
{
 overlapped_code(a0);
 return;
}


// Function: overlapped_code at 0x401d60
unsigned int overlapped_code(unsigned long a0)
{
 if (!((char)arm64g_calculate_condition(10, a0 & 1, 0, 0)))
 return (unsigned int)a0 * 3 + 1;
 return (unsigned int)a0 + ((unsigned int)a0 >> 31) >> 31 & 0x80000000 | __ROL__((unsigned int)a0 + ((unsigned int)a0 >> 31), 31) & 2147483647;
}


// Function: sub_401d78 at 0x401d78
void sub_401d78()
{
 test_control_flow_l3();
 return;
}


// Function: test_control_flow_l3 at 0x401d80
extern char __stack_chk_guard;
extern char g_4023e8;

unsigned long long test_control_flow_l3()
{
 char *v0; // [bp-0x40]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 puts(&g_4023e8);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", op_add(10, 5) & 4294967295);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
 v1 = 0x100000000;
 v2 = 12884901890;
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", computed_goto((unsigned long)&v1, 2) & 4294967295);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return &__stack_chk_guard;
}



/* CRT stub function _fini removed by preprocessor */


