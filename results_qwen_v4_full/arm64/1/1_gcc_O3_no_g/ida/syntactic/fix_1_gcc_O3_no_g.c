/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/1/1_gcc_O3_no_g
 * Processor: arm
 */

#include <arm_neon.h>
#include <setjmp.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Declare __longjmp_chk if not in headers */
extern void __longjmp_chk(jmp_buf __env, int __val) __attribute__((noreturn));

/* Macros for decompiled code */
#define LODWORD(x) ((unsigned int)(x))

/* Global variables */
unsigned long long _stack_chk_guard = 0;
jmp_buf jump_buffer;

/* Wrapper unions for NEON vectors with n128_u64 access */
typedef union {
    int8x16_t vec;
    unsigned long long n128_u64[2];
    unsigned int n128_u32[4];
} int8x16_union_t;

typedef union {
    int32x4_t vec;
    unsigned long long n128_u64[2];
    unsigned int n128_u32[4];
} int32x4_union_t;

int32x4_union_t xmmword_2B00 = {{0}};
int32x4_union_t xmmword_2B10 = {{0}};
int32x4_union_t xmmword_2B20 = {{0}};
int32x4_union_t xmmword_2B40 = {{0}};
int32x4_union_t xmmword_2B50 = {{0}};

/* String constants */
const char *asc_24B8 = "";
const char *asc_2760 = "";
const char *asc_2980 = "";

/* Switch tables and offset arrays */
long long CSWTCH_55[4] = {10, 20, 30, 40};
unsigned long long off_14010[1] = {0};
unsigned long long off_14018[1] = {0};
unsigned long long off_14020[1] = {0};
unsigned long long off_14028[1] = {0};
unsigned long long off_14038[1] = {0};
unsigned long long off_14048[1] = {0};
unsigned long long off_14058[1] = {0};
unsigned long long off_14068[1] = {0};
unsigned long long off_14078[1] = {0};
unsigned long long off_14088[1] = {0};
unsigned long long off_14098[1] = {0};
unsigned long long off_140A8[1] = {0};

/* Forward declarations */
long long call_weak_fn();
void JUMPOUT(int);
long long test_control_flow_l1();

/* CRT stub function definitions */
long long call_weak_fn()
{
 return 0;
}

void JUMPOUT(int a1)
{
 (void)a1;
}
void *test_control_flow_l2();
void *test_control_flow_l3();

/* Function: .init_proc @ 0x928 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_940 @ 0x940 */
void sub_940()
{
 JUMPOUT(0);
}


/* Function: main @ 0xA00 */
int main(int argc, const char **argv, const char **envp)
{
 long long v3; // x0
 long long v4; // x0

 v3 = test_control_flow_l1();
 v4 = (long long)test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: recursion_factorial @ 0xB60 */
long long recursion_factorial(signed int a1)
{
 long long result; // x0
 unsigned int v3; // w3
 int32x4_union_t v4; // q1
 int v5; // w0
 int32x4_union_t v6; // q3
 int32x4_union_t v7; // q0
 int32x4_union_t v8; // q2
 int32x4_union_t v9; // q1

 result = 1;
 if ( a1 > 1 )
 {
 v3 = a1 - 1;
 if ( (unsigned int)(a1 - 2) <= 0xD )
 {
 result = 1;
 }
 else
 {
 v4.n128_u64[0] = 0x100000001LL;
 v4.n128_u64[1] = 0x100000001LL;
 v5 = 0;
 v6.n128_u64[0] = 0x300000003LL;
 v6.n128_u64[1] = 0x300000003LL;
 v7.vec = vaddq_s32(vdupq_n_s32(a1), xmmword_2B00.vec);
 do
 {
 v8.vec = v7.vec;
 ++v5;
 v7.vec = vaddq_s32(v7.vec, v6.vec);
 v4.vec = vmulq_s32(v4.vec, v8.vec);
 }
 while ( v3 >> 2 != v5 );
 a1 -= v3 & 0xFFFFFFFC;
 v9.vec = vmulq_s32(vreinterpretq_s32_s8(vextq_s8(vreinterpretq_s8_s32(v4.vec), vreinterpretq_s8_s32(xmmword_2B00.vec), 8)), vreinterpretq_s32_s8(vreinterpretq_s8_s32(v4.vec)));
 result = v9.n128_u32[0];
 if ( v3 == (v3 & 0xFFFFFFFC) )
 return result;
 v3 = a1 - 1;
 }
 result = (unsigned int)(result * a1);
 if ( v3 != 1 )
 {
 result = (unsigned int)result * v3;
 if ( a1 != 3 )
 {
 result = (unsigned int)(result * (a1 - 2));
 if ( a1 != 4 )
 {
 result = (unsigned int)(result * (a1 - 3));
 if ( a1 != 5 )
 {
 result = (unsigned int)(result * (a1 - 4));
 if ( a1 != 6 )
 {
 result = (unsigned int)(result * (a1 - 5));
 if ( a1 != 7 )
 {
 result = (unsigned int)(result * (a1 - 6));
 if ( a1 != 8 )
 {
 result = (unsigned int)(result * (a1 - 7));
 if ( a1 != 9 )
 {
 result = (unsigned int)(result * (a1 - 8));
 if ( a1 != 10 )
 {
 result = (unsigned int)(result * (a1 - 9));
 if ( a1 != 11 )
 {
 result = (unsigned int)(result * (a1 - 10));
 if ( a1 != 12 )
 {
 result = (unsigned int)(result * (a1 - 11));
 if ( a1 != 13 )
 return (unsigned int)((a1 - 13) * (a1 - 12) * result);
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: double_value @ 0xCC0 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: triple_value @ 0xCD0 */
long long triple_value(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: op_add @ 0xCE0 */
long long op_add(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: op_sub @ 0xCF0 */
long long op_sub(int a1, int a2)
{
 return (unsigned int)(a1 - a2);
}


/* Function: op_mul @ 0xD00 */
long long op_mul(int a1, int a2)
{
 return (unsigned int)(a1 * a2);
}


/* Function: op_div @ 0xD10 */
long long op_div(int a1, unsigned int a2)
{
 long long result; // x0

 result = a2;
 if ( a2 )
 return (unsigned int)(a1 / (int)a2);
 return result;
}


/* Function: op_mod @ 0xD24 */
long long op_mod(int a1, unsigned int a2)
{
 long long result; // x0

 result = a2;
 if ( a2 )
 return (unsigned int)(a1 % (int)a2);
 return result;
}


/* Function: op_and @ 0xD40 */
long long op_and(int a1, unsigned int a2)
{
 return a1 & a2;
}


/* Function: op_or @ 0xD50 */
long long op_or(int a1, unsigned int a2)
{
 return a1 | a2;
}


/* Function: op_xor @ 0xD60 */
long long op_xor(int a1, unsigned int a2)
{
 return a1 ^ a2;
}


/* Function: op_shl @ 0xD70 */
long long op_shl(int a1, char a2)
{
 return (unsigned int)(a1 << a2);
}


/* Function: op_shr @ 0xD80 */
long long op_shr(int a1, char a2)
{
 return (unsigned int)(a1 >> a2);
}


/* Function: state_idle @ 0xD90 */
bool state_idle(int a1)
{
 return a1 == 1;
}


/* Function: state_processing @ 0xDA0 */
long long state_processing(long long result)
{
 if ( (unsigned int)result != 2 )
 {
 if ( (unsigned int)result == 99 )
 return 3;
 else
 return 1;
 }
 return result;
}


/* Function: state_done @ 0xDC0 */
long long state_done()
{
 return 2;
}


/* Function: state_error @ 0xDD0 */
long long state_error(int a1)
{
 if ( a1 )
 return 3;
 else
 return 0;
}


/* Function: non_local_jump.constprop.0 @ 0xDE0 */
long long non_local_jump_constprop_0()
{
 if ( _setjmp(jump_buffer) )
 return 0xFFFFFFFFLL;
 else
 return 10;
}


/* Function: sequential_ops @ 0xE10 */
long long sequential_ops(int a1, int a2, int a3)
{
 return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0xE20 */
long long single_if(long long result)
{
 if ( (int)result <= 0 )
 return (unsigned int)result;
 else
 return (unsigned int)(2 * result);
}


/* Function: if_else @ 0xE30 */
bool if_else(int a1)
{
 return a1 > 0;
}


/* Function: nested_if_2 @ 0xE40 */
long long nested_if_2(long long result, int a2)
{
 bool v2; // zf
 bool v3; // nf
 unsigned int v4; // w1

 if ( (int)result <= 0 )
 return 0;
 v2 = a2 == 0;
 v3 = a2 < 0;
 v4 = result + a2;
 if ( v3 || v2 )
 return (unsigned int)result;
 else
 return v4;
}


/* Function: nested_if_deep @ 0xE60 */
long long nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
 long long result; // x0

 if ( a1 <= 0 )
 return 0;
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
 return (unsigned int)(a5 > 0) + 4;
 }
 }
 return result;
}


/* Function: if_elseif_chain @ 0xEB0 */
long long if_elseif_chain(int a1)
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
 return 0xFFFFFFFFLL;
}


/* Function: if_elseif_long @ 0xEE0 */
long long if_elseif_long(int a1)
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
 return 0xFFFFFFFFLL;
}


/* Function: switch_small @ 0xF30 */
long long switch_small(unsigned int a1)
{
 if ( a1 > 3 )
 return 0xFFFFFFFFLL;
 else
 return CSWTCH_55[a1];
}


/* Function: switch_large @ 0xF50 */
long long switch_large(unsigned int a1)
{
 bool v1; // cf
 long long result; // x0

 v1 = a1 >= 0xA;
 result = 10 * a1;
 if ( v1 )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)result;
}


/* Function: switch_default @ 0xF64 */
long long switch_default(int a1)
{
 unsigned int v1; // w2
 long long result; // x0

 v1 = a1 - 1;
 result = 100 * a1;
 if ( v1 >= 3 )
 return 0;
 else
 return (unsigned int)result;
}


/* Function: switch_fallthrough @ 0xF80 */
long long switch_fallthrough(int a1)
{
 int v2; // w1

 switch ( a1 )
 {
 case 2:
 v2 = 0;
 return (unsigned int)(v2 + 2 * a1 + a1);
 case 3:
 v2 = 12;
 return (unsigned int)(v2 + 2 * a1 + a1);
 case 1:
 return 1;
 default:
 return 0xFFFFFFFFLL;
 }
}


/* Function: loop_for_fixed @ 0xFC0 */
long long loop_for_fixed(int a1)
{
 int v2; // w1
 int32x4_union_t v3; // q0
 int32x4_union_t v4; // q3
 int32x4_union_t v5; // q1
 int32x4_union_t v6; // q2
 int v7; // w1
 long long result; // x0
 int v9; // w1
 bool v10; // cc
 unsigned int v11; // w1

 if ( a1 <= 0 )
 return 0;
 if ( (unsigned int)(a1 - 1) <= 7 )
 {
 v7 = 0;
 result = 0;
 }
 else
 {
 v2 = 0;
 v3.vec = vdupq_n_s32(0);
 v4.n128_u64[0] = 0x400000004LL;
 v4.n128_u64[1] = 0x400000004LL;
 v5.vec = xmmword_2B10.vec;
 do
 {
 v6.vec = v5.vec;
 ++v2;
 v5.vec = vaddq_s32(v5.vec, v4.vec);
 v3.vec = vaddq_s32(v3.vec, v6.vec);
 }
 while ( (unsigned int)a1 >> 2 != v2 );
 v7 = a1 & 0x7FFFFFFC;
 result = (unsigned int)vaddvq_s32(v3.vec);
 if ( (a1 & 3) == 0 )
 return result;
 }
 result = result + v7;
 if ( a1 > v7 + 1 )
 {
 result = (unsigned int)(result + v7 + 1);
 if ( a1 > v7 + 2 )
 {
 result = (unsigned int)(result + v7 + 2);
 if ( a1 > v7 + 3 )
 {
 result = (unsigned int)(result + v7 + 3);
 if ( a1 > v7 + 4 )
 {
 result = (unsigned int)(result + v7 + 4);
 if ( a1 > v7 + 5 )
 {
 result = (unsigned int)(result + v7 + 5);
 if ( a1 > v7 + 6 )
 {
 result = result + v7 + 6;
 v9 = v7 + 7;
 v10 = a1 <= v9;
 v11 = result + v9;
 if ( v10 )
 return (unsigned int)result;
 else
 return v11;
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: loop_while @ 0x10B0 */
long long loop_while(int a1)
{
 int v1; // w2
 long long result; // x0

 v1 = a1;
 if ( !a1 )
 return 1;
 result = 0;
 do
 {
 result = (unsigned int)(result + 1);
 v1 /= 10;
 }
 while ( v1 );
 return result;
}


/* Function: loop_dowhile @ 0x10F0 */
long long loop_dowhile(int a1)
{
 long long result; // x0

 result = 0;
 do
 {
 result = (unsigned int)(result + 1);
 a1 /= 10;
 }
 while ( a1 );
 return result;
}


/* Function: loop_nested @ 0x1120 */
long long loop_nested(int a1, int a2)
{
 int v3; // w2
 long long result; // x0

 if ( a1 <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 ++v3;
 if ( a2 <= 0 )
 result = (unsigned int)result;
 else
 result = (unsigned int)(a2 + result);
 }
 while ( a1 != v3 );
 return result;
}


/* Function: loop_break @ 0x1160 */
long long loop_break(int a1)
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
 case 50:
 return 4;
 }
 return 0xFFFFFFFFLL;
}


/* Function: loop_continue @ 0x11B0 */
long long loop_continue(int a1)
{
 int v2; // w1
 int32x4_union_t v3; // q1
 int32x4_union_t v4; // q5
 int32x4_union_t v5; // q4
 int32x4_union_t v6; // q2
 int32x4_union_t v7; // q3
 unsigned int v8; // w1
 long long result; // x0
 unsigned int v10; // w3
 bool v11; // zf
 int v12; // w4
 unsigned int v13; // w3
 int v14; // w3
 unsigned int v15; // w4
 int v16; // w1
 unsigned int v17; // w3
 unsigned int v18; // w1

 if ( a1 <= 0 )
 return 0;
 if ( (unsigned int)(a1 - 1) <= 4 )
 {
 v8 = 1;
 result = 1;
 }
 else
 {
 v2 = 0;
 v3.vec = vdupq_n_s32(0);
 v4.n128_u64[0] = 0x400000004LL;
 v4.n128_u64[1] = 0x400000004LL;
 v5.vec = vdupq_n_s32(1);
 v6.vec = xmmword_2B20.vec;
 do
 {
 v7.vec = v6.vec;
 ++v2;
 v6.vec = vaddq_s32(v6.vec, v4.vec);
 v3.vec = vaddq_s32(v3.vec, vbicq_s32(v7.vec, vreinterpretq_s32_u32(vceqzq_s32(vandq_s32(v7.vec, v5.vec)))));
 }
 while ( (unsigned int)a1 >> 2 != v2 );
 v8 = (a1 & 0xFFFFFFFC) + 1;
 result = (unsigned int)vaddvq_s32(v3.vec);
 if ( a1 == (a1 & 0xFFFFFFFC) )
 return result;
 if ( (v8 & 1) != 0 )
 result = (unsigned int)result + v8;
 }
 v10 = v8 + 1;
 if ( (int)(v8 + 1) <= a1 )
 {
 v11 = (v10 & 1) == 0;
 v12 = v8 + 2;
 v13 = result + v10;
 result = v11 ? (unsigned int)result : v13;
 if ( a1 >= v12 )
 {
 v11 = (v12 & 1) == 0;
 v14 = v8 + 3;
 v15 = result + v12;
 result = v11 ? (unsigned int)result : v15;
 if ( a1 >= v14 )
 {
 v11 = (v14 & 1) == 0;
 v16 = v8 + 4;
 v17 = result + v14;
 if ( v11 )
 result = (unsigned int)result;
 else
 result = v17;
 if ( a1 >= v16 )
 {
 v11 = (v16 & 1) == 0;
 v18 = result + v16;
 if ( v11 )
 return (unsigned int)result;
 else
 return v18;
 }
 }
 }
 }
 return result;
}


/* Function: goto_forward @ 0x12B0 */
long long goto_forward(int a1)
{
 if ( a1 > 0 )
 a1 *= a1;
 return (unsigned int)(2 * a1);
}


/* Function: goto_backward @ 0x12C4 */
long long goto_backward(int a1)
{
 long long result; // x0
 int32x4_union_t v3; // q1
 int32x4_union_t v4; // q3
 int32x4_union_t v5; // q0
 int v6; // w1
 int32x4_union_t v7; // q2
 unsigned int v8; // w1
 int32x4_union_t v9; // q1

 result = 1;
 if ( a1 > 0 )
 {
 if ( (unsigned int)(a1 - 1) <= 0xD )
 {
 result = 1;
 v8 = 1;
 }
 else
 {
 v3.n128_u64[0] = 0x100000001LL;
 v3.n128_u64[1] = 0x100000001LL;
 v4.n128_u64[0] = 0x400000004LL;
 v4.n128_u64[1] = 0x400000004LL;
 v5.vec = xmmword_2B20.vec;
 v6 = 0;
 do
 {
 v7.vec = v5.vec;
 ++v6;
 v5.vec = vaddq_s32(v5.vec, v4.vec);
 v3.vec = vmulq_s32(v3.vec, v7.vec);
 }
 while ( (unsigned int)a1 >> 2 != v6 );
 v8 = (a1 & 0xFFFFFFFC) + 1;
 v9.vec = vmulq_s32(vreinterpretq_s32_s8(vextq_s8(vreinterpretq_s8_s32(v3.vec), vreinterpretq_s8_s32(xmmword_2B00.vec), 8)), vreinterpretq_s32_s8(vreinterpretq_s8_s32(v3.vec)));
 result = v9.n128_u32[0];
 if ( a1 == (a1 & 0xFFFFFFFC) )
 return result;
 }
 result = (unsigned int)result * v8;
 if ( a1 >= (int)(v8 + 1) )
 {
 result = (unsigned int)result * (v8 + 1);
 if ( a1 >= (int)(v8 + 2) )
 {
 result = (unsigned int)result * (v8 + 2);
 if ( a1 >= (int)(v8 + 3) )
 {
 result = (unsigned int)result * (v8 + 3);
 if ( a1 >= (int)(v8 + 4) )
 {
 result = (unsigned int)result * (v8 + 4);
 if ( a1 >= (int)(v8 + 5) )
 {
 result = (unsigned int)result * (v8 + 5);
 if ( a1 >= (int)(v8 + 6) )
 {
 result = (unsigned int)result * (v8 + 6);
 if ( a1 >= (int)(v8 + 7) )
 {
 result = (unsigned int)result * (v8 + 7);
 if ( a1 >= (int)(v8 + 8) )
 {
 result = (unsigned int)result * (v8 + 8);
 if ( a1 >= (int)(v8 + 9) )
 {
 result = (unsigned int)result * (v8 + 9);
 if ( a1 >= (int)(v8 + 10) )
 {
 result = (unsigned int)result * (v8 + 10);
 if ( a1 >= (int)(v8 + 11) )
 {
 result = result * (v8 + 11);
 if ( a1 >= (int)(v8 + 12) )
 return 0x7FFFFFFF;
 else
 return (unsigned int)result;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: ternary_op @ 0x1410 */
long long ternary_op(long long result, int a2)
{
 if ( a2 < (int)result )
 return (unsigned int)result;
 else
 return (unsigned int)a2;
}


/* Function: test_control_flow_l1 @ 0x1420 */
long long test_control_flow_l1()
{
 puts(asc_24B8);
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


/* Function: loop_multi_exit @ 0x1660 */
long long loop_multi_exit(int a1)
{
 int v2; // w0
 long long result; // x0
 int v4; // w1

 switch ( a1 )
 {
 case 1:
 v2 = 0;
LABEL_15:
 v4 = 0;
 return (unsigned int)(v4 + 10 * v2);
 case 2:
 v2 = 0;
 goto LABEL_18;
 case 3:
 v2 = 0;
 goto LABEL_20;
 case 4:
 v2 = 0;
 v4 = 3;
 return (unsigned int)(v4 + 10 * v2);
 case 5:
 v2 = 1;
 goto LABEL_15;
 case 6:
 v2 = 1;
 v4 = 1;
 return (unsigned int)(v4 + 10 * v2);
 case 7:
 v2 = 1;
 v4 = 2;
 return (unsigned int)(v4 + 10 * v2);
 case 8:
 v2 = 1;
 v4 = 3;
 return (unsigned int)(v4 + 10 * v2);
 }
 v2 = 2;
 if ( a1 == 9 )
 goto LABEL_15;
 v2 = 2;
 if ( a1 == 10 )
 {
LABEL_18:
 v4 = 1;
 return (unsigned int)(v4 + 10 * v2);
 }
 v2 = 2;
 if ( a1 == 11 )
 {
LABEL_20:
 v4 = 2;
 return (unsigned int)(v4 + 10 * v2);
 }
 result = 0xFFFFFFFFLL;
 if ( a1 == 12 )
 {
 v2 = 2;
 v4 = 3;
 return (unsigned int)(v4 + 10 * v2);
 }
 return result;
}


/* Function: infinite_loop @ 0x1750 */
long long infinite_loop(unsigned int *a1)
{
 unsigned int i; // w1

 for ( i = 0; i != 1001; ++i )
 {
 if ( *a1 == 1 )
 return i;
 }
 *a1 = 1;
 return 1001;
}


/* Function: multi_return @ 0x1790 */
long long multi_return(int a1)
{
 long long result; // x0

 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 result = 2 * a1;
 if ( (int)result > 100 )
 return 4294967294LL;
 if ( (a1 & 1) != 0 )
 return (unsigned int)(a1 + 1);
 return (unsigned int)result;
}


/* Function: conditional_return @ 0x17C0 */
long long conditional_return(int a1)
{
 bool v1; // cc
 unsigned int v2; // w1
 long long result; // x0

 v1 = a1 <= 0;
 if ( a1 )
 v2 = -a1;
 else
 v2 = 0;
 result = 2 * a1;
 if ( v1 )
 return v2;
 else
 return (unsigned int)result;
}


/* Function: duffs_device @ 0x17D4 */
long long duffs_device(int *a1, int *a2, int a3)
{
 int *v3; // x3
 int v4; // w4
 int v5; // w5
 int v6; // t1
 int v7; // t1
 int *v8; // x1
 int v9; // t1
 unsigned int *v10; // x3
 int v11; // t1
 int *v12; // x1
 int v13; // t1
 unsigned int *v14; // x3
 int v15; // t1
 int v16; // t1
 int v17; // t1
 int *v18; // x1
 int v19; // t1
 int v20; // t1

 v3 = a1;
 if ( a3 <= 0 )
 return (unsigned int)-1;
 v4 = a3 & 7;
 v5 = (a3 + 7) >> 3;
 if ( v4 == 4 )
 goto LABEL_11;
 if ( (a3 & 7u) > 4 )
 {
 if ( v4 == 6 )
 goto LABEL_10;
 if ( v4 == 7 )
 {
 v17 = *a2++;
 *a1 = v17;
 v3 = a1 + 1;
 goto LABEL_10;
 }
 if ( v4 != 5 )
 goto LABEL_9;
 v19 = *a2;
 v18 = a2 + 1;
 *a1 = v19;
 v20 = *v18;
 a2 = v18 + 1;
 a1[1] = v20;
 v3 = a1 + 2;
 }
 else
 {
 if ( v4 == 2 )
 goto LABEL_7;
 if ( v4 != 3 )
 {
 if ( v4 != 1 )
 goto LABEL_9;
 --v5;
 *a1 = *a2;
 if ( v5 )
 goto LABEL_8;
 return (unsigned int)a3;
 }
 }
 while ( 1 )
 {
 v6 = *a2++;
 *v3++ = v6;
LABEL_7:
 v7 = *a2++;
 --v5;
 *v3++ = v7;
 *v3 = *a2;
 if ( !v5 )
 break;
LABEL_8:
 ++a2;
 ++v3;
LABEL_9:
 v9 = *a2;
 v8 = a2 + 1;
 *v3 = v9;
 v10 = v3 + 1;
 v11 = *v8;
 a2 = v8 + 1;
 *v10 = v11;
 v3 = v10 + 1;
LABEL_10:
 v13 = *a2;
 v12 = a2 + 1;
 *v3 = v13;
 v14 = v3 + 1;
 v15 = *v12;
 a2 = v12 + 1;
 *v14 = v15;
 v3 = v14 + 1;
LABEL_11:
 v16 = *a2++;
 *v3++ = v16;
 }
 return (unsigned int)a3;
}


/* Function: loop_complex_cond @ 0x18C0 */
long long loop_complex_cond(long long result)
{
 int v1; // w1
 int v2; // w2
 int v3; // w0

 if ( (int)result > 0 )
 {
 v1 = result - 1;
 if ( (int)result - 1 <= 2 )
 {
 v3 = 1;
 v2 = 2;
 }
 else
 {
 v1 = result - 2;
 if ( (int)result - 2 <= 4 )
 {
 v3 = 2;
 v2 = 4;
 }
 else
 {
 v1 = result - 3;
 if ( (int)result - 3 <= 6 )
 {
 v3 = 3;
 v2 = 6;
 }
 else
 {
 v1 = result - 4;
 if ( (int)result - 4 <= 8 )
 {
 v3 = 4;
 v2 = 8;
 }
 else
 {
 v1 = result - 5;
 if ( (int)result - 5 <= 10 )
 {
 v3 = 5;
 v2 = 10;
 }
 else
 {
 v1 = result - 6;
 if ( (int)result - 6 <= 12 )
 {
 v3 = 6;
 v2 = 12;
 }
 else
 {
 v1 = result - 7;
 if ( (int)result - 7 <= 14 )
 {
 v3 = 7;
 v2 = 14;
 }
 else
 {
 v1 = result - 8;
 if ( (int)result - 8 <= 16 )
 {
 v3 = 8;
 v2 = 16;
 }
 else
 {
 v1 = result - 9;
 if ( (int)result - 9 <= 18 )
 {
 v3 = 9;
 v2 = 18;
 }
 else
 {
 v1 = result - 10;
 v2 = 20;
 v3 = 10;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return (unsigned int)(v1 + v2 + v3);
 }
 return result;
}


/* Function: loop_modify_var @ 0x19C0 */
long long loop_modify_var(int a1)
{
 long long result; // x0
 int v3; // w1
 int v4; // w2
 int v5; // w3

 result = 0;
 if ( a1 > 0 )
 {
 v3 = 1;
 v4 = 0;
 if ( a1 != 1 )
 {
 do
 {
 while ( 1 )
 {
 v5 = v3 + 1;
 result = (unsigned int)(result + v3);
 if ( v3 <= 5 )
 break;
 v3 = v4 + 4;
 v4 += 3;
 if ( a1 <= v3 )
 return result;
 }
 v4 = v3++;
 }
 while ( a1 > v5 );
 }
 }
 return result;
}


/* Function: loop_external_state @ 0x1A20 */
long long loop_external_state(unsigned int *a1)
{
 unsigned int i; // w1

 for ( i = 0; i != 101; ++i )
 {
 if ( *a1 )
 break;
 }
 return i;
}


/* Function: tail_recursion @ 0x1A44 */
long long tail_recursion(signed int a1, unsigned int a2)
{
 long long result; // x0
 unsigned int v4; // w4
 int32x4_union_t v5; // q1
 int v6; // w0
 int32x4_union_t v7; // q3
 int32x4_union_t v8; // q0
 int32x4_union_t v9; // q2
 int32x4_union_t v10; // q1

 result = a2;
 if ( a1 > 1 )
 {
 v4 = a1 - 1;
 if ( (unsigned int)(a1 - 2) <= 0xD )
 {
 result = a2;
 }
 else
 {
 v5.n128_u64[0] = 0x100000001LL;
 v5.n128_u64[1] = 0x100000001LL;
 v6 = 0;
 v7.n128_u64[0] = 0x300000003LL;
 v7.n128_u64[1] = 0x300000003LL;
 v8.vec = vaddq_s32(vdupq_n_s32(a1), xmmword_2B00.vec);
 do
 {
 v9.vec = v8.vec;
 ++v6;
 v8.vec = vaddq_s32(v8.vec, v7.vec);
 v5.vec = vmulq_s32(v5.vec, v9.vec);
 }
 while ( v4 >> 2 != v6 );
 a1 -= v4 & 0xFFFFFFFC;
 v10.vec = vmulq_s32(vreinterpretq_s32_s8(vextq_s8(vreinterpretq_s8_s32(v5.vec), vreinterpretq_s8_s32(xmmword_2B00.vec), 8)), vreinterpretq_s32_s8(vreinterpretq_s8_s32(v5.vec)));
 result = v10.n128_u32[0] * a2;
 if ( v4 == (v4 & 0xFFFFFFFC) )
 return result;
 v4 = a1 - 1;
 }
 result = (unsigned int)(result * a1);
 if ( v4 != 1 )
 {
 result = (unsigned int)result * v4;
 if ( a1 != 3 )
 {
 result = (unsigned int)(result * (a1 - 2));
 if ( a1 != 4 )
 {
 result = (unsigned int)(result * (a1 - 3));
 if ( a1 != 5 )
 {
 result = (unsigned int)(result * (a1 - 4));
 if ( a1 != 6 )
 {
 result = (unsigned int)(result * (a1 - 5));
 if ( a1 != 7 )
 {
 result = (unsigned int)(result * (a1 - 6));
 if ( a1 != 8 )
 {
 result = (unsigned int)(result * (a1 - 7));
 if ( a1 != 9 )
 {
 result = (unsigned int)(result * (a1 - 8));
 if ( a1 != 10 )
 {
 result = (unsigned int)(result * (a1 - 9));
 if ( a1 != 11 )
 {
 result = (unsigned int)(result * (a1 - 10));
 if ( a1 != 12 )
 {
 result = (unsigned int)(result * (a1 - 11));
 if ( a1 != 13 )
 return (unsigned int)((a1 - 13) * (a1 - 12) * result);
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: indirect_recursion_a @ 0x1BA4 */
long long indirect_recursion_a(long long result, int a2)
{
 int v2; // w2
 int v3; // w0
 int v4; // w3

 v2 = a2 - 4;
 if ( a2 > 0 )
 {
 do
 {
 if ( (result & 1) != 0 )
 {
 v3 = 3 * result;
 if ( a2 == 1 )
 return (unsigned int)(v3 + 1);
 result = (unsigned int)(v3 + 2);
 if ( a2 <= 2 )
 return result;
 if ( (result & 1) == 0 )
 {
LABEL_14:
 result = (unsigned int)((int)result / 2);
 if ( a2 == 3 )
 return result;
 result = (unsigned int)(result + 1);
 v4 = v2;
 goto LABEL_8;
 }
 }
 else
 {
 result = (unsigned int)((int)result / 2);
 if ( a2 == 1 )
 return result;
 result = (unsigned int)(result + 1);
 if ( a2 <= 2 )
 return result;
 if ( (result & 1) == 0 )
 goto LABEL_14;
 }
 v3 = 3 * result;
 if ( a2 == 3 )
 return (unsigned int)(v3 + 1);
 result = (unsigned int)(v3 + 2);
 v4 = v2;
LABEL_8:
 v2 -= 4;
 a2 -= 4;
 }
 while ( v4 );
 }
 return result;
}


/* Function: call_func_ptr @ 0x1C40 */
long long call_func_ptr(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1C50 */
long long call_func_ptr_array(unsigned int a1, unsigned int a2)
{
 unsigned long long v3[3]; // [xsp+10h] [xbp+10h]

 v3[0] = off_14010[0];
 v3[1] = off_14018[0];
 v3[2] = off_14020[0];
 if ( a1 > 2 )
 return 0xFFFFFFFFLL;
 else
 return ((long long ( *)(unsigned long long))v3[a1])(a2);
}


/* Function: call_virtual_func @ 0x1CF0 */
long long call_virtual_func(long long a1, int a2)
{
 return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x1D00 */
long long process_with_callback(unsigned int *a1, int a2, long long ( *a3)(unsigned long long))
{
 unsigned int *v3; // x19
 long long v5; // x21
 unsigned int v6; // w20
 unsigned int v7; // t1

 if ( a2 <= 0 )
 return 0;
 v3 = a1;
 v5 = (long long)&a1[a2 - 1 + 1];
 v6 = 0;
 do
 {
 v7 = *v3++;
 v6 += a3(v7);
 }
 while ( v3 != (unsigned int *)v5 );
 return v6;
}


/* Function: test_control_flow_l2 @ 0x1D70 */
void *test_control_flow_l2()
{
 int i; // w2
 int v1; // w0
 int j; // w1
 int v3; // w0
 int v4; // w2
 int v5; // w3
 int k; // w2
 unsigned long long v8[2]; // [xsp+28h] [xbp+28h] BYREF
 unsigned long long v9[4]; // [xsp+48h] [xbp+48h] BYREF

 puts(asc_2760);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", 12);
 for ( i = 0; i != 1001; ++i )
 ;
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", 1001);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 memset(v9, 0, sizeof(v9));
 v8[0] = xmmword_2B40.n128_u64[0];
 v8[1] = xmmword_2B50.n128_u64[0];
 v1 = duffs_device((int *)v9, (int *)v8, 8);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v1);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
 v3 = 1;
 v4 = 1;
 while ( 1 )
 {
 v5 = v3++;
 j = v5;
 do
 {
 v4 += v3;
 if ( v3 <= 5 )
 {
 v3 = v5 + 1;
 continue;
 }
 if ( j != 5 )
 break;
 v3 = 9;
 }
 while ( 1 );
 break;
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
 return &_stack_chk_guard;
}


/* Function: non_local_jump @ 0x1FE4 */
long long non_local_jump(int a1)
{
 long long result; // x0

 if ( _setjmp(jump_buffer) )
 return 0xFFFFFFFFLL;
 if ( a1 < 0 )
 __longjmp_chk(jump_buffer, 1);
 result = (unsigned int)(2 * a1);
 if ( a1 > 100 )
 __longjmp_chk(jump_buffer, 2);
 return result;
}


/* Function: cpp_exception @ 0x2050 */
long long cpp_exception(int a1)
{
 if ( a1 < 0 )
 return 0xFFFFFFFFLL;
 if ( a1 > 100 )
 return 4294967294LL;
 return (unsigned int)(2 * a1);
}


/* Function: large_jump_table @ 0x2074 */
long long large_jump_table(unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned long long v4[5]; // [xsp+18h] [xbp+18h]

 v4[0] = *(unsigned long long *)off_14028;
 v4[1] = *(unsigned long long *)off_14038;
 v4[2] = *(unsigned long long *)off_14048;
 v4[3] = *(unsigned long long *)off_14058;
 v4[4] = *(unsigned long long *)off_14068;
 if ( a1 > 9 )
 return 0xFFFFFFFFLL;
 else
 return (*((long long ( **)(unsigned long long, unsigned long long))v4 + (int)a1))(a2, a3);
}


/* Function: conditional_func_ptr @ 0x2124 */
long long conditional_func_ptr(int a1, unsigned int a2)
{
 long long ( *v2)(int); // x2

 if ( !a1 )
 return double_value(a2);
 v2 = triple_value;
 if ( a1 != 1 )
 v2 = recursion_factorial;
 return v2(a2);
}


/* Function: state_machine @ 0x2160 */
long long state_machine(long long result, int a2)
{
 if ( a2 == 2 )
 return 2;
 if ( a2 > 2 )
 {
 if ( (unsigned int)result )
 result = a2;
 else
 result = 0;
 if ( a2 == 3 )
 return (unsigned int)result;
 else
 return 3;
 }
 else if ( a2 )
 {
 if ( a2 == 1 )
 {
 if ( (unsigned int)result != 2 )
 {
 if ( (unsigned int)result == 99 )
 return 3;
 else
 return 1;
 }
 }
 else
 {
 return 3;
 }
 }
 else
 {
 return (unsigned int)result == 1;
 }
 return result;
}


/* Function: fsm_func_table @ 0x21C4 */
long long fsm_func_table(long long a1, long long a2)
{
 unsigned long long v3[2]; // [xsp+18h] [xbp+18h]

 v3[0] = *(unsigned long long *)off_14078;
 v3[1] = *(unsigned long long *)off_14088;
 if ( (unsigned int)a2 > 3 )
 return 3;
 else
 return (*((long long ( **)(long long, long long, void *, unsigned long long))v3 + (int)a2))(a1, a2, &_stack_chk_guard, 0);
}


/* Function: computed_goto @ 0x2260 */
long long computed_goto(long long a1, unsigned int a2)
{
 unsigned long long v3[2]; // [xsp+18h] [xbp+18h]

 v3[0] = *(unsigned long long *)&off_14098;
 v3[1] = *(unsigned long long *)&off_140A8;
 if ( a2 <= 3 )
 __asm__ volatile ("br %0" : : "r"(a1));
 return 0xFFFFFFFFLL;
}


/* Function: obfuscated_cf @ 0x22F0 */
long long obfuscated_cf(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x2300 */
long long opaque_predicate(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x2310 */
long long overlapped_code(int a1)
{
 bool v2; // zf
 int v3; // w0

 v2 = (a1 & 1) == 0;
 v3 = 3 * a1;
 if ( v2 )
 return (unsigned int)(a1 / 2);
 else
 return (unsigned int)(v3 + 1);
}


/* Function: test_control_flow_l3 @ 0x2330 */
void *test_control_flow_l3()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int32x4_union_t v4; // [xsp+20h] [xbp+20h] BYREF

 puts(asc_2980);
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
 v4 = xmmword_2B10;
 v2 = computed_goto((long long)&v4, 2u);
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v2);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 return &_stack_chk_guard;
}


/* Function: .term_proc @ 0x249C */
void term_proc()
{
 ;
}


/* FAILED to decompile: _setjmp @ 0x14248 */

/* FAILED to decompile: __libc_start_main @ 0x14250 */

/* FAILED to decompile: __cxa_finalize @ 0x14258 */

/* FAILED to decompile: __printf_chk @ 0x14260 */

/* FAILED to decompile: __stack_chk_fail @ 0x14268 */

/* FAILED to decompile: abort @ 0x14278 */

/* FAILED to decompile: puts @ 0x14280 */

/* FAILED to decompile: __longjmp_chk @ 0x14288 */

/* FAILED to decompile: __gmon_start__ @ 0x14298 */

/* Total functions decompiled: 75, failed: 9 */
