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
typedef uint8_t byte;
typedef void (*__sighandler_t)(int);
// Define __jmp_buf_tag struct type
struct __jmp_buf_tag { int __jb[6]; long __fl; long __ss[128]; };
typedef struct __jmp_buf_tag __jmp_buf_tag;
typedef __jmp_buf_tag jmp_buf[1];

// Stack guard variable
long ___stack_chk_guard = 0;
long __stack_chk_guard = 0;

// Signal handlers
#define SIG_DFL ((__sighandler_t)0U)
#define SIG_IGN ((__sighandler_t)1U)

// Forward declarations
int main(void);
void call_weak_fn(void);
char encrypted_0[32] = "";

// Global variables
char completed_0 = 0;
void *__dso_handle = 0;
int div_zero_caught = 0;
int segv_caught = 0;

// String constants
char DAT_001016b8[] = "Testing obfuscation optimizations...";
char DAT_001016e8[] = "Fake branch result: %u\n";
char DAT_00101708[] = "Opaque predicate result: %u\n";
char DAT_00101728[] = "Instruction substitution result: %u\n";
char DAT_00101748[] = "String encryption result: %u\n";
char DAT_00101768[] = "Tail call result: %u\n";
char DAT_00101798[] = "Non-tail call result: %u\n";
char DAT_001017c0[] = "Vectorized loop result: %u\n";
char DAT_001017e8[] = "LTO result: %u\n";
char DAT_00101808[] = "Division by zero result: %u\n";
char DAT_00101828[] = "Null pointer deref result: %u\n";
char DAT_00101848[] = "Buffer overflow result: %u\n";
char DAT_00101868[] = "Integer overflow result: %u\n";
char DAT_001018a0[] = "Undefined behavior result: %u\n";
char DAT_001018c0[] = "Implementation-defined result: %u\n";

// Jump buffer for signal handling
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

// Decompiled by BinaryAI
// SHA256: 238f4466455a889333ef6e9e0077b3a428c826147d2da0af03eb360e19188c11

// Function: _init @ 0x100840
void _init(void *ctx)
{
 call_weak_fn();
 return;
}

// Function: FUN_00100860 @ 0x100860
void FUN_00100860(void)
{
 // Intentional null pointer dereference - simulates crash
 void (*null_fn)(void) = (void (*)(void))0;
 null_fn();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x100880
size_t strlen(char *__s)
{
 char *p = __s;
 while (*p) p++;
 return (size_t)(p - __s);
}

// Function: <EXTERNAL>::_setjmp @ 0x100890
// Note: _setjmp is provided by libc, declaration only
int _setjmp(__jmp_buf_tag *__env);

// Function: <EXTERNAL>::__libc_start_main @ 0x1008a0
// Note: __libc_start_main is provided by libc, declaration only
int __libc_start_main(int (*main)(void), void *arg, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);

// Function: <EXTERNAL>::__cxa_finalize @ 0x1008b0
// Note: __cxa_finalize is provided by libc, declaration only
void __cxa_finalize(void *arg);

// Function: <EXTERNAL>::signal @ 0x1008c0
// Note: signal is provided by libc, declaration only
__sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::malloc @ 0x1008d0
// Note: malloc is provided by libc, declaration only
void *malloc(size_t __size);

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1008e0
// Note: __stack_chk_fail is provided by libc, declaration only
void __stack_chk_fail(void);

// Function: <EXTERNAL>::__gmon_start__ @ 0x1008f0
// Note: __gmon_start__ is provided by libc, declaration only
void __gmon_start__(void);

// Function: <EXTERNAL>::abort @ 0x100900
// Note: abort is provided by libc, declaration only
void abort(void);

// Function: <EXTERNAL>::puts @ 0x100910
// Note: puts is provided by libc, declaration only
int puts(char *__s);

// Function: <EXTERNAL>::free @ 0x100920
// Note: free is provided by libc, declaration only
void free(void *__ptr);

// Function: <EXTERNAL>::longjmp @ 0x100930
// Note: longjmp is provided by libc, declaration only
void longjmp(__jmp_buf_tag *__env,int __val);

// Function: <EXTERNAL>::strncpy @ 0x100940
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::printf @ 0x100950
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: _start @ 0x100980
void _start(unsigned long long param_1)
{
 // __libc_start_main(int (*main)(void), void *init, void *fini, void *rtld_fini, void *stack_end)
 __libc_start_main(main,0,0,0,0,(void *)param_1);
 // __libc_start_main does not return
}

// Function: call_weak_fn @ 0x1009b4
void call_weak_fn(void)
{
 return;
}

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
 __cxa_finalize((void*)0);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100a40
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize((void*)0);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: param_fake_branch @ 0x100a94
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x100abc
void call_fake_branch(void)
{
 param_fake_branch(10);
 return;
}

// Function: param_opaque_predicate @ 0x100ad4
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int local_18;
 int local_14;
 local_18 = param_1;
 local_14 = param_1 + 1;
 while (local_14 != 0) {
 iVar1 = 0;
 if (local_14 != 0) {
 iVar1 = local_18 / local_14;
 }
 iVar1 = local_18 - iVar1 * local_14;
 local_18 = local_14;
 local_14 = iVar1;
 }
 if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_18 == 1)) {
 iVar1 = (param_1 + 5) * 2;
 }
 else {
 iVar1 = param_1 * 3 + 0x14;
 }
 return iVar1;
}

// Function: call_opaque_predicate @ 0x100bd4
void call_opaque_predicate(void)
{
 param_opaque_predicate(5);
 return;
}

// Function: param_instruction_substitution @ 0x100bec
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100c6c
void call_instruction_substitution(void)
{
 param_instruction_substitution(10);
 return;
}

// Function: decrypt_string @ 0x100c84
byte * decrypt_string(byte *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte *local_8;
 strncpy((char *)param_2,(char *)param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_8 = param_2; *local_8 != 0; local_8 = local_8 + 1) {
 *local_8 = *local_8 ^ param_4;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x100d10
int param_string_encryption(void)
{
 int iVar1;
 size_t sVar2;
 byte local_28 [32];
 long local_8;
 local_8 = ___stack_chk_guard;
 decrypt_string(encrypted_0,local_28,0x20,0x5a);
 sVar2 = strlen((char *)local_28);
 iVar1 = (int)sVar2 + (uint)local_28[0];
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return iVar1;
}

// Function: call_string_encryption @ 0x100d8c
int call_string_encryption(void)
{
 return param_string_encryption();
}

// Function: param_tail_call_optimized @ 0x100da0
unsigned long param_tail_call_optimized(int param_1,uint param_2)
{
 unsigned long uVar1;
 if (param_1 < 1) {
 uVar1 = (unsigned long)param_2;
 }
 else {
 uVar1 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return uVar1;
}

// Function: call_tail_call_optimized @ 0x100dec
unsigned long call_tail_call_optimized(void)
{
 return param_tail_call_optimized(1000,0);
}

// Function: param_non_tail_call @ 0x100e08
int param_non_tail_call(int param_1)
{
 int iVar1;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = param_non_tail_call(param_1 + -1);
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}

// Function: call_non_tail_call @ 0x100e48
int call_non_tail_call(void)
{
 return param_non_tail_call(100);
}

// Function: param_vectorized_loop @ 0x100e60
int param_vectorized_loop(int *param_1, int *param_2, int *param_3, int param_4)
{
 int local_c;
 int local_8;
 int local_4;
 for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
 param_3[local_c] = param_1[local_c] + param_2[local_c];
 }
 local_8 = 0;
 for (local_4 = 0; local_4 < param_4; local_4 = local_4 + 1) {
 local_8 = local_8 + param_3[local_4];
 }
 return local_8;
}

// Function: call_vectorized_loop @ 0x100f2c
unsigned int call_vectorized_loop(void)
{
 unsigned int uVar1;
 int local_68;
 int local_48;
 int local_28;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_68 = 3;
 local_48 = 1;
 local_28 = 7;
 local_28 = 5;
 local_28 = 6;
 local_28 = 8;
 local_28 = 2;
 local_28 = 4;
 local_28 = 0;
 uVar1 = param_vectorized_loop(&local_68,&local_48,&local_28,8);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: lto_target_func @ 0x100fbc
int lto_target_func(int param_1)
{
 return (param_1 + 5) * 2;
}

void param_link_time_optimization(unsigned int param_1)
{
 (void)lto_target_func(param_1);
 return;
}

// Function: call_link_time_optimization @ 0x100ff4
void call_link_time_optimization(void)
{
 (void)lto_target_func(5);
 return;
}

// Function: div_zero_handler @ 0x10100c
void div_zero_handler(int unused __attribute__((unused)))
{
 div_zero_caught = 1;
 longjmp((__jmp_buf_tag *)&jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x101038
int param_division_by_zero(int param_1)
{
 int iVar1;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 iVar1 = 0;
 if (param_1 != 0) {
 iVar1 = 10 / param_1;
 }
 }
 else {
 iVar1 = -1;
 }
 signal(8,(__sighandler_t)0);
 return iVar1;
}

// Function: call_division_by_zero @ 0x10108c
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)SIG_DFL);
 return iVar1 + iVar2;
}

// Function: segv_handler @ 0x1010cc
void segv_handler(int unused __attribute__((unused)))
{
 segv_caught = 1;
 longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x1010f8
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x101148
int call_null_pointer_deref(void)
{
 unsigned int local_14;
 int local_10;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_14 = 0x2a;
 local_10 = param_null_pointer_deref(&local_14);
 local_c = param_null_pointer_deref((unsigned int *)0);
 signal(0xb,SIG_DFL);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return local_10 + local_c;
}

// Function: param_buffer_overflow_stack @ 0x1011cc
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 int local_18;
 char auStack_10 [8];
 long local_8;
 local_8 = ___stack_chk_guard;
 for (local_18 = 0; local_18 < 0x11; local_18 = local_18 + 1) {
 auStack_10[local_18] = 0x41;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return param_1;
 }
 __stack_chk_fail();
}

// Function: param_buffer_overflow_heap @ 0x101278
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 int local_c;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 param_1 = 0xfffffffe;
 }
 else {
 for (local_c = 0; local_c < 0x21; local_c = local_c + 1) {
 *(char *)((long)__ptr + (long)local_c) = 0x42;
 }
 free(__ptr);
 }
 return param_1;
}

// Function: call_buffer_overflow @ 0x1012ec
int call_buffer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}

// Function: param_integer_overflow @ 0x101320
int param_integer_overflow(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1 + param_2;
 if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_1 + param_2)) {
 if (((param_1 < 0) && (param_2 < 0)) && (0 < param_1 + param_2)) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x1013c0
int call_integer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x101404
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x101424
unsigned int call_undefined_behavior(void)
{
 unsigned int uVar1;
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}

// Function: param_implementation_defined @ 0x101444
unsigned int param_implementation_defined(void)
{
 return 0x30;
}

// Function: call_implementation_defined @ 0x1014ec
unsigned int call_implementation_defined(void)
{
 return param_implementation_defined();
}

// Function: test_obf_opt_edge @ 0x101500
int test_obf_opt_edge(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts(DAT_001016b8);
 call_fake_branch();
 uVar2 = call_opaque_predicate();
 iVar1 = printf(DAT_00101708,uVar2);
 uVar2 = call_instruction_substitution();
 iVar1 = printf(DAT_00101728,uVar2);
 iVar1 = call_string_encryption();
 iVar1 = printf(DAT_00101748,iVar1);
 uVar2 = call_tail_call_optimized();
 iVar1 = printf(DAT_00101768,uVar2);
 uVar2 = call_non_tail_call();
 iVar1 = printf(DAT_00101798,uVar2);
 uVar2 = call_vectorized_loop();
 iVar1 = printf(DAT_001017c0,uVar2);
 call_link_time_optimization();
 iVar1 = printf(DAT_001017e8,0U);
 uVar2 = call_division_by_zero();
 iVar1 = printf(DAT_00101808,uVar2);
 uVar2 = call_null_pointer_deref();
 iVar1 = printf(DAT_00101828,uVar2);
 uVar2 = call_buffer_overflow();
 iVar1 = printf(DAT_00101848,uVar2);
 uVar2 = call_integer_overflow();
 iVar1 = printf(DAT_00101868,uVar2);
 uVar2 = call_undefined_behavior();
 iVar1 = printf(DAT_001018a0,uVar2);
 uVar2 = call_implementation_defined();
 iVar1 = printf(DAT_001018c0,uVar2);
 return iVar1;
}

// Function: main @ 0x101638
int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _fini @ 0x101650
void _fini(void)
{
 return;
}

