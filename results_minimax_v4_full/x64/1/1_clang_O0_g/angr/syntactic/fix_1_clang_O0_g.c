// Angr Decompilation of 1_clang_O0_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include <stdbool.h>

/* CONCAT helper for 64-bit operations from 32-bit halves */
#define CONCAT(a, b) (((unsigned long long)(unsigned int)(a) << 32) | (unsigned long long)(unsigned int)(b))

/* CRT stub function _init removed by preprocessor */
struct _dummy { int x; };
typedef struct _dummy *struct_0;

/* CRT stub functions */
void deregister_tm_clones() {}
void register_tm_clones() {}
void __do_global_dtors_aux() {}
void frame_dummy() {}

/* External variables that need declarations */
extern struct_0 *g_405fe0;
extern unsigned int g_403010[4];
extern unsigned int g_403020[10];
extern unsigned int g_403048[8];
extern unsigned char g_4030a0[48];
extern unsigned int g_403068[4];
extern unsigned long g_406008;
extern unsigned long g_406010;
extern char g_4030e4[];
extern char g_403352[];
extern char g_403546[];
extern jmp_buf jump_buffer;
extern void g_405d60;
extern unsigned long long g_405dd0;
extern unsigned long long g_405dd8;
extern unsigned long long g_405de0;
extern unsigned long long g_405de8;

/* Forward declarations for all test functions */
unsigned int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned int single_if(unsigned int a0);
unsigned int if_else(unsigned int a0);
unsigned int nested_if_2(unsigned int a0, unsigned int a1);
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned int if_elseif_chain(unsigned int a0);
unsigned int if_elseif_long(unsigned int a0);
unsigned int switch_small(unsigned int a0);
long long switch_large(unsigned int a0);
unsigned int switch_default(unsigned int a0);
unsigned int switch_fallthrough(unsigned int a0);
unsigned int loop_for_fixed(unsigned int a0);
unsigned int loop_while(unsigned int a0);
unsigned int loop_dowhile(unsigned int a0);
unsigned int loop_nested(unsigned int a0, unsigned int a1);
unsigned int loop_break(unsigned int a0);
unsigned int loop_continue(unsigned int a0);
unsigned int goto_forward(unsigned int a0);
unsigned int goto_backward(unsigned int a0);
unsigned int ternary_op(unsigned int a0, unsigned int a1);
unsigned int loop_multi_exit(unsigned int a0);
unsigned int infinite_loop(unsigned int *ptr);
unsigned int multi_return(unsigned int a0);
unsigned int conditional_return(unsigned int a0);
long long duffs_device(unsigned long long a0, unsigned long long a1, unsigned int a2);
int loop_complex_cond(unsigned int a0);
unsigned int loop_modify_var(unsigned int a0);
unsigned int loop_external_state(unsigned int *a0);
unsigned int recursion_factorial(unsigned int a0);
unsigned int tail_recursion(unsigned int a0, unsigned int a1);
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1);
unsigned int indirect_recursion_b(unsigned int a0, unsigned int a1);
unsigned int double_value(unsigned int a0);
unsigned int triple_value(unsigned int a0);
unsigned int call_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1);
unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1);
unsigned int process_with_callback(unsigned long a0, unsigned int a1, unsigned long long *a2);
unsigned int non_local_jump(unsigned int a0);
unsigned int cpp_exception(unsigned int a0);
unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2);
int op_add(unsigned int a0, unsigned int a1);
int op_sub(unsigned int a0, unsigned int a1);
int op_mul(unsigned int a0, unsigned int a1);
unsigned int op_div(unsigned int a0, unsigned int a1);
unsigned int op_mod(unsigned int a0, unsigned int a1);
int op_and(unsigned int a0, unsigned int a1);
int op_or(unsigned int a0, unsigned int a1);
int op_xor(unsigned int a0, unsigned int a1);
int op_shl(unsigned int a0, char a1);
int op_shr(unsigned int a0, char a1);
long long conditional_func_ptr(unsigned int a0, unsigned int a1);
long long state_machine(unsigned int a0, unsigned int a1);
unsigned int fsm_func_table(unsigned int a0, unsigned int a1);
unsigned long long state_idle(unsigned int a0);
unsigned int state_processing(unsigned int a0);
unsigned long long state_done(unsigned long a0);
unsigned long long state_error(unsigned int a0);
long long computed_goto(unsigned long long a0, unsigned int a1);
unsigned int obfuscated_cf(unsigned int a0);
unsigned int opaque_predicate(unsigned int a0);
unsigned int overlapped_code(unsigned int a0);

int test_control_flow_l1();
int test_control_flow_l2();
int test_control_flow_l3();
unsigned int main();

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_405fe0;
 if (g_405fe0)
 v1 = g_405fe0();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long g_406008;
extern unsigned long g_406010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 return;
}


// Function: sub_40102c at 0x40102c
// This function appears to be a placeholder - removed dead code
void sub_40102c()
{
 // Dead code - function was never called in practice
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010b5 at 0x4010b5
void sub_4010b5()
{
 // Original function had unsupported jumpkind - using trap for debugging
 __asm__ __volatile__("int3");
}


// Function: sub_4010b6 at 0x4010b6
void sub_4010b6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010e9 at 0x4010e9
void sub_4010e9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401129 at 0x401129
void sub_401129()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401165 at 0x401165
void sub_401165()
{
}


// Function: sub_401169 at 0x401169
void sub_401169()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401179 at 0x401179
void sub_401179(unsigned long a0, unsigned long a1, unsigned long a2)
{
 sequential_ops(a0, a1, a2);
 return;
}


// Function: sequential_ops at 0x401180
unsigned int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]

 v2 = a0 + a1;
 v1 = v2 * 2;
 v0 = v1 - a2;
 return v0;
}


// Function: sub_4011ad at 0x4011ad
void sub_4011ad(unsigned long a0)
{
 single_if();
 return;
}


// Function: single_if at 0x4011b0
unsigned int single_if(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 if (v0 > 0)
 v0 *= 2;
 return v0;
}


// Function: sub_4011cf at 0x4011cf
void sub_4011cf(unsigned long a0)
{
 if_else();
 return;
}


// Function: if_else at 0x4011d0
unsigned int if_else(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (a0 <= 0 ? 0 : 1);
 return v0;
}


// Function: sub_4011f9 at 0x4011f9
void sub_4011f9(unsigned long a0, unsigned long a1)
{
 nested_if_2();
 return;
}


// Function: nested_if_2 at 0x401200
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = (a0 <= 0 ? 0 : (a1 <= 0 ? a0 : a0 + a1));
 return v0;
}


// Function: sub_401243 at 0x401243
void sub_401243(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 nested_if_deep();
 return;
}


// Function: nested_if_deep at 0x401250
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // [bp-0xc]

 v0 = (a0 <= 0 ? 0 : (a1 <= 0 ? 1 : (a2 <= 0 ? 2 : (a3 <= 0 ? 3 : (a4 <= 0 ? 4 : 5)))));
 return v0;
}


// Function: sub_4012de at 0x4012de
void sub_4012de(unsigned long a0)
{
 if_elseif_chain();
 return;
}


// Function: if_elseif_chain at 0x4012e0
unsigned int if_elseif_chain(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (!a0 ? 10 : (a0 == 1 ? 20 : (a0 == 2 ? 30 : 4294967295)));
 return v0;
}


// Function: sub_401335 at 0x401335
void sub_401335(unsigned long a0)
{
 if_elseif_long();
 return;
}


// Function: if_elseif_long at 0x401340
unsigned int if_elseif_long(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (!a0 ? 100 : (a0 == 1 ? 200 : (a0 == 2 ? 300 : (a0 == 3 ? 400 : (a0 == 4 ? 500 : 4294967295)))));
 return v0;
}


// Function: sub_4013c1 at 0x4013c1
void sub_4013c1(unsigned long a0)
{
 switch_small();
 return;
}


// Function: switch_small at 0x4013d0
extern unsigned int g_403010[4];

unsigned int switch_small(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 v1 = 10;
 v0 = 5;
 if (a0 > 3)
 {
 v2 = 4294967295;
 return v2;
 }
 // Fixed: replaced invalid computed goto with switch
 switch (a0) {
 case 0: return g_403010[0] + (unsigned int)(char *)&g_403010[0];
 case 1: return g_403010[1] + (unsigned int)(char *)&g_403010[0];
 case 2: return g_403010[2] + (unsigned int)(char *)&g_403010[0];
 case 3: return g_403010[3] + (unsigned int)(char *)&g_403010[0];
 default: return 0;
 }
}


// Function: switch_large at 0x401450
extern unsigned int g_403020[10];

long long switch_large(unsigned int a0)
{
 if (a0 > 9)
 {
 return -1;
 }
 // Fixed: replaced invalid computed goto with switch
 switch (a0) {
 case 0: return g_403020[0] + (unsigned int)(char *)&g_403020[0];
 case 1: return g_403020[1] + (unsigned int)(char *)&g_403020[0];
 case 2: return g_403020[2] + (unsigned int)(char *)&g_403020[0];
 case 3: return g_403020[3] + (unsigned int)(char *)&g_403020[0];
 case 4: return g_403020[4] + (unsigned int)(char *)&g_403020[0];
 case 5: return g_403020[5] + (unsigned int)(char *)&g_403020[0];
 case 6: return g_403020[6] + (unsigned int)(char *)&g_403020[0];
 case 7: return g_403020[7] + (unsigned int)(char *)&g_403020[0];
 case 8: return g_403020[8] + (unsigned int)(char *)&g_403020[0];
 case 9: return g_403020[9] + (unsigned int)(char *)&g_403020[0];
 default: return 0;
 }
}


// Function: switch_default at 0x401500
unsigned int switch_default(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (a0 == 1 ? 100 : (a0 == 2 ? 200 : (a0 == 3 ? 300 : 0)));
 return v0;
}


// Function: sub_40156d at 0x40156d
void sub_40156d(unsigned long a0)
{
 switch_fallthrough();
 return;
}


// Function: switch_fallthrough at 0x401570
unsigned int switch_fallthrough(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]

 v0 = 0;
 if (a0 != 1)
 {
 if (a0 != 2)
 {
 if (a0 == 3)
 {
 v0 += a0 * 4;
 }
 else
 {
 v0 = 4294967295;
 return v0;
 }
 }
 v0 += a0 * 2;
 }
 v0 += a0;
 return v0;
}


// Function: sub_4015e6 at 0x4015e6
void sub_4015e6(unsigned long a0)
{
 loop_for_fixed();
 return;
}


// Function: loop_for_fixed at 0x4015f0
unsigned int loop_for_fixed(unsigned int a0)
{
 unsigned int i; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = 0;
 for (i = 0; i < a0; i += 1)
 {
 v1 += i;
 }
 return v1;
}


// Function: sub_40162d at 0x40162d
void sub_40162d(unsigned long a0)
{
 loop_while();
 return;
}


// Function: loop_while at 0x401630
unsigned int loop_while(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int i; // [bp-0x10]
 unsigned int result; // [bp-0xc]

 result = a0;
 for (i = 0; result != 0; i += 1)
 {
 // Count digits in result (simple version)
 unsigned int tmp = result;
 result = 0;
 while (tmp > 0) {
 result += 1;
 tmp /= 10;
 }
 }
 v0 = (i == 0 ? 1 : i);
 return v0;
}


// Function: sub_40168b at 0x40168b
void sub_40168b(unsigned long a0)
{
 loop_dowhile();
 return;
}


// Function: loop_dowhile at 0x401690
unsigned int loop_dowhile(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int result; // [bp-0xc]

 result = a0;
 v0 = 0;
 do
 {
 result = result / 10;
 v0 += 1;
 } while (result);
 return v0;
}


// Function: sub_4016c4 at 0x4016c4
void sub_4016c4(unsigned long a0, unsigned long a1)
{
 loop_nested();
 return;
}


// Function: loop_nested at 0x4016d0
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
 unsigned int j; // [bp-0x1c]
 unsigned int i; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 v2 = 0;
 for (i = 0; i < a0; i += 1)
 {
 for (j = 0; j < a1; j += 1)
 {
 v2 += 1;
 }
 }
 return v2;
}


// Function: sub_401736 at 0x401736
void sub_401736(unsigned long a0)
{
 loop_break();
 return;
}


// Function: loop_break at 0x401740
unsigned int loop_break(unsigned int a0)
{
 unsigned int i; // [bp-0x30]
 unsigned int v1; // [bp-0x2c]
 unsigned long long v2[5]; // [bp-0x28]
 unsigned long long v3; // [bp-0x20]
 unsigned int v4; // [bp-0x18]
 unsigned int v5; // [bp-0xc]

 v2[0] = 8589934593ULL;
 v2[1] = 17179869187ULL;
 v2[2] = 25769803781ULL;
 v2[3] = 34359738375ULL;
 v2[4] = 42949672969ULL;
 v3 = 171798691870ULL;
 v4 = 50;
 v1 = 5;
 for (i = 0; i < v1; i += 1)
 {
 if (v2[i] == a0)
 {
 v5 = i;
 return v5;
 }
 }
 v5 = 4294967295;
 return v5;
}


// Function: sub_4017bb at 0x4017bb
void sub_4017bb(unsigned long a0)
{
 loop_continue();
 return;
}


// Function: loop_continue at 0x4017c0
unsigned int loop_continue(unsigned int a0)
{
 unsigned int i; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = 0;
 for (i = 1; i <= a0; i += 1)
 {
 unsigned long long combined = (unsigned long long)i;
 if ((combined & 1) == 0)
 v1 += i;
 }
 return v1;
}


// Function: sub_401816 at 0x401816
void sub_401816(unsigned long a0)
{
 goto_forward();
 return;
}


// Function: goto_forward at 0x401820
unsigned int goto_forward(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]

 v0 = (a0 <= 0 ? a0 : a0 * a0);
 v0 *= 2;
 return v0;
}


// Function: sub_401859 at 0x401859
void sub_401859(unsigned long a0)
{
 goto_backward();
 return;
}


// Function: goto_backward at 0x401860
unsigned int goto_backward(unsigned int a0)
{
 unsigned int i; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 if (a0 <= 0)
 {
 v2 = 1;
 return v2;
 }
 v1 = 1;
 for (i = 1; i <= a0; i += 1)
 {
 v1 *= i;
 }
 v2 = v1;
 return v2;
}


// Function: sub_4018bf at 0x4018bf
void sub_4018bf(unsigned long a0, unsigned long a1)
{
 ternary_op();
 return;
}


// Function: ternary_op at 0x4018c0
unsigned int ternary_op(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]

 v0 = (a0 <= a1 ? a1 : a0);
 return v0;
}


// Function: sub_4018ec at 0x4018ec
void sub_4018ec()
{
 test_control_flow_l1();
 return;
}


// Function: test_control_flow_l1 at 0x4018f0
extern char g_4030e4[];

int test_control_flow_l1()
{
 printf("%s\n", g_4030e4);
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


// Function: sub_401bf7 at 0x401bf7
void sub_401bf7(unsigned long a0)
{
 loop_multi_exit();
 return;
}


// Function: loop_multi_exit at 0x401c00
extern unsigned char g_4030a0[48];

unsigned int loop_multi_exit(unsigned int a0)
{
 unsigned int j; // [bp-0x50]
 unsigned int i; // [bp-0x4c]
 char v2; // [bp-0x48]
 unsigned int v3; // [bp-0xc]

 memcpy(&v2, &g_4030a0, 48);
 for (i = 0; i < 3; i += 1)
 {
 for (j = 0; j < 4; j += 1)
 {
 if (*((int *)&(&v2)[16 * i + 4 * j]) == a0)
 {
 v3 = i * 10 + j;
 return v3;
 }
 }
 }
 v3 = 4294967295;
 return v3;
}


// Function: sub_401ca6 at 0x401ca6
void sub_401ca6(unsigned long a0)
{
 infinite_loop();
 return;
}


// Function: infinite_loop at 0x401cb0
unsigned int infinite_loop(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x14]

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


// Function: sub_401d02 at 0x401d02
void sub_401d02(unsigned long a0)
{
 multi_return();
 return;
}


// Function: multi_return at 0x401d10
unsigned int multi_return(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0xc]

 if (a0 >= 0)
 {
 v0 = a0 * 2;
 // Fixed: replaced invalid CONCAT with proper 64-bit handling
 unsigned long long combined = ((unsigned long long)a0 << 32) | a0;
 int is_even = (combined & 1) == 0;
 v1 = (v0 <= 100 ? (is_even ? v0 : a0 + 1) : 4294967294);
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_401d79 at 0x401d79
void sub_401d79(unsigned long a0)
{
 conditional_return();
 return;
}


// Function: conditional_return at 0x401d80
unsigned int conditional_return(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 if (a0 <= 0)
 {
 v0 = (a0 < 0 ? a0 * 4294967295 : 0);
 v1 = v0;
 return v1;
 }
 v1 = a0 * 2;
 return v1;
}


// Function: sub_401dca at 0x401dca
void sub_401dca(unsigned long a0, unsigned long a1, unsigned long a2)
{
 duffs_device();
 return;
}


// Function: duffs_device at 0x401dd0
extern unsigned int g_403048[8];

long long duffs_device(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
 unsigned int v5; // ecx
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v0; // [bp-0x28]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 unsigned int v3; // [bp-0xc]

 v2 = a0;
 v1 = a1;
 if (a2 <= 0)
 {
 v3 = 4294967295;
 return v3;
 }
 v5 = a2;
 v6 = v5 + 7;
 v0 = (v6 < 0 ? v5 + 14 : v6) >> 3;
 v7 = a2;
 if (v7 - ((v7 < 0 ? v7 + 7 : v7) & 0xfffffff8) > 7)
 {
 v3 = a2;
 return v3;
 }
 // Fixed: replaced invalid computed goto with switch
 switch (v7 - ((v7 < 0 ? v7 + 7 : v7) & 0xfffffff8)) {
 case 0: v3 = g_403048[0] + (unsigned int)(char *)&g_403048[0]; break;
 case 1: v3 = g_403048[1] + (unsigned int)(char *)&g_403048[0]; break;
 case 2: v3 = g_403048[2] + (unsigned int)(char *)&g_403048[0]; break;
 case 3: v3 = g_403048[3] + (unsigned int)(char *)&g_403048[0]; break;
 case 4: v3 = g_403048[4] + (unsigned int)(char *)&g_403048[0]; break;
 case 5: v3 = g_403048[5] + (unsigned int)(char *)&g_403048[0]; break;
 case 6: v3 = g_403048[6] + (unsigned int)(char *)&g_403048[0]; break;
 case 7: v3 = g_403048[7] + (unsigned int)(char *)&g_403048[0]; break;
 default: v3 = 0; break;
 }
 return v3;
}


// Function: sub_401f79 at 0x401f79
void sub_401f79(unsigned long a0)
{
 loop_complex_cond();
 return;
}


// Function: loop_complex_cond at 0x401f80
int loop_complex_cond(unsigned int a0)
{
 char v0; // [bp-0x19]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v3 = 0;
 v2 = a0;
 v1 = 0;
 while (true)
 {
 v0 = 0;
 if (v3 < v2)
 {
 v0 = 0;
 if (v1 < 10)
 v0 = 0 < v2;
 }
 if (!(v0 & 1))
 break;
 v3 += 2;
 v2 -= 1;
 v1 += 1;
 }
 return v3 + v2 + v1;
}


// Function: loop_modify_var at 0x402000
unsigned int loop_modify_var(unsigned int a0)
{
 unsigned int cur; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = 0;
 for (cur = 0; cur < a0; cur += 1)
 {
 v1 += cur;
 if (cur > 5)
 cur += 2;
 }
 return v1;
}


// Function: sub_402055 at 0x402055
void sub_402055(unsigned long a0)
{
 loop_external_state();
 return;
}


// Function: loop_external_state at 0x402060
unsigned int loop_external_state(unsigned int *a0)
{
 unsigned int v0; // [bp-0x14]

 v0 = 0;
 do
 {
 } while (!*(a0) && v0++ < 100);
 return v0;
}


// Function: recursion_factorial at 0x4020a0
unsigned int recursion_factorial(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 if (a0 > 1)
 {
 v0 = recursion_factorial(a0 - 1) * a0;
 return v0;
 }
 v0 = 1;
 return v0;
}


// Function: sub_4020e6 at 0x4020e6
void sub_4020e6(unsigned long a0, unsigned long a1)
{
 tail_recursion();
 return;
}


// Function: tail_recursion at 0x4020f0
unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = (a0 <= 1 ? a1 : (unsigned int)tail_recursion(a0 - 1, a1 * a0));
 return v0;
}


// Function: sub_402131 at 0x402131
void sub_402131(unsigned long a0, unsigned long a1)
{
 indirect_recursion_a();
 return;
}


// Function: indirect_recursion_a at 0x402140
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 // Fixed: replaced invalid CONCAT with proper 64-bit handling
 unsigned long long combined = ((unsigned long long)a0 << 32) | a0;
 unsigned int even_check = (unsigned int)(combined & 1);
 v0 = (a1 <= 0 ? a0 : (!even_check ? (unsigned int)indirect_recursion_b(even_check & 4294967295, a1 - 1, (unsigned int)(combined >> 32), 2) : (unsigned int)indirect_recursion_b(a0 * 3 + 1, a1 - 1)));
 return v0;
}


// Function: sub_4021b5 at 0x4021b5
void sub_4021b5(unsigned long a0, unsigned long a1)
{
 indirect_recursion_b();
 return;
}


// Function: indirect_recursion_b at 0x4021c0
unsigned int indirect_recursion_b(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // [bp-0xc]

 v0 = (a1 <= 0 ? a0 : (unsigned int)indirect_recursion_a(a0 + 1, a1 - 1));
 return v0;
}


// Function: call_func_ptr at 0x402200
unsigned int call_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
    return a0(a1);
}


// Function: sub_40221e at 0x40221e
void sub_40221e(unsigned long a0, unsigned long a1)
{
 call_func_ptr_array();
 return;
}


// Function: call_func_ptr_array at 0x402220
extern unsigned int (*g_405d40)(unsigned int);
extern unsigned int (*g_405d48)(unsigned int);
extern unsigned int (*g_405d50)(unsigned int);

unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned int (*v0)(unsigned int); // [bp-0x38]
 unsigned int (*v1)(unsigned int); // [bp-0x30]
 unsigned int (*v2)(unsigned int); // [bp-0x28]
 unsigned int v3; // [bp-0xc]

 v0 = g_405d40;
 v1 = g_405d48;
 v2 = g_405d50;
 if (a0 >= 0 && a0 < 3)
 {
 unsigned int (*arr[])(unsigned int) = {v0, v1, v2};
 v3 = arr[a0](a1);
 return v3;
 }
 v3 = 4294967295;
 return v3;
}


// Function: sub_402289 at 0x402289
void sub_402289(unsigned long a0)
{
 double_value();
 return;
}


// Function: double_value at 0x402290
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_40229f at 0x40229f
void sub_40229f(unsigned long a0)
{
 triple_value();
 return;
}


// Function: triple_value at 0x4022a0
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_4022ad at 0x4022ad
void sub_4022ad(unsigned long a0, unsigned long a1)
{
 call_virtual_func();
 return;
}


// Function: call_virtual_func at 0x4022b0
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: sub_4022c3 at 0x4022c3
void sub_4022c3(unsigned long a0, unsigned long a1, unsigned long a2)
{
 process_with_callback();
 return;
}


// Function: process_with_callback at 0x4022d0
unsigned int process_with_callback(unsigned long a0, unsigned int a1, unsigned long long *a2)
{
 unsigned int i; // [bp-0x28]
 unsigned int v1; // [bp-0x24]

 v1 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v1 += a2(*((int *)(a0 + i * 4)));
 }
 return v1;
}


// Function: sub_40232b at 0x40232b
void sub_40232b()
{
 test_control_flow_l2();
 return;
}


// Function: test_control_flow_l2 at 0x402330
extern char g_403352[];

int test_control_flow_l2()
{
 unsigned long v0; // [bp-0x78]
 unsigned long long v1; // [bp-0x70]
 unsigned int v2; // [bp-0x68]
 unsigned int flag1; // [bp-0x5c]
 char v4[32]; // [bp-0x58]
 unsigned long v5; // [bp-0x38]
 unsigned long long v6; // [bp-0x30]
 unsigned long long v7; // [bp-0x28]
 unsigned long long v8; // [bp-0x20]
 unsigned int result; // [bp-0xc]

 printf("%s\n", g_403352);
 printf("CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7) & 4294967295);
 result = 0;
 printf("CF-L2-02 (infinite_loop): %d\n", infinite_loop(&result) & 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", multi_return(4294967291) & 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", multi_return(100) & 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", multi_return(3) & 4294967295);
 printf("CF-L2-04 (conditional_return): %d\n", conditional_return(5) & 4294967295);
 printf("CF-L2-04 (conditional_return): %d\n", conditional_return(4294967291) & 4294967295);
 v5 = 8589934593;
 v6 = 17179869187;
 v7 = 25769803781;
 v8 = 34359738375;
 memset(v4, 0, 32);
 printf("CF-L2-05 (duffs_device): %d\n", duffs_device((unsigned long long)v4, (unsigned long long)v5, 8) & 4294967295);
 printf("CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10) & 4294967295);
 printf("CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(10) & 4294967295);
 flag1 = 0;
 printf("CF-L2-08 (loop_external_state): %d\n", loop_external_state(&flag1) & 4294967295);
 printf("CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5) & 4294967295);
 printf("CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1) & 4294967295);
 printf("CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3) & 4294967295);
 printf("CF-L2-12 (call_func_ptr): %d\n", call_func_ptr(double_value, 5) & 4294967295);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5) & 4294967295);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5) & 4294967295);
 v0 = 8589934593;
 v1 = 17179869187;
 v2 = 5;
 return printf("CF-L2-15 (process_with_callback): %d\n", process_with_callback((unsigned long)&v0, 5, (unsigned long long*)double_value) & 4294967295);
}


// Function: sub_4025b2 at 0x4025b2
void sub_4025b2(unsigned long a0)
{
 non_local_jump();
 return;
}


// Function: non_local_jump at 0x4025c0
extern jmp_buf jump_buffer;

unsigned int non_local_jump(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 if (_setjmp(&jump_buffer))
 {
 v0 = 4294967295;
 return v0;
 }
 else if (a0 < 0)
 {
 longjmp(&jump_buffer, 1); /* do not return */
 }
 else if (a0 > 100)
 {
 longjmp(&jump_buffer, 2); /* do not return */
 }
 else
 {
 v0 = a0 * 2;
 return v0;
 }
}


// Function: sub_402634 at 0x402634
void sub_402634(unsigned long a0)
{
 cpp_exception();
 return;
}


// Function: cpp_exception at 0x402640
unsigned int cpp_exception(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (a0 < 0 ? 4294967295 : (a0 <= 100 ? a0 * 2 : 4294967294));
 return v0;
}


// Function: sub_402681 at 0x402681
void sub_402681(unsigned long a0, unsigned long a1, unsigned long a2)
{
 large_jump_table();
 return;
}


// Function: large_jump_table at 0x402690
extern void g_405d60;

unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 char v0[92]; // [bp-0x68]
 unsigned int v1; // [bp-0xc]

 memcpy(&v0, &g_405d60, 80);
 if (a0 >= 0 && a0 < 10)
 {
 v1 = (*((long long *)&v0[8 * a0]))(a1, a2);
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_4026f3 at 0x4026f3
void sub_4026f3(unsigned long a0, unsigned long a1)
{
 op_add();
 return;
}


// Function: op_add at 0x402700
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_402712 at 0x402712
void sub_402712(unsigned long a0, unsigned long a1)
{
 op_sub();
 return;
}


// Function: op_sub at 0x402720
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: sub_402732 at 0x402732
void sub_402732(unsigned long a0, unsigned long a1)
{
 op_mul();
 return;
}


// Function: op_mul at 0x402740
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: sub_402753 at 0x402753
void sub_402753(unsigned long a0, unsigned long a1)
{
 op_div();
 return;
}


// Function: op_div at 0x402760
unsigned int op_div(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]

 // Fixed: replaced invalid CONCAT with proper 64-bit handling
 unsigned long long combined = ((unsigned long long)a0 << 32) | a0;
 v0 = (!a1 ? 0 : (unsigned int)(combined / a1));
 return v0;
}


// Function: sub_402792 at 0x402792
void sub_402792(unsigned long a0, unsigned long a1)
{
 op_mod();
 return;
}


// Function: op_mod at 0x4027a0
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]

 // Fixed: replaced invalid CONCAT with proper 64-bit handling
 unsigned long long combined = ((unsigned long long)a0 << 32) | a0;
 v0 = (!a1 ? 0 : (unsigned int)(combined % a1));
 return v0;
}


// Function: sub_4027d2 at 0x4027d2
void sub_4027d2(unsigned long a0, unsigned long a1)
{
 op_and();
 return;
}


// Function: op_and at 0x4027e0
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: sub_4027f2 at 0x4027f2
void sub_4027f2(unsigned long a0, unsigned long a1)
{
 op_or();
 return;
}


// Function: op_or at 0x402800
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: sub_402812 at 0x402812
void sub_402812(unsigned long a0, unsigned long a1)
{
 op_xor();
 return;
}


// Function: op_xor at 0x402820
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: sub_402832 at 0x402832
void sub_402832(unsigned long a0, unsigned long a1)
{
 op_shl();
 return;
}


// Function: op_shl at 0x402840
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: sub_402854 at 0x402854
void sub_402854(unsigned long a0, unsigned long a1)
{
 op_shr();
 return;
}


// Function: op_shr at 0x402860
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: sub_402874 at 0x402874
void sub_402874(unsigned long a0, unsigned long a1)
{
 conditional_func_ptr();
 return;
}


// Function: conditional_func_ptr at 0x402880
unsigned int (*conditional_func_ptr(unsigned int a0, unsigned int a1))(unsigned int)
{
 if (!a0)
 return double_value;
 else
 return (a0 == 1 ? triple_value : recursion_factorial);
}


// Function: sub_4028e1 at 0x4028e1
void sub_4028e1(unsigned long a0, unsigned long a1)
{
 state_machine();
 return;
}


// Function: state_machine at 0x4028f0
extern unsigned int g_403068[4];

long long state_machine(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = a0;
 if (a1 > 3)
 {
 v1 = 3;
 return v1;
 }
 // Fixed: replaced invalid computed goto with switch
 switch (a1) {
 case 0: return state_idle(a0);
 case 1: return state_processing(a0);
 case 2: return state_done(a0);
 case 3: return state_error(a0);
 default: return 3;
 }
}


// Function: sub_4029b3 at 0x4029b3
void sub_4029b3(unsigned long a0, unsigned long a1)
{
 fsm_func_table();
 return;
}


// Function: fsm_func_table at 0x4029c0
extern unsigned long long (*g_405db0)(unsigned int);
extern unsigned long long (*g_405db8)(unsigned int);
extern unsigned long long (*g_405dc0)(unsigned int);
extern unsigned long long (*g_405dc8)(unsigned int);

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
 unsigned long long (*v0)(unsigned int); // [bp-0x38]
 unsigned long long (*v1)(unsigned int); // [bp-0x30]
 unsigned long long (*v2)(unsigned int); // [bp-0x28]
 unsigned long long (*v3)(unsigned int); // [bp-0x20]
 unsigned int v4; // [bp-0xc]

 v0 = (unsigned long long (*)(unsigned int))state_idle;
 v1 = (unsigned long long (*)(unsigned int))state_processing;
 v2 = (unsigned long long (*)(unsigned int))state_done;
 v3 = (unsigned long long (*)(unsigned int))state_error;
 if (a1 >= 0 && a1 < 4)
 {
 unsigned long long (*arr[])(unsigned int) = {v0, v1, v2, v3};
 v4 = (unsigned int)arr[a1](a0);
 return v4;
 }
 v4 = 3;
 return v4;
}


// Function: sub_402a34 at 0x402a34
void sub_402a34(unsigned long a0)
{
 state_idle();
 return;
}


// Function: state_idle at 0x402a40
unsigned long long state_idle(unsigned int a0)
{
 if (a0 != 1)
 return 0;
 return 1;
}


// Function: sub_402a59 at 0x402a59
void sub_402a59(unsigned long a0)
{
 state_processing();
 return;
}


// Function: state_processing at 0x402a60
unsigned int state_processing(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (a0 == 2 ? 2 : (a0 == 99 ? 3 : 1));
 return v0;
}


// Function: sub_402a9f at 0x402a9f
void sub_402a9f(unsigned long a0)
{
 state_done();
 return;
}


// Function: state_done at 0x402aa0
unsigned long long state_done(unsigned long a0)
{
 return 2;
}


// Function: sub_402aae at 0x402aae
void sub_402aae(unsigned long a0)
{
 state_error();
 return;
}


// Function: state_error at 0x402ab0
unsigned long long state_error(unsigned int a0)
{
 if (a0)
 return 3;
 return 0;
}


// Function: sub_402ac9 at 0x402ac9
void sub_402ac9(unsigned long a0, unsigned long a1)
{
 computed_goto();
 return;
}


// Function: computed_goto at 0x402ad0
extern unsigned long long g_405dd0;
extern unsigned long long g_405dd8;
extern unsigned long long g_405de0;
extern unsigned long long g_405de8;

long long computed_goto(unsigned long long a0, unsigned int a1)
{
 unsigned long v0; // [bp-0x50]
 unsigned long v1; // [bp-0x48]
 unsigned long v2; // [bp-0x40]
 unsigned long v3; // [bp-0x38]
 unsigned long v4; // [bp-0x30]
 unsigned long long v5; // [bp-0x18]
 unsigned int v6; // [bp-0xc]
 unsigned int v7; // [bp-0xc]

 v5 = a0;
 v1 = g_405dd0;
 v2 = g_405dd8;
 v3 = g_405de0;
 v4 = g_405de8;
 if (a1 < 0)
 {
 v7 = 4294967295;
 return v7;
 }
 if (a1 > 3)
 {
 v7 = 4294967295;
 return v6;
 }
 v0 = (&v1)[a1];
 // Fixed: replaced invalid goto with switch
 switch (a1) {
 case 0: goto label_0;
 case 1: goto label_1;
 case 2: goto label_2;
 case 3: goto label_3;
 default: return 4294967295;
 }
label_0:
 return v0;
label_1:
 return v0;
label_2:
 return v0;
label_3:
 return v0;
}


// Function: sub_402b39 at 0x402b39
void sub_402b39()
{
 // Empty function with no parameters
}


// Function: sub_402b45 at 0x402b45
void sub_402b45()
{
 // Empty function with no parameters
}


// Function: sub_402b51 at 0x402b51
void sub_402b51()
{
 // Empty function with no parameters
}


// Function: sub_402b5d at 0x402b5d
void sub_402b5d()
{
 // Empty function with no parameters
}


// Function: sub_402b6f at 0x402b6f
void sub_402b6f(unsigned long a0)
{
 obfuscated_cf();
 return;
}


// Function: obfuscated_cf at 0x402b70
unsigned int obfuscated_cf(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]

 v0 = a0;
 if (a0 * a0 + 1 < 0)
 v0 = v0 * 2 + 1;
 v0 *= 2;
 return v0;
}


// Function: sub_402baa at 0x402baa
void sub_402baa(unsigned long a0)
{
 opaque_predicate();
 return;
}


// Function: opaque_predicate at 0x402bb0
unsigned int opaque_predicate(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0xc]

 v0 = a0 * 305419896 & 1;
 v1 = (!v0 ? a0 * 2 : a0 * 3);
 return v1;
}


// Function: sub_402beb at 0x402beb
void sub_402beb(unsigned long a0)
{
 overlapped_code();
 return;
}


// Function: overlapped_code at 0x402bf0
unsigned int overlapped_code(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 // Fixed: replaced invalid CONCAT with proper 64-bit handling
 unsigned long long combined = ((unsigned long long)a0 << 32) | a0;
 v0 = (!(a0 & 1) ? (unsigned int)(combined & 1) : a0 * 3 + 1);
 return v0;
}


// Function: sub_402c28 at 0x402c28
void sub_402c28()
{
 test_control_flow_l3();
 return;
}


// Function: test_control_flow_l3 at 0x402c30
extern char g_403546[];

int test_control_flow_l3()
{
 unsigned long v0; // [bp-0x18]
 unsigned long long v1; // [bp-0x10]

 printf("%s\n", g_403546);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
 printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(5) & 4294967295);
 printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(4294967291) & 4294967295);
 printf("CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5) & 4294967295);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5) & 4294967295);
 printf("CF-L3-05 (state_machine): %d\n", state_machine(1, 0) & 4294967295);
 printf("CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1) & 4294967295);
 v0 = 0x100000000;
 v1 = 12884901890;
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto(&v0, 2) & 4294967295);
 printf("CF-L3-08 (obfuscated_cf): %d\n", obfuscated_cf(5) & 4294967295);
 printf("CF-L3-09 (opaque_predicate): %d\n", opaque_predicate(5) & 4294967295);
 return printf("CF-L3-10 (overlapped_code): %d\n", overlapped_code(5) & 4294967295);
}


// Function: sub_402dae at 0x402dae
void sub_402dae()
{
 main();
 return;
}


// Function: main at 0x402db0
unsigned int main()
{
 unsigned int result; // [bp-0xc]

 result = 0;
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


