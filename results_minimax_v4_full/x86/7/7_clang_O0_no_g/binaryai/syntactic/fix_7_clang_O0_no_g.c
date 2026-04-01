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
typedef unsigned char byte;
typedef unsigned int uint;

// Decompiled by BinaryAI
// SHA256: 9eb4c267272cfc468a0b0cc3c41838f31a637950741f3d76766bc6f0dac9f383

// Type definitions for jmp_buf and signal handler
typedef struct __jmp_buf_tag {
    int __jb[6];
    long __jb_flushtype[2];
    long __jb_longs[16];
} jmp_buf;

// Type for long long (using existing int64_t)
typedef int64_t longlong;

typedef void (*__sighandler_t)(int);

// Signal numbers
#define SIGFPE  8
#define SIGSEGV 11
#define SIG_DFL (__sighandler_t)0
#define SIG_IGN (__sighandler_t)1

// External declarations for standard library functions
extern int printf(const char *__format, ...);
extern void free(void *__ptr);
extern void *malloc(size_t __size);
extern void *memcpy(void *__dest, const void *__src, size_t __n);
extern void *memset(void *__s, int __c, size_t __n);
extern char *strncpy(char *__dest, const char *__src, size_t __n);
extern size_t strlen(const char *__s);
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
extern void longjmp(jmp_buf __env, int __val);
extern int _setjmp(jmp_buf __env);

// Missing global variables
extern int __gmon_start__(void);
extern void frame_dummy(void);
extern int __do_global_ctors_aux(void);
extern int div_zero_caught;
extern int segv_caught;
extern jmp_buf jmp_buffer;
extern jmp_buf segv_buffer;
extern int lto_target_func(int);
extern void *_GLOBAL_OFFSET_TABLE_;

// GCC attribute for regparm
#define __regparm3 __attribute__((regparm(3)))

// Forward declaration for main
int main(void);

// Note: Using global register variables can cause conflicts with local usage
// Keeping them as comments - will use local variables in functions instead
// register int unaff_EBX;
// register int unaff_EDI;
// register int unaff_ESI;
// register int unaff_EBP;

// Data references
extern char DAT_0001300d[];
extern char DAT_0001303b[];
extern char DAT_00013057[];
extern char DAT_00013073[];
extern char DAT_00013090[];
extern char DAT_000130ac[];
extern char DAT_000130d6[];
extern char DAT_000130fb[];
extern char DAT_00013121[];
extern char DAT_00013141[];
extern char DAT_0001315d[];
extern char DAT_0001317a[];
extern char DAT_00013197[];
extern char DAT_000131c8[];
extern char DAT_000131e5[];
extern char DAT_0001320c[];
extern char DAT_0001322c[];
extern char param_string_encryption_encrypted[];

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

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
// External declaration - actual implementation in libc
void __libc_start_main(void);

// Function: <EXTERNAL>::printf @ 0x11050
// Stub implementation - actual printf in libc
int printf(const char *__format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::longjmp @ 0x11060
// Stub - actual implementation in libc

// Function: <EXTERNAL>::_setjmp @ 0x11070
// Stub - actual implementation in libc

// Function: <EXTERNAL>::free @ 0x11080
void free(void *__ptr)
{
}

// Function: <EXTERNAL>::memcpy @ 0x11090
void * memcpy(void *__dest,const void *__src,size_t __n)
{
 unsigned char *d = (unsigned char *)__dest;
 const unsigned char *s = (const unsigned char *)__src;
 while (__n--) {
 *d++ = *s++;
 }
 return __dest;
}

// Function: <EXTERNAL>::signal @ 0x110a0
// Stub - actual implementation in libc
__sighandler_t signal(int __sig, __sighandler_t __handler)
{
 return (__sighandler_t)0;
}

// Function: <EXTERNAL>::malloc @ 0x110b0
// Stub - actual implementation in libc

// Function: <EXTERNAL>::strlen @ 0x110c0
// Stub - actual implementation in libc
size_t strlen(const char *__s)
{
 const char *start = __s;
 while (*__s) {
 __s++;
 }
 return __s - start;
}

// Function: <EXTERNAL>::memset @ 0x110d0
// Stub - actual implementation in libc
void *memset(void *__s, int __c, size_t __n)
{
 unsigned char *p = (unsigned char *)__s;
 while (__n--) {
 *p++ = (unsigned char)__c;
 }
 return __s;
}

// Function: <EXTERNAL>::strncpy @ 0x110e0
// Stub - actual implementation in libc
char *strncpy(char *__dest, const char *__src, size_t __n)
{
 size_t i;
 for (i = 0; i < __n && __src[i] != '\0'; i++) {
 __dest[i] = __src[i];
 }
 for (; i < __n; i++) {
 __dest[i] = '\0';
 }
 return __dest;
}

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + -0x10))();
 return;
}

// Function: _start @ 0x11100
void _start(void)
{
 // _start is called by the kernel with stack setup, we need to find argc/argv
 // For simplicity, just call main directly
 main();
 // If we get here, something went wrong - exit
 while(1) { }
}

// Function: __i686.get_pc_thunk.bx @ 0x1112c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11130
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11140
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11180
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x111d0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 char *unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x3e6b) == '\0') {
 if (*(int *)(unaff_EDI + 0x3e13) != 0) {
 FUN_000110f0(*(unsigned int *)(unaff_EDI + 0x3e5f));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x3e6f);
 while (uVar1 < ((unaff_EDI + 0x3d3b) - (unaff_EDI + 0x3d37) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x3e6f) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x3d37 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x3e6f);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x3e6b) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11269
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1126d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di (alternate name)
void __x86_get_pc_thunk_di_alt(void)
{
 return;
}

// Function: param_fake_branch @ 0x11280
int param_fake_branch(int param_1)
{
 int local_c;
 local_c = param_1;
 if (param_1 * param_1 < 0) {
 local_c = param_1 * 2 + -0x21524111;
 }
 strlen("test");
 return local_c;
}

// Function: call_fake_branch @ 0x11300
void call_fake_branch(void)
{
 param_fake_branch(10);
 return;
}

// Function: param_opaque_predicate @ 0x11330
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int local_14;
 int local_10;
 int local_8;
 local_10 = param_1;
 local_14 = param_1 + 1;
 while (local_14 != 0) {
 iVar1 = local_14;
 local_14 = local_10 % local_14;
 local_10 = iVar1;
 }
 if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_10 == 1)) {
 local_8 = param_1 * 2 + 10;
 }
 else {
 local_8 = param_1 * 3 + 0x14;
 }
 return local_8;
}

// Function: call_opaque_predicate @ 0x11410
void call_opaque_predicate(void)
{
 param_opaque_predicate(5);
 return;
}

// Function: param_instruction_substitution @ 0x11440
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x114a0
void call_instruction_substitution(void)
{
 param_instruction_substitution(10);
 return;
}

// Function: decrypt_string @ 0x114d0
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
 byte *local_c;
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 for (local_c = param_2; *local_c != 0; local_c = local_c + 1) {
 *local_c = *local_c ^ param_4;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x11550
int param_string_encryption(void)
{
 size_t sVar1;
 char local_28 [32];
 decrypt_string(&param_string_encryption_encrypted,local_28,0x20,0x5a);
 sVar1 = strlen(local_28);
 return sVar1 + (int)local_28[0];
}

// Function: call_string_encryption @ 0x115b0
void __regparm3 call_string_encryption(unsigned int param_1)
{
 (void)param_1;
 param_string_encryption();
 return;
}

// Function: param_tail_call_optimized @ 0x115d0
int param_tail_call_optimized(int param_1,int param_2)
{
 int local_c;
 if (param_1 < 1) {
 local_c = param_2;
 }
 else {
 local_c = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return local_c;
}

// Function: call_tail_call_optimized @ 0x11630
void call_tail_call_optimized(void)
{
 param_tail_call_optimized(1000,0);
 return;
}

// Function: param_non_tail_call @ 0x11660
int param_non_tail_call(int param_1)
{
 int local_c;
 if (param_1 < 1) {
 local_c = 0;
 }
 else {
 local_c = param_non_tail_call(param_1 + -1);
 local_c = param_1 + local_c;
 }
 return local_c;
}

// Function: call_non_tail_call @ 0x116c0
void call_non_tail_call(void)
{
 param_non_tail_call(100);
 return;
}

// Function: param_vectorized_loop @ 0x116f0
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
 int local_10;
 int local_c;
 int local_8;
 for (local_8 = 0; local_8 < param_4; local_8 = local_8 + 1) {
 *(int *)(param_3 + local_8 * 4) =
 *(int *)(param_1 + local_8 * 4) + *(int *)(param_2 + local_8 * 4);
 }
 local_c = 0;
 for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
 local_c = *(int *)(param_3 + local_10 * 4) + local_c;
 }
 return local_c;
}

// Function: call_vectorized_loop @ 0x11780
void call_vectorized_loop(void)
{
 char local_68 [32];
 char local_48 [32];
 char local_28 [32];
 memcpy(local_28,&DAT_0001320c,0x20);
 memcpy(local_48,&DAT_0001322c,0x20);
 memset(local_68,0,0x20);
 param_vectorized_loop(local_28,local_48,local_68,8);
 return;
}

// Function: param_link_time_optimization @ 0x11820
void param_link_time_optimization(unsigned int param_1)
{
 lto_target_func(param_1);
 return;
}

// Function: lto_target_func @ 0x11850
int lto_target_func(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x11870
void call_link_time_optimization(void)
{
 param_link_time_optimization(5);
 return;
}

// Function: div_zero_handler @ 0x118a0
void div_zero_handler(int sig)
{
 (void)sig;
 div_zero_caught = 1;
 longjmp(jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x118e0
unsigned int param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned int local_c;
 signal(8,div_zero_handler);
 iVar1 = _setjmp(jmp_buffer);
 if (iVar1 == 0) {
 local_c = (unsigned int)(10 / (longlong)param_1);
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_division_by_zero @ 0x11950
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: segv_handler @ 0x119b0
void segv_handler(int sig)
{
 (void)sig;
 segv_caught = 1;
 longjmp(segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x119f0
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int local_c;
 signal(0xb,segv_handler);
 iVar1 = _setjmp(segv_buffer);
 if (iVar1 == 0) {
 local_c = *param_1;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_null_pointer_deref @ 0x11a60
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_c;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}

// Function: param_buffer_overflow_stack @ 0x11ad0
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 int local_14;
 char auStack_c [8];
 for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
 auStack_c[local_14] = 0x41;
 }
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x11b40
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *__ptr;
 int local_14;
 unsigned int local_c;
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 local_c = 0xfffffffe;
 }
 else {
 for (local_14 = 0; local_14 < 0x21; local_14 = local_14 + 1) {
 *(char *)((int)__ptr + local_14) = 0x42;
 }
 free(__ptr);
 local_c = param_1;
 }
 return local_c;
}

// Function: call_buffer_overflow @ 0x11bd0
int call_buffer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}

// Function: param_integer_overflow @ 0x11c20
int param_integer_overflow(int param_1,int param_2)
{
 int local_8;
 local_8 = param_1 + param_2;
 if (((param_1 < 1) || (param_2 < 1)) || (-1 < local_8)) {
 if (((param_1 < 0) && (param_2 < 0)) && (0 < local_8)) {
 local_8 = -2;
 }
 }
 else {
 local_8 = -1;
 }
 return local_8;
}

// Function: call_integer_overflow @ 0x11cb0
int call_integer_overflow(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x11d10
int param_undefined_behavior(int param_1)
{
 return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x11d30
unsigned int call_undefined_behavior(void)
{
 unsigned int uVar1;
 uVar1 = param_undefined_behavior(5);
 return uVar1;
}

// Function: param_implementation_defined @ 0x11d60
unsigned int param_implementation_defined(void)
{
 return 0x2b;
}

// Function: call_implementation_defined @ 0x11e00
void __regparm3 call_implementation_defined(void)
{
 param_implementation_defined();
 return;
}

// Function: test_obf_opt_edge @ 0x11e20
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 printf(&DAT_0001300d);
 uVar1 = call_fake_branch();
 printf(&DAT_0001303b,uVar1);
 uVar1 = call_opaque_predicate();
 printf(&DAT_00013057,uVar1);
 uVar1 = call_instruction_substitution();
 printf(&DAT_00013073,uVar1);
 uVar1 = call_string_encryption();
 printf(&DAT_00013090,uVar1);
 uVar1 = call_tail_call_optimized();
 printf(&DAT_000130ac,uVar1);
 uVar1 = call_non_tail_call();
 printf(&DAT_000130d6,uVar1);
 uVar1 = call_vectorized_loop();
 printf(&DAT_000130fb,uVar1);
 uVar1 = call_link_time_optimization();
 printf(&DAT_00013121,uVar1);
 uVar1 = call_division_by_zero();
 printf(&DAT_00013141,uVar1);
 uVar1 = call_null_pointer_deref();
 printf(&DAT_0001315d,uVar1);
 uVar1 = call_buffer_overflow();
 printf(&DAT_0001317a,uVar1);
 uVar1 = call_integer_overflow();
 printf(&DAT_00013197,uVar1);
 uVar1 = call_undefined_behavior();
 printf(&DAT_000131c8,uVar1);
 uVar1 = call_implementation_defined();
 printf(&DAT_000131e5,uVar1);
 return;
}

// Function: main @ 0x11fe0
int main(void)
{
 test_obf_opt_edge(0);
 return 0;
}

// Function: __do_global_ctors_aux @ 0x12010
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x1205c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

