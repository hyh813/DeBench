/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/2/2_clang_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

#include <stdio.h>

/* CRT stub function _init removed by preprocessor */

/* Type definitions for Ghidra decompiler compatibility */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef unsigned short ushort;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef void undefined;
typedef void (*code)(void);
typedef unsigned char undefined1;

/* Global variables for CRT compatibility */
extern char completed_0;
extern void *__dso_handle;

/* External data references */
extern char DAT_0010303f;
extern char DAT_00103060;
extern char DAT_00102cf0;
extern char DAT_0010307b;
extern char DAT_00102aa0;
extern char DAT_00103096;

/* Forward declarations for CRT stub functions */
void __cxa_finalize(void *);
void deregister_tm_clones(void);

/* Forward declarations for long double arithmetic */
typedef struct { unsigned char data[16]; } uint128_t;
uint128_t __multf3(uint128_t, uint128_t);
uint128_t __addtf3(uint128_t, uint128_t);
ulong __sfp_handle_exceptions(ulong);

/* FPSR and FPCR registers for floating-point status */
static unsigned long fpsr;
static unsigned long fpcr;

/* Compiler intrinsic macros for floating-point operations */
#define CARRY8(a, b) (((a) + (b)) < (a))
#define LZCOUNT(x) __builtin_clzll(x)

/* Function: FUN_00100620 @ 00100620 */

void FUN_00100620(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010077c @ 0010077c */

void FUN_0010077c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: process_char @ 001007d4 */

int process_char(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 + 0x20;
 if (0x19 < (param_1 - 0x41U & 0xff)) {
 iVar1 = param_1;
 }
 return iVar1;
}



/* Function: process_short @ 001007ec */

int process_short(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: process_int @ 001007f4 */

uint process_int(int param_1)

{
 return param_1 << 1 | 1;
}



/* Function: process_long @ 00100804 */

long process_long(long param_1)

{
 return param_1 << 1;
}



/* Function: process_ll @ 0010080c */

long process_ll(long param_1)

{
 return param_1 * param_1;
}



/* Function: process_float @ 00100814 */

float process_float(float param_1)

{
 return param_1 * 1.5 + 0.5;
}



/* Function: process_double @ 00100824 */

uint128_t process_double(double param_1)

{
 uint128_t auVar1;
 
 *(double *)auVar1.data = param_1 * 0.5 + 0.1;
 *(double *)&auVar1.data[8] = 0;
 return auVar1;
}



/* Function: process_ld @ 0010083c */

void process_ld(undefined8 param_1)

{
 uint128_t uVar1;
 uint128_t zero = {0};
 
 uVar1 = __multf3(*(uint128_t *)&param_1,*(uint128_t *)&param_1);
 __addtf3(uVar1,zero);
 return;
}



/* Function: process_bool @ 0010085c */

bool process_bool(uint param_1)

{
 return 0 < (int)param_1 && (param_1 & 1) == 0;
}



/* Function: const_param @ 00100874 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 00100880 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 00100890 */

int test_data_types_l1(void)

{
 int iVar1;
 
 puts(&DAT_0010303f);
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



/* Function: array_1d_stack @ 001009a4 */

int array_1d_stack(long param_1,uint param_2)

{
 undefined8 *puVar1;
 undefined8 *puVar2;
 undefined8 *puVar3;
 undefined8 *puVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 ulong uVar8;
 int *piVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 undefined8 uVar18;
 
 if ((int)param_2 < 1) {
 return 0;
 }
 uVar5 = (ulong)param_2;
 if (param_2 < 8) {
 uVar7 = 0;
 iVar10 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 puVar4 = (undefined8 *)(param_1 + 0x10);
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
 iVar11 = (int)((ulong)*puVar1 >> 0x20) + iVar11;
 iVar12 = (int)*puVar2 + iVar12;
 iVar13 = (int)((ulong)*puVar2 >> 0x20) + iVar13;
 iVar14 = (int)uVar18 + iVar14;
 iVar15 = (int)((ulong)uVar18 >> 0x20) + iVar15;
 iVar16 = (int)*puVar3 + iVar16;
 iVar17 = (int)((ulong)*puVar3 >> 0x20) + iVar17;
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



/* Function: array_string @ 00100a2c */

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



/* Function: array_2d_stack @ 00100a44 */

int array_2d_stack(int *param_1)

{
 return param_1[99] +
 param_1[0x58] +
 param_1[0x4d] +
 param_1[0x42] +
 param_1[0x37] + param_1[0x2c] + param_1[0x21] + param_1[0x16] + param_1[0xb] + *param_1;
}



/* Function: array_3d @ 00100a94 */

int array_3d(int *param_1)

{
 return (int)*(undefined8 *)(param_1 + 0x6d) + (int)*(undefined8 *)(param_1 + 0x75) +
 (int)*(undefined8 *)(param_1 + 0x71) + (int)*(undefined8 *)(param_1 + 0x79) +
 (int)*(undefined8 *)(param_1 + 0x65) + (int)*(undefined8 *)(param_1 + 0x69) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x6d) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x75) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x71) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x79) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x65) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x69) >> 0x20) +
 (int)*(undefined8 *)(param_1 + 0x6f) + (int)*(undefined8 *)(param_1 + 0x77) +
 (int)*(undefined8 *)(param_1 + 0x73) + (int)*(undefined8 *)(param_1 + 0x7b) +
 (int)*(undefined8 *)(param_1 + 0x67) + (int)*(undefined8 *)(param_1 + 0x6b) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x6f) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x77) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x73) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x7b) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x67) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x6b) >> 0x20) + param_1[100] +
 (int)*(undefined8 *)(param_1 + 0x54) + (int)*(undefined8 *)(param_1 + 0x5c) +
 (int)*(undefined8 *)(param_1 + 0x58) + (int)*(undefined8 *)(param_1 + 0x60) +
 (int)*(undefined8 *)(param_1 + 0x4c) + (int)*(undefined8 *)(param_1 + 0x50) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x5c) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) +
 (int)*(undefined8 *)(param_1 + 0x56) + (int)*(undefined8 *)(param_1 + 0x5e) +
 (int)*(undefined8 *)(param_1 + 0x5a) + (int)*(undefined8 *)(param_1 + 0x62) +
 (int)*(undefined8 *)(param_1 + 0x4e) + (int)*(undefined8 *)(param_1 + 0x52) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x56) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x5e) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x5a) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x62) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x4e) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x52) >> 0x20) + param_1[0x4b] +
 (int)*(undefined8 *)(param_1 + 0x3b) + (int)*(undefined8 *)(param_1 + 0x43) +
 (int)*(undefined8 *)(param_1 + 0x3f) + (int)*(undefined8 *)(param_1 + 0x47) +
 (int)*(undefined8 *)(param_1 + 0x33) + (int)*(undefined8 *)(param_1 + 0x37) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x3b) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x43) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x3f) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x47) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x33) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x37) >> 0x20) +
 (int)*(undefined8 *)(param_1 + 0x3d) + (int)*(undefined8 *)(param_1 + 0x45) +
 (int)*(undefined8 *)(param_1 + 0x41) + (int)*(undefined8 *)(param_1 + 0x49) +
 (int)*(undefined8 *)(param_1 + 0x35) + (int)*(undefined8 *)(param_1 + 0x39) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x3d) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x45) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x41) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x49) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x35) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x39) >> 0x20) + param_1[0x32] +
 (int)*(undefined8 *)(param_1 + 0x22) + (int)*(undefined8 *)(param_1 + 0x2a) +
 (int)*(undefined8 *)(param_1 + 0x26) + (int)*(undefined8 *)(param_1 + 0x2e) +
 (int)*(undefined8 *)(param_1 + 0x1a) + (int)*(undefined8 *)(param_1 + 0x1e) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x22) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x2a) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x26) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x1a) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20) +
 (int)*(undefined8 *)(param_1 + 0x24) + (int)*(undefined8 *)(param_1 + 0x2c) +
 (int)*(undefined8 *)(param_1 + 0x28) + (int)*(undefined8 *)(param_1 + 0x30) +
 (int)*(undefined8 *)(param_1 + 0x1c) + (int)*(undefined8 *)(param_1 + 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) + param_1[0x19] +
 (int)*(undefined8 *)(param_1 + 9) + (int)*(undefined8 *)(param_1 + 0x11) +
 (int)*(undefined8 *)(param_1 + 0xd) + (int)*(undefined8 *)(param_1 + 0x15) +
 (int)*(undefined8 *)(param_1 + 1) + (int)*(undefined8 *)(param_1 + 5) +
 (int)((ulong)*(undefined8 *)(param_1 + 9) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x11) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0xd) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20) +
 (int)*(undefined8 *)(param_1 + 0xb) + (int)*(undefined8 *)(param_1 + 0x13) +
 (int)*(undefined8 *)(param_1 + 0xf) + (int)*(undefined8 *)(param_1 + 0x17) +
 (int)*(undefined8 *)(param_1 + 3) + (int)*(undefined8 *)(param_1 + 7) +
 (int)((ulong)*(undefined8 *)(param_1 + 0xb) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x13) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0xf) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 0x17) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 3) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_1 + 7) >> 0x20) + *param_1;
}



/* Function: array_vla @ 00100bcc */

int array_vla(uint param_1,long param_2)

{
 undefined8 *puVar1;
 undefined8 *puVar2;
 undefined8 *puVar3;
 ulong uVar4;
 long lVar5;
 ulong uVar6;
 undefined8 *puVar7;
 int *piVar8;
 ulong uVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 undefined8 uVar18;
 
 if ((int)param_1 < 1) {
 return 0;
 }
 uVar4 = (ulong)param_1;
 if (param_1 < 8) {
 uVar6 = 0;
 iVar10 = 0;
 }
 else {
 uVar6 = uVar4 & 0xfffffff8;
 puVar7 = (undefined8 *)(param_2 + 0x10);
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
 iVar11 = (int)((ulong)*puVar1 >> 0x20) + iVar11;
 iVar12 = (int)*puVar2 + iVar12;
 iVar13 = (int)((ulong)*puVar2 >> 0x20) + iVar13;
 iVar14 = (int)uVar18 + iVar14;
 iVar15 = (int)((ulong)uVar18 >> 0x20) + iVar15;
 iVar16 = (int)*puVar3 + iVar16;
 iVar17 = (int)((ulong)*puVar3 >> 0x20) + iVar17;
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



/* Function: array_pointer @ 00100c50 */

int array_pointer(int *param_1,uint param_2)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 int *piVar8;
 ulong uVar9;
 
 if ((int)param_2 < 1) {
 return 0;
 }
 uVar5 = (ulong)param_2;
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



/* Function: pointer_array @ 00100cd8 */

int pointer_array(undefined8 *param_1,uint param_2)

{
 int iVar1;
 ulong uVar2;
 
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 if (9 < param_2) {
 param_2 = 10;
 }
 uVar2 = (ulong)param_2;
 do {
 if ((int *)*param_1 != (int *)0x0) {
 iVar1 = *(int *)*param_1 + iVar1;
 }
 param_1 = param_1 + 1;
 uVar2 = uVar2 - 1;
 } while (uVar2 != 0);
 }
 return iVar1;
}



/* Function: array_complex_index @ 00100d20 */

undefined4 array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)

{
 undefined4 uVar1;
 
 if (-1 < param_4) {
 uVar1 = 0xffffffff;
 if (((param_5 < param_3) && (param_4 < param_2)) && (-1 < param_5)) {
 uVar1 = *(undefined4 *)(param_1 + (long)(param_4 + param_5 * param_2) * 4);
 }
 return uVar1;
 }
 return 0xffffffff;
}



/* Function: array_oob @ 00100d54 */

int array_oob(long param_1,uint param_2)

{
 undefined8 *puVar1;
 undefined8 *puVar2;
 undefined8 *puVar3;
 undefined8 *puVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 ulong uVar8;
 int *piVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 undefined8 uVar18;
 
 if ((int)param_2 < 0) {
 return 0;
 }
 uVar5 = (ulong)(param_2 + 1);
 if (param_2 < 7) {
 uVar7 = 0;
 iVar10 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 puVar4 = (undefined8 *)(param_1 + 0x10);
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
 iVar11 = (int)((ulong)*puVar1 >> 0x20) + iVar11;
 iVar12 = (int)*puVar2 + iVar12;
 iVar13 = (int)((ulong)*puVar2 >> 0x20) + iVar13;
 iVar14 = (int)uVar18 + iVar14;
 iVar15 = (int)((ulong)uVar18 >> 0x20) + iVar15;
 iVar16 = (int)*puVar3 + iVar16;
 iVar17 = (int)((ulong)*puVar3 >> 0x20) + iVar17;
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



/* Function: test_array_types @ 00100dd8 */

int test_array_types(void)

{
 int iVar1;
 ulong uVar2;
 undefined8 local_220;
 undefined8 uStack_218;
 undefined8 uStack_210;
 undefined8 uStack_208;
 undefined8 local_200;
 undefined8 uStack_1f8;
 undefined8 uStack_1f0;
 undefined8 uStack_1e8;
 undefined8 local_1e0;
 undefined8 uStack_1d8;
 undefined8 uStack_1d0;
 undefined8 uStack_1c8;
 undefined8 local_1c0;
 undefined8 uStack_1b8;
 undefined8 uStack_1b0;
 undefined8 uStack_1a8;
 undefined8 local_1a0;
 undefined8 uStack_198;
 undefined8 uStack_190;
 undefined8 uStack_188;
 undefined8 local_180;
 undefined8 uStack_178;
 undefined8 uStack_170;
 undefined8 uStack_168;
 undefined8 local_160;
 undefined8 uStack_158;
 undefined8 uStack_150;
 undefined8 uStack_148;
 undefined8 local_140;
 undefined8 uStack_138;
 undefined8 uStack_130;
 undefined8 uStack_128;
 undefined8 local_120;
 undefined8 uStack_118;
 undefined8 uStack_110;
 undefined8 uStack_108;
 undefined8 local_100;
 undefined8 uStack_f8;
 undefined8 uStack_f0;
 undefined8 uStack_e8;
 undefined8 local_e0;
 undefined8 uStack_d8;
 undefined8 uStack_d0;
 undefined8 uStack_c8;
 undefined8 local_c0;
 undefined8 uStack_b8;
 undefined8 uStack_b0;
 undefined8 uStack_a8;
 undefined8 local_a0;
 undefined8 uStack_98;
 undefined8 uStack_90;
 undefined8 uStack_88;
 undefined8 local_80;
 undefined8 uStack_78;
 undefined8 uStack_70;
 undefined8 uStack_68;
 undefined8 local_60;
 undefined8 uStack_58;
 undefined8 uStack_50;
 undefined8 uStack_48;
 undefined8 local_40;
 undefined8 uStack_38;
 undefined4 local_30;
 
 puts(&DAT_00103060);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 printf("ARR-L1-03 (array_2d_stack): %d\n",0x2d);
 local_30 = 1;
 uStack_218 = 0x100000001;
 local_220 = 0x100000001;
 uStack_208 = 0x100000001;
 uStack_210 = 0x100000001;
 uStack_1f8 = 0x100000001;
 local_200 = 0x100000001;
 uStack_1e8 = 0x100000001;
 uStack_1f0 = 0x100000001;
 uStack_1d8 = 0x100000001;
 local_1e0 = 0x100000001;
 uStack_1c8 = 0x100000001;
 uStack_1d0 = 0x100000001;
 uStack_1b8 = 0x100000001;
 local_1c0 = 0x100000001;
 uStack_1a8 = 0x100000001;
 uStack_1b0 = 0x100000001;
 uStack_198 = 0x100000001;
 local_1a0 = 0x100000001;
 uStack_188 = 0x100000001;
 uStack_190 = 0x100000001;
 uStack_178 = 0x100000001;
 local_180 = 0x100000001;
 uStack_168 = 0x100000001;
 uStack_170 = 0x100000001;
 uStack_158 = 0x100000001;
 local_160 = 0x100000001;
 uStack_148 = 0x100000001;
 uStack_150 = 0x100000001;
 uStack_138 = 0x100000001;
 local_140 = 0x100000001;
 uStack_128 = 0x100000001;
 uStack_130 = 0x100000001;
 uStack_118 = 0x100000001;
 local_120 = 0x100000001;
 uStack_108 = 0x100000001;
 uStack_110 = 0x100000001;
 uStack_f8 = 0x100000001;
 local_100 = 0x100000001;
 uStack_e8 = 0x100000001;
 uStack_f0 = 0x100000001;
 uStack_d8 = 0x100000001;
 local_e0 = 0x100000001;
 uStack_c8 = 0x100000001;
 uStack_d0 = 0x100000001;
 uStack_b8 = 0x100000001;
 local_c0 = 0x100000001;
 uStack_a8 = 0x100000001;
 uStack_b0 = 0x100000001;
 uStack_98 = 0x100000001;
 local_a0 = 0x100000001;
 uStack_88 = 0x100000001;
 uStack_90 = 0x100000001;
 uStack_78 = 0x100000001;
 local_80 = 0x100000001;
 uStack_68 = 0x100000001;
 uStack_70 = 0x100000001;
 uStack_58 = 0x100000001;
 local_60 = 0x100000001;
 uStack_48 = 0x100000001;
 uStack_50 = 0x100000001;
 uStack_38 = 0x100000001;
 local_40 = 0x100000001;
 uVar2 = array_3d((int *)&local_220);
 printf("ARR-L1-04 (array_3d): %d\n",uVar2 & 0xffffffff);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 printf("ARR-L2-02 (array_pointer): %d\n",100);
 printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
 iVar1 = printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
 return iVar1;
}



/* Function: ptr_single @ 00100ed8 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00100ee4 */

int ptr_double(undefined8 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00100ef4 */

int ptr_triple(undefined8 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00100f08 */

int ptr_increment(int *param_1,int param_2)

{
 int *piVar1;
 ulong uVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 ulong uVar6;
 ulong uVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 undefined8 uVar16;
 
 if (param_2 < 1) {
 return 0;
 }
 if (param_2 - 1U < 7) {
 uVar6 = 0;
 iVar8 = 0;
 piVar5 = param_1;
 }
 else {
 uVar2 = (ulong)(param_2 - 1U) + 1;
 uVar6 = uVar2 & 0x1fffffff8;
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 piVar5 = param_1 + uVar6;
 param_1 = param_1 + 4;
 uVar7 = uVar6;
 do {
 piVar1 = param_1 + -4;
 piVar3 = param_1 + -2;
 piVar4 = param_1 + 2;
 uVar16 = *(undefined8 *)param_1;
 param_1 = param_1 + 8;
 uVar7 = uVar7 - 8;
 iVar8 = (int)*(undefined8 *)piVar1 + iVar8;
 iVar9 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar9;
 iVar10 = (int)*(undefined8 *)piVar3 + iVar10;
 iVar11 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar11;
 iVar12 = (int)uVar16 + iVar12;
 iVar13 = (int)((ulong)uVar16 >> 0x20) + iVar13;
 iVar14 = (int)*(undefined8 *)piVar4 + iVar14;
 iVar15 = (int)((ulong)*(undefined8 *)piVar4 >> 0x20) + iVar15;
 } while (uVar7 != 0);
 iVar8 = iVar12 + iVar8 + iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11;
 if (uVar2 == uVar6) {
 return iVar8;
 }
 }
 param_2 = param_2 - (int)uVar6;
 do {
 param_2 = param_2 + -1;
 iVar8 = *piVar5 + iVar8;
 piVar5 = piVar5 + 1;
 } while (param_2 != 0);
 return iVar8;
}



/* Function: ptr_offset @ 00100f94 */

undefined4 ptr_offset(long param_1,int param_2)

{
 return *(undefined4 *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 00100f9c */

ulong ptr_diff(long param_1,long param_2)

{
 return (ulong)(param_1 - param_2) >> 2;
}



/* Function: ptr_void @ 00100fa8 */

uint ptr_void(uint *param_1,int param_2)

{
 if (param_2 == 1) {
 return (uint)(byte)*param_1;
 }
 if (param_2 == 0) {
 return *param_1;
 }
 return 0xffffffff;
}



/* Function: ptr_const @ 00100fcc */

int ptr_const(int *param_1)

{
 return *param_1 << 1;
}



/* Function: ptr_const_ptr @ 00100fd8 */

void ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return;
}



/* Function: ptr_func_simple @ 00100fec */

void ptr_func_simple(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
 /* WARNING: Could not recover jumptable at 0x00100ff4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((void (*)(undefined4))(*UNRECOVERED_JUMPTABLE))(param_2);
 return;
}



/* Function: ptr_func_complex @ 00100ff8 */

void ptr_func_complex(code *param_1,undefined8 param_2)

{
 undefined *local_20;
 undefined8 uStack_18;
 
 uStack_18 = 0;
 local_20 = &DAT_00102cf0;
 ((void (*)(undefined8, void **))(*param_1))(param_2,(void **)&local_20);
 return;
}



/* Function: ptr_cast @ 00101034 */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 0010103c */

long opaque_handle_create(int param_1)

{
 return (long)param_1;
}



/* Function: opaque_handle_op @ 00101044 */

int opaque_handle_op(int param_1)

{
 return param_1 << 1;
}



/* Function: test_pointer_types @ 0010104c */

int test_pointer_types(void)

{
 int iVar1;
 
 puts(&DAT_0010307b);
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



/* Function: struct_simple @ 00101150 */

int struct_simple(int *param_1)

{
 return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00101164 */

int struct_array(int *param_1,uint param_2)

{
 int *piVar1;
 ulong uVar2;
 ulong uVar3;
 long lVar4;
 ulong uVar5;
 int *piVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 
 if ((int)param_2 < 1) {
 return 0;
 }
 uVar3 = (ulong)param_2;
 if (param_2 < 8) {
 uVar5 = 0;
 iVar7 = 0;
 }
 else {
 uVar5 = uVar3 & 0xfffffff8;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 uVar2 = uVar5;
 piVar6 = param_1;
 do {
 uVar2 = uVar2 - 8;
 iVar11 = *piVar6 + iVar11 + piVar6[1] + piVar6[2];
 iVar12 = piVar6[3] + iVar12 + piVar6[4] + piVar6[5];
 iVar13 = piVar6[6] + iVar13 + piVar6[7] + piVar6[8];
 iVar14 = piVar6[9] + iVar14 + piVar6[10] + piVar6[0xb];
 iVar7 = piVar6[0xc] + iVar7 + piVar6[0xd] + piVar6[0xe];
 iVar8 = piVar6[0xf] + iVar8 + piVar6[0x10] + piVar6[0x11];
 iVar9 = piVar6[0x12] + iVar9 + piVar6[0x13] + piVar6[0x14];
 iVar10 = piVar6[0x15] + iVar10 + piVar6[0x16] + piVar6[0x17];
 piVar6 = piVar6 + 0x18;
 } while (uVar2 != 0);
 iVar7 = iVar7 + iVar11 + iVar8 + iVar12 + iVar9 + iVar13 + iVar10 + iVar14;
 if (uVar5 == uVar3) {
 return iVar7;
 }
 }
 lVar4 = uVar3 - uVar5;
 param_1 = param_1 + uVar5 * 3 + 1;
 do {
 piVar1 = param_1 + -1;
 iVar8 = *param_1;
 piVar6 = param_1 + 1;
 param_1 = param_1 + 3;
 lVar4 = lVar4 + -1;
 iVar7 = *piVar1 + iVar7 + iVar8 + *piVar6;
 } while (lVar4 != 0);
 return iVar7;
}



/* Function: struct_nested @ 0010121c */

int struct_nested(int *param_1)

{
 return param_1[3] + *param_1;
}



/* Function: struct_deep @ 0010122c */

int struct_deep(long param_1)

{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 0010123c */

int struct_with_ptr(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (*(int **)(param_1 + 2) != (int *)0x0) {
 iVar1 = **(int **)(param_1 + 2);
 }
 return iVar1 + *param_1;
}



/* Function: struct_bitfields @ 00101254 */

short struct_bitfields(ushort *param_1)

{
 ushort uVar1;
 
 uVar1 = *param_1;
 return (uVar1 & 1) + (uVar1 >> 6) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 00101274 */

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



/* Function: union_array @ 0010129c */

int union_array(long param_1,uint param_2)

{
 undefined8 *puVar1;
 undefined8 *puVar2;
 undefined8 *puVar3;
 undefined8 *puVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 ulong uVar8;
 int *piVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 undefined8 uVar18;
 
 if ((int)param_2 < 1) {
 return 0;
 }
 uVar5 = (ulong)param_2;
 if (param_2 < 8) {
 uVar7 = 0;
 iVar10 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 puVar4 = (undefined8 *)(param_1 + 0x10);
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
 iVar11 = (int)((ulong)*puVar1 >> 0x20) + iVar11;
 iVar12 = (int)*puVar2 + iVar12;
 iVar13 = (int)((ulong)*puVar2 >> 0x20) + iVar13;
 iVar14 = (int)uVar18 + iVar14;
 iVar15 = (int)((ulong)uVar18 >> 0x20) + iVar15;
 iVar16 = (int)*puVar3 + iVar16;
 iVar17 = (int)((ulong)*puVar3 >> 0x20) + iVar17;
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



/* Function: enum_type @ 00101324 */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 00101330 */

undefined4 enum_switch(uint param_1)

{
 if (param_1 < 4) {
 return *(undefined4 *)(&DAT_00102aa0 + (long)(int)param_1 * 4);
 }
 return 0xffffff9d;
}



/* Function: struct_func_ptr @ 00101350 */

void struct_func_ptr(undefined4 *param_1)

{
 /* WARNING: Could not recover jumptable at 0x0010135c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((void (*)(undefined4))(**(code **)(param_1 + 2)))(*param_1);
 return;
}



/* Function: linked_list @ 00101360 */

int linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = *param_1 + iVar1;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 00101380 */

int doubly_linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = *param_1 + iVar1;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 001013a0 */

int binary_tree_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (param_1 != (int *)0x0) {
 iVar3 = 0;
 do {
 iVar1 = *param_1;
 iVar2 = binary_tree_sum(*(undefined8 *)(param_1 + 2));
 param_1 = *(int **)(param_1 + 4);
 iVar3 = iVar1 + iVar3 + iVar2;
 } while (param_1 != (int *)0x0);
 return iVar3;
 }
 return 0;
}



/* Function: graph_traverse @ 00101408 */

int graph_traverse(long param_1)

{
 int iVar1;
 ulong uVar2;
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



/* Function: test_composite_types @ 00101454 */

int test_composite_types(void)

{
 int iVar1;
 ulong uVar2;
 int *piVar3;
 undefined8 uStack_98;
 int local_a0[12];
 undefined8 local_90;
 int local_80 [2];
 undefined4 *local_78;
 undefined8 uStack_70;
 undefined4 local_68 [2];
 undefined8 local_60;
 int *piStack_58;
 int local_50 [2];
 undefined4 *local_48;
 undefined4 local_40 [2];
 undefined4 *local_38;
 undefined4 local_30 [2];
 undefined8 local_28;
 
 puts(&DAT_00103096);
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
 uVar2 = (ulong)(uint)(iVar1 + (int)uVar2);
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
 uVar2 = (ulong)(uint)(iVar1 + (int)uVar2);
 } while (piVar3 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar2);
/* Initialize binary tree: root node at offset 0, left child at offset 8, right child NULL */
local_a0[0] = 100;            /* root value */
*(int **)((char *)local_a0 + 8) = (int *)((char *)local_a0 + 16); /* left child pointer */
*(int *)((char *)local_a0 + 16) = 50;  /* left child value */
*(int **)((char *)local_a0 + 24) = (int *)0;  /* left child's left = NULL */
*(int **)((char *)local_a0 + 32) = (int *)0;  /* left child's right = NULL */
*(int **)((char *)local_a0 + 40) = (int *)0;  /* right child pointer = NULL */
uVar2 = binary_tree_sum((int *)local_a0);
 printf("CMP-L2-14 (binary_tree): %d\n",uVar2 & 0xffffffff);
 iVar1 = printf("CMP-L2-15 (graph_traverse): %d\n",1);
 return iVar1;
}



/* Function: main @ 00101604 */

undefined8 main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* Function: __addtf3 @ 00101630 */

uint128_t __addtf3(uint128_t param_1,uint128_t param_2)

{
 int iVar1;
 ulong uVar2;
 ulong uVar3;
 ulong uVar4;
 uint128_t auVar5;
 bool bVar6;
 bool bVar7;
 uint uVar8;
 long lVar9;
 ulong uVar10;
 ulong uVar11;
 uint uVar12;
 ulong uVar13;
 uint uVar14;
 ulong uVar15;
 ulong uVar16;
 ulong uVar17;
 long lVar18;
 ulong uVar19;
 ulong uVar20;
 ulong uVar21;
 ulong uVar22;
 ulong uVar23;
 ulong uVar24;
 ulong uVar25;
 ulong uVar26;
 ulong uVar28;
 uint128_t auVar27;
 ulong uVar29;
 
 uVar11 = *(ulong *)&param_2.data[8];
 uVar29 = *(ulong *)param_2.data;
 uVar28 = *(ulong *)&param_1.data[8];
 uVar26 = *(ulong *)param_1.data;
 uVar13 = fpcr;
 uVar3 = (uVar28 & 0xffffffffffff) << 3;
 lVar18 = -((long)uVar28 >> 0x3f);
 uVar12 = (uint)lVar18;
 lVar9 = -((long)uVar11 >> 0x3f);
 uVar14 = (uint)lVar9;
 uVar2 = uVar11 << 3;
 uVar4 = uVar2 & 0x7fffffffffff8;
 uVar10 = uVar26 >> 0x3d;
 uVar24 = uVar3 | uVar10;
 uVar20 = uVar28 >> 0x30 & 0x7fff;
 uVar19 = uVar11 >> 0x30 & 0x7fff;
 uVar17 = uVar29 >> 0x3d;
 uVar16 = uVar4 | uVar17;
 uVar21 = uVar26 * 8;
 uVar23 = uVar29 * 8;
 uVar22 = uVar21;
 uVar25 = uVar24;
 if ((long)uVar11 >> 0x3f == (long)uVar28 >> 0x3f) {
 uVar8 = (int)uVar20 - (int)uVar19;
 lVar9 = lVar18;
 if ((int)uVar8 < 1) {
 if (uVar8 != 0) {
 if (uVar20 == 0) {
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar19 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar16 != 0 || uVar23 != 0) {
 uVar11 = uVar4 >> 0x32 ^ 1;
 goto LAB_00101950;
 }
 goto LAB_00101c04;
 }
 goto LAB_001018ac;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 uVar20 = uVar19;
 goto LAB_00101a68;
 }
 }
 else {
 uVar8 = -uVar8;
 uVar24 = uVar24 | 0x8000000000000;
 }
 if (uVar19 != 0x7fff) {
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar17 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar16 + (uVar24 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar21;
 }
 uVar17 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar17 = (ulong)(uVar24 != 0 || uVar21 != 0);
 }
 uVar10 = uVar17 + uVar23;
 uVar20 = uVar19;
 if (CARRY8(uVar17,uVar23)) {
 uVar16 = uVar16 + 1;
 }
 goto LAB_00101a68;
 }
 if (uVar16 != 0 || uVar23 != 0) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 goto LAB_00101b14;
 }
LAB_00101c98:
 uVar22 = 0;
 uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
 goto LAB_001017e4;
 }
 uVar15 = uVar20 + 1;
 if ((uVar15 & 0x7ffe) == 0) {
 if (uVar20 != 0) {
 uVar8 = 0;
 uVar11 = 0;
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00101f20;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101c98;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar8 = (uint)uVar11;
 if (uVar19 != 0x7fff) goto LAB_001020c8;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102160;
 }
LAB_0010218c:
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_001020d0:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101b14;
 }
LAB_00101f20:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 }
 else {
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) goto LAB_0010218c;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101c98;
 }
 else {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101f20;
LAB_001020c8:
 if (uVar16 != 0 || uVar23 != 0) goto LAB_001020d0;
 }
LAB_00102160:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 }
 goto LAB_00101b14;
 }
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 goto LAB_001018cc;
 }
 goto LAB_00101e98;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101e98;
 uVar22 = uVar21 + uVar23;
 uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 if ((uVar25 >> 0x33 & 1) != 0) {
 uVar25 = uVar25 & 0xfff7ffffffffffff;
 uVar10 = 0;
 bVar6 = false;
 uVar15 = 1;
 goto LAB_0010177c;
 }
LAB_00101768:
 uVar17 = uVar22 | uVar25;
 goto LAB_0010176c;
 }
 if (uVar15 != 0x7fff) {
 uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 bVar6 = false;
 uVar10 = uVar21 + uVar23 >> 1 & 7;
 uVar25 = uVar17 >> 1;
 uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
 goto LAB_0010177c;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 != 0) {
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_00102170:
 uVar11 = 0x14;
 lVar18 = 0;
 goto LAB_001019bc;
 }
 if (uVar10 == 0x800000) {
 if (lVar18 == 0) goto LAB_0010210c;
LAB_00101fd8:
 uVar11 = 0x14;
 lVar18 = 1;
 goto LAB_001019bc;
 }
LAB_00101e34:
 uVar14 = 0x14;
 if ((uVar13 & 0xc00000) == 0x400000) {
 uVar22 = 0xffffffffffffffff;
 uVar15 = 0x7ffe;
 bVar6 = false;
 uVar11 = 0x14;
 uVar25 = uVar22;
 goto joined_r0x00101e54;
 }
 goto LAB_00101978;
 }
LAB_00101ec4:
 uVar11 = 0x14;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 goto LAB_00101a68;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101c98;
 goto LAB_00101944;
 }
 goto LAB_00101840;
 }
 uVar19 = uVar20;
 if (uVar20 != 0x7fff) goto LAB_001018ac;
 uVar14 = uVar12;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101c04;
 uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
 uVar23 = uVar21;
 uVar16 = uVar24;
LAB_00101950:
 uVar20 = 0x7fff;
 goto LAB_00101958;
 }
 uVar16 = uVar16 | 0x8000000000000;
 if (uVar20 == 0x7fff) goto LAB_00101af4;
LAB_00101840:
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar17 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar24 + (uVar16 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar23;
 }
 uVar17 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 uVar16 = uVar24;
 }
 }
 else {
 uVar17 = (ulong)(uVar16 != 0 || uVar23 != 0);
 uVar16 = uVar24;
 }
 uVar10 = uVar17 + uVar21;
 if (CARRY8(uVar17,uVar21)) {
 uVar16 = uVar16 + 1;
 }
LAB_00101a68:
 uVar19 = uVar20;
 uVar22 = uVar10;
 uVar25 = uVar16;
 if ((uVar16 >> 0x33 & 1) == 0) goto LAB_001018ac;
 uVar15 = uVar20 + 1;
 if (uVar15 != 0x7fff) {
 bVar6 = false;
 uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
 uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
 uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
 goto LAB_0010177c;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0) goto LAB_00101ec4;
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_00102170;
 if (uVar10 != 0x800000) goto LAB_00101e34;
 if (lVar18 != 0) goto LAB_00101fd8;
LAB_0010210c:
 uVar22 = 0xffffffffffffffff;
 lVar18 = 0;
 uVar15 = 0x7ffe;
 uVar11 = 0x14;
 uVar25 = uVar22;
LAB_001017ac:
 uVar14 = (uint)uVar11;
 uVar12 = (uint)lVar18;
 if (uVar15 + 1 != 0x7fff) {
 uVar10 = uVar25 >> 3 & 0xffffffffffff;
 uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
 uVar14 = (uint)(uVar15 + 1) & 0x7fff;
 goto LAB_001017c8;
 }
LAB_00101978:
 uVar12 = (uint)lVar18;
 uVar13 = uVar13 & 0xc00000;
 if (uVar13 != 0) {
 if (uVar13 == 0x400000) {
 if (lVar9 != 0) goto LAB_00101994;
 }
 else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00101994:
 uVar22 = 0xffffffffffffffff;
 uVar11 = (ulong)(uVar14 | 0x14);
 uVar10 = 0x1fffffffffffffff;
 uVar20 = 0x7ffe;
 goto LAB_001018cc;
 }
 }
 uVar11 = (ulong)(uVar14 | 0x14);
 }
LAB_001019bc:
 uVar22 = 0;
 uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
 goto LAB_001019d0;
 }
 uVar8 = (int)uVar20 - (int)uVar19;
 if ((int)uVar8 < 1) {
 if (uVar8 == 0) {
 uVar11 = 0;
 if ((uVar20 + 1 & 0x7ffe) != 0) {
 uVar22 = uVar21 + uVar29 * -8;
 uVar10 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar10 >> 0x33 & 1) != 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar10 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_00101704;
 }
 lVar9 = lVar18;
 if (uVar22 != 0 || uVar10 != 0) goto LAB_00101704;
 uVar22 = 0;
 uVar20 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 uVar10 = 0;
 goto LAB_001018cc;
 }
 if (uVar20 == 0) {
 if (uVar24 != 0 || uVar21 != 0) {
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101e98;
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar25 >> 0x33 & 1) == 0) {
 if (uVar22 != 0 || uVar25 != 0) {
 uVar10 = 0;
 bVar6 = true;
 uVar15 = uVar20;
 goto LAB_0010177c;
 }
 goto LAB_00101f70;
 }
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 uVar17 = uVar22 | uVar25;
 goto LAB_0010176c;
 }
 uVar22 = uVar23;
 uVar25 = uVar16;
 lVar18 = lVar9;
 if (uVar16 == 0 && uVar23 == 0) {
LAB_00101f70:
 uVar10 = 0;
 uVar22 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 goto LAB_001018cc;
 }
LAB_00101e98:
 uVar10 = 0;
 uVar15 = 0;
 goto LAB_00101ea0;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00101dd8;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 if (uVar19 != 0x7fff) goto LAB_00101da8;
 }
LAB_00102020:
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = (uint)uVar11;
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 == 0 && uVar21 == 0) {
LAB_0010209c:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 goto LAB_00101b14;
 }
LAB_00102038:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101b14;
 }
 if (uVar24 != 0 || uVar21 != 0) goto LAB_00101da8;
 }
 else {
 if (uVar19 == 0x7fff) goto LAB_00102020;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101da8:
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101b14;
 }
 goto LAB_00102038;
 }
LAB_00101dd8:
 uVar11 = 0;
 if (uVar16 != 0 || uVar23 != 0) goto LAB_0010209c;
 }
 uVar22 = 0xffffffffffffffff;
 uVar10 = 0xffffffffffff;
 uVar12 = 0;
 uVar11 = 1;
 }
 else {
 if (uVar20 == 0) {
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar12 = uVar14;
 goto LAB_00101950;
 }
 goto LAB_00101c04;
 }
 goto LAB_001018ac;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_001016fc;
 }
 }
 else {
 uVar8 = -uVar8;
 uVar24 = uVar24 | 0x8000000000000;
 }
 if (uVar19 != 0x7fff) {
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar10 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar16 - (uVar24 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar21;
 }
 uVar10 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar10 = (ulong)(uVar24 != 0 || uVar21 != 0);
 }
 uVar22 = uVar23 - uVar10;
 uVar25 = uVar16 - (uVar23 < uVar10);
 goto LAB_001016fc;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101c98;
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
LAB_00101b14:
 if (uVar10 == 0 && uVar22 == 0) {
 uVar22 = 0;
 uVar14 = 0x7fff;
 uVar10 = 0;
 goto LAB_001017c8;
 }
 }
 uVar14 = 0x7fff;
 uVar10 = uVar10 & 0xffffffffffff | 0x800000000000;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 uVar19 = uVar20;
 lVar9 = lVar18;
 goto LAB_001016fc;
 }
 goto LAB_001016a8;
 }
 uVar19 = uVar20;
 lVar9 = lVar18;
 if (uVar20 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101944:
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar23 = uVar21;
 uVar16 = uVar24;
 goto LAB_00101950;
 }
LAB_00101c04:
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 uVar12 = uVar14;
 goto LAB_00101b14;
 }
LAB_001018ac:
 uVar12 = (uint)lVar9;
 uVar17 = uVar22 | uVar25;
 uVar10 = uVar22 & 7;
 bVar6 = false;
 uVar15 = uVar19;
 lVar18 = lVar9;
 if (uVar19 == 0) goto joined_r0x001018bc;
LAB_0010177c:
 if (uVar10 == 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0;
 if (bVar6) {
LAB_00101ea0:
 uVar11 = 0;
 if (((uint)uVar13 >> 0xb & 1) != 0) {
 uVar11 = 8;
 }
 }
 }
 else {
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0x400000) {
 uVar11 = 0x10;
joined_r0x00101e54:
 if (lVar18 == 0) {
LAB_00101aa4:
 bVar7 = 0xfffffffffffffff7 < uVar22;
 uVar22 = uVar22 + 8;
 if (bVar7) {
 uVar25 = uVar25 + 1;
 }
 }
 }
 else if (uVar10 == 0x800000) {
 uVar11 = 0x10;
 if (lVar18 != 0) goto LAB_00101aa4;
 }
 else {
 if (uVar10 != 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0x10;
 if (bVar6) {
 uVar11 = 0x18;
 }
 goto LAB_001017a8;
 }
 uVar11 = 0x10;
 if (((uVar22 & 0xf) != 4) &&
 (bVar7 = 0xfffffffffffffffb < uVar22, uVar22 = uVar22 + 4, bVar7)) {
 uVar25 = uVar25 + 1;
 }
 }
 uVar10 = uVar25 & 0x8000000000000;
 if (bVar6) {
 uVar11 = (ulong)((uint)uVar11 | 8);
 }
 }
LAB_001017a8:
 uVar12 = (uint)lVar18;
 uVar20 = uVar15;
 uVar23 = uVar22;
 uVar16 = uVar25;
 lVar9 = lVar18;
 if (uVar10 != 0) goto LAB_001017ac;
LAB_00101958:
 uVar10 = uVar16 >> 3;
 uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
 if (uVar20 == 0x7fff) goto LAB_00101b14;
 }
 else {
 uVar16 = uVar16 | 0x8000000000000;
LAB_001016a8:
 if (uVar20 == 0x7fff) {
LAB_00101af4:
 lVar9 = lVar18;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101c98;
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101b14;
 }
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar10 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar24 = uVar24 - (uVar16 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar23;
 }
 uVar10 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar10 = (ulong)(uVar16 != 0 || uVar23 != 0);
 }
 uVar22 = uVar21 - uVar10;
 uVar25 = uVar24 - (uVar21 < uVar10);
 uVar19 = uVar20;
 lVar9 = lVar18;
LAB_001016fc:
 uVar10 = uVar25 & 0x7ffffffffffff;
 uVar20 = uVar19;
 if ((uVar25 >> 0x33 & 1) == 0) goto LAB_001018ac;
LAB_00101704:
 if (uVar10 == 0) {
 uVar12 = (int)LZCOUNT(uVar22) + 0x34;
 if (uVar12 < 0x40) goto LAB_00101710;
 uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
 uVar17 = 0;
 }
 else {
 uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_00101710:
 uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
 uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
 }
 if ((long)(int)uVar12 < (long)uVar20) {
 uVar19 = uVar20 - (long)(int)uVar12;
 uVar22 = uVar17;
 uVar25 = uVar10 & 0xfff7ffffffffffff;
 goto LAB_001018ac;
 }
 iVar1 = uVar12 - (int)uVar20;
 uVar12 = iVar1 + 1;
 if ((int)uVar12 < 0x40) {
 uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
 uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
 goto LAB_00101768;
 }
 uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
 if (uVar12 == 0x40) {
 uVar22 = uVar17;
 }
 uVar25 = 0;
 uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
 uVar22 = uVar17;
LAB_0010176c:
 uVar12 = (uint)lVar9;
joined_r0x001018bc:
 if (uVar17 != 0) {
 uVar10 = uVar22 & 7;
 bVar6 = true;
 uVar15 = 0;
 lVar18 = lVar9;
 goto LAB_0010177c;
 }
 uVar22 = 0;
 uVar20 = 0;
 uVar11 = 0;
 uVar10 = 0;
 }
LAB_001018cc:
 uVar10 = uVar10 & 0xffffffffffff;
 uVar14 = (uint)uVar20 & 0x7fff;
 }
LAB_001017c8:
 uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
 if ((int)uVar11 == 0) {
LAB_001017e4:
 *(ulong *)&auVar27.data[8] = uVar10;
 *(ulong *)auVar27.data = uVar22;
 return auVar27;
}

LAB_001019d0:
 __sfp_handle_exceptions(uVar11);
 *(ulong *)&auVar5.data[8] = uVar10;
 *(ulong *)auVar5.data = uVar22;
 return auVar5;
}



/* Function: __multf3 @ 001021d0 */

uint128_t __multf3(uint128_t param_1,uint128_t param_2)

{
 ulong uVar1;
 uint128_t auVar2;
 bool bVar3;
 uint uVar4;
 uint uVar5;
 ulong uVar6;
 ulong uVar7;
 int iVar8;
 long lVar9;
 ulong uVar10;
 ulong uVar11;
 long lVar12;
 long lVar13;
 ulong uVar14;
 ulong uVar15;
 ulong uVar16;
 ulong uVar17;
 ulong uVar18;
 ulong uVar19;
 long lVar20;
 ulong uVar21;
 ulong uVar22;
 long lVar23;
 long lVar24;
 ulong uVar25;
 ulong uVar26;
 ulong uVar27;
 ulong uVar28;
 ulong uVar29;
 ulong uVar30;
 uint128_t auVar31;
 
 uVar21 = *(ulong *)&param_2.data[8];
 uVar17 = *(ulong *)param_2.data;
 uVar11 = *(ulong *)&param_1.data[8];
 uVar15 = *(ulong *)param_1.data;
 uVar18 = fpcr;
 uVar10 = uVar11 >> 0x3f;
 uVar19 = uVar11 & 0xffffffffffff;
 uVar11 = uVar11 >> 0x30 & 0x7fff;
 iVar8 = (int)uVar11;
 if (iVar8 == 0) {
 if (uVar15 == 0 && uVar19 == 0) {
 uVar19 = 0;
 uVar7 = 4;
 lVar13 = 0;
 lVar24 = 1;
 uVar6 = 0;
 uVar11 = 0;
 }
 else {
 if (uVar19 == 0) {
 uVar11 = LZCOUNT(uVar15) + 0x31;
 iVar8 = (int)uVar11;
 lVar13 = LZCOUNT(uVar15) + 0x40;
 if (uVar11 < 0x3d) goto LAB_00102628;
 uVar11 = 0;
 uVar19 = uVar15 << ((ulong)(iVar8 - 0x3d) & 0x3f);
 }
 else {
 lVar13 = LZCOUNT(uVar19);
 iVar8 = (int)lVar13 + -0xf;
LAB_00102628:
 uVar19 = uVar15 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar19 << ((ulong)(iVar8 + 3) & 0x3f);
 uVar11 = uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
 }
 uVar7 = 0;
 lVar13 = -0x3fef - lVar13;
 lVar24 = 0;
 uVar6 = 0;
 }
 }
 else if (iVar8 == 0x7fff) {
 if (uVar15 == 0 && uVar19 == 0) {
 uVar19 = 0;
 uVar7 = 8;
 lVar13 = 0x7fff;
 lVar24 = 2;
 uVar6 = 0;
 uVar11 = 0;
 }
 else {
 uVar6 = uVar19 >> 0x2f ^ 1;
 uVar7 = 0xc;
 lVar13 = 0x7fff;
 lVar24 = 3;
 uVar11 = uVar15;
 }
 }
 else {
 uVar19 = uVar15 >> 0x3d | uVar19 << 3 | 0x8000000000000;
 lVar13 = uVar11 - 0x3fff;
 lVar24 = 0;
 uVar7 = 0;
 uVar6 = 0;
 uVar11 = uVar15 << 3;
 }
 uVar14 = uVar21 >> 0x3f;
 uVar15 = uVar21 & 0xffffffffffff;
 uVar22 = uVar21 >> 0x30 & 0x7fff;
 iVar8 = (int)uVar22;
 uVar4 = *(uint *)&param_1.data[12];
 uVar5 = *(uint *)&param_2.data[12];
 if (iVar8 == 0) {
 if (uVar17 == 0 && uVar15 == 0) {
 uVar7 = uVar7 | 1;
 lVar23 = lVar13 + 1;
 uVar21 = 0;
 uVar17 = 0;
 lVar12 = 1;
 lVar20 = lVar13;
 }
 else {
 if (uVar15 == 0) {
 uVar21 = LZCOUNT(uVar17) + 0x31;
 iVar8 = (int)uVar21;
 lVar23 = LZCOUNT(uVar17) + 0x40;
 if (uVar21 < 0x3d) goto LAB_001025cc;
 uVar21 = uVar17 << ((ulong)(iVar8 - 0x3d) & 0x3f);
 uVar17 = 0;
 }
 else {
 lVar23 = LZCOUNT(uVar15);
 iVar8 = (int)lVar23 + -0xf;
LAB_001025cc:
 uVar21 = uVar17 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
 uVar17 = uVar17 << ((ulong)(iVar8 + 3) & 0x3f);
 }
 lVar20 = (lVar13 - lVar23) + -0x3fef;
 lVar23 = (lVar13 - lVar23) + -0x3fee;
 lVar12 = 0;
 }
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 if (uVar7 < 0xb) {
LAB_001022dc:
 uVar15 = uVar21;
 if (2 < uVar7) {
LAB_00102358:
 uVar7 = 1L << uVar7;
 uVar25 = uVar11;
 uVar21 = uVar19;
 uVar26 = uVar22;
 lVar9 = lVar24;
 if ((uVar7 & 0x530) == 0) {
 if ((uVar7 & 0x240) != 0) {
 uVar6 = 1;
 uVar15 = 0xffffffffffff;
 uVar4 = 0x7fff;
 uVar11 = 0xffffffffffffffff;
 uVar10 = 0;
 goto LAB_0010230c;
 }
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 lVar9 = lVar12;
 if ((uVar7 & 0x88) == 0) goto LAB_001023fc;
 }
LAB_0010239c:
 lVar12 = lVar9;
 uVar14 = uVar26;
 uVar17 = uVar25;
 uVar22 = uVar14;
 if (lVar12 == 2) {
LAB_001023ec:
 uVar4 = 0x7fff;
 uVar15 = 0;
 uVar11 = 0;
 uVar10 = uVar22;
 goto LAB_0010230c;
 }
 goto LAB_001023b8;
 }
 if (uVar7 - 1 < 2) {
 if (lVar12 == 2) goto LAB_001023ec;
 goto LAB_001022f8;
 }
LAB_001023fc:
 uVar29 = uVar17 & 0xffffffff;
 uVar25 = uVar11 >> 0x20;
 uVar7 = uVar15 & 0xffffffff;
 uVar11 = uVar11 & 0xffffffff;
 uVar17 = uVar17 >> 0x20;
 uVar15 = uVar15 >> 0x20;
 uVar26 = uVar25 * uVar29;
 uVar28 = uVar19 >> 0x20;
 uVar14 = uVar25 * uVar7;
 uVar19 = uVar19 & 0xffffffff;
 uVar10 = uVar26 + uVar17 * uVar11 + (uVar29 * uVar11 >> 0x20);
 uVar21 = uVar14 + uVar15 * uVar11 + (uVar11 * uVar7 >> 0x20);
 uVar27 = uVar28 * uVar29;
 uVar30 = uVar28 * uVar7;
 lVar13 = uVar25 * uVar17 + 0x100000000;
 if (uVar26 < uVar10 || uVar26 - uVar10 == 0) {
 lVar13 = uVar25 * uVar17;
 }
 uVar26 = (uVar11 * uVar7 & 0xffffffff) + (uVar21 << 0x20);
 uVar1 = uVar27 + uVar17 * uVar19 + (uVar29 * uVar19 >> 0x20);
 uVar16 = uVar30 + uVar15 * uVar19 + (uVar19 * uVar7 >> 0x20);
 lVar24 = uVar25 * uVar15 + 0x100000000;
 if (uVar14 < uVar21 || uVar14 - uVar21 == 0) {
 lVar24 = uVar25 * uVar15;
 }
 uVar14 = uVar26 + (uVar10 >> 0x20) + lVar13;
 lVar13 = uVar17 * uVar28 + 0x100000000;
 if (uVar27 < uVar1 || uVar27 - uVar1 == 0) {
 lVar13 = uVar17 * uVar28;
 }
 uVar17 = lVar24 + (uVar21 >> 0x20);
 uVar21 = (uVar19 * uVar7 & 0xffffffff) + (uVar16 << 0x20);
 lVar24 = uVar15 * uVar28 + 0x100000000;
 if (uVar30 < uVar16 || uVar30 - uVar16 == 0) {
 lVar24 = uVar15 * uVar28;
 }
 uVar15 = uVar21 + uVar17;
 uVar26 = (ulong)(uVar14 < uVar26);
 uVar19 = (uVar29 * uVar19 & 0xffffffff) + (uVar1 << 0x20);
 uVar7 = uVar15 + uVar26;
 uVar16 = uVar16 >> 0x20;
 uVar25 = lVar13 + (uVar1 >> 0x20);
 if (CARRY8(uVar21,uVar17) || CARRY8(uVar15,uVar26)) {
 uVar16 = uVar16 + 1;
 }
 uVar15 = uVar14 + uVar19;
 uVar21 = (ulong)CARRY8(uVar14,uVar19);
 uVar17 = uVar7 + uVar25;
 uVar19 = uVar17 + uVar21;
 if (CARRY8(uVar7,uVar25) || CARRY8(uVar17,uVar21)) {
 lVar24 = lVar24 + 1;
 }
 uVar10 = (ulong)((uVar29 * uVar11 & 0xffffffff) + (uVar10 << 0x20) != 0 ||
 (uVar15 & 0x7ffffffffffff) != 0);
 uVar15 = uVar15 >> 0x33;
 uVar17 = uVar10 | uVar15 | uVar19 * 0x2000;
 uVar19 = uVar19 >> 0x33;
 uVar21 = uVar19 | (lVar24 + uVar16) * 0x2000;
 if ((lVar24 + uVar16 >> 0x27 & 1) != 0) {
 uVar17 = uVar10 | uVar15 & 1 | uVar17 >> 1 | uVar19 << 0x3f;
 uVar21 = uVar21 >> 1;
 lVar20 = lVar23;
 }
LAB_0010255c:
 lVar13 = lVar20 + 0x3fff;
 uVar5 = (uint)uVar6;
 uVar10 = uVar22;
 if (lVar13 < 1) {
 uVar19 = 1 - lVar13;
 if ((long)uVar19 < 0x75) {
 iVar8 = (int)uVar19;
 if ((long)uVar19 < 0x40) {
 uVar11 = (ulong)(uVar17 << ((ulong)(0x40 - iVar8) & 0x3f) != 0);
 uVar17 = uVar21 << ((ulong)(0x40 - iVar8) & 0x3f) | uVar17 >> (uVar19 & 0x3f);
 uVar15 = uVar21 >> (uVar19 & 0x3f);
 uVar19 = uVar17 | uVar11;
 if ((uVar17 & 7) != 0 || uVar11 != 0) goto LAB_00102744;
 if ((uVar15 >> 0x33 & 1) == 0) goto LAB_0010288c;
LAB_001028f8:
 uVar6 = (ulong)(uVar5 | 0x18);
 uVar17 = 1;
 uVar15 = 0;
 uVar11 = 0;
 }
 else {
 uVar11 = uVar17 | uVar21 << ((ulong)(0x80 - iVar8) & 0x3f);
 if (uVar19 == 0x40) {
 uVar11 = uVar17;
 }
 uVar21 = uVar21 >> ((ulong)(iVar8 - 0x40) & 0x3f);
 uVar19 = uVar11 != 0 | uVar21;
 uVar15 = 0;
 if ((ulong)(uVar11 != 0) == 0 && (uVar21 & 7) == 0) {
LAB_0010288c:
 uVar17 = 0;
 uVar4 = 0;
 uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
 uVar15 = uVar15 >> 3 & 0xffffffffffff;
 if (((uint)uVar18 >> 0xb & 1) == 0) goto LAB_0010230c;
 uVar6 = (ulong)(uVar5 | 8);
 }
 else {
 uVar15 = 0;
LAB_00102744:
 uVar18 = uVar18 & 0xc00000;
 if (uVar18 == 0x400000) {
 if (uVar22 == 0) {
LAB_001028ec:
 bVar3 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar3) {
 uVar15 = uVar15 + 1;
 }
 }
 }
 else if (uVar18 == 0x800000) {
 if (uVar22 != 0) goto LAB_001028ec;
 }
 else if (((uVar18 == 0) && ((uVar19 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
 uVar15 = uVar15 + 1;
 }
 if ((uVar15 >> 0x33 & 1) != 0) goto LAB_001028f8;
 uVar6 = (ulong)(uVar5 | 0x18);
 uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
 uVar17 = 0;
 uVar15 = uVar15 >> 3 & 0xffffffffffff;
 }
 }
 }
 else {
 uVar11 = 0;
 if (uVar17 != 0 || uVar21 != 0) {
 uVar5 = uVar5 | 0x10;
 uVar11 = 1 - uVar22;
 if (((uVar18 & 0xc00000) != 0x400000) &&
 (uVar11 = uVar22, (uVar18 & 0xc00000) != 0x800000)) {
 uVar11 = 0;
 }
 }
 uVar6 = (ulong)(uVar5 | 8);
 uVar17 = 0;
 uVar15 = 0;
 }
 }
 else {
 if ((uVar17 & 7) != 0) {
 uVar19 = uVar18 & 0xc00000;
 uVar6 = (ulong)(uVar5 | 0x10);
 if (uVar19 == 0x400000) {
 if (uVar22 == 0) {
LAB_001028dc:
 bVar3 = 0xfffffffffffffff7 < uVar17;
 uVar17 = uVar17 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar19 == 0x800000) {
 if (uVar22 != 0) goto LAB_001028dc;
 }
 else if (((uVar19 == 0) && ((uVar17 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar17, uVar17 = uVar17 + 4, bVar3)) {
 uVar21 = uVar21 + 1;
 }
 }
 if ((uVar21 >> 0x34 & 1) != 0) {
 uVar21 = uVar21 & 0xffefffffffffffff;
 lVar13 = lVar20 + 0x4000;
 }
 if (lVar13 < 0x7fff) {
 uVar15 = uVar21 >> 3 & 0xffffffffffff;
 uVar4 = (uint)lVar13 & 0x7fff;
 uVar11 = uVar17 >> 3 | uVar21 << 0x3d;
 goto LAB_0010230c;
 }
 uVar18 = uVar18 & 0xc00000;
 uVar4 = 0x7ffe;
 if (uVar18 == 0x400000) {
 bVar3 = uVar22 != 0;
 if (!bVar3) {
 uVar4 = 0x7fff;
 }
 uVar17 = (ulong)uVar4;
 uVar15 = 0xffffffffffff;
 if (!bVar3) {
 uVar15 = 0;
 }
 uVar11 = -(ulong)bVar3;
 }
 else if (uVar18 == 0x800000) {
 bVar3 = uVar22 == 0;
 if (!bVar3) {
 uVar4 = 0x7fff;
 }
 uVar17 = (ulong)uVar4;
 uVar15 = 0xffffffffffff;
 if (!bVar3) {
 uVar15 = 0;
 }
 uVar11 = -(ulong)bVar3;
 }
 else {
 uVar17 = 0x7fff;
 uVar15 = 0;
 uVar11 = 0;
 if (uVar18 != 0) {
 uVar17 = 0x7ffe;
 uVar15 = 0xffffffffffff;
 uVar11 = 0xffffffffffffffff;
 }
 }
 uVar6 = (ulong)((uint)uVar6 | 0x14);
 }
 uVar15 = uVar15 | uVar17 << 0x30 | uVar22 << 0x3f;
 goto LAB_001027c4;
 }
LAB_00102290:
 if (uVar7 != 0xb) {
LAB_00102298:
 uVar25 = uVar11;
 uVar21 = uVar19;
 uVar26 = uVar10;
 lVar9 = lVar24;
 goto LAB_0010239c;
 }
LAB_001023b8:
 uVar22 = uVar14;
 if (lVar12 == 3) {
 uVar15 = uVar21 & 0xffffffffffff | 0x800000000000;
 uVar4 = 0x7fff;
 uVar11 = uVar17;
 uVar10 = uVar14;
 }
 else {
LAB_001022f8:
 lVar20 = lVar23;
 if (lVar12 != 1) goto LAB_0010255c;
 uVar4 = 0;
 uVar15 = 0;
 uVar11 = 0;
 uVar10 = uVar22;
 }
 }
 else {
 if (iVar8 != 0x7fff) {
 lVar20 = (uVar22 - 0x3fff) + lVar13;
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 uVar21 = uVar17 >> 0x3d | uVar15 << 3 | 0x8000000000000;
 uVar17 = uVar17 << 3;
 lVar23 = lVar20 + 1;
 lVar12 = 0;
 if (10 < uVar7) goto LAB_00102290;
 goto LAB_001022dc;
 }
 lVar20 = lVar13 + 0x7fff;
 if (uVar17 != 0 || uVar15 != 0) {
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 uVar7 = uVar7 | 3;
 lVar23 = lVar13 + 0x8000;
 uVar4 = (uint)uVar6;
 if ((uVar21 & 0x800000000000) == 0) {
 uVar4 = 1;
 }
 uVar6 = (ulong)uVar4;
 lVar12 = 3;
 if (10 < uVar7) {
 lVar9 = 3;
 goto LAB_00102934;
 }
 goto LAB_00102358;
 }
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 uVar7 = uVar7 | 2;
 lVar23 = lVar13 + 0x8000;
 uVar17 = 0;
 if (uVar7 < 0xb) {
 uVar21 = 0;
 lVar12 = 2;
 goto LAB_001022dc;
 }
 lVar9 = 2;
 uVar15 = 0;
LAB_00102934:
 lVar23 = lVar13 + 0x8000;
 if (uVar7 != 0xf) {
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 if (uVar7 != 0xb) goto LAB_00102298;
 goto LAB_0010239c;
 }
 if (((uVar19 >> 0x2f & 1) == 0) || (uVar15 >> 0x2f != 0)) {
 uVar15 = uVar19 & 0xffffffffffff | 0x800000000000;
 uVar4 = 0x7fff;
 }
 else {
 uVar15 = uVar15 | 0x800000000000;
 uVar4 = 0x7fff;
 uVar11 = uVar17;
 uVar10 = uVar14;
 }
 }
LAB_0010230c:
 uVar15 = uVar15 | (ulong)(uVar4 | (int)uVar10 << 0xf) << 0x30;
 if ((int)uVar6 == 0) {
 *(ulong *)&auVar31.data[8] = uVar15;
 *(ulong *)auVar31.data = uVar11;
 return auVar31;
 }
LAB_001027c4:
 __sfp_handle_exceptions(uVar6);
 *(ulong *)&auVar2.data[8] = uVar15;
 *(ulong *)auVar2.data = uVar11;
 return auVar2;
}



/* Function: __sfp_handle_exceptions @ 001029d0 */

ulong __sfp_handle_exceptions(ulong param_1)

{
 undefined8 uVar1;
 uint uVar2;
 
 uVar2 = (uint)param_1;
 if ((param_1 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 1 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 2 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 3 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 4 & 1) != 0) {
 param_1 = fpsr;
 }
 return param_1;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 66 */
