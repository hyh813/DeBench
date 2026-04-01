/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/1/1_clang_O2_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdbool.h>
#include <setjmp.h>

/* Macro definitions for decompiled code */
#define JUMPOUT(x) return

/* Forward declarations */
int call_weak_fn(void);
int double_value(int x);
int triple_value(int x);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_and(int a, int b);
int op_or(int a, int b);
int op_xor(int a, int b);
int op_shl(int a, int b);
int op_shr(int a, int b);

/* Global data declarations */
int dword_1E2C[] = {10, 20, 30, 50};
int dword_1E3C[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int dword_1E6C[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
char asc_1DBD[] = "Control Flow Tests - Level 1";
char asc_1DE1[] = "Control Flow Tests - Level 2";
char asc_1E05[] = "Control Flow Tests - Level 3";
jmp_buf jump_buffer;
int (*off_12EBC[])(int) = {double_value, triple_value, double_value};
int (*off_12EC8[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod, op_and, op_or, op_xor, op_shl, op_shr};

/* Function: .init_proc @ 0x4D0 */
int init_proc()
{
 return call_weak_fn();
}

/* Function: call_weak_fn - CRT stub */
int call_weak_fn(void)
{
 return 0;
}


/* Function: sub_4DC @ 0x4DC */
void sub_4DC()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: sequential_ops @ 0x6C4 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (b + a) - c;
}


/* Function: single_if @ 0x6D0 */
int single_if(int x)
{
 return x << (x > 0);
}


/* Function: if_else @ 0x6E4 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x6F8 */
int nested_if_2(int a, int b)
{
 int v2; // r2

 v2 = a;
 if ( b > 0 )
 v2 = a + b;
 if ( a <= 0 )
 return 0;
 return v2;
}


/* Function: nested_if_deep @ 0x714 */
int nested_if_deep(int a, int b, int c, int d, int e)
{
 int result; // r0

 if ( a < 1 )
 return 0;
 if ( b < 1 )
 return 1;
 if ( c < 1 )
 return 2;
 if ( d < 1 )
 return 3;
 result = 4;
 if ( e > 0 )
 return 5;
 return result;
}


/* Function: if_elseif_chain @ 0x758 */
int if_elseif_chain(int x)
{
 int v1; // r1

 v1 = -1;
 if ( (unsigned int)x < 3 )
 return 10 * x + 10;
 return v1;
}


/* Function: if_elseif_long @ 0x774 */
int if_elseif_long(int x)
{
 int v1; // r1

 v1 = -1;
 if ( (unsigned int)x < 5 )
 return 100 * x + 100;
 return v1;
}


/* Function: switch_small @ 0x790 */
int switch_small(int op)
{
 int result; // r0

 result = -1;
 if ( (unsigned int)op <= 3 )
 return dword_1E2C[op];
 return result;
}


/* Function: switch_large @ 0x7B0 */
int switch_large(int op)
{
 int v1; // r1

 v1 = -1;
 if ( (unsigned int)op < 0xA )
 return 10 * op;
 return v1;
}


/* Function: switch_default @ 0x7C8 */
int switch_default(int op)
{
 unsigned int v1; // r1
 int v2; // r2
 int result; // r0

 v1 = op - 1;
 v2 = 100 * (op - 1);
 result = 0;
 if ( v1 < 3 )
 return v2 + 100;
 return result;
}


/* Function: switch_fallthrough @ 0x7E4 */
int switch_fallthrough(int op)
{
 int v1; // r1
 int v2; // r1

 v1 = 0;
 if ( op == 1 )
 return v1 + op;
 if ( op == 2 )
 {
LABEL_5:
 v1 += 2 * op;
 return v1 + op;
 }
 v2 = -1;
 if ( op == 3 )
 {
 v1 = 12;
 goto LABEL_5;
 }
 return v2;
}


/* Function: loop_for_fixed @ 0x818 */
int loop_for_fixed(int n)
{
 if ( n >= 1 )
 return ((long long)((unsigned int)(n - 1) * (unsigned long long)(unsigned int)(n - 2)) >> 1) + n - 1;
 else
 return 0;
}


/* Function: loop_while @ 0x848 */
int loop_while(int x)
{
 int result; // r0
 int v2; // r1
 int v3; // cc

 if ( !x )
 return 1;
 v2 = x;
 result = 0;
 do
 {
 ++result;
 v3 = (unsigned int)(v2 + 9) > 0x12;
 v2 /= 10;
 }
 while ( v3 );
 return result;
}


/* Function: loop_dowhile @ 0x888 */
int loop_dowhile(int x)
{
 int result; // r0
 int v3; // cc

 result = 0;
 do
 {
 ++result;
 v3 = (unsigned int)(x + 9) > 0x12;
 x /= 10;
 }
 while ( v3 );
 return result;
}


/* Function: loop_nested @ 0x8BC */
int loop_nested(int m, int n)
{
 int v2; // r2
 int v3; // r1

 v2 = n & ~(n >> 31);
 v3 = 0;
 if ( m > 0 )
 return v2 * m;
 return v3;
}


/* Function: loop_break @ 0x8D4 */
int loop_break(int target)
{
 int v1; // r1
 int result; // r0

 v1 = target - 10;
 result = 0;
 switch ( v1 )
 {
 case 0:
 return result;
 case 10:
 result = 1;
 break;
 case 20:
 result = 2;
 break;
 case 30:
 result = 3;
 break;
 case 40:
 result = 4;
 break;
 default:
 result = -1;
 break;
 }
 return result;
}


/* Function: loop_continue @ 0x9BC */
int loop_continue(int n)
{
 int v1; // r2
 int v2; // r1

 if ( n < 1 )
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 if ( (++v1 & 1) != 0 )
 v2 += v1;
 }
 while ( n != v1 );
 return v2;
}


/* Function: goto_forward @ 0x9F4 */
int goto_forward(int x)
{
 int v1; // r1

 v1 = x;
 if ( x <= 1 )
 v1 = 1;
 return 2 * x * v1;
}


/* Function: goto_backward @ 0xA0C */
int goto_backward(int x)
{
 int v2; // r3
 int i; // r2
 int v4; // r1

 if ( x < 1 )
 return 1;
 v2 = 1;
 v4 = 1;
 for ( i = 1; i <= x; i++ )
 {
 v4 = i * v2;
 v2 = v4;
 }
 return v4;
}


/* Function: ternary_op @ 0xA3C */
int ternary_op(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: test_control_flow_l1 @ 0xA48 */
void test_control_flow_l1()
{
 puts(asc_1DBD);
 printf("CF-L1-01 (sequential_ops): %d\n", 21);
 printf("CF-L1-02 (single_if): %d\n", 20);
 printf("CF-L1-02 (single_if): %d\n", -5);
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
 printf("CF-L1-16 (loop_break): %d\n", -1);
 printf("CF-L1-17 (loop_continue): %d\n", 25);
 printf("CF-L1-18 (goto_forward): %d\n", 50);
 printf("CF-L1-18 (goto_forward): %d\n", -6);
 printf("CF-L1-19 (goto_backward): %d\n", 120);
 printf("CF-L1-20 (ternary_op): %d\n", 10);
 printf("CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0xC5C */
int loop_multi_exit(int target)
{
 unsigned int v1; // r1
 int result; // r0

 v1 = target - 1;
 result = -1;
 if ( v1 <= 0xB )
 return dword_1E6C[v1] + dword_1E3C[v1];
 return result;
}


/* Function: infinite_loop @ 0xC94 */
int infinite_loop(volatile int *flag)
{
 int v2; // r2
 int result; // r0

 v2 = 0;
 result = 1001;
 do
 {
 if ( *flag == 1 )
 return v2;
 ++v2;
 }
 while ( v2 != 1001 );
 *flag = 1;
 return result;
}


/* Function: multi_return @ 0xCCC */
int multi_return(int x)
{
 int result; // r0

 if ( x < 0 )
 return -1;
 result = -2;
 if ( (unsigned int)x <= 0x32 )
 {
 result = x + 1;
 if ( (x & 1) == 0 )
 return 2 * x;
 }
 return result;
}


/* Function: conditional_return @ 0xCF8 */
int conditional_return(int x)
{
 int v1; // r1

 v1 = -x;
 if ( x > 0 )
 return 2 * x;
 return v1;
}


/* Function: duffs_device @ 0xD0C */
int duffs_device(int *dst, int *src, int n)
{
 int count = (n + 7) / 8;
 switch (n % 8)
 {
 case 0: do { *dst++ = *src++;
 case 7: *dst++ = *src++;
 case 6: *dst++ = *src++;
 case 5: *dst++ = *src++;
 case 4: *dst++ = *src++;
 case 3: *dst++ = *src++;
 case 2: *dst++ = *src++;
 case 1: *dst++ = *src++;
 } while (--count > 0);
 }
 return n;
}


/* Function: loop_complex_cond @ 0xDAC */
int loop_complex_cond(int x)
{
 unsigned int v1; // r3
 unsigned int v2; // r2
 int v3; // r1
 unsigned int v4; // r12
 int v5; // cf

 if ( x < 1 )
 {
 v3 = 0;
 v4 = 0;
 }
 else
 {
 v1 = 0;
 v2 = x;
 v3 = 0;
 v4 = 0;
 do
 {
 v3 += 2;
 v4 = v1 + 1;
 x = v2 - 1;
 if ( v2 < 2 )
 break;
 if ( v3 >= x )
 break;
 v5 = v1++ >= 9;
 --v2;
 }
 while ( !v5 );
 }
 return x + v3 + v4;
}


/* Function: loop_modify_var @ 0xE04 */
int loop_modify_var(int n)
{
 int v1; // r2
 int v2; // r1

 if ( n < 1 )
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += v1;
 if ( v1 > 5 )
 v1 += 2;
 ++v1;
 }
 while ( v1 < n );
 return v2;
}


/* Function: loop_external_state @ 0xE40 */
int loop_external_state(volatile int *flag)
{
 int result; // r0

 result = 0;
 while ( !*flag )
 {
 if ( ++result == 101 )
 return 101;
 }
 return result;
}


/* Function: recursion_factorial @ 0xE68 */
int recursion_factorial(int n)
{
 int v1; // r1
 int v2; // r2
 int v3; // cc

 v1 = 1;
 if ( n >= 2 )
 {
 v2 = 1;
 do
 {
 v1 = n * v2;
 v3 = (unsigned int)n-- > 2;
 v2 = v1;
 }
 while ( v3 );
 }
 return v1;
}


/* Function: tail_recursion @ 0xE98 */
int tail_recursion(int n, int acc)
{
 int v3; // r2
 int v4; // cc

 if ( n < 2 )
 return acc;
 do
 {
 v3 = acc * n;
 v4 = (unsigned int)n > 2;
 acc *= n--;
 }
 while ( v4 );
 return v3;
}


/* Function: indirect_recursion_a @ 0xEC4 */
int indirect_recursion_a(int n, int depth)
{
 int i; // r1
 int v3; // r0

 if ( depth >= 1 )
 {
 for ( i = depth + 2; i >= 3; i -= 2 )
 {
 if ( (n & 1) != 0 )
 {
 v3 = 3 * n;
 if ( i == 3 )
 return v3 + 1;
 n = v3 + 2;
 }
 else
 {
 n /= 2;
 if ( i == 3 )
 return n;
 ++n;
 }
 }
 }
 return n;
}


/* Function: call_func_ptr @ 0xF1C */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0xF28 */
int call_func_ptr_array(int idx, int x)
{
 if ( (unsigned int)idx <= 2 )
 return ((int ( *)(int))off_12EBC[idx])(x);
 else
 return -1;
}


/* Function: double_value @ 0xF4C */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0xF54 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: call_virtual_func @ 0xF5C */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0xF64 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int v4; // r5
 int v6; // r6
 int v7; // t1

 if ( n < 1 )
 return 0;
 v4 = n;
 v6 = 0;
 do
 {
 v7 = *arr++;
 v6 += cb(v7);
 --v4;
 }
 while ( v4 );
 return v6;
}


/* Function: test_control_flow_l2 @ 0xFAC */
void test_control_flow_l2()
{
 int i; // r0
 unsigned int v1; // r5
 int v2; // r6
 int v3; // r0
 int v4; // r1
 int j; // r1

 puts(asc_1DE1);
 printf("CF-L2-01 (loop_multi_exit): %d\n", 12);
 for ( i = 0; i != 1001; ++i )
 ;
 printf("CF-L2-02 (infinite_loop): %d\n", 1001);
 v1 = -1;
 printf("CF-L2-03 (multi_return): %d\n", -1);
 printf("CF-L2-03 (multi_return): %d\n", -2);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v2 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 printf("CF-L2-05 (duffs_device): %d\n", 8);
 v3 = 11;
 do
 {
 v4 = v2 + 2;
 if ( v2 - 8 >= (unsigned int)(v3 - 2) )
 break;
 ++v1;
 --v3;
 v2 += 2;
 }
 while ( v1 < 9 );
 printf("CF-L2-06 (loop_complex_cond): %d\n", v4);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 for ( j = 0; j != 101; ++j )
 ;
 printf("CF-L2-08 (loop_external_state): %d\n", 101);
 printf("CF-L2-09 (recursion_factorial): %d\n", 120);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 printf("CF-L2-11 (indirect_recursion): %d\n", 3);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
 printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


/* Function: non_local_jump @ 0x11A4 */
int non_local_jump(int x)
{
 bool v2; // zf
 int result; // r0

 v2 = setjmp(&jump_buffer) == 0;
 result = -1;
 if ( v2 )
 {
 if ( x <= -1 )
 longjmp(&jump_buffer, 1);
 if ( (unsigned int)x >= 0x65 )
 longjmp(&jump_buffer, 2);
 return 2 * x;
 }
 return result;
}


/* Function: cpp_exception @ 0x1218 */
int cpp_exception(int x)
{
 int v1; // r1

 v1 = 2 * x;
 if ( x > 100 )
 v1 = -2;
 if ( x <= -1 )
 return -1;
 return v1;
}


/* Function: large_jump_table @ 0x1234 */
int large_jump_table(int op, int a, int b)
{
 if ( (unsigned int)op <= 9 )
 return ((int ( *)(int, int))off_12EC8[op])(a, b);
 else
 return -1;
}


/* Function: op_add @ 0x125C */
int op_add(int a, int b)
{
 return b + a;
}


/* Function: op_sub @ 0x1264 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x126C */
int op_mul(int a, int b)
{
 return b * a;
}


/* Function: op_div @ 0x1278 */
int op_div(int a, int b)
{
 if ( b )
 return a / b;
 else
 return 0;
}


/* Function: op_mod @ 0x1294 */
int op_mod(int a, int b)
{
 if ( b )
 return a % b;
 else
 return 0;
}


/* Function: op_and @ 0x12B4 */
int op_and(int a, int b)
{
 return b & a;
}


/* Function: op_or @ 0x12BC */
int op_or(int a, int b)
{
 return b | a;
}


/* Function: op_xor @ 0x12C4 */
int op_xor(int a, int b)
{
 return b ^ a;
}


/* Function: op_shl @ 0x12CC */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x12D4 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: conditional_func_ptr @ 0x12DC */
int conditional_func_ptr(int mode, int x)
{
 int ( *v2)(int); // r3
 int ( *v3)(int); // r2

 v2 = recursion_factorial;
 if ( mode == 1 )
 v2 = triple_value;
 v3 = double_value;
 if ( mode )
 v3 = v2;
 return v3(x);
}


/* Function: state_machine @ 0x1318 */
int state_machine(int event, int state)
{
 int v2; // r1

 switch ( state )
 {
 case 0:
 event = event == 1;
 break;
 case 1:
 v2 = 1;
 if ( event == 99 )
 v2 = 3;
 if ( event == 2 )
 v2 = 2;
 event = v2;
 break;
 case 2:
 goto LABEL_4;
 case 3:
 if ( event )
 event = 3;
 break;
 default:
 state = 3;
LABEL_4:
 event = state;
 break;
 }
 return event;
}


/* Function: fsm_func_table @ 0x1380 */
int fsm_func_table(int event, int state)
{
 int v2; // r1

 switch ( state )
 {
 case 0:
 event = event == 1;
 break;
 case 1:
 v2 = 1;
 if ( event == 99 )
 v2 = 3;
 if ( event != 2 )
 event = v2;
 break;
 case 2:
 event = 2;
 break;
 case 3:
 if ( event )
 event = 3;
 break;
 default:
 event = 3;
 break;
 }
 return event;
}


/* Function: computed_goto @ 0x13DC */
int computed_goto(int *labels, int idx)
{
 int result; // r0

 switch ( idx )
 {
 case 0:
 result = 0;
 break;
 case 1:
 result = 10;
 break;
 case 2:
 result = 20;
 break;
 case 3:
 result = 30;
 break;
 }
 return result;
}


/* Function: obfuscated_cf @ 0x141C */
int obfuscated_cf(int x)
{
 return 2 * x;
}


/* Function: opaque_predicate @ 0x1424 */
int opaque_predicate(int x)
{
 return 2 * x;
}


/* Function: overlapped_code @ 0x142C */
int overlapped_code(int x)
{
 int v1; // r1

 v1 = 3 * x + 1;
 if ( (x & 1) == 0 )
 return x / 2;
 return v1;
}


/* Function: test_control_flow_l3 @ 0x1448 */
void test_control_flow_l3()
{
 int v0; // r0
 int v1; // r0
 int *v2; // r0
 int v3; // r0

 puts(asc_1E05);
 v0 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n", v1);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", -1);
 printf("CF-L3-03 (large_jump_table): %d\n", 15);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 v2 = (int *)printf("CF-L3-06 (fsm_func_table): %d\n", 2);
 v3 = computed_goto(v2, 2);
 printf("CF-L3-07 (computed_goto): %d\n", v3);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x1560 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */



/* Function: .term_proc @ 0x17CC */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_raise @ 0x13214 */

/* FAILED to decompile: __imp___libc_start_main @ 0x13218 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x1321C */

/* FAILED to decompile: __imp_printf @ 0x13220 */

/* FAILED to decompile: __imp_longjmp @ 0x13224 */

/* FAILED to decompile: __imp__setjmp @ 0x13228 */

/* FAILED to decompile: __imp_puts @ 0x1322C */

/* FAILED to decompile: __imp_abort @ 0x13230 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x13238 */

/* Total functions decompiled: 74, failed: 9 */
