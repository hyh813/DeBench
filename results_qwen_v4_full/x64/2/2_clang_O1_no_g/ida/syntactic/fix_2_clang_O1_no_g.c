/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/2/2_clang_O1_no_g
 * Processor: pc
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define LODWORD(x) (x)

extern long long _gmon_start__(void);

/* Global variables referenced in decompiled code */
extern char *s;
extern char *asc_25E0;
extern long long off_3DE0;
extern char *asc_25FB;
extern __int128 xmmword_2640;
extern int dword_2680[4];
extern char *asc_2616;
extern __int128 xmmword_2658;
extern __int128 xmmword_2670;

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))_gmon_start__();
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x1150 */
long long process_char(unsigned int a1)
{
 long long result; // rax

 result = (unsigned char)(a1 + 32);
 if ( (unsigned char)(a1 - 65) >= 0x1Au )
 return a1;
 return result;
}


/* Function: process_short @ 0x1160 */
long long process_short(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: process_int @ 0x1170 */
long long process_int(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: process_long @ 0x1180 */
long long process_long(long long a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x1190 */
long long process_ll(long long a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x11A0 */
float process_float(float a1)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x11C0 */
double process_double(double a1)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x11E0 */
long double process_ld(long double a1)
{
 return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x11F0 */
bool process_bool(int a1)
{
 return a1 > 0 && (a1 & 1) == 0;
}


/* Function: const_param @ 0x1200 */
long long const_param(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: volatile_access @ 0x1210 */
long long volatile_access(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: test_data_types_l1 @ 0x1220 */
int test_data_types_l1()
{
 puts(s);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 printf("DT-L1-06 (process_float): %.2f\n", 3.5);
 printf("DT-L1-07 (process_double): %.2f\n", 2.1);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 10.0);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 return printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x1350 */
long long array_1d_stack(long long a1, int a2)
{
 long long v2; // rdx
 long long result; // rax

 if ( a2 <= 0 )
 return 0;
 v2 = 0;
 LODWORD(result) = 0;
 do
 result = (unsigned int)(*(unsigned int *)(a1 + 4 * v2++) + result);
 while ( a2 != v2 );
 return result;
}


/* Function: array_string @ 0x1370 */
long long array_string(unsigned char *a1)
{
 long long result; // rax

 LODWORD(result) = -1;
 do
 result = (unsigned int)(result + 1);
 while ( *a1++ != 0 );
 return result;
}


/* Function: array_2d_stack @ 0x1390 */
long long array_2d_stack(long long a1)
{
 long long v1; // rcx
 long long result; // rax

 v1 = 0;
 LODWORD(result) = 0;
 do
 {
 result = (unsigned int)(*(unsigned int *)(a1 + v1) + result);
 v1 += 44;
 }
 while ( v1 != 440 );
 return result;
}


/* Function: array_3d @ 0x13C0 */
long long array_3d(long long a1)
{
 long long v1; // r8
 long long result; // rax
 long long v3; // rdx
 long long i; // rsi
 long long j; // rcx

 v1 = 0;
 LODWORD(result) = 0;
 do
 {
 v3 = a1;
 for ( i = 0; i != 5; ++i )
 {
 for ( j = 0; j != 5; ++j )
 result = (unsigned int)(*(unsigned int *)(v3 + 4 * j) + result);
 v3 += 20;
 }
 ++v1;
 a1 += 100;
 }
 while ( v1 != 5 );
 return result;
}


/* Function: array_vla @ 0x1420 */
long long array_vla(int a1, long long a2)
{
 long long v2; // rdx
 long long result; // rax

 if ( a1 <= 0 )
 return 0;
 v2 = 0;
 LODWORD(result) = 0;
 do
 result = (unsigned int)(*(unsigned int *)(a2 + 4 * v2++) + result);
 while ( a1 != v2 );
 return result;
}


/* Function: array_pointer @ 0x1440 */
long long array_pointer(long long a1, int a2)
{
 long long v2; // rdx
 long long result; // rax

 if ( a2 <= 0 )
 return 0;
 v2 = 0;
 LODWORD(result) = 0;
 do
 {
 result = (unsigned int)(*(unsigned int *)(a1 + v2) + result);
 v2 += 40;
 }
 while ( 40LL * (unsigned int)a2 != v2 );
 return result;
}


/* Function: pointer_array @ 0x1470 */
long long pointer_array(long long a1, int a2)
{
 int v2; // eax
 long long v3; // rcx
 long long v4; // rdx
 long long result; // rax
 unsigned int *v6; // rsi

 if ( a2 <= 0 )
 return 0;
 v2 = 10;
 if ( a2 < 10 )
 v2 = a2;
 v3 = 1;
 if ( v2 >= 2 )
 v3 = (unsigned int)v2;
 v4 = 0;
 result = 0;
 do
 {
 v6 = *(unsigned int **)(a1 + 8 * v4);
 if ( v6 )
 result = (unsigned int)(*v6 + result);
 ++v4;
 }
 while ( v3 != v4 );
 return result;
}


/* Function: array_complex_index @ 0x14B0 */
long long array_complex_index(long long a1, int a2, int a3, int a4, int a5)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( a4 >= 0 && a5 < a3 && a4 < a2 && a5 >= 0 )
 return *(unsigned int *)(a1 + 4LL * (a4 + a2 * a5));
 return result;
}


/* Function: array_oob @ 0x14E0 */
long long array_oob(long long a1, int a2)
{
 long long v2; // rsi
 long long v3; // rcx
 long long result; // rax

 if ( a2 < 0 )
 return 0;
 v2 = (unsigned int)(a2 + 1);
 v3 = 0;
 LODWORD(result) = 0;
 do
 result = (unsigned int)(*(unsigned int *)(a1 + 4 * v3++) + result);
 while ( v2 != v3 );
 return result;
}


/* Function: test_array_types @ 0x1500 */
int test_array_types()
{
 long long v0; // rbx
 unsigned int *v1; // rax
 long long i; // rcx
 int v3; // edx
 long long v4; // rax
 int v5; // esi
 long long v6; // rbx
 unsigned char *v7; // rax
 unsigned char *v8; // rcx
 long long j; // rdx
 long long k; // rsi
 long long v11; // rax
 unsigned char *v12; // rcx
 int v13; // esi
 unsigned char *v14; // rdx
 long long m; // rdi
 long long n; // rbx
 long long v17; // rbx
 long long v18; // rax
 int v19; // esi
 long long v20; // rbx
 int v21; // esi
 unsigned int *v22; // rax
 long long v23; // rbx
 int v25; // [rsp+4h] [rbp-514h] BYREF
 int v26; // [rsp+8h] [rbp-510h] BYREF
 int v27; // [rsp+Ch] [rbp-50Ch] BYREF
 unsigned long long v28[3]; // [rsp+10h] [rbp-508h]
 __int128 v29; // [rsp+28h] [rbp-4F0h]
 __int128 v30; // [rsp+38h] [rbp-4E0h]
 __int128 v31; // [rsp+48h] [rbp-4D0h]
 long long v32; // [rsp+58h] [rbp-4C0h]
 unsigned int v33[72]; // [rsp+60h] [rbp-4B8h]
 unsigned int v34[100]; // [rsp+180h] [rbp-398h] BYREF
 unsigned char v35[520]; // [rsp+310h] [rbp-208h] BYREF

 puts(asc_25E0);
 v0 = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 v1 = v34;
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
 v5 += v34[v4];
 v4 += 11;
 }
 while ( v4 != 110 );
 v6 = 0;
 printf("ARR-L1-03 (array_2d_stack): %d\n", v5);
 v7 = v35;
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
 v12 = v35;
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
 v17 = 0;
 printf("ARR-L1-04 (array_3d): %d\n", v13);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 do
 {
 v33[v17 + 20] = v17;
 v17 += 10;
 }
 while ( v17 != 50 );
 v18 = 0;
 v19 = 0;
 do
 {
 v19 += v33[v18 + 20];
 v18 += 10;
 }
 while ( v18 != 50 );
 v20 = 0;
 printf("ARR-L2-02 (array_pointer): %d\n", v19);
 v27 = 10;
 v26 = 20;
 v25 = 30;
 v28[0] = (unsigned long long)(int *)&v27;
 v28[1] = (unsigned long long)(int *)&v26;
 v28[2] = (unsigned long long)(int *)&v25;
 v29 = 0;
 v30 = 0;
 v31 = 0;
 v32 = 0;
 v21 = 0;
 do
 {
 v22 = (unsigned int *)v28[v20];
 if ( v22 )
 v21 += *v22;
 ++v20;
 }
 while ( v20 != 3 );
 v23 = 0;
 printf("ARR-L2-03 (pointer_array): %d\n", v21);
 do
 {
 v33[v23] = v23;
 ++v23;
 }
 while ( v23 != 20 );
 return printf("ARR-L2-04 (array_complex_index): %d\n", v33[17]);
}


/* Function: ptr_single @ 0x1790 */
long long ptr_single(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0x17A0 */
long long ptr_double(unsigned int **a1)
{
 return (unsigned int)(**a1 + 5);
}


/* Function: ptr_triple @ 0x17B0 */
long long ptr_triple(unsigned int ***a1)
{
 return (unsigned int)(***a1 + 1);
}


/* Function: ptr_increment @ 0x17C0 */
long long ptr_increment(long long a1, int a2)
{
 long long v2; // rdx
 long long result; // rax

 if ( a2 <= 0 )
 return 0;
 v2 = 0;
 LODWORD(result) = 0;
 do
 result = (unsigned int)(*(unsigned int *)(a1 + 4 * v2++) + result);
 while ( a2 != (unsigned int)v2 );
 return result;
}


/* Function: ptr_offset @ 0x17E0 */
long long ptr_offset(long long a1, int a2)
{
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: ptr_diff @ 0x17F0 */
unsigned long long ptr_diff(long long a1, long long a2)
{
 return (unsigned long long)(a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x1800 */
long long ptr_void(char *a1, int a2)
{
 long long result; // rax

 if ( a2 == 1 )
 return (unsigned int)*a1;
 result = 0xFFFFFFFFLL;
 if ( !a2 )
 return *(unsigned int *)a1;
 return result;
}


/* Function: ptr_const @ 0x1820 */
long long ptr_const(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: ptr_const_ptr @ 0x1830 */
long long ptr_const_ptr(unsigned int *a1)
{
 long long result; // rax

 result = (unsigned int)(*a1 + 5);
 *a1 = result;
 return result;
}


/* Function: ptr_func_simple @ 0x1840 */
long long ptr_func_simple(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0x1850 */
long long ptr_func_complex(long long ( *a1)(long long, __int128 *), long long a2)
{
 __int128 v3; // [rsp+0h] [rbp-18h] BYREF

 v3 = *(unsigned long long *)&off_3DE0;
 return a1(a2, &v3);
}


/* Function: ptr_cast @ 0x1880 */
long long ptr_cast(unsigned int *a1)
{
 return *a1;
}


/* Function: opaque_handle_create @ 0x1890 */
long long opaque_handle_create(int a1)
{
 return a1;
}


/* Function: opaque_handle_op @ 0x18A0 */
long long opaque_handle_op(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: test_pointer_types @ 0x18B0 */
int test_pointer_types()
{
 long long v0; // rbx
 int v1; // esi
 __int128 v3; // [rsp+0h] [rbp-28h]
 int v4; // [rsp+10h] [rbp-18h]

 puts(asc_25FB);
 v0 = 0;
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 v4 = 5;
 v3 = xmmword_2640;
 v1 = 0;
 do
 v1 += *((unsigned int *)&v3 + v0++);
 while ( (unsigned int)v0 != 5 );
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


/* Function: struct_simple @ 0x1A00 */
long long struct_simple(unsigned int *a1)
{
 return (unsigned int)(a1[2] + *a1 + a1[1]);
}


/* Function: struct_array @ 0x1A10 */
long long struct_array(long long a1, int a2)
{
 long long v2; // rdx
 long long result; // rax

 if ( a2 <= 0 )
 return 0;
 v2 = 0;
 LODWORD(result) = 0;
 do
 {
 result = (unsigned int)(*(unsigned int *)(a1 + v2 + 8) + *(unsigned int *)(a1 + v2 + 4) + *(unsigned int *)(a1 + v2) + result);
 v2 += 12;
 }
 while ( 12LL * (unsigned int)a2 != v2 );
 return result;
}


/* Function: struct_nested @ 0x1A50 */
long long struct_nested(unsigned int *a1)
{
 return (unsigned int)(*a1 + a1[3]);
}


/* Function: struct_deep @ 0x1A60 */
long long struct_deep(long long a1)
{
 return (unsigned int)(*(unsigned int *)(a1 + 8) + *(unsigned int *)(a1 + 20));
}


/* Function: struct_with_ptr @ 0x1A70 */
long long struct_with_ptr(unsigned int *a1)
{
 unsigned int v1; // ecx
 unsigned int *v2; // rax

 v1 = *a1;
 v2 = (unsigned int *)*((unsigned long long *)a1 + 1);
 if ( v2 )
 return v1 + *v2;
 else
 return v1;
}


/* Function: struct_bitfields @ 0x1A90 */
long long struct_bitfields(unsigned short *a1)
{
 return (((unsigned short)*a1 >> 3) & 7)
 + (((unsigned short)*a1 >> 1) & 3)
 + (*a1 & 1)
 + ((unsigned short)*a1 >> 6);
}


/* Function: union_type @ 0x1AC0 */
long long union_type(char *a1, int a2)
{
 if ( a2 == 1 )
 return (unsigned int)(int)*(float *)a1;
 if ( a2 )
 return (unsigned int)*a1;
 return *(unsigned int *)a1;
}


/* Function: union_array @ 0x1AE0 */
long long union_array(long long a1, int a2)
{
 long long v2; // rdx
 long long result; // rax

 if ( a2 <= 0 )
 return 0;
 v2 = 0;
 LODWORD(result) = 0;
 do
 result = (unsigned int)(*(unsigned int *)(a1 + 4 * v2++) + result);
 while ( a2 != v2 );
 return result;
}


/* Function: enum_type @ 0x1B00 */
long long enum_type(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: enum_switch @ 0x1B10 */
long long enum_switch(unsigned int a1)
{
 long long result; // rax

 result = 4294967197LL;
 if ( a1 <= 3 )
 return dword_2680[a1];
 return result;
}


/* Function: struct_func_ptr @ 0x1B30 */
long long struct_func_ptr(unsigned int *a1)
{
 return (*((long long ( **)(unsigned long long))a1 + 1))(*a1);
}


/* Function: linked_list @ 0x1B40 */
long long linked_list(long long a1)
{
 long long result; // rax

 for ( result = 0; a1; a1 = *(unsigned long long *)(a1 + 8) )
 result = (unsigned int)(*(unsigned int *)a1 + result);
 return result;
}


/* Function: doubly_linked_list @ 0x1B60 */
long long doubly_linked_list(long long a1)
{
 long long result; // rax

 for ( result = 0; a1; a1 = *(unsigned long long *)(a1 + 8) )
 result = (unsigned int)(*(unsigned int *)a1 + result);
 return result;
}


/* Function: binary_tree_sum @ 0x1B80 */
long long binary_tree_sum(int *a1)
{
 int v1; // r14d
 int v2; // ebp

 if ( !a1 )
 return 0;
 v1 = *a1;
 v2 = v1 + binary_tree_sum(*((unsigned long long *)a1 + 1));
 return v2 + (unsigned int)binary_tree_sum(*((unsigned long long *)a1 + 2));
}


/* Function: binary_tree @ 0x1BB0 */
long long binary_tree(int *a1)
{
 return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x1BC0 */
long long graph_traverse(long long a1)
{
 long long v1; // rcx
 long long v2; // rdx
 long long result; // rax
 long long i; // rsi

 v1 = *(unsigned int *)(a1 + 80);
 if ( (int)v1 <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 {
 for ( i = *(unsigned long long *)(a1 + 8 * v2); i; i = *(unsigned long long *)(i + 8) )
 result = (unsigned int)(*(unsigned int *)i + result);
 ++v2;
 }
 while ( v2 != v1 );
 return result;
}


/* Function: test_composite_types @ 0x1C00 */
int test_composite_types()
{
 int v0; // ebx
 int *v1; // rax
 int v2; // ebp
 int *v3; // rax
 long long v4; // rbx
 int v5; // eax
 int v6; // esi
 long long i; // rax
 int v9; // [rsp+0h] [rbp-F8h] BYREF
 int *v10; // [rsp+8h] [rbp-F0h]
 int v11; // [rsp+10h] [rbp-E8h] BYREF
 int *v12; // [rsp+18h] [rbp-E0h]
 int v13; // [rsp+20h] [rbp-D8h] BYREF
 long long v14; // [rsp+28h] [rbp-D0h]
 int v15; // [rsp+30h] [rbp-C8h] BYREF
 int *v16; // [rsp+38h] [rbp-C0h]
 long long v17; // [rsp+40h] [rbp-B8h]
 int v18; // [rsp+48h] [rbp-B0h] BYREF
 long long v19; // [rsp+50h] [rbp-A8h]
 int *v20; // [rsp+58h] [rbp-A0h]
 __int128 v21; // [rsp+60h] [rbp-98h] BYREF
 __int128 v22; // [rsp+70h] [rbp-88h] BYREF
 long long v23; // [rsp+80h] [rbp-78h]
 int *v24[5]; // [rsp+90h] [rbp-68h] BYREF
 long long v25; // [rsp+E0h] [rbp-18h]

 puts(asc_2616);
 v0 = 0;
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
 v1 = &v9;
 v9 = 10;
 v10 = &v11;
 v11 = 20;
 v12 = &v13;
 v13 = 30;
 v14 = 0;
 do
 {
 v0 += *v1;
 v1 = (int *)*((unsigned long long *)v1 + 1);
 }
 while ( v1 );
 v2 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", v0);
 v3 = &v15;
 v15 = 10;
 v16 = &v18;
 v17 = 0;
 v18 = 20;
 v19 = 0;
 v20 = &v15;
 do
 {
 v2 += *v3;
 v3 = (int *)*((unsigned long long *)v3 + 1);
 }
 while ( v3 );
 v4 = 0;
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v2);
 v23 = 0;
 v22 = xmmword_2658;
 v5 = binary_tree_sum((int *)(void *)&v22);
 printf("CMP-L2-14 (binary_tree): %d\n", v5);
v21 = xmmword_2670;
memset(&v24[1], 0, 64);
v25 = 2;
v24[0] = (int *)&v21;
v24[1] = (int *)&v22;
v24[2] = NULL;
v24[3] = NULL;
v24[4] = NULL;
v6 = 0;
 do
 {
 for ( i = *(unsigned long long *)v24[v4]; i; i = *(unsigned long long *)(i + 8) )
 v6 += *(unsigned int *)i;
 ++v4;
 }
 while ( v4 != 2 );
 return printf("CMP-L2-15 (graph_traverse): %d\n", v6);
}


/* Function: main @ 0x1E90 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: .term_proc @ 0x1EAC */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4048 */

/* FAILED to decompile: puts @ 0x4050 */

/* FAILED to decompile: printf @ 0x4058 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4060 */

/* FAILED to decompile: __gmon_start__ @ 0x4070 */

/* Total functions decompiled: 63, failed: 5 */
