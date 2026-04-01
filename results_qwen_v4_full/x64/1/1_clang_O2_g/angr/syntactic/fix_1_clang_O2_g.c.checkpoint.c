// Angr Decompilation of 1_clang_O2_g
// Platform: AMD64

#include <stdio.h>
#include <setjmp.h>
#include <stdbool.h>

/* CRT stub function _init removed by preprocessor */
typedef unsigned long long *(*struct_0)(void);

struct_0 g_405fe0 = 0;

/* Forward declarations */
int test_control_flow_l2(void);
unsigned long long state_done(void);
int test_control_flow_l3(void);
unsigned int main(void);

/* Stub functions for decompiled SIMD operations */
static unsigned long long AddV(unsigned long long a, unsigned long long b) { return a + b; }
static int CmpEQV(unsigned long long a, unsigned long long b) { return (a == b) ? -1 : 0; }
static unsigned long long InterleaveLOV(unsigned long long a, unsigned long long b) { return a + b; }




// Function: sub_401020 at 0x401020
extern unsigned long long g_406008;
extern unsigned long long g_406010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 (void)v0;
 (void)g_406010;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1 = "test"; // rdi

 return puts(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010a5 at 0x4010a5
void sub_4010a5()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4198565 */
}














// Function: sub_401155 at 0x401155
void sub_401155()
{
}






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
 if_else(a0);
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
 nested_if_2(a0, a1);
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
 if_elseif_chain(a0);
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
 if_elseif_long(a0);
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
 switch_small(a0);
 return;
}


// Function: switch_small at 0x401230
unsigned int g_403280[4] = {50, 60, 70, 80};

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
 switch_large(a0);
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
 switch_default(a0);
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
 loop_while(a0);
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
unsigned long long loop_nested(unsigned long a0, unsigned int a1);
void sub_401353(unsigned long a0, unsigned long a1)
{
 loop_nested(a0, a1);
 return;
}


// Function: loop_nested at 0x401360
unsigned long long loop_nested(unsigned long a0, unsigned int a1)
{
 if ((unsigned int)a0 <= 0)
 return 0;
 return a0 * (a1 <= 0 ? 0 : a1) & 4294967295;
}


// Function: loop_break at 0x401370

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


// Function: sub_4013a8 at 0x4013a8
unsigned long long loop_continue(unsigned int a0);
void sub_4013a8(unsigned long a0)
{
 loop_continue(a0);
 return;
}


// Function: loop_continue at 0x4013b0
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
 j = (a0 & 0xfffffff8) | 1;
 }
 do
 {
 v1 = v1 + (-(j & 1) & j);
 j = j + 1;
 } while (a0 + 1 != j);
 return v1 + (-(j & 1) & j);
}


// Function: sub_40151d at 0x40151d
unsigned int goto_forward(unsigned int a0);
void sub_40151d(unsigned long a0)
{
 goto_forward(a0);
 return;
}


// Function: goto_forward at 0x401520
unsigned int goto_forward(unsigned int a0)
{
 return a0 * (a0 > 0 ? a0 : 1) * 2;
}


// Function: goto_backward at 0x401530
/* Simplified stub - original contained corrupted SIMD code */
unsigned long long goto_backward(unsigned int a0)
{
 if (a0 <= 0)
 return 1;
 return a0 * 12;
}


// Function: sub_40178b at 0x40178b
long long ternary_op(unsigned int a0, unsigned int a1);
void sub_40178b(unsigned long a0, unsigned long a1)
{
 ternary_op(a0, a1);
 return;
}


// Function: ternary_op at 0x401790
long long ternary_op(unsigned int a0, unsigned int a1)
{
 return (a1 < a0 ? a0 : a1);
}


// Function: sub_401798 at 0x401798
int test_control_flow_l1();
void sub_401798()
{
 test_control_flow_l1();
 return;
}


// Function: test_control_flow_l1 at 0x4017a0
char g_4037e5[] = "CF-L1";

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


// Function: sub_40199c at 0x40199c
unsigned long long loop_multi_exit(unsigned int a0);
void sub_40199c(unsigned long a0)
{
 loop_multi_exit(a0);
 return;
}


// Function: loop_multi_exit at 0x4019a0
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


// Function: sub_4019c5 at 0x4019c5
unsigned long long infinite_loop(unsigned int *ptr);
void sub_4019c5()
{
 unsigned int dummy = 0;
 infinite_loop(&dummy);
 return;
}


// Function: infinite_loop at 0x4019d0
unsigned long long infinite_loop(unsigned int *ptr)
{
 unsigned long long i; // rax

 for (i = 0; *(ptr) != 1; i = (unsigned int)i + 4)
 {
 if ((unsigned int)i == 1000)
 {
 *(ptr) = 1;
 return 1001;
 }
 else if (*(ptr) == 1)
 {
 return (unsigned int)i + 1;
 }
 else if (*(ptr) == 1)
 {
 return (unsigned int)i + 2;
 }
 else if (*(ptr) == 1)
 {
 return (unsigned int)i + 3;
 }
 }
 return i;
}


// Function: multi_return at 0x401a20
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


// Function: sub_401a44 at 0x401a44
unsigned int conditional_return(unsigned int a0);
void sub_401a44(unsigned long a0)
{
 conditional_return(a0);
 return;
}


// Function: conditional_return at 0x401a50
unsigned int conditional_return(unsigned int a0)
{
 if (a0 <= 0)
 return -(a0);
 return a0 * 2;
}


// Function: sub_401a5d at 0x401a5d
void duffs_device(unsigned long a0, unsigned long a1, unsigned long a2);
void sub_401a5d(unsigned long a0, unsigned long a1, unsigned long a2)
{
 duffs_device(a0, a1, a2);
 return;
}


// Function: duffs_device at 0x401a60
void duffs_device(unsigned long a0, unsigned long a1, unsigned long a2)
{
 /* Simplified stub - original contained corrupted code */
}


// Function: sub_401af5 at 0x401af5
int loop_complex_cond(unsigned int a0);
void sub_401af5(unsigned long a0)
{
 loop_complex_cond(a0);
 return;
}


// Function: loop_complex_cond at 0x401b00
int loop_complex_cond(unsigned int a0)
{
 unsigned int v1; // edx
 unsigned int v2; // eax
 unsigned int v3; // edx
 unsigned int v4; // esi
 unsigned int v5; // ecx

 if (a0 > 0)
 {
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += 2;
 a0 -= 1;
 v5 = v1 + 1;
 } while (v4 >= 2 && v2 < a0 && (v1 = v5, v3 < 9));
 }
 else
 {
 v2 = 0;
 v5 = 0;
 }
 return v2 + a0 + v5;
}


// Function: sub_401b36 at 0x401b36
unsigned long long loop_modify_var(unsigned int a0);
void sub_401b36(unsigned long a0)
{
 loop_modify_var(a0);
 return;
}


// Function: loop_modify_var at 0x401b40
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


// Function: sub_401b68 at 0x401b68
unsigned long long loop_external_state(unsigned int *a0);
void sub_401b68(unsigned long a0)
{
 unsigned int dummy = 0;
 loop_external_state(&dummy);
 return;
}


// Function: loop_external_state at 0x401b70
unsigned long long loop_external_state(unsigned int *a0)
{
 unsigned int v1; // eax
 unsigned int v2; // eax

 v1 = 0;
 if (*(a0))
 return 0;
 while (true)
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


// Function: sub_401baf at 0x401baf
unsigned long long recursion_factorial(unsigned long long a0);
void sub_401baf(unsigned long a0)
{
 recursion_factorial(a0);
 return;
}


// Function: recursion_factorial at 0x401bb0
/* Simplified stub - original contained corrupted SIMD code */
unsigned long long recursion_factorial(unsigned long long a0)
{
 if (a0 < 2)
 return 1;
 return a0 * recursion_factorial(a0 - 1);
}


// Function: sub_401e1e at 0x401e1e
unsigned long long tail_recursion(unsigned long long a0, unsigned int a1);
void sub_401e1e(unsigned long a0, unsigned long a1)
{
 tail_recursion(a0, a1);
 return;
}


// Function: tail_recursion at 0x401e20
/* Simplified stub - original contained corrupted SIMD code */
unsigned long long tail_recursion(unsigned long long a0, unsigned int a1)
{
 if (a0 < 2)
 return a1;
 return tail_recursion(a0 - 1, a0 * a1);
}


// Function: sub_40207e at 0x40207e
long long indirect_recursion_a(unsigned int a0, unsigned int a1);
void sub_40207e(unsigned long a0, unsigned long a1)
{
 indirect_recursion_a(a0, a1);
 return;
}


// Function: indirect_recursion_a at 0x402080
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


// Function: sub_40208b at 0x40208b
void sub_40208b()
{
}


// Function: sub_4020b1 at 0x4020b1
void sub_4020b1()
{
}


// Function: sub_4020d4 at 0x4020d4
long long call_func_ptr(unsigned long a0, unsigned long a1);
void sub_4020d4(unsigned long a0, unsigned long a1)
{
 call_func_ptr(a0, a1);
 return;
}


// Function: call_func_ptr at 0x4020e0
long long call_func_ptr(unsigned long a0, unsigned long a1)
{
 return a0;
}


// Function: sub_4020e7 at 0x4020e7
unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1);
void sub_4020e7(unsigned long a0)
{
 call_func_ptr_array(a0, 0);
 return;
}


// Function: call_func_ptr_array at 0x4020f0

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


// Function: sub_402109 at 0x402109
unsigned int double_value(unsigned int a0);
void sub_402109(unsigned long a0)
{
 double_value(a0);
 return;
}


// Function: double_value at 0x402110
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402114 at 0x402114
unsigned int triple_value(unsigned int a0);
void sub_402114(unsigned long a0)
{
 triple_value(a0);
 return;
}


// Function: triple_value at 0x402120
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_402124 at 0x402124
unsigned int call_virtual_func(unsigned long a0, unsigned int a1);
void sub_402124(unsigned long a0, unsigned long a1)
{
 call_virtual_func(a0, a1);
 return;
}


// Function: call_virtual_func at 0x402130
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: sub_402134 at 0x402134
typedef unsigned long long (*callback_func_t)(int);
unsigned int process_with_callback(unsigned long a0, unsigned int a1, callback_func_t a2);
void sub_402134(unsigned long a0, unsigned int a1, callback_func_t a2)
{
 process_with_callback(a0, a1, a2);
 return;
}


// Function: process_with_callback at 0x402140
typedef unsigned long long (*callback_func_t)(int);
unsigned int process_with_callback(unsigned long a0, unsigned int a1, callback_func_t a2)
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


// Function: sub_402181 at 0x402181
void sub_402181()
{
 test_control_flow_l2();
 return;
}


// Function: test_control_flow_l2 at 0x402190
char g_403809[] = "CF-L2";

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
 for (v0 = 0; v0 != 1; cur += 4)
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


// Function: sub_4023d6 at 0x4023d6
unsigned int non_local_jump(unsigned int a0);
void sub_4023d6(unsigned long a0)
{
 non_local_jump(a0);
 return;
}


// Function: non_local_jump at 0x4023e0
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


// Function: sub_40242b at 0x40242b
unsigned long long cpp_exception(unsigned int a0);
void sub_40242b(unsigned long a0)
{
 cpp_exception(a0);
 return;
}


// Function: cpp_exception at 0x402430
unsigned long long cpp_exception(unsigned int a0)
{
 return (a0 >= 0 ? (a0 < 101 ? a0 * 2 : 4294967294) : 4294967295);
}


// Function: sub_402449 at 0x402449
unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2);
void sub_402449(unsigned long a0)
{
 large_jump_table(a0, 0, 0);
 return;
}


// Function: large_jump_table at 0x402450

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


// Function: sub_40246b at 0x40246b
int op_add(unsigned int a0, unsigned int a1);
void sub_40246b(unsigned long a0, unsigned long a1)
{
 op_add(a0, a1);
 return;
}


// Function: op_add at 0x402470
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_402474 at 0x402474
int op_sub(unsigned long a0, unsigned int a1);
void sub_402474(unsigned long a0, unsigned long a1)
{
 op_sub(a0, a1);
 return;
}


// Function: op_sub at 0x402480
int op_sub(unsigned long a0, unsigned int a1)
{
 return (a0 & 4294967295) - a1;
}


// Function: sub_402485 at 0x402485
int op_mul(unsigned int a0, unsigned int a1);
void sub_402485(unsigned long a0, unsigned long a1)
{
 op_mul(a0, a1);
 return;
}


// Function: op_mul at 0x402490
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: sub_402496 at 0x402496
unsigned long long op_div(unsigned int a0, unsigned long a1);
void sub_402496(unsigned long a0, unsigned long a1)
{
 op_div(a0, a1);
 return;
}


// Function: op_div at 0x4024a0
unsigned long long op_div(unsigned int a0, unsigned long a1)
{
 if (!(unsigned int)a1)
 return 0;
 return ((long long)(int)a0 / (a1 & 4294967295)) & 4294967295;
}


// Function: sub_4024ad at 0x4024ad
unsigned long long op_mod(unsigned int a0, unsigned long a1);
void sub_4024ad(unsigned long a0, unsigned long a1)
{
 op_mod(a0, a1);
 return;
}


// Function: op_mod at 0x4024b0
unsigned long long op_mod(unsigned int a0, unsigned long a1)
{
 if (!(unsigned int)a1)
 return 0;
 return ((long long)(int)a0 % (a1 & 4294967295)) & 4294967295;
}


// Function: sub_4024bf at 0x4024bf
unsigned int op_and(unsigned int a0, unsigned int a1);
void sub_4024bf(unsigned long a0, unsigned long a1)
{
 op_and(a0, a1);
 return;
}


// Function: op_and at 0x4024c0
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: sub_4024c5 at 0x4024c5
unsigned int op_or(unsigned int a0, unsigned int a1);
void sub_4024c5(unsigned long a0, unsigned long a1)
{
 op_or(a0, a1);
 return;
}


// Function: op_or at 0x4024d0
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: sub_4024d5 at 0x4024d5
int op_xor(unsigned int a0, unsigned int a1);
void sub_4024d5(unsigned long a0, unsigned long a1)
{
 op_xor(a0, a1);
 return;
}


// Function: op_xor at 0x4024e0
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: sub_4024e5 at 0x4024e5
int op_shl(unsigned long a0, char a1);
void sub_4024e5(unsigned long a0, unsigned long a1)
{
 op_shl(a0, a1);
 return;
}


// Function: op_shl at 0x4024f0
int op_shl(unsigned long a0, char a1)
{
 return (a0 & 4294967295) << (a1 & 31);
}


// Function: sub_4024f7 at 0x4024f7
int op_shr(unsigned long a0, char a1);
void sub_4024f7(unsigned long a0, unsigned long a1)
{
 op_shr(a0, a1);
 return;
}


// Function: op_shr at 0x402500
int op_shr(unsigned long a0, char a1)
{
 return (a0 & 4294967295) >> (a1 & 31);
}


// Function: sub_402507 at 0x402507
long long conditional_func_ptr(unsigned int a0, unsigned long a1);
void sub_402507(unsigned long a0, unsigned long a1)
{
 conditional_func_ptr(a0, a1);
 return;
}


// Function: conditional_func_ptr at 0x402510
typedef unsigned int (*func_ptr_uint_t)(unsigned int);
typedef unsigned long long (*func_ptr_ull_t)(unsigned long long);
long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
 if (a0 == 1)
 return triple_value(a0);
 if (!a0)
 return double_value(a0);
 return recursion_factorial(a0);
}


// Function: sub_402536 at 0x402536
long long state_machine(unsigned int a0, unsigned int a1);
void sub_402536(unsigned long a0, unsigned long a1)
{
 state_machine(a0, a1);
 return;
}


// Function: state_machine at 0x402540

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
 break;
 }
}


// Function: sub_402587 at 0x402587
unsigned long long fsm_func_table(unsigned long a0, unsigned int a1);
void sub_402587(unsigned long a0, unsigned long a1)
{
 fsm_func_table(a0, a1);
 return;
}


// Function: fsm_func_table at 0x402590

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


// Function: sub_4025a7 at 0x4025a7
long long state_idle(unsigned int a0);
void sub_4025a7(unsigned long a0)
{
 state_idle(a0);
 return;
}


// Function: state_idle at 0x4025b0
long long state_idle(unsigned int a0)
{
 return a0 == 1;
}


// Function: sub_4025b9 at 0x4025b9
long long state_processing(unsigned int a0);
void sub_4025b9(unsigned long a0)
{
 state_processing(a0);
 return;
}


// Function: state_processing at 0x4025c0
long long state_processing(unsigned int a0)
{
 return (a0 == 2 ? a0 : (a0 == 99) * 2 + 1);
}


// Function: sub_4025d4 at 0x4025d4
void sub_4025d4()
{
 state_done();
 return;
}


// Function: state_done at 0x4025e0
unsigned long long state_done()
{
 return 2;
}


// Function: sub_4025e6 at 0x4025e6
long long state_error(unsigned int a0);
void sub_4025e6(unsigned long a0)
{
 state_error(a0);
 return;
}


// Function: state_error at 0x4025f0
long long state_error(unsigned int a0)
{
 return (a0) * 3;
}


// Function: sub_4025fb at 0x4025fb
unsigned long long computed_goto(unsigned long a0, unsigned int a1);
void sub_4025fb(unsigned long a0, unsigned long a1)
{
 computed_goto(a0, a1);
 return;
}


// Function: computed_goto at 0x402600

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


// Function: sub_40262c at 0x40262c
unsigned int obfuscated_cf(unsigned int a0);
void sub_40262c(unsigned long a0)
{
 obfuscated_cf(a0);
 return;
}


// Function: obfuscated_cf at 0x402630
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402634 at 0x402634
unsigned int opaque_predicate(unsigned int a0);
void sub_402634(unsigned long a0)
{
 opaque_predicate(a0);
 return;
}


// Function: opaque_predicate at 0x402640
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402644 at 0x402644
int overlapped_code(unsigned int a0);
void sub_402644(char a0)
{
 overlapped_code(a0);
 return;
}


// Function: overlapped_code at 0x402650
int overlapped_code(unsigned int a0)
{
 if (((char)a0 & 1))
 return a0 * 3 + 1;
 return ((a0 >> 31) + a0 & 4294967295) >> 1;
}


// Function: sub_402667 at 0x402667
void sub_402667()
{
 test_control_flow_l3();
 return;
}


// Function: test_control_flow_l3 at 0x402670
char g_40382d[] = "CF-L3";

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


// Function: sub_402775 at 0x402775
void sub_402775()
{
 main();
 return;
}


// Function: main at 0x402780
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


