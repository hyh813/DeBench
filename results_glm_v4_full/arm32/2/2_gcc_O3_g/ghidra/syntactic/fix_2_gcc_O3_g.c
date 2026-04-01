/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/2/2_gcc_O3_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */


/* Type Definitions */
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned long long ulonglong;
typedef unsigned char byte;
typedef unsigned short ushort;
typedef long long longlong;
typedef _Bool bool;

/* Boolean constants */
#define false 0
#define true 1

/* Compiler intrinsics/macros for floating point operations */
#define CARRY4(a, b) (((uint)(a) + (uint)(b)) < (uint)(a))
#define SBORROW4(a, b) ((int)(a) < (int)(b))
#define SCARRY4(a, b) ((int)(a) >= 0 && (int)(b) >= 0 && (int)((int)(a) + (int)(b)) < 0)
#define SUB41(a, b) ((int)(a) < (int)(b))
#define SUB84(d, n) ((n) == 0 ? (uint)(d) : (uint)((ulonglong)(d) >> 32))
#define CONCAT44(hi, lo) (((ulonglong)(hi) << 32) | (uint)(lo))

/* Count leading zeros intrinsic */
static inline uint LZCOUNT(uint x) {
    if (x == 0) return 32;
    uint n = 0;
    if ((x & 0xFFFF0000) == 0) { n += 16; x <<= 16; }
    if ((x & 0xFF000000) == 0) { n += 8; x <<= 8; }
    if ((x & 0xF0000000) == 0) { n += 4; x <<= 4; }
    if ((x & 0xC0000000) == 0) { n += 2; x <<= 2; }
    if ((x & 0x80000000) == 0) { n += 1; }
    return n;
}

/* Data Constants (from decompiled binary) */
static const char DAT_00012344[] = "=== Testing Data Types (Level 1) ===";
static const char DAT_000124c4[] = "=== Testing Array Types ===";
static const char DAT_000125f0[] = "=== Testing Pointer Types ===";
static const char DAT_00012798[] = "=== Testing Composite Types ===";

/* Switch Table */
static const int CSWTCH_73[] = {0, 10, 20, 30};

/* Struct Definitions */
typedef struct Node Node;
struct Node {
    int data;
    struct Node *next;
};

typedef struct DNode DNode;
struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prev;
};

typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct {
    int width;
    int height;
} Size2D;

typedef struct {
    Point3D position;
    Size2D size;
} Rect;

typedef struct {
    uint r;
    uint g;
    uint b;
} Color;

typedef struct {
    Color fill;
    Color stroke;
} Style;

typedef struct {
    Point3D position;
} Bounds;

typedef struct {
    Bounds bounds;
    Style style;
} Widget;

typedef struct {
    int data;
    int device_id;
} DeviceData;

typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);

typedef struct {
    _func_int_int process;
    void *data;
} Device;

typedef enum {
    STATE_IDLE = 0,
    STATE_RUNNING = 1,
    STATE_PAUSED = 2,
    STATE_STOPPED = 3
} State;

typedef struct {
    unsigned int flag1 : 1;
    unsigned int flag2 : 2;
    unsigned int flag3 : 3;
    unsigned int reserved : 26;
} Flags;

typedef union {
    int i;
    float f;
    char bytes[4];
} UnionData;

typedef struct TreeNode TreeNode;
struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

typedef struct {
    int to;
    int weight;
    struct Edge *next;
} Edge;

typedef struct {
    int numVertices;
    Edge **edges;
} Graph;


/* Forward declarations for compiler functions */
ulonglong __muldf3(undefined4 param_1, uint param_2, uint param_3, uint param_4);
ulonglong FUN_00011a18(int param_1, uint param_2, int param_3, uint param_4);
uint __mulsf3(uint param_1, uint param_2, undefined4 param_3, uint param_4);
uint __addsf3(uint param_1, uint param_2, undefined4 param_3, uint param_4);
uint __fixsfsi(uint param_1);


/* Function: main @ 000103fc */

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





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: process_char @ 00010510 */

char process_char(char c)

{
 if ((int)c - 0x41U < 0x1a) {
 c = c + ' ';
 }
 return c;
}



/* Function: process_short @ 00010524 */

short process_short(short a,short b)

{
 return a + b;
}



/* Function: process_int @ 00010534 */

int process_int(int x)

{
 return x * 2 + 1;
}



/* Function: process_long @ 00010540 */

long process_long(long x)

{
 return x << 1;
}



/* Function: process_ll @ 00010548 */

longlong process_ll(longlong x)

{
 longlong lVar1;
 
 lVar1 = (x & 0xffffffffU) * (x & 0xffffffffU);
 return CONCAT44((int)((ulonglong)lVar1 >> 0x20) + (int)x * (int)((ulonglong)x >> 0x20) * 2,
 (int)lVar1);
}



/* Function: process_float @ 0001055c */

float process_float(float f)

{
 undefined4 in_r0;
 undefined4 uVar1;
 float fVar2;
 
 uVar1 = __mulsf3(in_r0,0x3fc00000,0,0);
 fVar2 = (float)__addsf3(uVar1,0x3f000000,0,0);
 return fVar2;
}



/* Function: process_double @ 00010574 */

double process_double(double d)

{
 undefined4 in_r0;
 undefined4 in_r1;
 undefined4 uVar1;
 undefined4 extraout_s1;
 undefined8 uVar2;
 
 uVar2 = __muldf3(SUB84(d,0),in_r0,in_r1,0x3fe00000);
 uVar1 = __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x9999999a,0x3fb99999);
 return (double)CONCAT44(extraout_s1,uVar1);
}



/* Function: process_ld @ 000105a0 */

long double process_ld(long double d)

{
 undefined4 uVar1;
 undefined4 extraout_s1;
 undefined8 uVar2;
 
 uVar2 = __muldf3(SUB84(d,0),0,0,0);
 uVar1 = __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x3ff00000);
 return (long double)CONCAT44(extraout_s1,uVar1);
}



/* Function: process_bool @ 000105c4 */

_Bool process_bool(int x)

{
 _Bool _Var1;
 
 if (x < 1) {
 _Var1 = false;
 }
 else {
 _Var1 = (_Bool)((byte)x & 1 ^ 1);
 }
 return _Var1;
}



/* Function: const_param @ 000105d8 */

int const_param(int *p)

{
 return *p + 10;
}



/* Function: volatile_access @ 000105e4 */

int volatile_access(int *p)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return *p + *p;
}



/* Function: test_data_types_l1 @ 000105f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 int vol_value;
 
 /* Unresolved local var: int value@[???] */
 puts(&DAT_00012344);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
 __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
 __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
 __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
 __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
 __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000,0);
 __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
 __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
 __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",0,0x40240000);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n");
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
 __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 00010758 */

int array_1d_stack(int *arr,int n)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 iVar1 = 0;
 if (n < 1) {
 return 0;
 }
 piVar3 = arr + -1;
 piVar2 = piVar3 + n;
 do {
 piVar3 = piVar3 + 1;
 iVar1 = iVar1 + *piVar3;
 } while (piVar2 != piVar3);
 return iVar1;
}



/* Function: array_string @ 00010784 */

int array_string(char *str)

{
 char *pcVar1;
 int iVar2;
 
 /* Unresolved local var: int len@[???] */
 if (*str == '\0') {
 return 0;
 }
 iVar2 = 1 - (int)str;
 do {
 pcVar1 = str + iVar2;
 str = str + 1;
 } while (*str != '\0');
 return (int)pcVar1;
}



/* Function: array_2d_stack @ 000107ac */

int array_2d_stack(int (*arr) [10])

{
 /* Unresolved local var: int sum@[DW_OP_breg0(r0): 0]
 Unresolved local var: int i@[???] */
 return (*arr)[0] + arr[1][1] + arr[2][2] + arr[3][3] + arr[4][4] + arr[5][5] + arr[6][6] +
 arr[7][7] + arr[8][8] + arr[9][9];
}



/* Function: array_3d @ 000107fc */

int array_3d(int (*arr) [5] [5])

{
 /* Unresolved local var: int sum@[DW_OP_breg0(r0): 0]
 Unresolved local var: int i@[???]
 Unresolved local var: int j@[???]
 Unresolved local var: int k@[???] */
 return (*arr)[0][1] + (*arr)[0][0] + (*arr)[0][2] + (*arr)[0][3] + (*arr)[0][4] + (*arr)[1][0] +
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



/* Function: array_vla @ 00010be4 */

int array_vla(int n,int *arr)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 iVar1 = 0;
 if (n < 1) {
 return 0;
 }
 piVar2 = arr + -1;
 piVar3 = piVar2 + n;
 do {
 piVar2 = piVar2 + 1;
 iVar1 = iVar1 + *piVar2;
 } while (piVar3 != piVar2);
 return iVar1;
}



/* Function: array_pointer @ 00010c0c */

int array_pointer(int (*arr) [10],int n)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar3 = 0;
 iVar2 = 0;
 do {
 piVar1 = *arr + iVar3;
 iVar3 = iVar3 + 10;
 iVar2 = iVar2 + *piVar1;
 } while (n * 10 - iVar3 != 0);
 return iVar2;
 }
 return 0;
}



/* Function: pointer_array @ 00010c48 */

int pointer_array(int **arr,int n)

{
 int iVar1;
 
 /* Unresolved local vars */

 if (n < 1) {
 return 0;
 }
 iVar1 = 0;
 if (*arr != (int *)0x0) {
 iVar1 = **arr;
 }
 if (n < 2) {
 return iVar1;
 }
 if (arr[1] != (int *)0x0) {
 iVar1 = iVar1 + *arr[1];
 }
 if (n == 2) {
 return iVar1;
 }
 if (arr[2] != (int *)0x0) {
 iVar1 = iVar1 + *arr[2];
 }
 if (n == 3) {
 return iVar1;
 }
 if (arr[3] != (int *)0x0) {
 iVar1 = iVar1 + *arr[3];
 }
 if (n == 4) {
 return iVar1;
 }
 if (arr[4] != (int *)0x0) {
 iVar1 = iVar1 + *arr[4];
 }
 if (n == 5) {
 return iVar1;
 }
 if (arr[5] != (int *)0x0) {
 iVar1 = iVar1 + *arr[5];
 }
 if (n == 6) {
 return iVar1;
 }
 if (arr[6] != (int *)0x0) {
 iVar1 = iVar1 + *arr[6];
 }
 if (n == 7) {
 return iVar1;
 }
 if (arr[7] != (int *)0x0) {
 iVar1 = iVar1 + *arr[7];
 }
 if (n != 8) {
 if (arr[8] != (int *)0x0) {
 iVar1 = iVar1 + *arr[8];
 }
 if (9 < n) {
 if (arr[9] != (int *)0x0) {
 iVar1 = iVar1 + *arr[9];
 }
 return iVar1;
 }
 return iVar1;
 }
 return iVar1;
}



/* Function: array_complex_index @ 00010d44 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 if ((x < w && -1 < (x | y)) && (y < h)) {
 return arr[y * w + x];
 }
 return -1;
}



/* Function: array_oob @ 00010d80 */

int array_oob(int *arr,int n)

{
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 iVar1 = 0;
 if (n < 0) {
 return 0;
 }
 piVar2 = arr + -1;
 do {
 piVar2 = piVar2 + 1;
 iVar1 = iVar1 + *piVar2;
 } while (arr + n != piVar2);
 return iVar1;
}



/* Function: test_array_types @ 00010dac */

/* WARNING: Removing unreachable block (ram,0x00010ea8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 int iVar1;
 int *piVar2;
 char *pcVar3;
 int iStack_68;
 int flat [20];
 char str [6];
 
 /* Unresolved local var: int[5] arr1@[???]
 Unresolved local var: int[10][10] matrix@[???]
 Unresolved local var: int[5][5][5] cube@[???]
 Unresolved local var: int[3] vla_arr@[???]
 Unresolved local var: int[5][10] arr2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int c@[???]
 Unresolved local var: int *[10] ptr_arr@[???] */
 piVar2 = &iStack_68;
 puts(&DAT_000124c4);
 __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
 /* Unresolved local var: int len@[???] */
 iVar1 = 0;
 pcVar3 = str;
 str[0] = 'h';
 str[1] = 'e';
 str[2] = 'l';
 str[3] = 'l';
 str[4] = 'o';
 str[5] = '\0';
 do {
 pcVar3 = pcVar3 + 1;
 iVar1 = iVar1 + 1;
 } while (*pcVar3 != '\0');
 __printf_chk(1,"ARR-L1-02 (array_string): %d\n",iVar1);
 __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",0x2d);
 __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",0x7d);
 __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
 __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",100);
 __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
 iVar1 = 0;
 /* Unresolved local var: int i@[???] */
 do {
 piVar2 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x14);
 __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",flat[0x11]);
 return;
}



/* Function: ptr_single @ 00010ed8 */

int ptr_single(int *param_1)

{
 return *param_1 + 10;
}



/* Function: ptr_double @ 00010ee4 */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 00010ef4 */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 00010f08 */

int ptr_increment(int *p,int n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + *p;
 p = p + 1;
 } while (n != iVar2);
 return iVar1;
 }
 return 0;
}



/* Function: ptr_offset @ 00010f3c */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 00010f44 */

int ptr_diff(int *p1,int *p2)

{
 return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 00010f50 */

int ptr_void(void *p,int type)

{
 uint uVar1;
 
 if (type == 0) {
 return *(int *)p;
 }
 if (type == 1) {
 uVar1 = (uint)*(byte *)p;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}



/* Function: ptr_const @ 00010f70 */

int ptr_const(int *p)

{
 return *p << 1;
}



/* Function: ptr_const_ptr @ 00010f7c */

int ptr_const_ptr(int *p)

{
 int iVar1;
 
 iVar1 = *p;
 *p = iVar1 + 5;
 return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00010f90 */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010f98. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 00010f9c */

/* WARNING: Removing unreachable block (ram,0x00010ff8) */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
 int iVar1;
 char *args [2];
 
 args[1] = (char *)0x0;
 args[0] = "test";
 iVar1 = (*f)(p,args);
 return iVar1;
}



/* Function: ptr_cast @ 00011004 */

int ptr_cast(void *p)

{
 /* Unresolved local var: int * int_ptr@[DW_OP_reg0(r0)]
 Unresolved local var: char * char_ptr@[DW_OP_reg0(r0)]
 Unresolved local var: int * back_ptr@[DW_OP_reg0(r0)] */
 return *(int *)p;
}



/* Function: opaque_handle_create @ 0001100c */

void * opaque_handle_create(int size)

{
 return (void *)size;
}



/* Function: opaque_handle_op @ 00011010 */

int opaque_handle_op(void *handle)

{
 return (int)handle << 1;
}



/* Function: test_pointer_types @ 00011018 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 /* Unresolved local var: int val1@[???]
 Unresolved local var: int val2@[???]
 Unresolved local var: int * ptr2@[???]
 Unresolved local var: int * * pptr2@[???]
 Unresolved local var: int val3@[???]
 Unresolved local var: int * ptr3@[???]
 Unresolved local var: int * * pptr3@[???]
 Unresolved local var: int * * * ppptr3@[???]
 Unresolved local var: int[5] arr4@[???]
 Unresolved local var: int[5] arr5@[???]
 Unresolved local var: int[5] arr6@[???]
 Unresolved local var: int val7@[???]
 Unresolved local var: char c7@[???]
 Unresolved local var: int val8@[???]
 Unresolved local var: int val9@[???]
 Unresolved local var: int val11@[???]
 Unresolved local var: int val12@[???]
 Unresolved local var: void * handle@[???] */
 puts(&DAT_000125f0);
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
 __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n");
 __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
 __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
 return;
}



/* Function: struct_simple @ 00011148 */

int struct_simple(Point3D *p)

{
 return p->x + p->y + p->z;
}



/* Function: struct_array @ 00011160 */

int struct_array(Point3D *pts,int n)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 Point3D *pPVar4;
 int *piVar5;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar3 = 0;
 pPVar4 = pts + n;
 do {
 piVar1 = &pts->z;
 piVar2 = &pts->x;
 piVar5 = &pts->y;
 pts = pts + 1;
 iVar3 = iVar3 + *piVar2 + *piVar5 + *piVar1;
 } while (pPVar4 != pts);
 return iVar3;
 }
 return 0;
}



/* Function: struct_nested @ 000111a8 */

int struct_nested(Rect *r)

{
 return (r->position).x + (r->size).width;
}



/* Function: struct_deep @ 000111b8 */

int struct_deep(Widget *w)

{
 return (w->bounds).position.z + (w->style).fill.r;
}



/* Function: struct_with_ptr @ 000111c8 */

int struct_with_ptr(Node *node)

{
 int iVar1;
 
 iVar1 = node->data;
 if (node->next != (Node *)0x0) {
 iVar1 = iVar1 + node->next->data;
 }
 return iVar1;
}



/* Function: struct_bitfields @ 000111dc */

int struct_bitfields(Flags *f)

{
 uint uVar1;
 
 uVar1 = (uint)*(byte *)f;
 return (uVar1 & 1) + ((uVar1 << 0x1d) >> 0x1e) + ((uVar1 << 0x1a) >> 0x1d) +
 (uint)(*(ushort *)f >> 6);
}



/* Function: union_type @ 00011200 */

int union_type(UnionData *u,int type)

{
 int iVar1;
 
 if (type == 0) {
 return u->i;
 }
 if (type != 1) {
 return (uint)(byte)u->bytes[0];
 }
 iVar1 = __fixsfsi(u->i);
 return iVar1;
}



/* Function: union_array @ 00011230 */

int union_array(UnionData *arr,int n)

{
 int iVar1;
 UnionData *pUVar2;
 UnionData *pUVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 iVar1 = 0;
 if (n < 1) {
 return 0;
 }
 pUVar3 = arr + -1;
 pUVar2 = pUVar3 + n;
 do {
 pUVar3 = pUVar3 + 1;
 iVar1 = iVar1 + pUVar3->i;
 } while (pUVar2 != pUVar3);
 return iVar1;
}



/* Function: enum_type @ 0001125c */

int enum_type(State s)

{
 return s * 10;
}



/* Function: enum_switch @ 00011268 */

int enum_switch(State s)

{
 int iVar1;
 
 if (s < 4) {
 iVar1 = *(int *)(&CSWTCH_73 + s * 4);
 }
 else {
 iVar1 = -99;
 }
 return iVar1;
}



/* Function: struct_func_ptr @ 00011280 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00011284. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 00011288 */

int linked_list(Node *head)

{
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: Node * current@[DW_OP_reg0(r0)] */
 if (head != (Node *)0x0) {
 iVar2 = 0;
 do {
 piVar1 = &head->data;
 head = head->next;
 iVar2 = iVar2 + *piVar1;
 } while (head != (Node *)0x0);
 return iVar2;
 }
 return 0;
}



/* Function: doubly_linked_list @ 000112b0 */

int doubly_linked_list(DNode *head)

{
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: DNode * current@[DW_OP_reg0(r0)] */
 if (head != (DNode *)0x0) {
 iVar2 = 0;
 do {
 piVar1 = &head->data;
 head = head->next;
 iVar2 = iVar2 + *piVar1;
 } while (head != (DNode *)0x0);
 return iVar2;
 }
 return 0;
}



/* Function: binary_tree_sum @ 000112d8 */

int binary_tree_sum(TreeNode *root)

{
 int *piVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 TreeNode *pTVar6;
 int iVar7;
 int iVar8;
 TreeNode *pTVar9;
 TreeNode *pTVar10;
 TreeNode *pTVar11;
 TreeNode *pTVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int local_64;
 TreeNode *local_60;
 int local_5c;
 TreeNode *local_58;
 int local_54;
 int local_50;
 TreeNode *local_4c;
 int local_48;
 TreeNode *local_44;
 int local_40;
 int local_3c;
 int local_38;
 
 if (root == (TreeNode *)0x0) {
 local_64 = 0;
 }
 else {
 local_64 = 0;
 local_60 = root;
 do {
 local_58 = local_60->left;
 local_5c = local_60->data;
 if (local_58 != (TreeNode *)0x0) {
 local_50 = 0;
 do {
 local_4c = local_58->left;
 local_54 = local_58->data;
 if (local_4c != (TreeNode *)0x0) {
 local_48 = 0;
 do {
 local_44 = local_4c->left;
 local_38 = local_4c->data;
 if (local_44 != (TreeNode *)0x0) {
 local_40 = 0;
 do {
 pTVar6 = local_44->left;
 local_3c = local_44->data;
 if (pTVar6 != (TreeNode *)0x0) {
 iVar3 = 0;
 do {
 pTVar11 = pTVar6->left;
 iVar4 = pTVar6->data;
 if (pTVar11 != (TreeNode *)0x0) {
 iVar8 = 0;
 do {
 pTVar10 = pTVar11->left;
 iVar7 = pTVar11->data;
 if (pTVar10 != (TreeNode *)0x0) {
 iVar5 = 0;
 do {
 pTVar9 = pTVar10->left;
 iVar15 = pTVar10->data;
 if (pTVar9 != (TreeNode *)0x0) {
 iVar13 = 0;
 do {
 pTVar12 = pTVar9->left;
 iVar14 = pTVar9->data;
 if (pTVar12 != (TreeNode *)0x0) {
 iVar16 = 0;
 do {
 iVar2 = binary_tree_sum(pTVar12->left);
 piVar1 = &pTVar12->data;
 pTVar12 = pTVar12->right;
 iVar16 = iVar16 + iVar2 + *piVar1;
 } while (pTVar12 != (TreeNode *)0x0);
 iVar14 = iVar14 + iVar16;
 }
 pTVar9 = pTVar9->right;
 iVar13 = iVar13 + iVar14;
 } while (pTVar9 != (TreeNode *)0x0);
 iVar15 = iVar15 + iVar13;
 }
 pTVar10 = pTVar10->right;
 iVar5 = iVar5 + iVar15;
 } while (pTVar10 != (TreeNode *)0x0);
 iVar7 = iVar7 + iVar5;
 }
 pTVar11 = pTVar11->right;
 iVar8 = iVar8 + iVar7;
 } while (pTVar11 != (TreeNode *)0x0);
 iVar4 = iVar4 + iVar8;
 }
 pTVar6 = pTVar6->right;
 iVar3 = iVar3 + iVar4;
 } while (pTVar6 != (TreeNode *)0x0);
 local_3c = local_3c + iVar3;
 }
 local_44 = local_44->right;
 local_40 = local_40 + local_3c;
 } while (local_44 != (TreeNode *)0x0);
 local_38 = local_38 + local_40;
 }
 local_4c = local_4c->right;
 local_48 = local_48 + local_38;
 } while (local_4c != (TreeNode *)0x0);
 local_54 = local_54 + local_48;
 }
 local_58 = local_58->right;
 local_50 = local_50 + local_54;
 } while (local_58 != (TreeNode *)0x0);
 local_5c = local_5c + local_50;
 }
 local_60 = local_60->right;
 local_64 = local_64 + local_5c;
 } while (local_60 != (TreeNode *)0x0);
 }
 return local_64;
}



/* Function: binary_tree @ 0001159c */

int binary_tree(TreeNode *root)

{
 int *piVar1;
 int iVar2;
 TreeNode *pTVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 
 if (root == (TreeNode *)0x0) {
 iVar6 = 0;
 }
 else {
 iVar6 = 0;
 do {
 pTVar3 = root->left;
 iVar5 = root->data;
 if (pTVar3 != (TreeNode *)0x0) {
 iVar4 = 0;
 do {
 iVar2 = binary_tree_sum(pTVar3->left);
 piVar1 = &pTVar3->data;
 pTVar3 = pTVar3->right;
 iVar4 = iVar4 + iVar2 + *piVar1;
 } while (pTVar3 != (TreeNode *)0x0);
 iVar5 = iVar5 + iVar4;
 }
 root = root->right;
 iVar6 = iVar6 + iVar5;
 } while (root != (TreeNode *)0x0);
 }
 return iVar6;
}



/* Function: graph_traverse @ 00011600 */

int graph_traverse(Graph *g)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 iVar1 = 0;
 if (0 < g->numVertices) {
 piVar2 = &g[-1].numVertices;
 piVar4 = piVar2 + g->numVertices;
 do {
 piVar2 = piVar2 + 1;
 /* Unresolved local var: Edge * edge@[???] */
 for (piVar3 = (int *)*piVar2; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
 iVar1 = iVar1 + *piVar3;
 }
 } while (piVar2 != piVar4);
 return iVar1;
 }
 return 0;
}



/* Function: test_composite_types @ 00011644 */

/* WARNING: Removing unreachable block (ram,0x000117e8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 int *piVar1;
 int iVar2;
 DNode *pDVar3;
 Node list [3];
 DNode dlist [2];
 
 /* Unresolved local var: Point3D p1@[???]
 Unresolved local var: Point3D[2] pts@[???]
 Unresolved local var: Rect r@[???]
 Unresolved local var: Widget w@[???]
 Unresolved local var: Node node2@[???]
 Unresolved local var: Node node1@[???]
 Unresolved local var: Flags f@[???]
 Unresolved local var: UnionData u@[???]
 Unresolved local var: UnionData[3] arr_u@[???]
 Unresolved local var: Device dev@[???]
 Unresolved local var: TreeNode tree@[???]
 Unresolved local var: Edge e1@[???]
 Unresolved local var: Graph g@[???] */
 puts(&DAT_00012798);
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
 iVar2 = 10;
 list[0].next = list + 1;
 list[0].data = 10;
 list[1].next = list + 2;
 list[1].data = 0x14;
 list[2].data = 0x1e;
 list[2].next = (Node *)0x0;
 dlist[0].prev = (DNode *)list[0].next;
 do {
 piVar1 = &(dlist[0].prev)->data;
 /* Unresolved local var: int sum@[???]
 Unresolved local var: Node * current@[???] */
 dlist[0].prev = (dlist[0].prev)->next;
 iVar2 = iVar2 + *piVar1;
 } while (dlist[0].prev != (DNode *)0x0);
 __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar2);
 pDVar3 = dlist + 1;
 /* Unresolved local var: int sum@[???]
 Unresolved local var: DNode * current@[???] */
 dlist[0].next = pDVar3;
 iVar2 = 10;
 dlist[1].next = dlist[0].prev;
 dlist[1].prev = dlist;
 dlist[0].data = 10;
 dlist[1].data = 0x14;
 do {
 piVar1 = &pDVar3->data;
 pDVar3 = pDVar3->next;
 iVar2 = iVar2 + *piVar1;
 } while (pDVar3 != (DNode *)0x0);
 __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar2);
 __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",100);
 __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n");
 return;
}



/* Function: __muldf3 @ 00011838 */

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
 uVar14 = FUN_00011a18(0,0,0,0);
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



/* Function: FUN_00011a18 @ 00011a18 */

ulonglong FUN_00011a18(int param_1,uint param_2,int param_3,uint param_4)

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



/* Function: __mulsf3 @ 00011aa4 */

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
 goto LAB_00011c20;
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
LAB_00011c20:
 return uVar9 & 0x80000000 | 0x7f800000;
}



/* Function: __aeabi_drsub @ 00011c3c */

static void __aeabi_drsub(undefined4 param_1,uint param_2)

{
 __aeabi_dadd(param_1,param_2 ^ 0x80000000);
 return;
}



/* Function: __subdf3 @ 00011c44 */

static ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_00011eb8:
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
 if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011eb8;
 }
LAB_00011d60:
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
 if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_00011d60;
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
 goto LAB_00011de0;
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
LAB_00011de0:
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




/* CRT stub function __aeabi_dadd removed by preprocessor */




/* Function: __aeabi_ui2d @ 00011ef4 */

static ulonglong __aeabi_ui2d(uint param_1)

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
 goto LAB_00011de0;
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
LAB_00011de0:
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



/* Function: __floatsidf @ 00011f18 */

static ulonglong __floatsidf(uint param_1)

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
 goto LAB_00011de0;
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
LAB_00011de0:
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



/* Function: __extendsfdf2 @ 00011f40 */

static ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
 goto LAB_00011de0;
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
LAB_00011de0:
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



/* Function: __floatundidf @ 00011f88 */

static ulonglong __floatundidf(uint param_1,uint param_2)

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
LAB_00011d60:
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
 if (bVar12 && 0xfffff < param_2) goto LAB_00011d60;
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
 goto LAB_00011de0;
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
LAB_00011de0:
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



/* Function: __aeabi_l2d @ 00011f9c */

static ulonglong __aeabi_l2d(uint param_1,uint param_2)

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
LAB_00011d60:
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
 if (bVar13 && 0xfffff < uVar4) goto LAB_00011d60;
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
 goto LAB_00011de0;
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
LAB_00011de0:
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



/* Function: __aeabi_frsub @ 00011ffc */

void __aeabi_frsub(uint param_1)

{
 return;
}




/* CRT stub function __aeabi_fsub removed by preprocessor */




/* Function: __addsf3 @ 00012008 */

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
LAB_00012168:
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
 if (0xfd < uVar7) goto LAB_00012168;
 }
 }
 uVar4 = uVar4 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar6);
 if (uVar6 == 0x80000000) {
 uVar4 = uVar4 & 0xfffffffe;
 }
 return uVar4 | param_1;
}



/* Function: __aeabi_ui2f @ 00012198 */

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



/* Function: __floatsisf @ 000121a0 */

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



/* Function: __floatundisf @ 000121c0 */

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



/* Function: __aeabi_l2f @ 000121d0 */

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



/* Function: __fixsfsi @ 0001224c */

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




/* Total functions decompiled: 81 */
