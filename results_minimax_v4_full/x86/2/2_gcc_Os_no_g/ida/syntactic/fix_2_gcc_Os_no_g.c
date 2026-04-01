/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/2/2_gcc_Os_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <x86intrin.h>

/* Define HIDWORD and SHIDWORD macros for 64-bit to 32-bit extraction */
#define HIDWORD(x) ((uint32_t)(((uint64_t)(x)) >> 32))
#define SHIDWORD(x) ((int32_t)(((uint64_t)(x)) >> 32))

/* Define __readgsdword if not available (x86 stack canary read) */
#ifndef __readgsdword
#define __readgsdword(offset) (*(volatile unsigned int *)((char *)__builtin_frame_address(0) + (offset)))
#endif

/* External declarations - removed CRT stubs */
extern void *_gmon_start__;

/* String literals */
static const char asc_3008[] = "Testing data types...";
static const char asc_3173[] = "Testing array types...";
static const char asc_3289[] = "Testing pointer types...";
static const char asc_3422[] = "Testing composite types...";

/* Data */
static const unsigned char unk_360C[20] = {0};




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
int sub_1080(int a1)
{
 return (*(int (**)(void))(a1 + 32))();
}


/* Function: main @ 0x10D0 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_112C @ 0x112C */
void sub_112C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1130 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1269 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x126D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: double_value @ 0x1271 */
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: process_int @ 0x127F */
int process_int(int a1)
{
 return 2 * a1 + 1;
}


/* Function: complex_callback @ 0x128E */
int complex_callback(unsigned int *a1, unsigned int *a2)
{
 *a1 += 10;
 return *a2 != 0;
}


/* Function: process_char @ 0x12A9 */
int process_char(int a1)
{
 int v1; // edx

 v1 = a1 + 32;
 if ( (unsigned char)(a1 - 65) > 0x19u )
 return a1;
 return v1;
}


/* Function: process_short @ 0x12C4 */
int process_short(int a1, int a2)
{
 return a1 + a2;
}


/* Function: process_long @ 0x12D3 */
int process_long(int a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x12E1 */
int process_ll(int a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x12FA */
long double process_float(float a1)
{
 return 1.5 * a1 + 0.5;
}


/* Function: process_double @ 0x1322 */
long double process_double(double a1)
{
 return 0.5 * a1 + 0.1;
}


/* Function: process_ld @ 0x134C */
long double process_ld(long double a1)
{
 return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x135E */
int process_bool(int a1)
{
 bool v1; // al

 v1 = 0;
 if ( a1 > 0 )
 return (a1 & 1) == 0;
 return v1;
}


/* Function: const_param @ 0x137A */
int const_param(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: volatile_access @ 0x138B */
int volatile_access(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: test_data_types_l1 @ 0x139D */
int test_data_types_l1()
{
 puts(asc_3008);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 0);
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", -858993459);
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 return __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x14EC */
int array_1d_stack(int a1, int a2)
{
 int v2; // eax
 int v3; // edx

 v2 = 0;
 v3 = 0;
 while ( v2 < a2 )
 v3 += *(unsigned int *)(a1 + 4 * v2++);
 return v3;
}


/* Function: array_string @ 0x1509 */
int array_string(int a1)
{
 int result; // eax

 for ( result = 0; *(unsigned char *)(a1 + result); ++result )
 ;
 return result;
}


/* Function: array_2d_stack @ 0x1520 */
int array_2d_stack(unsigned int *a1)
{
 int v1; // edx
 unsigned int *v2; // eax

 v1 = 0;
 v2 = a1;
 do
 {
 v1 += *v2;
 v2 += 11;
 }
 while ( v2 != a1 + 110 );
 return v1;
}


/* Function: array_3d @ 0x153F */
int array_3d(unsigned int *a1)
{
 int result; // eax
 unsigned int *v2; // edx
 unsigned int *v3; // ecx
 int v4; // eax

 result = 0;
 v2 = a1;
 do
 {
 v3 = v2 + 25;
 do
 {
 v4 = *v2 + result;
 v2 += 5;
 result = *(v2 - 1) + *(v2 - 2) + *(v2 - 3) + *(v2 - 4) + v4;
 }
 while ( v2 != v3 );
 }
 while ( a1 + 125 != v2 );
 return result;
}


/* Function: array_vla @ 0x1571 */
int array_vla(int a1, int a2)
{
 int v2; // eax
 int v3; // edx

 v2 = 0;
 v3 = 0;
 while ( v2 < a1 )
 v3 += *(unsigned int *)(a2 + 4 * v2++);
 return v3;
}


/* Function: array_pointer @ 0x158E */
int array_pointer(int a1, int a2)
{
 int v2; // eax
 int v3; // edx
 int v4; // ebx

 v2 = 0;
 v3 = 0;
 while ( v2 < a2 )
 {
 v4 = 40 * v2++;
 v3 += *(unsigned int *)(a1 + v4);
 }
 return v3;
}


/* Function: pointer_array @ 0x15B0 */
int pointer_array(int a1, int a2)
{
 int v2; // ecx
 int i; // rax
 unsigned int *v4; // ebx

 v2 = 10;
 if ( a2 <= 10 )
 v2 = a2;
 for ( i = 0; i < v2; ++i )
 {
 v4 = *(unsigned int **)(a1 + 4 * i);
 if ( v4 )
 i = *v4 + i;
 }
 return i;
}


/* Function: array_complex_index @ 0x15E1 */
int array_complex_index(int a1, int a2, int a3, long long a4)
{
 int result; // eax

 result = -1;
 if ( (int)(HIDWORD(a4) | a4) >= 0 && (int)a4 < a2 && SHIDWORD(a4) < a3 )
 return *(unsigned int *)(a1 + 4 * (a4 + HIDWORD(a4) * a2));
 return result;
}


/* Function: array_oob @ 0x1615 */
int array_oob(int a1, int a2)
{
 int v2; // eax
 int v3; // edx

 v2 = 0;
 v3 = 0;
 while ( v2 <= a2 )
 v3 += *(unsigned int *)(a1 + 4 * v2++);
 return v3;
}


/* Function: test_array_types @ 0x1632 */
// bad sp value at call has been detected, the output may be wrong!
void test_array_types()
{
 int v0; // eax
 int v1; // eax
 unsigned int *v2; // edx
 int i; // ecx
 int j; // eax
 int v5; // edi
 int v6; // eax
 char *v7; // edx
 char *v8; // eax
 int v9; // ecx
 int v10; // eax
 int v11; // eax
 int v12; // eax
 int v13; // eax
 int k; // eax
 int v16; // [esp+0h] [ebp-514h] BYREF
 int v17; // [esp+4h] [ebp-510h] BYREF
 int v18; // [esp+8h] [ebp-50Ch] BYREF
 unsigned int v19[3]; // [esp+Ch] [ebp-508h] BYREF
 unsigned char v20[20]; // [esp+18h] [ebp-4FCh] BYREF
 unsigned int v21[30]; // [esp+2Ch] [ebp-4E8h] BYREF
 unsigned int v22[50]; // [esp+A4h] [ebp-470h] BYREF
 unsigned int v23[100]; // [esp+16Ch] [ebp-3A8h] BYREF
 unsigned int v24[125]; // [esp+2FCh] [ebp-218h] BYREF
 char v25; // [esp+4F0h] [ebp-24h] BYREF
 char v26[6]; // [esp+4F2h] [ebp-22h] BYREF
 unsigned int v27; // [esp+4F8h] [ebp-1Ch]
 int v28; // [esp+504h] [ebp-10h]

 v27 = __readgsdword(0x14u);
 puts(asc_3173);
 memcpy(v20, &unk_360C, sizeof(v20));
 v0 = array_1d_stack((int)v20, 5);
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v0);
 strcpy(v26, "hello");
 v1 = array_string((int)v26);
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v1);
 v2 = v23;
 for ( i = 0; i != 10; ++i )
 {
 for ( j = 0; j != 10; ++j )
 {
 v5 = 0;
 if ( j == i )
 v5 = j;
 v2[j] = v5;
 }
 v2 += 10;
 }
 v6 = array_2d_stack(v23);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v6);
 v7 = (char *)v24;
 do
 {
 v8 = v7;
 v9 = 0;
 do
 {
 ++v9;
 *(unsigned int *)v8 = 1;
 v8 += 20;
 *((unsigned int *)v8 - 4) = 1;
 *((unsigned int *)v8 - 3) = 1;
 *((unsigned int *)v8 - 2) = 1;
 *((unsigned int *)v8 - 1) = 1;
 }
 while ( v9 != 5 );
 v7 += 100;
 }
 while ( &v25 != v7 );
 v10 = array_3d(v24);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v10);
 v19[0] = 10;
 v19[1] = 20;
 v19[2] = 30;
 v11 = array_vla(3, (int)v19);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", v11);
 v22[0] = 0;
 v22[10] = 10;
 v22[20] = 20;
 v22[30] = 30;
 v22[40] = 40;
 v12 = array_pointer((int)v22, 5);
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", v12);
 v16 = 10;
 memset(&v21[3], 0, 0x1Cu);
 v17 = 20;
 v21[0] = &v16;
 v21[1] = &v17;
 v21[2] = &v18;
 v18 = 30;
 v13 = pointer_array((int)v21, 3);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v13);
 for ( k = 0; k != 20; ++k )
 v21[k + 10] = k;
 v28 = 20;
 __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v21[27]);
 return v27 - __readgsdword(0x14u);
}


/* Function: ptr_single @ 0x18AF */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0x18C0 */
int ptr_double(unsigned int **a1)
{
 return **a1 + 5;
}


/* Function: ptr_triple @ 0x18D3 */
int ptr_triple(unsigned int ***a1)
{
 return ***a1 + 1;
}


/* Function: ptr_increment @ 0x18E6 */
int ptr_increment(int a1, int a2)
{
 int v2; // eax
 int v3; // edx

 v2 = 0;
 v3 = 0;
 while ( v2 < a2 )
 v3 += *(unsigned int *)(a1 + 4 * v2++);
 return v3;
}


/* Function: ptr_offset @ 0x1903 */
int ptr_offset(int a1, int a2)
{
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0x1915 */
int ptr_diff(int a1, int a2)
{
 return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x1927 */
int ptr_void(char *a1, int a2)
{
 int result; // eax

 if ( !a2 )
 return *(unsigned int *)a1;
 result = -1;
 if ( a2 == 1 )
 return *a1;
 return result;
}


/* Function: ptr_const @ 0x1947 */
int ptr_const(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0x1957 */
int ptr_const_ptr(int *a1)
{
 int result; // eax

 result = *a1 + 5;
 *a1 = result;
 return result;
}


/* Function: ptr_func_simple @ 0x196A */
int ptr_func_simple(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0x197D */
int ptr_func_complex(int ( *a1)(int, unsigned int *, int, int, int), int a2)
{
 int v3; // [esp-24h] [ebp-24h]
 int v4; // [esp-20h] [ebp-20h]
 int v5; // [esp-1Ch] [ebp-1Ch]
 unsigned int v6[6]; // [esp-18h] [ebp-18h] BYREF

 v6[2] = __readgsdword(0x14u);
 v6[1] = 0;
 v6[0] = "test";
 return a1(a2, v6, v3, v4, v5);
}


/* Function: ptr_cast @ 0x19CA */
int ptr_cast(int a1)
{
 return *(unsigned int *)a1;
}


/* Function: opaque_handle_create @ 0x19D8 */
int opaque_handle_create(int a1)
{
 return a1;
}


/* Function: opaque_handle_op @ 0x19E4 */
int opaque_handle_op(int a1)
{
 return 2 * a1;
}


/* Function: test_pointer_types @ 0x19F2 */
// bad sp value at call has been detected, the output may be wrong!
int test_pointer_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 unsigned int **v5; // [esp+8h] [ebp-38h] BYREF
 int v6; // [esp+Ch] [ebp-34h] BYREF
 unsigned char v7[20]; // [esp+10h] [ebp-30h] BYREF
 int v8; // [esp+24h] [ebp-1Ch]

 puts(asc_3289);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 v0 = ptr_triple(&v5);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", v0);
 v1 = ptr_increment((int)v7, 5);
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v1);
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 v2 = ptr_func_simple(double_value, 5);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", v2);
 v3 = ptr_func_complex((int ( *)(int, unsigned int *, int, int, int))complex_callback, (int)&v6);
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", v3);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
 return v8 - __readgsdword(0x14u);
}


/* Function: struct_simple @ 0x1BA4 */
int struct_simple(unsigned int *a1)
{
 return a1[2] + *a1 + a1[1];
}


/* Function: struct_array @ 0x1BB8 */
int struct_array(unsigned int *a1, int a2)
{
 int v2; // ecx
 int i; // ebx
 int v5; // edx

 v2 = 0;
 for ( i = 0; i < a2; ++i )
 {
 v5 = *a1 + a1[1];
 a1 += 3;
 v2 += *(a1 - 1) + v5;
 }
 return v2;
}


/* Function: struct_nested @ 0x1BE1 */
int struct_nested(unsigned int *a1)
{
 return *a1 + a1[3];
}


/* Function: struct_deep @ 0x1BF2 */
int struct_deep(int a1)
{
 return *(unsigned int *)(a1 + 8) + *(unsigned int *)(a1 + 20);
}


/* Function: struct_with_ptr @ 0x1C04 */
int struct_with_ptr(unsigned int *a1)
{
 int *v1; // ecx
 int v2; // edx

 v1 = (int *)a1[1];
 v2 = 0;
 if ( v1 )
 v2 = *v1;
 return v2 + *a1;
}


/* Function: struct_bitfields @ 0x1C1F */
int struct_bitfields(unsigned int *a1)
{
 return ((unsigned short)*a1 >> 6) + ((*(unsigned char *)a1 >> 3) & 7) + ((*(unsigned char *)a1 >> 1) & 3) + (*(unsigned char *)a1 & 1);
}


/* Function: union_type @ 0x1C50 */
int union_type(char *a1, int a2)
{
 if ( !a2 )
 return *(unsigned int *)a1;
 if ( a2 == 1 )
 return (int)*(float *)a1;
 return *a1;
}


/* Function: union_array @ 0x1C8E */
int union_array(int a1, int a2)
{
 int v2; // eax
 int v3; // edx

 v2 = 0;
 v3 = 0;
 while ( v2 < a2 )
 v3 += *(unsigned int *)(a1 + 4 * v2++);
 return v3;
}


/* Function: enum_type @ 0x1CAB */
int enum_type(int a1)
{
 return 10 * a1;
}


/* Switch table for enum_switch */
static const int CSWTCH_78[] = {50, -20, 30, 10};

/* Function: enum_switch @ 0x1CB8 */
int enum_switch(unsigned int a1)
{
 int result; // eax

 result = -99;
 if ( a1 <= 3 )
 return CSWTCH_78[a1];
 return result;
}


/* Function: struct_func_ptr @ 0x1CE1 */
int struct_func_ptr(int a1)
{
 return (*(int ( **)(unsigned int))(a1 + 4))(*(unsigned int *)a1);
}


/* Function: linked_list @ 0x1CF6 */
int linked_list(unsigned int *a1)
{
 int v1; // edx

 v1 = 0;
 while ( a1 )
 {
 v1 += *a1;
 a1 = (unsigned int *)a1[1];
 }
 return v1;
}


/* Function: doubly_linked_list @ 0x1D11 */
int doubly_linked_list(unsigned int *a1)
{
 int v1; // edx

 v1 = 0;
 while ( a1 )
 {
 v1 += *a1;
 a1 = (unsigned int *)a1[1];
 }
 return v1;
}


/* Function: binary_tree_sum @ 0x1D2C */
int binary_tree_sum(unsigned int *a1)
{
 int v1; // esi
 int v3; // eax

 v1 = 0;
 while ( a1 )
 {
 v3 = *a1 + binary_tree_sum(a1[1]);
 a1 = (unsigned int *)a1[2];
 v1 += v3;
 }
 return v1;
}


/* Function: binary_tree @ 0x1D5E */
int binary_tree(unsigned int *a1)
{
 return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x1D64 */
int graph_traverse(int a1)
{
 int v1; // eax
 int v2; // ecx
 unsigned int *i; // edx

 v1 = 0;
 v2 = 0;
 while ( *(unsigned int *)(a1 + 40) > v1 )
 {
 for ( i = *(unsigned int **)(a1 + 4 * v1); i; i = (unsigned int *)i[1] )
 v2 += *i;
 ++v1;
 }
 return v2;
}


/* Function: test_composite_types @ 0x1D92 */
// bad sp value at call has been detected, the output may be wrong!
void test_composite_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v10; // [esp+14h] [ebp-C8h] BYREF
 int v11; // [esp+1Ch] [ebp-C0h] BYREF
 int v12; // [esp+24h] [ebp-B8h] BYREF
 int v13; // [esp+34h] [ebp-A8h] BYREF
 unsigned char v14[12]; // [esp+40h] [ebp-9Ch] BYREF
 unsigned int v15[6]; // [esp+4Ch] [ebp-90h] BYREF
 int v16; // [esp+64h] [ebp-78h] BYREF
 int v17; // [esp+7Ch] [ebp-60h] BYREF
 unsigned int v18[18]; // [esp+94h] [ebp-48h] BYREF

 puts(asc_3422);
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 v0 = struct_array(v15, 2);
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", v0);
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 v1 = struct_with_ptr(&v10);
 __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", v1);
 v2 = struct_bitfields(&v11);
 __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", v2);
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 v3 = union_array((int)v14, 3);
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", v3);
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 v4 = struct_func_ptr((int)&v12);
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", v4);
 v5 = linked_list(&v16);
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v5);
 v6 = doubly_linked_list(&v17);
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v6);
 v7 = binary_tree_sum(&v13);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v7);
 memset(&v18[1], 0, 0x24u);
 v8 = graph_traverse((int)v18);
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", v8);
 return v18[11] - __readgsdword(0x14u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x2091 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x2095 */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x20A0 */
void _stack_chk_fail_local()
{
 /* Stack check failed - abort */
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x210C */
void term_proc()
{
 /* CRT stub _do_global_dtors_aux called here - empty for this binary */
}


/* FAILED to decompile: __libc_start_main @ 0x6014 */

/* FAILED to decompile: __stack_chk_fail @ 0x6018 */

/* FAILED to decompile: __cxa_finalize @ 0x601C */

/* FAILED to decompile: puts @ 0x6020 */

/* FAILED to decompile: __printf_chk @ 0x6024 */

/* Total functions decompiled: 78, failed: 5 */
