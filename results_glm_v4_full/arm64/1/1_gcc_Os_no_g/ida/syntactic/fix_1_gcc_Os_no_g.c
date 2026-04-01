/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/1/1_gcc_Os_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdbool.h>
#include <setjmp.h>
#include <string.h>

#define LODWORD(v) (*(unsigned int*)&(v))

/* Data constants */
const int CSWTCH_55[] = { 50, 60, 70, 80 };
const char asc_1C70[] = "Control Flow Level 1 Tests:\n";
const char asc_1EDD[] = "Control Flow Level 2 Tests:\n";
const char asc_20D0[] = "Control Flow Level 3 Tests:\n";

unsigned char xmmword_2258[16] = { 0x0A, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00 };
unsigned char xmmword_2268[16] = { 0x32, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00 };
unsigned char xmmword_2278[16] = { 0x5A, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
unsigned char xmmword_2288[16] = { 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00 };
unsigned char xmmword_2298[16] = { 0x05, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00 };

jmp_buf jump_buffer;

/* Global function pointer arrays */
unsigned long long off_13010[1];
unsigned long long off_13018[1];
unsigned long long off_13020[1];
unsigned long long off_13028[1];
unsigned long long off_13038[1];
unsigned long long off_13048[1];
unsigned long long off_13058[1];
unsigned long long off_13068[1];
unsigned long long off_13078[1];
unsigned long long off_13088[1];
unsigned long long off_13098[1];
unsigned long long off_130A8[1];

/* Function prototypes for function pointer arrays */
long long double_value(int);
long long triple_value(int);
long long recursion_factorial(int);

/* Additional function prototype */
void __longjmp_chk(jmp_buf, int);

/* CRT stub function */
long long call_weak_fn()
{
 return 0;
}

/* Function: .init_proc @ 0x928 */
long long init_proc()
{
 return call_weak_fn();
}


/* CRT stub function */
void JUMPOUT(int arg)
{
 /* No-op stub for removed function */
}

/* Function: sub_940 @ 0x940 */
void sub_940()
{
 JUMPOUT(0);
}


/* Function: main @ 0xA00 */
long long test_control_flow_l1(int argc, const char **argv, const char **envp);
long long test_control_flow_l2(long long arg);
long long test_control_flow_l3(long long arg);
int main(int argc, const char **argv, const char **envp)
{
 long long v3; // x0
 long long v4; // x0

 v3 = test_control_flow_l1(argc, argv, envp);
 v4 = test_control_flow_l2(v3);
 test_control_flow_l3(v4);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: recursion_factorial @ 0xB54 */
long long recursion_factorial(int a1)
{
 long long result; // x0

 result = 1;
 while ( a1 > 1 )
 result = (unsigned int)(result * a1--);
 return result;
}


/* Function: double_value @ 0xB74 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: triple_value @ 0xB7C */
long long triple_value(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: op_add @ 0xB84 */
long long op_add(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: op_sub @ 0xB8C */
long long op_sub(int a1, int a2)
{
 return (unsigned int)(a1 - a2);
}


/* Function: op_mul @ 0xB94 */
long long op_mul(int a1, int a2)
{
 return (unsigned int)(a1 * a2);
}


/* Function: op_div @ 0xB9C */
long long op_div(int a1, unsigned int a2)
{
 long long result; // x0

 result = a2;
 if ( a2 )
 return (unsigned int)(a1 / (int)a2);
 return result;
}


/* Function: op_mod @ 0xBB0 */
long long op_mod(int a1, unsigned int a2)
{
 long long result; // x0

 result = a2;
 if ( a2 )
 return (unsigned int)(a1 % (int)a2);
 return result;
}


/* Function: op_and @ 0xBC8 */
long long op_and(int a1, unsigned int a2)
{
 return a1 & a2;
}


/* Function: op_or @ 0xBD0 */
long long op_or(int a1, unsigned int a2)
{
 return a1 | a2;
}


/* Function: op_xor @ 0xBD8 */
long long op_xor(int a1, unsigned int a2)
{
 return a1 ^ a2;
}


/* Function: op_shl @ 0xBE0 */
long long op_shl(int a1, char a2)
{
 return (unsigned int)(a1 << a2);
}


/* Function: op_shr @ 0xBE8 */
long long op_shr(int a1, char a2)
{
 return (unsigned int)(a1 >> a2);
}


/* Function: state_idle @ 0xBF0 */
bool state_idle(int a1)
{
 return a1 == 1;
}


/* Function: state_processing @ 0xBFC */
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


/* Function: state_done @ 0xC14 */
long long state_done()
{
 return 2;
}


/* Function: state_error @ 0xC1C */
long long state_error(int a1)
{
 if ( a1 )
 return 3;
 else
 return 0;
}


/* Function: sequential_ops @ 0xC2C */
long long sequential_ops(int a1, int a2, int a3)
{
 return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0xC3C */
long long single_if(long long result)
{
 if ( (int)result > 0 )
 return (unsigned int)(2 * result);
 return result;
}


/* Function: if_else @ 0xC4C */
bool if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0xC58 */
long long nested_if_2(long long result, int a2)
{
 if ( (int)result <= 0 )
 return 0;
 if ( a2 > 0 )
 return (unsigned int)(result + a2);
 return result;
}


/* Function: nested_if_deep @ 0xC78 */
long long nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
 if ( a1 <= 0 )
 return 0;
 if ( a2 <= 0 )
 return 1;
 if ( a3 <= 0 )
 return 2;
 if ( a4 <= 0 )
 return 3;
 return (unsigned int)(a5 > 0) + 4;
}


/* Function: if_elseif_chain @ 0xCC8 */
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


/* Function: if_elseif_long @ 0xCF4 */
long long if_elseif_long(unsigned int a1)
{
 if ( a1 >= 5 )
 return 0xFFFFFFFFLL;
 else
 return 100 * a1 + 100;
}


/* Function: switch_small @ 0xD08 */
long long switch_small(unsigned int a1)
{
 if ( a1 > 3 )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)CSWTCH_55[a1];
}


/* Function: switch_large @ 0xD28 */
long long switch_large(unsigned int a1)
{
 if ( a1 >= 0xA )
 return 0xFFFFFFFFLL;
 else
 return 10 * a1;
}


/* Function: switch_default @ 0xD3C */
long long switch_default(int a1)
{
 unsigned int v1; // w1
 long long result; // x0

 v1 = a1 - 1;
 LODWORD(result) = 100 * a1;
 if ( v1 >= 3 )
 return 0;
 else
 return (unsigned int)result;
}


/* Function: switch_fallthrough @ 0xD54 */
long long switch_fallthrough(int a1)
{
 int v2; // w1
 int v3; // w1

 if ( a1 == 2 )
 {
 v2 = 0;
LABEL_6:
 v3 = v2 + 2 * a1;
 return (unsigned int)(v3 + a1);
 }
 if ( a1 == 3 )
 {
 v2 = 12;
 goto LABEL_6;
 }
 if ( a1 != 1 )
 return 0xFFFFFFFFLL;
 v3 = 0;
 return (unsigned int)(v3 + a1);
}


/* Function: loop_for_fixed @ 0xD94 */
long long loop_for_fixed(int a1)
{
 int v2; // w1
 long long result; // x0

 v2 = 0;
 result = 0;
 while ( v2 < a1 )
 result = (unsigned int)(result + v2++);
 return result;
}


/* Function: loop_while @ 0xDB8 */
long long loop_while(int a1)
{
 int v1; // w1

 v1 = 0;
 while ( a1 )
 {
 a1 /= 10;
 ++v1;
 }
 if ( v1 <= 0 )
 return 1;
 else
 return (unsigned int)v1;
}


/* Function: loop_dowhile @ 0xDDC */
long long loop_dowhile(int a1)
{
 long long result; // x0

 LODWORD(result) = 0;
 do
 {
 a1 /= 10;
 result = (unsigned int)(result + 1);
 }
 while ( a1 );
 return result;
}


/* Function: loop_nested @ 0xDF8 */
long long loop_nested(int a1, int a2)
{
 int v3; // w3
 long long result; // x0
 int v5; // w4

 v3 = 0;
 result = 0;
 while ( v3 < a1 )
 {
 ++v3;
 if ( a2 < 0 )
 v5 = 0;
 else
 v5 = a2;
 result = (unsigned int)(result + v5);
 }
 return result;
}


/* Function: loop_break @ 0xE24 */
long long loop_break(int a1)
{
 long long v2; // x1
 long long result; // x0
 unsigned long long v4[2]; // [xsp+10h] [xbp+10h]
 int v5; // [xsp+20h] [xbp+20h]

 v2 = 0;
 v4[0] = 0x140000000ALL;
 v4[1] = 0x280000001ELL;
 v5 = 50;
 while ( 1 )
 {
 result = (unsigned int)v2;
 if ( *((unsigned int *)v4 + v2) == a1 )
 break;
 if ( ++v2 == 5 )
 return 0xFFFFFFFFLL;
 }
 return result;
}


/* Function: loop_continue @ 0xEB0 */
long long loop_continue(int a1)
{
 int v2; // w1
 long long result; // x0

 v2 = 1;
 result = 0;
 while ( v2 <= a1 )
 {
 if ( (v2 & 1) != 0 )
 result = (unsigned int)(result + v2);
 ++v2;
 }
 return result;
}


/* Function: goto_forward @ 0xED8 */
long long goto_forward(int a1)
{
 if ( a1 > 0 )
 a1 *= a1;
 return (unsigned int)(2 * a1);
}


/* Function: goto_backward @ 0xEEC */
long long goto_backward(int a1)
{
 long long result; // x0
 int i; // w1

 result = 1;
 if ( a1 > 0 )
 {
 for ( i = 1; i <= a1; ++i )
 result = (unsigned int)(result * i);
 }
 return result;
}


/* Function: ternary_op @ 0xF14 */
long long ternary_op(long long result, int a2)
{
 if ( a2 < (int)result )
 return (unsigned int)result;
 else
 return (unsigned int)a2;
}


/* Function: test_control_flow_l1 @ 0xF20 */
long long test_control_flow_l1(int argc, const char **argv, const char **envp)
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0

 puts(asc_1C70);
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
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x1194 */
long long loop_multi_exit(int a1)
{
 unsigned long long *v1; // x1
 int v2; // w2
 long long i; // x3
 unsigned long long v5[3]; // [xsp+18h] [xbp+18h] BYREF

 v1 = v5;
 v5[0] = *(unsigned long long *)xmmword_2258;
 v5[1] = *(unsigned long long *)xmmword_2268;
 v2 = 0;
 v5[2] = *(unsigned long long *)xmmword_2278;
 do
 {
 for ( i = 0; i != 4; ++i )
 {
 if ( *((unsigned int *)v1 + i) == a1 )
 return (unsigned int)(i + 10 * v2);
 }
 ++v2;
 ++v1;
 }
 while ( v2 != 3 );
 return 0xFFFFFFFFLL;
}


/* Function: infinite_loop @ 0x1238 */
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


/* Function: multi_return @ 0x1264 */
long long multi_return(int a1)
{
 long long result; // x0

 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 result = (unsigned int)(2 * a1);
 if ( (int)result > 100 )
 return 4294967294LL;
 if ( (a1 & 1) != 0 )
 return (unsigned int)(a1 + 1);
 return result;
}


/* Function: conditional_return @ 0x1294 */
long long conditional_return(int a1)
{
 bool v1; // cc
 unsigned int v2; // w1
 long long result; // x0

 v1 = a1 <= 0;
 v2 = 2 * a1;
 if ( a1 )
 LODWORD(result) = -a1;
 else
 LODWORD(result) = 0;
 if ( v1 )
 return (unsigned int)result;
 else
 return v2;
}


/* Function: duffs_device @ 0x12A8 */
long long duffs_device(int *a1, int *a2, int a3)
{
 long long result; // x0
 int v5; // w2
 int v6; // t1
 int v7; // t1
 int v8; // t1
 int v9; // t1
 int v10; // t1
 int v11; // t1
 int v12; // t1

 result = (unsigned int)a3;
 if ( a3 <= 0 )
 return 0xFFFFFFFFLL;
 v5 = (a3 + 7) >> 3;
 switch ( result & 7 )
 {
 case 1LL:
 goto LABEL_10;
 case 2LL:
 goto LABEL_9;
 case 3LL:
 goto LABEL_8;
 case 4LL:
 goto LABEL_7;
 case 5LL:
 goto LABEL_6;
 case 6LL:
 goto LABEL_5;
 case 7LL:
 goto LABEL_4;
 default:
 while ( 1 )
 {
 v6 = *a2++;
 *a1++ = v6;
LABEL_4:
 v7 = *a2++;
 *a1++ = v7;
LABEL_5:
 v8 = *a2++;
 *a1++ = v8;
LABEL_6:
 v9 = *a2++;
 *a1++ = v9;
LABEL_7:
 v10 = *a2++;
 *a1++ = v10;
LABEL_8:
 v11 = *a2++;
 *a1++ = v11;
LABEL_9:
 v12 = *a2++;
 *a1++ = v12;
LABEL_10:
 --v5;
 *a1 = *a2;
 if ( !v5 )
 break;
 ++a2;
 ++a1;
 }
 break;
 }
 return result;
}


/* Function: loop_complex_cond @ 0x1344 */
long long loop_complex_cond(int a1)
{
 int i; // w1

 for ( i = 0; 2 * i < a1 - i && i <= 9; ++i )
 ;
 return (unsigned int)(2 * i + a1);
}


/* Function: loop_modify_var @ 0x1370 */
long long loop_modify_var(int a1)
{
 int v2; // w1
 long long result; // x0

 v2 = 0;
 result = 0;
 while ( v2 < a1 )
 {
 result = (unsigned int)(result + v2);
 if ( v2 > 5 )
 v2 += 2;
 ++v2;
 }
 return result;
}


/* Function: loop_external_state @ 0x13A0 */
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


/* Function: tail_recursion @ 0x13C0 */
long long tail_recursion(int a1, unsigned int a2)
{
 long long result; // x0

 result = a2;
 while ( a1 > 1 )
 result = (unsigned int)(result * a1--);
 return result;
}


/* Function: indirect_recursion_a @ 0x13E0 */
long long indirect_recursion_a(long long result, int a2)
{
 int v2; // w0

 while ( a2 > 0 )
 {
 if ( (result & 1) != 0 )
 {
 v2 = 3 * result;
 if ( a2 == 1 )
 return (unsigned int)(v2 + 1);
 result = (unsigned int)(v2 + 2);
 }
 else
 {
 result = (unsigned int)((int)result / 2);
 if ( a2 == 1 )
 return result;
 result = (unsigned int)(result + 1);
 }
 a2 -= 2;
 }
 return result;
}


/* Function: call_func_ptr @ 0x1424 */
long long call_func_ptr(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1430 */
long long call_func_ptr_array(unsigned int a1, unsigned int a2)
{
 unsigned long long v3[3]; // [xsp+10h] [xbp+10h]

 v3[0] = off_13010[0];
 v3[1] = off_13018[0];
 v3[2] = off_13020[0];
 if ( a1 > 2 )
 return 0xFFFFFFFFLL;
 else
 return ((long long ( *)(unsigned long long))v3[a1])(a2);
}


/* Function: call_virtual_func @ 0x14C8 */
long long call_virtual_func(long long a1, int a2)
{
 return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x14D0 */
long long process_with_callback(long long a1, int a2, long long ( *a3)(long long))
{
 long long v6; // x19
 unsigned int v7; // w20
 long long v9; // x0

 v6 = 0;
 v7 = 0;
 while ( a2 > (int)v6 )
 {
 v9 = *(unsigned int *)(a1 + 4 * v6++);
 v7 += a3(v9);
 }
 return v7;
}


/* Function: test_control_flow_l2 @ 0x152C */
long long test_control_flow_l2(long long arg)
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
 int v13; // [xsp+38h] [xbp+38h] BYREF
 int v14; // [xsp+3Ch] [xbp+3Ch] BYREF
 unsigned long long v15[2]; // [xsp+40h] [xbp+40h] BYREF
 int v16; // [xsp+50h] [xbp+50h]
 unsigned long long v17[2]; // [xsp+58h] [xbp+58h] BYREF
 unsigned long long v18[4]; // [xsp+78h] [xbp+78h] BYREF

 puts(asc_1EDD);
 v0 = loop_multi_exit(7);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
 v13 = 0;
 v1 = infinite_loop(&v13);
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 memset(v18, 0, sizeof(v18));
 v17[0] = *(unsigned long long *)xmmword_2288;
 v17[1] = *(unsigned long long *)xmmword_2298;
 v2 = duffs_device((int *)v18, (int *)v17, 8);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v2);
 v3 = loop_complex_cond(10);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", v3);
 v4 = loop_modify_var(10);
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
 v14 = 0;
 v5 = loop_external_state(&v14);
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v5);
 v6 = recursion_factorial(5);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", v6);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 v7 = indirect_recursion_a(6, 1);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", v7);
 v8 = call_func_ptr((long long ( *)(unsigned long long))double_value, 5u);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", v8);
 v9 = call_func_ptr_array(0, 5u);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v9);
 v10 = call_func_ptr_array(2u, 5u);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v10);
 v15[0] = 0x200000001LL;
 v15[1] = 0x400000003LL;
 v16 = 5;
 v11 = process_with_callback((long long)v15, 5, (long long ( *)(long long))double_value);
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v11);
 return 0;
}


/* Function: non_local_jump @ 0x17AC */
long long non_local_jump(int a1)
{
 long long v1; // x1
 long long result; // x0

 if ( _setjmp(jump_buffer) )
 return 0xFFFFFFFFLL;
 if ( a1 < 0 )
 {
 v1 = 1;
 goto LABEL_4;
 }
 result = (unsigned int)(2 * a1);
 if ( a1 > 100 )
 {
 v1 = 2;
LABEL_4:
 __longjmp_chk(jump_buffer, v1);
 }
 return result;
}


/* Function: cpp_exception @ 0x1808 */
long long cpp_exception(int a1)
{
 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 if ( a1 >= 101 )
 return 4294967294LL;
 return (unsigned int)(2 * a1);
}


/* Function: large_jump_table @ 0x1828 */
long long large_jump_table(unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned long long v4[5]; // [xsp+18h] [xbp+18h]

 v4[0] = *(unsigned long long *)off_13028;
 v4[1] = *(unsigned long long *)off_13038;
 v4[2] = *(unsigned long long *)off_13048;
 v4[3] = *(unsigned long long *)off_13058;
 v4[4] = *(unsigned long long *)off_13068;
 if ( a1 > 9 )
 return 0xFFFFFFFFLL;
 else
 return (*((long long ( **)(unsigned long long, unsigned long long))v4 + (int)a1))(a2, a3);
}


/* Function: conditional_func_ptr @ 0x18D0 */
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


/* Function: state_machine @ 0x1908 */
long long state_machine(int a1, unsigned int a2)
{
 long long result; // x0

 result = a2;
 switch ( a2 )
 {
 case 0u:
 result = a1 == 1;
 break;
 case 1u:
 if ( a1 == 2 )
 {
 result = 2;
 }
 else if ( a1 == 99 )
 {
 result = 3;
 }
 else
 {
 result = a2;
 }
 break;
 case 2u:
 return result;
 case 3u:
 if ( a1 )
 result = a2;
 else
 result = 0;
 break;
 default:
 result = 3;
 break;
 }
 return result;
}


/* Function: fsm_func_table @ 0x1970 */
long long fsm_func_table(long long a1, unsigned int a2)
{
 unsigned long long v3[2]; // [xsp+18h] [xbp+18h]

 v3[0] = *(unsigned long long *)off_13078;
 v3[1] = *(unsigned long long *)off_13088;
 if ( a2 > 3 )
 return 3;
 else
 return (*((long long ( **)(long long))v3 + (int)a2))(a1);
}


/* Function: computed_goto @ 0x19FC */
long long computed_goto(long long a1, unsigned int a2)
{
 unsigned long long v3[2]; // [xsp+18h] [xbp+18h]

 v3[0] = *(unsigned long long *)&off_13098;
 v3[1] = *(unsigned long long *)&off_130A8;
 if ( a2 <= 3 )
 __asm volatile("br x0");
 return 0xFFFFFFFFLL;
}


/* Function: obfuscated_cf @ 0x1A8C */
long long obfuscated_cf(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x1A94 */
long long opaque_predicate(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x1A9C */
long long overlapped_code(int a1)
{
 if ( (a1 & 1) != 0 )
 return (unsigned int)(3 * a1 + 1);
 else
 return (unsigned int)(a1 / 2);
}


/* Function: test_control_flow_l3 @ 0x1AB8 */
long long test_control_flow_l3(long long arg)
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 unsigned long long v7[2]; // [xsp+28h] [xbp+28h] BYREF

 puts(asc_20D0);
 v0 = non_local_jump(5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 v2 = large_jump_table(0, 0xAu, 5u);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", v2);
 v3 = conditional_func_ptr(0, 5u);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", v3);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 v4 = fsm_func_table(2, 1u);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", v4);
 *(unsigned long long *)v7 = 0x100000000LL;
 *(unsigned long long *)(v7 + 1) = 0x300000002LL;
 v5 = computed_goto((long long)v7, 2u);
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v5);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 return 0;
}


/* Function: .term_proc @ 0x1C58 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _setjmp @ 0x13248 */

/* FAILED to decompile: __libc_start_main @ 0x13250 */

/* FAILED to decompile: __cxa_finalize @ 0x13258 */

/* FAILED to decompile: __printf_chk @ 0x13260 */

/* FAILED to decompile: __stack_chk_fail @ 0x13268 */

/* FAILED to decompile: abort @ 0x13278 */

/* FAILED to decompile: puts @ 0x13280 */

/* FAILED to decompile: __longjmp_chk @ 0x13288 */

/* FAILED to decompile: __gmon_start__ @ 0x13298 */

/* Total functions decompiled: 74, failed: 9 */
