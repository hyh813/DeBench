/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/5-23/5-23_clang_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00011000 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 000110e0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001110c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011110 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011120 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001113b) */
/* WARNING: Removing unreachable block (ram,0x00011145) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011160 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001118e) */
/* WARNING: Removing unreachable block (ram,0x00011198) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000111b0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001120c) */
/* WARNING: Removing unreachable block (ram,0x00011210) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011249 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001124d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: param_macro_constants @ 00011260 */

/* WARNING: Unknown calling convention */

int param_macro_constants(int size)

{
  undefined4 local_8;
  
  if (size < 0x401) {
    local_8 = 0x200;
  }
  else {
    local_8 = 0x40;
  }
  return local_8;
}



/* Function: call_macro_constants @ 00011290 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
  int iVar1;
  
  iVar1 = param_macro_constants(0x800);
  return iVar1;
}



/* Function: param_macro_functions @ 000112c0 */

/* WARNING: Unknown calling convention */

int param_macro_functions(int x,int y)

{
  undefined4 local_c;
  
  if (y < x) {
    local_c = x;
  }
  else {
    local_c = y;
  }
  return x * x + local_c;
}



/* Function: call_macro_functions @ 00011300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
  int iVar1;
  
  iVar1 = param_macro_functions(5,3);
  return iVar1;
}



/* Function: param_conditional_compile @ 00011330 */

/* WARNING: Unknown calling convention */

int param_conditional_compile(int x)

{
  int result;
  
  return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00011350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
  int iVar1;
  
  iVar1 = param_conditional_compile(10);
  return iVar1;
}



/* Function: param_multi_branch_compile @ 00011380 */

/* WARNING: Unknown calling convention */

int param_multi_branch_compile(int x)

{
  return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 000113a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
  int iVar1;
  
  iVar1 = param_multi_branch_compile(10);
  return iVar1;
}



/* Function: param_macro_recursion @ 000113d0 */

/* WARNING: Unknown calling convention */

int param_macro_recursion(int x)

{
  return x + 0x10;
}



/* Function: call_macro_recursion @ 00011410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
  int iVar1;
  
  iVar1 = param_macro_recursion(100);
  return iVar1;
}



/* Function: param_stringize @ 00011440 */

/* WARNING: Unknown calling convention */

int param_stringize(int value)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  char *str3;
  char *str2;
  char *str1;
  
  sVar1 = strlen("Hello World");
  sVar2 = strlen("1.2.3");
  sVar3 = strlen("155");
  return sVar1 + sVar2 + sVar3;
}



/* Function: call_stringize @ 000114c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
  int iVar1;
  
  iVar1 = param_stringize(0);
  return iVar1;
}



/* Function: my_func @ 000114f0 */

/* WARNING: Unknown calling convention */

int my_func(int x)

{
  return x * 10;
}



/* Function: param_token_paste @ 00011500 */

/* WARNING: Unknown calling convention */

int param_token_paste(int x)

{
  int iVar1;
  int temp__LINE__;
  int result;
  
  iVar1 = my_func(x);
  return x + 5 + iVar1;
}



/* Function: call_token_paste @ 00011540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
  int iVar1;
  
  iVar1 = param_token_paste(5);
  return iVar1;
}



/* Function: param_variadic_macro @ 00011570 */

/* WARNING: Unknown calling convention */

int param_variadic_macro(int x,int y,int z)

{
  int count;
  
  printf("LOG: Values: %d, %d, %d\n",x,y,z);
  return x + 0x32;
}



/* Function: call_variadic_macro @ 000115d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
  int iVar1;
  
  iVar1 = param_variadic_macro(10,0x14,0x1e);
  return iVar1;
}



/* Function: param_macro_override @ 00011610 */

/* WARNING: Unknown calling convention */

int param_macro_override(int x)

{
  int r2;
  int r1;
  
  return x * 3 + 1;
}



/* Function: call_macro_override @ 00011640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
  int iVar1;
  
  iVar1 = param_macro_override(5);
  return iVar1;
}



/* Function: param_include_guard @ 00011670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
  int iVar1;
  
  iVar1 = header_func(5);
  return iVar1;
}



/* Function: header_func @ 000116a0 */

/* WARNING: Unknown calling convention */

int header_func(int x)

{
  return x * 100;
}



/* Function: call_include_guard @ 000116b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
  int iVar1;
  
  iVar1 = param_include_guard();
  return iVar1;
}



/* Function: param_builtin_macros @ 000116d0 */

/* WARNING: Unknown calling convention */

int param_builtin_macros(int x)

{
  int counter3;
  int counter2;
  int counter1;
  char *time;
  char *date;
  char *func;
  int line;
  char *file;
  
  printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
         "Jan 15 2026","03:00:04");
  return x + 0x11a;
}



/* Function: call_builtin_macros @ 00011780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
  int iVar1;
  
  iVar1 = param_builtin_macros(100);
  return iVar1;
}



/* Function: test_preprocessing_features @ 000117b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
  int iVar1;
  
  printf(&DAT_00013099);
  iVar1 = call_macro_constants();
  printf(&DAT_000130c1,iVar1);
  iVar1 = call_macro_functions();
  printf(&DAT_000130dc,iVar1);
  iVar1 = call_conditional_compile();
  printf(&DAT_000130f7,iVar1);
  iVar1 = call_multi_branch_compile();
  printf(&DAT_00013112,iVar1);
  iVar1 = call_macro_recursion();
  printf(&DAT_00013131,iVar1);
  iVar1 = call_stringize();
  printf(&DAT_0001314d,iVar1);
  iVar1 = call_token_paste();
  printf(&DAT_00013177,iVar1);
  iVar1 = call_variadic_macro();
  printf(&DAT_00013192,iVar1);
  iVar1 = call_macro_override();
  printf(&DAT_000131ad,iVar1);
  iVar1 = call_include_guard();
  printf(&DAT_000131c8,iVar1);
  iVar1 = call_builtin_macros();
  printf(&DAT_000131e4,iVar1);
  return;
}



/* Function: param_asm_basic @ 00011920 */

/* WARNING: Unknown calling convention */

int param_asm_basic(int x)

{
  int result;
  
  return x + 10;
}



/* Function: call_asm_basic @ 00011950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
  int iVar1;
  
  iVar1 = param_asm_basic(5);
  return iVar1;
}



/* Function: param_asm_clobber @ 00011980 */

/* WARNING: Unknown calling convention */

int param_asm_clobber(int *arr,int n)

{
  int iVar1;
  int iVar2;
  int sum;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + arr[iVar2];
  }
  return iVar1;
}



/* Function: call_asm_clobber @ 000119d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
  int iVar1;
  int arr [5];
  
  memcpy(arr,&DAT_000132ec,0x14);
  iVar1 = param_asm_clobber(arr,5);
  return iVar1;
}



/* Function: param_asm_multi_insn @ 00011a20 */

/* WARNING: Unknown calling convention */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
  for (; n != 0; n = n - 1) {
    *(undefined1 *)dst = *(undefined1 *)src;
    dst = (void *)((int)dst + 1);
    src = (void *)((int)src + 1);
  }
  return;
}



/* Function: call_asm_multi_insn @ 00011a70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
  int iVar1;
  char dst [32];
  char src [10];
  
  src[0] = 'H';
  src[1] = 'e';
  src[2] = 'l';
  src[3] = 'l';
  src[4] = 'o';
  src[5] = ' ';
  src[6] = 'A';
  src[7] = 'S';
  src[8] = 'M';
  src[9] = '\0';
  memset(dst,0,0x20);
  param_asm_multi_insn(dst,src,9);
  iVar1 = -1;
  if (dst[0] == 'H' && dst[4] == 'o') {
    iVar1 = 0x2a;
  }
  return iVar1;
}



/* Function: param_asm_simd @ 00011b20 */

/* WARNING: Unknown calling convention */

int param_asm_simd(int *a,int *b,int *result)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = a[1];
  iVar2 = a[2];
  iVar3 = a[3];
  iVar4 = b[1];
  iVar5 = b[2];
  iVar6 = b[3];
  *result = *a + *b;
  result[1] = iVar1 + iVar4;
  result[2] = iVar2 + iVar5;
  result[3] = iVar3 + iVar6;
  return 0;
}



/* Function: param_simd_intrinsics @ 00011b50 */

/* WARNING: Unknown calling convention */

int param_simd_intrinsics(int *a,int *b,int *result)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  __m128i vec_sum;
  __m128i vec_b;
  __m128i vec_a;
  
  iVar1 = a[1];
  iVar2 = a[2];
  iVar3 = a[3];
  iVar4 = b[1];
  iVar5 = b[2];
  iVar6 = b[3];
  *result = *a + *b;
  result[1] = iVar1 + iVar4;
  result[2] = iVar2 + iVar5;
  result[3] = iVar3 + iVar6;
  return 0;
}



/* Function: call_asm_simd @ 00011bd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
  int result [4];
  int b [4];
  int a [4];
  
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



/* Function: param_asm_atomic @ 00011c60 */

/* WARNING: Unknown calling convention */

int param_asm_atomic(int *counter,int increment)

{
  int iVar1;
  int old_value;
  
  LOCK();
  iVar1 = *counter;
  *counter = *counter + increment;
  UNLOCK();
  return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00011c90 */

/* WARNING: Unknown calling convention */

int param_atomic_c11(int *counter,int increment)

{
  int iVar1;
  
  LOCK();
  iVar1 = *counter;
  *counter = *counter + increment;
  UNLOCK();
  return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00011cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
  int iVar1;
  int new_val;
  int counter;
  
  counter = 10;
  iVar1 = param_asm_atomic(&counter,5);
  return counter + iVar1;
}



/* Function: param_dynamic_code @ 00011d00 */

/* WARNING: Unknown calling convention */

int param_dynamic_code(int x)

{
  size_t __len;
  void *__addr;
  int result;
  void *exec_mem;
  size_t page_size;
  undefined4 local_c;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
  if (__addr == (void *)0xffffffff) {
    local_c = -1;
  }
  else {
    local_c = x + 5;
    munmap(__addr,__len);
  }
  return local_c;
}



/* Function: param_memory_protection @ 00011db0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
  size_t __len;
  int *__addr;
  int iVar1;
  int value;
  int *data;
  void *mem;
  size_t page_size;
  undefined4 local_c;
  
  __len = sysconf(0x1e);
  __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
  if (__addr == (int *)0xffffffff) {
    local_c = -1;
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
        local_c = -3;
      }
    }
    else {
      munmap(__addr,__len);
      local_c = -2;
    }
  }
  return local_c;
}



/* Function: param_clobber_importance @ 00011f00 */

/* WARNING: Unknown calling convention */

int param_clobber_importance(int a,int b)

{
  int result2;
  int result1;
  
  return a * 2 + b * 2;
}



/* Function: call_asm_privileged @ 00011f40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
  int iVar1;
  int iVar2;
  int r3;
  int r2;
  int r1;
  int local_c;
  
  local_c = param_dynamic_code(10);
  iVar1 = param_memory_protection();
  iVar2 = param_clobber_importance(3,7);
  if (((local_c == 0xf) && (iVar1 == 0x2a)) && (iVar2 == 0x14)) {
    local_c = 0x4d;
  }
  return local_c;
}



/* Function: param_memory_clobber_demo @ 00011fd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
  int result;
  int local;
  
  return global_var + 0x32;
}



/* Function: test_asm_features @ 00012010 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
  int iVar1;
  
  printf(&DAT_00013217);
  iVar1 = call_asm_basic();
  printf(&DAT_00013242,iVar1);
  iVar1 = call_asm_clobber();
  printf(&DAT_0001325e,iVar1);
  iVar1 = call_asm_multi_insn();
  printf(&DAT_0001327a,iVar1);
  iVar1 = call_asm_simd();
  printf(&DAT_00013296,iVar1);
  iVar1 = call_asm_atomic();
  printf(&DAT_000132b2,iVar1);
  iVar1 = call_asm_privileged();
  printf(&DAT_000132ce,iVar1);
  return;
}



/* Function: main @ 000120f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: __do_global_ctors_aux @ 00012130 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001214a) */
/* WARNING: Removing unreachable block (ram,0x00012160) */
/* WARNING: Removing unreachable block (ram,0x0001216d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001217c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 56 */
