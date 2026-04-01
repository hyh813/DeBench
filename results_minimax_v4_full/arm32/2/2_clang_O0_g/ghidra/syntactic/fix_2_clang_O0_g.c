/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/2/2_clang_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* Ghidra type definitions */
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t byte;
typedef uint8_t undefined1;
typedef int32_t int_;
typedef uint32_t uint;
typedef int32_t sint;
typedef unsigned short ushort;
typedef unsigned long long ulonglong;
typedef long double longdouble;
typedef long long longlong;

/* String constants */
char DAT_0001306c[] = "Testing Data Types L1\n";
char DAT_000131d8[] = "Testing Array Types\n";
char DAT_000132f5[] = "Testing Pointer Types\n";
char DAT_0001348f[] = "Testing Composite Types\n";

/* Function prototypes */
int process_char(char c);

/* Runtime library function declarations */
ulonglong FUN_000122d0(int param_1, uint param_2, int param_3, uint param_4);
uint __mulsf3(uint param_1, uint param_2, undefined4 param_3, undefined4 param_4);
ulonglong __adddf3(uint param_1, uint param_2, uint param_3, uint param_4);
ulonglong __extendsfdf2(uint param_1, undefined4 param_2, undefined4 param_3, uint param_4);
ulonglong __muldf3(uint param_1, uint param_2, uint param_3, uint param_4);
ulonglong __divdf3(uint param_1, uint param_2, uint param_3, uint param_4);
ulonglong __addsf3(uint param_1, uint param_2);
uint __fixsfsi(uint param_1);
ulonglong FUN_00012a94(int param_1, uint param_2, int param_3, uint param_4);
ulonglong FUN_00012cb4(int param_1, uint param_2, int param_3, uint param_4);

int process_char(char c);
short process_short(short a, short b);
int process_int(int x);
long process_long(long x);
long long process_ll(long long x);
float process_float(float f);
double process_double(double d);
long double process_ld(long double d);
_Bool process_bool(int x);
int const_param(int *p);
int volatile_access(int *p);
void test_data_types_l1(void);
int array_1d_stack(int *arr, int n);
int array_string(char *str);
int array_2d_stack(int (*arr)[10]);
int array_3d(int (*arr)[5][5]);
int array_vla(int n, int *arr);
int array_pointer(int (*arr)[10], int n);
int pointer_array(int **arr, int n);
int array_complex_index(int *arr, int w, int h, int x, int y);
int array_oob(int *arr, int n);
void test_array_types(void);
int ptr_single(int *p);
int ptr_double(int **p);
int ptr_triple(int ***p);
int ptr_increment(int *p, int n);
int ptr_offset(int *p, int offset);
int ptr_diff(int *p1, int *p2);
int ptr_void(void *p, int type);
int ptr_const(int *p);
int ptr_const_ptr(int *p);
typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);
int ptr_func_simple(_func_int_int *f, int x);
int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f, int *p);
int ptr_cast(void *p);
void * opaque_handle_create(int size);
int opaque_handle_op(void *handle);
void test_pointer_types(void);
int double_value(int x);
int complex_callback(int *p, char **args);

/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: process_char @ 000105a4 */

int process_char(char c)

{
 char local_1;
 
 local_1 = c;
 if ((0x40 < (byte)c) && ((byte)c < 0x5b)) {
 local_1 = c + ' ';
 }
 return local_1;
}



/* Function: process_short @ 000105f4 */

short process_short(short a,short b)

{
 return a + b;
}



/* Function: process_int @ 0001061c */

int process_int(int x)

{
 return x << 1 | 1;
}



/* Function: process_long @ 00010638 */

long process_long(long x)

{
 return x << 1;
}



/* Function: process_ll @ 00010650 */

long long process_ll(long long x)

{
 return x * x;
}



/* Function: process_float @ 00010678 */

float process_float(float f)

{
 float fVar2;
 
 fVar2 = f * 1.5f + 0.5f;
 return fVar2;
}



/* Function: process_double @ 000106a8 */

double process_double(double d)

{
 undefined4 in_r0;
 undefined4 in_r1;
 undefined4 uVar1;
 undefined4 extraout_s1;
 undefined8 uVar2;
 
 uVar2 = __divdf3(0,0,0,0);
 uVar1 = __adddf3((int)uVar2,(uint)((ulonglong)uVar2 >> 0x20),0x9999999a,0x3ff00000);
 return (double)CONCAT44(extraout_s1,uVar1);
}



/* Function: process_ld @ 000106f0 */

longdouble process_ld(longdouble d)

{
 undefined4 in_r0;
 undefined4 in_r1;
 undefined4 uVar1;
 undefined4 extraout_s1;
 undefined8 uVar2;
 
 uVar2 = __muldf3(SUB84(d,0),in_r0,in_r1);
 uVar1 = __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x3ff00000);
 return (longdouble)CONCAT44(extraout_s1,uVar1);
}



/* Function: process_bool @ 00010734 */

_Bool process_bool(int x)

{
 return 0 < x && x % 2 == 0;
}



/* Function: const_param @ 00010784 */

int const_param(int *p)

{
 return *p + 10;
}



/* Function: volatile_access @ 000107a0 */

int volatile_access(int *p)

{
 /* Unresolved local var: int a@[DW_OP_breg13(sp): +4]
 Unresolved local var: int b@[DW_OP_breg13(sp): 0] */
 return *p + *p;
}



/* Function: test_data_types_l1 @ 000107d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 char cVar1;
 _Bool _Var2;
 short sVar3;
 int iVar4;
 long lVar5;
 undefined4 uVar6;
 float f;
 double d;
 longdouble d_00;
 longlong lVar7;
 undefined8 uVar8;
 int local_10 [2];
 
 /* Unresolved local var: int value@[???]
 Unresolved local var: int vol_value@[???] */
 printf(&DAT_0001306c);
 cVar1 = process_char('A');
 printf("DT-L1-01 (process_char): %c\n",(int)cVar1);
 cVar1 = process_char('b');
 printf("DT-L1-01 (process_char): %c\n",(int)cVar1);
 sVar3 = process_short(100,200);
 printf("DT-L1-02 (process_short): %d\n",(int)sVar3);
 iVar4 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n",iVar4);
 lVar5 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n",lVar5);
 lVar7 = process_ll(100);
 uVar6 = (undefined4)((ulonglong)lVar7 >> 0x20);
 printf("DT-L1-05 (process_ll): %lld\n",uVar6,(int)lVar7,uVar6);
 process_float(f);
 uVar8 = __extendsfdf2(f,0,0,0);
 uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
 printf("DT-L1-06 (process_float): %.2f\n",uVar6,(int)uVar8,uVar6);
 process_double(d);
 printf("DT-L1-07 (process_double): %.2f\n");
 process_ld(d_00);
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 _Var2 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n",(uint)_Var2);
 _Var2 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n",(uint)_Var2);
 _Var2 = process_bool(-2);
 printf("DT-L1-09 (process_bool): %d\n",(uint)_Var2);
 local_10[1] = 5;
 iVar4 = const_param(local_10 + 1);
 printf("DT-L1-10 (const_param): %d\n",iVar4);
 local_10[0] = 10;
 iVar4 = volatile_access(local_10);
 printf("DT-L1-11 (volatile_access): %d\n",iVar4);
 return;
}



/* Function: array_1d_stack @ 000109bc */

int array_1d_stack(int *arr,int n)

{
 int local_10;
 int local_c;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_c = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_10 = 0; local_10 < n; local_10 = local_10 + 1) {
 local_c = local_c + arr[local_10];
 }
 return local_c;
}



/* Function: array_string @ 00010a24 */

int array_string(char *str)

{
 int local_8;
 
 /* Unresolved local var: int len@[DW_OP_breg13(sp): 0] */
 for (local_8 = 0; str[local_8] != '\0'; local_8 = local_8 + 1) {
 }
 return local_8;
}



/* Function: array_2d_stack @ 00010a6c */

int array_2d_stack(int (*arr) [10])

{
 undefined4 local_c;
 undefined4 local_8;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_8 = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_c = 0; local_c < 10; local_c = local_c + 1) {
 local_8 = local_8 + *(int *)((int)arr + local_c * 0x2c);
 }
 return local_8;
}



/* Function: array_3d @ 00010ad4 */

int array_3d(int (*arr) [5] [5])

{
 int local_14;
 int local_10;
 int local_c;
 int local_8;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +12] */
 local_8 = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +8] */
 for (local_c = 0; local_c < 5; local_c = local_c + 1) {
 /* Unresolved local var: int j@[DW_OP_breg13(sp): +4] */
 for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
 /* Unresolved local var: int k@[DW_OP_breg13(sp): 0] */
 for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
 local_8 = local_8 + arr[local_c][local_10][local_14];
 }
 }
 }
 return local_8;
}



/* Function: array_vla @ 00010bac */

int array_vla(int n,int *arr)

{
 int local_10;
 int local_c;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_c = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_10 = 0; local_10 < n; local_10 = local_10 + 1) {
 local_c = local_c + arr[local_10];
 }
 return local_c;
}



/* Function: array_pointer @ 00010c14 */

int array_pointer(int (*arr) [10],int n)

{
 int local_10;
 int local_c;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_c = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_10 = 0; local_10 < n; local_10 = local_10 + 1) {
 local_c = local_c + arr[local_10][0];
 }
 return local_c;
}



/* Function: pointer_array @ 00010c80 */

int pointer_array(int **arr,int n)

{
 int local_18;
 int local_14;
 int local_c;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +12]
 Unresolved local var: int count@[DW_OP_breg13(sp): +8] */
 local_c = 0;
 local_18 = n;
 if (9 < n) {
 local_18 = 10;
 }
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
 for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
 if (arr[local_14] != (int *)0x0) {
 local_c = local_c + *arr[local_14];
 }
 }
 return local_c;
}



/* Function: array_complex_index @ 00010d3c */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 int local_4;
 
 if ((((x < 0) || (w <= x)) || (y < 0)) || (h <= y)) {
 local_4 = -1;
 }
 else {
 local_4 = arr[y * w + x];
 }
 return local_4;
}



/* Function: array_oob @ 00010dd4 */

int array_oob(int *arr,int n)

{
 int local_10;
 int local_c;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_c = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_10 = 0; local_10 <= n; local_10 = local_10 + 1) {
 local_c = local_c + arr[local_10];
 }
 return local_c;
}



/* Function: test_array_types @ 00010e3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 int iVar1;
 undefined4 *puVar2;
 undefined4 *local_534;
 int local_530;
 int local_52c;
 int aiStack_528 [20];
 int *local_4d8;
 undefined4 *local_4d4;
 undefined4 *local_4d0;
 undefined4 local_4cc;
 undefined4 auStack_4c8 [6];
 undefined4 local_4b0;
 undefined4 local_4ac;
 int local_4a8;
 int local_4a4;
 int aiStack_4a0 [50];
 int local_3d8;
 undefined4 local_3d4;
 undefined4 local_3d0;
 int local_3cc;
 int local_3c8;
 int local_3c4;
 int aiStack_3c0 [125];
 int local_1cc;
 int local_1c8;
 int aiStack_1c4 [100];
 char local_34 [8];
 int local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined4 uStack_1c;
 
 /* Unresolved local var: int[5] arr1@[???]
 Unresolved local var: char[6] str@[???]
 Unresolved local var: int[10][10] matrix@[???]
 Unresolved local var: int[5][5][5] cube@[DW_OP_breg13(sp): +384]
 Unresolved local var: int[3] vla_arr@[DW_OP_breg13(sp): +360]
 Unresolved local var: int[5][10] arr2@[DW_OP_breg13(sp): +160]
 Unresolved local var: int a@[DW_OP_breg13(sp): +152]
 Unresolved local var: int b@[DW_OP_breg13(sp): +148]
 Unresolved local var: int c@[DW_OP_breg13(sp): +144]
 Unresolved local var: int *[10] ptr_arr@[DW_OP_breg13(sp): +104]
 Unresolved local var: int[20] flat@[DW_OP_breg13(sp): +24] */
 printf(&DAT_000131d8);
 local_2c = 1;
 uStack_28 = 2;
 uStack_24 = 3;
 uStack_20 = 4;
 uStack_1c = 5;
 iVar1 = array_1d_stack(&local_2c,5);
 printf("ARR-L1-01 (array_1d_stack): %d\n",iVar1);
 builtin_strncpy(local_34,"hello",6);
 iVar1 = array_string(local_34);
 printf("ARR-L1-02 (array_string): %d\n",iVar1);
 /* Unresolved local var: int i@[???] */
 for (local_1c8 = 0; local_1c8 < 10; local_1c8 = local_1c8 + 1) {
 /* Unresolved local var: int j@[???] */
 for (local_1cc = 0; local_1cc < 10; local_1cc = local_1cc + 1) {
 if (local_1c8 == local_1cc) {
 local_530 = local_1c8;
 }
 else {
 local_530 = 0;
 }
 aiStack_1c4[local_1c8 * 10 + local_1cc] = local_530;
 }
 }
 iVar1 = array_2d_stack((int (*) [10])aiStack_1c4);
 printf("ARR-L1-03 (array_2d_stack): %d\n",iVar1);
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +380] */
 for (local_3c4 = 0; local_3c4 < 5; local_3c4 = local_3c4 + 1) {
 /* Unresolved local var: int j@[DW_OP_breg13(sp): +376] */
 for (local_3c8 = 0; local_3c8 < 5; local_3c8 = local_3c8 + 1) {
 /* Unresolved local var: int k@[DW_OP_breg13(sp): +372] */
 for (local_3cc = 0; local_3cc < 5; local_3cc = local_3cc + 1) {
 aiStack_3c0[local_3c4 * 0x19 + local_3c8 * 5 + local_3cc] = 1;
 }
 }
 }
 iVar1 = array_3d((int (*) [5] [5])aiStack_3c0);
 printf("ARR-L1-04 (array_3d): %d\n",iVar1);
 local_3d4 = 0x14;
 local_3d0 = 0x1e;
 local_3d8 = 10;
 iVar1 = array_vla(3,&local_3d8);
 printf("ARR-L2-01 (array_vla): %d\n",iVar1);
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +156] */
 for (local_4a4 = 0; local_4a4 < 5; local_4a4 = local_4a4 + 1) {
 aiStack_4a0[local_4a4 * 10] = local_4a4 * 10;
 }
 iVar1 = array_pointer((int (*) [10])aiStack_4a0,5);
 printf("ARR-L2-02 (array_pointer): %d\n",iVar1);
 local_4a8 = 10;
 local_4ac = 0x14;
 local_4b0 = 0x1e;
 local_4d8 = &local_4a8;
 local_4d4 = &local_4ac;
 local_4d0 = &local_4b0;
 local_4cc = 0;
 local_534 = auStack_4c8;
 do {
 puVar2 = local_534 + 1;
 *local_534 = 0;
 local_534 = puVar2;
 } while (puVar2 != &local_4b0);
 iVar1 = pointer_array(&local_4d8,3);
 printf("ARR-L2-03 (pointer_array): %d\n",iVar1);
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +20] */
 for (local_52c = 0; local_52c < 0x14; local_52c = local_52c + 1) {
 aiStack_528[local_52c] = local_52c;
 }
 iVar1 = array_complex_index(aiStack_528,5,4,2,3);
 printf("ARR-L2-04 (array_complex_index): %d\n",iVar1);
 return;
}



/* Function: ptr_single @ 0001121c */

int ptr_single(int *p)

{
 return *p + 10;
}



/* Function: ptr_double @ 00011238 */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 00011258 */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 0001127c */

int ptr_increment(int *p,int n)

{
 int local_10;
 int local_c;
 int *local_4;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_c = 0;
 local_4 = p;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_10 = 0; local_10 < n; local_10 = local_10 + 1) {
 local_c = local_c + *local_4;
 local_4 = local_4 + 1;
 }
 return local_c;
}



/* Function: ptr_offset @ 000112ec */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 0001130c */

int ptr_diff(int *p1,int *p2)

{
 return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 00011330 */

int ptr_void(void *p,int type)

{
 undefined4 local_4;
 
 if (type == 0) {
 local_4 = *(uint *)p;
 }
 else if (type == 1) {
 local_4 = (uint)*(byte *)p;
 }
 else {
 local_4 = 0xffffffff;
 }
 return local_4;
}



/* Function: ptr_const @ 00011398 */

int ptr_const(int *p)

{
 return *p * 2;
}



/* Function: ptr_const_ptr @ 000113b4 */

int ptr_const_ptr(int *p)

{
 *p = *p + 5;
 return *p;
}



/* Function: ptr_func_simple @ 000113dc */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 0001140c */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
 int iVar1;
 char *local_18;
 undefined4 local_14;
 int *local_10;
 _func_int_int_ptr_char_ptr_ptr *local_c;
 
 /* Unresolved local var: char *[2] args@[DW_OP_breg13(sp): 0] */
 local_14 = 0;
 local_18 = "test";
 local_10 = p;
 local_c = f;
 iVar1 = (*f)(p,&local_18);
 return iVar1;
}



/* Function: ptr_cast @ 00011464 */

int ptr_cast(void *p)

{
 /* Unresolved local var: int * int_ptr@[DW_OP_breg13(sp): +8]
 Unresolved local var: char * char_ptr@[DW_OP_breg13(sp): +4]
 Unresolved local var: int * back_ptr@[DW_OP_breg13(sp): 0] */
 return *(int *)p;
}



/* Function: opaque_handle_create @ 00011494 */

void * opaque_handle_create(int size)

{
 return (void *)size;
}



/* Function: opaque_handle_op @ 000114a8 */

int opaque_handle_op(void *handle)

{
 return (int)handle << 1;
}



/* Function: test_pointer_types @ 000114c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 int iVar1;
 void *handle;
 undefined4 local_8c;
 int local_88 [3];
 undefined1 local_79;
 undefined4 local_78;
 int local_74;
 undefined4 uStack_70;
 undefined4 uStack_6c;
 undefined4 uStack_68;
 int iStack_64;
 int local_60;
 undefined4 uStack_5c;
 undefined4 uStack_58;
 undefined4 uStack_54;
 undefined4 uStack_50;
 int local_4c;
 undefined4 uStack_48;
 undefined4 uStack_44;
 undefined4 uStack_40;
 undefined4 uStack_3c;
 int ***local_38;
 int **local_34;
 int *local_30;
 int local_2c;
 int **local_28;
 int *local_24;
 int local_20 [2];
 
 /* Unresolved local var: int val1@[???]
 Unresolved local var: int val2@[???]
 Unresolved local var: int * ptr2@[???]
 Unresolved local var: int * * pptr2@[???]
 Unresolved local var: int val3@[???]
 Unresolved local var: int * ptr3@[???]
 Unresolved local var: int * * pptr3@[???]
 Unresolved local var: int * * * ppptr3@[???]
 Unresolved local var: int[5] arr4@[???]
 Unresolved local var: int[5] arr5@[DW_OP_breg13(sp): +64]
 Unresolved local var: int[5] arr6@[DW_OP_breg13(sp): +44]
 Unresolved local var: int val7@[DW_OP_breg13(sp): +40]
 Unresolved local var: char c7@[DW_OP_breg13(sp): +39]
 Unresolved local var: int val8@[DW_OP_breg13(sp): +32]
 Unresolved local var: int val9@[DW_OP_breg13(sp): +28]
 Unresolved local var: int val11@[DW_OP_breg13(sp): +24]
 Unresolved local var: int val12@[DW_OP_breg13(sp): +20]
 Unresolved local var: void * handle@[DW_OP_breg13(sp): +16] */
 printf(&DAT_000132f5);
 local_20[1] = 5;
 iVar1 = ptr_single(local_20 + 1);
 printf("PTR-L2-01 (ptr_single): %d\n",iVar1);
 local_20[0] = 10;
 local_24 = local_20;
 local_28 = &local_24;
 iVar1 = ptr_double(local_28);
 printf("PTR-L2-02 (ptr_double): %d\n",iVar1);
 local_2c = 5;
 local_30 = &local_2c;
 local_34 = &local_30;
 local_38 = &local_34;
 iVar1 = ptr_triple(local_38);
 printf("PTR-L2-03 (ptr_triple): %d\n",iVar1);
 local_4c = 1;
 uStack_48 = 2;
 uStack_44 = 3;
 uStack_40 = 4;
 uStack_3c = 5;
 iVar1 = ptr_increment(&local_4c,5);
 printf("PTR-L2-04 (ptr_increment): %d\n",iVar1);
 local_60 = 10;
 uStack_5c = 0x14;
 uStack_58 = 0x1e;
 uStack_54 = 0x28;
 uStack_50 = 0x32;
 iVar1 = ptr_offset(&local_60,2);
 printf("PTR-L2-05 (ptr_offset): %d\n",iVar1);
 local_74 = 0;
 uStack_70 = 10;
 uStack_6c = 0x14;
 uStack_68 = 0x1e;
 iStack_64 = 0x28;
 iVar1 = ptr_diff(&iStack_64,&local_74);
 printf("PTR-L2-06 (ptr_diff): %d\n",iVar1);
 local_78 = 0x2a;
 local_79 = 0x41;
 iVar1 = ptr_void(&local_78,0);
 printf("PTR-L2-07 (ptr_void): %d\n",iVar1);
 iVar1 = ptr_void(&local_79,1);
 printf("PTR-L2-07 (ptr_void): %d\n",iVar1);
 local_88[2] = 10;
 iVar1 = ptr_const(local_88 + 2);
 printf("PTR-L2-08 (ptr_const): %d\n",iVar1);
 local_88[1] = 10;
 iVar1 = ptr_const_ptr(local_88 + 1);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",iVar1);
 iVar1 = ptr_func_simple(double_value,5);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",iVar1);
 local_88[0] = 5;
 iVar1 = ptr_func_complex(complex_callback,local_88);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",iVar1);
 local_8c = 0x12345678;
 iVar1 = ptr_cast(&local_8c);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",iVar1);
 handle = opaque_handle_create(10);
 iVar1 = opaque_handle_op(handle);
 printf("PTR-L2-13 (opaque_handle_op): %d\n",iVar1);
 return;
}



/* Function: double_value @ 00011768 */

int double_value(int x)

{
 return x << 1;
}



/* Function: complex_callback @ 00011780 */

int complex_callback(int *p,char **args)

{
 *p = *p + 10;
 return (uint)(*args != (char *)0x0);
}


/* Composite types */
typedef struct Point3D {
    int x;
    int y;
    int z;
    int width;
    int height;
} Point3D;

typedef struct Rect {
    Point3D position;
    Point3D size;
} Rect;

typedef struct Color {
    int r;
    int g;
    int b;
} Color;

typedef struct Style {
    Color fill;
    Color stroke;
    int id;
} Style;

typedef struct Widget {
    Rect bounds;
    Style style;
} Widget;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prev;
} DNode;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct Edge {
    int dest;
    struct Edge *next;
} Edge;

typedef struct Graph {
    int numVertices;
    Edge *adjList[10];
} Graph;

typedef struct UnionData {
    int i;
    byte bytes[4];
} UnionData;

typedef struct Flags {
    int _0_4_;
    int _4_4_;
} Flags;

typedef struct Device {
    int (*process)(int);
    int data;
} Device;

typedef enum {
    STATE_IDLE = 0,
    STATE_RUNNING = 1,
    STATE_PAUSED = 2,
    STATE_STOPPED = 3
} State;


/* Function: struct_simple @ 000117b4 */

int struct_simple(Point3D *p)

{
 return p->x + p->y + p->z;
}



/* Function: struct_array @ 000117dc */

int struct_array(Point3D *pts,int n)

{
 Point3D *pPVar1;
 int local_10;
 int local_c;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_c = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_10 = 0; local_10 < n; local_10 = local_10 + 1) {
 pPVar1 = pts + local_10;
 local_c = local_c + pPVar1->x + pPVar1->y + pPVar1->z;
 }
 return local_c;
}



/* Function: struct_nested @ 00011858 */

int struct_nested(Rect *r)

{
 return (r->position).x + (r->size).width;
}



/* Function: struct_deep @ 00011878 */

int struct_deep(Widget *w)

{
 return (w->bounds).position.z + (w->style).fill.r;
}



/* Function: struct_with_ptr @ 00011898 */

int struct_with_ptr(Node *node)

{
 int local_c;
 
 if (node->next == (Node *)0x0) {
 local_c = 0;
 }
 else {
 local_c = node->next->data;
 }
 return node->data + local_c;
}



/* Function: struct_bitfields @ 000118f0 */

int struct_bitfields(Flags *f)

{
 ushort uVar1;
 
 uVar1 = *(ushort *)f;
 return (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7) + (uint)(uVar1 >> 6);
}



/* Function: union_type @ 00011928 */

int union_type(UnionData *u,int type)

{
 undefined4 local_c;
 
 if (type == 0) {
 local_c = u->i;
 }
 else if (type == 1) {
 local_c = __fixsfsi((uint)u->i);
 }
 else {
 local_c = (uint)(byte)u->bytes[0];
 }
 return local_c;
}



/* Function: union_array @ 000119a0 */

int union_array(UnionData *arr,int n)

{
 int local_10;
 int local_c;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 local_c = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_10 = 0; local_10 < n; local_10 = local_10 + 1) {
 local_c = local_c + arr[local_10].i;
 }
 return local_c;
}



/* Function: enum_type @ 00011a08 */

int enum_type(State s)

{
 return s * 10;
}



/* Function: enum_switch @ 00011a24 */

int enum_switch(State s)

{
 int local_4;
 
 switch(s) {
 case STATE_IDLE:
 local_4 = 0;
 break;
 case STATE_RUNNING:
 local_4 = 100;
 break;
 case STATE_PAUSED:
 local_4 = 0x32;
 break;
 case STATE_STOPPED:
 local_4 = -1;
 break;
 default:
 local_4 = -99;
 }
 return local_4;
}



/* Function: struct_func_ptr @ 00011aa4 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00011ad4 */

int linked_list(Node *head)

{
 Node *local_c;
 int local_8;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4]
 Unresolved local var: Node * current@[DW_OP_breg13(sp): 0] */
 local_8 = 0;
 for (local_c = head; local_c != (Node *)0x0; local_c = local_c->next) {
 local_8 = local_8 + local_c->data;
 }
 return local_8;
}



/* Function: doubly_linked_list @ 00011b30 */

int doubly_linked_list(DNode *head)

{
 DNode *local_c;
 int local_8;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4]
 Unresolved local var: DNode * current@[DW_OP_breg13(sp): 0] */
 local_8 = 0;
 for (local_c = head; local_c != (DNode *)0x0; local_c = local_c->next) {
 local_8 = local_8 + local_c->data;
 }
 return local_8;
}



/* Function: binary_tree_sum @ 00011b8c */

int binary_tree_sum(TreeNode *root)

{
 int iVar1;
 int iVar2;
 int local_c;
 
 if (root == (TreeNode *)0x0) {
 local_c = 0;
 }
 else {
 iVar2 = root->data;
 iVar1 = binary_tree_sum(root->left);
 local_c = binary_tree_sum(root->right);
 local_c = iVar2 + iVar1 + local_c;
 }
 return local_c;
}



/* Function: binary_tree @ 00011c0c */

int binary_tree(TreeNode *root)

{
 int iVar1;
 
 iVar1 = binary_tree_sum(root);
 return iVar1;
}



/* Function: graph_traverse @ 00011c30 */

int graph_traverse(Graph *g)

{
 Edge *local_10;
 int local_c;
 int local_8;
 
 /* Unresolved local var: int sum@[DW_OP_breg13(sp): +8] */
 local_8 = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
 for (local_c = 0; local_c < g->numVertices; local_c = local_c + 1) {
 /* Unresolved local var: Edge * edge@[DW_OP_breg13(sp): 0] */
 for (local_10 = g->adjList[local_c]; local_10 != (Edge *)0x0; local_10 = local_10->next) {
 local_8 = local_8 + local_10->dest;
 }
 }
 return local_8;
}



/* Function: test_composite_types @ 00011cc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 int iVar1;
 Graph local_120;
 Edge local_f4;
 TreeNode local_ec;
 DNode local_e0;
 DNode local_d4;
 Node local_c8;
 Node local_c0;
 Node local_b8;
 Device local_b0;
 UnionData local_a8;
 undefined4 local_a4;
 undefined4 local_a0;
 UnionData local_9c;
 Flags local_98;
 Node local_90;
 Node local_88;
 Widget local_80;
 Rect local_50;
 Point3D local_3c;
 undefined4 uStack_30;
 undefined4 uStack_2c;
 undefined4 uStack_28;
 Point3D local_24;
 
 /* Unresolved local var: Point3D p1@[???]
 Unresolved local var: Point3D[2] pts@[???]
 Unresolved local var: Rect r@[???]
 Unresolved local var: Widget w@[???]
 Unresolved local var: Node node2@[???]
 Unresolved local var: Node node1@[???]
 Unresolved local var: Flags f@[???]
 Unresolved local var: UnionData u@[???]
 Unresolved local var: UnionData[3] arr_u@[DW_OP_breg13(sp): +144]
 Unresolved local var: Device dev@[DW_OP_breg13(sp): +136]
 Unresolved local var: Node[3] list@[DW_OP_breg13(sp): +112]
 Unresolved local var: DNode[2] dlist@[DW_OP_breg13(sp): +88]
 Unresolved local var: TreeNode tree@[DW_OP_breg13(sp): +76]
 Unresolved local var: Edge e1@[DW_OP_breg13(sp): +68]
 Unresolved local var: Graph g@[DW_OP_breg13(sp): +24] */
 printf(&DAT_0001348f);
 local_24.y = 2;
 local_24.z = 3;
 local_24.x = 1;
 iVar1 = struct_simple(&local_24);
 printf("CMP-L2-01 (struct_simple): %d\n",iVar1);
 local_3c.x = 1;
 local_3c.y = 1;
 local_3c.z = 1;
 uStack_30 = 2;
 uStack_2c = 2;
 uStack_28 = 2;
 iVar1 = struct_array(&local_3c,2);
 printf("CMP-L2-02 (struct_array): %d\n",iVar1);
 local_50.position.x = 5;
 local_50.position.y = 10;
 local_50.position.z = 0;
 local_50.size.width = 100;
 local_50.size.height = 200;
 iVar1 = struct_nested(&local_50);
 printf("CMP-L2-03 (struct_nested): %d\n",iVar1);
 local_80.bounds.position.x = 1;
 local_80.bounds.position.y = 2;
 local_80.bounds.position.z = 3;
 local_80.bounds.size.width = 10;
 local_80.bounds.size.height = 0x14;
 local_80.style.fill.r = 0xff;
 local_80.style.fill.g = 0;
 local_80.style.fill.b = 0;
 local_80.style.stroke.r = 0;
 local_80.style.stroke.g = 0;
 local_80.style.stroke.b = 0xff;
 local_80.style.id = 0x2a;
 iVar1 = struct_deep(&local_80);
 printf("CMP-L2-04 (struct_deep): %d\n",iVar1);
 local_88.next = (Node *)0x0;
 local_88.data = 0x14;
 local_90.data = 10;
 local_90.next = &local_88;
 iVar1 = struct_with_ptr(&local_90);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",iVar1);
 local_98._4_4_ = 0;
 local_98._0_4_ = 0x191d;
 iVar1 = struct_bitfields(&local_98);
 printf("CMP-L2-06 (struct_bitfields): %d\n",iVar1);
 local_9c.i = 0x12345678;
 iVar1 = union_type(&local_9c,0);
 printf("CMP-L2-07 (union_type): %d\n",iVar1);
 local_a4 = 0x14;
 local_a0 = 0x1e;
 local_a8.i = 10;
 iVar1 = union_array(&local_a8,3);
 printf("CMP-L2-08 (union_array): %d\n",iVar1);
 iVar1 = enum_type(STATE_RUNNING);
 printf("CMP-L2-09 (enum_type): %d\n",iVar1);
 iVar1 = enum_switch(STATE_PAUSED);
 printf("CMP-L2-10 (enum_switch): %d\n",iVar1);
 local_b0.process = process_int;
 local_b0.data = 10;
 iVar1 = struct_func_ptr(&local_b0);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",iVar1);
 local_c8.data = 10;
 local_c8.next = &local_c0;
 local_c0.data = 0x14;
 local_c0.next = &local_b8;
 local_b8.data = 0x1e;
 local_b8.next = (Node *)0x0;
 iVar1 = linked_list(&local_c8);
 printf("CMP-L2-12 (linked_list): %d\n",iVar1);
 local_e0.data = 10;
 local_d4.prev = &local_e0;
 local_e0.next = &local_d4;
 local_e0.prev = (DNode *)0x0;
 local_d4.data = 0x14;
 local_d4.next = (DNode *)0x0;
 iVar1 = doubly_linked_list(local_d4.prev);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar1);
 local_ec.left = (TreeNode *)0x0;
 local_ec.right = (TreeNode *)0x0;
 local_ec.data = 100;
 iVar1 = binary_tree(&local_ec);
 printf("CMP-L2-14 (binary_tree): %d\n",iVar1);
 local_f4.next = (Edge *)0x0;
 local_f4.dest = 1;
 memset(&local_120,0,0x2c);
 local_120.adjList[0] = &local_f4;
 local_120.numVertices = 2;
 iVar1 = graph_traverse(&local_120);
 printf("CMP-L2-15 (graph_traverse): %d\n",iVar1);
 return;
}



/* Function: main @ 000120b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* Function: FUN_000120f0 @ 000120f0 */

ulonglong FUN_000120f0(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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
 uVar14 = FUN_000122d0();
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



/* Function: FUN_000122d0 @ 000122d0 */

ulonglong FUN_000122d0(int param_1,uint param_2,int param_3,uint param_4)

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



 /* Function: __mulsf3 @ 0001235c */

uint __mulsf3(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

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
 goto LAB_000124d8;
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
LAB_000124d8:
 return uVar9 & 0x80000000 | 0x7f800000;
}



/* Function: __aeabi_drsub @ 000124f4 */

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
 __adddf3(param_1,param_2 ^ 0x80000000,0,0);
 return;
}



/* Function: __subdf3 @ 000124fc */

ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
 int iVar1;
 byte bVar2;
 byte bVar3;
 uint uVar4;
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
 
 uVar8 = param_4 ^ 0x80000000;
 uVar11 = param_2 << 1;
 param_4 = param_4 << 1;
 iVar10 = (int)uVar11 >> 0x15;
 iVar1 = (int)param_4 >> 0x15;
 if ((((uVar11 == param_4 && param_1 == param_3 || uVar11 == 0 && param_1 == 0) ||
 param_4 == 0 && param_3 == 0) || iVar10 == -1) || iVar1 == -1) {
 if (iVar10 == -1 || iVar1 == -1) {
 uVar11 = param_3;
 uVar12 = uVar8;
 if (iVar10 == -1) {
 uVar11 = param_1;
 uVar12 = param_2;
 }
 if (iVar10 != -1 || iVar1 != -1) {
 param_3 = uVar11;
 uVar8 = uVar12;
 }
 bVar14 = (uVar12 & 0xfffff) == 0;
 bVar15 = uVar11 == 0 && bVar14;
 if (uVar11 == 0 && bVar14) {
 bVar15 = param_3 == 0 && (uVar8 & 0xfffff) == 0;
 }
 if (!bVar15 || uVar12 != uVar8) {
 uVar12 = uVar12 | 0x80000;
 }
 return CONCAT44(uVar12,uVar11);
 }
 if (uVar11 != param_4 || param_1 != param_3) {
 if (uVar11 == 0 && param_1 == 0) {
 param_1 = param_3;
 param_2 = uVar8;
 }
 return CONCAT44(param_2,param_1);
 }
 if (param_2 != uVar8) {
 return 0;
 }
 if (uVar11 >> 0x15 == 0) {
 bVar2 = (byte)(param_1 >> 0x1f);
 uVar11 = param_2 * 2 + (uint)bVar2;
 if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
 uVar11 = uVar11 | 0x80000000;
 }
 return CONCAT44(uVar11,param_1 << 1);
 }
 if (uVar11 < 0xffc00000) {
 return CONCAT44(param_2 + 0x100000,param_1);
 }
 param_2 = param_2 & 0x80000000;
LAB_00012770:
 return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
 }
 uVar11 = uVar11 >> 0x15;
 param_4 = param_4 >> 0x15;
 uVar12 = param_4 - uVar11;
 bVar14 = uVar12 != 0;
 if (param_4 < uVar11) {
 uVar12 = -uVar12;
 }
 uVar6 = param_1;
 uVar9 = param_2;
 if (bVar14 && uVar11 <= param_4) {
 uVar11 = uVar11 + uVar12;
 uVar6 = param_3;
 uVar9 = uVar8;
 param_3 = param_1;
 uVar8 = param_2;
 }
 if (0x36 < uVar12) {
 return CONCAT44(uVar9,uVar6);
 }
 uVar5 = uVar9 & 0xfffff | 0x100000;
 if ((uVar9 & 0x80000000) != 0) {
 bVar14 = uVar6 != 0;
 uVar6 = -uVar6;
 uVar5 = -(uVar5 + bVar14);
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
 uVar5 = uVar5 ^ 0x100000;
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
 uVar4 = uVar6 + param_3;
 uVar7 = uVar9 << (uVar8 & 0xff);
 uVar8 = uVar4 + uVar7;
 uVar12 = uVar5 + CARRY4(uVar6,param_3) + ((int)uVar9 >> (uVar12 & 0xff)) +
 (uint)CARRY4(uVar4,uVar7);
 }
 else {
 uVar13 = uVar9 << (-uVar12 + 0x40 & 0xff);
 if (param_3 != 0) {
 uVar13 = uVar13 | 2;
 }
 uVar12 = (int)uVar9 >> (uVar12 - 0x20 & 0xff);
 uVar8 = uVar6 + uVar12;
 uVar12 = uVar5 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar6,uVar12);
 }
 param_2 = uVar12 & 0x80000000;
 uVar6 = uVar12;
 if ((int)uVar12 < 0) {
 bVar14 = uVar13 == 0;
 uVar13 = -uVar13;
 uVar6 = -uVar8;
 uVar8 = -(uVar8 + !bVar14);
 uVar6 = -(uVar12 + (bVar14 <= uVar6));
 }
 if (0xfffff < uVar6) {
 uVar9 = uVar11 - 1;
 if (0x1fffff < uVar6) {
 bVar2 = (byte)uVar6;
 uVar6 = uVar6 >> 1;
 bVar3 = (byte)uVar8;
 uVar8 = (uint)(bVar2 & 1) << 0x1f | uVar8 >> 1;
 uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
 uVar9 = uVar11;
 if (0xffbfffff < uVar11 * 0x200000) goto LAB_00012770;
 }
LAB_00012618:
 bVar14 = 0x7fffffff < uVar13;
 if (uVar13 == 0x80000000) {
 bVar14 = (bool)((byte)uVar8 & 1);
 }
 return CONCAT44(uVar6 + uVar9 * 0x100000 + (uint)CARRY4(uVar8,(uint)bVar14) | param_2,
 uVar8 + bVar14);
 }
 bVar2 = (byte)(uVar13 >> 0x1f);
 uVar13 = uVar13 << 1;
 uVar9 = uVar8 * 2;
 bVar14 = CARRY4(uVar8,uVar8);
 uVar8 = uVar8 * 2 + (uint)bVar2;
 uVar6 = uVar6 * 2 + (uint)(bVar14 || CARRY4(uVar9,(uint)bVar2));
 uVar9 = uVar11 - 2;
 if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_00012618;
 uVar11 = uVar8;
 uVar5 = uVar6;
 if (uVar6 == 0) {
 uVar11 = 0;
 uVar5 = uVar8;
 }
 iVar10 = LZCOUNT(uVar5);
 if (uVar6 == 0) {
 iVar10 = iVar10 + 0x20;
 }
 uVar4 = iVar10 - 0xb;
 bVar15 = SBORROW4(uVar4,0x20);
 uVar7 = iVar10 - 0x2b;
 bVar14 = uVar7 == 0;
 uVar8 = uVar7;
 uVar6 = uVar7;
 if ((int)uVar4 < 0x20) {
 bVar15 = SCARRY4(uVar7,0xc);
 uVar6 = iVar10 - 0x1f;
 bVar14 = uVar6 == 0;
 uVar8 = uVar4;
 if (!bVar14 && -0xd < (int)uVar7) {
 uVar11 = uVar5 << (uVar4 & 0xff);
 uVar5 = uVar5 >> (0xc - uVar6 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar14 || (int)uVar6 < 0 != bVar15) {
 uVar13 = 0x20 - uVar8;
 }
 uVar5 = uVar5 << (uVar8 & 0xff);
 if (bVar14 || (int)uVar6 < 0 != bVar15) {
 uVar5 = uVar5 | uVar11 >> (uVar13 & 0xff);
 uVar11 = uVar11 << (uVar8 & 0xff);
 }
LAB_00012698:
 if ((int)uVar4 <= (int)uVar9) {
 return CONCAT44(uVar5 + (uVar9 - uVar4) * 0x100000 | param_2,uVar11);
 }
 uVar8 = ~(uVar9 - uVar4);
 if ((int)uVar8 < 0x1f) {
 if (uVar8 - 0x13 != 0 && -0xd < (int)(uVar8 - 0x1f)) {
 uVar8 = 0xc - (uVar8 - 0x13);
 return CONCAT44(uVar12,uVar11 >> (0x20 - uVar8 & 0xff) | uVar5 << (uVar8 & 0xff)) &
 0x80000000ffffffff;
 }
 uVar8 = uVar8 + 1;
 return CONCAT44(param_2 | uVar5 >> (uVar8 & 0xff),
 uVar11 >> (uVar8 & 0xff) | uVar5 << (0x20 - uVar8 & 0xff));
 }
 return CONCAT44(uVar12,uVar5 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __adddf3 @ 00012500 */

ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
 int iVar1;
 byte bVar2;
 byte bVar3;
 uint uVar4;
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
 
 uVar9 = param_2 << 1;
 uVar5 = param_4 << 1;
 iVar8 = (int)uVar9 >> 0x15;
 iVar1 = (int)uVar5 >> 0x15;
 if ((((uVar9 == uVar5 && param_1 == param_3 || uVar9 == 0 && param_1 == 0) ||
 uVar5 == 0 && param_3 == 0) || iVar8 == -1) || iVar1 == -1) {
 if (iVar8 == -1 || iVar1 == -1) {
 uVar9 = param_3;
 uVar5 = param_4;
 if (iVar8 == -1) {
 uVar9 = param_1;
 uVar5 = param_2;
 }
 if (iVar8 != -1 || iVar1 != -1) {
 param_3 = uVar9;
 param_4 = uVar5;
 }
 bVar14 = (uVar5 & 0xfffff) == 0;
 bVar15 = uVar9 == 0 && bVar14;
 if (uVar9 == 0 && bVar14) {
 bVar15 = param_3 == 0 && (param_4 & 0xfffff) == 0;
 }
 if (!bVar15 || uVar5 != param_4) {
 uVar5 = uVar5 | 0x80000;
 }
 return CONCAT44(uVar5,uVar9);
 }
 if (uVar9 != uVar5 || param_1 != param_3) {
 if (uVar9 == 0 && param_1 == 0) {
 param_1 = param_3;
 param_2 = param_4;
 }
 return CONCAT44(param_2,param_1);
 }
 if (param_2 != param_4) {
 return 0;
 }
 if (uVar9 >> 0x15 == 0) {
 bVar2 = (byte)(param_1 >> 0x1f);
 uVar9 = param_2 * 2 + (uint)bVar2;
 if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
 uVar9 = uVar9 | 0x80000000;
 }
 return CONCAT44(uVar9,param_1 << 1);
 }
 if (uVar9 < 0xffc00000) {
 return CONCAT44(param_2 + 0x100000,param_1);
 }
 param_2 = param_2 & 0x80000000;
LAB_00012770:
 return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
 }
 uVar9 = uVar9 >> 0x15;
 uVar5 = uVar5 >> 0x15;
 uVar11 = uVar5 - uVar9;
 bVar14 = uVar11 != 0;
 if (uVar5 < uVar9) {
 uVar11 = -uVar11;
 }
 uVar10 = param_1;
 uVar7 = param_2;
 if (bVar14 && uVar9 <= uVar5) {
 uVar9 = uVar9 + uVar11;
 uVar10 = param_3;
 uVar7 = param_4;
 param_3 = param_1;
 param_4 = param_2;
 }
 if (0x36 < uVar11) {
 return CONCAT44(uVar7,uVar10);
 }
 uVar5 = uVar7 & 0xfffff | 0x100000;
 if ((uVar7 & 0x80000000) != 0) {
 bVar14 = uVar10 != 0;
 uVar10 = -uVar10;
 uVar5 = -(uVar5 + bVar14);
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
 uVar5 = uVar5 ^ 0x100000;
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
 uVar4 = uVar10 + param_3;
 uVar6 = uVar7 << (uVar13 & 0xff);
 uVar13 = uVar4 + uVar6;
 uVar5 = uVar5 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
 (uint)CARRY4(uVar4,uVar6);
 }
 else {
 uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
 if (param_3 != 0) {
 uVar12 = uVar12 | 2;
 }
 uVar11 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
 uVar13 = uVar10 + uVar11;
 uVar5 = uVar5 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
 }
 param_2 = uVar5 & 0x80000000;
 uVar11 = uVar5;
 if ((int)uVar5 < 0) {
 bVar14 = uVar12 == 0;
 uVar12 = -uVar12;
 uVar11 = -uVar13;
 uVar13 = -(uVar13 + !bVar14);
 uVar11 = -(uVar5 + (bVar14 <= uVar11));
 }
 if (0xfffff < uVar11) {
 uVar10 = uVar9 - 1;
 if (0x1fffff < uVar11) {
 bVar2 = (byte)uVar11;
 uVar11 = uVar11 >> 1;
 bVar3 = (byte)uVar13;
 uVar13 = (uint)(bVar2 & 1) << 0x1f | uVar13 >> 1;
 uVar12 = (uint)(bVar3 & 1) << 0x1f | uVar12 >> 1;
 uVar10 = uVar9;
 if (0xffbfffff < uVar9 * 0x200000) goto LAB_00012770;
 }
LAB_00012618:
 bVar14 = 0x7fffffff < uVar12;
 if (uVar12 == 0x80000000) {
 bVar14 = (bool)((byte)uVar13 & 1);
 }
 return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar13,(uint)bVar14) | param_2,
 uVar13 + bVar14);
 }
 bVar2 = (byte)(uVar12 >> 0x1f);
 uVar12 = uVar12 << 1;
 uVar10 = uVar13 * 2;
 bVar14 = CARRY4(uVar13,uVar13);
 uVar13 = uVar13 * 2 + (uint)bVar2;
 uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar2));
 uVar10 = uVar9 - 2;
 if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_00012618;
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
 uVar4 = iVar8 - 0xb;
 bVar15 = SBORROW4(uVar4,0x20);
 uVar6 = iVar8 - 0x2b;
 bVar14 = uVar6 == 0;
 uVar11 = uVar6;
 uVar13 = uVar6;
 if ((int)uVar4 < 0x20) {
 bVar15 = SCARRY4(uVar6,0xc);
 uVar13 = iVar8 - 0x1f;
 bVar14 = uVar13 == 0;
 uVar11 = uVar4;
 if (!bVar14 && -0xd < (int)uVar6) {
 uVar9 = uVar7 << (uVar4 & 0xff);
 uVar7 = uVar7 >> (0xc - uVar13 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar14 || (int)uVar13 < 0 != bVar15) {
 uVar12 = 0x20 - uVar11;
 }
 uVar7 = uVar7 << (uVar11 & 0xff);
 if (bVar14 || (int)uVar13 < 0 != bVar15) {
 uVar7 = uVar7 | uVar9 >> (uVar12 & 0xff);
 uVar9 = uVar9 << (uVar11 & 0xff);
 }
LAB_00012698:
 if ((int)uVar4 <= (int)uVar10) {
 return CONCAT44(uVar7 + (uVar10 - uVar4) * 0x100000 | param_2,uVar9);
 }
 uVar11 = ~(uVar10 - uVar4);
 if ((int)uVar11 < 0x1f) {
 if (uVar11 - 0x13 != 0 && -0xd < (int)(uVar11 - 0x1f)) {
 uVar11 = 0xc - (uVar11 - 0x13);
 return CONCAT44(uVar5,uVar9 >> (0x20 - uVar11 & 0xff) | uVar7 << (uVar11 & 0xff)) &
 0x80000000ffffffff;
 }
 uVar11 = uVar11 + 1;
 return CONCAT44(param_2 | uVar7 >> (uVar11 & 0xff),
 uVar9 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff));
 }
 return CONCAT44(uVar5,uVar7 >> (uVar11 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __aeabi_ui2d @ 000127ac */

ulonglong __aeabi_ui2d(uint param_1)

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
 
 if (param_1 == 0) {
 return 0;
 }
 uVar1 = 0;
 iVar4 = LZCOUNT(param_1);
 uVar5 = iVar4 + 0x15;
 bVar8 = SBORROW4(uVar5,0x20);
 uVar2 = iVar4 - 0xb;
 bVar7 = uVar2 == 0;
 uVar6 = uVar2;
 uVar3 = uVar2;
 if (uVar5 < 0x20) {
 bVar8 = SCARRY4(uVar2,0xc);
 uVar3 = iVar4 + 1;
 bVar7 = uVar3 == 0;
 uVar6 = uVar5;
 if (!bVar7 && -0xd < (int)uVar2) {
 uVar1 = param_1 << uVar5;
 param_1 = param_1 >> (0xc - uVar3 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar7 || (int)uVar3 < 0 != bVar8) {
 in_r12 = 0x20 - uVar6;
 }
 param_1 = param_1 << (uVar6 & 0xff);
 if (bVar7 || (int)uVar3 < 0 != bVar8) {
 param_1 = param_1 | 0U >> (in_r12 & 0xff);
 uVar1 = 0 << (uVar6 & 0xff);
 }
LAB_00012698:
 if (uVar5 < 0x433) {
 return CONCAT44(param_1 + (0x432 - uVar5) * 0x100000,uVar1);
 }
 uVar6 = ~(0x432 - uVar5);
 if (0x1e < (int)uVar6) {
 return (ulonglong)(param_1 >> (uVar6 - 0x1f & 0xff));
 }
 if (uVar6 - 0x13 == 0 || (int)(uVar6 - 0x1f) < -0xc) {
 uVar6 = uVar6 + 1;
 return CONCAT44(param_1 >> (uVar6 & 0xff),
 uVar1 >> (uVar6 & 0xff) | param_1 << (0x20 - uVar6 & 0xff));
 }
 uVar6 = 0xc - (uVar6 - 0x13);
 return (ulonglong)(uVar1 >> (0x20 - uVar6 & 0xff) | param_1 << (uVar6 & 0xff));
}



/* Function: __floatsidf @ 000127d0 */

ulonglong __floatsidf(uint param_1)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint in_r12;
 bool bVar9;
 bool bVar10;
 
 if (param_1 == 0) {
 return 0;
 }
 uVar8 = param_1 & 0x80000000;
 uVar2 = param_1;
 if ((int)uVar8 < 0) {
 uVar2 = -param_1;
 }
 uVar1 = 0;
 iVar5 = LZCOUNT(uVar2);
 uVar6 = iVar5 + 0x15;
 bVar10 = SBORROW4(uVar6,0x20);
 uVar3 = iVar5 - 0xb;
 bVar9 = uVar3 == 0;
 uVar7 = uVar3;
 uVar4 = uVar3;
 if (uVar6 < 0x20) {
 bVar10 = SCARRY4(uVar3,0xc);
 uVar4 = iVar5 + 1;
 bVar9 = uVar4 == 0;
 uVar7 = uVar6;
 if (!bVar9 && -0xd < (int)uVar3) {
 uVar1 = uVar2 << uVar6;
 uVar2 = uVar2 >> (0xc - uVar4 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar9 || (int)uVar4 < 0 != bVar10) {
 in_r12 = 0x20 - uVar7;
 }
 uVar2 = uVar2 << (uVar7 & 0xff);
 if (bVar9 || (int)uVar4 < 0 != bVar10) {
 uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
 uVar1 = 0 << (uVar7 & 0xff);
 }
LAB_00012698:
 if (uVar6 < 0x433) {
 return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar8,uVar1);
 }
 uVar7 = ~(0x432 - uVar6);
 if (0x1e < (int)uVar7) {
 return CONCAT44(param_1,uVar2 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
 uVar7 = uVar7 + 1;
 return CONCAT44(uVar8 | uVar2 >> (uVar7 & 0xff),
 uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff));
 }
 uVar8 = 0xc - (uVar7 - 0x13);
 return CONCAT44(param_1,uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff)) &
 0x80000000ffffffff;
}



/* Function: __extendsfdf2 @ 000127f8 */

ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint in_r12;
 bool bVar10;
 bool bVar11;
 
 uVar2 = param_1 << 1;
 bVar10 = uVar2 == 0;
 uVar9 = param_1 & 0x80000000;
 uVar8 = (uint)((int)uVar2 >> 3) >> 1;
 uVar1 = uVar9 | uVar8;
 param_1 = param_1 << 0x1d;
 if (!bVar10) {
 param_4 = uVar2 & 0xff000000;
 bVar10 = param_4 == 0;
 }
 if (!bVar10) {
 bVar10 = param_4 == 0xff000000;
 }
 if (!bVar10) {
 return CONCAT44(uVar1,param_1) ^ 0x3800000000000000;
 }
 if ((uVar2 & 0xffffff) == 0) {
 return CONCAT44(uVar1,param_1);
 }
 if (param_4 == 0xff000000) {
 return CONCAT44(uVar1,param_1) | 0x8000000000000;
 }
 uVar2 = param_1;
 uVar3 = uVar8;
 if (uVar8 == 0) {
 uVar2 = 0;
 uVar3 = param_1;
 }
 iVar6 = LZCOUNT(uVar3);
 if (uVar8 == 0) {
 iVar6 = iVar6 + 0x20;
 }
 uVar7 = iVar6 - 0xb;
 bVar11 = SBORROW4(uVar7,0x20);
 uVar4 = iVar6 - 0x2b;
 bVar10 = uVar4 == 0;
 uVar8 = uVar4;
 uVar5 = uVar4;
 if ((int)uVar7 < 0x20) {
 bVar11 = SCARRY4(uVar4,0xc);
 uVar5 = iVar6 - 0x1f;
 bVar10 = uVar5 == 0;
 uVar8 = uVar7;
 if (!bVar10 && -0xd < (int)uVar4) {
 uVar2 = uVar3 << (uVar7 & 0xff);
 uVar3 = uVar3 >> (0xc - uVar5 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar10 || (int)uVar5 < 0 != bVar11) {
 in_r12 = 0x20 - uVar8;
 }
 uVar3 = uVar3 << (uVar8 & 0xff);
 if (bVar10 || (int)uVar5 < 0 != bVar11) {
 uVar3 = uVar3 | uVar2 >> (in_r12 & 0xff);
 uVar2 = uVar2 << (uVar8 & 0xff);
 }
LAB_00012698:
 if ((int)uVar7 < 0x381) {
 return CONCAT44(uVar3 + (0x380 - uVar7) * 0x100000 | uVar9,uVar2);
 }
 uVar8 = ~(0x380 - uVar7);
 if (0x1e < (int)uVar8) {
 return CONCAT44(uVar1,uVar3 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 if (uVar8 - 0x13 == 0 || (int)(uVar8 - 0x1f) < -0xc) {
 uVar8 = uVar8 + 1;
 return CONCAT44(uVar9 | uVar3 >> (uVar8 & 0xff),
 uVar2 >> (uVar8 & 0xff) | uVar3 << (0x20 - uVar8 & 0xff));
 }
 uVar9 = 0xc - (uVar8 - 0x13);
 return CONCAT44(uVar1,uVar2 >> (0x20 - uVar9 & 0xff) | uVar3 << (uVar9 & 0xff)) &
 0x80000000ffffffff;
}



/* Function: __floatundidf @ 00012840 */

ulonglong __floatundidf(uint param_1,uint param_2)

{
 byte bVar1;
 byte bVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 uint uVar10;
 int iVar11;
 bool bVar12;
 bool bVar13;
 
 if (param_1 == 0 && param_2 == 0) {
 return CONCAT44(param_2,param_1);
 }
 iVar11 = 0x432;
 uVar10 = 0;
 if (param_2 >> 0x16 != 0) {
 iVar11 = 3;
 if (param_2 >> 0x19 != 0) {
 iVar11 = 6;
 }
 if (param_2 >> 0x1c != 0) {
 iVar11 = iVar11 + 3;
 }
 iVar11 = iVar11 - ((int)param_2 >> 0x1f);
 uVar10 = param_1 << (0x20U - iVar11 & 0xff);
 param_1 = param_1 >> iVar11 | param_2 << (0x20U - iVar11 & 0xff);
 param_2 = param_2 >> iVar11;
 iVar11 = iVar11 + 0x432;
 }
 if (0xfffff < param_2) {
 if (0x1fffff < param_2) {
 bVar1 = (byte)param_2;
 param_2 = param_2 >> 1;
 bVar2 = (byte)param_1;
 param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
 uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
 iVar11 = iVar11 + 1;
 if (0xffbfffff < (uint)(iVar11 * 0x200000)) {
 return 0x7ff0000000000000;
 }
 }
LAB_00012618:
 bVar12 = 0x7fffffff < uVar10;
 if (uVar10 == 0x80000000) {
 bVar12 = (bool)((byte)param_1 & 1);
 }
 return CONCAT44(param_2 + iVar11 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12),
 param_1 + bVar12);
 }
 bVar1 = (byte)(uVar10 >> 0x1f);
 uVar10 = uVar10 << 1;
 uVar3 = param_1 * 2;
 bVar12 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 param_2 = param_2 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
 bVar12 = iVar11 != 0;
 iVar11 = iVar11 + -1;
 if (bVar12 && 0xfffff < param_2) goto LAB_00012618;
 uVar3 = param_1;
 uVar4 = param_2;
 if (param_2 == 0) {
 uVar3 = 0;
 uVar4 = param_1;
 }
 iVar8 = LZCOUNT(uVar4);
 if (param_2 == 0) {
 iVar8 = iVar8 + 0x20;
 }
 uVar9 = iVar8 - 0xb;
 bVar13 = SBORROW4(uVar9,0x20);
 uVar5 = iVar8 - 0x2b;
 bVar12 = uVar5 == 0;
 uVar7 = uVar5;
 uVar6 = uVar5;
 if ((int)uVar9 < 0x20) {
 bVar13 = SCARRY4(uVar5,0xc);
 uVar6 = iVar8 - 0x1f;
 bVar12 = uVar6 == 0;
 uVar7 = uVar9;
 if (!bVar12 && -0xd < (int)uVar5) {
 uVar3 = uVar4 << (uVar9 & 0xff);
 uVar4 = uVar4 >> (0xc - uVar6 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar12 || (int)uVar6 < 0 != bVar13) {
 uVar10 = 0x20 - uVar7;
 }
 uVar4 = uVar4 << (uVar7 & 0xff);
 if (bVar12 || (int)uVar6 < 0 != bVar13) {
 uVar4 = uVar4 | uVar3 >> (uVar10 & 0xff);
 uVar3 = uVar3 << (uVar7 & 0xff);
 }
LAB_00012698:
 if ((int)uVar9 <= iVar11) {
 return CONCAT44(uVar4 + (iVar11 - uVar9) * 0x100000,uVar3);
 }
 uVar10 = ~(iVar11 - uVar9);
 if ((int)uVar10 < 0x1f) {
 if (uVar10 - 0x13 != 0 && -0xd < (int)(uVar10 - 0x1f)) {
 uVar10 = 0xc - (uVar10 - 0x13);
 return (ulonglong)(uVar3 >> (0x20 - uVar10 & 0xff) | uVar4 << (uVar10 & 0xff));
 }
 uVar10 = uVar10 + 1;
 return CONCAT44(uVar4 >> (uVar10 & 0xff),
 uVar3 >> (uVar10 & 0xff) | uVar4 << (0x20 - uVar10 & 0xff));
 }
 return (ulonglong)(uVar4 >> (uVar10 - 0x1f & 0xff));
}



/* Function: __aeabi_l2d @ 00012854 */

ulonglong __aeabi_l2d(uint param_1,uint param_2)

{
 byte bVar1;
 byte bVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 int iVar10;
 uint uVar11;
 uint uVar12;
 bool bVar13;
 bool bVar14;
 
 if (param_1 == 0 && param_2 == 0) {
 return CONCAT44(param_2,param_1);
 }
 uVar11 = param_2 & 0x80000000;
 uVar4 = param_2;
 if ((int)uVar11 < 0) {
 bVar13 = param_1 != 0;
 param_1 = -param_1;
 uVar4 = -(param_2 + bVar13);
 }
 iVar10 = 0x432;
 uVar12 = 0;
 if (uVar4 >> 0x16 != 0) {
 iVar10 = 3;
 if (uVar4 >> 0x19 != 0) {
 iVar10 = 6;
 }
 if (uVar4 >> 0x1c != 0) {
 iVar10 = iVar10 + 3;
 }
 iVar10 = iVar10 - ((int)uVar4 >> 0x1f);
 uVar12 = param_1 << (0x20U - iVar10 & 0xff);
 param_1 = param_1 >> iVar10 | uVar4 << (0x20U - iVar10 & 0xff);
 uVar4 = uVar4 >> iVar10;
 iVar10 = iVar10 + 0x432;
 }
 if (0xfffff < uVar4) {
 if (0x1fffff < uVar4) {
 bVar1 = (byte)uVar4;
 uVar4 = uVar4 >> 1;
 bVar2 = (byte)param_1;
 param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
 uVar12 = (uint)(bVar2 & 1) << 0x1f | uVar12 >> 1;
 iVar10 = iVar10 + 1;
 if (0xffbfffff < (uint)(iVar10 * 0x200000)) {
 return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
 }
 }
LAB_00012618:
 bVar13 = 0x7fffffff < uVar12;
 if (uVar12 == 0x80000000) {
 bVar13 = (bool)((byte)param_1 & 1);
 }
 return CONCAT44(uVar4 + iVar10 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar13) | uVar11,
 param_1 + bVar13);
 }
 bVar1 = (byte)(uVar12 >> 0x1f);
 uVar12 = uVar12 << 1;
 uVar3 = param_1 * 2;
 bVar13 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 uVar4 = uVar4 * 2 + (uint)(bVar13 || CARRY4(uVar3,(uint)bVar1));
 bVar13 = iVar10 != 0;
 iVar10 = iVar10 + -1;
 if (bVar13 && 0xfffff < uVar4) goto LAB_00012618;
 uVar3 = param_1;
 uVar5 = uVar4;
 if (uVar4 == 0) {
 uVar3 = 0;
 uVar5 = param_1;
 }
 iVar8 = LZCOUNT(uVar5);
 if (uVar4 == 0) {
 iVar8 = iVar8 + 0x20;
 }
 uVar9 = iVar8 - 0xb;
 bVar14 = SBORROW4(uVar9,0x20);
 uVar6 = iVar8 - 0x2b;
 bVar13 = uVar6 == 0;
 uVar4 = uVar6;
 uVar7 = uVar6;
 if ((int)uVar9 < 0x20) {
 bVar14 = SCARRY4(uVar6,0xc);
 uVar7 = iVar8 - 0x1f;
 bVar13 = uVar7 == 0;
 uVar4 = uVar9;
 if (!bVar13 && -0xd < (int)uVar6) {
 uVar3 = uVar5 << (uVar9 & 0xff);
 uVar5 = uVar5 >> (0xc - uVar7 & 0xff);
 goto LAB_00012698;
 }
 }
 if (bVar13 || (int)uVar7 < 0 != bVar14) {
 uVar12 = 0x20 - uVar4;
 }
 uVar5 = uVar5 << (uVar4 & 0xff);
 if (bVar13 || (int)uVar7 < 0 != bVar14) {
 uVar5 = uVar5 | uVar3 >> (uVar12 & 0xff);
 uVar3 = uVar3 << (uVar4 & 0xff);
 }
LAB_00012698:
 if ((int)uVar9 <= iVar10) {
 return CONCAT44(uVar5 + (iVar10 - uVar9) * 0x100000 | uVar11,uVar3);
 }
 uVar4 = ~(iVar10 - uVar9);
 if ((int)uVar4 < 0x1f) {
 if (uVar4 - 0x13 != 0 && -0xd < (int)(uVar4 - 0x1f)) {
 uVar4 = 0xc - (uVar4 - 0x13);
 return CONCAT44(param_2,uVar3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff)) &
 0x80000000ffffffff;
 }
 uVar4 = uVar4 + 1;
 return CONCAT44(uVar11 | uVar5 >> (uVar4 & 0xff),
 uVar3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
 }
 return CONCAT44(param_2,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __muldf3 @ 000128b4 */

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
 uVar14 = FUN_00012a94();
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



/* Function: FUN_00012a94 @ 00012a94 */

ulonglong FUN_00012a94(int param_1,uint param_2,int param_3,uint param_4)

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



/* Function: __divdf3 @ 00012b20 */

ulonglong __divdf3(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
 uint uVar1;
 uint uVar2;
 uint extraout_r2;
 uint uVar3;
 uint extraout_r3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 int iVar7;
 uint uVar8;
 uint unaff_r5;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 uint extraout_r12;
 uint uVar12;
 bool bVar13;
 bool bVar14;
 bool bVar15;
 undefined8 uVar16;
 
 uVar16 = CONCAT44(param_2,param_1);
 uVar11 = 0x7ff;
 uVar6 = param_2 >> 0x14 & 0x7ff;
 bVar13 = uVar6 == 0;
 if (!bVar13) {
 unaff_r5 = param_4 >> 0x14 & 0x7ff;
 bVar13 = unaff_r5 == 0;
 }
 if (!bVar13) {
 bVar13 = uVar6 == 0x7ff;
 }
 if (!bVar13) {
 bVar13 = unaff_r5 == 0x7ff;
 }
 if (bVar13) {
 uVar16 = FUN_00012cb4();
 param_3 = extraout_r2;
 param_4 = extraout_r3;
 uVar11 = extraout_r12;
 }
 uVar8 = (uint)((ulonglong)uVar16 >> 0x20);
 uVar2 = (uint)uVar16;
 iVar7 = uVar6 - unaff_r5;
 if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
 uVar6 = (uVar8 ^ param_4) & 0x80000000 | uVar8 & 0xfffff;
 bVar14 = SCARRY4(iVar7,uVar11 >> 1);
 uVar8 = iVar7 + (uVar11 >> 1);
 bVar13 = (int)uVar8 < 0;
 bVar15 = uVar8 == 0;
 if (!bVar15 && bVar13 == bVar14) {
 bVar14 = SBORROW4(uVar11,uVar8);
 bVar13 = (int)(uVar11 - uVar8) < 0;
 bVar15 = uVar11 == uVar8;
 }
 if (!bVar15 && bVar13 == bVar14) {
 return CONCAT44(uVar6 | uVar8 * 0x100000,uVar2);
 }
 uVar6 = uVar6 | 0x100000;
 uVar4 = 0;
 bVar15 = SBORROW4(uVar8,1);
 uVar8 = uVar8 - 1;
 bVar13 = uVar8 == 0;
 uVar11 = uVar8;
 }
 else {
 uVar4 = (param_4 << 0xc) >> 4 | 0x10000000 | param_3 >> 0x18;
 uVar11 = param_3 << 8;
 uVar9 = (uVar8 << 0xc) >> 4 | 0x10000000 | uVar2 >> 0x18;
 uVar2 = uVar2 * 0x100;
 uVar6 = (uVar8 ^ param_4) & 0x80000000;
 bVar13 = uVar4 <= uVar9;
 if (uVar9 == uVar4) {
 bVar13 = uVar11 <= uVar2;
 }
 iVar7 = iVar7 + (uint)bVar13;
 uVar8 = iVar7 + 0x3fd;
 if (!bVar13) {
 uVar4 = uVar4 >> 1;
 uVar11 = (uint)((byte)(param_3 >> 0x18) & 1) << 0x1f | uVar11 >> 1;
 }
 uVar10 = uVar2 - uVar11;
 uVar9 = uVar9 - (uVar4 + (uVar2 < uVar11));
 uVar5 = uVar4 >> 1;
 uVar3 = (uint)((byte)uVar4 & 1) << 0x1f | uVar11 >> 1;
 uVar2 = 0x100000;
 uVar11 = 0x80000;
 while( true ) {
 bVar13 = uVar3 <= uVar10;
 if (uVar5 < uVar9 || uVar9 - uVar5 < (uint)bVar13) {
 uVar10 = uVar10 - uVar3;
 uVar2 = uVar2 | uVar11;
 uVar9 = uVar9 - (uVar5 + !bVar13);
 }
 uVar4 = uVar5 >> 1;
 uVar3 = (uint)((byte)uVar5 & 1) << 0x1f | uVar3 >> 1;
 bVar13 = uVar3 <= uVar10;
 if (uVar4 < uVar9 || uVar9 - uVar4 < (uint)bVar13) {
 uVar10 = uVar10 - uVar3;
 uVar2 = uVar2 | uVar11 >> 1;
 uVar9 = uVar9 - (uVar4 + !bVar13);
 }
 uVar12 = uVar5 >> 2;
 uVar1 = (uint)((byte)uVar4 & 1) << 0x1f | uVar3 >> 1;
 bVar13 = uVar1 <= uVar10;
 if (uVar12 < uVar9 || uVar9 - uVar12 < (uint)bVar13) {
 uVar10 = uVar10 - uVar1;
 uVar2 = uVar2 | uVar11 >> 2;
 uVar9 = uVar9 - (uVar12 + !bVar13);
 }
 uVar5 = uVar5 >> 3;
 uVar3 = (uint)((byte)uVar12 & 1) << 0x1f | uVar1 >> 1;
 bVar13 = uVar3 <= uVar10;
 if (uVar5 < uVar9 || uVar9 - uVar5 < (uint)bVar13) {
 uVar10 = uVar10 - uVar3;
 uVar2 = uVar2 | uVar11 >> 3;
 uVar9 = uVar9 - (uVar5 + !bVar13);
 }
 uVar4 = uVar9 | uVar10;
 if (uVar4 == 0) break;
 uVar9 = uVar9 << 4 | uVar10 >> 0x1c;
 uVar10 = uVar10 << 4;
 uVar5 = uVar5 << 3 | uVar3 >> 0x1d;
 uVar3 = (uVar1 >> 1) << 3;
 uVar11 = uVar11 >> 4;
 if (uVar11 == 0) {
 if ((uVar6 & 0x100000) != 0) goto LAB_00012c60;
 uVar6 = uVar6 | uVar2;
 uVar2 = 0;
 uVar11 = 0x80000000;
 }
 }
 if ((uVar6 & 0x100000) == 0) {
 uVar6 = uVar6 | uVar2;
 uVar2 = 0;
 }
LAB_00012c60:
 bVar14 = 0xfc < uVar8;
 bVar15 = SBORROW4(uVar8,0xfd);
 uVar12 = iVar7 + 0x300;
 bVar13 = uVar12 == 0;
 uVar11 = uVar12;
 if (bVar14 && !bVar13) {
 bVar14 = 0x6ff < uVar12;
 bVar15 = SBORROW4(uVar12,0x700);
 uVar11 = iVar7 - 0x400;
 bVar13 = uVar12 == 0x700;
 }
 if (!bVar14 || bVar13) {
 bVar13 = uVar5 <= uVar9;
 if (uVar9 == uVar5) {
 bVar13 = uVar3 <= uVar10;
 }
 if (uVar9 == uVar5 && uVar10 == uVar3) {
 bVar13 = (bool)((byte)uVar2 & 1);
 }
 return CONCAT44(uVar6 + uVar8 * 0x100000 + (uint)CARRY4(uVar2,(uint)bVar13),uVar2 + bVar13);
 }
 }
 if (!bVar13 && (int)uVar11 < 0 == bVar15) {
 return (ulonglong)(uVar6 & 0x80000000 | 0x7ff00000) << 0x20;
 }
 if ((int)uVar8 < -0x35) {
 return (ulonglong)(uVar6 & 0x80000000) << 0x20;
 }
 uVar11 = -uVar8;
 uVar9 = uVar11 - 0x20;
 if (0x1f < (int)uVar11) {
 uVar8 = uVar2 >> (uVar9 & 0xff) | uVar6 << (0x20 - uVar9 & 0xff);
 uVar11 = (uVar6 >> (uVar9 & 0xff) & ~((uVar6 & 0x80000000) >> (uVar9 & 0xff))) -
 ((int)uVar8 >> 0x1f);
 if ((uVar4 == 0 && uVar2 << (0x20 - uVar9 & 0xff) == 0) && (uVar8 & 0x7fffffff) == 0) {
 uVar11 = uVar11 & ~(uVar8 >> 0x1f);
 }
 return CONCAT44(uVar6,uVar11) & 0x80000000ffffffff;
 }
 if (uVar11 - 0x14 != 0 && -0xd < (int)uVar9) {
 uVar8 = 0xc - (uVar11 - 0x14);
 uVar11 = uVar2 << (uVar8 & 0xff);
 uVar2 = uVar2 >> (0x20 - uVar8 & 0xff) | uVar6 << (uVar8 & 0xff);
 uVar8 = uVar2 + -((int)uVar11 >> 0x1f);
 if (uVar4 == 0 && (uVar11 & 0x7fffffff) == 0) {
 uVar8 = uVar8 & ~(uVar11 >> 0x1f);
 }
 return CONCAT44((uVar6 & 0x80000000) + (uint)CARRY4(uVar2,-((int)uVar11 >> 0x1f)),uVar8);
 }
 uVar9 = uVar2 << (uVar8 + 0x20 & 0xff);
 uVar2 = uVar2 >> (uVar11 & 0xff) | uVar6 << (uVar8 + 0x20 & 0xff);
 uVar8 = uVar2 + -((int)uVar9 >> 0x1f);
 if (uVar4 == 0 && (uVar9 & 0x7fffffff) == 0) {
 uVar8 = uVar8 & ~(uVar9 >> 0x1f);
 }
 return CONCAT44((uVar6 & 0x80000000) + ((uVar6 & 0x7fffffff) >> (uVar11 & 0xff)) +
 (uint)CARRY4(uVar2,-((int)uVar9 >> 0x1f)),uVar8);
}



/* Function: FUN_00012cb4 @ 00012cb4 */

ulonglong FUN_00012cb4(int param_1,uint param_2,int param_3,uint param_4)

{
 int iVar1;
 uint unaff_r4;
 uint uVar2;
 uint uVar3;
 uint in_r12;
 
 uVar2 = in_r12 & param_4 >> 0x14;
 uVar3 = param_2;
 if (unaff_r4 != in_r12 || uVar2 != in_r12) {
 if (unaff_r4 == in_r12) {
 if ((param_1 == 0 && (param_2 & 0xfffff) == 0) &&
 (param_1 = param_3, uVar3 = param_4, uVar2 != in_r12)) {
LAB_00012afc:
 return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
 }
 }
 else if (uVar2 == in_r12) {
 param_1 = param_3;
 uVar3 = param_4;
 if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
LAB_00012ab0:
 return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
 }
 }
 else {
 if ((param_1 != 0 || (param_2 & 0x7fffffff) != 0) &&
 (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) {
 if (unaff_r4 == 0) {
 uVar3 = param_2 & 0x80000000;
 do {
 iVar1 = param_1 >> 0x1f;
 param_1 = param_1 << 1;
 param_2 = param_2 * 2 - iVar1;
 } while ((param_2 & 0x100000) == 0);
 param_2 = param_2 | uVar3;
 if (uVar2 != 0) {
 return CONCAT44(param_2,param_1);
 }
 }
 do {
 iVar1 = param_3 >> 0x1f;
 param_3 = param_3 << 1;
 param_4 = param_4 * 2 - iVar1;
 } while ((param_4 & 0x100000) == 0);
 return CONCAT44(param_2,param_1);
 }
 if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) goto LAB_00012afc;
 if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) goto LAB_00012ab0;
 }
 }
 return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}



/* Function: __aeabi_frsub @ 00012d24 */

void __aeabi_frsub(uint param_1)

{
 __addsf3(param_1 ^ 0x80000000);
 return;
}




/* CRT stub function __aeabi_fsub removed by preprocessor */




/* Function: __addsf3 @ 00012d30 */

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
LAB_00012e90:
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
 if (0xfd < uVar7) goto LAB_00012e90;
 }
 }
 uVar4 = uVar4 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar6);
 if (uVar6 == 0x80000000) {
 uVar4 = uVar4 & 0xfffffffe;
 }
 return uVar4 | param_1;
}



/* Function: __aeabi_ui2f @ 00012ec0 */

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



/* Function: __floatsisf @ 00012ec8 */

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



/* Function: __floatundisf @ 00012ee8 */

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



/* Function: __aeabi_l2f @ 00012ef8 */

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



/* Function: __fixsfsi @ 00012f74 */

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




/* Total functions decompiled: 87 */
