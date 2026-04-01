/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/2/2_gcc_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Ghidra type definitions */
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef undefined8 (*code)(undefined8, undefined8, undefined8, undefined8);
typedef unsigned char undefined;

/* Ghidra macros */
#define CARRY8(x,y) (((x) + (y)) < (x))
#define LZCOUNT(x) __builtin_clzll(x)

/* 128-bit float type */
typedef struct {
 ulong _0_8_;
 ulong _8_8_;
 uint _12_4_;
} float128;

/* Stack protection globals */
extern ulong ___stack_chk_guard;
extern ulong __stack_chk_guard;

/* Forward declarations */
extern char completed_0;
extern void *__dso_handle;
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);
extern void test_data_types_l1(void);
extern void test_array_types(void);
extern void test_pointer_types(void);
extern void test_composite_types(void);
extern int puts(const char *);
extern int __printf_chk(int, const char *, ...);
extern void *__builtin_strncpy(char *, const char *, unsigned long);
extern float128 __addtf3(float128, float128);
extern float128 __multf3(float128, float128);
extern void __stack_chk_fail(void);
extern ulong __sfp_handle_exceptions(ulong);
extern ulong fpcr;
extern ulong fpsr;
extern const char DAT_00102b24[];
extern const char DAT_00102c8f[];
extern const char DAT_00102dab[];
extern const char DAT_00102da6[];
extern const char DAT_00102f44[];
extern const char CSWTCH_62[];

/* Define missing data symbols */
const char DAT_00102b24[] = "Data Types L1";
const char DAT_00102c8f[] = "Array Types";
const char DAT_00102dab[] = "Pointer Types";
const char DAT_00102da6[] = "";
const char DAT_00102f44[] = "Composite Types";
const char CSWTCH_62[] = "";

/* Define missing global variables */
char completed_0 = '\0';
ulong ___stack_chk_guard = 0;
ulong fpcr = 0;
ulong fpsr = 0;

/* Define missing stub functions */
void deregister_tm_clones(void) { return; }

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001006d0 @ 001006d0 */

void FUN_001006d0(void)

{
 (*(code *)(undefined *)0x0)(0,0,0,0);
 return;
}



/* Function: main @ 00100780 */

undefined8 main(void)

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




/* Function: double_value @ 001008d4 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: process_int @ 001008dc */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: complex_callback @ 001008e8 */

bool complex_callback(int *param_1,long *param_2)

{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}



/* Function: process_char @ 00100904 */

char process_char(char param_1)

{
 if ((byte)(param_1 + 0xbfU) < 0x1a) {
 param_1 = param_1 + ' ';
 }
 return param_1;
}



/* Function: process_short @ 00100924 */

int process_short(short param_1,short param_2)

{
 return (int)param_2 + (int)param_1;
}



/* Function: process_long @ 00100930 */

long process_long(long param_1)

{
 return param_1 << 1;
}



/* Function: process_ll @ 00100938 */

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
 __addtf3(uVar1,(float128){0,0});
 return;
}



/* Function: process_bool @ 0010098c */

uint process_bool(uint param_1)

{
 uint uVar1;
 
 uVar1 = ~param_1 & 1;
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 return uVar1;
}



/* Function: const_param @ 001009a0 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 001009ac */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 001009bc */

void test_data_types_l1(void)

{
 puts(DAT_00102b24);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",0x400c000000000000);
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",0x4000cccccccccccd);
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 00100b0c */

int array_1d_stack(long param_1,int param_2)

{
 int iVar1;
 long lVar2;
 
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 }
 return iVar1;
}



/* Function: array_string @ 00100b34 */

ulong array_string(long param_1)

{
 ulong uVar1;
 ulong uVar2;
 
 uVar2 = 0;
 do {
 uVar1 = uVar2 & 0xffffffff;
 uVar2 = uVar2 + 1;
 } while (*(char *)(param_1 + -1 + uVar2) != '\0');
 return uVar1;
}



/* Function: array_2d_stack @ 00100b50 */

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



/* Function: array_3d @ 00100b70 */

int array_3d(int *param_1)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 
 piVar1 = param_1 + 0x7d;
 iVar3 = 0;
 do {
 piVar2 = param_1 + 0x19;
 piVar4 = param_1;
 do {
 param_1 = piVar4 + 5;
 iVar3 = iVar3 + *piVar4 + piVar4[1] + piVar4[2] + piVar4[3] + piVar4[4];
 piVar4 = param_1;
 } while (param_1 != piVar2);
 } while (piVar1 != param_1);
 return iVar3;
}



/* Function: array_vla @ 00100bc0 */

int array_vla(int param_1,long param_2)

{
 int iVar1;
 long lVar2;
 
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_1; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_2 + lVar2 * 4);
 }
 return iVar1;
}



/* Function: array_pointer @ 00100be8 */

int array_pointer(long param_1,int param_2)

{
 int iVar1;
 long lVar2;
 
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 0x28);
 }
 return iVar1;
}



/* Function: pointer_array @ 00100c18 */

int pointer_array(long param_1,int param_2)

{
 int iVar1;
 long lVar2;
 int *piVar3;
 
 lVar2 = 0;
 if (10 < param_2) {
 param_2 = 10;
 }
 iVar1 = 0;
 for (; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 piVar3 = *(int **)(param_1 + lVar2 * 8);
 if (piVar3 != (int *)0x0) {
 iVar1 = iVar1 + *piVar3;
 }
 }
 return iVar1;
}



/* Function: array_complex_index @ 00100c54 */

undefined4 array_complex_index(long param_1,int param_2,int param_3,uint param_4,uint param_5)

{
 undefined4 uVar1;
 
 if (((int)(param_4 | param_5) < 0 || param_2 <= (int)param_4) || (param_3 <= (int)param_5)) {
 uVar1 = 0xffffffff;
 }
 else {
 uVar1 = *(undefined4 *)(param_1 + (long)(int)(param_4 + param_2 * param_5) * 4);
 }
 return uVar1;
}



/* Function: array_oob @ 00100c80 */

int array_oob(long param_1,int param_2)

{
 int iVar1;
 long lVar2;
 
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 <= param_2; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 }
 return iVar1;
}



/* Function: test_array_types @ 00100ca8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_array_types(void)

{
 undefined4 uVar1;
 int iVar2;
 long lVar3;
 undefined4 *puVar4;
 int iVar5;
 undefined1 *puVar6;
 undefined4 *puVar7;
 undefined4 local_534;
 undefined4 uStack_530;
 undefined4 local_52c;
 undefined8 local_528;
 undefined4 local_520;
 undefined8 local_518;
 undefined8 uStack_510;
 undefined4 local_508;
 undefined4 *local_500;
 undefined4 *local_4f8;
 undefined4 *local_4f0;
 undefined8 local_4e8;
 undefined8 uStack_4e0;
 undefined8 uStack_4d8;
 undefined8 uStack_4d0;
 undefined8 local_4c8;
 undefined8 uStack_4c0;
 undefined8 local_4b8;
 undefined4 local_4b0 [20];
 undefined4 local_460 [10];
 undefined4 local_438;
 undefined4 local_410;
 undefined4 local_3e8;
 undefined4 local_3c0;
 undefined1 local_398 [400];
 undefined4 local_208 [126];
 char local_10 [8];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_00102c8f);
 local_518 = 0x200000001;
 uStack_510 = 0x400000003;
 local_508 = 5;
 uVar1 = array_1d_stack((long)&local_518,5);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 __builtin_strncpy(local_10,"hello",6);
 uVar1 = array_string((long)&local_10);
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar1);
 iVar5 = 0;
 puVar6 = local_398;
 do {
 lVar3 = 0;
 do {
 iVar2 = (int)lVar3;
 if (iVar5 != iVar2) {
 iVar2 = 0;
 }
 *(int *)(puVar6 + lVar3 * 4) = iVar2;
 lVar3 = lVar3 + 1;
 } while (lVar3 != 10);
 iVar5 = iVar5 + 1;
 puVar6 = puVar6 + 0x28;
 } while (iVar5 != 10);
 uVar1 = array_2d_stack((int *)local_398);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 iVar5 = 5;
 puVar7 = local_208;
 do {
 iVar2 = 5;
 puVar4 = puVar7;
 do {
 *puVar4 = 1;
 puVar4[1] = 1;
 iVar2 = iVar2 + -1;
 puVar4[2] = 1;
 puVar4[3] = 1;
 puVar4[4] = 1;
 puVar4 = puVar4 + 5;
 } while (iVar2 != 0);
 puVar7 = puVar7 + 0x19;
 iVar5 = iVar5 + -1;
 } while (iVar5 != 0);
 uVar1 = array_3d(local_208);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",uVar1);
 local_528 = 0x140000000a;
 local_520 = 0x1e;
 uVar1 = array_vla(3,(long)&local_528);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",uVar1);
 local_460[0] = 0;
 local_438 = 10;
 local_410 = 0x14;
 local_3e8 = 0x1e;
 local_3c0 = 0x28;
 uVar1 = array_pointer((long)local_460,5);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_4b8 = 0;
 local_534 = 10;
 uStack_530 = 0x14;
 local_52c = 0x1e;
 uStack_4e0 = 0;
 local_4e8 = 0;
 uStack_4d0 = 0;
 uStack_4d8 = 0;
 uStack_4c0 = 0;
 local_4c8 = 0;
 local_500 = &local_534;
 local_4f8 = &uStack_530;
 local_4f0 = &local_52c;
 uVar1 = pointer_array((long)&local_500,3);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",uVar1);
 lVar3 = 0;
 do {
 local_4b0[lVar3] = (int)lVar3;
 lVar3 = lVar3 + 1;
 } while (lVar3 != 0x14);
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",local_4b0[0x11]);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: ptr_single @ 00100f14 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00100f20 */

int ptr_double(undefined8 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00100f30 */

int ptr_triple(undefined8 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00100f44 */

int ptr_increment(long param_1,int param_2)

{
 int iVar1;
 long lVar2;
 
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 }
 return iVar1;
}



/* Function: ptr_offset @ 00100f6c */

undefined4 ptr_offset(long param_1,int param_2)

{
 return *(undefined4 *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 00100f74 */

ulong ptr_diff(long param_1,long param_2)

{
 return (ulong)(param_1 - param_2) >> 2 & 0xffffffff;
}



/* Function: ptr_void @ 00100f80 */

uint ptr_void(uint *param_1,int param_2)

{
 uint uVar1;
 
 if (param_2 == 0) {
 uVar1 = *param_1;
 }
 else if (param_2 == 1) {
 uVar1 = (uint)(byte)*param_1;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: ptr_const @ 00100fa4 */

int ptr_const(int *param_1)

{
 return *param_1 << 1;
}



/* Function: ptr_const_ptr @ 00100fb0 */

void ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return;
}



/* Function: ptr_func_simple @ 00100fc4 */

void ptr_func_simple(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
 /* WARNING: Could not recover jumptable at 0x00100fcc. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*UNRECOVERED_JUMPTABLE)(param_2,0,0,0);
 return;
}



/* Function: ptr_func_complex @ 00100fd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_func_complex(code *param_1,undefined8 param_2)

{
 undefined8 uVar1;
 undefined *local_18;
 undefined8 uStack_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_18 = (undefined *)&DAT_00102da6;
 uStack_10 = 0;
 uVar1 = (*param_1)(param_2,(undefined8)&local_18,(undefined8)param_1,0);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: ptr_cast @ 00101030 */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00101038 */

long opaque_handle_create(int param_1)

{
 return (long)param_1;
}



/* Function: opaque_handle_op @ 00101040 */

int opaque_handle_op(int param_1)

{
 return param_1 << 1;
}



/* Function: test_pointer_types @ 00101048 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_pointer_types(void)

{
 undefined4 uVar1;
 undefined4 local_38;
 undefined4 local_34;
 undefined4 *local_30;
 undefined4 **local_28;
 undefined8 local_20;
 undefined8 uStack_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_00102dab);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 local_38 = 5;
 local_30 = &local_38;
 local_28 = &local_30;
 uVar1 = ptr_triple((undefined8 *)&local_28);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",uVar1);
  local_20 = 0x200000001;
 uStack_18 = 0x400000003;
 local_10 = 5;
 uVar1 = ptr_increment((long)&local_20,5);
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 ptr_func_simple((code *)double_value,5);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",10);
  local_34 = 5;
 ptr_func_complex((code *)complex_callback,(undefined8)&local_34);
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",1);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: struct_simple @ 00101224 */

int struct_simple(int *param_1)

{
 return *param_1 + param_1[1] + param_1[2];
}



/* Function: struct_array @ 00101238 */

int struct_array(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + *param_1 + param_1[1] + param_1[2];
 param_1 = param_1 + 3;
 }
 return iVar1;
}



/* Function: struct_nested @ 00101270 */

int struct_nested(int *param_1)

{
 return *param_1 + param_1[3];
}



/* Function: struct_deep @ 00101280 */

int struct_deep(long param_1)

{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}



/* Function: struct_with_ptr @ 00101290 */

int struct_with_ptr(int *param_1)

{
 int iVar1;
 
 if (*(int **)(param_1 + 2) == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = **(int **)(param_1 + 2);
 }
 return *param_1 + iVar1;
}



/* Function: struct_bitfields @ 001012b0 */

int struct_bitfields(uint *param_1)

{
 uint uVar1;
 
 uVar1 = *param_1;
 return (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7) + (uVar1 >> 6 & 0x3ff);
}



/* Function: union_type @ 001012d4 */

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



/* Function: union_array @ 001012fc */

int union_array(long param_1,int param_2)

{
 int iVar1;
 long lVar2;
 
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 }
 return iVar1;
}



/* Function: enum_type @ 00101324 */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 00101330 */

long enum_switch(uint param_1)

{
 long lVar1;
 
 if (param_1 < 4) {
 lVar1 = (long)*(char *)((long)&CSWTCH_62 + (ulong)param_1);
 }
 else {
 lVar1 = 0xffffff9d;
 }
 return lVar1;
}



/* Function: struct_func_ptr @ 00101354 */

void struct_func_ptr(undefined4 *param_1)

{
 /* WARNING: Could not recover jumptable at 0x00101360. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (**(code **)(param_1 + 2))(*param_1,0,0,0);
 return;
}



/* Function: linked_list @ 00101364 */

int linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 00101384 */

int doubly_linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 001013a4 */

int binary_tree_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 4)) {
 iVar1 = binary_tree_sum((int *)*(undefined8 *)(param_1 + 2));
 iVar2 = iVar2 + iVar1 + *param_1;
 }
 return iVar2;
}



/* Function: graph_traverse @ 001013ec */

int graph_traverse(long param_1)

{
 int iVar1;
 long lVar2;
 int *piVar3;
 
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < *(int *)(param_1 + 0x50); lVar2 = lVar2 + 1) {
 for (piVar3 = *(int **)(param_1 + lVar2 * 8); piVar3 != (int *)0x0;
 piVar3 = *(int **)(piVar3 + 2)) {
 iVar1 = iVar1 + *piVar3;
 }
 }
 return iVar1;
}



/* Function: test_composite_types @ 00101428 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_composite_types(void)

{
 undefined4 uVar1;
 ulong uVar2;
 ulong local_148;
 undefined4 local_140 [2];
 undefined8 local_138;
 undefined4 local_130 [2];
 undefined4 *local_128;
 undefined4 local_120 [2];
 code *local_118;
 undefined4 local_110 [2];
 undefined8 local_108;
 undefined4 local_100 [2];
 undefined8 local_f8;
 undefined8 uStack_f0;
 undefined8 local_e8;
 undefined4 local_e0;
 undefined8 local_d8;
 undefined8 uStack_d0;
 undefined8 local_c8;
 undefined4 local_c0 [2];
 undefined4 *local_b8;
 undefined4 local_b0 [2];
 undefined4 *local_a8;
 undefined4 local_a0 [2];
 undefined8 local_98;
 undefined4 local_90 [2];
 undefined4 *local_88;
 undefined8 uStack_80;
 undefined4 local_78 [2];
 undefined8 local_70;
 undefined4 *puStack_68;
 undefined4 *local_60;
 undefined8 local_58;
 undefined8 uStack_50;
 undefined8 uStack_48;
 undefined8 uStack_40;
 undefined8 local_38;
 undefined8 uStack_30;
 undefined8 uStack_28;
 undefined8 uStack_20;
 undefined8 local_18;
 undefined8 uStack_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_00102f44);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
  local_d8 = 0x100000001;
 uStack_d0 = 0x200000001;
 local_c8 = 0x200000002;
 uVar1 = struct_array((int *)&local_d8,2);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 local_140[0] = 0x14;
 local_128 = local_140;
 local_138 = 0;
 local_130[0] = 10;
 uVar1 = struct_with_ptr(local_130);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_148 = local_148 & 0xfff00000ffff0000 | 0x191d;
 uVar1 = struct_bitfields((uint *)&local_148);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 local_e8 = 0x140000000a;
 local_e0 = 0x1e;
 uVar1 = union_array((long)&local_e8,3);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 local_120[0] = 10;
 local_118 = (code *)process_int;
 struct_func_ptr(local_120);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",21);
 local_b8 = local_b0;
 local_a8 = local_a0;
 local_c0[0] = 10;
 local_b0[0] = 0x14;
 local_a0[0] = 0x1e;
 local_98 = 0;
 uVar1 = linked_list(local_c0);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",uVar1);
 local_90[0] = 10;
 local_88 = local_78;
 puStack_68 = local_90;
 uStack_80 = 0;
 local_78[0] = 0x14;
 local_70 = 0;
 uVar1 = doubly_linked_list(local_90);
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_100[0] = 100;
 local_f8 = 0;
 uStack_f0 = 0;
 uVar1 = binary_tree_sum(local_100);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_108 = 0;
 uVar2 = 1;
 local_110[0] = 1;
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
 graph_traverse((long)&local_60);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",0);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: __addtf3 @ 001016f0 */

float128 __addtf3(float128 param_1,float128 param_2)

{
 int iVar1;
 ulong uVar2;
 ulong uVar3;
 ulong uVar4;
 undefined1 auVar5 [16];
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
 undefined1 auVar27 [16];
 ulong uVar29;
 
 uVar11 = param_2._8_8_;
 uVar29 = param_2._0_8_;
 uVar28 = param_1._8_8_;
 uVar26 = param_1._0_8_;
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
 goto LAB_00101a10;
 }
 goto LAB_00101cc4;
 }
 goto LAB_0010196c;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 uVar20 = uVar19;
 goto LAB_00101b28;
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
 goto LAB_00101b28;
 }
 if (uVar16 != 0 || uVar23 != 0) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 goto LAB_00101bd4;
 }
LAB_00101d58:
 uVar22 = 0;
 uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
 goto LAB_001018a4;
 }
 uVar15 = uVar20 + 1;
 if ((uVar15 & 0x7ffe) == 0) {
 if (uVar20 != 0) {
 uVar8 = 0;
 uVar11 = 0;
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00101fe0;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101d58;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar8 = (uint)uVar11;
 if (uVar19 != 0x7fff) goto LAB_00102188;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102220;
 }
LAB_0010224c:
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00102190:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101bd4;
 }
LAB_00101fe0:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 }
 else {
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) goto LAB_0010224c;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101d58;
 }
 else {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101fe0;
LAB_00102188:
 if (uVar16 != 0 || uVar23 != 0) goto LAB_00102190;
 }
LAB_00102220:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 }
 goto LAB_00101bd4;
 }
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 goto LAB_0010198c;
 }
 goto LAB_00101f58;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101f58;
 uVar22 = uVar21 + uVar23;
 uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 if ((uVar25 >> 0x33 & 1) != 0) {
 uVar25 = uVar25 & 0xfff7ffffffffffff;
 uVar10 = 0;
 bVar6 = false;
 uVar15 = 1;
 goto LAB_0010183c;
 }
LAB_00101828:
 uVar17 = uVar22 | uVar25;
 goto LAB_0010182c;
 }
 if (uVar15 != 0x7fff) {
 uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 bVar6 = false;
 uVar10 = uVar21 + uVar23 >> 1 & 7;
 uVar25 = uVar17 >> 1;
 uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
 goto LAB_0010183c;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 != 0) {
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_00102230:
 uVar11 = 0x14;
 lVar18 = 0;
 goto LAB_00101a7c;
 }
 if (uVar10 == 0x800000) {
 if (lVar18 == 0) goto LAB_001021cc;
LAB_00102098:
 uVar11 = 0x14;
 lVar18 = 1;
 goto LAB_00101a7c;
 }
LAB_00101ef4:
 uVar14 = 0x14;
 if ((uVar13 & 0xc00000) == 0x400000) {
 uVar22 = 0xffffffffffffffff;
 uVar15 = 0x7ffe;
 bVar6 = false;
 uVar11 = 0x14;
 uVar25 = uVar22;
 goto joined_r0x00101f14;
 }
 goto LAB_00101a38;
 }
LAB_00101f84:
 uVar11 = 0x14;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 goto LAB_00101b28;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101d58;
 goto LAB_00101a04;
 }
 goto LAB_00101900;
 }
 uVar19 = uVar20;
 if (uVar20 != 0x7fff) goto LAB_0010196c;
 uVar14 = uVar12;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101cc4;
 uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
 uVar23 = uVar21;
 uVar16 = uVar24;
LAB_00101a10:
 uVar20 = 0x7fff;
 goto LAB_00101a18;
 }
 uVar16 = uVar16 | 0x8000000000000;
 if (uVar20 == 0x7fff) goto LAB_00101bb4;
LAB_00101900:
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
LAB_00101b28:
 uVar19 = uVar20;
 uVar22 = uVar10;
 uVar25 = uVar16;
 if ((uVar16 >> 0x33 & 1) == 0) goto LAB_0010196c;
 uVar15 = uVar20 + 1;
 if (uVar15 != 0x7fff) {
 bVar6 = false;
 uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
 uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
 uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
 goto LAB_0010183c;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0) goto LAB_00101f84;
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_00102230;
 if (uVar10 != 0x800000) goto LAB_00101ef4;
 if (lVar18 != 0) goto LAB_00102098;
LAB_001021cc:
 uVar22 = 0xffffffffffffffff;
 lVar18 = 0;
 uVar15 = 0x7ffe;
 uVar11 = 0x14;
 uVar25 = uVar22;
LAB_0010186c:
 uVar14 = (uint)uVar11;
 uVar12 = (uint)lVar18;
 if (uVar15 + 1 != 0x7fff) {
 uVar10 = uVar25 >> 3 & 0xffffffffffff;
 uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
 uVar14 = (uint)(uVar15 + 1) & 0x7fff;
 goto LAB_00101888;
 }
LAB_00101a38:
 uVar12 = (uint)lVar18;
 uVar13 = uVar13 & 0xc00000;
 if (uVar13 != 0) {
 if (uVar13 == 0x400000) {
 if (lVar9 != 0) goto LAB_00101a54;
 }
 else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00101a54:
 uVar22 = 0xffffffffffffffff;
 uVar11 = (ulong)(uVar14 | 0x14);
 uVar10 = 0x1fffffffffffffff;
 uVar20 = 0x7ffe;
 goto LAB_0010198c;
 }
 }
 uVar11 = (ulong)(uVar14 | 0x14);
 }
LAB_00101a7c:
 uVar22 = 0;
 uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
 goto LAB_00101a90;
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
 goto LAB_001017c4;
 }
 lVar9 = lVar18;
 if (uVar22 != 0 || uVar10 != 0) goto LAB_001017c4;
 uVar22 = 0;
 uVar20 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 uVar10 = 0;
 goto LAB_0010198c;
 }
 if (uVar20 == 0) {
 if (uVar24 != 0 || uVar21 != 0) {
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101f58;
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar25 >> 0x33 & 1) == 0) {
 if (uVar22 != 0 || uVar25 != 0) {
 uVar10 = 0;
 bVar6 = true;
 uVar15 = uVar20;
 goto LAB_0010183c;
 }
 goto LAB_00102030;
 }
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 uVar17 = uVar22 | uVar25;
 goto LAB_0010182c;
 }
 uVar22 = uVar23;
 uVar25 = uVar16;
 lVar18 = lVar9;
 if (uVar16 == 0 && uVar23 == 0) {
LAB_00102030:
 uVar10 = 0;
 uVar22 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 goto LAB_0010198c;
 }
LAB_00101f58:
 uVar10 = 0;
 uVar15 = 0;
 goto LAB_00101f60;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00101e98;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 if (uVar19 != 0x7fff) goto LAB_00101e68;
 }
LAB_001020e0:
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = (uint)uVar11;
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 == 0 && uVar21 == 0) {
LAB_0010215c:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 goto LAB_00101bd4;
 }
LAB_001020f8:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101bd4;
 }
 if (uVar24 != 0 || uVar21 != 0) goto LAB_00101e68;
 }
 else {
 if (uVar19 == 0x7fff) goto LAB_001020e0;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101e68:
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101bd4;
 }
 goto LAB_001020f8;
 }
LAB_00101e98:
 uVar11 = 0;
 if (uVar16 != 0 || uVar23 != 0) goto LAB_0010215c;
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
 goto LAB_00101a10;
 }
 goto LAB_00101cc4;
 }
 goto LAB_0010196c;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_001017bc;
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
 goto LAB_001017bc;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101d58;
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
LAB_00101bd4:
 if (uVar10 == 0 && uVar22 == 0) {
 uVar22 = 0;
 uVar14 = 0x7fff;
 uVar10 = 0;
 goto LAB_00101888;
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
 goto LAB_001017bc;
 }
 goto LAB_00101768;
 }
 uVar19 = uVar20;
 lVar9 = lVar18;
 if (uVar20 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101a04:
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar23 = uVar21;
 uVar16 = uVar24;
 goto LAB_00101a10;
 }
LAB_00101cc4:
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 uVar12 = uVar14;
 goto LAB_00101bd4;
 }
LAB_0010196c:
 uVar12 = (uint)lVar9;
 uVar17 = uVar22 | uVar25;
 uVar10 = uVar22 & 7;
 bVar6 = false;
 uVar15 = uVar19;
 lVar18 = lVar9;
 if (uVar19 == 0) goto joined_r0x0010197c;
LAB_0010183c:
 if (uVar10 == 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0;
 if (bVar6) {
LAB_00101f60:
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
joined_r0x00101f14:
 if (lVar18 == 0) {
LAB_00101b64:
 bVar7 = 0xfffffffffffffff7 < uVar22;
 uVar22 = uVar22 + 8;
 if (bVar7) {
 uVar25 = uVar25 + 1;
 }
 }
 }
 else if (uVar10 == 0x800000) {
 uVar11 = 0x10;
 if (lVar18 != 0) goto LAB_00101b64;
 }
 else {
 if (uVar10 != 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0x10;
 if (bVar6) {
 uVar11 = 0x18;
 }
 goto LAB_00101868;
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
LAB_00101868:
 uVar12 = (uint)lVar18;
 uVar20 = uVar15;
 uVar23 = uVar22;
 uVar16 = uVar25;
 lVar9 = lVar18;
 if (uVar10 != 0) goto LAB_0010186c;
LAB_00101a18:
 uVar10 = uVar16 >> 3;
 uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
 if (uVar20 == 0x7fff) goto LAB_00101bd4;
 }
 else {
 uVar16 = uVar16 | 0x8000000000000;
LAB_00101768:
 if (uVar20 == 0x7fff) {
LAB_00101bb4:
 lVar9 = lVar18;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101d58;
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101bd4;
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
LAB_001017bc:
 uVar10 = uVar25 & 0x7ffffffffffff;
 uVar20 = uVar19;
 if ((uVar25 >> 0x33 & 1) == 0) goto LAB_0010196c;
LAB_001017c4:
 if (uVar10 == 0) {
 uVar12 = (int)LZCOUNT(uVar22) + 0x34;
 if (uVar12 < 0x40) goto LAB_001017d0;
 uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
 uVar17 = 0;
 }
 else {
 uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_001017d0:
 uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
 uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
 }
 if ((long)(int)uVar12 < (long)uVar20) {
 uVar19 = uVar20 - (long)(int)uVar12;
 uVar22 = uVar17;
 uVar25 = uVar10 & 0xfff7ffffffffffff;
 goto LAB_0010196c;
 }
 iVar1 = uVar12 - (int)uVar20;
 uVar12 = iVar1 + 1;
 if ((int)uVar12 < 0x40) {
 uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
 uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
 goto LAB_00101828;
 }
 uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
 if (uVar12 == 0x40) {
 uVar22 = uVar17;
 }
 uVar25 = 0;
 uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
 uVar22 = uVar17;
LAB_0010182c:
 uVar12 = (uint)lVar9;
joined_r0x0010197c:
 if (uVar17 != 0) {
 uVar10 = uVar22 & 7;
 bVar6 = true;
 uVar15 = 0;
 lVar18 = lVar9;
 goto LAB_0010183c;
 }
 uVar22 = 0;
 uVar20 = 0;
 uVar11 = 0;
 uVar10 = 0;
 }
LAB_0010198c:
 uVar10 = uVar10 & 0xffffffffffff;
 uVar14 = (uint)uVar20 & 0x7fff;
 }
LAB_00101888:
 uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
 if ((int)uVar11 == 0) {
LAB_001018a4:
 return (float128){uVar22, uVar10, 0};
 }
LAB_00101a90:
 __sfp_handle_exceptions(uVar11);
 return (float128){uVar22, uVar10, 0};
}



/* Function: __multf3 @ 00102290 */

float128 __multf3(float128 param_1,float128 param_2)

{
 ulong uVar1;
 undefined1 auVar2 [16];
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
 undefined1 auVar31 [16];
 
 uVar21 = param_2._8_8_;
 uVar17 = param_2._0_8_;
 uVar11 = param_1._8_8_;
 uVar15 = param_1._0_8_;
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
 if (uVar11 < 0x3d) goto LAB_001026e8;
 uVar11 = 0;
 uVar19 = uVar15 << ((ulong)(iVar8 - 0x3d) & 0x3f);
 }
 else {
 lVar13 = LZCOUNT(uVar19);
 iVar8 = (int)lVar13 + -0xf;
LAB_001026e8:
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
 uVar4 = param_1._12_4_;
 uVar5 = param_2._12_4_;
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
 if (uVar21 < 0x3d) goto LAB_0010268c;
 uVar21 = uVar17 << ((ulong)(iVar8 - 0x3d) & 0x3f);
 uVar17 = 0;
 }
 else {
 lVar23 = LZCOUNT(uVar15);
 iVar8 = (int)lVar23 + -0xf;
LAB_0010268c:
 uVar21 = uVar17 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
 uVar17 = uVar17 << ((ulong)(iVar8 + 3) & 0x3f);
 }
 lVar20 = (lVar13 - lVar23) + -0x3fef;
 lVar23 = (lVar13 - lVar23) + -0x3fee;
 lVar12 = 0;
 }
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 if (uVar7 < 0xb) {
LAB_0010239c:
 uVar15 = uVar21;
 if (2 < uVar7) {
LAB_00102418:
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
 goto LAB_001023cc;
 }
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 lVar9 = lVar12;
 if ((uVar7 & 0x88) == 0) goto LAB_001024bc;
 }
LAB_0010245c:
 lVar12 = lVar9;
 uVar14 = uVar26;
 uVar17 = uVar25;
 uVar22 = uVar14;
 if (lVar12 == 2) {
LAB_001024ac:
 uVar4 = 0x7fff;
 uVar15 = 0;
 uVar11 = 0;
 uVar10 = uVar22;
 goto LAB_001023cc;
 }
 goto LAB_00102478;
 }
 if (uVar7 - 1 < 2) {
 if (lVar12 == 2) goto LAB_001024ac;
 goto LAB_001023b8;
 }
LAB_001024bc:
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
LAB_0010261c:
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
 if ((uVar17 & 7) != 0 || uVar11 != 0) goto LAB_00102804;
 if ((uVar15 >> 0x33 & 1) == 0) goto LAB_0010294c;
LAB_001029b8:
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
LAB_0010294c:
 uVar17 = 0;
 uVar4 = 0;
 uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
 uVar15 = uVar15 >> 3 & 0xffffffffffff;
 if (((uint)uVar18 >> 0xb & 1) == 0) goto LAB_001023cc;
 uVar6 = (ulong)(uVar5 | 8);
 }
 else {
 uVar15 = 0;
LAB_00102804:
 uVar18 = uVar18 & 0xc00000;
 if (uVar18 == 0x400000) {
 if (uVar22 == 0) {
LAB_001029ac:
 bVar3 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar3) {
 uVar15 = uVar15 + 1;
 }
 }
 }
 else if (uVar18 == 0x800000) {
 if (uVar22 != 0) goto LAB_001029ac;
 }
 else if (((uVar18 == 0) && ((uVar19 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
 uVar15 = uVar15 + 1;
 }
 if ((uVar15 >> 0x33 & 1) != 0) goto LAB_001029b8;
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
LAB_0010299c:
 bVar3 = 0xfffffffffffffff7 < uVar17;
 uVar17 = uVar17 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar19 == 0x800000) {
 if (uVar22 != 0) goto LAB_0010299c;
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
 goto LAB_001023cc;
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
 goto LAB_00102884;
 }
LAB_00102350:
 if (uVar7 != 0xb) {
LAB_00102358:
 uVar25 = uVar11;
 uVar21 = uVar19;
 uVar26 = uVar10;
 lVar9 = lVar24;
 goto LAB_0010245c;
 }
LAB_00102478:
 uVar22 = uVar14;
 if (lVar12 == 3) {
 uVar15 = uVar21 & 0xffffffffffff | 0x800000000000;
 uVar4 = 0x7fff;
 uVar11 = uVar17;
 uVar10 = uVar14;
 }
 else {
LAB_001023b8:
 lVar20 = lVar23;
 if (lVar12 != 1) goto LAB_0010261c;
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
 if (10 < uVar7) goto LAB_00102350;
 goto LAB_0010239c;
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
 goto LAB_001029f4;
 }
 goto LAB_00102418;
 }
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 uVar7 = uVar7 | 2;
 lVar23 = lVar13 + 0x8000;
 uVar17 = 0;
 if (uVar7 < 0xb) {
 uVar21 = 0;
 lVar12 = 2;
 goto LAB_0010239c;
 }
 lVar9 = 2;
 uVar15 = 0;
LAB_001029f4:
 lVar23 = lVar13 + 0x8000;
 if (uVar7 != 0xf) {
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 if (uVar7 != 0xb) goto LAB_00102358;
 goto LAB_0010245c;
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
LAB_001023cc:
 uVar15 = uVar15 | (ulong)(uVar4 | (int)uVar10 << 0xf) << 0x30;
 if ((int)uVar6 == 0) {
 return (float128){uVar11, uVar15, 0};
 }
LAB_00102884:
 __sfp_handle_exceptions(uVar6);
 return (float128){uVar11, uVar15, 0};
}



/* Function: __sfp_handle_exceptions @ 00102a90 */

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




/* Total functions decompiled: 68 */
