/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/2/2_gcc_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Type definitions for composite types */
typedef struct Point3D {
    int x;
    int y;
    int z;
} Point3D;

typedef struct Size {
    int width;
    int height;
} Size;

typedef struct Position {
    int x;
    int y;
    int z;
} Position;

typedef struct Rect {
    Size size;
    Position position;
} Rect;

typedef struct Color {
    float r;
    float g;
    float b;
} Color;

typedef struct Style {
    Color fill;
} Style;

typedef struct Widget {
    Style style;
    Rect bounds;
} Widget;

typedef struct Flags {
    unsigned short flags;
} Flags;

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
    struct Edge **adjList;
} Graph;

typedef struct Device {
    int (*process)(int);
    int data;
} Device;

typedef union UnionData {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef enum State {
    STATE_A = 0,
    STATE_B = 1,
    STATE_C = 2,
    STATE_D = 3
} State;

typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);

typedef unsigned char byte;
typedef unsigned int undefined4;
typedef void (*code)(void);
typedef unsigned long long ulonglong;
typedef unsigned int uint;
typedef unsigned short ushort;

/* External data declarations */
extern char DAT_00013008[];
extern char DAT_000133bd[];
extern char DAT_00013430[];
extern char DAT_00013526[];
extern int CSWTCH_75[];

/* External data definitions */
char DAT_00013008[] = "Testing data types L1";
char DAT_000133bd[] = "Testing array types";
char DAT_00013430[] = "Testing pointer types";
char DAT_00013526[] = "Testing composite types";
int CSWTCH_75[] = {0, 10, 20, 50};

/* Boolean constants */
#define false 0
#define true 1

/* Math helper macros */
#define ROUND(x) ((int)((x) >= 0 ? (x) + 0.5 : (x) - 0.5))


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined4 *)0x0)();
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



/* Function: process_char @ 00011280 */

/* WARNING: Unknown calling convention */

char process_char(char c)

{
 if ((byte)(c + 0xbfU) < 0x1a) {
 c = c + ' ';
 }
 return c;
}



/* Function: process_short @ 000112a0 */

/* WARNING: Unknown calling convention */

short process_short(short a,short b)

{
 return b + a;
}



/* Function: process_int @ 000112b0 */

/* WARNING: Unknown calling convention */

int process_int(int x)

{
 return x * 2 + 1;
}



/* Function: process_long @ 000112c0 */

/* WARNING: Unknown calling convention */

long process_long(long x)

{
 return x * 2;
}



/* Function: process_ll @ 000112d0 */

/* WARNING: Unknown calling convention */

long long process_ll(long long x)

{
 long long lVar1;
 
 lVar1 = (x & 0xffffffffU) * (x & 0xffffffffU);
 return (long long)((int)((ulonglong)lVar1 >> 0x20) + (int)(x >> 32) * (int)x * 2) | ((unsigned int)lVar1 & 0xffffffffU);
}



/* Function: process_float @ 000112f0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

float process_float(float f)

{
 return f * 1.5 + 0.5;
}



/* Function: process_double @ 00011320 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

double process_double(double d)

{
 return (double)((float)d * 0.5 + 0.1);
}



/* Function: process_ld @ 00011350 */

/* WARNING: Unknown calling convention */

long double * process_ld(long double d)

{
 long double *in_EAX;
 
 return in_EAX;
}



/* Function: process_bool @ 00011360 */

/* WARNING: Unknown calling convention */

_Bool process_bool(int x)

{
 _Bool _Var1;
 
 _Var1 = (_Bool)(~(byte)x & 1);
 if (x < 1) {
 _Var1 = false;
 }
 return _Var1;
}



/* Function: const_param @ 00011380 */

/* WARNING: Unknown calling convention */

int const_param(int *p)

{
 return *p + 10;
}



/* Function: volatile_access @ 00011390 */

/* WARNING: Unknown calling convention */

int volatile_access(int *p)

{
 return *p + *p;
}



/* Function: test_data_types_l1 @ 000113a0 */

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



/* Function: array_1d_stack @ 000114f0 */

int array_1d_stack(int *arr,int n)

{
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 piVar1 = arr + n;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *arr;
 arr = arr + 1;
 } while (piVar1 != arr);
 return iVar2;
 }
 return 0;
}



/* Function: builtin_strncpy */

char * builtin_strncpy(char *dest, const char *src, int n)

{
 int i;
 
 for (i = 0; i < n && src[i] != '\0'; i++) {
 dest[i] = src[i];
 }
 for (; i < n; i++) {
 dest[i] = '\0';
 }
 return dest;
}



/* Function: array_string @ 00011520 */

int array_string(char *str)

{
 int iVar1;
 
 iVar1 = 0;
 if (*str != '\0') {
 do {
 iVar1 = iVar1 + 1;
 } while (str[iVar1] != '\0');
 return iVar1;
 }
 return iVar1;
}



/* Function: array_2d_stack @ 00011550 */

/* WARNING: Unknown calling convention */

int array_2d_stack(int (*arr) [10])

{
 /* Unresolved local var: int i@[???] */
 return arr[1][1] + (*arr)[0] + arr[2][2] + arr[3][3] + arr[4][4] + arr[5][5] + arr[6][6] +
 arr[7][7] + arr[8][8] + arr[9][9];
}



/* Function: array_3d @ 00011590 */

/* WARNING: Unknown calling convention */

int array_3d(int (*arr) [5] [5])

{
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???]
 Unresolved local var: int k@[???] */
 return (*arr)[0][0] + (*arr)[0][1] + (*arr)[0][2] + (*arr)[0][3] + (*arr)[0][4] + (*arr)[1][0] +
 (*arr)[1][1] + (*arr)[1][2] + (*arr)[1][3] + (*arr)[1][4] + (*arr)[2][0] + (*arr)[2][1] +
 (*arr)[2][2] + (*arr)[2][3] + (*arr)[2][4] + (*arr)[3][0] + (*arr)[3][1] + (*arr)[3][2] +
 (*arr)[3][3] + (*arr)[3][4] + (*arr)[4][0] + (*arr)[4][1] + (*arr)[4][2] + (*arr)[4][3] +
 (*arr)[4][4] + arr[1][0][0] + arr[1][0][1] + arr[1][0][2] + arr[1][0][3] + arr[1][0][4] +
 arr[1][1][0] + arr[1][1][1] + arr[1][1][2] + arr[1][1][3] + arr[1][1][4] + arr[1][2][0] +
 arr[1][2][1] + arr[1][2][2] + arr[1][2][3] + arr[1][2][4] + arr[1][3][0] + arr[1][3][1] +
 arr[1][3][2] + arr[1][3][3] + arr[1][3][4] + arr[1][4][0] + arr[1][4][1] + arr[1][4][2] +
 arr[1][4][3] + arr[1][4][4] + arr[2][0][0] + arr[2][0][1] + arr[2][0][2] + arr[2][0][3] +
 arr[2][0][4] + arr[2][1][0] + arr[2][1][1] + arr[2][1][2] + arr[2][1][3] + arr[2][1][4] +
 arr[2][2][0] + arr[2][2][1] + arr[2][2][2] + arr[2][2][3] + arr[2][2][4] + arr[2][3][0] +
 arr[2][3][1] + arr[2][3][2] + arr[2][3][3] + arr[2][3][4] + arr[2][4][0] + arr[2][4][1] +
 arr[2][4][2] + arr[2][4][3] + arr[2][4][4] + arr[3][0][0] + arr[3][0][1] + arr[3][0][2] +
 arr[3][0][3] + arr[3][0][4] + arr[3][1][0] + arr[3][1][1] + arr[3][1][2] + arr[3][1][3] +
 arr[3][1][4] + arr[3][2][0] + arr[3][2][1] + arr[3][2][2] + arr[3][2][3] + arr[3][2][4] +
 arr[3][3][0] + arr[3][3][1] + arr[3][3][2] + arr[3][3][3] + arr[3][3][4] + arr[3][4][0] +
 arr[3][4][1] + arr[3][4][2] + arr[3][4][3] + arr[3][4][4] + arr[4][0][0] + arr[4][0][1] +
 arr[4][0][2] + arr[4][0][3] + arr[4][0][4] + arr[4][1][0] + arr[4][1][1] + arr[4][1][2] +
 arr[4][1][3] + arr[4][1][4] + arr[4][2][0] + arr[4][2][1] + arr[4][2][2] + arr[4][2][3] +
 arr[4][2][4] + arr[4][3][0] + arr[4][3][1] + arr[4][3][2] + arr[4][3][3] + arr[4][3][4] +
 arr[4][4][0] + arr[4][4][1] + arr[4][4][2] + arr[4][4][3] + arr[4][4][4];
}



/* Function: array_vla @ 00011830 */

int array_vla(int n,int *arr)

{
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 piVar1 = arr + n;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *arr;
 arr = arr + 1;
 } while (piVar1 != arr);
 return iVar2;
 }
 return 0;
}



/* Function: array_pointer @ 00011860 */

int array_pointer(int (*arr) [10],int n)

{
 int (*paiVar1) [10];
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 paiVar1 = arr + n;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + (*arr)[0];
 arr = arr + 1;
 } while (paiVar1 != arr);
 return iVar2;
 }
 return 0;
}



/* Function: pointer_array @ 000118a0 */

int pointer_array(int **arr,int n)

{
 int iVar1;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 if (*arr != (int *)0x0) {
 iVar1 = **arr;
 }
 if (1 < n) {
 if (arr[1] != (int *)0x0) {
 iVar1 = iVar1 + *arr[1];
 }
 if (n != 2) {
 if (arr[2] != (int *)0x0) {
 iVar1 = iVar1 + *arr[2];
 }
 if (n != 3) {
 if (arr[3] != (int *)0x0) {
 iVar1 = iVar1 + *arr[3];
 }
 if (n != 4) {
 if (arr[4] != (int *)0x0) {
 iVar1 = iVar1 + *arr[4];
 }
 if (n != 5) {
 if (arr[5] != (int *)0x0) {
 iVar1 = iVar1 + *arr[5];
 }
 if (n != 6) {
 if (arr[6] != (int *)0x0) {
 iVar1 = iVar1 + *arr[6];
 }
 if (n != 7) {
 if (arr[7] != (int *)0x0) {
 iVar1 = iVar1 + *arr[7];
 }
 if (n != 8) {
 if (arr[8] != (int *)0x0) {
 iVar1 = iVar1 + *arr[8];
 }
 if ((9 < n) && (arr[9] != (int *)0x0)) {
 iVar1 = iVar1 + *arr[9];
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



/* Function: array_complex_index @ 00011950 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 if (((-1 < (x | y)) && (x < w)) && (y < h)) {
 return arr[w * y + x];
 }
 return -1;
}



/* Function: array_oob @ 00011990 */

int array_oob(int *arr,int n)

{
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (-1 < n) {
 piVar1 = arr + n + 1;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *arr;
 arr = arr + 1;
 } while (piVar1 != arr);
 return iVar2;
 }
 return 0;
}



/* Function: test_array_types @ 000119d0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int in_GS_OFFSET;
 int flat [20];
 char str [6];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_000133bd);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
 builtin_strncpy(str,"hello",6);
 /* Unresolved local var: int len@[???] */
 iVar4 = 0;
 do {
 iVar3 = iVar4 + 1;
 iVar2 = iVar4 + 1;
 iVar4 = iVar3;
 } while (str[iVar2] != '\0');
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",iVar3);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",0x2d);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",0x7d);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",100);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
 /* Unresolved local var: int i@[???] */
 iVar4 = 0;
 do {
 flat[iVar4] = iVar4;
 iVar4 = iVar4 + 1;
 } while (iVar4 != 0x14);
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",flat[0x11]);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: ptr_single @ 00011b00 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00011b10 */

/* WARNING: Unknown calling convention */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 00011b20 */

/* WARNING: Unknown calling convention */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 00011b40 */

int ptr_increment(int *p,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + p[iVar1];
 iVar1 = iVar1 + 1;
 } while (n != iVar1);
 return iVar2;
 }
 return 0;
}



/* Function: ptr_offset @ 00011b80 */

/* WARNING: Unknown calling convention */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 00011b90 */

/* WARNING: Unknown calling convention */

int ptr_diff(int *p1,int *p2)

{
 return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 00011ba0 */

int ptr_void(void *p,int type)

{
 if (type == 0) {
 return *(int *)p;
 }
 if (type == 1) {
 return (int)*(char *)p;
 }
 return -1;
}



/* Function: ptr_const @ 00011be0 */

/* WARNING: Unknown calling convention */

int ptr_const(int *p)

{
 return *p * 2;
}



/* Function: ptr_const_ptr @ 00011bf0 */

/* WARNING: Unknown calling convention */

int ptr_const_ptr(int *p)

{
 int iVar1;
 
 iVar1 = *p;
 *p = iVar1 + 5;
 return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00011c00 */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00011c10. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 00011c20 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

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
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: ptr_cast @ 00011c80 */

/* WARNING: Unknown calling convention */

int ptr_cast(void *p)

{
 return *(int *)p;
}



/* Function: opaque_handle_create @ 00011c90 */

/* WARNING: Unknown calling convention */

void * opaque_handle_create(int size)

{
 return (void *)size;
}



/* Function: opaque_handle_op @ 00011ca0 */

/* WARNING: Unknown calling convention */

int opaque_handle_op(void *handle)

{
 return (int)handle * 2;
}



/* Function: test_pointer_types @ 00011cb0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 puts(&DAT_00013430);
 __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
 __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
 __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",6);
 __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",0xf);
 __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
 __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
 __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
 __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
 __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
 __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",10);
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",1);
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 return;
}



/* Function: struct_simple @ 00011de0 */

/* WARNING: Unknown calling convention */

int struct_simple(Point3D *p)

{
 return p->y + p->x + p->z;
}



/* Function: struct_array @ 00011e00 */

int struct_array(Point3D *pts,int n)

{
 Point3D *pPVar1;
 Point3D *pPVar2;
 int iVar3;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar3 = 0;
 pPVar1 = pts;
 do {
 pPVar2 = pPVar1 + 1;
 iVar3 = iVar3 + pPVar1->y + pPVar1->x + pPVar1->z;
 pPVar1 = pPVar2;
 } while (pts + n != pPVar2);
 return iVar3;
 }
 return 0;
}



/* Function: struct_nested @ 00011e50 */

/* WARNING: Unknown calling convention */

int struct_nested(Rect *r)

{
 return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 00011e60 */

/* WARNING: Unknown calling convention */

int struct_deep(Widget *w)

{
 return (w->style).fill.r + (w->bounds).position.z;
}



/* Function: struct_with_ptr @ 00011e70 */

/* WARNING: Unknown calling convention */

int struct_with_ptr(Node *node)

{
 int iVar1;
 
 iVar1 = node->data;
 if (node->next != (Node *)0x0) {
 iVar1 = iVar1 + node->next->data;
 }
 return iVar1;
}



/* Function: struct_bitfields @ 00011e90 */

/* WARNING: Unknown calling convention */

int struct_bitfields(Flags *f)

{
 byte bVar1;
 
 bVar1 = *(byte *)f;
 return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (uint)(*(ushort *)f >> 6);
}



/* Function: union_type @ 00011ec0 */

/* WARNING: Unknown calling convention */

int union_type(UnionData *u,int type)

{
 if (type == 0) {
 return u->i;
 }
 if (type != 1) {
 return (int)u->bytes[0];
 }
 return (int)ROUND(u->f);
}



/* Function: union_array @ 00011f20 */

int union_array(UnionData *arr,int n)

{
 UnionData *pUVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 pUVar1 = arr + n;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + arr->i;
 arr = arr + 1;
 } while (pUVar1 != arr);
 return iVar2;
 }
 return 0;
}



/* Function: enum_type @ 00011f50 */

/* WARNING: Unknown calling convention */

int enum_type(State s)

{
 return s * 10;
}



/* Function: enum_switch @ 00011f60 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* WARNING: Unknown calling convention */

int enum_switch(State s)

{
 int iVar1;
 
 iVar1 = -99;
 if (s < 4) {
 iVar1 = *(int *)(CSWTCH_75 + s * 4);
 }
 return iVar1;
}



/* Function: struct_func_ptr @ 00011f90 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00011f9e. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00011fb0 */

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



/* Function: doubly_linked_list @ 00011fd0 */

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



/* Function: binary_tree_sum @ 00011ff0 */

int binary_tree_sum(TreeNode *root)

{
 int *piVar1;
 int iVar2;
 TreeNode *pTVar3;
 int iVar4;
 int iVar5;
 TreeNode *pTVar6;
 TreeNode *pTVar7;
 TreeNode *pTVar8;
 int iVar9;
 TreeNode *pTVar10;
 int iVar11;
 int local_70;
 int local_6c;
 int local_68;
 int local_64;
 TreeNode *local_54;
 TreeNode *local_50;
 TreeNode *local_4c;
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
 for (; root != (TreeNode *)0x0; root = root->right) {
 local_3c = 0;
 local_44 = root->data;
 local_54 = root->left;
 if (local_54 != (TreeNode *)0x0) {
 do {
 local_38 = 0;
 local_40 = local_54->data;
 local_50 = local_54->left;
 if (local_50 != (TreeNode *)0x0) {
 do {
 local_34 = 0;
 local_2c = local_50->data;
 local_4c = local_50->left;
 if (local_4c != (TreeNode *)0x0) {
 do {
 local_68 = 0;
 local_30 = local_4c->data;
 pTVar6 = local_4c->left;
 if (pTVar6 != (TreeNode *)0x0) {
 do {
 pTVar3 = pTVar6->left;
 iVar5 = pTVar6->data;
 local_70 = 0;
 if (pTVar3 != (TreeNode *)0x0) {
 do {
 local_6c = pTVar3->data;
 pTVar7 = pTVar3->left;
 local_64 = 0;
 if (pTVar7 != (TreeNode *)0x0) {
 do {
 local_48 = pTVar7->data;
 pTVar8 = pTVar7->left;
 iVar9 = 0;
 if (pTVar8 != (TreeNode *)0x0) {
 do {
 pTVar10 = pTVar8->left;
 iVar11 = pTVar8->data;
 iVar4 = 0;
 if (pTVar10 != (TreeNode *)0x0) {
 do {
 iVar2 = binary_tree_sum(pTVar10->left);
 piVar1 = &pTVar10->data;
 pTVar10 = pTVar10->right;
 iVar4 = iVar4 + iVar2 + *piVar1;
 } while (pTVar10 != (TreeNode *)0x0);
 iVar11 = iVar11 + iVar4;
 }
 pTVar8 = pTVar8->right;
 iVar9 = iVar9 + iVar11;
 } while (pTVar8 != (TreeNode *)0x0);
 local_48 = local_48 + iVar9;
 }
 pTVar7 = pTVar7->right;
 local_64 = local_64 + local_48;
 } while (pTVar7 != (TreeNode *)0x0);
 local_6c = local_6c + local_64;
 }
 pTVar3 = pTVar3->right;
 local_70 = local_70 + local_6c;
 } while (pTVar3 != (TreeNode *)0x0);
 iVar5 = iVar5 + local_70;
 }
 pTVar6 = pTVar6->right;
 local_68 = local_68 + iVar5;
 } while (pTVar6 != (TreeNode *)0x0);
 local_30 = local_30 + local_68;
 }
 local_34 = local_34 + local_30;
 local_4c = local_4c->right;
 } while (local_4c != (TreeNode *)0x0);
 local_2c = local_2c + local_34;
 }
 local_38 = local_38 + local_2c;
 local_50 = local_50->right;
 } while (local_50 != (TreeNode *)0x0);
 local_40 = local_40 + local_38;
 }
 local_3c = local_3c + local_40;
 local_54 = local_54->right;
 } while (local_54 != (TreeNode *)0x0);
 local_44 = local_44 + local_3c;
 }
 local_28 = local_28 + local_44;
 }
 return local_28;
}



/* Function: binary_tree @ 00012220 */

/* WARNING: Unknown calling convention */

int binary_tree(TreeNode *root)

{
 int *piVar1;
 int iVar2;
 TreeNode *pTVar3;
 int iVar4;
 int iVar5;
 int local_20;
 
 local_20 = 0;
 for (; root != (TreeNode *)0x0; root = root->right) {
 pTVar3 = root->left;
 iVar5 = root->data;
 iVar4 = 0;
 if (pTVar3 != (TreeNode *)0x0) {
 do {
 iVar2 = binary_tree_sum(pTVar3->left);
 piVar1 = &pTVar3->data;
 pTVar3 = pTVar3->right;
 iVar4 = iVar4 + iVar2 + *piVar1;
 } while (pTVar3 != (TreeNode *)0x0);
 iVar5 = iVar5 + iVar4;
 }
 local_20 = local_20 + iVar5;
 }
 return local_20;
}



/* Function: graph_traverse @ 00012280 */

int graph_traverse(Graph *g)

{
 int *piVar1;
 Edge *pEVar2;
 Edge **ppEVar3;
 int iVar4;
 
 piVar1 = &g->numVertices;
 /* Unresolved local var: int i@[???] */
 if (*piVar1 < 1) {
 return 0;
 }
 ppEVar3 = g->adjList;
 iVar4 = 0;
 do {
 /* Unresolved local var: Edge * edge@[???] */
 for (pEVar2 = g->adjList[0]; pEVar2 != (Edge *)0x0; pEVar2 = pEVar2->next) {
 iVar4 = iVar4 + pEVar2->dest;
 }
 g = (Graph *)(g->adjList + 1);
 } while (g != (Graph *)(ppEVar3 + *piVar1));
 return iVar4;
}



/* Function: test_composite_types @ 000122c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 int iVar1;
 int *piVar2;
 Node *pNVar3;
 DNode *pDVar4;
 int iVar5;
 int in_GS_OFFSET;
 Node list [3];
 DNode dlist [2];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013526);
 __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
 __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",9);
 __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
 __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
 __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",0x1e);
 __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",0x6a);
 __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
 __printf_chk(1,"CMP-L2-08 (union_array): %d\n",0x3c);
 __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
 __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
 __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",0x15);
 list[0].next = list + 1;
 list[0].data = 10;
 list[1].next = list + 2;
 /* Unresolved local var: int sum@[???]
 Unresolved local var: Node * current@[???] */
 iVar5 = 10;
 list[1].data = 0x14;
 list[2].data = 0x1e;
 list[2].next = (Node *)0x0;
 pNVar3 = list[0].next;
 do {
 piVar2 = &pNVar3->data;
 pNVar3 = pNVar3->next;
 iVar5 = iVar5 + *piVar2;
 } while (pNVar3 != (Node *)0x0);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar5);
 pDVar4 = dlist + 1;
 dlist[0].data = 10;
 dlist[1].prev = dlist;
 /* Unresolved local var: int sum@[???]
 Unresolved local var: DNode * current@[???] */
 iVar5 = 10;
 dlist[0].next = pDVar4;
 dlist[0].prev = (DNode *)0x0;
 dlist[1].data = 0x14;
 dlist[1].next = (DNode *)0x0;
 do {
 iVar5 = iVar5 + pDVar4->data;
 pDVar4 = pDVar4->next;
 } while (pDVar4 != (DNode *)0x0);
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar5);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",100);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",1);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: __x86.get_pc_thunk.ax @ 000124b3 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 000124b7 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 000124c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
