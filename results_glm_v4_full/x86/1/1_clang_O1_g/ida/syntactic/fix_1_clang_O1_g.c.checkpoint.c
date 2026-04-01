/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/1/1_clang_O1_g
 * Processor: pc
 */

#include <stdio.h>
#include <setjmp.h>
#include <stdbool.h>

/* Global variables */
int dword_3640[4];
unsigned int unk_3038[16];
unsigned int unk_3050[16];
int dword_304C[16];
int (*funcs_1B55[3])(int);
int (*funcs_1F79[10])(int, int);
int (*funcs_2105[4])(int);
int (*funcs_218B[4])(void);
const char *asc_35D1 = "";
const char *asc_35F5 = "";
const char *asc_3619 = "";
jmp_buf jump_buffer;

/* PIC symbol declaration */
extern void *_GLOBAL_OFFSET_TABLE_;






/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" : : : "ebx");
}


/* Function: sub_1090 @ 0x1090 */
int sub_1090(int a1)
{
 return (*(int (**)(void))((int)(a1 - 16)))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_10CC @ 0x10CC */
void sub_10CC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x10D0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1209 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x120D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: sequential_ops @ 0x1220 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x1230 */
int single_if(int x)
{
 return x << (x > 0);
}


/* Function: if_else @ 0x1240 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x1250 */
int nested_if_2(int a, int b)
{
 int v2; // eax
 int result; // eax

 v2 = b;
 if ( b < 0 )
 v2 = 0;
 result = a + v2;
 if ( a <= 0 )
 return 0;
 return result;
}


/* Function: nested_if_deep @ 0x1270 */
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


/* Function: if_elseif_chain @ 0x12B0 */
int if_elseif_chain(int x)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)x < 3 )
 return 10 * x + 10;
 return result;
}


/* Function: if_elseif_long @ 0x12D0 */
int if_elseif_long(int x)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)x < 5 )
 return 100 * x + 100;
 return result;
}


/* Function: switch_small @ 0x12F0 */
int switch_small(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 3 )
 return dword_3640[op];
 return result;
}


/* Function: switch_large @ 0x1320 */
int switch_large(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op < 0xA )
 return 10 * op;
 return result;
}


/* Function: switch_default @ 0x1340 */
int switch_default(int op)
{
 int result; // eax

 result = 0;
 if ( (unsigned int)(op - 1) < 3 )
 return 100 * (op - 1) + 100;
 return result;
}


/* Function: switch_fallthrough @ 0x1360 */
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


/* Function: loop_for_fixed @ 0x1390 */
int loop_for_fixed(int n)
{
 if ( n <= 0 )
 return 0;
 else
 return (((unsigned int)(n - 2) * (unsigned long long)(unsigned int)(n - 1)) >> 1) + n - 1;
}


/* Function: loop_while @ 0x13B0 */
int loop_while(int x)
{
 int v1; // ecx
 int v2; // esi
 bool v3; // cc
 int result; // eax

 v1 = x;
 v2 = 0;
 if ( x )
 {
 do
 {
 ++v2;
 v3 = (unsigned int)(v1 + 9) <= 0x12;
 v1 /= 10;
 }
 while ( !v3 );
 }
 result = 1;
 if ( v2 )
 return v2;
 return result;
}


/* Function: loop_dowhile @ 0x1400 */
int loop_dowhile(int x)
{
 int v1; // ecx
 bool v3; // cc

 v1 = 0;
 do
 {
 ++v1;
 v3 = (unsigned int)(x + 9) <= 0x12;
 x /= 10;
 }
 while ( !v3 );
 return v1;
}


/* Function: loop_nested @ 0x1430 */
int loop_nested(int m, int n)
{
 int v2; // eax
 int result; // eax

 v2 = n;
 if ( n <= 0 )
 v2 = 0;
 result = m * v2;
 if ( m <= 0 )
 return 0;
 return result;
}


/* Function: loop_break @ 0x1450 */
int loop_break(int target)
{
 int result; // eax
 unsigned int *i; // ecx

 result = 0;
 for ( i = &unk_3038; *i != target; ++i )
 {
 if ( ++result == 5 )
 return -1;
 }
 return result;
}


/* Function: loop_continue @ 0x1490 */
int loop_continue(int n)
{
 int result; // eax
 int v2; // edx
 int v3; // esi

 if ( n <= 0 )
 return 0;
 result = 0;
 v2 = 1;
 do
 {
 result += v2 & -(v2 & 1);
 v3 = v2 - n + 1;
 ++v2;
 }
 while ( v3 != 1 );
 return result;
}


/* Function: goto_forward @ 0x14D0 */
int goto_forward(int x)
{
 int v1; // eax

 v1 = 1;
 if ( x > 0 )
 v1 = x;
 return 2 * x * v1;
}


/* Function: goto_backward @ 0x14F0 */
int goto_backward(int x)
{
 int v1; // edx
 int result; // eax
 int v3; // esi

 if ( x <= 0 )
 return 1;
 v1 = 1;
 result = 1;
 do
 {
 result *= v1;
 v3 = v1 - x + 1;
 ++v1;
 }
 while ( v3 != 1 );
 return result;
}


/* Function: ternary_op @ 0x1530 */
int ternary_op(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: test_control_flow_l1 @ 0x1540 */
void test_control_flow_l1()
{
 puts(asc_35D1);
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


/* Function: loop_multi_exit @ 0x1790 */
int loop_multi_exit(int target)
{
 int v1; // eax
 int v2; // ecx
 unsigned int *v3; // esi
 bool v4; // bl
 unsigned int v5; // ebp
 int v6; // ebx
 unsigned int v7; // ebp
 int v9; // ebp
 int result; // eax
 int v11; // [esp+0h] [ebp-14h]

 v11 = v1;
 v2 = 0;
 v3 = &unk_3050;
 do
 {
 v4 = 1;
 v5 = 0;
 if ( dword_304C[4 * v2] == target )
 {
LABEL_7:
 v11 = v5 + 10 * v2;
 v9 = 1;
 if ( v4 )
 goto LABEL_10;
 }
 else
 {
 v6 = -1;
 while ( v6 != 2 )
 {
 v7 = v6 + 1;
 if ( v3[++v6] == target )
 {
 v4 = v7 < 3;
 v5 = v7 + 1;
 goto LABEL_7;
 }
 }
 }
 ++v2;
 v3 += 4;
 }
 while ( v2 != 3 );
 v9 = 2;
LABEL_10:
 result = v11;
 if ( v9 == 2 )
 return -1;
 return result;
}


/* Function: infinite_loop @ 0x1850 */
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


/* Function: multi_return @ 0x1880 */
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


/* Function: conditional_return @ 0x18B0 */
int conditional_return(int x)
{
 int result; // eax

 result = -x;
 if ( x > 0 )
 return 2 * x;
 return result;
}


/* Function: duffs_device @ 0x18D0 */
int duffs_device(int *dst, int *src, int n)
{
 int result; // eax
 int v6; // eax
 int v7; // eax
 int v8; // edi
 int v9; // edi
 int v10; // edi
 int v11; // edi
 int v12; // edi
 int v13; // edi
 int v14; // edi
 int v15; // edi

 result = -1;
 if ( n > 0 )
 {
 v6 = n + 14;
 if ( n + 7 >= 0 )
 v6 = n + 7;
 v7 = v6 >> 3;
 switch ( n - (n & 0x7FFFFFF8) )
 {
 case 0:
 goto LABEL_5;
 case 1:
 goto LABEL_12;
 case 2:
 goto LABEL_11;
 case 3:
 goto LABEL_10;
 case 4:
 goto LABEL_9;
 case 5:
 goto LABEL_8;
 case 6:
 goto LABEL_7;
 case 7:
 while ( 1 )
 {
 v9 = *src++;
 *dst++ = v9;
LABEL_7:
 v10 = *src++;
 *dst++ = v10;
LABEL_8:
 v11 = *src++;
 *dst++ = v11;
LABEL_9:
 v12 = *src++;
 *dst++ = v12;
LABEL_10:
 v13 = *src++;
 *dst++ = v13;
LABEL_11:
 v14 = *src++;
 *dst++ = v14;
LABEL_12:
 v15 = *src++;
 *dst++ = v15;
 if ( v7-- <= 1 )
 break;
LABEL_5:
 v8 = *src++;
 *dst++ = v8;
 }
 break;
 default:
 return n;
 }
 return n;
 }
 return result;
}


/* Function: loop_complex_cond @ 0x1990 */
int loop_complex_cond(int x)
{
 int v1; // ecx
 unsigned int v2; // esi
 int v3; // eax
 int v4; // edi
 unsigned int v5; // edx

 v1 = x;
 if ( x <= 0 )
 {
 v3 = 0;
 v5 = 0;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 do
 {
 v4 = v1;
 v3 += 2;
 --v1;
 v5 = v2 + 1;
 if ( v4 < 2 )
 break;
 if ( v3 >= v1 )
 break;
 }
 while ( v2++ < 9 );
 }
 return v5 + v1 + v3;
}


/* Function: loop_modify_var @ 0x19D0 */
int loop_modify_var(int n)
{
 int v1; // edx
 int result; // eax
 int v3; // esi

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


/* Function: loop_external_state @ 0x1A00 */
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


/* Function: recursion_factorial @ 0x1A30 */
int recursion_factorial(int n)
{
 int result; // eax

 result = 1;
 if ( n >= 2 )
 return n * recursion_factorial(n - 1);
 return result;
}


/* Function: tail_recursion @ 0x1A70 */
int tail_recursion(int n, int acc)
{
 int result; // eax

 result = acc;
 if ( n >= 2 )
 return tail_recursion(n - 1, n * acc);
 return result;
}


/* Function: indirect_recursion_a @ 0x1AB0 */
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


/* Function: call_func_ptr @ 0x1B10 */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x1B30 */
int call_func_ptr_array(int idx, int x)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)idx <= 2 )
 return ((int ( *)(int))funcs_1B55[idx])(x);
 return result;
}


/* Function: double_value @ 0x1B70 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x1B80 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: call_virtual_func @ 0x1B90 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x1BA0 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int v3; // ebp
 int v4; // esi

 if ( n <= 0 )
 return 0;
 v3 = 0;
 v4 = 0;
 do
 v4 += cb(arr[v3++]);
 while ( n != v3 );
 return v4;
}


/* Function: test_control_flow_l2 @ 0x1BF0 */
void test_control_flow_l2()
{
 int v0; // ebx
 int v1; // ecx
 unsigned int *v2; // edx
 int i; // esi
 int v4; // eax
 int v5; // ebp
 int v7; // edi
 int j; // eax
 unsigned int v9; // ecx
 int v10; // edx
 int v11; // eax
 unsigned int v12; // esi
 int k; // eax
 int v14; // eax
 int v15; // eax
 int v16; // eax
 int v17; // eax

 v0 = (int)&_GLOBAL_OFFSET_TABLE_;
 puts(asc_35F5);
 v1 = 0;
 v2 = &unk_3050;
 for ( i = 0; i != 3; ++i )
 {
 v4 = 0;
 while ( v4 != 3 )
 {
 v5 = v4 + 1;
 if ( v2[v4++] == 7 )
 {
 v7 = 1;
 v0 = v5 - v1;
 if ( (unsigned int)(v5 - 1) < 3 )
 goto LABEL_8;
 break;
 }
 }
 v1 -= 10;
 v2 += 4;
 }
 v7 = 2;
LABEL_8:
 if ( v7 == 2 )
 v0 = -1;
 printf("CF-L2-01 (loop_multi_exit): %d\n", v0);
 for ( j = 0; j != 1001; ++j )
 ;
 printf("CF-L2-02 (infinite_loop): %d\n", 1001);
 printf("CF-L2-03 (multi_return): %d\n", -1);
 printf("CF-L2-03 (multi_return): %d\n", -2);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 printf("CF-L2-05 (duffs_device): %d\n", 8);
 v9 = -1;
 v10 = 11;
 v11 = 10;
 do
 {
 v12 = v11 - 8;
 v11 += 2;
 if ( v12 >= v10 - 2 )
 break;
 ++v9;
 --v10;
 }
 while ( v9 < 9 );
 printf("CF-L2-06 (loop_complex_cond): %d\n", v11);
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


/* Function: non_local_jump @ 0x1EC0 */
int non_local_jump(int x)
{
 int v1; // eax
 int v2; // ecx

 v1 = _setjmp(&jump_buffer);
 v2 = -1;
 if ( !v1 )
 {
 if ( x < 0 )
 longjmp(&jump_buffer, 1);
 if ( x >= 101 )
 longjmp(&jump_buffer, 2);
 return 2 * x;
 }
 return v2;
}


/* Function: cpp_exception @ 0x1F30 */
int cpp_exception(int x)
{
 int v1; // edx
 int result; // eax

 v1 = -2;
 if ( x < 101 )
 v1 = 2 * x;
 result = -1;
 if ( x >= 0 )
 return v1;
 return result;
}


/* Function: large_jump_table @ 0x1F50 */
int large_jump_table(unsigned int op, int a, int b)
{
 int result; // eax

 result = -1;
 if ( op <= 9 )
 return ((int ( *)(int, int))funcs_1F79[op])(a, b);
 return result;
}


/* Function: op_add @ 0x1F90 */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x1FA0 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x1FB0 */
int op_mul(int a, int b)
{
 return a * b;
}


/* Function: op_div @ 0x1FC0 */
int op_div(int a, int b)
{
 if ( b )
 return a / b;
 else
 return 0;
}


/* Function: op_mod @ 0x1FE0 */
int op_mod(int a, int b)
{
 if ( b )
 return a % b;
 else
 return 0;
}


/* Function: op_and @ 0x2000 */
int op_and(int a, int b)
{
 return a & b;
}


/* Function: op_or @ 0x2010 */
int op_or(int a, int b)
{
 return a | b;
}


/* Function: op_xor @ 0x2020 */
int op_xor(int a, int b)
{
 return a ^ b;
}


/* Function: op_shl @ 0x2030 */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x2040 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: conditional_func_ptr @ 0x2050 */
int conditional_func_ptr(int mode, int x)
{
 int ( *v2)(int); // esi
 int ( *v3)(int); // ecx

 v2 = recursion_factorial;
 if ( mode == 1 )
 v2 = triple_value;
 v3 = double_value;
 if ( mode )
 v3 = v2;
 return v3(x);
}


/* Function: state_machine @ 0x2090 */
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


/* Function: fsm_func_table @ 0x20E0 */
int fsm_func_table(int event, int state)
{
 int result; // eax

 result = 3;
 if ( (unsigned int)state <= 3 )
 return ((int ( *)(int))funcs_2105[state])(event);
 return result;
}


/* Function: state_idle @ 0x2120 */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x2130 */
int state_processing(int event)
{
 int result; // eax

 result = 2 * (event == 99) + 1;
 if ( event == 2 )
 return 2;
 return result;
}


/* Function: state_done @ 0x2150 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x2160 */
int state_error(int event)
{
 return 3 * (event != 0);
}


/* Function: computed_goto @ 0x2170 */
int computed_goto(int *labels, unsigned int idx)
{
 int result; // eax

 result = -1;
 if ( idx <= 3 )
 return funcs_218B[idx]();
 return result;
}


/* Function: sub_2192 @ 0x2192 */
int sub_2192()
{
 return 0;
}


/* Function: label2 @ 0x2195 */
int label2()
{
 return 20;
}


/* Function: label3 @ 0x219B */
int label3()
{
 return 30;
}


/* Function: label1 @ 0x21A1 */
int label1()
{
 return 10;
}


/* Function: obfuscated_cf @ 0x21B0 */
int obfuscated_cf(int x)
{
 return 2 * x;
}


/* Function: opaque_predicate @ 0x21C0 */
int opaque_predicate(int x)
{
 return 2 * x;
}


/* Function: overlapped_code @ 0x21D0 */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x21F0 */
void test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int *s; // [esp+0h] [ebp-1Ch]

 puts(asc_3619);
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
 v2 = computed_goto(s, 2u);
 printf("CF-L3-07 (computed_goto): %d\n", v2);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x2330 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x60D0 */

/* FAILED to decompile: printf @ 0x60D4 */

/* FAILED to decompile: longjmp @ 0x60D8 */

/* FAILED to decompile: _setjmp @ 0x60DC */

/* FAILED to decompile: __cxa_finalize @ 0x60E0 */

/* FAILED to decompile: puts @ 0x60E4 */

/* Total functions decompiled: 83, failed: 6 */
