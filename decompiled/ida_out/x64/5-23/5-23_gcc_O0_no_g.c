/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/5-23/5-23_gcc_O0_no_g
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


/* Function: _start @ 0x1140 */
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


/* Function: deregister_tm_clones @ 0x1170 */
void *deregister_tm_clones()
{
  return &end;
}


/* Function: register_tm_clones @ 0x11A0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11E0 */
void *_do_global_dtors_aux()
{
  void *result; // rax

  if ( !_bss_start )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x1220 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_macro_constants @ 0x1229 */
__int64 __fastcall param_macro_constants(int a1)
{
  if ( a1 <= 1024 )
    return 512;
  else
    return 64;
}


/* Function: call_macro_constants @ 0x124B */
__int64 call_macro_constants()
{
  return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0x125F */
__int64 __fastcall param_macro_functions(int a1, int a2)
{
  int v2; // eax

  v2 = a1;
  if ( a2 >= a1 )
    v2 = a2;
  return (unsigned int)(a1 * a1 + v2);
}


/* Function: call_macro_functions @ 0x1284 */
__int64 call_macro_functions()
{
  return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0x129D */
__int64 __fastcall param_conditional_compile(int a1)
{
  return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0x12C2 */
__int64 call_conditional_compile()
{
  return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0x12D6 */
__int64 __fastcall param_multi_branch_compile(int a1)
{
  return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0x12F2 */
__int64 call_multi_branch_compile()
{
  return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0x1306 */
__int64 __fastcall param_macro_recursion(int a1)
{
  return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0x1319 */
__int64 call_macro_recursion()
{
  return param_macro_recursion(100);
}


/* Function: param_stringize @ 0x132D */
__int64 param_stringize()
{
  int v0; // ebx
  int v1; // ebx

  v0 = strlen("Hello World");
  v1 = strlen("1.2.3") + v0;
  return v1 + (unsigned int)strlen("155");
}


/* Function: call_stringize @ 0x138E */
__int64 call_stringize()
{
  return param_stringize(0);
}


/* Function: my_func @ 0x13A2 */
__int64 __fastcall my_func(int a1)
{
  return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0x13BB */
__int64 __fastcall param_token_paste(int a1)
{
  return a1 + 5 + (unsigned int)my_func(a1);
}


/* Function: call_token_paste @ 0x13EB */
__int64 call_token_paste()
{
  return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0x13FF */
__int64 __fastcall param_variadic_macro(int a1, int a2, int a3)
{
  printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
  return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0x1472 */
__int64 call_variadic_macro()
{
  return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x1490 */
__int64 __fastcall param_macro_override(int a1)
{
  return (unsigned int)(a1 + 1 + 2 * a1);
}


/* Function: call_macro_override @ 0x14B6 */
__int64 call_macro_override()
{
  return param_macro_override(5);
}


/* Function: header_func @ 0x14CA */
__int64 __fastcall header_func(int a1)
{
  return (unsigned int)(100 * a1);
}


/* Function: param_include_guard @ 0x14DD */
__int64 param_include_guard()
{
  return header_func(5);
}


/* Function: call_include_guard @ 0x14F1 */
__int64 call_include_guard()
{
  return param_include_guard();
}


/* Function: param_builtin_macros @ 0x1505 */
__int64 __fastcall param_builtin_macros(int a1)
{
  printf(
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:00:25");
  return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0x15A5 */
__int64 call_builtin_macros()
{
  return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x15B9 */
int test_preprocessing_features()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax

  puts(s);
  v0 = call_macro_constants();
  printf(aPpL201D, v0);
  v1 = call_macro_functions();
  printf(aPpL202D, v1);
  v2 = call_conditional_compile();
  printf(aPpL203D, v2);
  v3 = call_multi_branch_compile();
  printf(aPpL204D, v3);
  v4 = call_macro_recursion();
  printf(aPpL301D, v4);
  v5 = call_stringize();
  printf(aPpL302D, v5);
  v6 = call_token_paste();
  printf(aPpL303D, v6);
  v7 = call_variadic_macro();
  printf(aPpL304D, v7);
  v8 = call_macro_override();
  printf(aPpL305D, v8);
  v9 = call_include_guard();
  printf(aPpL306D, v9);
  v10 = call_builtin_macros();
  return printf(aPpL307D, v10);
}


/* Function: param_asm_basic @ 0x1733 */
__int64 __fastcall param_asm_basic(int a1)
{
  return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0x1750 */
__int64 call_asm_basic()
{
  return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x1764 */
__int64 __fastcall param_asm_clobber(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 i; // rcx

  LODWORD(result) = 0;
  for ( i = 0; (int)i < a2; i = (unsigned int)(i + 1) )
    LODWORD(result) = *(_DWORD *)(a1 + 4 * i) + result;
  return (unsigned int)result;
}


/* Function: call_asm_clobber @ 0x179A */
__int64 call_asm_clobber()
{
  _DWORD v1[6]; // [rsp+0h] [rbp-20h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-8h]

  v2 = __readfsqword(0x28u);
  v1[0] = 1;
  v1[1] = 2;
  v1[2] = 3;
  v1[3] = 4;
  v1[4] = 5;
  return param_asm_clobber((__int64)v1, 5);
}


/* Function: param_asm_multi_insn @ 0x17FF */
char __fastcall param_asm_multi_insn(_BYTE *a1, char *a2, __int64 a3)
{
  char result; // al
  char *v6; // rcx
  __int64 i; // rdx

  result = a3;
  v6 = a2;
  for ( i = a3; i; --i )
  {
    result = *v6;
    *a1++ = *v6++;
  }
  return result;
}


/* Function: call_asm_multi_insn @ 0x184D */
__int64 call_asm_multi_insn()
{
  char v1[10]; // [rsp+6h] [rbp-3Ah] BYREF
  _QWORD v2[6]; // [rsp+10h] [rbp-30h] BYREF

  v2[5] = __readfsqword(0x28u);
  strcpy(v1, "Hello ASM");
  memset(v2, 0, 32);
  param_asm_multi_insn(v2, v1, 9);
  if ( LOBYTE(v2[0]) == 72 && BYTE4(v2[0]) == 111 )
    return 42;
  else
    return 0xFFFFFFFFLL;
}


/* Function: param_asm_simd @ 0x18E6 */
__int64 __fastcall param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
  *a3 = _mm_add_epi32(*a1, *a2);
  return 0;
}


/* Function: param_simd_intrinsics @ 0x191A */
__int64 __fastcall param_simd_intrinsics(const __m128i *a1, const __m128i *a2, __m128i *a3)
{
  __m128i si128; // [rsp+38h] [rbp-60h] BYREF
  __m128i v5; // [rsp+48h] [rbp-50h] BYREF
  __m128i v6; // [rsp+58h] [rbp-40h] BYREF
  __m128i v7; // [rsp+68h] [rbp-30h] BYREF
  __m128i v8; // [rsp+78h] [rbp-20h] BYREF
  __m128i v9; // [rsp+88h] [rbp-10h] BYREF

  si128 = _mm_load_si128(a1);
  v5 = _mm_load_si128(a2);
  v8 = _mm_load_si128(&si128);
  v9 = _mm_load_si128(&v5);
  v6 = _mm_add_epi32(_mm_load_si128(&v9), _mm_load_si128(&v8));
  v7 = _mm_load_si128(&v6);
  *a3 = _mm_load_si128(&v7);
  return 0;
}


/* Function: call_asm_simd @ 0x19B5 */
__int64 call_asm_simd()
{
  __m128i v1; // [rsp+0h] [rbp-40h] BYREF
  __m128i v2; // [rsp+10h] [rbp-30h] BYREF
  __m128i v3; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v4; // [rsp+38h] [rbp-8h]

  v4 = __readfsqword(0x28u);
  v1.m128i_i64[0] = 0x200000001LL;
  v1.m128i_i64[1] = 0x400000003LL;
  v2.m128i_i64[0] = 0x600000005LL;
  v2.m128i_i64[1] = 0x800000007LL;
  param_asm_simd(&v1, &v2, &v3);
  return (unsigned int)(v3.m128i_i32[2] + v3.m128i_i32[1] + v3.m128i_i32[0] + v3.m128i_i32[3]);
}


/* Function: param_asm_atomic @ 0x1A47 */
__int64 __fastcall param_asm_atomic(volatile signed __int32 *a1, unsigned int a2)
{
  return _InterlockedExchangeAdd(a1, a2) + a2;
}


/* Function: param_atomic_c11 @ 0x1A6E */
__int64 __fastcall param_atomic_c11(volatile signed __int32 *a1, unsigned int a2)
{
  return _InterlockedExchangeAdd(a1, a2) + a2;
}


/* Function: call_asm_atomic @ 0x1A8F */
__int64 call_asm_atomic()
{
  signed __int32 v1; // [rsp+0h] [rbp-10h] BYREF
  int v2; // [rsp+4h] [rbp-Ch]
  unsigned __int64 v3; // [rsp+8h] [rbp-8h]

  v3 = __readfsqword(0x28u);
  v1 = 10;
  v2 = param_asm_atomic(&v1, 5u);
  return (unsigned int)(v1 + v2);
}


/* Function: param_dynamic_code @ 0x1AE3 */
__int64 __fastcall param_dynamic_code(unsigned int a1)
{
  unsigned int v2; // [rsp+14h] [rbp-2Ch]
  __int64 len; // [rsp+18h] [rbp-28h]
  _WORD *addr; // [rsp+20h] [rbp-20h]

  len = sysconf(30);
  addr = mmap(0, len, 7, 34, -1, 0);
  if ( addr == (_WORD *)-1LL )
    return 0xFFFFFFFFLL;
  *(_DWORD *)addr = -1065092983;
  addr[2] = -15611;
  v2 = ((__int64 (__fastcall *)(_QWORD))addr)(a1);
  munmap(addr, len);
  return v2;
}


/* Function: param_memory_protection @ 0x1BA8 */
__int64 param_memory_protection()
{
  unsigned int v1; // [rsp+4h] [rbp-1Ch]
  __int64 len; // [rsp+8h] [rbp-18h]
  _DWORD *addr; // [rsp+10h] [rbp-10h]

  len = sysconf(30);
  addr = mmap(0, len, 3, 34, -1, 0);
  if ( addr == (_DWORD *)-1LL )
    return 0xFFFFFFFFLL;
  *addr = 42;
  if ( mprotect(addr, len, 1) )
  {
    munmap(addr, len);
    return 4294967294LL;
  }
  else
  {
    v1 = *addr;
    if ( mprotect(addr, len, 3) )
    {
      munmap(addr, len);
      return 4294967293LL;
    }
    else
    {
      *addr = 100;
      munmap(addr, len);
      return v1;
    }
  }
}


/* Function: param_clobber_importance @ 0x1CA7 */
__int64 __fastcall param_clobber_importance(int a1, int a2)
{
  return (unsigned int)(2 * (a2 + a1));
}


/* Function: call_asm_privileged @ 0x1CDD */
__int64 call_asm_privileged()
{
  unsigned int v1; // [rsp+4h] [rbp-Ch]
  int v2; // [rsp+8h] [rbp-8h]
  int v3; // [rsp+Ch] [rbp-4h]

  v1 = param_dynamic_code(0xAu);
  v2 = param_memory_protection();
  v3 = param_clobber_importance(3, 7);
  if ( v1 == 15 && v2 == 42 && v3 == 20 )
    return 77;
  else
    return v1;
}


/* Function: param_memory_clobber_demo @ 0x1D33 */
__int64 param_memory_clobber_demo()
{
  return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x1D57 */
int test_asm_features()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax

  puts(asc_2210);
  v0 = call_asm_basic();
  printf(aAsmL401D, v0);
  v1 = call_asm_clobber();
  printf(aAsmL402D, v1);
  v2 = call_asm_multi_insn();
  printf(aAsmL403D, v2);
  v3 = call_asm_simd();
  printf(aAsmL404D, v3);
  v4 = call_asm_atomic();
  printf(aAsmL405D, v4);
  v5 = call_asm_privileged();
  return printf(aAsmL406D, v5);
}


/* Function: main @ 0x1E31 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}


/* Function: .term_proc @ 0x1E54 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x4020 */

/* FAILED to decompile: puts @ 0x4028 */

/* FAILED to decompile: strlen @ 0x4030 */

/* FAILED to decompile: __stack_chk_fail @ 0x4038 */

/* FAILED to decompile: mmap @ 0x4040 */

/* FAILED to decompile: printf @ 0x4048 */

/* FAILED to decompile: munmap @ 0x4050 */

/* FAILED to decompile: mprotect @ 0x4058 */

/* FAILED to decompile: sysconf @ 0x4060 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4068 */

/* FAILED to decompile: __gmon_start__ @ 0x4078 */

/* Total functions decompiled: 60, failed: 11 */
