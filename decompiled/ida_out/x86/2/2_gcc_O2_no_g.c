/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/2/2_gcc_O2_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
  if ( &_gmon_start__ )
    ((void (*)(void))_gmon_start__)();
  frame_dummy();
  return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
  __asm { jmp     dword ptr [ebx+8] }
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
int __usercall sub_1080@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 32))();
}


/* FAILED to decompile: main @ 0x10D0 */

/* Function: _start @ 0x1100 */
// positive sp value has been detected, the output may be wrong!
void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>)
{
  int v2; // esi
  int v3; // [esp-4h] [ebp-4h] BYREF
  char *retaddr; // [esp+0h] [ebp+0h] BYREF

  v2 = v3;
  v3 = a1;
  __libc_start_main((int (*)(int, char **, char **))main, v2, &retaddr, 0, 0, a2, &v3);
  __halt();
}


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


/* Function: deregister_tm_clones @ 0x1140 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1180 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11D0 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_1080((int)&GLOBAL_OFFSET_TABLE_);
    v0 = dtor_idx_0;
    for ( i = &_DTOR_END__ - _DTOR_LIST__ - 1; dtor_idx_0 < i; v0 = dtor_idx_0 )
    {
      dtor_idx_0 = v0 + 1;
      ((void (*)(void))_DTOR_LIST__[v0 + 1])();
    }
    deregister_tm_clones();
    _bss_start = 1;
  }
}


/* Function: frame_dummy @ 0x1260 */
int frame_dummy()
{
  return register_tm_clones();
}


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
int __cdecl process_char(int a1)
{
  int result; // eax

  result = a1;
  if ( (unsigned __int8)(a1 - 65) < 0x1Au )
    return a1 + 32;
  return result;
}


/* Function: process_short @ 0x12A0 */
__int16 __cdecl process_short(__int16 a1, __int16 a2)
{
  return a1 + a2;
}


/* Function: process_int @ 0x12B0 */
int __cdecl process_int(int a1)
{
  return 2 * a1 + 1;
}


/* Function: process_long @ 0x12C0 */
int __cdecl process_long(int a1)
{
  return 2 * a1;
}


/* Function: process_ll @ 0x12D0 */
int __cdecl process_ll(int a1)
{
  return a1 * a1;
}


/* Function: process_float @ 0x12F0 */
long double __cdecl process_float(float a1)
{
  return 1.5 * a1 + 0.5;
}


/* Function: process_double @ 0x1320 */
long double __cdecl process_double(double a1)
{
  return 0.5 * a1 + 0.1;
}


/* Function: process_ld @ 0x1350 */
long double __cdecl process_ld(long double a1)
{
  return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x1360 */
_BOOL4 __cdecl process_bool(int a1)
{
  _BOOL4 result; // eax

  result = (a1 & 1) == 0;
  if ( a1 <= 0 )
    return 0;
  return result;
}


/* Function: const_param @ 0x1380 */
int __cdecl const_param(_DWORD *a1)
{
  return *a1 + 10;
}


/* Function: volatile_access @ 0x1390 */
int __cdecl volatile_access(_DWORD *a1)
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
int __cdecl array_1d_stack(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // edx

  if ( a2 <= 0 )
    return 0;
  v2 = a1;
  v3 = 0;
  do
    v3 += *v2++;
  while ( v2 != &a1[a2] );
  return v3;
}


/* Function: array_string @ 0x1520 */
int __cdecl array_string(_BYTE *a1)
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
int __cdecl array_2d_stack(_DWORD *a1)
{
  _DWORD *v1; // eax
  int v2; // edx

  v1 = a1;
  v2 = 0;
  do
  {
    v2 += *v1;
    v1 += 11;
  }
  while ( v1 != a1 + 110 );
  return v2;
}


/* Function: array_3d @ 0x1570 */
int __cdecl array_3d(int a1)
{
  int result; // eax
  _DWORD *v2; // ecx
  _DWORD *v3; // edx
  int v4; // eax

  result = 0;
  v2 = (_DWORD *)(a1 + 100);
  do
  {
    v3 = v2 - 25;
    do
    {
      v4 = *v3 + result;
      v3 += 5;
      result = *(v3 - 1) + *(v3 - 2) + *(v3 - 3) + *(v3 - 4) + v4;
    }
    while ( v3 != v2 );
    v2 = v3 + 25;
  }
  while ( v3 + 25 != (_DWORD *)(a1 + 600) );
  return result;
}


/* Function: array_vla @ 0x15B0 */
int __cdecl array_vla(int a1, _DWORD *a2)
{
  _DWORD *v2; // eax
  int v3; // edx

  if ( a1 <= 0 )
    return 0;
  v2 = a2;
  v3 = 0;
  do
    v3 += *v2++;
  while ( v2 != &a2[a1] );
  return v3;
}


/* Function: array_pointer @ 0x15E0 */
int __cdecl array_pointer(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
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
  while ( v2 != &a1[10 * a2] );
  return v3;
}


/* Function: pointer_array @ 0x1620 */
int __cdecl pointer_array(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edx

  v2 = 10;
  if ( a2 <= 10 )
    v2 = a2;
  if ( a2 <= 0 )
    return 0;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = *(_DWORD **)(a1 + 4 * v3);
    if ( v5 )
      v4 += *v5;
    ++v3;
  }
  while ( v2 > v3 );
  return v4;
}


/* Function: array_complex_index @ 0x1660 */
int __cdecl array_complex_index(int a1, int a2, int a3, __int64 a4)
{
  if ( (int)(HIDWORD(a4) | a4) < 0 || (int)a4 >= a2 || SHIDWORD(a4) >= a3 )
    return -1;
  else
    return *(_DWORD *)(a1 + 4 * (a4 + HIDWORD(a4) * a2));
}


/* Function: array_oob @ 0x16A0 */
int __cdecl array_oob(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // edx

  if ( a2 < 0 )
    return 0;
  v2 = a1;
  v3 = 0;
  do
    v3 += *v2++;
  while ( v2 != &a1[a2 + 1] );
  return v3;
}


/* Function: test_array_types @ 0x16E0 */
unsigned int __cdecl test_array_types(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        char a15)
{
  int v15; // eax
  int *v16; // ebp
  int v17; // ecx
  _BYTE *v18; // esi
  int i; // eax
  int v20; // edx
  int v21; // eax
  char *v22; // ecx
  char *v23; // edx
  char *v24; // eax
  int v25; // eax
  char *v26; // edx
  int v27; // eax
  int j; // eax
  _DWORD v30[20]; // [esp-44h] [ebp-3FCh]
  _BYTE v31[440]; // [esp+Ch] [ebp-3ACh] BYREF
  int v32; // [esp+1C4h] [ebp-1F4h] BYREF
  _BYTE v33[402]; // [esp+200h] [ebp-1B8h] BYREF
  char v34[6]; // [esp+392h] [ebp-26h] BYREF
  unsigned int v35; // [esp+398h] [ebp-20h]

  v35 = __readgsdword(0x14u);
  puts(asc_33BD);
  __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
  strcpy(v34, "hello");
  v15 = 0;
  do
    ++v15;
  while ( v34[v15] );
  __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v15);
  v16 = (int *)v31;
  v17 = 0;
  v18 = v31;
  do
  {
    for ( i = 0; i != 10; ++i )
    {
      v20 = 0;
      if ( i == v17 )
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
    v21 += *v16;
    v16 += 11;
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
    while ( v23 != v24 );
    v23 += 100;
  }
  while ( &a15 != v23 );
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
  while ( v22 != &a15 );
  __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v25);
  __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
  __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
  __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
  for ( j = 0; j != 20; ++j )
    v30[j] = j;
  __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v30[17]);
  return v35 - __readgsdword(0x14u);
}


/* Function: ptr_single @ 0x18D0 */
int __cdecl ptr_single(_DWORD *a1)
{
  return *a1 + 10;
}


/* Function: ptr_double @ 0x18E0 */
int __cdecl ptr_double(_DWORD **a1)
{
  return **a1 + 5;
}


/* Function: ptr_triple @ 0x18F0 */
int __cdecl ptr_triple(_DWORD ***a1)
{
  return ***a1 + 1;
}


/* Function: ptr_increment @ 0x1910 */
int __cdecl ptr_increment(int a1, int a2)
{
  int v2; // eax
  int v3; // edx

  if ( a2 <= 0 )
    return 0;
  v2 = 0;
  v3 = 0;
  do
    v3 += *(_DWORD *)(a1 + 4 * v2++);
  while ( a2 != v2 );
  return v3;
}


/* Function: ptr_offset @ 0x1950 */
int __cdecl ptr_offset(int a1, int a2)
{
  return *(_DWORD *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0x1960 */
int __cdecl ptr_diff(int a1, int a2)
{
  return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x1970 */
int __cdecl ptr_void(char *a1, int a2)
{
  if ( !a2 )
    return *(_DWORD *)a1;
  if ( a2 == 1 )
    return *a1;
  return -1;
}


/* Function: ptr_const @ 0x19B0 */
int __cdecl ptr_const(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0x19C0 */
int __cdecl ptr_const_ptr(int *a1)
{
  int result; // eax

  result = *a1 + 5;
  *a1 = result;
  return result;
}


/* Function: ptr_func_simple @ 0x19D0 */
int __cdecl ptr_func_simple(int (__cdecl *a1)(int), int a2)
{
  return a1(a2);
}


/* Function: ptr_func_complex @ 0x19F0 */
int __cdecl ptr_func_complex(int (__cdecl *a1)(int, _DWORD *), int a2)
{
  _DWORD v3[6]; // [esp+0h] [ebp-18h] BYREF

  v3[2] = __readgsdword(0x14u);
  v3[1] = 0;
  v3[0] = "test";
  return a1(a2, v3);
}


/* Function: ptr_cast @ 0x1A50 */
int __cdecl ptr_cast(int a1)
{
  return *(_DWORD *)a1;
}


/* Function: opaque_handle_create @ 0x1A60 */
int __cdecl opaque_handle_create(int a1)
{
  return a1;
}


/* Function: opaque_handle_op @ 0x1A70 */
int __cdecl opaque_handle_op(int a1)
{
  return 2 * a1;
}


/* Function: test_pointer_types @ 0x1A80 */
unsigned int test_pointer_types()
{
  int v0; // edx
  int v1; // ecx
  int *i; // eax
  _DWORD v4[5]; // [esp+0h] [ebp-24h] BYREF
  unsigned int v5; // [esp+14h] [ebp-10h] BYREF

  v5 = __readgsdword(0x14u);
  puts(asc_3430);
  __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
  __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
  __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
  v4[0] = 1;
  v0 = 0;
  v1 = 1;
  v4[1] = 2;
  v4[2] = 3;
  v4[3] = 4;
  v4[4] = 5;
  for ( i = v4; ; v1 = *i )
  {
    ++i;
    v0 += v1;
    if ( i == (int *)&v5 )
      break;
  }
  __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v0);
  __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
  __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
  __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
  __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
  __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
  __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
  __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
  __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
  __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
  __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
  return v5 - __readgsdword(0x14u);
}


/* Function: struct_simple @ 0x1C20 */
int __cdecl struct_simple(_DWORD *a1)
{
  return a1[2] + *a1 + a1[1];
}


/* Function: struct_array @ 0x1C40 */
int __cdecl struct_array(int a1, int a2)
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
    v4 = *(_DWORD *)(v2 + 4);
    v2 += 12;
    v3 += *(_DWORD *)(v2 - 4) + *(_DWORD *)(v2 - 12) + v4;
  }
  while ( a1 + 12 * a2 != v2 );
  return v3;
}


/* Function: struct_nested @ 0x1C90 */
int __cdecl struct_nested(_DWORD *a1)
{
  return *a1 + a1[3];
}


/* Function: struct_deep @ 0x1CA0 */
int __cdecl struct_deep(int a1)
{
  return *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 20);
}


/* Function: struct_with_ptr @ 0x1CB0 */
int __cdecl struct_with_ptr(int *a1)
{
  int result; // eax
  _DWORD *v2; // edx

  result = *a1;
  v2 = (_DWORD *)a1[1];
  if ( v2 )
    result += *v2;
  return result;
}


/* Function: struct_bitfields @ 0x1CD0 */
int __cdecl struct_bitfields(_WORD *a1)
{
  return (*a1 >> 6) + ((*(_BYTE *)a1 >> 3) & 7) + ((*(_BYTE *)a1 >> 1) & 3) + (*(_BYTE *)a1 & 1);
}


/* Function: union_type @ 0x1D00 */
int __cdecl union_type(char *a1, int a2)
{
  if ( !a2 )
    return *(_DWORD *)a1;
  if ( a2 == 1 )
    return (int)*(float *)a1;
  return *a1;
}


/* Function: union_array @ 0x1D60 */
int __cdecl union_array(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // edx

  if ( a2 <= 0 )
    return 0;
  v2 = a1;
  v3 = 0;
  do
    v3 += *v2++;
  while ( v2 != &a1[a2] );
  return v3;
}


/* Function: enum_type @ 0x1D90 */
int __cdecl enum_type(int a1)
{
  return 10 * a1;
}


/* Function: enum_switch @ 0x1DA0 */
int __cdecl enum_switch(unsigned int a1)
{
  int result; // eax

  result = -99;
  if ( a1 <= 3 )
    return CSWTCH_75[a1];
  return result;
}


/* Function: struct_func_ptr @ 0x1DD0 */
int __cdecl struct_func_ptr(int a1)
{
  return (*(int (__cdecl **)(_DWORD))(a1 + 4))(*(_DWORD *)a1);
}


/* Function: linked_list @ 0x1DF0 */
int __cdecl linked_list(_DWORD *a1)
{
  _DWORD *v1; // eax
  int i; // edx

  v1 = a1;
  for ( i = 0; v1; v1 = (_DWORD *)v1[1] )
    i += *v1;
  return i;
}


/* Function: doubly_linked_list @ 0x1E10 */
int __cdecl doubly_linked_list(_DWORD *a1)
{
  _DWORD *v1; // eax
  int i; // edx

  v1 = a1;
  for ( i = 0; v1; v1 = (_DWORD *)v1[1] )
    i += *v1;
  return i;
}


/* Function: binary_tree_sum @ 0x1E30 */
int __cdecl binary_tree_sum(int *a1)
{
  _DWORD *v1; // edx
  int v2; // ecx
  _DWORD *v3; // ecx
  _DWORD *v4; // edx
  int *v5; // ebx
  int v6; // ebp
  _DWORD *v7; // esi
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int v12; // [esp+Ch] [ebp-70h]
  int v13; // [esp+10h] [ebp-6Ch]
  int v14; // [esp+14h] [ebp-68h]
  int v15; // [esp+18h] [ebp-64h]
  _DWORD *v16; // [esp+1Ch] [ebp-60h]
  int v17; // [esp+20h] [ebp-5Ch]
  _DWORD *v18; // [esp+24h] [ebp-58h]
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
  _DWORD *v31; // [esp+58h] [ebp-24h]
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
                v1 = (_DWORD *)v21[1];
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
                      v3 = (_DWORD *)v1[1];
                      do
                      {
                        v4 = (_DWORD *)v3[1];
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
                                v7 = (_DWORD *)v5[1];
                                v8 = *v5;
                                v9 = 0;
                                if ( v7 )
                                {
                                  do
                                  {
                                    v32 = v9;
                                    v31 = v4;
                                    v10 = *v7 + binary_tree_sum(v7[1]);
                                    v7 = (_DWORD *)v7[2];
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
                            v4 = (_DWORD *)v4[2];
                            v15 += v22;
                          }
                          while ( v4 );
                          v13 += v15;
                          v3 = v18;
                        }
                        v3 = (_DWORD *)v3[2];
                        v12 += v13;
                      }
                      while ( v3 );
                      v1 = v16;
                      v2 = v12 + v17;
                    }
                    v1 = (_DWORD *)v1[2];
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


/* Function: binary_tree @ 0x2060 */
int __cdecl binary_tree(int a1)
{
  int v1; // esi
  int i; // ebx
  int v3; // eax

  v1 = 0;
  for ( i = a1; i; v1 += v3 )
  {
    v3 = *(_DWORD *)i + binary_tree_sum(*(int **)(i + 4));
    i = *(_DWORD *)(i + 8);
  }
  return v1;
}


/* Function: graph_traverse @ 0x20A0 */
int __cdecl graph_traverse(int a1)
{
  _DWORD **v1; // ecx
  int v2; // eax
  _DWORD **v3; // ebx
  int v4; // edx
  _DWORD *i; // eax

  v1 = (_DWORD **)a1;
  v2 = *(_DWORD *)(a1 + 40);
  if ( v2 <= 0 )
    return 0;
  v3 = (_DWORD **)(a1 + 4 * v2);
  v4 = 0;
  do
  {
    for ( i = *v1; i; i = (_DWORD *)i[1] )
      v4 += *i;
    ++v1;
  }
  while ( v1 != v3 );
  return v4;
}


/* Function: test_composite_types @ 0x20E0 */
unsigned int test_composite_types()
{
  int *v0; // eax
  int v1; // ecx
  int v2; // edx
  int *v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  _DWORD v8[2]; // [esp+24h] [ebp-38h] BYREF
  _DWORD v9[2]; // [esp+2Ch] [ebp-30h] BYREF
  _DWORD v10[3]; // [esp+34h] [ebp-28h] BYREF
  _DWORD v11[3]; // [esp+40h] [ebp-1Ch] BYREF
  unsigned int v12; // [esp+4Ch] [ebp-10h]

  v12 = __readgsdword(0x14u);
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
  v0 = v8;
  v8[1] = v9;
  v1 = 10;
  v2 = 0;
  v8[0] = 20;
  v9[0] = 30;
  v9[1] = 0;
  while ( 1 )
  {
    v2 += v1;
    if ( !v0 )
      break;
    v1 = *v0;
    v0 = (int *)v0[1];
  }
  __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v2);
  v3 = v10;
  v10[0] = 10;
  v10[1] = v11;
  v4 = 10;
  v5 = 0;
  v10[2] = 0;
  v11[0] = 20;
  v11[1] = 0;
  v11[2] = v10;
  while ( 1 )
  {
    v3 = (int *)v3[1];
    v5 += v4;
    if ( !v3 )
      break;
    v4 = *v3;
  }
  __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v5);
  v6 = binary_tree_sum(0);
  __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v6 + 100);
  __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
  return v12 - __readgsdword(0x14u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x22EB */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x22EF */
void _x86_get_pc_thunk_cx()
{
  ;
}


/* Function: __stack_chk_fail_local @ 0x2300 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x2320 */
void (*_do_global_ctors_aux())(void)
{
  void (*result)(void); // eax
  int *v1; // ebx

  result = (void (*)(void))_CTOR_LIST__;
  if ( _CTOR_LIST__ != -1 )
  {
    v1 = &_CTOR_LIST__;
    do
    {
      result();
      result = (void (*)(void))*--v1;
    }
    while ( result != (void (*)(void))-1 );
  }
  return result;
}


/* Function: .term_proc @ 0x236C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x6014 */

/* FAILED to decompile: __stack_chk_fail @ 0x6018 */

/* FAILED to decompile: __cxa_finalize @ 0x601C */

/* FAILED to decompile: puts @ 0x6020 */

/* FAILED to decompile: __printf_chk @ 0x6024 */

/* Total functions decompiled: 75, failed: 6 */
