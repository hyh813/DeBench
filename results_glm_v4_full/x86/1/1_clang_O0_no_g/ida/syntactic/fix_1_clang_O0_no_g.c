/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/1/1_clang_O0_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stdbool.h>
#include <stdint.h>

#define HIDWORD(x) (((uint64_t)(x) >> 32) & 0xFFFFFFFF)

void *_gmon_start__ = NULL;

/* Forward declarations */
void frame_dummy(void);
int _do_global_ctors_aux(void);
void _do_global_dtors_aux(void);
int indirect_recursion_b(int a1, int a2);
void loc_2F8B(void);
void loc_2F97(void);
void loc_2FA3(void);
void loc_2FAF(void);
int op_add(int a1, int a2);
int op_sub(int a1, int a2);
int op_mul(int a1, int a2);
int op_div(int a1, int a2);
int op_mod(int a1, int a2);
int op_and(int a1, int a2);
int op_or(long long a1);
int op_xor(int a1, int a2);
int op_shl(int a1, char a2);
int op_shr(int a1, char a2);
int double_value(int a1);
int triple_value(int a1);
int state_idle(int a1);
int state_processing(int a1);
int state_done(void);
int state_error(int a1);

/* Global data variables */
static unsigned int unk_4070[5] = {10, 20, 30, 40, 50};
static unsigned long long unk_4084[3] = {0};
static int unk_468C[8] = {1, 2, 3, 4, 5, 6, 7, 8};
static unsigned char unk_40B4[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
static const char *asc_40C8 = "=== Control Flow Level 1 Tests ===\n";
static const char *asc_4336 = "=== Control Flow Level 2 Tests ===\n";
static const char *asc_452A = "=== Control Flow Level 3 Tests ===\n";
static unsigned int off_6ED4[10] = {(unsigned int)op_add, (unsigned int)op_sub, (unsigned int)op_mul, (unsigned int)op_div, (unsigned int)op_mod, (unsigned int)op_and, (unsigned int)op_or, (unsigned int)op_xor, (unsigned int)op_shl, (unsigned int)op_shr};
jmp_buf jump_buffer;

/* Stub functions */
void frame_dummy(void) {}
int _do_global_ctors_aux(void) { return 0; }
void _do_global_dtors_aux(void) {}

/* Label stubs */
void loc_2F8B(void) {}
void loc_2F97(void) {}
void loc_2FA3(void) {}
void loc_2FAF(void) {}

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" : : : "memory");
}


/* Function: sub_10A0 @ 0x10A0 */
int sub_10A0(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_10DC @ 0x10DC */
void sub_10DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x10E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1219 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x121D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: sequential_ops @ 0x1230 */
int sequential_ops(int a1, int a2, int a3)
{
 return 2 * (a2 + a1) - a3;
}


/* Function: single_if @ 0x1270 */
int single_if(int a1)
{
 if ( a1 > 0 )
 a1 *= 2;
 return a1;
}


/* Function: if_else @ 0x1290 */
int if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0x12C0 */
int nested_if_2(int a1, int a2)
{
 if ( a1 <= 0 )
 return 0;
 if ( a2 <= 0 )
 return a1;
 return a2 + a1;
}


/* Function: nested_if_deep @ 0x1310 */
int nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
 if ( a1 <= 0 )
 return 0;
 if ( a2 <= 0 )
 return 1;
 if ( a3 <= 0 )
 return 2;
 if ( a4 <= 0 )
 return 3;
 if ( a5 <= 0 )
 return 4;
 return 5;
}


/* Function: if_elseif_chain @ 0x13A0 */
int if_elseif_chain(int a1)
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
 return -1;
}


/* Function: if_elseif_long @ 0x1400 */
int if_elseif_long(int a1)
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
 return -1;
}


/* Function: switch_small @ 0x1490 */
int switch_small(int a1)
{
 int v2; // [esp+10h] [ebp-4h]

 switch ( a1 )
 {
 case 0:
 v2 = 15;
 break;
 case 1:
 v2 = 5;
 break;
 case 2:
 v2 = 50;
 break;
 case 3:
 v2 = 2;
 break;
 default:
 v2 = -1;
 break;
 }
 return v2;
}


/* Function: switch_large @ 0x1520 */
int switch_large(int a1)
{
 int v2; // [esp+8h] [ebp-4h]

 switch ( a1 )
 {
 case 0:
 v2 = 0;
 break;
 case 1:
 v2 = 10;
 break;
 case 2:
 v2 = 20;
 break;
 case 3:
 v2 = 30;
 break;
 case 4:
 v2 = 40;
 break;
 case 5:
 v2 = 50;
 break;
 case 6:
 v2 = 60;
 break;
 case 7:
 v2 = 70;
 break;
 case 8:
 v2 = 80;
 break;
 case 9:
 v2 = 90;
 break;
 default:
 v2 = -1;
 break;
 }
 return v2;
}


/* Function: switch_default @ 0x15E0 */
int switch_default(int a1)
{
 switch ( a1 )
 {
 case 1:
 return 100;
 case 2:
 return 200;
 case 3:
 return 300;
 }
 return 0;
}


/* Function: switch_fallthrough @ 0x1660 */
int switch_fallthrough(int a1)
{
 int v2; // [esp+4h] [ebp-4h]

 v2 = 0;
 if ( a1 != 1 )
 {
 if ( a1 != 2 )
 {
 if ( a1 != 3 )
 return -1;
 v2 = 12;
 }
 v2 += 2 * a1;
 }
 return v2 + a1;
}


/* Function: loop_for_fixed @ 0x16E0 */
int loop_for_fixed(int a1)
{
 int i; // [esp+0h] [ebp-8h]
 int v3; // [esp+4h] [ebp-4h]

 v3 = 0;
 for ( i = 0; i < a1; ++i )
 v3 += i;
 return v3;
}


/* Function: loop_while @ 0x1730 */
int loop_while(int a1)
{
 int v3; // [esp+4h] [ebp-4h]

 v3 = 0;
 while ( a1 )
 {
 a1 /= 10;
 ++v3;
 }
 if ( v3 <= 0 )
 return 1;
 else
 return v3;
}


/* Function: loop_dowhile @ 0x1790 */
int loop_dowhile(int a1)
{
 int v2; // [esp+0h] [ebp-4h]

 v2 = 0;
 do
 {
 a1 /= 10;
 ++v2;
 }
 while ( a1 );
 return v2;
}


/* Function: loop_nested @ 0x17D0 */
int loop_nested(int a1, int a2)
{
 int j; // [esp+0h] [ebp-Ch]
 int i; // [esp+4h] [ebp-8h]
 int v5; // [esp+8h] [ebp-4h]

 v5 = 0;
 for ( i = 0; i < a1; ++i )
 {
 for ( j = 0; j < a2; ++j )
 ++v5;
 }
 return v5;
}


/* Function: loop_break @ 0x1840 */
int loop_break(int a1)
{
 int i; // [esp+14h] [ebp-24h]
 unsigned int dest[5]; // [esp+1Ch] [ebp-1Ch] BYREF

 memcpy(dest, &unk_4070, sizeof(dest));
 for ( i = 0; i < 5; ++i )
 {
 if ( dest[i] == a1 )
 return i;
 }
 return -1;
}


/* Function: loop_continue @ 0x18D0 */
int loop_continue(int a1)
{
 int i; // [esp+0h] [ebp-8h]
 int v3; // [esp+4h] [ebp-4h]

 v3 = 0;
 for ( i = 1; i <= a1; ++i )
 {
 if ( i % 2 )
 v3 += i;
 }
 return v3;
}


/* Function: goto_forward @ 0x1930 */
int goto_forward(int a1)
{
 int v2; // [esp+0h] [ebp-4h]

 if ( a1 <= 0 )
 v2 = a1;
 else
 v2 = a1 * a1;
 return 2 * v2;
}


/* Function: goto_backward @ 0x1970 */
int goto_backward(int a1)
{
 int i; // [esp+0h] [ebp-Ch]
 int v3; // [esp+4h] [ebp-8h]

 if ( a1 <= 0 )
 return 1;
 v3 = 1;
 for ( i = 1; i <= a1; ++i )
 v3 *= i;
 return v3;
}


/* Function: ternary_op @ 0x19E0 */
int ternary_op(int a1, int a2)
{
 if ( a1 <= a2 )
 return a2;
 else
 return a1;
}


/* Function: test_control_flow_l1 @ 0x1A10 */
int test_control_flow_l1()
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
 int v12; // eax
 int v13; // eax
 int v14; // eax
 int v15; // eax
 int v16; // eax
 int v17; // eax
 int v18; // eax
 int v19; // eax
 int v20; // eax
 int v21; // eax
 int v22; // eax
 int v23; // eax
 int v24; // eax
 int v25; // eax
 int v26; // eax

 printf(asc_40C8);
 v0 = sequential_ops(5, 7, 3);
 printf("CF-L1-01 (sequential_ops): %d\n", v0);
 v1 = single_if(10);
 printf("CF-L1-02 (single_if): %d\n", v1);
 v2 = single_if(-5);
 printf("CF-L1-02 (single_if): %d\n", v2);
 v3 = if_else(5);
 printf("CF-L1-03 (if_else): %d\n", v3);
 v4 = if_else(-3);
 printf("CF-L1-03 (if_else): %d\n", v4);
 v5 = nested_if_2(10, 5);
 printf("CF-L1-04 (nested_if_2): %d\n", v5);
 v6 = nested_if_2(10, -5);
 printf("CF-L1-04 (nested_if_2): %d\n", v6);
 v7 = nested_if_2(-10, 5);
 printf("CF-L1-04 (nested_if_2): %d\n", v7);
 v8 = nested_if_deep(1, 1, 1, 1, 1);
 printf("CF-L1-05 (nested_if_deep): %d\n", v8);
 v9 = if_elseif_chain(1);
 printf("CF-L1-06 (if_elseif_chain): %d\n", v9);
 v10 = if_elseif_long(3);
 printf("CF-L1-07 (if_elseif_long): %d\n", v10);
 v11 = switch_small(2);
 printf("CF-L1-08 (switch_small): %d\n", v11);
 v12 = switch_large(7);
 printf("CF-L1-09 (switch_large): %d\n", v12);
 v13 = switch_default(5);
 printf("CF-L1-10 (switch_default): %d\n", v13);
 v14 = switch_fallthrough(3);
 printf("CF-L1-11 (switch_fallthrough): %d\n", v14);
 v15 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n", v15);
 v16 = loop_while(12345);
 printf("CF-L1-13 (loop_while): %d\n", v16);
 v17 = loop_dowhile(9876);
 printf("CF-L1-14 (loop_dowhile): %d\n", v17);
 v18 = loop_nested(3, 4);
 printf("CF-L1-15 (loop_nested): %d\n", v18);
 v19 = loop_break(30);
 printf("CF-L1-16 (loop_break): %d\n", v19);
 v20 = loop_break(99);
 printf("CF-L1-16 (loop_break): %d\n", v20);
 v21 = loop_continue(10);
 printf("CF-L1-17 (loop_continue): %d\n", v21);
 v22 = goto_forward(5);
 printf("CF-L1-18 (goto_forward): %d\n", v22);
 v23 = goto_forward(-3);
 printf("CF-L1-18 (goto_forward): %d\n", v23);
 v24 = goto_backward(5);
 printf("CF-L1-19 (goto_backward): %d\n", v24);
 v25 = ternary_op(10, 5);
 printf("CF-L1-20 (ternary_op): %d\n", v25);
 v26 = ternary_op(3, 8);
 return printf("CF-L1-20 (ternary_op): %d\n", v26);
}


/* Function: loop_multi_exit @ 0x1E70 */
int loop_multi_exit(int a1)
{
 int j; // [esp+18h] [ebp-40h]
 int i; // [esp+1Ch] [ebp-3Ch]
 unsigned long long dest[3]; // [esp+20h] [ebp-38h] BYREF

 memcpy(dest, &unk_4084, sizeof(dest));
 for ( i = 0; i < 3; ++i )
 {
 for ( j = 0; j < 4; ++j )
 {
 if ( *((unsigned int *)&dest[i] + j) == a1 )
 return j + 10 * i;
 }
 }
 return -1;
}


/* Function: infinite_loop @ 0x1F30 */
int infinite_loop(unsigned int *a1)
{
 int v2; // [esp+0h] [ebp-4h]

 v2 = 0;
 while ( *a1 != 1 )
 {
 if ( ++v2 > 1000 )
 {
 *a1 = 1;
 return v2;
 }
 }
 return v2;
}


/* Function: multi_return @ 0x1F90 */
int multi_return(int a1)
{
 if ( a1 < 0 )
 return -1;
 if ( 2 * a1 > 100 )
 return -2;
 if ( a1 % 2 )
 return a1 + 1;
 return 2 * a1;
}


/* Function: conditional_return @ 0x2000 */
int conditional_return(int a1)
{
 if ( a1 > 0 )
 return 2 * a1;
 if ( a1 >= 0 )
 return 0;
 else
 return -a1;
}


/* Function: duffs_device @ 0x2050 */
int duffs_device(unsigned int *a1, int *a2, int a3)
{
 int v3; // eax
 int *v4; // eax
 int v5; // ecx
 unsigned int *v6; // eax
 int *v7; // eax
 int v8; // ecx
 unsigned int *v9; // eax
 int *v10; // eax
 int v11; // ecx
 unsigned int *v12; // eax
 int *v13; // eax
 int v14; // ecx
 unsigned int *v15; // eax
 int *v16; // eax
 int v17; // ecx
 unsigned int *v18; // eax
 int *v19; // eax
 int v20; // ecx
 unsigned int *v21; // eax
 int *v22; // eax
 int v23; // ecx
 unsigned int *v24; // eax
 int *v25; // eax
 int v26; // ecx
 unsigned int *v27; // eax
 int v29; // [esp+8h] [ebp-8h]

 if ( a3 <= 0 )
 return -1;
 v3 = a3 + 7;
 if ( a3 + 7 < 0 )
 v3 = a3 + 14;
 v29 = v3 >> 3;
 switch ( a3 - (a3 & 0x7FFFFFF8) )
 {
 case 0:
 goto LABEL_6;
 case 1:
 goto LABEL_13;
 case 2:
 goto LABEL_12;
 case 3:
 goto LABEL_11;
 case 4:
 goto LABEL_10;
 case 5:
 goto LABEL_9;
 case 6:
 goto LABEL_8;
 case 7:
 while ( 1 )
 {
 v7 = a2++;
 v8 = *v7;
 v9 = a1++;
 *v9 = v8;
LABEL_8:
 v10 = a2++;
 v11 = *v10;
 v12 = a1++;
 *v12 = v11;
LABEL_9:
 v13 = a2++;
 v14 = *v13;
 v15 = a1++;
 *v15 = v14;
LABEL_10:
 v16 = a2++;
 v17 = *v16;
 v18 = a1++;
 *v18 = v17;
LABEL_11:
 v19 = a2++;
 v20 = *v19;
 v21 = a1++;
 *v21 = v20;
LABEL_12:
 v22 = a2++;
 v23 = *v22;
 v24 = a1++;
 *v24 = v23;
LABEL_13:
 v25 = a2++;
 v26 = *v25;
 v27 = a1++;
 *v27 = v26;
 if ( --v29 <= 0 )
 break;
LABEL_6:
 v4 = a2++;
 v5 = *v4;
 v6 = a1++;
 *v6 = v5;
 }
 break;
 default:
 return a3;
 }
 return a3;
}


/* Function: loop_complex_cond @ 0x21D0 */
int loop_complex_cond(int a1)
{
 bool v2; // [esp+3h] [ebp-Dh]
 int i; // [esp+4h] [ebp-Ch]
 int v5; // [esp+Ch] [ebp-4h]

 v5 = 0;
 for ( i = 0; ; ++i )
 {
 v2 = 0;
 if ( v5 < a1 )
 {
 v2 = 0;
 if ( i < 10 )
 v2 = a1 > 0;
 }
 if ( !v2 )
 break;
 v5 += 2;
 --a1;
 }
 return i + a1 + v5;
}


/* Function: loop_modify_var @ 0x2260 */
int loop_modify_var(int a1)
{
 int i; // [esp+0h] [ebp-8h]
 int v3; // [esp+4h] [ebp-4h]

 v3 = 0;
 for ( i = 0; i < a1; ++i )
 {
 v3 += i;
 if ( i > 5 )
 i += 2;
 }
 return v3;
}


/* Function: loop_external_state @ 0x22C0 */
int loop_external_state(unsigned int *a1)
{
 int i; // [esp+0h] [ebp-4h]

 for ( i = 0; i <= 100; ++i )
 {
 if ( *a1 )
 break;
 }
 return i;
}


/* Function: recursion_factorial @ 0x2310 */
int recursion_factorial(int a1)
{
 if ( a1 > 1 )
 return recursion_factorial(a1 - 1) * a1;
 else
 return 1;
}


/* Function: tail_recursion @ 0x2370 */
int tail_recursion(int a1, int a2)
{
 if ( a1 > 1 )
 return tail_recursion(a1 - 1, a2 * a1);
 else
 return a2;
}


/* Function: indirect_recursion_a @ 0x23D0 */
int indirect_recursion_a(int a1, int a2)
{
 if ( a2 <= 0 )
 return a1;
 if ( a1 % 2 )
 return indirect_recursion_b(3 * a1 + 1, a2 - 1);
 return indirect_recursion_b(a1 / 2, a2 - 1);
}


/* Function: indirect_recursion_b @ 0x2470 */
int indirect_recursion_b(int a1, int a2)
{
 if ( a2 > 0 )
 return indirect_recursion_a(a1 + 1, a2 - 1);
 else
 return a1;
}


/* Function: call_func_ptr @ 0x24D0 */
int call_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x2500 */
int call_func_ptr_array(unsigned int a1, int a2)
{
 unsigned int v3[3]; // [esp+14h] [ebp-14h]

 v3[0] = double_value;
 v3[1] = triple_value;
 v3[2] = recursion_factorial;
 if ( a1 <= 2 )
 return ((int ( *)(int))v3[a1])(a2);
 else
 return -1;
}


/* Function: double_value @ 0x2580 */
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: triple_value @ 0x2590 */
int triple_value(int a1)
{
 return 3 * a1;
}


/* Function: call_virtual_func @ 0x25A0 */
int call_virtual_func(int a1, int a2)
{
 return 2 * a2;
}


/* Function: process_with_callback @ 0x25C0 */
int process_with_callback(int a1, int a2, int ( *a3)(unsigned int))
{
 int i; // [esp+Ch] [ebp-Ch]
 int v5; // [esp+10h] [ebp-8h]

 v5 = 0;
 for ( i = 0; i < a2; ++i )
 v5 += a3(*(unsigned int *)(a1 + 4 * i));
 return v5;
}


/* Function: test_control_flow_l2 @ 0x2630 */
int test_control_flow_l2()
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
 int v12; // eax
 int v13; // eax
 int v14; // eax
 int v15; // eax
 int v16; // eax
 int v17; // eax
 unsigned char v19[20]; // [esp+18h] [ebp-60h] BYREF
 int v20; // [esp+2Ch] [ebp-4Ch] BYREF
 unsigned int s[8]; // [esp+30h] [ebp-48h] BYREF
 int dest[8]; // [esp+50h] [ebp-28h] BYREF
 int v23; // [esp+70h] [ebp-8h] BYREF

 printf(asc_4336);
 v0 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n", v0);
 v23 = 0;
 v1 = infinite_loop(&v23);
 printf("CF-L2-02 (infinite_loop): %d\n", v1);
 v2 = multi_return(-5);
 printf("CF-L2-03 (multi_return): %d\n", v2);
 v3 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n", v3);
 v4 = multi_return(3);
 printf("CF-L2-03 (multi_return): %d\n", v4);
 v5 = conditional_return(5);
 printf("CF-L2-04 (conditional_return): %d\n", v5);
 v6 = conditional_return(-5);
 printf("CF-L2-04 (conditional_return): %d\n", v6);
 memcpy(dest, &unk_468C, sizeof(dest));
 memset(s, 0, sizeof(s));
 v7 = duffs_device(s, dest, 8);
 printf("CF-L2-05 (duffs_device): %d\n", v7);
 v8 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n", v8);
 v9 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n", v9);
 v20 = 0;
 v10 = loop_external_state(&v20);
 printf("CF-L2-08 (loop_external_state): %d\n", v10);
 v11 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n", v11);
 v12 = tail_recursion(5, 1);
 printf("CF-L2-10 (tail_recursion): %d\n", v12);
 v13 = indirect_recursion_a(10, 3);
 printf("CF-L2-11 (indirect_recursion): %d\n", v13);
 v14 = call_func_ptr(double_value, 5);
 printf("CF-L2-12 (call_func_ptr): %d\n", v14);
 v15 = call_func_ptr_array(0, 5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", v15);
 v16 = call_func_ptr_array(2u, 5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", v16);
 memcpy(v19, &unk_40B4, sizeof(v19));
 v17 = process_with_callback((int)v19, 5, double_value);
 return printf("CF-L2-15 (process_with_callback): %d\n", v17);
}


/* Function: non_local_jump @ 0x29A0 */
int non_local_jump(int a1)
{
 if ( _setjmp(&jump_buffer) )
 return -1;
 if ( a1 < 0 )
 longjmp(&jump_buffer, 1);
 if ( a1 > 100 )
 longjmp(&jump_buffer, 2);
 return 2 * a1;
}


/* Function: cpp_exception @ 0x2A40 */
int cpp_exception(int a1)
{
 if ( a1 < 0 )
 return -1;
 if ( a1 <= 100 )
 return 2 * a1;
 return -2;
}


/* Function: large_jump_table @ 0x2A90 */
int large_jump_table(unsigned int a1, int a2, int a3)
{
 unsigned int dest[10]; // [esp+18h] [ebp-30h] BYREF

 memcpy(dest, off_6ED4, sizeof(dest));
 if ( a1 < 0xA )
 return ((int ( *)(int, int))dest[a1])(a2, a3);
 else
 return -1;
}


/* Function: op_add @ 0x2B20 */
int op_add(int a1, int a2)
{
 return a2 + a1;
}


/* Function: op_sub @ 0x2B40 */
int op_sub(int a1, int a2)
{
 return a1 - a2;
}


/* Function: op_mul @ 0x2B60 */
int op_mul(int a1, int a2)
{
 return a2 * a1;
}


/* Function: op_div @ 0x2B80 */
int op_div(int a1, int a2)
{
 if ( a2 )
 return a1 / a2;
 else
 return 0;
}


/* Function: op_mod @ 0x2BC0 */
int op_mod(int a1, int a2)
{
 if ( a2 )
 return a1 % a2;
 else
 return 0;
}


/* Function: op_and @ 0x2C00 */
int op_and(int a1, int a2)
{
 return a2 & a1;
}


/* Function: op_or @ 0x2C20 */
int op_or(long long a1)
{
 return HIDWORD(a1) | a1;
}


/* Function: op_xor @ 0x2C40 */
int op_xor(int a1, int a2)
{
 return a2 ^ a1;
}


/* Function: op_shl @ 0x2C60 */
int op_shl(int a1, char a2)
{
 return a1 << a2;
}


/* Function: op_shr @ 0x2C80 */
int op_shr(int a1, char a2)
{
 return a1 >> a2;
}


/* Function: conditional_func_ptr @ 0x2CA0 */
int conditional_func_ptr(int a1, int a2)
{
 int ( *v3)(int); // [esp+10h] [ebp-8h]

 if ( a1 )
 {
 if ( a1 == 1 )
 v3 = triple_value;
 else
 v3 = recursion_factorial;
 }
 else
 {
 v3 = double_value;
 }
 return v3(a2);
}


/* Function: state_machine @ 0x2D20 */
int state_machine(int a1, int a2)
{
 int v3; // [esp+8h] [ebp-4h]

 switch ( a2 )
 {
 case 0:
 v3 = a1 == 1;
 break;
 case 1:
 if ( a1 == 2 )
 {
 v3 = 2;
 }
 else if ( a1 == 99 )
 {
 v3 = 3;
 }
 else
 {
 v3 = 1;
 }
 break;
 case 2:
 v3 = 2;
 break;
 case 3:
 if ( a1 )
 v3 = 3;
 else
 v3 = 0;
 break;
 default:
 v3 = 3;
 break;
 }
 return v3;
}


/* Function: fsm_func_table @ 0x2E00 */
int fsm_func_table(int a1, unsigned int a2)
{
 unsigned int v3[4]; // [esp+10h] [ebp-18h]

 v3[0] = state_idle;
 v3[1] = state_processing;
 v3[2] = state_done;
 v3[3] = state_error;
 if ( a2 < 4 )
 return ((int ( *)(int))v3[a2])(a1);
 else
 return 3;
}


/* Function: state_idle @ 0x2E80 */
int state_idle(int a1)
{
 return a1 == 1;
}


/* Function: state_processing @ 0x2EA0 */
int state_processing(int a1)
{
 if ( a1 == 2 )
 return 2;
 if ( a1 == 99 )
 return 3;
 return 1;
}


/* Function: state_done @ 0x2EF0 */
int state_done()
{
 return 2;
}


/* Function: state_error @ 0x2F00 */
int state_error(int a1)
{
 int result; // eax

 result = 3;
 if ( !a1 )
 return 0;
 return result;
}


/* Function: computed_goto @ 0x2F20 */
int computed_goto(int a1, unsigned int a2)
{
 void (*v3[4])(void); // [esp+4h] [ebp-14h]

 v3[0] = loc_2F8B;
 v3[1] = loc_2F97;
 v3[2] = loc_2FA3;
 v3[3] = loc_2FAF;
 if ( a2 < 4 )
 v3[a2]();
 return -1;
}


/* Function: obfuscated_cf @ 0x2FD0 */
int obfuscated_cf(int a1)
{
 int v2; // [esp+0h] [ebp-4h]

 v2 = a1;
 if ( a1 * a1 + 1 < 0 )
 v2 = 2 * a1 + 1;
 return 2 * v2;
}


/* Function: opaque_predicate @ 0x3010 */
int opaque_predicate(int a1)
{
 return 2 * a1;
}


/* Function: overlapped_code @ 0x3050 */
int overlapped_code(int a1)
{
 if ( (a1 & 1) != 0 )
 return 3 * a1 + 1;
 else
 return a1 / 2;
}


/* Function: test_control_flow_l3 @ 0x3090 */
int test_control_flow_l3()
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
 unsigned int v13[5]; // [esp+14h] [ebp-14h] BYREF

 printf(asc_452A);
 v0 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n", v1);
 v2 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n", v2);
 v3 = cpp_exception(-5);
 printf("CF-L3-02 (cpp_exception): %d\n", v3);
 v4 = large_jump_table(0, 10, 5);
 printf("CF-L3-03 (large_jump_table): %d\n", v4);
 v5 = conditional_func_ptr(0, 5);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", v5);
 v6 = state_machine(1, 0);
 printf("CF-L3-05 (state_machine): %d\n", v6);
 v7 = fsm_func_table(2, 1u);
 printf("CF-L3-06 (fsm_func_table): %d\n", v7);
 v13[0] = 0;
 v13[1] = 1;
 v13[2] = 2;
 v13[3] = 3;
 v8 = computed_goto((int)v13, 2u);
 printf("CF-L3-07 (computed_goto): %d\n", v8);
 v9 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n", v9);
 v10 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n", v10);
 v11 = overlapped_code(5);
 return printf("CF-L3-10 (overlapped_code): %d\n", v11);
}


/* Function: main @ 0x32D0 */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x335C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x70D4 */

/* FAILED to decompile: printf @ 0x70D8 */

/* FAILED to decompile: longjmp @ 0x70DC */

/* FAILED to decompile: _setjmp @ 0x70E0 */

/* FAILED to decompile: memcpy @ 0x70E4 */

/* FAILED to decompile: __cxa_finalize @ 0x70E8 */

/* FAILED to decompile: memset @ 0x70EC */

/* Total functions decompiled: 80, failed: 7 */
