// Angr Decompilation of 1_clang_O3_g
// Platform: AMD64

#include <stdio.h>
#include <setjmp.h>
#include <stdbool.h>

/* CRT stub function _init removed by preprocessor */
typedef unsigned long long (*struct_0)(void);

extern struct_0 g_405fe0;


// Function: sub_401020 at 0x401020
extern unsigned long long g_406008;
extern unsigned long long g_406010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 return;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1; // rdi

 return puts(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010a5 at 0x4010a5
void sub_4010a5()
{
}


// Function: sub_4010a6 at 0x4010a6
void deregister_tm_clones(void);
void sub_4010a6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones(void)
{
}



// Function: sub_4010d9 at 0x4010d9
void register_tm_clones(void);
void sub_4010d9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */
void register_tm_clones(void)
{
}







// Function: sub_401155 at 0x401155
void sub_401155()
{
}


// Function: sub_401159 at 0x401159
// CRT stub function removed



// Function: sub_401169 at 0x401169
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2);
void sub_401169(unsigned long a0, unsigned long a1, unsigned long a2)
{
 sequential_ops(0, 0, 0);
 return;
}


// Function: sequential_ops at 0x401170
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a0 + a1) * 2 - a2;
}


// Function: sub_401178 at 0x401178
int single_if(unsigned long a0);
void sub_401178(unsigned long a0)
{
 single_if(a0);
 return;
}


// Function: single_if at 0x401180
int single_if(unsigned long a0)
{
 return (a0 & 4294967295) << ((unsigned int)a0 > 0);
}


// Function: sub_40118a at 0x40118a
long long if_else(unsigned int a0);
void sub_40118a(unsigned long a0)
{
 if_else((unsigned int)a0);
 return;
}


// Function: if_else at 0x401190
long long if_else(unsigned int a0)
{
 return a0 > 0;
}


// Function: sub_401198 at 0x401198
unsigned long long nested_if_2(unsigned int a0, unsigned int a1);
void sub_401198(unsigned long a0, unsigned long a1)
{
 nested_if_2((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: nested_if_2 at 0x4011a0
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
{
 if (a0 > 0)
 return (a1 < 0 ? 0 : a1) + a0 & 4294967295;
 return 0;
}


// Function: nested_if_deep at 0x4011b0
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 if (a0 <= 0)
 {
 return 0;
 }
 else if (a1 <= 0)
 {
 return 1;
 }
 else if (a2 <= 0)
 {
 return 2;
 }
 else if (a3 > 0)
 {
 return a4 > 0 | 4;
 }
 else
 {
 return 3;
 }
}


// Function: sub_4011e1 at 0x4011e1
unsigned long long if_elseif_chain(unsigned int a0);
void sub_4011e1(unsigned long a0)
{
 if_elseif_chain((unsigned int)a0);
 return;
}


// Function: if_elseif_chain at 0x4011f0
unsigned long long if_elseif_chain(unsigned int a0)
{
 return (a0 < 3 ? a0 * 10 + 10 : 4294967295);
}


// Function: sub_401203 at 0x401203
unsigned long long if_elseif_long(unsigned int a0);
void sub_401203(unsigned long a0)
{
 if_elseif_long((unsigned int)a0);
 return;
}


// Function: if_elseif_long at 0x401210
unsigned long long if_elseif_long(unsigned int a0)
{
 return (a0 < 5 ? a0 * 100 + 100 : 4294967295);
}


// Function: sub_401222 at 0x401222
unsigned long long switch_small(unsigned int a0);
void sub_401222(unsigned long a0)
{
 switch_small((unsigned int)a0);
 return;
}


// Function: switch_small at 0x401230
extern unsigned int g_403280[4];
unsigned int g_403280[4] = {10, 20, 30, 50};

unsigned long long switch_small(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a0 <= 3)
 v1 = g_403280[a0];
 return v1;
}


// Function: sub_401248 at 0x401248
unsigned long long switch_large(unsigned int a0);
void sub_401248(unsigned long a0)
{
 switch_large((unsigned int)a0);
 return;
}


// Function: switch_large at 0x401250
unsigned long long switch_large(unsigned int a0)
{
 return (a0 < 10 ? a0 * 10 : 4294967295);
}


// Function: sub_401262 at 0x401262
unsigned long long switch_default(unsigned int a0);
void sub_401262(unsigned long a0)
{
 switch_default((unsigned int)a0);
 return;
}


// Function: switch_default at 0x401270
unsigned long long switch_default(unsigned int a0)
{
 unsigned int v1; // edi

 v1 = a0 - 1;
 return (v1 < 3 ? v1 * 100 + 100 : 0);
}


// Function: sub_401282 at 0x401282
unsigned long long switch_fallthrough(unsigned long a0);
void sub_401282(unsigned long a0)
{
 switch_fallthrough(a0);
 return;
}


// Function: switch_fallthrough at 0x401290
unsigned long long switch_fallthrough(unsigned long a0)
{
 unsigned long long v1; // rax

 v1 = 0;
 if ((unsigned int)a0 != 1)
 {
 if ((unsigned int)a0 != 2)
 {
 if ((unsigned int)a0 == 3)
 v1 = 12;
 else
 return 4294967295;
 }
 v1 += a0 * 2;
 }
 return v1 + a0;
}


// Function: sub_4012b1 at 0x4012b1
unsigned long long loop_for_fixed(unsigned long a0);
void sub_4012b1(unsigned long a0)
{
 loop_for_fixed(a0);
 return;
}


// Function: loop_for_fixed at 0x4012c0
unsigned long long loop_for_fixed(unsigned long a0)
{
 if ((unsigned int)a0 <= 0)
 return 0;
 return (unsigned int)((a0 - 1 & 4294967295) * (a0 - 2 & 4294967295) >> 1) + (unsigned int)a0 - 1;
}


// Function: sub_4012db at 0x4012db
unsigned long long loop_while(unsigned int a0);
void sub_4012db(unsigned long a0)
{
 loop_while((unsigned int)a0);
 return;
}


// Function: loop_while at 0x4012e0
unsigned long long loop_while(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned long v3; // rcx
 unsigned int v4; // eax

 if (!a0)
 return 1;
 v1 = 0;
 do
 {
 a0 = (unsigned int)(a0 * 1717986919 >> 34) + (unsigned int)(a0 * 1717986919 >> 63);
 v4 = v1 + 1;
 v1 = v4;
 } while ((unsigned int)v3 + 9 > 18);
 return v2 + 1;
}


// Function: sub_401319 at 0x401319
long long loop_dowhile(unsigned int a0);
void sub_401319()
{
 loop_dowhile(0);
 return;
}


// Function: loop_dowhile at 0x401320
long long loop_dowhile(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned long v3; // rcx
 unsigned int v4; // eax

 v1 = 0;
 do
 {
 a0 = (unsigned int)(a0 * 1717986919 >> 34) + (unsigned int)(a0 * 1717986919 >> 63);
 v4 = v1 + 1;
 v1 = v4;
 } while ((unsigned int)v3 + 9 > 18);
 return v2 + 1;
}


// Function: sub_401353 at 0x401353
unsigned long long loop_nested(unsigned int a0, unsigned int a1);
void sub_401353(unsigned long a0, unsigned long a1)
{
 loop_nested((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: loop_nested at 0x401360
unsigned long long loop_nested(unsigned int a0, unsigned int a1)
{
 if (a0 > 0)
 return (a1 <= 0 ? 0 : a0 * a1);
 return 0;
}


// Function: sub_401372 at 0x401372
unsigned long long loop_break(unsigned int a0);
void sub_401372(unsigned long a0)
{
 loop_break((unsigned int)a0);
 return;
}


// Function: loop_break at 0x401380

unsigned long long loop_break(unsigned int a0)
{
 unsigned long long v1; // rax

 switch (a0)
 {
 case 20:
 return 1;
 case 30:
 return 2;
 case 40:
 return 3;
 case 50:
 v1 = 4;
 case 10:
 return v1;
 default:
 return 4294967295;
 }
}


// Function: sub_4013b8 at 0x4013b8
unsigned long long loop_continue(unsigned int a0);
void sub_4013b8(unsigned long a0)
{
 loop_continue((unsigned int)a0);
 return;
}


// Function: loop_continue at 0x4013c0
unsigned long long loop_continue(unsigned int a0)
{
 unsigned long long v1;
 unsigned int j;

 if (a0 <= 0)
 return 0;
 if (a0 < 8)
 {
 v1 = 0;
 j = 1;
 }
 else
 {
 v1 = 0;
 j = 1;
 }
 do
 {
 v1 += (-(j & 1) & j);
 j = j + 1;
 } while (a0 + 1 != j);
 return v1 + (-(j & 1) & j);
}


// Function: sub_40152d at 0x40152d
unsigned int goto_forward(unsigned int a0);
void sub_40152d(unsigned long a0)
{
 goto_forward((unsigned int)a0);
 return;
}


// Function: goto_forward at 0x401530
unsigned int goto_forward(unsigned int a0)
{
 return a0 * (a0 > 0 ? a0 : 1) * 2;
}


// Function: goto_backward at 0x401540
unsigned long long goto_backward(unsigned int a0);
unsigned long long goto_backward(unsigned int a0)
{
 unsigned long long v1;
 unsigned long long v2;
 unsigned int v3;

 if (a0 <= 0)
 return 1;
 v1 = 1;
 v2 = 1;
 v3 = a0 & 0xfffffff8;
 if (v3 == a0)
 {
 v1 = 1;
 v2 = 1;
 }
 else
 {
 v1 = v3 | 1;
 }
 do
 {
 v2 = v1 * v2;
 v1 = (unsigned int)v1 + 1;
 } while (a0 + 1 != (unsigned int)v1);
 return v2;
}


// Function: sub_40179b at 0x40179b
long long ternary_op(unsigned int a0, unsigned int a1);
void sub_40179b(unsigned long a0, unsigned long a1)
{
 ternary_op((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: ternary_op at 0x4017a0
long long ternary_op(unsigned int a0, unsigned int a1)
{
 return (a1 < a0 ? a0 : a1);
}


// Function: sub_4017a8 at 0x4017a8
int test_control_flow_l1(void);
void sub_4017a8()
{
 test_control_flow_l1();
 return;
}


// Function: test_control_flow_l1 at 0x4017b0
extern char g_4037e5;
char g_4037e5 = 'A';

int test_control_flow_l1()
{
 puts(&g_4037e5);
 printf("CF-L1-01 (sequential_ops): %d\n", 21);
 printf("CF-L1-02 (single_if): %d\n", 20);
 printf("CF-L1-02 (single_if): %d\n", 4294967291);
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
 printf("CF-L1-16 (loop_break): %d\n", 4294967295);
 printf("CF-L1-17 (loop_continue): %d\n", 25);
 printf("CF-L1-18 (goto_forward): %d\n", 50);
 printf("CF-L1-18 (goto_forward): %d\n", 4294967290);
 printf("CF-L1-19 (goto_backward): %d\n", 120);
 printf("CF-L1-20 (ternary_op): %d\n", 10);
 return printf("CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: sub_4019ac at 0x4019ac
unsigned long long loop_multi_exit(unsigned int a0);
void sub_4019ac(unsigned long a0)
{
 loop_multi_exit((unsigned int)a0);
 return;
}


// Function: loop_multi_exit at 0x4019b0
extern unsigned int g_4030d8[4];
extern unsigned int g_403108[4];
unsigned int g_4030d8[4] = {1, 2, 3, 4};
unsigned int g_403108[4] = {5, 6, 7, 8};

unsigned long long loop_multi_exit(unsigned int a0)
{
 unsigned int v1; // edi
 unsigned long long v2; // rax

 v1 = a0 - 1;
 v2 = 4294967295;
 if (v1 <= 11)
 v2 = g_403108[v1] + g_4030d8[v1];
 return v2;
}


// Function: sub_4019d5 at 0x4019d5
unsigned long long infinite_loop(unsigned int *ptr);
void sub_4019d5(unsigned long a0)
{
 infinite_loop((unsigned int *)a0);
 return;
}


// Function: infinite_loop at 0x4019e0
unsigned long long infinite_loop(unsigned int *ptr)
{
 unsigned int v1; // eax
 unsigned int v2; // eax

 v1 = 0;
 if (*(ptr) == 1)
 return 0;
 while (1)
 {
 v2 = v1;
 if (v2 == 1000)
 {
 *(ptr) = 1;
 return 1001;
 }
 else if (*(ptr) == 1)
 {
 return v2 + 1;
 }
 else if (*(ptr) == 1)
 {
 return v2 + 2;
 }
 else if (*(ptr) != 1)
 {
 v1 = v2 + 4;
 if (*(ptr) == 1)
 return v2 + 4;
 }
 else
 {
 return v2 + 3;
 }
 }
}


// Function: sub_401a2f at 0x401a2f
unsigned long long multi_return(unsigned int a0);
void sub_401a2f(unsigned long a0)
{
 multi_return((unsigned int)a0);
 return;
}


// Function: multi_return at 0x401a30
unsigned long long multi_return(unsigned int a0)
{
 unsigned long long v1; // rax

 if (a0 < 0)
 return 4294967295;
 v1 = 4294967294;
 if (a0 <= 50)
 v1 = (!((char)a0 & 1) ? a0 * 2 : a0 + 1);
 return v1;
}


// Function: sub_401a54 at 0x401a54
unsigned int conditional_return(unsigned int a0);
void sub_401a54(unsigned long a0)
{
 conditional_return((unsigned int)a0);
 return;
}


// Function: conditional_return at 0x401a60
unsigned int conditional_return(unsigned int a0)
{
 if (a0 <= 0)
 return -(a0);
 return a0 * 2;
}


// Function: sub_401a6d at 0x401a6d
unsigned int duffs_device(unsigned int a0, unsigned int a1, unsigned int a2);
void sub_401a6d(unsigned long a0, unsigned long a1, unsigned long a2)
{
 duffs_device((unsigned int)a0, (unsigned int)a1, (unsigned int)a2);
 return;
}


// Function: duffs_device at 0x401a70
unsigned int duffs_device(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}

// Function: sub_401b05 at 0x401b05
int loop_complex_cond(unsigned int a0);
void sub_401b05(unsigned long a0)
{
 loop_complex_cond((unsigned int)a0);
 return;
}


// Function: loop_complex_cond at 0x401b10
int loop_complex_cond(unsigned int a0)
{
 unsigned int v1; // edx
 unsigned int v2; // eax
 unsigned int v3; // edx
 unsigned int v4; // esi
 unsigned int v5; // edx

 if (a0 <= 0)
 return 0 + a0;
 v1 = 0;
 v2 = 0;
 do
 {
 v3 = v1;
 v2 += 2;
 a0 -= 1;
 } while (v4 >= 2 && v2 < a0 && (v5 = v3 + 1, v1 = v3 + 1, v3 < 9));
 return v2 + a0 + v3 + 1;
}


// Function: sub_401b49 at 0x401b49
unsigned long long loop_modify_var(unsigned int a0);
void sub_401b49(unsigned long a0)
{
 loop_modify_var((unsigned int)a0);
 return;
}


// Function: loop_modify_var at 0x401b50
unsigned long long loop_modify_var(unsigned int a0)
{
 unsigned long long v1; // rcx
 unsigned long long v2; // rax
 unsigned long long v3; // rax
 unsigned long long v4; // rcx
 unsigned long long v5; // rax
 unsigned int v6; // edx
 unsigned long v7; // rcx

 if (a0 <= 0)
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 v5 = v2 + v1;
 } while ((v6 = ((unsigned int)v4 < 6 ? (unsigned int)v4 : (unsigned int)v4 + 2) + 1, v7 = (unsigned long long)v6, v1 = (unsigned long long)v6, v2 = v5, v6 < a0));
 return v3 + v4;
}


// Function: sub_401b78 at 0x401b78
unsigned long long loop_external_state(unsigned int *a0);
void sub_401b78(unsigned long a0)
{
 loop_external_state((unsigned int *)a0);
 return;
}


// Function: loop_external_state at 0x401b80
unsigned long long loop_external_state(unsigned int *a0)
{
 unsigned int v1; // eax
 unsigned int v2; // eax

 v1 = 0;
 if (*(a0))
 return 0;
 while (1)
 {
 v2 = v1;
 if (v2 == 100)
 {
 return 101;
 }
 else if (*(a0))
 {
 return v2 + 1;
 }
 else if (*(a0))
 {
 return v2 + 2;
 }
 else if (!*(a0))
 {
 v1 = v2 + 4;
 if (*(a0))
 return v2 + 4;
 }
 else
 {
 return v2 + 3;
 }
 }
}


// Function: sub_401bbf at 0x401bbf
unsigned long long recursion_factorial(unsigned long long a0);
void sub_401bbf(unsigned long a0)
{
 recursion_factorial(a0);
 return;
}


// Function: recursion_factorial at 0x401bc0
unsigned long long recursion_factorial(unsigned long long a0)
{
 if (a0 < 2)
 return 1;
 return a0 * recursion_factorial(a0 - 1);
}


// Function: sub_401e2e at 0x401e2e
unsigned long long tail_recursion(unsigned long long a0, unsigned int a1);
void sub_401e2e(unsigned long a0, unsigned long a1)
{
 tail_recursion(a0, (unsigned int)a1);
 return;
}


// Function: tail_recursion at 0x401e30
unsigned long long tail_recursion(unsigned long long a0, unsigned int a1)
{
 if (a0 < 2)
 return a1;
 return tail_recursion(a0 - 1, a0 * a1);
}


// Function: sub_40208e at 0x40208e
long long indirect_recursion_a(unsigned int a0, unsigned int a1);
void sub_40208e(unsigned long a0, unsigned long a1)
{
 indirect_recursion_a((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: indirect_recursion_a at 0x402090
long long indirect_recursion_a(unsigned int a0, unsigned int a1)
{
 unsigned long v1; // rax
 unsigned int v2; // esi

 v1 = a0;
 if (a1 <= 0)
 return a0;
 v2 = a1 + 2;
 while (true)
 {
 if (!((char)v1 & 1))
 {
 if (v2 != 3)
 v1 = (((unsigned int)v1 >> 31) + (unsigned int)v1 >> 1) + 1;
 else
 return ((unsigned int)v1 >> 31) + (unsigned int)v1 >> 1;
 }
 else
 {
 if (v2 != 3)
 v1 = (unsigned int)v1 * 3 + 2;
 else
 return (unsigned int)v1 * 3 + 1;
 }
 v2 -= 2;
 if (v2 < 3)
 return v1;
 }
}


// Function: sub_40209b at 0x40209b
unsigned long long state_done(void);
void sub_40209b()
{
}


// Function: sub_4020c1 at 0x4020c1
void sub_4020c1()
{
}


// Function: sub_4020e4 at 0x4020e4
long long call_func_ptr(unsigned long a0, unsigned long a1);
void sub_4020e4(unsigned long a0, unsigned long a1)
{
 call_func_ptr(a0, a1);
 return;
}


// Function: call_func_ptr at 0x4020f0
long long call_func_ptr(unsigned long a0, unsigned long a1)
{
 return a0;
}


// Function: sub_4020f7 at 0x4020f7
unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1);
void sub_4020f7(unsigned long a0)
{
 call_func_ptr_array((unsigned int)a0, a0);
 return;
}


// Function: call_func_ptr_array at 0x402100

unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1)
{
 switch (a0)
 {
 case 0:
 break;
 default:
 return 4294967295;
 }
}


// Function: sub_402119 at 0x402119
unsigned int double_value(unsigned int a0);
void sub_402119(unsigned long a0)
{
 double_value((unsigned int)a0);
 return;
}


// Function: double_value at 0x402120
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402124 at 0x402124
unsigned int triple_value(unsigned int a0);
void sub_402124(unsigned long a0)
{
 triple_value((unsigned int)a0);
 return;
}


// Function: triple_value at 0x402130
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_402134 at 0x402134
unsigned int call_virtual_func(unsigned long a0, unsigned int a1);
void sub_402134(unsigned long a0, unsigned long a1)
{
 call_virtual_func(a0, (unsigned int)a1);
 return;
}


// Function: call_virtual_func at 0x402140
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: sub_402144 at 0x402144
unsigned int process_with_callback(unsigned long a0, unsigned int a1, unsigned long long (*a2)(int));
void sub_402144(unsigned long a0, unsigned long a1)
{
 process_with_callback(a0, (unsigned int)a1, (unsigned long long (*)(int))a1);
 return;
}


// Function: process_with_callback at 0x402150
typedef unsigned long long (*callback_func)(int);
unsigned int process_with_callback(unsigned long a0, unsigned int a1, callback_func a2)
{
 unsigned long i; // rbx
 unsigned long long v2; // rbp

 if (a1 <= 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v2 += a2(*((int *)(a0 + i * 4)));
 i += 1;
 } while (a1 != i);
 return v2;
}


// Function: sub_402191 at 0x402191
int test_control_flow_l2(void);
void sub_402191()
{
 test_control_flow_l2();
 return;
}


// Function: test_control_flow_l2 at 0x4021a0
extern char g_403809;
char g_403809 = 'L';

int test_control_flow_l2()
{
 unsigned int cur; // ebx
 unsigned int v4; // ebp
 unsigned int v5; // ebx
 unsigned int v6; // eax
 unsigned int v7; // ebx
 unsigned int iter; // ebp
 unsigned int v0; // [bp-0x20]
 unsigned int result; // [bp-0x1c]

 puts(&g_403809);
 cur = 0;
 printf("CF-L2-01 (loop_multi_exit): %d\n", 12);
 v0 = 0;
 if (v0 != 1)
 {
 do
 {
 if (cur == 1000)
 {
 v0 = 1;
 cur = 1001;
 break;
 }
 else if (v0 == 1)
 {
 cur += 1;
 break;
 }
 else if (v0 == 1)
 {
 cur += 2;
 break;
 }
 else if (v0 == 1)
 {
 cur += 3;
 break;
 }
 } while ((cur += 4, v0 != 1));
 }
 printf("CF-L2-02 (infinite_loop): %d\n", cur);
 v4 = 4294967295;
 printf("CF-L2-03 (multi_return): %d\n", 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", 4294967294);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v5 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 printf("CF-L2-05 (duffs_device): %d\n", 8);
 v6 = 11;
 do
 {
 v7 = v5 + 2;
 } while (v5 - 8 < v6 - 2 && (v4 += 1, v6 -= 1, v5 = v7, v4 < 9));
 iter = 0;
 printf("CF-L2-06 (loop_complex_cond): %d\n", v7);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 result = 0;
 if (!result)
 {
 do
 {
 if (iter == 100)
 {
 iter = 101;
 break;
 }
 else if (result)
 {
 iter += 1;
 break;
 }
 else if (result)
 {
 iter += 2;
 break;
 }
 else if (result)
 {
 iter += 3;
 break;
 }
 } while ((iter += 4, !result));
 }
 printf("CF-L2-08 (loop_external_state): %d\n", iter);
 printf("CF-L2-09 (recursion_factorial): %d\n", 120);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 printf("CF-L2-11 (indirect_recursion): %d\n", 3);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
 return printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


// Function: sub_4023e6 at 0x4023e6
unsigned int non_local_jump(unsigned int a0);
void sub_4023e6(unsigned long a0)
{
 non_local_jump((unsigned int)a0);
 return;
}


// Function: non_local_jump at 0x4023f0
jmp_buf jump_buffer;

unsigned int non_local_jump(unsigned int a0)
{
 if (a0 < 0)
 {
 return 4294967295;
 }
 else if (a0 < 101)
 {
 return a0 * 2;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_40243f at 0x40243f
unsigned long long cpp_exception(unsigned int a0);
void sub_40243f(unsigned long a0)
{
 cpp_exception((unsigned int)a0);
 return;
}


// Function: cpp_exception at 0x402440
unsigned long long cpp_exception(unsigned int a0)
{
 return (a0 >= 0 ? (a0 < 101 ? a0 * 2 : 4294967294) : 4294967295);
}


// Function: sub_402459 at 0x402459
unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2);
void sub_402459(unsigned long a0)
{
 large_jump_table((unsigned int)a0, a0, a0);
 return;
}


// Function: large_jump_table at 0x402460

unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2)
{
 switch (a0)
 {
 case 0:
 break;
 default:
 return 4294967295;
 }
}


// Function: sub_40247b at 0x40247b
int op_add(unsigned int a0, unsigned int a1);
void sub_40247b(unsigned long a0, unsigned long a1)
{
 op_add((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_add at 0x402480
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_402484 at 0x402484
int op_sub(unsigned long a0, unsigned int a1);
void sub_402484(unsigned long a0, unsigned long a1)
{
 op_sub(a0, (unsigned int)a1);
 return;
}


// Function: op_sub at 0x402490
int op_sub(unsigned long a0, unsigned int a1)
{
 return (a0 & 4294967295) - a1;
}


// Function: sub_402495 at 0x402495
int op_mul(unsigned int a0, unsigned int a1);
void sub_402495(unsigned long a0, unsigned long a1)
{
 op_mul((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_mul at 0x4024a0
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: sub_4024a6 at 0x4024a6
unsigned long long op_div(unsigned int a0, unsigned long a1);
void sub_4024a6(unsigned long a0, unsigned long a1)
{
 op_div((unsigned int)a0, a1);
 return;
}


// Function: op_div at 0x4024b0
unsigned long long op_div(unsigned int a0, unsigned long a1)
{
 if (!(unsigned int)a1)
 return 0;
 return (unsigned long long)((long long)(int)a0 / (long long)(a1 & 4294967295)) & 4294967295;
}


// Function: sub_4024bd at 0x4024bd
unsigned long long op_mod(unsigned int a0, unsigned long a1);
void sub_4024bd(unsigned long a0, unsigned long a1)
{
 op_mod((unsigned int)a0, a1);
 return;
}


// Function: op_mod at 0x4024c0
unsigned long long op_mod(unsigned int a0, unsigned long a1)
{
 if (!(unsigned int)a1)
 return 0;
 return (unsigned long long)((long long)(int)a0 % (long long)(a1 & 4294967295)) & 4294967295;
}


// Function: sub_4024cf at 0x4024cf
unsigned int op_and(unsigned int a0, unsigned int a1);
void sub_4024cf(unsigned long a0, unsigned long a1)
{
 op_and((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_and at 0x4024d0
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: sub_4024d5 at 0x4024d5
unsigned int op_or(unsigned int a0, unsigned int a1);
void sub_4024d5(unsigned long a0, unsigned long a1)
{
 op_or((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_or at 0x4024e0
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: sub_4024e5 at 0x4024e5
int op_xor(unsigned int a0, unsigned int a1);
void sub_4024e5(unsigned long a0, unsigned long a1)
{
 op_xor((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: op_xor at 0x4024f0
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: sub_4024f5 at 0x4024f5
int op_shl(unsigned long a0, char a1);
void sub_4024f5(unsigned long a0, unsigned long a1)
{
 op_shl(a0, (char)a1);
 return;
}


// Function: op_shl at 0x402500
int op_shl(unsigned long a0, char a1)
{
 return (a0 & 4294967295) << (a1 & 31);
}


// Function: sub_402507 at 0x402507
int op_shr(unsigned long a0, char a1);
void sub_402507(unsigned long a0, unsigned long a1)
{
 op_shr(a0, (char)a1);
 return;
}


// Function: op_shr at 0x402510
int op_shr(unsigned long a0, char a1)
{
 return (a0 & 4294967295) >> (a1 & 31);
}


// Function: sub_402517 at 0x402517
long long conditional_func_ptr(unsigned int a0, unsigned long a1);
void sub_402517(unsigned long a0, unsigned long a1)
{
 conditional_func_ptr((unsigned int)a0, a1);
 return;
}


// Function: conditional_func_ptr at 0x402520
typedef long long (*func_ptr_type)(unsigned int, unsigned long);
long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
 func_ptr_type v1; // rcx

 v1 = (a0 == 1 ? (func_ptr_type)triple_value : (func_ptr_type)recursion_factorial);
 if (!a0)
 v1 = (func_ptr_type)double_value;
 return (*v1)(a0, a1);
}


// Function: sub_402546 at 0x402546
long long state_machine(unsigned int a0, unsigned int a1);
void sub_402546(unsigned long a0, unsigned long a1)
{
 state_machine((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: state_machine at 0x402550

long long state_machine(unsigned int a0, unsigned int a1)
{
 unsigned long v1; // rax

 switch (a1)
 {
 case 0:
 return a0 == 1;
 case 1:
 return (a0 == 2 ? a0 : (a0 == 99) * 2 + 1);
 case 2:
 return v1;
 case 3:
 return (a0) * 3;
 default:
 v1 = 3;
 return v1;
 }
}


// Function: sub_402597 at 0x402597
unsigned long long fsm_func_table(unsigned long a0, unsigned int a1);
void sub_402597(unsigned long a0, unsigned long a1)
{
 fsm_func_table(a0, (unsigned int)a1);
 return;
}


// Function: fsm_func_table at 0x4025a0

unsigned long long fsm_func_table(unsigned long a0, unsigned int a1)
{
 switch (a1)
 {
 case 0:
 break;
 default:
 return 3;
 }
}


// Function: sub_4025b7 at 0x4025b7
long long state_idle(unsigned int a0);
void sub_4025b7(unsigned long a0)
{
 state_idle((unsigned int)a0);
 return;
}


// Function: state_idle at 0x4025c0
long long state_idle(unsigned int a0)
{
 return a0 == 1;
}


// Function: sub_4025c9 at 0x4025c9
long long state_processing(unsigned int a0);
void sub_4025c9(unsigned long a0)
{
 state_processing((unsigned int)a0);
 return;
}


// Function: state_processing at 0x4025d0
long long state_processing(unsigned int a0)
{
 return (a0 == 2 ? a0 : (a0 == 99) * 2 + 1);
}


// Function: sub_4025e4 at 0x4025e4
void sub_4025e4()
{
 state_done();
 return;
}


// Function: state_done at 0x4025f0
unsigned long long state_done()
{
 return 2;
}


// Function: sub_4025f6 at 0x4025f6
long long state_error(unsigned int a0);
void sub_4025f6(unsigned long a0)
{
 state_error((unsigned int)a0);
 return;
}


// Function: state_error at 0x402600
long long state_error(unsigned int a0)
{
 return (a0) * 3;
}


// Function: sub_40260b at 0x40260b
unsigned long long computed_goto(unsigned long a0, unsigned int a1);
void sub_40260b(unsigned long a0, unsigned long a1)
{
 computed_goto(a0, (unsigned int)a1);
 return;
}


// Function: computed_goto at 0x402610

unsigned long long computed_goto(unsigned long a0, unsigned int a1)
{
 switch (a1)
 {
 case 0:
 return 0;
 case 1:
 return 10;
 case 2:
 return 20;
 case 3:
 return 30;
 default:
 return 4294967295;
 }
}


// Function: sub_40263c at 0x40263c
unsigned int obfuscated_cf(unsigned int a0);
void sub_40263c(unsigned long a0)
{
 obfuscated_cf((unsigned int)a0);
 return;
}


// Function: obfuscated_cf at 0x402640
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402644 at 0x402644
unsigned int opaque_predicate(unsigned int a0);
void sub_402644(unsigned long a0)
{
 opaque_predicate((unsigned int)a0);
 return;
}


// Function: opaque_predicate at 0x402650
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402654 at 0x402654
int overlapped_code(unsigned int a0);
void sub_402654(char a0)
{
 overlapped_code((unsigned int)a0);
 return;
}


// Function: overlapped_code at 0x402660
int overlapped_code(unsigned int a0)
{
 if (((char)a0 & 1))
 return a0 * 3 + 1;
 return ((a0 >> 31) + a0 & 4294967295) >> 1;
}


// Function: sub_402677 at 0x402677
int test_control_flow_l3(void);
void sub_402677()
{
 test_control_flow_l3();
 return;
}


// Function: test_control_flow_l3 at 0x402680
extern char g_40382d;
char g_40382d = 'C';

int test_control_flow_l3()
{
 unsigned int v3; // rdi

 puts(&g_40382d);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", 4294967295);
 printf("CF-L3-03 (large_jump_table): %d\n", 15);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 printf("CF-L3-06 (fsm_func_table): %d\n", 2);
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto(v3, 2) & 4294967295);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


// Function: sub_402785 at 0x402785
unsigned int main(void);
void sub_402785()
{
 main();
 return;
}


// Function: main at 0x402790
unsigned int main()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 0;
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


