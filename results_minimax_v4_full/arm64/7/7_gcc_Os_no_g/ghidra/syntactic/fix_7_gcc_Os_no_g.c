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
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned int uint;

/* Function pointer type */
typedef void (*code)(void);

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* Jump buffer tag for setjmp/longjmp */
typedef struct __jmp_buf_tag {
    int __jb[16];
    long __jb_fl;
    long __jb_es;
    long __jb_esp;
    long __jb_ebp;
    long __jb_edi;
    long __jb_esi;
    long __jb_ebx;
    long __jb_eip;
} __jmp_buf_tag[1];

/* Stack canary globals - defined with weak linkage to allow multiple definitions */
unsigned long __stack_chk_guard __attribute__((weak));

/* Global variables needed by functions */
__jmp_buf_tag *jmp_buffer;
__jmp_buf_tag *segv_buffer;
char completed_0 = 0;
void *__dso_handle __attribute__((weak)) = 0;
int div_zero_caught = 0;
int segv_caught = 0;
char encrypted_0[32] = {0};

/* String constants from data section */
const char *DAT_00101120 = "test_obf_opt_edge called\n";
const char *DAT_0010114d = "param_opaque_predicate(5) = %d\n";
const char *DAT_00101169 = "call_opaque_predicate() = %d\n";
const char *DAT_00101185 = "call_instruction_substitution() = %d\n";
const char *DAT_001011a2 = "param_string_encryption() returned %p\n";
const char *DAT_001011be = "call_tail_call_optimized(%p) = %llx\n";
const char *DAT_001011e8 = "call_non_tail_call() = %d\n";
const char *DAT_0010120d = "call_vectorized_loop() = %d\n";
const char *DAT_00101233 = "call_link_time_optimization() = %d\n";
const char *DAT_00101253 = "call_division_by_zero() = %d\n";
const char *DAT_0010126f = "call_null_pointer_deref() = %d\n";
const char *DAT_0010128c = "call_buffer_overflow() = %d\n";
const char *DAT_001012a9 = "call_integer_overflow() = %d\n";
const char *DAT_001012da = "call_undefined_behavior() = %d\n";
const char *DAT_001012f7 = "call_implementation_defined() = %d\n";

/* Function declarations */
void test_obf_opt_edge(void);
void __cxa_finalize(void *);
void deregister_tm_clones(void);
void __longjmp_chk(__jmp_buf_tag *);
char *strncpy(char *, const char *, size_t);
size_t strlen(const char *);
void __stack_chk_fail(void *);
void param_string_encryption(void);
__sighandler_t signal(int, __sighandler_t);
int _setjmp(__jmp_buf_tag *);
void *malloc(size_t);
void free(void *);
int puts(const char *);
int __printf_chk(int, const char *, ...);
int call_vectorized_loop(void);
undefined8 call_tail_call_optimized(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_gcc_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100860 @ 00100860 */

void FUN_00100860(void)

{
 (*(code *)(undefined1 *)0x0)();
 return;
}



/* Function: main @ 00100980 */

undefined8 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





void deregister_tm_clones(void)
{
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100a7c @ 00100a7c */

void FUN_00100a7c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 00100ad4 */

void div_zero_handler(int signum)

{
 (void)signum;
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer);
}



/* Function: segv_handler @ 00100af4 */

void segv_handler(int signum)

{
 (void)signum;
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer);
}



/* Function: param_fake_branch @ 00100b14 */

void param_fake_branch(void)

{
 return;
}



/* Function: call_fake_branch @ 00100b18 */

undefined8 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00100b20 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar1 = param_1 + 1;
 iVar2 = iVar1;
 iVar3 = param_1;
 while (iVar4 = iVar2, iVar4 != 0) {
 iVar2 = 0;
 if (iVar4 != 0) {
 iVar2 = iVar3 / iVar4;
 }
 iVar2 = iVar3 - iVar2 * iVar4;
 iVar3 = iVar4;
 }
 iVar2 = param_1 * 3 + 0x14;
 if (param_1 * param_1 + param_1 * 2 + 1 == iVar1 * iVar1 && iVar3 == 1) {
 iVar2 = param_1 * 2 + 10;
 }
 return iVar2;
}



/* Function: call_opaque_predicate @ 00100b78 */

int call_opaque_predicate(void)

{
 return param_opaque_predicate(5);
}



/* Function: param_instruction_substitution @ 00100b80 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00100ba4 */

undefined8 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00100bac */

byte * decrypt_string(char *param_1,char *param_2,size_t param_3,byte param_4)

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



/* Function: param_string_encryption @ 00100c04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_string_encryption(void)

{
 size_t sVar1;
 byte local_28 [32];
 long local_8;
 
 local_8 = __stack_chk_guard;
 decrypt_string((char *)encrypted_0,(char *)local_28,0x20,0x5a);
 sVar1 = strlen((char *)local_28);
 (void)sVar1;
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(__builtin_return_address(0));
 }
 return;
}



/* Function: param_tail_call_optimized @ 00100c80 */

int param_tail_call_optimized(int param_1,int param_2)

{
 for (; 0 < param_1; param_1 = param_1 + -1) {
 param_2 = param_2 + param_1;
 }
 return param_2;
}



/* Function: call_tail_call_optimized @ 00100ca0 */

undefined8 call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 00100cac */

int param_non_tail_call(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; 0 < param_1; param_1 = param_1 + -1) {
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}



/* Function: call_non_tail_call @ 00100ccc */

int call_non_tail_call(void)

{
 return param_non_tail_call(100);
}



/* Function: param_vectorized_loop @ 00100cd4 */

int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)

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



/* Function: call_vectorized_loop @ 00100d1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_vectorized_loop(void)

{
 undefined8 uVar1;
 undefined8 local_68;
 undefined8 uStack_60;
 undefined8 uStack_58;
 undefined8 uStack_50;
 undefined8 local_48;
 undefined8 uStack_40;
 undefined8 uStack_38;
 undefined8 uStack_30;
 undefined8 local_28;
 undefined8 uStack_20;
 undefined8 local_18;
 undefined8 uStack_10;
 long local_8;
 
 local_8 = __stack_chk_guard;
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
 uVar1 = param_vectorized_loop((long)&local_68,(long)&local_48,(long)&local_28,8);
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(__builtin_return_address(0));
 }
 return uVar1;
}



/* Function: param_link_time_optimization @ 00100d94 */

int param_link_time_optimization(int param_1)

{
 return (param_1 + 5) * 2;
}



/* Function: call_link_time_optimization @ 00100da0 */

undefined8 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 00100da8 */

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



/* Function: call_division_by_zero @ 00100df4 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00100e34 */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
 int iVar1;
 undefined4 uVar2;
 
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



/* Function: call_null_pointer_deref @ 00100e7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 undefined4 local_c;
 long local_8;
 
 local_8 = __stack_chk_guard;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(__builtin_return_address(0));
 }
 return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 00100ef8 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00100efc */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

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



/* Function: call_buffer_overflow @ 00100f34 */

int call_buffer_overflow(void)

{
 int iVar1;
 
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}



/* Function: param_integer_overflow @ 00100f50 */

int param_integer_overflow(uint param_1,uint param_2)

{
 int iVar1;
 
 iVar1 = param_1 + param_2;
 if ((int)param_1 < 1 || (int)param_2 < 1) {
 if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 }
 else if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00100f88 */

undefined8 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00100f94 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00100f9c */

undefined8 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00100fa4 */

undefined8 param_implementation_defined(void)

{
 return 0x30;
}



/* Function: call_implementation_defined @ 00100fac */

undefined8 call_implementation_defined(void)

{
 return 0x30;
}



/* Function: test_obf_opt_edge @ 00100fb4 */

void test_obf_opt_edge(void)

{
 undefined4 uVar1;
 undefined8 uVar2;
 
 puts(DAT_00101120);
 __printf_chk(1,DAT_0010114d,10);
 uVar1 = call_opaque_predicate();
 __printf_chk(1,DAT_00101169,uVar1);
 __printf_chk(1,DAT_00101185,0xe1);
 param_string_encryption();
 uVar2 = call_tail_call_optimized();
 __printf_chk(1,DAT_001011be,uVar2);
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




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 42 */
