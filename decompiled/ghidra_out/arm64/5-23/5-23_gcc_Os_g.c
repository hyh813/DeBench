/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/5-23/5-23_gcc_Os_g
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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



/* Function: param_macro_constants @ 00100a94 */

int param_macro_constants(int size)

{
  int iVar1;
  
  iVar1 = 0x200;
  if (0x400 < size) {
    iVar1 = 0x40;
  }
  return iVar1;
}



/* Function: call_macro_constants @ 00100aa8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
  return 0x40;
}



/* Function: param_macro_functions @ 00100ab0 */

int param_macro_functions(int x,int y)

{
  int iVar1;
  
  iVar1 = x;
  if (x < y) {
    iVar1 = y;
  }
  return iVar1 + x * x;
}



/* Function: call_macro_functions @ 00100ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
  return 0x1e;
}



/* Function: param_conditional_compile @ 00100ac8 */

int param_conditional_compile(int x)

{
                    /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit3; DW_OP_mul;
                       DW_OP_plus_uconst: 2; DW_OP_stack_value] */
  return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00100ad4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
  return 0x20;
}



/* Function: param_multi_branch_compile @ 00100adc */

int param_multi_branch_compile(int x)

{
  return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100aec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
  return 0xdf22;
}



/* Function: param_macro_recursion @ 00100af4 */

int param_macro_recursion(int x)

{
  return x + 0x10;
}



/* Function: call_macro_recursion @ 00100afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
  return 0x74;
}



/* Function: param_stringize @ 00100b04 */

int param_stringize(int value)

{
                    /* Unresolved local var: char * str1@[???]
                       Unresolved local var: char * str2@[???]
                       Unresolved local var: char * str3@[???] */
  return 0x13;
}



/* Function: call_stringize @ 00100b0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
  return 0x13;
}



/* Function: my_func @ 00100b14 */

int my_func(int x)

{
  return x * 10;
}



/* Function: param_token_paste @ 00100b20 */

int param_token_paste(int x)

{
                    /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit11; DW_OP_mul;
                       DW_OP_plus_uconst: 5; DW_OP_stack_value]
                       Unresolved local var: int temp__LINE__@[DW_OP_breg0(x0): +5;
                       DW_OP_stack_value] */
  return x * 0xb + 5;
}



/* Function: call_token_paste @ 00100b30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
  return 0x3c;
}



/* Function: param_variadic_macro @ 00100b38 */

int param_variadic_macro(int x,int y,int z)

{
                    /* Unresolved local var: int count@[???] */
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",x,y,z);
  return x + 0x32;
}



/* Function: call_variadic_macro @ 00100b74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
  int iVar1;
  
  iVar1 = param_variadic_macro(10,0x14,0x1e);
  return iVar1;
}



/* Function: param_macro_override @ 00100b84 */

int param_macro_override(int x)

{
                    /* Unresolved local var: int r1@[DW_OP_breg0(x0): +1; DW_OP_stack_value]
                       Unresolved local var: int r2@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl;
                       DW_OP_stack_value] */
  return x * 3 + 1;
}



/* Function: call_macro_override @ 00100b90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
  return 0x10;
}



/* Function: param_include_guard @ 00100b98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
  return 500;
}



/* Function: call_include_guard @ 00100ba0 */

undefined8 call_include_guard(void)

{
  return 500;
}



/* Function: param_builtin_macros @ 00100ba8 */

int param_builtin_macros(int x)

{
                    /* Unresolved local var: char * file@[???]
                       Unresolved local var: int line@[???]
                       Unresolved local var: char * func@[???]
                       Unresolved local var: char * date@[???]
                       Unresolved local var: char * time@[???]
                       Unresolved local var: int counter1@[???]
                       Unresolved local var: int counter2@[???]
                       Unresolved local var: int counter3@[???] */
  __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","03:01:34");
  return x + 0x11a;
}



/* Function: call_builtin_macros @ 00100bfc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
  int iVar1;
  
  iVar1 = param_builtin_macros(100);
  return iVar1;
}



/* Function: test_preprocessing_features @ 00100c04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
  int iVar1;
  
  __printf_chk(1,&DAT_001012ae);
  __printf_chk(1,&DAT_001012d6,0x40);
  __printf_chk(1,&DAT_001012f1,0x1e);
  __printf_chk(1,&DAT_0010130c,0x20);
  __printf_chk(1,&DAT_00101327,0xdf22);
  __printf_chk(1,&DAT_00101346,0x74);
  __printf_chk(1,&DAT_00101362,0x13);
  __printf_chk(1,&DAT_0010138c,0x3c);
  iVar1 = call_variadic_macro();
  __printf_chk(1,&DAT_001013a7,iVar1);
  __printf_chk(1,&DAT_001013c2,0x10);
  __printf_chk(1,&DAT_001013dd,500);
  iVar1 = call_builtin_macros();
  __printf_chk(1,&DAT_001013f9,iVar1);
  return;
}



/* Function: param_asm_basic @ 00100d04 */

int param_asm_basic(int x)

{
                    /* Unresolved local var: int result@[DW_OP_breg0(x0): +10; DW_OP_stack_value] */
  return x + 10;
}



/* Function: call_asm_basic @ 00100d0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
  return 0xf;
}



/* Function: param_asm_clobber @ 00100d14 */

int param_asm_clobber(int *arr,int n)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 0;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  for (lVar2 = 0; (int)lVar2 < n; lVar2 = lVar2 + 1) {
    iVar1 = iVar1 + arr[lVar2];
  }
  return iVar1;
}



/* Function: call_asm_clobber @ 00100d3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
  long lVar1;
  int iVar2;
  int arr [5];
  
  lVar1 = ___stack_chk_guard;
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  iVar2 = param_asm_clobber(arr,5);
  if (lVar1 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return iVar2;
}



/* Function: param_asm_multi_insn @ 00100da4 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return;
}



/* Function: call_asm_multi_insn @ 00100da8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
  long lVar1;
  int iVar2;
  char src [10];
  char dst [32];
  
  lVar1 = ___stack_chk_guard;
  dst[0] = '\0';
  dst[1] = '\0';
  dst[2] = '\0';
  dst[3] = '\0';
  dst[4] = '\0';
  dst[5] = '\0';
  dst[6] = '\0';
  dst[7] = '\0';
  dst[8] = '\0';
  dst[9] = '\0';
  dst[10] = '\0';
  dst[0xb] = '\0';
  dst[0xc] = '\0';
  dst[0xd] = '\0';
  dst[0xe] = '\0';
  dst[0xf] = '\0';
  builtin_strncpy(src,"Hello ASM",10);
  dst[0x10] = '\0';
  dst[0x11] = '\0';
  dst[0x12] = '\0';
  dst[0x13] = '\0';
  dst[0x14] = '\0';
  dst[0x15] = '\0';
  dst[0x16] = '\0';
  dst[0x17] = '\0';
  dst[0x18] = '\0';
  dst[0x19] = '\0';
  dst[0x1a] = '\0';
  dst[0x1b] = '\0';
  dst[0x1c] = '\0';
  dst[0x1d] = '\0';
  dst[0x1e] = '\0';
  dst[0x1f] = '\0';
  param_asm_multi_insn(dst,src,9);
  if (dst[0] == 'H') {
    iVar2 = 0x2a;
    if (dst[4] != 'o') {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = -1;
  }
  if (lVar1 - ___stack_chk_guard == 0) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: param_asm_simd @ 00100e40 */

int param_asm_simd(int *a,int *b,int *result)

{
  long lVar1;
  
                    /* Unresolved local var: int i@[???] */
  lVar1 = 0;
  do {
    *(int *)((long)result + lVar1) = *(int *)((long)a + lVar1) + *(int *)((long)b + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  return 0;
}



/* Function: call_asm_simd @ 00100e6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
  int iVar1;
  long lVar2;
  int a [4];
  int b [4];
  int result [4];
  
  lVar2 = ___stack_chk_guard;
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  b[0] = 5;
  b[1] = 6;
  b[2] = 7;
  b[3] = 8;
  param_asm_simd(a,b,result);
  iVar1 = result[0] + result[1] + result[2] + result[3];
  if (lVar2 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1,&__stack_chk_guard,0,lVar2 - ___stack_chk_guard);
  }
  return iVar1;
}



/* Function: param_asm_atomic @ 00100f08 */

int param_asm_atomic(int *counter,int increment)

{
  int iVar1;
  
                    /* Unresolved local var: int old_value@[???] */
  iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
  return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00100f34 */

int param_atomic_c11(int *counter,int increment)

{
  int iVar1;
  
  iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
  return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00100f60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
  int iVar1;
  int counter;
  long local_8;
  
                    /* Unresolved local var: int new_val@[???] */
  local_8 = ___stack_chk_guard;
  counter = 10;
  iVar1 = param_asm_atomic(&counter,5);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 + counter,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return iVar1 + counter;
}



/* Function: param_dynamic_code @ 00100fc0 */

int param_dynamic_code(int x)

{
  size_t __len;
  void *__addr;
  int iVar1;
  
                    /* Unresolved local var: size_t page_size@[???]
                       Unresolved local var: void * exec_mem@[???]
                       Unresolved local var: int result@[???] */
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (void *)0xffffffffffffffff) {
    iVar1 = -1;
  }
  else {
    iVar1 = x + 5;
    munmap(__addr,__len);
  }
  return iVar1;
}



/* Function: param_memory_protection @ 0010102c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
  int iVar1;
  int iVar2;
  size_t __len;
  int *__addr;
  
                    /* Unresolved local var: size_t page_size@[???]
                       Unresolved local var: void * mem@[???]
                       Unresolved local var: int * data@[???]
                       Unresolved local var: int value@[???] */
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr == (int *)0xffffffffffffffff) {
    iVar1 = -1;
  }
  else {
    *__addr = 0x2a;
    iVar1 = mprotect(__addr,__len,1);
    if (iVar1 == 0) {
      iVar1 = *__addr;
      iVar2 = mprotect(__addr,__len,3);
      if (iVar2 == 0) {
        *__addr = 100;
        munmap(__addr,__len);
      }
      else {
        iVar1 = -3;
        munmap(__addr,__len);
      }
    }
    else {
      iVar1 = -2;
      munmap(__addr,__len);
    }
  }
  return iVar1;
}



/* Function: param_clobber_importance @ 001010f8 */

int param_clobber_importance(int a,int b)

{
  return (a + b) * 2;
}



/* Function: call_asm_privileged @ 00101104 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
  iVar1 = param_dynamic_code(10);
  iVar2 = param_memory_protection();
  if (iVar2 == 0x2a && iVar1 == 0xf) {
    iVar1 = 0x4d;
  }
  return iVar1;
}



/* Function: param_memory_clobber_demo @ 0010113c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
                    /* Unresolved local var: int local@[???]
                       Unresolved local var: int result@[???] */
  return global_var + 0x32;
}



/* Function: test_asm_features @ 0010114c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
  int iVar1;
  
  __printf_chk(1,&DAT_0010142c);
  __printf_chk(1,&DAT_00101457,0xf);
  iVar1 = call_asm_clobber();
  __printf_chk(1,&DAT_00101473,iVar1);
  iVar1 = call_asm_multi_insn();
  __printf_chk(1,&DAT_0010148f,iVar1);
  iVar1 = call_asm_simd();
  __printf_chk(1,&DAT_001014ab,iVar1);
  iVar1 = call_asm_atomic();
  __printf_chk(1,&DAT_001014c7,iVar1);
  iVar1 = call_asm_privileged();
  __printf_chk(1,&DAT_001014e3,iVar1);
  return;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101200 */

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



/* Function: _fini @ 00101230 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 54 */
