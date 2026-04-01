#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef unsigned int uint;

// Decompiled by BinaryAI
// SHA256: 377453e8f1e4d2adeea0d8cb4ad2fe306f9530ce1bcbf4062b48404bdf85985c

// Function: _init @ 0x11000
int _init(void *ctx);

void __gmon_start__(void) { }

void frame_dummy(void) { }

int __do_global_ctors_aux(void);

int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
typedef int (*main_func_t)(int, char **, char **);
extern void __libc_start_main_real(main_func_t main, int argc, char **ubp_av,
                       void (*init)(void), void (*fini)(void), void (*rtld_fini)(void),
                       void *stack_end);
void __libc_start_main(main_func_t main, int argc, char **ubp_av,
                       void (*init)(void), void (*fini)(void), void (*rtld_fini)(void),
                       void *stack_end)
{
 __libc_start_main_real(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
 return;
}

// Function: <EXTERNAL>::mprotect @ 0x11050
extern int mprotect(void *__addr, size_t __len, int __prot);

// Function: <EXTERNAL>::printf @ 0x11060
extern int printf(const char *__format, ...);

// Function: <EXTERNAL>::memcpy @ 0x11070
extern void *memcpy(void *__dest, const void *__src, size_t __n);

// Function: <EXTERNAL>::sysconf @ 0x11080
extern long sysconf(int __name);

// Function: <EXTERNAL>::mmap @ 0x11090
typedef long __off_t;
extern void *mmap(void *__addr, size_t __len, int __prot, int __flags, int __fd, __off_t __offset);

// Function: <EXTERNAL>::strlen @ 0x110a0
extern size_t strlen(const char *__s);

// Function: <EXTERNAL>::memset @ 0x110b0
extern void *memset(void *__s, int __c, size_t __n);

// Function: <EXTERNAL>::munmap @ 0x110c0
extern int munmap(void *__addr, size_t __len);

// Function: FUN_000110d0 @ 0x110d0
void FUN_000110d0(unsigned int param_1)
{
 return;
}

// Function: main @ 0x120f0
int main(int argc, char **argv, char **envp);

// Function: _start @ 0x110e0
void _start(unsigned int param_1,unsigned int param_2)
{
 char *auStack_4 [4];
 __libc_start_main((main_func_t)main,param_2,auStack_4,0,0,(void *)param_1,auStack_4);
 do {
 } while( 1 );
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

int __x86_get_pc_thunk_di(void);

// Function: __do_global_dtors_aux @ 0x111b0
void __do_global_dtors_aux(void)
{
 deregister_tm_clones();
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1124d
int __x86_get_pc_thunk_di(void)
{
 int pc;
 __asm__ __volatile__ ("call 1f\n1: pop %0" : "=r"(pc));
 return pc;
}

// Function: __x86.get_pc_thunk.dx @ 0x11249
void __x86_get_pc_thunk_dx(void)
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
void call_macro_constants(void)
{
 param_macro_constants(0x800);
 return;
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
unsigned int call_macro_recursion(void)
{
 return param_macro_recursion(100);
}

// Function: param_stringize @ 0x11440
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

// Function: call_stringize @ 0x114c0
unsigned int call_stringize(void)
{
 return (unsigned int)param_stringize();
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
unsigned int call_token_paste(void)
{
 return (unsigned int)param_token_paste(5);
}

// Function: param_variadic_macro @ 0x11570
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x115d0
unsigned int call_variadic_macro(void)
{
 return (unsigned int)param_variadic_macro(10,0x14,0x1e);
}

// Function: param_macro_override @ 0x11610
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x11640
unsigned int call_macro_override(void)
{
 return (unsigned int)param_macro_override(5);
}

// Function: header_func @ 0x116a0
int header_func(int param_1)
{
 return param_1 * 100;
}

// Function: param_include_guard @ 0x11670
unsigned int param_include_guard(unsigned int param_1)
{
 return header_func(param_1);
}

// Function: call_include_guard @ 0x116b0
unsigned int call_include_guard(unsigned int param_1)
{
 return param_include_guard(param_1);
}

// Function: param_builtin_macros @ 0x116d0
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:06");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x11780
unsigned int call_builtin_macros(void)
{
 return (unsigned int)param_builtin_macros(100);
}

// Data declarations
char DAT_00013099[] = "Testing preprocessing features:\n";
char DAT_000130c1[] = "  call_macro_constants: %u\n";
char DAT_000130dc[] = "  call_macro_functions: %u\n";
char DAT_000130f7[] = "  call_conditional_compile: %u\n";
char DAT_00013112[] = "  call_multi_branch_compile: %u\n";
char DAT_00013131[] = "  call_macro_recursion: %u\n";
char DAT_0001314d[] = "  call_stringize: %u\n";
char DAT_00013177[] = "  call_token_paste: %u\n";
char DAT_00013192[] = "  call_variadic_macro: %u\n";
char DAT_000131ad[] = "  call_macro_override: %u\n";
char DAT_000131c8[] = "  call_include_guard: %u\n";
char DAT_000131e4[] = "  call_builtin_macros: %u\n";
char DAT_00013217[] = "Testing ASM features:\n";
char DAT_00013242[] = "  call_asm_basic: %u\n";
char DAT_0001325e[] = "  call_asm_clobber: %u\n";
char DAT_0001327a[] = "  call_asm_multi_insn: %u\n";
char DAT_00013296[] = "  call_asm_simd: %u\n";
char DAT_000132b2[] = "  call_asm_atomic: %u\n";
char DAT_000132ce[] = "  call_asm_privileged: %u\n";

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
 uVar1 = call_include_guard(5);
 printf(&DAT_000131c8,uVar1);
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
unsigned int call_asm_basic(void)
{
 return param_asm_basic(5);
}

// Function: param_asm_clobber @ 0x11980
int param_asm_clobber(char *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + param_1[iVar2];
 }
 return iVar1;
}

int __do_global_ctors_aux(void);

extern void *_GLOBAL_OFFSET_TABLE_;

// Function: call_asm_clobber @ 0x119d0
unsigned int call_asm_clobber(void)
{
 char local_1c [20];
 memcpy(local_1c,"test_data_for_asm",0x14);
 return param_asm_clobber(local_1c,5);
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
 union {
  char bytes[4];
  uint32_t as_uint;
 } local_12;
 union {
  char bytes[4];
  uint32_t as_uint;
 } local_e;
 union {
  char bytes[2];
  uint16_t as_uint;
 } local_a;
 char local_32 [32];
 local_12.bytes[0] = 'H';
 local_12.bytes[1] = 'e';
 local_12.bytes[2] = 'l';
 local_12.bytes[3] = 'l';
 local_e.bytes[0] = 'o';
 local_e.bytes[1] = ' ';
 local_e.bytes[2] = 'A';
 local_e.bytes[3] = 'S';
 local_a.bytes[0] = 'M';
 local_a.bytes[1] = '\0';
 memset(local_32,0,0x20);
 param_asm_multi_insn((char *)local_32,(char *)local_12.bytes,5);
 param_asm_multi_insn((char *)local_32 + 5,(char *)local_e.bytes,4);
 param_asm_multi_insn((char *)local_32 + 9,(char *)local_a.bytes,2);
 uVar1 = 0xffffffff;
 if (local_32[0] == 'H' && local_32[8] == 'o') {
 uVar1 = 0x2a;
 }
 return uVar1;
}

// SIMD vector type definition
typedef union {
  char bytes[16];
  int words[4];
} simd_vector_t;

// Function: param_asm_simd @ 0x11b20
unsigned int param_asm_simd(int *param_1,int *param_2,char *param_3)
{
 simd_vector_t auVar1;
 auVar1.words[0] = *param_1 + *param_2;
 auVar1.words[1] = param_1[1] + param_2[1];
 auVar1.words[2] = param_1[2] + param_2[2];
 auVar1.words[3] = param_1[3] + param_2[3];
 *param_3 = (char)auVar1.bytes[0];
 return (unsigned int)auVar1.words[0];
}

// Function: param_simd_intrinsics @ 0x11b80
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
unsigned int call_asm_simd(void)
{
 char local_38[16];
 int local_28;
 int local_24;
 int local_20;
 local_28 = 5;
 local_24 = 6;
 local_20 = 7;
 memset(local_38, 0, sizeof(local_38));
 param_asm_simd(&local_28,&local_28,local_38);
 return (unsigned int)local_38[0];
}

// Function: param_asm_atomic @ 0x11c60
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 __asm__ __volatile__ ("" ::: "memory");
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 __asm__ __volatile__ ("" ::: "memory");
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x11c90
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 __asm__ __volatile__ ("" ::: "memory");
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 __asm__ __volatile__ ("" ::: "memory");
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x11cc0
unsigned int call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 local_c = 10;
 iVar1 = param_asm_atomic(&local_c,5);
 return local_c + iVar1;
}

// Function: param_dynamic_code @ 0x11d00
unsigned int param_dynamic_code(int param_1)
{
 size_t __len;
 unsigned int *__addr;
 unsigned int local_c;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffff) {
 local_c = (unsigned int)-1;
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
unsigned int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x11f40
unsigned int call_asm_privileged(void)
{
 unsigned int iVar1;
 unsigned int iVar2;
 unsigned int local_c;
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
 return 0x32;
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

// Function: main @ 0x120f0
int main(int argc, char **argv, char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x12130
int __do_global_ctors_aux(void)
{
 return 0;
}

// Function: _fini @ 0x1217c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

