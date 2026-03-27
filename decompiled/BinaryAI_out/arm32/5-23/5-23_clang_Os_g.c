// Decompiled by BinaryAI
// SHA256: 0c6ca96d38f77e7283b5c67854b08b19a76a27b422ffdbbe654b46f519f8e590

// Function: _init @ 0x104e0
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10500
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1050c
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::printf @ 0x10518
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::mprotect @ 0x10524
int mprotect(void *__addr,size_t __len,int __prot)
{
  int iVar1;
  iVar1 = mprotect(__addr,__len,__prot);
  return iVar1;
}

// Function: <EXTERNAL>::memcpy @ 0x10530
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::__atomic_fetch_add_4 @ 0x1053c
void __atomic_fetch_add_4(void)
{
  __atomic_fetch_add_4();
  return;
}

// Function: <EXTERNAL>::sysconf @ 0x10548
long sysconf(int __name)
{
  long lVar1;
  lVar1 = sysconf(__name);
  return lVar1;
}

// Function: <EXTERNAL>::puts @ 0x10554
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::mmap @ 0x1056c
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
  void *pvVar1;
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}

// Function: <EXTERNAL>::munmap @ 0x10578
int munmap(void *__addr,size_t __len)
{
  int iVar1;
  iVar1 = munmap(__addr,__len);
  return iVar1;
}

// Function: <EXTERNAL>::abort @ 0x10584
void abort(void)
{
  abort();
}

// Function: _start @ 0x10590
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x105d4
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x105f8
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x1063c
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x1068c
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}

// Function: param_macro_constants @ 0x106f8
undefined4 param_macro_constants(int param_1)
{
  undefined4 uVar1;
  uVar1 = 0x200;
  if (0x400 < param_1) {
    uVar1 = 0x40;
  }
  return uVar1;
}

// Function: call_macro_constants @ 0x1070c
undefined4 call_macro_constants(void)
{
  return 0x40;
}

// Function: param_macro_functions @ 0x10714
int param_macro_functions(int param_1,int param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_1 * param_1 + param_2;
}

// Function: call_macro_functions @ 0x10728
undefined4 call_macro_functions(void)
{
  return 0x1e;
}

// Function: param_conditional_compile @ 0x10730
int param_conditional_compile(int param_1)
{
  return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x1073c
undefined4 call_conditional_compile(void)
{
  return 0x20;
}

// Function: param_multi_branch_compile @ 0x10744
int param_multi_branch_compile(int param_1)
{
  return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x10754
undefined4 call_multi_branch_compile(void)
{
  return 0xdf22;
}

// Function: param_macro_recursion @ 0x10760
int param_macro_recursion(int param_1)
{
  return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x10768
undefined4 call_macro_recursion(void)
{
  return 0x74;
}

// Function: param_stringize @ 0x10770
undefined4 param_stringize(void)
{
  return 0x13;
}

// Function: call_stringize @ 0x10778
undefined4 call_stringize(void)
{
  return 0x13;
}

// Function: my_func @ 0x10780
int my_func(int param_1)
{
  return param_1 * 10;
}

// Function: param_token_paste @ 0x1078c
int param_token_paste(int param_1)
{
  return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x1079c
undefined4 call_token_paste(void)
{
  return 0x3c;
}

// Function: param_variadic_macro @ 0x107a4
int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)
{
  printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
  return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x107d4
undefined4 call_variadic_macro(void)
{
  printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  return 0x3c;
}

// Function: param_macro_override @ 0x10800
int param_macro_override(int param_1)
{
  return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1080c
undefined4 call_macro_override(void)
{
  return 0x10;
}

// Function: param_include_guard @ 0x10814
undefined4 param_include_guard(void)
{
  return 500;
}

// Function: call_include_guard @ 0x1081c
undefined4 call_include_guard(void)
{
  return 500;
}

// Function: param_builtin_macros @ 0x10824
int param_builtin_macros(int param_1)
{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:23");
  return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x10894
undefined4 call_builtin_macros(void)
{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:23");
  return 0x17e;
}

// Function: test_preprocessing_features @ 0x10900
void test_preprocessing_features(void)
{
  puts(&DAT_0001114f);
  printf(&DAT_00010f5b,0x40);
  printf(&DAT_00010f76,0x1e);
  printf(&DAT_00010f91,0x20);
  printf(&DAT_00010fac,0xdf22);
  printf(&DAT_00010fcb,0x74);
  printf(&DAT_00010fe7,0x13);
  printf(&DAT_00011011,0x3c);
  printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  printf(&DAT_0001102c,0x3c);
  printf(&DAT_00011047,0x10);
  printf(&DAT_00011062,500);
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:23");
  printf(&DAT_0001107e,0x17e);
  return;
}

// Function: param_asm_basic @ 0x10a70
int param_asm_basic(int param_1)
{
  return param_1 + 10;
}

// Function: call_asm_basic @ 0x10a78
undefined4 call_asm_basic(void)
{
  return 0xf;
}

// Function: param_asm_clobber @ 0x10a80
int param_asm_clobber(int *param_1,int param_2)
{
  int iVar1;
  if (0 < param_2) {
    iVar1 = 0;
    do {
      param_2 = param_2 + -1;
      iVar1 = *param_1 + iVar1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    return iVar1;
  }
  return 0;
}

// Function: call_asm_clobber @ 0x10aac
undefined4 call_asm_clobber(void)
{
  return 0xf;
}

// Function: call_asm_multi_insn @ 0x10ab8
undefined4 call_asm_multi_insn(void)
{
  return 0x2a;
}

// Function: param_asm_simd @ 0x10ac0
undefined4 param_asm_simd(int param_1,int param_2,int param_3)
{
  int iVar1;
  iVar1 = 0;
  do {
    *(int *)(param_3 + iVar1 * 4) = *(int *)(param_2 + iVar1 * 4) + *(int *)(param_1 + iVar1 * 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return 0;
}

// Function: param_simd_intrinsics @ 0x10af0
undefined4 param_simd_intrinsics(int param_1,int param_2,int param_3)
{
  int iVar1;
  iVar1 = 0;
  do {
    *(int *)(param_3 + iVar1 * 4) = *(int *)(param_2 + iVar1 * 4) + *(int *)(param_1 + iVar1 * 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return 0;
}

// Function: call_asm_simd @ 0x10b20
int call_asm_simd(void)
{
  int iVar1;
  int local_18 [4];
  iVar1 = 0;
  do {
    local_18[iVar1] = (&DAT_000111b0)[iVar1] + (&DAT_000111a0)[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return local_18[1] + local_18[0] + local_18[2] + local_18[3];
}

// Function: param_asm_atomic @ 0x10b80
int param_asm_atomic(undefined4 param_1,int param_2)
{
  int iVar1;
  iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
  return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x10b9c
int param_atomic_c11(undefined4 param_1,int param_2)
{
  int iVar1;
  iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
  return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x10bb8
int call_asm_atomic(void)
{
  int iVar1;
  int local_c;
  local_c = 10;
  iVar1 = __atomic_fetch_add_4(&local_c,5,5);
  return iVar1 + local_c + 5;
}

// Function: param_dynamic_code @ 0x10bf0
int param_dynamic_code(int param_1)
{
  size_t __len;
  void *__addr;
  int iVar1;
  __len = sysconf(0x1e);
  iVar1 = -1;
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr != (void *)0xffffffff) {
    munmap(__addr,__len);
    iVar1 = param_1 + 5;
  }
  return iVar1;
}

// Function: param_memory_protection @ 0x10c50
undefined4 param_memory_protection(void)
{
  size_t __len;
  undefined4 *__addr;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  __len = sysconf(0x1e);
  uVar2 = 0xffffffff;
  __addr = (undefined4 *)mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr != (undefined4 *)0xffffffff) {
    *__addr = 0x2a;
    iVar1 = mprotect(__addr,__len,1);
    uVar2 = 0xfffffffe;
    if (iVar1 == 0) {
      uVar3 = *__addr;
      iVar1 = mprotect(__addr,__len,3);
      uVar2 = 0xfffffffd;
      if (iVar1 == 0) {
        *__addr = 100;
        uVar2 = uVar3;
      }
    }
    munmap(__addr,__len);
  }
  return uVar2;
}

// Function: param_clobber_importance @ 0x10cfc
int param_clobber_importance(int param_1,int param_2)
{
  return (param_2 + param_1) * 2;
}

// Function: call_asm_privileged @ 0x10d08
uint call_asm_privileged(void)
{
  uint uVar1;
  uint uVar2;
  uVar1 = param_dynamic_code(10);
  uVar2 = param_memory_protection();
  if ((uVar1 ^ 0xf | uVar2 ^ 0x2a) == 0) {
    uVar1 = 0x4d;
  }
  return uVar1;
}

// Function: param_memory_clobber_demo @ 0x10d38
int param_memory_clobber_demo(void)
{
  return global_var + 0x32;
}

// Function: test_asm_features @ 0x10d4c
void test_asm_features(void)
{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_14;
  puts(&DAT_00011176);
  printf(&DAT_000110a7,0xf);
  printf(&DAT_000110c3,0xf);
  printf(&DAT_000110df,0x2a);
  uVar1 = call_asm_simd();
  printf(&DAT_000110fb,uVar1);
  local_14 = 10;
  iVar2 = __atomic_fetch_add_4(&local_14,5,5);
  printf(&DAT_00011117,iVar2 + local_14 + 5);
  uVar3 = param_dynamic_code(10);
  uVar4 = param_memory_protection();
  if ((uVar3 ^ 0xf | uVar4 ^ 0x2a) == 0) {
    uVar3 = 0x4d;
  }
  printf(&DAT_00011133,uVar3);
  return;
}

// Function: main @ 0x10e2c
undefined4 main(void)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}

// Function: _fini @ 0x10e44
void _fini(void)
{
  return;
}

