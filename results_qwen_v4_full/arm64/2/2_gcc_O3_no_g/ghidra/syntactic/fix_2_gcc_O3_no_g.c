/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/2/2_gcc_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdarg.h>

/* Ghidra type definitions */
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef undefined8 (*func_ptr_t)(undefined8, undefined8);

/* 128-bit floating point type for ARM64 long double */
typedef struct {
    ulong _0_8_;
    ulong _8_8_;
    uint _12_4_;
    uint _padding_;
} float128;

/* Stack protector variables - defined as stubs below */

/* Global variables */
extern char completed_0;
extern void *__dso_handle;

/* Forward declarations */
void test_data_types_l1(void);
void test_array_types(void);
void test_pointer_types(void);
void test_composite_types(void);
void __cxa_finalize(void *p);
void deregister_tm_clones(void);
float128 __multf3(float128 param_1, float128 param_2);
float128 __addtf3(float128 param_1, float128 param_2);
ulong __sfp_handle_exceptions(ulong param_1);
void __stack_chk_fail(void);
void __printf_chk(int a, char *fmt, ...);
void builtin_strncpy(char *d, char *s, int n);
int puts(const char *s);
long LZCOUNT(ulong x);
ulong CARRY8(ulong a, ulong b);

/* External data */
extern char DAT_00103078[];
extern char DAT_00103208[];
extern char DAT_00103338[];
extern char DAT_00103340[];
extern char DAT_00103518[];
extern long fpcr;
extern long fpsr;
extern int CSWTCH_62[4];

/* Stub definitions for missing symbols */
char completed_0 = 0;
void *__dso_handle = 0;
char DAT_00103078[] = "Data Types L1";
char DAT_00103208[] = "Array Types";
char DAT_00103338[] = "";
char DAT_00103340[] = "Pointer Types";
char DAT_00103518[] = "Composite Types";
long fpcr = 0;
long fpsr = 0;
int CSWTCH_62[4] = {0, 0, 0, 0};
long __stack_chk_guard = 0;

/* Stub function definitions */
void __cxa_finalize(void *p) { (void)p; }
void deregister_tm_clones(void) { }
void __stack_chk_fail(void) { }
void __printf_chk(int a, char *fmt, ...) { 
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
    (void)a;
}
float128 __addtf3(float128 param_1, float128 param_2) {
    float128 result;
    result._0_8_ = param_1._0_8_ + param_2._0_8_;
    result._8_8_ = param_1._8_8_ + param_2._8_8_;
    result._12_4_ = 0;
    return result;
}
float128 __multf3(float128 param_1, float128 param_2) {
    float128 result;
    result._0_8_ = param_1._0_8_ * param_2._0_8_;
    result._8_8_ = param_1._8_8_ * param_2._8_8_;
    result._12_4_ = 0;
    return result;
}
ulong __sfp_handle_exceptions(ulong param_1) {
    if ((param_1 >> 4 & 1) != 0) {
        return (ulong)fpsr;
    }
    return param_1;
}
void builtin_strncpy(char *d, char *s, int n) { (void)d; (void)s; (void)n; }
long LZCOUNT(ulong x) { (void)x; return 0; }
ulong CARRY8(ulong a, ulong b) { return (a + b < a) ? 1 : 0; }
int puts(const char *s) { (void)s; return 0; }

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001006d0 @ 001006d0 */

void FUN_001006d0(void)

{
 /* Stub - null function pointer call removed */
 return;
}



/* Function: main @ 00100780 */

int main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010087c @ 0010087c */

void FUN_0010087c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: process_char @ 001008e0 */

char process_char(char param_1)

{
 if ((byte)(param_1 + 0xbfU) < 0x1a) {
 param_1 = param_1 + ' ';
 }
 return param_1;
}



/* Function: process_short @ 00100900 */

int process_short(short param_1,short param_2)

{
 return (int)param_2 + (int)param_1;
}



/* Function: process_int @ 00100910 */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: process_long @ 00100920 */

long process_long(long param_1)

{
 return param_1 << 1;
}



/* Function: process_ll @ 00100930 */

long process_ll(long param_1)

{
 return param_1 * param_1;
}



/* Function: process_float @ 00100940 */

float process_float(float param_1)

{
 return param_1 * 1.5 + 0.5;
}



/* Function: process_double @ 00100950 */

double process_double(double param_1)

{
 return param_1 * 0.5 + 0.1;
}



/* Function: process_ld @ 00100964 */

void process_ld(float128 param_1)

{
 float128 uVar1;
 
 uVar1 = __multf3(param_1,param_1);
 __addtf3(uVar1,(float128){0,0,0});
 return;
}



/* Function: process_bool @ 00100990 */

uint process_bool(uint param_1)

{
 uint uVar1;
 
 uVar1 = ~param_1 & 1;
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: const_param @ 001009a4 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 001009b0 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 001009c0 */

void test_data_types_l1(void)

{
 puts(DAT_00103078);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",0x400c000000000000);
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",0x4000cccccccccccd);
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n");
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 00100b10 */

int array_1d_stack(undefined8 *param_1,uint param_2)

{
 undefined8 *puVar1;
 ulong uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 undefined8 *puVar2;
 
 if ((int)param_2 < 1) {
 return 0;
 }
 if (param_2 - 1 < 3) {
 uVar3 = 0;
 iVar4 = 0;
 }
 else {
 iVar4 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 puVar1 = param_1;
 do {
 puVar2 = puVar1 + 2;
 iVar4 = iVar4 + (int)*puVar1;
 iVar5 = iVar5 + (int)((ulong)*puVar1 >> 0x20);
 iVar6 = iVar6 + (int)puVar1[1];
 iVar7 = iVar7 + (int)((ulong)puVar1[1] >> 0x20);
 puVar1 = puVar2;
 } while (puVar2 != param_1 + (ulong)((param_2 >> 2) - 1) * 2 + 2);
 iVar4 = iVar4 + iVar5 + iVar6 + iVar7;
 uVar3 = (ulong)(param_2 & 0xfffffffc);
 if ((param_2 & 3) == 0) {
 return iVar4;
 }
 }
 iVar5 = (int)uVar3;
 uVar3 = -(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
 iVar4 = iVar4 + *(int *)((long)param_1 + (long)iVar5 * 4);
 if (iVar5 + 1 < (int)param_2) {
 iVar4 = iVar4 + *(int *)((long)param_1 + uVar3 + 4);
 if (iVar5 + 2 < (int)param_2) {
 iVar4 = iVar4 + *(int *)((long)param_1 + uVar3 + 8);
 }
 }
 return iVar4;
}



/* Function: array_string @ 00100bb4 */

ulong array_string(char *param_1)

{
 char *pcVar1;
 ulong uVar2;
 ulong uVar3;
 
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



/* Function: array_2d_stack @ 00100be4 */

int array_2d_stack(int *param_1)

{
 return *param_1 + param_1[0xb] + param_1[0x16] + param_1[0x21] + param_1[0x2c] + param_1[0x37] +
 param_1[0x42] + param_1[0x4d] + param_1[0x58] + param_1[99];
}



/* Function: array_3d @ 00100c40 */

int array_3d(undefined8 *param_1)

{
 return (int)param_1[2] + (int)*param_1 + (int)param_1[4] + (int)param_1[6] + (int)param_1[8] +
 (int)param_1[10] + (int)param_1[0xc] + (int)param_1[0xe] + (int)param_1[0x10] +
 (int)param_1[0x12] + (int)param_1[0x14] + (int)param_1[0x16] + (int)param_1[0x18] +
 (int)param_1[0x1a] + (int)param_1[0x1c] + (int)param_1[0x1e] + (int)param_1[0x20] +
 (int)param_1[0x22] + (int)param_1[0x24] + (int)param_1[0x26] + (int)param_1[0x28] +
 (int)param_1[0x2a] + (int)param_1[0x2c] + (int)param_1[0x2e] + (int)param_1[0x30] +
 (int)((ulong)param_1[2] >> 0x20) + (int)((ulong)*param_1 >> 0x20) +
 (int)((ulong)param_1[4] >> 0x20) + (int)((ulong)param_1[6] >> 0x20) +
 (int)((ulong)param_1[8] >> 0x20) + (int)((ulong)param_1[10] >> 0x20) +
 (int)((ulong)param_1[0xc] >> 0x20) + (int)((ulong)param_1[0xe] >> 0x20) +
 (int)((ulong)param_1[0x10] >> 0x20) + (int)((ulong)param_1[0x12] >> 0x20) +
 (int)((ulong)param_1[0x14] >> 0x20) + (int)((ulong)param_1[0x16] >> 0x20) +
 (int)((ulong)param_1[0x18] >> 0x20) + (int)((ulong)param_1[0x1a] >> 0x20) +
 (int)((ulong)param_1[0x1c] >> 0x20) + (int)((ulong)param_1[0x1e] >> 0x20) +
 (int)((ulong)param_1[0x20] >> 0x20) + (int)((ulong)param_1[0x22] >> 0x20) +
 (int)((ulong)param_1[0x24] >> 0x20) + (int)((ulong)param_1[0x26] >> 0x20) +
 (int)((ulong)param_1[0x28] >> 0x20) + (int)((ulong)param_1[0x2a] >> 0x20) +
 (int)((ulong)param_1[0x2c] >> 0x20) + (int)((ulong)param_1[0x2e] >> 0x20) +
 (int)((ulong)param_1[0x30] >> 0x20) +
 (int)param_1[3] + (int)param_1[1] + (int)param_1[5] + (int)param_1[7] + (int)param_1[9] +
 (int)param_1[0xb] + (int)param_1[0xd] + (int)param_1[0xf] + (int)param_1[0x11] +
 (int)param_1[0x13] + (int)param_1[0x15] + (int)param_1[0x17] + (int)param_1[0x19] +
 (int)param_1[0x1b] + (int)param_1[0x1d] + (int)param_1[0x1f] + (int)param_1[0x21] +
 (int)param_1[0x23] + (int)param_1[0x25] + (int)param_1[0x27] + (int)param_1[0x29] +
 (int)param_1[0x2b] + (int)param_1[0x2d] + (int)param_1[0x2f] + (int)param_1[0x31] +
 (int)((ulong)param_1[3] >> 0x20) + (int)((ulong)param_1[1] >> 0x20) +
 (int)((ulong)param_1[5] >> 0x20) + (int)((ulong)param_1[7] >> 0x20) +
 (int)((ulong)param_1[9] >> 0x20) + (int)((ulong)param_1[0xb] >> 0x20) +
 (int)((ulong)param_1[0xd] >> 0x20) + (int)((ulong)param_1[0xf] >> 0x20) +
 (int)((ulong)param_1[0x11] >> 0x20) + (int)((ulong)param_1[0x13] >> 0x20) +
 (int)((ulong)param_1[0x15] >> 0x20) + (int)((ulong)param_1[0x17] >> 0x20) +
 (int)((ulong)param_1[0x19] >> 0x20) + (int)((ulong)param_1[0x1b] >> 0x20) +
 (int)((ulong)param_1[0x1d] >> 0x20) + (int)((ulong)param_1[0x1f] >> 0x20) +
 (int)((ulong)param_1[0x21] >> 0x20) + (int)((ulong)param_1[0x23] >> 0x20) +
 (int)((ulong)param_1[0x25] >> 0x20) + (int)((ulong)param_1[0x27] >> 0x20) +
 (int)((ulong)param_1[0x29] >> 0x20) + (int)((ulong)param_1[0x2b] >> 0x20) +
 (int)((ulong)param_1[0x2d] >> 0x20) + (int)((ulong)param_1[0x2f] >> 0x20) +
 (int)((ulong)param_1[0x31] >> 0x20) + *(int *)(param_1 + 0x32) +
 *(int *)((long)param_1 + 0x194) + *(int *)(param_1 + 0x33) +
 *(int *)((long)param_1 + 0x19c) + *(int *)(param_1 + 0x34) +
 *(int *)((long)param_1 + 0x1a4) + *(int *)(param_1 + 0x35) +
 *(int *)((long)param_1 + 0x1ac) + *(int *)(param_1 + 0x36) +
 *(int *)((long)param_1 + 0x1b4) + *(int *)(param_1 + 0x37) +
 *(int *)((long)param_1 + 0x1bc) + *(int *)(param_1 + 0x38) +
 *(int *)((long)param_1 + 0x1c4) + *(int *)(param_1 + 0x39) +
 *(int *)((long)param_1 + 0x1cc) + *(int *)(param_1 + 0x3a) +
 *(int *)((long)param_1 + 0x1d4) + *(int *)(param_1 + 0x3b) +
 *(int *)((long)param_1 + 0x1dc) + *(int *)(param_1 + 0x3c) +
 *(int *)((long)param_1 + 0x1e4) + *(int *)(param_1 + 0x3d) +
 *(int *)((long)param_1 + 0x1ec) + *(int *)(param_1 + 0x3e);
}



/* Function: array_vla @ 00100da0 */

int array_vla(uint param_1,undefined8 *param_2)

{
 undefined8 *puVar1;
 ulong uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 undefined8 *puVar2;
 
 if ((int)param_1 < 1) {
 return 0;
 }
 if (param_1 - 1 < 3) {
 uVar3 = 0;
 iVar4 = 0;
 }
 else {
 iVar4 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 puVar1 = param_2;
 do {
 puVar2 = puVar1 + 2;
 iVar4 = iVar4 + (int)*puVar1;
 iVar5 = iVar5 + (int)((ulong)*puVar1 >> 0x20);
 iVar6 = iVar6 + (int)puVar1[1];
 iVar7 = iVar7 + (int)((ulong)puVar1[1] >> 0x20);
 puVar1 = puVar2;
 } while (puVar2 != param_2 + (ulong)((param_1 >> 2) - 1) * 2 + 2);
 iVar4 = iVar4 + iVar5 + iVar6 + iVar7;
 uVar3 = (ulong)(param_1 & 0xfffffffc);
 if ((param_1 & 3) == 0) {
 return iVar4;
 }
 }
 iVar5 = (int)uVar3;
 uVar3 = -(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
 iVar4 = iVar4 + *(int *)((long)param_2 + (long)iVar5 * 4);
 if (iVar5 + 1 < (int)param_1) {
 iVar4 = iVar4 + *(int *)((long)param_2 + uVar3 + 4);
 if (iVar5 + 2 < (int)param_1) {
 iVar4 = iVar4 + *(int *)((long)param_2 + uVar3 + 8);
 }
 }
 return iVar4;
}



/* Function: array_pointer @ 00100e44 */

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
 } while (piVar3 != param_1 + (ulong)(param_2 - 1) * 10 + 10);
 return iVar1;
 }
 return 0;
}



/* Function: pointer_array @ 00100e84 */

int pointer_array(undefined8 *param_1,int param_2)

{
 int iVar1;
 
 if (0 < param_2) {
 iVar1 = 0;
 if ((int *)*param_1 != (int *)0x0) {
 iVar1 = *(int *)*param_1;
 }
 if (1 < param_2) {
 if ((int *)param_1[1] != (int *)0x0) {
 iVar1 = iVar1 + *(int *)param_1[1];
 }
 if (param_2 != 2) {
 if ((int *)param_1[2] != (int *)0x0) {
 iVar1 = iVar1 + *(int *)param_1[2];
 }
 if (param_2 != 3) {
 if ((int *)param_1[3] != (int *)0x0) {
 iVar1 = iVar1 + *(int *)param_1[3];
 }
 if (param_2 != 4) {
 if ((int *)param_1[4] != (int *)0x0) {
 iVar1 = iVar1 + *(int *)param_1[4];
 }
 if (param_2 != 5) {
 if ((int *)param_1[5] != (int *)0x0) {
 iVar1 = iVar1 + *(int *)param_1[5];
 }
 if (param_2 != 6) {
 if ((int *)param_1[6] != (int *)0x0) {
 iVar1 = iVar1 + *(int *)param_1[6];
 }
 if (param_2 != 7) {
 if ((int *)param_1[7] != (int *)0x0) {
 iVar1 = iVar1 + *(int *)param_1[7];
 }
 if (param_2 != 8) {
 if ((int *)param_1[8] != (int *)0x0) {
 iVar1 = iVar1 + *(int *)param_1[8];
 }
 if ((9 < param_2) && ((int *)param_1[9] != (int *)0x0)) {
 iVar1 = iVar1 + *(int *)param_1[9];
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return iVar1;
 }
 return 0;
}



/* Function: array_complex_index @ 00100f84 */

undefined4 array_complex_index(long param_1,int param_2,int param_3,uint param_4,uint param_5)

{
 if ((-1 < (int)(param_4 | param_5) && (int)param_4 < param_2) && ((int)param_5 < param_3)) {
 return *(undefined4 *)(param_1 + (long)(int)(param_4 + param_2 * param_5) * 4);
 }
 return 0xffffffff;
}



/* Function: array_oob @ 00100fb0 */

int array_oob(undefined8 *param_1,int param_2)

{
 uint uVar1;
 undefined8 *puVar2;
 ulong uVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 undefined8 *puVar3;
 
 if (param_2 < 0) {
 return 0;
 }
 uVar1 = param_2 + 1;
 if (param_2 < 3) {
 uVar4 = 0;
 iVar5 = 0;
 }
 else {
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 iVar8 = 0;
 puVar2 = param_1;
 do {
 puVar3 = puVar2 + 2;
 iVar5 = iVar5 + (int)*puVar2;
 iVar6 = iVar6 + (int)((ulong)*puVar2 >> 0x20);
 iVar7 = iVar7 + (int)puVar2[1];
 iVar8 = iVar8 + (int)((ulong)puVar2[1] >> 0x20);
 puVar2 = puVar3;
 } while (puVar3 != param_1 + (ulong)((uVar1 >> 2) - 1) * 2 + 2);
 iVar5 = iVar5 + iVar6 + iVar7 + iVar8;
 uVar4 = (ulong)(uVar1 & 0xfffffffc);
 if ((uVar1 & 3) == 0) {
 return iVar5;
 }
 }
 iVar6 = (int)uVar4;
 uVar4 = -(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2;
 iVar5 = iVar5 + *(int *)((long)param_1 + (long)iVar6 * 4);
 if (iVar6 + 1 <= param_2) {
 iVar5 = iVar5 + *(int *)((long)param_1 + uVar4 + 4);
 if (iVar6 + 2 <= param_2) {
 iVar5 = iVar5 + *(int *)((long)param_1 + uVar4 + 8);
 }
 }
 return iVar5;
}



/* Function: test_array_types @ 00101054 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_array_types(void)

{
 char *pcVar1;
 int iVar2;
 char local_10 [8];
 long local_8;
 
 local_8 = __stack_chk_guard;
 puts(DAT_00103208);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
 pcVar1 = local_10;
 iVar2 = 0;
 builtin_strncpy(local_10,"hello",6);
 do {
 pcVar1 = pcVar1 + 1;
 iVar2 = iVar2 + 1;
 } while (*pcVar1 != '\0');
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",iVar2);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",0x2d);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",0x7d);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",100);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
 if (local_8 - __stack_chk_guard == 0) {
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",0x11);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ptr_single @ 00101170 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00101180 */

int ptr_double(undefined8 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00101190 */

int ptr_triple(undefined8 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 001011a4 */

int ptr_increment(int *param_1,ulong param_2)

{
 uint uVar1;
 uint uVar2;
 int *piVar3;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int *piVar4;
 
 uVar1 = (uint)param_2;
 if ((int)uVar1 < 1) {
 return 0;
 }
 if (uVar1 - 1 < 3) {
 uVar2 = 0;
 iVar5 = 0;
 }
 else {
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 iVar8 = 0;
 piVar3 = param_1;
 do {
 piVar4 = piVar3 + 4;
 iVar5 = iVar5 + (int)*(undefined8 *)piVar3;
 iVar6 = iVar6 + (int)((ulong)*(undefined8 *)piVar3 >> 0x20);
 iVar7 = iVar7 + (int)*(undefined8 *)(piVar3 + 2);
 iVar8 = iVar8 + (int)((ulong)*(undefined8 *)(piVar3 + 2) >> 0x20);
 piVar3 = piVar4;
 } while (param_1 + (ulong)((uVar1 >> 2) - 1) * 4 + 4 != piVar4);
 iVar5 = iVar5 + iVar6 + iVar7 + iVar8;
 uVar2 = uVar1 & 0xfffffffc;
 param_1 = param_1 + (param_2 & 0xfffffffc);
 if ((param_2 & 3) == 0) {
 return iVar5;
 }
 }
 iVar5 = iVar5 + *param_1;
 if (((int)(uVar2 + 1) < (int)uVar1) && (iVar5 = iVar5 + param_1[1], (int)(uVar2 + 2) < (int)uVar1)
 ) {
 iVar5 = iVar5 + param_1[2];
 }
 return iVar5;
}



/* Function: ptr_offset @ 00101250 */

undefined4 ptr_offset(long param_1,int param_2)

{
 return *(undefined4 *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 00101260 */

ulong ptr_diff(long param_1,long param_2)

{
 return (ulong)(param_1 - param_2) >> 2 & 0xffffffff;
}



/* Function: ptr_void @ 00101270 */

uint ptr_void(uint *param_1,int param_2)

{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 return (uint)(byte)*param_1;
 }
 return 0xffffffff;
}



/* Function: ptr_const @ 00101294 */

int ptr_const(int *param_1)

{
 return *param_1 << 1;
}



/* Function: ptr_const_ptr @ 001012a0 */

void ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return;
}



/* Function: ptr_func_simple @ 001012b4 */

void ptr_func_simple(func_ptr_t param_1,undefined8 param_2)

{
 /* WARNING: Could not recover jumptable at 0x001012bc. Too many branches */
 /* WARNING: Treating indirect jump as call */
 param_1(param_2, 0);
 return;
}



/* Function: ptr_func_complex @ 001012c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_func_complex(func_ptr_t param_1,undefined8 param_2)

{
 undefined8 uVar1;
 undefined *local_18;
 undefined8 uStack_10;
 long local_8;
 
 local_8 = __stack_chk_guard;
 local_18 = (undefined *)&DAT_00103338;
 uStack_10 = 0;
 uVar1 = param_1(param_2,(undefined8)&local_18);
 if (local_8 - __stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ptr_cast @ 00101320 */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00101330 */

long opaque_handle_create(int param_1)

{
 return (long)param_1;
}



/* Function: opaque_handle_op @ 00101340 */

int opaque_handle_op(int param_1)

{
 return param_1 << 1;
}



/* Function: test_pointer_types @ 00101350 */

void test_pointer_types(void)

{
 puts(DAT_00103340);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",6);
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",0xf);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",10);
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n");
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 return;
}



/* Function: struct_simple @ 00101490 */

int struct_simple(int *param_1)

{
 return *param_1 + param_1[1] + param_1[2];
}



/* Function: struct_array @ 001014a4 */

int struct_array(int *param_1,uint param_2)

{
 long lVar1;
 int *piVar2;
 int *piVar13;
 uint uVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 int iVar19;
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
 
 if ((int)param_2 < 1) {
 return 0;
 }
 if (param_2 - 1 < 3) {
 uVar14 = 0;
 iVar16 = 0;
 }
 else {
 iVar16 = 0;
 iVar17 = 0;
 iVar18 = 0;
 iVar19 = 0;
 piVar13 = param_1;
 do {
 iVar15 = *piVar13;
 piVar2 = piVar13 + 1;
 piVar3 = piVar13 + 2;
 piVar4 = piVar13 + 3;
 piVar5 = piVar13 + 4;
 piVar6 = piVar13 + 5;
 piVar7 = piVar13 + 6;
 piVar8 = piVar13 + 7;
 piVar9 = piVar13 + 8;
 piVar10 = piVar13 + 9;
 piVar11 = piVar13 + 10;
 piVar12 = piVar13 + 0xb;
 piVar13 = piVar13 + 0xc;
 iVar16 = iVar16 + *piVar2 + iVar15 + *piVar3;
 iVar17 = iVar17 + *piVar5 + *piVar4 + *piVar6;
 iVar18 = iVar18 + *piVar8 + *piVar7 + *piVar9;
 iVar19 = iVar19 + *piVar11 + *piVar10 + *piVar12;
 } while (piVar13 != param_1 + (ulong)((param_2 >> 2) - 1) * 0xc + 0xc);
 iVar16 = iVar16 + iVar17 + iVar18 + iVar19;
 uVar14 = param_2 & 0xfffffffc;
 if ((param_2 & 3) == 0) {
 return iVar16;
 }
 }
 lVar1 = (long)(int)uVar14;
 iVar16 = iVar16 + param_1[lVar1 * 3] + param_1[lVar1 * 3 + 1] + param_1[lVar1 * 3 + 2];
 if (((int)(uVar14 + 1) < (int)param_2) &&
 (iVar16 = iVar16 + param_1[lVar1 * 3 + 3] + param_1[lVar1 * 3 + 4] + param_1[lVar1 * 3 + 5],
 (int)(uVar14 + 2) < (int)param_2)) {
 iVar16 = iVar16 + param_1[lVar1 * 3 + 7] + param_1[lVar1 * 3 + 6] + param_1[lVar1 * 3 + 8];
 }
 return iVar16;
}



/* Function: struct_nested @ 00101590 */

int struct_nested(int *param_1)

{
 return *param_1 + param_1[3];
}



/* Function: struct_deep @ 001015a0 */

int struct_deep(long param_1)

{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}



/* Function: struct_with_ptr @ 001015b0 */

int struct_with_ptr(int *param_1)

{
 int iVar1;
 
 iVar1 = *param_1;
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 iVar1 = iVar1 + **(int **)(param_1 + 2);
 }
 return iVar1;
}



/* Function: struct_bitfields @ 001015d0 */

int struct_bitfields(uint *param_1)

{
 uint uVar1;
 
 uVar1 = *param_1;
 return (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7) + (uVar1 >> 6 & 0x3ff);
}



/* Function: union_type @ 001015f4 */

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



/* Function: union_array @ 00101620 */

int union_array(undefined8 *param_1,uint param_2)

{
 undefined8 *puVar1;
 ulong uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 undefined8 *puVar2;
 
 if ((int)param_2 < 1) {
 return 0;
 }
 if (param_2 - 1 < 3) {
 uVar3 = 0;
 iVar4 = 0;
 }
 else {
 iVar4 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 puVar1 = param_1;
 do {
 puVar2 = puVar1 + 2;
 iVar4 = iVar4 + (int)*puVar1;
 iVar5 = iVar5 + (int)((ulong)*puVar1 >> 0x20);
 iVar6 = iVar6 + (int)puVar1[1];
 iVar7 = iVar7 + (int)((ulong)puVar1[1] >> 0x20);
 puVar1 = puVar2;
 } while (puVar2 != param_1 + (ulong)((param_2 >> 2) - 1) * 2 + 2);
 iVar4 = iVar4 + iVar5 + iVar6 + iVar7;
 uVar3 = (ulong)(param_2 & 0xfffffffc);
 if ((param_2 & 3) == 0) {
 return iVar4;
 }
 }
 iVar5 = (int)uVar3;
 uVar3 = -(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
 iVar4 = iVar4 + *(int *)((long)param_1 + (long)iVar5 * 4);
 if (iVar5 + 1 < (int)param_2) {
 iVar4 = iVar4 + *(int *)((long)param_1 + uVar3 + 4);
 if (iVar5 + 2 < (int)param_2) {
 iVar4 = iVar4 + *(int *)((long)param_1 + uVar3 + 8);
 }
 }
 return iVar4;
}



/* Function: enum_type @ 001016c4 */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 001016d0 */

undefined4 enum_switch(uint param_1)

{
 if (param_1 < 4) {
 return *(undefined4 *)(&CSWTCH_62 + (ulong)param_1 * 4);
 }
 return 0xffffff9d;
}



/* Function: struct_func_ptr @ 001016f0 */

void struct_func_ptr(undefined4 *param_1)

{
 /* WARNING: Could not recover jumptable at 0x00101700. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (**(func_ptr_t **)(param_1 + 2))(*param_1, 0);
 return;
}



/* Function: linked_list @ 00101704 */

int linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 00101724 */

int doubly_linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 00101744 */

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
 do {
 if (param_1 == (int *)0x0) {
 return iVar10;
 }
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
 iVar2 = binary_tree_sum((int *)(piVar22 + 2));
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
 } while( true );
}



/* Function: binary_tree @ 00101980 */

int binary_tree(int *param_1)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 
 iVar6 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 4)) {
 iVar5 = *param_1;
 piVar3 = *(int **)(param_1 + 2);
 iVar4 = 0;
 if (piVar3 != (int *)0x0) {
 do {
 iVar2 = binary_tree_sum((int *)(piVar3 + 2));
 iVar1 = *piVar3;
 piVar3 = *(int **)(piVar3 + 4);
 iVar4 = iVar4 + iVar2 + iVar1;
 } while (piVar3 != (int *)0x0);
 iVar5 = iVar5 + iVar4;
 }
 iVar6 = iVar6 + iVar5;
 }
 return iVar6;
}



/* Function: graph_traverse @ 001019f4 */

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



/* Function: test_composite_types @ 00101a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_composite_types(void)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 int local_58 [2];
 undefined4 *local_50;
 undefined4 local_48 [2];
 undefined8 local_40;
 undefined4 local_38 [2];
 int *local_30;
 undefined8 uStack_28;
 int local_20 [2];
 undefined8 local_18;
 undefined4 *puStack_10;
 long local_8;
 
 local_8 = __stack_chk_guard;
 puts(DAT_00103518);
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
 piVar2 = local_58;
 iVar3 = 10;
 local_58[0] = 0x14;
 local_50 = local_48;
 local_48[0] = 0x1e;
 do {
 iVar1 = *piVar2;
 piVar2 = *(int **)(piVar2 + 2);
 iVar3 = iVar3 + iVar1;
 } while (piVar2 != (int *)0x0);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar3);
 piVar2 = local_20;
 iVar3 = 10;
 local_38[0] = 10;
 local_30 = piVar2;
 uStack_28 = 0;
 local_20[0] = 0x14;
 local_18 = 0;
 puStack_10 = local_38;
 do {
 iVar1 = *piVar2;
 piVar2 = *(int **)(piVar2 + 2);
 iVar3 = iVar3 + iVar1;
 } while (piVar2 != (int *)0x0);
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",100);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n");
 if (local_8 - __stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}
















/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 67 */
