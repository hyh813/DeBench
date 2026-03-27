/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/5-23/5-23_gcc_O1_no_g
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


/* Function: _start @ 0x1100 */
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


/* Function: deregister_tm_clones @ 0x1130 */
void *deregister_tm_clones()
{
  return &end;
}


/* Function: register_tm_clones @ 0x1160 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11A0 */
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


/* Function: frame_dummy @ 0x11E0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_macro_constants @ 0x11E9 */
__int64 __fastcall param_macro_constants(int a1)
{
  __int64 result; // rax

  result = 512;
  if ( a1 > 1024 )
    return 64;
  return result;
}


/* Function: call_macro_constants @ 0x1201 */
__int64 call_macro_constants()
{
  return 64;
}


/* Function: param_macro_functions @ 0x120B */
__int64 __fastcall param_macro_functions(int a1, int a2)
{
  int v2; // eax

  v2 = a1 * a1;
  if ( a1 < a2 )
    a1 = a2;
  return (unsigned int)(a1 + v2);
}


/* Function: call_macro_functions @ 0x121C */
__int64 call_macro_functions()
{
  return 30;
}


/* Function: param_conditional_compile @ 0x1226 */
__int64 __fastcall param_conditional_compile(int a1)
{
  return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0x122F */
__int64 call_conditional_compile()
{
  return 32;
}


/* Function: param_multi_branch_compile @ 0x1239 */
__int64 __fastcall param_multi_branch_compile(int a1)
{
  return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0x1245 */
__int64 call_multi_branch_compile()
{
  return 57122;
}


/* Function: param_macro_recursion @ 0x124F */
__int64 __fastcall param_macro_recursion(int a1)
{
  return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0x1257 */
__int64 call_macro_recursion()
{
  return 116;
}


/* Function: param_stringize @ 0x1261 */
__int64 param_stringize()
{
  return 19;
}


/* Function: call_stringize @ 0x126B */
__int64 call_stringize()
{
  return 19;
}


/* Function: my_func @ 0x1275 */
__int64 __fastcall my_func(int a1)
{
  return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0x127F */
__int64 __fastcall param_token_paste(int a1)
{
  return (unsigned int)(11 * a1 + 5);
}


/* Function: call_token_paste @ 0x128B */
__int64 call_token_paste()
{
  return 60;
}


/* Function: param_variadic_macro @ 0x1295 */
__int64 __fastcall param_variadic_macro(int a1, int a2, int a3)
{
  __printf_chk(1, "LOG: Values: %d, %d, %d\n", a1, a2, a3);
  return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0x12BE */
__int64 call_variadic_macro()
{
  return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x12DF */
__int64 __fastcall param_macro_override(int a1)
{
  return (unsigned int)(3 * a1 + 1);
}


/* Function: call_macro_override @ 0x12E8 */
__int64 call_macro_override()
{
  return 16;
}


/* Function: param_include_guard @ 0x12F2 */
__int64 param_include_guard()
{
  return 500;
}


/* Function: call_include_guard @ 0x12FC */
__int64 call_include_guard()
{
  return 500;
}


/* Function: param_builtin_macros @ 0x1306 */
__int64 __fastcall param_builtin_macros(int a1)
{
  __printf_chk(
    1,
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "03:00:28");
  return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0x1356 */
__int64 call_builtin_macros()
{
  return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x136D */
__int64 test_preprocessing_features()
{
  unsigned int v0; // eax
  unsigned int v1; // eax

  __printf_chk(1, asc_21F0);
  __printf_chk(1, aPpL201D, 64);
  __printf_chk(1, aPpL202D, 30);
  __printf_chk(1, aPpL203D, 32);
  __printf_chk(1, aPpL204D, 57122);
  __printf_chk(1, aPpL301D, 116);
  __printf_chk(1, aPpL302D, 19);
  __printf_chk(1, aPpL303D, 60);
  v0 = call_variadic_macro();
  __printf_chk(1, aPpL304D, v0);
  __printf_chk(1, aPpL305D, 16);
  __printf_chk(1, aPpL306D, 500);
  v1 = call_builtin_macros();
  return __printf_chk(1, aPpL307D, v1);
}


/* Function: param_asm_basic @ 0x14C7 */
__int64 __fastcall param_asm_basic(int a1)
{
  return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0x14D5 */
__int64 call_asm_basic()
{
  return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x14E4 */
__int64 __fastcall param_asm_clobber(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 i; // rcx

  LODWORD(result) = 0;
  for ( i = 0; (int)i < a2; i = (unsigned int)(i + 1) )
    LODWORD(result) = *(_DWORD *)(a1 + 4 * i) + result;
  return (unsigned int)result;
}


/* Function: call_asm_clobber @ 0x14FC */
__int64 call_asm_clobber()
{
  _QWORD v1[5]; // [rsp+0h] [rbp-28h] BYREF

  v1[3] = __readfsqword(0x28u);
  return param_asm_clobber((__int64)v1, 5);
}


/* Function: param_asm_multi_insn @ 0x153B */
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


/* Function: call_asm_multi_insn @ 0x1556 */
__int64 call_asm_multi_insn()
{
  __int64 result; // rax
  char v1[10]; // [rsp+6h] [rbp-42h] BYREF
  _QWORD v2[7]; // [rsp+10h] [rbp-38h] BYREF

  v2[5] = __readfsqword(0x28u);
  strcpy(v1, "Hello ASM");
  memset(v2, 0, 32);
  param_asm_multi_insn(v2, v1, 9);
  if ( LOBYTE(v2[0]) != 72 )
    return 0xFFFFFFFFLL;
  result = 0xFFFFFFFFLL;
  if ( BYTE4(v2[0]) == 111 )
    return 42;
  return result;
}


/* Function: param_asm_simd @ 0x15F6 */
__int64 __fastcall param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
  *a3 = _mm_add_epi32(*a1, *a2);
  return 0;
}


/* Function: param_simd_intrinsics @ 0x160D */
__int64 __fastcall param_simd_intrinsics(__m128i *a1, const __m128i *a2, __m128i *a3)
{
  *a3 = _mm_add_epi32(_mm_load_si128(a2), *a1);
  return 0;
}


/* Function: call_asm_simd @ 0x1622 */
__int64 call_asm_simd()
{
  __m128i v1; // [rsp+0h] [rbp-48h] BYREF
  __m128i v2; // [rsp+10h] [rbp-38h] BYREF
  __m128i v3; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+38h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1.m128i_i64[0] = 0x200000001LL;
  v1.m128i_i64[1] = 0x400000003LL;
  v2.m128i_i64[0] = 0x600000005LL;
  v2.m128i_i64[1] = 0x800000007LL;
  param_asm_simd(&v1, &v2, &v3);
  return (unsigned int)(v3.m128i_i32[3] + v3.m128i_i32[2] + v3.m128i_i32[0] + v3.m128i_i32[1]);
}


/* Function: param_asm_atomic @ 0x16B5 */
__int64 __fastcall param_asm_atomic(volatile signed __int32 *a1, unsigned int a2)
{
  return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: param_atomic_c11 @ 0x16C2 */
__int64 __fastcall param_atomic_c11(volatile signed __int32 *a1, unsigned int a2)
{
  return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: call_asm_atomic @ 0x16CF */
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


/* Function: param_dynamic_code @ 0x171F */
__int64 __fastcall param_dynamic_code(unsigned int a1)
{
  size_t v1; // rbp
  _DWORD *v2; // rax
  void *v3; // rbx
  unsigned int v4; // r12d

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


/* Function: param_memory_protection @ 0x17BF */
__int64 param_memory_protection()
{
  size_t v0; // rbp
  _DWORD *v1; // rax
  _DWORD *v2; // rbx
  unsigned int v3; // r12d

  v0 = sysconf(30);
  v1 = mmap(0, v0, 3, 34, -1, 0);
  if ( v1 == (_DWORD *)-1LL )
  {
    return (unsigned int)-1;
  }
  else
  {
    v2 = v1;
    *v1 = 42;
    if ( mprotect(v1, v0, 1) )
    {
      munmap(v2, v0);
      return (unsigned int)-2;
    }
    else
    {
      v3 = *v2;
      if ( mprotect(v2, v0, 3) )
      {
        munmap(v2, v0);
        return (unsigned int)-3;
      }
      else
      {
        *v2 = 100;
        munmap(v2, v0);
      }
    }
  }
  return v3;
}


/* Function: param_clobber_importance @ 0x1878 */
__int64 __fastcall param_clobber_importance(int a1, int a2)
{
  return (unsigned int)(2 * (a2 + a1));
}


/* Function: call_asm_privileged @ 0x188C */
__int64 call_asm_privileged()
{
  unsigned int v0; // ebx
  int v1; // ebp
  int v2; // eax

  v0 = param_dynamic_code(0xAu);
  v1 = param_memory_protection();
  v2 = param_clobber_importance(3, 7);
  if ( v1 == 42 && v0 == 15 && v2 == 20 )
    return 77;
  return v0;
}


/* Function: param_memory_clobber_demo @ 0x18E1 */
__int64 param_memory_clobber_demo()
{
  return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x18F7 */
__int64 test_asm_features()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax

  __printf_chk(1, asc_2298);
  v0 = call_asm_basic();
  __printf_chk(1, aAsmL401D, v0);
  v1 = call_asm_clobber();
  __printf_chk(1, aAsmL402D, v1);
  v2 = call_asm_multi_insn();
  __printf_chk(1, aAsmL403D, v2);
  v3 = call_asm_simd();
  __printf_chk(1, aAsmL404D, v3);
  v4 = call_asm_atomic();
  __printf_chk(1, aAsmL405D, v4);
  v5 = call_asm_privileged();
  return __printf_chk(1, aAsmL406D, v5);
}


/* Function: main @ 0x19E6 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_preprocessing_features(argc, argv, envp);
  test_asm_features();
  return 0;
}


/* Function: .term_proc @ 0x1A0C */
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
