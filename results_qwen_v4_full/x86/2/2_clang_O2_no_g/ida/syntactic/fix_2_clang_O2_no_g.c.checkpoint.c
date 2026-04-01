/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/2/2_clang_O2_no_g
 * Processor: pc
 */

#include <stdbool.h>
#include <stdio.h>

static char *asc_35BF = "Data Types Level 1";
static char *asc_35E0 = "Array Types";
static char *asc_35FB = "Pointer Types";
static char *asc_3616 = "Composite Types";
static unsigned int dword_0 = 0;
static int dword_3640[] = {50, 60, 70, 80};
static unsigned int dword_64 = 64;




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" ::: "memory");
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


/* Function: process_char @ 0x1200 */
int process_char(int a1)
{
 int result; // eax

 result = (unsigned char)(a1 + 32);
 if ( (unsigned char)(a1 - 65) >= 0x1Au )
 return a1;
 return result;
}


/* Function: process_short @ 0x1220 */
short process_short(short a1, short a2)
{
 return a1 + a2;
}


/* Function: process_int @ 0x1230 */
int process_int(int a1)
{
 return 2 * a1 + 1;
}


/* Function: process_long @ 0x1240 */
int process_long(int a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x1250 */
long long process_ll(long long a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x1270 */
long double process_float(float a1)
{
 return a1 * 1.5 + 0.5;
}


/* Function: process_double @ 0x1290 */
long double process_double(double a1)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x12B0 */
long double process_ld(long double a1)
{
 return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x12C0 */
bool process_bool(int a1)
{
 return a1 > 0 && (a1 & 1) == 0;
}


/* Function: const_param @ 0x12E0 */
int const_param(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: volatile_access @ 0x12F0 */
int volatile_access(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: test_data_types_l1 @ 0x1300 */
int test_data_types_l1()
{
 long double v1; // [esp+4h] [ebp-18h]

 puts(asc_35BF);
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


/* Function: array_1d_stack @ 0x1430 */
int array_1d_stack(int a1, int a2)
{
 int v2; // esi
 int result; // eax
 int v4; // edx
 int v5; // esi

 if ( a2 <= 0 )
 return 0;
 if ( (unsigned int)(a2 - 1) >= 7 )
 {
 v2 = 0;
 result = 0;
 do
 {
 result += *(unsigned int *)(a1 + 4 * v2 + 28)
 + *(unsigned int *)(a1 + 4 * v2 + 24)
 + *(unsigned int *)(a1 + 4 * v2 + 20)
 + *(unsigned int *)(a1 + 4 * v2 + 16)
 + *(unsigned int *)(a1 + 4 * v2 + 12)
 + *(unsigned int *)(a1 + 4 * v2 + 8)
 + *(unsigned int *)(a1 + 4 * v2 + 4)
 + *(unsigned int *)(a1 + 4 * v2);
 v2 += 8;
 }
 while ( (a2 & 0x7FFFFFF8) != v2 );
 }
 else
 {
 v2 = 0;
 result = 0;
 }
 if ( (a2 & 7) != 0 )
 {
 v4 = a1 + 4 * v2;
 v5 = 0;
 do
 result += *(unsigned int *)(v4 + 4 * v5++);
 while ( (a2 & 7) != v5 );
 }
 return result;
}


/* Function: array_string @ 0x14A0 */
int array_string(int a1)
{
 int result; // eax

 result = -1;
 while ( *(unsigned char *)(a1 + result++ + 1) != 0 )
 ;
 return result;
}


/* Function: array_2d_stack @ 0x14C0 */
int array_2d_stack(unsigned int *a1)
{
 return a1[99] + a1[88] + a1[77] + a1[66] + a1[55] + a1[44] + a1[33] + a1[22] + *a1 + a1[11];
}


/* Function: array_3d @ 0x1500 */
int array_3d(int a1)
{
 int v1; // ecx
 int v2; // edx
 int result; // eax

 v2 = 0;
 result = 0;
 do
 {
 v1 = a1 + 96;
 result += *(unsigned int *)(v1 + v2)
 + *(unsigned int *)(v1 + v2 - 4)
 + *(unsigned int *)(v1 + v2 - 8)
 + *(unsigned int *)(v1 + v2 - 12)
 + *(unsigned int *)(v1 + v2 - 16)
 + *(unsigned int *)(v1 + v2 - 20)
 + *(unsigned int *)(v1 + v2 - 24)
 + *(unsigned int *)(v1 + v2 - 28)
 + *(unsigned int *)(v1 + v2 - 32)
 + *(unsigned int *)(v1 + v2 - 36)
 + *(unsigned int *)(v1 + v2 - 40)
 + *(unsigned int *)(v1 + v2 - 44)
 + *(unsigned int *)(v1 + v2 - 48)
 + *(unsigned int *)(v1 + v2 - 52)
 + *(unsigned int *)(v1 + v2 - 56)
 + *(unsigned int *)(v1 + v2 - 60)
 + *(unsigned int *)(v1 + v2 - 64)
 + *(unsigned int *)(v1 + v2 - 68)
 + *(unsigned int *)(v1 + v2 - 72)
 + *(unsigned int *)(v1 + v2 - 76)
 + *(unsigned int *)(v1 + v2 - 80)
 + *(unsigned int *)(v1 + v2 - 84)
 + *(unsigned int *)(v1 + v2 - 88)
 + *(unsigned int *)(v1 + v2 - 92)
 + *(unsigned int *)(v1 + v2 - 96);
 v2 += 100;
 }
 while ( v2 != 500 );
 return result;
}


/* Function: array_vla @ 0x1580 */
int array_vla(int a1, int a2)
{
 int v2; // esi
 int result; // eax
 int v4; // edx
 int v5; // esi

 if ( a1 <= 0 )
 return 0;
 if ( (unsigned int)(a1 - 1) >= 7 )
 {
 v2 = 0;
 result = 0;
 do
 {
 result += *(unsigned int *)(a2 + 4 * v2 + 28)
 + *(unsigned int *)(a2 + 4 * v2 + 24)
 + *(unsigned int *)(a2 + 4 * v2 + 20)
 + *(unsigned int *)(a2 + 4 * v2 + 16)
 + *(unsigned int *)(a2 + 4 * v2 + 12)
 + *(unsigned int *)(a2 + 4 * v2 + 8)
 + *(unsigned int *)(a2 + 4 * v2 + 4)
 + *(unsigned int *)(a2 + 4 * v2);
 v2 += 8;
 }
 while ( (a1 & 0x7FFFFFF8) != v2 );
 }
 else
 {
 v2 = 0;
 result = 0;
 }
 if ( (a1 & 7) != 0 )
 {
 v4 = a2 + 4 * v2;
 v5 = 0;
 do
 result += *(unsigned int *)(v4 + 4 * v5++);
 while ( (a1 & 7) != v5 );
 }
 return result;
}


/* Function: array_pointer @ 0x15F0 */
int array_pointer(unsigned int *a1, int a2)
{
 int v2; // esi
 int result; // eax
 unsigned int *v4; // ebx
 unsigned int *v5; // edx
 int v6; // esi

 if ( a2 <= 0 )
 return 0;
 if ( (unsigned int)(a2 - 1) >= 3 )
 {
 v2 = 0;
 v4 = a1;
 result = 0;
 do
 {
 result += v4[30] + v4[20] + v4[10] + *v4;
 v2 += 4;
 v4 += 40;
 }
 while ( (a2 & 0x7FFFFFFC) != v2 );
 }
 else
 {
 v2 = 0;
 result = 0;
 }
 if ( (a2 & 3) != 0 )
 {
 v5 = &a1[10 * v2];
 v6 = 0;
 do
 {
 result += v5[v6];
 v6 += 10;
 }
 while ( 10 * (a2 & 3) != v6 );
 }
 return result;
}


/* Function: pointer_array @ 0x1660 */
int pointer_array(int a1, int a2)
{
 int v2; // edx
 int v3; // esi
 int result; // eax
 unsigned int *v5; // ecx
 unsigned int *v6; // edi
 unsigned int *v7; // edi

 if ( a2 <= 0 )
 return 0;
 v2 = 10;
 if ( (unsigned int)a2 < 0xA )
 v2 = a2;
 if ( v2 == 1 )
 {
 v3 = 0;
 result = 0;
 }
 else
 {
 v3 = 0;
 result = 0;
 do
 {
 v6 = *(unsigned int **)(a1 + 4 * v3);
 if ( v6 )
 result += *v6;
 v7 = *(unsigned int **)(a1 + 4 * v3 + 4);
 if ( v7 )
 result += *v7;
 v3 += 2;
 }
 while ( (v2 & 0xE) != v3 );
 }
 if ( (v2 & 1) != 0 )
 {
 v5 = *(unsigned int **)(a1 + 4 * v3);
 if ( v5 )
 result += *v5;
 }
 return result;
}


/* Function: array_complex_index @ 0x16D0 */
int array_complex_index(int a1, int a2, int a3, int a4, int a5)
{
 int result; // eax

 result = -1;
 if ( a4 >= 0 && a5 < a3 && a4 < a2 && a5 >= 0 )
 return *(unsigned int *)(a1 + 4 * (a4 + a2 * a5));
 return result;
}


/* Function: array_oob @ 0x1710 */
int array_oob(int a1, int a2)
{
 int v2; // esi
 int result; // eax
 int v4; // edx
 int v5; // esi

 if ( a2 < 0 )
 return 0;
 if ( (unsigned int)a2 >= 7 )
 {
 v2 = 0;
 result = 0;
 do
 {
 result += *(unsigned int *)(a1 + 4 * v2 + 28)
 + *(unsigned int *)(a1 + 4 * v2 + 24)
 + *(unsigned int *)(a1 + 4 * v2 + 20)
 + *(unsigned int *)(a1 + 4 * v2 + 16)
 + *(unsigned int *)(a1 + 4 * v2 + 12)
 + *(unsigned int *)(a1 + 4 * v2 + 8)
 + *(unsigned int *)(a1 + 4 * v2 + 4)
 + *(unsigned int *)(a1 + 4 * v2);
 v2 += 8;
 }
 while ( ((a2 + 1) & 0xFFFFFFF8) != v2 );
 }
 else
 {
 v2 = 0;
 result = 0;
 }
 if ( (((unsigned char)a2 + 1) & 7) != 0 )
 {
 v4 = a1 + 4 * v2;
 v5 = 0;
 do
 result += *(unsigned int *)(v4 + 4 * v5++);
 while ( (((unsigned char)a2 + 1) & 7) != v5 );
 }
 return result;
}


/* Function: test_array_types @ 0x1780 */
int test_array_types()
{
 int i; // eax
 int v1; // ecx
 int v2; // ecx
 int j; // eax
 int v4; // eax
 unsigned int v6[125]; // [esp+10h] [ebp-38Ch] BYREF
 unsigned int v7[102]; // [esp+204h] [ebp-198h]

 puts(asc_35E0);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 for ( i = 0; i != 100; i += 10 )
 {
 v7[i] = 0;
 v7[i + 1] = i == 10;
 v7[i + 2] = 2 * (i == 20);
 v7[i + 3] = 3 * (i == 30);
 v7[i + 4] = 4 * (i == 40);
 v7[i + 5] = 5 * (i == 50);
 v1 = 0;
 if ( i == 60 )
 v1 = 6;
 v7[i + 6] = v1;
 v2 = 0;
 if ( i == 70 )
 v2 = 7;
 v7[i + 7] = v2;
 v7[i + 8] = 8 * (i == 80);
 v7[i + 9] = 9 * (i == 90);
 }
 printf(
 "ARR-L1-03 (array_2d_stack): %d\n",
 v7[99] + v7[88] + v7[77] + v7[66] + v7[55] + v7[44] + v7[33] + v7[22] + v7[0] + v7[11]);
 for ( j = 0; j != 125; j += 25 )
 {
 v6[j] = 1;
 v6[j + 1] = 1;
 v6[j + 2] = 1;
 v6[j + 3] = 1;
 v6[j + 4] = 1;
 v6[j + 5] = 1;
 v6[j + 6] = 1;
 v6[j + 7] = 1;
 v6[j + 8] = 1;
 v6[j + 9] = 1;
 v6[j + 10] = 1;
 v6[j + 11] = 1;
 v6[j + 12] = 1;
 v6[j + 13] = 1;
 v6[j + 14] = 1;
 v6[j + 15] = 1;
 v6[j + 16] = 1;
 v6[j + 17] = 1;
 v6[j + 18] = 1;
 v6[j + 19] = 1;
 v6[j + 20] = 1;
 v6[j + 21] = 1;
 v6[j + 22] = 1;
 v6[j + 23] = 1;
 v6[j + 24] = 1;
 }
 v4 = array_3d((int)v6);
 printf("ARR-L1-04 (array_3d): %d\n", v4);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 return printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0x1A60 */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0x1A70 */
int ptr_double(unsigned int **a1)
{
 return **a1 + 5;
}


/* Function: ptr_triple @ 0x1A80 */
int ptr_triple(unsigned int ***a1)
{
 return ***a1 + 1;
}


/* Function: ptr_increment @ 0x1A90 */
int ptr_increment(unsigned int *a1, int a2)
{
 int result; // eax
 int v4; // esi
 int v5; // esi

 if ( a2 <= 0 )
 return 0;
 if ( (unsigned int)(a2 - 1) >= 7 )
 {
 v4 = a2 & 0x7FFFFFF8;
 result = 0;
 do
 {
 result += a1[7] + a1[6] + a1[5] + a1[4] + a1[3] + a1[2] + a1[1] + *a1;
 a1 += 8;
 v4 -= 8;
 }
 while ( v4 );
 }
 else
 {
 result = 0;
 }
 if ( (a2 & 7) != 0 )
 {
 v5 = 0;
 do
 result += a1[v5++];
 while ( (a2 & 7) != v5 );
 }
 return result;
}


/* Function: ptr_offset @ 0x1B00 */
int ptr_offset(int a1, int a2)
{
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0x1B10 */
int ptr_diff(int a1, int a2)
{
 return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x1B20 */
int ptr_void(char *a1, int a2)
{
 int result; // eax

 if ( a2 == 1 )
 return *a1;
 result = -1;
 if ( !a2 )
 return *(unsigned int *)a1;
 return result;
}


/* Function: ptr_const @ 0x1B40 */
int ptr_const(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0x1B50 */
int ptr_const_ptr(int *a1)
{
 int result; // eax

 result = *a1 + 5;
 *a1 = result;
 return result;
}


/* Function: ptr_func_simple @ 0x1B60 */
int ptr_func_simple(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0x1B80 */
int ptr_func_complex(int ( *a1)(int, unsigned int *), int a2)
{
 unsigned int v3[3]; // [esp+0h] [ebp-Ch] BYREF

 v3[1] = &dword_0;
 v3[0] = "test";
 return a1(a2, v3);
}


/* Function: ptr_cast @ 0x1BC0 */
int ptr_cast(int a1)
{
 return *(unsigned int *)a1;
}


/* Function: opaque_handle_create @ 0x1BD0 */
int opaque_handle_create(int a1)
{
 return a1;
}


/* Function: opaque_handle_op @ 0x1BE0 */
int opaque_handle_op(int a1)
{
 return 2 * a1;
}


/* Function: test_pointer_types @ 0x1BF0 */
int test_pointer_types()
{
 puts(asc_35FB);
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


/* Function: struct_simple @ 0x1D50 */
int struct_simple(unsigned int *a1)
{
 return a1[2] + *a1 + a1[1];
}


/* Function: struct_array @ 0x1D60 */
int struct_array(int a1, int a2)
{
 int v2; // esi
 int result; // eax
 unsigned int *v4; // edi

 if ( a2 <= 0 )
 return 0;
 if ( a2 == 1 )
 {
 v2 = 0;
 result = 0;
 }
 else
 {
 v4 = (unsigned int *)(a1 + 20);
 v2 = 0;
 result = 0;
 do
 {
 result += *v4 + *(v4 - 1) + *(v4 - 2) + *(v4 - 3) + *(v4 - 4) + *(v4 - 5);
 v2 += 2;
 v4 += 6;
 }
 while ( (a2 & 0xFFFFFFFE) != v2 );
 }
 if ( (a2 & 1) != 0 )
 result += *(unsigned int *)(a1 + 12 * v2 + 8) + *(unsigned int *)(a1 + 12 * v2 + 4) + *(unsigned int *)(a1 + 12 * v2);
 return result;
}


/* Function: struct_nested @ 0x1DD0 */
int struct_nested(unsigned int *a1)
{
 return *a1 + a1[3];
}


/* Function: struct_deep @ 0x1DE0 */
int struct_deep(int a1)
{
 return *(unsigned int *)(a1 + 8) + *(unsigned int *)(a1 + 20);
}


/* Function: struct_with_ptr @ 0x1DF0 */
int struct_with_ptr(unsigned int *a1)
{
 unsigned int *v1; // eax

 v1 = (unsigned int *)a1[1];
 if ( v1 )
 return *a1 + *v1;
 else
 return *a1;
}


/* Function: struct_bitfields @ 0x1E10 */
int struct_bitfields(unsigned short *a1)
{
 return (((unsigned short)*a1 >> 3) & 7)
 + (((unsigned short)*a1 >> 1) & 3)
 + (*a1 & 1)
 + ((unsigned short)*a1 >> 6);
}


/* Function: union_type @ 0x1E40 */
int union_type(char *a1, int a2)
{
 if ( a2 == 1 )
 return (int)*(float *)a1;
 if ( a2 )
 return *a1;
 return *(unsigned int *)a1;
}


/* Function: union_array @ 0x1E90 */
int union_array(int a1, int a2)
{
 int v2; // esi
 int result; // eax
 int v4; // edx
 int v5; // esi

 if ( a2 <= 0 )
 return 0;
 if ( (unsigned int)(a2 - 1) >= 7 )
 {
 v2 = 0;
 result = 0;
 do
 {
 result += *(unsigned int *)(a1 + 4 * v2 + 28)
 + *(unsigned int *)(a1 + 4 * v2 + 24)
 + *(unsigned int *)(a1 + 4 * v2 + 20)
 + *(unsigned int *)(a1 + 4 * v2 + 16)
 + *(unsigned int *)(a1 + 4 * v2 + 12)
 + *(unsigned int *)(a1 + 4 * v2 + 8)
 + *(unsigned int *)(a1 + 4 * v2 + 4)
 + *(unsigned int *)(a1 + 4 * v2);
 v2 += 8;
 }
 while ( (a2 & 0x7FFFFFF8) != v2 );
 }
 else
 {
 v2 = 0;
 result = 0;
 }
 if ( (a2 & 7) != 0 )
 {
 v4 = a1 + 4 * v2;
 v5 = 0;
 do
 result += *(unsigned int *)(v4 + 4 * v5++);
 while ( (a2 & 7) != v5 );
 }
 return result;
}


/* Function: enum_type @ 0x1F00 */
int enum_type(int a1)
{
 return 10 * a1;
}


/* Function: enum_switch @ 0x1F10 */
int enum_switch(unsigned int a1)
{
 int result; // eax

 result = -99;
 if ( a1 <= 3 )
 return dword_3640[a1];
 return result;
}


/* Function: struct_func_ptr @ 0x1F40 */
int struct_func_ptr(int a1)
{
 return (*(int ( **)(unsigned int))(a1 + 4))(*(unsigned int *)a1);
}


/* Function: linked_list @ 0x1F70 */
int linked_list(unsigned int *a1)
{
 unsigned int *v1; // ecx
 int result; // eax

 v1 = a1;
 for ( result = 0; v1; v1 = (unsigned int *)v1[1] )
 result += *v1;
 return result;
}


/* Function: doubly_linked_list @ 0x1F90 */
int doubly_linked_list(unsigned int *a1)
{
 unsigned int *v1; // ecx
 int result; // eax

 v1 = a1;
 for ( result = 0; v1; v1 = (unsigned int *)v1[1] )
 result += *v1;
 return result;
}


/* Function: binary_tree_sum @ 0x1FB0 */
int binary_tree_sum(unsigned int *a1)
{
 unsigned int *v1; // edi
 int i; // esi
 int v3; // esi
 int v4; // eax

 v1 = a1;
 for ( i = 0; v1; i = v4 + v3 )
 {
 v3 = *v1 + i;
 v4 = binary_tree_sum(v1[1]);
 v1 = (unsigned int *)v1[2];
 }
 return i;
}


/* Function: binary_tree @ 0x1FF0 */
int binary_tree(unsigned int *a1)
{
 return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x2020 */
int graph_traverse(int a1)
{
 int v1; // edx
 int v2; // esi
 int result; // eax
 unsigned int *k; // ecx
 unsigned int *i; // edi
 unsigned int *j; // edi

 v1 = *(unsigned int *)(a1 + 40);
 if ( v1 <= 0 )
 return 0;
 if ( v1 == 1 )
 {
 v2 = 0;
 result = 0;
 }
 else
 {
 v2 = 0;
 result = 0;
 do
 {
 for ( i = *(unsigned int **)(a1 + 4 * v2); i; i = (unsigned int *)i[1] )
 result += *i;
 for ( j = *(unsigned int **)(a1 + ((4 * v2) | 4)); j; j = (unsigned int *)j[1] )
 result += *j;
 v2 += 2;
 }
 while ( v2 != (v1 & 0xFFFFFFFE) );
 }
 if ( (v1 & 1) != 0 )
 {
 for ( k = *(unsigned int **)(a1 + 4 * v2); k; k = (unsigned int *)k[1] )
 result += *k;
 }
 return result;
}


/* Function: test_composite_types @ 0x20B0 */
int test_composite_types()
{
 int *v0; // eax
 int v1; // ecx
 unsigned int *v2; // eax
 int v3; // ecx
 int v4; // eax
 int v6; // [esp+8h] [ebp-44h] BYREF
 int *v7; // [esp+Ch] [ebp-40h]
 int v8; // [esp+10h] [ebp-3Ch] BYREF
 int *v9; // [esp+14h] [ebp-38h]
 int v10; // [esp+18h] [ebp-34h] BYREF
 int v11; // [esp+1Ch] [ebp-30h]
 unsigned int v12[4]; // [esp+20h] [ebp-2Ch] BYREF
 unsigned int v13[3]; // [esp+30h] [ebp-1Ch] BYREF
 unsigned int v14[4]; // [esp+3Ch] [ebp-10h] BYREF

 puts(asc_3616);
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
 v0 = &v6;
 v6 = 10;
 v7 = &v8;
 v8 = 20;
 v9 = &v10;
 v10 = 30;
 v11 = 0;
 v1 = 0;
 do
 {
 v1 += *v0;
 v0 = (int *)v0[1];
 }
 while ( v0 );
 printf("CMP-L2-12 (linked_list): %d\n", v1, v6, v7, v8, v9, v10, v11);
 v2 = v13;
 v13[0] = 10;
 v13[2] = 0;
 v14[0] = 20;
 v14[1] = 0;
 v14[2] = v13;
 v13[1] = v14;
 v3 = 0;
 do
 {
 v3 += *v2;
 v2 = (unsigned int *)v2[1];
 }
 while ( v2 );
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v3);
 v12[2] = 0;
 v12[1] = 0;
 v12[0] = &dword_64;
 v4 = binary_tree_sum(v12);
 printf("CMP-L2-14 (binary_tree): %d\n", v4);
 return printf("CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: main @ 0x22F0 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x602C */

/* FAILED to decompile: printf @ 0x6030 */

/* FAILED to decompile: __cxa_finalize @ 0x6034 */

/* FAILED to decompile: puts @ 0x6038 */

/* Total functions decompiled: 69, failed: 4 */
