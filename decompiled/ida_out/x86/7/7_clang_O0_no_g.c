/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/7/7_clang_O0_no_g
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


/* Function: sub_10F0 @ 0x10F0 */
int __usercall sub_10F0@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 - 16))();
}


/* Function: _start @ 0x1100 */
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


/* Function: sub_112C @ 0x112C */
void sub_112C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1130 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1140 */
char *deregister_tm_clones()
{
  return &completed_1;
}


/* Function: register_tm_clones @ 0x1180 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11D0 */
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


/* Function: frame_dummy @ 0x1260 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1269 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x126D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: param_fake_branch @ 0x1280 */
int __cdecl param_fake_branch(int a1)
{
  int v2; // [esp+10h] [ebp-8h]

  v2 = a1;
  if ( a1 * a1 < 0 )
    v2 = 2 * a1 - 559038737;
  strlen((const char *)&GLOBAL_OFFSET_TABLE_ - 8184);
  return v2;
}


/* Function: call_fake_branch @ 0x1300 */
int call_fake_branch()
{
  return param_fake_branch(10);
}


/* Function: param_opaque_predicate @ 0x1330 */
int __cdecl param_opaque_predicate(int a1)
{
  int v2; // [esp+8h] [ebp-14h]
  int v3; // [esp+Ch] [ebp-10h]
  int v4; // [esp+10h] [ebp-Ch]

  v4 = a1;
  v3 = a1 + 1;
  while ( v3 )
  {
    v2 = v3;
    v3 = v4 % v3;
    v4 = v2;
  }
  if ( 2 * a1 + a1 * a1 + 1 == (a1 + 1) * (a1 + 1) && v4 == 1 )
    return 2 * a1 + 10;
  else
    return 3 * a1 + 20;
}


/* Function: call_opaque_predicate @ 0x1410 */
int call_opaque_predicate()
{
  return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x1440 */
int __cdecl param_instruction_substitution(unsigned int a1)
{
  return 15 * a1 + (a1 & 0xF) + (a1 >> 1) + 6 * a1;
}


/* Function: call_instruction_substitution @ 0x14A0 */
int call_instruction_substitution()
{
  return param_instruction_substitution(0xAu);
}


/* Function: decrypt_string @ 0x14D0 */
char *__cdecl decrypt_string(char *src, char *dest, size_t n, char a4)
{
  char *i; // [esp+10h] [ebp-8h]

  strncpy(dest, src, n);
  dest[n - 1] = 0;
  for ( i = dest; *i; ++i )
    *i ^= a4;
  return dest;
}


/* Function: param_string_encryption @ 0x1550 */
size_t param_string_encryption()
{
  size_t v0; // eax
  char dest[36]; // [esp+14h] [ebp-24h] BYREF

  decrypt_string(param_string_encryption_encrypted, dest, 0x20u, 90);
  v0 = strlen(dest);
  return dest[0] + v0;
}


/* Function: call_string_encryption @ 0x15B0 */
size_t call_string_encryption()
{
  return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x15D0 */
int __cdecl param_tail_call_optimized(int a1, int a2)
{
  if ( a1 > 0 )
    return param_tail_call_optimized(a1 - 1, a1 + a2);
  else
    return a2;
}


/* Function: call_tail_call_optimized @ 0x1630 */
int call_tail_call_optimized()
{
  return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x1660 */
int __cdecl param_non_tail_call(int a1)
{
  if ( a1 > 0 )
    return param_non_tail_call(a1 - 1) + a1;
  else
    return 0;
}


/* Function: call_non_tail_call @ 0x16C0 */
int call_non_tail_call()
{
  return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x16F0 */
int __cdecl param_vectorized_loop(int a1, int a2, int a3, int a4)
{
  int j; // [esp+0h] [ebp-Ch]
  int v6; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < a4; ++i )
    *(_DWORD *)(a3 + 4 * i) = *(_DWORD *)(a2 + 4 * i) + *(_DWORD *)(a1 + 4 * i);
  v6 = 0;
  for ( j = 0; j < a4; ++j )
    v6 += *(_DWORD *)(a3 + 4 * j);
  return v6;
}


/* Function: call_vectorized_loop @ 0x1780 */
int call_vectorized_loop()
{
  _BYTE s[32]; // [esp+14h] [ebp-64h] BYREF
  _BYTE v2[32]; // [esp+34h] [ebp-44h] BYREF
  _BYTE dest[36]; // [esp+54h] [ebp-24h] BYREF

  memcpy(dest, &unk_320C, 0x20u);
  memcpy(v2, &unk_322C, sizeof(v2));
  memset(s, 0, sizeof(s));
  return param_vectorized_loop((int)dest, (int)v2, (int)s, 8);
}


/* Function: param_link_time_optimization @ 0x1820 */
int __cdecl param_link_time_optimization(int a1)
{
  return lto_target_func(a1);
}


/* Function: lto_target_func @ 0x1850 */
int __cdecl lto_target_func(int a1)
{
  return 2 * a1 + 10;
}


/* Function: call_link_time_optimization @ 0x1870 */
int call_link_time_optimization()
{
  return param_link_time_optimization(5);
}


/* Function: div_zero_handler @ 0x18A0 */
void __cdecl __noreturn div_zero_handler(int a1)
{
  div_zero_caught = 1;
  longjmp(&jmp_buffer, 1);
}


/* Function: param_division_by_zero @ 0x18E0 */
int __cdecl param_division_by_zero(int a1)
{
  signal(8, (__sighandler_t)div_zero_handler);
  if ( _setjmp(&jmp_buffer) )
    return -1;
  else
    return 10 / a1;
}


/* Function: call_division_by_zero @ 0x1950 */
int call_division_by_zero()
{
  int v1; // [esp+Ch] [ebp-Ch]
  int v2; // [esp+10h] [ebp-8h]

  v2 = param_division_by_zero(5);
  v1 = param_division_by_zero(0);
  signal(8, 0);
  return v1 + v2;
}


/* Function: segv_handler @ 0x19B0 */
void __cdecl __noreturn segv_handler(int a1)
{
  segv_caught = 1;
  longjmp(&segv_buffer, 1);
}


/* Function: param_null_pointer_deref @ 0x19F0 */
int __cdecl param_null_pointer_deref(int a1)
{
  signal(11, (__sighandler_t)segv_handler);
  if ( _setjmp(&segv_buffer) )
    return -1;
  else
    return *(_DWORD *)a1;
}


/* Function: call_null_pointer_deref @ 0x1A60 */
int call_null_pointer_deref()
{
  int v1; // [esp+18h] [ebp-10h]
  int v2; // [esp+1Ch] [ebp-Ch]
  int v3; // [esp+20h] [ebp-8h] BYREF

  v3 = 42;
  v2 = param_null_pointer_deref((int)&v3);
  v1 = param_null_pointer_deref(0);
  signal(11, 0);
  return v1 + v2;
}


/* Function: param_buffer_overflow_stack @ 0x1AD0 */
int __cdecl param_buffer_overflow_stack(int a1)
{
  int i; // [esp+4h] [ebp-10h]
  _BYTE v3[8]; // [esp+Ch] [ebp-8h]

  for ( i = 0; i <= 16; ++i )
    v3[i] = 65;
  return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1B40 */
int __cdecl param_buffer_overflow_heap(int a1)
{
  int i; // [esp+8h] [ebp-10h]
  _BYTE *ptr; // [esp+Ch] [ebp-Ch]

  ptr = malloc(0x10u);
  if ( !ptr )
    return -2;
  for ( i = 0; i <= 32; ++i )
    ptr[i] = 66;
  free(ptr);
  return a1;
}


/* Function: call_buffer_overflow @ 0x1BD0 */
int call_buffer_overflow()
{
  int v1; // [esp+10h] [ebp-8h]

  v1 = param_buffer_overflow_stack(10);
  return param_buffer_overflow_heap(20) + v1;
}


/* Function: param_integer_overflow @ 0x1C20 */
int __cdecl param_integer_overflow(int a1, int a2)
{
  int v3; // [esp+Ch] [ebp-8h]

  v3 = a2 + a1;
  if ( a1 > 0 && a2 > 0 && v3 < 0 )
    return -1;
  if ( a1 >= 0 || a2 >= 0 || v3 <= 0 )
    return a2 + a1;
  return -2;
}


/* Function: call_integer_overflow @ 0x1CB0 */
int call_integer_overflow()
{
  int v1; // [esp+10h] [ebp-8h]

  v1 = param_integer_overflow(1000000000, 1000000000);
  return param_integer_overflow(-1, 1) + v1;
}


/* Function: param_undefined_behavior @ 0x1D10 */
int __cdecl param_undefined_behavior(int a1)
{
  return 2 * a1;
}


/* Function: call_undefined_behavior @ 0x1D30 */
int call_undefined_behavior()
{
  return param_undefined_behavior(5);
}


/* Function: param_implementation_defined @ 0x1D60 */
int param_implementation_defined()
{
  return 43;
}


/* Function: call_implementation_defined @ 0x1E00 */
int call_implementation_defined()
{
  return param_implementation_defined();
}


/* Function: test_obf_opt_edge @ 0x1E20 */
int test_obf_opt_edge()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  size_t v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax

  printf(asc_300D);
  v0 = call_fake_branch();
  printf(aObfL402D, v0);
  v1 = call_opaque_predicate();
  printf(aObfL403D, v1);
  v2 = call_instruction_substitution();
  printf(aObfL404D, v2);
  v3 = call_string_encryption();
  printf(aObfL405D, v3);
  v4 = call_tail_call_optimized();
  printf(aOptL401, v4);
  v5 = call_non_tail_call();
  printf(aOptL401_0, v5);
  v6 = call_vectorized_loop();
  printf(aOptL402, v6);
  v7 = call_link_time_optimization();
  printf(aOptL501LtoD, v7);
  v8 = call_division_by_zero();
  printf(aEdgeL301D, v8);
  v9 = call_null_pointer_deref();
  printf(aEdgeL302D, v9);
  v10 = call_buffer_overflow();
  printf(aEdgeL303D, v10);
  v11 = call_integer_overflow();
  printf(aEdgeL304D, v11);
  v12 = call_undefined_behavior();
  printf(aEdgeL401D, v12);
  v13 = call_implementation_defined();
  return printf(aEdgeL402D, v13);
}


/* Function: main @ 0x1FE0 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_obf_opt_edge();
  return 0;
}


/* Function: __do_global_ctors_aux @ 0x2010 */
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


/* Function: .term_proc @ 0x205C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x5194 */

/* FAILED to decompile: printf @ 0x5198 */

/* FAILED to decompile: longjmp @ 0x519C */

/* FAILED to decompile: _setjmp @ 0x51A0 */

/* FAILED to decompile: free @ 0x51A4 */

/* FAILED to decompile: memcpy @ 0x51A8 */

/* FAILED to decompile: signal @ 0x51AC */

/* FAILED to decompile: __cxa_finalize @ 0x51B0 */

/* FAILED to decompile: malloc @ 0x51B4 */

/* FAILED to decompile: strlen @ 0x51B8 */

/* FAILED to decompile: memset @ 0x51BC */

/* FAILED to decompile: strncpy @ 0x51C0 */

/* Total functions decompiled: 49, failed: 12 */
