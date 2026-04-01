// Angr Decompilation of 1_clang_O3_no_g
// Platform: AMD64

#include <stdio.h>
#include <setjmp.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <inttypes.h>

/* CRT stub function _init removed by preprocessor */

// Type definitions
typedef struct { uint64_t lo; uint64_t hi; } uint128_t;
typedef struct { uint128_t lo; uint128_t hi; } uint256_t;

// Helper macros and functions for vector operations
#define CONCAT4(a, b, c, d) (((((uint64_t)(a) << 96) | (((uint64_t)(b) & 0xFFFFFFFF) << 64)) | (((uint64_t)(c) & 0xFFFFFFFF) << 32)) | ((uint64_t)(d) & 0xFFFFFFFF))
// Define CONCAT as variadic macro that concatenates 4 values
#define CONCAT(...) CONCAT4(__VA_ARGS__)

// Helper to create uint256_t from low 64-bit value
static inline uint256_t MAKE_U256_FROM_LO(uint64_t lo) {
    uint256_t result;
    result.lo.lo = lo & 0xFFFFFFFF;
    result.lo.hi = (lo >> 32) & 0xFFFFFFFF;
    result.hi.lo = 0;
    result.hi.hi = 0;
    return result;
}

// Helper function to shift uint256_t right by n bits (32-bit chunks)
static inline uint256_t shift_right_32(uint256_t x, int n) {
    uint256_t result = {0};
    switch (n) {
        case 0: result = x; break;
        case 1: result.lo.lo = x.lo.hi; result.lo.hi = x.hi.lo; result.hi.lo = x.hi.hi; result.hi.hi = 0; break;
        case 2: result.lo.lo = x.hi.lo; result.lo.hi = x.hi.hi; result.hi.lo = 0; result.hi.hi = 0; break;
        case 3: result.lo.lo = x.hi.hi; result.lo.hi = 0; result.hi.lo = 0; result.hi.hi = 0; break;
        default: result.lo.lo = 0; result.lo.hi = 0; result.hi.lo = 0; result.hi.hi = 0; break;
    }
    return result;
}

static inline uint256_t shift_right_64(uint256_t x) {
    uint256_t result;
    result.lo = x.hi;
    result.hi = (uint128_t){0, 0};
    return result;
}

static inline uint256_t shift_right_96(uint256_t x) {
    uint256_t result;
    result.lo.lo = x.hi.lo;
    result.lo.hi = x.hi.hi;
    result.hi = (uint128_t){0, 0};
    return result;
}

// Helper to get low 32 bits
static inline uint32_t u256_lo_lo(uint256_t x) { return x.lo.lo; }
// Helper to get bits 32-63
static inline uint32_t u256_lo_hi(uint256_t x) { return x.lo.hi; }
// Helper to get bits 64-95
static inline uint32_t u256_hi_lo(uint256_t x) { return x.hi.lo; }
// Helper to get bits 96-127
static inline uint32_t u256_hi_hi(uint256_t x) { return x.hi.hi; }

// Helper to get 32-bit parts from uint256_t
#define U256_GET32(x, idx) \
    ((idx) == 0 ? (x).lo.lo : \
     (idx) == 1 ? (x).lo.hi : \
     (idx) == 2 ? (x).hi.lo : \
     (x).hi.hi)

// Helper macros to access uint256_t fields
#define U256_LOLO(x) ((x).lo.lo)
#define U256_LOHI(x) ((x).lo.hi)
#define U256_HILO(x) ((x).hi.lo)
#define U256_HIHI(x) ((x).hi.hi)

// Helper to create uint256_t from 4 uint64_t values
#define MAKE_U256(a, b, c, d) ((uint256_t){(a), (b), (c), (d)})

static inline uint256_t MAKE_U256_FROM_INT(int x) {
    uint256_t result;
    uint32_t val = x ? 0xFFFFFFFF : 0;
    result.lo.lo = val;
    result.lo.hi = val;
    result.hi.lo = val;
    result.hi.hi = val;
    return result;
}

static inline uint256_t CmpEQV(uint256_t a, uint256_t b) {
    return MAKE_U256_FROM_INT(a.lo.lo == b.lo.lo && a.lo.hi == b.lo.hi && a.hi.lo == b.hi.lo && a.hi.hi == b.hi.hi);
}

static inline uint256_t AddV(uint256_t a, uint256_t b) {
    uint256_t result;
    result.lo.lo = a.lo.lo + b.lo.lo;
    result.lo.hi = a.lo.hi + b.lo.hi;
    result.hi.lo = a.hi.lo + b.hi.lo;
    result.hi.hi = a.hi.hi + b.hi.hi;
    return result;
}

static inline uint256_t InterleaveLOV(uint256_t a, uint256_t b) {
    uint256_t result;
    result.lo.lo = a.lo.lo;
    result.lo.hi = b.lo.lo;
    result.hi.lo = a.lo.hi;
    result.hi.hi = b.lo.hi;
    return result;
}

// Forward declaration
struct struct_0 { void *dummy; };

// Function forward declarations
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
int test_control_flow_l1(void);
unsigned long long loop_multi_exit(unsigned int a0);
unsigned long long infinite_loop(unsigned int *ptr);
unsigned long long multi_return(unsigned int a0);
unsigned int conditional_return(unsigned int a0);
unsigned long long duffs_device(unsigned long count, unsigned long to, unsigned long from);
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
typedef unsigned long long (*callback_func_t)(unsigned int);
unsigned int process_with_callback(unsigned long a0, unsigned int a1, callback_func_t a2);
int test_control_flow_l2(void);
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
unsigned long long state_done(void);
long long state_error(unsigned int a0);
unsigned long long computed_goto(unsigned long a0, unsigned int a1);
unsigned int obfuscated_cf(unsigned int a0);
unsigned int opaque_predicate(unsigned int a0);
int overlapped_code(unsigned int a0);
int test_control_flow_l3(void);
unsigned int main(void);

extern struct struct_0 *g_405fe0;

// Global variable definitions
struct struct_0 *g_405fe0 = NULL;
unsigned long long g_406008 = 0;
unsigned long long g_406010 = 0;
unsigned int g_403280[4] = {0, 10, 20, 30};
unsigned int g_4030d8[4] = {1, 2, 3, 4};
unsigned int g_403108[4] = {10, 20, 30, 40};
char g_4037e5[32] = "Testing Control Flow Level 1\n";
char g_403809[32] = "Testing Control Flow Level 2\n";
char g_40382d[32] = "Testing Control Flow Level 3\n";
jmp_buf jump_buffer;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_405fe0;
 return v1;
}


// Function: sub_401020 at 0x401020
void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 /* computed goto removed - not valid in C */
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1; // rdi

 v1 = NULL;
 return puts(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010a5 at 0x4010a5
void sub_4010a5()
{
 /* Ijk_SigTRAP - debugger trap */
}


// Function: sub_4010a6 at 0x4010a6
void sub_4010a6()
{
 /* deregister_tm_clones removed by preprocessor */
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010d9 at 0x4010d9
void sub_4010d9()
{
 /* register_tm_clones removed by preprocessor */
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401119 at 0x401119
void sub_401119()
{
 /* __do_global_dtors_aux removed by preprocessor */
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
 /* frame_dummy removed by preprocessor */
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401169 at 0x401169
void sub_401169(unsigned long a0, unsigned long a1, unsigned long a2)
{
 sequential_ops(a0, a1, a2);
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
 if_elseif_chain(a0);
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
 if_elseif_long(a0);
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
 switch_small(a0);
 return;
}


// Function: switch_small at 0x401230
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
 switch_large(a0);
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
 loop_while(a0);
 return;
}


// Function: loop_while at 0x4012e0
unsigned long long loop_while(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned long v3; // rcx
 unsigned int v4; // eax

 if (!a0)
 return 1;
 v1 = 0;
 v3 = 0;
 do
 {
 a0 = (unsigned int)(a0 * 1717986919 >> 34) + (unsigned int)(a0 * 1717986919 >> 63);
 v4 = v1 + 1;
 v1 = v4;
 } while ((unsigned int)v3 + 9 > 18);
 return v1 + 1;
}


// Function: sub_401319 at 0x401319
void sub_401319()
{
 loop_dowhile(5);
 return;
}


// Function: loop_dowhile at 0x401320
long long loop_dowhile(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned long v3; // rcx
 unsigned int v4; // eax

 v1 = 0;
 v3 = 0;
 do
 {
 a0 = (unsigned int)(a0 * 1717986919 >> 34) + (unsigned int)(a0 * 1717986919 >> 63);
 v4 = v1 + 1;
 v1 = v4;
 } while ((unsigned int)v3 + 9 > 18);
 return v1 + 1;
}


// Function: sub_401353 at 0x401353
void sub_401353(unsigned long a0, unsigned long a1)
{
 loop_nested(a0, a1);
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
 loop_break(a0);
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
 return 4;
 case 10:
 return 0;
 default:
 return 4294967295;
 }
}


// Function: sub_4013b8 at 0x4013b8
void sub_4013b8(unsigned long a0)
{
 loop_continue(a0);
 return;
}


// Function: loop_continue at 0x4013c0
unsigned long long loop_continue(unsigned int a0)
{
 unsigned long long v1; // rax
 unsigned int j; // ecx
 uint256_t v10;
 uint256_t v12;
 unsigned long long v13; // xmm1lq
 unsigned int v14; // ecx
 unsigned long long v15; // rax
 unsigned long long v16; // rax
 unsigned int v3; // ecx
 unsigned int result; // edx
 unsigned int v5; // eax
 int v6;
 unsigned long long v7; // xmm5
 uint256_t v8;
 uint256_t v9;
 uint256_t v4 = MAKE_U256(1, 1, 1, 1);

 if (a0 <= 0)
 return 0;
 if (a0 < 8)
 {
 v1 = 0;
 j = 1;
 }
 else
 {
 v3 = a0 & 0xfffffff8;
 result = v3 - 8;
 v5 = (result >> 3) + 1;
 if (result)
 {
v6 = v5 & 4294967294;
        v7 = MAKE_U256(316912650112397582603894390785ULL, 0, 0, 0);
        v8 = MAKE_U256(0, 0, 0, 0);
        v9 = MAKE_U256(0, 0, 0, 0);
 do
 {
 v10 = CmpEQV(v7 & MAKE_U256(79228162532711081671548469249ULL, 0, 0, 0), MAKE_U256(0, 0, 0, 0));
 v8 = AddV(~((uint256_t)v10) & AddV(v7, MAKE_U256(633825300261688653372387753992ULL, 0, 0, 0)), AddV(~((uint256_t)v10) & v7, v8));
 v9 = AddV(~((uint256_t)v10) & AddV(v7, MAKE_U256(950737950392532980058581630988ULL, 0, 0, 0)), AddV(~((uint256_t)v10) & AddV(v7, MAKE_U256(316912650130844326686193876996ULL, 0, 0, 0)), v9));
 v7 = AddV(v7, MAKE_U256(1267650600523377306744775507984ULL, 0, 0, 0));
 v6 -= 2;
 } while (v6 + 4294967294);
 if (((char)v5 & 1))
 goto LABEL_4014a6;
 }
else
    {
        v8 = MAKE_U256(0, 0, 0, 0);
        v7 = MAKE_U256(316912650112397582603894390785ULL, 0, 0, 0);
        v9 = MAKE_U256(0, 0, 0, 0);
        if (((char)v5 & 1))
 {
LABEL_4014a6:
 v12 = CmpEQV(MAKE_U256(0, 0, 0, 0), MAKE_U256(79228162532711081671548469249ULL, 0, 0, 0) & v7);
 v8 = AddV(v8, ~((uint256_t)v12) & v7);
 v9 = AddV(v9, ~((uint256_t)v12) & AddV(MAKE_U256(316912650130844326686193876996ULL, 0, 0, 0), v7));
 }
 }
 {
 uint256_t sum = AddV(v8, v9);
 uint256_t sum1 = MAKE_U256(U256_GET32(sum, 0), U256_GET32(sum, 1), U256_GET32(sum, 2), U256_GET32(sum, 3));
 v13 = sum1;
 v1 = sum1;
 }
 if (v3 == a0)
 return v1;
 j = v3 | 1;
 }
 do
 {
 v14 = j;
 v16 = v1 + (-(v14 & 1) & v14);
 v1 = v16;
 j = v14 + 1;
 } while (a0 + 1 != j);
 return v16 + (-(v14 & 1) & v14);
}


// Function: sub_40152d at 0x40152d
void sub_40152d(unsigned long a0)
{
 goto_forward(a0);
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
 unsigned long long product = 1;
 unsigned int i;

 if (a0 <= 0)
 return 1;
 for (i = 1; i <= a0; i++) {
 product *= i;
 }
 return product;
}


// Function: sub_40179b at 0x40179b
void sub_40179b(unsigned long a0, unsigned long a1)
{
 ternary_op(a0, a1);
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
void sub_4019ac(unsigned long a0)
{
 loop_multi_exit(a0);
 return;
}


// Function: loop_multi_exit at 0x4019b0
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
 multi_return(a0);
 return;
}


// Function: multi_return at 0x401a30
unsigned long long multi_return(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967294;
 if (a0 <= 50)
 v1 = (!((char)a0 & 1) ? a0 * 2 : a0 + 1);
 return v1;
}


// Function: sub_401a54 at 0x401a54
void sub_401a54(unsigned long a0)
{
 conditional_return(a0);
 return;
}


// Function: conditional_return at 0x401a60
unsigned int conditional_return(unsigned int a0)
{
 if (a0 == 0)
 return 0;
 return a0 * 2;
}


// Function: sub_401a6d at 0x401a6d
void sub_401a6d(unsigned long a0, unsigned long a1, unsigned long a2)
{
 duffs_device(a0, a1, a2);
 return;
}

// Function: duffs_device at 0x401a70
unsigned long long duffs_device(unsigned long count, unsigned long to, unsigned long from) {
    unsigned long long result = 0;
    int n = (count + 7) / 8;
    switch (count % 8) {
        case 0: do { result += from;
        case 7:      result += from;
        case 6:      result += from;
        case 5:      result += from;
        case 4:      result += from;
        case 3:      result += from;
        case 2:      result += from;
        case 1:      result += from;
        } while (--n > 0);
    }
    return result;
}
// Function: sub_401b05 at 0x401b05
void sub_401b05(unsigned long a0)
{
 loop_complex_cond(a0);
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
 v4 = 2;
 do
 {
 v3 = v1;
 v2 += 2;
 a0 -= 1;
 } while (v4 >= 2 && v2 < a0 && (v5 = v3 + 1, v1 = v3 + 1, v3 < 9));
 return v2 + a0 + v3 + 1;
}


// Function: sub_401b49 at 0x401b49
void sub_401b49(unsigned long a0)
{
 loop_modify_var(a0);
 return;
}


// Function: loop_modify_var at 0x401b50
unsigned long long loop_modify_var(unsigned int a0)
{
 unsigned long long v1; // rcx
 unsigned long long v2; // rax
 unsigned long long v4; // rcx
 unsigned long long v5; // rax
 unsigned int v6; // edx
 unsigned long v7; // rcx

 if (a0 <= 0)
 return 0;
 v1 = 0;
 v2 = 0;
 v4 = 0;
 do
 {
 v5 = v2 + v1;
 } while ((v6 = ((unsigned int)v4 < 6 ? (unsigned int)v4 : (unsigned int)v4 + 2) + 1, v7 = (unsigned long long)v6, v1 = (unsigned long long)v6, v2 = v5, v6 < a0));
 return v2 + v4;
}


// Function: sub_401b78 at 0x401b78
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
 unsigned int v1; // ecx
 unsigned long long v2; // rax
 unsigned long long v3; // r8
 unsigned int v4;
 unsigned int v5;
 unsigned int result; // eax
 unsigned int v7; // esi
 unsigned long long v10 = 79228162532711081671548469249ULL;
 unsigned long long v11 = 79228162532711081671548469249ULL;
 uint256_t v8 = MAKE_U256(0, 0, 0, 0);

 if ((unsigned int)a0 < 2)
 return 1;
 v1 = ((unsigned int)a0 < 2 ? 0 : (unsigned int)a0 - 2) + 1;
 v2 = 1;
 if (v1 >= 8)
 {
 v3 = v1 & 0xfffffff8;
 v8 = MAKE_U256((uint64_t)(a0 - 1), (uint64_t)(a0 - 1), (uint64_t)a0, (uint64_t)a0);
 v4 = v3 - 8;
 v5 = (v4 >> 3) + 1;
 result = v5 & 3;
 if (v4 < 24)
 {
 v10 = 79228162532711081671548469249ULL;
 v11 = 79228162532711081671548469249ULL;
 }
 else
 {
 v7 = v5 & 0xfffffffc;
 v10 = 79228162532711081671548469249ULL;
 v11 = 79228162532711081671548469249ULL;
 do
 {
 v10 = v10;
 v11 = v11;
 v8 = AddV(v8, MAKE_U256(1, 1, 1, 1));
 v7 -= 4;
 } while (v7 + 0xfffffffc);
 }
 if (result)
 {
 do
 {
 v10 = v10;
 v11 = v11;
 v8 = AddV(v8, MAKE_U256(1, 1, 1, 1));
 result -= 1;
 } while (result + 4294967295);
 }
 v2 = a0;
 if (v1 == (unsigned int)v3)
 return v2;
 a0 -= v3;
 }
 do
 {
 v2 = a0 * v2;
 a0 = a0 - 1 & 4294967295;
 } while (a0 > 2);
 return v2;
}


// Function: sub_401e2e at 0x401e2e
void sub_401e2e(unsigned long a0, unsigned long a1)
{
 tail_recursion(a0, a1);
 return;
}


// Function: tail_recursion at 0x401e30
unsigned long long tail_recursion(unsigned long long a0, unsigned int a1)
{
 unsigned long long v1; // rax
 unsigned long long v25; // rdi
 unsigned long long v27; // rax

 v1 = a1;
 if ((unsigned int)a0 < 2)
 return v1;
 do
 {
 v25 = a0;
 v27 = v25 * v1;
 v1 = v27;
 a0 = v25 - 1 & 4294967295;
 } while ((unsigned int)v25 > 2);
 return v1;
}


// Function: sub_40208e at 0x40208e
void sub_40208e(unsigned long a0, unsigned long a1)
{
 indirect_recursion_a(a0, a1);
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
}


// Function: sub_4020c1 at 0x4020c1
void sub_4020c1()
{
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
 /* computed goto removed - not valid in C */
 return 0;
}


// Function: sub_4020f7 at 0x4020f7
void sub_4020f7(unsigned long a0)
{
 call_func_ptr_array(a0, a0);
 return;
}


// Function: call_func_ptr_array at 0x402100

unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1)
{
 switch (a0)
 {
 case 0:
 return 0;
 default:
 return 4294967295;
 }
}


// Function: sub_402119 at 0x402119
void sub_402119(unsigned long a0)
{
 double_value(a0);
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
 triple_value(a0);
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
 call_virtual_func(a0, a1);
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
 process_with_callback(a0, a1, 0);
 return;
}


// Function: process_with_callback at 0x402150
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


// Function: sub_402191 at 0x402191
void sub_402191()
{
 test_control_flow_l2();
 return;
}


// Function: test_control_flow_l2 at 0x4021a0
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
 non_local_jump(a0);
 return;
}


// Function: non_local_jump at 0x4023f0
unsigned int non_local_jump(unsigned int a0)
{
 if (_setjmp(&jump_buffer))
 {
 return 4294967295;
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


// Function: sub_40243f at 0x40243f
void sub_40243f(unsigned long a0)
{
 cpp_exception(a0);
 return;
}


// Function: cpp_exception at 0x402440
unsigned long long cpp_exception(unsigned int a0)
{
 return (a0 < 101 ? a0 * 2 : 4294967294);
}


// Function: sub_402459 at 0x402459
void sub_402459(unsigned long a0)
{
 large_jump_table(a0, a0, a0);
 return;
}


// Function: large_jump_table at 0x402460

unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2)
{
 switch (a0)
 {
 case 0:
 return 0;
 default:
 return 4294967295;
 }
}


// Function: sub_40247b at 0x40247b
void sub_40247b(unsigned long a0, unsigned long a1)
{
 op_add(a0, a1);
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
 op_sub(a0, a1);
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
 op_mul(a0, a1);
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
 op_div(a0, a1);
 return;
}


// Function: op_div at 0x4024b0
unsigned long long op_div(unsigned int a0, unsigned long a1)
{
 int64_t dividend;
 int64_t divisor;
 int64_t result;
 
 if (!(unsigned int)a1)
 return 0;
 dividend = (int64_t)(int32_t)a0;
 divisor = (int64_t)(int32_t)a1;
 result = dividend / divisor;
 return (uint64_t)result & 0xFFFFFFFF;
}


// Function: sub_4024bd at 0x4024bd
void sub_4024bd(unsigned long a0, unsigned long a1)
{
 op_mod(a0, a1);
 return;
}


// Function: op_mod at 0x4024c0
unsigned long long op_mod(unsigned int a0, unsigned long a1)
{
 int64_t dividend;
 int64_t divisor;
 int64_t quot;
 int64_t rem;
 
 if (!(unsigned int)a1)
 return 0;
 dividend = (int64_t)(int32_t)a0;
 divisor = (int64_t)(int32_t)a1;
 quot = dividend / divisor;
 rem = dividend - (quot * divisor);
 return (uint64_t)rem & 0xFFFFFFFF;
}


// Function: sub_4024cf at 0x4024cf
void sub_4024cf(unsigned long a0, unsigned long a1)
{
 op_and(a0, a1);
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
 op_or(a0, a1);
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
 op_xor(a0, a1);
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
 op_shl(a0, a1);
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
 op_shr(a0, a1);
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
 conditional_func_ptr(a0, a1);
 return;
}


// Function: conditional_func_ptr at 0x402520
long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
 unsigned long long v1; // rcx

 v1 = (a0 == 1 ? (unsigned long long)(uintptr_t)triple_value : (unsigned long long)(uintptr_t)recursion_factorial);
 if (!a0)
 v1 = (unsigned long long)(uintptr_t)double_value;
 /* computed goto removed - not valid in C */
 return 0;
}


// Function: sub_402546 at 0x402546
void sub_402546(unsigned long a0, unsigned long a1)
{
 state_machine(a0, a1);
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
 fsm_func_table(a0, a1);
 return;
}


// Function: fsm_func_table at 0x4025a0

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


// Function: sub_4025b7 at 0x4025b7
void sub_4025b7(unsigned long a0)
{
 state_idle(a0);
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
 state_processing(a0);
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
 state_error(a0);
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
 computed_goto(a0, a1);
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
 obfuscated_cf(a0);
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
 opaque_predicate(a0);
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
 overlapped_code(a0);
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
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto(1, 2) & 4294967295);
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
 unsigned long long v0; // [bp-0x8]

 v0 = 0;
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


