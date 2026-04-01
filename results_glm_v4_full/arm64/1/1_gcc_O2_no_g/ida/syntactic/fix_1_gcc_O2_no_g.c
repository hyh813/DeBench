/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/1/1_gcc_O2_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <string.h>

/* External declarations for CRT stubs and compiler support */
extern long long call_weak_fn(void);
extern unsigned long _stack_chk_guard;
extern int _setjmp(void *);
extern void __longjmp_chk(void *, int);
extern int __printf_chk(int __flag, const char *__format, ...);

/* Macro for manipulating 32-bit portion of 64-bit value */
#define LODWORD(x) ((unsigned int*)&(x))[0]

/* String constants */
const char asc_1F20[] = "=== Control Flow Level 1 Tests ===";
const char asc_21C8[] = "=== Control Flow Level 2 Tests ===";
const char asc_23E8[] = "=== Control Flow Level 3 Tests ===";

/* Data arrays for switch tables and function pointers */
const long long CSWTCH_55[4] = { 0, 10, 20, 30 };

unsigned long long xmmword_2590[2] = { 0x140000000ALL, 0x280000001ELL };
unsigned long long xmmword_25A0[2] = { 0x3C0000002CLL, 0x500000003DLL };
unsigned long long xmmword_25B0[2] = { 0x640000004ELL, 0x780000005FLL };
unsigned long long xmmword_25C0[2] = { 0x100000001LL, 0x200000003LL };
unsigned long long xmmword_25D0[2] = { 0x300000005LL, 0x400000007LL };

/* Function pointer offsets */
const long long *off_14010 = (const long long *)0x14010;
const long long *off_14018 = (const long long *)0x14018;
const long long *off_14020 = (const long long *)0x14020;
const long long *off_14028 = (const long long *)0x14028;
const long long *off_14038 = (const long long *)0x14038;
const long long *off_14048 = (const long long *)0x14048;
const long long *off_14058 = (const long long *)0x14058;
const long long *off_14068 = (const long long *)0x14068;
const long long *off_14078 = (const long long *)0x14078;
const long long *off_14088 = (const long long *)0x14088;
const long long *off_14098 = (const long long *)0x14098;
const long long *off_140A8 = (const long long *)0x140A8;

/* Jump buffer for non-local jumps */
char jump_buffer[64];

/* Stack protector guard variable */
unsigned long _stack_chk_guard;

/* Forward declarations for functions used before definition */
long long test_control_flow_l1();
long long test_control_flow_l2();
void *test_control_flow_l3();

/* Function: .init_proc @ 0x928 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_940 @ 0x940 */
void sub_940()
{
 __builtin_unreachable();
}


/* Function: main @ 0xA00 */
int main(int argc, const char **argv, const char **envp)
{
 long long v3; // x0
 long long v4; // x0
 void *v5; // x0

 v3 = test_control_flow_l1();
 v4 = test_control_flow_l2();
 v5 = test_control_flow_l3();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: call_weak_fn @ 0x?? */
long long call_weak_fn(void)
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: recursion_factorial @ 0xB60 */
long long recursion_factorial(int a1)
{
 long long result; // x0
 int v3; // w2

 result = 1;
 if ( a1 > 1 )
 {
 do
 {
 v3 = a1--;
 result = (unsigned int)(result * v3);
 }
 while ( a1 != 1 );
 }
 return result;
}


/* Function: double_value @ 0xB90 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: triple_value @ 0xBA0 */
long long triple_value(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: op_add @ 0xBB0 */
long long op_add(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: op_sub @ 0xBC0 */
long long op_sub(int a1, int a2)
{
 return (unsigned int)(a1 - a2);
}


/* Function: op_mul @ 0xBD0 */
long long op_mul(int a1, int a2)
{
 return (unsigned int)(a1 * a2);
}


/* Function: op_div @ 0xBE0 */
long long op_div(int a1, unsigned int a2)
{
 long long result; // x0

 result = a2;
 if ( a2 )
 return (unsigned int)(a1 / (int)a2);
 return result;
}


/* Function: op_mod @ 0xBF4 */
long long op_mod(int a1, unsigned int a2)
{
 long long result; // x0

 result = a2;
 if ( a2 )
 return (unsigned int)(a1 % (int)a2);
 return result;
}


/* Function: op_and @ 0xC10 */
long long op_and(int a1, unsigned int a2)
{
 return a1 & a2;
}


/* Function: op_or @ 0xC20 */
long long op_or(int a1, unsigned int a2)
{
 return a1 | a2;
}


/* Function: op_xor @ 0xC30 */
long long op_xor(int a1, unsigned int a2)
{
 return a1 ^ a2;
}


/* Function: op_shl @ 0xC40 */
long long op_shl(int a1, char a2)
{
 return (unsigned int)(a1 << a2);
}


/* Function: op_shr @ 0xC50 */
long long op_shr(int a1, char a2)
{
 return (unsigned int)(a1 >> a2);
}


/* Function: state_idle @ 0xC60 */
bool state_idle(int a1)
{
 return a1 == 1;
}


/* Function: state_processing @ 0xC70 */
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


/* Function: state_done @ 0xC90 */
long long state_done()
{
 return 2;
}


/* Function: state_error @ 0xCA0 */
long long state_error(int a1)
{
 if ( a1 )
 return 3;
 else
 return 0;
}


/* Function: sequential_ops @ 0xCB0 */
long long sequential_ops(int a1, int a2, int a3)
{
 return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0xCC0 */
long long single_if(long long result)
{
 if ( (int)result <= 0 )
 return (unsigned int)result;
 else
 return (unsigned int)(2 * result);
}


/* Function: if_else @ 0xCD0 */
bool if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0xCE0 */
long long nested_if_2(long long result, int a2)
{
 bool v2; // zf
 bool v3; // nf
 unsigned int v4; // w1

 if ( (int)result <= 0 )
 return 0;
 v2 = a2 == 0;
 v3 = a2 < 0;
 v4 = result + a2;
 if ( v3 || v2 )
 return (unsigned int)result;
 else
 return v4;
}


/* Function: nested_if_deep @ 0xD00 */
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


/* Function: if_elseif_chain @ 0xD50 */
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


/* Function: if_elseif_long @ 0xD80 */
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


/* Function: switch_small @ 0xDD0 */
long long switch_small(unsigned int a1)
{
 if ( a1 > 3 )
 return 0xFFFFFFFFLL;
 else
 return CSWTCH_55[a1];
}


/* Function: switch_large @ 0xDF0 */
long long switch_large(unsigned int a1)
{
 bool v1; // cf
 long long result; // x0

 v1 = a1 >= 0xA;
 LODWORD(result) = 10 * a1;
 if ( v1 )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)result;
}


/* Function: switch_default @ 0xE04 */
long long switch_default(int a1)
{
 unsigned int v1; // w2
 long long result; // x0

 v1 = a1 - 1;
 LODWORD(result) = 100 * a1;
 if ( v1 >= 3 )
 return 0;
 else
 return (unsigned int)result;
}


/* Function: switch_fallthrough @ 0xE20 */
long long switch_fallthrough(int a1)
{
 int v2; // w1

 switch ( a1 )
 {
 case 2:
 v2 = 0;
 return (unsigned int)(v2 + 2 * a1 + a1);
 case 3:
 v2 = 12;
 return (unsigned int)(v2 + 2 * a1 + a1);
 case 1:
 return 1;
 default:
 return 0xFFFFFFFFLL;
 }
}


/* Function: loop_for_fixed @ 0xE60 */
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


/* Function: loop_while @ 0xE94 */
long long loop_while(int a1)
{
 int v1; // w2
 long long result; // x0

 v1 = a1;
 if ( !a1 )
 return 1;
 LODWORD(result) = 0;
 do
 {
 result = (unsigned int)(result + 1);
 v1 /= 10;
 }
 while ( v1 );
 return result;
}


/* Function: loop_dowhile @ 0xED0 */
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


/* Function: loop_nested @ 0xF00 */
long long loop_nested(int a1, int a2)
{
 int v3; // w2
 long long result; // x0

 v3 = 0;
 result = 0;
 if ( a1 > 0 )
 {
 do
 {
 ++v3;
 if ( a2 <= 0 )
 result = (unsigned int)result;
 else
 result = (unsigned int)(a2 + result);
 }
 while ( a1 != v3 );
 }
 return result;
}


/* Function: loop_break @ 0xF34 */
long long loop_break(int a1)
{
 unsigned int *v1; // x1
 long long result; // x0
 unsigned long long v4[2]; // [xsp+10h] [xbp+10h] BYREF
 int v5; // [xsp+20h] [xbp+20h]

 v1 = (unsigned int *)v4;
 result = 0;
 v4[0] = 0x140000000ALL;
 v4[1] = 0x280000001ELL;
 v5 = 50;
 while ( *v1 != a1 )
 {
 result = (unsigned int)(result + 1);
 ++v1;
 if ( (unsigned int)result == 5 )
 return 0xFFFFFFFFLL;
 }
 return result;
}


/* Function: loop_continue @ 0xFC0 */
long long loop_continue(int a1)
{
 int v1; // w3
 int v2; // w1
 long long result; // x0
 bool v4; // zf
 unsigned int v5; // w2

 if ( a1 <= 0 )
 return 0;
 v1 = a1 + 1;
 v2 = 1;
 LODWORD(result) = 0;
 do
 {
 v4 = (v2 & 1) == 0;
 v5 = result + v2++;
 if ( v4 )
 result = (unsigned int)result;
 else
 result = v5;
 }
 while ( v2 != v1 );
 return result;
}


/* Function: goto_forward @ 0x1000 */
long long goto_forward(int a1)
{
 if ( a1 > 0 )
 a1 *= a1;
 return (unsigned int)(2 * a1);
}


/* Function: goto_backward @ 0x1014 */
long long goto_backward(int a1)
{
 int v1; // w2
 long long result; // x0
 int v3; // w1

 if ( a1 <= 0 )
 return 1;
 v1 = a1 + 1;
 LODWORD(result) = 1;
 v3 = 1;
 do
 result = (unsigned int)(result * v3++);
 while ( v1 != v3 );
 return result;
}


/* Function: ternary_op @ 0x1044 */
long long ternary_op(long long result, int a2)
{
 if ( a2 < (int)result )
 return (unsigned int)result;
 else
 return (unsigned int)a2;
}


/* Function: test_control_flow_l1 @ 0x1050 */
long long test_control_flow_l1()
{
 long long *v0; // x0
 int v1; // w2
 unsigned int *v2; // x0
 int v3; // w2
 unsigned long long v5[2]; // [xsp+30h] [xbp+30h] BYREF
 int v7; // [xsp+40h] [xbp+40h]

 puts(asc_1F20);
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
	v0 = (long long *)v5;
	(void)(v1 = 0);
	v5[0] = 0x140000000ALL;
	v5[1] = 0x280000001ELL;
	v7 = 50;
	while ( *(unsigned int *)v0 != 30 )
 {
 ++v1;
 v0 = (long long *)((char *)v0 + 4);
 if ( v1 == 5 )
 {
 v1 = -1;
 break;
 }
 }
__printf_chk(1, "CF-L1-16 (loop_break): %d\n", v1);
 v2 = (unsigned int *)v5;
 v3 = 0;
 v5[0] = 0x140000000ALL;
	v5[1] = 0x280000001ELL;
	v7 = 50;
	while ( *(unsigned int *)v2 != 99 )
 {
 ++v3;
 v2 = (unsigned int *)((char *)v2 + 4);
 if ( v3 == 5 )
 {
 v3 = -1;
 break;
 }
 }
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v3);
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", 25);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", -6);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
 puts("");
 return 0;
}


/* Function: loop_multi_exit @ 0x1340 */
long long loop_multi_exit(int a1)
{
 int v1; // w4
 unsigned long long *v2; // x3
 long long i; // x1
 unsigned long long v5[3]; // [xsp+18h] [xbp+18h] BYREF

 v1 = 0;
 v2 = v5;
 v5[0] = xmmword_2590[0];
 v5[1] = xmmword_25A0[0];
 v5[2] = xmmword_25B0[0];
 while ( 2 )
 {
 for ( i = 0; i != 4; ++i )
 {
 if ( *((unsigned int *)v2 + i) == a1 )
 return (unsigned int)(i + 10 * v1);
 }
 ++v1;
 ++v2;
 if ( v1 != 3 )
 continue;
 break;
 }
 return 0xFFFFFFFFLL;
}


/* Function: infinite_loop @ 0x13E4 */
long long infinite_loop(unsigned int *a1)
{
 unsigned int i; // w1

 for ( i = 0; i != 1001; ++i )
 {
 if ( *a1 == 1 )
 return i;
 }
 *a1 = 1;
 return 1001;
}


/* Function: multi_return @ 0x1420 */
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


/* Function: conditional_return @ 0x1450 */
long long conditional_return(int a1)
{
 bool v1; // cc
 unsigned int v2; // w1
 long long result; // x0

 v1 = a1 <= 0;
 if ( a1 )
 v2 = -a1;
 else
 v2 = 0;
 LODWORD(result) = 2 * a1;
 if ( v1 )
 return v2;
 else
 return (unsigned int)result;
}


/* Function: duffs_device @ 0x1464 */
long long duffs_device(int *a1, int *a2, int a3)
{
 int *v3; // x3
 int v4; // w4
 int v5; // w5
 int v6; // t1
 int v7; // t1
 int *v8; // x1
 int v9; // t1
 unsigned int *v10; // x3
 int v11; // t1
 int *v12; // x1
 int v13; // t1
 unsigned int *v14; // x3
 int v15; // t1
 int v16; // t1
 int v17; // t1
 int *v18; // x1
 int v19; // t1
 int v20; // t1

 v3 = a1;
 if ( a3 <= 0 )
 return (unsigned int)-1;
 v4 = a3 & 7;
 v5 = (a3 + 7) >> 3;
 if ( v4 == 4 )
 goto LABEL_11;
 if ( (a3 & 7u) > 4 )
 {
 if ( v4 == 6 )
 goto LABEL_10;
 if ( v4 == 7 )
 {
 v17 = *a2++;
 *a1 = v17;
 v3 = a1 + 1;
 goto LABEL_10;
 }
 if ( v4 != 5 )
 goto LABEL_9;
 v19 = *a2;
 v18 = a2 + 1;
 *a1 = v19;
 v20 = *v18;
 a2 = v18 + 1;
 a1[1] = v20;
 v3 = a1 + 2;
 }
 else
 {
 if ( v4 == 2 )
 goto LABEL_7;
 if ( v4 != 3 )
 {
 if ( v4 != 1 )
 goto LABEL_9;
 --v5;
 *a1 = *a2;
 if ( v5 )
 goto LABEL_8;
 return (unsigned int)a3;
 }
 }
 while ( 1 )
 {
 v6 = *a2++;
 *v3++ = v6;
LABEL_7:
 v7 = *a2++;
 --v5;
 *v3++ = v7;
 *v3 = *a2;
 if ( !v5 )
 break;
LABEL_8:
 ++a2;
 ++v3;
LABEL_9:
 v9 = *a2;
 v8 = a2 + 1;
 *v3 = v9;
 v10 = v3 + 1;
 v11 = *v8;
 a2 = v8 + 1;
 *v10 = v11;
 v3 = v10 + 1;
LABEL_10:
 v13 = *a2;
 v12 = a2 + 1;
 *v3 = v13;
 v14 = v3 + 1;
 v15 = *v12;
 a2 = v12 + 1;
 *v14 = v15;
 v3 = v14 + 1;
LABEL_11:
 v16 = *a2++;
 *v3++ = v16;
 }
 return (unsigned int)a3;
}


/* Function: loop_complex_cond @ 0x1550 */
long long loop_complex_cond(long long result)
{
 int v1; // w2
 int v2; // w1

 if ( (int)result > 0 )
 {
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += 2;
 LODWORD(result) = result - 1;
 ++v1;
 }
 while ( v2 < (int)result && v1 <= 9 );
 return (unsigned int)(v2 + result + v1);
 }
 return result;
}


/* Function: loop_modify_var @ 0x1584 */
long long loop_modify_var(int a1)
{
 unsigned int v1; // w2
 int v2; // w1
 int v3; // w3

 v1 = 0;
 v2 = 0;
 if ( a1 > 0 )
 {
 while ( 1 )
 {
 v3 = v2 + 3;
 if ( a1 <= ++v2 )
 break;
 v1 += v2;
 if ( v2 > 5 )
 v2 = v3;
 }
 }
 return v1;
}


/* Function: loop_external_state @ 0x15C0 */
long long loop_external_state(unsigned int *a1)
{
 unsigned int i; // w1

 for ( i = 0; i != 101; ++i )
 {
 if ( *a1 )
 break;
 }
 return i;
}


/* Function: tail_recursion @ 0x15E4 */
long long tail_recursion(int a1, unsigned int a2)
{
 long long result; // x0
 int v4; // w1

 result = a2;
 if ( a1 > 1 )
 {
 do
 {
 v4 = a1--;
 result = (unsigned int)(result * v4);
 }
 while ( a1 != 1 );
 }
 return result;
}


/* Function: indirect_recursion_a @ 0x1610 */
long long indirect_recursion_a(long long result, int a2)
{
 int v2; // w2
 int v3; // w0
 int v4; // w3
 int v5; // w4

 v2 = a2 - 2;
 if ( a2 > 0 )
 {
 do
 {
 if ( (result & 1) != 0 )
 {
 v3 = 3 * result;
 if ( a2 == 1 )
 return (unsigned int)(v3 + 1);
 result = (unsigned int)(v3 + 2);
 v4 = v2;
 }
 else
 {
 v4 = v2;
 v5 = (int)result / 2;
 result = (unsigned int)((int)result / 2);
 if ( a2 == 1 )
 return result;
 result = (unsigned int)(v5 + 1);
 }
 v2 -= 2;
 a2 -= 2;
 }
 while ( v4 );
 }
 return result;
}


/* Function: call_func_ptr @ 0x1670 */
long long call_func_ptr(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1680 */
long long call_func_ptr_array(unsigned int a1, unsigned int a2)
{
 unsigned long long v3[3]; // [xsp+10h] [xbp+10h]

 v3[0] = off_14010[0];
 v3[1] = off_14018[0];
 v3[2] = off_14020[0];
 if ( a1 > 2 )
 return 0xFFFFFFFFLL;
 else
 return ((long long ( *)(unsigned long long))v3[a1])(a2);
}


/* Function: call_virtual_func @ 0x1720 */
long long call_virtual_func(long long a1, int a2)
{
 return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x1730 */
long long process_with_callback(unsigned int *a1, int a2, long long ( *a3)(unsigned long long))
{
 unsigned int *v3; // x19
 long long v5; // x21
 unsigned int v6; // w20
 unsigned int v7; // t1

 if ( a2 <= 0 )
 return 0;
 v3 = a1;
 v5 = (long long)&a1[a2 - 1 + 1];
 v6 = 0;
 do
 {
 v7 = *v3++;
 v6 += a3(v7);
 }
 while ( v3 != (unsigned int *)v5 );
 return v6;
}


/* Function: test_control_flow_l2 @ 0x17A0 */
long long test_control_flow_l2()
{
 int v0; // w0
 int i; // w2
 int v2; // w0
 int v3; // w0
 int v4; // w2
 int v5; // w1
 int v6; // w2
 long long v7; // x0
 int v8; // w2
 char *v9; // x1
 int v11; // [xsp+2Ch] [xbp+2Ch]
 unsigned long long v12[2]; // [xsp+30h] [xbp+30h] BYREF
 int v13; // [xsp+40h] [xbp+40h]
 unsigned long long v14[2]; // [xsp+48h] [xbp+48h] BYREF
 unsigned long long v15[4]; // [xsp+68h] [xbp+68h] BYREF

 (void)puts(asc_21C8);
 v0 = loop_multi_exit(7);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
 for ( i = 0; i != 1001; ++i ) {}
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", 1001);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 memset(v15, 0, sizeof(v15));
 v14[0] = xmmword_25C0[0];
 v14[1] = xmmword_25D0[0];
 v2 = duffs_device((int *)v15, (int *)v14, 8);
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
 if ( v5 <= 5 )
 v3 = v5;
 v4 += v5;
 }
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
 v6 = 0;
 v11 = 0;
 do
 ++v6;
 while ( v6 != 101 );
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", 101);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 10);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 120);
 v7 = 1;
 v8 = 0;
 v13 = 5;
 v12[0] = 0x200000001LL;
 v12[1] = 0x400000003LL;
 do
 {
 unsigned int *temp = (unsigned int *)v12 + v7++;
 v9 = (char *)temp;
 v8 += 2 * *(v9 - 1);
 }
 while ( v7 != 6 );
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v8);
 (void)puts("");
 return (long long)&_stack_chk_guard;
}


/* Function: non_local_jump @ 0x1A30 */
long long non_local_jump(int a1)
{
 long long result; // x0

 if ( _setjmp(&jump_buffer) )
 return 0xFFFFFFFFLL;
 if ( a1 < 0 )
 {
 __longjmp_chk(&jump_buffer, 1);
 return 0xFFFFFFFFLL;
 }
 result = (unsigned int)(2 * a1);
 if ( a1 > 100 )
 __longjmp_chk(&jump_buffer, 2);
 return result;
}


/* Function: cpp_exception @ 0x1A94 */
long long cpp_exception(int a1)
{
 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 if ( a1 > 100 )
 return 4294967294LL;
 return (unsigned int)(2 * a1);
}


/* Function: large_jump_table @ 0x1AC0 */
long long large_jump_table(unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned long long v4[5]; // [xsp+18h] [xbp+18h]

 v4[0] = *(unsigned long long *)off_14028;
 v4[1] = *(unsigned long long *)off_14038;
 v4[2] = *(unsigned long long *)off_14048;
 v4[3] = *(unsigned long long *)off_14058;
 v4[4] = *(unsigned long long *)off_14068;
 if ( a1 > 9 )
 return 0xFFFFFFFFLL;
 else
 return (*((long long ( **)(unsigned long long, unsigned long long))v4 + (int)a1))(a2, a3);
}


/* Function: conditional_func_ptr @ 0x1B70 */
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


/* Function: state_machine @ 0x1BB0 */
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


/* Function: fsm_func_table @ 0x1C14 */
long long fsm_func_table(long long a1, long long a2)
{
 unsigned long long v3[2]; // [xsp+18h] [xbp+18h]

 v3[0] = *(unsigned long long *)off_14078;
 v3[1] = *(unsigned long long *)off_14088;
 if ( (unsigned int)a2 > 3 )
 return 3;
 else
 return (*((long long ( **)(long long, long long, void *, unsigned long long))v3 + (int)a2))(a1, a2, (void *)&_stack_chk_guard, 0);
}


/* Function: computed_goto @ 0x1CB0 */
void computed_goto(long long a1, unsigned int a2)
{
 unsigned long long v3[2]; // [xsp+18h] [xbp+18h]

 v3[0] = *(unsigned long long *)&off_14098;
 v3[1] = *(unsigned long long *)&off_140A8;
 if ( a2 <= 3 )
 {
 __asm__ __volatile__("br %0" : : "r"(a1));
 }
}


/* Function: obfuscated_cf @ 0x1D40 */
long long obfuscated_cf(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x1D50 */
long long opaque_predicate(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x1D60 */
long long overlapped_code(int a1)
{
 bool v2; // zf
 int v3; // w0

 v2 = (a1 & 1) == 0;
 v3 = 3 * a1;
 if ( v2 )
 return (unsigned int)(a1 / 2);
 else
 return (unsigned int)(v3 + 1);
}


/* Function: test_control_flow_l3 @ 0x1D80 */
void *test_control_flow_l3()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 unsigned long long v5[2]; // [xsp+28h] [xbp+28h] BYREF

 puts(asc_23E8);
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
v5[0] = 0x100000000LL;
	v5[1] = 0x300000002LL;
	computed_goto((long long)v5, 2u);
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", -1);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 return &_stack_chk_guard;
}


/* Function: .term_proc @ 0x1F00 */
void term_proc(void)
{
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
