#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <stdint.h>

// Define uint256_t for SIMD operations
typedef unsigned __int128 uint128_t;
typedef struct { uint128_t lo; uint128_t hi; } uint256_t;

// Forward declarations
typedef void (*struct_0)(void);

// Stub functions that were removed by preprocessor - provide empty implementations
void deregister_tm_clones() {}
void register_tm_clones() {}
void __do_global_dtors_aux() {}
void frame_dummy() {}

// Vector operation stubs (for SIMD operations) - simplified implementations
unsigned long long AddV(unsigned long long a, unsigned long long b) { return a + b; }
int CmpEQV(unsigned long long a, unsigned long long b) { return a == b; }
unsigned long long InterleaveLOV(unsigned long long a, unsigned long long b) { return a; }

// Forward declarations for all test functions
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2);
int single_if(unsigned long a0);
long long if_else(unsigned int a0);
unsigned long long nested_if_2(unsigned int a0, unsigned int a1);
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned long long if_elseif_chain(unsigned int a0);
unsigned long long if_elseif_long(unsigned int a0);
unsigned long long switch_small(unsigned int a0);
unsigned long long switch_large(unsigned int a0);
unsigned long long switch_default(unsigned int a0);
unsigned long long switch_fallthrough(unsigned long a0);
unsigned long long loop_for_fixed(unsigned long a0);
unsigned long long loop_while(unsigned int a0);
long long loop_dowhile(unsigned int a0);
unsigned long long loop_nested(unsigned long a0, unsigned int a1);
unsigned long long loop_break(unsigned int a0);
unsigned long long loop_continue(unsigned int a0);
unsigned int goto_forward(unsigned int a0);
unsigned long long goto_backward(unsigned int a0);
long long ternary_op(unsigned int a0, unsigned int a1);
int test_control_flow_l1();
int test_control_flow_l2();
int test_control_flow_l3();
unsigned long long loop_multi_exit(unsigned int a0);
unsigned long long infinite_loop(unsigned int *ptr);
unsigned long long multi_return(unsigned int a0);
unsigned int conditional_return(unsigned int a0);
int duffs_device(unsigned long a0, unsigned int a1);
int loop_complex_cond(unsigned int a0);
unsigned long long loop_modify_var(unsigned int a0);
unsigned long long loop_external_state(unsigned int *a0);
unsigned long long recursion_factorial(unsigned long long a0);
unsigned long long tail_recursion(unsigned long long a0, unsigned int a1);
long long indirect_recursion_a(unsigned int a0, unsigned int a1);
long long indirect_recursion_b(unsigned int a0, unsigned int a1);
long long call_func_ptr(unsigned long a0, unsigned long a1);
unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1);
unsigned int double_value(unsigned int a0);
unsigned int triple_value(unsigned int a0);
unsigned int call_virtual_func(unsigned long a0, unsigned int a1);
unsigned int process_with_callback(unsigned long a0, unsigned int a1, unsigned long long *a2);
unsigned int non_local_jump(unsigned int a0);
unsigned long long cpp_exception(unsigned int a0);
unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2);
int op_add(unsigned int a0, unsigned int a1);
int op_sub(unsigned long a0, unsigned int a1);
int op_mul(unsigned int a0, unsigned int a1);
unsigned long long op_div(unsigned int a0, unsigned long a1);
unsigned long long op_mod(unsigned int a0, unsigned long a1);
unsigned int op_and(unsigned int a0, unsigned int a1);
unsigned int op_or(unsigned int a0, unsigned int a1);
int op_xor(unsigned int a0, unsigned int a1);
int op_shl(unsigned long a0, char a1);
int op_shr(unsigned long a0, char a1);
long long conditional_func_ptr(unsigned int a0, unsigned long a1);
long long state_machine(unsigned int a0, unsigned int a1);
unsigned long long fsm_func_table(unsigned long a0, unsigned int a1);
long long state_idle(unsigned int a0);
long long state_processing(unsigned int a0);
unsigned long long state_done();
long long state_error(unsigned int a0);
unsigned long long computed_goto(unsigned long a0, unsigned int a1);
unsigned int obfuscated_cf(unsigned int a0);
unsigned int opaque_predicate(unsigned int a0);
int overlapped_code(unsigned int a0);

// Global variable definitions
struct_0 *g_405fe0 = 0;
unsigned int g_403280[4] = {10, 20, 30, 40};
unsigned int g_4030d8[4] = {1, 2, 3, 4};
unsigned int g_403108[4] = {5, 6, 7, 8};
jmp_buf jump_buffer;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_405fe0;
 if (g_405fe0)
 v1 = g_405fe0();
 return v1;
}


// Function: sub_401020 at 0x401020
// Simplified stub - original code was a no-op
void sub_401020()
{
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 return puts("");  // Fixed: was using uninitialized v1
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010a5 at 0x4010a5
void sub_4010a5()
{
 // Empty stub - original code had unsupported operation
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
 sequential_ops(1, 2, 3);
 return;
}


// Function: sequential_ops at 0x401170
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a0 + a1) * 2 - a2;
}


// Function: sub_401178 at 0x401178
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
void sub_401198(unsigned long a0, unsigned long a1)
{
 nested_if_2(a0, a1);
 return;
}


// Function: nested_if_2 at 0x4011a0
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
{
 if (a0 > 0)
 return ((a1 < 0 ? 0 : a1) + a0) & 4294967295;
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
void sub_401222(unsigned long a0)
{
 switch_small((unsigned int)a0);
 return;
}


// Function: switch_small at 0x401230
extern unsigned int g_403280[4];

unsigned long long switch_small(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a0 <= 3)
 v1 = g_403280[a0];
 return v1;
}


// Function: sub_401248 at 0x401248
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
void sub_401282(unsigned long a0)
{
 switch_fallthrough();
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
void sub_4012b1(unsigned long a0)
{
 loop_for_fixed(a0);
 return;
}


// Function: loop_for_fixed at 0x4012c0
unsigned long long loop_for_fixed(unsigned long a0)
{
 unsigned long n;
 if ((unsigned int)a0 <= 0)
 return 0;
 // Simplified: calculate triangular number plus a0
 n = a0 - 1;
 return (n * (n + 1) / 2) + a0 - 1;
}


// Function: sub_4012db at 0x4012db
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

 if (!a0)
 return 1;
 v1 = 0;
 do
 {
 a0 = (unsigned int)(a0 * 1717986919 >> 34) + (unsigned int)(a0 * 1717986919 >> 63);
 v1 = v1 + 1;
 v2 = v1;
 } while (v1 < 10);  // Simplified loop condition
 return v1 + 1;
}


// Function: sub_401319 at 0x401319
void sub_401319(unsigned long a0)
{
 loop_dowhile((unsigned int)a0);
 return;
}


// Function: loop_dowhile at 0x401320
long long loop_dowhile(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned int v2; // eax

 v1 = 0;
 do
 {
 a0 = (unsigned int)(a0 * 1717986919 >> 34) + (unsigned int)(a0 * 1717986919 >> 63);
 v1 = v1 + 1;
 v2 = v1;
 } while (v1 < 10);  // Simplified loop condition
 return v2 + 1;
}


// Function: sub_401353 at 0x401353
void sub_401353(unsigned long a0, unsigned long a1)
{
 loop_nested();
 return;
}


// Function: loop_nested at 0x401360
unsigned long long loop_nested(unsigned long a0, unsigned int a1)
{
 unsigned long long result;
 if ((unsigned int)a0 <= 0)
 return 0;
 result = a0 * (a1 <= 0 ? 0 : a1);
 return result & 4294967295;
}


// Function: loop_break at 0x401370

unsigned long long loop_break(unsigned int a0)
{
 switch (a0)
 {
 case 10:
 return 0;
 case 20:
 return 1;
 case 30:
 return 2;
 case 40:
 return 3;
 case 50:
 return 4;
 default:
 return 4294967295;
 }
}


// Function: sub_4013a8 at 0x4013a8
void sub_4013a8(unsigned long a0)
{
 loop_continue();
 return;
}


// Function: loop_continue at 0x4013b0
// Simplified implementation
unsigned long long loop_continue(unsigned int a0)
{
 unsigned long long result = 0;
 unsigned int i;
 
 if (a0 <= 0)
 return 0;
 
 for (i = 1; i <= a0; i++)
 {
 if ((i % 3) != 0)
 result += i;
 }
 return result;
}


// Function: sub_40151d at 0x40151d
void sub_40151d(unsigned long a0)
{
 goto_forward();
 return;
}


// Function: goto_forward at 0x401520
unsigned int goto_forward(unsigned int a0)
{
 return a0 * (a0 > 0 ? a0 : 1) * 2;
}


// Function: goto_backward at 0x401530
unsigned long long goto_backward(unsigned int a0)
{
 unsigned long long v1; // rcx
 unsigned long long v2; // rax
 unsigned long long v11; // xmm5
 unsigned long long v12; // xmm6
 int v13; // xmm1
 int v14; // xmm6
 unsigned long long v15; // rax
 unsigned long long v16; // rcx
 unsigned long long v17; // rax
 unsigned int v3; // ecx
 unsigned int v4; // esi
 unsigned int v5; // edx
 unsigned int result; // eax
 unsigned long long v7; // xmm0
 unsigned int v8; // edx

 if (a0 <= 0)
 return 1;
 v1 = 1;
 v2 = 1;
 if (a0 >= 8)
 {
 v3 = a0 & 0xfffffff8;
 v4 = v3 - 8;
 v5 = (v4 >> 3) + 1;
 result = v5 & 3;
 if (v4 < 24)
 {
 v11 = 79228162532711081671548469249;
 v7 = 316912650112397582603894390785;
 v12 = 79228162532711081671548469249;
 }
 else
 {
 v8 = v5 & 0xfffffffc;
 v11 = 79228162532711081671548469249;
 v7 = 316912650112397582603894390785;
 v12 = 79228162532711081671548469249;
 do
 {
 v11 = ...;
 v12 = ...;
 v7 = AddV(v7, 2535301201046754613489551015968);
 v8 -= 4;
 } while (v8 + 0xfffffffc);
 }
 if (result)
 {
 do
 {
 v11 = InterleaveLOV(((((unsigned int)(v7 >> 96) CONCAT (unsigned int)(v7 >> 96) CONCAT (unsigned int)((unsigned long long)v7 >> 32) CONCAT (unsigned int)((unsigned long long)v7 >> 32)) >> 64) * (((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) >> 64) CONCAT ((unsigned int)(v7 >> 96) CONCAT (unsigned int)(v7 >> 96) CONCAT (unsigned int)((unsigned long long)v7 >> 32) CONCAT (unsigned int)((unsigned long long)v7 >> 32)) * ((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32))) >> 96 CONCAT ((((unsigned int)(v7 >> 96) CONCAT (unsigned int)(v7 >> 96) CONCAT (unsigned int)((unsigned long long)v7 >> 32) CONCAT (unsigned int)((unsigned long long)v7 >> 32)) >> 64) * (((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) >> 64) CONCAT ((unsigned int)(v7 >> 96) CONCAT (unsigned int)(v7 >> 96) CONCAT (unsigned int)((unsigned long long)v7 >> 32) CONCAT (unsigned int)((unsigned long long)v7 >> 32)) * ((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32))) >> 64 CONCAT ((((unsigned int)(v7 >> 96) CONCAT (unsigned int)(v7 >> 96) CONCAT (unsigned int)((unsigned long long)v7 >> 32) CONCAT (unsigned int)((unsigned long long)v7 >> 32)) >> 64) * (((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) >> 64) CONCAT ((unsigned int)(v7 >> 96) CONCAT (unsigned int)(v7 >> 96) CONCAT (unsigned int)((unsigned long long)v7 >> 32) CONCAT (unsigned int)((unsigned long long)v7 >> 32)) * ((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32))) >> 64 CONCAT (((unsigned int)(v7 >> 96) CONCAT (unsigned int)(v7 >> 96) CONCAT (unsigned int)((unsigned long long)v7 >> 32) CONCAT (unsigned int)((unsigned long long)v7 >> 32)) >> 64) * (((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) >> 64) CONCAT ((unsigned int)(v7 >> 96) CONCAT (unsigned int)(v7 >> 96) CONCAT (unsigned int)((unsigned long long)v7 >> 32) CONCAT (unsigned int)((unsigned long long)v7 >> 32)) * ((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)), ((unsigned int)(v7 >> 64) * (unsigned int)(v11 >> 64) CONCAT (unsigned int)v7 * (unsigned int)v11) >> 96 CONCAT ((unsigned int)(v7 >> 64) * (unsigned int)(v11 >> 64) CONCAT (unsigned int)v7 * (unsigned int)v11) >> 64 CONCAT ((unsigned int)(v7 >> 64) * (unsigned int)(v11 >> 64) CONCAT (unsigned int)v7 * (unsigned int)v11) >> 64 CONCAT (unsigned int)(v7 >> 64) * (unsigned int)(v11 >> 64) CONCAT (unsigned int)v7 * (unsigned int)v11);
 v12 = InterleaveLOV(((((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) >> 64) * (((unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32)) >> 64) CONCAT ((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) * ((unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32))) >> 96 CONCAT ((((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) >> 64) * (((unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32)) >> 64) CONCAT ((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) * ((unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32))) >> 64 CONCAT ((((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) >> 64) * (((unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32)) >> 64) CONCAT ((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) * ((unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32))) >> 64 CONCAT (((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) >> 64) * (((unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32)) >> 64) CONCAT ((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) * ((unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)(AddV(v7, 316912650130844326686193876996) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v7, 316912650130844326686193876996)) >> 32)), ((unsigned int)(AddV(v7, 316912650130844326686193876996) >> 64) * (unsigned int)(v12 >> 64) CONCAT (unsigned int)(AddV(v7, 316912650130844326686193876996)) * (unsigned int)v12) >> 96 CONCAT ((unsigned int)(AddV(v7, 316912650130844326686193876996) >> 64) * (unsigned int)(v12 >> 64) CONCAT (unsigned int)(AddV(v7, 316912650130844326686193876996)) * (unsigned int)v12) >> 64 CONCAT ((unsigned int)(AddV(v7, 316912650130844326686193876996) >> 64) * (unsigned int)(v12 >> 64) CONCAT (unsigned int)(AddV(v7, 316912650130844326686193876996)) * (unsigned int)v12) >> 64 CONCAT (unsigned int)(AddV(v7, 316912650130844326686193876996) >> 64) * (unsigned int)(v12 >> 64) CONCAT (unsigned int)(AddV(v7, 316912650130844326686193876996)) * (unsigned int)v12);
 v7 = AddV(v7, 633825300261688653372387753992);
 result -= 1;
 } while (result + 4294967295);
 }
 v13 = (((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) >> 64) * (((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) >> 64) CONCAT ((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) * ((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32));
 v14 = (unsigned int)(v12 >> 64) * (unsigned int)(v11 >> 64) CONCAT (unsigned int)v12 * (unsigned int)v11;
 v2 = (((((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) >> 64) * (unsigned int)(v13 >> 64) CONCAT ((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) * (unsigned int)v13) >> 64) * (((((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) >> 64) * (unsigned int)(v14 >> 64) CONCAT ((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) * (unsigned int)v14) >> 64) CONCAT ((((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) >> 64) * (unsigned int)(v13 >> 64) CONCAT ((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) * (unsigned int)v13) * ((((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) >> 64) * (unsigned int)(v14 >> 64) CONCAT ((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) * (unsigned int)v14);
 if (v3 == a0)
 return (((((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) >> 64) * (unsigned int)(v13 >> 64) CONCAT ((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) * (unsigned int)v13) >> 64) * (((((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) >> 64) * (unsigned int)(v14 >> 64) CONCAT ((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) * (unsigned int)v14) >> 64) CONCAT ((((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) >> 64) * (unsigned int)(v13 >> 64) CONCAT ((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) * (unsigned int)v13) * ((((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) >> 64) * (unsigned int)(v14 >> 64) CONCAT ((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) * (unsigned int)v14);
 v1 = v3 | 1;
 }
 do
 {
 v16 = v1;
 v17 = v16 * v2;
 v1 = (unsigned int)v16 + 1;
 v2 = v17;
 } while (a0 + 1 != (unsigned int)v1);
 return v16 * v15;
}


// Function: sub_40178b at 0x40178b
void sub_40178b(unsigned long a0, unsigned long a1)
{
 ternary_op();
 return;
}


// Function: ternary_op at 0x401790
long long ternary_op(unsigned int a0, unsigned int a1)
{
 return (a1 < a0 ? a0 : a1);
}


// Function: sub_401798 at 0x401798
void sub_401798()
{
 test_control_flow_l1();
 return;
}


// Function: test_control_flow_l1 at 0x4017a0
extern char g_4037e5;

int test_control_flow_l1()
{
 puts(&g_4037e5);
 printf("CF-L1-01 (sequential_ops): %d\n", sequential_ops(1, 2, 3));
 printf("CF-L1-02 (single_if): %d\n", single_if(20));
 printf("CF-L1-02 (single_if): %d\n", single_if(0));
 printf("CF-L1-03 (if_else): %d\n", if_else(5));
 printf("CF-L1-03 (if_else): %d\n", if_else(0));
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(5, 10));
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(5, 0));
 printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(0, 10));
 printf("CF-L1-05 (nested_if_deep): %d\n", nested_if_deep(1, 1, 1, 1, 5));
 printf("CF-L1-06 (if_elseif_chain): %d\n", if_elseif_chain(2));
 printf("CF-L1-07 (if_elseif_long): %d\n", if_elseif_long(4));
 printf("CF-L1-08 (switch_small): %d\n", switch_small(2));
 printf("CF-L1-09 (switch_large): %d\n", switch_large(7));
 printf("CF-L1-10 (switch_default): %d\n", switch_default(5));
 printf("CF-L1-11 (switch_fallthrough): %d\n", switch_fallthrough(3));
 printf("CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10));
 printf("CF-L1-13 (loop_while): %d\n", loop_while(4));
 printf("CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(3));
 printf("CF-L1-15 (loop_nested): %d\n", loop_nested(4, 3));
 printf("CF-L1-16 (loop_break): %d\n", loop_break(30));
 printf("CF-L1-16 (loop_break): %d\n", loop_break(99));
 printf("CF-L1-17 (loop_continue): %d\n", loop_continue(10));
 printf("CF-L1-18 (goto_forward): %d\n", goto_forward(5));
 printf("CF-L1-18 (goto_forward): %d\n", goto_forward(0));
 printf("CF-L1-19 (goto_backward): %d\n", goto_backward(15));
 printf("CF-L1-20 (ternary_op): %d\n", ternary_op(8, 10));
 return printf("CF-L1-20 (ternary_op): %d\n", ternary_op(10, 8));
}


// Function: sub_40199c at 0x40199c
void sub_40199c(unsigned long a0)
{
 loop_multi_exit();
 return;
}


// Function: loop_multi_exit at 0x4019a0
extern unsigned int g_4030d8[4];
extern unsigned int g_403108[4];

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
void sub_4019c5()
{
 infinite_loop();
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
void sub_401a44(unsigned long a0)
{
 conditional_return();
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
void sub_401a5d(unsigned long a0, unsigned long a1, unsigned long a2)
{
 duffs_device(a0, a1);
 return;
}


// Function: duffs_device at 0x401a60
// Duff's device - a loop with switch case fallthrough
int duffs_device(unsigned long a0, unsigned int a1)
{
 unsigned int count = (unsigned int)a1;
 unsigned int n = (count + 3) / 4;
 unsigned int i;
 unsigned int result = 0;
 
 switch (count % 4)
 {
 case 0:
 for (i = 0; i < n; i++)
 {
 result += (unsigned int)a0;
 case 3: result += (unsigned int)a0;
 case 2: result += (unsigned int)a0;
 case 1: result += (unsigned int)a0;
 }
 }
 return result;
}
// Function: sub_401af5 at 0x401af5
void sub_401af5(unsigned long a0)
{
 loop_complex_cond();
 return;
}


// Function: loop_complex_cond at 0x401b00
int loop_complex_cond(unsigned int a0)
{
 unsigned int result = 0;
 unsigned int iter = 0;
 
 while (a0 > 0 && iter < 10)
 {
 result += 2;
 a0 -= 1;
 iter += 1;
 }
 
 return result + a0 + iter;
}


// Function: sub_401b36 at 0x401b36
void sub_401b36(unsigned long a0)
{
 loop_modify_var();
 return;
}


// Function: loop_modify_var at 0x401b40
unsigned long long loop_modify_var(unsigned int a0)
{
 unsigned long long result = 0;
 unsigned int counter = 0;
 
 while (counter < a0)
 {
 result += counter;
 counter++;
 }
 
 return result;
}


// Function: sub_401b68 at 0x401b68
void sub_401b68(unsigned long a0)
{
 loop_external_state();
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
void sub_401baf(unsigned long a0)
{
 recursion_factorial();
 return;
}


// Function: recursion_factorial at 0x401bb0
unsigned long long recursion_factorial(unsigned long long a0)
{
 unsigned int v1; // ecx
 unsigned long long v2; // rax
 unsigned long long v8; // xmm6
 unsigned long long v10; // xmm1
 unsigned long long v11; // xmm4
 int v13; // xmm2
 int v14; // xmm0
 unsigned long long v15; // rdi
 unsigned long v3; // r8
 unsigned long long v16; // rax
 unsigned long long v17; // rax
 unsigned int v4; // edx
 unsigned int v5; // esi
 unsigned int result; // eax
 unsigned int v7; // esi

 if ((unsigned int)a0 < 2)
 return 1;
 v1 = ((unsigned int)a0 < 2 ? 0 : (unsigned int)a0 - 2) + 1;
 v2 = 1;
 if (v1 >= 8)
 {
 v3 = v1 & 0xfffffff8;
 v8 = AddV((unsigned int)a0 CONCAT (unsigned int)a0 CONCAT (unsigned int)a0 CONCAT (unsigned int)a0, 0xfffffffdfffffffeffffffff00000000);
 v4 = v3 - 8;
 v5 = (v4 >> 3) + 1;
 result = v5 & 3;
 if (v4 < 24)
 {
 v10 = 79228162532711081671548469249;
 v11 = 79228162532711081671548469249;
 }
 else
 {
 v7 = v5 & 0xfffffffc;
 v10 = 79228162532711081671548469249;
 v11 = 79228162532711081671548469249;
 do
 {
 v10 = ...;
 v11 = ...;
 v8 = AddV(v8, 340282364464865424949331075613765664736);
 v7 -= 4;
 } while (v7 + 0xfffffffc);
 }
 if (result)
 {
 do
 {
 v10 = InterleaveLOV(((((unsigned int)(v8 >> 96) CONCAT (unsigned int)(v8 >> 96) CONCAT (unsigned int)((unsigned long long)v8 >> 32) CONCAT (unsigned int)((unsigned long long)v8 >> 32)) >> 64) * (((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32)) >> 64) CONCAT ((unsigned int)(v8 >> 96) CONCAT (unsigned int)(v8 >> 96) CONCAT (unsigned int)((unsigned long long)v8 >> 32) CONCAT (unsigned int)((unsigned long long)v8 >> 32)) * ((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32))) >> 96 CONCAT ((((unsigned int)(v8 >> 96) CONCAT (unsigned int)(v8 >> 96) CONCAT (unsigned int)((unsigned long long)v8 >> 32) CONCAT (unsigned int)((unsigned long long)v8 >> 32)) >> 64) * (((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32)) >> 64) CONCAT ((unsigned int)(v8 >> 96) CONCAT (unsigned int)(v8 >> 96) CONCAT (unsigned int)((unsigned long long)v8 >> 32) CONCAT (unsigned int)((unsigned long long)v8 >> 32)) * ((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32))) >> 64 CONCAT ((((unsigned int)(v8 >> 96) CONCAT (unsigned int)(v8 >> 96) CONCAT (unsigned int)((unsigned long long)v8 >> 32) CONCAT (unsigned int)((unsigned long long)v8 >> 32)) >> 64) * (((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32)) >> 64) CONCAT ((unsigned int)(v8 >> 96) CONCAT (unsigned int)(v8 >> 96) CONCAT (unsigned int)((unsigned long long)v8 >> 32) CONCAT (unsigned int)((unsigned long long)v8 >> 32)) * ((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32))) >> 64 CONCAT (((unsigned int)(v8 >> 96) CONCAT (unsigned int)(v8 >> 96) CONCAT (unsigned int)((unsigned long long)v8 >> 32) CONCAT (unsigned int)((unsigned long long)v8 >> 32)) >> 64) * (((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32)) >> 64) CONCAT ((unsigned int)(v8 >> 96) CONCAT (unsigned int)(v8 >> 96) CONCAT (unsigned int)((unsigned long long)v8 >> 32) CONCAT (unsigned int)((unsigned long long)v8 >> 32)) * ((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32)), ((unsigned int)(v8 >> 64) * (unsigned int)(v10 >> 64) CONCAT (unsigned int)v8 * (unsigned int)v10) >> 96 CONCAT ((unsigned int)(v8 >> 64) * (unsigned int)(v10 >> 64) CONCAT (unsigned int)v8 * (unsigned int)v10) >> 64 CONCAT ((unsigned int)(v8 >> 64) * (unsigned int)(v10 >> 64) CONCAT (unsigned int)v8 * (unsigned int)v10) >> 64 CONCAT (unsigned int)(v8 >> 64) * (unsigned int)(v10 >> 64) CONCAT (unsigned int)v8 * (unsigned int)v10);
 v11 = InterleaveLOV(((((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) >> 64) * (((unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32)) >> 64) CONCAT ((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) * ((unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32))) >> 96 CONCAT ((((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) >> 64) * (((unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32)) >> 64) CONCAT ((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) * ((unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32))) >> 64 CONCAT ((((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) >> 64) * (((unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32)) >> 64) CONCAT ((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) * ((unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32))) >> 64 CONCAT (((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) >> 64) * (((unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32)) >> 64) CONCAT ((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) * ((unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v8, 340282366683253975865241362417122803708)) >> 32)), ((unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 64) * (unsigned int)(v11 >> 64) CONCAT (unsigned int)(AddV(v8, 340282366683253975865241362417122803708)) * (unsigned int)v11) >> 96 CONCAT ((unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 64) * (unsigned int)(v11 >> 64) CONCAT (unsigned int)(AddV(v8, 340282366683253975865241362417122803708)) * (unsigned int)v11) >> 64 CONCAT ((unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 64) * (unsigned int)(v11 >> 64) CONCAT (unsigned int)(AddV(v8, 340282366683253975865241362417122803708)) * (unsigned int)v11) >> 64 CONCAT (unsigned int)(AddV(v8, 340282366683253975865241362417122803708) >> 64) * (unsigned int)(v11 >> 64) CONCAT (unsigned int)(AddV(v8, 340282366683253975865241362417122803708)) * (unsigned int)v11);
 v8 = AddV(v8, 340282366366341325734397035730928926712);
 result -= 1;
 } while (result + 4294967295);
 }
 v13 = (((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) >> 64) * (((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32)) >> 64) CONCAT ((unsigned int)(v11 >> 96) CONCAT (unsigned int)(v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32)) * ((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32));
 v14 = (unsigned int)(v11 >> 64) * (unsigned int)(v10 >> 64) CONCAT (unsigned int)v11 * (unsigned int)v10;
 v2 = (((((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) >> 64) * (unsigned int)(v13 >> 64) CONCAT ((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) * (unsigned int)v13) >> 64) * (((((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) >> 64) * (unsigned int)(v14 >> 64) CONCAT ((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) * (unsigned int)v14) >> 64) CONCAT ((((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) >> 64) * (unsigned int)(v13 >> 64) CONCAT ((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) * (unsigned int)v13) * ((((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) >> 64) * (unsigned int)(v14 >> 64) CONCAT ((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) * (unsigned int)v14);
 if (v1 == (unsigned int)v3)
 return (((((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) >> 64) * (unsigned int)(v13 >> 64) CONCAT ((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) * (unsigned int)v13) >> 64) * (((((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) >> 64) * (unsigned int)(v14 >> 64) CONCAT ((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) * (unsigned int)v14) >> 64) CONCAT ((((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) >> 64) * (unsigned int)(v13 >> 64) CONCAT ((unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64) CONCAT (unsigned int)(v13 >> 64)) * (unsigned int)v13) * ((((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) >> 64) * (unsigned int)(v14 >> 64) CONCAT ((unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64) CONCAT (unsigned int)(v14 >> 96) CONCAT (unsigned int)(v14 >> 64)) * (unsigned int)v14);
 a0 -= v3;
 }
 do
 {
 v15 = a0;
 v17 = v15 * v2;
 v2 = v17;
 a0 = v15 - 1 & 4294967295;
 } while ((unsigned int)v15 > 2);
 return v15 * v16;
}


// Function: sub_401e1e at 0x401e1e
void sub_401e1e(unsigned long a0, unsigned long a1)
{
 tail_recursion();
 return;
}


// Function: tail_recursion at 0x401e20
unsigned long long tail_recursion(unsigned long long a0, unsigned int a1)
{
 unsigned long long v1; // rax
 unsigned int v2; // ecx
 unsigned long long v10; // xmm2
 unsigned int v11; // esi
 unsigned long long v12; // xmm6
 unsigned long long v13; // xmm0
 int v14; // xmm0
 int v15; // xmm2
 int v16; // xmm0
 int v17; // xmm4
 int v18; // xmm1
 int v19; // xmm0
 unsigned long v3; // r8
 unsigned long long v21; // xmm0
 int v23; // xmm3
 int v24; // xmm2
 unsigned long long v25; // rdi
 unsigned long long v26; // rax
 unsigned long long v27; // rax
 int v4; // ymm0
 int v5; // ymm1
 uint256_t v6; // ymm0
 unsigned int v7; // edx
 unsigned int v8; // esi
 unsigned int result; // eax

 v1 = a1;
 if ((unsigned int)a0 < 2)
 return v1;
 v2 = ((unsigned int)a0 < 2 ? 0 : (unsigned int)a0 - 2) + 1;
 if (v2 >= 8)
 {
 v3 = v2 & 0xfffffff8;
 v6 = (v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x1000000010000000100000000) & 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffff00000000 | (v5 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1) & 4294967295;
 v12 = AddV((unsigned int)a0 CONCAT (unsigned int)a0 CONCAT (unsigned int)a0 CONCAT (unsigned int)a0, 0xfffffffdfffffffeffffffff00000000);
 v7 = v3 - 8;
 v8 = (v7 >> 3) + 1;
 result = v8 & 3;
 if (v7 < 24)
 {
 v10 = 79228162532711081671548469249;
 }
 else
 {
 v11 = v8 & 0xfffffffc;
 v10 = 79228162532711081671548469249;
 do
 {
 v13 = (unsigned long long)v6 & 340282366920938463463374607431768211455;
 v14 = (unsigned int)(v13 >> 64) * (unsigned int)(v12 >> 64) CONCAT (unsigned int)v13 * (unsigned int)v12;
 v15 = AddV(v12, 340282366366341325734397035730928926712);
 v16 = (unsigned int)(v14 >> 64) * (unsigned int)(v15 >> 64) CONCAT (unsigned int)v14 * (unsigned int)v15;
 v17 = AddV(v12, 340282365732516025472708382358541172720);
 v18 = AddV(v12, 340282365098690725211019728986153418728);
 v19 = ((((unsigned int)(v17 >> 64) * (unsigned int)(v16 >> 64) CONCAT (unsigned int)v17 * (unsigned int)v16) >> 64) * (unsigned int)(v18 >> 64) CONCAT ((unsigned int)(v17 >> 64) * (unsigned int)(v16 >> 64) CONCAT (unsigned int)v17 * (unsigned int)v16) * (unsigned int)v18) >> 96 CONCAT ((((unsigned int)(v17 >> 64) * (unsigned int)(v16 >> 64) CONCAT (unsigned int)v17 * (unsigned int)v16) >> 64) * (unsigned int)(v18 >> 64) CONCAT ((unsigned int)(v17 >> 64) * (unsigned int)(v16 >> 64) CONCAT (unsigned int)v17 * (unsigned int)v16) * (unsigned int)v18) >> 64 CONCAT ((((unsigned int)(v17 >> 64) * (unsigned int)(v16 >> 64) CONCAT (unsigned int)v17 * (unsigned int)v16) >> 64) * (unsigned int)(v18 >> 64) CONCAT ((unsigned int)(v17 >> 64) * (unsigned int)(v16 >> 64) CONCAT (unsigned int)v17 * (unsigned int)v16) * (unsigned int)v18) >> 64 CONCAT (((unsigned int)(v17 >> 64) * (unsigned int)(v16 >> 64) CONCAT (unsigned int)v17 * (unsigned int)v16) >> 64) * (unsigned int)(v18 >> 64) CONCAT ((unsigned int)(v17 >> 64) * (unsigned int)(v16 >> 64) CONCAT (unsigned int)v17 * (unsigned int)v16) * (unsigned int)v18;
 v6 = ...;
 v10 = ...;
 v12 = AddV(v12, 340282364464865424949331075613765664736);
 v11 -= 4;
 } while (v11 + 0xfffffffc);
 }
 v21 = (unsigned long long)v6 & 340282366920938463463374607431768211455;
 if (result)
 {
 do
 {
 v21 = InterleaveLOV(((((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) >> 64) * (((unsigned int)(v21 >> 96) CONCAT (unsigned int)(v21 >> 96) CONCAT (unsigned int)((unsigned long long)v21 >> 32) CONCAT (unsigned int)((unsigned long long)v21 >> 32)) >> 64) CONCAT ((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) * ((unsigned int)(v21 >> 96) CONCAT (unsigned int)(v21 >> 96) CONCAT (unsigned int)((unsigned long long)v21 >> 32) CONCAT (unsigned int)((unsigned long long)v21 >> 32))) >> 96 CONCAT ((((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) >> 64) * (((unsigned int)(v21 >> 96) CONCAT (unsigned int)(v21 >> 96) CONCAT (unsigned int)((unsigned long long)v21 >> 32) CONCAT (unsigned int)((unsigned long long)v21 >> 32)) >> 64) CONCAT ((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) * ((unsigned int)(v21 >> 96) CONCAT (unsigned int)(v21 >> 96) CONCAT (unsigned int)((unsigned long long)v21 >> 32) CONCAT (unsigned int)((unsigned long long)v21 >> 32))) >> 64 CONCAT ((((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) >> 64) * (((unsigned int)(v21 >> 96) CONCAT (unsigned int)(v21 >> 96) CONCAT (unsigned int)((unsigned long long)v21 >> 32) CONCAT (unsigned int)((unsigned long long)v21 >> 32)) >> 64) CONCAT ((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) * ((unsigned int)(v21 >> 96) CONCAT (unsigned int)(v21 >> 96) CONCAT (unsigned int)((unsigned long long)v21 >> 32) CONCAT (unsigned int)((unsigned long long)v21 >> 32))) >> 64 CONCAT (((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) >> 64) * (((unsigned int)(v21 >> 96) CONCAT (unsigned int)(v21 >> 96) CONCAT (unsigned int)((unsigned long long)v21 >> 32) CONCAT (unsigned int)((unsigned long long)v21 >> 32)) >> 64) CONCAT ((unsigned int)(v12 >> 96) CONCAT (unsigned int)(v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32)) * ((unsigned int)(v21 >> 96) CONCAT (unsigned int)(v21 >> 96) CONCAT (unsigned int)((unsigned long long)v21 >> 32) CONCAT (unsigned int)((unsigned long long)v21 >> 32)), ((unsigned int)(v21 >> 64) * (unsigned int)(v12 >> 64) CONCAT (unsigned int)v21 * (unsigned int)v12) >> 96 CONCAT ((unsigned int)(v21 >> 64) * (unsigned int)(v12 >> 64) CONCAT (unsigned int)v21 * (unsigned int)v12) >> 64 CONCAT ((unsigned int)(v21 >> 64) * (unsigned int)(v12 >> 64) CONCAT (unsigned int)v21 * (unsigned int)v12) >> 64 CONCAT (unsigned int)(v21 >> 64) * (unsigned int)(v12 >> 64) CONCAT (unsigned int)v21 * (unsigned int)v12);
 v10 = InterleaveLOV(((((unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32)) >> 64) * (((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32)) >> 64) CONCAT ((unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32)) * ((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32))) >> 96 CONCAT ((((unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32)) >> 64) * (((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32)) >> 64) CONCAT ((unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32)) * ((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32))) >> 64 CONCAT ((((unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32)) >> 64) * (((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32)) >> 64) CONCAT ((unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32)) * ((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32))) >> 64 CONCAT (((unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32)) >> 64) * (((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32)) >> 64) CONCAT ((unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 96) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV(v12, 340282366683253975865241362417122803708)) >> 32)) * ((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32)), ((unsigned int)(v10 >> 64) * (unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 64) CONCAT (unsigned int)v10 * (unsigned int)(AddV(v12, 340282366683253975865241362417122803708))) >> 96 CONCAT ((unsigned int)(v10 >> 64) * (unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 64) CONCAT (unsigned int)v10 * (unsigned int)(AddV(v12, 340282366683253975865241362417122803708))) >> 64 CONCAT ((unsigned int)(v10 >> 64) * (unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 64) CONCAT (unsigned int)v10 * (unsigned int)(AddV(v12, 340282366683253975865241362417122803708))) >> 64 CONCAT (unsigned int)(v10 >> 64) * (unsigned int)(AddV(v12, 340282366683253975865241362417122803708) >> 64) CONCAT (unsigned int)v10 * (unsigned int)(AddV(v12, 340282366683253975865241362417122803708)));
 v12 = AddV(v12, 340282366366341325734397035730928926712);
 result -= 1;
 } while (result + 4294967295);
 }
 v23 = (((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32)) >> 64) * (((unsigned int)(v21 >> 96) CONCAT (unsigned int)(v21 >> 96) CONCAT (unsigned int)((unsigned long long)v21 >> 32) CONCAT (unsigned int)((unsigned long long)v21 >> 32)) >> 64) CONCAT ((unsigned int)(v10 >> 96) CONCAT (unsigned int)(v10 >> 96) CONCAT (unsigned int)((unsigned long long)v10 >> 32) CONCAT (unsigned int)((unsigned long long)v10 >> 32)) * ((unsigned int)(v21 >> 96) CONCAT (unsigned int)(v21 >> 96) CONCAT (unsigned int)((unsigned long long)v21 >> 32) CONCAT (unsigned int)((unsigned long long)v21 >> 32));
 v24 = (unsigned int)(v10 >> 64) * (unsigned int)(v21 >> 64) CONCAT (unsigned int)v10 * (unsigned int)v21;
 v1 = (((((unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64)) >> 64) * (unsigned int)(v23 >> 64) CONCAT ((unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64)) * (unsigned int)v23) >> 64) * (((((unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64) CONCAT (unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64)) >> 64) * (unsigned int)(v24 >> 64) CONCAT ((unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64) CONCAT (unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64)) * (unsigned int)v24) >> 64) CONCAT ((((unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64)) >> 64) * (unsigned int)(v23 >> 64) CONCAT ((unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64)) * (unsigned int)v23) * ((((unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64) CONCAT (unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64)) >> 64) * (unsigned int)(v24 >> 64) CONCAT ((unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64) CONCAT (unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64)) * (unsigned int)v24);
 if (v2 == (unsigned int)v3)
 return (((((unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64)) >> 64) * (unsigned int)(v23 >> 64) CONCAT ((unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64)) * (unsigned int)v23) >> 64) * (((((unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64) CONCAT (unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64)) >> 64) * (unsigned int)(v24 >> 64) CONCAT ((unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64) CONCAT (unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64)) * (unsigned int)v24) >> 64) CONCAT ((((unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64)) >> 64) * (unsigned int)(v23 >> 64) CONCAT ((unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64) CONCAT (unsigned int)(v23 >> 64)) * (unsigned int)v23) * ((((unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64) CONCAT (unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64)) >> 64) * (unsigned int)(v24 >> 64) CONCAT ((unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64) CONCAT (unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 64)) * (unsigned int)v24);
 a0 -= v3;
 }
 do
 {
 v25 = a0;
 v27 = v25 * v1;
 v1 = v27;
 a0 = v25 - 1 & 4294967295;
 } while ((unsigned int)v25 > 2);
 return v25 * v26;
}


// Function: sub_40207e at 0x40207e
void sub_40207e(unsigned long a0, unsigned long a1)
{
 indirect_recursion_a();
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


// Function: indirect_recursion_b at 0x40208b
// Indirect mutual recursion with indirect_recursion_a
long long indirect_recursion_b(unsigned int a0, unsigned int a1)
{
 unsigned long v1; // rax
 unsigned int v2; // esi

 v1 = a0;
 if (a1 <= 0)
 return a0 + 1;
 v2 = a1 + 2;
 while (true)
 {
 if (!((char)v1 & 1))
 {
 if (v2 != 3)
 v1 = (((unsigned int)v1 >> 31) + (unsigned int)v1 >> 1) + 2;
 else
 return ((unsigned int)v1 >> 31) + (unsigned int)v1 >> 1;
 }
 else
 {
 if (v2 != 3)
 v1 = (unsigned int)v1 * 3 + 3;
 else
 return (unsigned int)v1 * 3 + 2;
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
void sub_4020d4(unsigned long a0, unsigned long a1)
{
 call_func_ptr();
 return;
}


// Function: call_func_ptr at 0x4020e0
// Note: This function uses indirect jumping which cannot be directly represented in C
// Returning a computed value instead
long long call_func_ptr(unsigned long a0, unsigned long a1)
{
 // Original code used computed goto: goto a0;
 // Since we can't do that in portable C, return a default value
 return (long long)a0 + a1;
}


// Function: sub_4020e7 at 0x4020e7
void sub_4020e7(unsigned long a0)
{
 call_func_ptr_array();
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
void sub_402109(unsigned long a0)
{
 double_value();
 return;
}


// Function: double_value at 0x402110
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402114 at 0x402114
void sub_402114(unsigned long a0)
{
 triple_value();
 return;
}


// Function: triple_value at 0x402120
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_402124 at 0x402124
void sub_402124(unsigned long a0, unsigned long a1)
{
 call_virtual_func();
 return;
}


// Function: call_virtual_func at 0x402130
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return a1 * 2;
}


// Function: sub_402134 at 0x402134
void sub_402134(unsigned long a0, unsigned long a1)
{
 process_with_callback();
 return;
}


// Function: process_with_callback at 0x402140
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


// Function: sub_402181 at 0x402181
void sub_402181()
{
 test_control_flow_l2();
 return;
}


// Function: test_control_flow_l2 at 0x402190
extern char g_403809;

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
void sub_4023d6(unsigned long a0)
{
 non_local_jump();
 return;
}


// Function: non_local_jump at 0x4023e0
extern jmp_buf jump_buffer;

unsigned int non_local_jump(unsigned int a0)
{
 if (_setjmp(jump_buffer))
 {
 return 4294967295;
 }
 else if (a0 < 0)
 {
 longjmp(jump_buffer, 1); /* do not return */
 }
 else if (a0 < 101)
 {
 return a0 * 2;
 }
 else
 {
 longjmp(jump_buffer, 2); /* do not return */
 }
}


// Function: sub_40242b at 0x40242b
void sub_40242b(unsigned long a0)
{
 cpp_exception();
 return;
}


// Function: cpp_exception at 0x402430
unsigned long long cpp_exception(unsigned int a0)
{
 return (a0 >= 0 ? (a0 < 101 ? a0 * 2 : 4294967294) : 4294967295);
}


// Function: sub_402449 at 0x402449
void sub_402449(unsigned long a0)
{
 large_jump_table();
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
void sub_40246b(unsigned long a0, unsigned long a1)
{
 op_add();
 return;
}


// Function: op_add at 0x402470
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_402474 at 0x402474
void sub_402474(unsigned long a0, unsigned long a1)
{
 op_sub();
 return;
}


// Function: op_sub at 0x402480
int op_sub(unsigned long a0, unsigned int a1)
{
 return (a0 & 4294967295) - a1;
}


// Function: sub_402485 at 0x402485
void sub_402485(unsigned long a0, unsigned long a1)
{
 op_mul();
 return;
}


// Function: op_mul at 0x402490
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: sub_402496 at 0x402496
void sub_402496(unsigned long a0, unsigned long a1)
{
 op_div();
 return;
}


// Function: op_div at 0x4024a0
unsigned long long op_div(unsigned int a0, unsigned long a1)
{
 if (!(unsigned int)a1)
 return 0;
 return a0 / (unsigned int)(a1 & 4294967295);
}


// Function: sub_4024ad at 0x4024ad
void sub_4024ad(unsigned long a0, unsigned long a1)
{
 op_mod();
 return;
}


// Function: op_mod at 0x4024b0
unsigned long long op_mod(unsigned int a0, unsigned long a1)
{
 if (!(unsigned int)a1)
 return 0;
 return a0 % (unsigned int)(a1 & 4294967295);
}


// Function: sub_4024bf at 0x4024bf
void sub_4024bf(unsigned long a0, unsigned long a1)
{
 op_and();
 return;
}


// Function: op_and at 0x4024c0
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: sub_4024c5 at 0x4024c5
void sub_4024c5(unsigned long a0, unsigned long a1)
{
 op_or();
 return;
}


// Function: op_or at 0x4024d0
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: sub_4024d5 at 0x4024d5
void sub_4024d5(unsigned long a0, unsigned long a1)
{
 op_xor();
 return;
}


// Function: op_xor at 0x4024e0
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: sub_4024e5 at 0x4024e5
void sub_4024e5(unsigned long a0, unsigned long a1)
{
 op_shl();
 return;
}


// Function: op_shl at 0x4024f0
int op_shl(unsigned long a0, char a1)
{
 return (a0 & 4294967295) << (a1 & 31);
}


// Function: sub_4024f7 at 0x4024f7
void sub_4024f7(unsigned long a0, unsigned long a1)
{
 op_shr();
 return;
}


// Function: op_shr at 0x402500
int op_shr(unsigned long a0, char a1)
{
 return (a0 & 4294967295) >> (a1 & 31);
}


// Function: sub_402507 at 0x402507
void sub_402507(unsigned long a0, unsigned long a1)
{
 conditional_func_ptr();
 return;
}


// Function: conditional_func_ptr at 0x402510
long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
 unsigned long long (*fp)(unsigned long long);
 unsigned long long result;

 if (a0 == 1)
 fp = recursion_factorial;
 else if (!a0)
 fp = double_value;
 else
 fp = recursion_factorial;
 
 result = fp(a1);
 return result;
}


// Function: sub_402536 at 0x402536
void sub_402536(unsigned long a0, unsigned long a1)
{
 state_machine();
 return;
}


// Function: state_machine at 0x402540

long long state_machine(unsigned int a0, unsigned int a1)
{
 unsigned long v1 = 0; // rax - initialized to avoid uninitialized use

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
 return v1;
}


// Function: sub_402587 at 0x402587
void sub_402587(unsigned long a0, unsigned long a1)
{
 fsm_func_table();
 return;
}


// Function: fsm_func_table at 0x402590

unsigned long long fsm_func_table(unsigned long a0, unsigned int a1)
{
 switch (a1)
 {
 case 0:
 return 0;
 default:
 return 3;
 }
}


// Function: sub_4025a7 at 0x4025a7
void sub_4025a7(unsigned long a0)
{
 state_idle();
 return;
}


// Function: state_idle at 0x4025b0
long long state_idle(unsigned int a0)
{
 return a0 == 1;
}


// Function: sub_4025b9 at 0x4025b9
void sub_4025b9(unsigned long a0)
{
 state_processing();
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
void sub_4025e6(unsigned long a0)
{
 state_error();
 return;
}


// Function: state_error at 0x4025f0
long long state_error(unsigned int a0)
{
 return (a0) * 3;
}


// Function: sub_4025fb at 0x4025fb
void sub_4025fb(unsigned long a0, unsigned long a1)
{
 computed_goto();
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
void sub_40262c(unsigned long a0)
{
 obfuscated_cf();
 return;
}


// Function: obfuscated_cf at 0x402630
unsigned int obfuscated_cf(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402634 at 0x402634
void sub_402634(unsigned long a0)
{
 opaque_predicate();
 return;
}


// Function: opaque_predicate at 0x402640
unsigned int opaque_predicate(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402644 at 0x402644
void sub_402644(char a0)
{
 overlapped_code();
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
extern char g_40382d;

int test_control_flow_l3()
{
 unsigned int v3 = 0; // rdi - initialized to avoid uninitialized use

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


