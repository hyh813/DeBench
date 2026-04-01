/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/1/1_gcc_O2_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <setjmp.h>
#include <stdint.h>

/* Type definitions */
typedef int _BOOL8;

/* Define missing intrinsics/macros for linker */
#ifdef __GNUC__
static inline unsigned long long __readfsqword(unsigned int offset) {
    unsigned long long value;
    __asm__ __volatile__("movq %%fs:%1, %0" : "=r"(value) : "m"(*(const void *)(long)offset));
    return value;
}
#endif

#define JUMPOUT(x) ((void)0)

/* External declarations */
void (*_gmon_start__)(void);

/* Forward declarations for computed_goto */
long long obfuscated_cf(int a1);
long long opaque_predicate(int a1);
long long overlapped_code(int a1);

/* Forward declarations for test functions */
long long test_control_flow_l1();
unsigned long long test_control_flow_l2();
unsigned long long test_control_flow_l3();

/* Jump tables */
long long CSWTCH_55[4] = {0, 10, 20, 30};

/* String variables */
const char *s = "Control Flow Test L1";
const char *asc_3118 = "Control Flow Test L2";
const char *asc_32B8 = "Control Flow Test L3";

/* Jump buffer for setjmp/longjmp */
jmp_buf jump_buffer;

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 _gmon_start__();
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
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
 (void)argc;
 (void)argv;
 (void)envp;
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
long long recursion_factorial(int a1)
{
 long long result; // rax
 int v2; // edx

 result = 1;
 if ( a1 > 1 )
 {
 do
 {
 v2 = a1--;
 result = (unsigned int)(v2 * result);
 }
 while ( a1 != 1 );
 }
 return result;
}


/* Function: double_value @ 0x1220 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: triple_value @ 0x1230 */
long long triple_value(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: op_add @ 0x1240 */
long long op_add(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: op_sub @ 0x1250 */
long long op_sub(int a1, int a2)
{
 return (unsigned int)(a1 - a2);
}


/* Function: op_mul @ 0x1260 */
long long op_mul(int a1, int a2)
{
 return (unsigned int)(a2 * a1);
}


/* Function: op_div @ 0x1270 */
long long op_div(int a1, signed int a2)
{
 unsigned int v2; // r8d

 v2 = a2;
 if ( a2 )
 return (unsigned int)(a1 / a2);
 return v2;
}


/* Function: op_mod @ 0x1290 */
long long op_mod(int a1, signed int a2)
{
 unsigned int v2; // r8d

 v2 = a2;
 if ( a2 )
 return (unsigned int)(a1 % a2);
 return v2;
}


/* Function: op_and @ 0x12B0 */
long long op_and(unsigned int a1, int a2)
{
 return a2 & a1;
}


/* Function: op_or @ 0x12C0 */
long long op_or(unsigned int a1, int a2)
{
 return a2 | a1;
}


/* Function: op_xor @ 0x12D0 */
long long op_xor(unsigned int a1, int a2)
{
 return a2 ^ a1;
}


/* Function: op_shl @ 0x12E0 */
long long op_shl(int a1, char a2)
{
 return (unsigned int)(a1 << a2);
}


/* Function: op_shr @ 0x12F0 */
long long op_shr(int a1, char a2)
{
 return (unsigned int)(a1 >> a2);
}


/* Function: state_idle @ 0x1300 */
_BOOL8 state_idle(int a1)
{
 return a1 == 1;
}


/* Function: state_processing @ 0x1310 */
long long state_processing(int a1)
{
 if ( a1 == 2 )
 return 2;
 else
 return 2 * (unsigned int)(a1 == 99) + 1;
}


/* Function: state_done @ 0x1340 */
long long state_done()
{
 return 2;
}


/* Function: state_error @ 0x1350 */
long long state_error(unsigned int a1)
{
 long long result; // rax

 result = a1;
 if ( a1 )
 return 3;
 return result;
}


/* Function: sequential_ops @ 0x1370 */
long long sequential_ops(int a1, int a2, int a3)
{
 return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0x1380 */
long long single_if(int a1)
{
 long long result; // rax

 result = (unsigned int)(2 * a1);
 if ( a1 <= 0 )
 return (unsigned int)a1;
 return result;
}


/* Function: if_else @ 0x1390 */
_BOOL8 if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0x13A0 */
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


/* Function: nested_if_deep @ 0x13C0 */
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


/* Function: if_elseif_chain @ 0x1410 */
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


/* Function: if_elseif_long @ 0x1440 */
long long if_elseif_long(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 <= 4 )
 return 100 * (a1 + 1);
 return result;
}


/* Function: switch_small @ 0x1460 */
long long switch_small(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 <= 3 )
 return CSWTCH_55[a1];
 return result;
}


/* Function: switch_large @ 0x1480 */
long long switch_large(unsigned int a1)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a1 <= 9 )
 return 10 * a1;
 return result;
}


/* Function: switch_default @ 0x14A0 */
long long switch_default(int a1)
{
 long long result; // rax

 result = 0;
 if ( (unsigned int)(a1 - 1) <= 2 )
 return (unsigned int)(100 * a1);
 return result;
}


/* Function: switch_fallthrough @ 0x14C0 */
long long switch_fallthrough(int a1)
{
 if ( a1 == 2 )
 return 6;
 if ( a1 == 3 )
 return 21;
 return 2 * (unsigned int)(a1 == 1) - 1;
}


/* Function: loop_for_fixed @ 0x1500 */
long long loop_for_fixed(int a1)
{
 int v1; // eax
 unsigned int v2; // r8d

 if ( a1 <= 0 )
 return 0;
 v1 = 0;
 v2 = 0;
 do
 v2 += v1++;
 while ( a1 != v1 );
 return v2;
}


/* Function: loop_while @ 0x1530 */
long long loop_while(int a1)
{
 unsigned int v1; // r8d

 if ( !a1 )
 return 1;
 v1 = 0;
 do
 {
 ++v1;
 a1 /= 10;
 }
 while ( a1 );
 return v1;
}


/* Function: loop_dowhile @ 0x1580 */
long long loop_dowhile(int a1)
{
 unsigned int v1; // r8d

 v1 = 0;
 do
 {
 ++v1;
 a1 /= 10;
 }
 while ( a1 );
 return v1;
}


/* Function: loop_nested @ 0x15C0 */
long long loop_nested(int a1, int a2)
{
 int v2; // edx
 long long result; // rax

 v2 = 0;
 result = 0;
 if ( a1 > 0 )
 {
 do
 {
 if ( a2 > 0 )
 result = (unsigned int)(a2 + result);
 ++v2;
 }
 while ( a1 != v2 );
 }
 return result;
}


/* Function: loop_break @ 0x15E0 */
long long loop_break(int a1)
{
 long long v1; // rax
 unsigned int v2; // r8d
 int v4; // [rsp+0h] [rbp-28h]
 long long v5; // [rsp+4h] [rbp-24h]
 long long v6; // [rsp+Ch] [rbp-1Ch]
 unsigned long long v7; // [rsp+18h] [rbp-10h]

 v7 = __readfsqword(0x28u);
 v5 = 0x1E00000014LL;
 v6 = 0x3200000028LL;
 v1 = 0;
 v2 = 0;
 if ( a1 != 10 )
 {
 while ( ++v1 != 5 )
 {
 v2 = v1;
 if ( a1 == *(&v4 + v1) )
 return v2;
 }
 return (unsigned int)-1;
 }
 return v2;
}


/* Function: loop_continue @ 0x1670 */
long long loop_continue(int a1)
{
 int v1; // edi
 int v2; // eax
 unsigned int v3; // r8d

 if ( a1 <= 0 )
 return 0;
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
 return v3;
}


/* Function: goto_forward @ 0x16B0 */
long long goto_forward(int a1)
{
 if ( a1 > 0 )
 a1 *= a1;
 return (unsigned int)(2 * a1);
}


/* Function: goto_backward @ 0x16C0 */
long long goto_backward(int a1)
{
 unsigned int v1; // r8d
 int v2; // edi
 int v3; // eax

 v1 = 1;
 if ( a1 > 0 )
 {
 v2 = a1 + 1;
 v3 = 1;
 do
 v1 *= v3++;
 while ( v2 != v3 );
 }
 return v1;
}


/* Function: ternary_op @ 0x16F0 */
long long ternary_op(unsigned int a1, unsigned int a2)
{
 long long result; // rax

 result = a1;
 if ( (int)a2 >= (int)a1 )
 return a2;
 return result;
}


/* Function: test_control_flow_l1 @ 0x1700 */
long long test_control_flow_l1()
{
 long long v0; // rax
 int v1; // edx
 long long v2; // rax
 int v3; // edx
 unsigned char v5[4]; // [rsp+0h] [rbp-28h] BYREF
 long long v6; // [rsp+4h] [rbp-24h]
 long long v7; // [rsp+Ch] [rbp-1Ch]
 unsigned long long v8; // [rsp+18h] [rbp-10h]

 v8 = __readfsqword(0x28u);
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
 v6 = 0x1E00000014LL;
 v7 = 0x3200000028LL;
 v0 = 1;
 while ( 1 )
 {
 v1 = v0;
 if ( v0 == 5 )
 break;
 ++v0;
 if ( *(unsigned int *)&v5[4 * v0 - 4] == 30 )
 goto LABEL_4;
 }
 v1 = -1;
LABEL_4:
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v1);
 v6 = 0x1E00000014LL;
 v7 = 0x3200000028LL;
 v2 = 1;
 while ( 1 )
 {
 v3 = v2;
 if ( v2 == 5 )
 break;
 ++v2;
 if ( *(unsigned int *)&v5[4 * v2 - 4] == 99 )
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
 return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x1A40 */
long long loop_multi_exit(int a1)
{
 int v1; // edx
 unsigned int *v2; // rax
 int v3; // eax
 unsigned int v5[2]; // [rsp+0h] [rbp-48h] BYREF
 long long v6; // [rsp+8h] [rbp-40h]
 long long v7; // [rsp+10h] [rbp-38h]
 long long v8; // [rsp+18h] [rbp-30h]
 long long v9; // [rsp+20h] [rbp-28h]
 long long v10; // [rsp+28h] [rbp-20h]
 unsigned long long v11; // [rsp+38h] [rbp-10h]

 v1 = 0;
 v11 = __readfsqword(0x28u);
 v5[1] = 2;
 v6 = 0x400000003LL;
 v7 = 0x600000005LL;
 v8 = 0x800000007LL;
 v9 = 0xA00000009LL;
 v10 = 0xC0000000BLL;
 v2 = v5;
 if ( a1 == 1 )
 {
LABEL_7:
 v3 = 0;
 }
 else
 {
 while ( 1 )
 {
 if ( a1 == v2[1] )
 {
 v3 = 1;
 return (unsigned int)(v3 + 10 * v1);
 }
 if ( a1 == v2[2] )
 {
 v3 = 2;
 return (unsigned int)(v3 + 10 * v1);
 }
 if ( a1 == v2[3] )
 break;
 ++v1;
 v2 += 4;
 if ( v1 == 3 )
 return 0xFFFFFFFFLL;
 if ( *v2 == a1 )
 goto LABEL_7;
 }
 v3 = 3;
 }
 return (unsigned int)(v3 + 10 * v1);
}


/* Function: infinite_loop @ 0x1B30 */
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


/* Function: multi_return @ 0x1B60 */
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


/* Function: conditional_return @ 0x1B90 */
long long conditional_return(int a1)
{
 long long result; // rax

 if ( a1 > 0 )
 return (unsigned int)(2 * a1);
 result = (unsigned int)-a1;
 if ( !a1 )
 return 0;
 return result;
}


/* Function: duffs_device @ 0x1BB0 */
long long duffs_device(int *a1, int *a2, int a3)
{
 int *v4; // rcx
 unsigned int v5; // r8d
 int v6; // edx
 int *v7; // rdi
 int *v8; // rsi
 int v9; // esi
 int v10; // esi
 int *v11; // rdi
 int *v12; // rsi
 int *v13; // rdi
 int *v14; // rsi

 v4 = a2;
 v5 = a3;
 if ( a3 <= 0 )
 {
 return (unsigned int)-1;
 }
 else
 {
 v6 = (a3 + 7) >> 3;
 switch ( v5 & 7 )
 {
 case 0u:
 v7 = a2;
 v8 = a1;
 goto LABEL_4;
 case 1u:
 goto LABEL_11;
 case 2u:
 v13 = a2;
 v14 = a1;
 goto LABEL_10;
 case 3u:
 goto LABEL_9;
 case 4u:
 v11 = a2;
 v12 = a1;
 goto LABEL_8;
 case 5u:
 goto LABEL_7;
 case 6u:
 goto LABEL_6;
 case 7u:
 while ( 1 )
 {
 v9 = *v4;
 ++a1;
 ++v4;
 *(a1 - 1) = v9;
LABEL_6:
 v10 = *v4;
 ++a1;
 ++v4;
 *(a1 - 1) = v10;
LABEL_7:
 v11 = v4 + 1;
 v12 = a1 + 1;
 *a1 = *v4;
LABEL_8:
 v4 = v11 + 1;
 a1 = v12 + 1;
 *v12 = *v11;
LABEL_9:
 v13 = v4 + 1;
 v14 = a1 + 1;
 *a1 = *v4;
LABEL_10:
 v4 = v13 + 1;
 a1 = v14 + 1;
 *v14 = *v13;
LABEL_11:
 *a1 = *v4;
 if ( !--v6 )
 break;
 v7 = v4 + 1;
 v8 = a1 + 1;
LABEL_4:
 v4 = v7 + 1;
 a1 = v8 + 1;
 *v8 = *v7;
 }
 break;
 }
 }
 return v5;
}


/* Function: loop_complex_cond @ 0x1C80 */
long long loop_complex_cond(int a1)
{
 int v1; // edx
 int v2; // eax

 if ( a1 <= 0 )
 return (unsigned int)a1;
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += 2;
 --a1;
 ++v1;
 }
 while ( v2 < a1 && v1 <= 9 );
 return (unsigned int)(v1 + a1 + v2);
}


/* Function: loop_modify_var @ 0x1CC0 */
long long loop_modify_var(int a1)
{
 unsigned int v1; // r8d
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
 v2 += 3;
 v1 += v3;
 if ( v3 <= 5 )
 v2 = v3;
 }
 }
 return v1;
}


/* Function: loop_external_state @ 0x1CF0 */
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


/* Function: tail_recursion @ 0x1D10 */
long long tail_recursion(int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( a1 > 1 )
 {
 do
 {
 result = (unsigned int)(a1 * result);
 --a1;
 }
 while ( a1 != 1 );
 }
 return result;
}


/* Function: indirect_recursion_a @ 0x1D30 */
long long indirect_recursion_a(int a1, int a2)
{
 long long result; // rax
 int v3; // edx
 int v4; // edi
 int v5; // eax

 result = (unsigned int)a1;
 v3 = a2 - 2;
 if ( a2 > 0 )
 {
 while ( 1 )
 {
 if ( (a1 & 1) != 0 )
 {
 v4 = 3 * a1;
 if ( a2 == 1 )
 return (unsigned int)(v4 + 1);
 v5 = v3;
 a1 = v4 + 2;
 }
 else
 {
 result = (unsigned int)(a1 / 2);
 if ( a2 == 1 )
 return result;
 v5 = v3;
 a1 = a1 / 2 + 1;
 }
 v3 -= 2;
 a2 -= 2;
 if ( !v5 )
 return (unsigned int)a1;
 }
 }
 return result;
}


/* Function: call_func_ptr @ 0x1D80 */
long long call_func_ptr(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1D90 */
long long call_func_ptr_array(unsigned int a1, unsigned int a2)
{
 unsigned long long v3[5]; // [rsp+0h] [rbp-28h]

 v3[3] = __readfsqword(0x28u);
 v3[0] = double_value;
 v3[1] = triple_value;
 v3[2] = recursion_factorial;
 if ( a1 > 2 )
 return 0xFFFFFFFFLL;
 else
 return ((long long ( *)(unsigned long long))v3[a1])(a2);
}


/* Function: call_virtual_func @ 0x1E10 */
long long call_virtual_func(long long a1, int a2)
{
 return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x1E20 */
long long process_with_callback(unsigned int *a1, int a2, long long ( *a3)(long long))
{
 unsigned int *v4; // rbx
 unsigned int v5; // r12d
 long long v6; // r13
 long long v7; // rdi

 if ( a2 <= 0 )
 return 0;
 v4 = a1;
 v5 = 0;
 v6 = (long long)&a1[a2 - 1 + 1];
 do
 {
 v7 = *v4++;
 v5 += a3(v7);
 }
 while ( v4 != (unsigned int *)v6 );
 return v5;
}


/* Function: test_control_flow_l2 @ 0x1E90 */
unsigned long long test_control_flow_l2()
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
 char *k; // rax
 unsigned long long v11[2]; // [rsp+10h] [rbp-78h] BYREF
 int v12; // [rsp+20h] [rbp-68h]
 char v13; // [rsp+24h] [rbp-64h] BYREF
 unsigned long long v14[4]; // [rsp+30h] [rbp-58h] BYREF
 unsigned long long v15[2]; // [rsp+50h] [rbp-38h] BYREF
 unsigned long long v16; // [rsp+78h] [rbp-10h]

 v16 = __readfsqword(0x28u);
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
 v14[0] = 0x200000001LL;
 v14[1] = 0x400000003LL;
 v14[2] = 0x600000005LL;
 memset(v15, 0, sizeof(v15));
 v14[3] = 0x800000007LL;
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
 v12 = 5;
 v7 = 0;
 v8 = 1;
 v11[0] = 0x200000001LL;
 v11[1] = 0x400000003LL;
 for ( k = (char *)v11; ; v8 = *(unsigned int *)k )
 {
 k += 4;
 v7 += 2 * v8;
 if ( k == &v13 )
 break;
 }
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v7);
 return v16 - __readfsqword(0x28u);
}


/* Function: non_local_jump @ 0x2190 */
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


/* Function: cpp_exception @ 0x2200 */
long long cpp_exception(int a1)
{
 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 if ( a1 > 100 )
 return 4294967294LL;
 return (unsigned int)(2 * a1);
}


/* Function: large_jump_table @ 0x2230 */
long long large_jump_table(unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned long long v4[13]; // [rsp+0h] [rbp-68h]

 v4[11] = __readfsqword(0x28u);
 v4[0] = op_add;
 v4[1] = op_sub;
 v4[2] = op_mul;
 v4[3] = op_div;
 v4[4] = op_mod;
 v4[5] = op_and;
 v4[6] = op_or;
 v4[7] = op_xor;
 v4[8] = op_shl;
 v4[9] = op_shr;
 if ( a1 > 9 )
 return 0xFFFFFFFFLL;
 else
 return ((long long ( *)(unsigned long long, unsigned long long))v4[a1])(a2, a3);
}


/* Function: conditional_func_ptr @ 0x2310 */
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


/* Function: state_machine @ 0x2340 */
long long state_machine(int a1, int a2)
{
 if ( a2 == 2 )
 return 2;
 if ( a2 > 2 )
 {
 if ( a2 == 3 )
 return a1 != 0 ? 3 : 0;
 return 3;
 }
 if ( a2 )
 {
 if ( a2 == 1 )
 {
 if ( a1 != 2 )
 return 2 * (unsigned int)(a1 == 99) + 1;
 return 2;
 }
 return 3;
 }
 return a1 == 1;
}


/* Function: fsm_func_table @ 0x23B0 */
long long fsm_func_table(long long a1, unsigned int a2)
{
 unsigned long long v3[7]; // [rsp+0h] [rbp-38h]

 v3[5] = __readfsqword(0x28u);
 v3[0] = state_idle;
 v3[1] = state_processing;
 v3[2] = state_done;
 v3[3] = state_error;
 if ( a2 > 3 )
 return 3;
 else
 return ((long long (*)(void))v3[a2])();
}


/* Function: computed_goto @ 0x2440 */
long long computed_goto(long long a1, unsigned int a2)
{
 unsigned long long v3[7]; // [rsp+0h] [rbp-38h]

 v3[5] = __readfsqword(0x28u);
 v3[0] = (unsigned long long)&obfuscated_cf;
 v3[1] = (unsigned long long)&opaque_predicate;
 v3[2] = (unsigned long long)&overlapped_code;
 v3[3] = (unsigned long long)&opaque_predicate;
 if ( a2 <= 3 )
 return ((long long (*)(long long))v3[a2])(a1);
 return 0xFFFFFFFFLL;
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
long long overlapped_code(int a1)
{
 if ( (a1 & 1) != 0 )
 return (unsigned int)(3 * a1 + 1);
 else
 return (unsigned int)(a1 / 2);
}


/* Function: test_control_flow_l3 @ 0x2530 */
unsigned long long test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 unsigned long long v5[3]; // [rsp+0h] [rbp-28h] BYREF
 unsigned long long v6; // [rsp+18h] [rbp-10h]

 v6 = __readfsqword(0x28u);
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
 v5[0] = 0x100000000LL;
 v5[1] = 0x300000002LL;
 v3 = computed_goto((long long)v5, 2u);
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v3);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 return v6 - __readfsqword(0x28u);
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
