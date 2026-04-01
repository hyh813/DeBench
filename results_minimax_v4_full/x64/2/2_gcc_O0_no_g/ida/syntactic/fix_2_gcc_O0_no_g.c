/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/2/2_gcc_O0_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* External declarations */
extern void _gmon_start__(void);

/* String constants */
const char *s = "Testing data types...";
const char *asc_3180 = "Testing array types...";
const char *asc_32A2 = "Testing pointer types...";
const char *asc_3452 = "Testing composite types...";

/* Function: .init_proc @ 0x1000 */
void init_proc(void)
{
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x1189 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: process_char @ 0x119B */
long long process_char(char a1)
{
 if ( a1 <= 64 || a1 > 90 )
 return (unsigned char)a1;
 else
 return (unsigned int)(unsigned char)a1 + 32;
}


/* Function: process_short @ 0x11C3 */
long long process_short(unsigned short a1, unsigned short a2)
{
 return a1 + (unsigned int)a2;
}


/* Function: process_int @ 0x11E3 */
long long process_int(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: process_long @ 0x11F8 */
long long process_long(long long a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x120D */
long long process_ll(long long a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x1223 */
float process_float(float a1)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x124F */
double process_double(double a1)
{
 return a1 / 2.0 + 0.1;
}


/* Function: process_ld @ 0x1289 */
long double process_ld(long double a1)
{
 return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x129E */
bool process_bool(int a1)
{
 return a1 > 0 && (a1 & 1) == 0;
}


/* Function: const_param @ 0x12CA */
long long const_param(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: volatile_access @ 0x12E1 */
long long volatile_access(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: test_data_types_l1 @ 0x1309 */
unsigned long long test_data_types_l1()
{
 char v0; // al
 char v1; // al
 short v2; // ax
 int v3; // eax
 long long v4; // rax
 long long v5; // rax
 double v6; // xmm1_8
 double v7; // xmm0_8
 long double v8; // fst7
 bool v9; // al
 bool v10; // al
 bool v11; // al
 int v12; // eax
 int v13; // eax
 int v15; // [rsp+10h] [rbp-10h] BYREF
 int v16; // [rsp+14h] [rbp-Ch] BYREF
 unsigned long long v17; // [rsp+18h] [rbp-8h]

 v17 = __readfsqword(0x28u);
 puts(s);
 v0 = process_char(65);
 printf("DT-L1-01 (process_char): %c\n", (unsigned int)v0);
 v1 = process_char(98);
 printf("DT-L1-01 (process_char): %c\n", (unsigned int)v1);
 v2 = process_short(0x64u, 0xC8u);
 printf("DT-L1-02 (process_short): %d\n", v2);
 v3 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n", v3);
 v4 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n", v4);
 v5 = process_ll(100);
 printf("DT-L1-05 (process_ll): %lld\n", v5);
 v6 = process_float(2.0);
 printf("DT-L1-06 (process_float): %.2f\n", v6);
 v7 = process_double(4.0);
 printf("DT-L1-07 (process_double): %.2f\n", v7);
 v8 = process_ld(3.0);
 printf("DT-L1-08 (process_ld): %.2Lf\n", v8);
 v9 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n", v9);
 v10 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n", v10);
 v11 = process_bool(-2);
 printf("DT-L1-09 (process_bool): %d\n", v11);
 v15 = 5;
 v12 = const_param(&v15);
 printf("DT-L1-10 (const_param): %d\n", v12);
 v16 = 10;
 v13 = volatile_access(&v16);
 printf("DT-L1-11 (volatile_access): %d\n", v13);
 return v17 - __readfsqword(0x28u);
}


/* Function: array_1d_stack @ 0x156E */
long long array_1d_stack(long long a1, int a2)
{
 unsigned int v3; // [rsp+14h] [rbp-8h]
 int i; // [rsp+18h] [rbp-4h]

 v3 = 0;
 for ( i = 0; i < a2; ++i )
 v3 += *(unsigned int *)(4LL * i + a1);
 return v3;
}


/* Function: array_string @ 0x15B7 */
long long array_string(long long a1)
{
 unsigned int i; // [rsp+14h] [rbp-4h]

 for ( i = 0; *(unsigned char *)((int)i + a1); ++i )
 ;
 return i;
}


/* Function: array_2d_stack @ 0x15E9 */
long long array_2d_stack(long long a1)
{
 unsigned int v2; // [rsp+10h] [rbp-8h]
 int i; // [rsp+14h] [rbp-4h]

 v2 = 0;
 for ( i = 0; i <= 9; ++i )
 v2 += *(unsigned int *)(a1 + 40LL * i + 4LL * i);
 return v2;
}


/* Function: array_3d @ 0x163D */
long long array_3d(long long a1)
{
 unsigned int v2; // [rsp+8h] [rbp-10h]
 int i; // [rsp+Ch] [rbp-Ch]
 int j; // [rsp+10h] [rbp-8h]
 int k; // [rsp+14h] [rbp-4h]

 v2 = 0;
 for ( i = 0; i <= 4; ++i )
 {
 for ( j = 0; j <= 4; ++j )
 {
 for ( k = 0; k <= 4; ++k )
 v2 += *(unsigned int *)(100LL * i + a1 + 4 * (k + 5LL * j));
 }
 }
 return v2;
}


/* Function: array_vla @ 0x16D7 */
long long array_vla(int a1, long long a2)
{
 unsigned int v3; // [rsp+18h] [rbp-8h]
 int i; // [rsp+1Ch] [rbp-4h]

 v3 = 0;
 for ( i = 0; i < a1; ++i )
 v3 += *(unsigned int *)(4LL * i + a2);
 return v3;
}


/* Function: array_pointer @ 0x1720 */
long long array_pointer(long long a1, int a2)
{
 unsigned int v3; // [rsp+14h] [rbp-8h]
 int i; // [rsp+18h] [rbp-4h]

 v3 = 0;
 for ( i = 0; i < a2; ++i )
 v3 += *(unsigned int *)(40LL * i + a1);
 return v3;
}


/* Function: pointer_array @ 0x1773 */
long long pointer_array(long long a1, int a2)
{
 int v2; // eax
 unsigned int v4; // [rsp+10h] [rbp-Ch]
 int i; // [rsp+14h] [rbp-8h]

 v4 = 0;
 v2 = a2;
 if ( a2 > 10 )
 v2 = 10;
 for ( i = 0; i < v2; ++i )
 {
 if ( *(unsigned long long *)(8LL * i + a1) )
 v4 += **(unsigned int **)(8LL * i + a1);
 }
 return v4;
}


/* Function: array_complex_index @ 0x17EB */
long long array_complex_index(long long a1, int a2, int a3, int a4, int a5)
{
 if ( a4 >= 0 && a4 < a2 && a5 >= 0 && a5 < a3 )
 return *(unsigned int *)(4LL * (a2 * a5 + a4) + a1);
 else
 return 0xFFFFFFFFLL;
}


/* Function: array_oob @ 0x184A */
long long array_oob(long long a1, int a2)
{
 unsigned int v3; // [rsp+14h] [rbp-8h]
 int i; // [rsp+18h] [rbp-4h]

 v3 = 0;
 for ( i = 0; i <= a2; ++i )
 v3 += *(unsigned int *)(4LL * i + a1);
 return v3;
}


/* Function: test_array_types @ 0x1893 */
unsigned long long test_array_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // edx
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v10; // [rsp+Ch] [rbp-564h] BYREF
 int v11; // [rsp+10h] [rbp-560h] BYREF
 int v12; // [rsp+14h] [rbp-55Ch] BYREF
 int i; // [rsp+18h] [rbp-558h]
 int j; // [rsp+1Ch] [rbp-554h]
 int k; // [rsp+20h] [rbp-550h]
 int m; // [rsp+24h] [rbp-54Ch]
 int n; // [rsp+28h] [rbp-548h]
 int ii; // [rsp+2Ch] [rbp-544h]
 int jj; // [rsp+30h] [rbp-540h]
 unsigned int v20[3]; // [rsp+34h] [rbp-53Ch] BYREF
 unsigned int v21[8]; // [rsp+40h] [rbp-530h] BYREF
 unsigned long long v22[10]; // [rsp+60h] [rbp-510h] BYREF
 unsigned int v23[20]; // [rsp+B0h] [rbp-4C0h] BYREF
 unsigned int v24[52]; // [rsp+100h] [rbp-470h] BYREF
 unsigned int v25[100]; // [rsp+1D0h] [rbp-3A0h] BYREF
 unsigned int v26[128]; // [rsp+360h] [rbp-210h] BYREF
 char v27[6]; // [rsp+562h] [rbp-Eh] BYREF
 unsigned long long v28; // [rsp+568h] [rbp-8h]

 v28 = __readfsqword(0x28u);
 puts(asc_3180);
 v21[0] = 1;
 v21[1] = 2;
 v21[2] = 3;
 v21[3] = 4;
 v21[4] = 5;
 v0 = array_1d_stack((long long)v21, 5);
 printf("ARR-L1-01 (array_1d_stack): %d\n", v0);
 strcpy(v27, "hello");
 v1 = array_string((long long)v27);
 printf("ARR-L1-02 (array_string): %d\n", v1);
 for ( i = 0; i <= 9; ++i )
 {
 for ( j = 0; j <= 9; ++j )
 {
 if ( i == j )
 v2 = i;
 else
 v2 = 0;
 v25[10 * i + j] = v2;
 }
 }
 v3 = array_2d_stack((long long)v25);
 printf("ARR-L1-03 (array_2d_stack): %d\n", v3);
 for ( k = 0; k <= 4; ++k )
 {
 for ( m = 0; m <= 4; ++m )
 {
 for ( n = 0; n <= 4; ++n )
 v26[25 * k + 5 * m + n] = 1;
 }
 }
 v4 = array_3d((long long)v26);
 printf("ARR-L1-04 (array_3d): %d\n", v4);
 v20[0] = 10;
 v20[1] = 20;
 v20[2] = 30;
 v5 = array_vla(3, (long long)v20);
 printf("ARR-L2-01 (array_vla): %d\n", v5);
 for ( ii = 0; ii <= 4; ++ii )
 v24[10 * ii] = 10 * ii;
 v6 = array_pointer((long long)v24, 5);
 printf("ARR-L2-02 (array_pointer): %d\n", v6);
 v10 = 10;
 v11 = 20;
 v12 = 30;
 memset(&v22[3], 0, 56);
 v22[0] = &v10;
 v22[1] = &v11;
 v22[2] = &v12;
 v7 = pointer_array((long long)v22, 3);
 printf("ARR-L2-03 (pointer_array): %d\n", v7);
 for ( jj = 0; jj <= 19; ++jj )
 v23[jj] = jj;
 v8 = array_complex_index((long long)v23, 5, 4, 2, 3);
 printf("ARR-L2-04 (array_complex_index): %d\n", v8);
 return v28 - __readfsqword(0x28u);
}


/* Function: ptr_single @ 0x1CDA */
long long ptr_single(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0x1CF1 */
long long ptr_double(unsigned int **a1)
{
 return (unsigned int)(**a1 + 5);
}


/* Function: ptr_triple @ 0x1D0B */
long long ptr_triple(unsigned int ***a1)
{
 return (unsigned int)(***a1 + 1);
}


/* Function: ptr_increment @ 0x1D28 */
long long ptr_increment(unsigned int *a1, int a2)
{
 unsigned int v4; // [rsp+14h] [rbp-8h]
 int i; // [rsp+18h] [rbp-4h]

 v4 = 0;
 for ( i = 0; i < a2; ++i )
 v4 += *a1++;
 return v4;
}


/* Function: ptr_offset @ 0x1D66 */
long long ptr_offset(long long a1, int a2)
{
 return *(unsigned int *)(4LL * a2 + a1);
}


/* Function: ptr_diff @ 0x1D8D */
long long ptr_diff(long long a1, long long a2)
{
 return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x1DAB */
long long ptr_void(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return (unsigned int)*(char *)a1;
 return 0xFFFFFFFFLL;
}


/* Function: ptr_const @ 0x1DE1 */
long long ptr_const(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: ptr_const_ptr @ 0x1DF7 */
long long ptr_const_ptr(unsigned int *a1)
{
 *a1 += 5;
 return *a1;
}


/* Function: ptr_func_simple @ 0x1E1A */
long long ptr_func_simple(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0x1E3A */
long long ptr_func_complex(
 long long ( *a1)(long long, unsigned long long *, unsigned long long *, unsigned long long, long long, long long, long long, unsigned long long),
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6)
{
 unsigned long long v7[4]; // [rsp+10h] [rbp-20h] BYREF

 v7[3] = __readfsqword(0x28u);
 v7[0] = "test";
 v7[1] = 0;
 return a1(a2, v7, v7, a1, a5, a6, a2, a1);
}


/* Function: ptr_cast @ 0x1E9A */
long long ptr_cast(unsigned int *a1)
{
 return *a1;
}


/* Function: opaque_handle_create @ 0x1EC6 */
long long opaque_handle_create(int a1)
{
 return a1;
}


/* Function: opaque_handle_op @ 0x1ED8 */
long long opaque_handle_op(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: complex_callback @ 0x1EEC */
bool complex_callback(unsigned int *a1, unsigned long long *a2)
{
 *a1 += 10;
 return *a2 != 0;
}


/* Function: test_pointer_types @ 0x1F1D */
unsigned long long test_pointer_types()
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
 int v9; // eax
 int v10; // eax
 long long v11; // rdx
 long long v12; // rcx
 long long v13; // r8
 long long v14; // r9
 int v15; // eax
 int v16; // eax
 int v17; // eax
 char v19; // [rsp+Fh] [rbp-B1h] BYREF
 int v20; // [rsp+10h] [rbp-B0h] BYREF
 int v21; // [rsp+14h] [rbp-ACh] BYREF
 int v22; // [rsp+18h] [rbp-A8h] BYREF
 unsigned int v23; // [rsp+1Ch] [rbp-A4h] BYREF
 int v24; // [rsp+20h] [rbp-A0h] BYREF
 unsigned int v25; // [rsp+24h] [rbp-9Ch] BYREF
 int v26; // [rsp+28h] [rbp-98h] BYREF
 unsigned int v27; // [rsp+2Ch] [rbp-94h] BYREF
 int *v28; // [rsp+30h] [rbp-90h] BYREF
 int *v29; // [rsp+38h] [rbp-88h] BYREF
 unsigned int **v30[3]; // [rsp+40h] [rbp-80h]
 long long v31; // [rsp+58h] [rbp-68h]
 unsigned int v32[8]; // [rsp+60h] [rbp-60h] BYREF
 unsigned int v33[8]; // [rsp+80h] [rbp-40h] BYREF
 unsigned int v34[4]; // [rsp+A0h] [rbp-20h] BYREF
 int v35; // [rsp+B0h] [rbp-10h] BYREF
 unsigned long long v36; // [rsp+B8h] [rbp-8h]

 v36 = __readfsqword(0x28u);
 puts(asc_32A2);
 v20 = 5;
 v0 = ptr_single(&v20);
 printf("PTR-L2-01 (ptr_single): %d\n", v0);
 v21 = 10;
 v28 = &v21;
 v30[1] = &v28;
 v1 = ptr_double(&v28);
 printf("PTR-L2-02 (ptr_double): %d\n", v1);
 v22 = 5;
 v29 = &v22;
 v30[0] = &v29;
 v30[2] = &v30[0];
 v2 = ptr_triple((unsigned int ***)v30);
 printf("PTR-L2-03 (ptr_triple): %d\n", v2);
 v32[0] = 1;
 v32[1] = 2;
 v32[2] = 3;
 v32[3] = 4;
 v32[4] = 5;
 v3 = ptr_increment(v32, 5);
 printf("PTR-L2-04 (ptr_increment): %d\n", v3);
 v33[0] = 10;
 v33[1] = 20;
 v33[2] = 30;
 v33[3] = 40;
 v33[4] = 50;
 v4 = ptr_offset((long long)v33, 2);
 printf("PTR-L2-05 (ptr_offset): %d\n", v4);
 v34[0] = 0;
 v34[1] = 10;
 v34[2] = 20;
 v34[3] = 30;
 v35 = 40;
 v5 = ptr_diff((long long)&v35, (long long)v34);
 printf("PTR-L2-06 (ptr_diff): %d\n", v5);
 v23 = 42;
 v19 = 65;
 v6 = ptr_void(&v23, 0);
 printf("PTR-L2-07 (ptr_void): %d\n", v6);
 v7 = ptr_void((unsigned int *)&v19, 1);
 printf("PTR-L2-07 (ptr_void): %d\n", v7);
 v24 = 10;
 v8 = ptr_const(&v24);
 printf("PTR-L2-08 (ptr_const): %d\n", v8);
 v25 = 10;
 v9 = ptr_const_ptr(&v25);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", v9);
 v10 = ptr_func_simple((long long ( *)(unsigned long long))double_value, 5u);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", v10);
 v26 = 5;
 v15 = ptr_func_complex(
 (long long ( *)(long long, unsigned long long *, unsigned long long *, unsigned long long, long long, long long, long long, unsigned long long))complex_callback,
 (long long)&v26,
 v11,
 v12,
 v13,
 v14);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", v15);
 v27 = 305419896;
 v16 = ptr_cast(&v27);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", v16);
 v31 = opaque_handle_create(10);
 v17 = opaque_handle_op(v31);
 printf("PTR-L2-13 (opaque_handle_op): %d\n", v17);
 return v36 - __readfsqword(0x28u);
}


/* Function: struct_simple @ 0x228B */
long long struct_simple(unsigned int *a1)
{
 return (unsigned int)(a1[1] + *a1 + a1[2]);
}


/* Function: struct_array @ 0x22B1 */
long long struct_array(long long a1, int a2)
{
 unsigned int v3; // [rsp+14h] [rbp-8h]
 int i; // [rsp+18h] [rbp-4h]

 v3 = 0;
 for ( i = 0; i < a2; ++i )
 v3 += *(unsigned int *)(12LL * i + a1 + 4) + *(unsigned int *)(12LL * i + a1) + *(unsigned int *)(12LL * i + a1 + 8);
 return v3;
}


/* Function: struct_nested @ 0x2347 */
long long struct_nested(unsigned int *a1)
{
 return (unsigned int)(*a1 + a1[3]);
}


/* Function: struct_deep @ 0x2364 */
long long struct_deep(long long a1)
{
 return (unsigned int)(*(unsigned int *)(a1 + 8) + *(unsigned int *)(a1 + 20));
}


/* Function: struct_with_ptr @ 0x2382 */
long long struct_with_ptr(long long a1)
{
 int v1; // eax

 if ( *(unsigned long long *)(a1 + 8) )
 v1 = **(unsigned int **)(a1 + 8);
 else
 v1 = 0;
 return (unsigned int)(*(unsigned int *)a1 + v1);
}


/* Function: struct_bitfields @ 0x23B6 */
long long struct_bitfields(unsigned char *a1)
{
 return ((*a1 >> 3) & 7) + ((*a1 >> 1) & 3) + (*a1 & 1) + (unsigned int)(*(unsigned short *)a1 >> 6);
}


/* Function: union_type @ 0x2404 */
long long union_type(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return (unsigned int)(int)*(float *)a1;
 return (unsigned int)*(char *)a1;
}


/* Function: union_array @ 0x2441 */
long long union_array(long long a1, int a2)
{
 unsigned int v3; // [rsp+14h] [rbp-8h]
 int i; // [rsp+18h] [rbp-4h]

 v3 = 0;
 for ( i = 0; i < a2; ++i )
 v3 += *(unsigned int *)(4LL * i + a1);
 return v3;
}


/* Function: enum_type @ 0x248A */
long long enum_type(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: enum_switch @ 0x24A3 */
long long enum_switch(unsigned int a1)
{
 if ( a1 == 3 )
 return 0xFFFFFFFFLL;
 if ( a1 > 3 )
 return 4294967197LL;
 if ( a1 == 2 )
 return 50;
 if ( a1 )
 return 100;
 return 0;
}


/* Function: struct_func_ptr @ 0x24F7 */
long long struct_func_ptr(unsigned int *a1)
{
 return (*((long long ( **)(unsigned long long))a1 + 1))(*a1);
}


/* Function: linked_list @ 0x251B */
long long linked_list(long long a1)
{
 unsigned int v2; // [rsp+Ch] [rbp-Ch]

 v2 = 0;
 while ( a1 )
 {
 v2 += *(unsigned int *)a1;
 a1 = *(unsigned long long *)(a1 + 8);
 }
 return v2;
}


/* Function: doubly_linked_list @ 0x2559 */
long long doubly_linked_list(long long a1)
{
 unsigned int v2; // [rsp+Ch] [rbp-Ch]

 v2 = 0;
 while ( a1 )
 {
 v2 += *(unsigned int *)a1;
 a1 = *(unsigned long long *)(a1 + 8);
 }
 return v2;
}


/* Function: binary_tree_sum @ 0x2597 */
long long binary_tree_sum(int *a1)
{
 int v2; // ebx
 int v3; // ebx

 if ( !a1 )
 return 0;
 v2 = *a1;
 v3 = binary_tree_sum(*((unsigned long long *)a1 + 1)) + v2;
 return v3 + (unsigned int)binary_tree_sum(*((unsigned long long *)a1 + 2));
}


/* Function: binary_tree @ 0x25E6 */
long long binary_tree(int *a1)
{
 return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x2604 */
long long graph_traverse(long long a1)
{
 unsigned int v2; // [rsp+8h] [rbp-10h]
 long long v3; // [rsp+Ch] [rbp-Ch]
 long long i; // [rsp+10h] [rbp-8h]

 v2 = 0;
 LODWORD(v3) = 0;
 while ( (int)v3 < *(unsigned int *)(a1 + 80) )
 {
 for ( i = *(unsigned long long *)(a1 + 8LL * (int)v3); i; i = *(unsigned long long *)(i + 8) )
 v2 += *(unsigned int *)i;
 v3 = (unsigned int)(v3 + 1);
 }
 return v2;
}


/* Function: test_composite_types @ 0x2665 */
unsigned long long test_composite_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // ax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax
 int v12; // eax
 int v13; // eax
 int v14; // eax
 int v15; // eax
 unsigned short v17; // [rsp+Ch] [rbp-1B4h] BYREF
 int v18; // [rsp+10h] [rbp-1B0h]
 unsigned int v19[3]; // [rsp+14h] [rbp-1ACh] BYREF
 int v20; // [rsp+20h] [rbp-1A0h] BYREF
 long long v21; // [rsp+28h] [rbp-198h]
 int v22; // [rsp+30h] [rbp-190h] BYREF
 int *v23; // [rsp+38h] [rbp-188h]
 unsigned int v24; // [rsp+40h] [rbp-180h] BYREF
 long long ( *v25)(int); // [rsp+48h] [rbp-178h]
 int v26; // [rsp+50h] [rbp-170h] BYREF
 long long v27; // [rsp+58h] [rbp-168h]
 unsigned int v28[8]; // [rsp+60h] [rbp-160h] BYREF
 int v29; // [rsp+80h] [rbp-140h] BYREF
 long long v30; // [rsp+88h] [rbp-138h]
 long long v31; // [rsp+90h] [rbp-130h]
 unsigned int v32[12]; // [rsp+A0h] [rbp-120h] BYREF
 unsigned int v33; // [rsp+D0h] [rbp-F0h] BYREF
 unsigned int v34[3]; // [rsp+D4h] [rbp-ECh] BYREF
 unsigned int v35[8]; // [rsp+E0h] [rbp-E0h] BYREF
 int v36; // [rsp+100h] [rbp-C0h] BYREF
 int *v37; // [rsp+108h] [rbp-B8h]
 int v38; // [rsp+110h] [rbp-B0h] BYREF
 int *v39; // [rsp+118h] [rbp-A8h]
 int v40; // [rsp+120h] [rbp-A0h] BYREF
 long long v41; // [rsp+128h] [rbp-98h]
 int v42; // [rsp+130h] [rbp-90h] BYREF
 int *v43; // [rsp+138h] [rbp-88h]
 long long v44; // [rsp+140h] [rbp-80h]
 int v45; // [rsp+148h] [rbp-78h] BYREF
 long long v46; // [rsp+150h] [rbp-70h]
 int *v47; // [rsp+158h] [rbp-68h]
 unsigned long long v48[11]; // [rsp+160h] [rbp-60h] BYREF
 unsigned long long v49; // [rsp+1B8h] [rbp-8h]

 v49 = __readfsqword(0x28u);
 puts(asc_3452);
 v19[0] = 1;
 v19[1] = 2;
 v19[2] = 3;
 v0 = struct_simple(v19);
 printf("CMP-L2-01 (struct_simple): %d\n", v0);
 v35[0] = 1;
 v35[1] = 1;
 v35[2] = 1;
 v35[3] = 2;
 v35[4] = 2;
 v35[5] = 2;
 v1 = struct_array((long long)v35, 2);
 printf("CMP-L2-02 (struct_array): %d\n", v1);
 v28[0] = 5;
 v28[1] = 10;
 v28[2] = 0;
 v28[3] = 100;
 v28[4] = 200;
 v2 = struct_nested(v28);
 printf("CMP-L2-03 (struct_nested): %d\n", v2);
 v32[0] = 1;
 v32[1] = 2;
 v32[2] = 3;
 v32[3] = 10;
 v32[4] = 20;
 v32[5] = 255;
 v32[6] = 0;
 v32[7] = 0;
 v32[8] = 0;
 v32[9] = 0;
 v32[10] = 255;
 v32[11] = 42;
 v3 = struct_deep((long long)v32);
 printf("CMP-L2-04 (struct_deep): %d\n", v3);
 v20 = 20;
 v21 = 0;
 v22 = 10;
 v23 = &v20;
 v4 = struct_with_ptr((long long)&v22);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", v4);
 v17 = 0;
 v17 = (unsigned short)(v17 | 1);
 v17 = (unsigned short)((v17 & 0xF9) | 4);
 v17 = (unsigned short)((v17 & 0xC7) | 0x18);
 v5 = v17 & 0x3F;
 v5 = (v5 & 0xFF) | ((unsigned int)25 << 8);
 v17 = (unsigned short)v5;
 v6 = struct_bitfields((unsigned char *)&v17);
 printf("CMP-L2-06 (struct_bitfields): %d\n", v6);
 v33 = 305419896;
 v7 = union_type(&v33, 0);
 printf("CMP-L2-07 (union_type): %d\n", v7);
 v34[0] = 10;
 v34[1] = 20;
 v34[2] = 30;
 v8 = union_array((long long)v34, 3);
 printf("CMP-L2-08 (union_array): %d\n", v8);
 v9 = enum_type(1);
 printf("CMP-L2-09 (enum_type): %d\n", v9);
 v10 = enum_switch(2u);
 printf("CMP-L2-10 (enum_switch): %d\n", v10);
 v24 = 10;
 v25 = process_int;
 v11 = struct_func_ptr(&v24);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", v11);
 v36 = 10;
 v37 = &v38;
 v38 = 20;
 v39 = &v40;
 v40 = 30;
 v41 = 0;
 v12 = linked_list((long long)&v36);
 printf("CMP-L2-12 (linked_list): %d\n", v12);
 v42 = 10;
 v44 = 0;
 v45 = 20;
 v46 = 0;
 v47 = &v42;
 v43 = &v45;
 v13 = doubly_linked_list((long long)&v42);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v13);
 v29 = 100;
 v30 = 0;
 v31 = 0;
 v14 = binary_tree(&v29);
 printf("CMP-L2-14 (binary_tree): %d\n", v14);
 v26 = 1;
 v27 = 0;
 memset(v48, 0, sizeof(v48));
 LODWORD(v48[10]) = 2;
 v48[0] = &v26;
 v15 = graph_traverse((long long)v48);
 printf("CMP-L2-15 (graph_traverse): %d\n", v15);
 return v49 - __readfsqword(0x28u);
}


/* Function: main @ 0x2BA5 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: .term_proc @ 0x2BDC */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6020 */

/* FAILED to decompile: puts @ 0x6028 */

/* FAILED to decompile: __stack_chk_fail @ 0x6030 */

/* FAILED to decompile: printf @ 0x6038 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6040 */

/* FAILED to decompile: __gmon_start__ @ 0x6050 */

/* Total functions decompiled: 68, failed: 6 */
