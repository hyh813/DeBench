// Decompiled by BinaryAI
// SHA256: 7b6b8f866333dcea9322237f3eed180b3eedfe5e8ad5331d5814ea8bb519c513

// Type definitions
typedef unsigned char byte;
typedef unsigned long long ulonglong;

#include <stdarg.h>

// Runtime function declarations
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern void __do_global_ctors_aux(void);
extern void __x86_get_pc_thunk_di(void);
extern void __stack_chk_fail_local(void);

// Data references
extern int DAT_00013008;
extern int DAT_000133bd;
extern int DAT_0001342b;
extern int DAT_00013430;
extern int DAT_00013526;
extern unsigned int CSWTCH_75[];

// Global Offset Table pointers (PIC code uses EBX/EDI as GOT base)
static unsigned int unaff_EBX = 0;
static unsigned int unaff_EDI = 0;

// Function: _init @ 0x11000
void _init(void *ctx)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
 return;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 (*(void (*)(void))0)();
 return;
}

// Function: FUN_00011080 @ 0x11080
void FUN_00011080(int param_1, ...)
{
 va_list args;
 va_start(args, param_1);
 (*(void (*)(va_list))(unaff_EBX + 0x20))(args);
 va_end(args);
 return;
}

// Function: FUN_00011090 @ 0x11090
void FUN_00011090(void)
{
 (*(void (*)(void))(*(int*)(unaff_EBX + 0xc)))();
 return;
}

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(void)
{
 (*(void (*)(void))(unaff_EBX + 0x10))();
 return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(int param_1, ...)
{
 va_list args;
 va_start(args, param_1);
 (*(void (*)(va_list))(unaff_EBX + 0x14))(args);
 va_end(args);
 return;
}

// Function: FUN_000110c0 @ 0x110c0
int FUN_000110c0(int param_1, const char *param_2, ...)
{
 va_list args;
 va_start(args, param_2);
 (*(void (*)(va_list))(*(int*)(unaff_EBX + 0x18)))(args);
 va_end(args);
 return 0;
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
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 ((void (*)(int, unsigned int, char *, unsigned int, unsigned int, unsigned int, char *))FUN_00011090)
     (main, param_2, auStack_4, 0, 0, param_1, auStack_4);
 do {
 } while( 1 );
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
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4e2b) == '\0') {
 if (*(int *)(unaff_EDI + 0x4e13) != 0) {
 FUN_00011080(*(unsigned int *)(unaff_EDI + 0x4e27));
 }
 uVar1 = *(unsigned int *)(unaff_EDI + 0x4e2f);
 while (uVar1 < (((unaff_EDI + 0x4d17) - (unaff_EDI + 0x4d13)) >> 2) - 1U) {
 *(unsigned int *)(unaff_EDI + 0x4e2f) = uVar1 + 1;
 (*(void (*)(void))(*(int*)(unaff_EDI + 0x4d13 + (uVar1 + 1) * 4)))();
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
unsigned long long process_ll(unsigned int param_1,int param_2)
{
 return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_2 * param_1 * 2,
 (int)((ulonglong)param_1 * (ulonglong)param_1));
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
 } while (piVar1 != param_1);
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
 return param_1[0xb] + *param_1 + param_1[0x16] + param_1[0x21] + param_1[0x2c] + param_1[0x37] +
 param_1[0x42] + param_1[0x4d] + param_1[0x58] + param_1[99];
}

// Function: array_3d @ 0x11590
int array_3d(int *param_1)
{
 return *param_1 + param_1[1] + param_1[2] + param_1[3] + param_1[4] + param_1[5] + param_1[6] +
 param_1[7] + param_1[8] + param_1[9] + param_1[10] + param_1[0xb] + param_1[0xc] +
 param_1[0xd] + param_1[0xe] + param_1[0xf] + param_1[0x10] + param_1[0x11] + param_1[0x12]
 + param_1[0x13] + param_1[0x14] + param_1[0x15] + param_1[0x16] + param_1[0x17] +
 param_1[0x18] + param_1[0x19] + param_1[0x1a] + param_1[0x1b] + param_1[0x1c] +
 param_1[0x1d] + param_1[0x1e] + param_1[0x1f] + param_1[0x20] + param_1[0x21] +
 param_1[0x22] + param_1[0x23] + param_1[0x24] + param_1[0x25] + param_1[0x26] +
 param_1[0x27] + param_1[0x28] + param_1[0x29] + param_1[0x2a] + param_1[0x2b] +
 param_1[0x2c] + param_1[0x2d] + param_1[0x2e] + param_1[0x2f] + param_1[0x30] +
 param_1[0x31] + param_1[0x32] + param_1[0x33] + param_1[0x34] + param_1[0x35] +
 param_1[0x36] + param_1[0x37] + param_1[0x38] + param_1[0x39] + param_1[0x3a] +
 param_1[0x3b] + param_1[0x3c] + param_1[0x3d] + param_1[0x3e] + param_1[0x3f] +
 param_1[0x40] + param_1[0x41] + param_1[0x42] + param_1[0x43] + param_1[0x44] +
 param_1[0x45] + param_1[0x46] + param_1[0x47] + param_1[0x48] + param_1[0x49] +
 param_1[0x4a] + param_1[0x4b] + param_1[0x4c] + param_1[0x4d] + param_1[0x4e] +
 param_1[0x4f] + param_1[0x50] + param_1[0x51] + param_1[0x52] + param_1[0x53] +
 param_1[0x54] + param_1[0x55] + param_1[0x56] + param_1[0x57] + param_1[0x58] +
 param_1[0x59] + param_1[0x5a] + param_1[0x5b] + param_1[0x5c] + param_1[0x5d] +
 param_1[0x5e] + param_1[0x5f] + param_1[0x60] + param_1[0x61] + param_1[0x62] + param_1[99]
 + param_1[100] + param_1[0x65] + param_1[0x66] + param_1[0x67] + param_1[0x68] +
 param_1[0x69] + param_1[0x6a] + param_1[0x6b] + param_1[0x6c] + param_1[0x6d] +
 param_1[0x6e] + param_1[0x6f] + param_1[0x70] + param_1[0x71] + param_1[0x72] +
 param_1[0x73] + param_1[0x74] + param_1[0x75] + param_1[0x76] + param_1[0x77] +
 param_1[0x78] + param_1[0x79] + param_1[0x7a] + param_1[0x7b] + param_1[0x7c];
}

// Function: array_vla @ 0x11830
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
 } while (piVar1 != param_2);
 return iVar2;
 }
 return 0;
}

// Function: array_pointer @ 0x11860
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
 } while (piVar1 != param_1);
 return iVar2;
 }
 return 0;
}

// Function: pointer_array @ 0x118a0
int pointer_array(int **param_1,int param_2)
{
 int iVar1;
 if (0 < param_2) {
 iVar1 = 0;
 if (*param_1 != (int *)0x0) {
 iVar1 = **param_1;
 }
 if (1 < param_2) {
 if (param_1[1] != (int *)0x0) {
 iVar1 = iVar1 + *param_1[1];
 }
 if (param_2 != 2) {
 if (param_1[2] != (int *)0x0) {
 iVar1 = iVar1 + *param_1[2];
 }
 if (param_2 != 3) {
 if (param_1[3] != (int *)0x0) {
 iVar1 = iVar1 + *param_1[3];
 }
 if (param_2 != 4) {
 if (param_1[4] != (int *)0x0) {
 iVar1 = iVar1 + *param_1[4];
 }
 if (param_2 != 5) {
 if (param_1[5] != (int *)0x0) {
 iVar1 = iVar1 + *param_1[5];
 }
 if (param_2 != 6) {
 if (param_1[6] != (int *)0x0) {
 iVar1 = iVar1 + *param_1[6];
 }
 if (param_2 != 7) {
 if (param_1[7] != (int *)0x0) {
 iVar1 = iVar1 + *param_1[7];
 }
 if (param_2 != 8) {
 if (param_1[8] != (int *)0x0) {
 iVar1 = iVar1 + *param_1[8];
 }
 if ((9 < param_2) && (param_1[9] != (int *)0x0)) {
 iVar1 = iVar1 + *param_1[9];
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

// Function: array_complex_index @ 0x11950
unsigned int array_complex_index(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)
{
 if (((-1 < (int)(param_4 | param_5)) && ((int)param_4 < param_2)) && ((int)param_5 < param_3)) {
 return *(unsigned int *)(param_1 + (param_2 * param_5 + param_4) * 4);
 }
 return 0xffffffff;
}

// Function: array_oob @ 0x11990
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
 } while (piVar1 != param_1);
 return iVar2;
 }
 return 0;
}

// Function: test_array_types @ 0x119d0
void test_array_types(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int local_68 [20];
 unsigned int local_16;
 unsigned short local_12;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x119da;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000110b0(&DAT_000133bd);
 FUN_000110c0(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
 local_16 = 0x6c6c6568;
 local_12 = 0x6f;
 iVar3 = 0;
 do {
 iVar2 = iVar3 + 1;
 iVar1 = iVar3 + 1;
 iVar3 = iVar2;
 } while (*(char *)((int)&local_16 + iVar1) != '\0');
 FUN_000110c0(1,"ARR-L1-02 (array_string): %d\n",iVar2);
 FUN_000110c0(1,"ARR-L1-03 (array_2d_stack): %d\n",0x2d);
 FUN_000110c0(1,"ARR-L1-04 (array_3d): %d\n",0x7d);
 FUN_000110c0(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
 FUN_000110c0(1,"ARR-L2-02 (array_pointer): %d\n",100);
 FUN_000110c0(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
 iVar3 = 0;
 do {
 local_68[iVar3] = iVar3;
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x14);
 FUN_000110c0(1,"ARR-L2-04 (array_complex_index): %d\n",local_68[17]);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: ptr_single @ 0x11b00
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x11b10
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x11b20
int ptr_triple(unsigned int *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x11b40
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

// Function: ptr_offset @ 0x11b80
unsigned int ptr_offset(int param_1,int param_2)
{
 return *(unsigned int *)(param_1 + param_2 * 4);
}

// Function: ptr_diff @ 0x11b90
int ptr_diff(int param_1,int param_2)
{
 return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x11ba0
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

// Function: ptr_const @ 0x11be0
int ptr_const(int *param_1)
{
 return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x11bf0
void ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return;
}

// Function: ptr_func_simple @ 0x11c00
void ptr_func_simple(void *param_1)
{
 (*(void (*)(void))param_1)();
 return;
}

// Function: ptr_func_complex @ 0x11c20
void ptr_func_complex(void *param_1,unsigned int param_2)
{
 int in_GS_OFFSET;
 char *local_18;
 unsigned int local_14;
 int local_10;
 unsigned int uStack_4;
 uStack_4 = 0x11c29;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 0;
 local_18 = &DAT_0001342b;
 (*param_1)(param_2,&local_18);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: ptr_cast @ 0x11c80
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x11c90
unsigned int opaque_handle_create(unsigned int param_1)
{
 return param_1;
}

// Function: opaque_handle_op @ 0x11ca0
int opaque_handle_op(int param_1)
{
 return param_1 * 2;
}

// Function: test_pointer_types @ 0x11cb0
void test_pointer_types(void)
{
 FUN_000110b0(&DAT_00013430);
 FUN_000110c0(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 FUN_000110c0(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 FUN_000110c0(1,"PTR-L2-03 (ptr_triple): %d\n",6);
 FUN_000110c0(1,"PTR-L2-04 (ptr_increment): %d\n",0xf);
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
 return;
}

// Function: struct_simple @ 0x11de0
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x11e00
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

// Function: struct_nested @ 0x11e50
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x11e60
int struct_deep(int param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x11e70
int struct_with_ptr(int *param_1)
{
 int iVar1;
 iVar1 = *param_1;
 if ((int *)param_1[1] != (int *)0x0) {
 iVar1 = iVar1 + *(int *)param_1[1];
 }
 return iVar1;
}

// Function: struct_bitfields @ 0x11e90
short struct_bitfields(unsigned short *param_1)
{
 byte bVar1;
 bVar1 = *(byte *)param_1;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6);
}

// Function: union_type @ 0x11ec0
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

// Function: union_array @ 0x11f20
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
 } while (piVar1 != param_1);
 return iVar2;
 }
 return 0;
}

// Function: enum_type @ 0x11f50
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x11f60
unsigned int enum_switch(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffff9d;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(CSWTCH_75 + param_1 * 4);
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x11f90
int struct_func_ptr(int param_1)
{
 ((void (*)(void))(*(int*)(param_1 + 4)))();
 return 0;
}

// Function: linked_list @ 0x11fb0
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

// Function: doubly_linked_list @ 0x11fd0
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

// Function: binary_tree_sum @ 0x11ff0
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

// Function: binary_tree @ 0x12220
int binary_tree(int *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 int local_20;
 local_20 = 0;
 if (param_1 != (int *)0x0) {
 do {
 piVar3 = (int *)param_1[1];
 iVar5 = *param_1;
 iVar4 = 0;
 if (piVar3 != (int *)0x0) {
 do {
 iVar2 = binary_tree_sum(piVar3[1]);
 iVar1 = *piVar3;
 piVar3 = (int *)piVar3[2];
 iVar4 = iVar4 + iVar2 + iVar1;
 } while (piVar3 != (int *)0x0);
 iVar5 = iVar5 + iVar4;
 }
 param_1 = (int *)param_1[2];
 local_20 = local_20 + iVar5;
 } while (param_1 != (int *)0x0);
 }
 return local_20;
}

// Function: graph_traverse @ 0x12280
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

// Function: test_composite_types @ 0x122c0
void test_composite_types(void)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 int in_GS_OFFSET;
 int local_38;
 unsigned int *local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 int *local_24;
 unsigned int local_20;
 int local_1c;
 unsigned int local_18;
 unsigned int *local_14;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x122ca;
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
 FUN_000110c0(1,"CMP-L2-11 (struct_func_ptr): %d\n",struct_func_ptr(0));
 piVar2 = &local_38;
 local_34 = &local_30;
 iVar3 = 10;
 local_38 = 0x14;
 local_30 = 0x1e;
 local_2c = 0;
 do {
 iVar1 = *piVar2;
 piVar2 = (int *)piVar2[1];
 iVar3 = iVar3 + iVar1;
 } while (piVar2 != (int *)0x0);
 FUN_000110c0(1,"CMP-L2-12 (linked_list): %d\n",iVar3);
 piVar2 = &local_1c;
 local_28 = 10;
 local_14 = &local_28;
 iVar3 = 10;
 local_24 = piVar2;
 local_20 = 0;
 local_1c = 0x14;
 local_18 = 0;
 do {
 iVar3 = iVar3 + *piVar2;
 piVar2 = (int *)piVar2[1];
 } while (piVar2 != (int *)0x0);
 FUN_000110c0(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
 FUN_000110c0(1,"CMP-L2-14 (binary_tree): %d\n",100);
 FUN_000110c0(1,"CMP-L2-15 (graph_traverse): %d\n",1);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: __x86.get_pc_thunk.ax @ 0x124b3
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.cx @ 0x124b7
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x124c0
void __stack_chk_fail_local(void)
{
 FUN_000110a0();
 return;
}

// Function: __do_global_ctors_aux @ 0x124e0
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x1252c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

