/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/2/2_gcc_Os_no_g
 * Processor: arm
 */

/* Type definitions for GCC internal types */
typedef union {
    unsigned long long n128_u64[2];
    __int128 n128_i128;
} __n128;

/* Integer type for holding pointers */
#include <stdint.h>

/* Boolean type for decompiler */
typedef unsigned char _BOOL8;

/* ARM64 system register constant */
#define FPCR 25

/* Helper macros */
#define HIWORD(x) (((unsigned int)(x) >> 16) & 0xFFFF)
#define __PAIR128__(high, low) (((__int128)(high) << 64) | (unsigned long long)(low))
#define __OFSUB__(x, y) 0

/* ARM64 system register access */
static inline unsigned long long _ReadStatusReg(unsigned int reg)
{
    unsigned long long val;
    switch (reg) {
        case 25: // FPCR
            __asm__ volatile("mrs %0, fpcr" : "=r"(val));
            break;
        case 29: // FPSR
            __asm__ volatile("mrs %0, fpsr" : "=r"(val));
            break;
        default:
            val = 0;
            break;
    }
    return val;
}

#define FPSR 29

/* Stack canary global variable */
unsigned long long _stack_chk_guard;

/* Function declaration */
long long call_weak_fn(void)
{
    return 0;
}

/* JUMPOUT macro for decompiler */
#define JUMPOUT(x) __builtin_unreachable()

/* Forward declarations */
struct tree_node {
    int val;
    struct tree_node *left;
    struct tree_node *right;
};
long long test_data_types_l1(int argc, const char **argv, const char **envp);
void *test_array_types(void);
void *test_pointer_types(void);
void *test_composite_types(void);
unsigned long long _sfp_handle_exceptions(unsigned long long result);

/* String constants */
static const char asc_2B24[] = "=== Testing Data Types ===";
static const char asc_2C8F[] = "=== Testing Array Types ===";
static const char asc_2DAB[] = "=== Testing Pointer Types ===";
static const char asc_2F44[] = "=== Testing Composite Types ===";

/* Global data variables */
static unsigned long long xmmword_3140[2] = {0, 0};
static unsigned long long xmmword_3150[2] = {0x4000800000000000ULL, 0};
static unsigned long long qword_3160[4] = {0, 0, 0, 0};

/* Standard library functions */
#include <stdio.h>
#include <string.h>
extern int puts(const char *s);

/* Helper macros for decompiler */
#define LODWORD(x) (*(_DWORD*)&(x))
#define HIDWORD(x) (*((_DWORD*)&(x) + 1))
#define _DWORD unsigned int
#define DWORD2(x) (*((_DWORD*)&(x) + 2))
#define LOWORD(x) (*((_WORD*)&(x)))
#define _WORD unsigned short
#define LOBYTE(x) (*((_BYTE*)&(x)))
#define _BYTE unsigned char
#define __CFADD__(x, y) (((x) + (y)) < (x))
#define __clz(x) __builtin_clz(x)

/* Function: .init_proc @ 0x6B8 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_6D0 @ 0x6D0 */
void sub_6D0()
{
 JUMPOUT(0);
}


/* Function: main @ 0x780 */
int main(int argc, const char **argv, const char **envp)
{
 long long v3; // x0
 void *v4; // x0
 void *v5; // x0

 v3 = test_data_types_l1(argc, argv, envp);
 v4 = test_array_types();
 v5 = test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x8D4 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: process_int @ 0x8DC */
long long process_int(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: complex_callback @ 0x8E8 */
bool complex_callback(unsigned int *a1, unsigned long long *a2)
{
 *a1 += 10;
 return *a2 != 0;
}


/* Function: process_char @ 0x904 */
long long process_char(long long result)
{
 result = (unsigned char)result;
 if ( (unsigned char)(result - 65) <= 0x19u )
 return (unsigned char)(result + 32);
 return result;
}


/* Function: process_short @ 0x924 */
long long process_short(short a1, short a2)
{
 return (unsigned int)(a2 + a1);
}


/* Function: process_long @ 0x930 */
long long process_long(long long a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x938 */
long long process_ll(long long a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x940 */
float process_float(float a1)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x950 */
double process_double(double a1)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x964 */
long double process_ld(long double a1)
{
 return a1 * a1 + *(long double *)&xmmword_3140;
}


/* Function: process_bool @ 0x98C */
bool process_bool(int a1)
{
 return a1 > 0 && (a1 & 1) == 0;
}


/* Function: const_param @ 0x9A0 */
long long const_param(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: volatile_access @ 0x9AC */
long long volatile_access(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: test_data_types_l1 @ 0x9BC */
long long test_data_types_l1(int argc, const char **argv, const char **envp)
{
 puts(asc_2B24);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 3.5);
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 2.1);
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", *(long double *)&xmmword_3150);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 return __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0xB0C */
long long array_1d_stack(long long a1, int a2)
{
 long long v3; // x2
 long long result; // x0
 int v5; // w4

 v3 = 0;
 result = 0;
 while ( a2 > (int)v3 )
 {
 v5 = *(unsigned int *)(a1 + 4 * v3++);
 result = (unsigned int)(result + v5);
 }
 return result;
}


/* Function: array_string @ 0xB34 */
long long array_string(long long a1)
{
 long long v1; // x2
 long long v2; // x1
 long long result; // x0

 v1 = a1 - 1;
 v2 = 0;
 do
 result = (unsigned int)v2++;
 while ( *(unsigned char *)(v1 + v2) );
 return result;
}


/* Function: array_2d_stack @ 0xB50 */
unsigned long long array_2d_stack(unsigned long long result)
{
 int *v1; // x1
 int *v2; // x2
 int v3; // t1

 v1 = (int *)result;
 v2 = (int *)(result + 440);
 LODWORD(result) = 0;
 do
 {
 v3 = *v1;
 v1 += 11;
 result = (unsigned int)(result + v3);
 }
 while ( v1 != v2 );
 return result;
}


/* Function: array_3d @ 0xB70 */
unsigned long long array_3d(unsigned long long result)
{
 int *v1; // x1
 int *v2; // x3
 int *v3; // x2
 int v4; // w4

 v1 = (int *)result;
 v2 = (int *)(result + 500);
 LODWORD(result) = 0;
 do
 {
 v3 = v1 + 25;
 do
 {
 v4 = *v1;
 v1 += 5;
 result = (unsigned int)(result + v4 + *(v1 - 4) + *(v1 - 3) + *(v1 - 2) + *(v1 - 1));
 }
 while ( v1 != v3 );
 }
 while ( v2 != v1 );
 return result;
}


/* Function: array_vla @ 0xBC0 */
long long array_vla(int a1, long long a2)
{
 long long v3; // x2
 long long result; // x0
 int v5; // w4

 v3 = 0;
 result = 0;
 while ( a1 > (int)v3 )
 {
 v5 = *(unsigned int *)(a2 + 4 * v3++);
 result = (unsigned int)(result + v5);
 }
 return result;
}


/* Function: array_pointer @ 0xBE8 */
long long array_pointer(long long a1, int a2)
{
 long long v3; // x2
 long long result; // x0
 long long v5; // x5

 v3 = 0;
 result = 0;
 while ( a2 > (int)v3 )
 {
 v5 = 40 * v3++;
 result = (unsigned int)(result + *(unsigned int *)(a1 + v5));
 }
 return result;
}


/* Function: pointer_array @ 0xC18 */
long long pointer_array(long long a1, int a2)
{
 long long v3; // x2
 long long result; // x0
 unsigned int *v5; // x4

 v3 = 0;
 if ( a2 > 10 )
 a2 = 10;
 result = 0;
 while ( a2 > (int)v3 )
 {
 v5 = *(unsigned int **)(a1 + 8 * v3);
 if ( v5 )
 result = (unsigned int)(result + *v5);
 ++v3;
 }
 return result;
}


/* Function: array_complex_index @ 0xC54 */
long long array_complex_index(long long a1, int a2, int a3, int a4, int a5)
{
 bool v5; // nf
 bool v6; // vf

 if ( (a4 | a5) >= 0 )
 {
 v6 = __OFSUB__(a4, a2);
 v5 = a4 - a2 < 0;
 }
 else
 {
 v6 = 0;
 v5 = 0;
 }
 if ( v5 != v6 && a5 < a3 )
 return *(unsigned int *)(a1 + 4LL * (a4 + a2 * a5));
 else
 return 0xFFFFFFFFLL;
}


/* Function: array_oob @ 0xC80 */
long long array_oob(long long a1, int a2)
{
 long long v3; // x2
 long long result; // x0
 int v5; // w4

 v3 = 0;
 result = 0;
 while ( a2 >= (int)v3 )
 {
 v5 = *(unsigned int *)(a1 + 4 * v3++);
 result = (unsigned int)(result + v5);
 }
 return result;
}


/* Function: test_array_types @ 0xCA8 */
void *test_array_types()
{
 int v0; // w0
 int v1; // w0
 unsigned char *v2; // x3
 int i; // w2
 long long j; // x1
 int v5; // w4
 int v6; // w0
 unsigned char *v7; // x3
 int v8; // w5
 unsigned int *v9; // x1
 int v10; // w4
 int v11; // w0
 int v12; // w0
 int v13; // w0
 int v14; // w0
 long long k; // x0
 int v17; // [xsp+3Ch] [xbp+3Ch] BYREF
 int v18; // [xsp+40h] [xbp+40h] BYREF
 int v19; // [xsp+44h] [xbp+44h] BYREF
 long long v20; // [xsp+48h] [xbp+48h] BYREF
 int v21; // [xsp+50h] [xbp+50h]
 unsigned long long v22[3]; // [xsp+58h] [xbp+58h] BYREF
 int v23; // [xsp+68h] [xbp+68h]
 unsigned long long v24[3]; // [xsp+70h] [xbp+70h] BYREF
 __int128 v25; // [xsp+88h] [xbp+88h]
 __int128 v26; // [xsp+98h] [xbp+98h]
 __int128 v27; // [xsp+A8h] [xbp+A8h]
 long long v28; // [xsp+B8h] [xbp+B8h]
 unsigned int v29[20]; // [xsp+C0h] [xbp+C0h]
 unsigned int v30[50]; // [xsp+110h] [xbp+110h] BYREF
 unsigned char v31[400]; // [xsp+1D8h] [xbp+1D8h] BYREF
 unsigned char v32[504]; // [xsp+368h] [xbp+368h] BYREF
 char v33[8]; // [xsp+560h] [xbp+560h] BYREF

 puts(asc_2C8F);
 v22[0] = 0x200000001LL;
 v22[1] = 0x400000003LL;
 v23 = 5;
 v0 = array_1d_stack((long long)v22, 5);
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v0);
 strcpy(v33, "hello");
 v1 = array_string((long long)v33);
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v1);
 v2 = v31;
 for ( i = 0; i != 10; ++i )
 {
 for ( j = 0; j != 10; ++j )
 {
 if ( i == (unsigned int)j )
 v5 = j;
 else
 v5 = 0;
 *(unsigned int *)&v2[4 * j] = v5;
 }
 v2 += 40;
 }
 v6 = array_2d_stack((unsigned long long)v31);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v6);
 v7 = v32;
 v8 = 5;
 do
 {
 v9 = (unsigned int *)v7;
 v10 = 5;
 do
 {
 *v9 = 1;
 v9[1] = 1;
 --v10;
 v9[2] = 1;
 v9[3] = 1;
 v9 += 5;
 *(v9 - 1) = 1;
 }
 while ( v10 );
 v7 += 100;
 --v8;
 }
 while ( v8 );
 v11 = array_3d((unsigned long long)v32);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v11);
 v20 = 0x140000000ALL;
 v21 = 30;
 v12 = array_vla(3, (long long)&v20);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", v12);
 v30[0] = 0;
 v30[10] = 10;
 v30[20] = 20;
 v30[30] = 30;
 v30[40] = 40;
 v13 = array_pointer((long long)v30, 5);
__printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", v13);
v28 = 0;
v17 = 10;
v18 = 20;
v19 = 30;
v25 = 0u;
v26 = 0u;
v27 = 0u;
v24[0] = (unsigned long long)(uintptr_t)&v17;
v24[1] = (unsigned long long)(uintptr_t)&v18;
v24[2] = (unsigned long long)(uintptr_t)&v19;
 v14 = pointer_array((long long)v24, 3);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v14);
 for ( k = 0; k != 20; ++k )
 v29[k] = k;
 __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v29[17]);
 return &_stack_chk_guard;
}


/* Function: ptr_single @ 0xF14 */
long long ptr_single(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0xF20 */
long long ptr_double(unsigned int **a1)
{
 return (unsigned int)(**a1 + 5);
}


/* Function: ptr_triple @ 0xF30 */
long long ptr_triple(unsigned int ***a1)
{
 return (unsigned int)(***a1 + 1);
}


/* Function: ptr_increment @ 0xF44 */
long long ptr_increment(long long a1, int a2)
{
 long long v3; // x2
 long long result; // x0
 int v5; // w4

 v3 = 0;
 result = 0;
 while ( a2 > (int)v3 )
 {
 v5 = *(unsigned int *)(a1 + 4 * v3++);
 result = (unsigned int)(result + v5);
 }
 return result;
}


/* Function: ptr_offset @ 0xF6C */
long long ptr_offset(long long a1, int a2)
{
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: ptr_diff @ 0xF74 */
long long ptr_diff(long long a1, long long a2)
{
 return (unsigned int)((unsigned long long)(a1 - a2) >> 2);
}


/* Function: ptr_void @ 0xF80 */
long long ptr_void(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *(unsigned char *)a1;
 return 0xFFFFFFFFLL;
}


/* Function: ptr_const @ 0xFA4 */
long long ptr_const(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: ptr_const_ptr @ 0xFB0 */
long long ptr_const_ptr(unsigned int *a1)
{
 long long result; // x0

 result = (unsigned int)(*a1 + 5);
 *a1 = result;
 return result;
}


/* Function: ptr_func_simple @ 0xFC4 */
long long ptr_func_simple(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0xFD0 */
long long ptr_func_complex(long long ( *a1)(long long, unsigned long long *), long long a2)
{
 unsigned long long v3[2]; // [xsp+18h] [xbp+18h] BYREF

 v3[0] = (unsigned long long)(uintptr_t)"test";
 v3[1] = 0;
 return a1(a2, v3);
}


/* Function: ptr_cast @ 0x1030 */
long long ptr_cast(unsigned int *a1)
{
 return *a1;
}


/* Function: opaque_handle_create @ 0x1038 */
long long opaque_handle_create(long long result)
{
 return (int)result;
}


/* Function: opaque_handle_op @ 0x1040 */
long long opaque_handle_op(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: test_pointer_types @ 0x1048 */
void *test_pointer_types()
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v5; // [xsp+28h] [xbp+28h] BYREF
 int v6; // [xsp+2Ch] [xbp+2Ch] BYREF
 int *v7; // [xsp+30h] [xbp+30h] BYREF
 int **v8; // [xsp+38h] [xbp+38h] BYREF
 unsigned long long v9[2]; // [xsp+40h] [xbp+40h] BYREF
 int v10; // [xsp+50h] [xbp+50h]

 puts(asc_2DAB);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 v5 = 5;
 v7 = &v5;
 v8 = &v7;
 v0 = ptr_triple((unsigned int ***)&v8);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", v0);
 v9[0] = 0x200000001LL;
 v9[1] = 0x400000003LL;
 v10 = 5;
 v1 = ptr_increment((long long)v9, 5);
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v1);
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 v2 = ptr_func_simple((long long ( *)(unsigned long long))double_value, 5u);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", v2);
 v6 = 5;
 v3 = ptr_func_complex((long long ( *)(long long, unsigned long long *))complex_callback, (long long)&v6);
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", v3);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
 return &_stack_chk_guard;
}


/* Function: struct_simple @ 0x1224 */
long long struct_simple(unsigned int *a1)
{
 return (unsigned int)(*a1 + a1[1] + a1[2]);
}


/* Function: struct_array @ 0x1238 */
long long struct_array(int *a1, int a2)
{
 int v3; // w4
 long long result; // x0
 int v5; // w3
 int v6; // w5

 v3 = 0;
 result = 0;
 while ( v3 < a2 )
 {
 v5 = *a1;
 v6 = a1[1];
 ++v3;
 a1 += 3;
 result = (unsigned int)(result + v5 + v6 + *(a1 - 1));
 }
 return result;
}


/* Function: struct_nested @ 0x1270 */
long long struct_nested(unsigned int *a1)
{
 return (unsigned int)(*a1 + a1[3]);
}


/* Function: struct_deep @ 0x1280 */
long long struct_deep(long long a1)
{
 return (unsigned int)(*(unsigned int *)(a1 + 8) + *(unsigned int *)(a1 + 20));
}


/* Function: struct_with_ptr @ 0x1290 */
long long struct_with_ptr(int *a1)
{
 int *v1; // x1
 int v2; // w2
 int v3; // w0

 v1 = (int *)*((unsigned long long *)a1 + 1);
 v2 = *a1;
 if ( v1 )
 v3 = *v1;
 else
 v3 = 0;
 return (unsigned int)(v2 + v3);
}


/* Function: struct_bitfields @ 0x12B0 */
long long struct_bitfields(unsigned int *a1)
{
 return (*a1 & 1) + ((*a1 >> 1) & 3) + ((*a1 >> 3) & 7) + (unsigned int)((unsigned short)*a1 >> 6);
}


/* Function: union_type @ 0x12D4 */
long long union_type(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return (unsigned int)(int)*(float *)a1;
 return *(unsigned char *)a1;
}


/* Function: union_array @ 0x12FC */
long long union_array(long long a1, int a2)
{
 long long v3; // x2
 long long result; // x0
 int v5; // w4

 v3 = 0;
 result = 0;
 while ( a2 > (int)v3 )
 {
 v5 = *(unsigned int *)(a1 + 4 * v3++);
 result = (unsigned int)(result + v5);
 }
 return result;
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
 return (unsigned int)*((char *)&qword_3160 + a1 + 20);
}


/* Function: struct_func_ptr @ 0x1354 */
long long struct_func_ptr(unsigned int *a1)
{
 return (*((long long ( **)(unsigned long long))a1 + 1))(*a1);
}


/* Function: linked_list @ 0x1364 */
long long linked_list(int *a1)
{
 long long result; // x0
 int v3; // w2

 result = 0;
 while ( a1 )
 {
 v3 = *a1;
 a1 = (int *)*((unsigned long long *)a1 + 1);
 result = (unsigned int)(result + v3);
 }
 return result;
}


/* Function: doubly_linked_list @ 0x1384 */
long long doubly_linked_list(int *a1)
{
 long long result; // x0
 int v3; // w2

 result = 0;
 while ( a1 )
 {
 v3 = *a1;
 a1 = (int *)*((unsigned long long *)a1 + 1);
 result = (unsigned int)(result + v3);
 }
 return result;
}


/* Function: binary_tree_sum @ 0x13A4 */
long long binary_tree_sum(struct tree_node *a1)
{
 unsigned int v2; // w20
 int v3; // w0
 int v4; // w1

 v2 = 0;
 while ( a1 )
 {
 v3 = binary_tree_sum(a1->left);
 v4 = a1->val;
 a1 = a1->right;
 v2 += v3 + v4;
 }
 return v2;
}


/* Function: binary_tree @ 0x13E8 */
// attributes: thunk
long long binary_tree(struct tree_node *a1)
{
 return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x13EC */
long long graph_traverse(long long a1)
{
 long long v2; // x1
 long long result; // x0
 int *v4; // x3
 int v5; // w5

 v2 = 0;
 result = 0;
 while ( *(unsigned int *)(a1 + 80) > (int)v2 )
 {
 v4 = *(int **)(a1 + 8 * v2);
 while ( v4 )
 {
 v5 = *v4;
 v4 = (int *)*((unsigned long long *)v4 + 1);
 result = (unsigned int)(result + v5);
 }
 ++v2;
 }
 return result;
}


/* Function: test_composite_types @ 0x1428 */
void *test_composite_types(void)
{
 int v0; // w0
 int v1; // w0
 int v2; // w0
 int v3; // w0
 int v4; // w0
 int v5; // w0
 int v6; // w0
 int v7; // w0
 int v8; // w0
 unsigned int v9; // w6
 unsigned long long v11; // [xsp+38h] [xbp+38h] BYREF
 int v12; // [xsp+40h] [xbp+40h] BYREF
 long long v13; // [xsp+48h] [xbp+48h]
 int v14; // [xsp+50h] [xbp+50h] BYREF
 int *v15; // [xsp+58h] [xbp+58h]
 unsigned int v16; // [xsp+60h] [xbp+60h] BYREF
 long long ( *v17)(int); // [xsp+68h] [xbp+68h]
 int v18; // [xsp+70h] [xbp+70h] BYREF
 long long v19; // [xsp+78h] [xbp+78h]
 int v20; // [xsp+80h] [xbp+80h] BYREF
 long long v21; // [xsp+88h] [xbp+88h]
 long long v22; // [xsp+90h] [xbp+90h]
 long long v23; // [xsp+98h] [xbp+98h] BYREF
 int v24; // [xsp+A0h] [xbp+A0h]
 unsigned long long v25[3]; // [xsp+A8h] [xbp+A8h] BYREF
 int v26; // [xsp+C0h] [xbp+C0h] BYREF
 int *v27; // [xsp+C8h] [xbp+C8h]
 int v28; // [xsp+D0h] [xbp+D0h] BYREF
 int *v29; // [xsp+D8h] [xbp+D8h]
 int v30; // [xsp+E0h] [xbp+E0h] BYREF
 long long v31; // [xsp+E8h] [xbp+E8h]
 int v32; // [xsp+F0h] [xbp+F0h] BYREF
 int *v33; // [xsp+F8h] [xbp+F8h]
 long long v34; // [xsp+100h] [xbp+100h]
 int v35; // [xsp+108h] [xbp+108h] BYREF
 long long v36; // [xsp+110h] [xbp+110h]
 int *v37; // [xsp+118h] [xbp+118h]
 int *v38; // [xsp+120h] [xbp+120h] BYREF
 __int128 v39; // [xsp+128h] [xbp+128h]
 __int128 v40; // [xsp+138h] [xbp+138h]
 __int128 v41; // [xsp+148h] [xbp+148h]
 __int128 v42; // [xsp+158h] [xbp+158h]
 __int128 v43; // [xsp+168h] [xbp+168h]

 puts(asc_2F44);
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 v25[0] = 0x100000001LL;
 v25[1] = 0x200000001LL;
 v25[2] = 0x200000002LL;
 v0 = struct_array((int *)v25, 2);
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", v0);
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 v12 = 20;
 v13 = 0;
 v14 = 10;
 v15 = &v12;
 v1 = struct_with_ptr(&v14);
 __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", v1);
 v11 = v11 & 0xFFF00000FFFF0000LL | 0x191D;
 v2 = struct_bitfields((unsigned int *)&v11);
 __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", v2);
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 v23 = 0x140000000ALL;
 v24 = 30;
 v3 = union_array((long long)&v23, 3);
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", v3);
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 v16 = 10;
 v17 = process_int;
 v4 = struct_func_ptr(&v16);
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", v4);
 v27 = &v28;
 v29 = &v30;
 v26 = 10;
 v28 = 20;
 v30 = 30;
 v31 = 0;
 v5 = linked_list(&v26);
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v5);
 v32 = 10;
 v33 = &v35;
 v34 = 0;
 v35 = 20;
 v36 = 0;
 v37 = &v32;
 v6 = doubly_linked_list(&v32);
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v6);
 {
 struct tree_node node = {100, NULL, NULL};
 v7 = binary_tree_sum(&node);
 }
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v7);
 v19 = 0;
 v18 = 1;
 v39 = 0u;
 v40 = 0u;
 v41 = 0u;
 v42 = 0u;
 v43 = 0u;
 v38 = &v18;
 DWORD2(v43) = 2;
 v8 = graph_traverse((long long)&v38);
 __printf_chk(v9, "CMP-L2-15 (graph_traverse): %d\n", v8);
 return &_stack_chk_guard;
}


/* Function: __addtf3 @ 0x16F0 */
__n128 _addtf3(long double a1, long double a2)
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
 LOWORD(v10) = 32766;
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
 LOWORD(v8) = 0;
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
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
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
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
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
 LOWORD(v10) = 0;
 LOWORD(v8) = (StatusReg & 0xC00000) == 0x800000;
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
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 v4 = *(__int128 *)&a2 >> 61;
 v11 = 8LL * *(unsigned long long *)&a2;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 }
 else if ( __PAIR128__(v9, v13) != 0 )
 {
 v40 = __PAIR128__(v4, v11) - __PAIR128__(v9, v13);
 if ( (((__PAIR128__(v4, v11) - __PAIR128__(v9, v13)) >> 64) & 0x8000000000000LL) != 0 )
 {
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
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
 LOWORD(v8) = (StatusReg & 0xC00000) == 0x800000;
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
 LOWORD(v8) = 0;
 v14 = 1;
 goto LABEL_103;
 }
LABEL_213:
 v41 = v9 >> 3;
 v31 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
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
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
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
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
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
 LOWORD(v10) = 0;
 v14 = 0;
LABEL_49:
 v30 = v24 & 0xFFFFFFFFFFFFLL;
 v33 = v10 & 0x7FFF;
 goto LABEL_29;
 }
 if ( v9 | v13 )
 {
 v31 = *(unsigned long long *)&a2 & 0x1FFFFFFFFFFFFFFFLL | ((unsigned long long)(unsigned char)v9 << 61);
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
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
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
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
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 v4 = *(__int128 *)&a2 >> 61;
 v11 = 8LL * *(unsigned long long *)&a2;
 v10 = HIWORD(*((unsigned long long *)&a2 + 1)) & 0x7FFFLL;
 v7 = *((unsigned long long *)&a2 + 1) >> 63;
 goto LABEL_46;
 }
 if ( __PAIR128__(v9, v13) == 0 )
 {
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
 goto LABEL_120;
 }
 LOWORD(v8) = *((unsigned long long *)&a2 + 1) >> 63;
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


/* Function: __multf3 @ 0x2290 */
__n128 _multf3(long double a1, long double a2)
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
 unsigned char v61; // x12
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
 LOBYTE(v84) = v83 - 15;
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
 LOWORD(v18) = (a1 < 0.0) ^ (a2 < 0.0);
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
 LOBYTE(v82) = v81 - 15;
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
 LOWORD(v18) = (a1 < 0.0) ^ (a2 < 0.0);
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
 LOWORD(v18) = (a1 < 0.0) ^ (a2 < 0.0);
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
 LOWORD(v13) = v18;
 v14 = v20;
 }
 else
 {
 if ( (v26 & 0x240) != 0 )
 {
 v11 = 1;
 LOWORD(v18) = 0;
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
 LOWORD(v18) = v13;
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
 LOWORD(v18) = (a1 < 0.0) ^ (a2 < 0.0);
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
 LOWORD(v18) = (a1 < 0.0) ^ (a2 < 0.0);
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


/* Function: __sfp_handle_exceptions @ 0x2A90 */
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


/* Function: .term_proc @ 0x2B00 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x14080 */

/* FAILED to decompile: __cxa_finalize @ 0x14088 */

/* FAILED to decompile: __printf_chk @ 0x14090 */

/* FAILED to decompile: __stack_chk_fail @ 0x14098 */

/* FAILED to decompile: abort @ 0x140A8 */

/* FAILED to decompile: puts @ 0x140B0 */

/* FAILED to decompile: __gmon_start__ @ 0x140C0 */

/* Total functions decompiled: 69, failed: 7 */
