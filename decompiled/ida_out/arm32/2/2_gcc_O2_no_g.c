/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/2/2_gcc_O2_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10394 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_103A0 @ 0x103A0 */
void sub_103A0()
{
  JUMPOUT(0);
}


/* Function: main @ 0x103FC */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0

  v3 = test_data_types_l1(argc, argv, envp);
  v4 = test_array_types(v3);
  v5 = test_pointer_types(v4);
  test_composite_types(v5);
  return 0;
}


/* Function: _start @ 0x10418 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_10454 + 19189), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x1045C */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x10480 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x104AC */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x104E4 */
char *_do_global_dtors_aux()
{
  char *result; // r0

  if ( !_bss_start )
  {
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x1050C */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: process_char @ 0x10510 */
int __fastcall process_char(int result)
{
  if ( (unsigned int)(result - 65) <= 0x19 )
    return (unsigned __int8)(result + 32);
  return result;
}


/* Function: process_short @ 0x10524 */
int __fastcall process_short(__int16 a1, __int16 a2)
{
  return (__int16)(a1 + a2);
}


/* Function: process_int @ 0x10534 */
int __fastcall process_int(int a1)
{
  return 2 * a1 + 1;
}


/* Function: process_long @ 0x10540 */
int __fastcall process_long(int a1)
{
  return 2 * a1;
}


/* Function: process_ll @ 0x10548 */
int __fastcall process_ll(int a1)
{
  return a1 * a1;
}


/* Function: process_float @ 0x1055C */
float __fastcall process_float(float a1)
{
  return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x10574 */
double __fastcall process_double(double a1)
{
  return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x105A0 */
double __fastcall process_ld(double a1)
{
  return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x105C4 */
bool __fastcall process_bool(int a1)
{
  return a1 > 0 && !(a1 & 1);
}


/* Function: const_param @ 0x105D8 */
int __fastcall const_param(_DWORD *a1)
{
  return *a1 + 10;
}


/* Function: volatile_access @ 0x105E4 */
int __fastcall volatile_access(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: test_data_types_l1 @ 0x105F4 */
int test_data_types_l1()
{
  puts(s);
  _printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
  _printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
  _printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
  _printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
  _printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
  _printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000LL);
  _printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 3.5);
  _printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 2.1);
  _printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 10.0);
  _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
  _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
  _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
  _printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
  return _printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x10758 */
int __fastcall array_1d_stack(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  int v5; // r1
  int v6; // t1

  result = 0;
  if ( a2 > 0 )
  {
    v4 = a1 - 4;
    v5 = v4 + 4 * a2;
    do
    {
      v6 = *(_DWORD *)(v4 + 4);
      v4 += 4;
      result += v6;
    }
    while ( v4 != v5 );
  }
  return result;
}


/* Function: array_string @ 0x10784 */
unsigned __int8 *__fastcall array_string(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r3
  unsigned __int8 *result; // r0
  int v3; // r1

  v1 = a1;
  result = (unsigned __int8 *)*a1;
  if ( result )
  {
    v3 = 1 - (_DWORD)v1;
    do
      result = &v1[v3];
    while ( *++v1 );
  }
  return result;
}


/* Function: array_2d_stack @ 0x107AC */
int __fastcall array_2d_stack(int a1)
{
  int v1; // r3
  int result; // r0
  int v4; // r2

  v1 = 0;
  result = 0;
  do
  {
    v4 = *(_DWORD *)(a1 + 4 * v1);
    v1 += 11;
    result += v4;
  }
  while ( v1 != 110 );
  return result;
}


/* Function: array_3d @ 0x107D0 */
int __fastcall array_3d(int a1)
{
  int v1; // r3
  _DWORD *v2; // lr
  _DWORD *v3; // r4
  _DWORD *v4; // r2
  int v5; // r0
  int v6; // r1
  int v7; // r3

  v1 = 0;
  v2 = (_DWORD *)(a1 + 100);
  v3 = (_DWORD *)(a1 + 600);
  do
  {
    v4 = v2 - 25;
    do
    {
      v5 = v4[3];
      v6 = v4[4];
      v7 = v1 + *v4 + v4[1] + v4[2];
      v4 += 5;
      v1 = v7 + v5 + v6;
    }
    while ( v4 != v2 );
    v2 = v4 + 25;
  }
  while ( v4 + 25 != v3 );
  return v1;
}


/* Function: array_vla @ 0x10824 */
int __fastcall array_vla(int a1, int a2)
{
  bool v2; // cc
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // t1

  v2 = a1 <= 0;
  result = 0;
  if ( !v2 )
  {
    v5 = a2 - 4;
    v6 = v5 + 4 * a1;
    do
    {
      v7 = *(_DWORD *)(v5 + 4);
      v5 += 4;
      result += v7;
    }
    while ( v5 != v6 );
  }
  return result;
}


/* Function: array_pointer @ 0x1084C */
int __fastcall array_pointer(int a1, int a2)
{
  int v3; // r3
  int result; // r0
  int v5; // r2
  int v6; // r1

  if ( a2 <= 0 )
    return 0;
  v3 = 0;
  result = 0;
  v5 = 10 * a2;
  do
  {
    v6 = *(_DWORD *)(a1 + 4 * v3);
    v3 += 10;
    result += v6;
  }
  while ( v5 != v3 );
  return result;
}


/* Function: pointer_array @ 0x10888 */
int __fastcall pointer_array(int a1, int a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r1
  int result; // r0
  _DWORD *v6; // r2
  _DWORD *v7; // t1

  if ( a2 >= 10 )
    v2 = 10;
  else
    v2 = a2;
  if ( a2 <= 0 )
    return 0;
  v3 = 0;
  v4 = a1 - 4;
  result = 0;
  do
  {
    v7 = *(_DWORD **)(v4 + 4);
    v4 += 4;
    v6 = v7;
    ++v3;
    if ( v7 )
      result += *v6;
  }
  while ( v2 > v3 );
  return result;
}


/* Function: array_complex_index @ 0x108D0 */
int __fastcall array_complex_index(int a1, int a2, int a3, int a4, signed int a5)
{
  if ( (a4 >= a2) | ((a4 | (unsigned int)a5) >> 31) || a5 >= a3 )
    return -1;
  else
    return *(_DWORD *)(a1 + 4 * (a4 + a5 * a2));
}


/* Function: array_oob @ 0x1090C */
int __fastcall array_oob(int a1, int a2)
{
  bool v2; // nf
  int result; // r0
  int v6; // r3
  int v7; // r1
  int v8; // t1

  v2 = a2 < 0;
  result = 0;
  if ( !v2 )
  {
    v6 = a1 - 4;
    v7 = a1 + 4 * a2;
    do
    {
      v8 = *(_DWORD *)(v6 + 4);
      v6 += 4;
      result += v8;
    }
    while ( v6 != v7 );
  }
  return result;
}


/* Function: test_array_types @ 0x10938 */
int __fastcall test_array_types(
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
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23)
{
  int v23; // r12
  char *v24; // r3
  int v25; // t1
  char *v26; // r3
  int v27; // r2
  int v28; // t1
  int v29; // r2
  char *v30; // r12
  char *v31; // r1
  int i; // r3
  int v33; // r0
  int v34; // r2
  char *v35; // r3
  int v36; // t1
  char *v37; // r0
  char *v38; // r3
  int v39; // r2
  int *v40; // lr
  int *v41; // r3
  int v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r3
  int *v46; // r2
  _DWORD v48[4]; // [sp+4h] [bp-404h] BYREF
  int v49; // [sp+14h] [bp-3F4h] BYREF
  char v50; // [sp+18h] [bp-3F0h] BYREF
  int v51; // [sp+5Ch] [bp-3ACh]
  char v52; // [sp+64h] [bp-3A4h] BYREF
  char v53; // [sp+68h] [bp-3A0h] BYREF
  char v54; // [sp+1F8h] [bp-210h] BYREF
  char v55; // [sp+220h] [bp-1E8h] BYREF
  char v56; // [sp+25Ch] [bp-1ACh] BYREF
  char v57[8]; // [sp+3ECh] [bp-1Ch] BYREF

  puts(asc_121C4);
  v23 = 0;
  v48[0] = 1;
  v48[1] = 2;
  v48[2] = 3;
  v48[3] = 4;
  v24 = (char *)v48;
  v49 = 5;
  do
  {
    v25 = *(_DWORD *)v24;
    v24 += 4;
    v23 += v25;
  }
  while ( &v50 != v24 );
  _printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v23);
  v26 = v57;
  v27 = 0;
  strcpy(v57, "hello");
  do
  {
    v28 = (unsigned __int8)*++v26;
    ++v27;
  }
  while ( v28 );
  _printf_chk(1, "ARR-L1-02 (array_string): %d\n", v27);
  v29 = 0;
  v30 = &v52;
  do
  {
    v31 = v30;
    for ( i = 0; i != 10; ++i )
    {
      if ( i == v29 )
        v33 = v29;
      else
        v33 = 0;
      *((_DWORD *)v31 + 1) = v33;
      v31 += 4;
    }
    ++v29;
    v30 += 40;
  }
  while ( v29 != 10 );
  v34 = 0;
  v35 = &v53;
  do
  {
    v36 = *(_DWORD *)v35;
    v35 += 44;
    v34 += v36;
  }
  while ( v35 != &v55 );
  _printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v34);
  v37 = &v54;
  do
  {
    v38 = v37;
    v39 = 5;
    do
    {
      --v39;
      *(_DWORD *)v38 = 1;
      *((_DWORD *)v38 + 1) = 1;
      *((_DWORD *)v38 + 2) = 1;
      *((_DWORD *)v38 + 3) = 1;
      *((_DWORD *)v38 + 4) = 1;
      v38 += 20;
    }
    while ( v39 );
    v37 += 100;
  }
  while ( v37 != v57 );
  v40 = (int *)&v56;
  do
  {
    v41 = v40 - 25;
    do
    {
      v42 = v41[3];
      v43 = v41[4];
      v44 = v39 + *v41 + v41[1] + v41[2];
      v41 += 5;
      v39 = v44 + v42 + v43;
    }
    while ( v40 != v41 );
    v40 += 25;
  }
  while ( v40 != &a23 );
  _printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v39);
  _printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
  _printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
  _printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
  v45 = 0;
  v46 = &v49;
  do
  {
    v46[1] = v45;
    ++v46;
    ++v45;
  }
  while ( v45 != 20 );
  return _printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v51);
}


/* Function: ptr_single @ 0x10B78 */
int __fastcall ptr_single(_DWORD *a1)
{
  return *a1 + 10;
}


/* Function: ptr_double @ 0x10B84 */
int __fastcall ptr_double(_DWORD **a1)
{
  return **a1 + 5;
}


/* Function: ptr_triple @ 0x10B94 */
int __fastcall ptr_triple(_DWORD ***a1)
{
  return ***a1 + 1;
}


/* Function: ptr_increment @ 0x10BA8 */
int __fastcall ptr_increment(int *a1, int a2)
{
  int v3; // r3
  int result; // r0
  int v5; // t1

  if ( a2 <= 0 )
    return 0;
  v3 = 0;
  result = 0;
  do
  {
    v5 = *a1++;
    ++v3;
    result += v5;
  }
  while ( a2 != v3 );
  return result;
}


/* Function: ptr_offset @ 0x10BDC */
int __fastcall ptr_offset(int a1, int a2)
{
  return *(_DWORD *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0x10BE4 */
int __fastcall ptr_diff(int a1, int a2)
{
  return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0x10BF0 */
int __fastcall ptr_void(unsigned __int8 *a1, int a2)
{
  if ( !a2 )
    return *(_DWORD *)a1;
  if ( a2 == 1 )
    return *a1;
  return -1;
}


/* Function: ptr_const @ 0x10C10 */
int __fastcall ptr_const(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0x10C1C */
int __fastcall ptr_const_ptr(int *a1)
{
  int result; // r0

  result = *a1 + 5;
  *a1 = result;
  return result;
}


/* Function: ptr_func_simple @ 0x10C30 */
int __fastcall ptr_func_simple(int (__fastcall *a1)(int), int a2)
{
  return a1(a2);
}


/* Function: ptr_func_complex @ 0x10C3C */
int __fastcall ptr_func_complex(int (__fastcall *a1)(int, _DWORD *), int a2)
{
  _DWORD v3[2]; // [sp+4h] [bp-14h] BYREF

  v3[1] = 0;
  v3[0] = "test";
  return a1(a2, v3);
}


/* Function: ptr_cast @ 0x10CA4 */
int __fastcall ptr_cast(int a1)
{
  return *(_DWORD *)a1;
}


/* Function: opaque_handle_create @ 0x10CAC */
void opaque_handle_create()
{
  ;
}


/* Function: opaque_handle_op @ 0x10CB0 */
int __fastcall opaque_handle_op(int a1)
{
  return 2 * a1;
}


/* Function: test_pointer_types @ 0x10CB8 */
int test_pointer_types()
{
  int v0; // lr
  int *v1; // r12
  int v2; // t1
  _DWORD v4[5]; // [sp+0h] [bp-28h] BYREF
  int v5; // [sp+14h] [bp-14h] BYREF

  puts(asc_122F0);
  _printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
  _printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
  _printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
  v0 = 0;
  v1 = v4;
  v4[0] = 1;
  v4[1] = 2;
  v4[2] = 3;
  v4[3] = 4;
  v4[4] = 5;
  do
  {
    v2 = *v1++;
    v0 += v2;
  }
  while ( v1 != &v5 );
  _printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v0);
  _printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
  _printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
  _printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
  _printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
  _printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
  _printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
  _printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
  _printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
  _printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
  return _printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x10E54 */
int __fastcall struct_simple(_DWORD *a1)
{
  return *a1 + a1[1] + a1[2];
}


/* Function: struct_array @ 0x10E6C */
int __fastcall struct_array(int *a1, int a2)
{
  int result; // r0
  int *v4; // r1
  int v5; // r12
  int v6; // r2
  int v7; // lr

  if ( a2 <= 0 )
    return 0;
  result = 0;
  v4 = &a1[3 * a2];
  do
  {
    v5 = a1[2];
    v6 = *a1;
    v7 = a1[1];
    a1 += 3;
    result += v6 + v7 + v5;
  }
  while ( v4 != a1 );
  return result;
}


/* Function: struct_nested @ 0x10EB4 */
int __fastcall struct_nested(_DWORD *a1)
{
  return *a1 + a1[3];
}


/* Function: struct_deep @ 0x10EC4 */
int __fastcall struct_deep(int a1)
{
  return *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 20);
}


/* Function: struct_with_ptr @ 0x10ED4 */
int __fastcall struct_with_ptr(int *a1)
{
  int result; // r0
  _DWORD *v2; // r3

  result = *a1;
  v2 = (_DWORD *)a1[1];
  if ( v2 )
    result += *v2;
  return result;
}


/* Function: struct_bitfields @ 0x10EE8 */
unsigned int __fastcall struct_bitfields(_BYTE *a1)
{
  return (*a1 & 1)
       + ((unsigned int)((unsigned __int8)*a1 << 29) >> 30)
       + ((unsigned int)((unsigned __int8)*a1 << 26) >> 29)
       + (*(unsigned __int16 *)a1 >> 6);
}


/* Function: union_type @ 0x10F0C */
int __fastcall union_type(unsigned __int8 *a1, int a2)
{
  if ( !a2 )
    return *(_DWORD *)a1;
  if ( a2 == 1 )
    return (int)*(float *)a1;
  return *a1;
}


/* Function: union_array @ 0x10F3C */
int __fastcall union_array(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  int v5; // r1
  int v6; // t1

  result = 0;
  if ( a2 > 0 )
  {
    v4 = a1 - 4;
    v5 = v4 + 4 * a2;
    do
    {
      v6 = *(_DWORD *)(v4 + 4);
      v4 += 4;
      result += v6;
    }
    while ( v4 != v5 );
  }
  return result;
}


/* Function: enum_type @ 0x10F68 */
int __fastcall enum_type(int a1)
{
  return 10 * a1;
}


/* Function: enum_switch @ 0x10F74 */
int __fastcall enum_switch(unsigned int a1)
{
  if ( a1 > 3 )
    return -99;
  else
    return *((_DWORD *)&unk_1269C + a1 + 5);
}


/* Function: struct_func_ptr @ 0x10F90 */
int __fastcall struct_func_ptr(int a1)
{
  return (*(int (__fastcall **)(_DWORD))(a1 + 4))(*(_DWORD *)a1);
}


/* Function: linked_list @ 0x10F98 */
int __fastcall linked_list(int *a1)
{
  int *v1; // r3
  int result; // r0
  int v3; // r2

  v1 = a1;
  if ( !a1 )
    return 0;
  result = 0;
  do
  {
    v3 = *v1;
    v1 = (int *)v1[1];
    result += v3;
  }
  while ( v1 );
  return result;
}


/* Function: doubly_linked_list @ 0x10FC0 */
int __fastcall doubly_linked_list(int *a1)
{
  int *v1; // r3
  int result; // r0
  int v3; // r2

  v1 = a1;
  if ( !a1 )
    return 0;
  result = 0;
  do
  {
    v3 = *v1;
    v1 = (int *)v1[1];
    result += v3;
  }
  while ( v1 );
  return result;
}


/* Function: binary_tree_sum @ 0x10FE8 */
int __fastcall binary_tree_sum(int *a1, int a2)
{
  _DWORD *v2; // r5
  int v3; // r2
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r2
  int *v11; // r6
  int v12; // r1
  int v13; // r3
  _DWORD *v14; // r5
  int v15; // r2
  int v16; // r1
  _DWORD *v17; // r4
  int v18; // r10
  int v19; // r0
  int v20; // r8
  _DWORD *v21; // r10
  int v22; // r5
  int v23; // r2
  int *v24; // r7
  int v25; // r9
  int v26; // r0
  int v27; // r11
  int v28; // r8
  _DWORD *v29; // r2
  int v30; // r4
  int v31; // r3
  int v32; // r9
  int v33; // r1
  int v34; // r0
  int v35; // r12
  int v36; // r0
  int v37; // r2
  int v38; // r2
  int v39; // r2
  _DWORD *v41; // [sp+0h] [bp-70h]
  int v42; // [sp+4h] [bp-6Ch]
  int v43; // [sp+8h] [bp-68h]
  int v44; // [sp+Ch] [bp-64h]
  int *v45; // [sp+10h] [bp-60h]
  int v46; // [sp+14h] [bp-5Ch]
  int *v47; // [sp+18h] [bp-58h]
  int v48; // [sp+1Ch] [bp-54h]
  int v49; // [sp+20h] [bp-50h]
  int *v50; // [sp+24h] [bp-4Ch]
  int v51; // [sp+28h] [bp-48h]
  int *v52; // [sp+2Ch] [bp-44h]
  int v53; // [sp+30h] [bp-40h]
  int v54; // [sp+34h] [bp-3Ch]
  int v55; // [sp+38h] [bp-38h]
  int v56; // [sp+3Ch] [bp-34h]
  _DWORD *v57; // [sp+40h] [bp-30h]
  int v58; // [sp+44h] [bp-2Ch]

  v45 = a1;
  if ( !a1 )
    return 0;
  v44 = 0;
  do
  {
    v3 = v45[1];
    v4 = *v45;
    v46 = *v45;
    if ( v3 )
      v4 = 0;
    v47 = (int *)v45[1];
    if ( v3 )
    {
      v49 = v4;
      do
      {
        v5 = v47[1];
        v6 = *v47;
        v48 = *v47;
        if ( v5 )
          v6 = 0;
        v50 = (int *)v47[1];
        if ( v5 )
        {
          v51 = v6;
          do
          {
            v7 = v50[1];
            v8 = *v50;
            v55 = *v50;
            if ( v7 )
              v8 = 0;
            v52 = (int *)v50[1];
            if ( v7 )
            {
              v53 = v8;
              do
              {
                v9 = v52[1];
                if ( v9 )
                {
                  a2 = 0;
                  v2 = (_DWORD *)v52[1];
                }
                v54 = *v52;
                if ( v9 )
                {
                  v10 = a2;
                  do
                  {
                    v11 = (int *)v2[1];
                    v12 = *v2;
                    if ( v11 )
                    {
                      v13 = 0;
                      v41 = v2;
                      v42 = v10;
                      v43 = *v2;
                      do
                      {
                        v14 = (_DWORD *)v11[1];
                        v15 = *v11;
                        if ( v14 )
                        {
                          v16 = 0;
                          do
                          {
                            v17 = (_DWORD *)v14[1];
                            v18 = *v14;
                            if ( v17 )
                            {
                              v19 = *v14;
                              v20 = 0;
                              v21 = v14;
                              v22 = v15;
                              v23 = v19;
                              do
                              {
                                v24 = (int *)v17[1];
                                v25 = *v17;
                                if ( v24 )
                                {
                                  v26 = v20;
                                  v27 = 0;
                                  v28 = v23;
                                  v29 = v17;
                                  v30 = v13;
                                  v31 = v25;
                                  v32 = v16;
                                  v33 = v26;
                                  do
                                  {
                                    v58 = v33;
                                    v57 = v29;
                                    v56 = v31;
                                    v34 = binary_tree_sum(v24[1]);
                                    v35 = *v24;
                                    v24 = (int *)v24[2];
                                    v31 = v56;
                                    v29 = v57;
                                    v33 = v58;
                                    v27 += v34 + v35;
                                  }
                                  while ( v24 );
                                  v16 = v32;
                                  v13 = v30;
                                  v17 = v57;
                                  v23 = v28;
                                  v20 = v58;
                                  v25 = v56 + v27;
                                }
                                v17 = (_DWORD *)v17[2];
                                v20 += v25;
                              }
                              while ( v17 );
                              v36 = v23;
                              v15 = v22;
                              v14 = v21;
                              v18 = v36 + v20;
                            }
                            v14 = (_DWORD *)v14[2];
                            v16 += v18;
                          }
                          while ( v14 );
                          v15 += v16;
                        }
                        v11 = (int *)v11[2];
                        v13 += v15;
                      }
                      while ( v11 );
                      v2 = v41;
                      v10 = v42;
                      v12 = v43 + v13;
                    }
                    v2 = (_DWORD *)v2[2];
                    v10 += v12;
                  }
                  while ( v2 );
                  v54 += v10;
                }
                a2 = v54;
                v37 = v53 + v54;
                v52 = (int *)v52[2];
                v53 += v54;
              }
              while ( v52 );
              v55 += v37;
            }
            a2 = v55;
            v38 = v51 + v55;
            v50 = (int *)v50[2];
            v51 += v55;
          }
          while ( v50 );
          v48 += v38;
        }
        a2 = v48;
        v39 = v49 + v48;
        v47 = (int *)v47[2];
        v49 += v48;
      }
      while ( v47 );
      v46 += v39;
    }
    a2 = v46;
    v45 = (int *)v45[2];
    v44 += v46;
  }
  while ( v45 );
  return v44;
}


/* Function: binary_tree @ 0x112A8 */
int __fastcall binary_tree(int *a1, int a2)
{
  int *v2; // r4
  int v3; // r5
  int v4; // r0
  int v5; // r3

  v2 = a1;
  if ( !a1 )
    return 0;
  v3 = 0;
  do
  {
    v4 = binary_tree_sum((int *)v2[1], a2);
    v5 = *v2;
    v2 = (int *)v2[2];
    v3 += v4 + v5;
  }
  while ( v2 );
  return v3;
}


/* Function: graph_traverse @ 0x112E4 */
int __fastcall graph_traverse(int a1)
{
  int v1; // r12
  int result; // r0
  int v4; // r1
  int v5; // r12
  int *i; // r3
  int *v7; // t1
  int v8; // r2

  v1 = *(_DWORD *)(a1 + 40);
  result = 0;
  if ( v1 > 0 )
  {
    v4 = a1 - 4;
    v5 = v4 + 4 * v1;
    do
    {
      v7 = *(int **)(v4 + 4);
      v4 += 4;
      for ( i = v7; i; result += v8 )
      {
        v8 = *i;
        i = (int *)i[1];
      }
    }
    while ( v4 != v5 );
  }
  return result;
}


/* Function: test_composite_types @ 0x11328 */
int test_composite_types()
{
  int v0; // r3
  int v1; // r2
  int *v2; // r5
  int *v3; // r4
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r0
  _DWORD v9[2]; // [sp+14h] [bp-3Ch] BYREF
  _DWORD v10[2]; // [sp+1Ch] [bp-34h] BYREF
  _DWORD v11[3]; // [sp+24h] [bp-2Ch] BYREF
  _DWORD v12[3]; // [sp+30h] [bp-20h] BYREF

  puts(asc_12498);
  _printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
  _printf_chk(1, "CMP-L2-02 (struct_array): %d\n", 9);
  _printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
  _printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
  _printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", 30);
  _printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", 106);
  _printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
  _printf_chk(1, "CMP-L2-08 (union_array): %d\n", 60);
  _printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
  _printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
  _printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", 21);
  v0 = 10;
  v1 = 0;
  v2 = v9;
  v9[1] = v10;
  v10[1] = 0;
  v9[0] = 20;
  v10[0] = 30;
  while ( 1 )
  {
    v1 += v0;
    if ( !v2 )
      break;
    v0 = *v2;
    v2 = (int *)v2[1];
  }
  _printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v1);
  v3 = v11;
  v11[1] = v12;
  v4 = 0;
  v5 = 10;
  v11[2] = 0;
  v12[1] = 0;
  v12[2] = v11;
  v11[0] = 10;
  v12[0] = 20;
  while ( 1 )
  {
    v3 = (int *)v3[1];
    v4 += v5;
    if ( !v3 )
      break;
    v5 = *v3;
  }
  _printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v4);
  v7 = binary_tree_sum(0, v6);
  _printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v7 + 100);
  return _printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: __muldf3 @ 0x11538 */
int __fastcall _muldf3(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v3; // r5
  unsigned int v4; // r12
  bool v5; // zf
  int v6; // r4
  int v7; // r4
  int v8; // r6
  int v9; // r1
  int v10; // r3
  bool v11; // zf
  int v12; // r3
  int v13; // r12
  unsigned int v14; // r5
  unsigned int v15; // lr
  unsigned int v16; // r2
  unsigned int v17; // lr
  unsigned __int64 v18; // kr10_8
  unsigned int v19; // r5
  unsigned int v20; // r6
  int v21; // r4
  unsigned int v22; // off
  unsigned int v24; // lr
  bool v25; // cc
  bool v26; // cf
  int v27; // r4
  int v28; // r4
  int v29; // r4
  char v30; // r4
  char v31; // r4
  unsigned int v32; // r3
  char v33; // r4
  unsigned int v34; // r3
  int v35; // lr
  unsigned int v36; // r3

  v4 = 2047;
  v6 = (HIDWORD(a1) >> 20) & 0x7FF;
  v5 = v6 == 0;
  if ( v6 )
  {
    v3 = (a3 >> 20) & 0x7FF;
    v5 = v3 == 0;
  }
  if ( !v5 )
  {
    v5 = v6 == 0x7FF;
    if ( v6 != 0x7FF )
      v5 = v3 == 0x7FF;
  }
  if ( v5 )
    a1 = sub_11718();
  v7 = v6 + v3;
  v8 = HIDWORD(a1) ^ a3;
  v9 = HIDWORD(a1) & ~(v4 << 21);
  v10 = a3 & ~(v4 << 21);
  v11 = ((unsigned int)a1 | (v9 << 12)) == 0;
  if ( (unsigned int)a1 | (v9 << 12) )
    v11 = (a2 | (v10 << 12)) == 0;
  HIDWORD(a1) = v9 | 0x100000;
  v12 = v10 | 0x100000;
  if ( v11 )
  {
    LODWORD(a1) = a1 | a2;
    HIDWORD(a1) = (v8 & 0x80000000 | HIDWORD(a1)) ^ v12;
    v25 = v7 <= (int)(v4 >> 1);
    v27 = v7 - (v4 >> 1);
    if ( !v25 && (int)v4 > v27 )
      return a1;
    HIDWORD(a1) |= 0x100000u;
    v24 = 0;
    v25 = v27 <= 1;
    v21 = v27 - 1;
  }
  else
  {
    v13 = a1 * a2;
    v14 = (HIDWORD(a1) * (unsigned __int64)a2 + (((unsigned int)a1 * (unsigned __int64)a2) >> 32)) >> 32;
    v15 = (a1 * (unsigned __int64)a2) >> 32;
    v16 = v8 & 0x80000000;
    v18 = (unsigned int)a1 * (unsigned __int64)(unsigned int)v12 + __PAIR64__(v14, v15);
    v17 = v18;
    v20 = (HIDWORD(a1) * (unsigned __int64)(unsigned int)v12 + HIDWORD(v18)) >> 32;
    v19 = HIDWORD(a1) * v12 + HIDWORD(v18);
    if ( v13 )
      v17 = v18 | 1;
    v21 = (__PAIR64__(v7 - 255, v20) - 0x30000000200LL) >> 32;
    if ( v20 < 0x200 )
    {
      v26 = __CFSHL__(v17, 1);
      v17 *= 2;
      v22 = v26 + v19;
      v26 = __CFADD__(v26, v19) | __CFADD__(v19, v22);
      v19 += v22;
      v20 += v26 + v20;
    }
    HIDWORD(a1) = v16 | (v20 << 11) | (v19 >> 21);
    LODWORD(a1) = (v19 << 11) | (v17 >> 21);
    v24 = v17 << 11;
    v25 = v21 <= 253;
    if ( (unsigned int)v21 > 0xFD )
      v25 = v21 - 253 <= 1792;
    if ( !v25 )
    {
      v26 = v24 >= 0x80000000;
      if ( v24 == 0x80000000 )
        v26 = a1 & 1;
      LODWORD(a1) = v26 + (_DWORD)a1;
      return a1;
    }
  }
  if ( !v25 )
    JUMPOUT(0x11784);
  if ( v21 > -54 )
  {
    v28 = -v21;
    v25 = v28 < 32;
    v29 = v28 - 32;
    if ( v25 )
    {
      v25 = v29 <= -12;
      v30 = v29 + 12;
      if ( v25 )
      {
        v31 = v30 + 20;
        v32 = (_DWORD)a1 << (32 - v31);
        LODWORD(a1) = (((unsigned int)a1 >> v31) | (HIDWORD(a1) << (32 - v31))) + (v32 >> 31);
        if ( !(v24 | (2 * v32)) )
          LODWORD(a1) = a1 & ~(v32 >> 31);
      }
      else
      {
        v33 = 12 - v30;
        v34 = (_DWORD)a1 << v33;
        LODWORD(a1) = (((unsigned int)a1 >> (32 - v33)) | (HIDWORD(a1) << v33)) + ((_DWORD)a1 << v33 >> 31);
        if ( !(v24 | (2 * v34)) )
          LODWORD(a1) = a1 & ~(v34 >> 31);
      }
    }
    else
    {
      v35 = v24 | ((_DWORD)a1 << (32 - v29));
      v36 = ((unsigned int)a1 >> v29) | (HIDWORD(a1) << (32 - v29));
      LODWORD(a1) = ((HIDWORD(a1) >> v29) & ~((HIDWORD(a1) & 0x80000000) >> v29)) + (v36 >> 31);
      if ( !(v35 | (2 * v36)) )
        LODWORD(a1) = a1 & ~(v36 >> 31);
    }
  }
  else
  {
    LODWORD(a1) = 0;
  }
  return a1;
}


/* Function: sub_11718 @ 0x11718 */
int __fastcall sub_11718(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
  bool v8; // cf
  int v9; // r4
  int v10; // r12
  bool v11; // zf
  int v12; // r5
  bool v13; // zf
  bool v14; // zf

  v11 = v9 == v10;
  v12 = v10 & (a4 >> 20);
  if ( v9 != v10 )
    v11 = v12 == v10;
  if ( v11 )
  {
    v14 = (result | (2 * a2)) == 0;
    if ( result | (2 * a2) )
    {
      v14 = (a3 | (2 * a4)) == 0;
    }
    else
    {
      result = a3;
      a2 = a4;
    }
    if ( !v14 && (v9 != v10 || !(result | (a2 << 12))) && (v12 != v10 || !(a3 | (a4 << 12))) )
      __asm { POP     {R4-R6,PC} }
    __asm { POP     {R4-R6,PC} }
  }
  v13 = (result | (2 * a2)) == 0;
  if ( result | (2 * a2) )
    v13 = (a3 | (2 * a4)) == 0;
  if ( v13 )
    __asm { POP     {R4-R6,PC} }
  if ( v9 )
    goto LABEL_24;
  while ( 1 )
  {
    v8 = __CFSHL__(result, 1);
    result *= 2;
    a2 += v8 + a2;
    if ( (a2 & 0x100000) != 0 )
      break;
    --v9;
  }
  if ( !v12 )
  {
LABEL_24:
    while ( 1 )
    {
      v8 = __CFSHL__(a3, 1);
      a3 *= 2;
      a4 += v8 + a4;
      if ( (a4 & 0x100000) != 0 )
        break;
      --v12;
    }
  }
  return result;
}


/* Function: __mulsf3 @ 0x117A4 */
int __fastcall _mulsf3(unsigned int a1, unsigned int a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // r2
  int v6; // r2
  int v7; // r12
  bool v8; // zf
  unsigned int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r3
  int v12; // kr00_4
  bool v13; // cf
  unsigned int v14; // r0
  int v15; // r2
  bool v16; // cc
  int result; // r0
  unsigned int v18; // r12
  int v19; // r0
  int v20; // r2
  int v21; // r2
  unsigned int v22; // r12
  unsigned int v23; // r12
  bool v24; // zf
  bool v25; // zf
  unsigned int v26; // r12
  bool v27; // zf
  bool v28; // zf
  bool v29; // zf

  v5 = (unsigned __int8)(a1 >> 23);
  v4 = v5 == 0;
  if ( (unsigned __int8)(a1 >> 23) )
  {
    a4 = (unsigned __int8)(a2 >> 23);
    v4 = a4 == 0;
  }
  if ( !v4 )
  {
    v4 = v5 == 0xFF;
    if ( v5 != 0xFF )
      v4 = a4 == 0xFF;
  }
  if ( v4 )
  {
    a4 = (unsigned __int8)(a2 >> 23);
    v27 = v5 == 0xFF;
    if ( v5 != 0xFF )
      v27 = a4 == 0xFF;
    if ( v27 )
    {
      v29 = a1 == 0;
      if ( a1 )
        v29 = a1 == 0x80000000;
      if ( v29 )
        a1 = a2;
      else
        v29 = a2 == 0;
      if ( !v29 )
        v29 = a2 == 0x80000000;
      if ( !v29 && (v5 != 0xFF || !(a1 << 9)) )
      {
        if ( a4 != 0xFF || !(a2 << 9) )
        {
          v14 = a1 ^ a2;
          return v14 & 0x80000000 | 0x7F800000;
        }
        a1 = a2;
      }
      return a1 | 0x7FC00000;
    }
    v28 = (a1 & 0x7FFFFFFF) == 0;
    if ( (a1 & 0x7FFFFFFF) != 0 )
      v28 = (a2 & 0x7FFFFFFF) == 0;
    if ( v28 )
      return (a1 ^ a2) & 0x80000000;
    v24 = v5 == 0;
    v23 = a1 & 0x80000000;
    while ( v24 )
    {
      a1 *= 2;
      v24 = (a1 & 0x800000) == 0;
      if ( (a1 & 0x800000) != 0 )
        break;
      --v5;
    }
    a1 |= v23;
    v25 = a4 == 0;
    v26 = a2 & 0x80000000;
    while ( v25 )
    {
      a2 *= 2;
      v25 = (a2 & 0x800000) == 0;
      if ( (a2 & 0x800000) != 0 )
        break;
      --a4;
    }
    a2 |= v26;
  }
  v6 = v5 + a4;
  v7 = a1 ^ a2;
  v9 = a1 << 9;
  v8 = v9 == 0;
  if ( v9 )
  {
    a2 <<= 9;
    v8 = a2 == 0;
  }
  if ( v8 )
  {
    v18 = v7 & 0x80000000;
    if ( !v9 )
      a2 <<= 9;
    v19 = v18 | (v9 >> 9) | (a2 >> 9);
    v16 = v6 <= 127;
    v20 = v6 - 127;
    if ( !v16 && v20 < 255 )
      return v19 | (v20 << 23);
    v14 = v19 | 0x800000;
    v11 = 0;
    v16 = v20 <= 1;
    v15 = v20 - 1;
  }
  else
  {
    v12 = ((v9 >> 5) | 0x8000000) * ((a2 >> 5) | 0x8000000);
    v10 = (((v9 >> 5) | 0x8000000) * (unsigned __int64)((a2 >> 5) | 0x8000000)) >> 32;
    v11 = v12;
    v13 = v10 >= 0x800000;
    if ( v10 < 0x800000 )
    {
      v10 = __SPAIR64__(v10, v12) >> 31;
      v11 = 2 * v12;
    }
    v14 = v7 & 0x80000000 | v10;
    v15 = v6 - (!v13 + 127);
    v16 = v15 <= 253;
    if ( (unsigned int)v15 <= 0xFD )
    {
      result = (v15 << 23) + (v11 >= 0x80000000) + v14;
      if ( v11 == 0x80000000 )
        return result & 0xFFFFFFFE;
      return result;
    }
  }
  if ( !v16 )
    return v14 & 0x80000000 | 0x7F800000;
  if ( v15 <= -25 )
    return v14 & 0x80000000;
  v21 = -v15;
  v22 = v14 << (32 - v21);
  result = (((2 * v14) >> v21) & 1) + (((2 * v14) >> v21 >> 1) | (__CFSHL__(v14, 1) << 31));
  if ( !(v11 | (2 * v22)) )
    return result & ~(v22 >> 31);
  return result;
}


/* Function: __aeabi_drsub @ 0x1193C */
double __fastcall _aeabi_drsub(double a1, double a2)
{
  HIDWORD(a1) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __subdf3 @ 0x11944 */
double __fastcall _subdf3(double a1, double a2)
{
  HIDWORD(a2) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __aeabi_dadd @ 0x11948 */
int __fastcall _aeabi_dadd(__int64 a1, __int64 a2)
{
  int v2; // r4
  int v3; // r5
  bool v4; // zf
  int v5; // r4
  bool v6; // vf
  char v7; // cc
  int v8; // r5
  __int64 v9; // r2
  int v10; // r4
  char v11; // lr
  unsigned int v12; // r12
  __int64 v13; // r0
  bool v14; // nf
  char v15; // r5
  _BOOL1 v16; // off
  _BOOL1 v17; // cf
  int v18; // off
  int v19; // r4
  bool v20; // zf
  unsigned int v21; // r3
  int v22; // r3
  bool v23; // cc
  int v24; // r2
  int v25; // r4
  int v26; // r4
  char v27; // r4
  bool v28; // zf
  bool v29; // zf

  v2 = 2 * HIDWORD(a1);
  v3 = 2 * HIDWORD(a2);
  v4 = 2 * HIDWORD(a1) == 2 * HIDWORD(a2);
  if ( 2 * HIDWORD(a1) == 2 * HIDWORD(a2) )
    v4 = (unsigned int)a1 == (unsigned int)a2;
  if ( !v4 )
  {
    v4 = (v2 | (unsigned int)a1) == 0;
    if ( v2 | (unsigned int)a1 )
    {
      v4 = (v3 | (unsigned int)a2) == 0;
      if ( v3 | (unsigned int)a2 )
      {
        v4 = v2 >> 21 == -1;
        if ( v2 >> 21 != -1 )
          v4 = v3 >> 21 == -1;
      }
    }
  }
  if ( v4 )
  {
    v28 = v2 >> 21 == -1;
    if ( v2 >> 21 != -1 )
      v28 = v3 >> 21 == -1;
    if ( v28 )
    {
      if ( v2 >> 21 != -1 )
        return a2;
    }
    else
    {
      v29 = v2 == v3;
      if ( v2 == v3 )
        v29 = (unsigned int)a1 == (unsigned int)a2;
      if ( v29 )
      {
        if ( HIDWORD(a1) != HIDWORD(a2) )
        {
          LODWORD(a1) = 0;
          return a1;
        }
        if ( !((unsigned int)v2 >> 21) )
        {
          LODWORD(a1) = 2 * a1;
          return a1;
        }
        if ( (unsigned int)v2 < 0xFFC00000 )
          return a1;
        goto LABEL_69;
      }
      if ( !(v2 | (unsigned int)a1) )
        LODWORD(a1) = a2;
    }
  }
  else
  {
    v5 = (unsigned int)v2 >> 21;
    v6 = __OFSUB__((unsigned int)v3 >> 21, v5);
    v8 = ((unsigned int)v3 >> 21) - v5;
    v7 = (v8 < 0) ^ v6 | (v8 == 0);
    if ( v8 < 0 != v6 )
      v8 = -v8;
    if ( !v7 )
    {
      v5 += v8;
      v9 = a1 ^ a2;
      a1 ^= v9;
      a2 = a1 ^ v9;
    }
    if ( (unsigned int)v8 <= 0x36 )
    {
      v4 = a1 >= 0;
      HIDWORD(a1) = HIDWORD(a1) & 0xFFFFF | 0x100000;
      if ( !v4 )
        a1 = -a1;
      v4 = a2 >= 0;
      HIDWORD(a2) = HIDWORD(a2) & 0xFFFFF | 0x100000;
      if ( !v4 )
        a2 = -a2;
      if ( v5 == v8 )
      {
        HIDWORD(a2) ^= 0x100000u;
        if ( v5 )
        {
          --v8;
        }
        else
        {
          HIDWORD(a1) ^= 0x100000u;
          v5 = 1;
        }
      }
      v10 = v5 - 1;
      v11 = 32 - v8;
      if ( v8 > 32 )
      {
        v15 = v8 - 32;
        v12 = HIDWORD(a2) << (v11 + 32);
        if ( (_DWORD)a2 )
          v12 |= 2u;
        LODWORD(a1) = a1 + (SHIDWORD(a2) >> v15);
        HIDWORD(a1) += (SHIDWORD(a2) >> 31) + __CFSHR__(HIDWORD(a2), 31);
        v14 = a1 < 0;
      }
      else
      {
        v12 = (_DWORD)a2 << v11;
        v13 = a1 + ((unsigned int)a2 >> v8);
        LODWORD(a1) = v13 + (HIDWORD(a2) << v11);
        HIDWORD(a1) = (SHIDWORD(a2) >> v8) + __CFSHR__(HIDWORD(a2), v8) + HIDWORD(v13);
        v14 = a1 < 0;
      }
      if ( v14 )
      {
        v17 = v12 == 0;
        v12 = -v12;
        v16 = v17;
        v17 = __CFSUB__(0, (_DWORD)a1, v17);
        LODWORD(a1) = -(a1 + !v16);
        HIDWORD(a1) = -(HIDWORD(a1) + !v17);
      }
      if ( HIDWORD(a1) >= 0x100000 )
      {
        if ( HIDWORD(a1) < 0x200000
          || (v17 = a1 & 1,
              LODWORD(a1) = a1 >> 1,
              v12 = (v12 >> 1) | (v17 << 31),
              (unsigned int)((v10 + 1) << 21) < 0xFFC00000) )
        {
LABEL_30:
          v17 = v12 >= 0x80000000;
          if ( v12 == 0x80000000 )
            v17 = a1 & 1;
          LODWORD(a1) = v17 + (_DWORD)a1;
          return a1;
        }
LABEL_69:
        LODWORD(a1) = 0;
        return a1;
      }
      v17 = __CFSHL__(v12, 1);
      v12 *= 2;
      v18 = v17 + (_DWORD)a1;
      v17 = __CFADD__(v17, (_DWORD)a1) | __CFADD__((_DWORD)a1, v18);
      LODWORD(a1) = a1 + v18;
      HIDWORD(a1) += v17 + HIDWORD(a1);
      v17 = v10 != 0;
      v19 = v10 - 1;
      if ( v17 && HIDWORD(a1) >= 0x100000 )
        goto LABEL_30;
      v20 = HIDWORD(a1) == 0;
      if ( !HIDWORD(a1) )
      {
        HIDWORD(a1) = a1;
        LODWORD(a1) = 0;
      }
      v21 = __clz(HIDWORD(a1));
      if ( v20 )
        v21 += 32;
      v22 = v21 - 11;
      v24 = v22 - 32;
      v23 = v22 <= 32;
      if ( v22 < 32 )
      {
        v23 = v24 <= -12;
        if ( v24 > -12 )
        {
          LODWORD(a1) = HIDWORD(a1) << v22;
          HIDWORD(a1) >>= 32 - v22;
LABEL_47:
          v7 = v19 < v22;
          v25 = v19 - v22;
          if ( v7 )
          {
            v26 = ~v25;
            v7 = v26 < 31;
            v27 = v26 - 31;
            if ( v7 )
              LODWORD(a1) = ((unsigned int)a1 >> (v27 + 32)) | (HIDWORD(a1) << -v27);
            else
              LODWORD(a1) = HIDWORD(a1) >> v27;
          }
          return a1;
        }
        LOBYTE(v24) = v22;
      }
      if ( v23 )
        LOBYTE(v12) = 32 - v24;
      HIDWORD(a1) <<= v24;
      if ( v23 )
      {
        HIDWORD(a1) |= (unsigned int)a1 >> v12;
        LODWORD(a1) = (_DWORD)a1 << v24;
      }
      goto LABEL_47;
    }
  }
  return a1;
}


/* Function: __floatunsidf @ 0x11BF4 */
int __fastcall _floatunsidf(int result)
{
  if ( result )
    JUMPOUT(0x11A90);
  return result;
}


/* Function: __floatsidf @ 0x11C18 */
int __fastcall _floatsidf(int result)
{
  if ( result )
    JUMPOUT(0x11A90);
  return result;
}


/* Function: __extendsfdf2 @ 0x11C40 */
int __fastcall _extendsfdf2(int a1, int a2, int a3, unsigned int a4)
{
  bool v4; // zf
  int v5; // r2
  int result; // r0

  v5 = 2 * a1;
  v4 = 2 * a1 == 0;
  result = a1 << 29;
  if ( v4 || (a4 = v5 & 0xFF000000, (v5 & 0xFF000000) == 0) || a4 == 0xFF000000 )
  {
    if ( (v5 & 0xFFFFFF) != 0 && a4 != 0xFF000000 )
      JUMPOUT(0x11A90);
  }
  return result;
}


/* Function: __floatundidf @ 0x11C88 */
int __fastcall _floatundidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x11CB8);
  return a1;
}


/* Function: __floatdidf @ 0x11C9C */
int __fastcall _floatdidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x11A34);
  return a1;
}


/* Function: __aeabi_frsub @ 0x11CFC */
float __fastcall _aeabi_frsub(int a1, float a2)
{
  return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x11D04 */
float __fastcall _subsf3(float a1, int a2)
{
  return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}


/* Function: __aeabi_fadd @ 0x11D08 */
int __fastcall _aeabi_fadd(int result, int a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // r2
  int v6; // r2
  bool v7; // vf
  int v8; // r3
  int v9; // r1
  int v10; // r0
  int v11; // r1
  signed int v12; // r2
  unsigned int v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r3
  bool v16; // cf
  int v17; // r0
  signed int v18; // r12
  bool v19; // cc
  int v20; // r2
  unsigned int v21; // r0
  int v22; // r3
  bool v23; // zf
  bool v24; // zf
  int v25; // r2
  bool v26; // zf

  v5 = 2 * result;
  v4 = 2 * result == 0;
  if ( 2 * result )
  {
    a4 = 2 * a2;
    v4 = 2 * a2 == 0;
  }
  if ( !v4 )
  {
    v4 = v5 == a4;
    if ( v5 != a4 )
    {
      v4 = v5 >> 24 == -1;
      if ( v5 >> 24 != -1 )
        v4 = a4 >> 24 == -1;
    }
  }
  if ( v4 )
  {
    v22 = 2 * a2;
    v23 = v5 >> 24 == -1;
    if ( v5 >> 24 != -1 )
      v23 = v22 >> 24 == -1;
    if ( v23 )
    {
      v25 = ~(v5 >> 24);
      v24 = v25 == 0;
      if ( v25 )
        result = a2;
      else
        v24 = v22 >> 24 == -1;
      if ( !v24 )
        a2 = result;
      v26 = result << 9 == 0;
      if ( !(result << 9) )
        v26 = a2 << 9 == 0;
      if ( v26 )
        v26 = result == a2;
      if ( !v26 )
        return result | 0x400000;
    }
    else if ( v5 != v22 )
    {
      if ( !v5 )
        return a2;
    }
    else
    {
      if ( result != a2 )
        return 0;
      if ( (v5 & 0xFF000000) != 0 )
      {
        if ( (unsigned int)v5 < 0xFE000000 )
        {
          result += 0x800000;
          return result;
        }
        v15 = result & 0x80000000;
        return v15 | 0x7F800000;
      }
      v16 = __CFSHL__(result, 1);
      result *= 2;
      if ( v16 )
        return result | 0x80000000;
    }
  }
  else
  {
    v6 = HIBYTE(v5);
    v7 = __OFSUB__(HIBYTE(a4), v6);
    v8 = HIBYTE(a4) - v6;
    if ( !((v8 < 0) ^ v7 | (v8 == 0)) )
    {
      v6 += v8;
      v9 = result ^ a2;
      result ^= v9;
      a2 = result ^ v9;
    }
    if ( v8 < 0 != v7 )
      v8 = -v8;
    if ( (unsigned int)v8 <= 0x19 )
    {
      v4 = result >= 0;
      v10 = result & 0x7FFFFF | 0x800000;
      if ( !v4 )
        v10 = -v10;
      v4 = a2 >= 0;
      v11 = a2 & 0x7FFFFF | 0x800000;
      if ( !v4 )
        v11 = -v11;
      if ( v6 == v8 )
      {
        v11 ^= 0x800000u;
        if ( v6 )
        {
          LOBYTE(v8) = v8 - 1;
        }
        else
        {
          v10 ^= 0x800000u;
          v6 = 1;
        }
      }
      v12 = v6 - 1;
      v13 = v10 + (v11 >> v8);
      v14 = v11 << (32 - v8);
      v15 = v13 & 0x80000000;
      if ( (v13 & 0x80000000) != 0 )
      {
        v16 = v14 == 0;
        v14 = -v14;
        v13 = -(v13 + !v16);
      }
      if ( v13 >= 0x800000 )
      {
        if ( v13 < 0x1000000 )
          goto LABEL_23;
        v16 = v13 & 1;
        v13 >>= 1;
        v14 = (v14 >> 1) | (v16 << 31);
        if ( (unsigned int)++v12 < 0xFE )
          goto LABEL_23;
        return v15 | 0x7F800000;
      }
      v16 = __CFSHL__(v14, 1);
      v14 *= 2;
      v13 += v16 + v13;
      v16 = v12-- != 0;
      if ( v16 && v13 >= 0x800000 )
      {
LABEL_23:
        v17 = (v12 << 23) + (v14 >= 0x80000000) + v13;
        if ( v14 == 0x80000000 )
          v17 &= ~1u;
        return v17 | v15;
      }
      v18 = __clz(v13) - 8;
      v19 = v12 < v18;
      v20 = v12 - v18;
      v21 = v13 << v18;
      if ( v19 )
        v20 = -v20;
      else
        v21 += v20 << 23;
      if ( v19 )
        return v15 | (v21 >> v20);
      else
        return v21 | v15;
    }
  }
  return result;
}


/* Function: __floatunsisf @ 0x11E98 */
void _floatunsisf()
{
  JUMPOUT(0x11EA8);
}


/* Function: __floatsisf @ 0x11EA0 */
int __fastcall _floatsisf(int result)
{
  if ( result < 0 )
    result = -result;
  if ( result )
    JUMPOUT(0x11F00);
  return result;
}


/* Function: __floatundisf @ 0x11EC0 */
int __fastcall _floatundisf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x11EE8);
  return a1;
}


/* Function: __floatdisf @ 0x11ED0 */
int __fastcall _floatdisf(__int64 a1)
{
  unsigned int v1; // r3
  bool v2; // zf
  unsigned int v3; // r12
  int v4; // r3
  signed int v5; // r2
  bool v6; // cc
  int v7; // r2
  int v8; // r3
  int v9; // r12
  char v10; // r2

  if ( a1 )
  {
    v1 = HIDWORD(a1) & 0x80000000;
    if ( a1 < 0 )
      a1 = -a1;
    v3 = HIDWORD(a1);
    v2 = HIDWORD(a1) == 0;
    if ( !HIDWORD(a1) )
    {
      v3 = a1;
      HIDWORD(a1) = a1;
      LODWORD(a1) = 0;
    }
    v4 = v1 | 0x5B000000;
    if ( v2 )
      v4 -= 0x10000000;
    v5 = __clz(v3);
    v6 = v5 < 8;
    v7 = v5 - 8;
    v8 = v4 - 0x800000 - (v7 << 23);
    if ( v6 )
    {
      v10 = v7 + 32;
      v2 = ((unsigned int)a1 | (2 * (HIDWORD(a1) << v10))) == 0;
      LODWORD(a1) = (HIDWORD(a1) >> (32 - v10)) + __CFSHL__(HIDWORD(a1) << v10, 1) + v8;
      if ( v2 )
        LODWORD(a1) = a1 & ~(HIDWORD(a1) << v10 >> 31);
    }
    else
    {
      v9 = (_DWORD)a1 << v7;
      LODWORD(a1) = ((unsigned int)a1 >> (32 - v7)) + ((_DWORD)a1 << v7 >= 0x80000000) + v8 + (HIDWORD(a1) << v7);
      if ( v9 == 0x80000000 )
        LODWORD(a1) = a1 & 0xFFFFFFFE;
    }
  }
  return a1;
}


/* Function: __fixsfsi @ 0x11F4C */
unsigned int __fastcall _fixsfsi(int a1)
{
  unsigned int v1; // r2
  bool v2; // cf
  int v3; // r2
  bool v4; // zf
  unsigned int result; // r0

  v1 = 2 * a1;
  if ( (unsigned int)(2 * a1) < 0x7F000000 )
    return 0;
  v2 = HIBYTE(v1) <= 0x9Eu;
  v3 = 158 - HIBYTE(v1);
  if ( v3 != 0 && v2 )
  {
    v4 = a1 >= 0;
    result = ((a1 << 8) | 0x80000000) >> v3;
    if ( !v4 )
      return -result;
  }
  else if ( v3 == -97 && a1 << 9 )
  {
    return 0;
  }
  else
  {
    result = a1 & 0x80000000;
    if ( !result )
      return 0x7FFFFFFF;
  }
  return result;
}


/* Function: .term_proc @ 0x11FA8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_puts @ 0x2303C */

/* FAILED to decompile: __imp___printf_chk @ 0x23040 */

/* FAILED to decompile: __imp_abort @ 0x23044 */

/* FAILED to decompile: __imp___libc_start_main @ 0x23048 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x2304C */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23050 */

/* Total functions decompiled: 83, failed: 6 */
