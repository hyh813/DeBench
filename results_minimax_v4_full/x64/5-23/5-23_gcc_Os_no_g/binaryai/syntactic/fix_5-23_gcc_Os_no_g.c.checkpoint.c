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
typedef long __off_t;

// Global variables
char completed_0 = 0;
void *__dso_handle = 0;
int global_var = 0;
void *__frame_dummy_init_array_entry = 0;

// Forward declarations
int param_asm_clobber(int *param_1, int param_2);
unsigned long long param_asm_simd(int *param_1, int *param_2, char *param_3);
void param_asm_multi_insn(char *param_1, const char *param_2, long param_3);

// Lock/Unlock macros for atomic operations
#define LOCK()   __sync_synchronize()
#define UNLOCK() __sync_synchronize()

// Helper union for handling 128-bit values as multiple parts
typedef union {
    unsigned long long u64[2];
    unsigned int u32[4];
    char c[16];
} union128_t;

// Data references
char DAT_0010206a[] = "Testing preprocessing features:\n";
char DAT_00102092[] = "param_macro_constants(0x400) = %lu\n";
char DAT_001020ad[] = "call_macro_constants() = %lu\n";
char DAT_001020c8[] = "param_macro_functions(3, 5) = %d\n";
char DAT_001020e3[] = "call_macro_functions() = %lu\n";
char DAT_00102102[] = "param_macro_recursion(100) = %lu\n";
char DAT_0010211e[] = "param_stringize() = %lu\n";
char DAT_00102148[] = "param_token_paste(5) = %d\n";
char DAT_00102163[] = "call_variadic_macro returned: %u\n";
char DAT_0010217e[] = "call_macro_override() = %lu\n";
char DAT_00102199[] = "call_include_guard() = %lu\n";
char DAT_001021b5[] = "call_builtin_macros() = %u\n";
char DAT_001021de[] = "\nTesting asm features:\n";
char DAT_00102225[] = "call_asm_clobber() = %u\n";
char DAT_00102241[] = "call_asm_multi_insn() = %lu\n";
char DAT_0010225d[] = "call_asm_simd() = %lu\n";
char DAT_00102279[] = "call_asm_atomic() = %u\n";
char DAT_00102295[] = "call_asm_privileged() = %u\n";

// Decompiled by BinaryAI
// SHA256: 2f6dcb6f2bbc9118ca83246d5ee2129ada7da927f125e81a4aad86c71795944c

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101090
// External libc function - stub declaration
void __cxa_finalize(void *);
void __cxa_finalize(void *ctx)
{
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1010a0
void __stack_chk_fail(void)
{
 while(1); // Loop forever on stack check failure
}

// Function: <EXTERNAL>::mmap @ 0x1010b0
// External libc function - declaration
void *mmap(void *, size_t, int, int, int, long);

// Function: <EXTERNAL>::munmap @ 0x1010c0
// External libc function - stub declaration
int munmap(void *, size_t);
int munmap_stub(void *__addr,size_t __len)
{
 int iVar1;
 iVar1 = munmap(__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x1010d0
int __printf_chk(int __flag, const char *__format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::mprotect @ 0x1010e0
// External libc function - stub declaration  
int mprotect(void *__addr,size_t __len,int __prot);

// Function: <EXTERNAL>::sysconf @ 0x1010f0
// External libc function - stub declaration  
long sysconf(int __name);

// Function: main @ 0x101100
int main(void)
{
 union128_t auVar1;
 test_preprocessing_features();
 test_asm_features();
 auVar1.u64[1] = 0;
 auVar1.u64[0] = 0;
 return (int)(auVar1.u64[0] >> 32);
}

// Function: deregister_tm_clones @ 0x101150
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101180
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1011c0
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(0);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: param_macro_constants @ 0x101209
unsigned long long param_macro_constants(int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x101221
unsigned long long call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x10122b
int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < param_2) {
 iVar1 = param_2;
 }
 return param_1 * param_1 + iVar1;
}

// Function: call_macro_functions @ 0x10123c
unsigned long long call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x101246
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x101251
unsigned long long call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x10125b
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x101268
unsigned long long call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x101272
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x10127a
unsigned long long call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x101284
unsigned long long param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x10128e
unsigned long long call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x101298
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x1012a0
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x1012ab
unsigned long long call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x1012b5
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x1012db
int call_variadic_macro(void)
{
 return param_variadic_macro(10,0x14,0x1e);
}

// Function: param_macro_override @ 0x1012f0
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1012fc
unsigned long long call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x101306
unsigned long long param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x101310
unsigned long long call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x10131a
int param_builtin_macros(int param_1)
{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101362
int call_builtin_macros(void)
{
 return param_builtin_macros(100);
}

// Function: test_preprocessing_features @ 0x10136d
void test_preprocessing_features(void)
{
 unsigned int uVar1;
 unsigned long long in_RAX;
 __printf_chk(1,&DAT_0010206a);
 __printf_chk(1,&DAT_00102092,0x40);
 __printf_chk(1,&DAT_001020ad,0x1e);
 __printf_chk(1,&DAT_001020c8,0x20);
 __printf_chk(1,&DAT_001020e3,0xdf22);
 __printf_chk(1,&DAT_00102102,0x74);
 __printf_chk(1,&DAT_0010211e,0x13);
 __printf_chk(1,&DAT_00102148,0x3c);
 uVar1 = call_variadic_macro();
 __printf_chk(1,&DAT_00102163,uVar1);
 __printf_chk(1,&DAT_0010217e,0x10);
 __printf_chk(1,&DAT_00102199,500);
 uVar1 = call_builtin_macros();
 __printf_chk(1,&DAT_001021b5,uVar1,in_RAX);
 return;
}

// Function: param_asm_basic @ 0x101496
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x1014a6
void call_asm_basic(void)
{
 param_asm_basic(5);
 return;
}

// Function: param_asm_clobber @ 0x1014b1
int param_asm_clobber(int *param_1, int param_2)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 iVar1 = iVar1 + param_1[uVar2];
 }
 return iVar1;
}

// Function: call_asm_clobber @ 0x1014cb
int call_asm_clobber(void)
{
 long in_FS_OFFSET;
 int local_24 [5];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return param_asm_clobber(&local_24[0],5);
}

// Function: param_asm_multi_insn @ 0x101508
void param_asm_multi_insn(char *param_1, const char *param_2, long param_3)
{
 for (; param_3 != 0; param_3--) {
 *param_1++ = *param_2++;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x101523
unsigned long long call_asm_multi_insn(void)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 unsigned long long local_3a;
 unsigned short local_32;
 char local_30 [16];
 char local_20 [16];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_32 = 0x4d;
 memset(local_30, 0, 16);
 memset(local_20, 0, 16);
 local_3a = 0x5341206f6c6c6548;
 (void)param_asm_multi_insn(local_30,(char *)&local_3a,9);
 uVar1 = 0xffffffff;
 if ((local_30[0] == 'H') && (uVar1 = 0xffffffff, local_30[4] == 'o')) {
 uVar1 = 0x2a;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x1015a1
unsigned long long param_asm_simd(int *param_1,int *param_2,char *param_3)
{
 union {
  char c[16];
  uint32_t i[4];
 } auVar1;
 auVar1.i[1] = (uint32_t)(param_1[1] + param_2[1]);
 auVar1.i[0] = (uint32_t)(*param_1 + *param_2);
 auVar1.i[2] = (uint32_t)(param_1[2] + param_2[2]);
 auVar1.i[3] = (uint32_t)(param_1[3] + param_2[3]);
 memcpy(param_3, auVar1.c, 16);
 return 0;
}

// Function: param_simd_intrinsics @ 0x1015b5
unsigned long long param_simd_intrinsics(int *param_1,int *param_2,char (*param_3) [16])
{
 union {
  char c[16];
  uint32_t i[4];
 } auVar1;
 auVar1.i[1] = param_2[1] + param_1[1];
 auVar1.i[0] = *param_2 + *param_1;
 auVar1.i[2] = param_2[2] + param_1[2];
 auVar1.i[3] = param_2[3] + param_1[3];
 memcpy(*param_3, auVar1.c, 16);
 return 0;
}

// Function: call_asm_simd @ 0x1015c6
unsigned long long call_asm_simd(void)
{
 long in_FS_OFFSET;
 int local_40;
 int local_38;
 int local_30;
 int local_28;
 char local_20 [16];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_40 = 0x200000001;
 local_38 = 0x400000003;
 local_30 = 0x600000005;
 local_28 = 0x800000007;
 (void)param_asm_simd(&local_40,&local_30,local_20);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return (unsigned long long)local_40 + (unsigned long long)local_30 + (unsigned long long)local_28 + (unsigned long long)local_38;
}

// Function: param_asm_atomic @ 0x101656
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101663
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x101670
unsigned int call_asm_atomic(void)
{
 long in_FS_OFFSET;
 LOCK();
 UNLOCK();
 if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return 0x1e;
}

// Function: param_dynamic_code @ 0x1016c0
unsigned int param_dynamic_code(unsigned int param_1)
{
 long lVar1;
 unsigned int uVar2;
 size_t __len;
 unsigned int *__addr;
 long in_FS_OFFSET;
 // Function pointer type for the dynamic code
 typedef unsigned int (*dynamic_func_t)(unsigned int);
 uVar2 = 0xffffffff;
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (unsigned int *)0xffffffffffffffff) {
 *__addr = 0xc083f889;
 *(unsigned short *)(__addr + 1) = 0xc305;
 uVar2 = ((dynamic_func_t)__addr)(param_1);
 munmap(__addr,__len);
 }
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: param_memory_protection @ 0x10175a
unsigned int param_memory_protection(void)
{
 int iVar1;
 size_t __len;
 unsigned int *__addr;
 unsigned int uVar2;
 uVar2 = 0xffffffff;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (unsigned int *)0xffffffffffffffff) {
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

// Function: param_clobber_importance @ 0x101812
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x101826
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

// Function: param_memory_clobber_demo @ 0x101870
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x10188a
void test_asm_features(void)
{
 unsigned int uVar1;
 unsigned long long in_RAX;
 __printf_chk(1,&DAT_001021de);
 call_asm_basic();
 __printf_chk(1,&DAT_00102225);
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

