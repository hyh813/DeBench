/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/2/2_clang_O2_no_g
 * Processor: arm
 */

#include <stdbool.h>
#include <stdio.h>

/* JUMPOUT macro for decompiler artifacts */
#define JUMPOUT(x) return 0

/* External string declarations - defined locally */
static char asc_2483[] = "Data Types L1";
static char asc_24A4[] = "Array Types";
static char asc_24BF[] = "Pointer Types";
static char asc_24DA[] = "Composite Types";
static unsigned int dword_0 = 0;
static unsigned int dword_64 = 64;
static unsigned int dword_2514[] = {50, 60, 70, 80};

/* Function: .init_proc @ 0x3CC */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_3D8 @ 0x3D8 */
void sub_3D8()
{
 return;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x59C */
int process_char(int result)
{
 if ( (unsigned char)(result - 65) < 0x1Au )
 result = result + 32;
 return (unsigned char)result;
}


/* Function: process_short @ 0x5B4 */
int process_short(short a1, short a2)
{
 return (short)(a2 + a1);
}


/* Function: process_int @ 0x5C4 */
int process_int(int a1)
{
 return (2 * a1) | 1;
}


/* Function: process_long @ 0x5D0 */
int process_long(int a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x5D8 */
long long process_ll(long long a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x5F0 */
float process_float(float a1)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x60C */
double process_double(double a1)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x63C */
double process_ld(double a1)
{
 return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x664 */
bool process_bool(int a1)
{
 return a1 > 0 && (a1 & 1) == 0;
}


/* Function: const_param @ 0x684 */
int const_param(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: volatile_access @ 0x690 */
int volatile_access(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: test_data_types_l1 @ 0x6A0 */
int test_data_types_l1()
{
 puts(asc_2483);
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


/* Function: array_1d_stack @ 0x7FC */
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
 --a2;
 result += v4;
 }
 while ( a2 );
 return result;
}


/* Function: array_string @ 0x828 */
int array_string(int a1)
{
 int v1; // r1

 v1 = 0;
 while ( *(unsigned char *)(a1 + v1++) )
 ;
 return v1 - 1;
}


/* Function: array_2d_stack @ 0x844 */
int array_2d_stack(unsigned int *a1)
{
 return a1[99] + a1[88] + a1[77] + a1[66] + a1[55] + a1[44] + a1[33] + a1[22] + a1[11] + *a1;
}


/* Function: array_3d @ 0x894 */
int array_3d(int a1)
{
 int v1; // r12
 int v2; // r1
 int v3; // r2
 unsigned int *v4; // r3

 v1 = 0;
 v2 = 0;
 do
 {
 v4 = (unsigned int *)(a1 + v1);
 v3 = *(unsigned int *)(a1 + v1);
 v1 += 100;
 v2 += v4[24]
 + v4[23]
 + v4[22]
 + v4[21]
 + v4[20]
 + v4[19]
 + v4[18]
 + v4[17]
 + v4[16]
 + v4[15]
 + v4[14]
 + v4[13]
 + v4[12]
 + v4[11]
 + v4[10]
 + v4[9]
 + v4[8]
 + v4[7]
 + v4[6]
 + v4[5]
 + v4[4]
 + v4[3]
 + v4[2]
 + v4[1]
 + v3;
 }
 while ( v1 != 500 );
 return v2;
}


/* Function: array_vla @ 0x96C */
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
 --v2;
 result += v4;
 }
 while ( v2 );
 return result;
}


/* Function: array_pointer @ 0x998 */
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
 --a2;
 result += v4;
 }
 while ( a2 );
 return result;
}


/* Function: pointer_array @ 0x9C4 */
int pointer_array(unsigned int **a1, int a2)
{
 int v2; // r2
 unsigned int *v3; // r3

 if ( a2 < 1 )
 return 0;
 v2 = 0;
 if ( (unsigned int)a2 >= 0xA )
 a2 = 10;
 do
 {
 v3 = *a1++;
 if ( v3 )
 v2 += *v3;
 --a2;
 }
 while ( a2 );
 return v2;
}


/* Function: array_complex_index @ 0xA08 */
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


/* Function: array_oob @ 0xA48 */
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
 --v2;
 v3 += v4;
 }
 while ( v2 );
 return v3;
}


/* Function: test_array_types @ 0xA7C */
int test_array_types()
{
 int v0; // r2
 int v1; // r0
 unsigned int *v2; // r3
 int v3; // r1
 int v4; // r4
 int v5; // r5
 int v6; // r0
 int v7; // r9
 int v8; // r6
 int v9; // r7
 int v10; // r0
 unsigned int *v11; // r3
 int v12; // r0
 int v13; // r8
 unsigned char v14[500]; // [sp+4h] [bp-3A4h] BYREF
 unsigned int v15[108]; // [sp+1F8h] [bp-1B0h] BYREF

 puts(asc_24A4);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 v0 = 0;
 do
 {
 v1 = 0;
 v2 = &v15[v0];
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v15[v0] = 0;
 if ( v0 == 90 )
 v1 = 9;
 v15[v0 + 9] = v1;
 v6 = 0;
 if ( v0 == 70 )
 v6 = 7;
 if ( v0 == 60 )
 v3 = 6;
 v15[v0 + 7] = v6;
 if ( v0 == 50 )
 v4 = 5;
 v15[v0 + 6] = v3;
 if ( v0 == 30 )
 v5 = 3;
 v15[v0 + 5] = v4;
 v15[v0 + 3] = v5;
 v15[v0 + 1] = v0 == 10;
 v7 = 8 * (v0 == 80);
 v8 = v0 == 40;
 v9 = v0 * 4 - 80;
 v0 += 10;
 v15[v0 - 10 + 8] = v7;
 v15[v0 - 10 + 4] = 4 * v8;
 v15[v0 - 10 + 2] = 2 * (v9 == 0);
 }
 while ( v0 != 100 );
 printf(
 "ARR-L1-03 (array_2d_stack): %d\n",
 v15[11] + v15[0] + v15[22] + v15[33] + v15[44] + v15[55] + v15[66] + v15[77] + v15[88] + v15[99]);
 v10 = 0;
 do
 {
 v11 = &v14[v10];
 *(unsigned int *)&v14[v10] = 1;
 v10 += 100;
 v11[17] = 1;
 v11[18] = 1;
 v11[19] = 1;
 v11[20] = 1;
 v11[21] = 1;
 v11[22] = 1;
 v11[23] = 1;
 v11[24] = 1;
 v11[9] = 1;
 v11[10] = 1;
 v11[11] = 1;
 v11[12] = 1;
 v11[13] = 1;
 v11[14] = 1;
 v11[15] = 1;
 v11[16] = 1;
 v11[1] = 1;
 v11[2] = 1;
 v11[3] = 1;
 v11[4] = 1;
 v11[5] = 1;
 v11[6] = 1;
 v11[7] = 1;
 v11[8] = 1;
 }
 while ( v10 != 500 );
 v12 = array_3d((int)v14);
 printf("ARR-L1-04 (array_3d): %d\n", v12);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 return printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0xCCC */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0xCD8 */
int ptr_double(unsigned int **a1)
{
 return **a1 + 5;
}


/* Function: ptr_triple @ 0xCE8 */
int ptr_triple(unsigned int ***a1)
{
 return ***a1 + 1;
}


/* Function: ptr_increment @ 0xCFC */
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
 --a2;
 result += v4;
 }
 while ( a2 );
 return result;
}


/* Function: ptr_offset @ 0xD28 */
int ptr_offset(int a1, int a2)
{
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0xD30 */
int ptr_diff(int a1, int a2)
{
 return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0xD3C */
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


/* Function: ptr_const @ 0xD64 */
int ptr_const(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0xD70 */
int ptr_const_ptr(int *a1)
{
 int v1; // r1

 v1 = *a1 + 5;
 *a1 = v1;
 return v1;
}


/* Function: ptr_func_simple @ 0xD84 */
int ptr_func_simple(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0xD90 */
int ptr_func_complex(int ( *a1)(int, unsigned int *), int a2)
{
 unsigned int v3[4]; // [sp+0h] [bp-10h] BYREF

 v3[0] = "test";
 v3[1] = &dword_0;
 return a1(a2, v3);
}


/* Function: ptr_cast @ 0xDE0 */
int ptr_cast(int a1)
{
 return *(unsigned int *)a1;
}


/* Function: opaque_handle_create @ 0xDE8 */
void opaque_handle_create()
{
 ;
}


/* Function: opaque_handle_op @ 0xDEC */
int opaque_handle_op(int a1)
{
 return 2 * a1;
}


/* Function: test_pointer_types @ 0xDF4 */
int test_pointer_types()
{
 puts(asc_24BF);
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


/* Function: struct_simple @ 0xF24 */
int struct_simple(unsigned int *a1)
{
 return a1[1] + *a1 + a1[2];
}


/* Function: struct_array @ 0xF38 */
int struct_array(int a1, int a2)
{
 int v2; // r2
 int result; // r0
 unsigned int *v4; // lr

 if ( a2 < 1 )
 return 0;
 v2 = a1 + 4;
 result = 0;
 do
 {
 v4 = (unsigned int *)(v2 - 4);
 v2 += 12;
 --a2;
 result += *v4 + v4[1] + v4[2];
 }
 while ( a2 );
 return result;
}


/* Function: struct_nested @ 0xF80 */
int struct_nested(unsigned int *a1)
{
 return a1[3] + *a1;
}


/* Function: struct_deep @ 0xF90 */
int struct_deep(int a1)
{
 return *(unsigned int *)(a1 + 20) + *(unsigned int *)(a1 + 8);
}


/* Function: struct_with_ptr @ 0xFA0 */
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


/* Function: struct_bitfields @ 0xFBC */
int struct_bitfields(unsigned short *a1)
{
 return (*a1 & 1)
 + ((unsigned short)*a1 >> 6)
 + (((unsigned short)*a1 >> 1) & 3)
 + (((unsigned short)*a1 >> 3) & 7);
}


/* Function: union_type @ 0xFE4 */
float union_type(unsigned char *a1, int a2)
{
 float result; // r0
 unsigned int tmp; // r1

 if ( a2 == 1 )
 {
 tmp = (int)*(float *)a1;
 result = *(float *)&tmp;
 }
 else if ( a2 )
 {
 tmp = *a1;
 result = *(float *)&tmp;
 }
 else
 {
 return *(float *)a1;
 }
 return result;
}


/* Function: union_array @ 0x1014 */
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
 --a2;
 result += v4;
 }
 while ( a2 );
 return result;
}


/* Function: enum_type @ 0x1040 */
int enum_type(int a1)
{
 return 10 * a1;
}


/* Function: enum_switch @ 0x104C */
int enum_switch(unsigned int a1)
{
 int result; // r0

 result = -99;
 if ( a1 <= 3 )
 return dword_2514[a1];
 return result;
}


/* Function: struct_func_ptr @ 0x106C */
int struct_func_ptr(int a1)
{
 return (*(int ( **)(unsigned int))(a1 + 4))(*(unsigned int *)a1);
}


/* Function: linked_list @ 0x1078 */
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


/* Function: doubly_linked_list @ 0x10A4 */
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


/* Function: binary_tree_sum @ 0x10D0 */
int binary_tree_sum(unsigned int *a1)
{
 int result; // r0
 unsigned int *v2; // r4
 int v3; // r5
 int v4; // r0

 if ( !a1 )
 return 0;
 v2 = a1;
 result = 0;
 do
 {
 v3 = *v2 + result;
 v4 = binary_tree_sum(v2[1]);
 v2 = (unsigned int *)v2[2];
 result = v3 + v4;
 }
 while ( v2 );
 return result;
}


/* Function: binary_tree @ 0x1118 */
// attributes: thunk
int binary_tree(unsigned int *a1)
{
 return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x111C */
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


/* Function: test_composite_types @ 0x1178 */
int test_composite_types()
{
 int v0; // r1
 int *v1; // r0
 int v2; // r2
 int *v3; // r0
 int v4; // r1
 int v5; // r2
 int v6; // r0
 unsigned int v8[3]; // [sp+4h] [bp-44h] BYREF
 unsigned int v9[3]; // [sp+10h] [bp-38h] BYREF
 unsigned int v10[3]; // [sp+1Ch] [bp-2Ch] BYREF
 unsigned int v11[2]; // [sp+28h] [bp-20h] BYREF
 unsigned int v12[2]; // [sp+30h] [bp-18h] BYREF
 unsigned int v13[4]; // [sp+38h] [bp-10h] BYREF

 puts(asc_24DA);
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
 v11[0] = 10;
 v13[0] = 30;
 v1 = v11;
 v13[1] = 0;
 v12[1] = v13;
 v12[0] = 20;
 v11[1] = v12;
 do
 {
 v2 = *v1;
 v1 = (int *)v1[1];
 v0 += v2;
 }
 while ( v1 );
 printf("CMP-L2-12 (linked_list): %d\n", v0);
 v3 = v9;
 v4 = 0;
 v10[0] = 20;
 v10[2] = v9;
 v10[1] = 0;
 v9[2] = 0;
 v9[0] = 10;
 v9[1] = v10;
 do
 {
 v5 = *v3;
 v3 = (int *)v3[1];
 v4 += v5;
 }
 while ( v3 );
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v4);
 v8[2] = 0;
 v8[1] = 0;
 v8[0] = &dword_64;
 v6 = binary_tree_sum(v8);
 printf("CMP-L2-14 (binary_tree): %d\n", v6);
 return printf("CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: main @ 0x13C4 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: __muldf3 @ 0x13E4 */
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

 v4 = 2047;
 v6 = (HIDWORD(a1) >> 20) & 0x7FF;
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
 a1 = sub_15C4();
 v7 = v6 + v3;
 v8 = HIDWORD(a1) ^ a3;
 v9 = HIDWORD(a1) & ~(v4 << 21);
 v10 = a3 & ~(v4 << 21);
 v11 = ((unsigned int)a1 | (v9 << 12)) == 0;
 if ( (unsigned int)a1 | (v9 << 12) )
 v11 = (a2 | (v10 << 12)) == 0;
 a1 = (a1 & 0xFFFFFFFFLL) | ((unsigned long long)(v9 | 0x100000) << 32);
 v12 = v10 | 0x100000;
 if ( v11 )
 {
 a1 = (a1 & 0xFFFFFFFF00000000LL) | ((unsigned int)a1 | a2);
 a1 = (a1 & 0xFFFFFFFFLL) | ((unsigned long long)((v8 & 0x80000000 | HIDWORD(a1)) ^ v12) << 32);
 v25 = v7 <= (int)(v4 >> 1);
 v27 = v7 - (v4 >> 1);
 if ( !v25 && (int)v4 > v27 )
 return (int)a1;
 a1 = (a1 & 0xFFFFFFFFLL) | ((unsigned long long)((unsigned int)(a1 >> 32) | 0x100000u) << 32);
 v24 = 0;
 v25 = v27 <= 1;
 v21 = v27 - 1;
 }
 else
 {
 v13 = (int)a1 * (int)a2;
 v14 = (HIDWORD(a1) * (unsigned long long)a2 + (((unsigned int)a1 * (unsigned long long)a2) >> 32)) >> 32;
 v15 = ((unsigned int)a1 * (unsigned long long)a2) >> 32;
 v16 = v8 & 0x80000000;
 v18 = (unsigned int)a1 * (unsigned long long)(unsigned int)v12 + (((unsigned long long)v14 << 32) | v15);
 v17 = (unsigned int)v18;
 v20 = (HIDWORD(a1) * (unsigned long long)(unsigned int)v12 + (unsigned int)(v18 >> 32)) >> 32;
 v19 = HIDWORD(a1) * v12 + (unsigned int)(v18 >> 32);
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
 a1 = ((unsigned long long)(v16 | (v20 << 11) | (v19 >> 21)) << 32) | ((unsigned int)a1 & 0xFFFFFFFFLL);
 a1 = (a1 & 0xFFFFFFFF00000000LL) | ((v19 << 11) | (v17 >> 21));
 v24 = v17 << 11;
 v25 = v21 <= 253;
 if ( (unsigned int)v21 > 0xFD )
 v25 = v21 - 253 <= 1792;
 if ( !v25 )
 {
 v26 = v24 >= 0x80000000;
 if ( v24 == 0x80000000 )
 v26 = (unsigned int)a1 & 1;
 a1 = (a1 & 0xFFFFFFFF00000000LL) | (v26 + (unsigned int)a1);
 return (int)a1;
 }
 }
 if ( !v25 )
 JUMPOUT(0x1630);
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
 a1 = (a1 & 0xFFFFFFFF00000000LL) | ((((unsigned int)a1 >> v31) | ((unsigned int)(a1 >> 32) << (32 - v31))) + (v32 >> 31));
 if ( !(v24 | (2 * v32)) )
 a1 = (a1 & 0xFFFFFFFF00000000LL) | ((unsigned int)a1 & ~(v32 >> 31));
 }
 else
 {
 v33 = 12 - v30;
 v34 = (unsigned int)a1 << v33;
 a1 = (a1 & 0xFFFFFFFF00000000LL) | ((((unsigned int)a1 >> (32 - v33)) | ((unsigned int)(a1 >> 32) << v33)) + ((unsigned int)a1 << v33 >> 31));
 if ( !(v24 | (2 * v34)) )
 a1 = (a1 & 0xFFFFFFFF00000000LL) | ((unsigned int)a1 & ~(v34 >> 31));
 }
 }
 else
 {
 v35 = v24 | ((unsigned int)a1 << (32 - v29));
 v36 = ((unsigned int)a1 >> v29) | ((unsigned int)(a1 >> 32) << (32 - v29));
 a1 = (a1 & 0xFFFFFFFF00000000LL) | (((((unsigned int)(a1 >> 32) >> v29) & ~(((unsigned int)(a1 >> 32) & 0x80000000) >> v29))) + (v36 >> 31));
 if ( !(v35 | (2 * v36)) )
 a1 = (a1 & 0xFFFFFFFF00000000LL) | ((unsigned int)a1 & ~(v36 >> 31));
 }
 }
 else
 {
 a1 = (a1 & 0xFFFFFFFF00000000LL) | 0;
 }
 return (int)a1;
}


/* Function: sub_15C4 @ 0x15C4 */
int sub_15C4(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
 bool v8; // cf
 bool v11; // zf
 bool v13; // zf
 bool v14; // zf
 int v9; // r4
 int v10; // r5
 int v12; // r6

 v9 = 0;
 v10 = 0;
 v12 = 0;
 v11 = a5 == a6;
 a7 = a6 & (a4 >> 20);
 if ( a5 != a6 )
 v11 = a7 == a6;
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
 { return result; }
 { return result; }
 }
 v13 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 v13 = (a3 | (2 * a4)) == 0;
 if ( v13 )
 { return result; }
 if ( v9 )
 goto LABEL_24;
 while ( 1 )
 {
 v8 = (result & 0x80000000) != 0;
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
 v8 = (a3 & 0x80000000) != 0;
 a3 *= 2;
 a4 += v8 + a4;
 if ( (a4 & 0x100000) != 0 )
 break;
 --v12;
 }
 }
 return result;
}


/* Function: __mulsf3 @ 0x1650 */
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


/* Function: __aeabi_drsub @ 0x17E8 */
double _aeabi_drsub(double a1, double a2)
{
 return a2 - a1;
}


/* Function: __subdf3 @ 0x17F0 */
double _subdf3(double a1, double a2)
{
 return a1 - a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x1AA0 */
double _floatunsidf(unsigned int result)
{
 return (double)result;
}


/* Function: __floatsidf @ 0x1AC4 */
double _floatsidf(int result)
{
 return (double)result;
}


/* Function: __extendsfdf2 @ 0x1AEC */
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
 JUMPOUT(0x193C);
 }
 return result;
}


/* Function: __floatundidf @ 0x1B34 */
double _floatundidf(unsigned long long a1)
{
 if ( !a1 )
 return 0.0;
 return (double)a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __aeabi_frsub @ 0x1BA8 */
float _aeabi_frsub(int a1, float a2)
{
 return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x1BB0 */
float _subsf3(float a1, int a2)
{
 return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}



/* CRT stub function __aeabi_fadd removed by preprocessor */



/* Function: __floatunsisf @ 0x1D44 */
void _floatunsisf()
{
 return;
}


/* Function: __floatsisf @ 0x1D4C */
int _floatsisf(int result)
{
 if ( result < 0 )
 result = -result;
 if ( result )
 JUMPOUT(0x1DAC);
 return result;
}


/* Function: __floatundisf @ 0x1D6C */
int _floatundisf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x1D94);
 return a1;
}



/* CRT stub function __floatdisf removed by preprocessor */



/* Function: __fixsfsi @ 0x1DF8 */
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


/* Function: .term_proc @ 0x1E54 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x13080 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x13084 */

/* FAILED to decompile: __imp_printf @ 0x13088 */

/* FAILED to decompile: __imp_puts @ 0x1308C */

/* FAILED to decompile: __imp_abort @ 0x13090 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x13098 */

/* Total functions decompiled: 83, failed: 6 */
