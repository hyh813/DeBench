// Decompiled by BinaryAI
// SHA256: 4fc6f7f9b562c18671b12fbd36f6fa2ee21462a33452c85e5e89f763157d2b48

typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned long long ulonglong;

typedef void (*func_ptr_void)(void);
typedef void (*func_ptr_uint_charpp)(unsigned int, char **);

extern int DAT_00013008;
extern int DAT_000133bd;
extern int DAT_00013430;
extern int DAT_00013526;
extern char DAT_0001342b;
extern int CSWTCH_75;
extern int stack0x0000003c;
extern int stack0x00000004;

// Data definitions
int DAT_00013008 = 0;
int DAT_000133bd = 0;
int DAT_00013430 = 0;
int DAT_00013526 = 0;
char DAT_0001342b = 0;
int CSWTCH_75 = 0;
int stack0x0000003c = 0;
int stack0x00000004 = 0;

// Helper function definitions
void __stack_chk_fail_local(void) { return; }
float ROUND(float x) { return x; }

// Function declarations

void FUN_000110b0(int);
void FUN_000110c0(int, const char *, ...);
void FUN_00011090(int, unsigned int, void *, int, int, unsigned int, char *);
void FUN_00011080(int);
void FUN_000110a0(void);
void test_data_types_l1(void);
void test_array_types(void);
void test_pointer_types(void);
void test_composite_types(void);
unsigned int main(void);






// Function: FUN_00011080 @ 0x11080
void FUN_00011080(int unaff_EBX)
{
 ((void (*)(void))(*(void **)(unaff_EBX + 0x20)))();
 return;
}

// Function: FUN_00011090 @ 0x11090
void FUN_00011090(int unaff_EBX, unsigned int param_2, void *param_3, int param_4, int param_5, unsigned int param_6, char *param_7)
{
 ((void (*)(void))(*(void **)(unaff_EBX + 0xc)))();
 return;
}

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(void)
{
 return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(int unaff_EBX)
{
 ((void (*)(void))(*(void **)(unaff_EBX + 0x14)))();
 return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(int fd, const char *format, ...)
{
 return;
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







// Function: process_char @ 0x11280
int process_char(int param_1)
{
 if ((byte)((char)param_1 + 0xbfU) < 0x1a) {
 param_1 = param_1 + 0x20;
 }
 return param_1;
}

// Function: process_short @ 0x112a0
short process_short(short param_1,short param_2)
{
 return param_2 + param_1;
}

// Function: process_int @ 0x112b0
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: process_long @ 0x112c0
int process_long(int param_1)
{
 return param_1 * 2;
}

// Function: process_ll @ 0x112d0
unsigned long long process_ll(uint param_1,int param_2)
{
 unsigned long long result = (unsigned long long)param_1 * (unsigned long long)param_1;
 return result + (unsigned long long)param_2 * param_1 * 2;
}

// Function: process_float @ 0x112f0
long double process_float(float param_1)
{
 return (long double)0.5 + (long double)1.5 * (long double)param_1;
}

// Function: process_double @ 0x11320
long double process_double(double param_1)
{
 return (long double)0.1 + (long double)0.5 * (long double)param_1;
}

// Function: process_ld @ 0x11350
long double process_ld(long double param_1)
{
 return (long double)1 + param_1 * param_1;
}

// Function: process_bool @ 0x11360
unsigned int process_bool(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = ~param_1 & 1;
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: const_param @ 0x11380
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x11390
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x113a0
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

// Function: array_1d_stack @ 0x114f0
int array_1d_stack(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (0 < param_2) {
 piVar1 = param_1 + param_2;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}

// Function: array_string @ 0x11520
void array_string(char *param_1)
{
 int iVar1;
 iVar1 = 0;
 if (*param_1 != '\0') {
 do {
 iVar1 = iVar1 + 1;
 } while (param_1[iVar1] != '\0');
 return;
 }
 return;
}

// Function: array_2d_stack @ 0x11550
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

// Function: array_3d @ 0x11570
int array_3d(int param_1)
{
 int *piVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 iVar2 = 0;
 piVar3 = (int *)(param_1 + 100);
 do {
 piVar1 = piVar3 + -0x19;
 do {
 piVar4 = piVar1;
 iVar2 = iVar2 + *piVar4 + piVar4[1] + piVar4[2] + piVar4[3] + piVar4[4];
 piVar1 = piVar4 + 5;
 } while (piVar4 + 5 != piVar3);
 piVar3 = piVar4 + 0x1e;
 } while (piVar3 != (int *)(param_1 + 600));
 return iVar2;
}

// Function: array_vla @ 0x115b0
int array_vla(int param_1,int *param_2)
{
 int *piVar1;
 int iVar2;
 if (0 < param_1) {
 piVar1 = param_2 + param_1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_2;
 param_2 = param_2 + 1;
 } while (param_2 != piVar1);
 return iVar2;
 }
 return 0;
}

// Function: array_pointer @ 0x115e0
int array_pointer(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (0 < param_2) {
 piVar1 = param_1 + param_2 * 10;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 10;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}

// Function: pointer_array @ 0x11620
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
 if (0 < param_2) {
 iVar2 = 0;
 iVar3 = 0;
 do {
 piVar1 = *(int **)(param_1 + iVar2 * 4);
 if (piVar1 != (int *)0x0) {
 iVar3 = iVar3 + *piVar1;
 }
 iVar2 = iVar2 + 1;
 } while (iVar2 < iVar4);
 return iVar3;
 }
 return 0;
}

// Function: array_complex_index @ 0x11660
unsigned int array_complex_index(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)
{
 if (((-1 < (int)(param_4 | param_5)) && ((int)param_4 < param_2)) && ((int)param_5 < param_3)) {
 return *(unsigned int *)(param_1 + (param_2 * param_5 + param_4) * 4);
 }
 return 0xffffffff;
}

// Function: array_oob @ 0x116a0
int array_oob(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (-1 < param_2) {
 piVar1 = param_1 + param_2 + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}

// Function: test_array_types @ 0x116e0
void test_array_types(void)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 int *piVar6;
 int *piVar7;
 int in_GS_OFFSET;
 int local_3fc [20];
 int local_3ac [110];
 int local_1f4 [15];
 int local_1b8 [100];
 unsigned int local_26;
 unsigned short local_22;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x116ed;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000110b0(&DAT_000133bd);
 FUN_000110c0(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
 local_26 = 0x6c6c6568;
 local_22 = 0x6f;
 iVar5 = 0;
 do {
 iVar1 = iVar5 + 1;
 iVar2 = iVar5 + 1;
 iVar5 = iVar1;
 } while (*(char *)((int)&local_26 + iVar2) != '\0');
 FUN_000110c0(1,"ARR-L1-02 (array_string): %d\n",iVar1);
 piVar6 = local_3ac;
 iVar5 = 0;
 piVar7 = piVar6;
 do {
 iVar2 = 0;
 do {
 iVar1 = 0;
 if (iVar2 == iVar5) {
 iVar1 = iVar2;
 }
 piVar7[iVar2] = iVar1;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 10);
 iVar5 = iVar5 + 1;
 piVar7 = piVar7 + 10;
 } while (iVar5 != 10);
 iVar5 = 0;
 do {
 iVar5 = iVar5 + *piVar6;
 piVar6 = piVar6 + 0xb;
 } while (local_1f4 != piVar6);
 FUN_000110c0(1,"ARR-L1-03 (array_2d_stack): %d\n",iVar5);
 piVar6 = local_1b8;
 piVar7 = piVar6;
 do {
 piVar3 = piVar7 + -0x19;
 do {
 *piVar3 = 1;
 piVar4 = piVar3 + 5;
 piVar3[1] = 1;
 piVar3[2] = 1;
 piVar3[3] = 1;
 piVar3[4] = 1;
 piVar3 = piVar4;
 } while (piVar7 != piVar4);
 piVar7 = piVar7 + 0x19;
 } while ((int *)&stack0x0000003c != piVar7);
 iVar5 = 0;
 do {
 piVar7 = piVar6 + -0x19;
 do {
 piVar3 = piVar7 + 5;
 iVar5 = iVar5 + *piVar7 + piVar7[1] + piVar7[2] + piVar7[3] + piVar7[4];
 piVar7 = piVar3;
 } while (piVar6 != piVar3);
 piVar6 = piVar6 + 0x19;
 } while (piVar6 != (int *)&stack0x0000003c);
 FUN_000110c0(1,"ARR-L1-04 (array_3d): %d\n",iVar5);
 FUN_000110c0(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
 FUN_000110c0(1,"ARR-L2-02 (array_pointer): %d\n",100);
 FUN_000110c0(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
 iVar5 = 0;
 do {
 local_3fc[iVar5] = iVar5;
 iVar5 = iVar5 + 1;
 } while (iVar5 != 0x14);
 FUN_000110c0(1,"ARR-L2-04 (array_complex_index): %d\n",local_3fc[17]);
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: ptr_single @ 0x118d0
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x118e0
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x118f0
int ptr_triple(unsigned int *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x11910
int ptr_increment(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (0 < param_2) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4);
 iVar1 = iVar1 + 1;
 } while (param_2 != iVar1);
 return iVar2;
 }
 return 0;
}

// Function: ptr_offset @ 0x11950
unsigned int ptr_offset(int param_1,int param_2)
{
 return *(unsigned int *)(param_1 + param_2 * 4);
}

// Function: ptr_diff @ 0x11960
int ptr_diff(int param_1,int param_2)
{
 return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x11970
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

// Function: ptr_const @ 0x119b0
int ptr_const(int *param_1)
{
 return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x119c0
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x119d0
void ptr_func_simple(func_ptr_void param_1)
{
 param_1();
 return;
}

// Function: ptr_func_complex @ 0x119f0
void ptr_func_complex(func_ptr_uint_charpp param_1,unsigned int param_2)
{
 int in_GS_OFFSET;
 char *local_18;
 unsigned int local_14;
 int local_10;
 unsigned int uStack_4;
 uStack_4 = 0x119f9;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 0;
 local_18 = &DAT_0001342b;
 param_1(param_2,&local_18);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: ptr_cast @ 0x11a50
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x11a60
unsigned int opaque_handle_create(unsigned int param_1)
{
 return param_1;
}

// Function: opaque_handle_op @ 0x11a70
int opaque_handle_op(int param_1)
{
 return param_1 * 2;
}

// Function: test_pointer_types @ 0x11a80
void test_pointer_types(void)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int local_24;
 int local_20 [4];
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x11a8b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000110b0(&DAT_00013430);
 FUN_000110c0(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 FUN_000110c0(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 FUN_000110c0(1,"PTR-L2-03 (ptr_triple): %d\n",6);
 local_24 = 1;
 iVar3 = 0;
 iVar2 = 1;
 local_20[0] = 2;
 local_20[1] = 3;
 local_20[2] = 4;
 local_20[3] = 5;
 piVar1 = &local_24;
 while( 1 ) {
 piVar1 = piVar1 + 1;
 iVar3 = iVar3 + iVar2;
 if (piVar1 == &local_10) break;
 iVar2 = *piVar1;
 }
 FUN_000110c0(1,"PTR-L2-04 (ptr_increment): %d\n",iVar3);
 FUN_000110c0(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 FUN_000110c0(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 FUN_000110c0(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 FUN_000110c0(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 FUN_000110c0(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 FUN_000110c0(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 FUN_000110c0(1,"PTR-L2-10 (ptr_func_simple): %d\n",10);
 FUN_000110c0(1,"PTR-L2-11 (ptr_func_complex): %d\n",1);
 FUN_000110c0(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 FUN_000110c0(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: struct_simple @ 0x11c20
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x11c40
int struct_array(int *param_1,int param_2)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 if (0 < param_2) {
 iVar3 = 0;
 piVar1 = param_1;
 do {
 piVar2 = piVar1 + 3;
 iVar3 = iVar3 + piVar1[1] + *piVar1 + piVar1[2];
 piVar1 = piVar2;
 } while (param_1 + param_2 * 3 != piVar2);
 return iVar3;
 }
 return 0;
}

// Function: struct_nested @ 0x11c90
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x11ca0
int struct_deep(int param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x11cb0
int struct_with_ptr(int *param_1)
{
 int iVar1;
 iVar1 = *param_1;
 if ((int *)param_1[1] != (int *)0x0) {
 iVar1 = iVar1 + *(int *)param_1[1];
 }
 return iVar1;
}

// Function: struct_bitfields @ 0x11cd0
short struct_bitfields(unsigned short *param_1)
{
 byte bVar1;
 bVar1 = *(byte *)param_1;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6);
}

// Function: union_type @ 0x11d00
float union_type(float *param_1,int param_2)
{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 != 1) {
 return (float)(int)*(char *)param_1;
 }
 return (float)(int)ROUND(*param_1);
}

// Function: union_array @ 0x11d60
int union_array(int *param_1,int param_2)
{
 int *piVar1;
 int iVar2;
 if (0 < param_2) {
 piVar1 = param_1 + param_2;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_1;
 param_1 = param_1 + 1;
 } while (param_1 != piVar1);
 return iVar2;
 }
 return 0;
}

// Function: enum_type @ 0x11d90
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x11da0
unsigned int enum_switch(unsigned int param_1)
{
 unsigned int uVar1;
 static unsigned int switch_table[4] = {0x32, 0x64, 0x96, 0xc8};
 uVar1 = 0xffffff9d;
 if (param_1 < 4) {
 uVar1 = switch_table[param_1];
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x11dd0
void struct_func_ptr(int param_1)
{
 ((void (*)(void))(*(void **)(param_1 + 4)))();
 return;
}

// Function: linked_list @ 0x11df0
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

// Function: doubly_linked_list @ 0x11e10
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

// Function: binary_tree_sum @ 0x11e30
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 int *piVar6;
 int *piVar7;
 int *piVar8;
 int iVar9;
 int *piVar10;
 int iVar11;
 int local_70;
 int local_6c;
 int local_68;
 int local_64;
 int *local_54;
 int *local_50;
 int *local_4c;
 int local_48;
 int local_44;
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 int local_30;
 int local_2c;
 int local_28;
 local_28 = 0;
 if (param_1 != (int *)0x0) {
 do {
 local_3c = 0;
 local_44 = *param_1;
 local_54 = (int *)param_1[1];
 if (local_54 != (int *)0x0) {
 do {
 local_38 = 0;
 local_40 = *local_54;
 local_50 = (int *)local_54[1];
 if (local_50 != (int *)0x0) {
 do {
 local_34 = 0;
 local_2c = *local_50;
 local_4c = (int *)local_50[1];
 if (local_4c != (int *)0x0) {
 do {
 local_68 = 0;
 local_30 = *local_4c;
 piVar6 = (int *)local_4c[1];
 if (piVar6 != (int *)0x0) {
 do {
 piVar3 = (int *)piVar6[1];
 iVar5 = *piVar6;
 local_70 = 0;
 if (piVar3 != (int *)0x0) {
 do {
 local_6c = *piVar3;
 piVar7 = (int *)piVar3[1];
 local_64 = 0;
 if (piVar7 != (int *)0x0) {
 do {
 local_48 = *piVar7;
 piVar8 = (int *)piVar7[1];
 iVar9 = 0;
 if (piVar8 != (int *)0x0) {
 do {
 piVar10 = (int *)piVar8[1];
 iVar11 = *piVar8;
 iVar4 = 0;
 if (piVar10 != (int *)0x0) {
 do {
 iVar2 = binary_tree_sum(piVar10[1]);
 iVar1 = *piVar10;
 piVar10 = (int *)piVar10[2];
 iVar4 = iVar4 + iVar2 + iVar1;
 } while (piVar10 != (int *)0x0);
 iVar11 = iVar11 + iVar4;
 }
 piVar8 = (int *)piVar8[2];
 iVar9 = iVar9 + iVar11;
 } while (piVar8 != (int *)0x0);
 local_48 = local_48 + iVar9;
 }
 piVar7 = (int *)piVar7[2];
 local_64 = local_64 + local_48;
 } while (piVar7 != (int *)0x0);
 local_6c = local_6c + local_64;
 }
 piVar3 = (int *)piVar3[2];
 local_70 = local_70 + local_6c;
 } while (piVar3 != (int *)0x0);
 iVar5 = iVar5 + local_70;
 }
 piVar6 = (int *)piVar6[2];
 local_68 = local_68 + iVar5;
 } while (piVar6 != (int *)0x0);
 local_30 = local_30 + local_68;
 }
 local_34 = local_34 + local_30;
 local_4c = (int *)local_4c[2];
 } while (local_4c != (int *)0x0);
 local_2c = local_2c + local_34;
 }
 local_38 = local_38 + local_2c;
 local_50 = (int *)local_50[2];
 } while (local_50 != (int *)0x0);
 local_40 = local_40 + local_38;
 }
 local_3c = local_3c + local_40;
 local_54 = (int *)local_54[2];
 } while (local_54 != (int *)0x0);
 local_44 = local_44 + local_3c;
 }
 local_28 = local_28 + local_44;
 param_1 = (int *)param_1[2];
 } while (param_1 != (int *)0x0);
 }
 return local_28;
}

// Function: binary_tree @ 0x12060
int binary_tree(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar3 = 0;
 if (param_1 != (int *)0x0) {
 do {
 iVar2 = binary_tree_sum(param_1[1]);
 iVar1 = *param_1;
 param_1 = (int *)param_1[2];
 iVar3 = iVar3 + iVar2 + iVar1;
 } while (param_1 != (int *)0x0);
 }
 return iVar3;
}

// Function: graph_traverse @ 0x120a0
int graph_traverse(int **param_1)
{
 int **ppiVar1;
 int *piVar2;
 int iVar3;
 if ((int)param_1[10] < 1) {
 return 0;
 }
 ppiVar1 = param_1 + (int)param_1[10];
 iVar3 = 0;
 do {
 for (piVar2 = *param_1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
 iVar3 = iVar3 + *piVar2;
 }
 param_1 = param_1 + 1;
 } while (param_1 != ppiVar1);
 return iVar3;
}

// Function: test_composite_types @ 0x120e0
void test_composite_types(void)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int local_38;
 unsigned int *local_34;
 unsigned int local_30;
 unsigned int local_2c;
 int local_28;
 unsigned int *local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 int *local_14;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x120ea;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000110b0(&DAT_00013526);
 FUN_000110c0(1,"CMP-L2-01 (struct_simple): %d\n",6);
 FUN_000110c0(1,"CMP-L2-02 (struct_array): %d\n",9);
 FUN_000110c0(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 FUN_000110c0(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 FUN_000110c0(1,"CMP-L2-05 (struct_with_ptr): %d\n",0x1e);
 FUN_000110c0(1,"CMP-L2-06 (struct_bitfields): %d\n",0x6a);
 FUN_000110c0(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 FUN_000110c0(1,"CMP-L2-08 (union_array): %d\n",0x3c);
 FUN_000110c0(1,"CMP-L2-09 (enum_type): %d\n",10);
 FUN_000110c0(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 FUN_000110c0(1,"CMP-L2-11 (struct_func_ptr): %d\n",0x15);
 local_34 = &local_30;
 iVar2 = 10;
 iVar3 = 0;
 local_38 = 0x14;
 local_30 = 0x1e;
 local_2c = 0;
 for (piVar1 = &local_38; iVar3 = iVar3 + iVar2, piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
 iVar2 = *piVar1;
 }
 FUN_000110c0(1,"CMP-L2-12 (linked_list): %d\n",iVar3);
 piVar1 = &local_28;
 local_28 = 10;
 local_24 = &local_1c;
 iVar2 = 10;
 iVar3 = 0;
 local_20 = 0;
 local_1c = 0x14;
 local_18 = 0;
 local_14 = piVar1;
 while( 1 ) {
 piVar1 = (int *)piVar1[1];
 iVar3 = iVar3 + iVar2;
 if (piVar1 == (int *)0x0) break;
 iVar2 = *piVar1;
 }
 FUN_000110c0(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
 iVar2 = binary_tree_sum(0);
 FUN_000110c0(1,"CMP-L2-14 (binary_tree): %d\n",iVar2 + 100);
 FUN_000110c0(1,"CMP-L2-15 (graph_traverse): %d\n",1);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}



