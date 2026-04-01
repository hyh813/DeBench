/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/2/2_gcc_Os_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef unsigned char _BOOL8;

// External declarations
extern long long (*_gmon_start__)(void);
extern const char *s;
extern const char *asc_216F;
extern const char *asc_2285;
extern const char *asc_241E;
extern int CSWTCH_61[];

// Function declarations
int __printf_chk(int __flag, const char *__format, ...);
unsigned long long __readfsqword(unsigned int __offset);

// Forward declarations
long long test_data_types_l1();
unsigned long long test_array_types();
unsigned long long test_pointer_types();
unsigned long long test_composite_types();

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


/* Function: main @ 0x10A0 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x11B9 */
long long double_value(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: process_int @ 0x11C1 */
long long process_int(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: complex_callback @ 0x11CA */
_BOOL8 complex_callback(unsigned int *a1, unsigned long long *a2)
{
 *a1 += 10;
 return *a2 != 0;
}


/* Function: process_char @ 0x11DB */
long long process_char(unsigned int a1)
{
 long long result; // rax

 result = a1;
 if ( (unsigned char)(a1 - 65) <= 0x19u )
 return a1 + 32;
 return result;
}


/* Function: process_short @ 0x11ED */
long long process_short(int a1, int a2)
{
 return (unsigned int)(a2 + a1);
}


/* Function: process_long @ 0x11F5 */
long long process_long(long long a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x11FE */
long long process_ll(long long a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x120A */
float process_float(float a1)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x121F */
double process_double(double a1)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1234 */
long double process_ld(long double a1)
{
 return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x1243 */
_BOOL8 process_bool(int a1)
{
 bool v1; // al

 v1 = 0;
 if ( a1 > 0 )
 return (a1 & 1) == 0;
 return v1;
}


/* Function: const_param @ 0x1258 */
long long const_param(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: volatile_access @ 0x1262 */
long long volatile_access(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: test_data_types_l1 @ 0x126D */
long long test_data_types_l1()
{
 puts(s);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 3.5);
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 2.1);
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 10.0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 return __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x13EC */
long long array_1d_stack(long long a1, int a2)
{
 long long v2; // rax
 unsigned int v3; // r8d

 v2 = 0;
 v3 = 0;
 while ( a2 > (int)v2 )
 v3 += *(unsigned int *)(a1 + 4 * v2++);
 return v3;
}


/* Function: array_string @ 0x1406 */
long long array_string(long long a1)
{
 long long v1; // rax
 unsigned int v2; // r8d

 v1 = 0;
 do
 v2 = v1++;
 while ( *(unsigned char *)(a1 + v1 - 1) );
 return v2;
}


/* Function: array_2d_stack @ 0x141D */
long long array_2d_stack(unsigned int *a1)
{
 unsigned int *v1; // rdx
 long long result; // rax

 v1 = a1 + 110;
 LODWORD(result) = 0;
 do
 {
 result = (unsigned int)(*a1 + result);
 a1 += 11;
 }
 while ( a1 != v1 );
 return result;
}


/* Function: array_3d @ 0x1436 */
long long array_3d(unsigned int *a1)
{
 unsigned int *v1; // rcx
 long long result; // rax
 unsigned int *v3; // rdx
 int v4; // eax

 v1 = a1 + 125;
 LODWORD(result) = 0;
 do
 {
 v3 = a1 + 25;
 do
 {
 v4 = *a1 + result;
 a1 += 5;
 result = (unsigned int)(*(a1 - 1) + *(a1 - 2) + *(a1 - 3) + *(a1 - 4) + v4);
 }
 while ( a1 != v3 );
 }
 while ( v1 != a1 );
 return result;
}


/* Function: array_vla @ 0x1464 */
long long array_vla(int a1, long long a2)
{
 long long v2; // rax
 unsigned int v3; // r8d

 v2 = 0;
 v3 = 0;
 while ( a1 > (int)v2 )
 v3 += *(unsigned int *)(a2 + 4 * v2++);
 return v3;
}


/* Function: array_pointer @ 0x147E */
long long array_pointer(long long a1, int a2)
{
 long long v2; // rax
 unsigned int v3; // r8d
 long long v4; // rdx

 v2 = 0;
 v3 = 0;
 while ( a2 > (int)v2 )
 {
 v4 = 40 * v2++;
 v3 += *(unsigned int *)(a1 + v4);
 }
 return v3;
}


/* Function: pointer_array @ 0x149C */
long long pointer_array(long long a1, int a2)
{
 long long v2; // rax
 unsigned int v3; // r8d
 unsigned int *v4; // rdx

 if ( a2 > 10 )
 a2 = 10;
 v2 = 0;
 v3 = 0;
 while ( a2 > (int)v2 )
 {
 v4 = *(unsigned int **)(a1 + 8 * v2);
 if ( v4 )
 v3 += *v4;
 ++v2;
 }
 return v3;
}


/* Function: array_complex_index @ 0x14C8 */
long long array_complex_index(long long a1, int a2, int a3, int a4, int a5)
{
 long long result; // rax

 result = 0xFFFFFFFFLL;
 if ( (a5 | a4) >= 0 && a4 < a2 && a5 < a3 )
 return *(unsigned int *)(a1 + 4LL * (a4 + a5 * a2));
 return result;
}


/* Function: array_oob @ 0x14EF */
long long array_oob(long long a1, int a2)
{
 long long v2; // rax
 unsigned int v3; // r8d

 v2 = 0;
 v3 = 0;
 while ( a2 >= (int)v2 )
 v3 += *(unsigned int *)(a1 + 4 * v2++);
 return v3;
}


/* Function: test_array_types @ 0x1509 */
unsigned long long test_array_types()
{
 int v0; // eax
 int v1; // eax
 unsigned int *v2; // rcx
 int i; // edx
 long long j; // rax
 int v5; // esi
 int v6; // eax
 char *v7; // rdx
 char *v8; // rax
 int v9; // ebx
 int v10; // eax
 int v11; // eax
 int v12; // eax
 int *v13; // rdi
 long long k; // rcx
 int v15; // eax
 long long m; // rax
 int v18; // [rsp+4h] [rbp-534h] BYREF
 int v19; // [rsp+8h] [rbp-530h] BYREF
 int v20; // [rsp+Ch] [rbp-52Ch] BYREF
 long long v21; // [rsp+10h] [rbp-528h] BYREF
 int v22; // [rsp+18h] [rbp-520h]
 unsigned long long v23[2]; // [rsp+1Ch] [rbp-51Ch]
 int v24; // [rsp+2Ch] [rbp-50Ch]
 long long *v25[3]; // [rsp+30h] [rbp-508h] BYREF
 int v26[32]; // [rsp+48h] [rbp-4F0h] BYREF
 int v27; // [rsp+C8h] [rbp-470h]
 unsigned int v28[50]; // [rsp+D4h] [rbp-464h] BYREF
 unsigned int v29[100]; // [rsp+19Ch] [rbp-39Ch] BYREF
 unsigned int v30[125]; // [rsp+32Ch] [rbp-20Ch] BYREF
 char v31; // [rsp+520h] [rbp-18h] BYREF
 char v32[6]; // [rsp+522h] [rbp-16h] BYREF
 unsigned long long v33; // [rsp+528h] [rbp-10h]

  v33 = __readfsqword(0x28u);
  puts(asc_216F);
 v23[0] = 0x200000001LL;
 v23[1] = 0x400000003LL;
 v24 = 5;
 v0 = array_1d_stack((long long)&v23[0], 5);
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v0);
 strcpy(v32, "hello");
 v1 = array_string((long long)v32);
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v1);
 for ( i = 0; i != 10; ++i )
 {
 for ( j = 0; j != 10; ++j )
 {
 v5 = j;
 if ( i != (unsigned int)j )
 v5 = 0;
 v29[i * 10 + j] = v5;
 }
 }
 v6 = array_2d_stack(v29);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v6);
 for ( i = 0; i < 125; ++i )
 {
 v30[i] = 1;
 }
 v10 = array_3d(v30);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v10);
 v21 = 0x140000000ALL;
 v22 = 30;
 v11 = array_vla(3, (long long)&v21);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", v11);
 v28[0] = 0;
 v28[10] = 10;
 v28[20] = 20;
 v28[30] = 30;
  v28[40] = 40;
 v12 = array_pointer((long long)v28, 5);
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", v12);
 v9 = 0;
 for ( k = 0; k != 14; ++k )
 {
 v26[k] = v9;
 }
  v25[0] = &v18;
 v25[1] = &v19;
 v18 = 10;
 v19 = 20;
 v20 = 30;
 v25[2] = &v20;
 v15 = pointer_array((long long)v25, 3);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v15);
 for ( m = 0; m != 20; ++m )
 {
 v26[m + 15] = m;
 }
 v27 = array_complex_index((long long)v26, 20, 32, 4, 5);
 __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v27);
 return v33 - __readfsqword(0x28u);
}


/* Function: ptr_single @ 0x17B6 */
long long ptr_single(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0x17C0 */
long long ptr_double(unsigned int **a1)
{
 return (unsigned int)(**a1 + 5);
}


/* Function: ptr_triple @ 0x17CD */
long long ptr_triple(unsigned int ***a1)
{
 return (unsigned int)(***a1 + 1);
}


/* Function: ptr_increment @ 0x17DC */
long long ptr_increment(long long a1, int a2)
{
 long long v2; // rax
 unsigned int v3; // r8d

 v2 = 0;
 v3 = 0;
 while ( a2 > (int)v2 )
 v3 += *(unsigned int *)(a1 + 4 * v2++);
 return v3;
}


/* Function: ptr_offset @ 0x17F6 */
long long ptr_offset(long long a1, int a2)
{
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: ptr_diff @ 0x1801 */
long long ptr_diff(long long a1, long long a2)
{
 return (unsigned int)((a1 - a2) >> 2);
}


/* Function: ptr_void @ 0x180F */
long long ptr_void(unsigned int *a1, int a2)
{
 long long result; // rax

 if ( !a2 )
 return *a1;
 result = 0xFFFFFFFFLL;
 if ( a2 == 1 )
 return (unsigned int)*(char *)a1;
 return result;
}


/* Function: ptr_const @ 0x1825 */
long long ptr_const(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: ptr_const_ptr @ 0x182E */
long long ptr_const_ptr(unsigned int *a1)
{
 long long result; // rax

 result = (unsigned int)(*a1 + 5);
 *a1 = result;
 return result;
}


/* Function: ptr_func_simple @ 0x183A */
long long ptr_func_simple(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0x1845 */
long long ptr_func_complex(long long ( *a1)(long long, unsigned long long *), long long a2)
{
 unsigned long long v3[4]; // [rsp+8h] [rbp-20h] BYREF

 v3[2] = __readfsqword(0x28u);
 v3[1] = 0;
 v3[0] = "test";
 return a1(a2, v3);
}


/* Function: ptr_cast @ 0x1898 */
long long ptr_cast(unsigned int *a1)
{
 return *a1;
}


/* Function: opaque_handle_create @ 0x189F */
long long opaque_handle_create(int a1)
{
 return a1;
}


/* Function: opaque_handle_op @ 0x18A7 */
long long opaque_handle_op(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: test_pointer_types @ 0x18AF */
unsigned long long test_pointer_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v5; // [rsp+8h] [rbp-40h] BYREF
 int v6; // [rsp+Ch] [rbp-3Ch] BYREF
 int *v7; // [rsp+10h] [rbp-38h] BYREF
 int **v8; // [rsp+18h] [rbp-30h] BYREF
 unsigned long long v9[2]; // [rsp+24h] [rbp-24h]
 int v10; // [rsp+34h] [rbp-14h]
 unsigned long long v11; // [rsp+38h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  puts(asc_2285);
  __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
  __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
  v5 = 5;
  v7 = &v5;
  v8 = &v7;
  v0 = ptr_triple(&v8);
  __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", v0);
  v9[0] = 0x200000001LL;
  v9[1] = 0x400000003LL;
 v10 = 5;
 v1 = ptr_increment((long long)&v9[0], 5);
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v1);
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 v2 = ptr_func_simple((long long ( *)(unsigned long long))double_value, 5u);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", v2);
 v6 = 5;
 v3 = ptr_func_complex((long long ( *)(long long, unsigned long long *))complex_callback, (long long)&v6);
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", v3);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
 return v11 - __readfsqword(0x28u);
}


/* Function: struct_simple @ 0x1AB7 */
long long struct_simple(unsigned int *a1)
{
 return (unsigned int)(a1[2] + *a1 + a1[1]);
}


/* Function: struct_array @ 0x1AC4 */
long long struct_array(unsigned int *a1, int a2)
{
 int v2; // edx
 unsigned int v3; // r8d
 int v4; // eax

 v2 = 0;
 v3 = 0;
 while ( v2 < a2 )
 {
 v4 = *a1 + a1[1];
 ++v2;
 a1 += 3;
 v3 += *(a1 - 1) + v4;
 }
 return v3;
}


/* Function: struct_nested @ 0x1AE8 */
long long struct_nested(unsigned int *a1)
{
 return (unsigned int)(a1[3] + *a1);
}


/* Function: struct_deep @ 0x1AF2 */
long long struct_deep(long long a1)
{
 return (unsigned int)(*(unsigned int *)(a1 + 20) + *(unsigned int *)(a1 + 8));
}


/* Function: struct_with_ptr @ 0x1AFD */
long long struct_with_ptr(long long a1)
{
 int *v1; // rcx
 int v2; // edx

 v1 = *(int **)(a1 + 8);
 v2 = 0;
 if ( v1 )
 v2 = *v1;
 return (unsigned int)(v2 + *(unsigned int *)a1);
}


/* Function: struct_bitfields @ 0x1B13 */
long long struct_bitfields(unsigned int *a1)
{
 return ((unsigned short)*a1 >> 6) + ((*(unsigned char *)a1 >> 3) & 7) + ((*(unsigned char *)a1 >> 1) & 3) + (*(unsigned char *)a1 & 1u);
}


/* Function: union_type @ 0x1B3B */
long long union_type(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return (unsigned int)(int)*(float *)a1;
 return (unsigned int)*(char *)a1;
}


/* Function: union_array @ 0x1B53 */
long long union_array(long long a1, int a2)
{
 long long v2; // rax
 unsigned int v3; // r8d

 v2 = 0;
 v3 = 0;
 while ( a2 > (int)v2 )
 v3 += *(unsigned int *)(a1 + 4 * v2++);
 return v3;
}


/* Function: enum_type @ 0x1B6D */
long long enum_type(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: enum_switch @ 0x1B75 */
long long enum_switch(unsigned int a1)
{
 long long result; // rax

 result = 4294967197LL;
 if ( a1 <= 3 )
 return (unsigned int)CSWTCH_61[a1];
 return result;
}


/* Function: struct_func_ptr @ 0x1B91 */
long long struct_func_ptr(unsigned int *a1)
{
 return (*((long long ( **)(unsigned long long))a1 + 1))(*a1);
}


/* Function: linked_list @ 0x1B9D */
long long linked_list(long long a1)
{
 long long result; // rax

 result = 0;
 while ( a1 )
 {
 result = (unsigned int)(*(unsigned int *)a1 + result);
 a1 = *(unsigned long long *)(a1 + 8);
 }
 return result;
}


/* Function: doubly_linked_list @ 0x1BB1 */
long long doubly_linked_list(long long a1)
{
 long long result; // rax

 result = 0;
 while ( a1 )
 {
 result = (unsigned int)(*(unsigned int *)a1 + result);
 a1 = *(unsigned long long *)(a1 + 8);
 }
 return result;
}


/* Function: binary_tree_sum @ 0x1BC5 */
long long binary_tree_sum(long long a1)
{
 unsigned int v1; // r12d
 int v3; // eax

 v1 = 0;
 while ( a1 )
 {
 v3 = *(unsigned int *)a1 + binary_tree_sum(*(unsigned long long *)(a1 + 8));
 a1 = *(unsigned long long *)(a1 + 16);
 v1 += v3;
 }
 return v1;
}


/* Function: binary_tree @ 0x1BF4 */
long long binary_tree(long long a1)
{
 return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x1BFA */
long long graph_traverse(long long a1)
{
 long long v1; // rax
 unsigned int v2; // r8d
 long long i; // rdx

 v1 = 0;
 v2 = 0;
 while ( *(unsigned int *)(a1 + 80) > (int)v1 )
 {
 for ( i = *(unsigned long long *)(a1 + 8 * v1); i; i = *(unsigned long long *)(i + 8) )
 v2 += *(unsigned int *)i;
 ++v1;
 }
 return v2;
}


/* Function: test_composite_types @ 0x1C25 */
unsigned long long test_composite_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 char *v8; // rdi
 long long i; // rcx
 int v10; // eax
 unsigned long long v12; // [rsp+8h] [rbp-150h] BYREF
 int v13; // [rsp+10h] [rbp-148h] BYREF
 long long v14; // [rsp+18h] [rbp-140h]
 int v15; // [rsp+20h] [rbp-138h] BYREF
 int *v16; // [rsp+28h] [rbp-130h]
 unsigned int v17; // [rsp+30h] [rbp-128h] BYREF
 long long ( *v18)(int); // [rsp+38h] [rbp-120h]
 int v19; // [rsp+40h] [rbp-118h] BYREF
 long long v20; // [rsp+48h] [rbp-110h]
 int v21; // [rsp+50h] [rbp-108h] BYREF
 long long v22; // [rsp+58h] [rbp-100h]
 long long v23; // [rsp+60h] [rbp-F8h]
 long long v24; // [rsp+6Ch] [rbp-ECh] BYREF
 int v25; // [rsp+74h] [rbp-E4h]
 unsigned long long v26[3]; // [rsp+78h] [rbp-E0h] BYREF
 int v27; // [rsp+90h] [rbp-C8h] BYREF
 int *v28; // [rsp+98h] [rbp-C0h]
 int v29; // [rsp+A0h] [rbp-B8h] BYREF
 int *v30; // [rsp+A8h] [rbp-B0h]
 int v31; // [rsp+B0h] [rbp-A8h] BYREF
 long long v32; // [rsp+B8h] [rbp-A0h]
 int v33; // [rsp+C0h] [rbp-98h] BYREF
 int *v34; // [rsp+C8h] [rbp-90h]
 long long v35; // [rsp+D0h] [rbp-88h]
 int v36; // [rsp+D8h] [rbp-80h] BYREF
 long long v37; // [rsp+E0h] [rbp-78h]
 int *v38; // [rsp+E8h] [rbp-70h]
 int *v39; // [rsp+F0h] [rbp-68h] BYREF
 char v40; // [rsp+F8h] [rbp-60h] BYREF
 int v41; // [rsp+140h] [rbp-18h]
 unsigned long long v42; // [rsp+148h] [rbp-10h]

 v42 = __readfsqword(0x28u);
 puts(asc_241E);
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 v26[0] = 0x100000001LL;
 v26[1] = 0x200000001LL;
 v26[2] = 0x200000002LL;
 v0 = struct_array(v26, 2);
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", v0);
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 v13 = 20;
 v14 = 0;
 v15 = 10;
 v16 = &v13;
 v1 = struct_with_ptr((long long)&v15);
 __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", v1);
 v12 = 0x191D;
 v2 = struct_bitfields(&v12);
 __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", v2);
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 v24 = 0x140000000ALL;
 v25 = 30;
 v3 = union_array((long long)&v24, 3);
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", v3);
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 v17 = 10;
 v18 = process_int;
 v4 = struct_func_ptr(&v17);
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", v4);
 v27 = 10;
 v28 = &v29;
 v29 = 20;
 v30 = &v31;
 v31 = 30;
 v32 = 0;
 v5 = linked_list((long long)&v27);
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v5);
 v33 = 10;
 v38 = &v33;
 v34 = &v36;
 v35 = 0;
 v36 = 20;
 v37 = 0;
 v6 = doubly_linked_list((long long)&v33);
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v6);
 v21 = 100;
 v22 = 0;
 v23 = 0;
 v7 = binary_tree_sum((long long)&v21);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v7);
 v8 = &v40;
 for ( i = 20; i; --i )
 {
 *(unsigned int *)v8 = 0;
 v8 += 4;
 }
 v19 = 1;
 v20 = 0;
 v39 = &v19;
 v19 = 1;
 v41 = 2;
 v10 = graph_traverse((long long)&v39);
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", v10);
 return v42 - __readfsqword(0x28u);
}


/* Function: .term_proc @ 0x1FA4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4020 */

/* FAILED to decompile: puts @ 0x4028 */

/* FAILED to decompile: __stack_chk_fail @ 0x4030 */

/* FAILED to decompile: __printf_chk @ 0x4038 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4040 */

/* FAILED to decompile: __gmon_start__ @ 0x4050 */

/* Total functions decompiled: 68, failed: 6 */
