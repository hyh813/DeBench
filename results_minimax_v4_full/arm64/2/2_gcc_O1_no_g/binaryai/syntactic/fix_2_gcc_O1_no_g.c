// Decompiled by BinaryAI
// SHA256: 57b3357f430e9c38fa05e2608a4bebce553faeec535d7f13bcbb6a79640e89f4

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

// Type definitions
typedef unsigned int uint;
typedef unsigned char byte;

// External declarations
extern unsigned char completed_0;
extern void *__dso_handle;
extern int __libc_start_main(int (*)(int, char**, char**), void*, void*, void*, void*, unsigned long long);
void __cxa_finalize(void *);
void __gmon_start__(void);
void abort(void);

// Function declarations
int main(void);
void call_weak_fn(int);
int double_value(int);
int process_int(int);
bool complex_callback(int *param_1,long *param_2);
void __stack_chk_fail(void *, ...);

// Floating point library function declarations
unsigned long __multf3(unsigned long, unsigned long);
unsigned long __addtf3(unsigned long, unsigned long);
int __printf_chk(int, const char *, ...);
void __sfp_handle_exceptions(unsigned long, unsigned long long);

// Builtin macros
#define SBORROW4(a, b) ((int)((a) - (b)) < 0 && ((a) & 0x80000000) != ((b) & 0x80000000) && (((a) - (b)) & 0x80000000) != (((a) & 0x80000000) ^ (((a) - (b)) & 0x80000000)))
#define CARRY8(a, b) (((a) + (b)) < (a) || ((a) + (b)) < (b))

// External declarations for stack guard
extern unsigned long long ___stack_chk_guard;
extern unsigned long long __stack_chk_guard;
extern unsigned long long fpsr;

// Floating-point control register (ARM64)
#ifdef __aarch64__
static inline unsigned long long get_fpcr(void) {
    unsigned long long fpcr;
    __asm__ __volatile__("mrs %0, fpcr" : "=r"(fpcr));
    return fpcr;
}
#define fpcr get_fpcr()
#else
// For non-ARM architectures, provide a stub
extern unsigned long long fpcr;
#endif

// Function: _init @ 0x1006b8
int _init(void *ctx)
{
 call_weak_fn((int)ctx);
 return 0;
}

// Function: FUN_001006d0 @ 0x1006d0
void FUN_001006d0(void)
{
 // Null function call - removed as it's invalid
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1006f0
// Implemented in C runtime

// Function: <EXTERNAL>::__cxa_finalize @ 0x100700
// Implemented in C runtime

// Function: <EXTERNAL>::__printf_chk @ 0x100710
// Removed incorrect wrapper - using declaration at top

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100720
// Declared as external - implemented in C runtime

// Function: <EXTERNAL>::__gmon_start__ @ 0x100730
// Implemented in C runtime - no wrapper needed

// Function: <EXTERNAL>::abort @ 0x100740
// Declared as external - implemented in C runtime

// Function: <EXTERNAL>::puts @ 0x100750
// Declared as external - implemented in C library

// Data declarations
static const char stack0x00000008[] = {0};
static const char DAT_00102c58[] = "Data Types Test\n";
static const char DAT_00102de8[] = "Array Types Test\n";
static const char DAT_00102f18[] = "Pointer Test\n";
static const char DAT_00102f20[] = "Pointer Types Test\n";
static const char DAT_001030f8[] = "Composite Types Test\n";

// Function: _start @ 0x100780
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,param_9,stack0x00000008,0,0,param_1);
 // __libc_start_main does not return - unreachable
 for(;;) { }
}

// Function: call_weak_fn @ 0x1007b4
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x1007d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100800
void register_tm_clones(void)
{
 return;
}

// Function: FUN_0010083c @ 0x10083c
void FUN_0010083c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100840
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: double_value @ 0x100894
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: process_int @ 0x10089c
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: complex_callback @ 0x1008a8
bool complex_callback(int *param_1,long *param_2)
{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}

// Function: process_char @ 0x1008c4
char process_char(char param_1)
{
 if ((byte)(param_1 + 0xbfU) < 0x1a) {
 param_1 = param_1 + ' ';
 }
 return param_1;
}

// Function: process_short @ 0x1008e8
int process_short(short param_1,short param_2)
{
 return (int)param_2 + (int)param_1;
}

// Function: process_long @ 0x1008f4
long process_long(long param_1)
{
 return param_1 << 1;
}

// Function: process_ll @ 0x1008fc
long process_ll(long param_1)
{
 return param_1 * param_1;
}

// Function: process_float @ 0x100904
float process_float(float param_1)
{
 return param_1 * 1.5 + 0.5;
}

// Function: process_double @ 0x100918
double process_double(double param_1)
{
 return param_1 * 0.5 + 0.1;
}

// Function: process_ld @ 0x100930
void process_ld(unsigned long long param_1)
{
 unsigned long long uVar1;
 uVar1 = __multf3(param_1,param_1);
 // Note: __addtf3 result is used for long double computation
 (void)__addtf3(uVar1,(unsigned long)0);
 return;
}

// Function: process_bool @ 0x100958
uint process_bool(uint param_1)
{
 uint uVar1;
 uVar1 = ~param_1 & 1;
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: const_param @ 0x10096c
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x100978
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x100988
void test_data_types_l1(void)
{
 puts(DAT_00102c58);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",(int)0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",(int)0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",1.5);
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",0.4);
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",1.0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x100adc
int array_1d_stack(long param_1,int param_2)
{
 int iVar1;
 long lVar2;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_2);
 }
 return iVar1;
}

// Function: array_string @ 0x100b10
unsigned long array_string(char *param_1)
{
 char *pcVar1;
 unsigned long uVar2;
 unsigned long uVar3;
 if (*param_1 == '\0') {
 uVar2 = 0;
 }
 else {
 uVar3 = 1;
 do {
 uVar2 = uVar3 & 0xffffffff;
 pcVar1 = param_1 + uVar3;
 uVar3 = uVar3 + 1;
 } while (*pcVar1 != '\0');
 }
 return uVar2;
}

// Function: array_2d_stack @ 0x100b3c
int array_2d_stack(int *param_1)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 iVar1 = 0;
 piVar2 = param_1;
 do {
 piVar3 = piVar2 + 0xb;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while (piVar3 != param_1 + 0x6e);
 return iVar1;
}

// Function: array_3d @ 0x100b5c
int array_3d(long param_1)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 piVar3 = (int *)(param_1 + 100);
 iVar1 = 0;
 do {
 piVar2 = piVar3 + -0x19;
 do {
 iVar1 = iVar1 + *piVar2 + piVar2[1] + piVar2[2] + piVar2[3] + piVar2[4];
 piVar2 = piVar2 + 5;
 } while (piVar2 != piVar3);
 piVar3 = piVar3 + 0x19;
 } while (piVar3 != (int *)(param_1 + 600));
 return iVar1;
}

// Function: array_vla @ 0x100bb0
int array_vla(int param_1,long param_2)
{
 int iVar1;
 long lVar2;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_2 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_1);
 }
 return iVar1;
}

// Function: array_pointer @ 0x100be4
int array_pointer(int *param_1,int param_2)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 piVar2 = param_1;
 do {
 piVar3 = piVar2 + 10;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while (piVar3 != param_1 + (unsigned long)(param_2 - 1) * 10 + 10);
 }
 return iVar1;
}

// Function: pointer_array @ 0x100c20
int pointer_array(long param_1,int param_2)
{
 int iVar1;
 long lVar2;
 int *piVar3;
 int iVar4;
 iVar4 = param_2;
 if (10 < param_2) {
 iVar4 = 10;
 }
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 piVar3 = *(int **)(param_1 + lVar2 * 8);
 if (piVar3 != (int *)0x0) {
 iVar1 = iVar1 + *piVar3;
 }
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < iVar4);
 }
 return iVar1;
}

// Function: array_complex_index @ 0x100c6c
unsigned int array_complex_index(long param_1,int param_2,int param_3,uint param_4,uint param_5)
{
 bool bVar1;
 bool bVar2;
 unsigned int uVar3;
 bVar2 = -1 < (int)(param_4 | param_5);
 bVar1 = false;
 if (bVar2) {
 bVar1 = (int)(param_4 - param_2) < 0;
 }
 if (bVar1 == (bVar2 && SBORROW4(param_4,param_2))) {
 uVar3 = 0xffffffff;
 }
 else if ((int)param_5 < param_3) {
 uVar3 = *(unsigned int *)(param_1 + (long)(int)(param_4 + param_2 * param_5) * 4);
 }
 else {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}

// Function: array_oob @ 0x100ca0
int array_oob(int *param_1,uint param_2)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 if ((int)param_2 < 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 piVar2 = param_1;
 do {
 piVar3 = piVar2 + 1;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while (piVar3 != param_1 + (unsigned long)param_2 + 1);
 }
 return iVar1;
}

// Function: test_array_types @ 0x100cd0
void test_array_types(void)
{
 unsigned int uVar1;
 int iVar2;
 int iVar3;
 long lVar4;
 unsigned int *puVar5;
 int *piVar6;
 char *puVar7;
 unsigned int *puVar8;
 unsigned int local_534;
 unsigned int local_530;
 unsigned int local_52c;
 unsigned int local_528;
 unsigned int local_524;
 unsigned int local_520;
 unsigned long long local_518;
 unsigned long long uStack_510;
 unsigned int local_508;
 unsigned int *local_500;
 unsigned int *local_4f8;
 unsigned int *local_4f0;
 unsigned long long local_4e8;
 unsigned long long uStack_4e0;
 unsigned long long uStack_4d8;
 unsigned long long uStack_4d0;
 unsigned long long local_4c8;
 unsigned long long uStack_4c0;
 unsigned long long local_4b8;
 int aiStack_4b0 [17];
 unsigned int local_46c;
 unsigned int local_460 [10];
 unsigned int local_438;
 unsigned int local_410;
 unsigned int local_3e8;
 unsigned int local_3c0;
 char local_398 [400];
 unsigned int local_208 [125];
 unsigned int uStack_14;
 unsigned int local_10;
 unsigned short local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(DAT_00102de8);
 local_518 = 0x200000001;
 uStack_510 = 0x400000003;
 local_508 = 5;
 uVar1 = array_1d_stack(&local_518,5);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_10 = 'h' | ('e' << 8) | ('l' << 16) | ('l' << 24);
 local_c = 'o' | ('\0' << 8);
 uVar1 = array_string(local_398);
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar1);
 puVar7 = local_398;
 iVar3 = 0;
 do {
 lVar4 = 0;
 do {
 iVar2 = (int)lVar4;
 if (iVar3 != iVar2) {
 iVar2 = 0;
 }
 *(int *)(puVar7 + lVar4 * 4) = iVar2;
 lVar4 = lVar4 + 1;
 } while (lVar4 != 10);
 iVar3 = iVar3 + 1;
 puVar7 = puVar7 + 0x28;
 } while (iVar3 != 10);
 uVar1 = array_2d_stack(local_398);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 puVar8 = local_208;
 do {
 iVar3 = 0;
 puVar5 = puVar8;
 do {
 *puVar5 = 1;
 puVar5[1] = 1;
 puVar5[2] = 1;
 puVar5[3] = 1;
 puVar5[4] = 1;
 iVar3 = iVar3 + 1;
 puVar5 = puVar5 + 5;
 } while (iVar3 != 5);
 puVar8 = puVar8 + 0x19;
 } while (puVar8 != &uStack_14);
 uVar1 = array_3d(local_208);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",uVar1);
 local_528 = 10;
 local_524 = 0x14;
 local_520 = 0x1e;
 uVar1 = array_vla(3,&local_528);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",uVar1);
 local_460[0] = 0;
 local_438 = 10;
 local_410 = 0x14;
 local_3e8 = 0x1e;
 local_3c0 = 0x28;
 uVar1 = array_pointer(local_460,5);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_534 = 10;
 local_530 = 0x14;
 local_52c = 0x1e;
 uStack_4e0 = 0;
 local_4e8 = 0;
 uStack_4d0 = 0;
 uStack_4d8 = 0;
 uStack_4c0 = 0;
 local_4c8 = 0;
 local_4b8 = 0;
 local_500 = &local_534;
 local_4f8 = &local_530;
 local_4f0 = &local_52c;
 uVar1 = pointer_array(&local_500,3);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",uVar1);
 iVar3 = 0;
 piVar6 = aiStack_4b0;
 do {
 *piVar6 = iVar3;
 iVar3 = iVar3 + 1;
 piVar6 = piVar6 + 1;
 } while (iVar3 != 0x14);
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",local_46c);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: ptr_single @ 0x100f54
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x100f60
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x100f70
int ptr_triple(unsigned long long *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x100f84
int ptr_increment(int *param_1,uint param_2)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 piVar2 = param_1;
 do {
 piVar3 = piVar2 + 1;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while (piVar3 != param_1 + param_2);
 }
 return iVar1;
}

// Function: ptr_offset @ 0x100fb4
unsigned int ptr_offset(long param_1,int param_2)
{
 return *(unsigned int *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x100fbc
unsigned long ptr_diff(long param_1,long param_2)
{
 return (unsigned long)(param_1 - param_2) >> 2 & 0xffffffff;
}

// Function: ptr_void @ 0x100fc8
uint ptr_void(uint *param_1,int param_2)
{
 uint uVar1;
 if (param_2 == 0) {
 uVar1 = *param_1;
 }
 else if (param_2 == 1) {
 uVar1 = (uint)*(byte *)param_1;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: ptr_const @ 0x100fec
int ptr_const(int *param_1)
{
 return *param_1 << 1;
}

// Function: ptr_const_ptr @ 0x100ff8
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x10100c
void ptr_func_simple(void *param_1,unsigned int param_2)
{
 ((void (*)(unsigned int))param_1)(param_2);
 return;
}

// Function: ptr_func_complex @ 0x101028
void ptr_func_complex(void *param_1,unsigned long long param_2)
{
 unsigned long long uVar1;
 char *local_18;
 unsigned long long local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_18 = &DAT_00102f18;
 local_10 = 0;
 uVar1 = (*param_1)(param_2,&local_18,param_1,0);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: ptr_cast @ 0x10108c
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x101094
long opaque_handle_create(int param_1)
{
 return (long)param_1;
}

// Function: opaque_handle_op @ 0x10109c
int opaque_handle_op(int param_1)
{
 return param_1 << 1;
}

// Function: test_pointer_types @ 0x1010a4
void test_pointer_types(void)
{
 unsigned int uVar1;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int *local_30;
 unsigned int **local_28;
 unsigned long long local_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(&DAT_00102f20);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 local_38 = 5;
 local_30 = &local_38;
 local_28 = &local_30;
 uVar1 = ptr_triple(&local_28);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",uVar1);
 local_20 = 0x200000001;
 uStack_18 = 0x400000003;
 local_10 = 5;
 uVar1 = ptr_increment(&local_20,5);
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 uVar1 = ptr_func_simple((void *)double_value,5);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
 local_34 = 5;
 uVar1 = ptr_func_complex(complex_callback,&local_34);
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: struct_simple @ 0x101280
int struct_simple(int *param_1)
{
 return *param_1 + param_1[1] + param_1[2];
}

// Function: struct_array @ 0x101298
int struct_array(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 piVar1 = param_1 + (unsigned long)(param_2 - 1) * 3 + 3;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1 + param_1[1] + param_1[2];
 param_1 = param_1 + 3;
 } while (param_1 != piVar1);
 }
 return iVar2;
}

// Function: struct_nested @ 0x1012e8
int struct_nested(int *param_1)
{
 return *param_1 + param_1[3];
}

// Function: struct_deep @ 0x1012f8
int struct_deep(long param_1)
{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}

// Function: struct_with_ptr @ 0x101308
int struct_with_ptr(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 iVar1 = **(int **)(param_1 + 2);
 }
 return *param_1 + iVar1;
}

// Function: struct_bitfields @ 0x101324
int struct_bitfields(uint *param_1)
{
 uint uVar1;
 uVar1 = *param_1;
 return (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7) + (uVar1 >> 6 & 0x3ff);
}

// Function: union_type @ 0x101348
float union_type(float *param_1,int param_2)
{
 float fVar1;
 if (param_2 == 0) {
 fVar1 = *param_1;
 }
 else if (param_2 == 1) {
 fVar1 = (float)(int)*param_1;
 }
 else {
 fVar1 = (float)(uint)*(byte *)param_1;
 }
 return fVar1;
}

// Function: union_array @ 0x101370
int union_array(long param_1,int param_2)
{
 int iVar1;
 long lVar2;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_2);
 }
 return iVar1;
}

// Function: enum_type @ 0x1013a4
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x1013b0
unsigned int enum_switch(uint param_1)
{
 unsigned int uVar1;
 if (param_1 == 2) {
 uVar1 = 0x32;
 }
 else if (param_1 < 3) {
 uVar1 = 100;
 if (param_1 == 0) {
 uVar1 = 0;
 }
 }
 else {
 uVar1 = 0xffffff9d;
 if (param_1 == 3) {
 uVar1 = 0xffffffff;
 }
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x1013e8
void struct_func_ptr(unsigned int *param_1)
{
 (**(void **)(param_1 + 2))(*param_1);
 return;
}

// Function: linked_list @ 0x101404
int linked_list(int *param_1)
{
 int iVar1;
 if (param_1 == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = *(int **)(param_1 + 2);
 } while (param_1 != (int *)0x0);
 }
 return iVar1;
}

// Function: doubly_linked_list @ 0x10142c
int doubly_linked_list(int *param_1)
{
 int iVar1;
 if (param_1 == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = *(int **)(param_1 + 2);
 } while (param_1 != (int *)0x0);
 }
 return iVar1;
}

// Function: binary_tree_sum @ 0x101454
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_1 != (int *)0x0) {
 iVar2 = binary_tree_sum(*(unsigned long long *)(param_1 + 2));
 iVar1 = *param_1;
 iVar3 = binary_tree_sum(*(unsigned long long *)(param_1 + 4));
 return iVar2 + iVar1 + iVar3;
 }
 return 0;
}

// Function: binary_tree @ 0x101498
void binary_tree(void)
{
 binary_tree_sum();
 return;
}

// Function: graph_traverse @ 0x1014ac
int graph_traverse(long param_1)
{
 int iVar1;
 int *piVar2;
 long lVar3;
 if (*(int *)(param_1 + 0x50) < 1) {
 iVar1 = 0;
 }
 else {
 lVar3 = 0;
 iVar1 = 0;
 do {
 for (piVar2 = *(int **)(param_1 + lVar3 * 8); piVar2 != (int *)0x0;
 piVar2 = *(int **)(piVar2 + 2)) {
 iVar1 = iVar1 + *piVar2;
 }
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < *(int *)(param_1 + 0x50));
 }
 return iVar1;
}

// Function: test_composite_types @ 0x1014f4
void test_composite_types(void)
{
 unsigned int uVar1;
 unsigned long local_158;
 unsigned int local_150;
 unsigned int local_14c;
 unsigned int local_148;
 unsigned int local_140 [2];
 unsigned long long local_138;
 unsigned int local_130 [2];
 unsigned int *local_128;
 unsigned int local_120 [2];
 void *local_118;
 unsigned int local_110 [2];
 unsigned long long local_108;
 unsigned int local_100 [2];
 unsigned long long local_f8;
 unsigned long long local_f0;
 unsigned long long local_e8;
 unsigned int local_e0;
 unsigned long long local_d8;
 unsigned long long uStack_d0;
 unsigned long long local_c8;
 unsigned int local_c0 [2];
 unsigned int *local_b8;
 unsigned int local_b0 [2];
 unsigned int *local_a8;
 unsigned int local_a0 [2];
 unsigned long long local_98;
 unsigned int local_90 [2];
 unsigned int *local_88;
 unsigned long long local_80;
 unsigned int local_78 [2];
 unsigned long long local_70;
 unsigned int *local_68;
 unsigned int *local_60;
 unsigned long long local_58;
 unsigned long long uStack_50;
 unsigned long long uStack_48;
 unsigned long long uStack_40;
 unsigned long long local_38;
 unsigned long long uStack_30;
 unsigned long long uStack_28;
 unsigned long long uStack_20;
 unsigned long long local_18;
 unsigned long long uStack_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(&DAT_001030f8);
 local_150 = 1;
 local_14c = 2;
 local_148 = 3;
 uVar1 = struct_simple(&local_150);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",uVar1);
 local_d8 = 0x100000001;
 uStack_d0 = 0x200000001;
 local_c8 = 0x200000002;
 uVar1 = struct_array(&local_d8,2);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 local_140[0] = 0x14;
 local_138 = 0;
 local_130[0] = 10;
 local_128 = local_140;
 uVar1 = struct_with_ptr(local_130);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_158 = local_158 & 0xfff00000ffff0000 | 0x191d;
 uVar1 = struct_bitfields(&local_158);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 local_e8 = 0x140000000a;
 local_e0 = 0x1e;
 uVar1 = union_array(&local_e8,3);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 local_120[0] = 10;
 local_118 = process_int;
 uVar1 = struct_func_ptr(local_120);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
 local_c0[0] = 10;
 local_b8 = local_b0;
 local_b0[0] = 0x14;
 local_a8 = local_a0;
 local_a0[0] = 0x1e;
 local_98 = 0;
 uVar1 = linked_list(local_c0);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",uVar1);
 local_90[0] = 10;
 local_68 = local_90;
 local_88 = local_78;
 local_80 = 0;
 local_78[0] = 0x14;
 local_70 = 0;
 uVar1 = doubly_linked_list();
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_100[0] = 100;
 local_f8 = 0;
 local_f0 = 0;
 uVar1 = binary_tree_sum(local_100);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_110[0] = 1;
 local_108 = 0;
 uStack_50 = 0;
 local_58 = 0;
 uStack_40 = 0;
 uStack_48 = 0;
 uStack_30 = 0;
 local_38 = 0;
 uStack_20 = 0;
 uStack_28 = 0;
 local_18 = 0;
 local_60 = local_110;
 uStack_10 = 2;
 uVar1 = graph_traverse(&local_60);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",uVar1);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: main @ 0x1017f8
unsigned long long main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

// Function: FUN_0010181c @ 0x10181c
unsigned long FUN_0010181c(unsigned long param_1,unsigned long param_2)
{
 unsigned long uVar1;
 unsigned long uVar2;
 bool bVar3;
 bool bVar4;
 int iVar5;
 uint uVar6;
 long lVar7;
 unsigned long uVar8;
 unsigned long uVar9;
 unsigned long uVar10;
 unsigned long uVar11;
 unsigned long uVar12;
 unsigned long uVar13;
 long lVar14;
 unsigned long uVar15;
 unsigned long uVar16;
 unsigned long uVar17;
 unsigned long uVar18;
 unsigned long uVar19;
 unsigned long uVar20;
 unsigned long uVar21;
 unsigned long in_register_00005008;
 unsigned long in_register_00005028;
 uVar10 = fpcr;
 uVar1 = (in_register_00005008 & 0xffffffffffff) << 3;
 lVar14 = -((long)in_register_00005008 >> 0x3f);
 lVar7 = -((long)in_register_00005028 >> 0x3f);
 uVar13 = in_register_00005028 << 3;
 uVar2 = uVar13 & 0x7fffffffffff8;
 uVar21 = uVar1 | param_1 >> 0x3d;
 uVar17 = in_register_00005008 >> 0x30 & 0x7fff;
 uVar15 = in_register_00005028 >> 0x30 & 0x7fff;
 uVar12 = uVar2 | param_2 >> 0x3d;
 uVar18 = param_1 * 8;
 uVar20 = param_2 * 8;
 uVar19 = uVar18;
 uVar9 = uVar21;
 if ((long)in_register_00005028 >> 0x3f == (long)in_register_00005008 >> 0x3f) {
 uVar6 = (int)uVar17 - (int)uVar15;
 uVar8 = (unsigned long)uVar6;
 if ((int)uVar6 < 1) {
 if (uVar6 == 0) {
 uVar11 = uVar17 + 1;
 if ((uVar11 & 0x7ffe) == 0) {
 uVar11 = uVar21 | uVar18;
 if (uVar17 != 0) {
 uVar6 = 0;
 if (uVar17 == 0x7fff) {
 if (uVar11 == 0) {
 if (uVar15 != 0x7fff) goto LAB_00102110;
 if ((uVar12 | uVar20) == 0) {
 return 0;
 }
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar6 = (uint)uVar8;
 if (uVar15 != 0x7fff) goto LAB_001022b8;
 if ((uVar12 | uVar20) == 0) goto LAB_00102350;
 }
LAB_0010237c:
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar11 != 0) {
LAB_001022c0:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101d04;
 }
LAB_00102110:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 else {
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) != 0) goto LAB_0010237c;
 if (uVar11 == 0) {
 return 0;
 }
 }
 else {
 if (uVar11 == 0) goto LAB_00102110;
LAB_001022b8:
 if ((uVar12 | uVar20) != 0) goto LAB_001022c0;
 }
LAB_00102350:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 }
 goto LAB_00101d04;
 }
 if (uVar11 == 0) {
 uVar19 = uVar20;
 uVar9 = uVar12;
 if ((uVar12 | uVar20) == 0) {
 param_1 = 0;
 goto LAB_001019b8;
 }
 goto LAB_00102088;
 }
 if ((uVar12 | uVar20) == 0) goto LAB_00102088;
 uVar19 = uVar18 + uVar20;
 uVar9 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 if ((uVar9 >> 0x33 & 1) != 0) {
 uVar9 = uVar9 & 0xfff7ffffffffffff;
 uVar12 = 0;
 bVar3 = false;
 uVar11 = 1;
 goto LAB_0010196c;
 }
LAB_00101958:
 lVar7 = lVar14;
 uVar18 = uVar19 | uVar9;
 goto joined_r0x00101aac;
 }
 if (uVar11 != 0x7fff) {
 uVar19 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 bVar3 = false;
 uVar12 = uVar18 + uVar20 >> 1 & 7;
 uVar9 = uVar19 >> 1;
 uVar19 = uVar18 + uVar20 >> 1 | uVar19 << 0x3f;
 goto LAB_0010196c;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) goto LAB_001020b4;
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) goto LAB_00102360;
 if (uVar19 != 0x800000) goto LAB_00102024;
 if (lVar14 == 0) goto LAB_001022fc;
LAB_001021c8:
 uVar8 = 0x14;
 }
 else {
 uVar17 = uVar15;
 if (uVar17 == 0) {
 if ((uVar21 | uVar18) == 0) {
 uVar19 = uVar20;
 uVar9 = uVar12;
 lVar7 = lVar14;
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = uVar2 >> 0x32 ^ 1;
 goto LAB_00101b40;
 }
 goto LAB_00101df4;
 }
 goto LAB_00101a9c;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_00101c58;
 }
 }
 else {
 uVar6 = -uVar6;
 uVar21 = uVar21 | 0x8000000000000;
 }
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) == 0) {
 return 0;
 }
 uVar8 = uVar2 >> 0x32 ^ 1;
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 goto LAB_00101d04;
 }
 if ((int)uVar6 < 0x75) {
 if ((int)uVar6 < 0x40) {
 uVar19 = uVar21 << ((unsigned long)(0x40 - uVar6) & 0x3f) | uVar18 >> ((unsigned long)uVar6 & 0x3f) |
 (unsigned long)(uVar18 << ((unsigned long)(0x40 - uVar6) & 0x3f) != 0);
 uVar12 = uVar12 + (uVar21 >> ((unsigned long)uVar6 & 0x3f));
 }
 else {
 uVar19 = uVar18 | uVar21 << ((unsigned long)(0x80 - uVar6) & 0x3f);
 if (uVar6 - 0x40 == 0) {
 uVar19 = uVar18;
 }
 uVar19 = (unsigned long)(uVar19 != 0) | uVar21 >> ((unsigned long)(uVar6 - 0x40) & 0x3f);
 }
 }
 else {
 uVar19 = (unsigned long)((uVar21 | uVar18) != 0);
 }
 uVar18 = uVar19 + uVar20;
 if (CARRY8(uVar19,uVar20)) {
 uVar12 = uVar12 + 1;
 }
LAB_00101c58:
 uVar15 = uVar17;
 uVar19 = uVar18;
 uVar9 = uVar12;
 lVar7 = lVar14;
 if ((uVar12 >> 0x33 & 1) == 0) goto LAB_00101a9c;
 uVar11 = uVar17 + 1;
 if (uVar11 != 0x7fff) {
 bVar3 = false;
 uVar19 = uVar18 & 1 | uVar18 >> 1 | uVar12 << 0x3f;
 uVar9 = (uVar12 & 0xfff7ffffffffffff) >> 1;
 uVar12 = uVar18 & 1 | uVar18 >> 1 & 7;
 goto LAB_0010196c;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) {
LAB_001020b4:
 uVar8 = 0x14;
 goto LAB_00101bac;
 }
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) {
LAB_00102360:
 uVar8 = 0x14;
 goto LAB_00101bac;
 }
 if (uVar19 == 0x800000) {
 if (lVar14 != 0) goto LAB_001021c8;
LAB_001022fc:
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto LAB_0010199c;
 }
LAB_00102024:
 uVar6 = 0x14;
 if ((uVar10 & 0xc00000) == 0x400000) {
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 bVar3 = false;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto joined_r0x00102044;
 }
LAB_00101b68:
 uVar10 = uVar10 & 0xc00000;
 if (uVar10 != 0) {
 if (uVar10 == 0x400000) {
 if (lVar14 != 0) goto LAB_00101b84;
 }
 else if (((uint)(uVar10 == 0x800000) & (uint)lVar14) == 0) {
LAB_00101b84:
 param_1 = 0xffffffffffffffff;
 uVar8 = (unsigned long)(uVar6 | 0x14);
 goto LAB_001019b8;
 }
 }
 uVar8 = (unsigned long)(uVar6 | 0x14);
 }
LAB_00101bac:
 param_1 = 0;
 goto LAB_00101bc0;
 }
 if (uVar15 == 0) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = (unsigned long)(uVar6 - 1);
 if (uVar6 - 1 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_00101c58;
 }
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 goto LAB_00101b34;
 }
 goto LAB_00101a30;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 != 0x7fff) goto LAB_00101a9c;
 if ((uVar21 | uVar18) == 0) goto LAB_00101df4;
 uVar8 = (unsigned long)((uint)(uVar1 >> 0x32) ^ 1);
 uVar20 = uVar18;
 uVar12 = uVar21;
LAB_00101b40:
 uVar11 = 0x7fff;
 goto LAB_00101b48;
 }
 uVar12 = uVar12 | 0x8000000000000;
 if (uVar17 != 0x7fff) {
LAB_00101a30:
 iVar5 = (int)uVar8;
 if (iVar5 < 0x75) {
 if (iVar5 < 0x40) {
 uVar19 = uVar12 << ((unsigned long)(0x40 - iVar5) & 0x3f) | uVar20 >> (uVar8 & 0x3f) |
 (unsigned long)(uVar20 << ((unsigned long)(0x40 - iVar5) & 0x3f) != 0);
 uVar12 = uVar21 + (uVar12 >> (uVar8 & 0x3f));
 }
 else {
 uVar19 = uVar20 | uVar12 << ((unsigned long)(0x80 - iVar5) & 0x3f);
 if (iVar5 - 0x40U == 0) {
 uVar19 = uVar20;
 }
 uVar19 = (unsigned long)(uVar19 != 0) | uVar12 >> ((unsigned long)(iVar5 - 0x40U) & 0x3f);
 uVar12 = uVar21;
 }
 }
 else {
 uVar19 = (unsigned long)((uVar12 | uVar20) != 0);
 uVar12 = uVar21;
 }
 uVar18 = uVar19 + uVar18;
 if (CARRY8(uVar19,uVar18)) {
 uVar12 = uVar12 + 1;
 }
 goto LAB_00101c58;
 }
LAB_00101ce4:
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar19 = in_register_00005008 & 0xffffffffffff;
LAB_00101d04:
 if ((uVar19 | param_1) == 0) {
 param_1 = 0;
 }
 }
 else {
 uVar6 = (int)uVar17 - (int)uVar15;
 uVar8 = (unsigned long)uVar6;
 if ((int)uVar6 < 1) {
 if (uVar6 != 0) {
 if (uVar17 == 0) {
 if ((uVar21 | uVar18) == 0) {
 uVar19 = uVar20;
 uVar9 = uVar12;
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = uVar2 >> 0x32 ^ 1;
 goto LAB_00101b40;
 }
 goto LAB_00101df4;
 }
 goto LAB_00101a9c;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 goto LAB_001018ec;
 }
 }
 else {
 uVar6 = -uVar6;
 uVar21 = uVar21 | 0x8000000000000;
 }
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) == 0) {
 return 0;
 }
 uVar8 = uVar2 >> 0x32 ^ 1;
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 goto LAB_00101d04;
 }
 if ((int)uVar6 < 0x75) {
 if ((int)uVar6 < 0x40) {
 uVar18 = uVar21 << ((unsigned long)(0x40 - uVar6) & 0x3f) | uVar18 >> ((unsigned long)uVar6 & 0x3f) |
 (unsigned long)(uVar18 << ((unsigned long)(0x40 - uVar6) & 0x3f) != 0);
 uVar12 = uVar12 - (uVar21 >> ((unsigned long)uVar6 & 0x3f));
 }
 else {
 uVar19 = uVar18 | uVar21 << ((unsigned long)(0x80 - uVar6) & 0x3f);
 if (uVar6 - 0x40 == 0) {
 uVar19 = uVar18;
 }
 uVar18 = (unsigned long)(uVar19 != 0) | uVar21 >> ((unsigned long)(uVar6 - 0x40) & 0x3f);
 }
 }
 else {
 uVar18 = (unsigned long)((uVar21 | uVar18) != 0);
 }
 uVar19 = uVar20 - uVar18;
 uVar9 = uVar12 - (uVar20 < uVar18);
 goto LAB_001018ec;
 }
 if ((uVar17 + 1 & 0x7ffe) != 0) {
 uVar19 = uVar18 + param_2 * -8;
 uVar13 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar13 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar13) == 0) {
 param_1 = 0;
 goto LAB_001019b8;
 }
 }
 else {
 uVar19 = uVar20 + param_1 * -8;
 uVar13 = uVar12 - (uVar21 + (uVar20 < uVar18));
 lVar14 = lVar7;
 }
 goto LAB_001018f4;
 }
 uVar16 = uVar21 | uVar18;
 uVar11 = uVar12 | uVar20;
 if (uVar17 != 0) {
 if (uVar17 == 0x7fff) {
 if (uVar16 == 0) {
 if (uVar15 != 0x7fff) goto LAB_00101fc8;
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 if (uVar15 != 0x7fff) goto LAB_00101f98;
 }
LAB_00102210:
 if (uVar11 != 0) {
 uVar6 = (uint)uVar8;
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar16 == 0) {
LAB_0010228c:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 goto LAB_00101d04;
 }
LAB_00102228:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101d04;
 }
 if (uVar16 != 0) goto LAB_00101f98;
 }
 else {
 if (uVar15 == 0x7fff) goto LAB_00102210;
 if (uVar16 != 0) {
LAB_00101f98:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if (uVar11 == 0) goto LAB_00101d04;
 goto LAB_00102228;
 }
LAB_00101fc8:
 if (uVar11 != 0) goto LAB_0010228c;
 }
 param_1 = 0xffffffffffffffff;
 uVar8 = 1;
 goto LAB_001019b8;
 }
 if (uVar16 != 0) {
 if (uVar11 == 0) goto LAB_00102088;
 uVar19 = uVar18 + param_2 * -8;
 uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar9 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar9) != 0) {
 uVar12 = 0;
 bVar3 = true;
 uVar11 = uVar17;
 goto LAB_0010196c;
 }
 goto LAB_00102160;
 }
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 uVar18 = uVar19 | uVar9;
 goto joined_r0x00101aac;
 }
 uVar19 = uVar20;
 uVar9 = uVar12;
 lVar14 = lVar7;
 if (uVar11 == 0) {
LAB_00102160:
 param_1 = 0;
 goto LAB_001019b8;
 }
LAB_00102088:
 uVar18 = 0;
 uVar11 = 0;
LAB_00102090:
 uVar8 = 0;
 if (((uint)uVar10 >> 0xb & 1) != 0) {
 uVar8 = 8;
 }
LAB_00101998:
 uVar20 = uVar19;
 uVar12 = uVar9;
 if (uVar18 == 0) {
LAB_00101b48:
 param_1 = uVar20 >> 3 | uVar12 << 0x3d;
 uVar19 = uVar12 >> 3;
 if (uVar11 == 0x7fff) goto LAB_00101d04;
 }
 else {
LAB_0010199c:
 uVar6 = (uint)uVar8;
 if (uVar11 == 0x7ffe) goto LAB_00101b68;
 param_1 = uVar19 >> 3 | uVar9 << 0x3d;
 }
 }
 else {
 if (uVar15 == 0) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = (unsigned long)(uVar6 - 1);
 if (uVar6 - 1 == 0) {
 uVar19 = uVar18 + param_2 * -8;
 uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
 uVar15 = uVar17;
 lVar7 = lVar14;
 goto LAB_001018ec;
 }
 goto LAB_00101898;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) != 0) {
LAB_00101b34:
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar20 = uVar18;
 uVar12 = uVar21;
 goto LAB_00101b40;
 }
LAB_00101df4:
 uVar8 = 0;
 uVar19 = 0;
 param_1 = 0;
 goto LAB_00101d04;
 }
 }
 else {
 uVar12 = uVar12 | 0x8000000000000;
LAB_00101898:
 if (uVar17 == 0x7fff) goto LAB_00101ce4;
 iVar5 = (int)uVar8;
 if (iVar5 < 0x75) {
 if (iVar5 < 0x40) {
 uVar9 = uVar12 << ((unsigned long)(0x40 - iVar5) & 0x3f) | uVar20 >> (uVar8 & 0x3f) |
 (unsigned long)(uVar20 << ((unsigned long)(0x40 - iVar5) & 0x3f) != 0);
 uVar21 = uVar21 - (uVar12 >> (uVar8 & 0x3f));
 }
 else {
 uVar19 = uVar20 | uVar12 << ((unsigned long)(0x80 - iVar5) & 0x3f);
 if (iVar5 - 0x40U == 0) {
 uVar19 = uVar20;
 }
 uVar9 = (unsigned long)(uVar19 != 0) | uVar12 >> ((unsigned long)(iVar5 - 0x40U) & 0x3f);
 }
 }
 else {
 uVar9 = (unsigned long)((uVar12 | uVar20) != 0);
 }
 uVar19 = uVar18 - uVar9;
 uVar9 = uVar21 - (uVar18 < uVar9);
 uVar15 = uVar17;
 lVar7 = lVar14;
LAB_001018ec:
 uVar13 = uVar9 & 0x7ffffffffffff;
 uVar17 = uVar15;
 lVar14 = lVar7;
 if ((uVar9 >> 0x33 & 1) != 0) {
LAB_001018f4:
 if (uVar13 == 0) {
 uVar12 = uVar19 | uVar19 >> 1;
 uVar12 = uVar12 | uVar12 >> 2;
 uVar12 = uVar12 | uVar12 >> 4;
 uVar12 = uVar12 | uVar12 >> 8;
 uVar12 = uVar12 | uVar12 >> 0x10;
 uVar12 = uVar12 | uVar12 >> 0x20;
 uVar12 = ((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar12 & 0x5555555555555555);
 uVar12 = ((uVar12 & 0xcccccccccccccccc) >> 2) + (uVar12 & 0x3333333333333333);
 uVar12 = ((uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar12 & 0xf0f0f0f0f0f0f0f);
 uVar12 = ((uVar12 & 0xff00ff00ff00ff00) >> 8) + (uVar12 & 0xff00ff00ff00ff);
 lVar7 = ((uVar12 & 0xffff0000ffff0000) >> 0x10) + (uVar12 & 0xffff0000ffff);
 iVar5 = -((int)((unsigned long)lVar7 >> 0x20) + (int)lVar7);
 uVar6 = iVar5 + 0x74;
 if ((int)uVar6 < 0x40) goto LAB_00101900;
 uVar18 = uVar19 << ((unsigned long)(iVar5 + 0x34) & 0x3f);
 uVar12 = 0;
 }
 else {
 uVar12 = uVar13 | uVar13 >> 1;
 uVar12 = uVar12 | uVar12 >> 2;
 uVar12 = uVar12 | uVar12 >> 4;
 uVar12 = uVar12 | uVar12 >> 8;
 uVar12 = uVar12 | uVar12 >> 0x10;
 uVar12 = uVar12 | uVar12 >> 0x20;
 uVar12 = ((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar12 & 0x5555555555555555);
 uVar12 = ((uVar12 & 0xcccccccccccccccc) >> 2) + (uVar12 & 0x3333333333333333);
 uVar12 = ((uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar12 & 0xf0f0f0f0f0f0f0f);
 uVar12 = ((uVar12 & 0xff00ff00ff00ff00) >> 8) + (uVar12 & 0xff00ff00ff00ff);
 lVar7 = ((uVar12 & 0xffff0000ffff0000) >> 0x10) + (uVar12 & 0xffff0000ffff);
 uVar6 = 0x34 - ((int)((unsigned long)lVar7 >> 0x20) + (int)lVar7);
LAB_00101900:
 uVar12 = uVar19 << ((unsigned long)uVar6 & 0x3f);
 uVar18 = uVar19 >> ((unsigned long)-uVar6 & 0x3f) | uVar13 << ((unsigned long)uVar6 & 0x3f);
 }
 lVar7 = lVar14;
 if ((long)uVar17 <= (long)(int)uVar6) {
 iVar5 = uVar6 - (int)uVar17;
 uVar6 = iVar5 + 1;
 if ((int)uVar6 < 0x40) {
 uVar9 = uVar18 >> ((unsigned long)uVar6 & 0x3f);
 uVar19 = uVar18 << ((unsigned long)(0x40 - uVar6) & 0x3f) | uVar12 >> ((unsigned long)uVar6 & 0x3f) |
 (unsigned long)(uVar12 << ((unsigned long)(0x40 - uVar6) & 0x3f) != 0);
 goto LAB_00101958;
 }
 uVar19 = uVar12 | uVar18 << ((unsigned long)(0x80 - uVar6) & 0x3f);
 if (uVar6 == 0x40) {
 uVar19 = uVar12;
 }
 uVar9 = 0;
 uVar19 = (unsigned long)(uVar19 != 0) | uVar18 >> ((unsigned long)(iVar5 - 0x3f) & 0x3f);
 uVar18 = uVar19;
 goto joined_r0x00101aac;
 }
 uVar15 = uVar17 - (long)(int)uVar6;
 uVar19 = uVar12;
 uVar9 = uVar18 & 0xfff7ffffffffffff;
 }
 }
LAB_00101a9c:
 uVar12 = uVar19 & 7;
 bVar3 = false;
 uVar11 = uVar15;
 lVar14 = lVar7;
 uVar18 = uVar19 | uVar9;
 if (uVar15 != 0) {
LAB_0010196c:
 if (uVar12 == 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0;
 if (bVar3) goto LAB_00102090;
 }
 else {
 uVar12 = uVar10 & 0xc00000;
 if (uVar12 == 0x400000) {
 uVar8 = 0x10;
joined_r0x00102044:
 if (lVar14 == 0) {
LAB_00101c94:
 bVar4 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar4) {
 uVar9 = uVar9 + 1;
 }
 }
 }
 else if (uVar12 == 0x800000) {
 uVar8 = 0x10;
 if (lVar14 != 0) goto LAB_00101c94;
 }
 else {
 if (uVar12 != 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0x10;
 if (bVar3) {
 uVar8 = 0x18;
 }
 goto LAB_00101998;
 }
 uVar8 = 0x10;
 if (((uVar19 & 0xf) != 4) &&
 (bVar4 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar4)) {
 uVar9 = uVar9 + 1;
 }
 }
 uVar18 = uVar9 & 0x8000000000000;
 if (bVar3) {
 uVar8 = (unsigned long)((uint)uVar8 | 8);
 }
 }
 goto LAB_00101998;
 }
joined_r0x00101aac:
 if (uVar18 != 0) {
 uVar12 = uVar19 & 7;
 bVar3 = true;
 uVar11 = 0;
 lVar14 = lVar7;
 goto LAB_0010196c;
 }
 param_1 = 0;
 uVar8 = 0;
 }
 }
LAB_001019b8:
 if ((int)uVar8 == 0) {
 return param_1;
 }
LAB_00101bc0:
 __sfp_handle_exceptions(uVar8);
 return param_1;
}

// Function: __addtf3 @ 0x101820
unsigned long __addtf3(unsigned long param_1,unsigned long param_2)
{
 unsigned long uVar1;
 unsigned long uVar2;
 bool bVar3;
 bool bVar4;
 int iVar5;
 uint uVar6;
 long lVar7;
 unsigned long uVar8;
 unsigned long uVar9;
 unsigned long uVar10;
 unsigned long uVar11;
 unsigned long uVar12;
 unsigned long uVar13;
 long lVar14;
 unsigned long uVar15;
 unsigned long uVar16;
 unsigned long uVar17;
 unsigned long uVar18;
 unsigned long uVar19;
 unsigned long uVar20;
 unsigned long uVar21;
 unsigned long in_register_00005008;
 unsigned long in_register_00005028;
 uVar10 = fpcr;
 uVar1 = (in_register_00005008 & 0xffffffffffff) << 3;
 lVar14 = -((long)in_register_00005008 >> 0x3f);
 lVar7 = -((long)in_register_00005028 >> 0x3f);
 uVar13 = in_register_00005028 << 3;
 uVar2 = uVar13 & 0x7fffffffffff8;
 uVar21 = uVar1 | param_1 >> 0x3d;
 uVar17 = in_register_00005008 >> 0x30 & 0x7fff;
 uVar15 = in_register_00005028 >> 0x30 & 0x7fff;
 uVar12 = uVar2 | param_2 >> 0x3d;
 uVar18 = param_1 * 8;
 uVar20 = param_2 * 8;
 uVar19 = uVar18;
 uVar9 = uVar21;
 if ((long)in_register_00005028 >> 0x3f == (long)in_register_00005008 >> 0x3f) {
 uVar6 = (int)uVar17 - (int)uVar15;
 uVar8 = (unsigned long)uVar6;
 if ((int)uVar6 < 1) {
 if (uVar6 == 0) {
 uVar11 = uVar17 + 1;
 if ((uVar11 & 0x7ffe) == 0) {
 uVar11 = uVar21 | uVar18;
 if (uVar17 != 0) {
 uVar6 = 0;
 if (uVar17 == 0x7fff) {
 if (uVar11 == 0) {
 if (uVar15 != 0x7fff) goto LAB_00102110;
 if ((uVar12 | uVar20) == 0) {
 return 0;
 }
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar6 = (uint)uVar8;
 if (uVar15 != 0x7fff) goto LAB_001022b8;
 if ((uVar12 | uVar20) == 0) goto LAB_00102350;
 }
LAB_0010237c:
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar11 != 0) {
LAB_001022c0:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101d04;
 }
LAB_00102110:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 else {
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) != 0) goto LAB_0010237c;
 if (uVar11 == 0) {
 return 0;
 }
 }
 else {
 if (uVar11 == 0) goto LAB_00102110;
LAB_001022b8:
 if ((uVar12 | uVar20) != 0) goto LAB_001022c0;
 }
LAB_00102350:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 }
 goto LAB_00101d04;
 }
 if (uVar11 == 0) {
 uVar19 = uVar20;
 uVar9 = uVar12;
 if ((uVar12 | uVar20) == 0) {
 param_1 = 0;
 goto LAB_001019b8;
 }
 goto LAB_00102088;
 }
 if ((uVar12 | uVar20) == 0) goto LAB_00102088;
 uVar19 = uVar18 + uVar20;
 uVar9 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 if ((uVar9 >> 0x33 & 1) != 0) {
 uVar9 = uVar9 & 0xfff7ffffffffffff;
 uVar12 = 0;
 bVar3 = false;
 uVar11 = 1;
 goto LAB_0010196c;
 }
LAB_00101958:
 lVar7 = lVar14;
 uVar18 = uVar19 | uVar9;
 goto joined_r0x00101aac;
 }
 if (uVar11 != 0x7fff) {
 uVar19 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 bVar3 = false;
 uVar12 = uVar18 + uVar20 >> 1 & 7;
 uVar9 = uVar19 >> 1;
 uVar19 = uVar18 + uVar20 >> 1 | uVar19 << 0x3f;
 goto LAB_0010196c;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) goto LAB_001020b4;
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) goto LAB_00102360;
 if (uVar19 != 0x800000) goto LAB_00102024;
 if (lVar14 == 0) goto LAB_001022fc;
LAB_001021c8:
 uVar8 = 0x14;
 }
 else {
 uVar17 = uVar15;
 if (uVar17 == 0) {
 if ((uVar21 | uVar18) == 0) {
 uVar19 = uVar20;
 uVar9 = uVar12;
 lVar7 = lVar14;
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = uVar2 >> 0x32 ^ 1;
 goto LAB_00101b40;
 }
 goto LAB_00101df4;
 }
 goto LAB_00101a9c;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_00101c58;
 }
 }
 else {
 uVar6 = -uVar6;
 uVar21 = uVar21 | 0x8000000000000;
 }
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) == 0) {
 return 0;
 }
 uVar8 = uVar2 >> 0x32 ^ 1;
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 goto LAB_00101d04;
 }
 if ((int)uVar6 < 0x75) {
 if ((int)uVar6 < 0x40) {
 uVar19 = uVar21 << ((unsigned long)(0x40 - uVar6) & 0x3f) | uVar18 >> ((unsigned long)uVar6 & 0x3f) |
 (unsigned long)(uVar18 << ((unsigned long)(0x40 - uVar6) & 0x3f) != 0);
 uVar12 = uVar12 + (uVar21 >> ((unsigned long)uVar6 & 0x3f));
 }
 else {
 uVar19 = uVar18 | uVar21 << ((unsigned long)(0x80 - uVar6) & 0x3f);
 if (uVar6 - 0x40 == 0) {
 uVar19 = uVar18;
 }
 uVar19 = (unsigned long)(uVar19 != 0) | uVar21 >> ((unsigned long)(uVar6 - 0x40) & 0x3f);
 }
 }
 else {
 uVar19 = (unsigned long)((uVar21 | uVar18) != 0);
 }
 uVar18 = uVar19 + uVar20;
 if (CARRY8(uVar19,uVar20)) {
 uVar12 = uVar12 + 1;
 }
LAB_00101c58:
 uVar15 = uVar17;
 uVar19 = uVar18;
 uVar9 = uVar12;
 lVar7 = lVar14;
 if ((uVar12 >> 0x33 & 1) == 0) goto LAB_00101a9c;
 uVar11 = uVar17 + 1;
 if (uVar11 != 0x7fff) {
 bVar3 = false;
 uVar19 = uVar18 & 1 | uVar18 >> 1 | uVar12 << 0x3f;
 uVar9 = (uVar12 & 0xfff7ffffffffffff) >> 1;
 uVar12 = uVar18 & 1 | uVar18 >> 1 & 7;
 goto LAB_0010196c;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) {
LAB_001020b4:
 uVar8 = 0x14;
 goto LAB_00101bac;
 }
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) {
LAB_00102360:
 uVar8 = 0x14;
 goto LAB_00101bac;
 }
 if (uVar19 == 0x800000) {
 if (lVar14 != 0) goto LAB_001021c8;
LAB_001022fc:
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto LAB_0010199c;
 }
LAB_00102024:
 uVar6 = 0x14;
 if ((uVar10 & 0xc00000) == 0x400000) {
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 bVar3 = false;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto joined_r0x00102044;
 }
LAB_00101b68:
 uVar10 = uVar10 & 0xc00000;
 if (uVar10 != 0) {
 if (uVar10 == 0x400000) {
 if (lVar14 != 0) goto LAB_00101b84;
 }
 else if (((uint)(uVar10 == 0x800000) & (uint)lVar14) == 0) {
LAB_00101b84:
 param_1 = 0xffffffffffffffff;
 uVar8 = (unsigned long)(uVar6 | 0x14);
 goto LAB_001019b8;
 }
 }
 uVar8 = (unsigned long)(uVar6 | 0x14);
 }
LAB_00101bac:
 param_1 = 0;
 goto LAB_00101bc0;
 }
 if (uVar15 == 0) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = (unsigned long)(uVar6 - 1);
 if (uVar6 - 1 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_00101c58;
 }
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 goto LAB_00101b34;
 }
 goto LAB_00101a30;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 != 0x7fff) goto LAB_00101a9c;
 if ((uVar21 | uVar18) == 0) goto LAB_00101df4;
 uVar8 = (unsigned long)((uint)(uVar1 >> 0x32) ^ 1);
 uVar20 = uVar18;
 uVar12 = uVar21;
LAB_00101b40:
 uVar11 = 0x7fff;
 goto LAB_00101b48;
 }
 uVar12 = uVar12 | 0x8000000000000;
 if (uVar17 != 0x7fff) {
LAB_00101a30:
 iVar5 = (int)uVar8;
 if (iVar5 < 0x75) {
 if (iVar5 < 0x40) {
 uVar19 = uVar12 << ((unsigned long)(0x40 - iVar5) & 0x3f) | uVar20 >> (uVar8 & 0x3f) |
 (unsigned long)(uVar20 << ((unsigned long)(0x40 - iVar5) & 0x3f) != 0);
 uVar12 = uVar21 + (uVar12 >> (uVar8 & 0x3f));
 }
 else {
 uVar19 = uVar20 | uVar12 << ((unsigned long)(0x80 - iVar5) & 0x3f);
 if (iVar5 - 0x40U == 0) {
 uVar19 = uVar20;
 }
 uVar19 = (unsigned long)(uVar19 != 0) | uVar12 >> ((unsigned long)(iVar5 - 0x40U) & 0x3f);
 uVar12 = uVar21;
 }
 }
 else {
 uVar19 = (unsigned long)((uVar12 | uVar20) != 0);
 uVar12 = uVar21;
 }
 uVar18 = uVar19 + uVar18;
 if (CARRY8(uVar19,uVar18)) {
 uVar12 = uVar12 + 1;
 }
 goto LAB_00101c58;
 }
LAB_00101ce4:
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar19 = in_register_00005008 & 0xffffffffffff;
LAB_00101d04:
 if ((uVar19 | param_1) == 0) {
 param_1 = 0;
 }
 }
 else {
 uVar6 = (int)uVar17 - (int)uVar15;
 uVar8 = (unsigned long)uVar6;
 if ((int)uVar6 < 1) {
 if (uVar6 != 0) {
 if (uVar17 == 0) {
 if ((uVar21 | uVar18) == 0) {
 uVar19 = uVar20;
 uVar9 = uVar12;
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = uVar2 >> 0x32 ^ 1;
 goto LAB_00101b40;
 }
 goto LAB_00101df4;
 }
 goto LAB_00101a9c;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 goto LAB_001018ec;
 }
 }
 else {
 uVar6 = -uVar6;
 uVar21 = uVar21 | 0x8000000000000;
 }
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) == 0) {
 return 0;
 }
 uVar8 = uVar2 >> 0x32 ^ 1;
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 goto LAB_00101d04;
 }
 if ((int)uVar6 < 0x75) {
 if ((int)uVar6 < 0x40) {
 uVar18 = uVar21 << ((unsigned long)(0x40 - uVar6) & 0x3f) | uVar18 >> ((unsigned long)uVar6 & 0x3f) |
 (unsigned long)(uVar18 << ((unsigned long)(0x40 - uVar6) & 0x3f) != 0);
 uVar12 = uVar12 - (uVar21 >> ((unsigned long)uVar6 & 0x3f));
 }
 else {
 uVar19 = uVar18 | uVar21 << ((unsigned long)(0x80 - uVar6) & 0x3f);
 if (uVar6 - 0x40 == 0) {
 uVar19 = uVar18;
 }
 uVar18 = (unsigned long)(uVar19 != 0) | uVar21 >> ((unsigned long)(uVar6 - 0x40) & 0x3f);
 }
 }
 else {
 uVar18 = (unsigned long)((uVar21 | uVar18) != 0);
 }
 uVar19 = uVar20 - uVar18;
 uVar9 = uVar12 - (uVar20 < uVar18);
 goto LAB_001018ec;
 }
 if ((uVar17 + 1 & 0x7ffe) != 0) {
 uVar19 = uVar18 + param_2 * -8;
 uVar13 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar13 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar13) == 0) {
 param_1 = 0;
 goto LAB_001019b8;
 }
 }
 else {
 uVar19 = uVar20 + param_1 * -8;
 uVar13 = uVar12 - (uVar21 + (uVar20 < uVar18));
 lVar14 = lVar7;
 }
 goto LAB_001018f4;
 }
 uVar16 = uVar21 | uVar18;
 uVar11 = uVar12 | uVar20;
 if (uVar17 != 0) {
 if (uVar17 == 0x7fff) {
 if (uVar16 == 0) {
 if (uVar15 != 0x7fff) goto LAB_00101fc8;
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 if (uVar15 != 0x7fff) goto LAB_00101f98;
 }
LAB_00102210:
 if (uVar11 != 0) {
 uVar6 = (uint)uVar8;
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar16 == 0) {
LAB_0010228c:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 goto LAB_00101d04;
 }
LAB_00102228:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101d04;
 }
 if (uVar16 != 0) goto LAB_00101f98;
 }
 else {
 if (uVar15 == 0x7fff) goto LAB_00102210;
 if (uVar16 != 0) {
LAB_00101f98:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if (uVar11 == 0) goto LAB_00101d04;
 goto LAB_00102228;
 }
LAB_00101fc8:
 if (uVar11 != 0) goto LAB_0010228c;
 }
 param_1 = 0xffffffffffffffff;
 uVar8 = 1;
 goto LAB_001019b8;
 }
 if (uVar16 != 0) {
 if (uVar11 == 0) goto LAB_00102088;
 uVar19 = uVar18 + param_2 * -8;
 uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar9 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar9) != 0) {
 uVar12 = 0;
 bVar3 = true;
 uVar11 = uVar17;
 goto LAB_0010196c;
 }
 goto LAB_00102160;
 }
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 uVar18 = uVar19 | uVar9;
 goto joined_r0x00101aac;
 }
 uVar19 = uVar20;
 uVar9 = uVar12;
 lVar14 = lVar7;
 if (uVar11 == 0) {
LAB_00102160:
 param_1 = 0;
 goto LAB_001019b8;
 }
LAB_00102088:
 uVar18 = 0;
 uVar11 = 0;
LAB_00102090:
 uVar8 = 0;
 if (((uint)uVar10 >> 0xb & 1) != 0) {
 uVar8 = 8;
 }
LAB_00101998:
 uVar20 = uVar19;
 uVar12 = uVar9;
 if (uVar18 == 0) {
LAB_00101b48:
 param_1 = uVar20 >> 3 | uVar12 << 0x3d;
 uVar19 = uVar12 >> 3;
 if (uVar11 == 0x7fff) goto LAB_00101d04;
 }
 else {
LAB_0010199c:
 uVar6 = (uint)uVar8;
 if (uVar11 == 0x7ffe) goto LAB_00101b68;
 param_1 = uVar19 >> 3 | uVar9 << 0x3d;
 }
 }
 else {
 if (uVar15 == 0) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = (unsigned long)(uVar6 - 1);
 if (uVar6 - 1 == 0) {
 uVar19 = uVar18 + param_2 * -8;
 uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
 uVar15 = uVar17;
 lVar7 = lVar14;
 goto LAB_001018ec;
 }
 goto LAB_00101898;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) != 0) {
LAB_00101b34:
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar20 = uVar18;
 uVar12 = uVar21;
 goto LAB_00101b40;
 }
LAB_00101df4:
 uVar8 = 0;
 uVar19 = 0;
 param_1 = 0;
 goto LAB_00101d04;
 }
 }
 else {
 uVar12 = uVar12 | 0x8000000000000;
LAB_00101898:
 if (uVar17 == 0x7fff) goto LAB_00101ce4;
 iVar5 = (int)uVar8;
 if (iVar5 < 0x75) {
 if (iVar5 < 0x40) {
 uVar9 = uVar12 << ((unsigned long)(0x40 - iVar5) & 0x3f) | uVar20 >> (uVar8 & 0x3f) |
 (unsigned long)(uVar20 << ((unsigned long)(0x40 - iVar5) & 0x3f) != 0);
 uVar21 = uVar21 - (uVar12 >> (uVar8 & 0x3f));
 }
 else {
 uVar19 = uVar20 | uVar12 << ((unsigned long)(0x80 - iVar5) & 0x3f);
 if (iVar5 - 0x40U == 0) {
 uVar19 = uVar20;
 }
 uVar9 = (unsigned long)(uVar19 != 0) | uVar12 >> ((unsigned long)(iVar5 - 0x40U) & 0x3f);
 }
 }
 else {
 uVar9 = (unsigned long)((uVar12 | uVar20) != 0);
 }
 uVar19 = uVar18 - uVar9;
 uVar9 = uVar21 - (uVar18 < uVar9);
 uVar15 = uVar17;
 lVar7 = lVar14;
LAB_001018ec:
 uVar13 = uVar9 & 0x7ffffffffffff;
 uVar17 = uVar15;
 lVar14 = lVar7;
 if ((uVar9 >> 0x33 & 1) != 0) {
LAB_001018f4:
 if (uVar13 == 0) {
 uVar12 = uVar19 | uVar19 >> 1;
 uVar12 = uVar12 | uVar12 >> 2;
 uVar12 = uVar12 | uVar12 >> 4;
 uVar12 = uVar12 | uVar12 >> 8;
 uVar12 = uVar12 | uVar12 >> 0x10;
 uVar12 = uVar12 | uVar12 >> 0x20;
 uVar12 = ((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar12 & 0x5555555555555555);
 uVar12 = ((uVar12 & 0xcccccccccccccccc) >> 2) + (uVar12 & 0x3333333333333333);
 uVar12 = ((uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar12 & 0xf0f0f0f0f0f0f0f);
 uVar12 = ((uVar12 & 0xff00ff00ff00ff00) >> 8) + (uVar12 & 0xff00ff00ff00ff);
 lVar7 = ((uVar12 & 0xffff0000ffff0000) >> 0x10) + (uVar12 & 0xffff0000ffff);
 iVar5 = -((int)((unsigned long)lVar7 >> 0x20) + (int)lVar7);
 uVar6 = iVar5 + 0x74;
 if ((int)uVar6 < 0x40) goto LAB_00101900;
 uVar18 = uVar19 << ((unsigned long)(iVar5 + 0x34) & 0x3f);
 uVar12 = 0;
 }
 else {
 uVar12 = uVar13 | uVar13 >> 1;
 uVar12 = uVar12 | uVar12 >> 2;
 uVar12 = uVar12 | uVar12 >> 4;
 uVar12 = uVar12 | uVar12 >> 8;
 uVar12 = uVar12 | uVar12 >> 0x10;
 uVar12 = uVar12 | uVar12 >> 0x20;
 uVar12 = ((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar12 & 0x5555555555555555);
 uVar12 = ((uVar12 & 0xcccccccccccccccc) >> 2) + (uVar12 & 0x3333333333333333);
 uVar12 = ((uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar12 & 0xf0f0f0f0f0f0f0f);
 uVar12 = ((uVar12 & 0xff00ff00ff00ff00) >> 8) + (uVar12 & 0xff00ff00ff00ff);
 lVar7 = ((uVar12 & 0xffff0000ffff0000) >> 0x10) + (uVar12 & 0xffff0000ffff);
 uVar6 = 0x34 - ((int)((unsigned long)lVar7 >> 0x20) + (int)lVar7);
LAB_00101900:
 uVar12 = uVar19 << ((unsigned long)uVar6 & 0x3f);
 uVar18 = uVar19 >> ((unsigned long)-uVar6 & 0x3f) | uVar13 << ((unsigned long)uVar6 & 0x3f);
 }
 lVar7 = lVar14;
 if ((long)uVar17 <= (long)(int)uVar6) {
 iVar5 = uVar6 - (int)uVar17;
 uVar6 = iVar5 + 1;
 if ((int)uVar6 < 0x40) {
 uVar9 = uVar18 >> ((unsigned long)uVar6 & 0x3f);
 uVar19 = uVar18 << ((unsigned long)(0x40 - uVar6) & 0x3f) | uVar12 >> ((unsigned long)uVar6 & 0x3f) |
 (unsigned long)(uVar12 << ((unsigned long)(0x40 - uVar6) & 0x3f) != 0);
 goto LAB_00101958;
 }
 uVar19 = uVar12 | uVar18 << ((unsigned long)(0x80 - uVar6) & 0x3f);
 if (uVar6 == 0x40) {
 uVar19 = uVar12;
 }
 uVar9 = 0;
 uVar19 = (unsigned long)(uVar19 != 0) | uVar18 >> ((unsigned long)(iVar5 - 0x3f) & 0x3f);
 uVar18 = uVar19;
 goto joined_r0x00101aac;
 }
 uVar15 = uVar17 - (long)(int)uVar6;
 uVar19 = uVar12;
 uVar9 = uVar18 & 0xfff7ffffffffffff;
 }
 }
LAB_00101a9c:
 uVar12 = uVar19 & 7;
 bVar3 = false;
 uVar11 = uVar15;
 lVar14 = lVar7;
 uVar18 = uVar19 | uVar9;
 if (uVar15 != 0) {
LAB_0010196c:
 if (uVar12 == 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0;
 if (bVar3) goto LAB_00102090;
 }
 else {
 uVar12 = uVar10 & 0xc00000;
 if (uVar12 == 0x400000) {
 uVar8 = 0x10;
joined_r0x00102044:
 if (lVar14 == 0) {
LAB_00101c94:
 bVar4 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar4) {
 uVar9 = uVar9 + 1;
 }
 }
 }
 else if (uVar12 == 0x800000) {
 uVar8 = 0x10;
 if (lVar14 != 0) goto LAB_00101c94;
 }
 else {
 if (uVar12 != 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0x10;
 if (bVar3) {
 uVar8 = 0x18;
 }
 goto LAB_00101998;
 }
 uVar8 = 0x10;
 if (((uVar19 & 0xf) != 4) &&
 (bVar4 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar4)) {
 uVar9 = uVar9 + 1;
 }
 }
 uVar18 = uVar9 & 0x8000000000000;
 if (bVar3) {
 uVar8 = (unsigned long)((uint)uVar8 | 8);
 }
 }
 goto LAB_00101998;
 }
joined_r0x00101aac:
 if (uVar18 != 0) {
 uVar12 = uVar19 & 7;
 bVar3 = true;
 uVar11 = 0;
 lVar14 = lVar7;
 goto LAB_0010196c;
 }
 param_1 = 0;
 uVar8 = 0;
 }
 }
LAB_001019b8:
 if ((int)uVar8 == 0) {
 return param_1;
 }
LAB_00101bc0:
 __sfp_handle_exceptions(uVar8);
 return param_1;
}

// Function: __multf3 @ 0x1023c0
unsigned long __multf3(unsigned long param_1,unsigned long param_2)
{
 unsigned long uVar1;
 uint uVar2;
 bool bVar3;
 uint uVar4;
 unsigned long uVar5;
 unsigned long uVar6;
 unsigned long uVar7;
 long lVar8;
 long lVar9;
 int iVar10;
 unsigned long uVar11;
 long lVar12;
 unsigned long uVar13;
 long lVar14;
 unsigned long uVar15;
 unsigned long uVar16;
 unsigned long uVar17;
 unsigned long uVar18;
 unsigned long uVar19;
 long lVar20;
 unsigned long uVar21;
 long lVar22;
 unsigned long uVar23;
 unsigned long uVar24;
 unsigned long uVar25;
 unsigned long uVar26;
 unsigned long uVar27;
 unsigned long uVar28;
 unsigned long in_register_00005008;
 unsigned long in_register_00005028;
 uVar17 = fpcr;
 uVar19 = in_register_00005008 & 0xffffffffffff;
 uVar11 = in_register_00005008 >> 0x30 & 0x7fff;
 iVar10 = (int)uVar11;
 if (iVar10 == 0) {
 if ((param_1 | uVar19) == 0) {
 uVar19 = 0;
 uVar6 = 4;
 lVar14 = 0;
 lVar22 = 1;
 uVar5 = 0;
 uVar11 = 0;
 }
 else {
 if (uVar19 == 0) {
 uVar11 = param_1 | param_1 >> 1;
 uVar11 = uVar11 | uVar11 >> 2;
 uVar11 = uVar11 | uVar11 >> 4;
 uVar11 = uVar11 | uVar11 >> 8;
 uVar11 = uVar11 | uVar11 >> 0x10;
 uVar11 = uVar11 | uVar11 >> 0x20;
 uVar11 = ((uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar11 & 0x5555555555555555);
 uVar11 = ((uVar11 & 0xcccccccccccccccc) >> 2) + (uVar11 & 0x3333333333333333);
 uVar11 = ((uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar11 & 0xf0f0f0f0f0f0f0f);
 uVar11 = ((uVar11 & 0xff00ff00ff00ff00) >> 8) + (uVar11 & 0xff00ff00ff00ff);
 uVar11 = ((uVar11 & 0xffff0000ffff0000) >> 0x10) + (uVar11 & 0xffff0000ffff);
 lVar14 = -((uVar11 >> 0x20) + (uVar11 & 0xffffffff));
 lVar22 = lVar14 + 0x71;
 lVar14 = lVar14 + 0x80;
 if (lVar22 < 0x3d) goto LAB_00102818;
 uVar11 = 0;
 uVar19 = param_1 << ((unsigned long)((int)lVar22 - 0x3d) & 0x3f);
 }
 else {
 uVar11 = uVar19 | uVar19 >> 1;
 uVar11 = uVar11 | uVar11 >> 2;
 uVar11 = uVar11 | uVar11 >> 4;
 uVar11 = uVar11 | uVar11 >> 8;
 uVar11 = uVar11 | uVar11 >> 0x10 | uVar11 >> 0x20;
 uVar11 = ((uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar11 & 0x5555555555555555);
 uVar11 = ((uVar11 & 0xcccccccccccccccc) >> 2) + (uVar11 & 0x3333333333333333);
 uVar11 = ((uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar11 & 0xf0f0f0f0f0f0f0f);
 uVar11 = ((uVar11 & 0xff00ff00ff00ff00) >> 8) + (uVar11 & 0xff00ff00ff00ff);
 uVar11 = ((uVar11 & 0xffff0000ffff0000) >> 0x10) + (uVar11 & 0xffff0000ffff);
 lVar22 = -((uVar11 >> 0x20) + (uVar11 & 0xffffffff));
 lVar14 = lVar22 + 0x40;
 lVar22 = lVar22 + 0x31;
LAB_00102818:
 uVar11 = (unsigned long)((int)lVar22 + 3);
 uVar19 = param_1 >> ((unsigned long)(0x3d - (int)lVar22) & 0x3f) | uVar19 << (uVar11 & 0x3f);
 uVar11 = param_1 << (uVar11 & 0x3f);
 }
 uVar6 = 0;
 lVar14 = -0x3fef - lVar14;
 lVar22 = 0;
 uVar5 = 0;
 }
 }
 else if (iVar10 == 0x7fff) {
 if ((param_1 | uVar19) == 0) {
 uVar19 = 0;
 uVar6 = 8;
 lVar14 = 0x7fff;
 lVar22 = 2;
 uVar5 = 0;
 uVar11 = 0;
 }
 else {
 uVar5 = uVar19 >> 0x2f ^ 1;
 uVar6 = 0xc;
 lVar14 = 0x7fff;
 lVar22 = 3;
 uVar11 = param_1;
 }
 }
 else {
 uVar19 = param_1 >> 0x3d | uVar19 << 3 | 0x8000000000000;
 lVar14 = uVar11 - 0x3fff;
 lVar22 = 0;
 uVar6 = 0;
 uVar5 = 0;
 uVar11 = param_1 << 3;
 }
 uVar15 = in_register_00005028 >> 0x3f;
 uVar13 = in_register_00005028 & 0xffffffffffff;
 uVar21 = in_register_00005028 >> 0x30 & 0x7fff;
 iVar10 = (int)uVar21;
 uVar4 = (uint)(in_register_00005008 >> 0x20);
 uVar2 = (uint)(in_register_00005028 >> 0x20);
 if (iVar10 == 0) {
 if ((param_2 | uVar13) == 0) {
 uVar6 = uVar6 | 1;
 lVar8 = lVar14 + 1;
 uVar21 = 0;
 param_2 = 0;
 lVar12 = 1;
 lVar20 = lVar14;
 }
 else {
 if (uVar13 == 0) {
 uVar21 = param_2 | param_2 >> 1;
 uVar21 = uVar21 | uVar21 >> 2;
 uVar21 = uVar21 | uVar21 >> 4;
 uVar21 = uVar21 | uVar21 >> 8;
 uVar21 = uVar21 | uVar21 >> 0x10;
 uVar21 = uVar21 | uVar21 >> 0x20;
 uVar21 = ((uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar21 & 0x5555555555555555);
 uVar21 = ((uVar21 & 0xcccccccccccccccc) >> 2) + (uVar21 & 0x3333333333333333);
 uVar21 = ((uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar21 & 0xf0f0f0f0f0f0f0f);
 uVar21 = ((uVar21 & 0xff00ff00ff00ff00) >> 8) + (uVar21 & 0xff00ff00ff00ff);
 uVar21 = ((uVar21 & 0xffff0000ffff0000) >> 0x10) + (uVar21 & 0xffff0000ffff);
 lVar12 = -((uVar21 >> 0x20) + (uVar21 & 0xffffffff));
 lVar8 = lVar12 + 0x71;
 lVar12 = lVar12 + 0x80;
 if (lVar8 < 0x3d) goto LAB_001027bc;
 uVar21 = param_2 << ((unsigned long)((int)lVar8 - 0x3d) & 0x3f);
 param_2 = 0;
 }
 else {
 uVar21 = uVar13 | uVar13 >> 1;
 uVar21 = uVar21 | uVar21 >> 2;
 uVar21 = uVar21 | uVar21 >> 4;
 uVar21 = uVar21 | uVar21 >> 8;
 uVar21 = uVar21 | uVar21 >> 0x10 | uVar21 >> 0x20;
 uVar21 = ((uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar21 & 0x5555555555555555);
 uVar21 = ((uVar21 & 0xcccccccccccccccc) >> 2) + (uVar21 & 0x3333333333333333);
 uVar21 = ((uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar21 & 0xf0f0f0f0f0f0f0f);
 uVar21 = ((uVar21 & 0xff00ff00ff00ff00) >> 8) + (uVar21 & 0xff00ff00ff00ff);
 uVar21 = ((uVar21 & 0xffff0000ffff0000) >> 0x10) + (uVar21 & 0xffff0000ffff);
 lVar8 = -((uVar21 >> 0x20) + (uVar21 & 0xffffffff));
 lVar12 = lVar8 + 0x40;
 lVar8 = lVar8 + 0x31;
LAB_001027bc:
 uVar7 = (unsigned long)((int)lVar8 + 3);
 uVar21 = param_2 >> ((unsigned long)(0x3d - (int)lVar8) & 0x3f) | uVar13 << (uVar7 & 0x3f);
 param_2 = param_2 << (uVar7 & 0x3f);
 }
 lVar20 = (lVar14 - lVar12) + -0x3fef;
 lVar8 = (lVar14 - lVar12) + -0x3fee;
 lVar12 = 0;
 }
 uVar7 = (unsigned long)((uVar4 ^ uVar2) >> 0x1f);
 if (uVar6 < 0xb) goto LAB_001024cc;
LAB_00102480:
 if (uVar6 != 0xb) {
LAB_00102488:
 uVar18 = uVar11;
 uVar21 = uVar19;
 uVar23 = in_register_00005008 >> 0x3f;
 lVar9 = lVar22;
 goto LAB_0010258c;
 }
LAB_001025a8:
 uVar11 = param_2;
 uVar7 = uVar15;
 if (lVar12 != 3) {
LAB_001024e8:
 lVar20 = lVar8;
 if (lVar12 == 1) {
 uVar11 = 0;
 }
 else {
LAB_0010274c:
 lVar14 = lVar20 + 0x3fff;
 uVar4 = (uint)uVar5;
 if (lVar14 < 1) {
 uVar19 = 1 - lVar14;
 if (0x74 < (long)uVar19) {
 uVar11 = param_2 | uVar21;
 if ((param_2 | uVar21) != 0) {
 uVar4 = uVar4 | 0x10;
 uVar11 = 1 - uVar7;
 if (((uVar17 & 0xc00000) != 0x400000) &&
 (uVar11 = uVar7, (uVar17 & 0xc00000) != 0x800000)) {
 uVar11 = 0;
 }
 }
 uVar5 = (unsigned long)(uVar4 | 8);
 goto LAB_001029b4;
 }
 iVar10 = (int)uVar19;
 if ((long)uVar19 < 0x40) {
 uVar11 = (unsigned long)(param_2 << ((unsigned long)(0x40 - iVar10) & 0x3f) != 0);
 uVar6 = uVar21 << ((unsigned long)(0x40 - iVar10) & 0x3f) | param_2 >> (uVar19 & 0x3f);
 uVar21 = uVar21 >> (uVar19 & 0x3f);
 uVar19 = uVar6 | uVar11;
 if ((uVar6 & 7 | uVar11) != 0) goto LAB_00102934;
 if ((uVar21 >> 0x33 & 1) == 0) goto LAB_00102a7c;
 }
 else {
 uVar11 = param_2 | uVar21 << ((unsigned long)(0x80 - iVar10) & 0x3f);
 if (uVar19 == 0x40) {
 uVar11 = param_2;
 }
 uVar21 = uVar21 >> ((unsigned long)(iVar10 - 0x40) & 0x3f);
 uVar19 = uVar11 != 0 | uVar21;
 uVar21 = (unsigned long)(uVar11 != 0) | uVar21 & 7;
 if (uVar21 == 0) {
LAB_00102a7c:
 uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
 if (((uint)uVar17 >> 0xb & 1) != 0) {
 uVar5 = (unsigned long)(uVar4 | 8);
 goto LAB_001029b4;
 }
 goto LAB_001024fc;
 }
 uVar21 = 0;
LAB_00102934:
 uVar17 = uVar17 & 0xc00000;
 if (uVar17 == 0x400000) {
 if (uVar7 == 0) {
LAB_00102adc:
 bVar3 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar17 == 0x800000) {
 if (uVar7 != 0) goto LAB_00102adc;
 }
 else if (((uVar17 == 0) && ((uVar19 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
 uVar21 = uVar21 + 1;
 }
 if ((uVar21 >> 0x33 & 1) == 0) {
 uVar5 = (unsigned long)(uVar4 | 0x18);
 uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
 goto LAB_001029b4;
 }
 }
 uVar5 = (unsigned long)(uVar4 | 0x18);
 uVar11 = 0;
 goto LAB_001029b4;
 }
 if ((param_2 & 7) != 0) {
 uVar19 = uVar17 & 0xc00000;
 uVar5 = (unsigned long)(uVar4 | 0x10);
 if (uVar19 == 0x400000) {
 if (uVar7 == 0) {
LAB_00102acc:
 bVar3 = 0xfffffffffffffff7 < param_2;
 param_2 = param_2 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar19 == 0x800000) {
 if (uVar7 != 0) goto LAB_00102acc;
 }
 else if (((uVar19 == 0) && ((param_2 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < param_2, param_2 = param_2 + 4, bVar3)) {
 uVar21 = uVar21 + 1;
 }
 }
 if ((uVar21 >> 0x34 & 1) != 0) {
 uVar21 = uVar21 & 0xffefffffffffffff;
 lVar14 = lVar20 + 0x4000;
 }
 if (0x7ffe < lVar14) {
 uVar11 = uVar17 & 0xc00000;
 if (uVar11 == 0x400000) {
 uVar11 = -(unsigned long)(uVar7 != 0);
 }
 else if (uVar11 == 0x800000) {
 uVar11 = -(unsigned long)(uVar7 == 0);
 }
 else if (uVar11 != 0) {
 uVar11 = 0xffffffffffffffff;
 }
 uVar5 = (unsigned long)((uint)uVar5 | 0x14);
 goto LAB_001029b4;
 }
 uVar11 = param_2 >> 3 | uVar21 << 0x3d;
 }
 }
 }
 else if (iVar10 == 0x7fff) {
 lVar20 = lVar14 + 0x7fff;
 if ((param_2 | uVar13) == 0) {
 uVar7 = (unsigned long)((uVar4 ^ uVar2) >> 0x1f);
 uVar6 = uVar6 | 2;
 lVar8 = lVar14 + 0x8000;
 param_2 = 0;
 if (uVar6 < 0xb) {
 uVar21 = 0;
 lVar12 = 2;
 goto LAB_001024cc;
 }
 lVar9 = 2;
 uVar13 = 0;
 }
 else {
 uVar7 = (unsigned long)((uVar4 ^ uVar2) >> 0x1f);
 uVar6 = uVar6 | 3;
 lVar8 = lVar14 + 0x8000;
 uVar4 = (uint)uVar5;
 if ((in_register_00005028 & 0x800000000000) == 0) {
 uVar4 = 1;
 }
 uVar5 = (unsigned long)uVar4;
 lVar12 = 3;
 if (uVar6 < 0xb) goto LAB_00102548;
 lVar9 = 3;
 }
 lVar8 = lVar14 + 0x8000;
 if (uVar6 != 0xf) {
 uVar18 = param_2;
 uVar21 = uVar13;
 uVar23 = uVar15;
 if (uVar6 != 0xb) goto LAB_00102488;
 goto LAB_0010258c;
 }
 if (((uVar19 >> 0x2f & 1) != 0) && (uVar13 >> 0x2f == 0)) {
 uVar11 = param_2;
 }
 }
 else {
 lVar20 = (uVar21 - 0x3fff) + lVar14;
 uVar7 = (unsigned long)((uVar4 ^ uVar2) >> 0x1f);
 uVar21 = param_2 >> 0x3d | uVar13 << 3 | 0x8000000000000;
 param_2 = param_2 << 3;
 lVar8 = lVar20 + 1;
 lVar12 = 0;
 if (10 < uVar6) goto LAB_00102480;
LAB_001024cc:
 uVar13 = uVar21;
 if (uVar6 < 3) {
 if (uVar6 - 1 < 2) {
 if (lVar12 == 2) goto LAB_001025dc;
 goto LAB_001024e8;
 }
LAB_001025ec:
 uVar27 = param_2 & 0xffffffff;
 uVar23 = uVar11 >> 0x20;
 uVar21 = uVar13 & 0xffffffff;
 uVar11 = uVar11 & 0xffffffff;
 param_2 = param_2 >> 0x20;
 uVar13 = uVar13 >> 0x20;
 uVar24 = uVar23 * uVar27;
 uVar26 = uVar19 >> 0x20;
 uVar18 = uVar23 * uVar21;
 uVar19 = uVar19 & 0xffffffff;
 uVar6 = uVar24 + param_2 * uVar11 + (uVar27 * uVar11 >> 0x20);
 uVar15 = uVar18 + uVar13 * uVar11 + (uVar11 * uVar21 >> 0x20);
 uVar25 = uVar26 * uVar27;
 uVar28 = uVar26 * uVar21;
 lVar14 = uVar23 * param_2 + 0x100000000;
 if (uVar24 < uVar6 || uVar24 - uVar6 == 0) {
 lVar14 = uVar23 * param_2;
 }
 uVar24 = (uVar11 * uVar21 & 0xffffffff) + (uVar15 << 0x20);
 uVar1 = uVar25 + param_2 * uVar19 + (uVar27 * uVar19 >> 0x20);
 uVar16 = uVar28 + uVar13 * uVar19 + (uVar19 * uVar21 >> 0x20);
 lVar22 = uVar23 * uVar13 + 0x100000000;
 if (uVar18 < uVar15 || uVar18 - uVar15 == 0) {
 lVar22 = uVar23 * uVar13;
 }
 uVar18 = uVar24 + (uVar6 >> 0x20) + lVar14;
 lVar14 = param_2 * uVar26 + 0x100000000;
 if (uVar25 < uVar1 || uVar25 - uVar1 == 0) {
 lVar14 = param_2 * uVar26;
 }
 uVar15 = lVar22 + (uVar15 >> 0x20);
 uVar21 = (uVar19 * uVar21 & 0xffffffff) + (uVar16 << 0x20);
 lVar22 = uVar13 * uVar26 + 0x100000000;
 if (uVar28 < uVar16 || uVar28 - uVar16 == 0) {
 lVar22 = uVar13 * uVar26;
 }
 uVar13 = uVar21 + uVar15;
 uVar25 = (unsigned long)(uVar18 < uVar24);
 uVar19 = (uVar27 * uVar19 & 0xffffffff) + (uVar1 << 0x20);
 uVar23 = uVar13 + uVar25;
 uVar16 = uVar16 >> 0x20;
 uVar24 = lVar14 + (uVar1 >> 0x20);
 if (CARRY8(uVar21,uVar15) != false || CARRY8(uVar13,uVar25) != false) {
 uVar16 = uVar16 + 1;
 }
 uVar13 = uVar18 + uVar19;
 uVar21 = (unsigned long)CARRY8(uVar18,uVar19);
 uVar19 = uVar23 + uVar24;
 uVar15 = uVar19 + uVar21;
 if (CARRY8(uVar23,uVar24) != false || CARRY8(uVar19,uVar21) != false) {
 lVar22 = lVar22 + 1;
 }
 uVar19 = (unsigned long)(((uVar27 * uVar11 & 0xffffffff) + (uVar6 << 0x20) | uVar13 * 0x2000) != 0);
 uVar13 = uVar13 >> 0x33;
 param_2 = uVar19 | uVar13 | uVar15 * 0x2000;
 uVar15 = uVar15 >> 0x33;
 uVar21 = uVar15 | (lVar22 + uVar16) * 0x2000;
 if ((lVar22 + uVar16 >> 0x27 & 1) != 0) {
 param_2 = uVar19 | uVar13 & 1 | param_2 >> 1 | uVar15 << 0x3f;
 uVar21 = uVar21 >> 1;
 lVar20 = lVar8;
 }
 goto LAB_0010274c;
 }
LAB_00102548:
 uVar6 = 1L << uVar6;
 uVar18 = uVar11;
 uVar21 = uVar19;
 uVar23 = uVar7;
 lVar9 = lVar22;
 if ((uVar6 & 0x530) == 0) {
 if ((uVar6 & 0x240) != 0) {
 uVar5 = 1;
 uVar11 = 0xffffffffffffffff;
 goto LAB_001024fc;
 }
 uVar18 = param_2;
 uVar21 = uVar13;
 uVar23 = uVar15;
 lVar9 = lVar12;
 if ((uVar6 & 0x88) == 0) goto LAB_001025ec;
 }
LAB_0010258c:
 lVar12 = lVar9;
 uVar15 = uVar23;
 param_2 = uVar18;
 if (lVar12 != 2) goto LAB_001025a8;
LAB_001025dc:
 uVar11 = 0;
 }
LAB_001024fc:
 if ((int)uVar5 == 0) {
 return uVar11;
 }
LAB_001029b4:
 __sfp_handle_exceptions(uVar5);
 return uVar11;
}

// Function: __sfp_handle_exceptions @ 0x102bc0
char [16] __sfp_handle_exceptions(unsigned long param_1,unsigned long long param_2)
{
 uint uVar1;
 char auVar2 [16];
 uVar1 = (uint)param_1;
 if ((param_1 & 1) != 0) {
 param_2 = fpsr;
 }
 if ((uVar1 >> 1 & 1) != 0) {
 param_2 = fpsr;
 }
 if ((uVar1 >> 2 & 1) != 0) {
 param_2 = fpsr;
 }
 if ((uVar1 >> 3 & 1) != 0) {
 param_2 = fpsr;
 }
 if ((uVar1 >> 4 & 1) != 0) {
 param_1 = fpsr;
 }
 auVar2._8_8_ = param_2;
 auVar2._0_8_ = param_1;
 return auVar2;
}

// Function: _fini @ 0x102c30
void _fini(void)
{
 return;
}

