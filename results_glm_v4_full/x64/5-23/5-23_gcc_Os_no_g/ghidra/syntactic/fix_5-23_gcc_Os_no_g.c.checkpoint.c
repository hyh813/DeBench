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
typedef uint32_t (*code)(uint32_t);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-23/5-23_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* External data references */
extern uint8_t DAT_0010206a[];
extern uint8_t DAT_00102092[];
extern uint8_t DAT_001020ad[];
extern uint8_t DAT_001020c8[];
extern uint8_t DAT_001020e3[];
extern uint8_t DAT_00102102[];
extern uint8_t DAT_0010211e[];
extern uint8_t DAT_00102148[];
extern uint8_t DAT_00102163[];
extern uint8_t DAT_0010217e[];
extern uint8_t DAT_00102199[];
extern uint8_t DAT_001021b5[];
extern uint8_t DAT_001021de[];
extern uint8_t DAT_00102225[];
extern uint8_t DAT_00102241[];
extern uint8_t DAT_0010225d[];
extern uint8_t DAT_00102279[];
extern uint8_t DAT_00102295[];

/* External variable */
extern int global_var;

/* Format string data definitions */
uint8_t DAT_001020ad[] = "call_macro_functions: %d\n";
uint8_t DAT_001020c8[] = "call_conditional_compile: %d\n";
uint8_t DAT_0010211e[] = "call_stringize: %d\n";
uint8_t DAT_00102148[] = "call_token_paste: %d\n";
uint8_t DAT_0010217e[] = "call_macro_override: %d\n";
uint8_t DAT_00102199[] = "call_include_guard: %d\n";
uint8_t DAT_00102225[] = "call_asm_clobber: %d\n";
uint8_t DAT_00102241[] = "call_asm_multi_insn: %d\n";
uint8_t DAT_0010225d[] = "call_asm_simd: %d\n";
uint8_t DAT_00102279[] = "call_asm_atomic: %d\n";
uint8_t DAT_00102295[] = "call_asm_privileged: %d, RAX=%lx\n";
uint8_t DAT_0010206a[] = "call_macro_constants: %d\n";
uint8_t DAT_00102092[] = "call_macro_functions: %d\n";
uint8_t DAT_001020e3[] = "call_multi_branch_compile: %d\n";
uint8_t DAT_00102102[] = "call_macro_recursion: %d\n";
uint8_t DAT_001021de[] = "Testing ASM features:\n";

/* Global variable definition */
int global_var = 0;


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(void *)0x0)(0);
 return;
}



/* Function: main @ 00101100 */

uint64_t main(void)

{
 uint64_t auVar1;
 unsigned long in_RAX;
 
 test_preprocessing_features();
 test_asm_features();
 auVar1 = in_RAX;
 return auVar1;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */



/* Function: LOCK @ 0010165a */

void LOCK(void)

{
 return;
}



/* Function: UNLOCK @ 00101661 */

void UNLOCK(void)

{
 return;
}





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 00101209 */

uint64_t param_macro_constants(int param_1)

{
 uint64_t uVar1;
 
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 00101221 */

uint64_t call_macro_constants(void)

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

uint64_t call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00101246 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00101251 */

uint64_t call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 0010125b */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00101268 */

uint64_t call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00101272 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 0010127a */

uint64_t call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00101284 */

uint64_t param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 0010128e */

uint64_t call_stringize(void)

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

uint64_t call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 001012b5 */

int param_variadic_macro(int param_1,uint32_t param_2,uint32_t param_3)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 001012db */

void call_variadic_macro(void)

{
 param_variadic_macro(10,0x14,0x1e);
 return;
}



/* Function: param_macro_override @ 001012f0 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 001012fc */

uint64_t call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00101306 */

uint64_t param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00101310 */

uint64_t call_include_guard(void)

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
 uint32_t uVar1;
 uint64_t in_RAX;
 
 __printf_chk(1,&DAT_0010206a);
 __printf_chk(1,&DAT_00102092,0x40);
 __printf_chk(1,&DAT_001020ad,0x1e);
 __printf_chk(1,&DAT_001020c8,0x20);
 __printf_chk(1,&DAT_001020e3,0xdf22);
 __printf_chk(1,&DAT_00102102,0x74);
 __printf_chk(1,&DAT_0010211e,0x13);
 __printf_chk(1,&DAT_00102148,0x3c);
 call_variadic_macro();
 __printf_chk(1,&DAT_0010217e,0x10);
 __printf_chk(1,&DAT_00102199,500);
 call_builtin_macros();
 return;
}



/* Function: param_asm_basic @ 00101496 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 001014a6 */

void call_asm_basic(void)

{
 param_asm_basic(5);
 return;
}



/* Function: param_asm_clobber @ 001014b1 */

int param_asm_clobber(long param_1,int param_2)

{
 int iVar1;
 unsigned long uVar2;
 
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
 }
 return iVar1;
}



/* Function: call_asm_clobber @ 001014cb */

int call_asm_clobber(void)

{
 long in_FS_OFFSET;
 uint8_t local_24 [20];
 long local_10;
 int ret_val;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 ret_val = param_asm_clobber(local_24,5);
 return ret_val;
}



/* Function: param_asm_multi_insn @ 00101508 */

void param_asm_multi_insn(uint8_t *param_1,uint8_t *param_2,long param_3)

{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}



/* Function: call_asm_multi_insn @ 00101523 */

uint64_t call_asm_multi_insn(void)

{
 uint64_t uVar1;
 long in_FS_OFFSET;
 uint64_t local_3a;
 uint16_t local_32;
 uint64_t local_30;
 uint64_t uStack_28;
 uint64_t local_20;
 uint64_t uStack_18;
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
 if (((char)local_30 == 'H') && (uVar1 = 0xffffffff, (uint8_t)(local_30 >> 32) == 'o')) {
 uVar1 = 0x2a;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar1;
}



/* Function: param_asm_simd @ 001015a1 */

uint64_t param_asm_simd(int *param_1,int *param_2,int *param_3)

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

uint64_t param_simd_intrinsics(int *param_1,int *param_2,int *param_3)

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
 uint64_t local_40;
 uint64_t local_38;
 uint64_t local_30;
 uint64_t local_28;
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

uint32_t call_asm_atomic(void)

{
 long in_FS_OFFSET;
 
 LOCK();
 UNLOCK();
 if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return 0x1e;
}



/* Function: param_dynamic_code @ 001016c0 */

uint32_t param_dynamic_code(uint32_t param_1)

{
 long lVar1;
 uint32_t uVar2;
 size_t __len;
 code *__addr;
 long in_FS_OFFSET;
 
 uVar2 = 0xffffffff;
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (code *)0xffffffffffffffff) {
 *(uint32_t *)__addr = 0xc083f889;
 *(uint16_t *)(__addr + 4) = 0xc305;
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

uint32_t param_memory_protection(void)

{
 int iVar1;
 size_t __len;
 uint32_t *__addr;
 uint32_t uVar2;
 
 uVar2 = 0xffffffff;
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (uint32_t *)0xffffffffffffffff) {
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
 uint32_t uVar1;
 uint64_t in_RAX;
 
 __printf_chk(1,&DAT_001021de);
 call_asm_basic();
 uVar1 = call_asm_clobber();
 __printf_chk(1,&DAT_00102225,uVar1);
 uVar1 = call_asm_multi_insn();
 __printf_chk(1,&DAT_00102241,uVar1);
 uVar1 = call_asm_simd();
 __printf_chk(1,&DAT_0010225d,uVar1);
 uVar1 = call_asm_atomic();
 __printf_chk(1,&DAT_00102279,uVar1);
 uVar1 = call_asm_privileged();
 __printf_chk(1,&DAT_00102295,uVar1,in_RAX);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 50 */
