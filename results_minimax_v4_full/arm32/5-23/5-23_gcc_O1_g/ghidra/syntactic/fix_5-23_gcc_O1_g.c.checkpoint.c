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
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef int bool;
typedef int (*code)();

/* Missing function pointers and data symbols */
typedef int (*sync_compare_and_swap_t)(int, int, int*);
typedef void (*sync_barrier_t)(void);

/* Define missing string data */
char DAT_00011e50[] = "call_token_paste: %d\n";
char DAT_00011e88[] = "call_macro_override: %d\n";

/* Stub implementations for missing functions */
int __sync_val_compare_and_swap_stub(int old_val, int new_val, int *ptr)
{
    int current = *ptr;
    if (current == old_val) {
        *ptr = new_val;
        return 0;
    }
    return 1;
}

void __sync_synchronize_stub(void)
{
    __asm__ __volatile__("" ::: "memory");
}

sync_compare_and_swap_t SUB_ffff0fc0 = __sync_val_compare_and_swap_stub;
sync_barrier_t SUB_ffff0fa0 = __sync_synchronize_stub;

/* Format strings */
char DAT_00011d6c[] = "test_preprocessing_features: %d\n";
char DAT_00011d94[] = "call_macro_constants: %d\n";
char DAT_00011db0[] = "call_macro_functions: %d\n";
char DAT_00011dcc[] = "call_conditional_compile: %d\n";
char DAT_00011de8[] = "call_multi_branch_compile: %d\n";
char DAT_00011e08[] = "call_macro_recursion: %d\n";
char DAT_00011e24[] = "call_stringize: %d\n";
char DAT_00011e6c[] = "call_variadic_macro: %d\n";
char DAT_00011ea4[] = "call_include_guard: %d\n";
char DAT_00011ec0[] = "call_builtin_macros: %d\n";
char DAT_00011ef8[] = "test_asm_features: %d\n";
char DAT_00011f24[] = "param_asm_basic: %d\n";
char DAT_00011f40[] = "call_asm_clobber: %d\n";
char DAT_00011f5c[] = "call_asm_multi_insn: %d\n";
char DAT_00011f78[] = "call_asm_simd: %d\n";
char DAT_00011f94[] = "call_asm_atomic: %d\n";
char DAT_00011fb0[] = "call_asm_privileged: %d\n";

/* Global variable */
int global_var;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-23/5-23_gcc_O1_g
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

int param_macro_constants(int size)

{
 int iVar1;
 
 if (size < 0x401) {
 iVar1 = 0x200;
 }
 else {
 iVar1 = 0x40;
 }
 return iVar1;
}



/* Function: call_macro_constants @ 000105cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 000105d4 */

int param_macro_functions(int x,int y)

{
 if (y <= x) {
 y = x;
 }
 return x * x + y;
}



/* Function: call_macro_functions @ 000105ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 000105f4 */

int param_conditional_compile(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(r0): 0; DW_OP_lit3; DW_OP_mul;
 DW_OP_plus_uconst: 2; DW_OP_stack_value] */
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00010600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00010608 */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00010618 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00010624 */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 0001062c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00010634 */

int param_stringize(int value)

{
 /* Unresolved local var: char * str1@[???]
 Unresolved local var: char * str2@[???]
 Unresolved local var: char * str3@[???] */
 return 0x13;
}



/* Function: call_stringize @ 0001063c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00010644 */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 00010650 */

int param_token_paste(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(r0): 0; DW_OP_lit11; DW_OP_mul;
 DW_OP_plus_uconst: 5; DW_OP_stack_value]
 Unresolved local var: int temp__LINE__@[DW_OP_breg0(r0): +5;
 DW_OP_stack_value] */
 return x * 0xb + 5;
}



/* Function: call_token_paste @ 00010660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00010668 */

int param_variadic_macro(int x,int y,int z)

{
 /* Unresolved local var: int count@[???] */
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",x,y,z);
 return x + 0x32;
}



/* Function: call_variadic_macro @ 0001069c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 int iVar1;
 
 iVar1 = param_variadic_macro(10,0x14,0x1e);
 return iVar1;
}



/* Function: param_macro_override @ 000106b4 */

int param_macro_override(int x)

{
 /* Unresolved local var: int r1@[DW_OP_breg0(r0): +1; DW_OP_stack_value]
 Unresolved local var: int r2@[DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value] */
 return x * 3 + 1;
}



/* Function: call_macro_override @ 000106c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 000106c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 000106d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 000106d8 */

int param_builtin_macros(int x)

{
 /* Unresolved local var: char * file@[???]
 Unresolved local var: int line@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: int counter1@[???]
 Unresolved local var: int counter2@[???]
 Unresolved local var: int counter3@[???] */
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:02");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 00010738 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 int iVar1;
 
 iVar1 = param_builtin_macros(100);
 return iVar1;
}



/* Function: test_preprocessing_features @ 00010748 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 int iVar1;
 
 __printf_chk(1,&DAT_00011d6c);
 __printf_chk(1,&DAT_00011d94,0x40);
 __printf_chk(1,&DAT_00011db0,0x1e);
 __printf_chk(1,&DAT_00011dcc,0x20);
 __printf_chk(1,&DAT_00011de8,0xdf22);
 __printf_chk(1,&DAT_00011e08,0x74);
 __printf_chk(1,&DAT_00011e24,0x13);
 __printf_chk(1,&DAT_00011e50,0x3c);
 iVar1 = call_variadic_macro();
 __printf_chk(1,&DAT_00011e6c,iVar1);
 __printf_chk(1,&DAT_00011e88,0x10);
 __printf_chk(1,&DAT_00011ea4,500);
 iVar1 = call_builtin_macros();
 __printf_chk(1,&DAT_00011ec0,iVar1);
 return;
}



/* Function: param_asm_basic @ 00010848 */

int param_asm_basic(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(r0): +10; DW_OP_stack_value] */
 return x + 10;
}



/* Function: call_asm_basic @ 00010850 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00010858 */

int param_asm_clobber(int *arr,int n)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 piVar3 = arr + -1;
 piVar2 = piVar3 + n;
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

/* WARNING: Removing unreachable block (ram,0x000108e4) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 int iVar1;
 int arr [5];
 
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 iVar1 = param_asm_clobber(arr,5);
 return iVar1;
}



/* Function: param_asm_multi_insn @ 000108f0 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return;
}



/* Function: call_asm_multi_insn @ 000108fc */

/* WARNING: Removing unreachable block (ram,0x000109a0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 int iVar1;
 char src [10];
 char dst [32];
 
 src[0] = 'H';
 src[1] = 'e';
 src[2] = 'l';
 src[3] = 'l';
 src[4] = 'o';
 src[5] = ' ';
 src[6] = 'A';
 src[7] = 'S';
 src[8] = 'M';
 src[9] = '\0';
 dst[0] = '\0';
 dst[1] = '\0';
 dst[2] = '\0';
 dst[3] = '\0';
 dst[4] = '\0';
 dst[5] = '\0';
 dst[6] = '\0';
 dst[7] = '\0';
 dst[8] = '\0';
 dst[9] = '\0';
 dst[10] = '\0';
 dst[0xb] = '\0';
 dst[0xc] = '\0';
 dst[0xd] = '\0';
 dst[0xe] = '\0';
 dst[0xf] = '\0';
 dst[0x10] = '\0';
 dst[0x11] = '\0';
 dst[0x12] = '\0';
 dst[0x13] = '\0';
 dst[0x14] = '\0';
 dst[0x15] = '\0';
 dst[0x16] = '\0';
 dst[0x17] = '\0';
 dst[0x18] = '\0';
 dst[0x19] = '\0';
 dst[0x1a] = '\0';
 dst[0x1b] = '\0';
 dst[0x1c] = '\0';
 dst[0x1d] = '\0';
 dst[0x1e] = '\0';
 dst[0x1f] = '\0';
 param_asm_multi_insn(dst,src,9);
 if (dst[0] == 'H') {
 if (dst[4] == 'o') {
 iVar1 = 0x2a;
 }
 else {
 iVar1 = -1;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: param_asm_simd @ 000109ac */

int param_asm_simd(int *a,int *b,int *result)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 
 /* Unresolved local var: int i@[???] */
 piVar3 = a + -1;
 piVar1 = b + -1;
 piVar2 = result + -1;
 do {
 piVar3 = piVar3 + 1;
 piVar1 = piVar1 + 1;
 piVar2 = piVar2 + 1;
 *piVar2 = *piVar3 + *piVar1;
 } while (piVar3 != a + 3);
 return 0;
}



/* Function: param_simd_intrinsics @ 000109e0 */

int param_simd_intrinsics(int *a,int *b,int *result)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 
 /* Unresolved local var: int i@[???] */
 piVar3 = a + -1;
 piVar1 = b + -1;
 piVar2 = result + -1;
 do {
 piVar3 = piVar3 + 1;
 piVar1 = piVar1 + 1;
 piVar2 = piVar2 + 1;
 *piVar2 = *piVar3 + *piVar1;
 } while (piVar3 != a + 3);
 return 0;
}



/* Function: call_asm_simd @ 00010a14 */

/* WARNING: Removing unreachable block (ram,0x00010a9c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 int a [4];
 int b [4];
 int result [4];
 
 a[0] = 1;
 a[1] = 2;
 a[2] = 3;
 a[3] = 4;
 b[0] = 5;
 b[1] = 6;
 b[2] = 7;
 b[3] = 8;
 param_asm_simd(a,b,result);
 return result[0] + result[1] + result[2] + result[3];
}



/* Function: param_asm_atomic @ 00010aa8 */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 
 /* Unresolved local var: int old_value@[???] */
 iVar1 = __sync_fetch_and_add_4(counter,increment);
 return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00010abc */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 iVar1 = __sync_fetch_and_add_4(counter,increment);
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00010ad0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 int iVar1;
 int counter;
 int local_c;
 
 /* Unresolved local var: int new_val@[???] */
 local_c = 0;
 counter = 10;
 iVar1 = param_asm_atomic(&counter,5);
 if (local_c == 0) {
 return iVar1 + counter;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_dynamic_code @ 00010b2c */

int param_dynamic_code(int x)

{
 size_t __len;
 void *__addr;
 int iVar1;
 
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * exec_mem@[???]
 Unresolved local var: int result@[???] */
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffff) {
 iVar1 = -1;
 }
 else {
 iVar1 = x + 5;
 munmap(__addr,__len);
 }
 return iVar1;
}



/* Function: param_memory_protection @ 00010b8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
 size_t __len;
 int *__addr;
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * mem@[???]
 Unresolved local var: int * data@[???]
 Unresolved local var: int value@[???] */
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (int *)0xffffffff) {
 iVar1 = -1;
 }
 else {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 iVar1 = *__addr;
 iVar2 = mprotect(__addr,__len,3);
 if (iVar2 == 0) {
 *__addr = 100;
 munmap(__addr,__len);
 }
 else {
 munmap(__addr,__len);
 iVar1 = -3;
 }
 }
 else {
 munmap(__addr,__len);
 iVar1 = -2;
 }
 }
 return iVar1;
}



/* Function: param_clobber_importance @ 00010c54 */

int param_clobber_importance(int a,int b)

{
 return (a + b) * 2;
}



/* Function: call_asm_privileged @ 00010c60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 if (iVar1 == 0xf && iVar2 == 0x2a) {
 iVar1 = 0x4d;
 }
 return iVar1;
}



/* Function: param_memory_clobber_demo @ 00010c88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 /* Unresolved local var: int local@[???]
 Unresolved local var: int result@[???] */
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00010c9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 int iVar1;
 
 __printf_chk(1,&DAT_00011ef8);
 __printf_chk(1,&DAT_00011f24,0xf);
 iVar1 = call_asm_clobber();
 __printf_chk(1,&DAT_00011f40,iVar1);
 iVar1 = call_asm_multi_insn();
 __printf_chk(1,&DAT_00011f5c,iVar1);
 iVar1 = call_asm_simd();
 __printf_chk(1,&DAT_00011f78,iVar1);
 iVar1 = call_asm_atomic();
 __printf_chk(1,&DAT_00011f94,iVar1);
 iVar1 = call_asm_privileged();
 __printf_chk(1,&DAT_00011fb0,iVar1);
 return;
}



/* Function: main @ 00010d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 + param_2,param_1);
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
 iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 - param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_fetch_and_or_4 @ 00010dc4 */

uint __sync_fetch_and_or_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 | param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_and_4 @ 00010dfc */

uint __sync_fetch_and_and_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 & param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_xor_4 @ 00010e34 */

uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 ^ param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_nand_4 @ 00010e6c */

uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,~(uVar2 & param_2),param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_add_2 @ 00010ea8 */

int __sync_fetch_and_add_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_sub_2 @ 00010f08 */

int __sync_fetch_and_sub_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_or_2 @ 00010f68 */

int __sync_fetch_and_or_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_and_2 @ 00010fc8 */

int __sync_fetch_and_and_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_xor_2 @ 00011028 */

int __sync_fetch_and_xor_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_nand_2 @ 00011088 */

int __sync_fetch_and_nand_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_add_1 @ 000110ec */

int __sync_fetch_and_add_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_sub_1 @ 00011148 */

int __sync_fetch_and_sub_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_or_1 @ 000111a4 */

int __sync_fetch_and_or_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_and_1 @ 00011200 */

int __sync_fetch_and_and_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_xor_1 @ 0001125c */

int __sync_fetch_and_xor_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_nand_1 @ 000112b8 */

int __sync_fetch_and_nand_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
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
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
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
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_or_and_fetch_4 @ 00011388 */

uint __sync_or_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_and_and_fetch_4 @ 000113c0 */

uint __sync_and_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_xor_and_fetch_4 @ 000113f8 */

uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_nand_and_fetch_4 @ 00011430 */

uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_add_and_fetch_2 @ 0001146c */

int __sync_add_and_fetch_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_2 @ 000114d4 */

int __sync_sub_and_fetch_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_2 @ 0001153c */

int __sync_or_and_fetch_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_2 @ 000115a4 */

int __sync_and_and_fetch_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_2 @ 0001160c */

int __sync_xor_and_fetch_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_2 @ 00011674 */

int __sync_nand_and_fetch_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_add_and_fetch_1 @ 000116e0 */

int __sync_add_and_fetch_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_1 @ 00011744 */

int __sync_sub_and_fetch_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_1 @ 000117a8 */

int __sync_or_and_fetch_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_1 @ 0001180c */

int __sync_and_and_fetch_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_1 @ 00011870 */

int __sync_xor_and_fetch_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_1 @ 000118d4 */

int __sync_nand_and_fetch_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_val_compare_and_swap_4 @ 0001193c */

int __sync_val_compare_and_swap_4(int *param_1,int param_2,undefined4 param_3)

{
 int iVar1;
 
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}



/* Function: __sync_val_compare_and_swap_2 @ 0001198c */

uint __sync_val_compare_and_swap_2(uint param_1,uint param_2,int param_3)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xffff)) {
 return (int)(short)uVar1;
 }
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: __sync_val_compare_and_swap_1 @ 00011a04 */

uint __sync_val_compare_and_swap_1(uint param_1,uint param_2,int param_3)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xff)) {
 return (int)(char)uVar1;
 }
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: __sync_bool_compare_and_swap_4 @ 00011a78 */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 int iVar1;
 
 iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
 return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 00011aa4 */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __sync_val_compare_and_swap_2(param_1,param_2,param_2);
 return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 00011ac0 */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __sync_val_compare_and_swap_1(param_1,param_2,param_2);
 return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 00011ae8 */

undefined4 __sync_lock_test_and_set_4(undefined4 *param_1,undefined4 param_2)

{
 int iVar1;
 undefined4 uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_lock_test_and_set_2 @ 00011b20 */

int __sync_lock_test_and_set_2(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_test_and_set_1 @ 00011b80 */

int __sync_lock_test_and_set_1(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_release_8 @ 00011bdc */

void __sync_lock_release_8(undefined4 *param_1)

{
 (*(code *)&SUB_ffff0fa0)();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}



/* Function: __sync_lock_release_4 @ 00011c00 */

void __sync_lock_release_4(undefined4 *param_1)

{
 (*(code *)&SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}



/* Function: __sync_lock_release_2 @ 00011c20 */

void __sync_lock_release_2(undefined2 *param_1)

{
 (*(code *)&SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}



/* Function: __sync_lock_release_1 @ 00011c40 */

void __sync_lock_release_1(undefined1 *param_1)

{
 (*(code *)&SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 99 */
