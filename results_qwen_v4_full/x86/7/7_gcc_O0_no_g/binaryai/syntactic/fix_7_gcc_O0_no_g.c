// Decompiled by BinaryAI
// SHA256: bcb1154989e6f281945e6981187e30f0a3800d8742eadc6540f2c86f53c8763e

#include <setjmp.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

typedef unsigned int uint;
typedef unsigned char byte;

// Forward declarations
typedef void (*sighandler_t)(int);
sighandler_t signal(int sig, sighandler_t handler);
byte *decrypt_string(byte *param_1, byte *param_2, int param_3, byte param_4);
unsigned int main(void);
void __stack_chk_fail_local(void);
void __stack_chk_fail(void);
void __do_global_ctors_aux(void);
void div_zero_handler(int sig);
void segv_handler(int sig);
void FUN_00011150(int sig, void (*handler)(int));
int _init(void *ctx);
void FUN_00011030(void);
void FUN_000110f0(void);
unsigned int FUN_00011100(void *func, unsigned int param_2, void *param_3, int param_4, int param_5, unsigned int param_6, char *param_7);
void FUN_00011110(byte *dest, unsigned int value);
int FUN_00011120(jmp_buf buf);
void FUN_00011130(jmp_buf buf, int val);
void FUN_00011140(void *ptr);
void FUN_00011150(int sig, void (*handler)(int));
void FUN_00011160(void);
void *FUN_00011170(unsigned int size);
void FUN_00011180(byte *dest);
int FUN_00011190(char *str);
void FUN_000111a0(byte *src, byte *dest, int len, unsigned int key);
void _start(unsigned int param_1, unsigned int param_2);
void __i686_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_bx(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void __x86_get_pc_thunk_dx(void);
void __x86_get_pc_thunk_di(void);
unsigned int param_fake_branch(unsigned int param_1);
unsigned int call_fake_branch(void);
int param_opaque_predicate(int param_1);
unsigned int call_opaque_predicate(void);
int param_instruction_substitution(uint param_1);
unsigned int call_instruction_substitution(void);
int param_string_encryption(void);
unsigned int call_string_encryption(void);
int param_tail_call_optimized(int param_1, int param_2);
unsigned int call_tail_call_optimized(void);
int param_non_tail_call(int param_1);
unsigned int call_non_tail_call(void);
int param_vectorized_loop(int param_1, int param_2, int param_3, int param_4);
unsigned int call_vectorized_loop(void);
int lto_target_func(int param_1);
unsigned int param_link_time_optimization(unsigned int param_1);
unsigned int call_link_time_optimization(void);
unsigned int param_division_by_zero(int param_1);
unsigned int call_division_by_zero(void);
unsigned int param_null_pointer_deref(unsigned int *param_1);
unsigned int call_null_pointer_deref(void);
unsigned int param_buffer_overflow_stack(unsigned int param_1);
unsigned int param_buffer_overflow_heap(unsigned int param_1);
unsigned int call_buffer_overflow(void);
int param_integer_overflow(int param_1, int param_2);
unsigned int call_integer_overflow(void);
int param_undefined_behavior(int param_1);
unsigned int call_undefined_behavior(void);
unsigned int param_implementation_defined(void);
unsigned int call_implementation_defined(void);
void test_obf_opt_edge(void);
unsigned int __x86_get_pc_thunk_ax(void);
void _fini(void);

// Global variables
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;
int in_GS_OFFSET;
unsigned int uRam00000001;
byte encrypted_0[32] = {0x1f, 0x1e, 0x1d, 0x1c, 0x1b, 0x1a, 0x19, 0x18, 0x17, 0x16, 0x15, 0x14, 0x13, 0x12, 0x11, 0x10, 0x0f, 0x0e, 0x0d, 0x0c, 0x0b, 0x0a, 0x09, 0x08, 0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x00};
byte DAT_00012010;
byte DAT_0001203d;
byte DAT_00012059;
byte DAT_00012075;
byte DAT_00012092;
byte DAT_000120b0;
byte DAT_000120dc;
byte DAT_00012104;
byte DAT_0001212c;
byte DAT_0001214c;
byte DAT_00012168;
byte DAT_00012185;
byte DAT_000121a4;
byte DAT_000121d5;
byte DAT_000121f4;

// Function: _init @ 0x11000
int _init(void *ctx)
{
 __do_global_ctors_aux();
 return 0;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(void)
{
 void (*func_ptr)(void) = (void (*)(void))0;
 if (func_ptr) {
  func_ptr();
 }
 return;
}

// Function: FUN_00011100 @ 0x11100
unsigned int FUN_00011100(void *func, unsigned int param_2, void *param_3, int param_4, int param_5, unsigned int param_6, char *param_7)
{
 return ((unsigned int (*)(unsigned int, void *, int, int, unsigned int, char *))func)(param_2, param_3, param_4, param_5, param_6, param_7);
}

// Function: FUN_00011110 @ 0x11110
void FUN_00011110(byte *dest, unsigned int value)
{
 *(unsigned int *)dest = value;
 return;
}

// Function: FUN_00011120 @ 0x11120
int FUN_00011120(jmp_buf buf)
{
 return setjmp(buf);
}

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(jmp_buf buf, int val)
{
 longjmp(buf, val);
}

// Function: FUN_00011140 @ 0x11140
void FUN_00011140(void *ptr)
{
 free(ptr);
 return;
}

// Function: FUN_00011150 @ 0x11150
void FUN_00011150(int sig, void (*handler)(int))
{
 signal(sig, handler);
 return;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void)
{
 __stack_chk_fail();
 return;
}

// Function: FUN_00011170 @ 0x11170
void *FUN_00011170(unsigned int size)
{
 return malloc(size);
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(byte *dest)
{
 memset(dest, 0, 0x20);
 return;
}

// Function: FUN_00011190 @ 0x11190
int FUN_00011190(char *str)
{
 return strlen(str);
}

// Function: FUN_000111a0 @ 0x111a0
void FUN_000111a0(byte *src, byte *dest, int len, unsigned int key)
{
 memcpy(dest, src, len);
 return;
}

// Function: _start @ 0x111b0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 int argc = param_1;
 FUN_00011100(main,param_2,&argc,0,0,param_1,auStack_4);
 do {
 } while( 1 );
}

// Function: __i686.get_pc_thunk.bx @ 0x111dc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x111e0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x111f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11230
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11280
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 if (*(char *)(unaff_EDI + 0x2d93) == '\0') {
 if (*(int *)(unaff_EDI + 0x2d63) != 0) {
 FUN_000110f0();
 }
 uVar1 = *(uint *)(unaff_EDI + 0x2d97);
 while (uVar1 < ((unaff_EDI + 0x2c4b) - (unaff_EDI + 0x2c47) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x2d97) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x2c47 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x2d97);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2d93) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11319
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1131d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: param_fake_branch @ 0x11321
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x11349
unsigned int call_fake_branch(void)
{
 return param_fake_branch(10);
}

// Function: param_opaque_predicate @ 0x11366
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int local_1c;
 int local_18;
 local_1c = param_1;
 local_18 = param_1 + 1;
 while (local_18 != 0) {
 iVar1 = local_1c % local_18;
 local_1c = local_18;
 local_18 = iVar1;
 }
 if ((param_1 * 2 + param_1 * param_1 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_1c == 1)) {
 iVar1 = (param_1 + 5) * 2;
 }
 else {
 iVar1 = param_1 * 3 + 0x14;
 }
 return iVar1;
}

// Function: call_opaque_predicate @ 0x11411
unsigned int call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x1142e
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x11496
unsigned int call_instruction_substitution(void)
{
 return param_instruction_substitution(10);
}

// Function: decrypt_string @ 0x114b3
byte * decrypt_string(byte *param_1,byte *param_2,int param_3,byte param_4)
{
 byte *local_10;
 FUN_000111a0(param_1,param_2,param_3,0x114c3);
 param_2[param_3 + -1] = 0;
 for (local_10 = param_2; *local_10 != 0; local_10 = local_10 + 1) {
 *local_10 = *local_10 ^ param_4;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x11520
int param_string_encryption(void)
{
 int iVar1;
 byte local_30[32];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 decrypt_string(encrypted_0,local_30,0x20,0x5a);
 iVar1 = FUN_00011190(local_30);
 iVar1 = local_30[0] + iVar1;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: call_string_encryption @ 0x11588
unsigned int call_string_encryption(void)
{
 return param_string_encryption();
}

// Function: param_tail_call_optimized @ 0x115a3
int param_tail_call_optimized(int param_1,int param_2)
{
 if (0 < param_1) {
 param_2 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x115df
unsigned int call_tail_call_optimized(void)
{
 return param_tail_call_optimized(1000,0);
}

// Function: param_non_tail_call @ 0x11607
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

// Function: call_non_tail_call @ 0x11641
unsigned int call_non_tail_call(void)
{
 return param_non_tail_call(100);
}

// Function: param_vectorized_loop @ 0x11664
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
 int local_14;
 int local_10;
 int local_c;
 for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
 *(int *)(param_3 + local_14 * 4) =
 *(int *)(param_2 + local_14 * 4) + *(int *)(param_1 + local_14 * 4);
 }
 local_10 = 0;
 for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
 local_10 = local_10 + *(int *)(param_3 + local_c * 4);
 }
 return local_10;
}

// Function: call_vectorized_loop @ 0x116fb
unsigned int call_vectorized_loop(void)
{
 uint uVar1;
 unsigned int local_70;
 unsigned int local_6c;
 unsigned int local_68;
 unsigned int local_64;
 unsigned int local_60;
 unsigned int local_5c;
 unsigned int local_58;
 unsigned int local_54;
 unsigned int local_50;
 unsigned int local_4c;
 unsigned int local_48;
 unsigned int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30[8];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_70 = 1;
 local_6c = 2;
 local_68 = 3;
 local_64 = 4;
 local_60 = 5;
 local_5c = 6;
 local_58 = 7;
 local_54 = 8;
 local_50 = 8;
 local_4c = 7;
 local_48 = 6;
 local_44 = 5;
 local_40 = 4;
 local_3c = 3;
 local_38 = 2;
 local_34 = 1;
 uVar1 = 0;
 do {
  local_30[uVar1] = 0;
  uVar1 = uVar1 + 1;
 } while (uVar1 < 8);
 return param_vectorized_loop((int)&local_70,(int)&local_50,(int)&local_30,8);
}

// Function: lto_target_func @ 0x117d2
int lto_target_func(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: param_link_time_optimization @ 0x117e9
unsigned int param_link_time_optimization(unsigned int param_1)
{
 return lto_target_func(param_1);
}

// Function: call_link_time_optimization @ 0x11807
unsigned int call_link_time_optimization(void)
{
 return param_link_time_optimization(5);
}

// Function: div_zero_handler @ 0x11824
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 FUN_00011130(jmp_buffer, 1);
}

// Function: param_division_by_zero @ 0x11856
unsigned int param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 FUN_00011150(8, div_zero_handler);
 iVar1 = FUN_00011120(jmp_buffer);
 if (iVar1 == 0) {
  uVar2 = (unsigned int)(10 / param_1);
 }
 else {
  uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x118b5
unsigned int call_division_by_zero(void)
{
 unsigned int iVar1;
 unsigned int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 FUN_00011150(8,0);
 return iVar2 + iVar1;
}

// Function: segv_handler @ 0x11907
void segv_handler(int sig)
{
 int iVar1;
 unsigned int uVar2;
 segv_caught = 1;
 iVar1 = FUN_00011120(segv_buffer);
 if (iVar1 == 0) {
 FUN_00011150(0xb,segv_handler);
 }
 return;
}

// Function: param_null_pointer_deref @ 0x11939
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 FUN_00011150(0xb,segv_handler);
 iVar1 = FUN_00011120(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x11994
unsigned int call_null_pointer_deref(void)
{
 unsigned int iVar1;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = 0x2a;
 local_18 = param_null_pointer_deref(&local_1c);
 local_14 = param_null_pointer_deref(0);
 FUN_00011150(0xb,0);
 iVar1 = local_14 + local_18;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: param_buffer_overflow_stack @ 0x11a0b
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 int local_20;
 char local_18 [8];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
 local_18[local_20] = 0x41;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 FUN_00011160();
 }
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x11a75
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 int iVar1;
 int local_14;
 iVar1 = FUN_00011170(0x10);
 if (iVar1 == 0) {
 param_1 = 0xfffffffe;
 }
 else {
 for (local_14 = 0; local_14 < 0x21; local_14 = local_14 + 1) {
 *(char *)(iVar1 + local_14) = 0x42;
 }
 FUN_00011140(iVar1);
 }
 return param_1;
}

// Function: call_buffer_overflow @ 0x11adc
unsigned int call_buffer_overflow(void)
{
 unsigned int iVar1;
 unsigned int iVar2;
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar2 + iVar1;
}

// Function: param_integer_overflow @ 0x11b1a
int param_integer_overflow(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_2 + param_1;
 if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_2 + param_1)) {
 if (((param_1 < 0) && (param_2 < 0)) && (0 < param_2 + param_1)) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x11b87
unsigned int call_integer_overflow(void)
{
 unsigned int iVar1;
 unsigned int iVar2;
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(0xffffffff,1);
 return iVar2 + iVar1;
}

// Function: param_undefined_behavior @ 0x11bc9
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x11beb
unsigned int call_undefined_behavior(void)
{
 return param_undefined_behavior(5);
}

// Function: param_implementation_defined @ 0x11c11
unsigned int param_implementation_defined(void)
{
 return 0x2b;
}

// Function: call_implementation_defined @ 0x11c9d
unsigned int call_implementation_defined(void)
{
 return param_implementation_defined();
}

// Function: test_obf_opt_edge @ 0x11cb5
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 FUN_00011180(&DAT_00012010);
 uVar1 = call_fake_branch();
 FUN_00011110(&DAT_0001203d,uVar1);
 uVar1 = call_opaque_predicate();
 FUN_00011110(&DAT_00012059,uVar1);
 uVar1 = call_instruction_substitution();
 FUN_00011110(&DAT_00012075,uVar1);
 uVar1 = call_string_encryption();
 FUN_00011110(&DAT_00012092,uVar1);
 uVar1 = call_tail_call_optimized();
 FUN_00011110(&DAT_000120b0,uVar1);
 uVar1 = call_non_tail_call();
 FUN_00011110(&DAT_000120dc,uVar1);
 uVar1 = call_vectorized_loop();
 FUN_00011110(&DAT_00012104,uVar1);
 uVar1 = call_link_time_optimization();
 FUN_00011110(&DAT_0001212c,uVar1);
 uVar1 = call_division_by_zero();
 FUN_00011110(&DAT_0001214c,uVar1);
 uVar1 = call_null_pointer_deref();
 FUN_00011110(&DAT_00012168,uVar1);
 uVar1 = call_buffer_overflow();
 FUN_00011110(&DAT_00012185,uVar1);
 uVar1 = call_integer_overflow();
 FUN_00011110(&DAT_000121a4,uVar1);
 uVar1 = call_undefined_behavior();
 FUN_00011110(&DAT_000121d5,uVar1);
 uVar1 = call_implementation_defined();
 FUN_00011110(&DAT_000121f4,uVar1);
 return;
}

// Function: main @ 0x11e33
unsigned int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: __x86.get_pc_thunk.ax @ 0x11e53
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __stack_chk_fail_local @ 0x11e60
void __stack_chk_fail_local(void)
{
 FUN_00011160();
 return;
}

// Function: __do_global_ctors_aux @ 0x11e80
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x11ecc
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

