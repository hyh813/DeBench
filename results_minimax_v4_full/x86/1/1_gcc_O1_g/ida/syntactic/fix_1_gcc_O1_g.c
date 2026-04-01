/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/1/1_gcc_O1_g
 * Processor: pc
 */

#include <setjmp.h>
#include <stdio.h>
#include <x86intrin.h>

/* Define __readgsdword if not available from x86intrin.h */
#ifndef __readgsdword
#define __readgsdword(offset) (*(unsigned int *)((char *)__builtin_thread_pointer() + (offset)))
#endif

/* String literals */
const char asc_3064[] = "Control Flow L1\n";
const char asc_316C[] = "Control Flow L2\n";
const char asc_32F0[] = "Control Flow L3\n";

/* Jump buffer for non-local jumps */
jmp_buf jump_buffer;

/* Memory/data section for computed goto */
static const unsigned char MEMORY[256] = {0};




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("ret" :::);
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
int sub_10A0(int a1)
{
 return (*(int (**)(void))(a1 + 40))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_113C @ 0x113C */
void sub_113C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1140 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */
void _do_global_dtors_aux()
{
 /* Empty stub - originally handles global destructor calls */
}


/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1279 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x127D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: recursion_factorial @ 0x1281 */
int recursion_factorial(int n)
{
 int result; // eax

 result = 1;
 if ( n > 1 )
 return n * recursion_factorial(n - 1);
 return result;
}


/* Function: double_value @ 0x12AE */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x12B9 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: op_add @ 0x12C5 */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x12D2 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x12DF */
int op_mul(int a, int b)
{
 return a * b;
}


/* Function: op_div @ 0x12ED */
int op_div(int a, int b)
{
 int v2; // ecx

 v2 = b;
 if ( b )
 return a / b;
 return v2;
}


/* Function: op_mod @ 0x1305 */
int op_mod(int a, int b)
{
 int v2; // edx

 v2 = b;
 if ( b )
 return a % b;
 return v2;
}


/* Function: op_and @ 0x131D */
int op_and(int a, int b)
{
 return a & b;
}


/* Function: op_or @ 0x132A */
int op_or(int a, int b)
{
 return a | b;
}


/* Function: op_xor @ 0x1337 */
int op_xor(int a, int b)
{
 return a ^ b;
}


/* Function: op_shl @ 0x1344 */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x1353 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: state_idle @ 0x1362 */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x1372 */
int state_processing(int event)
{
 int result; // eax

 result = event;
 if ( event != 2 )
 return 2 * (event == 99) + 1;
 return result;
}


/* Function: state_done @ 0x138D */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x1397 */
int state_error(int event)
{
 int result; // eax

 result = event;
 if ( event )
 return 3;
 return result;
}


/* Function: sequential_ops @ 0x13AA */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x13BD */
int single_if(int x)
{
 int result; // eax

 result = 2 * x;
 if ( x <= 0 )
 return x;
 return result;
}


/* Function: if_else @ 0x13CE */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x13DE */
int nested_if_2(int a, int b)
{
 int result; // eax

 result = 0;
 if ( a > 0 )
 {
 result = a + b;
 if ( b <= 0 )
 return a;
 }
 return result;
}


/* Function: nested_if_deep @ 0x13FC */
int nested_if_deep(int a, int b, int c, int d, int e)
{
 int result; // eax

 result = 0;
 if ( a > 0 )
 {
 result = 1;
 if ( b > 0 )
 {
 if ( c <= 0 )
 {
 return 2;
 }
 else if ( d <= 0 )
 {
 return 3;
 }
 else
 {
 return (e > 0) + 4;
 }
 }
 }
 return result;
}


/* Function: if_elseif_chain @ 0x1441 */
int if_elseif_chain(int x)
{
 int result; // eax

 result = 10;
 if ( x )
 {
 if ( x == 1 )
 {
 return 20;
 }
 else
 {
 result = 30;
 if ( x != 2 )
 return -1;
 }
 }
 return result;
}


/* Function: if_elseif_long @ 0x146E */
int if_elseif_long(int x)
{
 int result; // eax

 switch ( x )
 {
 case 0:
 result = 100;
 break;
 case 1:
 result = 200;
 break;
 case 2:
 result = 300;
 break;
 case 3:
 result = 400;
 break;
 case 4:
 result = 500;
 break;
 default:
 result = -1;
 break;
 }
 return result;
}


/* Function: switch_small @ 0x14B3 */
int switch_small(int op)
{
 int result; // eax

 if ( op == 2 )
 return 50;
 if ( op > 2 )
 return 3 * (op == 3) - 1;
 result = 15;
 if ( op )
 {
 result = -1;
 if ( op == 1 )
 return 5;
 }
 return result;
}


/* Function: switch_large @ 0x14F0 */
int switch_large(int op)
{
 int result; // eax

 result = op;
 switch ( op )
 {
 case 0:
 return result;
 case 1:
 result = 10;
 break;
 case 2:
 result = 20;
 break;
 case 3:
 result = 30;
 break;
 case 4:
 result = 40;
 break;
 case 5:
 result = 50;
 break;
 case 6:
 result = 60;
 break;
 case 7:
 result = 70;
 break;
 case 8:
 result = 80;
 break;
 case 9:
 result = 90;
 break;
 default:
 result = -1;
 break;
 }
 return result;
}


/* Function: switch_default @ 0x154E */
int switch_default(int op)
{
 int result; // eax

 result = 200;
 if ( op != 2 )
 {
 result = 300;
 if ( op != 3 )
 {
 result = 0;
 if ( op == 1 )
 return 100;
 }
 }
 return result;
}


/* Function: switch_fallthrough @ 0x157B */
int switch_fallthrough(int op)
{
 int v2; // eax
 int v3; // eax

 if ( op == 2 )
 {
 v2 = 0;
LABEL_7:
 v3 = v2 + 2 * op;
 return op + v3;
 }
 if ( op == 3 )
 {
 v2 = 12;
 goto LABEL_7;
 }
 if ( op != 1 )
 return -1;
 v3 = 0;
 return op + v3;
}


/* Function: loop_for_fixed @ 0x15B1 */
int loop_for_fixed(int n)
{
 int v1; // eax
 int v2; // edx

 if ( n <= 0 )
 return 0;
 v1 = 0;
 v2 = 0;
 do
 v2 += v1++;
 while ( n != v1 );
 return v2;
}


/* Function: loop_while @ 0x15DA */
int loop_while(int x)
{
 int v1; // ecx
 int v2; // ebx
 int result; // eax

 v1 = x;
 if ( x )
 {
 v2 = 0;
 do
 {
 v1 /= 10;
 ++v2;
 }
 while ( v1 );
 }
 else
 {
 v2 = 0;
 }
 result = 1;
 if ( v2 > 0 )
 return v2;
 return result;
}


/* Function: loop_dowhile @ 0x1618 */
int loop_dowhile(int x)
{
 int v2; // ebx

 v2 = 0;
 do
 {
 x /= 10;
 ++v2;
 }
 while ( x );
 return v2;
}


/* Function: loop_nested @ 0x1646 */
int loop_nested(int m, int n)
{
 int v2; // ecx
 int v3; // ebx
 int v5; // eax

 v2 = 0;
 v3 = 0;
 if ( m > 0 )
 {
 do
 {
 v5 = 0;
 if ( n > 0 )
 {
 do
 ++v5;
 while ( n != v5 );
 v3 += v5;
 }
 ++v2;
 }
 while ( m != v2 );
 }
 return v3;
}


/* Function: loop_break @ 0x1682 */
int loop_break(int target)
{
 int result; // eax
 int arr[5]; // [esp+8h] [ebp-24h]
 unsigned int v3; // [esp+1Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 result = 0;
 arr[0] = 10;
 arr[1] = 20;
 arr[2] = 30;
 arr[3] = 40;
 arr[4] = 50;
 while ( arr[result] != target )
 {
 if ( ++result == 5 )
 return -1;
 }
 return result;
}


/* Function: loop_continue @ 0x16ED */
int loop_continue(int n)
{
 int v1; // eax
 int v2; // edx

 if ( n <= 0 )
 return 0;
 v1 = 1;
 v2 = 0;
 do
 {
 if ( (v1 & 1) != 0 )
 v2 += v1;
 ++v1;
 }
 while ( v1 != n + 1 );
 return v2;
}


/* Function: goto_forward @ 0x1721 */
int goto_forward(int x)
{
 int v1; // eax

 v1 = x;
 if ( x > 0 )
 v1 = x * x;
 return 2 * v1;
}


/* Function: goto_backward @ 0x1735 */
int goto_backward(int x)
{
 int v1; // edx
 int v2; // eax

 v1 = 1;
 if ( x > 0 )
 {
 v2 = 1;
 do
 v1 *= v2++;
 while ( v2 != x + 1 );
 }
 return v1;
}


/* Function: ternary_op @ 0x175B */
int ternary_op(int a, int b)
{
 int result; // eax

 result = b;
 if ( b < a )
 return a;
 return result;
}


/* Function: test_control_flow_l1 @ 0x176D */
void test_control_flow_l1()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax

 puts(asc_3064);
 __printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", -5);
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
 v0 = loop_for_fixed(10);
 __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", v0);
 v1 = loop_while(12345);
 __printf_chk(1, "CF-L1-13 (loop_while): %d\n", v1);
 v2 = loop_dowhile(9876);
 __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", v2);
 v3 = loop_nested(3, 4);
 __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", v3);
 v4 = loop_break(30);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v4);
 v5 = loop_break(99);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v5);
 v6 = loop_continue(10);
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", v6);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", -6);
 v7 = goto_backward(5);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", v7);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x19C5 */
int loop_multi_exit(int target)
{
 int *v1; // edx
 int v2; // ebx
 int i; // eax
 int matrix[3][4]; // [esp+Ch] [ebp-40h] BYREF
 unsigned int v6; // [esp+3Ch] [ebp-10h]

 v6 = __readgsdword(0x14u);
 *(unsigned long long *)&matrix[0][0] = 0x200000001LL;
 *(unsigned long long *)&matrix[0][2] = 0x400000003LL;
 *(unsigned long long *)&matrix[1][0] = 0x600000005LL;
 *(unsigned long long *)&matrix[1][2] = 0x800000007LL;
 *(unsigned long long *)&matrix[2][0] = 0xA00000009LL;
 *(unsigned long long *)&matrix[2][2] = 0xC0000000BLL;
 v1 = matrix[0];
 v2 = 0;
 while ( 2 )
 {
 for ( i = 0; i != 4; ++i )
 {
 if ( v1[i] == target )
 return i + 10 * v2;
 }
 ++v2;
 v1 += 4;
 if ( v2 != 3 )
 continue;
 break;
 }
 return -1;
}


/* Function: infinite_loop @ 0x1A87 */
int infinite_loop(volatile int *flag)
{
 int result; // eax

 result = 0;
 while ( *flag != 1 )
 {
 if ( ++result == 1001 )
 {
 *flag = 1;
 return result;
 }
 }
 return result;
}


/* Function: multi_return @ 0x1AAC */
int multi_return(int x)
{
 int result; // eax

 if ( x < 0 )
 return -1;
 result = 2 * x;
 if ( 2 * x > 100 )
 return -2;
 if ( (x & 1) != 0 )
 return x + 1;
 return result;
}


/* Function: conditional_return @ 0x1AD6 */
int conditional_return(int x)
{
 int result; // eax

 if ( x > 0 )
 return 2 * x;
 result = 0;
 if ( x < 0 )
 return -x;
 return result;
}


/* Function: duffs_device @ 0x1AF4 */
int duffs_device(int *dst, int *src, int n)
{
 int *v3; // ecx
 int *v4; // ebx
 int v5; // edx
 int v6; // eax
 int v7; // eax
 int *v8; // edi
 int *v9; // esi
 int *v10; // edi
 int *v11; // esi
 int *v12; // edi
 int *v13; // esi

 v3 = dst;
 v4 = src;
 v5 = n;
 if ( n <= 0 )
 return -1;
 v6 = n + 14;
 if ( n + 7 >= 0 )
 v6 = n + 7;
 v7 = v6 >> 3;
 switch ( n % 8 )
 {
 case 0:
 goto _L174;
 case 1:
 v12 = src;
 v13 = dst;
 goto LABEL_11;
 case 2:
 goto _L172;
 case 3:
 v10 = src;
 v11 = dst;
 goto LABEL_9;
 case 4:
 goto _L170;
 case 5:
 v8 = src;
 v9 = dst;
 goto LABEL_7;
 case 6:
 goto _L168;
 case 7:
 while ( 1 )
 {
 *v3++ = *v4++;
_L168:
 v8 = v4 + 1;
 v9 = v3 + 1;
 *v3 = *v4;
LABEL_7:
 v4 = v8 + 1;
 v3 = v9 + 1;
 *v9 = *v8;
_L170:
 v10 = v4 + 1;
 v11 = v3 + 1;
 *v3 = *v4;
LABEL_9:
 v4 = v10 + 1;
 v3 = v11 + 1;
 *v11 = *v10;
_L172:
 v12 = v4 + 1;
 v13 = v3 + 1;
 *v3 = *v4;
LABEL_11:
 *v13 = *v12;
 if ( --v7 <= 0 )
 break;
 v4 = v12 + 1;
 v3 = v13 + 1;
_L174:
 *v3++ = *v4++;
 }
 break;
 default:
 return v5;
 }
 return v5;
}


/* Function: loop_complex_cond @ 0x1BBF */
int loop_complex_cond(int x)
{
 int v1; // edx
 int v2; // eax
 int v3; // ebx
 int v4; // ecx

 if ( x <= 0 )
 {
 v1 = x;
 v3 = 0;
 v2 = 0;
 }
 else
 {
 v1 = x;
 v2 = 0;
 do
 {
 v2 += 2;
 --v1;
 v3 = x - v1;
 v4 = 0;
 if ( v2 >= 0 )
 v4 = v2;
 }
 while ( v1 > v4 && v3 <= 9 );
 }
 return v3 + v1 + v2;
}


/* Function: loop_modify_var @ 0x1C06 */
int loop_modify_var(int n)
{
 int v1; // ecx
 int v2; // eax
 int v3; // edx

 v1 = 0;
 v2 = 0;
 if ( n > 0 )
 {
 while ( 1 )
 {
 v3 = v2 + 1;
 if ( n <= v2 + 1 )
 break;
 v1 += v3;
 v2 += 3;
 if ( v3 <= 5 )
 v2 = v3;
 }
 }
 return v1;
}


/* Function: loop_external_state @ 0x1C35 */
int loop_external_state(volatile int *flag)
{
 int result; // eax

 for ( result = 0; result != 101; ++result )
 {
 if ( *flag )
 break;
 }
 return result;
}


/* Function: tail_recursion @ 0x1C51 */
int tail_recursion(int n, int acc)
{
 int result; // eax

 result = acc;
 if ( n > 1 )
 return tail_recursion(n - 1, n * acc);
 return result;
}


/* Function: indirect_recursion_a @ 0x1C7E */
int indirect_recursion_a(int n, int depth)
{
 int result; // eax
 int v3; // eax

 result = n;
 if ( depth > 0 )
 {
 if ( (n & 1) != 0 )
 {
 v3 = 3 * n;
 if ( depth <= 1 )
 return v3 + 1;
 else
 return indirect_recursion_a(v3 + 2, depth - 2);
 }
 else
 {
 result = n / 2;
 if ( depth > 1 )
 return indirect_recursion_a(n / 2 + 1, depth - 2);
 }
 }
 return result;
}


/* Function: call_func_ptr @ 0x1CDF */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x1CF2 */
int call_func_ptr_array(int idx, int x)
{
 int (*funcs[3])(int); // [esp+0h] [ebp-1Ch]
 unsigned int v4; // [esp+Ch] [ebp-10h]

 v4 = __readgsdword(0x14u);
 funcs[0] = double_value;
 funcs[1] = triple_value;
 funcs[2] = recursion_factorial;
 if ( (unsigned int)idx > 2 )
 return -1;
 else
 return funcs[idx](x);
}


/* Function: call_virtual_func @ 0x1D61 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x1D6C */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int v3; // ebx
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


/* Function: test_control_flow_l2 @ 0x1DB7 */
void test_control_flow_l2()
{
 int v0; // eax
 int v1; // eax
 unsigned int i; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax
 int v12; // eax
 int v13; // eax
 int flag; // [esp+Ch] [ebp-78h] BYREF
 int ext_flag; // [esp+10h] [ebp-74h] BYREF
 int arr[5]; // [esp+14h] [ebp-70h] BYREF
 int src[8]; // [esp+28h] [ebp-5Ch] BYREF
 int dst[8]; // [esp+48h] [ebp-3Ch] BYREF
 unsigned int v19; // [esp+68h] [ebp-1Ch]

 v19 = __readgsdword(0x14u);
 puts(asc_316C);
 v0 = loop_multi_exit(7);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
 flag = 0;
 v1 = infinite_loop(&flag);
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 src[0] = 1;
 src[1] = 2;
 src[2] = 3;
 src[3] = 4;
 src[4] = 5;
 src[5] = 6;
 src[6] = 7;
 src[7] = 8;
 for ( i = 0; i < 8; ++i )
 dst[i] = 0;
 v3 = duffs_device(dst, src, 8);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v3);
 v4 = loop_complex_cond(10);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", v4);
 v5 = loop_modify_var(10);
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v5);
 ext_flag = 0;
 v6 = loop_external_state(&ext_flag);
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v6);
 v7 = recursion_factorial(5);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", v7);
 v8 = tail_recursion(5, 1);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", v8);
 v9 = indirect_recursion_a(10, 3);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", v9);
 v10 = call_func_ptr(double_value, 5);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", v10);
 v11 = call_func_ptr_array(0, 5);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v11);
 v12 = call_func_ptr_array(2, 5);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v12);
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 v13 = process_with_callback(arr, 5, double_value);
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v13);
}


/* Function: non_local_jump @ 0x205E */
int non_local_jump(int x)
{
 int v2; // [esp+4h] [ebp-24h]
 int v3; // [esp+8h] [ebp-20h]

 if ( _setjmp(jump_buffer) )
 return -1;
 if ( x < 0 )
 __longjmp_chk(jump_buffer, 1, v2, v3);
 if ( x > 100 )
 __longjmp_chk(jump_buffer, 2, v2, v3);
 return 2 * x;
}


/* Function: cpp_exception @ 0x20D6 */
int cpp_exception(int x)
{
 if ( x < 0 )
 return -1;
 if ( x > 100 )
 return -2;
 return 2 * x;
}


/* Function: large_jump_table @ 0x20F6 */
int large_jump_table(int op, int a, int b)
{
 int (*ops[10])(int, int); // [esp+4h] [ebp-38h]
 unsigned int v5; // [esp+2Ch] [ebp-10h]

 v5 = __readgsdword(0x14u);
 ops[0] = op_add;
 ops[1] = op_sub;
 ops[2] = op_mul;
 ops[3] = op_div;
 ops[4] = op_mod;
 ops[5] = op_and;
 ops[6] = op_or;
 ops[7] = op_xor;
 ops[8] = op_shl;
 ops[9] = op_shr;
 if ( (unsigned int)op > 9 )
 return -1;
 else
 return ops[op](a, b);
}


/* Function: conditional_func_ptr @ 0x21B0 */
int conditional_func_ptr(int mode, int x)
{
 int ( *v2)(int); // eax

 v2 = double_value;
 if ( mode )
 {
 v2 = triple_value;
 if ( mode != 1 )
 v2 = recursion_factorial;
 }
 return v2(x);
}


/* Function: state_machine @ 0x21EF */
int state_machine(int event, int state)
{
 int result; // eax

 result = state;
 if ( state != 2 )
 {
 if ( state > 2 )
 {
 if ( state == 3 )
 {
 if ( !event )
 return 0;
 }
 else
 {
 return 3;
 }
 }
 else if ( state )
 {
 if ( state == 1 )
 {
 if ( event == 2 )
 {
 return 2;
 }
 else if ( event == 99 )
 {
 return 3;
 }
 }
 else
 {
 return 3;
 }
 }
 else
 {
 return event == 1;
 }
 }
 return result;
}


/* Function: fsm_func_table @ 0x2249 */
int fsm_func_table(int event, int state)
{
 int result; // eax
 int (*state_handlers[4])(int); // [esp+Ch] [ebp-20h]
 unsigned int v4; // [esp+1Ch] [ebp-10h]

 v4 = __readgsdword(0x14u);
 state_handlers[0] = state_idle;
 state_handlers[1] = state_processing;
 state_handlers[2] = state_done;
 state_handlers[3] = state_error;
 result = 3;
 if ( (unsigned int)state <= 3 )
 return state_handlers[state](event);
 return result;
}


/* Function: computed_goto @ 0x22C1 */
int computed_goto(int *labels, int idx)
{
 void *targets[4]; // [esp+Ch] [ebp-20h]
 unsigned int v4; // [esp+1Ch] [ebp-10h]

 v4 = __readgsdword(0x14u);
 targets[0] = &MEMORY[0x2314];
 targets[1] = &MEMORY[0x232E];
 targets[2] = &MEMORY[0x2339];
 targets[3] = &MEMORY[0x2344];
 if ( (unsigned int)idx <= 3 )
 {
 /* Computed jump: jmp targets[idx] */
 void *target = targets[idx];
 __asm__ volatile ("jmp *%0" : : "r" (target));
 }
 return -1;
}


/* Function: obfuscated_cf @ 0x235B */
int obfuscated_cf(int x)
{
 return 2 * x;
}


/* Function: opaque_predicate @ 0x2366 */
int opaque_predicate(int x)
{
 return 2 * x;
}


/* Function: overlapped_code @ 0x2371 */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x238D */
void test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int labels[4]; // [esp+1Ch] [ebp-20h] BYREF
 unsigned int v7; // [esp+2Ch] [ebp-10h]

 v7 = __readgsdword(0x14u);
 puts(asc_32F0);
 v0 = non_local_jump(5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 v2 = large_jump_table(0, 10, 5);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", v2);
 v3 = conditional_func_ptr(0, 5);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", v3);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 v4 = fsm_func_table(2, 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", v4);
 labels[0] = 0;
 labels[1] = 1;
 labels[2] = 2;
 labels[3] = 3;
 v5 = computed_goto(labels, 2);
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v5);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x2513 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x2533 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x2540 */
void _stack_chk_fail_local()
{
 __asm__ volatile("" ::: "ebx");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x25AC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x60E0 */

/* FAILED to decompile: _setjmp @ 0x60E4 */

/* FAILED to decompile: __stack_chk_fail @ 0x60E8 */

/* FAILED to decompile: __cxa_finalize @ 0x60EC */

/* FAILED to decompile: puts @ 0x60F0 */

/* FAILED to decompile: __printf_chk @ 0x60F4 */

/* FAILED to decompile: __longjmp_chk @ 0x60F8 */

/* Total functions decompiled: 87, failed: 7 */
