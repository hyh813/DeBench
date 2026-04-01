/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/1/1_clang_O1_g
 * Processor: arm
 */

#include <stdio.h>
#include <setjmp.h>

/* Define bool for C89 compatibility */
typedef int bool;
#define true 1
#define false 0

/* String literals - defined locally */
static const char asc_1F0D[] = "Control Flow Tests - Level 1\n";
static const char asc_1F31[] = "Control Flow Tests - Level 2\n";
static const char asc_1F55[] = "Control Flow Tests - Level 3\n";

/* Data arrays - defined locally */
static int dword_1974[] = {1, 2, 3, 4, 5};
static int dword_1988[12] = {0};
static int off_12EC8[10] = {0};
static int off_12EF0[4] = {0};

/* Jump buffer for non-local jumps */
jmp_buf jump_buffer;





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
 int v1; // r1
 int result; // r0
 bool v3; // cc

 if ( x )
 {
 v1 = x;
 result = 0;
 do
 {
 ++result;
 v3 = (unsigned int)(v1 + 9) > 0x12;
 v1 /= 10;
 }
 while ( v3 );
 }
 else
 {
 result = 0;
 }
 if ( !result )
 return 1;
 return result;
}


/* Function: loop_dowhile @ 0x894 */
int loop_dowhile(int x)
{
 int result; // r0
 bool v3; // cc

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


/* Function: loop_nested @ 0x8C8 */
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


/* Function: loop_break @ 0x8E0 */
int loop_break(int target)
{
 int result; // r0

 result = 0;
 while ( dword_1974[result] != target )
 {
 if ( ++result == 5 )
 return -1;
 }
 return result;
}


/* Function: loop_continue @ 0x914 */
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


/* Function: goto_forward @ 0x94C */
int goto_forward(int x)
{
 int v1; // r1

 v1 = x;
 if ( x <= 1 )
 v1 = 1;
 return 2 * x * v1;
}


/* Function: goto_backward @ 0x964 */
int goto_backward(int x)
{
 int v2; // r3
 int i; // r2
 int v4; // r1

 if ( x < 1 )
 return 1;
 v2 = 1;
 for ( i = 0; i != x; v2 *= i )
 v4 = ++i * v2;
 return v4;
}


/* Function: ternary_op @ 0x994 */
int ternary_op(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: test_control_flow_l1 @ 0x9A0 */
void test_control_flow_l1()
{
 puts(asc_1F0D);
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


/* Function: loop_multi_exit @ 0xBB8 */
int loop_multi_exit(int target)
{
 int v1; // lr
 int v2; // r2
 unsigned int *v3; // r3
 int v4; // r6
 int v5; // r4
 int v6; // r5
 int v7; // r5
 int v8; // r4

 v2 = 0;
 v3 = dword_1988;
 do
 {
 v4 = 1;
 v5 = 1;
 v6 = 0;
 if ( dword_1988[4 * v2] == target )
 {
LABEL_7:
 v1 = v6 + 10 * v2;
 if ( v5 )
 goto LABEL_10;
 }
 else
 {
 v7 = 1;
 while ( v7 != 4 )
 {
 v8 = v3[v7++];
 if ( v8 == target )
 {
 v5 = (unsigned int)(v7 - 2) < 3;
 v6 = v7 - 1;
 goto LABEL_7;
 }
 }
 }
 v3 += 4;
 ++v2;
 }
 while ( v2 != 3 );
 v4 = 2;
LABEL_10:
 if ( v4 == 2 )
 return -1;
 return v1;
}


/* Function: infinite_loop @ 0xC70 */
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


/* Function: multi_return @ 0xCA8 */
int multi_return(int x)
{
 int result; // r0

 if ( x < 0 )
 return -1;
 result = -2;
 if ( x <= 50 )
 {
 result = x + 1;
 if ( (x & 1) == 0 )
 return 2 * x;
 }
 return result;
}


/* Function: conditional_return @ 0xCD4 */
int conditional_return(int x)
{
 int v1; // r1

 v1 = -x;
 if ( x > 0 )
 return 2 * x;
 return v1;
}


/* Function: duffs_device @ 0xCE8 */
int duffs_device(int *dst, int *src, int n)
{
 int v3; // r3
 int v4; // r4
 int v5; // t1
 int v6; // t1
 int v7; // t1
 int v8; // t1
 int v9; // t1
 int v10; // t1
 int v11; // t1
 int v12; // t1

 v3 = -1;
 if ( n >= 1 )
 {
 v4 = (n + 7) / 8;
 switch ( n % 8 )
 {
 case 0:
 goto LABEL_3;
 case 1:
 goto LABEL_10;
 case 2:
 goto LABEL_9;
 case 3:
 goto LABEL_8;
 case 4:
 goto LABEL_7;
 case 5:
 goto LABEL_6;
 case 6:
 goto LABEL_5;
 case 7:
 while ( 1 )
 {
 v6 = *src++;
 *dst++ = v6;
LABEL_5:
 v7 = *src++;
 *dst++ = v7;
LABEL_6:
 v8 = *src++;
 *dst++ = v8;
LABEL_7:
 v9 = *src++;
 *dst++ = v9;
LABEL_8:
 v10 = *src++;
 *dst++ = v10;
LABEL_9:
 v11 = *src++;
 *dst++ = v11;
LABEL_10:
 v12 = *src++;
 *dst++ = v12;
 if ( v4-- <= 1 )
 break;
LABEL_3:
 v5 = *src++;
 *dst++ = v5;
 }
 break;
 default:
 return n;
 }
 return n;
 }
 return v3;
}


/* Function: loop_complex_cond @ 0xDA4 */
int loop_complex_cond(int x)
{
 unsigned int v1; // r3
 int v2; // r2
 int v3; // r1
 unsigned int v4; // r12
 bool v5; // cf

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


/* Function: loop_modify_var @ 0xDFC */
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


/* Function: loop_external_state @ 0xE38 */
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


/* Function: recursion_factorial @ 0xE60 */
int recursion_factorial(int n)
{
 int result; // r0

 result = 1;
 if ( n >= 2 )
 return recursion_factorial(n - 1) * n;
 return result;
}


/* Function: tail_recursion @ 0xE8C */
int tail_recursion(int n, int acc)
{
 int v2; // r2

 v2 = acc;
 if ( n >= 2 )
 return tail_recursion(n - 1, acc * n);
 return v2;
}


/* Function: indirect_recursion_a @ 0xEB8 */
int indirect_recursion_a(int n, int depth)
{
 int v2; // r0
 int v3; // r0

 if ( depth >= 1 )
 {
 if ( (n & 1) != 0 )
 {
 v3 = 3 * n;
 if ( depth < 2 )
 return v3 + 1;
 v2 = v3 + 2;
 }
 else
 {
 n /= 2;
 if ( depth < 2 )
 return n;
 v2 = n + 1;
 }
 return indirect_recursion_a(v2, depth - 2);
 }
 return n;
}


/* Function: call_func_ptr @ 0xF08 */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0xF24 */
// NOTE: Function removed - references undefined CRT stub symbol off_12EBC


/* Function: double_value @ 0xF5C */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0xF64 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: call_virtual_func @ 0xF6C */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0xF74 */
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


/* Function: test_control_flow_l2 @ 0xFBC */
void test_control_flow_l2()
{
 int v0; // r1
 int v1; // r0
 unsigned int *v2; // r2
 int i; // r3
 int v4; // r6
 int v5; // r5
 int v6; // r5
 int v7; // r6
 int j; // r0
 unsigned int v9; // r5
 int v10; // r6
 int v11; // r0
 int v12; // r1
 int k; // r1
 int v14; // r0
 int v15; // r0
 int v16; // r0
 int v17; // r0

 puts(asc_1F31);
 v1 = 0;
 v2 = dword_1988;
 for ( i = 0; i != 3; ++i )
 {
 v4 = 1;
 while ( v4 != 4 )
 {
 v5 = v2[v4++];
 if ( v5 == 7 )
 {
 v0 = ~v1 + v4;
 v6 = (unsigned int)(v4 - 2) < 3;
 v7 = 1;
 if ( v6 )
 goto LABEL_8;
 break;
 }
 }
 v2 += 4;
 v1 -= 10;
 }
 v7 = 2;
LABEL_8:
 if ( v7 == 2 )
 v0 = -1;
 printf("CF-L2-01 (loop_multi_exit): %d\n", v0);
 for ( j = 0; j != 1001; ++j )
 ;
 printf("CF-L2-02 (infinite_loop): %d\n", 1001);
 v9 = -1;
 printf("CF-L2-03 (multi_return): %d\n", -1);
 printf("CF-L2-03 (multi_return): %d\n", -2);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v10 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 printf("CF-L2-05 (duffs_device): %d\n", 8);
 v11 = 11;
 do
 {
 v12 = v10 + 2;
 if ( v10 - 8 >= (unsigned int)(v11 - 2) )
 break;
 ++v9;
 --v11;
 v10 += 2;
 }
 while ( v9 < 9 );
 printf("CF-L2-06 (loop_complex_cond): %d\n", v12);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 for ( k = 0; k != 101; ++k )
 ;
 printf("CF-L2-08 (loop_external_state): %d\n", 101);
 v14 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n", v14);
 v15 = tail_recursion(5, 1);
 printf("CF-L2-10 (tail_recursion): %d\n", v15);
 v16 = indirect_recursion_a(10, 3);
 printf("CF-L2-11 (indirect_recursion): %d\n", v16);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 v17 = recursion_factorial(5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", v17);
 printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


/* Function: non_local_jump @ 0x1270 */
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
 if ( x >= 101 )
 longjmp(&jump_buffer, 2);
 return 2 * x;
 }
 return result;
}


/* Function: cpp_exception @ 0x12E4 */
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


/* Function: large_jump_table @ 0x1300 */
int large_jump_table(int op, int a, int b)
{
 int result; // r0

 result = -1;
 if ( (unsigned int)op <= 9 )
 return ((int ( *)(int, int))off_12EC8[op])(a, b);
 return result;
}


/* Function: op_add @ 0x133C */
int op_add(int a, int b)
{
 return b + a;
}


/* Function: op_sub @ 0x1344 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x134C */
int op_mul(int a, int b)
{
 return b * a;
}


/* Function: op_div @ 0x1358 */
int op_div(int a, int b)
{
 if ( b )
 return a / b;
 else
 return 0;
}


/* Function: op_mod @ 0x1374 */
int op_mod(int a, int b)
{
 if ( b )
 return a % b;
 else
 return 0;
}


/* Function: op_and @ 0x1394 */
int op_and(int a, int b)
{
 return b & a;
}


/* Function: op_or @ 0x139C */
int op_or(int a, int b)
{
 return b | a;
}


/* Function: op_xor @ 0x13A4 */
int op_xor(int a, int b)
{
 return b ^ a;
}


/* Function: op_shl @ 0x13AC */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x13B4 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: conditional_func_ptr @ 0x13BC */
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


/* Function: state_machine @ 0x1408 */
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


/* Function: fsm_func_table @ 0x1470 */
int fsm_func_table(int event, int state)
{
 int v2; // r2

 v2 = 3;
 if ( (unsigned int)state <= 3 )
 return ((int ( *)(int))off_12EF0[state])(event);
 return v2;
}


/* Function: state_idle @ 0x14A8 */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x14B8 */
int state_processing(int event)
{
 int v1; // r1

 v1 = 1;
 if ( event == 99 )
 v1 = 3;
 if ( event != 2 )
 return v1;
 return event;
}


/* Function: state_done @ 0x14D0 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x14D8 */
int state_error(int event)
{
 if ( event )
 return 3;
 return event;
}


/* Function: computed_goto @ 0x14E4 */
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


/* Function: obfuscated_cf @ 0x1524 */
int obfuscated_cf(int x)
{
 return 2 * x;
}


/* Function: opaque_predicate @ 0x152C */
int opaque_predicate(int x)
{
 return 2 * x;
}


/* Function: overlapped_code @ 0x1534 */
int overlapped_code(int x)
{
 int v1; // r1

 v1 = 3 * x + 1;
 if ( (x & 1) == 0 )
 return x / 2;
 return v1;
}


/* Function: test_control_flow_l3 @ 0x1550 */
void test_control_flow_l3()
{
 int v0; // r0
 int v1; // r0
 int *v2; // r0
 int v3; // r0

 puts(asc_1F55);
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


/* Function: main @ 0x166C */
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



/* Function: .term_proc @ 0x18D8 */
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

/* Total functions decompiled: 78, failed: 9 */
