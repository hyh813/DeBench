/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/1/1_clang_O0_g
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


/* Function: sub_10A0 @ 0x10A0 */
int __usercall sub_10A0@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 - 16))();
}


/* Function: _start @ 0x10B0 */
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


/* Function: sub_10DC @ 0x10DC */
void sub_10DC()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x10E0 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x10F0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1130 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1180 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
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
    _bss_start = 1;
  }
}


/* Function: frame_dummy @ 0x1210 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1219 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x121D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: sequential_ops @ 0x1230 */
int __cdecl sequential_ops(int a, int b, int c)
{
  return 2 * (b + a) - c;
}


/* Function: single_if @ 0x1270 */
int __cdecl single_if(int x)
{
  if ( x > 0 )
    x *= 2;
  return x;
}


/* Function: if_else @ 0x1290 */
int __cdecl if_else(int x)
{
  return x > 0;
}


/* Function: nested_if_2 @ 0x12C0 */
int __cdecl nested_if_2(int a, int b)
{
  if ( a <= 0 )
    return 0;
  if ( b <= 0 )
    return a;
  return b + a;
}


/* Function: nested_if_deep @ 0x1310 */
int __cdecl nested_if_deep(int a, int b, int c, int d, int e)
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


/* Function: if_elseif_chain @ 0x13A0 */
int __cdecl if_elseif_chain(int x)
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


/* Function: if_elseif_long @ 0x1400 */
int __cdecl if_elseif_long(int x)
{
  switch ( x )
  {
    case 0:
      return 100;
    case 1:
      return 200;
    case 2:
      return 300;
    case 3:
      return 400;
    case 4:
      return 500;
  }
  return -1;
}


/* Function: switch_small @ 0x1490 */
int __cdecl switch_small(int op)
{
  int v2; // [esp+10h] [ebp-4h]

  switch ( op )
  {
    case 0:
      v2 = 15;
      break;
    case 1:
      v2 = 5;
      break;
    case 2:
      v2 = 50;
      break;
    case 3:
      v2 = 2;
      break;
    default:
      v2 = -1;
      break;
  }
  return v2;
}


/* Function: switch_large @ 0x1520 */
int __cdecl switch_large(int op)
{
  int v2; // [esp+8h] [ebp-4h]

  switch ( op )
  {
    case 0:
      v2 = 0;
      break;
    case 1:
      v2 = 10;
      break;
    case 2:
      v2 = 20;
      break;
    case 3:
      v2 = 30;
      break;
    case 4:
      v2 = 40;
      break;
    case 5:
      v2 = 50;
      break;
    case 6:
      v2 = 60;
      break;
    case 7:
      v2 = 70;
      break;
    case 8:
      v2 = 80;
      break;
    case 9:
      v2 = 90;
      break;
    default:
      v2 = -1;
      break;
  }
  return v2;
}


/* Function: switch_default @ 0x15E0 */
int __cdecl switch_default(int op)
{
  switch ( op )
  {
    case 1:
      return 100;
    case 2:
      return 200;
    case 3:
      return 300;
  }
  return 0;
}


/* Function: switch_fallthrough @ 0x1660 */
int __cdecl switch_fallthrough(int op)
{
  int result; // [esp+4h] [ebp-4h]

  result = 0;
  if ( op != 1 )
  {
    if ( op != 2 )
    {
      if ( op != 3 )
        return -1;
      result = 12;
    }
    result += 2 * op;
  }
  return result + op;
}


/* Function: loop_for_fixed @ 0x16E0 */
int __cdecl loop_for_fixed(int n)
{
  int i; // [esp+0h] [ebp-8h]
  int sum; // [esp+4h] [ebp-4h]

  sum = 0;
  for ( i = 0; i < n; ++i )
    sum += i;
  return sum;
}


/* Function: loop_while @ 0x1730 */
int __cdecl loop_while(int x)
{
  int count; // [esp+4h] [ebp-4h]

  count = 0;
  while ( x )
  {
    x /= 10;
    ++count;
  }
  if ( count <= 0 )
    return 1;
  else
    return count;
}


/* Function: loop_dowhile @ 0x1790 */
int __cdecl loop_dowhile(int x)
{
  int count; // [esp+0h] [ebp-4h]

  count = 0;
  do
  {
    x /= 10;
    ++count;
  }
  while ( x );
  return count;
}


/* Function: loop_nested @ 0x17D0 */
int __cdecl loop_nested(int m, int n)
{
  int j; // [esp+0h] [ebp-Ch]
  int i; // [esp+4h] [ebp-8h]
  int total; // [esp+8h] [ebp-4h]

  total = 0;
  for ( i = 0; i < m; ++i )
  {
    for ( j = 0; j < n; ++j )
      ++total;
  }
  return total;
}


/* Function: loop_break @ 0x1840 */
int __cdecl loop_break(int target)
{
  int i; // [esp+14h] [ebp-24h]
  int arr[5]; // [esp+1Ch] [ebp-1Ch] BYREF

  memcpy(arr, &unk_4070, sizeof(arr));
  for ( i = 0; i < 5; ++i )
  {
    if ( arr[i] == target )
      return i;
  }
  return -1;
}


/* Function: loop_continue @ 0x18D0 */
int __cdecl loop_continue(int n)
{
  int i; // [esp+0h] [ebp-8h]
  int sum; // [esp+4h] [ebp-4h]

  sum = 0;
  for ( i = 1; i <= n; ++i )
  {
    if ( i % 2 )
      sum += i;
  }
  return sum;
}


/* Function: goto_forward @ 0x1930 */
int __cdecl goto_forward(int x)
{
  int result; // [esp+0h] [ebp-4h]

  if ( x <= 0 )
    result = x;
  else
    result = x * x;
  return 2 * result;
}


/* Function: goto_backward @ 0x1970 */
int __cdecl goto_backward(int x)
{
  int i; // [esp+0h] [ebp-Ch]
  int result; // [esp+4h] [ebp-8h]

  if ( x <= 0 )
    return 1;
  result = 1;
  for ( i = 1; i <= x; ++i )
    result *= i;
  return result;
}


/* Function: ternary_op @ 0x19E0 */
int __cdecl ternary_op(int a, int b)
{
  if ( a <= b )
    return b;
  else
    return a;
}


/* Function: test_control_flow_l1 @ 0x1A10 */
void test_control_flow_l1()
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
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax

  printf(asc_40C8);
  v0 = sequential_ops(5, 7, 3);
  printf("CF-L1-01 (sequential_ops): %d\n", v0);
  v1 = single_if(10);
  printf("CF-L1-02 (single_if): %d\n", v1);
  v2 = single_if(-5);
  printf("CF-L1-02 (single_if): %d\n", v2);
  v3 = if_else(5);
  printf("CF-L1-03 (if_else): %d\n", v3);
  v4 = if_else(-3);
  printf("CF-L1-03 (if_else): %d\n", v4);
  v5 = nested_if_2(10, 5);
  printf("CF-L1-04 (nested_if_2): %d\n", v5);
  v6 = nested_if_2(10, -5);
  printf("CF-L1-04 (nested_if_2): %d\n", v6);
  v7 = nested_if_2(-10, 5);
  printf("CF-L1-04 (nested_if_2): %d\n", v7);
  v8 = nested_if_deep(1, 1, 1, 1, 1);
  printf("CF-L1-05 (nested_if_deep): %d\n", v8);
  v9 = if_elseif_chain(1);
  printf("CF-L1-06 (if_elseif_chain): %d\n", v9);
  v10 = if_elseif_long(3);
  printf("CF-L1-07 (if_elseif_long): %d\n", v10);
  v11 = switch_small(2);
  printf("CF-L1-08 (switch_small): %d\n", v11);
  v12 = switch_large(7);
  printf("CF-L1-09 (switch_large): %d\n", v12);
  v13 = switch_default(5);
  printf("CF-L1-10 (switch_default): %d\n", v13);
  v14 = switch_fallthrough(3);
  printf("CF-L1-11 (switch_fallthrough): %d\n", v14);
  v15 = loop_for_fixed(10);
  printf("CF-L1-12 (loop_for_fixed): %d\n", v15);
  v16 = loop_while(12345);
  printf("CF-L1-13 (loop_while): %d\n", v16);
  v17 = loop_dowhile(9876);
  printf("CF-L1-14 (loop_dowhile): %d\n", v17);
  v18 = loop_nested(3, 4);
  printf("CF-L1-15 (loop_nested): %d\n", v18);
  v19 = loop_break(30);
  printf("CF-L1-16 (loop_break): %d\n", v19);
  v20 = loop_break(99);
  printf("CF-L1-16 (loop_break): %d\n", v20);
  v21 = loop_continue(10);
  printf("CF-L1-17 (loop_continue): %d\n", v21);
  v22 = goto_forward(5);
  printf("CF-L1-18 (goto_forward): %d\n", v22);
  v23 = goto_forward(-3);
  printf("CF-L1-18 (goto_forward): %d\n", v23);
  v24 = goto_backward(5);
  printf("CF-L1-19 (goto_backward): %d\n", v24);
  v25 = ternary_op(10, 5);
  printf("CF-L1-20 (ternary_op): %d\n", v25);
  v26 = ternary_op(3, 8);
  printf("CF-L1-20 (ternary_op): %d\n", v26);
}


/* Function: loop_multi_exit @ 0x1E70 */
int __cdecl loop_multi_exit(int target)
{
  int j; // [esp+18h] [ebp-40h]
  int i; // [esp+1Ch] [ebp-3Ch]
  int matrix[3][4]; // [esp+20h] [ebp-38h] BYREF

  memcpy(matrix, &unk_4084, sizeof(matrix));
  for ( i = 0; i < 3; ++i )
  {
    for ( j = 0; j < 4; ++j )
    {
      if ( matrix[i][j] == target )
        return j + 10 * i;
    }
  }
  return -1;
}


/* Function: infinite_loop @ 0x1F30 */
int __cdecl infinite_loop(volatile int *flag)
{
  int count; // [esp+0h] [ebp-4h]

  count = 0;
  while ( *flag != 1 )
  {
    if ( ++count > 1000 )
    {
      *flag = 1;
      return count;
    }
  }
  return count;
}


/* Function: multi_return @ 0x1F90 */
int __cdecl multi_return(int x)
{
  if ( x < 0 )
    return -1;
  if ( 2 * x > 100 )
    return -2;
  if ( x % 2 )
    return x + 1;
  return 2 * x;
}


/* Function: conditional_return @ 0x2000 */
int __cdecl conditional_return(int x)
{
  if ( x > 0 )
    return 2 * x;
  if ( x >= 0 )
    return 0;
  else
    return -x;
}


/* Function: duffs_device @ 0x2050 */
int __cdecl duffs_device(int *dst, int *src, int n)
{
  int v3; // eax
  int *v4; // eax
  int v5; // ecx
  int *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int *v10; // eax
  int v11; // ecx
  int *v12; // eax
  int *v13; // eax
  int v14; // ecx
  int *v15; // eax
  int *v16; // eax
  int v17; // ecx
  int *v18; // eax
  int *v19; // eax
  int v20; // ecx
  int *v21; // eax
  int *v22; // eax
  int v23; // ecx
  int *v24; // eax
  int *v25; // eax
  int v26; // ecx
  int *v27; // eax
  int count; // [esp+8h] [ebp-8h]

  if ( n <= 0 )
    return -1;
  v3 = n + 7;
  if ( n + 7 < 0 )
    v3 = n + 14;
  count = v3 >> 3;
  switch ( n - (n & 0x7FFFFFF8) )
  {
    case 0:
      goto LABEL_6;
    case 1:
      goto LABEL_13;
    case 2:
      goto LABEL_12;
    case 3:
      goto LABEL_11;
    case 4:
      goto LABEL_10;
    case 5:
      goto LABEL_9;
    case 6:
      goto LABEL_8;
    case 7:
      while ( 1 )
      {
        v7 = src++;
        v8 = *v7;
        v9 = dst++;
        *v9 = v8;
LABEL_8:
        v10 = src++;
        v11 = *v10;
        v12 = dst++;
        *v12 = v11;
LABEL_9:
        v13 = src++;
        v14 = *v13;
        v15 = dst++;
        *v15 = v14;
LABEL_10:
        v16 = src++;
        v17 = *v16;
        v18 = dst++;
        *v18 = v17;
LABEL_11:
        v19 = src++;
        v20 = *v19;
        v21 = dst++;
        *v21 = v20;
LABEL_12:
        v22 = src++;
        v23 = *v22;
        v24 = dst++;
        *v24 = v23;
LABEL_13:
        v25 = src++;
        v26 = *v25;
        v27 = dst++;
        *v27 = v26;
        if ( --count <= 0 )
          break;
LABEL_6:
        v4 = src++;
        v5 = *v4;
        v6 = dst++;
        *v6 = v5;
      }
      break;
    default:
      return n;
  }
  return n;
}


/* Function: loop_complex_cond @ 0x21D0 */
int __cdecl loop_complex_cond(int x)
{
  bool v2; // [esp+3h] [ebp-Dh]
  int c; // [esp+4h] [ebp-Ch]
  int a; // [esp+Ch] [ebp-4h]

  a = 0;
  for ( c = 0; ; ++c )
  {
    v2 = 0;
    if ( a < x )
    {
      v2 = 0;
      if ( c < 10 )
        v2 = x > 0;
    }
    if ( !v2 )
      break;
    a += 2;
    --x;
  }
  return c + x + a;
}


/* Function: loop_modify_var @ 0x2260 */
int __cdecl loop_modify_var(int n)
{
  int i; // [esp+0h] [ebp-8h]
  int sum; // [esp+4h] [ebp-4h]

  sum = 0;
  for ( i = 0; i < n; ++i )
  {
    sum += i;
    if ( i > 5 )
      i += 2;
  }
  return sum;
}


/* Function: loop_external_state @ 0x22C0 */
int __cdecl loop_external_state(volatile int *flag)
{
  int count; // [esp+0h] [ebp-4h]

  for ( count = 0; count <= 100; ++count )
  {
    if ( *flag )
      break;
  }
  return count;
}


/* Function: recursion_factorial @ 0x2310 */
int __cdecl recursion_factorial(int n)
{
  if ( n > 1 )
    return recursion_factorial(n - 1) * n;
  else
    return 1;
}


/* Function: tail_recursion @ 0x2370 */
int __cdecl tail_recursion(int n, int acc)
{
  if ( n > 1 )
    return tail_recursion(n - 1, acc * n);
  else
    return acc;
}


/* Function: indirect_recursion_a @ 0x23D0 */
int __cdecl indirect_recursion_a(int n, int depth)
{
  if ( depth <= 0 )
    return n;
  if ( n % 2 )
    return indirect_recursion_b(3 * n + 1, depth - 1);
  return indirect_recursion_b(n / 2, depth - 1);
}


/* Function: indirect_recursion_b @ 0x2470 */
int __cdecl indirect_recursion_b(int n, int depth)
{
  if ( depth > 0 )
    return indirect_recursion_a(n + 1, depth - 1);
  else
    return n;
}


/* Function: call_func_ptr @ 0x24D0 */
int __cdecl call_func_ptr(int (*f)(int), int x)
{
  return f(x);
}


/* Function: call_func_ptr_array @ 0x2500 */
int __cdecl call_func_ptr_array(int idx, int x)
{
  int (*funcs[3])(int); // [esp+14h] [ebp-14h]

  funcs[0] = double_value;
  funcs[1] = triple_value;
  funcs[2] = recursion_factorial;
  if ( (unsigned int)idx <= 2 )
    return funcs[idx](x);
  else
    return -1;
}


/* Function: double_value @ 0x2580 */
int __cdecl double_value(int x)
{
  return 2 * x;
}


/* Function: triple_value @ 0x2590 */
int __cdecl triple_value(int x)
{
  return 3 * x;
}


/* Function: call_virtual_func @ 0x25A0 */
int __cdecl call_virtual_func(void *obj, int x)
{
  return 2 * x;
}


/* Function: process_with_callback @ 0x25C0 */
int __cdecl process_with_callback(int *arr, int n, int (*cb)(int))
{
  int i; // [esp+Ch] [ebp-Ch]
  int sum; // [esp+10h] [ebp-8h]

  sum = 0;
  for ( i = 0; i < n; ++i )
    sum += cb(arr[i]);
  return sum;
}


/* Function: test_control_flow_l2 @ 0x2630 */
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
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int arr[5]; // [esp+18h] [ebp-60h] BYREF
  int ext_flag; // [esp+2Ch] [ebp-4Ch] BYREF
  int dst[8]; // [esp+30h] [ebp-48h] BYREF
  int src[8]; // [esp+50h] [ebp-28h] BYREF
  int flag; // [esp+70h] [ebp-8h] BYREF

  printf(asc_4336);
  v0 = loop_multi_exit(7);
  printf("CF-L2-01 (loop_multi_exit): %d\n", v0);
  flag = 0;
  v1 = infinite_loop(&flag);
  printf("CF-L2-02 (infinite_loop): %d\n", v1);
  v2 = multi_return(-5);
  printf("CF-L2-03 (multi_return): %d\n", v2);
  v3 = multi_return(100);
  printf("CF-L2-03 (multi_return): %d\n", v3);
  v4 = multi_return(3);
  printf("CF-L2-03 (multi_return): %d\n", v4);
  v5 = conditional_return(5);
  printf("CF-L2-04 (conditional_return): %d\n", v5);
  v6 = conditional_return(-5);
  printf("CF-L2-04 (conditional_return): %d\n", v6);
  memcpy(src, &unk_468C, sizeof(src));
  memset(dst, 0, sizeof(dst));
  v7 = duffs_device(dst, src, 8);
  printf("CF-L2-05 (duffs_device): %d\n", v7);
  v8 = loop_complex_cond(10);
  printf("CF-L2-06 (loop_complex_cond): %d\n", v8);
  v9 = loop_modify_var(10);
  printf("CF-L2-07 (loop_modify_var): %d\n", v9);
  ext_flag = 0;
  v10 = loop_external_state(&ext_flag);
  printf("CF-L2-08 (loop_external_state): %d\n", v10);
  v11 = recursion_factorial(5);
  printf("CF-L2-09 (recursion_factorial): %d\n", v11);
  v12 = tail_recursion(5, 1);
  printf("CF-L2-10 (tail_recursion): %d\n", v12);
  v13 = indirect_recursion_a(10, 3);
  printf("CF-L2-11 (indirect_recursion): %d\n", v13);
  v14 = call_func_ptr(double_value, 5);
  printf("CF-L2-12 (call_func_ptr): %d\n", v14);
  v15 = call_func_ptr_array(0, 5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", v15);
  v16 = call_func_ptr_array(2, 5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", v16);
  memcpy(arr, &unk_40B4, sizeof(arr));
  v17 = process_with_callback(arr, 5, double_value);
  printf("CF-L2-15 (process_with_callback): %d\n", v17);
}


/* Function: non_local_jump @ 0x29A0 */
int __cdecl non_local_jump(int x)
{
  if ( _setjmp(&jump_buffer) )
    return -1;
  if ( x < 0 )
    longjmp(&jump_buffer, 1);
  if ( x > 100 )
    longjmp(&jump_buffer, 2);
  return 2 * x;
}


/* Function: cpp_exception @ 0x2A40 */
int __cdecl cpp_exception(int x)
{
  if ( x < 0 )
    return -1;
  if ( x <= 100 )
    return 2 * x;
  return -2;
}


/* Function: large_jump_table @ 0x2A90 */
int __cdecl large_jump_table(int op, int a, int b)
{
  int (*ops[10])(int, int); // [esp+18h] [ebp-30h] BYREF

  memcpy(ops, off_6ED4, sizeof(ops));
  if ( (unsigned int)op < 0xA )
    return ops[op](a, b);
  else
    return -1;
}


/* Function: op_add @ 0x2B20 */
int __cdecl op_add(int a, int b)
{
  return b + a;
}


/* Function: op_sub @ 0x2B40 */
int __cdecl op_sub(int a, int b)
{
  return a - b;
}


/* Function: op_mul @ 0x2B60 */
int __cdecl op_mul(int a, int b)
{
  return b * a;
}


/* Function: op_div @ 0x2B80 */
int __cdecl op_div(int a, int b)
{
  if ( b )
    return a / b;
  else
    return 0;
}


/* Function: op_mod @ 0x2BC0 */
int __cdecl op_mod(int a, int b)
{
  if ( b )
    return a % b;
  else
    return 0;
}


/* Function: op_and @ 0x2C00 */
int __cdecl op_and(int a, int b)
{
  return b & a;
}


/* Function: op_or @ 0x2C20 */
int __cdecl op_or(int a, int b)
{
  return b | a;
}


/* Function: op_xor @ 0x2C40 */
int __cdecl op_xor(int a, int b)
{
  return b ^ a;
}


/* Function: op_shl @ 0x2C60 */
int __cdecl op_shl(int a, int b)
{
  return a << b;
}


/* Function: op_shr @ 0x2C80 */
int __cdecl op_shr(int a, int b)
{
  return a >> b;
}


/* Function: conditional_func_ptr @ 0x2CA0 */
int __cdecl conditional_func_ptr(int mode, int x)
{
  int (*func)(int); // [esp+10h] [ebp-8h]

  if ( mode )
  {
    if ( mode == 1 )
      func = triple_value;
    else
      func = recursion_factorial;
  }
  else
  {
    func = double_value;
  }
  return func(x);
}


/* Function: state_machine @ 0x2D20 */
int __cdecl state_machine(int event, int state)
{
  int v3; // [esp+8h] [ebp-4h]

  switch ( state )
  {
    case 0:
      v3 = event == 1;
      break;
    case 1:
      if ( event == 2 )
      {
        v3 = 2;
      }
      else if ( event == 99 )
      {
        v3 = 3;
      }
      else
      {
        v3 = 1;
      }
      break;
    case 2:
      v3 = 2;
      break;
    case 3:
      if ( event )
        v3 = 3;
      else
        v3 = 0;
      break;
    default:
      v3 = 3;
      break;
  }
  return v3;
}


/* Function: fsm_func_table @ 0x2E00 */
int __cdecl fsm_func_table(int event, int state)
{
  int (*state_handlers[4])(int); // [esp+10h] [ebp-18h]

  state_handlers[0] = state_idle;
  state_handlers[1] = state_processing;
  state_handlers[2] = state_done;
  state_handlers[3] = state_error;
  if ( (unsigned int)state < 4 )
    return state_handlers[state](event);
  else
    return 3;
}


/* Function: state_idle @ 0x2E80 */
int __cdecl state_idle(int event)
{
  return event == 1;
}


/* Function: state_processing @ 0x2EA0 */
int __cdecl state_processing(int event)
{
  if ( event == 2 )
    return 2;
  if ( event == 99 )
    return 3;
  return 1;
}


/* Function: state_done @ 0x2EF0 */
int __cdecl state_done(int event)
{
  return 2;
}


/* Function: state_error @ 0x2F00 */
int __cdecl state_error(int event)
{
  int result; // eax

  result = 3;
  if ( !event )
    return 0;
  return result;
}


/* Function: computed_goto @ 0x2F20 */
int __cdecl computed_goto(int *labels, int idx)
{
  void *targets[4]; // [esp+4h] [ebp-14h]

  targets[0] = &label0;
  targets[1] = &label1;
  targets[2] = &label2;
  targets[3] = &label3;
  if ( (unsigned int)idx < 4 )
    __asm { jmp     eax }
  return -1;
}


/* Function: obfuscated_cf @ 0x2FD0 */
int __cdecl obfuscated_cf(int x)
{
  int result; // [esp+0h] [ebp-4h]

  result = x;
  if ( x * x + 1 < 0 )
    result = 2 * x + 1;
  return 2 * result;
}


/* Function: opaque_predicate @ 0x3010 */
int __cdecl opaque_predicate(int x)
{
  return 2 * x;
}


/* Function: overlapped_code @ 0x3050 */
int __cdecl overlapped_code(int x)
{
  if ( (x & 1) != 0 )
    return 3 * x + 1;
  else
    return x / 2;
}


/* Function: test_control_flow_l3 @ 0x3090 */
void test_control_flow_l3()
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
  int labels[5]; // [esp+14h] [ebp-14h] BYREF

  printf(asc_452A);
  v0 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  printf("CF-L3-01 (non_local_jump): %d\n", v1);
  v2 = cpp_exception(5);
  printf("CF-L3-02 (cpp_exception): %d\n", v2);
  v3 = cpp_exception(-5);
  printf("CF-L3-02 (cpp_exception): %d\n", v3);
  v4 = large_jump_table(0, 10, 5);
  printf("CF-L3-03 (large_jump_table): %d\n", v4);
  v5 = conditional_func_ptr(0, 5);
  printf("CF-L3-04 (conditional_func_ptr): %d\n", v5);
  v6 = state_machine(1, 0);
  printf("CF-L3-05 (state_machine): %d\n", v6);
  v7 = fsm_func_table(2, 1);
  printf("CF-L3-06 (fsm_func_table): %d\n", v7);
  labels[0] = 0;
  labels[1] = 1;
  labels[2] = 2;
  labels[3] = 3;
  v8 = computed_goto(labels, 2);
  printf("CF-L3-07 (computed_goto): %d\n", v8);
  v9 = obfuscated_cf(5);
  printf("CF-L3-08 (obfuscated_cf): %d\n", v9);
  v10 = opaque_predicate(5);
  printf("CF-L3-09 (opaque_predicate): %d\n", v10);
  v11 = overlapped_code(5);
  printf("CF-L3-10 (overlapped_code): %d\n", v11);
}


/* Function: main @ 0x32D0 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: __do_global_ctors_aux @ 0x3310 */
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


/* Function: .term_proc @ 0x335C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x70D4 */

/* FAILED to decompile: printf @ 0x70D8 */

/* FAILED to decompile: longjmp @ 0x70DC */

/* FAILED to decompile: _setjmp @ 0x70E0 */

/* FAILED to decompile: memcpy @ 0x70E4 */

/* FAILED to decompile: __cxa_finalize @ 0x70E8 */

/* FAILED to decompile: memset @ 0x70EC */

/* Total functions decompiled: 80, failed: 7 */
