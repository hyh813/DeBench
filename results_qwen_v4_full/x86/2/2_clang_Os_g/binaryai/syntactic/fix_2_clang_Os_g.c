// Decompiled by BinaryAI
// SHA256: 22d0a35a9d39f5856b2fccd4f9ae803f9a3eac254f34d0a03f22b944a5961798

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// Type definitions
typedef unsigned char byte;
typedef unsigned short ushort;
typedef unsigned long long unkuint10;
typedef unsigned long long ulonglong;

// Macro definitions
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned long long)(lo))
#define SUB104(val, offset) ((int)(val))
#define ROUND(x) ((int)((x) + 0.5))

// Global data declarations
char DAT_000125bf[] = "Data Types L1";
char DAT_000125e0[] = "Array Types";
char DAT_000125fb[] = "Pointer Types";
char DAT_00012616[] = "Composite Types";
unsigned int DAT_00012634 = 0x12345678;
char DAT_00012270[] = "test_string";

// External function declarations
extern int __libc_start_main(void *main, int argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end);
extern int printf(const char *format, ...);
extern int puts(const char *s);

// Stub implementations for missing functions
void __gmon_start__(void) { return; }
void frame_dummy(void) { return; }

// Forward declarations for internal functions
void FUN_00011070(unsigned int param_1);
int binary_tree_sum(int *param_1);
int main(void);
void __do_global_ctors_aux(void);
void __do_global_dtors_aux(void);
int __x86_get_pc_thunk_di(void);

// Function: _init @ 0x11000
static int _init(void *ctx)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
 return 0;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
void __libc_start_main_external(void)
{
 return;
}



// Function: FUN_00011070 @ 0x11070
void FUN_00011070(unsigned int param_1)
{
 int unaff_EBX = 0;
 void (*func_ptr)(void) = (void (*)(void))(unaff_EBX + -0x14);
 func_ptr();
 return;
}

// Function: _start @ 0x11080
static void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 int stack_var = 4;
 __libc_start_main(main,param_2,&stack_var,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x110ac
int __i686_get_pc_thunk_bx(void)
{
 return 0;
}

// Function: __x86.get_pc_thunk.bx @ 0x110b0
int __x86_get_pc_thunk_bx(void)
{
 return 0;
}

// Function: deregister_tm_clones @ 0x110c0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11100
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11150
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI = 0;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x3ec3) == '\0') {
 if (*(int *)(unaff_EDI + 0x3e8f) != 0) {
 FUN_00011070(*(unsigned int *)(unaff_EDI + 0x3ebf));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x3ec7);
 while (uVar1 < ((unaff_EDI + 0x3daf) - (unaff_EDI + 0x3dab) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x3ec7) = uVar1 + 1;
 ((void (*)(void))*(void **)(unaff_EDI + 0x3dab + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x3ec7);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x3ec3) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x111e9
int __x86_get_pc_thunk_dx(void)
{
 return 0;
}

// Function: __x86.get_pc_thunk.di @ 0x111ed
int __x86_get_pc_thunk_di(void)
{
 return 0;
}

// Function: process_char @ 0x111f4
uint process_char(uint param_1)
{
 uint uVar1;
 uVar1 = (uint)(byte)((char)param_1 + 0x20);
 if (0x19 < (byte)((char)param_1 + 0xbfU)) {
 uVar1 = param_1;
 }
 return uVar1;
}

// Function: process_short @ 0x1120a
short process_short(short param_1,short param_2)
{
 return param_2 + param_1;
}

// Function: process_int @ 0x11215
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: process_long @ 0x1121d
int process_long(int param_1)
{
 return param_1 * 2;
}

// Function: process_ll @ 0x11224
unsigned long long process_ll(uint param_1,int param_2)
{
 return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_2 * param_1 * 2,
 (int)((ulonglong)param_1 * (ulonglong)param_1));
}

// Function: FUN_0001123f @ 0x1123f
long double FUN_0001123f(unsigned int param_1,float param_2)
{
 return (long double)param_2;
}

// Function: FUN_0001125c @ 0x1125c
long double FUN_0001125c(unsigned int param_1,double param_2)
{
 return (long double)param_2;
}

// Function: process_ld @ 0x11274
long double process_ld(long double param_1)
{
 return (long double)1 + param_1 * param_1;
}

// Function: process_bool @ 0x1127f
bool process_bool(uint param_1)
{
 return (param_1 & 1) == 0 && 0 < (int)param_1;
}

// Function: const_param @ 0x11290
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x1129a
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x112a3
void test_data_types_l1(void)
{
 long double lVar1;
 puts(&DAT_000125bf);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200L);
 printf("DT-L1-05 (process_ll): %llu\n",10000ULL);
 printf("DT-L1-06 (process_float): %.2f\n",3.0);
 printf("DT-L1-07 (process_double): %.2f\n",4.0);
 lVar1 = (long double)10.0;
 printf("DT-L1-08 (process_ld): %.2Lf\n",lVar1);
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x113d6
int array_1d_stack(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 }
 return iVar1;
}

// Function: array_string @ 0x113f5
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

// Function: array_2d_stack @ 0x11407
int array_2d_stack(int param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2);
 iVar2 = iVar2 + 0x2c;
 } while (iVar2 != 0x1b8);
 return iVar1;
}

// Function: array_3d @ 0x1141e
int array_3d(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar5 = 0;
 iVar4 = param_1;
 do {
 iVar3 = 0;
 do {
 iVar1 = iVar1 + *(int *)(iVar4 + iVar3 * 4);
 iVar3 = iVar3 + 1;
 } while (iVar3 != 5);
 iVar5 = iVar5 + 1;
 iVar4 = iVar4 + 0x14;
 } while (iVar5 != 5);
 iVar2 = iVar2 + 1;
 param_1 = param_1 + 100;
 } while (iVar2 != 5);
 return iVar1;
}

// Function: array_vla @ 0x1144e
int array_vla(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_2 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 }
 return iVar1;
}

// Function: array_pointer @ 0x1146d
int array_pointer(int *param_1,int param_2)
{
 int iVar1;
 if (0 < param_2) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = param_1 + 10;
 param_2 = param_2 + -1;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: pointer_array @ 0x11487
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
 uVar4 = 0;
 iVar2 = 0;
 do {
 piVar1 = *(int **)(param_1 + uVar4 * 4);
 if (piVar1 != (int *)0x0) {
 iVar2 = iVar2 + *piVar1;
 }
 uVar4 = uVar4 + 1;
 } while (uVar3 != uVar4);
 }
 return iVar2;
}

// Function: array_complex_index @ 0x114b9
unsigned int array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if ((((-1 < param_4) && (param_5 < param_3)) && (param_4 < param_2)) && (-1 < param_5)) {
 uVar1 = *(unsigned int *)(param_1 + (param_5 * param_2 + param_4) * 4);
 }
 return uVar1;
}

// Function: array_oob @ 0x114e9
int array_oob(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (param_2 < 0) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_2 + 1 != iVar2);
 }
 return iVar1;
}

// Function: test_array_types @ 0x11509
void test_array_types(void)
{
 int iVar1;
 char *puVar2;
 int *piVar3;
 int iVar4;
 char *puVar5;
 int iVar6;
 int iVar7;
 int *local_4dc [4];
 unsigned int local_4cc;
 unsigned int local_4c8;
 unsigned int local_4c4;
 unsigned int local_4c0;
 unsigned int local_4bc;
 unsigned int local_4b8;
 int local_4b4;
 int local_4b0;
 int aiStack_4ac [20];
 int aiStack_45c [50];
 int local_394 [100];
 char local_204 [500];
 puts(&DAT_000125e0);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 iVar1 = 0;
 piVar3 = local_394;
 do {
 iVar4 = 0;
 do {
 iVar7 = 0;
 if (iVar1 == iVar4) {
 iVar7 = iVar1;
 }
 piVar3[iVar4] = iVar7;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 10);
 iVar1 = iVar1 + 1;
 piVar3 = piVar3 + 10;
 } while (iVar1 != 10);
 iVar4 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)((int)local_394 + iVar4);
 iVar4 = iVar4 + 0x2c;
 } while (iVar4 != 0x1b8);
 printf("ARR-L1-03 (array_2d_stack): %d\n",iVar1);
 iVar1 = 0;
 puVar2 = local_204;
 do {
 iVar4 = 0;
 puVar5 = puVar2;
 do {
 iVar7 = 0;
 do {
 *(unsigned int *)(puVar5 + iVar7 * 4) = 1;
 iVar7 = iVar7 + 1;
 } while (iVar7 != 5);
 iVar4 = iVar4 + 1;
 puVar5 = puVar5 + 0x14;
 } while (iVar4 != 5);
 iVar1 = iVar1 + 1;
 puVar2 = puVar2 + 100;
 } while (iVar1 != 5);
 iVar1 = 0;
 puVar2 = local_204;
 iVar4 = 0;
 do {
 iVar7 = 0;
 puVar5 = puVar2;
 do {
 iVar6 = 0;
 do {
 iVar4 = iVar4 + *(int *)(puVar5 + iVar6 * 4);
 iVar6 = iVar6 + 1;
 } while (iVar6 != 5);
 iVar7 = iVar7 + 1;
 puVar5 = puVar5 + 0x14;
 } while (iVar7 != 5);
 iVar1 = iVar1 + 1;
 puVar2 = puVar2 + 100;
 } while (iVar1 != 5);
 printf("ARR-L1-04 (array_3d): %d\n",iVar4);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 iVar1 = 0;
 do {
 aiStack_45c[iVar1] = iVar1;
 iVar1 = iVar1 + 10;
 } while (iVar1 != 0x32);
 iVar4 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)((int)aiStack_45c + iVar4);
 iVar4 = iVar4 + 0x28;
 } while (iVar4 != 200);
 printf("ARR-L2-02 (array_pointer): %d\n",iVar1);
 piVar3 = &local_4b0;
 local_4b0 = 10;
 local_4b4 = 0x14;
 local_4b8 = 0x1e;
 local_4dc[0] = &local_4b4;
 local_4dc[1] = &local_4b8;
 iVar1 = 0;
 local_4dc[2] = (int *)0x0;
 local_4dc[3] = (int *)0x0;
 local_4cc = 0;
 local_4c8 = 0;
 local_4c4 = 0;
 local_4c0 = 0;
 local_4bc = 0;
 iVar4 = 0;
 while( true ) {
 if (piVar3 != (int *)0x0) {
 iVar4 = iVar4 + *piVar3;
 }
 if (iVar1 == 2) break;
 piVar3 = local_4dc[iVar1];
 iVar1 = iVar1 + 1;
 }
 printf("ARR-L2-03 (pointer_array): %d\n",iVar4);
 iVar1 = 0;
 do {
 aiStack_4ac[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x14);
 printf("ARR-L2-04 (array_complex_index): %d\n",aiStack_4ac[17]);
 return;
}

// Function: ptr_single @ 0x11701
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x1170b
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x11717
int ptr_triple(unsigned int *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x11723
int ptr_increment(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 }
 return iVar1;
}

// Function: ptr_offset @ 0x11742
unsigned int ptr_offset(int param_1,int param_2)
{
 return *(unsigned int *)(param_1 + param_2 * 4);
}

// Function: ptr_diff @ 0x1174e
int ptr_diff(int param_1,int param_2)
{
 return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x1175a
int ptr_void(int *param_1,int param_2)
{
 if (param_2 == 1) {
 return (int)*(char *)param_1;
 }
 if (param_2 == 0) {
 return *param_1;
 }
 return -1;
}

// Function: ptr_const @ 0x11776
int ptr_const(int *param_1)
{
 return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x1177f
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x1178b
void ptr_func_simple(void *param_1,unsigned int param_2)
{
 ((void (*)(unsigned int))param_1)(param_2);
 return;
}

// Function: ptr_func_complex @ 0x117ab
void ptr_func_complex(void *param_1,unsigned int param_2)
{
 char *local_14;
 unsigned int local_10;
 local_14 = &DAT_00012270;
 local_10 = 0;
 ((void (*)(unsigned int,char **))param_1)(param_2,&local_14);
 return;
}

// Function: ptr_cast @ 0x117e4
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x117eb
unsigned int opaque_handle_create(unsigned int param_1)
{
 return param_1;
}

// Function: opaque_handle_op @ 0x117f0
int opaque_handle_op(int param_1)
{
 return param_1 * 2;
}

// Function: test_pointer_types @ 0x117f7
void test_pointer_types(void)
{
 int iVar1;
 int iVar2;
 unsigned int *puVar3;
 unsigned int *puVar4;
 byte bVar5;
 unsigned int local_20;
 int aiStack_1c [4];
 bVar5 = 0;
 puts(&DAT_000125fb);
 printf("PTR-L2-01 (ptr_single): %d\n",0xf);
 printf("PTR-L2-02 (ptr_double): %d\n",0xf);
 printf("PTR-L2-03 (ptr_triple): %d\n",6);
 puVar3 = &DAT_00012634;
 puVar4 = &local_20;
 for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar4 = *puVar3;
 puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
 puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
 }
 iVar1 = 1;
 iVar2 = 0;
 do {
 iVar1 = iVar1 + aiStack_1c[iVar2];
 iVar2 = iVar2 + 1;
 } while (iVar2 != 4);
 printf("PTR-L2-04 (ptr_increment): %d\n",iVar1);
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

// Function: struct_simple @ 0x11962
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x1196f
int struct_array(int param_1,int param_2)
{
 int iVar1;
 int *piVar2;
 if (0 < param_2) {
 piVar2 = (int *)(param_1 + 8);
 iVar1 = 0;
 do {
 iVar1 = iVar1 + piVar2[-2] + piVar2[-1] + *piVar2;
 piVar2 = piVar2 + 3;
 param_2 = param_2 + -1;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: struct_nested @ 0x11992
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x1199c
int struct_deep(int param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x119a7
int struct_with_ptr(int *param_1)
{
 int iVar1;
 if ((int *)param_1[1] == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = *(int *)param_1[1];
 }
 return iVar1 + *param_1;
}

// Function: struct_bitfields @ 0x119bd
short struct_bitfields(ushort *param_1)
{
 ushort uVar1;
 uVar1 = *param_1;
 return (uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}

// Function: union_type @ 0x119e4
float union_type(float *param_1,int param_2)
{
 float fVar1;
 if (param_2 == 1) {
 fVar1 = (float)(int)ROUND(*param_1);
 }
 else if (param_2 == 0) {
 fVar1 = *param_1;
 }
 else {
 fVar1 = (float)(int)*(char *)param_1;
 }
 return fVar1;
}

// Function: union_array @ 0x11a27
int union_array(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 }
 return iVar1;
}

// Function: enum_type @ 0x11a46
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: FUN_00011a55 @ 0x11a55
unsigned int FUN_00011a55(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 int unaff_retaddr = 0;
 uVar1 = 0xffffff9d;
 if (param_2 < 4) {
 uVar1 = *(unsigned int *)(unaff_retaddr + 0xbff + param_2 * 4);
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x11a72
void struct_func_ptr(unsigned int *param_1)
{
 ((void (*)(unsigned int))param_1[1])(*param_1);
 return;
}

// Function: linked_list @ 0x11a93
int linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}

// Function: doubly_linked_list @ 0x11aa5
int doubly_linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}

// Function: binary_tree_sum @ 0x11ab7
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar3 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[2]) {
 iVar1 = *param_1;
 iVar2 = binary_tree_sum(param_1[1]);
 iVar3 = iVar3 + iVar1 + iVar2;
 }
 return iVar3;
}

// Function: binary_tree @ 0x11af0
void binary_tree(unsigned int param_1)
{
 binary_tree_sum(param_1);
 return;
}

// Function: graph_traverse @ 0x11b11
int graph_traverse(int param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 if (*(int *)(param_1 + 0x28) < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 for (piVar3 = *(int **)(param_1 + iVar2 * 4); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1])
 {
 iVar1 = iVar1 + *piVar3;
 }
 iVar2 = iVar2 + 1;
 } while (iVar2 != *(int *)(param_1 + 0x28));
 }
 return iVar1;
}

// Function: test_composite_types @ 0x11b3c
void test_composite_types(void)
{
 int *piVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 int **ppiVar5;
 byte bVar6;
 int local_84;
 unsigned int local_80;
 int local_7c;
 unsigned int *local_78;
 unsigned int local_74;
 unsigned int *local_70;
 unsigned int local_6c;
 unsigned int local_68;
 unsigned int local_64;
 unsigned int local_60;
 unsigned int local_5c;
 int local_54;
 unsigned int *local_50;
 unsigned int local_4c;
 unsigned int local_48;
 unsigned int local_44;
 int *local_40;
 int *local_3c [12];
 bVar6 = 0;
 puts(&DAT_00012616);
 printf("CMP-L2-01 (struct_simple): %d\n",6);
 printf("CMP-L2-02 (struct_array): %d\n",9);
 printf("CMP-L2-03 (struct_nested): %d\n",0x69);
 printf("CMP-L2-04 (struct_deep): %d\n",0x102);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",0x1e);
 printf("CMP-L2-06 (struct_bitfields): %d\n",0x6a);
 printf("CMP-L2-07 (union_type): %u\n",0x12345678U);
 printf("CMP-L2-08 (union_array): %d\n",0x3c);
 printf("CMP-L2-09 (enum_type): %d\n",10);
 printf("CMP-L2-10 (enum_switch): %d\n",0x32);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",0x15);
 piVar1 = &local_7c;
 local_7c = 10;
 local_78 = &local_74;
 local_74 = 0x14;
 local_70 = &local_6c;
 local_6c = 0x1e;
 local_68 = 0;
 iVar3 = 0;
 do {
 iVar3 = iVar3 + *piVar1;
 piVar1 = (int *)piVar1[1];
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",iVar3);
 piVar1 = &local_54;
 local_54 = 10;
 iVar3 = 0;
 local_4c = 0;
 local_48 = 0x14;
 local_44 = 0;
 local_40 = piVar1;
 local_50 = &local_48;
 do {
 iVar3 = iVar3 + *piVar1;
 piVar1 = (int *)piVar1[1];
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
 local_5c = 0;
 local_60 = 0;
 local_64 = 100;
 uVar2 = binary_tree_sum(&local_64);
 printf("CMP-L2-14 (binary_tree): %d\n",uVar2);
 piVar1 = &local_84;
 local_80 = 0;
 local_84 = 1;
 iVar4 = 0;
 ppiVar5 = local_3c;
 for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
 *ppiVar5 = (int *)0x0;
 ppiVar5 = ppiVar5 + (uint)bVar6 * -2 + 1;
 }
 iVar3 = 0;
 while( true ) {
 for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
 iVar3 = iVar3 + *piVar1;
 }
 iVar4 = iVar4 + 1;
 if (iVar4 == 2) break;
 piVar1 = local_3c[iVar4];
 }
 printf("CMP-L2-15 (graph_traverse): %d\n",iVar3);
 return;
}

// Function: main @ 0x11d68
int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x11da0
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x11dec
static void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

