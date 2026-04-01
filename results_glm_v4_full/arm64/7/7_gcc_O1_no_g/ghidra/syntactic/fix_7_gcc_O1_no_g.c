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

/* Additional type definitions for compatibility */
typedef void (*__sighandler_t)(int);

/* Stack canary declarations */
extern unsigned long __stack_chk_guard;
extern unsigned long ___stack_chk_guard;

/* Function prototypes for functions used before definition */
uint32_t param_null_pointer_deref(uint32_t *param_1);
uint64_t param_buffer_overflow_heap(uint64_t param_1);
void param_string_encryption(void);

/* Global variables */
char completed_0 = 0;
extern void *__dso_handle;
unsigned long ___stack_chk_guard = 0;

/* jmp_buf type definition */
typedef struct {
    unsigned long __jb[64];
} __jmp_buf_tag[1];

/* Jump buffer and flag definitions */
__jmp_buf_tag jmp_buffer;
__jmp_buf_tag segv_buffer;
int div_zero_caught = 0;
int segv_caught = 0;

/* Data symbol definitions */
static char encrypted_0[] = "Test encrypted string";
static const char DAT_00101180[] = "Test: Opaque Predicate\n";
static const char DAT_001011b0[] = "  param_opaque_predicate(5) = %d\n";
static const char DAT_001011d0[] = "  instruction_substitution = %d\n";
static const char DAT_001011f0[] = "  vectorized_loop = %d\n";
static const char DAT_00101210[] = "  string_encryption = %d\n";
static const char DAT_00101230[] = "  tail_call_optimized = %d\n";
static const char DAT_00101260[] = "  non_tail_call = %d\n";
static const char DAT_00101288[] = "  vectorized_loop_result = %d\n";
static const char DAT_001012b0[] = "  link_time_optimization = %d\n";
static const char DAT_001012d0[] = "  division_by_zero = %d\n";
static const char DAT_001012f0[] = "  null_pointer_deref = %d\n";
static const char DAT_00101310[] = "  buffer_overflow = %d\n";
static const char DAT_00101330[] = "  integer_overflow = %d\n";
static const char DAT_00101368[] = "  undefined_behavior = %d\n";
static const char DAT_00101388[] = "  implementation_defined = %d\n";

/* Standard library function declarations */
void __cxa_finalize(void *dso_handle);
int signal(int sig, __sighandler_t handler);
int _setjmp(void *env);
void __longjmp_chk(void *env);
void *malloc(size_t size);
void free(void *ptr);
void puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
void __stack_chk_fail(void);
void deregister_tm_clones(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/7/7_gcc_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100860 @ 00100860 */

void FUN_00100860(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* Function: deregister_tm_clones @ 00100a20 */

void deregister_tm_clones(void)

{
 return;
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100a3c @ 00100a3c */

void FUN_00100a3c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 00100a94 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk((void *)jmp_buffer);
}



/* Function: segv_handler @ 00100ab4 */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk((void *)segv_buffer);
}



/* Function: param_fake_branch @ 00100ad4 */

void param_fake_branch(void)

{
 return;
}



/* Function: call_fake_branch @ 00100ad8 */

uint64_t call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00100ae0 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 
 iVar1 = param_1 + 1;
 iVar2 = iVar1;
 iVar3 = param_1;
 if (iVar1 != 0) {
 do {
 iVar4 = iVar2;
 iVar2 = 0;
 if (iVar4 != 0) {
 iVar2 = iVar3 / iVar4;
 }
 iVar2 = iVar3 - iVar2 * iVar4;
 iVar3 = iVar4;
 } while (iVar2 != 0);
 if (param_1 * 2 + param_1 * param_1 + 1 == iVar1 * iVar1 && iVar4 == 1) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 00100b38 */

void call_opaque_predicate(void)

{
 param_opaque_predicate(5);
 return;
}



/* Function: param_instruction_substitution @ 00100b50 */

int param_instruction_substitution(unsigned int param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00100b74 */

uint64_t call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00100b7c */

uint8_t * decrypt_string(char *param_1,uint8_t *param_2,size_t param_3,uint8_t param_4)

{
 uint8_t bVar1;
 uint8_t *pbVar2;
 
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



/* Function: param_string_encryption @ 00100bdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_string_encryption(void)

{
 size_t sVar1;
 uint8_t local_28 [32];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 decrypt_string(encrypted_0,local_28,0x20,0x5a);
 sVar1 = strlen((char *)local_28);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_string_encryption @ 00100c54 */

void call_string_encryption(void)

{
 param_string_encryption();
 return;
}



/* Function: param_tail_call_optimized @ 00100c68 */

unsigned long param_tail_call_optimized(int param_1,unsigned int param_2)

{
 unsigned long uVar1;
 
 if (0 < param_1) {
 uVar1 = param_tail_call_optimized(param_1 + -1,param_1 + param_2);
 return uVar1;
 }
 return (unsigned long)param_2;
}



/* Function: call_tail_call_optimized @ 00100c94 */

uint64_t call_tail_call_optimized(void)

{
 return (uint64_t)param_tail_call_optimized(1000,0);
}



/* Function: param_non_tail_call @ 00100cb0 */

int param_non_tail_call(int param_1)

{
 int iVar1;
 
 if (0 < param_1) {
 iVar1 = param_non_tail_call(param_1 + -1);
 return iVar1 + param_1;
 }
 return 0;
}



/* Function: call_non_tail_call @ 00100ce8 */

void call_non_tail_call(void)

{
 param_non_tail_call(100);
 return;
}



/* Function: param_vectorized_loop @ 00100d00 */

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



/* Function: call_vectorized_loop @ 00100d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_vectorized_loop(void)

{
 uint64_t uVar1;
 uint64_t local_68;
 uint64_t uStack_60;
 uint64_t uStack_58;
 uint64_t uStack_50;
 uint64_t local_48;
 uint64_t uStack_40;
 uint64_t uStack_38;
 uint64_t uStack_30;
 uint64_t local_28;
 uint64_t uStack_20;
 uint64_t local_18;
 uint64_t uStack_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
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
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_link_time_optimization @ 00100dc8 */

int param_link_time_optimization(int param_1)

{
 return (param_1 + 5) * 2;
}



/* Function: call_link_time_optimization @ 00100dd4 */

uint64_t call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 00100ddc */

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



/* Function: call_division_by_zero @ 00100e28 */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(void (*)(int))0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00100e68 */

uint32_t param_null_pointer_deref(uint32_t *param_1)

{
 int iVar1;
 uint32_t uVar2;
 
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



/* Function: call_null_pointer_deref @ 00100eb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 uint32_t uVar3;
 uint32_t local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(void (*)(int))0);
 uVar3 = iVar1 + iVar2;
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_buffer_overflow_stack @ 00100f2c */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00100f30 */

uint64_t param_buffer_overflow_heap(uint64_t param_1)

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



/* Function: call_buffer_overflow @ 00100f74 */

void call_buffer_overflow(void)

{
 param_buffer_overflow_heap(0);
}



/* Function: param_integer_overflow @ 00100f90 */

int param_integer_overflow(unsigned int param_1,unsigned int param_2)

{
 int iVar1;
 
 iVar1 = param_1 + param_2;
 if ((((int)param_1 < 1 || param_2 == 0) || 0 < (int)param_1 && (int)param_2 < 0) || -1 < iVar1) {
 if ((int)(param_1 & param_2) < 0 && 0 < iVar1) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_integer_overflow @ 00100fc4 */

uint64_t call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00100fd0 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00100fd8 */

uint64_t call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00100fe0 */

uint64_t param_implementation_defined(void)

{
 return 0x30;
}



/* Function: call_implementation_defined @ 00100fe8 */

uint64_t call_implementation_defined(void)

{
 return 0x30;
}



/* Function: test_obf_opt_edge @ 00100ff0 */

void test_obf_opt_edge(void)

{
 uint32_t uVar1;
 
 puts((const char *)&DAT_00101180);
 __printf_chk(1,(const char *)&DAT_001011b0,10);
 call_opaque_predicate();
 __printf_chk(1,(const char *)&DAT_001011d0,20);
 __printf_chk(1,(const char *)&DAT_001011f0,0xe1);
 param_string_encryption();
 __printf_chk(1,(const char *)&DAT_00101210,0);
 call_tail_call_optimized();
 __printf_chk(1,(const char *)&DAT_00101230,0);
 call_non_tail_call();
 __printf_chk(1,(const char *)&DAT_00101260,0);
 call_vectorized_loop();
 __printf_chk(1,(const char *)&DAT_00101288,0);
__printf_chk(1,(const char *)&DAT_001012b0,0x14);
uVar1 = call_division_by_zero();
__printf_chk(1,(const char *)&DAT_001012d0,uVar1);
 uVar1 = call_null_pointer_deref();
 __printf_chk(1,(const char *)&DAT_001012f0,uVar1);
 call_buffer_overflow();
 __printf_chk(1,(const char *)&DAT_00101310,10);
 __printf_chk(1,(const char *)&DAT_00101330,2000000000);
 __printf_chk(1,(const char *)&DAT_00101368,10);
 __printf_chk(1,(const char *)&DAT_00101388,0x30);
 return;
}



/* Function: main @ 00101148 */

uint64_t main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 43 */
