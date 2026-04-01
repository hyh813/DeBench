/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional types for decompiled code */
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef unsigned long ulong;
typedef unsigned char undefined;
typedef void (*code)();

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-23/5-23_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Data section - string constants */
char DAT_0010206a[] = "Testing preprocessing features:\n";
char DAT_00102092[] = "param_macro_constants(1024) = %d\n";
char DAT_001020ad[] = "call_macro_constants() = %d\n";
char DAT_001020c8[] = "param_conditional_compile(10) = %d\n";
char DAT_001020e3[] = "param_multi_branch_compile(100) = %d\n";
char DAT_00102102[] = "param_macro_recursion(100) = %d\n";
char DAT_0010211e[] = "param_stringize() = %d\n";
char DAT_00102148[] = "param_token_paste(5) = %d\n";
char DAT_00102163[] = "param_variadic_macro() returned: %d\n";
char DAT_0010217e[] = "param_macro_override(3) = %d\n";
char DAT_00102199[] = "param_include_guard() = %d\n";
char DAT_001021b5[] = "call_builtin_macros() returned: %d\n";
char DAT_001021de[] = "\nTesting asm features:\n";
char DAT_00102225[] = "call_asm_clobber() = %d\n";
char DAT_00102241[] = "call_asm_multi_insn() = %d\n";
char DAT_0010225d[] = "call_asm_simd() = %d\n";
char DAT_00102279[] = "call_asm_atomic() = %d\n";
char DAT_00102295[] = "call_asm_privileged() = %d\n";

/* Global variable */
long global_var = 0;

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 00101100 */

undefined8 main(void)

{
 ulong in_RAX;
 
 test_preprocessing_features();
 test_asm_features();
 return in_RAX;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 00101209 */

undefined8 param_macro_constants(int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 00101221 */

undefined8 call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 0010122b */

int param_macro_functions(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = param_1;
 if (param_1 < param_2) {
 iVar1 = param_2;
 }
 return param_1 * param_1 + iVar1;
}



/* Function: call_macro_functions @ 0010123c */

undefined8 call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00101246 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00101251 */

undefined8 call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 0010125b */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00101268 */

undefined8 call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00101272 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 0010127a */

undefined8 call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00101284 */

undefined8 param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 0010128e */

undefined8 call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00101298 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 001012a0 */

int param_token_paste(int param_1)

{
 return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 001012ab */

undefined8 call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 001012b5 */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}



int call_variadic_macro(void)

{
 return param_variadic_macro(10,0x14,0x1e);
}



/* Function: param_macro_override @ 001012f0 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 001012fc */

undefined8 call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00101306 */

undefined8 param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00101310 */

undefined8 call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 0010131a */

int param_builtin_macros(int param_1)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00101362 */

void call_builtin_macros(void)

{
 param_builtin_macros(100);
 return;
}



/* Function: test_preprocessing_features @ 0010136d */

void test_preprocessing_features(void)

{
 
 __printf_chk(1,&DAT_0010206a);
 __printf_chk(1,&DAT_00102092,0x40);
 __printf_chk(1,&DAT_001020ad,0x1e);
 __printf_chk(1,&DAT_001020c8,0x20);
 __printf_chk(1,&DAT_001020e3,0xdf22);
 __printf_chk(1,&DAT_00102102,0x74);
 __printf_chk(1,&DAT_0010211e,0x13);
 __printf_chk(1,&DAT_00102148,0x3c);
 call_variadic_macro();
 printf("\n");
 __printf_chk(1,&DAT_0010217e,0x10);
 __printf_chk(1,&DAT_00102199,500);
 call_builtin_macros();
 printf("\n");
 __printf_chk(1,&DAT_001021b5,0x11a);
 return;
}



/* Function: param_asm_basic @ 00101496 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 001014a6 */

int call_asm_basic(void)

{
 return param_asm_basic(5);
}



/* Function: param_asm_clobber @ 001014b1 */

int param_asm_clobber(long param_1,int param_2)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = (ulong)((int)uVar2 + 1)) {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
 }
 return iVar1;
}



/* Function: call_asm_clobber @ 001014cb */

void call_asm_clobber(void)

{
 long in_FS_OFFSET;
 undefined1 local_24 [20];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 (void)param_asm_clobber(local_24,5);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: param_asm_multi_insn @ 00101508 */

void param_asm_multi_insn(undefined1 *param_1,undefined1 *param_2,long param_3)

{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}



/* Function: call_asm_multi_insn @ 00101523 */

undefined8 call_asm_multi_insn(void)

{
 undefined8 uVar1;
 long in_FS_OFFSET;
 undefined8 local_3a;
 undefined2 local_32;
 undefined8 local_30;
 undefined8 uStack_28;
 undefined8 local_20;
 undefined8 uStack_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_32 = 0x4d;
 local_30 = 0;
 uStack_28 = 0;
 local_20 = 0;
 uStack_18 = 0;
 local_3a = 0x5341206f6c6c6548;
 param_asm_multi_insn(&local_30,&local_3a,9);
 uVar1 = 0xffffffff;
 if (((char)local_30 == 'H') && (uVar1 = 0xffffffff, ((char *)&local_30)[4] == 'o')) {
 uVar1 = 0x2a;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar1;
}



/* Function: param_asm_simd @ 001015a1 */

undefined8 param_asm_simd(int *param_1,int *param_2,int *param_3)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 
 iVar1 = param_1[1];
 iVar2 = param_1[2];
 iVar3 = param_1[3];
 iVar4 = param_2[1];
 iVar5 = param_2[2];
 iVar6 = param_2[3];
 *param_3 = *param_1 + *param_2;
 param_3[1] = iVar1 + iVar4;
 param_3[2] = iVar2 + iVar5;
 param_3[3] = iVar3 + iVar6;
 return 0;
}



/* Function: param_simd_intrinsics @ 001015b5 */

undefined8 param_simd_intrinsics(int *param_1,int *param_2,int *param_3)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 
 iVar1 = param_2[1];
 iVar2 = param_2[2];
 iVar3 = param_2[3];
 iVar4 = param_1[1];
 iVar5 = param_1[2];
 iVar6 = param_1[3];
 *param_3 = *param_2 + *param_1;
 param_3[1] = iVar1 + iVar4;
 param_3[2] = iVar2 + iVar5;
 param_3[3] = iVar3 + iVar6;
 return 0;
}



/* Function: call_asm_simd @ 001015c6 */

int call_asm_simd(void)

{
 long in_FS_OFFSET;
 undefined8 local_40;
 undefined8 local_38;
 undefined8 local_30;
 undefined8 local_28;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_40 = 0x200000001;
 local_38 = 0x400000003;
 local_30 = 0x600000005;
 local_28 = 0x800000007;
 param_asm_simd(&local_40,&local_30,&local_20);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_1c + local_20 + local_18 + local_14;
}



/* Function: param_asm_atomic @ 00101656 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00101663 */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00101670 */

int call_asm_atomic(void)

{
 long in_FS_OFFSET;
 int ret;
 
 __asm__ volatile ("lock" ::: "memory");
 ret = 0x1e;
 __asm__ volatile ("lock" ::: "memory");
 if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return ret;
}



/* Function: param_dynamic_code @ 001016c0 */

undefined4 param_dynamic_code(undefined4 param_1)

{
 long lVar1;
 undefined4 uVar2;
 size_t __len;
 code *__addr;
 long in_FS_OFFSET;
 
 uVar2 = 0xffffffff;
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (code *)0xffffffffffffffff) {
 *(undefined4 *)__addr = 0xc083f889;
 *(undefined2 *)(__addr + 4) = 0xc305;
 uVar2 = (*__addr)(param_1);
 munmap(__addr,__len);
 }
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: param_memory_protection @ 0010175a */

undefined4 param_memory_protection(void)

{
 int iVar1;
 size_t __len;
 undefined4 *__addr;
 undefined4 uVar2;
 
 uVar2 = 0xffffffff;
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (undefined4 *)0xffffffffffffffff) {
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



/* Function: param_clobber_importance @ 00101812 */

int param_clobber_importance(int param_1,int param_2)

{
 return param_1 * 2 + param_2 * 2;
}



/* Function: call_asm_privileged @ 00101826 */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 iVar3 = param_clobber_importance(3,7);
 if (((iVar1 == 0xf) && (iVar2 == 0x2a)) && (iVar1 = 0xf, iVar3 == 0x14)) {
 iVar1 = 0x4d;
 }
 return iVar1;
}



/* Function: param_memory_clobber_demo @ 00101870 */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 0010188a */

void test_asm_features(void)

{
 int uVar1;
 undefined1 local_24 [20];
 
 __printf_chk(1,&DAT_001021de);
 call_asm_basic();
 printf("\n");
 (void)call_asm_clobber();
 (void)param_asm_clobber((long)local_24,5);
 __printf_chk(1,&DAT_00102225,param_asm_basic(5));
 uVar1 = call_asm_multi_insn();
 (void)call_asm_simd();
 (void)call_asm_atomic();
 uVar1 = call_asm_privileged();
 printf("\n");
 return;
}


/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 50 */
