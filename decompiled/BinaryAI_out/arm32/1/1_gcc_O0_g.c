// Decompiled by BinaryAI
// SHA256: 373574e84ccf23ce421d67e09cb0ed2948c153501d49b052e26bf4f780c28479

// Function: _init @ 0x10424
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::raise @ 0x10444
int raise(int __sig)
{
  int iVar1;
  iVar1 = raise(__sig);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10450
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::printf @ 0x1045c
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x10468
void longjmp(__jmp_buf_tag *__env,int __val)
{
  longjmp(__env,__val);
}

// Function: <EXTERNAL>::_setjmp @ 0x10474
int _setjmp(__jmp_buf_tag *__env)
{
  int iVar1;
  iVar1 = _setjmp(__env);
  return iVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10480
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::puts @ 0x1048c
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x104a4
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x104b0
void abort(void)
{
  abort();
}

// Function: _start @ 0x104bc
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x10500
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x10524
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x10550
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x10588
void __do_global_dtors_aux(void)
{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}

// Function: sequential_ops @ 0x105b4
int sequential_ops(int param_1,int param_2,int param_3)
{
  return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x1060c
int single_if(int param_1)
{
  int local_c;
  local_c = param_1;
  if (0 < param_1) {
    local_c = param_1 << 1;
  }
  return local_c;
}

// Function: if_else @ 0x10648
bool if_else(int param_1)
{
  return 0 < param_1;
}

// Function: nested_if_2 @ 0x10680
int nested_if_2(int param_1,int param_2)
{
  if (param_1 < 1) {
    param_1 = 0;
  }
  else if (0 < param_2) {
    param_1 = param_1 + param_2;
  }
  return param_1;
}

// Function: nested_if_deep @ 0x106d8
undefined4 nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  undefined4 uVar1;
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else if (param_2 < 1) {
    uVar1 = 1;
  }
  else if (param_3 < 1) {
    uVar1 = 2;
  }
  else if (param_4 < 1) {
    uVar1 = 3;
  }
  else if (param_5 < 1) {
    uVar1 = 4;
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}

// Function: if_elseif_chain @ 0x1076c
undefined4 if_elseif_chain(int param_1)
{
  undefined4 uVar1;
  if (param_1 == 0) {
    uVar1 = 10;
  }
  else if (param_1 == 1) {
    uVar1 = 0x14;
  }
  else if (param_1 == 2) {
    uVar1 = 0x1e;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// Function: if_elseif_long @ 0x107cc
undefined4 if_elseif_long(int param_1)
{
  undefined4 uVar1;
  if (param_1 == 0) {
    uVar1 = 100;
  }
  else if (param_1 == 1) {
    uVar1 = 200;
  }
  else if (param_1 == 2) {
    uVar1 = 300;
  }
  else if (param_1 == 3) {
    uVar1 = 400;
  }
  else if (param_1 == 4) {
    uVar1 = 500;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// Function: switch_small @ 0x10854
undefined4 switch_small(undefined4 param_1)
{
  undefined4 uVar1;
  switch(param_1) {
  case 0:
    uVar1 = 0xf;
    break;
  case 1:
    uVar1 = 5;
    break;
  case 2:
    uVar1 = 0x32;
    break;
  case 3:
    uVar1 = __aeabi_idiv(10,5);
    break;
  default:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// Function: switch_large @ 0x108e8
undefined4 switch_large(undefined4 param_1)
{
  undefined4 uVar1;
  switch(param_1) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 10;
    break;
  case 2:
    uVar1 = 0x14;
    break;
  case 3:
    uVar1 = 0x1e;
    break;
  case 4:
    uVar1 = 0x28;
    break;
  case 5:
    uVar1 = 0x32;
    break;
  case 6:
    uVar1 = 0x3c;
    break;
  case 7:
    uVar1 = 0x46;
    break;
  case 8:
    uVar1 = 0x50;
    break;
  case 9:
    uVar1 = 0x5a;
    break;
  default:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// Function: switch_default @ 0x10994
undefined4 switch_default(int param_1)
{
  if (param_1 == 3) {
    return 300;
  }
  if (param_1 < 4) {
    if (param_1 == 1) {
      return 100;
    }
    if (param_1 == 2) {
      return 200;
    }
  }
  return 0;
}

// Function: switch_fallthrough @ 0x10a04
int switch_fallthrough(int param_1)
{
  int local_c;
  local_c = 0;
  if (param_1 == 3) {
    local_c = 0xc;
LAB_00010a64:
    local_c = local_c + param_1 * 2;
LAB_00010a78:
    local_c = local_c + param_1;
  }
  else {
    if (param_1 < 4) {
      if (param_1 == 1) goto LAB_00010a78;
      if (param_1 == 2) goto LAB_00010a64;
    }
    local_c = -1;
  }
  return local_c;
}

// Function: loop_for_fixed @ 0x10aa8
int loop_for_fixed(int param_1)
{
  int local_10;
  int local_c;
  local_10 = 0;
  for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
    local_10 = local_10 + local_c;
  }
  return local_10;
}

// Function: loop_while @ 0x10b0c
undefined8 loop_while(int param_1,int param_2)
{
  int local_14;
  int local_c;
  local_c = 0;
  for (local_14 = param_1; local_14 != 0; local_14 = local_14 / 10) {
    param_2 = local_14 * 0x66666667;
    local_c = local_c + 1;
  }
  if (local_c < 1) {
    local_c = 1;
  }
  return CONCAT44(param_2,local_c);
}

// Function: loop_dowhile @ 0x10b80
undefined8 loop_dowhile(int param_1)
{
  int iVar1;
  int local_14;
  int local_c;
  local_c = 0;
  local_14 = param_1;
  do {
    iVar1 = local_14 * 0x66666667;
    local_14 = local_14 / 10;
    local_c = local_c + 1;
  } while (local_14 != 0);
  return CONCAT44(iVar1,local_c);
}

// Function: loop_nested @ 0x10be4
int loop_nested(int param_1,int param_2)
{
  int local_14;
  int local_10;
  int local_c;
  local_14 = 0;
  for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
    for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
      local_14 = local_14 + 1;
    }
  }
  return local_14;
}

// Function: loop_break @ 0x10c70
int loop_break(int param_1)
{
  int local_28;
  int local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  local_c = 0;
  local_20[0] = 10;
  local_20[1] = 0x14;
  local_20[2] = 0x1e;
  local_20[3] = 0x28;
  local_10 = 0x32;
  local_28 = 0;
  while( true ) {
    if (4 < local_28) {
      return -1;
    }
    if (param_1 == local_20[local_28]) break;
    local_28 = local_28 + 1;
  }
  return local_28;
}

// Function: loop_continue @ 0x10d38
int loop_continue(int param_1)
{
  int local_10;
  uint local_c;
  local_10 = 0;
  for (local_c = 1; (int)local_c <= param_1; local_c = local_c + 1) {
    if ((local_c & 1) != 0) {
      local_10 = local_10 + local_c;
    }
  }
  return local_10;
}

// Function: goto_forward @ 0x10db4
int goto_forward(int param_1)
{
  int local_c;
  local_c = param_1;
  if (0 < param_1) {
    local_c = param_1 * param_1;
  }
  return local_c << 1;
}

// Function: goto_backward @ 0x10e10
int goto_backward(int param_1)
{
  int local_10;
  int local_c;
  if (param_1 < 1) {
    local_10 = 1;
  }
  else {
    local_10 = 1;
    for (local_c = 1; local_c <= param_1; local_c = local_c + 1) {
      local_10 = local_c * local_10;
    }
  }
  return local_10;
}

// Function: ternary_op @ 0x10e8c
int ternary_op(int param_1,int param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}

// Function: test_control_flow_l1 @ 0x10ec4
int test_control_flow_l1(void)
{
  undefined4 uVar1;
  int iVar2;
  puts(&DAT_00012aa8);
  uVar1 = sequential_ops(5,7,3);
  printf("CF-L1-01 (sequential_ops): %d\n",uVar1);
  uVar1 = single_if(10);
  printf("CF-L1-02 (single_if): %d\n",uVar1);
  uVar1 = single_if(0xfffffffb);
  printf("CF-L1-02 (single_if): %d\n",uVar1);
  uVar1 = if_else(5);
  printf("CF-L1-03 (if_else): %d\n",uVar1);
  uVar1 = if_else(0xfffffffd);
  printf("CF-L1-03 (if_else): %d\n",uVar1);
  uVar1 = nested_if_2(10,5);
  printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
  uVar1 = nested_if_2(10,0xfffffffb);
  printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
  uVar1 = nested_if_2(0xfffffff6,5);
  printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
  uVar1 = nested_if_deep(1,1,1,1,1);
  printf("CF-L1-05 (nested_if_deep): %d\n",uVar1);
  uVar1 = if_elseif_chain(1);
  printf("CF-L1-06 (if_elseif_chain): %d\n",uVar1);
  uVar1 = if_elseif_long(3);
  printf("CF-L1-07 (if_elseif_long): %d\n",uVar1);
  uVar1 = switch_small(2);
  printf("CF-L1-08 (switch_small): %d\n",uVar1);
  uVar1 = switch_large(7);
  printf("CF-L1-09 (switch_large): %d\n",uVar1);
  uVar1 = switch_default(5);
  printf("CF-L1-10 (switch_default): %d\n",uVar1);
  uVar1 = switch_fallthrough(3);
  printf("CF-L1-11 (switch_fallthrough): %d\n",uVar1);
  uVar1 = loop_for_fixed(10);
  printf("CF-L1-12 (loop_for_fixed): %d\n",uVar1);
  uVar1 = loop_while(0x3039);
  printf("CF-L1-13 (loop_while): %d\n",uVar1);
  uVar1 = loop_dowhile(0x2694);
  printf("CF-L1-14 (loop_dowhile): %d\n",uVar1);
  uVar1 = loop_nested(3,4);
  printf("CF-L1-15 (loop_nested): %d\n",uVar1);
  uVar1 = loop_break(0x1e);
  printf("CF-L1-16 (loop_break): %d\n",uVar1);
  uVar1 = loop_break(99);
  printf("CF-L1-16 (loop_break): %d\n",uVar1);
  uVar1 = loop_continue(10);
  printf("CF-L1-17 (loop_continue): %d\n",uVar1);
  uVar1 = goto_forward(5);
  printf("CF-L1-18 (goto_forward): %d\n",uVar1);
  uVar1 = goto_forward(0xfffffffd);
  printf("CF-L1-18 (goto_forward): %d\n",uVar1);
  uVar1 = goto_backward(5);
  printf("CF-L1-19 (goto_backward): %d\n",uVar1);
  uVar1 = ternary_op(10,5);
  printf("CF-L1-20 (ternary_op): %d\n",uVar1);
  uVar1 = ternary_op(3,8);
  iVar2 = printf("CF-L1-20 (ternary_op): %d\n",uVar1);
  return iVar2;
}

// Function: loop_multi_exit @ 0x111fc
int loop_multi_exit(int param_1)
{
  int local_44;
  int local_40;
  int local_3c [4];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  local_c = 0;
  local_3c[0] = 1;
  local_3c[1] = 2;
  local_3c[2] = 3;
  local_3c[3] = 4;
  local_2c = 5;
  uStack_28 = 6;
  uStack_24 = 7;
  uStack_20 = 8;
  local_1c = 9;
  uStack_18 = 10;
  uStack_14 = 0xb;
  uStack_10 = 0xc;
  local_44 = 0;
  do {
    if (2 < local_44) {
      return -1;
    }
    for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
      if (param_1 == local_3c[local_44 * 4 + local_40]) {
        return local_44 * 10 + local_40;
      }
    }
    local_44 = local_44 + 1;
  } while( true );
}

// Function: infinite_loop @ 0x1130c
int infinite_loop(int *param_1)
{
  int local_c;
  local_c = 0;
  do {
    if (*param_1 == 1) {
      return local_c;
    }
    local_c = local_c + 1;
  } while (local_c < 0x3e9);
  *param_1 = 1;
  return local_c;
}

// Function: multi_return @ 0x11374
int multi_return(uint param_1)
{
  int iVar1;
  if ((int)param_1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_1 << 1;
    if (iVar1 < 0x65) {
      if ((param_1 & 1) != 0) {
        iVar1 = param_1 + 1;
      }
    }
    else {
      iVar1 = -2;
    }
  }
  return iVar1;
}

// Function: conditional_return @ 0x113e8
int conditional_return(int param_1)
{
  if (param_1 < 1) {
    if (param_1 < 0) {
      param_1 = -param_1;
    }
    else {
      param_1 = 0;
    }
  }
  else {
    param_1 = param_1 << 1;
  }
  return param_1;
}

// Function: duffs_device @ 0x1143c
uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)
{
  uint uVar1;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_c;
  if ((int)param_3 < 1) {
    param_3 = 0xffffffff;
  }
  else {
    local_c = param_3 + 0xe;
    if (-1 < (int)(param_3 + 7)) {
      local_c = param_3 + 7;
    }
    local_c = local_c >> 3;
    uVar1 = param_3 & 7;
    if ((int)param_3 < 1) {
      uVar1 = -(-param_3 & 7);
    }
    local_18 = param_2;
    local_14 = param_1;
    switch(uVar1) {
    case 0:
      do {
        *local_14 = *local_18;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
switchD_000114a0_caseD_7:
        *local_14 = *local_18;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
switchD_000114a0_caseD_6:
        *local_14 = *local_18;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
switchD_000114a0_caseD_5:
        *local_14 = *local_18;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
switchD_000114a0_caseD_4:
        *local_14 = *local_18;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
switchD_000114a0_caseD_3:
        *local_14 = *local_18;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
switchD_000114a0_caseD_2:
        *local_14 = *local_18;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
switchD_000114a0_caseD_1:
        *local_14 = *local_18;
        local_c = local_c + -1;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      } while (0 < local_c);
      break;
    case 1:
      goto switchD_000114a0_caseD_1;
    case 2:
      goto switchD_000114a0_caseD_2;
    case 3:
      goto switchD_000114a0_caseD_3;
    case 4:
      goto switchD_000114a0_caseD_4;
    case 5:
      goto switchD_000114a0_caseD_5;
    case 6:
      goto switchD_000114a0_caseD_6;
    case 7:
      goto switchD_000114a0_caseD_7;
    }
  }
  return param_3;
}

// Function: loop_complex_cond @ 0x115f8
int loop_complex_cond(int param_1)
{
  int local_14;
  int local_10;
  int local_c;
  local_14 = 0;
  local_c = 0;
  for (local_10 = param_1; ((local_14 < local_10 && (local_c < 10)) && (0 < local_10));
      local_10 = local_10 + -1) {
    local_14 = local_14 + 2;
    local_c = local_c + 1;
  }
  return local_14 + local_10 + local_c;
}

// Function: loop_modify_var @ 0x11694
int loop_modify_var(int param_1)
{
  int local_10;
  int local_c;
  local_10 = 0;
  for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
    local_10 = local_10 + local_c;
    if (5 < local_c) {
      local_c = local_c + 2;
    }
  }
  return local_10;
}

// Function: loop_external_state @ 0x11710
int loop_external_state(int *param_1)
{
  int local_c;
  local_c = 0;
  do {
    if (*param_1 != 0) {
      return local_c;
    }
    local_c = local_c + 1;
  } while (local_c < 0x65);
  return local_c;
}

// Function: recursion_factorial @ 0x11770
int recursion_factorial(int param_1)
{
  int iVar1;
  if (param_1 < 2) {
    iVar1 = 1;
  }
  else {
    iVar1 = recursion_factorial(param_1 + -1);
    iVar1 = iVar1 * param_1;
  }
  return iVar1;
}

// Function: tail_recursion @ 0x117bc
int tail_recursion(int param_1,int param_2)
{
  if (1 < param_1) {
    param_2 = tail_recursion(param_1 + -1,param_2 * param_1);
  }
  return param_2;
}

// Function: indirect_recursion_a @ 0x11810
uint indirect_recursion_a(uint param_1,int param_2)
{
  if (0 < param_2) {
    if ((param_1 & 1) == 0) {
      param_1 = indirect_recursion_b((int)param_1 / 2,param_2 + -1);
    }
    else {
      param_1 = indirect_recursion_b(param_1 * 3 + 1,param_2 + -1);
    }
  }
  return param_1;
}

// Function: indirect_recursion_b @ 0x118b0
int indirect_recursion_b(int param_1,int param_2)
{
  if (0 < param_2) {
    param_1 = indirect_recursion_a(param_1 + 1,param_2 + -1);
  }
  return param_1;
}

// Function: call_func_ptr @ 0x11904
undefined4 call_func_ptr(code *param_1,undefined4 param_2)
{
  undefined4 uVar1;
  uVar1 = (*param_1)(param_2);
  return uVar1;
}

// Function: double_value @ 0x11934
int double_value(int param_1)
{
  return param_1 << 1;
}

// Function: triple_value @ 0x1195c
int triple_value(int param_1)
{
  return param_1 * 3;
}

// Function: call_func_ptr_array @ 0x1198c
code * call_func_ptr_array(int param_1,undefined4 param_2)
{
  code *pcVar1;
  code *pcVar2;
  code *apcStack_18 [3];
  int local_c;
  local_c = 0;
  pcVar1 = double_value;
  apcStack_18[0] = double_value;
  apcStack_18[1] = triple_value;
  apcStack_18[2] = recursion_factorial;
  if ((param_1 < 0) || (2 < param_1)) {
    pcVar2 = (code *)0xffffffff;
  }
  else {
    pcVar1 = (code *)(*apcStack_18[param_1])(param_2);
    pcVar2 = pcVar1;
  }
  if (local_c != 0) {
    __stack_chk_fail(pcVar1,local_c,0);
  }
  return pcVar2;
}

// Function: call_virtual_func @ 0x11a30
int call_virtual_func(undefined4 param_1,int param_2)
{
  return param_2 << 1;
}

// Function: process_with_callback @ 0x11a5c
int process_with_callback(int param_1,int param_2,code *param_3)
{
  int iVar1;
  int local_10;
  int local_c;
  local_10 = 0;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    iVar1 = (*param_3)(*(undefined4 *)(param_1 + local_c * 4));
    local_10 = local_10 + iVar1;
  }
  return local_10;
}

// Function: test_control_flow_l2 @ 0x11ae4
void test_control_flow_l2(void)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined auStack_2c [32];
  int local_c;
  local_c = 0;
  puts(&DAT_00012d6c);
  uVar1 = loop_multi_exit(7);
  printf("CF-L2-01 (loop_multi_exit): %d\n",uVar1);
  local_68 = 0;
  uVar1 = infinite_loop(&local_68);
  printf("CF-L2-02 (infinite_loop): %d\n",uVar1);
  uVar1 = multi_return(0xfffffffb);
  printf("CF-L2-03 (multi_return): %d\n",uVar1);
  uVar1 = multi_return(100);
  printf("CF-L2-03 (multi_return): %d\n",uVar1);
  uVar1 = multi_return(3);
  printf("CF-L2-03 (multi_return): %d\n",uVar1);
  uVar1 = conditional_return(5);
  printf("CF-L2-04 (conditional_return): %d\n",uVar1);
  uVar1 = conditional_return(0xfffffffb);
  printf("CF-L2-04 (conditional_return): %d\n",uVar1);
  local_4c = 1;
  uStack_48 = 2;
  uStack_44 = 3;
  uStack_40 = 4;
  local_3c = 5;
  uStack_38 = 6;
  uStack_34 = 7;
  uStack_30 = 8;
  memset(auStack_2c,0,0x20);
  uVar1 = duffs_device(auStack_2c,&local_4c,8);
  printf("CF-L2-05 (duffs_device): %d\n",uVar1);
  uVar1 = loop_complex_cond(10);
  printf("CF-L2-06 (loop_complex_cond): %d\n",uVar1);
  uVar1 = loop_modify_var(10);
  printf("CF-L2-07 (loop_modify_var): %d\n",uVar1);
  local_64 = 0;
  uVar1 = loop_external_state(&local_64);
  printf("CF-L2-08 (loop_external_state): %d\n",uVar1);
  uVar1 = recursion_factorial(5);
  printf("CF-L2-09 (recursion_factorial): %d\n",uVar1);
  uVar1 = tail_recursion(5,1);
  printf("CF-L2-10 (tail_recursion): %d\n",uVar1);
  uVar1 = indirect_recursion_a(10,3);
  printf("CF-L2-11 (indirect_recursion): %d\n",uVar1);
  uVar1 = call_func_ptr(double_value,5);
  printf("CF-L2-12 (call_func_ptr): %d\n",uVar1);
  uVar1 = call_func_ptr_array(0,5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
  uVar1 = call_func_ptr_array(2,5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
  local_60 = 1;
  uStack_5c = 2;
  uStack_58 = 3;
  uStack_54 = 4;
  local_50 = 5;
  uVar1 = process_with_callback(&local_60,5,double_value);
  iVar2 = printf("CF-L2-15 (process_with_callback): %d\n",uVar1);
  if (local_c != 0) {
    __stack_chk_fail(iVar2);
  }
  return;
}

// Function: non_local_jump @ 0x11dbc
int non_local_jump(int param_1)
{
  int iVar1;
  iVar1 = _setjmp((__jmp_buf_tag *)&jump_buffer);
  if (iVar1 == 0) {
    if (param_1 < 0) {
      longjmp((__jmp_buf_tag *)&jump_buffer,1);
    }
    if (100 < param_1) {
      longjmp((__jmp_buf_tag *)&jump_buffer,2);
    }
    param_1 = param_1 << 1;
  }
  else {
    param_1 = -1;
  }
  return param_1;
}

// Function: cpp_exception @ 0x11e30
int cpp_exception(int param_1)
{
  if (param_1 < 0) {
    param_1 = -1;
  }
  else if (param_1 < 0x65) {
    param_1 = param_1 << 1;
  }
  else {
    param_1 = -2;
  }
  return param_1;
}

// Function: op_add @ 0x11e80
int op_add(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: op_sub @ 0x11eb0
int op_sub(int param_1,int param_2)
{
  return param_1 - param_2;
}

// Function: op_mul @ 0x11ee0
int op_mul(int param_1,int param_2)
{
  return param_2 * param_1;
}

// Function: op_div @ 0x11f10
undefined4 op_div(undefined4 param_1,int param_2)
{
  undefined4 uVar1;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = __aeabi_idiv(param_1,param_2);
  }
  return uVar1;
}

// Function: op_mod @ 0x11f54
undefined4 op_mod(undefined4 param_1,int param_2)
{
  undefined4 extraout_r1;
  undefined4 uVar1;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __aeabi_idivmod(param_1,param_2);
    uVar1 = extraout_r1;
  }
  return uVar1;
}

// Function: op_and @ 0x11f9c
uint op_and(uint param_1,uint param_2)
{
  return param_2 & param_1;
}

// Function: op_or @ 0x11fcc
uint op_or(uint param_1,uint param_2)
{
  return param_1 | param_2;
}

// Function: op_xor @ 0x11ffc
uint op_xor(uint param_1,uint param_2)
{
  return param_2 ^ param_1;
}

// Function: op_shl @ 0x1202c
int op_shl(int param_1,uint param_2)
{
  return param_1 << (param_2 & 0xff);
}

// Function: op_shr @ 0x1205c
int op_shr(int param_1,uint param_2)
{
  return param_1 >> (param_2 & 0xff);
}

// Function: large_jump_table @ 0x1208c
code * large_jump_table(int param_1,undefined4 param_2,undefined4 param_3)
{
  code *pcVar1;
  code *pcVar2;
  code *apcStack_34 [4];
  code *pcStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  code *pcStack_10;
  int local_c;
  local_c = 0;
  apcStack_34[0] = op_add;
  apcStack_34[1] = op_sub;
  apcStack_34[2] = op_mul;
  apcStack_34[3] = op_div;
  pcStack_24 = op_mod;
  pcStack_20 = op_and;
  pcStack_1c = op_or;
  pcStack_18 = op_xor;
  pcVar1 = op_shl;
  pcStack_14 = op_shl;
  pcStack_10 = op_shr;
  if ((param_1 < 0) || (9 < param_1)) {
    pcVar2 = (code *)0xffffffff;
  }
  else {
    pcVar1 = (code *)(*apcStack_34[param_1])(param_2,param_3);
    pcVar2 = pcVar1;
  }
  if (local_c != 0) {
    __stack_chk_fail(pcVar1,local_c,0);
  }
  return pcVar2;
}

// Function: conditional_func_ptr @ 0x1214c
undefined4 conditional_func_ptr(int param_1,undefined4 param_2)
{
  undefined4 uVar1;
  code *local_c;
  if (param_1 == 0) {
    local_c = double_value;
  }
  else if (param_1 == 1) {
    local_c = triple_value;
  }
  else {
    local_c = recursion_factorial;
  }
  uVar1 = (*local_c)(param_2);
  return uVar1;
}

// Function: state_machine @ 0x121c0
undefined4 state_machine(int param_1,undefined4 param_2)
{
  undefined4 uVar1;
  switch(param_2) {
  case 0:
    if (param_1 == 1) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    break;
  case 1:
    if (param_1 == 2) {
      uVar1 = 2;
    }
    else if (param_1 == 99) {
      uVar1 = 3;
    }
    else {
      uVar1 = 1;
    }
    break;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 3;
    }
    break;
  default:
    uVar1 = 3;
  }
  return uVar1;
}

// Function: state_idle @ 0x12278
bool state_idle(int param_1)
{
  return param_1 == 1;
}

// Function: state_processing @ 0x122ac
undefined4 state_processing(int param_1)
{
  undefined4 uVar1;
  if (param_1 == 2) {
    uVar1 = 2;
  }
  else if (param_1 == 99) {
    uVar1 = 3;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// Function: state_done @ 0x122f8
undefined4 state_done(void)
{
  return 2;
}

// Function: state_error @ 0x1231c
undefined4 state_error(int param_1)
{
  undefined4 uVar1;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

// Function: fsm_func_table @ 0x12354
code * fsm_func_table(undefined4 param_1,int param_2)
{
  code *pcVar1;
  code *pcVar2;
  code *apcStack_1c [4];
  int local_c;
  local_c = 0;
  pcVar1 = state_idle;
  apcStack_1c[0] = state_idle;
  apcStack_1c[1] = state_processing;
  apcStack_1c[2] = state_done;
  apcStack_1c[3] = state_error;
  if ((param_2 < 0) || (3 < param_2)) {
    pcVar2 = (code *)0x3;
  }
  else {
    pcVar1 = (code *)(*apcStack_1c[param_2])(param_1);
    pcVar2 = pcVar1;
  }
  if (local_c != 0) {
    __stack_chk_fail(pcVar1,local_c,0);
  }
  return pcVar2;
}

// Function: computed_goto @ 0x123f8
undefined4 computed_goto(undefined4 param_1,int param_2)
{
  undefined4 uVar1;
  code *apcStack_1c [4];
  undefined4 local_c;
  local_c = 0;
  apcStack_1c[0] = (code *)&DAT_00012468;
  apcStack_1c[1] = (code *)&DAT_00012470;
  apcStack_1c[2] = (code *)&DAT_00012478;
  apcStack_1c[3] = (code *)&DAT_00012480;
  if ((-1 < param_2) && (param_2 < 4)) {
    uVar1 = (*apcStack_1c[param_2])(&DAT_00012468);
    return uVar1;
  }
  return 0xffffffff;
}

// Function: obfuscated_cf @ 0x124b4
int obfuscated_cf(int param_1)
{
  int local_c;
  local_c = param_1;
  if (param_1 * param_1 + 1 < 0 != SCARRY4(param_1 * param_1,1)) {
    local_c = param_1 * 2 + 1;
  }
  return local_c << 1;
}

// Function: opaque_predicate @ 0x12514
int opaque_predicate(int param_1)
{
  return param_1 << 1;
}

// Function: overlapped_code @ 0x12564
int overlapped_code(uint param_1)
{
  int iVar1;
  if ((param_1 & 1) == 0) {
    iVar1 = (int)param_1 / 2;
  }
  else {
    iVar1 = param_1 * 3 + 1;
  }
  return iVar1;
}

// Function: test_control_flow_l3 @ 0x125bc
void test_control_flow_l3(void)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  local_c = 0;
  puts(&DAT_00012fec);
  uVar1 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
  uVar1 = non_local_jump(0xfffffffb);
  printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
  uVar1 = cpp_exception(5);
  printf("CF-L3-02 (cpp_exception): %d\n",uVar1);
  uVar1 = cpp_exception(0xfffffffb);
  printf("CF-L3-02 (cpp_exception): %d\n",uVar1);
  uVar1 = large_jump_table(0,10,5);
  printf("CF-L3-03 (large_jump_table): %d\n",uVar1);
  uVar1 = conditional_func_ptr(0,5);
  printf("CF-L3-04 (conditional_func_ptr): %d\n",uVar1);
  uVar1 = state_machine(1,0);
  printf("CF-L3-05 (state_machine): %d\n",uVar1);
  uVar1 = fsm_func_table(2,1);
  printf("CF-L3-06 (fsm_func_table): %d\n",uVar1);
  local_1c = 0;
  uStack_18 = 1;
  uStack_14 = 2;
  uStack_10 = 3;
  uVar1 = computed_goto(&local_1c,2);
  printf("CF-L3-07 (computed_goto): %d\n",uVar1);
  uVar1 = obfuscated_cf(5);
  printf("CF-L3-08 (obfuscated_cf): %d\n",uVar1);
  uVar1 = opaque_predicate(5);
  printf("CF-L3-09 (opaque_predicate): %d\n",uVar1);
  uVar1 = overlapped_code(5);
  iVar2 = printf("CF-L3-10 (overlapped_code): %d\n",uVar1);
  if (local_c != 0) {
    __stack_chk_fail(iVar2);
  }
  return;
}

// Function: main @ 0x12788
undefined4 main(void)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}

// Function: __aeabi_idiv @ 0x127a8
uint __aeabi_idiv(uint param_1,uint param_2)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  if (param_2 == 0) {
    bVar5 = (int)param_1 < 0;
    if (0 < (int)param_1) {
      param_1 = 0x7fffffff;
    }
    if (bVar5) {
      param_1 = 0x80000000;
    }
    uVar1 = __aeabi_idiv0(param_1);
    return uVar1;
  }
  uVar4 = param_1 ^ param_2;
  uVar1 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = -param_2;
  }
  if (uVar1 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (uVar3 <= uVar1) {
    if (uVar3 < uVar1) {
      param_1 = 0;
    }
    if (uVar3 == uVar1) {
      param_1 = (int)uVar4 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
    if ((int)uVar4 < 0) {
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
  if (iVar2 == 0) {
    bVar5 = uVar1 << 0x1f <= uVar3;
    if (bVar5) {
      uVar3 = uVar3 + uVar1 * -0x80000000;
    }
    bVar6 = uVar1 << 0x1e <= uVar3;
    if (bVar6) {
      uVar3 = uVar3 + uVar1 * -0x40000000;
    }
    bVar7 = uVar1 << 0x1d <= uVar3;
    if (bVar7) {
      uVar3 = uVar3 + uVar1 * -0x20000000;
    }
    bVar8 = uVar1 << 0x1c <= uVar3;
    if (bVar8) {
      uVar3 = uVar3 + uVar1 * -0x10000000;
    }
    bVar9 = uVar1 << 0x1b <= uVar3;
    if (bVar9) {
      uVar3 = uVar3 + uVar1 * -0x8000000;
    }
    bVar10 = uVar1 << 0x1a <= uVar3;
    if (bVar10) {
      uVar3 = uVar3 + uVar1 * -0x4000000;
    }
    bVar11 = uVar1 << 0x19 <= uVar3;
    if (bVar11) {
      uVar3 = uVar3 + uVar1 * -0x2000000;
    }
    bVar12 = uVar1 << 0x18 <= uVar3;
    if (bVar12) {
      uVar3 = uVar3 + uVar1 * -0x1000000;
    }
    bVar13 = uVar1 << 0x17 <= uVar3;
    if (bVar13) {
      uVar3 = uVar3 + uVar1 * -0x800000;
    }
    bVar14 = uVar1 << 0x16 <= uVar3;
    if (bVar14) {
      uVar3 = uVar3 + uVar1 * -0x400000;
    }
    bVar15 = uVar1 << 0x15 <= uVar3;
    if (bVar15) {
      uVar3 = uVar3 + uVar1 * -0x200000;
    }
    bVar16 = uVar1 << 0x14 <= uVar3;
    if (bVar16) {
      uVar3 = uVar3 + uVar1 * -0x100000;
    }
    bVar17 = uVar1 << 0x13 <= uVar3;
    if (bVar17) {
      uVar3 = uVar3 + uVar1 * -0x80000;
    }
    bVar18 = uVar1 << 0x12 <= uVar3;
    if (bVar18) {
      uVar3 = uVar3 + uVar1 * -0x40000;
    }
    bVar19 = uVar1 << 0x11 <= uVar3;
    if (bVar19) {
      uVar3 = uVar3 + uVar1 * -0x20000;
    }
    bVar20 = uVar1 << 0x10 <= uVar3;
    if (bVar20) {
      uVar3 = uVar3 + uVar1 * -0x10000;
    }
    bVar21 = uVar1 << 0xf <= uVar3;
    if (bVar21) {
      uVar3 = uVar3 + uVar1 * -0x8000;
    }
    bVar22 = uVar1 << 0xe <= uVar3;
    if (bVar22) {
      uVar3 = uVar3 + uVar1 * -0x4000;
    }
    bVar23 = uVar1 << 0xd <= uVar3;
    if (bVar23) {
      uVar3 = uVar3 + uVar1 * -0x2000;
    }
    bVar24 = uVar1 << 0xc <= uVar3;
    if (bVar24) {
      uVar3 = uVar3 + uVar1 * -0x1000;
    }
    bVar25 = uVar1 << 0xb <= uVar3;
    if (bVar25) {
      uVar3 = uVar3 + uVar1 * -0x800;
    }
    bVar26 = uVar1 << 10 <= uVar3;
    if (bVar26) {
      uVar3 = uVar3 + uVar1 * -0x400;
    }
    bVar27 = uVar1 << 9 <= uVar3;
    if (bVar27) {
      uVar3 = uVar3 + uVar1 * -0x200;
    }
    bVar28 = uVar1 << 8 <= uVar3;
    if (bVar28) {
      uVar3 = uVar3 + uVar1 * -0x100;
    }
    bVar29 = uVar1 << 7 <= uVar3;
    if (bVar29) {
      uVar3 = uVar3 + uVar1 * -0x80;
    }
    bVar30 = uVar1 << 6 <= uVar3;
    if (bVar30) {
      uVar3 = uVar3 + uVar1 * -0x40;
    }
    bVar31 = uVar1 << 5 <= uVar3;
    if (bVar31) {
      uVar3 = uVar3 + uVar1 * -0x20;
    }
    bVar32 = uVar1 << 4 <= uVar3;
    if (bVar32) {
      uVar3 = uVar3 + uVar1 * -0x10;
    }
    bVar33 = uVar1 << 3 <= uVar3;
    if (bVar33) {
      uVar3 = uVar3 + uVar1 * -8;
    }
    bVar34 = uVar1 << 2 <= uVar3;
    if (bVar34) {
      uVar3 = uVar3 + uVar1 * -4;
    }
    bVar35 = uVar1 << 1 <= uVar3;
    if (bVar35) {
      uVar3 = uVar3 + uVar1 * -2;
    }
    uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
                                       (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                                    (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
                                 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
                              (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
                           (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
                        * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
                    (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
                (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
            (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
    if ((int)uVar4 < 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  uVar1 = (*(code *)(iVar2 * 0xc + 0x127f8))();
  return uVar1;
}

// Function: .divsi3_skip_div0_test @ 0x127b0
uint _divsi3_skip_div0_test(uint param_1,uint param_2)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool in_NG;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  uVar4 = param_1 ^ param_2;
  uVar1 = param_2;
  if (in_NG) {
    uVar1 = -param_2;
  }
  if (uVar1 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (uVar3 <= uVar1) {
    if (uVar3 < uVar1) {
      param_1 = 0;
    }
    if (uVar3 == uVar1) {
      param_1 = (int)uVar4 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
    if ((int)uVar4 < 0) {
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
  if (iVar2 == 0) {
    bVar5 = uVar1 << 0x1f <= uVar3;
    if (bVar5) {
      uVar3 = uVar3 + uVar1 * -0x80000000;
    }
    bVar6 = uVar1 << 0x1e <= uVar3;
    if (bVar6) {
      uVar3 = uVar3 + uVar1 * -0x40000000;
    }
    bVar7 = uVar1 << 0x1d <= uVar3;
    if (bVar7) {
      uVar3 = uVar3 + uVar1 * -0x20000000;
    }
    bVar8 = uVar1 << 0x1c <= uVar3;
    if (bVar8) {
      uVar3 = uVar3 + uVar1 * -0x10000000;
    }
    bVar9 = uVar1 << 0x1b <= uVar3;
    if (bVar9) {
      uVar3 = uVar3 + uVar1 * -0x8000000;
    }
    bVar10 = uVar1 << 0x1a <= uVar3;
    if (bVar10) {
      uVar3 = uVar3 + uVar1 * -0x4000000;
    }
    bVar11 = uVar1 << 0x19 <= uVar3;
    if (bVar11) {
      uVar3 = uVar3 + uVar1 * -0x2000000;
    }
    bVar12 = uVar1 << 0x18 <= uVar3;
    if (bVar12) {
      uVar3 = uVar3 + uVar1 * -0x1000000;
    }
    bVar13 = uVar1 << 0x17 <= uVar3;
    if (bVar13) {
      uVar3 = uVar3 + uVar1 * -0x800000;
    }
    bVar14 = uVar1 << 0x16 <= uVar3;
    if (bVar14) {
      uVar3 = uVar3 + uVar1 * -0x400000;
    }
    bVar15 = uVar1 << 0x15 <= uVar3;
    if (bVar15) {
      uVar3 = uVar3 + uVar1 * -0x200000;
    }
    bVar16 = uVar1 << 0x14 <= uVar3;
    if (bVar16) {
      uVar3 = uVar3 + uVar1 * -0x100000;
    }
    bVar17 = uVar1 << 0x13 <= uVar3;
    if (bVar17) {
      uVar3 = uVar3 + uVar1 * -0x80000;
    }
    bVar18 = uVar1 << 0x12 <= uVar3;
    if (bVar18) {
      uVar3 = uVar3 + uVar1 * -0x40000;
    }
    bVar19 = uVar1 << 0x11 <= uVar3;
    if (bVar19) {
      uVar3 = uVar3 + uVar1 * -0x20000;
    }
    bVar20 = uVar1 << 0x10 <= uVar3;
    if (bVar20) {
      uVar3 = uVar3 + uVar1 * -0x10000;
    }
    bVar21 = uVar1 << 0xf <= uVar3;
    if (bVar21) {
      uVar3 = uVar3 + uVar1 * -0x8000;
    }
    bVar22 = uVar1 << 0xe <= uVar3;
    if (bVar22) {
      uVar3 = uVar3 + uVar1 * -0x4000;
    }
    bVar23 = uVar1 << 0xd <= uVar3;
    if (bVar23) {
      uVar3 = uVar3 + uVar1 * -0x2000;
    }
    bVar24 = uVar1 << 0xc <= uVar3;
    if (bVar24) {
      uVar3 = uVar3 + uVar1 * -0x1000;
    }
    bVar25 = uVar1 << 0xb <= uVar3;
    if (bVar25) {
      uVar3 = uVar3 + uVar1 * -0x800;
    }
    bVar26 = uVar1 << 10 <= uVar3;
    if (bVar26) {
      uVar3 = uVar3 + uVar1 * -0x400;
    }
    bVar27 = uVar1 << 9 <= uVar3;
    if (bVar27) {
      uVar3 = uVar3 + uVar1 * -0x200;
    }
    bVar28 = uVar1 << 8 <= uVar3;
    if (bVar28) {
      uVar3 = uVar3 + uVar1 * -0x100;
    }
    bVar29 = uVar1 << 7 <= uVar3;
    if (bVar29) {
      uVar3 = uVar3 + uVar1 * -0x80;
    }
    bVar30 = uVar1 << 6 <= uVar3;
    if (bVar30) {
      uVar3 = uVar3 + uVar1 * -0x40;
    }
    bVar31 = uVar1 << 5 <= uVar3;
    if (bVar31) {
      uVar3 = uVar3 + uVar1 * -0x20;
    }
    bVar32 = uVar1 << 4 <= uVar3;
    if (bVar32) {
      uVar3 = uVar3 + uVar1 * -0x10;
    }
    bVar33 = uVar1 << 3 <= uVar3;
    if (bVar33) {
      uVar3 = uVar3 + uVar1 * -8;
    }
    bVar34 = uVar1 << 2 <= uVar3;
    if (bVar34) {
      uVar3 = uVar3 + uVar1 * -4;
    }
    bVar35 = uVar1 << 1 <= uVar3;
    if (bVar35) {
      uVar3 = uVar3 + uVar1 * -2;
    }
    uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
                                       (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                                    (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
                                 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
                              (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
                           (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
                        * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
                    (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
                (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
            (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
    if ((int)uVar4 < 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  uVar1 = (*(code *)(iVar2 * 0xc + 0x127f8))();
  return uVar1;
}

// Function: __aeabi_idivmod @ 0x129c8
void __aeabi_idivmod(int param_1,int param_2)
{
  bool bVar1;
  if (param_2 != 0) {
    _divsi3_skip_div0_test();
    return;
  }
  bVar1 = param_1 < 0;
  if (0 < param_1) {
    param_1 = 0x7fffffff;
  }
  if (bVar1) {
    param_1 = -0x80000000;
  }
  __aeabi_idiv0(param_1);
  return;
}

// Function: __aeabi_idiv0 @ 0x129e8
void __aeabi_idiv0(void)
{
  raise(8);
  return;
}

// Function: _fini @ 0x129f8
void _fini(void)
{
  return;
}

