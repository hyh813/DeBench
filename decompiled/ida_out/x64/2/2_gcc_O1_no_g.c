/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/2/2_gcc_O1_no_g
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


/* Function: _start @ 0x10A0 */
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


/* Function: deregister_tm_clones @ 0x10D0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1100 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1140 */
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


/* Function: frame_dummy @ 0x1180 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: double_value @ 0x1189 */
__int64 __fastcall double_value(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: process_int @ 0x1191 */
__int64 __fastcall process_int(int a1)
{
  return (unsigned int)(2 * a1 + 1);
}


/* Function: complex_callback @ 0x119A */
_BOOL8 __fastcall complex_callback(_DWORD *a1, _QWORD *a2)
{
  *a1 += 10;
  return *a2 != 0;
}


/* Function: process_char @ 0x11AC */
__int64 __fastcall process_char(unsigned int a1)
{
  __int64 result; // rax

  result = a1 + 32;
  if ( (unsigned __int8)(a1 - 65) >= 0x1Au )
    return a1;
  return result;
}


/* Function: process_short @ 0x11BD */
__int64 __fastcall process_short(int a1, int a2)
{
  return (unsigned int)(a2 + a1);
}


/* Function: process_long @ 0x11C5 */
__int64 __fastcall process_long(__int64 a1)
{
  return 2 * a1;
}


/* Function: process_ll @ 0x11CE */
__int64 __fastcall process_ll(__int64 a1)
{
  return a1 * a1;
}


/* Function: process_float @ 0x11DA */
float __fastcall process_float(float a1)
{
  return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x11EF */
double __fastcall process_double(double a1)
{
  return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1204 */
long double __fastcall process_ld(long double a1)
{
  return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x1213 */
_BOOL8 __fastcall process_bool(int a1)
{
  bool v1; // al

  v1 = (a1 & 1) == 0;
  if ( a1 <= 0 )
    return 0;
  return v1;
}


/* Function: const_param @ 0x122C */
__int64 __fastcall const_param(_DWORD *a1)
{
  return (unsigned int)(*a1 + 10);
}


/* Function: volatile_access @ 0x1236 */
__int64 __fastcall volatile_access(_DWORD *a1)
{
  return (unsigned int)(2 * *a1);
}


/* Function: test_data_types_l1 @ 0x1241 */
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


/* Function: array_1d_stack @ 0x13F1 */
__int64 __fastcall array_1d_stack(_DWORD *a1, int a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // edx

  if ( a2 <= 0 )
  {
    return 0;
  }
  else
  {
    v2 = a1;
    v3 = 0;
    do
      v3 += *v2++;
    while ( v2 != &a1[a2 - 1 + 1] );
  }
  return v3;
}


/* Function: array_string @ 0x141E */
__int64 __fastcall array_string(_BYTE *a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  if ( *a1 )
  {
    v1 = 1;
    do
      v2 = v1++;
    while ( a1[v1 - 1] );
  }
  else
  {
    return 0;
  }
  return v2;
}


/* Function: array_2d_stack @ 0x1443 */
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


/* Function: array_3d @ 0x145F */
__int64 __fastcall array_3d(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 result; // rax
  _DWORD *v3; // rdx

  v1 = (_DWORD *)(a1 + 100);
  LODWORD(result) = 0;
  do
  {
    v3 = v1 - 25;
    do
    {
      result = (unsigned int)(v3[4] + v3[3] + v3[2] + v3[1] + *v3 + result);
      v3 += 5;
    }
    while ( v3 != v1 );
    v1 += 25;
  }
  while ( v1 != (_DWORD *)(a1 + 600) );
  return result;
}


/* Function: array_vla @ 0x1498 */
__int64 __fastcall array_vla(int a1, _DWORD *a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // edx

  if ( a1 <= 0 )
  {
    return 0;
  }
  else
  {
    v2 = a2;
    v3 = 0;
    do
      v3 += *v2++;
    while ( v2 != &a2[a1 - 1 + 1] );
  }
  return v3;
}


/* Function: array_pointer @ 0x14C5 */
__int64 __fastcall array_pointer(_DWORD *a1, int a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // edx

  if ( a2 <= 0 )
  {
    return 0;
  }
  else
  {
    v2 = a1;
    v3 = 0;
    do
    {
      v3 += *v2;
      v2 += 10;
    }
    while ( v2 != &a1[10 * (a2 - 1) + 10] );
  }
  return v3;
}


/* Function: pointer_array @ 0x14F6 */
__int64 __fastcall pointer_array(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rax
  unsigned int v4; // ecx
  _DWORD *v5; // rdx

  v2 = 10;
  if ( a2 <= 10 )
    v2 = a2;
  if ( a2 <= 0 )
  {
    return 0;
  }
  else
  {
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
  }
  return v4;
}


/* Function: array_complex_index @ 0x1535 */
__int64 __fastcall array_complex_index(__int64 a1, int a2, int a3, int a4, int a5)
{
  if ( (a5 | a4) < 0 || a4 >= a2 )
    return 0xFFFFFFFFLL;
  if ( a5 >= a3 )
    return 0xFFFFFFFFLL;
  return *(unsigned int *)(a1 + 4LL * (a4 + a5 * a2));
}


/* Function: array_oob @ 0x1565 */
__int64 __fastcall array_oob(_DWORD *a1, int a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // edx

  if ( a2 < 0 )
  {
    return 0;
  }
  else
  {
    v2 = a1;
    v3 = 0;
    do
      v3 += *v2++;
    while ( v2 != &a1[a2 + 1] );
  }
  return v3;
}


/* Function: test_array_types @ 0x1591 */
unsigned __int64 __fastcall test_array_types(
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
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // rsi
  int i; // ecx
  __int64 j; // rax
  int v19; // edx
  int v20; // eax
  char *v21; // rdx
  char *v22; // rax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 k; // rax
  int v29; // [rsp+8h] [rbp-550h] BYREF
  int v30; // [rsp+Ch] [rbp-54Ch] BYREF
  int v31; // [rsp+10h] [rbp-548h] BYREF
  _DWORD v32[3]; // [rsp+14h] [rbp-544h] BYREF
  _DWORD v33[8]; // [rsp+20h] [rbp-538h] BYREF
  _QWORD v34[18]; // [rsp+40h] [rbp-518h] BYREF
  int v35; // [rsp+D4h] [rbp-484h]
  _DWORD v36[52]; // [rsp+E0h] [rbp-478h] BYREF
  _DWORD v37[100]; // [rsp+1B0h] [rbp-3A8h] BYREF
  _BYTE v38[100]; // [rsp+340h] [rbp-218h] BYREF
  char v39; // [rsp+3A4h] [rbp-1B4h] BYREF
  char v40[6]; // [rsp+542h] [rbp-16h] BYREF
  unsigned __int64 v41; // [rsp+548h] [rbp-10h]

  v41 = __readfsqword(0x28u);
  puts(asc_33E1);
  v33[0] = 1;
  v33[1] = 2;
  v33[2] = 3;
  v33[3] = 4;
  v33[4] = 5;
  v14 = array_1d_stack(v33, 5);
  __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v14);
  strcpy(v40, "hello");
  v15 = array_string(v40);
  __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v15);
  v16 = v37;
  for ( i = 0; i != 10; ++i )
  {
    for ( j = 0; j != 10; ++j )
    {
      v19 = 0;
      if ( i == (_DWORD)j )
        v19 = j;
      v16[j] = v19;
    }
    v16 += 10;
  }
  v20 = array_2d_stack(v37);
  __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v20);
  v21 = &v39;
  do
  {
    v22 = v21 - 100;
    do
    {
      *(_DWORD *)v22 = 1;
      *((_DWORD *)v22 + 1) = 1;
      *((_DWORD *)v22 + 2) = 1;
      *((_DWORD *)v22 + 3) = 1;
      *((_DWORD *)v22 + 4) = 1;
      v22 += 20;
    }
    while ( v22 != v21 );
    v21 += 100;
  }
  while ( v21 != &a14 );
  v23 = array_3d((__int64)v38);
  __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v23);
  v32[0] = 10;
  v32[1] = 20;
  v32[2] = 30;
  v24 = array_vla(3, v32);
  __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", v24);
  v36[0] = 0;
  v36[10] = 10;
  v36[20] = 20;
  v36[30] = 30;
  v36[40] = 40;
  v25 = array_pointer(v36, 5);
  __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", v25);
  v29 = 10;
  v30 = 20;
  v31 = 30;
  memset(&v34[3], 0, 56);
  v34[0] = &v29;
  v34[1] = &v30;
  v34[2] = &v31;
  v26 = pointer_array((__int64)v34, 3);
  __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v26);
  for ( k = 0; k != 20; ++k )
    *((_DWORD *)&v34[10] + k) = k;
  __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v35);
  return v41 - __readfsqword(0x28u);
}


/* Function: ptr_single @ 0x18A6 */
__int64 __fastcall ptr_single(_DWORD *a1)
{
  return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0x18B0 */
__int64 __fastcall ptr_double(_DWORD **a1)
{
  return (unsigned int)(**a1 + 5);
}


/* Function: ptr_triple @ 0x18BD */
__int64 __fastcall ptr_triple(_DWORD ***a1)
{
  return (unsigned int)(***a1 + 1);
}


/* Function: ptr_increment @ 0x18CD */
__int64 __fastcall ptr_increment(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdx
  __int64 result; // rax

  if ( a2 <= 0 )
    return 0;
  v2 = &a1[a2];
  LODWORD(result) = 0;
  do
    result = (unsigned int)(*a1++ + result);
  while ( a1 != v2 );
  return result;
}


/* Function: ptr_offset @ 0x18F2 */
__int64 __fastcall ptr_offset(__int64 a1, int a2)
{
  return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: ptr_diff @ 0x18FD */
__int64 __fastcall ptr_diff(__int64 a1, __int64 a2)
{
  return (unsigned int)((a1 - a2) >> 2);
}


/* Function: ptr_void @ 0x190B */
__int64 __fastcall ptr_void(unsigned int *a1, int a2)
{
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return (unsigned int)*(char *)a1;
  return 0xFFFFFFFFLL;
}


/* Function: ptr_const @ 0x1925 */
__int64 __fastcall ptr_const(_DWORD *a1)
{
  return (unsigned int)(2 * *a1);
}


/* Function: ptr_const_ptr @ 0x192E */
__int64 __fastcall ptr_const_ptr(_DWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)(*a1 + 5);
  *a1 = result;
  return result;
}


/* Function: ptr_func_simple @ 0x193A */
__int64 __fastcall ptr_func_simple(__int64 (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2);
}


/* Function: ptr_func_complex @ 0x194E */
__int64 __fastcall ptr_func_complex(__int64 (__fastcall *a1)(__int64, _QWORD *, _QWORD), __int64 a2)
{
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[3] = __readfsqword(0x28u);
  v3[0] = "test";
  v3[1] = 0;
  return a1(a2, v3, 0);
}


/* Function: ptr_cast @ 0x199F */
__int64 __fastcall ptr_cast(unsigned int *a1)
{
  return *a1;
}


/* Function: opaque_handle_create @ 0x19A6 */
__int64 __fastcall opaque_handle_create(int a1)
{
  return a1;
}


/* Function: opaque_handle_op @ 0x19AE */
__int64 __fastcall opaque_handle_op(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: test_pointer_types @ 0x19B6 */
unsigned __int64 test_pointer_types()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [rsp+8h] [rbp-40h] BYREF
  int v6; // [rsp+Ch] [rbp-3Ch] BYREF
  int *v7; // [rsp+10h] [rbp-38h] BYREF
  int **v8; // [rsp+18h] [rbp-30h] BYREF
  _DWORD v9[6]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  puts(asc_3454);
  __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
  __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
  v5 = 5;
  v7 = &v5;
  v8 = &v7;
  v0 = ptr_triple(&v8);
  __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", v0);
  v9[0] = 1;
  v9[1] = 2;
  v9[2] = 3;
  v9[3] = 4;
  v9[4] = 5;
  v1 = ptr_increment(v9, 5);
  __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v1);
  __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
  __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
  __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
  __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
  __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
  __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
  v2 = ptr_func_simple((__int64 (__fastcall *)(_QWORD))double_value, 5u);
  __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", v2);
  v6 = 5;
  v3 = ptr_func_complex((__int64 (__fastcall *)(__int64, _QWORD *, _QWORD))complex_callback, (__int64)&v6);
  __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", v3);
  __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
  __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
  return v10 - __readfsqword(0x28u);
}


/* Function: struct_simple @ 0x1BEA */
__int64 __fastcall struct_simple(_DWORD *a1)
{
  return (unsigned int)(a1[2] + *a1 + a1[1]);
}


/* Function: struct_array @ 0x1BF7 */
__int64 __fastcall struct_array(_DWORD *a1, int a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rsi
  unsigned int v4; // ecx

  if ( a2 <= 0 )
  {
    return 0;
  }
  else
  {
    v2 = a1;
    v3 = (__int64)&a1[3 * (a2 - 1) + 3];
    v4 = 0;
    do
    {
      v4 += v2[2] + *v2 + v2[1];
      v2 += 3;
    }
    while ( v2 != (_DWORD *)v3 );
  }
  return v4;
}


/* Function: struct_nested @ 0x1C30 */
__int64 __fastcall struct_nested(_DWORD *a1)
{
  return (unsigned int)(a1[3] + *a1);
}


/* Function: struct_deep @ 0x1C3A */
__int64 __fastcall struct_deep(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8));
}


/* Function: struct_with_ptr @ 0x1C45 */
__int64 __fastcall struct_with_ptr(__int64 a1)
{
  int *v1; // rcx
  int v2; // edx

  v1 = *(int **)(a1 + 8);
  v2 = 0;
  if ( v1 )
    v2 = *v1;
  return (unsigned int)(v2 + *(_DWORD *)a1);
}


/* Function: struct_bitfields @ 0x1C5E */
__int64 __fastcall struct_bitfields(_WORD *a1)
{
  return (*a1 >> 6) + ((*(_BYTE *)a1 >> 3) & 7) + ((*(_BYTE *)a1 >> 1) & 3) + (*(_BYTE *)a1 & 1u);
}


/* Function: union_type @ 0x1C88 */
__int64 __fastcall union_type(unsigned int *a1, int a2)
{
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return (unsigned int)(int)*(float *)a1;
  return (unsigned int)*(char *)a1;
}


/* Function: union_array @ 0x1CA1 */
__int64 __fastcall union_array(_DWORD *a1, int a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // edx

  if ( a2 <= 0 )
  {
    return 0;
  }
  else
  {
    v2 = a1;
    v3 = 0;
    do
      v3 += *v2++;
    while ( v2 != &a1[a2 - 1 + 1] );
  }
  return v3;
}


/* Function: enum_type @ 0x1CCE */
__int64 __fastcall enum_type(int a1)
{
  return (unsigned int)(10 * a1);
}


/* Function: enum_switch @ 0x1CD8 */
__int64 __fastcall enum_switch(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 == 2 )
    return 50;
  if ( a1 <= 2 )
    return a1 != 0 ? 0x64 : 0;
  result = 4294967197LL;
  if ( a1 == 3 )
    return 0xFFFFFFFFLL;
  return result;
}


/* Function: struct_func_ptr @ 0x1D02 */
__int64 __fastcall struct_func_ptr(unsigned int *a1)
{
  return (*((__int64 (__fastcall **)(_QWORD))a1 + 1))(*a1);
}


/* Function: linked_list @ 0x1D17 */
__int64 __fastcall linked_list(__int64 a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 0;
  LODWORD(result) = 0;
  do
  {
    result = (unsigned int)(*(_DWORD *)a1 + result);
    a1 = *(_QWORD *)(a1 + 8);
  }
  while ( a1 );
  return result;
}


/* Function: doubly_linked_list @ 0x1D37 */
__int64 __fastcall doubly_linked_list(__int64 a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 0;
  LODWORD(result) = 0;
  do
  {
    result = (unsigned int)(*(_DWORD *)a1 + result);
    a1 = *(_QWORD *)(a1 + 8);
  }
  while ( a1 );
  return result;
}


/* Function: binary_tree_sum @ 0x1D57 */
__int64 __fastcall binary_tree_sum(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebp

  result = 0;
  if ( a1 )
  {
    v2 = *(_DWORD *)a1 + binary_tree_sum(*(_QWORD *)(a1 + 8));
    return v2 + (unsigned int)binary_tree_sum(*(_QWORD *)(a1 + 16));
  }
  return result;
}


/* Function: binary_tree @ 0x1D8E */
__int64 __fastcall binary_tree(__int64 a1)
{
  return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x1DA0 */
__int64 __fastcall graph_traverse(__int64 a1)
{
  int v1; // eax
  __int64 *v2; // rcx
  __int64 v3; // rsi
  unsigned int v4; // edx
  __int64 i; // rax

  v1 = *(_DWORD *)(a1 + 80);
  if ( v1 <= 0 )
  {
    return 0;
  }
  else
  {
    v2 = (__int64 *)a1;
    v3 = a1 + 8LL * (unsigned int)(v1 - 1) + 8;
    v4 = 0;
    do
    {
      for ( i = *v2; i; i = *(_QWORD *)(i + 8) )
        v4 += *(_DWORD *)i;
      ++v2;
    }
    while ( v2 != (__int64 *)v3 );
  }
  return v4;
}


/* Function: test_composite_types @ 0x1DE1 */
unsigned __int64 test_composite_types()
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
  _WORD v11[2]; // [rsp+8h] [rbp-160h] BYREF
  int v12; // [rsp+Ch] [rbp-15Ch]
  int v13; // [rsp+10h] [rbp-158h] BYREF
  __int64 v14; // [rsp+18h] [rbp-150h]
  int v15; // [rsp+20h] [rbp-148h] BYREF
  int *v16; // [rsp+28h] [rbp-140h]
  unsigned int v17; // [rsp+30h] [rbp-138h] BYREF
  __int64 (__fastcall *v18)(int); // [rsp+38h] [rbp-130h]
  int v19; // [rsp+40h] [rbp-128h] BYREF
  __int64 v20; // [rsp+48h] [rbp-120h]
  int v21; // [rsp+50h] [rbp-118h] BYREF
  __int64 v22; // [rsp+58h] [rbp-110h]
  __int64 v23; // [rsp+60h] [rbp-108h]
  _DWORD v24[3]; // [rsp+74h] [rbp-F4h] BYREF
  _DWORD v25[8]; // [rsp+80h] [rbp-E8h] BYREF
  int v26; // [rsp+A0h] [rbp-C8h] BYREF
  int *v27; // [rsp+A8h] [rbp-C0h]
  int v28; // [rsp+B0h] [rbp-B8h] BYREF
  int *v29; // [rsp+B8h] [rbp-B0h]
  int v30; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-A0h]
  int v32; // [rsp+D0h] [rbp-98h] BYREF
  int *v33; // [rsp+D8h] [rbp-90h]
  __int64 v34; // [rsp+E0h] [rbp-88h]
  int v35; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-78h]
  int *v37; // [rsp+F8h] [rbp-70h]
  _QWORD v38[11]; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+158h] [rbp-10h]

  v39 = __readfsqword(0x28u);
  puts(asc_354A);
  __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
  v25[0] = 1;
  v25[1] = 1;
  v25[2] = 1;
  v25[3] = 2;
  v25[4] = 2;
  v25[5] = 2;
  v0 = struct_array(v25, 2);
  __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", v0);
  __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
  __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
  v13 = 20;
  v14 = 0;
  v15 = 10;
  v16 = &v13;
  v1 = struct_with_ptr((__int64)&v15);
  __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", v1);
  LOBYTE(v11[0]) = v11[0] & 0xC0 | 0x1D;
  LOBYTE(v2) = v11[0] & 0x3F;
  HIBYTE(v2) = 25;
  v11[0] = v2;
  v12 &= 0xFFF00000;
  v3 = struct_bitfields(v11);
  __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", v3);
  __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
  v24[0] = 10;
  v24[1] = 20;
  v24[2] = 30;
  v4 = union_array(v24, 3);
  __printf_chk(1, "CMP-L2-08 (union_array): %d\n", v4);
  __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
  __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
  v17 = 10;
  v18 = process_int;
  v5 = struct_func_ptr(&v17);
  __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", v5);
  v26 = 10;
  v27 = &v28;
  v28 = 20;
  v29 = &v30;
  v30 = 30;
  v31 = 0;
  v6 = linked_list((__int64)&v26);
  __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v6);
  v32 = 10;
  v33 = &v35;
  v34 = 0;
  v35 = 20;
  v36 = 0;
  v37 = &v32;
  v7 = doubly_linked_list((__int64)&v32);
  __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v7);
  v21 = 100;
  v22 = 0;
  v23 = 0;
  v8 = binary_tree_sum((__int64)&v21);
  __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v8);
  v19 = 1;
  v20 = 0;
  memset(&v38[1], 0, 72);
  v38[10] = 2;
  v38[0] = &v19;
  v9 = graph_traverse((__int64)v38);
  __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", v9);
  return v39 - __readfsqword(0x28u);
}


/* FAILED to decompile: main @ 0x221B */

/* Function: .term_proc @ 0x2258 */
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

/* Total functions decompiled: 67, failed: 7 */
