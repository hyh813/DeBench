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
typedef unsigned char byte;
typedef unsigned int uint;

// Decompiled by BinaryAI
// SHA256: c36d15ec7f884fdf37d272369a40a44072b0445dda7614ab989c0bed38d91581

// Global variables
volatile char __aarch64_have_lse_atomics = 0;
char completed_0 = 0;
extern void *__dso_handle;
int global_var = 0;
int tmp_ldWn;
int tmp_stWn;
char DAT_00101719[] = "Test preprocessing features: %d\n";
char DAT_00101741[] = "  call_macro_constants: %u\n";
char DAT_0010175c[] = "  call_macro_functions: %u\n";
char DAT_00101777[] = "  call_conditional_compile: %u\n";
char DAT_00101792[] = "  call_multi_branch_compile: %u\n";
char DAT_001017b1[] = "  call_macro_recursion: %u\n";
char DAT_001017cd[] = "  call_stringize: %u\n";
char DAT_001017f7[] = "  call_token_paste: %u\n";
char DAT_00101812[] = "  call_variadic_macro: %u\n";
char DAT_0010182d[] = "  call_macro_override: %u\n";
char DAT_00101848[] = "  call_include_guard: %u\n";
char DAT_00101864[] = "  call_builtin_macros: %u\n";
char DAT_00101897[] = "Test asm features: %d\n";
char DAT_001018c2[] = "  call_asm_basic: %u\n";
char DAT_001018de[] = "  call_asm_clobber: %u\n";
char DAT_001018fa[] = "  call_asm_multi_insn: %u\n";
char DAT_00101916[] = "  call_asm_simd: %u\n";
char DAT_00101932[] = "  call_asm_atomic: %u\n";
char DAT_0010194e[] = "  call_asm_privileged: %u\n";

// Forward declarations
void call_weak_fn(void);
int main(int argc, char **argv);
int header_func(int param_1);
unsigned long long stack0x00000008;
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
bool ExclusiveMonitorPass(void *addr, int size);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

// Function: _init @ 0x100780
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_001007a0 @ 0x1007a0
void FUN_001007a0(void)
{
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x1007c0
void * memcpy(void *__dest,void *__src,size_t __n)
{
 extern void *__memcpy(void *__dest,void *__src,size_t __n);
 return __memcpy(__dest,__src,__n);
}

// Function: <EXTERNAL>::strlen @ 0x1007d0
size_t strlen(char *__s)
{
 extern size_t __strlen(char *__s);
 return __strlen(__s);
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1007e0
void __libc_start_main(int (*main)(int, char **),int argc,char **argv,void (*init)(void),void (*fini)(void),void (*rtld_fini)(void))
{
 main(argc, argv);
 fini();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1007f0
void __cxa_finalize(void *d)
{
 extern void __cxa_finalize_external(void *d);
 __cxa_finalize_external(d);
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100800
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::__getauxval @ 0x100810
unsigned long __getauxval(unsigned long __type)
{
 extern unsigned long __getauxval_external(unsigned long __type);
 return __getauxval_external(__type);
}

// Function: <EXTERNAL>::abort @ 0x100820
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::mmap @ 0x100830
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
 void *pvVar1;
 pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
 return pvVar1;
}

// Function: <EXTERNAL>::munmap @ 0x100840
int munmap(void *__addr,size_t __len)
{
 int iVar1;
 iVar1 = munmap(__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x100850
long sysconf(int __name)
{
 long lVar1;
 lVar1 = sysconf(__name);
 return lVar1;
}

// Function: <EXTERNAL>::printf @ 0x100860
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::mprotect @ 0x100870
int mprotect(void *__addr,size_t __len,int __prot)
{
 int iVar1;
 iVar1 = mprotect(__addr,__len,__prot);
 return iVar1;
}

// Function: init_have_lse_atomics @ 0x100880
void init_have_lse_atomics(void)
{
 byte extraout_var;
 extraout_var = __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}

// Function: _start @ 0x1008c0
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main((int (*)(int, char **))main,param_9,(char **)&stack0x00000008,0,0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x1008f4
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x100910
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100940
void register_tm_clones(void)
{
 return;
}

// Function: FUN_0010097c @ 0x10097c
void FUN_0010097c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100980
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: param_macro_constants @ 0x1009d4
unsigned int param_macro_constants(int param_1)
{
 unsigned int local_4;
 if (param_1 < 0x401) {
 local_4 = 0x200;
 }
 else {
 local_4 = 0x40;
 }
 return local_4;
}

// Function: call_macro_constants @ 0x100a10
unsigned int call_macro_constants(int param_1)
{
 return (unsigned int)param_macro_constants(param_1);
}

// Function: param_macro_functions @ 0x100a28
int param_macro_functions(int param_1,int param_2)
{
 int local_10;
 local_10 = param_2;
 if (param_2 < param_1) {
 local_10 = param_1;
 }
 return param_1 * param_1 + local_10;
}

// Function: call_macro_functions @ 0x100a84
unsigned int call_macro_functions(int iVar1)
{
 return (unsigned int)param_macro_functions(iVar1,3);
}

// Function: param_conditional_compile @ 0x100aa0
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x100ad0
unsigned int call_conditional_compile(int iVar1)
{
 return (unsigned int)param_conditional_compile(iVar1);
}

// Function: param_multi_branch_compile @ 0x100ae8
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x100b0c
unsigned int call_multi_branch_compile(int iVar1)
{
 return (unsigned int)param_multi_branch_compile(iVar1);
}

// Function: param_macro_recursion @ 0x100b24
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x100b78
unsigned int call_macro_recursion(int iVar1)
{
 return (unsigned int)param_macro_recursion(iVar1);
}

// Function: param_stringize @ 0x100b90
unsigned long param_stringize(void)
{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return sVar1 + sVar2 + sVar3 & 0xffffffff;
}

// Function: call_stringize @ 0x100c08
unsigned int call_stringize(int param_1)
{
 return (unsigned int)param_stringize();
}

// Function: my_func @ 0x100c20
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x100c3c
int param_token_paste(int param_1)
{
 int iVar1;
 iVar1 = my_func(param_1);
 return iVar1 + param_1 + 5;
}

// Function: call_token_paste @ 0x100c84
unsigned int call_token_paste(int param_1)
{
 return (unsigned int)param_token_paste(5);
}

// Function: param_variadic_macro @ 0x100c9c
int param_variadic_macro(uint param_1,uint param_2,uint param_3)
{
 printf("LOG: Values: %d, %d, %d\n",(unsigned long)param_1,(unsigned long)param_2,(unsigned long)param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x100cf4
unsigned int call_variadic_macro(int param_1)
{
 return (unsigned int)param_variadic_macro(10,0x14,0x1e);
}

// Function: param_macro_override @ 0x100d14
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x100d48
unsigned int call_macro_override(int param_1)
{
 return (unsigned int)param_macro_override(param_1);
}

// Function: param_include_guard @ 0x100d60
void param_include_guard(void)
{
 header_func(5);
 return;
}

// Function: header_func @ 0x100d78
int header_func(int param_1)
{
 return param_1 * 100;
}

// Function: call_include_guard @ 0x100d94
void call_include_guard(void)
{
 param_include_guard();
 return;
}

// Function: param_builtin_macros @ 0x100da8
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:37");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100e54
unsigned int call_builtin_macros(int param_1)
{
 return (unsigned int)param_builtin_macros(param_1);
}

// Function: test_preprocessing_features @ 0x100e6c
int test_preprocessing_features(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = printf((char *)&DAT_00101719);
 uVar2 = call_macro_constants(iVar1);
 iVar1 = printf((char *)&DAT_00101741,uVar2 & 0xffffffff);
 uVar2 = call_macro_functions(iVar1);
 iVar1 = printf((char *)&DAT_0010175c,uVar2 & 0xffffffff);
 uVar2 = call_conditional_compile(iVar1);
 iVar1 = printf((char *)&DAT_00101777,uVar2 & 0xffffffff);
 uVar2 = call_multi_branch_compile(iVar1);
 iVar1 = printf((char *)&DAT_00101792,uVar2 & 0xffffffff);
 uVar2 = call_macro_recursion(iVar1);
 iVar1 = printf((char *)&DAT_001017b1,uVar2 & 0xffffffff);
 uVar2 = call_stringize(iVar1);
 iVar1 = printf((char *)&DAT_001017cd,uVar2 & 0xffffffff);
 uVar2 = call_token_paste(iVar1);
 iVar1 = printf((char *)&DAT_001017f7,uVar2 & 0xffffffff);
 uVar2 = call_variadic_macro(iVar1);
 iVar1 = printf((char *)&DAT_00101812,uVar2 & 0xffffffff);
 uVar2 = call_macro_override(5);
 iVar1 = printf((char *)&DAT_0010182d,uVar2 & 0xffffffff);
 call_include_guard();
 uVar2 = 0;
 iVar1 = printf((char *)&DAT_00101848,uVar2 & 0xffffffff);
 uVar2 = call_builtin_macros(100);
 iVar1 = printf((char *)&DAT_00101864,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: param_asm_basic @ 0x100f64
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x100f84
unsigned int call_asm_basic(void)
{
 return (unsigned int)param_asm_basic(5);
}

// Function: param_asm_clobber @ 0x100f9c
int param_asm_clobber(void *param_1,int param_2)
{
 int local_14;
 int local_10;
 local_10 = 0;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_14 * 4);
 }
 return local_10;
}

// Function: call_asm_clobber @ 0x101000
unsigned int call_asm_clobber(void)
{
 unsigned long long local_30;
 unsigned long long uStack_28;
 unsigned int local_20;
 uStack_28 = 0x400000003;
 local_30 = 0x200000001;
 local_20 = 5;
 return (unsigned int)param_asm_clobber(&local_30,5);
}

// Function: param_asm_multi_insn @ 0x10103c
void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return;
}

// Function: call_asm_multi_insn @ 0x101070
unsigned int call_asm_multi_insn(void)
{
 bool bVar1;
 unsigned int uVar2;
 unsigned long long local_40;
 unsigned long long uStack_38;
 unsigned long long local_30;
 unsigned long long uStack_28;
 unsigned long long local_20;
 unsigned short local_18;
 ((unsigned char *)&local_20)[0] = 'H';
 ((unsigned char *)&local_20)[1] = 'e';
 ((unsigned char *)&local_20)[2] = 'l';
 ((unsigned char *)&local_20)[3] = 'l';
 ((unsigned char *)&local_20)[4] = 'o';
 ((unsigned char *)&local_20)[5] = ' ';
 ((unsigned char *)&local_20)[6] = 'A';
 ((unsigned char *)&local_20)[7] = 'S';
 ((unsigned char *)&local_18)[0] = 'M';
 ((unsigned char *)&local_18)[1] = '\0';
 uStack_38 = 0;
 local_40 = 0;
 uStack_28 = 0;
 local_30 = 0;
 param_asm_multi_insn(&local_40,&local_20,9);
 bVar1 = false;
 if ((char)local_40 == 'H') {
 bVar1 = ((unsigned char *)&local_40)[4] == 'o';
 }
 uVar2 = 0x2a;
 if (!bVar1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_asm_simd @ 0x1010f8
unsigned long long param_asm_simd(void *param_1,void *param_2,void *param_3)
{
 int local_1c;
 for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
 *(int *)(param_3 + (long)local_1c * 4) =
 *(int *)(param_1 + (long)local_1c * 4) + *(int *)(param_2 + (long)local_1c * 4);
 }
 return 0;
}

// Function: param_simd_intrinsics @ 0x101168
unsigned long long param_simd_intrinsics(long param_1,long param_2,long param_3)
{
 int local_1c;
 for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
 *(int *)(param_3 + (long)local_1c * 4) =
 *(int *)(param_1 + (long)local_1c * 4) + *(int *)(param_2 + (long)local_1c * 4);
 }
 return 0;
}

// Function: call_asm_simd @ 0x1011d8
unsigned int call_asm_simd(void)
{
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 unsigned long long local_30;
 unsigned long long uStack_28;
 unsigned long long local_20;
 unsigned long long uStack_18;
 uStack_18 = 0x400000003;
 local_20 = 0x200000001;
 uStack_28 = 0x800000007;
 local_30 = 0x600000005;
 param_asm_simd(&local_20,&local_30,&local_40);
 return (unsigned int)(local_40 + local_3c + local_38 + local_34);
}

// Function: param_asm_atomic @ 0x10123c
int param_asm_atomic(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101288
int param_atomic_c11(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x1012cc
unsigned int call_asm_atomic(void)
{
 int iVar1;
 int local_14;
 local_14 = 10;
	iVar1 = param_asm_atomic((unsigned long long)&local_14,5);
 return (unsigned int)(local_14 + iVar1);
}

// Function: param_dynamic_code @ 0x101308
int param_dynamic_code(int param_1)
{
 size_t __len;
 void *__addr;
 int local_14;
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 local_14 = -1;
 }
 else {
 local_14 = param_1 + 5;
 munmap(__addr,__len);
 }
 return local_14;
}

// Function: param_memory_protection @ 0x101394
unsigned int param_memory_protection(void)
{
 int iVar1;
 size_t __len;
 unsigned int *__addr;
 unsigned int local_14;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffffffffffff) {
 local_14 = 0xffffffff;
 }
 else {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 local_14 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 if (iVar1 == 0) {
 *__addr = 100;
 munmap(__addr,__len);
 }
 else {
 munmap(__addr,__len);
 local_14 = 0xfffffffd;
 }
 }
 else {
 munmap(__addr,__len);
 local_14 = 0xfffffffe;
 }
 }
 return local_14;
}

// Function: param_clobber_importance @ 0x10149c
int param_clobber_importance(int param_1,int param_2)
{
 return (param_1 + param_2) * 2;
}

// Function: call_asm_privileged @ 0x1014c0
unsigned int call_asm_privileged(void)
{
 int iVar1;
 int iVar2;
 int local_14;
 local_14 = param_dynamic_code(10);
 iVar1 = param_memory_protection();
 iVar2 = param_clobber_importance(3,7);
 if (((local_14 == 0xf) && (iVar1 == 0x2a)) && (iVar2 == 0x14)) {
 local_14 = 0x4d;
 }
 return (unsigned int)local_14;
}

// Function: param_memory_clobber_demo @ 0x101548
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x101574
int test_asm_features(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = printf((char *)&DAT_00101897);
	uVar2 = call_asm_basic();
 iVar1 = printf((char *)&DAT_001018c2,uVar2 & 0xffffffff);
	uVar2 = call_asm_clobber();
 iVar1 = printf((char *)&DAT_001018de,uVar2 & 0xffffffff);
	uVar2 = call_asm_multi_insn();
 iVar1 = printf((char *)&DAT_001018fa,uVar2 & 0xffffffff);
	uVar2 = call_asm_simd();
 iVar1 = printf((char *)&DAT_00101916,uVar2 & 0xffffffff);
	uVar2 = call_asm_atomic();
	iVar1 = printf((char *)&DAT_00101932,uVar2 & 0xffffffff);
 uVar2 = call_asm_privileged();
 iVar1 = printf((char *)&DAT_0010194e,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x101608
int main(int argc, char **argv)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101640
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar1 = *param_2;
 cVar2 = '\x01';
 bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
 if (bVar3) {
 *param_2 = iVar1 + param_1;
 cVar2 = ExclusiveMonitorsStatus();
 }
 } while (cVar2 != '\0');
 return iVar1;
 }
 LOAcquire();
 tmp_ldWn = *param_2;
 iVar1 = tmp_ldWn;
 tmp_stWn = iVar1 + param_1;
 iVar1 = tmp_stWn;
 *param_2 = iVar1;
 iVar1 = tmp_ldWn;
 LORelease();
 return iVar1;
}

// Function: _fini @ 0x101670
void _fini(void)
{
 return;
}

