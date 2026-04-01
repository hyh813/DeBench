/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/5-23/5-23_clang_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 000104e0 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 00010590 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 000105d4 */

/* WARNING: Removing unreachable block (ram,0x000105e8) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 000105f8 */

/* WARNING: Removing unreachable block (ram,0x00010618) */
/* WARNING: Removing unreachable block (ram,0x00010624) */
/* WARNING: Removing unreachable block (ram,0x00010628) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 0001063c */

/* WARNING: Removing unreachable block (ram,0x00010668) */
/* WARNING: Removing unreachable block (ram,0x00010674) */
/* WARNING: Removing unreachable block (ram,0x00010678) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 0001068c */

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



/* Function: param_macro_constants @ 000106f8 */

undefined4 param_macro_constants(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x200;
  if (0x400 < param_1) {
    uVar1 = 0x40;
  }
  return uVar1;
}



/* Function: call_macro_constants @ 0001070c */

undefined4 call_macro_constants(void)

{
  return 0x40;
}



/* Function: param_macro_functions @ 00010714 */

int param_macro_functions(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_1 * param_1 + param_2;
}



/* Function: call_macro_functions @ 00010728 */

undefined4 call_macro_functions(void)

{
  return 0x1e;
}



/* Function: param_conditional_compile @ 00010730 */

int param_conditional_compile(int param_1)

{
  return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 0001073c */

undefined4 call_conditional_compile(void)

{
  return 0x20;
}



/* Function: param_multi_branch_compile @ 00010744 */

int param_multi_branch_compile(int param_1)

{
  return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00010754 */

undefined4 call_multi_branch_compile(void)

{
  return 0xdf22;
}



/* Function: param_macro_recursion @ 00010760 */

int param_macro_recursion(int param_1)

{
  return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00010768 */

undefined4 call_macro_recursion(void)

{
  return 0x74;
}



/* Function: param_stringize @ 00010770 */

undefined4 param_stringize(void)

{
  return 0x13;
}



/* Function: call_stringize @ 00010778 */

undefined4 call_stringize(void)

{
  return 0x13;
}



/* Function: my_func @ 00010780 */

int my_func(int param_1)

{
  return param_1 * 10;
}



/* Function: param_token_paste @ 0001078c */

int param_token_paste(int param_1)

{
  return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 0001079c */

undefined4 call_token_paste(void)

{
  return 0x3c;
}



/* Function: param_variadic_macro @ 000107a4 */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
  printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
  return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 000107d4 */

undefined4 call_variadic_macro(void)

{
  printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  return 0x3c;
}



/* Function: param_macro_override @ 00010800 */

int param_macro_override(int param_1)

{
  return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 0001080c */

undefined4 call_macro_override(void)

{
  return 0x10;
}



/* Function: param_include_guard @ 00010814 */

undefined4 param_include_guard(void)

{
  return 500;
}



/* Function: call_include_guard @ 0001081c */

undefined4 call_include_guard(void)

{
  return 500;
}



/* Function: param_builtin_macros @ 00010824 */

int param_builtin_macros(int param_1)

{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:16");
  return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00010894 */

undefined4 call_builtin_macros(void)

{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:16");
  return 0x17e;
}



/* Function: test_preprocessing_features @ 00010900 */

void test_preprocessing_features(void)

{
  puts(&DAT_0001122f);
  printf(&DAT_0001103b,0x40);
  printf(&DAT_00011056,0x1e);
  printf(&DAT_00011071,0x20);
  printf(&DAT_0001108c,0xdf22);
  printf(&DAT_000110ab,0x74);
  printf(&DAT_000110c7,0x13);
  printf(&DAT_000110f1,0x3c);
  printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  printf(&DAT_0001110c,0x3c);
  printf(&DAT_00011127,0x10);
  printf(&DAT_00011142,500);
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:16");
  printf(&DAT_0001115e,0x17e);
  return;
}



/* Function: param_asm_basic @ 00010a74 */

int param_asm_basic(int param_1)

{
  return param_1 + 10;
}



/* Function: call_asm_basic @ 00010a7c */

undefined4 call_asm_basic(void)

{
  return 0xf;
}



/* Function: param_asm_clobber @ 00010a84 */

int param_asm_clobber(int *param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = 0;
    do {
      iVar1 = *param_1 + iVar1;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: call_asm_clobber @ 00010ab0 */

undefined4 call_asm_clobber(void)

{
  return 0xf;
}



/* Function: param_asm_multi_insn @ 00010ab8 */

void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return;
}



/* Function: call_asm_multi_insn @ 00010ac8 */

undefined4 call_asm_multi_insn(void)

{
  return 0x2a;
}



/* Function: param_asm_simd @ 00010ad0 */

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



/* Function: param_simd_intrinsics @ 00010b00 */

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



/* Function: call_asm_simd @ 00010b30 */

int call_asm_simd(void)

{
  int iVar1;
  int local_18 [4];
  
  iVar1 = 0;
  do {
    local_18[iVar1] = (&DAT_00011290)[iVar1] + (&DAT_00011280)[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return local_18[1] + local_18[0] + local_18[2] + local_18[3];
}



/* Function: param_asm_atomic @ 00010b90 */

int param_asm_atomic(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
  return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00010bac */

int param_atomic_c11(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
  return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00010bc8 */

int call_asm_atomic(void)

{
  int iVar1;
  int local_c;
  
  local_c = 10;
  iVar1 = __atomic_fetch_add_4(&local_c,5,5);
  return iVar1 + local_c + 5;
}



/* Function: param_dynamic_code @ 00010c00 */

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



/* Function: param_memory_protection @ 00010c60 */

undefined4 param_memory_protection(void)

{
  size_t __len;
  undefined4 *__addr;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  __len = sysconf(0x1e);
  uVar2 = 0xffffffff;
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
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



/* Function: param_clobber_importance @ 00010d0c */

int param_clobber_importance(int param_1,int param_2)

{
  return (param_2 + param_1) * 2;
}



/* Function: call_asm_privileged @ 00010d18 */

undefined4 call_asm_privileged(void)

{
  size_t __len;
  void *__addr;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  __len = sysconf(0x1e);
  uVar3 = 0xffffffff;
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr != (void *)0xffffffff) {
    munmap(__addr,__len);
    uVar3 = 0xf;
  }
  iVar1 = param_memory_protection();
  uVar2 = uVar3;
  if (iVar1 == 0x2a) {
    uVar2 = 0x4d;
  }
  if (__addr == (void *)0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}



/* Function: param_memory_clobber_demo @ 00010d90 */

int param_memory_clobber_demo(void)

{
  return global_var + 0x32;
}



/* Function: test_asm_features @ 00010da4 */

void test_asm_features(void)

{
  int iVar1;
  size_t __len;
  void *__addr;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_20 [4];
  
  puts(&DAT_00011256);
  printf(&DAT_00011187,0xf);
  printf(&DAT_000111a3,0xf);
  printf(&DAT_000111bf,0x2a);
  iVar1 = 0;
  do {
    local_20[iVar1] = (&DAT_00011290)[iVar1] + (&DAT_00011280)[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  printf(&DAT_000111db,local_20[1] + local_20[0] + local_20[2] + local_20[3]);
  local_20[0] = 10;
  iVar1 = __atomic_fetch_add_4(local_20,5,5);
  printf(&DAT_000111f7,iVar1 + local_20[0] + 5);
  __len = sysconf(0x1e);
  uVar3 = 0xffffffff;
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr != (void *)0xffffffff) {
    munmap(__addr,__len);
    uVar3 = 0xf;
  }
  iVar1 = param_memory_protection();
  uVar2 = uVar3;
  if (iVar1 == 0x2a) {
    uVar2 = 0x4d;
  }
  if (__addr == (void *)0xffffffff) {
    uVar2 = uVar3;
  }
  printf(&DAT_00011213,uVar2);
  return;
}



/* Function: main @ 00010f0c */

undefined4 main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: _fini @ 00010f24 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 50 */
