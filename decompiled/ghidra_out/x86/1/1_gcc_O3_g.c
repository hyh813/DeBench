/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/1/1_gcc_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00011000 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 00011110 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: _start @ 00011130 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001115c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011160 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011170 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001118b) */
/* WARNING: Removing unreachable block (ram,0x00011195) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 000111b0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000111de) */
/* WARNING: Removing unreachable block (ram,0x000111e8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011200 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001125c) */
/* WARNING: Removing unreachable block (ram,0x00011260) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011299 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001129d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: recursion_factorial @ 000112b0 */

/* WARNING: Unknown calling convention */

int recursion_factorial(int n)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (1 < n) {
    do {
      iVar1 = n + -1;
      iVar2 = iVar2 * n;
      n = iVar1;
    } while (iVar1 != 1);
  }
  return iVar2;
}



/* Function: double_value @ 000112e0 */

/* WARNING: Unknown calling convention */

int double_value(int x)

{
  return x * 2;
}



/* Function: triple_value @ 000112f0 */

/* WARNING: Unknown calling convention */

int triple_value(int x)

{
  return x * 3;
}



/* Function: op_add @ 00011300 */

/* WARNING: Unknown calling convention */

int op_add(int a,int b)

{
  return b + a;
}



/* Function: op_sub @ 00011310 */

/* WARNING: Unknown calling convention */

int op_sub(int a,int b)

{
  return a - b;
}



/* Function: op_mul @ 00011320 */

/* WARNING: Unknown calling convention */

int op_mul(int a,int b)

{
  return b * a;
}



/* Function: op_div @ 00011330 */

/* WARNING: Unknown calling convention */

int op_div(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if (b != 0) {
    iVar1 = a / b;
  }
  return iVar1;
}



/* Function: op_mod @ 00011350 */

/* WARNING: Unknown calling convention */

int op_mod(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if (b != 0) {
    iVar1 = a % b;
  }
  return iVar1;
}



/* Function: op_and @ 00011370 */

/* WARNING: Unknown calling convention */

int op_and(int a,int b)

{
  return b & a;
}



/* Function: op_or @ 00011380 */

/* WARNING: Unknown calling convention */

int op_or(int a,int b)

{
  return b | a;
}



/* Function: op_xor @ 00011390 */

/* WARNING: Unknown calling convention */

int op_xor(int a,int b)

{
  return b ^ a;
}



/* Function: op_shl @ 000113a0 */

/* WARNING: Unknown calling convention */

int op_shl(int a,int b)

{
  return a << ((byte)b & 0x1f);
}



/* Function: op_shr @ 000113b0 */

/* WARNING: Unknown calling convention */

int op_shr(int a,int b)

{
  return a >> ((byte)b & 0x1f);
}



/* Function: state_idle @ 000113c0 */

/* WARNING: Unknown calling convention */

int state_idle(int event)

{
  return (uint)(event == 1);
}



/* Function: state_processing @ 000113d0 */

int state_processing(int event)

{
  if (event != 2) {
    return (uint)(event == 99) * 2 + 1;
  }
  return 2;
}



/* Function: state_done @ 00011400 */

/* WARNING: Unknown calling convention */

int state_done(int event)

{
  return 2;
}



/* Function: state_error @ 00011410 */

/* WARNING: Unknown calling convention */

int state_error(int event)

{
  int iVar1;
  
  iVar1 = 0;
  if (event != 0) {
    iVar1 = 3;
  }
  return iVar1;
}



/* Function: computed_goto @ 00011430 */

int computed_goto(int *labels,int idx)

{
                    /* Unresolved local var: void *[4] targets@[???] */
  return 0x14;
}



/* Function: non_local_jump @ 00011440 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int non_local_jump(int x)

{
  int iVar1;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  return (-(uint)(iVar1 == 0) & 0xb) - 1;
}



/* Function: sequential_ops @ 00011470 */

/* WARNING: Unknown calling convention */

int sequential_ops(int a,int b,int c)

{
  return (b + a) * 2 - c;
}



/* Function: single_if @ 00011490 */

/* WARNING: Unknown calling convention */

int single_if(int x)

{
  int iVar1;
  
  iVar1 = x * 2;
  if (x < 1) {
    iVar1 = x;
  }
  return iVar1;
}



/* Function: if_else @ 000114b0 */

/* WARNING: Unknown calling convention */

int if_else(int x)

{
  return (uint)(0 < x);
}



/* Function: nested_if_2 @ 000114c0 */

/* WARNING: Unknown calling convention */

int nested_if_2(int a,int b)

{
  int iVar1;
  
  iVar1 = 0;
  if ((0 < a) && (iVar1 = a + b, b < 1)) {
    iVar1 = a;
  }
  return iVar1;
}



/* Function: nested_if_deep @ 000114e0 */

int nested_if_deep(int a,int b,int c,int d,int e)

{
  int iVar1;
  
  iVar1 = 0;
  if ((0 < a) && (iVar1 = 1, 0 < b)) {
    if (c < 1) {
      return 2;
    }
    if (0 < d) {
      return (0 < e) + 4;
    }
    iVar1 = 3;
  }
  return iVar1;
}



/* Function: if_elseif_chain @ 00011540 */

int if_elseif_chain(int x)

{
  int iVar1;
  
  iVar1 = 10;
  if (x != 0) {
    if (x != 1) {
      iVar1 = 0x1e;
      if (x != 2) {
        iVar1 = -1;
      }
      return iVar1;
    }
    iVar1 = 0x14;
  }
  return iVar1;
}



/* Function: if_elseif_long @ 00011580 */

/* WARNING: Unknown calling convention */

int if_elseif_long(int x)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)x < 5) {
    iVar1 = (x + 1) * 100;
  }
  return iVar1;
}



/* Function: switch_small @ 000115a0 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* WARNING: Unknown calling convention */

int switch_small(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 4) {
    iVar1 = *(int *)(CSWTCH_56 + op * 4);
  }
  return iVar1;
}



/* Function: switch_large @ 000115d0 */

/* WARNING: Unknown calling convention */

int switch_large(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 10) {
    iVar1 = op * 10;
  }
  return iVar1;
}



/* Function: switch_default @ 000115f0 */

/* WARNING: Unknown calling convention */

int switch_default(int op)

{
  int iVar1;
  
  iVar1 = 0;
  if (op - 1U < 3) {
    iVar1 = op * 100;
  }
  return iVar1;
}



/* Function: switch_fallthrough @ 00011610 */

int switch_fallthrough(int op)

{
  if (op == 2) {
    return 6;
  }
  if (op != 3) {
    return (uint)(op == 1) * 2 + -1;
  }
  return 0x15;
}



/* Function: loop_for_fixed @ 00011650 */

int loop_for_fixed(int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + iVar1;
      iVar1 = iVar1 + 1;
    } while (n != iVar1);
    return iVar2;
  }
  return 0;
}



/* Function: loop_while @ 00011680 */

int loop_while(int x)

{
  int iVar1;
  
  if (x != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      x = x / 10;
    } while (x != 0);
    return iVar1;
  }
  return 1;
}



/* Function: loop_dowhile @ 000116d0 */

int loop_dowhile(int x)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    x = x / 10;
  } while (x != 0);
  return iVar1;
}



/* Function: loop_nested @ 00011710 */

int loop_nested(int m,int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < m) {
    iVar2 = 0;
    iVar1 = 0;
    do {
                    /* Unresolved local var: int j@[???] */
      if (0 < n) {
        iVar1 = n + iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (m != iVar2);
    return iVar1;
  }
  return 0;
}



/* Function: loop_break @ 00011750 */

int loop_break(int target)

{
                    /* Unresolved local var: int i@[???] */
  if (target == 10) {
    return 0;
  }
  if (target == 0x14) {
    return 1;
  }
  if (target == 0x1e) {
    return 2;
  }
  if (target != 0x28) {
    return (uint)(target == 0x32) * 5 + -1;
  }
  return 3;
}



/* Function: loop_continue @ 000117a0 */

int loop_continue(int n)

{
  uint uVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    uVar1 = 1;
    iVar2 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        iVar2 = iVar2 + uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (n + 1U != uVar1);
    return iVar2;
  }
  return 0;
}



/* Function: goto_forward @ 000117e0 */

/* WARNING: Unknown calling convention */

int goto_forward(int x)

{
  if (0 < x) {
    x = x * x;
  }
  return x * 2;
}



/* Function: goto_backward @ 00011800 */

/* WARNING: Unknown calling convention */

int goto_backward(int x)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < x) {
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int i@[???] */
    iVar1 = 1;
    do {
      iVar2 = iVar2 * iVar1;
      iVar1 = iVar1 + 1;
    } while (x + 1 != iVar1);
  }
  return iVar2;
}



/* Function: ternary_op @ 00011830 */

/* WARNING: Unknown calling convention */

int ternary_op(int a,int b)

{
  if (b < a) {
    b = a;
  }
  return b;
}



/* Function: test_control_flow_l1 @ 00011850 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
  puts(&DAT_00013008);
  __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
  __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
  __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
  __printf_chk(1,"CF-L1-03 (if_else): %d\n",1);
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
  __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",0x2d);
  __printf_chk(1,"CF-L1-13 (loop_while): %d\n",5);
  __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",4);
  __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",0xc);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",2);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",0xffffffff);
  __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",0x19);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
  __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
  return;
}



/* Function: loop_multi_exit @ 00011a50 */

int loop_multi_exit(int target)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???] */
  if (target == 1) {
    iVar1 = 0;
LAB_00011a9e:
    iVar2 = 0;
  }
  else {
    if (target == 2) {
      iVar1 = 0;
LAB_00011aab:
      iVar2 = 1;
      goto LAB_00011aa0;
    }
    if (target == 3) {
      iVar1 = 0;
LAB_00011ab4:
      iVar2 = 2;
      goto LAB_00011aa0;
    }
    if (target == 4) {
      iVar1 = 0;
    }
    else {
      if (target == 5) {
        iVar1 = 1;
        goto LAB_00011a9e;
      }
      if (target == 6) {
        iVar1 = 1;
        goto LAB_00011aab;
      }
      if (target == 7) {
        iVar1 = 1;
        goto LAB_00011ab4;
      }
      if (target == 8) {
        iVar1 = 1;
      }
      else {
        if (target == 9) {
          iVar1 = 2;
          goto LAB_00011a9e;
        }
        if (target == 10) {
          iVar1 = 2;
          goto LAB_00011aab;
        }
        if (target == 0xb) {
          iVar1 = 2;
          goto LAB_00011ab4;
        }
        if (target != 0xc) {
          return -1;
        }
        iVar1 = 2;
      }
    }
    iVar2 = 3;
  }
LAB_00011aa0:
  return iVar2 + iVar1 * 10;
}



/* Function: infinite_loop @ 00011b00 */

/* WARNING: Unknown calling convention */

int infinite_loop(int *flag)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*flag == 1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x3e9);
  *flag = 1;
  return 0x3e9;
}



/* Function: multi_return @ 00011b30 */

int multi_return(int x)

{
  int iVar1;
  
  if (x < 0) {
    return -1;
  }
  if (x * 2 < 0x65) {
    iVar1 = x * 2;
    if ((x & 1U) != 0) {
      iVar1 = x + 1;
    }
    return iVar1;
  }
  return -2;
}



/* Function: conditional_return @ 00011b60 */

int conditional_return(int x)

{
  int iVar1;
  
  if (0 < x) {
    return x * 2;
  }
  iVar1 = 0;
  if (x != 0) {
    iVar1 = -x;
  }
  return iVar1;
}



/* Function: duffs_device @ 00011b80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int duffs_device(int *dst,int *src,int n)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (n < 1) {
    n = -1;
  }
  else {
    iVar3 = n + 7 >> 3;
    piVar2 = dst;
    switch(n & 7) {
    case 0:
      piVar4 = src;
      break;
    case 1:
      goto _L192;
    case 2:
      piVar4 = src;
      goto LAB_00011c04;
    case 3:
      goto _L190;
    case 4:
      piVar4 = src;
      goto LAB_00011bf0;
    case 5:
      goto _L188;
    case 6:
      goto _L187;
    case 7:
      goto _L185;
    }
    while( true ) {
      src = piVar4 + 1;
      dst = piVar2 + 1;
      *piVar2 = *piVar4;
_L185:
      iVar1 = *src;
      piVar2 = dst + 1;
      src = src + 1;
      *dst = iVar1;
_L187:
      iVar1 = *src;
      dst = piVar2 + 1;
      src = src + 1;
      *piVar2 = iVar1;
_L188:
      *dst = *src;
      piVar2 = dst + 1;
      piVar4 = src + 1;
LAB_00011bf0:
      src = piVar4 + 1;
      dst = piVar2 + 1;
      *piVar2 = *piVar4;
_L190:
      *dst = *src;
      piVar2 = dst + 1;
      piVar4 = src + 1;
LAB_00011c04:
      src = piVar4 + 1;
      dst = piVar2 + 1;
      *piVar2 = *piVar4;
_L192:
      *dst = *src;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
      piVar2 = dst + 1;
      piVar4 = src + 1;
    }
  }
  return n;
}



/* Function: loop_complex_cond @ 00011c50 */

int loop_complex_cond(int x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < x) {
    iVar3 = x + -1;
    if (iVar3 < 3) {
      iVar1 = 1;
      iVar2 = 2;
    }
    else {
      iVar3 = x + -2;
      if (iVar3 < 5) {
        iVar1 = 2;
        iVar2 = 4;
      }
      else {
        iVar3 = x + -3;
        if (iVar3 < 7) {
          iVar1 = 3;
          iVar2 = 6;
        }
        else {
          iVar3 = x + -4;
          if (iVar3 < 9) {
            iVar1 = 4;
            iVar2 = 8;
          }
          else {
            iVar3 = x + -5;
            if (iVar3 < 0xb) {
              iVar1 = 5;
              iVar2 = 10;
            }
            else {
              iVar3 = x + -6;
              if (iVar3 < 0xd) {
                iVar1 = 6;
                iVar2 = 0xc;
              }
              else {
                iVar3 = x + -7;
                if (iVar3 < 0xf) {
                  iVar1 = 7;
                  iVar2 = 0xe;
                }
                else {
                  iVar3 = x + -8;
                  if (iVar3 < 0x11) {
                    iVar1 = 8;
                    iVar2 = 0x10;
                  }
                  else {
                    iVar3 = x + -9;
                    if (iVar3 < 0x13) {
                      iVar1 = 9;
                      iVar2 = 0x12;
                    }
                    else {
                      iVar3 = x + -10;
                      iVar2 = 0x14;
                      iVar1 = 10;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    x = iVar1 + iVar3 + iVar2;
  }
  return x;
}



/* Function: loop_modify_var @ 00011d30 */

/* WARNING: Removing unreachable block (ram,0x00011d53) */

int loop_modify_var(int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* Unresolved local var: int i@[???] */
  iVar4 = 0;
  if ((0 < n) && (n != 1)) {
    iVar4 = 1;
    iVar2 = 1;
    while (iVar1 = iVar2 + 1, iVar3 = iVar2, iVar1 < n) {
      while (iVar4 = iVar4 + iVar1, iVar2 = iVar1, 5 < iVar1) {
        iVar1 = iVar3 + 4;
        iVar3 = iVar3 + 3;
        if (n <= iVar1) {
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}



/* Function: loop_external_state @ 00011d90 */

/* WARNING: Unknown calling convention */

int loop_external_state(int *flag)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*flag != 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x65);
  return 0x65;
}



/* Function: tail_recursion @ 00011db0 */

/* WARNING: Unknown calling convention */

int tail_recursion(int n,int acc)

{
  if (1 < n) {
    do {
      acc = acc * n;
      n = n + -1;
    } while (n != 1);
  }
  return acc;
}



/* Function: indirect_recursion_a @ 00011de0 */

/* WARNING: Unknown calling convention */

int indirect_recursion_a(int n,int depth)

{
  uint uVar1;
  
  if (0 < depth) {
    do {
      if ((n & 1U) == 0) {
        if (depth == 1) {
          return n / 2;
        }
        uVar1 = n / 2 + 1;
        if (depth < 3) {
          return uVar1;
        }
        if ((uVar1 & 1) == 0) goto LAB_00011e4d;
LAB_00011e0c:
        if (depth == 3) {
          return uVar1 * 3 + 1;
        }
        n = uVar1 * 3 + 2;
      }
      else {
        if (depth == 1) {
          return n * 3 + 1;
        }
        uVar1 = n * 3 + 2;
        if (depth < 3) {
          return uVar1;
        }
        if ((uVar1 & 1) != 0) goto LAB_00011e0c;
LAB_00011e4d:
        if (depth == 3) {
          return (int)uVar1 / 2;
        }
        n = (int)uVar1 / 2 + 1;
      }
      depth = depth + -4;
    } while (depth != 0);
  }
  return n;
}



/* Function: call_func_ptr @ 00011e70 */

int call_func_ptr(_func_int_int *f,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00011e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: call_func_ptr_array @ 00011e90 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_func_ptr_array(int idx,int x)

{
  int iVar1;
  int in_GS_OFFSET;
  _func_int_int *funcs [3];
  
  funcs[0] = double_value;
  funcs[1] = triple_value;
  funcs[2] = recursion_factorial;
  if ((uint)idx < 3) {
    if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Could not recover jumptable at 0x00011ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*funcs[idx])(x);
      return iVar1;
    }
  }
  else if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_virtual_func @ 00011f20 */

/* WARNING: Unknown calling convention */

int call_virtual_func(void *obj,int x)

{
  return x * 2;
}



/* Function: process_with_callback @ 00011f30 */

/* WARNING: Unknown calling convention */

int process_with_callback(int *arr,int n,_func_int_int *cb)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      piVar1 = arr + iVar4;
      iVar4 = iVar4 + 1;
      iVar2 = (*cb)(*piVar1);
      iVar3 = iVar3 + iVar2;
    } while (n != iVar4);
    return iVar3;
  }
  return 0;
}



/* Function: test_control_flow_l2 @ 00011f80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x000120d7) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l2(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_GS_OFFSET;
  int flag;
  int ext_flag;
  int src [8];
  int dst [8];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013110);
  __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",0xc);
                    /* Unresolved local var: int count@[???] */
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x3e9);
  __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",0x3e9);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
  src[0] = 1;
  uVar3 = 0;
  src[1] = 2;
  src[2] = 3;
  src[3] = 4;
  src[4] = 5;
  src[5] = 6;
  src[6] = 7;
  src[7] = 8;
  do {
    *(undefined4 *)((int)dst + uVar3) = 0;
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x20);
  iVar2 = duffs_device(dst,src,8);
  __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",iVar2);
  __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  iVar6 = 1;
  iVar2 = 1;
  do {
    iVar4 = iVar2 + 1;
    iVar5 = iVar2;
    while (iVar6 = iVar6 + iVar4, iVar2 = iVar4, 5 < iVar4) {
      if (iVar5 != 5) {
        __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar6);
                    /* Unresolved local var: int count@[???] */
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0x65);
        __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",0x65);
        __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
        __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
        __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
        __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
        __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
        __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
        __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",0x1e);
        if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      iVar5 = 8;
      iVar4 = 9;
    }
  } while( true );
}



/* Function: non_local_jump @ 000121f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int non_local_jump(int x)

{
  int iVar1;
  undefined4 extraout_EDX;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  if (iVar1 == 0) {
    if (x < 0) {
                    /* WARNING: Subroutine does not return */
      __longjmp_chk(jump_buffer,1,extraout_EDX,extraout_EDX);
    }
    if (100 < x) {
                    /* WARNING: Subroutine does not return */
      __longjmp_chk(jump_buffer,2,0,0);
    }
    iVar1 = x * 2;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: cpp_exception @ 00012270 */

int cpp_exception(int x)

{
  if (x < 0) {
    return -1;
  }
  if (x < 0x65) {
    return x * 2;
  }
  return -2;
}



/* Function: large_jump_table @ 000122a0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int large_jump_table(int op,int a,int b)

{
  int iVar1;
  int in_GS_OFFSET;
  _func_int_int_int *ops [10];
  
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
  if ((uint)op < 10) {
    if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Could not recover jumptable at 0x00012353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*ops[op])(a,b);
      return iVar1;
    }
  }
  else if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: conditional_func_ptr @ 00012380 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

int conditional_func_ptr(int mode,int x)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = double_value;
  if (mode != 0) {
    UNRECOVERED_JUMPTABLE = triple_value;
    if (mode != 1) {
      UNRECOVERED_JUMPTABLE = recursion_factorial;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000123b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)();
  return iVar1;
}



/* Function: state_machine @ 000123c0 */

int state_machine(int event,int state)

{
  if (state == 2) {
    return 2;
  }
  if (state < 3) {
    if (state == 0) {
      return (uint)(event == 1);
    }
    if (state == 1) {
      if (event == 2) {
        return 2;
      }
      return (uint)(event == 99) * 2 + 1;
    }
  }
  else if (state == 3) {
    return -(uint)(event != 0) & 3;
  }
  return 3;
}



/* Function: fsm_func_table @ 00012430 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int fsm_func_table(int event,int state)

{
  int iVar1;
  int in_GS_OFFSET;
  _func_int_int *state_handlers [4];
  
  state_handlers[0] = state_idle;
  state_handlers[1] = state_processing;
  state_handlers[2] = state_done;
  state_handlers[3] = state_error;
  if ((uint)state < 4) {
    if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Could not recover jumptable at 0x0001249d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*state_handlers[state])(event);
      return iVar1;
    }
  }
  else if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: computed_goto @ 000124c0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int computed_goto(int *labels,int idx)

{
  int iVar1;
  int in_GS_OFFSET;
  void *targets [4];
  
  targets[0] = &LAB_00012558;
  targets[1] = &LAB_00012548;
  targets[2] = &LAB_00012538;
  targets[3] = &LAB_00012518;
  if ((uint)idx < 4) {
                    /* WARNING: Could not recover jumptable at 0x0001250f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*targets[idx])();
    return iVar1;
  }
  if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: obfuscated_cf @ 00012570 */

int obfuscated_cf(int param_1)

{
  return param_1 * 2;
}



/* Function: opaque_predicate @ 00012580 */

int opaque_predicate(int param_1)

{
  return param_1 * 2;
}



/* Function: overlapped_code @ 00012590 */

/* WARNING: Unknown calling convention */

int overlapped_code(int x)

{
  if ((x & 1U) != 0) {
    return x * 3 + 1;
  }
  return x / 2;
}



/* Function: test_control_flow_l3 @ 000125c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l3(void)

{
  int iVar1;
  undefined *x;
  int *labels;
  char *idx;
  
  x = &DAT_00013294;
  puts(&DAT_00013294);
  iVar1 = non_local_jump((int)x);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar1);
  iVar1 = non_local_jump(-5);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",iVar1);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
  __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",0xf);
  __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
  __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
  idx = "CF-L3-06 (fsm_func_table): %d\n";
  labels = (int *)0x1;
  __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",2);
  iVar1 = computed_goto(labels,(int)idx);
  __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",iVar1);
  __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
  __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
  __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
  return;
}



/* Function: __x86.get_pc_thunk.ax @ 000126d1 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 000126d5 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
  return;
}



/* Function: __stack_chk_fail_local @ 000126e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00012700 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001271a) */
/* WARNING: Removing unreachable block (ram,0x00012730) */
/* WARNING: Removing unreachable block (ram,0x0001273d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001274c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 82 */
