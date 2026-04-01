// Decompiled by BinaryAI
// SHA256: e842e8402dfc6017e94dbb172de80cb282306087bb835d61233420bef6a56ebb

// Function: _init @ 0x100918
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_00100930 @ 0x100930
void FUN_00100930(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::_setjmp @ 0x100950
int _setjmp(__jmp_buf_tag *__env)
{
  int iVar1;
  iVar1 = _setjmp(__env);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100960
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100970
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100980
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100990
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x1009a0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x1009b0
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x1009c0
void longjmp(__jmp_buf_tag *__env,int __val)
{
  longjmp(__env,__val);
}

// Function: <EXTERNAL>::printf @ 0x1009d0
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: _start @ 0x100a00
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x100a34
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x100a50
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x100a80
void register_tm_clones(void)
{
  return;
}

// Function: FUN_00100abc @ 0x100abc
void FUN_00100abc(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x100ac0
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: sequential_ops @ 0x100b14
int sequential_ops(int param_1,int param_2,int param_3)
{
  return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x100b5c
int single_if(int param_1)
{
  int local_4;
  local_4 = param_1;
  if (0 < param_1) {
    local_4 = param_1 << 1;
  }
  return local_4;
}

// Function: if_else @ 0x100b88
bool if_else(int param_1)
{
  return 0 < param_1;
}

// Function: nested_if_2 @ 0x100bb0
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

// Function: nested_if_deep @ 0x100bf8
undefined8 nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  undefined8 uVar1;
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

// Function: if_elseif_chain @ 0x100c80
undefined8 if_elseif_chain(int param_1)
{
  undefined8 uVar1;
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

// Function: if_elseif_long @ 0x100cd0
undefined8 if_elseif_long(int param_1)
{
  undefined8 uVar1;
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

// Function: switch_small @ 0x100d48
undefined4 switch_small(int param_1)
{
  if (param_1 == 3) {
    return 2;
  }
  if (param_1 < 4) {
    if (param_1 == 2) {
      return 0x32;
    }
    if (param_1 < 3) {
      if (param_1 == 0) {
        return 0xf;
      }
      if (param_1 == 1) {
        return 5;
      }
    }
  }
  return 0xffffffff;
}

// Function: switch_large @ 0x100df8
undefined8 switch_large(int param_1)
{
  if (param_1 == 9) {
    return 0x5a;
  }
  if (param_1 < 10) {
    if (param_1 == 8) {
      return 0x50;
    }
    if (param_1 < 9) {
      if (param_1 == 7) {
        return 0x46;
      }
      if (param_1 < 8) {
        if (param_1 == 6) {
          return 0x3c;
        }
        if (param_1 < 7) {
          if (param_1 == 5) {
            return 0x32;
          }
          if (param_1 < 6) {
            if (param_1 == 4) {
              return 0x28;
            }
            if (param_1 < 5) {
              if (param_1 == 3) {
                return 0x1e;
              }
              if (param_1 < 4) {
                if (param_1 == 2) {
                  return 0x14;
                }
                if (param_1 < 3) {
                  if (param_1 == 0) {
                    return 0;
                  }
                  if (param_1 == 1) {
                    return 10;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
}

// Function: switch_default @ 0x100f38
undefined8 switch_default(int param_1)
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

// Function: switch_fallthrough @ 0x100f98
int switch_fallthrough(int param_1)
{
  int local_4;
  local_4 = 0;
  if (param_1 == 3) {
    local_4 = 0xc;
LAB_00100fec:
    local_4 = local_4 + param_1 * 2;
LAB_00101000:
    local_4 = local_4 + param_1;
  }
  else {
    if (param_1 < 4) {
      if (param_1 == 1) goto LAB_00101000;
      if (param_1 == 2) goto LAB_00100fec;
    }
    local_4 = -1;
  }
  return local_4;
}

// Function: loop_for_fixed @ 0x101028
int loop_for_fixed(int param_1)
{
  int local_8;
  int local_4;
  local_8 = 0;
  for (local_4 = 0; local_4 < param_1; local_4 = local_4 + 1) {
    local_8 = local_8 + local_4;
  }
  return local_8;
}

// Function: loop_while @ 0x101074
int loop_while(int param_1)
{
  int local_14;
  int local_4;
  local_4 = 0;
  for (local_14 = param_1; local_14 != 0; local_14 = local_14 / 10) {
    local_4 = local_4 + 1;
  }
  if (local_4 < 1) {
    local_4 = 1;
  }
  return local_4;
}

// Function: loop_dowhile @ 0x1010dc
int loop_dowhile(int param_1)
{
  int local_14;
  int local_4;
  local_4 = 0;
  local_14 = param_1;
  do {
    local_14 = local_14 / 10;
    local_4 = local_4 + 1;
  } while (local_14 != 0);
  return local_4;
}

// Function: loop_nested @ 0x101130
int loop_nested(int param_1,int param_2)
{
  int local_c;
  int local_8;
  int local_4;
  local_c = 0;
  for (local_8 = 0; local_8 < param_1; local_8 = local_8 + 1) {
    for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

// Function: loop_break @ 0x1011a0
int loop_break(int param_1)
{
  int local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  undefined8 local_8;
  local_8 = ___stack_chk_guard;
  local_20 = 0x140000000a;
  uStack_18 = 0x280000001e;
  local_10 = 0x32;
  local_28 = 0;
  while( true ) {
    if (4 < local_28) {
      return -1;
    }
    if (param_1 == *(int *)((long)&local_20 + (long)local_28 * 4)) break;
    local_28 = local_28 + 1;
  }
  return local_28;
}

// Function: loop_continue @ 0x101264
int loop_continue(int param_1)
{
  int local_8;
  uint local_4;
  local_8 = 0;
  for (local_4 = 1; (int)local_4 <= param_1; local_4 = local_4 + 1) {
    if ((local_4 & 1) != 0) {
      local_8 = local_8 + local_4;
    }
  }
  return local_8;
}

// Function: goto_forward @ 0x1012cc
int goto_forward(int param_1)
{
  int local_4;
  local_4 = param_1;
  if (0 < param_1) {
    local_4 = param_1 * param_1;
  }
  return local_4 << 1;
}

// Function: goto_backward @ 0x101310
int goto_backward(int param_1)
{
  int local_8;
  int local_4;
  if (param_1 < 1) {
    local_8 = 1;
  }
  else {
    local_8 = 1;
    for (local_4 = 1; local_4 <= param_1; local_4 = local_4 + 1) {
      local_8 = local_8 * local_4;
    }
  }
  return local_8;
}

// Function: ternary_op @ 0x10137c
int ternary_op(int param_1,int param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}

// Function: test_control_flow_l1 @ 0x1013a4
int test_control_flow_l1(void)
{
  int iVar1;
  ulong uVar2;
  puts(&DAT_001029e8);
  uVar2 = sequential_ops(5,7,3);
  printf("CF-L1-01 (sequential_ops): %d\n",uVar2 & 0xffffffff);
  uVar2 = single_if(10);
  printf("CF-L1-02 (single_if): %d\n",uVar2 & 0xffffffff);
  uVar2 = single_if(0xfffffffb);
  printf("CF-L1-02 (single_if): %d\n",uVar2 & 0xffffffff);
  uVar2 = if_else(5);
  printf("CF-L1-03 (if_else): %d\n",uVar2 & 0xffffffff);
  uVar2 = if_else(0xfffffffd);
  printf("CF-L1-03 (if_else): %d\n",uVar2 & 0xffffffff);
  uVar2 = nested_if_2(10,5);
  printf("CF-L1-04 (nested_if_2): %d\n",uVar2 & 0xffffffff);
  uVar2 = nested_if_2(10,0xfffffffb);
  printf("CF-L1-04 (nested_if_2): %d\n",uVar2 & 0xffffffff);
  uVar2 = nested_if_2(0xfffffff6,5);
  printf("CF-L1-04 (nested_if_2): %d\n",uVar2 & 0xffffffff);
  uVar2 = nested_if_deep(1,1,1,1,1);
  printf("CF-L1-05 (nested_if_deep): %d\n",uVar2 & 0xffffffff);
  uVar2 = if_elseif_chain(1);
  printf("CF-L1-06 (if_elseif_chain): %d\n",uVar2 & 0xffffffff);
  uVar2 = if_elseif_long(3);
  printf("CF-L1-07 (if_elseif_long): %d\n",uVar2 & 0xffffffff);
  uVar2 = switch_small(2);
  printf("CF-L1-08 (switch_small): %d\n",uVar2 & 0xffffffff);
  uVar2 = switch_large(7);
  printf("CF-L1-09 (switch_large): %d\n",uVar2 & 0xffffffff);
  uVar2 = switch_default(5);
  printf("CF-L1-10 (switch_default): %d\n",uVar2 & 0xffffffff);
  uVar2 = switch_fallthrough(3);
  printf("CF-L1-11 (switch_fallthrough): %d\n",uVar2 & 0xffffffff);
  uVar2 = loop_for_fixed(10);
  printf("CF-L1-12 (loop_for_fixed): %d\n",uVar2 & 0xffffffff);
  uVar2 = loop_while(0x3039);
  printf("CF-L1-13 (loop_while): %d\n",uVar2 & 0xffffffff);
  uVar2 = loop_dowhile(0x2694);
  printf("CF-L1-14 (loop_dowhile): %d\n",uVar2 & 0xffffffff);
  uVar2 = loop_nested(3,4);
  printf("CF-L1-15 (loop_nested): %d\n",uVar2 & 0xffffffff);
  uVar2 = loop_break(0x1e);
  printf("CF-L1-16 (loop_break): %d\n",uVar2 & 0xffffffff);
  uVar2 = loop_break(99);
  printf("CF-L1-16 (loop_break): %d\n",uVar2 & 0xffffffff);
  uVar2 = loop_continue(10);
  printf("CF-L1-17 (loop_continue): %d\n",uVar2 & 0xffffffff);
  uVar2 = goto_forward(5);
  printf("CF-L1-18 (goto_forward): %d\n",uVar2 & 0xffffffff);
  uVar2 = goto_forward(0xfffffffd);
  printf("CF-L1-18 (goto_forward): %d\n",uVar2 & 0xffffffff);
  uVar2 = goto_backward(5);
  printf("CF-L1-19 (goto_backward): %d\n",uVar2 & 0xffffffff);
  uVar2 = ternary_op(10,5);
  printf("CF-L1-20 (ternary_op): %d\n",uVar2 & 0xffffffff);
  uVar2 = ternary_op(3,8);
  iVar1 = printf("CF-L1-20 (ternary_op): %d\n",uVar2 & 0xffffffff);
  return iVar1;
}

// Function: loop_multi_exit @ 0x10167c
int loop_multi_exit(int param_1)
{
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  local_8 = ___stack_chk_guard;
  uStack_30 = 0x400000003;
  local_38 = 0x200000001;
  uStack_20 = 0x800000007;
  uStack_28 = 0x600000005;
  uStack_10 = 0xc0000000b;
  local_18 = 0xa00000009;
  local_40 = 0;
  do {
    if (2 < local_40) {
      return -1;
    }
    for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
      if (param_1 == *(int *)((long)&local_38 + ((long)local_40 * 4 + (long)local_3c) * 4)) {
        return local_40 * 10 + local_3c;
      }
    }
    local_40 = local_40 + 1;
  } while( true );
}

// Function: infinite_loop @ 0x101778
int infinite_loop(int *param_1)
{
  int local_4;
  local_4 = 0;
  do {
    if (*param_1 == 1) {
      return local_4;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 0x3e9);
  *param_1 = 1;
  return local_4;
}

// Function: multi_return @ 0x1017cc
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

// Function: conditional_return @ 0x101830
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

// Function: duffs_device @ 0x101874
uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)
{
  uint uVar1;
  undefined4 *local_20;
  undefined4 *local_18;
  int local_4;
  if ((int)param_3 < 1) {
    param_3 = 0xffffffff;
  }
  else {
    local_4 = param_3 + 0xe;
    if (-1 < (int)(param_3 + 7)) {
      local_4 = param_3 + 7;
    }
    local_4 = local_4 >> 3;
    uVar1 = param_3 & 7;
    if ((int)param_3 < 1) {
      uVar1 = -(-param_3 & 7);
    }
    local_20 = param_2;
    local_18 = param_1;
    if (uVar1 == 7) goto LAB_00101960;
    if ((int)uVar1 < 8) {
      local_20 = param_2;
      local_18 = param_1;
      if (uVar1 == 6) goto LAB_00101980;
      if ((int)uVar1 < 7) {
        local_20 = param_2;
        local_18 = param_1;
        if (uVar1 == 5) goto LAB_001019a0;
        if ((int)uVar1 < 6) {
          local_20 = param_2;
          local_18 = param_1;
          if (uVar1 == 4) goto LAB_001019c0;
          if ((int)uVar1 < 5) {
            local_20 = param_2;
            local_18 = param_1;
            if (uVar1 == 3) goto LAB_001019e0;
            if ((int)uVar1 < 4) {
              local_20 = param_2;
              local_18 = param_1;
              if (uVar1 == 2) goto LAB_00101a00;
              if ((int)uVar1 < 3) {
                local_20 = param_2;
                local_18 = param_1;
                if (uVar1 == 0) goto LAB_00101940;
                local_20 = param_2;
                local_18 = param_1;
                if (uVar1 == 1) {
                  while( true ) {
                    *local_18 = *local_20;
                    local_4 = local_4 + -1;
                    local_20 = local_20 + 1;
                    local_18 = local_18 + 1;
                    if (local_4 < 1) break;
LAB_00101940:
                    *local_18 = *local_20;
                    local_20 = local_20 + 1;
                    local_18 = local_18 + 1;
LAB_00101960:
                    *local_18 = *local_20;
                    local_20 = local_20 + 1;
                    local_18 = local_18 + 1;
LAB_00101980:
                    *local_18 = *local_20;
                    local_20 = local_20 + 1;
                    local_18 = local_18 + 1;
LAB_001019a0:
                    *local_18 = *local_20;
                    local_20 = local_20 + 1;
                    local_18 = local_18 + 1;
LAB_001019c0:
                    *local_18 = *local_20;
                    local_20 = local_20 + 1;
                    local_18 = local_18 + 1;
LAB_001019e0:
                    *local_18 = *local_20;
                    local_20 = local_20 + 1;
                    local_18 = local_18 + 1;
LAB_00101a00:
                    *local_18 = *local_20;
                    local_20 = local_20 + 1;
                    local_18 = local_18 + 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return param_3;
}

// Function: loop_complex_cond @ 0x101a64
int loop_complex_cond(int param_1)
{
  int local_c;
  int local_8;
  int local_4;
  local_c = 0;
  local_4 = 0;
  for (local_8 = param_1; ((local_c < local_8 && (local_4 < 10)) && (0 < local_8));
      local_8 = local_8 + -1) {
    local_c = local_c + 2;
    local_4 = local_4 + 1;
  }
  return local_c + local_8 + local_4;
}

// Function: loop_modify_var @ 0x101ae8
int loop_modify_var(int param_1)
{
  int local_8;
  int local_4;
  local_8 = 0;
  for (local_4 = 0; local_4 < param_1; local_4 = local_4 + 1) {
    local_8 = local_8 + local_4;
    if (5 < local_4) {
      local_4 = local_4 + 2;
    }
  }
  return local_8;
}

// Function: loop_external_state @ 0x101b4c
int loop_external_state(int *param_1)
{
  int local_4;
  local_4 = 0;
  do {
    if (*param_1 != 0) {
      return local_4;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 0x65);
  return local_4;
}

// Function: recursion_factorial @ 0x101b98
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

// Function: tail_recursion @ 0x101bd8
ulong tail_recursion(int param_1,uint param_2)
{
  ulong uVar1;
  if (param_1 < 2) {
    uVar1 = (ulong)param_2;
  }
  else {
    uVar1 = tail_recursion(param_1 + -1,param_1 * param_2);
  }
  return uVar1;
}

// Function: indirect_recursion_a @ 0x101c24
ulong indirect_recursion_a(uint param_1,int param_2)
{
  ulong uVar1;
  if (param_2 < 1) {
    uVar1 = (ulong)param_1;
  }
  else if ((param_1 & 1) == 0) {
    uVar1 = indirect_recursion_b((int)param_1 / 2,param_2 + -1);
  }
  else {
    uVar1 = indirect_recursion_b(param_1 * 3 + 1,param_2 + -1);
  }
  return uVar1;
}

// Function: indirect_recursion_b @ 0x101cb4
ulong indirect_recursion_b(uint param_1,int param_2)
{
  ulong uVar1;
  if (param_2 < 1) {
    uVar1 = (ulong)param_1;
  }
  else {
    uVar1 = indirect_recursion_a(param_1 + 1,param_2 + -1);
  }
  return uVar1;
}

// Function: call_func_ptr @ 0x101cfc
void call_func_ptr(code *param_1,undefined4 param_2)
{
  (*param_1)(param_2);
  return;
}

// Function: double_value @ 0x101d20
int double_value(int param_1)
{
  return param_1 << 1;
}

// Function: triple_value @ 0x101d38
int triple_value(int param_1)
{
  return param_1 * 3;
}

// Function: call_func_ptr_array @ 0x101d58
undefined4 call_func_ptr_array(int param_1,undefined4 param_2)
{
  undefined4 uVar1;
  code *local_20 [3];
  long local_8;
  local_8 = ___stack_chk_guard;
  local_20[0] = (code *)PTR_double_value_00114010;
  local_20[1] = (code *)PTR_triple_value_00114018;
  local_20[2] = (code *)PTR_recursion_factorial_00114020;
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (*local_20[param_1])(param_2);
  }
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
  }
  return uVar1;
}

// Function: call_virtual_func @ 0x101e04
int call_virtual_func(undefined8 param_1,int param_2)
{
  return param_2 << 1;
}

// Function: process_with_callback @ 0x101e20
int process_with_callback(long param_1,int param_2,code *param_3)
{
  int iVar1;
  int local_8;
  int local_4;
  local_8 = 0;
  for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
    iVar1 = (*param_3)(*(undefined4 *)(param_1 + (long)local_4 * 4));
    local_8 = local_8 + iVar1;
  }
  return local_8;
}

// Function: test_control_flow_l2 @ 0x101e94
void test_control_flow_l2(void)
{
  ulong uVar1;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00102cc0);
  uVar1 = loop_multi_exit(7);
  printf("CF-L2-01 (loop_multi_exit): %d\n",uVar1 & 0xffffffff);
  local_68 = 0;
  uVar1 = infinite_loop(&local_68);
  printf("CF-L2-02 (infinite_loop): %d\n",uVar1 & 0xffffffff);
  uVar1 = multi_return(0xfffffffb);
  printf("CF-L2-03 (multi_return): %d\n",uVar1 & 0xffffffff);
  uVar1 = multi_return(100);
  printf("CF-L2-03 (multi_return): %d\n",uVar1 & 0xffffffff);
  uVar1 = multi_return(3);
  printf("CF-L2-03 (multi_return): %d\n",uVar1 & 0xffffffff);
  uVar1 = conditional_return(5);
  printf("CF-L2-04 (conditional_return): %d\n",uVar1 & 0xffffffff);
  uVar1 = conditional_return(0xfffffffb);
  printf("CF-L2-04 (conditional_return): %d\n",uVar1 & 0xffffffff);
  uStack_40 = 0x400000003;
  local_48 = 0x200000001;
  uStack_30 = 0x800000007;
  uStack_38 = 0x600000005;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  uVar1 = duffs_device(&local_28,&local_48,8);
  printf("CF-L2-05 (duffs_device): %d\n",uVar1 & 0xffffffff);
  uVar1 = loop_complex_cond(10);
  printf("CF-L2-06 (loop_complex_cond): %d\n",uVar1 & 0xffffffff);
  uVar1 = loop_modify_var(10);
  printf("CF-L2-07 (loop_modify_var): %d\n",uVar1 & 0xffffffff);
  local_64 = 0;
  uVar1 = loop_external_state(&local_64);
  printf("CF-L2-08 (loop_external_state): %d\n",uVar1 & 0xffffffff);
  uVar1 = recursion_factorial(5);
  printf("CF-L2-09 (recursion_factorial): %d\n",uVar1 & 0xffffffff);
  uVar1 = tail_recursion(5,1);
  printf("CF-L2-10 (tail_recursion): %d\n",uVar1 & 0xffffffff);
  uVar1 = indirect_recursion_a(10,3);
  printf("CF-L2-11 (indirect_recursion): %d\n",uVar1 & 0xffffffff);
  uVar1 = call_func_ptr(double_value,5);
  printf("CF-L2-12 (call_func_ptr): %d\n",uVar1 & 0xffffffff);
  uVar1 = call_func_ptr_array(0,5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1 & 0xffffffff);
  uVar1 = call_func_ptr_array(2,5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1 & 0xffffffff);
  local_60 = 0x200000001;
  uStack_58 = 0x400000003;
  local_50 = 5;
  uVar1 = process_with_callback(&local_60,5,double_value);
  printf("CF-L2-15 (process_with_callback): %d\n",uVar1 & 0xffffffff);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: non_local_jump @ 0x10210c
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

// Function: cpp_exception @ 0x10217c
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

// Function: op_add @ 0x1021bc
int op_add(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: op_sub @ 0x1021dc
int op_sub(int param_1,int param_2)
{
  return param_1 - param_2;
}

// Function: op_mul @ 0x1021fc
int op_mul(int param_1,int param_2)
{
  return param_1 * param_2;
}

// Function: op_div @ 0x10221c
int op_div(int param_1,int param_2)
{
  int iVar1;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = param_1 / param_2;
    }
  }
  return iVar1;
}

// Function: op_mod @ 0x102250
int op_mod(int param_1,int param_2)
{
  int iVar1;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = param_1 / param_2;
    }
    param_1 = param_1 - iVar1 * param_2;
  }
  return param_1;
}

// Function: op_and @ 0x102290
uint op_and(uint param_1,uint param_2)
{
  return param_1 & param_2;
}

// Function: op_or @ 0x1022b0
uint op_or(uint param_1,uint param_2)
{
  return param_1 | param_2;
}

// Function: op_xor @ 0x1022d0
uint op_xor(uint param_1,uint param_2)
{
  return param_1 ^ param_2;
}

// Function: op_shl @ 0x1022f0
int op_shl(int param_1,uint param_2)
{
  return param_1 << (ulong)(param_2 & 0x1f);
}

// Function: op_shr @ 0x102310
int op_shr(int param_1,uint param_2)
{
  return param_1 >> (param_2 & 0x1f);
}

// Function: large_jump_table @ 0x102330
undefined4 large_jump_table(int param_1,undefined4 param_2,undefined4 param_3)
{
  undefined4 uVar1;
  code *local_58 [4];
  undefined *local_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *local_18;
  undefined *puStack_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_58[1] = (code *)PTR_op_sub_00114030;
  local_58[0] = (code *)PTR_op_add_00114028;
  local_58[3] = (code *)PTR_op_div_00114040;
  local_58[2] = (code *)PTR_op_mul_00114038;
  puStack_30 = PTR_op_and_00114050;
  local_38 = PTR_op_mod_00114048;
  puStack_20 = PTR_op_xor_00114060;
  puStack_28 = PTR_op_or_00114058;
  puStack_10 = PTR_op_shr_00114070;
  local_18 = PTR_op_shl_00114068;
  if ((param_1 < 0) || (9 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (*local_58[param_1])(param_2,param_3);
  }
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
  }
  return uVar1;
}

// Function: conditional_func_ptr @ 0x1023e8
void conditional_func_ptr(int param_1,undefined4 param_2)
{
  code *local_8;
  if (param_1 == 0) {
    local_8 = double_value;
  }
  else if (param_1 == 1) {
    local_8 = triple_value;
  }
  else {
    local_8 = recursion_factorial;
  }
  (*local_8)(param_2);
  return;
}

// Function: state_machine @ 0x102450
undefined8 state_machine(int param_1,int param_2)
{
  if (param_2 == 3) {
    if (param_1 == 0) {
      return 0;
    }
    return 3;
  }
  if (param_2 < 4) {
    if (param_2 == 2) {
      return 2;
    }
    if (param_2 < 3) {
      if (param_2 == 0) {
        if (param_1 == 1) {
          return 1;
        }
        return 0;
      }
      if (param_2 == 1) {
        if (param_1 == 2) {
          return 2;
        }
        if (param_1 == 99) {
          return 3;
        }
        return 1;
      }
    }
  }
  return 3;
}

// Function: state_idle @ 0x102524
bool state_idle(int param_1)
{
  return param_1 == 1;
}

// Function: state_processing @ 0x102544
undefined8 state_processing(int param_1)
{
  undefined8 uVar1;
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

// Function: state_done @ 0x102580
undefined8 state_done(void)
{
  return 2;
}

// Function: state_error @ 0x102594
undefined8 state_error(int param_1)
{
  undefined8 uVar1;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

// Function: fsm_func_table @ 0x1025bc
undefined4 fsm_func_table(undefined4 param_1,int param_2)
{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  undefined uVar34;
  undefined uVar35;
  code *local_28 [4];
  long local_8;
  local_8 = ___stack_chk_guard;
  tmp_ldXn = 0x114078;
  puVar1 = (undefined *)tmp_ldXn;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar5 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar6 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar7 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar8 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar9 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar10 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar11 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar12 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar13 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar14 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar15 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar16 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar17 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar18 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar19 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar20 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar21 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar22 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar23 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar24 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar25 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar26 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar27 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar28 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar29 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar30 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar31 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar32 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar33 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar34 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar35 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  tmp_ldXn = local_28;
  puVar3 = (undefined *)tmp_ldXn;
  *puVar3 = *puVar1;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar5;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar6;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar7;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar8;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar9;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar10;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar11;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar12;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar13;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar14;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar15;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar16;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar17;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar18;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar19;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar20;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar21;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar22;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar23;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar24;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar25;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar26;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar27;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar28;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar29;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar30;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar31;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar32;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar33;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar34;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar35;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  if ((param_2 < 0) || (3 < param_2)) {
    uVar4 = 3;
  }
  else {
    uVar4 = (*local_28[param_2])(param_1);
  }
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,uVar4,0,local_8 - ___stack_chk_guard);
  }
  return uVar4;
}

// Function: computed_goto @ 0x102660
undefined8 computed_goto(undefined8 param_1,int param_2)
{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  undefined uVar34;
  undefined uVar35;
  undefined uVar36;
  code *local_28 [4];
  long local_8;
  lVar4 = ___stack_chk_guard;
  local_8 = ___stack_chk_guard;
  tmp_ldXn = 0x114098;
  puVar1 = (undefined *)tmp_ldXn;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar6 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar7 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar8 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar9 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar10 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar11 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar12 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar13 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar14 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar15 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar16 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar17 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar18 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar19 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar20 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar21 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar22 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar23 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar24 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar25 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar26 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar27 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar28 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar29 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar30 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar31 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar32 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar33 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar34 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar35 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar3 = (undefined *)tmp_ldXn;
  uVar36 = *puVar3;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  tmp_ldXn = local_28;
  puVar3 = (undefined *)tmp_ldXn;
  *puVar3 = *puVar1;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar6;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar7;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar8;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar9;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar10;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar11;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar12;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar13;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar14;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar15;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar16;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar17;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar18;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar19;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar20;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar21;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar22;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar23;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar24;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar25;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar26;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar27;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar28;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar29;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar30;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar31;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar32;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar33;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar34;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar35;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  puVar1 = (undefined *)tmp_ldXn;
  *puVar1 = uVar36;
  lVar2 = tmp_ldXn;
  tmp_ldXn = lVar2 + 1;
  if ((-1 < param_2) && (param_2 < 4)) {
    uVar5 = (*local_28[param_2])();
    return uVar5;
  }
  if (lVar4 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0xffffffff,0,lVar4 - ___stack_chk_guard);
  }
  return 0xffffffff;
}

// Function: obfuscated_cf @ 0x102720
int obfuscated_cf(int param_1)
{
  int local_4;
  local_4 = param_1;
  if (param_1 * param_1 + 1 < 0 != SCARRY4(param_1 * param_1,1)) {
    local_4 = param_1 * 2 + 1;
  }
  return local_4 << 1;
}

// Function: opaque_predicate @ 0x102768
int opaque_predicate(int param_1)
{
  return param_1 << 1;
}

// Function: overlapped_code @ 0x1027a4
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

// Function: test_control_flow_l3 @ 0x1027ec
void test_control_flow_l3(void)
{
  ulong uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00102f18);
  uVar1 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n",uVar1 & 0xffffffff);
  uVar1 = non_local_jump(0xfffffffb);
  printf("CF-L3-01 (non_local_jump): %d\n",uVar1 & 0xffffffff);
  uVar1 = cpp_exception(5);
  printf("CF-L3-02 (cpp_exception): %d\n",uVar1 & 0xffffffff);
  uVar1 = cpp_exception(0xfffffffb);
  printf("CF-L3-02 (cpp_exception): %d\n",uVar1 & 0xffffffff);
  uVar1 = large_jump_table(0,10,5);
  printf("CF-L3-03 (large_jump_table): %d\n",uVar1 & 0xffffffff);
  uVar1 = conditional_func_ptr(0,5);
  printf("CF-L3-04 (conditional_func_ptr): %d\n",uVar1 & 0xffffffff);
  uVar1 = state_machine(1,0);
  printf("CF-L3-05 (state_machine): %d\n",uVar1 & 0xffffffff);
  uVar1 = fsm_func_table(2,1);
  printf("CF-L3-06 (fsm_func_table): %d\n",uVar1 & 0xffffffff);
  local_18 = 0;
  local_14 = 1;
  local_10 = 2;
  local_c = 3;
  uVar1 = computed_goto(&local_18,2);
  printf("CF-L3-07 (computed_goto): %d\n",uVar1 & 0xffffffff);
  uVar1 = obfuscated_cf(5);
  printf("CF-L3-08 (obfuscated_cf): %d\n",uVar1 & 0xffffffff);
  uVar1 = opaque_predicate(5);
  printf("CF-L3-09 (opaque_predicate): %d\n",uVar1 & 0xffffffff);
  uVar1 = overlapped_code(5);
  printf("CF-L3-10 (overlapped_code): %d\n",uVar1 & 0xffffffff);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: main @ 0x102994
undefined8 main(void)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}

// Function: _fini @ 0x1029b4
void _fini(void)
{
  return;
}

