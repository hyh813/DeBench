/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/5-23/5-23_gcc_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010450 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: main @ 000104f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: _start @ 00010508 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 0001054c */

/* WARNING: Removing unreachable block (ram,0x00010560) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010570 */

/* WARNING: Removing unreachable block (ram,0x00010580) */
/* WARNING: Removing unreachable block (ram,0x00010588) */
/* WARNING: Removing unreachable block (ram,0x0001058c) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 0001059c */

/* WARNING: Removing unreachable block (ram,0x000105b8) */
/* WARNING: Removing unreachable block (ram,0x000105c0) */
/* WARNING: Removing unreachable block (ram,0x000105c4) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000105d4 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: param_macro_constants @ 00010600 */

int param_macro_constants(int size)

{
  int iVar1;
  
  if (size < 0x401) {
    iVar1 = 0x200;
  }
  else {
    iVar1 = 0x40;
  }
  return iVar1;
}



/* Function: call_macro_constants @ 00010610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
  return 0x40;
}



/* Function: param_macro_functions @ 00010618 */

int param_macro_functions(int x,int y)

{
  if (y <= x) {
    y = x;
  }
  return x * x + y;
}



/* Function: call_macro_functions @ 00010630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
  return 0x1e;
}



/* Function: param_conditional_compile @ 00010638 */

int param_conditional_compile(int x)

{
                    /* Unresolved local var: int result@[DW_OP_breg0(r0): 0; DW_OP_lit3; DW_OP_mul;
                       DW_OP_plus_uconst: 2; DW_OP_stack_value] */
  return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00010644 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
  return 0x20;
}



/* Function: param_multi_branch_compile @ 0001064c */

int param_multi_branch_compile(int x)

{
  return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 0001065c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
  return 0xdf22;
}



/* Function: param_macro_recursion @ 00010668 */

int param_macro_recursion(int x)

{
  return x + 0x10;
}



/* Function: call_macro_recursion @ 00010670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
  return 0x74;
}



/* Function: param_stringize @ 00010678 */

int param_stringize(int value)

{
                    /* Unresolved local var: char * str1@[???]
                       Unresolved local var: char * str2@[???]
                       Unresolved local var: char * str3@[???] */
  return 0x13;
}



/* Function: call_stringize @ 00010680 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
  return 0x13;
}



/* Function: my_func @ 00010688 */

int my_func(int x)

{
  return x * 10;
}



/* Function: param_token_paste @ 00010694 */

int param_token_paste(int x)

{
                    /* Unresolved local var: int result@[DW_OP_breg0(r0): 0; DW_OP_lit11; DW_OP_mul;
                       DW_OP_plus_uconst: 5; DW_OP_stack_value]
                       Unresolved local var: int temp__LINE__@[DW_OP_breg0(r0): +5;
                       DW_OP_stack_value] */
  return x * 0xb + 5;
}



/* Function: call_token_paste @ 000106a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
  return 0x3c;
}



/* Function: param_variadic_macro @ 000106ac */

int param_variadic_macro(int x,int y,int z)

{
                    /* Unresolved local var: int count@[???] */
  __printf_chk(1,"LOG: Values: %d, %d, %d\n",x,y,z,y);
  return x + 0x32;
}



/* Function: call_variadic_macro @ 000106dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
  int iVar1;
  
  iVar1 = param_variadic_macro(10,0x14,0x1e);
  return iVar1;
}



/* Function: param_macro_override @ 000106ec */

int param_macro_override(int x)

{
                    /* Unresolved local var: int r1@[DW_OP_breg0(r0): +1; DW_OP_stack_value]
                       Unresolved local var: int r2@[DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl;
                       DW_OP_stack_value] */
  return x * 3 + 1;
}



/* Function: call_macro_override @ 000106f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
  return 0x10;
}



/* Function: param_include_guard @ 00010700 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
  return 500;
}



/* Function: call_include_guard @ 00010708 */

undefined4 call_include_guard(void)

{
  return 500;
}



/* Function: param_builtin_macros @ 00010710 */

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
               ,0x117,"Jan 15 2026","03:01:10");
  return x + 0x11a;
}



/* Function: call_builtin_macros @ 0001076c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
  int iVar1;
  
  iVar1 = param_builtin_macros(100);
  return iVar1;
}



/* Function: test_preprocessing_features @ 00010774 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
  int iVar1;
  
  __printf_chk(1,&DAT_00011cfa);
  __printf_chk(1,&DAT_00011d22,0x40);
  __printf_chk(1,&DAT_00011d3d,0x1e);
  __printf_chk(1,&DAT_00011d58,0x20);
  __printf_chk(1,&DAT_00011d73,0xdf22);
  __printf_chk(1,&DAT_00011d92,0x74);
  __printf_chk(1,&DAT_00011dae,0x13);
  __printf_chk(1,&DAT_00011dd8,0x3c);
  iVar1 = call_variadic_macro();
  __printf_chk(1,&DAT_00011df3,iVar1);
  __printf_chk(1,&DAT_00011e0e,0x10);
  __printf_chk(1,&DAT_00011e29,500);
  iVar1 = call_builtin_macros();
  __printf_chk(1,&DAT_00011e45,iVar1);
  return;
}



/* Function: param_asm_basic @ 00010874 */

int param_asm_basic(int x)

{
                    /* Unresolved local var: int result@[DW_OP_breg0(r0): +10; DW_OP_stack_value] */
  return x + 10;
}



/* Function: call_asm_basic @ 0001087c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
  return 0xf;
}



/* Function: param_asm_clobber @ 00010884 */

int param_asm_clobber(int *arr,int n)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + arr[iVar2];
  }
  return iVar1;
}



/* Function: call_asm_clobber @ 000108a8 */

/* WARNING: Variable defined which should be unmapped: arr */
/* WARNING: Removing unreachable block (ram,0x000108f8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
  int iVar1;
  int arr [5];
  
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  iVar1 = param_asm_clobber(arr,5);
  return iVar1;
}



/* Function: param_asm_multi_insn @ 0001090c */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return;
}



/* Function: call_asm_multi_insn @ 00010910 */

/* WARNING: Removing unreachable block (ram,0x00010994) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
  int iVar1;
  char src [10];
  char dst [32];
  
  memcpy(src,"Hello ASM",10);
  dst[0] = '\0';
  dst[1] = '\0';
  dst[2] = '\0';
  dst[3] = '\0';
  memset(dst + 4,0,0x1c);
  param_asm_multi_insn(dst,src,9);
  if (dst[0] == 'H') {
    if (dst[4] == 'o') {
      iVar1 = 0x2a;
    }
    else {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: param_asm_simd @ 000109a8 */

int param_asm_simd(int *a,int *b,int *result)

{
  int iVar1;
  
                    /* Unresolved local var: int i@[???] */
  iVar1 = 0;
  do {
    result[iVar1] = a[iVar1] + b[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return 0;
}



/* Function: call_asm_simd @ 000109d8 */

/* WARNING: Removing unreachable block (ram,0x00010a54) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
  int a [4];
  int b [4];
  int result [4];
  
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  b[0] = 5;
  b[1] = 6;
  b[2] = 7;
  b[3] = 8;
  param_asm_simd(a,b,result);
  return result[0] + result[1] + result[2] + result[3];
}



/* Function: param_asm_atomic @ 00010a68 */

int param_asm_atomic(int *counter,int increment)

{
  int iVar1;
  
                    /* Unresolved local var: int old_value@[???] */
  iVar1 = __sync_fetch_and_add_4();
  return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00010a7c */

int param_atomic_c11(int *counter,int increment)

{
  int iVar1;
  
  iVar1 = __sync_fetch_and_add_4();
  return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00010a90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
  int iVar1;
  int counter;
  int local_c;
  
                    /* Unresolved local var: int new_val@[???] */
  local_c = 0;
  counter = 10;
  iVar1 = param_asm_atomic(&counter,5);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 + counter;
}



/* Function: param_dynamic_code @ 00010ae8 */

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
  if (__addr == (void *)0xffffffff) {
    iVar1 = -1;
  }
  else {
    iVar1 = x + 5;
    munmap(__addr,__len);
  }
  return iVar1;
}



/* Function: param_memory_protection @ 00010b40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
  size_t __len;
  int *__addr;
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: size_t page_size@[???]
                       Unresolved local var: void * mem@[???]
                       Unresolved local var: int * data@[???]
                       Unresolved local var: int value@[???] */
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr == (int *)0xffffffff) {
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
        munmap(__addr,__len);
        iVar1 = -3;
      }
    }
    else {
      munmap(__addr,__len);
      iVar1 = -2;
    }
  }
  return iVar1;
}



/* Function: param_clobber_importance @ 00010c00 */

int param_clobber_importance(int a,int b)

{
  return (a + b) * 2;
}



/* Function: call_asm_privileged @ 00010c0c */

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
  if (iVar1 == 0xf && iVar2 == 0x2a) {
    iVar1 = 0x4d;
  }
  return iVar1;
}



/* Function: param_memory_clobber_demo @ 00010c34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
                    /* Unresolved local var: int local@[???]
                       Unresolved local var: int result@[???] */
  return global_var + 0x32;
}



/* Function: test_asm_features @ 00010c48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
  int iVar1;
  
  __printf_chk(1,&DAT_00011e78);
  __printf_chk(1,&DAT_00011ea3,0xf);
  iVar1 = call_asm_clobber();
  __printf_chk(1,&DAT_00011ebf,iVar1);
  iVar1 = call_asm_multi_insn();
  __printf_chk(1,&DAT_00011edb,iVar1);
  iVar1 = call_asm_simd();
  __printf_chk(1,&DAT_00011ef7,iVar1);
  iVar1 = call_asm_atomic();
  __printf_chk(1,&DAT_00011f13,iVar1);
  iVar1 = call_asm_privileged();
  __printf_chk(1,&DAT_00011f2f,iVar1);
  return;
}



/* Function: __sync_fetch_and_add_4 @ 00010cec */

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



/* Function: __sync_fetch_and_sub_4 @ 00010d24 */

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



/* Function: __sync_fetch_and_or_4 @ 00010d5c */

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



/* Function: __sync_fetch_and_and_4 @ 00010d94 */

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



/* Function: __sync_fetch_and_xor_4 @ 00010dcc */

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



/* Function: __sync_fetch_and_nand_4 @ 00010e04 */

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



/* Function: __sync_fetch_and_add_2 @ 00010e40 */

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



/* Function: __sync_fetch_and_sub_2 @ 00010ea0 */

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



/* Function: __sync_fetch_and_or_2 @ 00010f00 */

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



/* Function: __sync_fetch_and_and_2 @ 00010f60 */

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



/* Function: __sync_fetch_and_xor_2 @ 00010fc0 */

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



/* Function: __sync_fetch_and_nand_2 @ 00011020 */

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



/* Function: __sync_fetch_and_add_1 @ 00011084 */

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



/* Function: __sync_fetch_and_sub_1 @ 000110e0 */

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



/* Function: __sync_fetch_and_or_1 @ 0001113c */

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



/* Function: __sync_fetch_and_and_1 @ 00011198 */

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



/* Function: __sync_fetch_and_xor_1 @ 000111f4 */

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



/* Function: __sync_fetch_and_nand_1 @ 00011250 */

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



/* Function: __sync_add_and_fetch_4 @ 000112b0 */

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



/* Function: __sync_sub_and_fetch_4 @ 000112e8 */

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



/* Function: __sync_or_and_fetch_4 @ 00011320 */

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



/* Function: __sync_and_and_fetch_4 @ 00011358 */

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



/* Function: __sync_xor_and_fetch_4 @ 00011390 */

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



/* Function: __sync_nand_and_fetch_4 @ 000113c8 */

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



/* Function: __sync_add_and_fetch_2 @ 00011404 */

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



/* Function: __sync_sub_and_fetch_2 @ 0001146c */

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



/* Function: __sync_or_and_fetch_2 @ 000114d4 */

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



/* Function: __sync_and_and_fetch_2 @ 0001153c */

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



/* Function: __sync_xor_and_fetch_2 @ 000115a4 */

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



/* Function: __sync_nand_and_fetch_2 @ 0001160c */

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



/* Function: __sync_add_and_fetch_1 @ 00011678 */

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



/* Function: __sync_sub_and_fetch_1 @ 000116dc */

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



/* Function: __sync_or_and_fetch_1 @ 00011740 */

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



/* Function: __sync_and_and_fetch_1 @ 000117a4 */

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



/* Function: __sync_xor_and_fetch_1 @ 00011808 */

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



/* Function: __sync_nand_and_fetch_1 @ 0001186c */

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



/* Function: __sync_val_compare_and_swap_4 @ 000118d4 */

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



/* Function: __sync_val_compare_and_swap_2 @ 00011924 */

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



/* Function: __sync_val_compare_and_swap_1 @ 0001199c */

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



/* Function: __sync_bool_compare_and_swap_4 @ 00011a10 */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 00011a3c */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 00011a58 */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 00011a80 */

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



/* Function: __sync_lock_test_and_set_2 @ 00011ab8 */

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



/* Function: __sync_lock_test_and_set_1 @ 00011b18 */

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



/* Function: __sync_lock_release_8 @ 00011b74 */

void __sync_lock_release_8(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Function: __sync_lock_release_4 @ 00011b98 */

void __sync_lock_release_4(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_2 @ 00011bb8 */

void __sync_lock_release_2(undefined2 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_1 @ 00011bd8 */

void __sync_lock_release_1(undefined1 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: _fini @ 00011bf8 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 98 */
