/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/1/1_gcc_O2_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10448 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_10454 @ 0x10454 */
void sub_10454()
{
  JUMPOUT(0);
}


/* Function: main @ 0x104E0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: _start @ 0x104F8 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_10534 + 19137), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x1053C */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x10560 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1058C */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x105C4 */
void *_do_global_dtors_aux()
{
  void *result; // r0

  if ( !completed_0 )
  {
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x105EC */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: recursion_factorial @ 0x105F0 */
int __fastcall recursion_factorial(int n)
{
  int v1; // r3
  bool v2; // cc
  int result; // r0
  int v4; // r2

  v1 = n;
  v2 = n <= 1;
  result = 1;
  if ( !v2 )
  {
    do
    {
      v4 = v1--;
      result *= v4;
    }
    while ( v1 != 1 );
  }
  return result;
}


/* Function: double_value @ 0x10618 */
int __fastcall double_value(int x)
{
  return 2 * x;
}


/* Function: triple_value @ 0x10620 */
int __fastcall triple_value(int x)
{
  return 3 * x;
}


/* Function: op_add @ 0x10628 */
int __fastcall op_add(int a, int b)
{
  return a + b;
}


/* Function: op_sub @ 0x10630 */
int __fastcall op_sub(int a, int b)
{
  return a - b;
}


/* Function: op_mul @ 0x10638 */
int __fastcall op_mul(int a, int b)
{
  return b * a;
}


/* Function: op_div @ 0x10640 */
int __fastcall op_div(int a, int b)
{
  if ( b )
    return a / b;
  else
    return 0;
}


/* Function: op_mod @ 0x1065C */
int __fastcall op_mod(int a, int b)
{
  if ( b )
    return a % b;
  else
    return 0;
}


/* Function: op_and @ 0x1067C */
int __fastcall op_and(int a, int b)
{
  return a & b;
}


/* Function: op_or @ 0x10684 */
int __fastcall op_or(int a, int b)
{
  return a | b;
}


/* Function: op_xor @ 0x1068C */
int __fastcall op_xor(int a, int b)
{
  return a ^ b;
}


/* Function: op_shl @ 0x10694 */
int __fastcall op_shl(int a, int b)
{
  return a << b;
}


/* Function: op_shr @ 0x1069C */
int __fastcall op_shr(int a, int b)
{
  return a >> b;
}


/* Function: state_idle @ 0x106A4 */
int __fastcall state_idle(int event)
{
  return event == 1;
}


/* Function: state_processing @ 0x106B4 */
int __fastcall state_processing(int event)
{
  if ( event != 2 )
  {
    if ( event == 99 )
      return 3;
    else
      return 1;
  }
  return event;
}


/* Function: state_done @ 0x106CC */
int __fastcall state_done(int event)
{
  return 2;
}


/* Function: state_error @ 0x106D4 */
int __fastcall state_error(int event)
{
  if ( event )
    return 3;
  return event;
}


/* Function: sequential_ops @ 0x106E0 */
int __fastcall sequential_ops(int a, int b, int c)
{
  return 2 * (a + b) - c;
}


/* Function: single_if @ 0x106EC */
int __fastcall single_if(int x)
{
  if ( x > 0 )
    x *= 2;
  return x;
}


/* Function: if_else @ 0x106F8 */
int __fastcall if_else(int x)
{
  return x > 0;
}


/* Function: nested_if_2 @ 0x10708 */
int __fastcall nested_if_2(int a, int b)
{
  if ( a <= 0 )
    return 0;
  if ( b > 0 )
    a += b;
  return a;
}


/* Function: nested_if_deep @ 0x10724 */
int __fastcall nested_if_deep(int a, int b, int c, int d, int e)
{
  if ( a <= 0 )
    return 0;
  if ( b <= 0 )
    return 1;
  if ( c <= 0 )
    return 2;
  if ( d <= 0 )
    return 3;
  if ( e <= 0 )
    return 4;
  return 5;
}


/* Function: if_elseif_chain @ 0x10778 */
int __fastcall if_elseif_chain(int x)
{
  switch ( x )
  {
    case 0:
      return 10;
    case 1:
      return 20;
    case 2:
      return 30;
  }
  return -1;
}


/* Function: if_elseif_long @ 0x107A8 */
int __fastcall if_elseif_long(int x)
{
  if ( (unsigned int)x > 4 )
    return -1;
  else
    return 100 * (x + 1);
}


/* Function: switch_small @ 0x107C4 */
int __fastcall switch_small(int op)
{
  if ( (unsigned int)op > 3 )
    return -1;
  else
    return CSWTCH_56[op];
}


/* Function: switch_large @ 0x107DC */
int __fastcall switch_large(int op)
{
  if ( (unsigned int)op > 9 )
    return -1;
  else
    return 10 * op;
}


/* Function: switch_default @ 0x107F0 */
int __fastcall switch_default(int op)
{
  if ( (unsigned int)(op - 1) > 2 )
    return 0;
  else
    return 100 * op;
}


/* Function: switch_fallthrough @ 0x1080C */
int __fastcall switch_fallthrough(int op)
{
  int v2; // r3

  switch ( op )
  {
    case 2:
      v2 = 0;
      return v2 + 2 * op + op;
    case 3:
      v2 = 12;
      return v2 + 2 * op + op;
    case 1:
      return 1;
    default:
      return -1;
  }
}


/* Function: loop_for_fixed @ 0x10844 */
int __fastcall loop_for_fixed(int n)
{
  int v2; // r3
  int result; // r0

  if ( n <= 0 )
    return 0;
  v2 = 0;
  result = 0;
  do
    result += v2++;
  while ( n != v2 );
  return result;
}


/* Function: loop_while @ 0x10870 */
int __fastcall loop_while(int x)
{
  int v1; // r3
  int result; // r0

  v1 = x;
  if ( !x )
    return 1;
  result = 0;
  do
  {
    v1 /= 10;
    ++result;
  }
  while ( v1 );
  return result;
}


/* Function: loop_dowhile @ 0x108A4 */
int __fastcall loop_dowhile(int x)
{
  int result; // r0

  result = 0;
  do
  {
    x /= 10;
    ++result;
  }
  while ( x );
  return result;
}


/* Function: loop_nested @ 0x108CC */
int __fastcall loop_nested(int m, int n)
{
  int v3; // r3
  int result; // r0

  if ( m <= 0 )
    return 0;
  v3 = 0;
  result = 0;
  do
  {
    ++v3;
    if ( n > 0 )
      result += n;
  }
  while ( m != v3 );
  return result;
}


/* Function: loop_break @ 0x108FC */
int __fastcall loop_break(int target)
{
  int v1; // r12
  int *v2; // lr
  int v3; // t1
  int arr[5]; // [sp+0h] [bp-28h] BYREF

  v1 = 0;
  v2 = arr;
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  arr[3] = 40;
  arr[4] = 50;
  while ( 1 )
  {
    v3 = *v2++;
    if ( v3 == target )
      break;
    if ( ++v1 == 5 )
      return -1;
  }
  return v1;
}


/* Function: loop_continue @ 0x10984 */
int __fastcall loop_continue(int n)
{
  int v2; // r3
  int result; // r0
  int v4; // r2

  if ( n <= 0 )
    return 0;
  v2 = 1;
  result = 0;
  v4 = n + 1;
  do
  {
    if ( (v2 & 1) != 0 )
      result += v2;
    ++v2;
  }
  while ( v2 != v4 );
  return result;
}


/* Function: goto_forward @ 0x109B8 */
int __fastcall goto_forward(int x)
{
  if ( x > 0 )
    x *= x;
  return 2 * x;
}


/* Function: goto_backward @ 0x109CC */
int __fastcall goto_backward(int x)
{
  bool v1; // cc
  int result; // r0
  int v4; // r3
  int v5; // r2

  v1 = x <= 0;
  result = 1;
  if ( !v1 )
  {
    v4 = 1;
    v5 = x + 1;
    do
      result *= v4++;
    while ( v5 != v4 );
  }
  return result;
}


/* Function: ternary_op @ 0x109F4 */
int __fastcall ternary_op(int a, int b)
{
  if ( b >= a )
    return b;
  return a;
}


/* Function: test_control_flow_l1 @ 0x10A00 */
void test_control_flow_l1()
{
  int *v0; // lr
  int v1; // r12
  int v2; // t1
  int v3; // r12
  int *v4; // r4
  int v5; // t1
  int v6; // [sp+0h] [bp-28h] BYREF
  int v7; // [sp+4h] [bp-24h]
  int v8; // [sp+8h] [bp-20h]
  int v9; // [sp+Ch] [bp-1Ch]
  int v10; // [sp+10h] [bp-18h]

  puts(s);
  _printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
  _printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
  _printf_chk(1, "CF-L1-02 (single_if): %d\n", -5);
  _printf_chk(1, "CF-L1-03 (if_else): %d\n", 1);
  _printf_chk(1, "CF-L1-03 (if_else): %d\n", 0);
  _printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 15);
  _printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 10);
  _printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 0);
  _printf_chk(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
  _printf_chk(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
  _printf_chk(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
  _printf_chk(1, "CF-L1-08 (switch_small): %d\n", 50);
  _printf_chk(1, "CF-L1-09 (switch_large): %d\n", 70);
  _printf_chk(1, "CF-L1-10 (switch_default): %d\n", 0);
  _printf_chk(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
  _printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", 45);
  _printf_chk(1, "CF-L1-13 (loop_while): %d\n", 5);
  _printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", 4);
  _printf_chk(1, "CF-L1-15 (loop_nested): %d\n", 12);
  v0 = &v6;
  v1 = 0;
  v6 = 10;
  v7 = 20;
  v8 = 30;
  v9 = 40;
  v10 = 50;
  while ( 1 )
  {
    v2 = *v0++;
    if ( v2 == 30 )
      break;
    if ( ++v1 == 5 )
    {
      v1 = -1;
      break;
    }
  }
  _printf_chk(1, "CF-L1-16 (loop_break): %d\n", v1);
  v3 = 0;
  v4 = &v6;
  v6 = 10;
  v7 = 20;
  v8 = 30;
  v9 = 40;
  v10 = 50;
  while ( 1 )
  {
    v5 = *v4++;
    if ( v5 == 99 )
      break;
    if ( ++v3 == 5 )
    {
      v3 = -1;
      break;
    }
  }
  _printf_chk(1, "CF-L1-16 (loop_break): %d\n", v3);
  _printf_chk(1, "CF-L1-17 (loop_continue): %d\n", 25);
  _printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
  _printf_chk(1, "CF-L1-18 (goto_forward): %d\n", -6);
  _printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
  _printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
  _printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x10CC8 */
int __fastcall loop_multi_exit(int target)
{
  int v1; // r5
  int *v2; // r6
  int *v3; // r2
  int i; // r3
  int v5; // t1
  int matrix[3][4]; // [sp+4h] [bp-44h] BYREF

  v1 = 0;
  v2 = matrix[0];
  *(_QWORD *)&matrix[0][0] = 0x200000001LL;
  *(_QWORD *)&matrix[0][2] = 0x400000003LL;
  *(_QWORD *)&matrix[1][0] = 0x600000005LL;
  *(_QWORD *)&matrix[1][2] = 0x800000007LL;
  *(_QWORD *)&matrix[2][0] = 0xA00000009LL;
  *(_QWORD *)&matrix[2][2] = 0xC0000000BLL;
  while ( 2 )
  {
    v3 = v2;
    for ( i = 0; i != 4; ++i )
    {
      v5 = *v3++;
      if ( v5 == target )
        return i + 10 * v1;
    }
    ++v1;
    v2 += 4;
    if ( v1 != 3 )
      continue;
    break;
  }
  return -1;
}


/* Function: infinite_loop @ 0x10D78 */
int __fastcall infinite_loop(volatile int *flag)
{
  int i; // r3

  for ( i = 0; i != 1001; ++i )
  {
    if ( *flag == 1 )
      return i;
  }
  *flag = 1;
  return 1001;
}


/* Function: multi_return @ 0x10DB8 */
int __fastcall multi_return(int x)
{
  int result; // r0

  if ( x < 0 )
    return -1;
  result = 2 * x;
  if ( 2 * x > 100 )
    return -2;
  if ( (x & 1) != 0 )
    return x + 1;
  return result;
}


/* Function: conditional_return @ 0x10DE8 */
int __fastcall conditional_return(int x)
{
  if ( x <= 0 )
  {
    if ( x )
      return -x;
  }
  else
  {
    x *= 2;
  }
  return x;
}


/* Function: duffs_device @ 0x10E00 */
int __fastcall duffs_device(int *dst, int *src, int n)
{
  int *v3; // r3
  int v4; // r12
  int v5; // t1
  int v6; // t1
  int v7; // t1
  int v8; // t1
  int v9; // t1
  int v10; // t1
  int *v11; // r1
  int v12; // t1
  int *v13; // r3
  int v14; // t1
  int result; // r0

  if ( n <= 0 )
    return -1;
  v3 = dst;
  v4 = (n + 7) >> 3;
  switch ( n & 7 )
  {
    case 1:
      goto LABEL_8;
    case 2:
      goto LABEL_7;
    case 3:
      goto LABEL_6;
    case 4:
      goto LABEL_5;
    case 5:
      goto LABEL_4;
    case 6:
      v5 = *src++;
      *dst = v5;
      v3 = dst + 1;
      goto LABEL_4;
    case 7:
      goto LABEL_12;
    default:
      while ( 1 )
      {
        v10 = *src++;
        *v3++ = v10;
LABEL_12:
        v12 = *src;
        v11 = src + 1;
        *v3 = v12;
        v13 = v3 + 1;
        v14 = *v11;
        src = v11 + 1;
        *v13 = v14;
        v3 = v13 + 1;
LABEL_4:
        v6 = *src++;
        *v3++ = v6;
LABEL_5:
        v7 = *src++;
        *v3++ = v7;
LABEL_6:
        v8 = *src++;
        *v3++ = v8;
LABEL_7:
        v9 = *src++;
        *v3++ = v9;
LABEL_8:
        --v4;
        *v3 = *src;
        if ( !v4 )
          break;
        ++src;
        ++v3;
      }
      result = n;
      break;
  }
  return result;
}


/* Function: loop_complex_cond @ 0x10EB8 */
int __fastcall loop_complex_cond(int x)
{
  int v1; // r2
  int v2; // r3
  bool v3; // cc

  if ( x > 0 )
  {
    v1 = 0;
    v2 = 0;
    do
    {
      v2 += 2;
      --x;
      v3 = ++v1 < 9;
      if ( v1 <= 9 )
        v3 = v2 < x;
    }
    while ( v3 );
    x += v2 + v1;
  }
  return x;
}


/* Function: loop_modify_var @ 0x10EEC */
int __fastcall loop_modify_var(int n)
{
  bool v1; // cc
  int result; // r0
  int v4; // r2
  int v5; // r3

  v1 = n <= 0;
  result = 0;
  if ( !v1 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = v4 + 1;
      if ( n <= v4 + 1 )
        break;
      if ( v5 <= 5 )
        ++v4;
      result += v5;
      if ( v5 > 5 )
        v4 += 3;
    }
  }
  return result;
}


/* Function: loop_external_state @ 0x10F1C */
int __fastcall loop_external_state(volatile int *flag)
{
  int i; // r3

  for ( i = 0; i != 101; ++i )
  {
    if ( *flag )
      break;
  }
  return i;
}


/* Function: tail_recursion @ 0x10F44 */
int __fastcall tail_recursion(int n, int acc)
{
  int v2; // r3
  bool v3; // cc
  int result; // r0
  int v5; // r2

  v2 = n;
  v3 = n <= 1;
  result = acc;
  if ( !v3 )
  {
    do
    {
      v5 = v2--;
      result *= v5;
    }
    while ( v2 != 1 );
  }
  return result;
}


/* Function: indirect_recursion_a @ 0x10F6C */
int __fastcall indirect_recursion_a(int n, int depth)
{
  int v2; // r3
  int v3; // r1
  int v4; // r0
  int v5; // r2
  int v6; // r12

  if ( depth > 0 )
  {
    v2 = depth;
    v3 = depth - 2;
    if ( (n & 1) == 0 )
      goto LABEL_7;
LABEL_3:
    v4 = 3 * n;
    if ( v2 == 1 )
    {
      return v4 + 1;
    }
    else
    {
      v5 = v3;
      for ( n = v4 + 2; ; n = v6 + 1 )
      {
        v3 -= 2;
        v2 -= 2;
        if ( !v5 )
          break;
        if ( (n & 1) != 0 )
          goto LABEL_3;
LABEL_7:
        v6 = n / 2;
        n /= 2;
        if ( v2 == 1 )
          break;
        v5 = v3;
      }
    }
  }
  return n;
}


/* Function: call_func_ptr @ 0x10FD8 */
int __fastcall call_func_ptr(int (*f)(int), int x)
{
  return f(x);
}


/* Function: call_func_ptr_array @ 0x10FE4 */
int __fastcall call_func_ptr_array(int idx, int x)
{
  int (__fastcall **v2)(int); // r12
  _DWORD v4[2]; // [sp+10h] [bp-8h] BYREF

  *v2 = double_value;
  v2[1] = triple_value;
  v2[2] = recursion_factorial;
  if ( (unsigned int)idx > 2 )
    return -1;
  else
    return ((int (__fastcall *)(int))v4[idx - 4])(x);
}


/* Function: call_virtual_func @ 0x11080 */
int __fastcall call_virtual_func(void *obj, int x)
{
  return 2 * x;
}


/* Function: process_with_callback @ 0x11088 */
int __fastcall process_with_callback(int *arr, int n, int (*cb)(int))
{
  int v4; // r4
  int v6; // r6
  int *v7; // r5
  int v8; // t1

  if ( n <= 0 )
    return 0;
  v4 = 0;
  v6 = 0;
  v7 = arr - 1;
  do
  {
    v8 = v7[1];
    ++v7;
    ++v4;
    v6 += cb(v8);
  }
  while ( n != v4 );
  return v6;
}


/* Function: test_control_flow_l2 @ 0x110D0 */
void test_control_flow_l2()
{
  int v0; // r0
  int i; // r2
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int j; // r2
  int v7; // r0
  int v8; // r0
  int v9; // lr
  int *v10; // r12
  int v11; // t1
  int arr[5]; // [sp+8h] [bp-68h] BYREF
  int src[8]; // [sp+1Ch] [bp-54h] BYREF
  int dst[8]; // [sp+3Ch] [bp-34h] BYREF

  puts(asc_11D98);
  v0 = loop_multi_exit(7);
  _printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
  for ( i = 0; i != 1001; ++i )
    ;
  _printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", 1001);
  _printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
  _printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
  _printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
  _printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
  _printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
  src[0] = 1;
  src[1] = 2;
  src[2] = 3;
  src[3] = 4;
  src[4] = 5;
  src[5] = 6;
  src[6] = 7;
  src[7] = 8;
  memset(dst, 0, sizeof(dst));
  v2 = duffs_device(dst, src, 8);
  _printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v2);
  _printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
  v4 = 0;
  v3 = 0;
  while ( 1 )
  {
    v5 = v3 + 1;
    if ( v3 + 1 > 9 )
      break;
    if ( v5 <= 5 )
      ++v3;
    v4 += v5;
    if ( v5 > 5 )
      v3 += 3;
  }
  _printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
  for ( j = 0; j != 101; ++j )
    ;
  _printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", 101);
  _printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
  _printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
  _printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
  _printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
  v7 = double_value(5);
  _printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v7);
  v8 = recursion_factorial(5);
  _printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v8);
  v9 = 0;
  v10 = arr;
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  do
  {
    v11 = *v10++;
    v9 += 2 * v11;
  }
  while ( src != v10 );
  _printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v9);
}


/* Function: non_local_jump @ 0x11380 */
int __fastcall non_local_jump(int x)
{
  if ( setjmp(jump_buffer) )
    return -1;
  if ( x < 0 )
    _longjmp_chk(jump_buffer, 1);
  if ( x > 100 )
    _longjmp_chk(jump_buffer, 2);
  return 2 * x;
}


/* Function: cpp_exception @ 0x113EC */
int __fastcall cpp_exception(int x)
{
  if ( x < 0 )
    return -1;
  if ( x > 100 )
    return -2;
  return 2 * x;
}


/* Function: large_jump_table @ 0x11414 */
int __fastcall large_jump_table(int op, int a, int b)
{
  int (*ops[10])(int, int); // [sp+4h] [bp-3Ch]
  int v5; // [sp+2Ch] [bp-14h]

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
    return ((int (__fastcall *)(int, int, int))ops[op])(a, b, v5 ^ _stack_chk_guard);
}


/* Function: conditional_func_ptr @ 0x114C4 */
int __fastcall conditional_func_ptr(int mode, int x)
{
  int (__fastcall *v2)(int); // r2

  if ( !mode )
    return double_value(x);
  v2 = triple_value;
  if ( mode != 1 )
    v2 = recursion_factorial;
  return v2(x);
}


/* Function: state_machine @ 0x114F8 */
int __fastcall state_machine(int event, int state)
{
  switch ( state )
  {
    case 0:
      event = event == 1;
      break;
    case 1:
      if ( event != 2 )
      {
        if ( event == 99 )
          event = 3;
        else
          event = state;
      }
      break;
    case 2:
      event = state;
      break;
    case 3:
      if ( event )
        event = state;
      else
        event = 0;
      break;
    default:
      event = 3;
      break;
  }
  return event;
}


/* Function: fsm_func_table @ 0x1155C */
int __fastcall fsm_func_table(int event, int state)
{
  int (*state_handlers[4])(int); // [sp+4h] [bp-1Ch]

  state_handlers[0] = state_idle;
  state_handlers[1] = state_processing;
  state_handlers[2] = state_done;
  state_handlers[3] = state_error;
  if ( (unsigned int)state > 3 )
    return 3;
  else
    return state_handlers[state](event);
}


/* Function: computed_goto @ 0x115F4 */
int __fastcall computed_goto(int *labels, int idx)
{
  void *targets[4]; // [sp+4h] [bp-1Ch]

  targets[0] = &MEMORY[0x11668];
  targets[1] = &MEMORY[0x11660];
  targets[2] = &MEMORY[0x11658];
  targets[3] = &MEMORY[0x11634];
  if ( (unsigned int)idx <= 3 )
    __asm { LDR     PC, [R1,#-0x14] }
  return -1;
}


/* Function: obfuscated_cf @ 0x11684 */
int __fastcall obfuscated_cf(int a1)
{
  return 2 * a1;
}


/* Function: opaque_predicate @ 0x1168C */
int __fastcall opaque_predicate(int a1)
{
  return 2 * a1;
}


/* Function: overlapped_code @ 0x11694 */
int __fastcall overlapped_code(int x)
{
  if ( (x & 1) != 0 )
    return 3 * x + 1;
  else
    return x / 2;
}


/* Function: test_control_flow_l3 @ 0x116AC */
void test_control_flow_l3()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int labels[4]; // [sp+4h] [bp-1Ch] BYREF

  puts(asc_11F9C);
  v0 = non_local_jump(5);
  _printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  _printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
  _printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
  _printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
  v2 = op_add(10, 5);
  _printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", v2);
  _printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
  _printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
  v3 = state_processing(2);
  _printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", v3);
  labels[0] = 0;
  labels[1] = 1;
  labels[2] = 2;
  labels[3] = 3;
  v4 = computed_goto(labels, 2);
  _printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v4);
  _printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
  _printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
  _printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: __divsi3 @ 0x11824 */
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


/* Function: .divsi3_skip_div0_test @ 0x1182C */
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
        return ((int (__fastcall *)(_DWORD))((char *)&loc_11874 + 12 * v5))(0);
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


/* Function: __aeabi_idivmod @ 0x11A44 */
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


/* Function: __aeabi_ldiv0 @ 0x11A64 */
int _aeabi_ldiv0()
{
  return raise(8);
}


/* Function: .term_proc @ 0x11A74 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_puts @ 0x231DC */

/* FAILED to decompile: __imp_memset @ 0x231E0 */

/* FAILED to decompile: __imp___longjmp_chk @ 0x231E4 */

/* FAILED to decompile: __imp_raise @ 0x231E8 */

/* FAILED to decompile: __imp__setjmp @ 0x231EC */

/* FAILED to decompile: __imp___printf_chk @ 0x231F0 */

/* FAILED to decompile: __imp_abort @ 0x231F4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x231F8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x231FC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23200 */

/* Total functions decompiled: 78, failed: 10 */
