/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/1/1_clang_O0_g
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



/* Function: _start @ 00101090 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001010c0 */

/* WARNING: Removing unreachable block (ram,0x001010d3) */
/* WARNING: Removing unreachable block (ram,0x001010df) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001010f0 */

/* WARNING: Removing unreachable block (ram,0x00101114) */
/* WARNING: Removing unreachable block (ram,0x00101120) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101130 */

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



/* Function: sequential_ops @ 00101180 */

int sequential_ops(int a,int b,int c)

{
  int temp3;
  int temp2;
  int temp1;
  int c_local;
  int b_local;
  int a_local;
  
  return (a + b) * 2 - c;
}



/* Function: single_if @ 001011b0 */

int single_if(int x)

{
  int x_local;
  
  x_local = x;
  if (0 < x) {
    x_local = x << 1;
  }
  return x_local;
}



/* Function: if_else @ 001011d0 */

int if_else(int x)

{
  int x_local;
  uint local_c;
  
  local_c = (uint)(0 < x);
  return local_c;
}



/* Function: nested_if_2 @ 00101200 */

int nested_if_2(int a,int b)

{
  int b_local;
  int a_local;
  int local_c;
  
  if (a < 1) {
    local_c = 0;
  }
  else {
    local_c = a;
    if (0 < b) {
      local_c = a + b;
    }
  }
  return local_c;
}



/* Function: nested_if_deep @ 00101250 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
  int e_local;
  int d_local;
  int c_local;
  int b_local;
  int a_local;
  undefined4 local_c;
  
  if (a < 1) {
    local_c = 0;
  }
  else if (b < 1) {
    local_c = 1;
  }
  else if (c < 1) {
    local_c = 2;
  }
  else if (d < 1) {
    local_c = 3;
  }
  else if (e < 1) {
    local_c = 4;
  }
  else {
    local_c = 5;
  }
  return local_c;
}



/* Function: if_elseif_chain @ 001012e0 */

int if_elseif_chain(int x)

{
  int x_local;
  undefined4 local_c;
  
  if (x == 0) {
    local_c = 10;
  }
  else if (x == 1) {
    local_c = 0x14;
  }
  else if (x == 2) {
    local_c = 0x1e;
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: if_elseif_long @ 00101340 */

int if_elseif_long(int x)

{
  int x_local;
  undefined4 local_c;
  
  if (x == 0) {
    local_c = 100;
  }
  else if (x == 1) {
    local_c = 200;
  }
  else if (x == 2) {
    local_c = 300;
  }
  else if (x == 3) {
    local_c = 400;
  }
  else if (x == 4) {
    local_c = 500;
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: switch_small @ 001013d0 */

int switch_small(int op)

{
  int b;
  int a;
  int op_local;
  int local_c;
  
  switch(op) {
  case 0:
    local_c = 0xf;
    break;
  case 1:
    local_c = 5;
    break;
  case 2:
    local_c = 0x32;
    break;
  case 3:
    local_c = 2;
    break;
  default:
    local_c = -1;
  }
  return local_c;
}



/* Function: switch_large @ 00101450 */

int switch_large(int op)

{
  int op_local;
  int local_c;
  
  switch(op) {
  case 0:
    local_c = 0;
    break;
  case 1:
    local_c = 10;
    break;
  case 2:
    local_c = 0x14;
    break;
  case 3:
    local_c = 0x1e;
    break;
  case 4:
    local_c = 0x28;
    break;
  case 5:
    local_c = 0x32;
    break;
  case 6:
    local_c = 0x3c;
    break;
  case 7:
    local_c = 0x46;
    break;
  case 8:
    local_c = 0x50;
    break;
  case 9:
    local_c = 0x5a;
    break;
  default:
    local_c = -1;
  }
  return local_c;
}



/* Function: switch_default @ 00101500 */

int switch_default(int op)

{
  int op_local;
  undefined4 local_c;
  
  if (op == 1) {
    local_c = 100;
  }
  else if (op == 2) {
    local_c = 200;
  }
  else if (op == 3) {
    local_c = 300;
  }
  else {
    local_c = 0;
  }
  return local_c;
}



/* Function: switch_fallthrough @ 00101570 */

int switch_fallthrough(int op)

{
  int result;
  int op_local;
  
  result = 0;
  if (op != 1) {
    if (op != 2) {
      if (op != 3) {
        return -1;
      }
      result = 0xc;
    }
    result = op * 2 + result;
  }
  return op + result;
}



/* Function: loop_for_fixed @ 001015f0 */

int loop_for_fixed(int n)

{
  int i;
  int sum;
  int n_local;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = i + sum;
  }
  return sum;
}



/* Function: loop_while @ 00101630 */

int loop_while(int x)

{
  undefined4 local_14;
  int count;
  int x_local;
  
  count = 0;
  for (x_local = x; x_local != 0; x_local = x_local / 10) {
    count = count + 1;
  }
  if (count < 1) {
    local_14 = 1;
  }
  else {
    local_14 = count;
  }
  return local_14;
}



/* Function: loop_dowhile @ 00101690 */

int loop_dowhile(int x)

{
  int count;
  int x_local;
  
  count = 0;
  x_local = x;
  do {
    x_local = x_local / 10;
    count = count + 1;
  } while (x_local != 0);
  return count;
}



/* Function: loop_nested @ 001016d0 */

int loop_nested(int m,int n)

{
  int j;
  int i;
  int total;
  int n_local;
  int m_local;
  
  total = 0;
  for (i = 0; i < m; i = i + 1) {
    for (j = 0; j < n; j = j + 1) {
      total = total + 1;
    }
  }
  return total;
}



/* Function: loop_break @ 00101740 */

int loop_break(int target)

{
  int i;
  int n;
  int arr [5];
  int target_local;
  
  arr[0] = 10;
  arr[1] = 0x14;
  arr[2] = 0x1e;
  arr[3] = 0x28;
  arr[4] = 0x32;
  i = 0;
  while( true ) {
    if (4 < i) {
      return -1;
    }
    if (arr[i] == target) break;
    i = i + 1;
  }
  return i;
}



/* Function: loop_continue @ 001017c0 */

int loop_continue(int n)

{
  int i;
  int sum;
  int n_local;
  
  sum = 0;
  for (i = 1; i <= n; i = i + 1) {
    if (i % 2 != 0) {
      sum = i + sum;
    }
  }
  return sum;
}



/* Function: goto_forward @ 00101820 */

int goto_forward(int x)

{
  int result;
  int x_local;
  
  result = x;
  if (0 < x) {
    result = x * x;
  }
  return result << 1;
}



/* Function: goto_backward @ 00101860 */

int goto_backward(int x)

{
  int i;
  int result;
  int x_local;
  undefined4 local_c;
  
  if (x < 1) {
    local_c = 1;
  }
  else {
    result = 1;
    for (i = 1; i <= x; i = i + 1) {
      result = i * result;
    }
    local_c = result;
  }
  return local_c;
}



/* Function: ternary_op @ 001018c0 */

int ternary_op(int a,int b)

{
  int local_14;
  int b_local;
  int a_local;
  
  local_14 = b;
  if (b < a) {
    local_14 = a;
  }
  return local_14;
}



/* Function: test_control_flow_l1 @ 001018f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
  uint uVar1;
  
  printf(&DAT_001030e4);
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



/* Function: loop_multi_exit @ 00101c00 */

int loop_multi_exit(int target)

{
  int j;
  int i;
  int matrix [3] [4];
  int target_local;
  
  memcpy(matrix,&DAT_001030a0,0x30);
  i = 0;
  do {
    if (2 < i) {
      return -1;
    }
    for (j = 0; j < 4; j = j + 1) {
      if (matrix[i][j] == target) {
        return i * 10 + j;
      }
    }
    i = i + 1;
  } while( true );
}



/* Function: infinite_loop @ 00101cb0 */

int infinite_loop(int *flag)

{
  int count;
  int *flag_local;
  
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



/* Function: multi_return @ 00101d10 */

int multi_return(int x)

{
  int temp;
  int x_local;
  undefined4 local_c;
  
  if (x < 0) {
    local_c = -1;
  }
  else {
    local_c = x << 1;
    if (local_c < 0x65) {
      if (x % 2 != 0) {
        local_c = x + 1;
      }
    }
    else {
      local_c = -2;
    }
  }
  return local_c;
}



/* Function: conditional_return @ 00101d80 */

int conditional_return(int x)

{
  undefined4 local_14;
  undefined4 local_10;
  int x_local;
  
  if (x < 1) {
    if (x < 0) {
      local_14 = -x;
    }
    else {
      local_14 = 0;
    }
    local_10 = local_14;
  }
  else {
    local_10 = x << 1;
  }
  return local_10;
}



/* Function: duffs_device @ 00101dd0 */

int duffs_device(int *dst,int *src,int n)

{
  int iVar1;
  int count;
  int n_local;
  int *src_local;
  int *dst_local;
  int local_c;
  
  if (n < 1) {
    local_c = -1;
  }
  else {
    iVar1 = n + 7;
    if (n + 7 < 0) {
      iVar1 = n + 0xe;
    }
    count = iVar1 >> 3;
    src_local = src;
    dst_local = dst;
    local_c = n;
    switch(n % 8) {
    case 0:
      src_local = src;
      dst_local = dst;
      do {
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101e40_caseD_7:
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101e40_caseD_6:
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101e40_caseD_5:
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101e40_caseD_4:
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101e40_caseD_3:
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101e40_caseD_2:
        *dst_local = *src_local;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
switchD_00101e40_caseD_1:
        *dst_local = *src_local;
        count = count + -1;
        src_local = src_local + 1;
        dst_local = dst_local + 1;
      } while (0 < count);
      break;
    case 1:
      goto switchD_00101e40_caseD_1;
    case 2:
      goto switchD_00101e40_caseD_2;
    case 3:
      goto switchD_00101e40_caseD_3;
    case 4:
      goto switchD_00101e40_caseD_4;
    case 5:
      goto switchD_00101e40_caseD_5;
    case 6:
      goto switchD_00101e40_caseD_6;
    case 7:
      goto switchD_00101e40_caseD_7;
    }
  }
  return local_c;
}



/* Function: loop_complex_cond @ 00101f80 */

int loop_complex_cond(int x)

{
  bool bVar1;
  int c;
  int b;
  int a;
  int x_local;
  
  a = 0;
  c = 0;
  b = x;
  while( true ) {
    bVar1 = false;
    if ((a < b) && (bVar1 = false, c < 10)) {
      bVar1 = 0 < b;
    }
    if (!bVar1) break;
    a = a + 2;
    b = b + -1;
    c = c + 1;
  }
  return a + b + c;
}



/* Function: loop_modify_var @ 00102000 */

int loop_modify_var(int n)

{
  int i;
  int sum;
  int n_local;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = i + sum;
    if (5 < i) {
      i = i + 2;
    }
  }
  return sum;
}



/* Function: loop_external_state @ 00102060 */

int loop_external_state(int *flag)

{
  int count;
  int *flag_local;
  
  count = 0;
  do {
    if (*flag != 0) {
      return count;
    }
    count = count + 1;
  } while (count < 0x65);
  return count;
}



/* Function: recursion_factorial @ 001020a0 */

int recursion_factorial(int n)

{
  int n_local;
  undefined4 local_c;
  
  if (n < 2) {
    local_c = 1;
  }
  else {
    local_c = recursion_factorial(n + -1);
    local_c = n * local_c;
  }
  return local_c;
}



/* Function: tail_recursion @ 001020f0 */

int tail_recursion(int n,int acc)

{
  int acc_local;
  int n_local;
  undefined4 local_c;
  
  local_c = acc;
  if (1 < n) {
    local_c = tail_recursion(n + -1,n * acc);
  }
  return local_c;
}



/* Function: indirect_recursion_a @ 00102140 */

int indirect_recursion_a(int n,int depth)

{
  int depth_local;
  int n_local;
  undefined4 local_c;
  
  local_c = n;
  if (0 < depth) {
    if (n % 2 == 0) {
      local_c = indirect_recursion_b(n / 2,depth + -1);
    }
    else {
      local_c = indirect_recursion_b(n * 3 + 1,depth + -1);
    }
  }
  return local_c;
}



/* Function: indirect_recursion_b @ 001021c0 */

int indirect_recursion_b(int n,int depth)

{
  int depth_local;
  int n_local;
  undefined4 local_c;
  
  local_c = n;
  if (0 < depth) {
    local_c = indirect_recursion_a(n + 1,depth + -1);
  }
  return local_c;
}



/* Function: call_func_ptr @ 00102200 */

int call_func_ptr(_func_int_int *f,int x)

{
  int iVar1;
  int x_local;
  _func_int_int *f_local;
  
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: call_func_ptr_array @ 00102220 */

int call_func_ptr_array(int idx,int x)

{
  _func_int_int *funcs [3];
  int x_local;
  int idx_local;
  int local_c;
  
  funcs[0] = double_value;
  funcs[1] = triple_value;
  funcs[2] = recursion_factorial;
  if ((idx < 0) || (2 < idx)) {
    local_c = -1;
  }
  else {
    local_c = (*funcs[idx])(x);
  }
  return local_c;
}



/* Function: double_value @ 00102290 */

int double_value(int x)

{
  int x_local;
  
  return x << 1;
}



/* Function: triple_value @ 001022a0 */

int triple_value(int x)

{
  int x_local;
  
  return x * 3;
}



/* Function: call_virtual_func @ 001022b0 */

int call_virtual_func(void *obj,int x)

{
  int x_local;
  void *obj_local;
  
  return x << 1;
}



/* Function: process_with_callback @ 001022d0 */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
  int iVar1;
  int i;
  int sum;
  _func_int_int *cb_local;
  int n_local;
  int *arr_local;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    iVar1 = (*cb)(arr[i]);
    sum = iVar1 + sum;
  }
  return sum;
}



/* Function: test_control_flow_l2 @ 00102330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
  uint uVar1;
  int arr [5];
  int ext_flag;
  int dst [8];
  int src [8];
  int flag;
  
  printf(&DAT_00103352);
  uVar1 = loop_multi_exit(7);
  printf("CF-L2-01 (loop_multi_exit): %d\n",(ulong)uVar1);
  flag = 0;
  uVar1 = infinite_loop(&flag);
  printf("CF-L2-02 (infinite_loop): %d\n",(ulong)uVar1);
  uVar1 = multi_return(-5);
  printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar1);
  uVar1 = multi_return(100);
  printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar1);
  uVar1 = multi_return(3);
  printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar1);
  uVar1 = conditional_return(5);
  printf("CF-L2-04 (conditional_return): %d\n",(ulong)uVar1);
  conditional_return(-5);
  printf("CF-L2-04 (conditional_return): %d\n");
  src[0] = 1;
  src[1] = 2;
  src[2] = 3;
  src[3] = 4;
  src[4] = 5;
  src[5] = 6;
  src[6] = 7;
  src[7] = 8;
  memset(dst,0,0x20);
  uVar1 = duffs_device(dst,src,8);
  printf("CF-L2-05 (duffs_device): %d\n",(ulong)uVar1);
  uVar1 = loop_complex_cond(10);
  printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar1);
  uVar1 = loop_modify_var(10);
  printf("CF-L2-07 (loop_modify_var): %d\n",(ulong)uVar1);
  ext_flag = 0;
  uVar1 = loop_external_state(&ext_flag);
  printf("CF-L2-08 (loop_external_state): %d\n",(ulong)uVar1);
  uVar1 = recursion_factorial(5);
  printf("CF-L2-09 (recursion_factorial): %d\n",(ulong)uVar1);
  uVar1 = tail_recursion(5,1);
  printf("CF-L2-10 (tail_recursion): %d\n",(ulong)uVar1);
  uVar1 = indirect_recursion_a(10,3);
  printf("CF-L2-11 (indirect_recursion): %d\n",(ulong)uVar1);
  uVar1 = call_func_ptr(double_value,5);
  printf("CF-L2-12 (call_func_ptr): %d\n",(ulong)uVar1);
  uVar1 = call_func_ptr_array(0,5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",(ulong)uVar1);
  uVar1 = call_func_ptr_array(2,5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",(ulong)uVar1);
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  uVar1 = process_with_callback(arr,5,double_value);
  printf("CF-L2-15 (process_with_callback): %d\n",(ulong)uVar1);
  return;
}



/* Function: non_local_jump @ 001025c0 */

int non_local_jump(int x)

{
  int iVar1;
  int x_local;
  int local_c;
  
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
    local_c = x << 1;
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: cpp_exception @ 00102640 */

int cpp_exception(int x)

{
  int x_local;
  undefined4 local_c;
  
  if (x < 0) {
    local_c = -1;
  }
  else if (x < 0x65) {
    local_c = x << 1;
  }
  else {
    local_c = -2;
  }
  return local_c;
}



/* Function: large_jump_table @ 00102690 */

int large_jump_table(int op,int a,int b)

{
  _func_int_int_int *ops [10];
  int b_local;
  int a_local;
  int op_local;
  int local_c;
  
  memcpy(ops,&PTR_op_add_00105d60,0x50);
  if ((op < 0) || (9 < op)) {
    local_c = -1;
  }
  else {
    local_c = (*ops[op])(a,b);
  }
  return local_c;
}



/* Function: op_add @ 00102700 */

int op_add(int a,int b)

{
  int b_local;
  int a_local;
  
  return a + b;
}



/* Function: op_sub @ 00102720 */

int op_sub(int a,int b)

{
  int b_local;
  int a_local;
  
  return a - b;
}



/* Function: op_mul @ 00102740 */

int op_mul(int a,int b)

{
  int b_local;
  int a_local;
  
  return a * b;
}



/* Function: op_div @ 00102760 */

int op_div(int a,int b)

{
  undefined4 local_14;
  int b_local;
  int a_local;
  
  if (b == 0) {
    local_14 = 0;
  }
  else {
    local_14 = a / b;
  }
  return local_14;
}



/* Function: op_mod @ 001027a0 */

int op_mod(int a,int b)

{
  undefined4 local_14;
  int b_local;
  int a_local;
  
  if (b == 0) {
    local_14 = 0;
  }
  else {
    local_14 = a % b;
  }
  return local_14;
}



/* Function: op_and @ 001027e0 */

int op_and(int a,int b)

{
  int b_local;
  int a_local;
  
  return a & b;
}



/* Function: op_or @ 00102800 */

int op_or(int a,int b)

{
  int b_local;
  int a_local;
  
  return a | b;
}



/* Function: op_xor @ 00102820 */

int op_xor(int a,int b)

{
  int b_local;
  int a_local;
  
  return a ^ b;
}



/* Function: op_shl @ 00102840 */

int op_shl(int a,int b)

{
  int b_local;
  int a_local;
  
  return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 00102860 */

int op_shr(int a,int b)

{
  int b_local;
  int a_local;
  
  return a >> ((byte)b & 0x1f);
}



/* Function: conditional_func_ptr @ 00102880 */

int conditional_func_ptr(int mode,int x)

{
  int iVar1;
  _func_int_int *func;
  int x_local;
  int mode_local;
  
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



/* Function: state_machine @ 001028f0 */

int state_machine(int event,int state)

{
  int state_local;
  int event_local;
  int local_c;
  
  switch(state) {
  case 0:
    if (event == 1) {
      local_c = 1;
    }
    else {
      local_c = 0;
    }
    break;
  case 1:
    if (event == 2) {
      local_c = 2;
    }
    else if (event == 99) {
      local_c = 3;
    }
    else {
      local_c = 1;
    }
    break;
  case 2:
    local_c = 2;
    break;
  case 3:
    if (event == 0) {
      local_c = 0;
    }
    else {
      local_c = 3;
    }
    break;
  default:
    local_c = 3;
  }
  return local_c;
}



/* Function: fsm_func_table @ 001029c0 */

int fsm_func_table(int event,int state)

{
  _func_int_int *state_handlers [4];
  int state_local;
  int event_local;
  int local_c;
  
  state_handlers[0] = state_idle;
  state_handlers[1] = state_processing;
  state_handlers[2] = state_done;
  state_handlers[3] = state_error;
  if ((state < 0) || (3 < state)) {
    local_c = 3;
  }
  else {
    local_c = (*state_handlers[state])(event);
  }
  return local_c;
}



/* Function: state_idle @ 00102a40 */

int state_idle(int event)

{
  int event_local;
  
  return (uint)(event == 1);
}



/* Function: state_processing @ 00102a60 */

int state_processing(int event)

{
  int event_local;
  undefined4 local_c;
  
  if (event == 2) {
    local_c = 2;
  }
  else if (event == 99) {
    local_c = 3;
  }
  else {
    local_c = 1;
  }
  return local_c;
}



/* Function: state_done @ 00102aa0 */

int state_done(int event)

{
  int event_local;
  
  return 2;
}



/* Function: state_error @ 00102ab0 */

int state_error(int event)

{
  int iVar1;
  int event_local;
  
  iVar1 = 3;
  if (event == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: computed_goto @ 00102ad0 */

int computed_goto(int *labels,int idx)

{
  int iVar1;
  void *targets [4];
  int idx_local;
  int *labels_local;
  
  targets[0] = &DAT_00102b39;
  targets[1] = &DAT_00102b45;
  targets[2] = &DAT_00102b51;
  targets[3] = &DAT_00102b5d;
  if ((-1 < idx) && (idx < 4)) {
                    /* WARNING: Could not recover jumptable at 0x00102b6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*targets[idx])();
    return iVar1;
  }
  return -1;
}



/* Function: obfuscated_cf @ 00102b70 */

int obfuscated_cf(int x)

{
  int result;
  int x_local;
  
  result = x;
  if (x * x + 1 < 0) {
    result = x * 2 + 1;
  }
  return result << 1;
}



/* Function: opaque_predicate @ 00102bb0 */

/* WARNING: Removing unreachable block (ram,0x00102bdf) */

int opaque_predicate(int x)

{
  int cond;
  int x_local;
  
  return x << 1;
}



/* Function: overlapped_code @ 00102bf0 */

int overlapped_code(int x)

{
  int x_local;
  undefined4 local_c;
  
  if ((x & 1U) == 0) {
    local_c = x / 2;
  }
  else {
    local_c = x * 3 + 1;
  }
  return local_c;
}



/* Function: test_control_flow_l3 @ 00102c30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
  uint uVar1;
  int labels [4];
  
  printf(&DAT_00103546);
  uVar1 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
  uVar1 = non_local_jump(-5);
  printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
  uVar1 = cpp_exception(5);
  printf("CF-L3-02 (cpp_exception): %d\n",(ulong)uVar1);
  uVar1 = cpp_exception(-5);
  printf("CF-L3-02 (cpp_exception): %d\n",(ulong)uVar1);
  uVar1 = large_jump_table(0,10,5);
  printf("CF-L3-03 (large_jump_table): %d\n",(ulong)uVar1);
  conditional_func_ptr(0,5);
  printf("CF-L3-04 (conditional_func_ptr): %d\n");
  uVar1 = state_machine(1,0);
  printf("CF-L3-05 (state_machine): %d\n",(ulong)uVar1);
  uVar1 = fsm_func_table(2,1);
  printf("CF-L3-06 (fsm_func_table): %d\n",(ulong)uVar1);
  labels[0] = 0;
  labels[1] = 1;
  labels[2] = 2;
  labels[3] = 3;
  uVar1 = computed_goto(labels,2);
  printf("CF-L3-07 (computed_goto): %d\n",(ulong)uVar1);
  uVar1 = obfuscated_cf(5);
  printf("CF-L3-08 (obfuscated_cf): %d\n",(ulong)uVar1);
  uVar1 = opaque_predicate(5);
  printf("CF-L3-09 (opaque_predicate): %d\n",(ulong)uVar1);
  uVar1 = overlapped_code(5);
  printf("CF-L3-10 (overlapped_code): %d\n",(ulong)uVar1);
  return;
}



/* Function: main @ 00102db0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: _fini @ 00102dd8 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 73 */
