/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/1/1_gcc_O2_no_g
 * Processor: pc
 */

/* Forward declarations */
unsigned int test_control_flow_l1(void);
unsigned int test_control_flow_l2(void);
unsigned int test_control_flow_l3(void);

/* External declarations */
void (*_gmon_start__)(void);

/* Stack canary intrinsic for GCC */
static inline unsigned int __readgsdword(unsigned int offset) {
    unsigned int val;
    __asm__ volatile("movl %%gs:%1, %0" : "=r"(val) : "m"(*(const char *)offset));
    return val;
}

/* HIDWORD macro - gets high 32 bits of 64-bit value */
#define HIDWORD(x) ((unsigned int)((((unsigned long long)(x)) >> 32) & 0xFFFFFFFF))

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 return 0;
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" :::);
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


/* Function: sequential_ops @ 0x1430 */
int sequential_ops(int a1, int a2, int a3)
{
 return 2 * (a1 + a2) - a3;
}


/* Function: single_if @ 0x1450 */
int single_if(int a1)
{
 int result; // eax

 result = 2 * a1;
 if ( a1 <= 0 )
 return a1;
 return result;
}


/* Function: if_else @ 0x1470 */
int if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0x1480 */
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


/* Function: nested_if_deep @ 0x14A0 */
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


/* Function: if_elseif_chain @ 0x1500 */
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


/* Function: if_elseif_long @ 0x1540 */
int if_elseif_long(unsigned int a1)
{
 int result; // eax

 result = -1;
 if ( a1 <= 4 )
 return 100 * (a1 + 1);
 return result;
}


/* Jump table for switch_small */
int CSWTCH_56[4] = {0, 10, 20, 30};

/* Function: switch_small @ 0x1560 */
int switch_small(unsigned int a1)
{
 int result; // eax

 result = -1;
 if ( a1 <= 3 )
 return CSWTCH_56[a1];
 return result;
}


/* Function: switch_large @ 0x1590 */
int switch_large(unsigned int a1)
{
 int result; // eax

 result = -1;
 if ( a1 <= 9 )
 return 10 * a1;
 return result;
}


/* Function: switch_default @ 0x15B0 */
int switch_default(int a1)
{
 int result; // eax

 result = 0;
 if ( (unsigned int)(a1 - 1) <= 2 )
 return 100 * a1;
 return result;
}


/* Function: switch_fallthrough @ 0x15D0 */
int switch_fallthrough(int a1)
{
 if ( a1 == 2 )
 return 6;
 if ( a1 == 3 )
 return 21;
 return 2 * (a1 == 1) - 1;
}


/* Function: loop_for_fixed @ 0x1610 */
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


/* Function: loop_while @ 0x1640 */
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


/* Function: loop_dowhile @ 0x1690 */
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


/* Function: loop_nested @ 0x16D0 */
int loop_nested(int a1, int a2)
{
 int result; // eax
 int i; // edx

 result = 0;
 if ( a1 > 0 )
 {
 for ( i = 0; i != a1; ++i )
 {
 if ( a2 > 0 )
 result += a2;
 }
 }
 return result;
}


/* Function: loop_break @ 0x1710 */
int loop_break(int a1)
{
 int result; // eax
 unsigned int v2[9]; // [esp+8h] [ebp-24h]

 v2[5] = __readgsdword(0x14u);
 result = 0;
 v2[1] = 20;
 v2[2] = 30;
 v2[3] = 40;
 v2[4] = 50;
 if ( a1 != 10 )
 {
 while ( ++result != 5 )
 {
 if ( a1 == v2[result] )
 return result;
 }
 return -1;
 }
 return result;
}


/* Function: loop_continue @ 0x1790 */
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
 while ( v1 != a1 + 1 );
 return v2;
}


/* Function: goto_forward @ 0x17D0 */
int goto_forward(int a1)
{
 int v1; // eax

 v1 = a1;
 if ( a1 > 0 )
 v1 = a1 * a1;
 return 2 * v1;
}


/* Function: goto_backward @ 0x17F0 */
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


/* Function: ternary_op @ 0x1820 */
int ternary_op(int a1, int a2)
{
 int result; // eax

 result = a2;
 if ( a2 < a1 )
 return a1;
 return result;
}


/* String constant */
const char asc_3008[] = "Control Flow Tests - Level 1\n";

/* Function: test_control_flow_l1 @ 0x1840 */
unsigned int test_control_flow_l1()
{
 int v0; // eax
 int v1; // eax
 unsigned char v3[4]; // [esp+0h] [ebp-24h]
 int v4; // [esp+4h] [ebp-20h]
 int v5; // [esp+8h] [ebp-1Ch]
 int v6; // [esp+Ch] [ebp-18h]
 int v7; // [esp+10h] [ebp-14h]
 unsigned int v8; // [esp+14h] [ebp-10h]

 v8 = __readgsdword(0x14u);
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
 v4 = 20;
 v0 = 0;
 v5 = 30;
 v6 = 40;
 v7 = 50;
 while ( ++v0 != 5 )
 {
 if ( *(unsigned int *)&v3[4 * v0] == 30 )
 goto LABEL_4;
 }
 v0 = -1;
LABEL_4:
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v0);
 v4 = 20;
 v1 = 0;
 v5 = 30;
 v6 = 40;
 v7 = 50;
 while ( ++v1 != 5 )
 {
 if ( *(unsigned int *)&v3[4 * v1] == 99 )
 goto LABEL_7;
 }
 v1 = -1;
LABEL_7:
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v1);
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", 25);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", -6);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
 return v8 - __readgsdword(0x14u);
}


/* Function: loop_multi_exit @ 0x1AF0 */
int loop_multi_exit(int a1)
{
 int v1; // ecx
 char *v2; // eax
 int v3; // eax
 char v5; // [esp+Ch] [ebp-40h] BYREF
 int v6; // [esp+10h] [ebp-3Ch]
 int v7; // [esp+14h] [ebp-38h]
 int v8; // [esp+18h] [ebp-34h]
 int v9; // [esp+1Ch] [ebp-30h]
 int v10; // [esp+20h] [ebp-2Ch]
 int v11; // [esp+24h] [ebp-28h]
 int v12; // [esp+28h] [ebp-24h]
 int v13; // [esp+2Ch] [ebp-20h]
 int v14; // [esp+30h] [ebp-1Ch]
 int v15; // [esp+34h] [ebp-18h]
 int v16; // [esp+38h] [ebp-14h]
 unsigned int v17; // [esp+3Ch] [ebp-10h]

 v1 = 0;
 v17 = __readgsdword(0x14u);
 v2 = &v5;
 v6 = 2;
 v7 = 3;
 v8 = 4;
 v9 = 5;
 v10 = 6;
 v11 = 7;
 v12 = 8;
 v13 = 9;
 v14 = 10;
 v15 = 11;
 v16 = 12;
 if ( a1 == 1 )
 {
LABEL_7:
 v3 = 0;
 }
 else
 {
 while ( 1 )
 {
 if ( a1 == *((unsigned int *)v2 + 1) )
 {
 v3 = 1;
 return v3 + 10 * v1;
 }
 if ( a1 == *((unsigned int *)v2 + 2) )
 {
 v3 = 2;
 return v3 + 10 * v1;
 }
 if ( a1 == *((unsigned int *)v2 + 3) )
 break;
 ++v1;
 v2 += 16;
 if ( v1 == 3 )
 return -1;
 if ( *(unsigned int *)v2 == a1 )
 goto LABEL_7;
 }
 v3 = 3;
 }
 return v3 + 10 * v1;
}


/* Function: infinite_loop @ 0x1BF0 */
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


/* Function: multi_return @ 0x1C20 */
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


/* Function: conditional_return @ 0x1C50 */
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


/* Function: duffs_device @ 0x1C70 */
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
 goto _L186;
 case 2:
 v13 = a2;
 v14 = a1;
 goto LABEL_10;
 case 3:
 goto _L184;
 case 4:
 v11 = a2;
 v12 = a1;
 goto LABEL_8;
 case 5:
 goto _L182;
 case 6:
 goto _L181;
 case 7:
 while ( 1 )
 {
 v9 = *v5;
 ++v4;
 ++v5;
 *(v4 - 1) = v9;
_L181:
 v10 = *v5;
 ++v4;
 ++v5;
 *(v4 - 1) = v10;
_L182:
 v11 = v5 + 1;
 v12 = v4 + 1;
 *v4 = *v5;
LABEL_8:
 v5 = v11 + 1;
 v4 = v12 + 1;
 *v12 = *v11;
_L184:
 v13 = v5 + 1;
 v14 = v4 + 1;
 *v4 = *v5;
LABEL_10:
 v5 = v13 + 1;
 v4 = v14 + 1;
 *v14 = *v13;
_L186:
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


/* Function: loop_complex_cond @ 0x1D40 */
int loop_complex_cond(int a1)
{
 int v1; // edx
 int v2; // ecx

 if ( a1 <= 0 )
 return a1;
 v1 = a1;
 v2 = 0;
 do
 {
 --v1;
 v2 += 2;
 }
 while ( v2 < v1 && a1 - v1 <= 9 );
 return v2 + a1;
}


/* Function: loop_modify_var @ 0x1D80 */
int loop_modify_var(int a1)
{
 int v1; // ecx
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


/* Function: loop_external_state @ 0x1DB0 */
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


/* Function: tail_recursion @ 0x1DD0 */
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


/* Function: indirect_recursion_a @ 0x1E00 */
int indirect_recursion_a(int a1, int a2)
{
 int v2; // eax
 int v3; // ecx
 int i; // edx
 int v5; // eax
 int v6; // ecx
 int v8; // eax

 v2 = a1;
 v3 = a1;
 if ( a2 <= 0 )
 return v3;
 for ( i = a2 - 2; ; i -= 2 )
 {
 if ( (v2 & 1) == 0 )
 {
 v8 = v2 / 2;
 v3 = v8;
 if ( i == -1 )
 return v3;
 v6 = i;
 v2 = v8 + 1;
 goto LABEL_6;
 }
 v5 = 3 * v2;
 if ( i == -1 )
 break;
 v6 = i;
 v2 = v5 + 2;
LABEL_6:
 if ( !v6 )
 return v2;
 }
 return v5 + 1;
}


/* Function: call_func_ptr @ 0x1E60 */
int call_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1E80 */
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


/* Function: call_virtual_func @ 0x1F10 */
int call_virtual_func(int a1, int a2)
{
 return 2 * a2;
}


/* Function: process_with_callback @ 0x1F20 */
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


/* String constant */
const char asc_3110[] = "Control Flow Tests - Level 2\n";

/* String constant */
const char asc_3294[] = "Control Flow Tests - Level 3\n";

/* Function: test_control_flow_l2 @ 0x1F70 */
// bad sp value at call has been detected, the output may be wrong!
unsigned int test_control_flow_l2()
{
 int v0; // eax
 int i; // eax
 unsigned int v2; // eax
 int v3; // eax
 int v4; // ecx
 int v5; // edx
 int v6; // eax
 int j; // eax
 int *v8; // eax
 int v9; // edx
 int v10; // ecx
 unsigned int v12[5]; // [esp+8h] [ebp-70h] BYREF
 int v13[8]; // [esp+1Ch] [ebp-5Ch] BYREF
 int v14[8]; // [esp+3Ch] [ebp-3Ch] BYREF
 unsigned int v15; // [esp+5Ch] [ebp-1Ch]

 v15 = __readgsdword(0x14u);
 puts(asc_3110);
 v0 = loop_multi_exit(7);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
 for ( i = 0; i != 1001; ++i )
 ;
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", "_ITM_registerTMCloneTable");
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 v13[0] = 1;
 v2 = 0;
 v13[1] = 2;
 v13[2] = 3;
 v13[3] = 4;
 v13[4] = 5;
 v13[5] = 6;
 v13[6] = 7;
 v13[7] = 8;
 do
 v14[v2++] = 0;
 while ( v2 < 8 );
 v3 = duffs_device(v14, v13, 8);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v3);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v4 = 0;
 v5 = 0;
 while ( 1 )
 {
 v6 = v5 + 1;
 if ( v5 + 1 > 9 )
 break;
 v5 += 3;
 v4 += v6;
 if ( v6 <= 5 )
 v5 = v6;
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
 v12[0] = 1;
 v8 = v12;
 v9 = 0;
 v12[1] = 2;
 v10 = 1;
 v12[2] = 3;
 v12[3] = 4;
 v12[4] = 5;
 while ( 1 )
 {
 ++v8;
 v9 += 2 * v10;
 if ( v8 == v13 )
 break;
 v10 = *v8;
 }
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v9);
 return v15 - __readgsdword(0x14u);
}


/* Jump buffer for non-local jumps */
#include <setjmp.h>
jmp_buf jump_buffer;

/* Function: non_local_jump @ 0x2220 */
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


/* Function: cpp_exception @ 0x22A0 */
int cpp_exception(int a1)
{
 if ( a1 < 0 )
 return -1;
 if ( a1 > 100 )
 return -2;
 return 2 * a1;
}


/* Function: large_jump_table @ 0x22D0 */
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


/* Function: conditional_func_ptr @ 0x23B0 */
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


/* Function: state_machine @ 0x23F0 */
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


/* Function: fsm_func_table @ 0x2460 */
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


/* Function: computed_goto @ 0x24F0 */
int computed_goto(int a1, unsigned int a2)
{
 // Computed goto implementation using switch
 // The original assembly used jump table at addresses loc_2548, loc_2568, loc_2578, loc_2588
 if (a2 <= 3)
 {
 switch (a2)
 {
 case 0:
 return a1 * 1;
 case 1:
 return a1 * 2;
 case 2:
 return a1 * 3;
 case 3:
 return a1 * 4;
 }
 }
 return -1;
}


/* Function: obfuscated_cf @ 0x25A0 */
int obfuscated_cf(int a1)
{
 return 2 * a1;
}


/* Function: opaque_predicate @ 0x25B0 */
int opaque_predicate(int a1)
{
 return 2 * a1;
}


/* Function: overlapped_code @ 0x25C0 */
int overlapped_code(int a1)
{
 if ( (a1 & 1) != 0 )
 return 3 * a1 + 1;
 else
 return a1 / 2;
}


/* Function: test_control_flow_l3 @ 0x25F0 */
unsigned int test_control_flow_l3()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 unsigned int v5[4]; // [esp+1Ch] [ebp-20h] BYREF
 unsigned int v6; // [esp+2Ch] [ebp-10h]

 v6 = __readgsdword(0x14u);
 puts(asc_3294);
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
 v5[0] = 0;
 v5[1] = 1;
 v5[2] = 2;
 v5[3] = 3;
 v3 = computed_goto((int)v5, 2u);
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v3);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 return v6 - __readgsdword(0x14u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x275C */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x2760 */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x2770 */
void _stack_chk_fail_local()
{
 __stack_chk_fail();
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* FAILED to decompile: __libc_start_main @ 0x60E0 */

/* FAILED to decompile: _setjmp @ 0x60E4 */

/* FAILED to decompile: __stack_chk_fail @ 0x60E8 */

/* FAILED to decompile: __cxa_finalize @ 0x60EC */

/* FAILED to decompile: puts @ 0x60F0 */

/* FAILED to decompile: __printf_chk @ 0x60F4 */

/* FAILED to decompile: __longjmp_chk @ 0x60F8 */

/* Total functions decompiled: 88, failed: 7 */
