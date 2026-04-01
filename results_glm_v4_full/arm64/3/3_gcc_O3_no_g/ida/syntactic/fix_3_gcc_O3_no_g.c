#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

/* ARM NEON intrinsics support */
#if defined(__ARM_NEON) || defined(__aarch64__)
#include <arm_neon.h>

/* Unified type that wraps int32x4_t for direct member access */
typedef union {
    int32x4_t neon;
    int32_t n128_i32[4];
    uint32_t n128_u32[4];
    int64_t n128_i64[2];
    uint64_t n128_u64[2];
} vec128_t;

/* Helper macro to create int32x4_t from two 64-bit values */
#define V128_FROM_U64(hi, lo) ((vec128_t){ .n128_u64 = { (lo), (hi) } }).neon

/* Macros for setting lanes using vec128_t union access */
#define SET_VEC_U64(v, val, lane) do { vec128_t _tmp = (vec128_t){ .neon = (v) }; _tmp.n128_u64[lane] = (val); (v) = _tmp.neon; } while(0)
#define SET_VEC_U64_BOTH(v, lo, hi) do { vec128_t _tmp = (vec128_t){ .neon = (v) }; _tmp.n128_u64[0] = (lo); _tmp.n128_u64[1] = (hi); (v) = _tmp.neon; } while(0)
#define SET_VEC_U32(v, val, lane) do { vec128_t _tmp = (vec128_t){ .neon = (v) }; _tmp.n128_u32[lane] = (val); (v) = _tmp.neon; } while(0)
#define GET_VEC_U32(v, lane) (((vec128_t){ .neon = (v) }).n128_u32[lane])

/* Helper functions for vec128_t operations */
static inline void vsetq_lane_u64_vec(int64_t val, vec128_t *v, int lane) {
    v->neon = vsetq_lane_s32((int32_t)(val & 0xFFFFFFFF), v->neon, lane * 2);
    v->neon = vsetq_lane_s32((int32_t)(val >> 32), v->neon, lane * 2 + 1);
}
static inline void vsetq_lane_u32_vec(uint32_t val, vec128_t *v, int lane) {
    v->neon = vsetq_lane_s32((int32_t)val, v->neon, lane);
}
static inline int32_t vaddvq_s32_wrap(vec128_t v1) {
    return vaddvq_s32(v1.neon);
}

/* Unified wrappers that work on int32x4_t */
static inline void vsetq_lane_u64_unified(int64_t val, int32x4_t *v, int lane) {
    vec128_t tmp;
    tmp.neon = *v;
    vsetq_lane_u64_vec(val, &tmp, lane);
    *v = tmp.neon;
}
static inline uint32_t vgetq_lane_u32_unified(int32x4_t v, int lane) {
    return (uint32_t)vgetq_lane_s32(v, lane);
}
static inline void vsetq_lane_u32_unified(uint32_t val, int32x4_t *v, int lane) {
    vec128_t tmp;
    tmp.neon = *v;
    tmp.neon = vsetq_lane_s32((int32_t)val, tmp.neon, lane);
    *v = tmp.neon;
}

#define vsetq_lane_u64 vsetq_lane_u64_unified
#define vgetq_lane_u32 vgetq_lane_u32_unified
#define vsetq_lane_u32 vsetq_lane_u32_unified
#define vaddvq_s32(v) vaddvq_s32_wrap(*(vec128_t *)&(v))


#else
/* Fallback definitions for non-ARM platforms */
typedef union {
    int32_t n128_i32[4];
    uint32_t n128_u32[4];
    int64_t n128_i64[2];
    uint64_t n128_u64[2];
    int16_t n128_i16[8];
    uint16_t n128_u16[8];
    int8_t n128_i8[16];
    uint8_t n128_u8[16];
} int32x4_t;

/* Macros for setting lanes using direct union access */
#define SET_VEC_U64(v, val, lane) ((v).n128_u64[lane] = (val))
#define SET_VEC_U32(v, val, lane) ((v).n128_u32[lane] = (val))
#define GET_VEC_U32(v, lane) ((v).n128_u32[lane])

typedef union {
    int8_t n128_i8[16];
    uint8_t n128_u8[16];
    int16_t n128_i16[8];
    uint16_t n128_u16[8];
    int32_t n128_i32[4];
    uint32_t n128_u32[4];
    int64_t n128_i64[2];
    uint64_t n128_u64[2];
} int8x16_t;

/* Fallback NEON intrinsics */
#define vmulq_n_s32(v1, n) ({ int32x4_t _r = v1; _r.n128_i32[0] *= n; _r.n128_i32[1] *= n; _r.n128_i32[2] *= n; _r.n128_i32[3] *= n; _r; })
#define vaddq_s32(v1, v2) ({ int32x4_t _r; _r.n128_i32[0] = (v1).n128_i32[0] + (v2).n128_i32[0]; _r.n128_i32[1] = (v1).n128_i32[1] + (v2).n128_i32[1]; _r.n128_i32[2] = (v1).n128_i32[2] + (v2).n128_i32[2]; _r.n128_i32[3] = (v1).n128_i32[3] + (v2).n128_i32[3]; _r; })
#define vmovn_s16(v1) ({ int8x16_t _r; for (int i = 0; i < 8; i++) _r.n128_i8[i] = (int8_t)(v1).n128_i16[i]; _r; })
#define vmovn_high_s32(v1, v2) ({ int8x16_t _r; for (int i = 0; i < 4; i++) _r.n128_i8[i] = (int8_t)(v1).n128_i32[i]; for (int i = 0; i < 4; i++) _r.n128_i8[4 + i] = (int8_t)(v2).n128_i32[i]; _r; })
#define vmovn_high_s16(v1, v2) ({ int8x16_t _r; for (int i = 0; i < 8; i++) _r.n128_i8[i] = (v1).n128_i8[i]; for (int i = 0; i < 8; i++) _r.n128_i8[8 + i] = (v2).n128_i8[i]; _r; })
#define vshlq_n_s32(v1, n) ({ int32x4_t _r = v1; _r.n128_i32[0] <<= n; _r.n128_i32[1] <<= n; _r.n128_i32[2] <<= n; _r.n128_i32[3] <<= n; _r; })
#define vaddvq_s32(v1) ((v1).n128_i32[0] + (v1).n128_i32[1] + (v1).n128_i32[2] + (v1).n128_i32[3])
static inline void vsetq_lane_u64(int64_t val, int32x4_t *v, int lane) {
    v->n128_u64[lane] = (uint64_t)val;
}
static inline uint32_t vgetq_lane_u32(int32x4_t v, int lane) {
    return v.n128_u32[lane];
}
static inline void vsetq_lane_u32(uint32_t val, int32x4_t *v, int lane) {
    v->n128_u32[lane] = val;
}
#endif

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/3/3_gcc_O3_no_g
 * Processor: arm
 */

/* Global variable declarations */
unsigned int global_counter = 0;
static unsigned int file_scope_static = 0;
unsigned int global_array[10];
static unsigned int counter_1 = 0;
unsigned int extern_global_var = 200;
static const char const_string[] = "test";
long long (*global_func_ptr)(void);

/* Global constants */
static const int32x4_t xmmword_29D0_data = {0, 0, 0, 0};
static const int32x4_t xmmword_29E0_data = {0, 0, 0, 0};
static const int32x4_t xmmword_29F0_data = {1, 2, 3, 0};
static const int32x4_t xmmword_2A00_data = {4, 5, 0, 0};
static const int32x4_t xmmword_2A10_data = {1, 2, 3, 4};
static const int32x4_t xmmword_2A20_data = {1, 2, 3, 5};
#define xmmword_29D0 xmmword_29D0_data
#define xmmword_29E0 xmmword_29E0_data
#define xmmword_29F0 xmmword_29F0_data
#define xmmword_2A00 xmmword_2A00_data
#define xmmword_2A10 xmmword_2A10_data
#define xmmword_2A20 xmmword_2A20_data

/* String constants */
const char asc_22B8[] = "=== Testing Stack Memory Operations ===";
const char asc_2428[] = "=== Testing Heap Memory Operations ===";
const char asc_2628[] = "=== Testing Static and Global Memory Operations ===";
const char asc_28D8[] = "=== Testing Memory Operation Functions ===";
const char aD[] = "value after free: %lld\n";
const char byte_25B0[] = "Child process crashed\n";
const char byte_2588[] = "Child process exited with status: %d\n";
const char aFork_0[] = "fork";

/* Forward declarations */
long long call_weak_fn(void);
long long extern_function(int a1);
void exit(int status);
#define JUMPOUT(x) ((void)0)
#define BYTE1(x) (((x) >> 8) & 0xFF)
#define LODWORD(x) (*(unsigned int*)&(x))
#if defined(__ARM_NEON) || defined(__aarch64__)
#define __dmb(arg) __asm__ volatile("dmb " #arg ::: "memory")
#else
#define __dmb(arg) ((void)0)
#endif
long long test_stack_memory(int argc, const char **argv, const char **envp);
long long test_heap_memory();
long long test_static_global(long long);
long long test_memory_op_functions(void);

/* Function: .init_proc @ 0x990 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_9B0 @ 0x9B0 */
void sub_9B0()
{
 JUMPOUT(0);
}


/* Function: main @ 0xB00 */
int main(int argc, const char **argv, const char **envp)
{
 long long v3; // x0
 long long v4; // x0
 long long v5; // x0

 v3 = test_stack_memory(argc, argv, envp);
 v4 = test_heap_memory();
 v5 = test_static_global(v4);
 test_memory_op_functions();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0xC60 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: alloca_usage.constprop.0 @ 0xC70 */
long long alloca_usage_constprop_0()
{
 return 15;
}


/* Function: local_vars @ 0xC80 */
long long local_vars(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0xC90 */
long long local_array(int a1)
{
 return GET_VEC_U32(vmulq_n_s32(xmmword_29D0_data, a1), 1);
}


/* Function: local_struct @ 0xCB0 */
long long local_struct(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0xCC0 */
long long address_of_local(unsigned int *a1)
{
 long long result; // x0

 result = 42;
 *a1 = 42;
 return result;
}


/* Function: address_of_array @ 0xCD0 */
long long address_of_array(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0xCE0 */
long long large_stack_frame()
{
 unsigned char *v0; // x0
 int32x4_t v1; // q17
 int32x4_t v2; // q16
 int32x4_t v3; // q7
 int32x4_t v4; // q6
 int32x4_t v5; // q1
 int32x4_t v6; // q0
 unsigned long long v10; // counter variable
 unsigned char v8[2048]; // [xsp+10h] [xbp+10h] BYREF
 char v9; // [xsp+810h] [xbp+810h] BYREF

 v0 = v8;
 v1 = V128_FROM_U64(0, 0x1000000010ULL);
 v2 = V128_FROM_U64(0, 0x400000004ULL);
 v3 = V128_FROM_U64(0, 0x800000008ULL);
 v4 = V128_FROM_U64(0, 0xC0000000CULL);
 *(int32x4_t *)&v5 = xmmword_29E0;
 v10 = 0;
 do
 {
 v6 = v5;
 v5 = vaddq_s32(v5, v1);
 {
 int8x16_t tmp_res = vmovn_high_s16(
 vmovn_s16(vmovn_high_s32(vmovn_s32(v6), vaddq_s32(v6, v2))),
 vmovn_high_s32(vmovn_s32(vaddq_s32(v6, v3)), vaddq_s32(v6, v4)));
 (void)tmp_res;
 {
 vec128_t _tmp_v6 = (vec128_t){ .neon = v6 };
 vec128_t _tmp_v0 = (vec128_t){ .n128_u64 = { _tmp_v6.n128_u64[0], _tmp_v6.n128_u64[1] } };
 v0 = (unsigned char *)(uintptr_t)_tmp_v0.n128_u64[0];
 }
 v0 = (unsigned char *)v0 + 1;
 }
 }
 while ( &v9 != (char *)v0 );
 return v8[1024];
}


/* Function: vla_stack @ 0xD90 */
long long vla_stack(int a1)
{
 long long v1; // x1
 unsigned long long v2; // x2
 unsigned short v3; // w1
 long long *v4; // x2
 int32x4_t v5; // q2
 int32x4_t *v6; // x1
 int32x4_t v7; // q1
 int32x4_t v8; // q0
 unsigned int v9; // w1
 int v10; // w2
 unsigned int *v11; // x6
 long long v13; // [xsp+0h] [xbp-10010h] BYREF
 unsigned char v14[3]; // [xsp+10h] [xbp-10000h] BYREF
 long long v15; // [xsp+400h] [xbp-FC10h]
 unsigned char v16[16]; // [xsp+10000h] [xbp-10h] BYREF

 if ( (unsigned int)(a1 - 1) <= 0x3E7 )
 {
 v1 = 4LL * a1 + 15;
 v2 = v1 & 0xFFFFFFFFFFFF0000LL;
 v3 = v1 & 0xFFF0;
 v4 = (long long *)&v16[-v2];
 if ( v16 != (unsigned char *)v4 )
 {
 do
 v15 = 0;
 while ( &v13 != v4 );
 }
 v13 = 0;
 if ( v3 >= 0x400uLL )
 v15 = 0;
 if ( (unsigned int)(a1 - 1) <= 2 )
 {
 v9 = 0;
 }
 else
 {
 SET_VEC_U64_BOTH(v5, 0x400000004LL, 0x400000004LL);
 v6 = (int32x4_t *)(unsigned int *)v14;
 v7 = (int32x4_t)xmmword_29E0;
 do
 {
 v8 = v7;
 v7 = vaddq_s32(v7, v5);
 *v6++ = vshlq_n_s32(v8, 1u);
 }
 while ( v6 != (int32x4_t *)&v14[16 * ((unsigned int)a1 >> 2)] );
 v9 = (unsigned int)(a1 & 0xFFFFFFFC);
 if ( (a1 & 3) == 0 )
 return v14[(a1 >> 1) & 1];
 }
 v10 = 2 * v9;
 v11 = &v14[4 * v9];
 *v11 = 2 * v9;
 if ( (int)(v9 + 1) < a1 )
 {
 v11[1] = v10 + 2;
 if ( a1 > (int)(v9 + 2) )
 v11[2] = v10 + 4;
 }
 return *(unsigned int *)&v14[4 * (a1 >> 1)];
 }
 return 0xFFFFFFFFLL;
}


/* Function: alloca_usage @ 0xED0 */
long long alloca_usage(int a1)
{
 long long v1; // x1
 unsigned long long v2; // x2
 unsigned short v3; // w1
 long long *v4; // x2
 int32x4_t v5; // q3
 int32x4_t *v6; // x1
 int32x4_t v7; // q1
 int32x4_t v8; // q2
 int v9; // w1
 int v10; // w2
 unsigned int *v11; // x4
 long long v13; // [xsp+0h] [xbp-10010h] BYREF
 unsigned int v14[252]; // [xsp+10h] [xbp-10000h] BYREF
 long long v15; // [xsp+400h] [xbp-FC10h]
 unsigned char v16[16]; // [xsp+10000h] [xbp-10h] BYREF

 if ( a1 > 0 )
 {
 v1 = 4LL * a1 + 15;
 v2 = v1 & 0xFFFFFFFFFFFF0000LL;
 v3 = v1 & 0xFFF0;
 v4 = (long long *)&v16[-v2];
 if ( v16 != (unsigned char *)v4 )
 {
 do
 v15 = 0;
 while ( &v13 != v4 );
 }
 v13 = 0;
 if ( v3 >= 0x400uLL )
 v15 = 0;
 if ( (unsigned int)(a1 - 1) <= 2 )
 {
 v9 = 0;
 }
 else
 {
 v5 = (int32x4_t){0};
 v6 = (int32x4_t *)v14;
 *(int32x4_t *)&v7 = xmmword_29E0;
 do
 {
 v8 = v7;
 v7 = vaddq_s32(v7, v5);
 *v6++ = vaddq_s32(vshlq_n_s32(v8, 1u), v8);
 }
 while ( v6 != (int32x4_t *)&v14[4 * ((unsigned int)a1 >> 2)] );
 v9 = a1 & 0x7FFFFFFC;
 if ( (a1 & 3) == 0 )
 return (unsigned int)v14[a1 >> 1];
 }
 v10 = 3 * v9;
 v14[v9] = 3 * v9;
 if ( v9 + 1 < a1 )
 {
 v11 = &v14[v9];
 v11[1] = v10 + 3;
 if ( a1 > v9 + 2 )
 v11[2] = v10 + 6;
 }
 return (unsigned int)v14[a1 >> 1];
 }
 return 0xFFFFFFFFLL;
}


/* Function: stack_alias @ 0x1010 */
long long stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x1020 */
long long test_stack_memory(int argc, const char **argv, const char **envp)
{
 int v0; // w0
 int v1; // w0

 (void)argc; (void)argv; (void)envp;
 puts(asc_22B8);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v0 = large_stack_frame();
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v0);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 v1 = alloca_usage_constprop_0();
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v1);
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x10F4 */
 long long heap_basic(int a1)
{
 int32x4_t *v2; // x0
 int32x4_t v3; // q2
 int32x4_t *v4; // x1
 int32x4_t v5; // q1
 int32x4_t v6; // q0
 int v7; // w1
 int v8; // w2
 char *v9; // x3
 unsigned int v10; // w19

 v2 = (int32x4_t *)malloc(4LL * a1);
 if ( !v2 )
 return (unsigned int)-1;
 if ( a1 > 0 )
 {
 if ( (unsigned int)(a1 - 1) <= 2 )
 {
 v7 = 0;
 goto LABEL_7;
 }
 SET_VEC_U64_BOTH(v3, 0x400000004LL, 0x400000004LL);
 v4 = v2;
 v5 = V128_FROM_U64(0, 0ULL);
 do
 {
 v6 = v5;
 v5 = vaddq_s32(v5, v3);
 *v4++ = vshlq_n_s32(v6, 1u);
 }
 while ( v4 != &v2[(unsigned int)a1 >> 2] );
 v7 = a1 & 0x7FFFFFFC;
 if ( (a1 & 3) != 0 )
 {
LABEL_7:
 v8 = 2 * v7;
 vsetq_lane_u32(2 * v7, &v2[v7], 0);
 if ( a1 > v7 + 1 )
 {
 char *v9_char = (char *)v2 + 4 * v7;
 *(unsigned int *)(v9_char + 4) = v8 + 2;
 if ( a1 > v7 + 2 )
 *((unsigned int *)v9_char + 2) = v8 + 4;
 }
 }
 }
 v10 = GET_VEC_U32(v2[0], (a1 / 2) & 3);
 free(v2);
 return v10;
}


/* Function: heap_calloc @ 0x11D0 */
long long heap_calloc(int a1)
{
 int32x4_t *v2; // x0
 int32x4_t *v3; // x1
 int32x4_t v4; // q0
 int32x4_t v5; // t1
 int v6; // w1
 unsigned int v7; // w19
 char *v8; // x2

 v2 = (int32x4_t *)calloc(a1, 4u);
 if ( !v2 )
 return (unsigned int)-1;
 if ( a1 <= 0 )
 {
 v7 = 0;
 }
 else
 {
 if ( (unsigned int)(a1 - 1) <= 2 )
 {
 v6 = 0;
 v7 = 0;
 goto LABEL_7;
 }
 v3 = v2;
 v4 = xmmword_29E0;
 do
 {
 v5 = *v3++;
 v4 = vaddq_s32(v4, v5);
 }
 while ( v3 != &v2[(unsigned int)a1 >> 2] );
 v6 = a1 & 0x7FFFFFFC;
 {
 vec128_t _tmp_v4;
 _tmp_v4.neon = v4;
 v7 = vaddvq_s32(_tmp_v4);
 }
 if ( (a1 & 3) != 0 )
 {
LABEL_7:
 v7 += vgetq_lane_u32(v2[v6], 0);
 if ( a1 > v6 + 1 )
 {
 v8 = (char *)v2 + 4 * v6;
 v7 += *((unsigned int *)v8 + 1);
 if ( a1 > v6 + 2 )
 v7 += *((unsigned int *)v8 + 2);
 }
 }
 }
 free(v2);
 return v7;
}


/* Function: heap_realloc @ 0x12A4 */
long long heap_realloc()
{
 unsigned int *v0; // x0
 void *v1; // x19
 char *v2; // x0
 unsigned int v3; // w19
 void *v5; // x0

 v0 = malloc(0x14u);
 if ( v0 )
 {
 v0[4] = 5;
 v1 = v0;
 memcpy(v0, &xmmword_29F0, sizeof(xmmword_29F0));
 v2 = (char *)realloc(v1, 0x28u);
 if ( v2 )
 {
 if ( *((unsigned int *)v2 + 2) == 3 )
 v3 = 50;
 else
 v3 = -3;
 *(unsigned long long *)(v2 + 20) = xmmword_2A00;
 free(v2);
 }
 else
 {
 v5 = v1;
 v3 = -2;
 free(v5);
 }
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_array @ 0x1330 */
 long long heap_array(int a1)
{
 int32x4_t *v2; // x0
 int32x4_t v3; // q3
 int32x4_t *v4; // x1
 int32x4_t v5; // q1
 int32x4_t v6; // q2
 int v7; // w1
 int v8; // w2
 unsigned int *v9; // x3
 unsigned int v10; // w19

 v2 = (int32x4_t *)malloc(4LL * a1);
 if ( !v2 )
 return (unsigned int)-1;
 if ( a1 > 0 )
 {
 if ( (unsigned int)(a1 - 1) <= 2 )
 {
 v7 = 0;
 goto LABEL_7;
 }
 SET_VEC_U64_BOTH(v3, 0x400000004LL, 0x400000004LL);
 v4 = v2;
 v5 = V128_FROM_U64(0, 0ULL);
 do
 {
 v6 = v5;
 v5 = vaddq_s32(v5, v3);
 *v4++ = vaddq_s32(vshlq_n_s32(v6, 1u), v6);
 }
 while ( v4 != &v2[(unsigned int)a1 >> 2] );
 v7 = a1 & 0x7FFFFFFC;
 if ( (a1 & 3) != 0 )
 {
LABEL_7:
 v8 = 3 * v7;
 vsetq_lane_u32(3 * v7, &v2[v7], 0);
 if ( a1 > v7 + 1 )
 {
 v9 = (char *)v2 + 4 * v7;
 *((unsigned int *)v9 + 1) = v8 + 3;
 if ( a1 > v7 + 2 )
 *((unsigned int *)v9 + 2) = v8 + 6;
 }
 }
 }
 v10 = GET_VEC_U32(v2[0], (a1 / 2) & 3);
 free(v2);
 return v10;
}


/* Function: heap_struct @ 0x1410 */
long long heap_struct(int a1)
{
 void *v2; // x0
 unsigned int v3; // w19

 v2 = malloc(8u);
 if ( v2 )
 {
 v3 = 3 * a1;
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: heap_nested @ 0x1450 */
long long heap_nested(unsigned long long *a1)
{
 unsigned int *v2; // x0
 unsigned long long *v3; // x19
 unsigned long long *v4; // x0
 unsigned long long *v5; // x1
 long long result; // x0

 v2 = malloc(0x10u);
 if (a1)
 *a1 = (unsigned long long)(uintptr_t)v2;
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 *v2 = 10;
 v4 = malloc(0x10u);
 v3[1] = (unsigned long long)(uintptr_t)v4;
 v5 = v4;
 if ( v4 )
 {
 result = 0;
 *(unsigned int *)v5 = 20;
 *(unsigned long long *)(v5 + 1) = 0;
 }
 else
 {
 free(v3);
 return 4294967294LL;
 }
 return result;
}


/* Function: linked_list_heap @ 0x14C4 */
long long linked_list_heap()
{
 int v0; // w20
 unsigned long long *v1; // x19
 unsigned long long *i; // x21
 unsigned long long *v3; // x0
 unsigned long long *v4; // x0
 unsigned int v5; // w20
 int v6; // w1
 void *v7; // x0
 void *v9; // x0
 unsigned long long *v13; // linked list previous pointer

 v0 = 0;
 v1 = 0;
 v13 = 0;
 for ( i = (unsigned long long *)0; ; i = v3 )
 {
 v3 = malloc(0x10u);
 if ( !v3 )
 break;
 *(unsigned int *)v3 = v0;
 *(unsigned long long *)(v3 + 1) = 0ULL;
 if ( v1 )
 {
 v0 += 10;
 i[1] = v3;
 if ( v0 == 50 )
 goto LABEL_7;
 }
 else
 {
 v0 += 10;
 v1 = v3;
 if ( v0 == 50 )
 {
LABEL_7:
 v4 = v1;
 v5 = 0;
 do
 {
 v6 = *(unsigned int *)v4;
 v4 = (unsigned long long *)v4[1];
 v5 += v6;
 }
 while ( v4 );
 do
 {
 v7 = v1;
 v1 = (unsigned long long *)v1[1];
 free(v7);
 }
 while ( v1 );
 return v5;
 }
 }
 v13 = v3;
 while ( v1 )
 {
 v9 = v1;
 v1 = (unsigned long long *)v1[1];
 free(v9);
 }
 return (unsigned int)-1;
}
}


/* Function: create_tree_node @ 0x1580 */
unsigned long long * create_tree_node(int a1)
{
 unsigned long long *result; // x0

 result = malloc(0x18u);
 if ( result )
 {
 *(unsigned int *)result = a1;
 result[1] = 0;
 result[2] = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x15B0 */
long long tree_heap_traversal()
{
 void *v0; // x0
 void *v1; // x19
 void *v2; // x20
 void *v3; // x21
 void *v5; // x0

 v0 = malloc(0x18u);
 if ( !v0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 v2 = malloc(0x18u);
 if ( !v2 )
 {
 v5 = malloc(0x18u);
 if ( v5 )
 free(v5);
 goto LABEL_7;
 }
 v3 = malloc(0x18u);
 if ( !v3 )
 {
 free(v2);
LABEL_7:
 free(v1);
 return 4294967294LL;
 }
 free(v2);
 free(v3);
 free(v1);
 return 60;
}


/* Function: memory_leak @ 0x1660 */
long long memory_leak(int a1)
{
 int32x4_t *v2; // x0
 int32x4_t v3; // q2
 int32x4_t *v4; // x1
 int32x4_t v5; // q0
 int32x4_t v6; // q1
 int v7; // w1
 int v8; // w3
 char *v9; // x2
 int v10; // w1

 v2 = (int32x4_t *)malloc(4LL * a1);
 if ( !v2 )
 return 0xFFFFFFFFLL;
 if ( a1 > 0 )
 {
 if ( (unsigned int)(a1 - 1) <= 2 )
 {
 v7 = 0;
 goto LABEL_7;
 }
 v3 = (int32x4_t){0};
 v4 = v2;
 v5 = V128_FROM_U64(0, 0ULL);
 do
 {
 v6 = v5;
 v5 = vaddq_s32(v5, v3);
 *v4++ = v6;
 }
 while ( v4 != &v2[(unsigned int)a1 >> 2] );
 v7 = a1 & 0x7FFFFFFC;
 if ( (a1 & 3) != 0 )
 {
LABEL_7:
 v8 = v7 + 1;
 vsetq_lane_u32(v7, &v2[v7], 0);
 if ( a1 > v7 + 1 )
 {
 v9 = (char *)v2 + 4 * v7;
 v10 = v7 + 2;
 *((unsigned int *)v9 + 1) = v8;
 if ( a1 > v10 )
 *((unsigned int *)v9 + 2) = v10;
 }
 }
 }
 return GET_VEC_U32(v2[0], (a1 / 2) & 3);
}


/* Function: dangling_pointer @ 0x1720 */
long long dangling_pointer()
{
 unsigned int *v0; // x0
 unsigned int *v1; // x19

 v0 = (unsigned int *)malloc(4u);
 if ( !v0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 __printf_chk(1, "value before free: %d\n", 42);
 free(v1);
 return (unsigned int)*(unsigned int *)v1;
}


/* Function: double_free @ 0x1770 */
long long double_free(unsigned int *a1)
{
 void *v2; // x0
 void *v3; // x19

 if ( a1 )
 return *a1;
 v2 = malloc(4u);
 v3 = v2;
 if ( !v2 )
 return 0xFFFFFFFFLL;
 free(v2);
 free(v3);
 return 4294967294LL;
}


/* Function: heap_overflow @ 0x17C0 */
long long heap_overflow()
{
 void *v0; // x0

 v0 = malloc(0x28u);
 if ( !v0 )
 return 0xFFFFFFFFLL;
 free(v0);
 return 0;
}


/* Function: test_heap_memory @ 0x17F0 */
long long test_heap_memory()
{
 unsigned long long *v0; // x0
 int v1; // w2
 int32x4_t *v2; // x0
 int v3; // w19
 int v4; // w0
 unsigned long long *v5; // x0
 int v6; // w2
 void *v7; // x0
 int v8; // w2
 unsigned int **v9; // x19
 unsigned int *v10; // x0
 int v11; // w2
 int v12; // w20
 unsigned long long *v13; // x21
 unsigned long long *v14; // x19
 unsigned long long *v15; // x0
 unsigned long long *v16; // x0
 int v17; // w20
 int v18; // w1
 void *v19; // x0
 int v20; // w0
 unsigned int *v21; // x0
 int v22; // w2
 int v23; // w0
 unsigned int *v24; // x19
 long long v25; // x2
 void *v26; // x0
 int stat_loc; // [xsp+34h] [xbp+34h] BYREF

 puts(asc_2428);
 v0 = malloc(0x28u);
 v13 = (unsigned long long *)0;
 if ( v0 )
 {
 memcpy(v0, &xmmword_2A10, sizeof(xmmword_2A10));
 *((unsigned long long *)v0 + 4) = 0x1200000010LL;
 free(v0);
 v1 = 10;
 }
 else
 {
 v1 = -1;
 }
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v1);
 v2 = (int32x4_t *)calloc(5u, 4u);
 if ( v2 )
 {
 v3 = vaddvq_s32(*(vec128_t *)&v2[0]) + GET_VEC_U32(v2[1], 0);
 free(v2);
 }
 else
 {
 v3 = -1;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v3);
 v4 = heap_realloc();
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v4);
 v5 = malloc(0x28u);
 if ( v5 )
 {
 memcpy(v5, &xmmword_2A20, sizeof(xmmword_2A20));
 *((unsigned long long *)v5 + 4) = 0x1B00000018LL;
 free(v5);
 v6 = 15;
 }
 else
 {
 v6 = -1;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v6);
 v7 = malloc(8u);
 if ( v7 )
 {
 free(v7);
 v8 = 15;
 }
 else
 {
 v8 = -1;
 }
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v8);
 v9 = (unsigned int **)malloc(0x10u);
 if ( v9 )
 {
 v10 = (unsigned int *)malloc(0x10u);
 v9[1] = v10;
 if ( v10 )
 {
 v11 = 0;
 *v10 = 20;
 *(v10 + 1) = 0;
 *(v10 + 2) = 0;
 *(v10 + 3) = 0;
 }
 else
 {
 free(v9);
 v11 = -2;
 }
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v11);
 free(v9[1]);
 free(v9);
 }
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v12 = 0;
 v13 = 0;
 v14 = 0;
 v10 = 0;
 while ( 1 )
 {
 v15 = malloc(0x10u);
 if ( !v15 )
 break;
 *(unsigned int *)v15 = v12;
 v12 += 10;
 *(unsigned long long *)((unsigned char *)v15 + 8) = 0;
 if ( v14 )
 {
 v14[1] = (unsigned long long)(uintptr_t)v15;
 if ( v12 == 50 )
 goto LABEL_19;
 }
 else
 {
 v14 = v15;
 if ( v12 == 50 )
 {
LABEL_19:
 v16 = v14;
 v17 = 0;
 do
 {
 v18 = *(unsigned int *)v16;
 v16 = (unsigned long long *)v16[1];
 v17 += v18;
 }
 while ( v16 );
 do
 {
 v19 = v14;
 v14 = (unsigned long long *)v14[1];
 free(v19);
 }
 while ( v14 );
 goto LABEL_22;
 }
 }
 v13 = (unsigned long long *)v15;
 }
 while ( v14 )
 {
 v26 = v14;
 v14 = (unsigned long long *)v14[1];
 free(v26);
 }
 v17 = -1;
LABEL_22:
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v17);
 v20 = tree_heap_traversal();
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v20);
 v21 = (unsigned int *)malloc(0x14u);
 if ( v21 )
 {
 v22 = 2;
 *(unsigned int *)v21 = *(unsigned int *)&xmmword_29E0;
 ((unsigned int *)v21)[1] = *((unsigned int *)&xmmword_29E0 + 1);
 ((unsigned int *)v21)[2] = *((unsigned int *)&xmmword_29E0 + 2);
 ((unsigned int *)v21)[3] = *((unsigned int *)&xmmword_29E0 + 3);
 v21[4] = 4;
 }
 else
 {
 v22 = -1;
 }
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v22);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 v23 = fork();
 if ( !v23 )
 {
 v24 = (unsigned int *)malloc(4u);
 if ( v24 )
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(v24);
 v25 = *v24;
 }
 else
 {
 v25 = 0xFFFFFFFFLL;
 }
 __printf_chk(1, aD, v25);
 exit(0);
 }
 if ( v23 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v23, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( ((stat_loc & 0x7F) + 1) << 24 >> 25 > 0 )
 __printf_chk(1, byte_25B0);
 }
 else
 {
 __printf_chk(1, byte_2588, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x1BD0 */
long long global_var_access()
{
 return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x1BE4 */
long long global_var_read()
{
 return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x1BF4 */
long long global_array_access(unsigned int a1)
{
 if ( a1 > 9 )
 return 0xFFFFFFFFLL;
 else
 return global_array[a1];
}


/* Function: static_local @ 0x1C14 */
long long static_local(int a1)
{
 long long result; // x0

 if ( a1 )
 {
 result = 0;
 counter_1 = 0;
 }
 else
 {
 return (unsigned int)++counter_1;
 }
 return result;
}


/* Function: call_static_func @ 0x1C50 */
long long call_static_func(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: access_extern_global @ 0x1C60 */
long long access_extern_global()
{
 return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x1C74 */
long long call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1C80 */
long long read_const_data()
{
 return (unsigned int)(unsigned char)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1C94 */
long long access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1CA0 */
long long access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x1CB0 */
long long global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x1CC0 */
long long set_file_static(long long result)
{
 file_scope_static = result;
 return result;
}


/* Function: get_file_static @ 0x1CD0 */
long long get_file_static()
{
 return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x1CE0 */
void * set_global_callback(void *result)
{
 global_func_ptr = result;
 return result;
}


/* Function: call_global_callback @ 0x1CF0 */
long long call_global_callback()
{
 if ( global_func_ptr )
 return global_func_ptr();
 else
 return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x1D10 */
long long global_heap_store(unsigned int *a1)
{
 if ( a1 )
 return (long long)*a1;
 else
 return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x1D24 */
long long static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x1D30 */
long long tls_access(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x1D40 */
long long init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x1D50 */
long long test_static_global(long long unused_param)
{
 int v0; // w0

 puts(asc_2628);
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", ++global_counter);
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v0 = extern_function(5);
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v0);
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", (unsigned char)const_string[4] + 42);
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (long long (*)(void))double_value;
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x1F40 */
long long memop_memset(unsigned char *a1, size_t n, int c)
{
 bool v3; // zf

 if ( a1 )
 v3 = n == 0;
 else
 v3 = 1;
 if ( v3 )
 return 0xFFFFFFFFLL;
 memset(a1, c, n);
 return *a1;
}


/* Function: memop_memcpy @ 0x1F84 */
long long memop_memcpy(char *a1, const void *a2, size_t a3)
{
 bool v3; // zf
 unsigned long long v6; // x20

 if ( a2 )
 v3 = a3 == 0;
 else
 v3 = 1;
 if ( v3 || a1 == 0 )
 return 0xFFFFFFFFLL;
 v6 = a3 & 0xFFFFFFFFFFFFFFFCLL;
 memcpy(a1, a2, a3);
 return *(unsigned int *)&a1[v6 - 4];
}


/* Function: memop_memmove @ 0x1FD0 */
long long memop_memmove(char *src, unsigned long long a2)
{
 bool v2; // cc

 if ( src )
 v2 = a2 > 1;
 else
 v2 = 0;
 if ( !v2 )
 return 0xFFFFFFFFLL;
 memmove(src + 1, src, a2 - 1);
 return (unsigned char)src[1];
}


/* Function: memop_memcmp @ 0x2014 */
long long memop_memcmp(const void *a1, const void *a2, size_t a3)
{
 bool v3; // zf
 long long result; // x0
 int v6; // w0
 bool v7; // cc

 if ( a2 )
 v3 = a3 == 0;
 else
 v3 = 1;
 if ( v3 || a1 == 0 )
 return 0;
 v6 = memcmp(a1, a2, a3);
 v7 = v6 <= 0;
 if ( v6 )
 LODWORD(result) = -1;
 else
 LODWORD(result) = 0;
 if ( v7 )
 return (unsigned int)result;
 else
 return 1;
}


/* Function: memop_bzero @ 0x2050 */
long long memop_bzero(unsigned char *a1, size_t n)
{
 if ( !a1 )
 return 0xFFFFFFFFLL;
 memset(a1, 0, n);
 return *a1;
}


/* Function: memop_bcopy @ 0x2090 */
long long memop_bcopy(void *src, void *dest, size_t a3)
{
 bool v3; // zf

 if ( dest )
 v3 = a3 == 0;
 else
 v3 = 1;
 if ( v3 || src == 0 )
 return 0xFFFFFFFFLL;
 else
 return *(unsigned char *)memmove(dest, src, a3);
}


/* Function: memop_unaligned_access @ 0x20D0 */
long long memop_unaligned_access(long long a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x20E4 */
long long memop_memory_barrier(int *a1)
{
 int v1; // w1

 if ( !a1 )
 return 0xFFFFFFFFLL;
 v1 = *a1;
 __dmb(0xBu);
 return (unsigned int)(*a1 + v1);
}


/* Function: test_memory_op_functions @ 0x2104 */
long long test_memory_op_functions()
{
 int v0; // w0
 int v1; // w2
 int v3; // [xsp+24h] [xbp+24h]
 long long s1; // [xsp+28h] [xbp+28h] BYREF
 int v5; // [xsp+30h] [xbp+30h]
 long long s2; // [xsp+38h] [xbp+38h] BYREF
 int v7; // [xsp+40h] [xbp+40h]
 long long v8; // [xsp+48h] [xbp+48h]
 short v9; // [xsp+50h] [xbp+50h]
 unsigned long long dest[34]; // [xsp+58h] [xbp+58h] BYREF

 puts(asc_28D8);
 memset(&dest[2], 65, 10);
 __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strcpy((char *)dest, "HelloWorld");
 memmove((char *)dest + 1, dest, 9u);
 __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 v5 = 3;
 v7 = 4;
 s1 = 0x200000001LL;
 s2 = 0x200000001LL;
 v0 = memcmp(&s1, &s2, 0xCu);
 if ( v0 )
 v1 = -1;
 else
 v1 = 0;
 if ( v0 > 0 )
 v1 = 1;
 __printf_chk(1, "MEMOP-L2-04: %d\n", v1);
 v8 = 0;
 v9 = 0;
 __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v3 = 5;
 __dmb(0xBu);
 return __printf_chk(1, "MEMOP-L3-02: %d\n", v3 + 5);
}


/* Function: extern_function @ 0x2290 */
long long extern_function(int a1)
{
 return (unsigned int)(3 * a1);
}


/* Function: .term_proc @ 0x2298 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x14098 */

/* FAILED to decompile: memmove @ 0x140A0 */

/* FAILED to decompile: exit @ 0x140A8 */

/* FAILED to decompile: __libc_start_main @ 0x140B0 */

/* FAILED to decompile: perror @ 0x140B8 */

/* FAILED to decompile: __cxa_finalize @ 0x140C0 */

/* FAILED to decompile: fork @ 0x140C8 */

/* FAILED to decompile: malloc @ 0x140D0 */

/* FAILED to decompile: __printf_chk @ 0x140D8 */

/* FAILED to decompile: memset @ 0x140E0 */

/* FAILED to decompile: calloc @ 0x140E8 */

/* FAILED to decompile: realloc @ 0x140F0 */

/* FAILED to decompile: __stack_chk_fail @ 0x140F8 */

/* FAILED to decompile: abort @ 0x14108 */

/* FAILED to decompile: puts @ 0x14110 */

/* FAILED to decompile: memcmp @ 0x14118 */

/* FAILED to decompile: free @ 0x14120 */

/* FAILED to decompile: waitpid @ 0x14128 */

/* FAILED to decompile: __gmon_start__ @ 0x14138 */

/* Total functions decompiled: 66, failed: 19 */
