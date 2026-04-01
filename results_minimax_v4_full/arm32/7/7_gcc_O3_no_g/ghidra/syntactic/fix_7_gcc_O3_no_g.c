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

/* Ghidra-specific type definitions */
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned char undefined1;
typedef int undefined4;
typedef void (*code)(void);

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* _setjmp/_longjmp types */
typedef struct __jmp_buf_tag {
    int __fl;
    int __ss;
    unsigned long __pc;
    unsigned long __sp;
    unsigned long __lr;
    unsigned long __fp;
} __jmp_buf_tag[1];

typedef __jmp_buf_tag jmp_buf[1];

/* Global variables */
int div_zero_caught;
int segv_caught;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* External encrypted string - placeholder for encrypted string data */
char encrypted_0[31] = {0};

/* Forward declaration for __aeabi_idiv0 */
void __aeabi_idiv0(void);

/* External software fault injection function */
void *software_udf(int param1, int param2)
{
    /* Software fault injection - returns pointer to __aeabi_idiv0 on fault */
    (void)param1;
    (void)param2;
    return (void *)__aeabi_idiv0;
}

/* External string constants */
/* String constants (format strings for printf) */
char DAT_00011188[] = "Testing Obfuscation Techniques:\n";
char DAT_000111b8[] = "opaque_predicate: %d\n";
char DAT_000111d4[] = "call_opaque_predicate: %d\n";
char DAT_000111f0[] = "instruction_substitution: %d\n";
char DAT_00011210[] = "string_encryption: %zu\n";
char DAT_0001122c[] = "tail_call_optimized: %d\n";
char DAT_00011258[] = "non_tail_call: %d\n";
char DAT_00011280[] = "vectorized_loop: %d\n";
char DAT_000112a8[] = "link_time_optimization: %d\n";
char DAT_000112c8[] = "division_by_zero: %d\n";
char DAT_000112e4[] = "null_pointer_deref: %d\n";
char DAT_00011304[] = "buffer_overflow: %d\n";
char DAT_00011324[] = "integer_overflow: %u\n";
char DAT_00011358[] = "undefined_behavior: %d\n";
char DAT_00011378[] = "implementation_defined: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_gcc_O3_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: main @ 000105ac */

undefined4 main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: div_zero_handler @ 000106b4 */

void div_zero_handler(void)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(jmp_buffer);
}



/* Function: segv_handler @ 000106cc */

void segv_handler(void)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 __longjmp_chk(segv_buffer);
}



/* Function: param_division_by_zero.constprop.0 @ 000106e8 */

undefined4 param_division_by_zero_constprop_0(void)

{
 code *pcVar1;
 int iVar2;
 
 signal(8,div_zero_handler);
 iVar2 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar2 == 0) {
 /* WARNING: Does not return */
 pcVar1 = (code *)software_udf(0,0x10708);
 (*pcVar1)();
 }
 return 0xffffffff;
}



/* Function: param_division_by_zero.constprop.1 @ 0001071c */

undefined4 param_division_by_zero_constprop_1(void)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = 2;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_fake_branch @ 0001074c */

void param_fake_branch(void)

{
 return;
}



/* Function: call_fake_branch @ 00010750 */

undefined4 call_fake_branch(void)

{
 return 10;
}



/* Function: param_opaque_predicate @ 00010758 */

int param_opaque_predicate(int param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int extraout_r1;
 
 iVar3 = param_1 + 1;
 iVar2 = param_1;
 iVar1 = iVar3;
 if (iVar3 != 0) {
 do {
 iVar4 = iVar1;
 __aeabi_idivmod(iVar2);
 iVar2 = iVar4;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 if (iVar4 == 1 && param_1 * param_1 + param_1 * 2 + 1 == iVar3 * iVar3) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 000107c8 */

undefined4 call_opaque_predicate(void)

{
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 int iVar4;
 int extraout_r1;
 
 iVar2 = 5;
 iVar1 = 6;
 do {
 iVar4 = iVar1;
 __aeabi_idivmod(iVar2);
 iVar2 = iVar4;
 iVar1 = extraout_r1;
 } while (extraout_r1 != 0);
 if (iVar4 == 1) {
 uVar3 = 0x14;
 }
 else {
 uVar3 = 0x23;
 }
 return uVar3;
}



/* Function: param_instruction_substitution @ 000107f8 */

int param_instruction_substitution(uint param_1)

{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00010818 */

undefined4 call_instruction_substitution(void)

{
 return 0xe1;
}



/* Function: decrypt_string @ 00010820 */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
 byte bVar1;
 byte *pbVar2;
 
 strncpy((char *)param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 pbVar2 = param_2;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ param_4;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 return param_2;
}



/* Function: param_string_encryption @ 00010874 */

void param_string_encryption(void)

{
 size_t sVar1;
 byte *pbVar2;
 byte bVar3;
 uint uVar4;
 byte local_2c [31];
 undefined1 local_d;
 int local_c;
 
 local_c = 0;
 strncpy((char *)local_2c,&encrypted_0,0x1f);
 local_d = 0;
 uVar4 = 0;
 if (local_2c[0] != 0) {
 pbVar2 = local_2c;
 bVar3 = local_2c[0];
 do {
 *pbVar2 = bVar3 ^ 0x5a;
 pbVar2 = pbVar2 + 1;
 bVar3 = *pbVar2;
 } while (bVar3 != 0);
 uVar4 = (uint)local_2c[0];
 }
 sVar1 = strlen((char *)local_2c);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar4 + sVar1);
}



/* Function: call_string_encryption @ 00010904 */

void call_string_encryption(void)

{
 size_t sVar1;
 byte *pbVar2;
 byte bVar3;
 uint uVar4;
 byte local_2c [31];
 undefined1 local_d;
 int local_c;
 
 local_c = 0;
 strncpy((char *)local_2c,&encrypted_0,0x1f);
 local_d = 0;
 uVar4 = 0;
 if (local_2c[0] != 0) {
 pbVar2 = local_2c;
 bVar3 = local_2c[0];
 do {
 *pbVar2 = bVar3 ^ 0x5a;
 pbVar2 = pbVar2 + 1;
 bVar3 = *pbVar2;
 } while (bVar3 != 0);
 uVar4 = (uint)local_2c[0];
 }
 sVar1 = strlen((char *)local_2c);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar4 + sVar1);
}



/* Function: param_tail_call_optimized @ 00010994 */

int param_tail_call_optimized(int param_1,int param_2)

{
 int iVar1;
 
 if (param_1 < 1) {
 return param_2;
 }
 do {
 iVar1 = param_1 + -1;
 param_2 = param_2 + param_1;
 param_1 = iVar1;
 } while (iVar1 != 0);
 return param_2;
}



/* Function: call_tail_call_optimized @ 000109b4 */

undefined4 call_tail_call_optimized(void)

{
 return 0x7a314;
}



/* Function: param_non_tail_call @ 000109c0 */

int param_non_tail_call(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 if (param_1 < 1) {
 return 0;
 }
 do {
 iVar2 = param_1 + -1;
 iVar1 = iVar1 + param_1;
 param_1 = iVar2;
 } while (iVar2 != 0);
 return iVar1;
}



/* Function: call_non_tail_call @ 000109e0 */

undefined4 call_non_tail_call(void)

{
 return 0x13ba;
}



/* Function: param_vectorized_loop @ 000109ec */

int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)

{
 int *piVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 
 if (0 < param_4) {
 piVar5 = (int *)(param_3 + -4);
 piVar1 = (int *)(param_1 + -4);
 piVar3 = (int *)(param_2 + -4);
 piVar6 = piVar1 + param_4;
 piVar4 = piVar5;
 do {
 piVar1 = piVar1 + 1;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 *piVar4 = *piVar1 + *piVar3;
 } while (piVar1 != piVar6);
 iVar2 = 0;
 piVar4 = piVar5 + param_4;
 do {
 piVar5 = piVar5 + 1;
 iVar2 = iVar2 + *piVar5;
 } while (piVar4 != piVar5);
 return iVar2;
 }
 return 0;
}



/* Function: call_vectorized_loop @ 00010a50 */

undefined4 call_vectorized_loop(void)

{
 return 0x48;
}



/* Function: param_link_time_optimization @ 00010a58 */

int param_link_time_optimization(int param_1)

{
 return (param_1 + 5) * 2;
}



/* Function: call_link_time_optimization @ 00010a64 */

undefined4 call_link_time_optimization(void)

{
 return 0x14;
}



/* Function: param_division_by_zero @ 00010a6c */

undefined4 param_division_by_zero(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = __aeabi_idiv(10,param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_division_by_zero @ 00010abc */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_division_by_zero_constprop_1();
 iVar2 = param_division_by_zero_constprop_0();
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00010ae4 */

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



/* Function: call_null_pointer_deref @ 00010b28 */

void call_null_pointer_deref(undefined4 param_1,undefined4 param_2)

{
 int iVar1;
 int iVar2;
 undefined4 local_18;
 int local_14;
 
 local_14 = 0;
 local_18 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_18);
 iVar2 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 if (local_14 == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1 + iVar2);
}



/* Function: param_buffer_overflow_stack @ 00010b98 */

void param_buffer_overflow_stack(void)

{
 return;
}



/* Function: param_buffer_overflow_heap @ 00010b9c */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
 void *__ptr;
 
 __ptr = malloc(0x10);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return param_1;
 }
 return 0xfffffffe;
}



/* Function: call_buffer_overflow @ 00010bc8 */

undefined4 call_buffer_overflow(void)

{
 void *__ptr;
 
 __ptr = malloc(0x10);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return 0x1e;
 }
 return 8;
}



/* Function: param_integer_overflow @ 00010bf0 */

uint param_integer_overflow(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 
 uVar1 = param_1;
 if (0 < (int)param_1) {
 uVar1 = param_2;
 }
 uVar2 = param_1 + param_2;
 if ((int)uVar1 < 1) {
 if (((uint)(0 < (int)uVar2) & (param_2 & param_1) >> 0x1f) != 0) {
 uVar2 = 0xfffffffe;
 }
 return uVar2;
 }
 return uVar2 | (int)uVar2 >> 0x1f;
}



/* Function: call_integer_overflow @ 00010c28 */

undefined4 call_integer_overflow(void)

{
 return 2000000000;
}



/* Function: param_undefined_behavior @ 00010c34 */

int param_undefined_behavior(int param_1)

{
 return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00010c3c */

undefined4 call_undefined_behavior(void)

{
 return 10;
}



/* Function: param_implementation_defined @ 00010c44 */

undefined4 param_implementation_defined(void)

{
 return 0x2c;
}



/* Function: call_implementation_defined @ 00010c4c */

undefined4 call_implementation_defined(void)

{
 return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010c54 */

void test_obf_opt_edge(void)

{
 size_t sVar1;
 int iVar2;
 int iVar3;
 void *__ptr;
 int extraout_r1;
 undefined4 uVar4;
 byte *pbVar5;
 byte bVar6;
 uint uVar7;
 int iVar8;
 undefined4 local_38;
 byte local_34 [31];
 undefined1 local_15;
 int local_14;
 
 local_14 = 0;
 puts(&DAT_00011188);
 __printf_chk(1,&DAT_000111b8,10);
 iVar2 = 5;
 iVar3 = 6;
 do {
 iVar8 = iVar3;
 __aeabi_idivmod(iVar2,iVar8);
 iVar2 = iVar8;
 iVar3 = extraout_r1;
 } while (extraout_r1 != 0);
 if (iVar8 == 1) {
 uVar4 = 0x14;
 }
 else {
 uVar4 = 0x23;
 }
 __printf_chk(1,&DAT_000111d4,uVar4);
 __printf_chk(1,&DAT_000111f0,0xe1);
 strncpy((char *)local_34,&encrypted_0,0x1f);
 local_15 = 0;
 uVar7 = 0;
 if (local_34[0] != 0) {
 pbVar5 = local_34;
 bVar6 = local_34[0];
 do {
 *pbVar5 = bVar6 ^ 0x5a;
 pbVar5 = pbVar5 + 1;
 bVar6 = *pbVar5;
 } while (bVar6 != 0);
 uVar7 = (uint)local_34[0];
 }
 sVar1 = strlen((char *)local_34);
 __printf_chk(1,&DAT_00011210,uVar7 + sVar1);
 __printf_chk(1,&DAT_0001122c,0x7a314);
 __printf_chk(1,&DAT_00011258,0x13ba);
 uVar4 = call_vectorized_loop();
 __printf_chk(1,&DAT_00011280,uVar4);
 __printf_chk(1,&DAT_000112a8,0x14);
 iVar2 = param_division_by_zero_constprop_1();
 iVar3 = param_division_by_zero_constprop_0();
 signal(8,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_000112c8,iVar2 + iVar3);
 local_38 = 0x2a;
 iVar2 = param_null_pointer_deref(&local_38);
 iVar3 = param_null_pointer_deref(0);
 signal(0xb,(__sighandler_t)0x0);
 __printf_chk(1,&DAT_000112e4,iVar2 + iVar3);
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 uVar4 = 8;
 }
 else {
 free(__ptr);
 uVar4 = 0x1e;
 }
 __printf_chk(1,&DAT_00011304,uVar4);
 __printf_chk(1,&DAT_00011324,2000000000);
 __printf_chk(1,&DAT_00011358,10);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,&DAT_00011378,0x2c);
 return;
}




/* CRT stub function __aeabi_idiv removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* Function: __aeabi_idiv0 @ 000110dc */

void __aeabi_idiv0(void)

{
 raise(8);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 47 */
