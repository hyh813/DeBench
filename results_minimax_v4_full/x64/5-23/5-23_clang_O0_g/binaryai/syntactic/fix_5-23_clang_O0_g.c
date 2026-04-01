/* Auto-injected type definitions by preprocessor */
#include <stddef.h>
#include <stdint.h>

// Define missing types
typedef unsigned int uint;
typedef long __off_t;

// Global variables (marked weak to avoid multiple definition conflicts)
char __attribute__((weak)) completed_0 = 0;
void *__attribute__((weak)) __dso_handle = 0;

// External libc functions
int __libc_start_main(int (*main)(int, char**, char**), int argc, char **argv,
                      void (*init)(void), void (*fini)(void),
                      void (*rtld_fini)(void), void *stack_end);
void __gmon_start__(void) {} // Empty implementation to satisfy linker
size_t strlen(const char *__s);
void *mmap(void *__addr, size_t __len, int __prot, int __flags, int __fd, __off_t __offset);
int printf(const char *__format, ...);
void *memset(void *__s, int __c, size_t __n);
int munmap(void *__addr, size_t __len);
int mprotect(void *__addr, size_t __len, int __prot);
long sysconf(int __name);
void __cxa_finalize(void *ptr);

// Include standard library headers
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

// Global variable
int global_var = 0;

// Forward declarations
int header_func(int param_1);

// Data strings
char DAT_00102095[] = "Testing Preprocessing Features\n";
char DAT_001020bd[] = "call_macro_constants: %u\n";
char DAT_001020d8[] = "call_macro_functions: %u\n";
char DAT_001020f3[] = "call_conditional_compile: %u\n";
char DAT_0010210e[] = "call_multi_branch_compile: %u\n";
char DAT_0010212d[] = "call_macro_recursion: %u\n";
char DAT_00102149[] = "call_stringize: %u\n";
char DAT_00102173[] = "call_token_paste: %u\n";
char DAT_0010218e[] = "call_variadic_macro: %u\n";
char DAT_001021a9[] = "call_macro_override: %u\n";
char DAT_001021c4[] = "call_include_guard: %u\n";
char DAT_001021e0[] = "call_builtin_macros: %u\n";
char DAT_00102213[] = "Testing ASM Features\n";
char DAT_0010223e[] = "call_asm_basic: %u\n";
char DAT_0010225a[] = "call_asm_clobber: %u\n";
char DAT_00102276[] = "call_asm_multi_insn: %u\n";
char DAT_00102292[] = "call_asm_simd: %u\n";
char DAT_001022ae[] = "call_asm_atomic: %u\n";
char DAT_001022ca[] = "call_asm_privileged: %u\n";

// Lock/Unlock for atomic operations
#define LOCK()   __asm__ __volatile__("lock")
#define UNLOCK() __asm__ __volatile__("")
// SHA256: 04c0fc70c544833930ebf7de3eb03551eb918e6fead1c349f2e437b97081b2ca



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}



// Forward declaration
int main(int argc, char **argv, char **envp);

// Function: _start @ 0x1010b0
static void __attribute__((noreturn)) _start(unsigned long long param_1, unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main, (int)param_2, &auStack_8, 0, 0, (void (*)(void))0, &auStack_8);
 while(1) { }
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
void call_macro_constants(void)
{
 param_macro_constants(0x800);
 return;
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
void call_macro_functions(void)
{
 param_macro_functions(5,3);
 return;
}

// Function: param_conditional_compile @ 0x101240
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x101260
void call_conditional_compile(void)
{
 param_conditional_compile(10);
 return;
}

// Function: param_multi_branch_compile @ 0x101270
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x101290
void call_multi_branch_compile(void)
{
 param_multi_branch_compile(10);
 return;
}

// Function: param_macro_recursion @ 0x1012a0
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x1012e0
void call_macro_recursion(void)
{
 param_macro_recursion(100);
 return;
}

// Function: param_stringize @ 0x1012f0
long param_stringize(void)
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
void call_stringize(void)
{
 param_stringize();
 return;
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
void call_token_paste(void)
{
 param_token_paste(5);
 return;
}

// Function: param_variadic_macro @ 0x1013d0
int param_variadic_macro(uint param_1,uint param_2,uint param_3)
{
 printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
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
 "Jan 15 2026","03:00:43");
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
 printf(&DAT_00102095);
 call_macro_constants();
 printf(&DAT_001020bd,0);
 call_macro_functions();
 printf(&DAT_001020d8,0);
 call_conditional_compile();
 printf(&DAT_001020f3,0);
 call_multi_branch_compile();
 printf(&DAT_0010210e,0);
 call_macro_recursion();
 printf(&DAT_0010212d,0);
 call_stringize();
 printf(&DAT_00102149,0);
 call_token_paste();
 printf(&DAT_00102173,0);
 call_variadic_macro();
 printf(&DAT_0010218e,0);
 call_macro_override();
 printf(&DAT_001021a9,0);
 call_include_guard();
 printf(&DAT_001021c4,0);
 call_builtin_macros();
 printf(&DAT_001021e0,0);
 return;
}

// Function: param_asm_basic @ 0x101640
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x101660
void call_asm_basic(void)
{
 param_asm_basic(5);
 return;
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
void call_asm_clobber(void)
{
 long local_28;
 long local_20;
 unsigned int local_18;
 local_28 = 0x200000001;
 local_20 = 0x400000003;
 local_18 = 5;
 param_asm_clobber(local_28,5);
 return;
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
unsigned int call_asm_multi_insn(void)
{
 unsigned int uVar1;
 char local_38 [4];
 char local_34;
 char local_12 [8];
 unsigned short local_a;
 local_12[0] = 'H';
 local_12[1] = 'e';
 local_12[2] = 'l';
 local_12[3] = 'l';
 local_12[4] = 'o';
 local_12[5] = ' ';
 local_12[6] = 'A';
 local_12[7] = 'S';
 local_a = 0x4d;
 memset(local_38,0,0x20);
 param_asm_multi_insn(local_38,local_12,9);
 uVar1 = 0xffffffff;
 if (local_38[0] == 'H' && local_34 == 'o') {
 uVar1 = 0x2a;
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x1017c0
unsigned long long param_asm_simd(int *param_1,int *param_2,char *param_3)
{
 param_3[0] = *param_1 + *param_2;
 param_3[4] = param_1[1] + param_2[1];
 param_3[8] = param_1[2] + param_2[2];
 param_3[12] = param_1[3] + param_2[3];
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
unsigned int call_asm_simd(void)
{
 char local_38 [16];
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 unsigned long long local_10;
 local_18 = 0x200000001;
 local_10 = 0x400000003;
 local_28 = 0x600000005;
 local_20 = 0x800000007;
 param_asm_simd(&local_18,&local_28,(int *)local_38);
 return (unsigned int)local_38[0];
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

// Function: call_asm_privileged @ 0x101b80

// Function: param_dynamic_code @ 0x101980
unsigned int param_dynamic_code(unsigned int param_1)
{
 size_t __len;
 unsigned int *__addr;
 unsigned int local_c;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffffffffffff) {
 local_c = 0xffffffff;
 }
 else {
 *__addr = 0xc083f889;
 *(unsigned short *)(__addr + 1) = 0xc305;
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
 uint uVar1;
 printf(&DAT_00102213);
 call_asm_basic();
 printf(&DAT_0010223e,0);
 call_asm_clobber();
 printf(&DAT_0010225a,0);
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
int main(int argc, char **argv, char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: _fini @ 0x101ce4 (made static to avoid multiple definition)
static void __attribute__((unused)) _fini(void)
{
 return;
}

