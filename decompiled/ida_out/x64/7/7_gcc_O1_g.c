/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/7/7_gcc_O1_g
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


/* Function: _start @ 0x1180 */
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


/* Function: deregister_tm_clones @ 0x11B0 */
void *deregister_tm_clones()
{
  return &_TMC_END__;
}


/* Function: register_tm_clones @ 0x11E0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1220 */
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


/* Function: frame_dummy @ 0x1260 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: div_zero_handler @ 0x1269 */
void __fastcall __noreturn div_zero_handler(int sig)
{
  div_zero_caught = 1;
  __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x128E */
void __fastcall __noreturn segv_handler(int sig)
{
  segv_caught = 1;
  __longjmp_chk(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x12B3 */
int __fastcall param_fake_branch(int x)
{
  return x;
}


/* Function: call_fake_branch @ 0x12BA */
int __cdecl call_fake_branch()
{
  return 10;
}


/* Function: param_opaque_predicate @ 0x12C4 */
int __fastcall param_opaque_predicate(int x)
{
  int v1; // ecx
  bool v2; // r9
  int v3; // eax
  int v4; // esi

  v1 = x + 1;
  v2 = 2 * x + x * x + 1 == v1 * v1;
  if ( x == -1 )
    return 3 * x + 20;
  v3 = x;
  do
  {
    v4 = v1;
    v1 = v3 % v1;
    v3 = v4;
  }
  while ( v1 );
  if ( v4 == 1 && v2 )
    return 2 * x + 10;
  else
    return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0x130B */
int __cdecl call_opaque_predicate()
{
  return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x131A */
int __fastcall param_instruction_substitution(int x)
{
  return 15 * x + (x & 0xF) + ((unsigned int)x >> 1) + 6 * x;
}


/* Function: call_instruction_substitution @ 0x1338 */
int __cdecl call_instruction_substitution()
{
  return 225;
}


/* Function: decrypt_string @ 0x1342 */
const char *__fastcall decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
  char v6; // al
  char *v7; // rdx

  strncpy(buffer, encrypted, len);
  buffer[len - 1] = 0;
  v6 = *buffer;
  if ( *buffer )
  {
    v7 = buffer;
    do
    {
      *v7++ = key ^ v6;
      v6 = *v7;
    }
    while ( *v7 );
  }
  return buffer;
}


/* Function: param_string_encryption @ 0x1385 */
int __cdecl param_string_encryption()
{
  int v0; // eax
  char decrypted[40]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v3; // [rsp+28h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  decrypt_string(encrypted_0, decrypted, 0x20u, 90);
  v0 = strlen(decrypted);
  return v0 + decrypted[0];
}


/* Function: call_string_encryption @ 0x13E6 */
int __cdecl call_string_encryption()
{
  return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x13FD */
int __fastcall param_tail_call_optimized(int n, int acc)
{
  int result; // eax

  result = acc;
  if ( n > 0 )
    return param_tail_call_optimized(n - 1, n + acc);
  return result;
}


/* Function: call_tail_call_optimized @ 0x141B */
int __cdecl call_tail_call_optimized()
{
  return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x1437 */
int __fastcall param_non_tail_call(int n)
{
  int result; // eax

  result = 0;
  if ( n > 0 )
    return n + param_non_tail_call(n - 1);
  return result;
}


/* Function: call_non_tail_call @ 0x1454 */
int __cdecl call_non_tail_call()
{
  return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x146B */
int __fastcall param_vectorized_loop(int *a, int *b, int *c, int n)
{
  __int64 i; // rax
  int *v5; // rax
  int *v6; // rcx
  int v7; // edx

  if ( n <= 0 )
    return 0;
  for ( i = 0; i != n; ++i )
    c[i] = a[i] + b[i];
  v5 = c;
  v6 = &c[n - 1 + 1];
  v7 = 0;
  do
    v7 += *v5++;
  while ( v5 != v6 );
  return v7;
}


/* Function: call_vectorized_loop @ 0x14B5 */
int __cdecl call_vectorized_loop()
{
  int a[8]; // [rsp+0h] [rbp-78h] BYREF
  int b[8]; // [rsp+20h] [rbp-58h] BYREF
  int c[10]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v4; // [rsp+68h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  a[4] = 5;
  a[5] = 6;
  a[6] = 7;
  a[7] = 8;
  b[0] = 8;
  b[1] = 7;
  b[2] = 6;
  b[3] = 5;
  b[4] = 4;
  b[5] = 3;
  b[6] = 2;
  b[7] = 1;
  memset(c, 0, 32);
  return param_vectorized_loop(a, b, c, 8);
}


/* Function: param_link_time_optimization @ 0x15A1 */
int __fastcall param_link_time_optimization(int x)
{
  return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x15AA */
int __cdecl call_link_time_optimization()
{
  return 20;
}


/* Function: param_division_by_zero @ 0x15B4 */
int __fastcall param_division_by_zero(int x)
{
  signal(8, (__sighandler_t)div_zero_handler);
  if ( _setjmp(jmp_buffer) )
    return -1;
  else
    return 10 / x;
}


/* Function: call_division_by_zero @ 0x15FB */
int __cdecl call_division_by_zero()
{
  int v0; // ebx
  int v1; // ebp

  v0 = param_division_by_zero(5);
  v1 = param_division_by_zero(0);
  signal(8, 0);
  return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x1636 */
int __fastcall param_null_pointer_deref(int *p)
{
  signal(11, (__sighandler_t)segv_handler);
  if ( _setjmp(segv_buffer) )
    return -1;
  else
    return *p;
}


/* Function: call_null_pointer_deref @ 0x167B */
int __cdecl call_null_pointer_deref()
{
  int v0; // ebx
  int v1; // ebp
  int valid; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  valid = 42;
  v0 = param_null_pointer_deref(&valid);
  v1 = param_null_pointer_deref(0);
  signal(11, 0);
  return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x16E3 */
int __fastcall param_buffer_overflow_stack(int x)
{
  return x;
}


/* Function: param_buffer_overflow_heap @ 0x16EA */
int __fastcall param_buffer_overflow_heap(int x)
{
  void *v2; // rax
  int v3; // edx

  v2 = malloc(0x10u);
  if ( !v2 )
    return -2;
  v3 = 33;
  do
    --v3;
  while ( v3 );
  free(v2);
  return x;
}


/* Function: call_buffer_overflow @ 0x171D */
int __cdecl call_buffer_overflow()
{
  return param_buffer_overflow_heap(20) + 10;
}


/* Function: param_integer_overflow @ 0x1737 */
int __fastcall param_integer_overflow(int a, int b)
{
  int result; // eax

  result = a + b;
  if ( b > 0 && a > 0 && result < 0 )
    return -1;
  if ( (b & a) < 0 && result > 0 )
    return -2;
  return result;
}


/* Function: call_integer_overflow @ 0x1765 */
int __cdecl call_integer_overflow()
{
  return 2000000000;
}


/* Function: param_undefined_behavior @ 0x176F */
int __fastcall param_undefined_behavior(int i)
{
  return 2 * i;
}


/* Function: call_undefined_behavior @ 0x1777 */
int __cdecl call_undefined_behavior()
{
  return 10;
}


/* Function: param_implementation_defined @ 0x1781 */
int __cdecl param_implementation_defined()
{
  return 47;
}


/* Function: call_implementation_defined @ 0x178B */
int __cdecl call_implementation_defined()
{
  return 47;
}


/* Function: test_obf_opt_edge @ 0x1795 */
void __cdecl test_obf_opt_edge()
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
  __printf_chk(1, &unk_2137, 10);
  v0 = call_opaque_predicate();
  __printf_chk(1, &unk_2153, v0);
  __printf_chk(1, &unk_216F, 225);
  v1 = param_string_encryption();
  __printf_chk(1, &unk_218C, v1);
  v2 = call_tail_call_optimized();
  __printf_chk(1, &unk_2038, v2);
  v3 = call_non_tail_call();
  __printf_chk(1, &unk_2068, v3);
  v4 = call_vectorized_loop();
  __printf_chk(1, &unk_2090, v4);
  __printf_chk(1, &unk_20B8, 20);
  v5 = call_division_by_zero();
  __printf_chk(1, &unk_21A8, v5);
  v6 = call_null_pointer_deref();
  __printf_chk(1, &unk_21C4, v6);
  v7 = call_buffer_overflow();
  __printf_chk(1, &unk_21E1, v7);
  __printf_chk(1, &unk_20D8, 2000000000);
  __printf_chk(1, &unk_21FE, 10);
  __printf_chk(1, &unk_2110, 47);
}


/* Function: main @ 0x1960 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: .term_proc @ 0x197C */
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
