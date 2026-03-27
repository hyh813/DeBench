/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/1/1_gcc_Os_g
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


/* Function: recursion_factorial @ 0x12A1 */
int __cdecl recursion_factorial(int n)
{
  int result; // eax

  result = 1;
  while ( n > 1 )
    result *= n--;
  return result;
}


/* Function: double_value @ 0x12BD */
int __cdecl double_value(int x)
{
  return 2 * x;
}


/* Function: triple_value @ 0x12CB */
int __cdecl triple_value(int x)
{
  return 3 * x;
}


/* Function: op_add @ 0x12D8 */
int __cdecl op_add(int a, int b)
{
  return a + b;
}


/* Function: op_sub @ 0x12E7 */
int __cdecl op_sub(int a, int b)
{
  return a - b;
}


/* Function: op_mul @ 0x12F6 */
int __cdecl op_mul(int a, int b)
{
  return a * b;
}


/* Function: op_div @ 0x1306 */
int __cdecl op_div(int a, int b)
{
  int v2; // ecx

  v2 = b;
  if ( b )
    return a / b;
  return v2;
}


/* Function: op_mod @ 0x1320 */
int __cdecl op_mod(int a, int b)
{
  int v2; // edx

  v2 = b;
  if ( b )
    return a % b;
  return v2;
}


/* Function: op_and @ 0x133A */
int __cdecl op_and(int a, int b)
{
  return a & b;
}


/* Function: op_or @ 0x1349 */
int __cdecl op_or(int a, int b)
{
  return a | b;
}


/* Function: op_xor @ 0x1358 */
int __cdecl op_xor(int a, int b)
{
  return a ^ b;
}


/* Function: op_shl @ 0x1367 */
int __cdecl op_shl(int a, int b)
{
  return a << b;
}


/* Function: op_shr @ 0x1378 */
int __cdecl op_shr(int a, int b)
{
  return a >> b;
}


/* Function: state_idle @ 0x1389 */
int __cdecl state_idle(int event)
{
  return event == 1;
}


/* Function: state_processing @ 0x139B */
int __cdecl state_processing(int event)
{
  int result; // eax

  result = event;
  if ( event != 2 )
  {
    if ( event == 99 )
      return 3;
    else
      return 1;
  }
  return result;
}


/* Function: state_done @ 0x13BD */
int __cdecl state_done(int event)
{
  return 2;
}


/* Function: state_error @ 0x13C7 */
int __cdecl state_error(int event)
{
  int result; // eax

  result = event;
  if ( event )
    return 3;
  return result;
}


/* Function: sequential_ops @ 0x13DC */
int __cdecl sequential_ops(int a, int b, int c)
{
  return 2 * (a + b) - c;
}


/* Function: single_if @ 0x13F0 */
int __cdecl single_if(int x)
{
  int result; // eax

  result = x;
  if ( x > 0 )
    return 2 * x;
  return result;
}


/* Function: if_else @ 0x1402 */
int __cdecl if_else(int x)
{
  return x > 0;
}


/* Function: nested_if_2 @ 0x1414 */
int __cdecl nested_if_2(int a, int b)
{
  int result; // eax

  result = a;
  if ( a <= 0 )
    return 0;
  if ( b > 0 )
    return b + a;
  return result;
}


/* Function: nested_if_deep @ 0x1431 */
int __cdecl nested_if_deep(int a, int b, int c, int d, int e)
{
  int result; // eax

  result = 0;
  if ( a > 0 )
  {
    result = 1;
    if ( b > 0 )
    {
      result = 2;
      if ( c > 0 )
      {
        result = 3;
        if ( d > 0 )
          return (e > 0) + 4;
      }
    }
  }
  return result;
}


/* Function: if_elseif_chain @ 0x146F */
int __cdecl if_elseif_chain(int x)
{
  int result; // eax

  result = 10;
  if ( x )
  {
    result = 20;
    if ( x != 1 )
    {
      result = 30;
      if ( x != 2 )
        return -1;
    }
  }
  return result;
}


/* Function: if_elseif_long @ 0x149E */
int __cdecl if_elseif_long(int x)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)x <= 4 )
    return 100 * (x + 1);
  return result;
}


/* Function: switch_small @ 0x14B8 */
int __cdecl switch_small(int op)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)op <= 3 )
    return CSWTCH_56[op];
  return result;
}


/* Function: switch_large @ 0x14DF */
int __cdecl switch_large(int op)
{
  int result; // eax

  result = 10 * op;
  if ( (unsigned int)op > 9 )
    return -1;
  return result;
}


/* Function: switch_default @ 0x14F6 */
int __cdecl switch_default(int op)
{
  int result; // eax

  result = 100 * op;
  if ( (unsigned int)(op - 1) > 2 )
    return 0;
  return result;
}


/* Function: switch_fallthrough @ 0x150F */
int __cdecl switch_fallthrough(int op)
{
  int result; // eax
  int v2; // eax
  int v3; // ecx

  if ( op == 2 )
  {
    v3 = 0;
LABEL_7:
    v2 = v3 + 2 * op;
    return op + v2;
  }
  if ( op == 3 )
  {
    v3 = 12;
    goto LABEL_7;
  }
  result = -1;
  if ( op != 1 )
    return result;
  v2 = 0;
  return op + v2;
}


/* Function: loop_for_fixed @ 0x1541 */
int __cdecl loop_for_fixed(int n)
{
  int v1; // eax
  int v2; // edx

  v1 = 0;
  v2 = 0;
  while ( v1 < n )
    v2 += v1++;
  return v2;
}


/* Function: loop_while @ 0x155A */
int __cdecl loop_while(int x)
{
  int v1; // ecx
  int result; // eax

  v1 = 0;
  while ( x )
  {
    ++v1;
    x /= 10;
  }
  result = 1;
  if ( v1 > 0 )
    return v1;
  return result;
}


/* Function: loop_dowhile @ 0x1583 */
int __cdecl loop_dowhile(int x)
{
  int v1; // ecx

  v1 = 0;
  do
  {
    ++v1;
    x /= 10;
  }
  while ( x );
  return v1;
}


/* Function: loop_nested @ 0x15A2 */
int __cdecl loop_nested(int m, int n)
{
  int v2; // ecx
  int v3; // edx
  int v4; // eax

  v2 = 0;
  v3 = 0;
  v4 = n;
  if ( n < 0 )
    v4 = 0;
  while ( v2 < m )
  {
    v3 += v4;
    ++v2;
  }
  return v3;
}


/* Function: loop_break @ 0x15C7 */
int __cdecl loop_break(int target)
{
  int result; // eax
  int arr[5]; // [esp+0h] [ebp-24h] BYREF
  unsigned int v3; // [esp+14h] [ebp-10h]

  result = 0;
  v3 = __readgsdword(0x14u);
  qmemcpy(arr, &unk_3020, sizeof(arr));
  while ( arr[result] != target )
  {
    if ( ++result == 5 )
      return -1;
  }
  return result;
}


/* Function: loop_continue @ 0x1627 */
int __cdecl loop_continue(int n)
{
  int v1; // eax
  int v2; // edx

  v1 = 1;
  v2 = 0;
  while ( v1 <= n )
  {
    if ( (v1 & 1) != 0 )
      v2 += v1;
    ++v1;
  }
  return v2;
}


/* Function: goto_forward @ 0x1647 */
int __cdecl goto_forward(int x)
{
  int v1; // eax

  v1 = x;
  if ( x > 0 )
    v1 = x * x;
  return 2 * v1;
}


/* Function: goto_backward @ 0x165C */
int __cdecl goto_backward(int x)
{
  int v1; // edx
  int i; // eax

  v1 = 1;
  if ( x > 0 )
  {
    for ( i = 1; i <= x; ++i )
      v1 *= i;
  }
  return v1;
}


/* Function: ternary_op @ 0x1680 */
int __cdecl ternary_op(int a, int b)
{
  int result; // eax

  result = b;
  if ( b < a )
    return a;
  return result;
}


/* Function: test_control_flow_l1 @ 0x1694 */
void test_control_flow_l1()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  puts(asc_30E8);
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
  v0 = loop_for_fixed(10);
  __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", v0);
  v1 = loop_while(12345);
  __printf_chk(1, "CF-L1-13 (loop_while): %d\n", v1);
  v2 = loop_dowhile(9876);
  __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", v2);
  v3 = loop_nested(3, 4);
  __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", v3);
  v4 = loop_break(30);
  __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v4);
  v5 = loop_break(99);
  __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v5);
  v6 = loop_continue(10);
  __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", v6);
  __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
  __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", -6);
  __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
  __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
  __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x18E7 */
int __cdecl loop_multi_exit(int target)
{
  int v1; // eax
  int *v2; // ecx
  int i; // edx
  int matrix[3][4]; // [esp+0h] [ebp-40h] BYREF
  unsigned int v6; // [esp+30h] [ebp-10h]

  v1 = 0;
  v6 = __readgsdword(0x14u);
  qmemcpy(matrix, &unk_3040, sizeof(matrix));
  v2 = matrix[0];
  do
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( v2[i] == target )
        return i + 10 * v1;
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 != 3 );
  return -1;
}


/* Function: infinite_loop @ 0x1959 */
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


/* Function: multi_return @ 0x197A */
int __cdecl multi_return(int x)
{
  int result; // eax

  result = -1;
  if ( x >= 0 )
  {
    result = 2 * x;
    if ( 2 * x > 100 )
    {
      return -2;
    }
    else if ( (x & 1) != 0 )
    {
      return x + 1;
    }
  }
  return result;
}


/* Function: conditional_return @ 0x19A4 */
int __cdecl conditional_return(int x)
{
  int result; // eax

  result = x;
  if ( x > 0 )
    return 2 * x;
  if ( x )
    return -x;
  return result;
}


/* Function: duffs_device @ 0x19BC */
int __cdecl duffs_device(int *dst, int *src, int n)
{
  int v3; // ecx
  int v6; // ebx
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi

  v3 = n;
  if ( n <= 0 )
    return -1;
  v6 = (n + 7) >> 3;
  switch ( n & 7 )
  {
    case 1:
      goto _L201;
    case 2:
      goto _L200;
    case 3:
      goto _L199;
    case 4:
      goto _L198;
    case 5:
      goto _L197;
    case 6:
      goto _L196;
    case 7:
      goto _L194;
    default:
      while ( 1 )
      {
        v13 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v13;
_L194:
        v7 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v7;
_L196:
        v8 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v8;
_L197:
        v9 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v9;
_L198:
        v10 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v10;
_L199:
        v11 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v11;
_L200:
        v12 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v12;
_L201:
        *dst = *src;
        if ( !--v6 )
          break;
        ++src;
        ++dst;
      }
      break;
  }
  return v3;
}


/* Function: loop_complex_cond @ 0x1A5F */
int __cdecl loop_complex_cond(int x)
{
  int i; // edx

  for ( i = 0; 2 * i < x - i && i <= 9; ++i )
    ;
  return x + 2 * i;
}


/* Function: loop_modify_var @ 0x1A82 */
int __cdecl loop_modify_var(int n)
{
  int v1; // eax
  int v2; // edx

  v1 = 0;
  v2 = 0;
  while ( v1 < n )
  {
    v2 += v1;
    if ( v1 > 5 )
      v1 += 2;
    ++v1;
  }
  return v2;
}


/* Function: loop_external_state @ 0x1AA3 */
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


/* Function: tail_recursion @ 0x1ABD */
int __cdecl tail_recursion(int n, int acc)
{
  int result; // eax

  result = acc;
  while ( n > 1 )
    result *= n--;
  return result;
}


/* Function: indirect_recursion_a @ 0x1AD7 */
int __cdecl indirect_recursion_a(int n, int depth)
{
  int result; // eax
  int v4; // eax

  result = n;
  while ( depth > 0 )
  {
    if ( (result & 1) != 0 )
    {
      v4 = 3 * result;
      if ( depth == 1 )
        return v4 + 1;
      result = v4 + 2;
    }
    else
    {
      result /= 2;
      if ( depth == 1 )
        return result;
      ++result;
    }
    depth -= 2;
  }
  return result;
}


/* Function: call_func_ptr @ 0x1B13 */
int __cdecl call_func_ptr(int (*f)(int), int x)
{
  return f(x);
}


/* Function: call_func_ptr_array @ 0x1B26 */
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


/* Function: call_virtual_func @ 0x1BA1 */
int __cdecl call_virtual_func(void *obj, int x)
{
  return 2 * x;
}


/* Function: process_with_callback @ 0x1BAF */
int __cdecl process_with_callback(int *arr, int n, int (*cb)(int))
{
  int v3; // esi
  int i; // ebx
  int v6; // [esp-10h] [ebp-18h]

  v3 = 0;
  for ( i = 0; i < n; ++i )
  {
    v6 = arr[i];
    v3 += cb(v6);
  }
  return v3;
}


/* Function: test_control_flow_l2 @ 0x1BDE */
// bad sp value at call has been detected, the output may be wrong!
void test_control_flow_l2()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int flag; // [esp+4h] [ebp-78h] BYREF
  int ext_flag; // [esp+8h] [ebp-74h] BYREF
  int arr[5]; // [esp+Ch] [ebp-70h] BYREF
  int src[8]; // [esp+20h] [ebp-5Ch] BYREF
  int dst[8]; // [esp+40h] [ebp-3Ch] BYREF

  puts(asc_3355);
  v0 = loop_multi_exit(7);
  __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
  v1 = infinite_loop(&flag);
  __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v1);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
  __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
  __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
  memset(dst, 0, sizeof(dst));
  v2 = duffs_device(dst, src, 8);
  __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v2);
  v3 = loop_complex_cond(10);
  __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", v3);
  v4 = loop_modify_var(10);
  __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v4);
  v5 = loop_external_state(&ext_flag);
  __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v5);
  v6 = recursion_factorial(5);
  __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", v6);
  __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
  v7 = indirect_recursion_a(6, 1);
  __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", v7);
  v8 = call_func_ptr(double_value, 5);
  __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", v8);
  v9 = call_func_ptr_array(0, 5);
  __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v9);
  v10 = call_func_ptr_array(2, 5);
  __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v10);
  v11 = process_with_callback(arr, 5, double_value);
  __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v11);
}


/* Function: non_local_jump @ 0x1E36 */
int __cdecl non_local_jump(int x)
{
  int v1; // edx
  int result; // eax

  if ( _setjmp(jump_buffer) )
    return -1;
  if ( x < 0 )
    __longjmp_chk(jump_buffer, 1, v1, v1);
  result = 2 * x;
  if ( x > 100 )
    __longjmp_chk(jump_buffer, 2, 2 * x, 2 * x);
  return result;
}


/* Function: cpp_exception @ 0x1E9D */
int __cdecl cpp_exception(int x)
{
  int result; // eax

  result = -1;
  if ( x >= 0 )
  {
    result = 2 * x;
    if ( x >= 101 )
      return -2;
  }
  return result;
}


/* Function: large_jump_table @ 0x1EBE */
int __cdecl large_jump_table(int op, int a, int b)
{
  int (*ops[10])(int, int); // [esp+0h] [ebp-48h] BYREF
  unsigned int v5; // [esp+28h] [ebp-20h]

  v5 = __readgsdword(0x14u);
  qmemcpy(ops, off_6020, sizeof(ops));
  if ( (unsigned int)op > 9 )
    return -1;
  else
    return ops[op](a, b);
}


/* Function: conditional_func_ptr @ 0x1F3B */
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


/* Function: state_machine @ 0x1F74 */
int __cdecl state_machine(int event, int state)
{
  int result; // eax
  bool v3; // zf
  int v4; // edx

  result = state;
  if ( state != 2 )
  {
    if ( state > 2 )
    {
      if ( state != 3 )
        return 3;
      v3 = event == 0;
      v4 = 0;
    }
    else
    {
      if ( !state )
        return event == 1;
      if ( state != 1 )
        return 3;
      if ( event == 2 )
        return 2;
      v3 = event == 99;
      v4 = 3;
    }
    if ( v3 )
      return v4;
  }
  return result;
}


/* Function: fsm_func_table @ 0x1FC9 */
int __cdecl fsm_func_table(int event, int state)
{
  int (*state_handlers[4])(int); // [esp+0h] [ebp-20h] BYREF
  unsigned int v4; // [esp+10h] [ebp-10h]

  v4 = __readgsdword(0x14u);
  qmemcpy(state_handlers, off_6048, sizeof(state_handlers));
  if ( (unsigned int)state > 3 )
    return 3;
  else
    return state_handlers[state](event);
}


/* Function: computed_goto @ 0x203F */
int __cdecl computed_goto(int *labels, int idx)
{
  int result; // eax
  void *targets[4]; // [esp+0h] [ebp-20h] BYREF
  unsigned int v4; // [esp+10h] [ebp-10h]

  result = -1;
  v4 = __readgsdword(0x14u);
  qmemcpy(targets, &off_6058, sizeof(targets));
  if ( (unsigned int)idx <= 3 )
    __asm { jmp     dword ptr [ebp+edx*4-1Ch] }
  return result;
}


/* Function: obfuscated_cf @ 0x20BF */
int __cdecl obfuscated_cf(int a1)
{
  return 2 * a1;
}


/* Function: opaque_predicate @ 0x20CD */
int __cdecl opaque_predicate(int a1)
{
  return 2 * a1;
}


/* Function: overlapped_code @ 0x20DB */
int __cdecl overlapped_code(int x)
{
  if ( (x & 1) != 0 )
    return 3 * x + 1;
  else
    return x / 2;
}


/* Function: test_control_flow_l3 @ 0x20F9 */
// bad sp value at call has been detected, the output may be wrong!
void test_control_flow_l3()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int labels[4]; // [esp+0h] [ebp-2Ch] BYREF

  puts(asc_3548);
  v0 = non_local_jump(5);
  __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
  __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
  __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
  v2 = large_jump_table(0, 10, 5);
  __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", v2);
  v3 = conditional_func_ptr(0, 5);
  __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", v3);
  __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
  v4 = fsm_func_table(2, 1);
  __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", v4);
  v5 = computed_goto(labels, 2);
  __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v5);
  __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
  __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
  __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: __x86.get_pc_thunk.ax @ 0x226F */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x2273 */
void _x86_get_pc_thunk_cx()
{
  ;
}


/* Function: __x86.get_pc_thunk.si @ 0x2277 */
void _x86_get_pc_thunk_si()
{
  ;
}


/* Function: __stack_chk_fail_local @ 0x2280 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x22A0 */
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


/* Function: .term_proc @ 0x22EC */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x6140 */

/* FAILED to decompile: _setjmp @ 0x6144 */

/* FAILED to decompile: __stack_chk_fail @ 0x6148 */

/* FAILED to decompile: __cxa_finalize @ 0x614C */

/* FAILED to decompile: puts @ 0x6150 */

/* FAILED to decompile: __printf_chk @ 0x6154 */

/* FAILED to decompile: __longjmp_chk @ 0x6158 */

/* Total functions decompiled: 89, failed: 7 */
