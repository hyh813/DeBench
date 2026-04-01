// Decompiled by BinaryAI
// SHA256: 0696899145891a782ae490ebf0fe54b8e9a22cd6ed0cf06391b6cafe7dc69255

#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>
#include <setjmp.h>
#include <stdbool.h>
#include <signal.h>

// Type definitions
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long long ulonglong;

// External data
extern byte encrypted_0;
extern byte DAT_00012008;
extern byte DAT_0001212f;
extern byte DAT_0001214b;
extern byte DAT_00012167;
extern byte DAT_00012184;
extern byte DAT_00012038;
extern byte DAT_00012064;
extern byte DAT_0001208c;
extern byte DAT_000120b4;
extern byte DAT_000121a0;
extern byte DAT_000121bc;
extern byte DAT_000121d9;
extern byte DAT_000120d4;
extern byte DAT_000121f6;
extern byte DAT_00012108;

// Global variables
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;
char stack0x00000004;  // Stack marker used in _start

// Function declarations for PLT functions (external library calls)
// These are calls to external library functions via PLT
int FUN_00011100(const char *format, ...);  // printf-style variadic
int FUN_00011110(jmp_buf env);              // setjmp - takes jmp_buf, returns int  
void FUN_00011130(int sig, void (*handler)(int));  // signal - takes int, handler
void FUN_00011140(void);  // abort-like
void *FUN_00011150(size_t size);  // malloc
void FUN_00011160(void *ptr);  // free
int FUN_00011170(const char *str);  // puts
void *FUN_00011180(void *dest, const void *src, size_t n);  // memcpy
int FUN_00011190(int operation_type, const char *format, ...);  // printf-style variadic, first arg is operation type
void FUN_000111a0(jmp_buf env, int val);    // longjmp - takes jmp_buf, int
void invalidInstructionException(void);
void __stack_chk_fail_local(void);
void __x86_get_pc_thunk_di(void);
void __x86_get_pc_thunk_dx(void);

// Also declare frame_dummy and __do_global_ctors_aux
void frame_dummy(void);
void __do_global_dtors_aux(void);
void __do_global_ctors_aux(void);
void __gmon_start__(void);

// External function pointers (GOT entries)
extern void *GOT_0x00;  // Will be initialized at runtime

// Function: _init @ 0x11000
void _init(void *ctx)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
 return;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 // Null function call - likely unreachable or placeholder
 return;
}

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(int param_1)
{
 // External function call through GOT
 void (*func_ptr)(void) = *(void (**)(void))(param_1 + 0x3c);
 if (func_ptr != NULL) {
 func_ptr();
 }
 return;
}

// Function: FUN_00011100 @ 0x11100 - printf-style variadic
int FUN_00011100(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}

// Function: FUN_00011110 @ 0x11110 - setjmp
int FUN_00011110(jmp_buf env)
{
    return setjmp(env);
}

// Function: FUN_00011120 @ 0x11120 - free
void FUN_00011120(void *arg)
{
    free(arg);
}

// Function: FUN_00011130 @ 0x11130 - signal
void FUN_00011130(int sig, void (*handler)(int))
{
    signal(sig, handler);
}

// Function: FUN_00011140 @ 0x11140 - abort
void FUN_00011140(void)
{
    abort();
}

// Function: FUN_00011150 @ 0x11150 - malloc
void *FUN_00011150(size_t size)
{
    return malloc(size);
}

// Function: FUN_00011160 @ 0x11160 - free
void FUN_00011160(void *ptr)
{
    free(ptr);
}

// Function: FUN_00011170 @ 0x11170 - puts
int FUN_00011170(const char *str)
{
    return puts(str);
}

// Function: FUN_00011180 @ 0x11180 - memcpy
void *FUN_00011180(void *dest, const void *src, size_t n)
{
    return memcpy(dest, src, n);
}

// Function: FUN_00011190 @ 0x11190 - printf-style variadic (operation_type determines behavior)
int FUN_00011190(int operation_type, const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}

// Function: FUN_000111a0 @ 0x111a0 - longjmp
void FUN_000111a0(jmp_buf env, int val)
{
    longjmp(env, val);
}

// Function: main @ 0x111b0
int main(int argc, char **argv)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _start @ 0x111d0
void _start(unsigned int param_1, unsigned int param_2)
{
 // Call main with argc (param_1) and argv (param_2)
 main(param_1, param_2);
 // Infinite loop to match original behavior
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x111fc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Stub for __stack_chk_fail_local - called by stack protection code
// Note: Full definition is at the end of the file

// Function: __x86.get_pc_thunk.bx @ 0x11200
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Remove this external that shouldn't be called as a function
// extern void *GOT_0x00;

// Function: deregister_tm_clones @ 0x11210
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11250
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x112a0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 char *unaff_EDI = (char *)0x12340000;  // Placeholder for PIC base address
 // Call to get PC value for PIC addressing
 unaff_EDI = (char *)((int)unaff_EDI + 0x2d73);
 if (*(char *)(unaff_EDI + 0x2d73) == '\0') {
 if (*(int *)(unaff_EDI + 0x2d43) != 0) {
 FUN_000110f0(*(unsigned int *)(unaff_EDI + 0x2d57));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x2d77);
 while (uVar1 < ((unaff_EDI + 0x2c2b) - (unaff_EDI + 0x2c27) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x2d77) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x2c27 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x2d77);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2d73) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11339
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1133d
// Returns the address of the call site (PIC base)
void __x86_get_pc_thunk_di(void)
{
    // In PIC code, this loads the PC-relative address
    // For now, we'll use a placeholder that returns 0
    // The actual value would be computed at link time
    return;
}

static unsigned int _GOT_BASE = 0;

// Function: div_zero_handler @ 0x11350
unsigned int div_zero_handler(void)
{
 int iVar1;
 div_zero_caught = 1;
 FUN_000111a0(jmp_buffer,1);
 segv_caught = 1;
 FUN_000111a0(segv_buffer,1);
 FUN_00011130(8,div_zero_handler);
 iVar1 = FUN_00011110(jmp_buffer);
 if (iVar1 == 0) {
 do {
 invalidInstructionException();
 } while( true );
 }
 return 0xffffffff;
}

// Function: segv_handler @ 0x11380
unsigned int segv_handler(void)
{
 int iVar1;
 segv_caught = 1;
 FUN_000111a0(segv_buffer,1);
 FUN_00011130(8,div_zero_handler);
 iVar1 = FUN_00011110(jmp_buffer);
 if (iVar1 == 0) {
 do {
 invalidInstructionException();
 } while( true );
 }
 return 0xffffffff;
}

// Function: param_division_by_zero.constprop.0 @ 0x113b0
unsigned int param_division_by_zero_constprop_0(void)
{
 int iVar1;
 FUN_00011130(8,div_zero_handler);
 iVar1 = FUN_00011110(jmp_buffer);
 if (iVar1 == 0) {
 do {
 invalidInstructionException();
 } while( true );
 }
 return 0xffffffff;
}

// Function: param_division_by_zero.constprop.1 @ 0x11400
int param_division_by_zero_constprop_1(void)
{
 int iVar1;
 FUN_00011130(8,div_zero_handler);
 iVar1 = FUN_00011110(jmp_buffer);
 return (-(uint)(iVar1 == 0) & 3) - 1;
}

// Function: param_fake_branch @ 0x11440
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x11450
unsigned int call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x11460
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar1 = param_1 + 1;
 iVar2 = param_1;
 iVar4 = iVar1;
 if (iVar1 != 0) {
 do {
 iVar3 = iVar4;
 iVar4 = iVar2 % iVar3;
 iVar2 = iVar3;
 } while (iVar4 != 0);
 if ((iVar3 == 1) && (param_1 * 2 + 1 + param_1 * param_1 == iVar1 * iVar1)) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}

// Function: call_opaque_predicate @ 0x114c0
unsigned int call_opaque_predicate(void)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 iVar1 = 5;
 iVar4 = 6;
 do {
 iVar3 = iVar4;
 iVar4 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar4 != 0);
 uVar2 = 0x14;
 if (iVar3 != 1) {
 uVar2 = 0x23;
 }
 return uVar2;
}

// Function: param_instruction_substitution @ 0x114f0
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x11520
unsigned int call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x11530
byte * decrypt_string(unsigned int param_1,byte *param_2,int param_3,byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 FUN_00011180(param_2,param_1,param_3);
 param_2[param_3 + -1] = 0;
 bVar1 = *param_2;
 pbVar2 = param_2;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ param_4;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x11590
int param_string_encryption(void)
{
 byte bVar1;
 byte *pbVar2;
 int iVar3;
 byte local_30 [31];
 char local_11;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x1159b;
#ifdef __x86_64__
 local_10 = *(int *)(__builtin_frame_address(0) + 0x14);
#else
 local_10 = *(int *)(__builtin_frame_address(0) + 0x14);
#endif
 FUN_00011180(local_30,&encrypted_0,0x1f);
 local_11 = 0;
 pbVar2 = local_30;
 bVar1 = local_30[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 iVar3 = FUN_00011170(local_30);
#ifdef __x86_64__
 if (local_10 == *(int *)(__builtin_frame_address(0) + 0x14)) {
#else
 if (local_10 == *(int *)(__builtin_frame_address(0) + 0x14)) {
#endif
 return iVar3 + (char)local_30[0];
 }
 __stack_chk_fail_local();
}

// Function: call_string_encryption @ 0x11630
int call_string_encryption(void)
{
 byte bVar1;
 byte *pbVar2;
 int iVar3;
 byte local_30 [31];
 char local_11;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x1163b;
#ifdef __x86_64__
 local_10 = *(int *)(__builtin_frame_address(0) + 0x14);
#else
 local_10 = *(int *)(__builtin_frame_address(0) + 0x14);
#endif
 FUN_00011180(local_30,&encrypted_0,0x1f);
 local_11 = 0;
 pbVar2 = local_30;
 bVar1 = local_30[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 iVar3 = FUN_00011170(local_30);
#ifdef __x86_64__
 if (local_10 == *(int *)(__builtin_frame_address(0) + 0x14)) {
#else
 if (local_10 == *(int *)(__builtin_frame_address(0) + 0x14)) {
#endif
 return iVar3 + (char)local_30[0];
 }
 __stack_chk_fail_local();
}

// Function: param_tail_call_optimized @ 0x116d0
int param_tail_call_optimized(int param_1,int param_2)
{
 if (0 < param_1) {
 do {
 param_2 = param_2 + param_1;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x116f0
unsigned int call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x11700
int param_non_tail_call(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (0 < param_1) {
 do {
 iVar1 = iVar1 + param_1;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return iVar1;
}

// Function: call_non_tail_call @ 0x11720
unsigned int call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x11730
int param_vectorized_loop(int param_1,int param_2,int *param_3,int param_4)
{
 int *piVar1;
 int iVar2;
 if (0 < param_4) {
 iVar2 = 0;
 do {
 param_3[iVar2] = *(int *)(param_2 + iVar2 * 4) + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_4 != iVar2);
 piVar1 = param_3 + param_4;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_3;
 param_3 = param_3 + 1;
 } while (piVar1 != param_3);
 return iVar2;
 }
 return 0;
}

// Function: call_vectorized_loop @ 0x11790
unsigned int call_vectorized_loop(void)
{
 return 0x48;
}

// Function: param_link_time_optimization @ 0x117a0
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x117b0
unsigned int call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x117c0
unsigned int param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 FUN_00011130(8,div_zero_handler);
 iVar1 = FUN_00011110(jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = (unsigned int)(10 / (long long)param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x11820
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero_constprop_1();
 iVar2 = param_division_by_zero_constprop_0();
 FUN_00011130(8,0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x11860
int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 FUN_00011130(0xb,segv_handler);
 iVar1 = FUN_00011110(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x118b0
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_14;
 int local_10;
#ifdef __x86_64__
 local_10 = *(int *)(__builtin_frame_address(0) + 0x14);
#else
 local_10 = *(int *)(__builtin_frame_address(0) + 0x14);
#endif
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref(0);
 FUN_00011130(0xb,0);
#ifdef __x86_64__
 if (local_10 == *(int *)(__builtin_frame_address(0) + 0x14)) {
#else
 if (local_10 == *(int *)(__builtin_frame_address(0) + 0x14)) {
#endif
 return iVar1 + iVar2;
 }
 __stack_chk_fail_local();
}

// Function: param_buffer_overflow_stack @ 0x11920
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x11930
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 int iVar1;
 iVar1 = FUN_00011150(0x10);
 if (iVar1 == 0) {
 param_1 = 0xfffffffe;
 }
 else {
 FUN_00011120(iVar1);
 }
 return param_1;
}

// Function: call_buffer_overflow @ 0x11970
unsigned int call_buffer_overflow(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_00011150(0x10);
 if (iVar1 == 0) {
 uVar2 = 8;
 }
 else {
 FUN_00011120(iVar1);
 uVar2 = 0x1e;
 }
 return uVar2;
}

// Function: param_integer_overflow @ 0x119b0
int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 iVar1 = param_1 + param_2;
 if ((0 < (int)param_1) && (0 < (int)param_2)) {
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
 }
 if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x119f0
unsigned int call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x11a00
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x11a10
unsigned int call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x11a20
unsigned int param_implementation_defined(void)
{
 return 0x2b;
}

// Function: call_implementation_defined @ 0x11a30
unsigned int call_implementation_defined(void)
{
 return 0x2b;
}

// Function: test_obf_opt_edge @ 0x11a40
void test_obf_opt_edge(void)
{
 byte bVar1;
 byte *pbVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 unsigned int local_34;
 byte local_30 [31];
 char local_11;
#ifdef __x86_64__
 int local_10;
 local_10 = *(int *)(__builtin_frame_address(0) + 0x14);
#else
 int local_10;
 local_10 = *(int *)(__builtin_frame_address(0) + 0x14);
#endif
 FUN_00011160((void *)&DAT_00012008);
 FUN_00011190(1,(const char *)&DAT_0001212f,10);
 iVar4 = 5;
 iVar6 = 6;
 do {
 iVar5 = iVar6;
 iVar6 = iVar4 % iVar5;
 iVar4 = iVar5;
 } while (iVar6 != 0);
 uVar3 = 0x14;
 if (iVar5 != 1) {
 uVar3 = 0x23;
 }
 FUN_00011190(1,&DAT_0001214b,uVar3);
 FUN_00011190(1,&DAT_00012167,0xe1);
 FUN_00011180(local_30,&encrypted_0,0x1f);
 local_11 = 0;
 pbVar2 = local_30;
 bVar1 = local_30[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 iVar4 = FUN_00011170(local_30);
 FUN_00011190(1,&DAT_00012184,(char)local_30[0] + iVar4);
 FUN_00011190(1,&DAT_00012038,0x7a314);
 FUN_00011190(1,&DAT_00012064,0x13ba);
 uVar3 = call_vectorized_loop();
 FUN_00011190(1,&DAT_0001208c,uVar3);
 FUN_00011190(1,&DAT_000120b4,0x14);
 iVar4 = param_division_by_zero_constprop_1();
 iVar6 = param_division_by_zero_constprop_0();
 FUN_00011130(8,0);
 FUN_00011190(1,&DAT_000121a0,iVar4 + iVar6);
 local_34 = 0x2a;
 iVar4 = param_null_pointer_deref(&local_34);
 iVar6 = param_null_pointer_deref(0);
 FUN_00011130(0xb,0);
 FUN_00011190(1,&DAT_000121bc,iVar4 + iVar6);
 iVar4 = FUN_00011150(0x10);
 if (iVar4 == 0) {
 uVar3 = 8;
 }
 else {
 FUN_00011120(iVar4);
 uVar3 = 0x1e;
 }
 FUN_00011190(1,&DAT_000121d9,uVar3);
 FUN_00011190(1,&DAT_000120d4,2000000000);
 FUN_00011190(1,&DAT_000121f6,10);
 FUN_00011190(1,&DAT_00012108,0x2b);
 if (local_10 == *(int *)(__builtin_frame_address(0) + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: __stack_chk_fail_local @ 0x11ca0
void __stack_chk_fail_local(void)
{
 FUN_00011140();
 return;
}

// Function: __do_global_ctors_aux @ 0x11cc0
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x11d0c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

