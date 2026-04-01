/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
// typedef unsigned long size_t;  // Already defined in std headers
// typedef long ssize_t;  // Already defined in std headers
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char byte;

/* Standard library type definitions */
typedef struct {
    unsigned long __buf[6];
} __jmp_buf_tag;

typedef void (*__sighandler_t)(int);

/* Missing global variable declarations */
char jmp_buffer[24];
char segv_buffer[24];
int div_zero_caught;
int segv_caught;
long long longlong;
void *_GLOBAL_OFFSET_TABLE_;

/* Missing function stubs */
void __gmon_start__(void);
void frame_dummy(void);
void __gmon_start__(void) { }
void frame_dummy(void) { }
char DAT_0001300d[32];
char DAT_0001303b[32];
char DAT_00013057[32];
char DAT_00013073[32];
char DAT_00013090[32];
char DAT_000130ac[32];
char DAT_000130d6[32];
char DAT_000130fb[32];
char DAT_00013121[32];
char DAT_00013141[32];
char DAT_0001315d[32];
char DAT_0001317a[32];
char DAT_00013197[32];
char DAT_000131c8[32];
char DAT_000131e5[32];
char DAT_0001320c[32];
char DAT_0001322c[32];
char param_string_encryption_encrypted[32];

// Decompiled by BinaryAI
// SHA256: 6459e8848048015901f4288722512d5c044b348fabf72fd484d9e24b4b9923db



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
void __libc_start_main(void)
{
 __libc_start_main();
 return;
}

// Function: <EXTERNAL>::printf @ 0x11050
int printf(const char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x11060
void longjmp(jmp_buf __env,int __val)
{
 longjmp(__env,__val);
}

// Function: <EXTERNAL>::_setjmp @ 0x11070
int _setjmp(jmp_buf __env)
{
 int iVar1;
 iVar1 = _setjmp(__env);
 return iVar1;
}

// Function: <EXTERNAL>::free @ 0x11080
void free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x11090
// Wrapper removed - conflicts with standard library

// Function: <EXTERNAL>::signal @ 0x110a0
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::malloc @ 0x110b0
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::strlen @ 0x110c0
// Wrapper removed - conflicts with standard library

// Function: <EXTERNAL>::memset @ 0x110d0
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x110e0
// Wrapper removed - conflicts with standard library

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(void)
{
 return;
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
int param_instruction_substitution(unsigned int param_1)
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
int call_string_encryption(void)
{
 return param_string_encryption();
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
int call_link_time_optimization(void)
{
 param_link_time_optimization(5);
 return 20;
}

// Function: div_zero_handler @ 0x118a0
void div_zero_handler(int sig)
{
 (void)sig;
 div_zero_caught = 1;
 longjmp((__jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x118e0
unsigned int param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned int local_c;
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 == 0) {
 local_c = (unsigned int)(10 / (long long)param_1);
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
 longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x119f0
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int local_c;
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
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
 if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_1 + param_2)) {
 if (((param_1 < 0) && (param_2 < 0)) && (0 < param_1 + param_2)) {
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
 iVar2 = param_integer_overflow(-1,1);
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
unsigned int call_implementation_defined(void)
{
 return param_implementation_defined();
}

// Function: test_obf_opt_edge @ 0x11e20
void test_obf_opt_edge(int param_1)
{
 unsigned int uVar1;
 (void)param_1;
 call_fake_branch();
 call_opaque_predicate();
 call_instruction_substitution();
 call_string_encryption();
 call_tail_call_optimized();
 call_non_tail_call();
 call_vectorized_loop();
 call_link_time_optimization();
 call_division_by_zero();
 call_null_pointer_deref();
 call_buffer_overflow();
 call_integer_overflow();
 call_undefined_behavior();
 call_implementation_defined();
 return;
}

// Function: main @ 0x11fe0
unsigned int main(void)
{
 test_obf_opt_edge(0);
 return 0;
}

// Function: __do_global_ctors_aux @ 0x12010
void __do_global_ctors_aux(void)
{
 return;
}



