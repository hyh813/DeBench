/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/7/7_clang_Os_no_g
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


/* Function: param_fake_branch @ 0x119C */
__int64 __fastcall param_fake_branch(unsigned int a1)
{
  return a1;
}


/* Function: call_fake_branch @ 0x119F */
__int64 call_fake_branch()
{
  return 10;
}


/* Function: param_opaque_predicate @ 0x11A5 */
__int64 __fastcall param_opaque_predicate(int a1)
{
  int v1; // r8d
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  int v5; // esi
  unsigned int v6; // r8d
  __int64 result; // rax

  v1 = 2 * a1;
  v2 = -1;
  if ( a1 != -1 )
  {
    v3 = a1;
    v4 = a1 + 1;
    do
    {
      v2 = v4;
      v4 = v3 % v4;
      v3 = v2;
    }
    while ( v4 );
  }
  v5 = (a1 * a1 + (v1 | 1)) ^ ((a1 + 1) * (a1 + 1));
  v6 = v1 + 10;
  result = (unsigned int)(3 * a1 + 20);
  if ( !(v5 | v2 ^ 1) )
    return v6;
  return result;
}


/* Function: call_opaque_predicate @ 0x11E9 */
__int64 call_opaque_predicate()
{
  int v0; // edx
  int v1; // eax
  int v2; // ecx
  __int64 result; // rax

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


/* Function: param_instruction_substitution @ 0x120F */
__int64 __fastcall param_instruction_substitution(unsigned int a1)
{
  return (a1 & 0xF) + (a1 >> 1) + 21 * a1;
}


/* Function: call_instruction_substitution @ 0x1223 */
__int64 call_instruction_substitution()
{
  return 225;
}


/* Function: decrypt_string @ 0x1229 */
char *__fastcall decrypt_string(char *src, char *dest, size_t a3, char a4)
{
  char v6; // al
  char *v7; // rcx

  strncpy(dest, src, a3);
  dest[a3 - 1] = 0;
  v6 = *dest;
  if ( *dest )
  {
    v7 = dest + 1;
    do
    {
      *(v7 - 1) = a4 ^ v6;
      v6 = *v7++;
    }
    while ( v6 );
  }
  return dest;
}


/* Function: param_string_encryption @ 0x1269 */
__int64 param_string_encryption()
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
  return v2 + (unsigned int)strlen(&v4);
}


/* Function: call_string_encryption @ 0x12BB */
// attributes: thunk
__int64 call_string_encryption()
{
  return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x12C0 */
__int64 __fastcall param_tail_call_optimized(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( a1 > 0 )
    return (a1 - 1) * (a1 - 1)
         + a1
         + a2
         - (unsigned int)(((unsigned int)(a1 - 1) * (unsigned __int64)(unsigned int)(a1 - 2)) >> 1);
  return result;
}


/* Function: call_tail_call_optimized @ 0x12DD */
__int64 call_tail_call_optimized()
{
  return 500500;
}


/* Function: param_non_tail_call @ 0x12E3 */
__int64 __fastcall param_non_tail_call(int a1)
{
  if ( a1 <= 0 )
    return 0;
  else
    return a1
         + (a1 - 1) * (a1 - 1)
         - (unsigned int)(((unsigned int)(a1 - 1) * (unsigned __int64)(unsigned int)(a1 - 2)) >> 1);
}


/* Function: call_non_tail_call @ 0x12FF */
__int64 call_non_tail_call()
{
  return 5050;
}


/* Function: param_vectorized_loop @ 0x1305 */
__int64 __fastcall param_vectorized_loop(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // rcx
  __int64 result; // rax

  if ( a4 <= 0 )
    return 0;
  v4 = (unsigned int)a4;
  for ( i = 0; i != a4; ++i )
    *(_DWORD *)(a3 + 4 * i) = *(_DWORD *)(a1 + 4 * i) + *(_DWORD *)(a2 + 4 * i);
  v6 = 0;
  LODWORD(result) = 0;
  do
    result = (unsigned int)(*(_DWORD *)(a3 + 4 * v6++) + result);
  while ( v4 != v6 );
  return result;
}


/* Function: call_vectorized_loop @ 0x133A */
__int64 call_vectorized_loop()
{
  __int64 i; // rax
  __m128i v1; // xmm0
  __m128i v2; // xmm1
  __m128i v4; // [rsp+0h] [rbp-28h]
  __m128i v5; // [rsp+10h] [rbp-18h] BYREF

  v5 = 0;
  v4 = 0;
  for ( i = 0; i != 32; i += 16 )
    *(__m128i *)((char *)&v4 + i) = _mm_add_epi32(
                                      _mm_load_si128((const __m128i *)((char *)&unk_2030 + i)),
                                      *(__m128i *)((char *)&unk_2010 + i));
  v1 = _mm_add_epi32(_mm_load_si128(&v5), v4);
  v2 = _mm_add_epi32(_mm_shuffle_epi32(v1, 238), v1);
  return (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v2, 85), v2));
}


/* Function: param_link_time_optimization @ 0x1397 */
__int64 __fastcall param_link_time_optimization(int a1)
{
  return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0x139E */
__int64 call_link_time_optimization()
{
  return 20;
}


/* Function: div_zero_handler @ 0x13A4 */
void __noreturn div_zero_handler()
{
  div_zero_caught = 1;
  longjmp(jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x13C0 */
__int64 __fastcall param_division_by_zero(int a1)
{
  int v1; // eax
  unsigned int v2; // ecx

  signal(8, (__sighandler_t)div_zero_handler);
  v1 = _setjmp(jmp_buffer);
  v2 = -1;
  if ( !v1 )
    return (unsigned int)(10 / a1);
  return v2;
}


/* Function: call_division_by_zero @ 0x13F8 */
__int64 call_division_by_zero()
{
  int v0; // ebx
  int v1; // ebp

  v0 = param_division_by_zero(5);
  v1 = param_division_by_zero(0);
  signal(8, 0);
  return (unsigned int)(v0 + v1);
}


/* Function: segv_handler @ 0x1427 */
void __noreturn segv_handler()
{
  segv_caught = 1;
  longjmp(segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x1443 */
__int64 __fastcall param_null_pointer_deref(unsigned int *a1)
{
  int v1; // eax
  unsigned int v2; // ecx

  signal(11, (__sighandler_t)segv_handler);
  v1 = _setjmp(segv_buffer);
  v2 = -1;
  if ( !v1 )
    return *a1;
  return v2;
}


/* Function: call_null_pointer_deref @ 0x1473 */
__int64 call_null_pointer_deref()
{
  int v0; // ebx
  int v1; // ebp
  unsigned int v3[5]; // [rsp+0h] [rbp-14h] BYREF

  v3[0] = 42;
  v0 = param_null_pointer_deref(v3);
  v1 = param_null_pointer_deref(0);
  signal(11, 0);
  return (unsigned int)(v0 + v1);
}


/* Function: param_buffer_overflow_stack @ 0x14A8 */
__int64 __fastcall param_buffer_overflow_stack(unsigned int a1)
{
  return a1;
}


/* Function: param_buffer_overflow_heap @ 0x14AB */
__int64 __fastcall param_buffer_overflow_heap(unsigned int a1)
{
  return a1;
}


/* Function: call_buffer_overflow @ 0x14AE */
__int64 call_buffer_overflow()
{
  return 30;
}


/* Function: param_integer_overflow @ 0x14B4 */
__int64 __fastcall param_integer_overflow(int a1, int a2)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = a2 + a1;
  if ( a1 <= 0 || a2 <= 0 || (result = 0xFFFFFFFFLL, v2 >= 0) )
  {
    result = 4294967294LL;
    if ( v2 <= 0 )
      result = (unsigned int)v2;
    if ( (a1 & a2) >= 0 )
      return (unsigned int)v2;
  }
  return result;
}


/* Function: call_integer_overflow @ 0x14D9 */
__int64 call_integer_overflow()
{
  return 2000000000;
}


/* Function: param_undefined_behavior @ 0x14DF */
__int64 __fastcall param_undefined_behavior(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0x14E3 */
__int64 call_undefined_behavior()
{
  return 10;
}


/* Function: param_implementation_defined @ 0x14E9 */
__int64 param_implementation_defined()
{
  return 47;
}


/* Function: call_implementation_defined @ 0x14EF */
__int64 call_implementation_defined()
{
  return 47;
}


/* Function: test_obf_opt_edge @ 0x14F5 */
int test_obf_opt_edge()
{
  int v0; // edx
  int v1; // eax
  int v2; // ecx
  __int64 v3; // rsi
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax

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
  printf(aObfL403D, v3);
  printf(aObfL404D, 225);
  v4 = param_string_encryption(aObfL404D);
  printf(aObfL405D, v4);
  printf(aOptL401, 500500);
  printf(aOptL401_0, 5050);
  v5 = call_vectorized_loop(aOptL401_0);
  printf(aOptL402, v5);
  printf(aOptL501LtoD, 20);
  v6 = call_division_by_zero(aOptL501LtoD);
  printf(aEdgeL301D, v6);
  v7 = call_null_pointer_deref(aEdgeL301D);
  printf(aEdgeL302D, v7);
  printf(aEdgeL303D, 30);
  printf(aEdgeL304D, 2000000000);
  printf(aEdgeL401D, 10);
  return printf(aEdgeL402D, 47);
}


/* Function: main @ 0x1635 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: .term_proc @ 0x1640 */
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
