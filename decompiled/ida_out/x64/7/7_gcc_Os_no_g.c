/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/7/7_gcc_Os_no_g
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


/* Function: main @ 0x1180 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge(argc, argv, envp);
  return 0;
}


/* Function: _start @ 0x1190 */
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


/* Function: deregister_tm_clones @ 0x11C0 */
void *deregister_tm_clones()
{
  return &_TMC_END__;
}


/* Function: register_tm_clones @ 0x11F0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1230 */
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


/* Function: frame_dummy @ 0x1270 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: div_zero_handler @ 0x1279 */
void __noreturn div_zero_handler()
{
  div_zero_caught = 1;
  __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x129B */
void __noreturn segv_handler()
{
  segv_caught = 1;
  __longjmp_chk(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x12BD */
__int64 __fastcall param_fake_branch(unsigned int a1)
{
  return a1;
}


/* Function: call_fake_branch @ 0x12C4 */
__int64 call_fake_branch()
{
  return 10;
}


/* Function: param_opaque_predicate @ 0x12CE */
__int64 __fastcall param_opaque_predicate(int a1)
{
  int v1; // ecx
  int v2; // eax
  bool v3; // r8
  int v4; // edx

  v1 = a1 + 1;
  v2 = a1;
  v3 = 2 * a1 + a1 * a1 + 1 == v1 * v1;
  while ( v1 )
  {
    v4 = v2 % v1;
    v2 = v1;
    v1 = v4;
  }
  if ( v2 == 1 && v3 )
    return (unsigned int)(2 * a1 + 10);
  else
    return (unsigned int)(3 * a1 + 20);
}


/* Function: call_opaque_predicate @ 0x130F */
__int64 call_opaque_predicate()
{
  return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x131A */
__int64 __fastcall param_instruction_substitution(unsigned int a1)
{
  return 15 * a1 + (a1 & 0xF) + (a1 >> 1) + 6 * a1;
}


/* Function: call_instruction_substitution @ 0x1334 */
__int64 call_instruction_substitution()
{
  return 225;
}


/* Function: decrypt_string @ 0x133E */
char *__fastcall decrypt_string(char *src, char *dest, size_t a3, char a4)
{
  char *v6; // rax
  char *v7; // r8
  char *i; // rdx
  char v9; // al

  v6 = strncpy(dest, src, a3);
  v6[a3 - 1] = 0;
  v7 = v6;
  for ( i = v6; *i; *(i - 1) = v9 )
    v9 = a4 ^ *i++;
  return v7;
}


/* Function: param_string_encryption @ 0x137B */
__int64 param_string_encryption()
{
  int v0; // eax
  char s[32]; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v3; // [rsp+28h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  decrypt_string(&encrypted_0, s, 0x20u, 90);
  v0 = strlen(s);
  return (unsigned int)(v0 + s[0]);
}


/* Function: call_string_encryption @ 0x13E0 */
__int64 call_string_encryption()
{
  return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x13E8 */
__int64 __fastcall param_tail_call_optimized(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  while ( a1 > 0 )
  {
    result = (unsigned int)(a1 + result);
    --a1;
  }
  return result;
}


/* Function: call_tail_call_optimized @ 0x13F9 */
__int64 call_tail_call_optimized()
{
  return 500500;
}


/* Function: param_non_tail_call @ 0x1403 */
__int64 __fastcall param_non_tail_call(int a1)
{
  __int64 result; // rax

  result = 0;
  while ( a1 > 0 )
  {
    result = (unsigned int)(a1 + result);
    --a1;
  }
  return result;
}


/* Function: call_non_tail_call @ 0x1414 */
__int64 call_non_tail_call()
{
  return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x141F */
__int64 __fastcall param_vectorized_loop(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 i; // rax
  __int64 v5; // rax
  unsigned int v6; // r8d

  for ( i = 0; a4 > (int)i; ++i )
    *(_DWORD *)(a3 + 4 * i) = *(_DWORD *)(a1 + 4 * i) + *(_DWORD *)(a2 + 4 * i);
  v5 = 0;
  v6 = 0;
  while ( a4 > (int)v5 )
    v6 += *(_DWORD *)(a3 + 4 * v5++);
  return v6;
}


/* Function: call_vectorized_loop @ 0x1450 */
__int64 call_vectorized_loop()
{
  __int64 v0; // rcx
  _DWORD *v1; // rdi
  _QWORD v3[4]; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v4[4]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v5[32]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+68h] [rbp-10h]

  v0 = 8;
  v6 = __readfsqword(0x28u);
  v1 = v5;
  v3[0] = 0x200000001LL;
  v3[1] = 0x400000003LL;
  v3[2] = 0x600000005LL;
  v3[3] = 0x800000007LL;
  v4[0] = 0x700000008LL;
  v4[1] = 0x500000006LL;
  v4[2] = 0x300000004LL;
  v4[3] = 0x100000002LL;
  while ( v0 )
  {
    *v1++ = 0;
    --v0;
  }
  return param_vectorized_loop((__int64)v3, (__int64)v4, (__int64)v5, 8);
}


/* Function: param_link_time_optimization @ 0x151B */
__int64 __fastcall param_link_time_optimization(int a1)
{
  return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0x1524 */
__int64 call_link_time_optimization()
{
  return 20;
}


/* Function: param_division_by_zero @ 0x152E */
__int64 __fastcall param_division_by_zero(int a1)
{
  int v1; // r8d
  __int64 result; // rax

  signal(8, (__sighandler_t)div_zero_handler);
  v1 = _setjmp(jmp_buffer);
  result = 0xFFFFFFFFLL;
  if ( !v1 )
    return (unsigned int)(10 / a1);
  return result;
}


/* Function: call_division_by_zero @ 0x1575 */
__int64 call_division_by_zero()
{
  int v0; // ebx
  int v1; // ebp

  v0 = param_division_by_zero(5);
  v1 = param_division_by_zero(0);
  signal(8, 0);
  return (unsigned int)(v0 + v1);
}


/* Function: param_null_pointer_deref @ 0x15A4 */
__int64 __fastcall param_null_pointer_deref(unsigned int *a1)
{
  int v1; // r8d
  __int64 result; // rax

  signal(11, (__sighandler_t)segv_handler);
  v1 = _setjmp(segv_buffer);
  result = 0xFFFFFFFFLL;
  if ( !v1 )
    return *a1;
  return result;
}


/* Function: call_null_pointer_deref @ 0x15E9 */
__int64 call_null_pointer_deref()
{
  int v0; // ebx
  int v1; // ebp
  unsigned int v3; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v3 = 42;
  v0 = param_null_pointer_deref(&v3);
  v1 = param_null_pointer_deref(0);
  signal(11, 0);
  return (unsigned int)(v0 + v1);
}


/* Function: param_buffer_overflow_stack @ 0x164B */
__int64 __fastcall param_buffer_overflow_stack(unsigned int a1)
{
  return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1652 */
__int64 __fastcall param_buffer_overflow_heap(unsigned int a1)
{
  void *v2; // rdi
  __int64 result; // rax

  v2 = malloc(0x10u);
  result = 4294967294LL;
  if ( v2 )
  {
    free(v2);
    return a1;
  }
  return result;
}


/* Function: call_buffer_overflow @ 0x1679 */
__int64 call_buffer_overflow()
{
  return (unsigned int)param_buffer_overflow_heap(0x14u) + 10;
}


/* Function: param_integer_overflow @ 0x168D */
__int64 __fastcall param_integer_overflow(int a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)(a1 + a2);
  if ( a1 <= 0 || a2 <= 0 )
  {
    if ( (a2 & a1) < 0 && (int)result > 0 )
      return 4294967294LL;
  }
  else if ( (int)result < 0 )
  {
    return 0xFFFFFFFFLL;
  }
  return result;
}


/* Function: call_integer_overflow @ 0x16B6 */
__int64 call_integer_overflow()
{
  return 2000000000;
}


/* Function: param_undefined_behavior @ 0x16C0 */
__int64 __fastcall param_undefined_behavior(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0x16C8 */
__int64 call_undefined_behavior()
{
  return 10;
}


/* Function: param_implementation_defined @ 0x16D2 */
__int64 param_implementation_defined()
{
  return 47;
}


/* Function: call_implementation_defined @ 0x16DC */
__int64 call_implementation_defined()
{
  return 47;
}


/* Function: test_obf_opt_edge @ 0x16E6 */
__int64 test_obf_opt_edge()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax

  puts(s);
  __printf_chk(1, &unk_2031, 10);
  v0 = call_opaque_predicate(1);
  __printf_chk(1, &unk_204D, v0);
  __printf_chk(1, &unk_2069, 225);
  v1 = param_string_encryption(1);
  __printf_chk(1, &unk_2086, v1);
  v2 = call_tail_call_optimized(1, &unk_20A2);
  __printf_chk(1, &unk_20A2, v2);
  v3 = call_non_tail_call(1, &unk_20CC);
  __printf_chk(1, &unk_20CC, v3);
  v4 = call_vectorized_loop(1);
  __printf_chk(1, &unk_20F1, v4);
  __printf_chk(1, &unk_2117, 20);
  v5 = call_division_by_zero(1);
  __printf_chk(1, &unk_2137, v5);
  v6 = call_null_pointer_deref(1);
  __printf_chk(1, &unk_2153, v6);
  v7 = call_buffer_overflow(1);
  __printf_chk(1, &unk_2170, v7);
  __printf_chk(1, &unk_218D, 2000000000);
  __printf_chk(1, &unk_21BE, 10);
  return __printf_chk(1, &unk_21DB, 47);
}


/* Function: .term_proc @ 0x1868 */
void term_proc()
{
  ;
}


/* FAILED to decompile: free @ 0x4210 */

/* FAILED to decompile: __libc_start_main @ 0x4218 */

/* FAILED to decompile: strncpy @ 0x4220 */

/* FAILED to decompile: puts @ 0x4228 */

/* FAILED to decompile: strlen @ 0x4230 */

/* FAILED to decompile: __stack_chk_fail @ 0x4238 */

/* FAILED to decompile: _setjmp @ 0x4240 */

/* FAILED to decompile: signal @ 0x4248 */

/* FAILED to decompile: malloc @ 0x4250 */

/* FAILED to decompile: __printf_chk @ 0x4258 */

/* FAILED to decompile: __longjmp_chk @ 0x4260 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4268 */

/* FAILED to decompile: __gmon_start__ @ 0x4278 */

/* Total functions decompiled: 52, failed: 13 */
