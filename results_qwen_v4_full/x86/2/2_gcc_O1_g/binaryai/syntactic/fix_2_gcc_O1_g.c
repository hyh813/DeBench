// Decompiled by BinaryAI
// SHA256: 9831b93508a2e295ae27efb7e1a80e79cc2e71f5e354fb02d585dece3057cca0

typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned long long ulonglong;
unsigned int DAT_00013008 = 0;
unsigned int DAT_000133bd = 0;
unsigned int DAT_0001342b = 0;
unsigned int DAT_00013430 = 0;
unsigned int DAT_00013526 = 0;

#define CONCAT44(hi,lo) (((ulonglong)(uint)(hi) << 32) | (uint)(lo))
#define ROUND(x) ((int)((x) + 0.5))



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_00011080 @ 0x11080
void FUN_00011080(unsigned int param_1)
{
 return;
}

// Function: FUN_00011090 @ 0x11090
void FUN_00011090(void)
{
 return;
}

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(void)
{
 return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(unsigned int param_1)
{
 return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(unsigned int param_1,const char *param_2,...)
{
 return;
}









// Function: double_value @ 0x11241
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: process_int @ 0x1124c
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: complex_callback @ 0x11259
_Bool complex_callback(int *param_1,int *param_2)
{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}

// Function: process_char @ 0x11272
int process_char(int param_1)
{
 if ((byte)((char)param_1 + 0xbfU) < 0x1a) {
 param_1 = param_1 + 0x20;
 }
 return param_1;
}

// Function: process_short @ 0x11287
short process_short(short param_1,short param_2)
{
 return param_2 + param_1;
}

// Function: process_long @ 0x11295
int process_long(int param_1)
{
 return param_1 * 2;
}

// Function: process_ll @ 0x112a0
unsigned long long process_ll(uint param_1,int param_2)
{
 return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_1 * param_2 * 2,
 (int)((ulonglong)param_1 * (ulonglong)param_1));
}

// Function: process_float @ 0x112b6
long double process_float(float param_1)
{
 return (long double)0.5 + (long double)1.5 * (long double)param_1;
}

// Function: process_double @ 0x112e0
long double process_double(double param_1)
{
 return (long double)0.1 + (long double)0.5 * (long double)param_1;
}

// Function: process_ld @ 0x1130a
long double process_ld(long double param_1)
{
 return (long double)1 + param_1 * param_1;
}

// Function: process_bool @ 0x11319
unsigned int process_bool(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = ~param_1 & 1;
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: const_param @ 0x11336
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x11344
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x11353
void test_data_types_l1(void)
{
 FUN_000110b0(&DAT_00013008);
 FUN_000110c0(1,"DT-L1-01 (process_char): %c\n",0x61);
 FUN_000110c0(1,"DT-L1-01 (process_char): %c\n",0x62);
 FUN_000110c0(1,"DT-L1-02 (process_short): %d\n",300);
 FUN_000110c0(1,"DT-L1-03 (process_int): %d\n",0xb);
 FUN_000110c0(1,"DT-L1-04 (process_long): %ld\n",200);
 FUN_000110c0(1,"DT-L1-05 (process_ll): %lld\n",10000,0);
 FUN_000110c0(1,"DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
 FUN_000110c0(1,"DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
 FUN_000110c0(1,"DT-L1-08 (process_ld): %.2Lf\n",0,0xa0000000,0x4002);
 FUN_000110c0(1,"DT-L1-09 (process_bool): %d\n",1);
 FUN_000110c0(1,"DT-L1-09 (process_bool): %d\n",0);
 FUN_000110c0(1,"DT-L1-09 (process_bool): %d\n",0);
 FUN_000110c0(1,"DT-L1-10 (const_param): %d\n",0xf);
 FUN_000110c0(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x1149e
int array_1d_stack(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 piVar1 = param_1 + param_2;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 }
 return iVar2;
}

// Function: array_string @ 0x114cb
int array_string(char *param_1)
{
 int iVar1;
 if (*param_1 != '\0') {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 } while (param_1[iVar1] != '\0');
 return iVar1;
 }
 return 0;
}

// Function: array_2d_stack @ 0x114ed
int array_2d_stack(int *param_1)
{
 int *piVar1;
 int iVar2;
 piVar1 = param_1 + 0x6e;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 0xb;
 } while (param_1 != piVar1);
 return iVar2;
}

// Function: array_3d @ 0x1150e
int array_3d(int param_1)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 piVar2 = (int *)(param_1 + 100);
 iVar1 = 0;
 do {
 piVar3 = piVar2 + -0x19;
 do {
 iVar1 = iVar1 + *piVar3 + piVar3[1] + piVar3[2] + piVar3[3] + piVar3[4];
 piVar3 = piVar3 + 5;
 } while (piVar3 != piVar2);
 piVar2 = piVar2 + 0x19;
 } while (piVar2 != (int *)(param_1 + 600));
 return iVar1;
}

// Function: array_vla @ 0x11546
int array_vla(int param_1,int *param_2)
{
 int *piVar1;
 int iVar2;
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 piVar1 = param_2 + param_1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_2;
 param_2 = param_2 + 1;
 } while (param_2 != piVar1);
 }
 return iVar2;
}

// Function: array_pointer @ 0x11573
int array_pointer(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 piVar1 = param_1 + param_2 * 10;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 10;
 } while (param_1 != piVar1);
 }
 return iVar2;
}

// Function: pointer_array @ 0x115a3
int pointer_array(int param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar4 = 10;
 if (param_2 < 0xb) {
 iVar4 = param_2;
 }
 if (param_2 < 1) {
 iVar3 = 0;
 }
 else {
 iVar2 = 0;
 iVar3 = 0;
 do {
 piVar1 = *(int **)(param_1 + iVar2 * 4);
 if (piVar1 != (int *)0x0) {
 iVar3 = iVar3 + *piVar1;
 }
 iVar2 = iVar2 + 1;
 } while (iVar2 < iVar4);
 }
 return iVar3;
}

// Function: array_complex_index @ 0x115e7
unsigned int array_complex_index(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)
{
 unsigned int uVar1;
 if (((int)(param_4 | param_5) < 0) || (param_2 <= (int)param_4)) {
 uVar1 = 0xffffffff;
 }
 else if ((int)param_5 < param_3) {
 uVar1 = *(unsigned int *)(param_1 + (param_2 * param_5 + param_4) * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: array_oob @ 0x11624
int array_oob(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (param_2 < 0) {
 iVar2 = 0;
 }
 else {
 piVar1 = param_1 + param_2 + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 }
 return iVar2;
}

// Function: test_array_types @ 0x11652
void test_array_types(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int *puVar3;
 unsigned int uVar4;
 int iVar5;
 int iVar6;
 unsigned int *puVar7;
 char *puVar8;
 int in_GS_OFFSET;
 unsigned int local_518;
 unsigned int local_514;
 unsigned int local_510;
 unsigned int local_50c;
 unsigned int local_508;
 unsigned int local_504;
 unsigned int local_500;
 unsigned int local_4fc;
 unsigned int local_4f8;
 unsigned int local_4f4;
 unsigned int local_4f0;
 unsigned int *local_4ec;
 unsigned int *local_4e8;
 unsigned int *local_4e4;
 unsigned int auStack_4e0 [7];
 int aiStack_4c4 [20];
 unsigned int local_474 [10];
 unsigned int local_44c;
 unsigned int local_424;
 unsigned int local_3fc;
 unsigned int local_3d4;
 char local_3ac [400];
 char local_21c [100];
 unsigned int local_1b8 [100];
 unsigned int local_26;
 unsigned short local_22;
 int local_20;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000110b0(&DAT_000133bd);
 local_500 = 1;
 local_4fc = 2;
 local_4f8 = 3;
 local_4f4 = 4;
 local_4f0 = 5;
 uVar1 = array_1d_stack(&local_500,5);
 FUN_000110c0(1,"ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_26 = 0x6c6c6568;
 local_22 = 0x6f;
 uVar1 = array_string(&local_26);
 FUN_000110c0(1,"ARR-L1-02 (array_string): %d\n",uVar1);
 puVar8 = local_3ac;
 iVar5 = 0;
 do {
 iVar2 = 0;
 do {
 iVar6 = 0;
 if (iVar5 == iVar2) {
 iVar6 = iVar2;
 }
 *(int *)(puVar8 + iVar2 * 4) = iVar6;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 10);
 iVar5 = iVar5 + 1;
 puVar8 = puVar8 + 0x28;
 } while (iVar5 != 10);
 uVar1 = array_2d_stack(local_3ac);
 FUN_000110c0(1,"ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 puVar7 = local_1b8;
 do {
 puVar3 = puVar7 + -0x19;
 do {
 *puVar3 = 1;
 puVar3[1] = 1;
 puVar3[2] = 1;
 puVar3[3] = 1;
 puVar3[4] = 1;
 puVar3 = puVar3 + 5;
 } while (puVar7 != puVar3);
 puVar7 = puVar7 + 0x19;
 } while (puVar7 != (unsigned int *)0);
 uVar1 = array_3d(local_21c);
 FUN_000110c0(1,"ARR-L1-04 (array_3d): %d\n",uVar1);
 local_50c = 10;
 local_508 = 0x14;
 local_504 = 0x1e;
 uVar1 = array_vla(3,&local_50c);
 FUN_000110c0(1,"ARR-L2-01 (array_vla): %d\n",uVar1);
 local_474[0] = 0;
 local_44c = 10;
 local_424 = 0x14;
 local_3fc = 0x1e;
 local_3d4 = 0x28;
 uVar1 = array_pointer(local_474,5);
 FUN_000110c0(1,"ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_518 = 10;
 local_514 = 0x14;
 local_510 = 0x1e;
 uVar4 = 0;
 do {
 *(unsigned int *)((int)auStack_4e0 + uVar4) = 0;
 uVar4 = uVar4 + 4;
 } while (uVar4 < 0x1c);
 local_4ec = &local_518;
 local_4e8 = &local_514;
 local_4e4 = &local_510;
 uVar1 = pointer_array(&local_4ec,3);
 FUN_000110c0(1,"ARR-L2-03 (pointer_array): %d\n",uVar1);
 iVar5 = 0;
 do {
 aiStack_4c4[iVar5] = iVar5;
 iVar5 = iVar5 + 1;
 } while (iVar5 != 0x14);
 FUN_000110c0(1,"ARR-L2-04 (array_complex_index): %d\n",aiStack_4c4[17]);
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: ptr_single @ 0x1191f
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x1192d
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x1193d
int ptr_triple(unsigned int *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x1194f
int ptr_increment(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4);
 iVar1 = iVar1 + 1;
 } while (param_2 != iVar1);
 }
 return iVar2;
}

// Function: ptr_offset @ 0x1197f
unsigned int ptr_offset(int param_1,int param_2)
{
 return *(unsigned int *)(param_1 + param_2 * 4);
}

// Function: ptr_diff @ 0x1198f
int ptr_diff(int param_1,int param_2)
{
 return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x1199f
int ptr_void(int *param_1,int param_2)
{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 return (int)*(char *)param_1;
 }
 return -1;
}

// Function: ptr_const @ 0x119c5
int ptr_const(int *param_1)
{
 return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x119d2
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x119e2
void ptr_func_simple(void *param_1,unsigned int param_2)
{
 ((void (*)(unsigned int))param_1)(param_2);
 return;
}

// Function: ptr_func_complex @ 0x119f5
void ptr_func_complex(void *param_1,unsigned int param_2)
{
 int in_GS_OFFSET;
 char *local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = &DAT_0001342b;
 local_14 = 0;
 ((void (*)(unsigned int,char **))param_1)(param_2,&local_18);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: ptr_cast @ 0x11a4b
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x11a56
unsigned int opaque_handle_create(unsigned int param_1)
{
 return param_1;
}

// Function: opaque_handle_op @ 0x11a5f
int opaque_handle_op(int param_1)
{
 return param_1 * 2;
}

// Function: test_pointer_types @ 0x11a6a
void test_pointer_types(void)
{
 unsigned int uVar1;
 int in_GS_OFFSET;
 unsigned int local_34;
 unsigned int *local_30;
 unsigned int **local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000110b0(&DAT_00013430);
 FUN_000110c0(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 FUN_000110c0(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 local_34 = 5;
 local_30 = &local_34;
 local_2c = &local_30;
 uVar1 = ptr_triple(&local_2c);
 FUN_000110c0(1,"PTR-L2-03 (ptr_triple): %d\n",uVar1);
 local_24 = 1;
 local_20 = 2;
 local_1c = 3;
 local_18 = 4;
 local_14 = 5;
 uVar1 = ptr_increment(&local_24,5);
 FUN_000110c0(1,"PTR-L2-04 (ptr_increment): %d\n",uVar1);
 FUN_000110c0(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 FUN_000110c0(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 FUN_000110c0(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 FUN_000110c0(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 FUN_000110c0(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 FUN_000110c0(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 ptr_func_simple(double_value,5);
 uVar1 = 10;
 FUN_000110c0(1,"PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
 local_28 = 5;
 ptr_func_complex(complex_callback,&local_28);
 uVar1 = local_28;
 FUN_000110c0(1,"PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 FUN_000110c0(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 FUN_000110c0(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: struct_simple @ 0x11c3d
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x11c4e
int struct_array(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 piVar1 = param_1 + param_2 * 3;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + param_1[1] + *param_1 + param_1[2];
 param_1 = param_1 + 3;
 } while (param_1 != piVar1);
 }
 return iVar2;
}

// Function: struct_nested @ 0x11c88
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x11c96
int struct_deep(int param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x11ca5
int struct_with_ptr(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 if ((int *)param_1[1] != (int *)0x0) {
 iVar1 = *(int *)param_1[1];
 }
 return *param_1 + iVar1;
}

// Function: struct_bitfields @ 0x11cc0
short struct_bitfields(unsigned short *param_1)
{
 unsigned char bVar1;
 bVar1 = *(unsigned char *)param_1;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6);
}

// Function: union_type @ 0x11cf0
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

// Function: union_array @ 0x11d3e
int union_array(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar2 = 0;
 }
 else {
 piVar1 = param_1 + param_2;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 }
 return iVar2;
}

// Function: enum_type @ 0x11d6b
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x11d79
uint enum_switch(uint param_1)
{
 uint uVar1;
 if (param_1 == 2) {
 return 0x32;
 }
 if (param_1 < 3) {
 return -(uint)(param_1 != 0) & 100;
 }
 uVar1 = 0xffffff9d;
 if (param_1 == 3) {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x11daa
void struct_func_ptr(unsigned int *param_1)
{
 ((void (*)(unsigned int))param_1[1])(*param_1);
 return;
}

// Function: linked_list @ 0x11dbe
int linked_list(int *param_1)
{
 int iVar1;
 if (param_1 == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = (int *)param_1[1];
 } while (param_1 != (int *)0x0);
 }
 return iVar1;
}

// Function: doubly_linked_list @ 0x11de2
int doubly_linked_list(int *param_1)
{
 int iVar1;
 if (param_1 == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = (int *)param_1[1];
 } while (param_1 != (int *)0x0);
 }
 return iVar1;
}

// Function: binary_tree_sum @ 0x11e06
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar2 = 0;
 if (param_1 != (int *)0x0) {
 iVar3 = binary_tree_sum((int *)param_1[1]);
 iVar1 = *param_1;
 iVar2 = binary_tree_sum((int *)param_1[2]);
 iVar2 = iVar2 + iVar3 + iVar1;
 }
 return iVar2;
}

// Function: binary_tree @ 0x11e41
void binary_tree(unsigned int param_1)
{
 binary_tree_sum(param_1);
 return;
}

// Function: graph_traverse @ 0x11e55
int graph_traverse(int **param_1)
{
 int **ppiVar1;
 int *piVar2;
 int iVar3;
 if ((int)param_1[10] < 1) {
 iVar3 = 0;
 }
 else {
 ppiVar1 = param_1 + (int)param_1[10];
 iVar3 = 0;
 do {
 for (piVar2 = *param_1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
 iVar3 = iVar3 + *piVar2;
 }
 param_1 = param_1 + 1;
 } while (param_1 != ppiVar1);
 }
 return iVar3;
}

// Function: test_composite_types @ 0x11e90
void test_composite_types(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int *puVar3;
 int in_GS_OFFSET;
 unsigned char bVar4;
 unsigned int local_c4;
 unsigned int local_c0;
 unsigned int local_bc;
 unsigned int *local_b8;
 unsigned short local_b4 [2];
 uint local_b0;
 unsigned int local_ac;
 void *local_a8;
 unsigned int local_a4;
 unsigned int local_a0;
 unsigned int local_9c;
 unsigned int local_98;
 unsigned int local_94;
 unsigned int local_90;
 unsigned int local_8c;
 unsigned int local_88;
 unsigned int local_84;
 unsigned int local_80;
 unsigned int local_7c;
 unsigned int local_78;
 unsigned int local_74;
 unsigned int local_70;
 unsigned int local_6c;
 unsigned int *local_68;
 unsigned int local_64;
 unsigned int *local_60;
 unsigned int local_5c;
 unsigned int local_58;
 unsigned int local_54;
 unsigned int *local_50;
 unsigned int local_4c;
 unsigned int local_48;
 unsigned int local_44;
 unsigned int *local_40;
 unsigned int *local_3c;
 unsigned int local_38 [9];
 unsigned int local_14;
 int local_10;
 bVar4 = 0;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000110b0(&DAT_00013526);
 FUN_000110c0(1,"CMP-L2-01 (struct_simple): %d\n",6);
 local_84 = 1;
 local_80 = 1;
 local_7c = 1;
 local_78 = 2;
 local_74 = 2;
 local_70 = 2;
 uVar1 = struct_array(&local_84,2);
 FUN_000110c0(1,"CMP-L2-02 (struct_array): %d\n",uVar1);
 FUN_000110c0(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 FUN_000110c0(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 local_c4 = 0x14;
 local_c0 = 0;
 local_bc = 10;
 local_b8 = &local_c4;
 uVar1 = struct_with_ptr(&local_bc);
 FUN_000110c0(1,"CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_b4[0] = 0x191d;
 local_b0 = local_b0 & 0xfff00000;
 uVar1 = struct_bitfields(local_b4);
 FUN_000110c0(1,"CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 FUN_000110c0(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 local_90 = 10;
 local_8c = 0x14;
 local_88 = 0x1e;
 uVar1 = union_array(&local_90,3);
 FUN_000110c0(1,"CMP-L2-08 (union_array): %d\n",uVar1);
 FUN_000110c0(1,"CMP-L2-09 (enum_type): %d\n",10);
 FUN_000110c0(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 local_ac = 10;
 local_a8 = process_int;
 struct_func_ptr(&local_ac);
 uVar1 = 21;
 FUN_000110c0(1,"CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
 local_6c = 10;
 local_68 = &local_64;
 local_64 = 0x14;
 local_60 = &local_5c;
 local_5c = 0x1e;
 local_58 = 0;
 uVar1 = linked_list(&local_6c);
 FUN_000110c0(1,"CMP-L2-12 (linked_list): %d\n",uVar1);
 local_54 = 10;
 local_40 = &local_54;
 local_50 = &local_48;
 local_4c = 0;
 local_48 = 0x14;
 local_44 = 0;
 uVar1 = doubly_linked_list(local_40);
 FUN_000110c0(1,"CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_9c = 100;
 local_98 = 0;
 local_94 = 0;
 uVar1 = binary_tree_sum(&local_9c);
 FUN_000110c0(1,"CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_a4 = 1;
 local_a0 = 0;
 puVar3 = local_38;
 for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar3 = 0;
 puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
 }
 local_3c = &local_a4;
 local_14 = 2;
 uVar1 = graph_traverse(&local_3c);
 FUN_000110c0(1,"CMP-L2-15 (graph_traverse): %d\n",uVar1);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: main @ 0x121e6
unsigned int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}







