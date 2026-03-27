/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/7/7_gcc_O2_no_g
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


/* Function: _start @ 0x11A0 */
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


/* Function: deregister_tm_clones @ 0x11D0 */
void *deregister_tm_clones()
{
  return &_TMC_END__;
}


/* Function: register_tm_clones @ 0x1200 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1240 */
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


/* Function: frame_dummy @ 0x1280 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: div_zero_handler @ 0x1290 */
void __noreturn div_zero_handler()
{
  div_zero_caught = 1;
  __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x12C0 */
void __noreturn segv_handler()
{
  segv_caught = 1;
  __longjmp_chk(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x12F0 */
__int64 __fastcall param_fake_branch(unsigned int a1)
{
  return a1;
}


/* Function: call_fake_branch @ 0x1300 */
__int64 call_fake_branch()
{
  return 10;
}


/* Function: param_opaque_predicate @ 0x1310 */
__int64 __fastcall param_opaque_predicate(int a1)
{
  int v1; // edx
  bool v2; // r8
  int v3; // eax
  int v4; // ecx

  v1 = a1 + 1;
  v2 = 2 * a1 + a1 * a1 + 1 == v1 * v1;
  if ( a1 == -1 )
    return (unsigned int)(3 * a1 + 20);
  v3 = a1;
  do
  {
    v4 = v1;
    v1 = v3 % v1;
    v3 = v4;
  }
  while ( v1 );
  if ( v4 == 1 && v2 )
    return (unsigned int)(2 * a1 + 10);
  else
    return (unsigned int)(3 * a1 + 20);
}


/* Function: call_opaque_predicate @ 0x1360 */
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
  result = 20;
  if ( v2 != 1 )
    return 35;
  return result;
}


/* Function: param_instruction_substitution @ 0x1390 */
__int64 __fastcall param_instruction_substitution(unsigned int a1)
{
  return 15 * a1 + (a1 & 0xF) + (a1 >> 1) + 6 * a1;
}


/* Function: call_instruction_substitution @ 0x13B0 */
__int64 call_instruction_substitution()
{
  return 225;
}


/* Function: decrypt_string @ 0x13C0 */
char *__fastcall decrypt_string(char *src, char *dest, size_t a3, char a4)
{
  char *v6; // rax
  char *v7; // r8
  char v8; // al
  char *v9; // rdx

  v6 = strncpy(dest, src, a3);
  v6[a3 - 1] = 0;
  v7 = v6;
  v8 = *v6;
  if ( v8 )
  {
    v9 = v7;
    do
    {
      *v9++ = a4 ^ v8;
      v8 = *v9;
    }
    while ( *v9 );
  }
  return v7;
}


/* Function: param_string_encryption @ 0x1410 */
__int64 param_string_encryption()
{
  char *v0; // rax
  int v1; // ebx
  const char *v2; // rdi
  char v4[40]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v0 = strncpy(v4, &encrypted_0, 0x1Fu);
  v1 = v4[0];
  v4[31] = 0;
  v2 = v0;
  if ( v4[0] )
  {
    do
    {
      *v0++ = v1 ^ 0x5A;
      LOBYTE(v1) = *v0;
    }
    while ( *v0 );
    v1 = v4[0];
  }
  return v1 + (unsigned int)strlen(v2);
}


/* Function: call_string_encryption @ 0x1490 */
__int64 call_string_encryption()
{
  return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x14A0 */
__int64 __fastcall param_tail_call_optimized(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( a1 > 0 )
  {
    do
    {
      result = (unsigned int)(a1 + result);
      --a1;
    }
    while ( a1 );
  }
  return result;
}


/* Function: call_tail_call_optimized @ 0x14C0 */
__int64 call_tail_call_optimized()
{
  return 500500;
}


/* Function: param_non_tail_call @ 0x14D0 */
__int64 __fastcall param_non_tail_call(int a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 > 0 )
  {
    do
    {
      result = (unsigned int)(a1 + result);
      --a1;
    }
    while ( a1 );
  }
  return result;
}


/* Function: call_non_tail_call @ 0x14F0 */
__int64 call_non_tail_call()
{
  return 5050;
}


/* Function: param_vectorized_loop @ 0x1500 */
__int64 __fastcall param_vectorized_loop(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  __int64 i; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a4 <= 0 )
    return 0;
  for ( i = 0; i != a4; ++i )
    a3[i] = *(_DWORD *)(a1 + 4 * i) + *(_DWORD *)(a2 + 4 * i);
  v5 = (__int64)&a3[a4 - 1 + 1];
  LODWORD(result) = 0;
  do
    result = (unsigned int)(*a3++ + result);
  while ( (_DWORD *)v5 != a3 );
  return result;
}


/* Function: call_vectorized_loop @ 0x1550 */
__int64 call_vectorized_loop()
{
  int v0; // esi
  int v1; // ecx
  __int64 i; // rax
  char *v3; // rax
  unsigned int v4; // r8d
  _QWORD v6[4]; // [rsp+0h] [rbp-78h]
  _QWORD v7[4]; // [rsp+20h] [rbp-58h]
  _OWORD v8[2]; // [rsp+40h] [rbp-38h] BYREF
  char v9; // [rsp+60h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp-10h]

  v0 = 8;
  v1 = 1;
  v10 = __readfsqword(0x28u);
  memset(v8, 0, sizeof(v8));
  v6[0] = 0x200000001LL;
  v6[1] = 0x400000003LL;
  v6[2] = 0x600000005LL;
  v6[3] = 0x800000007LL;
  v7[0] = 0x700000008LL;
  v7[1] = 0x500000006LL;
  v7[2] = 0x300000004LL;
  v7[3] = 0x100000002LL;
  for ( i = 0; ; v0 = *(_DWORD *)((char *)v7 + i) )
  {
    *(_DWORD *)((char *)v8 + i) = v0 + v1;
    i += 4;
    if ( i == 32 )
      break;
    v1 = *(_DWORD *)((char *)v6 + i);
  }
  v3 = (char *)v8;
  v4 = 0;
  do
  {
    v4 += *(_DWORD *)v3;
    v3 += 4;
  }
  while ( &v9 != v3 );
  return v4;
}


/* Function: param_link_time_optimization @ 0x1660 */
__int64 __fastcall param_link_time_optimization(int a1)
{
  return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0x1670 */
__int64 call_link_time_optimization()
{
  return 20;
}


/* Function: param_division_by_zero @ 0x1680 */
__int64 __fastcall param_division_by_zero(int a1)
{
  signal(8, (__sighandler_t)div_zero_handler);
  if ( _setjmp(jmp_buffer) )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)(10 / a1);
}


/* Function: call_division_by_zero @ 0x16D0 */
__int64 call_division_by_zero()
{
  int v0; // ebx
  int v1; // ebp

  v0 = param_division_by_zero(5);
  v1 = param_division_by_zero(0);
  signal(8, 0);
  return (unsigned int)(v0 + v1);
}


/* Function: param_null_pointer_deref @ 0x1710 */
__int64 __fastcall param_null_pointer_deref(unsigned int *a1)
{
  signal(11, (__sighandler_t)segv_handler);
  if ( _setjmp(segv_buffer) )
    return 0xFFFFFFFFLL;
  else
    return *a1;
}


/* Function: call_null_pointer_deref @ 0x1760 */
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


/* Function: param_buffer_overflow_stack @ 0x17D0 */
__int64 __fastcall param_buffer_overflow_stack(unsigned int a1)
{
  return a1;
}


/* Function: param_buffer_overflow_heap @ 0x17E0 */
__int64 __fastcall param_buffer_overflow_heap(unsigned int a1)
{
  void *v1; // rax

  v1 = malloc(0x10u);
  if ( !v1 )
    return 4294967294LL;
  free(v1);
  return a1;
}


/* Function: call_buffer_overflow @ 0x1810 */
__int64 call_buffer_overflow()
{
  void *v0; // rax

  v0 = malloc(0x10u);
  if ( !v0 )
    return 8;
  free(v0);
  return 30;
}


/* Function: param_integer_overflow @ 0x1840 */
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


/* Function: call_integer_overflow @ 0x1870 */
__int64 call_integer_overflow()
{
  return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1880 */
__int64 __fastcall param_undefined_behavior(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0x1890 */
__int64 call_undefined_behavior()
{
  return 10;
}


/* Function: param_implementation_defined @ 0x18A0 */
__int64 param_implementation_defined()
{
  return 47;
}


/* Function: call_implementation_defined @ 0x18B0 */
__int64 call_implementation_defined()
{
  return 47;
}


/* Function: test_obf_opt_edge @ 0x18C0 */
__int64 test_obf_opt_edge()
{
  int v0; // edx
  int v1; // eax
  int v2; // ecx
  __int64 v3; // rdx
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // ebx
  int v7; // ebp
  int v8; // ebx
  int v9; // ebp
  void *v10; // rdi
  __int64 v11; // rdx
  unsigned int v13; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  puts(s);
  __printf_chk(1, &unk_2137, 10);
  v0 = 6;
  v1 = 5;
  do
  {
    v2 = v0;
    v0 = v1 % v0;
    v1 = v2;
  }
  while ( v0 );
  v3 = 20;
  if ( v2 != 1 )
    v3 = 35;
  __printf_chk(1, &unk_2153, v3);
  __printf_chk(1, &unk_216F, 225);
  v4 = param_string_encryption();
  __printf_chk(1, &unk_218C, v4);
  __printf_chk(1, &unk_2038, 500500);
  __printf_chk(1, &unk_2068, 5050);
  v5 = call_vectorized_loop();
  __printf_chk(1, &unk_2090, v5);
  __printf_chk(1, &unk_20B8, 20);
  v6 = param_division_by_zero(5);
  v7 = param_division_by_zero(0);
  signal(8, 0);
  __printf_chk(1, &unk_21A8, (unsigned int)(v6 + v7));
  v13 = 42;
  v8 = param_null_pointer_deref(&v13);
  v9 = param_null_pointer_deref(0);
  signal(11, 0);
  __printf_chk(1, &unk_21C4, (unsigned int)(v8 + v9));
  v10 = malloc(0x10u);
  if ( v10 )
  {
    free(v10);
    v11 = 30;
  }
  else
  {
    v11 = 8;
  }
  __printf_chk(1, &unk_21E1, v11);
  __printf_chk(1, &unk_20D8, 2000000000);
  __printf_chk(1, &unk_21FE, 10);
  return __printf_chk(1, &unk_2110, 47);
}


/* Function: .term_proc @ 0x1AE8 */
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
