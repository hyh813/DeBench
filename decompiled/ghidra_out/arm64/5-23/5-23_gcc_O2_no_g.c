/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/5-23/5-23_gcc_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 001007f0 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100810 @ 00100810 */

void FUN_00100810(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 00100900 */

undefined8 main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: FUN_0010091c @ 0010091c */

void FUN_0010091c(void)

{
  byte extraout_var;
  
  __getauxval(0x10);
  __aarch64_have_lse_atomics = extraout_var & 1;
  return;
}



/* Function: init_have_lse_atomics @ 00100920 */

void init_have_lse_atomics(void)

{
  byte extraout_var;
  
  __getauxval(0x10);
  __aarch64_have_lse_atomics = extraout_var & 1;
  return;
}



/* Function: _start @ 00100980 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 001009b4 */

/* WARNING: Removing unreachable block (ram,0x001009c4) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 001009d0 */

/* WARNING: Removing unreachable block (ram,0x001009e8) */
/* WARNING: Removing unreachable block (ram,0x001009f4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100a00 */

/* WARNING: Removing unreachable block (ram,0x00100a24) */
/* WARNING: Removing unreachable block (ram,0x00100a30) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_00100a3c @ 00100a3c */

void FUN_00100a3c(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100a40 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: param_macro_constants @ 00100aa0 */

undefined4 param_macro_constants(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x200;
  if (0x400 < param_1) {
    uVar1 = 0x40;
  }
  return uVar1;
}



/* Function: call_macro_constants @ 00100ab4 */

undefined8 call_macro_constants(void)

{
  return 0x40;
}



/* Function: param_macro_functions @ 00100ac0 */

int param_macro_functions(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 < param_2) {
    iVar1 = param_2;
  }
  return iVar1 + param_1 * param_1;
}



/* Function: call_macro_functions @ 00100ad0 */

undefined8 call_macro_functions(void)

{
  return 0x1e;
}



/* Function: param_conditional_compile @ 00100ae0 */

int param_conditional_compile(int param_1)

{
  return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00100af0 */

undefined8 call_conditional_compile(void)

{
  return 0x20;
}



/* Function: param_multi_branch_compile @ 00100b00 */

int param_multi_branch_compile(int param_1)

{
  return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100b10 */

undefined8 call_multi_branch_compile(void)

{
  return 0xdf22;
}



/* Function: param_macro_recursion @ 00100b20 */

int param_macro_recursion(int param_1)

{
  return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00100b30 */

undefined8 call_macro_recursion(void)

{
  return 0x74;
}



/* Function: param_stringize @ 00100b40 */

undefined8 param_stringize(void)

{
  return 0x13;
}



/* Function: call_stringize @ 00100b50 */

undefined8 call_stringize(void)

{
  return 0x13;
}



/* Function: my_func @ 00100b60 */

int my_func(int param_1)

{
  return param_1 * 10;
}



/* Function: param_token_paste @ 00100b70 */

int param_token_paste(int param_1)

{
  return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 00100b80 */

undefined8 call_token_paste(void)

{
  return 0x3c;
}



/* Function: param_variadic_macro @ 00100b90 */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
  return param_1 + 0x32;
}



/* Function: FUN_00100bcc @ 00100bcc */

undefined8 FUN_00100bcc(void)

{
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  return 0x3c;
}



/* Function: call_variadic_macro @ 00100bd0 */

undefined8 call_variadic_macro(void)

{
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  return 0x3c;
}



/* Function: param_macro_override @ 00100c00 */

int param_macro_override(int param_1)

{
  return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00100c10 */

undefined8 call_macro_override(void)

{
  return 0x10;
}



/* Function: param_include_guard @ 00100c20 */

undefined8 param_include_guard(void)

{
  return 500;
}



/* Function: call_include_guard @ 00100c30 */

undefined8 call_include_guard(void)

{
  return 500;
}



/* Function: param_builtin_macros @ 00100c40 */

int param_builtin_macros(int param_1)

{
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","03:01:30");
  return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00100c94 */

undefined8 call_builtin_macros(void)

{
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","03:01:30");
  return 0x17e;
}



/* Function: FUN_00100cdc @ 00100cdc */

void FUN_00100cdc(void)

{
  __printf_chk(1,&DAT_00101550);
  __printf_chk(1,&DAT_00101578,0x40);
  __printf_chk(1,&DAT_00101598,0x1e);
  __printf_chk(1,&DAT_001015b8,0x20);
  __printf_chk(1,&DAT_001015d8,0xdf22);
  __printf_chk(1,&DAT_001015f8,0x74);
  __printf_chk(1,&DAT_00101618,0x13);
  __printf_chk(1,&DAT_00101648,0x3c);
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  __printf_chk(1,&DAT_00101668,0x3c);
  __printf_chk(1,&DAT_00101688,0x10);
  __printf_chk(1,&DAT_001016a8,500);
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","03:01:30");
  __printf_chk(1,&DAT_001016c8,0x17e);
  return;
}



/* Function: test_preprocessing_features @ 00100ce0 */

void test_preprocessing_features(void)

{
  __printf_chk(1,&DAT_00101550);
  __printf_chk(1,&DAT_00101578,0x40);
  __printf_chk(1,&DAT_00101598,0x1e);
  __printf_chk(1,&DAT_001015b8,0x20);
  __printf_chk(1,&DAT_001015d8,0xdf22);
  __printf_chk(1,&DAT_001015f8,0x74);
  __printf_chk(1,&DAT_00101618,0x13);
  __printf_chk(1,&DAT_00101648,0x3c);
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  __printf_chk(1,&DAT_00101668,0x3c);
  __printf_chk(1,&DAT_00101688,0x10);
  __printf_chk(1,&DAT_001016a8,500);
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","03:01:30");
  __printf_chk(1,&DAT_001016c8,0x17e);
  return;
}



/* Function: param_asm_basic @ 00100e30 */

int param_asm_basic(int param_1)

{
  return param_1 + 10;
}



/* Function: call_asm_basic @ 00100e40 */

undefined8 call_asm_basic(void)

{
  return 0xf;
}



/* Function: param_asm_clobber @ 00100e50 */

int param_asm_clobber(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (0 < param_2) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      lVar1 = lVar3 * 4;
      lVar3 = lVar3 + 1;
      iVar2 = iVar2 + *(int *)(param_1 + lVar1);
    } while ((int)lVar3 < param_2);
    return iVar2;
  }
  return 0;
}



/* Function: call_asm_clobber @ 00100e90 */

/* WARNING: Removing unreachable block (ram,0x00100f0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_asm_clobber(void)

{
  long lVar1;
  
  lVar1 = 1;
  do {
    lVar1 = lVar1 + 1;
  } while (lVar1 != 6);
  return;
}



/* Function: call_asm_multi_insn @ 00100f14 */

undefined8 call_asm_multi_insn(void)

{
  return 0x2a;
}



/* Function: param_asm_simd @ 00100f20 */

undefined8 param_asm_simd(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(int *)(param_3 + lVar1) = *(int *)(param_1 + lVar1) + *(int *)(param_2 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  return 0;
}



/* Function: param_simd_intrinsics @ 00100f50 */

undefined8 param_simd_intrinsics(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(int *)(param_3 + lVar1) = *(int *)(param_1 + lVar1) + *(int *)(param_2 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  return 0;
}



/* Function: call_asm_simd @ 00100f80 */

/* WARNING: Removing unreachable block (ram,0x00101058) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_asm_simd(void)

{
  long lVar1;
  long lVar2;
  int aiStack_3c [15];
  
  aiStack_3c[7] = 7;
  aiStack_3c[8] = 8;
  aiStack_3c[3] = 3;
  aiStack_3c[4] = 4;
  lVar2 = 8;
  do {
    lVar1 = lVar2 + 4;
    *(int *)((long)aiStack_3c + lVar2 + 0x20) =
         *(int *)((long)aiStack_3c + lVar2) + *(int *)((long)aiStack_3c + lVar2 + 0x10);
    lVar2 = lVar1;
  } while (lVar1 != 0x14);
  return;
}



/* Function: FUN_0010105c @ 0010105c */

int FUN_0010105c(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
  return iVar1 + param_2;
}



/* Function: param_asm_atomic @ 00101060 */

int param_asm_atomic(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
  return iVar1 + param_2;
}



/* Function: FUN_0010108c @ 0010108c */

int FUN_0010108c(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
  return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00101090 */

int param_atomic_c11(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
  return iVar1 + param_2;
}



/* Function: FUN_001010bc @ 001010bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001010bc(void)

{
  int iVar1;
  int iStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iStack_c = 10;
  iVar1 = __aarch64_ldadd4_acq_rel(5,&iStack_c,&__stack_chk_guard,10,0);
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 + 5 + iStack_c,&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
}



/* Function: call_asm_atomic @ 001010c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_asm_atomic(void)

{
  int iVar1;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = 10;
  iVar1 = __aarch64_ldadd4_acq_rel(5,&local_c,&__stack_chk_guard,10,0);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 + 5 + local_c,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_dynamic_code @ 00101124 */

int param_dynamic_code(int param_1)

{
  size_t __len;
  void *__addr;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (void *)0xffffffffffffffff) {
    param_1 = -1;
  }
  else {
    param_1 = param_1 + 5;
    munmap(__addr,__len);
  }
  return param_1;
}



/* Function: param_memory_protection @ 00101190 */

undefined4 param_memory_protection(void)

{
  int iVar1;
  undefined4 uVar2;
  size_t __len;
  undefined4 *__addr;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr == (undefined4 *)0xffffffffffffffff) {
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
        uVar2 = 0xfffffffd;
        munmap(__addr,__len);
      }
    }
    else {
      uVar2 = 0xfffffffe;
      munmap(__addr,__len);
    }
  }
  return uVar2;
}



/* Function: param_clobber_importance @ 00101260 */

int param_clobber_importance(int param_1,int param_2)

{
  return (param_1 + param_2) * 2;
}



/* Function: FUN_0010126c @ 0010126c */

undefined4 FUN_0010126c(void)

{
  int iVar1;
  undefined4 uVar2;
  size_t __len;
  void *__addr;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (void *)0xffffffffffffffff) {
    param_memory_protection();
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = munmap(__addr,__len);
    iVar1 = param_memory_protection(iVar1);
    uVar2 = 0xf;
    if (iVar1 == 0x2a) {
      uVar2 = 0x4d;
    }
  }
  return uVar2;
}



/* Function: call_asm_privileged @ 00101270 */

undefined4 call_asm_privileged(void)

{
  int iVar1;
  undefined4 uVar2;
  size_t __len;
  void *__addr;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (void *)0xffffffffffffffff) {
    param_memory_protection();
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = munmap(__addr,__len);
    iVar1 = param_memory_protection(iVar1);
    uVar2 = 0xf;
    if (iVar1 == 0x2a) {
      uVar2 = 0x4d;
    }
  }
  return uVar2;
}



/* Function: param_memory_clobber_demo @ 001012e4 */

int param_memory_clobber_demo(void)

{
  return global_var + 0x32;
}



/* Function: test_asm_features @ 001012f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_asm_features(void)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  size_t __len;
  void *__addr;
  int local_24 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __printf_chk(1,&DAT_001016f8,&__stack_chk_guard,0);
  __printf_chk(1,&DAT_00101728,0xf);
  iVar3 = 0;
  local_24[1] = 1;
  local_24[2] = 2;
  local_24[3] = 3;
  local_24[4] = 4;
  local_24[5] = 5;
  lVar4 = 1;
  do {
    lVar1 = lVar4 + 1;
    iVar3 = iVar3 + local_24[lVar4];
    lVar4 = lVar1;
  } while (lVar1 != 6);
  __printf_chk(1,&DAT_00101748,iVar3);
  __printf_chk(1,&DAT_00101768,0x2a);
  uVar2 = call_asm_simd();
  __printf_chk(1,&DAT_00101788,uVar2);
  local_24[0] = 10;
  iVar3 = __aarch64_ldadd4_acq_rel(5,local_24);
  __printf_chk(1,&DAT_001017a8,iVar3 + 5 + local_24[0]);
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (void *)0xffffffffffffffff) {
    param_memory_protection();
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = munmap(__addr,__len);
    iVar3 = param_memory_protection(iVar3);
    uVar2 = 0xf;
    if (iVar3 == 0x2a) {
      uVar2 = 0x4d;
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,uVar2,local_8 - ___stack_chk_guard);
  }
  __printf_chk(1,&DAT_001017c8);
  return;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101480 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (__aarch64_have_lse_atomics == '\0') {
    do {
      iVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = iVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return iVar3;
  }
  LOAcquire();
  iVar3 = *param_2;
  *param_2 = iVar3 + param_1;
  LORelease();
  return iVar3;
}



/* Function: _fini @ 001014b0 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 60 */
