/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned char byte;






/* Global variables */
int div_zero_caught = 0;
int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
char param_string_encryption_encrypted[32] = "encrypted_string_data_here";

/* Forward declarations */
void __do_global_ctors_aux(void);

/* Data symbols */
char DAT_0001300d[] = "Test result: %d\n";
char DAT_0001303b[] = "fake_branch: %d\n";
char DAT_00013057[] = "opaque_predicate: %d\n";
char DAT_00013073[] = "instruction_substitution: %d\n";
char DAT_00013090[] = "string_encryption: %d\n";
char DAT_000130ac[] = "tail_call_optimized: %d\n";
char DAT_000130d6[] = "non_tail_call: %d\n";
char DAT_000130fb[] = "vectorized_loop: %d\n";
char DAT_00013121[] = "link_time_optimization: %d\n";
char DAT_00013141[] = "division_by_zero: %d\n";
char DAT_0001315d[] = "null_pointer_deref: %d\n";
char DAT_0001317a[] = "buffer_overflow: %d\n";
char DAT_00013197[] = "integer_overflow: %d\n";
char DAT_000131c8[] = "undefined_behavior: %d\n";
char DAT_000131e5[] = "implementation_defined: %d\n";
int DAT_0001320c[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int DAT_0001322c[8] = {8, 7, 6, 5, 4, 3, 2, 1};
int _GLOBAL_OFFSET_TABLE_ = 0;

// Decompiled by BinaryAI
// SHA256: 6459e8848048015901f4288722512d5c044b348fabf72fd484d9e24b4b9923db

// Function: _init @ 0x11000
static int _init(void *ctx)
{
 __do_global_ctors_aux();
 return 0;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
int __libc_start_main(int (*main)(int, char**), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end))
{
 return main(argc, ubp_av);
}



// Function: <EXTERNAL>::longjmp @ 0x11060
void longjmp(jmp_buf __env,int __val)
{
 return;
}

// Function: <EXTERNAL>::_setjmp @ 0x11070
int _setjmp(jmp_buf __env)
{
 return 0;
}

// Function: <EXTERNAL>::free @ 0x11080
void free(void *__ptr)
{
 return;
}



// Function: <EXTERNAL>::signal @ 0x110a0
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 return __handler;
}

// Function: <EXTERNAL>::malloc @ 0x110b0
void * malloc(size_t __size)
{
 static char buffer[1024];
 return buffer;
}



// Function: <EXTERNAL>::memset @ 0x110d0
void * memset(void *__s,int __c,size_t __n)
{
 return __s;
}



// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(void)
{
 return;
}

// Forward declaration
int main(int argc, char **argv);

// Function: _start @ 0x11100
static void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main(main,param_2,auStack_4,0,0,param_1,auStack_4);
 do {
 } while( true );
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
int call_fake_branch(void)
{
 return param_fake_branch(10);
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
int call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x11440
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x114a0
int call_instruction_substitution(void)
{
 return param_instruction_substitution(10);
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
int call_tail_call_optimized(void)
{
 return param_tail_call_optimized(1000,0);
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
int call_non_tail_call(void)
{
 return param_non_tail_call(100);
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
int call_vectorized_loop(void)
{
 char local_68 [32];
 char local_48 [32];
 char local_28 [32];
 memcpy(local_28,&DAT_0001320c,0x20);
 memcpy(local_48,&DAT_0001322c,0x20);
 memset(local_68,0,0x20);
 return param_vectorized_loop(local_28,local_48,local_68,8);
}

// Function: param_link_time_optimization @ 0x11820
void param_link_time_optimization(unsigned int param_1)
{
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
 return 20;
}

// Function: div_zero_handler @ 0x118a0
void div_zero_handler(int sig)
{
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
 if (param_1 != 0) {
 local_c = (unsigned int)(10 / param_1);
 } else {
 local_c = 0xffffffff;
 }
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
 if (param_1 != 0) {
 local_c = *param_1;
 } else {
 local_c = 0xffffffff;
 }
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
int call_implementation_defined(void)
{
 return param_implementation_defined();
}

// Function: test_obf_opt_edge @ 0x11e20
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 printf(DAT_0001300d,0);
 uVar1 = call_fake_branch();
 printf(DAT_0001303b,uVar1);
 uVar1 = call_opaque_predicate();
 printf(DAT_00013057,uVar1);
 uVar1 = call_instruction_substitution();
 printf(DAT_00013073,uVar1);
 uVar1 = call_string_encryption();
 printf(DAT_00013090,uVar1);
 uVar1 = call_tail_call_optimized();
 printf(DAT_000130ac,uVar1);
 uVar1 = call_non_tail_call();
 printf(DAT_000130d6,uVar1);
 uVar1 = call_vectorized_loop();
 printf(DAT_000130fb,uVar1);
 uVar1 = call_link_time_optimization();
 printf(DAT_00013121,uVar1);
 uVar1 = call_division_by_zero();
 printf(DAT_00013141,uVar1);
 uVar1 = call_null_pointer_deref();
 printf(DAT_0001315d,uVar1);
 uVar1 = call_buffer_overflow();
 printf(DAT_0001317a,uVar1);
 uVar1 = call_integer_overflow();
 printf(DAT_00013197,uVar1);
 uVar1 = call_undefined_behavior();
 printf(DAT_000131c8,uVar1);
 uVar1 = call_implementation_defined();
 printf(DAT_000131e5,uVar1);
 return;
}

// Function: main @ 0x11fe0
int main(int argc, char **argv)
{
 test_obf_opt_edge();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x12010
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x1205c
static void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

