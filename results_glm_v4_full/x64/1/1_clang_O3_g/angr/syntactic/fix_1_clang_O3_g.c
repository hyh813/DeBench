// Angr Decompilation of 1_clang_O3_g
// Platform: AMD64

#include <stdio.h>
#include <setjmp.h>
#include <stdbool.h>

/* Intrinsic function stubs */
static __inline unsigned long long AddV(unsigned long long a, unsigned long long b) { return a + b; }
static __inline int CmpEQV(unsigned long long a, unsigned long long b) { return a == b; }
static __inline unsigned long long InterleaveLOV(unsigned long long a, unsigned long long b) { return a | b; }

/* CONCAT macro for value concatenation */
#define CONCAT(hi, lo) (((unsigned long long)(hi) << 32) | ((unsigned long long)(lo) & 0xFFFFFFFF))

/* uint256_t type definition */
typedef unsigned __int128 uint256_t;

/* void_func_ptr type definition */
typedef unsigned long long *(*void_func_ptr)();

/* struct_0 type definition */
struct struct_0 { 
	void_func_ptr func; 
};



/* Forward declarations for functions called before definition */
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
unsigned long long loop_nested(unsigned int a0, unsigned int a1);
unsigned long long loop_break(unsigned int a0);
unsigned long long loop_continue(unsigned int a0);
unsigned int goto_forward(unsigned int a0);
unsigned long long goto_backward(unsigned int a0);
long long ternary_op(unsigned int a0, unsigned int a1);
int test_control_flow_l1();
unsigned long long loop_multi_exit(unsigned int a0);
unsigned long long infinite_loop(unsigned int *ptr);
unsigned long long multi_return(unsigned int a0);
unsigned int conditional_return(unsigned int a0);
unsigned long long duffs_device(unsigned long a0, unsigned long a1, unsigned long a2);
int loop_complex_cond(unsigned int a0);
unsigned long long loop_modify_var(unsigned int a0);
unsigned long long loop_external_state(unsigned int *a0);
unsigned long long recursion_factorial(unsigned long long a0);
unsigned long long tail_recursion(unsigned long long a0, unsigned int a1);
long long indirect_recursion_a(unsigned int a0, unsigned int a1);
long long call_func_ptr(unsigned long a0, unsigned long a1);
unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1);
unsigned int double_value(unsigned int a0);
unsigned int triple_value(unsigned int a0);
unsigned int call_virtual_func(unsigned long a0, unsigned int a1);
unsigned int process_with_callback(unsigned long a0, unsigned int a1, unsigned long long *a2);
int test_control_flow_l2();
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
int test_control_flow_l3();
unsigned int main();

extern struct struct_0 *g_405fe0;

/* Dummy function with correct signature for void_func_ptr */
unsigned long long *dummy_func() { 
	static unsigned long long val = 0;
	return &val; 
}

struct struct_0 g_405fe0_struct = { dummy_func };
struct struct_0 *g_405fe0 = &g_405fe0_struct;


// Function: sub_401020 at 0x401020
extern unsigned long long g_406008;
extern unsigned long long g_406010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 /* goto removed - computed goto not supported */
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 return puts("");
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010a5 at 0x4010a5
void sub_4010a5()
{
	/* Unsupported instruction: Ijk_SigTRAP at address 4198565 */
}






// Function: sub_401169 at 0x401169
void sub_401169(unsigned long a0, unsigned long a1, unsigned long a2)
{
 sequential_ops((unsigned int)a0, (unsigned int)a1, (unsigned int)a2);
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
 if_else((unsigned int)a0);
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
unsigned int g_403280[4] = {10, 50, 100, 200};

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
 v2 = a0;
 v1 = 0;
 do
 {
 a0 = (unsigned int)(a0 * 1717986919 >> 34) + (unsigned int)(a0 * 1717986919 >> 63);
 v1 = v1 + 1;
 } while (v1 < a0);
 return v2 + 1;
}


// Function: sub_401319 at 0x401319
void sub_401319()
{
 loop_dowhile(4);
 return;
}


// Function: loop_dowhile at 0x401320
long long loop_dowhile(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned int v2; // eax

 v2 = a0;
 v1 = 0;
 do
 {
 a0 = (unsigned int)(a0 * 1717986919 >> 34) + (unsigned int)(a0 * 1717986919 >> 63);
 v1 = v1 + 1;
 } while (v1 < a0);
 return v2 + 1;
}


// Function: sub_401353 at 0x401353
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
void sub_4013b8(unsigned long a0)
{
 loop_continue((unsigned int)a0);
 return;
}


// Function: loop_continue at 0x4013c0
unsigned long long loop_continue(unsigned int a0)
{
	if (a0 <= 0)
		return 0;
	return (a0 * (a0 + 1)) / 2;
}


// Function: sub_40152d at 0x40152d
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
unsigned long long goto_backward(unsigned int a0)
{
 unsigned long long v1;
 unsigned long long v2;
 unsigned int i;
 unsigned int v3;
 unsigned int result;

 if (a0 <= 0)
 return 1;
 v1 = 1;
 v2 = 1;
 if (a0 >= 8)
 {
 v3 = a0 & 0xfffffff8;
 result = ((v3 - 8) >> 3) + 1;
 result = result & 3;
 for (i = 0; i < result; i++)
 {
 v2 = v2 * (v3 - 7 - i);
 }
 v2 = v2 * v2;
 if (v3 == a0)
 return v2;
 v1 = v3 | 1;
 }
 do
 {
 v2 = v1 * v2;
 v1++;
 } while (v1 <= a0);
 return v2;
}


// Function: sub_40179b at 0x40179b
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
void sub_4017a8()
{
 test_control_flow_l1();
 return;
}


// Function: test_control_flow_l1 at 0x4017b0
char g_4037e5[] = "Control Flow Level 1 Tests:";

int test_control_flow_l1()
{
puts(g_4037e5);
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
void sub_4019ac(unsigned long a0)
{
 loop_multi_exit((unsigned int)a0);
 return;
}


// Function: loop_multi_exit at 0x4019b0
unsigned int g_403328[4] = {1, 2, 3, 4};
unsigned int g_403108[4] = {5, 10, 15, 20};

unsigned long long loop_multi_exit(unsigned int a0)
{
 unsigned int v1; // edi
 unsigned long long v2; // rax

 v1 = a0 - 1;
 v2 = 4294967295;
 if (v1 <= 11)
 v2 = g_403108[v1] + g_403328[v1];
 return v2;
}


// Function: sub_4019d5 at 0x4019d5
void sub_4019d5(unsigned long a0)
{
 unsigned int dummy = 0;
 infinite_loop(&dummy);
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
 while (true)
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
void sub_401a6d(unsigned long a0, unsigned long a1, unsigned long a2)
{
 duffs_device(a0, a1, a2);
 return;
}


unsigned long long duffs_device(unsigned long a0, unsigned long a1, unsigned long a2)
{
 unsigned int i;
 unsigned int n;
 unsigned int count;
 unsigned long long result;
 
 count = (unsigned int)a2;
 result = 0;
 n = (count + 7) / 8;
 switch (count % 8) {
 case 0: do { result += a0;
 case 7: result += a1;
 case 6: result += a0;
 case 5: result += a1;
 case 4: result += a0;
 case 3: result += a1;
 case 2: result += a0;
 case 1: result += a1;
 } while (--n > 0);
 }
 return result;
}

// Function: sub_401b05 at 0x401b05
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

 if (a0 <= 0)
 return 0 + a0;
 v1 = 0;
 v2 = 0;
 do
 {
 v3 = v1;
 v2 += 2;
 a0 -= 1;
 v1 = v3 + 1;
 } while (v2 < a0 && v1 < 9);
 return v2 + a0 + v1;
}


// Function: sub_401b49 at 0x401b49
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
void sub_401b78(unsigned long a0)
{
 unsigned int dummy = 0;
 loop_external_state(&dummy);
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


// Function: sub_401bbf at 0x401bbf
void sub_401bbf(unsigned long a0)
{
 recursion_factorial(a0);
 return;
}


// Function: recursion_factorial at 0x401bc0
unsigned long long recursion_factorial(unsigned long long a0)
{
 unsigned long long result;
 unsigned long long i;

 if (a0 < 2)
 return 1;
 result = 1;
 for (i = 2; i <= a0; i++)
 {
 result *= i;
 }
 return result;
}


// Function: sub_401e2e at 0x401e2e
void sub_401e2e(unsigned long a0, unsigned long a1)
{
 tail_recursion(a0, (unsigned int)a1);
 return;
}


// Function: tail_recursion at 0x401e30
unsigned long long tail_recursion(unsigned long long a0, unsigned int a1)
{
 unsigned long long result;
 unsigned long long i;

 if (a0 < 2)
 return a1;
 result = a1;
 for (i = 2; i <= a0; i++)
 {
 result *= i;
 }
 return result;
}


// Function: sub_40208e at 0x40208e
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
void sub_40209b()
{
 return;
}


// Function: sub_4020c1 at 0x4020c1
void sub_4020c1()
{
 return;
}


// Function: sub_4020e4 at 0x4020e4
void sub_4020e4(unsigned long a0, unsigned long a1)
{
 call_func_ptr(a0, a1);
 return;
}


// Function: call_func_ptr at 0x4020f0
long long call_func_ptr(unsigned long a0, unsigned long a1)
{
 return a0 + a1;
}


// Function: sub_4020f7 at 0x4020f7
void sub_4020f7(unsigned long a0)
{
 call_func_ptr_array((unsigned int)a0, 0);
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
void sub_402144(unsigned long a0, unsigned long a1)
{
 unsigned long long dummy = 0;
 process_with_callback(a0, (unsigned int)a1, &dummy);
 return;
}


// Function: process_with_callback at 0x402150
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
 v2 += *((int *)(a0 + i * 4));
 i += 1;
 } while (a1 != i);
 return v2;
}


// Function: sub_402191 at 0x402191
void sub_402191()
{
 test_control_flow_l2();
 return;
}


// Function: test_control_flow_l2 at 0x4021a0
char g_403809[] = "Control Flow Level 2 Tests:";

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
void sub_4023e6(unsigned long a0)
{
 non_local_jump((unsigned int)a0);
 return;
}


// Function: non_local_jump at 0x4023f0
jmp_buf jump_buffer;

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


// Function: sub_40243f at 0x40243f
void sub_40243f(unsigned long a0)
{
 cpp_exception(a0);
 return;
}


// Function: cpp_exception at 0x402440
unsigned long long cpp_exception(unsigned int a0)
{
 return (a0 >= 0 ? (a0 < 101 ? a0 * 2 : 4294967294) : 4294967295);
}


// Function: sub_402459 at 0x402459
void sub_402459(unsigned long a0)
{
 large_jump_table((unsigned int)a0, 0, 0);
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
 return (CONCAT(a0 >> 31, a0) / (a1 & 4294967295)) & 4294967295;
}


// Function: sub_4024bd at 0x4024bd
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
 return (CONCAT(a0 >> 31, a0) % (a1 & 4294967295)) & 4294967295;
}


// Function: sub_4024cf at 0x4024cf
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
void sub_402517(unsigned long a0, unsigned long a1)
{
 conditional_func_ptr((unsigned int)a0, a1);
 return;
}


// Function: conditional_func_ptr at 0x402520
long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
 unsigned long long v1; // rcx

 v1 = (a0 == 1 ? (unsigned long long)triple_value : (unsigned long long)recursion_factorial);
 if (!a0)
 v1 = (unsigned long long)double_value;
 return a0 + a1;
}


// Function: sub_402546 at 0x402546
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
 break;
 }
}


// Function: sub_402597 at 0x402597
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
void sub_402677()
{
 test_control_flow_l3();
 return;
}


// Function: test_control_flow_l3 at 0x402680
char g_40382d[] = "Control Flow Level 3 Tests:";

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
 v3 = 10;
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto(v3, 2) & 4294967295);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


// Function: sub_402785 at 0x402785
void sub_402785()
{
 main();
 return;
}


// Function: main at 0x402790
unsigned int main()
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


