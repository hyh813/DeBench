/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/1/1_clang_Os_g
 * Processor: pc
 */

#include <stdio.h>
#include <setjmp.h>
#include <string.h>

static void *_gmon_start__ = NULL;
static int dword_2660[] = {50, 60, 70, 80};
static unsigned int unk_2038[] = {1, 2, 3, 4, 5, 6, 7};
static unsigned int unk_204C[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static int unk_2640[] = {1, 2, 3, 4, 5, 6, 7, 8};
static jmp_buf jump_buffer;
static const char *asc_25D1 = "Control Flow Level 1 Tests";
static const char *asc_25F5 = "Control Flow Level 2 Tests";
static const char *asc_2619 = "Control Flow Level 3 Tests";

/* Function pointer arrays */
static int double_value_impl(int x) { return 2 * x; }
static int triple_value_impl(int x) { return 3 * x; }
static int recursion_factorial_impl(int n) { int r = 1; while (n > 1) r *= n--; return r; }
static int (*funcs_18EC[])(int) = {double_value_impl, triple_value_impl, recursion_factorial_impl};
static int op_add_impl(int a, int b) { return a + b; }
static int op_sub_impl(int a, int b) { return a - b; }
static int op_mul_impl(int a, int b) { return a * b; }
static int op_div_impl(int a, int b) { return b ? a / b : 0; }
static int op_mod_impl(int a, int b) { return b ? a % b : 0; }
static int op_and_impl(int a, int b) { return a & b; }
static int op_or_impl(int a, int b) { return a | b; }
static int op_xor_impl(int a, int b) { return a ^ b; }
static int op_shl_impl(int a, int b) { return a << b; }
static int op_shr_impl(int a, int b) { return a >> b; }
static int (*funcs_1BFD[])(int, int) = {op_add_impl, op_sub_impl, op_mul_impl, op_div_impl, op_mod_impl, op_and_impl, op_or_impl, op_xor_impl, op_shl_impl, op_shr_impl};
static int state_idle_impl(int e) { return e == 1; }
static int state_processing_impl(int e) { return e == 99 ? 3 : (e == 2 ? 2 : 1); }
static int state_done_impl(int e) { return 2; }
static int state_error_impl(int e) { return e != 0 ? 3 : 0; }
static int (*funcs_1D32[])(int) = {state_idle_impl, state_processing_impl, state_done_impl, state_error_impl};
static int label1_impl(void) { return 10; }
static int label2_impl(void) { return 20; }
static int label3_impl(void) { return 30; }
static int sub_1D93_impl(void) { return 0; }
static int (*funcs_1D8C[])(void) = {sub_1D93_impl, label1_impl, label2_impl, label3_impl};

void frame_dummy(void) { }
int _do_global_ctors_aux(void) { return 0; }
void _do_global_dtors_aux(void) { }

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 ;
}


/* Function: sub_1090 @ 0x1090 */
int sub_1090(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
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


/* Function: sequential_ops @ 0x1214 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x1223 */
int single_if(int x)
{
 return x << (x > 0);
}


/* Function: if_else @ 0x122F */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x123A */
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


/* Function: nested_if_deep @ 0x1251 */
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


/* Function: if_elseif_chain @ 0x128E */
int if_elseif_chain(int x)
{
 int result; // eax

 result = 10 * x + 10;
 if ( (unsigned int)x >= 3 )
 return -1;
 return result;
}


/* Function: if_elseif_long @ 0x12A3 */
int if_elseif_long(int x)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)x < 5 )
 return 100 * x + 100;
 return result;
}


/* Function: switch_small @ 0x12B7 */
int switch_small(int op)
{
 if ( (unsigned int)op > 3 )
 return -1;
 else
 return dword_2660[op];
}


/* Function: switch_large @ 0x12D8 */
int switch_large(int op)
{
 int result; // eax

 result = 10 * op;
 if ( (unsigned int)op >= 0xA )
 return -1;
 return result;
}


/* Function: switch_default @ 0x12EC */
int switch_default(int op)
{
 int result; // eax

 result = 0;
 if ( (unsigned int)(op - 1) < 3 )
 return 100 * (op - 1) + 100;
 return result;
}


/* Function: switch_fallthrough @ 0x1300 */
int switch_fallthrough(int op)
{
 int v1; // eax

 v1 = 0;
 switch ( op )
 {
 case 1:
 return op + v1;
 case 2:
LABEL_5:
 v1 += 2 * op;
 return op + v1;
 case 3:
 v1 = 12;
 goto LABEL_5;
 }
 return -1;
}


/* Function: loop_for_fixed @ 0x1324 */
int loop_for_fixed(int n)
{
 if ( n <= 0 )
 return 0;
 else
 return (((unsigned int)(n - 2) * (unsigned long long)(unsigned int)(n - 1)) >> 1) + n - 1;
}


/* Function: loop_while @ 0x1340 */
int loop_while(int x)
{
 int v1; // esi
 int v2; // ecx
 int v3; // cc

 v1 = x;
 if ( !x )
 return 1;
 v2 = 0;
 do
 {
 ++v2;
 v3 = (unsigned int)(v1 + 9) <= 0x12;
 v1 /= 10;
 }
 while ( !v3 );
 return v2;
}


/* Function: loop_dowhile @ 0x1374 */
int loop_dowhile(int x)
{
 int v1; // ecx
 int v3; // cc

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


/* Function: loop_nested @ 0x139F */
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


/* Function: loop_break @ 0x13B7 */
int loop_break(int target)
{
 int result; // eax
 unsigned int *i; // ecx

 result = 0;
 for ( i = &unk_2038; *i != target; ++i )
 {
 if ( ++result == 5 )
 return -1;
 }
 return result;
}


/* Function: loop_continue @ 0x13E4 */
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


/* Function: goto_forward @ 0x140F */
int goto_forward(int x)
{
 int v1; // eax

 v1 = 1;
 if ( x > 0 )
 v1 = x;
 return 2 * x * v1;
}


/* Function: goto_backward @ 0x1421 */
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


/* Function: ternary_op @ 0x1445 */
int ternary_op(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: test_control_flow_l1 @ 0x1453 */
void test_control_flow_l1()
{
 puts(asc_25D1);
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


/* Function: loop_multi_exit @ 0x1695 */
int loop_multi_exit(int target)
{
 int v1; // ecx
 unsigned int *v2; // edx
 int result; // eax
 int v4; // edi
 int i; // ebx

 v1 = 0;
 v2 = &unk_204C;
 result = -1;
 v4 = 0;
 while ( 2 )
 {
 for ( i = 0; i != 4; ++i )
 {
 if ( v2[i] == target )
 return i - v1;
 }
 ++v4;
 v1 -= 10;
 v2 += 4;
 if ( v4 != 3 )
 continue;
 break;
 }
 return result;
}


/* Function: infinite_loop @ 0x16D8 */
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


/* Function: multi_return @ 0x16F9 */
int multi_return(int x)
{
 int result; // eax

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


/* Function: conditional_return @ 0x171C */
int conditional_return(int x)
{
 int result; // eax

 result = -x;
 if ( x > 0 )
 return 2 * x;
 return result;
}


/* Function: duffs_device @ 0x172D */
int duffs_device(int *dst, int *src, int n)
{
 int result; // eax
 signed int v6; // eax
 int v7; // edi
 int v8; // edi
 int v9; // edi
 int v10; // edi
 int v11; // edi
 int v12; // edi
 int v13; // edi
 int v14; // edi

 result = -1;
 if ( n > 0 )
 {
 v6 = (unsigned int)(n + 7) >> 3;
 switch ( n & 7 )
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
 v8 = *src++;
 *dst++ = v8;
LABEL_5:
 v9 = *src++;
 *dst++ = v9;
LABEL_6:
 v10 = *src++;
 *dst++ = v10;
LABEL_7:
 v11 = *src++;
 *dst++ = v11;
LABEL_8:
 v12 = *src++;
 *dst++ = v12;
LABEL_9:
 v13 = *src++;
 *dst++ = v13;
LABEL_10:
 v14 = *src++;
 *dst++ = v14;
 if ( v6-- <= 1 )
 break;
LABEL_3:
 v7 = *src++;
 *dst++ = v7;
 }
 result = n;
 break;
 }
 }
 return result;
}


/* Function: loop_complex_cond @ 0x17C3 */
int loop_complex_cond(int x)
{
 int v1; // ecx
 unsigned int v2; // esi
 int v3; // eax
 unsigned int v4; // edi
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


/* Function: loop_modify_var @ 0x17F7 */
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


/* Function: loop_external_state @ 0x181C */
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


/* Function: recursion_factorial @ 0x1833 */
int recursion_factorial(int n)
{
 unsigned int v1; // ecx
 int result; // eax

 v1 = n;
 result = 1;
 if ( n >= 2 )
 {
 do
 result *= v1;
 while ( v1-- > 2 );
 }
 return result;
}


/* Function: tail_recursion @ 0x184D */
int tail_recursion(int n, int acc)
{
 int result; // eax
 unsigned int v3; // ecx

 result = acc;
 v3 = n;
 if ( n >= 2 )
 {
 do
 result *= v3;
 while ( v3-- > 2 );
 }
 return result;
}


/* Function: indirect_recursion_a @ 0x1868 */
int indirect_recursion_a(int n, int depth)
{
 int result; // eax
 int i; // ecx
 int v4; // eax

 result = n;
 if ( depth > 0 )
 {
 for ( i = depth + 2; i >= 3; i -= 2 )
 {
 if ( (result & 1) != 0 )
 {
 v4 = 3 * result;
 if ( i == 3 )
 return v4 + 1;
 result = v4 + 2;
 }
 else
 {
 if ( i == 3 )
 {
 result /= 2;
 return result;
 }
 result = result / 2 + 1;
 }
 }
 }
 return result;
}


/* Function: call_func_ptr @ 0x18A7 */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x18C7 */
int call_func_ptr_array(int idx, int x)
{
 if ( (unsigned int)idx <= 2 )
 return ((int ( *)(int))funcs_18EC[idx])(x);
 else
 return -1;
}


/* Function: double_value @ 0x18F8 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x18FF */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: call_virtual_func @ 0x1907 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x190E */
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


/* Function: test_control_flow_l2 @ 0x1950 */
void test_control_flow_l2()
{
 int v0; // ecx
 unsigned int *v1; // edx
 int v2; // eax
 int v3; // esi
 int i; // edi
 int j; // eax
 int v6; // eax
 unsigned int v7; // ecx
 int v8; // edx
 int v9; // eax
 unsigned int v10; // esi
 int k; // eax
 int v12[8]; // [esp+Ch] [ebp-50h] BYREF
 int v13[12]; // [esp+2Ch] [ebp-30h] BYREF

 puts(asc_25F5);
 v0 = 0;
 v1 = &unk_204C;
 v2 = -1;
 v3 = 0;
 while ( 2 )
 {
 for ( i = 0; i != 4; ++i )
 {
 if ( v1[i] == 7 )
 {
 v2 = i - v0;
 goto LABEL_8;
 }
 }
 ++v3;
 v0 -= 10;
 v1 += 4;
 if ( v3 != 3 )
 continue;
 break;
 }
LABEL_8:
 printf("CF-L2-01 (loop_multi_exit): %d\n", v2);
 for ( j = 0; j != 1001; ++j )
 ;
 printf("CF-L2-02 (infinite_loop): %d\n", 1001);
 printf("CF-L2-03 (multi_return): %d\n", -1);
 printf("CF-L2-03 (multi_return): %d\n", -2);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 memcpy(v13, &unk_2640, 0x20u);
 v6 = duffs_device(v12, v13, 8);
 printf("CF-L2-05 (duffs_device): %d\n", v6);
 v7 = -1;
 v8 = 11;
 v9 = 10;
 do
 {
 v10 = v9 - 8;
 v9 += 2;
 if ( v10 >= v8 - 2 )
 break;
 ++v7;
 --v8;
 }
 while ( v7 < 9 );
 printf("CF-L2-06 (loop_complex_cond): %d\n", v9);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 for ( k = 0; k != 101; ++k )
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


/* Function: non_local_jump @ 0x1B58 */
int non_local_jump(int x)
{
 if ( _setjmp(&jump_buffer) )
 return -1;
 if ( x < 0 )
 longjmp(&jump_buffer, 1);
 if ( (unsigned int)x >= 0x65 )
 longjmp(&jump_buffer, 2);
 return 2 * x;
}


/* Function: cpp_exception @ 0x1BB6 */
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


/* Function: large_jump_table @ 0x1BD1 */
int large_jump_table(unsigned int op, int a, int b)
{
 if ( op <= 9 )
 return ((int ( *)(int, int))funcs_1BFD[op])(a, b);
 else
 return -1;
}


/* Function: op_add @ 0x1C09 */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x1C12 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x1C1B */
int op_mul(int a, int b)
{
 return a * b;
}


/* Function: op_div @ 0x1C25 */
int op_div(int a, int b)
{
 if ( b )
 return a / b;
 else
 return 0;
}


/* Function: op_mod @ 0x1C38 */
int op_mod(int a, int b)
{
 if ( b )
 return a % b;
 else
 return 0;
}


/* Function: op_and @ 0x1C4D */
int op_and(int a, int b)
{
 return a & b;
}


/* Function: op_or @ 0x1C56 */
int op_or(int a, int b)
{
 return a | b;
}


/* Function: op_xor @ 0x1C5F */
int op_xor(int a, int b)
{
 return a ^ b;
}


/* Function: op_shl @ 0x1C68 */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x1C73 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: conditional_func_ptr @ 0x1C7E */
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


/* Function: state_machine @ 0x1CBD */
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


/* Function: fsm_func_table @ 0x1D0B */
int fsm_func_table(int event, int state)
{
 if ( (unsigned int)state <= 3 )
 return ((int ( *)(int))funcs_1D32[state])(event);
 else
 return 3;
}


/* Function: state_idle @ 0x1D3E */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x1D49 */
int state_processing(int event)
{
 int result; // eax

 result = 2 * (event == 99) + 1;
 if ( event == 2 )
 return 2;
 return result;
}


/* Function: state_done @ 0x1D5F */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x1D65 */
int state_error(int event)
{
 return 3 * (event != 0);
}


/* Function: computed_goto @ 0x1D73 */
int computed_goto(int *labels, unsigned int idx)
{
 if ( idx <= 3 )
 return funcs_1D8C[idx]();
 else
 return -1;
}


/* Function: sub_1D93 @ 0x1D93 */
int sub_1D93()
{
 return 0;
}


/* Function: label2 @ 0x1D96 */
int label2()
{
 return 20;
}


/* Function: label3 @ 0x1D9C */
int label3()
{
 return 30;
}


/* Function: label1 @ 0x1DA2 */
int label1()
{
 return 10;
}


/* Function: obfuscated_cf @ 0x1DA8 */
int obfuscated_cf(int x)
{
 return 2 * x;
}


/* Function: opaque_predicate @ 0x1DAF */
int opaque_predicate(int x)
{
 return 2 * x;
}


/* Function: overlapped_code @ 0x1DB6 */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x1DCE */
void test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int *s; // [esp+0h] [ebp-1Ch]

 puts(asc_2619);
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


/* Function: main @ 0x1EFC */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1F7C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x50D0 */

/* FAILED to decompile: printf @ 0x50D4 */

/* FAILED to decompile: longjmp @ 0x50D8 */

/* FAILED to decompile: _setjmp @ 0x50DC */

/* FAILED to decompile: __cxa_finalize @ 0x50E0 */

/* FAILED to decompile: puts @ 0x50E4 */

/* Total functions decompiled: 83, failed: 6 */
