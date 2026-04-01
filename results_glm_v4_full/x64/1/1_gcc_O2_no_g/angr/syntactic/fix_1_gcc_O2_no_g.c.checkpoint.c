// Angr Decompilation of 1_gcc_O2_no_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
#include <stdbool.h>

struct struct_0;

extern struct struct_0 *g_405fe8;
struct struct_0 *g_405fe8;

/* Global data definitions */
extern unsigned int CSWTCH_55[4];
unsigned int CSWTCH_55[4] = {10, 20, 30, 40};

char g_403008[] = "Control Flow Tests - Level 1";
char g_4032b8[] = "Control Flow Tests - Level 3";

/* Forward declarations for functions used in function pointers */
unsigned int double_value(unsigned int a0);
unsigned int triple_value(unsigned int a0);
unsigned long long recursion_factorial(unsigned int i);
unsigned int op_and(unsigned int a0, unsigned int a1);
unsigned int op_or(unsigned int a0, unsigned int a1);
int op_add(unsigned int a0, unsigned int a1);
int op_sub(unsigned long a0, unsigned int a1);
int op_mul(unsigned int a0, unsigned int a1);
int op_div(unsigned int a0, unsigned long a1);
int op_mod(unsigned int a0, unsigned long a1);
int op_shl(unsigned long a0, char a1);
int op_shr(unsigned long a0, char a1);
int op_xor(unsigned int a0, unsigned int a1);
long long state_idle(unsigned int a0);
unsigned long long state_processing(unsigned int a0);
unsigned long long state_done();
unsigned long long state_error(unsigned int a0);
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2);
long long single_if(unsigned int a0);
long long if_else(unsigned int a0);
unsigned long long nested_if_2(unsigned int a0, unsigned int a1);
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned long long if_elseif_chain(unsigned int a0);
unsigned long long if_elseif_long(unsigned int a0);
unsigned long long switch_small(unsigned int a0);
unsigned long long switch_large(unsigned int a0);
unsigned long long switch_default(unsigned int a0);
unsigned long long switch_fallthrough(unsigned int a0);
unsigned long long loop_for_fixed(unsigned int i);
unsigned long long loop_while(unsigned int a0);
unsigned int loop_dowhile(unsigned int a0);
unsigned long long loop_nested(unsigned int a0, unsigned int a1);
unsigned long long loop_break(unsigned int a0);
unsigned long long loop_continue(unsigned int a0);
unsigned int goto_forward(unsigned long long a0);
unsigned int goto_backward(unsigned int a0);
long long ternary_op(unsigned int a0, unsigned int a1);
long long test_control_flow_l1();
long long test_control_flow_l2();
long long test_control_flow_l3();
unsigned long long loop_multi_exit(unsigned int i);
unsigned long long infinite_loop(unsigned int *ptr);
unsigned long long multi_return(unsigned int a0);
unsigned long long conditional_return(unsigned int a0);
unsigned int duffs_device(void* a0, unsigned int *a1, unsigned int a2);
unsigned int loop_complex_cond(unsigned int a0);
unsigned int loop_modify_var(unsigned int a0);
unsigned long long loop_external_state(unsigned int *a0);
long long tail_recursion(unsigned long a0, unsigned int a1);
long long indirect_recursion_a(unsigned int a0, unsigned int a1);
long long call_func_ptr(unsigned long a0, unsigned long a1);
unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1);
unsigned int call_virtual_func(unsigned long a0, unsigned int a1);
unsigned long long process_with_callback(unsigned int *a0, unsigned int a1, unsigned long long (*a2)(unsigned int));
unsigned long long non_local_jump(unsigned int a0);
unsigned long long cpp_exception(unsigned int a0);
unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2);
long long conditional_func_ptr(unsigned int a0, unsigned long a1);
unsigned long long state_machine(unsigned int a0, unsigned int a1);
unsigned long long fsm_func_table(unsigned long a0, unsigned int a1);
unsigned long long computed_goto(unsigned long a0, unsigned int a1);
unsigned int obfuscated_cf(unsigned int a0);
unsigned int opaque_predicate(unsigned int a0);
int overlapped_code(unsigned int a0);










// Function: main at 0x4010e0
unsigned int main()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi
 unsigned long long v3; // rdx
 unsigned long long v4; // rcx
 unsigned long long v5; // r8
 unsigned long long v6; // r9

 test_control_flow_l1();
 test_control_flow_l2(v1, v2, v3, v4, v5, v6);
 test_control_flow_l3(v1, v2, v3, v4, v5, v6);
 return 0;
}


// Function: sub_401104 at 0x401104
void sub_401104(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401135 at 0x401135
void sub_401135()
{
 __builtin_trap();
}






// Function: sub_4011f9 at 0x4011f9
void sub_4011f9(unsigned long a0)
{
 recursion_factorial(a0);
 return;
}


// Function: recursion_factorial at 0x401200
unsigned long long recursion_factorial(unsigned int i)
{
 unsigned long long v1; // rax

 v1 = 1;
 if (i > 1)
 {
 do
 {
 v1 *= i;
 i -= 1;
 } while (i != 1);
 }
 return v1;
}


// Function: sub_40121e at 0x40121e
void sub_40121e(unsigned long a0)
{
 double_value(a0);
 return;
}


// Function: double_value at 0x401220
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401228 at 0x401228
void sub_401228(unsigned long a0)
{
 triple_value(a0);
 return;
}


// Function: triple_value at 0x401230
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_401238 at 0x401238
void sub_401238(unsigned long a0, unsigned long a1)
{
 op_add(a0, a1);
 return;
}


// Function: op_add at 0x401240
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_401248 at 0x401248
void sub_401248(unsigned long a0, unsigned long a1)
{
 op_sub(a0, a1);
 return;
}


// Function: op_sub at 0x401250
int op_sub(unsigned long a0, unsigned int a1)
{
 return (a0 & 4294967295) - a1;
}


// Function: sub_401259 at 0x401259
void sub_401259(unsigned long a0, unsigned long a1)
{
 op_mul(a0, a1);
 return;
}


// Function: op_mul at 0x401260
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: sub_40126a at 0x40126a
void sub_40126a(unsigned long a0, unsigned long a1)
{
 op_div(a0, a1);
 return;
}


// Function: op_div at 0x401270
int op_div(unsigned int a0, unsigned long a1)
{
 unsigned int v1; // r8d
 long long dividend;

 v1 = a1;
 if ((unsigned int)a1) {
 dividend = ((long long)(unsigned int)a0 << 32) | a0;
 v1 = dividend % (a1 & 4294967295);
 }
 return v1;
}


// Function: sub_401287 at 0x401287
void sub_401287(unsigned long a0, unsigned long a1)
{
 op_mod(a0, a1);
 return;
}


// Function: op_mod at 0x401290
int op_mod(unsigned int a0, unsigned long a1)
{
 unsigned int v1; // r8d
 long long dividend;
 long long quotient;

 v1 = a1;
 if ((unsigned int)a1) {
 dividend = ((long long)(unsigned int)a0 << 32) | a0;
 quotient = dividend / (a1 & 4294967295);
 v1 = quotient >> 32;
 }
 return v1;
}


// Function: sub_4012a7 at 0x4012a7
void sub_4012a7(unsigned long a0, unsigned long a1)
{
 op_and(a0, a1);
 return;
}


// Function: op_and at 0x4012b0
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: sub_4012b9 at 0x4012b9
void sub_4012b9(unsigned long a0, unsigned long a1)
{
 op_or(a0, a1);
 return;
}


// Function: op_or at 0x4012c0
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: sub_4012c9 at 0x4012c9
void sub_4012c9(unsigned long a0, unsigned long a1)
{
 op_xor(a0, a1);
 return;
}


// Function: op_xor at 0x4012d0
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: sub_4012d9 at 0x4012d9
void sub_4012d9(unsigned long a0, unsigned long a1)
{
 op_shl(a0, a1);
 return;
}


// Function: op_shl at 0x4012e0
int op_shl(unsigned long a0, char a1)
{
 return (a0 & 4294967295) << (a1 & 31);
}


// Function: sub_4012eb at 0x4012eb
void sub_4012eb(unsigned long a0, unsigned long a1)
{
 op_shr(a0, a1);
 return;
}


// Function: op_shr at 0x4012f0
int op_shr(unsigned long a0, char a1)
{
 return (a0 & 4294967295) >> (a1 & 31);
}


// Function: sub_4012fb at 0x4012fb
void sub_4012fb(unsigned long a0)
{
 state_idle(a0);
 return;
}


// Function: state_idle at 0x401300
long long state_idle(unsigned int a0)
{
 return a0 == 1;
}


// Function: sub_40130d at 0x40130d
void sub_40130d(unsigned long a0)
{
 state_processing(a0);
 return;
}


// Function: state_processing at 0x401310
unsigned long long state_processing(unsigned int a0)
{
 if (a0 == 2)
 return 2;
 return (a0 == 99) * 2 + 1;
}


// Function: sub_401326 at 0x401326
void sub_401326()
{
}


// Function: sub_401336 at 0x401336
void sub_401336()
{
 state_done();
 return;
}


// Function: state_done at 0x401340
unsigned long long state_done()
{
 return 2;
}


// Function: sub_40134a at 0x40134a
void sub_40134a(unsigned long a0)
{
 state_error(a0);
 return;
}


// Function: state_error at 0x401350
unsigned long long state_error(unsigned int a0)
{
 if (!a0)
 return a0;
 return 3;
}


// Function: sub_401361 at 0x401361
void sub_401361(unsigned long a0, unsigned long a1, unsigned long a2)
{
 sequential_ops(a0, a1, a2);
 return;
}


// Function: sequential_ops at 0x401370
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a0 + a1) * 2 - a2;
}


// Function: sub_40137c at 0x40137c
void sub_40137c(unsigned long a0)
{
 single_if(a0);
 return;
}


// Function: single_if at 0x401380
long long single_if(unsigned int a0)
{
 return (a0 <= 0 ? a0 : a0 * 2);
}


// Function: sub_40138d at 0x40138d
void sub_40138d(unsigned long a0)
{
 if_else(a0);
 return;
}


// Function: if_else at 0x401390
long long if_else(unsigned int a0)
{
 return a0 > 0;
}


// Function: sub_40139c at 0x40139c
void sub_40139c(unsigned long a0)
{
 nested_if_2(a0, 0);
 return;
}


// Function: nested_if_2 at 0x4013a0
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
{
 unsigned long long v1; // rax

 v1 = 0;
 if (a0 > 0)
 v1 = (a1 <= 0 ? a0 : a0 + a1 & 4294967295);
 return v1;
}


// Function: sub_4013b3 at 0x4013b3
void sub_4013b3(unsigned long a0)
{
 nested_if_deep(a0, 0, 0, 0, 0);
 return;
}


// Function: nested_if_deep at 0x4013c0
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
 else if (a3 > 0)
 {
 return (unsigned long long)((a4 > 0) + 4);
 }
 else
 {
 return 3;
 }
}


// Function: sub_4013e7 at 0x4013e7
void sub_4013e7()
{
}


// Function: sub_4013f6 at 0x4013f6
void sub_4013f6()
{
}


// Function: sub_401406 at 0x401406
void sub_401406(unsigned long a0)
{
 if_elseif_chain(a0);
 return;
}


// Function: if_elseif_chain at 0x401410
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
 else if (a0 != 2)
 {
 return 4294967295;
 }
 else
 {
 return 30;
 }
}


// Function: sub_401433 at 0x401433
void sub_401433()
{
}


// Function: sub_40143e at 0x40143e
void sub_40143e(unsigned long a0)
{
 if_elseif_long(a0);
 return;
}


// Function: if_elseif_long at 0x401440
unsigned long long if_elseif_long(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a0 <= 4)
 v1 = (a0 + 1) * 100;
 return v1;
}


// Function: sub_401455 at 0x401455
void sub_401455(unsigned long a0)
{
 switch_small(a0);
 return;
}


// Function: switch_small at 0x401460
extern unsigned int CSWTCH_55[4];

unsigned long long switch_small(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a0 <= 3)
 v1 = CSWTCH_55[a0];
 return v1;
}


// Function: sub_40147b at 0x40147b
void sub_40147b(unsigned long a0)
{
 switch_large(a0);
 return;
}


// Function: switch_large at 0x401480
unsigned long long switch_large(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a0 <= 9)
 v1 = a0 * 10;
 return v1;
}


// Function: sub_401494 at 0x401494
void sub_401494(unsigned long a0)
{
 switch_default(a0);
 return;
}


// Function: switch_default at 0x4014a0
unsigned long long switch_default(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 0;
 if (a0 - 1 <= 2)
 v1 = a0 * 100;
 return v1;
}


// Function: sub_4014b2 at 0x4014b2
void sub_4014b2(unsigned long a0)
{
 switch_fallthrough(a0);
 return;
}


// Function: switch_fallthrough at 0x4014c0
unsigned long long switch_fallthrough(unsigned int a0)
{
 if (a0 == 2)
 {
 return 0 + a0 * 2 + a0;
 }
 else if (a0 != 3)
 {
 return (a0 == 1) * 2 - 1 & 4294967295;
 }
 else
 {
 return 12 + a0 * 2 + a0;
 }
}


// Function: sub_4014db at 0x4014db
void sub_4014db()
{
}


// Function: sub_4014eb at 0x4014eb
void sub_4014eb()
{
}


// Function: sub_4014f8 at 0x4014f8
void sub_4014f8(unsigned long a0)
{
 loop_for_fixed(a0);
 return;
}


// Function: loop_for_fixed at 0x401500
unsigned long long loop_for_fixed(unsigned int i)
{
 unsigned long long v1; // rax
 unsigned long long v2; // r8
 unsigned long long v3; // r8
 unsigned long long v4; // rax
 unsigned long long v5; // r8

 if (i <= 0)
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 v4 = v1;
 v5 = v2 + v4;
 v1 = (unsigned int)v4 + 1;
 v2 = v5;
 } while (i != (unsigned int)v1);
 return v3 + v4 & 4294967295;
}


// Function: sub_40151e at 0x40151e
void sub_40151e()
{
}


// Function: sub_401527 at 0x401527
void sub_401527(unsigned long a0)
{
 loop_while(a0);
 return;
}


// Function: loop_while at 0x401530
unsigned long long loop_while(unsigned int a0)
{
 unsigned int v1; // r8d
 unsigned int v2; // r8d
 unsigned int v3; // r8d
 unsigned int v4; // edx
 unsigned int i; // eax

 if (!a0)
 return 1;
 v1 = 0;
 do
 {
 v3 = v1 + 1;
 a0 = (unsigned int)(a0 * 1717986919 >> 34) - (a0 >> 31);
 v1 = v3;
 } while (i != v4);
 return v2 + 1;
}


// Function: sub_401561 at 0x401561
void sub_401561()
{
}


// Function: sub_401572 at 0x401572
void sub_401572(unsigned long a0)
{
 loop_dowhile(a0);
 return;
}


// Function: loop_dowhile at 0x401580
unsigned int loop_dowhile(unsigned int a0)
{
 unsigned int v1; // r8d
 unsigned int v2; // r8d
 unsigned int v3; // r8d
 unsigned int v4; // edx
 unsigned int i; // eax

 v1 = 0;
 do
 {
 v3 = v1 + 1;
 a0 = (unsigned int)(a0 * 1717986919 >> 34) - (a0 >> 31);
 v1 = v3;
 } while (i != v4);
 return v2 + 1;
}


// Function: sub_4015b1 at 0x4015b1
void sub_4015b1(unsigned long a0)
{
 loop_nested(a0, 0);
 return;
}


// Function: loop_nested at 0x4015c0
unsigned long long loop_nested(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // edx
 unsigned long long v2; // rax
 unsigned long long v3; // rax
 unsigned long long v4; // rax

 v1 = 0;
 v2 = 0;
 if (a0 <= 0)
 return 0;
 do
 {
 v3 = v2;
 } while ((v4 = (a1 > 0 ? a1 + v3 & 4294967295 : v3 & 4294967295), v1 += 1, v2 = (a1 > 0 ? a1 + v3 & 4294967295 : v3 & 4294967295), a0 != v1));
 return (a1 > 0 ? a1 + v3 & 4294967295 : v3 & 4294967295);
}


// Function: loop_break at 0x4015e0
unsigned long long loop_break(unsigned int a0)
{
 unsigned long long v3; // rax
 unsigned int v4; // [bp-0x28]
 unsigned long long v0; // [bp-0x24]
 unsigned long long v1; // [bp-0x1c]

 v0 = 128849018900;
 v1 = 214748364840;
 v3 = 0;
 if (a0 == 10)
 return 0;
 while (true)
 {
 v3 += 1;
 if (v3 == 5)
 {
 return 4294967295;
 }
 else if (a0 == (&v4)[v3])
 {
 return v3 & 4294967295;
 }
 }
}


// Function: sub_401658 at 0x401658
void sub_401658()
{
}


// Function: sub_40166d at 0x40166d
void sub_40166d(unsigned long a0)
{
 loop_continue(a0);
 return;
}


// Function: loop_continue at 0x401670
unsigned long long loop_continue(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned int v2; // r8d
 unsigned int v3; // r8d
 unsigned int v4; // eax
 unsigned int v5; // r8d
 unsigned int v6; // eax

 if (a0 <= 0)
 return 0;
 v1 = 1;
 v2 = 0;
 do
 {
 v3 = v2;
 v4 = v1;
 v5 = (((char)v4 & 1) ? v3 + v4 : v3);
 } while ((v6 = v4 + 1, v1 = v4 + 1, v2 = v5, v1 != a0 + 1));
 return (((char)v4 & 1) ? v3 + v4 : v3);
}


// Function: sub_40169d at 0x40169d
void sub_40169d()
{
}


// Function: sub_4016a7 at 0x4016a7
void sub_4016a7(unsigned long a0)
{
 goto_forward(a0);
 return;
}


// Function: goto_forward at 0x4016b0
unsigned int goto_forward(unsigned long long a0)
{
 if ((unsigned int)a0 > 0)
 a0 *= a0;
 return (unsigned int)a0 * 2;
}


// Function: sub_4016bf at 0x4016bf
void sub_4016bf(unsigned long a0)
{
 goto_backward(a0);
 return;
}


// Function: goto_backward at 0x4016c0
unsigned int goto_backward(unsigned int a0)
{
 unsigned long long v1; // r8
 unsigned long long v2; // rax
 unsigned long long v3; // rax
 unsigned long long v4; // r8
 unsigned long long v5; // r8

 v1 = 1;
 if (a0 <= 0)
 return 1;
 v2 = 1;
 do
 {
 v3 = v2;
 v5 = v3 * v1;
 v1 = v5;
 v2 = (unsigned int)v3 + 1;
 } while (a0 + 1 != (unsigned int)v2);
 return (unsigned int)v3 * (unsigned int)v4;
}


// Function: sub_4016ef at 0x4016ef
void sub_4016ef(unsigned long a0, unsigned long a1)
{
 ternary_op(a0, a1);
 return;
}


// Function: ternary_op at 0x4016f0
long long ternary_op(unsigned int a0, unsigned int a1)
{
 return (a0 <= a1 ? a1 : a0);
}


// Function: sub_4016fc at 0x4016fc
void sub_4016fc()
{
 test_control_flow_l1();
 return;
}


// Function: test_control_flow_l1 at 0x401700
extern char g_40172c;
extern char g_401744;
extern char g_401758;
extern char g_401773;
extern char g_401787;
extern char g_40179f;
extern char g_4017b3;
extern char g_4017c7;
extern char g_4017d8;
extern char g_4017f0;
extern char g_401808;
extern char g_401820;
extern char g_401838;
extern char g_401850;
extern char g_401865;
extern char g_40187d;
extern char g_401895;
extern char g_4018ad;
extern char g_4018c5;
extern char g_4018dd;
extern char g_401930;
extern char g_40197c;
extern char g_40199b;
extern char g_4019af;
extern char g_4019ca;
extern char g_4019e2;
extern char g_4019f6;

long long test_control_flow_l1()
{
 unsigned long long v5; // rax
 unsigned long long v6; // rdx
 unsigned long long v7; // rax
 unsigned long long v8; // rdx
 unsigned long v0; // [bp-0x30]
 unsigned long v1; // [bp-0x30]
 unsigned int v9; // [bp-0x2c]
 unsigned long long v2; // [bp-0x24]
 unsigned long long v3; // [bp-0x1c]

 v0 = &g_40172c;
 puts(&g_403008);
 v0 = &g_401744;
 __printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
 v0 = &g_401758;
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
 v0 = &g_401773;
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", 4294967291);
 v0 = &g_401787;
 __printf_chk(1, "CF-L1-03 (if_else): %d\n", 1);
 v0 = &g_40179f;
 __printf_chk(1, "CF-L1-03 (if_else): %d\n", 0);
 v0 = &g_4017b3;
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 15);
 v0 = &g_4017c7;
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 10);
 v0 = &g_4017d8;
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 0);
 v0 = &g_4017f0;
 __printf_chk(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
 v0 = &g_401808;
 __printf_chk(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
 v0 = &g_401820;
 __printf_chk(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
 v0 = &g_401838;
 __printf_chk(1, "CF-L1-08 (switch_small): %d\n", 50);
 v0 = &g_401850;
 __printf_chk(1, "CF-L1-09 (switch_large): %d\n", 70);
 v0 = &g_401865;
 __printf_chk(1, "CF-L1-10 (switch_default): %d\n", 0);
 v0 = &g_40187d;
 __printf_chk(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
 v0 = &g_401895;
 __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", 45);
 v0 = &g_4018ad;
 __printf_chk(1, "CF-L1-13 (loop_while): %d\n", 5);
 v0 = &g_4018c5;
 __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", 4);
 v0 = &g_4018dd;
 __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", 12);
 v2 = 128849018900;
 v3 = 214748364840;
 v5 = 1;
 do
 {
 v6 = v5 & 4294967295;
 if (v5 == 5)
 {
 v6 = 4294967295;
 break;
 }
 } while ((v5 += 1, (&v9)[v5] != 30));
 v1 = &g_401930;
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v6);
 v2 = 128849018900;
 v3 = 214748364840;
 v7 = 1;
 do
 {
 v8 = v7 & 4294967295;
 if (v7 == 5)
 {
 v8 = 4294967295;
 break;
 }
 } while ((v7 += 1, (&v9)[v7] != 99));
 v0 = &g_40197c;
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v8);
 v0 = &g_40199b;
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", 25);
 v0 = &g_4019af;
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 v0 = &g_4019ca;
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
 v0 = &g_4019e2;
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
 v0 = &g_4019f6;
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: sub_401a1f at 0x401a1f
void sub_401a1f()
{
}


// Function: sub_401a2a at 0x401a2a
void sub_401a2a()
{
}


// Function: sub_401a3f at 0x401a3f
void sub_401a3f(unsigned long a0)
{
 loop_multi_exit(a0);
 return;
}


// Function: loop_multi_exit at 0x401a40
unsigned long long loop_multi_exit(unsigned int i)
{
 unsigned long long v8; // rdx
 unsigned int *v9; // rax
 unsigned int v0; // [bp-0x48]
 unsigned int v1; // [bp-0x44]
 unsigned long long v2; // [bp-0x40]
 unsigned long long v3; // [bp-0x38]
 unsigned long long v4; // [bp-0x30]
 unsigned long long v5; // [bp-0x28]
 unsigned long long v6; // [bp-0x20]

 v8 = 0;
 v1 = 2;
 v2 = 17179869187;
 v3 = 25769803781;
 v4 = 34359738375;
 v5 = 42949672969;
 v6 = 51539607563;
 v9 = &v0;
 if (i != 1)
 {
 do
 {
 if (i == v9[1])
 return 1 + v8 * 10;
 if (i == v9[2])
 return 2 + v8 * 10;
 if (i == v9[3])
 return 3 + v8 * 10;
 v8 = (unsigned int)v8 + 1;
 v9 += 4;
 if ((unsigned int)v8 == 3)
 return 4294967295;
 } while (*(v9) != i);
 }
 return 0 + v8 * 10;
}


// Function: sub_401ae4 at 0x401ae4
void sub_401ae4()
{
}


// Function: sub_401b02 at 0x401b02
void sub_401b02()
{
}


// Function: sub_401b0f at 0x401b0f
void sub_401b0f()
{
}


// Function: sub_401b17 at 0x401b17
void sub_401b17()
{
}


// Function: sub_401b2c at 0x401b2c
void sub_401b2c()
{
 unsigned int v0;
 v0 = 0;
 infinite_loop(&v0);
 return;
}


// Function: infinite_loop at 0x401b30
unsigned long long infinite_loop(unsigned int *ptr)
{
 unsigned long long v1; // rax

 v1 = 0;
 while (*(ptr) != 1)
 {
 v1 = (unsigned int)v1 + 1;
 if ((unsigned int)v1 == 1001)
 {
 *(ptr) = 1;
 return v1;
 }
 }
 return v1;
}


// Function: sub_401b38 at 0x401b38
void sub_401b38()
{
}


// Function: sub_401b59 at 0x401b59
void sub_401b59(unsigned long a0)
{
 multi_return(a0);
 return;
}


// Function: multi_return at 0x401b60
unsigned long long multi_return(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (a0 <= 50)
 {
 return ((a0 & 1) ? a0 + 1 : a0 * 2);
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_401b7a at 0x401b7a
void sub_401b7a()
{
}


// Function: sub_401b8c at 0x401b8c
void sub_401b8c(unsigned long a0)
{
 conditional_return(a0);
 return;
}


// Function: conditional_return at 0x401b90
unsigned long long conditional_return(unsigned int a0)
{
 if (a0 > 0)
 {
 return a0 * 2;
 }
 else if (!a0)
 {
 return 0;
 }
 else
 {
 return -(a0);
 }
}


// Function: sub_401b9c at 0x401b9c
void sub_401b9c()
{
}


// Function: sub_401baf at 0x401baf
void sub_401baf(unsigned long a0, unsigned long a1, unsigned long a2)
{
 duffs_device((void*)a0, (unsigned int*)a1, a2);
 return;
}


// Function: duffs_device at 0x401bb0

unsigned int duffs_device(void* a0, unsigned int *a1, unsigned int a2)
{
 void* cur; // rax
 unsigned int *iter; // rcx

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


// Function: sub_401be2 at 0x401be2
void sub_401be2()
{
}


// Function: sub_401c53 at 0x401c53
void sub_401c53()
{
}


// Function: sub_401c7b at 0x401c7b
void sub_401c7b(unsigned long a0)
{
 loop_complex_cond(a0);
 return;
}


// Function: loop_complex_cond at 0x401c80
unsigned int loop_complex_cond(unsigned int a0)
{
 unsigned int v1; // edx
 unsigned int v2; // eax

 if (a0 <= 0)
 return a0;
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += 2;
 a0 -= 1;
 v1 += 1;
 } while (v2 < a0 && v1 <= 9);
 return v2 + a0 + v1;
}


// Function: sub_401ca7 at 0x401ca7
void sub_401ca7()
{
}


// Function: sub_401cb3 at 0x401cb3
void sub_401cb3(unsigned long a0)
{
 loop_modify_var(a0);
 return;
}


// Function: loop_modify_var at 0x401cc0
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned long long v1; // r8
 unsigned int v2; // eax
 unsigned long v3; // rdx

 v1 = 0;
 v2 = 0;
 if (a0 <= 0)
 return 0;
 while (true)
 {
 v3 = v2 + 1;
 if (a0 <= (unsigned int)v3)
 break;
 v1 += v3;
 v2 = ((unsigned int)v3 <= 5 ? (unsigned int)v3 : v2 + 3);
 }
 return v1;
}


// Function: sub_401ccf at 0x401ccf
void sub_401ccf()
{
}


// Function: sub_401ce7 at 0x401ce7
void sub_401ce7()
{
 unsigned int v0;
 v0 = 0;
 loop_external_state(&v0);
 return;
}


// Function: loop_external_state at 0x401cf0
unsigned long long loop_external_state(unsigned int *a0)
{
 unsigned long long v1; // rax

 v1 = 0;
 do
 {
 } while (!*(a0) && (v1 = (unsigned long long)((unsigned int)v1 + 1), (unsigned int)v1 != 101));
 return v1;
}


// Function: sub_401cf8 at 0x401cf8
void sub_401cf8()
{
}


// Function: sub_401d0f at 0x401d0f
void sub_401d0f(unsigned long a0, unsigned long a1)
{
 tail_recursion(a0, a1);
 return;
}


// Function: tail_recursion at 0x401d10
long long tail_recursion(unsigned long a0, unsigned int a1)
{
 unsigned long v1; // rax

 v1 = a1;
 if ((unsigned int)a0 > 1)
 {
 do
 {
 v1 *= a0;
 a0 = (unsigned int)a0 - 1;
 } while ((unsigned int)a0 != 1);
 }
 return v1;
}


// Function: sub_401d2c at 0x401d2c
void sub_401d2c(unsigned long a0, unsigned long a1)
{
 indirect_recursion_a(a0, a1);
 return;
}


// Function: indirect_recursion_a at 0x401d30
long long indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // edx
 unsigned int ptr; // eax

 v1 = a1 - 2;
 if (a1 <= 0)
 return a0;
 while (true)
 {
 if (!((char)a0 & 1))
 {
 if (a1 == 1)
 return (a0 >> 31) + a0 >> 1;
 a0 = ((a0 >> 31) + a0 >> 1) + 1;
 ptr = v1;
 }
 else if (a1 != 1)
 {
 a0 = a0 * 3 + 2;
 ptr = v1;
 }
 else
 {
 return a0 * 3 + 1;
 }
 v1 -= 2;
 a1 -= 2;
 if (!ptr)
 return a0;
 }
}


// Function: sub_401d5d at 0x401d5d
void sub_401d5d()
{
}


// Function: sub_401d64 at 0x401d64
void sub_401d64()
{
}


// Function: sub_401d7f at 0x401d7f
void sub_401d7f(unsigned long a0, unsigned long a1)
{
 call_func_ptr(a0, a1);
 return;
}


// Function: call_func_ptr at 0x401d80
long long call_func_ptr(unsigned long a0, unsigned long a1)
{
 return ((long long (*)(unsigned long, unsigned long))a0)(a0, a1);
}


// Function: sub_401d8b at 0x401d8b
void sub_401d8b(unsigned long a0)
{
 call_func_ptr_array(a0, 0);
 return;
}


// Function: call_func_ptr_array at 0x401d90
unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1)
{
 unsigned long long (*func_table[3])(unsigned int);
 
 func_table[0] = (unsigned long long (*)(unsigned int))double_value;
 func_table[1] = (unsigned long long (*)(unsigned int))triple_value;
 func_table[2] = recursion_factorial;
 if (a0 > 2)
 return 4294967295;
 return func_table[a0](a1);
}


// Function: sub_401e0f at 0x401e0f
void sub_401e0f(unsigned long a0, unsigned long a1)
{
 call_virtual_func(a0, a1);
 return;
}


// Function: call_virtual_func at 0x401e10
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: sub_401e18 at 0x401e18
void sub_401e18(unsigned long a0, unsigned long a1)
{
 unsigned int arr[3];
 arr[0] = 5;
 arr[1] = 10;
 arr[2] = 15;
 process_with_callback(arr, 3, double_value);
 return;
}


// Function: process_with_callback at 0x401e20
unsigned long long process_with_callback(unsigned int *a0, unsigned int a1, unsigned long long (*a2)(unsigned int))
{
 unsigned long long v1; // r12
 unsigned int *i; // rbx
 unsigned long long v3; // r12
 unsigned int *v4; // rbx
 unsigned long long v5; // rax
 unsigned long long v6; // r12

 if (a1 <= 0)
 return 0;
 v1 = 0;
 i = a0;
 do
 {
 v3 = v1;
 v4 = i + 1;
 v6 = v3 + a2(*(i));
 v1 = v6;
 i = v4;
 } while (i != &a0[1 + a1 + 1]);
 return v3 + v5 & 4294967295;
}


// Function: sub_401e66 at 0x401e66
void sub_401e66()
{
}


// Function: sub_401e81 at 0x401e81
void sub_401e81()
{
 test_control_flow_l2();
 return;
}


// Function: test_control_flow_l2 at 0x401e90

long long test_control_flow_l2()
{
 unsigned long long v14; // rdx
 unsigned int *cur; // rax
 unsigned long v23; // fs
 unsigned long long v16; // r8
 unsigned int v17; // eax
 unsigned long v18; // rdx
 unsigned long long v19; // rdx
 unsigned int v20; // edx
 unsigned int v21; // ecx
 unsigned int v0; // [bp-0x80]
 unsigned int result; // [bp-0x7c]
 unsigned int v2; // [bp-0x78]
 unsigned long long v3; // [bp-0x70]
 unsigned int v4; // [bp-0x68]
 unsigned int v24; // [bp-0x64]
 unsigned long long v5; // [bp-0x58]
 unsigned long long v6; // [bp-0x50]
 unsigned long long v7; // [bp-0x48]
 unsigned long long v8; // [bp-0x40]
 unsigned long long flag1; // [bp-0x38]
 unsigned long long flag2; // [bp-0x28]
 unsigned long v11; // [bp-0x10]

 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7) & 4294967295);
 v0 = 0;
 v14 = 0;
 do
 {
 if (v0 == 1)
 goto LABEL_401ef8;
 } while ((v14 = (unsigned long long)((unsigned int)v14 + 1), (unsigned int)v14 != 1001));
 v0 = 1;
LABEL_401ef8:
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v14);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 v5 = 8589934593;
 v6 = 17179869187;
 v7 = 25769803781;
 flag1 = 0;
 flag2 = 0;
 v8 = 34359738375;
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", duffs_device(&flag1, &v5, 8) & 4294967295);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v16 = 0;
 v17 = 0;
 while (true)
 {
 v18 = v17 + 1;
 if ((unsigned int)v18 > 9)
 break;
 v16 += v18;
 v17 = ((unsigned int)v18 <= 5 ? (unsigned int)v18 : v17 + 3);
 }
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v16 & 4294967295);
 result = 0;
 v19 = 0;
 do
 {
 } while (!result && (v19 = (unsigned long long)((unsigned int)v19 + 1), (unsigned int)v19 != 101));
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v19);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 120);
 v4 = 5;
 v20 = 0;
 v21 = 1;
 v2 = 8589934593;
 v3 = 17179869187;
 cur = &v2;
 while (true)
 {
 cur += 1;
 v20 += v21 * 2;
 if (cur == &v24)
 break;
 v21 = *(cur);
 }
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v20);
 return v11 - *((long long *)(40 + v23));
}


// Function: sub_40200f at 0x40200f
void sub_40200f()
{
}


// Function: sub_402046 at 0x402046
void sub_402046()
{
}


// Function: sub_40213b at 0x40213b
void sub_40213b()
{
}


// Function: sub_402189 at 0x402189
void sub_402189(unsigned long a0)
{
 non_local_jump(a0);
 return;
}


// Function: non_local_jump at 0x40218e
unsigned long long non_local_jump(unsigned int a0)
{
 return a0;
}





// Function: sub_4021ca at 0x4021ca
void sub_4021ca()
{
}


// Function: sub_4021f9 at 0x4021f9
void sub_4021f9(unsigned long a0)
{
 cpp_exception(a0);
 return;
}


// Function: cpp_exception at 0x402200
unsigned long long cpp_exception(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (a0 <= 100)
 {
 return a0 * 2;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_402211 at 0x402211
void sub_402211()
{
}


// Function: sub_402224 at 0x402224
void sub_402224(unsigned long a0, unsigned long a1, unsigned long a2)
{
 large_jump_table(a0, a1, a2);
 return;
}


// Function: large_jump_table at 0x402230
unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2)
{
 unsigned long v0; // [bp-0x68]
 unsigned long long v1; // [bp-0x60]
 unsigned long long v2; // [bp-0x58]
 unsigned long long v3; // [bp-0x50]
 unsigned long long v4; // [bp-0x48]
 unsigned long long v5; // [bp-0x40]
 unsigned long long v6; // [bp-0x38]
 unsigned long long v7; // [bp-0x30]
 unsigned long long v8; // [bp-0x28]
 unsigned long long v9; // [bp-0x20]
 long long (*func_table[10])(unsigned long, unsigned long);

 v0 = (unsigned long)op_add;
 v1 = (unsigned long)op_sub;
 v2 = (unsigned long)op_mul;
 v3 = (unsigned long)op_div;
 v4 = (unsigned long)op_mod;
 v5 = (unsigned long)op_and;
 v6 = (unsigned long)op_or;
 v7 = (unsigned long)op_xor;
 v8 = (unsigned long)op_shl;
 v9 = (unsigned long)op_shr;
 func_table[0] = (long long (*)(unsigned long, unsigned long))v0;
 func_table[1] = (long long (*)(unsigned long, unsigned long))v1;
 func_table[2] = (long long (*)(unsigned long, unsigned long))v2;
 func_table[3] = (long long (*)(unsigned long, unsigned long))v3;
 func_table[4] = (long long (*)(unsigned long, unsigned long))v4;
 func_table[5] = (long long (*)(unsigned long, unsigned long))v5;
 func_table[6] = (long long (*)(unsigned long, unsigned long))v6;
 func_table[7] = (long long (*)(unsigned long, unsigned long))v7;
 func_table[8] = (long long (*)(unsigned long, unsigned long))v8;
 func_table[9] = (long long (*)(unsigned long, unsigned long))v9;
 if (a0 > 9)
 return 4294967295;
 return func_table[a0](a1, a2);
}


// Function: sub_402307 at 0x402307
void sub_402307(unsigned long a0, unsigned long a1)
{
 conditional_func_ptr(a0, a1);
 return;
}


// Function: conditional_func_ptr at 0x402310
long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
 unsigned long long v1; // rdx

 v1 = (unsigned long long)double_value;
 if (a0)
 {
 if (a0 != 1)
 v1 = (unsigned long long)recursion_factorial;
 else
 v1 = (unsigned long long)triple_value;
 }
 return ((long long (*)(unsigned long, unsigned long))v1)(a0, a1);
}


// Function: sub_40233a at 0x40233a
void sub_40233a(unsigned long a0, unsigned long a1)
{
 state_machine(a0, a1);
 return;
}


// Function: state_machine at 0x402340
unsigned long long state_machine(unsigned int a0, unsigned int a1)
{
 if (a1 == 2)
 {
 return 2;
 }
 else if (a1 <= 2)
 {
 if (!a1)
 {
 return a0 == 1;
 }
 else if (a1 != 1)
 {
 return 3;
 }
 else if (a0 != 2)
 {
 return (a0 == 99) * 2 + 1;
 }
 else
 {
 return 2;
 }
 }
 else
 {
 if (a1 == 3)
 return -(0 < a0) & 3;
 return 3;
 }
}


// Function: sub_402366 at 0x402366
void sub_402366()
{
}


// Function: sub_40237d at 0x40237d
void sub_40237d()
{
}


// Function: sub_402386 at 0x402386
void sub_402386()
{
}


// Function: sub_402396 at 0x402396
void sub_402396()
{
}


// Function: sub_4023a9 at 0x4023a9
void sub_4023a9(unsigned long a0, unsigned long a1)
{
 fsm_func_table(a0, (unsigned int)a1);
 return;
}


// Function: fsm_func_table at 0x4023b0
unsigned long long fsm_func_table(unsigned long a0, unsigned int a1)
{
 unsigned long long v0; // [bp-0x38]
 unsigned long long v1; // [bp-0x30]
 unsigned long long v2; // [bp-0x28]
 unsigned long long v3; // [bp-0x20]
 unsigned long long (*func_table[4])(unsigned long, unsigned int);

 v0 = (unsigned long long)state_idle;
 v1 = (unsigned long long)state_processing;
 v2 = (unsigned long long)state_done;
 v3 = (unsigned long long)state_error;
 func_table[0] = (unsigned long long (*)(unsigned long, unsigned int))v0;
 func_table[1] = (unsigned long long (*)(unsigned long, unsigned int))v1;
 func_table[2] = (unsigned long long (*)(unsigned long, unsigned int))v2;
 func_table[3] = (unsigned long long (*)(unsigned long, unsigned int))v3;
 if (a1 > 3)
 return 3;
 return func_table[a1](a0, a1);
}


// Function: sub_40243f at 0x40243f
void sub_40243f(unsigned long a0, unsigned long a1)
{
 computed_goto(a0, (unsigned int)a1);
 return;
}


// Function: computed_goto at 0x402440
unsigned long long computed_goto(unsigned long a0, unsigned int a1)
{
 unsigned long long (*func_table[4])(unsigned long, unsigned int);

 func_table[0] = (unsigned long long (*)(unsigned long, unsigned int))state_idle;
 func_table[1] = (unsigned long long (*)(unsigned long, unsigned int))state_processing;
 func_table[2] = (unsigned long long (*)(unsigned long, unsigned int))state_done;
 func_table[3] = (unsigned long long (*)(unsigned long, unsigned int))state_error;
 if (a1 > 3)
 return 4294967295;
 return func_table[a1](a0, a1);
}


// Function: sub_4024ec at 0x4024ec
void sub_4024ec(unsigned long a0)
{
 obfuscated_cf((unsigned int)a0);
 return;
}


// Function: obfuscated_cf at 0x4024f0
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4024f8 at 0x4024f8
void sub_4024f8(unsigned long a0)
{
 opaque_predicate((unsigned int)a0);
 return;
}


// Function: opaque_predicate at 0x402500
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402508 at 0x402508
void sub_402508(char a0)
{
 overlapped_code((unsigned int)a0);
 return;
}


// Function: overlapped_code at 0x402510
int overlapped_code(unsigned int a0)
{
 if (!((char)a0 & 1))
 return ((a0 >> 31) + a0 & 4294967295) >> 1;
 return a0 * 3 + 1;
}


// Function: sub_40251f at 0x40251f
void sub_40251f()
{
}


// Function: sub_40252a at 0x40252a
void sub_40252a()
{
 test_control_flow_l3();
 return;
}


// Function: test_control_flow_l3 at 0x402530

long long test_control_flow_l3()
{
 unsigned long v8; // fs
 unsigned long long v0; // [bp-0x28]
 unsigned long long v1; // [bp-0x20]
 unsigned long v2; // [bp-0x10]

 puts(&g_4032b8);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", op_add(10, 5) & 4294967295);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
 v0 = 0x100000000;
 v1 = 12884901890;
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", computed_goto(&v0, 2) & 4294967295);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 return v2 - *((long long *)(40 + v8));
}



/* CRT stub function _fini removed by preprocessor */


