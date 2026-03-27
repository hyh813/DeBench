/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_gcc_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00101000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 001010e0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101110 */

/* WARNING: Removing unreachable block (ram,0x00101123) */
/* WARNING: Removing unreachable block (ram,0x0010112f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101140 */

/* WARNING: Removing unreachable block (ram,0x00101164) */
/* WARNING: Removing unreachable block (ram,0x00101170) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101180 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: sequential_ops @ 001011c9 */

int sequential_ops(int a,int b,int c)

{
  int c_local;
  int b_local;
  int a_local;
  int temp1;
  int temp2;
  int temp3;
  
  return (b + a) * 2 - c;
}



/* Function: single_if @ 001011fb */

int single_if(int x)

{
  int x_local;
  
  x_local = x;
  if (0 < x) {
    x_local = x << 1;
  }
  return x_local;
}



/* Function: if_else @ 00101214 */

int if_else(int x)

{
  int x_local;
  
  return (int)(0 < x);
}



/* Function: nested_if_2 @ 00101233 */

int nested_if_2(int a,int b)

{
  int b_local;
  int a_local;
  
  if (a < 1) {
    a = 0;
  }
  else if (0 < b) {
    a = b + a;
  }
  return a;
}



/* Function: nested_if_deep @ 00101263 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
  int iVar1;
  int e_local;
  int d_local;
  int c_local;
  int b_local;
  int a_local;
  
  if (a < 1) {
    iVar1 = 0;
  }
  else if (b < 1) {
    iVar1 = 1;
  }
  else if (c < 1) {
    iVar1 = 2;
  }
  else if (d < 1) {
    iVar1 = 3;
  }
  else if (e < 1) {
    iVar1 = 4;
  }
  else {
    iVar1 = 5;
  }
  return iVar1;
}



/* Function: if_elseif_chain @ 001012c3 */

int if_elseif_chain(int x)

{
  int iVar1;
  int x_local;
  
  if (x == 0) {
    iVar1 = 10;
  }
  else if (x == 1) {
    iVar1 = 0x14;
  }
  else if (x == 2) {
    iVar1 = 0x1e;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: if_elseif_long @ 001012fc */

int if_elseif_long(int x)

{
  int iVar1;
  int x_local;
  
  if (x == 0) {
    iVar1 = 100;
  }
  else if (x == 1) {
    iVar1 = 200;
  }
  else if (x == 2) {
    iVar1 = 300;
  }
  else if (x == 3) {
    iVar1 = 400;
  }
  else if (x == 4) {
    iVar1 = 500;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: switch_small @ 0010134f */

int switch_small(int op)

{
  int op_local;
  int a;
  int b;
  
  if (op == 3) {
    return 2;
  }
  if (op < 4) {
    if (op == 2) {
      return 0x32;
    }
    if (op < 3) {
      if (op == 0) {
        return 0xf;
      }
      if (op == 1) {
        return 5;
      }
    }
  }
  return -1;
}



/* Function: switch_large @ 001013b9 */

int switch_large(int op)

{
  int iVar1;
  int op_local;
  
  switch(op) {
  case 0:
    iVar1 = 0;
    break;
  case 1:
    iVar1 = 10;
    break;
  case 2:
    iVar1 = 0x14;
    break;
  case 3:
    iVar1 = 0x1e;
    break;
  case 4:
    iVar1 = 0x28;
    break;
  case 5:
    iVar1 = 0x32;
    break;
  case 6:
    iVar1 = 0x3c;
    break;
  case 7:
    iVar1 = 0x46;
    break;
  case 8:
    iVar1 = 0x50;
    break;
  case 9:
    iVar1 = 0x5a;
    break;
  default:
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: switch_default @ 0010143b */

int switch_default(int op)

{
  int op_local;
  
  if (op == 3) {
    return 300;
  }
  if (op < 4) {
    if (op == 1) {
      return 100;
    }
    if (op == 2) {
      return 200;
    }
  }
  return 0;
}



/* Function: switch_fallthrough @ 0010147c */

int switch_fallthrough(int op)

{
  int op_local;
  int result;
  
  result = 0;
  if (op == 3) {
    result = 0xc;
LAB_001014b1:
    result = result + op * 2;
LAB_001014b9:
    result = result + op;
  }
  else {
    if (op < 4) {
      if (op == 1) goto LAB_001014b9;
      if (op == 2) goto LAB_001014b1;
    }
    result = -1;
  }
  return result;
}



/* Function: loop_for_fixed @ 001014cd */

int loop_for_fixed(int n)

{
  int n_local;
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + i;
  }
  return sum;
}



/* Function: loop_while @ 001014ff */

int loop_while(int x)

{
  int x_local;
  int count;
  
  count = 0;
  for (x_local = x; x_local != 0; x_local = x_local / 10) {
    count = count + 1;
  }
  if (count < 1) {
    count = 1;
  }
  return count;
}



/* Function: loop_dowhile @ 0010154c */

int loop_dowhile(int x)

{
  int x_local;
  int count;
  
  count = 0;
  x_local = x;
  do {
    x_local = x_local / 10;
    count = count + 1;
  } while (x_local != 0);
  return count;
}



/* Function: loop_nested @ 0010158d */

int loop_nested(int m,int n)

{
  int n_local;
  int m_local;
  int total;
  int i;
  int j;
  
  total = 0;
  for (i = 0; i < m; i = i + 1) {
    for (j = 0; j < n; j = j + 1) {
      total = total + 1;
    }
  }
  return total;
}



/* Function: loop_break @ 001015d5 */

int loop_break(int target)

{
  long in_FS_OFFSET;
  int target_local;
  int i;
  int n;
  int arr [5];
  
  arr[0] = 10;
  arr[1] = 0x14;
  arr[2] = 0x1e;
  arr[3] = 0x28;
  arr[4] = 0x32;
  for (i = 0; i < 5; i = i + 1) {
    if (target == arr[i]) goto LAB_0010164a;
  }
  i = -1;
LAB_0010164a:
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return i;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: loop_continue @ 00101660 */

int loop_continue(int n)

{
  int n_local;
  int sum;
  int i;
  
  sum = 0;
  for (i = 1; i <= n; i = i + 1) {
    if ((i & 1U) != 0) {
      sum = sum + i;
    }
  }
  return sum;
}



/* Function: goto_forward @ 0010169f */

int goto_forward(int x)

{
  int x_local;
  int result;
  
  result = x;
  if (0 < x) {
    result = x * x;
  }
  return result << 1;
}



/* Function: goto_backward @ 001016c9 */

int goto_backward(int x)

{
  int x_local;
  int result;
  int i;
  
  if (x < 1) {
    result = 1;
  }
  else {
    result = 1;
    for (i = 1; i <= x; i = i + 1) {
      result = result * i;
    }
  }
  return result;
}



/* Function: ternary_op @ 0010170d */

int ternary_op(int a,int b)

{
  int b_local;
  int a_local;
  
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: test_control_flow_l1 @ 00101728 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
  uint uVar1;
  
  puts(&DAT_00103030);
  uVar1 = sequential_ops(5,7,3);
  printf("CF-L1-01 (sequential_ops): %d\n",(ulong)uVar1);
  uVar1 = single_if(10);
  printf("CF-L1-02 (single_if): %d\n",(ulong)uVar1);
  uVar1 = single_if(-5);
  printf("CF-L1-02 (single_if): %d\n",(ulong)uVar1);
  uVar1 = if_else(5);
  printf("CF-L1-03 (if_else): %d\n",(ulong)uVar1);
  uVar1 = if_else(-3);
  printf("CF-L1-03 (if_else): %d\n",(ulong)uVar1);
  uVar1 = nested_if_2(10,5);
  printf("CF-L1-04 (nested_if_2): %d\n",(ulong)uVar1);
  uVar1 = nested_if_2(10,-5);
  printf("CF-L1-04 (nested_if_2): %d\n",(ulong)uVar1);
  uVar1 = nested_if_2(-10,5);
  printf("CF-L1-04 (nested_if_2): %d\n",(ulong)uVar1);
  uVar1 = nested_if_deep(1,1,1,1,1);
  printf("CF-L1-05 (nested_if_deep): %d\n",(ulong)uVar1);
  uVar1 = if_elseif_chain(1);
  printf("CF-L1-06 (if_elseif_chain): %d\n",(ulong)uVar1);
  uVar1 = if_elseif_long(3);
  printf("CF-L1-07 (if_elseif_long): %d\n",(ulong)uVar1);
  uVar1 = switch_small(2);
  printf("CF-L1-08 (switch_small): %d\n",(ulong)uVar1);
  uVar1 = switch_large(7);
  printf("CF-L1-09 (switch_large): %d\n",(ulong)uVar1);
  uVar1 = switch_default(5);
  printf("CF-L1-10 (switch_default): %d\n",(ulong)uVar1);
  uVar1 = switch_fallthrough(3);
  printf("CF-L1-11 (switch_fallthrough): %d\n",(ulong)uVar1);
  uVar1 = loop_for_fixed(10);
  printf("CF-L1-12 (loop_for_fixed): %d\n",(ulong)uVar1);
  uVar1 = loop_while(0x3039);
  printf("CF-L1-13 (loop_while): %d\n",(ulong)uVar1);
  uVar1 = loop_dowhile(0x2694);
  printf("CF-L1-14 (loop_dowhile): %d\n",(ulong)uVar1);
  uVar1 = loop_nested(3,4);
  printf("CF-L1-15 (loop_nested): %d\n",(ulong)uVar1);
  uVar1 = loop_break(0x1e);
  printf("CF-L1-16 (loop_break): %d\n",(ulong)uVar1);
  uVar1 = loop_break(99);
  printf("CF-L1-16 (loop_break): %d\n",(ulong)uVar1);
  uVar1 = loop_continue(10);
  printf("CF-L1-17 (loop_continue): %d\n",(ulong)uVar1);
  uVar1 = goto_forward(5);
  printf("CF-L1-18 (goto_forward): %d\n",(ulong)uVar1);
  uVar1 = goto_forward(-3);
  printf("CF-L1-18 (goto_forward): %d\n",(ulong)uVar1);
  uVar1 = goto_backward(5);
  printf("CF-L1-19 (goto_backward): %d\n",(ulong)uVar1);
  uVar1 = ternary_op(10,5);
  printf("CF-L1-20 (ternary_op): %d\n",(ulong)uVar1);
  uVar1 = ternary_op(3,8);
  printf("CF-L1-20 (ternary_op): %d\n",(ulong)uVar1);
  return;
}



/* Function: loop_multi_exit @ 00101adf */

int loop_multi_exit(int target)

{
  int iVar1;
  long in_FS_OFFSET;
  int target_local;
  int i;
  int j;
  int matrix [3] [4];
  
  matrix[0][0] = 1;
  matrix[0][1] = 2;
  matrix[0][2] = 3;
  matrix[0][3] = 4;
  matrix[1][0] = 5;
  matrix[1][1] = 6;
  matrix[1][2] = 7;
  matrix[1][3] = 8;
  matrix[2][0] = 9;
  matrix[2][1] = 10;
  matrix[2][2] = 0xb;
  matrix[2][3] = 0xc;
  i = 0;
  do {
    if (2 < i) {
      iVar1 = -1;
LAB_00101bac:
      if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return iVar1;
    }
    for (j = 0; j < 4; j = j + 1) {
      if (target == matrix[i][j]) {
        iVar1 = j + i * 10;
        goto LAB_00101bac;
      }
    }
    i = i + 1;
  } while( true );
}



/* Function: infinite_loop @ 00101bc2 */

int infinite_loop(int *flag)

{
  int *flag_local;
  int count;
  
  count = 0;
  do {
    if (*flag == 1) {
      return count;
    }
    count = count + 1;
  } while (count < 0x3e9);
  *flag = 1;
  return count;
}



/* Function: multi_return @ 00101bff */

int multi_return(int x)

{
  int iVar1;
  int x_local;
  int temp;
  
  if (x < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = x * 2;
    if (iVar1 < 0x65) {
      if ((x & 1U) != 0) {
        iVar1 = x + 1;
      }
    }
    else {
      iVar1 = -2;
    }
  }
  return iVar1;
}



/* Function: conditional_return @ 00101c43 */

int conditional_return(int x)

{
  int iVar1;
  int x_local;
  
  if (x < 1) {
    if (x < 0) {
      iVar1 = -x;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = x * 2;
  }
  return iVar1;
}



/* Function: duffs_device @ 00101c6f */

int duffs_device(int *dst,int *src,int n)

{
  int iVar1;
  int n_local;
  int *src_local;
  int *dst_local;
  int count;
  
  if (n < 1) {
    n = -1;
  }
  else {
    iVar1 = n + 7;
    if (n + 7 < 0) {
      iVar1 = n + 0xe;
    }
    count = iVar1 >> 3;
    src_local = src;
    dst_local = dst;
    switch(n % 8) {
    case 0:
      do {
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101cdd_caseD_7:
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101cdd_caseD_6:
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101cdd_caseD_5:
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101cdd_caseD_4:
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101cdd_caseD_3:
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101cdd_caseD_2:
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101cdd_caseD_1:
        *dst_local = *src_local;
        count = count + -1;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
      } while (0 < count);
      break;
    case 1:
      goto switchD_00101cdd_caseD_1;
    case 2:
      goto switchD_00101cdd_caseD_2;
    case 3:
      goto switchD_00101cdd_caseD_3;
    case 4:
      goto switchD_00101cdd_caseD_4;
    case 5:
      goto switchD_00101cdd_caseD_5;
    case 6:
      goto switchD_00101cdd_caseD_6;
    case 7:
      goto switchD_00101cdd_caseD_7;
    }
  }
  return n;
}



/* Function: loop_complex_cond @ 00101dd4 */

int loop_complex_cond(int x)

{
  int x_local;
  int a;
  int b;
  int c;
  
  a = 0;
  c = 0;
  for (b = x; ((a < b && (c < 10)) && (0 < b)); b = b + -1) {
    a = a + 2;
    c = c + 1;
  }
  return c + a + b;
}



/* Function: loop_modify_var @ 00101e24 */

int loop_modify_var(int n)

{
  int n_local;
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + i;
    if (5 < i) {
      i = i + 2;
    }
  }
  return sum;
}



/* Function: loop_external_state @ 00101e60 */

int loop_external_state(int *flag)

{
  int *flag_local;
  int count;
  
  count = 0;
  do {
    if (*flag != 0) {
      return count;
    }
    count = count + 1;
  } while (count < 0x65);
  return count;
}



/* Function: recursion_factorial @ 00101e91 */

int recursion_factorial(int n)

{
  int iVar1;
  int n_local;
  
  if (n < 2) {
    iVar1 = 1;
  }
  else {
    iVar1 = recursion_factorial(n + -1);
    iVar1 = iVar1 * n;
  }
  return iVar1;
}



/* Function: tail_recursion @ 00101ec0 */

int tail_recursion(int n,int acc)

{
  int acc_local;
  int n_local;
  
  if (1 < n) {
    acc = tail_recursion(n + -1,n * acc);
  }
  return acc;
}



/* Function: indirect_recursion_a @ 00101ef5 */

int indirect_recursion_a(int n,int depth)

{
  int depth_local;
  int n_local;
  
  if (0 < depth) {
    if ((n & 1U) == 0) {
      n = indirect_recursion_b(n / 2,depth + -1);
    }
    else {
      n = indirect_recursion_b(n * 3 + 1,depth + -1);
    }
  }
  return n;
}



/* Function: indirect_recursion_b @ 00101f56 */

int indirect_recursion_b(int n,int depth)

{
  int depth_local;
  int n_local;
  
  if (0 < depth) {
    n = indirect_recursion_a(n + 1,depth + -1);
  }
  return n;
}



/* Function: call_func_ptr @ 00101f8a */

int call_func_ptr(_func_int_int *f,int x)

{
  int iVar1;
  int x_local;
  _func_int_int *f_local;
  
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: double_value @ 00101faa */

int double_value(int x)

{
  int x_local;
  
  return x * 2;
}



/* Function: triple_value @ 00101fbc */

int triple_value(int x)

{
  int x_local;
  
  return x * 3;
}



/* Function: call_func_ptr_array @ 00101fd2 */

int call_func_ptr_array(int idx,int x)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int x_local;
  int idx_local;
  _func_int_int *funcs [3];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  funcs[0] = double_value;
  funcs[1] = triple_value;
  funcs[2] = recursion_factorial;
  if ((idx < 0) || (2 < idx)) {
    iVar2 = -1;
  }
  else {
    iVar2 = (*funcs[idx])(x);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: call_virtual_func @ 0010204e */

int call_virtual_func(void *obj,int x)

{
  int x_local;
  void *obj_local;
  
  return x * 2;
}



/* Function: process_with_callback @ 00102064 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
  int iVar1;
  _func_int_int *cb_local;
  int n_local;
  int *arr_local;
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    iVar1 = (*cb)(arr[i]);
    sum = sum + iVar1;
  }
  return sum;
}



/* Function: test_control_flow_l2 @ 001020bd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
  long lVar1;
  uint uVar2;
  long in_FS_OFFSET;
  int flag;
  int ext_flag;
  int arr [5];
  int src [8];
  int dst [8];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_001032d8);
  uVar2 = loop_multi_exit(7);
  printf("CF-L2-01 (loop_multi_exit): %d\n",(ulong)uVar2);
  flag = 0;
  uVar2 = infinite_loop(&flag);
  printf("CF-L2-02 (infinite_loop): %d\n",(ulong)uVar2);
  uVar2 = multi_return(-5);
  printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar2);
  uVar2 = multi_return(100);
  printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar2);
  uVar2 = multi_return(3);
  printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar2);
  uVar2 = conditional_return(5);
  printf("CF-L2-04 (conditional_return): %d\n",(ulong)uVar2);
  uVar2 = conditional_return(-5);
  printf("CF-L2-04 (conditional_return): %d\n",(ulong)uVar2);
  src[0] = 1;
  src[1] = 2;
  src[2] = 3;
  src[3] = 4;
  src[4] = 5;
  src[5] = 6;
  src[6] = 7;
  src[7] = 8;
  dst[0] = 0;
  dst[1] = 0;
  dst[2] = 0;
  dst[3] = 0;
  dst[4] = 0;
  dst[5] = 0;
  dst[6] = 0;
  dst[7] = 0;
  uVar2 = duffs_device(dst,src,8);
  printf("CF-L2-05 (duffs_device): %d\n",(ulong)uVar2);
  uVar2 = loop_complex_cond(10);
  printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar2);
  uVar2 = loop_modify_var(10);
  printf("CF-L2-07 (loop_modify_var): %d\n",(ulong)uVar2);
  ext_flag = 0;
  uVar2 = loop_external_state(&ext_flag);
  printf("CF-L2-08 (loop_external_state): %d\n",(ulong)uVar2);
  uVar2 = recursion_factorial(5);
  printf("CF-L2-09 (recursion_factorial): %d\n",(ulong)uVar2);
  uVar2 = tail_recursion(5,1);
  printf("CF-L2-10 (tail_recursion): %d\n",(ulong)uVar2);
  uVar2 = indirect_recursion_a(10,3);
  printf("CF-L2-11 (indirect_recursion): %d\n",(ulong)uVar2);
  uVar2 = call_func_ptr(double_value,5);
  printf("CF-L2-12 (call_func_ptr): %d\n",(ulong)uVar2);
  uVar2 = call_func_ptr_array(0,5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",(ulong)uVar2);
  uVar2 = call_func_ptr_array(2,5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",(ulong)uVar2);
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  uVar2 = process_with_callback(arr,5,double_value);
  printf("CF-L2-15 (process_with_callback): %d\n",(ulong)uVar2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: non_local_jump @ 00102405 */

int non_local_jump(int x)

{
  int iVar1;
  int x_local;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  if (iVar1 == 0) {
    if (x < 0) {
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)jump_buffer,1);
    }
    if (100 < x) {
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)jump_buffer,2);
    }
    iVar1 = x * 2;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: cpp_exception @ 0010246d */

int cpp_exception(int x)

{
  int iVar1;
  int x_local;
  
  if (x < 0) {
    iVar1 = -1;
  }
  else if (x < 0x65) {
    iVar1 = x * 2;
  }
  else {
    iVar1 = -2;
  }
  return iVar1;
}



/* Function: op_add @ 00102499 */

int op_add(int a,int b)

{
  int b_local;
  int a_local;
  
  return b + a;
}



/* Function: op_sub @ 001024b1 */

int op_sub(int a,int b)

{
  int b_local;
  int a_local;
  
  return a - b;
}



/* Function: op_mul @ 001024c7 */

int op_mul(int a,int b)

{
  int b_local;
  int a_local;
  
  return a * b;
}



/* Function: op_div @ 001024de */

int op_div(int a,int b)

{
  int iVar1;
  int b_local;
  int a_local;
  
  if (b == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = a / b;
  }
  return iVar1;
}



/* Function: op_mod @ 00102502 */

int op_mod(int a,int b)

{
  int iVar1;
  int b_local;
  int a_local;
  
  if (b == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = a % b;
  }
  return iVar1;
}



/* Function: op_and @ 00102528 */

int op_and(int a,int b)

{
  int b_local;
  int a_local;
  
  return a & b;
}



/* Function: op_or @ 0010253e */

int op_or(int a,int b)

{
  int b_local;
  int a_local;
  
  return a | b;
}



/* Function: op_xor @ 00102554 */

int op_xor(int a,int b)

{
  int b_local;
  int a_local;
  
  return a ^ b;
}



/* Function: op_shl @ 0010256a */

int op_shl(int a,int b)

{
  int b_local;
  int a_local;
  
  return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 00102586 */

int op_shr(int a,int b)

{
  int b_local;
  int a_local;
  
  return a >> ((byte)b & 0x1f);
}



/* Function: large_jump_table @ 001025a2 */

int large_jump_table(int op,int a,int b)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int b_local;
  int a_local;
  int op_local;
  _func_int_int_int *ops [10];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
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
  if ((op < 0) || (9 < op)) {
    iVar2 = -1;
  }
  else {
    iVar2 = (*ops[op])(a,b);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: conditional_func_ptr @ 00102673 */

int conditional_func_ptr(int mode,int x)

{
  int iVar1;
  int x_local;
  int mode_local;
  _func_int_int *func;
  
  if (mode == 0) {
    func = double_value;
  }
  else if (mode == 1) {
    func = triple_value;
  }
  else {
    func = recursion_factorial;
  }
  iVar1 = (*func)(x);
  return iVar1;
}



/* Function: state_machine @ 001026c3 */

int state_machine(int event,int state)

{
  int state_local;
  int event_local;
  
  if (state == 3) {
    if (event == 0) {
      return 0;
    }
    return 3;
  }
  if (state < 4) {
    if (state == 2) {
      return 2;
    }
    if (state < 3) {
      if (state == 0) {
        if (event == 1) {
          return 1;
        }
        return 0;
      }
      if (state == 1) {
        if (event == 2) {
          return 2;
        }
        if (event == 99) {
          return 3;
        }
        return 1;
      }
    }
  }
  return 3;
}



/* Function: state_idle @ 0010274e */

int state_idle(int event)

{
  int event_local;
  
  return (int)(event == 1);
}



/* Function: state_processing @ 00102765 */

int state_processing(int event)

{
  int iVar1;
  int event_local;
  
  if (event == 2) {
    iVar1 = 2;
  }
  else if (event == 99) {
    iVar1 = 3;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: state_done @ 00102791 */

int state_done(int event)

{
  int event_local;
  
  return 2;
}



/* Function: state_error @ 001027a3 */

int state_error(int event)

{
  int iVar1;
  int event_local;
  
  if (event == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 3;
  }
  return iVar1;
}



/* Function: fsm_func_table @ 001027c2 */

int fsm_func_table(int event,int state)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int state_local;
  int event_local;
  _func_int_int *state_handlers [4];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  state_handlers[0] = state_idle;
  state_handlers[1] = state_processing;
  state_handlers[2] = state_done;
  state_handlers[3] = state_error;
  if ((state < 0) || (3 < state)) {
    iVar2 = 3;
  }
  else {
    iVar2 = (*state_handlers[state])(event);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: computed_goto @ 00102849 */

int computed_goto(int *labels,int idx)

{
  int iVar1;
  long in_FS_OFFSET;
  int idx_local;
  int *labels_local;
  void *targets [4];
  
  targets[0] = &DAT_001028b7;
  targets[1] = &LAB_001028c2;
  targets[2] = &LAB_001028cd;
  targets[3] = &LAB_001028d8;
  if ((-1 < idx) && (idx < 4)) {
                    /* WARNING: Could not recover jumptable at 0x001028b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*targets[idx])();
    return iVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return -1;
}



/* Function: obfuscated_cf @ 001028f7 */

int obfuscated_cf(int x)

{
  int x_local;
  int result;
  
  result = x;
  if (x * x < -1) {
    result = x * 2 + 1;
  }
  return result << 1;
}



/* Function: opaque_predicate @ 00102926 */

/* WARNING: Removing unreachable block (ram,0x00102945) */

int opaque_predicate(int x)

{
  int x_local;
  int cond;
  
  return x * 2;
}



/* Function: overlapped_code @ 00102950 */

int overlapped_code(int x)

{
  int iVar1;
  int x_local;
  
  if ((x & 1U) == 0) {
    iVar1 = x / 2;
  }
  else {
    iVar1 = x * 3 + 1;
  }
  return iVar1;
}



/* Function: test_control_flow_l3 @ 00102981 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
  long lVar1;
  uint uVar2;
  long in_FS_OFFSET;
  int labels [4];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_001034f0);
  uVar2 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar2);
  uVar2 = non_local_jump(-5);
  printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar2);
  uVar2 = cpp_exception(5);
  printf("CF-L3-02 (cpp_exception): %d\n",(ulong)uVar2);
  uVar2 = cpp_exception(-5);
  printf("CF-L3-02 (cpp_exception): %d\n",(ulong)uVar2);
  uVar2 = large_jump_table(0,10,5);
  printf("CF-L3-03 (large_jump_table): %d\n",(ulong)uVar2);
  uVar2 = conditional_func_ptr(0,5);
  printf("CF-L3-04 (conditional_func_ptr): %d\n",(ulong)uVar2);
  uVar2 = state_machine(1,0);
  printf("CF-L3-05 (state_machine): %d\n",(ulong)uVar2);
  uVar2 = fsm_func_table(2,1);
  printf("CF-L3-06 (fsm_func_table): %d\n",(ulong)uVar2);
  labels[0] = 0;
  labels[1] = 1;
  labels[2] = 2;
  labels[3] = 3;
  uVar2 = computed_goto(labels,2);
  printf("CF-L3-07 (computed_goto): %d\n",(ulong)uVar2);
  uVar2 = obfuscated_cf(5);
  printf("CF-L3-08 (obfuscated_cf): %d\n",(ulong)uVar2);
  uVar2 = opaque_predicate(5);
  printf("CF-L3-09 (opaque_predicate): %d\n",(ulong)uVar2);
  uVar2 = overlapped_code(5);
  printf("CF-L3-10 (overlapped_code): %d\n",(ulong)uVar2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: main @ 00102b7e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: _fini @ 00102bac */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 73 */
