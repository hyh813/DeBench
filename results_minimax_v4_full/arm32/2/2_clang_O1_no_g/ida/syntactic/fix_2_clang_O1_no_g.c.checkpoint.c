/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/2/2_clang_O1_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* Compiler intrinsics definitions */
#define HIDWORD(x) ((unsigned int)((x) >> 32))
#define LODWORD(x) ((unsigned int)(x))
#define __PAIR64__(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned long long)(lo))
#define __CFSHL__(x, n) (((x) >> (32 - (n))) & ((n) == 0 ? 0 : ((1U << (n)) - 1)))
#define __CFADD__(x, y) ((((x) + (y)) >> 32) & 1)
#define __SPAIR64__(hi, lo) (((long long)(hi) << 32) | (unsigned long long)(lo))

/* Weak function stub */
int call_weak_fn(void) { return 0; }

/* String constants */
const char asc_24C3[] = "Data Types Test";
const char asc_24E4[] = "Array Types Test";
const char asc_24FF[] = "Pointer Types Test";
const char asc_251A[] = "Composite Types Test";

/* Global data variables */
unsigned int dword_0 = 0;
unsigned int dword_2568[4] = {10, 20, 30, 50};
unsigned int dword_64 = 100;

/* Function: .init_proc @ 0x3EC */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_3F8 @ 0x3F8 */
void sub_3F8()
{
  // JUMPOUT(0); - was assembly jump, replacing with return
  return;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x5C8 */
int process_char(int result)
{
 if ( (unsigned char)(result - 65) < 0x1Au )
 result = (unsigned char)(result + 32);
 return (unsigned char)result;
}


/* Function: process_short @ 0x5E0 */
int process_short(short a1, short a2)
{
 return (short)(a2 + a1);
}


/* Function: process_int @ 0x5F0 */
int process_int(int a1)
{
 return (2 * a1) | 1;
}


/* Function: process_long @ 0x5FC */
int process_long(int a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x604 */
long long process_ll(long long a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x61C */
float process_float(float a1)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x638 */
double process_double(double a1)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x668 */
double process_ld(double a1)
{
 return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x690 */
bool process_bool(int a1)
{
 return a1 > 0 && (a1 & 1) == 0;
}


/* Function: const_param @ 0x6B0 */
int const_param(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: volatile_access @ 0x6BC */
int volatile_access(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: test_data_types_l1 @ 0x6CC */
int test_data_types_l1()
{
 puts(asc_24C3);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000LL);
 printf("DT-L1-06 (process_float): %.2f\n", 3.5);
 printf("DT-L1-07 (process_double): %.2f\n", 2.1);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 10.0);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 return printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x82C */
int array_1d_stack(int *a1, int a2)
{
 int result; // r0
 int v4; // t1

 if ( a2 < 1 )
 return 0;
 result = 0;
 do
 {
 v4 = *a1++;
 result += v4;
 --a2;
 }
 while ( a2 );
 return result;
}


/* Function: array_string @ 0x858 */
int array_string(int a1)
{
 int v1; // r1

 v1 = 0;
 while ( *(unsigned char *)(a1 + v1++) )
 ;
 return v1 - 1;
}


/* Function: array_2d_stack @ 0x874 */
int array_2d_stack(int a1)
{
 int v1; // r2
 int v2; // r1

 v1 = 0;
 v2 = 0;
 do
 {
 v2 += *(unsigned int *)(a1 + v1);
 v1 += 44;
 }
 while ( v1 != 440 );
 return v2;
}


/* Function: array_3d @ 0x898 */
int array_3d(int a1)
{
 int v1; // r12
 int v2; // r1
 int v3; // r3
 int i; // lr
 int j; // r2

 v1 = 0;
 v2 = 0;
 do
 {
 v3 = a1;
 for ( i = 0; i != 5; ++i )
 {
 for ( j = 0; j != -5; --j )
 v2 += *(unsigned int *)(v3 - 4 * j);
 v3 += 20;
 }
 a1 += 100;
 ++v1;
 }
 while ( v1 != 5 );
 return v2;
}


/* Function: array_vla @ 0x8F0 */
int array_vla(int a1, int *a2)
{
 int v2; // r2
 int result; // r0
 int v4; // t1

 if ( a1 < 1 )
 return 0;
 v2 = a1;
 result = 0;
 do
 {
 v4 = *a2++;
 result += v4;
 --v2;
 }
 while ( v2 );
 return result;
}


/* Function: array_pointer @ 0x91C */
int array_pointer(int *a1, int a2)
{
 int result; // r0
 int v4; // t1

 if ( a2 < 1 )
 return 0;
 result = 0;
 do
 {
 v4 = *a1;
 a1 += 10;
 result += v4;
 --a2;
 }
 while ( a2 );
 return result;
}


/* Function: pointer_array @ 0x948 */
int pointer_array(unsigned int **a1, int a2)
{
 int v2; // r2

 if ( a2 < 1 )
 return 0;
 if ( a2 >= 10 )
 a2 = 10;
 if ( a2 <= 1 )
 a2 = 1;
 v2 = 0;
 do
 {
 if ( *a1 )
 v2 += **a1;
 ++a1;
 --a2;
 }
 while ( a2 );
 return v2;
}


/* Function: array_complex_index @ 0x994 */
int array_complex_index(int a1, int a2, int a3, int a4, int a5)
{
 int result; // r0
 bool v7; // cc

 result = -1;
 if ( a4 >= 0 )
 {
 v7 = a5 < a3;
 if ( a5 < a3 )
 v7 = a4 < a2;
 if ( v7 && a5 >= 0 )
 return *(unsigned int *)(a1 + 4 * (a4 + a5 * a2));
 }
 return result;
}


/* Function: array_oob @ 0x9D4 */
int array_oob(int *a1, int a2)
{
 int v2; // r2
 int v3; // r1
 int v4; // t1

 if ( a2 < 0 )
 return 0;
 v2 = a2 + 1;
 v3 = 0;
 do
 {
 v4 = *a1++;
 v3 += v4;
 --v2;
 }
 while ( v2 );
 return v3;
}


/* Function: test_array_types @ 0xA08 */
int test_array_types()
{
 int v0; // r0
 unsigned char *v1; // r1
 int i; // r2
 int v3; // r3
 int v4; // r0
 int v5; // r1
 int v6; // r12
 unsigned char *v7; // lr
 unsigned char *v8; // r3
 int j; // r0
 int k; // r1
 int v11; // r12
 unsigned char *v12; // lr
 int v13; // r1
 unsigned char *v14; // r3
 int m; // r0
 int n; // r2
 int ii; // r1
 int v18; // r2
 int v19; // r1
 int v20; // r0
 int v21; // r1
 unsigned int *v22; // r3
 int jj; // r0
 unsigned int v25[20]; // [sp+0h] [bp-4E0h]
 unsigned int v26[10]; // [sp+50h] [bp-490h] BYREF
 int v27; // [sp+78h] [bp-468h] BYREF
 int v28; // [sp+7Ch] [bp-464h] BYREF
 unsigned int v29[51]; // [sp+80h] [bp-460h] BYREF
 unsigned char v30[500]; // [sp+14Ch] [bp-394h] BYREF
 unsigned char v31[416]; // [sp+340h] [bp-1A0h] BYREF

 puts(asc_24E4);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 v0 = 0;
 v1 = v31;
 do
 {
 for ( i = 0; i != 10; ++i )
 {
 v3 = 0;
 if ( v0 == i )
 v3 = v0;
 *(unsigned int *)&v1[4 * i] = v3;
 }
 v1 += 40;
 ++v0;
 }
 while ( v0 != 10 );
 v4 = 0;
 v5 = 0;
 do
 {
 v5 += *(unsigned int *)&v31[v4];
 v4 += 44;
 }
 while ( v4 != 440 );
 printf("ARR-L1-03 (array_2d_stack): %d\n", v5);
 v6 = 0;
 v7 = v30;
 do
 {
 v8 = v7;
 for ( j = 0; j != 5; ++j )
 {
 for ( k = 0; k != -5; --k )
 *(unsigned int *)&v8[-4 * k] = 1;
 v8 += 20;
 }
 v7 += 100;
 ++v6;
 }
 while ( v6 != 5 );
 v11 = 0;
 v12 = v30;
 v13 = 0;
 do
 {
 v14 = v12;
 for ( m = 0; m != 5; ++m )
 {
 for ( n = 0; n != -5; --n )
 v13 += *(unsigned int *)&v14[-4 * n];
 v14 += 20;
 }
 v12 += 100;
 ++v11;
 }
 while ( v11 != 5 );
 printf("ARR-L1-04 (array_3d): %d\n", v13);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 for ( ii = 0; ii != 50; ii += 10 )
 v29[ii + 1] = ii;
 v18 = 0;
 v19 = 0;
 do
 {
 v19 += v29[v18 + 1];
 v18 += 10;
 }
 while ( v18 != 50 );
 printf("ARR-L2-02 (array_pointer): %d\n", v19);
 v29[0] = 10;
 v28 = 20;
 v27 = 30;
 v20 = 0;
 memset(&v26[3], 0, 28);
 v26[2] = &v27;
 v26[1] = &v28;
 v26[0] = v29;
 v21 = 0;
 do
 {
 v22 = (unsigned int *)v26[v20];
 if ( v22 )
 v21 += *v22;
 ++v20;
 }
 while ( v20 != 3 );
 printf("ARR-L2-03 (pointer_array): %d\n", v21);
 for ( jj = 0; jj != 20; ++jj )
 v25[jj] = jj;
 return printf("ARR-L2-04 (array_complex_index): %d\n", v25[17]);
}


/* Function: ptr_single @ 0xC68 */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0xC74 */
int ptr_double(unsigned int **a1)
{
 return **a1 + 5;
}


/* Function: ptr_triple @ 0xC84 */
int ptr_triple(unsigned int ***a1)
{
 return ***a1 + 1;
}


/* Function: ptr_increment @ 0xC98 */
int ptr_increment(int *a1, int a2)
{
 int result; // r0
 int v4; // t1

 if ( a2 < 1 )
 return 0;
 result = 0;
 do
 {
 v4 = *a1++;
 result += v4;
 --a2;
 }
 while ( a2 );
 return result;
}


/* Function: ptr_offset @ 0xCC4 */
int ptr_offset(int a1, int a2)
{
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0xCCC */
int ptr_diff(int a1, int a2)
{
 return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0xCD8 */
int ptr_void(unsigned char *a1, int a2)
{
 int result; // r0

 if ( a2 == 1 )
 return *a1;
 result = -1;
 if ( !a2 )
 return *(unsigned int *)a1;
 return result;
}


/* Function: ptr_const @ 0xD00 */
int ptr_const(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0xD0C */
int ptr_const_ptr(int *a1)
{
 int v1; // r1

 v1 = *a1 + 5;
 *a1 = v1;
 return v1;
}


/* Function: ptr_func_simple @ 0xD20 */
int ptr_func_simple(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0xD3C */
int ptr_func_complex(int ( *a1)(int, unsigned int *), int a2)
{
 unsigned int v3[4]; // [sp+0h] [bp-10h] BYREF

 v3[0] = (unsigned int)"test";
 v3[1] = (unsigned int)&dword_0;
 return a1(a2, v3);
}


/* Function: ptr_cast @ 0xD8C */
int ptr_cast(int a1)
{
 return *(unsigned int *)a1;
}


/* Function: opaque_handle_create @ 0xD94 */
void opaque_handle_create()
{
 ;
}


/* Function: opaque_handle_op @ 0xD98 */
int opaque_handle_op(int a1)
{
 return 2 * a1;
}


/* Function: test_pointer_types @ 0xDA0 */
int test_pointer_types()
{
 int v0; // r2
 int v1; // r1
 unsigned int v3[9]; // [sp+4h] [bp-24h]

 puts(asc_24FF);
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 v3[0] = 1;
 v3[1] = 2;
 v3[2] = 3;
 v3[3] = 4;
 v3[4] = 5;
 v0 = 0;
 v1 = 0;
 do
 {
 v1 += v3[-v0];
 --v0;
 }
 while ( v0 != -5 );
 printf("PTR-L2-04 (ptr_increment): %d\n", v1);
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


/* Function: struct_simple @ 0xF10 */
int struct_simple(unsigned int *a1)
{
 return a1[1] + *a1 + a1[2];
}


/* Function: struct_array @ 0xF24 */
int struct_array(int a1, int a2)
{
 unsigned int *v2; // r2
 int result; // r0

 if ( a2 < 1 )
 return 0;
 v2 = (unsigned int *)(a1 + 4);
 result = 0;
 do
 {
 result += *(v2 - 1) + *v2 + v2[1];
 v2 += 3;
 --a2;
 }
 while ( a2 );
 return result;
}


/* Function: struct_nested @ 0xF6C */
int struct_nested(unsigned int *a1)
{
 return a1[3] + *a1;
}


/* Function: struct_deep @ 0xF7C */
int struct_deep(int a1)
{
 return *(unsigned int *)(a1 + 20) + *(unsigned int *)(a1 + 8);
}


/* Function: struct_with_ptr @ 0xF8C */
int struct_with_ptr(int *a1)
{
 int v1; // r1
 int *v2; // r0
 int v3; // r0

 v1 = *a1;
 v2 = (int *)a1[1];
 if ( v2 )
 v3 = *v2;
 else
 v3 = 0;
 return v3 + v1;
}


/* Function: struct_bitfields @ 0xFA8 */
int struct_bitfields(unsigned short *a1)
{
 return (*a1 & 1)
 + ((unsigned short)*a1 >> 6)
 + (((unsigned short)*a1 >> 1) & 3)
 + (((unsigned short)*a1 >> 3) & 7);
}


/* Function: union_type @ 0xFD0 */
float union_type(unsigned char *a1, int a2)
{
 float result; // r0

 if ( a2 == 1 )
 {
 result = *(float *)a1;
 }
 else if ( a2 )
 {
 result = (float)*a1;
 }
 else
 {
 return *(float *)a1;
 }
 return result;
}


/* Function: union_array @ 0x1000 */
int union_array(int *a1, int a2)
{
 int result; // r0
 int v4; // t1

 if ( a2 < 1 )
 return 0;
 result = 0;
 do
 {
 v4 = *a1++;
 result += v4;
 --a2;
 }
 while ( a2 );
 return result;
}


/* Function: enum_type @ 0x102C */
int enum_type(int a1)
{
 return 10 * a1;
}


/* Function: enum_switch @ 0x1038 */
int enum_switch(unsigned int a1)
{
 int result; // r0

 result = -99;
 if ( a1 <= 3 )
 return dword_2568[a1];
 return result;
}


/* Function: struct_func_ptr @ 0x1058 */
int struct_func_ptr(int a1)
{
 return (*(int ( **)(unsigned int))(a1 + 4))(*(unsigned int *)a1);
}


/* Function: linked_list @ 0x1074 */
int linked_list(int *a1)
{
 int result; // r0
 int *v2; // r1
 int v3; // r2

 if ( !a1 )
 return 0;
 v2 = a1;
 result = 0;
 do
 {
 v3 = *v2;
 v2 = (int *)v2[1];
 result += v3;
 }
 while ( v2 );
 return result;
}


/* Function: doubly_linked_list @ 0x10A0 */
int doubly_linked_list(int *a1)
{
 int result; // r0
 int *v2; // r1
 int v3; // r2

 if ( !a1 )
 return 0;
 v2 = a1;
 result = 0;
 do
 {
 v3 = *v2;
 v2 = (int *)v2[1];
 result += v3;
 }
 while ( v2 );
 return result;
}


/* Function: binary_tree_sum @ 0x10CC */
int binary_tree_sum(int *a1)
{
 int v3; // r5
 int v4; // r5

 if ( !a1 )
 return 0;
 v3 = *a1;
 v4 = binary_tree_sum(a1[1]) + v3;
 return v4 + binary_tree_sum(a1[2]);
}


/* Function: binary_tree @ 0x1104 */
int binary_tree(int *a1)
{
 return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x1114 */
int graph_traverse(int a1)
{
 int v1; // r12
 int v2; // lr
 int v3; // r1
 int *i; // r2
 int v5; // r3

 v1 = *(unsigned int *)(a1 + 40);
 if ( v1 < 1 )
 return 0;
 v2 = 0;
 v3 = 0;
 do
 {
 for ( i = *(int **)(a1 + 4 * v2); i; v3 += v5 )
 {
 v5 = *i;
 i = (int *)i[1];
 }
 ++v2;
 }
 while ( v2 != v1 );
 return v3;
}


/* Function: test_composite_types @ 0x1170 */
int test_composite_types()
{
 int v0; // r1
 int *v1; // r0
 int v2; // r2
 int *v3; // r0
 int v4; // r1
 int v5; // r2
 int v6; // r0
 int v7; // r5
 int v8; // r1
 int *i; // r0
 int v10; // r2
 unsigned int s[11]; // [sp+4h] [bp-84h] BYREF
 unsigned int v13[3]; // [sp+30h] [bp-58h] BYREF
 int v14[3]; // [sp+3Ch] [bp-4Ch] BYREF
 unsigned int v15[3]; // [sp+48h] [bp-40h] BYREF
 unsigned int v16[3]; // [sp+54h] [bp-34h] BYREF
 unsigned int v17[2]; // [sp+60h] [bp-28h] BYREF
 unsigned int v18[2]; // [sp+68h] [bp-20h] BYREF
 unsigned int v19[6]; // [sp+70h] [bp-18h] BYREF

 puts(asc_251A);
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
 v0 = 0;
 v19[1] = 0;
 v19[0] = 30;
 v1 = v17;
 v18[1] = v19;
 v18[0] = 20;
 v17[1] = v18;
 v17[0] = 10;
 do
 {
 v2 = *v1;
 v1 = (int *)v1[1];
 v0 += v2;
 }
 while ( v1 );
 printf("CMP-L2-12 (linked_list): %d\n", v0);
 v3 = v15;
 v16[2] = v15;
 v4 = 0;
 v16[1] = 0;
 v16[0] = 20;
 v15[2] = 0;
 v15[1] = v16;
 v15[0] = 10;
 do
 {
 v5 = *v3;
 v3 = (int *)v3[1];
 v4 += v5;
 }
 while ( v3 );
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v4);
 v14[2] = 0;
 v14[1] = 0;
 v14[0] = (int)&dword_64;
 v6 = binary_tree_sum(v14);
 printf("CMP-L2-14 (binary_tree): %d\n", v6);
 v13[1] = 0;
 v13[0] = 1;
 v7 = 0;
 memset(s, 0, sizeof(s));
 s[10] = 2;
 s[0] = v13;
 v8 = 0;
 do
 {
 for ( i = (int *)s[v7]; i; v8 += v10 )
 {
 v10 = *i;
 i = (int *)i[1];
 }
 ++v7;
 }
 while ( v7 != 2 );
 return printf("CMP-L2-15 (graph_traverse): %d\n", v8);
}


/* Function: main @ 0x1408 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


int _muldf3(long long a1, unsigned int a2, unsigned int a3)
{
 unsigned int lo_a1; // low 32 bits of a1
 unsigned int hi_a1; // high 32 bits of a1
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

 lo_a1 = (unsigned int)a1;
 hi_a1 = (unsigned int)(a1 >> 32);

 v4 = 2047;
 v6 = (hi_a1 >> 20) & 0x7FF;
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
 a1 = sub_1608();
 v7 = v6 + v3;
 v8 = hi_a1 ^ a3;
 v9 = hi_a1 & ~(v4 << 21);
 v10 = a3 & ~(v4 << 21);
 v11 = lo_a1 | (v9 << 12) == 0;
 if ( lo_a1 | (v9 << 12) )
 v11 = a2 | (v10 << 12) == 0;
 lo_a1 = (unsigned int)a1;
 hi_a1 = v9 | 0x100000;
 v12 = v10 | 0x100000;
 if ( v11 )
 {
 lo_a1 = (unsigned int)a1;
 lo_a1 |= a2;
 hi_a1 = (hi_a1 & 0xFFFFFFFF) ^ v12;
 v25 = v7 <= (int)(v4 >> 1);
 v27 = v7 - (v4 >> 1);
 if ( !v25 && (int)v4 > v27 )
 {
  a1 = ((unsigned long long)hi_a1 << 32) | lo_a1;
  return a1;
 }
 a1 = (a1 & 0xFFFFFFFFULL) | ((unsigned long long)(0x100000u | (unsigned int)(a1 >> 32)) << 32);
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
 hi_a1 = v16 | (v20 << 11) | (v19 >> 21);
 lo_a1 = (v19 << 11) | (v17 >> 21);
 v24 = v17 << 11;
 v25 = v21 <= 253;
 if ( (unsigned int)v21 > 0xFD )
 v25 = v21 - 253 <= 1792;
 if ( !v25 )
 {
 v26 = v24 >= 0x80000000;
 if ( v24 == 0x80000000 )
 v26 = a1 & 1;
 lo_a1 = v26 + (unsigned int)a1;
 a1 = ((unsigned long long)hi_a1 << 32) | lo_a1;
 return a1;
 }
 }
 if ( !v25 )
 {
   // unreachable - was JUMPOUT(0x1674)
 }
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
 lo_a1 = (((unsigned int)a1 >> v31) | (hi_a1 << (32 - v31))) + (v32 >> 31);
 if ( !(v24 | (2 * v32)) )
 lo_a1 = (unsigned int)a1 & ~(v32 >> 31);
}
else
{
 v33 = 12 - v30;
 v34 = (unsigned int)a1 << v33;
 lo_a1 = (((unsigned int)a1 >> (32 - v33)) | (hi_a1 << v33)) + ((unsigned int)a1 << v33 >> 31);
 if ( !(v24 | (2 * v34)) )
 lo_a1 = (unsigned int)a1 & ~(v34 >> 31);
 }
 }
 else
 {
 v35 = v24 | ((unsigned int)a1 << (32 - v29));
 v36 = ((unsigned int)a1 >> v29) | (hi_a1 << (32 - v29));
 lo_a1 = ((hi_a1 >> v29) & ~((hi_a1 & 0x80000000) >> v29)) + (v36 >> 31);
 if ( !(v35 | (2 * v36)) )
 lo_a1 = a1 & ~(v36 >> 31);
 }
 }
 else
 {
 lo_a1 = 0;
 hi_a1 = 0;
 }
 a1 = ((unsigned long long)hi_a1 << 32) | lo_a1;
 return a1;
}


/* Function: sub_1608 @ 0x1608 */
int sub_1608(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
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
 {
   return result;
 }
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


/* Function: __mulsf3 @ 0x1694 */
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


/* Function: __aeabi_drsub @ 0x182C */
double _aeabi_drsub(double a1, double a2)
{
 unsigned int hi = HIDWORD((unsigned long long)a1) ^ 0x80000000;
 return (double)(unsigned long long)__PAIR64__(hi, LODWORD(a1));
}


/* Function: __subdf3 @ 0x1834 */
double _subdf3(double a1, double a2)
{
 unsigned int hi = HIDWORD((unsigned long long)a2) ^ 0x80000000;
 return (double)(((unsigned long long)hi << 32) | (unsigned long long)(unsigned int)a2);
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x1AE4 */
int _floatunsidf(int result)
{
 /* JUMPOUT(0x1980) - was assembly jump */
 (void)0;
 return result;
}


/* Function: __floatsidf @ 0x1B08 */
int _floatsidf(int result)
{
 /* JUMPOUT(0x1980) - was assembly jump */
 (void)0;
 return result;
}


/* Function: __extendsfdf2 @ 0x1B30 */
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
 {
 /* JUMPOUT(0x1980) - was assembly jump */
 (void)0;
 }
 }
 return result;
}


/* Function: __floatundidf @ 0x1B78 */
int _floatundidf(long long a1)
{
 if ( a1 )
 {
 /* JUMPOUT(0x1BA8) - was assembly jump */
 (void)0;
 }
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __aeabi_frsub @ 0x1BEC */
float _aeabi_frsub(int a1, float a2)
{
 return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x1BF4 */
float _subsf3(float a1, int a2)
{
 return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}



/* CRT stub function __aeabi_fadd removed by preprocessor */



/* Function: __floatunsisf @ 0x1D88 */
void _floatunsisf()
{
 JUMPOUT(0x1D98);
}


/* Function: __floatsisf @ 0x1D90 */
int _floatsisf(int result)
{
 if ( result < 0 )
 result = -result;
 if ( result )
 JUMPOUT(0x1DF0);
 return result;
}


/* Function: __floatundisf @ 0x1DB0 */
int _floatundisf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x1DD8);
 return a1;
}



/* CRT stub function __floatdisf removed by preprocessor */



/* Function: __fixsfsi @ 0x1E3C */
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


/* Function: .term_proc @ 0x1E98 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x13084 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x13088 */

/* FAILED to decompile: __imp_printf @ 0x1308C */

/* FAILED to decompile: __imp_puts @ 0x13090 */

/* FAILED to decompile: __imp_memset @ 0x13094 */

/* FAILED to decompile: __imp_abort @ 0x13098 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x130A0 */

/* Total functions decompiled: 83, failed: 7 */
