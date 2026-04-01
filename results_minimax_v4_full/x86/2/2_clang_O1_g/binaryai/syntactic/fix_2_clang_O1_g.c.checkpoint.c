// Decompiled by BinaryAI
// SHA256: d9299131aec86f84be94dc6e07bca0abaa3c6163998e657c3639f46c04c1eec4

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Define missing types
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char byte;
typedef unsigned long long ulonglong;
typedef long double longdouble;
typedef uint64_t unkuint10;
typedef int bool;
#define true 1
#define false 0

// Forward declaration of main
unsigned int main(void);

// Define missing macros
#define CONCAT44(a,b) (((uint)(a) << 32) | (uint)(b))
#define SUB104(x,y) (((longdouble)(x) - (longdouble)(y)))
#define ROUND(x) ((int)((x) + 0.5f))
#define DAT_000135bf "Data Types Level 1 Test"
#define DAT_000135e0 "Array Types Test"
#define DAT_000135fb "Pointer Types Test"
#define DAT_00013616 "Composite Types Test"
#define DAT_00013270 "test_string"

// External declarations
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern void __do_global_ctors_aux(void);
extern void __libc_start_main(void (*main)(void), void *argc, void *argv, void (*dtor)(void), void *rtld_fini, void *stack_end, ...);

// Function: _init @ 0x11000
// CRT stub - simplified to avoid linker errors
static void _init(void *ctx)
{
 return;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 // Empty function - original was calling null pointer
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
// Stub implementation - actual libc_start_main is external
void __libc_start_main_stub(void)
{
 return;
}

// Function: <EXTERNAL>::printf @ 0x11050
// Stub implementation - actual printf is external
int printf_stub(char *__format,...)
{
 return 0;
}

// Function: <EXTERNAL>::puts @ 0x11060
// Stub implementation - actual puts is external
int puts_stub(char *__s)
{
 return 0;
}

// Function: FUN_00011070 @ 0x11070
void FUN_00011070(unsigned int param_1)
{
 int unaff_EBX;
 unaff_EBX = param_1;
 (*(void (*)(void))(*(void **)(unaff_EBX + -0x14)))();
 return;
}

// Function: _start @ 0x11080
static void _start(unsigned int param_1, unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main(main,param_2,auStack_4,0,0,param_1,auStack_4);
 do {
 } while( true );
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
 int unaff_EDI;
 if (*(char *)(unaff_EDI + 0x4ec3) == '\0') {
 if (*(int *)(unaff_EDI + 0x4e8f) != 0) {
 FUN_00011070(*(unsigned int *)(unaff_EDI + 0x4ebf));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x4ec7);
 while (uVar1 < ((unaff_EDI + 0x4daf) - (unaff_EDI + 0x4dab) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x4ec7) = uVar1 + 1;
 (*(void (*)(void))(*(void **)(unaff_EDI + 0x4dab + (uVar1 + 1) * 4)))();
 uVar1 = *(uint *)(unaff_EDI + 0x4ec7);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4ec3) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x111e9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x111ed
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: process_char @ 0x11200
uint process_char(uint param_1)
{
 uint uVar1;
 uVar1 = (uint)(byte)((char)param_1 + 0x20);
 if (0x19 < (byte)((char)param_1 + 0xbfU)) {
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
 return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_2 * param_1 * 2,
 (int)((ulonglong)param_1 * (ulonglong)param_1));
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
int array_1d_stack(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (0 < param_2) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 return iVar1;
 }
 return 0;
}

// Function: array_string @ 0x11460
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

// Function: array_2d_stack @ 0x11480
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

// Function: array_3d @ 0x114a0
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

// Function: array_vla @ 0x11500
int array_vla(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_2 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 return iVar1;
 }
 return 0;
}

// Function: array_pointer @ 0x11530
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

// Function: pointer_array @ 0x11550
int pointer_array(int param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 10;
 if (param_2 < 10) {
 iVar2 = param_2;
 }
 iVar3 = 1;
 if (1 < iVar2) {
 iVar3 = iVar2;
 }
 iVar4 = 0;
 iVar2 = 0;
 do {
 piVar1 = *(int **)(param_1 + iVar4 * 4);
 if (piVar1 != (int *)0x0) {
 iVar2 = iVar2 + *piVar1;
 }
 iVar4 = iVar4 + 1;
 } while (iVar3 != iVar4);
 }
 return iVar2;
}

// Function: array_complex_index @ 0x115a0
unsigned int array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if ((((-1 < param_4) && (param_5 < param_3)) && (param_4 < param_2)) && (-1 < param_5)) {
 uVar1 = *(unsigned int *)(param_1 + (param_5 * param_2 + param_4) * 4);
 }
 return uVar1;
}

// Function: array_oob @ 0x115e0
int array_oob(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (-1 < param_2) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_2 + 1 != iVar2);
 return iVar1;
 }
 return 0;
}

// Function: test_array_types @ 0x11610
void test_array_types(void)
{
 int iVar1;
 int *piVar2;
 char *puVar3;
 int iVar4;
 char *puVar5;
 int iVar6;
 int iVar7;
 unsigned int local_4e0;
 unsigned int local_4dc;
 int local_4d8;
 int *local_4d4 [4];
 unsigned int local_4c4;
 unsigned int local_4c0;
 unsigned int local_4bc;
 unsigned int local_4b8;
 unsigned int local_4b4;
 unsigned int local_4b0;
 int aiStack_4ac [20];
 int aiStack_45c [50];
 int local_394 [100];
 char local_204 [500];
 puts(&DAT_000135e0);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 iVar1 = 0;
 piVar2 = local_394;
 do {
 iVar4 = 0;
 do {
 iVar7 = 0;
 if (iVar1 == iVar4) {
 iVar7 = iVar1;
 }
 piVar2[iVar4] = iVar7;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 10);
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 10;
 } while (iVar1 != 10);
 iVar4 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)((int)local_394 + iVar4);
 iVar4 = iVar4 + 0x2c;
 } while (iVar4 != 0x1b8);
 printf("ARR-L1-03 (array_2d_stack): %d\n",iVar1);
 iVar1 = 0;
 puVar3 = local_204;
 do {
 iVar4 = 0;
 puVar5 = puVar3;
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
 puVar3 = puVar3 + 100;
 } while (iVar1 != 5);
 iVar1 = 0;
 puVar3 = local_204;
 iVar4 = 0;
 do {
 iVar7 = 0;
 puVar5 = puVar3;
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
 puVar3 = puVar3 + 100;
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
 local_4d8 = 10;
 local_4dc = 0x14;
 local_4e0 = 0x1e;
 local_4d4[0] = &local_4d8;
 local_4d4[1] = &local_4dc;
 local_4d4[2] = &local_4e0;
 local_4d4[3] = (int *)0x0;
 local_4c4 = 0;
 local_4c0 = 0;
 local_4bc = 0;
 local_4b8 = 0;
 local_4b4 = 0;
 local_4b0 = 0;
 iVar4 = 0;
 iVar1 = 0;
 do {
 if (local_4d4[iVar4] != (int *)0x0) {
 iVar1 = iVar1 + *local_4d4[iVar4];
 }
 iVar4 = iVar4 + 1;
 } while (iVar4 != 3);
 printf("ARR-L2-03 (pointer_array): %d\n",iVar1);
 iVar1 = 0;
 do {
 aiStack_4ac[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x14);
 printf("ARR-L2-04 (array_complex_index): %d\n",aiStack_4ac[17]);
 return;
}

// Function: ptr_single @ 0x118c0
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x118d0
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x118e0
int ptr_triple(unsigned int *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x118f0
int ptr_increment(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (0 < param_2) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 return iVar1;
 }
 return 0;
}

// Function: ptr_offset @ 0x11920
unsigned int ptr_offset(int param_1,int param_2)
{
 return *(unsigned int *)(param_1 + param_2 * 4);
}

// Function: ptr_diff @ 0x11930
int ptr_diff(int param_1,int param_2)
{
 return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x11940
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

// Function: ptr_const @ 0x11960
int ptr_const(int *param_1)
{
 return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x11970
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x11980
void ptr_func_simple(void (*param_1)(unsigned int),unsigned int param_2)
{
 param_1(param_2);
 return;
}

// Function: ptr_func_complex @ 0x119a0
void ptr_func_complex(void (*param_1)(unsigned int, char **),unsigned int param_2)
{
 char *local_c;
 unsigned int local_8;
 local_c = &DAT_00013270;
 local_8 = 0;
 param_1(param_2,&local_c);
 return;
}

// Function: ptr_cast @ 0x119e0
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x119f0
unsigned int opaque_handle_create(unsigned int param_1)
{
 return param_1;
}

// Function: opaque_handle_op @ 0x11a00
int opaque_handle_op(int param_1)
{
 return param_1 * 2;
}

// Function: test_pointer_types @ 0x11a10
void test_pointer_types(void)
{
 int iVar1;
 int iVar2;
 int local_1c [5];
 puts(&DAT_000135fb);
 printf("PTR-L2-01 (ptr_single): %d\n",0xf);
 printf("PTR-L2-02 (ptr_double): %d\n",0xf);
 printf("PTR-L2-03 (ptr_triple): %d\n",6);
 local_1c[4] = 5;
 local_1c[3] = 4;
 local_1c[2] = 3;
 local_1c[1] = 2;
 local_1c[0] = 1;
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + local_1c[iVar2];
 iVar2 = iVar2 + 1;
 } while (iVar2 != 5);
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

// Function: struct_simple @ 0x11bb0
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x11bc0
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

// Function: struct_nested @ 0x11c00
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x11c10
int struct_deep(int param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x11c20
int struct_with_ptr(int *param_1)
{
 if ((int *)param_1[1] != (int *)0x0) {
 return *(int *)param_1[1] + *param_1;
 }
 return *param_1;
}

// Function: struct_bitfields @ 0x11c40
short struct_bitfields(ushort *param_1)
{
 ushort uVar1;
 uVar1 = *param_1;
 return (uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}

// Function: union_type @ 0x11c70
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

// Function: union_array @ 0x11cc0
int union_array(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (0 < param_2) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 return iVar1;
 }
 return 0;
}

// Function: enum_type @ 0x11cf0
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: FUN_00011d05 @ 0x11d05
unsigned int FUN_00011d05(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 int unaff_retaddr;
 uVar1 = 0xffffff9d;
 if (param_2 < 4) {
 uVar1 = *(unsigned int *)(unaff_retaddr + 0x194f + param_2 * 4);
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x11d30
void struct_func_ptr(unsigned int *param_1)
{
 void (*func_ptr)(unsigned int) = (void (*)(unsigned int))param_1[1];
 func_ptr(*param_1);
 return;
}

// Function: linked_list @ 0x11d60
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

// Function: doubly_linked_list @ 0x11d80
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

// Function: binary_tree_sum @ 0x11da0
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_1 == (int *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar1 = *param_1;
 iVar2 = binary_tree_sum(param_1[1]);
 iVar3 = binary_tree_sum(param_1[2]);
 iVar3 = iVar3 + iVar2 + iVar1;
 }
 return iVar3;
}

// Function: binary_tree @ 0x11df0
void binary_tree(unsigned int param_1)
{
 binary_tree_sum(param_1);
 return;
}

// Function: graph_traverse @ 0x11e20
int graph_traverse(int param_1)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 if (*(int *)(param_1 + 0x28) < 1) {
 iVar2 = 0;
 }
 else {
 iVar3 = 0;
 iVar2 = 0;
 do {
 for (piVar1 = *(int **)(param_1 + iVar3 * 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1])
 {
 iVar2 = iVar2 + *piVar1;
 }
 iVar3 = iVar3 + 1;
 } while (iVar3 != *(int *)(param_1 + 0x28));
 }
 return iVar2;
}

// Function: test_composite_types @ 0x11e60
void test_composite_types(void)
{
 int *piVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 int local_7c;
 unsigned int local_78;
 int local_74;
 unsigned int *local_70;
 unsigned int local_6c;
 unsigned int *local_68;
 unsigned int local_64;
 unsigned int local_60;
 unsigned int local_5c;
 unsigned int local_58;
 unsigned int local_54;
 int local_4c;
 unsigned int *local_48;
 unsigned int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 int *local_38;
 int *local_34 [4];
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int local_10;
 unsigned int local_c;
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
 piVar1 = &local_74;
 local_74 = 10;
 local_70 = &local_6c;
 local_6c = 0x14;
 local_68 = &local_64;
 local_64 = 0x1e;
 local_60 = 0;
 iVar3 = 0;
 do {
 iVar3 = iVar3 + *piVar1;
 piVar1 = (int *)piVar1[1];
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",iVar3);
 piVar1 = &local_4c;
 local_4c = 10;
 local_48 = &local_40;
 local_44 = 0;
 local_40 = 0x14;
 local_3c = 0;
 local_38 = piVar1;
 iVar3 = 0;
 do {
 iVar3 = iVar3 + *piVar1;
 piVar1 = (int *)piVar1[1];
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
 local_54 = 0;
 local_58 = 0;
 local_5c = 100;
 uVar2 = binary_tree_sum(&local_5c);
 printf("CMP-L2-14 (binary_tree): %d\n",uVar2);
 local_7c = 1;
 local_78 = 0;
 local_10 = 0;
 local_14 = 0;
 local_18 = 0;
 local_1c = 0;
 local_20 = 0;
 local_24 = 0;
 local_34[3] = (int *)0x0;
 local_34[2] = (int *)0x0;
 local_34[1] = (int *)0x0;
 local_34[0] = &local_7c;
 local_c = 2;
 iVar4 = 0;
 iVar3 = 0;
 do {
 for (piVar1 = local_34[iVar4]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
 iVar3 = iVar3 + *piVar1;
 }
 iVar4 = iVar4 + 1;
 } while (iVar4 != 2);
 printf("CMP-L2-15 (graph_traverse): %d\n",iVar3);
 return;
}

// Function: main @ 0x12110
unsigned int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x12140
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x1218c
static void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

