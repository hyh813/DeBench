/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/2/2_clang_O0_no_g
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


/* Function: sub_1070 @ 0x1070 */
int __usercall sub_1070@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 - 16))();
}


/* Function: _start @ 0x1080 */
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


/* Function: deregister_tm_clones @ 0x10C0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1100 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1150 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_1070((int)&GLOBAL_OFFSET_TABLE_);
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


/* Function: frame_dummy @ 0x11E0 */
int frame_dummy()
{
  return register_tm_clones();
}


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
int __cdecl process_char(char a1)
{
  if ( a1 < 65 || a1 > 90 )
    return a1;
  else
    return (char)(a1 + 32);
}


/* Function: process_short @ 0x1240 */
int __cdecl process_short(__int16 a1, __int16 a2)
{
  return (__int16)(a2 + a1);
}


/* Function: process_int @ 0x1260 */
int __cdecl process_int(int a1)
{
  return 2 * a1 + 1;
}


/* Function: process_long @ 0x1280 */
int __cdecl process_long(int a1)
{
  return 2 * a1;
}


/* Function: process_ll @ 0x1290 */
__int64 __cdecl process_ll(__int64 a1)
{
  return a1 * a1;
}


/* Function: process_float @ 0x12B0 */
long double __cdecl process_float(float a1)
{
  return a1 * 1.5 + 0.5;
}


/* Function: process_double @ 0x12E0 */
long double __cdecl process_double(double a1)
{
  return a1 / 2.0 + 0.1;
}


/* Function: process_ld @ 0x1310 */
long double __cdecl process_ld(long double a1)
{
  return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x1330 */
int __cdecl process_bool(int a1)
{
  bool v2; // [esp+3h] [ebp-1h]

  v2 = 0;
  if ( a1 > 0 )
    return a1 % 2 == 0;
  return v2;
}


/* Function: const_param @ 0x1370 */
int __cdecl const_param(_DWORD *a1)
{
  return *a1 + 10;
}


/* Function: volatile_access @ 0x1380 */
int __cdecl volatile_access(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: test_data_types_l1 @ 0x13B0 */
int test_data_types_l1()
{
  char v0; // al
  char v1; // al
  __int16 v2; // ax
  int v3; // eax
  int v4; // eax
  __int64 v5; // rax
  long double v6; // fst7
  long double v7; // fst7
  char v8; // al
  char v9; // al
  char v10; // al
  int v11; // eax
  int v12; // eax
  long double v14; // [esp+4h] [ebp-24h]
  int v15; // [esp+1Ch] [ebp-Ch] BYREF
  int v16; // [esp+20h] [ebp-8h] BYREF

  printf(asc_312C);
  v0 = process_char(65);
  printf("DT-L1-01 (process_char): %c\n", v0);
  v1 = process_char(98);
  printf("DT-L1-01 (process_char): %c\n", v1);
  v2 = process_short(100, 200);
  printf("DT-L1-02 (process_short): %d\n", v2);
  v3 = process_int(5);
  printf("DT-L1-03 (process_int): %d\n", v3);
  v4 = process_long(100);
  printf("DT-L1-04 (process_long): %ld\n", v4);
  v5 = process_ll(100);
  printf("DT-L1-05 (process_ll): %lld\n", v5);
  v6 = process_float(2.0);
  printf("DT-L1-06 (process_float): %.2f\n", (double)v6);
  v7 = process_double(4.0);
  printf("DT-L1-07 (process_double): %.2f\n", (double)v7);
  v14 = process_ld(3.0);
  printf("DT-L1-08 (process_ld): %.2Lf\n", *(_QWORD *)&v14, HIDWORD(v14));
  v8 = process_bool(4);
  printf("DT-L1-09 (process_bool): %d\n", v8 & 1);
  v9 = process_bool(3);
  printf("DT-L1-09 (process_bool): %d\n", v9 & 1);
  v10 = process_bool(-2);
  printf("DT-L1-09 (process_bool): %d\n", v10 & 1);
  v16 = 5;
  v11 = const_param(&v16);
  printf("DT-L1-10 (const_param): %d\n", v11);
  v15 = 10;
  v12 = volatile_access(&v15);
  return printf("DT-L1-11 (volatile_access): %d\n", v12);
}


/* Function: array_1d_stack @ 0x1640 */
int __cdecl array_1d_stack(int a1, int a2)
{
  int i; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 += *(_DWORD *)(a1 + 4 * i);
  return v4;
}


/* Function: array_string @ 0x1690 */
int __cdecl array_string(int a1)
{
  int i; // [esp+0h] [ebp-4h]

  for ( i = 0; *(_BYTE *)(a1 + i); ++i )
    ;
  return i;
}


/* Function: array_2d_stack @ 0x16D0 */
int __cdecl array_2d_stack(int a1)
{
  int i; // [esp+0h] [ebp-8h]
  int v3; // [esp+4h] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < 10; ++i )
    v3 += *(_DWORD *)(40 * i + a1 + 4 * i);
  return v3;
}


/* Function: array_3d @ 0x1720 */
int __cdecl array_3d(int a1)
{
  int k; // [esp+0h] [ebp-10h]
  int j; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v5 = 0;
  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 5; ++j )
    {
      for ( k = 0; k < 5; ++k )
        v5 += *(_DWORD *)(20 * j + 100 * i + a1 + 4 * k);
    }
  }
  return v5;
}


/* Function: array_vla @ 0x17C0 */
int __cdecl array_vla(int a1, int a2)
{
  int i; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < a1; ++i )
    v4 += *(_DWORD *)(a2 + 4 * i);
  return v4;
}


/* Function: array_pointer @ 0x1810 */
int __cdecl array_pointer(int a1, int a2)
{
  int i; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 += *(_DWORD *)(40 * i + a1);
  return v4;
}


/* Function: pointer_array @ 0x1860 */
int __cdecl pointer_array(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-10h]
  int i; // [esp+4h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-4h]

  v5 = 0;
  if ( a2 >= 10 )
    v3 = 10;
  else
    v3 = a2;
  for ( i = 0; i < v3; ++i )
  {
    if ( *(_DWORD *)(a1 + 4 * i) )
      v5 += **(_DWORD **)(a1 + 4 * i);
  }
  return v5;
}


/* Function: array_complex_index @ 0x18F0 */
int __cdecl array_complex_index(int a1, int a2, int a3, int a4, int a5)
{
  if ( a4 >= 0 && a4 < a2 && a5 >= 0 && a5 < a3 )
    return *(_DWORD *)(a1 + 4 * (a4 + a2 * a5));
  else
    return -1;
}


/* Function: array_oob @ 0x1960 */
int __cdecl array_oob(int a1, int a2)
{
  int i; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i <= a2; ++i )
    v4 += *(_DWORD *)(a1 + 4 * i);
  return v4;
}


/* Function: test_array_types @ 0x19B0 */
int test_array_types()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int *v9; // [esp+24h] [ebp-524h]
  int v10; // [esp+28h] [ebp-520h]
  int jj; // [esp+30h] [ebp-518h]
  _DWORD v12[20]; // [esp+34h] [ebp-514h] BYREF
  _DWORD v13[4]; // [esp+84h] [ebp-4C4h] BYREF
  int v14; // [esp+94h] [ebp-4B4h] BYREF
  int v15; // [esp+ACh] [ebp-49Ch] BYREF
  int v16; // [esp+B0h] [ebp-498h] BYREF
  int v17; // [esp+B4h] [ebp-494h] BYREF
  int ii; // [esp+B8h] [ebp-490h]
  _DWORD v19[50]; // [esp+BCh] [ebp-48Ch] BYREF
  _DWORD v20[3]; // [esp+184h] [ebp-3C4h] BYREF
  int n; // [esp+190h] [ebp-3B8h]
  int m; // [esp+194h] [ebp-3B4h]
  int k; // [esp+198h] [ebp-3B0h]
  _DWORD v24[125]; // [esp+19Ch] [ebp-3ACh] BYREF
  int j; // [esp+390h] [ebp-1B8h]
  int i; // [esp+394h] [ebp-1B4h]
  _QWORD v27[50]; // [esp+398h] [ebp-1B0h] BYREF
  char v28[30]; // [esp+52Ah] [ebp-1Eh] BYREF

  printf(asc_3298);
  memcpy(&v28[6], &unk_3050, 0x14u);
  v0 = array_1d_stack((int)&v28[6], 5);
  printf("ARR-L1-01 (array_1d_stack): %d\n", v0);
  strcpy(v28, "hello");
  v1 = array_string((int)v28);
  printf("ARR-L1-02 (array_string): %d\n", v1);
  for ( i = 0; i < 10; ++i )
  {
    for ( j = 0; j < 10; ++j )
    {
      if ( i == j )
        v10 = i;
      else
        v10 = 0;
      *((_DWORD *)&v27[5 * i] + j) = v10;
    }
  }
  v2 = array_2d_stack((int)v27);
  printf("ARR-L1-03 (array_2d_stack): %d\n", v2);
  for ( k = 0; k < 5; ++k )
  {
    for ( m = 0; m < 5; ++m )
    {
      for ( n = 0; n < 5; ++n )
        v24[25 * k + 5 * m + n] = 1;
    }
  }
  v3 = array_3d((int)v24);
  printf("ARR-L1-04 (array_3d): %d\n", v3);
  v20[0] = 10;
  v20[1] = 20;
  v20[2] = 30;
  v4 = array_vla(3, (int)v20);
  printf("ARR-L2-01 (array_vla): %d\n", v4);
  for ( ii = 0; ii < 5; ++ii )
    v19[10 * ii] = 10 * ii;
  v5 = array_pointer((int)v19, 5);
  printf("ARR-L2-02 (array_pointer): %d\n", v5);
  v17 = 10;
  v16 = 20;
  v15 = 30;
  v13[0] = &v17;
  v13[1] = &v16;
  v13[2] = &v15;
  v13[3] = 0;
  v9 = &v14;
  do
    *v9++ = 0;
  while ( v9 != &v15 );
  v6 = pointer_array((int)v13, 3);
  printf("ARR-L2-03 (pointer_array): %d\n", v6);
  for ( jj = 0; jj < 20; ++jj )
    v12[jj] = jj;
  v7 = array_complex_index((int)v12, 5, 4, 2, 3);
  return printf("ARR-L2-04 (array_complex_index): %d\n", v7);
}


/* Function: ptr_single @ 0x1E50 */
int __cdecl ptr_single(_DWORD *a1)
{
  return *a1 + 10;
}


/* Function: ptr_double @ 0x1E60 */
int __cdecl ptr_double(_DWORD **a1)
{
  return **a1 + 5;
}


/* Function: ptr_triple @ 0x1E80 */
int __cdecl ptr_triple(_DWORD ***a1)
{
  return ***a1 + 1;
}


/* Function: ptr_increment @ 0x1EA0 */
int __cdecl ptr_increment(_DWORD *a1, int a2)
{
  int i; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 += *a1++;
  return v4;
}


/* Function: ptr_offset @ 0x1EF0 */
int __cdecl ptr_offset(int a1, int a2)
{
  return *(_DWORD *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0x1F10 */
int __cdecl ptr_diff(int a1, int a2)
{
  return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x1F30 */
int __cdecl ptr_void(char *a1, int a2)
{
  if ( !a2 )
    return *(_DWORD *)a1;
  if ( a2 == 1 )
    return *a1;
  return -1;
}


/* Function: ptr_const @ 0x1F80 */
int __cdecl ptr_const(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0x1FA0 */
int __cdecl ptr_const_ptr(int a1)
{
  *(_DWORD *)a1 += 5;
  return *(_DWORD *)a1;
}


/* Function: ptr_func_simple @ 0x1FC0 */
int __cdecl ptr_func_simple(int (__cdecl *a1)(int), int a2)
{
  return a1(a2);
}


/* Function: ptr_func_complex @ 0x1FF0 */
int __cdecl ptr_func_complex(int (__cdecl *a1)(int, _DWORD *), int a2)
{
  _DWORD v3[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3[0] = "test";
  v3[1] = &dword_0;
  return a1(a2, v3);
}


/* Function: ptr_cast @ 0x2040 */
int __cdecl ptr_cast(int a1)
{
  return *(_DWORD *)a1;
}


/* Function: opaque_handle_create @ 0x2070 */
int __cdecl opaque_handle_create(int a1)
{
  return a1;
}


/* Function: opaque_handle_op @ 0x2080 */
int __cdecl opaque_handle_op(int a1)
{
  return 2 * a1;
}


/* Function: test_pointer_types @ 0x2090 */
int test_pointer_types()
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
  int v15; // [esp+1Ch] [ebp-7Ch]
  int v16; // [esp+20h] [ebp-78h] BYREF
  int v17; // [esp+24h] [ebp-74h] BYREF
  int v18; // [esp+28h] [ebp-70h] BYREF
  int v19; // [esp+2Ch] [ebp-6Ch] BYREF
  char v20; // [esp+33h] [ebp-65h] BYREF
  int v21; // [esp+34h] [ebp-64h] BYREF
  _BYTE v22[16]; // [esp+38h] [ebp-60h] BYREF
  int v23; // [esp+48h] [ebp-50h] BYREF
  _BYTE v24[20]; // [esp+4Ch] [ebp-4Ch] BYREF
  _DWORD dest[6]; // [esp+60h] [ebp-38h] BYREF
  _DWORD **v26; // [esp+78h] [ebp-20h] BYREF
  _DWORD *v27; // [esp+7Ch] [ebp-1Ch] BYREF
  _DWORD v28[2]; // [esp+80h] [ebp-18h] BYREF
  int *v29; // [esp+88h] [ebp-10h] BYREF
  int v30; // [esp+8Ch] [ebp-Ch] BYREF
  int v31; // [esp+90h] [ebp-8h] BYREF

  printf(asc_33B5);
  v31 = 5;
  v0 = ptr_single(&v31);
  printf("PTR-L2-01 (ptr_single): %d\n", v0);
  v30 = 10;
  v29 = &v30;
  v28[1] = &v29;
  v1 = ptr_double(&v29);
  printf("PTR-L2-02 (ptr_double): %d\n", v1);
  v28[0] = 5;
  v27 = v28;
  v26 = &v27;
  dest[5] = &v26;
  v2 = ptr_triple(&v26);
  printf("PTR-L2-03 (ptr_triple): %d\n", v2);
  memcpy(dest, &unk_3070, 0x14u);
  v3 = ptr_increment(dest, 5);
  printf("PTR-L2-04 (ptr_increment): %d\n", v3);
  memcpy(v24, &unk_3084, sizeof(v24));
  v4 = ptr_offset((int)v24, 2);
  printf("PTR-L2-05 (ptr_offset): %d\n", v4);
  memcpy(v22, &unk_3098, 0x14u);
  v5 = ptr_diff((int)&v23, (int)v22);
  printf("PTR-L2-06 (ptr_diff): %d\n", v5);
  v21 = 42;
  v20 = 65;
  v6 = ptr_void((char *)&v21, 0);
  printf("PTR-L2-07 (ptr_void): %d\n", v6);
  v7 = ptr_void(&v20, 1);
  printf("PTR-L2-07 (ptr_void): %d\n", v7);
  v19 = 10;
  v8 = ptr_const(&v19);
  printf("PTR-L2-08 (ptr_const): %d\n", v8);
  v18 = 10;
  v9 = ptr_const_ptr((int)&v18);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n", v9);
  v10 = ptr_func_simple(double_value, 5);
  printf("PTR-L2-10 (ptr_func_simple): %d\n", v10);
  v17 = 5;
  v11 = ptr_func_complex((int (__cdecl *)(int, _DWORD *))complex_callback, (int)&v17);
  printf("PTR-L2-11 (ptr_func_complex): %d\n", v11);
  v16 = 305419896;
  v12 = ptr_cast((int)&v16);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n", v12);
  v15 = opaque_handle_create(10);
  v13 = opaque_handle_op(v15);
  return printf("PTR-L2-13 (opaque_handle_op): %d\n", v13);
}


/* Function: double_value @ 0x23C0 */
int __cdecl double_value(int a1)
{
  return 2 * a1;
}


/* Function: complex_callback @ 0x23D0 */
_BOOL4 __cdecl complex_callback(_DWORD *a1, _DWORD *a2)
{
  *a1 += 10;
  return *a2 != 0;
}


/* Function: struct_simple @ 0x2400 */
int __cdecl struct_simple(_DWORD *a1)
{
  return a1[2] + a1[1] + *a1;
}


/* Function: struct_array @ 0x2420 */
int __cdecl struct_array(int a1, int a2)
{
  int i; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 += *(_DWORD *)(12 * i + a1 + 8) + *(_DWORD *)(12 * i + a1 + 4) + *(_DWORD *)(12 * i + a1);
  return v4;
}


/* Function: struct_nested @ 0x2490 */
int __cdecl struct_nested(_DWORD *a1)
{
  return a1[3] + *a1;
}


/* Function: struct_deep @ 0x24B0 */
int __cdecl struct_deep(int a1)
{
  return *(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8);
}


/* Function: struct_with_ptr @ 0x24D0 */
int __cdecl struct_with_ptr(int a1)
{
  int v2; // [esp+0h] [ebp-8h]

  if ( *(_DWORD *)(a1 + 4) )
    v2 = **(_DWORD **)(a1 + 4);
  else
    v2 = 0;
  return v2 + *(_DWORD *)a1;
}


/* Function: struct_bitfields @ 0x2520 */
int __cdecl struct_bitfields(_WORD *a1)
{
  return (*a1 >> 6) + ((*a1 >> 3) & 7) + ((*a1 >> 1) & 3) + (*a1 & 1);
}


/* Function: union_type @ 0x2570 */
int __cdecl union_type(char *a1, int a2)
{
  if ( !a2 )
    return *(_DWORD *)a1;
  if ( a2 == 1 )
    return (int)*(float *)a1;
  return *a1;
}


/* Function: union_array @ 0x25E0 */
int __cdecl union_array(int a1, int a2)
{
  int i; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 += *(_DWORD *)(a1 + 4 * i);
  return v4;
}


/* Function: enum_type @ 0x2630 */
int __cdecl enum_type(int a1)
{
  return 10 * a1;
}


/* Function: enum_switch @ 0x2640 */
int __cdecl enum_switch(int a1)
{
  int v2; // [esp+8h] [ebp-4h]

  switch ( a1 )
  {
    case 0:
      v2 = 0;
      break;
    case 1:
      v2 = 100;
      break;
    case 2:
      v2 = 50;
      break;
    case 3:
      v2 = -1;
      break;
    default:
      v2 = -99;
      break;
  }
  return v2;
}


/* Function: struct_func_ptr @ 0x26C0 */
int __cdecl struct_func_ptr(int a1)
{
  return (*(int (__cdecl **)(_DWORD))(a1 + 4))(*(_DWORD *)a1);
}


/* Function: linked_list @ 0x26F0 */
int __cdecl linked_list(_DWORD *a1)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = 0;
  while ( a1 )
  {
    v3 += *a1;
    a1 = (_DWORD *)a1[1];
  }
  return v3;
}


/* Function: doubly_linked_list @ 0x2740 */
int __cdecl doubly_linked_list(_DWORD *a1)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = 0;
  while ( a1 )
  {
    v3 += *a1;
    a1 = (_DWORD *)a1[1];
  }
  return v3;
}


/* Function: binary_tree_sum @ 0x2790 */
int __cdecl binary_tree_sum(int *a1)
{
  int v2; // [esp+4h] [ebp-14h]
  int v3; // [esp+8h] [ebp-10h]

  if ( !a1 )
    return 0;
  v2 = *a1;
  v3 = binary_tree_sum(a1[1]) + v2;
  return binary_tree_sum(a1[2]) + v3;
}


/* Function: binary_tree @ 0x2810 */
int __cdecl binary_tree(int *a1)
{
  return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x2840 */
int __cdecl graph_traverse(int a1)
{
  _DWORD *j; // [esp+0h] [ebp-Ch]
  int i; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
  {
    for ( j = *(_DWORD **)(a1 + 4 * i); j; j = (_DWORD *)j[1] )
      v4 += *j;
  }
  return v4;
}


/* Function: test_composite_types @ 0x28B0 */
int test_composite_types()
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
  int v14; // eax
  _DWORD v16[12]; // [esp+18h] [ebp-120h] BYREF
  _DWORD v17[2]; // [esp+48h] [ebp-F0h] BYREF
  int v18[4]; // [esp+50h] [ebp-E8h] BYREF
  _DWORD v19[3]; // [esp+60h] [ebp-D8h] BYREF
  _DWORD v20[3]; // [esp+6Ch] [ebp-CCh] BYREF
  _DWORD v21[2]; // [esp+78h] [ebp-C0h] BYREF
  _DWORD v22[2]; // [esp+80h] [ebp-B8h] BYREF
  _DWORD v23[2]; // [esp+88h] [ebp-B0h] BYREF
  _DWORD v24[2]; // [esp+90h] [ebp-A8h] BYREF
  _DWORD v25[4]; // [esp+98h] [ebp-A0h] BYREF
  int v26; // [esp+A8h] [ebp-90h] BYREF
  _DWORD v27[2]; // [esp+B0h] [ebp-88h] BYREF
  _DWORD v28[2]; // [esp+B8h] [ebp-80h] BYREF
  _DWORD v29[2]; // [esp+C0h] [ebp-78h] BYREF
  _BYTE v30[48]; // [esp+C8h] [ebp-70h] BYREF
  _DWORD v31[6]; // [esp+F8h] [ebp-40h] BYREF
  _BYTE dest[24]; // [esp+110h] [ebp-28h] BYREF
  _DWORD v33[4]; // [esp+128h] [ebp-10h] BYREF

  printf(asc_354F);
  v33[0] = 1;
  v33[1] = 2;
  v33[2] = 3;
  v0 = struct_simple(v33);
  printf("CMP-L2-01 (struct_simple): %d\n", v0);
  memcpy(dest, &unk_30B8, sizeof(dest));
  v1 = struct_array((int)dest, 2);
  printf("CMP-L2-02 (struct_array): %d\n", v1);
  memcpy(v31, &unk_30D0, 0x14u);
  v2 = struct_nested(v31);
  printf("CMP-L2-03 (struct_nested): %d\n", v2);
  memcpy(v30, &unk_30E4, sizeof(v30));
  v3 = struct_deep((int)v30);
  printf("CMP-L2-04 (struct_deep): %d\n", v3);
  v29[0] = 20;
  v29[1] = 0;
  v28[0] = 10;
  v28[1] = v29;
  v4 = struct_with_ptr((int)v28);
  printf("CMP-L2-05 (struct_with_ptr): %d\n", v4);
  v27[0] = 6429;
  v27[1] = 0;
  v5 = struct_bitfields(v27);
  printf("CMP-L2-06 (struct_bitfields): %d\n", v5);
  v26 = 305419896;
  v6 = union_type((char *)&v26, 0);
  printf("CMP-L2-07 (union_type): %d\n", v6);
  v25[0] = 10;
  v25[1] = 20;
  v25[2] = 30;
  v7 = union_array((int)v25, 3);
  printf("CMP-L2-08 (union_array): %d\n", v7);
  v8 = enum_type(1);
  printf("CMP-L2-09 (enum_type): %d\n", v8);
  v9 = enum_switch(2);
  printf("CMP-L2-10 (enum_switch): %d\n", v9);
  v24[0] = &byte_9[1];
  v24[1] = process_int;
  v10 = struct_func_ptr((int)v24);
  printf("CMP-L2-11 (struct_func_ptr): %d\n", v10);
  v21[0] = 10;
  v21[1] = v22;
  v22[0] = 20;
  v22[1] = v23;
  v23[0] = 30;
  v23[1] = 0;
  v11 = linked_list(v21);
  printf("CMP-L2-12 (linked_list): %d\n", v11);
  v19[0] = 10;
  v19[2] = 0;
  v20[0] = 20;
  v20[1] = 0;
  v20[2] = v19;
  v19[1] = v20;
  v12 = doubly_linked_list(v19);
  printf("CMP-L2-13 (doubly_linked_list): %d\n", v12);
  v18[0] = (int)&dword_64;
  v18[1] = 0;
  v18[2] = 0;
  v13 = binary_tree(v18);
  printf("CMP-L2-14 (binary_tree): %d\n", v13);
  v17[0] = 1;
  v17[1] = 0;
  memset(&v16[1], 0, 36);
  v16[10] = 2;
  v16[0] = v17;
  v14 = graph_traverse((int)v16);
  return printf("CMP-L2-15 (graph_traverse): %d\n", v14);
}


/* Function: main @ 0x2DD0 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}


/* Function: __do_global_ctors_aux @ 0x2E20 */
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


/* Function: .term_proc @ 0x2E6C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x602C */

/* FAILED to decompile: printf @ 0x6030 */

/* FAILED to decompile: memcpy @ 0x6034 */

/* FAILED to decompile: __cxa_finalize @ 0x6038 */

/* Total functions decompiled: 71, failed: 4 */
