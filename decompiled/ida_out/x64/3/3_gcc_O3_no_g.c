/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/3/3_gcc_O3_no_g
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


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
  sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
  sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
  sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
  sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
  sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
  sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
  sub_1020();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
  sub_1020();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
  sub_1020();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
  sub_1020();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
  sub_1020();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
  sub_1020();
}


/* Function: main @ 0x1220 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_stack_memory(argc, argv, envp);
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}


/* Function: _start @ 0x1250 */
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


/* Function: deregister_tm_clones @ 0x1280 */
char *deregister_tm_clones()
{
  return &completed_0;
}


/* Function: register_tm_clones @ 0x12B0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x12F0 */
char *_do_global_dtors_aux()
{
  char *result; // rax

  if ( !completed_0 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x1330 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: double_value @ 0x1340 */
__int64 __fastcall double_value(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: alloca_usage.constprop.0 @ 0x1350 */
__int64 alloca_usage_constprop_0()
{
  return 15;
}


/* Function: local_vars @ 0x1360 */
__int64 __fastcall local_vars(int a1)
{
  return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0x1370 */
__int64 __fastcall local_array(unsigned int a1)
{
  return (unsigned int)_mm_cvtsi128_si32(
                         _mm_mul_epu32(
                           _mm_srli_epi64(_mm_shuffle_epi32(_mm_cvtsi32_si128(a1), 0), 0x20u),
                           _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_3710), 0x20u)));
}


/* Function: local_struct @ 0x13A0 */
__int64 __fastcall local_struct(int a1)
{
  return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0x13B0 */
__int64 __fastcall address_of_local(_DWORD *a1)
{
  *a1 = 42;
  return 42;
}


/* Function: address_of_array @ 0x13C0 */
__int64 __fastcall address_of_array(_DWORD *a1)
{
  return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0x13D0 */
__int64 large_stack_frame()
{
  __m128i si128; // xmm3
  __m128i v1; // xmm9
  __m128i *v2; // rax
  __m128i v3; // xmm7
  __m128i v4; // xmm8
  __m128i v5; // xmm6
  __m128i v6; // xmm5
  __m128i v7; // xmm2
  __m128i v8; // xmm4
  __m128i v9; // xmm0
  __m128i v10; // xmm4
  __m128i v11; // xmm1
  __m128i v12; // xmm4
  __m128i v13; // xmm0
  __m128i v14; // xmm2
  __m128i v15; // xmm1
  __m128i v16; // xmm4
  __m128i v17; // xmm0
  __m128i v18; // xmm4
  _BYTE v20[2048]; // [rsp+0h] [rbp-818h] BYREF
  char v21; // [rsp+800h] [rbp-18h] BYREF
  unsigned __int64 v22; // [rsp+808h] [rbp-10h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
  v1 = _mm_load_si128((const __m128i *)&xmmword_3730);
  v22 = __readfsqword(0x28u);
  v2 = (__m128i *)v20;
  v3 = _mm_load_si128((const __m128i *)&xmmword_3750);
  v4 = _mm_load_si128((const __m128i *)&xmmword_3740);
  v5 = _mm_load_si128((const __m128i *)&xmmword_3760);
  v6 = _mm_load_si128((const __m128i *)&xmmword_3770);
  do
  {
    v7 = si128;
    ++v2;
    si128 = _mm_add_epi32(si128, v1);
    v8 = _mm_add_epi32(v7, v4);
    v9 = _mm_unpackhi_epi16(v7, v8);
    v10 = _mm_unpacklo_epi16(v7, v8);
    v11 = _mm_unpacklo_epi16(v10, v9);
    v12 = _mm_unpackhi_epi16(v10, v9);
    v13 = v7;
    v14 = _mm_add_epi32(v7, v5);
    v15 = _mm_unpacklo_epi16(v11, v12);
    v16 = _mm_add_epi32(v13, v3);
    v17 = _mm_unpacklo_epi16(v16, v14);
    v18 = _mm_unpackhi_epi16(v16, v14);
    v2[-1] = _mm_packus_epi16(
               _mm_and_si128(v15, v6),
               _mm_and_si128(_mm_unpacklo_epi16(_mm_unpacklo_epi16(v17, v18), _mm_unpackhi_epi16(v17, v18)), v6));
  }
  while ( &v21 != (char *)v2 );
  return v20[1024];
}


/* Function: vla_stack @ 0x14D0 */
__int64 __fastcall vla_stack(int a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  _DWORD *v4; // rsi
  __int16 v5; // cx
  signed __int64 v6; // rcx
  void *v7; // rsp
  __m128i si128; // xmm1
  __m128i v9; // xmm2
  __m128i *v10; // rax
  __m128i v11; // xmm0
  unsigned int v12; // eax
  int v13; // ecx
  _DWORD *v14; // rdi
  _DWORD v17[1022]; // [rsp+8h] [rbp-1010h] BYREF
  _QWORD v18[2]; // [rsp+1008h] [rbp-10h] BYREF

  v2 = a1 - 1;
  v18[1] = __readfsqword(0x28u);
  if ( v2 <= 0x3E7 )
  {
    v3 = 4LL * a1 + 15;
    v4 = (_DWORD *)((char *)v18 - (v3 & 0xFFFFFFFFFFFFF000LL));
    v5 = v3 & 0xFFF0;
    if ( v18 != (_QWORD *)v4 )
    {
      while ( v17 != v4 )
        ;
    }
    v6 = v5 & 0xFFF;
    v7 = alloca(v6);
    if ( v6 )
      *(_QWORD *)((char *)&v17[-2] + v6) = *(_QWORD *)((char *)&v17[-2] + v6);
    if ( v2 <= 2 )
    {
      v12 = 0;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
      v9 = _mm_load_si128((const __m128i *)&xmmword_3740);
      v10 = (__m128i *)v17;
      do
      {
        v11 = si128;
        ++v10;
        si128 = _mm_add_epi32(si128, v9);
        v10[-1] = _mm_slli_epi32(v11, 1u);
      }
      while ( v10 != (__m128i *)&v17[4 * ((unsigned int)a1 >> 2)] );
      v12 = a1 & 0xFFFFFFFC;
      if ( (a1 & 3) == 0 )
        return (unsigned int)v17[a1 >> 1];
    }
    v13 = 2 * v12;
    v14 = &v17[v12];
    *v14 = 2 * v12;
    if ( a1 > (int)(v12 + 1) )
    {
      v14[1] = v13 + 2;
      if ( a1 > (int)(v12 + 2) )
        v14[2] = v13 + 4;
    }
    return (unsigned int)v17[a1 >> 1];
  }
  return 0xFFFFFFFFLL;
}


/* Function: alloca_usage @ 0x1600 */
__int64 __fastcall alloca_usage(int a1)
{
  __int64 v1; // rcx
  __int64 *v2; // rsi
  __int16 v3; // cx
  signed __int64 v4; // rcx
  void *v5; // rsp
  __m128i si128; // xmm1
  __m128i v7; // xmm3
  __m128i *v8; // rax
  __m128i v9; // xmm2
  int v10; // eax
  int v11; // ecx
  __int64 v12; // r8
  __int64 v14; // [rsp+0h] [rbp-1018h]
  __int64 v15; // [rsp+8h] [rbp-1010h] BYREF
  _BYTE v16[7]; // [rsp+10h] [rbp-1008h] BYREF
  _QWORD v17[2]; // [rsp+1008h] [rbp-10h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( a1 > 0 )
  {
    v1 = 4LL * a1 + 23;
    v2 = (_QWORD *)((char *)v17 - (v1 & 0xFFFFFFFFFFFFF000LL));
    v3 = v1 & 0xFFF0;
    if ( v17 != v2 )
    {
      while ( &v15 != v2 )
        ;
    }
    v4 = v3 & 0xFFF;
    v5 = alloca(v4);
    if ( v4 )
      *(__int64 *)((char *)&v14 + v4) = *(__int64 *)((char *)&v14 + v4);
    if ( (unsigned int)(a1 - 1) <= 2 )
    {
      v10 = 0;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
      v7 = _mm_load_si128((const __m128i *)&xmmword_3740);
      v8 = (__m128i *)v16;
      do
      {
        v9 = si128;
        ++v8;
        si128 = _mm_add_epi32(si128, v7);
        v8[-1] = _mm_add_epi32(_mm_slli_epi32(v9, 1u), v9);
      }
      while ( v8 != (__m128i *)&v16[16 * ((unsigned int)a1 >> 2)] );
      v10 = a1 & 0x7FFFFFFC;
      if ( (a1 & 3) == 0 )
        return *(unsigned int *)&v16[4 * (a1 >> 1)];
    }
    v11 = 3 * v10;
    *(_DWORD *)&v16[4 * v10] = 3 * v10;
    v12 = 4LL * v10;
    if ( a1 > v10 + 1 )
    {
      *(_DWORD *)&v16[v12 + 4] = v11 + 3;
      if ( a1 > v10 + 2 )
        *(_DWORD *)&v16[v12 + 8] = v11 + 6;
    }
    return *(unsigned int *)&v16[4 * (a1 >> 1)];
  }
  return 0xFFFFFFFFLL;
}


/* Function: stack_alias @ 0x1740 */
__int64 stack_alias()
{
  return 20;
}


/* Function: test_stack_memory @ 0x1750 */
__int64 test_stack_memory()
{
  int v0; // eax
  int v1; // edx
  int v2; // eax

  puts(s);
  __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
  __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
  __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
  __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
  __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
  v0 = large_stack_frame();
  __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v0);
  __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
  v2 = alloca_usage_constprop_0(1, "MEM-L2-03 (alloca_usage): %d\n", v1);
  __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v2);
  return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1850 */
__int64 __fastcall heap_basic(int a1)
{
  __m128i *v2; // rax
  __m128i *v3; // rdi
  __m128i si128; // xmm1
  __m128i v5; // xmm2
  __m128i *v6; // rdx
  __m128i v7; // xmm0
  int v8; // eax
  int v9; // edx
  __int64 v10; // rsi
  unsigned int v11; // r12d

  v2 = (__m128i *)malloc(4LL * a1);
  if ( !v2 )
    return (unsigned int)-1;
  v3 = v2;
  if ( a1 > 0 )
  {
    if ( (unsigned int)(a1 - 1) <= 2 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
    v5 = _mm_load_si128((const __m128i *)&xmmword_3740);
    v6 = &v2[(unsigned int)a1 >> 2];
    do
    {
      v7 = si128;
      ++v2;
      si128 = _mm_add_epi32(si128, v5);
      v2[-1] = _mm_slli_epi32(v7, 1u);
    }
    while ( v2 != v6 );
    v8 = a1 & 0x7FFFFFFC;
    if ( (a1 & 3) != 0 )
    {
LABEL_7:
      v9 = 2 * v8;
      v3->m128i_i32[v8] = 2 * v8;
      v10 = v8;
      if ( v8 + 1 < a1 )
      {
        v3->m128i_i32[v10 + 1] = v9 + 2;
        if ( a1 > v8 + 2 )
          v3->m128i_i32[v10 + 2] = v9 + 4;
      }
    }
  }
  v11 = v3->m128i_u32[a1 / 2];
  free(v3);
  return v11;
}


/* Function: heap_calloc @ 0x1930 */
__int64 __fastcall heap_calloc(int a1)
{
  const __m128i *v2; // rax
  __m128i *v3; // rdi
  const __m128i *v4; // rdx
  __m128i v5; // xmm0
  __m128i v6; // xmm2
  int v7; // eax
  __m128i v8; // xmm0
  unsigned int v9; // r12d
  __int64 v10; // rcx

  v2 = (const __m128i *)calloc(a1, 4u);
  if ( !v2 )
    return (unsigned int)-1;
  v3 = (__m128i *)v2;
  if ( a1 <= 0 )
  {
    v9 = 0;
  }
  else
  {
    if ( (unsigned int)(a1 - 1) <= 2 )
    {
      v7 = 0;
      v9 = 0;
      goto LABEL_7;
    }
    v4 = v2;
    v5 = 0;
    do
    {
      v6 = _mm_loadu_si128(v4++);
      v5 = _mm_add_epi32(v5, v6);
    }
    while ( v4 != &v2[(unsigned int)a1 >> 2] );
    v7 = a1 & 0x7FFFFFFC;
    v8 = _mm_add_epi32(v5, _mm_srli_si128(v5, 8));
    v9 = _mm_cvtsi128_si32(_mm_add_epi32(v8, _mm_srli_si128(v8, 4)));
    if ( (a1 & 3) != 0 )
    {
LABEL_7:
      v10 = v7;
      v9 += v3->m128i_u32[v10];
      if ( a1 > v7 + 1 )
      {
        v9 += v3->m128i_u32[v10 + 1];
        if ( a1 > v7 + 2 )
          v9 += v3->m128i_u32[v10 + 2];
      }
    }
  }
  free(v3);
  return v9;
}


/* Function: heap_realloc @ 0x1A10 */
__int64 heap_realloc()
{
  __m128i *v0; // rax
  __m128i si128; // xmm0
  __m128i *v2; // rbp
  char *v3; // rax
  bool v4; // zf
  unsigned int v5; // r12d

  v0 = (__m128i *)malloc(0x14u);
  if ( v0 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_3780);
    v2 = v0;
    v0[1].m128i_i32[0] = 5;
    *v0 = si128;
    v3 = (char *)realloc(v0, 0x28u);
    if ( v3 )
    {
      v4 = *((_DWORD *)v3 + 2) == 3;
      v5 = 50;
      *(__m128i *)(v3 + 20) = _mm_load_si128((const __m128i *)&xmmword_3790);
      if ( !v4 )
        v5 = -3;
      free(v3);
    }
    else
    {
      v5 = -2;
      free(v2);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v5;
}


/* Function: heap_array @ 0x1AA0 */
__int64 __fastcall heap_array(int a1)
{
  __m128i *v2; // rax
  __m128i *v3; // rdi
  __m128i si128; // xmm1
  __m128i v5; // xmm3
  __m128i *v6; // rdx
  __m128i v7; // xmm2
  int v8; // eax
  int v9; // edx
  __int64 v10; // rsi
  unsigned int v11; // r12d

  v2 = (__m128i *)malloc(4LL * a1);
  if ( !v2 )
    return (unsigned int)-1;
  v3 = v2;
  if ( a1 > 0 )
  {
    if ( (unsigned int)(a1 - 1) <= 2 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
    v5 = _mm_load_si128((const __m128i *)&xmmword_3740);
    v6 = &v2[(unsigned int)a1 >> 2];
    do
    {
      v7 = si128;
      ++v2;
      si128 = _mm_add_epi32(si128, v5);
      v2[-1] = _mm_add_epi32(_mm_slli_epi32(v7, 1u), v7);
    }
    while ( v2 != v6 );
    v8 = a1 & 0x7FFFFFFC;
    if ( (a1 & 3) != 0 )
    {
LABEL_7:
      v9 = 3 * v8;
      v3->m128i_i32[v8] = 3 * v8;
      v10 = v8;
      if ( a1 > v8 + 1 )
      {
        v3->m128i_i32[v10 + 1] = v9 + 3;
        if ( a1 > v8 + 2 )
          v3->m128i_i32[v10 + 2] = v9 + 6;
      }
    }
  }
  v11 = v3->m128i_u32[a1 / 2];
  free(v3);
  return v11;
}


/* Function: heap_struct @ 0x1B90 */
__int64 __fastcall heap_struct(int a1)
{
  void *v1; // rax
  unsigned int v2; // r12d

  v1 = malloc(8u);
  if ( v1 )
  {
    v2 = 3 * a1;
    free(v1);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v2;
}


/* Function: heap_nested @ 0x1BD0 */
__int64 __fastcall heap_nested(_QWORD *a1)
{
  _DWORD *v1; // rax
  _QWORD *v2; // rbp
  _QWORD *v3; // rax

  v1 = malloc(0x10u);
  *a1 = v1;
  if ( !v1 )
    return 0xFFFFFFFFLL;
  *v1 = 10;
  v2 = v1;
  v3 = malloc(0x10u);
  v2[1] = v3;
  if ( v3 )
  {
    *(_DWORD *)v3 = 20;
    v3[1] = 0;
    return 0;
  }
  else
  {
    free(v2);
    return 4294967294LL;
  }
}


/* Function: linked_list_heap @ 0x1C40 */
__int64 linked_list_heap()
{
  _QWORD *v0; // r12
  int v1; // ebp
  _QWORD *v2; // rbx
  _QWORD *i; // rax
  void *v4; // rdi
  unsigned int v5; // r12d
  _QWORD *v7; // rax
  void *v8; // rdi

  v0 = 0;
  v1 = 0;
  v2 = 0;
  for ( i = malloc(0x10u); i; i = malloc(0x10u) )
  {
    *(_DWORD *)i = v1;
    i[1] = 0;
    if ( v2 )
    {
      v1 += 10;
      v0[1] = i;
      if ( v1 == 50 )
        goto LABEL_10;
    }
    else
    {
      v1 += 10;
      v2 = i;
      if ( v1 == 50 )
      {
LABEL_10:
        v7 = v2;
        v5 = 0;
        do
        {
          v5 += *(_DWORD *)v7;
          v7 = (_QWORD *)v7[1];
        }
        while ( v7 );
        do
        {
          v8 = v2;
          v2 = (_QWORD *)v2[1];
          free(v8);
        }
        while ( v2 );
        return v5;
      }
    }
    v0 = i;
  }
  while ( v2 )
  {
    v4 = v2;
    v2 = (_QWORD *)v2[1];
    free(v4);
  }
  return (unsigned int)-1;
}


/* Function: create_tree_node @ 0x1CF0 */
char *__fastcall create_tree_node(int a1)
{
  char *result; // rax

  result = (char *)malloc(0x18u);
  if ( result )
  {
    *(_DWORD *)result = a1;
    *(_OWORD *)(result + 8) = 0;
  }
  return result;
}


/* Function: tree_heap_traversal @ 0x1D20 */
__int64 tree_heap_traversal()
{
  void *v0; // rax
  void *v1; // rbp
  void *v2; // r12
  void *v3; // r13
  void *v5; // rdi

  v0 = malloc(0x18u);
  if ( !v0 )
    return 0xFFFFFFFFLL;
  v1 = v0;
  v2 = malloc(0x18u);
  if ( v2 )
  {
    v3 = malloc(0x18u);
    if ( v3 )
    {
      free(v2);
      free(v3);
      free(v1);
      return 60;
    }
    free(v2);
  }
  else
  {
    v5 = malloc(0x18u);
    if ( v5 )
      free(v5);
  }
  free(v1);
  return 4294967294LL;
}


/* Function: memory_leak @ 0x1DC0 */
__int64 __fastcall memory_leak(int a1)
{
  _OWORD *v1; // rax
  _OWORD *v2; // rcx
  __m128i si128; // xmm0
  __m128i v4; // xmm2
  __m128i v5; // xmm1
  int v6; // eax
  __int64 v7; // rsi
  int v8; // edx
  int v9; // eax

  v1 = malloc(4LL * a1);
  if ( v1 )
  {
    v2 = v1;
    if ( a1 > 0 )
    {
      if ( (unsigned int)(a1 - 1) <= 2 )
      {
        v6 = 0;
        goto LABEL_7;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
      v4 = _mm_load_si128((const __m128i *)&xmmword_3740);
      do
      {
        v5 = si128;
        ++v1;
        si128 = _mm_add_epi32(si128, v4);
        *(v1 - 1) = v5;
      }
      while ( v1 != &v2[(unsigned int)a1 >> 2] );
      v6 = a1 & 0x7FFFFFFC;
      if ( (a1 & 3) != 0 )
      {
LABEL_7:
        *((_DWORD *)v2 + v6) = v6;
        v7 = 4LL * v6;
        v8 = v6 + 1;
        if ( a1 > v6 + 1 )
        {
          v9 = v6 + 2;
          *(_DWORD *)((char *)v2 + v7 + 4) = v8;
          if ( a1 > v9 )
            *(_DWORD *)((char *)v2 + v7 + 8) = v9;
        }
      }
    }
    return *((unsigned int *)v2 + a1 / 2);
  }
  return 0xFFFFFFFFLL;
}


/* Function: dangling_pointer @ 0x1E70 */
__int64 dangling_pointer()
{
  unsigned int *v0; // rax
  unsigned int *v1; // rbx

  v0 = (unsigned int *)malloc(4u);
  if ( !v0 )
    return 0xFFFFFFFFLL;
  v1 = v0;
  __printf_chk(1, "value before free: %d\n", 42);
  free(v1);
  return *v1;
}


/* Function: double_free @ 0x1EB0 */
__int64 __fastcall double_free(unsigned int *a1)
{
  void *v2; // rax
  void *v3; // rbp

  if ( a1 )
    return *a1;
  v2 = malloc(4u);
  v3 = v2;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  free(v2);
  free(v3);
  return 4294967294LL;
}


/* Function: heap_overflow @ 0x1EF0 */
__int64 heap_overflow()
{
  void *v0; // rax

  v0 = malloc(0x28u);
  if ( !v0 )
    return 0xFFFFFFFFLL;
  free(v0);
  return 0;
}


/* Function: test_heap_memory @ 0x1F20 */
void test_heap_memory()
{
  __m128i *v0; // rax
  int v1; // edx
  __m128i *v2; // rax
  __m128i v3; // xmm0
  int v4; // r12d
  int v5; // eax
  __m128i *v6; // rax
  int v7; // edx
  void *v8; // rdi
  int v9; // edx
  void **v10; // r12
  _DWORD *v11; // rax
  int v12; // edx
  int v13; // ebx
  _QWORD *v14; // r13
  _QWORD *v15; // r12
  _QWORD *i; // rax
  void *v17; // rdi
  int v18; // r13d
  int v19; // eax
  __m128i *v20; // rax
  __m128i si128; // xmm0
  int v22; // edx
  int v23; // eax
  _QWORD *v24; // rax
  void *v25; // rdi
  unsigned int *v26; // rbx
  __int64 v27; // rdx
  int stat_loc; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v29; // [rsp+8h] [rbp-20h]

  v29 = __readfsqword(0x28u);
  puts(asc_30E6);
  v0 = (__m128i *)malloc(0x28u);
  if ( v0 )
  {
    v0[1] = _mm_load_si128((const __m128i *)&xmmword_37A0);
    v0[2].m128i_i64[0] = 0x1200000010LL;
    free(v0);
    v1 = 10;
  }
  else
  {
    v1 = -1;
  }
  __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v1);
  v2 = (__m128i *)calloc(5u, 4u);
  if ( v2 )
  {
    v3 = _mm_add_epi32(_mm_srli_si128(_mm_loadu_si128(v2), 8), _mm_loadu_si128(v2));
    v4 = v2[1].m128i_i32[0] + _mm_cvtsi128_si32(_mm_add_epi32(v3, _mm_srli_si128(v3, 4)));
    free(v2);
  }
  else
  {
    v4 = -1;
  }
  __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v4);
  v5 = heap_realloc();
  __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v5);
  v6 = (__m128i *)malloc(0x28u);
  if ( v6 )
  {
    v6[1] = _mm_load_si128((const __m128i *)&xmmword_37B0);
    v6[2].m128i_i64[0] = 0x1B00000018LL;
    free(v6);
    v7 = 15;
  }
  else
  {
    v7 = -1;
  }
  __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v7);
  v8 = malloc(8u);
  if ( v8 )
  {
    free(v8);
    v9 = 15;
  }
  else
  {
    v9 = -1;
  }
  __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v9);
  v10 = (void **)malloc(0x10u);
  if ( v10 )
  {
    v11 = malloc(0x10u);
    v10[1] = v11;
    if ( v11 )
    {
      *v11 = 20;
      v12 = 0;
      *((_QWORD *)v11 + 1) = 0;
    }
    else
    {
      free(v10);
      v12 = -2;
    }
    __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v12);
    free(v10[1]);
    free(v10);
  }
  else
  {
    __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
  }
  v13 = 0;
  v14 = 0;
  v15 = 0;
  for ( i = malloc(0x10u); i; i = malloc(0x10u) )
  {
    *(_DWORD *)i = v13;
    i[1] = 0;
    if ( v15 )
    {
      v13 += 10;
      v14[1] = i;
      if ( v13 == 50 )
        goto LABEL_29;
    }
    else
    {
      v13 += 10;
      v15 = i;
      if ( v13 == 50 )
      {
LABEL_29:
        v24 = v15;
        v18 = 0;
        do
        {
          v18 += *(_DWORD *)v24;
          v24 = (_QWORD *)v24[1];
        }
        while ( v24 );
        do
        {
          v25 = v15;
          v15 = (_QWORD *)v15[1];
          free(v25);
        }
        while ( v15 );
        goto LABEL_20;
      }
    }
    v14 = i;
  }
  while ( v15 )
  {
    v17 = v15;
    v15 = (_QWORD *)v15[1];
    free(v17);
  }
  v18 = -1;
LABEL_20:
  __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v18);
  v19 = tree_heap_traversal();
  __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v19);
  v20 = (__m128i *)malloc(0x14u);
  if ( v20 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_3720);
    v20[1].m128i_i32[0] = 4;
    v22 = 2;
    *v20 = si128;
  }
  else
  {
    v22 = -1;
  }
  __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v22);
  __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
  v23 = fork();
  if ( !v23 )
  {
    v26 = (unsigned int *)malloc(4u);
    if ( v26 )
    {
      __printf_chk(1, "value before free: %d\n", 42);
      free(v26);
      v27 = *v26;
    }
    else
    {
      v27 = 0xFFFFFFFFLL;
    }
    __printf_chk(1, aD, v27);
    exit(0);
  }
  if ( v23 <= 0 )
  {
    perror(aFork_0);
  }
  else
  {
    waitpid(v23, &stat_loc, 0);
    if ( (stat_loc & 0x7F) != 0 )
    {
      if ( (char)((stat_loc & 0x7F) + 1) > 1 )
        __printf_chk(1, byte_33F0);
    }
    else
    {
      __printf_chk(1, byte_33C8, BYTE1(stat_loc));
    }
  }
}


/* Function: global_var_access @ 0x23A0 */
__int64 global_var_access()
{
  return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x23C0 */
__int64 global_var_read()
{
  return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x23D0 */
__int64 __fastcall global_array_access(unsigned int a1)
{
  if ( a1 > 9 )
    return 0xFFFFFFFFLL;
  else
    return global_array[a1];
}


/* Function: static_local @ 0x2400 */
__int64 __fastcall static_local(int a1)
{
  __int64 result; // rax

  result = 0;
  if ( !a1 )
    result = (unsigned int)(counter_1 + 1);
  counter_1 = result;
  return result;
}


/* Function: call_static_func @ 0x2420 */
__int64 __fastcall call_static_func(int a1)
{
  return (unsigned int)(2 * a1 + 1);
}


/* Function: access_extern_global @ 0x2430 */
__int64 access_extern_global()
{
  return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x2440 */
__int64 call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x2450 */
__int64 read_const_data()
{
  return (unsigned int)(const_string[4] + 42);
}


/* Function: access_bss_var @ 0x2470 */
__int64 access_bss_var()
{
  return 0;
}


/* Function: access_bss_buffer @ 0x2480 */
__int64 access_bss_buffer()
{
  return 0;
}


/* Function: global_struct_access @ 0x2490 */
__int64 global_struct_access()
{
  return 30;
}


/* Function: set_file_static @ 0x24A0 */
void __fastcall set_file_static(int a1)
{
  file_scope_static = a1;
}


/* Function: get_file_static @ 0x24B0 */
__int64 get_file_static()
{
  return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x24C0 */
void __fastcall set_global_callback(__int64 a1)
{
  global_func_ptr = a1;
}


/* Function: call_global_callback @ 0x24D0 */
__int64 call_global_callback()
{
  if ( global_func_ptr )
    return global_func_ptr();
  else
    return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x24F0 */
__int64 __fastcall global_heap_store(unsigned int *a1)
{
  if ( a1 )
    return *a1;
  else
    return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x2510 */
__int64 static_complex_init()
{
  return 15;
}


/* Function: tls_access @ 0x2520 */
__int64 __fastcall tls_access(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x2530 */
__int64 init_order_test()
{
  return 20;
}


/* Function: test_static_global @ 0x2540 */
__int64 test_static_global()
{
  int v0; // eax

  puts(asc_3438);
  __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", ++global_counter);
  __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
  __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
  counter_1 = 1;
  __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
  __printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
  __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
  __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
  v0 = extern_function(5);
  __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v0);
  __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_string[4] + 42);
  __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
  __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
  __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", 30);
  file_scope_static = 50;
  __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
  global_func_ptr = (__int64 (*)(void))double_value;
  __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
  __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
  __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
  __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
  return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x2750 */
__int64 __fastcall memop_memset(void *a1, size_t a2, int a3)
{
  if ( a1 && a2 )
    return *(unsigned __int8 *)memset(a1, a3, a2);
  else
    return 0xFFFFFFFFLL;
}


/* Function: memop_memcpy @ 0x2790 */
__int64 __fastcall memop_memcpy(void *a1, const void *a2, size_t a3)
{
  if ( a3 == 0 || a2 == 0 || !a1 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)((char *)memcpy(a1, a2, a3) + (a3 & 0xFFFFFFFFFFFFFFFCLL) - 4);
}


/* Function: memop_memmove @ 0x27D0 */
__int64 __fastcall memop_memmove(char *src, unsigned __int64 a2)
{
  if ( !src || a2 <= 1 )
    return 0xFFFFFFFFLL;
  memmove(src + 1, src, a2 - 1);
  return (unsigned int)src[1];
}


/* Function: memop_memcmp @ 0x2810 */
__int64 __fastcall memop_memcmp(const void *a1, const void *a2, size_t a3)
{
  int v3; // r8d
  __int64 result; // rax

  if ( a3 == 0 || a2 == 0 || !a1 )
    return 0;
  v3 = memcmp(a1, a2, a3);
  result = (unsigned int)-(v3 != 0);
  if ( v3 > 0 )
    return 1;
  return result;
}


/* Function: memop_bzero @ 0x2860 */
__int64 __fastcall memop_bzero(void *a1, size_t a2)
{
  if ( a1 )
    return *(unsigned __int8 *)memset(a1, 0, a2);
  else
    return 0xFFFFFFFFLL;
}


/* Function: memop_bcopy @ 0x2890 */
__int64 __fastcall memop_bcopy(void *src, void *dest, size_t a3)
{
  if ( a3 == 0 || dest == 0 || !src )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned __int8 *)memmove(dest, src, a3);
}


/* Function: memop_unaligned_access @ 0x28D0 */
__int64 __fastcall memop_unaligned_access(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(a1 + 1);
  else
    return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x28F0 */
__int64 __fastcall memop_memory_barrier(int *a1)
{
  int v1; // edx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v1 = *a1;
  _InterlockedOr64((volatile signed __int64 *)&retaddr, 0);
  return (unsigned int)(v1 + *a1);
}


/* Function: test_memory_op_functions @ 0x2910 */
__int64 test_memory_op_functions()
{
  int v0; // eax
  __int64 v1; // rdx
  signed __int64 v3; // [rsp+0h] [rbp-158h] BYREF
  __int64 s1; // [rsp+8h] [rbp-150h] BYREF
  int v5; // [rsp+10h] [rbp-148h]
  __int64 s2; // [rsp+18h] [rbp-140h] BYREF
  int v7; // [rsp+20h] [rbp-138h]
  __int64 v8; // [rsp+2Bh] [rbp-12Dh]
  __int16 v9; // [rsp+33h] [rbp-125h]
  _QWORD dest[36]; // [rsp+35h] [rbp-123h] BYREF

  *(_QWORD *)((char *)&dest[34] + 3) = __readfsqword(0x28u);
  puts(asc_3688);
  memset((char *)&dest[1] + 3, 65, 10);
  __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
  __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
  strcpy((char *)dest, "HelloWorld");
  memmove((char *)dest + 1, dest, 9u);
  __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
  v5 = 3;
  s1 = 0x200000001LL;
  s2 = 0x200000001LL;
  v7 = 4;
  v0 = memcmp(&s1, &s2, 0xCu);
  v1 = (unsigned int)-(v0 != 0);
  if ( v0 > 0 )
    v1 = 1;
  __printf_chk(1, "MEMOP-L2-04: %d\n", v1);
  v9 = 0;
  v8 = 0;
  __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
  __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
  __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
  HIDWORD(v3) = 5;
  _InterlockedOr64(&v3, 0);
  return __printf_chk(1, "MEMOP-L3-02: %d\n", HIDWORD(v3) + 5);
}


/* Function: extern_function @ 0x2AD0 */
__int64 __fastcall extern_function(int a1)
{
  return (unsigned int)(3 * a1);
}


/* Function: .term_proc @ 0x2AD8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: free @ 0x6050 */

/* FAILED to decompile: __libc_start_main @ 0x6058 */

/* FAILED to decompile: puts @ 0x6060 */

/* FAILED to decompile: __stack_chk_fail @ 0x6068 */

/* FAILED to decompile: memset @ 0x6070 */

/* FAILED to decompile: memcmp @ 0x6078 */

/* FAILED to decompile: calloc @ 0x6080 */

/* FAILED to decompile: memcpy @ 0x6088 */

/* FAILED to decompile: malloc @ 0x6090 */

/* FAILED to decompile: realloc @ 0x6098 */

/* FAILED to decompile: __printf_chk @ 0x60A0 */

/* FAILED to decompile: memmove @ 0x60A8 */

/* FAILED to decompile: waitpid @ 0x60B0 */

/* FAILED to decompile: perror @ 0x60B8 */

/* FAILED to decompile: exit @ 0x60C0 */

/* FAILED to decompile: fork @ 0x60C8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x60D0 */

/* FAILED to decompile: __gmon_start__ @ 0x60E0 */

/* Total functions decompiled: 80, failed: 18 */
