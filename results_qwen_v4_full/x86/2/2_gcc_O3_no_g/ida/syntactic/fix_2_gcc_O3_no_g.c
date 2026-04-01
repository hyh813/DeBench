/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/2/2_gcc_O3_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
static char *asc_3008 = "Data Types Test";
static char *asc_33BD = "Array Types Test";
static char *asc_3430 = "Pointer Types Test";
static char *asc_3526 = "Composite Types Test";
int CSWTCH_75[4] = {10, 20, 30, 50};

/* IDA macros for 64-bit access */
#define HIDWORD(x) ((unsigned int)((unsigned long long)(x) >> 32))
#define SHIDWORD(x) ((int)((unsigned long long)(x) >> 32))

/* GCC builtin for reading from GS segment */
static unsigned int __readgsdword(unsigned int offset)
{
 (void)offset;
 return 0;
}

/* Forward declarations */
int test_data_types_l1();
unsigned int test_array_types();
int test_pointer_types();
unsigned int test_composite_types();

/* External symbols */


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


/* Function: process_char @ 0x1280 */
int process_char(int a1)
{
 int result; // eax

 result = a1;
 if ( (unsigned char)(a1 - 65) < 0x1Au )
 return a1 + 32;
 return result;
}


/* Function: process_short @ 0x12A0 */
short process_short(short a1, short a2)
{
 return a1 + a2;
}


/* Function: process_int @ 0x12B0 */
int process_int(int a1)
{
 return 2 * a1 + 1;
}


/* Function: process_long @ 0x12C0 */
int process_long(int a1)
{
 return 2 * a1;
}


/* Function: process_ll @ 0x12D0 */
int process_ll(int a1)
{
 return a1 * a1;
}


/* Function: process_float @ 0x12F0 */
long double process_float(float a1)
{
 return 1.5 * a1 + 0.5;
}


/* Function: process_double @ 0x1320 */
long double process_double(double a1)
{
 return 0.5 * a1 + 0.1;
}


/* Function: process_ld @ 0x1350 */
long double process_ld(long double a1)
{
 return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x1360 */
int process_bool(int a1)
{
 int result; // eax

 result = (a1 & 1) == 0;
 if ( a1 <= 0 )
 return 0;
 return result;
}


/* Function: const_param @ 0x1380 */
int const_param(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: volatile_access @ 0x1390 */
int volatile_access(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: test_data_types_l1 @ 0x13A0 */
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


/* Function: array_1d_stack @ 0x14F0 */
int array_1d_stack(unsigned int *a1, int a2)
{
 unsigned int *v2; // eax
 int v3; // edx

 if ( a2 <= 0 )
 return 0;
 v2 = a1;
 v3 = 0;
 do
 v3 += *v2++;
 while ( &a1[a2] != v2 );
 return v3;
}


/* Function: array_string @ 0x1520 */
int array_string(unsigned char *a1)
{
 int result; // eax

 result = 0;
 if ( *a1 )
 {
 do
 ++result;
 while ( a1[result] );
 }
 return result;
}


/* Function: array_2d_stack @ 0x1550 */
int array_2d_stack(unsigned int *a1)
{
 return a1[99] + a1[88] + a1[77] + a1[66] + a1[55] + a1[44] + a1[33] + a1[22] + *a1 + a1[11];
}


/* Function: array_3d @ 0x1590 */
int array_3d(unsigned int *a1)
{
 int v1; // eax
 int v2; // eax

 v1 = a1[42]
 + a1[41]
 + a1[40]
 + a1[39]
 + a1[38]
 + a1[37]
 + a1[36]
 + a1[35]
 + a1[34]
 + a1[33]
 + a1[32]
 + a1[31]
 + a1[30]
 + a1[29]
 + a1[28]
 + a1[27]
 + a1[26]
 + a1[25]
 + a1[24]
 + a1[23]
 + a1[22]
 + a1[21]
 + a1[20]
 + a1[19]
 + a1[18]
 + a1[17]
 + a1[16]
 + a1[15]
 + a1[14]
 + a1[13]
 + a1[12]
 + a1[11]
 + a1[10]
 + a1[9]
 + a1[8]
 + a1[7]
 + a1[6]
 + a1[5]
 + a1[4]
 + a1[3]
 + a1[2]
 + a1[1]
 + *a1;
 v2 = a1[84]
 + a1[83]
 + a1[82]
 + a1[81]
 + a1[80]
 + a1[79]
 + a1[78]
 + a1[77]
 + a1[76]
 + a1[75]
 + a1[74]
 + a1[73]
 + a1[72]
 + a1[71]
 + a1[70]
 + a1[69]
 + a1[68]
 + a1[67]
 + a1[66]
 + a1[65]
 + a1[64]
 + a1[63]
 + a1[62]
 + a1[61]
 + a1[60]
 + a1[59]
 + a1[58]
 + a1[57]
 + a1[56]
 + a1[55]
 + a1[54]
 + a1[53]
 + a1[52]
 + a1[51]
 + a1[50]
 + a1[49]
 + a1[48]
 + a1[47]
 + a1[46]
 + a1[45]
 + a1[44]
 + a1[43]
 + v1;
 return a1[124]
 + a1[123]
 + a1[122]
 + a1[121]
 + a1[120]
 + a1[119]
 + a1[118]
 + a1[117]
 + a1[116]
 + a1[115]
 + a1[114]
 + a1[113]
 + a1[112]
 + a1[111]
 + a1[110]
 + a1[109]
 + a1[108]
 + a1[107]
 + a1[106]
 + a1[105]
 + a1[104]
 + a1[103]
 + a1[102]
 + a1[101]
 + a1[100]
 + a1[99]
 + a1[98]
 + a1[97]
 + a1[96]
 + a1[95]
 + a1[94]
 + a1[93]
 + a1[92]
 + a1[91]
 + a1[90]
 + a1[89]
 + a1[88]
 + a1[87]
 + a1[86]
 + a1[85]
 + v2;
}


/* Function: array_vla @ 0x1830 */
int array_vla(int a1, unsigned int *a2)
{
 unsigned int *v2; // eax
 int v3; // edx

 if ( a1 <= 0 )
 return 0;
 v2 = a2;
 v3 = 0;
 do
 v3 += *v2++;
 while ( &a2[a1] != v2 );
 return v3;
}


/* Function: array_pointer @ 0x1860 */
int array_pointer(unsigned int *a1, int a2)
{
 unsigned int *v2; // eax
 int v3; // edx

 if ( a2 <= 0 )
 return 0;
 v2 = a1;
 v3 = 0;
 do
 {
 v3 += *v2;
 v2 += 10;
 }
 while ( &a1[10 * a2] != v2 );
 return v3;
}


/* Function: pointer_array @ 0x18A0 */
int pointer_array(int **a1, int a2)
{
 int result; // eax
 int *v3; // ebx
 int *v4; // ebx
 int *v5; // ebx
 int *v6; // ebx
 int *v7; // ebx
 int *v8; // ebx
 int *v9; // ebx
 int *v10; // ebx
 int *v11; // edx

 if ( a2 <= 0 )
 return 0;
 result = 0;
 if ( *a1 )
 result = **a1;
 if ( a2 > 1 )
 {
 v3 = a1[1];
 if ( v3 )
 result += *v3;
 if ( a2 != 2 )
 {
 v4 = a1[2];
 if ( v4 )
 result += *v4;
 if ( a2 != 3 )
 {
 v5 = a1[3];
 if ( v5 )
 result += *v5;
 if ( a2 != 4 )
 {
 v6 = a1[4];
 if ( v6 )
 result += *v6;
 if ( a2 != 5 )
 {
 v7 = a1[5];
 if ( v7 )
 result += *v7;
 if ( a2 != 6 )
 {
 v8 = a1[6];
 if ( v8 )
 result += *v8;
 if ( a2 != 7 )
 {
 v9 = a1[7];
 if ( v9 )
 result += *v9;
 if ( a2 != 8 )
 {
 v10 = a1[8];
 if ( v10 )
 result += *v10;
 if ( a2 > 9 )
 {
 v11 = a1[9];
 if ( v11 )
 result += *v11;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: array_complex_index @ 0x1950 */
int array_complex_index(int a1, int a2, int a3, long long a4)
{
 if ( (int)(HIDWORD(a4) | a4) < 0 || (int)a4 >= a2 || SHIDWORD(a4) >= a3 )
 return -1;
 else
 return *(unsigned int *)(a1 + 4 * (a4 + HIDWORD(a4) * a2));
}


/* Function: array_oob @ 0x1990 */
int array_oob(unsigned int *a1, int a2)
{
 unsigned int *v2; // eax
 int v3; // edx

 if ( a2 < 0 )
 return 0;
 v2 = a1;
 v3 = 0;
 do
 v3 += *v2++;
 while ( &a1[a2 + 1] != v2 );
 return v3;
}


/* Function: test_array_types @ 0x19D0 */
unsigned int test_array_types()
{
 int v0; // eax
 int i; // eax
 unsigned int v3[20]; // [esp+0h] [ebp-68h]
 char v4[6]; // [esp+52h] [ebp-16h] BYREF
 unsigned int v5; // [esp+58h] [ebp-10h]

 v5 = __readgsdword(0x14u);
 puts(asc_33BD);
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
 strcpy(v4, "hello");
 v0 = 0;
 do
 ++v0;
 while ( v4[v0] );
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v0);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", 45);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", 125);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 for ( i = 0; i != 20; ++i )
 v3[i] = i;
 __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v3[17]);
 return v5 - __readgsdword(0x14u);
}


/* Function: ptr_single @ 0x1B00 */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0x1B10 */
int ptr_double(unsigned int **a1)
{
 return **a1 + 5;
}


/* Function: ptr_triple @ 0x1B20 */
int ptr_triple(unsigned int ***a1)
{
 return ***a1 + 1;
}


/* Function: ptr_increment @ 0x1B40 */
int ptr_increment(int a1, int a2)
{
 int v2; // eax
 int v3; // edx

 if ( a2 <= 0 )
 return 0;
 v2 = 0;
 v3 = 0;
 do
 v3 += *(unsigned int *)(a1 + 4 * v2++);
 while ( a2 != v2 );
 return v3;
}


/* Function: ptr_offset @ 0x1B80 */
int ptr_offset(int a1, int a2)
{
 return *(unsigned int *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0x1B90 */
int ptr_diff(int a1, int a2)
{
 return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x1BA0 */
int ptr_void(char *a1, int a2)
{
 if ( !a2 )
 return *(unsigned int *)a1;
 if ( a2 == 1 )
 return *a1;
 return -1;
}


/* Function: ptr_const @ 0x1BE0 */
int ptr_const(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0x1BF0 */
int ptr_const_ptr(int *a1)
{
 int result; // eax

 result = *a1 + 5;
 *a1 = result;
 return result;
}


/* Function: ptr_func_simple @ 0x1C00 */
int ptr_func_simple(int ( *a1)(int), int a2)
{
 return a1(a2);
}


/* Function: ptr_func_complex @ 0x1C20 */
int ptr_func_complex(int ( *a1)(int, unsigned int *), int a2)
{
 unsigned int v3[6]; // [esp+0h] [ebp-18h] BYREF

 v3[2] = __readgsdword(0x14u);
 v3[1] = 0;
 v3[0] = "test";
 return a1(a2, v3);
}


/* Function: ptr_cast @ 0x1C80 */
int ptr_cast(int a1)
{
 return *(unsigned int *)a1;
}


/* Function: opaque_handle_create @ 0x1C90 */
int opaque_handle_create(int a1)
{
 return a1;
}


/* Function: opaque_handle_op @ 0x1CA0 */
int opaque_handle_op(int a1)
{
 return 2 * a1;
}


/* Function: test_pointer_types @ 0x1CB0 */
int test_pointer_types()
{
 puts(asc_3430);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", 15);
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


/* Function: struct_simple @ 0x1DE0 */
int struct_simple(unsigned int *a1)
{
 return a1[2] + *a1 + a1[1];
}


/* Function: struct_array @ 0x1E00 */
int struct_array(int a1, int a2)
{
 int v2; // eax
 int v3; // ecx
 int v4; // edx

 if ( a2 <= 0 )
 return 0;
 v2 = a1;
 v3 = 0;
 do
 {
 v4 = *(unsigned int *)(v2 + 4);
 v2 += 12;
 v3 += *(unsigned int *)(v2 - 4) + *(unsigned int *)(v2 - 12) + v4;
 }
 while ( a1 + 12 * a2 != v2 );
 return v3;
}


/* Function: struct_nested @ 0x1E50 */
int struct_nested(unsigned int *a1)
{
 return *a1 + a1[3];
}


/* Function: struct_deep @ 0x1E60 */
int struct_deep(int a1)
{
 return *(unsigned int *)(a1 + 8) + *(unsigned int *)(a1 + 20);
}


/* Function: struct_with_ptr @ 0x1E70 */
int struct_with_ptr(int *a1)
{
 int result; // eax
 unsigned int *v2; // edx

 result = *a1;
 v2 = (unsigned int *)a1[1];
 if ( v2 )
 result += *v2;
 return result;
}


/* Function: struct_bitfields @ 0x1E90 */
int struct_bitfields(unsigned short *a1)
{
 return (*a1 >> 6) + ((*(unsigned char *)a1 >> 3) & 7) + ((*(unsigned char *)a1 >> 1) & 3) + (*(unsigned char *)a1 & 1);
}


/* Function: union_type @ 0x1EC0 */
int union_type(char *a1, int a2)
{
 if ( !a2 )
 return *(unsigned int *)a1;
 if ( a2 == 1 )
 return (int)*(float *)a1;
 return *a1;
}


/* Function: union_array @ 0x1F20 */
int union_array(unsigned int *a1, int a2)
{
 unsigned int *v2; // eax
 int v3; // edx

 if ( a2 <= 0 )
 return 0;
 v2 = a1;
 v3 = 0;
 do
 v3 += *v2++;
 while ( &a1[a2] != v2 );
 return v3;
}


/* Function: enum_type @ 0x1F50 */
int enum_type(int a1)
{
 return 10 * a1;
}


/* Function: enum_switch @ 0x1F60 */
int enum_switch(unsigned int a1)
{
 int result; // eax

 result = -99;
 if ( a1 <= 3 )
 return CSWTCH_75[a1];
 return result;
}


/* Function: struct_func_ptr @ 0x1F90 */
int struct_func_ptr(int a1)
{
 return (*(int ( **)(unsigned int))(a1 + 4))(*(unsigned int *)a1);
}


/* Function: linked_list @ 0x1FB0 */
int linked_list(unsigned int *a1)
{
 unsigned int *v1; // eax
 int i; // edx

 v1 = a1;
 for ( i = 0; v1; v1 = (unsigned int *)v1[1] )
 i += *v1;
 return i;
}


/* Function: doubly_linked_list @ 0x1FD0 */
int doubly_linked_list(unsigned int *a1)
{
 unsigned int *v1; // eax
 int i; // edx

 v1 = a1;
 for ( i = 0; v1; v1 = (unsigned int *)v1[1] )
 i += *v1;
 return i;
}


/* Function: binary_tree_sum @ 0x1FF0 */
int binary_tree_sum(int *a1)
{
 unsigned int *v1; // edx
 int v2; // ecx
 unsigned int *v3; // ecx
 unsigned int *v4; // edx
 int *v5; // ebx
 int v6; // ebp
 unsigned int *v7; // esi
 int v8; // edi
 int v9; // ecx
 int v10; // eax
 int v12; // [esp+Ch] [ebp-70h]
 int v13; // [esp+10h] [ebp-6Ch]
 int v14; // [esp+14h] [ebp-68h]
 int v15; // [esp+18h] [ebp-64h]
 unsigned int *v16; // [esp+1Ch] [ebp-60h]
 int v17; // [esp+20h] [ebp-5Ch]
 unsigned int *v18; // [esp+24h] [ebp-58h]
 int *v19; // [esp+28h] [ebp-54h]
 int *v20; // [esp+2Ch] [ebp-50h]
 int *v21; // [esp+30h] [ebp-4Ch]
 int v22; // [esp+34h] [ebp-48h]
 int v23; // [esp+38h] [ebp-44h]
 int v24; // [esp+3Ch] [ebp-40h]
 int v25; // [esp+40h] [ebp-3Ch]
 int v26; // [esp+44h] [ebp-38h]
 int v27; // [esp+48h] [ebp-34h]
 int v28; // [esp+4Ch] [ebp-30h]
 int v29; // [esp+50h] [ebp-2Ch]
 int i; // [esp+54h] [ebp-28h]
 unsigned int *v31; // [esp+58h] [ebp-24h]
 int v32; // [esp+5Ch] [ebp-20h]

 for ( i = 0; a1; a1 = (int *)a1[2] )
 {
 v25 = 0;
 v23 = *a1;
 v19 = (int *)a1[1];
 if ( v19 )
 {
 do
 {
 v26 = 0;
 v24 = *v19;
 v20 = (int *)v19[1];
 if ( v20 )
 {
 do
 {
 v27 = 0;
 v29 = *v20;
 v21 = (int *)v20[1];
 if ( v21 )
 {
 do
 {
 v14 = 0;
 v28 = *v21;
 v1 = (unsigned int *)v21[1];
 if ( v1 )
 {
 do
 {
 v2 = *v1;
 v12 = 0;
 if ( v1[1] )
 {
 v16 = v1;
 v17 = *v1;
 v3 = (unsigned int *)v1[1];
 do
 {
 v4 = (unsigned int *)v3[1];
 v15 = 0;
 v13 = *v3;
 if ( v4 )
 {
 v18 = v3;
 do
 {
 v5 = (int *)v4[1];
 v6 = 0;
 v22 = *v4;
 if ( v5 )
 {
 do
 {
 v7 = (unsigned int *)v5[1];
 v8 = *v5;
 v9 = 0;
 if ( v7 )
 {
 do
 {
 v32 = v9;
 v31 = v4;
 v10 = *v7 + binary_tree_sum(v7[1]);
 v7 = (unsigned int *)v7[2];
 v4 = v31;
 v9 = v10 + v32;
 }
 while ( v7 );
 v8 += v9;
 }
 v5 = (int *)v5[2];
 v6 += v8;
 }
 while ( v5 );
 v22 += v6;
 }
 v4 = (unsigned int *)v4[2];
 v15 += v22;
 }
 while ( v4 );
 v13 += v15;
 v3 = v18;
 }
 v3 = (unsigned int *)v3[2];
 v12 += v13;
 }
 while ( v3 );
 v1 = v16;
 v2 = v12 + v17;
 }
 v1 = (unsigned int *)v1[2];
 v14 += v2;
 }
 while ( v1 );
 v28 += v14;
 }
 v27 += v28;
 v21 = (int *)v21[2];
 }
 while ( v21 );
 v29 += v27;
 }
 v26 += v29;
 v20 = (int *)v20[2];
 }
 while ( v20 );
 v24 += v26;
 }
 v25 += v24;
 v19 = (int *)v19[2];
 }
 while ( v19 );
 v23 += v25;
 }
 i += v23;
 }
 return i;
}


/* Function: binary_tree @ 0x2220 */
int binary_tree(int *a1)
{
 int *v1; // esi
 int v2; // ebx
 int v3; // edi
 int v4; // ebp
 int v5; // eax
 int i; // [esp+Ch] [ebp-20h]

 v1 = a1;
 for ( i = 0; v1; i += v3 )
 {
 v2 = v1[1];
 v3 = *v1;
 v4 = 0;
 if ( v2 )
 {
 do
 {
 v5 = *(unsigned int *)v2 + binary_tree_sum(*(int **)(v2 + 4));
 v2 = *(unsigned int *)(v2 + 8);
 v4 += v5;
 }
 while ( v2 );
 v3 += v4;
 }
 v1 = (int *)v1[2];
 }
 return i;
}


/* Function: graph_traverse @ 0x2280 */
int graph_traverse(int a1)
{
 unsigned int **v1; // ecx
 int v2; // eax
 unsigned int **v3; // ebx
 int v4; // edx
 unsigned int *i; // eax

 v1 = (unsigned int **)a1;
 v2 = *(unsigned int *)(a1 + 40);
 if ( v2 <= 0 )
 return 0;
 v3 = (unsigned int **)(a1 + 4 * v2);
 v4 = 0;
 do
 {
 for ( i = *v1; i; i = (unsigned int *)i[1] )
 v4 += *i;
 ++v1;
 }
 while ( v1 != v3 );
 return v4;
}


/* Function: test_composite_types @ 0x22C0 */
unsigned int test_composite_types()
{
 int *v0; // eax
 int v1; // edx
 int v2; // ecx
 unsigned int *v3; // eax
 int v4; // edx
 unsigned int v6[2]; // [esp+8h] [ebp-38h] BYREF
 unsigned int v7[2]; // [esp+10h] [ebp-30h] BYREF
 unsigned int v8[3]; // [esp+18h] [ebp-28h] BYREF
 unsigned int v9[3]; // [esp+24h] [ebp-1Ch] BYREF
 unsigned int v10; // [esp+30h] [ebp-10h]

 v10 = __readgsdword(0x14u);
 puts(asc_3526);
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
 v0 = v6;
 v6[1] = v7;
 v1 = 10;
 v6[0] = 20;
 v7[0] = 30;
 v7[1] = 0;
 do
 {
 v2 = *v0;
 v0 = (int *)v0[1];
 v1 += v2;
 }
 while ( v0 );
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v1);
 v3 = v9;
 v8[0] = 10;
 v9[2] = v8;
 v4 = 10;
 v8[1] = v9;
 v8[2] = 0;
 v9[0] = 20;
 v9[1] = 0;
 do
 {
 v4 += *v3;
 v3 = (unsigned int *)v3[1];
 }
 while ( v3 );
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v4);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", 100);
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
 return v10 - __readgsdword(0x14u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x24B3 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x24B7 */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x24C0 */
void _stack_chk_fail_local()
{
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x6014 */

/* FAILED to decompile: __stack_chk_fail @ 0x6018 */

/* FAILED to decompile: __cxa_finalize @ 0x601C */

/* FAILED to decompile: puts @ 0x6020 */

/* FAILED to decompile: __printf_chk @ 0x6024 */

/* Total functions decompiled: 76, failed: 5 */
