/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/2/2_gcc_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <string.h>
#include <stdint.h>

/* Type definitions for decompiled code */
typedef unsigned char byte;
typedef unsigned int uint;
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef void* undefined;
typedef void (*code)(void);

#define false 0
#define true 1

typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct {
    int width;
    int height;
} Size;

typedef struct {
    int x;
    int y;
} Position;

typedef struct {
    Size size;
    Position position;
} Rect;

typedef struct {
    struct {
        struct {
            int r;
            int g;
            int b;
        } fill;
    } style;
    struct {
        Position position;
    } bounds;
} Widget;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    byte _0_2_;
    uint32_t _4_4_;
} Flags;

typedef struct {
    int i;
    float f;
    char bytes[4];
} UnionData;

typedef enum {
    STATE_A = 0,
    STATE_B = 1,
    STATE_C = 2,
    STATE_D = 3
} State;

typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);

typedef struct {
    int data;
    _func_int_int process;
} Device;

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

typedef struct {
    int numVertices;
    Edge *adjList[10];
} Graph;

typedef long double longdouble;

/* Ghidra macro for concatenating two 32-bit values into 64-bit */
#define CONCAT44(high, low) (((longlong)(high) << 32) | ((ulonglong)(low) & 0xffffffffU))

/* Math helper macro */
#define ROUND(x) ((int)((x) + 0.5))

/* CRT stub function _init removed by preprocessor */

/* External data declarations */
extern char DAT_00013008[];
extern char DAT_00013173[];
extern char DAT_00013289[];
extern int DAT_0001360c[];
extern UnionData DAT_00013638[];

/* Define missing data arrays */
char DAT_00013008[] = "Testing data types\n";
char DAT_00013173[] = "Testing array types\n";
char DAT_00013289[] = "Testing pointer types\n";
char DAT_00013422[] = "Testing composite types\n";
int DAT_0001360c[] = {1, 2, 3, 4, 5, 6};
int DAT_00013620[] = {1, 2, 3, 4, 5, 6};
UnionData DAT_00013638[] = {{0x12345678, 0.0f, {0}}, {0x12345678, 0.0f, {0}}, {0x12345678, 0.0f, {0}}};
int CSWTCH_78[] = {10, 20, 30, 40};




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 000110d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

/* WARNING: Unknown calling convention */

int double_value(int x)

{
 return x * 2;
}



/* Function: process_int @ 0001127f */

/* WARNING: Unknown calling convention */

int process_int(int x)

{
 return x * 2 + 1;
}



/* Function: complex_callback @ 0001128e */

/* WARNING: Unknown calling convention */

int complex_callback(int *p,char **args)

{
 *p = *p + 10;
 return (unsigned int)(*args != (char *)0x0);
}



/* Function: process_char @ 000112a9 */

/* WARNING: Unknown calling convention */

char process_char(char c)

{
 char cVar1;
 
 cVar1 = c + ' ';
 if (0x19 < (byte)(c + 0xbfU)) {
 cVar1 = c;
 }
 return cVar1;
}



/* Function: process_short @ 000112c4 */

/* WARNING: Unknown calling convention */

short process_short(short a,short b)

{
 return b + a;
}



/* Function: process_long @ 000112d3 */

/* WARNING: Unknown calling convention */

long process_long(long x)

{
 return x * 2;
}



/* Function: process_ll @ 000112e1 */

/* WARNING: Unknown calling convention */

longlong process_ll(longlong x)

{
 longlong lVar1;
 
 lVar1 = (x & 0xffffffffU) * (x & 0xffffffffU);
 return CONCAT44((int)((ulonglong)lVar1 >> 0x20) + (int)(x >> 32) * (int)x * 2,(int)lVar1);
}



/* Function: process_float @ 000112fa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

float process_float(float f)

{
 return f * 1.5 + 0.5;
}



/* Function: process_double @ 00011322 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

double process_double(double d)

{
 return (double)((float)d * 0.5 + 0.1);
}



/* Function: process_ld @ 0001134c */

/* WARNING: Unknown calling convention */

longdouble * process_ld(longdouble d)

{
 longdouble *in_EAX;
 
 return in_EAX;
}



/* Function: process_bool @ 0001135e */

/* WARNING: Unknown calling convention */

_Bool process_bool(int x)

{
 _Bool _Var1;
 
 _Var1 = false;
 if (0 < x) {
 _Var1 = (_Bool)(~(byte)x & 1);
 }
 return _Var1;
}



/* Function: const_param @ 0001137a */

/* WARNING: Unknown calling convention */

int const_param(int *p)

{
 return *p + 10;
}



/* Function: volatile_access @ 0001138b */

/* WARNING: Unknown calling convention */

int volatile_access(int *p)

{
 return *p + *p;
}



/* Function: test_data_types_l1 @ 0001139d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 int vol_value;
 
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
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 000114ec */

int array_1d_stack(int *arr,int n)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + arr[iVar1];
 }
 return iVar2;
}



/* Function: array_string @ 00011509 */

/* WARNING: Unknown calling convention */

int array_string(char *str)

{
 int iVar1;
 
 for (iVar1 = 0; str[iVar1] != '\0'; iVar1 = iVar1 + 1) {
 }
 return iVar1;
}



/* Function: array_2d_stack @ 00011520 */

/* WARNING: Unknown calling convention */

int array_2d_stack(int (*arr) [10])

{
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 piVar1 = arr[0xb];
 do {
 iVar2 = iVar2 + (*arr)[0];
 arr = (int (*) [10])(*(int (*) [10])((int)arr + 0x28) + 1);
 } while (arr != (int (*) [10])piVar1);
 return iVar2;
}



/* Function: array_3d @ 0001153f */

/* WARNING: Unknown calling convention */

int array_3d(int (*arr) [5] [5])

{
 int (*paiVar1) [5];
 int (*paiVar2) [5];
 int iVar3;
 int (*paiVar4) [5];
 
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 paiVar2 = arr[5];
 do {
 /* Unresolved local var: int j@[???] */
 paiVar1 = (int (*) [5])((int)arr + 100);
 paiVar4 = *arr;
 do {
 /* Unresolved local var: int k@[???] */
 arr = (int (*) [5] [5])(paiVar4 + 1);
 iVar3 = iVar3 + (*(int (*) [5])*paiVar4)[0] + (*paiVar4)[1] + (*paiVar4)[2] + (*paiVar4)[3] +
 (*paiVar4)[4];
 paiVar4 = (int (*) [5])arr;
 } while (arr != (int (*) [5] [5])paiVar1);
 } while ((int (*) [5] [5])paiVar2 != arr);
 return iVar3;
}



/* Function: array_vla @ 00011571 */

int array_vla(int n,int *arr)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + arr[iVar1];
 }
 return iVar2;
}



/* Function: array_pointer @ 0001158e */

int array_pointer(int (*arr) [10],int n)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + arr[iVar1][0];
 }
 return iVar2;
}



/* Function: pointer_array @ 000115b0 */

/* WARNING: Unknown calling convention */

int pointer_array(int **arr,int n)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar2 = 10;
 if (n < 0xb) {
 iVar2 = n;
 }
 iVar1 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
 if (arr[iVar3] != (int *)0x0) {
 iVar1 = iVar1 + *arr[iVar3];
 }
 }
 return iVar1;
}



/* Function: array_complex_index @ 000115e1 */

/* WARNING: Unknown calling convention */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 int iVar1;
 
 iVar1 = -1;
 if (((-1 < (x | y)) && (x < w)) && (y < h)) {
 iVar1 = arr[w * y + x];
 }
 return iVar1;
}



/* Function: array_oob @ 00011615 */

int array_oob(int *arr,int n)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar1 = 0; iVar1 <= n; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + arr[iVar1];
 }
 return iVar2;
}



/* Function: test_array_types @ 00011632 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 int iVar1;
 int iVar2;
 int (*paiVar3) [5];
 int iVar4;
 int (*paiVar5) [10];
 int (*paiVar6) [5];
 int *piVar7;
 int *piVar8;
 int iVar9;
 int **ppiVar10;
 int in_GS_OFFSET;
 byte bVar11;
 int a;
 int b;
 int c;
 int vla_arr [3];
 int arr1 [5];
 int *ptr_arr [10];
 int flat [20];
 int arr2 [5] [10];
 int matrix [10] [10];
 int cube [5] [5] [5];
 undefined1 local_28 [2];
 char str [6];
 
 bVar11 = 0;
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013173);
 piVar7 = &DAT_0001360c;
 piVar8 = arr1;
 for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
 *piVar8 = *piVar7;
 piVar7 = piVar7 + (unsigned int)bVar11 * -2 + 1;
 piVar8 = piVar8 + (unsigned int)bVar11 * -2 + 1;
 }
 iVar4 = array_1d_stack(arr1,5);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",iVar4);
 strncpy(str,"hello",6);
 iVar4 = array_string(str);
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",iVar4);
 /* Unresolved local var: int i@[???] */
 iVar4 = 0;
 paiVar5 = matrix;
 do {
 /* Unresolved local var: int j@[???] */
 iVar2 = 0;
 do {
 iVar9 = 0;
 if (iVar2 == iVar4) {
 iVar9 = iVar2;
 }
 (*paiVar5)[iVar2] = iVar9;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 10);
 iVar4 = iVar4 + 1;
 paiVar5 = paiVar5 + 1;
 } while (iVar4 != 10);
 iVar4 = array_2d_stack(matrix);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",iVar4);
 /* Unresolved local var: int i@[???] */
 paiVar6 = cube[0];
 do {
 /* Unresolved local var: int j@[???] */
 iVar4 = 0;
 paiVar3 = paiVar6;
 do {
 /* Unresolved local var: int k@[???] */
 iVar4 = iVar4 + 1;
 (*(int (*) [5])*paiVar3)[0] = 1;
 (*paiVar3)[1] = 1;
 (*paiVar3)[2] = 1;
 (*paiVar3)[3] = 1;
 (*paiVar3)[4] = 1;
 paiVar3 = paiVar3 + 1;
 } while (iVar4 != 5);
 paiVar6 = paiVar6 + 5;
 } while ((int (*) [5])local_28 != paiVar6);
 iVar4 = array_3d((int (*) [5] [5])cube[0]);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",iVar4);
 vla_arr[0] = 10;
 vla_arr[1] = 0x14;
 vla_arr[2] = 0x1e;
 iVar4 = array_vla(3,vla_arr);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",iVar4);
 /* Unresolved local var: int i@[???] */
 arr2[0][0] = 0;
 arr2[1][0] = 10;
 arr2[2][0] = 0x14;
 arr2[3][0] = 0x1e;
 arr2[4][0] = 0x28;
 iVar4 = array_pointer(arr2,5);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",iVar4);
 a = 10;
 ppiVar10 = ptr_arr + 3;
 for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
 *ppiVar10 = (int *)0x0;
 ppiVar10 = ppiVar10 + (unsigned int)bVar11 * -2 + 1;
 }
 ptr_arr[0] = &a;
 b = 0x14;
 ptr_arr[1] = &b;
 ptr_arr[2] = &c;
 c = 0x1e;
 iVar4 = pointer_array(ptr_arr,3);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",iVar4);
 /* Unresolved local var: int i@[???] */
 iVar4 = 0;
 do {
 flat[iVar4] = iVar4;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x14);
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",flat[0x11],0x14);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
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

/* WARNING: Unknown calling convention */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 000118d3 */

/* WARNING: Unknown calling convention */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 000118e6 */

int ptr_increment(int *p,int n)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + p[iVar1];
 }
 return iVar2;
}



/* Function: ptr_offset @ 00011903 */

/* WARNING: Unknown calling convention */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 00011915 */

/* WARNING: Unknown calling convention */

int ptr_diff(int *p1,int *p2)

{
 return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 00011927 */

int ptr_void(void *p,int type)

{
 int iVar1;
 
 if (type == 0) {
 iVar1 = *(int *)p;
 }
 else {
 iVar1 = -1;
 if (type == 1) {
 iVar1 = (int)*(char *)p;
 }
 }
 return iVar1;
}



/* Function: ptr_const @ 00011947 */

/* WARNING: Unknown calling convention */

int ptr_const(int *p)

{
 return *p * 2;
}



/* Function: ptr_const_ptr @ 00011957 */

/* WARNING: Unknown calling convention */

int ptr_const_ptr(int *p)

{
 int iVar1;
 
 iVar1 = *p;
 *p = iVar1 + 5;
 return iVar1 + 5;
}



/* Function: ptr_func_simple @ 0001196a */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x0001197b. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 0001197d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 char *args [2];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 args[1] = (char *)0x0;
 args[0] = "test";
 iVar2 = (*f)(p,args);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: ptr_cast @ 000119ca */

/* WARNING: Unknown calling convention */

int ptr_cast(void *p)

{
 return *(int *)p;
}



/* Function: opaque_handle_create @ 000119d8 */

/* WARNING: Unknown calling convention */

void * opaque_handle_create(int size)

{
 return (void *)size;
}



/* Function: opaque_handle_op @ 000119e4 */

/* WARNING: Unknown calling convention */

int opaque_handle_op(void *handle)

{
 return (int)handle * 2;
}



/* Function: test_pointer_types @ 000119f2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int in_GS_OFFSET;
 byte bVar5;
 int val3;
 int *ptr3;
 int **pptr3;
 int val11;
 int arr4 [5];
 
 bVar5 = 0;
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013289);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 ptr3 = &val3;
 val3 = 5;
 pptr3 = &ptr3;
 iVar2 = ptr_triple(&pptr3);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",iVar2);
 piVar3 = &DAT_0001360c;
 piVar4 = arr4;
 for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + (unsigned int)bVar5 * -2 + 1;
 piVar4 = piVar4 + (unsigned int)bVar5 * -2 + 1;
 }
 iVar2 = ptr_increment(arr4,5);
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",iVar2);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 iVar2 = ptr_func_simple(double_value,5);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",iVar2);
 val11 = 5;
 iVar2 = ptr_func_complex(complex_callback,&val11);
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",iVar2);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: struct_simple @ 00011ba4 */

/* WARNING: Unknown calling convention */

int struct_simple(Point3D *p)

{
 return p->y + p->x + p->z;
}



/* Function: struct_array @ 00011bb8 */

/* WARNING: Unknown calling convention */

int struct_array(Point3D *pts,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + pts->y + pts->x + pts->z;
 pts = pts + 1;
 }
 return iVar1;
}



/* Function: struct_nested @ 00011be1 */

/* WARNING: Unknown calling convention */

int struct_nested(Rect *r)

{
 return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 00011bf2 */

/* WARNING: Unknown calling convention */

int struct_deep(Widget *w)

{
 return (w->style).fill.r + (w->bounds).position.x;
}



/* Function: struct_with_ptr @ 00011c04 */

/* WARNING: Unknown calling convention */

int struct_with_ptr(Node *node)

{
 int iVar1;
 
 iVar1 = 0;
 if (node->next != (Node *)0x0) {
 iVar1 = node->next->data;
 }
 return node->data + iVar1;
}



/* Function: struct_bitfields @ 00011c1f */

/* WARNING: Unknown calling convention */

int struct_bitfields(Flags *f)

{
 byte bVar1;
 
 bVar1 = *(byte *)f;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*(uint *)f >> 6 & 0x3ff);
}



/* Function: union_type @ 00011c50 */

int union_type(UnionData *u,int type)

{
 int iVar1;
 
 if (type == 0) {
 iVar1 = u->i;
 }
 else if (type == 1) {
 iVar1 = (int)ROUND(u->f);
 }
 else {
 iVar1 = (int)u->bytes[0];
 }
 return iVar1;
}



/* Function: union_array @ 00011c8e */

int union_array(UnionData *arr,int n)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + arr[iVar1].i;
 }
 return iVar2;
}



/* Function: enum_type @ 00011cab */

/* WARNING: Unknown calling convention */

int enum_type(State s)

{
 return s * 10;
}



/* Function: enum_switch @ 00011cb8 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* WARNING: Unknown calling convention */

int enum_switch(State s)

{
 int iVar1;
 
 iVar1 = -99;
 if (s < 4) {
 iVar1 = (int)*(char *)((int)&CSWTCH_78 + s);
 }
 return iVar1;
}



/* Function: struct_func_ptr @ 00011ce1 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00011cf4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00011cf6 */

/* WARNING: Unknown calling convention */

int linked_list(Node *head)

{
 int iVar1;
 
 iVar1 = 0;
 for (; head != (Node *)0x0; head = head->next) {
 iVar1 = iVar1 + head->data;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 00011d11 */

/* WARNING: Unknown calling convention */

int doubly_linked_list(DNode *head)

{
 int iVar1;
 
 iVar1 = 0;
 for (; head != (DNode *)0x0; head = head->next) {
 iVar1 = iVar1 + head->data;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 00011d2c */

/* WARNING: Unknown calling convention */

int binary_tree_sum(TreeNode *root)

{
 int iVar1;
 int iVar2;
 
 iVar2 = 0;
 for (; root != (TreeNode *)0x0; root = root->right) {
 iVar1 = binary_tree_sum(root->left);
 iVar2 = iVar2 + iVar1 + root->data;
 }
 return iVar2;
}



/* Function: binary_tree @ 00011d5e */

/* WARNING: Unknown calling convention */

int binary_tree(TreeNode *root)

{
 int iVar1;
 
 iVar1 = binary_tree_sum(root);
 return iVar1;
}



/* Function: graph_traverse @ 00011d64 */

int graph_traverse(Graph *g)

{
 int iVar1;
 int iVar2;
 Edge *pEVar3;
 
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar1 = 0; iVar1 < g->numVertices; iVar1 = iVar1 + 1) {
 /* Unresolved local var: Edge * edge@[???] */
 for (pEVar3 = g->adjList[iVar1]; pEVar3 != (Edge *)0x0; pEVar3 = pEVar3->next) {
 iVar2 = iVar2 + pEVar3->dest;
 }
 }
 return iVar2;
}



/* Function: test_composite_types @ 00011d92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 UnionData *pUVar4;
 Point3D *pPVar5;
 UnionData *pUVar6;
 Edge **ppEVar7;
 int in_GS_OFFSET;
 byte bVar8;
 Node node2;
 Node node1;
 Flags f;
 Device dev;
 Edge e1;
 TreeNode tree;
 UnionData arr_u [3];
 Point3D pts [2];
 Node list [3];
 DNode dlist [2];
 Graph g;
 
 bVar8 = 0;
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013422);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
 piVar3 = &DAT_00013620;
 pPVar5 = pts;
 for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
 pPVar5->x = *piVar3;
 piVar3 = piVar3 + (unsigned int)bVar8 * -2 + 1;
 pPVar5 = (Point3D *)((int)pPVar5 + (unsigned int)bVar8 * -8 + 4);
 }
 iVar2 = struct_array(pts,2);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",iVar2);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 node1.next = &node2;
 node2.data = 0x14;
 node2.next = (Node *)0x0;
 node1.data = 10;
 iVar2 = struct_with_ptr(&node1);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",iVar2);
 f._4_4_ = f._4_4_ & 0xfff00000;
 f._0_2_ = 0x191d;
 iVar2 = struct_bitfields(&f);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",iVar2);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 pUVar4 = (UnionData *)&DAT_00013638;
 pUVar6 = arr_u;
 for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
 *pUVar6 = *pUVar4;
 pUVar4 = pUVar4 + (unsigned int)bVar8 * -2 + 1;
 pUVar6 = pUVar6 + (unsigned int)bVar8 * -2 + 1;
 }
 iVar2 = union_array(arr_u,3);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",iVar2);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 dev.data = 10;
 dev.process = process_int;
 iVar2 = struct_func_ptr(&dev);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",iVar2);
 list[0].next = list + 1;
 list[0].data = 10;
 list[1].next = list + 2;
 list[1].data = 0x14;
 list[2].data = 0x1e;
 list[2].next = (Node *)0x0;
 iVar2 = linked_list(list);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar2);
 dlist[0].next = dlist + 1;
 dlist[1].prev = dlist;
 dlist[0].data = 10;
 dlist[0].prev = (DNode *)0x0;
 dlist[1].data = 0x14;
 dlist[1].next = (DNode *)0x0;
 iVar2 = doubly_linked_list(dlist[1].prev);
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar2);
 tree.data = 100;
 tree.left = (TreeNode *)0x0;
 tree.right = (TreeNode *)0x0;
 iVar2 = binary_tree_sum(&tree);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",iVar2);
 e1.dest = 1;
 e1.next = (Edge *)0x0;
 ppEVar7 = g.adjList + 1;
 for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
 *ppEVar7 = (Edge *)0x0;
 ppEVar7 = ppEVar7 + (unsigned int)bVar8 * -2 + 1;
 }
 g.adjList[0] = &e1;
 g.numVertices = 2;
 iVar2 = graph_traverse(&g);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",iVar2);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: __x86.get_pc_thunk.ax @ 00012091 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
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




/* Total functions decompiled: 72 */
