// Decompiled by BinaryAI
// SHA256: 8ea066ee5a65422fcea9caed2d2cd2c900884b2ee6422a7cc694dc5fefab5e92

// Function: _init @ 0x100928
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_00100940 @ 0x100940
void FUN_00100940(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::_setjmp @ 0x100960
int _setjmp(__jmp_buf_tag *__env)
{
  int iVar1;
  iVar1 = _setjmp(__env);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100970
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100980
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x100990
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1009a0
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1009b0
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x1009c0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x1009d0
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::__longjmp_chk @ 0x1009e0
void __longjmp_chk(void)
{
  __longjmp_chk();
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

// Function: recursion_factorial @ 0x100b14
int recursion_factorial(int param_1)
{
  int iVar1;
  if (1 < param_1) {
    iVar1 = recursion_factorial(param_1 + -1);
    return iVar1 * param_1;
  }
  return 1;
}

// Function: double_value @ 0x100b4c
int double_value(int param_1)
{
  return param_1 << 1;
}

// Function: triple_value @ 0x100b54
int triple_value(int param_1)
{
  return param_1 * 3;
}

// Function: op_add @ 0x100b5c
int op_add(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: op_sub @ 0x100b64
int op_sub(int param_1,int param_2)
{
  return param_1 - param_2;
}

// Function: op_mul @ 0x100b6c
int op_mul(int param_1,int param_2)
{
  return param_1 * param_2;
}

// Function: op_div @ 0x100b74
int op_div(int param_1,int param_2)
{
  int iVar1;
  iVar1 = param_2;
  if ((param_2 != 0) && (iVar1 = 0, param_2 != 0)) {
    iVar1 = param_1 / param_2;
  }
  return iVar1;
}

// Function: op_mod @ 0x100b88
int op_mod(int param_1,int param_2)
{
  int iVar1;
  if (param_2 != 0) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = param_1 / param_2;
    }
    param_2 = param_1 - iVar1 * param_2;
  }
  return param_2;
}

// Function: op_and @ 0x100ba0
uint op_and(uint param_1,uint param_2)
{
  return param_1 & param_2;
}

// Function: op_or @ 0x100ba8
uint op_or(uint param_1,uint param_2)
{
  return param_1 | param_2;
}

// Function: op_xor @ 0x100bb0
uint op_xor(uint param_1,uint param_2)
{
  return param_1 ^ param_2;
}

// Function: op_shl @ 0x100bb8
int op_shl(int param_1,uint param_2)
{
  return param_1 << (ulong)(param_2 & 0x1f);
}

// Function: op_shr @ 0x100bc0
int op_shr(int param_1,uint param_2)
{
  return param_1 >> (param_2 & 0x1f);
}

// Function: state_idle @ 0x100bc8
bool state_idle(int param_1)
{
  return param_1 == 1;
}

// Function: state_processing @ 0x100bd4
ulong state_processing(ulong param_1)
{
  uint uVar1;
  if ((int)param_1 != 2) {
    uVar1 = 3;
    if ((int)param_1 != 99) {
      uVar1 = 1;
    }
    param_1 = (ulong)uVar1;
  }
  return param_1;
}

// Function: state_done @ 0x100bec
undefined8 state_done(void)
{
  return 2;
}

// Function: state_error @ 0x100bf4
int state_error(int param_1)
{
  if (param_1 != 0) {
    param_1 = 3;
  }
  return param_1;
}

// Function: sequential_ops @ 0x100c04
int sequential_ops(int param_1,int param_2,int param_3)
{
  return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x100c14
int single_if(int param_1)
{
  int iVar1;
  iVar1 = param_1 << 1;
  if (param_1 < 1) {
    iVar1 = param_1;
  }
  return iVar1;
}

// Function: if_else @ 0x100c24
bool if_else(int param_1)
{
  return 0 < param_1;
}

// Function: nested_if_2 @ 0x100c30
int nested_if_2(int param_1,int param_2)
{
  int iVar1;
  if (param_1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + param_2;
    if (param_2 < 1) {
      iVar1 = param_1;
    }
  }
  return iVar1;
}

// Function: nested_if_deep @ 0x100c50
char nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  char cVar1;
  if (param_1 < 1) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
    if (0 < param_2) {
      if (param_3 < 1) {
        cVar1 = '\x02';
      }
      else if (param_4 < 1) {
        cVar1 = '\x03';
      }
      else {
        cVar1 = (0 < param_5) + '\x04';
      }
    }
  }
  return cVar1;
}

// Function: if_elseif_chain @ 0x100c9c
undefined4 if_elseif_chain(int param_1)
{
  undefined4 uVar1;
  if (param_1 == 0) {
    uVar1 = 10;
  }
  else if (param_1 == 1) {
    uVar1 = 0x14;
  }
  else {
    uVar1 = 0x1e;
    if (param_1 != 2) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

// Function: if_elseif_long @ 0x100cc8
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
  else {
    uVar1 = 500;
    if (param_1 != 4) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

// Function: switch_small @ 0x100d14
undefined4 switch_small(int param_1)
{
  undefined4 uVar1;
  if (param_1 == 2) {
    uVar1 = 0x32;
  }
  else if (param_1 < 3) {
    uVar1 = 0xf;
    if ((param_1 != 0) && (uVar1 = 5, param_1 != 1)) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 2;
    if (param_1 != 3) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

// Function: switch_large @ 0x100d54
ulong switch_large(ulong param_1)
{
  int iVar1;
  uint uVar2;
  iVar1 = (int)param_1;
  if (iVar1 == 5) {
    param_1 = 0x32;
  }
  else if (iVar1 < 6) {
    if (iVar1 == 2) {
      param_1 = 0x14;
    }
    else if (iVar1 < 3) {
      if (iVar1 != 0) {
        uVar2 = 10;
        if (iVar1 != 1) {
          uVar2 = 0xffffffff;
        }
        param_1 = (ulong)uVar2;
      }
    }
    else {
      uVar2 = 0x28;
      if (iVar1 == 3) {
        uVar2 = 0x1e;
      }
      param_1 = (ulong)uVar2;
    }
  }
  else {
    param_1 = 0x50;
    if (iVar1 != 8) {
      if (iVar1 < 9) {
        param_1 = 0x3c;
        if (iVar1 != 6) {
          uVar2 = 0x46;
          if (iVar1 != 7) {
            uVar2 = 0xffffffff;
          }
          param_1 = (ulong)uVar2;
        }
      }
      else {
        uVar2 = 0x5a;
        if (iVar1 != 9) {
          uVar2 = 0xffffffff;
        }
        param_1 = (ulong)uVar2;
      }
    }
  }
  return param_1;
}

// Function: switch_default @ 0x100de4
undefined4 switch_default(int param_1)
{
  undefined4 uVar1;
  uVar1 = 200;
  if (((param_1 != 2) && (uVar1 = 300, param_1 != 3)) && (uVar1 = 100, param_1 != 1)) {
    uVar1 = 0;
  }
  return uVar1;
}

// Function: switch_fallthrough @ 0x100e10
int switch_fallthrough(int param_1)
{
  int iVar1;
  if (param_1 == 2) {
    iVar1 = 0;
  }
  else {
    if (param_1 != 3) {
      if (param_1 != 1) {
        return -1;
      }
      iVar1 = 0;
      goto LAB_00100e40;
    }
    iVar1 = 0xc;
  }
  iVar1 = iVar1 + param_1 * 2;
LAB_00100e40:
  return iVar1 + param_1;
}

// Function: loop_for_fixed @ 0x100e50
int loop_for_fixed(int param_1)
{
  int iVar1;
  int iVar2;
  if (param_1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + iVar2;
      iVar2 = iVar2 + 1;
    } while (param_1 != iVar2);
  }
  return iVar1;
}

// Function: loop_while @ 0x100e80
int loop_while(int param_1)
{
  int iVar1;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      param_1 = param_1 / 10;
    } while (param_1 != 0);
  }
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}

// Function: loop_dowhile @ 0x100eb8
int loop_dowhile(int param_1)
{
  int iVar1;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    param_1 = param_1 / 10;
  } while (param_1 != 0);
  return iVar1;
}

// Function: loop_nested @ 0x100ee0
int loop_nested(int param_1,int param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar3 = 0;
  iVar1 = 0;
  if (0 < param_1) {
    do {
      iVar2 = 0;
      if (0 < param_2) {
        do {
          iVar2 = iVar2 + 1;
        } while (param_2 != iVar2);
        iVar1 = iVar2 + iVar1;
      }
      iVar3 = iVar3 + 1;
    } while (param_1 != iVar3);
  }
  return iVar1;
}

// Function: loop_break @ 0x100f24
void loop_break(int param_1)
{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  undefined8 local_8;
  local_8 = ___stack_chk_guard;
  puVar2 = &local_20;
  local_20 = 0x140000000a;
  uStack_18 = 0x280000001e;
  local_10 = 0x32;
  iVar1 = 0;
  do {
    if (*(int *)puVar2 == param_1) {
      return;
    }
    iVar1 = iVar1 + 1;
    puVar2 = (undefined8 *)((long)puVar2 + 4);
  } while (iVar1 != 5);
  return;
}

// Function: loop_continue @ 0x100fac
int loop_continue(int param_1)
{
  int iVar1;
  int iVar2;
  uint uVar3;
  if (param_1 < 1) {
    iVar2 = 0;
  }
  else {
    uVar3 = 1;
    iVar1 = 0;
    do {
      iVar2 = iVar1 + uVar3;
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar1;
      }
      uVar3 = uVar3 + 1;
      iVar1 = iVar2;
    } while (uVar3 != param_1 + 1U);
  }
  return iVar2;
}

// Function: goto_forward @ 0x100fe4
int goto_forward(int param_1)
{
  int iVar1;
  iVar1 = param_1 * param_1;
  if (param_1 < 1) {
    iVar1 = param_1;
  }
  return iVar1 << 1;
}

// Function: goto_backward @ 0x100ff8
int goto_backward(int param_1)
{
  int iVar1;
  int iVar2;
  if (param_1 < 1) {
    iVar1 = 1;
  }
  else {
    iVar2 = 1;
    iVar1 = 1;
    do {
      iVar1 = iVar1 * iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_1 + 1);
  }
  return iVar1;
}

// Function: ternary_op @ 0x101028
int ternary_op(int param_1,int param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}

// Function: test_control_flow_l1 @ 0x101034
void test_control_flow_l1(void)
{
  undefined4 uVar1;
  puts(&DAT_00101e40);
  __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
  __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
  __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
  __printf_chk(1,"CF-L1-03 (if_else): %d\n");
  __printf_chk(1,"CF-L1-03 (if_else): %d\n",0);
  __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0xf);
  __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",10);
  __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0);
  __printf_chk(1,"CF-L1-05 (nested_if_deep): %d\n",5);
  __printf_chk(1,"CF-L1-06 (if_elseif_chain): %d\n",0x14);
  __printf_chk(1,"CF-L1-07 (if_elseif_long): %d\n",400);
  __printf_chk(1,"CF-L1-08 (switch_small): %d\n",0x32);
  __printf_chk(1,"CF-L1-09 (switch_large): %d\n",0x46);
  __printf_chk(1,"CF-L1-10 (switch_default): %d\n",0);
  __printf_chk(1,"CF-L1-11 (switch_fallthrough): %d\n",0x15);
  uVar1 = loop_for_fixed(10);
  __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",uVar1);
  uVar1 = loop_while(0x3039);
  __printf_chk(1,"CF-L1-13 (loop_while): %d\n",uVar1);
  uVar1 = loop_dowhile(0x2694);
  __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",uVar1);
  uVar1 = loop_nested(3,4);
  __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",uVar1);
  uVar1 = loop_break(0x1e);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
  uVar1 = loop_break(99);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
  uVar1 = loop_continue(10);
  __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",uVar1);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
  uVar1 = goto_backward(5);
  __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",uVar1);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
  return;
}

// Function: loop_multi_exit @ 0x1012b4
void loop_multi_exit(int param_1)
{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  local_8 = ___stack_chk_guard;
  puVar2 = &local_38;
  uStack_30 = 0x400000003;
  local_38 = 0x200000001;
  uStack_20 = 0x800000007;
  uStack_28 = 0x600000005;
  uStack_10 = 0xc0000000b;
  local_18 = 0xa00000009;
  iVar3 = 0;
  do {
    lVar1 = 0;
    do {
      if (*(int *)((long)puVar2 + lVar1 * 4) == param_1) {
        return;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != 4);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 != 3);
  return;
}

// Function: infinite_loop @ 0x101358
void infinite_loop(int *param_1)
{
  int iVar1;
  iVar1 = 0;
  do {
    if (*param_1 == 1) {
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x3e9);
  *param_1 = 1;
  return;
}

// Function: multi_return @ 0x101384
int multi_return(uint param_1)
{
  int iVar1;
  if ((int)param_1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_1 * 2;
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

// Function: conditional_return @ 0x1013b4
int conditional_return(int param_1)
{
  int iVar1;
  if (param_1 < 1) {
    iVar1 = 0;
    if (param_1 < 0) {
      iVar1 = -param_1;
    }
  }
  else {
    iVar1 = param_1 << 1;
  }
  return iVar1;
}

// Function: duffs_device @ 0x1013cc
uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)
{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  if ((int)param_3 < 1) {
    param_3 = 0xffffffff;
  }
  else {
    iVar3 = param_3 + 0xe;
    if (-1 < (int)(param_3 + 7)) {
      iVar3 = param_3 + 7;
    }
    iVar3 = iVar3 >> 3;
    uVar1 = param_3 & 7;
    if ((int)param_3 < 1) {
      uVar1 = -(-param_3 & 7);
    }
    puVar2 = param_2;
    puVar4 = param_1;
    if (uVar1 == 4) goto LAB_0010149c;
    if ((int)uVar1 < 5) {
      if (uVar1 == 2) goto LAB_00101424;
      if ((int)uVar1 < 3) {
        if ((param_3 & 7) == 0) goto LAB_0010145c;
        if (uVar1 == 1) goto LAB_00101440;
      }
      else if (uVar1 == 3) {
        while( true ) {
          puVar2 = param_2 + 1;
          puVar4 = param_1 + 1;
          *param_1 = *param_2;
LAB_00101424:
          param_2 = puVar2 + 1;
          param_1 = puVar4 + 1;
          *puVar4 = *puVar2;
LAB_00101440:
          *param_1 = *param_2;
          iVar3 = iVar3 + -1;
          if (iVar3 < 1) break;
          param_2 = param_2 + 1;
          param_1 = param_1 + 1;
LAB_0010145c:
          *param_1 = *param_2;
          param_2 = param_2 + 1;
          param_1 = param_1 + 1;
LAB_00101478:
          *param_1 = *param_2;
          puVar2 = param_2 + 1;
          puVar4 = param_1 + 1;
LAB_00101480:
          param_2 = puVar2 + 1;
          param_1 = puVar4 + 1;
          *puVar4 = *puVar2;
LAB_00101494:
          puVar2 = param_2 + 1;
          puVar4 = param_1 + 1;
          *param_1 = *param_2;
LAB_0010149c:
          param_2 = puVar2 + 1;
          param_1 = puVar4 + 1;
          *puVar4 = *puVar2;
        }
      }
    }
    else {
      if (uVar1 == 6) goto LAB_00101480;
      if (uVar1 == 7) goto LAB_00101478;
      if (uVar1 == 5) goto LAB_00101494;
    }
  }
  return param_3;
}

// Function: loop_complex_cond @ 0x1014b0
int loop_complex_cond(int param_1)
{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  if (param_1 < 1) {
    iVar5 = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar3 = iVar3 + 2;
      param_1 = param_1 + -1;
      iVar5 = iVar4 + 1;
      bVar1 = param_1 <= iVar3;
      bVar2 = false;
      if (!bVar1) {
        bVar2 = iVar4 + -8 < 0;
      }
      bVar2 = bVar2 == (!bVar1 && SBORROW4(iVar5,9));
      iVar4 = iVar5;
    } while (((!bVar1 && iVar5 == 9 || !bVar2) && param_1 != 0) &&
             ((bVar1 || iVar5 != 9) && bVar2 || -1 < param_1));
  }
  return iVar3 + param_1 + iVar5;
}

// Function: loop_modify_var @ 0x1014f4
int loop_modify_var(int param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar2 = 0;
  iVar3 = 0;
  if (0 < param_1) {
    while (iVar1 = iVar3 + 1, iVar1 < param_1) {
      iVar2 = iVar2 + iVar1;
      iVar3 = iVar3 + 3;
      if (iVar1 < 6) {
        iVar3 = iVar1;
      }
    }
  }
  return iVar2;
}

// Function: loop_external_state @ 0x10152c
void loop_external_state(int *param_1)
{
  int iVar1;
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x65);
  return;
}

// Function: tail_recursion @ 0x10154c
ulong tail_recursion(int param_1,uint param_2)
{
  ulong uVar1;
  if (1 < param_1) {
    uVar1 = tail_recursion(param_1 + -1,param_1 * param_2);
    return uVar1;
  }
  return (ulong)param_2;
}

// Function: indirect_recursion_a @ 0x101578
ulong indirect_recursion_a(ulong param_1,int param_2)
{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  if (0 < param_2) {
    if ((param_1 & 1) == 0) {
      uVar1 = (int)param_1 / 2;
      uVar3 = (ulong)uVar1;
      if (1 < param_2) {
        uVar3 = indirect_recursion_a(uVar1 + 1,param_2 + -2);
      }
    }
    else {
      iVar2 = (int)param_1 * 3;
      if (param_2 < 2) {
        uVar3 = (ulong)(iVar2 + 1);
      }
      else {
        uVar3 = indirect_recursion_a(iVar2 + 2,param_2 + -2);
      }
    }
    return uVar3;
  }
  return param_1;
}

// Function: call_func_ptr @ 0x1015d8
void call_func_ptr(code *param_1,undefined4 param_2)
{
  (*param_1)(param_2);
  return;
}

// Function: call_func_ptr_array @ 0x1015f4
void call_func_ptr_array(uint param_1,undefined4 param_2)
{
  undefined8 uVar1;
  code *local_20 [3];
  long local_8;
  local_8 = ___stack_chk_guard;
  local_20[0] = (code *)PTR_double_value_00114010;
  local_20[1] = (code *)PTR_triple_value_00114018;
  local_20[2] = (code *)PTR_recursion_factorial_00114020;
  if (param_1 < 3) {
    uVar1 = (*local_20[(int)param_1])(param_2);
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: call_virtual_func @ 0x101674
int call_virtual_func(undefined8 param_1,int param_2)
{
  return param_2 << 1;
}

// Function: process_with_callback @ 0x10167c
int process_with_callback(undefined4 *param_1,int param_2,code *param_3)
{
  int iVar1;
  undefined4 *puVar2;
  int iVar4;
  undefined4 *puVar3;
  if (param_2 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      iVar1 = (*param_3)(*puVar2);
      iVar4 = iVar4 + iVar1;
      puVar2 = puVar3;
    } while (puVar3 != param_1 + (ulong)(param_2 - 1) + 1);
  }
  return iVar4;
}

// Function: test_control_flow_l2 @ 0x1016dc
void test_control_flow_l2(void)
{
  undefined4 uVar1;
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
  puts(&DAT_001020e8);
  uVar1 = loop_multi_exit(7);
  __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar1);
  local_68 = 0;
  uVar1 = infinite_loop(&local_68);
  __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",uVar1);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
  uStack_40 = 0x400000003;
  local_48 = 0x200000001;
  uStack_30 = 0x800000007;
  uStack_38 = 0x600000005;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  uVar1 = duffs_device(&local_28,&local_48,8);
  __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar1);
  uVar1 = loop_complex_cond(10);
  __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",uVar1);
  uVar1 = loop_modify_var(10);
  __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",uVar1);
  local_64 = 0;
  uVar1 = loop_external_state(&local_64);
  __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",uVar1);
  uVar1 = recursion_factorial(5);
  __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",uVar1);
  uVar1 = tail_recursion(5,1);
  __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",uVar1);
  uVar1 = indirect_recursion_a(10,3);
  __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",uVar1);
  uVar1 = call_func_ptr(double_value,5);
  __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",uVar1);
  uVar1 = call_func_ptr_array(0,5);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
  uVar1 = call_func_ptr_array(2,5);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
  local_60 = 0x200000001;
  uStack_58 = 0x400000003;
  local_50 = 5;
  uVar1 = process_with_callback(&local_60,5,double_value);
  __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: non_local_jump @ 0x101968
int non_local_jump(int param_1)
{
  int iVar1;
  iVar1 = _setjmp((__jmp_buf_tag *)&jump_buffer);
  if (iVar1 == 0) {
    if (param_1 < 0) {
      __longjmp_chk(&jump_buffer,1);
    }
    iVar1 = param_1 << 1;
    if (100 < param_1) {
      __longjmp_chk(&jump_buffer,2);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: cpp_exception @ 0x1019cc
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

// Function: large_jump_table @ 0x1019f0
void large_jump_table(uint param_1,undefined4 param_2,undefined4 param_3)
{
  undefined8 uVar1;
  code *local_58 [10];
  long local_8;
  local_8 = ___stack_chk_guard;
  local_58[1] = (code *)PTR_op_sub_00114030;
  local_58[0] = (code *)PTR_op_add_00114028;
  local_58[3] = (code *)PTR_op_div_00114040;
  local_58[2] = (code *)PTR_op_mul_00114038;
  local_58[5] = (code *)PTR_op_and_00114050;
  local_58[4] = (code *)PTR_op_mod_00114048;
  local_58[7] = (code *)PTR_op_xor_00114060;
  local_58[6] = (code *)PTR_op_or_00114058;
  local_58[9] = (code *)PTR_op_shr_00114070;
  local_58[8] = (code *)PTR_op_shl_00114068;
  if (param_1 < 10) {
    uVar1 = (*local_58[(int)param_1])(param_2,param_3);
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: conditional_func_ptr @ 0x101a80
void conditional_func_ptr(int param_1,undefined4 param_2)
{
  code *pcVar1;
  if (param_1 == 0) {
    pcVar1 = double_value;
  }
  else {
    pcVar1 = triple_value;
    if (param_1 != 1) {
      pcVar1 = recursion_factorial;
    }
  }
  (*pcVar1)(param_2);
  return;
}

// Function: state_machine @ 0x101ac4
ulong state_machine(ulong param_1,uint param_2)
{
  int iVar1;
  uint uVar2;
  if (param_2 == 2) {
    param_1 = 2;
  }
  else {
    iVar1 = (int)param_1;
    if ((int)param_2 < 3) {
      if (param_2 == 0) {
        param_1 = (ulong)(iVar1 == 1);
      }
      else if (param_2 == 1) {
        if (iVar1 != 2) {
          uVar2 = 1;
          if (iVar1 == 99) {
            uVar2 = 3;
          }
          param_1 = (ulong)uVar2;
        }
      }
      else {
        param_1 = 3;
      }
    }
    else {
      uVar2 = param_2;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      if (param_2 != 3) {
        uVar2 = 3;
      }
      param_1 = (ulong)uVar2;
    }
  }
  return param_1;
}

// Function: fsm_func_table @ 0x101b28
void fsm_func_table(undefined4 param_1,uint param_2)
{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  uVar4 = 3;
  if (param_2 < 4) {
    uVar4 = (*local_28[(int)param_2])(param_1,local_28[(int)param_2],&DAT_00114078);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(uVar4,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: computed_goto @ 0x101ba4
void computed_goto(undefined8 param_1,undefined8 param_2)
{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
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
  lVar4 = ___stack_chk_guard;
  local_8 = ___stack_chk_guard;
  tmp_ldXn = 0x114098;
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
  if ((uint)param_2 < 4) {
    UNRECOVERED_JUMPTABLE = local_28[(int)(uint)param_2];
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,param_2,0);
    return;
  }
  if (lVar4 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(0xffffffff,&__stack_chk_guard,0,lVar4 - ___stack_chk_guard);
}

// Function: obfuscated_cf @ 0x101c34
int obfuscated_cf(int param_1)
{
  return param_1 << 1;
}

// Function: opaque_predicate @ 0x101c3c
int opaque_predicate(int param_1)
{
  return param_1 << 1;
}

// Function: overlapped_code @ 0x101c44
int overlapped_code(uint param_1)
{
  int iVar1;
  iVar1 = (int)param_1 / 2;
  if ((param_1 & 1) != 0) {
    iVar1 = param_1 * 3 + 1;
  }
  return iVar1;
}

// Function: test_control_flow_l3 @ 0x101c5c
void test_control_flow_l3(void)
{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00102308);
  uVar1 = non_local_jump(5);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
  uVar1 = non_local_jump(0xfffffffb);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
  uVar1 = large_jump_table(0,10,5);
  __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
  uVar1 = conditional_func_ptr(0,5);
  __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",uVar1);
  __printf_chk(1,"CF-L3-05 (state_machine): %d\n");
  uVar1 = fsm_func_table(2,1);
  __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",uVar1);
  local_18 = 0;
  local_14 = 1;
  local_10 = 2;
  local_c = 3;
  uVar1 = computed_goto(&local_18);
  __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
  __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
  __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
  __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: main @ 0x101e00
undefined8 main(void)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}

// Function: _fini @ 0x101e20
void _fini(void)
{
  return;
}

