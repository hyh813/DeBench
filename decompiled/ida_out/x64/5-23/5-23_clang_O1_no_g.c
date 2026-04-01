/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/5-23/5-23_clang_O1_no_g
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
void *deregister_tm_clones()
{
  return &end;
}


/* Function: register_tm_clones @ 0x1100 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1140 */
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


/* Function: frame_dummy @ 0x1180 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_macro_constants @ 0x1190 */
__int64 __fastcall param_macro_constants(int a1)
{
  __int64 result; // rax

  result = 512;
  if ( a1 >= 1025 )
    return 64;
  return result;
}


/* Function: call_macro_constants @ 0x11B0 */
__int64 call_macro_constants()
{
  return 64;
}


/* Function: param_macro_functions @ 0x11C0 */
__int64 __fastcall param_macro_functions(int a1, int a2)
{
  if ( a1 > a2 )
    a2 = a1;
  return (unsigned int)(a2 + a1 * a1);
}


/* Function: call_macro_functions @ 0x11D0 */
__int64 call_macro_functions()
{
  return 30;
}


/* Function: param_conditional_compile @ 0x11E0 */
__int64 __fastcall param_conditional_compile(int a1)
{
  return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0x11F0 */
__int64 call_conditional_compile()
{
  return 32;
}


/* Function: param_multi_branch_compile @ 0x1200 */
__int64 __fastcall param_multi_branch_compile(int a1)
{
  return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0x1210 */
__int64 call_multi_branch_compile()
{
  return 57122;
}


/* Function: param_macro_recursion @ 0x1220 */
__int64 __fastcall param_macro_recursion(int a1)
{
  return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0x1230 */
__int64 call_macro_recursion()
{
  return 116;
}


/* Function: param_stringize @ 0x1240 */
__int64 param_stringize()
{
  return 19;
}


/* Function: call_stringize @ 0x1250 */
__int64 call_stringize()
{
  return 19;
}


/* Function: my_func @ 0x1260 */
__int64 __fastcall my_func(int a1)
{
  return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0x1270 */
__int64 __fastcall param_token_paste(int a1)
{
  return (unsigned int)(11 * a1 + 5);
}


/* Function: call_token_paste @ 0x1280 */
__int64 call_token_paste()
{
  return 60;
}


/* Function: param_variadic_macro @ 0x1290 */
__int64 __fastcall param_variadic_macro(int a1, int a2, int a3)
{
  printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
  return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0x12B0 */
__int64 call_variadic_macro()
{
  printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
  return 60;
}


/* Function: param_macro_override @ 0x12E0 */
__int64 __fastcall param_macro_override(int a1)
{
  return (unsigned int)(3 * a1 + 1);
}


/* Function: call_macro_override @ 0x12F0 */
__int64 call_macro_override()
{
  return 16;
}


/* Function: param_include_guard @ 0x1300 */
__int64 param_include_guard()
{
  return 500;
}


/* Function: call_include_guard @ 0x1310 */
__int64 call_include_guard()
{
  return 500;
}


/* Function: param_builtin_macros @ 0x1320 */
__int64 __fastcall param_builtin_macros(int a1)
{
  printf(
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:00:48");
  return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0x1360 */
__int64 call_builtin_macros()
{
  printf(
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:00:48");
  return 382;
}


/* Function: test_preprocessing_features @ 0x13A0 */
void __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> test_preprocessing_features()
{
  puts(s);
  printf(aPpL201D, 64);
  printf(aPpL202D, 30);
  printf(aPpL203D, 32);
  printf(aPpL204D, 57122);
  printf(aPpL301D, 116);
  printf(aPpL302D, 19);
  printf(aPpL303D, 60);
  printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
  printf(aPpL304D, 60);
  printf(aPpL305D, 16);
  printf(aPpL306D, 500);
  printf(
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:00:48");
  printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x14D0 */
__int64 __fastcall param_asm_basic(int a1)
{
  return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0x14E0 */
__int64 call_asm_basic()
{
  return 15;
}


/* Function: param_asm_clobber @ 0x14F0 */
__int64 __fastcall param_asm_clobber(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 i; // rcx

  LODWORD(result) = 0;
  for ( i = 0; (int)i < a2; i = (unsigned int)(i + 1) )
    LODWORD(result) = *(_DWORD *)(a1 + 4 * i) + result;
  return (unsigned int)result;
}


/* Function: call_asm_clobber @ 0x1510 */
__int64 call_asm_clobber()
{
  __int64 result; // rax
  __int64 i; // rcx
  __int128 v2; // [rsp+0h] [rbp-18h]
  int v3; // [rsp+10h] [rbp-8h]

  v3 = 5;
  v2 = xmmword_22D0;
  LODWORD(result) = 0;
  for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
    LODWORD(result) = *((_DWORD *)&v2 + i) + result;
  return (unsigned int)result;
}


/* Function: param_asm_multi_insn @ 0x1550 */
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


/* Function: call_asm_multi_insn @ 0x1570 */
__int64 call_asm_multi_insn()
{
  __int64 result; // rax
  char v1[16]; // [rsp+0h] [rbp-38h] BYREF
  _OWORD v2[2]; // [rsp+10h] [rbp-28h] BYREF

  strcpy(v1, "Hello ASM");
  memset(v2, 0, sizeof(v2));
  qmemcpy(v2, v1, 9u);
  result = 0xFFFFFFFFLL;
  if ( !(LOBYTE(v2[0]) ^ 0x48 | BYTE4(v2[0]) ^ 0x6F) )
    return 42;
  return result;
}


/* Function: param_asm_simd @ 0x15E0 */
__int64 __fastcall param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
  *a3 = _mm_add_epi32(*a1, *a2);
  return 0;
}


/* Function: param_simd_intrinsics @ 0x15F0 */
__int64 __fastcall param_simd_intrinsics(__m128i *a1, const __m128i *a2, __m128i *a3)
{
  *a3 = _mm_add_epi32(_mm_load_si128(a2), *a1);
  return 0;
}


/* Function: call_asm_simd @ 0x1600 */
__int64 call_asm_simd()
{
  __m128i v0; // xmm0

  v0 = _mm_add_epi32((__m128i)xmmword_22F0, (__m128i)xmmword_2300);
  return (unsigned int)(v0.m128i_i32[3] + v0.m128i_i32[2] + v0.m128i_i32[0] + v0.m128i_i32[1]);
}


/* Function: param_asm_atomic @ 0x1650 */
__int64 __fastcall param_asm_atomic(volatile signed __int32 *a1, unsigned int a2)
{
  return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: param_atomic_c11 @ 0x1660 */
__int64 __fastcall param_atomic_c11(volatile signed __int32 *a1, unsigned int a2)
{
  return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: call_asm_atomic @ 0x1670 */
__int64 call_asm_atomic()
{
  signed __int32 v0; // eax
  signed __int32 v2; // [rsp+0h] [rbp-4h] BYREF

  v2 = 10;
  v0 = _InterlockedExchangeAdd(&v2, 5u);
  return (unsigned int)(v2 + v0 + 5);
}


/* Function: param_dynamic_code @ 0x1690 */
__int64 __fastcall param_dynamic_code(unsigned int a1)
{
  size_t v1; // r15
  unsigned int v2; // ebp
  _DWORD *v3; // rax
  void *v4; // rbx

  v1 = sysconf(30);
  v2 = -1;
  v3 = mmap(0, v1, 7, 34, -1, 0);
  if ( v3 != (_DWORD *)-1LL )
  {
    v4 = v3;
    *((_WORD *)v3 + 2) = -15611;
    *v3 = -1065092983;
    v2 = ((__int64 (__fastcall *)(_QWORD))v3)(a1);
    munmap(v4, v1);
  }
  return v2;
}


/* Function: param_memory_protection @ 0x1700 */
__int64 param_memory_protection()
{
  size_t v0; // r14
  unsigned int v1; // ebp
  unsigned int *v2; // rax
  unsigned int *v3; // rbx
  unsigned int v4; // r15d

  v0 = sysconf(30);
  v1 = -1;
  v2 = (unsigned int *)mmap(0, v0, 3, 34, -1, 0);
  if ( v2 != (unsigned int *)-1LL )
  {
    v3 = v2;
    *v2 = 42;
    v1 = -2;
    if ( !mprotect(v2, v0, 1) )
    {
      v4 = *v3;
      v1 = -3;
      if ( !mprotect(v3, v0, 3) )
      {
        *v3 = 100;
        v1 = v4;
      }
    }
    munmap(v3, v0);
  }
  return v1;
}


/* Function: param_clobber_importance @ 0x17A0 */
__int64 __fastcall param_clobber_importance(int a1, int a2)
{
  return (unsigned int)(2 * (a2 + a1));
}


/* Function: call_asm_privileged @ 0x17B0 */
__int64 call_asm_privileged()
{
  size_t v0; // r14
  unsigned int v1; // ebp
  void *v2; // rdi
  _DWORD *v3; // rax
  void *v4; // rbx
  int v5; // ecx
  __int64 result; // rax

  v0 = sysconf(30);
  v1 = -1;
  v2 = 0;
  v3 = mmap(0, v0, 7, 34, -1, 0);
  if ( v3 != (_DWORD *)-1LL )
  {
    v4 = v3;
    *((_WORD *)v3 + 2) = -15611;
    *v3 = -1065092983;
    v1 = ((__int64 (__fastcall *)(__int64))v3)(10);
    v2 = v4;
    munmap(v4, v0);
  }
  v5 = v1 ^ 0xF | param_memory_protection(v2) ^ 0x2A;
  result = 77;
  if ( v5 )
    return v1;
  return result;
}


/* Function: param_memory_clobber_demo @ 0x1860 */
__int64 param_memory_clobber_demo()
{
  return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x1880 */
int test_asm_features()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned int v3; // eax
  __int64 i; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  signed __int32 v8; // ebx
  unsigned int v9; // eax
  __int128 v11; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+10h] [rbp-48h]
  __m128i v13; // [rsp+20h] [rbp-38h]
  char v14[40]; // [rsp+30h] [rbp-28h] BYREF

  puts(asc_22A4);
  printf(aAsmL401D, 15);
  LODWORD(v12) = 5;
  v11 = xmmword_22D0;
  v3 = 0;
  for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
    v3 += *((_DWORD *)&v11 + i);
  printf(aAsmL402D, v3, v0, i, v1, v2, v11, (_QWORD)v12);
  strcpy(v14, "Hello ASM");
  v12 = 0;
  v11 = 0;
  qmemcpy(&v11, v14, 9u);
  v7 = 0xFFFFFFFFLL;
  if ( !((unsigned __int8)v11 ^ 0x48 | BYTE4(v11) ^ 0x6F) )
    v7 = 42;
  printf(aAsmL403D, v7, &v14[9], (unsigned __int8)v11 ^ 0x48 | BYTE4(v11) ^ 0x6Fu, v5, v6, v11, v12);
  v11 = xmmword_22F0;
  *(_OWORD *)v14 = xmmword_2300;
  v13 = _mm_add_epi32((__m128i)xmmword_22F0, (__m128i)xmmword_2300);
  printf(aAsmL404D, (unsigned int)(v13.m128i_i32[3] + v13.m128i_i32[2] + v13.m128i_i32[0] + v13.m128i_i32[1]));
  LODWORD(v11) = 10;
  v8 = _InterlockedExchangeAdd((volatile signed __int32 *)&v11, 5u);
  printf(aAsmL405D, (unsigned int)(v8 + v11 + 5));
  v9 = call_asm_privileged();
  return printf(aAsmL406D, v9);
}


/* Function: main @ 0x19F0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}


/* Function: .term_proc @ 0x1A00 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x4068 */

/* FAILED to decompile: puts @ 0x4070 */

/* FAILED to decompile: mmap @ 0x4078 */

/* FAILED to decompile: printf @ 0x4080 */

/* FAILED to decompile: munmap @ 0x4088 */

/* FAILED to decompile: mprotect @ 0x4090 */

/* FAILED to decompile: sysconf @ 0x4098 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40A0 */

/* FAILED to decompile: __gmon_start__ @ 0x40B0 */

/* Total functions decompiled: 51, failed: 9 */
