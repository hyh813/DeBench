/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/5-23/5-23_gcc_O2_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
  if ( &_gmon_start__ )
    ((void (*)(void))_gmon_start__)();
  frame_dummy();
  return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
  __asm { jmp     dword ptr [ebx+8] }
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
  sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
  sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
  sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
  sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
  sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
  sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
  sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
int __usercall sub_10B0@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 44))();
}


/* Function: main @ 0x1130 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}


/* Function: _start @ 0x1150 */
// positive sp value has been detected, the output may be wrong!
void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>)
{
  int v2; // esi
  int v3; // [esp-4h] [ebp-4h] BYREF
  char *retaddr; // [esp+0h] [ebp+0h] BYREF

  v2 = v3;
  v3 = a1;
  __libc_start_main((int (*)(int, char **, char **))main, v2, &retaddr, 0, 0, a2, &v3);
  __halt();
}


/* Function: sub_117C @ 0x117C */
void sub_117C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1180 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1190 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x11D0 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1220 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_10B0((int)&GLOBAL_OFFSET_TABLE_);
    v0 = dtor_idx_0;
    for ( i = &_DTOR_END__ - _DTOR_LIST__ - 1; dtor_idx_0 < i; v0 = dtor_idx_0 )
    {
      dtor_idx_0 = v0 + 1;
      ((void (*)(void))_DTOR_LIST__[v0 + 1])();
    }
    deregister_tm_clones();
    _bss_start = 1;
  }
}


/* Function: frame_dummy @ 0x12B0 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x12B9 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12BD */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: param_macro_constants @ 0x12D0 */
int __cdecl param_macro_constants(int size)
{
  int result; // eax

  result = 512;
  if ( size > 1024 )
    return 64;
  return result;
}


/* Function: call_macro_constants @ 0x12F0 */
int call_macro_constants()
{
  return 64;
}


/* Function: param_macro_functions @ 0x1300 */
int __cdecl param_macro_functions(int x, int y)
{
  int v2; // edx

  v2 = x;
  if ( x < y )
    v2 = y;
  return v2 + x * x;
}


/* Function: call_macro_functions @ 0x1320 */
int call_macro_functions()
{
  return 30;
}


/* Function: param_conditional_compile @ 0x1330 */
int __cdecl param_conditional_compile(int x)
{
  return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x1340 */
int call_conditional_compile()
{
  return 32;
}


/* Function: param_multi_branch_compile @ 0x1350 */
int __cdecl param_multi_branch_compile(int x)
{
  return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x1360 */
int call_multi_branch_compile()
{
  return 57122;
}


/* Function: param_macro_recursion @ 0x1370 */
int __cdecl param_macro_recursion(int x)
{
  return x + 16;
}


/* Function: call_macro_recursion @ 0x1380 */
int call_macro_recursion()
{
  return 116;
}


/* Function: param_stringize @ 0x1390 */
int __cdecl param_stringize(int value)
{
  return 19;
}


/* Function: call_stringize @ 0x13A0 */
int call_stringize()
{
  return 19;
}


/* Function: my_func @ 0x13B0 */
int __cdecl my_func(int x)
{
  return 10 * x;
}


/* Function: param_token_paste @ 0x13C0 */
int __cdecl param_token_paste(int x)
{
  return 11 * x + 5;
}


/* Function: call_token_paste @ 0x13D0 */
int call_token_paste()
{
  return 60;
}


/* Function: param_variadic_macro @ 0x13E0 */
int __cdecl param_variadic_macro(int x, int y, int z)
{
  __printf_chk(1, "LOG: Values: %d, %d, %d\n", x, y, z);
  return x + 50;
}


/* Function: call_variadic_macro @ 0x1420 */
int call_variadic_macro()
{
  __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
  return 60;
}


/* Function: param_macro_override @ 0x1460 */
int __cdecl param_macro_override(int x)
{
  return 3 * x + 1;
}


/* Function: call_macro_override @ 0x1470 */
int call_macro_override()
{
  return 16;
}


/* Function: param_include_guard @ 0x1480 */
int param_include_guard()
{
  return 500;
}


/* Function: call_include_guard @ 0x1490 */
int call_include_guard()
{
  return 500;
}


/* Function: param_builtin_macros @ 0x14A0 */
int __cdecl param_builtin_macros(int x)
{
  __printf_chk(
    1,
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "02:59:51");
  return x + 282;
}


/* Function: call_builtin_macros @ 0x14F0 */
int call_builtin_macros()
{
  __printf_chk(
    1,
    "file=%s, func=%s, line=%d, date=%s, time=%s\n",
    "src/5-23.c",
    "param_builtin_macros",
    279,
    "Jan 15 2026",
    "02:59:51");
  return 382;
}


/* Function: test_preprocessing_features @ 0x1540 */
void test_preprocessing_features()
{
  __printf_chk(1, asc_21F4);
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
    "02:59:51");
  __printf_chk(1, aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x1690 */
int __cdecl param_asm_basic(int x)
{
  return x + 10;
}


/* Function: call_asm_basic @ 0x16B0 */
int call_asm_basic()
{
  return 15;
}


/* Function: param_asm_clobber @ 0x16D0 */
int __cdecl param_asm_clobber(int *arr, int n)
{
  int result; // eax
  int i; // ecx

  result = 0;
  for ( i = 0; i < n; ++i )
    result += arr[i];
  return result;
}


/* Function: call_asm_clobber @ 0x1700 */
int call_asm_clobber()
{
  int result; // eax
  int i; // ecx
  int arr[5]; // [esp+8h] [ebp-24h]
  unsigned int v3; // [esp+1Ch] [ebp-10h]

  v3 = __readgsdword(0x14u);
  result = 0;
  for ( i = 0; i < 5; ++i )
    result += arr[i];
  return result;
}


/* Function: param_asm_multi_insn @ 0x1750 */
void __cdecl param_asm_multi_insn(void *dst, const void *src, size_t n)
{
  qmemcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x1780 */
int call_asm_multi_insn()
{
  int result; // eax
  char src[10]; // [esp+2h] [ebp-3Ah] BYREF
  char dst[32]; // [esp+Ch] [ebp-30h] BYREF
  unsigned int v3; // [esp+2Ch] [ebp-10h]

  v3 = __readgsdword(0x14u);
  strcpy(src, "Hello ASM");
  memset(&dst[8], 0, 24);
  qmemcpy(dst, src, 9u);
  if ( dst[0] != 72 )
    return -1;
  result = -1;
  if ( dst[4] == 111 )
    return 42;
  return result;
}


/* Function: param_asm_simd @ 0x1850 */
int __cdecl param_asm_simd(int *a, int *b, int *result)
{
  *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
  return 0;
}


/* Function: param_simd_intrinsics @ 0x1870 */
int __cdecl param_simd_intrinsics(int *a, int *b, int *result)
{
  *(__m128i *)result = _mm_add_epi32(_mm_load_si128((const __m128i *)b), *(__m128i *)a);
  return 0;
}


/* Function: call_asm_simd @ 0x1890 */
__int64 call_asm_simd()
{
  __m128i a; // [esp+Ch] [ebp-40h]
  __m128i b; // [esp+1Ch] [ebp-30h]
  __m128i result; // [esp+2Ch] [ebp-20h]

  a.m128i_i64[0] = 0x200000001LL;
  a.m128i_i64[1] = 0x400000003LL;
  b.m128i_i64[0] = 0x600000005LL;
  b.m128i_i64[1] = 0x800000007LL;
  result = _mm_add_epi32(a, b);
  return (unsigned int)(result.m128i_i32[3] + result.m128i_i32[2] + result.m128i_i32[0] + result.m128i_i32[1]);
}


/* Function: param_asm_atomic @ 0x1930 */
int __cdecl param_asm_atomic(int *counter, int increment)
{
  return _InterlockedExchangeAdd(counter, increment) + increment;
}


/* Function: param_atomic_c11 @ 0x1950 */
int __cdecl param_atomic_c11(int *counter, int increment)
{
  return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: call_asm_atomic @ 0x1970 */
__int64 call_asm_atomic()
{
  signed __int32 v0; // eax
  __int64 result; // rax
  int counter; // [esp+8h] [ebp-14h] BYREF
  unsigned int v3; // [esp+Ch] [ebp-10h]

  v3 = __readgsdword(0x14u);
  counter = 10;
  v0 = _InterlockedExchangeAdd(&counter, 5u);
  LODWORD(result) = v0 + counter + 5;
  HIDWORD(result) = v3 - __readgsdword(0x14u);
  return result;
}


/* Function: param_dynamic_code @ 0x19C0 */
int __cdecl param_dynamic_code(int x)
{
  size_t v1; // esi
  void *v2; // eax
  int v3; // edi

  v1 = sysconf(30);
  v2 = mmap(0, v1, 7, 34, -1, 0);
  if ( v2 == (void *)-1 )
    return -1;
  v3 = x + 5;
  munmap(v2, v1);
  return v3;
}


/* Function: param_memory_protection @ 0x1A20 */
int param_memory_protection()
{
  size_t v0; // edi
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  int v3; // ebp

  v0 = sysconf(30);
  v1 = mmap(0, v0, 3, 34, -1, 0);
  if ( v1 == (_DWORD *)-1 )
    return -1;
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
  return v3;
}


/* Function: param_clobber_importance @ 0x1AF0 */
int __cdecl param_clobber_importance(int a, int b)
{
  return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1B10 */
int call_asm_privileged()
{
  size_t v0; // esi
  void *v1; // eax
  char v2; // di
  int v3; // esi
  size_t v5; // [esp-18h] [ebp-38h]

  v0 = sysconf(30);
  v1 = mmap(0, v0, 7, 34, -1, 0);
  if ( v1 == (void *)-1 )
  {
    v2 = 0;
    v3 = -1;
  }
  else
  {
    v2 = 1;
    v5 = v0;
    v3 = 15;
    munmap(v1, v5);
  }
  if ( param_memory_protection() == 42 && v2 )
    return 77;
  return v3;
}


/* Function: param_memory_clobber_demo @ 0x1BC0 */
int param_memory_clobber_demo()
{
  return global_var + 50;
}


/* Function: test_asm_features @ 0x1BF0 */
void test_asm_features()
{
  int v0; // eax
  int i; // ecx
  int v2; // eax
  int v3; // eax
  signed __int32 v4; // esi
  int v5; // eax
  signed __int32 v6[10]; // [esp+0h] [ebp-28h] BYREF

  v6[6] = __readgsdword(0x14u);
  __printf_chk(1, asc_2294);
  __printf_chk(1, aAsmL401D, 15);
  v0 = 0;
  for ( i = 0; i < 5; ++i )
    v0 += v6[i + 1];
  __printf_chk(1, aAsmL402D, v0);
  v2 = call_asm_multi_insn();
  __printf_chk(1, aAsmL403D, v2);
  v3 = call_asm_simd();
  __printf_chk(1, aAsmL404D, v3);
  v6[0] = 10;
  v4 = _InterlockedExchangeAdd(v6, 5u);
  __printf_chk(1, aAsmL405D, v4 + v6[0] + 5);
  v5 = call_asm_privileged();
  __printf_chk(1, aAsmL406D, v5);
}


/* Function: __x86.get_pc_thunk.cx @ 0x1CEC */
void _x86_get_pc_thunk_cx()
{
  ;
}


/* Function: __stack_chk_fail_local @ 0x1CF0 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x1D10 */
void (*_do_global_ctors_aux())(void)
{
  void (*result)(void); // eax
  int *v1; // ebx

  result = (void (*)(void))_CTOR_LIST__;
  if ( _CTOR_LIST__ != -1 )
  {
    v1 = &_CTOR_LIST__;
    do
    {
      result();
      result = (void (*)(void))*--v1;
    }
    while ( result != (void (*)(void))-1 );
  }
  return result;
}


/* Function: .term_proc @ 0x1D5C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x4018 */

/* FAILED to decompile: mprotect @ 0x401C */

/* FAILED to decompile: __stack_chk_fail @ 0x4020 */

/* FAILED to decompile: sysconf @ 0x4024 */

/* FAILED to decompile: __cxa_finalize @ 0x4028 */

/* FAILED to decompile: mmap @ 0x402C */

/* FAILED to decompile: __printf_chk @ 0x4030 */

/* FAILED to decompile: munmap @ 0x4034 */

/* Total functions decompiled: 66, failed: 8 */
