// Decompiled by BinaryAI
// SHA256: 33e902f700bbd2634428844ed2dd214d7d2214f63056013aa8694e7397067aa0

#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned long ulong;
typedef long long llong;
typedef unsigned long long ullong;
typedef unsigned char byte;

// External declarations
void* __dso_handle = 0;



// Stub implementation for floating point exception handler
static void __sfp_handle_exceptions(unsigned long param_1, int param_2)
{
 (void)param_1;
 (void)param_2;
 return;
}

// Function declarations
extern int call_weak_fn(int ctx);
extern int __libc_start_main(int (*main)(void), int argc, void **argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end);
extern void __cxa_finalize(void *dso_handle);
extern void __gmon_start__(void);
extern void abort(void);
extern int puts(const char *__s);
extern int printf(const char *__format,...);
unsigned long __multf3_local(unsigned long param_1, unsigned long param_2);
unsigned long __addtf3_local(unsigned long param_1, unsigned long param_2);


// Stub implementation for NEON fmadd
unsigned int NEON_fmadd(unsigned int a, unsigned int b, unsigned int c)
{
 return a + b + c;
}

extern int main(void);

// Global variables
char DAT_001031ef = 0;
char DAT_00103210 = 0;
char DAT_0010322b = 0;
char DAT_00103246 = 0;
char DAT_00102ea0 = 0;
unsigned int DAT_00102c50[4] = {0, 0, 0, 0};
unsigned long fpcr = 0;
char completed_0 = 0;

// Macro definitions
#define CARRY8(x,y) ((unsigned long)((x) + (y)) < (unsigned long)(x))

// Function: _init @ 0x100608
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_00100620 @ 0x100620
void FUN_00100620(void)
{
 return;
}

// Function: _start @ 0x1006c0
void _start(unsigned long long param_1)
{
 __libc_start_main(main,0,(void*)0x0,(void (*)(void))0,(void (*)(void))0,(void*)0,(void*)param_1);
 abort();
}

// Function: call_weak_fn @ 0x1006f4
int call_weak_fn(int ctx)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x100710
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100740
void register_tm_clones(void)
{
 return;
}

// Function: FUN_0010077c @ 0x10077c
void FUN_0010077c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100780
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: process_char @ 0x1007d4
int process_char(int param_1)
{
 int iVar1;
 iVar1 = param_1 + 0x20;
 if (0x19 < (param_1 - 0x41U & 0xff)) {
 iVar1 = param_1;
 }
 return iVar1;
}

// Function: process_short @ 0x1007ec
int process_short(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: process_int @ 0x1007f4
uint process_int(int param_1)
{
 return param_1 << 1 | 1;
}

// Function: process_long @ 0x100804
long process_long(long param_1)
{
 return param_1 << 1;
}

// Function: process_ll @ 0x10080c
long process_ll(long param_1)
{
 return param_1 * param_1;
}

// Function: process_float @ 0x100814
unsigned int process_float(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = NEON_fmadd(param_1,0x3fc00000,0x3f000000);
 return uVar1;
}

// Function: process_double @ 0x100824
double process_double(double param_1)
{
 return param_1 * 0.5 + 0.1;
}

// Function: process_ld @ 0x10083c
void process_ld(unsigned long long param_1)
{
 unsigned long long uVar1;
 uVar1 = __multf3_local(param_1,param_1);
 __addtf3_local(uVar1,0);
 return;
}

// Function: process_bool @ 0x10085c
bool process_bool(uint param_1)
{
 return 0 < (int)param_1 && (param_1 & 1) == 0;
}

// Function: const_param @ 0x100874
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x100880
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x100890
int test_data_types_l1(void)
{
 int iVar1;
 puts(&DAT_001031ef);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000);
 printf("DT-L1-06 (process_float): %.2f\n",0x400c000000000000);
 printf("DT-L1-07 (process_double): %.2f\n",0x4000cccccccccccd);
 printf("DT-L1-08 (process_ld): %.2Lf\n",0);
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 iVar1 = printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return iVar1;
}

// Function: array_1d_stack @ 0x1009a4
int array_1d_stack(long param_1,uint param_2)
{
 unsigned long long *puVar1;
 unsigned long long *puVar2;
 unsigned long long *puVar3;
 unsigned long long *puVar4;
 unsigned long uVar5;
 long lVar6;
 unsigned long uVar7;
 unsigned long uVar8;
 int *piVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 unsigned long long uVar18;
 if ((int)param_2 < 1) {
 return 0;
 }
 uVar5 = (unsigned long)param_2;
 if (param_2 < 8) {
 uVar7 = 0;
 iVar10 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 puVar4 = (unsigned long long *)(param_1 + 0x10);
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 iVar17 = 0;
 uVar8 = uVar7;
 do {
 puVar1 = puVar4 + -2;
 puVar2 = puVar4 + -1;
 puVar3 = puVar4 + 1;
 uVar18 = *puVar4;
 puVar4 = puVar4 + 4;
 uVar8 = uVar8 - 8;
 iVar10 = (int)*puVar1 + iVar10;
 iVar11 = (int)((unsigned long)*puVar1 >> 0x20) + iVar11;
 iVar12 = (int)*puVar2 + iVar12;
 iVar13 = (int)((unsigned long)*puVar2 >> 0x20) + iVar13;
 iVar14 = (int)uVar18 + iVar14;
 iVar15 = (int)((unsigned long)uVar18 >> 0x20) + iVar15;
 iVar16 = (int)*puVar3 + iVar16;
 iVar17 = (int)((unsigned long)*puVar3 >> 0x20) + iVar17;
 } while (uVar8 != 0);
 iVar10 = iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13;
 if (uVar7 == uVar5) {
 return iVar10;
 }
 }
 lVar6 = uVar5 - uVar7;
 piVar9 = (int *)(param_1 + uVar7 * 4);
 do {
 lVar6 = lVar6 + -1;
 iVar10 = *piVar9 + iVar10;
 piVar9 = piVar9 + 1;
 } while (lVar6 != 0);
 return iVar10;
}

// Function: array_string @ 0x100a2c
int array_string(char *param_1)
{
 char cVar1;
 int iVar2;
 iVar2 = -1;
 do {
 cVar1 = *param_1;
 iVar2 = iVar2 + 1;
 param_1 = param_1 + 1;
 } while (cVar1 != '\0');
 return iVar2;
}

// Function: array_2d_stack @ 0x100a44
int array_2d_stack(int *param_1)
{
 return param_1[99] +
 param_1[0x58] +
 param_1[0x4d] +
 param_1[0x42] +
 param_1[0x37] + param_1[0x2c] + param_1[0x21] + param_1[0x16] + param_1[0xb] + *param_1;
}

// Function: array_3d @ 0x100a94
int array_3d(int *param_1)
{
 return (int)*(unsigned long long *)(param_1 + 0x6d) + (int)*(unsigned long long *)(param_1 + 0x75) +
 (int)*(unsigned long long *)(param_1 + 0x71) + (int)*(unsigned long long *)(param_1 + 0x79) +
 (int)*(unsigned long long *)(param_1 + 0x65) + (int)*(unsigned long long *)(param_1 + 0x69) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x6d) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x75) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x71) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x79) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x65) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x69) >> 0x20) +
 (int)*(unsigned long long *)(param_1 + 0x6f) + (int)*(unsigned long long *)(param_1 + 0x77) +
 (int)*(unsigned long long *)(param_1 + 0x73) + (int)*(unsigned long long *)(param_1 + 0x7b) +
 (int)*(unsigned long long *)(param_1 + 0x67) + (int)*(unsigned long long *)(param_1 + 0x6b) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x6f) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x77) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x73) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x7b) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x67) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x6b) >> 0x20) + param_1[100] +
 (int)*(unsigned long long *)(param_1 + 0x54) + (int)*(unsigned long long *)(param_1 + 0x5c) +
 (int)*(unsigned long long *)(param_1 + 0x58) + (int)*(unsigned long long *)(param_1 + 0x60) +
 (int)*(unsigned long long *)(param_1 + 0x4c) + (int)*(unsigned long long *)(param_1 + 0x50) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x54) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x5c) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x58) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x60) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x4c) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x50) >> 0x20) +
 (int)*(unsigned long long *)(param_1 + 0x56) + (int)*(unsigned long long *)(param_1 + 0x5e) +
 (int)*(unsigned long long *)(param_1 + 0x5a) + (int)*(unsigned long long *)(param_1 + 0x62) +
 (int)*(unsigned long long *)(param_1 + 0x4e) + (int)*(unsigned long long *)(param_1 + 0x52) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x56) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x5e) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x5a) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x62) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x4e) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x52) >> 0x20) + param_1[0x4b] +
 (int)*(unsigned long long *)(param_1 + 0x3b) + (int)*(unsigned long long *)(param_1 + 0x43) +
 (int)*(unsigned long long *)(param_1 + 0x3f) + (int)*(unsigned long long *)(param_1 + 0x47) +
 (int)*(unsigned long long *)(param_1 + 0x33) + (int)*(unsigned long long *)(param_1 + 0x37) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x3b) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x43) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x3f) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x47) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x33) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x37) >> 0x20) +
 (int)*(unsigned long long *)(param_1 + 0x3d) + (int)*(unsigned long long *)(param_1 + 0x45) +
 (int)*(unsigned long long *)(param_1 + 0x41) + (int)*(unsigned long long *)(param_1 + 0x49) +
 (int)*(unsigned long long *)(param_1 + 0x35) + (int)*(unsigned long long *)(param_1 + 0x39) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x3d) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x45) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x41) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x49) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x35) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x39) >> 0x20) + param_1[0x32] +
 (int)*(unsigned long long *)(param_1 + 0x22) + (int)*(unsigned long long *)(param_1 + 0x2a) +
 (int)*(unsigned long long *)(param_1 + 0x26) + (int)*(unsigned long long *)(param_1 + 0x2e) +
 (int)*(unsigned long long *)(param_1 + 0x1a) + (int)*(unsigned long long *)(param_1 + 0x1e) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x22) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x2a) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x26) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x2e) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x1a) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x1e) >> 0x20) +
 (int)*(unsigned long long *)(param_1 + 0x24) + (int)*(unsigned long long *)(param_1 + 0x2c) +
 (int)*(unsigned long long *)(param_1 + 0x28) + (int)*(unsigned long long *)(param_1 + 0x30) +
 (int)*(unsigned long long *)(param_1 + 0x1c) + (int)*(unsigned long long *)(param_1 + 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x24) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x2c) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x28) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x30) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x1c) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x20) >> 0x20) + param_1[0x19] +
 (int)*(unsigned long long *)(param_1 + 9) + (int)*(unsigned long long *)(param_1 + 0x11) +
 (int)*(unsigned long long *)(param_1 + 0xd) + (int)*(unsigned long long *)(param_1 + 0x15) +
 (int)*(unsigned long long *)(param_1 + 1) + (int)*(unsigned long long *)(param_1 + 5) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 9) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x11) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0xd) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x15) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 1) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 5) >> 0x20) +
 (int)*(unsigned long long *)(param_1 + 0xb) + (int)*(unsigned long long *)(param_1 + 0x13) +
 (int)*(unsigned long long *)(param_1 + 0xf) + (int)*(unsigned long long *)(param_1 + 0x17) +
 (int)*(unsigned long long *)(param_1 + 3) + (int)*(unsigned long long *)(param_1 + 7) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0xb) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x13) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0xf) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 0x17) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 3) >> 0x20) +
 (int)((unsigned long)*(unsigned long long *)(param_1 + 7) >> 0x20) + *param_1;
}

// Function: array_vla @ 0x100bcc
int array_vla(uint param_1,long param_2)
{
 unsigned long long *puVar1;
 unsigned long long *puVar2;
 unsigned long long *puVar3;
 unsigned long uVar4;
 long lVar5;
 unsigned long uVar6;
 unsigned long long *puVar7;
 int *piVar8;
 unsigned long uVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 unsigned long long uVar18;
 if ((int)param_1 < 1) {
 return 0;
 }
 uVar4 = (unsigned long)param_1;
 if (param_1 < 8) {
 uVar6 = 0;
 iVar10 = 0;
 }
 else {
 uVar6 = uVar4 & 0xfffffff8;
 puVar7 = (unsigned long long *)(param_2 + 0x10);
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 iVar17 = 0;
 uVar9 = uVar6;
 do {
 puVar1 = puVar7 + -2;
 puVar2 = puVar7 + -1;
 puVar3 = puVar7 + 1;
 uVar18 = *puVar7;
 puVar7 = puVar7 + 4;
 uVar9 = uVar9 - 8;
 iVar10 = (int)*puVar1 + iVar10;
 iVar11 = (int)((unsigned long)*puVar1 >> 0x20) + iVar11;
 iVar12 = (int)*puVar2 + iVar12;
 iVar13 = (int)((unsigned long)*puVar2 >> 0x20) + iVar13;
 iVar14 = (int)uVar18 + iVar14;
 iVar15 = (int)((unsigned long)uVar18 >> 0x20) + iVar15;
 iVar16 = (int)*puVar3 + iVar16;
 iVar17 = (int)((unsigned long)*puVar3 >> 0x20) + iVar17;
 } while (uVar9 != 0);
 iVar10 = iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13;
 if (uVar6 == uVar4) {
 return iVar10;
 }
 }
 lVar5 = uVar4 - uVar6;
 piVar8 = (int *)(param_2 + uVar6 * 4);
 do {
 lVar5 = lVar5 + -1;
 iVar10 = *piVar8 + iVar10;
 piVar8 = piVar8 + 1;
 } while (lVar5 != 0);
 return iVar10;
}

// Function: array_pointer @ 0x100c50
int array_pointer(int *param_1,uint param_2)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 unsigned long uVar5;
 long lVar6;
 unsigned long uVar7;
 int *piVar8;
 unsigned long uVar9;
 if ((int)param_2 < 1) {
 return 0;
 }
 uVar5 = (unsigned long)param_2;
 if (param_2 == 1) {
 uVar7 = 0;
 iVar3 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffffe;
 iVar4 = 0;
 iVar3 = 0;
 uVar9 = uVar7;
 piVar8 = param_1;
 do {
 iVar2 = *piVar8;
 uVar9 = uVar9 - 2;
 piVar1 = piVar8 + 10;
 piVar8 = piVar8 + 0x14;
 iVar4 = iVar2 + iVar4;
 iVar3 = *piVar1 + iVar3;
 } while (uVar9 != 0);
 iVar3 = iVar3 + iVar4;
 if (uVar7 == uVar5) {
 return iVar3;
 }
 }
 lVar6 = uVar5 - uVar7;
 piVar8 = param_1 + uVar7 * 10;
 do {
 lVar6 = lVar6 + -1;
 iVar3 = *piVar8 + iVar3;
 piVar8 = piVar8 + 10;
 } while (lVar6 != 0);
 return iVar3;
}

// Function: pointer_array @ 0x100cd8
int pointer_array(int **param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 if (9 < param_2) {
 param_2 = 10;
 }
 uVar2 = (unsigned long)param_2;
 do {
 if (*param_1 != (int *)0x0) {
 iVar1 = **param_1 + iVar1;
 }
 param_1 = param_1 + 1;
 uVar2 = uVar2 - 1;
 } while (uVar2 != 0);
 }
 return iVar1;
}

// Function: array_complex_index @ 0x100d20
unsigned int array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int uVar1;
 if (-1 < param_4) {
 uVar1 = 0xffffffff;
 if (((param_5 < param_3) && (param_4 < param_2)) && (-1 < param_5)) {
 uVar1 = *(unsigned int *)(param_1 + (long)(param_4 + param_5 * param_2) * 4);
 }
 return uVar1;
 }
 return 0xffffffff;
}

// Function: array_oob @ 0x100d54
int array_oob(long param_1,uint param_2)
{
 unsigned long long *puVar1;
 unsigned long long *puVar2;
 unsigned long long *puVar3;
 unsigned long long *puVar4;
 unsigned long uVar5;
 long lVar6;
 unsigned long uVar7;
 unsigned long uVar8;
 int *piVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 unsigned long long uVar18;
 if ((int)param_2 < 0) {
 return 0;
 }
 uVar5 = (unsigned long)(param_2 + 1);
 if (param_2 < 7) {
 uVar7 = 0;
 iVar10 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 puVar4 = (unsigned long long *)(param_1 + 0x10);
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 iVar17 = 0;
 uVar8 = uVar7;
 do {
 puVar1 = puVar4 + -2;
 puVar2 = puVar4 + -1;
 puVar3 = puVar4 + 1;
 uVar18 = *puVar4;
 puVar4 = puVar4 + 4;
 uVar8 = uVar8 - 8;
 iVar10 = (int)*puVar1 + iVar10;
 iVar11 = (int)((unsigned long)*puVar1 >> 0x20) + iVar11;
 iVar12 = (int)*puVar2 + iVar12;
 iVar13 = (int)((unsigned long)*puVar2 >> 0x20) + iVar13;
 iVar14 = (int)uVar18 + iVar14;
 iVar15 = (int)((unsigned long)uVar18 >> 0x20) + iVar15;
 iVar16 = (int)*puVar3 + iVar16;
 iVar17 = (int)((unsigned long)*puVar3 >> 0x20) + iVar17;
 } while (uVar8 != 0);
 iVar10 = iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13;
 if (uVar7 == uVar5) {
 return iVar10;
 }
 }
 lVar6 = uVar5 - uVar7;
 piVar9 = (int *)(param_1 + uVar7 * 4);
 do {
 lVar6 = lVar6 + -1;
 iVar10 = *piVar9 + iVar10;
 piVar9 = piVar9 + 1;
 } while (lVar6 != 0);
 return iVar10;
}

// Function: test_array_types @ 0x100dd8
int test_array_types(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned long long local_3d0;
 unsigned long long uStack_3c8;
 unsigned long long uStack_3c0;
 unsigned long long uStack_3b8;
 unsigned long long local_3b0;
 unsigned long long uStack_3a8;
 unsigned long long uStack_3a0;
 unsigned long long uStack_398;
 unsigned long long local_390;
 unsigned long long uStack_388;
 unsigned long long uStack_380;
 unsigned long long uStack_378;
 unsigned int local_370;
 unsigned long long local_36c;
 unsigned long long uStack_364;
 unsigned long long local_35c;
 unsigned long long uStack_354;
 unsigned long long local_34c;
 unsigned long long uStack_344;
 unsigned long long local_33c;
 unsigned long long uStack_334;
 unsigned long long local_32c;
 unsigned long long uStack_324;
 unsigned long long local_31c;
 unsigned long long uStack_314;
 unsigned int local_30c;
 unsigned long long local_308;
 unsigned long long uStack_300;
 unsigned long long local_2f8;
 unsigned long long uStack_2f0;
 unsigned long long local_2e8;
 unsigned long long uStack_2e0;
 unsigned long long local_2d8;
 unsigned long long uStack_2d0;
 unsigned long long local_2c8;
 unsigned long long uStack_2c0;
 unsigned long long uStack_2b8;
 unsigned long long uStack_2b0;
 unsigned int local_2a8;
 unsigned long long local_2a4;
 unsigned long long uStack_29c;
 unsigned long long local_294;
 unsigned long long uStack_28c;
 unsigned long long local_284;
 unsigned long long uStack_27c;
 unsigned long long local_274;
 unsigned long long uStack_26c;
 unsigned long long local_264;
 unsigned long long uStack_25c;
 unsigned long long local_254;
 unsigned long long uStack_24c;
 unsigned int local_244;
 unsigned long long local_240;
 unsigned long long uStack_238;
 unsigned long long uStack_230;
 unsigned long long uStack_228;
 unsigned long long local_220;
 unsigned long long uStack_218;
 unsigned long long uStack_210;
 unsigned long long uStack_208;
 unsigned long long local_200;
 unsigned long long uStack_1f8;
 unsigned long long uStack_1f0;
 unsigned long long uStack_1e8;
 unsigned int local_1e0;
 unsigned long long local_1d0;
 unsigned long long local_1c8;
 unsigned long long uStack_1c0;
 unsigned long long local_1b8;
 unsigned long long uStack_1b0;
 unsigned long long local_1a8;
 unsigned long long local_1a0;
 unsigned long long uStack_198;
 unsigned long long uStack_190;
 unsigned long long uStack_188;
 unsigned long long local_180;
 unsigned long long local_178;
 unsigned long long uStack_170;
 unsigned long long local_168;
 unsigned long long uStack_160;
 unsigned long long local_158;
 unsigned long long local_150;
 unsigned long long uStack_148;
 unsigned long long uStack_140;
 unsigned long long uStack_138;
 unsigned long long local_130;
 unsigned long long local_128;
 unsigned long long uStack_120;
 unsigned long long local_118;
 unsigned long long uStack_110;
 unsigned long long local_108;
 unsigned long long local_100;
 unsigned long long uStack_f8;
 unsigned long long local_f0;
 unsigned long long uStack_e8;
 unsigned long long local_e0;
 unsigned long long local_d8;
 unsigned long long uStack_d0;
 unsigned long long local_c8;
 unsigned long long uStack_c0;
 unsigned long long local_b8;
 unsigned long long local_b0;
 unsigned long long uStack_a8;
 unsigned long long uStack_a0;
 unsigned long long uStack_98;
 unsigned long long local_90;
 unsigned long long local_88;
 unsigned long long uStack_80;
 unsigned long long uStack_78;
 unsigned long long local_70;
 unsigned long long local_68;
 unsigned long long local_60;
 unsigned long long uStack_58;
 unsigned long long uStack_50;
 unsigned long long uStack_48;
 puts(&DAT_00103210);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 local_1d0 = 0;
 local_180 = 0;
 local_1a8 = 0x100000000;
 uStack_170 = 0;
 local_178 = 2;
 uStack_1c0 = 0;
 local_1c8 = 0;
 uStack_120 = 4;
 local_128 = 0;
 uStack_f8 = 0x500000000;
 local_100 = 0;
 uStack_1b0 = 0;
 local_1b8 = 0;
 uStack_c0 = 0;
 local_c8 = 6;
 uStack_198 = 0;
 local_1a0 = 0;
 uStack_188 = 0;
 uStack_190 = 0;
 uStack_148 = 0;
 local_150 = 0x300000000;
 uStack_138 = 0;
 uStack_140 = 0;
 uStack_80 = 0;
 local_88 = 0;
 local_70 = 8;
 uStack_78 = 0;
 uStack_160 = 0;
 local_168 = 0;
 local_158 = 0;
 uStack_a8 = 0;
 local_b0 = 0;
 uStack_98 = 0;
 uStack_a0 = 0x700000000;
 uStack_110 = 0;
 local_118 = 0;
 local_130 = 0;
 uStack_58 = 0;
 local_60 = 0;
 uStack_48 = 0x900000000;
 uStack_50 = 0;
 local_108 = 0;
 uStack_d0 = 0;
 local_d8 = 0;
 uStack_e8 = 0;
 local_f0 = 0;
 local_e0 = 0;
 local_b8 = 0;
 local_90 = 0;
 local_68 = 0;
 printf("ARR-L1-03 (array_2d_stack): %d\n",0x2d);
 local_370 = 1;
 uStack_3c8 = 0x100000001;
 local_3d0 = 0x100000001;
 uStack_3b8 = 0x100000001;
 uStack_3c0 = 0x100000001;
 uStack_3a8 = 0x100000001;
 local_3b0 = 0x100000001;
 uStack_398 = 0x100000001;
 uStack_3a0 = 0x100000001;
 uStack_388 = 0x100000001;
 local_390 = 0x100000001;
 uStack_378 = 0x100000001;
 uStack_380 = 0x100000001;
 uStack_364 = 0x100000001;
 local_36c = 0x100000001;
 uStack_354 = 0x100000001;
 local_35c = 0x100000001;
 uStack_344 = 0x100000001;
 local_34c = 0x100000001;
 uStack_334 = 0x100000001;
 local_33c = 0x100000001;
 uStack_324 = 0x100000001;
 local_32c = 0x100000001;
 uStack_314 = 0x100000001;
 local_31c = 0x100000001;
 uStack_300 = 0x100000001;
 local_308 = 0x100000001;
 uStack_2f0 = 0x100000001;
 local_2f8 = 0x100000001;
 uStack_2e0 = 0x100000001;
 local_2e8 = 0x100000001;
 uStack_2d0 = 0x100000001;
 local_2d8 = 0x100000001;
 uStack_2c0 = 0x100000001;
 local_2c8 = 0x100000001;
 uStack_2b0 = 0x100000001;
 uStack_2b8 = 0x100000001;
 local_2a8 = 1;
 uStack_29c = 0x100000001;
 local_2a4 = 0x100000001;
 uStack_28c = 0x100000001;
 local_294 = 0x100000001;
 uStack_27c = 0x100000001;
 local_284 = 0x100000001;
 uStack_26c = 0x100000001;
 local_274 = 0x100000001;
 uStack_25c = 0x100000001;
 local_264 = 0x100000001;
 uStack_24c = 0x100000001;
 local_254 = 0x100000001;
 local_30c = 1;
 local_244 = 1;
 uStack_238 = 0x100000001;
 local_240 = 0x100000001;
 uStack_228 = 0x100000001;
 uStack_230 = 0x100000001;
 uStack_218 = 0x100000001;
 local_220 = 0x100000001;
 uStack_208 = 0x100000001;
 uStack_210 = 0x100000001;
 uStack_1f8 = 0x100000001;
 local_200 = 0x100000001;
 uStack_1e8 = 0x100000001;
 uStack_1f0 = 0x100000001;
 local_1e0 = 1;
 uVar2 = array_3d((int*)&local_3d0);
 printf("ARR-L1-04 (array_3d): %d\n",uVar2 & 0xffffffff);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 printf("ARR-L2-02 (array_pointer): %d\n",100);
 printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
 iVar1 = printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
 return iVar1;
}

// Function: ptr_single @ 0x10101c
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x101028
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x101038
int ptr_triple(unsigned long long *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x10104c
int ptr_increment(int *param_1,int param_2)
{
 unsigned long long *puVar1;
 unsigned long uVar2;
 unsigned long long *puVar3;
 unsigned long long *puVar4;
 unsigned long long *puVar5;
 int *piVar6;
 unsigned long uVar7;
 unsigned long uVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 unsigned long long uVar17;
 if (param_2 < 1) {
 return 0;
 }
 if (param_2 - 1U < 7) {
 uVar7 = 0;
 iVar9 = 0;
 piVar6 = param_1;
 }
 else {
 uVar2 = (unsigned long)(param_2 - 1U) + 1;
 uVar7 = uVar2 & 0x1fffffff8;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 piVar6 = param_1 + uVar7;
 puVar5 = (unsigned long long *)(param_1 + 4);
 uVar8 = uVar7;
 do {
 puVar1 = puVar5 + -2;
 puVar3 = puVar5 + -1;
 puVar4 = puVar5 + 1;
 uVar17 = *puVar5;
 puVar5 = puVar5 + 4;
 uVar8 = uVar8 - 8;
 iVar9 = (int)*puVar1 + iVar9;
 iVar10 = (int)((unsigned long)*puVar1 >> 0x20) + iVar10;
 iVar11 = (int)*puVar3 + iVar11;
 iVar12 = (int)((unsigned long)*puVar3 >> 0x20) + iVar12;
 iVar13 = (int)uVar17 + iVar13;
 iVar14 = (int)((unsigned long)uVar17 >> 0x20) + iVar14;
 iVar15 = (int)*puVar4 + iVar15;
 iVar16 = (int)((unsigned long)*puVar4 >> 0x20) + iVar16;
 } while (uVar8 != 0);
 iVar9 = iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12;
 if (uVar2 == uVar7) {
 return iVar9;
 }
 }
 param_2 = param_2 - (int)uVar7;
 do {
 param_2 = param_2 + -1;
 iVar9 = *piVar6 + iVar9;
 piVar6 = piVar6 + 1;
 } while (param_2 != 0);
 return iVar9;
}

// Function: ptr_offset @ 0x1010d8
unsigned int ptr_offset(long param_1,int param_2)
{
 return *(unsigned int *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x1010e0
unsigned long ptr_diff(long param_1,long param_2)
{
 return (unsigned long)(param_1 - param_2) >> 2;
}

// Function: ptr_void @ 0x1010ec
uint ptr_void(uint *param_1,int param_2)
{
 if (param_2 == 1) {
 return (uint)*(byte *)param_1;
 }
 if (param_2 == 0) {
 return *param_1;
 }
 return 0xffffffff;
}

// Function: ptr_const @ 0x101110
int ptr_const(int *param_1)
{
 return *param_1 << 1;
}

// Function: ptr_const_ptr @ 0x10111c
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x101130
void ptr_func_simple(void *UNRECOVERED_JUMPTABLE,unsigned int param_2)
{
 ((void (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: ptr_func_complex @ 0x10113c
void ptr_func_complex(void *param_1,unsigned long long param_2)
{
 char *local_20;
 unsigned long long uStack_18;
 uStack_18 = 0;
 local_20 = &DAT_00102ea0;
 ((void (*)(unsigned long long, char **))param_1)(param_2,&local_20);
 return;
}

// Function: ptr_cast @ 0x101178
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x101180
long opaque_handle_create(int param_1)
{
 return (long)param_1;
}

// Function: opaque_handle_op @ 0x101188
int opaque_handle_op(int param_1)
{
 return param_1 << 1;
}

// Function: test_pointer_types @ 0x101190
int test_pointer_types(void)
{
 int iVar1;
 puts(&DAT_0010322b);
 printf("PTR-L2-01 (ptr_single): %d\n",0xf);
 printf("PTR-L2-02 (ptr_double): %d\n",0xf);
 printf("PTR-L2-03 (ptr_triple): %d\n",6);
 printf("PTR-L2-04 (ptr_increment): %d\n",0xf);
 printf("PTR-L2-05 (ptr_offset): %d\n",0x1e);
 printf("PTR-L2-06 (ptr_diff): %d\n",4);
 printf("PTR-L2-07 (ptr_void): %d\n",0x2a);
 printf("PTR-L2-07 (ptr_void): %d\n",0x41);
 printf("PTR-L2-08 (ptr_const): %d\n",0x14);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",10);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",1);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 iVar1 = printf("PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 return iVar1;
}

// Function: struct_simple @ 0x101294
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x1012a8
int struct_array(long param_1,uint param_2)
{
 long lVar1;
 long tmp_ldXn;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int *piVar7;
 int *piVar8;
 int *piVar9;
 int *piVar10;
 int *piVar11;
 int *piVar12;
 unsigned long long uVar13;
 int *piVar14;
 int *piVar15;
 int *piVar16;
 int *piVar17;
 int *piVar18;
 int *piVar19;
 int *piVar20;
 int *piVar21;
 int *piVar22;
 int *piVar23;
 int *piVar24;
 int *piVar25;
 unsigned long uVar26;
 unsigned long uVar27;
 long lVar28;
 unsigned long uVar29;
 int *piVar30;
 int iVar31;
 int iVar32;
 int iVar33;
 int iVar34;
 int iVar35;
 int iVar36;
 int iVar37;
 int iVar38;
 if ((int)param_2 < 1) {
 return 0;
 }
 uVar27 = (unsigned long)param_2;
 if (param_2 < 8) {
 uVar29 = 0;
 iVar31 = 0;
 }
 else {
 uVar29 = uVar27 & 0xfffffff8;
 iVar35 = 0;
 iVar36 = 0;
 iVar37 = 0;
 iVar38 = 0;
 iVar31 = 0;
 iVar32 = 0;
 iVar33 = 0;
 iVar34 = 0;
 uVar26 = uVar29;
 lVar28 = param_1;
 do {
 uVar26 = uVar26 - 8;
 tmp_ldXn = lVar28;
 piVar30 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar2 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar3 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar4 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar5 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar6 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar7 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar8 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar9 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar10 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar11 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar12 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 uVar13 = tmp_ldXn;
 tmp_ldXn = uVar13;
 piVar14 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar15 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar16 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar17 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar18 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar19 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar20 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar21 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar22 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar23 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar24 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 piVar25 = (int *)tmp_ldXn;
 lVar1 = tmp_ldXn;
 tmp_ldXn = lVar1 + 4;
 iVar35 = *piVar30 + iVar35 + *piVar2 + *piVar3;
 iVar36 = *piVar4 + iVar36 + *piVar5 + *piVar6;
 iVar37 = *piVar7 + iVar37 + *piVar8 + *piVar9;
 iVar38 = *piVar10 + iVar38 + *piVar11 + *piVar12;
 iVar31 = *piVar14 + iVar31 + *piVar15 + *piVar16;
 iVar32 = *piVar17 + iVar32 + *piVar18 + *piVar19;
 iVar33 = *piVar20 + iVar33 + *piVar21 + *piVar22;
 iVar34 = *piVar23 + iVar34 + *piVar24 + *piVar25;
 lVar28 = lVar28 + 0x60;
 } while (uVar26 != 0);
 iVar31 = iVar31 + iVar35 + iVar32 + iVar36 + iVar33 + iVar37 + iVar34 + iVar38;
 if (uVar29 == uVar27) {
 return iVar31;
 }
 }
 lVar28 = uVar27 - uVar29;
 piVar30 = (int *)(param_1 + uVar29 * 0xc + 4);
 do {
 piVar3 = piVar30 + -1;
 iVar32 = *piVar30;
 piVar2 = piVar30 + 1;
 piVar30 = piVar30 + 3;
 lVar28 = lVar28 + -1;
 iVar31 = *piVar3 + iVar31 + iVar32 + *piVar2;
 } while (lVar28 != 0);
 return iVar31;
}

// Function: struct_nested @ 0x101360
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x101370
int struct_deep(long param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x101380
int struct_with_ptr(int *param_1)
{
 uint *puVar1;
 puVar1 = *(uint **)(param_1 + 2);
 if (puVar1 != (uint *)0x0) {
 puVar1 = (uint *)(unsigned long)*puVar1;
 }
 return (int)puVar1 + *param_1;
}

// Function: struct_bitfields @ 0x101398
short struct_bitfields(ushort *param_1)
{
 ushort uVar1;
 uVar1 = *param_1;
 return (uVar1 & 1) + (uVar1 >> 6) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}

// Function: union_type @ 0x1013b8
float union_type(float *param_1,int param_2)
{
 if (param_2 == 1) {
 return (float)(int)*param_1;
 }
 if (param_2 == 0) {
 return *param_1;
 }
 return (float)(uint)*(byte *)param_1;
}

// Function: union_array @ 0x1013e0
int union_array(long param_1,uint param_2)
{
 unsigned long long *puVar1;
 unsigned long long *puVar2;
 unsigned long long *puVar3;
 unsigned long long *puVar4;
 unsigned long uVar5;
 long lVar6;
 unsigned long uVar7;
 unsigned long uVar8;
 int *piVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 unsigned long long uVar18;
 if ((int)param_2 < 1) {
 return 0;
 }
 uVar5 = (unsigned long)param_2;
 if (param_2 < 8) {
 uVar7 = 0;
 iVar10 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 puVar4 = (unsigned long long *)(param_1 + 0x10);
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 iVar17 = 0;
 uVar8 = uVar7;
 do {
 puVar1 = puVar4 + -2;
 puVar2 = puVar4 + -1;
 puVar3 = puVar4 + 1;
 uVar18 = *puVar4;
 puVar4 = puVar4 + 4;
 uVar8 = uVar8 - 8;
 iVar10 = (int)*puVar1 + iVar10;
 iVar11 = (int)((unsigned long)*puVar1 >> 0x20) + iVar11;
 iVar12 = (int)*puVar2 + iVar12;
 iVar13 = (int)((unsigned long)*puVar2 >> 0x20) + iVar13;
 iVar14 = (int)uVar18 + iVar14;
 iVar15 = (int)((unsigned long)uVar18 >> 0x20) + iVar15;
 iVar16 = (int)*puVar3 + iVar16;
 iVar17 = (int)((unsigned long)*puVar3 >> 0x20) + iVar17;
 } while (uVar8 != 0);
 iVar10 = iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13;
 if (uVar7 == uVar5) {
 return iVar10;
 }
 }
 lVar6 = uVar5 - uVar7;
 piVar9 = (int *)(param_1 + uVar7 * 4);
 do {
 lVar6 = lVar6 + -1;
 iVar10 = *piVar9 + iVar10;
 piVar9 = piVar9 + 1;
 } while (lVar6 != 0);
 return iVar10;
}

// Function: enum_type @ 0x101468
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x101474
unsigned int enum_switch(uint param_1)
{
 if (param_1 < 4) {
 return *(unsigned int *)(&DAT_00102c50 + (long)(int)param_1 * 4);
 }
 return 0xffffff9d;
}

// Function: struct_func_ptr @ 0x101494
void struct_func_ptr(unsigned int *param_1)
{
 ((void (*)(unsigned int))**(void ***)(param_1 + 2))(*param_1);
 return;
}

// Function: linked_list @ 0x1014a4
int linked_list(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar1 = *param_1;
 param_1 = *(int **)(param_1 + 2);
 iVar2 = iVar1 + iVar2;
 } while (param_1 != (int *)0x0);
 }
 return iVar2;
}

// Function: doubly_linked_list @ 0x1014c4
int doubly_linked_list(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar1 = *param_1;
 param_1 = *(int **)(param_1 + 2);
 iVar2 = iVar1 + iVar2;
 } while (param_1 != (int *)0x0);
 }
 return iVar2;
}

// Function: binary_tree_sum @ 0x1014e4
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_1 == (int *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 do {
 iVar1 = *param_1;
 iVar2 = binary_tree_sum((int*)*(unsigned long long *)(param_1 + 2));
 param_1 = *(int **)(param_1 + 4);
 iVar3 = iVar1 + iVar3 + iVar2;
 } while (param_1 != (int *)0x0);
 }
 return iVar3;
}

// Function: graph_traverse @ 0x10153c
int graph_traverse(long param_1)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 if ((int)*(uint *)(param_1 + 0x50) < 1) {
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 for (piVar3 = *(int **)(param_1 + uVar2 * 8); piVar3 != (int *)0x0;
 piVar3 = *(int **)(piVar3 + 2)) {
 iVar1 = *piVar3 + iVar1;
 }
 uVar2 = uVar2 + 1;
 } while (uVar2 != *(uint *)(param_1 + 0x50));
 }
 return iVar1;
}

// Function: test_composite_types @ 0x101588
int test_composite_types(void)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 unsigned long long local_a0;
 unsigned long long uStack_98;
 unsigned long long local_90;
 int local_80 [2];
 unsigned int *local_78;
 unsigned long long uStack_70;
 unsigned int local_68 [2];
 unsigned long long local_60;
 int *piStack_58;
 int local_50 [2];
 unsigned int *local_48;
 unsigned int local_40 [2];
 unsigned int *local_38;
 unsigned int local_30 [2];
 unsigned long long local_28;
 puts(&DAT_00103246);
 printf("CMP-L2-01 (struct_simple): %d\n",6);
 printf("CMP-L2-02 (struct_array): %d\n",9);
 printf("CMP-L2-03 (struct_nested): %d\n",0x69);
 printf("CMP-L2-04 (struct_deep): %d\n",0x102);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",0x1e);
 printf("CMP-L2-06 (struct_bitfields): %d\n",0x6a);
 printf("CMP-L2-07 (union_type): %d\n",0x12345678);
 printf("CMP-L2-08 (union_array): %d\n",0x3c);
 printf("CMP-L2-09 (enum_type): %d\n",10);
 printf("CMP-L2-10 (enum_switch): %d\n",0x32);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",0x15);
 piVar3 = local_50;
 uVar2 = 0;
 local_50[0] = 10;
 local_30[0] = 0x1e;
 local_40[0] = 0x14;
 local_48 = local_40;
 local_38 = local_30;
 local_28 = 0;
 do {
 iVar1 = *piVar3;
 piVar3 = *(int **)(piVar3 + 2);
 uVar2 = (unsigned long)(uint)(iVar1 + (int)uVar2);
 } while (piVar3 != (int *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",uVar2);
 piVar3 = local_80;
 uVar2 = 0;
 local_80[0] = 10;
 local_68[0] = 0x14;
 local_60 = 0;
 piStack_58 = piVar3;
 local_78 = local_68;
 uStack_70 = 0;
 do {
 iVar1 = *piVar3;
 piVar3 = *(int **)(piVar3 + 2);
 uVar2 = (unsigned long)(uint)(iVar1 + (int)uVar2);
 } while (piVar3 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar2);
 uStack_98 = 0;
 local_a0 = 100;
 local_90 = 0;
 uVar2 = binary_tree_sum((int*)&local_a0);
 printf("CMP-L2-14 (binary_tree): %d\n",uVar2 & 0xffffffff);
 iVar1 = printf("CMP-L2-15 (graph_traverse): %d\n",1);
 return iVar1;
}

// Function: main @ 0x101738
int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



// Function: __addtf3 @ 0x101760
unsigned long __addtf3_local(unsigned long param_1,unsigned long param_2)
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
 uVar10 = fpcr;
 uVar1 = (param_1 & 0xffffffffffff) << 3;
 lVar14 = -((long)param_1 >> 0x3f);
 lVar7 = -((long)param_2 >> 0x3f);
 uVar13 = param_2 << 3;
 uVar2 = uVar13 & 0x7fffffffffff8;
 uVar21 = uVar1 | param_1 >> 0x3d;
 uVar17 = param_1 >> 0x30 & 0x7fff;
 uVar15 = param_2 >> 0x30 & 0x7fff;
 uVar12 = uVar2 | param_2 >> 0x3d;
uVar18 = param_1 * 8;
uVar20 = param_2 * 8;
uVar19 = uVar18;
uVar9 = uVar21;
if ((long)param_2 >> 0x3f == (long)param_1 >> 0x3f) {
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
 if (uVar15 != 0x7fff) goto LAB_00102050;
 if ((uVar12 | uVar20) == 0) {
 return 0;
 }
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar6 = (uint)uVar8;
 if (uVar15 != 0x7fff) goto LAB_001021f8;
 if ((uVar12 | uVar20) == 0) goto LAB_00102290;
 }
LAB_001022bc:
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar11 != 0) {
LAB_00102200:
 uVar19 = param_2 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101c44;
 }
LAB_00102050:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 else {
 if (uVar15 == 0x7fff) {
 if ((uVar12 | uVar20) != 0) goto LAB_001022bc;
 if (uVar11 == 0) {
 return 0;
 }
 }
 else {
 if (uVar11 == 0) goto LAB_00102050;
LAB_001021f8:
 if ((uVar12 | uVar20) != 0) goto LAB_00102200;
 }
LAB_00102290:
 uVar19 = param_2 & 0xffffffffffff;
 }
 goto LAB_00101c44;
 }
 if (uVar11 == 0) {
 uVar19 = uVar20;
 uVar9 = uVar12;
 if ((uVar12 | uVar20) == 0) {
 param_1 = 0;
 goto LAB_001018f8;
 }
 goto LAB_00101fc8;
 }
 if ((uVar12 | uVar20) == 0) goto LAB_00101fc8;
 uVar19 = uVar18 + uVar20;
 uVar9 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 if ((uVar9 >> 0x33 & 1) != 0) {
 uVar9 = uVar9 & 0xfff7ffffffffffff;
 uVar12 = 0;
 bVar3 = false;
 uVar11 = 1;
 goto LAB_001018ac;
 }
LAB_00101898:
 lVar7 = lVar14;
 uVar18 = uVar19 | uVar9;
 goto joined_r0x001019ec;
 }
 if (uVar11 != 0x7fff) {
 uVar19 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 bVar3 = false;
 uVar12 = uVar18 + uVar20 >> 1 & 7;
 uVar9 = uVar19 >> 1;
 uVar19 = uVar18 + uVar20 >> 1 | uVar19 << 0x3f;
 goto LAB_001018ac;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) goto LAB_00101ff4;
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) goto LAB_001022a0;
 if (uVar19 != 0x800000) goto LAB_00101f64;
 if (lVar14 == 0) goto LAB_0010223c;
LAB_00102108:
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
 goto LAB_00101a80;
 }
 goto LAB_00101d34;
 }
 goto LAB_001019dc;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_00101b98;
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
 goto LAB_00101c44;
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
LAB_00101b98:
 uVar15 = uVar17;
 uVar19 = uVar18;
 uVar9 = uVar12;
 lVar7 = lVar14;
 if ((uVar12 >> 0x33 & 1) == 0) goto LAB_001019dc;
 uVar11 = uVar17 + 1;
 if (uVar11 != 0x7fff) {
 bVar3 = false;
 uVar19 = uVar18 & 1 | uVar18 >> 1 | uVar12 << 0x3f;
 uVar9 = (uVar12 & 0xfff7ffffffffffff) >> 1;
 uVar12 = uVar18 & 1 | uVar18 >> 1 & 7;
 goto LAB_001018ac;
 }
 uVar19 = uVar10 & 0xc00000;
 if (uVar19 == 0) {
LAB_00101ff4:
 uVar8 = 0x14;
 goto LAB_00101aec;
 }
 if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) {
LAB_001022a0:
 uVar8 = 0x14;
 goto LAB_00101aec;
 }
 if (uVar19 == 0x800000) {
 if (lVar14 != 0) goto LAB_00102108;
LAB_0010223c:
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto LAB_001018dc;
 }
LAB_00101f64:
 uVar6 = 0x14;
 if ((uVar10 & 0xc00000) == 0x400000) {
 uVar19 = 0xffffffffffffffff;
 uVar11 = 0x7ffe;
 bVar3 = false;
 uVar8 = 0x14;
 uVar9 = uVar19;
 goto joined_r0x00101f84;
 }
LAB_00101aa8:
 uVar10 = uVar10 & 0xc00000;
 if (uVar10 != 0) {
 if (uVar10 == 0x400000) {
 if (lVar14 != 0) goto LAB_00101ac4;
 }
 else if (((uint)(uVar10 == 0x800000) & (uint)lVar14) == 0) {
LAB_00101ac4:
 param_1 = 0xffffffffffffffff;
 uVar8 = (unsigned long)(uVar6 | 0x14);
 goto LAB_001018f8;
 }
 }
 uVar8 = (unsigned long)(uVar6 | 0x14);
 }
LAB_00101aec:
 param_1 = 0;
 goto LAB_00101b00;
 }
 if (uVar15 == 0) {
 if ((uVar12 | uVar20) != 0) {
 uVar8 = (unsigned long)(uVar6 - 1);
 if (uVar6 - 1 == 0) {
 uVar18 = uVar18 + uVar20;
 uVar12 = uVar12 + uVar21 + (unsigned long)CARRY8(uVar18,uVar20);
 goto LAB_00101b98;
 }
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 goto LAB_00101a74;
 }
 goto LAB_00101970;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 != 0x7fff) goto LAB_001019dc;
 if ((uVar21 | uVar18) == 0) goto LAB_00101d34;
 uVar8 = (unsigned long)((uint)(uVar1 >> 0x32) ^ 1);
 uVar20 = uVar18;
 uVar12 = uVar21;
LAB_00101a80:
 uVar11 = 0x7fff;
 goto LAB_00101a88;
 }
 uVar12 = uVar12 | 0x8000000000000;
 if (uVar17 != 0x7fff) {
LAB_00101970:
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
 goto LAB_00101b98;
 }
LAB_00101c24:
 if ((uVar21 | uVar18) == 0) {
 return 0;
 }
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar19 = param_2 & 0xffffffffffff;
LAB_00101c44:
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
 goto LAB_00101a80;
 }
 goto LAB_00101d34;
 }
 goto LAB_001019dc;
 }
 uVar6 = ~uVar6;
 if (uVar6 == 0) {
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 goto LAB_0010182c;
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
 goto LAB_00101c44;
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
 goto LAB_0010182c;
 }
 if ((uVar17 + 1 & 0x7ffe) != 0) {
 uVar19 = uVar18 + param_2 * -8;
 uVar13 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar13 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar13) == 0) {
 param_1 = 0;
 goto LAB_001018f8;
 }
 }
 else {
 uVar19 = uVar20 + param_1 * -8;
 uVar13 = uVar12 - (uVar21 + (uVar20 < uVar18));
 lVar14 = lVar7;
 }
 goto LAB_00101834;
 }
 uVar16 = uVar21 | uVar18;
 uVar11 = uVar12 | uVar20;
 if (uVar17 != 0) {
 if (uVar17 == 0x7fff) {
 if (uVar16 == 0) {
 if (uVar15 != 0x7fff) goto LAB_00101f08;
 }
 else {
 uVar8 = uVar1 >> 0x32 ^ 1;
 if (uVar15 != 0x7fff) goto LAB_00101ed8;
 }
LAB_00102150:
 if (uVar11 != 0) {
 uVar6 = (uint)uVar8;
 if ((uVar13 & 0x4000000000000) == 0) {
 uVar6 = 1;
 }
 uVar8 = (unsigned long)uVar6;
 if (uVar16 == 0) {
LAB_001021cc:
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 goto LAB_00101c44;
 }
LAB_00102168:
 uVar19 = param_2 & 0xffffffffffff;
 if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
 uVar19 = uVar2 >> 3;
 param_1 = param_2;
 }
 goto LAB_00101c44;
 }
 if (uVar16 != 0) goto LAB_00101ed8;
 }
 else {
 if (uVar15 == 0x7fff) goto LAB_00102150;
 if (uVar16 != 0) {
LAB_00101ed8:
 uVar19 = param_2 & 0xffffffffffff;
 if (uVar11 == 0) goto LAB_00101c44;
 goto LAB_00102168;
 }
LAB_00101f08:
 if (uVar11 != 0) goto LAB_001021cc;
 }
 param_1 = 0xffffffffffffffff;
 uVar8 = 1;
 goto LAB_001018f8;
 }
 if (uVar16 != 0) {
 if (uVar11 == 0) goto LAB_00101fc8;
 uVar19 = uVar18 + param_2 * -8;
 uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
 if ((uVar9 >> 0x33 & 1) == 0) {
 if ((uVar19 | uVar9) != 0) {
 uVar12 = 0;
 bVar3 = true;
 uVar11 = uVar17;
 goto LAB_001018ac;
 }
 goto LAB_001020a0;
 }
 uVar19 = uVar20 + param_1 * -8;
 uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
 uVar18 = uVar19 | uVar9;
 goto joined_r0x001019ec;
 }
 uVar19 = uVar20;
 uVar9 = uVar12;
 lVar14 = lVar7;
 if (uVar11 == 0) {
LAB_001020a0:
 param_1 = 0;
 goto LAB_001018f8;
 }
LAB_00101fc8:
 uVar18 = 0;
 uVar11 = 0;
LAB_00101fd0:
 uVar8 = 0;
 if (((uint)uVar10 >> 0xb & 1) != 0) {
 uVar8 = 8;
 }
LAB_001018d8:
 uVar20 = uVar19;
 uVar12 = uVar9;
 if (uVar18 == 0) {
LAB_00101a88:
 param_1 = uVar20 >> 3 | uVar12 << 0x3d;
 uVar19 = uVar12 >> 3;
 if (uVar11 == 0x7fff) goto LAB_00101c44;
 }
 else {
LAB_001018dc:
 uVar6 = (uint)uVar8;
 if (uVar11 == 0x7ffe) goto LAB_00101aa8;
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
 goto LAB_0010182c;
 }
 goto LAB_001017d8;
 }
 uVar15 = uVar17;
 lVar7 = lVar14;
 if (uVar17 == 0x7fff) {
 if ((uVar21 | uVar18) != 0) {
LAB_00101a74:
 uVar8 = uVar1 >> 0x32 ^ 1;
 uVar20 = uVar18;
 uVar12 = uVar21;
 goto LAB_00101a80;
 }
LAB_00101d34:
 uVar8 = 0;
 uVar19 = 0;
 param_1 = 0;
 goto LAB_00101c44;
 }
 }
 else {
 uVar12 = uVar12 | 0x8000000000000;
LAB_001017d8:
 if (uVar17 == 0x7fff) goto LAB_00101c24;
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
LAB_0010182c:
 uVar13 = uVar9 & 0x7ffffffffffff;
 uVar17 = uVar15;
 lVar14 = lVar7;
 if ((uVar9 >> 0x33 & 1) != 0) {
LAB_00101834:
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
 if ((int)uVar6 < 0x40) goto LAB_00101840;
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
LAB_00101840:
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
 goto LAB_00101898;
 }
 uVar19 = uVar12 | uVar18 << ((unsigned long)(0x80 - uVar6) & 0x3f);
 if (uVar6 == 0x40) {
 uVar19 = uVar12;
 }
 uVar9 = 0;
 uVar19 = (unsigned long)(uVar19 != 0) | uVar18 >> ((unsigned long)(iVar5 - 0x3f) & 0x3f);
 uVar18 = uVar19;
 goto joined_r0x001019ec;
 }
 uVar15 = uVar17 - (long)(int)uVar6;
 uVar19 = uVar12;
 uVar9 = uVar18 & 0xfff7ffffffffffff;
 }
 }
LAB_001019dc:
 uVar12 = uVar19 & 7;
 bVar3 = false;
 uVar11 = uVar15;
 lVar14 = lVar7;
 uVar18 = uVar19 | uVar9;
 if (uVar15 != 0) {
LAB_001018ac:
 if (uVar12 == 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0;
 if (bVar3) goto LAB_00101fd0;
 }
 else {
 uVar12 = uVar10 & 0xc00000;
 if (uVar12 == 0x400000) {
 uVar8 = 0x10;
joined_r0x00101f84:
 if (lVar14 == 0) {
LAB_00101bd4:
 bVar4 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar4) {
 uVar9 = uVar9 + 1;
 }
 }
 }
 else if (uVar12 == 0x800000) {
 uVar8 = 0x10;
 if (lVar14 != 0) goto LAB_00101bd4;
 }
 else {
 if (uVar12 != 0) {
 uVar18 = uVar9 & 0x8000000000000;
 uVar8 = 0x10;
 if (bVar3) {
 uVar8 = 0x18;
 }
 goto LAB_001018d8;
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
 goto LAB_001018d8;
 }
joined_r0x001019ec:
 if (uVar18 != 0) {
 uVar12 = uVar19 & 7;
 bVar3 = true;
 uVar11 = 0;
 lVar14 = lVar7;
 goto LAB_001018ac;
 }
 param_1 = 0;
 uVar8 = 0;
 }
 }
LAB_001018f8:
 if ((int)uVar8 == 0) {
 return param_1;
 }
LAB_00101b00:
 __sfp_handle_exceptions(uVar8,0);
 return param_1;
}

// Function: __multf3 @ 0x102300
unsigned long __multf3_local(unsigned long param_1,unsigned long param_2)
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
 uVar17 = fpcr;
 uVar19 = param_1 & 0xffffffffffff;
 uVar11 = param_1 >> 0x30 & 0x7fff;
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
 if (lVar22 < 0x3d) goto LAB_00102758;
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
LAB_00102758:
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
 uVar15 = param_2 >> 0x3f;
 uVar13 = param_2 & 0xffffffffffff;
 uVar21 = param_2 >> 0x30 & 0x7fff;
 iVar10 = (int)uVar21;
 uVar4 = (uint)(param_1 >> 0x20);
 uVar2 = (uint)(param_2 >> 0x20);
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
 if (lVar8 < 0x3d) goto LAB_001026fc;
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
LAB_001026fc:
 uVar7 = (unsigned long)((int)lVar8 + 3);
 uVar21 = param_2 >> ((unsigned long)(0x3d - (int)lVar8) & 0x3f) | uVar13 << (uVar7 & 0x3f);
 param_2 = param_2 << (uVar7 & 0x3f);
 }
 lVar20 = (lVar14 - lVar12) + -0x3fef;
 lVar8 = (lVar14 - lVar12) + -0x3fee;
 lVar12 = 0;
 }
 uVar7 = (unsigned long)((uVar4 ^ uVar2) >> 0x1f);
 if (uVar6 < 0xb) goto LAB_0010240c;
LAB_001023c0:
 if (uVar6 != 0xb) {
LAB_001023c8:
 uVar18 = uVar11;
 uVar21 = uVar19;
 uVar23 = param_2 >> 0x3f;
 lVar9 = lVar22;
 goto LAB_001024cc;
 }
LAB_001024e8:
 uVar11 = param_2;
 uVar7 = uVar15;
 if (lVar12 != 3) {
LAB_00102428:
 lVar20 = lVar8;
 if (lVar12 == 1) {
 uVar11 = 0;
 }
 else {
LAB_0010268c:
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
 goto LAB_001028f4;
 }
 iVar10 = (int)uVar19;
 if ((long)uVar19 < 0x40) {
 uVar11 = (unsigned long)(param_2 << ((unsigned long)(0x40 - iVar10) & 0x3f) != 0);
 uVar6 = uVar21 << ((unsigned long)(0x40 - iVar10) & 0x3f) | param_2 >> (uVar19 & 0x3f);
 uVar21 = uVar21 >> (uVar19 & 0x3f);
 uVar19 = uVar6 | uVar11;
 if ((uVar6 & 7 | uVar11) != 0) goto LAB_00102874;
 if ((uVar21 >> 0x33 & 1) == 0) goto LAB_001029bc;
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
LAB_001029bc:
 uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
 if (((uint)uVar17 >> 0xb & 1) != 0) {
 uVar5 = (unsigned long)(uVar4 | 8);
 goto LAB_001028f4;
 }
 goto LAB_0010243c;
 }
 uVar21 = 0;
LAB_00102874:
 uVar17 = uVar17 & 0xc00000;
 if (uVar17 == 0x400000) {
 if (uVar7 == 0) {
LAB_00102a1c:
 bVar3 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar17 == 0x800000) {
 if (uVar7 != 0) goto LAB_00102a1c;
 }
 else if (((uVar17 == 0) && ((uVar19 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
 uVar21 = uVar21 + 1;
 }
 if ((uVar21 >> 0x33 & 1) == 0) {
 uVar5 = (unsigned long)(uVar4 | 0x18);
 uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
 goto LAB_001028f4;
 }
 }
 uVar5 = (unsigned long)(uVar4 | 0x18);
 uVar11 = 0;
 goto LAB_001028f4;
 }
 if ((param_2 & 7) != 0) {
 uVar19 = uVar17 & 0xc00000;
 uVar5 = (unsigned long)(uVar4 | 0x10);
 if (uVar19 == 0x400000) {
 if (uVar7 == 0) {
LAB_00102a0c:
 bVar3 = 0xfffffffffffffff7 < param_2;
 param_2 = param_2 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar19 == 0x800000) {
 if (uVar7 != 0) goto LAB_00102a0c;
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
 goto LAB_001028f4;
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
 goto LAB_0010240c;
 }
 lVar9 = 2;
 uVar13 = 0;
 }
 else {
 uVar7 = (unsigned long)((uVar4 ^ uVar2) >> 0x1f);
 uVar6 = uVar6 | 3;
 lVar8 = lVar14 + 0x8000;
 uVar4 = (uint)uVar5;
 if ((param_2 & 0x800000000000) == 0) {
 uVar4 = 1;
 }
 uVar5 = (unsigned long)uVar4;
 lVar12 = 3;
 if (uVar6 < 0xb) goto LAB_00102488;
 lVar9 = 3;
 }
 lVar8 = lVar14 + 0x8000;
 if (uVar6 != 0xf) {
 uVar18 = param_2;
 uVar21 = uVar13;
 uVar23 = uVar15;
 if (uVar6 != 0xb) goto LAB_001023c8;
 goto LAB_001024cc;
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
 if (10 < uVar6) goto LAB_001023c0;
LAB_0010240c:
 uVar13 = uVar21;
 if (uVar6 < 3) {
 if (uVar6 - 1 < 2) {
 if (lVar12 == 2) goto LAB_0010251c;
 goto LAB_00102428;
 }
LAB_0010252c:
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
 goto LAB_0010268c;
 }
LAB_00102488:
 uVar6 = 1L << uVar6;
 uVar18 = uVar11;
 uVar21 = uVar19;
 uVar23 = uVar7;
 lVar9 = lVar22;
 if ((uVar6 & 0x530) == 0) {
 if ((uVar6 & 0x240) != 0) {
 uVar5 = 1;
 uVar11 = 0xffffffffffffffff;
 goto LAB_0010243c;
 }
 uVar18 = param_2;
 uVar21 = uVar13;
 uVar23 = uVar15;
 lVar9 = lVar12;
 if ((uVar6 & 0x88) == 0) goto LAB_0010252c;
 }
LAB_001024cc:
 lVar12 = lVar9;
 uVar15 = uVar23;
 param_2 = uVar18;
 if (lVar12 != 2) goto LAB_001024e8;
LAB_0010251c:
 uVar11 = 0;
 }
LAB_0010243c:
 if ((int)uVar5 == 0) {
 return uVar11;
 }
LAB_001028f4:
 __sfp_handle_exceptions(uVar5,0);
 return uVar11;
}



// Function: _fini @ 0x102b70
void _fini(void)
{
 return;
}

