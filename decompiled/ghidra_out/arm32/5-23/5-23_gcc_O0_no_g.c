/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/5-23/5-23_gcc_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010474 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 00010524 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010568 */

/* WARNING: Removing unreachable block (ram,0x0001057c) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 0001058c */

/* WARNING: Removing unreachable block (ram,0x0001059c) */
/* WARNING: Removing unreachable block (ram,0x000105a4) */
/* WARNING: Removing unreachable block (ram,0x000105a8) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 000105b8 */

/* WARNING: Removing unreachable block (ram,0x000105d4) */
/* WARNING: Removing unreachable block (ram,0x000105dc) */
/* WARNING: Removing unreachable block (ram,0x000105e0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000105f0 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: param_macro_constants @ 0001061c */

undefined4 param_macro_constants(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x401) {
    uVar1 = 0x200;
  }
  else {
    uVar1 = 0x40;
  }
  return uVar1;
}



/* Function: call_macro_constants @ 00010654 */

undefined4 call_macro_constants(void)

{
  undefined4 uVar1;
  
  uVar1 = param_macro_constants(0x800);
  return uVar1;
}



/* Function: param_macro_functions @ 00010670 */

int param_macro_functions(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_1 * param_1 + param_2;
}



/* Function: call_macro_functions @ 000106b4 */

undefined4 call_macro_functions(void)

{
  undefined4 uVar1;
  
  uVar1 = param_macro_functions(5,3);
  return uVar1;
}



/* Function: param_conditional_compile @ 000106d4 */

int param_conditional_compile(int param_1)

{
  return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00010718 */

undefined4 call_conditional_compile(void)

{
  undefined4 uVar1;
  
  uVar1 = param_conditional_compile(10);
  return uVar1;
}



/* Function: param_multi_branch_compile @ 00010734 */

int param_multi_branch_compile(int param_1)

{
  return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 0001076c */

undefined4 call_multi_branch_compile(void)

{
  undefined4 uVar1;
  
  uVar1 = param_multi_branch_compile(10);
  return uVar1;
}



/* Function: param_macro_recursion @ 00010788 */

int param_macro_recursion(int param_1)

{
  return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 000107b0 */

undefined4 call_macro_recursion(void)

{
  undefined4 uVar1;
  
  uVar1 = param_macro_recursion(100);
  return uVar1;
}



/* Function: param_stringize @ 000107cc */

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



/* Function: call_stringize @ 00010838 */

undefined4 call_stringize(void)

{
  undefined4 uVar1;
  
  uVar1 = param_stringize(0);
  return uVar1;
}



/* Function: my_func @ 00010854 */

int my_func(int param_1)

{
  return param_1 * 10;
}



/* Function: param_token_paste @ 00010888 */

int param_token_paste(int param_1)

{
  int iVar1;
  
  iVar1 = my_func(param_1);
  return iVar1 + param_1 + 5;
}



/* Function: call_token_paste @ 000108d0 */

undefined4 call_token_paste(void)

{
  undefined4 uVar1;
  
  uVar1 = param_token_paste(5);
  return uVar1;
}



/* Function: param_variadic_macro @ 000108ec */

/* WARNING: Removing unreachable block (ram,0x00010968) */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
  printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
  return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 00010980 */

undefined4 call_variadic_macro(void)

{
  undefined4 uVar1;
  
  uVar1 = param_variadic_macro(10,0x14,0x1e);
  return uVar1;
}



/* Function: param_macro_override @ 000109a4 */

int param_macro_override(int param_1)

{
  return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 000109e8 */

undefined4 call_macro_override(void)

{
  undefined4 uVar1;
  
  uVar1 = param_macro_override(5);
  return uVar1;
}



/* Function: header_func @ 00010a04 */

int header_func(int param_1)

{
  return param_1 * 100;
}



/* Function: param_include_guard @ 00010a40 */

undefined4 param_include_guard(void)

{
  undefined4 uVar1;
  
  uVar1 = header_func(5);
  return uVar1;
}



/* Function: call_include_guard @ 00010a5c */

undefined4 call_include_guard(void)

{
  undefined4 uVar1;
  
  uVar1 = param_include_guard();
  return uVar1;
}



/* Function: param_builtin_macros @ 00010a74 */

int param_builtin_macros(int param_1)

{
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:02");
  return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00010b30 */

undefined4 call_builtin_macros(void)

{
  undefined4 uVar1;
  
  uVar1 = param_builtin_macros(100);
  return uVar1;
}



/* Function: test_preprocessing_features @ 00010b4c */

int test_preprocessing_features(void)

{
  undefined4 uVar1;
  int iVar2;
  
  puts(&DAT_000124c0);
  uVar1 = call_macro_constants();
  printf(&DAT_000124e8,uVar1);
  uVar1 = call_macro_functions();
  printf(&DAT_00012504,uVar1);
  uVar1 = call_conditional_compile();
  printf(&DAT_00012520,uVar1);
  uVar1 = call_multi_branch_compile();
  printf(&DAT_0001253c,uVar1);
  uVar1 = call_macro_recursion();
  printf(&DAT_0001255c,uVar1);
  uVar1 = call_stringize();
  printf(&DAT_00012578,uVar1);
  uVar1 = call_token_paste();
  printf(&DAT_000125a4,uVar1);
  uVar1 = call_variadic_macro();
  printf(&DAT_000125c0,uVar1);
  uVar1 = call_macro_override();
  printf(&DAT_000125dc,uVar1);
  uVar1 = call_include_guard();
  printf(&DAT_000125f8,uVar1);
  uVar1 = call_builtin_macros();
  iVar2 = printf(&DAT_00012614,uVar1);
  return iVar2;
}



/* Function: param_asm_basic @ 00010c70 */

int param_asm_basic(int param_1)

{
  return param_1 + 10;
}



/* Function: call_asm_basic @ 00010ca0 */

undefined4 call_asm_basic(void)

{
  undefined4 uVar1;
  
  uVar1 = param_asm_basic(5);
  return uVar1;
}



/* Function: param_asm_clobber @ 00010cbc */

int param_asm_clobber(int param_1,int param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    local_10 = local_10 + *(int *)(param_1 + local_c * 4);
  }
  return local_10;
}



/* Function: call_asm_clobber @ 00010d34 */

undefined4 call_asm_clobber(void)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  local_20 = 1;
  uStack_1c = 2;
  uStack_18 = 3;
  uStack_14 = 4;
  local_10 = 5;
  uVar1 = param_asm_clobber(&local_20,5);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_c,0);
  }
  return uVar1;
}



/* Function: param_asm_multi_insn @ 00010db0 */

void * param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = memcpy(param_1,param_2,param_3);
  return pvVar1;
}



/* Function: call_asm_multi_insn @ 00010de4 */

undefined4 call_asm_multi_insn(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char local_38 [4];
  char acStack_34 [4];
  undefined2 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  local_38[0] = 'H';
  local_38[1] = 'e';
  local_38[2] = 'l';
  local_38[3] = 'l';
  acStack_34[0] = 'o';
  acStack_34[1] = ' ';
  acStack_34[2] = 'A';
  acStack_34[3] = 'S';
  local_30 = 0x4d;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  uVar1 = param_asm_multi_insn(&local_2c,local_38,9);
  if (((char)local_2c == 'H') && ((char)local_28 == 'o')) {
    uVar2 = 0x2a;
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_c,0);
  }
  return uVar2;
}



/* Function: param_asm_simd @ 00010ea8 */

undefined4 param_asm_simd(int param_1,int param_2,int param_3)

{
  undefined4 local_c;
  
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    *(int *)(param_3 + local_c * 4) =
         *(int *)(param_1 + local_c * 4) + *(int *)(param_2 + local_c * 4);
  }
  return 0;
}



/* Function: param_simd_intrinsics @ 00010f38 */

undefined4 param_simd_intrinsics(int param_1,int param_2,int param_3)

{
  undefined4 local_c;
  
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    *(int *)(param_3 + local_c * 4) =
         *(int *)(param_1 + local_c * 4) + *(int *)(param_2 + local_c * 4);
  }
  return 0;
}



/* Function: call_asm_simd @ 00010fc8 */

int call_asm_simd(void)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_3c = 1;
  uStack_38 = 2;
  uStack_34 = 3;
  uStack_30 = 4;
  local_2c = 5;
  uStack_28 = 6;
  uStack_24 = 7;
  uStack_20 = 8;
  uVar1 = param_asm_simd(&local_3c,&local_2c,&local_1c);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_c,0);
  }
  return local_1c + local_18 + local_14 + local_10;
}



/* Function: param_asm_atomic @ 00011068 */

int param_asm_atomic(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_fetch_and_add_4(param_1,param_2);
  return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 000110b0 */

int param_atomic_c11(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_fetch_and_add_4(param_1,param_2);
  return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 000110f4 */

int call_asm_atomic(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_14 = 10;
  local_10 = param_asm_atomic(&local_14,5);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_10,local_c,0);
  }
  return local_14 + local_10;
}



/* Function: param_dynamic_code @ 00011164 */

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



/* Function: param_memory_protection @ 000111e8 */

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



/* Function: param_clobber_importance @ 000112e8 */

int param_clobber_importance(int param_1,int param_2)

{
  return (param_1 + param_2) * 2;
}



/* Function: call_asm_privileged @ 0001131c */

int call_asm_privileged(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_dynamic_code(10);
  iVar2 = param_memory_protection();
  iVar3 = param_clobber_importance(3,7);
  if (((iVar1 == 0xf) && (iVar2 == 0x2a)) && (iVar3 == 0x14)) {
    iVar1 = 0x4d;
  }
  return iVar1;
}



/* Function: param_memory_clobber_demo @ 00011388 */

int param_memory_clobber_demo(void)

{
  return global_var + 0x32;
}



/* Function: test_asm_features @ 000113c8 */

int test_asm_features(void)

{
  undefined4 uVar1;
  int iVar2;
  
  puts(&DAT_00012680);
  uVar1 = call_asm_basic();
  printf(&DAT_000126ac,uVar1);
  uVar1 = call_asm_clobber();
  printf(&DAT_000126c8,uVar1);
  uVar1 = call_asm_multi_insn();
  printf(&DAT_000126e4,uVar1);
  uVar1 = call_asm_simd();
  printf(&DAT_00012700,uVar1);
  uVar1 = call_asm_atomic();
  printf(&DAT_0001271c,uVar1);
  uVar1 = call_asm_privileged();
  iVar2 = printf(&DAT_00012738,uVar1);
  return iVar2;
}



/* Function: main @ 00011474 */

undefined4 main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: __sync_fetch_and_add_4 @ 00011490 */

int __sync_fetch_and_add_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 + param_2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_fetch_and_sub_4 @ 000114c8 */

int __sync_fetch_and_sub_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 - param_2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_fetch_and_or_4 @ 00011500 */

uint __sync_fetch_and_or_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 | param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_and_4 @ 00011538 */

uint __sync_fetch_and_and_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 & param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_xor_4 @ 00011570 */

uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 ^ param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_nand_4 @ 000115a8 */

uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,~(uVar2 & param_2),param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_add_2 @ 000115e4 */

int __sync_fetch_and_add_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_sub_2 @ 00011644 */

int __sync_fetch_and_sub_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_or_2 @ 000116a4 */

int __sync_fetch_and_or_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_and_2 @ 00011704 */

int __sync_fetch_and_and_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_xor_2 @ 00011764 */

int __sync_fetch_and_xor_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_nand_2 @ 000117c4 */

int __sync_fetch_and_nand_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_add_1 @ 00011828 */

int __sync_fetch_and_add_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_sub_1 @ 00011884 */

int __sync_fetch_and_sub_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_or_1 @ 000118e0 */

int __sync_fetch_and_or_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_and_1 @ 0001193c */

int __sync_fetch_and_and_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_xor_1 @ 00011998 */

int __sync_fetch_and_xor_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_nand_1 @ 000119f4 */

int __sync_fetch_and_nand_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_add_and_fetch_4 @ 00011a54 */

int __sync_add_and_fetch_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1 + param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_sub_and_fetch_4 @ 00011a8c */

int __sync_sub_and_fetch_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1 - param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_or_and_fetch_4 @ 00011ac4 */

uint __sync_or_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1 | param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_and_and_fetch_4 @ 00011afc */

uint __sync_and_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1 & param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_xor_and_fetch_4 @ 00011b34 */

uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1 ^ param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_nand_and_fetch_4 @ 00011b6c */

uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = ~(*param_1 & param_2);
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_add_and_fetch_2 @ 00011ba8 */

int __sync_add_and_fetch_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_2 @ 00011c10 */

int __sync_sub_and_fetch_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_2 @ 00011c78 */

int __sync_or_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_2 @ 00011ce0 */

int __sync_and_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_2 @ 00011d48 */

int __sync_xor_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_2 @ 00011db0 */

int __sync_nand_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_add_and_fetch_1 @ 00011e1c */

int __sync_add_and_fetch_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_1 @ 00011e80 */

int __sync_sub_and_fetch_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_1 @ 00011ee4 */

int __sync_or_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_1 @ 00011f48 */

int __sync_and_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_1 @ 00011fac */

int __sync_xor_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_1 @ 00012010 */

int __sync_nand_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_val_compare_and_swap_4 @ 00012078 */

int __sync_val_compare_and_swap_4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  do {
    if (*param_1 != param_2) {
      return *param_1;
    }
    iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  } while (iVar1 != 0);
  return param_2;
}



/* Function: __sync_val_compare_and_swap_2 @ 000120c8 */

uint __sync_val_compare_and_swap_2(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    if (uVar1 != (param_2 & 0xffff)) {
      return (int)(short)uVar1;
    }
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return param_2;
}



/* Function: __sync_val_compare_and_swap_1 @ 00012140 */

uint __sync_val_compare_and_swap_1(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    if (uVar1 != (param_2 & 0xff)) {
      return (int)(char)uVar1;
    }
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return param_2;
}



/* Function: __sync_bool_compare_and_swap_4 @ 000121b4 */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 000121e0 */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 000121fc */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 00012224 */

undefined4 __sync_lock_test_and_set_4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_lock_test_and_set_2 @ 0001225c */

int __sync_lock_test_and_set_2(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    iVar1 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar1 != 0);
  return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_test_and_set_1 @ 000122bc */

int __sync_lock_test_and_set_1(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    iVar1 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar1 != 0);
  return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_release_8 @ 00012318 */

void __sync_lock_release_8(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Function: __sync_lock_release_4 @ 0001233c */

void __sync_lock_release_4(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_2 @ 0001235c */

void __sync_lock_release_2(undefined2 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_1 @ 0001237c */

void __sync_lock_release_1(undefined1 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: _fini @ 0001239c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 100 */
