/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/1/1_gcc_O3_no_g
 * Processor: pc
 */

#include <setjmp.h>

#define HIDWORD(x) ((unsigned int)((unsigned long long)(x) >> 32))
static inline unsigned int __readgsdword(unsigned int offset) { return 0; }
int _do_global_ctors_aux(void) { return 0; }
void _do_global_dtors_aux(void) { }

jmp_buf jump_buffer;
int CSWTCH_56[] = {50, 60, 70, 80};
const char *asc_3008 = "Control Flow Level 1 Tests:";
const char *asc_3110 = "Control Flow Level 2 Tests:";
const char *asc_3294 = "Control Flow Level 3 Tests:";

int test_control_flow_l1();
unsigned int test_control_flow_l2();
int test_control_flow_l3();

/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" ::: "memory");
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
int recursion_factorial(int a1)
{
 int v1; // eax
 int v2; // edx
 int v3; // ecx

 v1 = a1;
 v2 = 1;
 if ( a1 > 1 )
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
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: triple_value @ 0x12F0 */
int triple_value(int a1)
{
 return 3 * a1;
}


/* Function: op_add @ 0x1300 */
int op_add(int a1, int a2)
{
 return a1 + a2;
}


/* Function: op_sub @ 0x1310 */
int op_sub(int a1, int a2)
{
 return a1 - a2;
}


/* Function: op_mul @ 0x1320 */
int op_mul(int a1, int a2)
{
 return a1 * a2;
}


/* Function: op_div @ 0x1330 */
int op_div(int a1, int a2)
{
 int v2; // ecx

 v2 = a2;
 if ( a2 )
 return a1 / a2;
 return v2;
}


/* Function: op_mod @ 0x1350 */
int op_mod(int a1, int a2)
{
 int v2; // edx

 v2 = a2;
 if ( a2 )
 return a1 % a2;
 return v2;
}


/* Function: op_and @ 0x1370 */
int op_and(int a1, int a2)
{
 return a1 & a2;
}


/* Function: op_or @ 0x1380 */
int op_or(long long a1)
{
 return a1 | HIDWORD(a1);
}


/* Function: op_xor @ 0x1390 */
int op_xor(int a1, int a2)
{
 return a1 ^ a2;
}


/* Function: op_shl @ 0x13A0 */
int op_shl(int a1, char a2)
{
 return a1 << a2;
}


/* Function: op_shr @ 0x13B0 */
int op_shr(int a1, char a2)
{
 return a1 >> a2;
}


/* Function: state_idle @ 0x13C0 */
int state_idle(int a1)
{
 return a1 == 1;
}


/* Function: state_processing @ 0x13D0 */
int state_processing(int a1)
{
 if ( a1 == 2 )
 return 2;
 else
 return 2 * (a1 == 99) + 1;
}


/* Function: state_done @ 0x1400 */
int state_done()
{
 return 2;
}


/* Function: state_error @ 0x1410 */
int state_error(int a1)
{
 int result; // eax

 result = a1;
 if ( a1 )
 return 3;
 return result;
}


/* Function: computed_goto.constprop.0 @ 0x1430 */
int computed_goto_constprop_0()
{
 return 20;
}


/* Function: non_local_jump.constprop.0 @ 0x1440 */
int non_local_jump_constprop_0()
{
 return _setjmp(&jump_buffer) == 0 ? 10 : -1;
}


/* Function: sequential_ops @ 0x1470 */
int sequential_ops(int a1, int a2, int a3)
{
 return 2 * (a1 + a2) - a3;
}


/* Function: single_if @ 0x1490 */
int single_if(int a1)
{
 int result; // eax

 result = 2 * a1;
 if ( a1 <= 0 )
 return a1;
 return result;
}


/* Function: if_else @ 0x14B0 */
int if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0x14C0 */
int nested_if_2(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a1 > 0 )
 {
 result = a1 + a2;
 if ( a2 <= 0 )
 return a1;
 }
 return result;
}


/* Function: nested_if_deep @ 0x14E0 */
int nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
 int result; // eax

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
 return (a5 > 0) + 4;
 }
 }
 }
 return result;
}


/* Function: if_elseif_chain @ 0x1540 */
int if_elseif_chain(int a1)
{
 int result; // eax

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
 return -1;
 }
 }
 return result;
}


/* Function: if_elseif_long @ 0x1580 */
int if_elseif_long(unsigned int a1)
{
 int result; // eax

 result = -1;
 if ( a1 <= 4 )
 return 100 * (a1 + 1);
 return result;
}


/* Function: switch_small @ 0x15A0 */
int switch_small(unsigned int a1)
{
 int result; // eax

 result = -1;
 if ( a1 <= 3 )
 return CSWTCH_56[a1];
 return result;
}


/* Function: switch_large @ 0x15D0 */
int switch_large(unsigned int a1)
{
 int result; // eax

 result = -1;
 if ( a1 <= 9 )
 return 10 * a1;
 return result;
}


/* Function: switch_default @ 0x15F0 */
int switch_default(int a1)
{
 int result; // eax

 result = 0;
 if ( (unsigned int)(a1 - 1) <= 2 )
 return 100 * a1;
 return result;
}


/* Function: switch_fallthrough @ 0x1610 */
int switch_fallthrough(int a1)
{
 if ( a1 == 2 )
 return 6;
 if ( a1 == 3 )
 return 21;
 return 2 * (a1 == 1) - 1;
}


/* Function: loop_for_fixed @ 0x1650 */
int loop_for_fixed(int a1)
{
 int v1; // eax
 int v2; // edx

 if ( a1 <= 0 )
 return 0;
 v1 = 0;
 v2 = 0;
 do
 v2 += v1++;
 while ( a1 != v1 );
 return v2;
}


/* Function: loop_while @ 0x1680 */
int loop_while(int a1)
{
 int v1; // ecx
 int v2; // ebx

 v1 = a1;
 if ( !a1 )
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
int loop_dowhile(int a1)
{
 int v2; // ebx

 v2 = 0;
 do
 {
 ++v2;
 a1 /= 10;
 }
 while ( a1 );
 return v2;
}


/* Function: loop_nested @ 0x1710 */
int loop_nested(int a1, int a2)
{
 int v2; // edx
 int result; // eax

 if ( a1 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 {
 if ( a2 > 0 )
 result += a2;
 ++v2;
 }
 while ( a1 != v2 );
 return result;
}


/* Function: loop_break @ 0x1750 */
int loop_break(int a1)
{
 switch ( a1 )
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
 return 5 * (a1 == 50) - 1;
}


/* Function: loop_continue @ 0x17A0 */
int loop_continue(int a1)
{
 int v1; // eax
 int v2; // edx

 if ( a1 <= 0 )
 return 0;
 v1 = 1;
 v2 = 0;
 do
 {
 if ( (v1 & 1) != 0 )
 v2 += v1;
 ++v1;
 }
 while ( a1 + 1 != v1 );
 return v2;
}


/* Function: goto_forward @ 0x17E0 */
int goto_forward(int a1)
{
 int v1; // eax

 v1 = a1;
 if ( a1 > 0 )
 v1 = a1 * a1;
 return 2 * v1;
}


/* Function: goto_backward @ 0x1800 */
int goto_backward(int a1)
{
 int v1; // edx
 int v2; // eax

 v1 = 1;
 if ( a1 > 0 )
 {
 v2 = 1;
 do
 v1 *= v2++;
 while ( a1 + 1 != v2 );
 }
 return v1;
}


/* Function: ternary_op @ 0x1830 */
int ternary_op(int a1, int a2)
{
 int result; // eax

 result = a2;
 if ( a2 < a1 )
 return a1;
 return result;
}


/* Function: test_control_flow_l1 @ 0x1850 */
int test_control_flow_l1()
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
 return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x1A50 */
int loop_multi_exit(int a1)
{
 int v2; // eax
 int v3; // edx

 switch ( a1 )
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
 if ( a1 != 9 )
 {
 if ( a1 != 10 )
 {
 if ( a1 != 11 )
 {
 if ( a1 != 12 )
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


/* Function: multi_return @ 0x1B30 */
int multi_return(int a1)
{
 int result; // eax

 if ( a1 < 0 )
 return -1;
 result = 2 * a1;
 if ( 2 * a1 > 100 )
 return -2;
 if ( (a1 & 1) != 0 )
 return a1 + 1;
 return result;
}


/* Function: conditional_return @ 0x1B60 */
int conditional_return(int a1)
{
 int result; // eax

 if ( a1 > 0 )
 return 2 * a1;
 result = 0;
 if ( a1 )
 return -a1;
 return result;
}


/* Function: duffs_device @ 0x1B80 */
int duffs_device(int *a1, int *a2, int a3)
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

 v3 = a3;
 v4 = a1;
 v5 = a2;
 if ( a3 <= 0 )
 return -1;
 v6 = (a3 + 7) >> 3;
 switch ( a3 & 7 )
 {
 case 0:
 v7 = a2;
 v8 = a1;
 goto LABEL_4;
 case 1:
 goto _L192;
 case 2:
 v13 = a2;
 v14 = a1;
 goto LABEL_10;
 case 3:
 goto _L190;
 case 4:
 v11 = a2;
 v12 = a1;
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
int loop_complex_cond(int a1)
{
 int result; // eax
 int v2; // edx
 int v3; // ecx
 int v4; // eax

 result = a1;
 if ( a1 > 0 )
 {
 v2 = a1 - 1;
 if ( a1 - 1 <= 2 )
 {
 v4 = 1;
 v3 = 2;
 }
 else
 {
 v2 = a1 - 2;
 if ( a1 - 2 <= 4 )
 {
 v4 = 2;
 v3 = 4;
 }
 else
 {
 v2 = a1 - 3;
 if ( a1 - 3 <= 6 )
 {
 v4 = 3;
 v3 = 6;
 }
 else
 {
 v2 = a1 - 4;
 if ( a1 - 4 <= 8 )
 {
 v4 = 4;
 v3 = 8;
 }
 else
 {
 v2 = a1 - 5;
 if ( a1 - 5 <= 10 )
 {
 v4 = 5;
 v3 = 10;
 }
 else
 {
 v2 = a1 - 6;
 if ( a1 - 6 <= 12 )
 {
 v4 = 6;
 v3 = 12;
 }
 else
 {
 v2 = a1 - 7;
 if ( a1 - 7 <= 14 )
 {
 v4 = 7;
 v3 = 14;
 }
 else
 {
 v2 = a1 - 8;
 if ( a1 - 8 <= 16 )
 {
 v4 = 8;
 v3 = 16;
 }
 else
 {
 v2 = a1 - 9;
 if ( a1 - 9 <= 18 )
 {
 v4 = 9;
 v3 = 18;
 }
 else
 {
 v2 = a1 - 10;
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
int loop_modify_var(int a1)
{
 int v1; // edx
 int v2; // eax
 int i; // ecx
 int v4; // ebx

 v1 = 0;
 if ( a1 > 0 )
 {
 v2 = 1;
 if ( a1 != 1 )
 {
 v1 = 1;
 while ( a1 > v2 + 1 )
 {
 v4 = v2++;
 for ( i = v4; ; i += 3 )
 {
 v1 += v2;
 if ( v2 <= 5 )
 break;
 v2 = i + 4;
 if ( a1 <= i + 4 )
 return v1;
 }
 }
 }
 }
 return v1;
}


/* Function: loop_external_state @ 0x1D90 */
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


/* Function: tail_recursion @ 0x1DB0 */
int tail_recursion(int a1, int a2)
{
 int v2; // eax

 v2 = a1;
 if ( a1 > 1 )
 {
 do
 a2 *= v2--;
 while ( v2 != 1 );
 }
 return a2;
}


/* Function: indirect_recursion_a @ 0x1DE0 */
int indirect_recursion_a(int a1, int a2)
{
 int v2; // edx
 int v3; // eax
 int v4; // ecx
 int v5; // ecx
 int v6; // edx
 int v8; // edx
 int v9; // edx

 v2 = a1;
 v3 = a2;
 v4 = a1;
 if ( a2 <= 0 )
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
int call_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1E90 */
int call_func_ptr_array(unsigned int a1, int a2)
{
 unsigned int v3[7]; // [esp+0h] [ebp-1Ch]

 v3[3] = __readgsdword(0x14u);
 v3[0] = double_value;
 v3[1] = triple_value;
 v3[2] = recursion_factorial;
 if ( a1 > 2 )
 return -1;
 else
 return ((int ( *)(int))v3[a1])(a2);
}


/* Function: call_virtual_func @ 0x1F20 */
int call_virtual_func(int a1, int a2)
{
 return 2 * a2;
}


/* Function: process_with_callback @ 0x1F30 */
int process_with_callback(int a1, int a2, int ( *a3)(int))
{
 int v3; // esi
 int v4; // ebx
 int v6; // [esp-10h] [ebp-2Ch]

 if ( a2 <= 0 )
 return 0;
 v3 = 0;
 v4 = 0;
 do
 {
 v6 = *(unsigned int *)(a1 + 4 * v3++);
 v4 += a3(v6);
 }
 while ( a2 != v3 );
 return v4;
}


/* Function: test_control_flow_l2 @ 0x1F80 */
// bad sp value at call has been detected, the output may be wrong!
unsigned int test_control_flow_l2()
{
 int i; // eax
 unsigned int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // edx
 int j; // ecx
 int v6; // esi
 int k; // eax
 int v9[8]; // [esp+8h] [ebp-4Ch] BYREF
 int v10[8]; // [esp+28h] [ebp-2Ch] BYREF
 unsigned int v11; // [esp+48h] [ebp-Ch]

 v11 = __readgsdword(0x14u);
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
 v9[0] = 1;
 v1 = 0;
 v9[1] = 2;
 v9[2] = 3;
 v9[3] = 4;
 v9[4] = 5;
 v9[5] = 6;
 v9[6] = 7;
 v9[7] = 8;
 do
 v10[v1++] = 0;
 while ( v1 < 8 );
 v2 = duffs_device(v10, v9, 8);
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
 return v11 - __readgsdword(0x14u);
}


/* Function: non_local_jump @ 0x21F0 */
int non_local_jump(int a1)
{
 int v1; // edx

 if ( _setjmp(&jump_buffer) )
 return -1;
 if ( a1 < 0 )
 __longjmp_chk(&jump_buffer, 1, v1, v1);
 if ( a1 > 100 )
 __longjmp_chk(&jump_buffer, 2, 0, 0);
 return 2 * a1;
}


/* Function: cpp_exception @ 0x2270 */
int cpp_exception(int a1)
{
 if ( a1 < 0 )
 return -1;
 if ( a1 > 100 )
 return -2;
 return 2 * a1;
}


/* Function: large_jump_table @ 0x22A0 */
int large_jump_table(unsigned int a1, int a2, int a3)
{
 unsigned int v4[14]; // [esp+0h] [ebp-38h]

 v4[10] = __readgsdword(0x14u);
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
 return -1;
 else
 return ((int ( *)(int, int))v4[a1])(a2, a3);
}


/* Function: conditional_func_ptr @ 0x2380 */
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


/* Function: state_machine @ 0x23C0 */
int state_machine(int a1, int a2)
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
 return 2 * (a1 == 99) + 1;
 return 2;
 }
 return 3;
 }
 return a1 == 1;
}


/* Function: fsm_func_table @ 0x2430 */
int fsm_func_table(int a1, unsigned int a2)
{
 unsigned int v3[8]; // [esp+0h] [ebp-20h]

 v3[4] = __readgsdword(0x14u);
 v3[0] = state_idle;
 v3[1] = state_processing;
 v3[2] = state_done;
 v3[3] = state_error;
 if ( a2 > 3 )
 return 3;
 else
 return ((int (*)(void))v3[a2])();
}


/* Function: computed_goto @ 0x24C0 */
int computed_goto(int a1, unsigned int a2)
{
 if ( a2 <= 3 )
 return 20;
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
int overlapped_code(int a1)
{
 if ( (a1 & 1) != 0 )
 return 3 * a1 + 1;
 else
 return a1 / 2;
}


/* Function: test_control_flow_l3 @ 0x25C0 */
int test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax

 puts(asc_3294);
 v0 = non_local_jump_constprop_0();
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", 15);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
 v2 = computed_goto_constprop_0();
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v2);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 return __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
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






/* FAILED to decompile: __libc_start_main @ 0x60E0 */

/* FAILED to decompile: _setjmp @ 0x60E4 */

/* FAILED to decompile: __stack_chk_fail @ 0x60E8 */

/* FAILED to decompile: __cxa_finalize @ 0x60EC */

/* FAILED to decompile: puts @ 0x60F0 */

/* FAILED to decompile: __printf_chk @ 0x60F4 */

/* FAILED to decompile: __longjmp_chk @ 0x60F8 */

/* Total functions decompiled: 90, failed: 7 */
