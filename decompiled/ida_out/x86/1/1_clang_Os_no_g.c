/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/1/1_clang_Os_no_g
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


/* Function: sub_1090 @ 0x1090 */
int __usercall sub_1090@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 - 16))();
}


/* Function: _start @ 0x10A0 */
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


/* Function: sub_10CC @ 0x10CC */
void sub_10CC()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x10D0 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x10E0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1120 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1170 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_1090((int)&GLOBAL_OFFSET_TABLE_);
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


/* Function: frame_dummy @ 0x1200 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1209 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x120D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: sequential_ops @ 0x1214 */
int __cdecl sequential_ops(int a1, int a2, int a3)
{
  return 2 * (a1 + a2) - a3;
}


/* Function: single_if @ 0x1223 */
int __cdecl single_if(int a1)
{
  return a1 << (a1 > 0);
}


/* Function: if_else @ 0x122F */
_BOOL4 __cdecl if_else(int a1)
{
  return a1 > 0;
}


/* Function: nested_if_2 @ 0x123A */
int __cdecl nested_if_2(int a1, int a2)
{
  int v2; // eax
  int result; // eax

  v2 = a2;
  if ( a2 < 0 )
    v2 = 0;
  result = a1 + v2;
  if ( a1 <= 0 )
    return 0;
  return result;
}


/* Function: nested_if_deep @ 0x1251 */
int __cdecl nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
  if ( a1 <= 0 )
    return 0;
  if ( a2 <= 0 )
    return 1;
  if ( a3 <= 0 )
    return 2;
  if ( a4 <= 0 )
    return 3;
  return (a5 > 0) | 4;
}


/* Function: if_elseif_chain @ 0x128E */
int __cdecl if_elseif_chain(unsigned int a1)
{
  int result; // eax

  result = 10 * a1 + 10;
  if ( a1 >= 3 )
    return -1;
  return result;
}


/* Function: if_elseif_long @ 0x12A3 */
int __cdecl if_elseif_long(unsigned int a1)
{
  int result; // eax

  result = -1;
  if ( a1 < 5 )
    return 100 * a1 + 100;
  return result;
}


/* Function: switch_small @ 0x12B7 */
int __cdecl switch_small(unsigned int a1)
{
  if ( a1 > 3 )
    return -1;
  else
    return dword_2660[a1];
}


/* Function: switch_large @ 0x12D8 */
int __cdecl switch_large(unsigned int a1)
{
  int result; // eax

  result = 10 * a1;
  if ( a1 >= 0xA )
    return -1;
  return result;
}


/* Function: switch_default @ 0x12EC */
int __cdecl switch_default(int a1)
{
  int result; // eax

  result = 0;
  if ( (unsigned int)(a1 - 1) < 3 )
    return 100 * (a1 - 1) + 100;
  return result;
}


/* Function: switch_fallthrough @ 0x1300 */
int __cdecl switch_fallthrough(int a1)
{
  int v1; // eax

  v1 = 0;
  switch ( a1 )
  {
    case 1:
      return a1 + v1;
    case 2:
LABEL_5:
      v1 += 2 * a1;
      return a1 + v1;
    case 3:
      v1 = 12;
      goto LABEL_5;
  }
  return -1;
}


/* Function: loop_for_fixed @ 0x1324 */
int __cdecl loop_for_fixed(int a1)
{
  if ( a1 <= 0 )
    return 0;
  else
    return (((unsigned int)(a1 - 2) * (unsigned __int64)(unsigned int)(a1 - 1)) >> 1) + a1 - 1;
}


/* Function: loop_while @ 0x1340 */
int __cdecl loop_while(int a1)
{
  int v1; // esi
  int v2; // ecx
  bool v3; // cc

  v1 = a1;
  if ( !a1 )
    return 1;
  v2 = 0;
  do
  {
    ++v2;
    v3 = (unsigned int)(v1 + 9) <= 0x12;
    v1 /= 10;
  }
  while ( !v3 );
  return v2;
}


/* Function: loop_dowhile @ 0x1374 */
int __cdecl loop_dowhile(int a1)
{
  int v1; // ecx
  bool v3; // cc

  v1 = 0;
  do
  {
    ++v1;
    v3 = (unsigned int)(a1 + 9) <= 0x12;
    a1 /= 10;
  }
  while ( !v3 );
  return v1;
}


/* Function: loop_nested @ 0x139F */
int __cdecl loop_nested(int a1, int a2)
{
  int v2; // eax
  int result; // eax

  v2 = a2;
  if ( a2 <= 0 )
    v2 = 0;
  result = a1 * v2;
  if ( a1 <= 0 )
    return 0;
  return result;
}


/* Function: loop_break @ 0x13B7 */
int __cdecl loop_break(int a1)
{
  int result; // eax
  _DWORD *i; // ecx

  result = 0;
  for ( i = &unk_2038; *i != a1; ++i )
  {
    if ( ++result == 5 )
      return -1;
  }
  return result;
}


/* Function: loop_continue @ 0x13E4 */
int __cdecl loop_continue(int a1)
{
  int result; // eax
  int v2; // edx
  int v3; // esi

  if ( a1 <= 0 )
    return 0;
  result = 0;
  v2 = 1;
  do
  {
    result += v2 & -(v2 & 1);
    v3 = v2 - a1 + 1;
    ++v2;
  }
  while ( v3 != 1 );
  return result;
}


/* Function: goto_forward @ 0x140F */
int __cdecl goto_forward(int a1)
{
  int v1; // eax

  v1 = 1;
  if ( a1 > 0 )
    v1 = a1;
  return 2 * a1 * v1;
}


/* Function: goto_backward @ 0x1421 */
int __cdecl goto_backward(int a1)
{
  int v1; // edx
  int result; // eax
  int v3; // esi

  if ( a1 <= 0 )
    return 1;
  v1 = 1;
  result = 1;
  do
  {
    result *= v1;
    v3 = v1 - a1 + 1;
    ++v1;
  }
  while ( v3 != 1 );
  return result;
}


/* Function: ternary_op @ 0x1445 */
int __cdecl ternary_op(int a1, int a2)
{
  int result; // eax

  result = a2;
  if ( a1 > a2 )
    return a1;
  return result;
}


/* Function: test_control_flow_l1 @ 0x1453 */
int test_control_flow_l1()
{
  puts(asc_25D1);
  printf("CF-L1-01 (sequential_ops): %d\n", 21);
  printf("CF-L1-02 (single_if): %d\n", 20);
  printf("CF-L1-02 (single_if): %d\n", -5);
  printf("CF-L1-03 (if_else): %d\n", 1);
  printf("CF-L1-03 (if_else): %d\n", 0);
  printf("CF-L1-04 (nested_if_2): %d\n", 15);
  printf("CF-L1-04 (nested_if_2): %d\n", 10);
  printf("CF-L1-04 (nested_if_2): %d\n", 0);
  printf("CF-L1-05 (nested_if_deep): %d\n", 5);
  printf("CF-L1-06 (if_elseif_chain): %d\n", 20);
  printf("CF-L1-07 (if_elseif_long): %d\n", 400);
  printf("CF-L1-08 (switch_small): %d\n", 50);
  printf("CF-L1-09 (switch_large): %d\n", 70);
  printf("CF-L1-10 (switch_default): %d\n", 0);
  printf("CF-L1-11 (switch_fallthrough): %d\n", 21);
  printf("CF-L1-12 (loop_for_fixed): %d\n", 45);
  printf("CF-L1-13 (loop_while): %d\n", 5);
  printf("CF-L1-14 (loop_dowhile): %d\n", 4);
  printf("CF-L1-15 (loop_nested): %d\n", 12);
  printf("CF-L1-16 (loop_break): %d\n", 2);
  printf("CF-L1-16 (loop_break): %d\n", -1);
  printf("CF-L1-17 (loop_continue): %d\n", 25);
  printf("CF-L1-18 (goto_forward): %d\n", 50);
  printf("CF-L1-18 (goto_forward): %d\n", -6);
  printf("CF-L1-19 (goto_backward): %d\n", 120);
  printf("CF-L1-20 (ternary_op): %d\n", 10);
  return printf("CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x1695 */
int __cdecl loop_multi_exit(int a1)
{
  int v1; // ecx
  _DWORD *v2; // edx
  int result; // eax
  int v4; // edi
  int i; // ebx

  v1 = 0;
  v2 = &unk_204C;
  result = -1;
  v4 = 0;
  while ( 2 )
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( v2[i] == a1 )
        return i - v1;
    }
    ++v4;
    v1 -= 10;
    v2 += 4;
    if ( v4 != 3 )
      continue;
    break;
  }
  return result;
}


/* Function: infinite_loop @ 0x16D8 */
int __cdecl infinite_loop(_DWORD *a1)
{
  int result; // eax

  result = 0;
  while ( *a1 != 1 )
  {
    if ( ++result == 1001 )
    {
      *a1 = 1;
      return 1001;
    }
  }
  return result;
}


/* Function: multi_return @ 0x16F9 */
int __cdecl multi_return(int a1)
{
  int result; // eax

  if ( a1 < 0 )
    return -1;
  result = -2;
  if ( (unsigned int)a1 <= 0x32 )
  {
    result = a1 + 1;
    if ( (a1 & 1) == 0 )
      return 2 * a1;
  }
  return result;
}


/* Function: conditional_return @ 0x171C */
int __cdecl conditional_return(int a1)
{
  int result; // eax

  result = -a1;
  if ( a1 > 0 )
    return 2 * a1;
  return result;
}


/* Function: duffs_device @ 0x172D */
int __cdecl duffs_device(_DWORD *a1, int *a2, int a3)
{
  int result; // eax
  signed int v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi

  result = -1;
  if ( a3 > 0 )
  {
    v6 = (unsigned int)(a3 + 7) >> 3;
    switch ( a3 & 7 )
    {
      case 0:
        goto LABEL_3;
      case 1:
        goto LABEL_10;
      case 2:
        goto LABEL_9;
      case 3:
        goto LABEL_8;
      case 4:
        goto LABEL_7;
      case 5:
        goto LABEL_6;
      case 6:
        goto LABEL_5;
      case 7:
        while ( 1 )
        {
          v8 = *a2++;
          *a1++ = v8;
LABEL_5:
          v9 = *a2++;
          *a1++ = v9;
LABEL_6:
          v10 = *a2++;
          *a1++ = v10;
LABEL_7:
          v11 = *a2++;
          *a1++ = v11;
LABEL_8:
          v12 = *a2++;
          *a1++ = v12;
LABEL_9:
          v13 = *a2++;
          *a1++ = v13;
LABEL_10:
          v14 = *a2++;
          *a1++ = v14;
          if ( v6-- <= 1 )
            break;
LABEL_3:
          v7 = *a2++;
          *a1++ = v7;
        }
        result = a3;
        break;
    }
  }
  return result;
}


/* Function: loop_complex_cond @ 0x17C3 */
unsigned int __cdecl loop_complex_cond(int a1)
{
  signed int v1; // ecx
  unsigned int v2; // esi
  signed int v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // edx

  v1 = a1;
  if ( a1 <= 0 )
  {
    v3 = 0;
    v5 = 0;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = v1;
      v3 += 2;
      --v1;
      v5 = v2 + 1;
      if ( v4 < 2 )
        break;
      if ( v3 >= v1 )
        break;
    }
    while ( v2++ < 9 );
  }
  return v5 + v1 + v3;
}


/* Function: loop_modify_var @ 0x17F7 */
int __cdecl loop_modify_var(int a1)
{
  int v1; // edx
  int result; // eax
  int v3; // esi

  if ( a1 <= 0 )
    return 0;
  v1 = 0;
  result = 0;
  do
  {
    result += v1;
    v3 = v1 + 2;
    if ( v1 < 6 )
      v3 = v1;
    v1 = v3 + 1;
  }
  while ( v3 + 1 < a1 );
  return result;
}


/* Function: loop_external_state @ 0x181C */
int __cdecl loop_external_state(_DWORD *a1)
{
  int result; // eax

  result = 0;
  while ( !*a1 )
  {
    if ( ++result == 101 )
      return 101;
  }
  return result;
}


/* Function: recursion_factorial @ 0x1833 */
int __cdecl recursion_factorial(int a1)
{
  unsigned int v1; // ecx
  int result; // eax

  v1 = a1;
  result = 1;
  if ( a1 >= 2 )
  {
    do
      result *= v1;
    while ( v1-- > 2 );
  }
  return result;
}


/* Function: tail_recursion @ 0x184D */
int __cdecl tail_recursion(int a1, int a2)
{
  int result; // eax
  unsigned int v3; // ecx

  result = a2;
  v3 = a1;
  if ( a1 >= 2 )
  {
    do
      result *= v3;
    while ( v3-- > 2 );
  }
  return result;
}


/* Function: indirect_recursion_a @ 0x1868 */
int __cdecl indirect_recursion_a(int a1, int a2)
{
  int result; // eax
  int i; // ecx
  int v4; // eax

  result = a1;
  if ( a2 > 0 )
  {
    for ( i = a2 + 2; i >= 3; i -= 2 )
    {
      if ( (result & 1) != 0 )
      {
        v4 = 3 * result;
        if ( i == 3 )
          return v4 + 1;
        result = v4 + 2;
      }
      else
      {
        if ( i == 3 )
        {
          result /= 2;
          return result;
        }
        result = result / 2 + 1;
      }
    }
  }
  return result;
}


/* Function: call_func_ptr @ 0x18A7 */
int __cdecl call_func_ptr(int (__cdecl *a1)(int), int a2)
{
  return a1(a2);
}


/* Function: call_func_ptr_array @ 0x18C7 */
int __cdecl call_func_ptr_array(unsigned int a1, int a2)
{
  if ( a1 <= 2 )
    return funcs_18EC[a1](a2);
  else
    return -1;
}


/* Function: double_value @ 0x18F8 */
int __cdecl double_value(int a1)
{
  return 2 * a1;
}


/* Function: triple_value @ 0x18FF */
int __cdecl triple_value(int a1)
{
  return 3 * a1;
}


/* Function: call_virtual_func @ 0x1907 */
int __cdecl call_virtual_func(int a1, int a2)
{
  return 2 * a2;
}


/* Function: process_with_callback @ 0x190E */
int __cdecl process_with_callback(int a1, int a2, int (__cdecl *a3)(_DWORD))
{
  int v3; // ebp
  int v4; // esi

  if ( a2 <= 0 )
    return 0;
  v3 = 0;
  v4 = 0;
  do
    v4 += a3(*(_DWORD *)(a1 + 4 * v3++));
  while ( a2 != v3 );
  return v4;
}


/* Function: test_control_flow_l2 @ 0x1950 */
int test_control_flow_l2()
{
  int v0; // ecx
  _DWORD *v1; // edx
  int v2; // eax
  int v3; // esi
  int i; // edi
  int j; // eax
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // eax
  unsigned int v10; // esi
  int k; // eax
  _DWORD v13[8]; // [esp+Ch] [ebp-50h] BYREF
  int v14[12]; // [esp+2Ch] [ebp-30h] BYREF

  puts(asc_25F5);
  v0 = 0;
  v1 = &unk_204C;
  v2 = -1;
  v3 = 0;
  while ( 2 )
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( v1[i] == 7 )
      {
        v2 = i - v0;
        goto LABEL_8;
      }
    }
    ++v3;
    v0 -= 10;
    v1 += 4;
    if ( v3 != 3 )
      continue;
    break;
  }
LABEL_8:
  printf("CF-L2-01 (loop_multi_exit): %d\n", v2);
  for ( j = 0; j != 1001; ++j )
    ;
  printf("CF-L2-02 (infinite_loop): %d\n", 1001);
  printf("CF-L2-03 (multi_return): %d\n", -1);
  printf("CF-L2-03 (multi_return): %d\n", -2);
  printf("CF-L2-03 (multi_return): %d\n", 4);
  printf("CF-L2-04 (conditional_return): %d\n", 10);
  printf("CF-L2-04 (conditional_return): %d\n", 5);
  qmemcpy(v14, &unk_2640, 0x20u);
  v6 = duffs_device(v13, v14, 8);
  printf("CF-L2-05 (duffs_device): %d\n", v6);
  v7 = -1;
  v8 = 11;
  v9 = 10;
  do
  {
    v10 = v9 - 8;
    v9 += 2;
    if ( v10 >= v8 - 2 )
      break;
    ++v7;
    --v8;
  }
  while ( v7 < 9 );
  printf("CF-L2-06 (loop_complex_cond): %d\n", v9);
  printf("CF-L2-07 (loop_modify_var): %d\n", 30);
  for ( k = 0; k != 101; ++k )
    ;
  printf("CF-L2-08 (loop_external_state): %d\n", 101);
  printf("CF-L2-09 (recursion_factorial): %d\n", 120);
  printf("CF-L2-10 (tail_recursion): %d\n", 120);
  printf("CF-L2-11 (indirect_recursion): %d\n", 3);
  printf("CF-L2-12 (call_func_ptr): %d\n", 10);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
  return printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


/* Function: non_local_jump @ 0x1B58 */
int __cdecl non_local_jump(int a1)
{
  if ( _setjmp(&jump_buffer) )
    return -1;
  if ( a1 < 0 )
    longjmp(&jump_buffer, 1);
  if ( (unsigned int)a1 >= 0x65 )
    longjmp(&jump_buffer, 2);
  return 2 * a1;
}


/* Function: cpp_exception @ 0x1BB6 */
int __cdecl cpp_exception(int a1)
{
  int v1; // edx
  int result; // eax

  v1 = -2;
  if ( a1 < 101 )
    v1 = 2 * a1;
  result = -1;
  if ( a1 >= 0 )
    return v1;
  return result;
}


/* Function: large_jump_table @ 0x1BD1 */
int __cdecl large_jump_table(unsigned int a1, int a2, int a3)
{
  if ( a1 <= 9 )
    return funcs_1BFD[a1](a2, a3);
  else
    return -1;
}


/* Function: op_add @ 0x1C09 */
int __cdecl op_add(int a1, int a2)
{
  return a1 + a2;
}


/* Function: op_sub @ 0x1C12 */
int __cdecl op_sub(int a1, int a2)
{
  return a1 - a2;
}


/* Function: op_mul @ 0x1C1B */
int __cdecl op_mul(int a1, int a2)
{
  return a1 * a2;
}


/* Function: op_div @ 0x1C25 */
int __cdecl op_div(int a1, int a2)
{
  if ( a2 )
    return a1 / a2;
  else
    return 0;
}


/* Function: op_mod @ 0x1C38 */
int __cdecl op_mod(int a1, int a2)
{
  if ( a2 )
    return a1 % a2;
  else
    return 0;
}


/* Function: op_and @ 0x1C4D */
int __cdecl op_and(int a1, int a2)
{
  return a1 & a2;
}


/* Function: op_or @ 0x1C56 */
int __cdecl op_or(__int64 a1)
{
  return a1 | HIDWORD(a1);
}


/* Function: op_xor @ 0x1C5F */
int __cdecl op_xor(int a1, int a2)
{
  return a1 ^ a2;
}


/* Function: op_shl @ 0x1C68 */
int __cdecl op_shl(int a1, char a2)
{
  return a1 << a2;
}


/* Function: op_shr @ 0x1C73 */
int __cdecl op_shr(int a1, char a2)
{
  return a1 >> a2;
}


/* Function: conditional_func_ptr @ 0x1C7E */
int __cdecl conditional_func_ptr(int a1, int a2)
{
  int (__cdecl *v2)(int); // esi
  int (__cdecl *v3)(int); // ecx

  v2 = recursion_factorial;
  if ( a1 == 1 )
    v2 = triple_value;
  v3 = double_value;
  if ( a1 )
    v3 = v2;
  return v3(a2);
}


/* Function: state_machine @ 0x1CBD */
int __cdecl state_machine(int a1, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 0:
      result = a1 == 1;
      break;
    case 1:
      result = 2 * (a1 == 99) + 1;
      if ( a1 == 2 )
        result = 2;
      break;
    case 2:
      return result;
    case 3:
      result = 3 * (a1 != 0);
      break;
    default:
      result = 3;
      break;
  }
  return result;
}


/* Function: fsm_func_table @ 0x1D0B */
int __cdecl fsm_func_table(int a1, unsigned int a2)
{
  if ( a2 <= 3 )
    return funcs_1D32[a2](a1);
  else
    return 3;
}


/* Function: state_idle @ 0x1D3E */
_BOOL4 __cdecl state_idle(int a1)
{
  return a1 == 1;
}


/* Function: state_processing @ 0x1D49 */
int __cdecl state_processing(int a1)
{
  int result; // eax

  result = 2 * (a1 == 99) + 1;
  if ( a1 == 2 )
    return 2;
  return result;
}


/* Function: state_done @ 0x1D5F */
int state_done()
{
  return 2;
}


/* Function: state_error @ 0x1D65 */
int __cdecl state_error(int a1)
{
  return 3 * (a1 != 0);
}


/* Function: computed_goto @ 0x1D73 */
int __cdecl computed_goto(int a1, unsigned int a2)
{
  if ( a2 <= 3 )
    return funcs_1D8C[a2]();
  else
    return -1;
}


/* Function: sub_1D93 @ 0x1D93 */
int sub_1D93()
{
  return 0;
}


/* Function: sub_1D96 @ 0x1D96 */
int sub_1D96()
{
  return 20;
}


/* Function: sub_1D9C @ 0x1D9C */
int sub_1D9C()
{
  return 30;
}


/* Function: sub_1DA2 @ 0x1DA2 */
int sub_1DA2()
{
  return 10;
}


/* Function: obfuscated_cf @ 0x1DA8 */
int __cdecl obfuscated_cf(int a1)
{
  return 2 * a1;
}


/* Function: opaque_predicate @ 0x1DAF */
int __cdecl opaque_predicate(int a1)
{
  return 2 * a1;
}


/* Function: overlapped_code @ 0x1DB6 */
int __cdecl overlapped_code(int a1)
{
  if ( (a1 & 1) != 0 )
    return 3 * a1 + 1;
  else
    return a1 / 2;
}


/* Function: test_control_flow_l3 @ 0x1DCE */
int test_control_flow_l3()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  char *s; // [esp+0h] [ebp-1Ch]

  puts(asc_2619);
  v0 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  printf("CF-L3-01 (non_local_jump): %d\n", v1);
  printf("CF-L3-02 (cpp_exception): %d\n", 10);
  printf("CF-L3-02 (cpp_exception): %d\n", -1);
  printf("CF-L3-03 (large_jump_table): %d\n", 15);
  printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
  printf("CF-L3-05 (state_machine): %d\n", 1);
  printf("CF-L3-06 (fsm_func_table): %d\n", 2);
  v2 = computed_goto((int)s, 2u);
  printf("CF-L3-07 (computed_goto): %d\n", v2);
  printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
  printf("CF-L3-09 (opaque_predicate): %d\n", 10);
  return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x1EFC */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: __do_global_ctors_aux @ 0x1F30 */
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


/* Function: .term_proc @ 0x1F7C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x50D0 */

/* FAILED to decompile: printf @ 0x50D4 */

/* FAILED to decompile: longjmp @ 0x50D8 */

/* FAILED to decompile: _setjmp @ 0x50DC */

/* FAILED to decompile: __cxa_finalize @ 0x50E0 */

/* FAILED to decompile: puts @ 0x50E4 */

/* Total functions decompiled: 83, failed: 6 */
