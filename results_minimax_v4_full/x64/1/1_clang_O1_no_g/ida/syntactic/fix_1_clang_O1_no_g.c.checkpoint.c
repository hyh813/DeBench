/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/1/1_clang_O1_no_g
 * Processor: pc
 */

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <setjmp.h>

#ifndef _BOOL8
#define _BOOL8 int
#endif

/* Data arrays */
extern unsigned int unk_3040;
extern unsigned int unk_3060;
extern unsigned int unk_3064;
extern unsigned int dword_3654[];

/* Forward declarations for state functions used in function pointer arrays */
_BOOL8 state_idle(int a1);
long long state_processing(int a1);
long long state_done();
long long state_error(int a1);

/* Function pointer arrays - defined locally */
/* funcs_1967: takes int, returns long long (3 elements for indices 0-2) */
long long func_1967_0(int a1) { return (unsigned int)(a1 + 10); }
long long func_1967_1(int a1) { return (unsigned int)(a1 + 20); }
long long func_1967_2(int a1) { return (unsigned int)(a1 + 30); }
static long long (*funcs_1967[])(int) = { func_1967_0, func_1967_1, func_1967_2 };

/* funcs_1D09: takes (unsigned long long, unsigned long long), returns long long (10 elements for indices 0-9) */
long long func_1D09_0(unsigned long long a1, unsigned long long a2) { return a1 + a2; }
long long func_1D09_1(unsigned long long a1, unsigned long long a2) { return a1 - a2; }
long long func_1D09_2(unsigned long long a1, unsigned long long a2) { return a1 * a2; }
long long func_1D09_3(unsigned long long a1, unsigned long long a2) { return a2 ? a1 / a2 : 0; }
long long func_1D09_4(unsigned long long a1, unsigned long long a2) { return a2 ? a1 % a2 : 0; }
long long func_1D09_5(unsigned long long a1, unsigned long long a2) { return a1 & a2; }
long long func_1D09_6(unsigned long long a1, unsigned long long a2) { return a1 | a2; }
long long func_1D09_7(unsigned long long a1, unsigned long long a2) { return a1 ^ a2; }
long long func_1D09_8(unsigned long long a1, unsigned long long a2) { return a1 << a2; }
long long func_1D09_9(unsigned long long a1, unsigned long long a2) { return a1 >> a2; }
static long long (*funcs_1D09[])(unsigned long long, unsigned long long) = {
 func_1D09_0, func_1D09_1, func_1D09_2, func_1D09_3, func_1D09_4,
 func_1D09_5, func_1D09_6, func_1D09_7, func_1D09_8, func_1D09_9
};

/* funcs_1E55: takes long long, returns long long (4 elements for indices 0-3) */
long long func_1E55_0(long long a1) { return state_idle((int)a1); }
long long func_1E55_1(long long a1) { return state_processing((int)a1); }
long long func_1E55_2(long long a1) { return state_done(); }
long long func_1E55_3(long long a1) { return state_error((int)a1); }
static long long (*funcs_1E55[])(long long) = { func_1E55_0, func_1E55_1, func_1E55_2, func_1E55_3 };

/* String constants - defined locally */
static const char s[] = "Control Flow Tests L1";
static const char asc_3609[] = "Control Flow Tests L2";
static const char asc_362D[] = "Control Flow Tests L3";

/* Define function pointer arrays for jump tables */

/* Jump buffer for non-local jumps */
static jmp_buf jump_buffer;

/* Non-local jump function */
int non_local_jump(int a1)
{
 if (setjmp(jump_buffer) == 0)
 {
 longjmp(jump_buffer, a1);
 }
 return a1;
}

#ifndef _BOOL8
#define _BOOL8 int
#endif

/* Forward declaration for _BOOL8 type */
#ifndef _BOOL8
#define _BOOL8 int
#endif

#ifndef LODWORD
#define LODWORD(x) ((uint32_t)((uint64_t)(x) & 0xFFFFFFFF))
#endif

#ifndef JUMPOUT
#define JUMPOUT(addr) ((void)0)
#endif

extern void (*_gmon_start__)(void);




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: sequential_ops @ 0x1170 */
long long sequential_ops(int a1, int a2, int a3)
{
 return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0x1180 */
long long single_if(int a1)
{
 return (unsigned int)(a1 << (a1 > 0));
}


/* Function: if_else @ 0x1190 */
_BOOL8 if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0x11A0 */
long long nested_if_2(int a1, int a2)
{
 long long result; // rax

 if ( a2 < 0 )
 a2 = 0;
 result = (unsigned int)(a2 + a1);
 if ( a1 <= 0 )
 return 0;
 return result;
}


/* Function: nested_if_deep @ 0x11B0 */
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
 return (a5 > 0) | 4u;
}


/* Function: if_elseif_chain @ 0x11F0 */
long long if_elseif_chain(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 < 3 )
 return 10 * a1 + 10;
 return result;
}


/* Function: if_elseif_long @ 0x1210 */
long long if_elseif_long(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 < 5 )
 return 100 * a1 + 100;
 return result;
}





/* Function: switch_large @ 0x1250 */
long long switch_large(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 < 0xA )
 return 10 * a1;
 return result;
}


/* Function: switch_default @ 0x1270 */
long long switch_default(int a1)
{
 unsigned int v1; // edi
 long long result; // rax

 v1 = a1 - 1;
 result = 0;
 if ( v1 < 3 )
 return 100 * v1 + 100;
 return result;
}


/* Function: switch_fallthrough @ 0x1290 */
long long switch_fallthrough(int a1)
{
 int v1; // eax
 long long result; // rax

 v1 = 0;
 if ( a1 != 1 )
 {
 if ( a1 != 2 )
 {
 result = 0xFFFFFFFFLL;
 if ( a1 != 3 )
 return result;
 v1 = 12;
 }
 v1 += 2 * a1;
 }
 return (unsigned int)(a1 + v1);
}


/* Function: loop_for_fixed @ 0x12C0 */
long long loop_for_fixed(int a1)
{
 if ( a1 <= 0 )
 return 0;
 else
 return (unsigned int)(((unsigned int)(a1 - 1) * (unsigned long long)(unsigned int)(a1 - 2)) >> 1) + a1 - 1;
}


/* Function: loop_while @ 0x12E0 */
long long loop_while(int a1)
{
 unsigned int v1; // ecx
 int v2; // eax
 long long result; // rax

 v1 = 0;
 if ( a1 )
 {
 do
 {
 v2 = a1;
 a1 /= 10;
 ++v1;
 }
 while ( (unsigned int)(v2 + 9) > 0x12 );
 }
 result = 1;
 if ( v1 )
 return v1;
 return result;
}


/* Function: loop_dowhile @ 0x1320 */
long long loop_dowhile(int a1)
{
 long long result; // rax
 int v2; // ecx

 result = 0;
 do
 {
 v2 = a1;
 a1 /= 10;
 result = (unsigned int)(result + 1);
 }
 while ( (unsigned int)(v2 + 9) > 0x12 );
 return result;
}


/* Function: loop_nested @ 0x1360 */
long long loop_nested(int a1, int a2)
{
 long long result; // rax
 unsigned int v3; // esi

 result = 0;
 if ( a2 <= 0 )
 a2 = 0;
 v3 = a1 * a2;
 if ( a1 > 0 )
 return v3;
 return result;
}





/* Function: loop_continue @ 0x13A0 */
long long loop_continue(int a1)
{
 int v1; // edi
 long long result; // rax
 int v3; // ecx
 int v4; // edx

 if ( a1 <= 0 )
 return 0;
 v1 = -a1;
 result = 0;
 v3 = 1;
 do
 {
 v4 = v1 + v3 + 1;
 result = (unsigned int)((v3 & -(v3 & 1)) + (int)result);
 ++v3;
 }
 while ( v4 != 1 );
 return result;
}


/* Function: goto_forward @ 0x13D0 */
long long goto_forward(int a1)
{
 int v1; // eax

 v1 = 1;
 if ( a1 > 0 )
 v1 = a1;
 return (unsigned int)(2 * a1 * v1);
}


/* Function: goto_backward @ 0x13E0 */
long long goto_backward(int a1)
{
 int v1; // edi
 int v2; // ecx
 long long result; // rax
 int v4; // edx

 if ( a1 <= 0 )
 return 1;
 v1 = -a1;
 v2 = 1;
 result = 1;
 do
 {
 result = (unsigned int)(v2 * result);
 v4 = v1 + v2++ + 1;
 }
 while ( v4 != 1 );
 return result;
}


/* Function: ternary_op @ 0x1410 */
long long ternary_op(unsigned int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( (int)a1 > (int)a2 )
 return a1;
 return result;
}


/* Function: test_control_flow_l1 @ 0x1420 */
int test_control_flow_l1()
{
 puts(s);
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
 return printf("CF-L1-20 (ternary_op): %d\n", 8);
}





/* Function: infinite_loop @ 0x16F0 */
long long infinite_loop(unsigned int *a1)
{
 long long result; // rax

 result = 0;
 while ( *a1 != 1 )
 {
 result = (unsigned int)(result + 1);
 if ( (unsigned int)result == 1001 )
 {
 *a1 = 1;
 return 1001;
 }
 }
 return result;
}


/* Function: multi_return @ 0x1720 */
long long multi_return(int a1)
{
 long long result; // rax

 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 result = 4294967294LL;
 if ( a1 <= 50 )
 {
 result = (unsigned int)(a1 + 1);
 if ( (a1 & 1) == 0 )
 return (unsigned int)(2 * a1);
 }
 return result;
}


/* Function: conditional_return @ 0x1750 */
long long conditional_return(int a1)
{
 long long result; // rax

 result = (unsigned int)-a1;
 if ( a1 > 0 )
 return (unsigned int)(2 * a1);
 return result;
}


/* Function: duffs_device @ 0x1760 */
long long duffs_device(unsigned int *a1, int *a2, int a3)
{
 long long result; // rax
 int v4; // eax
 int v5; // eax
 int v6; // ecx
 int v7; // ecx
 int v8; // ecx
 int v9; // ecx
 int v10; // ecx
 int v11; // ecx
 int v12; // ecx
 int v13; // ecx

 result = 0xFFFFFFFFLL;
 if ( a3 > 0 )
 {
 v4 = a3 + 14;
 if ( a3 + 7 >= 0 )
 v4 = a3 + 7;
 v5 = v4 >> 3;
 switch ( a3 - (a3 & 0xFFFFFFF8) )
 {
 case 0u:
 goto LABEL_5;
 case 1u:
 goto LABEL_12;
 case 2u:
 goto LABEL_11;
 case 3u:
 goto LABEL_10;
 case 4u:
 goto LABEL_9;
 case 5u:
 goto LABEL_8;
 case 6u:
 goto LABEL_7;
 case 7u:
 while ( 1 )
 {
 v7 = *a2++;
 *a1++ = v7;
LABEL_7:
 v8 = *a2++;
 *a1++ = v8;
LABEL_8:
 v9 = *a2++;
 *a1++ = v9;
LABEL_9:
 v10 = *a2++;
 *a1++ = v10;
LABEL_10:
 v11 = *a2++;
 *a1++ = v11;
LABEL_11:
 v12 = *a2++;
 *a1++ = v12;
LABEL_12:
 v13 = *a2++;
 *a1++ = v13;
 if ( v5-- <= 1 )
 break;
LABEL_5:
 v6 = *a2++;
 *a1++ = v6;
 }
 break;
 default:
 return (unsigned int)a3;
 }
 return (unsigned int)a3;
 }
 return result;
}


/* Function: loop_complex_cond @ 0x1810 */
long long loop_complex_cond(int a1)
{
 unsigned int v1; // edx
 int v2; // eax
 int v3; // esi
 unsigned int v4; // ecx

 if ( a1 <= 0 )
 {
 v2 = 0;
 v4 = 0;
 }
 else
 {
 v1 = 0;
 v2 = 0;
 do
 {
 v3 = a1;
 v2 += 2;
 --a1;
 v4 = v1 + 1;
 if ( v3 < 2 )
 break;
 if ( v2 >= a1 )
 break;
 }
 while ( v1++ < 9 );
 }
 return v4 + a1 + v2;
}


/* Function: loop_modify_var @ 0x1850 */
long long loop_modify_var(int a1)
{
 int v1; // ecx
 long long result; // rax
 int v3; // edx

 if ( a1 <= 0 )
 return 0;
 v1 = 0;
 result = 0;
 do
 {
 result = (unsigned int)(v1 + result);
 v3 = v1 + 2;
 if ( v1 < 6 )
 v3 = v1;
 v1 = v3 + 1;
 }
 while ( v3 + 1 < a1 );
 return result;
}


/* Function: loop_external_state @ 0x1880 */
long long loop_external_state(unsigned int *a1)
{
 long long result; // rax

 result = 0;
 while ( !*a1 )
 {
 result = (unsigned int)(result + 1);
 if ( (unsigned int)result == 101 )
 return 101;
 }
 return result;
}


/* Function: recursion_factorial @ 0x18B0 */
long long recursion_factorial(int a1)
{
 long long result; // rax

 result = 1;
 if ( a1 >= 2 )
 return a1 * (unsigned int)recursion_factorial((unsigned int)(a1 - 1));
 return result;
}


/* Function: tail_recursion @ 0x18D0 */
long long tail_recursion(int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( a1 >= 2 )
 return tail_recursion((unsigned int)(a1 - 1), a1 * a2);
 return result;
}


/* Function: indirect_recursion_a @ 0x18F0 */
long long indirect_recursion_a(unsigned int a1, int a2)
{
 long long result; // rax
 unsigned int v3; // eax

 result = a1;
 if ( a2 > 0 )
 {
 if ( (a1 & 1) != 0 )
 {
 if ( a2 < 2 )
 return 3 * a1 + 1;
 v3 = 3 * a1 + 2;
 }
 else
 {
 result = (unsigned int)((int)a1 / 2);
 if ( a2 < 2 )
 return result;
 v3 = result + 1;
 }
 return indirect_recursion_a(v3, (unsigned int)(a2 - 2));
 }
 return result;
}


/* Function: call_func_ptr @ 0x1940 */
long long call_func_ptr(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1950 */
long long call_func_ptr_array(unsigned int a1, int a2)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 <= 2 )
 return ((long long ( *)(int))funcs_1967[a1])(a2);
 return result;
}


/* Function: double_value @ 0x1970 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: triple_value @ 0x1980 */
long long triple_value(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: call_virtual_func @ 0x1990 */
long long call_virtual_func(long long a1, int a2)
{
 return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x19A0 */
long long process_with_callback(long long a1, int a2, long long ( *a3)(unsigned long long))
{
 long long v4; // rbx
 unsigned int v5; // ebp

 if ( a2 <= 0 )
 {
 return 0;
 }
 else
 {
 v4 = 0;
 v5 = 0;
 do
 v5 += a3(*(unsigned int *)(a1 + 4 * v4++));
 while ( a2 != v4 );
 }
 return v5;
}


/* Function: test_control_flow_l2 @ 0x19F0 */
int test_control_flow_l2(long long a1, int a2)
{
 puts(asc_3609);
 printf("CF-L2-01 (loop_multi_exit): %d\n", a2);
 printf("CF-L2-02 (infinite_loop): %d\n", 1001);
 printf("CF-L2-03 (multi_return): %d\n", -1);
 printf("CF-L2-03 (multi_return): %d\n", -2);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 printf("CF-L2-05 (duffs_device): %d\n", 8);
 printf("CF-L2-06 (loop_complex_cond): %d\n", 10);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 printf("CF-L2-08 (loop_external_state): %d\n", 101);
 printf("CF-L2-09 (recursion_factorial): %d\n", 120);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 printf("CF-L2-11 (indirect_recursion): %d\n", 16);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-15 (process_with_callback): %d\n", 30);
 return 0;
}





/* Function: cpp_exception @ 0x1CD0 */
long long cpp_exception(int a1)
{
 unsigned int v1; // ecx
 long long result; // rax

 v1 = -2;
 if ( a1 < 101 )
 v1 = 2 * a1;
 result = 0xFFFFFFFFLL;
 if ( a1 >= 0 )
 return v1;
 return result;
}


/* Function: large_jump_table @ 0x1CF0 */
long long large_jump_table(unsigned int a1, unsigned int a2, unsigned int a3)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 <= 9 )
 return ((long long ( *)(unsigned long long, unsigned long long))funcs_1D09[a1])(a2, a3);
 return result;
}


/* Function: op_add @ 0x1D20 */
long long op_add(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: op_sub @ 0x1D30 */
long long op_sub(int a1, int a2)
{
 return (unsigned int)(a1 - a2);
}


/* Function: op_mul @ 0x1D40 */
long long op_mul(int a1, int a2)
{
 return (unsigned int)(a2 * a1);
}


/* Function: op_div @ 0x1D50 */
long long op_div(int a1, int a2)
{
 if ( a2 )
 return (unsigned int)(a1 / a2);
 else
 return 0;
}


/* Function: op_mod @ 0x1D60 */
long long op_mod(int a1, int a2)
{
 if ( a2 )
 return (unsigned int)(a1 % a2);
 else
 return 0;
}


/* Function: op_and @ 0x1D70 */
long long op_and(unsigned int a1, int a2)
{
 return a2 & a1;
}


/* Function: op_or @ 0x1D80 */
long long op_or(unsigned int a1, int a2)
{
 return a2 | a1;
}


/* Function: op_xor @ 0x1D90 */
long long op_xor(unsigned int a1, int a2)
{
 return a2 ^ a1;
}


/* Function: op_shl @ 0x1DA0 */
long long op_shl(int a1, char a2)
{
 return (unsigned int)(a1 << a2);
}


/* Function: op_shr @ 0x1DB0 */
long long op_shr(int a1, char a2)
{
 return (unsigned int)(a1 >> a2);
}


/* Function: conditional_func_ptr @ 0x1DC0 */
long long conditional_func_ptr(int a1, int a2)
{
 long long ( *v2)(int); // rcx
 long long ( *v3)(int); // rax

 v2 = recursion_factorial;
 if ( a1 == 1 )
 v2 = triple_value;
 v3 = double_value;
 if ( a1 )
 v3 = v2;
 return v3(a2);
}


/* Function: state_machine @ 0x1DF0 */
long long state_machine(int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 switch ( a2 )
 {
 case 0u:
 result = a1 == 1;
 break;
 case 1u:
 result = 2 * (unsigned int)(a1 == 99) + 1;
 if ( a1 == 2 )
 result = 2;
 break;
 case 2u:
 return result;
 case 3u:
 result = 3 * (unsigned int)(a1 != 0);
 break;
 default:
 result = 3;
 break;
 }
 return result;
}


/* Function: fsm_func_table @ 0x1E40 */
long long fsm_func_table(long long a1, unsigned int a2)
{
 long long result; // rax

 result = 3;
 if ( a2 <= 3 )
 return ((long long ( *)(long long))funcs_1E55[a2])(a1);
 return result;
}


/* Function: state_idle @ 0x1E60 */
_BOOL8 state_idle(int a1)
{
 return a1 == 1;
}


/* Function: state_processing @ 0x1E70 */
long long state_processing(int a1)
{
 long long result; // rax

 result = 2 * (unsigned int)(a1 == 99) + 1;
 if ( a1 == 2 )
 return 2;
 return result;
}


/* Function: state_done @ 0x1E90 */
long long state_done()
{
 return 2;
}


/* Function: state_error @ 0x1EA0 */
long long state_error(int a1)
{
 return 3 * (unsigned int)(a1 != 0);
}


/* Function: computed_goto @ 0x1EB0 */
long long computed_goto(long long a1, int a2)
{
 long long result; // rax

 switch ( a2 )
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
 default:
 result = 0xFFFFFFFFLL;
 break;
 }
 return result;
}


/* Function: obfuscated_cf @ 0x1EE0 */
long long obfuscated_cf(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x1EF0 */
long long opaque_predicate(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x1F00 */
long long overlapped_code(int a1)
{
 if ( (a1 & 1) != 0 )
 return (unsigned int)(3 * a1 + 1);
 else
 return (unsigned int)(a1 / 2);
}


/* Function: test_control_flow_l3 @ 0x1F20 */
int test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax

 puts(asc_362D);
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
 v2 = computed_goto((long long)"CF-L3-06 (fsm_func_table): %d\n", 2);
 printf("CF-L3-07 (computed_goto): %d\n", v2);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x2030 */
// local variable allocation has failed, the output may be wrong!
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2(*(long long *)&argc, (int)argv);
 test_control_flow_l3();
 return 0;
}


/* Function: .term_proc @ 0x2044 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6130 */

/* FAILED to decompile: puts @ 0x6138 */

/* FAILED to decompile: printf @ 0x6140 */

/* FAILED to decompile: _setjmp @ 0x6148 */

/* FAILED to decompile: longjmp @ 0x6150 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6158 */

/* FAILED to decompile: __gmon_start__ @ 0x6168 */

/* Total functions decompiled: 73, failed: 7 */
