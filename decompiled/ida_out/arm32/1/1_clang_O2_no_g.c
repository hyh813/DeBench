/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/1/1_clang_O2_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x4D0 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_4DC @ 0x4DC */
void sub_4DC()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x55C */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_598 + 19113), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x5A0 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x5C4 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x608 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x658 */
void *_do_global_dtors_aux()
{
  void *result; // r0

  if ( !completed_0 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x6C0 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: sequential_ops @ 0x6C4 */
int __fastcall sequential_ops(int a1, int a2, int a3)
{
  return 2 * (a2 + a1) - a3;
}


/* Function: single_if @ 0x6D0 */
int __fastcall single_if(int a1)
{
  return a1 << (a1 > 0);
}


/* Function: if_else @ 0x6E4 */
bool __fastcall if_else(int a1)
{
  return a1 > 0;
}


/* Function: nested_if_2 @ 0x6F8 */
int __fastcall nested_if_2(int a1, int a2)
{
  int v2; // r2

  v2 = a1;
  if ( a2 > 0 )
    v2 = a1 + a2;
  if ( a1 <= 0 )
    return 0;
  return v2;
}


/* Function: nested_if_deep @ 0x714 */
int __fastcall nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0

  if ( a1 < 1 )
    return 0;
  if ( a2 < 1 )
    return 1;
  if ( a3 < 1 )
    return 2;
  if ( a4 < 1 )
    return 3;
  result = 4;
  if ( a5 > 0 )
    return 5;
  return result;
}


/* Function: if_elseif_chain @ 0x758 */
int __fastcall if_elseif_chain(unsigned int a1)
{
  int v1; // r1

  v1 = -1;
  if ( a1 < 3 )
    return 10 * a1 + 10;
  return v1;
}


/* Function: if_elseif_long @ 0x774 */
int __fastcall if_elseif_long(unsigned int a1)
{
  int v1; // r1

  v1 = -1;
  if ( a1 < 5 )
    return 100 * a1 + 100;
  return v1;
}


/* Function: switch_small @ 0x790 */
int __fastcall switch_small(unsigned int a1)
{
  int result; // r0

  result = -1;
  if ( a1 <= 3 )
    return dword_1E2C[a1];
  return result;
}


/* Function: switch_large @ 0x7B0 */
int __fastcall switch_large(unsigned int a1)
{
  int v1; // r1

  v1 = -1;
  if ( a1 < 0xA )
    return 10 * a1;
  return v1;
}


/* Function: switch_default @ 0x7C8 */
int __fastcall switch_default(int a1)
{
  unsigned int v1; // r1
  int v2; // r2
  int result; // r0

  v1 = a1 - 1;
  v2 = 100 * (a1 - 1);
  result = 0;
  if ( v1 < 3 )
    return v2 + 100;
  return result;
}


/* Function: switch_fallthrough @ 0x7E4 */
int __fastcall switch_fallthrough(int a1)
{
  int v1; // r1
  int v2; // r1

  v1 = 0;
  if ( a1 == 1 )
    return v1 + a1;
  if ( a1 == 2 )
  {
LABEL_5:
    v1 += 2 * a1;
    return v1 + a1;
  }
  v2 = -1;
  if ( a1 == 3 )
  {
    v1 = 12;
    goto LABEL_5;
  }
  return v2;
}


/* Function: loop_for_fixed @ 0x818 */
int __fastcall loop_for_fixed(int a1)
{
  if ( a1 >= 1 )
    return ((__int64)((unsigned int)(a1 - 1) * (unsigned __int64)(unsigned int)(a1 - 2)) >> 1) + a1 - 1;
  else
    return 0;
}


/* Function: loop_while @ 0x848 */
int __fastcall loop_while(int a1)
{
  int result; // r0
  int v2; // r1
  bool v3; // cc

  if ( !a1 )
    return 1;
  v2 = a1;
  result = 0;
  do
  {
    ++result;
    v3 = (unsigned int)(v2 + 9) > 0x12;
    v2 /= 10;
  }
  while ( v3 );
  return result;
}


/* Function: loop_dowhile @ 0x888 */
int __fastcall loop_dowhile(int a1)
{
  int result; // r0
  bool v3; // cc

  result = 0;
  do
  {
    ++result;
    v3 = (unsigned int)(a1 + 9) > 0x12;
    a1 /= 10;
  }
  while ( v3 );
  return result;
}


/* Function: loop_nested @ 0x8BC */
int __fastcall loop_nested(int a1, int a2)
{
  int v2; // r2
  int v3; // r1

  v2 = a2 & ~(a2 >> 31);
  v3 = 0;
  if ( a1 > 0 )
    return v2 * a1;
  return v3;
}


/* Function: loop_break @ 0x8D4 */
int __fastcall loop_break(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = a1 - 10;
  result = 0;
  switch ( v1 )
  {
    case 0:
      return result;
    case 10:
      result = 1;
      break;
    case 20:
      result = 2;
      break;
    case 30:
      result = 3;
      break;
    case 40:
      result = 4;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


/* Function: loop_continue @ 0x9BC */
int __fastcall loop_continue(int a1)
{
  int v1; // r2
  int v2; // r1

  if ( a1 < 1 )
    return 0;
  v1 = 0;
  v2 = 0;
  do
  {
    if ( (++v1 & 1) != 0 )
      v2 += v1;
  }
  while ( a1 != v1 );
  return v2;
}


/* Function: goto_forward @ 0x9F4 */
int __fastcall goto_forward(int a1)
{
  int v1; // r1

  v1 = a1;
  if ( a1 <= 1 )
    v1 = 1;
  return 2 * a1 * v1;
}


/* Function: goto_backward @ 0xA0C */
int __fastcall goto_backward(int a1)
{
  int v2; // r3
  int i; // r2
  int v4; // r1

  if ( a1 < 1 )
    return 1;
  v2 = 1;
  for ( i = 0; i != a1; v2 *= i )
    v4 = ++i * v2;
  return v4;
}


/* Function: ternary_op @ 0xA3C */
int __fastcall ternary_op(int result, int a2)
{
  if ( result <= a2 )
    return a2;
  return result;
}


/* Function: test_control_flow_l1 @ 0xA48 */
int test_control_flow_l1()
{
  puts(asc_1DBD);
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


/* Function: loop_multi_exit @ 0xC5C */
int __fastcall loop_multi_exit(int a1)
{
  unsigned int v1; // r1
  int result; // r0

  v1 = a1 - 1;
  result = -1;
  if ( v1 <= 0xB )
    return dword_1E6C[v1] + dword_1E3C[v1];
  return result;
}


/* Function: infinite_loop @ 0xC94 */
int __fastcall infinite_loop(_DWORD *a1)
{
  int v2; // r2
  int result; // r0

  v2 = 0;
  result = 1001;
  do
  {
    if ( *a1 == 1 )
      return v2;
    ++v2;
  }
  while ( v2 != 1001 );
  *a1 = 1;
  return result;
}


/* Function: multi_return @ 0xCCC */
int __fastcall multi_return(int a1)
{
  int result; // r0

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


/* Function: conditional_return @ 0xCF8 */
int __fastcall conditional_return(int a1)
{
  int v1; // r1

  v1 = -a1;
  if ( a1 > 0 )
    return 2 * a1;
  return v1;
}


/* Function: duffs_device @ 0xD0C */
int __fastcall duffs_device(int a1, int a2, int a3)
{
  if ( a3 >= 1 )
    __asm { ADD     PC, LR, R3 }
  return -1;
}


/* Function: loop_complex_cond @ 0xDAC */
unsigned int __fastcall loop_complex_cond(int a1)
{
  unsigned int v1; // r3
  unsigned int v2; // r2
  int v3; // r1
  unsigned int v4; // r12
  bool v5; // cf

  if ( a1 < 1 )
  {
    v3 = 0;
    v4 = 0;
  }
  else
  {
    v1 = 0;
    v2 = a1;
    v3 = 0;
    do
    {
      v3 += 2;
      v4 = v1 + 1;
      a1 = v2 - 1;
      if ( v2 < 2 )
        break;
      if ( v3 >= a1 )
        break;
      v5 = v1++ >= 9;
      --v2;
    }
    while ( !v5 );
  }
  return a1 + v3 + v4;
}


/* Function: loop_modify_var @ 0xE04 */
int __fastcall loop_modify_var(int a1)
{
  int v1; // r2
  int v2; // r1

  if ( a1 < 1 )
    return 0;
  v1 = 0;
  v2 = 0;
  do
  {
    v2 += v1;
    if ( v1 > 5 )
      v1 += 2;
    ++v1;
  }
  while ( v1 < a1 );
  return v2;
}


/* Function: loop_external_state @ 0xE40 */
int __fastcall loop_external_state(_DWORD *a1)
{
  int result; // r0

  result = 0;
  while ( !*a1 )
  {
    if ( ++result == 101 )
      return 101;
  }
  return result;
}


/* Function: recursion_factorial @ 0xE68 */
int __fastcall recursion_factorial(int a1)
{
  int v1; // r1
  int v2; // r2
  bool v3; // cc

  v1 = 1;
  if ( a1 >= 2 )
  {
    v2 = 1;
    do
    {
      v1 = a1 * v2;
      v3 = (unsigned int)a1-- > 2;
      v2 = v1;
    }
    while ( v3 );
  }
  return v1;
}


/* Function: tail_recursion @ 0xE98 */
int __fastcall tail_recursion(int a1, int a2)
{
  int v3; // r2
  bool v4; // cc

  if ( a1 < 2 )
    return a2;
  do
  {
    v3 = a2 * a1;
    v4 = (unsigned int)a1 > 2;
    a2 *= a1--;
  }
  while ( v4 );
  return v3;
}


/* Function: indirect_recursion_a @ 0xEC4 */
int __fastcall indirect_recursion_a(int result, int a2)
{
  int i; // r1
  int v3; // r0

  if ( a2 >= 1 )
  {
    for ( i = a2 + 2; i >= 3; i -= 2 )
    {
      if ( (result & 1) != 0 )
      {
        v3 = 3 * result;
        if ( i == 3 )
          return v3 + 1;
        result = v3 + 2;
      }
      else
      {
        result /= 2;
        if ( i == 3 )
          return result;
        ++result;
      }
    }
  }
  return result;
}


/* Function: call_func_ptr @ 0xF1C */
int __fastcall call_func_ptr(int (__fastcall *a1)(int), int a2)
{
  return a1(a2);
}


/* Function: call_func_ptr_array @ 0xF28 */
int __fastcall call_func_ptr_array(unsigned int a1, int a2)
{
  if ( a1 <= 2 )
    return ((int (__fastcall *)(int))off_12EBC[a1])(a2);
  else
    return -1;
}


/* Function: double_value @ 0xF4C */
int __fastcall double_value(int a1)
{
  return 2 * a1;
}


/* Function: triple_value @ 0xF54 */
int __fastcall triple_value(int a1)
{
  return 3 * a1;
}


/* Function: call_virtual_func @ 0xF5C */
int __fastcall call_virtual_func(int a1, int a2)
{
  return 2 * a2;
}


/* Function: process_with_callback @ 0xF64 */
int __fastcall process_with_callback(int *a1, int a2, int (__fastcall *a3)(int))
{
  int v4; // r5
  int v6; // r6
  int v7; // t1

  if ( a2 < 1 )
    return 0;
  v4 = a2;
  v6 = 0;
  do
  {
    v7 = *a1++;
    v6 += a3(v7);
    --v4;
  }
  while ( v4 );
  return v6;
}


/* Function: test_control_flow_l2 @ 0xFAC */
int test_control_flow_l2()
{
  int i; // r0
  unsigned int v1; // r5
  int v2; // r6
  int v3; // r0
  int v4; // r1
  int j; // r1

  puts(asc_1DE1);
  printf("CF-L2-01 (loop_multi_exit): %d\n", 12);
  for ( i = 0; i != 1001; ++i )
    ;
  printf("CF-L2-02 (infinite_loop): %d\n", 1001);
  v1 = -1;
  printf("CF-L2-03 (multi_return): %d\n", -1);
  printf("CF-L2-03 (multi_return): %d\n", -2);
  printf("CF-L2-03 (multi_return): %d\n", 4);
  v2 = 10;
  printf("CF-L2-04 (conditional_return): %d\n", 10);
  printf("CF-L2-04 (conditional_return): %d\n", 5);
  printf("CF-L2-05 (duffs_device): %d\n", 8);
  v3 = 11;
  do
  {
    v4 = v2 + 2;
    if ( v2 - 8 >= (unsigned int)(v3 - 2) )
      break;
    ++v1;
    --v3;
    v2 += 2;
  }
  while ( v1 < 9 );
  printf("CF-L2-06 (loop_complex_cond): %d\n", v4);
  printf("CF-L2-07 (loop_modify_var): %d\n", 30);
  for ( j = 0; j != 101; ++j )
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


/* Function: non_local_jump @ 0x11A4 */
int __fastcall non_local_jump(int a1)
{
  bool v2; // zf
  int result; // r0

  v2 = setjmp((struct __jmp_buf_tag *)&jump_buffer) == 0;
  result = -1;
  if ( v2 )
  {
    if ( a1 <= -1 )
      longjmp((struct __jmp_buf_tag *)&jump_buffer, 1);
    if ( (unsigned int)a1 >= 0x65 )
      longjmp((struct __jmp_buf_tag *)&jump_buffer, 2);
    return 2 * a1;
  }
  return result;
}


/* Function: cpp_exception @ 0x1218 */
int __fastcall cpp_exception(int a1)
{
  int v1; // r1

  v1 = 2 * a1;
  if ( a1 > 100 )
    v1 = -2;
  if ( a1 <= -1 )
    return -1;
  return v1;
}


/* Function: large_jump_table @ 0x1234 */
int __fastcall large_jump_table(unsigned int a1, int a2, int a3)
{
  if ( a1 <= 9 )
    return ((int (__fastcall *)(int, int))off_12EC8[a1])(a2, a3);
  else
    return -1;
}


/* Function: op_add @ 0x125C */
int __fastcall op_add(int a1, int a2)
{
  return a2 + a1;
}


/* Function: op_sub @ 0x1264 */
int __fastcall op_sub(int a1, int a2)
{
  return a1 - a2;
}


/* Function: op_mul @ 0x126C */
int __fastcall op_mul(int a1, int a2)
{
  return a2 * a1;
}


/* Function: op_div @ 0x1278 */
int __fastcall op_div(int a1, int a2)
{
  if ( a2 )
    return a1 / a2;
  else
    return 0;
}


/* Function: op_mod @ 0x1294 */
int __fastcall op_mod(int a1, int a2)
{
  if ( a2 )
    return a1 % a2;
  else
    return 0;
}


/* Function: op_and @ 0x12B4 */
int __fastcall op_and(int a1, int a2)
{
  return a2 & a1;
}


/* Function: op_or @ 0x12BC */
int __fastcall op_or(int a1, int a2)
{
  return a2 | a1;
}


/* Function: op_xor @ 0x12C4 */
int __fastcall op_xor(int a1, int a2)
{
  return a2 ^ a1;
}


/* Function: op_shl @ 0x12CC */
int __fastcall op_shl(int a1, char a2)
{
  return a1 << a2;
}


/* Function: op_shr @ 0x12D4 */
int __fastcall op_shr(int a1, char a2)
{
  return a1 >> a2;
}


/* Function: conditional_func_ptr @ 0x12DC */
int __fastcall conditional_func_ptr(int a1, int a2)
{
  int (__fastcall *v2)(int); // r3
  int (__fastcall *v3)(int); // r2

  v2 = recursion_factorial;
  if ( a1 == 1 )
    v2 = triple_value;
  v3 = double_value;
  if ( a1 )
    v3 = v2;
  return v3(a2);
}


/* Function: state_machine @ 0x1318 */
int __fastcall state_machine(int result, int a2)
{
  int v2; // r1

  switch ( a2 )
  {
    case 0:
      result = result == 1;
      break;
    case 1:
      v2 = 1;
      if ( result == 99 )
        v2 = 3;
      if ( result == 2 )
        v2 = 2;
      result = v2;
      break;
    case 2:
      goto LABEL_4;
    case 3:
      if ( result )
        result = 3;
      break;
    default:
      a2 = 3;
LABEL_4:
      result = a2;
      break;
  }
  return result;
}


/* Function: fsm_func_table @ 0x1380 */
int __fastcall fsm_func_table(int result, int a2)
{
  int v2; // r1

  switch ( a2 )
  {
    case 0:
      result = result == 1;
      break;
    case 1:
      v2 = 1;
      if ( result == 99 )
        v2 = 3;
      if ( result != 2 )
        result = v2;
      break;
    case 2:
      result = 2;
      break;
    case 3:
      if ( result )
        result = 3;
      break;
    default:
      result = 3;
      break;
  }
  return result;
}


/* Function: computed_goto @ 0x13DC */
int __fastcall computed_goto(int a1, int a2)
{
  int result; // r0

  switch ( a2 )
  {
    case 0:
      result = 0;
      break;
    case 1:
      result = 10;
      break;
    case 2:
      result = 20;
      break;
    case 3:
      result = 30;
      break;
  }
  return result;
}


/* Function: obfuscated_cf @ 0x141C */
int __fastcall obfuscated_cf(int a1)
{
  return 2 * a1;
}


/* Function: opaque_predicate @ 0x1424 */
int __fastcall opaque_predicate(int a1)
{
  return 2 * a1;
}


/* Function: overlapped_code @ 0x142C */
int __fastcall overlapped_code(int a1)
{
  int v1; // r1

  v1 = 3 * a1 + 1;
  if ( (a1 & 1) == 0 )
    return a1 / 2;
  return v1;
}


/* Function: test_control_flow_l3 @ 0x1448 */
int test_control_flow_l3()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0

  puts(asc_1E05);
  v0 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  printf("CF-L3-01 (non_local_jump): %d\n", v1);
  printf("CF-L3-02 (cpp_exception): %d\n", 10);
  printf("CF-L3-02 (cpp_exception): %d\n", -1);
  printf("CF-L3-03 (large_jump_table): %d\n", 15);
  printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
  printf("CF-L3-05 (state_machine): %d\n", 1);
  v2 = printf("CF-L3-06 (fsm_func_table): %d\n", 2);
  v3 = computed_goto(v2, 2);
  printf("CF-L3-07 (computed_goto): %d\n", v3);
  printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
  printf("CF-L3-09 (opaque_predicate): %d\n", 10);
  return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: main @ 0x1560 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: __divsi3 @ 0x157C */
int __fastcall _divsi3(int a1, int a2)
{
  bool v2; // nf

  if ( a2 )
    return divsi3_skip_div0_test();
  v2 = a1 < 0;
  if ( a1 > 0 )
    a1 = 0x7FFFFFFF;
  if ( v2 )
    a1 = 0x80000000;
  return _aeabi_ldiv0(a1);
}


/* Function: .divsi3_skip_div0_test @ 0x1584 */
int __fastcall divsi3_skip_div0_test(int result, unsigned int a2)
{
  char v2; // nf
  int v3; // r12
  unsigned int v4; // r3
  unsigned int v5; // r2
  _BOOL4 v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0

  v3 = result ^ a2;
  if ( v2 )
    a2 = -a2;
  if ( a2 == 1 )
  {
    if ( (v3 ^ result) < 0 )
      return -result;
  }
  else
  {
    v4 = result;
    if ( result < 0 )
      v4 = -result;
    if ( v4 <= a2 )
    {
      if ( v4 < a2 )
        result = 0;
      if ( v4 == a2 )
        return (v3 >> 31) | 1;
    }
    else if ( (a2 & (a2 - 1)) != 0 )
    {
      v5 = 31 - (__clz(a2) - __clz(v4));
      if ( v5 )
      {
        return ((int (__fastcall *)(_DWORD))((char *)&loc_15CC + 12 * v5))(0);
      }
      else
      {
        v6 = v4 >= a2 << 31;
        if ( v4 >= a2 << 31 )
          v4 -= a2 << 31;
        v7 = v6 + (v4 >= a2 << 30) + v6;
        if ( v4 >= a2 << 30 )
          v4 -= a2 << 30;
        v8 = v7 + (v4 >= a2 << 29) + v7;
        if ( v4 >= a2 << 29 )
          v4 -= a2 << 29;
        v9 = v8 + (v4 >= a2 << 28) + v8;
        if ( v4 >= a2 << 28 )
          v4 -= a2 << 28;
        v10 = v9 + (v4 >= a2 << 27) + v9;
        if ( v4 >= a2 << 27 )
          v4 -= a2 << 27;
        v11 = v10 + (v4 >= a2 << 26) + v10;
        if ( v4 >= a2 << 26 )
          v4 -= a2 << 26;
        v12 = v11 + (v4 >= a2 << 25) + v11;
        if ( v4 >= a2 << 25 )
          v4 -= a2 << 25;
        v13 = v12 + (v4 >= a2 << 24) + v12;
        if ( v4 >= a2 << 24 )
          v4 -= a2 << 24;
        v14 = v13 + (v4 >= a2 << 23) + v13;
        if ( v4 >= a2 << 23 )
          v4 -= a2 << 23;
        v15 = v14 + (v4 >= a2 << 22) + v14;
        if ( v4 >= a2 << 22 )
          v4 -= a2 << 22;
        v16 = v15 + (v4 >= a2 << 21) + v15;
        if ( v4 >= a2 << 21 )
          v4 -= a2 << 21;
        v17 = v16 + (v4 >= a2 << 20) + v16;
        if ( v4 >= a2 << 20 )
          v4 -= a2 << 20;
        v18 = v17 + (v4 >= a2 << 19) + v17;
        if ( v4 >= a2 << 19 )
          v4 -= a2 << 19;
        v19 = v18 + (v4 >= a2 << 18) + v18;
        if ( v4 >= a2 << 18 )
          v4 -= a2 << 18;
        v20 = v19 + (v4 >= a2 << 17) + v19;
        if ( v4 >= a2 << 17 )
          v4 -= a2 << 17;
        v21 = v20 + (v4 >= a2 << 16) + v20;
        if ( v4 >= a2 << 16 )
          v4 -= a2 << 16;
        v22 = v21 + (v4 >= a2 << 15) + v21;
        if ( v4 >= a2 << 15 )
          v4 -= a2 << 15;
        v23 = v22 + (v4 >= a2 << 14) + v22;
        if ( v4 >= a2 << 14 )
          v4 -= a2 << 14;
        v24 = v23 + (v4 >= a2 << 13) + v23;
        if ( v4 >= a2 << 13 )
          v4 -= a2 << 13;
        v25 = v24 + (v4 >= a2 << 12) + v24;
        if ( v4 >= a2 << 12 )
          v4 -= a2 << 12;
        v26 = v25 + (v4 >= a2 << 11) + v25;
        if ( v4 >= a2 << 11 )
          v4 -= a2 << 11;
        v27 = v26 + (v4 >= a2 << 10) + v26;
        if ( v4 >= a2 << 10 )
          v4 -= a2 << 10;
        v28 = v27 + (v4 >= a2 << 9) + v27;
        if ( v4 >= a2 << 9 )
          v4 -= a2 << 9;
        v29 = v28 + (v4 >= a2 << 8) + v28;
        if ( v4 >= a2 << 8 )
          v4 -= a2 << 8;
        v30 = v29 + (v4 >= a2 << 7) + v29;
        if ( v4 >= a2 << 7 )
          v4 -= a2 << 7;
        v31 = v30 + (v4 >= a2 << 6) + v30;
        if ( v4 >= a2 << 6 )
          v4 -= a2 << 6;
        v32 = v31 + (v4 >= 32 * a2) + v31;
        if ( v4 >= 32 * a2 )
          v4 -= 32 * a2;
        v33 = v32 + (v4 >= 16 * a2) + v32;
        if ( v4 >= 16 * a2 )
          v4 -= 16 * a2;
        v34 = v33 + (v4 >= 8 * a2) + v33;
        if ( v4 >= 8 * a2 )
          v4 -= 8 * a2;
        v35 = v34 + (v4 >= 4 * a2) + v34;
        if ( v4 >= 4 * a2 )
          v4 -= 4 * a2;
        v36 = v35 + (v4 >= 2 * a2) + v35;
        if ( v4 >= 2 * a2 )
          v4 -= 2 * a2;
        result = v36 + (v4 >= a2) + v36;
        if ( v3 < 0 )
          return -result;
      }
    }
    else
    {
      result = v4 >> (31 - __clz(a2));
      if ( v3 < 0 )
        return -result;
    }
  }
  return result;
}


/* Function: __aeabi_idivmod @ 0x179C */
int __fastcall _aeabi_idivmod(int a1, unsigned int a2)
{
  bool v2; // nf

  if ( a2 )
    return divsi3_skip_div0_test(a1, a2);
  v2 = a1 < 0;
  if ( a1 > 0 )
    a1 = 0x7FFFFFFF;
  if ( v2 )
    a1 = 0x80000000;
  return _aeabi_ldiv0(a1);
}


/* Function: __aeabi_ldiv0 @ 0x17BC */
int _aeabi_ldiv0()
{
  return raise(8);
}


/* Function: .term_proc @ 0x17CC */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_raise @ 0x13214 */

/* FAILED to decompile: __imp___libc_start_main @ 0x13218 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x1321C */

/* FAILED to decompile: __imp_printf @ 0x13220 */

/* FAILED to decompile: __imp_longjmp @ 0x13224 */

/* FAILED to decompile: __imp__setjmp @ 0x13228 */

/* FAILED to decompile: __imp_puts @ 0x1322C */

/* FAILED to decompile: __imp_abort @ 0x13230 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x13238 */

/* Total functions decompiled: 74, failed: 9 */
