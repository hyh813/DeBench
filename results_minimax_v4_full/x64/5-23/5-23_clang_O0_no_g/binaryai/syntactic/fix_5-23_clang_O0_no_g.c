/* Auto-injected type definitions by preprocessor */
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <unistd.h>

// Standard integer types from stdint.h (included above)
// Additional types that may conflict with system headers are commented out
// typedef long ssize_t;       // Conflicts with <sys/types.h>
// typedef unsigned long size_t;  // Conflicts with <stddef.h>
// typedef unsigned long unsigned intptr_t;  // Conflicts with <stdint.h>
// typedef long intptr_t;       // Conflicts with <stdint.h>
// typedef unsigned int unsigned int;   // Conflicts with system headers

// Using standard types from <stddef.h> and <stdint.h>

// String constants
char DAT_00102095[] = "Testing preprocessing features:\n";
char DAT_001020bd[] = "call_macro_constants: %u\n";
char DAT_001020d8[] = "call_macro_functions: %u\n";
char DAT_001020f3[] = "call_conditional_compile: %u\n";
char DAT_0010210e[] = "call_multi_branch_compile: %u\n";
char DAT_0010212d[] = "call_macro_recursion: %u\n";
char DAT_00102149[] = "call_stringize: %zu\n";
char DAT_00102173[] = "call_token_paste: %u\n";
char DAT_0010218e[] = "call_variadic_macro: %u\n";
char DAT_001021a9[] = "call_macro_override: %u\n";
char DAT_001021c4[] = "call_include_guard: %u\n";
char DAT_001021e0[] = "call_builtin_macros: %u\n";
char DAT_00102213[] = "Testing asm features:\n";
char DAT_0010223e[] = "call_asm_basic: %u\n";
char DAT_0010225a[] = "call_asm_clobber: %u\n";
char DAT_00102276[] = "call_asm_multi_insn: %llu\n";
char DAT_00102292[] = "call_asm_simd: %u\n";
char DAT_001022ae[] = "call_asm_atomic: %u\n";
char DAT_001022ca[] = "call_asm_privileged: %u\n";

// External functions
extern void __gmon_start__(void);
extern int __libc_start_main(int (*main)(int, char**, char**), int argc, char** argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void* stack_end);
extern void __cxa_finalize(void *dso);
extern void *__dso_handle;

// Provide __dso_handle definition
void *__dso_handle = 0;

// Global variables
char completed_0 = 0;
int global_var = 0;

// Function prototypes
int header_func(int param_1);
int main(int argc, char** argv, char** envp);

// Lock macros for atomic operations
#define LOCK() 
#define UNLOCK()

// Decompiled by BinaryAI
// SHA256: e518460cdefb5b7fdf749d8c330dad66f1bc44fd0618fb8d6efaf8a59b47878c

// Function: _init @ 0x101000
void _init(void *ctx)
{
 return;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 // Original code called NULL pointer - removing dangerous call
 return;
}

// Function: <EXTERNAL>::strlen @ 0x101030
// Note: strlen is already declared in <string.h>

// Note: mmap, printf, memset, munmap, mprotect, sysconf, and __cxa_finalize
// are already declared in standard headers (<stdio.h>, <string.h>, <sys/mman.h>, <unistd.h>)

// Function: _start @ 0x1010b0
void __attribute__((noreturn)) _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&auStack_8,0,0,(void(*)(void))param_1,auStack_8);
 for(;;) { }
}

// Function: deregister_tm_clones @ 0x1010e0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101110
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101150
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: param_macro_constants @ 0x1011a0
unsigned int param_macro_constants(int param_1)
{
 unsigned int local_c;
 if (param_1 < 0x401) {
 local_c = 0x200;
 }
 else {
 local_c = 0x40;
 }
 return local_c;
}

// Function: call_macro_constants @ 0x1011d0
unsigned int call_macro_constants(void)
{
 return param_macro_constants(0x800);
}

// Function: param_macro_functions @ 0x1011e0
int param_macro_functions(int param_1,int param_2)
{
 int local_18;
 local_18 = param_2;
 if (param_2 < param_1) {
 local_18 = param_1;
 }
 return param_1 * param_1 + local_18;
}

// Function: call_macro_functions @ 0x101220
unsigned int call_macro_functions(void)
{
 return param_macro_functions(5,3);
}

// Function: param_conditional_compile @ 0x101240
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x101260
unsigned int call_conditional_compile(void)
{
 return param_conditional_compile(10);
}

// Function: param_multi_branch_compile @ 0x101270
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x101290
unsigned int call_multi_branch_compile(void)
{
 return param_multi_branch_compile(10);
}

// Function: param_macro_recursion @ 0x1012a0
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x1012e0
unsigned int call_macro_recursion(void)
{
 return param_macro_recursion(100);
}

// Function: param_stringize @ 0x1012f0
size_t param_stringize(void)
{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return sVar1 + sVar2 + sVar3;
}

// Function: call_stringize @ 0x101360
size_t call_stringize(void)
{
 return param_stringize();
}

// Function: my_func @ 0x101370
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x101380
int param_token_paste(int param_1)
{
 int iVar1;
 iVar1 = my_func(param_1);
 return param_1 + 5 + iVar1;
}

// Function: call_token_paste @ 0x1013c0
unsigned int call_token_paste(void)
{
 param_token_paste(5);
 return 0;
}

// Function: param_variadic_macro @ 0x1013d0
int param_variadic_macro(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 printf("LOG: Values: %d, %d, %d\n",(unsigned long)param_1,(unsigned long)param_2,(unsigned long)param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x101410
void call_variadic_macro(void)
{
 param_variadic_macro(10,0x14,0x1e);
 return;
}

// Function: param_macro_override @ 0x101430
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x101460
void call_macro_override(void)
{
 param_macro_override(5);
 return;
}

// Function: param_include_guard @ 0x101470
void param_include_guard(void)
{
 header_func(5);
 return;
}

// Function: header_func @ 0x101480
int header_func(int param_1)
{
 return param_1 * 100;
}

// Function: call_include_guard @ 0x101490
void call_include_guard(void)
{
 param_include_guard();
 return;
}

// Function: param_builtin_macros @ 0x1014a0
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:44");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101530
void call_builtin_macros(void)
{
 param_builtin_macros(100);
 return;
}

// Function: test_preprocessing_features @ 0x101540
void test_preprocessing_features(void)
{
 unsigned int uVar1;
 printf(&DAT_00102095);
 uVar1 = call_macro_constants();
 printf(&DAT_001020bd,uVar1);
 uVar1 = call_macro_functions();
 printf(&DAT_001020d8,uVar1);
 uVar1 = call_conditional_compile();
 printf(&DAT_001020f3,uVar1);
 uVar1 = call_multi_branch_compile();
 printf(&DAT_0010210e,uVar1);
 uVar1 = call_macro_recursion();
 printf(&DAT_0010212d,uVar1);
 uVar1 = (unsigned int)call_stringize();
 printf(&DAT_00102149,uVar1);
 uVar1 = call_token_paste();
 printf(&DAT_00102173,uVar1);
 call_variadic_macro();
 printf(&DAT_0010218e,(unsigned long)uVar1);
 call_macro_override();
 printf(&DAT_001021a9,(unsigned long)uVar1);
 uVar1 = call_include_guard();
 printf(&DAT_001021c4,(unsigned long)uVar1);
 uVar1 = call_builtin_macros();
 printf(&DAT_001021e0,(unsigned long)uVar1);
 return;
}

// Function: param_asm_basic @ 0x101640
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x101660
int call_asm_basic(void)
{
 return param_asm_basic(5);
}

// Function: param_asm_clobber @ 0x101670
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

// Function: call_asm_clobber @ 0x1016b0
int call_asm_clobber(void)
{
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned int local_18;
 local_28 = 0x200000001;
 local_20 = 0x400000003;
 local_18 = 5;
 return param_asm_clobber((long)&local_28,5);
}

// Function: param_asm_multi_insn @ 0x1016f0
void param_asm_multi_insn(char *param_1,char *param_2,long param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x101740
unsigned long long call_asm_multi_insn(void)
{
 unsigned long long uVar1;
 char local_38 [36];
 unsigned long long local_12;
 unsigned short local_a;
 char *ptr = (char *)&local_12;
 ptr[0] = 'H';
 ptr[1] = 'e';
 ptr[2] = 'l';
 ptr[3] = 'l';
 ptr[4] = 'o';
 ptr[5] = ' ';
 ptr[6] = 'A';
 ptr[7] = 'S';
 local_a = 0x4d;
 memset(local_38,0,0x20);
 param_asm_multi_insn(local_38,&local_12,9);
 uVar1 = 0xffffffffffffffffULL;
 if (local_38[0] == 'H' && local_38[1] == 'o') {
 uVar1 = 0x2a;
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x1017c0
unsigned long long param_asm_simd(int *param_1,int *param_2,char *param_3)
{
 int auVar1 [4];
 auVar1[1] = param_1[1] + param_2[1];
 auVar1[0] = *param_1 + *param_2;
 auVar1[2] = param_1[2] + param_2[2];
 auVar1[3] = param_1[3] + param_2[3];
 memcpy(param_3, auVar1, 16);
 return 0;
}

// Function: param_simd_intrinsics @ 0x1017f0
unsigned long long param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
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

// Function: call_asm_simd @ 0x101890
int call_asm_simd(void)
{
 char local_38[16];
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 unsigned long long local_10;
 local_18 = 0x200000001;
 local_10 = 0x400000003;
 local_28 = 0x600000005;
 local_20 = 0x800000007;
 (void)param_asm_simd((int*)&local_18,(int*)&local_28,&local_38);
 return (unsigned int)local_38[0] + (unsigned int)local_38[4] + (unsigned int)local_38[8] + (unsigned int)local_38[12];
}

// Function: param_asm_atomic @ 0x1018f0
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101920
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x101950
int call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 local_c = 10;
 iVar1 = param_asm_atomic(&local_c,5);
 return local_c + iVar1;
}

// Function: param_dynamic_code @ 0x101980
unsigned int param_dynamic_code(unsigned int param_1)
{
 size_t __len;
 void *__addr;
 unsigned int local_c;
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)-1) {
 local_c = 0xffffffff;
 }
 else {
 *(unsigned int *)__addr = 0xc083f889;
 *(unsigned short *)((unsigned int *)__addr + 1) = 0xc305;
 local_c = ((unsigned int (*)(unsigned int))__addr)(param_1);
 munmap(__addr,__len);
 }
 return local_c;
}

// Function: param_memory_protection @ 0x101a30
unsigned int param_memory_protection(void)
{
 int iVar1;
 size_t __len;
 unsigned int *__addr;
 unsigned int local_c;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffffffffffff) {
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

// Function: param_clobber_importance @ 0x101b40
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x101b80
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

// Function: param_memory_clobber_demo @ 0x101bf0
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x101c20
void test_asm_features(void)
{
 unsigned int uVar1;
 printf(&DAT_00102213);
 uVar1 = call_asm_basic();
 printf(&DAT_0010223e,uVar1);
 uVar1 = call_asm_clobber();
 printf(&DAT_0010225a,uVar1);
 uVar1 = call_asm_multi_insn();
 printf(&DAT_00102276,uVar1);
 uVar1 = call_asm_simd();
 printf(&DAT_00102292,uVar1);
 uVar1 = call_asm_atomic();
 printf(&DAT_001022ae,uVar1);
 uVar1 = call_asm_privileged();
 printf(&DAT_001022ca,uVar1);
 return;
}

// Function: main @ 0x101cc0
int main(int argc, char** argv, char** envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: _fini @ 0x101ce4
void _fini(void)
{
 return;
}

