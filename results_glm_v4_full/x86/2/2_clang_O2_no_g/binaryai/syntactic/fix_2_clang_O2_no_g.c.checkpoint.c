// Decompiled by BinaryAI
// SHA256: cbd790bbf51295664ced9d3804f01566dbf9733db128ba968c1e1194eab2faa8

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>

typedef unsigned int uint;
typedef unsigned short ushort;
typedef long double longdouble;

#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (uint)(lo))
#define ROUND(x) ((x) >= 0 ? (int)((x) + 0.5) : (int)((x) - 0.5))


extern void __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern int printf(const char *__format, ...);
extern int puts(const char *__s);
extern void __x86_get_pc_thunk_di(void);
extern void __x86_get_pc_thunk_dx(void);

// Forward declaration of main
unsigned int main(void);

// Data references
#define DAT_000135bf "=== Testing Data Types L1 ===\n"
#define DAT_000135e0 "=== Testing Array Types ===\n"
#define DAT_000135fb "=== Testing Pointer Types ===\n"
#define DAT_00013616 "=== Testing Composite Types ===\n"
#define DAT_00013270 ""
#define unkuint10 uint64_t

longdouble SUB104(longdouble param_1, int param_2) { return param_1; }



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
void __libc_start_main_wrapper(void (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end)
{
 __libc_start_main(main, argc, argv, init, fini, rtld_fini, stack_end);
 return;
}

// Function: <EXTERNAL>::printf @ 0x11050
int printf_wrapper(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x11060
int puts_wrapper(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: FUN_00011070 @ 0x11070
void FUN_00011070(unsigned int param_1)
{
 int unaff_EBX;
 unaff_EBX = param_1;
 (*(void (**)(void))(unaff_EBX + -0x14))();
 return;
}



// Function: __i686.get_pc_thunk.bx @ 0x110ac
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x110b0
void __x86_get_pc_thunk_bx(void)
{
 return;
}





// Function: __x86.get_pc_thunk.di @ 0x111ed
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x111e9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: process_char @ 0x11200
uint process_char(uint param_1)
{
 uint uVar1;
 uVar1 = (uint)(uint8_t)((char)param_1 + 0x20);
 if (0x19 < (uint8_t)((char)param_1 + 0xbfU)) {
 uVar1 = param_1;
 }
 return uVar1;
}

// Function: process_short @ 0x11220
short process_short(short param_1,short param_2)
{
 return param_2 + param_1;
}

// Function: process_int @ 0x11230
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: process_long @ 0x11240
int process_long(int param_1)
{
 return param_1 * 2;
}

// Function: process_ll @ 0x11250
unsigned long long process_ll(uint param_1,int param_2)
{
 return CONCAT44((int)((unsigned long long)param_1 * (unsigned long long)param_1 >> 0x20) + param_2 * param_1 * 2,
 (int)((unsigned long long)param_1 * (unsigned long long)param_1));
}

// Function: FUN_00011275 @ 0x11275
longdouble FUN_00011275(unsigned int param_1,float param_2)
{
 int unaff_retaddr;
 return (longdouble)param_2 * (longdouble)*(float *)(unaff_retaddr + 0x1d93) +
 (longdouble)*(float *)(unaff_retaddr + 0x1d97);
}

// Function: FUN_00011295 @ 0x11295
longdouble FUN_00011295(unsigned int param_1,double param_2)
{
 int unaff_retaddr;
 return (longdouble)param_2 * (longdouble)*(float *)(unaff_retaddr + 0x1d77) +
 (longdouble)*(double *)(unaff_retaddr + 0x1d83);
}

// Function: process_ld @ 0x112b0
longdouble process_ld(longdouble param_1)
{
 return (longdouble)1 + param_1 * param_1;
}

// Function: process_bool @ 0x112c0
bool process_bool(uint param_1)
{
 return (param_1 & 1) == 0 && 0 < (int)param_1;
}

// Function: const_param @ 0x112e0
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x112f0
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x11300
void test_data_types_l1(void)
{
 longdouble lVar1;
 puts(&DAT_000135bf);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000,0);
 printf("DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
 printf("DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
 lVar1 = (longdouble)10.0;
 printf("DT-L1-08 (process_ld): %.2Lf\n",SUB104(lVar1,0),(int)((unkuint10)lVar1 >> 0x20),
 (short)((unkuint10)lVar1 >> 0x40));
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x11430
int array_1d_stack(int param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 if (param_2 - 1 < 7) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4) + *(int *)(param_1 + 4 + uVar2 * 4) +
 *(int *)(param_1 + 8 + uVar2 * 4) + *(int *)(param_1 + 0xc + uVar2 * 4) +
 *(int *)(param_1 + 0x10 + uVar2 * 4) + *(int *)(param_1 + 0x14 + uVar2 * 4) +
 *(int *)(param_1 + 0x18 + uVar2 * 4) + *(int *)(param_1 + 0x1c + uVar2 * 4);
 uVar2 = uVar2 + 8;
 } while ((param_2 & 0xfffffff8) != uVar2);
 }
 if ((param_2 & 7) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4 + uVar3 * 4);
 uVar3 = uVar3 + 1;
 } while ((param_2 & 7) != uVar3);
 }
 }
 return iVar1;
}

// Function: array_string @ 0x114a0
void array_string(int param_1)
{
 char *pcVar1;
 int iVar2;
 iVar2 = -1;
 do {
 pcVar1 = (char *)(param_1 + 1 + iVar2);
 iVar2 = iVar2 + 1;
 } while (*pcVar1 != '\0');
 return;
}

// Function: array_2d_stack @ 0x114c0
int array_2d_stack(int *param_1)
{
 return param_1[0xb] + *param_1 + param_1[0x16] + param_1[0x21] + param_1[0x2c] + param_1[0x37] +
 param_1[0x42] + param_1[0x4d] + param_1[0x58] + param_1[99];
}

// Function: array_3d @ 0x11500
int array_3d(int param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2) + *(int *)(param_1 + 4 + iVar2) +
 *(int *)(param_1 + 8 + iVar2) + *(int *)(param_1 + 0xc + iVar2) +
 *(int *)(param_1 + 0x10 + iVar2) + *(int *)(param_1 + 0x14 + iVar2) +
 *(int *)(param_1 + 0x18 + iVar2) + *(int *)(param_1 + 0x1c + iVar2) +
 *(int *)(param_1 + 0x20 + iVar2) + *(int *)(param_1 + 0x24 + iVar2) +
 *(int *)(param_1 + 0x28 + iVar2) + *(int *)(param_1 + 0x2c + iVar2) +
 *(int *)(param_1 + 0x30 + iVar2) + *(int *)(param_1 + 0x34 + iVar2) +
 *(int *)(param_1 + 0x38 + iVar2) + *(int *)(param_1 + 0x3c + iVar2) +
 *(int *)(param_1 + 0x40 + iVar2) + *(int *)(param_1 + 0x44 + iVar2) +
 *(int *)(param_1 + 0x48 + iVar2) + *(int *)(param_1 + 0x4c + iVar2) +
 *(int *)(param_1 + 0x50 + iVar2) + *(int *)(param_1 + 0x54 + iVar2) +
 *(int *)(param_1 + 0x58 + iVar2) + *(int *)(param_1 + 0x5c + iVar2) +
 *(int *)(param_1 + 0x60 + iVar2);
 iVar2 = iVar2 + 100;
 } while (iVar2 != 500);
 return iVar1;
}

// Function: array_vla @ 0x11580
int array_vla(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 if ((int)param_1 < 1) {
 iVar1 = 0;
 }
 else {
 if (param_1 - 1 < 7) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_2 + uVar2 * 4) + *(int *)(param_2 + 4 + uVar2 * 4) +
 *(int *)(param_2 + 8 + uVar2 * 4) + *(int *)(param_2 + 0xc + uVar2 * 4) +
 *(int *)(param_2 + 0x10 + uVar2 * 4) + *(int *)(param_2 + 0x14 + uVar2 * 4) +
 *(int *)(param_2 + 0x18 + uVar2 * 4) + *(int *)(param_2 + 0x1c + uVar2 * 4);
 uVar2 = uVar2 + 8;
 } while ((param_1 & 0xfffffff8) != uVar2);
 }
 if ((param_1 & 7) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_2 + uVar2 * 4 + uVar3 * 4);
 uVar3 = uVar3 + 1;
 } while ((param_1 & 7) != uVar3);
 }
 }
 return iVar1;
}

// Function: array_pointer @ 0x115f0
int array_pointer(int *param_1,uint param_2)
{
 int iVar1;
 int *piVar2;
 uint uVar3;
 int iVar4;
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 if (param_2 - 1 < 3) {
 uVar3 = 0;
 iVar1 = 0;
 }
 else {
 uVar3 = 0;
 iVar1 = 0;
 piVar2 = param_1;
 do {
 iVar1 = iVar1 + *piVar2 + piVar2[10] + piVar2[0x14] + piVar2[0x1e];
 uVar3 = uVar3 + 4;
 piVar2 = piVar2 + 0x28;
 } while ((param_2 & 0xfffffffc) != uVar3);
 }
 if ((param_2 & 3) != 0) {
 iVar4 = 0;
 do {
 iVar1 = iVar1 + *(int *)((int)param_1 + iVar4 + uVar3 * 0x28);
 iVar4 = iVar4 + 0x28;
 } while ((param_2 & 3) * 0x28 != iVar4);
 }
 }
 return iVar1;
}

// Function: pointer_array @ 0x11660
int pointer_array(int param_1,uint param_2)
{
 int *piVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 if ((int)param_2 < 1) {
 iVar2 = 0;
 }
 else {
 uVar3 = 10;
 if (param_2 < 10) {
 uVar3 = param_2;
 }
 if (uVar3 == 1) {
 uVar4 = 0;
 iVar2 = 0;
 }
 else {
 uVar4 = 0;
 iVar2 = 0;
 do {
 piVar1 = *(int **)(param_1 + uVar4 * 4);
 if (piVar1 != (int *)0x0) {
 iVar2 = iVar2 + *piVar1;
 }
 piVar1 = *(int **)(param_1 + 4 + uVar4 * 4);
 if (piVar1 != (int *)0x0) {
 iVar2 = iVar2 + *piVar1;
 }
 uVar4 = uVar4 + 2;
 } while ((uVar3 & 0xe) != uVar4);
 }
 if (((uVar3 & 1) != 0) && (piVar1 = *(int **)(param_1 + uVar4 * 4), piVar1 != (int *)0x0)) {
 iVar2 = iVar2 + *piVar1;
 }
 }
 return iVar2;
}

// Function: array_complex_index @ 0x116d0
unsigned int array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if ((((-1 < param_4) && (param_5 < param_3)) && (param_4 < param_2)) && (-1 < param_5)) {
 uVar1 = *(unsigned int *)(param_1 + (param_5 * param_2 + param_4) * 4);
 }
 return uVar1;
}

// Function: array_oob @ 0x11710
int array_oob(int param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 if ((int)param_2 < 0) {
 iVar1 = 0;
 }
 else {
 uVar2 = param_2 + 1 & 7;
 if (param_2 < 7) {
 uVar3 = 0;
 iVar1 = 0;
 }
 else {
 uVar3 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar3 * 4) + *(int *)(param_1 + 4 + uVar3 * 4) +
 *(int *)(param_1 + 8 + uVar3 * 4) + *(int *)(param_1 + 0xc + uVar3 * 4) +
 *(int *)(param_1 + 0x10 + uVar3 * 4) + *(int *)(param_1 + 0x14 + uVar3 * 4) +
 *(int *)(param_1 + 0x18 + uVar3 * 4) + *(int *)(param_1 + 0x1c + uVar3 * 4);
 uVar3 = uVar3 + 8;
 } while ((param_2 + 1 & 0xfffffff8) != uVar3);
 }
 if (uVar2 != 0) {
 uVar4 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar3 * 4 + uVar4 * 4);
 uVar4 = uVar4 + 1;
 } while (uVar2 != uVar4);
 }
 }
 return iVar1;
}

// Function: test_array_types @ 0x11780
void test_array_types(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_38c [125];
 int local_198 [22];
 int local_140;
 int local_114;
 int local_e8;
 int local_bc;
 int local_90;
 int local_64;
 int local_38;
 int local_c;
 puts(&DAT_000135e0);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 iVar1 = 0;
 do {
 *(unsigned int *)((int)local_198 + iVar1) = 0;
 *(uint *)((int)local_198 + iVar1 + 4) = (uint)(iVar1 == 0x28);
 *(uint *)((int)local_198 + iVar1 + 8) = (uint)(iVar1 == 0x50) * 2;
 *(uint *)((int)local_198 + iVar1 + 0xc) = (uint)(iVar1 == 0x78) * 3;
 *(uint *)((int)local_198 + iVar1 + 0x10) = (uint)(iVar1 == 0xa0) << 2;
 *(uint *)((int)local_198 + iVar1 + 0x14) = (uint)(iVar1 == 200) * 5;
 uVar2 = 0;
 if (iVar1 == 0xf0) {
 uVar2 = 6;
 }
 *(unsigned int *)((int)local_198 + iVar1 + 0x18) = uVar2;
 uVar2 = 0;
 if (iVar1 == 0x118) {
 uVar2 = 7;
 }
 *(unsigned int *)((int)local_198 + iVar1 + 0x1c) = uVar2;
 *(uint *)((int)local_198 + iVar1 + 0x20) = (uint)(iVar1 == 0x140) << 3;
 *(uint *)((int)local_198 + iVar1 + 0x24) = (uint)(iVar1 == 0x168) * 9;
 iVar1 = iVar1 + 0x28;
 } while (iVar1 != 400);
 printf("ARR-L1-03 (array_2d_stack): %d\n",
 local_198[11] + local_198[0] + local_140 + local_114 + local_e8 + local_bc + local_90 +
 local_64 + local_38 + local_c);
 iVar1 = 0;
 do {
 *(unsigned int *)((int)local_38c + iVar1) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 4) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 8) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0xc) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x10) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x14) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x18) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x1c) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x20) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x24) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x28) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x2c) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x30) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x34) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x38) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x3c) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x40) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x44) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x48) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x4c) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x50) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x54) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x58) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x5c) = 1;
 *(unsigned int *)((int)local_38c + iVar1 + 0x60) = 1;
 iVar1 = iVar1 + 100;
 } while (iVar1 != 500);
 uVar2 = array_3d(local_38c);
 printf("ARR-L1-04 (array_3d): %d\n",uVar2);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 printf("ARR-L2-02 (array_pointer): %d\n",100);
 printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
 printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
 return;
}

// Function: ptr_single @ 0x11a60
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x11a70
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x11a80
int ptr_triple(unsigned int *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x11a90
int ptr_increment(int *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 if (0 < (int)param_2) {
 if (param_2 - 1 < 7) {
 iVar1 = 0;
 }
 else {
 uVar2 = param_2 & 0xfffffff8;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1 + param_1[1] + param_1[2] + param_1[3] + param_1[4] + param_1[5] +
 param_1[6] + param_1[7];
 param_1 = param_1 + 8;
 uVar2 = uVar2 - 8;
 } while (uVar2 != 0);
 }
 if ((param_2 & 7) != 0) {
 uVar2 = 0;
 do {
 iVar1 = iVar1 + param_1[uVar2];
 uVar2 = uVar2 + 1;
 } while ((param_2 & 7) != uVar2);
 }
 return iVar1;
 }
 return 0;
}

// Function: ptr_offset @ 0x11b00
unsigned int ptr_offset(int param_1,int param_2)
{
 return *(unsigned int *)(param_1 + param_2 * 4);
}

// Function: ptr_diff @ 0x11b10
int ptr_diff(int param_1,int param_2)
{
 return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x11b20
int ptr_void(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 1) {
 iVar1 = (int)*(char *)param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 0) {
 return *param_1;
 }
 }
 return iVar1;
}

// Function: ptr_const @ 0x11b40
int ptr_const(int *param_1)
{
 return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x11b50
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x11b60
void ptr_func_simple(void *param_1,unsigned int param_2)
{
 ((void (*)(unsigned int))param_1)(param_2);
 return;
}

// Function: ptr_func_complex @ 0x11b80
void ptr_func_complex(void *param_1,unsigned int param_2)
{
 char *local_c;
 unsigned int local_8;
 local_c = &DAT_00013270;
 local_8 = 0;
 ((void (*)(unsigned int, char **))param_1)(param_2,&local_c);
 return;
}

// Function: ptr_cast @ 0x11bc0
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x11bd0
unsigned int opaque_handle_create(unsigned int param_1)
{
 return param_1;
}

// Function: opaque_handle_op @ 0x11be0
int opaque_handle_op(int param_1)
{
 return param_1 * 2;
}

// Function: test_pointer_types @ 0x11bf0
void test_pointer_types(void)
{
 puts(&DAT_000135fb);
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
 printf("PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 return;
}

// Function: struct_simple @ 0x11d50
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x11d60
int struct_array(int param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 int *piVar3;
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 if (param_2 == 1) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 piVar3 = (int *)(param_1 + 0x14);
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + piVar3[-5] + piVar3[-4] + piVar3[-3] + piVar3[-2] + piVar3[-1] + *piVar3;
 uVar2 = uVar2 + 2;
 piVar3 = piVar3 + 6;
 } while ((param_2 & 0xfffffffe) != uVar2);
 }
 if ((param_2 & 1) != 0) {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 0xc) + *(int *)(param_1 + 4 + uVar2 * 0xc) +
 *(int *)(param_1 + 8 + uVar2 * 0xc);
 }
 }
 return iVar1;
}

// Function: struct_nested @ 0x11dd0
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x11de0
int struct_deep(int param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x11df0
int struct_with_ptr(int *param_1)
{
 if ((int *)param_1[1] != (int *)0x0) {
 return *(int *)param_1[1] + *param_1;
 }
 return *param_1;
}

// Function: struct_bitfields @ 0x11e10
short struct_bitfields(ushort *param_1)
{
 ushort uVar1;
 uVar1 = *param_1;
 return (uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}

// Function: union_type @ 0x11e40
float union_type(float *param_1,int param_2)
{
 if (param_2 == 1) {
 return (float)(int)ROUND(*param_1);
 }
 if (param_2 == 0) {
 return *param_1;
 }
 return (float)(int)*(char *)param_1;
}

// Function: union_array @ 0x11e90
int union_array(int param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 if (param_2 - 1 < 7) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4) + *(int *)(param_1 + 4 + uVar2 * 4) +
 *(int *)(param_1 + 8 + uVar2 * 4) + *(int *)(param_1 + 0xc + uVar2 * 4) +
 *(int *)(param_1 + 0x10 + uVar2 * 4) + *(int *)(param_1 + 0x14 + uVar2 * 4) +
 *(int *)(param_1 + 0x18 + uVar2 * 4) + *(int *)(param_1 + 0x1c + uVar2 * 4);
 uVar2 = uVar2 + 8;
 } while ((param_2 & 0xfffffff8) != uVar2);
 }
 if ((param_2 & 7) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4 + uVar3 * 4);
 uVar3 = uVar3 + 1;
 } while ((param_2 & 7) != uVar3);
 }
 }
 return iVar1;
}

// Function: enum_type @ 0x11f00
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: FUN_00011f15 @ 0x11f15
unsigned int FUN_00011f15(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 int unaff_retaddr;
 uVar1 = 0xffffff9d;
 if (param_2 < 4) {
 uVar1 = *(unsigned int *)(unaff_retaddr + 0x172b + param_2 * 4);
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x11f40
void struct_func_ptr(unsigned int *param_1)
{
 ((void (*)(unsigned int))param_1[1])(*param_1);
 return;
}

// Function: linked_list @ 0x11f70
int linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = (int *)param_1[1];
 } while (param_1 != (int *)0x0);
 }
 return iVar1;
}

// Function: doubly_linked_list @ 0x11f90
int doubly_linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = (int *)param_1[1];
 } while (param_1 != (int *)0x0);
 }
 return iVar1;
}

// Function: binary_tree_sum @ 0x11fb0
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar3 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar1 = *param_1;
 iVar2 = binary_tree_sum(param_1[1]);
 param_1 = (int *)param_1[2];
 iVar3 = iVar3 + iVar1 + iVar2;
 } while (param_1 != (int *)0x0);
 }
 return iVar3;
}

// Function: binary_tree @ 0x11ff0
void binary_tree(unsigned int param_1)
{
 binary_tree_sum(param_1);
 return;
}

// Function: graph_traverse @ 0x12020
int graph_traverse(int param_1)
{
 uint uVar1;
 int *piVar2;
 int iVar3;
 uint uVar4;
 uVar1 = *(uint *)(param_1 + 0x28);
 if ((int)uVar1 < 1) {
 iVar3 = 0;
 }
 else {
 if (uVar1 == 1) {
 uVar4 = 0;
 iVar3 = 0;
 }
 else {
 uVar4 = 0;
 iVar3 = 0;
 do {
 for (piVar2 = *(int **)(param_1 + uVar4 * 4); piVar2 != (int *)0x0;
 piVar2 = (int *)piVar2[1]) {
 iVar3 = iVar3 + *piVar2;
 }
 for (piVar2 = *(int **)(param_1 + (uVar4 * 4 | 4)); piVar2 != (int *)0x0;
 piVar2 = (int *)piVar2[1]) {
 iVar3 = iVar3 + *piVar2;
 }
 uVar4 = uVar4 + 2;
 } while (uVar4 != (uVar1 & 0xfffffffe));
 }
 if ((uVar1 & 1) != 0) {
 for (piVar2 = *(int **)(param_1 + uVar4 * 4); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1])
 {
 iVar3 = iVar3 + *piVar2;
 }
 }
 }
 return iVar3;
}

// Function: test_composite_types @ 0x120b0
void test_composite_types(void)
{
 int *piVar1;
 unsigned int uVar2;
 int iVar3;
 bool bVar4;
 int local_44;
 unsigned int *local_40;
 unsigned int local_3c;
 unsigned int *local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 int local_1c;
 unsigned int *local_18;
 unsigned int local_14;
 unsigned int local_10;
 unsigned int local_c;
 int *local_8;
 puts(&DAT_00013616);
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
 piVar1 = &local_44;
 local_44 = 10;
 local_40 = &local_3c;
 local_3c = 0x14;
 local_38 = &local_34;
 local_34 = 0x1e;
 local_30 = 0;
 iVar3 = 0;
 do {
 iVar3 = iVar3 + *piVar1;
 piVar1 = (int *)piVar1[1];
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",iVar3);
 piVar1 = &local_1c;
 local_1c = 10;
 local_14 = 0;
 local_10 = 0x14;
 local_c = 0;
 local_8 = piVar1;
 local_18 = &local_10;
 iVar3 = 0;
 do {
 iVar3 = iVar3 + *piVar1;
 piVar1 = (int *)piVar1[1];
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
 local_24 = 0;
 local_28 = 0;
 local_2c = 100;
 uVar2 = binary_tree_sum(&local_2c);
 printf("CMP-L2-14 (binary_tree): %d\n",uVar2);
 iVar3 = 1;
 piVar1 = (int *)0x0;
 bVar4 = false;
 while (bVar4) {
 iVar3 = iVar3 + *piVar1;
 piVar1 = (int *)piVar1[1];
 bVar4 = piVar1 != (int *)0x0;
 }
 printf("CMP-L2-15 (graph_traverse): %d\n",iVar3);
 return;
}

// Function: main @ 0x122f0
unsigned int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}





