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

// Missing macros
#define LOCK() 
#define UNLOCK() 
#define ZEXT816(x) 0
#define CONCAT22(a,b) ((a << 16) | (b & 0xFFFF))
#define byte unsigned char
typedef unsigned int uint;
typedef unsigned short ushort;

// Data strings referenced in code
char DAT_0010227d[] = "Testing preprocessing features:";
char DAT_0010207f[] = "Macro call result: %d\n";
char DAT_0010209a[] = "Macro function result: %d\n";
char DAT_001020b5[] = "Conditional compile result: %d\n";
char DAT_001020d0[] = "Multi-branch compile result: %d\n";
char DAT_001020ef[] = "Macro recursion result: %d\n";
char DAT_0010210b[] = "Stringize result: %d\n";
char DAT_00102135[] = "Token paste result: %d\n";
char DAT_00102150[] = "Variadic macro result: %d\n";
char DAT_0010216b[] = "Macro override result: %d\n";
char DAT_00102186[] = "Include guard result: %d\n";
char DAT_001021a2[] = "Builtin macros result: %d\n";
char DAT_001022a4[] = "Testing asm features:";
char DAT_001021d5[] = "param_asm_basic result: %d\n";
char DAT_001021f1[] = "param_asm_clobber result: %d\n";
char DAT_0010220d[] = "param_asm_multi_insn result: %llu\n";
char DAT_00102229[] = "param_asm_simd result: %d\n";
char DAT_00102245[] = "param_asm_atomic result: %d\n";
char DAT_00102261[] = "call_asm_privileged result: %lu\n";

// External libc functions
extern int __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);

// Decompiled by BinaryAI
// SHA256: 30433889047d67211c5ace4f1f0f7274b808d2e4b7dc9ae83c2c31c120345809

// Missing global variables - declare as weak symbols to prevent multiple definition
void *__gmon_start__ __attribute__((weak));
void *__dso_handle __attribute__((weak));
char completed_0 = 0;
int global_var = 0;

// Function: _init @ 0x101000
static int _init(void *ctx)
{
 return 0;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 // Null function call - was (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::puts @ 0x101030
extern int puts(char *__s);

// memset and memcpy declarations
extern void *memset(void *s, int c, unsigned long n);
extern void *memcpy(void *dest, const void *src, unsigned long n);

// Function: <EXTERNAL>::mmap @ 0x101040
typedef long __off_t;
extern void *mmap(void *__addr, size_t __len, int __prot, int __flags, int __fd, __off_t __offset);

// Function: <EXTERNAL>::printf @ 0x101050
extern int printf(char *__format, ...);

// Function: <EXTERNAL>::munmap @ 0x101060
extern int munmap(void *__addr, size_t __len);

// Function: <EXTERNAL>::mprotect @ 0x101070
extern int mprotect(void *__addr, size_t __len, int __prot);

// Function: <EXTERNAL>::sysconf @ 0x101080
extern long sysconf(int __name);

// Function: <EXTERNAL>::__cxa_finalize @ 0x101090
extern void __cxa_finalize(void *);

// Forward declaration for main
int main(void);

// Function: _start @ 0x1010a0
static void _start(void *param_1, void *param_2)
{
 char auStack_8 [8];
 __libc_start_main((int (*)(void))main,(int)param_2,auStack_8,0,0,(void (*)(void))param_1,auStack_8);
 return;
}

// Function: deregister_tm_clones @ 0x1010d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101100
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101140
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

// Function: param_macro_constants @ 0x10118c
unsigned long long param_macro_constants(int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x1011a0
unsigned long long call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x1011a6
int param_macro_functions(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_1 * param_1 + param_2;
}

// Function: call_macro_functions @ 0x1011b3
unsigned long long call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x1011b9
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x1011c0
unsigned long long call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x1011c6
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x1011cf
unsigned long long call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x1011d5
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x1011d9
unsigned long long call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x1011df
unsigned long long param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x1011e5
unsigned long long call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x1011eb
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x1011f1
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x1011fb
unsigned long long call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x101201
int param_variadic_macro(uint param_1,unsigned long param_2,unsigned long param_3)
{
 printf("LOG: Values: %d, %d, %d\n",(unsigned long)param_1,param_2 & 0xffffffff,param_3 & 0xffffffff);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x10121f
unsigned long long call_variadic_macro(void)
{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}

// Function: param_macro_override @ 0x101244
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x10124a
unsigned long long call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x101250
unsigned long long param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x101256
unsigned long long call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x10125c
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:00");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101298
unsigned long long call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:00");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x1012cf
void test_preprocessing_features(void)
{
 puts(&DAT_0010227d);
 printf(&DAT_0010207f,0x40);
 printf(&DAT_0010209a,0x1e);
 printf(&DAT_001020b5,0x20);
 printf(&DAT_001020d0,0xdf22);
 printf(&DAT_001020ef,0x74);
 printf(&DAT_0010210b,0x13);
 printf(&DAT_00102135,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(&DAT_00102150,0x3c);
 printf(&DAT_0010216b,0x10);
 printf(&DAT_00102186,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:00");
 printf(&DAT_001021a2,0x17e);
 return;
}

// Function: param_asm_basic @ 0x1013fa
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x101404
unsigned long long call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x101413
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

// Function: call_asm_clobber @ 0x101427
int call_asm_clobber(void)
{
 int iVar1;
 unsigned long uVar2;
 int local_18 [5];
 unsigned int local_8;
 local_8 = 5;
 local_18[0] = 1;
 local_18[1] = 2;
 local_18[2] = 3;
 local_18[3] = 4;
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 iVar1 = iVar1 + local_18[uVar2];
 }
 return iVar1;
}

// Function: param_asm_multi_insn @ 0x101458
void param_asm_multi_insn(char *param_1,char *param_2,long param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x10146f
unsigned long long call_asm_multi_insn(void)
{
 unsigned long long uVar1;
 unsigned long long *puVar2;
 long lVar3;
 char *puVar4;
 unsigned long long local_38;
 unsigned short local_30;
 char local_28 [16];
 char local_18 [16];
 puVar2 = &local_38;
 local_38 = 0x5341206f6c6c6548;
 local_30 = 0x4d;
 puVar4 = local_28;
 memset(local_18, 0, sizeof(local_18));
 memset(local_28, 0, sizeof(local_28));
 for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
 *puVar4 = *(char *)puVar2;
 puVar4 = puVar4 + 1;
 puVar2 = (unsigned long long *)((long)puVar2 + 1);
 }
 uVar1 = 0xffffffff;
 if ((byte)(local_28[4] ^ 0x6f | local_28[0] ^ 0x48) == 0) {
 uVar1 = 0x2a;
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x1014ce
unsigned long long param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 char auVar1 [16];
 *(int *)(auVar1 + 4) = param_1[1] + param_2[1];
 *(int *)(auVar1 + 0) = *param_1 + *param_2;
 *(int *)(auVar1 + 8) = param_1[2] + param_2[2];
 *(int *)(auVar1 + 12) = param_1[3] + param_2[3];
 memcpy(param_3, auVar1, 16);
 return 0;
}

// Function: param_simd_intrinsics @ 0x1014de
unsigned long long param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
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

// Function: call_asm_simd @ 0x1014ed
unsigned int call_asm_simd(void)
{
 return 0x24;
}

// Function: param_asm_atomic @ 0x101538
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101541
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x10154a
unsigned int call_asm_atomic(void)
{
 LOCK();
 UNLOCK();
 return 0x1e;
}

// Function: param_dynamic_code @ 0x101566
unsigned int param_dynamic_code(unsigned int param_1)
{
 unsigned int uVar1;
 size_t __len;
 void *__addr;
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 uVar1 = 0xffffffff;
 }
 else {
 *(unsigned short *)((unsigned int *)__addr + 1) = 0xc305;
 *(unsigned int *)__addr = 0xc083f889;
 uVar1 = ((unsigned int (*)(unsigned int))__addr)(param_1);
 munmap(__addr,__len);
 }
 return uVar1;
}

// Function: param_memory_protection @ 0x1015ce
unsigned int param_memory_protection(void)
{
 unsigned int uVar1;
 int iVar2;
 size_t __len;
 unsigned int *__addr;
 unsigned int uVar3;
 __len = sysconf(0x1e);
 uVar3 = 0xffffffff;
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (unsigned int *)0xffffffffffffffff) {
 *__addr = 0x2a;
 iVar2 = mprotect(__addr,__len,1);
 uVar3 = 0xfffffffe;
 if (iVar2 == 0) {
 uVar1 = *__addr;
 iVar2 = mprotect(__addr,__len,3);
 uVar3 = 0xfffffffd;
 if (iVar2 == 0) {
 *__addr = 100;
 uVar3 = uVar1;
 }
 }
 munmap(__addr,__len);
 }
 return uVar3;
}

// Function: param_clobber_importance @ 0x101669
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x101678
uint call_asm_privileged(void)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uVar1 = param_dynamic_code(10);
 uVar2 = param_memory_protection();
 uVar3 = 0x4d;
 if ((uVar2 ^ 0x2a | uVar1 ^ 0xf) != 0) {
 uVar3 = uVar1;
 }
 return uVar3;
}

// Function: param_memory_clobber_demo @ 0x1016c0
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

 // Function: test_asm_features @ 0x1016d2
void test_asm_features(void)
{
 uint uVar1;
 unsigned long uVar2;
 long lVar3;
 unsigned long long *puVar4;
 char *puVar5;
 unsigned long long uVar6;
 unsigned long long local_48;
 unsigned int uStack_40;
 unsigned int uStack_3c;
 char local_38 [8];
 unsigned int uStack_30;
 unsigned int uStack_2c;
 char local_28 [16];
 puts(&DAT_001022a4);
 printf(&DAT_001021d5,0xf);
 puVar5 = local_38;
 memset(local_28, 0, sizeof(local_28));
 local_28[0] = 5;
 local_28[1] = 0;
 local_28[2] = 0;
 local_28[3] = 0;
 uStack_30 = 3;
 memset(local_38, 0, sizeof(local_38));
 local_38[0] = 1;
 local_38[4] = 2;
 uStack_2c = 4;
 uVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 uVar1 = uVar1 + *(int *)(puVar5 + uVar2 * 4);
 }
 printf(&DAT_001021f1,(unsigned long)uVar1);
 puVar4 = &local_48;
 local_48 = 0x5341206f6c6c6548;
 uStack_40 = 0x4d;
 local_48 = 0;
 for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
 *puVar5 = *(char *)puVar4;
 puVar5 = puVar5 + 1;
 puVar4 = (unsigned long long *)((long)puVar4 + 1);
 }
 uVar6 = 0xffffffff;
 if ((byte)(local_38[4] ^ 0x6f | local_38[0] ^ 0x48) == 0) {
 uVar6 = 0x2a;
 }
 printf(&DAT_0010220d,uVar6);
 uStack_30 = 3;
 memset(local_38, 0, sizeof(local_38));
 local_38[0] = 1;
 local_38[4] = 2;
 uStack_2c = 4;
 local_48 = 0x600000005;
 uStack_40 = 7;
 uStack_3c = 8;
 printf(&DAT_00102229,0x24);
 LOCK();
 local_38[0] = 0xf;
 local_38[1] = 0;
 local_38[2] = 0;
 local_38[3] = 0;
 UNLOCK();
 printf(&DAT_00102245,0x1e);
 uVar1 = call_asm_privileged();
 printf(&DAT_00102261,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x101835
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: _fini @ 0x101844
static void _fini(void)
{
 return;
}

