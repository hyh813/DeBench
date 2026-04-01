/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/1/1_gcc_O1_g
 * Processor: pc
 */

#include <stdio.h>
#include <setjmp.h>
#include <string.h>

/* String constants */
static const char *s = "Control Flow Tests";
static const char *asc_3170 = "Control Flow Tests L2";
static const char *asc_3310 = "Control Flow Tests L3";

/* Jump buffer for non-local jumps */
static jmp_buf jump_buffer;

/* Define __readfsqword intrinsic for stack canary access */
static inline unsigned long long __readfsqword(unsigned long __offset)
{
    unsigned long long ret;
    __asm__ ("movq %%fs:%1, %0" : "=r" (ret) : "m" (*(const unsigned long *)__offset));
    return ret;
}

/* External gmon profiling function */
extern void _gmon_start__(void);

/* CRT stub function init_proc removed by preprocessor */


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* unreachable code removed */
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: recursion_factorial @ 0x11C9 */
int recursion_factorial(int n)
{
 int result; // eax

 result = 1;
 if ( n > 1 )
 return n * recursion_factorial(n - 1);
 return result;
}


/* Function: double_value @ 0x11E8 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x11F0 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: op_add @ 0x11F8 */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x1200 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x1209 */
int op_mul(int a, int b)
{
 return b * a;
}


/* Function: op_div @ 0x1213 */
int op_div(int a, int b)
{
 if ( b )
 return a / b;
 return b;
}


/* Function: op_mod @ 0x1225 */
int op_mod(int a, int b)
{
 if ( b )
 return a % b;
 return b;
}


/* Function: op_and @ 0x1237 */
int op_and(int a, int b)
{
 return b & a;
}


/* Function: op_or @ 0x1240 */
int op_or(int a, int b)
{
 return b | a;
}


/* Function: op_xor @ 0x1249 */
int op_xor(int a, int b)
{
 return b ^ a;
}


/* Function: op_shl @ 0x1252 */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x125D */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: state_idle @ 0x1268 */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x1276 */
int state_processing(int event)
{
 if ( event == 2 )
 return 2;
 else
 return 2 * (event == 99) + 1;
}


/* Function: state_done @ 0x1290 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x129A */
int state_error(int event)
{
 int result; // eax

 result = event;
 if ( event )
 return 3;
 return result;
}


/* Function: sequential_ops @ 0x12AB */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x12B7 */
int single_if(int x)
{
 int result; // eax

 result = 2 * x;
 if ( x <= 0 )
 return x;
 return result;
}


/* Function: if_else @ 0x12C4 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x12D1 */
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


/* Function: nested_if_deep @ 0x12E7 */
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


/* Function: if_elseif_chain @ 0x131E */
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


/* Function: if_elseif_long @ 0x1347 */
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


/* Function: switch_small @ 0x1387 */
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


/* Function: switch_large @ 0x13C0 */
int switch_large(int op)
{
 int result; // eax

 switch ( op )
 {
 case 0:
 result = op;
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


/* Function: switch_default @ 0x141B */
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


/* Function: switch_fallthrough @ 0x1444 */
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


/* Function: loop_for_fixed @ 0x1476 */
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


/* Function: loop_while @ 0x149B */
int loop_while(int x)
{
 int result; // eax

 if ( x )
 {
 result = 0;
 do
 {
 x /= 10;
 ++result;
 }
 while ( x );
 }
 else
 {
 result = 0;
 }
 if ( result <= 0 )
 return 1;
 return result;
}


/* Function: loop_dowhile @ 0x14D3 */
int loop_dowhile(int x)
{
 int v1; // edx

 v1 = 0;
 do
 {
 x /= 10;
 ++v1;
 }
 while ( x );
 return v1;
}


/* Function: loop_nested @ 0x14FB */
int loop_nested(int m, int n)
{
 int v2; // edx
 int v3; // ecx
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


/* Function: loop_break @ 0x152B */
int loop_break(int target)
{
 long long v1; // rax
 int v2; // edx
 int arr[6]; // [rsp+0h] [rbp-28h]
 unsigned long long v5; // [rsp+18h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v1 = 0;
 arr[0] = 10;
 arr[1] = 20;
 arr[2] = 30;
 arr[3] = 40;
 arr[4] = 50;
 while ( 1 )
 {
 v2 = v1;
 if ( arr[v1] == target )
 break;
 if ( ++v1 == 5 )
 return -1;
 }
 return v2;
}


/* Function: loop_continue @ 0x159F */
int loop_continue(int n)
{
 int v1; // edi
 int v2; // eax
 int v3; // edx

 if ( n <= 0 )
 return 0;
 v1 = n + 1;
 v2 = 1;
 v3 = 0;
 do
 {
 if ( (v2 & 1) != 0 )
 v3 += v2;
 ++v2;
 }
 while ( v2 != v1 );
 return v3;
}


/* Function: goto_forward @ 0x15CD */
int goto_forward(int x)
{
 if ( x > 0 )
 x *= x;
 return 2 * x;
}


/* Function: goto_backward @ 0x15DE */
int goto_backward(int x)
{
 int v1; // edx
 int v2; // edi
 int v3; // eax

 v1 = 1;
 if ( x > 0 )
 {
 v2 = x + 1;
 v3 = 1;
 do
 v1 *= v3++;
 while ( v3 != v2 );
 }
 return v1;
}


/* Function: ternary_op @ 0x1600 */
int ternary_op(int a, int b)
{
 int result; // eax

 result = a;
 if ( b >= a )
 return b;
 return result;
}


/* Function: test_control_flow_l1 @ 0x160C */
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

 puts(s);
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


/* Function: loop_multi_exit @ 0x192B */
int loop_multi_exit(int target)
{
 int *v1; // rdx
 int v2; // esi
 long long i; // rax
 int matrix[3][4]; // [rsp+0h] [rbp-48h] BYREF
 unsigned long long v6; // [rsp+38h] [rbp-10h]

 v6 = __readfsqword(0x28u);
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


/* Function: infinite_loop @ 0x19F3 */
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


/* Function: multi_return @ 0x1A14 */
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


/* Function: conditional_return @ 0x1A3B */
int conditional_return(int x)
{
 int result; // eax

 if ( x > 0 )
 return 2 * x;
 result = -x;
 if ( x >= 0 )
 return 0;
 return result;
}


/* Function: duffs_device @ 0x1A56 */
int duffs_device(int *dst, int *src, int n)
{
 int result; // eax
 int v5; // edi
 int v6; // edx
 int v7; // edi
 int *v8; // r8
 int *v9; // rdx
 int *v10; // r8
 int *v11; // rdx
 int *v12; // r8
 int *v13; // rdx

 result = n;
 if ( n <= 0 )
 return -1;
 v5 = n + 14;
 v6 = n + 7;
 if ( v6 >= 0 )
 v5 = v6;
 v7 = v5 >> 3;
 switch ( result % 8 )
 {
 case 0:
 goto LABEL_13;
 case 1:
 v12 = src;
 v13 = dst;
 goto LABEL_11;
 case 2:
 goto LABEL_10;
 case 3:
 v10 = src;
 v11 = dst;
 goto LABEL_9;
 case 4:
 goto LABEL_8;
 case 5:
 v8 = src;
 v9 = dst;
 goto LABEL_7;
 case 6:
 goto LABEL_6;
 case 7:
 while ( 1 )
 {
 *dst++ = *src++;
LABEL_6:
 v8 = src + 1;
 v9 = dst + 1;
 *dst = *src;
LABEL_7:
 src = v8 + 1;
 dst = v9 + 1;
 *v9 = *v8;
LABEL_8:
 v10 = src + 1;
 v11 = dst + 1;
 *dst = *src;
LABEL_9:
 src = v10 + 1;
 dst = v11 + 1;
 *v11 = *v10;
LABEL_10:
 v12 = src + 1;
 v13 = dst + 1;
 *dst = *src;
LABEL_11:
 *v13 = *v12;
 if ( --v7 <= 0 )
 break;
 src = v12 + 1;
 dst = v13 + 1;
LABEL_13:
 *dst++ = *src++;
 }
 break;
 default:
 return result;
 }
 return result;
}


/* Function: loop_complex_cond @ 0x1B30 */
int loop_complex_cond(int x)
{
 int v1; // edx
 int v2; // eax

 if ( x <= 0 )
 {
 v1 = 0;
 v2 = 0;
 }
 else
 {
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += 2;
 --x;
 ++v1;
 }
 while ( v1 <= 9 && v2 < x && x > 0 );
 }
 return v1 + x + v2;
}


/* Function: loop_modify_var @ 0x1B71 */
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


/* Function: loop_external_state @ 0x1B9A */
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


/* Function: tail_recursion @ 0x1BB2 */
int tail_recursion(int n, int acc)
{
 int result; // eax

 result = acc;
 if ( n > 1 )
 return tail_recursion(n - 1, n * acc);
 return result;
}


/* Function: indirect_recursion_a @ 0x1BD2 */
int indirect_recursion_a(int n, int depth)
{
 int result; // eax
 int v3; // eax
 int v4; // edi

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
 v4 = n / 2;
 result = v4;
 if ( depth > 1 )
 return indirect_recursion_a(v4 + 1, depth - 2);
 }
 }
 return result;
}


/* Function: call_func_ptr @ 0x1C1F */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x1C33 */
int call_func_ptr_array(int idx, int x)
{
 long long v2; // r8
 long long v3; // r9
 int (*funcs[3])(int); // [rsp+0h] [rbp-28h]
 unsigned long long v6; // [rsp+18h] [rbp-10h]

 v6 = __readfsqword(0x28u);
 funcs[0] = double_value;
 funcs[1] = triple_value;
 funcs[2] = recursion_factorial;
 if ( (unsigned int)idx > 2 )
 return -1;
 else
 return ((long long ( *)(unsigned long long, int, int ( *)(int), int ( *)(int), long long, long long, int (*)(int), int (*)(int), int (*)(int), unsigned long long))funcs[idx])(
 (unsigned int)x,
 x,
 triple_value,
 recursion_factorial,
 v2,
 v3,
 funcs[0],
 funcs[1],
 funcs[2],
 v6);
}


/* Function: call_virtual_func @ 0x1C9D */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x1CA5 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int *v4; // rbx
 int v5; // ebp

 if ( n <= 0 )
 return 0;
 v4 = arr;
 v5 = 0;
 do
 v5 += cb(*v4++);
 while ( v4 != &arr[n - 1 + 1] );
 return v5;
}


/* Function: test_control_flow_l2 @ 0x1CEE */
void test_control_flow_l2()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
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
 int flag; // [rsp+8h] [rbp-90h] BYREF
 int ext_flag; // [rsp+Ch] [rbp-8Ch] BYREF
 int arr[8]; // [rsp+10h] [rbp-88h] BYREF
 int src[8]; // [rsp+30h] [rbp-68h] BYREF
 int dst[10]; // [rsp+50h] [rbp-48h] BYREF
 unsigned long long v18; // [rsp+78h] [rbp-20h]

 v18 = __readfsqword(0x28u);
 puts(asc_3170);
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
 memset(dst, 0, 32);
 v2 = duffs_device(dst, src, 8);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v2);
 v3 = loop_complex_cond(10);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", v3);
 v4 = loop_modify_var(10);
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
 ext_flag = 0;
 v5 = loop_external_state(&ext_flag);
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v5);
 v6 = recursion_factorial(5);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", v6);
 v7 = tail_recursion(5, 1);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", v7);
 v8 = indirect_recursion_a(10, 3);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", v8);
 v9 = call_func_ptr(double_value, 5);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", v9);
 v10 = call_func_ptr_array(0, 5);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v10);
 v11 = call_func_ptr_array(2, 5);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v11);
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 v12 = process_with_callback(arr, 5, double_value);
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v12);
}


/* Function: non_local_jump @ 0x203C */
int non_local_jump(int x)
{
 if ( _setjmp(jump_buffer) )
 return -1;
 if ( x < 0 )
 __longjmp_chk(jump_buffer, 1);
 if ( x > 100 )
 __longjmp_chk(jump_buffer, 2);
 return 2 * x;
}


/* Function: cpp_exception @ 0x209E */
int cpp_exception(int x)
{
 if ( x < 0 )
 return -1;
 if ( x > 100 )
 return -2;
 return 2 * x;
}


/* Function: large_jump_table @ 0x20BB */
int large_jump_table(int op, int a, int b)
{
 long long v3; // r8
 long long v4; // r9
 int (*ops[11])(int, int); // [rsp+0h] [rbp-68h]
 unsigned long long v7; // [rsp+58h] [rbp-10h]

 v7 = __readfsqword(0x28u);
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
 return ((long long ( *)(unsigned long long, unsigned long long, int ( *)(int, int), int ( *)(int, int), long long, long long, int (*)(int, int), int (*)(int, int), int (*)(int, int), int (*)(int, int), int (*)(int, int), int (*)(int, int), int (*)(int, int), int (*)(int, int), int (*)(int, int), int (*)(int, int)))ops[op])(
 (unsigned int)a,
 (unsigned int)b,
 op_shr,
 op_shl,
 v3,
 v4,
 ops[0],
 ops[1],
 ops[2],
 ops[3],
 ops[4],
 ops[5],
 ops[6],
 ops[7],
 ops[8],
 ops[9]);
}


/* Function: conditional_func_ptr @ 0x217B */
int conditional_func_ptr(int mode, int x)
{
 int ( *v2)(int); // rdx

 v2 = double_value;
 if ( mode )
 {
 v2 = triple_value;
 if ( mode != 1 )
 v2 = recursion_factorial;
 }
 return v2(x);
}


/* Function: state_machine @ 0x21AE */
int state_machine(int event, int state)
{
 int result; // eax

 if ( state == 2 )
 return 2;
 if ( state > 2 )
 {
 if ( state == 3 )
 {
 result = event;
 if ( event )
 return 3;
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
 else
 {
 result = 3;
 if ( event != 99 )
 return 1;
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
 return result;
}


/* Function: fsm_func_table @ 0x21FC */
int fsm_func_table(int event, int state)
{
 long long v2; // rdx
 long long v3; // rcx
 long long v4; // r8
 long long v5; // r9
 int result; // eax
 int (*state_handlers[5])(int); // [rsp+0h] [rbp-38h]
 unsigned long long v8; // [rsp+28h] [rbp-10h]

 v8 = __readfsqword(0x28u);
 state_handlers[0] = state_idle;
 state_handlers[1] = state_processing;
 state_handlers[2] = state_done;
 state_handlers[3] = state_error;
 result = 3;
 if ( (unsigned int)state <= 3 )
 return ((long long ( *)(int, unsigned long long, long long, long long, long long, long long, int (*)(int), int (*)(int), int (*)(int), int (*)(int)))state_handlers[state])(
 event,
 state,
 v2,
 v3,
 v4,
 v5,
 state_handlers[0],
 state_handlers[1],
 state_handlers[2],
 state_handlers[3]);
 return result;
}


/* Function: computed_goto @ 0x226D */
int computed_goto(int *labels, int idx)
{
 static void *computed_labels[4] = { &&label_0, &&label_1, &&label_2, &&label_3 };
 int result; // eax

 result = -1;
 if ( (unsigned int)idx <= 3 )
 {
 goto *computed_labels[idx];
label_0:
 result = labels[0];
 goto done;
label_1:
 result = labels[1];
 goto done;
label_2:
 result = labels[2];
 goto done;
label_3:
 result = labels[3];
 }
done:
 return result;
}


/* Function: obfuscated_cf @ 0x230A */
int obfuscated_cf(int x)
{
 return 2 * x;
}


/* Function: opaque_predicate @ 0x2312 */
int opaque_predicate(int x)
{
 return 2 * x;
}


/* Function: overlapped_code @ 0x231A */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x2333 */
void test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int labels[6]; // [rsp+0h] [rbp-28h] BYREF
 unsigned long long v7; // [rsp+18h] [rbp-10h]

 v7 = __readfsqword(0x28u);
 puts(asc_3310);
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


/* Function: main @ 0x2515 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


/* Function: .term_proc @ 0x2548 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6110 */

/* FAILED to decompile: puts @ 0x6118 */

/* FAILED to decompile: __stack_chk_fail @ 0x6120 */

/* FAILED to decompile: _setjmp @ 0x6128 */

/* FAILED to decompile: __printf_chk @ 0x6130 */

/* FAILED to decompile: __longjmp_chk @ 0x6138 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6140 */

/* FAILED to decompile: __gmon_start__ @ 0x6150 */

/* Total functions decompiled: 78, failed: 8 */
