/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/3/3_clang_O3_g
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


/* Function: _start @ 0x1120 */
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


/* Function: deregister_tm_clones @ 0x1150 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1180 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11C0 */
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


/* Function: frame_dummy @ 0x1200 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: local_vars @ 0x1210 */
int __fastcall local_vars(int x)
{
  return 2 * x + 10;
}


/* Function: local_array @ 0x1220 */
int __fastcall local_array(int n)
{
  return 5 * n;
}


/* Function: local_struct @ 0x1230 */
int __fastcall local_struct(int x)
{
  return 3 * x;
}


/* Function: address_of_local @ 0x1240 */
int __fastcall address_of_local(int *out)
{
  *out = 42;
  return 42;
}


/* Function: address_of_array @ 0x1250 */
int __fastcall address_of_array(int *arr)
{
  return 2 * *arr;
}


/* Function: large_stack_frame @ 0x1260 */
int __cdecl large_stack_frame()
{
  __m128i si128; // xmm2
  __int64 v1; // rax
  __m128i v2; // xmm8
  __m128i v3; // xmm9
  __m128i v4; // xmm3
  __m128i v5; // xmm4
  __m128i v6; // xmm5
  __m128i v7; // xmm6
  __m128i v8; // xmm7
  __m128i v9; // xmm1
  _OWORD v11[64]; // [rsp+0h] [rbp-808h]
  char v12; // [rsp+400h] [rbp-408h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_3010);
  v1 = 0;
  v2 = _mm_load_si128((const __m128i *)&xmmword_3020);
  v3 = _mm_load_si128((const __m128i *)&xmmword_3030);
  v4 = _mm_load_si128((const __m128i *)&xmmword_3040);
  v5 = _mm_load_si128((const __m128i *)&xmmword_3050);
  v6 = _mm_load_si128((const __m128i *)&xmmword_3060);
  v7 = _mm_load_si128((const __m128i *)&xmmword_3070);
  v8 = _mm_load_si128((const __m128i *)&xmmword_3080);
  v9 = _mm_load_si128((const __m128i *)&xmmword_3090);
  do
  {
    v11[v1] = si128;
    v11[v1 + 1] = _mm_add_epi8(si128, v2);
    v11[v1 + 2] = _mm_add_epi8(si128, v3);
    v11[v1 + 3] = _mm_add_epi8(si128, v4);
    v11[v1 + 4] = _mm_add_epi8(si128, v5);
    v11[v1 + 5] = _mm_add_epi8(si128, v6);
    v11[v1 + 6] = _mm_add_epi8(si128, v7);
    v11[v1 + 7] = _mm_add_epi8(si128, v8);
    v1 += 8;
    si128 = _mm_xor_si128(si128, v9);
  }
  while ( v1 != 128 );
  return v12;
}


/* Function: vla_stack @ 0x1350 */
int __fastcall vla_stack(int n)
{
  int result; // eax
  char *v2; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rdx
  __m128i v6; // xmm0
  __int64 v7; // rcx
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __m128i v11; // xmm4
  __m128i si128; // xmm0
  __m128i v13; // xmm1
  int v14; // ecx
  __int64 v15; // [rsp-8h] [rbp-8h] BYREF

  result = -1;
  if ( (unsigned int)(n - 1001) >= 0xFFFFFC18 )
  {
    v2 = (char *)&v15 - ((4LL * (unsigned int)n + 15) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)n < 8 )
    {
      v3 = 0;
      goto LABEL_10;
    }
    v3 = n & 0xFFFFFFF8;
    v4 = ((unsigned __int64)(v3 - 8) >> 3) + 1;
    if ( v3 == 8 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_30A0);
      v7 = 0;
      if ( (v4 & 1) != 0 )
      {
LABEL_8:
        v13 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_30C0), si128);
        *(__m128i *)&v2[4 * v7] = si128;
        *(__m128i *)&v2[4 * v7 + 16] = v13;
      }
    }
    else
    {
      v5 = v4 & 0xFFFFFFFFFFFFFFFELL;
      v6 = _mm_load_si128((const __m128i *)&xmmword_30B0);
      v7 = 0;
      v8 = _mm_load_si128((const __m128i *)&xmmword_30C0);
      v9 = _mm_load_si128((const __m128i *)&xmmword_30D0);
      v10 = _mm_load_si128((const __m128i *)&xmmword_30E0);
      do
      {
        v11 = _mm_add_epi32(v6, v6);
        *(__m128i *)&v2[4 * v7] = v11;
        *(__m128i *)&v2[4 * v7 + 16] = _mm_add_epi32(v11, v8);
        *(__m128i *)&v2[4 * v7 + 32] = _mm_add_epi32(v11, v9);
        *(__m128i *)&v2[4 * v7 + 48] = _mm_add_epi32(v11, v10);
        v7 += 16;
        v6 = _mm_add_epi32(v6, v9);
        v5 -= 2LL;
      }
      while ( v5 );
      si128 = _mm_add_epi32(v6, v6);
      if ( (v4 & 1) != 0 )
        goto LABEL_8;
    }
    if ( v3 == n )
      return *(_DWORD *)&v2[4 * (n / 2)];
LABEL_10:
    v14 = 2 * v3;
    do
    {
      *(_DWORD *)&v2[4 * v3++] = v14;
      v14 += 2;
    }
    while ( n != v3 );
    return *(_DWORD *)&v2[4 * (n / 2)];
  }
  return result;
}


/* Function: alloca_usage @ 0x1490 */
int __fastcall alloca_usage(int n)
{
  char *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  __m128i si128; // xmm0
  __int64 v7; // rsi
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __m128i v11; // xmm4
  __m128i v12; // xmm4
  __m128i v13; // xmm5
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  int v16; // ecx
  __int64 v17; // [rsp-8h] [rbp-8h] BYREF

  if ( n <= 0 )
    return -1;
  v1 = (char *)&v17 - ((4LL * (unsigned int)n + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)n < 8 )
  {
    v2 = 0;
    goto LABEL_11;
  }
  v2 = n & 0xFFFFFFF8;
  v4 = ((unsigned __int64)(v2 - 8) >> 3) + 1;
  if ( v2 == 8 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_30B0);
    v7 = 0;
    if ( (v4 & 1) != 0 )
    {
LABEL_9:
      v14 = _mm_add_epi32(_mm_add_epi32(si128, si128), si128);
      v15 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_30F0), v14);
      *(__m128i *)&v1[4 * v7] = v14;
      *(__m128i *)&v1[4 * v7 + 16] = v15;
    }
  }
  else
  {
    v5 = v4 & 0xFFFFFFFFFFFFFFFELL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_30B0);
    v7 = 0;
    v8 = _mm_load_si128((const __m128i *)&xmmword_30F0);
    v9 = _mm_load_si128((const __m128i *)&xmmword_30C0);
    v10 = _mm_load_si128((const __m128i *)&xmmword_30D0);
    do
    {
      v11 = _mm_add_epi32(_mm_add_epi32(si128, si128), si128);
      *(__m128i *)&v1[4 * v7] = v11;
      *(__m128i *)&v1[4 * v7 + 16] = _mm_add_epi32(v11, v8);
      v12 = _mm_add_epi32(si128, v9);
      v13 = _mm_add_epi32(_mm_add_epi32(v12, v12), v12);
      *(__m128i *)&v1[4 * v7 + 32] = v13;
      *(__m128i *)&v1[4 * v7 + 48] = _mm_add_epi32(v13, v8);
      v7 += 16;
      si128 = _mm_add_epi32(si128, v10);
      v5 -= 2LL;
    }
    while ( v5 );
    if ( (v4 & 1) != 0 )
      goto LABEL_9;
  }
  if ( v2 != n )
  {
LABEL_11:
    v16 = 3 * v2;
    do
    {
      *(_DWORD *)&v1[4 * v2++] = v16;
      v16 += 3;
    }
    while ( n != v2 );
  }
  return *(_DWORD *)&v1[4 * (n / 2)];
}


/* Function: stack_alias @ 0x15D0 */
__int64 __fastcall stack_alias(int *p1, int *p2)
{
  return 20;
}


/* Function: test_stack_memory @ 0x15E0 */
void __cdecl test_stack_memory()
{
  __int64 v0; // rbx
  __m128i si128; // xmm2
  __m128i v2; // xmm8
  __m128i v3; // xmm9
  __m128i v4; // xmm3
  __m128i v5; // xmm4
  __m128i v6; // xmm5
  __m128i v7; // xmm6
  __m128i v8; // xmm7
  __m128i v9; // xmm1
  _OWORD v10[64]; // [rsp+0h] [rbp-808h]
  char v11; // [rsp+400h] [rbp-408h]

  puts(s);
  v0 = 0;
  printf("MEM-L1-01 (local_vars): %d\n", 20);
  printf("MEM-L1-02 (local_array): %d\n", 10);
  printf("MEM-L1-03 (local_struct): %d\n", 15);
  printf("MEM-L1-04 (address_of_local): %d\n", 42);
  printf("MEM-L1-05 (address_of_array): %d\n", 2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_3010);
  v2 = _mm_load_si128((const __m128i *)&xmmword_3020);
  v3 = _mm_load_si128((const __m128i *)&xmmword_3030);
  v4 = _mm_load_si128((const __m128i *)&xmmword_3040);
  v5 = _mm_load_si128((const __m128i *)&xmmword_3050);
  v6 = _mm_load_si128((const __m128i *)&xmmword_3060);
  v7 = _mm_load_si128((const __m128i *)&xmmword_3070);
  v8 = _mm_load_si128((const __m128i *)&xmmword_3080);
  v9 = _mm_load_si128((const __m128i *)&xmmword_3090);
  do
  {
    v10[v0] = si128;
    v10[v0 + 1] = _mm_add_epi8(si128, v2);
    v10[v0 + 2] = _mm_add_epi8(si128, v3);
    v10[v0 + 3] = _mm_add_epi8(si128, v4);
    v10[v0 + 4] = _mm_add_epi8(si128, v5);
    v10[v0 + 5] = _mm_add_epi8(si128, v6);
    v10[v0 + 6] = _mm_add_epi8(si128, v7);
    v10[v0 + 7] = _mm_add_epi8(si128, v8);
    v0 += 8;
    si128 = _mm_xor_si128(si128, v9);
  }
  while ( v0 != 128 );
  printf("MEM-L2-01 (large_stack_frame): %d\n", v11);
  printf("MEM-L2-02 (vla_stack): %d\n", 10);
  printf("MEM-L2-03 (alloca_usage): %d\n", 15);
  printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1780 */
int __fastcall heap_basic(int n)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rsi
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm3
  __m128i v12; // xmm4
  __m128i si128; // xmm0
  __m128i v14; // xmm1
  int v15; // esi
  int v16; // ebx

  v2 = malloc(4LL * n);
  if ( !v2 )
    return -1;
  if ( n <= 0 )
    goto LABEL_14;
  if ( (unsigned int)n < 8 )
  {
    v3 = 0;
    goto LABEL_12;
  }
  v3 = n & 0xFFFFFFF8;
  v5 = ((unsigned __int64)(v3 - 8) >> 3) + 1;
  if ( v3 == 8 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_30A0);
    v8 = 0;
    if ( (v5 & 1) != 0 )
    {
LABEL_10:
      v14 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_30C0), si128);
      *(__m128i *)&v2[v8] = si128;
      *(__m128i *)&v2[v8 + 4] = v14;
    }
  }
  else
  {
    v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
    v7 = _mm_load_si128((const __m128i *)&xmmword_30B0);
    v8 = 0;
    v9 = _mm_load_si128((const __m128i *)&xmmword_30C0);
    v10 = _mm_load_si128((const __m128i *)&xmmword_30D0);
    v11 = _mm_load_si128((const __m128i *)&xmmword_30E0);
    do
    {
      v12 = _mm_add_epi32(v7, v7);
      *(__m128i *)&v2[v8] = v12;
      *(__m128i *)&v2[v8 + 4] = _mm_add_epi32(v12, v9);
      *(__m128i *)&v2[v8 + 8] = _mm_add_epi32(v12, v10);
      *(__m128i *)&v2[v8 + 12] = _mm_add_epi32(v12, v11);
      v8 += 16;
      v7 = _mm_add_epi32(v7, v10);
      v6 -= 2LL;
    }
    while ( v6 );
    si128 = _mm_add_epi32(v7, v7);
    if ( (v5 & 1) != 0 )
      goto LABEL_10;
  }
  if ( v3 != n )
  {
LABEL_12:
    v15 = 2 * v3;
    do
    {
      v2[v3++] = v15;
      v15 += 2;
    }
    while ( n != v3 );
  }
LABEL_14:
  v16 = v2[n / 2];
  free(v2);
  return v16;
}


/* Function: heap_calloc @ 0x18B0 */
int __fastcall heap_calloc(int n)
{
  _DWORD *v1; // rax
  int v2; // ebx
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __m128i v8; // xmm0
  __int64 v9; // rbp
  __m128i v10; // xmm1
  unsigned __int64 v11; // rdi
  __int64 v12; // rdi
  __m128i v13; // xmm0
  __m128i v14; // xmm1

  v1 = calloc(n, 4u);
  if ( v1 )
  {
    v2 = 0;
    if ( n >= 2 )
    {
      v3 = (unsigned int)n;
      v4 = (unsigned int)n - 1LL;
      if ( v4 >= 8 )
      {
        v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
        v7 = ((unsigned __int8)(((v4 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 3;
        if ( (v4 & 0xFFFFFFFFFFFFFFF8LL) - 8 >= 0x18 )
        {
          v11 = ((((v4 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
          v8 = 0;
          v9 = 0;
          v10 = 0;
          do
          {
            v8 = _mm_add_epi32(
                   _mm_loadu_si128((const __m128i *)&v1[v9 + 25]),
                   _mm_add_epi32(
                     _mm_add_epi32(
                       _mm_loadu_si128((const __m128i *)&v1[v9 + 17]),
                       _mm_loadu_si128((const __m128i *)&v1[v9 + 9])),
                     _mm_add_epi32(_mm_loadu_si128((const __m128i *)&v1[v9 + 1]), v8)));
            v10 = _mm_add_epi32(
                    _mm_loadu_si128((const __m128i *)&v1[v9 + 29]),
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_loadu_si128((const __m128i *)&v1[v9 + 21]),
                        _mm_loadu_si128((const __m128i *)&v1[v9 + 13])),
                      _mm_add_epi32(_mm_loadu_si128((const __m128i *)&v1[v9 + 5]), v10)));
            v9 += 32;
            v11 -= 4LL;
          }
          while ( v11 );
        }
        else
        {
          v8 = 0;
          v9 = 0;
          v10 = 0;
        }
        if ( (((unsigned __int8)(((v4 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 3) != 0 )
        {
          do
          {
            v12 = (4 * v9) | 4;
            v8 = _mm_add_epi32(v8, _mm_loadu_si128((const __m128i *)((char *)v1 + v12)));
            v10 = _mm_add_epi32(v10, _mm_loadu_si128((const __m128i *)((char *)v1 + v12 + 16)));
            v9 += 8;
            --v7;
          }
          while ( v7 );
        }
        v13 = _mm_add_epi32(v8, v10);
        v14 = _mm_add_epi32(_mm_shuffle_epi32(v13, 238), v13);
        v2 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v14, 85), v14));
        if ( v4 == v6 )
          goto LABEL_15;
        v5 = v6 | 1;
      }
      else
      {
        v2 = 0;
        v5 = 1;
      }
      do
        v2 += v1[v5++];
      while ( v3 != v5 );
    }
LABEL_15:
    free(v1);
    return v2;
  }
  return -1;
}


/* Function: heap_realloc @ 0x1A10 */
int __cdecl heap_realloc()
{
  _OWORD *v0; // rax
  void *v1; // rbx
  char *v2; // rax
  int v3; // ebp

  v0 = malloc(0x14u);
  if ( !v0 )
    return -1;
  v1 = v0;
  *v0 = xmmword_3100;
  *((_DWORD *)v0 + 4) = 5;
  v2 = (char *)realloc(v0, 0x28u);
  if ( v2 )
  {
    *(_OWORD *)(v2 + 20) = xmmword_3110;
    *((_DWORD *)v2 + 9) = 90;
    v3 = -3;
    if ( *((_DWORD *)v2 + 2) == 3 )
      v3 = 50;
    v1 = v2;
  }
  else
  {
    v3 = -2;
  }
  free(v1);
  return v3;
}


/* Function: heap_array @ 0x1A90 */
int __fastcall heap_array(int n)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rdi
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm3
  __m128i v12; // xmm4
  __m128i v13; // xmm4
  __m128i v14; // xmm5
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  int v17; // esi
  int v18; // ebx

  v2 = malloc(4LL * n);
  if ( !v2 )
    return -1;
  if ( n <= 0 )
    goto LABEL_14;
  if ( (unsigned int)n < 8 )
  {
    v3 = 0;
    goto LABEL_12;
  }
  v3 = n & 0xFFFFFFF8;
  v5 = ((unsigned __int64)(v3 - 8) >> 3) + 1;
  if ( v3 == 8 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_30B0);
    v8 = 0;
    if ( (v5 & 1) != 0 )
    {
LABEL_10:
      v15 = _mm_add_epi32(_mm_add_epi32(si128, si128), si128);
      v16 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_30F0), v15);
      *(__m128i *)&v2[v8] = v15;
      *(__m128i *)&v2[v8 + 4] = v16;
    }
  }
  else
  {
    v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_30B0);
    v8 = 0;
    v9 = _mm_load_si128((const __m128i *)&xmmword_30F0);
    v10 = _mm_load_si128((const __m128i *)&xmmword_30C0);
    v11 = _mm_load_si128((const __m128i *)&xmmword_30D0);
    do
    {
      v12 = _mm_add_epi32(_mm_add_epi32(si128, si128), si128);
      *(__m128i *)&v2[v8] = v12;
      *(__m128i *)&v2[v8 + 4] = _mm_add_epi32(v12, v9);
      v13 = _mm_add_epi32(si128, v10);
      v14 = _mm_add_epi32(_mm_add_epi32(v13, v13), v13);
      *(__m128i *)&v2[v8 + 8] = v14;
      *(__m128i *)&v2[v8 + 12] = _mm_add_epi32(v14, v9);
      v8 += 16;
      si128 = _mm_add_epi32(si128, v11);
      v6 -= 2LL;
    }
    while ( v6 );
    if ( (v5 & 1) != 0 )
      goto LABEL_10;
  }
  if ( v3 != n )
  {
LABEL_12:
    v17 = 3 * v3;
    do
    {
      v2[v3++] = v17;
      v17 += 3;
    }
    while ( n != v3 );
  }
LABEL_14:
  v18 = v2[n / 2];
  free(v2);
  return v18;
}


/* Function: heap_struct @ 0x1BD0 */
int __fastcall heap_struct(int x)
{
  return 3 * x;
}


/* Function: heap_nested @ 0x1BE0 */
int __fastcall heap_nested(Node **head)
{
  Node *v1; // rax
  Node *v2; // rbx
  Node *v3; // rax

  v1 = (Node *)malloc(0x10u);
  *head = v1;
  if ( !v1 )
    return -1;
  v2 = v1;
  v1->data = 10;
  v3 = (Node *)malloc(0x10u);
  v2->next = v3;
  if ( v3 )
  {
    v3->data = 20;
    v3->next = 0;
    return 0;
  }
  else
  {
    free(v2);
    return -2;
  }
}


/* Function: linked_list_heap @ 0x1C50 */
int __cdecl linked_list_heap()
{
  _DWORD *v0; // rax
  int v1; // r12d
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  _QWORD *v5; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  _QWORD *v12; // rbp
  _QWORD *v13; // rbp
  _QWORD *v14; // rbp

  v0 = malloc(0x10u);
  v1 = -1;
  if ( v0 )
  {
    v2 = v0;
    *v0 = 0;
    v3 = malloc(0x10u);
    if ( v3 )
    {
      v4 = v3;
      *(_DWORD *)v3 = 10;
      v3[1] = 0;
      v2[1] = v3;
      v5 = malloc(0x10u);
      if ( v5 )
      {
        v6 = v5;
        *(_DWORD *)v5 = 20;
        v5[1] = 0;
        v4[1] = v5;
        v7 = malloc(0x10u);
        if ( v7 )
        {
          v8 = v7;
          *(_DWORD *)v7 = 30;
          v7[1] = 0;
          v6[1] = v7;
          v9 = malloc(0x10u);
          if ( v9 )
          {
            *(_DWORD *)v9 = 40;
            v9[1] = 0;
            v8[1] = v9;
            v1 = 0;
            v10 = v2;
            do
            {
              v1 += *(_DWORD *)v10;
              v10 = (_QWORD *)v10[1];
            }
            while ( v10 );
            do
            {
              v11 = (_QWORD *)v2[1];
              free(v2);
              v2 = v11;
            }
            while ( v11 );
          }
          else
          {
            do
            {
              v14 = (_QWORD *)v2[1];
              free(v2);
              v2 = v14;
            }
            while ( v14 );
          }
        }
        else
        {
          do
          {
            v13 = (_QWORD *)v2[1];
            free(v2);
            v2 = v13;
          }
          while ( v13 );
        }
      }
      else
      {
        do
        {
          v12 = (_QWORD *)v2[1];
          free(v2);
          v2 = v12;
        }
        while ( v12 );
      }
    }
    else
    {
      free(v2);
    }
  }
  return v1;
}


/* Function: create_tree_node @ 0x1DC0 */
TreeNode *__fastcall create_tree_node(int data)
{
  TreeNode *result; // rax

  result = (TreeNode *)malloc(0x18u);
  if ( result )
  {
    result->data = data;
    *(_OWORD *)&result->left = 0;
  }
  return result;
}


/* Function: tree_heap_traversal @ 0x1DE0 */
int __cdecl tree_heap_traversal()
{
  return 60;
}


/* Function: memory_leak @ 0x1DF0 */
int __fastcall memory_leak(int n)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  __m128i si128; // xmm0
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __m128i v8; // xmm8
  __m128i v9; // xmm9
  __m128i v10; // xmm10
  __m128i v11; // xmm4
  __m128i v12; // xmm5
  __m128i v13; // xmm6
  __m128i v14; // xmm7
  __m128i v15; // xmm1
  __int64 v16; // rdi
  __int64 v17; // rbx
  __m128i v18; // xmm1
  __m128i v19; // xmm2

  v2 = malloc(4LL * n);
  if ( !v2 )
    return -1;
  if ( n > 0 )
  {
    if ( (unsigned int)n >= 8 )
    {
      v3 = n & 0xFFFFFFF8;
      if ( (unsigned __int64)(v3 - 8) >= 0x18 )
      {
        v7 = (((unsigned __int64)(v3 - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
        si128 = _mm_load_si128((const __m128i *)&xmmword_30B0);
        v6 = 0;
        v8 = _mm_load_si128((const __m128i *)&xmmword_3120);
        v9 = _mm_load_si128((const __m128i *)&xmmword_30C0);
        v10 = _mm_load_si128((const __m128i *)&xmmword_30F0);
        v11 = _mm_load_si128((const __m128i *)&xmmword_30D0);
        v12 = _mm_load_si128((const __m128i *)&xmmword_3130);
        v13 = _mm_load_si128((const __m128i *)&xmmword_30E0);
        v14 = _mm_load_si128((const __m128i *)&xmmword_3140);
        v15 = _mm_load_si128((const __m128i *)&xmmword_3150);
        do
        {
          *(__m128i *)&v2[v6] = si128;
          *(__m128i *)&v2[v6 + 4] = _mm_add_epi32(si128, v8);
          *(__m128i *)&v2[v6 + 8] = _mm_add_epi32(si128, v9);
          *(__m128i *)&v2[v6 + 12] = _mm_add_epi32(si128, v10);
          *(__m128i *)&v2[v6 + 16] = _mm_add_epi32(si128, v11);
          *(__m128i *)&v2[v6 + 20] = _mm_add_epi32(si128, v12);
          *(__m128i *)&v2[v6 + 24] = _mm_add_epi32(si128, v13);
          *(__m128i *)&v2[v6 + 28] = _mm_add_epi32(si128, v14);
          v6 += 32;
          si128 = _mm_add_epi32(si128, v15);
          v7 -= 4LL;
        }
        while ( v7 );
      }
      else
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_30B0);
        v6 = 0;
      }
      if ( (((unsigned __int8)((unsigned __int64)(v3 - 8) >> 3) + 1) & 3) != 0 )
      {
        v16 = (__int64)&v2[v6 + 4];
        v17 = 0;
        v18 = _mm_load_si128((const __m128i *)&xmmword_3120);
        v19 = _mm_load_si128((const __m128i *)&xmmword_30C0);
        do
        {
          *(__m128i *)(v16 + v17 - 16) = si128;
          *(__m128i *)(v16 + v17) = _mm_add_epi32(si128, v18);
          si128 = _mm_add_epi32(si128, v19);
          v17 += 32;
        }
        while ( 32LL * (((unsigned __int8)((unsigned __int64)(v3 - 8) >> 3) + 1) & 3) != v17 );
      }
      if ( v3 == n )
        return v2[n / 2];
    }
    else
    {
      v3 = 0;
    }
    do
    {
      v2[v3] = v3;
      ++v3;
    }
    while ( n != v3 );
  }
  return v2[n / 2];
}


/* Function: dangling_pointer @ 0x1FB0 */
int __cdecl dangling_pointer()
{
  _DWORD *v0; // rax
  _DWORD *v1; // rbx

  v0 = malloc(4u);
  if ( !v0 )
    return -1;
  v1 = v0;
  printf("value before free: %d\n", 42);
  free(v1);
  return *v1;
}


/* Function: double_free @ 0x1FF0 */
int __fastcall double_free(int *p)
{
  if ( p )
    return *p;
  else
    return -2;
}


/* Function: heap_overflow @ 0x2000 */
int __cdecl heap_overflow()
{
  return 0;
}


/* Function: test_heap_memory @ 0x2010 */
void __cdecl test_heap_memory()
{
  __int64 v0; // rax
  _OWORD *v1; // rax
  void *v2; // rbx
  char *v3; // rax
  int v4; // ebp
  _DWORD *v5; // rax
  void **v6; // rbx
  _DWORD *v7; // rax
  int v8; // esi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  int stat_loc; // [rsp+0h] [rbp-14h] BYREF

  stat_loc = HIDWORD(v0);
  puts(asc_3737);
  printf("HEAP-L2-01 (heap_basic): %d\n", 10);
  printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
  v1 = malloc(0x14u);
  if ( v1 )
  {
    v2 = v1;
    *v1 = xmmword_3100;
    *((_DWORD *)v1 + 4) = 5;
    v3 = (char *)realloc(v1, 0x28u);
    if ( v3 )
    {
      *(_OWORD *)(v3 + 20) = xmmword_3110;
      *((_DWORD *)v3 + 9) = 90;
      v4 = -3;
      if ( *((_DWORD *)v3 + 2) == 3 )
        v4 = 50;
      v2 = v3;
    }
    else
    {
      v4 = -2;
    }
    free(v2);
  }
  else
  {
    v4 = -1;
  }
  printf("HEAP-L2-03 (heap_realloc): %d\n", v4);
  printf("HEAP-L2-04 (heap_array): %d\n", 15);
  printf("HEAP-L2-05 (heap_struct): %d\n", 15);
  v5 = malloc(0x10u);
  if ( v5 )
  {
    v6 = (void **)v5;
    *v5 = 10;
    v7 = malloc(0x10u);
    v6[1] = v7;
    if ( v7 )
    {
      *v7 = 20;
      *((_QWORD *)v7 + 1) = 0;
      v8 = 0;
    }
    else
    {
      free(v6);
      v8 = -2;
    }
    printf("HEAP-L2-06 (heap_nested): %d\n", v8);
    free(v6[1]);
    free(v6);
  }
  else
  {
    printf("HEAP-L2-06 (heap_nested): %d\n", -1);
  }
  v9 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n", v9);
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
  printf("HEAP-L3-03 (memory_leak): %d\n", 2);
  printf("HEAP-L3-04 (dangling_pointer): ");
  v10 = fork();
  if ( !v10 )
  {
    v11 = dangling_pointer();
    printf(aD, v11);
    exit(0);
  }
  if ( v10 <= 0 )
  {
    perror(aFork_0);
  }
  else
  {
    waitpid(v10, &stat_loc, 0);
    if ( (stat_loc & 0x7F) != 0 )
    {
      if ( ((stat_loc & 0x7F) << 24) + 0x1000000 >= 0x2000000 )
        printf(byte_33FA, stat_loc & 0x7F);
    }
    else
    {
      printf(&byte_33D5, BYTE1(stat_loc));
    }
  }
}


/* Function: global_var_access @ 0x2240 */
int __cdecl global_var_access()
{
  return ++global_counter;
}


/* Function: global_var_read @ 0x2250 */
int __cdecl global_var_read()
{
  return 2 * global_counter;
}


/* Function: global_array_access @ 0x2260 */
int __fastcall global_array_access(int idx)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)idx <= 9 )
    return global_array[idx];
  return result;
}


/* Function: static_local @ 0x2280 */
int __fastcall static_local(int reset)
{
  int result; // eax

  result = 0;
  if ( !reset )
    result = static_local_counter + 1;
  static_local_counter = result;
  return result;
}


/* Function: call_static_func @ 0x22A0 */
int __fastcall call_static_func(int x)
{
  return 2 * x + 1;
}


/* Function: access_extern_global @ 0x22B0 */
int __cdecl access_extern_global()
{
  return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x22C0 */
int __cdecl call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x22D0 */
int __cdecl read_const_data()
{
  return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x22E0 */
int __cdecl access_bss_var()
{
  return 0;
}


/* Function: access_bss_buffer @ 0x22F0 */
int __cdecl access_bss_buffer()
{
  return 0;
}


/* Function: global_struct_access @ 0x2300 */
int __cdecl global_struct_access()
{
  return 30;
}


/* Function: set_file_static @ 0x2310 */
void __fastcall set_file_static(int val)
{
  file_scope_static = val;
}


/* Function: get_file_static @ 0x2320 */
int __cdecl get_file_static()
{
  return file_scope_static;
}


/* Function: set_global_callback @ 0x2330 */
void __fastcall set_global_callback(int (*f)(int))
{
  global_func_ptr = (__int64)f;
}


/* Function: call_global_callback @ 0x2340 */
int __fastcall call_global_callback(int x)
{
  if ( global_func_ptr )
    return global_func_ptr(x);
  else
    return -1;
}


/* Function: global_heap_store @ 0x2360 */
int __fastcall global_heap_store(int *p)
{
  global_heap_ptr = (__int64)p;
  if ( p )
    return *p;
  else
    return -1;
}


/* Function: static_complex_init @ 0x2380 */
int __cdecl static_complex_init()
{
  return 15;
}


/* Function: tls_access @ 0x2390 */
int __fastcall tls_access(int val)
{
  return 2 * val;
}


/* Function: init_order_test @ 0x23A0 */
int __cdecl init_order_test()
{
  return 20;
}


/* Function: test_static_global @ 0x23B0 */
void __cdecl test_static_global()
{
  int v0; // eax
  int v1; // [rsp+Ch] [rbp-Ch] BYREF

  puts(asc_3755);
  printf("STM-L1-01 (global_var_access): %d\n", ++global_counter);
  printf("STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
  printf("STM-L1-02 (global_array_access): %d\n", 5);
  static_local_counter = 1;
  printf("STM-L1-03 (static_local): %d\n", 1);
  printf("STM-L1-03 (static_local): %d\n", ++static_local_counter);
  printf("STM-L1-04 (call_static_func): %d\n", 11);
  printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
  v0 = extern_function(5);
  printf("STM-L2-02 (call_extern_func): %d\n", v0);
  printf("STM-L2-03 (read_const_data): %d\n", const_string[4] + 42);
  printf("STM-L2-04 (access_bss_var): %d\n", 0);
  printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
  printf("STM-L2-05 (global_struct_access): %d\n", 30);
  file_scope_static = 50;
  printf("STM-L2-06 (file_static): %d\n", 50);
  global_func_ptr = (__int64 (__fastcall *)(_QWORD))double_value;
  printf("STM-L2-07 (global_func_ptr): %d\n", 10);
  v1 = 100;
  global_heap_ptr = (__int64)&v1;
  printf("STM-L2-08 (global_heap_store): %d\n", 100);
  printf("STM-L2-09 (static_complex_init): %d\n", 15);
  printf("STM-L3-01 (tls_access): %d\n", 20);
  printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x2580 */
int __fastcall double_value(int x)
{
  return 2 * x;
}


/* Function: memop_memset @ 0x2590 */
int __fastcall memop_memset(void *buf, size_t size, int fill_value)
{
  int result; // eax

  result = -1;
  if ( buf )
  {
    if ( size )
    {
      memset(buf, fill_value, size);
      return *(unsigned __int8 *)buf;
    }
  }
  return result;
}


/* Function: memop_memcpy @ 0x25C0 */
int __fastcall memop_memcpy(void *dst, const void *src, size_t n)
{
  int result; // eax

  result = -1;
  if ( dst && src )
  {
    if ( n )
    {
      memcpy(dst, src, n);
      return *(_DWORD *)((char *)dst + (n & 0xFFFFFFFFFFFFFFFCLL) - 4);
    }
  }
  return result;
}


/* Function: memop_memmove @ 0x2600 */
int __fastcall memop_memmove(void *buf, size_t n)
{
  int result; // eax

  result = -1;
  if ( buf )
  {
    if ( n >= 2 )
    {
      memmove((char *)buf + 1, buf, n - 1);
      return *((char *)buf + 1);
    }
  }
  return result;
}


/* Function: memop_memcmp @ 0x2630 */
int __fastcall memop_memcmp(const void *p1, const void *p2, size_t n)
{
  int result; // eax
  int v4; // eax
  int v5; // ecx
  bool v6; // cc

  result = 0;
  if ( p1 && p2 && n )
  {
    v4 = memcmp(p1, p2, n);
    v5 = -(v4 != 0);
    v6 = v4 <= 0;
    result = 1;
    if ( v6 )
      return v5;
  }
  return result;
}


/* Function: memop_bzero @ 0x2660 */
int __fastcall memop_bzero(void *buf, size_t n)
{
  if ( !buf )
    return -1;
  memset(buf, 0, n);
  return *(unsigned __int8 *)buf;
}


/* Function: memop_bcopy @ 0x2680 */
int __fastcall memop_bcopy(const void *src, void *dst, size_t n)
{
  int result; // eax

  result = -1;
  if ( src && dst )
  {
    if ( n )
    {
      memmove(dst, src, n);
      return *(unsigned __int8 *)dst;
    }
  }
  return result;
}


/* Function: memop_unaligned_access @ 0x26B0 */
int __fastcall memop_unaligned_access(const char *buf)
{
  if ( buf )
    return *(_DWORD *)(buf + 1);
  else
    return -1;
}


/* Function: memop_memory_barrier @ 0x26C0 */
int __fastcall memop_memory_barrier(volatile int *flag)
{
  volatile int v1; // eax

  if ( !flag )
    return -1;
  v1 = *flag;
  _mm_mfence();
  return *flag + v1;
}


/* Function: test_memory_op_functions @ 0x26E0 */
void __cdecl test_memory_op_functions()
{
  int v0; // [rsp+4h] [rbp-14h]

  puts(asc_3779);
  printf("MEMOP-L2-01: %d\n", 65);
  printf("MEMOP-L2-02: %d\n", 50);
  printf("MEMOP-L2-03: %c\n", 72);
  printf("MEMOP-L2-04: %d\n", -1);
  printf("MEMOP-L2-05: %d\n", 0);
  printf("MEMOP-L2-06: %d\n", 1);
  printf("MEMOP-L3-01: 0x%x\n", 67305985);
  v0 = 5;
  _mm_mfence();
  printf("MEMOP-L3-02: %d\n", v0 + 5);
}


/* Function: main @ 0x27C0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}


/* Function: extern_function @ 0x27E0 */
int __fastcall extern_function(int x)
{
  return 3 * x;
}


/* Function: .term_proc @ 0x27E4 */
void term_proc()
{
  ;
}


/* FAILED to decompile: free @ 0x60D0 */

/* FAILED to decompile: __libc_start_main @ 0x60D8 */

/* FAILED to decompile: puts @ 0x60E0 */

/* FAILED to decompile: printf @ 0x60E8 */

/* FAILED to decompile: memset @ 0x60F0 */

/* FAILED to decompile: memcmp @ 0x60F8 */

/* FAILED to decompile: calloc @ 0x6100 */

/* FAILED to decompile: memcpy @ 0x6108 */

/* FAILED to decompile: malloc @ 0x6110 */

/* FAILED to decompile: realloc @ 0x6118 */

/* FAILED to decompile: memmove @ 0x6120 */

/* FAILED to decompile: waitpid @ 0x6128 */

/* FAILED to decompile: perror @ 0x6130 */

/* FAILED to decompile: exit @ 0x6138 */

/* FAILED to decompile: fork @ 0x6140 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6148 */

/* FAILED to decompile: __gmon_start__ @ 0x6158 */

/* Total functions decompiled: 64, failed: 17 */
