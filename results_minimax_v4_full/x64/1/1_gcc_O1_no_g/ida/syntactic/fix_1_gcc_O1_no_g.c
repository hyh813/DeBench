/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/1/1_gcc_O1_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>
#include <x86intrin.h>

#ifndef __readfsqword
#define __readfsqword(off) ({ \
    unsigned long long __val; \
    __asm__ volatile ("movq %%fs:%1, %0" : "=r"(__val) : "m"(*(const void *)(off))); \
    __val; \
})
#endif

typedef long long _BOOL8;
typedef long long (*func_ptr_t)(void);

extern func_ptr_t _gmon_start__;

static const char *s = "Control Flow Tests";
static const char *asc_3170 = "Control Flow L2 Tests";
static const char *asc_3310 = "Control Flow L3 Tests";

static jmp_buf jump_buffer;

/* CRT stub function init_proc removed by preprocessor */

/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* Empty stub - JUMPOUT was a decompiler artifact */
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



/* Function: recursion_factorial @ 0x11C9 */
long long recursion_factorial(int a1)
{
 long long result; // rax

 result = 1;
 if ( a1 > 1 )
 return a1 * (unsigned int)recursion_factorial((unsigned int)(a1 - 1));
 return result;
}


/* Function: double_value @ 0x11E8 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: triple_value @ 0x11F0 */
long long triple_value(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: op_add @ 0x11F8 */
long long op_add(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: op_sub @ 0x1200 */
long long op_sub(int a1, int a2)
{
 return (unsigned int)(a1 - a2);
}


/* Function: op_mul @ 0x1209 */
long long op_mul(int a1, int a2)
{
 return (unsigned int)(a2 * a1);
}


/* Function: op_div @ 0x1213 */
long long op_div(int a1, unsigned int a2)
{
 if ( a2 )
 return (unsigned int)(a1 / (int)a2);
 return a2;
}


/* Function: op_mod @ 0x1225 */
long long op_mod(int a1, unsigned int a2)
{
 if ( a2 )
 return (unsigned int)(a1 % (int)a2);
 return a2;
}


/* Function: op_and @ 0x1237 */
long long op_and(unsigned int a1, int a2)
{
 return a2 & a1;
}


/* Function: op_or @ 0x1240 */
long long op_or(unsigned int a1, int a2)
{
 return a2 | a1;
}


/* Function: op_xor @ 0x1249 */
long long op_xor(unsigned int a1, int a2)
{
 return a2 ^ a1;
}


/* Function: op_shl @ 0x1252 */
long long op_shl(int a1, char a2)
{
 return (unsigned int)(a1 << a2);
}


/* Function: op_shr @ 0x125D */
long long op_shr(int a1, char a2)
{
 return (unsigned int)(a1 >> a2);
}


/* Function: state_idle @ 0x1268 */
_BOOL8 state_idle(int a1)
{
 return a1 == 1;
}


/* Function: state_processing @ 0x1276 */
long long state_processing(int a1)
{
 if ( a1 == 2 )
 return 2;
 else
 return 2 * (unsigned int)(a1 == 99) + 1;
}


/* Function: state_done @ 0x1290 */
long long state_done()
{
 return 2;
}


/* Function: state_error @ 0x129A */
long long state_error(unsigned int a1)
{
 long long result; // rax

 result = a1;
 if ( a1 )
 return 3;
 return result;
}


/* Function: sequential_ops @ 0x12AB */
long long sequential_ops(int a1, int a2, int a3)
{
 return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0x12B7 */
long long single_if(int a1)
{
 long long result; // rax

 result = (unsigned int)(2 * a1);
 if ( a1 <= 0 )
 return (unsigned int)a1;
 return result;
}


/* Function: if_else @ 0x12C4 */
_BOOL8 if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0x12D1 */
long long nested_if_2(int a1, int a2)
{
 long long result; // rax

 result = 0;
 if ( a1 > 0 )
 {
 result = (unsigned int)(a1 + a2);
 if ( a2 <= 0 )
 return (unsigned int)a1;
 }
 return result;
}


/* Function: nested_if_deep @ 0x12E7 */
long long nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
 long long result; // rax

 result = 0;
 if ( a1 > 0 )
 {
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
 }
 return result;
}


/* Function: if_elseif_chain @ 0x131E */
long long if_elseif_chain(int a1)
{
 long long result; // rax

 result = 10;
 if ( a1 )
 {
 if ( a1 == 1 )
 {
 return 20;
 }
 else
 {
 result = 30;
 if ( a1 != 2 )
 return 0xFFFFFFFFLL;
 }
 }
 return result;
}


/* Function: if_elseif_long @ 0x1347 */
long long if_elseif_long(int a1)
{
 long long result; // rax

 switch ( a1 )
 {
 case 0:
 result = 100;
 break;
 case 1:
 result = 200;
 break;
 case 2:
 result = 300;
 break;
 case 3:
 result = 400;
 break;
 case 4:
 result = 500;
 break;
 default:
 result = 0xFFFFFFFFLL;
 break;
 }
 return result;
}


/* Function: switch_small @ 0x1387 */
long long switch_small(int a1)
{
 long long result; // rax

 if ( a1 == 2 )
 return 50;
 if ( a1 > 2 )
 return 3 * (unsigned int)(a1 == 3) - 1;
 result = 15;
 if ( a1 )
 {
 result = 0xFFFFFFFFLL;
 if ( a1 == 1 )
 return 5;
 }
 return result;
}


/* Function: switch_large @ 0x13C0 */
long long switch_large(unsigned int a1)
{
 long long result; // rax

 switch ( a1 )
 {
 case 0u:
 result = a1;
 break;
 case 1u:
 result = 10;
 break;
 case 2u:
 result = 20;
 break;
 case 3u:
 result = 30;
 break;
 case 4u:
 result = 40;
 break;
 case 5u:
 result = 50;
 break;
 case 6u:
 result = 60;
 break;
 case 7u:
 result = 70;
 break;
 case 8u:
 result = 80;
 break;
 case 9u:
 result = 90;
 break;
 default:
 result = 0xFFFFFFFFLL;
 break;
 }
 return result;
}


/* Function: switch_default @ 0x141B */
long long switch_default(int a1)
{
 long long result; // rax

 result = 200;
 if ( a1 != 2 )
 {
 result = 300;
 if ( a1 != 3 )
 {
 result = 0;
 if ( a1 == 1 )
 return 100;
 }
 }
 return result;
}


/* Function: switch_fallthrough @ 0x1444 */
long long switch_fallthrough(int a1)
{
 int v2; // eax
 int v3; // eax

 if ( a1 == 2 )
 {
 v2 = 0;
LABEL_7:
 v3 = v2 + 2 * a1;
 return (unsigned int)(a1 + v3);
 }
 if ( a1 == 3 )
 {
 v2 = 12;
 goto LABEL_7;
 }
 if ( a1 != 1 )
 return 0xFFFFFFFFLL;
 v3 = 0;
 return (unsigned int)(a1 + v3);
}


/* Function: loop_for_fixed @ 0x1476 */
long long loop_for_fixed(int a1)
{
 int v1; // eax
 unsigned int v2; // edx

 if ( a1 <= 0 )
 {
 return 0;
 }
 else
 {
 v1 = 0;
 v2 = 0;
 do
 v2 += v1++;
 while ( v1 < a1 );
 }
 return v2;
}


/* Function: loop_while @ 0x149B */
long long loop_while(int a1)
{
 long long result; // rax

 if ( a1 )
 {
 result = 0;
 do
 {
 a1 /= 10;
 result = (unsigned int)(result + 1);
 }
 while ( a1 );
 }
 else
 {
 result = 0;
 }
 if ( (int)result <= 0 )
 return 1;
 return result;
}


/* Function: loop_dowhile @ 0x14D3 */
long long loop_dowhile(int a1)
{
 unsigned int v1; // edx

 v1 = 0;
 do
 {
 a1 /= 10;
 ++v1;
 }
 while ( a1 );
 return v1;
}


/* Function: loop_nested @ 0x14FB */
long long loop_nested(int a1, int a2)
{
 int v2; // edx
 unsigned int v3; // ecx
 int v5; // eax

 v2 = 0;
 v3 = 0;
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
 v3 += v5;
 }
 ++v2;
 }
 while ( a1 != v2 );
 }
 return v3;
}


/* Function: loop_break @ 0x152B */
long long loop_break(int a1)
{
 long long v1; // rax
 unsigned int v2; // edx
 unsigned int v4[6]; // [rsp+0h] [rbp-28h]
 unsigned long long v5; // [rsp+18h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v1 = 0;
 v4[0] = 10;
 v4[1] = 20;
 v4[2] = 30;
 v4[3] = 40;
 v4[4] = 50;
 while ( 1 )
 {
 v2 = v1;
 if ( v4[v1] == a1 )
 break;
 if ( ++v1 == 5 )
 return (unsigned int)-1;
 }
 return v2;
}


/* Function: loop_continue @ 0x159F */
long long loop_continue(int a1)
{
 int v1; // edi
 int v2; // eax
 unsigned int v3; // edx

 if ( a1 <= 0 )
 {
 return 0;
 }
 else
 {
 v1 = a1 + 1;
 v2 = 1;
 v3 = 0;
 do
 {
 if ( (v2 & 1) != 0 )
 v3 += v2;
 ++v2;
 }
 while ( v2 != v1 );
 }
 return v3;
}


/* Function: goto_forward @ 0x15CD */
long long goto_forward(int a1)
{
 if ( a1 > 0 )
 a1 *= a1;
 return (unsigned int)(2 * a1);
}


/* Function: goto_backward @ 0x15DE */
long long goto_backward(int a1)
{
 unsigned int v1; // edx
 int v2; // edi
 int v3; // eax

 v1 = 1;
 if ( a1 > 0 )
 {
 v2 = a1 + 1;
 v3 = 1;
 do
 v1 *= v3++;
 while ( v3 != v2 );
 }
 return v1;
}


/* Function: ternary_op @ 0x1600 */
long long ternary_op(unsigned int a1, unsigned int a2)
{
 long long result; // rax

 result = a1;
 if ( (int)a2 >= (int)a1 )
 return a2;
 return result;
}


/* Function: test_control_flow_l1 @ 0x160C */
long long test_control_flow_l1()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax

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


/* Function: loop_multi_exit @ 0x192B */
long long loop_multi_exit(int a1)
{
 unsigned int *v1; // rdx
 int v2; // esi
 long long i; // rax
 unsigned int v5[14]; // [rsp+0h] [rbp-48h] BYREF
 unsigned long long v6; // [rsp+38h] [rbp-10h]

 v6 = __readfsqword(0x28u);
 v5[0] = 1;
 v5[1] = 2;
 v5[2] = 3;
 v5[3] = 4;
 v5[4] = 5;
 v5[5] = 6;
 v5[6] = 7;
 v5[7] = 8;
 v5[8] = 9;
 v5[9] = 10;
 v5[10] = 11;
 v5[11] = 12;
 v1 = v5;
 v2 = 0;
 while ( 2 )
 {
 for ( i = 0; i != 4; ++i )
 {
 if ( v1[i] == a1 )
 return (unsigned int)(i + 10 * v2);
 }
 ++v2;
 v1 += 4;
 if ( v2 != 3 )
 continue;
 break;
 }
 return 0xFFFFFFFFLL;
}


/* Function: infinite_loop @ 0x19F3 */
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
 return result;
 }
 }
 return result;
}


/* Function: multi_return @ 0x1A14 */
long long multi_return(int a1)
{
 long long result; // rax

 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 result = (unsigned int)(2 * a1);
 if ( (int)result > 100 )
 return 4294967294LL;
 if ( (a1 & 1) != 0 )
 return (unsigned int)(a1 + 1);
 return result;
}


/* Function: conditional_return @ 0x1A3B */
long long conditional_return(int a1)
{
 long long result; // rax

 if ( a1 > 0 )
 return (unsigned int)(2 * a1);
 result = (unsigned int)-a1;
 if ( a1 >= 0 )
 return 0;
 return result;
}


/* Function: duffs_device @ 0x1A56 */
long long duffs_device(unsigned int *a1, unsigned int *a2, int a3)
{
 long long result; // rax
 int v5; // edi
 int v6; // edx
 int v7; // edi
 unsigned int *v8; // r8
 unsigned int *v9; // rdx
 unsigned int *v10; // r8
 unsigned int *v11; // rdx
 unsigned int *v12; // r8
 unsigned int *v13; // rdx

 result = (unsigned int)a3;
 if ( a3 <= 0 )
 return 0xFFFFFFFFLL;
 v5 = a3 + 14;
 v6 = a3 + 7;
 if ( v6 >= 0 )
 v5 = v6;
 v7 = v5 >> 3;
 switch ( (int)result % 8 )
 {
 case 0:
 goto LABEL_13;
 case 1:
 v12 = a2;
 v13 = a1;
 goto LABEL_11;
 case 2:
 goto LABEL_10;
 case 3:
 v10 = a2;
 v11 = a1;
 goto LABEL_9;
 case 4:
 goto LABEL_8;
 case 5:
 v8 = a2;
 v9 = a1;
 goto LABEL_7;
 case 6:
 goto LABEL_6;
 case 7:
 while ( 1 )
 {
 *a1++ = *a2++;
LABEL_6:
 v8 = a2 + 1;
 v9 = a1 + 1;
 *a1 = *a2;
LABEL_7:
 a2 = v8 + 1;
 a1 = v9 + 1;
 *v9 = *v8;
LABEL_8:
 v10 = a2 + 1;
 v11 = a1 + 1;
 *a1 = *a2;
LABEL_9:
 a2 = v10 + 1;
 a1 = v11 + 1;
 *v11 = *v10;
LABEL_10:
 v12 = a2 + 1;
 v13 = a1 + 1;
 *a1 = *a2;
LABEL_11:
 *v13 = *v12;
 if ( --v7 <= 0 )
 break;
 a2 = v12 + 1;
 a1 = v13 + 1;
LABEL_13:
 *a1++ = *a2++;
 }
 break;
 default:
 return result;
 }
 return result;
}


/* Function: loop_complex_cond @ 0x1B30 */
long long loop_complex_cond(int a1)
{
 int v1; // edx
 int v2; // eax

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
 while ( v1 <= 9 && v2 < a1 && a1 > 0 );
 }
 return (unsigned int)(v1 + a1 + v2);
}


/* Function: loop_modify_var @ 0x1B71 */
long long loop_modify_var(int a1)
{
 unsigned int v1; // ecx
 int v2; // eax
 int v3; // edx

 v1 = 0;
 v2 = 0;
 if ( a1 > 0 )
 {
 while ( 1 )
 {
 v3 = v2 + 1;
 if ( a1 <= v2 + 1 )
 break;
 v1 += v3;
 v2 += 3;
 if ( v3 <= 5 )
 v2 = v3;
 }
 }
 return v1;
}


/* Function: loop_external_state @ 0x1B9A */
long long loop_external_state(unsigned int *a1)
{
 long long result; // rax

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


/* Function: tail_recursion @ 0x1BB2 */
long long tail_recursion(int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( a1 > 1 )
 return tail_recursion((unsigned int)(a1 - 1), a1 * a2);
 return result;
}


/* Function: indirect_recursion_a @ 0x1BD2 */
long long indirect_recursion_a(unsigned int a1, int a2)
{
 long long result; // rax
 int v3; // eax
 unsigned int v4; // edi

 result = a1;
 if ( a2 > 0 )
 {
 if ( (a1 & 1) != 0 )
 {
 v3 = 3 * a1;
 if ( a2 <= 1 )
 return (unsigned int)(v3 + 1);
 else
 return indirect_recursion_a((unsigned int)(v3 + 2), (unsigned int)(a2 - 2));
 }
 else
 {
 v4 = (int)a1 / 2;
 result = v4;
 if ( a2 > 1 )
 return indirect_recursion_a(v4 + 1, (unsigned int)(a2 - 2));
 }
 }
 return result;
}


/* Function: call_func_ptr @ 0x1C1F */
long long call_func_ptr(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1C33 */
long long call_func_ptr_array(unsigned int a1, long long a2, long long a3, long long a4, long long a5, long long a6)
{
 static long long ( *func_table[])(int) = {double_value, triple_value, recursion_factorial};
 unsigned long long v10; // [rsp+18h] [rbp-10h]

 v10 = __readfsqword(0x28u);
 if ( a1 > 2 )
 return 0xFFFFFFFFLL;
 return func_table[a1]((int)a2);
}


/* Function: call_virtual_func @ 0x1C9D */
long long call_virtual_func(long long a1, int a2)
{
 return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x1CA5 */
long long process_with_callback(unsigned int *a1, int a2, long long ( *a3)(unsigned long long))
{
 unsigned int *v4; // rbx
 unsigned int v5; // ebp

 if ( a2 <= 0 )
 {
 return 0;
 }
 else
 {
 v4 = a1;
 v5 = 0;
 do
 v5 += a3(*v4++);
 while ( v4 != &a1[a2 - 1 + 1] );
 }
 return v5;
}


/* Function: test_control_flow_l2 @ 0x1CEE */
unsigned long long test_control_flow_l2()
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
 long long v10; // rdx
 long long v11; // rcx
 long long v12; // r8
 long long v13; // r9
 int v14; // eax
 long long v15; // rdx
 long long v16; // rcx
 long long v17; // r8
 long long v18; // r9
 int v19; // eax
 int v20; // eax
 int v22; // [rsp+8h] [rbp-90h] BYREF
 int v23; // [rsp+Ch] [rbp-8Ch] BYREF
 unsigned int v24[8]; // [rsp+10h] [rbp-88h] BYREF
 unsigned int v25[8]; // [rsp+30h] [rbp-68h] BYREF
 unsigned long long v26[5]; // [rsp+50h] [rbp-48h] BYREF
 unsigned long long v27; // [rsp+78h] [rbp-20h]

 v27 = __readfsqword(0x28u);
 puts(asc_3170);
 v0 = loop_multi_exit(7);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
 v22 = 0;
 v1 = infinite_loop(&v22);
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 v25[0] = 1;
 v25[1] = 2;
 v25[2] = 3;
 v25[3] = 4;
 v25[4] = 5;
 v25[5] = 6;
 v25[6] = 7;
 v25[7] = 8;
 memset(v26, 0, 32);
 v2 = duffs_device(v26, v25, 8);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v2);
 v3 = loop_complex_cond(10);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", v3);
 v4 = loop_modify_var(10);
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
 v23 = 0;
 v5 = loop_external_state(&v23);
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v5);
 v6 = recursion_factorial(5);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", v6);
 v7 = tail_recursion(5, 1u);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", v7);
 v8 = indirect_recursion_a(0xAu, 3);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", v8);
 v9 = call_func_ptr((long long ( *)(unsigned long long))double_value, 5u);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", v9);
 v14 = call_func_ptr_array(0, 5, v10, v11, v12, v13);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v14);
 v19 = call_func_ptr_array(2u, 5, v15, v16, v17, v18);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v19);
 v24[0] = 1;
 v24[1] = 2;
 v24[2] = 3;
 v24[3] = 4;
 v24[4] = 5;
 v20 = process_with_callback(v24, 5, (long long ( *)(unsigned long long))double_value);
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v20);
 return v27 - __readfsqword(0x28u);
}


/* Function: non_local_jump @ 0x203C */
long long non_local_jump(int a1)
{
 if ( _setjmp(jump_buffer) )
 return 0xFFFFFFFFLL;
 if ( a1 < 0 )
 __longjmp_chk(jump_buffer, 1);
 if ( a1 > 100 )
 __longjmp_chk(jump_buffer, 2);
 return (unsigned int)(2 * a1);
}


/* Function: cpp_exception @ 0x209E */
long long cpp_exception(int a1)
{
 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 if ( a1 > 100 )
 return 4294967294LL;
 return (unsigned int)(2 * a1);
}


/* Function: large_jump_table @ 0x20BB */
long long large_jump_table(
 unsigned int a1,
 unsigned int a2,
 unsigned int a3,
 long long a4,
 long long a5,
 long long a6)
{
 long long ( *v7)(int, int); // [rsp+0h] [rbp-68h]
 long long ( *v8)(int, int); // [rsp+8h] [rbp-60h]
 long long ( *v9)(int, int); // [rsp+10h] [rbp-58h]
 long long ( *v10)(int, unsigned int); // [rsp+18h] [rbp-50h]
 long long ( *v11)(int, unsigned int); // [rsp+20h] [rbp-48h]
 long long ( *v12)(unsigned int, int); // [rsp+28h] [rbp-40h]
 long long ( *v13)(unsigned int, int); // [rsp+30h] [rbp-38h]
 long long ( *v14)(unsigned int, int); // [rsp+38h] [rbp-30h]
 long long ( *v15)(int, char); // [rsp+40h] [rbp-28h]
 long long ( *v16)(int, char); // [rsp+48h] [rbp-20h]
 unsigned long long v17; // [rsp+58h] [rbp-10h]

 v17 = __readfsqword(0x28u);
 v7 = op_add;
 v8 = op_sub;
 v9 = op_mul;
 v10 = op_div;
 v11 = op_mod;
 v12 = op_and;
 v13 = op_or;
 v14 = op_xor;
 v15 = op_shl;
 v16 = op_shr;
 if ( a1 > 9 )
 return 0xFFFFFFFFLL;
 else
 return ((long long ( *)(unsigned long long, unsigned long long, long long ( *)(int, char), long long ( *)(int, char), long long, long long, long long ( *)(int, int), long long ( *)(int, int), long long ( *)(int, int), long long ( *)(int, unsigned int), long long ( *)(int, unsigned int), long long ( *)(unsigned int, int), long long ( *)(unsigned int, int), long long ( *)(unsigned int, int), long long ( *)(int, char), long long ( *)(int, char)))*(&v7 + (int)a1))(
 a2,
 a3,
 op_shr,
 op_shl,
 a5,
 a6,
 v7,
 v8,
 v9,
 v10,
 v11,
 v12,
 v13,
 v14,
 v15,
 v16);
}


/* Function: conditional_func_ptr @ 0x217B */
long long conditional_func_ptr(int a1, int a2)
{
 long long ( *v2)(int); // rdx

 v2 = double_value;
 if ( a1 )
 {
 v2 = triple_value;
 if ( a1 != 1 )
 v2 = recursion_factorial;
 }
 return v2(a2);
}


/* Function: state_machine @ 0x21AE */
long long state_machine(unsigned int a1, int a2)
{
 long long result; // rax

 if ( a2 == 2 )
 return 2;
 if ( a2 > 2 )
 {
 if ( a2 == 3 )
 {
 result = a1;
 if ( a1 )
 return 3;
 }
 else
 {
 return 3;
 }
 }
 else if ( a2 )
 {
 if ( a2 == 1 )
 {
 if ( a1 == 2 )
 {
 return 2;
 }
 else
 {
 result = 3;
 if ( a1 != 99 )
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
 return a1 == 1;
 }
 return result;
}


/* Function: fsm_func_table @ 0x21FC */
long long fsm_func_table(long long a1, unsigned int a2, long long a3, long long a4)
{
 long long result; // rax
 unsigned long long v5[7]; // [rsp+0h] [rbp-38h]

 v5[5] = __readfsqword(0x28u);
 v5[0] = state_idle;
 v5[1] = state_processing;
 v5[2] = state_done;
 v5[3] = state_error;
 result = 3;
 if ( a2 <= 3 )
 return ((long long ( *)(long long, unsigned long long, long long, long long))v5[a2])(a1, (int)a2, a3, a4);
 return result;
}


/* Function: computed_goto @ 0x226D */
long long computed_goto(long long a1, unsigned int a2)
{
  switch (a2)
  {
    case 0:
      return a1;
    case 1:
      return a1 + 1;
    case 2:
      return a1 + 2;
    case 3:
      return a1 + 3;
    default:
      return 0xFFFFFFFFLL;
  }
}


/* Function: obfuscated_cf @ 0x230A */
long long obfuscated_cf(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x2312 */
long long opaque_predicate(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x231A */
long long overlapped_code(int a1)
{
 if ( (a1 & 1) != 0 )
 return (unsigned int)(3 * a1 + 1);
 else
 return (unsigned int)(a1 / 2);
}


/* Function: test_control_flow_l3 @ 0x2333 */
unsigned long long test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 long long v2; // rcx
 long long v3; // r8
 long long v4; // r9
 int v5; // eax
 int v6; // eax
 long long v7; // rdx
 long long v8; // rcx
 int v9; // eax
 int v10; // eax
 unsigned int v12[6]; // [rsp+0h] [rbp-28h] BYREF
 unsigned long long v13; // [rsp+18h] [rbp-10h]

 v13 = __readfsqword(0x28u);
 puts(asc_3310);
 v0 = non_local_jump(5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 v5 = large_jump_table(0, 0xAu, 5u, v2, v3, v4);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", v5);
 v6 = conditional_func_ptr(0, 5);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", v6);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 v9 = fsm_func_table(2, 1u, v7, v8);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", v9);
 v12[0] = 0;
 v12[1] = 1;
 v12[2] = 2;
 v12[3] = 3;
 v10 = computed_goto((long long)v12, 2u);
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v10);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 return v13 - __readfsqword(0x28u);
}


/* Function: main @ 0x2515 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1(argc, argv, envp);
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


/* Function: .term_proc @ 0x2548 */
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
