// Decompiled by BinaryAI
// SHA256: a0c2acc488d9a0f4b0285671e66b5859f49cbabce37f60031a2ef3c08ac18555

// Function: _init @ 0x1007f0
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_00100810 @ 0x100810
void FUN_00100810(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::memcpy @ 0x100830
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100840
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100850
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x100860
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100870
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100880
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::__getauxval @ 0x100890
void __getauxval(void)
{
  __getauxval();
  return;
}

// Function: <EXTERNAL>::abort @ 0x1008a0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::mmap @ 0x1008b0
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
  void *pvVar1;
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}

// Function: <EXTERNAL>::munmap @ 0x1008c0
int munmap(void *__addr,size_t __len)
{
  int iVar1;
  iVar1 = munmap(__addr,__len);
  return iVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x1008d0
long sysconf(int __name)
{
  long lVar1;
  lVar1 = sysconf(__name);
  return lVar1;
}

// Function: <EXTERNAL>::mprotect @ 0x1008e0
int mprotect(void *__addr,size_t __len,int __prot)
{
  int iVar1;
  iVar1 = mprotect(__addr,__len,__prot);
  return iVar1;
}

// Function: init_have_lse_atomics @ 0x100900
void init_have_lse_atomics(void)
{
  byte extraout_var;
  __getauxval(0x10);
  __aarch64_have_lse_atomics = extraout_var & 1;
  return;
}

// Function: _start @ 0x100940
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x100974
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x100990
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x1009c0
void register_tm_clones(void)
{
  return;
}

// Function: FUN_001009fc @ 0x1009fc
void FUN_001009fc(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x100a00
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: param_macro_constants @ 0x100a54
undefined4 param_macro_constants(int param_1)
{
  undefined4 uVar1;
  uVar1 = 0x200;
  if (0x400 < param_1) {
    uVar1 = 0x40;
  }
  return uVar1;
}

// Function: call_macro_constants @ 0x100a68
undefined8 call_macro_constants(void)
{
  return 0x40;
}

// Function: param_macro_functions @ 0x100a70
int param_macro_functions(int param_1,int param_2)
{
  int iVar1;
  iVar1 = param_1;
  if (param_1 < param_2) {
    iVar1 = param_2;
  }
  return iVar1 + param_1 * param_1;
}

// Function: call_macro_functions @ 0x100a80
undefined8 call_macro_functions(void)
{
  return 0x1e;
}

// Function: param_conditional_compile @ 0x100a88
int param_conditional_compile(int param_1)
{
  return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x100a94
undefined8 call_conditional_compile(void)
{
  return 0x20;
}

// Function: param_multi_branch_compile @ 0x100a9c
int param_multi_branch_compile(int param_1)
{
  return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x100aac
undefined8 call_multi_branch_compile(void)
{
  return 0xdf22;
}

// Function: param_macro_recursion @ 0x100ab4
int param_macro_recursion(int param_1)
{
  return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x100abc
undefined8 call_macro_recursion(void)
{
  return 0x74;
}

// Function: param_stringize @ 0x100ac4
undefined8 param_stringize(void)
{
  return 0x13;
}

// Function: call_stringize @ 0x100acc
undefined8 call_stringize(void)
{
  return 0x13;
}

// Function: my_func @ 0x100ad4
int my_func(int param_1)
{
  return param_1 * 10;
}

// Function: param_token_paste @ 0x100ae0
int param_token_paste(int param_1)
{
  return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x100af0
undefined8 call_token_paste(void)
{
  return 0x3c;
}

// Function: param_variadic_macro @ 0x100af8
int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)
{
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
  return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x100b34
void call_variadic_macro(void)
{
  param_variadic_macro(10,0x14,0x1e);
  return;
}

// Function: param_macro_override @ 0x100b54
int param_macro_override(int param_1)
{
  return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x100b60
undefined8 call_macro_override(void)
{
  return 0x10;
}

// Function: param_include_guard @ 0x100b68
undefined8 param_include_guard(void)
{
  return 500;
}

// Function: call_include_guard @ 0x100b70
undefined8 call_include_guard(void)
{
  return 500;
}

// Function: param_builtin_macros @ 0x100b78
int param_builtin_macros(int param_1)
{
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","03:01:27");
  return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100bcc
void call_builtin_macros(void)
{
  param_builtin_macros(100);
  return;
}

// Function: test_preprocessing_features @ 0x100be4
void test_preprocessing_features(void)
{
  undefined4 uVar1;
  __printf_chk(1,&DAT_00101320);
  __printf_chk(1,&DAT_00101348,0x40);
  __printf_chk(1,&DAT_00101368,0x1e);
  __printf_chk(1,&DAT_00101388,0x20);
  __printf_chk(1,&DAT_001013a8,0xdf22);
  __printf_chk(1,&DAT_001013c8,0x74);
  __printf_chk(1,&DAT_001013e8,0x13);
  __printf_chk(1,&DAT_00101418,0x3c);
  uVar1 = call_variadic_macro();
  __printf_chk(1,&DAT_00101438,uVar1);
  __printf_chk(1,&DAT_00101458,0x10);
  __printf_chk(1,&DAT_00101478,500);
  uVar1 = call_builtin_macros();
  __printf_chk(1,&DAT_00101498,uVar1);
  return;
}

// Function: param_asm_basic @ 0x100ce8
int param_asm_basic(int param_1)
{
  return param_1 + 10;
}

// Function: call_asm_basic @ 0x100cf0
undefined8 call_asm_basic(void)
{
  return 0xf;
}

// Function: param_asm_clobber @ 0x100cf8
int param_asm_clobber(long param_1,int param_2)
{
  int iVar1;
  long lVar2;
  if (param_2 < 1) {
    iVar1 = 0;
  }
  else {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < param_2);
  }
  return iVar1;
}

// Function: call_asm_clobber @ 0x100d2c
void call_asm_clobber(void)
{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_20 = 0x200000001;
  uStack_18 = 0x400000003;
  local_10 = 5;
  uVar1 = param_asm_clobber(&local_20,5);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: param_asm_multi_insn @ 0x100d94
void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)
{
  memcpy(param_1,param_2,param_3);
  return;
}

// Function: call_asm_multi_insn @ 0x100da8
void call_asm_multi_insn(void)
{
  undefined4 uVar1;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_38._0_1_ = 'H';
  local_38._1_1_ = 'e';
  local_38._2_1_ = 'l';
  local_38._3_1_ = 'l';
  local_38._4_1_ = 'o';
  local_38._5_1_ = ' ';
  local_38._6_1_ = 'A';
  local_38._7_1_ = 'S';
  local_30._0_1_ = 'M';
  local_30._1_1_ = '\0';
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  param_asm_multi_insn(&local_28,&local_38,9);
  if ((char)local_28 == 'H') {
    uVar1 = 0x2a;
    if (local_28._4_1_ != 'o') {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: param_asm_simd @ 0x100e40
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

// Function: param_simd_intrinsics @ 0x100e68
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

// Function: call_asm_simd @ 0x100e90
void call_asm_simd(void)
{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_38 = 1;
  local_34 = 2;
  local_30 = 3;
  local_2c = 4;
  local_28 = 5;
  local_24 = 6;
  local_20 = 7;
  local_1c = 8;
  param_asm_simd(&local_38,&local_28,&local_18);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(local_18 + local_14 + local_10 + local_c,&__stack_chk_guard,0,
                   local_8 - ___stack_chk_guard);
}

// Function: param_asm_atomic @ 0x100f40
int param_asm_atomic(undefined8 param_1,int param_2)
{
  int iVar1;
  iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
  return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x100f6c
int param_atomic_c11(undefined8 param_1,int param_2)
{
  int iVar1;
  iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
  return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x100f98
void call_asm_atomic(void)
{
  int iVar1;
  int local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_c = 10;
  iVar1 = param_asm_atomic(&local_c,5);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(iVar1 + local_c,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: param_dynamic_code @ 0x100ff8
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

// Function: param_memory_protection @ 0x10105c
undefined4 param_memory_protection(void)
{
  int iVar1;
  size_t __len;
  undefined4 *__addr;
  undefined4 uVar2;
  __len = sysconf(0x1e);
  __addr = (undefined4 *)mmap((void *)0x0,__len,3,0x22,-1,0);
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

// Function: param_clobber_importance @ 0x10112c
int param_clobber_importance(int param_1,int param_2)
{
  return (param_1 + param_2) * 2;
}

// Function: call_asm_privileged @ 0x101138
int call_asm_privileged(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_dynamic_code(10);
  iVar2 = param_memory_protection();
  if (iVar2 == 0x2a && iVar1 == 0xf) {
    iVar1 = 0x4d;
  }
  return iVar1;
}

// Function: param_memory_clobber_demo @ 0x101170
int param_memory_clobber_demo(void)
{
  return global_var + 0x32;
}

// Function: test_asm_features @ 0x101180
void test_asm_features(void)
{
  undefined4 uVar1;
  __printf_chk(1,&DAT_001014d8);
  __printf_chk(1,&DAT_00101508,0xf);
  uVar1 = call_asm_clobber();
  __printf_chk(1,&DAT_00101528,uVar1);
  uVar1 = call_asm_multi_insn();
  __printf_chk(1,&DAT_00101548,uVar1);
  uVar1 = call_asm_simd();
  __printf_chk(1,&DAT_00101568,uVar1);
  uVar1 = call_asm_atomic();
  __printf_chk(1,&DAT_00101588,uVar1);
  uVar1 = call_asm_privileged();
  __printf_chk(1,&DAT_001015a8,uVar1);
  return;
}

// Function: main @ 0x10122c
undefined8 main(void)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101250
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
  int iVar1;
  char cVar2;
  bool bVar3;
  if (__aarch64_have_lse_atomics == '\0') {
    do {
      iVar1 = *param_2;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = iVar1 + param_1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return iVar1;
  }
  LOAcquire();
  tmp_ldWn = *param_2;
  iVar1 = tmp_ldWn;
  tmp_stWn = iVar1 + param_1;
  iVar1 = tmp_stWn;
  *param_2 = iVar1;
  iVar1 = tmp_ldWn;
  LORelease();
  return iVar1;
}

// Function: _fini @ 0x101280
void _fini(void)
{
  return;
}

