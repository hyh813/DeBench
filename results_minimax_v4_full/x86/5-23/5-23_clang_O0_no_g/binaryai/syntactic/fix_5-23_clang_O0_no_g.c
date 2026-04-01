/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdint.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned int uint;
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
typedef long __off_t;
typedef long off_t;

// Decompiled by BinaryAI
// SHA256: 377453e8f1e4d2adeea0d8cb4ad2fe306f9530ce1bcbf4062b48404bdf85985c

// Function: _init @ 0x11000
void _init(void)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
 return;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// External function declarations
extern int __libc_start_main(int (*main_func)(int, char**, char**), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack);
int main(int argc, char** argv, char** env);
extern int mprotect(void *__addr, size_t __len, int __prot);
extern int printf(char *__format, ...);
extern void * memcpy(void *__dest, const void *__src, size_t __n);
extern long sysconf(int __name);
extern void * mmap(void *__addr, size_t __len, int __prot, int __flags, int __fd, __off_t __offset);
extern size_t strlen(const char *__s);
extern void * memset(void *__s, int __c, size_t __n);
extern int munmap(void *__addr, size_t __len);
extern char **_GLOBAL_OFFSET_TABLE__;

// Stub implementations for runtime functions
void frame_dummy(void) { return; }
void __gmon_start__(void) { return; }

// Forward declarations for functions used before definition
int header_func(int param_1);
void param_include_guard(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
int main(void);
void test_preprocessing_features(void);
void test_asm_features(void);

// Lock macros for atomic operations
#define LOCK() 
#define UNLOCK()

// Function: FUN_000110d0 @ 0x110d0
void FUN_000110d0(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + -0x10))();
 return;
}

// Function: _start @ 0x110e0
void _start(void)
{
 // Parameters: main_func, argc, argv, init, fini, rtld_fini, stack_end
 // Use __builtin_frame_address(0) to get stack_end
 // argc and argv are typically at specific stack positions
 int argc = 1;
 char **argv = (char **)(((char *)__builtin_frame_address(0)) - 256); // Placeholder
 char **env = argv + 2; // Placeholder
 __libc_start_main(main, argc, argv, 0, 0, 0, __builtin_frame_address(0));
 return;
}

// Function: __i686.get_pc_thunk.bx @ 0x1110c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11110
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11120
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11160
void register_tm_clones(void)
{
 return;
}

// Global variable for __do_global_dtors_aux
// This acts as a base address for the data section
char *unaff_EDI = (char *)0x0;

// Forward declarations for functions used before definition
void __do_global_dtors_aux(void);

// Function: __do_global_dtors_aux @ 0x111b0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 if (*(char *)(unaff_EDI + 15999) == '\0') {
 if (*(int *)(unaff_EDI + 0x3e33) != 0) {
 FUN_000110d0(*(unsigned int *)(unaff_EDI + 0x3e77));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x3e83);
 while (uVar1 < ((unaff_EDI + 0x3d53) - (unaff_EDI + 0x3d4f) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x3e83) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x3d4f + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x3e83);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 15999) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11249
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1124d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: param_macro_constants @ 0x11260
unsigned int param_macro_constants(int param_1)
{
 unsigned int local_8;
 if (param_1 < 0x401) {
 local_8 = 0x200;
 }
 else {
 local_8 = 0x40;
 }
 return local_8;
}

// Function: call_macro_constants @ 0x11290
unsigned int call_macro_constants(void)
{
 return param_macro_constants(0x800);
}

// Function: param_macro_functions @ 0x112c0
int param_macro_functions(int param_1,int param_2)
{
 int local_c;
 if (param_2 < param_1) {
 local_c = param_1;
 }
 else {
 local_c = param_2;
 }
 return param_1 * param_1 + local_c;
}

// Function: call_macro_functions @ 0x11300
void call_macro_functions(void)
{
 param_macro_functions(5,3);
 return;
}

// Function: param_conditional_compile @ 0x11330
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x11350
void call_conditional_compile(void)
{
 param_conditional_compile(10);
 return;
}

// Function: param_multi_branch_compile @ 0x11380
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x113a0
void call_multi_branch_compile(void)
{
 param_multi_branch_compile(10);
 return;
}

// Function: param_macro_recursion @ 0x113d0
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x11410
void call_macro_recursion(void)
{
 param_macro_recursion(100);
 return;
}

// Function: param_stringize @ 0x11440
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

// Function: call_stringize @ 0x114c0
void call_stringize(void)
{
 param_stringize();
 return;
}

// Function: my_func @ 0x114f0
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x11500
int param_token_paste(int param_1)
{
 int iVar1;
 iVar1 = my_func(param_1);
 return param_1 + 5 + iVar1;
}

// Function: call_token_paste @ 0x11540
void call_token_paste(void)
{
 param_token_paste(5);
 return;
}

// Function: param_variadic_macro @ 0x11570
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x115d0
void call_variadic_macro(void)
{
 param_variadic_macro(10,0x14,0x1e);
 return;
}

// Function: param_macro_override @ 0x11610
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x11640
void call_macro_override(void)
{
 param_macro_override(5);
 return;
}

// Function: param_include_guard @ 0x11670
void param_include_guard(void)
{
 header_func(5);
 return;
}

// Function: header_func @ 0x116a0
int header_func(int param_1)
{
 return param_1 * 100;
}

// Function: call_include_guard @ 0x116b0
void call_include_guard(void)
{
 param_include_guard();
 return;
}

// Function: param_builtin_macros @ 0x116d0
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:06");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x11780
void call_builtin_macros(void)
{
 param_builtin_macros(100);
 return;
}

// Function: test_preprocessing_features @ 0x117b0
void test_preprocessing_features(void)
{
 unsigned int uVar1;
 printf(&DAT_00013099);
 uVar1 = call_macro_constants();
 printf(&DAT_000130c1,uVar1);
 uVar1 = call_macro_functions();
 printf(&DAT_000130dc,uVar1);
 uVar1 = call_conditional_compile();
 printf(&DAT_000130f7,uVar1);
 uVar1 = call_multi_branch_compile();
 printf(&DAT_00013112,uVar1);
 uVar1 = call_macro_recursion();
 printf(&DAT_00013131,uVar1);
 uVar1 = call_stringize();
 printf(&DAT_0001314d,uVar1);
 uVar1 = call_token_paste();
 printf(&DAT_00013177,uVar1);
 uVar1 = call_variadic_macro();
 printf(&DAT_00013192,uVar1);
 uVar1 = call_macro_override();
 printf(&DAT_000131ad,uVar1);
 call_include_guard();
 printf(&DAT_000131c8);
 uVar1 = call_builtin_macros();
 printf(&DAT_000131e4,uVar1);
 return;
}

// Function: param_asm_basic @ 0x11920
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x11950
void call_asm_basic(void)
{
 param_asm_basic(5);
 return;
}

// Function: param_asm_clobber @ 0x11980
int param_asm_clobber(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + param_1[iVar2];
 }
 return iVar1;
}

// Function: call_asm_clobber @ 0x119d0
void call_asm_clobber(void)
{
 int local_1c [5];
 char temp[0x14];
 memcpy(temp, DAT_000132ec, 0x14);
 memcpy(local_1c, temp, 0x14);
 param_asm_clobber(local_1c,5);
 return;
}

// Function: param_asm_multi_insn @ 0x11a20
void param_asm_multi_insn(char *param_1,char *param_2,int param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x11a70
unsigned int call_asm_multi_insn(void)
{
 unsigned int uVar1;
 char local_32 [32];
 char local_2e;
 char local_12 [4];
 char local_e [4];
 char local_a [2];
 local_12[0] = 'H';
 local_12[1] = 'e';
 local_12[2] = 'l';
 local_12[3] = 'l';
 local_e[0] = 'o';
 local_e[1] = ' ';
 local_e[2] = 'A';
 local_e[3] = 'S';
 local_a[0] = 'M';
 local_a[1] = '\0';
 memset(local_32,0,0x20);
 param_asm_multi_insn(local_32,local_12,9);
 uVar1 = 0xffffffff;
 if (local_32[0] == 'H' && local_32[4] == 'o') {
 uVar1 = 0x2a;
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x11b20
unsigned int param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 char auVar1 [16];
 auVar1._4_4_ = param_1[1] + param_2[1];
 auVar1._0_4_ = *param_1 + *param_2;
 auVar1._8_4_ = param_1[2] + param_2[2];
 auVar1._12_4_ = param_1[3] + param_2[3];
 *param_3 = auVar1;
 return 0;
}

// Function: param_simd_intrinsics @ 0x11b50
unsigned int param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
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

// Function: call_asm_simd @ 0x11bd0
int call_asm_simd(void)
{
 int local_38;
 int local_34;
 int local_30;
 int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int local_10;
 unsigned int local_c;
 local_18 = 1;
 local_14 = 2;
 local_10 = 3;
 local_c = 4;
 local_28 = 5;
 local_24 = 6;
 local_20 = 7;
 local_1c = 8;
 param_asm_simd(&local_18,&local_28,&local_38);
 return local_38 + local_34 + local_30 + local_2c;
}

// Function: param_asm_atomic @ 0x11c60
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x11c90
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x11cc0
int call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 local_c = 10;
 iVar1 = param_asm_atomic(&local_c,5);
 return local_c + iVar1;
}

// Function: param_dynamic_code @ 0x11d00
int param_dynamic_code(int param_1)
{
 size_t __len;
 void *__addr;
 int local_c;
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

// Function: param_memory_protection @ 0x11db0
unsigned int param_memory_protection(void)
{
 size_t __len;
 unsigned int *__addr;
 int iVar1;
 unsigned int local_c;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffff) {
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

// Function: param_clobber_importance @ 0x11f00
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x11f40
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

// Function: param_memory_clobber_demo @ 0x11fd0
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x12010
void test_asm_features(void)
{
 unsigned int uVar1;
 printf(&DAT_00013217);
 uVar1 = call_asm_basic();
 printf(&DAT_00013242,uVar1);
 uVar1 = call_asm_clobber();
 printf(&DAT_0001325e,uVar1);
 uVar1 = call_asm_multi_insn();
 printf(&DAT_0001327a,uVar1);
 uVar1 = call_asm_simd();
 printf(&DAT_00013296,uVar1);
 uVar1 = call_asm_atomic();
 printf(&DAT_000132b2,uVar1);
 uVar1 = call_asm_privileged();
 printf(&DAT_000132ce,uVar1);
 return;
}

// String constants for format strings
char DAT_00013099[] = "=== Testing Preprocessing Features ===\n";
char DAT_000130c1[] = "Macro Constants: %u\n";
char DAT_000130dc[] = "Macro Functions: %u\n";
char DAT_000130f7[] = "Conditional Compile: %u\n";
char DAT_00013112[] = "Multi-branch Compile: %u\n";
char DAT_00013131[] = "Macro Recursion: %u\n";
char DAT_0001314d[] = "Stringize: %u\n";
char DAT_00013177[] = "Token Paste: %u\n";
char DAT_00013192[] = "Variadic Macro: %u\n";
char DAT_000131ad[] = "Macro Override: %u\n";
char DAT_000131c8[] = "Include Guard: called\n";
char DAT_000131e4[] = "Builtin Macros: %u\n";
char DAT_00013217[] = "=== Testing ASM Features ===\n";
char DAT_00013242[] = "ASM Basic: %u\n";
char DAT_0001325e[] = "ASM Clobber: %u\n";
char DAT_0001327a[] = "ASM MultiInsn: %u\n";
char DAT_00013296[] = "ASM SIMD: %u\n";
char DAT_000132b2[] = "ASM Atomic: %u\n";
char DAT_000132ce[] = "ASM Privileged: %u\n";
char DAT_000132ec[] = "Hello World Test Data";

// Global variable
int global_var = 10;

// Function: main @ 0x120f0
int main(int argc, char** argv, char** env)
{
 (void)argc;
 (void)argv;
 (void)env;
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x12130
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x1217c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

