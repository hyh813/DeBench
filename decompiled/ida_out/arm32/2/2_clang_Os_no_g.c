/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/2/2_clang_Os_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x3EC */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_3F8 @ 0x3F8 */
void sub_3F8()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x460 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_49C + 19174), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x4A4 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x4C8 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x50C */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x55C */
char *_do_global_dtors_aux()
{
  char *result; // r0

  if ( !_bss_start )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x5C4 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: process_char @ 0x5C8 */
int __fastcall process_char(int result)
{
  if ( (unsigned __int8)(result - 65) < 0x1Au )
    LOBYTE(result) = result + 32;
  return (unsigned __int8)result;
}


/* Function: process_short @ 0x5E0 */
int __fastcall process_short(__int16 a1, __int16 a2)
{
  return (__int16)(a2 + a1);
}


/* Function: process_int @ 0x5F0 */
int __fastcall process_int(int a1)
{
  return (2 * a1) | 1;
}


/* Function: process_long @ 0x5FC */
int __fastcall process_long(int a1)
{
  return 2 * a1;
}


/* Function: process_ll @ 0x604 */
__int64 __fastcall process_ll(__int64 a1)
{
  return a1 * a1;
}


/* Function: process_float @ 0x61C */
float __fastcall process_float(float a1)
{
  return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x638 */
double __fastcall process_double(double a1)
{
  return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x668 */
double __fastcall process_ld(double a1)
{
  return a1 * a1 + 1.0;
}


/* Function: process_bool @ 0x690 */
bool __fastcall process_bool(int a1)
{
  return a1 > 0 && (a1 & 1) == 0;
}


/* Function: const_param @ 0x6B0 */
int __fastcall const_param(_DWORD *a1)
{
  return *a1 + 10;
}


/* Function: volatile_access @ 0x6BC */
int __fastcall volatile_access(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: test_data_types_l1 @ 0x6CC */
int test_data_types_l1()
{
  puts(asc_2453);
  printf("DT-L1-01 (process_char): %c\n", 97);
  printf("DT-L1-01 (process_char): %c\n", 98);
  printf("DT-L1-02 (process_short): %d\n", 300);
  printf("DT-L1-03 (process_int): %d\n", 11);
  printf("DT-L1-04 (process_long): %ld\n", 200);
  printf("DT-L1-05 (process_ll): %lld\n", 10000LL);
  printf("DT-L1-06 (process_float): %.2f\n", 3.5);
  printf("DT-L1-07 (process_double): %.2f\n", 2.1);
  printf("DT-L1-08 (process_ld): %.2Lf\n", 10.0);
  printf("DT-L1-09 (process_bool): %d\n", 1);
  printf("DT-L1-09 (process_bool): %d\n", 0);
  printf("DT-L1-09 (process_bool): %d\n", 0);
  printf("DT-L1-10 (const_param): %d\n", 15);
  return printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x828 */
int __fastcall array_1d_stack(int *a1, int a2)
{
  int result; // r0
  int v4; // t1

  if ( a2 < 1 )
    return 0;
  result = 0;
  do
  {
    v4 = *a1++;
    --a2;
    result += v4;
  }
  while ( a2 );
  return result;
}


/* Function: array_string @ 0x854 */
int __fastcall array_string(int a1)
{
  int v1; // r1

  v1 = 0;
  while ( *(unsigned __int8 *)(a1 + v1++) )
    ;
  return v1 - 1;
}


/* Function: array_2d_stack @ 0x870 */
int __fastcall array_2d_stack(int a1)
{
  int v1; // r2
  int v2; // r1
  int v3; // r3

  v1 = 0;
  v2 = 0;
  do
  {
    v3 = *(_DWORD *)(a1 + v1);
    v1 += 44;
    v2 += v3;
  }
  while ( v1 != 440 );
  return v2;
}


/* Function: array_3d @ 0x894 */
int __fastcall array_3d(int a1)
{
  int v1; // r12
  int v2; // r1
  int v3; // r3
  int i; // lr
  int j; // r2
  int v6; // r4

  v1 = 0;
  v2 = 0;
  do
  {
    v3 = a1;
    for ( i = 0; i != 5; ++i )
    {
      for ( j = 0; j != -5; --j )
      {
        v6 = *(_DWORD *)(v3 - 4 * j);
        v2 += v6;
      }
      v3 += 20;
    }
    ++v1;
    a1 += 100;
  }
  while ( v1 != 5 );
  return v2;
}


/* Function: array_vla @ 0x8EC */
int __fastcall array_vla(int a1, int *a2)
{
  int v2; // r2
  int result; // r0
  int v4; // t1

  if ( a1 < 1 )
    return 0;
  v2 = a1;
  result = 0;
  do
  {
    v4 = *a2++;
    --v2;
    result += v4;
  }
  while ( v2 );
  return result;
}


/* Function: array_pointer @ 0x918 */
int __fastcall array_pointer(int *a1, int a2)
{
  int result; // r0
  int v4; // t1

  if ( a2 < 1 )
    return 0;
  result = 0;
  do
  {
    v4 = *a1;
    a1 += 10;
    --a2;
    result += v4;
  }
  while ( a2 );
  return result;
}


/* Function: pointer_array @ 0x944 */
int __fastcall pointer_array(_DWORD **a1, int a2)
{
  int v2; // r2
  _DWORD *v3; // r3

  if ( a2 < 1 )
    return 0;
  v2 = 0;
  if ( (unsigned int)a2 >= 0xA )
    a2 = 10;
  do
  {
    v3 = *a1++;
    if ( v3 )
      v2 += *v3;
    --a2;
  }
  while ( a2 );
  return v2;
}


/* Function: array_complex_index @ 0x984 */
int __fastcall array_complex_index(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  bool v7; // cc

  result = -1;
  if ( a4 >= 0 )
  {
    v7 = a5 < a3;
    if ( a5 < a3 )
      v7 = a4 < a2;
    if ( v7 && a5 >= 0 )
      return *(_DWORD *)(a1 + 4 * (a4 + a5 * a2));
  }
  return result;
}


/* Function: array_oob @ 0x9BC */
int __fastcall array_oob(int *a1, int a2)
{
  int v2; // r2
  int v3; // r1
  int v4; // t1

  if ( a2 < 0 )
    return 0;
  v2 = a2 + 1;
  v3 = 0;
  do
  {
    v4 = *a1++;
    --v2;
    v3 += v4;
  }
  while ( v2 );
  return v3;
}


/* Function: test_array_types @ 0x9EC */
int test_array_types()
{
  int v0; // r0
  _BYTE *v1; // r1
  int i; // r2
  int v3; // r3
  int v4; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r0
  _BYTE *v8; // r1
  _BYTE *v9; // r3
  int j; // r5
  int k; // r4
  int v12; // r12
  _BYTE *v13; // r2
  int v14; // r1
  _BYTE *v15; // r3
  int m; // r4
  int n; // r5
  int v18; // r0
  int ii; // r1
  int v20; // r2
  int v21; // r1
  int v22; // r3
  _DWORD *v23; // r5
  int v24; // r4
  int v25; // r1
  int jj; // r0
  _DWORD v28[21]; // [sp+0h] [bp-4E8h]
  _DWORD v29[9]; // [sp+54h] [bp-494h] BYREF
  int v30; // [sp+78h] [bp-470h] BYREF
  int v31; // [sp+7Ch] [bp-46Ch] BYREF
  _DWORD v32[51]; // [sp+80h] [bp-468h] BYREF
  _BYTE v33[500]; // [sp+14Ch] [bp-39Ch] BYREF
  _BYTE v34[424]; // [sp+340h] [bp-1A8h] BYREF

  puts(asc_2474);
  printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
  printf("ARR-L1-02 (array_string): %d\n", 5);
  v0 = 0;
  v1 = v34;
  do
  {
    for ( i = 0; i != 10; ++i )
    {
      v3 = 0;
      if ( v0 == i )
        v3 = v0;
      *(_DWORD *)&v1[4 * i] = v3;
    }
    ++v0;
    v1 += 40;
  }
  while ( v0 != 10 );
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = *(_DWORD *)&v34[v4];
    v4 += 44;
    v5 += v6;
  }
  while ( v4 != 440 );
  printf("ARR-L1-03 (array_2d_stack): %d\n", v5);
  v7 = 0;
  v8 = v33;
  do
  {
    v9 = v8;
    for ( j = 0; j != 5; ++j )
    {
      for ( k = 0; k != -5; --k )
        *(_DWORD *)&v9[-4 * k] = 1;
      v9 += 20;
    }
    ++v7;
    v8 += 100;
  }
  while ( v7 != 5 );
  v12 = 0;
  v13 = v33;
  v14 = 0;
  do
  {
    v15 = v13;
    for ( m = 0; m != 5; ++m )
    {
      for ( n = 0; n != -5; --n )
      {
        v18 = *(_DWORD *)&v15[-4 * n];
        v14 += v18;
      }
      v15 += 20;
    }
    ++v12;
    v13 += 100;
  }
  while ( v12 != 5 );
  printf("ARR-L1-04 (array_3d): %d\n", v14);
  printf("ARR-L2-01 (array_vla): %d\n", 60);
  for ( ii = 0; ii != 50; ii += 10 )
    v32[ii + 1] = ii;
  v20 = 0;
  v21 = 0;
  do
  {
    v22 = v32[v20 + 1];
    v20 += 10;
    v21 += v22;
  }
  while ( v20 != 50 );
  printf("ARR-L2-02 (array_pointer): %d\n", v21);
  v23 = v32;
  v24 = 0;
  v32[0] = 10;
  v28[20] = v32;
  v31 = 20;
  v30 = 30;
  v29[1] = &v30;
  v29[0] = &v31;
  memset(&v29[2], 0, 0x1Cu);
  v25 = 0;
  while ( 1 )
  {
    if ( v23 )
      v25 += *v23;
    if ( v24 == 2 )
      break;
    v23 = (_DWORD *)v29[v24++];
  }
  printf("ARR-L2-03 (pointer_array): %d\n", v25);
  for ( jj = 0; jj != 20; ++jj )
    v28[jj] = jj;
  return printf("ARR-L2-04 (array_complex_index): %d\n", v28[17]);
}


/* Function: ptr_single @ 0xC48 */
int __fastcall ptr_single(_DWORD *a1)
{
  return *a1 + 10;
}


/* Function: ptr_double @ 0xC54 */
int __fastcall ptr_double(_DWORD **a1)
{
  return **a1 + 5;
}


/* Function: ptr_triple @ 0xC64 */
int __fastcall ptr_triple(_DWORD ***a1)
{
  return ***a1 + 1;
}


/* Function: ptr_increment @ 0xC78 */
int __fastcall ptr_increment(int *a1, int a2)
{
  int result; // r0
  int v4; // t1

  if ( a2 < 1 )
    return 0;
  result = 0;
  do
  {
    v4 = *a1++;
    --a2;
    result += v4;
  }
  while ( a2 );
  return result;
}


/* Function: ptr_offset @ 0xCA4 */
int __fastcall ptr_offset(int a1, int a2)
{
  return *(_DWORD *)(a1 + 4 * a2);
}


/* Function: ptr_diff @ 0xCAC */
int __fastcall ptr_diff(int a1, int a2)
{
  return (a1 - a2) >> 2;
}


/* Function: ptr_void @ 0xCB8 */
int __fastcall ptr_void(unsigned __int8 *a1, int a2)
{
  int result; // r0

  if ( a2 == 1 )
    return *a1;
  result = -1;
  if ( !a2 )
    return *(_DWORD *)a1;
  return result;
}


/* Function: ptr_const @ 0xCE0 */
int __fastcall ptr_const(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: ptr_const_ptr @ 0xCEC */
int __fastcall ptr_const_ptr(int *a1)
{
  int v1; // r1

  v1 = *a1 + 5;
  *a1 = v1;
  return v1;
}


/* Function: ptr_func_simple @ 0xD00 */
int __fastcall ptr_func_simple(int (__fastcall *a1)(int), int a2)
{
  return a1(a2);
}


/* Function: ptr_func_complex @ 0xD0C */
int __fastcall ptr_func_complex(int (__fastcall *a1)(int, _DWORD *), int a2)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v3[0] = "test";
  v3[1] = &dword_0;
  return a1(a2, v3);
}


/* Function: ptr_cast @ 0xD5C */
int __fastcall ptr_cast(int a1)
{
  return *(_DWORD *)a1;
}


/* Function: opaque_handle_create @ 0xD64 */
void opaque_handle_create()
{
  ;
}


/* Function: opaque_handle_op @ 0xD68 */
int __fastcall opaque_handle_op(int a1)
{
  return 2 * a1;
}


/* Function: test_pointer_types @ 0xD70 */
int test_pointer_types()
{
  int v0; // r1
  int i; // r2
  int v2; // r3
  _DWORD v4[8]; // [sp+8h] [bp-20h]

  puts(asc_248F);
  printf("PTR-L2-01 (ptr_single): %d\n", 15);
  printf("PTR-L2-02 (ptr_double): %d\n", 15);
  printf("PTR-L2-03 (ptr_triple): %d\n", 6);
  v4[0] = 2;
  v4[1] = 3;
  v4[2] = 4;
  v4[3] = 5;
  v0 = 1;
  for ( i = 0; i != 4; ++i )
  {
    v2 = v4[i];
    v0 += v2;
  }
  printf("PTR-L2-04 (ptr_increment): %d\n", v0);
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


/* Function: struct_simple @ 0xEE0 */
int __fastcall struct_simple(_DWORD *a1)
{
  return a1[1] + *a1 + a1[2];
}


/* Function: struct_array @ 0xEF4 */
int __fastcall struct_array(int a1, int a2)
{
  int v2; // r2
  int result; // r0
  _DWORD *v4; // lr

  if ( a2 < 1 )
    return 0;
  v2 = a1 + 4;
  result = 0;
  do
  {
    v4 = (_DWORD *)(v2 - 4);
    v2 += 12;
    --a2;
    result += *v4 + v4[1] + v4[2];
  }
  while ( a2 );
  return result;
}


/* Function: struct_nested @ 0xF38 */
int __fastcall struct_nested(_DWORD *a1)
{
  return a1[3] + *a1;
}


/* Function: struct_deep @ 0xF48 */
int __fastcall struct_deep(int a1)
{
  return *(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8);
}


/* Function: struct_with_ptr @ 0xF58 */
int __fastcall struct_with_ptr(int *a1)
{
  int v1; // r1
  int *v2; // r0
  int v3; // r0

  v1 = *a1;
  v2 = (int *)a1[1];
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  return v3 + v1;
}


/* Function: struct_bitfields @ 0xF74 */
int __fastcall struct_bitfields(_WORD *a1)
{
  return (*a1 & 1)
       + ((unsigned __int16)*a1 >> 6)
       + (((unsigned __int16)*a1 >> 1) & 3)
       + (((unsigned __int16)*a1 >> 3) & 7);
}


/* Function: union_type @ 0xF9C */
float __fastcall union_type(unsigned __int8 *a1, int a2)
{
  float result; // r0

  if ( a2 == 1 )
  {
    LODWORD(result) = (int)*(float *)a1;
  }
  else if ( a2 )
  {
    LODWORD(result) = *a1;
  }
  else
  {
    return *(float *)a1;
  }
  return result;
}


/* Function: union_array @ 0xFC8 */
int __fastcall union_array(int *a1, int a2)
{
  int result; // r0
  int v4; // t1

  if ( a2 < 1 )
    return 0;
  result = 0;
  do
  {
    v4 = *a1++;
    --a2;
    result += v4;
  }
  while ( a2 );
  return result;
}


/* Function: enum_type @ 0xFF4 */
int __fastcall enum_type(int a1)
{
  return 10 * a1;
}


/* Function: enum_switch @ 0x1000 */
int __fastcall enum_switch(unsigned int a1)
{
  int result; // r0

  result = -99;
  if ( a1 <= 3 )
    return dword_24F8[a1];
  return result;
}


/* Function: struct_func_ptr @ 0x1020 */
int __fastcall struct_func_ptr(int a1)
{
  return (*(int (__fastcall **)(_DWORD))(a1 + 4))(*(_DWORD *)a1);
}


/* Function: linked_list @ 0x102C */
int __fastcall linked_list(int *a1)
{
  int result; // r0
  int *v2; // r1
  int v3; // r2

  if ( !a1 )
    return 0;
  v2 = a1;
  result = 0;
  do
  {
    v3 = *v2;
    v2 = (int *)v2[1];
    result += v3;
  }
  while ( v2 );
  return result;
}


/* Function: doubly_linked_list @ 0x1058 */
int __fastcall doubly_linked_list(int *a1)
{
  int result; // r0
  int *v2; // r1
  int v3; // r2

  if ( !a1 )
    return 0;
  v2 = a1;
  result = 0;
  do
  {
    v3 = *v2;
    v2 = (int *)v2[1];
    result += v3;
  }
  while ( v2 );
  return result;
}


/* Function: binary_tree_sum @ 0x1084 */
int __fastcall binary_tree_sum(_DWORD *a1)
{
  _DWORD *v1; // r4
  int result; // r0
  int v3; // r5
  int v4; // r0

  if ( !a1 )
    return 0;
  v1 = a1;
  result = 0;
  do
  {
    v3 = *v1 + result;
    v4 = binary_tree_sum(v1[1]);
    v1 = (_DWORD *)v1[2];
    result = v3 + v4;
  }
  while ( v1 );
  return result;
}


/* Function: binary_tree @ 0x10CC */
// attributes: thunk
int __fastcall binary_tree(_DWORD *a1)
{
  return binary_tree_sum(a1);
}


/* Function: graph_traverse @ 0x10D0 */
int __fastcall graph_traverse(int a1)
{
  int v1; // r12
  int v2; // lr
  int v3; // r1
  int *v4; // r2
  int v5; // r3

  v1 = *(_DWORD *)(a1 + 40);
  if ( v1 < 1 )
    return 0;
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = *(int **)(a1 + 4 * v2);
    while ( v4 )
    {
      v5 = *v4;
      v4 = (int *)v4[1];
      v3 += v5;
    }
    ++v2;
  }
  while ( v2 != v1 );
  return v3;
}


/* Function: test_composite_types @ 0x1124 */
int test_composite_types()
{
  int v0; // r1
  int *v1; // r0
  int v2; // r2
  int *v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r0
  int v7; // r5
  int v8; // r1
  int *v9; // r0
  int v10; // r2
  _DWORD v12[11]; // [sp+4h] [bp-84h] BYREF
  _DWORD v13[3]; // [sp+30h] [bp-58h] BYREF
  _DWORD v14[3]; // [sp+3Ch] [bp-4Ch] BYREF
  _DWORD v15[3]; // [sp+48h] [bp-40h] BYREF
  _DWORD v16[3]; // [sp+54h] [bp-34h] BYREF
  _DWORD v17[2]; // [sp+60h] [bp-28h] BYREF
  _DWORD v18[2]; // [sp+68h] [bp-20h] BYREF
  _DWORD v19[6]; // [sp+70h] [bp-18h] BYREF

  puts(asc_24AA);
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
  v0 = 0;
  v17[0] = 10;
  v19[0] = 30;
  v1 = v17;
  v19[1] = 0;
  v18[1] = v19;
  v18[0] = 20;
  v17[1] = v18;
  do
  {
    v2 = *v1;
    v1 = (int *)v1[1];
    v0 += v2;
  }
  while ( v1 );
  printf("CMP-L2-12 (linked_list): %d\n", v0);
  v3 = v15;
  v4 = 0;
  v16[0] = 20;
  v16[2] = v15;
  v16[1] = 0;
  v15[2] = 0;
  v15[0] = 10;
  v15[1] = v16;
  do
  {
    v5 = *v3;
    v3 = (int *)v3[1];
    v4 += v5;
  }
  while ( v3 );
  printf("CMP-L2-13 (doubly_linked_list): %d\n", v4);
  v14[0] = &dword_64;
  v14[1] = 0;
  v14[2] = 0;
  v6 = binary_tree_sum(v14);
  printf("CMP-L2-14 (binary_tree): %d\n", v6);
  v7 = 0;
  v13[1] = 0;
  v13[0] = 1;
  memset(&v12[1], 0, 0x24u);
  v8 = 0;
  v12[0] = v13;
  do
  {
    v9 = (int *)v12[v7];
    while ( v9 )
    {
      v10 = *v9;
      v9 = (int *)v9[1];
      v8 += v10;
    }
    ++v7;
  }
  while ( v7 != 2 );
  return printf("CMP-L2-15 (graph_traverse): %d\n", v8);
}


/* Function: main @ 0x1394 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}


/* Function: __muldf3 @ 0x13B4 */
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
    a1 = sub_1594();
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
    JUMPOUT(0x1600);
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


/* Function: sub_1594 @ 0x1594 */
int __fastcall sub_1594(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
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


/* Function: __mulsf3 @ 0x1620 */
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


/* Function: __aeabi_drsub @ 0x17B8 */
double __fastcall _aeabi_drsub(double a1, double a2)
{
  HIDWORD(a1) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __subdf3 @ 0x17C0 */
double __fastcall _subdf3(double a1, double a2)
{
  HIDWORD(a2) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __aeabi_dadd @ 0x17C4 */
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


/* Function: __floatunsidf @ 0x1A70 */
int __fastcall _floatunsidf(int result)
{
  if ( result )
    JUMPOUT(0x190C);
  return result;
}


/* Function: __floatsidf @ 0x1A94 */
int __fastcall _floatsidf(int result)
{
  if ( result )
    JUMPOUT(0x190C);
  return result;
}


/* Function: __extendsfdf2 @ 0x1ABC */
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
      JUMPOUT(0x190C);
  }
  return result;
}


/* Function: __floatundidf @ 0x1B04 */
int __fastcall _floatundidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x1B34);
  return a1;
}


/* Function: __floatdidf @ 0x1B18 */
int __fastcall _floatdidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x18B0);
  return a1;
}


/* Function: __aeabi_frsub @ 0x1B78 */
float __fastcall _aeabi_frsub(int a1, float a2)
{
  return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x1B80 */
float __fastcall _subsf3(float a1, int a2)
{
  return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}


/* Function: __aeabi_fadd @ 0x1B84 */
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


/* Function: __floatunsisf @ 0x1D14 */
void _floatunsisf()
{
  JUMPOUT(0x1D24);
}


/* Function: __floatsisf @ 0x1D1C */
int __fastcall _floatsisf(int result)
{
  if ( result < 0 )
    result = -result;
  if ( result )
    JUMPOUT(0x1D7C);
  return result;
}


/* Function: __floatundisf @ 0x1D3C */
int __fastcall _floatundisf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x1D64);
  return a1;
}


/* Function: __floatdisf @ 0x1D4C */
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


/* Function: __fixsfsi @ 0x1DC8 */
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


/* Function: .term_proc @ 0x1E24 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x13084 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x13088 */

/* FAILED to decompile: __imp_printf @ 0x1308C */

/* FAILED to decompile: __imp_puts @ 0x13090 */

/* FAILED to decompile: __imp_memset @ 0x13094 */

/* FAILED to decompile: __imp_abort @ 0x13098 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x130A0 */

/* Total functions decompiled: 83, failed: 7 */
