/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/2/2_gcc_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */


/* Ghidra type definitions */
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef void (*code)(int, ...);
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned char byte;
typedef long long longlong;
typedef unsigned short undefined2;
typedef unsigned char undefined;
typedef unsigned short ushort;

/* Compiler macros for carry/borrow detection */
#define CARRY4(a,b) ((uint)(a) + (uint)(b) < (uint)(a))
#define SCARRY4(a,b) (((int)(a) ^ (int)(b)) >= 0 && ((int)(a) ^ (int)((a)-(b))) < 0)
#define SBORROW4(a,b) (((int)(a) ^ (int)(b)) < 0 && ((int)(a) ^ (int)((a)-(b))) < 0)
#define CONCAT44(hi,lo) (((ulonglong)(uint)(hi) << 32) | (uint)(lo))
#define SUB41(val, idx) ((byte)((val) >> ((idx) * 8)))

/* Function: LZCOUNT - count leading zeros */
int LZCOUNT(uint param_1)
{
 int count;
 
 if (param_1 == 0) {
 return 32;
 }
 count = 0;
 while ((param_1 & 0x80000000) == 0) {
 param_1 = param_1 << 1;
 count = count + 1;
 }
 return count;
}

/* External data declarations */
extern char DAT_00011fa0[];
extern char DAT_00012120[];
extern char DAT_00012244[];
extern char DAT_0001224c[];
extern char DAT_000123f4[];

/* Data definitions */
char DAT_00011fa0[] = "Data Types L1";
char DAT_00012120[] = "Array Types";
char DAT_00012244[] = "test";
char DAT_0001224c[] = "Pointer Types";
char DAT_000123f4[] = "Composite Types";

/* Compiler runtime function declarations */
extern ulonglong __muldf3(undefined4 param_1,uint param_2,uint param_3,uint param_4);
extern ulonglong FUN_00011674(int param_1,uint param_2,int param_3,uint param_4);
extern uint __mulsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4);
extern uint __addsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4);
extern ulonglong __aeabi_dadd(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
extern uint __fixsfsi(uint param_1);
extern int LZCOUNT(uint param_1);
extern void __stack_chk_fail(void);
extern int puts(char *param_1);
extern void __printf_chk(int param_1,char *param_2,...);
extern void *memset(void *param_1,int param_2,uint param_3);


/* Function: double_value @ 00010524 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: process_int @ 0001052c */

int process_int(int param_1)

{
 return param_1 * 2 + 1;
}



/* Function: complex_callback @ 00010538 */

bool complex_callback(int *param_1,int *param_2)

{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}



/* Function: process_char @ 00010554 */

uint process_char(uint param_1)

{
 if (param_1 - 0x41 < 0x1a) {
 param_1 = param_1 + 0x20 & 0xff;
 }
 return param_1;
}



/* Function: process_short @ 00010568 */

int process_short(int param_1,int param_2)

{
 return (param_1 + param_2) * 0x10000 >> 0x10;
}



/* Function: process_long @ 00010578 */

int process_long(int param_1)

{
 return param_1 << 1;
}



/* Function: process_ll @ 00010580 */

undefined8 process_ll(uint param_1,int param_2)

{
 return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_1 * param_2 * 2,
 (int)((ulonglong)param_1 * (ulonglong)param_1));
}



/* Function: process_float @ 00010594 */

void process_float(undefined4 param_1)

{
 undefined4 uVar1;
 
 uVar1 = __mulsf3(param_1,0x3fc00000,0,0);
 uVar1 = __addsf3(uVar1,0x3f000000,0,0);
 return;
}



/* Function: process_double @ 000105ac */

void process_double(undefined4 param_1,undefined4 param_2)

{
 undefined8 uVar1;
 
 uVar1 = __muldf3(param_1,param_2,0,0x3fe00000);
 __aeabi_dadd((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0x9999999a,0x3fb99999,0,0);
 return;
}



/* Function: process_ld @ 000105d8 */

void process_ld(undefined4 param_1,undefined4 param_2)

{
 undefined8 uVar1;
 
 uVar1 = __muldf3(param_1,param_2,param_1,param_2);
 __aeabi_dadd((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,0x3ff00000,0,0);
 return;
}



/* Function: process_bool @ 000105fc */

uint process_bool(uint param_1)

{
 uint uVar1;
 
 if ((int)param_1 < 1) {
 uVar1 = 0;
 }
 else {
 uVar1 = 1 - (param_1 & 1);
 }
 return uVar1 & 1;
}



/* Function: const_param @ 00010614 */

int const_param(int *param_1)

{
 return *param_1 + 10;
}



/* Function: volatile_access @ 00010620 */

int volatile_access(int *param_1)

{
 return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 00010630 */

void test_data_types_l1(void)

{
 puts(&DAT_00011fa0);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000,0);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",0,0x40240000);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 00010794 */

int array_1d_stack(int param_1,int param_2)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 if (0 < param_2) {
 piVar3 = (int *)(param_1 + -4);
 piVar2 = piVar3 + param_2;
 iVar1 = 0;
 do {
 piVar3 = piVar3 + 1;
 iVar1 = iVar1 + *piVar3;
 } while (piVar3 != piVar2);
 return iVar1;
 }
 return 0;
}



/* Function: array_string @ 000107c4 */

char * array_string(char *param_1)

{
 char *pcVar1;
 int iVar2;
 
 if (*param_1 != '\0') {
 iVar2 = 1 - (int)param_1;
 do {
 pcVar1 = param_1 + iVar2;
 param_1 = param_1 + 1;
 } while (*param_1 != '\0');
 return pcVar1;
 }
 return (char *)0x0;
}



/* Function: array_2d_stack @ 000107f4 */

int array_2d_stack(int param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 0xb;
 } while (iVar2 != 0x6e);
 return iVar1;
}



/* Function: array_3d @ 00010818 */

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



/* Function: array_vla @ 0001086c */

int array_vla(int param_1,int param_2)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 if (0 < param_1) {
 piVar2 = (int *)(param_2 + -4);
 piVar3 = piVar2 + param_1;
 iVar1 = 0;
 do {
 piVar2 = piVar2 + 1;
 iVar1 = iVar1 + *piVar2;
 } while (piVar2 != piVar3);
 return iVar1;
 }
 return 0;
}



/* Function: array_pointer @ 0001089c */

int array_pointer(int param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 if (0 < param_2) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 10;
 } while (iVar2 != param_2 * 10);
 return iVar1;
 }
 return 0;
}



/* Function: pointer_array @ 000108d8 */

int pointer_array(int param_1,int param_2)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = param_2;
 if (9 < param_2) {
 iVar4 = 10;
 }
 if (0 < param_2) {
 piVar2 = (int *)(param_1 + -4);
 iVar3 = 0;
 iVar1 = 0;
 do {
 piVar2 = piVar2 + 1;
 if ((int *)*piVar2 != (int *)0x0) {
 iVar1 = iVar1 + *(int *)*piVar2;
 }
 iVar3 = iVar3 + 1;
 } while (iVar3 < iVar4);
 return iVar1;
 }
 return 0;
}



/* Function: array_complex_index @ 00010920 */

undefined4 array_complex_index(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
 if (param_2 <= (int)param_4 || (int)(param_4 | param_5) < 0) {
 return 0xffffffff;
 }
 if (param_3 <= (int)param_5) {
 return 0xffffffff;
 }
 return *(undefined4 *)(param_1 + (param_5 * param_2 + param_4) * 4);
}



/* Function: array_oob @ 00010964 */

int array_oob(int param_1,int param_2)

{
 int iVar1;
 int *piVar2;
 
 if (-1 < param_2) {
 piVar2 = (int *)(param_1 + -4);
 iVar1 = 0;
 do {
 piVar2 = piVar2 + 1;
 iVar1 = iVar1 + *piVar2;
 } while (piVar2 != (int *)(param_1 + param_2 * 4));
 return iVar1;
 }
 return 0;
}



/* Function: test_array_types @ 00010994 */

void test_array_types(void)

{
 undefined4 uVar1;
 int iVar2;
 char *pcVar3;
 int iVar4;
 int *piVar5;
 int *piVar6;
 int iVar7;
 char *pcVar8;
 undefined4 local_514;
 undefined4 local_510;
 undefined4 local_50c;
 undefined4 local_508;
 undefined4 uStack_504;
 undefined4 uStack_500;
 undefined4 local_4fc;
 undefined4 uStack_4f8;
 undefined4 uStack_4f4;
 undefined4 uStack_4f0;
 undefined4 local_4ec;
 undefined4 *local_4e8;
 undefined4 *local_4e4;
 undefined4 *local_4e0;
 undefined4 local_4dc;
 undefined4 uStack_4d8;
 undefined4 local_4d4;
 undefined4 local_4d0;
 undefined4 local_4cc;
 undefined4 local_4c8;
 int local_4c4;
 int local_4c0 [17];
 undefined4 local_47c;
 undefined4 local_470 [10];
 undefined4 local_448;
 undefined4 local_420;
 undefined4 local_3f8;
 undefined4 local_3d0;
 int iStack_3ac;
 undefined1 local_3a8 [400];
 char local_218 [500];
 char local_24 [4];
 undefined2 local_20;
 int local_1c;
 
 local_1c = 0;
 puts(&DAT_00012120);
 local_4fc = 1;
 uStack_4f8 = 2;
 uStack_4f4 = 3;
 uStack_4f0 = 4;
 local_4ec = 5;
 uVar1 = array_1d_stack(&local_4fc,5);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_24[0] = 'h';
 local_24[1] = 'e';
 local_24[2] = 'l';
 local_24[3] = 'l';
 local_20 = 0x6f;
 pcVar3 = array_string(local_24);
 __printf_chk(1,"ARR-L1-02 (array_string): %s\n",pcVar3);
 piVar6 = &iStack_3ac;
 iVar2 = 0;
 do {
 iVar7 = 0;
 piVar5 = piVar6;
 do {
 iVar4 = iVar7;
 if (iVar2 != iVar7) {
 iVar4 = 0;
 }
 piVar5 = piVar5 + 1;
 *piVar5 = iVar4;
 iVar7 = iVar7 + 1;
 } while (iVar7 != 10);
 iVar2 = iVar2 + 1;
 piVar6 = piVar6 + 10;
 } while (iVar2 != 10);
 uVar1 = array_2d_stack(local_3a8);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 pcVar3 = local_218;
 do {
 iVar2 = 0;
 pcVar8 = pcVar3;
 do {
 pcVar8[0] = '\x01';
 pcVar8[1] = '\0';
 pcVar8[2] = '\0';
 pcVar8[3] = '\0';
 pcVar8[4] = '\x01';
 pcVar8[5] = '\0';
 pcVar8[6] = '\0';
 pcVar8[7] = '\0';
 pcVar8[8] = '\x01';
 pcVar8[9] = '\0';
 pcVar8[10] = '\0';
 pcVar8[0xb] = '\0';
 pcVar8[0xc] = '\x01';
 pcVar8[0xd] = '\0';
 pcVar8[0xe] = '\0';
 pcVar8[0xf] = '\0';
 pcVar8[0x10] = '\x01';
 pcVar8[0x11] = '\0';
 pcVar8[0x12] = '\0';
 pcVar8[0x13] = '\0';
 iVar2 = iVar2 + 1;
 pcVar8 = pcVar8 + 0x14;
 } while (iVar2 != 5);
 pcVar3 = pcVar3 + 100;
 } while (pcVar3 != local_24);
 uVar1 = array_3d(local_218);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",uVar1);
 local_508 = 10;
 uStack_504 = 0x14;
 uStack_500 = 0x1e;
 uVar1 = array_vla(3,&local_508);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",uVar1);
 local_470[0] = 0;
 local_448 = 10;
 local_420 = 0x14;
 local_3f8 = 0x1e;
 local_3d0 = 0x28;
 uVar1 = array_pointer(local_470,5);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_514 = 10;
 local_510 = 0x14;
 local_50c = 0x1e;
 local_4dc = 0;
 uStack_4d8 = 0;
 local_4d4 = 0;
 local_4d0 = 0;
 local_4cc = 0;
 local_4c8 = 0;
 local_4c4 = 0;
 local_4e8 = &local_514;
 local_4e4 = &local_510;
 local_4e0 = &local_50c;
 uVar1 = pointer_array(&local_4e8,3);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",uVar1);
 piVar6 = &local_4c4;
 iVar2 = 0;
 do {
 piVar6 = piVar6 + 1;
 *piVar6 = iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x14);
 uVar1 = array_complex_index(&local_4c4,0x14,5,0,1);
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",uVar1);
 if (local_1c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ptr_single @ 00010c28 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00010c34 */

int ptr_double(undefined4 *param_1)

{
 return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00010c44 */

int ptr_triple(undefined4 *param_1)

{
 return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00010c58 */

int ptr_increment(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 if (0 < param_2) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1;
 iVar2 = iVar2 + 1;
 param_1 = param_1 + 1;
 } while (param_2 != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: ptr_offset @ 00010c8c */

undefined4 ptr_offset(int param_1,int param_2)

{
 return *(undefined4 *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 00010c94 */

int ptr_diff(int param_1,int param_2)

{
 return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 00010ca0 */

uint ptr_void(uint *param_1,int param_2)

{
 uint uVar1;
 
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 uVar1 = (uint)(byte)*param_1;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: ptr_const @ 00010cc0 */

int ptr_const(int *param_1)

{
 return *param_1 << 1;
}



/* Function: ptr_const_ptr @ 00010ccc */

void ptr_const_ptr(int *param_1)

{
 *param_1 = *param_1 + 5;
 return;
}



/* Function: ptr_func_simple @ 00010ce0 */

void ptr_func_simple(code *param_1,undefined4 param_2)

{
 (*param_1)(param_2);
 return;
}



/* Function: ptr_func_complex @ 00010cf4 */

int ptr_func_complex(code *param_1,undefined4 param_2)

{
 undefined *local_14;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 local_14 = &DAT_00012244;
 local_10 = 0;
 (*param_1)(param_2,&local_14);
 if (local_c == 0) {
 return 0;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ptr_cast @ 00010d58 */

undefined4 ptr_cast(undefined4 *param_1)

{
 return *param_1;
}



/* Function: opaque_handle_create @ 00010d60 */

void opaque_handle_create(void)

{
 return;
}



/* Function: opaque_handle_op @ 00010d64 */

int opaque_handle_op(int param_1)

{
 return param_1 << 1;
}



/* Function: test_pointer_types @ 00010d6c */

void test_pointer_types(void)

{
 undefined4 uVar1;
 undefined4 local_38;
 undefined1 *local_34;
 undefined1 **local_30;
 undefined4 local_2c;
 undefined4 local_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined4 uStack_1c;
 undefined4 local_18;
 int local_14;
 
 local_14 = 0;
 puts(&DAT_0001224c);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 local_38 = 5;
 local_30 = &local_34;
 local_34 = (undefined1 *)&local_38;
 uVar1 = ptr_triple(&local_30);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",uVar1);
 local_28 = 1;
 uStack_24 = 2;
 uStack_20 = 3;
 uStack_1c = 4;
 local_18 = 5;
 uVar1 = ptr_increment(&local_28,5);
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 ptr_func_simple(double_value,5);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",0);
 local_2c = 5;
 uVar1 = ptr_func_complex(complex_callback,&local_2c);
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (local_14 == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: struct_simple @ 00010f3c */

int struct_simple(int *param_1)

{
 return *param_1 + param_1[1] + param_1[2];
}



/* Function: struct_array @ 00010f54 */

int struct_array(int *param_1,int param_2)

{
 int iVar1;
 int *piVar2;
 
 if (0 < param_2) {
 piVar2 = param_1 + param_2 * 3;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1 + param_1[1] + param_1[2];
 param_1 = param_1 + 3;
 } while (param_1 != piVar2);
 return iVar1;
 }
 return 0;
}



/* Function: struct_nested @ 00010f9c */

int struct_nested(int *param_1)

{
 return *param_1 + param_1[3];
}



/* Function: struct_deep @ 00010fac */

int struct_deep(int param_1)

{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}



/* Function: struct_with_ptr @ 00010fbc */

int struct_with_ptr(int *param_1)

{
 int iVar1;
 
 if ((int *)param_1[1] == (int *)0x0) {
 iVar1 = 0;
 }
 else {
 iVar1 = *(int *)param_1[1];
 }
 return *param_1 + iVar1;
}



/* Function: struct_bitfields @ 00010fd8 */

int struct_bitfields(ushort *param_1)

{
 uint uVar1;
 
 uVar1 = (uint)(byte)*param_1;
 return (uVar1 & 1) + ((uVar1 << 0x1d) >> 0x1e) + ((uVar1 << 0x1a) >> 0x1d) + (uint)(*param_1 >> 6)
 ;
}



/* Function: union_type @ 00010ffc */

uint union_type(uint *param_1,int param_2)

{
 uint uVar1;
 
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 != 1) {
 return (uint)(byte)*param_1;
 }
 uVar1 = __fixsfsi(*param_1);
 return uVar1;
}



/* Function: union_array @ 0001102c */

int union_array(int param_1,int param_2)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 if (0 < param_2) {
 piVar3 = (int *)(param_1 + -4);
 piVar2 = piVar3 + param_2;
 iVar1 = 0;
 do {
 piVar3 = piVar3 + 1;
 iVar1 = iVar1 + *piVar3;
 } while (piVar3 != piVar2);
 return iVar1;
 }
 return 0;
}



/* Function: enum_type @ 0001105c */

int enum_type(int param_1)

{
 return param_1 * 10;
}



/* Function: enum_switch @ 00011068 */

undefined4 enum_switch(undefined4 param_1)

{
 switch(param_1) {
 case 0:
 return 0;
 case 1:
 return 100;
 case 2:
 return 0x32;
 case 3:
 return 0xffffffff;
 default:
 return 0xffffff9d;
 }
}



/* Function: struct_func_ptr @ 000110ac */

void struct_func_ptr(undefined4 *param_1)

{
 (*(code *)param_1[1])(*param_1);
 return;
}



/* Function: linked_list @ 000110c0 */

int linked_list(int *param_1)

{
 int iVar1;
 
 if (param_1 != (int *)0x0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = (int *)param_1[1];
 } while (param_1 != (int *)0x0);
 return iVar1;
 }
 return 0;
}



/* Function: doubly_linked_list @ 000110ec */

int doubly_linked_list(int *param_1)

{
 int iVar1;
 
 if (param_1 != (int *)0x0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *param_1;
 param_1 = (int *)param_1[1];
 } while (param_1 != (int *)0x0);
 return iVar1;
 }
 return 0;
}



/* Function: binary_tree_sum @ 00011118 */

int binary_tree_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (param_1 != (int *)0x0) {
 iVar1 = binary_tree_sum(param_1[1]);
 iVar3 = *param_1;
 iVar2 = binary_tree_sum(param_1[2]);
 return iVar1 + iVar3 + iVar2;
 }
 return 0;
}



/* Function: binary_tree @ 0001114c */

void binary_tree(void)

{
 binary_tree_sum((int *)0x0);
 return;
}



/* Function: graph_traverse @ 00011158 */

int graph_traverse(int param_1)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 
 if (*(int *)(param_1 + 0x28) < 1) {
 return 0;
 }
 piVar2 = (int *)(param_1 + -4);
 piVar4 = piVar2 + *(int *)(param_1 + 0x28);
 iVar1 = 0;
 do {
 piVar2 = piVar2 + 1;
 for (piVar3 = (int *)*piVar2; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
 iVar1 = iVar1 + *piVar3;
 }
 } while (piVar2 != piVar4);
 return iVar1;
}



/* Function: test_composite_types @ 000111a4 */

void test_composite_types(void)

{
 undefined4 uVar1;
 undefined4 local_dc;
 undefined4 local_d8;
 undefined4 local_d4;
 undefined4 *local_d0;
 undefined4 local_cc;
 undefined4 uStack_c8;
 undefined4 local_c4;
 code *local_c0;
 undefined4 local_bc;
 undefined4 local_b8;
 undefined4 local_b4;
 undefined4 uStack_b0;
 undefined4 uStack_ac;
 undefined4 local_a8;
 undefined4 local_a4;
 undefined4 local_a0;
 undefined4 local_9c;
 undefined4 uStack_98;
 undefined4 uStack_94;
 undefined4 local_90;
 undefined4 uStack_8c;
 undefined4 uStack_88;
 undefined4 uStack_84;
 undefined4 local_80;
 undefined4 uStack_7c;
 undefined4 local_78;
 undefined4 *local_74;
 undefined4 local_70;
 undefined4 *local_6c;
 undefined4 local_68;
 undefined4 local_64;
 undefined4 local_60;
 undefined4 *local_5c;
 undefined4 local_58;
 undefined4 local_54;
 undefined4 local_50;
 undefined4 *local_4c;
 undefined4 *local_48;
 undefined1 auStack_44 [36];
 undefined4 local_20;
 int local_1c;
 
 local_1c = 0;
 puts(&DAT_000123f4);
 local_b4 = 1;
 uStack_b0 = 2;
 uStack_ac = 3;
 uVar1 = struct_simple(&local_b4);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",uVar1);
 local_90 = 1;
 uStack_8c = 1;
 uStack_88 = 1;
 uStack_84 = 2;
 local_80 = 2;
 uStack_7c = 2;
 uVar1 = struct_array(&local_90,2);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 local_dc = 0x14;
 local_d8 = 0;
 local_d4 = 10;
 local_d0 = &local_dc;
 uVar1 = struct_with_ptr(&local_d4);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_cc = 0x191d;
 uStack_c8 = 0;
 uVar1 = struct_bitfields(&local_cc);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 local_9c = 10;
 uStack_98 = 0x14;
 uStack_94 = 0x1e;
 uVar1 = union_array(&local_9c,3);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",uVar1);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 local_c4 = 10;
 local_c0 = process_int;
 struct_func_ptr(&local_c4);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",0);
 local_78 = 10;
 local_74 = &local_70;
 local_70 = 0x14;
 local_6c = &local_68;
 local_68 = 0x1e;
 local_64 = 0;
 uVar1 = linked_list(&local_78);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",uVar1);
 local_60 = 10;
 local_4c = &local_60;
 local_5c = &local_54;
 local_58 = 0;
 local_54 = 0x14;
 local_50 = 0;
 uVar1 = doubly_linked_list(&local_60);
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_a8 = 100;
 local_a4 = 0;
 local_a0 = 0;
 uVar1 = binary_tree_sum(&local_a8);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_bc = 1;
 local_b8 = 0;
 memset(auStack_44,0,0x24);
 local_48 = &local_bc;
 local_20 = 2;
 uVar1 = graph_traverse(&local_48);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",uVar1);
 if (local_1c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: main @ 00011478 */

undefined4 main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* Function: __muldf3 @ 00011494 */

ulonglong __muldf3(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
 longlong lVar1;
 ulonglong uVar2;
 byte bVar3;
 uint uVar4;
 uint extraout_r2;
 uint extraout_r3;
 uint uVar5;
 uint uVar6;
 int iVar7;
 uint uVar8;
 uint unaff_r5;
 uint uVar9;
 uint uVar10;
 uint extraout_r12;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 ulonglong uVar14;
 
 uVar14 = CONCAT44(param_2,param_1);
 uVar10 = 0x7ff;
 uVar6 = param_2 >> 0x14 & 0x7ff;
 bVar11 = uVar6 == 0;
 if (!bVar11) {
 unaff_r5 = param_4 >> 0x14 & 0x7ff;
 bVar11 = unaff_r5 == 0;
 }
 if (!bVar11) {
 bVar11 = uVar6 == 0x7ff;
 }
 if (!bVar11) {
 bVar11 = unaff_r5 == 0x7ff;
 }
 if (bVar11) {
 uVar14 = FUN_00011674(0,0,0,0);
 param_3 = extraout_r2;
 param_4 = extraout_r3;
 uVar10 = extraout_r12;
 }
 uVar4 = (uint)(uVar14 >> 0x20);
 iVar7 = uVar6 + unaff_r5;
 uVar9 = uVar4 ^ param_4;
 uVar4 = uVar4 & ~(uVar10 << 0x15);
 param_4 = param_4 & ~(uVar10 << 0x15);
 uVar6 = uVar4 | 0x100000;
 uVar5 = param_4 | 0x100000;
 if ((uint)uVar14 == 0 && (uVar4 & 0xfffff) == 0 || param_3 == 0 && (param_4 & 0xfffff) == 0) {
 param_3 = (uint)uVar14 | param_3;
 uVar5 = (uVar9 & 0x80000000 | uVar6) ^ uVar5;
 uVar6 = uVar10 >> 1;
 bVar13 = SBORROW4(iVar7,uVar6);
 uVar8 = iVar7 - uVar6;
 bVar11 = uVar8 == 0;
 uVar4 = uVar8;
 if (!bVar11 && (int)uVar6 <= iVar7) {
 bVar13 = SBORROW4(uVar10,uVar8);
 uVar4 = uVar10 - uVar8;
 bVar11 = uVar10 == uVar8;
 }
 if (!bVar11 && (int)uVar4 < 0 == bVar13) {
 return CONCAT44(uVar5 | uVar8 * 0x100000,param_3);
 }
 uVar5 = uVar5 | 0x100000;
 uVar10 = 0;
 bVar13 = SBORROW4(uVar8,1);
 uVar8 = uVar8 - 1;
 bVar11 = uVar8 == 0;
 uVar6 = uVar8;
 }
 else {
 uVar2 = (ulonglong)param_3 * (uVar14 & 0xffffffff);
 uVar14 = (ulonglong)uVar5 * (uVar14 & 0xffffffff) +
 (ulonglong)param_3 * (ulonglong)uVar6 + (uVar2 >> 0x20);
 uVar4 = (uint)uVar14;
 lVar1 = (ulonglong)uVar5 * (ulonglong)uVar6 + (uVar14 >> 0x20);
 uVar10 = (uint)lVar1;
 uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
 if ((int)uVar2 != 0) {
 uVar4 = uVar4 | 1;
 }
 uVar8 = (iVar7 + -0xff) - ((uVar6 < 0x200) + 0x300);
 if (uVar6 < 0x200) {
 bVar3 = (byte)(uVar4 >> 0x1f);
 uVar4 = uVar4 << 1;
 lVar1 = CONCAT44(uVar6 * 2 + (uint)(CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar3)),
 uVar10 * 2 + (uint)bVar3);
 }
 uVar5 = uVar9 & 0x80000000 | (int)((ulonglong)lVar1 >> 0x20) << 0xb | (uint)lVar1 >> 0x15;
 param_3 = (uint)lVar1 << 0xb | uVar4 >> 0x15;
 uVar10 = uVar4 * 0x800;
 bVar12 = 0xfc < uVar8;
 bVar13 = SBORROW4(uVar8,0xfd);
 uVar9 = uVar8 - 0xfd;
 bVar11 = uVar9 == 0;
 uVar6 = uVar9;
 if (bVar12 && !bVar11) {
 bVar12 = 0x6ff < uVar9;
 bVar13 = SBORROW4(uVar9,0x700);
 uVar6 = uVar8 - 0x7fd;
 bVar11 = uVar9 == 0x700;
 }
 if (!bVar12 || bVar11) {
 bVar11 = 0x7fffffff < uVar10;
 if (uVar10 == 0x80000000) {
 bVar11 = (bool)((byte)(uVar4 >> 0x15) & 1);
 }
 return CONCAT44(uVar5 + uVar8 * 0x100000 + (uint)CARRY4(param_3,(uint)bVar11),param_3 + bVar11
 );
 }
 }
 if (!bVar11 && (int)uVar6 < 0 == bVar13) {
 return (ulonglong)(uVar5 & 0x80000000 | 0x7ff00000) << 0x20;
 }
 if (-0x36 < (int)uVar8) {
 uVar6 = -uVar8;
 uVar4 = uVar6 - 0x20;
 if (0x1f < (int)uVar6) {
 uVar9 = param_3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff);
 uVar6 = (uVar5 >> (uVar4 & 0xff) & ~((uVar5 & 0x80000000) >> (uVar4 & 0xff))) -
 ((int)uVar9 >> 0x1f);
 if ((uVar10 == 0 && param_3 << (0x20 - uVar4 & 0xff) == 0) && (uVar9 & 0x7fffffff) == 0) {
 uVar6 = uVar6 & ~(uVar9 >> 0x1f);
 }
 return CONCAT44(uVar5,uVar6) & 0x80000000ffffffff;
 }
 if (uVar6 - 0x14 != 0 && -0xd < (int)uVar4) {
 uVar4 = 0xc - (uVar6 - 0x14);
 uVar6 = param_3 << (uVar4 & 0xff);
 uVar4 = param_3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff);
 uVar9 = uVar4 + -((int)uVar6 >> 0x1f);
 if (uVar10 == 0 && (uVar6 & 0x7fffffff) == 0) {
 uVar9 = uVar9 & ~(uVar6 >> 0x1f);
 }
 return CONCAT44((uVar5 & 0x80000000) + (uint)CARRY4(uVar4,-((int)uVar6 >> 0x1f)),uVar9);
 }
 uVar4 = param_3 << (uVar8 + 0x20 & 0xff);
 uVar9 = param_3 >> (uVar6 & 0xff) | uVar5 << (uVar8 + 0x20 & 0xff);
 uVar8 = uVar9 + -((int)uVar4 >> 0x1f);
 if (uVar10 == 0 && (uVar4 & 0x7fffffff) == 0) {
 uVar8 = uVar8 & ~(uVar4 >> 0x1f);
 }
 return CONCAT44((uVar5 & 0x80000000) + ((uVar5 & 0x7fffffff) >> (uVar6 & 0xff)) +
 (uint)CARRY4(uVar9,-((int)uVar4 >> 0x1f)),uVar8);
 }
 return (ulonglong)(uVar5 & 0x80000000) << 0x20;
}



/* Function: FUN_00011674 @ 00011674 */

ulonglong FUN_00011674(int param_1,uint param_2,int param_3,uint param_4)

{
 bool bVar1;
 int iVar2;
 uint uVar3;
 uint unaff_r4;
 uint uVar4;
 uint uVar5;
 uint in_r12;
 
 uVar4 = in_r12 & param_4 >> 0x14;
 if (unaff_r4 != in_r12 && uVar4 != in_r12) {
 if (param_1 == 0 && (param_2 & 0x7fffffff) == 0 || param_3 == 0 && (param_4 & 0x7fffffff) == 0)
 {
 return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
 }
 if (unaff_r4 == 0) {
 uVar5 = param_2 & 0x80000000;
 do {
 iVar2 = param_1 >> 0x1f;
 param_1 = param_1 << 1;
 param_2 = param_2 * 2 - iVar2;
 } while ((param_2 & 0x100000) == 0);
 param_2 = param_2 | uVar5;
 if (uVar4 != 0) {
 return CONCAT44(param_2,param_1);
 }
 }
 do {
 iVar2 = param_3 >> 0x1f;
 param_3 = param_3 << 1;
 param_4 = param_4 * 2 - iVar2;
 } while ((param_4 & 0x100000) == 0);
 return CONCAT44(param_2,param_1);
 }
 bVar1 = (param_2 & 0x7fffffff) != 0;
 uVar5 = param_4;
 iVar2 = param_3;
 if (param_1 != 0 || bVar1) {
 uVar5 = param_2;
 iVar2 = param_1;
 }
 uVar3 = uVar5;
 if ((((param_1 != 0 || bVar1) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) &&
 ((unaff_r4 != in_r12 || (iVar2 == 0 && (uVar5 & 0xfffff) == 0)))) &&
 ((uVar4 != in_r12 ||
 (iVar2 = param_3, uVar3 = param_4, param_3 == 0 && (param_4 & 0xfffff) == 0)))) {
 return (ulonglong)((uVar5 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
 }
 return CONCAT44(uVar3,iVar2) | 0x7ff8000000000000;
}



/* Function: __mulsf3 @ 00011700 */

uint __mulsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
 goto LAB_0001187c;
 }
 if ((param_1 & 0x7fffffff) == 0 || (param_2 & 0x7fffffff) == 0) {
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
 return uVar9 | iVar6 * 0x800000;
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
 if (-0x19 < (int)uVar5) {
 uVar1 = (uVar9 << 1) >> (-uVar5 & 0xff);
 uVar3 = uVar9 << (uVar5 + 0x20 & 0xff);
 uVar9 = (uVar9 & 0x80000000 | uVar1 >> 1) + (uint)((byte)uVar1 & 1);
 if (uVar8 == 0 && (uVar3 & 0x7fffffff) == 0) {
 uVar9 = uVar9 & ~(uVar3 >> 0x1f);
 }
 return uVar9;
 }
 return uVar9 & 0x80000000;
 }
LAB_0001187c:
 return uVar9 & 0x80000000 | 0x7f800000;
}



/* Function: __aeabi_drsub @ 00011898 */

extern void __aeabi_drsub(undefined4 param_1,uint param_2);



/* Function: __subdf3 - provided by CRT */
extern ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4);




/* CRT stub function __aeabi_dadd removed by preprocessor */




/* Function: __aeabi_ui2d - provided by CRT */
extern ulonglong __aeabi_ui2d(uint param_1);



/* Function: __floatsidf @ 00011b74 */

extern ulonglong __floatsidf(uint param_1);



/* Function: __extendsfdf2 - provided by CRT */
extern ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4);



/* Function: __floatundidf @ 00011be4 */

extern ulonglong __floatundidf(uint param_1,uint param_2);



/* Function: __aeabi_l2d @ 00011bf8 */

extern ulonglong __aeabi_l2d(uint param_1,uint param_2);



/* Function: __aeabi_frsub @ 00011c58 */

void __aeabi_frsub(uint param_1)

{
 __addsf3(param_1 ^ 0x80000000,0,0,0);
 return;
}




/* CRT stub function __aeabi_fsub removed by preprocessor */




/* Function: __addsf3 @ 00011c64 */

uint __addsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
 uVar4 = param_2;
 if (iVar1 == -1) {
 uVar4 = param_1;
 }
 if (iVar1 != -1 || iVar2 != -1) {
 param_2 = uVar4;
 }
 if (((uVar4 & 0x7fffff) != 0 || (param_2 & 0x7fffff) != 0) || uVar4 != param_2) {
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
LAB_00011dc4:
 return param_1 | 0x7f800000;
 }
 uVar4 = uVar4 >> 0x18;
 param_4 = param_4 >> 0x18;
 uVar8 = param_4 - uVar4;
 uVar5 = param_2;
 uVar7 = uVar4;
 if (uVar8 != 0 && uVar4 <= param_4) {
 uVar7 = uVar4 + uVar8;
 uVar5 = param_1;
 param_1 = param_2;
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
 uVar8 = uVar7 - 2;
 if (uVar7 - 1 == 0 || uVar4 < 0x800000) {
 uVar7 = LZCOUNT(uVar4) - 8;
 uVar4 = uVar4 << (uVar7 & 0xff);
 if ((int)uVar8 < (int)uVar7) {
 uVar4 = uVar4 >> (-(uVar8 - uVar7) & 0xff);
 }
 else {
 uVar4 = uVar4 + (uVar8 - uVar7) * 0x800000;
 }
 return uVar4 | param_1;
 }
 }
 else {
 uVar8 = uVar7 - 1;
 if (0xffffff < uVar4) {
 bVar3 = (byte)uVar4;
 uVar4 = uVar4 >> 1;
 uVar6 = (uint)(bVar3 & 1) << 0x1f | uVar6 >> 1;
 uVar8 = uVar7;
 if (0xfd < uVar7) goto LAB_00011dc4;
 }
 }
 uVar4 = uVar4 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar6);
 if (uVar6 == 0x80000000) {
 uVar4 = uVar4 & 0xfffffffe;
 }
 return uVar4 | param_1;
}



/* Function: __aeabi_ui2f @ 00011df4 */

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



/* Function: __floatsisf @ 00011dfc */

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



/* Function: __floatundisf @ 00011e1c */

uint __floatundisf(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 
 if (param_1 == 0 && param_2 == 0) {
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
 if (uVar1 == 0 && (uVar4 & 0x7fffffff) == 0) {
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



/* Function: __aeabi_l2f @ 00011e2c */

uint __aeabi_l2f(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 bool bVar7;
 
 if (param_1 == 0 && param_2 == 0) {
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
 if (uVar1 == 0 && (uVar5 & 0x7fffffff) == 0) {
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



/* Function: __fixsfsi @ 00011ea8 */

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




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 83 */
