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

/* Additional type definitions */
typedef unsigned int uint;
typedef unsigned char byte;
typedef void (*__sighandler_t)(int);
typedef struct { unsigned long __buf[8]; } __jmp_buf_tag;
#define NULL ((void *)0)

/* External variable declarations */
extern unsigned long __stack_chk_guard;
extern void *__dso_handle;
extern __jmp_buf_tag jmp_buffer;
extern __jmp_buf_tag segv_buffer;
extern char completed_0;
extern int div_zero_caught;
extern int segv_caught;

/* Global variable definitions */
unsigned long ___stack_chk_guard = 0xdeadbeef;
void *stack0x00000008 = NULL;
char encrypted_0[32] = {0};
int div_zero_caught = 0;
int segv_caught = 0;
char completed_0 = 0;
char DAT_00101120[] = "Testing obfuscation and optimization...\n";
char DAT_0010114d[] = "Opaque predicate result: %d\n";
char DAT_00101169[] = "Calculated: %d\n";
char DAT_00101185[] = "Instruction substitution: %d\n";
char DAT_001011a2[] = "Decrypted string length: %d\n";
char DAT_001011be[] = "Tail call: %llu\n";
char DAT_001011e8[] = "Non-tail call: %d\n";
char DAT_0010120d[] = "Vectorized loop: %d\n";
char DAT_00101233[] = "LTO result: %d\n";
char DAT_00101253[] = "Division by zero: %d\n";
char DAT_0010126f[] = "Null pointer: %d\n";
char DAT_0010128c[] = "Buffer overflow: %d\n";
char DAT_001012a9[] = "Integer overflow: %llu\n";
char DAT_001012da[] = "Undefined behavior: %d\n";
char DAT_001012f7[] = "Implementation defined: %llu\n";

/* Function prototypes */
void call_weak_fn(void);
void test_obf_opt_edge(void);

// Decompiled by BinaryAI
// SHA256: 6c6ab70700c87ac858b44fc6674dd61e5e568361578c5df913e16552f9c67df0

// Function: _init @ 0x100848
static int _init(void *ctx)
{
 int iVar1;
 call_weak_fn();
 iVar1 = 0;
 return iVar1;
}

// Function: FUN_00100860 @ 0x100860
void FUN_00100860(void)
{
 ((void (*)(void))0x0)();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x100880
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::_setjmp @ 0x100890
int _setjmp(__jmp_buf_tag *__env)
{
 int iVar1;
 iVar1 = _setjmp(__env);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1008a0
void __libc_start_main(void *main, unsigned long long argc, void **argv, void *init, void *fini, void *rtld_fini, ...)
{
 __libc_start_main(main, argc, argv, init, fini, rtld_fini);
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1008b0
void __cxa_finalize(void *__d)
{
 __cxa_finalize(__d);
}

// Function: <EXTERNAL>::signal @ 0x1008c0
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::malloc @ 0x1008d0
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x1008e0
int __printf_chk(int __flag, const char *__format, ...)
{
 return __printf_chk(__flag, __format);
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1008f0
void __stack_chk_fail(uint param_1, void *param_2, int param_3, long param_4)
{
 __stack_chk_fail(param_1, param_2, param_3, param_4);
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100900
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::abort @ 0x100910
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::puts @ 0x100920
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::free @ 0x100930
void free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::__longjmp_chk @ 0x100940
void __longjmp_chk(__jmp_buf_tag *__env, int __val)
{
 __longjmp_chk(__env, __val);
}

// Function: <EXTERNAL>::strncpy @ 0x100950
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: main @ 0x100980
unsigned long long main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _start @ 0x1009c0
static void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,param_9,&stack0x00000008,0,0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x1009f4
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x100a10
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100a40
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100a7c @ 0x100a7c
void FUN_00100a7c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100a80
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: div_zero_handler @ 0x100ad4
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer, 1);
}

// Function: segv_handler @ 0x100af4
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(&segv_buffer, 1);
}

// Function: param_fake_branch @ 0x100b14
void param_fake_branch(void)
{
 return;
}

// Function: call_fake_branch @ 0x100b18
unsigned long long call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x100b20
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar1 = param_1 + 1;
 iVar2 = iVar1;
 iVar4 = param_1;
 while (iVar3 = iVar2, iVar3 != 0) {
 iVar2 = 0;
 if (iVar3 != 0) {
 iVar2 = iVar4 / iVar3;
 }
 iVar2 = iVar4 - iVar2 * iVar3;
 iVar4 = iVar3;
 }
 iVar2 = param_1 * 3 + 0x14;
 if (param_1 * param_1 + param_1 * 2 + 1 == iVar1 * iVar1 && iVar4 == 1) {
 iVar2 = param_1 * 2 + 10;
 }
 return iVar2;
}

// Function: call_opaque_predicate @ 0x100b78
int call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x100b80
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100ba4
unsigned long long call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x100bac
byte * decrypt_string(const char *param_1,char *param_2,size_t param_3,byte param_4)
{
 byte *pbVar1;
 byte *pbVar2;
 pbVar1 = (byte *)strncpy(param_2,param_1,param_3);
 pbVar1[param_3 - 1] = 0;
 for (pbVar2 = pbVar1; *pbVar2 != 0; pbVar2 = pbVar2 + 1) {
 *pbVar2 = *pbVar2 ^ param_4;
 }
 return pbVar1;
}

// Function: param_string_encryption @ 0x100c04
size_t param_string_encryption(void)
{
 size_t sVar1;
 byte local_28 [32];
 long local_8;
 local_8 = ___stack_chk_guard;
 decrypt_string(encrypted_0,local_28,0x20,0x5a);
 sVar1 = strlen((char *)local_28);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail((uint)local_28[0] + (int)sVar1,&__stack_chk_guard,0,
 local_8 - ___stack_chk_guard);
 }
 return sVar1;
}

// Function: param_tail_call_optimized @ 0x100c80
int param_tail_call_optimized(int param_1,int param_2)
{
 for (; 0 < param_1; param_1 = param_1 + -1) {
 param_2 = param_2 + param_1;
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x100ca0
unsigned long long call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x100cac
int param_non_tail_call(int param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; 0 < param_1; param_1 = param_1 + -1) {
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}

// Function: call_non_tail_call @ 0x100ccc
int call_non_tail_call(void)
{
 return param_non_tail_call(100);
}

// Function: param_vectorized_loop @ 0x100cd4
int param_vectorized_loop(long *param_1,long *param_2,long *param_3,int param_4)
{
 int iVar1;
 long lVar2;
 for (lVar2 = 0; (int)lVar2 < param_4; lVar2 = lVar2 + 1) {
 *(int *)(param_3 + lVar2 * 4) = *(int *)(param_1 + lVar2 * 4) + *(int *)(param_2 + lVar2 * 4);
 }
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_4; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_3 + lVar2 * 4);
 }
 return iVar1;
}

// Function: call_vectorized_loop @ 0x100d1c
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
 local_8 = ___stack_chk_guard;
 local_28 = 0;
 uStack_20 = 0;
 uStack_60 = 0x400000003;
 local_68 = 0x200000001;
 uStack_50 = 0x800000007;
 uStack_58 = 0x600000005;
 local_18 = 0;
 uStack_10 = 0;
 uStack_40 = 0x500000006;
 local_48 = 0x700000008;
 uStack_30 = 0x100000002;
 uStack_38 = 0x300000004;
 uVar1 = param_vectorized_loop((long *)&local_68,(long *)&local_48,(long *)&local_28,8);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return uVar1;
}

// Function: param_link_time_optimization @ 0x100d94
int param_link_time_optimization(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: call_link_time_optimization @ 0x100da0
unsigned long long call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x100da8
int param_division_by_zero(int param_1)
{
 int iVar1;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(&jmp_buffer);
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

// Function: call_division_by_zero @ 0x100df4
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x100e34
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp(&segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x100e7c
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(iVar1 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return iVar1 + iVar2;
}

// Function: param_buffer_overflow_stack @ 0x100ef8
void param_buffer_overflow_stack(void)
{
 return;
}

// Function: param_buffer_overflow_heap @ 0x100efc
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 free(__ptr);
 }
 return param_1;
}

// Function: call_buffer_overflow @ 0x100f34
int call_buffer_overflow(void)
{
 int iVar1;
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}

// Function: param_integer_overflow @ 0x100f50
int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 iVar1 = param_1 + param_2;
 if (((int)param_1 < 1 || param_2 == 0) || 0 < (int)param_1 && (int)param_2 < 0) {
 if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 }
 else if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x100f88
unsigned long long call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x100f94
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x100f9c
unsigned long long call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x100fa4
unsigned long long param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x100fac
unsigned long long call_implementation_defined(void)
{
 return 0x30;
}

// Function: test_obf_opt_edge @ 0x100fb4
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 unsigned long long uVar2;
 union {
  char bytes[16];
  struct {
   uint64_t _0_8_;
   uint64_t _8_8_;
  } fields;
 } auVar3;
 puts(DAT_00101120);
 __printf_chk(1,DAT_0010114d,10);
 uVar1 = call_opaque_predicate();
 __printf_chk(1,DAT_00101169,uVar1);
 __printf_chk(1,DAT_00101185,0xe1);
 uVar1 = param_string_encryption();
 uVar2 = __printf_chk(1,DAT_001011a2,uVar1);
 uVar2 = call_tail_call_optimized();
 __builtin_memcpy(auVar3.bytes, &uVar2, sizeof(uVar2));
 __printf_chk(1,(const char *)(uintptr_t)auVar3.fields._8_8_,auVar3.fields._0_8_ & 0xffffffff);
 uVar1 = call_non_tail_call();
 __printf_chk(1,DAT_001011e8,uVar1);
 uVar1 = call_vectorized_loop();
 __printf_chk(1,DAT_0010120d,uVar1);
 __printf_chk(1,DAT_00101233,0x14);
 uVar1 = call_division_by_zero();
 __printf_chk(1,DAT_00101253,uVar1);
 uVar1 = call_null_pointer_deref();
 __printf_chk(1,DAT_0010126f,uVar1);
 uVar1 = call_buffer_overflow();
 __printf_chk(1,DAT_0010128c,uVar1);
 __printf_chk(1,DAT_001012a9,2000000000);
 __printf_chk(1,DAT_001012da,10);
 __printf_chk(1,DAT_001012f7,0x30);
 return;
}

// Function: _fini @ 0x101108
static void _fini(void)
{
 return;
}

