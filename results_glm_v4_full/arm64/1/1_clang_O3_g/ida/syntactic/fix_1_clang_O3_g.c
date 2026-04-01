/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/1/1_clang_O3_g
 * Processor: arm
 */

#include <arm_neon.h>
#include <stdio.h>
#include <setjmp.h>

extern long long call_weak_fn(void);

#define JUMPOUT(x) ((void)0)

/* Custom NEON union type for decompiled code compatibility */
typedef union {
    int32x4_t v;
    int8x16_t b;
    struct {
        uint64_t n64_u64[2];
    } n128_u64_s;
    uint64_t n128_u64[2];
    uint32_t n128_u32[4];
} neon_reg_t;

static const int32x4_t xmmword_1A00 = {1, 1, 1, 1};
extern const int32x4_t xmmword_1A10;
extern const int dword_1A20[4];
extern const int dword_19CC[12];
extern const int dword_199C[12];
extern const char byte_198D[8];
static const char asc_1F85[] = "Control Flow Level 1 Tests";
static const char asc_1FA9[] = "Control Flow Level 2 Tests";
static const char asc_1FCD[] = "Control Flow Level 3 Tests";
static jmp_buf jump_buffer;

/* Stub function declarations for removed CRT functions */
int loc_10A0(int *dst, int *src);

/* Implementations for stub functions */

int recursion_factorial(int n)
{
 if ( n <= 1 )
 return 1;
 return n * recursion_factorial(n - 1);
}

int triple_value(int x)
{
 return 3 * x;
}

int double_value(int x)
{
 return 2 * x;
}

int non_local_jump(int x)
{
 if ( _setjmp(jump_buffer) )
 return x - 1;
 if ( x > 0 )
 longjmp(jump_buffer, 1);
 return x;
}

long long call_weak_fn()
{
 return 0;
}

/* Function: .init_proc @ 0x860 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_880 @ 0x880 */
void sub_880()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* CRT stub function loc_10A0 removed by preprocessor */



/* CRT stub function recursion_factorial removed by preprocessor */



/* Function: sequential_ops @ 0xA54 */
int sequential_ops(int a, int b, int c)
{
 return 2 * (b + a) - c;
}


/* Function: single_if @ 0xA64 */
int single_if(int x)
{
 return x << (x > 0);
}


/* Function: if_else @ 0xA74 */
int if_else(int x)
{
 return x > 0;
}


/* Function: nested_if_2 @ 0xA80 */
int nested_if_2(int a, int b)
{
 if ( a <= 0 )
 return 0;
 else
 return (b & ~(b >> 31)) + a;
}


/* Function: nested_if_deep @ 0xA94 */
int nested_if_deep(int a, int b, int c, int d, int e)
{
 if ( a < 1 )
 return 0;
 if ( b < 1 )
 return 1;
 if ( c < 1 )
 return 2;
 if ( d < 1 )
 return 3;
 if ( e <= 0 )
 return 4;
 return 5;
}


/* Function: if_elseif_chain @ 0xAE4 */
int if_elseif_chain(int x)
{
 if ( (unsigned int)x >= 3 )
 return -1;
 else
 return 10 * x + 10;
}


/* Function: if_elseif_long @ 0xAFC */
int if_elseif_long(int x)
{
 if ( (unsigned int)x >= 5 )
 return -1;
 else
 return 100 * x + 100;
}





/* Function: switch_large @ 0xB34 */
int switch_large(int op)
{
 if ( (unsigned int)op >= 0xA )
 return -1;
 else
 return 10 * op;
}


/* Function: switch_default @ 0xB48 */
int switch_default(int op)
{
 if ( (unsigned int)(op - 1) >= 3 )
 return 0;
 else
 return 100 * (op - 1) + 100;
}


/* Function: switch_fallthrough @ 0xB64 */
int switch_fallthrough(int op)
{
 int v1; // w8

 v1 = 0;
 switch ( op )
 {
 case 1:
 return v1 + op;
 case 2:
LABEL_5:
 v1 += 2 * op;
 return v1 + op;
 case 3:
 v1 = 12;
 goto LABEL_5;
 }
 return -1;
}


/* Function: loop_for_fixed @ 0xB98 */
int loop_for_fixed(int n)
{
 if ( n < 1 )
 return 0;
 else
 return (((unsigned int)(n - 1) * (unsigned long long)(unsigned int)(n - 2)) >> 1) + n - 1;
}


/* Function: loop_while @ 0xBC0 */
int loop_while(int x)
{
 int v1; // w8
 int result; // w0
 unsigned int v3; // w11

 if ( !x )
 return 1;
 v1 = x;
 result = 0;
 do
 {
 ++result;
 v3 = v1 + 9;
 v1 /= 10;
 }
 while ( v3 > 0x12 );
 return result;
}


/* Function: loop_dowhile @ 0xC04 */
int loop_dowhile(int x)
{
 int result; // w0
 unsigned int v3; // w11

 result = 0;
 do
 {
 ++result;
 v3 = x + 9;
 x /= 10;
 }
 while ( v3 > 0x12 );
 return result;
}


/* Function: loop_nested @ 0xC3C */
int loop_nested(int m, int n)
{
 if ( n <= 0 || m <= 0 )
 return 0;
 else
 return n * m;
}


/* Function: loop_break @ 0xC50 */
int loop_break(int target)
{
 int v1; // w8
 int result; // w0

 v1 = target - 10;
 result = 0;
 switch ( v1 )
 {
 case 0:
 return result;
 case 10:
 result = 1;
 break;
 case 20:
 result = 2;
 break;
 case 30:
 result = 3;
 break;
 case 40:
 result = 4;
 break;
 default:
 result = -1;
 break;
 }
 return result;
}


/* Function: loop_continue @ 0xCA0 */
int loop_continue(int n)
{
 int v1; // w8
 unsigned int v2; // w9
 neon_reg_t v4; // q0
 neon_reg_t v5; // q1
 neon_reg_t v6; // q2
 neon_reg_t v7; // q4
 neon_reg_t v8; // q3
 unsigned int v9; // w8
 neon_reg_t v10; // q5
 neon_reg_t v11; // q6
 neon_reg_t v12; // q16
 neon_reg_t v13; // q6
 int v14; // w11

 if ( n < 1 )
 return 0;
 if ( (unsigned int)n >= 8 )
 {
 v4.v = vdupq_n_s32(0);
 v2 = n & 0xFFFFFFF8 | 1;
 v5.n128_u64[0] = 0x400000004LL;
 v5.n128_u64[1] = 0x400000004LL;
 v6.n128_u64[0] = 0x100000001LL;
 v6.n128_u64[1] = 0x100000001LL;
 v7.v = xmmword_1A00;
 v8.n128_u64[0] = 0x800000008LL;
 v8.n128_u64[1] = 0x800000008LL;
 v9 = n & 0xFFFFFFF8;
 v10.v = vdupq_n_s32(0);
 do
 {
 v9 -= 8;
 v11.b = vreinterpretq_s8_s32(vreinterpretq_s32_u32(vceqzq_s32(vreinterpretq_s32_s8(vandq_s8(v7.b, v6.b)))));
 v12.b = vreinterpretq_s8_s32(vbicq_s32(vreinterpretq_s32_s8(v7.b), vreinterpretq_s32_u32(vceqzq_s32(vreinterpretq_s32_s8(vandq_s8(v7.b, v6.b))))));
 v13.b = vreinterpretq_s8_s32(vbicq_s32(vaddq_s32(v7.v, v5.v), vreinterpretq_s32_s8(v11.b)));
 v13.b = vreinterpretq_s8_s32(vbicq_s32(vaddq_s32(v7.v, v5.v), vreinterpretq_s32_s8(v11.b)));
 v7.v = vaddq_s32(v7.v, v8.v);
 v4.v = vaddq_s32(v12.v, v4.v);
 v10.v = vaddq_s32(v13.v, v10.v);
 }
 while ( v9 );
 v1 = vaddvq_s32(vaddq_s32(v10.v, v4.v));
 if ( (n & 0x7FFFFFF8) == n )
 return v1;
 }
 else
 {
 v1 = 0;
 v2 = 1;
 }
 do
 {
 v14 = ((int)(v2 << 31) >> 31) & v2;
 ++v2;
 v1 += v14;
 }
 while ( n + 1 != v2 );
 return v1;
}


/* Function: goto_forward @ 0xD4C */
int goto_forward(int x)
{
 int v1; // w8

 if ( x <= 1 )
 v1 = 1;
 else
 v1 = x;
 return 2 * x * v1;
}


/* Function: goto_backward @ 0xD60 */
int goto_backward(int x)
{
 unsigned int v1; // w9
 int v2; // w8
 neon_reg_t v4; // q0
 neon_reg_t v5; // q1
 neon_reg_t v6; // q2
 neon_reg_t v7; // q4
 neon_reg_t v8; // q3
 unsigned int v9; // w8
 neon_reg_t v10; // q5
 neon_reg_t v11; // q0

 if ( x < 1 )
 return 1;
 if ( (unsigned int)x >= 8 )
 {
 v4.n128_u64[0] = 0x100000001LL;
 v4.n128_u64[1] = 0x100000001LL;
 v1 = x & 0xFFFFFFF8 | 1;
 v5.n128_u64[0] = 0x400000004LL;
 v5.n128_u64[1] = 0x400000004LL;
 v6.n128_u64[0] = 0x800000008LL;
 v6.n128_u64[1] = 0x800000008LL;
 v7.v = xmmword_1A00;
 v8.n128_u64[0] = 0x100000001LL;
 v8.n128_u64[1] = 0x100000001LL;
 v9 = x & 0xFFFFFFF8;
 do
 {
 v10.v = vaddq_s32(v7.v, v5.v);
 v9 -= 8;
 v4.v = vmulq_s32(v7.v, v4.v);
 v7.v = vaddq_s32(v7.v, v6.v);
 v8.v = vmulq_s32(v10.v, v8.v);
 }
 while ( v9 );
 v11.v = vmulq_s32(v8.v, v4.v);
 {
   int32_t a = vget_lane_s32(vreinterpret_s32_u64(vcreate_u64(v11.n128_u64[0])), 0);
   int8x16_t tmp = vextq_s8(v11.b, v11.b, 8u);
   int32_t b = vget_lane_s32(vreinterpret_s32_u64(vget_low_u64(vreinterpretq_u64_s8(tmp))), 0);
   v11.n128_u64[0] = (uint64_t)(uint32_t)(a * b);
 }
 v2 = v11.n128_u32[0] * v11.n128_u32[1];
 if ( (x & 0x7FFFFFF8) == x )
 return v2;
 }
 else
 {
 v1 = 1;
 v2 = 1;
 }
 do
 v2 *= v1++;
 while ( x + 1 != v1 );
 return v2;
}


/* Function: ternary_op @ 0xDFC */
int ternary_op(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: test_control_flow_l1 @ 0xE08 */
void test_control_flow_l1()
{
 puts(asc_1F85);
 printf("CF-L1-01 (sequential_ops): %d\n", 21);
 printf("CF-L1-02 (single_if): %d\n", 20);
 printf("CF-L1-02 (single_if): %d\n", -5);
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
 printf("CF-L1-16 (loop_break): %d\n", -1);
 printf("CF-L1-17 (loop_continue): %d\n", 25);
 printf("CF-L1-18 (goto_forward): %d\n", 50);
 printf("CF-L1-18 (goto_forward): %d\n", -6);
 printf("CF-L1-19 (goto_backward): %d\n", 120);
 printf("CF-L1-20 (ternary_op): %d\n", 10);
 printf("CF-L1-20 (ternary_op): %d\n", 8);
}





/* Function: infinite_loop @ 0x100C */
int infinite_loop(volatile int *flag)
{
 int result; // w0

 result = 0;
 while ( *flag != 1 )
 {
 if ( ++result == 1001 )
 {
 *flag = 1;
 return result;
 }
 }
 return result;
}


/* Function: multi_return @ 0x1038 */
int multi_return(int x)
{
 int v1; // w9

 if ( x < 0 )
 return -1;
 v1 = 2 * x;
 if ( (x & 1) != 0 )
 v1 = x + 1;
 if ( (unsigned int)x <= 0x32 )
 return v1;
 else
 return -2;
}


/* Function: conditional_return @ 0x1060 */
int conditional_return(int x)
{
 if ( x <= 0 )
 return -x;
 else
 return 2 * x;
}





/* Function: loop_complex_cond @ 0x1104 */
int loop_complex_cond(int x)
{
 unsigned int v1; // w10
 int v2; // w8
 unsigned int v3; // w11
 unsigned int v4; // w9

 if ( x >= 1 )
 {
 v1 = 0;
 v2 = 0;
 do
 {
 v3 = x;
 v2 += 2;
 --x;
 v4 = v1 + 1;
 if ( v3 < 2 )
 break;
 if ( v2 >= x )
 break;
 }
 while ( v1++ < 9 );
 x += v2 + v4;
 }
 return x;
}


/* Function: loop_modify_var @ 0x1160 */
int loop_modify_var(int n)
{
 int v1; // w9
 int v2; // w8
 int v3; // w10

 if ( n < 1 )
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 v3 = v1 + 2;
 if ( v1 <= 5 )
 v3 = v1;
 v2 += v1;
 v1 = v3 + 1;
 }
 while ( v3 + 1 < n );
 return v2;
}


/* Function: loop_external_state @ 0x11A0 */
int loop_external_state(volatile int *flag)
{
 int result; // w0

 for ( result = 0; result != 101; ++result )
 {
 if ( *flag )
 break;
 }
 return result;
}


/* Function: tail_recursion @ 0x1268 */
int tail_recursion(int n, int acc)
{
 int v2; // w8
 int32x4_t v3; // q3
 neon_reg_t v4; // q1
 unsigned int v5; // w10
 neon_reg_t v6; // q2
 neon_reg_t v7; // q0
 int32x4_t v8; // q3
 neon_reg_t v9; // q4
 neon_reg_t v10; // q5
 neon_reg_t v11; // q0

 if ( n >= 2 )
 {
 v2 = n - 1;
 if ( (unsigned int)(n - 1) < 8 )
 goto LABEL_10;
 v3 = vdupq_n_s32(n);
 v7.n128_u64[1] = 0x100000001LL;
 v4.n128_u64[0] = 0x100000001LL;
 v4.n128_u64[1] = 0x100000001LL;
 n -= v2 & 0xFFFFFFF8;
 v5 = v2 & 0xFFFFFFF8;
 v6.n128_u64[0] = 0x300000003LL;
 v6.n128_u64[1] = 0x300000003LL;
 v7.n128_u64[0] = (unsigned int)acc | 0x100000000LL;
 v8 = vaddq_s32(v3, xmmword_1A10);
 v9.n128_u64[0] = 0x700000007LL;
 v9.n128_u64[1] = 0x700000007LL;
 do
 {
 v10.v = vaddq_s32(v8, v6.v);
 v5 -= 8;
 v7.v = vmulq_s32(v7.v, v8);
 v8 = vaddq_s32(v8, v9.v);
 v4.v = vmulq_s32(v4.v, v10.v);
 }
 while ( v5 );
 v11.v = vmulq_s32(v4.v, v7.v);
 {
   int32_t a = vget_lane_s32(vreinterpret_s32_u64(vcreate_u64(v11.n128_u64[0])), 0);
   int8x16_t tmp = vextq_s8(v11.b, v11.b, 8u);
   int32_t b = vget_lane_s32(vreinterpret_s32_u64(vget_low_u64(vreinterpretq_u64_s8(tmp))), 0);
   v11.n128_u64[0] = (uint64_t)(uint32_t)(a * b);
 }
 acc = v11.n128_u32[0] * v11.n128_u32[1];
 if ( v2 != (v2 & 0xFFFFFFF8) )
 {
LABEL_10:
 do
 acc *= n;
 while ( (unsigned int)n-- > 2 );
 }
 }
 return acc;
}


/* Function: indirect_recursion_a @ 0x1304 */
int indirect_recursion_a(int n, int depth)
{
 int i; // w8
 int v3; // w9
 int v4; // w9

 if ( depth >= 1 )
 {
 for ( i = depth + 2; i >= 3; i -= 2 )
 {
 if ( (n & 1) != 0 )
 {
 v4 = 3 * n;
 if ( i == 3 )
 return v4 + 1;
 n = v4 + 2;
 }
 else
 {
 if ( n >= 0 )
 v3 = n;
 else
 v3 = n + 1;
 n = v3 >> 1;
 if ( i == 3 )
 return n;
 ++n;
 }
 }
 }
 return n;
}


/* Function: call_func_ptr @ 0x135C */
int call_func_ptr(int (*f)(int), int x)
{
 return f(x);
}


/* Function: call_func_ptr_array @ 0x1368 */
int call_func_ptr_array(int idx, int x)
{
 unsigned int v2; // w8
 int v3; // w9
 neon_reg_t v4; // q0
 unsigned int v5; // w11
 neon_reg_t v6; // q1
 neon_reg_t v7; // q2
 int32x4_t v8; // q3
 neon_reg_t v9; // q4
 neon_reg_t v10; // q5
 neon_reg_t v11; // q0
 int result; // w0

 switch ( x )
 {
 case 0:
 return 2 * x;
 case 1:
 return 3 * x;
 case 2:
 if ( x < 2 )
 return 1;
 v2 = x;
 v3 = x - 1;
 if ( (unsigned int)(x - 1) < 8 )
 {
 result = 1;
 do
LABEL_13:
 result *= v2;
 while ( v2-- > 2 );
 return result;
 }
 v4.n128_u64[0] = 0x100000001LL;
 v4.n128_u64[1] = 0x100000001LL;
 v2 = x - (v3 & 0xFFFFFFF8);
 v5 = v3 & 0xFFFFFFF8;
 v6.n128_u64[0] = 0x300000003LL;
 v6.n128_u64[1] = 0x300000003LL;
 v7.n128_u64[0] = 0x700000007LL;
 v7.n128_u64[1] = 0x700000007LL;
 v8 = vaddq_s32(vdupq_n_s32(x), xmmword_1A10);
 v9.n128_u64[0] = 0x100000001LL;
 v9.n128_u64[1] = 0x100000001LL;
 do
 {
 v10.v = vaddq_s32(v8, v6.v);
 v5 -= 8;
 v4.v = vmulq_s32(v8, v4.v);
 v8 = vaddq_s32(v8, v7.v);
 v9.v = vmulq_s32(v10.v, v9.v);
 }
 while ( v5 );
 v11.v = vmulq_s32(v9.v, v4.v);
 {
   int32_t a = vget_lane_s32(vreinterpret_s32_u64(vcreate_u64(v11.n128_u64[0])), 0);
   int32_t b = vget_lane_s32(vget_high_s32(v11.v), 0);
   v11.n128_u64[0] = (uint64_t)(uint32_t)(a * b);
 }
 result = v11.n128_u32[0] * v11.n128_u32[1];
 if ( v3 != (v3 & 0xFFFFFFF8) )
 goto LABEL_13;
 return result;
 default:
 return -1;
 }
}


/* Function: call_virtual_func @ 0x139C */
int call_virtual_func(void *obj, int x)
{
 return 2 * x;
}


/* Function: process_with_callback @ 0x13A4 */
int process_with_callback(int *arr, int n, int (*cb)(int))
{
 int v5; // w20
 long long v6; // x22
 int v7; // t1

 if ( n < 1 )
 return 0;
 v5 = 0;
 v6 = (unsigned int)n;
 do
 {
 v7 = *arr++;
 --v6;
 v5 += cb(v7);
 }
 while ( v6 );
 return v5;
}


/* Function: test_control_flow_l2 @ 0x140C */
void test_control_flow_l2()
{
 int i; // w1
 unsigned int v1; // w21
 int v2; // w19
 int v3; // w8
 unsigned int v4; // w9
 int j; // w1

 puts(asc_1FA9);
 printf("CF-L2-01 (loop_multi_exit): %d\n", 12);
 for ( i = 0; i != 1001; ++i )
 ;
 printf("CF-L2-02 (infinite_loop): %d\n", 1001);
 v1 = -1;
 printf("CF-L2-03 (multi_return): %d\n", -1);
 printf("CF-L2-03 (multi_return): %d\n", -2);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v2 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 printf("CF-L2-05 (duffs_device): %d\n", 8);
 v3 = 11;
 do
 {
 v4 = v2 - 8;
 v2 += 2;
 if ( v4 >= v3 - 2 )
 break;
 ++v1;
 --v3;
 }
 while ( v1 < 9 );
 printf("CF-L2-06 (loop_complex_cond): %d\n", v2);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 for ( j = 0; j != 101; ++j )
 ;
 printf("CF-L2-08 (loop_external_state): %d\n", 101);
 printf("CF-L2-09 (recursion_factorial): %d\n", 120);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 printf("CF-L2-11 (indirect_recursion): %d\n", 3);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
 printf("CF-L2-15 (process_with_callback): %d\n", 30);
}





/* Function: cpp_exception @ 0x1628 */
int cpp_exception(int x)
{
 int v1; // w8

 if ( x <= 100 )
 v1 = 2 * x;
 else
 v1 = -2;
 if ( x < 0 )
 return -1;
 else
 return v1;
}


/* Function: large_jump_table @ 0x1644 */
int large_jump_table(int op, int a, int b)
{
 int result; // w0

 switch ( a )
 {
 case 0:
 result = b + a;
 break;
 case 1:
 result = a - b;
 break;
 case 2:
 result = b * a;
 break;
 case 3:
 if ( b )
 result = a / b;
 else
 result = 0;
 break;
 case 4:
 if ( b )
 result = a % b;
 else
 result = 0;
 break;
 case 5:
 result = b & a;
 break;
 case 6:
 result = b | a;
 break;
 case 7:
 result = b ^ a;
 break;
 case 8:
 result = a << b;
 break;
 case 9:
 result = a >> b;
 break;
 default:
 result = -1;
 break;
 }
 return result;
}


/* Function: conditional_func_ptr @ 0x16D8 */
int conditional_func_ptr(int mode, int x)
{
 int ( *v2)(int); // x8

 v2 = recursion_factorial;
 if ( mode == 1 )
 v2 = triple_value;
 if ( mode )
 return v2(x);
 else
 return double_value(x);
}


/* Function: state_machine @ 0x1708 */
int state_machine(int event, int state)
{
 int result; // w0
 int v3; // w8

 switch ( state )
 {
 case 0:
 result = event == 1;
 break;
 case 1:
 if ( event == 99 )
 v3 = 3;
 else
 v3 = 1;
 if ( event == 2 )
 result = 2;
 else
 result = v3;
 break;
 case 2:
 goto LABEL_4;
 case 3:
 if ( event )
 result = 3;
 else
 result = 0;
 break;
 default:
 state = 3;
LABEL_4:
 result = state;
 break;
 }
 return result;
}


/* Function: fsm_func_table @ 0x176C */
int fsm_func_table(int event, int state)
{
 int result; // w0
 int v3; // w8

 switch ( state )
 {
 case 0:
 result = event == 1;
 break;
 case 1:
 if ( event == 99 )
 v3 = 3;
 else
 v3 = 1;
 if ( event == 2 )
 result = 2;
 else
 result = v3;
 break;
 case 2:
 result = 2;
 break;
 case 3:
 if ( event )
 result = 3;
 else
 result = 0;
 break;
 default:
 result = 3;
 break;
 }
 return result;
}


/* Function: computed_goto @ 0x17C8 */
long long computed_goto(int *labels, int idx)
{
 long long result; // x0

 switch ( idx )
 {
 case 0:
 result = 0;
 break;
 case 1:
 result = 10;
 break;
 case 2:
 result = 20;
 break;
 case 3:
 result = 30;
 break;
 default:
 result = 0xFFFFFFFFLL;
 break;
 }
 return result;
}


/* Function: obfuscated_cf @ 0x1808 */
int obfuscated_cf(int x)
{
 return 2 * x;
}


/* Function: opaque_predicate @ 0x1810 */
int opaque_predicate(int x)
{
 return 2 * x;
}


/* Function: overlapped_code @ 0x1818 */
int overlapped_code(int x)
{
 int v1; // w8
 int v2; // w8

 if ( x >= 0 )
 v1 = x;
 else
 v1 = x + 1;
 v2 = v1 >> 1;
 if ( (x & 1) != 0 )
 return 3 * x + 1;
 else
 return v2;
}


/* Function: test_control_flow_l3 @ 0x1834 */
void test_control_flow_l3()
{
 int v0; // w0
 int v1; // w0
 int *v2; // x0
 int v3; // w0

 puts(asc_1FCD);
 v0 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n", v0);
 v1 = non_local_jump(-5);
 printf("CF-L3-01 (non_local_jump): %d\n", v1);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", -1);
 printf("CF-L3-03 (large_jump_table): %d\n", 15);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 v2 = (int *)printf("CF-L3-06 (fsm_func_table): %d\n", 2);
 v3 = computed_goto(v2, 2);
 printf("CF-L3-07 (computed_goto): %d\n", v3);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x192C */
int main(int argc, const char **argv, const char **envp)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}


/* Function: .term_proc @ 0x194C */
void term_proc()
{
 ;
}


/* FAILED to decompile: _setjmp @ 0x131E0 */

/* FAILED to decompile: __libc_start_main @ 0x131E8 */

/* FAILED to decompile: __cxa_finalize @ 0x131F0 */

/* FAILED to decompile: abort @ 0x131F8 */

/* FAILED to decompile: puts @ 0x13200 */

/* FAILED to decompile: longjmp @ 0x13208 */

/* FAILED to decompile: printf @ 0x13210 */

/* FAILED to decompile: __gmon_start__ @ 0x13220 */

/* Total functions decompiled: 57, failed: 8 */
