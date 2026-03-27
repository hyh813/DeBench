/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/1/1_gcc_O2_g
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
int __usercall sub_10A0@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 40))();
}


/* Function: main @ 0x1110 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: _start @ 0x1130 */
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


/* Function: sub_115C @ 0x115C */
void sub_115C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1160 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1170 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x11B0 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1200 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !completed_1 )
  {
    if ( &_cxa_finalize )
      sub_10A0((int)&GLOBAL_OFFSET_TABLE_);
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


/* Function: frame_dummy @ 0x1290 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1299 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x129D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: recursion_factorial @ 0x12B0 */
int __cdecl recursion_factorial(int n)
{
  int v1; // eax
  int v2; // edx
  int v3; // ecx

  v1 = n;
  v2 = 1;
  if ( n > 1 )
  {
    do
    {
      v3 = v1--;
      v2 *= v3;
    }
    while ( v1 != 1 );
  }
  return v2;
}


/* Function: double_value @ 0x12E0 */
int __cdecl double_value(int x)
{
  return 2 * x;
}


/* Function: triple_value @ 0x12F0 */
int __cdecl triple_value(int x)
{
  return 3 * x;
}


/* Function: op_add @ 0x1300 */
int __cdecl op_add(int a, int b)
{
  return a + b;
}


/* Function: op_sub @ 0x1310 */
int __cdecl op_sub(int a, int b)
{
  return a - b;
}


/* Function: op_mul @ 0x1320 */
int __cdecl op_mul(int a, int b)
{
  return a * b;
}


/* Function: op_div @ 0x1330 */
int __cdecl op_div(int a, int b)
{
  int v2; // ecx

  v2 = b;
  if ( b )
    return a / b;
  return v2;
}


/* Function: op_mod @ 0x1350 */
int __cdecl op_mod(int a, int b)
{
  int v2; // edx

  v2 = b;
  if ( b )
    return a % b;
  return v2;
}


/* Function: op_and @ 0x1370 */
int __cdecl op_and(int a, int b)
{
  return a & b;
}


/* Function: op_or @ 0x1380 */
int __cdecl op_or(int a, int b)
{
  return a | b;
}


/* Function: op_xor @ 0x1390 */
int __cdecl op_xor(int a, int b)
{
  return a ^ b;
}


/* Function: op_shl @ 0x13A0 */
int __cdecl op_shl(int a, int b)
{
  return a << b;
}


/* Function: op_shr @ 0x13B0 */
int __cdecl op_shr(int a, int b)
{
  return a >> b;
}


/* Function: state_idle @ 0x13C0 */
int __cdecl state_idle(int event)
{
  return event == 1;
}


/* Function: state_processing @ 0x13D0 */
int __cdecl state_processing(int event)
{
  if ( event == 2 )
    return 2;
  else
    return 2 * (event == 99) + 1;
}


/* Function: state_done @ 0x1400 */
int __cdecl state_done(int event)
{
  return 2;
}


/* Function: state_error @ 0x1410 */
int __cdecl state_error(int event)
{
  int result; // eax

  result = event;
  if ( event )
    return 3;
  return result;
}


/* Function: sequential_ops @ 0x1430 */
int __cdecl sequential_ops(int a, int b, int c)
{
  return 2 * (a + b) - c;
}


/* Function: single_if @ 0x1450 */
int __cdecl single_if(int x)
{
  int result; // eax

  result = 2 * x;
  if ( x <= 0 )
    return x;
  return result;
}


/* Function: if_else @ 0x1470 */
int __cdecl if_else(int x)
{
  return x > 0;
}


/* Function: nested_if_2 @ 0x1480 */
int __cdecl nested_if_2(int a, int b)
{
  int result; // eax

  result = 0;
  if ( a > 0 )
  {
    result = a + b;
    if ( b <= 0 )
      return a;
  }
  return result;
}


/* Function: nested_if_deep @ 0x14A0 */
int __cdecl nested_if_deep(int a, int b, int c, int d, int e)
{
  int result; // eax

  result = 0;
  if ( a > 0 )
  {
    result = 1;
    if ( b > 0 )
    {
      if ( c <= 0 )
      {
        return 2;
      }
      else if ( d <= 0 )
      {
        return 3;
      }
      else
      {
        return (e > 0) + 4;
      }
    }
  }
  return result;
}


/* Function: if_elseif_chain @ 0x1500 */
int __cdecl if_elseif_chain(int x)
{
  int result; // eax

  result = 10;
  if ( x )
  {
    if ( x == 1 )
    {
      return 20;
    }
    else
    {
      result = 30;
      if ( x != 2 )
        return -1;
    }
  }
  return result;
}


/* Function: if_elseif_long @ 0x1540 */
int __cdecl if_elseif_long(int x)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)x <= 4 )
    return 100 * (x + 1);
  return result;
}


/* Function: switch_small @ 0x1560 */
int __cdecl switch_small(int op)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)op <= 3 )
    return CSWTCH_56[op];
  return result;
}


/* Function: switch_large @ 0x1590 */
int __cdecl switch_large(int op)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)op <= 9 )
    return 10 * op;
  return result;
}


/* Function: switch_default @ 0x15B0 */
int __cdecl switch_default(int op)
{
  int result; // eax

  result = 0;
  if ( (unsigned int)(op - 1) <= 2 )
    return 100 * op;
  return result;
}


/* Function: switch_fallthrough @ 0x15D0 */
int __cdecl switch_fallthrough(int op)
{
  if ( op == 2 )
    return 6;
  if ( op == 3 )
    return 21;
  return 2 * (op == 1) - 1;
}


/* Function: loop_for_fixed @ 0x1610 */
int __cdecl loop_for_fixed(int n)
{
  int v1; // eax
  int v2; // edx

  if ( n <= 0 )
    return 0;
  v1 = 0;
  v2 = 0;
  do
    v2 += v1++;
  while ( n != v1 );
  return v2;
}


/* Function: loop_while @ 0x1640 */
int __cdecl loop_while(int x)
{
  int v1; // ecx
  int v2; // ebx

  v1 = x;
  if ( !x )
    return 1;
  v2 = 0;
  do
  {
    ++v2;
    v1 /= 10;
  }
  while ( v1 );
  return v2;
}


/* Function: loop_dowhile @ 0x1690 */
int __cdecl loop_dowhile(int x)
{
  int v2; // ebx

  v2 = 0;
  do
  {
    ++v2;
    x /= 10;
  }
  while ( x );
  return v2;
}


/* Function: loop_nested @ 0x16D0 */
int __cdecl loop_nested(int m, int n)
{
  int result; // eax
  int i; // edx

  result = 0;
  if ( m > 0 )
  {
    for ( i = 0; i != m; ++i )
    {
      if ( n > 0 )
        result += n;
    }
  }
  return result;
}


/* Function: loop_break @ 0x1710 */
int __cdecl loop_break(int target)
{
  int result; // eax
  int arr[5]; // [esp+8h] [ebp-24h]
  unsigned int v3; // [esp+1Ch] [ebp-10h]

  v3 = __readgsdword(0x14u);
  result = 0;
  arr[1] = 20;
  arr[2] = 30;
  arr[3] = 40;
  arr[4] = 50;
  if ( target != 10 )
  {
    while ( ++result != 5 )
    {
      if ( target == arr[result] )
        return result;
    }
    return -1;
  }
  return result;
}


/* Function: loop_continue @ 0x1790 */
int __cdecl loop_continue(int n)
{
  int v1; // eax
  int v2; // edx

  if ( n <= 0 )
    return 0;
  v1 = 1;
  v2 = 0;
  do
  {
    if ( (v1 & 1) != 0 )
      v2 += v1;
    ++v1;
  }
  while ( v1 != n + 1 );
  return v2;
}


/* Function: goto_forward @ 0x17D0 */
int __cdecl goto_forward(int x)
{
  int v1; // eax

  v1 = x;
  if ( x > 0 )
    v1 = x * x;
  return 2 * v1;
}


/* Function: goto_backward @ 0x17F0 */
int __cdecl goto_backward(int x)
{
  int v1; // edx
  int v2; // eax

  v1 = 1;
  if ( x > 0 )
  {
    v2 = 1;
    do
      v1 *= v2++;
    while ( x + 1 != v2 );
  }
  return v1;
}


/* Function: ternary_op @ 0x1820 */
int __cdecl ternary_op(int a, int b)
{
  int result; // eax

  result = b;
  if ( b < a )
    return a;
  return result;
}


/* Function: test_control_flow_l1 @ 0x1840 */
void test_control_flow_l1()
{
  int v0; // eax
  int v1; // eax
  _BYTE v2[4]; // [esp+0h] [ebp-24h]
  int v3; // [esp+4h] [ebp-20h]
  int v4; // [esp+8h] [ebp-1Ch]
  int v5; // [esp+Ch] [ebp-18h]
  int v6; // [esp+10h] [ebp-14h]
  unsigned int v7; // [esp+14h] [ebp-10h]

  v7 = __readgsdword(0x14u);
  puts(asc_3008);
  __printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
  __printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
  __printf_chk(1, "CF-L1-02 (single_if): %d\n", -5);
  __printf_chk(1, "CF-L1-03 (if_else): %d\n", 1);
  __printf_chk(1, "CF-L1-03 (if_else): %d\n", 0);
  __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 15);
  __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 10);
  __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 0);
  __printf_chk(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
  __printf_chk(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
  __printf_chk(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
  __printf_chk(1, "CF-L1-08 (switch_small): %d\n", 50);
  __printf_chk(1, "CF-L1-09 (switch_large): %d\n", 70);
  __printf_chk(1, "CF-L1-10 (switch_default): %d\n", 0);
  __printf_chk(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
  __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", 45);
  __printf_chk(1, "CF-L1-13 (loop_while): %d\n", 5);
  __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", 4);
  __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", 12);
  v3 = 20;
  v0 = 0;
  v4 = 30;
  v5 = 40;
  v6 = 50;
  while ( ++v0 != 5 )
  {
    if ( *(_DWORD *)&v2[4 * v0] == 30 )
      goto LABEL_4;
  }
  v0 = -1;
LABEL_4:
  __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v0);
  v3 = 20;
  v1 = 0;
  v4 = 30;
  v5 = 40;
  v6 = 50;
  while ( ++v1 != 5 )
  {
    if ( *(_DWORD *)&v2[4 * v1] == 99 )
      goto LABEL_7;
  }
  v1 = -1;
LABEL_7:
  __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v1);
  __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", 25);
  __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
  __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", -6);
  __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
  __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
  __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x1AF0 */
int __cdecl loop_multi_exit(int target)
{
  int v1; // ecx
  int *v2; // eax
  int v3; // eax
  int matrix[3][4]; // [esp+Ch] [ebp-40h] BYREF
  unsigned int v6; // [esp+3Ch] [ebp-10h]

  v1 = 0;
  v6 = __readgsdword(0x14u);
  v2 = matrix[0];
  *(_QWORD *)&matrix[0][1] = 0x300000002LL;
  matrix[0][3] = 4;
  *(_QWORD *)&matrix[1][0] = 0x600000005LL;
  *(_QWORD *)&matrix[1][2] = 0x800000007LL;
  *(_QWORD *)&matrix[2][0] = 0xA00000009LL;
  *(_QWORD *)&matrix[2][2] = 0xC0000000BLL;
  if ( target == 1 )
  {
LABEL_7:
    v3 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( target == v2[1] )
      {
        v3 = 1;
        return v3 + 10 * v1;
      }
      if ( target == v2[2] )
      {
        v3 = 2;
        return v3 + 10 * v1;
      }
      if ( target == v2[3] )
        break;
      ++v1;
      v2 += 4;
      if ( v1 == 3 )
        return -1;
      if ( *v2 == target )
        goto LABEL_7;
    }
    v3 = 3;
  }
  return v3 + 10 * v1;
}


/* Function: infinite_loop @ 0x1BF0 */
int __cdecl infinite_loop(volatile int *flag)
{
  int result; // eax

  result = 0;
  while ( *flag != 1 )
  {
    if ( ++result == 1001 )
    {
      *flag = 1;
      return result;
    }
  }
  return result;
}


/* Function: multi_return @ 0x1C20 */
int __cdecl multi_return(int x)
{
  int result; // eax

  if ( x < 0 )
    return -1;
  result = 2 * x;
  if ( 2 * x > 100 )
    return -2;
  if ( (x & 1) != 0 )
    return x + 1;
  return result;
}


/* Function: conditional_return @ 0x1C50 */
int __cdecl conditional_return(int x)
{
  int result; // eax

  if ( x > 0 )
    return 2 * x;
  result = 0;
  if ( x )
    return -x;
  return result;
}


/* Function: duffs_device @ 0x1C70 */
int __cdecl duffs_device(int *dst, int *src, int n)
{
  int v3; // esi
  int *v4; // eax
  int *v5; // edx
  int v6; // ecx
  int *v7; // edi
  int *v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int *v11; // edi
  int *v12; // ebx
  int *v13; // edi
  int *v14; // ebx

  v3 = n;
  v4 = dst;
  v5 = src;
  if ( n <= 0 )
    return -1;
  v6 = (n + 7) >> 3;
  switch ( n & 7 )
  {
    case 0:
      v7 = src;
      v8 = dst;
      goto LABEL_4;
    case 1:
      goto _L186;
    case 2:
      v13 = src;
      v14 = dst;
      goto LABEL_10;
    case 3:
      goto _L184;
    case 4:
      v11 = src;
      v12 = dst;
      goto LABEL_8;
    case 5:
      goto _L182;
    case 6:
      goto _L181;
    case 7:
      while ( 1 )
      {
        v9 = *v5;
        ++v4;
        ++v5;
        *(v4 - 1) = v9;
_L181:
        v10 = *v5;
        ++v4;
        ++v5;
        *(v4 - 1) = v10;
_L182:
        v11 = v5 + 1;
        v12 = v4 + 1;
        *v4 = *v5;
LABEL_8:
        v5 = v11 + 1;
        v4 = v12 + 1;
        *v12 = *v11;
_L184:
        v13 = v5 + 1;
        v14 = v4 + 1;
        *v4 = *v5;
LABEL_10:
        v5 = v13 + 1;
        v4 = v14 + 1;
        *v14 = *v13;
_L186:
        *v4 = *v5;
        if ( !--v6 )
          break;
        v7 = v5 + 1;
        v8 = v4 + 1;
LABEL_4:
        v5 = v7 + 1;
        v4 = v8 + 1;
        *v8 = *v7;
      }
      break;
  }
  return v3;
}


/* Function: loop_complex_cond @ 0x1D40 */
int __cdecl loop_complex_cond(int x)
{
  int v1; // edx
  int v2; // ecx

  if ( x <= 0 )
    return x;
  v1 = x;
  v2 = 0;
  do
  {
    --v1;
    v2 += 2;
  }
  while ( v2 < v1 && x - v1 <= 9 );
  return v2 + x;
}


/* Function: loop_modify_var @ 0x1D80 */
int __cdecl loop_modify_var(int n)
{
  int v1; // ecx
  int v2; // eax
  int v3; // edx

  v1 = 0;
  v2 = 0;
  if ( n > 0 )
  {
    while ( 1 )
    {
      v3 = v2 + 1;
      if ( n <= v2 + 1 )
        break;
      v2 += 3;
      v1 += v3;
      if ( v3 <= 5 )
        v2 = v3;
    }
  }
  return v1;
}


/* Function: loop_external_state @ 0x1DB0 */
int __cdecl loop_external_state(volatile int *flag)
{
  int result; // eax

  for ( result = 0; result != 101; ++result )
  {
    if ( *flag )
      break;
  }
  return result;
}


/* Function: tail_recursion @ 0x1DD0 */
int __cdecl tail_recursion(int n, int acc)
{
  int v2; // eax

  v2 = n;
  if ( n > 1 )
  {
    do
      acc *= v2--;
    while ( v2 != 1 );
  }
  return acc;
}


/* Function: indirect_recursion_a @ 0x1E00 */
int __cdecl indirect_recursion_a(int n, int depth)
{
  int v2; // eax
  int v3; // ecx
  int i; // edx
  int v5; // eax
  int v6; // ecx
  int v8; // eax

  v2 = n;
  v3 = n;
  if ( depth <= 0 )
    return v3;
  for ( i = depth - 2; ; i -= 2 )
  {
    if ( (v2 & 1) == 0 )
    {
      v8 = v2 / 2;
      v3 = v8;
      if ( i == -1 )
        return v3;
      v6 = i;
      v2 = v8 + 1;
      goto LABEL_6;
    }
    v5 = 3 * v2;
    if ( i == -1 )
      break;
    v6 = i;
    v2 = v5 + 2;
LABEL_6:
    if ( !v6 )
      return v2;
  }
  return v5 + 1;
}


/* Function: call_func_ptr @ 0x1E60 */
int __cdecl call_func_ptr(int (*f)(int), int x)
{
  return f(x);
}


/* Function: call_func_ptr_array @ 0x1E80 */
int __cdecl call_func_ptr_array(int idx, int x)
{
  int (*funcs[3])(int); // [esp+0h] [ebp-1Ch]
  unsigned int v4; // [esp+Ch] [ebp-10h]

  v4 = __readgsdword(0x14u);
  funcs[0] = double_value;
  funcs[1] = triple_value;
  funcs[2] = recursion_factorial;
  if ( (unsigned int)idx > 2 )
    return -1;
  else
    return funcs[idx](x);
}


/* Function: call_virtual_func @ 0x1F10 */
int __cdecl call_virtual_func(void *obj, int x)
{
  return 2 * x;
}


/* Function: process_with_callback @ 0x1F20 */
int __cdecl process_with_callback(int *arr, int n, int (*cb)(int))
{
  int v3; // esi
  int v4; // ebx
  int v6; // [esp-10h] [ebp-2Ch]

  if ( n <= 0 )
    return 0;
  v3 = 0;
  v4 = 0;
  do
  {
    v6 = arr[v3++];
    v4 += cb(v6);
  }
  while ( n != v3 );
  return v4;
}


/* Function: test_control_flow_l2 @ 0x1F70 */
// bad sp value at call has been detected, the output may be wrong!
void test_control_flow_l2()
{
  int v0; // eax
  int i; // eax
  unsigned int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int j; // eax
  int *v8; // eax
  int v9; // edx
  int v10; // ecx
  int arr[5]; // [esp+8h] [ebp-70h] BYREF
  int src[8]; // [esp+1Ch] [ebp-5Ch] BYREF
  int dst[8]; // [esp+3Ch] [ebp-3Ch] BYREF
  unsigned int v14; // [esp+5Ch] [ebp-1Ch]

  v14 = __readgsdword(0x14u);
  puts(asc_3110);
  v0 = loop_multi_exit(7);
  __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
  for ( i = 0; i != 1001; ++i )
    ;
  __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", "_ITM_registerTMCloneTable");
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
  __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
  __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
  src[0] = 1;
  v2 = 0;
  src[1] = 2;
  src[2] = 3;
  src[3] = 4;
  src[4] = 5;
  src[5] = 6;
  src[6] = 7;
  src[7] = 8;
  do
    dst[v2++] = 0;
  while ( v2 < 8 );
  v3 = duffs_device(dst, src, 8);
  __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v3);
  __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = v5 + 1;
    if ( v5 + 1 > 9 )
      break;
    v5 += 3;
    v4 += v6;
    if ( v6 <= 5 )
      v5 = v6;
  }
  __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
  for ( j = 0; j != 101; ++j )
    ;
  __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", 101);
  __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
  __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
  __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
  __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
  __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 10);
  __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 120);
  arr[0] = 1;
  v8 = arr;
  v9 = 0;
  arr[1] = 2;
  v10 = 1;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  while ( 1 )
  {
    ++v8;
    v9 += 2 * v10;
    if ( v8 == src )
      break;
    v10 = *v8;
  }
  __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v9);
}


/* Function: non_local_jump @ 0x2220 */
int __cdecl non_local_jump(int x)
{
  int v1; // edx

  if ( _setjmp(jump_buffer) )
    return -1;
  if ( x < 0 )
    __longjmp_chk(jump_buffer, 1, v1, v1);
  if ( x > 100 )
    __longjmp_chk(jump_buffer, 2, 0, 0);
  return 2 * x;
}


/* Function: cpp_exception @ 0x22A0 */
int __cdecl cpp_exception(int x)
{
  if ( x < 0 )
    return -1;
  if ( x > 100 )
    return -2;
  return 2 * x;
}


/* Function: large_jump_table @ 0x22D0 */
int __cdecl large_jump_table(int op, int a, int b)
{
  int (*ops[10])(int, int); // [esp+0h] [ebp-38h]
  unsigned int v5; // [esp+28h] [ebp-10h]

  v5 = __readgsdword(0x14u);
  ops[0] = op_add;
  ops[1] = op_sub;
  ops[2] = op_mul;
  ops[3] = op_div;
  ops[4] = op_mod;
  ops[5] = op_and;
  ops[6] = op_or;
  ops[7] = op_xor;
  ops[8] = op_shl;
  ops[9] = op_shr;
  if ( (unsigned int)op > 9 )
    return -1;
  else
    return ops[op](a, b);
}


/* Function: conditional_func_ptr @ 0x23B0 */
int __cdecl conditional_func_ptr(int mode, int x)
{
  int (__cdecl *v2)(int); // eax

  v2 = double_value;
  if ( mode )
  {
    v2 = triple_value;
    if ( mode != 1 )
      v2 = recursion_factorial;
  }
  return v2(x);
}


/* Function: state_machine @ 0x23F0 */
int __cdecl state_machine(int event, int state)
{
  if ( state == 2 )
    return 2;
  if ( state > 2 )
  {
    if ( state == 3 )
      return event != 0 ? 3 : 0;
    return 3;
  }
  if ( state )
  {
    if ( state == 1 )
    {
      if ( event != 2 )
        return 2 * (event == 99) + 1;
      return 2;
    }
    return 3;
  }
  return event == 1;
}


/* Function: fsm_func_table @ 0x2460 */
int __cdecl fsm_func_table(int event, int state)
{
  int (*state_handlers[4])(int); // [esp+0h] [ebp-20h]
  unsigned int v4; // [esp+10h] [ebp-10h]

  v4 = __readgsdword(0x14u);
  state_handlers[0] = state_idle;
  state_handlers[1] = state_processing;
  state_handlers[2] = state_done;
  state_handlers[3] = state_error;
  if ( (unsigned int)state > 3 )
    return 3;
  else
    return ((int (*)(void))state_handlers[state])();
}


/* Function: computed_goto @ 0x24F0 */
int __cdecl computed_goto(int *labels, int idx)
{
  void *targets[4]; // [esp+0h] [ebp-20h]
  unsigned int v4; // [esp+10h] [ebp-10h]

  v4 = __readgsdword(0x14u);
  targets[0] = &MEMORY[0x2588];
  targets[1] = &MEMORY[0x2578];
  targets[2] = &MEMORY[0x2568];
  targets[3] = &MEMORY[0x2548];
  if ( (unsigned int)idx <= 3 )
    __asm { jmp     [esp+edx*4+2Ch+targets] }
  return -1;
}


/* Function: obfuscated_cf @ 0x25A0 */
int __cdecl obfuscated_cf(int a1)
{
  return 2 * a1;
}


/* Function: opaque_predicate @ 0x25B0 */
int __cdecl opaque_predicate(int a1)
{
  return 2 * a1;
}


/* Function: overlapped_code @ 0x25C0 */
int __cdecl overlapped_code(int x)
{
  if ( (x & 1) != 0 )
    return 3 * x + 1;
  else
    return x / 2;
}


/* Function: test_control_flow_l3 @ 0x25F0 */
void test_control_flow_l3()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int labels[4]; // [esp+1Ch] [ebp-20h] BYREF
  unsigned int v5; // [esp+2Ch] [ebp-10h]

  v5 = __readgsdword(0x14u);
  puts(asc_3294);
  v0 = non_local_jump(5);
  __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
  __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
  __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
  v2 = op_add(10, 5);
  __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", v2);
  __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
  __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
  __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
  labels[0] = 0;
  labels[1] = 1;
  labels[2] = 2;
  labels[3] = 3;
  v3 = computed_goto(labels, 2);
  __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v3);
  __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
  __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
  __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: __x86.get_pc_thunk.ax @ 0x275C */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x2760 */
void _x86_get_pc_thunk_cx()
{
  ;
}


/* Function: __stack_chk_fail_local @ 0x2770 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x2790 */
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


/* Function: .term_proc @ 0x27DC */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x60E0 */

/* FAILED to decompile: _setjmp @ 0x60E4 */

/* FAILED to decompile: __stack_chk_fail @ 0x60E8 */

/* FAILED to decompile: __cxa_finalize @ 0x60EC */

/* FAILED to decompile: puts @ 0x60F0 */

/* FAILED to decompile: __printf_chk @ 0x60F4 */

/* FAILED to decompile: __longjmp_chk @ 0x60F8 */

/* Total functions decompiled: 88, failed: 7 */
