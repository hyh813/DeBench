/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/1/1_clang_O0_g
 * Processor: arm
 */

#include <stdio.h>
#include <setjmp.h>
#include <string.h>
#include <stdint.h>

long long call_weak_fn(void);
void JUMPOUT(long long addr);
jmp_buf jump_buffer;
unsigned long long unk_2B18[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
unsigned long long xmmword_2B04[2] = { 0, 0 };
const char *asc_2B5C = "=== Control Flow Level 1 Tests ===\n";
const char *asc_2DCA = "=== Control Flow Level 2 Tests ===\n";
const char *asc_2FBE = "=== Control Flow Level 3 Tests ===\n";
unsigned long long xmmword_3120[1] = { 0 };
unsigned long long xmmword_3130[1] = { 0 };
unsigned long long xmmword_2B48[1] = { 0 };
unsigned long long xmmword_3140[1] = { 0 };

/* Forward declaration of wrapper function */
static int recursion_factorial_wrapper(int n);

/* Function: .init_proc @ 0x860 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_880 @ 0x880 */
void sub_880()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: sequential_ops @ 0xA54 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0xA9C */
int single_if(int x)
{
 int v2; // [xsp+Ch] [xbp-4h]

 v2 = x;
 if ( x > 0 )
 return 2 * x;
 return v2;
}


/* Function: if_else @ 0xAD0 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0xB08 */
int nested_if_2(int a, int b)
{
 if ( a <= 0 )
 return 0;
 if ( b <= 0 )
 return a;
 return a + b;
}


/* Function: nested_if_deep @ 0xB68 */
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


/* Function: if_elseif_chain @ 0xC20 */
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


/* Function: if_elseif_long @ 0xC90 */
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


/* Function: switch_small @ 0xD38 */
int switch_small(int op)
{
 int v2; // [xsp+1Ch] [xbp-4h]

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


/* Function: switch_large @ 0xDE8 */
int switch_large(int op)
{
 int v2; // [xsp+Ch] [xbp-4h]

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


/* Function: switch_default @ 0xEAC */
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


/* Function: switch_fallthrough @ 0xF20 */
int switch_fallthrough(int op)
{
 int v2; // [xsp+8h] [xbp-8h]

 v2 = 0;
 if ( op != 1 )
 {
 if ( op != 2 )
 {
 if ( op != 3 )
 return -1;
 v2 = 12;
 }
 v2 += 2 * op;
 }
 return v2 + op;
}


/* Function: loop_for_fixed @ 0xFB4 */
int loop_for_fixed(int n)
{
 int i; // [xsp+4h] [xbp-Ch]
 int v3; // [xsp+8h] [xbp-8h]

 v3 = 0;
 for ( i = 0; i < n; ++i )
 v3 += i;
 return v3;
}


/* Function: loop_while @ 0x100C */
int loop_while(int x)
{
 int v3; // [xsp+8h] [xbp-8h]

 v3 = 0;
 while ( x )
 {
 x /= 10;
 ++v3;
 }
 if ( v3 <= 0 )
 return 1;
 else
 return v3;
}


/* Function: loop_dowhile @ 0x107C */
int loop_dowhile(int x)
{
 int v2; // [xsp+8h] [xbp-8h]

 v2 = 0;
 do
 {
 x /= 10;
 ++v2;
 }
 while ( x );
 return v2;
}


/* Function: loop_nested @ 0x10C4 */
int loop_nested(int m, int n)
{
 int j; // [xsp+Ch] [xbp-14h]
 int i; // [xsp+10h] [xbp-10h]
 int v5; // [xsp+14h] [xbp-Ch]

 v5 = 0;
 for ( i = 0; i < m; ++i )
 {
 for ( j = 0; j < n; ++j )
 ++v5;
 }
 return v5;
}


/* Function: loop_break @ 0x114C */
int loop_break(int target)
{
 int i; // [xsp+8h] [xbp-28h]
 unsigned long long v3[2]; // [xsp+10h] [xbp-20h]
 int v4; // [xsp+20h] [xbp-10h]
 int v5; // [xsp+28h] [xbp-8h]

 v5 = target;
 memcpy(v3, xmmword_2B04, sizeof(v3));
 v4 = 50;
 for ( i = 0; i < 5; ++i )
 {
 if ( ((unsigned int *)&v3)[i] == v5 )
 return i;
 }
 return -1;
}


/* Function: loop_continue @ 0x11E4 */
int loop_continue(int n)
{
 int i; // [xsp+4h] [xbp-Ch]
 int v3; // [xsp+8h] [xbp-8h]

 v3 = 0;
 for ( i = 1; i <= n; ++i )
 {
 if ( i % 2 )
 v3 += i;
 }
 return v3;
}


/* Function: goto_forward @ 0x1260 */
int goto_forward(int x)
{
 int v2; // [xsp+8h] [xbp-8h]

 if ( x <= 0 )
 v2 = x;
 else
 v2 = x * x;
 return 2 * v2;
}


/* Function: goto_backward @ 0x12B4 */
int goto_backward(int x)
{
 int i; // [xsp+0h] [xbp-10h]
 int v3; // [xsp+4h] [xbp-Ch]

 if ( x <= 0 )
 return 1;
 v3 = 1;
 for ( i = 1; i <= x; ++i )
 v3 *= i;
 return v3;
}


/* Function: ternary_op @ 0x1338 */
int ternary_op(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: test_control_flow_l1 @ 0x137C */
void test_control_flow_l1()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v7; // w0
 int v8; // w0
 int v9; // w0
 int v10; // w0
 int v11; // w0
 int v12; // w0
 int v13; // w0
 int v14; // w0
 int v15; // w0
 int v16; // w0
 int v17; // w0
 int v18; // w0
 int v19; // w0
 int v20; // w0
 int v21; // w0
 int v22; // w0
 int v23; // w0
 int v24; // w0
 int v25; // w0
 int v26; // w0

 printf(asc_2B5C);
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


/* Function: loop_multi_exit @ 0x1670 */
int loop_multi_exit(int target)
{
 int j; // [xsp+0h] [xbp-40h]
 int i; // [xsp+4h] [xbp-3Ch]
 unsigned long long dest[3]; // [xsp+8h] [xbp-38h] BYREF
 int targeta; // [xsp+38h] [xbp-8h]

 targeta = target;
 memcpy(dest, unk_2B18, sizeof(dest));
 for ( i = 0; i < 3; ++i )
 {
 for ( j = 0; j < 4; ++j )
 {
 if ( ((unsigned int *)(&dest[i]))[j] == targeta )
 return 10 * i + j;
 }
 }
 return -1;
}

/* Forward declarations for operation functions used in off_13D48_weak */
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

/* Weak symbol definition for off_13D48 array to allow memcpy */
__attribute__((weak)) int (*off_13D48_weak[10])(int, int) = { 
    op_add,
    op_sub,
    op_mul,
    op_div,
    op_mod,
    op_and,
    op_or,
    op_xor,
    op_shl,
    op_shr
};


/* Function: infinite_loop @ 0x1748 */
int infinite_loop(volatile int *flag)
{
 int v2; // [xsp+4h] [xbp-Ch]

 v2 = 0;
 while ( *flag != 1 )
 {
 if ( ++v2 > 1000 )
 {
 *flag = 1;
 return v2;
 }
 }
 return v2;
}


/* Function: multi_return @ 0x17AC */
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


/* Function: conditional_return @ 0x183C */
int conditional_return(int x)
{
 if ( x > 0 )
 return 2 * x;
 if ( x >= 0 )
 return 0;
 else
 return -x;
}


/* Function: duffs_device @ 0x18AC */
int duffs_device(int *dst, int *src, int n)
{
 int *v3; // x8
 int *v4; // x9
 int *v5; // x8
 int *v6; // x9
 int *v7; // x8
 int *v8; // x9
 int *v9; // x8
 int *v10; // x9
 int *v11; // x8
 int *v12; // x9
 int *v13; // x8
 int *v14; // x9
 int *v15; // x8
 int *v16; // x9
 int *v17; // x8
 int *v18; // x9
 int v20; // [xsp+10h] [xbp-20h]

 if ( n <= 0 )
 return -1;
 v20 = (n + 7) / 8;
 switch ( n % 8 )
 {
 case 0:
 goto LABEL_4;
 case 1:
 goto LABEL_11;
 case 2:
 goto LABEL_10;
 case 3:
 goto LABEL_9;
 case 4:
 goto LABEL_8;
 case 5:
 goto LABEL_7;
 case 6:
 goto LABEL_6;
 case 7:
 while ( 1 )
 {
 v5 = src++;
 v6 = dst++;
 *v6 = *v5;
LABEL_6:
 v7 = src++;
 v8 = dst++;
 *v8 = *v7;
LABEL_7:
 v9 = src++;
 v10 = dst++;
 *v10 = *v9;
LABEL_8:
 v11 = src++;
 v12 = dst++;
 *v12 = *v11;
LABEL_9:
 v13 = src++;
 v14 = dst++;
 *v14 = *v13;
LABEL_10:
 v15 = src++;
 v16 = dst++;
 *v16 = *v15;
LABEL_11:
 v17 = src++;
 v18 = dst++;
 *v18 = *v17;
 if ( --v20 <= 0 )
 break;
LABEL_4:
 v3 = src++;
 v4 = dst++;
 *v4 = *v3;
 }
 break;
 default:
 return n;
 }
 return n;
}


/* Function: loop_complex_cond @ 0x1A80 */
int loop_complex_cond(int x)
{
 bool v2; // [xsp+Ch] [xbp-14h]
 int i; // [xsp+10h] [xbp-10h]
 int v5; // [xsp+18h] [xbp-8h]

 v5 = 0;
 for ( i = 0; ; ++i )
 {
 v2 = 0;
 if ( v5 < x )
 {
 v2 = 0;
 if ( i < 10 )
 v2 = x > 0;
 }
 if ( !v2 )
 break;
 v5 += 2;
 --x;
 }
 return v5 + x + i;
}


/* Function: loop_modify_var @ 0x1B34 */
int loop_modify_var(int n)
{
 int i; // [xsp+4h] [xbp-Ch]
 int v3; // [xsp+8h] [xbp-8h]

 v3 = 0;
 for ( i = 0; i < n; ++i )
 {
 v3 += i;
 if ( i > 5 )
 i += 2;
 }
 return v3;
}


/* Function: loop_external_state @ 0x1BAC */
int loop_external_state(volatile int *flag)
{
 int i; // [xsp+4h] [xbp-Ch]

 for ( i = 0; i <= 100; ++i )
 {
 if ( *flag )
 break;
 }
 return i;
}


/* Forward declaration for indirect_recursion_b */
long long indirect_recursion_b(unsigned int n, int depth);

/* Function: recursion_factorial @ 0x1BFC */
long long recursion_factorial(int n)
{
 if ( n > 1 )
 return (unsigned int)(n * recursion_factorial(n - 1));
 else
 return 1;
}


/* Function: tail_recursion @ 0x1C5C */
long long tail_recursion(int n, unsigned int acc)
{
 if ( n > 1 )
 return (unsigned int)tail_recursion(n - 1, n * acc);
 else
 return acc;
}


/* Function: indirect_recursion_a @ 0x1CBC */
long long indirect_recursion_a(int n, int depth)
{
 if ( depth > 0 )
 {
 if ( n % 2 )
 return (unsigned int)indirect_recursion_b(3 * n + 1, depth - 1);
 else
 return (unsigned int)indirect_recursion_b(n / 2, depth - 1);
 }
 else
 {
 return (unsigned int)n;
 }
}


/* Function: indirect_recursion_b @ 0x1D5C */
long long indirect_recursion_b(unsigned int n, int depth)
{
 if ( depth > 0 )
 return (unsigned int)indirect_recursion_a(n + 1, depth - 1);
 else
 return n;
}


/* Function: call_func_ptr @ 0x1DB8 */
long long call_func_ptr(int (*f)(int), unsigned int x)
{
 return ((long long ( *)(unsigned long long))f)(x);
}


/* Function: call_func_ptr_array @ 0x1DE4 */
int call_func_ptr_array(int idx, int x)
{
 unsigned long long v3[4]; // [xsp+0h] [xbp-30h]
 long long (*v4)(int); // [xsp+20h] [xbp-20h]
 int xa; // [xsp+28h] [xbp-Ch]
 int idxa; // [xsp+2Ch] [xbp-8h]

 idxa = idx;
 xa = x;
 memcpy(v3, off_13D30, sizeof(v3));
 v4 = recursion_factorial;
 if ( idx < 0 || idxa >= 3 )
 return -1;
 else
 return (*((int (**)(int))v3 + idxa))(xa);
}


/* Function: double_value @ 0x1E64 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x1E7C */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: call_virtual_func @ 0x1E98 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x1EB4 */
long long process_with_callback(int *arr, int n, int (*cb)(int))
{
 int i; // [xsp+0h] [xbp-20h]
 unsigned int v5; // [xsp+4h] [xbp-1Ch]

 v5 = 0;
 for ( i = 0; i < n; ++i )
 v5 += cb(arr[i]);
 return v5;
}


/* Function: test_control_flow_l2 @ 0x1F30 */
void test_control_flow_l2()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v7; // w0
 int v8; // w0
 int v9; // w0
 int v10; // w0
 int v11; // w0
 int v12; // w0
 int v13; // w0
 int v14; // w0
 int v15; // w0
 int v16; // w0
 int v17; // w0
 int arr[4]; // [xsp+40h] [xbp-70h] BYREF
 int v19; // [xsp+50h] [xbp-60h]
 int ext_flag; // [xsp+5Ch] [xbp-54h] BYREF
 int dst[8]; // [xsp+60h] [xbp-50h] BYREF
 int src[8]; // [xsp+80h] [xbp-30h] BYREF
 int flag; // [xsp+ACh] [xbp-4h] BYREF

 printf(asc_2DCA);
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
*(unsigned long long *)src = xmmword_3120[0];
	*(unsigned long long *)&src[4] = xmmword_3130[0];
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
 v12 = tail_recursion(5, 1u);
 printf("CF-L2-10 (tail_recursion): %d\n", v12);
 v13 = indirect_recursion_a(10, 3);
 printf("CF-L2-11 (indirect_recursion): %d\n", v13);
 v14 = call_func_ptr((int (*)(int))double_value, 5u);
 printf("CF-L2-12 (call_func_ptr): %d\n", v14);
 v15 = call_func_ptr_array(0, 5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", v15);
 v16 = call_func_ptr_array(2, 5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", v16);
 *(unsigned long long *)arr = xmmword_2B48[0];
 v19 = 5;
 v17 = process_with_callback(arr, 5, (int (*)(int))double_value);
 printf("CF-L2-15 (process_with_callback): %d\n", v17);
}


/* Function: non_local_jump @ 0x2188 */
long long non_local_jump(int x)
{
 if ( setjmp(jump_buffer) )
 {
 return (unsigned int)-1;
 }
 else
 {
 if ( x < 0 )
 longjmp(jump_buffer, 1);
 if ( x > 100 )
 longjmp(jump_buffer, 2);
 return (unsigned int)(2 * x);
 }
}


/* Function: cpp_exception @ 0x2218 */
int cpp_exception(int x)
{
 if ( x < 0 )
 return -1;
 if ( x <= 100 )
 return 2 * x;
 return -2;
}


/* Function: large_jump_table @ 0x2274 */
int large_jump_table(int op, int a, int b)
{
 unsigned long long v4[10]; // [xsp+0h] [xbp-60h] BYREF
 int ba; // [xsp+50h] [xbp-10h]
 int aa; // [xsp+54h] [xbp-Ch]
 int opa; // [xsp+58h] [xbp-8h]

 opa = op;
 aa = a;
 ba = b;
 memcpy(v4, off_13D48_weak, sizeof(v4));
 if ( opa < 0 || opa >= 10 )
 return -1;
 else
 return ((long long ( *)(unsigned long long, unsigned long long))(void *)(uintptr_t)((unsigned long long *)v4)[opa])((unsigned int)aa, (unsigned int)ba);
}


/* Function: op_add @ 0x22F8 */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x2318 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x2338 */
int op_mul(int a, int b)
{
 return a * b;
}


/* Function: op_div @ 0x2358 */
int op_div(int a, int b)
{
 if ( b )
 return a / b;
 else
 return 0;
}


/* Function: op_mod @ 0x239C */
int op_mod(int a, int b)
{
 if ( b )
 return a % b;
 else
 return 0;
}


/* Function: op_and @ 0x23E8 */
int op_and(int a, int b)
{
 return a & b;
}


/* Function: op_or @ 0x2408 */
int op_or(int a, int b)
{
 return a | b;
}


/* Function: op_xor @ 0x2428 */
int op_xor(int a, int b)
{
 return a ^ b;
}


/* Function: op_shl @ 0x2448 */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x2468 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: conditional_func_ptr @ 0x2488 */
long long conditional_func_ptr(int mode, int x)
{
 if ( !mode )
 return ((long long ( *)(int))double_value)(x);
 if ( mode == 1 )
 return ((long long ( *)(int))triple_value)(x);
 return recursion_factorial(x);
}


/* Function: state_machine @ 0x2504 */
int state_machine(int event, int state)
{
 int v3; // [xsp+1Ch] [xbp-4h]

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


/* Function: fsm_func_table @ 0x25EC */
int fsm_func_table(int event, int state)
{
 int (*state_table[4])(int);
 int statea; // [xsp+24h] [xbp-Ch]
 int eventa; // [xsp+28h] [xbp-8h]

 eventa = event;
 statea = state;
 state_table[0] = off_13D98[0];
 state_table[1] = off_13DA8[0];
 state_table[2] = off_13D98[1];
 state_table[3] = off_13DA8[1];
 if ( state < 0 || statea >= 4 )
 return 3;
 else
 return state_table[statea](eventa);
}


/* Function: state_idle @ 0x266C */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x268C */
int state_processing(int event)
{
 if ( event == 2 )
 return 2;
 if ( event == 99 )
 return 3;
 return 1;
}


/* Function: state_done @ 0x26E4 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x26F8 */
int state_error(int event)
{
 if ( event )
 return 3;
 else
 return 0;
}


/* Function: computed_goto @ 0x271C */
int computed_goto(int *labels, int idx)
{
 int (*jump_table[4])(int);
 int v4; // [xsp+3Ch] [xbp-14h]
 int *v5; // [xsp+40h] [xbp-10h]

 v5 = labels;
 v4 = idx;
 jump_table[0] = off_13DB8[0];
 jump_table[1] = off_13DC8[0];
 jump_table[2] = off_13DB8[1];
 jump_table[3] = off_13DC8[1];
 if ( (idx & 0x80000000) == 0 && v4 <= 3 )
 __asm__ volatile("br %0" : : "r"(jump_table[v4]));
 return -1;
}


/* Function: obfuscated_cf @ 0x27BC */
int obfuscated_cf(int x)
{
 int v2; // [xsp+8h] [xbp-8h]

 v2 = x;
 if ( x * x + 1 < 0 )
 v2 = 2 * x + 1;
 return 2 * v2;
}


/* Function: opaque_predicate @ 0x2814 */
int opaque_predicate(int x)
{
 if ( 305419896 * x % 2u )
 return 3 * x;
 else
 return 2 * x;
}


/* Function: overlapped_code @ 0x2884 */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x28D0 */
void test_control_flow_l3()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v7; // w0
 int v8; // w0
 int v9; // w0
 int v10; // w0
 int v11; // w0
 int labels[4]; // [xsp+30h] [xbp-10h] BYREF

 printf(asc_2FBE);
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
 *(unsigned long long *)labels = xmmword_3140[0];
 v8 = computed_goto(labels, 2);
 printf("CF-L3-07 (computed_goto): %d\n", v8);
 v9 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n", v9);
 v10 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n", v10);
 v11 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n", v11);
}


/* Function: main @ 0x2A50 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


/* Function: .term_proc @ 0x2A84 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x141E0 */

/* FAILED to decompile: _setjmp @ 0x141E8 */

/* FAILED to decompile: __libc_start_main @ 0x141F0 */

/* FAILED to decompile: __cxa_finalize @ 0x141F8 */

/* FAILED to decompile: abort @ 0x14200 */

/* FAILED to decompile: longjmp @ 0x14208 */

/* FAILED to decompile: printf @ 0x14210 */

/* FAILED to decompile: __gmon_start__ @ 0x14220 */

/* Total functions decompiled: 75, failed: 8 */

/* Wrapper function for recursion_factorial to match int (*)(int) signature */
static int recursion_factorial_wrapper(int n)
{
    return (int)recursion_factorial(n);
}

/* Function pointer arrays for testing */
int (*off_13D30[4])(int) = { (int (*)(int))double_value, (int (*)(int))triple_value, (int (*)(int))recursion_factorial_wrapper, 0 };
int (*off_13D98[2])(int) = { (int (*)(int))state_idle, (int (*)(int))state_done };
int (*off_13DA8[2])(int) = { (int (*)(int))state_processing, (int (*)(int))state_error };
int (*off_13DB8[2])(int) = { (int (*)(int))state_idle, (int (*)(int))state_done };
int (*off_13DC8[2])(int) = { (int (*)(int))state_processing, (int (*)(int))state_error };
