/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
int extraout_r1;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Global variables needed by the code */
int div_zero_caught;
int segv_caught;
typedef int jmp_buf[16];
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
typedef long int __jmp_buf_tag[16];
typedef void (*__sighandler_t)(int);

/* String constants from binary */
const char *DAT_000116a5 = "Starting tests...\n";
const char *DAT_000116d3 = "Fake branch: %d\n";
const char *DAT_000116ef = "Opaque predicate: %d\n";
const char *DAT_0001170b = "Instruction substitution: %d\n";
const char *DAT_00011728 = "String encryption: %d\n";
const char *DAT_00011744 = "Tail call optimized: %d\n";
const char *DAT_0001176e = "Non-tail call: %d\n";
const char *DAT_00011793 = "Vectorized loop: %d\n";
const char *DAT_000117b9 = "Link time optimization: %d\n";
const char *DAT_000117d9 = "Division by zero: %d\n";
const char *DAT_000117f5 = "Null pointer deref: %d\n";
const char *DAT_00011812 = "Buffer overflow: %d\n";
const char *DAT_0001182f = "Integer overflow: %d\n";
const char *DAT_00011860 = "Undefined behavior: %d\n";
const char *DAT_0001187d = "Implementation defined: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/7/7_clang_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_fake_branch @ 000106d0 */

/* WARNING: Removing unreachable block (ram,0x0001072c) */

int param_fake_branch(int x)

{
 int local_10;
 
 /* Unresolved local var: int result@[DW_OP_breg13(sp): +8]
 Unresolved local var: char * str@[DW_OP_breg13(sp): +4] */
 local_10 = x;
 if (0x7fffffff < (uint)(x * x)) {
 local_10 = x * 2 + -0x21524111;
 }
 strlen("test");
 return local_10;
}



/* Function: call_fake_branch @ 00010758 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
 int iVar1;
 
 iVar1 = param_fake_branch(10);
 return iVar1;
}



/* Function: param_opaque_predicate @ 00010770 */

int param_opaque_predicate(int x)

{
 int local_1c;
 int local_18;
 int local_c;
 int div_result;
 
 /* Unresolved local var: int p1@[???]
 Unresolved local var: int a@[DW_OP_breg13(sp): +16]
 Unresolved local var: int b@[DW_OP_breg13(sp): +12]
 Unresolved local var: int p2@[DW_OP_breg13(sp): +4]
 Unresolved local var: int p3@[DW_OP_breg13(sp): 0] */
 local_1c = x + 1;
 local_18 = x;
 while (local_1c != 0) {
 /* Unresolved local var: int temp@[DW_OP_breg13(sp): +8] */
 __aeabi_idivmod(local_18,local_1c);
 local_18 = local_1c;
 local_1c = extraout_r1;
 }
 if (((x * x + x * 2) - (x + 1) * (x + 1) == -1) && (local_18 == 1)) {
 local_c = x * 2 + 10;
 }
 else {
 local_c = x * 3 + 0x14;
 }
 return local_c;
}



/* Function: call_opaque_predicate @ 00010878 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
 int iVar1;
 
 iVar1 = param_opaque_predicate(5);
 return iVar1;
}



/* Function: param_instruction_substitution @ 00010890 */

int param_instruction_substitution(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg13(sp): +16]
 Unresolved local var: uint ux@[DW_OP_breg13(sp): +12]
 Unresolved local var: int div2@[DW_OP_breg13(sp): +8]
 Unresolved local var: int mod16@[DW_OP_breg13(sp): +4]
 Unresolved local var: int mul15@[DW_OP_breg13(sp): 0] */
 return x * 6 + ((uint)x >> 1) + (x & 0xfU) + x * 0xf;
}



/* Function: call_instruction_substitution @ 00010900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
 int iVar1;
 
 iVar1 = param_instruction_substitution(10);
 return iVar1;
}



/* Function: decrypt_string @ 00010918 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
 byte *local_1c;
 
 /* Unresolved local var: char * p@[DW_OP_breg13(sp): +4] */
 strncpy(buffer,encrypted,len);
 buffer[len - 1] = '\0';
 for (local_1c = (byte *)buffer; *local_1c != 0; local_1c = local_1c + 1) {
 *local_1c = *local_1c ^ key;
 }
 return buffer;
}



/* Function: param_string_encryption @ 000109ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
 size_t sVar1;
 byte local_28 [32];
 
 /* Unresolved local var: char[32] decrypted@[DW_OP_breg13(sp): +8] */
 decrypt_string("UVWXYZ34567890ABCDEFGHIJKLMNOPQRST[\]^_`abcd",(char *)local_28,0x20,'Z');
 sVar1 = strlen((char *)local_28);
 return sVar1 + local_28[0];
}



/* Function: call_string_encryption @ 000109f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
 int iVar1;
 
 iVar1 = param_string_encryption();
 return iVar1;
}



/* Function: param_tail_call_optimized @ 00010a08 */

int param_tail_call_optimized(int n,int acc)

{
 int local_c;
 
 local_c = acc;
 if (0 < n) {
 local_c = param_tail_call_optimized(n + -1,acc + n);
 }
 return local_c;
}



/* Function: call_tail_call_optimized @ 00010a64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
 int iVar1;
 
 iVar1 = param_tail_call_optimized(1000,0);
 return iVar1;
}



/* Function: param_non_tail_call @ 00010a80 */

int param_non_tail_call(int n)

{
 int local_c;
 
 if (n < 1) {
 local_c = 0;
 }
 else {
 local_c = param_non_tail_call(n + -1);
 local_c = n + local_c;
 }
 return local_c;
}



/* Function: call_non_tail_call @ 00010ae0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
 int iVar1;
 
 iVar1 = param_non_tail_call(100);
 return iVar1;
}



/* Function: param_vectorized_loop @ 00010af8 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
 int local_1c;
 int local_18;
 int local_14;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +8] */
 for (local_14 = 0; local_14 < n; local_14 = local_14 + 1) {
 c[local_14] = a[local_14] + b[local_14];
 }
 local_18 = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_1c = 0; local_1c < n; local_1c = local_1c + 1) {
 local_18 = local_18 + c[local_1c];
 }
 return local_18;
}



/* Function: call_vectorized_loop @ 00010bbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
 int iVar1;
 int local_70 [9];
 int local_c;
 int uStack_4c;
 int uStack_48;
 int uStack_44;
 int local_40;
 int uStack_3c;
 int uStack_38;
 int uStack_34;
 int local_30;
 int uStack_2c;
 int uStack_28;
 int uStack_24;
 int local_20;
 int uStack_1c;
 int uStack_18;
 int uStack_14;
 
 /* Unresolved local var: int[8] a@[???]
 Unresolved local var: int[8] b@[DW_OP_breg13(sp): +32]
 Unresolved local var: int[8] c@[DW_OP_breg13(sp): 0] */
 local_30 = 1;
 uStack_2c = 2;
 uStack_28 = 3;
 uStack_24 = 4;
 local_20 = 5;
 uStack_1c = 6;
 uStack_18 = 7;
 uStack_14 = 8;
 local_70[8] = 8;
 uStack_4c = 7;
 uStack_48 = 6;
 uStack_44 = 5;
 local_40 = 4;
 uStack_3c = 3;
 uStack_38 = 2;
 uStack_34 = 1;
 local_70[7] = 0;
 local_70[6] = 0;
 local_70[5] = 0;
 local_70[4] = 0;
 local_70[3] = 0;
 local_70[2] = 0;
 local_70[1] = 0;
 local_70[0] = 0;
 iVar1 = param_vectorized_loop(&local_30,local_70 + 8,local_70,8);
 return iVar1;
}



/* Function: param_link_time_optimization @ 00010c4c */

int param_link_time_optimization(int x)

{
 int iVar1;
 
 iVar1 = lto_target_func(x);
 return iVar1;
}



/* Function: lto_target_func @ 00010c70 */

int lto_target_func(int x)

{
 return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00010c8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
 int iVar1;
 
 iVar1 = param_link_time_optimization(5);
 return iVar1;
}



/* Function: div_zero_handler @ 00010ca4 */

void div_zero_handler(int sig)

{
 div_zero_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00010cd8 */

int param_division_by_zero(int x)

{
 int iVar1;
 int local_c;
 
 signal(8,div_zero_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
 if (iVar1 == 0) {
 /* Unresolved local var: int y@[DW_OP_breg13(sp): +4] */
 local_c = __divsi3(10,x);
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_division_by_zero @ 00010d50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[DW_OP_breg13(sp): +8] */
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 signal(8,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: segv_handler @ 00010d9c */

void segv_handler(int sig)

{
 segv_caught = 1;
 /* WARNING: Subroutine does not return */
 longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010dd0 */

int param_null_pointer_deref(int *p)

{
 int iVar1;
 int local_c;
 
 signal(0xb,segv_handler);
 iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
 if (iVar1 == 0) {
 /* Unresolved local var: int val@[DW_OP_breg13(sp): +4] */
 local_c = *p;
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_null_pointer_deref @ 00010e44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
 int iVar1;
 int iVar2;
 int local_c;
 
 /* Unresolved local var: int valid@[???]
 Unresolved local var: int r1@[DW_OP_breg13(sp): +8]
 Unresolved local var: int r2@[DW_OP_breg13(sp): +4] */
 local_c = 0x2a;
 iVar1 = param_null_pointer_deref(&local_c);
 iVar2 = param_null_pointer_deref((int *)0x0);
 signal(0xb,(__sighandler_t)0x0);
 return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 00010e98 */

/* WARNING: Removing unreachable block (ram,0x00010f08) */

int param_buffer_overflow_stack(int x)

{
 int local_14;
 char auStack_c [8];
 int local_4;
 
 local_4 = x;
 /* Unresolved local var: char[8] buffer@[DW_OP_breg13(sp): +12]
 Unresolved local var: int canary@[DW_OP_breg13(sp): +8] */
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
 for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
 auStack_c[local_14] = 0x41;
 }
 return local_4;
}



/* Function: param_buffer_overflow_heap @ 00010f24 */

int param_buffer_overflow_heap(int x)

{
 void *__ptr;
 int local_18;
 int local_c;
 
 /* Unresolved local var: char * heap_buffer@[DW_OP_breg13(sp): +4] */
 __ptr = malloc(0x10);
 if (__ptr == (void *)0x0) {
 local_c = -2;
 }
 else {
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_18 = 0; local_18 < 0x21; local_18 = local_18 + 1) {
 *(char *)((int)__ptr + local_18) = 0x42;
 }
 free(__ptr);
 local_c = x;
 }
 return local_c;
}



/* Function: call_buffer_overflow @ 00010fc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int r1@[DW_OP_breg13(sp): +4]
 Unresolved local var: int r2@[DW_OP_breg13(sp): 0] */
 iVar1 = param_buffer_overflow_stack(10);
 iVar2 = param_buffer_overflow_heap(0x14);
 return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00010ffc */

int param_integer_overflow(int a,int b)

{
 int local_4;
 
 /* Unresolved local var: int signed_sum@[DW_OP_breg13(sp): +12]
 Unresolved local var: uint ua@[DW_OP_breg13(sp): +8]
 Unresolved local var: uint ub@[DW_OP_breg13(sp): +4]
 Unresolved local var: uint unsigned_sum@[DW_OP_breg13(sp): 0] */
 local_4 = a + b;
 if (((a < 1) || (b < 1)) || ((uint)(a + b) < 0x80000000)) {
 if (((0x7fffffff < (uint)a) && (0x7fffffff < (uint)b)) && (0 < a + b)) {
 local_4 = -2;
 }
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: call_integer_overflow @ 000110c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int r1@[DW_OP_breg13(sp): +4]
 Unresolved local var: int r2@[DW_OP_breg13(sp): 0] */
 iVar1 = param_integer_overflow(1000000000,1000000000);
 iVar2 = param_integer_overflow(-1,1);
 return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00011110 */

int param_undefined_behavior(int i)

{
 /* Unresolved local var: int local@[DW_OP_breg13(sp): 0] */
 return i << 1;
}



/* Function: call_undefined_behavior @ 00011130 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
 int iVar1;
 
 /* Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
 iVar1 = param_undefined_behavior(5);
 return iVar1;
}



/* Function: param_implementation_defined @ 00011158 */

/* WARNING: Removing unreachable block (ram,0x00011178) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
 /* Unresolved local var: int result@[DW_OP_breg13(sp): +12]
 Unresolved local var: char c@[DW_OP_breg13(sp): +11]
 Unresolved local var: int s@[DW_OP_breg13(sp): +4]
 Unresolved local var: anon_struct_4_3_4e909822 bitfield@[DW_OP_breg13(sp): 0]
 */
 return 0x2c;
}



/* Function: call_implementation_defined @ 00011204 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
 int iVar1;
 
 iVar1 = param_implementation_defined();
 return iVar1;
}



/* Function: test_obf_opt_edge @ 00011218 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
 int iVar1;
 
 printf(&DAT_000116a5);
 iVar1 = call_fake_branch();
 printf(&DAT_000116d3,iVar1);
 iVar1 = call_opaque_predicate();
 printf(&DAT_000116ef,iVar1);
 iVar1 = call_instruction_substitution();
 printf(&DAT_0001170b,iVar1);
 iVar1 = call_string_encryption();
 printf(&DAT_00011728,iVar1);
 iVar1 = call_tail_call_optimized();
 printf(&DAT_00011744,iVar1);
 iVar1 = call_non_tail_call();
 printf(&DAT_0001176e,iVar1);
 iVar1 = call_vectorized_loop();
 printf(&DAT_00011793,iVar1);
 iVar1 = call_link_time_optimization();
 printf(&DAT_000117b9,iVar1);
 iVar1 = call_division_by_zero();
 printf(&DAT_000117d9,iVar1);
 iVar1 = call_null_pointer_deref();
 printf(&DAT_000117f5,iVar1);
 iVar1 = call_buffer_overflow();
 printf(&DAT_00011812,iVar1);
 iVar1 = call_integer_overflow();
 printf(&DAT_0001182f,iVar1);
 iVar1 = call_undefined_behavior();
 printf(&DAT_00011860,iVar1);
 iVar1 = call_implementation_defined();
 printf(&DAT_0001187d,iVar1);
 return;
}



/* Function: main @ 00011388 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_obf_opt_edge();
 return 0;
}




/* CRT stub function __divsi3 removed by preprocessor */





/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */





/* CRT stub function __aeabi_idivmod removed by preprocessor */





/* CRT stub function __aeabi_ldiv0 removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 46 */
