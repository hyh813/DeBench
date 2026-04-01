// Decompiled by BinaryAI
// SHA256: a0f3d8022c1e4383eb246a6ab0e0e38309e7b0073cb4733b7b9e56b3acb150d1

#include <stdbool.h>
#include <stdint.h>

typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef unsigned short ushort;
typedef long long longlong;
typedef unsigned char byte;

// Global variables
static int completed_0 = 0;
extern void *__dso_handle;
extern int main(void);

// External data references
static char DAT_000121ac = 0;
extern char DAT_000124fb;
extern char DAT_0001251c;
extern char DAT_00012537;
extern char DAT_00012552;
static unsigned int UNK_0001258c[4] = {0x32, 0x32, 0x32, 0x32};

// Forward declarations for floating-point helper functions
ulonglong __muldf3(unsigned int param_1,uint param_2,uint param_3,uint param_4);
ulonglong FUN_00011640(uint param_1,uint param_2,uint param_3,uint param_4);
uint __mulsf3(uint param_1,uint param_2,unsigned int param_3,uint param_4);
ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4);
uint __addsf3(uint param_1,uint param_2,unsigned int param_3,uint param_4);
uint __fixsfsi(uint param_1);

// Helper macros
#define CONCAT44(hi, lo) (((ulonglong)(hi) << 32) | (lo))
#define SBORROW4(a, b) ((int)((a) - (b)) < 0 && (a) >= 0)
#define SCARRY4(a, b) (((a) + (b)) < (a))
#define CARRY4(a, b) (((a) + (b)) < (a))
#define LZCOUNT(x) __builtin_clz(x)
#define SUB41(x, y) ((x) - (y))



// Function: <EXTERNAL>::__libc_start_main @ 0x103ec
void __libc_start_main(void *main_fn, void *arg, void *stack, void *init, void *fini, void *rtld_fini)
{
 __libc_start_main(main_fn, arg, stack, init, fini, rtld_fini);
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x103f8
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::printf @ 0x10404
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10410
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::abort @ 0x10428
void abort(void)
{
 abort();
}













// Function: process_char @ 0x1059c
char process_char(char param_1)
{
 if ((byte)(param_1 + 0xbfU) < 0x1a) {
 param_1 = param_1 + ' ';
 }
 return param_1;
}

// Function: process_short @ 0x105b4
int process_short(int param_1,int param_2)
{
 return (param_2 + param_1) * 0x10000 >> 0x10;
}

// Function: process_int @ 0x105c4
uint process_int(int param_1)
{
 return param_1 << 1 | 1;
}

// Function: process_long @ 0x105d0
int process_long(int param_1)
{
 return param_1 << 1;
}

// Function: process_ll @ 0x105d8
unsigned long long process_ll(uint param_1,int param_2)
{
 return CONCAT44(param_1 * param_2 +
 param_1 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20),
 (int)((ulonglong)param_1 * (ulonglong)param_1));
}

// Function: process_float @ 0x105f0
void process_float(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = __mulsf3(param_1,0x3fc00000,0,0);
 __addsf3(uVar1,0x3f000000,0,0);
 return;
}

// Function: process_double @ 0x1060c
void process_double(unsigned int param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 uVar1 = __muldf3(param_1,param_2,0,0x3fe00000);
 __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0x9999999a,0x3fb99999);
 return;
}

// Function: process_ld @ 0x1063c
void process_ld(unsigned int param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 uVar1 = __muldf3(param_1,param_2,param_1,param_2);
 __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,0x3ff00000);
 return;
}

// Function: process_bool @ 0x10664
bool process_bool(uint param_1)
{
 return 0 < (int)param_1 && (param_1 & 1) == 0;
}

// Function: const_param @ 0x10684
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x10690
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x106a0
void test_data_types_l1(void)
{
 puts(&DAT_000124fb);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",0);
 printf("DT-L1-06 (process_float): %.2f\n");
 printf("DT-L1-07 (process_double): %.2f\n");
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}

// Function: array_1d_stack @ 0x107fc
int array_1d_stack(int *param_1,int param_2)
{
 int iVar1;
 if (0 < param_2) {
 iVar1 = 0;
 do {
 param_2 = param_2 + -1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: array_string @ 0x10828
int array_string(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 do {
 iVar2 = iVar1;
 iVar1 = iVar2 + 1;
 } while (*(char *)(param_1 + iVar2) != '\0');
 return iVar2;
}

// Function: array_2d_stack @ 0x10844
int array_2d_stack(int *param_1)
{
 return param_1[99] +
 param_1[0x58] +
 param_1[0x4d] +
 param_1[0x42] +
 param_1[0x37] + param_1[0x2c] + param_1[0x21] + param_1[0x16] + param_1[0xb] + *param_1;
}

// Function: array_3d @ 0x10894
int array_3d(int param_1)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 iVar3 = 0;
 iVar1 = 0;
 do {
 piVar2 = (int *)(param_1 + iVar3);
 iVar3 = iVar3 + 100;
 iVar1 = piVar2[0x18] +
 piVar2[0x17] +
 piVar2[0x16] +
 piVar2[0x15] +
 piVar2[0x14] +
 piVar2[0x13] +
 piVar2[0x12] +
 piVar2[0x11] +
 piVar2[0x10] +
 piVar2[0xf] +
 piVar2[0xe] +
 piVar2[0xd] +
 piVar2[0xc] +
 piVar2[0xb] +
 piVar2[10] +
 piVar2[9] +
 piVar2[8] +
 piVar2[7] +
 piVar2[6] + piVar2[5] + piVar2[4] + piVar2[3] + piVar2[2] + piVar2[1] + *piVar2 + iVar1;
 } while (iVar3 != 500);
 return iVar1;
}

// Function: array_vla @ 0x1096c
int array_vla(int param_1,int *param_2)
{
 int iVar1;
 if (0 < param_1) {
 iVar1 = 0;
 do {
 param_1 = param_1 + -1;
 iVar1 = *param_2 + iVar1;
 param_2 = param_2 + 1;
 } while (param_1 != 0);
 return iVar1;
 }
 return 0;
}

// Function: array_pointer @ 0x10998
int array_pointer(int *param_1,int param_2)
{
 int iVar1;
 if (0 < param_2) {
 iVar1 = 0;
 do {
 param_2 = param_2 + -1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 10;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: pointer_array @ 0x109c4
int pointer_array(int **param_1,uint param_2)
{
 int iVar1;
 int *piVar2;
 if ((int)param_2 < 1) {
 return 0;
 }
 iVar1 = 0;
 if (9 < param_2) {
 param_2 = 10;
 }
 do {
 piVar2 = *param_1;
 param_1 = param_1 + 1;
 if (piVar2 != (int *)0x0) {
 iVar1 = *piVar2 + iVar1;
 }
 param_2 = param_2 - 1;
 } while (param_2 != 0);
 return iVar1;
}

// Function: array_complex_index @ 0x10a08
unsigned int array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 int iVar1;
 unsigned int uVar2;
 bool bVar3;
 uVar2 = 0xffffffff;
 if (-1 < param_4) {
 bVar3 = SBORROW4(param_5,param_3);
 iVar1 = param_5 - param_3;
 if (param_5 < param_3) {
 bVar3 = SBORROW4(param_4,param_2);
 iVar1 = param_4 - param_2;
 }
 if (iVar1 < 0 != bVar3) {
 if (-1 < param_5) {
 uVar2 = *(unsigned int *)(param_1 + (param_5 * param_2 + param_4) * 4);
 }
 return uVar2;
 }
 }
 return uVar2;
}

// Function: array_oob @ 0x10a48
int array_oob(int *param_1,int param_2)
{
 int iVar1;
 if (-1 < param_2) {
 param_2 = param_2 + 1;
 iVar1 = 0;
 do {
 param_2 = param_2 + -1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: test_array_types @ 0x10a7c
void test_array_types(void)
{
 unsigned int uVar1;
 unsigned int local_1fc;
 unsigned int local_1f8;
 unsigned int local_1f4;
 unsigned int local_1f0;
 unsigned int local_1ec;
 unsigned int local_1e8;
 unsigned int local_1e4;
 unsigned int local_1e0;
 unsigned int local_1dc;
 unsigned int local_1d8;
 unsigned int local_1d4;
 unsigned int local_1d0;
 unsigned int local_1cc;
 unsigned int local_1c8;
 unsigned int local_1c4;
 unsigned int local_1c0;
 unsigned int local_1bc;
 unsigned int local_1b8;
 unsigned int local_1b4;
 unsigned int local_1b0;
 unsigned int local_1ac;
 unsigned int local_1a8;
 unsigned int local_1a4;
 unsigned int local_1a0;
 unsigned int local_19c;
 unsigned int local_198;
 unsigned int local_194;
 unsigned int local_190;
 unsigned int local_18c;
 unsigned int local_188;
 unsigned int local_184;
 unsigned int local_180;
 unsigned int local_17c;
 unsigned int local_178;
 unsigned int local_174;
 unsigned int local_170;
 unsigned int local_16c;
 unsigned int local_168;
 unsigned int local_164;
 unsigned int local_160;
 unsigned int local_15c;
 unsigned int local_158;
 unsigned int local_154;
 unsigned int local_150;
 unsigned int local_14c;
 unsigned int local_148;
 unsigned int local_144;
 unsigned int local_140;
 unsigned int local_13c;
 unsigned int local_138;
 unsigned int local_134;
 unsigned int local_130;
 unsigned int local_12c;
 unsigned int local_128;
 unsigned int local_124;
 unsigned int local_120;
 unsigned int local_11c;
 unsigned int local_118;
 unsigned int local_114;
 unsigned int local_110;
 unsigned int local_10c;
 unsigned int local_108;
 unsigned int local_104;
 unsigned int local_100;
 unsigned int local_fc;
 unsigned int local_f8;
 unsigned int local_f4;
 unsigned int local_f0;
 unsigned int local_ec;
 unsigned int local_e8;
 unsigned int local_e4;
 unsigned int local_e0;
 unsigned int local_dc;
 unsigned int local_d8;
 unsigned int local_d4;
 unsigned int local_d0;
 unsigned int local_cc;
 unsigned int local_c8;
 unsigned int local_c4;
 unsigned int local_c0;
 unsigned int local_bc;
 unsigned int local_b8;
 unsigned int local_b4;
 unsigned int local_b0;
 unsigned int local_ac;
 unsigned int local_a8;
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
 unsigned int local_68;
 unsigned int local_64;
 unsigned int local_60;
 unsigned int local_5c;
 unsigned int local_58;
 unsigned int local_54;
 unsigned int local_50;
 unsigned int local_4c;
 unsigned int local_48;
 unsigned int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int local_10;
 unsigned int local_c;
 puts(&DAT_0001251c);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 printf("ARR-L1-03 (array_2d_stack): %d\n",0x2d);
 local_c = 1;
 local_10 = 1;
 local_14 = 1;
 local_18 = 1;
 local_1c = 1;
 local_20 = 1;
 local_24 = 1;
 local_28 = 1;
 local_2c = 1;
 local_30 = 1;
 local_34 = 1;
 local_38 = 1;
 local_3c = 1;
 local_40 = 1;
 local_44 = 1;
 local_48 = 1;
 local_4c = 1;
 local_50 = 1;
 local_54 = 1;
 local_58 = 1;
 local_5c = 1;
 local_60 = 1;
 local_64 = 1;
 local_68 = 1;
 local_6c = 1;
 local_70 = 1;
 local_74 = 1;
 local_78 = 1;
 local_7c = 1;
 local_80 = 1;
 local_84 = 1;
 local_88 = 1;
 local_8c = 1;
 local_90 = 1;
 local_94 = 1;
 local_98 = 1;
 local_9c = 1;
 local_a0 = 1;
 local_a4 = 1;
 local_a8 = 1;
 local_ac = 1;
 local_b0 = 1;
 local_b4 = 1;
 local_b8 = 1;
 local_bc = 1;
 local_c0 = 1;
 local_c4 = 1;
 local_c8 = 1;
 local_cc = 1;
 local_d0 = 1;
 local_d4 = 1;
 local_d8 = 1;
 local_dc = 1;
 local_e0 = 1;
 local_e4 = 1;
 local_e8 = 1;
 local_ec = 1;
 local_f0 = 1;
 local_f4 = 1;
 local_f8 = 1;
 local_fc = 1;
 local_100 = 1;
 local_104 = 1;
 local_108 = 1;
 local_10c = 1;
 local_110 = 1;
 local_114 = 1;
 local_118 = 1;
 local_11c = 1;
 local_120 = 1;
 local_124 = 1;
 local_128 = 1;
 local_12c = 1;
 local_130 = 1;
 local_134 = 1;
 local_138 = 1;
 local_13c = 1;
 local_140 = 1;
 local_144 = 1;
 local_148 = 1;
 local_14c = 1;
 local_150 = 1;
 local_154 = 1;
 local_158 = 1;
 local_15c = 1;
 local_160 = 1;
 local_164 = 1;
 local_168 = 1;
 local_16c = 1;
 local_170 = 1;
 local_174 = 1;
 local_178 = 1;
 local_17c = 1;
 local_180 = 1;
 local_184 = 1;
 local_188 = 1;
 local_18c = 1;
 local_190 = 1;
 local_194 = 1;
 local_198 = 1;
 local_19c = 1;
 local_1a0 = 1;
 local_1a4 = 1;
 local_1a8 = 1;
 local_1ac = 1;
 local_1b0 = 1;
 local_1b4 = 1;
 local_1b8 = 1;
 local_1bc = 1;
 local_1c0 = 1;
 local_1c4 = 1;
 local_1c8 = 1;
 local_1cc = 1;
 local_1d0 = 1;
 local_1d4 = 1;
 local_1d8 = 1;
 local_1dc = 1;
 local_1e0 = 1;
 local_1e4 = 1;
 local_1e8 = 1;
 local_1ec = 1;
 local_1f0 = 1;
 local_1f4 = 1;
 local_1f8 = 1;
 local_1fc = 1;
 uVar1 = array_3d(&local_1fc);
 printf("ARR-L1-04 (array_3d): %d\n",uVar1);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 printf("ARR-L2-02 (array_pointer): %d\n",100);
 printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
 printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
 return;
}

// Function: ptr_single @ 0x10d40
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x10d4c
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x10d5c
int ptr_triple(unsigned int *param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x10d70
int ptr_increment(int *param_1,int param_2)
{
 int iVar1;
 if (0 < param_2) {
 iVar1 = 0;
 do {
 param_2 = param_2 + -1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: ptr_offset @ 0x10d9c
unsigned int ptr_offset(int param_1,int param_2)
{
 return *(unsigned int *)(param_1 + param_2 * 4);
}

// Function: ptr_diff @ 0x10da4
int ptr_diff(int param_1,int param_2)
{
 return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x10db0
uint ptr_void(uint *param_1,int param_2)
{
 if (param_2 == 1) {
 return (uint)*(byte *)param_1;
 }
 if (param_2 != 0) {
 return 0xffffffff;
 }
 return *param_1;
}

// Function: ptr_const @ 0x10dd8
int ptr_const(int *param_1)
{
 return *param_1 << 1;
}

// Function: ptr_const_ptr @ 0x10de4
int ptr_const_ptr(int *param_1)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = iVar1 + 5;
 return iVar1 + 5;
}

// Function: ptr_func_simple @ 0x10df8
void ptr_func_simple(void *UNRECOVERED_JUMPTABLE,unsigned int param_2)
{
 ((void (*)(unsigned int))UNRECOVERED_JUMPTABLE)(param_2);
 return;
}

// Function: ptr_func_complex @ 0x10e04
void ptr_func_complex(void *param_1,unsigned int param_2)
{
 char *local_10;
 unsigned int local_c;
 local_10 = &DAT_000121ac;
 local_c = 0;
 ((void (*)(unsigned int,char **))param_1)(param_2,&local_10);
 return;
}

// Function: ptr_cast @ 0x10e54
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x10e5c
void opaque_handle_create(void)
{
 return;
}

// Function: opaque_handle_op @ 0x10e60
int opaque_handle_op(int param_1)
{
 return param_1 << 1;
}

// Function: test_pointer_types @ 0x10e68
void test_pointer_types(void)
{
 puts(&DAT_00012537);
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

// Function: struct_simple @ 0x10f98
int struct_simple(int *param_1)
{
 return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x10fac
int struct_array(int param_1,int param_2)
{
 int iVar1;
 int *piVar2;
 if (0 < param_2) {
 iVar1 = 0;
 piVar2 = (int *)(param_1 + 4);
 do {
 param_2 = param_2 + -1;
 iVar1 = piVar2[-1] + iVar1 + *piVar2 + piVar2[1];
 piVar2 = piVar2 + 3;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: struct_nested @ 0x10ff4
int struct_nested(int *param_1)
{
 return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x11004
int struct_deep(int param_1)
{
 return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x11014
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

// Function: struct_bitfields @ 0x11030
short struct_bitfields(ushort *param_1)
{
 ushort uVar1;
 uVar1 = *param_1;
 return (uVar1 & 1) + (uVar1 >> 6) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}

// Function: union_type @ 0x11058
uint union_type(uint *param_1,int param_2)
{
 uint uVar1;
 if (param_2 == 1) {
 uVar1 = __fixsfsi(*param_1);
 return uVar1;
 }
 if (param_2 == 0) {
 uVar1 = *param_1;
 }
 else {
 uVar1 = (uint)*(byte *)param_1;
 }
 return uVar1;
}

// Function: union_array @ 0x11088
int union_array(int *param_1,int param_2)
{
 int iVar1;
 if (0 < param_2) {
 iVar1 = 0;
 do {
 param_2 = param_2 + -1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: enum_type @ 0x110b4
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x110c0
unsigned int enum_switch(uint param_1)
{
 unsigned int uVar1;
 uVar1 = 0xffffff9d;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(&UNK_0001258c + param_1 * 4);
 }
 return uVar1;
}

// Function: struct_func_ptr @ 0x110e0
void struct_func_ptr(unsigned int *param_1)
{
 ((void (*)(unsigned int))param_1[1])(*param_1);
 return;
}

// Function: linked_list @ 0x110ec
int linked_list(int *param_1)
{
 int iVar1;
 int iVar2;
 if (param_1 != (int *)0x0) {
 iVar1 = 0;
 do {
 iVar2 = *param_1;
 param_1 = (int *)param_1[1];
 iVar1 = iVar2 + iVar1;
 } while (param_1 != (int *)0x0);
 return iVar1;
 }
 return 0;
}

// Function: doubly_linked_list @ 0x11118
int doubly_linked_list(int *param_1)
{
 int iVar1;
 int iVar2;
 if (param_1 != (int *)0x0) {
 iVar1 = 0;
 do {
 iVar2 = *param_1;
 param_1 = (int *)param_1[1];
 iVar1 = iVar2 + iVar1;
 } while (param_1 != (int *)0x0);
 return iVar1;
 }
 return 0;
}

// Function: binary_tree_sum @ 0x11144
int binary_tree_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (param_1 != (int *)0x0) {
 iVar1 = 0;
 do {
 iVar3 = *param_1;
 iVar2 = binary_tree_sum(param_1[1]);
 param_1 = (int *)param_1[2];
 iVar1 = iVar3 + iVar1 + iVar2;
 } while (param_1 != (int *)0x0);
 return iVar1;
 }
 return 0;
}

// Function: graph_traverse @ 0x11190
int graph_traverse(int **param_1)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 if ((int)param_1[10] < 1) {
 iVar1 = 0;
 }
 else {
 piVar3 = (int *)0x0;
 iVar1 = 0;
 piVar2 = *param_1;
 while( true ) {
 for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
 iVar1 = *piVar2 + iVar1;
 }
 piVar3 = (int *)((int)piVar3 + 1);
 if (piVar3 == param_1[10]) break;
 piVar2 = param_1[(int)piVar3];
 }
 }
 return iVar1;
}

// Function: test_composite_types @ 0x111f4
void test_composite_types(void)
{
 int *piVar1;
 int iVar3;
 int iVar4;
 bool bVar5;
 unsigned int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 int local_38;
 unsigned int *local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 int *local_24;
 int local_20;
 unsigned int *local_1c;
 unsigned int local_18;
 unsigned int *local_14;
 unsigned int local_10;
 unsigned int local_c;
 puts(&DAT_00012552);
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
 iVar3 = 0;
 local_20 = 10;
 local_10 = 0x1e;
 piVar1 = &local_20;
 local_c = 0;
 local_14 = &local_10;
 local_18 = 0x14;
 local_1c = &local_18;
 do {
 iVar4 = *piVar1;
 piVar1 = (int *)piVar1[1];
 iVar3 = iVar4 + iVar3;
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",iVar3);
 piVar1 = &local_38;
 iVar3 = 0;
 local_2c = 0x14;
 local_24 = piVar1;
 local_28 = 0;
 local_30 = 0;
 local_38 = 10;
 local_34 = &local_2c;
 do {
 iVar4 = *piVar1;
 piVar1 = (int *)piVar1[1];
 iVar3 = iVar4 + iVar3;
 } while (piVar1 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
 local_40 = 0;
 local_3c = 0;
 local_44 = 100;
 unsigned int uVar2;
 uVar2 = binary_tree_sum(&local_44);
 printf("CMP-L2-14 (binary_tree): %d\n",binary_tree_sum(&local_44));
 iVar3 = 1;
 piVar1 = (int *)0x0;
 bVar5 = false;
 while (bVar5) {
 iVar4 = *piVar1;
 piVar1 = (int *)piVar1[1];
 iVar3 = iVar3 + iVar4;
 bVar5 = piVar1 != (int *)0x0;
 }
 printf("CMP-L2-15 (graph_traverse): %d\n",iVar3);
 return;
}

// Function: main @ 0x11440
int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

// Function: __muldf3 @ 0x11460
ulonglong __muldf3(unsigned int param_1,uint param_2,uint param_3,uint param_4)
{
 longlong lVar1;
 ulonglong uVar2;
 byte bVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 uint uVar7;
 uint unaff_r5;
 uint uVar8;
 uint uVar9;
 bool bVar10;
 bool bVar11;
 bool bVar12;
 ulonglong uVar13;
 uVar13 = CONCAT44(param_2,param_1);
 uVar8 = 0x7ff;
 uVar5 = param_2 >> 0x14 & 0x7ff;
 bVar10 = uVar5 == 0;
 if (!bVar10) {
 unaff_r5 = param_4 >> 0x14 & 0x7ff;
 bVar10 = unaff_r5 == 0;
 }
 if (!bVar10) {
 bVar10 = uVar5 == 0x7ff;
 }
 if (!bVar10) {
 bVar10 = unaff_r5 == 0x7ff;
 }
 if (bVar10) {
 uVar13 = FUN_00011640(param_1, param_2, param_3, param_4);
 }
 uVar4 = (uint)(uVar13 >> 0x20);
 iVar6 = uVar5 + unaff_r5;
 uVar5 = uVar4 ^ param_4;
 uVar4 = uVar4 & ~(uVar8 << 0x15);
 param_4 = param_4 & ~(uVar8 << 0x15);
 bVar10 = ((uint)uVar13 | uVar4 << 0xc) == 0;
 if (!bVar10) {
 bVar10 = (param_3 | param_4 << 0xc) == 0;
 }
 uVar4 = uVar4 | 0x100000;
 param_4 = param_4 | 0x100000;
 if (bVar10) {
 param_3 = (uint)uVar13 | param_3;
 param_4 = (uVar5 & 0x80000000 | uVar4) ^ param_4;
 uVar5 = uVar8 >> 1;
 bVar12 = SBORROW4(iVar6,uVar5);
 uVar7 = iVar6 - uVar5;
 bVar10 = uVar7 == 0;
 uVar4 = uVar7;
 if (!bVar10 && (int)uVar5 <= iVar6) {
 bVar12 = SBORROW4(uVar8,uVar7);
 uVar4 = uVar8 - uVar7;
 bVar10 = uVar8 == uVar7;
 }
 if (!bVar10 && (int)uVar4 < 0 == bVar12) {
 param_4 = param_4 | uVar7 * 0x100000;
 }
 if (!bVar10 && (int)uVar4 < 0 == bVar12) {
 return CONCAT44(param_4,param_3);
 }
 param_4 = param_4 | 0x100000;
 uVar5 = 0;
 bVar12 = SBORROW4(uVar7,1);
 uVar7 = uVar7 - 1;
 bVar10 = uVar7 == 0;
 uVar8 = uVar7;
 }
 else {
 uVar2 = (ulonglong)param_3 * (uVar13 & 0xffffffff);
 uVar13 = (ulonglong)param_4 * (uVar13 & 0xffffffff) +
 (ulonglong)param_3 * (ulonglong)uVar4 + (uVar2 >> 0x20);
 uVar9 = (uint)uVar13;
 lVar1 = (ulonglong)param_4 * (ulonglong)uVar4 + (uVar13 >> 0x20);
 uVar8 = (uint)lVar1;
 uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
 if ((int)uVar2 != 0) {
 uVar9 = uVar9 | 1;
 }
 uVar7 = (iVar6 + -0xff) - ((uVar4 < 0x200) + 0x300);
 if (uVar4 < 0x200) {
 bVar3 = (byte)(uVar9 >> 0x1f);
 uVar9 = uVar9 << 1;
 lVar1 = CONCAT44(uVar4 * 2 + (uint)(CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar3)),
 uVar8 * 2 + (uint)bVar3);
 }
 param_4 = uVar5 & 0x80000000 | (int)((ulonglong)lVar1 >> 0x20) << 0xb | (uint)lVar1 >> 0x15;
 param_3 = (uint)lVar1 << 0xb | uVar9 >> 0x15;
 uVar5 = uVar9 * 0x800;
 bVar11 = 0xfc < uVar7;
 bVar12 = SBORROW4(uVar7,0xfd);
 uVar4 = uVar7 - 0xfd;
 bVar10 = uVar4 == 0;
 uVar8 = uVar4;
 if (bVar11 && !bVar10) {
 bVar11 = 0x6ff < uVar4;
 bVar12 = SBORROW4(uVar4,0x700);
 uVar8 = uVar7 - 0x7fd;
 bVar10 = uVar4 == 0x700;
 }
 if (!bVar11 || bVar10) {
 bVar10 = 0x7fffffff < uVar5;
 if (uVar5 == 0x80000000) {
 bVar10 = (bool)((byte)(uVar9 >> 0x15) & 1);
 }
 return CONCAT44(param_4 + uVar7 * 0x100000 + (uint)CARRY4(param_3,(uint)bVar10),
 param_3 + bVar10);
 }
 }
 if (!bVar10 && (int)uVar8 < 0 == bVar12) {
 return (ulonglong)(param_4 & 0x80000000 | 0x7ff00000) << 0x20;
 }
 bVar11 = SCARRY4(uVar7,0x36);
 bVar10 = (int)(uVar7 + 0x36) < 0;
 bVar12 = uVar7 == 0xffffffca;
 if (bVar12 || bVar10 != bVar11) {
 param_3 = 0;
 }
 if (bVar12 || bVar10 != bVar11) {
 param_4 = param_4 & 0x80000000;
 }
 if (bVar12 || bVar10 != bVar11) {
 return CONCAT44(param_4,param_3);
 }
 uVar8 = -uVar7;
 uVar4 = uVar8 - 0x20;
 if (0x1f < (int)uVar8) {
 uVar7 = param_3 >> (uVar4 & 0xff) | param_4 << (0x20 - uVar4 & 0xff);
 uVar8 = (param_4 >> (uVar4 & 0xff) & ~((param_4 & 0x80000000) >> (uVar4 & 0xff))) -
 ((int)uVar7 >> 0x1f);
 if ((uVar5 | param_3 << (0x20 - uVar4 & 0xff) | uVar7 << 1) == 0) {
 uVar8 = uVar8 & ~(uVar7 >> 0x1f);
 }
 return CONCAT44(param_4,uVar8) & 0x80000000ffffffff;
 }
 iVar6 = uVar8 - 0x14;
 if (iVar6 == 0 || iVar6 < 0 != SCARRY4(uVar4,0xc)) {
 uVar4 = param_3 << (uVar7 + 0x20 & 0xff);
 uVar7 = param_3 >> (uVar8 & 0xff) | param_4 << (uVar7 + 0x20 & 0xff);
 uVar9 = uVar7 + -((int)uVar4 >> 0x1f);
 if ((uVar5 | uVar4 << 1) == 0) {
 uVar9 = uVar9 & ~(uVar4 >> 0x1f);
 }
 return CONCAT44((param_4 & 0x80000000) + ((param_4 & 0x7fffffff) >> (uVar8 & 0xff)) +
 (uint)CARRY4(uVar7,-((int)uVar4 >> 0x1f)),uVar9);
 }
 uVar4 = 0xc - iVar6;
 uVar8 = param_3 << (uVar4 & 0xff);
 uVar4 = param_3 >> (0x20 - uVar4 & 0xff) | param_4 << (uVar4 & 0xff);
 uVar7 = uVar4 + -((int)uVar8 >> 0x1f);
 if ((uVar5 | uVar8 << 1) == 0) {
 uVar7 = uVar7 & ~(uVar8 >> 0x1f);
 }
 return CONCAT44((param_4 & 0x80000000) + (uint)CARRY4(uVar4,-((int)uVar8 >> 0x1f)),uVar7);
}

// Function: FUN_00011640 @ 0x11640
ulonglong FUN_00011640(uint param_1,uint param_2,uint param_3,uint param_4)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint unaff_r4;
 uint uVar4;
 uint uVar5;
 uint in_r12;
 bool bVar6;
 uVar4 = in_r12 & param_4 >> 0x14;
 if (unaff_r4 == in_r12 || uVar4 == in_r12) {
 bVar6 = (param_1 | param_2 << 1) == 0;
 uVar5 = param_3;
 uVar1 = param_4;
 if (!bVar6) {
 bVar6 = (param_3 | param_4 << 1) == 0;
 uVar5 = param_1;
 uVar1 = param_2;
 }
 uVar3 = uVar1;
 if (((!bVar6) && ((unaff_r4 != in_r12 || ((uVar5 | uVar1 << 0xc) == 0)))) &&
 ((uVar4 != in_r12 || (uVar5 = param_3, uVar3 = param_4, (param_3 | param_4 << 0xc) == 0)))) {
 return (ulonglong)((uVar1 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
 }
 return CONCAT44(uVar3,uVar5) | 0x7ff8000000000000;
 }
 bVar6 = (param_1 | param_2 << 1) == 0;
 if (!bVar6) {
 bVar6 = (param_3 | param_4 << 1) == 0;
 }
 if (bVar6) {
 return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
 }
 if (unaff_r4 == 0) {
 uVar5 = param_2 & 0x80000000;
 do {
 iVar2 = (int)param_1 >> 0x1f;
 param_1 = param_1 << 1;
 param_2 = param_2 * 2 - iVar2;
 } while ((param_2 & 0x100000) == 0);
 param_2 = param_2 | uVar5;
 if (uVar4 != 0) {
 return CONCAT44(param_2,param_1);
 }
 }
 do {
 iVar2 = (int)param_3 >> 0x1f;
 param_3 = param_3 << 1;
 param_4 = param_4 * 2 - iVar2;
 } while ((param_4 & 0x100000) == 0);
 return CONCAT44(param_2,param_1);
}

// Function: __mulsf3 @ 0x116cc
uint __mulsf3(uint param_1,uint param_2,unsigned int param_3,uint param_4)
{
 uint uVar1;
 longlong lVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 int iVar6;
 int iVar7;
 uint uVar8;
 uint uVar9;
 bool bVar10;
 bool bVar11;
 uVar3 = param_1 >> 0x17 & 0xff;
 bVar10 = uVar3 == 0;
 if (!bVar10) {
 param_4 = param_2 >> 0x17 & 0xff;
 bVar10 = param_4 == 0;
 }
 if (!bVar10) {
 bVar10 = uVar3 == 0xff;
 }
 if (!bVar10) {
 bVar10 = param_4 == 0xff;
 }
 if (bVar10) {
 param_4 = param_2 >> 0x17 & 0xff;
 if (uVar3 == 0xff || param_4 == 0xff) {
 uVar9 = param_2;
 if (param_1 != 0 && param_1 != 0x80000000) {
 uVar9 = param_1;
 }
 uVar5 = uVar9;
 if (((((param_1 == 0 || param_1 == 0x80000000) || param_2 == 0) || param_2 == 0x80000000) ||
 ((uVar3 == 0xff && ((uVar9 & 0x7fffff) != 0)))) ||
 ((param_4 == 0xff && (uVar5 = param_2, (param_2 & 0x7fffff) != 0)))) {
 return uVar5 | 0x7fc00000;
 }
 uVar9 = uVar9 ^ param_2;
 goto LAB_00011848;
 }
 bVar10 = (param_1 & 0x7fffffff) == 0;
 if (!bVar10) {
 bVar10 = (param_2 & 0x7fffffff) == 0;
 }
 if (bVar10) {
 return (param_1 ^ param_2) & 0x80000000;
 }
 bVar10 = uVar3 == 0;
 uVar9 = param_1 & 0x80000000;
 while( true ) {
 if (bVar10) {
 param_1 = param_1 << 1;
 bVar10 = (param_1 & 0x800000) == 0;
 }
 if (!bVar10) break;
 uVar3 = uVar3 - 1;
 }
 param_1 = param_1 | uVar9;
 bVar10 = param_4 == 0;
 uVar9 = param_2 & 0x80000000;
 while( true ) {
 if (bVar10) {
 param_2 = param_2 << 1;
 bVar10 = (param_2 & 0x800000) == 0;
 }
 if (!bVar10) break;
 param_4 = param_4 - 1;
 }
 param_2 = param_2 | uVar9;
 }
 iVar4 = uVar3 + param_4;
 uVar9 = param_1 ^ param_2;
 uVar3 = param_1 << 9;
 bVar10 = uVar3 == 0;
 if (!bVar10) {
 param_2 = param_2 << 9;
 bVar10 = param_2 == 0;
 }
 if (bVar10) {
 if (uVar3 == 0) {
 param_2 = param_2 << 9;
 }
 uVar9 = uVar9 & 0x80000000 | param_1 & 0x7fffff | param_2 >> 9;
 bVar11 = SBORROW4(iVar4,0x7f);
 iVar6 = iVar4 + -0x7f;
 bVar10 = iVar6 == 0;
 iVar7 = iVar6;
 if (!bVar10 && 0x7e < iVar4) {
 bVar11 = SBORROW4(0xff,iVar6);
 iVar7 = -iVar6 + 0xff;
 bVar10 = -iVar6 == -0xff;
 }
 if (!bVar10 && iVar7 < 0 == bVar11) {
 uVar9 = uVar9 | iVar6 * 0x800000;
 }
 if (!bVar10 && iVar7 < 0 == bVar11) {
 return uVar9;
 }
 uVar9 = uVar9 | 0x800000;
 uVar8 = 0;
 bVar11 = SBORROW4(iVar6,1);
 uVar5 = iVar4 - 0x80;
 bVar10 = uVar5 == 0;
 uVar3 = uVar5;
 }
 else {
 lVar2 = (ulonglong)(param_2 >> 5 | 0x8000000) * (ulonglong)(uVar3 >> 5 | 0x8000000);
 bVar10 = (uint)((ulonglong)lVar2 >> 0x20) < 0x800000;
 if (bVar10) {
 lVar2 = lVar2 * 2;
 }
 uVar8 = (uint)lVar2;
 uVar9 = uVar9 & 0x80000000 | (uint)((ulonglong)lVar2 >> 0x20);
 uVar5 = iVar4 - (bVar10 + 0x7f);
 bVar11 = SBORROW4(uVar5,0xfd);
 bVar10 = uVar5 == 0xfd;
 uVar3 = uVar5 - 0xfd;
 if (uVar5 < 0xfe) {
 uVar3 = uVar9 + uVar5 * 0x800000 + (uint)(0x7fffffff < uVar8);
 if (uVar8 == 0x80000000) {
 uVar3 = uVar3 & 0xfffffffe;
 }
 return uVar3;
 }
 }
 if (bVar10 || (int)uVar3 < 0 != bVar11) {
 bVar10 = (int)(uVar5 + 0x19) < 0;
 if (uVar5 == 0xffffffe7 || bVar10 != SCARRY4(uVar5,0x19)) {
 uVar9 = uVar9 & 0x80000000;
 }
 if (uVar5 != 0xffffffe7 && bVar10 == SCARRY4(uVar5,0x19)) {
 uVar1 = (uVar9 << 1) >> (-uVar5 & 0xff);
 uVar3 = uVar9 << (uVar5 + 0x20 & 0xff);
 uVar9 = (uVar9 & 0x80000000 | uVar1 >> 1) + (uint)((byte)uVar1 & 1);
 if ((uVar8 | uVar3 << 1) == 0) {
 uVar9 = uVar9 & ~(uVar3 >> 0x1f);
 }
 return uVar9;
 }
 return uVar9;
 }
LAB_00011848:
 return uVar9 & 0x80000000 | 0x7f800000;
}

// Function: __aeabi_drsub @ 0x11864
void __aeabi_drsub(unsigned int param_1,uint param_2)
{
 __adddf3(param_1,param_2 ^ 0x80000000,0,0);
 return;
}

// Function: __subdf3 @ 0x1186c
ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)
{
 int iVar1;
 uint uVar2;
 byte bVar3;
 byte bVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 int iVar10;
 uint uVar11;
 uint uVar12;
 uint uVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 uVar8 = param_4 ^ 0x80000000;
 uVar11 = param_2 << 1;
 param_4 = param_4 << 1;
 bVar14 = uVar11 == param_4 && param_1 == param_3;
 if (uVar11 != param_4 || param_1 != param_3) {
 bVar14 = (uVar11 | param_1) == 0;
 }
 if (!bVar14) {
 bVar14 = (param_4 | param_3) == 0;
 }
 iVar10 = (int)uVar11 >> 0x15;
 if (!bVar14) {
 bVar14 = iVar10 == -1;
 }
 iVar1 = (int)param_4 >> 0x15;
 if (!bVar14) {
 bVar14 = iVar1 == -1;
 }
 if (bVar14) {
 if (iVar10 == -1 || iVar1 == -1) {
 uVar11 = uVar8;
 uVar12 = param_3;
 if (iVar10 == -1) {
 uVar11 = param_2;
 uVar12 = param_1;
 }
 if (iVar10 != -1 || iVar1 != -1) {
 param_3 = uVar12;
 uVar8 = uVar11;
 }
 bVar14 = (uVar12 | uVar11 << 0xc) == 0;
 if (bVar14) {
 bVar14 = (param_3 | uVar8 << 0xc) == 0;
 }
 if (bVar14) {
 bVar14 = uVar11 == uVar8;
 }
 if (!bVar14) {
 uVar11 = uVar11 | 0x80000;
 }
 return CONCAT44(uVar11,uVar12);
 }
 if (uVar11 != param_4 || param_1 != param_3) {
 if ((uVar11 | param_1) == 0) {
 param_1 = param_3;
 param_2 = uVar8;
 }
 return CONCAT44(param_2,param_1);
 }
 if (param_2 != uVar8) {
 return 0;
 }
 if (uVar11 >> 0x15 == 0) {
 bVar3 = (byte)(param_1 >> 0x1f);
 uVar11 = param_2 * 2 + (uint)bVar3;
 if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar3)) {
 uVar11 = uVar11 | 0x80000000;
 }
 return CONCAT44(uVar11,param_1 << 1);
 }
 if (uVar11 < 0xffc00000) {
 return CONCAT44(param_2 + 0x100000,param_1);
 }
 param_2 = param_2 & 0x80000000;
LAB_00011ae0:
 return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
 }
 uVar11 = uVar11 >> 0x15;
 param_4 = param_4 >> 0x15;
 uVar12 = param_4 - uVar11;
 bVar14 = uVar12 != 0;
 if (param_4 < uVar11) {
 uVar12 = -uVar12;
 }
 uVar7 = param_1;
 uVar9 = param_2;
 if (bVar14 && uVar11 <= param_4) {
 uVar11 = uVar11 + uVar12;
 uVar7 = param_3;
 uVar9 = uVar8;
 param_3 = param_1;
 uVar8 = param_2;
 }
 if (0x36 < uVar12) {
 return CONCAT44(uVar9,uVar7);
 }
 uVar6 = uVar9 & 0xfffff | 0x100000;
 if ((uVar9 & 0x80000000) != 0) {
 bVar14 = uVar7 != 0;
 uVar7 = -uVar7;
 uVar6 = -(uVar6 + bVar14);
 }
 uVar9 = uVar8 & 0xfffff | 0x100000;
 if ((uVar8 & 0x80000000) != 0) {
 bVar14 = param_3 != 0;
 param_3 = -param_3;
 uVar9 = -(uVar9 + bVar14);
 }
 if (uVar11 == uVar12) {
 uVar9 = uVar9 ^ 0x100000;
 if (uVar11 == 0) {
 uVar6 = uVar6 ^ 0x100000;
 uVar11 = 1;
 }
 else {
 uVar12 = uVar12 - 1;
 }
 }
 uVar8 = -uVar12 + 0x20;
 if ((int)uVar12 < 0x21) {
 uVar13 = param_3 << (uVar8 & 0xff);
 param_3 = param_3 >> (uVar12 & 0xff);
 uVar5 = uVar7 + param_3;
 uVar2 = uVar9 << (uVar8 & 0xff);
 uVar8 = uVar5 + uVar2;
 uVar12 = uVar6 + CARRY4(uVar7,param_3) + ((int)uVar9 >> (uVar12 & 0xff)) +
 (uint)CARRY4(uVar5,uVar2);
 }
 else {
 uVar13 = uVar9 << (-uVar12 + 0x40 & 0xff);
 if (param_3 != 0) {
 uVar13 = uVar13 | 2;
 }
 uVar12 = (int)uVar9 >> (uVar12 - 0x20 & 0xff);
 uVar8 = uVar7 + uVar12;
 uVar12 = uVar6 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar7,uVar12);
 }
 param_2 = uVar12 & 0x80000000;
 uVar7 = uVar12;
 if ((int)uVar12 < 0) {
 bVar14 = uVar13 == 0;
 uVar13 = -uVar13;
 uVar7 = -uVar8;
 uVar8 = -(uVar8 + !bVar14);
 uVar7 = -(uVar12 + (bVar14 <= uVar7));
 }
 if (0xfffff < uVar7) {
 uVar9 = uVar11 - 1;
 if (0x1fffff < uVar7) {
 bVar3 = (byte)uVar7;
 uVar7 = uVar7 >> 1;
 bVar4 = (byte)uVar8;
 uVar8 = (uint)(bVar3 & 1) << 0x1f | uVar8 >> 1;
 uVar13 = (uint)(bVar4 & 1) << 0x1f | uVar13 >> 1;
 uVar9 = uVar11;
 if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011ae0;
 }
LAB_00011988:
 bVar14 = 0x7fffffff < uVar13;
 if (uVar13 == 0x80000000) {
 bVar14 = (bool)((byte)uVar8 & 1);
 }
 return CONCAT44(uVar7 + uVar9 * 0x100000 + (uint)CARRY4(uVar8,(uint)bVar14) | param_2,
 uVar8 + bVar14);
 }
 bVar3 = (byte)(uVar13 >> 0x1f);
 uVar13 = uVar13 << 1;
 uVar9 = uVar8 * 2;
 bVar14 = CARRY4(uVar8,uVar8);
 uVar8 = uVar8 * 2 + (uint)bVar3;
 uVar7 = uVar7 * 2 + (uint)(bVar14 || CARRY4(uVar9,(uint)bVar3));
 uVar9 = uVar11 - 2;
 if (uVar11 - 1 != 0 && 0xfffff < uVar7) goto LAB_00011988;
 uVar11 = uVar8;
 uVar6 = uVar7;
 if (uVar7 == 0) {
 uVar11 = 0;
 uVar6 = uVar8;
 }
 iVar10 = LZCOUNT(uVar6);
 if (uVar7 == 0) {
 iVar10 = iVar10 + 0x20;
 }
 uVar7 = iVar10 - 0xb;
 bVar16 = SBORROW4(uVar7,0x20);
 uVar8 = iVar10 - 0x2b;
 bVar14 = (int)uVar8 < 0;
 bVar15 = uVar8 == 0;
 if ((int)uVar7 < 0x20) {
 bVar16 = SCARRY4(uVar8,0xc);
 iVar10 = iVar10 + -0x1f;
 bVar14 = iVar10 < 0;
 bVar15 = iVar10 == 0;
 uVar8 = uVar7;
 if (!bVar15 && bVar14 == bVar16) {
 uVar11 = uVar6 << (uVar7 & 0xff);
 uVar6 = uVar6 >> (0xcU - iVar10 & 0xff);
 goto LAB_00011a08;
 }
 }
 if (bVar15 || bVar14 != bVar16) {
 uVar13 = 0x20 - uVar8;
 }
 uVar6 = uVar6 << (uVar8 & 0xff);
 if (bVar15 || bVar14 != bVar16) {
 uVar6 = uVar6 | uVar11 >> (uVar13 & 0xff);
 }
 if (bVar15 || bVar14 != bVar16) {
 uVar11 = uVar11 << (uVar8 & 0xff);
 }
LAB_00011a08:
 if ((int)uVar7 <= (int)uVar9) {
 return CONCAT44(uVar6 + (uVar9 - uVar7) * 0x100000 | param_2,uVar11);
 }
 uVar8 = ~(uVar9 - uVar7);
 if ((int)uVar8 < 0x1f) {
 iVar10 = uVar8 - 0x13;
 if (iVar10 != 0 && iVar10 < 0 == SCARRY4(uVar8 - 0x1f,0xc)) {
 return CONCAT44(uVar12,uVar11 >> (0x20 - (0xcU - iVar10) & 0xff) |
 uVar6 << (0xcU - iVar10 & 0xff)) & 0x80000000ffffffff;
 }
 uVar8 = uVar8 + 1;
 return CONCAT44(param_2 | uVar6 >> (uVar8 & 0xff),
 uVar11 >> (uVar8 & 0xff) | uVar6 << (0x20 - uVar8 & 0xff));
 }
 return CONCAT44(uVar12,uVar6 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
}

// Function: __adddf3 @ 0x11870
ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4)
{
 int iVar1;
 uint uVar2;
 byte bVar3;
 byte bVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 uint uVar12;
 uint uVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 uVar9 = param_2 << 1;
 uVar6 = param_4 << 1;
 bVar14 = uVar9 == uVar6 && param_1 == param_3;
 if (uVar9 != uVar6 || param_1 != param_3) {
 bVar14 = (uVar9 | param_1) == 0;
 }
 if (!bVar14) {
 bVar14 = (uVar6 | param_3) == 0;
 }
 iVar8 = (int)uVar9 >> 0x15;
 if (!bVar14) {
 bVar14 = iVar8 == -1;
 }
 iVar1 = (int)uVar6 >> 0x15;
 if (!bVar14) {
 bVar14 = iVar1 == -1;
 }
 if (bVar14) {
 if (iVar8 == -1 || iVar1 == -1) {
 uVar9 = param_4;
 uVar6 = param_3;
 if (iVar8 == -1) {
 uVar9 = param_2;
 uVar6 = param_1;
 }
 if (iVar8 != -1 || iVar1 != -1) {
 param_3 = uVar6;
 param_4 = uVar9;
 }
 bVar14 = (uVar6 | uVar9 << 0xc) == 0;
 if (bVar14) {
 bVar14 = (param_3 | param_4 << 0xc) == 0;
 }
 if (bVar14) {
 bVar14 = uVar9 == param_4;
 }
 if (!bVar14) {
 uVar9 = uVar9 | 0x80000;
 }
 return CONCAT44(uVar9,uVar6);
 }
 if (uVar9 != uVar6 || param_1 != param_3) {
 if ((uVar9 | param_1) == 0) {
 param_1 = param_3;
 param_2 = param_4;
 }
 return CONCAT44(param_2,param_1);
 }
 if (param_2 != param_4) {
 return 0;
 }
 if (uVar9 >> 0x15 == 0) {
 bVar3 = (byte)(param_1 >> 0x1f);
 uVar9 = param_2 * 2 + (uint)bVar3;
 if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar3)) {
 uVar9 = uVar9 | 0x80000000;
 }
 return CONCAT44(uVar9,param_1 << 1);
 }
 if (uVar9 < 0xffc00000) {
 return CONCAT44(param_2 + 0x100000,param_1);
 }
 param_2 = param_2 & 0x80000000;
LAB_00011ae0:
 return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
 }
 uVar9 = uVar9 >> 0x15;
 uVar6 = uVar6 >> 0x15;
 uVar11 = uVar6 - uVar9;
 bVar14 = uVar11 != 0;
 if (uVar6 < uVar9) {
 uVar11 = -uVar11;
 }
 uVar10 = param_1;
 uVar7 = param_2;
 if (bVar14 && uVar9 <= uVar6) {
 uVar9 = uVar9 + uVar11;
 uVar10 = param_3;
 uVar7 = param_4;
 param_3 = param_1;
 param_4 = param_2;
 }
 if (0x36 < uVar11) {
 return CONCAT44(uVar7,uVar10);
 }
 uVar6 = uVar7 & 0xfffff | 0x100000;
 if ((uVar7 & 0x80000000) != 0) {
 bVar14 = uVar10 != 0;
 uVar10 = -uVar10;
 uVar6 = -(uVar6 + bVar14);
 }
 uVar7 = param_4 & 0xfffff | 0x100000;
 if ((param_4 & 0x80000000) != 0) {
 bVar14 = param_3 != 0;
 param_3 = -param_3;
 uVar7 = -(uVar7 + bVar14);
 }
 if (uVar9 == uVar11) {
 uVar7 = uVar7 ^ 0x100000;
 if (uVar9 == 0) {
 uVar6 = uVar6 ^ 0x100000;
 uVar9 = 1;
 }
 else {
 uVar11 = uVar11 - 1;
 }
 }
 uVar13 = -uVar11 + 0x20;
 if ((int)uVar11 < 0x21) {
 uVar12 = param_3 << (uVar13 & 0xff);
 param_3 = param_3 >> (uVar11 & 0xff);
 uVar5 = uVar10 + param_3;
 uVar2 = uVar7 << (uVar13 & 0xff);
 uVar13 = uVar5 + uVar2;
 uVar6 = uVar6 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
 (uint)CARRY4(uVar5,uVar2);
 }
 else {
 uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
 if (param_3 != 0) {
 uVar12 = uVar12 | 2;
 }
 uVar11 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
 uVar13 = uVar10 + uVar11;
 uVar6 = uVar6 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
 }
 param_2 = uVar6 & 0x80000000;
 uVar11 = uVar6;
 if ((int)uVar6 < 0) {
 bVar14 = uVar12 == 0;
 uVar12 = -uVar12;
 uVar11 = -uVar13;
 uVar13 = -(uVar13 + !bVar14);
 uVar11 = -(uVar6 + (bVar14 <= uVar11));
 }
 if (0xfffff < uVar11) {
 uVar10 = uVar9 - 1;
 if (0x1fffff < uVar11) {
 bVar3 = (byte)uVar11;
 uVar11 = uVar11 >> 1;
 bVar4 = (byte)uVar13;
 uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
 uVar12 = (uint)(bVar4 & 1) << 0x1f | uVar12 >> 1;
 uVar10 = uVar9;
 if (0xffbfffff < uVar9 * 0x200000) goto LAB_00011ae0;
 }
LAB_00011988:
 bVar14 = 0x7fffffff < uVar12;
 if (uVar12 == 0x80000000) {
 bVar14 = (bool)((byte)uVar13 & 1);
 }
 return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar13,(uint)bVar14) | param_2,
 uVar13 + bVar14);
 }
 bVar3 = (byte)(uVar12 >> 0x1f);
 uVar12 = uVar12 << 1;
 uVar10 = uVar13 * 2;
 bVar14 = CARRY4(uVar13,uVar13);
 uVar13 = uVar13 * 2 + (uint)bVar3;
 uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar3));
 uVar10 = uVar9 - 2;
 if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_00011988;
 uVar9 = uVar13;
 uVar7 = uVar11;
 if (uVar11 == 0) {
 uVar9 = 0;
 uVar7 = uVar13;
 }
 iVar8 = LZCOUNT(uVar7);
 if (uVar11 == 0) {
 iVar8 = iVar8 + 0x20;
 }
 uVar13 = iVar8 - 0xb;
 bVar16 = SBORROW4(uVar13,0x20);
 uVar11 = iVar8 - 0x2b;
 bVar14 = (int)uVar11 < 0;
 bVar15 = uVar11 == 0;
 if ((int)uVar13 < 0x20) {
 bVar16 = SCARRY4(uVar11,0xc);
 iVar8 = iVar8 + -0x1f;
 bVar14 = iVar8 < 0;
 bVar15 = iVar8 == 0;
 uVar11 = uVar13;
 if (!bVar15 && bVar14 == bVar16) {
 uVar9 = uVar7 << (uVar13 & 0xff);
 uVar7 = uVar7 >> (0xcU - iVar8 & 0xff);
 goto LAB_00011a08;
 }
 }
 if (bVar15 || bVar14 != bVar16) {
 uVar12 = 0x20 - uVar11;
 }
 uVar7 = uVar7 << (uVar11 & 0xff);
 if (bVar15 || bVar14 != bVar16) {
 uVar7 = uVar7 | uVar9 >> (uVar12 & 0xff);
 }
 if (bVar15 || bVar14 != bVar16) {
 uVar9 = uVar9 << (uVar11 & 0xff);
 }
LAB_00011a08:
 if ((int)uVar13 <= (int)uVar10) {
 return CONCAT44(uVar7 + (uVar10 - uVar13) * 0x100000 | param_2,uVar9);
 }
 uVar11 = ~(uVar10 - uVar13);
 if ((int)uVar11 < 0x1f) {
 iVar8 = uVar11 - 0x13;
 if (iVar8 != 0 && iVar8 < 0 == SCARRY4(uVar11 - 0x1f,0xc)) {
 return CONCAT44(uVar6,uVar9 >> (0x20 - (0xcU - iVar8) & 0xff) | uVar7 << (0xcU - iVar8 & 0xff)
 ) & 0x80000000ffffffff;
 }
 uVar11 = uVar11 + 1;
 return CONCAT44(param_2 | uVar7 >> (uVar11 & 0xff),
 uVar9 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff));
 }
 return CONCAT44(uVar6,uVar7 >> (uVar11 - 0x1f & 0xff)) & 0x80000000ffffffff;
}

// Function: __aeabi_ui2d @ 0x11b1c
ulonglong __aeabi_ui2d(uint param_1)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 uint in_r12;
 bool bVar5;
 bool bVar6;
 bool bVar7;
 if (param_1 == 0) {
 return 0;
 }
 uVar1 = 0;
 iVar3 = LZCOUNT(param_1);
 uVar4 = iVar3 + 0x15;
 bVar7 = SBORROW4(uVar4,0x20);
 uVar2 = iVar3 - 0xb;
 bVar5 = (int)uVar2 < 0;
 bVar6 = uVar2 == 0;
 if (uVar4 < 0x20) {
 bVar7 = SCARRY4(uVar2,0xc);
 bVar5 = false;
 bVar6 = iVar3 + 1 == 0;
 uVar2 = uVar4;
 if (!bVar6 && bVar7 == false) {
 uVar1 = param_1 << uVar4;
 param_1 = param_1 >> (0xcU - (iVar3 + 1) & 0xff);
 goto LAB_00011a08;
 }
 }
 if (bVar6 || bVar5 != bVar7) {
 in_r12 = 0x20 - uVar2;
 }
 param_1 = param_1 << (uVar2 & 0xff);
 if (bVar6 || bVar5 != bVar7) {
 param_1 = param_1 | 0U >> (in_r12 & 0xff);
 }
 if (bVar6 || bVar5 != bVar7) {
 uVar1 = 0 << (uVar2 & 0xff);
 }
LAB_00011a08:
 if (uVar4 < 0x433) {
 return CONCAT44(param_1 + (0x432 - uVar4) * 0x100000,uVar1);
 }
 uVar2 = ~(0x432 - uVar4);
 if (0x1e < (int)uVar2) {
 return (ulonglong)(param_1 >> (uVar2 - 0x1f & 0xff));
 }
 iVar3 = uVar2 - 0x13;
 if (iVar3 == 0 || iVar3 < 0 != SCARRY4(uVar2 - 0x1f,0xc)) {
 uVar2 = uVar2 + 1;
 return CONCAT44(param_1 >> (uVar2 & 0xff),
 uVar1 >> (uVar2 & 0xff) | param_1 << (0x20 - uVar2 & 0xff));
 }
 return (ulonglong)(uVar1 >> (0x20 - (0xcU - iVar3) & 0xff) | param_1 << (0xcU - iVar3 & 0xff));
}

// Function: __floatsidf @ 0x11b40
ulonglong __floatsidf(uint param_1)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 uint in_r12;
 bool bVar7;
 bool bVar8;
 bool bVar9;
 if (param_1 == 0) {
 return 0;
 }
 uVar6 = param_1 & 0x80000000;
 uVar2 = param_1;
 if ((int)uVar6 < 0) {
 uVar2 = -param_1;
 }
 uVar1 = 0;
 iVar4 = LZCOUNT(uVar2);
 uVar5 = iVar4 + 0x15;
 bVar9 = SBORROW4(uVar5,0x20);
 uVar3 = iVar4 - 0xb;
 bVar7 = (int)uVar3 < 0;
 bVar8 = uVar3 == 0;
 if (uVar5 < 0x20) {
 bVar9 = SCARRY4(uVar3,0xc);
 bVar7 = false;
 bVar8 = iVar4 + 1 == 0;
 uVar3 = uVar5;
 if (!bVar8 && bVar9 == false) {
 uVar1 = uVar2 << uVar5;
 uVar2 = uVar2 >> (0xcU - (iVar4 + 1) & 0xff);
 goto LAB_00011a08;
 }
 }
 if (bVar8 || bVar7 != bVar9) {
 in_r12 = 0x20 - uVar3;
 }
 uVar2 = uVar2 << (uVar3 & 0xff);
 if (bVar8 || bVar7 != bVar9) {
 uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
 }
 if (bVar8 || bVar7 != bVar9) {
 uVar1 = 0 << (uVar3 & 0xff);
 }
LAB_00011a08:
 if (uVar5 < 0x433) {
 return CONCAT44(uVar2 + (0x432 - uVar5) * 0x100000 | uVar6,uVar1);
 }
 uVar3 = ~(0x432 - uVar5);
 if (0x1e < (int)uVar3) {
 return CONCAT44(param_1,uVar2 >> (uVar3 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 iVar4 = uVar3 - 0x13;
 if (iVar4 == 0 || iVar4 < 0 != SCARRY4(uVar3 - 0x1f,0xc)) {
 uVar3 = uVar3 + 1;
 return CONCAT44(uVar6 | uVar2 >> (uVar3 & 0xff),
 uVar1 >> (uVar3 & 0xff) | uVar2 << (0x20 - uVar3 & 0xff));
 }
 return CONCAT44(param_1,uVar1 >> (0x20 - (0xcU - iVar4) & 0xff) | uVar2 << (0xcU - iVar4 & 0xff))
 & 0x80000000ffffffff;
}

// Function: __extendsfdf2 @ 0x11b68
ulonglong __extendsfdf2(uint param_1,unsigned int param_2,unsigned int param_3,uint param_4)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 uint uVar7;
 uint in_r12;
 bool bVar8;
 bool bVar9;
 bool bVar10;
 uVar3 = param_1 << 1;
 bVar9 = uVar3 == 0;
 uVar1 = param_1 & 0x80000000;
 uVar5 = (uint)((int)uVar3 >> 3) >> 1;
 uVar2 = uVar1 | uVar5;
 param_1 = param_1 << 0x1d;
 if (!bVar9) {
 param_4 = uVar3 & 0xff000000;
 bVar9 = param_4 == 0;
 }
 if (!bVar9) {
 bVar9 = param_4 == 0xff000000;
 }
 if (!bVar9) {
 return CONCAT44(uVar2,param_1) ^ 0x3800000000000000;
 }
 if ((uVar3 & 0xffffff) == 0) {
 return CONCAT44(uVar2,param_1);
 }
 if (param_4 == 0xff000000) {
 return CONCAT44(uVar2,param_1) | 0x8000000000000;
 }
 uVar3 = param_1;
 uVar4 = uVar5;
 if (uVar5 == 0) {
 uVar3 = 0;
 uVar4 = param_1;
 }
 iVar6 = LZCOUNT(uVar4);
 if (uVar5 == 0) {
 iVar6 = iVar6 + 0x20;
 }
 uVar7 = iVar6 - 0xb;
 bVar10 = SBORROW4(uVar7,0x20);
 uVar5 = iVar6 - 0x2b;
 bVar9 = (int)uVar5 < 0;
 bVar8 = uVar5 == 0;
 if ((int)uVar7 < 0x20) {
 bVar10 = SCARRY4(uVar5,0xc);
 iVar6 = iVar6 + -0x1f;
 bVar9 = iVar6 < 0;
 bVar8 = iVar6 == 0;
 uVar5 = uVar7;
 if (!bVar8 && bVar9 == bVar10) {
 uVar3 = uVar4 << (uVar7 & 0xff);
 uVar4 = uVar4 >> (0xcU - iVar6 & 0xff);
 goto LAB_00011a08;
 }
 }
 if (bVar8 || bVar9 != bVar10) {
 in_r12 = 0x20 - uVar5;
 }
 uVar4 = uVar4 << (uVar5 & 0xff);
 if (bVar8 || bVar9 != bVar10) {
 uVar4 = uVar4 | uVar3 >> (in_r12 & 0xff);
 }
 if (bVar8 || bVar9 != bVar10) {
 uVar3 = uVar3 << (uVar5 & 0xff);
 }
LAB_00011a08:
 if ((int)uVar7 < 0x381) {
 return CONCAT44(uVar4 + (0x380 - uVar7) * 0x100000 | uVar1,uVar3);
 }
 uVar5 = ~(0x380 - uVar7);
 if (0x1e < (int)uVar5) {
 return CONCAT44(uVar2,uVar4 >> (uVar5 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 iVar6 = uVar5 - 0x13;
 if (iVar6 == 0 || iVar6 < 0 != SCARRY4(uVar5 - 0x1f,0xc)) {
 uVar5 = uVar5 + 1;
 return CONCAT44(uVar1 | uVar4 >> (uVar5 & 0xff),
 uVar3 >> (uVar5 & 0xff) | uVar4 << (0x20 - uVar5 & 0xff));
 }
 return CONCAT44(uVar2,uVar3 >> (0x20 - (0xcU - iVar6) & 0xff) | uVar4 << (0xcU - iVar6 & 0xff)) &
 0x80000000ffffffff;
}

// Function: __floatundidf @ 0x11bb0
ulonglong __floatundidf(uint param_1,uint param_2)
{
 byte bVar1;
 byte bVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 uint uVar7;
 uint uVar8;
 int iVar9;
 bool bVar10;
 bool bVar11;
 bool bVar12;
 if ((param_1 | param_2) == 0) {
 return CONCAT44(param_2,param_1);
 }
 iVar9 = 0x432;
 uVar8 = param_2 >> 0x16;
 if (uVar8 != 0) {
 iVar9 = 3;
 if (param_2 >> 0x19 != 0) {
 iVar9 = 6;
 }
 if (param_2 >> 0x1c != 0) {
 iVar9 = iVar9 + 3;
 }
 iVar9 = iVar9 - ((int)param_2 >> 0x1f);
 uVar8 = param_1 << (0x20U - iVar9 & 0xff);
 param_1 = param_1 >> iVar9 | param_2 << (0x20U - iVar9 & 0xff);
 param_2 = param_2 >> iVar9;
 iVar9 = iVar9 + 0x432;
 }
 if (0xfffff < param_2) {
 if (0x1fffff < param_2) {
 bVar1 = (byte)param_2;
 param_2 = param_2 >> 1;
 bVar2 = (byte)param_1;
 param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
 uVar8 = (uint)(bVar2 & 1) << 0x1f | uVar8 >> 1;
 iVar9 = iVar9 + 1;
 if (0xffbfffff < (uint)(iVar9 * 0x200000)) {
 return 0x7ff0000000000000;
 }
 }
LAB_00011988:
 bVar11 = 0x7fffffff < uVar8;
 if (uVar8 == 0x80000000) {
 bVar11 = (bool)((byte)param_1 & 1);
 }
 return CONCAT44(param_2 + iVar9 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar11),param_1 + bVar11
 );
 }
 bVar1 = (byte)(uVar8 >> 0x1f);
 uVar8 = uVar8 << 1;
 uVar3 = param_1 * 2;
 bVar11 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 param_2 = param_2 * 2 + (uint)(bVar11 || CARRY4(uVar3,(uint)bVar1));
 bVar11 = iVar9 != 0;
 iVar9 = iVar9 + -1;
 if (bVar11 && 0xfffff < param_2) goto LAB_00011988;
 uVar3 = param_1;
 uVar4 = param_2;
 if (param_2 == 0) {
 uVar3 = 0;
 uVar4 = param_1;
 }
 iVar6 = LZCOUNT(uVar4);
 if (param_2 == 0) {
 iVar6 = iVar6 + 0x20;
 }
 uVar7 = iVar6 - 0xb;
 bVar12 = SBORROW4(uVar7,0x20);
 uVar5 = iVar6 - 0x2b;
 bVar11 = (int)uVar5 < 0;
 bVar10 = uVar5 == 0;
 if ((int)uVar7 < 0x20) {
 bVar12 = SCARRY4(uVar5,0xc);
 iVar6 = iVar6 + -0x1f;
 bVar11 = iVar6 < 0;
 bVar10 = iVar6 == 0;
 uVar5 = uVar7;
 if (!bVar10 && bVar11 == bVar12) {
 uVar3 = uVar4 << (uVar7 & 0xff);
 uVar4 = uVar4 >> (0xcU - iVar6 & 0xff);
 goto LAB_00011a08;
 }
 }
 if (bVar10 || bVar11 != bVar12) {
 uVar8 = 0x20 - uVar5;
 }
 uVar4 = uVar4 << (uVar5 & 0xff);
 if (bVar10 || bVar11 != bVar12) {
 uVar4 = uVar4 | uVar3 >> (uVar8 & 0xff);
 }
 if (bVar10 || bVar11 != bVar12) {
 uVar3 = uVar3 << (uVar5 & 0xff);
 }
LAB_00011a08:
 if ((int)uVar7 <= iVar9) {
 return CONCAT44(uVar4 + (iVar9 - uVar7) * 0x100000,uVar3);
 }
 uVar8 = ~(iVar9 - uVar7);
 if ((int)uVar8 < 0x1f) {
 iVar9 = uVar8 - 0x13;
 if (iVar9 != 0 && iVar9 < 0 == SCARRY4(uVar8 - 0x1f,0xc)) {
 return (ulonglong)(uVar3 >> (0x20 - (0xcU - iVar9) & 0xff) | uVar4 << (0xcU - iVar9 & 0xff));
 }
 uVar8 = uVar8 + 1;
 return CONCAT44(uVar4 >> (uVar8 & 0xff),uVar3 >> (uVar8 & 0xff) | uVar4 << (0x20 - uVar8 & 0xff)
 );
 }
 return (ulonglong)(uVar4 >> (uVar8 - 0x1f & 0xff));
}

// Function: __aeabi_l2d @ 0x11bc4
ulonglong __aeabi_l2d(uint param_1,uint param_2)
{
 byte bVar1;
 byte bVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 uint uVar10;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 if ((param_1 | param_2) == 0) {
 return CONCAT44(param_2,param_1);
 }
 uVar9 = param_2 & 0x80000000;
 uVar4 = param_2;
 if ((int)uVar9 < 0) {
 bVar12 = param_1 != 0;
 param_1 = -param_1;
 uVar4 = -(param_2 + bVar12);
 }
 iVar8 = 0x432;
 uVar10 = uVar4 >> 0x16;
 if (uVar10 != 0) {
 iVar8 = 3;
 if (uVar4 >> 0x19 != 0) {
 iVar8 = 6;
 }
 if (uVar4 >> 0x1c != 0) {
 iVar8 = iVar8 + 3;
 }
 iVar8 = iVar8 - ((int)uVar4 >> 0x1f);
 uVar10 = param_1 << (0x20U - iVar8 & 0xff);
 param_1 = param_1 >> iVar8 | uVar4 << (0x20U - iVar8 & 0xff);
 uVar4 = uVar4 >> iVar8;
 iVar8 = iVar8 + 0x432;
 }
 if (0xfffff < uVar4) {
 if (0x1fffff < uVar4) {
 bVar1 = (byte)uVar4;
 uVar4 = uVar4 >> 1;
 bVar2 = (byte)param_1;
 param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
 uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
 iVar8 = iVar8 + 1;
 if (0xffbfffff < (uint)(iVar8 * 0x200000)) {
 return (ulonglong)(uVar9 | 0x7ff00000) << 0x20;
 }
 }
LAB_00011988:
 bVar12 = 0x7fffffff < uVar10;
 if (uVar10 == 0x80000000) {
 bVar12 = (bool)((byte)param_1 & 1);
 }
 return CONCAT44(uVar4 + iVar8 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12) | uVar9,
 param_1 + bVar12);
 }
 bVar1 = (byte)(uVar10 >> 0x1f);
 uVar10 = uVar10 << 1;
 uVar3 = param_1 * 2;
 bVar12 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 uVar4 = uVar4 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
 bVar12 = iVar8 != 0;
 iVar8 = iVar8 + -1;
 if (bVar12 && 0xfffff < uVar4) goto LAB_00011988;
 uVar3 = param_1;
 uVar5 = uVar4;
 if (uVar4 == 0) {
 uVar3 = 0;
 uVar5 = param_1;
 }
 iVar6 = LZCOUNT(uVar5);
 if (uVar4 == 0) {
 iVar6 = iVar6 + 0x20;
 }
 uVar7 = iVar6 - 0xb;
 bVar13 = SBORROW4(uVar7,0x20);
 uVar4 = iVar6 - 0x2b;
 bVar12 = (int)uVar4 < 0;
 bVar11 = uVar4 == 0;
 if ((int)uVar7 < 0x20) {
 bVar13 = SCARRY4(uVar4,0xc);
 iVar6 = iVar6 + -0x1f;
 bVar12 = iVar6 < 0;
 bVar11 = iVar6 == 0;
 uVar4 = uVar7;
 if (!bVar11 && bVar12 == bVar13) {
 uVar3 = uVar5 << (uVar7 & 0xff);
 uVar5 = uVar5 >> (0xcU - iVar6 & 0xff);
 goto LAB_00011a08;
 }
 }
 if (bVar11 || bVar12 != bVar13) {
 uVar10 = 0x20 - uVar4;
 }
 uVar5 = uVar5 << (uVar4 & 0xff);
 if (bVar11 || bVar12 != bVar13) {
 uVar5 = uVar5 | uVar3 >> (uVar10 & 0xff);
 }
 if (bVar11 || bVar12 != bVar13) {
 uVar3 = uVar3 << (uVar4 & 0xff);
 }
LAB_00011a08:
 if ((int)uVar7 <= iVar8) {
 return CONCAT44(uVar5 + (iVar8 - uVar7) * 0x100000 | uVar9,uVar3);
 }
 uVar4 = ~(iVar8 - uVar7);
 if ((int)uVar4 < 0x1f) {
 iVar8 = uVar4 - 0x13;
 if (iVar8 != 0 && iVar8 < 0 == SCARRY4(uVar4 - 0x1f,0xc)) {
 return CONCAT44(param_2,uVar3 >> (0x20 - (0xcU - iVar8) & 0xff) |
 uVar5 << (0xcU - iVar8 & 0xff)) & 0x80000000ffffffff;
 }
 uVar4 = uVar4 + 1;
 return CONCAT44(uVar9 | uVar5 >> (uVar4 & 0xff),
 uVar3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
 }
 return CONCAT44(param_2,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
}

// Function: __aeabi_frsub @ 0x11c24
void __aeabi_frsub(uint param_1)
{
 __addsf3(param_1 ^ 0x80000000,0,0,0);
 return;
}

// Function: __aeabi_fsub @ 0x11c2c
uint __aeabi_fsub(uint param_1,uint param_2,unsigned int param_3,uint param_4)
{
 int iVar1;
 int iVar2;
 byte bVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 bool bVar9;
 uVar5 = param_2 ^ 0x80000000;
 uVar4 = param_1 << 1;
 bVar9 = uVar4 == 0;
 if (!bVar9) {
 param_4 = param_2 << 1;
 bVar9 = param_4 == 0;
 }
 if (!bVar9) {
 bVar9 = uVar4 == param_4;
 }
 iVar1 = (int)uVar4 >> 0x18;
 if (!bVar9) {
 bVar9 = iVar1 == -1;
 }
 if (!bVar9) {
 bVar9 = (int)param_4 >> 0x18 == -1;
 }
 if (bVar9) {
 iVar2 = (int)(param_2 << 1) >> 0x18;
 if (iVar1 == -1 || iVar2 == -1) {
 uVar4 = uVar5;
 if (iVar1 == -1) {
 uVar4 = param_1;
 }
 if (iVar1 != -1 || iVar2 != -1) {
 uVar5 = uVar4;
 }
 bVar9 = (uVar4 & 0x7fffff) == 0;
 if (bVar9) {
 bVar9 = (uVar5 & 0x7fffff) == 0;
 }
 if (bVar9) {
 bVar9 = uVar4 == uVar5;
 }
 if (!bVar9) {
 uVar4 = uVar4 | 0x400000;
 }
 return uVar4;
 }
 if (uVar4 != param_2 << 1) {
 if (uVar4 == 0) {
 param_1 = uVar5;
 }
 return param_1;
 }
 if (param_1 != uVar5) {
 return 0;
 }
 if ((uVar4 & 0xff000000) == 0) {
 uVar4 = param_1 << 1;
 if (SUB41(param_1 >> 0x1f,0)) {
 uVar4 = uVar4 | 0x80000000;
 }
 return uVar4;
 }
 if (uVar4 < 0xfe000000) {
 return param_1 + 0x800000;
 }
 param_1 = param_1 & 0x80000000;
LAB_00011d90:
 return param_1 | 0x7f800000;
 }
 uVar4 = uVar4 >> 0x18;
 param_4 = param_4 >> 0x18;
 uVar8 = param_4 - uVar4;
 bVar9 = uVar8 != 0;
 uVar7 = uVar4;
 if (bVar9 && uVar4 <= param_4) {
 uVar7 = uVar4 + uVar8;
 }
 if (bVar9 && uVar4 <= param_4) {
 uVar5 = param_1 ^ uVar5;
 }
 if (bVar9 && uVar4 <= param_4) {
 param_1 = uVar5 ^ param_1;
 }
 if (bVar9 && uVar4 <= param_4) {
 uVar5 = param_1 ^ uVar5;
 }
 if (param_4 < uVar4) {
 uVar8 = -uVar8;
 }
 if (0x19 < uVar8) {
 return param_1;
 }
 uVar4 = param_1 & 0xffffff | 0x800000;
 if ((param_1 & 0x80000000) != 0) {
 uVar4 = -uVar4;
 }
 uVar6 = uVar5 & 0xffffff | 0x800000;
 if ((uVar5 & 0x80000000) != 0) {
 uVar6 = -uVar6;
 }
 if (uVar7 == uVar8) {
 uVar6 = uVar6 ^ 0x800000;
 if (uVar7 == 0) {
 uVar4 = uVar4 ^ 0x800000;
 uVar7 = 1;
 }
 else {
 uVar8 = uVar8 - 1;
 }
 }
 uVar4 = uVar4 + ((int)uVar6 >> (uVar8 & 0xff));
 uVar6 = uVar6 << (0x20 - uVar8 & 0xff);
 param_1 = uVar4 & 0x80000000;
 if ((int)uVar4 < 0) {
 bVar9 = uVar6 != 0;
 uVar6 = -uVar6;
 uVar4 = -(uVar4 + bVar9);
 }
 if (uVar4 < 0x800000) {
 iVar1 = (int)uVar6 >> 0x1f;
 uVar6 = uVar6 << 1;
 uVar4 = uVar4 * 2 - iVar1;
 uVar5 = uVar7 - 2;
 if (uVar7 - 1 == 0 || uVar4 < 0x800000) {
 uVar8 = LZCOUNT(uVar4) - 8;
 uVar4 = uVar4 << (uVar8 & 0xff);
 if ((int)uVar5 < (int)uVar8) {
 uVar4 = uVar4 >> (-(uVar5 - uVar8) & 0xff);
 }
 else {
 uVar4 = uVar4 + (uVar5 - uVar8) * 0x800000;
 }
 return uVar4 | param_1;
 }
 }
 else {
 uVar5 = uVar7 - 1;
 if (0xffffff < uVar4) {
 bVar3 = (byte)uVar4;
 uVar4 = uVar4 >> 1;
 uVar6 = (uint)(bVar3 & 1) << 0x1f | uVar6 >> 1;
 uVar5 = uVar7;
 if (0xfd < uVar7) goto LAB_00011d90;
 }
 }
 uVar4 = uVar4 + uVar5 * 0x800000 + (uint)(0x7fffffff < uVar6);
 if (uVar6 == 0x80000000) {
 uVar4 = uVar4 & 0xfffffffe;
 }
 return uVar4 | param_1;
}

// Function: __addsf3 @ 0x11c30
uint __addsf3(uint param_1,uint param_2,unsigned int param_3,uint param_4)
{
 int iVar1;
 int iVar2;
 byte bVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 bool bVar8;
 uVar4 = param_1 << 1;
 bVar8 = uVar4 == 0;
 if (!bVar8) {
 param_4 = param_2 << 1;
 bVar8 = param_4 == 0;
 }
 if (!bVar8) {
 bVar8 = uVar4 == param_4;
 }
 iVar1 = (int)uVar4 >> 0x18;
 if (!bVar8) {
 bVar8 = iVar1 == -1;
 }
 if (!bVar8) {
 bVar8 = (int)param_4 >> 0x18 == -1;
 }
 if (bVar8) {
 iVar2 = (int)(param_2 << 1) >> 0x18;
 if (iVar1 == -1 || iVar2 == -1) {
 uVar4 = param_2;
 if (iVar1 == -1) {
 uVar4 = param_1;
 }
 if (iVar1 != -1 || iVar2 != -1) {
 param_2 = uVar4;
 }
 bVar8 = (uVar4 & 0x7fffff) == 0;
 if (bVar8) {
 bVar8 = (param_2 & 0x7fffff) == 0;
 }
 if (bVar8) {
 bVar8 = uVar4 == param_2;
 }
 if (!bVar8) {
 uVar4 = uVar4 | 0x400000;
 }
 return uVar4;
 }
 if (uVar4 != param_2 << 1) {
 if (uVar4 == 0) {
 param_1 = param_2;
 }
 return param_1;
 }
 if (param_1 != param_2) {
 return 0;
 }
 if ((uVar4 & 0xff000000) == 0) {
 uVar4 = param_1 << 1;
 if (SUB41(param_1 >> 0x1f,0)) {
 uVar4 = uVar4 | 0x80000000;
 }
 return uVar4;
 }
 if (uVar4 < 0xfe000000) {
 return param_1 + 0x800000;
 }
 param_1 = param_1 & 0x80000000;
LAB_00011d90:
 return param_1 | 0x7f800000;
 }
 uVar4 = uVar4 >> 0x18;
 param_4 = param_4 >> 0x18;
 uVar7 = param_4 - uVar4;
 bVar8 = uVar7 != 0;
 uVar6 = uVar4;
 if (bVar8 && uVar4 <= param_4) {
 uVar6 = uVar4 + uVar7;
 }
 if (bVar8 && uVar4 <= param_4) {
 param_2 = param_1 ^ param_2;
 }
 if (bVar8 && uVar4 <= param_4) {
 param_1 = param_2 ^ param_1;
 }
 if (bVar8 && uVar4 <= param_4) {
 param_2 = param_1 ^ param_2;
 }
 if (param_4 < uVar4) {
 uVar7 = -uVar7;
 }
 if (0x19 < uVar7) {
 return param_1;
 }
 uVar4 = param_1 & 0xffffff | 0x800000;
 if ((param_1 & 0x80000000) != 0) {
 uVar4 = -uVar4;
 }
 uVar5 = param_2 & 0xffffff | 0x800000;
 if ((param_2 & 0x80000000) != 0) {
 uVar5 = -uVar5;
 }
 if (uVar6 == uVar7) {
 uVar5 = uVar5 ^ 0x800000;
 if (uVar6 == 0) {
 uVar4 = uVar4 ^ 0x800000;
 uVar6 = 1;
 }
 else {
 uVar7 = uVar7 - 1;
 }
 }
 uVar4 = uVar4 + ((int)uVar5 >> (uVar7 & 0xff));
 uVar5 = uVar5 << (0x20 - uVar7 & 0xff);
 param_1 = uVar4 & 0x80000000;
 if ((int)uVar4 < 0) {
 bVar8 = uVar5 != 0;
 uVar5 = -uVar5;
 uVar4 = -(uVar4 + bVar8);
 }
 if (uVar4 < 0x800000) {
 iVar1 = (int)uVar5 >> 0x1f;
 uVar5 = uVar5 << 1;
 uVar4 = uVar4 * 2 - iVar1;
 uVar7 = uVar6 - 2;
 if (uVar6 - 1 == 0 || uVar4 < 0x800000) {
 uVar6 = LZCOUNT(uVar4) - 8;
 uVar4 = uVar4 << (uVar6 & 0xff);
 if ((int)uVar7 < (int)uVar6) {
 uVar4 = uVar4 >> (-(uVar7 - uVar6) & 0xff);
 }
 else {
 uVar4 = uVar4 + (uVar7 - uVar6) * 0x800000;
 }
 return uVar4 | param_1;
 }
 }
 else {
 uVar7 = uVar6 - 1;
 if (0xffffff < uVar4) {
 bVar3 = (byte)uVar4;
 uVar4 = uVar4 >> 1;
 uVar5 = (uint)(bVar3 & 1) << 0x1f | uVar5 >> 1;
 uVar7 = uVar6;
 if (0xfd < uVar6) goto LAB_00011d90;
 }
 }
 uVar4 = uVar4 + uVar7 * 0x800000 + (uint)(0x7fffffff < uVar5);
 if (uVar5 == 0x80000000) {
 uVar4 = uVar4 & 0xfffffffe;
 }
 return uVar4 | param_1;
}

// Function: __aeabi_ui2f @ 0x11dc0
uint __aeabi_ui2f(uint param_1)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 if (param_1 == 0) {
 return 0;
 }
 uVar1 = LZCOUNT(param_1);
 uVar2 = uVar1 - 8;
 iVar3 = uVar2 * -0x800000 + 0x4a800000;
 if (7 < uVar1) {
 uVar1 = 0 << (uVar2 & 0xff);
 uVar2 = iVar3 + (param_1 << (uVar2 & 0xff)) + (0U >> (0x20 - uVar2 & 0xff)) +
 (uint)(0x7fffffff < uVar1);
 if (uVar1 == 0x80000000) {
 uVar2 = uVar2 & 0xfffffffe;
 }
 return uVar2;
 }
 uVar2 = param_1 << uVar1 + 0x18;
 uVar1 = (iVar3 + (param_1 >> (0x20 - (uVar1 + 0x18) & 0xff))) - ((int)uVar2 >> 0x1f);
 if ((uVar2 & 0x7fffffff) == 0) {
 uVar1 = uVar1 & ~(uVar2 >> 0x1f);
 }
 return uVar1;
}

// Function: __floatsisf @ 0x11dc8
uint __floatsisf(uint param_1)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 uVar3 = param_1 & 0x80000000;
 if ((int)uVar3 < 0) {
 param_1 = -param_1;
 }
 if (param_1 == 0) {
 return 0;
 }
 uVar1 = LZCOUNT(param_1);
 uVar2 = uVar1 - 8;
 iVar4 = ((uVar3 | 0x4b000000) - 0x800000) + uVar2 * -0x800000;
 if (7 < uVar1) {
 uVar3 = 0 << (uVar2 & 0xff);
 uVar1 = iVar4 + (param_1 << (uVar2 & 0xff)) + (0U >> (0x20 - uVar2 & 0xff)) +
 (uint)(0x7fffffff < uVar3);
 if (uVar3 == 0x80000000) {
 uVar1 = uVar1 & 0xfffffffe;
 }
 return uVar1;
 }
 uVar3 = param_1 << uVar1 + 0x18;
 uVar1 = (iVar4 + (param_1 >> (0x20 - (uVar1 + 0x18) & 0xff))) - ((int)uVar3 >> 0x1f);
 if ((uVar3 & 0x7fffffff) == 0) {
 uVar1 = uVar1 & ~(uVar3 >> 0x1f);
 }
 return uVar1;
}

// Function: __floatundisf @ 0x11de8
uint __floatundisf(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 if ((param_1 | param_2) == 0) {
 return param_1;
 }
 uVar1 = param_1;
 uVar2 = param_2;
 if (param_2 == 0) {
 uVar1 = 0;
 uVar2 = param_1;
 }
 iVar5 = 0x5b000000;
 if (param_2 == 0) {
 iVar5 = 0x4b000000;
 }
 uVar3 = LZCOUNT(uVar2);
 uVar4 = uVar3 - 8;
 iVar5 = iVar5 + -0x800000 + uVar4 * -0x800000;
 if (uVar3 < 8) {
 uVar4 = uVar2 << uVar3 + 0x18;
 uVar2 = (iVar5 + (uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff))) - ((int)uVar4 >> 0x1f);
 if ((uVar1 | uVar4 << 1) == 0) {
 uVar2 = uVar2 & ~(uVar4 >> 0x1f);
 }
 return uVar2;
 }
 uVar3 = uVar1 << (uVar4 & 0xff);
 uVar2 = iVar5 + (uVar2 << (uVar4 & 0xff)) + (uVar1 >> (0x20 - uVar4 & 0xff)) +
 (uint)(0x7fffffff < uVar3);
 if (uVar3 == 0x80000000) {
 uVar2 = uVar2 & 0xfffffffe;
 }
 return uVar2;
}

// Function: __aeabi_l2f @ 0x11df8
uint __aeabi_l2f(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 bool bVar7;
 if ((param_1 | param_2) == 0) {
 return param_1;
 }
 uVar5 = param_2 & 0x80000000;
 if ((int)uVar5 < 0) {
 bVar7 = param_1 != 0;
 param_1 = -param_1;
 param_2 = -(param_2 + bVar7);
 }
 uVar1 = param_1;
 uVar2 = param_2;
 if (param_2 == 0) {
 uVar1 = 0;
 uVar2 = param_1;
 }
 uVar5 = uVar5 | 0x5b000000;
 if (param_2 == 0) {
 uVar5 = uVar5 + 0xf0000000;
 }
 uVar3 = LZCOUNT(uVar2);
 uVar4 = uVar3 - 8;
 iVar6 = (uVar5 - 0x800000) + uVar4 * -0x800000;
 if (uVar3 < 8) {
 uVar5 = uVar2 << uVar3 + 0x18;
 uVar2 = (iVar6 + (uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff))) - ((int)uVar5 >> 0x1f);
 if ((uVar1 | uVar5 << 1) == 0) {
 uVar2 = uVar2 & ~(uVar5 >> 0x1f);
 }
 return uVar2;
 }
 uVar5 = uVar1 << (uVar4 & 0xff);
 uVar2 = iVar6 + (uVar2 << (uVar4 & 0xff)) + (uVar1 >> (0x20 - uVar4 & 0xff)) +
 (uint)(0x7fffffff < uVar5);
 if (uVar5 == 0x80000000) {
 uVar2 = uVar2 & 0xfffffffe;
 }
 return uVar2;
}

// Function: __fixsfsi @ 0x11e74
uint __fixsfsi(uint param_1)
{
 uint uVar1;
 uint uVar2;
 if (param_1 << 1 < 0x7f000000) {
 return 0;
 }
 uVar1 = (param_1 << 1) >> 0x18;
 uVar2 = 0x9e - uVar1;
 if (uVar1 < 0x9f && uVar2 != 0) {
 uVar1 = (param_1 << 8 | 0x80000000) >> (uVar2 & 0xff);
 if ((param_1 & 0x80000000) != 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 if ((uVar2 == 0xffffff9f) && ((param_1 & 0x7fffff) != 0)) {
 return 0;
 }
 param_1 = param_1 & 0x80000000;
 if (param_1 == 0) {
 param_1 = 0x7fffffff;
 }
 return param_1;
}



