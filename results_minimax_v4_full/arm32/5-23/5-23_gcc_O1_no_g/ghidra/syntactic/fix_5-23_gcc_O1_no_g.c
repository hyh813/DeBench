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
typedef unsigned long long ulonglong;

/* Ghidra types */
typedef char undefined1;
typedef int (*code)();

/* External function pointers for atomic operations */
extern int stub_sub_ffff0fc0(int param_1, int param_2, int *param_3);
extern void stub_sub_ffff0fa0(void);

/* Stub implementations for external function pointers */
int stub_sub_ffff0fc0(int param_1, int param_2, int *param_3)
{
    /* Compare-and-swap implementation stub */
    int old_val = *param_3;
    if (old_val == param_1) {
        *param_3 = param_2;
        return 0;
    }
    return 1;
}

void stub_sub_ffff0fa0(void)
{
    /* Memory barrier / lock release stub */
    return;
}

/* Global variable declaration */
int global_var;

/* External data (string constants) - defined in binary data section */
char DAT_00011d6c[] = "Preprocessing Test\n";
char DAT_00011d94[] = "MACRO_CONST = %d\n";
char DAT_00011db0[] = "MACRO_FUNC(30) = %d\n";
char DAT_00011dcc[] = "CONDITIONAL_COMP = %d\n";
char DAT_00011de8[] = "MULTI_BRANCH = %d\n";
char DAT_00011e08[] = "MACRO_RECURSION = %d\n";
char DAT_00011e24[] = "STRINGIZE = %d\n";
char DAT_00011e50[] = "TOKEN_PASTE = %d\n";
char DAT_00011e6c[] = "VARIADIC: %d\n";
char DAT_00011e88[] = "MACRO_OVERRIDE = %d\n";
char DAT_00011ea4[] = "INCLUDE_GUARD = %d\n";
char DAT_00011ec0[] = "BUILTIN_MACROS = %d\n";
char DAT_00011ef8[] = "\n=== ASM Features Test ===\n";
char DAT_00011f24[] = "param_asm_basic returned: %d\n";
char DAT_00011f40[] = "param_asm_clobber returned: %d\n";
char DAT_00011f5c[] = "param_asm_multi_insn returned: %d\n";
char DAT_00011f78[] = "param_asm_simd returned: %d\n";
char DAT_00011f94[] = "param_asm_atomic returned: %d\n";
char DAT_00011fb0[] = "call_asm_privileged returned: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-23/5-23_gcc_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 000105bc */

int param_macro_constants(int param_1)

{
 int uVar1;
 
 if (param_1 < 0x401) {
 uVar1 = 0x200;
 }
 else {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 000105cc */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 000105d4 */

int param_macro_functions(int param_1,int param_2)

{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_1 * param_1 + param_2;
}



/* Function: call_macro_functions @ 000105ec */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 000105f4 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00010600 */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00010608 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00010618 */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00010624 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 0001062c */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00010634 */

int param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 0001063c */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00010644 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 00010650 */

int param_token_paste(int param_1)

{
 return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 00010660 */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00010668 */

int param_variadic_macro(int param_1,int param_2,int param_3)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 0001069c */

void call_variadic_macro(void)

{
 param_variadic_macro(10,0x14,0x1e);
 return;
}



/* Function: param_macro_override @ 000106b4 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 000106c0 */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 000106c8 */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 000106d0 */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 000106d8 */

int param_builtin_macros(int param_1)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:03");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00010738 */

void call_builtin_macros(void)

{
 param_builtin_macros(100);
 return;
}



/* Function: test_preprocessing_features @ 00010748 */

void test_preprocessing_features(void)

{
 int uVar1;
 
 __printf_chk(1,&DAT_00011d6c);
 __printf_chk(1,&DAT_00011d94,0x40);
 __printf_chk(1,&DAT_00011db0,0x1e);
 __printf_chk(1,&DAT_00011dcc,0x20);
 __printf_chk(1,&DAT_00011de8,0xdf22);
 __printf_chk(1,&DAT_00011e08,0x74);
 __printf_chk(1,&DAT_00011e24,0x13);
 __printf_chk(1,&DAT_00011e50,0x3c);
 call_variadic_macro();
 __printf_chk(1,&DAT_00011e6c,50);
 __printf_chk(1,&DAT_00011e88,0x10);
 __printf_chk(1,&DAT_00011ea4,500);
 call_builtin_macros();
 __printf_chk(1,&DAT_00011ec0,266);
 return;
}



/* Function: param_asm_basic @ 00010848 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 00010850 */

int call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00010858 */

int param_asm_clobber(int param_1,int param_2)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 if (0 < param_2) {
 piVar3 = (int *)(param_1 + -4);
 piVar2 = piVar3 + param_2;
 iVar1 = 0;
 do {
 piVar3 = piVar3 + 1;
 iVar1 = iVar1 + *piVar3;
 } while (piVar3 != piVar2);
 return iVar1;
 }
 return 0;
}



/* Function: call_asm_clobber @ 00010888 */

void call_asm_clobber(void)

{
 int local_20;
 int uStack_1c;
 int uStack_18;
 int uStack_14;
 int local_10;
 int local_c;
 
 local_c = 0;
 local_20 = 1;
 uStack_1c = 2;
 uStack_18 = 3;
 uStack_14 = 4;
 local_10 = 5;
 (void)param_asm_clobber(&local_20,5);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_asm_multi_insn @ 000108f0 */

void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return;
}



/* Function: call_asm_multi_insn @ 000108fc */

void call_asm_multi_insn(void)

{
 int uVar1;
 int extraout_r1;
 char local_38 [4];
 char acStack_34 [4];
 short local_30;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 int local_c;
 
 local_c = 0;
 local_38[0] = 'H';
 local_38[1] = 'e';
 local_38[2] = 'l';
 local_38[3] = 'l';
 acStack_34[0] = 'o';
 acStack_34[1] = ' ';
 acStack_34[2] = 'A';
 acStack_34[3] = 'S';
 local_30 = 0x4d;
 local_2c = 0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 local_10 = 0;
 param_asm_multi_insn(&local_2c,local_38,9);
 if ((char)local_2c == 'H') {
 if ((char)local_28 == 'o') {
 uVar1 = 0x2a;
 }
 else {
 uVar1 = 0xffffffff;
 }
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar1,extraout_r1,local_c,0);
 }
 return;
}



/* Function: param_asm_simd @ 000109ac */

int param_asm_simd(int param_1,int param_2,int param_3)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 
 piVar3 = (int *)(param_1 + -4);
 piVar1 = (int *)(param_2 + -4);
 piVar2 = (int *)(param_3 + -4);
 do {
 piVar3 = piVar3 + 1;
 piVar1 = piVar1 + 1;
 piVar2 = piVar2 + 1;
 *piVar2 = *piVar3 + *piVar1;
 } while (piVar3 != (int *)(param_1 + 0xc));
 return 0;
}



/* Function: param_simd_intrinsics @ 000109e0 */

int param_simd_intrinsics(int param_1,int param_2,int param_3)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 
 piVar3 = (int *)(param_1 + -4);
 piVar1 = (int *)(param_2 + -4);
 piVar2 = (int *)(param_3 + -4);
 do {
 piVar3 = piVar3 + 1;
 piVar1 = piVar1 + 1;
 piVar2 = piVar2 + 1;
 *piVar2 = *piVar3 + *piVar1;
 } while (piVar3 != (int *)(param_1 + 0xc));
 return 0;
}



/* Function: call_asm_simd @ 00010a14 */

void call_asm_simd(void)

{
 int extraout_r1;
 int local_3c;
 int uStack_38;
 int uStack_34;
 int uStack_30;
 int local_2c;
 int uStack_28;
 int uStack_24;
 int uStack_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 int local_c;
 
 local_c = 0;
 local_3c = 1;
 uStack_38 = 2;
 uStack_34 = 3;
 uStack_30 = 4;
 local_2c = 5;
 uStack_28 = 6;
 uStack_24 = 7;
 uStack_20 = 8;
 param_asm_simd(&local_3c,&local_2c,&local_1c);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(local_1c + local_18 + local_14 + local_10,extraout_r1,local_c,0);
}



/* Function: param_asm_atomic @ 00010aa8 */

int param_asm_atomic(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __sync_fetch_and_add_4(param_1,param_2);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00010abc */

int param_atomic_c11(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __sync_fetch_and_add_4(param_1,param_2);
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00010ad0 */

void call_asm_atomic(void)

{
 long long uVar1;
 int local_10;
 int local_c;
 
 local_c = 0;
 local_10 = 10;
 uVar1 = param_asm_atomic(&local_10,5);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)uVar1 + local_10,(int)((ulonglong)uVar1 >> 0x20),local_c,0);
}



/* Function: param_dynamic_code @ 00010b2c */

int param_dynamic_code(int param_1)

{
 size_t __len;
 void *__addr;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffff) {
 param_1 = -1;
 }
 else {
 param_1 = param_1 + 5;
 munmap(__addr,__len);
 }
 return param_1;
}



/* Function: param_memory_protection @ 00010b8c */

int param_memory_protection(void)

{
 size_t __len;
 int *__addr;
 int iVar1;
 int uVar2;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (int *)0xffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 uVar2 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 if (iVar1 == 0) {
 *__addr = 100;
 munmap(__addr,__len);
 }
 else {
 munmap(__addr,__len);
 uVar2 = 0xfffffffd;
 }
 }
 else {
 munmap(__addr,__len);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}



/* Function: param_clobber_importance @ 00010c54 */

int param_clobber_importance(int param_1,int param_2)

{
 return (param_1 + param_2) * 2;
}



/* Function: call_asm_privileged @ 00010c60 */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 if (iVar1 == 0xf && iVar2 == 0x2a) {
 iVar1 = 0x4d;
 }
 return iVar1;
}



/* Function: param_memory_clobber_demo @ 00010c88 */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00010c9c */

void test_asm_features(void)

{
 int uVar1;
 
 __printf_chk(1,&DAT_00011ef8);
 __printf_chk(1,&DAT_00011f24,0xf);
 call_asm_clobber();
 __printf_chk(1,&DAT_00011f40,0);
 call_asm_multi_insn();
 __printf_chk(1,&DAT_00011f5c,0);
 call_asm_simd();
 __printf_chk(1,&DAT_00011f78,0);
 call_asm_atomic();
 __printf_chk(1,&DAT_00011f94,0);
 uVar1 = call_asm_privileged();
 __printf_chk(1,&DAT_00011fb0,uVar1);
 return;
}



/* Function: main @ 00010d40 */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: __sync_fetch_and_add_4 @ 00010d54 */

int __sync_fetch_and_add_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(iVar2,iVar2 + param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_fetch_and_sub_4 @ 00010d8c */

int __sync_fetch_and_sub_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(iVar2,iVar2 - param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_fetch_and_or_4 @ 00010dc4 */

unsigned int __sync_fetch_and_or_4(unsigned int *param_1,unsigned int param_2)

{
 int iVar1;
 unsigned int uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar2 | param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_and_4 @ 00010dfc */

unsigned int __sync_fetch_and_and_4(unsigned int *param_1,unsigned int param_2)

{
 int iVar1;
 unsigned int uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar2 & param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_xor_4 @ 00010e34 */

unsigned int __sync_fetch_and_xor_4(unsigned int *param_1,unsigned int param_2)

{
 int iVar1;
 unsigned int uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar2 ^ param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_nand_4 @ 00010e6c */

unsigned int __sync_fetch_and_nand_4(unsigned int *param_1,unsigned int param_2)

{
 int iVar1;
 unsigned int uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(uVar2,~(uVar2 & param_2),param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_add_2 @ 00010ea8 */

int __sync_fetch_and_add_2(unsigned int param_1,int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_sub_2 @ 00010f08 */

int __sync_fetch_and_sub_2(unsigned int param_1,int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_or_2 @ 00010f68 */

int __sync_fetch_and_or_2(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_and_2 @ 00010fc8 */

int __sync_fetch_and_and_2(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_xor_2 @ 00011028 */

int __sync_fetch_and_xor_2(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_nand_2 @ 00011088 */

int __sync_fetch_and_nand_2(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_add_1 @ 000110ec */

int __sync_fetch_and_add_1(unsigned int param_1,int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_sub_1 @ 00011148 */

int __sync_fetch_and_sub_1(unsigned int param_1,int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_or_1 @ 000111a4 */

int __sync_fetch_and_or_1(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_and_1 @ 00011200 */

int __sync_fetch_and_and_1(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_xor_1 @ 0001125c */

int __sync_fetch_and_xor_1(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_nand_1 @ 000112b8 */

int __sync_fetch_and_nand_1(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_add_and_fetch_4 @ 00011318 */

int __sync_add_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_sub_and_fetch_4 @ 00011350 */

int __sync_sub_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_or_and_fetch_4 @ 00011388 */

unsigned int __sync_or_and_fetch_4(unsigned int *param_1,unsigned int param_2)

{
 int iVar1;
 unsigned int uVar2;
 
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_and_and_fetch_4 @ 000113c0 */

unsigned int __sync_and_and_fetch_4(unsigned int *param_1,unsigned int param_2)

{
 int iVar1;
 unsigned int uVar2;
 
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_xor_and_fetch_4 @ 000113f8 */

unsigned int __sync_xor_and_fetch_4(unsigned int *param_1,unsigned int param_2)

{
 int iVar1;
 unsigned int uVar2;
 
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_nand_and_fetch_4 @ 00011430 */

unsigned int __sync_nand_and_fetch_4(unsigned int *param_1,unsigned int param_2)

{
 int iVar1;
 unsigned int uVar2;
 
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_add_and_fetch_2 @ 0001146c */

int __sync_add_and_fetch_2(unsigned int param_1,int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar4,(unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_2 @ 000114d4 */

int __sync_sub_and_fetch_2(unsigned int param_1,int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar4,(unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_2 @ 0001153c */

int __sync_or_and_fetch_2(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar4,(unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_2 @ 000115a4 */

int __sync_and_and_fetch_2(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar4,(unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_2 @ 0001160c */

int __sync_xor_and_fetch_2(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar4,(unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_2 @ 00011674 */

int __sync_nand_and_fetch_2(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar4,(unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_add_and_fetch_1 @ 000116e0 */

int __sync_add_and_fetch_1(unsigned int param_1,int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar4,(unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_1 @ 00011744 */

int __sync_sub_and_fetch_1(unsigned int param_1,int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar4,(unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_1 @ 000117a8 */

int __sync_or_and_fetch_1(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar4,(unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_1 @ 0001180c */

int __sync_and_and_fetch_1(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar4,(unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_1 @ 00011870 */

int __sync_xor_and_fetch_1(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar4,(unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_1 @ 000118d4 */

int __sync_nand_and_fetch_1(unsigned int param_1,unsigned int param_2)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&stub_sub_ffff0fc0)(uVar2,uVar4,(unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_val_compare_and_swap_4 @ 0001193c */

int __sync_val_compare_and_swap_4(int *param_1,int param_2,int param_3)

{
 int iVar1;
 
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}



/* Function: __sync_val_compare_and_swap_2 @ 0001198c */

unsigned int __sync_val_compare_and_swap_2(unsigned int param_1,unsigned int param_2,int param_3)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xffff)) {
 return (int)(short)uVar1;
 }
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: __sync_val_compare_and_swap_1 @ 00011a04 */

unsigned int __sync_val_compare_and_swap_1(unsigned int param_1,unsigned int param_2,int param_3)

{
 unsigned int uVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xff)) {
 return (int)(char)uVar1;
 }
 iVar3 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: __sync__Bool_compare_and_swap_4 @ 00011a78 */

_Bool __sync__Bool_compare_and_swap_4(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(param_2,param_3,param_1);
 return iVar1 == 0;
}



/* Function: __sync__Bool_compare_and_swap_2 @ 00011aa4 */

_Bool __sync__Bool_compare_and_swap_2(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = __sync_val_compare_and_swap_2(param_1,param_2,param_3);
 return param_2 == iVar1;
}



/* Function: __sync__Bool_compare_and_swap_1 @ 00011ac0 */

_Bool __sync__Bool_compare_and_swap_1(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = __sync_val_compare_and_swap_1(param_1,param_2,param_3);
 return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 00011ae8 */

int __sync_lock_test_and_set_4(int *param_1,int param_2)

{
 int iVar1;
 int uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&stub_sub_ffff0fc0)(uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_lock_test_and_set_2 @ 00011b20 */

int __sync_lock_test_and_set_2(unsigned int param_1,int param_2)

{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 iVar1 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_test_and_set_1 @ 00011b80 */

int __sync_lock_test_and_set_1(unsigned int param_1,int param_2)

{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(unsigned int *)(param_1 & 0xfffffffc);
 iVar1 = (*(code *)&stub_sub_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (unsigned int *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_release_8 @ 00011bdc */

void __sync_lock_release_8(int *param_1)

{
 (*(code *)&stub_sub_ffff0fa0)();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}



/* Function: __sync_lock_release_4 @ 00011c00 */

void __sync_lock_release_4(int *param_1)

{
 (*(code *)&stub_sub_ffff0fa0)();
 *param_1 = 0;
 return;
}



/* Function: __sync_lock_release_2 @ 00011c20 */

void __sync_lock_release_2(short *param_1)

{
 (*(code *)&stub_sub_ffff0fa0)();
 *param_1 = 0;
 return;
}



/* Function: __sync_lock_release_1 @ 00011c40 */

void __sync_lock_release_1(undefined1 *param_1)

{
 (*(code *)&stub_sub_ffff0fa0)();
 *param_1 = 0;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 99 */
