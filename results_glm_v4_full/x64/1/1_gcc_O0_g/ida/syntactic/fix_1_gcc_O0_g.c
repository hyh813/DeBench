/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/1/1_gcc_O0_g
 * Processor: pc
 */

/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 ;
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



#include <setjmp.h>

/* Define __readfsqword intrinsic for x86_64 */
static inline unsigned long long __readfsqword(unsigned long long offset)
{
    unsigned long long result;
    __asm__ volatile ("movq %%fs:%1, %0" : "=r" (result) : "m" (*(const unsigned long long *)(offset)));
    return result;
}

static jmp_buf jump_buffer;

static const char s[] = "Testing Level 1 Control Flow";
static const char asc_34F0[] = "Testing Level 3 Control Flow";

/* Function: sequential_ops @ 0x11C9 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x11FB */
int single_if(int x)
{
 int xa; // [rsp+0h] [rbp-4h]

 xa = x;
 if ( x > 0 )
 return 2 * x;
 return xa;
}


/* Function: if_else @ 0x1214 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x1233 */
int nested_if_2(int a, int b)
{
 if ( a <= 0 )
 return 0;
 if ( b <= 0 )
 return a;
 return a + b;
}


/* Function: nested_if_deep @ 0x1263 */
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
 if ( e <= 0 )
 return 4;
 return 5;
}


/* Function: if_elseif_chain @ 0x12C3 */
int if_elseif_chain(int x)
{
 switch ( x )
 {
 case 0:
 return 10;
 case 1:
 return 20;
 case 2:
 return 30;
 }
 return -1;
}


/* Function: if_elseif_long @ 0x12FC */
int if_elseif_long(int x)
{
 switch ( x )
 {
 case 0:
 return 100;
 case 1:
 return 200;
 case 2:
 return 300;
 case 3:
 return 400;
 case 4:
 return 500;
 }
 return -1;
}


/* Function: switch_small @ 0x134F */
int switch_small(int op)
{
 if ( op == 3 )
 return 2;
 if ( op <= 3 )
 {
 switch ( op )
 {
 case 2:
 return 50;
 case 0:
 return 15;
 case 1:
 return 5;
 }
 }
 return -1;
}


/* Function: switch_large @ 0x13B9 */
int switch_large(int op)
{
 int result; // eax

 switch ( op )
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


/* Function: switch_default @ 0x143B */
int switch_default(int op)
{
 if ( op == 3 )
 return 300;
 if ( op > 3 )
 return 0;
 if ( op == 1 )
 return 100;
 if ( op == 2 )
 return 200;
 else
 return 0;
}


/* Function: switch_fallthrough @ 0x147C */
int switch_fallthrough(int op)
{
 int result; // [rsp+10h] [rbp-4h]

 result = 0;
 if ( op == 3 )
 {
 result = 12;
LABEL_7:
 result += 2 * op;
 return op + result;
 }
 if ( op > 3 )
 return -1;
 if ( op != 1 )
 {
 if ( op != 2 )
 return -1;
 goto LABEL_7;
 }
 return op + result;
}


/* Function: loop_for_fixed @ 0x14CD */
int loop_for_fixed(int n)
{
 int sum; // [rsp+Ch] [rbp-8h]
 int i; // [rsp+10h] [rbp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += i;
 return sum;
}


/* Function: loop_while @ 0x14FF */
int loop_while(int x)
{
 int result; // eax
 int count; // [rsp+10h] [rbp-4h]

 count = 0;
 while ( x )
 {
 x /= 10;
 ++count;
 }
 result = count;
 if ( count <= 0 )
 return 1;
 return result;
}


/* Function: loop_dowhile @ 0x154C */
int loop_dowhile(int x)
{
 int count; // [rsp+10h] [rbp-4h]

 count = 0;
 do
 {
 x /= 10;
 ++count;
 }
 while ( x );
 return count;
}


/* Function: loop_nested @ 0x158D */
int loop_nested(int m, int n)
{
 int total; // [rsp+Ch] [rbp-Ch]
 int i; // [rsp+10h] [rbp-8h]
 int j; // [rsp+14h] [rbp-4h]

 total = 0;
 for ( i = 0; i < m; ++i )
 {
 for ( j = 0; j < n; ++j )
 ++total;
 }
 return total;
}


/* Function: loop_break @ 0x15D5 */
int loop_break(int target)
{
 int i; // [rsp+18h] [rbp-28h]
 int arr[6]; // [rsp+20h] [rbp-20h]
 unsigned long long v4; // [rsp+38h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 arr[0] = 10;
 arr[1] = 20;
 arr[2] = 30;
 arr[3] = 40;
 arr[4] = 50;
 for ( i = 0; i < 5; ++i )
 {
 if ( target == arr[i] )
 return i;
 }
 return -1;
}


/* Function: loop_continue @ 0x1660 */
int loop_continue(int n)
{
 int sum; // [rsp+Ch] [rbp-8h]
 int i; // [rsp+10h] [rbp-4h]

 sum = 0;
 for ( i = 1; i <= n; ++i )
 {
 if ( (i & 1) != 0 )
 sum += i;
 }
 return sum;
}


/* Function: goto_forward @ 0x169F */
int goto_forward(int x)
{
 int result; // [rsp+10h] [rbp-4h]

 if ( x <= 0 )
 result = x;
 else
 result = x * x;
 return 2 * result;
}


/* Function: goto_backward @ 0x16C9 */
int goto_backward(int x)
{
 int result; // [rsp+Ch] [rbp-8h]
 int i; // [rsp+10h] [rbp-4h]

 if ( x <= 0 )
 return 1;
 result = 1;
 for ( i = 1; i <= x; ++i )
 result *= i;
 return result;
}


/* Function: ternary_op @ 0x170D */
int ternary_op(int a, int b)
{
 int result; // eax

 result = a;
 if ( b >= a )
 return b;
 return result;
}


/* Function: test_control_flow_l1 @ 0x1728 */
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
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax
 int v12; // eax
 int v13; // eax
 int v14; // eax
 int v15; // eax
 int v16; // eax
 int v17; // eax
 int v18; // eax
 int v19; // eax
 int v20; // eax
 int v21; // eax
 int v22; // eax
 int v23; // eax
 int v24; // eax
 int v25; // eax
 int v26; // eax

 puts(s);
 v0 = sequential_ops(5, 7, 3);
 printf("CF-L1-01 (sequential_ops): %d\n", v0);
 v1 = single_if(10);
 printf("CF-L1-02 (single_if): %d\n", v1);
 v2 = single_if(-5);
 printf("CF-L1-02 (single_if): %d\n", v2);
 v3 = if_else(5);
 printf("CF-L1-03 (if_else): %d\n", v3);
 v4 = if_else(-3);
 printf("CF-L1-03 (if_else): %d\n", v4);
 v5 = nested_if_2(10, 5);
 printf("CF-L1-04 (nested_if_2): %d\n", v5);
 v6 = nested_if_2(10, -5);
 printf("CF-L1-04 (nested_if_2): %d\n", v6);
 v7 = nested_if_2(-10, 5);
 printf("CF-L1-04 (nested_if_2): %d\n", v7);
 v8 = nested_if_deep(1, 1, 1, 1, 1);
 printf("CF-L1-05 (nested_if_deep): %d\n", v8);
 v9 = if_elseif_chain(1);
 printf("CF-L1-06 (if_elseif_chain): %d\n", v9);
 v10 = if_elseif_long(3);
 printf("CF-L1-07 (if_elseif_long): %d\n", v10);
 v11 = switch_small(2);
 printf("CF-L1-08 (switch_small): %d\n", v11);
 v12 = switch_large(7);
 printf("CF-L1-09 (switch_large): %d\n", v12);
 v13 = switch_default(5);
 printf("CF-L1-10 (switch_default): %d\n", v13);
 v14 = switch_fallthrough(3);
 printf("CF-L1-11 (switch_fallthrough): %d\n", v14);
 v15 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n", v15);
 v16 = loop_while(12345);
 printf("CF-L1-13 (loop_while): %d\n", v16);
 v17 = loop_dowhile(9876);
 printf("CF-L1-14 (loop_dowhile): %d\n", v17);
 v18 = loop_nested(3, 4);
 printf("CF-L1-15 (loop_nested): %d\n", v18);
 v19 = loop_break(30);
 printf("CF-L1-16 (loop_break): %d\n", v19);
 v20 = loop_break(99);
 printf("CF-L1-16 (loop_break): %d\n", v20);
 v21 = loop_continue(10);
 printf("CF-L1-17 (loop_continue): %d\n", v21);
 v22 = goto_forward(5);
 printf("CF-L1-18 (goto_forward): %d\n", v22);
 v23 = goto_forward(-3);
 printf("CF-L1-18 (goto_forward): %d\n", v23);
 v24 = goto_backward(5);
 printf("CF-L1-19 (goto_backward): %d\n", v24);
 v25 = ternary_op(10, 5);
 printf("CF-L1-20 (ternary_op): %d\n", v25);
 v26 = ternary_op(3, 8);
 printf("CF-L1-20 (ternary_op): %d\n", v26);
}


/* Function: loop_multi_exit @ 0x1ADF */
int loop_multi_exit(int target)
{
 int i; // [rsp+18h] [rbp-48h]
 int j; // [rsp+1Ch] [rbp-44h]
 int matrix[3][4]; // [rsp+20h] [rbp-40h]
 unsigned long long v5; // [rsp+58h] [rbp-8h]

 v5 = __readfsqword(0x28u);
 *(unsigned long long *)&matrix[0][0] = 0x200000001LL;
 *(unsigned long long *)&matrix[0][2] = 0x400000003LL;
 *(unsigned long long *)&matrix[1][0] = 0x600000005LL;
 *(unsigned long long *)&matrix[1][2] = 0x800000007LL;
 *(unsigned long long *)&matrix[2][0] = 0xA00000009LL;
 *(unsigned long long *)&matrix[2][2] = 0xC0000000BLL;
 for ( i = 0; i <= 2; ++i )
 {
 for ( j = 0; j <= 3; ++j )
 {
 if ( target == matrix[i][j] )
 return 10 * i + j;
 }
 }
 return -1;
}


/* Function: infinite_loop @ 0x1BC2 */
int infinite_loop(volatile int *flag)
{
 int count; // [rsp+14h] [rbp-4h]

 count = 0;
 while ( *flag != 1 )
 {
 if ( ++count > 1000 )
 {
 *flag = 1;
 return count;
 }
 }
 return count;
}


/* Function: multi_return @ 0x1BFF */
int multi_return(int x)
{
 if ( x < 0 )
 return -1;
 if ( 2 * x > 100 )
 return -2;
 if ( (x & 1) != 0 )
 return x + 1;
 return 2 * x;
}


/* Function: conditional_return @ 0x1C43 */
int conditional_return(int x)
{
 if ( x > 0 )
 return 2 * x;
 if ( x >= 0 )
 return 0;
 return -x;
}


/* Function: duffs_device @ 0x1C6F */
int duffs_device(int *dst, int *src, int n)
{
 int v4; // eax
 int *v5; // rdx
 int *v6; // rax
 int *v7; // rdx
 int *v8; // rax
 int *v9; // rdx
 int *v10; // rax
 int *v11; // rdx
 int *v12; // rax
 int *v13; // rdx
 int *v14; // rax
 int *v15; // rdx
 int *v16; // rax
 int *v17; // rdx
 int *v18; // rax
 int *v19; // rdx
 int *v20; // rax
 int count; // [rsp+20h] [rbp-4h]

 if ( n <= 0 )
 return -1;
 v4 = n + 7;
 if ( n + 7 < 0 )
 v4 = n + 14;
 count = v4 >> 3;
 switch ( n % 8 )
 {
 case 0:
 goto LABEL_6;
 case 1:
 goto LABEL_13;
 case 2:
 goto LABEL_12;
 case 3:
 goto LABEL_11;
 case 4:
 goto LABEL_10;
 case 5:
 goto LABEL_9;
 case 6:
 goto LABEL_8;
 case 7:
 while ( 1 )
 {
 v7 = src++;
 v8 = dst++;
 *v8 = *v7;
LABEL_8:
 v9 = src++;
 v10 = dst++;
 *v10 = *v9;
LABEL_9:
 v11 = src++;
 v12 = dst++;
 *v12 = *v11;
LABEL_10:
 v13 = src++;
 v14 = dst++;
 *v14 = *v13;
LABEL_11:
 v15 = src++;
 v16 = dst++;
 *v16 = *v15;
LABEL_12:
 v17 = src++;
 v18 = dst++;
 *v18 = *v17;
LABEL_13:
 v19 = src++;
 v20 = dst++;
 *v20 = *v19;
 if ( --count <= 0 )
 break;
LABEL_6:
 v5 = src++;
 v6 = dst++;
 *v6 = *v5;
 }
 break;
 default:
 return n;
 }
 return n;
}


/* Function: loop_complex_cond @ 0x1DD4 */
int loop_complex_cond(int x)
{
 int a; // [rsp+8h] [rbp-Ch]
 int c; // [rsp+10h] [rbp-4h]

 a = 0;
 for ( c = 0; a < x && c <= 9 && x > 0; ++c )
 {
 a += 2;
 --x;
 }
 return x + a + c;
}


/* Function: loop_modify_var @ 0x1E24 */
int loop_modify_var(int n)
{
 int sum; // [rsp+Ch] [rbp-8h]
 int i; // [rsp+10h] [rbp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 {
 sum += i;
 if ( i > 5 )
 i += 2;
 }
 return sum;
}


/* Function: loop_external_state @ 0x1E60 */
int loop_external_state(volatile int *flag)
{
 int count; // [rsp+14h] [rbp-4h]

 for ( count = 0; count <= 100; ++count )
 {
 if ( *flag )
 break;
 }
 return count;
}


/* Function: recursion_factorial @ 0x1E91 */
int recursion_factorial(int n)
{
 if ( n > 1 )
 return n * recursion_factorial(n - 1);
 else
 return 1;
}


/* Function: tail_recursion @ 0x1EC0 */
int tail_recursion(int n, int acc)
{
 if ( n > 1 )
 return tail_recursion(n - 1, acc * n);
 else
 return acc;
}


/* Function: indirect_recursion_a @ 0x1EF5 */
int indirect_recursion_a(int n, int depth)
{
 if ( depth <= 0 )
 return n;
 if ( (n & 1) != 0 )
 return indirect_recursion_b(3 * n + 1, depth - 1);
 return indirect_recursion_b(n / 2, depth - 1);
}


/* Function: indirect_recursion_b @ 0x1F56 */
int indirect_recursion_b(int n, int depth)
{
 if ( depth > 0 )
 return indirect_recursion_a(n + 1, depth - 1);
 else
 return n;
}


/* Function: call_func_ptr @ 0x1F8A */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: double_value @ 0x1FAA */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x1FBC */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: call_func_ptr_array @ 0x1FD2 */
int call_func_ptr_array(int idx, int x)
{
 int (*funcs[3])(int); // [rsp+10h] [rbp-20h]
 unsigned long long v4; // [rsp+28h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 funcs[0] = (int (*)(int))double_value;
 funcs[1] = (int (*)(int))triple_value;
 funcs[2] = (int (*)(int))recursion_factorial;
 if ( (unsigned int)idx <= 2 )
 return funcs[idx](x);
 else
 return -1;
}


/* Function: call_virtual_func @ 0x204E */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x2064 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int sum; // [rsp+28h] [rbp-8h]
 int i; // [rsp+2Ch] [rbp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += cb(arr[i]);
 return sum;
}


/* Function: test_control_flow_l2 @ 0x20BD */
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
 int v13; // eax
 int v14; // eax
 int v15; // eax
 int v16; // eax
 int v17; // eax
 int flag; // [rsp+8h] [rbp-78h] BYREF
 int ext_flag; // [rsp+Ch] [rbp-74h] BYREF
 int arr[8]; // [rsp+10h] [rbp-70h] BYREF
 int src[8]; // [rsp+30h] [rbp-50h] BYREF
 int dst[10]; // [rsp+50h] [rbp-30h] BYREF
 unsigned long long v23; // [rsp+78h] [rbp-8h]

 v23 = __readfsqword(0x28u);
 puts("Testing Level 2 Control Flow");
 v0 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n", v0);
 flag = 0;
 v1 = infinite_loop(&flag);
 printf("CF-L2-02 (infinite_loop): %d\n", v1);
 v2 = multi_return(-5);
 printf("CF-L2-03 (multi_return): %d\n", v2);
 v3 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n", v3);
 v4 = multi_return(3);
 printf("CF-L2-03 (multi_return): %d\n", v4);
 v5 = conditional_return(5);
 printf("CF-L2-04 (conditional_return): %d\n", v5);
 v6 = conditional_return(-5);
 printf("CF-L2-04 (conditional_return): %d\n", v6);
 src[0] = 1;
 src[1] = 2;
 src[2] = 3;
 src[3] = 4;
 src[4] = 5;
 src[5] = 6;
 src[6] = 7;
 src[7] = 8;
 memset(dst, 0, 32);
 v7 = duffs_device(dst, src, 8);
 printf("CF-L2-05 (duffs_device): %d\n", v7);
 v8 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n", v8);
 v9 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n", v9);
 ext_flag = 0;
 v10 = loop_external_state(&ext_flag);
 printf("CF-L2-08 (loop_external_state): %d\n", v10);
 v11 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n", v11);
 v12 = tail_recursion(5, 1);
 printf("CF-L2-10 (tail_recursion): %d\n", v12);
 v13 = indirect_recursion_a(10, 3);
 printf("CF-L2-11 (indirect_recursion): %d\n", v13);
 v14 = call_func_ptr((int (*)(int))double_value, 5);
 printf("CF-L2-12 (call_func_ptr): %d\n", v14);
 v15 = call_func_ptr_array(0, 5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", v15);
 v16 = call_func_ptr_array(2, 5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", v16);
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 v17 = process_with_callback(arr, 5, (int (*)(int))double_value);
 printf("CF-L2-15 (process_with_callback): %d\n", v17);
}


/* Function: non_local_jump @ 0x2405 */
int non_local_jump(int x)
{
 if ( _setjmp(jump_buffer) )
 return -1;
 if ( x < 0 )
 longjmp(jump_buffer, 1);
 if ( x > 100 )
 longjmp(jump_buffer, 2);
 return 2 * x;
}


/* Function: cpp_exception @ 0x246D */
int cpp_exception(int x)
{
 if ( x < 0 )
 return -1;
 if ( x <= 100 )
 return 2 * x;
 return -2;
}


/* Function: op_add @ 0x2499 */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x24B1 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x24C7 */
int op_mul(int a, int b)
{
 return b * a;
}


/* Function: op_div @ 0x24DE */
int op_div(int a, int b)
{
 if ( b )
 return a / b;
 else
 return 0;
}


/* Function: op_mod @ 0x2502 */
int op_mod(int a, int b)
{
 if ( b )
 return a % b;
 else
 return 0;
}


/* Function: op_and @ 0x2528 */
int op_and(int a, int b)
{
 return b & a;
}


/* Function: op_or @ 0x253E */
int op_or(int a, int b)
{
 return b | a;
}


/* Function: op_xor @ 0x2554 */
int op_xor(int a, int b)
{
 return b ^ a;
}


/* Function: op_shl @ 0x256A */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x2586 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: large_jump_table @ 0x25A2 */
int large_jump_table(int op, int a, int b)
{
 int (*ops[11])(int, int); // [rsp+10h] [rbp-60h]
 unsigned long long v5; // [rsp+68h] [rbp-8h]

 v5 = __readfsqword(0x28u);
 ops[0] = (int (*)(int, int))op_add;
 ops[1] = (int (*)(int, int))op_sub;
 ops[2] = (int (*)(int, int))op_mul;
 ops[3] = (int (*)(int, int))op_div;
 ops[4] = (int (*)(int, int))op_mod;
 ops[5] = (int (*)(int, int))op_and;
 ops[6] = (int (*)(int, int))op_or;
 ops[7] = (int (*)(int, int))op_xor;
 ops[8] = (int (*)(int, int))op_shl;
 ops[9] = (int (*)(int, int))op_shr;
 if ( (unsigned int)op < 0xA )
 return ops[op](a, b);
 else
 return -1;
}


/* Function: conditional_func_ptr @ 0x2673 */
int conditional_func_ptr(int mode, int x)
{
 int (*func)(int); // [rsp+18h] [rbp-8h]

 if ( mode )
 {
 if ( mode == 1 )
 func = (int (*)(int))triple_value;
 else
 func = (int (*)(int))recursion_factorial;
 }
 else
 {
 func = (int (*)(int))double_value;
 }
 return func(x);
}


/* Function: state_machine @ 0x26C3 */
int state_machine(int event, int state)
{
 if ( state == 3 )
 {
 if ( event )
 return 3;
 else
 return 0;
 }
 else
 {
 if ( state > 3 )
 return 3;
 switch ( state )
 {
 case 2:
 return 2;
 case 0:
 return event == 1;
 case 1:
 if ( event == 2 )
 {
 return 2;
 }
 else if ( event == 99 )
 {
 return 3;
 }
 else
 {
 return 1;
 }
 default:
 return 3;
 }
 }
}


/* Function: state_idle @ 0x274E */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x2765 */
int state_processing(int event)
{
 if ( event == 2 )
 return 2;
 if ( event == 99 )
 return 3;
 return 1;
}


/* Function: state_done @ 0x2791 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x27A3 */
int state_error(int event)
{
 if ( event )
 return 3;
 else
 return 0;
}


/* Function: fsm_func_table @ 0x27C2 */
int fsm_func_table(int event, int state)
{
 int (*state_handlers[5])(int); // [rsp+10h] [rbp-30h]
 unsigned long long v4; // [rsp+38h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 state_handlers[0] = (int (*)(int))state_idle;
 state_handlers[1] = (int (*)(int))state_processing;
 state_handlers[2] = (int (*)(int))state_done;
 state_handlers[3] = (int (*)(int))state_error;
 if ( (unsigned int)state < 4 )
 return state_handlers[state](event);
 else
 return 3;
}


/* Function: computed_goto @ 0x2849 */
int computed_goto(int *labels, int idx)
{
 void *targets[4]; // [rsp+10h] [rbp-30h]
 unsigned long long v4; // [rsp+38h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 if ( (unsigned int)idx < 4 )
 {
   /* Computed goto - simplified implementation */
   return labels[idx];
 }
 return -1;
}


/* Function: obfuscated_cf @ 0x28F7 */
int obfuscated_cf(int x)
{
 int result; // [rsp+10h] [rbp-4h]

 result = x;
 if ( x * x < -1 )
 result = 2 * x + 1;
 return 2 * result;
}


/* Function: opaque_predicate @ 0x2926 */
int opaque_predicate(int x)
{
 return 2 * x;
}


/* Function: overlapped_code @ 0x2950 */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x2981 */
void test_control_flow_l3()
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
 int labels[6]; // [rsp+0h] [rbp-20h] BYREF
 unsigned long long v13; // [rsp+18h] [rbp-8h]

 v13 = __readfsqword(0x28u);
 puts(asc_34F0);
 v0 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n", v1);
 v2 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n", v2);
 v3 = cpp_exception(-5);
 printf("CF-L3-02 (cpp_exception): %d\n", v3);
 v4 = large_jump_table(0, 10, 5);
 printf("CF-L3-03 (large_jump_table): %d\n", v4);
 v5 = conditional_func_ptr(0, 5);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", v5);
 v6 = state_machine(1, 0);
 printf("CF-L3-05 (state_machine): %d\n", v6);
 v7 = fsm_func_table(2, 1);
 printf("CF-L3-06 (fsm_func_table): %d\n", v7);
 labels[0] = 0;
 labels[1] = 1;
 labels[2] = 2;
 labels[3] = 3;
 v8 = computed_goto(labels, 2);
 printf("CF-L3-07 (computed_goto): %d\n", v8);
 v9 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n", v9);
 v10 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n", v10);
 v11 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n", v11);
}


/* Function: main @ 0x2B7E */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


/* Function: .term_proc @ 0x2BAC */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6110 */

/* FAILED to decompile: puts @ 0x6118 */

/* FAILED to decompile: __stack_chk_fail @ 0x6120 */

/* FAILED to decompile: printf @ 0x6128 */

/* FAILED to decompile: _setjmp @ 0x6130 */

/* FAILED to decompile: longjmp @ 0x6138 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6140 */

/* FAILED to decompile: __gmon_start__ @ 0x6150 */

/* Total functions decompiled: 79, failed: 8 */
