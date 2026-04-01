/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/2/2_gcc_O2_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
__int64 (**init_proc())(void)
{
  __int64 (**result)(void); // rax

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    return (__int64 (**)(void))_gmon_start__();
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


/* FAILED to decompile: main @ 0x10A0 */

/* Function: _start @ 0x10D0 */
// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void))
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // [rsp-8h] [rbp-8h] BYREF
  char *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = v5;
  v5 = v3;
  _libc_start_main((int (*)(int, char **, char **))main, v4, &retaddr, 0, 0, a3, &v5);
  __halt();
}


/* Function: deregister_tm_clones @ 0x1100 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1130 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1170 */
char *_do_global_dtors_aux()
{
  char *result; // rax

  if ( !_bss_start )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x11B0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: process_char @ 0x11C0 */
__int64 __fastcall process_char(unsigned int a1)
{
  __int64 result; // rax

  result = a1 + 32;
  if ( (unsigned __int8)(a1 - 65) >= 0x1Au )
    return a1;
  return result;
}


/* Function: process_short @ 0x11E0 */
__int64 __fastcall process_short(int a1, int a2)
{
  return (unsigned int)(a2 + a1);
}


/* Function: process_int @ 0x11F0 */
__int64 __fastcall process_int(int a1)
{
  return (unsigned int)(2 * a1 + 1);
}


/* Function: process_long @ 0x1200 */
__int64 __fastcall process_long(__int64 a1)
{
  return 2 * a1;
}


/* Function: process_ll @ 0x1210 */
__int64 __fastcall process_ll(__int64 a1)
{
  return a1 * a1;
}


/* Function: process_float @ 0x1220 */
float __fastcall process_float(float a1)
{
  return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x1240 */
double __fastcall process_double(double a1)
{
  return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1260 */
long double __fastcall process_ld(long double a1)
{
  return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x1270 */
_BOOL8 __fastcall process_bool(int a1)
{
  _BOOL8 result; // rax

  result = (a1 & 1) == 0;
  if ( a1 <= 0 )
    return 0;
  return result;
}


/* Function: const_param @ 0x1290 */
__int64 __fastcall const_param(_DWORD *a1)
{
  return (unsigned int)(*a1 + 10);
}


/* Function: volatile_access @ 0x12A0 */
__int64 __fastcall volatile_access(_DWORD *a1)
{
  return (unsigned int)(2 * *a1);
}


/* Function: test_data_types_l1 @ 0x12B0 */
__int64 test_data_types_l1()
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
__int64 __fastcall array_1d_stack(_DWORD *a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( a2 <= 0 )
    return 0;
  v2 = (__int64)&a1[a2 - 1 + 1];
  LODWORD(result) = 0;
  do
    result = (unsigned int)(*a1++ + result);
  while ( a1 != (_DWORD *)v2 );
  return result;
}


/* Function: array_string @ 0x1470 */
__int64 __fastcall array_string(_BYTE *a1)
{
  __int64 v1; // rax
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
__int64 __fastcall array_2d_stack(_DWORD *a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax

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
__int64 __fastcall array_3d(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 result; // rax
  _DWORD *v3; // rdx
  int v4; // eax

  v1 = (_DWORD *)(a1 + 100);
  LODWORD(result) = 0;
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
  while ( v3 + 25 != (_DWORD *)(a1 + 600) );
  return result;
}


/* Function: array_vla @ 0x1500 */
__int64 __fastcall array_vla(int a1, _DWORD *a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( a1 <= 0 )
    return 0;
  v2 = (__int64)&a2[a1 - 1 + 1];
  LODWORD(result) = 0;
  do
    result = (unsigned int)(*a2++ + result);
  while ( a2 != (_DWORD *)v2 );
  return result;
}


/* Function: array_pointer @ 0x1530 */
__int64 __fastcall array_pointer(_DWORD *a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( a2 <= 0 )
    return 0;
  v2 = (__int64)&a1[10 * (a2 - 1) + 10];
  LODWORD(result) = 0;
  do
  {
    result = (unsigned int)(*a1 + result);
    a1 += 10;
  }
  while ( a1 != (_DWORD *)v2 );
  return result;
}


/* Function: pointer_array @ 0x1570 */
__int64 __fastcall pointer_array(__int64 a1, int a2)
{
  int v2; // ecx
  __int64 v3; // rax
  unsigned int v4; // r8d
  _DWORD *v5; // rdx

  v2 = 10;
  if ( a2 <= 10 )
    v2 = a2;
  if ( a2 <= 0 )
    return 0;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = *(_DWORD **)(a1 + 8 * v3);
    if ( v5 )
      v4 += *v5;
    ++v3;
  }
  while ( v2 > (int)v3 );
  return v4;
}


/* Function: array_complex_index @ 0x15C0 */
__int64 __fastcall array_complex_index(__int64 a1, int a2, int a3, int a4, int a5)
{
  if ( (a5 | a4) < 0 || a4 >= a2 || a5 >= a3 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(a1 + 4LL * (a4 + a5 * a2));
}


/* Function: array_oob @ 0x15F0 */
__int64 __fastcall array_oob(_DWORD *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  if ( a2 < 0 )
    return 0;
  LODWORD(result) = 0;
  v3 = (__int64)&a1[a2 + 1];
  do
    result = (unsigned int)(*a1++ + result);
  while ( a1 != (_DWORD *)v3 );
  return result;
}


/* Function: test_array_types @ 0x1620 */
__int64 __fastcall test_array_types(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14)
{
  __int64 v14; // rax
  int v15; // edx
  __int64 *v16; // r8
  int v17; // ecx
  _BYTE *v18; // rsi
  __int64 i; // rax
  int v20; // edx
  int v21; // edx
  char *v22; // rcx
  _BYTE *v23; // rdx
  _BYTE *v24; // rax
  int v25; // edx
  char *v26; // rax
  int v27; // edx
  __int64 j; // rax
  _DWORD v30[20]; // [rsp+0h] [rbp-3F8h]
  _BYTE v31[440]; // [rsp+50h] [rbp-3A8h] BYREF
  __int64 v32; // [rsp+208h] [rbp-1F0h] BYREF
  _BYTE v33[414]; // [rsp+244h] [rbp-1B4h] BYREF
  char v34[6]; // [rsp+3E2h] [rbp-16h] BYREF
  unsigned __int64 v35; // [rsp+3E8h] [rbp-10h]

  v35 = __readfsqword(0x28u);
  puts(asc_33E1);
  __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
  strcpy(v34, "hello");
  v14 = 1;
  do
    v15 = v14++;
  while ( v33[v14 + 413] );
  __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v15);
  v16 = (__int64 *)v31;
  v17 = 0;
  v18 = v31;
  do
  {
    for ( i = 0; i != 10; ++i )
    {
      v20 = 0;
      if ( v17 == (_DWORD)i )
        v20 = i;
      *(_DWORD *)&v18[4 * i] = v20;
    }
    ++v17;
    v18 += 40;
  }
  while ( v17 != 10 );
  v21 = 0;
  do
  {
    v21 += *(_DWORD *)v16;
    v16 = (__int64 *)((char *)v16 + 44);
  }
  while ( &v32 != v16 );
  __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v21);
  v22 = v33;
  v23 = v33;
  do
  {
    v24 = v23 - 100;
    do
    {
      *(_DWORD *)v24 = 1;
      v24 += 20;
      *((_DWORD *)v24 - 4) = 1;
      *((_DWORD *)v24 - 3) = 1;
      *((_DWORD *)v24 - 2) = 1;
      *((_DWORD *)v24 - 1) = 1;
    }
    while ( v24 != v23 );
    v23 = v24 + 100;
  }
  while ( &a14 != v24 + 100 );
  v25 = 0;
  do
  {
    v26 = v22 - 100;
    do
    {
      v27 = *(_DWORD *)v26 + v25;
      v26 += 20;
      v25 = *((_DWORD *)v26 - 1) + *((_DWORD *)v26 - 2) + *((_DWORD *)v26 - 3) + *((_DWORD *)v26 - 4) + v27;
    }
    while ( v22 != v26 );
    v22 += 100;
  }
  while ( v22 != &a14 );
  __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v25);
  __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
  __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
  __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
  for ( j = 0; j != 20; ++j )
    v30[j] = j;
  return __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v30[17]);
}


/* Function: ptr_single @ 0x1840 */
__int64 __fastcall ptr_single(_DWORD *a1)
{
  return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0x1850 */
__int64 __fastcall ptr_double(_DWORD **a1)
{
  return (unsigned int)(**a1 + 5);
}


/* Function: ptr_triple @ 0x1860 */
__int64 __fastcall ptr_triple(_DWORD ***a1)
{
  return (unsigned int)(***a1 + 1);
}


/* Function: ptr_increment @ 0x1870 */
__int64 __fastcall ptr_increment(_DWORD *a1, int a2)
{
  __int64 result; // rax
  _DWORD *v3; // rdx

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
__int64 __fastcall ptr_offset(__int64 a1, int a2)
{
  return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: ptr_diff @ 0x18B0 */
__int64 __fastcall ptr_diff(__int64 a1, __int64 a2)
{
  return (unsigned int)((a1 - a2) >> 2);
}


/* Function: ptr_void @ 0x18C0 */
__int64 __fastcall ptr_void(unsigned int *a1, int a2)
{
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return (unsigned int)*(char *)a1;
  return 0xFFFFFFFFLL;
}


/* Function: ptr_const @ 0x18F0 */
__int64 __fastcall ptr_const(_DWORD *a1)
{
  return (unsigned int)(2 * *a1);
}


/* Function: ptr_const_ptr @ 0x1900 */
__int64 __fastcall ptr_const_ptr(_DWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)(*a1 + 5);
  *a1 = result;
  return result;
}


/* Function: ptr_func_simple @ 0x1910 */
__int64 __fastcall ptr_func_simple(__int64 (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2);
}


/* Function: ptr_func_complex @ 0x1920 */
__int64 __fastcall ptr_func_complex(__int64 (__fastcall *a1)(__int64, _QWORD *), __int64 a2)
{
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[3] = __readfsqword(0x28u);
  v3[1] = 0;
  v3[0] = "test";
  return a1(a2, v3);
}


/* Function: ptr_cast @ 0x1970 */
__int64 __fastcall ptr_cast(unsigned int *a1)
{
  return *a1;
}


/* Function: opaque_handle_create @ 0x1980 */
__int64 __fastcall opaque_handle_create(int a1)
{
  return a1;
}


/* Function: opaque_handle_op @ 0x1990 */
__int64 __fastcall opaque_handle_op(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: test_pointer_types @ 0x19A0 */
__int64 test_pointer_types()
{
  int v0; // ecx
  int v1; // edx
  char *i; // rax
  _QWORD v4[2]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+10h] [rbp-18h]
  char v6; // [rsp+14h] [rbp-14h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  puts(asc_3454);
  __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
  __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
  __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
  v5 = 5;
  v0 = 1;
  v4[0] = 0x200000001LL;
  v1 = 0;
  v4[1] = 0x400000003LL;
  for ( i = (char *)v4; ; v0 = *(_DWORD *)i )
  {
    i += 4;
    v1 += v0;
    if ( i == &v6 )
      break;
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
__int64 __fastcall struct_simple(_DWORD *a1)
{
  return (unsigned int)(a1[2] + *a1 + a1[1]);
}


/* Function: struct_array @ 0x1B90 */
__int64 __fastcall struct_array(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rdx
  int v4; // eax

  if ( a2 <= 0 )
    return 0;
  v2 = 0;
  v3 = a1 + 12LL * (unsigned int)(a2 - 1) + 12;
  do
  {
    v4 = *(_DWORD *)(a1 + 4);
    a1 += 12;
    v2 += *(_DWORD *)(a1 - 4) + *(_DWORD *)(a1 - 12) + v4;
  }
  while ( a1 != v3 );
  return v2;
}


/* Function: struct_nested @ 0x1BE0 */
__int64 __fastcall struct_nested(_DWORD *a1)
{
  return (unsigned int)(a1[3] + *a1);
}


/* Function: struct_deep @ 0x1BF0 */
__int64 __fastcall struct_deep(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8));
}


/* Function: struct_with_ptr @ 0x1C00 */
__int64 __fastcall struct_with_ptr(unsigned int *a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_DWORD *)*((_QWORD *)a1 + 1);
  result = *a1;
  if ( v1 )
    return (unsigned int)(*v1 + result);
  return result;
}


/* Function: struct_bitfields @ 0x1C20 */
__int64 __fastcall struct_bitfields(_WORD *a1)
{
  return (*a1 >> 6) + ((*(_BYTE *)a1 >> 3) & 7) + ((*(_BYTE *)a1 >> 1) & 3) + (*(_BYTE *)a1 & 1u);
}


/* Function: union_type @ 0x1C50 */
__int64 __fastcall union_type(unsigned int *a1, int a2)
{
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return (unsigned int)(int)*(float *)a1;
  return (unsigned int)*(char *)a1;
}


/* Function: union_array @ 0x1C80 */
__int64 __fastcall union_array(_DWORD *a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( a2 <= 0 )
    return 0;
  v2 = (__int64)&a1[a2 - 1 + 1];
  LODWORD(result) = 0;
  do
    result = (unsigned int)(*a1++ + result);
  while ( a1 != (_DWORD *)v2 );
  return result;
}


/* Function: enum_type @ 0x1CB0 */
__int64 __fastcall enum_type(int a1)
{
  return (unsigned int)(10 * a1);
}


/* Function: enum_switch @ 0x1CC0 */
__int64 __fastcall enum_switch(unsigned int a1)
{
  __int64 result; // rax

  result = 4294967197LL;
  if ( a1 <= 3 )
    return CSWTCH_61[a1];
  return result;
}


/* Function: struct_func_ptr @ 0x1CE0 */
__int64 __fastcall struct_func_ptr(unsigned int *a1)
{
  return (*((__int64 (__fastcall **)(_QWORD))a1 + 1))(*a1);
}


/* Function: linked_list @ 0x1CF0 */
__int64 __fastcall linked_list(__int64 a1)
{
  __int64 result; // rax

  for ( result = 0; a1; a1 = *(_QWORD *)(a1 + 8) )
    result = (unsigned int)(*(_DWORD *)a1 + result);
  return result;
}


/* Function: doubly_linked_list @ 0x1D20 */
__int64 __fastcall doubly_linked_list(__int64 a1)
{
  __int64 result; // rax

  for ( result = 0; a1; a1 = *(_QWORD *)(a1 + 8) )
    result = (unsigned int)(*(_DWORD *)a1 + result);
  return result;
}


/* Function: binary_tree_sum @ 0x1D50 */
__int64 __fastcall binary_tree_sum(int *a1)
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
  __int64 v14; // r12
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
  for ( i = 0; v21; v21 = (int *)*((_QWORD *)v21 + 2) )
  {
    v25 = 0;
    v23 = *v21;
    v19 = (int *)*((_QWORD *)v21 + 1);
    if ( v19 )
    {
      do
      {
        v26 = 0;
        v24 = *v19;
        v20 = (int *)*((_QWORD *)v19 + 1);
        if ( v20 )
        {
          do
          {
            v27 = 0;
            v1 = (int *)*((_QWORD *)v20 + 1);
            v29 = *v20;
            if ( v1 )
            {
              do
              {
                v2 = (int *)*((_QWORD *)v1 + 1);
                v3 = 0;
                v28 = *v1;
                if ( v2 )
                {
                  v30 = v1;
                  do
                  {
                    v4 = *v2;
                    v5 = 0;
                    v6 = (int *)*((_QWORD *)v2 + 1);
                    if ( v6 )
                    {
                      do
                      {
                        v7 = (int *)*((_QWORD *)v6 + 1);
                        v8 = *v6;
                        v9 = 0;
                        if ( v7 )
                        {
                          do
                          {
                            v10 = (int *)*((_QWORD *)v7 + 1);
                            v11 = 0;
                            v22 = *v7;
                            if ( v10 )
                            {
                              v12 = v4;
                              v13 = v2;
                              do
                              {
                                v14 = *((_QWORD *)v10 + 1);
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
                                    v17 = *(_DWORD *)v14 + binary_tree_sum(*(_QWORD *)(v14 + 8));
                                    v14 = *(_QWORD *)(v14 + 16);
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
                                v10 = (int *)*((_QWORD *)v10 + 2);
                                v11 += v15;
                              }
                              while ( v10 );
                              v22 += v11;
                              v2 = v13;
                              v4 = v12;
                            }
                            v7 = (int *)*((_QWORD *)v7 + 2);
                            v9 += v22;
                          }
                          while ( v7 );
                          v8 += v9;
                        }
                        v6 = (int *)*((_QWORD *)v6 + 2);
                        v5 += v8;
                      }
                      while ( v6 );
                      v4 += v5;
                    }
                    v2 = (int *)*((_QWORD *)v2 + 2);
                    v3 += v4;
                  }
                  while ( v2 );
                  v28 += v3;
                  v1 = v30;
                }
                v1 = (int *)*((_QWORD *)v1 + 2);
                v27 += v28;
              }
              while ( v1 );
              v29 += v27;
            }
            v26 += v29;
            v20 = (int *)*((_QWORD *)v20 + 2);
          }
          while ( v20 );
          v24 += v26;
        }
        v25 += v24;
        v19 = (int *)*((_QWORD *)v19 + 2);
      }
      while ( v19 );
      v23 += v25;
    }
    i += v23;
  }
  return i;
}


/* Function: binary_tree @ 0x1FB0 */
__int64 __fastcall binary_tree(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rbx
  int v3; // eax

  v1 = 0;
  if ( a1 )
  {
    v2 = a1;
    do
    {
      v3 = *(_DWORD *)v2 + binary_tree_sum(*(int **)(v2 + 8));
      v2 = *(_QWORD *)(v2 + 16);
      v1 += v3;
    }
    while ( v2 );
  }
  return v1;
}


/* Function: graph_traverse @ 0x1FF0 */
__int64 __fastcall graph_traverse(__int64 *a1)
{
  int v1; // eax
  unsigned int v2; // r8d
  __int64 v3; // rdx
  __int64 i; // rax

  v1 = *((_DWORD *)a1 + 20);
  if ( v1 <= 0 )
    return 0;
  v2 = 0;
  v3 = (__int64)&a1[(unsigned int)(v1 - 1) + 1];
  do
  {
    for ( i = *a1; i; i = *(_QWORD *)(i + 8) )
      v2 += *(_DWORD *)i;
    ++a1;
  }
  while ( a1 != (__int64 *)v3 );
  return v2;
}


/* Function: test_composite_types @ 0x2040 */
unsigned __int64 test_composite_types()
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
  __int64 v11; // [rsp+28h] [rbp-50h]
  int v12; // [rsp+30h] [rbp-48h] BYREF
  int *v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+48h] [rbp-30h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]
  int *v17; // [rsp+58h] [rbp-20h]
  unsigned __int64 v18; // [rsp+68h] [rbp-10h]

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
  while ( 1 )
  {
    v2 += v1;
    if ( !v0 )
      break;
    v1 = *v0;
    v0 = (int *)*((_QWORD *)v0 + 1);
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
  while ( 1 )
  {
    v3 = (int *)*((_QWORD *)v3 + 1);
    v5 += v4;
    if ( !v3 )
      break;
    v4 = *v3;
  }
  __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v5);
  v6 = binary_tree_sum(0);
  __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v6 + 100);
  __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
  return v18 - __readfsqword(0x28u);
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
