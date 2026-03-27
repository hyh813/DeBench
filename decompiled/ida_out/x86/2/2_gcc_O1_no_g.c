/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/2/2_gcc_O1_no_g
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


/* Function: _start @ 0x10D0 */
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


/* Function: sub_10FC @ 0x10FC */
void sub_10FC()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1100 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1110 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1150 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11A0 */
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


/* Function: frame_dummy @ 0x1230 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1239 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x123D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: double_value @ 0x1241 */
int __cdecl double_value(int a1)
{
  return 2 * a1;
}


/* Function: process_int @ 0x124C */
int __cdecl process_int(int a1)
{
  return 2 * a1 + 1;
}


/* Function: complex_callback @ 0x1259 */
_BOOL4 __cdecl complex_callback(_DWORD *a1, _DWORD *a2)
{
  *a1 += 10;
  return *a2 != 0;
}


/* Function: process_char @ 0x1272 */
int __cdecl process_char(int a1)
{
  int result; // eax

  result = a1;
  if ( (unsigned __int8)(a1 - 65) < 0x1Au )
    return a1 + 32;
  return result;
}


/* Function: process_short @ 0x1287 */
__int16 __cdecl process_short(__int16 a1, __int16 a2)
{
  return a1 + a2;
}


/* Function: process_long @ 0x1295 */
int __cdecl process_long(int a1)
{
  return 2 * a1;
}


/* Function: process_ll @ 0x12A0 */
int __cdecl process_ll(int a1)
{
  return a1 * a1;
}


/* Function: process_float @ 0x12B6 */
long double __cdecl process_float(float a1)
{
  return 1.5 * a1 + 0.5;
}


/* Function: process_double @ 0x12E0 */
long double __cdecl process_double(double a1)
{
  return 0.5 * a1 + 0.1;
}


/* Function: process_ld @ 0x130A */
long double __cdecl process_ld(long double a1)
{
  return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x1319 */
int __cdecl process_bool(int a1)
{
  bool v1; // al

  v1 = (a1 & 1) == 0;
  if ( a1 <= 0 )
    return 0;
  return v1;
}


/* Function: const_param @ 0x1336 */
int __cdecl const_param(_DWORD *a1)
{
  return *a1 + 10;
}


/* Function: volatile_access @ 0x1344 */
int __cdecl volatile_access(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: test_data_types_l1 @ 0x1353 */
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


/* Function: array_1d_stack @ 0x149E */
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


/* Function: array_string @ 0x14CB */
int __cdecl array_string(_BYTE *a1)
{
  int result; // eax

  if ( !*a1 )
    return 0;
  result = 0;
  do
    ++result;
  while ( a1[result] );
  return result;
}


/* Function: array_2d_stack @ 0x14ED */
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


/* Function: array_3d @ 0x150E */
int __cdecl array_3d(int a1)
{
  _DWORD *v1; // ecx
  int result; // eax
  _DWORD *v3; // edx

  v1 = (_DWORD *)(a1 + 100);
  result = 0;
  do
  {
    v3 = v1 - 25;
    do
    {
      result += v3[4] + v3[3] + v3[2] + v3[1] + *v3;
      v3 += 5;
    }
    while ( v3 != v1 );
    v1 += 25;
  }
  while ( v1 != (_DWORD *)(a1 + 600) );
  return result;
}


/* Function: array_vla @ 0x1546 */
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


/* Function: array_pointer @ 0x1573 */
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


/* Function: pointer_array @ 0x15A3 */
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


/* Function: array_complex_index @ 0x15E7 */
int __cdecl array_complex_index(int a1, int a2, int a3, __int64 a4)
{
  if ( (int)(HIDWORD(a4) | a4) < 0 || (int)a4 >= a2 )
    return -1;
  if ( SHIDWORD(a4) >= a3 )
    return -1;
  return *(_DWORD *)(a1 + 4 * (a4 + HIDWORD(a4) * a2));
}


/* Function: array_oob @ 0x1624 */
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


/* Function: test_array_types @ 0x1652 */
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
  int v16; // eax
  _DWORD *v17; // esi
  int i; // ecx
  int j; // eax
  int v20; // edx
  int v21; // eax
  char *v22; // edx
  char *v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned int k; // eax
  int v28; // eax
  int m; // eax
  int v31; // [esp+10h] [ebp-514h] BYREF
  int v32; // [esp+14h] [ebp-510h] BYREF
  int v33; // [esp+18h] [ebp-50Ch] BYREF
  _DWORD v34[3]; // [esp+1Ch] [ebp-508h] BYREF
  _DWORD v35[5]; // [esp+28h] [ebp-4FCh] BYREF
  _DWORD v36[30]; // [esp+3Ch] [ebp-4E8h] BYREF
  _DWORD v37[50]; // [esp+B4h] [ebp-470h] BYREF
  _DWORD v38[100]; // [esp+17Ch] [ebp-3A8h] BYREF
  _BYTE v39[100]; // [esp+30Ch] [ebp-218h] BYREF
  char v40; // [esp+370h] [ebp-1B4h] BYREF
  char v41[6]; // [esp+502h] [ebp-22h] BYREF
  unsigned int v42; // [esp+508h] [ebp-1Ch]

  v42 = __readgsdword(0x14u);
  puts(asc_33BD);
  v35[0] = 1;
  v35[1] = 2;
  v35[2] = 3;
  v35[3] = 4;
  v35[4] = 5;
  v15 = array_1d_stack(v35, 5);
  __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v15);
  strcpy(v41, "hello");
  v16 = array_string(v41);
  __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v16);
  v17 = v38;
  for ( i = 0; i != 10; ++i )
  {
    for ( j = 0; j != 10; ++j )
    {
      v20 = 0;
      if ( i == j )
        v20 = j;
      v17[j] = v20;
    }
    v17 += 10;
  }
  v21 = array_2d_stack(v38);
  __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v21);
  v22 = &v40;
  do
  {
    v23 = v22 - 100;
    do
    {
      *(_DWORD *)v23 = 1;
      *((_DWORD *)v23 + 1) = 1;
      *((_DWORD *)v23 + 2) = 1;
      *((_DWORD *)v23 + 3) = 1;
      *((_DWORD *)v23 + 4) = 1;
      v23 += 20;
    }
    while ( v22 != v23 );
    v22 += 100;
  }
  while ( v22 != &a15 );
  v24 = array_3d((int)v39);
  __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v24);
  v34[0] = 10;
  v34[1] = 20;
  v34[2] = 30;
  v25 = array_vla(3, v34);
  __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", v25);
  v37[0] = 0;
  v37[10] = 10;
  v37[20] = 20;
  v37[30] = 30;
  v37[40] = 40;
  v26 = array_pointer(v37, 5);
  __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", v26);
  v31 = 10;
  v32 = 20;
  v33 = 30;
  for ( k = 0; k < 7; ++k )
    v36[k + 3] = 0;
  v36[0] = &v31;
  v36[1] = &v32;
  v36[2] = &v33;
  v28 = pointer_array((int)v36, 3);
  __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v28);
  for ( m = 0; m != 20; ++m )
    v36[m + 10] = m;
  __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v36[27]);
  return v42 - __readgsdword(0x14u);
}


/* Function: ptr_single @ 0x191F */
int __cdecl ptr_single(_DWORD *a1)
{
  return *a1 + 10;
}


/* Function: ptr_double @ 0x192D */
int __cdecl ptr_double(_DWORD **a1)
{
  return **a1 + 5;
}


/* Function: ptr_triple @ 0x193D */
int __cdecl ptr_triple(_DWORD ***a1)
{
  return ***a1 + 1;
}


/* Function: ptr_increment @ 0x194F */
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


/* Function: ptr_offset @ 0x197F */
int __cdecl ptr_offset(int a1, int a2)
{
  return *(_DWORD *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0x198F */
int __cdecl ptr_diff(int a1, int a2)
{
  return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x199F */
int __cdecl ptr_void(char *a1, int a2)
{
  if ( !a2 )
    return *(_DWORD *)a1;
  if ( a2 == 1 )
    return *a1;
  return -1;
}


/* Function: ptr_const @ 0x19C5 */
int __cdecl ptr_const(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0x19D2 */
int __cdecl ptr_const_ptr(int *a1)
{
  int result; // eax

  result = *a1 + 5;
  *a1 = result;
  return result;
}


/* Function: ptr_func_simple @ 0x19E2 */
int __cdecl ptr_func_simple(int (__cdecl *a1)(int), int a2)
{
  return a1(a2);
}


/* Function: ptr_func_complex @ 0x19F5 */
int __cdecl ptr_func_complex(int (__cdecl *a1)(int, _DWORD *), int a2)
{
  _DWORD v3[6]; // [esp+Ch] [ebp-18h] BYREF

  v3[2] = __readgsdword(0x14u);
  v3[0] = "test";
  v3[1] = 0;
  return a1(a2, v3);
}


/* Function: ptr_cast @ 0x1A4B */
int __cdecl ptr_cast(int a1)
{
  return *(_DWORD *)a1;
}


/* Function: opaque_handle_create @ 0x1A56 */
int __cdecl opaque_handle_create(int a1)
{
  return a1;
}


/* Function: opaque_handle_op @ 0x1A5F */
int __cdecl opaque_handle_op(int a1)
{
  return 2 * a1;
}


/* Function: test_pointer_types @ 0x1A6A */
unsigned int test_pointer_types()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [esp+14h] [ebp-34h] BYREF
  int *v6; // [esp+18h] [ebp-30h] BYREF
  int **v7; // [esp+1Ch] [ebp-2Ch] BYREF
  int v8; // [esp+20h] [ebp-28h] BYREF
  _DWORD v9[5]; // [esp+24h] [ebp-24h] BYREF
  unsigned int v10; // [esp+38h] [ebp-10h]

  v10 = __readgsdword(0x14u);
  puts(asc_3430);
  __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
  __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
  v5 = 5;
  v6 = &v5;
  v7 = &v6;
  v0 = ptr_triple(&v7);
  __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", v0);
  v9[0] = 1;
  v9[1] = 2;
  v9[2] = 3;
  v9[3] = 4;
  v9[4] = 5;
  v1 = ptr_increment((int)v9, 5);
  __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v1);
  __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
  __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
  __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
  __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
  __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
  __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
  v2 = ptr_func_simple(double_value, 5);
  __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", v2);
  v8 = 5;
  v3 = ptr_func_complex((int (__cdecl *)(int, _DWORD *))complex_callback, (int)&v8);
  __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", v3);
  __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
  __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
  return v10 - __readgsdword(0x14u);
}


/* Function: struct_simple @ 0x1C3D */
int __cdecl struct_simple(_DWORD *a1)
{
  return a1[2] + *a1 + a1[1];
}


/* Function: struct_array @ 0x1C4E */
int __cdecl struct_array(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  if ( a2 <= 0 )
    return 0;
  v2 = a1;
  v3 = 0;
  do
  {
    v3 += v2[2] + *v2 + v2[1];
    v2 += 3;
  }
  while ( v2 != &a1[3 * a2] );
  return v3;
}


/* Function: struct_nested @ 0x1C88 */
int __cdecl struct_nested(_DWORD *a1)
{
  return *a1 + a1[3];
}


/* Function: struct_deep @ 0x1C96 */
int __cdecl struct_deep(int a1)
{
  return *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 20);
}


/* Function: struct_with_ptr @ 0x1CA5 */
int __cdecl struct_with_ptr(_DWORD *a1)
{
  int *v1; // ecx
  int v2; // edx

  v1 = (int *)a1[1];
  v2 = 0;
  if ( v1 )
    v2 = *v1;
  return v2 + *a1;
}


/* Function: struct_bitfields @ 0x1CC0 */
int __cdecl struct_bitfields(_WORD *a1)
{
  return (*a1 >> 6) + ((*(_BYTE *)a1 >> 3) & 7) + ((*(_BYTE *)a1 >> 1) & 3) + (*(_BYTE *)a1 & 1);
}


/* Function: union_type @ 0x1CF0 */
int __cdecl union_type(char *a1, int a2)
{
  if ( !a2 )
    return *(_DWORD *)a1;
  if ( a2 == 1 )
    return (int)*(float *)a1;
  return *a1;
}


/* Function: union_array @ 0x1D3E */
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


/* Function: enum_type @ 0x1D6B */
int __cdecl enum_type(int a1)
{
  return 10 * a1;
}


/* Function: enum_switch @ 0x1D79 */
int __cdecl enum_switch(unsigned int a1)
{
  int result; // eax

  if ( a1 == 2 )
    return 50;
  if ( a1 <= 2 )
    return a1 != 0 ? 0x64 : 0;
  result = -99;
  if ( a1 == 3 )
    return -1;
  return result;
}


/* Function: struct_func_ptr @ 0x1DAA */
int __cdecl struct_func_ptr(int a1)
{
  return (*(int (__cdecl **)(_DWORD))(a1 + 4))(*(_DWORD *)a1);
}


/* Function: linked_list @ 0x1DBE */
int __cdecl linked_list(_DWORD *a1)
{
  _DWORD *v1; // eax
  int v2; // edx

  v1 = a1;
  if ( !a1 )
    return 0;
  v2 = 0;
  do
  {
    v2 += *v1;
    v1 = (_DWORD *)v1[1];
  }
  while ( v1 );
  return v2;
}


/* Function: doubly_linked_list @ 0x1DE2 */
int __cdecl doubly_linked_list(_DWORD *a1)
{
  _DWORD *v1; // eax
  int v2; // edx

  v1 = a1;
  if ( !a1 )
    return 0;
  v2 = 0;
  do
  {
    v2 += *v1;
    v1 = (_DWORD *)v1[1];
  }
  while ( v1 );
  return v2;
}


/* Function: binary_tree_sum @ 0x1E06 */
int __cdecl binary_tree_sum(_DWORD *a1)
{
  int result; // eax
  int v2; // ebx

  result = 0;
  if ( a1 )
  {
    v2 = *a1 + binary_tree_sum(a1[1]);
    return v2 + binary_tree_sum(a1[2]);
  }
  return result;
}


/* Function: binary_tree @ 0x1E41 */
int __cdecl binary_tree(_DWORD *a1)
{
  return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x1E55 */
int __cdecl graph_traverse(int a1)
{
  int v1; // edx
  _DWORD **v2; // ecx
  _DWORD **v3; // ebx
  int v4; // edx
  _DWORD *i; // eax

  v1 = *(_DWORD *)(a1 + 40);
  if ( v1 <= 0 )
    return 0;
  v2 = (_DWORD **)a1;
  v3 = (_DWORD **)(a1 + 4 * v1);
  v4 = 0;
  do
  {
    for ( i = *v2; i; i = (_DWORD *)i[1] )
      v4 += *i;
    ++v2;
  }
  while ( v2 != v3 );
  return v4;
}


/* Function: test_composite_types @ 0x1E90 */
unsigned int test_composite_types()
{
  int v0; // eax
  int v1; // eax
  __int16 v2; // ax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _DWORD v11[2]; // [esp+18h] [ebp-C4h] BYREF
  _DWORD v12[2]; // [esp+20h] [ebp-BCh] BYREF
  __int16 v13; // [esp+28h] [ebp-B4h] BYREF
  int v14; // [esp+2Ch] [ebp-B0h]
  _DWORD v15[2]; // [esp+30h] [ebp-ACh] BYREF
  _DWORD v16[2]; // [esp+38h] [ebp-A4h] BYREF
  _DWORD v17[3]; // [esp+40h] [ebp-9Ch] BYREF
  _DWORD v18[3]; // [esp+4Ch] [ebp-90h] BYREF
  _DWORD v19[6]; // [esp+58h] [ebp-84h] BYREF
  _DWORD v20[2]; // [esp+70h] [ebp-6Ch] BYREF
  _DWORD v21[2]; // [esp+78h] [ebp-64h] BYREF
  _DWORD v22[2]; // [esp+80h] [ebp-5Ch] BYREF
  _DWORD v23[3]; // [esp+88h] [ebp-54h] BYREF
  _DWORD v24[3]; // [esp+94h] [ebp-48h] BYREF
  _DWORD v25[11]; // [esp+A0h] [ebp-3Ch] BYREF
  unsigned int v26; // [esp+CCh] [ebp-10h]

  v26 = __readgsdword(0x14u);
  puts(asc_3526);
  __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
  v19[0] = 1;
  v19[1] = 1;
  v19[2] = 1;
  v19[3] = 2;
  v19[4] = 2;
  v19[5] = 2;
  v0 = struct_array(v19, 2);
  __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", v0);
  __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
  __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
  v11[0] = 20;
  v11[1] = 0;
  v12[0] = 10;
  v12[1] = v11;
  v1 = struct_with_ptr(v12);
  __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", v1);
  LOBYTE(v13) = v13 & 0xC0 | 0x1D;
  LOBYTE(v2) = v13 & 0x3F;
  HIBYTE(v2) = 25;
  v13 = v2;
  v14 &= 0xFFF00000;
  v3 = struct_bitfields(&v13);
  __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", v3);
  __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
  v18[0] = 10;
  v18[1] = 20;
  v18[2] = 30;
  v4 = union_array(v18, 3);
  __printf_chk(1, "CMP-L2-08 (union_array): %d\n", v4);
  __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
  __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
  v15[0] = 10;
  v15[1] = process_int;
  v5 = struct_func_ptr((int)v15);
  __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", v5);
  v20[0] = 10;
  v20[1] = v21;
  v21[0] = 20;
  v21[1] = v22;
  v22[0] = 30;
  v22[1] = 0;
  v6 = linked_list(v20);
  __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v6);
  v23[0] = 10;
  v23[1] = v24;
  v23[2] = 0;
  v24[0] = 20;
  v24[1] = 0;
  v24[2] = v23;
  v7 = doubly_linked_list(v23);
  __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v7);
  v17[0] = 100;
  v17[1] = 0;
  v17[2] = 0;
  v8 = binary_tree_sum(v17);
  __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v8);
  v16[0] = 1;
  v16[1] = 0;
  memset(&v25[1], 0, 0x24u);
  v25[0] = v16;
  v25[10] = 2;
  v9 = graph_traverse((int)v25);
  __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", v9);
  return v26 - __readgsdword(0x14u);
}


/* FAILED to decompile: main @ 0x21E6 */

/* Function: __x86.get_pc_thunk.ax @ 0x220B */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x2210 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x2230 */
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


/* Function: .term_proc @ 0x227C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x6014 */

/* FAILED to decompile: __stack_chk_fail @ 0x6018 */

/* FAILED to decompile: __cxa_finalize @ 0x601C */

/* FAILED to decompile: puts @ 0x6020 */

/* FAILED to decompile: __printf_chk @ 0x6024 */

/* Total functions decompiled: 76, failed: 6 */
