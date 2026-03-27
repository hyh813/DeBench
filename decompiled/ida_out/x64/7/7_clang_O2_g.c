/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/7/7_clang_O2_g
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


/* Function: _start @ 0x10B0 */
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


/* Function: deregister_tm_clones @ 0x10E0 */
void *deregister_tm_clones()
{
  return &_TMC_END__;
}


/* Function: register_tm_clones @ 0x1110 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1150 */
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


/* Function: frame_dummy @ 0x1190 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_fake_branch @ 0x11A0 */
int __fastcall param_fake_branch(int x)
{
  return x;
}


/* Function: call_fake_branch @ 0x11B0 */
int __cdecl call_fake_branch()
{
  return 10;
}


/* Function: param_opaque_predicate @ 0x11C0 */
int __fastcall param_opaque_predicate(int x)
{
  int v1; // r8d
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  int v5; // esi
  int v6; // r8d
  int result; // eax

  v1 = 2 * x;
  v2 = -1;
  if ( x != -1 )
  {
    v3 = x;
    v4 = x + 1;
    do
    {
      v2 = v4;
      v4 = v3 % v4;
      v3 = v2;
    }
    while ( v4 );
  }
  v5 = (x * x + (v1 | 1)) ^ ((x + 1) * (x + 1));
  v6 = v1 + 10;
  result = 3 * x + 20;
  if ( !(v5 | v2 ^ 1) )
    return v6;
  return result;
}


/* Function: call_opaque_predicate @ 0x1220 */
int __cdecl call_opaque_predicate()
{
  int v0; // edx
  int v1; // eax
  int v2; // ecx
  int result; // eax

  v0 = 6;
  v1 = 5;
  do
  {
    v2 = v0;
    v0 = v1 % v0;
    v1 = v2;
  }
  while ( v0 );
  result = 35;
  if ( v2 == 1 )
    return 20;
  return result;
}


/* Function: param_instruction_substitution @ 0x1250 */
int __fastcall param_instruction_substitution(int x)
{
  return (x & 0xF) + ((unsigned int)x >> 1) + 21 * x;
}


/* Function: call_instruction_substitution @ 0x1270 */
int __cdecl call_instruction_substitution()
{
  return 225;
}


/* Function: decrypt_string @ 0x1280 */
const char *__fastcall decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
  char v6; // al
  char *v7; // rcx

  strncpy(buffer, encrypted, len);
  buffer[len - 1] = 0;
  v6 = *buffer;
  if ( *buffer )
  {
    v7 = buffer + 1;
    do
    {
      *(v7 - 1) = key ^ v6;
      v6 = *v7++;
    }
    while ( v6 );
  }
  return buffer;
}


/* Function: param_string_encryption @ 0x12D0 */
int __cdecl param_string_encryption()
{
  char v0; // al
  char *v1; // rcx
  int v2; // ebx
  char v4; // [rsp+0h] [rbp-28h] BYREF
  _BYTE v5[39]; // [rsp+1h] [rbp-27h] BYREF

  strncpy(&v4, &param_string_encryption_encrypted, 0x20u);
  v5[30] = 0;
  v0 = v4;
  if ( v4 )
  {
    v1 = v5;
    do
    {
      *(v1 - 1) = v0 ^ 0x5A;
      v0 = *v1++;
    }
    while ( v0 );
    v2 = v4;
  }
  else
  {
    v2 = 0;
  }
  return v2 + strlen(&v4);
}


/* Function: call_string_encryption @ 0x1330 */
int __cdecl call_string_encryption()
{
  char v0; // al
  char *v1; // rcx
  int v2; // ebx
  char v4; // [rsp+0h] [rbp-28h] BYREF
  _BYTE v5[39]; // [rsp+1h] [rbp-27h] BYREF

  strncpy(&v4, &param_string_encryption_encrypted, 0x20u);
  v5[30] = 0;
  v0 = v4;
  if ( v4 )
  {
    v1 = v5;
    do
    {
      *(v1 - 1) = v0 ^ 0x5A;
      v0 = *v1++;
    }
    while ( v0 );
    v2 = v4;
  }
  else
  {
    v2 = 0;
  }
  return v2 + strlen(&v4);
}


/* Function: param_tail_call_optimized @ 0x1390 */
int __fastcall param_tail_call_optimized(int n, int acc)
{
  int result; // eax

  result = acc;
  if ( n > 0 )
    return (n - 1) * (n - 1) + n + acc - (((unsigned int)(n - 1) * (unsigned __int64)(unsigned int)(n - 2)) >> 1);
  return result;
}


/* Function: call_tail_call_optimized @ 0x13B0 */
int __cdecl call_tail_call_optimized()
{
  return 500500;
}


/* Function: param_non_tail_call @ 0x13C0 */
int __fastcall param_non_tail_call(int n)
{
  if ( n <= 0 )
    return 0;
  else
    return n + (n - 1) * (n - 1) - (((unsigned int)(n - 1) * (unsigned __int64)(unsigned int)(n - 2)) >> 1);
}


/* Function: call_non_tail_call @ 0x13E0 */
int __cdecl call_non_tail_call()
{
  return 5050;
}


/* Function: param_vectorized_loop @ 0x13F0 */
int __fastcall param_vectorized_loop(int *a, int *b, int *c, int n)
{
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  int *v8; // r10
  bool v9; // bl
  bool v10; // r10
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // r10
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rcx
  int result; // eax
  __m128i v19; // xmm0
  __int64 v20; // rsi
  __m128i v21; // xmm1
  unsigned __int64 v22; // rdi
  int *v23; // rsi
  __int64 v24; // rdi
  __m128i v25; // xmm0
  __m128i v26; // xmm1

  if ( n <= 0 )
    return 0;
  v4 = (unsigned int)n;
  if ( (unsigned int)n >= 8 )
  {
    v8 = &c[n];
    v9 = v8 > a;
    v10 = v8 > b;
    v5 = 0;
    if ( v9 && &a[n] > c || v10 && &b[n] > c )
      goto LABEL_4;
    v5 = n & 0xFFFFFFF8;
    v11 = ((unsigned __int64)(v5 - 8) >> 3) + 1;
    if ( v5 == 8 )
    {
      v13 = 0;
      if ( (v11 & 1) != 0 )
      {
LABEL_15:
        v16 = _mm_add_epi32(
                _mm_loadu_si128((const __m128i *)&b[v13 + 4]),
                _mm_loadu_si128((const __m128i *)&a[v13 + 4]));
        *(__m128i *)&c[v13] = _mm_add_epi32(
                                _mm_loadu_si128((const __m128i *)&b[v13]),
                                _mm_loadu_si128((const __m128i *)&a[v13]));
        *(__m128i *)&c[v13 + 4] = v16;
      }
    }
    else
    {
      v12 = v11 & 0x3FFFFFFFFFFFFFFELL;
      v13 = 0;
      do
      {
        v14 = _mm_add_epi32(
                _mm_loadu_si128((const __m128i *)&b[v13 + 4]),
                _mm_loadu_si128((const __m128i *)&a[v13 + 4]));
        *(__m128i *)&c[v13] = _mm_add_epi32(
                                _mm_loadu_si128((const __m128i *)&b[v13]),
                                _mm_loadu_si128((const __m128i *)&a[v13]));
        *(__m128i *)&c[v13 + 4] = v14;
        v15 = _mm_add_epi32(
                _mm_loadu_si128((const __m128i *)&b[v13 + 12]),
                _mm_loadu_si128((const __m128i *)&a[v13 + 12]));
        *(__m128i *)&c[v13 + 8] = _mm_add_epi32(
                                    _mm_loadu_si128((const __m128i *)&b[v13 + 8]),
                                    _mm_loadu_si128((const __m128i *)&a[v13 + 8]));
        *(__m128i *)&c[v13 + 12] = v15;
        v13 += 16;
        v12 -= 2;
      }
      while ( v12 );
      if ( (v11 & 1) != 0 )
        goto LABEL_15;
    }
    if ( v5 == n )
      goto LABEL_17;
    goto LABEL_4;
  }
  v5 = 0;
LABEL_4:
  v6 = (unsigned int)n + ~v5;
  v7 = n & 3;
  if ( (n & 3) != 0 )
  {
    do
    {
      c[v5] = a[v5] + b[v5];
      ++v5;
      --v7;
    }
    while ( v7 );
  }
  if ( v6 >= 3 )
  {
    do
    {
      c[v5] = a[v5] + b[v5];
      c[v5 + 1] = a[v5 + 1] + b[v5 + 1];
      c[v5 + 2] = a[v5 + 2] + b[v5 + 2];
      c[v5 + 3] = a[v5 + 3] + b[v5 + 3];
      v5 += 4;
    }
    while ( n != v5 );
  }
LABEL_17:
  if ( (unsigned int)n < 8 )
  {
    v17 = 0;
    result = 0;
    do
LABEL_28:
      result += c[v17++];
    while ( v4 != v17 );
    return result;
  }
  v17 = n & 0xFFFFFFF8;
  if ( (unsigned __int64)(v17 - 8) >= 0x18 )
  {
    v22 = (((unsigned __int64)(v17 - 8) >> 3) + 1) & 0xFFFFFFFFFFFFFFFCLL;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    do
    {
      v19 = _mm_add_epi32(
              _mm_loadu_si128((const __m128i *)&c[v20 + 24]),
              _mm_add_epi32(
                _mm_add_epi32(
                  _mm_loadu_si128((const __m128i *)&c[v20 + 16]),
                  _mm_loadu_si128((const __m128i *)&c[v20 + 8])),
                _mm_add_epi32(_mm_loadu_si128((const __m128i *)&c[v20]), v19)));
      v21 = _mm_add_epi32(
              _mm_loadu_si128((const __m128i *)&c[v20 + 28]),
              _mm_add_epi32(
                _mm_add_epi32(
                  _mm_loadu_si128((const __m128i *)&c[v20 + 20]),
                  _mm_loadu_si128((const __m128i *)&c[v20 + 12])),
                _mm_add_epi32(_mm_loadu_si128((const __m128i *)&c[v20 + 4]), v21)));
      v20 += 32;
      v22 -= 4LL;
    }
    while ( v22 );
  }
  else
  {
    v19 = 0;
    v20 = 0;
    v21 = 0;
  }
  if ( (((unsigned __int8)((unsigned __int64)(v17 - 8) >> 3) + 1) & 3) != 0 )
  {
    v23 = &c[v20 + 4];
    v24 = 0;
    do
    {
      v19 = _mm_add_epi32(v19, _mm_loadu_si128((const __m128i *)&v23[v24 - 4]));
      v21 = _mm_add_epi32(v21, _mm_loadu_si128((const __m128i *)&v23[v24]));
      v24 += 8;
    }
    while ( 8LL * (((unsigned __int8)((unsigned __int64)(v17 - 8) >> 3) + 1) & 3) != v24 );
  }
  v25 = _mm_add_epi32(v19, v21);
  v26 = _mm_add_epi32(_mm_shuffle_epi32(v25, 238), v25);
  result = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v26, 85), v26));
  if ( v17 != v4 )
    goto LABEL_28;
  return result;
}


/* Function: call_vectorized_loop @ 0x16C0 */
int __cdecl call_vectorized_loop()
{
  return 72;
}


/* Function: param_link_time_optimization @ 0x16D0 */
int __fastcall param_link_time_optimization(int x)
{
  return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x16E0 */
int __cdecl call_link_time_optimization()
{
  return 20;
}


/* Function: div_zero_handler @ 0x16F0 */
void __fastcall __noreturn div_zero_handler(int sig)
{
  div_zero_caught = 1;
  longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x1710 */
int __fastcall param_division_by_zero(int x)
{
  int v1; // eax
  int v2; // ecx

  signal(8, (__sighandler_t)div_zero_handler);
  v1 = _setjmp(jmp_buffer);
  v2 = -1;
  if ( !v1 )
    return 10 / x;
  return v2;
}


/* Function: call_division_by_zero @ 0x1750 */
int __cdecl call_division_by_zero()
{
  int v0; // ebx
  int v1; // ebp

  v0 = param_division_by_zero(5);
  v1 = param_division_by_zero(0);
  signal(8, 0);
  return v0 + v1;
}


/* Function: segv_handler @ 0x1780 */
void __fastcall __noreturn segv_handler(int sig)
{
  segv_caught = 1;
  longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x17A0 */
int __fastcall param_null_pointer_deref(int *p)
{
  int v1; // eax
  int v2; // ecx

  signal(11, (__sighandler_t)segv_handler);
  v1 = _setjmp(segv_buffer);
  v2 = -1;
  if ( !v1 )
    return *p;
  return v2;
}


/* Function: call_null_pointer_deref @ 0x17D0 */
int __cdecl call_null_pointer_deref()
{
  int v0; // ebx
  int v1; // ebp
  int p[5]; // [rsp+0h] [rbp-14h] BYREF

  p[0] = 42;
  v0 = param_null_pointer_deref(p);
  v1 = param_null_pointer_deref(0);
  signal(11, 0);
  return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x1810 */
int __fastcall param_buffer_overflow_stack(int x)
{
  return x;
}


/* Function: param_buffer_overflow_heap @ 0x1820 */
int __fastcall param_buffer_overflow_heap(int x)
{
  return x;
}


/* Function: call_buffer_overflow @ 0x1830 */
int __cdecl call_buffer_overflow()
{
  return 30;
}


/* Function: param_integer_overflow @ 0x1840 */
int __fastcall param_integer_overflow(int a, int b)
{
  int v2; // ecx
  int result; // eax

  v2 = b + a;
  if ( a <= 0 || b <= 0 || (result = -1, v2 >= 0) )
  {
    result = -2;
    if ( v2 <= 0 )
      result = b + a;
    if ( (a & b) >= 0 )
      return b + a;
  }
  return result;
}


/* Function: call_integer_overflow @ 0x1870 */
int __cdecl call_integer_overflow()
{
  return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1880 */
int __fastcall param_undefined_behavior(int i)
{
  return 2 * i;
}


/* Function: call_undefined_behavior @ 0x1890 */
int __cdecl call_undefined_behavior()
{
  return 10;
}


/* Function: param_implementation_defined @ 0x18A0 */
int __cdecl param_implementation_defined()
{
  return 47;
}


/* Function: call_implementation_defined @ 0x18B0 */
int __cdecl call_implementation_defined()
{
  return 47;
}


/* Function: test_obf_opt_edge @ 0x18C0 */
void __cdecl test_obf_opt_edge()
{
  int v0; // edx
  int v1; // eax
  int v2; // ecx
  __int64 v3; // rsi
  int v4; // ebx
  char v5; // al
  char *v6; // rcx
  int v7; // eax
  int v8; // ebx
  int v9; // ebp
  int v10; // ebx
  int v11; // ebp
  int v12[7]; // [rsp+0h] [rbp-38h] BYREF
  char v13; // [rsp+1Fh] [rbp-19h]

  puts(s);
  printf(format, 10);
  v0 = 6;
  v1 = 5;
  do
  {
    v2 = v0;
    v0 = v1 % v0;
    v1 = v2;
  }
  while ( v0 );
  v3 = 35;
  if ( v2 == 1 )
    v3 = 20;
  v4 = 0;
  printf(aObfL403D, v3);
  printf(aObfL404D, 225);
  strncpy((char *)v12, &param_string_encryption_encrypted, 0x20u);
  v13 = 0;
  v5 = v12[0];
  if ( LOBYTE(v12[0]) )
  {
    v6 = (char *)v12 + 1;
    do
    {
      *(v6 - 1) = v5 ^ 0x5A;
      v5 = *v6++;
    }
    while ( v5 );
    v4 = SLOBYTE(v12[0]);
  }
  v7 = strlen((const char *)v12);
  printf(aObfL405D, (unsigned int)(v7 + v4));
  printf(aOptL401, 500500);
  printf(aOptL401_0, 5050);
  printf(aOptL402, 72);
  printf(aOptL501LtoD, 20);
  v8 = param_division_by_zero(5);
  v9 = param_division_by_zero(0);
  signal(8, 0);
  printf(aEdgeL301D, (unsigned int)(v8 + v9));
  v12[0] = 42;
  v10 = param_null_pointer_deref(v12);
  v11 = param_null_pointer_deref(0);
  signal(11, 0);
  printf(aEdgeL302D, (unsigned int)(v10 + v11));
  printf(aEdgeL303D, 30);
  printf(aEdgeL304D, 2000000000);
  printf(aEdgeL401D, 10);
  printf(aEdgeL402D, 47);
}


/* Function: main @ 0x1AA0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: .term_proc @ 0x1AAC */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x4230 */

/* FAILED to decompile: strncpy @ 0x4238 */

/* FAILED to decompile: puts @ 0x4240 */

/* FAILED to decompile: strlen @ 0x4248 */

/* FAILED to decompile: printf @ 0x4250 */

/* FAILED to decompile: _setjmp @ 0x4258 */

/* FAILED to decompile: signal @ 0x4260 */

/* FAILED to decompile: longjmp @ 0x4268 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4270 */

/* FAILED to decompile: __gmon_start__ @ 0x4280 */

/* Total functions decompiled: 42, failed: 10 */
