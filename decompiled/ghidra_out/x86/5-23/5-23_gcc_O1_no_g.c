/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/5-23/5-23_gcc_O1_no_g
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



/* Function: param_macro_constants @ 000112a1 */

undefined4 param_macro_constants(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x200;
  if (0x400 < param_1) {
    uVar1 = 0x40;
  }
  return uVar1;
}



/* Function: call_macro_constants @ 000112bb */

undefined4 call_macro_constants(void)

{
  return 0x40;
}



/* Function: param_macro_functions @ 000112c5 */

int param_macro_functions(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * param_1;
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return iVar1 + param_1;
}



/* Function: call_macro_functions @ 000112de */

undefined4 call_macro_functions(void)

{
  return 0x1e;
}



/* Function: param_conditional_compile @ 000112e8 */

int param_conditional_compile(int param_1)

{
  return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 000112f5 */

undefined4 call_conditional_compile(void)

{
  return 0x20;
}



/* Function: param_multi_branch_compile @ 000112ff */

int param_multi_branch_compile(int param_1)

{
  return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 0001130f */

undefined4 call_multi_branch_compile(void)

{
  return 0xdf22;
}



/* Function: param_macro_recursion @ 00011319 */

int param_macro_recursion(int param_1)

{
  return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00011325 */

undefined4 call_macro_recursion(void)

{
  return 0x74;
}



/* Function: param_stringize @ 0001132f */

undefined4 param_stringize(void)

{
  return 0x13;
}



/* Function: call_stringize @ 00011339 */

undefined4 call_stringize(void)

{
  return 0x13;
}



/* Function: my_func @ 00011343 */

int my_func(int param_1)

{
  return param_1 * 10;
}



/* Function: param_token_paste @ 00011351 */

int param_token_paste(int param_1)

{
  return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 00011361 */

undefined4 call_token_paste(void)

{
  return 0x3c;
}



/* Function: param_variadic_macro @ 0001136b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
  return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 000113a3 */

void call_variadic_macro(void)

{
  param_variadic_macro(10,0x14,0x1e);
  return;
}



/* Function: param_macro_override @ 000113b9 */

int param_macro_override(int param_1)

{
  return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 000113c6 */

undefined4 call_macro_override(void)

{
  return 0x10;
}



/* Function: param_include_guard @ 000113d0 */

undefined4 param_include_guard(void)

{
  return 500;
}



/* Function: call_include_guard @ 000113da */

undefined4 call_include_guard(void)

{
  return 500;
}



/* Function: param_builtin_macros @ 000113e4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_builtin_macros(int param_1)

{
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","02:59:50");
  return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00011434 */

void call_builtin_macros(void)

{
  param_builtin_macros(100);
  return;
}



/* Function: test_preprocessing_features @ 00011446 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_preprocessing_features(void)

{
  undefined4 uVar1;
  
  __printf_chk(1,&DAT_000121f4);
  __printf_chk(1,&DAT_00012041,0x40);
  __printf_chk(1,&DAT_0001205c,0x1e);
  __printf_chk(1,&DAT_00012077,0x20);
  __printf_chk(1,&DAT_0001221c,0xdf22);
  __printf_chk(1,&DAT_00012092,0x74);
  __printf_chk(1,&DAT_0001223c,0x13);
  __printf_chk(1,&DAT_000120ae,0x3c);
  uVar1 = call_variadic_macro();
  __printf_chk(1,&DAT_000120c9,uVar1);
  __printf_chk(1,&DAT_000120e4,0x10);
  __printf_chk(1,&DAT_000120ff,500);
  uVar1 = call_builtin_macros();
  __printf_chk(1,&DAT_00012268,uVar1);
  return;
}



/* Function: param_asm_basic @ 0001154b */

int param_asm_basic(int param_1)

{
  return param_1 + 10;
}



/* Function: call_asm_basic @ 0001155d */

void call_asm_basic(void)

{
  param_asm_basic(5);
  return;
}



/* Function: param_asm_clobber @ 0001156c */

int param_asm_clobber(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
  }
  return iVar1;
}



/* Function: call_asm_clobber @ 0001158d */

void call_asm_clobber(void)

{
  int in_GS_OFFSET;
  undefined1 local_24 [20];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  param_asm_clobber(local_24,5);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_asm_multi_insn @ 000115c5 */

void param_asm_multi_insn(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



/* Function: call_asm_multi_insn @ 000115e7 */

undefined4 call_asm_multi_insn(void)

{
  undefined4 uVar1;
  int in_GS_OFFSET;
  undefined4 local_3a;
  undefined4 local_36;
  undefined2 local_32;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_3a = 0x6c6c6548;
  local_36 = 0x5341206f;
  local_32 = 0x4d;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  param_asm_multi_insn(&local_30,&local_3a,9);
  if ((char)local_30 == 'H') {
    uVar1 = 0xffffffff;
    if ((char)local_2c == 'o') {
      uVar1 = 0x2a;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_asm_simd @ 0001169b */

undefined4 param_asm_simd(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  iVar3 = param_1[3];
  iVar4 = param_2[1];
  iVar5 = param_2[2];
  iVar6 = param_2[3];
  *param_3 = *param_1 + *param_2;
  param_3[1] = iVar1 + iVar4;
  param_3[2] = iVar2 + iVar5;
  param_3[3] = iVar3 + iVar6;
  return 0;
}



/* Function: param_simd_intrinsics @ 000116be */

undefined4 param_simd_intrinsics(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_1[1];
  iVar5 = param_1[2];
  iVar6 = param_1[3];
  *param_3 = *param_2 + *param_1;
  param_3[1] = iVar1 + iVar4;
  param_3[2] = iVar2 + iVar5;
  param_3[3] = iVar3 + iVar6;
  return 0;
}



/* Function: call_asm_simd @ 000116df */

int call_asm_simd(void)

{
  int in_GS_OFFSET;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_40 = 1;
  local_3c = 2;
  local_38 = 3;
  local_34 = 4;
  local_30 = 5;
  local_2c = 6;
  local_28 = 7;
  local_24 = 8;
  param_asm_simd(&local_40,&local_30,&local_20);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return local_1c + local_20 + local_18 + local_14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_asm_atomic @ 0001176f */

int param_asm_atomic(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return param_2 + iVar1;
}



/* Function: param_atomic_c11 @ 00011784 */

int param_atomic_c11(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00011799 */

undefined4 call_asm_atomic(void)

{
  int in_GS_OFFSET;
  
  LOCK();
  UNLOCK();
  if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
    return 0x1e;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_dynamic_code @ 000117df */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_dynamic_code(int param_1)

{
  size_t __len;
  void *__addr;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (void *)0xffffffff) {
    param_1 = -1;
  }
  else {
    param_1 = param_1 + 5;
    munmap(__addr,__len);
  }
  return param_1;
}



/* Function: param_memory_protection @ 00011839 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_memory_protection(void)

{
  size_t __len;
  undefined4 *__addr;
  int iVar1;
  undefined4 uVar2;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr == (undefined4 *)0xffffffff) {
    uVar2 = 0xffffffff;
  }
  else {
    *__addr = 0x2a;
    iVar1 = mprotect(__addr,__len,1);
    if (iVar1 == 0) {
      uVar2 = *__addr;
      iVar1 = mprotect(__addr,__len,3);
      if (iVar1 == 0) {
        *__addr = 100;
        munmap(__addr,__len);
      }
      else {
        munmap(__addr,__len);
        uVar2 = 0xfffffffd;
      }
    }
    else {
      munmap(__addr,__len);
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}



/* Function: param_clobber_importance @ 000118ef */

int param_clobber_importance(int param_1,int param_2)

{
  return param_1 * 2 + param_2 * 2;
}



/* Function: call_asm_privileged @ 0001190f */

int call_asm_privileged(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_dynamic_code(10);
  iVar2 = param_memory_protection();
  iVar3 = param_clobber_importance(3,7);
  if ((iVar1 == 0xf && iVar2 == 0x2a) && (iVar3 == 0x14)) {
    iVar1 = 0x4d;
  }
  return iVar1;
}



/* Function: param_memory_clobber_demo @ 0001195a */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

int param_memory_clobber_demo(void)

{
  return global_var + 0x32;
}



/* Function: test_asm_features @ 0001197b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_asm_features(void)

{
  undefined4 uVar1;
  
  __printf_chk(1,&DAT_00012294);
  uVar1 = call_asm_basic();
  __printf_chk(1,&DAT_0001211b,uVar1);
  uVar1 = call_asm_clobber();
  __printf_chk(1,&DAT_00012137,uVar1);
  uVar1 = call_asm_multi_insn();
  __printf_chk(1,&DAT_00012153,uVar1);
  uVar1 = call_asm_simd();
  __printf_chk(1,&DAT_0001216f,uVar1);
  uVar1 = call_asm_atomic();
  __printf_chk(1,&DAT_0001218b,uVar1);
  uVar1 = call_asm_privileged();
  __printf_chk(1,&DAT_000121a7,uVar1);
  return;
}



/* Function: main @ 00011a2b */

undefined4 main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: __x86.get_pc_thunk.cx @ 00011a46 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
  return;
}



/* Function: __stack_chk_fail_local @ 00011a50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00011a70 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011a8a) */
/* WARNING: Removing unreachable block (ram,0x00011aa0) */
/* WARNING: Removing unreachable block (ram,0x00011aad) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011abc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 57 */
