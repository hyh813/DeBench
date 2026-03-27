// Decompiled by BinaryAI
// SHA256: aa82a7d6e46d03d6a79c90373ca8f82f8183e52740dd2d97c08c87c0bf7b7930

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

// Function: main @ 0x100900
undefined8 main(void)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}

// Function: FUN_0010091c @ 0x10091c
void FUN_0010091c(void)
{
  byte extraout_var;
  __getauxval(0x10);
  __aarch64_have_lse_atomics = extraout_var & 1;
  return;
}

// Function: init_have_lse_atomics @ 0x100920
void init_have_lse_atomics(void)
{
  byte extraout_var;
  __getauxval(0x10);
  __aarch64_have_lse_atomics = extraout_var & 1;
  return;
}

// Function: _start @ 0x100980
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x1009b4
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x1009d0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x100a00
void register_tm_clones(void)
{
  return;
}

// Function: FUN_00100a3c @ 0x100a3c
void FUN_00100a3c(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x100a40
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: param_macro_constants @ 0x100a94
undefined4 param_macro_constants(int param_1)
{
  undefined4 uVar1;
  uVar1 = 0x200;
  if (0x400 < param_1) {
    uVar1 = 0x40;
  }
  return uVar1;
}

// Function: call_macro_constants @ 0x100aa8
undefined8 call_macro_constants(void)
{
  return 0x40;
}

// Function: param_macro_functions @ 0x100ab0
int param_macro_functions(int param_1,int param_2)
{
  int iVar1;
  iVar1 = param_1;
  if (param_1 < param_2) {
    iVar1 = param_2;
  }
  return iVar1 + param_1 * param_1;
}

// Function: call_macro_functions @ 0x100ac0
undefined8 call_macro_functions(void)
{
  return 0x1e;
}

// Function: param_conditional_compile @ 0x100ac8
int param_conditional_compile(int param_1)
{
  return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x100ad4
undefined8 call_conditional_compile(void)
{
  return 0x20;
}

// Function: param_multi_branch_compile @ 0x100adc
int param_multi_branch_compile(int param_1)
{
  return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x100aec
undefined8 call_multi_branch_compile(void)
{
  return 0xdf22;
}

// Function: param_macro_recursion @ 0x100af4
int param_macro_recursion(int param_1)
{
  return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x100afc
undefined8 call_macro_recursion(void)
{
  return 0x74;
}

// Function: param_stringize @ 0x100b04
undefined8 param_stringize(void)
{
  return 0x13;
}

// Function: call_stringize @ 0x100b0c
undefined8 call_stringize(void)
{
  return 0x13;
}

// Function: my_func @ 0x100b14
int my_func(int param_1)
{
  return param_1 * 10;
}

// Function: param_token_paste @ 0x100b20
int param_token_paste(int param_1)
{
  return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x100b30
undefined8 call_token_paste(void)
{
  return 0x3c;
}

// Function: param_variadic_macro @ 0x100b38
int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)
{
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
  return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x100b74
void call_variadic_macro(void)
{
  param_variadic_macro(10,0x14,0x1e);
  return;
}

// Function: param_macro_override @ 0x100b84
int param_macro_override(int param_1)
{
  return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x100b90
undefined8 call_macro_override(void)
{
  return 0x10;
}

// Function: param_include_guard @ 0x100b98
undefined8 param_include_guard(void)
{
  return 500;
}

// Function: call_include_guard @ 0x100ba0
undefined8 call_include_guard(void)
{
  return 500;
}

// Function: param_builtin_macros @ 0x100ba8
int param_builtin_macros(int param_1)
{
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","03:01:34");
  return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100bfc
void call_builtin_macros(void)
{
  param_builtin_macros(100);
  return;
}

// Function: test_preprocessing_features @ 0x100c04
void test_preprocessing_features(void)
{
  undefined4 uVar1;
  __printf_chk(1,&DAT_001012ae);
  __printf_chk(1,&DAT_001012d6,0x40);
  __printf_chk(1,&DAT_001012f1,0x1e);
  __printf_chk(1,&DAT_0010130c,0x20);
  __printf_chk(1,&DAT_00101327,0xdf22);
  __printf_chk(1,&DAT_00101346,0x74);
  __printf_chk(1,&DAT_00101362,0x13);
  __printf_chk(1,&DAT_0010138c,0x3c);
  uVar1 = call_variadic_macro();
  __printf_chk(1,&DAT_001013a7,uVar1);
  __printf_chk(1,&DAT_001013c2,0x10);
  __printf_chk(1,&DAT_001013dd,500);
  uVar1 = call_builtin_macros();
  __printf_chk(1,&DAT_001013f9,uVar1);
  return;
}

// Function: param_asm_basic @ 0x100d04
int param_asm_basic(int param_1)
{
  return param_1 + 10;
}

// Function: call_asm_basic @ 0x100d0c
undefined8 call_asm_basic(void)
{
  return 0xf;
}

// Function: param_asm_clobber @ 0x100d14
int param_asm_clobber(long param_1,int param_2)
{
  int iVar1;
  long lVar2;
  iVar1 = 0;
  for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
    iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
  }
  return iVar1;
}

// Function: call_asm_clobber @ 0x100d3c
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
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
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
  local_28 = 0;
  uStack_20 = 0;
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
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
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

// Function: call_asm_simd @ 0x100e6c
void call_asm_simd(void)
{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  int iStack_14;
  int local_10;
  int local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_38 = 0x200000001;
  local_30 = 0x400000003;
  local_28 = 0x600000005;
  local_20 = 0x800000007;
  param_asm_simd(&local_38,&local_28,&local_18);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(local_18 + iStack_14 + local_10 + local_c,&__stack_chk_guard,0,
                     local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: param_asm_atomic @ 0x100f08
int param_asm_atomic(undefined8 param_1,int param_2)
{
  int iVar1;
  iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
  return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x100f34
int param_atomic_c11(undefined8 param_1,int param_2)
{
  int iVar1;
  iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
  return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x100f60
void call_asm_atomic(void)
{
  int iVar1;
  int local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_c = 10;
  iVar1 = param_asm_atomic(&local_c,5);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(iVar1 + local_c,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: param_dynamic_code @ 0x100fc0
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

// Function: param_memory_protection @ 0x10102c
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

// Function: param_clobber_importance @ 0x1010f8
int param_clobber_importance(int param_1,int param_2)
{
  return (param_1 + param_2) * 2;
}

// Function: call_asm_privileged @ 0x101104
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

// Function: param_memory_clobber_demo @ 0x10113c
int param_memory_clobber_demo(void)
{
  return global_var + 0x32;
}

// Function: test_asm_features @ 0x10114c
void test_asm_features(void)
{
  undefined4 uVar1;
  __printf_chk(1,&DAT_0010142c);
  __printf_chk(1,&DAT_00101457,0xf);
  uVar1 = call_asm_clobber();
  __printf_chk(1,&DAT_00101473,uVar1);
  uVar1 = call_asm_multi_insn();
  __printf_chk(1,&DAT_0010148f,uVar1);
  uVar1 = call_asm_simd();
  __printf_chk(1,&DAT_001014ab,uVar1);
  uVar1 = call_asm_atomic();
  __printf_chk(1,&DAT_001014c7,uVar1);
  uVar1 = call_asm_privileged();
  __printf_chk(1,&DAT_001014e3,uVar1);
  return;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101200
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

// Function: _fini @ 0x101230
void _fini(void)
{
  return;
}

