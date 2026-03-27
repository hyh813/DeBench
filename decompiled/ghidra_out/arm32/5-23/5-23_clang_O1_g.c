/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/5-23/5-23_clang_O1_g
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

int param_macro_constants(int size)

{
  int iVar1;
  
  iVar1 = 0x200;
  if (0x400 < size) {
    iVar1 = 0x40;
  }
  return iVar1;
}



/* Function: call_macro_constants @ 0001070c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
  return 0x40;
}



/* Function: param_macro_functions @ 00010714 */

int param_macro_functions(int x,int y)

{
  if (y < x) {
    y = x;
  }
  return x * x + y;
}



/* Function: call_macro_functions @ 00010728 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
  return 0x1e;
}



/* Function: param_conditional_compile @ 00010730 */

int param_conditional_compile(int x)

{
                    /* Unresolved local var: int result@[DW_OP_reg0(r0)] */
  return x * 3 + 2;
}



/* Function: call_conditional_compile @ 0001073c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
  return 0x20;
}



/* Function: param_multi_branch_compile @ 00010744 */

int param_multi_branch_compile(int x)

{
  return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00010754 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
  return 0xdf22;
}



/* Function: param_macro_recursion @ 00010760 */

int param_macro_recursion(int x)

{
  return x + 0x10;
}



/* Function: call_macro_recursion @ 00010768 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
  return 0x74;
}



/* Function: param_stringize @ 00010770 */

int param_stringize(int value)

{
                    /* Unresolved local var: char * str1@[???]
                       Unresolved local var: char * str2@[???]
                       Unresolved local var: char * str3@[???] */
  return 0x13;
}



/* Function: call_stringize @ 00010778 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
  return 0x13;
}



/* Function: my_func @ 00010780 */

int my_func(int x)

{
  return x * 10;
}



/* Function: param_token_paste @ 0001078c */

int param_token_paste(int x)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int temp__LINE__@[???] */
  return x * 0xb + 5;
}



/* Function: call_token_paste @ 0001079c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
  return 0x3c;
}



/* Function: param_variadic_macro @ 000107a4 */

int param_variadic_macro(int x,int y,int z)

{
                    /* Unresolved local var: int count@[???] */
  printf("LOG: Values: %d, %d, %d\n",x,y,z);
  return x + 0x32;
}



/* Function: call_variadic_macro @ 000107d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
  printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
  return 0x3c;
}



/* Function: param_macro_override @ 00010800 */

int param_macro_override(int x)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return x * 3 + 1;
}



/* Function: call_macro_override @ 0001080c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
  return 0x10;
}



/* Function: param_include_guard @ 00010814 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
  return 500;
}



/* Function: call_include_guard @ 0001081c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
  return 500;
}



/* Function: param_builtin_macros @ 00010824 */

int param_builtin_macros(int x)

{
                    /* Unresolved local var: int line@[???]
                       Unresolved local var: char * time@[???]
                       Unresolved local var: char * date@[???]
                       Unresolved local var: char * file@[???]
                       Unresolved local var: char * func@[???]
                       Unresolved local var: int counter3@[???]
                       Unresolved local var: int counter2@[???]
                       Unresolved local var: int counter1@[???] */
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:15");
  return x + 0x11a;
}



/* Function: call_builtin_macros @ 00010894 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
                    /* Unresolved local var: int line@[???]
                       Unresolved local var: char * time@[???]
                       Unresolved local var: char * date@[???]
                       Unresolved local var: char * file@[???]
                       Unresolved local var: char * func@[???] */
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:15");
  return 0x17e;
}



/* Function: test_preprocessing_features @ 00010900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
                    /* Unresolved local var: int line@[???]
                       Unresolved local var: char * time@[???]
                       Unresolved local var: char * date@[???]
                       Unresolved local var: char * file@[???]
                       Unresolved local var: char * func@[???] */
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:01:15");
  printf(&DAT_0001115e,0x17e);
  return;
}



/* Function: param_asm_basic @ 00010a74 */

int param_asm_basic(int x)

{
                    /* Unresolved local var: int result@[???] */
  return x + 10;
}



/* Function: call_asm_basic @ 00010a7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
  return 0xf;
}



/* Function: param_asm_clobber @ 00010a84 */

int param_asm_clobber(int *arr,int n)

{
  int iVar1;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar1 = 0;
    do {
      iVar1 = *arr + iVar1;
      n = n + -1;
      arr = arr + 1;
    } while (n != 0);
    return iVar1;
  }
  return 0;
}



/* Function: call_asm_clobber @ 00010ab0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
                    /* Unresolved local var: int[5] arr@[???] */
  return 0xf;
}



/* Function: param_asm_multi_insn @ 00010ab8 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return;
}



/* Function: call_asm_multi_insn @ 00010ac8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
                    /* Unresolved local var: char[10] src@[???]
                       Unresolved local var: char[32] dst@[???] */
  return 0x2a;
}



/* Function: param_asm_simd @ 00010ad0 */

int param_asm_simd(int *a,int *b,int *result)

{
  int iVar1;
  
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg14(lr)] */
    result[iVar1] = b[iVar1] + a[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return 0;
}



/* Function: param_simd_intrinsics @ 00010b00 */

int param_simd_intrinsics(int *a,int *b,int *result)

{
  int iVar1;
  
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg14(lr)] */
    result[iVar1] = b[iVar1] + a[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return 0;
}



/* Function: call_asm_simd @ 00010b30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
  int iVar1;
  int local_18 [4];
  
                    /* Unresolved local var: int[4] result@[???]
                       Unresolved local var: int[4] a@[???]
                       Unresolved local var: int[4] b@[???] */
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg0(r0)] */
    local_18[iVar1] = (&DAT_00011290)[iVar1] + (&DAT_00011280)[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return local_18[1] + local_18[0] + local_18[2] + local_18[3];
}



/* Function: param_asm_atomic @ 00010b90 */

int param_asm_atomic(int *counter,int increment)

{
  int iVar1;
  
                    /* Unresolved local var: int old_value@[???] */
  iVar1 = __atomic_fetch_add_4(counter,increment,5);
  return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00010bac */

int param_atomic_c11(int *counter,int increment)

{
  int iVar1;
  
  iVar1 = __atomic_fetch_add_4(counter,increment,5);
  return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00010bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
  int iVar1;
  int local_c;
  
                    /* Unresolved local var: int counter@[???]
                       Unresolved local var: int new_val@[???] */
  local_c = 10;
                    /* Unresolved local var: int old_value@[???] */
  iVar1 = __atomic_fetch_add_4(&local_c,5,5);
  return iVar1 + local_c + 5;
}



/* Function: param_dynamic_code @ 00010c00 */

int param_dynamic_code(int x)

{
  size_t __len;
  void *__addr;
  int iVar1;
  
                    /* Unresolved local var: size_t page_size@[???]
                       Unresolved local var: void * exec_mem@[???]
                       Unresolved local var: int result@[???] */
  __len = sysconf(0x1e);
  iVar1 = -1;
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr != (void *)0xffffffff) {
    munmap(__addr,__len);
    iVar1 = x + 5;
  }
  return iVar1;
}



/* Function: param_memory_protection @ 00010c60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
  size_t __len;
  int *__addr;
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: size_t page_size@[???]
                       Unresolved local var: void * mem@[???]
                       Unresolved local var: int * data@[???]
                       Unresolved local var: int value@[???] */
  __len = sysconf(0x1e);
  iVar2 = -1;
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr != (int *)0xffffffff) {
    *__addr = 0x2a;
    iVar1 = mprotect(__addr,__len,1);
    iVar2 = -2;
    if (iVar1 == 0) {
      iVar3 = *__addr;
      iVar1 = mprotect(__addr,__len,3);
      iVar2 = -3;
      if (iVar1 == 0) {
        *__addr = 100;
        iVar2 = iVar3;
      }
    }
    munmap(__addr,__len);
  }
  return iVar2;
}



/* Function: param_clobber_importance @ 00010d0c */

int param_clobber_importance(int a,int b)

{
  return (b + a) * 2;
}



/* Function: call_asm_privileged @ 00010d18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
  size_t __len;
  void *__addr;
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: int r2@[???] */
                    /* Unresolved local var: size_t page_size@[???]
                       Unresolved local var: void * exec_mem@[???]
                       Unresolved local var: int result@[???] */
  __len = sysconf(0x1e);
  iVar3 = -1;
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr != (void *)0xffffffff) {
    munmap(__addr,__len);
    iVar3 = 0xf;
  }
  iVar1 = param_memory_protection();
  iVar2 = iVar3;
  if (iVar1 == 0x2a) {
    iVar2 = 0x4d;
  }
  if (__addr == (void *)0xffffffff) {
    iVar2 = iVar3;
  }
  return iVar2;
}



/* Function: param_memory_clobber_demo @ 00010d90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
                    /* Unresolved local var: int local@[???]
                       Unresolved local var: int result@[???] */
  return global_var + 0x32;
}



/* Function: test_asm_features @ 00010da4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
                    /* Unresolved local var: int[4] result@[???]
                       Unresolved local var: int i@[DW_OP_reg0(r0)] */
    local_20[iVar1] = (&DAT_00011290)[iVar1] + (&DAT_00011280)[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  printf(&DAT_000111db,local_20[1] + local_20[0] + local_20[2] + local_20[3]);
                    /* Unresolved local var: int counter@[???] */
  local_20[0] = 10;
                    /* Unresolved local var: int old_value@[???] */
  iVar1 = __atomic_fetch_add_4(local_20,5,5);
  printf(&DAT_000111f7,iVar1 + local_20[0] + 5);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r3@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: size_t page_size@[???]
                       Unresolved local var: void * exec_mem@[???]
                       Unresolved local var: int result@[???] */
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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
