/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/2/2_clang_O3_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <arm_neon.h>

/* Type definitions for ARM NEON and compiler-specific types */
typedef union {
    unsigned __int128 n128_u128;
    unsigned long long n128_u64[2];
    unsigned int n128_u32[4];
} __n128;
typedef float32x4x3_t float32x4x3_t;
typedef unsigned long long _BOOL8;

/* Floating-point control register */
#define FPCR 0
#define FPSR 0

/* CRT stub functions */
long long call_weak_fn() { return 0; }

/* JUMPOUT macro for decompiled code */
#define JUMPOUT(x) return

/* LODWORD macro for extracting lower 32 bits */
#define LODWORD(x) ((unsigned int)(x))
#define SET_LODWORD(x, val) do { (x) = ((x) & 0xFFFFFFFF00000000ULL) | (unsigned long long)(unsigned int)(val); } while(0)
#define LOWORD(x) ((unsigned short)(x))
#define SET_LOWORD(x, val) do { (x) = ((x) & 0xFFFFFFFFFFFF0000ULL) | (unsigned long long)(unsigned short)(val); } while(0)



/* Global data declarations */
long double xmmword_2A80 = 0.0L;
long double xmmword_2A90 = 0.0L;
const char *asc_303F = "Data Types L1";
const char *asc_3060 = "Array Types";
const char *asc_307B = "Pointer Types";
const char *asc_3096 = "Composite Types";
unsigned int dword_2AA0[] = {10, 20, 30, 50};
__int128 off_13DC8 = 0;
__int128 xmmword_30B8 = 0;

/* Helper macros for decompiled code */
#define _ReadStatusReg(reg) (0ULL)
#define HIWORD(x) ((unsigned int)((unsigned long long)(x) >> 32))
#define HIDWORD(x) ((unsigned int)((unsigned __int128)(x) >> 64))
#define __PAIR128__(hi, lo) ((__int128)(hi) << 64 | (unsigned long long)(lo))
#define __CFADD__(a, b) (((a) + (b)) < (a))
#define LOBYTE(x) ((unsigned char)(x))
#define __clz(x) __builtin_clzll(x)

/* Forward declarations */
unsigned long long _sfp_handle_exceptions(unsigned long long result);
unsigned long long _ReadStatusReg(unsigned int reg);

/* Function: .init_proc @ 0x608 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_620 @ 0x620 */
void sub_620()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x7D4 */
long long process_char(long long result)
{
 if ( (unsigned char)(result - 65) >= 0x1Au )
 return (unsigned int)result;
 else
 return (unsigned int)(result + 32);
}


/* Function: process_short @ 0x7EC */
long long process_short(int a1, int a2)
{
 return (unsigned int)(a2 + a1);
}


/* Function: process_int @ 0x7F4 */
long long process_int(int a1)
{
 return (2 * a1) | 1u;
}


/* Function: process_long @ 0x804 */
long long process_long(long long a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x80C */
long long process_ll(long long a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x814 */
float process_float(float a1)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x824 */
double process_double(double a1)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x83C */
long double process_ld(long double a1)
{
 return a1 * a1 + *(long double *)&xmmword_2A80;
}


/* Function: process_bool @ 0x85C */
long long process_bool(int a1)
{
 return (a1 > 0) & (unsigned char)((a1 & 1) == 0);
}


/* Function: const_param @ 0x874 */
long long const_param(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: volatile_access @ 0x880 */
long long volatile_access(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: test_data_types_l1 @ 0x890 */
long long test_data_types_l1()
{
 puts(asc_303F);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 printf("DT-L1-06 (process_float): %.2f\n", 3.5);
 printf("DT-L1-07 (process_double): %.2f\n", 2.1);
 printf("DT-L1-08 (process_ld): %.2Lf\n", *(long double *)&xmmword_2A90);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 return printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x9A4 */
long long array_1d_stack(int32x4_t *a1, int a2)
{
 long long v2; // x10
 unsigned int v3; // w8
 int32x4_t *v5; // x8
 int32x4_t v6; // q0
 long long v7; // x11
 int32x4_t v8; // q1
 int32x4_t v9; // q2
 int32x4_t v10; // q3
 int *v11; // x11
 long long v12; // x9
 int v13; // t1

 if ( a2 < 1 )
 return 0;
 if ( (unsigned int)a2 >= 8 )
 {
 v2 = a2 & 0xFFFFFFF8;
 v5 = a1 + 1;
 v6 = vdupq_n_s32(0);
 v7 = v2;
 v8 = vdupq_n_s32(0);
 do
 {
 v9 = v5[-1];
 v10 = *v5;
 v5 += 2;
 v7 -= 8;
 v6 = vaddq_s32(v9, v6);
 v8 = vaddq_s32(v10, v8);
 }
 while ( v7 );
 v3 = vaddvq_s32(vaddq_s32(v8, v6));
 if ( v2 == a2 )
 return v3;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 }
 v11 = (int *)a1 + v2;
 v12 = (unsigned int)a2 - v2;
 do
 {
 v13 = *v11++;
 --v12;
 v3 += v13;
 }
 while ( v12 );
 return v3;
}


/* Function: array_string @ 0xA2C */
unsigned long long array_string(unsigned long long result)
{
 unsigned char *v1; // x8
 int v2; // t1

 v1 = (unsigned char *)result;
 result = (result & 0xFFFFFFFF00000000ULL) | 0xFFFFFFFFU;
 do
 {
 v2 = *v1++;
 result = (unsigned int)(result + 1);
 }
 while ( v2 );
 return result;
}


/* Function: array_2d_stack @ 0xA44 */
long long array_2d_stack(unsigned int *a1)
{
 return (unsigned int)(a1[99] + a1[88] + a1[77] + a1[66] + a1[55] + a1[44] + a1[33] + a1[22] + a1[11] + *a1);
}


/* Function: array_3d @ 0xA94 */
long long array_3d(long long a1)
{
 return (unsigned int)(vaddvq_s32(
 vaddq_s32(
 vaddq_s32(
 vaddq_s32(*(int32x4_t *)(a1 + 436), *(int32x4_t *)(a1 + 468)),
 vaddq_s32(*(int32x4_t *)(a1 + 452), *(int32x4_t *)(a1 + 484))),
 vaddq_s32(*(int32x4_t *)(a1 + 404), *(int32x4_t *)(a1 + 420))))
 + *(unsigned int *)(a1 + 400)
 + vaddvq_s32(
 vaddq_s32(
 vaddq_s32(
 vaddq_s32(*(int32x4_t *)(a1 + 336), *(int32x4_t *)(a1 + 368)),
 vaddq_s32(*(int32x4_t *)(a1 + 352), *(int32x4_t *)(a1 + 384))),
 vaddq_s32(*(int32x4_t *)(a1 + 304), *(int32x4_t *)(a1 + 320))))
 + *(unsigned int *)(a1 + 300)
 + vaddvq_s32(
 vaddq_s32(
 vaddq_s32(
 vaddq_s32(*(int32x4_t *)(a1 + 236), *(int32x4_t *)(a1 + 268)),
 vaddq_s32(*(int32x4_t *)(a1 + 252), *(int32x4_t *)(a1 + 284))),
 vaddq_s32(*(int32x4_t *)(a1 + 204), *(int32x4_t *)(a1 + 220))))
 + *(unsigned int *)(a1 + 200)
 + vaddvq_s32(
 vaddq_s32(
 vaddq_s32(
 vaddq_s32(*(int32x4_t *)(a1 + 136), *(int32x4_t *)(a1 + 168)),
 vaddq_s32(*(int32x4_t *)(a1 + 152), *(int32x4_t *)(a1 + 184))),
 vaddq_s32(*(int32x4_t *)(a1 + 104), *(int32x4_t *)(a1 + 120))))
 + *(unsigned int *)(a1 + 100)
 + vaddvq_s32(
 vaddq_s32(
 vaddq_s32(
 vaddq_s32(*(int32x4_t *)(a1 + 36), *(int32x4_t *)(a1 + 68)),
 vaddq_s32(*(int32x4_t *)(a1 + 52), *(int32x4_t *)(a1 + 84))),
 vaddq_s32(*(int32x4_t *)(a1 + 4), *(int32x4_t *)(a1 + 20))))
 + *(unsigned int *)a1);
}


/* Function: array_vla @ 0xBCC */
long long array_vla(int a1, int32x4_t *a2)
{
 long long v2; // x8
 long long v3; // x9
 long long result; // x0
 int32x4_t *v5; // x10
 int32x4_t v6; // q0
 long long v7; // x11
 int32x4_t v8; // q1
 int32x4_t v9; // q2
 int32x4_t v10; // q3
 int *v11; // x10
 long long v12; // x8
 int v13; // t1

 if ( a1 < 1 )
 return 0;
 v2 = (unsigned int)a1;
 if ( (unsigned int)a1 < 8 )
 {
 v3 = 0;
 result = 0;
LABEL_8:
 v11 = (int *)a2 + v3;
 v12 = v2 - v3;
 do
 {
 v13 = *v11++;
 --v12;
 result = (unsigned int)(v13 + result);
 }
 while ( v12 );
 return result;
 }
 v3 = a1 & 0x7FFFFFF8;
 v5 = a2 + 1;
 v6 = vdupq_n_s32(0);
 v7 = a1 & 0xFFFFFFF8;
 v8 = vdupq_n_s32(0);
 do
 {
 v9 = v5[-1];
 v10 = *v5;
 v5 += 2;
 v7 -= 8;
 v6 = vaddq_s32(v9, v6);
 v8 = vaddq_s32(v10, v8);
 }
 while ( v7 );
 result = (unsigned int)vaddvq_s32(vaddq_s32(v8, v6));
 if ( v3 != v2 )
 goto LABEL_8;
 return result;
}


/* Function: array_pointer @ 0xC50 */
long long array_pointer(int *a1, int a2)
{
 long long v2; // x10
 unsigned int v3; // w8
 int v5; // w8
 int v6; // w11
 long long v7; // x12
 int *v8; // x13
 int v9; // w14
 int v10; // w15
 long long v11; // x9
 int *v12; // x11
 int v13; // t1

 if ( a2 < 1 )
 return 0;
 if ( a2 == 1 )
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = a2 & 0xFFFFFFFE;
 v5 = 0;
 v6 = 0;
 v7 = v2;
 v8 = a1;
 do
 {
 v9 = *v8;
 v7 -= 2;
 v10 = v8[10];
 v8 += 20;
 v5 += v9;
 v6 += v10;
 }
 while ( v7 );
 v3 = v6 + v5;
 if ( v2 == a2 )
 return v3;
 }
 v11 = (unsigned int)a2 - v2;
 v12 = &a1[10 * v2];
 do
 {
 v13 = *v12;
 v12 += 10;
 --v11;
 v3 += v13;
 }
 while ( v11 );
 return v3;
}


/* Function: pointer_array @ 0xCD8 */
long long pointer_array(unsigned int **a1, int a2)
{
 long long result; // x0
 long long v4; // x9

 if ( a2 < 1 )
 return 0;
 result = 0;
 if ( (unsigned int)a2 >= 0xA )
 v4 = 10;
 else
 v4 = (unsigned int)a2;
 do
 {
 if ( *a1 )
 result = (unsigned int)(**a1 + result);
 ++a1;
 --v4;
 }
 while ( v4 );
 return result;
}


/* Function: array_complex_index @ 0xD20 */
long long array_complex_index(long long a1, int a2, int a3, int a4, int a5)
{
 long long result; // x0

 if ( a4 < 0 )
 return 0xFFFFFFFFLL;
 result = 0xFFFFFFFFLL;
 if ( a5 < a3 && a4 < a2 && (a5 & 0x80000000) == 0 )
 return *(unsigned int *)(a1 + 4LL * (a4 + a5 * a2));
 return result;
}


/* Function: array_oob @ 0xD54 */
long long array_oob(int32x4_t *a1, unsigned int a2)
{
 long long v2; // x9
 long long v3; // x10
 unsigned int v4; // w8
 int32x4_t *v6; // x8
 int32x4_t v7; // q0
 long long v8; // x11
 int32x4_t v9; // q1
 int32x4_t v10; // q2
 int32x4_t v11; // q3
 int *v12; // x11
 long long v13; // x9
 int v14; // t1

 if ( (a2 & 0x80000000) != 0 )
 return 0;
 v2 = a2 + 1;
 if ( a2 >= 7 )
 {
 v3 = (unsigned int)v2 & 0xFFFFFFF8;
 v6 = a1 + 1;
 v7 = vdupq_n_s32(0);
 v8 = v3;
 v9 = vdupq_n_s32(0);
 do
 {
 v10 = v6[-1];
 v11 = *v6;
 v6 += 2;
 v8 -= 8;
 v7 = vaddq_s32(v10, v7);
 v9 = vaddq_s32(v11, v9);
 }
 while ( v8 );
 v4 = vaddvq_s32(vaddq_s32(v9, v7));
 if ( v3 == v2 )
 return v4;
 }
 else
 {
 v3 = 0;
 v4 = 0;
 }
 v12 = (int *)a1 + v3;
 v13 = v2 - v3;
 do
 {
 v14 = *v12++;
 --v13;
 v4 += v14;
 }
 while ( v13 );
 return v4;
}


/* Function: test_array_types @ 0xDD8 */
long long test_array_types()
{
 __int128 v0; // q0
 int v1; // w0
 unsigned long long v3[31]; // [xsp+0h] [xbp-200h] BYREF
 int v4; // [xsp+1F0h] [xbp-10h]

 puts(asc_3060);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 printf("ARR-L1-03 (array_2d_stack): %d\n", 45);
 *(unsigned long long *)&v0 = 0x100000001LL;
 *((unsigned long long *)&v0 + 1) = 0x100000001LL;
 v4 = 1;
 v3[0] = v0;
 v3[1] = v0;
 v3[2] = v0;
 v3[3] = v0;
 v3[4] = v0;
 v3[5] = v0;
 v3[6] = v0;
 v3[7] = v0;
 v3[8] = v0;
 v3[9] = v0;
 v3[10] = v0;
 v3[11] = v0;
 v3[12] = v0;
 v3[13] = v0;
 v3[14] = v0;
 v3[15] = v0;
 v3[16] = v0;
 v3[17] = v0;
 v3[18] = v0;
 v3[19] = v0;
 v3[20] = v0;
 v3[21] = v0;
 v3[22] = v0;
 v3[23] = v0;
 v3[24] = v0;
 v3[25] = v0;
 v3[26] = v0;
 v3[27] = v0;
 v3[28] = v0;
 v3[29] = v0;
 v3[30] = v0;
 v1 = array_3d((long long)v3);
 printf("ARR-L1-04 (array_3d): %d\n", v1);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 return printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0xED8 */
long long ptr_single(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0xEE4 */
long long ptr_double(unsigned int **a1)
{
 return (unsigned int)(**a1 + 5);
}


/* Function: ptr_triple @ 0xEF4 */
long long ptr_triple(unsigned int ***a1)
{
 return (unsigned int)(***a1 + 1);
}


/* Function: ptr_increment @ 0xF08 */
long long ptr_increment(int32x4_t *a1, int a2)
{
 long long v2; // x9
 long long v4; // x10
 long long result; // x0
 int32x4_t *v6; // x9
 long long v7; // x11
 int32x4_t v8; // q0
 long long v9; // x12
 int32x4_t v10; // q1
 int32x4_t *v11; // x8
 int32x4_t v12; // q2
 int32x4_t v13; // q3
 int v14; // w8
 unsigned int v15; // t1

 v2 = (unsigned int)(a2 - 1);
 if ( a2 < 1 )
 return 0;
 if ( (unsigned int)v2 < 7 )
 {
 v4 = 0;
 result = 0;
 v6 = a1;
LABEL_8:
 v14 = a2 - v4;
 do
 {
 v15 = vgetq_lane_s32(*v6, 0);
 v6 = (int32x4_t *)((char *)v6 + 4);
 --v14;
 result = v15 + (unsigned int)result;
 }
 while ( v14 );
 return result;
 }
 v7 = v2 + 1;
 v4 = (v2 + 1) & 0x1FFFFFFF8LL;
 v8 = vdupq_n_s32(0);
 v9 = v4;
 v10 = vdupq_n_s32(0);
 v6 = (int32x4_t *)((char *)a1 + 4 * v4);
 v11 = a1 + 1;
 do
 {
 v12 = v11[-1];
 v13 = *v11;
 v11 += 2;
 v9 -= 8;
 v8 = vaddq_s32(v12, v8);
 v10 = vaddq_s32(v13, v10);
 }
 while ( v9 );
 result = (unsigned int)vaddvq_s32(vaddq_s32(v10, v8));
 if ( v7 != v4 )
 goto LABEL_8;
 return result;
}


/* Function: ptr_offset @ 0xF94 */
long long ptr_offset(long long a1, int a2)
{
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: ptr_diff @ 0xF9C */
unsigned long long ptr_diff(long long a1, long long a2)
{
 return (unsigned long long)(a1 - a2) >> 2;
}


/* Function: ptr_void @ 0xFA8 */
long long ptr_void(unsigned char *a1, int a2)
{
 if ( a2 == 1 )
 return *a1;
 if ( a2 )
 return 0xFFFFFFFFLL;
 return *(unsigned int *)a1;
}


/* Function: ptr_const @ 0xFCC */
long long ptr_const(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: ptr_const_ptr @ 0xFD8 */
long long ptr_const_ptr(unsigned int *a1)
{
 long long result; // x0

 result = (unsigned int)(*a1 + 5);
 *a1 = result;
 return result;
}


/* Function: ptr_func_simple @ 0xFEC */
long long ptr_func_simple(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0xFF8 */
long long ptr_func_complex(long long ( *a1)(long long, __int128 *), long long a2)
{
 __int128 v3; // [xsp+0h] [xbp-10h] BYREF

 v3 = *(unsigned long long *)&off_13DC8;
 return a1(a2, &v3);
}


/* Function: ptr_cast @ 0x1034 */
long long ptr_cast(unsigned int *a1)
{
 return *a1;
}


/* Function: opaque_handle_create @ 0x103C */
long long opaque_handle_create(long long result)
{
 return (int)result;
}


/* Function: opaque_handle_op @ 0x1044 */
long long opaque_handle_op(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: test_pointer_types @ 0x104C */
long long test_pointer_types()
{
 puts(asc_307B);
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 printf("PTR-L2-04 (ptr_increment): %d\n", 15);
 printf("PTR-L2-05 (ptr_offset): %d\n", 30);
 printf("PTR-L2-06 (ptr_diff): %d\n", 4);
 printf("PTR-L2-07 (ptr_void): %d\n", 42);
 printf("PTR-L2-07 (ptr_void): %d\n", 65);
 printf("PTR-L2-08 (ptr_const): %d\n", 20);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", 10);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", 1);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 return printf("PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x1150 */
long long struct_simple(unsigned int *a1)
{
 return (unsigned int)(a1[1] + *a1 + a1[2]);
}


/* Function: struct_array @ 0x1164 */
long long struct_array(const float *a1, int a2)
{
 long long v2; // x10
 unsigned int v3; // w8
 const float *v5; // x11
 int32x4_t v6; // q1
 long long v7; // x8
 int32x4_t v8; // q0
 const float *v9; // x12
 long long v10; // x9
 const float *v11; // x11
 int v12; // w10
 int v13; // w12
 int v14; // w13
 float32x4x3_t v15; // 0:q2.16,16:q3.16,32:q4.16
 float32x4x3_t v16; // 0:q5.16,16:q6.16,32:q7.16

 if ( a2 < 1 )
 return 0;
 if ( (unsigned int)a2 >= 8 )
 {
 v2 = a2 & 0xFFFFFFF8;
 v5 = a1;
 v6 = vdupq_n_s32(0);
 v7 = v2;
 v8 = vdupq_n_s32(0);
 do
 {
 v9 = v5;
 v5 += 24;
 v7 -= 8;
 v15 = vld3q_f32(v9);
 v9 += 12;
 v16 = vld3q_f32(v9);
 v6 = vaddq_s32(vaddq_s32(vaddq_s32(vreinterpretq_s32_f32(v15.val[0]), v6), vreinterpretq_s32_f32(v15.val[1])), vreinterpretq_s32_f32(v15.val[2]));
 v8 = vaddq_s32(vaddq_s32(vaddq_s32(vreinterpretq_s32_f32(v16.val[0]), v8), vreinterpretq_s32_f32(v16.val[1])), vreinterpretq_s32_f32(v16.val[2]));
 }
 while ( v7 );
 v3 = vaddvq_s32(vaddq_s32(v8, v6));
 if ( v2 == a2 )
 return v3;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 }
 v10 = (unsigned int)a2 - v2;
 v11 = &a1[3 * v2 + 1];
 do
 {
 v12 = *((unsigned int *)v11 - 1);
 v13 = *(unsigned int *)v11;
 v14 = *((unsigned int *)v11 + 1);
 v11 += 3;
 --v10;
 v3 += v12 + v13 + v14;
 }
 while ( v10 );
 return v3;
}


/* Function: struct_nested @ 0x121C */
long long struct_nested(unsigned int *a1)
{
 return (unsigned int)(a1[3] + *a1);
}


/* Function: struct_deep @ 0x122C */
long long struct_deep(long long a1)
{
 return (unsigned int)(*(unsigned int *)(a1 + 20) + *(unsigned int *)(a1 + 8));
}


/* Function: struct_with_ptr @ 0x123C */
long long struct_with_ptr(long long a1)
{
 unsigned int *v1; // x9

 v1 = *(unsigned int **)(a1 + 8);
 if ( v1 )
 v1 = (unsigned int *)*v1;
 return (unsigned int)((unsigned int)v1 + *(unsigned int *)a1);
}


/* Function: struct_bitfields @ 0x1254 */
long long struct_bitfields(unsigned short *a1)
{
 return (*a1 & 1)
 + ((unsigned short)*a1 >> 6)
 + (((unsigned short)*a1 >> 1) & 3)
 + (((unsigned short)*a1 >> 3) & 7u);
}


/* Function: union_type @ 0x1274 */
long long union_type(unsigned char *a1, int a2)
{
 if ( a2 == 1 )
 return (unsigned int)(int)*(float *)a1;
 if ( a2 )
 return *a1;
 return *(unsigned int *)a1;
}


/* Function: union_array @ 0x129C */
long long union_array(int32x4_t *a1, int a2)
{
 long long v2; // x10
 unsigned int v3; // w8
 int32x4_t *v5; // x8
 int32x4_t v6; // q0
 long long v7; // x11
 int32x4_t v8; // q1
 int32x4_t v9; // q2
 int32x4_t v10; // q3
 int *v11; // x11
 long long v12; // x9
 int v13; // t1

 if ( a2 < 1 )
 return 0;
 if ( (unsigned int)a2 >= 8 )
 {
 v2 = a2 & 0xFFFFFFF8;
 v5 = a1 + 1;
 v6 = vdupq_n_s32(0);
 v7 = v2;
 v8 = vdupq_n_s32(0);
 do
 {
 v9 = v5[-1];
 v10 = *v5;
 v5 += 2;
 v7 -= 8;
 v6 = vaddq_s32(v9, v6);
 v8 = vaddq_s32(v10, v8);
 }
 while ( v7 );
 v3 = vaddvq_s32(vaddq_s32(v8, v6));
 if ( v2 == a2 )
 return v3;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 }
 v11 = (int *)a1 + v2;
 v12 = (unsigned int)a2 - v2;
 do
 {
 v13 = *v11++;
 --v12;
 v3 += v13;
 }
 while ( v12 );
 return v3;
}


/* Function: enum_type @ 0x1324 */
long long enum_type(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: enum_switch @ 0x1330 */
long long enum_switch(unsigned int a1)
{
 if ( a1 > 3 )
 return 4294967197LL;
 else
 return dword_2AA0[a1];
}


/* Function: struct_func_ptr @ 0x1350 */
long long struct_func_ptr(unsigned int *a1)
{
 return (*((long long ( **)(unsigned long long))a1 + 1))(*a1);
}


/* Function: linked_list @ 0x1360 */
long long linked_list(int *a1)
{
 unsigned int i; // w8
 int v2; // w9

 for ( i = 0; a1; i += v2 )
 {
 v2 = *a1;
 a1 = (int *)*((unsigned long long *)a1 + 1);
 }
 return i;
}


/* Function: doubly_linked_list @ 0x1380 */
long long doubly_linked_list(int *a1)
{
 unsigned int i; // w8
 int v2; // w9

 for ( i = 0; a1; i += v2 )
 {
 v2 = *a1;
 a1 = (int *)*((unsigned long long *)a1 + 1);
 }
 return i;
}


/* Function: binary_tree_sum @ 0x13A0 */
long long binary_tree_sum(int *a1)
{
 int *v1; // x19
 unsigned int v2; // w20
 int v3; // w21
 int v4; // w0

 if ( !a1 )
 return 0;
 v1 = a1;
 v2 = 0;
 do
 {
 v3 = *v1;
 v4 = binary_tree_sum((int *)*((unsigned long long *)v1 + 1));
 v1 = (int *)*((unsigned long long *)v1 + 2);
 v2 += v3 + v4;
 }
 while ( v1 );
 return v2;
}


/* Function: binary_tree @ 0x1404 */
// attributes: thunk
long long binary_tree(int *a1)
{
 return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x1408 */
long long graph_traverse(long long a1)
{
 long long v1; // x9
 long long v2; // x10
 unsigned int v3; // w8
 int *i; // x11
 int v5; // w12

 v1 = *(unsigned int *)(a1 + 80);
 if ( (int)v1 < 1 )
 {
 return 0;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 do
 {
 for ( i = *(int **)(a1 + 8 * v2); i; v3 += v5 )
 {
 v5 = *i;
 i = (int *)*((unsigned long long *)i + 1);
 }
 ++v2;
 }
 while ( v2 != v1 );
 }
 return v3;
}


/* Function: test_composite_types @ 0x1454 */
long long test_composite_types()
{
 int *v0; // x8
 int v1; // w1
 int v2; // w9
 int *v3; // x8
 int v4; // w1
 int v5; // w9
 int v6; // w0
 unsigned long long v8[2]; // [xsp+0h] [xbp-80h] BYREF
 long long v9; // [xsp+10h] [xbp-70h]
 int v10; // [xsp+20h] [xbp-60h] BYREF
 int *v11; // [xsp+28h] [xbp-58h]
 long long v12; // [xsp+30h] [xbp-50h]
 int v13; // [xsp+38h] [xbp-48h] BYREF
 long long v14; // [xsp+40h] [xbp-40h]
 int *v15; // [xsp+48h] [xbp-38h]
 int v16; // [xsp+50h] [xbp-30h] BYREF
 int *v17; // [xsp+58h] [xbp-28h]
 int v18; // [xsp+60h] [xbp-20h] BYREF
 int *v19; // [xsp+68h] [xbp-18h]
 int v20; // [xsp+70h] [xbp-10h] BYREF
 long long v21; // [xsp+78h] [xbp-8h]

 puts(asc_3096);
 printf("CMP-L2-01 (struct_simple): %d\n", 6);
 printf("CMP-L2-02 (struct_array): %d\n", 9);
 printf("CMP-L2-03 (struct_nested): %d\n", 105);
 printf("CMP-L2-04 (struct_deep): %d\n", 258);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", 30);
 printf("CMP-L2-06 (struct_bitfields): %d\n", 106);
 printf("CMP-L2-07 (union_type): %d\n", 305419896);
 printf("CMP-L2-08 (union_array): %d\n", 60);
 printf("CMP-L2-09 (enum_type): %d\n", 10);
 printf("CMP-L2-10 (enum_switch): %d\n", 50);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", 21);
 v0 = &v16;
 v1 = 0;
 v16 = 10;
 v20 = 30;
 v18 = 20;
 v17 = &v18;
 v19 = &v20;
 v21 = 0;
 do
 {
 v2 = *v0;
 v0 = (int *)*((unsigned long long *)v0 + 1);
 v1 += v2;
 }
 while ( v0 );
 printf("CMP-L2-12 (linked_list): %d\n", v1);
 v3 = &v10;
 v4 = 0;
 v10 = 10;
 v13 = 20;
 v14 = 0;
 v15 = &v10;
 v11 = &v13;
 v12 = 0;
 do
 {
 v5 = *v3;
 v3 = (int *)*((unsigned long long *)v3 + 1);
 v4 += v5;
 }
 while ( v3 );
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v4);
*(unsigned long long *)v8 = *(unsigned long long *)&xmmword_30B8;
*((unsigned long long *)v8 + 1) = *((unsigned long long *)&xmmword_30B8 + 1);
v9 = 0;
v6 = binary_tree_sum((int *)v8);
printf("CMP-L2-14 (binary_tree): %d\n", v6);
 return printf("CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: main @ 0x1604 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: __addtf3 @ 0x1630 */
static __n128 _addtf3(long double a1, long double a2)
{
 unsigned long long StatusReg; // x16
 long long v3; // x6
 unsigned long long v4; // x13
 long long v5; // x8
 long long v6; // x7
 long long v7; // x15
 int v8; // w14
 unsigned long long v9; // x3
 long long v10; // x2
 unsigned long long v11; // x9
 long long v12; // x1
 unsigned long long v13; // x11
 int v14; // w0
 unsigned long long v15; // x4
 unsigned long long v16; // x3
 unsigned long long v17; // x0
 unsigned long long v18; // x4
 int v19; // w1
 unsigned long long v20; // x3
 unsigned long long v21; // x0
 int v22; // w1
 int v23; // w7
 long long v24; // x6
 long long v25; // x0
 int v26; // w4
 long long v27; // x1
 long long v28; // x1
 long long v29; // x2
 long long v30; // x1
 unsigned long long v31; // x9
 __int128 v32; // t2
 short v33; // w2
 __n128 result; // q0
 int v35; // w0
 unsigned long long v36; // x1
 unsigned long long v37; // x3
 unsigned long long v38; // x0
 unsigned long long v39; // x7
 unsigned __int128 v40; // kr30_16
 long long v41; // x1
 __int128 v42; // t2
 long long v43; // x1
 int v44; // w0
 int v45; // w0
 unsigned long long v46; // x4
 unsigned long long v47; // x0
 bool v48; // cf
 char v49; // w1
 unsigned long long v50; // x4
 unsigned long long v51; // x0
 unsigned long long v52; // x1
 char v53; // w1
 char v54; // w1
 int v55; // w0
 unsigned long long v56; // x1
 char v57; // w1
 int v58; // w0
 unsigned long long v59; // x1
 signed __int128 v60; // kr70_16
 unsigned long long v61; // x9
 char v62; // w2
 int v63; // w0
 unsigned long long v64; // x2
 char v65; // w2
 int v66; // w0
 unsigned long long v67; // x2
 unsigned long long v68; // x2
 unsigned long long v69; // x1
 __int128 v70; // t2
 unsigned long long v71; // x2
 unsigned long long v72; // x1
 unsigned long long v73; // x9
 unsigned long long v74; // x1
 __int128 v75; // t2
 __n128 v76; // [xsp+10h] [xbp+10h]

 StatusReg = _ReadStatusReg(FPCR);
 v3 = *((unsigned long long *)&a1 + 1) >> 63;
 v4 = *(__int128 *)&a1 >> 61;
 v5 = HIWORD(*((unsigned long long *)&a1 + 1)) & 0x7FFFLL;
 v6 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v7 = *((unsigned long long *)&a1 + 1) >> 63;
 v8 = *((unsigned long long *)&a1 + 1) >> 63;
 v9 = *(__int128 *)&a2 >> 61;
 v10 = v5;
 v11 = 8LL * *(unsigned long long *)&a1;
 v12 = v6;
 v13 = 8LL * *(unsigned long long *)&a2;
 if ( *((unsigned long long *)&a1 + 1) >> 63 == *((unsigned long long *)&a2 + 1) >> 63 )
 {
 v14 = v5 - v6;
 if ( (int)v5 - (int)v6 > 0 )
 {
 if ( v6 )
 {
 v9 |= 0x8000000000000uLL;
 if ( v5 == 0x7FFF )
 {
LABEL_100:
 if ( v4 | v11 )
 {
 v31 = *(unsigned long long *)&a1 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v4 << 61);
 v41 = v4 >> 3;
 v14 = ((unsigned char)(v4 >> 50) ^ 1) & 1;
 goto LABEL_102;
 }
 goto LABEL_132;
 }
 }
 else
 {
 if ( __PAIR128__(v9, v13) == 0 )
 {
 if ( v5 != 0x7FFF )
 goto LABEL_46;
 if ( __PAIR128__(v4, v11) == 0 )
 goto LABEL_120;
 v14 = (v4 >> 50) ^ 1;
 goto LABEL_61;
 }
 if ( !--v14 )
 {
 v48 = __CFADD__(v11, v13);
 v11 += v13;
 v4 += v48 + v9;
 goto LABEL_85;
 }
 if ( v5 == 0x7FFF )
 {
 if ( __PAIR128__(v4, v11) == 0 )
 goto LABEL_132;
LABEL_60:
 v14 = ((unsigned char)(v4 >> 50) ^ 1) & 1;
 goto LABEL_61;
 }
 }
 if ( v14 > 116 )
 {
 v38 = (v9 | v13) != 0;
 }
 else if ( v14 > 63 )
 {
 v57 = 0x80 - v14;
 v58 = v14 - 64;
 v59 = v13 | (v9 << v57);
 if ( v58 )
 v13 = v59;
 v38 = (v13 != 0) | (v9 >> v58);
 }
 else
 {
 v36 = (v9 << (64 - (unsigned char)v14)) | (v13 >> v14);
 v37 = v9 >> v14;
 v38 = v36 | (v13 << (64 - (unsigned char)v14) != 0);
 v4 += v37;
 }
 v48 = __CFADD__(v38, v11);
 v11 += v38;
 if ( v48 )
 ++v4;
LABEL_85:
 if ( (v4 & 0x8000000000000LL) == 0 )
 goto LABEL_46;
 if ( ++v10 != 0x7FFF )
 {
 v26 = 0;
 v11 = v11 & 1 | (v11 >> 1) | (v4 << 63);
 v4 = (v4 & 0xFFF7FFFFFFFFFFFFLL) >> 1;
 v25 = v11 & 7;
 goto LABEL_20;
 }
 v43 = StatusReg & 0xC00000;
 if ( (StatusReg & 0xC00000) == 0 )
 goto LABEL_71;
 if ( v43 != 0x400000 || a1 < 0.0 )
 {
 if ( v43 != 0x800000 )
 goto LABEL_161;
 if ( a1 >= 0.0 )
 goto LABEL_222;
 goto LABEL_195;
 }
 goto LABEL_231;
 }
 if ( (unsigned int)v5 != (unsigned int)v6 )
 {
 if ( v5 )
 {
 v45 = v6 - v5;
 v4 |= 0x8000000000000uLL;
 }
 else
 {
 if ( __PAIR128__(v4, v11) == 0 )
 {
 if ( v6 != 0x7FFF )
 {
 v4 = *(__int128 *)&a2 >> 61;
 v11 = 8LL * *(unsigned long long *)&a2;
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 goto LABEL_46;
 }
 if ( __PAIR128__(v9, v13) == 0 )
 goto LABEL_120;
 v11 = 8LL * *(unsigned long long *)&a2;
 v4 = *(__int128 *)&a2 >> 61;
 v14 = ((unsigned char)(v9 >> 50) ^ 1) & 1;
 goto LABEL_61;
 }
 v45 = ~v14;
 if ( !v45 )
 {
 v48 = __CFADD__(v11, v13);
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v11 += v13;
 v4 += v48 + v9;
 goto LABEL_85;
 }
 }
 if ( v6 == 0x7FFF )
 {
 if ( v9 | v13 )
 {
 v31 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 v41 = v9 >> 3;
 v14 = ((unsigned char)(v9 >> 50) ^ 1) & 1;
 goto LABEL_102;
 }
 goto LABEL_132;
 }
 if ( v45 > 116 )
 {
 v47 = (v4 | v11) != 0;
 }
 else if ( v45 > 63 )
 {
 v65 = 0x80 - v45;
 v66 = v45 - 64;
 v67 = v11 | (v4 << v65);
 if ( v66 )
 v11 = v67;
 v47 = (v11 != 0) | (v4 >> v66);
 }
 else
 {
 v46 = v4 >> v45;
 v47 = (v4 << (64 - (unsigned char)v45)) | (v11 >> v45) | (v11 << (64 - (unsigned char)v45) != 0);
 v9 += v46;
 }
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v11 = v47 + v13;
 if ( __CFADD__(v47, v13) )
 v4 = v9 + 1;
 else
 v4 = v9;
 goto LABEL_85;
 }
 if ( ((v5 + 1) & 0x7FFE) != 0 )
 {
 if ( v5 != 32766 )
 {
 v10 = v5 + 1;
 v60 = __PAIR128__(v9, v11) + __PAIR128__(v4, v13);
 v26 = 0;
 v25 = ((v11 + v13) >> 1) & 7;
 v4 = (unsigned long long)((__PAIR128__(v9, v11) + __PAIR128__(v4, v13)) >> 64) >> 1;
 v11 = v60 >> 1;
 goto LABEL_20;
 }
 v43 = StatusReg & 0xC00000;
 if ( (StatusReg & 0xC00000) == 0 )
 goto LABEL_71;
 if ( v43 != 0x400000 || a1 < 0.0 )
 {
 if ( v43 != 0x800000 )
 {
LABEL_161:
 v14 = 20;
 if ( v43 != 0x400000 )
 {
LABEL_65:
 if ( v43 )
 {
 if ( v43 == 0x400000 )
 {
 if ( v7 )
 goto LABEL_68;
 }
 else if ( ((v43 == 0x800000) & (unsigned char)v7) == 0 )
 {
LABEL_68:
 v31 = -1;
 v14 |= 0x14u;
 v24 = 0x1FFFFFFFFFFFFFFFLL;
 v10 = (v10 & 0xFFFFFFFFFFFF0000ULL) | 32766ULL;
 goto LABEL_49;
 }
 }
 v3 = (unsigned char)v8;
LABEL_71:
 result.n128_u64[0] = 0;
 result.n128_u64[1] = (v3 << 63) | 0x7FFF000000000000LL;
 goto LABEL_72;
 }
 v4 = -1;
 v10 = 32766;
 v11 = -1;
 v26 = 0;
 v14 = 20;
 if ( a1 < 0.0 )
 goto LABEL_91;
 goto LABEL_89;
 }
 if ( a1 >= 0.0 )
 {
LABEL_222:
 v4 = -1;
 SET_LOWORD(v8, 0);
 v11 = -1;
 v10 = 32766;
 v14 = 20;
 goto LABEL_27;
 }
LABEL_195:
 v3 = 1;
 goto LABEL_71;
 }
LABEL_231:
 v3 = 0;
 goto LABEL_71;
 }
 if ( !v5 )
 {
 v24 = v9 | v13;
 if ( __PAIR128__(v4, v11) == 0 )
 {
 if ( __PAIR128__(v9, v13) == 0 )
 {
 v31 = 0;
 goto LABEL_49;
 }
 v4 = *(__int128 *)&a2 >> 61;
 v11 = 8LL * *(unsigned long long *)&a2;
 }
 else if ( __PAIR128__(v9, v13) != 0 )
 {
 v48 = __CFADD__(v11, v13);
 v49 = v11 + v13;
 v11 += v13;
 v4 += v48 + v9;
 if ( (v4 & 0x8000000000000LL) != 0 )
 {
 v4 &= ~0x8000000000000uLL;
 v25 = v49 & 7;
 v26 = 0;
 v10 = 1;
 goto LABEL_20;
 }
 goto LABEL_17;
 }
 goto LABEL_168;
 }
 if ( v5 == 0x7FFF )
 {
 if ( __PAIR128__(v4, v11) == 0 )
 {
 if ( v6 != 0x7FFF )
 goto LABEL_182;
 if ( __PAIR128__(v9, v13) == 0 )
 goto LABEL_132;
 }
 else
 {
 v14 = ((unsigned char)(v4 >> 50) ^ 1) & 1;
 if ( v6 != 0x7FFF )
 goto LABEL_216;
 if ( __PAIR128__(v9, v13) == 0 )
 goto LABEL_230;
 }
 }
 else
 {
 if ( v6 != 0x7FFF )
 {
 if ( __PAIR128__(v4, v11) == 0 )
 {
LABEL_182:
 v41 = v9 >> 3;
 v31 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 goto LABEL_102;
 }
LABEL_216:
 if ( v9 | v13 )
 goto LABEL_217;
LABEL_230:
 v41 = v4 >> 3;
 v31 = *(unsigned long long *)&a1 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v4 << 61);
 goto LABEL_102;
 }
 if ( __PAIR128__(v9, v13) == 0 )
 {
 if ( __PAIR128__(v4, v11) == 0 )
 goto LABEL_132;
 goto LABEL_230;
 }
 }
 if ( (v9 & 0x4000000000000LL) == 0 )
 v14 = 1;
 if ( !(v4 | v11) )
 goto LABEL_182;
LABEL_217:
 v72 = v4 >> 3;
 v73 = *(unsigned long long *)&a1 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v4 << 61);
 if ( (v4 & 0x4000000000000LL) != 0 && (v9 & 0x4000000000000LL) == 0 )
 {
 SET_LOWORD(v8, (unsigned short)(*(((unsigned long long *)&a2) + 1) >> 63));
 v73 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | (v9 << 61);
 v72 = v9 >> 3;
 }
 *((unsigned long long *)&v75 + 1) = v72;
 *(unsigned long long *)&v75 = v73;
 v74 = v75 >> 61;
 v31 = v73 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v74 << 61);
 v41 = v74 >> 3;
 goto LABEL_102;
 }
 v14 = v5 - v6;
 if ( (int)v5 - (int)v6 > 0 )
 {
 if ( v6 )
 {
 v9 |= 0x8000000000000uLL;
 goto LABEL_5;
 }
 if ( __PAIR128__(v9, v13) != 0 )
 {
 if ( !--v14 )
 {
 v4 = (__PAIR128__(v4, v11) - __PAIR128__(v9, v13)) >> 64;
 v11 -= v13;
 goto LABEL_10;
 }
LABEL_5:
 if ( v5 != 0x7FFF )
 {
 if ( v14 > 116 )
 {
 v17 = (v9 | v13) != 0;
 }
 else if ( v14 > 63 )
 {
 v54 = 0x80 - v14;
 v55 = v14 - 64;
 v56 = v13 | (v9 << v54);
 if ( v55 )
 v13 = v56;
 v17 = (v13 != 0) | (v9 >> v55);
 }
 else
 {
 v15 = (v9 << (64 - (unsigned char)v14)) | (v13 >> v14);
 v16 = v9 >> v14;
 v17 = v15 | (v13 << (64 - (unsigned char)v14) != 0);
 v4 -= v16;
 }
 v4 = (__PAIR128__(v4, v11) - v17) >> 64;
 v11 -= v17;
 goto LABEL_10;
 }
 goto LABEL_100;
 }
 if ( v5 != 0x7FFF )
 goto LABEL_46;
 if ( __PAIR128__(v4, v11) == 0 )
 {
LABEL_120:
 v31 = 0;
 v41 = 0;
 v14 = 0;
 goto LABEL_102;
 }
 goto LABEL_60;
 }
 if ( (unsigned int)v5 == (unsigned int)v6 )
 {
 if ( ((v5 + 1) & 0x7FFE) != 0 )
 {
 v18 = (__PAIR128__(v4, v11) - __PAIR128__(v9, v13)) >> 64;
 v52 = v11 - v13;
 if ( (v18 & 0x8000000000000LL) != 0 )
 {
 SET_LOWORD(v8, *((unsigned long long *)&a2 + 1) >> 63);
 v18 = (__PAIR128__(v9, v13) - __PAIR128__(v4, v11)) >> 64;
 v11 = v13 - v11;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 }
 else
 {
 v24 = v52 | v18;
 if ( __PAIR128__(v18, v52) == 0 )
 {
 v31 = 0;
 SET_LOWORD(v10, 0);
 SET_LOWORD(v8, (StatusReg & 0xC00000) == 0x800000);
 goto LABEL_49;
 }
 v11 -= v13;
 }
 goto LABEL_11;
 }
 v39 = v4 | v11;
 v24 = v9 | v13;
 if ( !v5 )
 {
 if ( __PAIR128__(v4, v11) == 0 )
 {
 if ( __PAIR128__(v9, v13) == 0 )
 goto LABEL_187;
 SET_LOWORD(v8, (unsigned short)(*(((unsigned long long *)&a2) + 1) >> 63));
 v4 = *(__int128 *)&a2 >> 61;
 v11 = 8LL * *(unsigned long long *)&a2;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 }
 else if ( __PAIR128__(v9, v13) != 0 )
 {
 v40 = __PAIR128__(v4, v11) - __PAIR128__(v9, v13);
 if ( (((__PAIR128__(v4, v11) - __PAIR128__(v9, v13)) >> 64) & 0x8000000000000LL) != 0 )
 {
 SET_LOWORD(v8, (unsigned short)(*(((unsigned long long *)&a2) + 1) >> 63));
 v4 = (__PAIR128__(v9, v13) - __PAIR128__(v4, v11)) >> 64;
 v11 = v13 - v11;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 v24 = v11 | v4;
 goto LABEL_18;
 }
 v24 = v40 | *((unsigned long long *)&v40 + 1);
 if ( v40 != 0 )
 {
 v25 = v40 & 7;
 v4 = (__PAIR128__(v4, v11) - __PAIR128__(v9, v13)) >> 64;
 v11 -= v13;
 v26 = 1;
 goto LABEL_20;
 }
LABEL_187:
 v31 = 0;
 SET_LOWORD(v8, (StatusReg & 0xC00000) == 0x800000);
 goto LABEL_49;
 }
LABEL_168:
 v28 = 0;
 v10 = 0;
 goto LABEL_169;
 }
 if ( v5 == 0x7FFF )
 {
 if ( __PAIR128__(v4, v11) == 0 )
 {
 if ( v12 != 0x7FFF )
 goto LABEL_153;
 }
 else
 {
 v14 = ((unsigned char)(v4 >> 50) ^ 1) & 1;
 if ( v12 != 0x7FFF )
 goto LABEL_149;
 }
 }
 else if ( v12 != 0x7FFF )
 {
 if ( __PAIR128__(v4, v11) != 0 )
 goto LABEL_149;
LABEL_153:
 if ( !v24 )
 {
LABEL_154:
 v31 = -1;
 v41 = 0xFFFFFFFFFFFFLL;
 SET_LOWORD(v8, 0);
 v14 = 1;
 goto LABEL_103;
 }
LABEL_213:
 v41 = v9 >> 3;
 v31 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 SET_LOWORD(v8, *((unsigned long long *)&a2 + 1) >> 63);
 goto LABEL_102;
 }
 if ( v24 )
 {
 if ( (v9 & 0x4000000000000LL) == 0 )
 v14 = 1;
 if ( v39 )
 {
 v61 = v4 << 61;
 v41 = v4 >> 3;
LABEL_205:
 v68 = *(unsigned long long *)&a1 & 0x1FFFFFFFFFFFFFFFLL | v61;
 if ( (v41 & 0x800000000000LL) != 0 && (v9 & 0x4000000000000LL) == 0 )
 {
 SET_LOWORD(v8, *((unsigned long long *)&a2 + 1) >> 63);
 v68 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 v41 = v9 >> 3;
 }
 *((unsigned long long *)&v70 + 1) = v41;
 *(unsigned long long *)&v70 = v68;
 v69 = v70 >> 61;
 v71 = v68 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v69 << 61);
 v41 = v69 >> 3;
 v31 = v71;
 goto LABEL_102;
 }
 goto LABEL_213;
 }
 if ( !v39 )
 goto LABEL_154;
LABEL_149:
 v61 = v4 << 61;
 v41 = v4 >> 3;
 if ( !v24 )
 {
 v31 = *(unsigned long long *)&a1 & 0x1FFFFFFFFFFFFFFFLL | v61;
 goto LABEL_102;
 }
 goto LABEL_205;
 }
 if ( v5 )
 {
 v35 = v6 - v5;
 v4 |= 0x8000000000000uLL;
LABEL_111:
 if ( v6 != 0x7FFF )
 {
 if ( v35 > 116 )
 {
 v51 = (v4 | v11) != 0;
 }
 else if ( v35 > 63 )
 {
 v62 = 0x80 - v35;
 v63 = v35 - 64;
 v64 = v11 | (v4 << v62);
 if ( v63 )
 v11 = v64;
 v51 = (v11 != 0) | (v4 >> v63);
 }
 else
 {
 v50 = v4 >> v35;
 v51 = (v4 << (64 - (unsigned char)v35)) | (v11 >> v35) | (v11 << (64 - (unsigned char)v35) != 0);
 v9 -= v50;
 }
 SET_LOWORD(v8, *((unsigned long long *)&a2 + 1) >> 63);
 v4 = (__PAIR128__(v9, v13) - v51) >> 64;
 v11 = v13 - v51;
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
LABEL_10:
 v18 = v4 & 0x7FFFFFFFFFFFFLL;
 if ( (v4 & 0x8000000000000LL) == 0 )
 goto LABEL_46;
LABEL_11:
 if ( v18 )
 {
 v19 = __clz(v18) - 12;
 }
 else
 {
 v44 = __clz(v11);
 v19 = v44 + 52;
 if ( v44 + 52 > 63 )
 {
 v21 = v11 << ((unsigned char)v44 - 12);
 goto LABEL_14;
 }
 }
 v20 = v18 << v19;
 v18 = v11 << v19;
 v21 = (v11 >> -(char)v19) | v20;
LABEL_14:
 if ( v19 >= v10 )
 {
 v22 = v19 - v10;
 v23 = v22 + 1;
 if ( v22 + 1 <= 63 )
 {
 v4 = v21 >> v23;
 v11 = (v21 << (63 - (unsigned char)v22))
 | (v18 >> ((unsigned char)v22 + 1))
 | (v18 << (63 - (unsigned char)v22) != 0);
LABEL_17:
 v24 = v11 | v4;
 goto LABEL_18;
 }
 v53 = v22 - 63;
 if ( v23 != 64 )
 v18 |= v21 << (0x80 - (unsigned char)v23);
 v4 = 0;
 v11 = (v18 != 0) | (v21 >> v53);
 v24 = v11;
LABEL_18:
 if ( v24 )
 goto LABEL_19;
 goto LABEL_48;
 }
 v10 -= v19;
 v4 = v21 & 0xFFF7FFFFFFFFFFFFLL;
 v11 = v18;
LABEL_46:
 v24 = v11 | v4;
 v25 = v11 & 7;
 v26 = 0;
 if ( v10 )
 goto LABEL_20;
 if ( v24 )
 {
LABEL_19:
 v25 = v11 & 7;
 v10 = 0;
 v26 = 1;
LABEL_20:
 if ( v25 )
 {
 v27 = StatusReg & 0xC00000;
 if ( (StatusReg & 0xC00000) == 0x400000 )
 {
 v14 = 16;
 if ( !v7 )
 {
LABEL_89:
 v48 = __CFADD__(v11, 8);
 v11 += 8LL;
 if ( v48 )
 ++v4;
 }
 }
 else
 {
 if ( v27 != 0x800000 )
 {
 if ( v27 )
 {
 v28 = v4 & 0x8000000000000LL;
 v14 = 16;
 if ( v26 )
 v14 = 24;
 goto LABEL_26;
 }
 v14 = 16;
 if ( (v11 & 0xF) != 4 )
 {
 v48 = __CFADD__(v11, 4);
 v11 += 4LL;
 if ( v48 )
 ++v4;
 }
 goto LABEL_91;
 }
 v14 = 16;
 if ( v7 )
 goto LABEL_89;
 }
LABEL_91:
 v28 = v4 & 0x8000000000000LL;
 if ( v26 )
 v14 |= 8u;
 goto LABEL_26;
 }
 v28 = v4 & 0x8000000000000LL;
 v14 = 0;
 if ( !v26 )
 goto LABEL_26;
LABEL_169:
 v14 = 0;
 if ( (StatusReg & 0x800) != 0 )
 v14 = 8;
LABEL_26:
 if ( v28 )
 {
LABEL_27:
 v29 = v10 + 1;
 if ( v29 != 0x7FFF )
 {
 v30 = (v4 >> 3) & 0xFFFFFFFFFFFFLL;
 *((unsigned long long *)&v32 + 1) = v4;
 *(unsigned long long *)&v32 = v11;
 v31 = v32 >> 3;
 v33 = v29 & 0x7FFF;
 goto LABEL_29;
 }
 v43 = StatusReg & 0xC00000;
 goto LABEL_65;
 }
 goto LABEL_62;
 }
LABEL_48:
 v31 = 0;
 SET_LOWORD(v10, 0);
 v14 = 0;
LABEL_49:
 v30 = v24 & 0xFFFFFFFFFFFFLL;
 v33 = v10 & 0x7FFF;
 goto LABEL_29;
 }
 if ( v9 | v13 )
 {
 v31 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 SET_LOWORD(v8, *((unsigned long long *)&a2 + 1) >> 63);
 v14 = ((unsigned char)(v9 >> 50) ^ 1) & 1;
 v41 = v9 >> 3;
 goto LABEL_102;
 }
 v3 = *((unsigned long long *)&a2 + 1) >> 63;
LABEL_132:
 result.n128_u64[0] = 0;
 result.n128_u64[1] = (v3 << 63) | 0x7FFF000000000000LL;
 return result;
 }
 if ( __PAIR128__(v4, v11) != 0 )
 {
 v35 = ~v14;
 if ( !v35 )
 {
 SET_LOWORD(v8, (unsigned short)(*(((unsigned long long *)&a2) + 1) >> 63));
 v4 = (__PAIR128__(v9, v13) - __PAIR128__(v4, v11)) >> 64;
 v11 = v13 - v11;
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 goto LABEL_10;
 }
 goto LABEL_111;
 }
 if ( v6 != 0x7FFF )
 {
 SET_LOWORD(v8, (unsigned short)(*(((unsigned long long *)&a2) + 1) >> 63));
 v4 = *(__int128 *)&a2 >> 61;
 v11 = 8LL * *(unsigned long long *)&a2;
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 goto LABEL_46;
 }
 if ( __PAIR128__(v9, v13) == 0 )
 {
 SET_LOWORD(v8, (unsigned short)(*(((unsigned long long *)&a2) + 1) >> 63));
 goto LABEL_120;
 }
 SET_LOWORD(v8, (unsigned short)(*(((unsigned long long *)&a2) + 1) >> 63));
 v11 = 8LL * *(unsigned long long *)&a2;
 v14 = ((unsigned char)(v9 >> 50) ^ 1) & 1;
 v4 = *(__int128 *)&a2 >> 61;
LABEL_61:
 v10 = 0x7FFF;
LABEL_62:
 v41 = v4 >> 3;
 *((unsigned long long *)&v42 + 1) = v4;
 *(unsigned long long *)&v42 = v11;
 v31 = v42 >> 3;
 v24 = v4 >> 3;
 if ( v10 != 0x7FFF )
 goto LABEL_49;
LABEL_102:
 if ( v41 | v31 )
 {
LABEL_103:
 v33 = 0x7FFF;
 v30 = v41 & 0x7FFFFFFFFFFFLL | 0x800000000000LL;
 goto LABEL_29;
 }
 v31 = 0;
 v33 = 0x7FFF;
 v30 = 0;
LABEL_29:
 result.n128_u64[0] = v31;
 result.n128_u64[1] = v30 & 0xFFFFFFFFFFFFLL | ((unsigned long long)(unsigned short)(v33 | ((unsigned short)v8 << 15)) << 48);
 if ( v14 )
 {
LABEL_72:
 v76 = result;
 _sfp_handle_exceptions(0);
 return v76;
 }
 return result;
}


/* Function: __multf3 @ 0x21D0 */
static __n128 _multf3(long double a1, long double a2)
{
 unsigned long long v2; // x7
 unsigned long long StatusReg; // x6
 unsigned long long v4; // x9
 long long v5; // x3
 __int128 v6; // t2
 long long v7; // x3
 unsigned long long v8; // x8
 long long v9; // x17
 long long v10; // x1
 int v11; // w0
 unsigned long long v12; // x12
 int v13; // w16
 unsigned long long v14; // x5
 long long v15; // x13
 __int128 v16; // t2
 long long v17; // x13
 int v18; // w11
 long long v19; // x10
 unsigned long long v20; // x2
 long long v21; // x3
 long long v22; // x4
 short v23; // w1
 long long v24; // x4
 __n128 result; // q0
 long long v26; // x1
 long long v27; // x30
 unsigned long long v28; // x17
 long long v29; // x1
 unsigned long long v30; // x21
 unsigned long long v31; // x3
 unsigned long long v32; // x19
 unsigned long long v33; // x20
 unsigned long long v34; // x7
 long long v35; // x5
 unsigned long long v36; // x15
 long long v37; // x16
 unsigned long long v38; // x12
 long long v39; // x18
 unsigned long long v40; // x4
 unsigned long long v41; // x8
 bool v42; // cc
 unsigned long long v43; // x12
 unsigned long long v44; // x19
 unsigned long long v45; // x30
 unsigned long long v46; // x1
 unsigned long long v47; // x17
 unsigned long long v48; // x15
 unsigned long long v49; // x9
 unsigned long long v50; // x7
 unsigned long long v51; // x5
 unsigned long long v52; // x3
 long long v53; // x16
 unsigned long long v54; // x4
 unsigned long long v55; // x4
 unsigned long long v56; // x12
 unsigned long long v57; // x1
 bool v58; // cf
 unsigned long long v59; // x1
 long long v60; // x14
 _BOOL8 v61; // x12
 unsigned long long v62; // x8
 unsigned long long v63; // x1
 unsigned long long v64; // x5
 long long v65; // x12
 bool v66; // zf
 unsigned long long v67; // x7
 unsigned long long v68; // x4
 long long v69; // x8
 unsigned long long v70; // x1
 long long v71; // x9
 unsigned long long v72; // x1
 long long v73; // x7
 bool v74; // zf
 long long v75; // x16
 unsigned long long v76; // x4
 __int128 v77; // t2
 long long v78; // x1
 long long v79; // x3
 __int128 v80; // t2
 unsigned long long v81; // x13
 long long v82; // x2
 unsigned long long v83; // x0
 long long v84; // x3
 long long v85; // x1
 unsigned long long v86; // x8
 unsigned long long v87; // x4
 long long v88; // x6
 __int128 v89; // t2
 unsigned long long v90; // x0
 unsigned long long v91; // x13
 long long v92; // x6
 __int128 v93; // t2
 long long v94; // x2
 __n128 v95; // [xsp+30h] [xbp+30h]

 v2 = *(unsigned long long *)&a2;
 StatusReg = _ReadStatusReg(FPCR);
 v4 = *((unsigned long long *)&a1 + 1) & 0xFFFFFFFFFFFFLL;
 v5 = HIWORD(*((unsigned long long *)&a1 + 1)) & 0x7FFFLL;
 if ( !(unsigned int)v5 )
 {
 v8 = *(unsigned long long *)&a1 | v4;
 if ( !(*(unsigned long long *)&a1 | v4) )
 {
 v4 = 0;
 v10 = 4;
 v7 = 0;
 v9 = 1;
 v11 = 0;
 goto LABEL_4;
 }
 if ( v4 )
 {
 v83 = __clz(v4);
 v84 = (long long)(v83 - 15);
 }
 else
 {
 v90 = __clz(*(unsigned long long *)&a1);
 v84 = v90 + 49;
 v83 = v90 + 64;
 if ( v84 > 60 )
 {
 v8 = 0;
 v4 = *(unsigned long long *)&a1 << ((unsigned char)v84 - 61);
 goto LABEL_87;
 }
 }
 v4 = (*(unsigned long long *)&a1 >> (61 - (unsigned char)v84)) | (v4 << ((unsigned char)v84 + 3));
 v8 = *(unsigned long long *)&a1 << ((unsigned char)v84 + 3);
LABEL_87:
 v10 = 0;
 v7 = -16367LL - v83;
 v9 = 0;
 v11 = 0;
 goto LABEL_4;
 }
 if ( (unsigned int)v5 == 0x7FFF )
 {
 v8 = *(unsigned long long *)&a1 | v4;
 if ( *(unsigned long long *)&a1 | v4 )
 {
 v8 = *(unsigned long long *)&a1;
 v10 = 12;
 v11 = ((unsigned char)(v4 >> 47) ^ 1) & 1;
 v7 = 0x7FFF;
 v9 = 3;
 }
 else
 {
 v4 = 0;
 v10 = 8;
 v7 = 0x7FFF;
 v9 = 2;
 v11 = 0;
 }
 }
 else
 {
 *((unsigned long long *)&v6 + 1) = *((unsigned long long *)&a1 + 1) & 0xFFFFFFFFFFFFLL;
 *(unsigned long long *)&v6 = *(unsigned long long *)&a1;
 v4 = (v6 >> 61) | 0x8000000000000LL;
 v7 = (HIWORD(a1) & 0x7FFF) - 0x3FFFLL;
 v8 = 8LL * *(unsigned long long *)&a1;
 v9 = 0;
 v10 = 0;
 v11 = 0;
 }
LABEL_4:
 v12 = *((unsigned long long *)&a2 + 1) & 0xFFFFFFFFFFFFLL;
 v13 = *((unsigned long long *)&a2 + 1) >> 63;
 v14 = *((unsigned long long *)&a2 + 1) >> 63;
 v15 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 if ( !(unsigned int)v15 )
 {
 if ( !(*(unsigned long long *)&a2 | v12) )
 {
 v17 = v7;
 v10 |= 1uLL;
 SET_LOWORD(v18, (unsigned short)((a1 < 0.0) ^ (a2 < 0.0)));
 v19 = v7 + 1;
 v20 = (a1 < 0.0) ^ (unsigned char)(a2 < 0.0);
 v12 = 0;
 v2 = 0;
 v21 = 1;
 if ( v10 <= 10 )
 goto LABEL_12;
LABEL_7:
 if ( v10 == 11 )
 {
 v18 = *((unsigned long long *)&a2 + 1) >> 63;
 v20 = *((unsigned long long *)&a2 + 1) >> 63;
LABEL_29:
 if ( v21 == 3 )
 {
 v8 = v2;
 v24 = v12 & 0x7FFFFFFFFFFFLL | 0x800000000000LL;
 v23 = 0x7FFF;
 goto LABEL_17;
 }
 goto LABEL_15;
 }
 goto LABEL_8;
 }
 if ( v12 )
 {
 v81 = __clz(v12);
 v82 = (long long)(v81 - 15);
 }
 else
 {
 v91 = __clz(*(unsigned long long *)&a2);
 v82 = v91 + 49;
 v81 = v91 + 64;
 if ( v82 > 60 )
 {
 v2 = 0;
 v12 = *(unsigned long long *)&a2 << ((unsigned char)v82 - 61);
LABEL_81:
 v17 = v7 - v81 - 16367;
 SET_LOWORD(v18, (unsigned short)((a1 < 0.0) ^ (a2 < 0.0)));
 v19 = v17 + 1;
 v20 = (a1 < 0.0) ^ (unsigned char)(a2 < 0.0);
 v21 = 0;
 if ( v10 <= 10 )
 goto LABEL_12;
 goto LABEL_7;
 }
 }
 v12 = (*(unsigned long long *)&a2 >> (61 - (unsigned char)v82)) | (v12 << ((unsigned char)v82 + 3));
 v2 = *(unsigned long long *)&a2 << ((unsigned char)v82 + 3);
 goto LABEL_81;
 }
 if ( (unsigned int)v15 == 0x7FFF )
 {
 v22 = *(unsigned long long *)&a2 | v12;
 v17 = v7 + 0x7FFF;
 if ( *(unsigned long long *)&a2 | v12 )
 {
 v10 |= 3uLL;
 v19 = v7 + 0x8000;
 SET_LOWORD(v18, (unsigned short)((a1 < 0.0) ^ (a2 < 0.0)));
 if ( (*((unsigned long long *)&a2 + 1) & 0x800000000000LL) == 0 )
 v11 = 1;
 v20 = (a1 < 0.0) ^ (unsigned char)(a2 < 0.0);
 v21 = 3;
 if ( v10 <= 10 )
 {
LABEL_22:
 v26 = 1LL << v10;
 if ( (v26 & 0x530) != 0 )
 {
 SET_LOWORD(v13, v18);
 v14 = v20;
 }
 else
 {
 if ( (v26 & 0x240) != 0 )
 {
 v11 = 1;
 SET_LOWORD(v18, 0);
 v24 = 0xFFFFFFFFFFFFLL;
 v8 = -1;
 v23 = 0x7FFF;
 goto LABEL_17;
 }
 if ( (v26 & 0x88) == 0 )
 goto LABEL_33;
 v4 = v12;
 v8 = v2;
 v9 = v21;
 }
LABEL_27:
 SET_LOWORD(v18, (unsigned short)v13);
 if ( v9 != 2 )
 {
 v12 = v4;
 v2 = v8;
 v21 = v9;
 v20 = v14;
 goto LABEL_29;
 }
LABEL_32:
 v23 = 0x7FFF;
 v24 = 0;
 v8 = 0;
 goto LABEL_17;
 }
 v22 = *((unsigned long long *)&a2 + 1) & 0xFFFFFFFFFFFFLL;
 v94 = 3;
 }
 else
 {
 v10 |= 2uLL;
 SET_LOWORD(v18, (unsigned short)((a1 < 0.0) ^ (a2 < 0.0)));
 v19 = v7 + 0x8000;
 v20 = (a1 < 0.0) ^ (unsigned char)(a2 < 0.0);
 v2 = 0;
 if ( v10 <= 10 )
 {
 v12 = 0;
 v21 = 2;
 goto LABEL_12;
 }
 v94 = 2;
 }
 if ( v10 == 15 )
 {
 if ( (v4 & 0x800000000000LL) == 0 || (v22 & 0x800000000000LL) != 0 )
 {
 v18 = *((unsigned long long *)&a1 + 1) >> 63;
 v24 = v4 & 0x7FFFFFFFFFFFLL | 0x800000000000LL;
 v23 = 0x7FFF;
 }
 else
 {
 v18 = *((unsigned long long *)&a2 + 1) >> 63;
 v24 = v22 & 0x7FFFFFFFFFFFLL | 0x800000000000LL;
 v8 = v2;
 v23 = 0x7FFF;
 }
 goto LABEL_17;
 }
 if ( v10 != 11 )
 {
LABEL_8:
 v13 = *((unsigned long long *)&a1 + 1) >> 63;
 v14 = *((unsigned long long *)&a1 + 1) >> 63;
 goto LABEL_27;
 }
 v4 = v22;
 v8 = v2;
 v9 = v94;
 goto LABEL_27;
 }
 *((unsigned long long *)&v16 + 1) = *((unsigned long long *)&a2 + 1) & 0xFFFFFFFFFFFFLL;
 *(unsigned long long *)&v16 = *(unsigned long long *)&a2;
 v17 = (HIWORD(a2) & 0x7FFF) - 0x3FFFLL + v7;
 SET_LOWORD(v18, (unsigned short)((a1 < 0.0) ^ (a2 < 0.0)));
 v12 = (v16 >> 61) | 0x8000000000000LL;
 v2 = 8LL * *(unsigned long long *)&a2;
 v19 = v17 + 1;
 v20 = (a1 < 0.0) ^ (unsigned char)(a2 < 0.0);
 v21 = 0;
 if ( v10 > 10 )
 goto LABEL_7;
LABEL_12:
 if ( v10 > 2 )
 goto LABEL_22;
 if ( (unsigned long long)(v10 - 1) <= 1 )
 {
 if ( v21 != 2 )
 {
LABEL_15:
 if ( v21 == 1 )
 {
 v23 = 0;
 v24 = 0;
 v8 = 0;
 goto LABEL_17;
 }
 goto LABEL_68;
 }
 goto LABEL_32;
 }
LABEL_33:
 v27 = (unsigned int)v2;
 v28 = HIDWORD(v8);
 v29 = (unsigned int)v12;
 v8 = (unsigned int)v8;
 v30 = HIDWORD(v2);
 v31 = HIDWORD(v12);
 v32 = v28 * (unsigned int)v2;
 v33 = HIDWORD(v4);
 v34 = v28 * (unsigned int)v12;
 v35 = (unsigned int)v4;
 v36 = (unsigned int)v8 * (unsigned long long)(unsigned int)v12;
 v37 = (unsigned int)(v27 * v8);
 v38 = v34 + HIDWORD(v12) * (unsigned int)v8;
 v39 = v28 * v30;
 v40 = v32 + v30 * v8 + ((v27 * v8) >> 32);
 v41 = v27 * (unsigned int)v4;
 v42 = v32 > v40;
 v43 = v38 + HIDWORD(v36);
 v44 = HIDWORD(v4) * v27;
 v45 = HIDWORD(v4) * v29;
 if ( v42 )
 v39 = v28 * v30 + 0x100000000LL;
 v46 = (unsigned int)v4 * v29;
 v42 = v34 > v43;
 v47 = v28 * v31;
 v48 = (unsigned int)v36 + (v43 << 32);
 v49 = v30 * v33;
 v50 = v44 + v30 * v35 + HIDWORD(v41);
 v51 = v45 + v31 * v35 + HIDWORD(v46);
 v52 = v31 * v33;
 v53 = v37 + (v40 << 32);
 v54 = v48 + HIDWORD(v40);
 if ( v42 )
 v47 += 0x100000000LL;
 v55 = v54 + v39;
 if ( v44 > v50 )
 v49 += 0x100000000LL;
 v56 = v47 + HIDWORD(v43);
 v57 = (unsigned int)v46 + (v51 << 32);
 if ( v45 > v51 )
 v52 += 0x100000000LL;
 v58 = __CFADD__(v57, v56);
 v59 = v57 + v56;
 v60 = v58;
 v61 = v55 < v48;
 v62 = (unsigned int)v41 + (v50 << 32);
 v58 = __CFADD__(v59, v61);
 v63 = v59 + v61;
 v64 = HIDWORD(v51);
 v65 = v58;
 if ( v60 )
 v66 = 0;
 else
 v66 = v65 == 0;
 v67 = v49 + HIDWORD(v50);
 if ( !v66 )
 ++v64;
 v58 = __CFADD__(v55, v62);
 v68 = v55 + v62;
 v69 = v58;
 v58 = __CFADD__(v63, v67);
 v70 = v63 + v67;
 v71 = v58;
 v58 = __CFADD__(v70, v69);
 v72 = v70 + v69;
 v73 = v58;
 if ( v71 )
 v74 = 0;
 else
 v74 = v73 == 0;
 v75 = v53 | (v68 << 13);
 if ( !v74 )
 ++v52;
 v76 = (v75 != 0) | (v68 >> 51);
 v2 = v76 | (v72 << 13);
 *((unsigned long long *)&v77 + 1) = v52 + v64;
 *(unsigned long long *)&v77 = v72;
 v12 = v77 >> 51;
 if ( ((v52 + v64) & 0x8000000000LL) != 0 )
 {
 v2 = v76 & 1 | ((v76 | (v72 << 13)) >> 1) | (v12 << 63);
 v12 >>= 1;
 }
 else
 {
 v19 = v17;
 }
LABEL_68:
 v78 = v19 + 0x3FFF;
 if ( v19 + 0x3FFF > 0 )
 {
 if ( (v2 & 7) != 0 )
 {
 v79 = StatusReg & 0xC00000;
 v11 |= 0x10u;
 if ( (StatusReg & 0xC00000) == 0x400000 )
 {
 if ( !v20 )
 goto LABEL_137;
 }
 else
 {
 if ( v79 != 0x800000 )
 {
 if ( !v79 && (v2 & 0xF) != 4 )
 {
 v58 = __CFADD__(v2, 4);
 v2 += 4LL;
 if ( v58 )
 ++v12;
 }
 goto LABEL_73;
 }
 if ( v20 )
 {
LABEL_137:
 v58 = __CFADD__(v2, 8);
 v2 += 8LL;
 if ( v58 )
 ++v12;
 }
 }
 }
LABEL_73:
 if ( (v12 & 0x10000000000000LL) != 0 )
 {
 v12 &= ~0x10000000000000uLL;
 v78 = v19 + 0x4000;
 }
 if ( v78 <= 32766 )
 {
 v24 = (v12 >> 3) & 0xFFFFFFFFFFFFLL;
 *((unsigned long long *)&v80 + 1) = v12;
 *(unsigned long long *)&v80 = v2;
 v8 = v80 >> 3;
 v23 = v78 & 0x7FFF;
 goto LABEL_17;
 }
 v8 = StatusReg & 0xC00000;
 if ( (StatusReg & 0xC00000) == 0x400000 )
 {
 v24 = 0xFFFFFFFFFFFFLL;
 if ( v20 )
 v23 = 32766;
 else
 v23 = 0x7FFF;
 if ( v20 )
 {
 v8 = -1;
 }
 else
 {
 v24 = 0;
 v8 = 0;
 }
 }
 else if ( v8 == 0x800000 )
 {
 v24 = 0xFFFFFFFFFFFFLL;
 if ( v20 )
 v23 = 0x7FFF;
 else
 v23 = 32766;
 if ( v20 )
 {
 v24 = 0;
 v8 = 0;
 }
 else
 {
 v8 = -1;
 }
 }
 else
 {
 v23 = 0x7FFF;
 v24 = 0;
 if ( v8 )
 {
 v23 = 32766;
 v24 = 0xFFFFFFFFFFFFLL;
 v8 = -1;
 }
 }
LABEL_110:
 result.n128_u64[0] = v8;
 result.n128_u64[1] = v24 & 0xFFFFFFFFFFFFLL
 | ((unsigned long long)(v23 & 0x7FFF) << 48) & 0x7FFFFFFFFFFFFFFFLL
 | ((unsigned long long)(unsigned char)v18 << 63);
 goto LABEL_111;
 }
 v85 = -16382 - v19;
 if ( -16382 - v19 > 116 )
 {
 v8 = v2 | v12;
 if ( v2 | v12 )
 {
 v92 = StatusReg & 0xC00000;
 v8 = 1 - v20;
 if ( v92 != 0x400000 )
 {
 if ( v92 == 0x800000 )
 v8 = v20;
 else
 v8 = 0;
 }
 }
 v23 = 0;
 v24 = 0;
 goto LABEL_110;
 }
 if ( v85 <= 63 )
 {
 v87 = v12 >> v85;
 v86 = (v12 << ((unsigned char)v19 + 62))
 | (v2 >> (2 - (unsigned char)v19))
 | (v2 << ((unsigned char)v19 + 62) != 0);
 if ( ((v12 << ((unsigned char)v19 + 62)) | (v2 >> (2 - (unsigned char)v19))) & 7
 | (v2 << ((unsigned char)v19 + 62) != 0) )
 {
LABEL_101:
 v88 = StatusReg & 0xC00000;
 if ( v88 == 0x400000 )
 {
 if ( v20 )
 goto LABEL_143;
 }
 else
 {
 if ( v88 != 0x800000 )
 {
 if ( v88 )
 {
 if ( (v87 & 0x8000000000000LL) == 0 )
 {
LABEL_105:
 *((unsigned long long *)&v89 + 1) = v87;
 *(unsigned long long *)&v89 = v86;
 v8 = v89 >> 3;
 v23 = 0;
 v24 = (v87 >> 3) & 0xFFFFFFFFFFFFLL;
 goto LABEL_110;
 }
LABEL_144:
 v23 = 1;
 v24 = 0;
 v8 = 0;
 goto LABEL_110;
 }
 if ( (v86 & 0xF) != 4 )
 {
 v58 = __CFADD__(v86, 4);
 v86 += 4LL;
 if ( v58 )
 ++v87;
 if ( (v87 & 0x8000000000000LL) == 0 )
 goto LABEL_105;
 goto LABEL_144;
 }
LABEL_143:
 if ( (v87 & 0x8000000000000LL) == 0 )
 goto LABEL_105;
 goto LABEL_144;
 }
 if ( !v20 )
 {
 if ( (v87 & 0x8000000000000LL) == 0 )
 goto LABEL_105;
 goto LABEL_144;
 }
 }
 v58 = __CFADD__(v86, 8);
 v86 += 8LL;
 if ( v58 )
 ++v87;
 goto LABEL_143;
 }
 if ( (v87 & 0x8000000000000LL) != 0 )
 goto LABEL_144;
 }
 else
 {
 if ( v85 != 64 )
 v2 |= v12 << ((unsigned char)v19 + 126);
 v86 = (v2 != 0) | (v12 >> (-62 - (unsigned char)v19));
 v87 = (v2 != 0) | (v12 >> (-62 - (unsigned char)v19)) & 7;
 if ( v87 )
 {
 v87 = 0;
 goto LABEL_101;
 }
 }
 v23 = 0;
 *((unsigned long long *)&v93 + 1) = v87;
 *(unsigned long long *)&v93 = v86;
 v8 = v93 >> 3;
 v24 = (v87 >> 3) & 0xFFFFFFFFFFFFLL;
 if ( (StatusReg & 0x800) != 0 )
 goto LABEL_110;
LABEL_17:
 result.n128_u64[0] = v8;
 result.n128_u64[1] = v24 & 0xFFFFFFFFFFFFLL | ((unsigned long long)(unsigned short)(v23 | ((unsigned short)v18 << 15)) << 48);
 if ( v11 )
 {
LABEL_111:
 v95 = result;
 _sfp_handle_exceptions(0);
 return v95;
 }
 return result;
}


/* Function: __sfp_handle_exceptions @ 0x29D0 */
unsigned long long _sfp_handle_exceptions(unsigned long long result)
{
 if ( (result & 1) != 0 )
 _ReadStatusReg(FPSR);
 if ( (result & 2) != 0 )
 _ReadStatusReg(FPSR);
 if ( (result & 4) != 0 )
 _ReadStatusReg(FPSR);
 if ( (result & 8) != 0 )
 _ReadStatusReg(FPSR);
 if ( (result & 0x10) != 0 )
 return _ReadStatusReg(FPSR);
 return result;
}


/* Function: .term_proc @ 0x2A40 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x140B0 */

/* FAILED to decompile: __cxa_finalize @ 0x140B8 */

/* FAILED to decompile: abort @ 0x140C0 */

/* FAILED to decompile: puts @ 0x140C8 */

/* FAILED to decompile: printf @ 0x140D0 */

/* FAILED to decompile: __gmon_start__ @ 0x140E0 */

/* Total functions decompiled: 67, failed: 6 */
