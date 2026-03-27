/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/7/7_gcc_O2_no_g
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
void sub_10B0()
{
  sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
  sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
  sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
  sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
int __usercall sub_10F0@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 60))();
}


/* Function: main @ 0x11B0 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: _start @ 0x11D0 */
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


/* Function: sub_11FC @ 0x11FC */
void sub_11FC()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1200 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1210 */
void *deregister_tm_clones()
{
  return &_TMC_END__;
}


/* Function: register_tm_clones @ 0x1250 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x12A0 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !completed_1 )
  {
    if ( &_cxa_finalize )
      sub_10F0((int)&GLOBAL_OFFSET_TABLE_);
    v0 = dtor_idx_0;
    for ( i = &_DTOR_END__ - _DTOR_LIST__ - 1; dtor_idx_0 < i; v0 = dtor_idx_0 )
    {
      dtor_idx_0 = v0 + 1;
      ((void (*)(void))_DTOR_LIST__[v0 + 1])();
    }
    deregister_tm_clones();
    completed_1 = 1;
  }
}


/* Function: frame_dummy @ 0x1330 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1339 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x133D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: div_zero_handler @ 0x1350 */
void __noreturn div_zero_handler()
{
  div_zero_caught = 1;
  __longjmp_chk(&jmp_buffer, 1);
}


/* Function: segv_handler @ 0x1380 */
void __noreturn segv_handler()
{
  segv_caught = 1;
  __longjmp_chk(&segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x13B0 */
int __cdecl param_fake_branch(int a1)
{
  return a1;
}


/* Function: call_fake_branch @ 0x13C0 */
int call_fake_branch()
{
  return 10;
}


/* Function: param_opaque_predicate @ 0x13D0 */
int __cdecl param_opaque_predicate(int a1)
{
  int v1; // edx
  bool v2; // di
  int v3; // eax
  int v4; // ecx

  v1 = a1 + 1;
  if ( a1 == -1 )
    return 3 * a1 + 20;
  v2 = 2 * a1 + a1 * a1 + 1 == v1 * v1;
  v3 = a1;
  do
  {
    v4 = v1;
    v1 = v3 % v1;
    v3 = v4;
  }
  while ( v1 );
  if ( v4 == 1 && v2 )
    return 2 * a1 + 10;
  else
    return 3 * a1 + 20;
}


/* Function: call_opaque_predicate @ 0x1430 */
int call_opaque_predicate()
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
  result = 20;
  if ( v2 != 1 )
    return 35;
  return result;
}


/* Function: param_instruction_substitution @ 0x1460 */
int __cdecl param_instruction_substitution(unsigned int a1)
{
  return 15 * a1 + (a1 & 0xF) + (a1 >> 1) + 6 * a1;
}


/* Function: call_instruction_substitution @ 0x1490 */
int call_instruction_substitution()
{
  return 225;
}


/* Function: decrypt_string @ 0x14A0 */
char *__cdecl decrypt_string(char *src, char *dest, size_t n, char a4)
{
  char v4; // al
  char *v5; // edx

  strncpy(dest, src, n);
  dest[n - 1] = 0;
  v4 = *dest;
  if ( *dest )
  {
    v5 = dest;
    do
    {
      *v5++ = a4 ^ v4;
      v4 = *v5;
    }
    while ( *v5 );
  }
  return dest;
}


/* Function: param_string_encryption @ 0x1500 */
__int64 param_string_encryption()
{
  char v0; // dl
  char *v1; // eax
  __int64 result; // rax
  char dest[32]; // [esp+Eh] [ebp-30h] BYREF
  unsigned int v4; // [esp+2Eh] [ebp-10h]

  v4 = __readgsdword(0x14u);
  strncpy(dest, encrypted_0, 0x1Fu);
  v0 = dest[0];
  dest[31] = 0;
  if ( dest[0] )
  {
    v1 = dest;
    do
    {
      *v1++ = v0 ^ 0x5A;
      v0 = *v1;
    }
    while ( *v1 );
    v0 = dest[0];
  }
  LODWORD(result) = v0 + strlen(dest);
  HIDWORD(result) = v4 - __readgsdword(0x14u);
  return result;
}


/* Function: call_string_encryption @ 0x15A0 */
__int64 call_string_encryption()
{
  return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x15B0 */
int __cdecl param_tail_call_optimized(int a1, int a2)
{
  int v2; // eax

  v2 = a1;
  if ( a1 > 0 )
  {
    do
      a2 += v2--;
    while ( v2 );
  }
  return a2;
}


/* Function: call_tail_call_optimized @ 0x15D0 */
int call_tail_call_optimized()
{
  return 500500;
}


/* Function: param_non_tail_call @ 0x15E0 */
int __cdecl param_non_tail_call(int a1)
{
  int v1; // eax
  int v2; // edx

  v1 = a1;
  v2 = 0;
  if ( a1 > 0 )
  {
    do
      v2 += v1--;
    while ( v1 );
  }
  return v2;
}


/* Function: call_non_tail_call @ 0x1600 */
int call_non_tail_call()
{
  return 5050;
}


/* Function: param_vectorized_loop @ 0x1610 */
int __cdecl param_vectorized_loop(int a1, int a2, _DWORD *a3, int a4)
{
  int i; // eax
  _DWORD *v5; // eax
  int v6; // edx

  if ( a4 <= 0 )
    return 0;
  for ( i = 0; i != a4; ++i )
    a3[i] = *(_DWORD *)(a1 + 4 * i) + *(_DWORD *)(a2 + 4 * i);
  v5 = a3;
  v6 = 0;
  do
    v6 += *v5++;
  while ( &a3[a4] != v5 );
  return v6;
}


/* Function: call_vectorized_loop @ 0x1670 */
int call_vectorized_loop()
{
  unsigned int v0; // eax
  int v1; // ebx
  int v2; // ecx
  int i; // eax
  unsigned int *v4; // eax
  int v5; // edx
  _DWORD v7[8]; // [esp+Ch] [ebp-70h]
  _DWORD v8[8]; // [esp+2Ch] [ebp-50h]
  _DWORD v9[8]; // [esp+4Ch] [ebp-30h] BYREF
  unsigned int v10; // [esp+6Ch] [ebp-10h] BYREF

  v10 = __readgsdword(0x14u);
  v0 = 0;
  v7[0] = 1;
  v7[1] = 2;
  v7[2] = 3;
  v7[3] = 4;
  v7[4] = 5;
  v7[5] = 6;
  v7[6] = 7;
  v7[7] = 8;
  v8[0] = 8;
  v8[1] = 7;
  v8[2] = 6;
  v8[3] = 5;
  v8[4] = 4;
  v8[5] = 3;
  v8[6] = 2;
  v8[7] = 1;
  do
    v9[v0++] = 0;
  while ( v0 < 8 );
  v1 = 8;
  v2 = 1;
  for ( i = 0; ; v1 = v8[i] )
  {
    v9[i++] = v1 + v2;
    if ( i == 8 )
      break;
    v2 = v7[i];
  }
  v4 = v9;
  v5 = 0;
  do
    v5 += *v4++;
  while ( &v10 != v4 );
  return v5;
}


/* Function: param_link_time_optimization @ 0x1770 */
int __cdecl param_link_time_optimization(int a1)
{
  return 2 * a1 + 10;
}


/* Function: call_link_time_optimization @ 0x1780 */
int call_link_time_optimization()
{
  return 20;
}


/* Function: param_division_by_zero @ 0x1790 */
int __cdecl param_division_by_zero(int a1)
{
  signal(8, (__sighandler_t)div_zero_handler);
  if ( _setjmp(&jmp_buffer) )
    return -1;
  else
    return 10 / a1;
}


/* Function: call_division_by_zero @ 0x17F0 */
int call_division_by_zero()
{
  int v0; // esi
  int v1; // edi

  v0 = param_division_by_zero(5);
  v1 = param_division_by_zero(0);
  signal(8, 0);
  return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x1840 */
int __cdecl param_null_pointer_deref(int a1)
{
  signal(11, (__sighandler_t)segv_handler);
  if ( _setjmp(&segv_buffer) )
    return -1;
  else
    return *(_DWORD *)a1;
}


/* Function: call_null_pointer_deref @ 0x1890 */
__int64 call_null_pointer_deref()
{
  int v0; // esi
  int v1; // edi
  __int64 result; // rax
  int v3; // [esp+18h] [ebp-14h] BYREF
  unsigned int v4; // [esp+1Ch] [ebp-10h]

  v4 = __readgsdword(0x14u);
  v3 = 42;
  v0 = param_null_pointer_deref((int)&v3);
  v1 = param_null_pointer_deref(0);
  signal(11, 0);
  LODWORD(result) = v0 + v1;
  HIDWORD(result) = v4 - __readgsdword(0x14u);
  return result;
}


/* Function: param_buffer_overflow_stack @ 0x1900 */
int __cdecl param_buffer_overflow_stack(int a1)
{
  return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1910 */
int __cdecl param_buffer_overflow_heap(int a1)
{
  void *v1; // eax

  v1 = malloc(0x10u);
  if ( !v1 )
    return -2;
  free(v1);
  return a1;
}


/* Function: call_buffer_overflow @ 0x1950 */
int call_buffer_overflow()
{
  void *v0; // eax

  v0 = malloc(0x10u);
  if ( !v0 )
    return 8;
  free(v0);
  return 30;
}


/* Function: param_integer_overflow @ 0x1990 */
int __cdecl param_integer_overflow(int a1, int a2)
{
  int result; // eax

  result = a1 + a2;
  if ( a1 <= 0 || a2 <= 0 )
  {
    if ( (a2 & a1) < 0 && result > 0 )
      return -2;
  }
  else if ( result < 0 )
  {
    return -1;
  }
  return result;
}


/* Function: call_integer_overflow @ 0x19D0 */
int call_integer_overflow()
{
  return 2000000000;
}


/* Function: param_undefined_behavior @ 0x19E0 */
int __cdecl param_undefined_behavior(int a1)
{
  return 2 * a1;
}


/* Function: call_undefined_behavior @ 0x19F0 */
int call_undefined_behavior()
{
  return 10;
}


/* Function: param_implementation_defined @ 0x1A00 */
int param_implementation_defined()
{
  return 43;
}


/* Function: call_implementation_defined @ 0x1A10 */
int call_implementation_defined()
{
  return 43;
}


/* Function: test_obf_opt_edge @ 0x1A20 */
unsigned int test_obf_opt_edge()
{
  int v0; // edx
  int v1; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  void *v10; // eax
  int v11; // eax
  int v13; // [esp+18h] [ebp-14h] BYREF
  unsigned int v14; // [esp+1Ch] [ebp-10h]

  v14 = __readgsdword(0x14u);
  puts(asc_2008);
  __printf_chk(1, &unk_212F, 10);
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
  __printf_chk(1, &unk_214B, v3);
  __printf_chk(1, &unk_2167, 225);
  v4 = param_string_encryption();
  __printf_chk(1, &unk_2184, v4);
  __printf_chk(1, &unk_2038, 500500);
  __printf_chk(1, &unk_2064, 5050);
  v5 = call_vectorized_loop();
  __printf_chk(1, &unk_208C, v5);
  __printf_chk(1, &unk_20B4, 20);
  v6 = param_division_by_zero(5);
  v7 = param_division_by_zero(0) + v6;
  signal(8, 0);
  __printf_chk(1, &unk_21A0, v7);
  v13 = 42;
  v8 = param_null_pointer_deref((int)&v13);
  v9 = param_null_pointer_deref(0) + v8;
  signal(11, 0);
  __printf_chk(1, &unk_21BC, v9);
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
  __printf_chk(1, &unk_21D9, v11);
  __printf_chk(1, &unk_20D4, 2000000000);
  __printf_chk(1, &unk_21F6, 10);
  __printf_chk(1, &unk_2108, 43);
  return v14 - __readgsdword(0x14u);
}


/* Function: __stack_chk_fail_local @ 0x1C40 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x1C60 */
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


/* Function: .term_proc @ 0x1CAC */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x41A0 */

/* FAILED to decompile: _setjmp @ 0x41A4 */

/* FAILED to decompile: free @ 0x41A8 */

/* FAILED to decompile: signal @ 0x41AC */

/* FAILED to decompile: __stack_chk_fail @ 0x41B0 */

/* FAILED to decompile: __cxa_finalize @ 0x41B4 */

/* FAILED to decompile: malloc @ 0x41B8 */

/* FAILED to decompile: puts @ 0x41BC */

/* FAILED to decompile: strlen @ 0x41C0 */

/* FAILED to decompile: strncpy @ 0x41C4 */

/* FAILED to decompile: __printf_chk @ 0x41C8 */

/* FAILED to decompile: __longjmp_chk @ 0x41CC */

/* Total functions decompiled: 60, failed: 12 */
