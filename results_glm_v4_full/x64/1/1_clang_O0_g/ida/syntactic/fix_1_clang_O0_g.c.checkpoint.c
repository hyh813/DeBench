/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/1/1_clang_O0_g
 * Processor: pc
 */

#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stdbool.h>

/* Global variables */
jmp_buf jump_buffer;
const char *format = "";
const char *asc_3352 = "";
const char *asc_3546 = "";
int unk_30A0[12];
int (*off_5D60[10])(int, int);
int label0 = 0;
int label1 = 1;
int label2 = 2;
int label3 = 3;

/* Forward declarations */
int indirect_recursion_b(int n, int depth);
int double_value(int x);
int triple_value(int x);
int state_idle(int event);
int state_processing(int event);
int state_done(int event);
int state_error(int event);

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = 0;
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 return;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: sequential_ops @ 0x1180 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (b + a) - c;
}


/* Function: single_if @ 0x11B0 */
int single_if(int x)
{
 int xa; // [rsp+0h] [rbp-4h]

 xa = x;
 if ( x > 0 )
 return 2 * x;
 return xa;
}


/* Function: if_else @ 0x11D0 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x1200 */
int nested_if_2(int a, int b)
{
 if ( a <= 0 )
 return 0;
 if ( b <= 0 )
 return a;
 return b + a;
}


/* Function: nested_if_deep @ 0x1250 */
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


/* Function: if_elseif_chain @ 0x12E0 */
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


/* Function: if_elseif_long @ 0x1340 */
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


/* Function: switch_small @ 0x13D0 */
int switch_small(int op)
{
 int v2; // [rsp+14h] [rbp-4h]

 switch ( op )
 {
 case 0:
 v2 = 15;
 break;
 case 1:
 v2 = 5;
 break;
 case 2:
 v2 = 50;
 break;
 case 3:
 v2 = 2;
 break;
 default:
 v2 = -1;
 break;
 }
 return v2;
}


/* Function: switch_large @ 0x1450 */
int switch_large(int op)
{
 int v2; // [rsp+Ch] [rbp-4h]

 switch ( op )
 {
 case 0:
 v2 = 0;
 break;
 case 1:
 v2 = 10;
 break;
 case 2:
 v2 = 20;
 break;
 case 3:
 v2 = 30;
 break;
 case 4:
 v2 = 40;
 break;
 case 5:
 v2 = 50;
 break;
 case 6:
 v2 = 60;
 break;
 case 7:
 v2 = 70;
 break;
 case 8:
 v2 = 80;
 break;
 case 9:
 v2 = 90;
 break;
 default:
 v2 = -1;
 break;
 }
 return v2;
}


/* Function: switch_default @ 0x1500 */
int switch_default(int op)
{
 switch ( op )
 {
 case 1:
 return 100;
 case 2:
 return 200;
 case 3:
 return 300;
 }
 return 0;
}


/* Function: switch_fallthrough @ 0x1570 */
int switch_fallthrough(int op)
{
 int result; // [rsp+4h] [rbp-8h]

 result = 0;
 if ( op != 1 )
 {
 if ( op != 2 )
 {
 if ( op != 3 )
 return -1;
 result = 12;
 }
 result += 2 * op;
 }
 return result + op;
}


/* Function: loop_for_fixed @ 0x15F0 */
int loop_for_fixed(int n)
{
 int i; // [rsp+0h] [rbp-Ch]
 int sum; // [rsp+4h] [rbp-8h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += i;
 return sum;
}


/* Function: loop_while @ 0x1630 */
int loop_while(int x)
{
 int count; // [rsp+4h] [rbp-8h]

 count = 0;
 while ( x )
 {
 x /= 10;
 ++count;
 }
 if ( count <= 0 )
 return 1;
 else
 return count;
}


/* Function: loop_dowhile @ 0x1690 */
int loop_dowhile(int x)
{
 int count; // [rsp+0h] [rbp-8h]

 count = 0;
 do
 {
 x /= 10;
 ++count;
 }
 while ( x );
 return count;
}


/* Function: loop_nested @ 0x16D0 */
int loop_nested(int m, int n)
{
 int j; // [rsp+0h] [rbp-14h]
 int i; // [rsp+4h] [rbp-10h]
 int total; // [rsp+8h] [rbp-Ch]

 total = 0;
 for ( i = 0; i < m; ++i )
 {
 for ( j = 0; j < n; ++j )
 ++total;
 }
 return total;
}


/* Function: loop_break @ 0x1740 */
int loop_break(int target)
{
 int i; // [rsp+0h] [rbp-28h]
 int arr[5]; // [rsp+8h] [rbp-20h]
 int targeta; // [rsp+20h] [rbp-8h]

 targeta = target;
 *(unsigned long long *)arr = 0x140000000ALL;
 *(unsigned long long *)&arr[2] = 0x280000001ELL;
 arr[4] = 50;
 for ( i = 0; i < 5; ++i )
 {
 if ( arr[i] == targeta )
 return i;
 }
 return -1;
}


/* Function: loop_continue @ 0x17C0 */
int loop_continue(int n)
{
 int i; // [rsp+0h] [rbp-Ch]
 int sum; // [rsp+4h] [rbp-8h]

 sum = 0;
 for ( i = 1; i <= n; ++i )
 {
 if ( i % 2 )
 sum += i;
 }
 return sum;
}


/* Function: goto_forward @ 0x1820 */
int goto_forward(int x)
{
 int result; // [rsp+0h] [rbp-8h]

 if ( x <= 0 )
 result = x;
 else
 result = x * x;
 return 2 * result;
}


/* Function: goto_backward @ 0x1860 */
int goto_backward(int x)
{
 int i; // [rsp+0h] [rbp-10h]
 int result; // [rsp+4h] [rbp-Ch]

 if ( x <= 0 )
 return 1;
 result = 1;
 for ( i = 1; i <= x; ++i )
 result *= i;
 return result;
}


/* Function: ternary_op @ 0x18C0 */
int ternary_op(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: test_control_flow_l1 @ 0x18F0 */
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

 printf("");
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


/* Function: loop_multi_exit @ 0x1C00 */
int loop_multi_exit(int target)
{
 int j; // [rsp+8h] [rbp-48h]
 int i; // [rsp+Ch] [rbp-44h]
 int matrix[3][4]; // [rsp+10h] [rbp-40h] BYREF
 int targeta; // [rsp+48h] [rbp-8h]

 targeta = target;
 memcpy(matrix, &unk_30A0, sizeof(matrix));
 for ( i = 0; i < 3; ++i )
 {
 for ( j = 0; j < 4; ++j )
 {
 if ( matrix[i][j] == targeta )
 return j + 10 * i;
 }
 }
 return -1;
}


/* Function: infinite_loop @ 0x1CB0 */
int infinite_loop(volatile int *flag)
{
 int count; // [rsp+0h] [rbp-Ch]

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


/* Function: multi_return @ 0x1D10 */
int multi_return(int x)
{
 if ( x < 0 )
 return -1;
 if ( 2 * x > 100 )
 return -2;
 if ( x % 2 )
 return x + 1;
 return 2 * x;
}


/* Function: conditional_return @ 0x1D80 */
int conditional_return(int x)
{
 if ( x > 0 )
 return 2 * x;
 if ( x >= 0 )
 return 0;
 else
 return -x;
}


/* Function: duffs_device @ 0x1DD0 */
int duffs_device(int *dst, int *src, int n)
{
 int v3; // eax
 int *v4; // rax
 int v5; // ecx
 int *v6; // rax
 int *v7; // rax
 int v8; // ecx
 int *v9; // rax
 int *v10; // rax
 int v11; // ecx
 int *v12; // rax
 int *v13; // rax
 int v14; // ecx
 int *v15; // rax
 int *v16; // rax
 int v17; // ecx
 int *v18; // rax
 int *v19; // rax
 int v20; // ecx
 int *v21; // rax
 int *v22; // rax
 int v23; // ecx
 int *v24; // rax
 int *v25; // rax
 int v26; // ecx
 int *v27; // rax
 int count; // [rsp+8h] [rbp-20h]

 if ( n <= 0 )
 return -1;
 v3 = n + 7;
 if ( n + 7 < 0 )
 v3 = n + 14;
 count = v3 >> 3;
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
 v8 = *v7;
 v9 = dst++;
 *v9 = v8;
LABEL_8:
 v10 = src++;
 v11 = *v10;
 v12 = dst++;
 *v12 = v11;
LABEL_9:
 v13 = src++;
 v14 = *v13;
 v15 = dst++;
 *v15 = v14;
LABEL_10:
 v16 = src++;
 v17 = *v16;
 v18 = dst++;
 *v18 = v17;
LABEL_11:
 v19 = src++;
 v20 = *v19;
 v21 = dst++;
 *v21 = v20;
LABEL_12:
 v22 = src++;
 v23 = *v22;
 v24 = dst++;
 *v24 = v23;
LABEL_13:
 v25 = src++;
 v26 = *v25;
 v27 = dst++;
 *v27 = v26;
 if ( --count <= 0 )
 break;
LABEL_6:
 v4 = src++;
 v5 = *v4;
 v6 = dst++;
 *v6 = v5;
 }
 break;
 default:
 return n;
 }
 return n;
}


/* Function: loop_complex_cond @ 0x1F80 */
int loop_complex_cond(int x)
{
 bool v2; // [rsp+1h] [rbp-11h]
 int c; // [rsp+2h] [rbp-10h]
 int a; // [rsp+Ah] [rbp-8h]

 a = 0;
 for ( c = 0; ; ++c )
 {
 v2 = 0;
 if ( a < x )
 {
 v2 = 0;
 if ( c < 10 )
 v2 = x > 0;
 }
 if ( !v2 )
 break;
 a += 2;
 --x;
 }
 return c + x + a;
}


/* Function: loop_modify_var @ 0x2000 */
int loop_modify_var(int n)
{
 int i; // [rsp+0h] [rbp-Ch]
 int sum; // [rsp+4h] [rbp-8h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 {
 sum += i;
 if ( i > 5 )
 i += 2;
 }
 return sum;
}


/* Function: loop_external_state @ 0x2060 */
int loop_external_state(volatile int *flag)
{
 int count; // [rsp+0h] [rbp-Ch]

 for ( count = 0; count <= 100; ++count )
 {
 if ( *flag )
 break;
 }
 return count;
}


/* Function: recursion_factorial @ 0x20A0 */
int recursion_factorial(int n)
{
 if ( n > 1 )
 return recursion_factorial(n - 1) * n;
 else
 return 1;
}


/* Function: tail_recursion @ 0x20F0 */
int tail_recursion(int n, int acc)
{
 if ( n > 1 )
 return tail_recursion(n - 1, acc * n);
 else
 return acc;
}


/* Function: indirect_recursion_a @ 0x2140 */
int indirect_recursion_a(int n, int depth)
{
 if ( depth <= 0 )
 return n;
 if ( n % 2 )
 return indirect_recursion_b(3 * n + 1, depth - 1);
 return indirect_recursion_b(n / 2, depth - 1);
}


/* Function: indirect_recursion_b @ 0x21C0 */
int indirect_recursion_b(int n, int depth)
{
 if ( depth > 0 )
 return indirect_recursion_a(n + 1, depth - 1);
 else
 return n;
}


/* Function: call_func_ptr @ 0x2200 */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x2220 */
int call_func_ptr_array(int idx, int x)
{
 long long v2; // rdx
 long long v3; // rcx
 long long v4; // r8
 long long v5; // r9
 int (*funcs[4])(int); // [rsp+0h] [rbp-30h]
 int xa; // [rsp+24h] [rbp-Ch]
 int idxa; // [rsp+28h] [rbp-8h]

 idxa = idx;
 xa = x;
 funcs[0] = (int (*)(int))double_value;
 funcs[1] = (int (*)(int))triple_value;
 funcs[2] = (int (*)(int))recursion_factorial;
 if ( idx >= 0 && idxa < 3 )
 return ((long long ( *)(unsigned long long, int, long long, long long, long long, long long, int (*)(int), int (*)(int), int (*)(int)))funcs[idxa])(
 (unsigned int)xa,
 x,
 v2,
 v3,
 v4,
 v5,
 funcs[0],
 funcs[1],
 funcs[2]);
 else
 return -1;
}


/* Function: double_value @ 0x2290 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x22A0 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: call_virtual_func @ 0x22B0 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x22D0 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int i; // [rsp+0h] [rbp-20h]
 int sum; // [rsp+4h] [rbp-1Ch]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += cb(arr[i]);
 return sum;
}


/* Function: test_control_flow_l2 @ 0x2330 */
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
 int arr[5]; // [rsp+0h] [rbp-70h] BYREF
 int ext_flag; // [rsp+1Ch] [rbp-54h] BYREF
 int dst[8]; // [rsp+20h] [rbp-50h] BYREF
 int src[8]; // [rsp+40h] [rbp-30h] BYREF
 int flag; // [rsp+6Ch] [rbp-4h] BYREF

 printf(asc_3352);
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
 *(unsigned long long *)src = 0x200000001LL;
 *(unsigned long long *)&src[2] = 0x400000003LL;
 *(unsigned long long *)&src[4] = 0x600000005LL;
 *(unsigned long long *)&src[6] = 0x800000007LL;
 memset(dst, 0, sizeof(dst));
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
 *(unsigned long long *)arr = 0x200000001LL;
 *(unsigned long long *)&arr[2] = 0x400000003LL;
 arr[4] = 5;
 v17 = process_with_callback(arr, 5, (int (*)(int))double_value);
 printf("CF-L2-15 (process_with_callback): %d\n", v17);
}


/* Function: non_local_jump @ 0x25C0 */
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


/* Function: cpp_exception @ 0x2640 */
int cpp_exception(int x)
{
 if ( x < 0 )
 return -1;
 if ( x <= 100 )
 return 2 * x;
 return -2;
}


/* Function: large_jump_table @ 0x2690 */
int large_jump_table(int op, int a, int b)
{
 int (*ops[10])(int, int); // [rsp+0h] [rbp-60h] BYREF
 int ba; // [rsp+50h] [rbp-10h]
 int aa; // [rsp+54h] [rbp-Ch]
 int opa; // [rsp+58h] [rbp-8h]

 opa = op;
 aa = a;
 ba = b;
 memcpy(ops, off_5D60, sizeof(ops));
 if ( (unsigned int)opa < 0xA )
 return ops[opa](aa, ba);
 else
 return -1;
}


/* Function: op_add @ 0x2700 */
int op_add(int a, int b)
{
 return b + a;
}


/* Function: op_sub @ 0x2720 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x2740 */
int op_mul(int a, int b)
{
 return b * a;
}


/* Function: op_div @ 0x2760 */
int op_div(int a, int b)
{
 if ( b )
 return a / b;
 else
 return 0;
}


/* Function: op_mod @ 0x27A0 */
int op_mod(int a, int b)
{
 if ( b )
 return a % b;
 else
 return 0;
}


/* Function: op_and @ 0x27E0 */
int op_and(int a, int b)
{
 return b & a;
}


/* Function: op_or @ 0x2800 */
int op_or(int a, int b)
{
 return b | a;
}


/* Function: op_xor @ 0x2820 */
int op_xor(int a, int b)
{
 return b ^ a;
}


/* Function: op_shl @ 0x2840 */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x2860 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: conditional_func_ptr @ 0x2880 */
int conditional_func_ptr(int mode, int x)
{
 int (*func)(int); // [rsp+0h] [rbp-10h]

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


/* Function: state_machine @ 0x28F0 */
int state_machine(int event, int state)
{
 int v3; // [rsp+14h] [rbp-4h]

 switch ( state )
 {
 case 0:
 v3 = event == 1;
 break;
 case 1:
 if ( event == 2 )
 {
 v3 = 2;
 }
 else if ( event == 99 )
 {
 v3 = 3;
 }
 else
 {
 v3 = 1;
 }
 break;
 case 2:
 v3 = 2;
 break;
 case 3:
 if ( event )
 v3 = 3;
 else
 v3 = 0;
 break;
 default:
 v3 = 3;
 break;
 }
 return v3;
}


/* Function: fsm_func_table @ 0x29C0 */
int fsm_func_table(int event, int state)
{
 long long v2; // rdx
 long long v3; // rcx
 long long v4; // r8
 long long v5; // r9
 int (*state_handlers[4])(int); // [rsp+0h] [rbp-30h]
 int statea; // [rsp+24h] [rbp-Ch]
 int eventa; // [rsp+28h] [rbp-8h]

 eventa = event;
 statea = state;
 state_handlers[0] = (int (*)(int))state_idle;
 state_handlers[1] = (int (*)(int))state_processing;
 state_handlers[2] = (int (*)(int))state_done;
 state_handlers[3] = (int (*)(int))state_error;
 if ( state >= 0 && statea < 4 )
 return ((long long ( *)(unsigned long long, int, long long, long long, long long, long long, int (*)(int), int (*)(int), int (*)(int), int (*)(int)))state_handlers[statea])(
 (unsigned int)eventa,
 state,
 v2,
 v3,
 v4,
 v5,
 state_handlers[0],
 state_handlers[1],
 state_handlers[2],
 state_handlers[3]);
 else
 return 3;
}


/* Function: state_idle @ 0x2A40 */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x2A60 */
int state_processing(int event)
{
 if ( event == 2 )
 return 2;
 if ( event == 99 )
 return 3;
 return 1;
}


/* Function: state_done @ 0x2AA0 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x2AB0 */
int state_error(int event)
{
 int result; // eax

 result = 3;
 if ( !event )
 return 0;
 return result;
}


/* Function: computed_goto @ 0x2AD0 */
int computed_goto(int *labels, int idx)
{
 void *targets[4]; // [rsp+8h] [rbp-40h]
 int idxa; // [rsp+34h] [rbp-14h]
 int *labelsa; // [rsp+38h] [rbp-10h]

 labelsa = labels;
 idxa = idx;
 targets[0] = &label0;
 targets[1] = &label1;
 targets[2] = &label2;
 targets[3] = &label3;
 if ( idx >= 0 && idxa <= 3 )
 return labels[idxa];
 return -1;
}


/* Function: obfuscated_cf @ 0x2B70 */
int obfuscated_cf(int x)
{
 int result; // [rsp+0h] [rbp-8h]

 result = x;
 if ( x * x + 1 < 0 )
 result = 2 * x + 1;
 return 2 * result;
}


/* Function: opaque_predicate @ 0x2BB0 */
int opaque_predicate(int x)
{
 return 2 * x;
}


/* Function: overlapped_code @ 0x2BF0 */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x2C30 */
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
 int labels[4]; // [rsp+0h] [rbp-10h] BYREF

 printf(asc_3546);
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
 *(unsigned long long *)labels = 0x100000000LL;
 *(unsigned long long *)&labels[2] = 0x300000002LL;
 v8 = computed_goto(labels, 2);
 printf("CF-L3-07 (computed_goto): %d\n", v8);
 v9 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n", v9);
 v10 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n", v10);
 v11 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n", v11);
}


/* Function: main @ 0x2DB0 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


/* Function: .term_proc @ 0x2DD8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6130 */

/* FAILED to decompile: printf @ 0x6138 */

/* FAILED to decompile: memset @ 0x6140 */

/* FAILED to decompile: _setjmp @ 0x6148 */

/* FAILED to decompile: memcpy @ 0x6150 */

/* FAILED to decompile: longjmp @ 0x6158 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6160 */

/* FAILED to decompile: __gmon_start__ @ 0x6170 */

/* Total functions decompiled: 74, failed: 8 */
