/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/2/2_gcc_Os_no_g
 * Processor: arm
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* Compiler intrinsic macros */
#define __CFADD__(a, b) (((a) + (b)) < (a))
#define __CFSHL__(a, n) (((a) >> (32 - (n))) & 1)
#define __PAIR64__(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned long long)(lo))
#define __SPAIR64__(hi, lo) (((long long)(hi) << 32) | (long long)(lo))
#define HIBYTE(x) (((x) >> 24) & 0xFF)
#define HIDWORD(x) ((unsigned int)((unsigned long long)(x) >> 32))
#define LODWORD(x) ((unsigned int)(x))
#define COERCE_FLOAT(x) ((union { unsigned int i; float f; }) { .i = (unsigned int)(x) }).f
#define JUMPOUT(x) return 0

/* Global declarations for missing symbols */
int call_weak_fn(void) { return 0; }
int _printf_chk(int flag, const char *format, ...) { return printf(format); }
const char *s = "Data Types Test";
const char *asc_1203F = "Array Types Test";
const char *asc_1215B = "Pointer Types Test";
const char *asc_122F4 = "Composite Types Test";
unsigned char unk_124DC[] = {0, 0, 0, 0, 50, 60, 70, 80};

/* Function: .init_proc @ 0x103DC */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_103E8 @ 0x103E8 */
void sub_103E8()
{
 JUMPOUT(0);
}


/* Function: main @ 0x1045C */
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



/* Function: double_value @ 0x10570 */
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: process_int @ 0x10578 */
int process_int(int a1)
{
 return 2 * a1 + 1;
}


/* Function: complex_callback @ 0x10584 */
int complex_callback(unsigned int *a1, int *a2)
{
 int result; // r0

 *a1 += 10;
 result = *a2;
 if ( *a2 )
 return 1;
 return result;
}


/* Function: process_char @ 0x105A0 */
int process_char(int result)
{
 if ( (unsigned int)(result - 65) <= 0x19 )
 return (unsigned char)(result + 32);
 return result;
}


/* Function: process_short @ 0x105B4 */
int process_short(short a1, short a2)
{
 return (short)(a1 + a2);
}


/* Function: process_long @ 0x105C4 */
int process_long(int a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x105CC */
int process_ll(int a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x105E0 */
float process_float(float a1)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x105F8 */
double process_double(double a1)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x10624 */
double process_ld(double a1)
{
 return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x10648 */
int process_bool(int a1)
{
 char v1; // r0

 if ( a1 > 0 )
 v1 = 1 - (a1 & 1);
 else
 v1 = 0;
 return v1 & 1;
}


/* Function: const_param @ 0x10660 */
int const_param(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: volatile_access @ 0x1066C */
int volatile_access(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: test_data_types_l1 @ 0x1067C */
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


/* Function: array_1d_stack @ 0x107DC */
int array_1d_stack(int a1, int a2)
{
 int v2; // r3
 int result; // r0
 int v5; // r12

 v2 = 0;
 result = 0;
 while ( v2 < a2 )
 {
 v5 = *(unsigned int *)(a1 + 4 * v2++);
 result += v5;
 }
 return result;
}


/* Function: array_string @ 0x10800 */
int array_string(int a1)
{
 int result; // r0

 for ( result = 0; *(unsigned char *)(a1 + result); ++result )
 ;
 return result;
}


/* Function: array_2d_stack @ 0x1081C */
int array_2d_stack(int a1)
{
 int v1; // r3
 int result; // r0
 int v4; // r1

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


/* Function: array_3d @ 0x10840 */
int array_3d(int *a1)
{
 int *v1; // r3
 int *v2; // r1
 int result; // r0
 int *v4; // r2
 int v5; // r12

 v1 = a1;
 v2 = a1 + 125;
 result = 0;
 do
 {
 v4 = v1 + 25;
 do
 {
 v5 = *v1;
 v1 += 5;
 result += v5 + *(v1 - 4) + *(v1 - 3) + *(v1 - 2) + *(v1 - 1);
 }
 while ( v1 != v4 );
 }
 while ( v2 != v1 );
 return result;
}


/* Function: array_vla @ 0x10890 */
int array_vla(int a1, int a2)
{
 int v2; // r3
 int result; // r0
 int v5; // r12

 v2 = 0;
 result = 0;
 while ( v2 < a1 )
 {
 v5 = *(unsigned int *)(a2 + 4 * v2++);
 result += v5;
 }
 return result;
}


/* Function: array_pointer @ 0x108B4 */
int array_pointer(int a1, int a2)
{
 int v2; // r3
 int result; // r0
 int v5; // lr

 v2 = 0;
 for ( result = 0; v2 < a2; result += *(unsigned int *)(a1 + v5) )
 v5 = 40 * v2++;
 return result;
}


/* Function: pointer_array @ 0x108EC */
int pointer_array(int a1, int a2)
{
 int v2; // r3
 int result; // r0
 unsigned int *v5; // r12

 v2 = 0;
 if ( a2 >= 10 )
 a2 = 10;
 result = 0;
 while ( v2 < a2 )
 {
 v5 = *(unsigned int **)(a1 + 4 * v2++);
 if ( v5 )
 result += *v5;
 }
 return result;
}


/* Function: array_complex_index @ 0x10920 */
int array_complex_index(int a1, int a2, int a3, int a4, signed int a5)
{
 if ( (a4 >= a2) | ((a4 | (unsigned int)a5) >> 31) || a5 >= a3 )
 return -1;
 else
 return *(unsigned int *)(a1 + 4 * (a4 + a5 * a2));
}


/* Function: array_oob @ 0x1095C */
int array_oob(int a1, int a2)
{
 int v2; // r3
 int result; // r0
 int v5; // r12

 v2 = 0;
 result = 0;
 while ( v2 <= a2 )
 {
 v5 = *(unsigned int *)(a1 + 4 * v2++);
 result += v5;
 }
 return result;
}


/* Function: test_array_types @ 0x10980 */
int test_array_types()
{
 int v0; // r0
 int v1; // r0
 unsigned char *v2; // r1
 int i; // r3
 unsigned int *v4; // r12
 int j; // r2
 int v6; // lr
 int v7; // r0
 int *v8; // r1
 int k; // r6
 int *v10; // r3
 int v11; // r4
 int v12; // r0
 int v13; // r0
 int v14; // r0
 int v15; // r0
 char *v16; // r3
 int v18; // [sp+4h] [bp-51Ch] BYREF
 int v19; // [sp+8h] [bp-518h] BYREF
 int v20; // [sp+Ch] [bp-514h] BYREF
 unsigned int v21[3]; // [sp+10h] [bp-510h] BYREF
 unsigned int v22[5]; // [sp+1Ch] [bp-504h] BYREF
 unsigned int *v23[10]; // [sp+30h] [bp-4F0h] BYREF
 char v24; // [sp+58h] [bp-4C8h] BYREF
 int v25; // [sp+9Ch] [bp-484h]
 unsigned int v26[50]; // [sp+A8h] [bp-478h] BYREF
 unsigned char v27[400]; // [sp+170h] [bp-3B0h] BYREF
 int v28[124]; // [sp+300h] [bp-220h] BYREF
 char v29[8]; // [sp+4F4h] [bp-2Ch] BYREF

 puts(asc_1203F);
 v22[0] = 1;
 v22[1] = 2;
 v22[2] = 3;
 v22[3] = 4;
 v22[4] = 5;
 v0 = array_1d_stack((int)v22, 5);
 _printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v0);
 strcpy(v29, "hello");
 v1 = array_string((int)v29);
 _printf_chk(1, "ARR-L1-02 (array_string): %d\n", v1);
 v2 = v27;
 for ( i = 0; i != 10; ++i )
 {
 v4 = v2;
 for ( j = 0; j != 10; ++j )
 {
 if ( j == i )
 v6 = i;
 else
 v6 = 0;
 *v4++ = v6;
 }
 v2 += 40;
 }
 v7 = array_2d_stack((int)v27);
 _printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v7);
 v8 = v28;
 for ( k = 0; k != 5; ++k )
 {
 v10 = v8;
 v11 = 5;
 do
 {
 --v11;
 *v10 = 1;
 v10[1] = 1;
 v10[2] = 1;
 v10[3] = 1;
 v10[4] = 1;
 v10 += 5;
 }
 while ( v11 );
 v8 += 25;
 }
 v12 = array_3d(v28);
 _printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v12);
 v21[0] = 10;
 v21[1] = 20;
 v21[2] = 30;
 v13 = array_vla(3, (int)v21);
 _printf_chk(1, "ARR-L2-01 (array_vla): %d\n", v13);
 v26[40] = 40;
 v26[0] = 0;
 v26[10] = 10;
 v26[20] = 20;
 v26[30] = 30;
 v14 = array_pointer((int)v26, 5);
 _printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", v14);
 v18 = 10;
 v19 = 20;
 v20 = 30;
 memset(&v23[3], 0, 0x1Cu);
 v23[0] = (unsigned int *)&v18;
 v23[1] = (unsigned int *)&v19;
 v23[2] = (unsigned int *)&v20;
 v15 = pointer_array((int)v23, 3);
 _printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v15);
 v16 = &v24;
 do
 {
 *(unsigned int *)v16 = v11;
 v16 += 4;
 ++v11;
 }
 while ( v11 != 20 );
 return _printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v25);
}


/* Function: ptr_single @ 0x10BF4 */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0x10C00 */
int ptr_double(unsigned int **a1)
{
 return **a1 + 5;
}


/* Function: ptr_triple @ 0x10C10 */
int ptr_triple(unsigned int ***a1)
{
 return ***a1 + 1;
}


/* Function: ptr_increment @ 0x10C24 */
int ptr_increment(int a1, int a2)
{
 int v2; // r3
 int result; // r0
 int v5; // r12

 v2 = 0;
 result = 0;
 while ( v2 < a2 )
 {
 v5 = *(unsigned int *)(a1 + 4 * v2++);
 result += v5;
 }
 return result;
}


/* Function: ptr_offset @ 0x10C48 */
int ptr_offset(int a1, int a2)
{
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0x10C50 */
int ptr_diff(int a1, int a2)
{
 return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x10C5C */
int ptr_void(unsigned char *a1, int a2)
{
 if ( !a2 )
 return *(unsigned int *)a1;
 if ( a2 == 1 )
 return *a1;
 return -1;
}


/* Function: ptr_const @ 0x10C7C */
int ptr_const(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0x10C88 */
int ptr_const_ptr(int *a1)
{
 int result; // r0

 result = *a1 + 5;
 *a1 = result;
 return result;
}


/* Function: ptr_func_simple @ 0x10C9C */
int ptr_func_simple(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0x10CA8 */
int ptr_func_complex(int ( *a1)(int, unsigned int *), int a2, int a3, int a4)
{
 unsigned int v5[5]; // [sp+4h] [bp-14h] BYREF

 v5[2] = a4;
 v5[0] = "test";
 v5[1] = 0;
 return a1(a2, v5);
}


/* Function: ptr_cast @ 0x10D08 */
int ptr_cast(int a1)
{
 return *(unsigned int *)a1;
}


/* Function: opaque_handle_create @ 0x10D10 */
void opaque_handle_create()
{
 ;
}


/* Function: opaque_handle_op @ 0x10D14 */
int opaque_handle_op(int a1)
{
 return 2 * a1;
}


/* Function: test_pointer_types @ 0x10D1C */
int test_pointer_types()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r2
 int v4; // r3
 int v5; // r0
 int v7; // [sp+0h] [bp-30h] BYREF
 int *v8; // [sp+4h] [bp-2Ch] BYREF
 int **v9; // [sp+8h] [bp-28h] BYREF
 int v10; // [sp+Ch] [bp-24h] BYREF
 unsigned int v11[5]; // [sp+10h] [bp-20h] BYREF

 puts(asc_1215B);
 _printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 _printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 v9 = &v8;
 v7 = 5;
 v8 = &v7;
 v0 = ptr_triple(&v9);
 _printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", v0);
 v11[0] = 1;
 v11[1] = 2;
 v11[2] = 3;
 v11[3] = 4;
 v11[4] = 5;
 v1 = ptr_increment((int)v11, 5);
 _printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v1);
 _printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 _printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 _printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 _printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 _printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 _printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 v2 = ptr_func_simple(double_value, 5);
 _printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", v2);
 v10 = 5;
 v5 = ptr_func_complex((int ( *)(int, unsigned int *))complex_callback, (int)&v10, v3, v4);
 _printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", v5);
 _printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 return _printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x10EE4 */
int struct_simple(unsigned int *a1)
{
 return *a1 + a1[1] + a1[2];
}


/* Function: struct_array @ 0x10EF8 */
int struct_array(int a1, int a2)
{
 int v2; // r12
 int result; // r0
 int i; // r3

 v2 = 0;
 result = 0;
 for ( i = a1 + 12; v2 < a2; i += 12 )
 {
 ++v2;
 result += *(unsigned int *)(i - 12) + *(unsigned int *)(i - 8) + *(unsigned int *)(i - 4);
 }
 return result;
}


/* Function: struct_nested @ 0x10F40 */
int struct_nested(unsigned int *a1)
{
 return *a1 + a1[3];
}


/* Function: struct_deep @ 0x10F50 */
int struct_deep(int a1)
{
 return *(unsigned int *)(a1 + 8) + *(unsigned int *)(a1 + 20);
}


/* Function: struct_with_ptr @ 0x10F60 */
char * struct_with_ptr(int *a1)
{
 int v1; // r3
 unsigned int *v2; // r0

 v1 = *a1;
 v2 = (unsigned int *)a1[1];
 if ( v2 )
 v2 = (unsigned int *)*v2;
 return (char *)v2 + v1;
}


/* Function: struct_bitfields @ 0x10F78 */
unsigned int struct_bitfields(unsigned char *a1)
{
 return (*a1 & 1)
 + ((unsigned int)((unsigned char)*a1 << 29) >> 30)
 + ((unsigned int)((unsigned char)*a1 << 26) >> 29)
 + (*(unsigned short *)a1 >> 6);
}


/* Function: union_type @ 0x10F9C */
int union_type(unsigned char *a1, int a2)
{
 if ( !a2 )
 return *(unsigned int *)a1;
 if ( a2 == 1 )
 return (int)*(float *)a1;
 return *a1;
}


/* Function: union_array @ 0x10FCC */
int union_array(int a1, int a2)
{
 int v2; // r3
 int result; // r0
 int v5; // r12

 v2 = 0;
 result = 0;
 while ( v2 < a2 )
 {
 v5 = *(unsigned int *)(a1 + 4 * v2++);
 result += v5;
 }
 return result;
}


/* Function: enum_type @ 0x10FF0 */
int enum_type(int a1)
{
 return 10 * a1;
}


/* Function: enum_switch @ 0x10FFC */
int enum_switch(unsigned int a1)
{
 if ( a1 > 3 )
 return -99;
 else
 return *((char *)&unk_124DC + a1 + 32);
}


/* Function: struct_func_ptr @ 0x11018 */
int struct_func_ptr(int a1)
{
 return (*(int ( **)(unsigned int))(a1 + 4))(*(unsigned int *)a1);
}


/* Function: linked_list @ 0x11020 */
int linked_list(int *a1)
{
 int result; // r0
 int v3; // r2

 result = 0;
 while ( a1 )
 {
 v3 = *a1;
 a1 = (int *)a1[1];
 result += v3;
 }
 return result;
}


/* Function: doubly_linked_list @ 0x11040 */
int doubly_linked_list(int *a1)
{
 int result; // r0
 int v3; // r2

 result = 0;
 while ( a1 )
 {
 v3 = *a1;
 a1 = (int *)a1[1];
 result += v3;
 }
 return result;
}


/* Function: binary_tree_sum @ 0x11060 */
int binary_tree_sum(int *a1)
{
 int v2; // r5
 int v3; // r0
 int v4; // r3

 v2 = 0;
 while ( a1 )
 {
 v3 = binary_tree_sum(a1[1]);
 v4 = *a1;
 a1 = (int *)a1[2];
 v2 += v3 + v4;
 }
 return v2;
}


/* Function: binary_tree @ 0x11098 */
// attributes: thunk
int binary_tree(int *a1)
{
 return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x1109C */
int graph_traverse(int a1)
{
 int v1; // r3
 int v3; // r12
 int result; // r0
 int *v5; // r1
 int v6; // lr

 v1 = 0;
 v3 = *(unsigned int *)(a1 + 40);
 result = 0;
 while ( v3 > v1 )
 {
 v5 = *(int **)(a1 + 4 * v1);
 if ( v5 )
 {
 while ( 1 )
 {
 v6 = *v5;
 v5 = (int *)v5[1];
 result += v6;
 while ( !v5 )
 {
 if ( v3 <= ++v1 )
 return result;
 v5 = *(int **)(a1 + 4 * v1);
 }
 }
 }
 ++v1;
 }
 return result;
}


/* Function: test_composite_types @ 0x110F8 */
int test_composite_types()
{
 int v0; // r0
 int v1; // r0
 char *v2; // r0
 unsigned int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int v9; // r0
 unsigned int v11[2]; // [sp+4h] [bp-DCh] BYREF
 int v12[2]; // [sp+Ch] [bp-D4h] BYREF
 unsigned int v13[2]; // [sp+14h] [bp-CCh] BYREF
 unsigned int v14[2]; // [sp+1Ch] [bp-C4h] BYREF
 unsigned int v15[2]; // [sp+24h] [bp-BCh] BYREF
 unsigned int v16[3]; // [sp+2Ch] [bp-B4h] BYREF
 int v17[3]; // [sp+38h] [bp-A8h] BYREF
 unsigned int v18[3]; // [sp+44h] [bp-9Ch] BYREF
 unsigned int v19[6]; // [sp+50h] [bp-90h] BYREF
 int v20[2]; // [sp+68h] [bp-78h] BYREF
 unsigned int v21[2]; // [sp+70h] [bp-70h] BYREF
 unsigned int v22[2]; // [sp+78h] [bp-68h] BYREF
 int v23[3]; // [sp+80h] [bp-60h] BYREF
 unsigned int v24[3]; // [sp+8Ch] [bp-54h] BYREF
 unsigned int v25[11]; // [sp+98h] [bp-48h] BYREF

 puts(asc_122F4);
 v16[0] = 1;
 v16[1] = 2;
 v16[2] = 3;
 v0 = struct_simple(v16);
 _printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", v0);
 v19[0] = 1;
 v19[1] = 1;
 v19[2] = 1;
 v19[3] = 2;
 v19[4] = 2;
 v19[5] = 2;
 v1 = struct_array((int)v19, 2);
 _printf_chk(1, "CMP-L2-02 (struct_array): %d\n", v1);
 _printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 _printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 v12[1] = (int)v11;
 v11[0] = 20;
 v11[1] = 0;
 v12[0] = 10;
 v2 = struct_with_ptr(v12);
 _printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", v2);
 v13[0] = 6429;
 v13[1] = 0;
 v3 = struct_bitfields(v13);
 _printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", v3);
 _printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 v18[0] = 10;
 v18[1] = 20;
 v18[2] = 30;
 v4 = union_array((int)v18, 3);
 _printf_chk(1, "CMP-L2-08 (union_array): %d\n", v4);
 _printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 _printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 v14[1] = process_int;
 v14[0] = 10;
 v5 = struct_func_ptr((int)v14);
 _printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", v5);
 v20[1] = (int)v21;
 v21[1] = v22;
 v22[0] = 30;
 v20[0] = 10;
 v21[0] = 20;
 v22[1] = 0;
 v6 = linked_list(v20);
 _printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v6);
 v23[1] = (int)v24;
 v23[0] = 10;
 v23[2] = 0;
 v24[0] = 20;
 v24[1] = 0;
 v24[2] = v23;
 v7 = doubly_linked_list(v23);
 _printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v7);
 v17[0] = 100;
 v17[1] = 0;
 v17[2] = 0;
 v8 = binary_tree_sum(v17);
 _printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v8);
 v15[0] = 1;
 v15[1] = 0;
 memset(&v25[1], 0, 0x24u);
 v25[0] = v15;
 v25[10] = 2;
 v9 = graph_traverse((int)v25);
 return _printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", v9);
}


/* Function: __muldf3 @ 0x113C8 */
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
 unsigned int a1_hi; // helper for HIDWORD(a1)
 unsigned int a1_lo; // helper for LODWORD(a1)
 unsigned int *a1_ptr; // pointer to access a1 parts
 long long a1_local; // local copy of a1 for address-taking

 v4 = 2047;
 a1_local = a1;
 a1_hi = ((unsigned int*)&a1_local)[1];
 a1_lo = (unsigned int)a1_local;
 a1_ptr = (unsigned int*)&a1_local;
 v6 = (a1_hi >> 20) & 0x7FF;
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
 a1 = sub_115A8();
 v7 = v6 + v3;
 v8 = a1_hi ^ a3;
 v9 = a1_hi & ~(v4 << 21);
 v10 = a3 & ~(v4 << 21);
 v11 = (a1_lo | (v9 << 12)) == 0;
 if ( a1_lo | (v9 << 12) )
 v11 = (a2 | (v10 << 12)) == 0;
 a1_hi = v9 | 0x100000;
 v12 = v10 | 0x100000;
 if ( v11 )
 {
 a1_lo = a1_lo | a2;
 a1_hi = (v8 & 0x80000000 | a1_hi) ^ v12;
 v25 = v7 <= (int)(v4 >> 1);
 v27 = v7 - (v4 >> 1);
 if ( !v25 && (int)v4 > v27 )
 {
 a1_ptr[0] = a1_lo;
 a1_ptr[1] = a1_hi;
 return a1;
 }
 a1_hi |= 0x100000u;
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
 a1_ptr[1] = v16 | (v20 << 11) | (v19 >> 21);
 a1_ptr[0] = (v19 << 11) | (v17 >> 21);
 v24 = v17 << 11;
 v25 = v21 <= 253;
 if ( (unsigned int)v21 > 0xFD )
 v25 = v21 - 253 <= 1792;
 if ( !v25 )
 {
 v26 = v24 >= 0x80000000;
 if ( v24 == 0x80000000 )
 v26 = a1_lo & 1;
 a1_lo = v26 + a1_lo;
 a1_ptr[0] = a1_lo;
 a1_ptr[1] = a1_hi;
 return a1;
 }
 }
 if ( !v25 )
 JUMPOUT(0x11614);
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
 v32 = a1_lo << (32 - v31);
 a1_lo = ((a1_lo >> v31) | (a1_hi << (32 - v31))) + (v32 >> 31);
 if ( !(v24 | (2 * v32)) )
 a1_lo = a1_lo & ~(v32 >> 31);
 }
 else
 {
 v33 = 12 - v30;
 v34 = a1_lo << v33;
 a1_lo = ((a1_lo >> (32 - v33)) | (a1_hi << v33)) + (a1_lo << v33 >> 31);
 if ( !(v24 | (2 * v34)) )
 a1_lo = a1_lo & ~(v34 >> 31);
 }
 }
 else
 {
 v35 = v24 | (a1_lo << (32 - v29));
 v36 = (a1_lo >> v29) | (a1_ptr[1] << (32 - v29));
 a1_lo = ((a1_ptr[1] >> v29) & ~((a1_ptr[1] & 0x80000000) >> v29)) + (v36 >> 31);
 if ( !(v35 | (2 * v36)) )
 a1_lo = a1_lo & ~(v36 >> 31);
 }
 }
 else
 {
 a1_lo = 0;
 }
 a1_ptr[0] = a1_lo;
 a1_ptr[1] = a1_hi;
 return a1;
}


/* Function: sub_115A8 @ 0x115A8 */
int sub_115A8(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
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


/* Function: __mulsf3 @ 0x11634 */
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


/* Function: __aeabi_drsub @ 0x117CC */
double _aeabi_drsub(double a1, double a2)
{
 unsigned int a1_hi;
 unsigned int a1_lo;
 unsigned int *a1_ptr;
 a1_ptr = (unsigned int*)&a1;
 a1_hi = a1_ptr[1];
 a1_lo = a1_ptr[0];
 a1_hi ^= 0x80000000;
 a1_ptr[1] = a1_hi;
 return a1 + a2;
}


/* Function: __subdf3 @ 0x117D4 */
double _subdf3(double a1, double a2)
{
 unsigned int a2_hi;
 unsigned int a2_lo;
 unsigned int *a2_ptr;
 a2_ptr = (unsigned int*)&a2;
 a2_hi = a2_ptr[1];
 a2_lo = a2_ptr[0];
 a2_hi ^= 0x80000000;
 a2_ptr[1] = a2_hi;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x11A84 */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x11920);
 return result;
}


/* Function: __floatsidf @ 0x11AA8 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x11920);
 return result;
}


/* Function: __extendsfdf2 @ 0x11AD0 */
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
 JUMPOUT(0x11920);
 }
 return result;
}


/* Function: __floatundidf @ 0x11B18 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11B48);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __aeabi_frsub @ 0x11B8C */
float _aeabi_frsub(int a1, float a2)
{
 return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x11B94 */
float _subsf3(float a1, int a2)
{
 return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}



/* CRT stub function __aeabi_fadd removed by preprocessor */



/* Function: __floatunsisf @ 0x11D28 */
void _floatunsisf()
{
 JUMPOUT(0x11D38);
}


/* Function: __floatsisf @ 0x11D30 */
int _floatsisf(int result)
{
 if ( result < 0 )
 result = -result;
 if ( result )
 JUMPOUT(0x11D90);
 return result;
}


/* Function: __floatundisf @ 0x11D50 */
int _floatundisf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11D78);
 return a1;
}



/* CRT stub function __floatdisf removed by preprocessor */



/* Function: __fixsfsi @ 0x11DDC */
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


/* Function: .term_proc @ 0x11E38 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x23044 */

/* FAILED to decompile: __imp_memset @ 0x23048 */

/* FAILED to decompile: __imp___printf_chk @ 0x2304C */

/* FAILED to decompile: __imp_abort @ 0x23050 */

/* FAILED to decompile: __imp___libc_start_main @ 0x23054 */

/* FAILED to decompile: __imp_memcpy @ 0x23058 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x2305C */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23060 */

/* Total functions decompiled: 85, failed: 8 */
