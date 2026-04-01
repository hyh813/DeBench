/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/1/1_gcc_O2_g
 * Processor: pc
 */

#include <setjmp.h>
#include <stdint.h>

/* Stub for __readfsqword intrinsic (stack canary read) */
static inline unsigned long long __readfsqword(unsigned long __offset) {
    unsigned long long val;
    __asm__ __volatile__("movq %%fs:%1, %0" : "=r"(val) : "m"(*(const void *)__offset));
    return val;
}

/* Function: .init_proc @ 0x1000 */
void (*_gmon_start__)(void);

/* Missing global declarations */
int CSWTCH_55[4] = {0, 10, 20, 30};  /* switch_small jump table */
const char *s = "Control Flow Level 1 Tests";  /* test_control_flow_l1 string */
const char *asc_3118 = "Control Flow Level 2 Tests";  /* test_control_flow_l2 string */
const char *asc_32B8 = "Control Flow Level 3 Tests";  /* test_control_flow_l3 string */
jmp_buf jump_buffer;  /* non-local jump buffer */
unsigned char MEMORY[0x3000];  /* code memory array */

long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( _gmon_start__ )
 _gmon_start__();
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* placeholder for unreachable code */
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


/* Function: main @ 0x10E0 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: recursion_factorial @ 0x1200 */
int recursion_factorial(int n)
{
 int result; // eax
 int v2; // edx

 result = 1;
 if ( n > 1 )
 {
 do
 {
 v2 = n--;
 result *= v2;
 }
 while ( n != 1 );
 }
 return result;
}


/* Function: double_value @ 0x1220 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: triple_value @ 0x1230 */
int triple_value(int x)
{
 return 3 * x;
}


/* Function: op_add @ 0x1240 */
int op_add(int a, int b)
{
 return a + b;
}


/* Function: op_sub @ 0x1250 */
int op_sub(int a, int b)
{
 return a - b;
}


/* Function: op_mul @ 0x1260 */
int op_mul(int a, int b)
{
 return b * a;
}


/* Function: op_div @ 0x1270 */
int op_div(int a, int b)
{
 int v2; // r8d

 v2 = b;
 if ( b )
 return a / b;
 return v2;
}


/* Function: op_mod @ 0x1290 */
int op_mod(int a, int b)
{
 int v2; // r8d

 v2 = b;
 if ( b )
 return a % b;
 return v2;
}


/* Function: op_and @ 0x12B0 */
int op_and(int a, int b)
{
 return b & a;
}


/* Function: op_or @ 0x12C0 */
int op_or(int a, int b)
{
 return b | a;
}


/* Function: op_xor @ 0x12D0 */
int op_xor(int a, int b)
{
 return b ^ a;
}


/* Function: op_shl @ 0x12E0 */
int op_shl(int a, int b)
{
 return a << b;
}


/* Function: op_shr @ 0x12F0 */
int op_shr(int a, int b)
{
 return a >> b;
}


/* Function: state_idle @ 0x1300 */
int state_idle(int event)
{
 return event == 1;
}


/* Function: state_processing @ 0x1310 */
int state_processing(int event)
{
 if ( event == 2 )
 return 2;
 else
 return 2 * (event == 99) + 1;
}


/* Function: state_done @ 0x1340 */
int state_done(int event)
{
 return 2;
}


/* Function: state_error @ 0x1350 */
int state_error(int event)
{
 int result; // eax

 result = event;
 if ( event )
 return 3;
 return result;
}


/* Function: sequential_ops @ 0x1370 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (a + b) - c;
}


/* Function: single_if @ 0x1380 */
int single_if(int x)
{
 int result; // eax

 result = 2 * x;
 if ( x <= 0 )
 return x;
 return result;
}


/* Function: if_else @ 0x1390 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0x13A0 */
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


/* Function: nested_if_deep @ 0x13C0 */
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


/* Function: if_elseif_chain @ 0x1410 */
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


/* Function: if_elseif_long @ 0x1440 */
int if_elseif_long(int x)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)x <= 4 )
 return 100 * (x + 1);
 return result;
}


/* Function: switch_small @ 0x1460 */
int switch_small(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 3 )
 return CSWTCH_55[op];
 return result;
}


/* Function: switch_large @ 0x1480 */
int switch_large(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 9 )
 return 10 * op;
 return result;
}


/* Function: switch_default @ 0x14A0 */
int switch_default(int op)
{
 int result; // eax

 result = 0;
 if ( (unsigned int)(op - 1) <= 2 )
 return 100 * op;
 return result;
}


/* Function: switch_fallthrough @ 0x14C0 */
int switch_fallthrough(int op)
{
 if ( op == 2 )
 return 6;
 if ( op == 3 )
 return 21;
 return 2 * (op == 1) - 1;
}


/* Function: loop_for_fixed @ 0x1500 */
int loop_for_fixed(int n)
{
 int v1; // eax
 int v2; // r8d

 if ( n <= 0 )
 return 0;
 v1 = 0;
 v2 = 0;
 do
 v2 += v1++;
 while ( n != v1 );
 return v2;
}


/* Function: loop_while @ 0x1530 */
int loop_while(int x)
{
 int v1; // r8d

 if ( !x )
 return 1;
 v1 = 0;
 do
 {
 ++v1;
 x /= 10;
 }
 while ( x );
 return v1;
}


/* Function: loop_dowhile @ 0x1580 */
int loop_dowhile(int x)
{
 int v1; // r8d

 v1 = 0;
 do
 {
 ++v1;
 x /= 10;
 }
 while ( x );
 return v1;
}


/* Function: loop_nested @ 0x15C0 */
int loop_nested(int m, int n)
{
 int v2; // edx
 int result; // eax

 v2 = 0;
 result = 0;
 if ( m > 0 )
 {
 do
 {
 if ( n > 0 )
 result += n;
 ++v2;
 }
 while ( m != v2 );
 }
 return result;
}


/* Function: loop_break @ 0x15E0 */
int loop_break(int target)
{
 long long v1; // rax
 int v2; // r8d
 int arr[6]; // [rsp+0h] [rbp-28h]
 unsigned long long v5; // [rsp+18h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 *(unsigned long long *)&arr[1] = 0x1E00000014LL;
 *(unsigned long long *)&arr[3] = 0x3200000028LL;
 v1 = 0;
 v2 = 0;
 if ( target != 10 )
 {
 while ( ++v1 != 5 )
 {
 v2 = v1;
 if ( target == arr[v1] )
 return v2;
 }
 return -1;
 }
 return v2;
}


/* Function: loop_continue @ 0x1670 */
int loop_continue(int n)
{
 int v1; // edi
 int v2; // eax
 int v3; // r8d

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


/* Function: goto_forward @ 0x16B0 */
int goto_forward(int x)
{
 if ( x > 0 )
 x *= x;
 return 2 * x;
}


/* Function: goto_backward @ 0x16C0 */
int goto_backward(int x)
{
 int v1; // r8d
 int v2; // edi
 int v3; // eax

 v1 = 1;
 if ( x > 0 )
 {
 v2 = x + 1;
 v3 = 1;
 do
 v1 *= v3++;
 while ( v2 != v3 );
 }
 return v1;
}


/* Function: ternary_op @ 0x16F0 */
int ternary_op(int a, int b)
{
 int result; // eax

 result = a;
 if ( b >= a )
 return b;
 return result;
}


/* Function: test_control_flow_l1 @ 0x1700 */
void test_control_flow_l1()
{
 long long v0; // rax
 int v1; // edx
 long long v2; // rax
 int v3; // edx
 unsigned char v4[4]; // [rsp+0h] [rbp-28h] BYREF
 long long v5; // [rsp+4h] [rbp-24h]
 long long v6; // [rsp+Ch] [rbp-1Ch]
 unsigned long long v7; // [rsp+18h] [rbp-10h]

 v7 = __readfsqword(0x28u);
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
 __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", 45);
 __printf_chk(1, "CF-L1-13 (loop_while): %d\n", 5);
 __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", 4);
 __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", 12);
 v5 = 0x1E00000014LL;
 v6 = 0x3200000028LL;
 v0 = 1;
 while ( 1 )
 {
 v1 = v0;
 if ( v0 == 5 )
 break;
 ++v0;
 if ( *(unsigned int *)&v4[4 * v0 - 4] == 30 )
 goto LABEL_4;
 }
 v1 = -1;
LABEL_4:
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v1);
 v5 = 0x1E00000014LL;
 v6 = 0x3200000028LL;
 v2 = 1;
 while ( 1 )
 {
 v3 = v2;
 if ( v2 == 5 )
 break;
 ++v2;
 if ( *(unsigned int *)&v4[4 * v2 - 4] == 99 )
 goto LABEL_7;
 }
 v3 = -1;
LABEL_7:
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v3);
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", 25);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", -6);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x1A40 */
int loop_multi_exit(int target)
{
 int v1; // edx
 int *v2; // rax
 int v3; // eax
 int matrix[3][4]; // [rsp+0h] [rbp-48h] BYREF
 unsigned long long v6; // [rsp+38h] [rbp-10h]

 v1 = 0;
 v6 = __readfsqword(0x28u);
 matrix[0][1] = 2;
 *(unsigned long long *)&matrix[0][2] = 0x400000003LL;
 *(unsigned long long *)&matrix[1][0] = 0x600000005LL;
 *(unsigned long long *)&matrix[1][2] = 0x800000007LL;
 *(unsigned long long *)&matrix[2][0] = 0xA00000009LL;
 *(unsigned long long *)&matrix[2][2] = 0xC0000000BLL;
 v2 = matrix[0];
 if ( target == 1 )
 {
LABEL_7:
 v3 = 0;
 }
 else
 {
 while ( 1 )
 {
 if ( target == v2[1] )
 {
 v3 = 1;
 return v3 + 10 * v1;
 }
 if ( target == v2[2] )
 {
 v3 = 2;
 return v3 + 10 * v1;
 }
 if ( target == v2[3] )
 break;
 ++v1;
 v2 += 4;
 if ( v1 == 3 )
 return -1;
 if ( *v2 == target )
 goto LABEL_7;
 }
 v3 = 3;
 }
 return v3 + 10 * v1;
}


/* Function: infinite_loop @ 0x1B30 */
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


/* Function: multi_return @ 0x1B60 */
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


/* Function: conditional_return @ 0x1B90 */
int conditional_return(int x)
{
 int result; // eax

 if ( x > 0 )
 return 2 * x;
 result = -x;
 if ( !x )
 return 0;
 return result;
}


/* Function: duffs_device @ 0x1BB0 */
int duffs_device(int *dst, int *src, int n)
{
 int *v4; // rcx
 int v5; // r8d
 int v6; // edx
 int *v7; // rdi
 int *v8; // rsi
 int v9; // esi
 int v10; // esi
 int *v11; // rdi
 int *v12; // rsi
 int *v13; // rdi
 int *v14; // rsi

 v4 = src;
 v5 = n;
 if ( n <= 0 )
 return -1;
 v6 = (n + 7) >> 3;
 switch ( v5 & 7 )
 {
 case 0:
 v7 = src;
 v8 = dst;
 goto LABEL_4;
 case 1:
 goto LABEL_11;
 case 2:
 v13 = src;
 v14 = dst;
 goto LABEL_10;
 case 3:
 goto LABEL_9;
 case 4:
 v11 = src;
 v12 = dst;
 goto LABEL_8;
 case 5:
 goto LABEL_7;
 case 6:
 goto LABEL_6;
 case 7:
 while ( 1 )
 {
 v9 = *v4;
 ++dst;
 ++v4;
 *(dst - 1) = v9;
LABEL_6:
 v10 = *v4;
 ++dst;
 ++v4;
 *(dst - 1) = v10;
LABEL_7:
 v11 = v4 + 1;
 v12 = dst + 1;
 *dst = *v4;
LABEL_8:
 v4 = v11 + 1;
 dst = v12 + 1;
 *v12 = *v11;
LABEL_9:
 v13 = v4 + 1;
 v14 = dst + 1;
 *dst = *v4;
LABEL_10:
 v4 = v13 + 1;
 dst = v14 + 1;
 *v14 = *v13;
LABEL_11:
 *dst = *v4;
 if ( !--v6 )
 break;
 v7 = v4 + 1;
 v8 = dst + 1;
LABEL_4:
 v4 = v7 + 1;
 dst = v8 + 1;
 *v8 = *v7;
 }
 break;
 }
 return v5;
}


/* Function: loop_complex_cond @ 0x1C80 */
int loop_complex_cond(int x)
{
 int v1; // edx
 int v2; // eax

 if ( x <= 0 )
 return x;
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += 2;
 --x;
 ++v1;
 }
 while ( v2 < x && v1 <= 9 );
 return v1 + x + v2;
}


/* Function: loop_modify_var @ 0x1CC0 */
int loop_modify_var(int n)
{
 int v1; // r8d
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
 v2 += 3;
 v1 += v3;
 if ( v3 <= 5 )
 v2 = v3;
 }
 }
 return v1;
}


/* Function: loop_external_state @ 0x1CF0 */
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


/* Function: tail_recursion @ 0x1D10 */
int tail_recursion(int n, int acc)
{
 int result; // eax

 result = acc;
 if ( n > 1 )
 {
 do
 result *= n--;
 while ( n != 1 );
 }
 return result;
}


/* Function: indirect_recursion_a @ 0x1D30 */
int indirect_recursion_a(int n, int depth)
{
 int result; // eax
 int v3; // edx
 int v4; // edi
 int v5; // eax

 result = n;
 v3 = depth - 2;
 if ( depth > 0 )
 {
 while ( 1 )
 {
 if ( (n & 1) != 0 )
 {
 v4 = 3 * n;
 if ( depth == 1 )
 return v4 + 1;
 v5 = v3;
 n = v4 + 2;
 }
 else
 {
 result = n / 2;
 if ( depth == 1 )
 return result;
 v5 = v3;
 n = n / 2 + 1;
 }
 v3 -= 2;
 depth -= 2;
 if ( !v5 )
 return n;
 }
 }
 return result;
}


/* Function: call_func_ptr @ 0x1D80 */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x1D90 */
int call_func_ptr_array(int idx, int x)
{
 int (*funcs[3])(int); // [rsp+0h] [rbp-28h]
 unsigned long long v4; // [rsp+18h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 funcs[0] = double_value;
 funcs[1] = triple_value;
 funcs[2] = recursion_factorial;
 if ( (unsigned int)idx > 2 )
 return -1;
 else
 return funcs[idx](x);
}


/* Function: call_virtual_func @ 0x1E10 */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x1E20 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int *v4; // rbx
 int v5; // r12d
 int *v6; // r13
 long long v7; // rdi

 if ( n <= 0 )
 return 0;
 v4 = arr;
 v5 = 0;
 v6 = &arr[n - 1 + 1];
 do
 {
 v7 = (unsigned int)*v4++;
 v5 += cb(v7);
 }
 while ( v4 != v6 );
 return v5;
}


/* Function: test_control_flow_l2 @ 0x1E90 */
void test_control_flow_l2()
{
 int v0; // eax
 int i; // edx
 int v2; // eax
 int v3; // eax
 int v4; // r8d
 int v5; // edx
 int j; // edx
 int v7; // edx
 int v8; // ecx
 int *k; // rax
 int arr[5]; // [rsp+10h] [rbp-78h] BYREF
 char v11; // [rsp+24h] [rbp-64h] BYREF
 int src[8]; // [rsp+30h] [rbp-58h] BYREF
 int dst[10]; // [rsp+50h] [rbp-38h] BYREF
 unsigned long long v14; // [rsp+78h] [rbp-10h]

 v14 = __readfsqword(0x28u);
 puts(asc_3118);
 v0 = loop_multi_exit(7);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
 for ( i = 0; i != 1001; ++i )
 ;
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", 1001);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 *(unsigned long long *)src = 0x200000001LL;
 *(unsigned long long *)&src[2] = 0x400000003LL;
 *(unsigned long long *)&src[4] = 0x600000005LL;
 memset(dst, 0, 32);
 *(unsigned long long *)&src[6] = 0x800000007LL;
 v2 = duffs_device(dst, src, 8);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v2);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v4 = 0;
 v3 = 0;
 while ( 1 )
 {
 v5 = v3 + 1;
 if ( v3 + 1 > 9 )
 break;
 v3 += 3;
 v4 += v5;
 if ( v5 <= 5 )
 v3 = v5;
 }
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
 for ( j = 0; j != 101; ++j )
 ;
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", 101);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 120);
 arr[4] = 5;
 v7 = 0;
 v8 = 1;
 *(unsigned long long *)arr = 0x200000001LL;
 *(unsigned long long *)&arr[2] = 0x400000003LL;
 for ( k = arr; ; v8 = *k )
 {
 ++k;
 v7 += 2 * v8;
 if ( k == (int *)&v11 )
 break;
 }
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v7);
}


/* Function: non_local_jump @ 0x2190 */
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


/* Function: cpp_exception @ 0x2200 */
int cpp_exception(int x)
{
 if ( x < 0 )
 return -1;
 if ( x > 100 )
 return -2;
 return 2 * x;
}


/* Function: large_jump_table @ 0x2230 */
int large_jump_table(int op, int a, int b)
{
 int (*ops[11])(int, int); // [rsp+0h] [rbp-68h]
 unsigned long long v5; // [rsp+58h] [rbp-10h]

 v5 = __readfsqword(0x28u);
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


/* Function: conditional_func_ptr @ 0x2310 */
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


/* Function: state_machine @ 0x2340 */
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


/* Function: fsm_func_table @ 0x23B0 */
int fsm_func_table(int event, int state)
{
 int (*state_handlers[5])(int); // [rsp+0h] [rbp-38h]
 unsigned long long v4; // [rsp+28h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 state_handlers[0] = state_idle;
 state_handlers[1] = state_processing;
 state_handlers[2] = state_done;
 state_handlers[3] = state_error;
 if ( (unsigned int)state > 3 )
 return 3;
 else
 return state_handlers[state](event);
}


/* Function: computed_goto @ 0x2440 */
int computed_goto(int *labels, int idx)
{
 void *targets[4]; // [rsp+0h] [rbp-38h]
 unsigned long long v4; // [rsp+28h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 targets[0] = &MEMORY[0x24D0];
 targets[1] = &MEMORY[0x24C0];
 targets[2] = &MEMORY[0x24B0];
 targets[3] = &MEMORY[0x2490];
 if ( (unsigned int)idx <= 3 )
 {
  void *target = targets[idx];
  return (int)target;
 }
 return -1;
}


/* Function: obfuscated_cf @ 0x24F0 */
long long obfuscated_cf(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x2500 */
long long opaque_predicate(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x2510 */
int overlapped_code(int x)
{
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return x / 2;
}


/* Function: test_control_flow_l3 @ 0x2530 */
void test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int labels[4]; // [rsp+0h] [rbp-28h] BYREF
 unsigned long long v5; // [rsp+18h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 puts(asc_32B8);
 v0 = non_local_jump(5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 v2 = op_add(10, 5);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", v2);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
 *(unsigned long long *)labels = 0x100000000LL;
 *(unsigned long long *)&labels[2] = 0x300000002LL;
 v3 = computed_goto(labels, 2);
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v3);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: .term_proc @ 0x26D0 */
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
