// Decompiled by BinaryAI
// SHA256: c86c89b7f944e4b7544248359cc54257c52ecd57366b1ab6e78c4b73f760504a

#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

// External data references
extern unsigned int DAT_00013008;
extern unsigned int DAT_00013173;
extern unsigned int DAT_00013284;
extern unsigned int DAT_00013289;
extern unsigned int DAT_00013422;
extern unsigned int DAT_0001360c;
extern unsigned int DAT_00013620;
extern unsigned int DAT_00013638;
extern char CSWTCH_78[];

// Function: _init @ 0x11000
int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
// Empty stub - was calling NULL function pointer
void FUN_00011030(void)
{
 return;
}

// Function: FUN_00011080 @ 0x11080
// Wrapper for a function pointer call
void FUN_00011080(void *func_ptr)
{
 ((void (*)(void))func_ptr)();
}

// Function: FUN_00011090 @ 0x11090
// Generic function pointer call wrapper
void FUN_00011090(void *func, unsigned int param2, void *param3, unsigned int param4, unsigned int param5, unsigned int param6, void *param7)
{
 return;
}

// Function: FUN_000110a0 @ 0x110a0
// Empty stub - was calling NULL function pointer
void FUN_000110a0(void)
{
 return;
}

// Function: FUN_000110b0 @ 0x110b0
// Call a function pointer stored in the passed structure
void FUN_000110b0(void *param)
{
 void (**func_ptr)(void) = (void (**)(void))param;
 if (func_ptr != NULL) {
 (*func_ptr)();
 }
 return;
}

// Function: FUN_000110c0 @ 0x110c0
// Wrapper for printf - takes format string and variable args
#include <stdio.h>
#include <stdarg.h>

int FUN_000110c0(char *format, ...)
{
 int ret;
 va_list args;
 va_start(args, format);
 ret = vprintf(format, args);
 va_end(args);
 return ret;
}

// Function: main @ 0x110d0
unsigned int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

// Function: _start @ 0x11100
void _start(unsigned int param_1, unsigned int param_2)
{
 char auStack_4 [4];
 // Call main with standard c runtime setup
 ((void (*)(void))main)();
 // Exit the program
 return;
}

// Function: __i686.get_pc_thunk.bx @ 0x1112c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11130
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11140
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11180
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x111d0
void __do_global_dtors_aux(void)
{
 unsigned int uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4e2b) == '\0') {
 if (*(int *)(unaff_EDI + 0x4e13) != 0) {
 FUN_00011080(*(unsigned int *)(unaff_EDI + 0x4e27));
 }
 uVar1 = *(unsigned int *)(unaff_EDI + 0x4e2f);
 while (uVar1 < ((unaff_EDI + 0x4d17) - (unaff_EDI + 0x4d13) >> 2) - 1U) {
 *(unsigned int *)(unaff_EDI + 0x4e2f) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x4d13 + (uVar1 + 1) * 4))();
 uVar1 = *(unsigned int *)(unaff_EDI + 0x4e2f);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4e2b) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11269
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1126d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: double_value @ 0x11271
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: process_int @ 0x1127f
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: complex_callback @ 0x1128e
_Bool complex_callback(int *param_1,int *param_2)
{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}

// Function: process_char @ 0x112a9
int process_char(int param_1)
{
 int iVar1;
 iVar1 = param_1 + 0x20;
 if (0x19 < (unsigned char)((char)param_1 + 0xbfU)) {
 iVar1 = param_1;
 }
 return iVar1;
}

// Function: process_short @ 0x112c4
int process_short(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: process_long @ 0x112d3
int process_long(int param_1)
{
 return param_1 * 2;
}

// Function: process_ll @ 0x112e1
unsigned long long process_ll(unsigned int param_1,int param_2)
{
 return CONCAT44((int)((unsigned long long)param_1 * (unsigned long long)param_1 >> 0x20) + param_2 * param_1 * 2,
 (int)((unsigned long long)param_1 * (unsigned long long)param_1));
}

// Function: process_float @ 0x112fa
long double process_float(float param_1)
{
 return (long double)0.5 + (long double)1.5 * (long double)param_1;
}

// Function: process_double @ 0x11322
long double process_double(double param_1)
{
 return (long double)0.1 + (long double)0.5 * (long double)param_1;
}

// Function: process_ld @ 0x1134c
long double process_ld(long double param_1)
{
 return (long double)1 + param_1 * param_1;
}

// Function: process_bool @ 0x1135e
unsigned int process_bool(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (0 < (int)param_1) {
 uVar1 = ~param_1 & 1;
 }
 return uVar1;
}

// Function: const_param @ 0x1137a
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x1138b
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x1139d
void test_data_types_l1(void)
{
 // Note: DAT_00013008 is data, not a function pointer - skipping the call
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000);
 printf("DT-L1-06 (process_float): %.2f\n",*(float*)&(unsigned int){0x400c0000});
 printf("DT-L1-07 (process_double): %.2f\n",*(double*)&(unsigned long long){0x4000cccccccccccd});
 printf("DT-L1-08 (process_ld): %.2Lf\n",*(long double*)&(unsigned long long[3]){0x4002,0xa0000000,0});
 printf("DT-L1-09 (process_bool): %d\n",1);
 fflush(stdout);
 printf("DT-L1-09 (process_bool): %d\n",0);
 fflush(stdout);
 printf("DT-L1-09 (process_bool): %d\n",0);
 fflush(stdout);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x114ec
int array_1d_stack(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4);
 }
 return iVar2;
}

// Function: array_string @ 0x11509
int array_string(int param_1)
{
 int iVar1;
 for (iVar1 = 0; *(char *)(param_1 + iVar1) != '\0'; iVar1 = iVar1 + 1) {
 }
 return iVar1;
}

// Function: array_2d_stack @ 0x11520
int array_2d_stack(int *param_1)
{
 int *piVar1;
 int iVar2;
 iVar2 = 0;
 piVar1 = param_1 + 0x6e;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 0xb;
 } while (param_1 != piVar1);
 return iVar2;
}

// Function: array_3d @ 0x1153f
int array_3d(int *param_1)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 iVar3 = 0;
 piVar2 = param_1 + 0x7d;
 do {
 piVar1 = param_1 + 0x19;
 piVar4 = param_1;
 do {
 param_1 = piVar4 + 5;
 iVar3 = iVar3 + *piVar4 + piVar4[1] + piVar4[2] + piVar4[3] + piVar4[4];
 piVar4 = param_1;
 } while (param_1 != piVar1);
 } while (piVar2 != param_1);
 return iVar3;
}

// Function: array_vla @ 0x11571
int array_vla(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_2 + iVar1 * 4);
 }
 return iVar2;
}

// Function: array_pointer @ 0x1158e
int array_pointer(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 0x28);
 }
 return iVar2;
}

// Function: pointer_array @ 0x115b0
int pointer_array(int param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar3 = 10;
 if (param_2 < 0xb) {
 iVar3 = param_2;
 }
 iVar2 = 0;
 for (iVar4 = 0; iVar4 < iVar3; iVar4 = iVar4 + 1) {
 piVar1 = *(int **)(param_1 + iVar4 * 4);
 if (piVar1 != (int *)0x0) {
 iVar2 = iVar2 + *piVar1;
 }
 }
 return iVar2;
}

// Function: array_complex_index @ 0x115e1
unsigned int array_complex_index(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (((-1 < (int)(param_4 | param_5)) && ((int)param_4 < param_2)) && ((int)param_5 < param_3)) {
 uVar1 = *(unsigned int *)(param_1 + (param_2 * param_5 + param_4) * 4);
 }
 return uVar1;
}

// Function: array_oob @ 0x11615
int array_oob(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 for (iVar1 = 0; iVar1 <= param_2; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4);
 }
 return iVar2;
}

// Function: test_array_types @ 0x11632
void test_array_types(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int *puVar3;
 int iVar4;
 char *puVar5;
 unsigned int *puVar6;
 int iVar7;
 int in_GS_OFFSET;
 unsigned char bVar8;
 unsigned int local_518;
 unsigned int local_514;
 unsigned int local_510;
 unsigned int local_50c;
 unsigned int local_508;
 unsigned int local_504;
 unsigned int local_500 [5];
 unsigned int *local_4ec;
 unsigned int *local_4e8;
 unsigned int *local_4e4;
 unsigned int local_4e0 [7];
 int aiStack_4c4 [20];
 unsigned int local_474 [10];
 unsigned int local_44c;
 unsigned int local_424;
 unsigned int local_3fc;
 unsigned int local_3d4;
 char local_3ac [400];
 unsigned int local_21c [125];
 char local_28 [2];
 unsigned int local_26;
 unsigned short local_22;
 int local_20;
 unsigned int uStack_14;
 bVar8 = 0;
 uStack_14 = 0x11647;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 // Skipping call to FUN_000110b0 - DAT_00013173 is data, not a function pointer
 puVar6 = &DAT_0001360c;
 puVar3 = local_500;
 for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
 *puVar3 = *puVar6;
 puVar6 = puVar6 + (unsigned int)bVar8 * -2 + 1;
 puVar3 = puVar3 + (unsigned int)bVar8 * -2 + 1;
 }
 uVar1 = array_1d_stack(local_500,5);
 FUN_000110c0("ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_26 = 0x6c6c6568;
 local_22 = 0x6f;
 uVar1 = array_string(&local_26);
 FUN_000110c0("ARR-L1-02 (array_string): %d\n",uVar1);
 iVar4 = 0;
 puVar5 = local_3ac;
 do {
 iVar2 = 0;
 do {
 iVar7 = 0;
 if (iVar2 == iVar4) {
 iVar7 = iVar2;
 }
 *(int *)(puVar5 + iVar2 * 4) = iVar7;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 10);
 iVar4 = iVar4 + 1;
 puVar5 = puVar5 + 0x28;
 } while (iVar4 != 10);
 uVar1 = array_2d_stack(local_3ac);
 FUN_000110c0("ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 puVar6 = local_21c;
 do {
 iVar4 = 0;
 puVar3 = puVar6;
 do {
 iVar4 = iVar4 + 1;
 *puVar3 = 1;
 puVar3[1] = 1;
 puVar3[2] = 1;
 puVar3[3] = 1;
 puVar3[4] = 1;
 puVar3 = puVar3 + 5;
 } while (iVar4 != 5);
 puVar6 = puVar6 + 0x19;
 } while ((unsigned int *)local_28 != puVar6);
 uVar1 = array_3d(local_21c);
 FUN_000110c0("ARR-L1-04 (array_3d): %d\n",uVar1);
 local_50c = 10;
 local_508 = 0x14;
 local_504 = 0x1e;
 uVar1 = array_vla(3,&local_50c);
 FUN_000110c0("ARR-L2-01 (array_vla): %d\n",uVar1);
 local_474[0] = 0;
 local_44c = 10;
 local_424 = 0x14;
 local_3fc = 0x1e;
 local_3d4 = 0x28;
 uVar1 = array_pointer(local_474,5);
 FUN_000110c0("ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_518 = 10;
 puVar6 = local_4e0;
 for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
 *puVar6 = 0;
 puVar6 = puVar6 + (unsigned int)bVar8 * -2 + 1;
 }
 local_4ec = &local_518;
 local_514 = 0x14;
 local_4e8 = &local_514;
 local_4e4 = &local_510;
 local_510 = 0x1e;
 uVar1 = pointer_array(&local_4ec,3);
 FUN_000110c0("ARR-L2-03 (pointer_array): %d\n",uVar1);
 iVar4 = 0;
 do {
 aiStack_4c4[iVar4] = iVar4;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x14);
 FUN_000110c0("ARR-L2-04 (array_complex_index): %d\n",aiStack_4c4[17]);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: ptr_single @ 0x118af
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x118c0
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x118d3
int ptr_triple(unsigned int *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x118e6
int ptr_increment(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4);
 }
 return iVar2;
}

// Function: ptr_offset @ 0x11903
unsigned int ptr_offset(int param_1,int param_2)
{
 return *(unsigned int *)(param_1 + param_2 * 4);
}

// Function: ptr_diff @ 0x11915
int ptr_diff(int param_1,int param_2)
{
 return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x11927
int ptr_void(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 0) {
 iVar1 = *param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 1) {
 iVar1 = (int)*(char *)param_1;
 }
 }
 return iVar1;
}

// Function: ptr_const @ 0x11947
int ptr_const(int *param_1)
{
 return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x11957
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x1196a
int ptr_func_simple(void *param_1)
{
 void (*func)(void) = (void (*)(void))param_1;
 func();
 return 0;
}

// Function: ptr_func_complex @ 0x1197d
void ptr_func_complex(void *param_1,unsigned int param_2)
{
 int in_GS_OFFSET;
 char *local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 0;
 local_18 = &DAT_00013284;
 ((void (*)(unsigned int, char **))param_1)(param_2,&local_18);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: ptr_cast @ 0x119ca
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x119d8
unsigned int opaque_handle_create(unsigned int param_1)
{
 return param_1;
}

// Function: opaque_handle_op @ 0x119e4
int opaque_handle_op(int param_1)
{
 return param_1 * 2;
}

// Function: test_pointer_types @ 0x119f2
void test_pointer_types(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int *puVar3;
 unsigned int *puVar4;
 int in_GS_OFFSET;
 unsigned char bVar5;
 unsigned int local_44;
 unsigned int *local_40;
 unsigned int **local_3c;
 unsigned int local_38;
 unsigned int local_34 [5];
 int local_20;
 unsigned int uStack_14;
 bVar5 = 0;
 uStack_14 = 0x11a04;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 // Skipping call to FUN_000110b0 - DAT_00013289 is data, not a function pointer
 FUN_000110c0("PTR-L2-01 (ptr_single): %d\n",0xf);
 FUN_000110c0("PTR-L2-02 (ptr_double): %d\n",0xf);
 local_40 = &local_44;
 local_44 = 5;
 local_3c = &local_40;
 uVar1 = ptr_triple(&local_3c);
 FUN_000110c0("PTR-L2-03 (ptr_triple): %d\n",uVar1);
 puVar3 = &DAT_0001360c;
 puVar4 = local_34;
 for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar4 = *puVar3;
 puVar3 = puVar3 + (unsigned int)bVar5 * -2 + 1;
 puVar4 = puVar4 + (unsigned int)bVar5 * -2 + 1;
 }
 uVar1 = ptr_increment(local_34,5);
 FUN_000110c0("PTR-L2-04 (ptr_increment): %d\n",uVar1);
 FUN_000110c0("PTR-L2-05 (ptr_offset): %d\n",0x1e);
 FUN_000110c0("PTR-L2-06 (ptr_diff): %d\n",4);
 FUN_000110c0("PTR-L2-07 (ptr_void): %d\n",0x2a);
 FUN_000110c0("PTR-L2-07 (ptr_void): %d\n",0x41);
 FUN_000110c0("PTR-L2-08 (ptr_const): %d\n",0x14);
 FUN_000110c0("PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 uVar1 = ptr_func_simple(double_value);
 FUN_000110c0("PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
 local_38 = 5;
 ptr_func_complex(complex_callback,&local_38);
 FUN_000110c0("PTR-L2-11 (ptr_func_complex): %d\n",0);
 FUN_000110c0("PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 FUN_000110c0("PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: struct_simple @ 0x11ba4
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x11bb8
int struct_array(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + param_1[1] + *param_1 + param_1[2];
 param_1 = param_1 + 3;
 }
 return iVar1;
}

// Function: struct_nested @ 0x11be1
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x11bf2
int struct_deep(int param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x11c04
int struct_with_ptr(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 if ((int *)param_1[1] != (int *)0x0) {
 iVar1 = *(int *)param_1[1];
 }
 return *param_1 + iVar1;
}

// Function: struct_bitfields @ 0x11c1f
int struct_bitfields(unsigned int *param_1)
{
 unsigned char bVar1;
 bVar1 = *(unsigned char *)param_1;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6 & 0x3ff);
}

// Function: union_type @ 0x11c50
float union_type(float *param_1,int param_2)
{
 float fVar1;
 if (param_2 == 0) {
 fVar1 = *param_1;
 }
 else if (param_2 == 1) {
 fVar1 = (float)(int)ROUND(*param_1);
 }
 else {
 fVar1 = (float)(int)*(char *)param_1;
 }
 return fVar1;
}

// Function: union_array @ 0x11c8e
int union_array(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4);
 }
 return iVar2;
}

// Function: enum_type @ 0x11cab
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x11cb8
int enum_switch(unsigned int param_1)
{
 int iVar1;
 iVar1 = -99;
 if (param_1 < 4) {
 iVar1 = (int)*(char *)((int)&CSWTCH_78 + param_1);
 }
 return iVar1;
}

// Function: struct_func_ptr @ 0x11ce1
void struct_func_ptr(int param_1)
{
 (**(void **)(param_1 + 4))();
 return;
}

// Function: linked_list @ 0x11cf6
int linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}

// Function: doubly_linked_list @ 0x11d11
int doubly_linked_list(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}

// Function: binary_tree_sum @ 0x11d2c
unsigned int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[2]) {
 iVar1 = binary_tree_sum(param_1[1]);
 iVar2 = iVar2 + iVar1 + *param_1;
 }
 return iVar2;
}

// Function: graph_traverse @ 0x11d64
int graph_traverse(int param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x28); iVar1 = iVar1 + 1) {
 for (piVar3 = *(int **)(param_1 + iVar1 * 4); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
 iVar2 = iVar2 + *piVar3;
 }
 }
 return iVar2;
}

// Function: test_composite_types @ 0x11d92
void test_composite_types(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int *puVar3;
 unsigned int *puVar4;
 int in_GS_OFFSET;
 unsigned char bVar5;
 unsigned int local_d4;
 unsigned int local_d0;
 unsigned int local_cc;
 unsigned int *local_c8;
 unsigned short local_c4 [2];
 unsigned int local_c0;
 unsigned int local_bc;
 void *local_b8;
 unsigned int local_b4;
 unsigned int local_b0;
 unsigned int local_ac;
 unsigned int local_a8;
 unsigned int local_a4;
 unsigned int local_a0 [3];
 unsigned int local_94 [6];
 unsigned int local_7c;
 unsigned int *local_78;
 unsigned int local_74;
 unsigned int *local_70;
 unsigned int local_6c;
 unsigned int local_68;
 unsigned int local_64;
 unsigned int *local_60;
 unsigned int local_5c;
 unsigned int local_58;
 unsigned int local_54;
 unsigned int *local_50;
 unsigned int *local_4c;
 unsigned int local_48 [9];
 unsigned int local_24;
 int local_20;
 unsigned int uStack_14;
 bVar5 = 0;
 uStack_14 = 0x11da7;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 // Skipping call to FUN_000110b0 - DAT_00013422 is data, not a function pointer
 FUN_000110c0("CMP-L2-01 (struct_simple): %d\n",6);
 puVar3 = &DAT_00013620;
 puVar4 = local_94;
 for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar4 = *puVar3;
 puVar3 = puVar3 + (unsigned int)bVar5 * -2 + 1;
 puVar4 = puVar4 + (unsigned int)bVar5 * -2 + 1;
 }
 uVar1 = struct_array(local_94,2);
 FUN_000110c0("CMP-L2-02 (struct_array): %d\n",uVar1);
 FUN_000110c0("CMP-L2-03 (struct_nested): %d\n",0x69);
 FUN_000110c0("CMP-L2-04 (struct_deep): %d\n",0x102);
 local_c8 = &local_d4;
 local_d4 = 0x14;
 local_d0 = 0;
 local_cc = 10;
 uVar1 = struct_with_ptr(&local_cc);
 FUN_000110c0("CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_c0 = local_c0 & 0xfff00000;
 local_c4[0] = 0x191d;
 uVar1 = struct_bitfields(local_c4);
 FUN_000110c0("CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 FUN_000110c0("CMP-L2-07 (union_type): %d\n",0x12345678);
 puVar3 = &DAT_00013638;
 puVar4 = local_a0;
 for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar4 = *puVar3;
 puVar3 = puVar3 + (unsigned int)bVar5 * -2 + 1;
 puVar4 = puVar4 + (unsigned int)bVar5 * -2 + 1;
 }
 uVar1 = union_array(local_a0,3);
 FUN_000110c0("CMP-L2-08 (union_array): %d\n",uVar1);
 FUN_000110c0("CMP-L2-09 (enum_type): %d\n",10);
 FUN_000110c0("CMP-L2-10 (enum_switch): %d\n",0x32);
 local_b8 = process_int;
 local_bc = 10;
 uVar1 = struct_func_ptr(&local_bc);
 FUN_000110c0("CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
 local_78 = &local_74;
 local_7c = 10;
 local_70 = &local_6c;
 local_74 = 0x14;
 local_6c = 0x1e;
 local_68 = 0;
 uVar1 = linked_list(&local_7c);
 FUN_000110c0("CMP-L2-12 (linked_list): %d\n",uVar1);
 local_60 = &local_58;
 local_50 = &local_64;
 local_64 = 10;
 local_5c = 0;
 local_58 = 0x14;
 local_54 = 0;
 uVar1 = doubly_linked_list(local_50);
 FUN_000110c0("CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_ac = 100;
 local_a8 = 0;
 local_a4 = 0;
 uVar1 = binary_tree_sum(&local_ac);
 FUN_000110c0("CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_b4 = 1;
 local_b0 = 0;
 puVar3 = local_48;
 for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar3 = 0;
 puVar3 = puVar3 + (unsigned int)bVar5 * -2 + 1;
 }
 local_4c = &local_b4;
 local_24 = 2;
 uVar1 = graph_traverse(&local_4c);
 FUN_000110c0("CMP-L2-15 (graph_traverse): %d\n",uVar1);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: __x86.get_pc_thunk.ax @ 0x12091
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.cx @ 0x12095
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x120a0
void __stack_chk_fail_local(void)
{
 FUN_000110a0();
 return;
}

// Function: __do_global_ctors_aux @ 0x120c0
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x1210c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

