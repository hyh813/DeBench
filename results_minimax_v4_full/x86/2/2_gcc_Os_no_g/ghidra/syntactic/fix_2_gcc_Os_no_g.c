/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/2/2_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */


/* Data declarations */
extern int DAT_00013008;
extern int DAT_00013173;
extern int DAT_00013289;
extern int DAT_00013422;
extern int DAT_0001360c;
extern int DAT_00013620;
extern int DAT_00013638;
extern int DAT_00013284;


/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 return;
}



/* Function: main @ 000110d0 */

int main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001112c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011130 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011269 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001126d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: double_value @ 00011271 */

int double_value(int param_1)

{
 return param_1 * 2;
}



/* Function: process_int @ 0001127f */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: complex_callback @ 0001128e */

_Bool complex_callback(int *param_1,int *param_2)

{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}



/* Function: process_char @ 000112a9 */

int process_char(int param_1)

{
 int iVar1;
 
 iVar1 = param_1 + 0x20;
 if (0x19 < (unsigned char)((char)param_1 + 0xbfU)) {
 iVar1 = param_1;
 }
 return iVar1;
}



/* Function: process_short @ 000112c4 */

int process_short(int param_1,int param_2)

{
 return param_2 + param_1;
}



/* Function: process_long @ 000112d3 */

int process_long(int param_1)

{
 return param_1 * 2;
}



/* Function: process_ll @ 000112e1 */

long long process_ll(unsigned int param_1,int param_2)

{
 return CONCAT44((int)((unsigned long long)param_1 * (unsigned long long)param_1 >> 0x20) + param_2 * param_1 * 2,
 (int)((unsigned long long)param_1 * (unsigned long long)param_1));
}



/* Function: process_float @ 000112fa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

long double process_float(float param_1)

{
 return (long double)0.5 + (long double)1.5 * (long double)param_1;
}



/* Function: process_double @ 00011322 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

long double process_double(double param_1)

{
 return (long double)0.1 + (long double)0.5 * (long double)param_1;
}



/* Function: process_ld @ 0001134c */

long double process_ld(long double param_1)

{
 return (long double)1 + param_1 * param_1;
}



/* Function: process__Bool @ 0001135e */

unsigned int process__Bool(unsigned int param_1)

{
 unsigned int uVar1;
 
 uVar1 = 0;
 if (0 < (int)param_1) {
 uVar1 = ~param_1 & 1;
 }
 return uVar1;
}



/* Function: const_param @ 0001137a */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 0001138b */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 0001139d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_data_types_l1(void)

{
 puts(&DAT_00013008);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000,0);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",0,0xa0000000,0x4002);
 __printf_chk(1,"DT-L1-09 (process__Bool): %d\n",1);
 __printf_chk(1,"DT-L1-09 (process__Bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process__Bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 000114ec */

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



/* Function: array_string @ 00011509 */

void array_string(int param_1)

{
 int iVar1;
 
 for (iVar1 = 0; *(char *)(param_1 + iVar1) != '\0'; iVar1 = iVar1 + 1) {
 }
 return;
}



/* Function: array_2d_stack @ 00011520 */

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



/* Function: array_3d @ 0001153f */

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



/* Function: array_vla @ 00011571 */

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



/* Function: array_pointer @ 0001158e */

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



/* Function: pointer_array @ 000115b0 */

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



/* Function: array_complex_index @ 000115e1 */

int array_complex_index(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
 int uVar1;
 
 uVar1 = 0xffffffff;
 if (((-1 < (int)(param_4 | param_5)) && ((int)param_4 < param_2)) && ((int)param_5 < param_3)) {
 uVar1 = *(int *)(param_1 + (param_2 * param_5 + param_4) * 4);
 }
 return uVar1;
}



/* Function: array_oob @ 00011615 */

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



/* Function: test_array_types @ 00011632 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_array_types(void)

{
 int uVar1;
 int iVar2;
 int *puVar3;
 int iVar4;
 char *puVar5;
 int *puVar6;
 int iVar7;
 int in_GS_OFFSET;
 unsigned char bVar8;
 int local_518;
 int local_514;
 int local_510;
 int local_50c;
 int local_508;
 int local_504;
 int local_500 [5];
 int *local_4ec;
 int *local_4e8;
 int *local_4e4;
 int local_4e0 [7];
 int aiStack_4c4 [20];
 int local_474 [10];
 int local_44c;
 int local_424;
 int local_3fc;
 int local_3d4;
 char local_3ac [400];
 int local_21c [125];
 char local_28 [2];
 int local_26;
 short local_22;
 int local_20;
 int uStack_14;
 
 bVar8 = 0;
 uStack_14 = 0x11647;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013173);
 puVar6 = &DAT_0001360c;
 puVar3 = local_500;
 for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
 *puVar3 = *puVar6;
 puVar6 = puVar6 + (unsigned int)bVar8 * -2 + 1;
 puVar3 = puVar3 + (unsigned int)bVar8 * -2 + 1;
 }
 uVar1 = array_1d_stack(local_500,5);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_26 = 0x6c6c6568;
 local_22 = 0x6f;
 uVar1 = array_string(&local_26);
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar1);
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
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",uVar1);
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
 } while ((int *)local_28 != puVar6);
 uVar1 = array_3d(local_21c);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",uVar1);
 local_50c = 10;
 local_508 = 0x14;
 local_504 = 0x1e;
 uVar1 = array_vla(3,&local_50c);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",uVar1);
 local_474[0] = 0;
 local_44c = 10;
 local_424 = 0x14;
 local_3fc = 0x1e;
 local_3d4 = 0x28;
 uVar1 = array_pointer(local_474,5);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",uVar1);
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
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",uVar1);
 iVar4 = 0;
 do {
 aiStack_4c4[iVar4] = iVar4;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x14);
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",aiStack_4c4[0x11],0x14);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: ptr_single @ 000118af */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 000118c0 */

int ptr_double(int *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 000118d3 */

int ptr_triple(int *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 000118e6 */

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



/* Function: ptr_offset @ 00011903 */

int ptr_offset(int param_1,int param_2)

{
 return *(int *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 00011915 */

int ptr_diff(int param_1,int param_2)

{
 return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 00011927 */

int ptr_void(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 0) {
 iVar1 = *param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 1) {
 iVar1 = (int)(char)*param_1;
 }
 }
 return iVar1;
}



/* Function: ptr_const @ 00011947 */

int ptr_const(int *param_1)

{
 return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 00011957 */

void ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return;
}



/* Function: ptr_func_simple @ 0001196a */

void ptr_func_simple(void (*func_ptr)(void))

{
 func_ptr();
 return;
}



/* Function: ptr_func_complex @ 0001197d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void ptr_func_complex(int (*param_1)(int *, int *), int param_2)

{
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 0;
 local_18 = 0;
 (*param_1)(&param_2,&local_18);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: ptr_cast @ 000119ca */

int ptr_cast(int *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 000119d8 */

int opaque_handle_create(int param_1)

{
 return param_1;
}



/* Function: opaque_handle_op @ 000119e4 */

int opaque_handle_op(int param_1)

{
 return param_1 * 2;
}



/* Function: test_pointer_types @ 000119f2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_pointer_types(void)

{
 int uVar1;
 int iVar2;
 int *puVar3;
 int *puVar4;
 int in_GS_OFFSET;
 unsigned char bVar5;
 int local_44;
 int *local_40;
 int **local_3c;
 int local_38;
 int local_34 [5];
 int local_20;
 int uStack_14;
 
 bVar5 = 0;
 uStack_14 = 0x11a04;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013289);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 local_40 = &local_44;
 local_44 = 5;
 local_3c = &local_40;
 uVar1 = ptr_triple(&local_3c);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",uVar1);
 puVar3 = &DAT_0001360c;
 puVar4 = local_34;
 for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar4 = *puVar3;
 puVar3 = puVar3 + (unsigned int)bVar5 * -2 + 1;
 puVar4 = puVar4 + (unsigned int)bVar5 * -2 + 1;
 }
 uVar1 = ptr_increment(local_34,5);
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 ptr_func_simple((void (*)(void))double_value);
 ptr_func_complex(complex_callback,&local_38);
 uVar1 = double_value(10);
 uVar1 = local_38;
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: struct_simple @ 00011ba4 */

int struct_simple(int *param_1)

{
 return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00011bb8 */

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



/* Function: struct_nested @ 00011be1 */

int struct_nested(int *param_1)

{
 return param_1[3] + *param_1;
}



/* Function: struct_deep @ 00011bf2 */

int struct_deep(int param_1)

{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 00011c04 */

int struct_with_ptr(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if ((int *)param_1[1] != (int *)0x0) {
 iVar1 = *(int *)param_1[1];
 }
 return *param_1 + iVar1;
}



/* Function: struct_bitfields @ 00011c1f */

int struct_bitfields(unsigned int *param_1)

{
 unsigned char bVar1;
 
 bVar1 = (unsigned char)*param_1;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6 & 0x3ff);
}



/* Function: union_type @ 00011c50 */

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



/* Function: union_array @ 00011c8e */

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



/* Function: enum_type @ 00011cab */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Switch case table for enum_switch */
static const char CSWTCH_78[4] = {0, 10, 20, 30};

/* Function: enum_switch @ 00011cb8 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

int enum_switch(unsigned int param_1)

{
 int iVar1;
 
 iVar1 = -99;
 if (param_1 < 4) {
 iVar1 = (int)*(char *)((int)&CSWTCH_78 + param_1);
 }
 return iVar1;
}



/* Function: struct_func_ptr @ 00011ce1 */

int struct_func_ptr(int param_1)

{
 /* WARNING: Could not recover jumptable at 0x00011cf4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (***(int (**)(void))(param_1 + 4))();
 return 0;
}



/* Function: linked_list @ 00011cf6 */

int linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 00011d11 */

int doubly_linked_list(int *param_1)

{
 int iVar1;
 
 iVar1 = 0;
 for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
 iVar1 = iVar1 + *param_1;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 00011d2c */

int binary_tree_sum(int *param_1)

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



/* Function: graph_traverse @ 00011d64 */

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



/* Function: test_composite_types @ 00011d92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_composite_types(void)

{
 int uVar1;
 int iVar2;
 int *puVar3;
 int *puVar4;
 int in_GS_OFFSET;
 unsigned char bVar5;
 int local_d4;
 int local_d0;
 int local_cc;
 int *local_c8;
 short local_c4 [2];
 unsigned int local_c0;
 int local_bc;
 void (*local_b8)(void);
 int local_b4;
 int local_b0;
 int local_ac;
 int local_a8;
 int local_a4;
 int local_a0 [3];
 int local_94 [6];
 int local_7c;
 int *local_78;
 int local_74;
 int *local_70;
 int local_6c;
 int local_68;
 int local_64;
 int *local_60;
 int local_5c;
 int local_58;
 int local_54;
 int *local_50;
 int *local_4c;
 int local_48 [9];
 int local_24;
 int local_20;
 int uStack_14;
 
 bVar5 = 0;
 uStack_14 = 0x11da7;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013422);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
 puVar3 = &DAT_00013620;
 puVar4 = local_94;
 for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar4 = *puVar3;
 puVar3 = puVar3 + (unsigned int)bVar5 * -2 + 1;
 puVar4 = puVar4 + (unsigned int)bVar5 * -2 + 1;
 }
 uVar1 = struct_array(local_94,2);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 local_c8 = &local_d4;
 local_d4 = 0x14;
 local_d0 = 0;
 local_cc = 10;
 uVar1 = struct_with_ptr(&local_cc);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_c0 = local_c0 & 0xfff00000;
 local_c4[0] = 0x191d;
 uVar1 = struct_bitfields(local_c4);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 puVar3 = &DAT_00013638;
 puVar4 = local_a0;
 for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar4 = *puVar3;
 puVar3 = puVar3 + (unsigned int)bVar5 * -2 + 1;
 puVar4 = puVar4 + (unsigned int)bVar5 * -2 + 1;
 }
 uVar1 = union_array(local_a0,3);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 local_b8 = process_int;
 local_bc = 10;
 uVar1 = struct_func_ptr(&local_bc);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
 local_78 = &local_74;
 local_7c = 10;
 local_70 = &local_6c;
 local_74 = 0x14;
 local_6c = 0x1e;
 local_68 = 0;
 uVar1 = linked_list(&local_7c);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",uVar1);
 local_60 = &local_58;
 local_50 = &local_64;
 local_64 = 10;
 local_5c = 0;
 local_58 = 0x14;
 local_54 = 0;
 uVar1 = doubly_linked_list(local_50);
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_ac = 100;
 local_a8 = 0;
 local_a4 = 0;
 uVar1 = binary_tree_sum(&local_ac);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",uVar1);
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
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",uVar1);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: __x86.get_pc_thunk.ax @ 00012091 */

/* WARNING: This is an inlined function */

int __x86_get_pc_thunk_ax(void)

{
 int unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00012095 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 000120a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 71 */
