/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/2/2_clang_Os_no_g
 * Processor: pc
 */

#include <stdbool.h>
#include <string.h>

static const char *asc_25BF = "=== Data Types Test ===";
static const char *asc_25E0 = "=== Array Types Test ===";
static const char *asc_25FB = "=== Pointer Types Test ===";
static const char *asc_2616 = "=== Composite Types Test ===";
static unsigned int dword_0 = 0;
static unsigned int dword_64 = 64;
static const unsigned int unk_2634[5] = {1, 2, 3, 4, 0};
static const int dword_2654[4] = {10, 20, 30, 40};

/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%ebx)");
}


/* Function: sub_1070 @ 0x1070 */
int sub_1070(int a1)
{
 return (*(int (**)(void))(a1 - 20))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_10AC @ 0x10AC */
void sub_10AC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x10B0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x11E9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x11ED */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: process_char @ 0x11F4 */
int process_char(int a1)
{
 int result; // eax

 result = (unsigned char)(a1 + 32);
 if ( (unsigned char)(a1 - 65) >= 0x1Au )
 return a1;
 return result;
}


/* Function: process_short @ 0x120A */
short process_short(short a1, short a2)
{
 return a1 + a2;
}


/* Function: process_int @ 0x1215 */
int process_int(int a1)
{
 return 2 * a1 + 1;
}


/* Function: process_long @ 0x121D */
int process_long(int a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x1224 */
long long process_ll(long long a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x123A */
long double process_float(float a1)
{
 return a1 * 1.5 + 0.5;
}


/* Function: process_double @ 0x1257 */
long double process_double(double a1)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1274 */
long double process_ld(long double a1)
{
 return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x127F */
bool process_bool(int a1)
{
 return a1 > 0 && (a1 & 1) == 0;
}


/* Function: const_param @ 0x1290 */
int const_param(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: volatile_access @ 0x129A */
int volatile_access(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: test_data_types_l1 @ 0x12A3 */
int test_data_types_l1()
{
 long double v1; // [esp+4h] [ebp-28h]

 puts(asc_25BF);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000, 0);
 printf("DT-L1-06 (process_float): %.2f\n", 0, 1074528256);
 printf("DT-L1-07 (process_double): %.2f\n", -858993459, 1073794252);
 v1 = 10.0;
 printf("DT-L1-08 (process_ld): %.2Lf\n", v1);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 return printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x13D6 */
int array_1d_stack(int a1, int a2)
{
 int v2; // esi
 int result; // eax

 if ( a2 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += *(unsigned int *)(a1 + 4 * v2++);
 while ( a2 != v2 );
 return result;
}


/* Function: array_string @ 0x13F5 */
int array_string(int a1)
{
 int result; // eax

 result = -1;
 while ( *(unsigned char *)(a1 + result++ + 1) != 0 )
 ;
 return result;
}


/* Function: array_2d_stack @ 0x1407 */
int array_2d_stack(int a1)
{
 int v1; // ecx
 int result; // eax

 v1 = 0;
 result = 0;
 do
 {
 result += *(unsigned int *)(a1 + v1);
 v1 += 44;
 }
 while ( v1 != 440 );
 return result;
}


/* Function: array_3d @ 0x141E */
int array_3d(int a1)
{
 int v1; // ecx
 int result; // eax
 int v4; // esi
 int i; // edi
 int j; // ebx

 v1 = 0;
 result = 0;
 do
 {
 v4 = a1;
 for ( i = 0; i != 5; ++i )
 {
 for ( j = 0; j != 5; ++j )
 result += *(unsigned int *)(v4 + 4 * j);
 v4 += 20;
 }
 ++v1;
 a1 += 100;
 }
 while ( v1 != 5 );
 return result;
}


/* Function: array_vla @ 0x144E */
int array_vla(int a1, int a2)
{
 int v2; // esi
 int result; // eax

 if ( a1 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += *(unsigned int *)(a2 + 4 * v2++);
 while ( a1 != v2 );
 return result;
}


/* Function: array_pointer @ 0x146D */
int array_pointer(unsigned int *a1, int a2)
{
 int v2; // ecx
 int result; // eax

 v2 = a2;
 if ( a2 <= 0 )
 return 0;
 result = 0;
 do
 {
 result += *a1;
 a1 += 10;
 --v2;
 }
 while ( v2 );
 return result;
}


/* Function: pointer_array @ 0x1487 */
int pointer_array(int a1, int a2)
{
 int v2; // edx
 int v3; // esi
 int result; // eax
 unsigned int *v5; // edi

 if ( a2 <= 0 )
 return 0;
 v2 = 10;
 if ( (unsigned int)a2 < 0xA )
 v2 = a2;
 v3 = 0;
 result = 0;
 do
 {
 v5 = *(unsigned int **)(a1 + 4 * v3);
 if ( v5 )
 result += *v5;
 ++v3;
 }
 while ( v2 != v3 );
 return result;
}


/* Function: array_complex_index @ 0x14B9 */
int array_complex_index(int a1, int a2, int a3, int a4, int a5)
{
 int result; // eax

 result = -1;
 if ( a4 >= 0 && a5 < a3 && a4 < a2 && a5 >= 0 )
 return *(unsigned int *)(a1 + 4 * (a4 + a2 * a5));
 return result;
}


/* Function: array_oob @ 0x14E9 */
int array_oob(int a1, int a2)
{
 int v2; // esi
 int result; // eax

 if ( a2 < 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += *(unsigned int *)(a1 + 4 * v2++);
 while ( a2 + 1 != v2 );
 return result;
}


/* Function: test_array_types @ 0x1509 */
int test_array_types()
{
 int v0; // eax
 unsigned int *v1; // ecx
 int i; // edx
 int v3; // esi
 int v4; // ecx
 int v5; // eax
 int v6; // eax
 unsigned char *v7; // ecx
 unsigned char *v8; // edx
 int j; // esi
 int k; // edi
 int v11; // eax
 unsigned char *v12; // edx
 int v13; // ecx
 unsigned char *v14; // esi
 int m; // edi
 int n; // ebp
 int ii; // eax
 int v18; // ecx
 int v19; // eax
 unsigned int *v20; // ecx
 int v21; // eax
 int v22; // edx
 int jj; // eax
 unsigned int v25[9]; // [esp+10h] [ebp-4DCh] BYREF
 int v26; // [esp+34h] [ebp-4B8h] BYREF
 int v27; // [esp+38h] [ebp-4B4h] BYREF
 unsigned int v28[71]; // [esp+3Ch] [ebp-4B0h] BYREF
 unsigned int v29[100]; // [esp+158h] [ebp-394h] BYREF
 unsigned char v30[516]; // [esp+2E8h] [ebp-204h] BYREF

 puts(asc_25E0);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 v0 = 0;
 v1 = v29;
 do
 {
 for ( i = 0; i != 10; ++i )
 {
 v3 = 0;
 if ( v0 == i )
 v3 = v0;
 v1[i] = v3;
 }
 ++v0;
 v1 += 10;
 }
 while ( v0 != 10 );
 v4 = 0;
 v5 = 0;
 do
 {
 v5 += v29[v4];
 v4 += 11;
 }
 while ( v4 != 110 );
 printf("ARR-L1-03 (array_2d_stack): %d\n", v5);
 v6 = 0;
 v7 = v30;
 do
 {
 v8 = v7;
 for ( j = 0; j != 5; ++j )
 {
 for ( k = 0; k != 5; ++k )
 *(unsigned int *)&v8[4 * k] = 1;
 v8 += 20;
 }
 ++v6;
 v7 += 100;
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
 for ( n = 0; n != 5; ++n )
 v13 += *(unsigned int *)&v14[4 * n];
 v14 += 20;
 }
 ++v11;
 v12 += 100;
 }
 while ( v11 != 5 );
 printf("ARR-L1-04 (array_3d): %d\n", v13);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 for ( ii = 0; ii != 50; ii += 10 )
 v28[ii + 21] = ii;
 v18 = 0;
 v19 = 0;
 do
 {
 v19 += v28[v18 + 21];
 v18 += 10;
 }
 while ( v18 != 50 );
 printf("ARR-L2-02 (array_pointer): %d\n", v19);
 v20 = v28;
 v28[0] = 10;
 v27 = 20;
 v26 = 30;
 v25[0] = &v27;
 v25[1] = &v26;
 v21 = 0;
 memset(&v25[2], 0, 28);
 v22 = 0;
 while ( 1 )
 {
 if ( v20 )
 v22 += *v20;
 if ( v21 == 2 )
 break;
 v20 = (unsigned int *)v25[v21++];
 }
 printf("ARR-L2-03 (pointer_array): %d\n", v22);
 for ( jj = 0; jj != 20; ++jj )
 v28[jj + 1] = jj;
 return printf("ARR-L2-04 (array_complex_index): %d\n", v28[18]);
}


/* Function: ptr_single @ 0x1701 */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0x170B */
int ptr_double(unsigned int **a1)
{
 return **a1 + 5;
}


/* Function: ptr_triple @ 0x1717 */
int ptr_triple(unsigned int ***a1)
{
 return ***a1 + 1;
}


/* Function: ptr_increment @ 0x1723 */
int ptr_increment(int a1, int a2)
{
 int v2; // esi
 int result; // eax

 if ( a2 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += *(unsigned int *)(a1 + 4 * v2++);
 while ( a2 != v2 );
 return result;
}


/* Function: ptr_offset @ 0x1742 */
int ptr_offset(int a1, int a2)
{
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0x174E */
int ptr_diff(int a1, int a2)
{
 return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x175A */
int ptr_void(char *a1, int a2)
{
 if ( a2 == 1 )
 return *a1;
 if ( a2 )
 return -1;
 return *(unsigned int *)a1;
}


/* Function: ptr_const @ 0x1776 */
int ptr_const(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0x177F */
int ptr_const_ptr(int *a1)
{
 int result; // eax

 result = *a1 + 5;
 *a1 = result;
 return result;
}


/* Function: ptr_func_simple @ 0x178B */
int ptr_func_simple(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0x17AB */
int ptr_func_complex(int ( *a1)(int, unsigned int *), int a2)
{
 unsigned int v3[5]; // [esp+8h] [ebp-14h] BYREF

 v3[1] = &dword_0;
 v3[0] = "test";
 return a1(a2, v3);
}


/* Function: ptr_cast @ 0x17E4 */
int ptr_cast(int a1)
{
 return *(unsigned int *)a1;
}


/* Function: opaque_handle_create @ 0x17EB */
int opaque_handle_create(int a1)
{
 return a1;
}


/* Function: opaque_handle_op @ 0x17F0 */
int opaque_handle_op(int a1)
{
 return 2 * a1;
}


/* Function: test_pointer_types @ 0x17F7 */
int test_pointer_types()
{
 int v0; // eax
 int i; // ecx
 unsigned int v3[8]; // [esp+Ch] [ebp-20h] BYREF

 puts(asc_25FB);
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 memcpy(v3, &unk_2634, 0x14u);
 v0 = 1;
 for ( i = 0; i != 4; ++i )
 v0 += v3[i + 1];
 printf("PTR-L2-04 (ptr_increment): %d\n", v0);
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


/* Function: struct_simple @ 0x1962 */
int struct_simple(unsigned int *a1)
{
 return a1[2] + *a1 + a1[1];
}


/* Function: struct_array @ 0x196F */
int struct_array(int a1, int a2)
{
 int v2; // ecx
 unsigned int *v3; // edx
 int result; // eax

 v2 = a2;
 if ( a2 <= 0 )
 return 0;
 v3 = (unsigned int *)(a1 + 8);
 result = 0;
 do
 {
 result += *v3 + *(v3 - 1) + *(v3 - 2);
 v3 += 3;
 --v2;
 }
 while ( v2 );
 return result;
}


/* Function: struct_nested @ 0x1992 */
int struct_nested(unsigned int *a1)
{
 return *a1 + a1[3];
}


/* Function: struct_deep @ 0x199C */
int struct_deep(int a1)
{
 return *(unsigned int *)(a1 + 8) + *(unsigned int *)(a1 + 20);
}


/* Function: struct_with_ptr @ 0x19A7 */
int struct_with_ptr(unsigned int *a1)
{
 int *v1; // eax
 int v2; // eax

 v1 = (int *)a1[1];
 if ( v1 )
 v2 = *v1;
 else
 v2 = 0;
 return *a1 + v2;
}


/* Function: struct_bitfields @ 0x19BD */
int struct_bitfields(unsigned short *a1)
{
 return (((unsigned short)*a1 >> 3) & 7)
 + (((unsigned short)*a1 >> 1) & 3)
 + (*a1 & 1)
 + ((unsigned short)*a1 >> 6);
}


/* Function: union_type @ 0x19E4 */
int union_type(char *a1, int a2)
{
 if ( a2 == 1 )
 return (int)*(float *)a1;
 if ( a2 )
 return *a1;
 return *(unsigned int *)a1;
}


/* Function: union_array @ 0x1A27 */
int union_array(int a1, int a2)
{
 int v2; // esi
 int result; // eax

 if ( a2 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += *(unsigned int *)(a1 + 4 * v2++);
 while ( a2 != v2 );
 return result;
}


/* Function: enum_type @ 0x1A46 */
int enum_type(int a1)
{
 return 10 * a1;
}


/* Function: enum_switch @ 0x1A50 */
int enum_switch(unsigned int a1)
{
 int result; // eax

 result = -99;
 if ( a1 <= 3 )
 return dword_2654[a1];
 return result;
}


/* Function: struct_func_ptr @ 0x1A72 */
int struct_func_ptr(int a1)
{
 return (*(int ( **)(unsigned int))(a1 + 4))(*(unsigned int *)a1);
}


/* Function: linked_list @ 0x1A93 */
int linked_list(unsigned int *a1)
{
 int result; // eax

 result = 0;
 while ( a1 )
 {
 result += *a1;
 a1 = (unsigned int *)a1[1];
 }
 return result;
}


/* Function: doubly_linked_list @ 0x1AA5 */
int doubly_linked_list(unsigned int *a1)
{
 int result; // eax

 result = 0;
 while ( a1 )
 {
 result += *a1;
 a1 = (unsigned int *)a1[1];
 }
 return result;
}


/* Function: binary_tree_sum @ 0x1AB7 */
int binary_tree_sum(unsigned int *a1)
{
 int v2; // esi
 int v3; // esi
 int v4; // eax

 v2 = 0;
 while ( a1 )
 {
 v3 = *a1 + v2;
 v4 = binary_tree_sum(a1[1]);
 a1 = (unsigned int *)a1[2];
 v2 = v4 + v3;
 }
 return v2;
}


/* Function: binary_tree @ 0x1AF0 */
int binary_tree(unsigned int *a1)
{
 return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x1B11 */
int graph_traverse(int a1)
{
 int v1; // edx
 int v2; // esi
 int result; // eax
 unsigned int *i; // edi

 v1 = *(unsigned int *)(a1 + 40);
 if ( v1 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 {
 for ( i = *(unsigned int **)(a1 + 4 * v2); i; i = (unsigned int *)i[1] )
 result += *i;
 ++v2;
 }
 while ( v2 != v1 );
 return result;
}


/* Function: test_composite_types @ 0x1B3C */
int test_composite_types()
{
 int *v0; // eax
 int v1; // ecx
 unsigned int *v2; // ecx
 int v3; // eax
 int v4; // eax
 int *v5; // esi
 int v6; // edx
 int v7; // eax
 int v9; // [esp+8h] [ebp-84h] BYREF
 int v10; // [esp+Ch] [ebp-80h]
 int v11; // [esp+10h] [ebp-7Ch] BYREF
 int *v12; // [esp+14h] [ebp-78h]
 int v13; // [esp+18h] [ebp-74h] BYREF
 int *v14; // [esp+1Ch] [ebp-70h]
 int v15; // [esp+20h] [ebp-6Ch] BYREF
 int v16; // [esp+24h] [ebp-68h]
 unsigned int v17[4]; // [esp+28h] [ebp-64h] BYREF
 unsigned int v18[3]; // [esp+38h] [ebp-54h] BYREF
 unsigned int v19[3]; // [esp+44h] [ebp-48h] BYREF
 unsigned int v20[15]; // [esp+50h] [ebp-3Ch] BYREF

 puts(asc_2616);
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
 v0 = &v11;
 v11 = 10;
 v12 = &v13;
 v13 = 20;
 v14 = &v15;
 v15 = 30;
 v16 = 0;
 v1 = 0;
 do
 {
 v1 += *v0;
 v0 = (int *)v0[1];
 }
 while ( v0 );
 printf("CMP-L2-12 (linked_list): %d\n", v1);
 v2 = v18;
 v18[0] = 10;
 v3 = 0;
 v18[2] = 0;
 v19[0] = 20;
 v19[1] = 0;
 v19[2] = v18;
 v18[1] = v19;
 do
 {
 v3 += *v2;
 v2 = (unsigned int *)v2[1];
 }
 while ( v2 );
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v3);
 v17[2] = 0;
 v17[1] = 0;
 v17[0] = &dword_64;
 v4 = binary_tree_sum(v17);
 printf("CMP-L2-14 (binary_tree): %d\n", v4);
 v5 = &v9;
 v10 = 0;
 v9 = 1;
 v6 = 0;
 memset(v20, 0, 0x2Cu);
 v7 = 0;
 while ( 1 )
 {
 while ( v5 )
 {
 v7 += *v5;
 v5 = (int *)v5[1];
 }
 if ( ++v6 == 2 )
 break;
 v5 = (int *)v20[v6];
 }
 return printf("CMP-L2-15 (graph_traverse): %d\n", v7, v9, v10, v11, v12, v13, v14, v15, v16);
}


/* Function: main @ 0x1D68 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* FAILED to decompile: __libc_start_main @ 0x502C */

/* FAILED to decompile: printf @ 0x5030 */

/* FAILED to decompile: __cxa_finalize @ 0x5034 */

/* FAILED to decompile: puts @ 0x5038 */

/* Total functions decompiled: 69, failed: 4 */
