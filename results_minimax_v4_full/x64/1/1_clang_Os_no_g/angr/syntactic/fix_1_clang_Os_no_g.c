// Angr Decompilation of 1_clang_Os_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <setjmp.h>
#include <string.h>
#include <stdbool.h>

// Stub definitions for CRT functions
void deregister_tm_clones() {}
void register_tm_clones() {}
void __do_global_dtors_aux() {}
void frame_dummy() {}

// Define uint256_t for SIMD operations
typedef unsigned long long uint256_t[4];

// Define struct_0 for global pointer
struct struct_0 { int value; };
typedef struct struct_0 struct_0;

// Define jmp_buf for setjmp/longjmp
jmp_buf jump_buffer = {0};

// Stub for duffs_device
unsigned int duffs_device(unsigned int *a0, unsigned long long *a1, unsigned int a2) {
    return 0;
}

// Helper functions for SIMD operations (stub implementations)
unsigned long long AddV(unsigned long long a, unsigned long long b) { return a + b; }
unsigned long long CmpGTV(unsigned long long a, unsigned long long b) { return a > b ? 1 : 0; }
unsigned long long InterleaveLOV(unsigned long long a, unsigned long long b) { return a; }
unsigned long long SarNV(unsigned long long a, int b) { return a >> b; }
unsigned long long ShlNV(unsigned long long a, int b) { return a << b; }

// Helper macro for CONCAT operations (combining upper/lower 32-bit parts)
// Note: This must be used with parentheses around each argument
#define CONCAT(hi, lo) ((((unsigned long long)(hi)) << 32) | (((unsigned long long)(lo)) & 0xFFFFFFFFULL))

/* Forward declarations */
void sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2);

// Define missing global variables
struct_0 *g_404fe0 = NULL;
unsigned long long g_405008 = 0;
unsigned int g_402090[4] = {10, 20, 30, 40};
char g_402675[] = "\n";
unsigned long long g_4020f0[4] = {0};
char g_402699[] = "\n";
char g_4026bd[] = "\n";

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_404fe0;
 if (g_404fe0)
 v1 = (unsigned long long *)g_404fe0();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_405008;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_405008;
 return;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1 = ""; // rdi - initialized to empty string

 return puts(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010a5 at 0x4010a5
void sub_4010a5()
{
 // Unsupported instruction - stub
}


// Function: sub_4010a6 at 0x4010a6
void sub_4010a6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010d9 at 0x4010d9
void sub_4010d9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401119 at 0x401119
void sub_401119()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401155 at 0x401155
void sub_401155()
{
}


// Function: sub_401159 at 0x401159
void sub_401159()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401169 at 0x401169
void sub_401169(unsigned long a0, unsigned long a1, unsigned long a2)
{
 sequential_ops();
 return;
}


// Function: sequential_ops at 0x40116c
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a0 + a1) * 2 - a2;
}


// Function: single_if at 0x401174
int single_if(unsigned long a0)
{
 return (a0 & 4294967295) << ((unsigned int)a0 > 0);
}


// Function: if_else at 0x40117e
long long if_else(unsigned int a0)
{
 return a0 > 0;
}


// Function: nested_if_2 at 0x401186
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
{
 if (a0 > 0)
 return (a1 < 0 ? 0 : a1) + a0 & 4294967295;
 return 0;
}


// Function: nested_if_deep at 0x401196
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


// Function: if_elseif_chain at 0x4011c7
unsigned long long if_elseif_chain(unsigned int a0)
{
 return (a0 < 3 ? a0 * 10 + 10 : 4294967295);
}


// Function: if_elseif_long at 0x4011da
unsigned long long if_elseif_long(unsigned int a0)
{
 return (a0 < 5 ? a0 * 100 + 100 : 4294967295);
}


// Function: switch_small at 0x4011ec
extern unsigned int g_402090[4];

unsigned long long switch_small(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a0 <= 3)
 v1 = g_402090[a0];
 return v1;
}


// Function: switch_large at 0x401204
unsigned long long switch_large(unsigned int a0)
{
 return (a0 < 10 ? a0 * 10 : 4294967295);
}


// Function: switch_default at 0x401216
unsigned long long switch_default(unsigned int a0)
{
 unsigned int v1; // edi

 v1 = a0 - 1;
 return (v1 < 3 ? v1 * 100 + 100 : 0);
}


// Function: switch_fallthrough at 0x401227
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


// Function: loop_for_fixed at 0x401248
unsigned long long loop_for_fixed(unsigned long a0)
{
 if ((unsigned int)a0 <= 0)
 return 0;
 return (unsigned int)((a0 - 1 & 4294967295) * (a0 - 2 & 4294967295) >> 1) + (unsigned int)a0 - 1;
}


// Function: loop_while at 0x401262
unsigned long long loop_while(unsigned int a0)
{
 unsigned int v1 = 0;

 if (!a0)
 return 1;
 do
 {
 a0 = (unsigned int)(a0 * 1717986919 >> 34) + (unsigned int)(a0 * 1717986919 >> 63);
 v1 += 1;
 } while (v1 + 9 > 18);
 return v1;
}


// Function: loop_dowhile at 0x401290
long long loop_dowhile(unsigned int a0)
{
 unsigned int v1 = 0; // eax
 unsigned int v2 = 0; // eax
 unsigned long v3 = 0; // rcx - initialized
 unsigned int v4; // eax

 do
 {
 a0 = (unsigned int)(a0 * 1717986919 >> 34) + (unsigned int)(a0 * 1717986919 >> 63);
 v4 = v1 + 1;
 v1 = v4;
 } while ((unsigned int)v3 + 9 > 18);
 return v2 + 1;
}


// Function: loop_nested at 0x4012b4
unsigned long long loop_nested(unsigned long a0, unsigned int a1)
{
 if ((unsigned int)a0 <= 0)
 return 0;
 return a0 * (a1 <= 0 ? 0 : a1) & 4294967295;
}


// Function: loop_break at 0x4012c4
unsigned long long loop_break(unsigned int i)
{
 char *v1; // rcx
 unsigned long long v2; // rax

 v1 = "\n";
 v2 = 0;
 while (*(v1) != i)
 {
 v2 += 1;
 v1 += 1;
 if (v2 == 5)
 return 4294967295;
 }
 return v2;
}


// Function: loop_continue at 0x4012e4
unsigned long long loop_continue(unsigned int a0)
{
 unsigned long long v1 = 0;
 unsigned long long v2 = 316912650112397582603894390785ULL;
 unsigned int v3 = 4;

 if (a0 <= 0)
 return 0;
 do
 {
 v1 = AddV(SarNV(ShlNV(v2, 31), 31) & v2, v1);
 v2 = AddV(v2, 316912650130844326686193876996ULL);
 v3 -= 4;
 } while (v3 + ((a0 + 3) & 0xfffffffc) != 8);
 return v1;
}


// Function: goto_forward at 0x401390
unsigned int goto_forward(unsigned int a0)
{
 return a0 * (a0 > 0 ? a0 : 1) * 2;
}


// Function: goto_backward at 0x4013a0
unsigned long long goto_backward(unsigned int a0)
{
 unsigned long long v1 = 79228162532711081671548469249ULL;
 unsigned long long v2 = 316912650112397582603894390785ULL;
 unsigned int v3 = 4;

 if (a0 <= 0)
 return 1;
 do
 {
 v1 = v1 * v2;
 v2 = AddV(v2, 316912650130844326686193876996ULL);
 v3 -= 4;
 } while (v3 + ((a0 + 3) & 0xfffffffc) != 8);
 return v1;
}


// Function: ternary_op at 0x40146a
long long ternary_op(unsigned int a0, unsigned int a1)
{
 return (a1 < a0 ? a0 : a1);
}


// Function: test_control_flow_l1 at 0x401472
extern char g_402675[];

int test_control_flow_l1()
{
 puts(g_402675);
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


// Function: loop_multi_exit at 0x40166e
extern unsigned long long g_4020f0[4];

unsigned long long loop_multi_exit(unsigned int a0)
{
 unsigned long long v1; // rdx
 unsigned long long v2; // rcx
 unsigned long long i; // rsi
 unsigned long long v4; // rax

 v1 = &g_4020f0;
 v2 = 0;
 i = 0;
 do
 {
 v4 = 0;
 do
 {
 if (*((int *)(v1 + v4 * 4)) == a0)
 return v4 - v2;
 } while ((v4 += 1, v4 != 4));
 i += 1;
 v2 -= 10;
 v1 += 16;
 } while (i != 3);
 return 4294967295;
}


// Function: infinite_loop at 0x4016a3
unsigned long long infinite_loop(unsigned int *ptr)
{
 unsigned long long v1; // rax

 v1 = 0;
 while (*(ptr) != 1)
 {
 v1 = (unsigned int)v1 + 1;
 if ((unsigned int)v1 == 1001)
 {
 *(ptr) = 1;
 return 1001;
 }
 }
 return v1;
}


// Function: multi_return at 0x4016c1
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


// Function: conditional_return at 0x4016e4
unsigned int conditional_return(unsigned int a0)
{
 if (a0 <= 0)
 return -(a0);
 return a0 * 2;
}


// Failed to decompile function duffs_device at 0x4016f1
// Function: loop_complex_cond at 0x401786
int loop_complex_cond(unsigned int a0)
{
 unsigned int v1 = 0; // edx
 unsigned int v2; // eax
 unsigned int v3 = 0; // edx
 unsigned int v4 = 0; // esi
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


// Function: loop_modify_var at 0x4017b4
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


// Function: loop_external_state at 0x4017d3
unsigned long long loop_external_state(unsigned int *a0)
{
 unsigned long long v1; // rax

 v1 = 0;
 while (!*(a0))
 {
 v1 = (unsigned int)v1 + 1;
 if ((unsigned int)v1 == 101)
 return 101;
 }
 return v1;
}


// Function: recursion_factorial at 0x4017e7
unsigned long long recursion_factorial(unsigned int a0)
{
 unsigned int i;
 unsigned long long result = 1;
 
 if (a0 < 2)
 return 1;
 
 for (i = a0; i > 1; i--)
 {
 result *= i;
 }
 return result;
}


// Function: tail_recursion at 0x4018c0
// Note: This function contains complex SIMD-like operations that are difficult to decompile
// Providing a simplified stub implementation
long long tail_recursion(unsigned int a0, unsigned int a1)
{
    // Simplified: just compute a0 * a1 as a stub
    if (a0 < 2)
        return a1;
    return (unsigned long long)a0 * a1;
}


// Function: indirect_recursion_a at 0x401998
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


// Function: call_func_ptr at 0x4019d3
long long call_func_ptr(unsigned long a0, unsigned long a1)
{
 // Function pointer call - interpret a0 as function pointer
 unsigned long long (*func)(unsigned int, unsigned int) = (void*)a0;
 return func(0, 0);
}


// Function: call_func_ptr_array at 0x4019da

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


// Function: double_value at 0x4019f3
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: triple_value at 0x4019f7
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: call_virtual_func at 0x4019fb
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: process_with_callback at 0x4019ff
unsigned int process_with_callback(unsigned long a0, unsigned int a1, unsigned long long *a2)
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


// Function: test_control_flow_l2 at 0x401a38
extern unsigned long long g_4020f0[4];
extern char g_402699[];

int test_control_flow_l2()
{
 unsigned long long v6; // rcx
 unsigned long long v7; // rax
 unsigned int v16; // ebx
 unsigned int v17; // ebp
 unsigned long long v8; // rdx
 unsigned long long v9; // rsi
 unsigned long long v10; // rsi
 unsigned int v11; // ebx
 unsigned int v12; // ebp
 unsigned int v13; // ebx
 unsigned int v15; // eax
 unsigned int v0; // [bp-0x60]
 unsigned int result; // [bp-0x5c]
 unsigned int v2[8]; // [bp-0x58]
 unsigned long long v3; // [bp-0x38]
 unsigned long long v4; // [bp-0x28]

 puts(g_402699);
 v6 = &g_4020f0;
 v7 = 0;
 v8 = 0;
 while (true)
 {
 v9 = 0;
 do
 {
 if (*((int *)(v6 + v9 * 4)) == 7)
 {
 v10 = v9 - v7;
 goto LABEL_401a82;
 }
 } while ((v9 += 1, v9 != 4));
 v8 += 1;
 v7 -= 10;
 v6 += 16;
 if (v8 == 3)
 {
 v10 = 4294967295;
LABEL_401a82:
 v11 = 0;
 printf("CF-L2-01 (loop_multi_exit): %d\n", v10);
 v0 = 0;
 do
 {
 if (v0 == 1)
 goto LABEL_401aba;
 } while ((v11 += 1, v11 != 1001));
 v0 = 1;
 v11 = 1001;
LABEL_401aba:
 printf("CF-L2-02 (infinite_loop): %d\n", v11);
 v12 = 4294967295;
 printf("CF-L2-03 (multi_return): %d\n", 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", 4294967294);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v13 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 v4 = 633825300243241909290088267781;
 v3 = 316912650112397582603894390785;
 printf("CF-L2-05 (duffs_device): %d\n", duffs_device(&v2, &v3, 8) & 4294967295);
 v15 = 11;
 do
 {
 v16 = v13 + 2;
 } while (v13 - 8 < v15 - 2 && (v12 += 1, v15 -= 1, v13 = v16, v12 < 9));
 v17 = 0;
 printf("CF-L2-06 (loop_complex_cond): %d\n", v16);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 result = 0;
 do
 {
 if (result)
 goto LABEL_401bc1;
 } while ((v17 += 1, v17 != 101));
 v17 = 101;
LABEL_401bc1:
 printf("CF-L2-08 (loop_external_state): %d\n", v17);
 printf("CF-L2-09 (recursion_factorial): %d\n", 120);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 printf("CF-L2-11 (indirect_recursion): %d\n", 3);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
 return printf("CF-L2-15 (process_with_callback): %d\n", 30);
 }
 }
}


// Function: non_local_jump at 0x401c5d
extern jmp_buf jump_buffer;

unsigned int non_local_jump(unsigned int a0)
{
 if (_setjmp(jump_buffer))
 {
 return 4294967295;
 }
 else if (a0 < 0)
 {
 longjmp(&jump_buffer, 1); /* do not return */
 }
 else if (a0 < 101)
 {
 return a0 * 2;
 }
 else
 {
 longjmp(&jump_buffer, 2); /* do not return */
 }
}


// Function: cpp_exception at 0x401ca8
unsigned long long cpp_exception(unsigned int a0)
{
 return (a0 >= 0 ? (a0 < 101 ? a0 * 2 : 4294967294) : 4294967295);
}


// Function: large_jump_table at 0x401cc1

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


// Function: op_add at 0x401cdc
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: op_sub at 0x401ce0
int op_sub(unsigned long a0, unsigned int a1)
{
 return (a0 & 4294967295) - a1;
}


// Function: op_mul at 0x401ce5
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: op_div at 0x401ceb
unsigned long long op_div(unsigned int a0, unsigned long a1)
{
 if (!(unsigned int)a1)
 return 0;
 // Simplified division - original had complex SIMD-like operations
 return (a0 / (a1 & 4294967295ULL));
}


// Function: op_mod at 0x401cf8
unsigned long long op_mod(unsigned int a0, unsigned long a1)
{
 if (!(unsigned int)a1)
   return 0;
 // Simplified mod operation
 unsigned int dividend = (a0 >> 31) + a0;
 unsigned int divisor = (a1 & 4294967295ULL);
 return ((unsigned long long)(dividend % divisor) << 32) | (dividend / divisor);
}


// Function: op_and at 0x401d07
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: op_or at 0x401d0c
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: op_xor at 0x401d11
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: op_shl at 0x401d16
int op_shl(unsigned long a0, char a1)
{
 return (a0 & 4294967295) << (a1 & 31);
}


// Function: op_shr at 0x401d1d
int op_shr(unsigned long a0, char a1)
{
 return (a0 & 4294967295) >> (a1 & 31);
}


// Function: conditional_func_ptr at 0x401d24
long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
 unsigned long long (*v1)(unsigned int, unsigned int); // rcx

 v1 = (a0 == 1 ? triple_value : recursion_factorial);
 if (!a0)
 v1 = double_value;
 return v1(0, 0);
}


// Function: state_machine at 0x401d4a

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


// Function: fsm_func_table at 0x401d90

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


// Function: state_idle at 0x401da7
long long state_idle(unsigned int a0)
{
 return a0 == 1;
}


// Function: state_processing at 0x401db0
long long state_processing(unsigned int a0)
{
 return (a0 == 2 ? a0 : (a0 == 99) * 2 + 1);
}


// Function: state_done at 0x401dc3
unsigned long long state_done()
{
 return 2;
}


// Function: state_error at 0x401dc9
long long state_error(unsigned int a0)
{
 return (a0) * 3;
}


// Function: computed_goto at 0x401dd4

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


// Function: obfuscated_cf at 0x401e00
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: opaque_predicate at 0x401e04
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: overlapped_code at 0x401e08
int overlapped_code(unsigned int a0)
{
 if (((char)a0 & 1))
 return a0 * 3 + 1;
 return ((a0 >> 31) + a0 & 4294967295) >> 1;
}


// Function: test_control_flow_l3 at 0x401e1e
extern char g_4026bd[];

int test_control_flow_l3()
{
 unsigned int v3; // rdi

 puts(g_4026bd);
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


// Function: main at 0x401f23
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


