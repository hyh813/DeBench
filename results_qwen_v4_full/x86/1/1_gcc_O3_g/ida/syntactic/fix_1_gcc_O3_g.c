/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/1/1_gcc_O3_g
 * Processor: pc
 */

#include <setjmp.h>

/* CRT stub functions */
static unsigned int __readgsdword(unsigned int offset) { return 0; }
static void frame_dummy(void) { }
static void _do_global_ctors_aux(void) { }
static void _do_global_dtors_aux(void) { }

/* Global variables */
static jmp_buf jump_buffer;
static int CSWTCH_56[] = {50, 60, 70, 80};
static const char *asc_3008 = "=== Control Flow Level 1 ===";
static const char *asc_3110 = "=== Control Flow Level 2 ===";
static const char *asc_3294 = "=== Control Flow Level 3 ===";
static int dword_0 = 1;




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 ;
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


/* Function: main @ 0x1110 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_115C @ 0x115C */
void sub_115C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1160 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1299 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x129D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: recursion_factorial @ 0x12B0 */
int recursion_factorial(int n)
{
 int v1; // eax
 int v2; // edx
 int v3; // ecx

 v1 = n;
 v2 = 1;
 if ( n > 1 )
 {
 do
 {
 v3 = v1--;
 v2 *= v3;
 }
 while ( v1 != 1 );
 }
 return v2;
}


/* Function: double_value @ 0x12E0 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x12F0 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: op_add @ 0x1300 */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x1310 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x1320 */
int op_mul(int a, int b)
{
 return a * b;
}


/* Function: op_div @ 0x1330 */
int op_div(int a, int b)
{
 int v2; // ecx

 v2 = b;
 if ( b )
 return a / b;
 return v2;
}


/* Function: op_mod @ 0x1350 */
int op_mod(int a, int b)
{
 int v2; // edx

 v2 = b;
 if ( b )
 return a % b;
 return v2;
}


/* Function: op_and @ 0x1370 */
int op_and(int a, int b)
{
 return a & b;
}


/* Function: op_or @ 0x1380 */
int op_or(int a, int b)
{
 return a | b;
}


/* Function: op_xor @ 0x1390 */
int op_xor(int a, int b)
{
 return a ^ b;
}


/* Function: op_shl @ 0x13A0 */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x13B0 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: state_idle @ 0x13C0 */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x13D0 */
int state_processing(int event)
{
 if ( event == 2 )
 return 2;
 else
 return 2 * (event == 99) + 1;
}


/* Function: state_done @ 0x1400 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x1410 */
int state_error(int event)
{
 int result; // eax

 result = event;
 if ( event )
 return 3;
 return result;
}


/* Function: computed_goto_0 @ 0x1430 */
int computed_goto_0()
{
 return 20;
}


/* Function: non_local_jump_0 @ 0x1440 */
int non_local_jump_0()
{
 return _setjmp(jump_buffer) == 0 ? 10 : -1;
}


/* Function: sequential_ops @ 0x1470 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x1490 */
int single_if(int x)
{
 int result; // eax

 result = 2 * x;
 if ( x <= 0 )
 return x;
 return result;
}


/* Function: if_else @ 0x14B0 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x14C0 */
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


/* Function: nested_if_deep @ 0x14E0 */
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


/* Function: if_elseif_chain @ 0x1540 */
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


/* Function: if_elseif_long @ 0x1580 */
int if_elseif_long(int x)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)x <= 4 )
 return 100 * (x + 1);
 return result;
}


/* Function: switch_small @ 0x15A0 */
int switch_small(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 3 )
 return CSWTCH_56[op];
 return result;
}


/* Function: switch_large @ 0x15D0 */
int switch_large(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 9 )
 return 10 * op;
 return result;
}


/* Function: switch_default @ 0x15F0 */
int switch_default(int op)
{
 int result; // eax

 result = 0;
 if ( (unsigned int)(op - 1) <= 2 )
 return 100 * op;
 return result;
}


/* Function: switch_fallthrough @ 0x1610 */
int switch_fallthrough(int op)
{
 if ( op == 2 )
 return 6;
 if ( op == 3 )
 return 21;
 return 2 * (op == 1) - 1;
}


/* Function: loop_for_fixed @ 0x1650 */
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


/* Function: loop_while @ 0x1680 */
int loop_while(int x)
{
 int v1; // ecx
 int v2; // ebx

 v1 = x;
 if ( !x )
 return 1;
 v2 = 0;
 do
 {
 ++v2;
 v1 /= 10;
 }
 while ( v1 );
 return v2;
}


/* Function: loop_dowhile @ 0x16D0 */
int loop_dowhile(int x)
{
 int v2; // ebx

 v2 = 0;
 do
 {
 ++v2;
 x /= 10;
 }
 while ( x );
 return v2;
}


/* Function: loop_nested @ 0x1710 */
int loop_nested(int m, int n)
{
 int v2; // edx
 int result; // eax

 if ( m <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 {
 if ( n > 0 )
 result += n;
 ++v2;
 }
 while ( m != v2 );
 return result;
}


/* Function: loop_break @ 0x1750 */
int loop_break(int target)
{
 switch ( target )
 {
 case 10:
 return 0;
 case 20:
 return 1;
 case 30:
 return 2;
 case 40:
 return 3;
 }
 return 5 * (target == 50) - 1;
}


/* Function: loop_continue @ 0x17A0 */
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
 while ( n + 1 != v1 );
 return v2;
}


/* Function: goto_forward @ 0x17E0 */
int goto_forward(int x)
{
 int v1; // eax

 v1 = x;
 if ( x > 0 )
 v1 = x * x;
 return 2 * v1;
}


/* Function: goto_backward @ 0x1800 */
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
 while ( x + 1 != v2 );
 }
 return v1;
}


/* Function: ternary_op @ 0x1830 */
int ternary_op(int a, int b)
{
 int result; // eax

 result = b;
 if ( b < a )
 return a;
 return result;
}


/* Function: test_control_flow_l1 @ 0x1850 */
void test_control_flow_l1()
{
 puts(asc_3008);
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
 __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", 45);
 __printf_chk(1, "CF-L1-13 (loop_while): %d\n", 5);
 __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", 4);
 __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", 12);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", 2);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", -1);
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", 25);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", -6);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x1A50 */
int loop_multi_exit(int target)
{
 int v2; // eax
 int v3; // edx

 switch ( target )
 {
 case 1:
 v2 = 0;
 goto LABEL_15;
 case 2:
 v2 = 0;
LABEL_18:
 v3 = 1;
 return v3 + 10 * v2;
 case 3:
 v2 = 0;
LABEL_20:
 v3 = 2;
 return v3 + 10 * v2;
 case 4:
 v2 = 0;
LABEL_22:
 v3 = 3;
 return v3 + 10 * v2;
 case 5:
 v2 = 1;
 goto LABEL_15;
 case 6:
 v2 = 1;
 goto LABEL_18;
 case 7:
 v2 = 1;
 goto LABEL_20;
 case 8:
 v2 = 1;
 goto LABEL_22;
 }
 if ( target != 9 )
 {
 if ( target != 10 )
 {
 if ( target != 11 )
 {
 if ( target != 12 )
 return -1;
 v2 = 2;
 goto LABEL_22;
 }
 v2 = 2;
 goto LABEL_20;
 }
 v2 = 2;
 goto LABEL_18;
 }
 v2 = 2;
LABEL_15:
 v3 = 0;
 return v3 + 10 * v2;
}


/* Function: infinite_loop @ 0x1B00 */
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


/* Function: multi_return @ 0x1B30 */
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


/* Function: conditional_return @ 0x1B60 */
int conditional_return(int x)
{
 int result; // eax

 if ( x > 0 )
 return 2 * x;
 result = 0;
 if ( x )
 return -x;
 return result;
}


/* Function: duffs_device @ 0x1B80 */
int duffs_device(int *dst, int *src, int n)
{
 int v3; // esi
 int *v4; // eax
 int *v5; // edx
 int v6; // ecx
 int *v7; // edi
 int *v8; // ebx
 int v9; // ebx
 int v10; // ebx
 int *v11; // edi
 int *v12; // ebx
 int *v13; // edi
 int *v14; // ebx

 v3 = n;
 v4 = dst;
 v5 = src;
 if ( n <= 0 )
 return -1;
 v6 = (n + 7) >> 3;
 switch ( n & 7 )
 {
 case 0:
 v7 = src;
 v8 = dst;
 goto LABEL_4;
 case 1:
 goto _L192;
 case 2:
 v13 = src;
 v14 = dst;
 goto LABEL_10;
 case 3:
 goto _L190;
 case 4:
 v11 = src;
 v12 = dst;
 goto LABEL_8;
 case 5:
 goto _L188;
 case 6:
 goto _L187;
 case 7:
 while ( 1 )
 {
 v9 = *v5;
 ++v4;
 ++v5;
 *(v4 - 1) = v9;
_L187:
 v10 = *v5;
 ++v4;
 ++v5;
 *(v4 - 1) = v10;
_L188:
 v11 = v5 + 1;
 v12 = v4 + 1;
 *v4 = *v5;
LABEL_8:
 v5 = v11 + 1;
 v4 = v12 + 1;
 *v12 = *v11;
_L190:
 v13 = v5 + 1;
 v14 = v4 + 1;
 *v4 = *v5;
LABEL_10:
 v5 = v13 + 1;
 v4 = v14 + 1;
 *v14 = *v13;
_L192:
 *v4 = *v5;
 if ( !--v6 )
 break;
 v7 = v5 + 1;
 v8 = v4 + 1;
LABEL_4:
 v5 = v7 + 1;
 v4 = v8 + 1;
 *v8 = *v7;
 }
 break;
 }
 return v3;
}


/* Function: loop_complex_cond @ 0x1C50 */
int loop_complex_cond(int x)
{
 int result; // eax
 int v2; // edx
 int v3; // ecx
 int v4; // eax

 result = x;
 if ( x > 0 )
 {
 v2 = x - 1;
 if ( x - 1 <= 2 )
 {
 v4 = 1;
 v3 = 2;
 }
 else
 {
 v2 = x - 2;
 if ( x - 2 <= 4 )
 {
 v4 = 2;
 v3 = 4;
 }
 else
 {
 v2 = x - 3;
 if ( x - 3 <= 6 )
 {
 v4 = 3;
 v3 = 6;
 }
 else
 {
 v2 = x - 4;
 if ( x - 4 <= 8 )
 {
 v4 = 4;
 v3 = 8;
 }
 else
 {
 v2 = x - 5;
 if ( x - 5 <= 10 )
 {
 v4 = 5;
 v3 = 10;
 }
 else
 {
 v2 = x - 6;
 if ( x - 6 <= 12 )
 {
 v4 = 6;
 v3 = 12;
 }
 else
 {
 v2 = x - 7;
 if ( x - 7 <= 14 )
 {
 v4 = 7;
 v3 = 14;
 }
 else
 {
 v2 = x - 8;
 if ( x - 8 <= 16 )
 {
 v4 = 8;
 v3 = 16;
 }
 else
 {
 v2 = x - 9;
 if ( x - 9 <= 18 )
 {
 v4 = 9;
 v3 = 18;
 }
 else
 {
 v2 = x - 10;
 v3 = 20;
 v4 = 10;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return v3 + v2 + v4;
 }
 return result;
}


/* Function: loop_modify_var @ 0x1D30 */
int loop_modify_var(int n)
{
 int v1; // edx
 int v2; // eax
 int i; // ecx
 int v4; // ebx

 v1 = 0;
 if ( n > 0 )
 {
 v2 = 1;
 if ( n != 1 )
 {
 v1 = 1;
 while ( n > v2 + 1 )
 {
 v4 = v2++;
 for ( i = v4; ; i += 3 )
 {
 v1 += v2;
 if ( v2 <= 5 )
 break;
 v2 = i + 4;
 if ( n <= i + 4 )
 return v1;
 }
 }
 }
 }
 return v1;
}


/* Function: loop_external_state @ 0x1D90 */
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


/* Function: tail_recursion @ 0x1DB0 */
int tail_recursion(int n, int acc)
{
 int v2; // eax

 v2 = n;
 if ( n > 1 )
 {
 do
 acc *= v2--;
 while ( v2 != 1 );
 }
 return acc;
}


/* Function: indirect_recursion_a @ 0x1DE0 */
int indirect_recursion_a(int n, int depth)
{
 int v2; // edx
 int v3; // eax
 int v4; // ecx
 int v5; // ecx
 int v6; // edx
 int v8; // edx
 int v9; // edx

 v2 = n;
 v3 = depth;
 v4 = n;
 if ( depth <= 0 )
 return v4;
 while ( 1 )
 {
 if ( (v2 & 1) != 0 )
 {
 v5 = 3 * v2;
 if ( v3 == 1 )
 return v5 + 1;
 v4 = v5 + 2;
 if ( v3 <= 2 )
 return v4;
 if ( (v4 & 1) == 0 )
 {
LABEL_15:
 v9 = v4 / 2;
 v4 /= 2;
 if ( v3 == 3 )
 return v4;
 v3 -= 4;
 v2 = v9 + 1;
 goto LABEL_8;
 }
 }
 else
 {
 v8 = v2 / 2;
 v4 = v8;
 if ( v3 == 1 )
 return v4;
 v4 = v8 + 1;
 if ( v3 <= 2 )
 return v4;
 if ( (v4 & 1) == 0 )
 goto LABEL_15;
 }
 v6 = 3 * v4;
 if ( v3 == 3 )
 return v6 + 1;
 v3 -= 4;
 v2 = v6 + 2;
LABEL_8:
 if ( !v3 )
 return v2;
 }
}


/* Function: call_func_ptr @ 0x1E70 */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x1E90 */
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


/* Function: call_virtual_func @ 0x1F20 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x1F30 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int v3; // esi
 int v4; // ebx
 int v6; // [esp-10h] [ebp-2Ch]

 if ( n <= 0 )
 return 0;
 v3 = 0;
 v4 = 0;
 do
 {
 v6 = arr[v3++];
 v4 += cb(v6);
 }
 while ( n != v3 );
 return v4;
}


/* Function: test_control_flow_l2 @ 0x1F80 */
// bad sp value at call has been detected, the output may be wrong!
void test_control_flow_l2()
{
 int i; // eax
 unsigned int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // edx
 int j; // ecx
 int v6; // esi
 int k; // eax
 int src[8]; // [esp+8h] [ebp-4Ch] BYREF
 int dst[8]; // [esp+28h] [ebp-2Ch] BYREF
 unsigned int v10; // [esp+48h] [ebp-Ch]

 v10 = __readgsdword(0x14u);
 puts(asc_3110);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", 12);
 for ( i = 0; i != 1001; ++i )
 ;
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", "_ITM_registerTMCloneTable");
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 src[0] = 1;
 v1 = 0;
 src[1] = 2;
 src[2] = 3;
 src[3] = 4;
 src[4] = 5;
 src[5] = 6;
 src[6] = 7;
 src[7] = 8;
 do
 dst[v1++] = 0;
 while ( v1 < 8 );
 v2 = duffs_device(dst, src, 8);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v2);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v3 = 1;
 v4 = 1;
LABEL_9:
 v6 = v3++;
 for ( j = v6; ; j = 8 )
 {
 v4 += v3;
 if ( v3 <= 5 )
 goto LABEL_9;
 if ( j != 5 )
 break;
 v3 = 9;
 }
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
 for ( k = 0; k != 101; ++k )
 ;
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", 101);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 120);
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", 30);
}


/* Function: non_local_jump @ 0x21F0 */
int non_local_jump(int x)
{
 int v1; // edx

 if ( _setjmp(jump_buffer) )
 return -1;
 if ( x < 0 )
 __longjmp_chk(jump_buffer, 1, v1, v1);
 if ( x > 100 )
 __longjmp_chk(jump_buffer, 2, 0, 0);
 return 2 * x;
}


/* Function: cpp_exception @ 0x2270 */
int cpp_exception(int x)
{
 if ( x < 0 )
 return -1;
 if ( x > 100 )
 return -2;
 return 2 * x;
}


/* Function: large_jump_table @ 0x22A0 */
int large_jump_table(int op, int a, int b)
{
 int (*ops[10])(int, int); // [esp+0h] [ebp-38h]
 unsigned int v5; // [esp+28h] [ebp-10h]

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


/* Function: conditional_func_ptr @ 0x2380 */
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


/* Function: state_machine @ 0x23C0 */
int state_machine(int event, int state)
{
 if ( state == 2 )
 return 2;
 if ( state > 2 )
 {
 if ( state == 3 )
 return event != 0 ? 3 : 0;
 return 3;
 }
 if ( state )
 {
 if ( state == 1 )
 {
 if ( event != 2 )
 return 2 * (event == 99) + 1;
 return 2;
 }
 return 3;
 }
 return event == 1;
}


/* Function: fsm_func_table @ 0x2430 */
int fsm_func_table(int event, int state)
{
 int (*state_handlers[4])(int); // [esp+0h] [ebp-20h]
 unsigned int v4; // [esp+10h] [ebp-10h]

 v4 = __readgsdword(0x14u);
 state_handlers[0] = state_idle;
 state_handlers[1] = state_processing;
 state_handlers[2] = state_done;
 state_handlers[3] = state_error;
 if ( (unsigned int)state > 3 )
 return 3;
 else
 return ((int (*)(void))state_handlers[state])();
}


/* Function: computed_goto @ 0x24C0 */
int computed_goto(int *labels, int idx)
{
 void *targets[4]; // [esp+0h] [ebp-20h]
 unsigned int v4; // [esp+10h] [ebp-10h]

 v4 = __readgsdword(0x14u);
 targets[0] = (void *)0x2558;
 targets[1] = (void *)0x2548;
 targets[2] = (void *)0x2538;
 targets[3] = (void *)0x2518;
 if ( (unsigned int)idx <= 3 )
 {
  return ((int (*)(void))targets[idx])();
 }
 return -1;
}


/* Function: obfuscated_cf @ 0x2570 */
int obfuscated_cf(int a1)
{
 return 2 * a1;
}


/* Function: opaque_predicate @ 0x2580 */
int opaque_predicate(int a1)
{
 return 2 * a1;
}


/* Function: overlapped_code @ 0x2590 */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x25C0 */
void test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax

 puts(asc_3294);
 v0 = non_local_jump_0();
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", 15);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk((char *)&dword_0 + 1, "CF-L3-06 (fsm_func_table): %d\n", 2);
 v2 = computed_goto_0();
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v2);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: __x86.get_pc_thunk.ax @ 0x26D1 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x26D5 */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x26E0 */
void _stack_chk_fail_local()
{
 ;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x274C */
void term_proc()
{
}


/* FAILED to decompile: __libc_start_main @ 0x60E0 */

/* FAILED to decompile: _setjmp @ 0x60E4 */

/* FAILED to decompile: __stack_chk_fail @ 0x60E8 */

/* FAILED to decompile: __cxa_finalize @ 0x60EC */

/* FAILED to decompile: puts @ 0x60F0 */

/* FAILED to decompile: __printf_chk @ 0x60F4 */

/* FAILED to decompile: __longjmp_chk @ 0x60F8 */

/* Total functions decompiled: 90, failed: 7 */
