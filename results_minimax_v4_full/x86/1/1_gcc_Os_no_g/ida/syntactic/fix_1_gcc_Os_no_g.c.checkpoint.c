/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/1/1_gcc_Os_no_g
 * Processor: pc
 */

/* External CRT functions and data */
void _gmon_start(void) {}

#include <setjmp.h>
#include <string.h>
#include <stddef.h>

/* Macro definitions for missing intrinsics */
#define HIDWORD(x) ((int)((((unsigned long long)(x)) >> 32) & 0xFFFFFFFF))
#define __readgsdword(offset) (*(unsigned int *)((char *)__builtin_frame_address(0) + (offset)))

/* Forward declarations for functions used in function pointer arrays */
int double_value(int a1);
int triple_value(int a1);
int recursion_factorial(int a1);
int op_add(int a1, int a2);

/* Forward declarations for test functions */
int test_control_flow_l1(void);
unsigned int test_control_flow_l2(void);
int test_control_flow_l3(void);

/* Global jump buffer for non-local jumps */
static jmp_buf jump_buffer;

/* Switch jump table for switch_small */
static int CSWTCH_56[4] = {0, 10, 20, 30};

/* Data arrays referenced in code */
static unsigned int unk_3020[5] = {10, 20, 30, 40, 50};
static unsigned int unk_3040[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

/* String literals */
static const char asc_30E8[] = "Control Flow Tests - Level 1\n";
static const char asc_3355[] = "Control Flow Tests - Level 2\n";
static const char asc_3548[] = "Control Flow Tests - Level 3\n";

/* Function pointers for computed goto */
static int (*off_6058[4])(int) = {double_value, triple_value, recursion_factorial, op_add};

/* Jump table for large_jump_table */
static int (*off_6020[10])(int, int);

/* FSM function table for fsm_func_table */
static int (*off_6048[4])(int);

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start )
 ((void (*)(void))_gmon_start)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__("jmp *%%ebx" :::);
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


/* CRT stub functions - empty implementations */
void frame_dummy(void) {}
void _do_global_ctors_aux(void) {}
void _do_global_dtors_aux(void) {}


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


/* Function: recursion_factorial @ 0x12A1 */
int recursion_factorial(int a1)
{
 int result; // eax

 result = 1;
 while ( a1 > 1 )
 result *= a1--;
 return result;
}


/* Function: double_value @ 0x12BD */
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: triple_value @ 0x12CB */
int triple_value(int a1)
{
 return 3 * a1;
}


/* Function: op_add @ 0x12D8 */
int op_add(int a1, int a2)
{
 return a1 + a2;
}


/* Function: op_sub @ 0x12E7 */
int op_sub(int a1, int a2)
{
 return a1 - a2;
}


/* Function: op_mul @ 0x12F6 */
int op_mul(int a1, int a2)
{
 return a1 * a2;
}


/* Function: op_div @ 0x1306 */
int op_div(int a1, int a2)
{
 int v2; // ecx

 v2 = a2;
 if ( a2 )
 return a1 / a2;
 return v2;
}


/* Function: op_mod @ 0x1320 */
int op_mod(int a1, int a2)
{
 int v2; // edx

 v2 = a2;
 if ( a2 )
 return a1 % a2;
 return v2;
}


/* Function: op_and @ 0x133A */
int op_and(int a1, int a2)
{
 return a1 & a2;
}


/* Function: op_or @ 0x1349 */
int op_or(long long a1)
{
 return a1 | HIDWORD(a1);
}


/* Function: op_xor @ 0x1358 */
int op_xor(int a1, int a2)
{
 return a1 ^ a2;
}


/* Function: op_shl @ 0x1367 */
int op_shl(int a1, char a2)
{
 return a1 << a2;
}


/* Function: op_shr @ 0x1378 */
int op_shr(int a1, char a2)
{
 return a1 >> a2;
}


/* Function: state_idle @ 0x1389 */
int state_idle(int a1)
{
 return a1 == 1;
}


/* Function: state_processing @ 0x139B */
int state_processing(int a1)
{
 int result; // eax

 result = a1;
 if ( a1 != 2 )
 {
 if ( a1 == 99 )
 return 3;
 else
 return 1;
 }
 return result;
}


/* Function: state_done @ 0x13BD */
int state_done()
{
 return 2;
}


/* Function: state_error @ 0x13C7 */
int state_error(int a1)
{
 int result; // eax

 result = a1;
 if ( a1 )
 return 3;
 return result;
}


/* Function: sequential_ops @ 0x13DC */
int sequential_ops(int a1, int a2, int a3)
{
 return 2 * (a1 + a2) - a3;
}


/* Function: single_if @ 0x13F0 */
int single_if(int a1)
{
 int result; // eax

 result = a1;
 if ( a1 > 0 )
 return 2 * a1;
 return result;
}


/* Function: if_else @ 0x1402 */
int if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0x1414 */
int nested_if_2(int a1, int a2)
{
 int result; // eax

 result = a1;
 if ( a1 <= 0 )
 return 0;
 if ( a2 > 0 )
 return a2 + a1;
 return result;
}


/* Function: nested_if_deep @ 0x1431 */
int nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
 int result; // eax

 result = 0;
 if ( a1 > 0 )
 {
 result = 1;
 if ( a2 > 0 )
 {
 result = 2;
 if ( a3 > 0 )
 {
 result = 3;
 if ( a4 > 0 )
 return (a5 > 0) + 4;
 }
 }
 }
 return result;
}


/* Function: if_elseif_chain @ 0x146F */
int if_elseif_chain(int a1)
{
 int result; // eax

 result = 10;
 if ( a1 )
 {
 result = 20;
 if ( a1 != 1 )
 {
 result = 30;
 if ( a1 != 2 )
 return -1;
 }
 }
 return result;
}


/* Function: if_elseif_long @ 0x149E */
int if_elseif_long(unsigned int a1)
{
 int result; // eax

 result = -1;
 if ( a1 <= 4 )
 return 100 * (a1 + 1);
 return result;
}


/* Function: switch_small @ 0x14B8 */
int switch_small(unsigned int a1)
{
 int result; // eax

 result = -1;
 if ( a1 <= 3 )
 return CSWTCH_56[a1];
 return result;
}


/* Function: switch_large @ 0x14DF */
int switch_large(unsigned int a1)
{
 int result; // eax

 result = 10 * a1;
 if ( a1 > 9 )
 return -1;
 return result;
}


/* Function: switch_default @ 0x14F6 */
int switch_default(int a1)
{
 int result; // eax

 result = 100 * a1;
 if ( (unsigned int)(a1 - 1) > 2 )
 return 0;
 return result;
}


/* Function: switch_fallthrough @ 0x150F */
int switch_fallthrough(int a1)
{
 int result; // eax
 int v2; // eax
 int v3; // ecx

 if ( a1 == 2 )
 {
 v3 = 0;
LABEL_7:
 v2 = v3 + 2 * a1;
 return a1 + v2;
 }
 if ( a1 == 3 )
 {
 v3 = 12;
 goto LABEL_7;
 }
 result = -1;
 if ( a1 != 1 )
 return result;
 v2 = 0;
 return a1 + v2;
}


/* Function: loop_for_fixed @ 0x1541 */
int loop_for_fixed(int a1)
{
 int v1; // eax
 int v2; // edx

 v1 = 0;
 v2 = 0;
 while ( v1 < a1 )
 v2 += v1++;
 return v2;
}


/* Function: loop_while @ 0x155A */
int loop_while(int a1)
{
 int v1; // ecx
 int result; // eax

 v1 = 0;
 while ( a1 )
 {
 ++v1;
 a1 /= 10;
 }
 result = 1;
 if ( v1 > 0 )
 return v1;
 return result;
}


/* Function: loop_dowhile @ 0x1583 */
int loop_dowhile(int a1)
{
 int v1; // ecx

 v1 = 0;
 do
 {
 ++v1;
 a1 /= 10;
 }
 while ( a1 );
 return v1;
}


/* Function: loop_nested @ 0x15A2 */
int loop_nested(int a1, int a2)
{
 int v2; // ecx
 int v3; // edx
 int v4; // eax

 v2 = 0;
 v3 = 0;
 v4 = a2;
 if ( a2 < 0 )
 v4 = 0;
 while ( v2 < a1 )
 {
 v3 += v4;
 ++v2;
 }
 return v3;
}


/* Function: loop_break @ 0x15C7 */
int loop_break(int a1)
{
 int result; // eax
 unsigned int v2[9]; // [esp-24h] [ebp-24h] BYREF

 result = 0;
 v2[5] = __readgsdword(0x14u);
 memcpy(v2, &unk_3020, 0x14u);
 while ( v2[result] != a1 )
 {
 if ( ++result == 5 )
 return -1;
 }
 return result;
}


/* Function: loop_continue @ 0x1627 */
int loop_continue(int a1)
{
 int v1; // eax
 int v2; // edx

 v1 = 1;
 v2 = 0;
 while ( v1 <= a1 )
 {
 if ( (v1 & 1) != 0 )
 v2 += v1;
 ++v1;
 }
 return v2;
}


/* Function: goto_forward @ 0x1647 */
int goto_forward(int a1)
{
 int v1; // eax

 v1 = a1;
 if ( a1 > 0 )
 v1 = a1 * a1;
 return 2 * v1;
}


/* Function: goto_backward @ 0x165C */
int goto_backward(int a1)
{
 int v1; // edx
 int i; // eax

 v1 = 1;
 if ( a1 > 0 )
 {
 for ( i = 1; i <= a1; ++i )
 v1 *= i;
 }
 return v1;
}


/* Function: ternary_op @ 0x1680 */
int ternary_op(int a1, int a2)
{
 int result; // eax

 result = a2;
 if ( a2 < a1 )
 return a1;
 return result;
}


/* Function: test_control_flow_l1 @ 0x1694 */
int test_control_flow_l1()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax

 puts(asc_30E8);
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


/* Function: loop_multi_exit @ 0x18E7 */
int loop_multi_exit(int a1)
{
 int v1; // eax
 unsigned char *v2; // ecx
 int i; // edx
 unsigned char v5[48]; // [esp-40h] [ebp-40h] BYREF
 unsigned int v6; // [esp-10h] [ebp-10h]

 v1 = 0;
 v6 = __readgsdword(0x14u);
 memcpy(v5, &unk_3040, sizeof(v5));
 v2 = v5;
 do
 {
 for ( i = 0; i != 4; ++i )
 {
 if ( *(unsigned int *)&v2[4 * i] == a1 )
 return i + 10 * v1;
 }
 ++v1;
 v2 += 16;
 }
 while ( v1 != 3 );
 return -1;
}


/* Function: infinite_loop @ 0x1959 */
int infinite_loop(unsigned int *a1)
{
 int result; // eax

 result = 0;
 while ( *a1 != 1 )
 {
 if ( ++result == 1001 )
 {
 *a1 = 1;
 return result;
 }
 }
 return result;
}


/* Function: multi_return @ 0x197A */
int multi_return(int a1)
{
 int result; // eax

 result = -1;
 if ( a1 >= 0 )
 {
 result = 2 * a1;
 if ( 2 * a1 > 100 )
 {
 return -2;
 }
 else if ( (a1 & 1) != 0 )
 {
 return a1 + 1;
 }
 }
 return result;
}


/* Function: conditional_return @ 0x19A4 */
int conditional_return(int a1)
{
 int result; // eax

 result = a1;
 if ( a1 > 0 )
 return 2 * a1;
 if ( a1 )
 return -a1;
 return result;
}


/* Function: duffs_device @ 0x19BC */
int duffs_device(int *a1, int *a2, int a3)
{
 int v3; // ecx
 int v6; // ebx
 int v7; // esi
 int v8; // esi
 int v9; // esi
 int v10; // esi
 int v11; // esi
 int v12; // esi
 int v13; // esi

 v3 = a3;
 if ( a3 <= 0 )
 return -1;
 v6 = (a3 + 7) >> 3;
 switch ( a3 & 7 )
 {
 case 1:
 goto _L201;
 case 2:
 goto _L200;
 case 3:
 goto _L199;
 case 4:
 goto _L198;
 case 5:
 goto _L197;
 case 6:
 goto _L196;
 case 7:
 goto _L194;
 default:
 while ( 1 )
 {
 v13 = *a2;
 ++a1;
 ++a2;
 *(a1 - 1) = v13;
_L194:
 v7 = *a2;
 ++a1;
 ++a2;
 *(a1 - 1) = v7;
_L196:
 v8 = *a2;
 ++a1;
 ++a2;
 *(a1 - 1) = v8;
_L197:
 v9 = *a2;
 ++a1;
 ++a2;
 *(a1 - 1) = v9;
_L198:
 v10 = *a2;
 ++a1;
 ++a2;
 *(a1 - 1) = v10;
_L199:
 v11 = *a2;
 ++a1;
 ++a2;
 *(a1 - 1) = v11;
_L200:
 v12 = *a2;
 ++a1;
 ++a2;
 *(a1 - 1) = v12;
_L201:
 *a1 = *a2;
 if ( !--v6 )
 break;
 ++a2;
 ++a1;
 }
 break;
 }
 return v3;
}


/* Function: loop_complex_cond @ 0x1A5F */
int loop_complex_cond(int a1)
{
 int i; // edx

 for ( i = 0; 2 * i < a1 - i && i <= 9; ++i )
 ;
 return a1 + 2 * i;
}


/* Function: loop_modify_var @ 0x1A82 */
int loop_modify_var(int a1)
{
 int v1; // eax
 int v2; // edx

 v1 = 0;
 v2 = 0;
 while ( v1 < a1 )
 {
 v2 += v1;
 if ( v1 > 5 )
 v1 += 2;
 ++v1;
 }
 return v2;
}


/* Function: loop_external_state @ 0x1AA3 */
int loop_external_state(unsigned int *a1)
{
 int result; // eax

 for ( result = 0; result != 101; ++result )
 {
 if ( *a1 )
 break;
 }
 return result;
}


/* Function: tail_recursion @ 0x1ABD */
int tail_recursion(int a1, int a2)
{
 int result; // eax

 result = a2;
 while ( a1 > 1 )
 result *= a1--;
 return result;
}


/* Function: indirect_recursion_a @ 0x1AD7 */
int indirect_recursion_a(int a1, int a2)
{
 int result; // eax
 int v4; // eax

 result = a1;
 while ( a2 > 0 )
 {
 if ( (result & 1) != 0 )
 {
 v4 = 3 * result;
 if ( a2 == 1 )
 return v4 + 1;
 result = v4 + 2;
 }
 else
 {
 result /= 2;
 if ( a2 == 1 )
 return result;
 ++result;
 }
 a2 -= 2;
 }
 return result;
}


/* Function: call_func_ptr @ 0x1B13 */
int call_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1B26 */
int call_func_ptr_array(unsigned int a1, int a2)
{
 unsigned int v3[7]; // [esp-1Ch] [ebp-1Ch]

 v3[3] = __readgsdword(0x14u);
 v3[0] = double_value;
 v3[1] = triple_value;
 v3[2] = recursion_factorial;
 if ( a1 > 2 )
 return -1;
 else
 return ((int ( *)(int))v3[a1])(a2);
}


/* Function: call_virtual_func @ 0x1BA1 */
int call_virtual_func(int a1, int a2)
{
 return 2 * a2;
}


/* Function: process_with_callback @ 0x1BAF */
int process_with_callback(int a1, int a2, int ( *a3)(int))
{
 int v3; // esi
 int i; // ebx
 int v6; // [esp-10h] [ebp-18h]

 v3 = 0;
 for ( i = 0; i < a2; ++i )
 {
 v6 = *(unsigned int *)(a1 + 4 * i);
 v3 += a3(v6);
 }
 return v3;
}


/* Function: test_control_flow_l2 @ 0x1BDE */
// bad sp value at call has been detected, the output may be wrong!
unsigned int test_control_flow_l2()
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
 int v10; // eax
 int v11; // eax
 int v13; // [esp+4h] [ebp-78h] BYREF
 int v14; // [esp+8h] [ebp-74h] BYREF
 unsigned char v15[20]; // [esp+Ch] [ebp-70h] BYREF
 int v16[8]; // [esp+20h] [ebp-5Ch] BYREF
 int v17[15]; // [esp+40h] [ebp-3Ch] BYREF

 puts(asc_3355);
 v0 = loop_multi_exit(7);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
 v1 = infinite_loop(&v13);
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 memset(v17, 0, 0x20u);
 v2 = duffs_device(v17, v16, 8);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v2);
 v3 = loop_complex_cond(10);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", v3);
 v4 = loop_modify_var(10);
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
 v5 = loop_external_state(&v14);
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v5);
 v6 = recursion_factorial(5);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", v6);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
 v7 = indirect_recursion_a(6, 1);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", v7);
 v8 = call_func_ptr(double_value, 5);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", v8);
 v9 = call_func_ptr_array(0, 5);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v9);
 v10 = call_func_ptr_array(2u, 5);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v10);
 v11 = process_with_callback((int)v15, 5, double_value);
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v11);
 return v17[8] - __readgsdword(0x14u);
}


/* Function: non_local_jump @ 0x1E36 */
int non_local_jump(int a1)
{
 int v1; // edx
 int result; // eax

 if ( _setjmp(&jump_buffer) )
 return -1;
 if ( a1 < 0 )
 __longjmp_chk(&jump_buffer, 1, v1, v1);
 result = 2 * a1;
 if ( a1 > 100 )
 __longjmp_chk(&jump_buffer, 2, 2 * a1, 2 * a1);
 return result;
}


/* Function: cpp_exception @ 0x1E9D */
int cpp_exception(int a1)
{
 int result; // eax

 result = -1;
 if ( a1 >= 0 )
 {
 result = 2 * a1;
 if ( a1 >= 101 )
 return -2;
 }
 return result;
}


/* Function: large_jump_table @ 0x1EBE */
int large_jump_table(unsigned int a1, int a2, int a3)
{
 unsigned int v4[18]; // [esp-48h] [ebp-48h] BYREF

 v4[10] = __readgsdword(0x14u);
 memcpy(v4, off_6020, 0x28u);
 if ( a1 > 9 )
 return -1;
 else
 return ((int ( *)(int, int))v4[a1])(a2, a3);
}


/* Function: conditional_func_ptr @ 0x1F3B */
int conditional_func_ptr(int a1, int a2)
{
 int ( *v2)(int); // eax

 v2 = double_value;
 if ( a1 )
 {
 v2 = triple_value;
 if ( a1 != 1 )
 v2 = recursion_factorial;
 }
 return v2(a2);
}


/* Function: state_machine @ 0x1F74 */
int state_machine(int a1, int a2)
{
 int result; // eax
 _Bool v3; // zf
 int v4; // edx

 result = a2;
 if ( a2 != 2 )
 {
 if ( a2 > 2 )
 {
 if ( a2 != 3 )
 return 3;
 v3 = a1 == 0;
 v4 = 0;
 }
 else
 {
 if ( !a2 )
 return a1 == 1;
 if ( a2 != 1 )
 return 3;
 if ( a1 == 2 )
 return 2;
 v3 = a1 == 99;
 v4 = 3;
 }
 if ( v3 )
 return v4;
 }
 return result;
}


/* Function: fsm_func_table @ 0x1FC9 */
int fsm_func_table(int a1, unsigned int a2)
{
 unsigned int v3[8]; // [esp-20h] [ebp-20h] BYREF

 v3[4] = __readgsdword(0x14u);
 memcpy(v3, off_6048, 0x10u);
 if ( a2 > 3 )
 return 3;
 else
 return ((int ( *)(int))v3[a2])(a1);
}


/* Function: computed_goto @ 0x203F */
int computed_goto(int a1, unsigned int a2)
{
 int result; // eax
 unsigned int v3[8]; // [esp-20h] [ebp-20h] BYREF

 result = -1;
 v3[4] = __readgsdword(0x14u);
 memcpy(v3, &off_6058, 0x10u);
 if ( a2 <= 3 )
 __asm__("jmp *-0x1C(%%ebp,%%edx,4)" : : "d"(a2));
 return result;
}


/* Function: obfuscated_cf @ 0x20BF */
int obfuscated_cf(int a1)
{
 return 2 * a1;
}


/* Function: opaque_predicate @ 0x20CD */
int opaque_predicate(int a1)
{
 return 2 * a1;
}


/* Function: overlapped_code @ 0x20DB */
int overlapped_code(int a1)
{
 if ( (a1 & 1) != 0 )
 return 3 * a1 + 1;
 else
 return a1 / 2;
}


/* Function: test_control_flow_l3 @ 0x20F9 */
// bad sp value at call has been detected, the output may be wrong!
int test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 unsigned char v7[16]; // [esp+0h] [ebp-2Ch] BYREF
 int v8; // [esp+10h] [ebp-1Ch]

 puts(asc_3548);
 v0 = non_local_jump(5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 v2 = large_jump_table(0, 10, 5);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", v2);
 v3 = conditional_func_ptr(0, 5);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", v3);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 v4 = fsm_func_table(2, 1u);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", v4);
 v5 = computed_goto((int)v7, 2u);
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v5);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 return v8 - __readgsdword(0x14u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x226F */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x2273 */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __x86.get_pc_thunk.si @ 0x2277 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x2280 */
void _stack_chk_fail_local()
{
 __stack_chk_fail();
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x22EC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x6140 */

/* FAILED to decompile: _setjmp @ 0x6144 */

/* FAILED to decompile: __stack_chk_fail @ 0x6148 */

/* FAILED to decompile: __cxa_finalize @ 0x614C */

/* FAILED to decompile: puts @ 0x6150 */

/* FAILED to decompile: __printf_chk @ 0x6154 */

/* FAILED to decompile: __longjmp_chk @ 0x6158 */

/* Total functions decompiled: 89, failed: 7 */
