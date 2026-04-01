/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/1/1_clang_O1_g
 * Processor: pc
 */

#include <stdio.h>
#include <setjmp.h>
#include <stdbool.h>

/* Global declarations */
extern long long _gmon_start__(void);
#define LODWORD(x) ((x) & 0xFFFFFFFF)

/* Function forward declarations */
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
int state_idle(int event);
int state_processing(int event);
int state_done(int event);
int state_error(int event);

/* Global variables */
static int dword_3654[] = {0, 10, 20, 30, 40, 50};
static unsigned int unk_3040[] = {1, 2, 3, 4, 5};
static unsigned int unk_3060[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
static unsigned int unk_3064[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static int (*funcs_1967[])(int) = {double_value, triple_value, double_value};
static int (*funcs_1D09[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod, op_and, op_or, op_xor, op_shl, op_shr};
static int (*funcs_1E55[])(int) = {state_idle, state_processing, state_done, state_error};
static char s[] = "Control Flow Tests - Level 1";
static char asc_3609[] = "Control Flow Tests - Level 2";
static char asc_362D[] = "Control Flow Tests - Level 3";
static jmp_buf jump_buffer;




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: sequential_ops @ 0x1170 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x1180 */
int single_if(int x)
{
 return x << (x > 0);
}


/* Function: if_else @ 0x1190 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x11A0 */
int nested_if_2(int a, int b)
{
 int result; // eax

 if ( b < 0 )
 b = 0;
 result = b + a;
 if ( a <= 0 )
 return 0;
 return result;
}


/* Function: nested_if_deep @ 0x11B0 */
int nested_if_deep(int a, int b, int c, int d, int e)
{
 if ( a <= 0 )
 return 0;
 if ( b <= 0 )
 return 1;
 if ( c <= 0 )
 return 2;
 if ( d <= 0 )
 return 3;
 return (e > 0) | 4;
}


/* Function: if_elseif_chain @ 0x11F0 */
int if_elseif_chain(int x)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)x < 3 )
 return 10 * x + 10;
 return result;
}


/* Function: if_elseif_long @ 0x1210 */
int if_elseif_long(int x)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)x < 5 )
 return 100 * x + 100;
 return result;
}





/* Function: switch_large @ 0x1250 */
int switch_large(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op < 0xA )
 return 10 * op;
 return result;
}


/* Function: switch_default @ 0x1270 */
int switch_default(int op)
{
 unsigned int v1; // edi
 int result; // eax

 v1 = op - 1;
 result = 0;
 if ( v1 < 3 )
 return 100 * v1 + 100;
 return result;
}


/* Function: switch_fallthrough @ 0x1290 */
int switch_fallthrough(int op)
{
 int v1; // eax
 int result; // eax

 v1 = 0;
 if ( op != 1 )
 {
 if ( op != 2 )
 {
 result = -1;
 if ( op != 3 )
 return result;
 v1 = 12;
 }
 v1 += 2 * op;
 }
 return op + v1;
}


/* Function: loop_for_fixed @ 0x12C0 */
int loop_for_fixed(int n)
{
 if ( n <= 0 )
 return 0;
 else
 return (((unsigned int)(n - 1) * (unsigned long long)(unsigned int)(n - 2)) >> 1) + n - 1;
}


/* Function: loop_while @ 0x12E0 */
int loop_while(int x)
{
 int v1; // ecx
 int v2; // eax
 int result; // eax

 v1 = 0;
 if ( x )
 {
 do
 {
 v2 = x;
 x /= 10;
 ++v1;
 }
 while ( (unsigned int)(v2 + 9) > 0x12 );
 }
 result = 1;
 if ( v1 )
 return v1;
 return result;
}


/* Function: loop_dowhile @ 0x1320 */
int loop_dowhile(int x)
{
 int result; // eax
 int v2; // ecx

 result = 0;
 do
 {
 v2 = x;
 x /= 10;
 ++result;
 }
 while ( (unsigned int)(v2 + 9) > 0x12 );
 return result;
}


/* Function: loop_nested @ 0x1360 */
int loop_nested(int m, int n)
{
 int result; // eax
 int v3; // esi

 result = 0;
 if ( n <= 0 )
 n = 0;
 v3 = m * n;
 if ( m > 0 )
 return v3;
 return result;
}





/* Function: loop_continue @ 0x13A0 */
int loop_continue(int n)
{
 int v1; // edi
 int result; // eax
 int v3; // ecx
 int v4; // edx

 if ( n <= 0 )
 return 0;
 v1 = -n;
 result = 0;
 v3 = 1;
 do
 {
 result += v3 & -(v3 & 1);
 v4 = v1 + v3++ + 1;
 }
 while ( v4 != 1 );
 return result;
}


/* Function: goto_forward @ 0x13D0 */
int goto_forward(int x)
{
 int v1; // eax

 v1 = 1;
 if ( x > 0 )
 v1 = x;
 return 2 * x * v1;
}


/* Function: goto_backward @ 0x13E0 */
int goto_backward(int x)
{
 int v1; // edi
 int v2; // ecx
 int result; // eax
 int v4; // edx

 if ( x <= 0 )
 return 1;
 v1 = -x;
 v2 = 1;
 result = 1;
 do
 {
 result *= v2;
 v4 = v1 + v2++ + 1;
 }
 while ( v4 != 1 );
 return result;
}


/* Function: ternary_op @ 0x1410 */
int ternary_op(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: test_control_flow_l1 @ 0x1420 */
void test_control_flow_l1()
{
 puts(s);
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





/* Function: infinite_loop @ 0x16F0 */
int infinite_loop(volatile int *flag)
{
 int result; // eax

 result = 0;
 while ( *flag != 1 )
 {
 if ( ++result == 1001 )
 {
 *flag = 1;
 return 1001;
 }
 }
 return result;
}


/* Function: multi_return @ 0x1720 */
int multi_return(int x)
{
 int result; // eax

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


/* Function: conditional_return @ 0x1750 */
int conditional_return(int x)
{
 int result; // eax

 result = -x;
 if ( x > 0 )
 return 2 * x;
 return result;
}


/* Function: duffs_device @ 0x1760 */
int duffs_device(int *dst, int *src, int n)
{
 int result; // eax
 int v4; // eax
 int v5; // eax
 int v6; // ecx
 int v7; // ecx
 int v8; // ecx
 int v9; // ecx
 int v10; // ecx
 int v11; // ecx
 int v12; // ecx
 int v13; // ecx

 result = -1;
 if ( n > 0 )
 {
 v4 = n + 14;
 if ( n + 7 >= 0 )
 v4 = n + 7;
 v5 = v4 >> 3;
 switch ( n - (n & 0xFFFFFFF8) )
 {
 case 0u:
 goto LABEL_5;
 case 1u:
 goto LABEL_12;
 case 2u:
 goto LABEL_11;
 case 3u:
 goto LABEL_10;
 case 4u:
 goto LABEL_9;
 case 5u:
 goto LABEL_8;
 case 6u:
 goto LABEL_7;
 case 7u:
 while ( 1 )
 {
 v7 = *src++;
 *dst++ = v7;
LABEL_7:
 v8 = *src++;
 *dst++ = v8;
LABEL_8:
 v9 = *src++;
 *dst++ = v9;
LABEL_9:
 v10 = *src++;
 *dst++ = v10;
LABEL_10:
 v11 = *src++;
 *dst++ = v11;
LABEL_11:
 v12 = *src++;
 *dst++ = v12;
LABEL_12:
 v13 = *src++;
 *dst++ = v13;
 if ( v5-- <= 1 )
 break;
LABEL_5:
 v6 = *src++;
 *dst++ = v6;
 }
 break;
 default:
 return n;
 }
 return n;
 }
 return result;
}


/* Function: loop_complex_cond @ 0x1810 */
int loop_complex_cond(int x)
{
 unsigned int v1; // edx
 int v2; // eax
 int v3; // esi
 unsigned int v4; // ecx

 if ( x <= 0 )
 {
 v2 = 0;
 v4 = 0;
 }
 else
 {
 v1 = 0;
 v2 = 0;
 do
 {
 v3 = x;
 v2 += 2;
 --x;
 v4 = v1 + 1;
 if ( v3 < 2 )
 break;
 if ( v2 >= x )
 break;
 }
 while ( v1++ < 9 );
 }
 return v4 + x + v2;
}


/* Function: loop_modify_var @ 0x1850 */
int loop_modify_var(int n)
{
 int v1; // ecx
 int result; // eax
 int v3; // edx

 if ( n <= 0 )
 return 0;
 v1 = 0;
 result = 0;
 do
 {
 result += v1;
 v3 = v1 + 2;
 if ( v1 < 6 )
 v3 = v1;
 v1 = v3 + 1;
 }
 while ( v3 + 1 < n );
 return result;
}


/* Function: loop_external_state @ 0x1880 */
int loop_external_state(volatile int *flag)
{
 int result; // eax

 result = 0;
 while ( !*flag )
 {
 if ( ++result == 101 )
 return 101;
 }
 return result;
}


/* Function: recursion_factorial @ 0x18B0 */
int recursion_factorial(int n)
{
 int result; // eax

 result = 1;
 if ( n >= 2 )
 return n * recursion_factorial(n - 1);
 return result;
}


/* Function: tail_recursion @ 0x18D0 */
int tail_recursion(int n, int acc)
{
 int result; // eax

 result = acc;
 if ( n >= 2 )
 return tail_recursion(n - 1, n * acc);
 return result;
}


/* Function: indirect_recursion_a @ 0x18F0 */
int indirect_recursion_a(int n, int depth)
{
 int result; // eax
 int v3; // eax

 result = n;
 if ( depth > 0 )
 {
 if ( (n & 1) != 0 )
 {
 if ( depth < 2 )
 return 3 * n + 1;
 v3 = 3 * n + 2;
 }
 else
 {
 result = n / 2;
 if ( depth < 2 )
 return result;
 v3 = result + 1;
 }
 return indirect_recursion_a(v3, depth - 2);
 }
 return result;
}


/* Function: call_func_ptr @ 0x1940 */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x1950 */
int call_func_ptr_array(int idx, int x)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)idx <= 2 )
 return ((int ( *)(int))funcs_1967[idx])(x);
 return result;
}


/* Function: double_value @ 0x1970 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x1980 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: call_virtual_func @ 0x1990 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x19A0 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 long long v4; // rbx
 int v5; // ebp

 if ( n <= 0 )
 return 0;
 v4 = 0;
 v5 = 0;
 do
 v5 += cb(arr[v4++]);
 while ( n != v4 );
 return v5;
}


/* Function: test_control_flow_l2 @ 0x19F0 */
void test_control_flow_l2()
{
 int v0; // esi
 int v7; // edi
 int v8; // ebx
 unsigned int v9; // ebp
 int v10; // ebx
 int v11; // eax
 unsigned int v12; // ecx
 int v13; // ebp
 int v14; // eax
 int v15; // eax
 int v16; // eax
 int v17; // eax

 puts(asc_3609);
 v0 = 2;
 v7 = 1;
 v8 = 0;
 printf("CF-L2-01 (loop_multi_exit): %d\n", v0);
 do
 ++v8;
 while ( v8 != 1001 );
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
 v12 = v10 - 8;
 v10 += 2;
 if ( v12 >= v11 - 2 )
 break;
 ++v9;
 --v11;
 }
 while ( v9 < 9 );
 v13 = 0;
 printf("CF-L2-06 (loop_complex_cond): %d\n", v10);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 do
 ++v13;
 while ( v13 != 101 );
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


/* Function: non_local_jump @ 0x1C80 */
int non_local_jump(int x)
{
 int v1; // eax
 int v2; // ecx

 v1 = _setjmp(jump_buffer);
 v2 = -1;
 if ( !v1 )
 {
 if ( x < 0 )
 longjmp(jump_buffer, 1);
 if ( x >= 101 )
 longjmp(jump_buffer, 2);
 return 2 * x;
 }
 return v2;
}


/* Function: cpp_exception @ 0x1CD0 */
int cpp_exception(int x)
{
 int v1; // ecx
 int result; // eax

 v1 = -2;
 if ( x < 101 )
 v1 = 2 * x;
 result = -1;
 if ( x >= 0 )
 return v1;
 return result;
}


/* Function: large_jump_table @ 0x1CF0 */
int large_jump_table(int op, int a, int b)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 9 )
 return ((int ( *)(int, int))funcs_1D09[op])(a, b);
 return result;
}


/* Function: op_add @ 0x1D20 */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x1D30 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x1D40 */
int op_mul(int a, int b)
{
 return b * a;
}


/* Function: op_div @ 0x1D50 */
int op_div(int a, int b)
{
 if ( b )
 return a / b;
 else
 return 0;
}


/* Function: op_mod @ 0x1D60 */
int op_mod(int a, int b)
{
 if ( b )
 return a % b;
 else
 return 0;
}


/* Function: op_and @ 0x1D70 */
int op_and(int a, int b)
{
 return b & a;
}


/* Function: op_or @ 0x1D80 */
int op_or(int a, int b)
{
 return b | a;
}


/* Function: op_xor @ 0x1D90 */
int op_xor(int a, int b)
{
 return b ^ a;
}


/* Function: op_shl @ 0x1DA0 */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x1DB0 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: conditional_func_ptr @ 0x1DC0 */
int conditional_func_ptr(int mode, int x)
{
 int ( *v2)(int); // rcx
 int ( *v3)(int); // rax

 v2 = recursion_factorial;
 if ( mode == 1 )
 v2 = triple_value;
 v3 = double_value;
 if ( mode )
 v3 = v2;
 return v3(x);
}


/* Function: state_machine @ 0x1DF0 */
int state_machine(int event, int state)
{
 int result; // eax

 result = state;
 switch ( state )
 {
 case 0:
 result = event == 1;
 break;
 case 1:
 result = 2 * (event == 99) + 1;
 if ( event == 2 )
 result = 2;
 break;
 case 2:
 return result;
 case 3:
 result = 3 * (event != 0);
 break;
 default:
 result = 3;
 break;
 }
 return result;
}


/* Function: fsm_func_table @ 0x1E40 */
int fsm_func_table(int event, int state)
{
 int result; // eax

 result = 3;
 if ( (unsigned int)state <= 3 )
 return ((int ( *)(int))funcs_1E55[state])(event);
 return result;
}


/* Function: state_idle @ 0x1E60 */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x1E70 */
int state_processing(int event)
{
 int result; // eax

 result = 2 * (event == 99) + 1;
 if ( event == 2 )
 return 2;
 return result;
}


/* Function: state_done @ 0x1E90 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x1EA0 */
int state_error(int event)
{
 return 3 * (event != 0);
}


/* Function: computed_goto @ 0x1EB0 */
long long computed_goto(int *labels, int idx)
{
 long long result; // rax

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
 default:
 result = 0xFFFFFFFFLL;
 break;
 }
 return result;
}


/* Function: obfuscated_cf @ 0x1EE0 */
int obfuscated_cf(int x)
{
 return 2 * x;
}


/* Function: opaque_predicate @ 0x1EF0 */
int opaque_predicate(int x)
{
 return 2 * x;
}


/* Function: overlapped_code @ 0x1F00 */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x1F20 */
void test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax

 puts(asc_362D);
 v0 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n", v1);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", -1);
 printf("CF-L3-03 (large_jump_table): %d\n", 15);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 printf("CF-L3-06 (fsm_func_table): %d\n", 2);
 v2 = computed_goto((int *)"CF-L3-06 (fsm_func_table): %d\n", 2);
 printf("CF-L3-07 (computed_goto): %d\n", v2);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x2030 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


/* Function: .term_proc @ 0x2044 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6130 */

/* FAILED to decompile: puts @ 0x6138 */

/* FAILED to decompile: printf @ 0x6140 */

/* FAILED to decompile: _setjmp @ 0x6148 */

/* FAILED to decompile: longjmp @ 0x6150 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6158 */

/* FAILED to decompile: __gmon_start__ @ 0x6168 */

/* Total functions decompiled: 73, failed: 7 */
