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
typedef unsigned int uint;
typedef unsigned char byte;
typedef void (*__sighandler_t)(int);
typedef struct __jmp_buf_tag {
    int __fl;
    int __ss;
    long __rbx;
    long __rsp;
    long __rbp;
    long __r12;
    long __r13;
    long __r14;
    long __r15;
    long __pc;
} __jmp_buf_tag[1];
typedef __jmp_buf_tag jmp_buf[1];

// External stack canary variable
extern unsigned long __stack_chk_guard;
extern void *__dso_handle;
extern void *stack0x00000008;

// Fake main declaration for _start
int main(void);

// Encrypted string data - extern declarations
extern char encrypted_0[];
extern char DAT_00101180[];
extern char DAT_001011b0[];
extern char DAT_001011d0[];
extern char DAT_001011f0[];
extern char DAT_00101210[];
extern char DAT_00101230[];
extern char DAT_00101260[];
extern char DAT_00101288[];
extern char DAT_001012b0[];
extern char DAT_001012d0[];
extern char DAT_001012f0[];
extern char DAT_00101310[];
extern char DAT_00101330[];
extern char DAT_00101368[];
extern char DAT_00101388[];

// Actual data definitions
char encrypted_0[32] = {0};
char DAT_00101180[] = "Test string 0";
char DAT_001011b0[] = "Value: %d\n";
char DAT_001011d0[] = "Opaque predicate: %u\n";
char DAT_001011f0[] = "Instruction sub: %x\n";
char DAT_00101210[] = "String enc: %u\n";
char DAT_00101230[] = "Tail call: %u\n";
char DAT_00101260[] = "Non-tail call: %u\n";
char DAT_00101288[] = "Vectorized: %u\n";
char DAT_001012b0[] = "LTO: %x\n";
char DAT_001012d0[] = "Div zero: %d\n";
char DAT_001012f0[] = "Null ptr: %u\n";
char DAT_00101310[] = "Buffer overflow: %u\n";
char DAT_00101330[] = "Int overflow: %u\n";
char DAT_00101368[] = "Undefined: %u\n";
char DAT_00101388[] = "Impl defined: %x\n";

// Global variables used by signal handlers
char completed_0;
__jmp_buf_tag jmp_buffer[1];
__jmp_buf_tag segv_buffer[1];
int div_zero_caught;
int segv_caught;

// Weak function declaration
int call_weak_fn(int ctx);

// Decompiled by BinaryAI
// SHA256: 8cb59d874022a132a094f3f51b3c799ede4ad3b0d415f255df5f9a79f10e6cba

// Function: _init @ 0x100848
static int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_00100860 @ 0x100860
void FUN_00100860(void)
{
 // Invalid call to null pointer - replaced with return to avoid crash
 return;
}

// Function: <EXTERNAL>::strlen @ 0x100880
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::_setjmp @ 0x100890
extern int _setjmp(__jmp_buf_tag *__env);

// Function: <EXTERNAL>::longjmp @ 0x1008xx
extern int longjmp(__jmp_buf_tag *__env, int __val);

// Function: <EXTERNAL>::__libc_start_main @ 0x1008a0
extern int __libc_start_main(int (*main)(void), void *init, void *fini, void *rtld_fini, void *stack_end, unsigned long long stack_args);

// Function: <EXTERNAL>::__cxa_finalize @ 0x1008b0
void __cxa_finalize(void *ctx);

// Function: <EXTERNAL>::longjmp @ 0x1008xx
void ext_longjmp(__jmp_buf_tag *__env, int __val)
{
 longjmp(__env, __val);
}

// Function: <EXTERNAL>::signal @ 0x1008c0
extern __sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::malloc @ 0x1008d0
extern void *malloc(size_t __size);

// Function: <EXTERNAL>::free @ 0x1008d5
extern void free(void *__ptr);

// Function: <EXTERNAL>::__printf_chk @ 0x1008e0
extern int __printf_chk(int __flag, const char *__format, ...);

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1008f0
void __stack_chk_fail(void)
{
 while(1); // Hang instead of recursive call
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100900
extern void __gmon_start__(void);

// Function: <EXTERNAL>::abort @ 0x100910
void abort(void)
{
 while(1); // Hang instead of recursive call
}

// Function: <EXTERNAL>::puts @ 0x100920
int puts(const char *__s)
{
 // Call the external puts and return its result
 extern int puts(const char *);
 return puts(__s);
}

// Function: <EXTERNAL>::free @ 0x100930
void ext_free(void *__ptr)
{
 // Call the external free
 extern void free(void *);
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::__longjmp_chk @ 0x100940
void __longjmp_chk(__jmp_buf_tag *__env, int __val);

// Function: <EXTERNAL>::strncpy @ 0x100950
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: _start @ 0x100980
static void _start(unsigned long long param_1)
{
 __libc_start_main(main,&stack0x00000008,&stack0x00000008,0,0,param_1);
 // __libc_start_main never returns, but we need to satisfy the compiler
 while(1); // Hang forever
}

// Function: call_weak_fn @ 0x1009b4 - DELETED (CRT stub)


// Function: deregister_tm_clones @ 0x1009d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100a00
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100a3c @ 0x100a3c
void FUN_00100a3c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(&__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100a40
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(&__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: div_zero_handler @ 0x100a94
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer,1);
}

// Function: segv_handler @ 0x100ab4
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}

// Function: param_fake_branch @ 0x100ad4
void param_fake_branch(void)
{
 return;
}

// Function: call_fake_branch @ 0x100ad8
unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x100ae0
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar1 = param_1 + 1;
 iVar2 = iVar1;
 iVar4 = param_1;
 if (iVar1 != 0) {
 do {
 iVar3 = iVar2;
 iVar2 = 0;
 if (iVar3 != 0) {
 iVar2 = iVar4 / iVar3;
 }
 iVar2 = iVar4 - iVar2 * iVar3;
 iVar4 = iVar3;
 } while (iVar2 != 0);
 if (param_1 * 2 + param_1 * param_1 + 1 == iVar1 * iVar1 && iVar3 == 1) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}

// Function: call_opaque_predicate @ 0x100b38
unsigned long long call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x100b50
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100b74
unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x100b7c
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 pbVar2 = param_2;
 while (bVar1 != 0) {
 *pbVar2 = param_4 ^ bVar1;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x100bdc
size_t param_string_encryption(void)
{
 size_t sVar1;
 byte local_28 [32];
 long local_8;
 local_8 = __stack_chk_guard;
 decrypt_string(encrypted_0,local_28,0x20,0x5a);
 sVar1 = strlen((char *)local_28);
 if (local_8 - __stack_chk_guard == 0) {
 return sVar1;
 }
 __stack_chk_fail();
 return sVar1;
}

// Function: call_string_encryption @ 0x100c54
unsigned long long call_string_encryption(void)
{
 (void)param_string_encryption();
 return 0;
}

// Function: param_tail_call_optimized @ 0x100c68
unsigned long param_tail_call_optimized(int param_1,uint param_2)
{
 unsigned long uVar1;
 if (0 < param_1) {
 uVar1 = param_tail_call_optimized(param_1 + -1,param_1 + param_2);
 return uVar1;
 }
 return (unsigned long)param_2;
}

// Function: call_tail_call_optimized @ 0x100c94
unsigned long long call_tail_call_optimized(void)
{
 return param_tail_call_optimized(1000,0);
}

// Function: param_non_tail_call @ 0x100cb0
int param_non_tail_call(int param_1)
{
 int iVar1;
 if (0 < param_1) {
 iVar1 = param_non_tail_call(param_1 + -1);
 return iVar1 + param_1;
 }
 return 0;
}

// Function: call_non_tail_call @ 0x100ce8
unsigned long long call_non_tail_call(void)
{
 return param_non_tail_call(100);
}

// Function: param_vectorized_loop @ 0x100d00
int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)
{
 int iVar1;
 long lVar2;
 if (param_4 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 do {
 *(int *)(param_3 + lVar2 * 4) = *(int *)(param_1 + lVar2 * 4) + *(int *)(param_2 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_4);
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_3 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_4);
 }
 return iVar1;
}

// Function: call_vectorized_loop @ 0x100d50
unsigned long long call_vectorized_loop(void)
{
 unsigned long long uVar1;
 unsigned long long local_68;
 unsigned long long uStack_60;
 unsigned long long uStack_58;
 unsigned long long uStack_50;
 unsigned long long local_48;
 unsigned long long uStack_40;
 unsigned long long uStack_38;
 unsigned long long uStack_30;
 unsigned long long local_28;
 unsigned long long uStack_20;
 unsigned long long local_18;
 unsigned long long uStack_10;
 long local_8;
 local_8 = __stack_chk_guard;
 uStack_60 = 0x400000003;
 local_68 = 0x200000001;
 uStack_50 = 0x800000007;
 uStack_58 = 0x600000005;
 uStack_40 = 0x500000006;
 local_48 = 0x700000008;
 uStack_30 = 0x100000002;
 uStack_38 = 0x300000004;
 local_28 = 0;
 uStack_20 = 0;
 local_18 = 0;
 uStack_10 = 0;
 uVar1 = param_vectorized_loop((long)&local_68,(long)&local_48,(long)&local_28,8);
 if (local_8 - __stack_chk_guard == 0) {
 return uVar1;
 }
 __stack_chk_fail();
 return uVar1;
}

// Function: param_link_time_optimization @ 0x100dc8
int param_link_time_optimization(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: call_link_time_optimization @ 0x100dd4
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x100ddc
int param_division_by_zero(int param_1)
{
 int iVar1;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 == 0) {
 iVar1 = 0;
 if (param_1 != 0) {
 iVar1 = 10 / param_1;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_division_by_zero @ 0x100e28
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x100e68
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x100eb0
unsigned long long call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_c;
 long local_8;
 local_8 = __stack_chk_guard;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_8 - __stack_chk_guard == 0) {
 return (unsigned long long)(iVar1 + iVar2);
 }
 __stack_chk_fail();
 return 0;
}

// Function: param_buffer_overflow_stack @ 0x100f2c
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x100f30
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 int iVar1;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 iVar1 = 0x21;
 do {
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 free(__ptr);
 }
 return param_1;
}

// Function: call_buffer_overflow @ 0x100f74
int call_buffer_overflow(void)
{
 int iVar1;
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}

// Function: param_integer_overflow @ 0x100f90
int param_integer_overflow(uint param_1,uint param_2)
{
 bool bVar1;
 int iVar2;
 iVar2 = param_1 + param_2;
 if ((((int)param_1 < 1 || param_2 == 0) || 0 < (int)param_1 && (int)param_2 < 0) || -1 < iVar2) {
 bVar1 = (int)(param_1 & param_2) < 0;
 if ((bVar1 && iVar2 != 0) && (!bVar1 || -1 < iVar2)) {
 iVar2 = -2;
 }
 }
 else {
 iVar2 = -1;
 }
 return iVar2;
}

// Function: call_integer_overflow @ 0x100fc4
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x100fd0
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x100fd8
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x100fe0
unsigned long long param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x100fe8
unsigned long long call_implementation_defined(void)
{
 return 0x30;
}

// Function: test_obf_opt_edge @ 0x100ff0
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 puts(&DAT_00101180);
 __printf_chk(1,&DAT_001011b0,10);
 uVar1 = call_opaque_predicate();
 __printf_chk(1,&DAT_001011d0,uVar1);
 __printf_chk(1,&DAT_001011f0,0xe1);
 uVar1 = param_string_encryption();
 __printf_chk(1,&DAT_00101210,uVar1);
 uVar1 = call_tail_call_optimized();
 __printf_chk(1,&DAT_00101230,uVar1);
 uVar1 = call_non_tail_call();
 __printf_chk(1,&DAT_00101260,uVar1);
 uVar1 = call_vectorized_loop();
 __printf_chk(1,&DAT_00101288,uVar1);
 __printf_chk(1,&DAT_001012b0,0x14);
 uVar1 = call_division_by_zero();
 __printf_chk(1,&DAT_001012d0,uVar1);
 uVar1 = call_null_pointer_deref();
 __printf_chk(1,&DAT_001012f0,uVar1);
 uVar1 = call_buffer_overflow();
 __printf_chk(1,&DAT_00101310,uVar1);
 __printf_chk(1,&DAT_00101330,2000000000);
 __printf_chk(1,&DAT_00101368,10);
 __printf_chk(1,&DAT_00101388,0x30);
 return;
}

// Function: main @ 0x101148
int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _fini @ 0x101160
static void _fini(void)
{
 return;
}

