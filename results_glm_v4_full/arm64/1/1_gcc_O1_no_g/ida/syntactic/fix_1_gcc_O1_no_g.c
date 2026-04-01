/* Decompiler macros and declarations */
#define JUMPOUT(x) do {} while(0)
#define LODWORD(x) (*(unsigned int*)(&(x)))

#include <stdio.h>
#include <setjmp.h>
#include <string.h>

extern long long call_weak_fn(void);
extern unsigned long _stack_chk_guard;

/* String constants */
static const char asc_1E40[] = "=== Control Flow Level 1 Tests ===";
static const char asc_20E8[] = "=== Control Flow Level 2 Tests ===";
static const char asc_2308[] = "=== Control Flow Level 3 Tests ===";

/* Data constants */
static const unsigned long long xmmword_24A0 = 0x0000000000000001ULL;
static const unsigned long long xmmword_24B0 = 0x0000000000000002ULL;
static const unsigned long long xmmword_24C0 = 0x0000000000000003ULL;
static const unsigned long long xmmword_24D0 = 0x0000000000000004ULL;
static const unsigned long long xmmword_24E0 = 0x0000000000000005ULL;

/* Function pointer arrays */
extern unsigned long long off_14010[];
extern unsigned long long off_14018[];
extern unsigned long long off_14020[];
extern unsigned long long off_14028[];
extern unsigned long long off_14038[];
extern unsigned long long off_14048[];
extern unsigned long long off_14058[];
extern unsigned long long off_14068[];
extern unsigned long long off_14078[];
extern unsigned long long off_14088[];
extern unsigned long long off_14098[];
extern unsigned long long off_140A8[];

/* Jump buffer for non-local jumps */
jmp_buf jump_buffer;

/* Internal glibc function declaration */
extern void __longjmp_chk(jmp_buf env, int val);

/* Forward declaration for large_jump_table */
long long large_jump_table(long long a1, unsigned int a2, unsigned int a3)
{
 return 0xFFFFFFFFLL;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/1/1_gcc_O1_no_g
 * Processor: arm
 */




/* Function: sub_940 @ 0x940 */
void sub_940()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: recursion_factorial @ 0xB14 */
long long recursion_factorial(int a1)
{
 if ( a1 <= 1 )
 return 1;
 else
 return (unsigned int)recursion_factorial((unsigned int)(a1 - 1)) * a1;
}


/* Function: double_value @ 0xB4C */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: triple_value @ 0xB54 */
long long triple_value(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: op_add @ 0xB5C */
long long op_add(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: op_sub @ 0xB64 */
long long op_sub(int a1, int a2)
{
 return (unsigned int)(a1 - a2);
}


/* Function: op_mul @ 0xB6C */
long long op_mul(int a1, int a2)
{
 return (unsigned int)(a1 * a2);
}


/* Function: op_div @ 0xB74 */
long long op_div(int a1, unsigned int a2)
{
 long long result; // x0

 result = a2;
 if ( a2 )
 return (unsigned int)(a1 / (int)a2);
 return result;
}


/* Function: op_mod @ 0xB88 */
long long op_mod(int a1, unsigned int a2)
{
 long long result; // x0

 result = a2;
 if ( a2 )
 return (unsigned int)(a1 % (int)a2);
 return result;
}


/* Function: op_and @ 0xBA0 */
long long op_and(int a1, unsigned int a2)
{
 return a1 & a2;
}


/* Function: op_or @ 0xBA8 */
long long op_or(int a1, unsigned int a2)
{
 return a1 | a2;
}


/* Function: op_xor @ 0xBB0 */
long long op_xor(int a1, unsigned int a2)
{
 return a1 ^ a2;
}


/* Function: op_shl @ 0xBB8 */
long long op_shl(int a1, char a2)
{
 return (unsigned int)(a1 << a2);
}


/* Function: op_shr @ 0xBC0 */
long long op_shr(int a1, char a2)
{
 return (unsigned int)(a1 >> a2);
}


/* Function: state_idle @ 0xBC8 */
bool state_idle(int a1)
{
 return a1 == 1;
}


/* Function: state_processing @ 0xBD4 */
long long state_processing(long long result)
{
 if ( (unsigned int)result != 2 )
 {
 if ( (unsigned int)result == 99 )
 return 3;
 else
 return 1;
 }
 return result;
}


/* Function: state_done @ 0xBEC */
long long state_done()
{
 return 2;
}


/* Function: state_error @ 0xBF4 */
long long state_error(int a1)
{
 if ( a1 )
 return 3;
 else
 return 0;
}


/* Function: sequential_ops @ 0xC04 */
long long sequential_ops(int a1, int a2, int a3)
{
 return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0xC14 */
long long single_if(long long result)
{
 if ( (int)result <= 0 )
 return (unsigned int)result;
 else
 return (unsigned int)(2 * result);
}


/* Function: if_else @ 0xC24 */
bool if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0xC30 */
long long nested_if_2(long long result, int a2)
{
 if ( (int)result <= 0 )
 return 0;
 if ( a2 <= 0 )
 return (unsigned int)result;
 return (unsigned int)(result + a2);
}


/* Function: nested_if_deep @ 0xC50 */
long long nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
 long long result; // x0

 if ( a1 <= 0 )
 return 0;
 result = 1;
 if ( a2 > 0 )
 {
 if ( a3 <= 0 )
 {
 return 2;
 }
 else if ( a4 <= 0 )
 {
 return 3;
 }
 else
 {
 return (unsigned int)(a5 > 0) + 4;
 }
 }
 return result;
}


/* Function: if_elseif_chain @ 0xC9C */
long long if_elseif_chain(int a1)
{
 switch ( a1 )
 {
 case 0:
 return 10;
 case 1:
 return 20;
 case 2:
 return 30;
 }
 return 0xFFFFFFFFLL;
}


/* Function: if_elseif_long @ 0xCC8 */
long long if_elseif_long(int a1)
{
 switch ( a1 )
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
 return 0xFFFFFFFFLL;
}


/* Function: switch_small @ 0xD14 */
long long switch_small(int a1)
{
 long long result; // x0

 if ( a1 == 2 )
 return 50;
 if ( a1 > 2 )
 {
 if ( a1 == 3 )
 return 2;
 else
 return 0xFFFFFFFFLL;
 }
 else
 {
 result = 15;
 if ( a1 )
 {
 if ( a1 == 1 )
 return 5;
 else
 return 0xFFFFFFFFLL;
 }
 }
 return result;
}


/* Function: switch_large @ 0xD54 */
long long switch_large(long long result)
{
 int v1; // w1

 v1 = result;
 if ( (unsigned int)result == 5 )
 return 50;
 if ( (int)result > 5 )
 {
 result = 80;
 if ( v1 != 8 )
 {
 if ( v1 <= 8 )
 {
 result = 60;
 if ( v1 != 6 )
 {
 if ( v1 == 7 )
 return 70;
 else
 return 0xFFFFFFFFLL;
 }
 }
 else if ( v1 == 9 )
 {
 return 90;
 }
 else
 {
 return 0xFFFFFFFFLL;
 }
 }
 }
 else if ( (unsigned int)result == 2 )
 {
 return 20;
 }
 else if ( (int)result <= 2 )
 {
 if ( (unsigned int)result )
 {
 if ( (unsigned int)result == 1 )
 return 10;
 else
 return 0xFFFFFFFFLL;
 }
 }
 else if ( (unsigned int)result == 3 )
 {
 return 30;
 }
 else
 {
 return 40;
 }
 return result;
}


/* Function: switch_default @ 0xDE4 */
long long switch_default(int a1)
{
 long long result; // x0

 result = 200;
 if ( a1 != 2 )
 {
 result = 300;
 if ( a1 != 3 )
 {
 if ( a1 == 1 )
 return 100;
 else
 return 0;
 }
 }
 return result;
}


/* Function: switch_fallthrough @ 0xE10 */
long long switch_fallthrough(int a1)
{
 int v2; // w1
 int v3; // w1

 if ( a1 == 2 )
 {
 v2 = 0;
LABEL_7:
 v3 = v2 + 2 * a1;
 return (unsigned int)(v3 + a1);
 }
 if ( a1 == 3 )
 {
 v2 = 12;
 goto LABEL_7;
 }
 if ( a1 != 1 )
 return 0xFFFFFFFFLL;
 v3 = 0;
 return (unsigned int)(v3 + a1);
}


/* Function: loop_for_fixed @ 0xE50 */
long long loop_for_fixed(int a1)
{
 int v2; // w1
 long long result; // x0

 if ( a1 <= 0 )
 return 0;
 v2 = 0;
 LODWORD(result) = 0;
 do
 result = (unsigned int)(result + v2++);
 while ( a1 != v2 );
 return result;
}


/* Function: loop_while @ 0xE80 */
long long loop_while(int a1)
{
 int v1; // w2

 if ( a1 )
 {
 v1 = 0;
 do
 {
 ++v1;
 a1 /= 10;
 }
 while ( a1 );
 }
 else
 {
 v1 = 0;
 }
 if ( v1 <= 0 )
 return 1;
 else
 return (unsigned int)v1;
}


/* Function: loop_dowhile @ 0xEB8 */
long long loop_dowhile(int a1)
{
 long long result; // x0

 LODWORD(result) = 0;
 do
 {
 result = (unsigned int)(result + 1);
 a1 /= 10;
 }
 while ( a1 );
 return result;
}


/* Function: loop_nested @ 0xEE0 */
long long loop_nested(int a1, int a2)
{
 int v3; // w3
 long long result; // x0
 int v5; // w2

 v3 = 0;
 result = 0;
 if ( a1 > 0 )
 {
 do
 {
 v5 = 0;
 if ( a2 > 0 )
 {
 do
 ++v5;
 while ( a2 != v5 );
 result = (unsigned int)(v5 + result);
 }
 ++v3;
 }
 while ( a1 != v3 );
 }
 return result;
}


/* Function: loop_break @ 0xF24 */
long long loop_break(int a1)
{
 unsigned long long *v2; // x1
 long long result; // x0
 unsigned long long v4[2]; // [xsp+10h] [xbp+10h] BYREF
 int v5; // [xsp+20h] [xbp+20h]

 v2 = v4;
 v4[0] = *(unsigned long long *)"\n";
 v4[1] = 0x280000001ELL;
 v5 = 50;
 result = 0;
 while ( *v2 != a1 )
 {
 result = (unsigned int)(result + 1);
 ++v2;
 if ( (unsigned int)result == 5 )
 return 0xFFFFFFFFLL;
 }
 return result;
}


/* Function: loop_continue @ 0xFAC */
long long loop_continue(int a1)
{
 int v1; // w3
 int v2; // w1
 long long result; // x0

 if ( a1 <= 0 )
 return 0;
 v1 = a1 + 1;
 v2 = 1;
 LODWORD(result) = 0;
 do
 {
 if ( (v2 & 1) != 0 )
 result = (unsigned int)(result + v2);
 else
 result = (unsigned int)result;
 ++v2;
 }
 while ( v2 != v1 );
 return result;
}


/* Function: goto_forward @ 0xFE4 */
long long goto_forward(int a1)
{
 if ( a1 > 0 )
 a1 *= a1;
 return (unsigned int)(2 * a1);
}


/* Function: goto_backward @ 0xFF8 */
long long goto_backward(int a1)
{
 int v1; // w2
 int v2; // w1
 long long result; // x0

 if ( a1 <= 0 )
 return 1;
 v1 = a1 + 1;
 v2 = 1;
 LODWORD(result) = 1;
 do
 result = (unsigned int)(result * v2++);
 while ( v2 != v1 );
 return result;
}


/* Function: ternary_op @ 0x1028 */
long long ternary_op(long long result, int a2)
{
 if ( a2 < (int)result )
 return (unsigned int)result;
 else
 return (unsigned int)a2;
}


/* Function: test_control_flow_l1 @ 0x1034 */
long long test_control_flow_l1()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v7; // w0

 puts(asc_1E40);
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
 return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x12B4 */
long long loop_multi_exit(int a1)
{
 unsigned long long *v1; // x2
 int v2; // w4
 long long i; // x1
 unsigned long long v5[3]; // [xsp+18h] [xbp+18h] BYREF

 v1 = v5;
 v5[0] = xmmword_24A0;
 v5[1] = xmmword_24B0;
 v5[2] = xmmword_24C0;
 v2 = 0;
 while ( 2 )
 {
 for ( i = 0; i != 4; ++i )
 {
 if ( *((unsigned int *)v1 + i) == a1 )
 return (unsigned int)(i + 10 * v2);
 }
 ++v2;
 ++v1;
 if ( v2 != 3 )
 continue;
 break;
 }
 return 0xFFFFFFFFLL;
}


/* Function: infinite_loop @ 0x1358 */
long long infinite_loop(unsigned int *a1)
{
 long long result; // x0

 result = 0;
 while ( *a1 != 1 )
 {
 result = (unsigned int)(result + 1);
 if ( (unsigned int)result == 1001 )
 {
 *a1 = 1;
 return result;
 }
 }
 return result;
}


/* Function: multi_return @ 0x1384 */
long long multi_return(int a1)
{
 long long result; // x0

 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 LODWORD(result) = 2 * a1;
 if ( (int)result > 100 )
 return 4294967294LL;
 if ( (a1 & 1) != 0 )
 return (unsigned int)(a1 + 1);
 return (unsigned int)result;
}


/* Function: conditional_return @ 0x13B4 */
long long conditional_return(int a1)
{
 if ( a1 > 0 )
 return (unsigned int)(2 * a1);
 if ( a1 < 0 )
 return (unsigned int)-a1;
 return 0;
}


/* Function: duffs_device @ 0x13CC */
long long duffs_device(int *a1, int *a2, int a3)
{
 long long result; // x0
 int v5; // w2
 int v6; // w2
 int v7; // w4
 int v8; // t1
 int v9; // t1
 int v10; // t1
 int v11; // t1
 int v12; // t1
 int v13; // t1
 int v14; // t1

 result = (unsigned int)a3;
 if ( a3 <= 0 )
 return 0xFFFFFFFFLL;
 v5 = a3 + 14;
 if ( (int)result + 7 >= 0 )
 v5 = result + 7;
 v6 = v5 >> 3;
 if ( (int)result <= 0 )
 v7 = -(-(int)result & 7);
 else
 v7 = result & 7;
 if ( v7 == 4 )
 goto LABEL_24;
 if ( v7 > 4 )
 {
 switch ( v7 )
 {
 case 6:
 goto LABEL_21;
 case 7:
 goto LABEL_20;
 case 5:
 goto LABEL_23;
 }
 }
 else
 {
 if ( v7 == 2 )
 goto LABEL_12;
 if ( v7 <= 2 )
 {
 if ( (result & 7) == 0 )
 goto LABEL_17;
 if ( v7 == 1 )
 goto LABEL_15;
 }
 else
 {
 while ( 1 )
 {
 v8 = *a2++;
 *a1++ = v8;
LABEL_12:
 v9 = *a2++;
 *a1++ = v9;
LABEL_15:
 *a1 = *a2;
 if ( --v6 <= 0 )
 break;
 ++a2;
 ++a1;
LABEL_17:
 v10 = *a2++;
 *a1++ = v10;
LABEL_20:
 v11 = *a2++;
 *a1++ = v11;
LABEL_21:
 v12 = *a2++;
 *a1++ = v12;
LABEL_23:
 v13 = *a2++;
 *a1++ = v13;
LABEL_24:
 v14 = *a2++;
 *a1++ = v14;
 }
 }
 }
 return result;
}


/* Function: loop_complex_cond @ 0x14B0 */
long long loop_complex_cond(int a1)
{
 int v1; // w2
 int v2; // w1

 if ( a1 <= 0 )
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
 --a1;
 ++v1;
 }
 while ( v2 < a1 && v1 <= 9 && a1 > 0 );
 }
 return (unsigned int)(v2 + a1 + v1);
}


/* Function: loop_modify_var @ 0x14F4 */
long long loop_modify_var(int a1)
{
 long long result; // x0
 int v3; // w1
 int v4; // w2

 result = 0;
 v3 = 0;
 if ( a1 > 0 )
 {
 while ( 1 )
 {
 v4 = v3 + 1;
 if ( a1 <= v3 + 1 )
 break;
 result = (unsigned int)(result + v4);
 v3 += 3;
 if ( v4 <= 5 )
 v3 = v4;
 }
 }
 return result;
}


/* Function: loop_external_state @ 0x152C */
long long loop_external_state(unsigned int *a1)
{
 long long result; // x0

 result = 0;
 do
 {
 if ( *a1 )
 break;
 result = (unsigned int)(result + 1);
 }
 while ( (unsigned int)result != 101 );
 return result;
}


/* Function: tail_recursion @ 0x154C */
long long tail_recursion(int a1, unsigned int a2)
{
 if ( a1 <= 1 )
 return a2;
 else
 return tail_recursion((unsigned int)(a1 - 1), a1 * a2);
}


/* Function: indirect_recursion_a @ 0x1578 */
long long indirect_recursion_a(long long result, int a2)
{
 int v2; // w0

 if ( a2 > 0 )
 {
 if ( (result & 1) != 0 )
 {
 v2 = 3 * result;
 if ( a2 <= 1 )
 return (unsigned int)(v2 + 1);
 else
 return indirect_recursion_a((unsigned int)(v2 + 2), (unsigned int)(a2 - 2));
 }
 else
 {
 result = (unsigned int)((int)result / 2);
 if ( a2 > 1 )
 return indirect_recursion_a((unsigned int)(result + 1), (unsigned int)(a2 - 2));
 }
 }
 return result;
}


/* Function: call_func_ptr @ 0x15D8 */
long long call_func_ptr(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array */
long long call_func_ptr_array(int a1, unsigned int a2)
{
 long long (*func_array[])(int) = {double_value, triple_value, recursion_factorial};
 if ( a1 >= 0 && a1 < 3 )
 return func_array[a1](a2);
 return 0xFFFFFFFFLL;
}


/* Function: call_virtual_func @ 0x1674 */
long long call_virtual_func(long long a1, int a2)
{
 return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x167C */
long long process_with_callback(unsigned int *a1, int a2, long long ( *a3)(unsigned long long))
{
 unsigned int *v4; // x19
 unsigned int *v5; // x21
 unsigned int v6; // w20
 unsigned int v7; // t1

 if ( a2 <= 0 )
 {
 return 0;
 }
 else
 {
 v4 = a1;
 v5 = &a1[a2 - 1 + 1];
 v6 = 0;
 do
 {
 v7 = *v4++;
 v6 += a3(v7);
 }
 while ( v4 != v5 );
 }
 return v6;
}


/* Function: test_control_flow_l2 @ 0x16DC */
void *test_control_flow_l2()
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
 int v14; // [xsp+38h] [xbp+38h] BYREF
 int v15; // [xsp+3Ch] [xbp+3Ch] BYREF
 unsigned int v16[2]; // [xsp+40h] [xbp+40h] BYREF
 int v17; // [xsp+50h] [xbp+50h]
 unsigned long long v18[2]; // [xsp+58h] [xbp+58h] BYREF
 unsigned long long v19[4]; // [xsp+78h] [xbp+78h] BYREF

 puts(asc_20E8);
 v0 = loop_multi_exit(7);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
 v14 = 0;
 v1 = infinite_loop(&v14);
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 v18[0] = xmmword_24D0;
 v18[1] = xmmword_24E0;
 memset(v19, 0, sizeof(v19));
 v2 = duffs_device((int *)v19, (int *)v18, 8);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v2);
 v3 = loop_complex_cond(10);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", v3);
 v4 = loop_modify_var(10);
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
 v15 = 0;
 v5 = loop_external_state(&v15);
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v5);
 v6 = recursion_factorial(5);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", v6);
 v7 = tail_recursion(5, 1u);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", v7);
 v8 = indirect_recursion_a(10, 3);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", v8);
 v9 = call_func_ptr((long long ( *)(unsigned long long))double_value, 5u);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", v9);
 v10 = call_func_ptr_array(0, 5u);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v0);
 v11 = 0;
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v11);
 v16[0] = 1;
 v16[1] = 3;
 v17 = 5;
 v12 = process_with_callback(v16, 5, (long long ( *)(unsigned long long))double_value);
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v12);
 return 0;
}


/* Function: non_local_jump @ 0x1968 */
long long non_local_jump(int a1)
{
 long long result; // x0

 if ( _setjmp(jump_buffer) )
 return 0xFFFFFFFFLL;
 if ( a1 < 0 )
 __longjmp_chk(jump_buffer, 1);
 result = (unsigned int)(2 * a1);
 if ( a1 > 100 )
 __longjmp_chk(jump_buffer, 2);
 return result;
}


/* Function: cpp_exception @ 0x19CC */
long long cpp_exception(int a1)
{
 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 if ( a1 > 100 )
 return 4294967294LL;
 return (unsigned int)(2 * a1);
}





/* Function: conditional_func_ptr @ 0x1A80 */
long long conditional_func_ptr(int a1, unsigned int a2)
{
 long long ( *v2)(int); // x2

 if ( !a1 )
 return double_value(a2);
 v2 = triple_value;
 if ( a1 != 1 )
 v2 = recursion_factorial;
 return v2(a2);
}


/* Function: state_machine @ 0x1AC4 */
long long state_machine(long long result, int a2)
{
 if ( a2 == 2 )
 return 2;
 if ( a2 > 2 )
 {
 if ( (unsigned int)result )
 LODWORD(result) = a2;
 else
 LODWORD(result) = 0;
 if ( a2 == 3 )
 return (unsigned int)result;
 else
 return 3;
 }
 else if ( a2 )
 {
 if ( a2 == 1 )
 {
 if ( (unsigned int)result != 2 )
 {
 if ( (unsigned int)result == 99 )
 return 3;
 else
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
 return (unsigned int)result == 1;
 }
 return result;
}





/* Function: computed_goto @ 0x1BA4 */
long long computed_goto(long long a1, unsigned int a2)
{
 unsigned long long v3[2]; // [xsp+18h] [xbp+18h]

 v3[0] = *(unsigned long long *)&off_14098;
 v3[1] = *(unsigned long long *)&off_140A8;
 if ( a2 <= 3 )
 return 0xFFFFFFFFLL;
 return 0xFFFFFFFFLL;
}


/* Function: obfuscated_cf @ 0x1C34 */
long long obfuscated_cf(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x1C3C */
long long opaque_predicate(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x1C44 */
long long overlapped_code(int a1)
{
 if ( (a1 & 1) != 0 )
 return (unsigned int)(3 * a1 + 1);
 else
 return (unsigned int)(a1 / 2);
}


/* Function: test_control_flow_l3 @ 0x1C5C */
void *test_control_flow_l3()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 unsigned int v7[4]; // [xsp+28h] [xbp+28h] BYREF

 puts(asc_2308);
 v0 = non_local_jump(5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 v2 = 0xFFFFFFFFLL;
 v3 = conditional_func_ptr(0, 5u);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", v3);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 
 v7[0] = 0;
 v7[1] = 1;
 v7[2] = 2;
 v7[3] = 3;
 v5 = computed_goto((long long)v7, 2u);
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v5);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 return 0;
}


/* Function: main @ 0x1E00 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


/* Function: .term_proc @ 0x1E20 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _setjmp @ 0x14248 */

/* FAILED to decompile: __libc_start_main @ 0x14250 */

/* FAILED to decompile: __cxa_finalize @ 0x14258 */

/* FAILED to decompile: __printf_chk @ 0x14260 */

/* FAILED to decompile: __stack_chk_fail @ 0x14268 */

/* FAILED to decompile: abort @ 0x14278 */

/* FAILED to decompile: puts @ 0x14280 */

/* FAILED to decompile: __longjmp_chk @ 0x14288 */

/* FAILED to decompile: __gmon_start__ @ 0x14298 */

/* Total functions decompiled: 74, failed: 9 */
