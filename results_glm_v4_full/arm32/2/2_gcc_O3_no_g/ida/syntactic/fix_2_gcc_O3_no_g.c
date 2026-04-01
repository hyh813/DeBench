/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/2/2_gcc_O3_no_g
 * Processor: arm
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* Define HIDWORD and LODWORD macros for 64-bit value manipulation */
#define HIDWORD(x) (*(unsigned int*)(&(x) + 1))
#define LODWORD(x) (*(unsigned int*)(&(x)))
#define __PAIR64__(high, low) (((unsigned long long)(high) << 32) | (unsigned int)(low))
#define __SPAIR64__(high, low) (((unsigned long long)(high) << 32) | (unsigned int)(low))
#define COERCE_FLOAT(x) ({ union { float f; int i; } _u; _u.i = (x); _u.f; })

/* Additional compiler intrinsics and macros */
#define JUMPOUT(x) do {} while(0)
#define HIBYTE(x) (((unsigned int)(x) >> 24) & 0xFF)
#define __CFSHL__(x, n) (((unsigned int)(x) << (n)) | ((unsigned int)(x) >> (32 - (n))))

/* Carry flag addition intrinsic */
static inline int __CFADD__(int a, int b)
{
    unsigned int sum = (unsigned int)a + (unsigned int)b;
    return sum < (unsigned int)a;
}

/* CRT stub function */
static inline int call_weak_fn(void)
{
    return 0;
}

/* printf_chk - use regular printf */
#define _printf_chk(flag, fmt, ...) printf(fmt, ##__VA_ARGS__)

/* Missing string literals and data */
const char *s = "Data Types Level 1 Tests";
const char *asc_124C4 = "Array Types Level 1 Tests";
const char *asc_125F0 = "Pointer Types Level 2 Tests";
const char *asc_12798 = "Composite Types Level 2 Tests";
const int CSWTCH_73[] = {50, 20, 30, 40};

/* Function: .init_proc @ 0x10394 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_103A0 @ 0x103A0 */
void sub_103A0()
{
 JUMPOUT(0);
}


/* Function: main @ 0x103FC */
int main(int argc, const char **argv, const char **envp)
{
 int v3; // r0
 int v4; // r0
 int v5; // r0

 v3 = test_data_types_l1(argc, argv, envp);
 v4 = test_array_types(v3);
 v5 = test_pointer_types(v4);
 test_composite_types(v5);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x10510 */
int process_char(int result)
{
 if ( (unsigned int)(result - 65) <= 0x19 )
 return (unsigned char)(result + 32);
 return result;
}


/* Function: process_short @ 0x10524 */
int process_short(short a1, short a2)
{
 return (short)(a1 + a2);
}


/* Function: process_int @ 0x10534 */
int process_int(int a1)
{
 return 2 * a1 + 1;
}


/* Function: process_long @ 0x10540 */
int process_long(int a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x10548 */
int process_ll(int a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x1055C */
float process_float(float a1)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x10574 */
double process_double(double a1)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x105A0 */
double process_ld(double a1)
{
 return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x105C4 */
bool process_bool(int a1)
{
 return a1 > 0 && !(a1 & 1);
}


/* Function: const_param @ 0x105D8 */
int const_param(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: volatile_access @ 0x105E4 */
int volatile_access(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: test_data_types_l1 @ 0x105F4 */
int test_data_types_l1()
{
 puts(s);
 _printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 _printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 _printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 _printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 _printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 _printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000LL);
 _printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 3.5);
 _printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 2.1);
 _printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 10.0);
 _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 _printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 return _printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x10758 */
int array_1d_stack(int a1, int a2)
{
 int result; // r0
 int v4; // r3
 int v5; // r1
 int v6; // t1

 result = 0;
 if ( a2 > 0 )
 {
 v4 = a1 - 4;
 v5 = v4 + 4 * a2;
 do
 {
 v6 = *(unsigned int *)(v4 + 4);
 v4 += 4;
 result += v6;
 }
 while ( v5 != v4 );
 }
 return result;
}


/* Function: array_string @ 0x10784 */
unsigned char * array_string(unsigned char *a1)
{
 unsigned char *v1; // r3
 unsigned char *result; // r0
 int v3; // r1

 v1 = a1;
 result = (unsigned char *)*a1;
 if ( result )
 {
 v3 = 1 - (unsigned int)v1;
 do
 result = &v1[v3];
 while ( *++v1 );
 }
 return result;
}


/* Function: array_2d_stack @ 0x107AC */
int array_2d_stack(unsigned int *a1)
{
 return *a1 + a1[11] + a1[22] + a1[33] + a1[44] + a1[55] + a1[66] + a1[77] + a1[88] + a1[99];
}


/* Function: array_3d @ 0x107FC */
int array_3d(unsigned int *a1)
{
 int v1; // r2
 int v2; // r3
 int v3; // r1
 int v4; // r2
 int v5; // r3

 v1 = a1[43];
 v2 = a1[1]
 + *a1
 + a1[2]
 + a1[3]
 + a1[4]
 + a1[5]
 + a1[6]
 + a1[7]
 + a1[8]
 + a1[9]
 + a1[10]
 + a1[11]
 + a1[12]
 + a1[13]
 + a1[14]
 + a1[15]
 + a1[16]
 + a1[17]
 + a1[18]
 + a1[19]
 + a1[20]
 + a1[21]
 + a1[22]
 + a1[23]
 + a1[24]
 + a1[25]
 + a1[26]
 + a1[27]
 + a1[28]
 + a1[29]
 + a1[30]
 + a1[31]
 + a1[32]
 + a1[33]
 + a1[34]
 + a1[35]
 + a1[36]
 + a1[37]
 + a1[38]
 + a1[39]
 + a1[40]
 + a1[41]
 + a1[42]
 + v1;
 v3 = a1[86];
 v4 = a1[87];
 v5 = v2
 + a1[44]
 + a1[45]
 + a1[46]
 + a1[47]
 + a1[48]
 + a1[49]
 + a1[50]
 + a1[51]
 + a1[52]
 + a1[53]
 + a1[54]
 + a1[55]
 + a1[56]
 + a1[57]
 + a1[58]
 + a1[59]
 + a1[60]
 + a1[61]
 + a1[62]
 + a1[63]
 + a1[64]
 + a1[65]
 + a1[66]
 + a1[67]
 + a1[68]
 + a1[69]
 + a1[70]
 + a1[71]
 + a1[72]
 + a1[73]
 + a1[74]
 + a1[75]
 + a1[76]
 + a1[77]
 + a1[78]
 + a1[79]
 + a1[80]
 + a1[81]
 + a1[82]
 + a1[83]
 + a1[84]
 + a1[85]
 + v3
 + v4;
 return v5
 + a1[88]
 + a1[89]
 + a1[90]
 + a1[91]
 + a1[92]
 + a1[93]
 + a1[94]
 + a1[95]
 + a1[96]
 + a1[97]
 + a1[98]
 + a1[99]
 + a1[100]
 + a1[101]
 + a1[102]
 + a1[103]
 + a1[104]
 + a1[105]
 + a1[106]
 + a1[107]
 + a1[108]
 + a1[109]
 + a1[110]
 + a1[111]
 + a1[112]
 + a1[113]
 + a1[114]
 + a1[115]
 + a1[116]
 + a1[117]
 + a1[118]
 + a1[119]
 + a1[120]
 + a1[121]
 + a1[122]
 + a1[123]
 + a1[124];
}


/* Function: array_vla @ 0x10BE4 */
int array_vla(int a1, int a2)
{
 bool v2; // cc
 int result; // r0
 int v5; // r1
 int v6; // r2
 int v7; // t1

 v2 = a1 <= 0;
 result = 0;
 if ( !v2 )
 {
 v5 = a2 - 4;
 v6 = v5 + 4 * a1;
 do
 {
 v7 = *(unsigned int *)(v5 + 4);
 v5 += 4;
 result += v7;
 }
 while ( v6 != v5 );
 }
 return result;
}


/* Function: array_pointer @ 0x10C0C */
int array_pointer(int a1, int a2)
{
 int v3; // r3
 int result; // r0
 int v5; // r2
 int v6; // r1

 if ( a2 <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 v5 = 10 * a2;
 do
 {
 v6 = *(unsigned int *)(a1 + 4 * v3);
 v3 += 10;
 result += v6;
 }
 while ( v5 != v3 );
 return result;
}


/* Function: pointer_array @ 0x10C48 */
unsigned int * pointer_array(int a1, int a2)
{
 unsigned int *result; // r0
 unsigned int *v4; // r2
 unsigned int *v5; // r2
 unsigned int *v6; // r2
 unsigned int *v7; // r2
 unsigned int *v8; // r2
 unsigned int *v9; // r2
 unsigned int *v10; // r2
 unsigned int *v11; // r2
 unsigned int *v12; // r3

 if ( a2 <= 0 )
 return 0;
 result = *(unsigned int **)a1;
 if ( result )
 result = (unsigned int *)*result;
 if ( a2 > 1 )
 {
 v4 = *(unsigned int **)(a1 + 4);
 if ( v4 )
 result = (unsigned int *)((char *)result + *v4);
 if ( a2 != 2 )
 {
 v5 = *(unsigned int **)(a1 + 8);
 if ( v5 )
 result = (unsigned int *)((char *)result + *v5);
 if ( a2 != 3 )
 {
 v6 = *(unsigned int **)(a1 + 12);
 if ( v6 )
 result = (unsigned int *)((char *)result + *v6);
 if ( a2 != 4 )
 {
 v7 = *(unsigned int **)(a1 + 16);
 if ( v7 )
 result = (unsigned int *)((char *)result + *v7);
 if ( a2 != 5 )
 {
 v8 = *(unsigned int **)(a1 + 20);
 if ( v8 )
 result = (unsigned int *)((char *)result + *v8);
 if ( a2 != 6 )
 {
 v9 = *(unsigned int **)(a1 + 24);
 if ( v9 )
 result = (unsigned int *)((char *)result + *v9);
 if ( a2 != 7 )
 {
 v10 = *(unsigned int **)(a1 + 28);
 if ( v10 )
 result = (unsigned int *)((char *)result + *v10);
 if ( a2 != 8 )
 {
 v11 = *(unsigned int **)(a1 + 32);
 if ( v11 )
 result = (unsigned int *)((char *)result + *v11);
 if ( a2 > 9 )
 {
 v12 = *(unsigned int **)(a1 + 36);
 if ( v12 )
 return (unsigned int *)((char *)result + *v12);
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


/* Function: array_complex_index @ 0x10D44 */
int array_complex_index(int a1, int a2, int a3, int a4, signed int a5)
{
 if ( (a4 >= a2) | ((a4 | (unsigned int)a5) >> 31) || a5 >= a3 )
 return -1;
 else
 return *(unsigned int *)(a1 + 4 * (a4 + a5 * a2));
}


/* Function: array_oob @ 0x10D80 */
int array_oob(int a1, int a2)
{
 bool v2; // nf
 int result; // r0
 int v6; // r3
 int v7; // r1
 int v8; // t1

 v2 = a2 < 0;
 result = 0;
 if ( !v2 )
 {
 v6 = a1 - 4;
 v7 = a1 + 4 * a2;
 do
 {
 v8 = *(unsigned int *)(v6 + 4);
 v6 += 4;
 result += v8;
 }
 while ( v7 != v6 );
 }
 return result;
}


/* Function: test_array_types @ 0x10DAC */
int test_array_types()
{
 int v0; // r2
 char *v1; // r3
 int v2; // t1
 int v3; // r3
 unsigned int *v4; // r2
 unsigned int v6[21]; // [sp+0h] [bp-68h] BYREF
 char v7[8]; // [sp+54h] [bp-14h] BYREF

 puts(asc_124C4);
 _printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
 v0 = 0;
 v1 = v7;
 strcpy(v7, "hello");
 do
 {
 v2 = (unsigned char)*++v1;
 ++v0;
 }
 while ( v2 );
 _printf_chk(1, "ARR-L1-02 (array_string): %d\n", v0);
 _printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", 45);
 _printf_chk(1, "ARR-L1-04 (array_3d): %d\n", 125);
 _printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 _printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 _printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 v3 = 0;
 v4 = v6;
 do
 {
 v4[1] = v3;
 ++v4;
 ++v3;
 }
 while ( v3 != 20 );
 return _printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v6[18]);
}


/* Function: ptr_single @ 0x10ED8 */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0x10EE4 */
int ptr_double(unsigned int **a1)
{
 return **a1 + 5;
}


/* Function: ptr_triple @ 0x10EF4 */
int ptr_triple(unsigned int ***a1)
{
 return ***a1 + 1;
}


/* Function: ptr_increment @ 0x10F08 */
int ptr_increment(int *a1, int a2)
{
 int v3; // r3
 int result; // r0
 int v5; // t1

 if ( a2 <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 v5 = *a1++;
 ++v3;
 result += v5;
 }
 while ( a2 != v3 );
 return result;
}


/* Function: ptr_offset @ 0x10F3C */
int ptr_offset(int a1, int a2)
{
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0x10F44 */
int ptr_diff(int a1, int a2)
{
 return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x10F50 */
int ptr_void(unsigned char *a1, int a2)
{
 if ( !a2 )
 return *(unsigned int *)a1;
 if ( a2 == 1 )
 return *a1;
 return -1;
}


/* Function: ptr_const @ 0x10F70 */
int ptr_const(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0x10F7C */
int ptr_const_ptr(int *a1)
{
 int result; // r0

 result = *a1 + 5;
 *a1 = result;
 return result;
}


/* Function: ptr_func_simple @ 0x10F90 */
int ptr_func_simple(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0x10F9C */
int ptr_func_complex(int ( *a1)(int, unsigned int *), int a2)
{
 unsigned int v3[2]; // [sp+4h] [bp-14h] BYREF

 v3[1] = 0;
 v3[0] = "test";
 return a1(a2, v3);
}


/* Function: ptr_cast @ 0x11004 */
int ptr_cast(int a1)
{
 return *(unsigned int *)a1;
}


/* Function: opaque_handle_create @ 0x1100C */
void opaque_handle_create()
{
 ;
}


/* Function: opaque_handle_op @ 0x11010 */
int opaque_handle_op(int a1)
{
 return 2 * a1;
}


/* Function: test_pointer_types @ 0x11018 */
int test_pointer_types()
{
 puts(asc_125F0);
 _printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 _printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 _printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 _printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", 15);
 _printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 _printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 _printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 _printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 _printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 _printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 _printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
 _printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
 _printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 return _printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x11148 */
int struct_simple(unsigned int *a1)
{
 return *a1 + a1[1] + a1[2];
}


/* Function: struct_array @ 0x11160 */
int struct_array(int *a1, int a2)
{
 int result; // r0
 int *v4; // r1
 int v5; // r12
 int v6; // r2
 int v7; // lr

 if ( a2 <= 0 )
 return 0;
 result = 0;
 v4 = &a1[3 * a2];
 do
 {
 v5 = a1[2];
 v6 = *a1;
 v7 = a1[1];
 a1 += 3;
 result += v6 + v7 + v5;
 }
 while ( v4 != a1 );
 return result;
}


/* Function: struct_nested @ 0x111A8 */
int struct_nested(unsigned int *a1)
{
 return *a1 + a1[3];
}


/* Function: struct_deep @ 0x111B8 */
int struct_deep(int a1)
{
 return *(unsigned int *)(a1 + 8) + *(unsigned int *)(a1 + 20);
}


/* Function: struct_with_ptr @ 0x111C8 */
int struct_with_ptr(int *a1)
{
 int result; // r0
 unsigned int *v2; // r3

 result = *a1;
 v2 = (unsigned int *)a1[1];
 if ( v2 )
 result += *v2;
 return result;
}


/* Function: struct_bitfields @ 0x111DC */
unsigned int struct_bitfields(unsigned char *a1)
{
 return (*a1 & 1)
 + ((unsigned int)((unsigned char)*a1 << 29) >> 30)
 + ((unsigned int)((unsigned char)*a1 << 26) >> 29)
 + (*(unsigned short *)a1 >> 6);
}


/* Function: union_type @ 0x11200 */
int union_type(unsigned char *a1, int a2)
{
 if ( !a2 )
 return *(unsigned int *)a1;
 if ( a2 == 1 )
 return (int)*(float *)a1;
 return *a1;
}


/* Function: union_array @ 0x11230 */
int union_array(int a1, int a2)
{
 int result; // r0
 int v4; // r3
 int v5; // r1
 int v6; // t1

 result = 0;
 if ( a2 > 0 )
 {
 v4 = a1 - 4;
 v5 = v4 + 4 * a2;
 do
 {
 v6 = *(unsigned int *)(v4 + 4);
 v4 += 4;
 result += v6;
 }
 while ( v5 != v4 );
 }
 return result;
}


/* Function: enum_type @ 0x1125C */
int enum_type(int a1)
{
 return 10 * a1;
}


/* Function: enum_switch @ 0x11268 */
int enum_switch(unsigned int a1)
{
 if ( a1 > 3 )
 return -99;
 else
 return CSWTCH_73[a1];
}


/* Function: struct_func_ptr @ 0x11280 */
int struct_func_ptr(int a1)
{
 return (*(int ( **)(unsigned int))(a1 + 4))(*(unsigned int *)a1);
}


/* Function: linked_list @ 0x11288 */
int linked_list(int *a1)
{
 int *v1; // r3
 int result; // r0
 int v3; // r2

 v1 = a1;
 if ( !a1 )
 return 0;
 result = 0;
 do
 {
 v3 = *v1;
 v1 = (int *)v1[1];
 result += v3;
 }
 while ( v1 );
 return result;
}


/* Function: doubly_linked_list @ 0x112B0 */
int doubly_linked_list(int *a1)
{
 int *v1; // r3
 int result; // r0
 int v3; // r2

 v1 = a1;
 if ( !a1 )
 return 0;
 result = 0;
 do
 {
 v3 = *v1;
 v1 = (int *)v1[1];
 result += v3;
 }
 while ( v1 );
 return result;
}


/* Function: binary_tree_sum @ 0x112D8 */
int * binary_tree_sum(int *result, int a2)
{
 unsigned int *v2; // r5
 bool v3; // zf
 int *v4; // r3
 int v5; // r2
 int v6; // r3
 int v7; // r2
 int v8; // r3
 int v9; // r2
 int v10; // r3
 int v11; // r2
 int v12; // r2
 int *v13; // r6
 int v14; // r1
 int v15; // r3
 unsigned int *v16; // r5
 int v17; // r2
 int v18; // r1
 unsigned int *v19; // r4
 int v20; // r10
 int v21; // r0
 int v22; // r8
 unsigned int *v23; // r10
 int v24; // r5
 int v25; // r2
 int *v26; // r7
 int v27; // r9
 int v28; // r0
 int v29; // r11
 int v30; // r8
 unsigned int *v31; // r2
 int v32; // r4
 int v33; // r3
 int v34; // r9
 int v35; // r1
 int v36; // r0
 int v37; // r12
 int v38; // r0
 int v39; // r2
 int v40; // r2
 int v41; // r2
 int v42; // r2
 unsigned int *v43; // [sp+0h] [bp-70h]
 int v44; // [sp+4h] [bp-6Ch]
 int v45; // [sp+8h] [bp-68h]
 int v46; // [sp+Ch] [bp-64h]
 int *v47; // [sp+10h] [bp-60h]
 int v48; // [sp+14h] [bp-5Ch]
 int *v49; // [sp+18h] [bp-58h]
 int v50; // [sp+1Ch] [bp-54h]
 int v51; // [sp+20h] [bp-50h]
 int *v52; // [sp+24h] [bp-4Ch]
 int v53; // [sp+28h] [bp-48h]
 int *v54; // [sp+2Ch] [bp-44h]
 int v55; // [sp+30h] [bp-40h]
 int v56; // [sp+34h] [bp-3Ch]
 int v57; // [sp+38h] [bp-38h]
 int v58; // [sp+3Ch] [bp-34h]
 unsigned int *v59; // [sp+40h] [bp-30h]
 int v60; // [sp+44h] [bp-2Ch]

 v4 = result;
 v3 = result == 0;
 if ( !result )
 result = 0;
 v47 = v4;
 if ( !v3 )
 {
 v46 = 0;
 do
 {
 v5 = v47[1];
 v6 = *v47;
 v48 = *v47;
 if ( v5 )
 v6 = 0;
 v49 = (int *)v47[1];
 if ( v5 )
 {
 v51 = v6;
 do
 {
 v7 = v49[1];
 v8 = *v49;
 v50 = *v49;
 if ( v7 )
 v8 = 0;
 v52 = (int *)v49[1];
 if ( v7 )
 {
 v53 = v8;
 do
 {
 v9 = v52[1];
 v10 = *v52;
 v57 = *v52;
 if ( v9 )
 v10 = 0;
 v54 = (int *)v52[1];
 if ( v9 )
 {
 v55 = v10;
 do
 {
 v11 = v54[1];
 if ( v11 )
 {
 a2 = 0;
 v2 = (unsigned int *)v54[1];
 }
 v56 = *v54;
 if ( v11 )
 {
 v12 = a2;
 do
 {
 v13 = (int *)v2[1];
 v14 = *v2;
 if ( v13 )
 {
 v15 = 0;
 v43 = v2;
 v44 = v12;
 v45 = *v2;
 do
 {
 v16 = (unsigned int *)v13[1];
 v17 = *v13;
 if ( v16 )
 {
 v18 = 0;
 do
 {
 v19 = (unsigned int *)v16[1];
 v20 = *v16;
 if ( v19 )
 {
 v21 = *v16;
 v22 = 0;
 v23 = v16;
 v24 = v17;
 v25 = v21;
 do
 {
 v26 = (int *)v19[1];
 v27 = *v19;
 if ( v26 )
 {
 v28 = v22;
 v29 = 0;
 v30 = v25;
 v31 = v19;
 v32 = v15;
 v33 = v27;
 v34 = v18;
 v35 = v28;
 do
 {
 v60 = v35;
 v59 = v31;
 v58 = v33;
 v36 = binary_tree_sum(v26[1], a2);
 v37 = *v26;
 v26 = (int *)v26[2];
 v33 = v58;
 v31 = v59;
 v35 = v60;
 v29 += v36 + v37;
 }
 while ( v26 );
 v18 = v34;
 v15 = v32;
 v19 = v59;
 v25 = v30;
 v22 = v60;
 v27 = v58 + v29;
 }
 v19 = (unsigned int *)v19[2];
 v22 += v27;
 }
 while ( v19 );
 v38 = v25;
 v17 = v24;
 v16 = v23;
 v20 = v38 + v22;
 }
 v16 = (unsigned int *)v16[2];
 v18 += v20;
 }
 while ( v16 );
 v17 += v18;
 }
 v13 = (int *)v13[2];
 v15 += v17;
 }
 while ( v13 );
 v2 = v43;
 v12 = v44;
 v14 = v45 + v15;
 }
 v2 = (unsigned int *)v2[2];
 v12 += v14;
 }
 while ( v2 );
 v56 += v12;
 }
 a2 = v56;
 v39 = v55 + v56;
 v54 = (int *)v54[2];
 v55 += v56;
 }
 while ( v54 );
 v57 += v39;
 }
 a2 = v57;
 v40 = v53 + v57;
 v52 = (int *)v52[2];
 v53 += v57;
 }
 while ( v52 );
 v50 += v40;
 }
 a2 = v50;
 v41 = v51 + v50;
 v49 = (int *)v49[2];
 v51 += v50;
 }
 while ( v49 );
 v48 += v41;
 }
 a2 = v48;
 v42 = v46 + v48;
 v47 = (int *)v47[2];
 v46 += v48;
 }
 while ( v47 );
 return (int *)v42;
 }
 return result;
}


/* Function: binary_tree @ 0x1159C */
int binary_tree(int *a1, int a2)
{
 int *v2; // r6
 int v3; // r8
 int *v4; // r4
 int v5; // r7
 int v6; // r5
 int *v7; // r0
 int v8; // r3

 v2 = a1;
 if ( !a1 )
 return 0;
 v3 = 0;
 do
 {
 v4 = (int *)v2[1];
 v5 = *v2;
 if ( v4 )
 {
 v6 = 0;
 do
 {
 v7 = binary_tree_sum((int *)v4[1], a2);
 v8 = *v4;
 v4 = (int *)v4[2];
 v6 += (int)v7 + v8;
 }
 while ( v4 );
 v5 += v6;
 }
 v2 = (int *)v2[2];
 v3 += v5;
 }
 while ( v2 );
 return v3;
}


/* Function: graph_traverse @ 0x11600 */
int graph_traverse(int a1)
{
 int v1; // r12
 int result; // r0
 int v4; // r1
 int v5; // r12
 int *i; // r3
 int *v7; // t1
 int v8; // r2

 v1 = *(unsigned int *)(a1 + 40);
 result = 0;
 if ( v1 > 0 )
 {
 v4 = a1 - 4;
 v5 = v4 + 4 * v1;
 do
 {
 v7 = *(int **)(v4 + 4);
 v4 += 4;
 for ( i = v7; i; result += v8 )
 {
 v8 = *i;
 i = (int *)i[1];
 }
 }
 while ( v4 != v5 );
 }
 return result;
}


/* Function: test_composite_types @ 0x11644 */
int test_composite_types()
{
 int v0; // r2
 int *v1; // r4
 int v2; // r3
 int *v3; // r3
 int v4; // r2
 int v5; // r1
 unsigned int v7[2]; // [sp+Ch] [bp-34h] BYREF
 unsigned int v8[2]; // [sp+14h] [bp-2Ch] BYREF
 unsigned int v9[3]; // [sp+1Ch] [bp-24h] BYREF
 unsigned int v10[3]; // [sp+28h] [bp-18h] BYREF

 puts(asc_12798);
 _printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 _printf_chk(1, "CMP-L2-02 (struct_array): %d\n", 9);
 _printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 _printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 _printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", 30);
 _printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", 106);
 _printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 _printf_chk(1, "CMP-L2-08 (union_array): %d\n", 60);
 _printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 _printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 _printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", 21);
 v0 = 10;
 v1 = v7;
 v7[1] = v8;
 v7[0] = 20;
 v8[0] = 30;
 v8[1] = 0;
 do
 {
 v2 = *v1;
 v1 = (int *)v1[1];
 v0 += v2;
 }
 while ( v1 );
 _printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v0);
 v3 = v10;
 v9[1] = v10;
 v4 = 10;
 v9[2] = 0;
 v10[1] = 0;
 v10[2] = v9;
 v9[0] = 10;
 v10[0] = 20;
 do
 {
 v5 = *v3;
 v3 = (int *)v3[1];
 v4 += v5;
 }
 while ( v3 );
 _printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v4);
 _printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", 100);
 return _printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: __muldf3 @ 0x11838 */
int _muldf3(long long a1, unsigned int a2, unsigned int a3)
{
 int v3; // r5
 unsigned int v4; // r12
 bool v5; // zf
 int v6; // r4
 int v7; // r4
 int v8; // r6
 int v9; // r1
 int v10; // r3
 bool v11; // zf
 int v12; // r3
 int v13; // r12
 unsigned int v14; // r5
 unsigned int v15; // lr
 unsigned int v16; // r2
 unsigned int v17; // lr
 unsigned long long v18; // kr10_8
 unsigned int v19; // r5
 unsigned int v20; // r6
 int v21; // r4
 unsigned int v22; // off
 unsigned int v24; // lr
 bool v25; // cc
 bool v26; // cf
 int v27; // r4
 int v28; // r4
 int v29; // r4
 char v30; // r4
 char v31; // r4
 unsigned int v32; // r3
 char v33; // r4
 unsigned int v34; // r3
 int v35; // lr
 unsigned int v36; // r3
 unsigned long long result64; // local copy for HIDWORD/LODWORD assignments

 result64 = a1;
 v4 = 2047;
 v6 = (HIDWORD(result64) >> 20) & 0x7FF;
 v5 = v6 == 0;
 if ( v6 )
 {
 v3 = (a3 >> 20) & 0x7FF;
 v5 = v3 == 0;
 }
 if ( !v5 )
 {
 v5 = v6 == 0x7FF;
 if ( v6 != 0x7FF )
 v5 = v3 == 0x7FF;
 }
 if ( v5 )
 a1 = sub_11A18();
 v7 = v6 + v3;
 v8 = HIDWORD(a1) ^ a3;
 v9 = HIDWORD(a1) & ~(v4 << 21);
 v10 = a3 & ~(v4 << 21);
 v11 = ((unsigned int)a1 | (v9 << 12)) == 0;
 if ( (unsigned int)a1 | (v9 << 12) )
 v11 = (a2 | (v10 << 12)) == 0;
 HIDWORD(a1) = v9 | 0x100000;
 v12 = v10 | 0x100000;
 if ( v11 )
 {
 LODWORD(a1) = a1 | a2;
 HIDWORD(a1) = (v8 & 0x80000000 | HIDWORD(a1)) ^ v12;
 v25 = v7 <= (int)(v4 >> 1);
 v27 = v7 - (v4 >> 1);
 if ( !v25 && (int)v4 > v27 )
 return a1;
 HIDWORD(a1) |= 0x100000u;
 v24 = 0;
 v25 = v27 <= 1;
 v21 = v27 - 1;
 }
 else
 {
 v13 = a1 * a2;
 v14 = (HIDWORD(a1) * (unsigned long long)a2 + (((unsigned int)a1 * (unsigned long long)a2) >> 32)) >> 32;
 v15 = (a1 * (unsigned long long)a2) >> 32;
 v16 = v8 & 0x80000000;
 v18 = (unsigned int)a1 * (unsigned long long)(unsigned int)v12 + __PAIR64__(v14, v15);
 v17 = v18;
 v20 = (HIDWORD(a1) * (unsigned long long)(unsigned int)v12 + HIDWORD(v18)) >> 32;
 v19 = HIDWORD(a1) * v12 + HIDWORD(v18);
 if ( v13 )
 v17 = v18 | 1;
 v21 = (__PAIR64__(v7 - 255, v20) - 0x30000000200LL) >> 32;
 if ( v20 < 0x200 )
 {
 v26 = __CFSHL__(v17, 1);
 v17 *= 2;
 v22 = v26 + v19;
 v26 = __CFADD__(v26, v19) | __CFADD__(v19, v22);
 v19 += v22;
 v20 += v26 + v20;
 }
 HIDWORD(a1) = v16 | (v20 << 11) | (v19 >> 21);
 LODWORD(a1) = (v19 << 11) | (v17 >> 21);
 v24 = v17 << 11;
 v25 = v21 <= 253;
 if ( (unsigned int)v21 > 0xFD )
 v25 = v21 - 253 <= 1792;
 if ( !v25 )
 {
 v26 = v24 >= 0x80000000;
 if ( v24 == 0x80000000 )
 v26 = a1 & 1;
 LODWORD(a1) = v26 + (unsigned int)a1;
 return a1;
 }
 }
 if ( !v25 )
 JUMPOUT(0x11A84);
 if ( v21 > -54 )
 {
 v28 = -v21;
 v25 = v28 < 32;
 v29 = v28 - 32;
 if ( v25 )
 {
 v25 = v29 <= -12;
 v30 = v29 + 12;
 if ( v25 )
 {
 v31 = v30 + 20;
 v32 = (unsigned int)a1 << (32 - v31);
 LODWORD(a1) = (((unsigned int)a1 >> v31) | (HIDWORD(a1) << (32 - v31))) + (v32 >> 31);
 if ( !(v24 | (2 * v32)) )
 LODWORD(a1) = a1 & ~(v32 >> 31);
 }
 else
 {
 v33 = 12 - v30;
 v34 = (unsigned int)a1 << v33;
 LODWORD(a1) = (((unsigned int)a1 >> (32 - v33)) | (HIDWORD(a1) << v33)) + ((unsigned int)a1 << v33 >> 31);
 if ( !(v24 | (2 * v34)) )
 LODWORD(a1) = a1 & ~(v34 >> 31);
 }
 }
 else
 {
 v35 = v24 | ((unsigned int)a1 << (32 - v29));
 v36 = ((unsigned int)a1 >> v29) | (HIDWORD(a1) << (32 - v29));
 LODWORD(a1) = ((HIDWORD(a1) >> v29) & ~((HIDWORD(a1) & 0x80000000) >> v29)) + (v36 >> 31);
 if ( !(v35 | (2 * v36)) )
 LODWORD(a1) = a1 & ~(v36 >> 31);
 }
 }
 else
 {
 LODWORD(a1) = 0;
 }
 return a1;
}


/* Function: sub_11A18 @ 0x11A18 */
int sub_11A18(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
 bool v8; // cf
 int v9; // r4
 int v10; // r12
 bool v11; // zf
 int v12; // r5
 bool v13; // zf
 bool v14; // zf

 v11 = v9 == v10;
 v12 = v10 & (a4 >> 20);
 if ( v9 != v10 )
 v11 = v12 == v10;
 if ( v11 )
 {
 v14 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 {
 v14 = (a3 | (2 * a4)) == 0;
 }
 else
 {
 result = a3;
 a2 = a4;
 }
 if ( !v14 && (v9 != v10 || !(result | (a2 << 12))) && (v12 != v10 || !(a3 | (a4 << 12))) )
 return result;
 return result;
 }
 v13 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 v13 = (a3 | (2 * a4)) == 0;
 if ( v13 )
 return result;
 if ( v9 )
 goto LABEL_24;
 while ( 1 )
 {
 v8 = __CFSHL__(result, 1);
 result *= 2;
 a2 += v8 + a2;
 if ( (a2 & 0x100000) != 0 )
 break;
 --v9;
 }
 if ( !v12 )
 {
LABEL_24:
 while ( 1 )
 {
 v8 = __CFSHL__(a3, 1);
 a3 *= 2;
 a4 += v8 + a4;
 if ( (a4 & 0x100000) != 0 )
 break;
 --v12;
 }
 }
 return result;
}


/* Function: __mulsf3 @ 0x11AA4 */
int _mulsf3(unsigned int a1, unsigned int a2, int a3, int a4)
{
 bool v4; // zf
 int v5; // r2
 int v6; // r2
 int v7; // r12
 bool v8; // zf
 unsigned int v9; // r0
 unsigned int v10; // r1
 unsigned int v11; // r3
 int v12; // kr00_4
 bool v13; // cf
 unsigned int v14; // r0
 int v15; // r2
 bool v16; // cc
 int result; // r0
 unsigned int v18; // r12
 int v19; // r0
 int v20; // r2
 int v21; // r2
 unsigned int v22; // r12
 unsigned int v23; // r12
 bool v24; // zf
 bool v25; // zf
 unsigned int v26; // r12
 bool v27; // zf
 bool v28; // zf
 bool v29; // zf

 v5 = (unsigned char)(a1 >> 23);
 v4 = v5 == 0;
 if ( (unsigned char)(a1 >> 23) )
 {
 a4 = (unsigned char)(a2 >> 23);
 v4 = a4 == 0;
 }
 if ( !v4 )
 {
 v4 = v5 == 0xFF;
 if ( v5 != 0xFF )
 v4 = a4 == 0xFF;
 }
 if ( v4 )
 {
 a4 = (unsigned char)(a2 >> 23);
 v27 = v5 == 0xFF;
 if ( v5 != 0xFF )
 v27 = a4 == 0xFF;
 if ( v27 )
 {
 v29 = a1 == 0;
 if ( a1 )
 v29 = a1 == 0x80000000;
 if ( v29 )
 a1 = a2;
 else
 v29 = a2 == 0;
 if ( !v29 )
 v29 = a2 == 0x80000000;
 if ( !v29 && (v5 != 0xFF || !(a1 << 9)) )
 {
 if ( a4 != 0xFF || !(a2 << 9) )
 {
 v14 = a1 ^ a2;
 return v14 & 0x80000000 | 0x7F800000;
 }
 a1 = a2;
 }
 return a1 | 0x7FC00000;
 }
 v28 = (a1 & 0x7FFFFFFF) == 0;
 if ( (a1 & 0x7FFFFFFF) != 0 )
 v28 = (a2 & 0x7FFFFFFF) == 0;
 if ( v28 )
 return (a1 ^ a2) & 0x80000000;
 v24 = v5 == 0;
 v23 = a1 & 0x80000000;
 while ( v24 )
 {
 a1 *= 2;
 v24 = (a1 & 0x800000) == 0;
 if ( (a1 & 0x800000) != 0 )
 break;
 --v5;
 }
 a1 |= v23;
 v25 = a4 == 0;
 v26 = a2 & 0x80000000;
 while ( v25 )
 {
 a2 *= 2;
 v25 = (a2 & 0x800000) == 0;
 if ( (a2 & 0x800000) != 0 )
 break;
 --a4;
 }
 a2 |= v26;
 }
 v6 = v5 + a4;
 v7 = a1 ^ a2;
 v9 = a1 << 9;
 v8 = v9 == 0;
 if ( v9 )
 {
 a2 <<= 9;
 v8 = a2 == 0;
 }
 if ( v8 )
 {
 v18 = v7 & 0x80000000;
 if ( !v9 )
 a2 <<= 9;
 v19 = v18 | (v9 >> 9) | (a2 >> 9);
 v16 = v6 <= 127;
 v20 = v6 - 127;
 if ( !v16 && v20 < 255 )
 return v19 | (v20 << 23);
 v14 = v19 | 0x800000;
 v11 = 0;
 v16 = v20 <= 1;
 v15 = v20 - 1;
 }
 else
 {
 v12 = ((v9 >> 5) | 0x8000000) * ((a2 >> 5) | 0x8000000);
 v10 = (((v9 >> 5) | 0x8000000) * (unsigned long long)((a2 >> 5) | 0x8000000)) >> 32;
 v11 = v12;
 v13 = v10 >= 0x800000;
 if ( v10 < 0x800000 )
 {
 v10 = __SPAIR64__(v10, v12) >> 31;
 v11 = 2 * v12;
 }
 v14 = v7 & 0x80000000 | v10;
 v15 = v6 - (!v13 + 127);
 v16 = v15 <= 253;
 if ( (unsigned int)v15 <= 0xFD )
 {
 result = (v15 << 23) + (v11 >= 0x80000000) + v14;
 if ( v11 == 0x80000000 )
 return result & 0xFFFFFFFE;
 return result;
 }
 }
 if ( !v16 )
 return v14 & 0x80000000 | 0x7F800000;
 if ( v15 <= -25 )
 return v14 & 0x80000000;
 v21 = -v15;
 v22 = v14 << (32 - v21);
 result = (((2 * v14) >> v21) & 1) + (((2 * v14) >> v21 >> 1) | (__CFSHL__(v14, 1) << 31));
 if ( !(v11 | (2 * v22)) )
 return result & ~(v22 >> 31);
 return result;
}


/* Function: __aeabi_drsub @ 0x11C3C */
double _aeabi_drsub(double a1, double a2)
{
 HIDWORD(a1) ^= 0x80000000;
 return a1 + a2;
}


/* Function: __subdf3 @ 0x11C44 */
double _subdf3(double a1, double a2)
{
 HIDWORD(a2) ^= 0x80000000;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x11EF4 */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x11D90);
 return result;
}


/* Function: __floatsidf @ 0x11F18 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x11D90);
 return result;
}


/* Function: __extendsfdf2 @ 0x11F40 */
int _extendsfdf2(int a1, int a2, int a3, unsigned int a4)
{
 bool v4; // zf
 int v5; // r2
 int result; // r0

 v5 = 2 * a1;
 v4 = 2 * a1 == 0;
 result = a1 << 29;
 if ( v4 || (a4 = v5 & 0xFF000000, (v5 & 0xFF000000) == 0) || a4 == 0xFF000000 )
 {
 if ( (v5 & 0xFFFFFF) != 0 && a4 != 0xFF000000 )
 JUMPOUT(0x11D90);
 }
 return result;
}


/* Function: __floatundidf @ 0x11F88 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11FB8);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __aeabi_frsub @ 0x11FFC */
float _aeabi_frsub(int a1, float a2)
{
 return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x12004 */
float _subsf3(float a1, int a2)
{
 return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}



/* CRT stub function __aeabi_fadd removed by preprocessor */



/* Function: __floatunsisf @ 0x12198 */
void _floatunsisf()
{
 JUMPOUT(0x121A8);
}


/* Function: __floatsisf @ 0x121A0 */
int _floatsisf(int result)
{
 if ( result < 0 )
 result = -result;
 if ( result )
 JUMPOUT(0x12200);
 return result;
}


/* Function: __floatundisf @ 0x121C0 */
int _floatundisf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x121E8);
 return a1;
}



/* CRT stub function __floatdisf removed by preprocessor */



/* Function: __fixsfsi @ 0x1224C */
unsigned int _fixsfsi(int a1)
{
 unsigned int v1; // r2
 bool v2; // cf
 int v3; // r2
 bool v4; // zf
 unsigned int result; // r0

 v1 = 2 * a1;
 if ( (unsigned int)(2 * a1) < 0x7F000000 )
 return 0;
 v2 = HIBYTE(v1) <= 0x9Eu;
 v3 = 158 - HIBYTE(v1);
 if ( v3 != 0 && v2 )
 {
 v4 = a1 >= 0;
 result = ((a1 << 8) | 0x80000000) >> v3;
 if ( !v4 )
 return -result;
 }
 else if ( v3 == -97 && a1 << 9 )
 {
 return 0;
 }
 else
 {
 result = a1 & 0x80000000;
 if ( !result )
 return 0x7FFFFFFF;
 }
 return result;
}


/* Function: .term_proc @ 0x122A8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x2303C */

/* FAILED to decompile: __imp___printf_chk @ 0x23040 */

/* FAILED to decompile: __imp_abort @ 0x23044 */

/* FAILED to decompile: __imp___libc_start_main @ 0x23048 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x2304C */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23050 */

/* Total functions decompiled: 83, failed: 6 */
