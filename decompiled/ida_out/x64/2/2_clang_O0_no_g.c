/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/2/2_clang_O0_no_g
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


/* Function: _start @ 0x1070 */
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


/* Function: deregister_tm_clones @ 0x10A0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10D0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1110 */
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


/* Function: frame_dummy @ 0x1150 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: process_char @ 0x1160 */
__int64 __fastcall process_char(char a1)
{
  if ( a1 < 65 || a1 > 90 )
    return (unsigned int)a1;
  else
    return (unsigned int)(char)(a1 + 32);
}


/* Function: process_short @ 0x11A0 */
int __fastcall process_short(__int16 a1, __int16 a2)
{
  return (__int16)(a2 + a1);
}


/* Function: process_int @ 0x11C0 */
__int64 __fastcall process_int(int a1)
{
  return (unsigned int)(2 * a1 + 1);
}


/* Function: process_long @ 0x11E0 */
__int64 __fastcall process_long(__int64 a1)
{
  return 2 * a1;
}


/* Function: process_ll @ 0x1200 */
__int64 __fastcall process_ll(__int64 a1)
{
  return a1 * a1;
}


/* Function: process_float @ 0x1220 */
float __fastcall process_float(float a1)
{
  return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x1250 */
double __fastcall process_double(double a1)
{
  return a1 / 2.0 + 0.1;
}


/* Function: process_ld @ 0x1280 */
long double __fastcall process_ld(long double a1)
{
  return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x12A0 */
_BOOL8 __fastcall process_bool(int a1)
{
  bool v2; // [rsp+1h] [rbp-5h]

  v2 = 0;
  if ( a1 > 0 )
    return a1 % 2 == 0;
  return v2;
}


/* Function: const_param @ 0x12E0 */
__int64 __fastcall const_param(_DWORD *a1)
{
  return (unsigned int)(*a1 + 10);
}


/* Function: volatile_access @ 0x1300 */
__int64 __fastcall volatile_access(_DWORD *a1)
{
  return (unsigned int)(2 * *a1);
}


/* Function: test_data_types_l1 @ 0x1330 */
int test_data_types_l1()
{
  char v0; // al
  char v1; // al
  __int16 v2; // ax
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  float v6; // xmm0_4
  double v7; // xmm0_8
  long double v8; // fst7
  bool v9; // al
  bool v10; // al
  bool v11; // al
  int v12; // eax
  int v13; // eax
  int v15; // [rsp+18h] [rbp-8h] BYREF
  int v16; // [rsp+1Ch] [rbp-4h] BYREF

  printf(format);
  v0 = process_char(65);
  printf("DT-L1-01 (process_char): %c\n", (unsigned int)v0);
  v1 = process_char(98);
  printf("DT-L1-01 (process_char): %c\n", (unsigned int)v1);
  v2 = process_short(100, 200);
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
  v16 = 5;
  v12 = const_param(&v16);
  printf("DT-L1-10 (const_param): %d\n", v12);
  v15 = 10;
  v13 = volatile_access(&v15);
  return printf("DT-L1-11 (volatile_access): %d\n", v13);
}


/* Function: array_1d_stack @ 0x14F0 */
__int64 __fastcall array_1d_stack(__int64 a1, int a2)
{
  int i; // [rsp+0h] [rbp-14h]
  unsigned int v4; // [rsp+4h] [rbp-10h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 += *(_DWORD *)(a1 + 4LL * i);
  return v4;
}


/* Function: array_string @ 0x1540 */
__int64 __fastcall array_string(__int64 a1)
{
  unsigned int i; // [rsp+0h] [rbp-Ch]

  for ( i = 0; *(_BYTE *)(a1 + (int)i); ++i )
    ;
  return i;
}


/* Function: array_2d_stack @ 0x1580 */
__int64 __fastcall array_2d_stack(__int64 a1)
{
  int i; // [rsp+0h] [rbp-10h]
  unsigned int v3; // [rsp+4h] [rbp-Ch]

  v3 = 0;
  for ( i = 0; i < 10; ++i )
    v3 += *(_DWORD *)(40LL * i + a1 + 4LL * i);
  return v3;
}


/* Function: array_3d @ 0x15D0 */
__int64 __fastcall array_3d(__int64 a1)
{
  int k; // [rsp+0h] [rbp-18h]
  int j; // [rsp+4h] [rbp-14h]
  int i; // [rsp+8h] [rbp-10h]
  unsigned int v5; // [rsp+Ch] [rbp-Ch]

  v5 = 0;
  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 5; ++j )
    {
      for ( k = 0; k < 5; ++k )
        v5 += *(_DWORD *)(20LL * j + 100LL * i + a1 + 4LL * k);
    }
  }
  return v5;
}


/* Function: array_vla @ 0x1680 */
__int64 __fastcall array_vla(int a1, __int64 a2)
{
  int i; // [rsp+0h] [rbp-18h]
  unsigned int v4; // [rsp+4h] [rbp-14h]

  v4 = 0;
  for ( i = 0; i < a1; ++i )
    v4 += *(_DWORD *)(a2 + 4LL * i);
  return v4;
}


/* Function: array_pointer @ 0x16D0 */
__int64 __fastcall array_pointer(__int64 a1, int a2)
{
  int i; // [rsp+0h] [rbp-14h]
  unsigned int v4; // [rsp+4h] [rbp-10h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 += *(_DWORD *)(40LL * i + a1);
  return v4;
}


/* Function: pointer_array @ 0x1720 */
__int64 __fastcall pointer_array(__int64 a1, int a2)
{
  int v3; // [rsp+0h] [rbp-1Ch]
  int i; // [rsp+4h] [rbp-18h]
  unsigned int v5; // [rsp+Ch] [rbp-10h]

  v5 = 0;
  if ( a2 >= 10 )
    v3 = 10;
  else
    v3 = a2;
  for ( i = 0; i < v3; ++i )
  {
    if ( *(_QWORD *)(a1 + 8LL * i) )
      v5 += **(_DWORD **)(a1 + 8LL * i);
  }
  return v5;
}


/* Function: array_complex_index @ 0x17B0 */
__int64 __fastcall array_complex_index(__int64 a1, int a2, int a3, int a4, int a5)
{
  if ( a4 >= 0 && a4 < a2 && a5 >= 0 && a5 < a3 )
    return *(unsigned int *)(a1 + 4LL * (a4 + a2 * a5));
  else
    return (unsigned int)-1;
}


/* Function: array_oob @ 0x1820 */
__int64 __fastcall array_oob(__int64 a1, int a2)
{
  int i; // [rsp+0h] [rbp-14h]
  unsigned int v4; // [rsp+4h] [rbp-10h]

  v4 = 0;
  for ( i = 0; i <= a2; ++i )
    v4 += *(_DWORD *)(a1 + 4LL * i);
  return v4;
}


/* Function: test_array_types @ 0x1870 */
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
  int *v9; // [rsp+10h] [rbp-560h]
  int v10; // [rsp+18h] [rbp-558h]
  int jj; // [rsp+1Ch] [rbp-554h]
  _DWORD v12[20]; // [rsp+20h] [rbp-550h] BYREF
  _QWORD v13[4]; // [rsp+70h] [rbp-500h] BYREF
  __int64 v14; // [rsp+90h] [rbp-4E0h] BYREF
  int v15; // [rsp+C0h] [rbp-4B0h] BYREF
  int v16; // [rsp+C4h] [rbp-4ACh] BYREF
  int v17; // [rsp+C8h] [rbp-4A8h] BYREF
  int ii; // [rsp+CCh] [rbp-4A4h]
  _DWORD v19[50]; // [rsp+D0h] [rbp-4A0h] BYREF
  __int64 v20; // [rsp+198h] [rbp-3D8h] BYREF
  int v21; // [rsp+1A0h] [rbp-3D0h]
  int n; // [rsp+1A4h] [rbp-3CCh]
  int m; // [rsp+1A8h] [rbp-3C8h]
  int k; // [rsp+1ACh] [rbp-3C4h]
  _DWORD v25[126]; // [rsp+1B0h] [rbp-3C0h] BYREF
  int j; // [rsp+3A8h] [rbp-1C8h]
  int i; // [rsp+3ACh] [rbp-1C4h]
  _QWORD v28[51]; // [rsp+3B0h] [rbp-1C0h] BYREF
  char v29[6]; // [rsp+54Ah] [rbp-26h] BYREF
  _QWORD v30[2]; // [rsp+550h] [rbp-20h] BYREF
  int v31; // [rsp+560h] [rbp-10h]

  printf(asc_32BC);
  v30[0] = 0x200000001LL;
  v30[1] = 0x400000003LL;
  v31 = 5;
  v0 = array_1d_stack((__int64)v30, 5);
  printf("ARR-L1-01 (array_1d_stack): %d\n", v0);
  strcpy(v29, "hello");
  v1 = array_string((__int64)v29);
  printf("ARR-L1-02 (array_string): %d\n", v1);
  for ( i = 0; i < 10; ++i )
  {
    for ( j = 0; j < 10; ++j )
    {
      if ( i == j )
        v10 = i;
      else
        v10 = 0;
      *((_DWORD *)&v28[5 * i] + j) = v10;
    }
  }
  v2 = array_2d_stack((__int64)v28);
  printf("ARR-L1-03 (array_2d_stack): %d\n", v2);
  for ( k = 0; k < 5; ++k )
  {
    for ( m = 0; m < 5; ++m )
    {
      for ( n = 0; n < 5; ++n )
        v25[25 * k + 5 * m + n] = 1;
    }
  }
  v3 = array_3d((__int64)v25);
  printf("ARR-L1-04 (array_3d): %d\n", v3);
  v20 = 0x140000000ALL;
  v21 = 30;
  v4 = array_vla(3, (__int64)&v20);
  printf("ARR-L2-01 (array_vla): %d\n", v4);
  for ( ii = 0; ii < 5; ++ii )
    v19[10 * ii] = 10 * ii;
  v5 = array_pointer((__int64)v19, 5);
  printf("ARR-L2-02 (array_pointer): %d\n", v5);
  v17 = 10;
  v16 = 20;
  v15 = 30;
  v13[0] = &v17;
  v13[1] = &v16;
  v13[2] = &v15;
  v13[3] = 0;
  v9 = (int *)&v14;
  do
  {
    *(_QWORD *)v9 = 0;
    v9 += 2;
  }
  while ( v9 != &v15 );
  v6 = pointer_array((__int64)v13, 3);
  printf("ARR-L2-03 (pointer_array): %d\n", v6);
  for ( jj = 0; jj < 20; ++jj )
    v12[jj] = jj;
  v7 = array_complex_index((__int64)v12, 5, 4, 2, 3);
  return printf("ARR-L2-04 (array_complex_index): %d\n", v7);
}


/* Function: ptr_single @ 0x1C90 */
__int64 __fastcall ptr_single(_DWORD *a1)
{
  return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0x1CB0 */
__int64 __fastcall ptr_double(_DWORD **a1)
{
  return (unsigned int)(**a1 + 5);
}


/* Function: ptr_triple @ 0x1CD0 */
__int64 __fastcall ptr_triple(_DWORD ***a1)
{
  return (unsigned int)(***a1 + 1);
}


/* Function: ptr_increment @ 0x1CF0 */
__int64 __fastcall ptr_increment(_DWORD *a1, int a2)
{
  int i; // [rsp+0h] [rbp-14h]
  unsigned int v4; // [rsp+4h] [rbp-10h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 += *a1++;
  return v4;
}


/* Function: ptr_offset @ 0x1D40 */
__int64 __fastcall ptr_offset(__int64 a1, int a2)
{
  return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: ptr_diff @ 0x1D60 */
__int64 __fastcall ptr_diff(__int64 a1, __int64 a2)
{
  return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x1D80 */
__int64 __fastcall ptr_void(char *a1, int a2)
{
  if ( a2 )
  {
    if ( a2 == 1 )
      return (unsigned int)*a1;
    else
      return (unsigned int)-1;
  }
  else
  {
    return *(unsigned int *)a1;
  }
}


/* Function: ptr_const @ 0x1DD0 */
__int64 __fastcall ptr_const(_DWORD *a1)
{
  return (unsigned int)(2 * *a1);
}


/* Function: ptr_const_ptr @ 0x1DF0 */
__int64 __fastcall ptr_const_ptr(unsigned int *a1)
{
  *a1 += 5;
  return *a1;
}


/* Function: ptr_func_simple @ 0x1E10 */
__int64 __fastcall ptr_func_simple(__int64 (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2);
}


/* Function: ptr_func_complex @ 0x1E30 */
__int64 __fastcall ptr_func_complex(__int64 (__fastcall *a1)(__int64, _QWORD *), __int64 a2)
{
  _QWORD v3[4]; // [rsp+0h] [rbp-20h] BYREF

  v3[3] = a1;
  v3[2] = a2;
  v3[0] = "test";
  v3[1] = &dword_0;
  return a1(a2, v3);
}


/* Function: ptr_cast @ 0x1E70 */
__int64 __fastcall ptr_cast(unsigned int *a1)
{
  return *a1;
}


/* Function: opaque_handle_create @ 0x1EA0 */
__int64 __fastcall opaque_handle_create(int a1)
{
  return a1;
}


/* Function: opaque_handle_op @ 0x1EB0 */
__int64 __fastcall opaque_handle_op(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: test_pointer_types @ 0x1ED0 */
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
  int v15; // [rsp+0h] [rbp-B0h]
  unsigned int v16; // [rsp+8h] [rbp-A8h] BYREF
  int v17; // [rsp+Ch] [rbp-A4h] BYREF
  unsigned int v18; // [rsp+10h] [rbp-A0h] BYREF
  int v19; // [rsp+14h] [rbp-9Ch] BYREF
  char v20; // [rsp+1Bh] [rbp-95h] BYREF
  int v21; // [rsp+1Ch] [rbp-94h] BYREF
  _QWORD v22[2]; // [rsp+20h] [rbp-90h] BYREF
  int v23[4]; // [rsp+30h] [rbp-80h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-70h] BYREF
  int v25; // [rsp+50h] [rbp-60h]
  _QWORD v26[2]; // [rsp+60h] [rbp-50h] BYREF
  int v27; // [rsp+70h] [rbp-40h]
  int ***v28; // [rsp+78h] [rbp-38h]
  int **v29; // [rsp+80h] [rbp-30h] BYREF
  int *v30; // [rsp+88h] [rbp-28h] BYREF
  int v31; // [rsp+94h] [rbp-1Ch] BYREF
  int **v32; // [rsp+98h] [rbp-18h]
  int *v33; // [rsp+A0h] [rbp-10h] BYREF
  int v34; // [rsp+A8h] [rbp-8h] BYREF
  int v35; // [rsp+ACh] [rbp-4h] BYREF

  printf(asc_33D9);
  v35 = 5;
  v0 = ptr_single(&v35);
  printf("PTR-L2-01 (ptr_single): %d\n", v0);
  v34 = 10;
  v33 = &v34;
  v32 = &v33;
  v1 = ptr_double(&v33);
  printf("PTR-L2-02 (ptr_double): %d\n", v1);
  v31 = 5;
  v30 = &v31;
  v29 = &v30;
  v28 = &v29;
  v2 = ptr_triple(&v29);
  printf("PTR-L2-03 (ptr_triple): %d\n", v2);
  v26[0] = 0x200000001LL;
  v26[1] = 0x400000003LL;
  v27 = 5;
  v3 = ptr_increment(v26, 5);
  printf("PTR-L2-04 (ptr_increment): %d\n", v3);
  v24[0] = 0x140000000ALL;
  v24[1] = 0x280000001ELL;
  v25 = 50;
  v4 = ptr_offset((__int64)v24, 2);
  printf("PTR-L2-05 (ptr_offset): %d\n", v4);
  v22[0] = 0xA00000000LL;
  v22[1] = 0x1E00000014LL;
  v23[0] = 40;
  v5 = ptr_diff((__int64)v23, (__int64)v22);
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
  v9 = ptr_const_ptr(&v18);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n", v9);
  v10 = ptr_func_simple((__int64 (__fastcall *)(_QWORD))double_value, 5u);
  printf("PTR-L2-10 (ptr_func_simple): %d\n", v10);
  v17 = 5;
  v11 = ptr_func_complex((__int64 (__fastcall *)(__int64, _QWORD *))complex_callback, (__int64)&v17);
  printf("PTR-L2-11 (ptr_func_complex): %d\n", v11);
  v16 = 305419896;
  v12 = ptr_cast(&v16);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n", v12);
  v15 = opaque_handle_create(10);
  v13 = opaque_handle_op(v15);
  return printf("PTR-L2-13 (opaque_handle_op): %d\n", v13);
}


/* Function: double_value @ 0x2180 */
__int64 __fastcall double_value(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: complex_callback @ 0x2190 */
_BOOL8 __fastcall complex_callback(_DWORD *a1, _QWORD *a2)
{
  *a1 += 10;
  return *a2 != 0;
}


/* Function: struct_simple @ 0x21D0 */
__int64 __fastcall struct_simple(_DWORD *a1)
{
  return (unsigned int)(a1[2] + a1[1] + *a1);
}


/* Function: struct_array @ 0x21F0 */
__int64 __fastcall struct_array(__int64 a1, int a2)
{
  int i; // [rsp+0h] [rbp-14h]
  unsigned int v4; // [rsp+4h] [rbp-10h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 += *(_DWORD *)(12LL * i + a1 + 8) + *(_DWORD *)(12LL * i + a1 + 4) + *(_DWORD *)(12LL * i + a1);
  return v4;
}


/* Function: struct_nested @ 0x2270 */
__int64 __fastcall struct_nested(_DWORD *a1)
{
  return (unsigned int)(a1[3] + *a1);
}


/* Function: struct_deep @ 0x2290 */
__int64 __fastcall struct_deep(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8));
}


/* Function: struct_with_ptr @ 0x22B0 */
__int64 __fastcall struct_with_ptr(__int64 a1)
{
  int v2; // [rsp+0h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) )
    v2 = **(_DWORD **)(a1 + 8);
  else
    v2 = 0;
  return (unsigned int)(v2 + *(_DWORD *)a1);
}


/* Function: struct_bitfields @ 0x2300 */
__int64 __fastcall struct_bitfields(_WORD *a1)
{
  return (*a1 >> 6) + ((*a1 >> 3) & 7) + ((*a1 >> 1) & 3) + (*a1 & 1u);
}


/* Function: union_type @ 0x2350 */
__int64 __fastcall union_type(char *a1, int a2)
{
  if ( a2 )
  {
    if ( a2 == 1 )
      return (unsigned int)(int)*(float *)a1;
    else
      return (unsigned int)*a1;
  }
  else
  {
    return *(unsigned int *)a1;
  }
}


/* Function: union_array @ 0x23A0 */
__int64 __fastcall union_array(__int64 a1, int a2)
{
  int i; // [rsp+0h] [rbp-14h]
  unsigned int v4; // [rsp+4h] [rbp-10h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 += *(_DWORD *)(a1 + 4LL * i);
  return v4;
}


/* Function: enum_type @ 0x23F0 */
__int64 __fastcall enum_type(int a1)
{
  return (unsigned int)(10 * a1);
}


/* Function: enum_switch @ 0x2400 */
__int64 __fastcall enum_switch(int a1)
{
  unsigned int v2; // [rsp+Ch] [rbp-4h]

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


/* Function: struct_func_ptr @ 0x2470 */
__int64 __fastcall struct_func_ptr(unsigned int *a1)
{
  return (*((__int64 (__fastcall **)(_QWORD))a1 + 1))(*a1);
}


/* Function: linked_list @ 0x24A0 */
__int64 __fastcall linked_list(__int64 a1)
{
  unsigned int v3; // [rsp+Ch] [rbp-Ch]

  v3 = 0;
  while ( a1 )
  {
    v3 += *(_DWORD *)a1;
    a1 = *(_QWORD *)(a1 + 8);
  }
  return v3;
}


/* Function: doubly_linked_list @ 0x24F0 */
__int64 __fastcall doubly_linked_list(__int64 a1)
{
  unsigned int v3; // [rsp+Ch] [rbp-Ch]

  v3 = 0;
  while ( a1 )
  {
    v3 += *(_DWORD *)a1;
    a1 = *(_QWORD *)(a1 + 8);
  }
  return v3;
}


/* Function: binary_tree_sum @ 0x2540 */
__int64 __fastcall binary_tree_sum(int *a1)
{
  int v2; // [rsp+8h] [rbp-18h]
  int v3; // [rsp+Ch] [rbp-14h]

  if ( a1 )
  {
    v2 = *a1;
    v3 = binary_tree_sum(*((_QWORD *)a1 + 1)) + v2;
    return (unsigned int)(binary_tree_sum(*((_QWORD *)a1 + 2)) + v3);
  }
  else
  {
    return 0;
  }
}


/* Function: binary_tree @ 0x25B0 */
__int64 __fastcall binary_tree(int *a1)
{
  return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x25D0 */
__int64 __fastcall graph_traverse(__int64 a1)
{
  __int64 j; // [rsp+0h] [rbp-18h]
  int i; // [rsp+8h] [rbp-10h]
  unsigned int v4; // [rsp+Ch] [rbp-Ch]

  v4 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 80); ++i )
  {
    for ( j = *(_QWORD *)(a1 + 8LL * i); j; j = *(_QWORD *)(j + 8) )
      v4 += *(_DWORD *)j;
  }
  return v4;
}


/* Function: test_composite_types @ 0x2650 */
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
  _QWORD s[10]; // [rsp+0h] [rbp-1B0h] BYREF
  int v17; // [rsp+50h] [rbp-160h]
  _QWORD v18[2]; // [rsp+58h] [rbp-158h] BYREF
  _QWORD v19[3]; // [rsp+68h] [rbp-148h] BYREF
  int v20; // [rsp+80h] [rbp-130h] BYREF
  int *v21; // [rsp+88h] [rbp-128h]
  __int64 v22; // [rsp+90h] [rbp-120h]
  int v23; // [rsp+98h] [rbp-118h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-110h]
  int *v25; // [rsp+A8h] [rbp-108h]
  int v26; // [rsp+B0h] [rbp-100h] BYREF
  int *v27; // [rsp+B8h] [rbp-F8h]
  int v28; // [rsp+C0h] [rbp-F0h] BYREF
  int *v29; // [rsp+C8h] [rbp-E8h]
  int v30; // [rsp+D0h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+D8h] [rbp-D8h]
  _QWORD v32[2]; // [rsp+E8h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-B8h] BYREF
  int v34; // [rsp+100h] [rbp-B0h]
  int v35; // [rsp+108h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+110h] [rbp-A0h] BYREF
  int v37; // [rsp+118h] [rbp-98h] BYREF
  _QWORD *v38; // [rsp+120h] [rbp-90h]
  _QWORD v39[2]; // [rsp+128h] [rbp-88h] BYREF
  _BYTE dest[48]; // [rsp+138h] [rbp-78h] BYREF
  _QWORD v41[2]; // [rsp+168h] [rbp-48h] BYREF
  int v42; // [rsp+178h] [rbp-38h]
  _QWORD v43[4]; // [rsp+180h] [rbp-30h] BYREF
  __int64 v44; // [rsp+1A0h] [rbp-10h] BYREF
  int v45; // [rsp+1A8h] [rbp-8h]

  printf(asc_3573);
  v44 = 0x200000001LL;
  v45 = 3;
  v0 = struct_simple(&v44);
  printf("CMP-L2-01 (struct_simple): %d\n", v0);
  v43[0] = 0x100000001LL;
  v43[1] = 0x200000001LL;
  v43[2] = 0x200000002LL;
  v1 = struct_array((__int64)v43, 2);
  printf("CMP-L2-02 (struct_array): %d\n", v1);
  v41[0] = 0xA00000005LL;
  v41[1] = 0x6400000000LL;
  v42 = 200;
  v2 = struct_nested(v41);
  printf("CMP-L2-03 (struct_nested): %d\n", v2);
  memcpy(dest, &unk_30FC, sizeof(dest));
  v3 = struct_deep((__int64)dest);
  printf("CMP-L2-04 (struct_deep): %d\n", v3);
  v39[0] = 20;
  v39[1] = 0;
  v37 = 10;
  v38 = v39;
  v4 = struct_with_ptr((__int64)&v37);
  printf("CMP-L2-05 (struct_with_ptr): %d\n", v4);
  v36 = 6429;
  v5 = struct_bitfields(&v36);
  printf("CMP-L2-06 (struct_bitfields): %d\n", v5);
  v35 = 305419896;
  v6 = union_type((char *)&v35, 0);
  printf("CMP-L2-07 (union_type): %d\n", v6);
  v33 = 0x140000000ALL;
  v34 = 30;
  v7 = union_array((__int64)&v33, 3);
  printf("CMP-L2-08 (union_array): %d\n", v7);
  v8 = enum_type(1);
  printf("CMP-L2-09 (enum_type): %d\n", v8);
  v9 = enum_switch(2);
  printf("CMP-L2-10 (enum_switch): %d\n", v9);
  v32[0] = &byte_9[1];
  v32[1] = process_int;
  v10 = struct_func_ptr((unsigned int *)v32);
  printf("CMP-L2-11 (struct_func_ptr): %d\n", v10);
  v26 = 10;
  v27 = &v28;
  v28 = 20;
  v29 = &v30;
  v30 = 30;
  v31 = 0;
  v11 = linked_list((__int64)&v26);
  printf("CMP-L2-12 (linked_list): %d\n", v11);
  v20 = 10;
  v22 = 0;
  v23 = 20;
  v24 = 0;
  v25 = &v20;
  v21 = &v23;
  v12 = doubly_linked_list((__int64)&v20);
  printf("CMP-L2-13 (doubly_linked_list): %d\n", v12);
  v19[0] = 100;
  v19[1] = 0;
  v19[2] = 0;
  v13 = binary_tree((int *)v19);
  printf("CMP-L2-14 (binary_tree): %d\n", v13);
  v18[0] = 1;
  v18[1] = 0;
  memset(s, 0, 0x58u);
  v17 = 2;
  s[0] = v18;
  v14 = graph_traverse((__int64)s);
  return printf("CMP-L2-15 (graph_traverse): %d\n", v14);
}


/* Function: main @ 0x2A30 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}


/* Function: .term_proc @ 0x2A5C */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x6050 */

/* FAILED to decompile: printf @ 0x6058 */

/* FAILED to decompile: memset @ 0x6060 */

/* FAILED to decompile: memcpy @ 0x6068 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6070 */

/* FAILED to decompile: __gmon_start__ @ 0x6080 */

/* Total functions decompiled: 65, failed: 6 */
