/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/5-23/5-23_clang_O0_no_g
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
  undefined4 local_4;
  
  if (param_1 < 0x401) {
    local_4 = 0x200;
  }
  else {
    local_4 = 0x40;
  }
  return local_4;
}



/* Function: call_macro_constants @ 00010734 */

void call_macro_constants(void)

{
  param_macro_constants(0x800);
  return;
}



/* Function: param_macro_functions @ 0001074c */

int param_macro_functions(int param_1,int param_2)

{
  int local_10;
  
  local_10 = param_2;
  if (param_2 < param_1) {
    local_10 = param_1;
  }
  return param_1 * param_1 + local_10;
}



/* Function: call_macro_functions @ 000107a0 */

void call_macro_functions(void)

{
  param_macro_functions(5,3);
  return;
}



/* Function: param_conditional_compile @ 000107bc */

int param_conditional_compile(int param_1)

{
  return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 000107e8 */

void call_conditional_compile(void)

{
  param_conditional_compile(10);
  return;
}



/* Function: param_multi_branch_compile @ 00010800 */

int param_multi_branch_compile(int param_1)

{
  return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00010824 */

void call_multi_branch_compile(void)

{
  param_multi_branch_compile(10);
  return;
}



/* Function: param_macro_recursion @ 0001083c */

int param_macro_recursion(int param_1)

{
  return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00010854 */

void call_macro_recursion(void)

{
  param_macro_recursion(100);
  return;
}



/* Function: param_stringize @ 0001086c */

int param_stringize(void)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  
  sVar1 = strlen("Hello World");
  sVar2 = strlen("1.2.3");
  sVar3 = strlen("155");
  return sVar1 + sVar2 + sVar3;
}



/* Function: call_stringize @ 000108f0 */

void call_stringize(void)

{
  param_stringize(0);
  return;
}



/* Function: my_func @ 00010908 */

int my_func(int param_1)

{
  return param_1 * 10;
}



/* Function: param_token_paste @ 00010924 */

int param_token_paste(int param_1)

{
  int iVar1;
  
  iVar1 = my_func(param_1);
  return iVar1 + param_1 + 5;
}



/* Function: call_token_paste @ 0001096c */

void call_token_paste(void)

{
  param_token_paste(5);
  return;
}



/* Function: param_variadic_macro @ 00010984 */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
  printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
  return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 000109dc */

void call_variadic_macro(void)

{
  param_variadic_macro(10,0x14,0x1e);
  return;
}



/* Function: param_macro_override @ 000109fc */

int param_macro_override(int param_1)

{
  return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00010a30 */

void call_macro_override(void)

{
  param_macro_override(5);
  return;
}



/* Function: param_include_guard @ 00010a48 */

void param_include_guard(void)

{
  header_func(5);
  return;
}



/* Function: header_func @ 00010a60 */

int header_func(int param_1)

{
  return param_1 * 100;
}



/* Function: call_include_guard @ 00010a7c */

void call_include_guard(void)

{
  param_include_guard();
  return;
}



/* Function: param_builtin_macros @ 00010a90 */

int param_builtin_macros(int param_1)

{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:14");
  return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00010b64 */

void call_builtin_macros(void)

{
  param_builtin_macros(100);
  return;
}



/* Function: test_preprocessing_features @ 00010b7c */

void test_preprocessing_features(void)

{
  undefined4 uVar1;
  
  printf(&DAT_00011551);
  uVar1 = call_macro_constants();
  printf(&DAT_00011579,uVar1);
  uVar1 = call_macro_functions();
  printf(&DAT_00011594,uVar1);
  uVar1 = call_conditional_compile();
  printf(&DAT_000115af,uVar1);
  uVar1 = call_multi_branch_compile();
  printf(&DAT_000115ca,uVar1);
  uVar1 = call_macro_recursion();
  printf(&DAT_000115e9,uVar1);
  uVar1 = call_stringize();
  printf(&DAT_00011605,uVar1);
  uVar1 = call_token_paste();
  printf(&DAT_0001162f,uVar1);
  uVar1 = call_variadic_macro();
  printf(&DAT_0001164a,uVar1);
  uVar1 = call_macro_override();
  printf(&DAT_00011665,uVar1);
  uVar1 = call_include_guard();
  printf(&DAT_00011680,uVar1);
  uVar1 = call_builtin_macros();
  printf(&DAT_0001169c,uVar1);
  return;
}



/* Function: param_asm_basic @ 00010ca4 */

int param_asm_basic(int param_1)

{
  return param_1 + 10;
}



/* Function: call_asm_basic @ 00010cc4 */

void call_asm_basic(void)

{
  param_asm_basic(5);
  return;
}



/* Function: param_asm_clobber @ 00010cdc */

int param_asm_clobber(int param_1,int param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    local_c = local_c + *(int *)(param_1 + local_10 * 4);
  }
  return local_c;
}



/* Function: call_asm_clobber @ 00010d44 */

void call_asm_clobber(void)

{
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_24 = 1;
  uStack_20 = 2;
  uStack_1c = 3;
  uStack_18 = 4;
  uStack_14 = 5;
  param_asm_clobber(&local_24,5);
  return;
}



/* Function: param_asm_multi_insn @ 00010d80 */

void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return;
}



/* Function: call_asm_multi_insn @ 00010db4 */

undefined4 call_asm_multi_insn(void)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_c = 0x4d;
  local_10 = 0x5341206f;
  local_14 = 0x6c6c6548;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  param_asm_multi_insn(&local_34,&local_14,9);
  bVar2 = false;
  if ((char)local_34 == 'H') {
    bVar2 = (char)local_30 == 'o';
  }
  uVar1 = 0xffffffff;
  if (bVar2) {
    uVar1 = 0x2a;
  }
  return uVar1;
}



/* Function: param_asm_simd @ 00010e64 */

undefined4 param_asm_simd(int param_1,int param_2,int param_3)

{
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    *(int *)(param_3 + local_10 * 4) =
         *(int *)(param_1 + local_10 * 4) + *(int *)(param_2 + local_10 * 4);
  }
  return 0;
}



/* Function: param_simd_intrinsics @ 00010ed0 */

undefined4 param_simd_intrinsics(int param_1,int param_2,int param_3)

{
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    *(int *)(param_3 + local_10 * 4) =
         *(int *)(param_1 + local_10 * 4) + *(int *)(param_2 + local_10 * 4);
  }
  return 0;
}



/* Function: call_asm_simd @ 00010f3c */

int call_asm_simd(void)

{
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 1;
  local_14 = 2;
  local_10 = 3;
  local_c = 4;
  local_24 = 6;
  local_20 = 7;
  local_1c = 8;
  local_28 = 5;
  param_asm_simd(&local_18,&local_28,&local_38);
  return local_38 + local_34 + local_30 + local_2c;
}



/* Function: param_asm_atomic @ 00010fe8 */

int param_asm_atomic(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
  return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00011038 */

int param_atomic_c11(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
  return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00011080 */

int call_asm_atomic(void)

{
  int iVar1;
  int local_c;
  
  local_c = 10;
  iVar1 = param_asm_atomic(&local_c,5);
  return local_c + iVar1;
}



/* Function: param_dynamic_code @ 000110bc */

int param_dynamic_code(int param_1)

{
  size_t __len;
  void *__addr;
  undefined4 local_c;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (void *)0xffffffff) {
    local_c = -1;
  }
  else {
    local_c = param_1 + 5;
    munmap(__addr,__len);
  }
  return local_c;
}



/* Function: param_memory_protection @ 00011150 */

undefined4 param_memory_protection(void)

{
  size_t __len;
  undefined4 *__addr;
  int iVar1;
  undefined4 local_c;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr == (undefined4 *)0xffffffff) {
    local_c = 0xffffffff;
  }
  else {
    *__addr = 0x2a;
    iVar1 = mprotect(__addr,__len,1);
    if (iVar1 == 0) {
      local_c = *__addr;
      iVar1 = mprotect(__addr,__len,3);
      if (iVar1 == 0) {
        *__addr = 100;
        munmap(__addr,__len);
      }
      else {
        munmap(__addr,__len);
        local_c = 0xfffffffd;
      }
    }
    else {
      munmap(__addr,__len);
      local_c = 0xfffffffe;
    }
  }
  return local_c;
}



/* Function: param_clobber_importance @ 00011268 */

int param_clobber_importance(int param_1,int param_2)

{
  return (param_1 + param_2) * 2;
}



/* Function: call_asm_privileged @ 0001128c */

int call_asm_privileged(void)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  local_c = param_dynamic_code(10);
  iVar1 = param_memory_protection();
  iVar2 = param_clobber_importance(3,7);
  if (((local_c == 0xf) && (iVar1 == 0x2a)) && (iVar2 == 0x14)) {
    local_c = 0x4d;
  }
  return local_c;
}



/* Function: param_memory_clobber_demo @ 00011314 */

int param_memory_clobber_demo(void)

{
  return global_var + 0x32;
}



/* Function: test_asm_features @ 00011344 */

void test_asm_features(void)

{
  undefined4 uVar1;
  
  printf(&DAT_000116cf);
  uVar1 = call_asm_basic();
  printf(&DAT_000116fa,uVar1);
  uVar1 = call_asm_clobber();
  printf(&DAT_00011716,uVar1);
  uVar1 = call_asm_multi_insn();
  printf(&DAT_00011732,uVar1);
  uVar1 = call_asm_simd();
  printf(&DAT_0001174e,uVar1);
  uVar1 = call_asm_atomic();
  printf(&DAT_0001176a,uVar1);
  uVar1 = call_asm_privileged();
  printf(&DAT_00011786,uVar1);
  return;
}



/* Function: main @ 000113f4 */

undefined4 main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: _fini @ 00011424 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 51 */
