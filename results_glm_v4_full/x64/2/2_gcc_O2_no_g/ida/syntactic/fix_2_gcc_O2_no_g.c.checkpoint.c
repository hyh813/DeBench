/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/2/2_gcc_O2_no_g
 * Processor: pc
 */

#define LODWORD(x) (*((unsigned int *)&(x)))

static inline unsigned long long __readfsqword(unsigned long long offset) {
    unsigned long long ret;
    __asm__ volatile ("movq %%fs:%1, %0" : "=r" (ret) : "m" (*(unsigned long long *)(offset)));
    return ret;
}

extern void _gmon_start__(void);

/* Function prototypes for functions called by main */
long long test_data_types_l1(void);
long long test_array_types(long long a1, long long a2, long long a3, long long a4, long long a5, long long a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, char a14);
long long test_pointer_types(void);
unsigned long long test_composite_types(void);

/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 ;
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 ;
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 ;
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 ;
}


/* Function: main @ 0x10A0 */
int main()
{
    test_data_types_l1();
    test_array_types(
        0, 0, 0, 0, 0, 0,  /* Array parameters */
        10, 10, 5, 5,       /* Dimensions */
        0, 0, 0,            /* Other params */
        0                  /* char param */
    );
    test_pointer_types();
    test_composite_types();
    return 0;
}


/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x11C0 */
long long process_char(unsigned int a1)
{
 long long result; // rax

 result = a1 + 32;
 if ( (unsigned char)(a1 - 65) >= 0x1Au )
 return a1;
 return result;
}


/* Function: process_short @ 0x11E0 */
long long process_short(int a1, int a2)
{
 return (unsigned int)(a2 + a1);
}


/* Function: process_int @ 0x11F0 */
long long process_int(int a1)
{
 return (unsigned int)(2 * a1 + 1);
}


/* Function: process_long @ 0x1200 */
long long process_long(long long a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x1210 */
long long process_ll(long long a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x1220 */
float process_float(float a1)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x1240 */
double process_double(double a1)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1260 */
long double process_ld(long double a1)
{
 return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x1270 */
_Bool process_bool(int a1)
{
 _Bool result; // rax

 result = (a1 & 1) == 0;
 if ( a1 <= 0 )
 return 0;
 return result;
}


/* Function: const_param @ 0x1290 */
long long const_param(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: volatile_access @ 0x12A0 */
long long volatile_access(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


static const char s[] = "Testing Data Types";
static const char asc_33E1[] = "Testing Array Types";
static const char asc_3454[] = "Testing Pointer Types";
static const char asc_354A[] = "Testing Composite Types";

/* Function: test_data_types_l1 @ 0x12B0 */
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


/* Function: array_1d_stack @ 0x1440 */
long long array_1d_stack(unsigned int *a1, int a2)
{
 long long v2; // rdx
 long long result; // rax

 if ( a2 <= 0 )
 return 0;
 v2 = (long long)&a1[a2 - 1 + 1];
 LODWORD(result) = 0;
 do
 result = (unsigned int)(*a1++ + result);
 while ( a1 != (unsigned int *)v2 );
 return result;
}


/* Function: array_string @ 0x1470 */
long long array_string(unsigned char *a1)
{
 long long v1; // rax
 unsigned int v2; // r8d

 if ( !*a1 )
 return 0;
 v1 = 1;
 do
 v2 = v1++;
 while ( a1[v1 - 1] );
 return v2;
}


/* Function: array_2d_stack @ 0x14A0 */
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


/* Function: array_3d @ 0x14C0 */
long long array_3d(long long a1)
{
 unsigned int *v1; // rcx
 long long result; // rax
 unsigned int *v3; // rdx
 int v4; // eax

 v1 = (unsigned int *)(a1 + 100);
 result = 0;
 do
 {
 v3 = v1 - 25;
 do
 {
 v4 = *v3 + result;
 v3 += 5;
 result = (unsigned int)(*(v3 - 1) + *(v3 - 2) + *(v3 - 3) + *(v3 - 4) + v4);
 }
 while ( v3 != v1 );
 v1 = v3 + 25;
 }
 while ( v3 + 25 != (unsigned int *)(a1 + 600) );
 return result;
}


/* Function: array_vla @ 0x1500 */
long long array_vla(int a1, unsigned int *a2)
{
 long long v2; // rdx
 long long result; // rax

 if ( a1 <= 0 )
 return 0;
 v2 = (long long)&a2[a1 - 1 + 1];
 result = 0;
 do
 result = (unsigned int)(*a2++ + result);
 while ( a2 != (unsigned int *)v2 );
 return result;
}


/* Function: array_pointer @ 0x1530 */
long long array_pointer(unsigned int *a1, int a2)
{
 long long v2; // rdx
 long long result; // rax

 if ( a2 <= 0 )
 return 0;
 v2 = (long long)&a1[10 * (a2 - 1) + 10];
 result = 0;
 do
 {
 result = (unsigned int)(*a1 + result);
 a1 += 10;
 }
 while ( a1 != (unsigned int *)v2 );
 return result;
}


/* Function: pointer_array @ 0x1570 */
long long pointer_array(long long a1, int a2)
{
 int v2; // ecx
 long long v3; // rax
 unsigned int v4; // r8d
 unsigned int *v5; // rdx

 v2 = 10;
 if ( a2 <= 10 )
 v2 = a2;
 if ( a2 <= 0 )
 return 0;
 v3 = 0;
 v4 = 0;
 do
 {
 v5 = *(unsigned int **)(a1 + 8 * v3);
 if ( v5 )
 v4 += *v5;
 ++v3;
 }
 while ( v2 > (int)v3 );
 return v4;
}


/* Function: array_complex_index @ 0x15C0 */
long long array_complex_index(long long a1, int a2, int a3, int a4, int a5)
{
 if ( (a5 | a4) < 0 || a4 >= a2 || a5 >= a3 )
 return 0xFFFFFFFFLL;
 else
 return *(unsigned int *)(a1 + 4LL * (a4 + a5 * a2));
}


/* Function: array_oob @ 0x15F0 */
long long array_oob(unsigned int *a1, int a2)
{
 long long result; // rax
 long long v3; // rdx

 if ( a2 < 0 )
 return 0;
 result = 0;
 v3 = (long long)&a1[a2 + 1];
 do
 result = (unsigned int)(*a1++ + result);
 while ( a1 != (unsigned int *)v3 );
 return result;
}


/* Function: test_array_types @ 0x1620 */
long long test_array_types(
 long long a1,
 long long a2,
 long long a3,
 long long a4,
 long long a5,
 long long a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 char a14)
{
 long long v14; // rax
 int v15; // edx
 long long *v16; // r8
 int v17; // ecx
 unsigned char *v18; // rsi
 long long i; // rax
 int v20; // edx
 int v21; // edx
 char *v22; // rcx
 unsigned char *v23; // rdx
 unsigned char *v24; // rax
 int v25; // edx
 char *v26; // rax
 int v27; // edx
 long long j; // rax
 unsigned int v30[20]; // [rsp+0h] [rbp-3F8h]
 unsigned char v31[440]; // [rsp+50h] [rbp-3A8h] BYREF
 long long v32; // [rsp+208h] [rbp-1F0h] BYREF
 unsigned char v33[414]; // [rsp+244h] [rbp-1B4h] BYREF
 char v34[6]; // [rsp+3E2h] [rbp-16h] BYREF
 unsigned long long v35; // [rsp+3E8h] [rbp-10h]

 v35 = __readfsqword(0x28u);
 puts(asc_33E1);
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
 strcpy(v34, "hello");
 v14 = 1;
 do
 v15 = v14++;
 while ( v14 < 6 && v33[v14] );
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v15);
 v16 = (long long *)v31;
 v17 = 0;
 v18 = v31;
 do
 {
 for ( i = 0; i != 10; ++i )
 {
 v20 = 0;
 if ( v17 == (unsigned int)i )
 v20 = i;
 ((unsigned int *)v18)[i] = v20;
 }
 ++v17;
 v18 += 40;
 }
 while ( v17 != 10 );
 v21 = 0;
 do
 {
 v21 += *(unsigned int *)v16;
 v16 = (long long *)((char *)v16 + 44);
 }
 while ( v16 != (long long *)&v32 );
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v21);
 v22 = v33;
 v23 = v33;
 do
 {
 v24 = v23 - 100;
 do
 {
 *(unsigned int *)v24 = 1;
 v24 += 20;
 *(unsigned int *)(v24 - 4) = 1;
 *(unsigned int *)(v24 - 8) = 1;
 *(unsigned int *)(v24 - 12) = 1;
 *(unsigned int *)(v24 - 16) = 1;
 }
 while ( v24 != v23 );
 v23 = v24 + 100;
 }
 while ( (unsigned long long)v24 < (unsigned long long)v33 + 414 );
 v25 = 0;
 do
 {
 v26 = v22 - 100;
 do
 {
 v27 = *(unsigned int *)v26 + v25;
 v26 += 20;
 v25 = *(unsigned int *)(v26 - 4) + *(unsigned int *)(v26 - 8) + *(unsigned int *)(v26 - 12) + *(unsigned int *)(v26 - 16) + v27;
 }
 while ( v26 != v22 );
 v22 += 100;
 }
 while ( (unsigned long long)v22 < (unsigned long long)v33 + 414 );
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v25);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 for ( j = 0; j != 20; ++j )
 v30[j] = j;
 return __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v30[17]);
}


/* Function: ptr_single @ 0x1840 */
long long ptr_single(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0x1850 */
long long ptr_double(unsigned int **a1)
{
 return (unsigned int)(**a1 + 5);
}


/* Function: ptr_triple @ 0x1860 */
long long ptr_triple(unsigned int ***a1)
{
 return (unsigned int)(***a1 + 1);
}


/* Function: ptr_increment @ 0x1870 */
long long ptr_increment(unsigned int *a1, int a2)
{
 long long result; // rax
 unsigned int *v3; // rdx

 if ( a2 <= 0 )
 return 0;
 LODWORD(result) = 0;
 v3 = &a1[a2];
 do
 result = (unsigned int)(*a1++ + result);
 while ( a1 != v3 );
 return result;
}


/* Function: ptr_offset @ 0x18A0 */
long long ptr_offset(long long a1, int a2)
{
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: ptr_diff @ 0x18B0 */
long long ptr_diff(long long a1, long long a2)
{
 return (unsigned int)((a1 - a2) >> 2);
}


/* Function: ptr_void @ 0x18C0 */
long long ptr_void(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return (unsigned int)*(char *)a1;
 return 0xFFFFFFFFLL;
}


/* Function: ptr_const @ 0x18F0 */
long long ptr_const(unsigned int *a1)
{
 return (unsigned int)(2 * *a1);
}


/* Function: ptr_const_ptr @ 0x1900 */
long long ptr_const_ptr(unsigned int *a1)
{
 long long result; // rax

 result = (unsigned int)(*a1 + 5);
 *a1 = result;
 return result;
}


/* Function: ptr_func_simple @ 0x1910 */
long long ptr_func_simple(long long ( *a1)(unsigned long long), unsigned int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0x1920 */
long long ptr_func_complex(long long ( *a1)(long long, unsigned long long *), long long a2)
{
 unsigned long long v3[5]; // [rsp+0h] [rbp-28h] BYREF

 v3[3] = __readfsqword(0x28u);
 v3[1] = 0;
 v3[0] = (unsigned long long)"test";
 return a1(a2, v3);
}


/* Function: ptr_cast @ 0x1970 */
long long ptr_cast(unsigned int *a1)
{
 return *a1;
}


/* Function: opaque_handle_create @ 0x1980 */
long long opaque_handle_create(int a1)
{
 return a1;
}


/* Function: opaque_handle_op @ 0x1990 */
long long opaque_handle_op(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: test_pointer_types @ 0x19A0 */
long long test_pointer_types()
{
 int v0; // ecx
 int v1; // edx
 char *i; // rax
 unsigned long long *v4; // [rsp+0h] [rbp-28h] BYREF
 int v5; // [rsp+10h] [rbp-18h]
 char v6; // [rsp+14h] [rbp-14h] BYREF
 unsigned long long v7; // [rsp+18h] [rbp-10h]
 unsigned long long v4_storage[2];

 unsigned long long v7_save;
 v7_save = __readfsqword(0x28u);
 v4 = v4_storage;
 puts(asc_3454);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 v5 = 5;
 v0 = 1;
 *(unsigned long long *)v4 = 0x200000001LL;
 v1 = 0;
 *((unsigned long long *)v4 + 1) = 0x400000003LL;
 for ( i = (char *)v4; ; )
 {
 v1 += v0;
 if ( i == (char *)((char *)v4 + 16) )
 break;
 i += 4;
 v0 = *(unsigned int *)i;
 }
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v1);
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 return __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x1B80 */
long long struct_simple(unsigned int *a1)
{
 return (unsigned int)(a1[2] + *a1 + a1[1]);
}


/* Function: struct_array @ 0x1B90 */
long long struct_array(long long a1, int a2)
{
 unsigned int v2; // r8d
 long long v3; // rdx
 int v4; // eax

 if ( a2 <= 0 )
 return 0;
 v2 = 0;
 v3 = a1 + 12LL * (unsigned int)(a2 - 1) + 12;
 do
 {
 v4 = *(unsigned int *)(a1 + 4);
 a1 += 12;
 v2 += *(unsigned int *)(a1 - 4) + *(unsigned int *)(a1 - 12) + v4;
 }
 while ( a1 != v3 );
 return v2;
}


/* Function: struct_nested @ 0x1BE0 */
long long struct_nested(unsigned int *a1)
{
 return (unsigned int)(a1[3] + *a1);
}


/* Function: struct_deep @ 0x1BF0 */
long long struct_deep(long long a1)
{
 return (unsigned int)(*(unsigned int *)(a1 + 20) + *(unsigned int *)(a1 + 8));
}


/* Function: struct_with_ptr @ 0x1C00 */
long long struct_with_ptr(unsigned int *a1)
{
 unsigned int *v1; // rdx
 long long result; // rax

 v1 = (unsigned int *)*((unsigned long long *)a1 + 1);
 result = *a1;
 if ( v1 )
 return (unsigned int)(*v1 + result);
 return result;
}


/* Function: struct_bitfields @ 0x1C20 */
long long struct_bitfields(unsigned short *a1)
{
 return (*a1 >> 6) + ((*(unsigned char *)a1 >> 3) & 7) + ((*(unsigned char *)a1 >> 1) & 3) + (*(unsigned char *)a1 & 1u);
}


/* Function: union_type @ 0x1C50 */
long long union_type(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return (unsigned int)(int)*(float *)a1;
 return (unsigned int)*(char *)a1;
}


/* Function: union_array @ 0x1C80 */
long long union_array(unsigned int *a1, int a2)
{
 long long v2; // rdx
 long long result; // rax

 if ( a2 <= 0 )
 return 0;
 v2 = (long long)&a1[a2 - 1 + 1];
 LODWORD(result) = 0;
 do
 result = (unsigned int)(*a1++ + result);
 while ( a1 != (unsigned int *)v2 );
 return result;
}


/* Function: enum_type @ 0x1CB0 */
long long enum_type(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: enum_switch @ 0x1CC0 */
long long enum_switch(unsigned int a1)
{
 static const long long CSWTCH_61[] = { 0LL, 10LL, 20LL, 50LL };
 long long result; // rax

 result = 4294967197LL;
 if ( a1 <= 3 )
 return CSWTCH_61[a1];
 return result;
}


/* Function: struct_func_ptr @ 0x1CE0 */
long long struct_func_ptr(unsigned int *a1)
{
 return (*((long long ( **)(unsigned long long))a1 + 1))(*a1);
}


/* Function: linked_list @ 0x1CF0 */
long long linked_list(long long a1)
{
 long long result; // rax

 for ( result = 0; a1; a1 = *(unsigned long long *)(a1 + 8) )
 result = (unsigned int)(*(unsigned int *)a1 + result);
 return result;
}


/* Function: doubly_linked_list @ 0x1D20 */
long long doubly_linked_list(long long a1)
{
 long long result; // rax

 for ( result = 0; a1; a1 = *(unsigned long long *)(a1 + 8) )
 result = (unsigned int)(*(unsigned int *)a1 + result);
 return result;
}


/* Function: binary_tree_sum @ 0x1D50 */
long long binary_tree_sum(long long a1)
{
 int *v1; // r11
 int *v2; // rbx
 int v3; // r10d
 int v4; // r13d
 int v5; // r11d
 int *v6; // rdx
 int *v7; // rsi
 int v8; // ecx
 int v9; // r9d
 int *v10; // rbp
 int v11; // r15d
 int v12; // r8d
 int *v13; // r13
 long long v14; // r12
 int v15; // r14d
 int v16; // ebx
 int v17; // eax
 int *v19; // [rsp+8h] [rbp-A0h]
 int *v20; // [rsp+10h] [rbp-98h]
 int *v21; // [rsp+18h] [rbp-90h]
 int v22; // [rsp+20h] [rbp-88h]
 int v23; // [rsp+24h] [rbp-84h]
 int v24; // [rsp+28h] [rbp-80h]
 int v25; // [rsp+2Ch] [rbp-7Ch]
 int v26; // [rsp+30h] [rbp-78h]
 int v27; // [rsp+34h] [rbp-74h]
 int v28; // [rsp+38h] [rbp-70h]
 int v29; // [rsp+3Ch] [rbp-6Ch]
 int *v30; // [rsp+40h] [rbp-68h]
 int *v31; // [rsp+48h] [rbp-60h]
 unsigned int i; // [rsp+50h] [rbp-58h]
 int v33; // [rsp+54h] [rbp-54h]
 int v34; // [rsp+60h] [rbp-48h]
 int v35; // [rsp+64h] [rbp-44h]
 int v36; // [rsp+68h] [rbp-40h]
 int v37; // [rsp+6Ch] [rbp-3Ch]

 v21 = a1;
 for ( i = 0; v21; v21 = (int *)*((unsigned long long *)v21 + 2) )
 {
 v25 = 0;
 v23 = *v21;
 v19 = (int *)*((unsigned long long *)v21 + 1);
 if ( v19 )
 {
 do
 {
 v26 = 0;
 v24 = *v19;
 v20 = (int *)*((unsigned long long *)v19 + 1);
 if ( v20 )
 {
 do
 {
 v27 = 0;
 v1 = (int *)*((unsigned long long *)v20 + 1);
 v29 = *v20;
 if ( v1 )
 {
 do
 {
 v2 = (int *)*((unsigned long long *)v1 + 1);
 v3 = 0;
 v28 = *v1;
 if ( v2 )
 {
 v30 = v1;
 do
 {
 v4 = *(unsigned int *)v2;
 v5 = 0;
 v6 = (int *)*((unsigned long long *)v2 + 1);
 if ( v6 )
 {
 do
 {
 v7 = (int *)*((unsigned long long *)v6 + 1);
 v8 = *v6;
 v9 = 0;
 if ( v7 )
 {
 do
 {
 v10 = (int *)*((unsigned long long *)v7 + 1);
 v11 = 0;
 v22 = *v7;
 if ( v10 )
 {
 v12 = v4;
 v13 = v2;
 do
 {
 v14 = *((unsigned long long *)v10 + 1);
 v15 = *v10;
 v16 = 0;
 if ( v14 )
 {
 do
 {
 v37 = v12;
 v36 = v9;
 v35 = v5;
 v34 = v8;
 v33 = v3;
 v31 = v6;
 v17 = *(unsigned int *)v14 + binary_tree_sum((long long)*(unsigned long long *)(v14 + 8));
 v14 = *(unsigned long long *)(v14 + 16);
 v16 += v17;
 v6 = v31;
 v3 = v33;
 v8 = v34;
 v5 = v35;
 v9 = v36;
 v12 = v37;
 }
 while ( v14 );
 v15 += v16;
 }
 v10 = (int *)*((unsigned long long *)v10 + 2);
 v11 += v15;
 }
 while ( v10 );
 v22 += v11;
 v2 = v13;
 v4 = v12;
 }
 v7 = (int *)*((unsigned long long *)v7 + 2);
 v9 += v22;
 }
 while ( v7 );
 v8 += v9;
 }
 v6 = (int *)*((unsigned long long *)v6 + 2);
 v5 += v8;
 }
 while ( v6 );
 v4 += v5;
 }
 v2 = (int *)*((unsigned long long *)v2 + 2);
 v3 += v4;
 }
 while ( v2 );
 v28 += v3;
 v1 = v30;
 }
 v1 = (int *)*((unsigned long long *)v1 + 2);
 v27 += v28;
 }
 while ( v1 );
 v29 += v27;
 }
 v26 += v29;
 v20 = (int *)*((unsigned long long *)v20 + 2);
 }
 while ( v20 );
 v24 += v26;
 }
 v25 += v24;
 v19 = (int *)*((unsigned long long *)v19 + 2);
 }
 while ( v19 );
 v23 += v25;
 }
 i += v23;
 }
 return i;
}


/* Function: binary_tree @ 0x1FB0 */
long long binary_tree(long long a1)
{
 unsigned int v1; // r12d
 long long v2; // rbx
 int v3; // eax

 v1 = 0;
 if ( a1 )
 {
 v2 = a1;
 do
 {
 v3 = *(unsigned int *)v2 + binary_tree_sum(*(long long *)(v2 + 8));
 v2 = *(unsigned long long *)(v2 + 16);
 v1 += v3;
 }
 while ( v2 );
 }
 return v1;
}


/* Function: graph_traverse @ 0x1FF0 */
long long graph_traverse(long long *a1)
{
 int v1; // eax
 unsigned int v2; // r8d
 long long v3; // rdx
 long long i; // rax

 v1 = *((unsigned int *)a1 + 20);
 if ( v1 <= 0 )
 return 0;
 v2 = 0;
 v3 = (long long)&a1[(unsigned int)(v1 - 1) + 1];
 do
 {
 for ( i = *a1; i; i = *(unsigned long long *)(i + 8) )
 v2 += *(unsigned int *)i;
 ++a1;
 }
 while ( a1 != (long long *)v3 );
 return v2;
}


/* Function: test_composite_types @ 0x2040 */
unsigned long long test_composite_types()
{
 int *v0; // rax
 int v1; // ecx
 int v2; // edx
 int *v3; // rax
 int v4; // ecx
 int v5; // edx
 int v6; // eax
 int v8; // [rsp+10h] [rbp-68h] BYREF
 int *v9; // [rsp+18h] [rbp-60h]
 int v10; // [rsp+20h] [rbp-58h] BYREF
 long long v11; // [rsp+28h] [rbp-50h]
 int v12; // [rsp+30h] [rbp-48h] BYREF
 int *v13; // [rsp+38h] [rbp-40h]
 long long v14; // [rsp+40h] [rbp-38h]
 int v15; // [rsp+48h] [rbp-30h] BYREF
 long long v16; // [rsp+50h] [rbp-28h]
 int *v17; // [rsp+58h] [rbp-20h]
 unsigned long long v18; // [rsp+68h] [rbp-10h]

 v18 = __readfsqword(0x28u);
 puts(asc_354A);
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", 9);
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", 30);
 __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", 106);
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", 60);
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", 21);
 v0 = &v8;
 v9 = &v10;
 v1 = 10;
 v2 = 0;
 v8 = 20;
 v10 = 30;
 v11 = 0;
 *(unsigned long long *)v0 = (unsigned long long)&v11;
 while ( 1 )
 {
 v2 += v1;
 if ( !v0 )
 break;
 v1 = *v0;
 v0 = (int *)*((unsigned long long *)v0 + 1);
 }
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v2);
 v3 = &v12;
 v12 = 10;
 v13 = &v15;
 v4 = 10;
 v5 = 0;
 v14 = 0;
 v15 = 20;
 v16 = 0;
 v17 = &v12;
 *((unsigned long long *)v3) = (unsigned long long)v17;
 while ( 1 )
 {
 v3 = (int *)*((unsigned long long *)v3 + 1);
 v5 += v4;
 if ( !v3 )
 break;
 v4 = *v3;
 }
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v5);
 v6 = binary_tree_sum(0);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v6 + 100);
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
 return 0;
}


/* Function: .term_proc @ 0x2280 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6020 */

/* FAILED to decompile: puts @ 0x6028 */

/* FAILED to decompile: __stack_chk_fail @ 0x6030 */

/* FAILED to decompile: __printf_chk @ 0x6038 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6040 */

/* FAILED to decompile: __gmon_start__ @ 0x6050 */

/* Total functions decompiled: 65, failed: 7 */
