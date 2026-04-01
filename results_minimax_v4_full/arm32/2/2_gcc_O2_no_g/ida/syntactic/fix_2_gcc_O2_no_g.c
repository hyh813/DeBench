/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/2/2_gcc_O2_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

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
 puts("DT-L1");
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
 while ( v4 != v5 );
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
int array_2d_stack(int a1)
{
 int v1; // r3
 int result; // r0
 int v4; // r2

 v1 = 0;
 result = 0;
 do
 {
 v4 = *(unsigned int *)(a1 + 4 * v1);
 v1 += 11;
 result += v4;
 }
 while ( v1 != 110 );
 return result;
}


/* Function: array_3d @ 0x107D0 */
int array_3d(int a1)
{
 int v1; // r3
 unsigned int *v2; // lr
 unsigned int *v3; // r4
 unsigned int *v4; // r2
 int v5; // r0
 int v6; // r1
 int v7; // r3

 v1 = 0;
 v2 = (unsigned int *)(a1 + 100);
 v3 = (unsigned int *)(a1 + 600);
 do
 {
 v4 = v2 - 25;
 do
 {
 v5 = v4[3];
 v6 = v4[4];
 v7 = v1 + *v4 + v4[1] + v4[2];
 v4 += 5;
 v1 = v7 + v5 + v6;
 }
 while ( v4 != v2 );
 v2 = v4 + 25;
 }
 while ( v4 + 25 != v3 );
 return v1;
}


/* Function: array_vla @ 0x10824 */
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
 while ( v5 != v6 );
 }
 return result;
}


/* Function: array_pointer @ 0x1084C */
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


/* Function: pointer_array @ 0x10888 */
int pointer_array(int a1, int a2)
{
 int v2; // r12
 int v3; // r3
 int v4; // r1
 int result; // r0
 unsigned int *v6; // r2
 unsigned int *v7; // t1

 if ( a2 >= 10 )
 v2 = 10;
 else
 v2 = a2;
 if ( a2 <= 0 )
 return 0;
 v3 = 0;
 v4 = a1 - 4;
 result = 0;
 do
 {
 v7 = *(unsigned int **)(v4 + 4);
 v4 += 4;
 v6 = v7;
 ++v3;
 if ( v7 )
 result += *v6;
 }
 while ( v2 > v3 );
 return result;
}


/* Function: array_complex_index @ 0x108D0 */
int array_complex_index(int a1, int a2, int a3, int a4, signed int a5)
{
 if ( (a4 >= a2) | ((a4 | (unsigned int)a5) >> 31) || a5 >= a3 )
 return -1;
 else
 return *(unsigned int *)(a1 + 4 * (a4 + a5 * a2));
}


/* Function: array_oob @ 0x1090C */
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
 while ( v6 != v7 );
 }
 return result;
}


/* Function: test_array_types @ 0x10938 */
int test_array_types(
 int a1,
 int a2,
 int a3,
 int a4,
 int a5,
 int a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 int a14,
 int a15,
 int a16,
 int a17,
 int a18,
 int a19,
 int a20,
 int a21,
 int a22,
 int a23)
{
 int v23; // r12
 char *v24; // r3
 int v25; // t1
 char *v26; // r3
 int v27; // r2
 int v28; // t1
 int v29; // r2
 char *v30; // r12
 char *v31; // r1
 int i; // r3
 int v33; // r0
 int v34; // r2
 char *v35; // r3
 int v36; // t1
 char *v37; // r0
 char *v38; // r3
 int v39; // r2
 int *v40; // lr
 int *v41; // r3
 int v42; // r0
 int v43; // r1
 int v44; // r2
 int v45; // r3
 int *v46; // r2
 unsigned int v48[4]; // [sp+4h] [bp-404h] BYREF
 int v49; // [sp+14h] [bp-3F4h] BYREF
 char v50; // [sp+18h] [bp-3F0h] BYREF
 int v51; // [sp+5Ch] [bp-3ACh]
 char v52; // [sp+64h] [bp-3A4h] BYREF
 char v53; // [sp+68h] [bp-3A0h] BYREF
 char v54; // [sp+1F8h] [bp-210h] BYREF
 char v55; // [sp+220h] [bp-1E8h] BYREF
 char v56; // [sp+25Ch] [bp-1ACh] BYREF
 char v57[8]; // [sp+3ECh] [bp-1Ch] BYREF

 puts("ARR-L1");
 v23 = 0;
 v48[0] = 1;
 v48[1] = 2;
 v48[2] = 3;
 v48[3] = 4;
 v24 = (char *)v48;
 v49 = 5;
 do
 {
 v25 = *(unsigned int *)v24;
 v24 += 4;
 v23 += v25;
 }
 while ( &v50 != v24 );
 _printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v23);
 v26 = v57;
 v27 = 0;
 strcpy(v57, "hello");
 do
 {
 v28 = (unsigned char)*++v26;
 ++v27;
 }
 while ( v28 );
 _printf_chk(1, "ARR-L1-02 (array_string): %d\n", v27);
 v29 = 0;
 v30 = &v52;
 do
 {
 v31 = v30;
 for ( i = 0; i != 10; ++i )
 {
 if ( i == v29 )
 v33 = v29;
 else
 v33 = 0;
 *((unsigned int *)v31 + 1) = v33;
 v31 += 4;
 }
 ++v29;
 v30 += 40;
 }
 while ( v29 != 10 );
 v34 = 0;
 v35 = &v53;
 do
 {
 v36 = *(unsigned int *)v35;
 v35 += 44;
 v34 += v36;
 }
 while ( v35 != &v55 );
 _printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v34);
 v37 = &v54;
 do
 {
 v38 = v37;
 v39 = 5;
 do
 {
 --v39;
 *(unsigned int *)v38 = 1;
 *((unsigned int *)v38 + 1) = 1;
 *((unsigned int *)v38 + 2) = 1;
 *((unsigned int *)v38 + 3) = 1;
 *((unsigned int *)v38 + 4) = 1;
 v38 += 20;
 }
 while ( v39 );
 v37 += 100;
 }
 while ( v37 != v57 );
 v40 = (int *)&v56;
 do
 {
 v41 = v40 - 25;
 do
 {
 v42 = v41[3];
 v43 = v41[4];
 v44 = v39 + *v41 + v41[1] + v41[2];
 v41 += 5;
 v39 = v44 + v42 + v43;
 }
 while ( v40 != v41 );
 v40 += 25;
 }
 while ( v40 != &a23 );
 _printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v39);
 _printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 _printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 _printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 v45 = 0;
 v46 = &v49;
 do
 {
 v46[1] = v45;
 ++v46;
 ++v45;
 }
 while ( v45 != 20 );
 return _printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v51);
}


/* Function: ptr_single @ 0x10B78 */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0x10B84 */
int ptr_double(unsigned int **a1)
{
 return **a1 + 5;
}


/* Function: ptr_triple @ 0x10B94 */
int ptr_triple(unsigned int ***a1)
{
 return ***a1 + 1;
}


/* Function: ptr_increment @ 0x10BA8 */
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


/* Function: ptr_offset @ 0x10BDC */
int ptr_offset(int a1, int a2)
{
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0x10BE4 */
int ptr_diff(int a1, int a2)
{
 return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x10BF0 */
int ptr_void(unsigned char *a1, int a2)
{
 if ( !a2 )
 return *(unsigned int *)a1;
 if ( a2 == 1 )
 return *a1;
 return -1;
}


/* Function: ptr_const @ 0x10C10 */
int ptr_const(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0x10C1C */
int ptr_const_ptr(int *a1)
{
 int result; // r0

 result = *a1 + 5;
 *a1 = result;
 return result;
}


/* Function: ptr_func_simple @ 0x10C30 */
int ptr_func_simple(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0x10C3C */
int ptr_func_complex(int ( *a1)(int, unsigned int *), int a2)
{
 unsigned int v3[2]; // [sp+4h] [bp-14h] BYREF

 v3[1] = 0;
 v3[0] = (unsigned int)"test";
 return a1(a2, v3);
}


/* Function: ptr_cast @ 0x10CA4 */
int ptr_cast(int a1)
{
 return *(unsigned int *)a1;
}


/* Function: opaque_handle_create @ 0x10CAC */
void opaque_handle_create()
{
 ;
}


/* Function: opaque_handle_op @ 0x10CB0 */
int opaque_handle_op(int a1)
{
 return 2 * a1;
}


/* Function: test_pointer_types @ 0x10CB8 */
int test_pointer_types()
{
 int v0; // lr
 int *v1; // r12
 int v2; // t1
 unsigned int v4[5]; // [sp+0h] [bp-28h] BYREF
 int v5; // [sp+14h] [bp-14h] BYREF

 puts("PTR-L1");
 _printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 _printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 _printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 v0 = 0;
 v1 = v4;
 v4[0] = 1;
 v4[1] = 2;
 v4[2] = 3;
 v4[3] = 4;
 v4[4] = 5;
 do
 {
 v2 = *v1++;
 v0 += v2;
 }
 while ( v1 != &v5 );
 _printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v0);
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


/* Function: struct_simple @ 0x10E54 */
int struct_simple(unsigned int *a1)
{
 return *a1 + a1[1] + a1[2];
}


/* Function: struct_array @ 0x10E6C */
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


/* Function: struct_nested @ 0x10EB4 */
int struct_nested(unsigned int *a1)
{
 return *a1 + a1[3];
}


/* Function: struct_deep @ 0x10EC4 */
int struct_deep(int a1)
{
 return *(unsigned int *)(a1 + 8) + *(unsigned int *)(a1 + 20);
}


/* Function: struct_with_ptr @ 0x10ED4 */
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


/* Function: struct_bitfields @ 0x10EE8 */
unsigned int struct_bitfields(unsigned char *a1)
{
 return (*a1 & 1)
 + ((unsigned int)((unsigned char)*a1 << 29) >> 30)
 + ((unsigned int)((unsigned char)*a1 << 26) >> 29)
 + (*(unsigned short *)a1 >> 6);
}


/* Function: union_type @ 0x10F0C */
int union_type(unsigned char *a1, int a2)
{
 if ( !a2 )
 return *(unsigned int *)a1;
 if ( a2 == 1 )
 return (int)*(float *)a1;
 return *a1;
}


/* Function: union_array @ 0x10F3C */
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
 while ( v4 != v5 );
 }
 return result;
}


/* Function: enum_type @ 0x10F68 */
int enum_type(int a1)
{
 return 10 * a1;
}


/* Function: enum_switch @ 0x10F74 */
int enum_switch(unsigned int a1)
{
 unsigned int enum_values[5] = {0, 10, 20, 30, 50};
 if ( a1 > 3 )
 return -99;
 else
 return enum_values[a1];
}


/* Function: struct_func_ptr @ 0x10F90 */
int struct_func_ptr(int a1)
{
 int (*func_ptr)(unsigned int) = *(int (**)(unsigned int))(a1 + 4);
 return func_ptr(*(unsigned int *)a1);
}


/* Function: linked_list @ 0x10F98 */
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


/* Function: doubly_linked_list @ 0x10FC0 */
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


/* Function: binary_tree_sum @ 0x10FE8 */
int binary_tree_sum(int *a1, int a2)
{
 unsigned int *v2; // r5
 int v3; // r2
 int v4; // r3
 int v5; // r2
 int v6; // r3
 int v7; // r2
 int v8; // r3
 int v9; // r2
 int v10; // r2
 int *v11; // r6
 int v12; // r1
 int v13; // r3
 unsigned int *v14; // r5
 int v15; // r2
 int v16; // r1
 unsigned int *v17; // r4
 int v18; // r10
 int v19; // r0
 int v20; // r8
 unsigned int *v21; // r10
 int v22; // r5
 int v23; // r2
 int *v24; // r7
 int v25; // r9
 int v26; // r0
 int v27; // r11
 int v28; // r8
 unsigned int *v29; // r2
 int v30; // r4
 int v31; // r3
 int v32; // r9
 int v33; // r1
 int v34; // r0
 int v35; // r12
 int v36; // r0
 int v37; // r2
 int v38; // r2
 int v39; // r2
 unsigned int *v41; // [sp+0h] [bp-70h]
 int v42; // [sp+4h] [bp-6Ch]
 int v43; // [sp+8h] [bp-68h]
 int v44; // [sp+Ch] [bp-64h]
 int *v45; // [sp+10h] [bp-60h]
 int v46; // [sp+14h] [bp-5Ch]
 int *v47; // [sp+18h] [bp-58h]
 int v48; // [sp+1Ch] [bp-54h]
 int v49; // [sp+20h] [bp-50h]
 int *v50; // [sp+24h] [bp-4Ch]
 int v51; // [sp+28h] [bp-48h]
 int *v52; // [sp+2Ch] [bp-44h]
 int v53; // [sp+30h] [bp-40h]
 int v54; // [sp+34h] [bp-3Ch]
 int v55; // [sp+38h] [bp-38h]
 int v56; // [sp+3Ch] [bp-34h]
 unsigned int *v57; // [sp+40h] [bp-30h]
 int v58; // [sp+44h] [bp-2Ch]
 int a2_local; // local copy of a2

 a2_local = a2;
 v45 = a1;
 if ( !a1 )
 return 0;
 v44 = 0;
 do
 {
 v3 = v45[1];
 v4 = *v45;
 v46 = *v45;
 if ( v3 )
 v4 = 0;
 v47 = (int *)v45[1];
 if ( v3 )
 {
 v49 = v4;
 do
 {
 v5 = v47[1];
 v6 = *v47;
 v48 = *v47;
 if ( v5 )
 v6 = 0;
 v50 = (int *)v47[1];
 if ( v5 )
 {
 v51 = v6;
 do
 {
 v7 = v50[1];
 v8 = *v50;
 v55 = *v50;
 if ( v7 )
 v8 = 0;
 v52 = (int *)v50[1];
 if ( v7 )
 {
 v53 = v8;
 do
 {
 v9 = v52[1];
 if ( v9 )
 {
 a2_local = 0;
 v2 = (unsigned int *)v52[1];
 }
 v54 = *v52;
 if ( v9 )
 {
 v10 = a2_local;
 do
 {
 v11 = (int *)v2[1];
 v12 = *v2;
 if ( v11 )
 {
 v13 = 0;
 v41 = v2;
 v42 = v10;
 v43 = *v2;
 do
 {
 v14 = (unsigned int *)v11[1];
 v15 = *v11;
 if ( v14 )
 {
 v16 = 0;
 do
 {
 v17 = (unsigned int *)v14[1];
 v18 = *v14;
 if ( v17 )
 {
 v19 = *v14;
 v20 = 0;
 v21 = v14;
 v22 = v15;
 v23 = v19;
 do
 {
 v24 = (int *)v17[1];
 v25 = *v17;
 if ( v24 )
 {
 v26 = v20;
 v27 = 0;
 v28 = v23;
 v29 = v17;
 v30 = v13;
 v31 = v25;
 v32 = v16;
 v33 = v26;
 do
 {
 v58 = v33;
 v57 = v29;
 v56 = v31;
 v34 = binary_tree_sum(v24[1], v32);
 v35 = *v24;
 v24 = (int *)v24[2];
 v31 = v56;
 v29 = v57;
 v33 = v58;
 v27 += v34 + v35;
 }
 while ( v24 );
 }
 while ( v17 );
 v14 = v21;
 v15 = v22;
 v18 = v23 + v20;
 v14 = (unsigned int *)v14[2];
 v16 += v18;
 }
 while ( v14 );
 v11 = (int *)v11[2];
 v15 += v16;
 v13 += v15;
 }
 while ( v11 );
 v2 = v41;
 v10 = v42;
 v12 = v43 + v13;
 v2 = (unsigned int *)v2[2];
 v10 += v12;
 }
 while ( v2 );
 v54 += v10;
 }
 a2_local = v54;
 v37 = v53 + v54;
 v52 = (int *)v52[2];
 v53 += v54;
 }
 while ( v52 );
 v55 += v37;
 a2_local = v55;
 v38 = v51 + v55;
 v50 = (int *)v50[2];
 v51 += v55;
 }
 while ( v50 );
 v48 += v38;
 a2_local = v48;
 v39 = v49 + v48;
 v47 = (int *)v47[2];
 v49 += v48;
 }
 while ( v47 )
 {
 v46 += v39;
 v47 = (int *)v47[2];
 }
 a2_local = v46;
 v45 = (int *)v45[2];
 v44 += v46;
 return v44;
}



/* Function: binary_tree @ 0x112A8 */
int binary_tree(int *a1, int a2)
{
 int *v2; // r4
 int v3; // r5
 int v4; // r0
 int v5; // r3

 v2 = a1;
 if ( !a1 )
 return 0;
 v3 = 0;
 do
 {
 v4 = binary_tree_sum((int *)v2[1], a2);
 v5 = *v2;
 v2 = (int *)v2[2];
 v3 += v4 + v5;
 }
 while ( v2 );
 return v3;
}


/* Function: graph_traverse @ 0x112E4 */
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


/* Function: test_composite_types @ 0x11328 */
int test_composite_types()
{
 int v0; // r3
 int v1; // r2
 int *v2; // r5
 int *v3; // r4
 int v4; // r2
 int v5; // r3
 int v6; // r1
 int v7; // r0
 unsigned int v9[3]; // [sp+14h] [bp-3Ch] BYREF
 unsigned int v10[3]; // [sp+1Ch] [bp-34h] BYREF
 unsigned int v11[4]; // [sp+24h] [bp-2Ch] BYREF
 unsigned int v12[4]; // [sp+30h] [bp-20h] BYREF

 puts("CMP-L1");
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
 v1 = 0;
 v2 = (int *)v9;
 v9[0] = 20;
 v9[1] = (unsigned int)&v10[0];
 v9[2] = 0;
 v10[0] = 30;
 v10[1] = 0;
 v10[2] = (unsigned int)v9;
 while ( 1 )
 {
 v1 += v0;
 if ( !v2 )
 break;
 v0 = *v2;
 v2 = (int *)v2[1];
 }
 _printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v1);
 v3 = (int *)v11;
 v11[0] = 10;
 v11[1] = (unsigned int)&v12[0];
 v11[2] = 0;
 v12[0] = 20;
 v12[1] = 0;
 v12[2] = (unsigned int)v11;
 v4 = 0;
 v5 = 10;
 while ( 1 )
 {
 v3 = (int *)v3[1];
 v4 += v5;
 if ( !v3 )
 break;
 v5 = *v3;
 }
 _printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v4);
 v7 = binary_tree_sum((int *)0, v6);
 _printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v7 + 100);
 return _printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: __muldf3 @ 0x11538 */
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
 a1 = sub_11718();
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
 JUMPOUT(0x11784);
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


/* Function: sub_11718 @ 0x11718 */
int sub_11718(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
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
 __asm__ volatile("POP {R4-R6, PC}");
 __asm__ volatile("POP {R4-R6, PC}");
 }
 v13 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 v13 = (a3 | (2 * a4)) == 0;
 if ( v13 )
 __asm__ volatile("POP {R4-R6, PC}");
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


/* Function: __mulsf3 @ 0x117A4 */
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


/* Function: __aeabi_drsub @ 0x1193C */
double _aeabi_drsub(double a1, double a2)
{
 HIDWORD(a1) ^= 0x80000000;
 return a1 + a2;
}


/* Function: __subdf3 @ 0x11944 */
double _subdf3(double a1, double a2)
{
 HIDWORD(a2) ^= 0x80000000;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x11BF4 */
unsigned int _floatunsidf(unsigned int result)
{
 if ( result )
 JUMPOUT(0x11A90);
 return result;
}


/* Function: __floatsidf @ 0x11C18 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x11A90);
 return result;
}


/* Function: __extendsfdf2 @ 0x11C40 */
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
 JUMPOUT(0x11A90);
 }
 return result;
}


/* Function: __floatundidf @ 0x11C88 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11CB8);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __aeabi_frsub @ 0x11CFC */
float _aeabi_frsub(int a1, float a2)
{
 return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x11D04 */
float _subsf3(float a1, int a2)
{
 return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}



/* CRT stub function __aeabi_fadd removed by preprocessor */



/* Function: __floatunsisf @ 0x11E98 */
void _floatunsisf()
{
 JUMPOUT(0x11EA8);
}


/* Function: __floatsisf @ 0x11EA0 */
int _floatsisf(int result)
{
 if ( result < 0 )
 result = -result;
 if ( result )
 JUMPOUT(0x11F00);
 return result;
}


/* Function: __floatundisf @ 0x11EC0 */
int _floatundisf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11EE8);
 return a1;
}



/* CRT stub function __floatdisf removed by preprocessor */



/* Function: __fixsfsi @ 0x11F4C */
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


/* Function: .term_proc @ 0x11FA8 */
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
