/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_clang_Os_no_g
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


/* Function: _start @ 0x1080 */
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


/* Function: deregister_tm_clones @ 0x10B0 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10E0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1120 */
void *_do_global_dtors_aux()
{
  void *result; // rax

  if ( !completed_0 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x1160 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: sequential_ops @ 0x116C */
__int64 __fastcall sequential_ops(int a1, int a2, int a3)
{
  return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0x1174 */
__int64 __fastcall single_if(int a1)
{
  return (unsigned int)(a1 << (a1 > 0));
}


/* Function: if_else @ 0x117E */
_BOOL8 __fastcall if_else(int a1)
{
  return a1 > 0;
}


/* Function: nested_if_2 @ 0x1186 */
__int64 __fastcall nested_if_2(int a1, int a2)
{
  __int64 result; // rax

  if ( a2 < 0 )
    a2 = 0;
  result = (unsigned int)(a2 + a1);
  if ( a1 <= 0 )
    return 0;
  return result;
}


/* Function: nested_if_deep @ 0x1196 */
__int64 __fastcall nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
  if ( a1 <= 0 )
    return 0;
  if ( a2 <= 0 )
    return 1;
  if ( a3 <= 0 )
    return 2;
  if ( a4 <= 0 )
    return 3;
  return (a5 > 0) | 4u;
}


/* Function: if_elseif_chain @ 0x11C7 */
__int64 __fastcall if_elseif_chain(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 < 3 )
    return 10 * a1 + 10;
  return result;
}


/* Function: if_elseif_long @ 0x11DA */
__int64 __fastcall if_elseif_long(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 < 5 )
    return 100 * a1 + 100;
  return result;
}


/* Function: switch_small @ 0x11EC */
__int64 __fastcall switch_small(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 <= 3 )
    return dword_2090[a1];
  return result;
}


/* Function: switch_large @ 0x1204 */
__int64 __fastcall switch_large(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 < 0xA )
    return 10 * a1;
  return result;
}


/* Function: switch_default @ 0x1216 */
__int64 __fastcall switch_default(int a1)
{
  unsigned int v1; // edi
  __int64 result; // rax

  v1 = a1 - 1;
  result = 0;
  if ( v1 < 3 )
    return 100 * v1 + 100;
  return result;
}


/* Function: switch_fallthrough @ 0x1227 */
__int64 __fastcall switch_fallthrough(int a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = 0;
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
    {
      result = 0xFFFFFFFFLL;
      if ( a1 != 3 )
        return result;
      v1 = 12;
    }
    v1 += 2 * a1;
  }
  return (unsigned int)(a1 + v1);
}


/* Function: loop_for_fixed @ 0x1248 */
__int64 __fastcall loop_for_fixed(int a1)
{
  if ( a1 <= 0 )
    return 0;
  else
    return (unsigned int)(((unsigned int)(a1 - 1) * (unsigned __int64)(unsigned int)(a1 - 2)) >> 1) + a1 - 1;
}


/* Function: loop_while @ 0x1262 */
__int64 __fastcall loop_while(int a1)
{
  __int64 result; // rax
  int v2; // ecx

  if ( !a1 )
    return 1;
  LODWORD(result) = 0;
  do
  {
    v2 = a1;
    a1 /= 10;
    result = (unsigned int)(result + 1);
  }
  while ( (unsigned int)(v2 + 9) > 0x12 );
  return result;
}


/* Function: loop_dowhile @ 0x1290 */
__int64 __fastcall loop_dowhile(int a1)
{
  __int64 result; // rax
  int v2; // ecx

  LODWORD(result) = 0;
  do
  {
    v2 = a1;
    a1 /= 10;
    result = (unsigned int)(result + 1);
  }
  while ( (unsigned int)(v2 + 9) > 0x12 );
  return result;
}


/* Function: loop_nested @ 0x12B4 */
__int64 __fastcall loop_nested(int a1, int a2)
{
  __int64 result; // rax
  unsigned int v3; // esi

  result = 0;
  if ( a2 <= 0 )
    a2 = 0;
  v3 = a1 * a2;
  if ( a1 > 0 )
    return v3;
  return result;
}


/* Function: loop_break @ 0x12C4 */
__int64 __fastcall loop_break(int a1)
{
  _DWORD *v1; // rcx
  __int64 result; // rax

  v1 = &unk_20D0;
  result = 0;
  while ( *v1 != a1 )
  {
    ++result;
    ++v1;
    if ( result == 5 )
      return 0xFFFFFFFFLL;
  }
  return result;
}


/* Function: loop_continue @ 0x12E4 */
__int64 __fastcall loop_continue(int a1)
{
  __m128i v1; // xmm0
  __m128i v2; // xmm1
  __m128i si128; // xmm3
  int v4; // ecx
  __m128i v5; // xmm4
  __m128i v6; // xmm2
  int v7; // edx
  __m128i v8; // xmm4
  __m128i v9; // xmm3
  __m128i v10; // xmm3
  __m128i v11; // xmm0

  if ( a1 <= 0 )
    return 0;
  v1 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a1 - 1), 0);
  v2 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2010);
  v4 = 4;
  v5 = _mm_load_si128((const __m128i *)&xmmword_2020);
  do
  {
    v6 = v2;
    v2 = _mm_add_epi32(_mm_and_si128(_mm_srai_epi32(_mm_slli_epi32(si128, 0x1Fu), 0x1Fu), si128), v2);
    si128 = _mm_add_epi32(si128, v5);
    v7 = v4;
    v4 -= 4;
  }
  while ( ((a1 + 3) & 0xFFFFFFFC) + v7 != 8 );
  v8 = _mm_load_si128((const __m128i *)&xmmword_2040);
  v9 = _mm_cmpgt_epi32(
         _mm_xor_si128(_mm_or_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(-v4), 0), (__m128i)xmmword_2030), v8),
         _mm_xor_si128(v1, v8));
  v10 = _mm_or_si128(_mm_andnot_si128(v9, v2), _mm_and_si128(v6, v9));
  v11 = _mm_add_epi32(_mm_shuffle_epi32(v10, 238), v10);
  return (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v11, 85), v11));
}


/* Function: goto_forward @ 0x1390 */
__int64 __fastcall goto_forward(int a1)
{
  int v1; // eax

  v1 = 1;
  if ( a1 > 0 )
    v1 = a1;
  return (unsigned int)(2 * a1 * v1);
}


/* Function: goto_backward @ 0x13A0 */
__int64 __fastcall goto_backward(int a1)
{
  __m128i v1; // xmm0
  __m128i si128; // xmm1
  __m128i v3; // xmm3
  int v4; // ecx
  __m128i v5; // xmm4
  __m128i v6; // xmm2
  int v7; // edx
  __m128i v8; // xmm4
  __m128i v9; // xmm3
  __m128i v10; // xmm3

  if ( a1 <= 0 )
    return 1;
  v1 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a1 - 1), 0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2050);
  v3 = _mm_load_si128((const __m128i *)&xmmword_2010);
  v4 = 4;
  v5 = _mm_load_si128((const __m128i *)&xmmword_2020);
  do
  {
    v6 = si128;
    si128 = _mm_unpacklo_epi32(
              _mm_shuffle_epi32(_mm_mul_epu32(v3, si128), 232),
              _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v3, 245), _mm_shuffle_epi32(si128, 245)), 232));
    v3 = _mm_add_epi32(v3, v5);
    v7 = v4;
    v4 -= 4;
  }
  while ( ((a1 + 3) & 0xFFFFFFFC) + v7 != 8 );
  v8 = _mm_load_si128((const __m128i *)&xmmword_2040);
  v9 = _mm_cmpgt_epi32(
         _mm_xor_si128(_mm_or_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(-v4), 0), (__m128i)xmmword_2030), v8),
         _mm_xor_si128(v1, v8));
  v10 = _mm_or_si128(_mm_andnot_si128(v9, si128), _mm_and_si128(v6, v9));
  return (unsigned int)_mm_cvtsi128_si32(
                         _mm_mul_epu32(
                           _mm_mul_epu32(_mm_shuffle_epi32(v10, 238), v10),
                           _mm_mul_epu32(_mm_shuffle_epi32(v10, 245), _mm_shuffle_epi32(v10, 255))));
}


/* Function: ternary_op @ 0x146A */
__int64 __fastcall ternary_op(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( (int)a1 > (int)a2 )
    return a1;
  return result;
}


/* Function: test_control_flow_l1 @ 0x1472 */
int test_control_flow_l1()
{
  puts(s);
  printf("CF-L1-01 (sequential_ops): %d\n", 21);
  printf("CF-L1-02 (single_if): %d\n", 20);
  printf("CF-L1-02 (single_if): %d\n", -5);
  printf("CF-L1-03 (if_else): %d\n", 1);
  printf("CF-L1-03 (if_else): %d\n", 0);
  printf("CF-L1-04 (nested_if_2): %d\n", 15);
  printf("CF-L1-04 (nested_if_2): %d\n", 10);
  printf("CF-L1-04 (nested_if_2): %d\n", 0);
  printf("CF-L1-05 (nested_if_deep): %d\n", 5);
  printf("CF-L1-06 (if_elseif_chain): %d\n", 20);
  printf("CF-L1-07 (if_elseif_long): %d\n", 400);
  printf("CF-L1-08 (switch_small): %d\n", 50);
  printf("CF-L1-09 (switch_large): %d\n", 70);
  printf("CF-L1-10 (switch_default): %d\n", 0);
  printf("CF-L1-11 (switch_fallthrough): %d\n", 21);
  printf("CF-L1-12 (loop_for_fixed): %d\n", 45);
  printf("CF-L1-13 (loop_while): %d\n", 5);
  printf("CF-L1-14 (loop_dowhile): %d\n", 4);
  printf("CF-L1-15 (loop_nested): %d\n", 12);
  printf("CF-L1-16 (loop_break): %d\n", 2);
  printf("CF-L1-16 (loop_break): %d\n", -1);
  printf("CF-L1-17 (loop_continue): %d\n", 25);
  printf("CF-L1-18 (goto_forward): %d\n", 50);
  printf("CF-L1-18 (goto_forward): %d\n", -6);
  printf("CF-L1-19 (goto_backward): %d\n", 120);
  printf("CF-L1-20 (ternary_op): %d\n", 10);
  return printf("CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x166E */
__int64 __fastcall loop_multi_exit(int a1)
{
  _DWORD *v1; // rdx
  int v2; // ecx
  __int64 v3; // rsi
  __int64 i; // rax

  v1 = &unk_20F0;
  v2 = 0;
  v3 = 0;
  while ( 2 )
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( v1[i] == a1 )
        return (unsigned int)(i - v2);
    }
    ++v3;
    v2 -= 10;
    v1 += 4;
    if ( v3 != 3 )
      continue;
    break;
  }
  return 0xFFFFFFFFLL;
}


/* Function: infinite_loop @ 0x16A3 */
__int64 __fastcall infinite_loop(_DWORD *a1)
{
  __int64 result; // rax

  result = 0;
  while ( *a1 != 1 )
  {
    result = (unsigned int)(result + 1);
    if ( (_DWORD)result == 1001 )
    {
      *a1 = 1;
      return 1001;
    }
  }
  return result;
}


/* Function: multi_return @ 0x16C1 */
__int64 __fastcall multi_return(int a1)
{
  __int64 result; // rax

  if ( a1 < 0 )
    return 0xFFFFFFFFLL;
  result = 4294967294LL;
  if ( (unsigned int)a1 <= 0x32 )
  {
    result = (unsigned int)(a1 + 1);
    if ( (a1 & 1) == 0 )
      return (unsigned int)(2 * a1);
  }
  return result;
}


/* Function: conditional_return @ 0x16E4 */
__int64 __fastcall conditional_return(int a1)
{
  __int64 result; // rax

  result = (unsigned int)-a1;
  if ( a1 > 0 )
    return (unsigned int)(2 * a1);
  return result;
}


/* Function: duffs_device @ 0x16F1 */
__int64 __fastcall duffs_device(_DWORD *a1, int *a2, int a3)
{
  __int64 result; // rax
  signed int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  result = 0xFFFFFFFFLL;
  if ( a3 > 0 )
  {
    v4 = (unsigned int)(a3 + 7) >> 3;
    switch ( a3 & 7 )
    {
      case 0:
        goto LABEL_3;
      case 1:
        goto LABEL_10;
      case 2:
        goto LABEL_9;
      case 3:
        goto LABEL_8;
      case 4:
        goto LABEL_7;
      case 5:
        goto LABEL_6;
      case 6:
        goto LABEL_5;
      case 7:
        while ( 1 )
        {
          v6 = *a2++;
          *a1++ = v6;
LABEL_5:
          v7 = *a2++;
          *a1++ = v7;
LABEL_6:
          v8 = *a2++;
          *a1++ = v8;
LABEL_7:
          v9 = *a2++;
          *a1++ = v9;
LABEL_8:
          v10 = *a2++;
          *a1++ = v10;
LABEL_9:
          v11 = *a2++;
          *a1++ = v11;
LABEL_10:
          v12 = *a2++;
          *a1++ = v12;
          if ( v4-- <= 1 )
            break;
LABEL_3:
          v5 = *a2++;
          *a1++ = v5;
        }
        result = (unsigned int)a3;
        break;
    }
  }
  return result;
}


/* Function: loop_complex_cond @ 0x1786 */
__int64 __fastcall loop_complex_cond(int a1)
{
  unsigned int v1; // edx
  int v2; // eax
  unsigned int v3; // esi
  unsigned int v4; // ecx

  if ( a1 <= 0 )
  {
    v2 = 0;
    v4 = 0;
  }
  else
  {
    v1 = 0;
    v2 = 0;
    do
    {
      v3 = a1;
      v2 += 2;
      --a1;
      v4 = v1 + 1;
      if ( v3 < 2 )
        break;
      if ( v2 >= a1 )
        break;
    }
    while ( v1++ < 9 );
  }
  return v4 + a1 + v2;
}


/* Function: loop_modify_var @ 0x17B4 */
__int64 __fastcall loop_modify_var(int a1)
{
  int v1; // ecx
  __int64 result; // rax
  int v3; // edx

  if ( a1 <= 0 )
    return 0;
  v1 = 0;
  LODWORD(result) = 0;
  do
  {
    result = (unsigned int)(v1 + result);
    v3 = v1 + 2;
    if ( v1 < 6 )
      v3 = v1;
    v1 = v3 + 1;
  }
  while ( v3 + 1 < a1 );
  return result;
}


/* Function: loop_external_state @ 0x17D3 */
__int64 __fastcall loop_external_state(_DWORD *a1)
{
  __int64 result; // rax

  result = 0;
  while ( !*a1 )
  {
    result = (unsigned int)(result + 1);
    if ( (_DWORD)result == 101 )
      return 101;
  }
  return result;
}


/* Function: tail_recursion @ 0x18C0 */
__int64 __fastcall tail_recursion(signed int a1, unsigned __int32 a2)
{
  __int64 result; // rax
  __m128i v3; // xmm2
  bool v4; // cf
  unsigned int v5; // edi
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __m128i v8; // xmm3
  int v9; // eax
  __m128i si128; // xmm4
  __m128i v11; // xmm2
  int v12; // edx
  __m128i v13; // xmm4
  __m128i v14; // xmm3
  __m128i v15; // xmm3

  result = a2;
  if ( a1 >= 2 )
  {
    v3 = _mm_cvtsi32_si128(a1);
    v4 = (unsigned int)a1 < 2;
    v5 = a1 - 2;
    if ( v4 )
      v5 = 0;
    v6 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
    v7 = (__m128i)xmmword_2080;
    v7.m128i_i32[0] = a2;
    v8 = _mm_add_epi32(_mm_shuffle_epi32(v3, 0), (__m128i)xmmword_2060);
    v9 = 4;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2070);
    do
    {
      v11 = v7;
      v7 = _mm_unpacklo_epi32(
             _mm_shuffle_epi32(_mm_mul_epu32(v7, v8), 232),
             _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v7, 245), _mm_shuffle_epi32(v8, 245)), 232));
      v8 = _mm_add_epi32(v8, si128);
      v12 = v9;
      v9 -= 4;
    }
    while ( ((v5 + 4) & 0xFFFFFFFC) + v12 != 8 );
    v13 = _mm_load_si128((const __m128i *)&xmmword_2040);
    v14 = _mm_cmpgt_epi32(
            _mm_xor_si128(_mm_or_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(-v9), 0), (__m128i)xmmword_2030), v13),
            _mm_xor_si128(v6, v13));
    v15 = _mm_or_si128(_mm_andnot_si128(v14, v7), _mm_and_si128(v11, v14));
    return (unsigned int)_mm_cvtsi128_si32(
                           _mm_mul_epu32(
                             _mm_mul_epu32(_mm_shuffle_epi32(v15, 238), v15),
                             _mm_mul_epu32(_mm_shuffle_epi32(v15, 245), _mm_shuffle_epi32(v15, 255))));
  }
  return result;
}


/* Function: indirect_recursion_a @ 0x1998 */
__int64 __fastcall indirect_recursion_a(unsigned int a1, int a2)
{
  __int64 result; // rax
  int i; // esi
  unsigned int v4; // ecx
  int v5; // eax

  result = a1;
  if ( a2 > 0 )
  {
    for ( i = a2 + 2; i >= 3; i -= 2 )
    {
      if ( (result & 1) != 0 )
      {
        v5 = 3 * result;
        if ( i == 3 )
          return (unsigned int)(v5 + 1);
        result = (unsigned int)(v5 + 2);
      }
      else
      {
        v4 = (int)result / 2;
        if ( i == 3 )
          return v4;
        result = v4 + 1;
      }
    }
  }
  return result;
}


/* Function: call_func_ptr @ 0x19D3 */
__int64 __fastcall call_func_ptr(__int64 (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2);
}


/* Function: call_func_ptr_array @ 0x19DA */
__int64 __fastcall call_func_ptr_array(__int64 a1, signed int a2)
{
  __m128i v2; // xmm0
  unsigned int v3; // edi
  __m128i v4; // xmm3
  __m128i v5; // xmm0
  __m128i si128; // xmm1
  int v7; // ecx
  __m128i v8; // xmm4
  __m128i v9; // xmm2
  int v10; // edx
  __m128i v11; // xmm4
  __m128i v12; // xmm3
  __m128i v13; // xmm3
  __int64 result; // rax

  switch ( a2 )
  {
    case 0:
      result = (unsigned int)(2 * a2);
      break;
    case 1:
      result = (unsigned int)(3 * a2);
      break;
    case 2:
      result = 1;
      if ( a2 >= 2 )
      {
        v2 = _mm_cvtsi32_si128(a2);
        v3 = a2 - 2;
        v4 = _mm_add_epi32(_mm_shuffle_epi32(v2, 0), (__m128i)xmmword_2060);
        v5 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v3), 0);
        si128 = _mm_load_si128((const __m128i *)&xmmword_2050);
        v7 = 4;
        v8 = _mm_load_si128((const __m128i *)&xmmword_2070);
        do
        {
          v9 = si128;
          si128 = _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(_mm_mul_epu32(v4, si128), 232),
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v4, 245), _mm_shuffle_epi32(si128, 245)), 232));
          v4 = _mm_add_epi32(v4, v8);
          v10 = v7;
          v7 -= 4;
        }
        while ( ((v3 + 4) & 0xFFFFFFFC) + v10 != 8 );
        v11 = _mm_load_si128((const __m128i *)&xmmword_2040);
        v12 = _mm_cmpgt_epi32(
                _mm_xor_si128(_mm_or_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(-v7), 0), (__m128i)xmmword_2030), v11),
                _mm_xor_si128(v5, v11));
        v13 = _mm_or_si128(_mm_andnot_si128(v12, si128), _mm_and_si128(v9, v12));
        result = (unsigned int)_mm_cvtsi128_si32(
                                 _mm_mul_epu32(
                                   _mm_mul_epu32(_mm_shuffle_epi32(v13, 238), v13),
                                   _mm_mul_epu32(_mm_shuffle_epi32(v13, 245), _mm_shuffle_epi32(v13, 255))));
      }
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}


/* Function: call_virtual_func @ 0x19FB */
__int64 __fastcall call_virtual_func(__int64 a1, int a2)
{
  return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x19FF */
__int64 __fastcall process_with_callback(__int64 a1, int a2, __int64 (__fastcall *a3)(_QWORD))
{
  __int64 v4; // rbx
  unsigned int v5; // ebp

  if ( a2 <= 0 )
  {
    return 0;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    do
      v5 += a3(*(unsigned int *)(a1 + 4 * v4++));
    while ( a2 != v4 );
  }
  return v5;
}


/* Function: test_control_flow_l2 @ 0x1A38 */
int test_control_flow_l2()
{
  _DWORD *v0; // rcx
  int v1; // eax
  __int64 v2; // rdx
  __int64 i; // rsi
  int v4; // esi
  int v5; // ebx
  unsigned int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // ebp
  _DWORD v13[8]; // [rsp+10h] [rbp-58h] BYREF
  _OWORD v14[3]; // [rsp+30h] [rbp-38h] BYREF

  puts(asc_2699);
  v0 = &unk_20F0;
  v1 = 0;
  v2 = 0;
  while ( 2 )
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( v0[i] == 7 )
      {
        v4 = i - v1;
        goto LABEL_8;
      }
    }
    ++v2;
    v1 -= 10;
    v0 += 4;
    if ( v2 != 3 )
      continue;
    break;
  }
  v4 = -1;
LABEL_8:
  v5 = 0;
  printf("CF-L2-01 (loop_multi_exit): %d\n", v4);
  do
    ++v5;
  while ( v5 != 1001 );
  printf("CF-L2-02 (infinite_loop): %d\n", 1001);
  v6 = -1;
  printf("CF-L2-03 (multi_return): %d\n", -1);
  printf("CF-L2-03 (multi_return): %d\n", -2);
  printf("CF-L2-03 (multi_return): %d\n", 4);
  v7 = 10;
  printf("CF-L2-04 (conditional_return): %d\n", 10);
  printf("CF-L2-04 (conditional_return): %d\n", 5);
  v14[1] = xmmword_2700;
  v14[0] = xmmword_26F0;
  v8 = duffs_device(v13, (int *)v14, 8);
  printf("CF-L2-05 (duffs_device): %d\n", v8);
  v9 = 11;
  do
  {
    v10 = v7 - 8;
    v7 += 2;
    if ( v10 >= v9 - 2 )
      break;
    ++v6;
    --v9;
  }
  while ( v6 < 9 );
  v11 = 0;
  printf("CF-L2-06 (loop_complex_cond): %d\n", v7);
  printf("CF-L2-07 (loop_modify_var): %d\n", 30);
  do
    ++v11;
  while ( v11 != 101 );
  printf("CF-L2-08 (loop_external_state): %d\n", 101);
  printf("CF-L2-09 (recursion_factorial): %d\n", 120);
  printf("CF-L2-10 (tail_recursion): %d\n", 120);
  printf("CF-L2-11 (indirect_recursion): %d\n", 3);
  printf("CF-L2-12 (call_func_ptr): %d\n", 10);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
  return printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


/* Function: non_local_jump @ 0x1C5D */
__int64 __fastcall non_local_jump(int a1)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = _setjmp(jump_buffer);
  v2 = -1;
  if ( !v1 )
  {
    if ( a1 < 0 )
      longjmp(jump_buffer, 1);
    if ( (unsigned int)a1 >= 0x65 )
      longjmp(jump_buffer, 2);
    return (unsigned int)(2 * a1);
  }
  return v2;
}


/* Function: cpp_exception @ 0x1CA8 */
__int64 __fastcall cpp_exception(int a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax

  v1 = -2;
  if ( a1 < 101 )
    v1 = 2 * a1;
  result = 0xFFFFFFFFLL;
  if ( a1 >= 0 )
    return v1;
  return result;
}


/* Function: large_jump_table @ 0x1CC1 */
__int64 __fastcall large_jump_table(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 0:
      result = (unsigned int)(a2 + a3);
      break;
    case 1:
      result = (unsigned int)(a2 - a3);
      break;
    case 2:
      result = (unsigned int)(a3 * a2);
      break;
    case 3:
      if ( a3 )
        result = (unsigned int)(a2 / a3);
      else
        result = 0;
      break;
    case 4:
      if ( a3 )
        result = (unsigned int)(a2 % a3);
      else
        result = 0;
      break;
    case 5:
      result = a3 & (unsigned int)a2;
      break;
    case 6:
      result = a3 | (unsigned int)a2;
      break;
    case 7:
      result = a3 ^ (unsigned int)a2;
      break;
    case 8:
      result = (unsigned int)(a2 << a3);
      break;
    case 9:
      result = (unsigned int)(a2 >> a3);
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}


/* Function: conditional_func_ptr @ 0x1D24 */
__int64 __fastcall conditional_func_ptr(int a1, unsigned int a2)
{
  __int64 (__fastcall *v2)(_QWORD); // rcx
  __int64 (__fastcall *v3)(_QWORD); // rax

  v2 = (__int64 (__fastcall *)(_QWORD))&recursion_factorial;
  if ( a1 == 1 )
    v2 = (__int64 (__fastcall *)(_QWORD))&triple_value;
  v3 = (__int64 (__fastcall *)(_QWORD))&double_value;
  if ( a1 )
    v3 = v2;
  return v3(a2);
}


/* Function: state_machine @ 0x1D4A */
__int64 __fastcall state_machine(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  switch ( a2 )
  {
    case 0u:
      result = a1 == 1;
      break;
    case 1u:
      result = 2 * (unsigned int)(a1 == 99) + 1;
      if ( a1 == 2 )
        result = 2;
      break;
    case 2u:
      return result;
    case 3u:
      result = 3 * (unsigned int)(a1 != 0);
      break;
    default:
      result = 3;
      break;
  }
  return result;
}


/* Function: fsm_func_table @ 0x1D90 */
__int64 __fastcall fsm_func_table(int a1, int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 0:
      result = a1 == 1;
      break;
    case 1:
      result = 2 * (unsigned int)(a1 == 99) + 1;
      if ( a1 == 2 )
        result = 2;
      break;
    case 2:
      result = 2;
      break;
    case 3:
      result = 3 * (unsigned int)(a1 != 0);
      break;
    default:
      result = 3;
      break;
  }
  return result;
}


/* Function: computed_goto @ 0x1DD4 */
__int64 __fastcall computed_goto(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 0:
      result = 0;
      break;
    case 1:
      result = 10;
      break;
    case 2:
      result = 20;
      break;
    case 3:
      result = 30;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}


/* Function: obfuscated_cf @ 0x1E00 */
__int64 __fastcall obfuscated_cf(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x1E04 */
__int64 __fastcall opaque_predicate(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x1E08 */
__int64 __fastcall overlapped_code(int a1)
{
  if ( (a1 & 1) != 0 )
    return (unsigned int)(3 * a1 + 1);
  else
    return (unsigned int)(a1 / 2);
}


/* Function: test_control_flow_l3 @ 0x1E1E */
int test_control_flow_l3()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax

  puts(asc_26BD);
  v0 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  printf("CF-L3-01 (non_local_jump): %d\n", v1);
  printf("CF-L3-02 (cpp_exception): %d\n", 10);
  printf("CF-L3-02 (cpp_exception): %d\n", -1);
  printf("CF-L3-03 (large_jump_table): %d\n", 15);
  printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
  printf("CF-L3-05 (state_machine): %d\n", 1);
  printf("CF-L3-06 (fsm_func_table): %d\n", 2);
  v2 = computed_goto((__int64)"CF-L3-06 (fsm_func_table): %d\n", 2);
  printf("CF-L3-07 (computed_goto): %d\n", v2);
  printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
  printf("CF-L3-09 (opaque_predicate): %d\n", 10);
  return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x1F23 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: .term_proc @ 0x1F38 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x5130 */

/* FAILED to decompile: puts @ 0x5138 */

/* FAILED to decompile: printf @ 0x5140 */

/* FAILED to decompile: _setjmp @ 0x5148 */

/* FAILED to decompile: longjmp @ 0x5150 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x5158 */

/* FAILED to decompile: __gmon_start__ @ 0x5168 */

/* Total functions decompiled: 56, failed: 7 */
