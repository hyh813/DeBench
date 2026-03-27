/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/2/2_clang_Os_no_g
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


/* Function: _start @ 0x1060 */
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


/* Function: deregister_tm_clones @ 0x1090 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10C0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1100 */
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


/* Function: frame_dummy @ 0x1140 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: process_char @ 0x114C */
__int64 __fastcall process_char(unsigned int a1)
{
  __int64 result; // rax

  result = (unsigned __int8)(a1 + 32);
  if ( (unsigned __int8)(a1 - 65) >= 0x1Au )
    return a1;
  return result;
}


/* Function: process_short @ 0x115B */
__int64 __fastcall process_short(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: process_int @ 0x115F */
__int64 __fastcall process_int(int a1)
{
  return (unsigned int)(2 * a1 + 1);
}


/* Function: process_long @ 0x1165 */
__int64 __fastcall process_long(__int64 a1)
{
  return 2 * a1;
}


/* Function: process_ll @ 0x116A */
__int64 __fastcall process_ll(__int64 a1)
{
  return a1 * a1;
}


/* Function: process_float @ 0x1172 */
float __fastcall process_float(float a1)
{
  return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x1183 */
double __fastcall process_double(double a1)
{
  return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1194 */
long double __fastcall process_ld(long double a1)
{
  return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x119F */
bool __fastcall process_bool(int a1)
{
  return a1 > 0 && (a1 & 1) == 0;
}


/* Function: const_param @ 0x11AE */
__int64 __fastcall const_param(_DWORD *a1)
{
  return (unsigned int)(*a1 + 10);
}


/* Function: volatile_access @ 0x11B4 */
__int64 __fastcall volatile_access(_DWORD *a1)
{
  return (unsigned int)(2 * *a1);
}


/* Function: test_data_types_l1 @ 0x11B9 */
int test_data_types_l1()
{
  puts(s);
  printf("DT-L1-01 (process_char): %c\n", 97);
  printf("DT-L1-01 (process_char): %c\n", 98);
  printf("DT-L1-02 (process_short): %d\n", 300);
  printf("DT-L1-03 (process_int): %d\n", 11);
  printf("DT-L1-04 (process_long): %ld\n", 200);
  printf("DT-L1-05 (process_ll): %lld\n", 10000);
  printf("DT-L1-06 (process_float): %.2f\n", 3.5);
  printf("DT-L1-07 (process_double): %.2f\n", 2.1);
  printf("DT-L1-08 (process_ld): %.2Lf\n", 10.0);
  printf("DT-L1-09 (process_bool): %d\n", 1);
  printf("DT-L1-09 (process_bool): %d\n", 0);
  printf("DT-L1-09 (process_bool): %d\n", 0);
  printf("DT-L1-10 (const_param): %d\n", 15);
  return printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x12E2 */
__int64 __fastcall array_1d_stack(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( a2 <= 0 )
    return 0;
  v2 = 0;
  LODWORD(result) = 0;
  do
    result = (unsigned int)(*(_DWORD *)(a1 + 4 * v2++) + result);
  while ( a2 != v2 );
  return result;
}


/* Function: array_string @ 0x12FB */
__int64 __fastcall array_string(_BYTE *a1)
{
  __int64 result; // rax

  LODWORD(result) = -1;
  do
    result = (unsigned int)(result + 1);
  while ( *a1++ != 0 );
  return result;
}


/* Function: array_2d_stack @ 0x130C */
__int64 __fastcall array_2d_stack(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = 0;
  LODWORD(result) = 0;
  do
  {
    result = (unsigned int)(*(_DWORD *)(a1 + v1) + result);
    v1 += 44;
  }
  while ( v1 != 440 );
  return result;
}


/* Function: array_3d @ 0x1321 */
__int64 __fastcall array_3d(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 i; // rsi
  __int64 j; // rcx

  v1 = 0;
  LODWORD(result) = 0;
  do
  {
    v3 = a1;
    for ( i = 0; i != 5; ++i )
    {
      for ( j = 0; j != 5; ++j )
        result = (unsigned int)(*(_DWORD *)(v3 + 4 * j) + result);
      v3 += 20;
    }
    ++v1;
    a1 += 100;
  }
  while ( v1 != 5 );
  return result;
}


/* Function: array_vla @ 0x1354 */
__int64 __fastcall array_vla(int a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( a1 <= 0 )
    return 0;
  v2 = 0;
  LODWORD(result) = 0;
  do
    result = (unsigned int)(*(_DWORD *)(a2 + 4 * v2++) + result);
  while ( a1 != v2 );
  return result;
}


/* Function: array_pointer @ 0x136D */
__int64 __fastcall array_pointer(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( a2 <= 0 )
    return 0;
  v2 = 0;
  LODWORD(result) = 0;
  do
  {
    result = (unsigned int)(*(_DWORD *)(a1 + v2) + result);
    v2 += 40;
  }
  while ( 40LL * (unsigned int)a2 != v2 );
  return result;
}


/* Function: pointer_array @ 0x138F */
__int64 __fastcall pointer_array(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax
  _DWORD *v5; // rsi

  if ( a2 <= 0 )
    return 0;
  v2 = 10;
  if ( (unsigned int)a2 < 0xA )
    v2 = (unsigned int)a2;
  v3 = 0;
  result = 0;
  do
  {
    v5 = *(_DWORD **)(a1 + 8 * v3);
    if ( v5 )
      result = (unsigned int)(*v5 + result);
    ++v3;
  }
  while ( v2 != v3 );
  return result;
}


/* Function: array_complex_index @ 0x13B9 */
__int64 __fastcall array_complex_index(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a4 >= 0 && a5 < a3 && a4 < a2 && a5 >= 0 )
    return *(unsigned int *)(a1 + 4LL * (a4 + a2 * a5));
  return result;
}


/* Function: array_oob @ 0x13DE */
__int64 __fastcall array_oob(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a2 < 0 )
    return 0;
  v2 = (unsigned int)(a2 + 1);
  v3 = 0;
  LODWORD(result) = 0;
  do
    result = (unsigned int)(*(_DWORD *)(a1 + 4 * v3++) + result);
  while ( v2 != v3 );
  return result;
}


/* Function: test_array_types @ 0x13F7 */
int test_array_types()
{
  __int64 v0; // rbx
  char *v1; // rax
  __m128i si128; // xmm0
  __m128i v3; // xmm1
  __m128i v4; // xmm2
  __m128i v5; // xmm3
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __m128i v8; // xmm5
  __m128i v9; // xmm6
  __m128i v10; // xmm5
  int v11; // esi
  int v12; // esi
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rbx
  _BYTE *v16; // rax
  _BYTE *v17; // rcx
  __int64 i; // rdx
  __int64 j; // rsi
  __int64 v20; // rax
  _BYTE *v21; // rcx
  int v22; // esi
  _BYTE *v23; // rdx
  __int64 k; // rdi
  __int64 m; // rbx
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // esi
  __int64 v29; // rbx
  int *v30; // rax
  int v31; // esi
  int v33; // [rsp+4h] [rbp-514h] BYREF
  int v34; // [rsp+8h] [rbp-510h] BYREF
  int v35; // [rsp+Ch] [rbp-50Ch] BYREF
  int *v36; // [rsp+10h] [rbp-508h]
  _QWORD v37[2]; // [rsp+18h] [rbp-500h]
  __int128 v38; // [rsp+28h] [rbp-4F0h]
  __int128 v39; // [rsp+38h] [rbp-4E0h]
  __int128 v40; // [rsp+48h] [rbp-4D0h]
  __int64 v41; // [rsp+58h] [rbp-4C0h]
  __int128 v42; // [rsp+60h] [rbp-4B8h]
  __int128 v43; // [rsp+70h] [rbp-4A8h]
  __int128 v44; // [rsp+80h] [rbp-498h]
  __int128 v45; // [rsp+90h] [rbp-488h]
  __int128 v46; // [rsp+A0h] [rbp-478h]
  _DWORD v47[53]; // [rsp+B0h] [rbp-468h]
  char v48; // [rsp+184h] [rbp-394h] BYREF
  _BYTE v49[520]; // [rsp+310h] [rbp-208h] BYREF

  puts(asc_2690);
  v0 = 0;
  printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
  printf("ARR-L1-02 (array_string): %d\n", 5);
  v1 = &v48;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2030);
  v3 = _mm_load_si128((const __m128i *)&xmmword_2040);
  v4 = _mm_load_si128((const __m128i *)&xmmword_2050);
  v5 = _mm_load_si128((const __m128i *)&xmmword_2060);
  do
  {
    v6 = 0;
    v7 = si128;
    do
    {
      v8 = _mm_xor_si128(v7, v3);
      v9 = _mm_cmpgt_epi32(v4, v8);
      v10 = _mm_or_si128(_mm_shuffle_epi32(v9, 245), _mm_and_si128(_mm_shuffle_epi32(_mm_cmpeq_epi32(v8, v4), 245), v9));
      if ( (_mm_cvtsi128_si32(v10) & 1) != 0 )
      {
        v11 = 0;
        if ( v0 == v6 )
          v11 = v0;
        *(_DWORD *)&v1[4 * v6 - 4] = v11;
      }
      if ( (_mm_extract_epi16(v10, 4) & 1) != 0 )
      {
        v12 = 0;
        if ( v0 - 1 == v6 )
          v12 = v0;
        *(_DWORD *)&v1[4 * v6] = v12;
      }
      v6 += 2;
      v7 = _mm_add_epi64(v7, v5);
    }
    while ( v6 != 10 );
    ++v0;
    v1 += 40;
  }
  while ( v0 != 10 );
  v13 = 0;
  v14 = 0;
  do
  {
    v14 += v47[v13 + 52];
    v13 += 11;
  }
  while ( v13 != 110 );
  v15 = 0;
  printf("ARR-L1-03 (array_2d_stack): %d\n", v14);
  v16 = v49;
  do
  {
    v17 = v16;
    for ( i = 0; i != 5; ++i )
    {
      for ( j = 0; j != 5; ++j )
        *(_DWORD *)&v17[4 * j] = 1;
      v17 += 20;
    }
    ++v15;
    v16 += 100;
  }
  while ( v15 != 5 );
  v20 = 0;
  v21 = v49;
  v22 = 0;
  do
  {
    v23 = v21;
    for ( k = 0; k != 5; ++k )
    {
      for ( m = 0; m != 5; ++m )
        v22 += *(_DWORD *)&v23[4 * m];
      v23 += 20;
    }
    ++v20;
    v21 += 100;
  }
  while ( v20 != 5 );
  v26 = 0;
  printf("ARR-L1-04 (array_3d): %d\n", v22);
  printf("ARR-L2-01 (array_vla): %d\n", 60);
  do
  {
    v47[v26] = v26;
    v26 += 10;
  }
  while ( v26 != 50 );
  v27 = 0;
  v28 = 0;
  do
  {
    v28 += v47[v27];
    v27 += 10;
  }
  while ( v27 != 50 );
  v29 = 0;
  printf("ARR-L2-02 (array_pointer): %d\n", v28);
  v30 = &v35;
  v35 = 10;
  v34 = 20;
  v33 = 30;
  v36 = &v35;
  v37[0] = &v34;
  v37[1] = &v33;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v31 = 0;
  while ( 1 )
  {
    if ( v30 )
      v31 += *v30;
    if ( v29 == 2 )
      break;
    v30 = (int *)v37[v29++];
  }
  printf("ARR-L2-03 (pointer_array): %d\n", v31);
  v42 = xmmword_2070;
  v43 = xmmword_2080;
  v44 = xmmword_2090;
  v45 = xmmword_20A0;
  v46 = xmmword_20B0;
  return printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0x16A5 */
__int64 __fastcall ptr_single(_DWORD *a1)
{
  return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0x16AB */
__int64 __fastcall ptr_double(_DWORD **a1)
{
  return (unsigned int)(**a1 + 5);
}


/* Function: ptr_triple @ 0x16B4 */
__int64 __fastcall ptr_triple(_DWORD ***a1)
{
  return (unsigned int)(***a1 + 1);
}


/* Function: ptr_increment @ 0x16BF */
__int64 __fastcall ptr_increment(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( a2 <= 0 )
    return 0;
  v2 = 0;
  LODWORD(result) = 0;
  do
    result = (unsigned int)(*(_DWORD *)(a1 + 4 * v2++) + result);
  while ( a2 != (_DWORD)v2 );
  return result;
}


/* Function: ptr_offset @ 0x16D7 */
__int64 __fastcall ptr_offset(__int64 a1, int a2)
{
  return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: ptr_diff @ 0x16DE */
unsigned __int64 __fastcall ptr_diff(__int64 a1, __int64 a2)
{
  return (unsigned __int64)(a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x16E9 */
__int64 __fastcall ptr_void(char *a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 1 )
    return (unsigned int)*a1;
  result = 0xFFFFFFFFLL;
  if ( !a2 )
    return *(unsigned int *)a1;
  return result;
}


/* Function: ptr_const @ 0x16FE */
__int64 __fastcall ptr_const(_DWORD *a1)
{
  return (unsigned int)(2 * *a1);
}


/* Function: ptr_const_ptr @ 0x1703 */
__int64 __fastcall ptr_const_ptr(_DWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)(*a1 + 5);
  *a1 = result;
  return result;
}


/* Function: ptr_func_simple @ 0x170B */
__int64 __fastcall ptr_func_simple(__int64 (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2);
}


/* Function: ptr_func_complex @ 0x1712 */
__int64 __fastcall ptr_func_complex(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  return a1(a2);
}


/* Function: ptr_cast @ 0x1733 */
__int64 __fastcall ptr_cast(unsigned int *a1)
{
  return *a1;
}


/* Function: opaque_handle_create @ 0x1736 */
__int64 __fastcall opaque_handle_create(int a1)
{
  return a1;
}


/* Function: opaque_handle_op @ 0x173A */
__int64 __fastcall opaque_handle_op(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: test_pointer_types @ 0x173E */
int test_pointer_types()
{
  puts(asc_26AB);
  printf("PTR-L2-01 (ptr_single): %d\n", 15);
  printf("PTR-L2-02 (ptr_double): %d\n", 15);
  printf("PTR-L2-03 (ptr_triple): %d\n", 6);
  printf("PTR-L2-04 (ptr_increment): %d\n", 15);
  printf("PTR-L2-05 (ptr_offset): %d\n", 30);
  printf("PTR-L2-06 (ptr_diff): %d\n", 4);
  printf("PTR-L2-07 (ptr_void): %d\n", 42);
  printf("PTR-L2-07 (ptr_void): %d\n", 65);
  printf("PTR-L2-08 (ptr_const): %d\n", 20);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n", 15);
  printf("PTR-L2-10 (ptr_func_simple): %d\n", 10);
  printf("PTR-L2-11 (ptr_func_complex): %d\n", 1);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
  return printf("PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x1855 */
__int64 __fastcall struct_simple(_DWORD *a1)
{
  return (unsigned int)(a1[2] + *a1 + a1[1]);
}


/* Function: struct_array @ 0x185E */
__int64 __fastcall struct_array(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( a2 <= 0 )
    return 0;
  v2 = 0;
  LODWORD(result) = 0;
  do
  {
    result = (unsigned int)(*(_DWORD *)(a1 + v2 + 8) + *(_DWORD *)(a1 + v2 + 4) + *(_DWORD *)(a1 + v2) + result);
    v2 += 12;
  }
  while ( 12LL * (unsigned int)a2 != v2 );
  return result;
}


/* Function: struct_nested @ 0x1888 */
__int64 __fastcall struct_nested(_DWORD *a1)
{
  return (unsigned int)(*a1 + a1[3]);
}


/* Function: struct_deep @ 0x188E */
__int64 __fastcall struct_deep(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 20));
}


/* Function: struct_with_ptr @ 0x1895 */
__int64 __fastcall struct_with_ptr(__int64 a1)
{
  int *v1; // rax
  int v2; // eax

  v1 = *(int **)(a1 + 8);
  if ( v1 )
    v2 = *v1;
  else
    v2 = 0;
  return (unsigned int)(*(_DWORD *)a1 + v2);
}


/* Function: struct_bitfields @ 0x18A9 */
__int64 __fastcall struct_bitfields(_WORD *a1)
{
  return (((unsigned __int16)*a1 >> 3) & 7)
       + (((unsigned __int16)*a1 >> 1) & 3)
       + (*a1 & 1)
       + ((unsigned __int16)*a1 >> 6);
}


/* Function: union_type @ 0x18CA */
__int64 __fastcall union_type(char *a1, int a2)
{
  if ( a2 == 1 )
    return (unsigned int)(int)*(float *)a1;
  if ( a2 )
    return (unsigned int)*a1;
  return *(unsigned int *)a1;
}


/* Function: union_array @ 0x18DF */
__int64 __fastcall union_array(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( a2 <= 0 )
    return 0;
  v2 = 0;
  LODWORD(result) = 0;
  do
    result = (unsigned int)(*(_DWORD *)(a1 + 4 * v2++) + result);
  while ( a2 != v2 );
  return result;
}


/* Function: enum_type @ 0x18F8 */
__int64 __fastcall enum_type(int a1)
{
  return (unsigned int)(10 * a1);
}


/* Function: enum_switch @ 0x18FE */
__int64 __fastcall enum_switch(unsigned int a1)
{
  __int64 result; // rax

  result = 4294967197LL;
  if ( a1 <= 3 )
    return dword_20D0[a1];
  return result;
}


/* Function: struct_func_ptr @ 0x1916 */
__int64 __fastcall struct_func_ptr(unsigned int *a1)
{
  return (*((__int64 (__fastcall **)(_QWORD))a1 + 1))(*a1);
}


/* Function: linked_list @ 0x191E */
__int64 __fastcall linked_list(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  while ( a1 )
  {
    result = (unsigned int)(*(_DWORD *)a1 + result);
    a1 = *(_QWORD *)(a1 + 8);
  }
  return result;
}


/* Function: doubly_linked_list @ 0x192E */
__int64 __fastcall doubly_linked_list(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  while ( a1 )
  {
    result = (unsigned int)(*(_DWORD *)a1 + result);
    a1 = *(_QWORD *)(a1 + 8);
  }
  return result;
}


/* Function: binary_tree_sum @ 0x193E */
__int64 __fastcall binary_tree_sum(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v2; // ebx
  unsigned int v3; // ebx
  int v4; // eax

  if ( a1 )
  {
    v1 = a1;
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)v1 + v2;
      v4 = binary_tree_sum(*(_QWORD *)(v1 + 8));
      v1 = *(_QWORD *)(v1 + 16);
      v2 = v4 + v3;
    }
    while ( v1 );
  }
  else
  {
    return 0;
  }
  return v2;
}


/* Function: binary_tree @ 0x1971 */
// attributes: thunk
__int64 __fastcall binary_tree(__int64 a1)
{
  return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x1976 */
__int64 __fastcall graph_traverse(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 i; // rsi

  v1 = *(unsigned int *)(a1 + 80);
  if ( (int)v1 <= 0 )
    return 0;
  v2 = 0;
  result = 0;
  do
  {
    for ( i = *(_QWORD *)(a1 + 8 * v2); i; i = *(_QWORD *)(i + 8) )
      result = (unsigned int)(*(_DWORD *)i + result);
    ++v2;
  }
  while ( v2 != v1 );
  return result;
}


/* Function: test_composite_types @ 0x199E */
int test_composite_types()
{
  int v0; // ebp
  int *v1; // rax
  int v2; // ebx
  int *v3; // rax
  __int64 v4; // rbp
  int v5; // eax
  __int128 *v6; // rax
  int v7; // esi
  __int128 *v9; // [rsp+8h] [rbp-100h]
  __int128 v10; // [rsp+10h] [rbp-F8h]
  __int128 v11; // [rsp+20h] [rbp-E8h]
  __int128 v12; // [rsp+30h] [rbp-D8h]
  __int128 v13; // [rsp+40h] [rbp-C8h]
  __int128 v14; // [rsp+50h] [rbp-B8h]
  __int128 v15; // [rsp+60h] [rbp-A8h] BYREF
  int v16; // [rsp+70h] [rbp-98h] BYREF
  int *v17; // [rsp+78h] [rbp-90h]
  int v18; // [rsp+80h] [rbp-88h] BYREF
  int *v19; // [rsp+88h] [rbp-80h]
  int v20; // [rsp+90h] [rbp-78h] BYREF
  __int64 v21; // [rsp+98h] [rbp-70h]
  __int128 v22; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-58h]
  int v24; // [rsp+C0h] [rbp-48h] BYREF
  int *v25; // [rsp+C8h] [rbp-40h]
  __int64 v26; // [rsp+D0h] [rbp-38h]
  int v27; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-28h]
  int *v29; // [rsp+E8h] [rbp-20h]

  puts(asc_26C6);
  v0 = 0;
  printf("CMP-L2-01 (struct_simple): %d\n", 6);
  printf("CMP-L2-02 (struct_array): %d\n", 9);
  printf("CMP-L2-03 (struct_nested): %d\n", 105);
  printf("CMP-L2-04 (struct_deep): %d\n", 258);
  printf("CMP-L2-05 (struct_with_ptr): %d\n", 30);
  printf("CMP-L2-06 (struct_bitfields): %d\n", 106);
  printf("CMP-L2-07 (union_type): %d\n", 305419896);
  printf("CMP-L2-08 (union_array): %d\n", 60);
  printf("CMP-L2-09 (enum_type): %d\n", 10);
  printf("CMP-L2-10 (enum_switch): %d\n", 50);
  printf("CMP-L2-11 (struct_func_ptr): %d\n", 21);
  v1 = &v16;
  v16 = 10;
  v17 = &v18;
  v18 = 20;
  v19 = &v20;
  v20 = 30;
  v21 = 0;
  do
  {
    v0 += *v1;
    v1 = (int *)*((_QWORD *)v1 + 1);
  }
  while ( v1 );
  v2 = 0;
  printf("CMP-L2-12 (linked_list): %d\n", v0);
  v3 = &v24;
  v24 = 10;
  v26 = 0;
  v27 = 20;
  v28 = 0;
  v29 = &v24;
  v25 = &v27;
  do
  {
    v2 += *v3;
    v3 = (int *)*((_QWORD *)v3 + 1);
  }
  while ( v3 );
  v4 = 0;
  printf("CMP-L2-13 (doubly_linked_list): %d\n", v2);
  v23 = 0;
  v22 = xmmword_26E8;
  v5 = binary_tree_sum((__int64)&v22);
  printf("CMP-L2-14 (binary_tree): %d\n", v5);
  v6 = &v15;
  v15 = xmmword_20C0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = &v15;
  v7 = 0;
  while ( 1 )
  {
    while ( v6 )
    {
      v7 += *(_DWORD *)v6;
      v6 = (__int128 *)*((_QWORD *)v6 + 1);
    }
    if ( ++v4 == 2 )
      break;
    v6 = *(&v9 + v4);
  }
  return printf("CMP-L2-15 (graph_traverse): %d\n", v7);
}


/* Function: main @ 0x1BBC */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}


/* Function: .term_proc @ 0x1BD8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x5048 */

/* FAILED to decompile: puts @ 0x5050 */

/* FAILED to decompile: printf @ 0x5058 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x5060 */

/* FAILED to decompile: __gmon_start__ @ 0x5070 */

/* Total functions decompiled: 63, failed: 5 */
