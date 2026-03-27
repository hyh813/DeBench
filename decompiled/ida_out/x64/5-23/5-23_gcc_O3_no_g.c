/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/5-23/5-23_gcc_O3_no_g
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


/* Function: main @ 0x1100 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_preprocessing_features(argc, argv, envp);
  test_asm_features();
  return 0;
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
void *deregister_tm_clones()
{
  return &end;
}


/* Function: register_tm_clones @ 0x1180 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11C0 */
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


/* Function: frame_dummy @ 0x1200 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_macro_constants @ 0x1210 */
__int64 __fastcall param_macro_constants(int a1)
{
  __int64 result; // rax

  result = 512;
  if ( a1 > 1024 )
    return 64;
  return result;
}


/* Function: call_macro_constants @ 0x1230 */
__int64 call_macro_constants()
{
  return 64;
}


/* Function: param_macro_functions @ 0x1240 */
__int64 __fastcall param_macro_functions(int a1, int a2)
{
  int v2; // eax

  v2 = a1 * a1;
  if ( a1 < a2 )
    a1 = a2;
  return (unsigned int)(a1 + v2);
}


/* Function: call_macro_functions @ 0x1260 */
__int64 call_macro_functions()
{
  return 30;
}


/* Function: param_conditional_compile @ 0x1270 */
__int64 __fastcall param_conditional_compile(int a1)
{
  return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0x1280 */
__int64 call_conditional_compile()
{
  return 32;
}


/* Function: param_multi_branch_compile @ 0x1290 */
__int64 __fastcall param_multi_branch_compile(int a1)
{
  return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0x12A0 */
__int64 call_multi_branch_compile()
{
  return 57122;
}


/* Function: param_macro_recursion @ 0x12B0 */
__int64 __fastcall param_macro_recursion(int a1)
{
  return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0x12C0 */
__int64 call_macro_recursion()
{
  return 116;
}


/* Function: param_stringize @ 0x12D0 */
__int64 param_stringize()
{
  return 19;
}


/* Function: call_stringize @ 0x12E0 */
__int64 call_stringize()
{
  return 19;
}


/* Function: my_func @ 0x12F0 */
__int64 __fastcall my_func(int a1)
{
  return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0x1300 */
__int64 __fastcall param_token_paste(int a1)
{
  return (unsigned int)(11 * a1 + 5);
}


/* Function: call_token_paste @ 0x1310 */
__int64 call_token_paste()
{
  return 60;
}


/* Function: param_variadic_macro @ 0x1320 */
__int64 __fastcall param_variadic_macro(int a1, int a2, int a3)
{
  __printf_chk(1, "LOG: Values: %d, %d, %d\n", a1, a2, a3);
  return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0x1350 */
__int64 call_variadic_macro()
{
  __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
  return 60;
}


/* Function: param_macro_override @ 0x1390 */
__int64 __fastcall param_macro_override(int a1)
{
  return (unsigned int)(3 * a1 + 1);
}


/* Function: call_macro_override @ 0x13A0 */
__int64 call_macro_override()
{
  return 16;
}


/* Function: param_include_guard @ 0x13B0 */
__int64 param_include_guard()
{
  return 500;
}


/* Function: call_include_guard @ 0x13C0 */
__int64 call_include_guard()
{
  return 500;
}


/* Function: param_builtin_macros @ 0x13D0 */
__int64 __fastcall param_builtin_macros(int a1)
{
  __printf_chk(
    1,
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:00:37");
  return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0x1420 */
__int64 call_builtin_macros()
{
  __printf_chk(
    1,
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:00:37");
  return 382;
}


/* Function: test_preprocessing_features @ 0x1470 */
__int64 test_preprocessing_features()
{
  __printf_chk(1, asc_21F0);
  __printf_chk(1, aPpL201D, 64);
  __printf_chk(1, aPpL202D, 30);
  __printf_chk(1, aPpL203D, 32);
  __printf_chk(1, aPpL204D, 57122);
  __printf_chk(1, aPpL301D, 116);
  __printf_chk(1, aPpL302D, 19);
  __printf_chk(1, aPpL303D, 60);
  __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
  __printf_chk(1, aPpL304D, 60);
  __printf_chk(1, aPpL305D, 16);
  __printf_chk(1, aPpL306D, 500);
  __printf_chk(
    1,
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:00:37");
  return __printf_chk(1, aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x1600 */
__int64 __fastcall param_asm_basic(int a1)
{
  return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0x1610 */
__int64 call_asm_basic()
{
  return 15;
}


/* Function: param_asm_clobber @ 0x1630 */
__int64 __fastcall param_asm_clobber(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 i; // rcx

  LODWORD(result) = 0;
  for ( i = 0; (int)i < a2; i = (unsigned int)(i + 1) )
    LODWORD(result) = *(_DWORD *)(a1 + 4 * i) + result;
  return (unsigned int)result;
}


/* Function: call_asm_clobber @ 0x1650 */
__int64 call_asm_clobber()
{
  __int64 result; // rax
  __int64 i; // rcx
  _DWORD v2[6]; // [rsp+0h] [rbp-28h]
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  LODWORD(result) = 0;
  for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
    LODWORD(result) = v2[i] + result;
  return (unsigned int)result;
}


/* Function: param_asm_multi_insn @ 0x16A0 */
char __fastcall param_asm_multi_insn(_BYTE *a1, char *a2, __int64 a3)
{
  char result; // al

  while ( a3 )
  {
    result = *a2;
    *a1++ = *a2++;
    --a3;
  }
  return result;
}


/* Function: call_asm_multi_insn @ 0x16C0 */
__int64 call_asm_multi_insn()
{
  __int64 result; // rax
  char v1[10]; // [rsp+6h] [rbp-42h] BYREF
  _OWORD v2[2]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v3; // [rsp+38h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  memset(v2, 0, sizeof(v2));
  strcpy(v1, "Hello ASM");
  qmemcpy(v2, v1, 9u);
  if ( LOBYTE(v2[0]) != 72 )
    return 0xFFFFFFFFLL;
  result = 0xFFFFFFFFLL;
  if ( BYTE4(v2[0]) == 111 )
    return 42;
  return result;
}


/* Function: param_asm_simd @ 0x1760 */
__int64 __fastcall param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
  *a3 = _mm_add_epi32(*a1, *a2);
  return 0;
}


/* Function: param_simd_intrinsics @ 0x1780 */
__int64 __fastcall param_simd_intrinsics(__m128i *a1, const __m128i *a2, __m128i *a3)
{
  __int64 result; // rax

  result = 0;
  *a3 = _mm_add_epi32(_mm_load_si128(a2), *a1);
  return result;
}


/* Function: call_asm_simd @ 0x17A0 */
__int64 call_asm_simd()
{
  __m128i v1; // [rsp+20h] [rbp-28h]

  v1 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_22F0), _mm_load_si128((const __m128i *)&xmmword_2300));
  return (unsigned int)(v1.m128i_i32[3] + v1.m128i_i32[2] + v1.m128i_i32[0] + v1.m128i_i32[1]);
}


/* Function: param_asm_atomic @ 0x1820 */
__int64 __fastcall param_asm_atomic(volatile signed __int32 *a1, unsigned int a2)
{
  return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: param_atomic_c11 @ 0x1830 */
__int64 __fastcall param_atomic_c11(volatile signed __int32 *a1, unsigned int a2)
{
  return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: call_asm_atomic @ 0x1840 */
__int64 call_asm_atomic()
{
  signed __int32 v0; // eax
  signed __int32 v2; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v2 = 10;
  v0 = _InterlockedExchangeAdd(&v2, 5u);
  return (unsigned int)(v0 + v2 + 5);
}


/* Function: param_dynamic_code @ 0x1890 */
__int64 __fastcall param_dynamic_code(unsigned int a1)
{
  size_t v1; // r12
  _DWORD *v2; // rax
  void *v3; // rbp
  unsigned int v4; // r13d

  v1 = sysconf(30);
  v2 = mmap(0, v1, 7, 34, -1, 0);
  if ( v2 == (_DWORD *)-1LL )
  {
    return (unsigned int)-1;
  }
  else
  {
    v3 = v2;
    *v2 = -1065092983;
    *((_WORD *)v2 + 2) = -15611;
    v4 = ((__int64 (__fastcall *)(_QWORD))v2)(a1);
    munmap(v3, v1);
  }
  return v4;
}


/* Function: param_memory_protection @ 0x1930 */
__int64 param_memory_protection()
{
  size_t v0; // r12
  _DWORD *v1; // rax
  _DWORD *v2; // rbp
  unsigned int v3; // r13d

  v0 = sysconf(30);
  v1 = mmap(0, v0, 3, 34, -1, 0);
  if ( v1 == (_DWORD *)-1LL )
  {
    return (unsigned int)-1;
  }
  else
  {
    *v1 = 42;
    v2 = v1;
    if ( mprotect(v1, v0, 1) )
    {
      v3 = -2;
      munmap(v2, v0);
    }
    else
    {
      v3 = *v2;
      if ( mprotect(v2, v0, 3) )
        v3 = -3;
      else
        *v2 = 100;
      munmap(v2, v0);
    }
  }
  return v3;
}


/* Function: param_clobber_importance @ 0x1A00 */
__int64 __fastcall param_clobber_importance(int a1, int a2)
{
  return (unsigned int)(2 * (a2 + a1));
}


/* Function: call_asm_privileged @ 0x1A20 */
__int64 call_asm_privileged()
{
  size_t v0; // r13
  _WORD *v1; // rax
  void *v2; // rdi
  unsigned int v3; // r12d
  bool v4; // bp

  v0 = sysconf(30);
  v1 = mmap(0, v0, 7, 34, -1, 0);
  if ( v1 == (_WORD *)-1LL )
  {
    v4 = 0;
    v3 = -1;
  }
  else
  {
    *(_DWORD *)v1 = -1065092983;
    v1[2] = -15611;
    v2 = v1;
    v3 = ((__int64 (__fastcall *)(__int64))v1)(10);
    munmap(v2, v0);
    v4 = v3 == 15;
  }
  if ( (unsigned int)param_memory_protection() == 42 && v4 )
    return 77;
  return v3;
}


/* Function: param_memory_clobber_demo @ 0x1B10 */
__int64 param_memory_clobber_demo()
{
  return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x1B30 */
__int64 test_asm_features()
{
  unsigned int v0; // eax
  __int64 i; // rcx
  __int64 v2; // rdx
  signed __int32 v3; // eax
  __int64 v4; // rdx
  signed __int32 v6; // [rsp+Ch] [rbp-8Ch] BYREF
  __m128i si128; // [rsp+10h] [rbp-88h]
  __m128i v8; // [rsp+20h] [rbp-78h]
  __m128i v9; // [rsp+30h] [rbp-68h]
  char v10[10]; // [rsp+46h] [rbp-52h] BYREF
  _OWORD v11[2]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+78h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  __printf_chk(1, asc_2298);
  __printf_chk(1, aAsmL401D, 15);
  v0 = 0;
  for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
    v0 += v9.m128i_u32[i];
  __printf_chk(1, aAsmL402D, v0);
  strcpy(v10, "Hello ASM");
  memset(v11, 0, sizeof(v11));
  qmemcpy(v11, v10, 9u);
  if ( LOBYTE(v11[0]) == 72 )
  {
    v2 = 0xFFFFFFFFLL;
    if ( BYTE4(v11[0]) == 111 )
      v2 = 42;
  }
  else
  {
    v2 = 0xFFFFFFFFLL;
  }
  __printf_chk(1, aAsmL403D, v2, &v10[9]);
  si128 = _mm_load_si128((const __m128i *)&xmmword_22F0);
  v8 = _mm_load_si128((const __m128i *)&xmmword_2300);
  v9 = _mm_add_epi32(si128, v8);
  __printf_chk(1, aAsmL404D, (unsigned int)(v9.m128i_i32[3] + v9.m128i_i32[2] + v9.m128i_i32[0] + v9.m128i_i32[1]));
  v6 = 10;
  v3 = _InterlockedExchangeAdd(&v6, 5u);
  __printf_chk(1, aAsmL405D, (unsigned int)(v3 + v6 + 5));
  v4 = (unsigned int)call_asm_privileged();
  return __printf_chk(1, aAsmL406D, v4);
}


/* Function: .term_proc @ 0x1CF0 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x4020 */

/* FAILED to decompile: __stack_chk_fail @ 0x4028 */

/* FAILED to decompile: mmap @ 0x4030 */

/* FAILED to decompile: munmap @ 0x4038 */

/* FAILED to decompile: __printf_chk @ 0x4040 */

/* FAILED to decompile: mprotect @ 0x4048 */

/* FAILED to decompile: sysconf @ 0x4050 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4058 */

/* FAILED to decompile: __gmon_start__ @ 0x4068 */

/* Total functions decompiled: 57, failed: 9 */
