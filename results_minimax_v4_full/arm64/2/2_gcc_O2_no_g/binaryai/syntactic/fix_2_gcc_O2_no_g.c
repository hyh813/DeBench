// Decompiled by BinaryAI
// SHA256: cc1ce21c235d26aa2572d5c47fb3a14487eee5f9365f8b0c7b68dfff654cba62

#include <stdint.h>

// Type definitions
typedef unsigned int uint;
typedef unsigned char byte;

// External declarations
extern void *__dso_handle;
int call_weak_fn(int);

// Global variables
static char completed_0 = 0;

// Function prototypes
void test_data_types_l1(void);
void test_array_types(void);
void test_pointer_types(void);
void test_composite_types(void);

// Data constants
extern const char DAT_00102d48[];
extern const char DAT_00102ed8[];
extern const char DAT_00103008[];
extern const char DAT_00103010[];
extern const char DAT_001031e8[];

// Stack markers
extern char stack0x00000008;
extern char stack0x00000050;

// Standard library function declarations
extern int __printf_chk(int flag, const char *format, ...);
extern void __stack_chk_fail(void *param1, ...);
extern void __stack_chk_fail_local(void *param1, void *param2, long param3);

// ARM64 builtin for signed borrow detection
static inline int SBORROW4(unsigned int a, unsigned int b) {
    return (int)((a - b) > a);
}

// Carry detection macro for unsigned addition
static inline int CARRY8(unsigned long a, unsigned long b) {
    return (int)(((a + b) < a) != 0);
}

// Floating point and NEON function declarations
unsigned int NEON_fmadd(unsigned int a, unsigned int b, unsigned int c);
unsigned long long NEON_fmadd_ll(unsigned long long a, unsigned long long b, unsigned long long c);
unsigned long __multf3(unsigned long param_1, unsigned long param_2);
unsigned long __addtf3(unsigned long param_1, unsigned long param_2);
void __sfp_handle_exceptions(unsigned long param_1, unsigned long long param_2);

// External declarations for stack canary
extern uintptr_t __stack_chk_guard;
extern uintptr_t ___stack_chk_guard;

// Floating point status register
extern unsigned int fpsr;

// Floating point control register (ARM64)
static inline uint64_t get_fpcr(void) {
    uint64_t fpcr;
    __asm__ volatile("mrs %0, fpcr" : "=r"(fpcr));
    return fpcr;
}

// Function: _init @ 0x1006b8
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_001006d0 @ 0x1006d0
void FUN_001006d0(void)
{
 // Null function pointer call - removed as invalid
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1006f0
extern void __libc_start_main(void (*main)(void), void *arg, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end);

// Function: <EXTERNAL>::__cxa_finalize @ 0x100700
extern void __cxa_finalize(void *dso);

// Function: <EXTERNAL>::__printf_chk @ 0x100710
// Already declared above with proper signature

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100720
// Already declared above with proper signature

// Function: <EXTERNAL>::__gmon_start__ @ 0x100730
extern void __gmon_start__(void);

// Function: <EXTERNAL>::abort @ 0x100740
extern void abort(void);

// Function: <EXTERNAL>::puts @ 0x100750
extern int puts(char *__s);

// Function: main @ 0x100780
void main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return;
}

// Function: _start @ 0x1007c0
void _start(unsigned long long param_1)
{
 void *param_9 = 0;
 __libc_start_main(main,param_9,(void (*)(void))&stack0x00000008,0,0,(void*)param_1);
 abort();
}

// Function: call_weak_fn @ 0x1007f4
int call_weak_fn(int param)
{
 (void)param;
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x100810
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100840
void register_tm_clones(void)
{
 return;
}

// Function: FUN_0010087c @ 0x10087c
void FUN_0010087c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100880
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: process_char @ 0x1008e0
char process_char(char param_1)
{
 if ((byte)(param_1 + 0xbfU) < 0x1a) {
 param_1 = param_1 + ' ';
 }
 return param_1;
}

// Function: process_short @ 0x100900
int process_short(short param_1,short param_2)
{
 return (int)param_2 + (int)param_1;
}

// Function: process_int @ 0x100910
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: process_long @ 0x100920
long process_long(long param_1)
{
 return param_1 << 1;
}

// Function: process_ll @ 0x100930
long process_ll(long param_1)
{
 return param_1 * param_1;
}

// Function: process_float @ 0x100940
unsigned int process_float(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = NEON_fmadd(param_1,0x3fc00000,0x3f000000);
 return uVar1;
}

// Function: process_double @ 0x100950
unsigned long long process_double(unsigned long long param_1)
{
 unsigned long long uVar1;
 uVar1 = NEON_fmadd(param_1,0x3fe0000000000000,0x3fb999999999999a);
 return uVar1;
}

// Function: process_ld @ 0x100964
void process_ld(unsigned long long param_1)
{
 unsigned long long uVar1;
 uVar1 = __multf3(param_1,param_1);
 __addtf3(uVar1,0);
 return;
}

// Function: process_bool @ 0x100990
uint process_bool(uint param_1)
{
 uint uVar1;
 uVar1 = ~param_1 & 1;
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: const_param @ 0x1009a4
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x1009b0
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x1009c0
void test_data_types_l1(void)
{
 puts((char*)&DAT_00102d48);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",(int)0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",(int)0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",(int)0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",(long)200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",(long long)10000);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",1.5f);
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",1.5);
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",1.5L);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",(int)0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",(int)0x14);
 return;
}

// Function: array_1d_stack @ 0x100b10
int array_1d_stack(long param_1,int param_2)
{
 long lVar1;
 int iVar2;
 long lVar3;
 if (0 < param_2) {
 lVar3 = 0;
 iVar2 = 0;
 do {
 lVar1 = lVar3 * 4;
 lVar3 = lVar3 + 1;
 iVar2 = iVar2 + *(int *)(param_1 + lVar1);
 } while ((int)lVar3 < param_2);
 return iVar2;
 }
 return 0;
}

// Function: array_string @ 0x100b50
unsigned long array_string(char *param_1)
{
 char *pcVar1;
 unsigned long uVar2;
 unsigned long uVar3;
 if (*param_1 != '\0') {
 uVar3 = 1;
 do {
 uVar2 = uVar3 & 0xffffffff;
 pcVar1 = param_1 + uVar3;
 uVar3 = uVar3 + 1;
 } while (*pcVar1 != '\0');
 return uVar2;
 }
 return 0;
}

// Function: array_2d_stack @ 0x100b80
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

// Function: array_3d @ 0x100ba4
int array_3d(long param_1)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 piVar4 = (int *)(param_1 + 100);
 iVar3 = 0;
 do {
 piVar1 = piVar4 + -0x19;
 do {
 piVar2 = piVar1;
 iVar3 = iVar3 + *piVar2 + piVar2[1] + piVar2[2] + piVar2[3] + piVar2[4];
 piVar1 = piVar2 + 5;
 } while (piVar2 + 5 != piVar4);
 piVar4 = piVar2 + 0x1e;
 } while (piVar4 != (int *)(param_1 + 600));
 return iVar3;
}

// Function: array_vla @ 0x100bf4
int array_vla(int param_1,long param_2)
{
 long lVar1;
 int iVar2;
 long lVar3;
 if (0 < param_1) {
 lVar3 = 0;
 iVar2 = 0;
 do {
 lVar1 = lVar3 * 4;
 lVar3 = lVar3 + 1;
 iVar2 = iVar2 + *(int *)(param_2 + lVar1);
 } while ((int)lVar3 < param_1);
 return iVar2;
 }
 return 0;
}

// Function: array_pointer @ 0x100c30
int array_pointer(int *param_1,int param_2)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 if (0 < param_2) {
 iVar1 = 0;
 piVar2 = param_1;
 do {
 piVar3 = piVar2 + 10;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while (piVar3 != param_1 + (unsigned long)(param_2 - 1) * 10 + 10);
 return iVar1;
 }
 return 0;
}

// Function: pointer_array @ 0x100c70
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
 if (0 < param_2) {
 lVar2 = 0;
 iVar1 = 0;
 do {
 piVar3 = *(int **)(param_1 + lVar2 * 8);
 lVar2 = lVar2 + 1;
 if (piVar3 != (int *)0x0) {
 iVar1 = iVar1 + *piVar3;
 }
 } while ((int)lVar2 < iVar4);
 return iVar1;
 }
 return 0;
}

// Function: array_complex_index @ 0x100cc0
unsigned int array_complex_index(long param_1,int param_2,int param_3,uint param_4,uint param_5)
{
 bool bVar1;
 bool bVar2;
 bVar2 = -1 < (int)(param_4 | param_5);
 bVar1 = false;
 if (bVar2) {
 bVar1 = (int)(param_4 - param_2) < 0;
 }
 if ((bVar1 != (bVar2 && SBORROW4(param_4,param_2))) && ((int)param_5 < param_3)) {
 return *(unsigned int *)(param_1 + (long)(int)(param_4 + param_2 * param_5) * 4);
 }
 return 0xffffffff;
}

// Function: array_oob @ 0x100cf0
int array_oob(int *param_1,int param_2)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 if (-1 < param_2) {
 iVar1 = 0;
 piVar2 = param_1;
 do {
 piVar3 = piVar2 + 1;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while (piVar3 != param_1 + (long)param_2 + 1);
 return iVar1;
 }
 return 0;
}

// Function: test_array_types @ 0x100d24
void test_array_types(void)
{
 long lVar1;
 int iVar2;
 char *pcVar3;
 long lVar4;
 unsigned int *puVar5;
 int *piVar6;
 int *piVar7;
 int iVar8;
 unsigned int *puVar9;
 int *piVar10;
 int local_400 [6];
 int aiStack_3e8 [17];
 unsigned int local_3a4;
 int local_398 [100];
 unsigned int local_208 [10];
 int aiStack_1e0 [15];
 int aiStack_1a4 [100];
 unsigned int uStack_14;
 unsigned int local_10 = 0;
 unsigned short local_c = 0;
 long local_8;
 unsigned long long stack_chk_value;
 local_8 = ___stack_chk_guard;
 stack_chk_value = ___stack_chk_guard;
 puts((char *)&DAT_00102ed8);
 iVar8 = 0;
 lVar4 = 1;
 do {
 lVar1 = lVar4 + 1;
 iVar8 = iVar8 + aiStack_3e8[lVar4 + -7];
 lVar4 = lVar1;
 } while (lVar1 != 6);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",iVar8);
 pcVar3 = (char *)&local_10;
 iVar8 = 0;
 local_10 = ('h' | ('e' << 8) | ('l' << 16) | ('l' << 24));
 local_c = ('o' | ('\0' << 8));
 do {
 pcVar3 = pcVar3 + 1;
 iVar8 = iVar8 + 1;
 } while (*pcVar3 != '\0');
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",iVar8);
 iVar8 = 0;
 piVar7 = local_398;
 do {
 lVar4 = 0;
 do {
 iVar2 = (int)lVar4;
 if (iVar8 != iVar2) {
 iVar2 = 0;
 }
 piVar7[lVar4] = iVar2;
 lVar4 = lVar4 + 1;
 } while (lVar4 != 10);
 iVar8 = iVar8 + 1;
 piVar7 = piVar7 + 10;
 } while (iVar8 != 10);
 iVar8 = 0;
 piVar7 = local_398;
 do {
 piVar10 = piVar7 + 0xb;
 iVar8 = iVar8 + *piVar7;
 piVar7 = piVar10;
 } while (aiStack_1e0 != piVar10);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",iVar8);
 puVar9 = local_208;
 do {
 iVar8 = 5;
 puVar5 = puVar9;
 do {
 *puVar5 = 1;
 puVar5[1] = 1;
 iVar8 = iVar8 + -1;
 puVar5[2] = 1;
 puVar5[3] = 1;
 puVar5[4] = 1;
 puVar5 = puVar5 + 5;
 } while (iVar8 != 0);
 puVar9 = puVar9 + 0x19;
 } while (puVar9 != &uStack_14);
 piVar7 = aiStack_1a4;
 iVar8 = 0;
 do {
 piVar10 = piVar7 + -0x19;
 do {
 piVar6 = piVar10;
 iVar8 = iVar8 + *piVar6 + piVar6[1] + piVar6[2] + piVar6[3] + piVar6[4];
 piVar10 = piVar6 + 5;
 } while (piVar6 + 5 != piVar7);
 piVar7 = piVar6 + 0x1e;
 } while (piVar7 != (int *)&stack0x00000050);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",iVar8);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",100);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
 iVar8 = 0;
 piVar7 = aiStack_3e8;
 do {
 *piVar7 = iVar8;
 iVar8 = iVar8 + 1;
 piVar7 = piVar7 + 1;
 } while (iVar8 != 0x14);
 if (stack_chk_value - ___stack_chk_guard == 0) {
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",local_3a4);
 return;
 }
 __stack_chk_fail((void*)__stack_chk_guard,0,stack_chk_value - ___stack_chk_guard);
}

// Function: ptr_single @ 0x100f64
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x100f70
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x100f80
int ptr_triple(unsigned long long *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x100f94
int ptr_increment(int *param_1,int param_2)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 if (0 < param_2) {
 iVar1 = 0;
 piVar2 = param_1;
 do {
 piVar3 = piVar2 + 1;
 iVar1 = iVar1 + *piVar2;
 piVar2 = piVar3;
 } while (piVar3 != param_1 + param_2);
 return iVar1;
 }
 return 0;
}

// Function: ptr_offset @ 0x100fc4
unsigned int ptr_offset(long param_1,int param_2)
{
 return *(unsigned int *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x100fd0
unsigned long ptr_diff(long param_1,long param_2)
{
 return (unsigned long)(param_1 - param_2) >> 2 & 0xffffffff;
}

// Function: ptr_void @ 0x100fe0
uint ptr_void(uint *param_1,int param_2)
{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 return (uint)*(byte *)param_1;
 }
 return 0xffffffff;
}

// Function: ptr_const @ 0x101004
int ptr_const(int *param_1)
{
 return *param_1 << 1;
}

// Function: ptr_const_ptr @ 0x101010
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_complex @ 0x101030
void ptr_func_complex(unsigned long long (*param_1)(unsigned long long, char **),unsigned long long param_2)
{
 unsigned long long uVar1;
 char *local_18;
 unsigned long long uStack_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_18 = (char *)&DAT_00103008;
 uStack_10 = 0;
 uVar1 = param_1(param_2,&local_18);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail((void*)uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: ptr_cast @ 0x101090
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x1010a0
long opaque_handle_create(int param_1)
{
 return (long)param_1;
}

// Function: opaque_handle_op @ 0x1010b0
int opaque_handle_op(int param_1)
{
 return param_1 << 1;
}

// Function: ptr_func_simple @ 0x101024
void ptr_func_simple(void (*param_1)(unsigned int), unsigned int param_2)
{
 param_1(param_2);
 return;
}

// Function: struct_simple @ 0x101264
int struct_simple(int *param_1)
{
 return *param_1 + param_1[1] + param_1[2];
}

// Function: struct_array @ 0x101280
int struct_array(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 int *piVar3;
 if (0 < param_2) {
 iVar2 = 0;
 piVar3 = param_1;
 do {
 piVar1 = piVar3 + 3;
 iVar2 = iVar2 + *piVar3 + piVar3[1] + piVar3[2];
 piVar3 = piVar1;
 } while (piVar1 != param_1 + (unsigned long)(param_2 - 1) * 3 + 3);
 return iVar2;
 }
 return 0;
}

// Function: struct_nested @ 0x1012d0
int struct_nested(int *param_1)
{
 return *param_1 + param_1[3];
}

// Function: struct_deep @ 0x1012e0
int struct_deep(long param_1)
{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}

// Function: struct_with_ptr @ 0x1012f0
int struct_with_ptr(int *param_1)
{
 int iVar1;
 iVar1 = *param_1;
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 iVar1 = iVar1 + **(int **)(param_1 + 2);
 }
 return iVar1;
}

// Function: struct_bitfields @ 0x101310
int struct_bitfields(uint *param_1)
{
 uint uVar1;
 uVar1 = *param_1;
 return (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7) + (uVar1 >> 6 & 0x3ff);
}

// Function: union_type @ 0x101334
float union_type(float *param_1,int param_2)
{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 != 1) {
 return (float)(uint)*(byte *)param_1;
 }
 return (float)(int)*param_1;
}

// Function: union_array @ 0x101360
int union_array(long param_1,int param_2)
{
 long lVar1;
 int iVar2;
 long lVar3;
 if (0 < param_2) {
 lVar3 = 0;
 iVar2 = 0;
 do {
 lVar1 = lVar3 * 4;
 lVar3 = lVar3 + 1;
 iVar2 = iVar2 + *(int *)(param_1 + lVar1);
 } while ((int)lVar3 < param_2);
 return iVar2;
 }
 return 0;
}

// Function: enum_type @ 0x1013a0
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Switch table for enum_switch
static const unsigned int CSWTCH_62[4] = {0x32, 0x64, 0xc8, 0x12c};

// Function: enum_switch @ 0x1013b0
unsigned int enum_switch(uint param_1)
{
 if (param_1 < 4) {
 return CSWTCH_62[param_1];
 }
 return 0xffffff9d;
}

// Function: struct_func_ptr @ 0x1013d4
void struct_func_ptr(unsigned int *param_1)
{
 void (*func)(unsigned int) = *(void (**)(unsigned int))(param_1 + 2);
 func(*param_1);
 return;
}

// Function: linked_list @ 0x1013f0
int linked_list(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar1 = *param_1;
 param_1 = *(int **)(param_1 + 2);
 iVar2 = iVar2 + iVar1;
 } while (param_1 != (int *)0x0);
 }
 return iVar2;
}

// Function: doubly_linked_list @ 0x101414
int doubly_linked_list(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar1 = *param_1;
 param_1 = *(int **)(param_1 + 2);
 iVar2 = iVar2 + iVar1;
 } while (param_1 != (int *)0x0);
 }
 return iVar2;
}

// Function: binary_tree_sum @ 0x101434
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int iVar4;
 int *piVar5;
 int *piVar6;
 int *piVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 int *piVar18;
 int *piVar19;
 int *piVar20;
 int iVar21;
 int *piVar22;
 int iVar23;
 int iVar24;
 int iVar25;
 int iVar26;
 int iVar27;
 iVar10 = 0;
 if (param_1 != (int *)0x0) {
 do {
 piVar5 = *(int **)(param_1 + 2);
 iVar12 = 0;
 iVar11 = *param_1;
 if (piVar5 != (int *)0x0) {
 do {
 piVar6 = *(int **)(piVar5 + 2);
 iVar14 = 0;
 iVar13 = *piVar5;
 if (piVar6 != (int *)0x0) {
 do {
 piVar7 = *(int **)(piVar6 + 2);
 iVar16 = 0;
 iVar15 = *piVar6;
 if (piVar7 != (int *)0x0) {
 do {
 do {
 iVar17 = *piVar7;
 piVar18 = *(int **)(piVar7 + 2);
 iVar26 = 0;
 if (piVar18 != (int *)0x0) {
 do {
 piVar20 = *(int **)(piVar18 + 2);
 iVar24 = 0;
 iVar21 = *piVar18;
 if (piVar20 != (int *)0x0) {
 do {
 piVar3 = *(int **)(piVar20 + 2);
 iVar8 = 0;
 iVar27 = *piVar20;
 if (piVar3 != (int *)0x0) {
 do {
 iVar9 = *piVar3;
 piVar19 = *(int **)(piVar3 + 2);
 iVar25 = 0;
 if (piVar19 != (int *)0x0) {
 do {
 piVar22 = *(int **)(piVar19 + 2);
 iVar4 = 0;
 iVar23 = *piVar19;
 if (piVar22 != (int *)0x0) {
 do {
 iVar2 = binary_tree_sum(*(unsigned long long *)(piVar22 + 2));
 iVar1 = *piVar22;
 piVar22 = *(int **)(piVar22 + 4);
 iVar4 = iVar4 + iVar2 + iVar1;
 } while (piVar22 != (int *)0x0);
 iVar23 = iVar23 + iVar4;
 }
 piVar19 = *(int **)(piVar19 + 4);
 iVar25 = iVar25 + iVar23;
 } while (piVar19 != (int *)0x0);
 iVar9 = iVar9 + iVar25;
 }
 piVar3 = *(int **)(piVar3 + 4);
 iVar8 = iVar8 + iVar9;
 } while (piVar3 != (int *)0x0);
 iVar27 = iVar27 + iVar8;
 }
 piVar20 = *(int **)(piVar20 + 4);
 iVar24 = iVar24 + iVar27;
 } while (piVar20 != (int *)0x0);
 iVar21 = iVar21 + iVar24;
 }
 piVar18 = *(int **)(piVar18 + 4);
 iVar26 = iVar26 + iVar21;
 } while (piVar18 != (int *)0x0);
 iVar17 = iVar17 + iVar26;
 }
 piVar7 = *(int **)(piVar7 + 4);
 iVar16 = iVar16 + iVar17;
 } while (piVar7 != (int *)0x0);
 piVar6 = *(int **)(piVar6 + 4);
 iVar14 = iVar14 + iVar15 + iVar16;
 while( true ) {
 if (piVar6 == (int *)0x0) {
 piVar5 = *(int **)(piVar5 + 4);
 iVar12 = iVar12 + iVar13 + iVar14;
 while( true ) {
 if (piVar5 == (int *)0x0) {
 param_1 = *(int **)(param_1 + 4);
 iVar10 = iVar10 + iVar11 + iVar12;
 while( true ) {
 if (param_1 == (int *)0x0) {
 return iVar10;
 }
 piVar5 = *(int **)(param_1 + 2);
 iVar12 = 0;
 iVar11 = *param_1;
 if (piVar5 != (int *)0x0) break;
 param_1 = *(int **)(param_1 + 4);
 iVar10 = iVar10 + iVar11;
 }
 }
 piVar6 = *(int **)(piVar5 + 2);
 iVar14 = 0;
 iVar13 = *piVar5;
 if (piVar6 != (int *)0x0) break;
 piVar5 = *(int **)(piVar5 + 4);
 iVar12 = iVar12 + iVar13;
 }
 }
 piVar7 = *(int **)(piVar6 + 2);
 iVar16 = 0;
 iVar15 = *piVar6;
 if (piVar7 != (int *)0x0) break;
 piVar6 = *(int **)(piVar6 + 4);
 iVar14 = iVar14 + iVar15;
 }
 } while( true );
 }
 piVar6 = *(int **)(piVar6 + 4);
 iVar14 = iVar14 + iVar15;
 } while (piVar6 != (int *)0x0);
 iVar13 = iVar13 + iVar14;
 }
 piVar5 = *(int **)(piVar5 + 4);
 iVar12 = iVar12 + iVar13;
 } while (piVar5 != (int *)0x0);
 iVar11 = iVar11 + iVar12;
 }
 param_1 = *(int **)(param_1 + 4);
 iVar10 = iVar10 + iVar11;
 } while (param_1 != (int *)0x0);
 }
 return iVar10;
}

// Function: binary_tree @ 0x101670
int binary_tree(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar3 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar2 = binary_tree_sum((int *)*(unsigned long long *)(param_1 + 2));
 iVar1 = *param_1;
 param_1 = *(int **)(param_1 + 4);
 iVar3 = iVar3 + iVar2 + iVar1;
 } while (param_1 != (int *)0x0);
 }
 return iVar3;
}

// Function: graph_traverse @ 0x1016b4
int graph_traverse(long param_1)
{
 int iVar1;
 int *piVar2;
 long lVar3;
 if (*(int *)(param_1 + 0x50) < 1) {
 return 0;
 }
 lVar3 = 0;
 iVar1 = 0;
 do {
 for (piVar2 = *(int **)(param_1 + lVar3 * 8); piVar2 != (int *)0x0;
 piVar2 = *(int **)(piVar2 + 2)) {
 iVar1 = iVar1 + *piVar2;
 }
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < *(int *)(param_1 + 0x50));
 return iVar1;
}

// Function: test_composite_types @ 0x101700
void test_composite_types(void)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 int local_58 [2];
 unsigned int *local_50;
 unsigned int local_48 [2];
 unsigned long long local_40;
 int local_38 [2];
 unsigned int *local_30;
 unsigned long long uStack_28;
 unsigned int local_20 [2];
 unsigned long long local_18;
 int *piStack_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts((char*)&DAT_001031e8);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",9);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",0x1e);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",0x6a);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",0x3c);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",0x15);
 local_40 = 0;
 iVar3 = 10;
 iVar1 = 0;
 local_58[0] = 0x14;
 local_50 = local_48;
 local_48[0] = 0x1e;
 for (piVar2 = local_58; iVar1 = iVar1 + iVar3, piVar2 != (int *)0x0;
 piVar2 = *(int **)(piVar2 + 2)) {
 iVar3 = *piVar2;
 }
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar1);
 piVar2 = local_38;
 iVar3 = 10;
 iVar1 = 0;
 local_38[0] = 10;
 local_30 = local_20;
 uStack_28 = 0;
 local_20[0] = 0x14;
 local_18 = 0;
 piStack_10 = piVar2;
 while( true ) {
 piVar2 = *(int **)(piVar2 + 2);
 iVar1 = iVar1 + iVar3;
 if (piVar2 == (int *)0x0) break;
 iVar3 = *piVar2;
 }
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar1);
 iVar1 = binary_tree_sum((int*)0);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",iVar1 + 100);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",1);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail((void*)__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: FUN_0010190c @ 0x10190c
unsigned long FUN_0010190c(unsigned long param_1,unsigned long param_2)
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
 uVar10 = get_fpcr();
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
 if (uVar15 != 0x7fff) goto LAB_00102200;
 if ((uVar12 | uVar20) == 0) {
 return 0;
 }
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar6 = (uint)uVar8;
 if (uVar15 != 0x7fff) goto LAB_001023a8;
 if ((uVar12 | uVar20) == 0) goto LAB_00102440;
 }
LAB_0010246c:
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar11 != 0) {
LAB_001023b0:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101df4;
 }
LAB_00102200:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 else {
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) != 0) goto LAB_0010246c;
 if (uVar11 == 0) {
 return 0;
 }
 }
 else {
 if (uVar11 == 0) goto LAB_00102200;
LAB_001023a8:
 if ((uVar12 | uVar20) != 0) goto LAB_001023b0;
 }
LAB_00102440:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 }
 goto LAB_00101df4;
 }
 if (uVar11 == 0) {
 uVar19 = uVar20;
 uVar9 = uVar12;
 if ((uVar12 | uVar20) == 0) {
 param_1 = 0;
 goto LAB_00101aa8;
 }
 goto LAB_00102178;
 }
 if ((uVar12 | uVar20) == 0) goto LAB_00102178;
 uVar19 = uVar18 + uVar20;
 uVar9 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 if ((uVar9 >> 0x33 & 1) != 0) {
 uVar9 = uVar9 & 0xfff7ffffffffffff;
 uVar12 = 0;
 bVar3 = false;
 uVar11 = 1;
 goto LAB_00101a5c;
 }
LAB_00101a48:
 lVar7 = lVar14;
 uVar18 = uVar19 | uVar9;
 goto joined_r0x00101b9c;
 }
 if (uVar11 != 0x7fff) {
 uVar19 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 bVar3 = false;
 uVar12 = uVar18 + uVar20 >> 1 & 7;
 uVar9 = uVar19 >> 1;
 uVar19 = uVar18 + uVar20 >> 1 | uVar19 << 0x3f;
 goto LAB_00101a5c;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) goto LAB_001021a4;
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) goto LAB_00102450;
 if (uVar19 != 0x800000) goto LAB_00102114;
 if (lVar14 == 0) goto LAB_001023ec;
LAB_001022b8:
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
 goto LAB_00101c30;
 }
 goto LAB_00101ee4;
 }
 goto LAB_00101b8c;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_00101d48;
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
 goto LAB_00101df4;
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
LAB_00101d48:
 uVar15 = uVar17;
 uVar19 = uVar18;
 uVar9 = uVar12;
 lVar7 = lVar14;
 if ((uVar12 >> 0x33 & 1) == 0) goto LAB_00101b8c;
 uVar11 = uVar17 + 1;
 if (uVar11 != 0x7fff) {
 bVar3 = false;
 uVar19 = uVar18 & 1 | uVar18 >> 1 | uVar12 << 0x3f;
 uVar9 = (uVar12 & 0xfff7ffffffffffff) >> 1;
 uVar12 = uVar18 & 1 | uVar18 >> 1 & 7;
 goto LAB_00101a5c;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) {
LAB_001021a4:
 uVar8 = 0x14;
 goto LAB_00101c9c;
 }
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) {
LAB_00102450:
 uVar8 = 0x14;
 goto LAB_00101c9c;
 }
 if (uVar19 == 0x800000) {
 if (lVar14 != 0) goto LAB_001022b8;
LAB_001023ec:
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto LAB_00101a8c;
 }
LAB_00102114:
 uVar6 = 0x14;
 if ((uVar10 & 0xc00000) == 0x400000) {
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 bVar3 = false;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto joined_r0x00102134;
 }
LAB_00101c58:
 uVar10 = uVar10 & 0xc00000;
 if (uVar10 != 0) {
 if (uVar10 == 0x400000) {
 if (lVar14 != 0) goto LAB_00101c74;
 }
 else if (((uint)(uVar10 == 0x800000) & (uint)lVar14) == 0) {
LAB_00101c74:
 param_1 = 0xffffffffffffffff;
 uVar8 = (unsigned long)(uVar6 | 0x14);
 goto LAB_00101aa8;
 }
 }
 uVar8 = (unsigned long)(uVar6 | 0x14);
 }
LAB_00101c9c:
 param_1 = 0;
 goto LAB_00101cb0;
 }
 if (uVar15 == 0) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = (unsigned long)(uVar6 - 1);
 if (uVar6 - 1 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_00101d48;
 }
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 goto LAB_00101c24;
 }
 goto LAB_00101b20;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 != 0x7fff) goto LAB_00101b8c;
 if ((uVar21 | uVar18) == 0) goto LAB_00101ee4;
 uVar8 = (unsigned long)((uint)(uVar1 >> 0x32) ^ 1);
 uVar20 = uVar18;
 uVar12 = uVar21;
LAB_00101c30:
 uVar11 = 0x7fff;
 goto LAB_00101c38;
 }
 uVar12 = uVar12 | 0x8000000000000;
 if (uVar17 != 0x7fff) {
LAB_00101b20:
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
 goto LAB_00101d48;
 }
LAB_00101dd4:
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar19 = in_register_00005008 & 0xffffffffffff;
LAB_00101df4:
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
 goto LAB_00101c30;
 }
 goto LAB_00101ee4;
 }
 goto LAB_00101b8c;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 goto LAB_001019dc;
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
 goto LAB_00101df4;
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
 goto LAB_001019dc;
 }
 if ((uVar17 + 1 & 0x7ffe) != 0) {
 uVar19 = uVar18 + param_2 * -8;
 uVar13 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar13 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar13) == 0) {
 param_1 = 0;
 goto LAB_00101aa8;
 }
 }
 else {
 uVar19 = uVar20 + param_1 * -8;
 uVar13 = uVar12 - (uVar21 + (uVar20 < uVar18));
 lVar14 = lVar7;
 }
 goto LAB_001019e4;
 }
 uVar16 = uVar21 | uVar18;
 uVar11 = uVar12 | uVar20;
 if (uVar17 != 0) {
 if (uVar17 == 0x7fff) {
 if (uVar16 == 0) {
 if (uVar15 != 0x7fff) goto LAB_001020b8;
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 if (uVar15 != 0x7fff) goto LAB_00102088;
 }
LAB_00102300:
 if (uVar11 != 0) {
 uVar6 = (uint)uVar8;
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar16 == 0) {
LAB_0010237c:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 goto LAB_00101df4;
 }
LAB_00102318:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101df4;
 }
 if (uVar16 != 0) goto LAB_00102088;
 }
 else {
 if (uVar15 == 0x7fff) goto LAB_00102300;
 if (uVar16 != 0) {
LAB_00102088:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if (uVar11 == 0) goto LAB_00101df4;
 goto LAB_00102318;
 }
LAB_001020b8:
 if (uVar11 != 0) goto LAB_0010237c;
 }
 param_1 = 0xffffffffffffffff;
 uVar8 = 1;
 goto LAB_00101aa8;
 }
 if (uVar16 != 0) {
 if (uVar11 == 0) goto LAB_00102178;
 uVar19 = uVar18 + param_2 * -8;
 uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar9 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar9) != 0) {
 uVar12 = 0;
 bVar3 = true;
 uVar11 = uVar17;
 goto LAB_00101a5c;
 }
 goto LAB_00102250;
 }
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 uVar18 = uVar19 | uVar9;
 goto joined_r0x00101b9c;
 }
 uVar19 = uVar20;
 uVar9 = uVar12;
 lVar14 = lVar7;
 if (uVar11 == 0) {
LAB_00102250:
 param_1 = 0;
 goto LAB_00101aa8;
 }
LAB_00102178:
 uVar18 = 0;
 uVar11 = 0;
LAB_00102180:
 uVar8 = 0;
 if (((uint)uVar10 >> 0xb & 1) != 0) {
 uVar8 = 8;
 }
LAB_00101a88:
 uVar20 = uVar19;
 uVar12 = uVar9;
 if (uVar18 == 0) {
LAB_00101c38:
 param_1 = uVar20 >> 3 | uVar12 << 0x3d;
 uVar19 = uVar12 >> 3;
 if (uVar11 == 0x7fff) goto LAB_00101df4;
 }
 else {
LAB_00101a8c:
 uVar6 = (uint)uVar8;
 if (uVar11 == 0x7ffe) goto LAB_00101c58;
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
 goto LAB_001019dc;
 }
 goto LAB_00101988;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) != 0) {
LAB_00101c24:
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar20 = uVar18;
 uVar12 = uVar21;
 goto LAB_00101c30;
 }
LAB_00101ee4:
 uVar8 = 0;
 uVar19 = 0;
 param_1 = 0;
 goto LAB_00101df4;
 }
 }
 else {
 uVar12 = uVar12 | 0x8000000000000;
LAB_00101988:
 if (uVar17 == 0x7fff) goto LAB_00101dd4;
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
LAB_001019dc:
 uVar13 = uVar9 & 0x7ffffffffffff;
 uVar17 = uVar15;
 lVar14 = lVar7;
 if ((uVar9 >> 0x33 & 1) != 0) {
LAB_001019e4:
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
 if ((int)uVar6 < 0x40) goto LAB_001019f0;
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
LAB_001019f0:
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
 goto LAB_00101a48;
 }
 uVar19 = uVar12 | uVar18 << ((unsigned long)(0x80 - uVar6) & 0x3f);
 if (uVar6 == 0x40) {
 uVar19 = uVar12;
 }
 uVar9 = 0;
 uVar19 = (unsigned long)(uVar19 != 0) | uVar18 >> ((unsigned long)(iVar5 - 0x3f) & 0x3f);
 uVar18 = uVar19;
 goto joined_r0x00101b9c;
 }
 uVar15 = uVar17 - (long)(int)uVar6;
 uVar19 = uVar12;
 uVar9 = uVar18 & 0xfff7ffffffffffff;
 }
 }
LAB_00101b8c:
 uVar12 = uVar19 & 7;
 bVar3 = false;
 uVar11 = uVar15;
 lVar14 = lVar7;
 uVar18 = uVar19 | uVar9;
 if (uVar15 != 0) {
LAB_00101a5c:
 if (uVar12 == 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0;
 if (bVar3) goto LAB_00102180;
 }
 else {
 uVar12 = uVar10 & 0xc00000;
 if (uVar12 == 0x400000) {
 uVar8 = 0x10;
joined_r0x00102134:
 if (lVar14 == 0) {
LAB_00101d84:
 bVar4 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar4) {
 uVar9 = uVar9 + 1;
 }
 }
 }
 else if (uVar12 == 0x800000) {
 uVar8 = 0x10;
 if (lVar14 != 0) goto LAB_00101d84;
 }
 else {
 if (uVar12 != 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0x10;
 if (bVar3) {
 uVar8 = 0x18;
 }
 goto LAB_00101a88;
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
 goto LAB_00101a88;
 }
joined_r0x00101b9c:
 if (uVar18 != 0) {
 uVar12 = uVar19 & 7;
 bVar3 = true;
 uVar11 = 0;
 lVar14 = lVar7;
 goto LAB_00101a5c;
 }
 param_1 = 0;
 uVar8 = 0;
 }
 }
LAB_00101aa8:
 if ((int)uVar8 == 0) {
 return param_1;
 }
LAB_00101cb0:
 __sfp_handle_exceptions(uVar8, fpsr);
 return param_1;
}

// Function: __addtf3 @ 0x101910
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
 uVar10 = get_fpcr();
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
 if (uVar15 != 0x7fff) goto LAB_00102200;
 if ((uVar12 | uVar20) == 0) {
 return 0;
 }
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar6 = (uint)uVar8;
 if (uVar15 != 0x7fff) goto LAB_001023a8;
 if ((uVar12 | uVar20) == 0) goto LAB_00102440;
 }
LAB_0010246c:
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar11 != 0) {
LAB_001023b0:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101df4;
 }
LAB_00102200:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 else {
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) != 0) goto LAB_0010246c;
 if (uVar11 == 0) {
 return 0;
 }
 }
 else {
 if (uVar11 == 0) goto LAB_00102200;
LAB_001023a8:
 if ((uVar12 | uVar20) != 0) goto LAB_001023b0;
 }
LAB_00102440:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 }
 goto LAB_00101df4;
 }
 if (uVar11 == 0) {
 uVar19 = uVar20;
 uVar9 = uVar12;
 if ((uVar12 | uVar20) == 0) {
 param_1 = 0;
 goto LAB_00101aa8;
 }
 goto LAB_00102178;
 }
 if ((uVar12 | uVar20) == 0) goto LAB_00102178;
 uVar19 = uVar18 + uVar20;
 uVar9 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 if ((uVar9 >> 0x33 & 1) != 0) {
 uVar9 = uVar9 & 0xfff7ffffffffffff;
 uVar12 = 0;
 bVar3 = false;
 uVar11 = 1;
 goto LAB_00101a5c;
 }
LAB_00101a48:
 lVar7 = lVar14;
 uVar18 = uVar19 | uVar9;
 goto joined_r0x00101b9c;
 }
 if (uVar11 != 0x7fff) {
 uVar19 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 bVar3 = false;
 uVar12 = uVar18 + uVar20 >> 1 & 7;
 uVar9 = uVar19 >> 1;
 uVar19 = uVar18 + uVar20 >> 1 | uVar19 << 0x3f;
 goto LAB_00101a5c;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) goto LAB_001021a4;
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) goto LAB_00102450;
 if (uVar19 != 0x800000) goto LAB_00102114;
 if (lVar14 == 0) goto LAB_001023ec;
LAB_001022b8:
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
 goto LAB_00101c30;
 }
 goto LAB_00101ee4;
 }
 goto LAB_00101b8c;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_00101d48;
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
 goto LAB_00101df4;
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
LAB_00101d48:
 uVar15 = uVar17;
 uVar19 = uVar18;
 uVar9 = uVar12;
 lVar7 = lVar14;
 if ((uVar12 >> 0x33 & 1) == 0) goto LAB_00101b8c;
 uVar11 = uVar17 + 1;
 if (uVar11 != 0x7fff) {
 bVar3 = false;
 uVar19 = uVar18 & 1 | uVar18 >> 1 | uVar12 << 0x3f;
 uVar9 = (uVar12 & 0xfff7ffffffffffff) >> 1;
 uVar12 = uVar18 & 1 | uVar18 >> 1 & 7;
 goto LAB_00101a5c;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) {
LAB_001021a4:
 uVar8 = 0x14;
 goto LAB_00101c9c;
 }
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) {
LAB_00102450:
 uVar8 = 0x14;
 goto LAB_00101c9c;
 }
 if (uVar19 == 0x800000) {
 if (lVar14 != 0) goto LAB_001022b8;
LAB_001023ec:
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto LAB_00101a8c;
 }
LAB_00102114:
 uVar6 = 0x14;
 if ((uVar10 & 0xc00000) == 0x400000) {
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 bVar3 = false;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto joined_r0x00102134;
 }
LAB_00101c58:
 uVar10 = uVar10 & 0xc00000;
 if (uVar10 != 0) {
 if (uVar10 == 0x400000) {
 if (lVar14 != 0) goto LAB_00101c74;
 }
 else if (((uint)(uVar10 == 0x800000) & (uint)lVar14) == 0) {
LAB_00101c74:
 param_1 = 0xffffffffffffffff;
 uVar8 = (unsigned long)(uVar6 | 0x14);
 goto LAB_00101aa8;
 }
 }
 uVar8 = (unsigned long)(uVar6 | 0x14);
 }
LAB_00101c9c:
 param_1 = 0;
 goto LAB_00101cb0;
 }
 if (uVar15 == 0) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = (unsigned long)(uVar6 - 1);
 if (uVar6 - 1 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_00101d48;
 }
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 goto LAB_00101c24;
 }
 goto LAB_00101b20;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 != 0x7fff) goto LAB_00101b8c;
 if ((uVar21 | uVar18) == 0) goto LAB_00101ee4;
 uVar8 = (unsigned long)((uint)(uVar1 >> 0x32) ^ 1);
 uVar20 = uVar18;
 uVar12 = uVar21;
LAB_00101c30:
 uVar11 = 0x7fff;
 goto LAB_00101c38;
 }
 uVar12 = uVar12 | 0x8000000000000;
 if (uVar17 != 0x7fff) {
LAB_00101b20:
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
 goto LAB_00101d48;
 }
LAB_00101dd4:
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar19 = in_register_00005008 & 0xffffffffffff;
LAB_00101df4:
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
 goto LAB_00101c30;
 }
 goto LAB_00101ee4;
 }
 goto LAB_00101b8c;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 goto LAB_001019dc;
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
 goto LAB_00101df4;
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
 goto LAB_001019dc;
 }
 if ((uVar17 + 1 & 0x7ffe) != 0) {
 uVar19 = uVar18 + param_2 * -8;
 uVar13 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar13 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar13) == 0) {
 param_1 = 0;
 goto LAB_00101aa8;
 }
 }
 else {
 uVar19 = uVar20 + param_1 * -8;
 uVar13 = uVar12 - (uVar21 + (uVar20 < uVar18));
 lVar14 = lVar7;
 }
 goto LAB_001019e4;
 }
 uVar16 = uVar21 | uVar18;
 uVar11 = uVar12 | uVar20;
 if (uVar17 != 0) {
 if (uVar17 == 0x7fff) {
 if (uVar16 == 0) {
 if (uVar15 != 0x7fff) goto LAB_001020b8;
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 if (uVar15 != 0x7fff) goto LAB_00102088;
 }
LAB_00102300:
 if (uVar11 != 0) {
 uVar6 = (uint)uVar8;
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar16 == 0) {
LAB_0010237c:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 goto LAB_00101df4;
 }
LAB_00102318:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101df4;
 }
 if (uVar16 != 0) goto LAB_00102088;
 }
 else {
 if (uVar15 == 0x7fff) goto LAB_00102300;
 if (uVar16 != 0) {
LAB_00102088:
 uVar19 = in_register_00005008 & 0xffffffffffff;
 if (uVar11 == 0) goto LAB_00101df4;
 goto LAB_00102318;
 }
LAB_001020b8:
 if (uVar11 != 0) goto LAB_0010237c;
 }
 param_1 = 0xffffffffffffffff;
 uVar8 = 1;
 goto LAB_00101aa8;
 }
 if (uVar16 != 0) {
 if (uVar11 == 0) goto LAB_00102178;
 uVar19 = uVar18 + param_2 * -8;
 uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar9 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar9) != 0) {
 uVar12 = 0;
 bVar3 = true;
 uVar11 = uVar17;
 goto LAB_00101a5c;
 }
 goto LAB_00102250;
 }
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 uVar18 = uVar19 | uVar9;
 goto joined_r0x00101b9c;
 }
 uVar19 = uVar20;
 uVar9 = uVar12;
 lVar14 = lVar7;
 if (uVar11 == 0) {
LAB_00102250:
 param_1 = 0;
 goto LAB_00101aa8;
 }
LAB_00102178:
 uVar18 = 0;
 uVar11 = 0;
LAB_00102180:
 uVar8 = 0;
 if (((uint)uVar10 >> 0xb & 1) != 0) {
 uVar8 = 8;
 }
LAB_00101a88:
 uVar20 = uVar19;
 uVar12 = uVar9;
 if (uVar18 == 0) {
LAB_00101c38:
 param_1 = uVar20 >> 3 | uVar12 << 0x3d;
 uVar19 = uVar12 >> 3;
 if (uVar11 == 0x7fff) goto LAB_00101df4;
 }
 else {
LAB_00101a8c:
 uVar6 = (uint)uVar8;
 if (uVar11 == 0x7ffe) goto LAB_00101c58;
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
 goto LAB_001019dc;
 }
 goto LAB_00101988;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) != 0) {
LAB_00101c24:
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar20 = uVar18;
 uVar12 = uVar21;
 goto LAB_00101c30;
 }
LAB_00101ee4:
 uVar8 = 0;
 uVar19 = 0;
 param_1 = 0;
 goto LAB_00101df4;
 }
 }
 else {
 uVar12 = uVar12 | 0x8000000000000;
LAB_00101988:
 if (uVar17 == 0x7fff) goto LAB_00101dd4;
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
LAB_001019dc:
 uVar13 = uVar9 & 0x7ffffffffffff;
 uVar17 = uVar15;
 lVar14 = lVar7;
 if ((uVar9 >> 0x33 & 1) != 0) {
LAB_001019e4:
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
 if ((int)uVar6 < 0x40) goto LAB_001019f0;
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
LAB_001019f0:
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
 goto LAB_00101a48;
 }
 uVar19 = uVar12 | uVar18 << ((unsigned long)(0x80 - uVar6) & 0x3f);
 if (uVar6 == 0x40) {
 uVar19 = uVar12;
 }
 uVar9 = 0;
 uVar19 = (unsigned long)(uVar19 != 0) | uVar18 >> ((unsigned long)(iVar5 - 0x3f) & 0x3f);
 uVar18 = uVar19;
 goto joined_r0x00101b9c;
 }
 uVar15 = uVar17 - (long)(int)uVar6;
 uVar19 = uVar12;
 uVar9 = uVar18 & 0xfff7ffffffffffff;
 }
 }
LAB_00101b8c:
 uVar12 = uVar19 & 7;
 bVar3 = false;
 uVar11 = uVar15;
 lVar14 = lVar7;
 uVar18 = uVar19 | uVar9;
 if (uVar15 != 0) {
LAB_00101a5c:
 if (uVar12 == 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0;
 if (bVar3) goto LAB_00102180;
 }
 else {
 uVar12 = uVar10 & 0xc00000;
 if (uVar12 == 0x400000) {
 uVar8 = 0x10;
joined_r0x00102134:
 if (lVar14 == 0) {
LAB_00101d84:
 bVar4 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar4) {
 uVar9 = uVar9 + 1;
 }
 }
 }
 else if (uVar12 == 0x800000) {
 uVar8 = 0x10;
 if (lVar14 != 0) goto LAB_00101d84;
 }
 else {
 if (uVar12 != 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0x10;
 if (bVar3) {
 uVar8 = 0x18;
 }
 goto LAB_00101a88;
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
 goto LAB_00101a88;
 }
joined_r0x00101b9c:
 if (uVar18 != 0) {
 uVar12 = uVar19 & 7;
 bVar3 = true;
 uVar11 = 0;
 lVar14 = lVar7;
 goto LAB_00101a5c;
 }
 param_1 = 0;
 uVar8 = 0;
 }
 }
LAB_00101aa8:
 if ((int)uVar8 == 0) {
 return param_1;
 }
LAB_00101cb0:
 __sfp_handle_exceptions(uVar8, fpsr);
 return param_1;
}

// Function: __multf3 @ 0x1024b0
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
 uVar17 = get_fpcr();
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
 if (lVar22 < 0x3d) goto LAB_00102908;
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
LAB_00102908:
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
 if (lVar8 < 0x3d) goto LAB_001028ac;
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
LAB_001028ac:
 uVar7 = (unsigned long)((int)lVar8 + 3);
 uVar21 = param_2 >> ((unsigned long)(0x3d - (int)lVar8) & 0x3f) | uVar13 << (uVar7 & 0x3f);
 param_2 = param_2 << (uVar7 & 0x3f);
 }
 lVar20 = (lVar14 - lVar12) + -0x3fef;
 lVar8 = (lVar14 - lVar12) + -0x3fee;
 lVar12 = 0;
 }
 uVar7 = (unsigned long)((uVar4 ^ uVar2) >> 0x1f);
 if (uVar6 < 0xb) goto LAB_001025bc;
LAB_00102570:
 if (uVar6 != 0xb) {
LAB_00102578:
 uVar18 = uVar11;
 uVar21 = uVar19;
 uVar23 = in_register_00005008 >> 0x3f;
 lVar9 = lVar22;
 goto LAB_0010267c;
 }
LAB_00102698:
 uVar11 = param_2;
 uVar7 = uVar15;
 if (lVar12 != 3) {
LAB_001025d8:
 lVar20 = lVar8;
 if (lVar12 == 1) {
 uVar11 = 0;
 }
 else {
LAB_0010283c:
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
 goto LAB_00102aa4;
 }
 iVar10 = (int)uVar19;
 if ((long)uVar19 < 0x40) {
 uVar11 = (unsigned long)(param_2 << ((unsigned long)(0x40 - iVar10) & 0x3f) != 0);
 uVar6 = uVar21 << ((unsigned long)(0x40 - iVar10) & 0x3f) | param_2 >> (uVar19 & 0x3f);
 uVar21 = uVar21 >> (uVar19 & 0x3f);
 uVar19 = uVar6 | uVar11;
 if ((uVar6 & 7 | uVar11) != 0) goto LAB_00102a24;
 if ((uVar21 >> 0x33 & 1) == 0) goto LAB_00102b6c;
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
LAB_00102b6c:
 uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
 if (((uint)uVar17 >> 0xb & 1) != 0) {
 uVar5 = (unsigned long)(uVar4 | 8);
 goto LAB_00102aa4;
 }
 goto LAB_001025ec;
 }
 uVar21 = 0;
LAB_00102a24:
 uVar17 = uVar17 & 0xc00000;
 if (uVar17 == 0x400000) {
 if (uVar7 == 0) {
LAB_00102bcc:
 bVar3 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar17 == 0x800000) {
 if (uVar7 != 0) goto LAB_00102bcc;
 }
 else if (((uVar17 == 0) && ((uVar19 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
 uVar21 = uVar21 + 1;
 }
 if ((uVar21 >> 0x33 & 1) == 0) {
 uVar5 = (unsigned long)(uVar4 | 0x18);
 uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
 goto LAB_00102aa4;
 }
 }
 uVar5 = (unsigned long)(uVar4 | 0x18);
 uVar11 = 0;
 goto LAB_00102aa4;
 }
 if ((param_2 & 7) != 0) {
 uVar19 = uVar17 & 0xc00000;
 uVar5 = (unsigned long)(uVar4 | 0x10);
 if (uVar19 == 0x400000) {
 if (uVar7 == 0) {
LAB_00102bbc:
 bVar3 = 0xfffffffffffffff7 < param_2;
 param_2 = param_2 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar19 == 0x800000) {
 if (uVar7 != 0) goto LAB_00102bbc;
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
 goto LAB_00102aa4;
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
 goto LAB_001025bc;
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
 if (uVar6 < 0xb) goto LAB_00102638;
 lVar9 = 3;
 }
 lVar8 = lVar14 + 0x8000;
 if (uVar6 != 0xf) {
 uVar18 = param_2;
 uVar21 = uVar13;
 uVar23 = uVar15;
 if (uVar6 != 0xb) goto LAB_00102578;
 goto LAB_0010267c;
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
 if (10 < uVar6) goto LAB_00102570;
LAB_001025bc:
 uVar13 = uVar21;
 if (uVar6 < 3) {
 if (uVar6 - 1 < 2) {
 if (lVar12 == 2) goto LAB_001026cc;
 goto LAB_001025d8;
 }
LAB_001026dc:
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
 goto LAB_0010283c;
 }
LAB_00102638:
 uVar6 = 1L << uVar6;
 uVar18 = uVar11;
 uVar21 = uVar19;
 uVar23 = uVar7;
 lVar9 = lVar22;
 if ((uVar6 & 0x530) == 0) {
 if ((uVar6 & 0x240) != 0) {
 uVar5 = 1;
 uVar11 = 0xffffffffffffffff;
 goto LAB_001025ec;
 }
 uVar18 = param_2;
 uVar21 = uVar13;
 uVar23 = uVar15;
 lVar9 = lVar12;
 if ((uVar6 & 0x88) == 0) goto LAB_001026dc;
 }
LAB_0010267c:
 lVar12 = lVar9;
 uVar15 = uVar23;
 param_2 = uVar18;
 if (lVar12 != 2) goto LAB_00102698;
LAB_001026cc:
 uVar11 = 0;
 }
LAB_001025ec:
 if ((int)uVar5 == 0) {
 return uVar11;
 }
LAB_00102aa4:
 __sfp_handle_exceptions(uVar5);
 return uVar11;
}

// Function: __sfp_handle_exceptions @ 0x102cb0
void __sfp_handle_exceptions(unsigned long param_1, unsigned long long param_2)
{
 uint uVar1;
 unsigned long long auVar2;
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
 auVar2 = ((unsigned long long)param_1 << 0x38) | ((unsigned long long)param_2 << 0x20);
 return auVar2;
}

// Function: _fini @ 0x102d20
void _fini(void)
{
 return;
}

