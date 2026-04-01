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
typedef int bool;
#define true 1
#define false 0

/* Additional type definitions for setjmp/longjmp and signal */
typedef unsigned long __jmp_buf_tag[6];
typedef void (*__sighandler_t)(int);

/* Data definitions - string constants */
unsigned char DAT_0001300d[] = "Obfuscation test starting...\n";
unsigned char DAT_0001303b[] = "Fake branch result: %d\n";
unsigned char DAT_00013057[] = "Opaque predicate passed\n";
unsigned char DAT_00013073[] = "Instruction substitution result\n";
unsigned char DAT_00013090[] = "String encryption result: %d\n";
unsigned char DAT_000130ac[] = "Tail call optimized\n";
unsigned char DAT_000130d6[] = "Non-tail call completed\n";
unsigned char DAT_000130fb[] = "Vectorized loop executed\n";
unsigned char DAT_00013121[] = "Link time optimization applied\n";
unsigned char DAT_00013141[] = "Division by zero result: %d\n";
unsigned char DAT_0001315d[] = "Null pointer deref result: %u\n";
unsigned char DAT_0001317a[] = "Buffer overflow result: %d\n";
unsigned char DAT_00013197[] = "Integer overflow result: %d\n";
unsigned char DAT_000131c8[] = "Undefined behavior result: %u\n";
unsigned char DAT_000131e5[] = "Implementation defined result: %u\n";
unsigned char DAT_0001320c[32] = {0};
unsigned char DAT_0001322c[32] = {0};

/* Encrypted string data - used by string encryption decryption routine */
char param_string_encryption_encrypted[32] = {
 0x1f, 0x28, 0x2d, 0x3a, 0x0e, 0x04, 0x0f, 0x0c,
 0x1a, 0x08, 0x3b, 0x1c, 0x00, 0x3e, 0x06, 0x1b,
 0x32, 0x28, 0x2a, 0x3c, 0x3f, 0x26, 0x1e, 0x07,
 0x2c, 0x2a, 0x0c, 0x28, 0x1e, 0x1f, 0x06, 0x3c
};

/* Global Offset Table (PIC) */
extern void *_GLOBAL_OFFSET_TABLE_[];

/* Encrypted string data */
extern char param_string_encryption_encrypted[32];

/* Global variables for exception handling */
int div_zero_caught;
int segv_caught;
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;

/* External runtime functions */
extern void __gmon_start__(void);
extern void frame_dummy(void);

/* Forward declarations */
unsigned int main(void);
void __x86_get_pc_thunk_di(void);
void __i686_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_dx(void);
void __do_global_ctors_aux(void);



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
extern void __libc_start_main(int (*main)(void), void *stack, void *fini, void *rtld_fini, void *stack_end, unsigned long auxvec);

// Function: <EXTERNAL>::printf @ 0x11050
extern int printf(char *__format, ...);

// Function: <EXTERNAL>::longjmp @ 0x11060
extern void longjmp(__jmp_buf_tag *__env,int __val);

// Function: <EXTERNAL>::_setjmp @ 0x11070
extern int _setjmp(__jmp_buf_tag *__env);

// Function: <EXTERNAL>::free @ 0x11080
extern void free(void *__ptr);

// Function: <EXTERNAL>::memcpy @ 0x11090
extern void * memcpy(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::signal @ 0x110a0
extern __sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::malloc @ 0x110b0
extern void * malloc(size_t __size);

// Function: <EXTERNAL>::strlen @ 0x110c0
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::memset @ 0x110d0
extern void * memset(void *__s,int __c,size_t __n);

// Function: <EXTERNAL>::strncpy @ 0x110e0
extern char * strncpy(char *__dest,char *__src,size_t __n);

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(int param_1)
{
 void (*func_ptr)(void);
 func_ptr = *(void (**)(void))(param_1 + -0x10);
 if (func_ptr != 0) {
 func_ptr();
 }
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



// Function: deregister_tm_clones @ 0x11270
void deregister_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x111d0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x3e6b) == '\0') {
 if (*(int *)(unaff_EDI + 0x3e13) != 0) {
 FUN_000110f0(*(unsigned int *)(unaff_EDI + 0x3e5f));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x3e6f);
 while (uVar1 < ((unaff_EDI + 0x3d3b) - (unaff_EDI + 0x3d37) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x3e6f) = uVar1 + 1;
 (*(void (*)(void))(unaff_EDI + 0x3d37 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x3e6f);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x3e6b) = 1;
 }
 __do_global_ctors_aux();
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
unsigned int call_string_encryption(void)
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
 param_1 = lto_target_func(param_1);
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
void div_zero_handler(void)
{
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
 signal(8,(__sighandler_t)0);
 return iVar1 + iVar2;
}

// Function: segv_handler @ 0x119b0
void segv_handler(void)
{
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
unsigned int call_implementation_defined(void)
{
 return param_implementation_defined();
}

// Function: test_obf_opt_edge @ 0x11e20
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 printf(&DAT_0001300d);
 uVar1 = call_fake_branch();
 printf(&DAT_0001303b,uVar1);
 call_opaque_predicate();
 printf(&DAT_00013057);
 call_instruction_substitution();
 printf(&DAT_00013073);
 uVar1 = call_string_encryption();
 printf(&DAT_00013090,uVar1);
 call_tail_call_optimized();
 printf(&DAT_000130ac);
 call_non_tail_call();
 printf(&DAT_000130d6);
 call_vectorized_loop();
 printf(&DAT_000130fb);
 call_link_time_optimization();
 printf(&DAT_00013121);
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
unsigned int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x12010
void __do_global_ctors_aux(void)
{
 return;
}



