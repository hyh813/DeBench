/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/2/2_gcc_O0_no_g
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


/* Function: process_char @ 0x1259 */
int __cdecl process_char(char a1)
{
  if ( a1 <= 64 || a1 > 90 )
    return (unsigned __int8)a1;
  else
    return (unsigned __int8)a1 + 32;
}


/* Function: process_short @ 0x128E */
int __cdecl process_short(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 + a2;
}


/* Function: process_int @ 0x12BC */
int __cdecl process_int(int a1)
{
  return 2 * a1 + 1;
}


/* Function: process_long @ 0x12D7 */
int __cdecl process_long(int a1)
{
  return 2 * a1;
}


/* Function: process_ll @ 0x12EF */
int __cdecl process_ll(int a1)
{
  return a1 * a1;
}


/* Function: process_float @ 0x132E */
long double __cdecl process_float(float a1)
{
  return a1 * 1.5 + 0.5;
}


/* Function: process_double @ 0x1354 */
long double __cdecl process_double(double a1)
{
  return a1 / 2.0 + 0.1;
}


/* Function: process_ld @ 0x1389 */
long double __cdecl process_ld(long double a1)
{
  return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x13A7 */
int __cdecl process_bool(int a1)
{
  return a1 > 0 && (a1 & 1) == 0;
}


/* Function: const_param @ 0x13D9 */
int __cdecl const_param(_DWORD *a1)
{
  return *a1 + 10;
}


/* Function: volatile_access @ 0x13F4 */
int __cdecl volatile_access(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: test_data_types_l1 @ 0x1422 */
unsigned int test_data_types_l1()
{
  char v0; // al
  char v1; // al
  __int16 v2; // ax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  long double v7; // fst7
  long double v8; // fst7
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  int v12; // eax
  int v13; // eax
  long double v15; // [esp-Ch] [ebp-24h]
  int v16; // [esp+4h] [ebp-14h] BYREF
  int v17; // [esp+8h] [ebp-10h] BYREF
  unsigned int v18; // [esp+Ch] [ebp-Ch]

  v18 = __readgsdword(0x14u);
  puts(asc_3010);
  v0 = process_char(65);
  printf("DT-L1-01 (process_char): %c\n", v0);
  v1 = process_char(98);
  printf("DT-L1-01 (process_char): %c\n", v1);
  v2 = process_short(0x64u, 0xC8u);
  printf("DT-L1-02 (process_short): %d\n", v2);
  v3 = process_int(5);
  printf("DT-L1-03 (process_int): %d\n", v3);
  v4 = process_long(100);
  printf("DT-L1-04 (process_long): %ld\n", v4);
  v5 = process_ll(100);
  printf("DT-L1-05 (process_ll): %lld\n", v5, v6);
  v7 = process_float(2.0);
  printf("DT-L1-06 (process_float): %.2f\n", (double)v7);
  v8 = process_double(4.0);
  printf("DT-L1-07 (process_double): %.2f\n", (double)v8);
  v15 = process_ld(3.0);
  printf("DT-L1-08 (process_ld): %.2Lf\n", *(_QWORD *)&v15, HIDWORD(v15));
  v9 = process_bool(4);
  printf("DT-L1-09 (process_bool): %d\n", v9);
  v10 = process_bool(3);
  printf("DT-L1-09 (process_bool): %d\n", v10);
  v11 = process_bool(-2);
  printf("DT-L1-09 (process_bool): %d\n", v11);
  v16 = 5;
  v12 = const_param(&v16);
  printf("DT-L1-10 (const_param): %d\n", v12);
  v17 = 10;
  v13 = volatile_access(&v17);
  printf("DT-L1-11 (volatile_access): %d\n", v13);
  return v18 - __readgsdword(0x14u);
}


/* Function: array_1d_stack @ 0x1686 */
int __cdecl array_1d_stack(int a1, int a2)
{
  int v3; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < a2; ++i )
    v3 += *(_DWORD *)(4 * i + a1);
  return v3;
}


/* Function: array_string @ 0x16CF */
int __cdecl array_string(int a1)
{
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; *(_BYTE *)(i + a1); ++i )
    ;
  return i;
}


/* Function: array_2d_stack @ 0x1704 */
int __cdecl array_2d_stack(int a1)
{
  int v2; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v2 = 0;
  for ( i = 0; i <= 9; ++i )
    v2 += *(_DWORD *)(a1 + 40 * i + 4 * i);
  return v2;
}


/* Function: array_3d @ 0x1754 */
int __cdecl array_3d(int a1)
{
  int v2; // [esp+0h] [ebp-10h]
  int i; // [esp+4h] [ebp-Ch]
  int j; // [esp+8h] [ebp-8h]
  int k; // [esp+Ch] [ebp-4h]

  v2 = 0;
  for ( i = 0; i <= 4; ++i )
  {
    for ( j = 0; j <= 4; ++j )
    {
      for ( k = 0; k <= 4; ++k )
        v2 += *(_DWORD *)(100 * i + a1 + 4 * (k + 5 * j));
    }
  }
  return v2;
}


/* Function: array_vla @ 0x17CE */
int __cdecl array_vla(int a1, int a2)
{
  int v3; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < a1; ++i )
    v3 += *(_DWORD *)(4 * i + a2);
  return v3;
}


/* Function: array_pointer @ 0x1817 */
int __cdecl array_pointer(int a1, int a2)
{
  int v3; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < a2; ++i )
    v3 += *(_DWORD *)(40 * i + a1);
  return v3;
}


/* Function: pointer_array @ 0x1865 */
int __cdecl pointer_array(int a1, int a2)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]

  v4 = 0;
  v2 = a2;
  if ( a2 > 10 )
    v2 = 10;
  for ( i = 0; i < v2; ++i )
  {
    if ( *(_DWORD *)(4 * i + a1) )
      v4 += **(_DWORD **)(4 * i + a1);
  }
  return v4;
}


/* Function: array_complex_index @ 0x18D5 */
int __cdecl array_complex_index(int a1, int a2, int a3, int a4, int a5)
{
  if ( a4 >= 0 && a4 < a2 && a5 >= 0 && a5 < a3 )
    return *(_DWORD *)(4 * (a2 * a5 + a4) + a1);
  else
    return -1;
}


/* Function: array_oob @ 0x1927 */
int __cdecl array_oob(int a1, int a2)
{
  int v3; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v3 = 0;
  for ( i = 0; i <= a2; ++i )
    v3 += *(_DWORD *)(4 * i + a1);
  return v3;
}


/* Function: test_array_types @ 0x1970 */
unsigned int test_array_types()
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
  int v10; // [esp+8h] [ebp-520h] BYREF
  int v11; // [esp+Ch] [ebp-51Ch] BYREF
  int v12; // [esp+10h] [ebp-518h] BYREF
  int i; // [esp+14h] [ebp-514h]
  int j; // [esp+18h] [ebp-510h]
  int k; // [esp+1Ch] [ebp-50Ch]
  int m; // [esp+20h] [ebp-508h]
  int n; // [esp+24h] [ebp-504h]
  int ii; // [esp+28h] [ebp-500h]
  int jj; // [esp+2Ch] [ebp-4FCh]
  _DWORD v20[3]; // [esp+30h] [ebp-4F8h] BYREF
  _DWORD v21[5]; // [esp+3Ch] [ebp-4ECh] BYREF
  _DWORD v22[10]; // [esp+50h] [ebp-4D8h] BYREF
  _DWORD v23[20]; // [esp+78h] [ebp-4B0h] BYREF
  _BYTE v24[200]; // [esp+C8h] [ebp-460h] BYREF
  _DWORD v25[100]; // [esp+190h] [ebp-398h] BYREF
  _DWORD v26[125]; // [esp+320h] [ebp-208h] BYREF
  char v27[6]; // [esp+516h] [ebp-12h] BYREF
  unsigned int v28; // [esp+51Ch] [ebp-Ch]

  v28 = __readgsdword(0x14u);
  puts(asc_317C);
  v21[0] = 1;
  v21[1] = 2;
  v21[2] = 3;
  v21[3] = 4;
  v21[4] = 5;
  v0 = array_1d_stack((int)v21, 5);
  printf("ARR-L1-01 (array_1d_stack): %d\n", v0);
  strcpy(v27, "hello");
  v1 = array_string((int)v27);
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
  v3 = array_2d_stack((int)v25);
  printf("ARR-L1-03 (array_2d_stack): %d\n", v3);
  for ( k = 0; k <= 4; ++k )
  {
    for ( m = 0; m <= 4; ++m )
    {
      for ( n = 0; n <= 4; ++n )
        v26[25 * k + 5 * m + n] = 1;
    }
  }
  v4 = array_3d((int)v26);
  printf("ARR-L1-04 (array_3d): %d\n", v4);
  v20[0] = 10;
  v20[1] = 20;
  v20[2] = 30;
  v5 = array_vla(3, (int)v20);
  printf("ARR-L2-01 (array_vla): %d\n", v5);
  for ( ii = 0; ii <= 4; ++ii )
    *(_DWORD *)&v24[40 * ii] = 10 * ii;
  v6 = array_pointer((int)v24, 5);
  printf("ARR-L2-02 (array_pointer): %d\n", v6);
  v10 = 10;
  v11 = 20;
  v12 = 30;
  memset(v22, 0, sizeof(v22));
  v22[0] = &v10;
  v22[1] = &v11;
  v22[2] = &v12;
  v7 = pointer_array((int)v22, 3);
  printf("ARR-L2-03 (pointer_array): %d\n", v7);
  for ( jj = 0; jj <= 19; ++jj )
    v23[jj] = jj;
  v8 = array_complex_index((int)v23, 5, 4, 2, 3);
  printf("ARR-L2-04 (array_complex_index): %d\n", v8);
  return v28 - __readgsdword(0x14u);
}


/* Function: ptr_single @ 0x1D1D */
int __cdecl ptr_single(_DWORD *a1)
{
  return *a1 + 10;
}


/* Function: ptr_double @ 0x1D38 */
int __cdecl ptr_double(_DWORD **a1)
{
  return **a1 + 5;
}


/* Function: ptr_triple @ 0x1D55 */
int __cdecl ptr_triple(_DWORD ***a1)
{
  return ***a1 + 1;
}


/* Function: ptr_increment @ 0x1D74 */
int __cdecl ptr_increment(_DWORD *a1, int a2)
{
  int v3; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < a2; ++i )
    v3 += *a1++;
  return v3;
}


/* Function: ptr_offset @ 0x1DB5 */
int __cdecl ptr_offset(int a1, int a2)
{
  return *(_DWORD *)(4 * a2 + a1);
}


/* Function: ptr_diff @ 0x1DD9 */
int __cdecl ptr_diff(int a1, int a2)
{
  return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x1DF5 */
int __cdecl ptr_void(char *a1, int a2)
{
  if ( !a2 )
    return *(_DWORD *)a1;
  if ( a2 == 1 )
    return *a1;
  return -1;
}


/* Function: ptr_const @ 0x1E2B */
int __cdecl ptr_const(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0x1E45 */
int __cdecl ptr_const_ptr(int a1)
{
  *(_DWORD *)a1 += 5;
  return *(_DWORD *)a1;
}


/* Function: ptr_func_simple @ 0x1E6A */
int __cdecl ptr_func_simple(int (__cdecl *a1)(int), int a2)
{
  return a1(a2);
}


/* Function: ptr_func_complex @ 0x1E8E */
int __cdecl ptr_func_complex(int (__cdecl *a1)(int, _DWORD *), int a2)
{
  _DWORD v3[5]; // [esp+14h] [ebp-14h] BYREF

  v3[2] = __readgsdword(0x14u);
  v3[0] = "test";
  v3[1] = 0;
  return a1(a2, v3);
}


/* Function: ptr_cast @ 0x1EEF */
int __cdecl ptr_cast(int a1)
{
  return *(_DWORD *)a1;
}


/* Function: opaque_handle_create @ 0x1F1C */
int __cdecl opaque_handle_create(int a1)
{
  return a1;
}


/* Function: opaque_handle_op @ 0x1F32 */
int __cdecl opaque_handle_op(int a1)
{
  return 2 * a1;
}


/* Function: complex_callback @ 0x1F4A */
_BOOL4 __cdecl complex_callback(_DWORD *a1, _DWORD *a2)
{
  *a1 += 10;
  return *a2 != 0;
}


/* Function: test_pointer_types @ 0x1F77 */
unsigned int test_pointer_types()
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
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char v15; // [esp+7h] [ebp-81h] BYREF
  int v16; // [esp+8h] [ebp-80h] BYREF
  int v17; // [esp+Ch] [ebp-7Ch] BYREF
  int *v18; // [esp+10h] [ebp-78h] BYREF
  int v19; // [esp+14h] [ebp-74h] BYREF
  int *v20; // [esp+18h] [ebp-70h] BYREF
  int **v21; // [esp+1Ch] [ebp-6Ch] BYREF
  int v22; // [esp+20h] [ebp-68h] BYREF
  int v23; // [esp+24h] [ebp-64h] BYREF
  int v24; // [esp+28h] [ebp-60h] BYREF
  int v25; // [esp+2Ch] [ebp-5Ch] BYREF
  _DWORD v26[3]; // [esp+30h] [ebp-58h] BYREF
  int v27; // [esp+3Ch] [ebp-4Ch]
  _DWORD v28[5]; // [esp+40h] [ebp-48h] BYREF
  _DWORD v29[5]; // [esp+54h] [ebp-34h] BYREF
  _DWORD v30[4]; // [esp+68h] [ebp-20h] BYREF
  int v31; // [esp+78h] [ebp-10h] BYREF
  unsigned int v32; // [esp+7Ch] [ebp-Ch]

  v32 = __readgsdword(0x14u);
  puts(asc_329A);
  v16 = 5;
  v0 = ptr_single(&v16);
  printf("PTR-L2-01 (ptr_single): %d\n", v0);
  v17 = 10;
  v18 = &v17;
  v26[1] = &v18;
  v1 = ptr_double(&v18);
  printf("PTR-L2-02 (ptr_double): %d\n", v1);
  v19 = 5;
  v20 = &v19;
  v21 = &v20;
  v26[2] = &v21;
  v2 = ptr_triple(&v21);
  printf("PTR-L2-03 (ptr_triple): %d\n", v2);
  v28[0] = 1;
  v28[1] = 2;
  v28[2] = 3;
  v28[3] = 4;
  v28[4] = 5;
  v3 = ptr_increment(v28, 5);
  printf("PTR-L2-04 (ptr_increment): %d\n", v3);
  v29[0] = 10;
  v29[1] = 20;
  v29[2] = 30;
  v29[3] = 40;
  v29[4] = 50;
  v4 = ptr_offset((int)v29, 2);
  printf("PTR-L2-05 (ptr_offset): %d\n", v4);
  v30[0] = 0;
  v30[1] = 10;
  v30[2] = 20;
  v30[3] = 30;
  v31 = 40;
  v5 = ptr_diff((int)&v31, (int)v30);
  printf("PTR-L2-06 (ptr_diff): %d\n", v5);
  v22 = 42;
  v15 = 65;
  v6 = ptr_void((char *)&v22, 0);
  printf("PTR-L2-07 (ptr_void): %d\n", v6);
  v7 = ptr_void(&v15, 1);
  printf("PTR-L2-07 (ptr_void): %d\n", v7);
  v23 = 10;
  v8 = ptr_const(&v23);
  printf("PTR-L2-08 (ptr_const): %d\n", v8);
  v24 = 10;
  v9 = ptr_const_ptr((int)&v24);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n", v9);
  v10 = ptr_func_simple(double_value, 5);
  printf("PTR-L2-10 (ptr_func_simple): %d\n", v10);
  v25 = 5;
  v11 = ptr_func_complex((int (__cdecl *)(int, _DWORD *))complex_callback, (int)&v25);
  printf("PTR-L2-11 (ptr_func_complex): %d\n", v11);
  v26[0] = 305419896;
  v12 = ptr_cast((int)v26);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n", v12);
  v27 = opaque_handle_create(10);
  v13 = opaque_handle_op(v27);
  printf("PTR-L2-13 (opaque_handle_op): %d\n", v13);
  return v32 - __readgsdword(0x14u);
}


/* Function: struct_simple @ 0x2291 */
int __cdecl struct_simple(_DWORD *a1)
{
  return a1[1] + *a1 + a1[2];
}


/* Function: struct_array @ 0x22B9 */
int __cdecl struct_array(int a1, int a2)
{
  int v3; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < a2; ++i )
    v3 += *(_DWORD *)(12 * i + a1 + 4) + *(_DWORD *)(12 * i + a1) + *(_DWORD *)(12 * i + a1 + 8);
  return v3;
}


/* Function: struct_nested @ 0x2336 */
int __cdecl struct_nested(_DWORD *a1)
{
  return *a1 + a1[3];
}


/* Function: struct_deep @ 0x2356 */
int __cdecl struct_deep(int a1)
{
  return *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 20);
}


/* Function: struct_with_ptr @ 0x2377 */
int __cdecl struct_with_ptr(int a1)
{
  int v1; // eax

  if ( *(_DWORD *)(a1 + 4) )
    v1 = **(_DWORD **)(a1 + 4);
  else
    v1 = 0;
  return *(_DWORD *)a1 + v1;
}


/* Function: struct_bitfields @ 0x23AA */
int __cdecl struct_bitfields(_BYTE *a1)
{
  return ((*a1 >> 3) & 7) + ((*a1 >> 1) & 3) + (*a1 & 1) + (*(_WORD *)a1 >> 6);
}


/* Function: union_type @ 0x23F9 */
int __cdecl union_type(char *a1, int a2)
{
  if ( !a2 )
    return *(_DWORD *)a1;
  if ( a2 == 1 )
    return (int)*(float *)a1;
  return *a1;
}


/* Function: union_array @ 0x244C */
int __cdecl union_array(int a1, int a2)
{
  int v3; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < a2; ++i )
    v3 += *(_DWORD *)(4 * i + a1);
  return v3;
}


/* Function: enum_type @ 0x2495 */
int __cdecl enum_type(int a1)
{
  return 10 * a1;
}


/* Function: enum_switch @ 0x24B4 */
int __cdecl enum_switch(unsigned int a1)
{
  if ( a1 == 3 )
    return -1;
  if ( a1 > 3 )
    return -99;
  if ( a1 == 2 )
    return 50;
  if ( a1 )
    return 100;
  return 0;
}


/* Function: struct_func_ptr @ 0x250E */
int __cdecl struct_func_ptr(int a1)
{
  return (*(int (__cdecl **)(_DWORD))(a1 + 4))(*(_DWORD *)a1);
}


/* Function: linked_list @ 0x2538 */
int __cdecl linked_list(_DWORD *a1)
{
  int v2; // [esp+8h] [ebp-8h]

  v2 = 0;
  while ( a1 )
  {
    v2 += *a1;
    a1 = (_DWORD *)a1[1];
  }
  return v2;
}


/* Function: doubly_linked_list @ 0x2577 */
int __cdecl doubly_linked_list(_DWORD *a1)
{
  int v2; // [esp+8h] [ebp-8h]

  v2 = 0;
  while ( a1 )
  {
    v2 += *a1;
    a1 = (_DWORD *)a1[1];
  }
  return v2;
}


/* Function: binary_tree_sum @ 0x25B6 */
int __cdecl binary_tree_sum(int *a1)
{
  int v2; // ebx
  int v3; // ebx

  if ( !a1 )
    return 0;
  v2 = *a1;
  v3 = binary_tree_sum(a1[1]) + v2;
  return v3 + binary_tree_sum(a1[2]);
}


/* Function: binary_tree @ 0x260A */
int __cdecl binary_tree(int *a1)
{
  return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x262E */
int __cdecl graph_traverse(int a1)
{
  int v2; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  _DWORD *j; // [esp+Ch] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
  {
    for ( j = *(_DWORD **)(a1 + 4 * i); j; j = (_DWORD *)j[1] )
      v2 += *j;
  }
  return v2;
}


/* Function: test_composite_types @ 0x268B */
unsigned int test_composite_types()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int16 v5; // ax
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
  _DWORD v17[2]; // [esp+4h] [ebp-114h] BYREF
  _DWORD v18[2]; // [esp+Ch] [ebp-10Ch] BYREF
  __int16 v19; // [esp+14h] [ebp-104h] BYREF
  int v20; // [esp+18h] [ebp-100h]
  _DWORD v21[2]; // [esp+1Ch] [ebp-FCh] BYREF
  _DWORD v22[2]; // [esp+24h] [ebp-F4h] BYREF
  _DWORD v23[3]; // [esp+2Ch] [ebp-ECh] BYREF
  int v24[3]; // [esp+38h] [ebp-E0h] BYREF
  _DWORD v25[5]; // [esp+44h] [ebp-D4h] BYREF
  _DWORD v26[12]; // [esp+58h] [ebp-C0h] BYREF
  int v27; // [esp+88h] [ebp-90h] BYREF
  _DWORD v28[3]; // [esp+8Ch] [ebp-8Ch] BYREF
  _DWORD v29[6]; // [esp+98h] [ebp-80h] BYREF
  _DWORD v30[2]; // [esp+B0h] [ebp-68h] BYREF
  _DWORD v31[2]; // [esp+B8h] [ebp-60h] BYREF
  _DWORD v32[2]; // [esp+C0h] [ebp-58h] BYREF
  _DWORD v33[3]; // [esp+C8h] [ebp-50h] BYREF
  _DWORD v34[3]; // [esp+D4h] [ebp-44h] BYREF
  _DWORD v35[11]; // [esp+E0h] [ebp-38h] BYREF
  unsigned int v36; // [esp+10Ch] [ebp-Ch]

  v36 = __readgsdword(0x14u);
  puts(asc_343E);
  v23[0] = 1;
  v23[1] = 2;
  v23[2] = 3;
  v0 = struct_simple(v23);
  printf("CMP-L2-01 (struct_simple): %d\n", v0);
  v29[0] = 1;
  v29[1] = 1;
  v29[2] = 1;
  v29[3] = 2;
  v29[4] = 2;
  v29[5] = 2;
  v1 = struct_array((int)v29, 2);
  printf("CMP-L2-02 (struct_array): %d\n", v1);
  v25[0] = 5;
  v25[1] = 10;
  v25[2] = 0;
  v25[3] = 100;
  v25[4] = 200;
  v2 = struct_nested(v25);
  printf("CMP-L2-03 (struct_nested): %d\n", v2);
  v26[0] = 1;
  v26[1] = 2;
  v26[2] = 3;
  v26[3] = 10;
  v26[4] = 20;
  v26[5] = 255;
  memset(&v26[6], 0, 16);
  v26[10] = 255;
  v26[11] = 42;
  v3 = struct_deep((int)v26);
  printf("CMP-L2-04 (struct_deep): %d\n", v3);
  v17[0] = 20;
  v17[1] = 0;
  v18[0] = 10;
  v18[1] = v17;
  v4 = struct_with_ptr((int)v18);
  printf("CMP-L2-05 (struct_with_ptr): %d\n", v4);
  LOBYTE(v19) = v19 | 1;
  LOBYTE(v19) = v19 & 0xF9 | 4;
  LOBYTE(v19) = v19 & 0xC7 | 0x18;
  LOBYTE(v5) = v19 & 0x3F;
  HIBYTE(v5) = 25;
  v19 = v5;
  v20 &= 0xFFF00000;
  v6 = struct_bitfields(&v19);
  printf("CMP-L2-06 (struct_bitfields): %d\n", v6);
  v27 = 305419896;
  v7 = union_type((char *)&v27, 0);
  printf("CMP-L2-07 (union_type): %d\n", v7);
  v28[0] = 10;
  v28[1] = 20;
  v28[2] = 30;
  v8 = union_array((int)v28, 3);
  printf("CMP-L2-08 (union_array): %d\n", v8);
  v9 = enum_type(1);
  printf("CMP-L2-09 (enum_type): %d\n", v9);
  v10 = enum_switch(2u);
  printf("CMP-L2-10 (enum_switch): %d\n", v10);
  v21[0] = 10;
  v21[1] = process_int;
  v11 = struct_func_ptr((int)v21);
  printf("CMP-L2-11 (struct_func_ptr): %d\n", v11);
  v30[0] = 10;
  v30[1] = v31;
  v31[0] = 20;
  v31[1] = v32;
  v32[0] = 30;
  v32[1] = 0;
  v12 = linked_list(v30);
  printf("CMP-L2-12 (linked_list): %d\n", v12);
  v33[0] = 10;
  v33[2] = 0;
  v34[0] = 20;
  v34[1] = 0;
  v34[2] = v33;
  v33[1] = v34;
  v13 = doubly_linked_list(v33);
  printf("CMP-L2-13 (doubly_linked_list): %d\n", v13);
  v24[0] = 100;
  v24[1] = 0;
  v24[2] = 0;
  v14 = binary_tree(v24);
  printf("CMP-L2-14 (binary_tree): %d\n", v14);
  v22[0] = 1;
  v22[1] = 0;
  memset(v35, 0, sizeof(v35));
  v35[10] = 2;
  v35[0] = v22;
  v15 = graph_traverse((int)v35);
  printf("CMP-L2-15 (graph_traverse): %d\n", v15);
  return v36 - __readgsdword(0x14u);
}


/* Function: main @ 0x2B69 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x2B98 */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x2BA0 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x2BC0 */
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


/* Function: .term_proc @ 0x2C0C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x6014 */

/* FAILED to decompile: printf @ 0x6018 */

/* FAILED to decompile: __stack_chk_fail @ 0x601C */

/* FAILED to decompile: __cxa_finalize @ 0x6020 */

/* FAILED to decompile: puts @ 0x6024 */

/* Total functions decompiled: 77, failed: 5 */
