/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/2/2_clang_O2_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

/* Type definitions for Ghidra types */
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef uint8_t undefined1;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned short ushort;

/* Struct definitions */
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
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Color;

typedef struct {
    Color fill;
    Color stroke;
} Style;

typedef struct {
    Position position;
    int z;
} Bounds;

typedef struct {
    Style style;
    Bounds bounds;
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

typedef union {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef struct {
    unsigned short flags;
} Flags;

typedef enum {
    STATE_A = 0,
    STATE_B = 1,
    STATE_C = 2,
    STATE_D = 3
} State;

typedef struct Edge {
    int dest;
    struct Edge *next;
} Edge;

typedef struct {
    int numVertices;
    Edge **adjList;
} Graph;

typedef int (*_func_int_int)(int);
typedef int (*_func_int_int_ptr_char_ptr_ptr)(int *, char **);

/* Union types for accessing parts of 128-bit values */
typedef union {
    unsigned long long _0_8_;
    unsigned long long _8_8_;
    unsigned int _0_4_[2];
    unsigned int _4_4_[2];
    unsigned int _8_4_[2];
    unsigned int _12_4_[2];
    unsigned char bytes[8];
} Union64;

typedef union {
    unsigned long long _0_8_;
    unsigned long long _8_8_;
    unsigned int _12_4_;
    unsigned int _8_4_;
    unsigned int _4_4_;
    unsigned int _0_4_;
    unsigned char bytes[16];
} Union128;

/* Function pointer type for Device */
typedef int (*ProcessFunc)(void *);

typedef struct {
    ProcessFunc process;
    void *data;
} Device;

/* External declarations */
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);
extern void * __dso_handle;
extern char completed_0;
extern undefined8 fpcr;
extern undefined8 fpsr;
extern undefined1 DAT_001031ef[];
extern undefined1 DAT_00103210[];
extern undefined1 DAT_0010322b[];
extern undefined1 DAT_00103246[];
extern undefined1 DAT_00102c50[];

/* Function prototypes */
int puts(const char *);
int printf(const char *, ...);
undefined1 (* __multf3(undefined1 param_1 [16],undefined1 param_2 [16]))[16];
undefined1 (* __addtf3(undefined1 param_1 [16],undefined1 param_2 [16]))[16];
ulong __sfp_handle_exceptions(ulong param_1);
ulong CARRY8(ulong a, ulong b);
ulong LZCOUNT(ulong x);

/* Global variables */
char completed_0 = '\0';


/* Function: FUN_00100620 @ 00100620 */

void FUN_00100620(void)

{
 ((void (*)(void))0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010077c @ 0010077c */

void FUN_0010077c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: process_char @ 001007d4 */

char process_char(char c)

{
 char cVar1;
 
 cVar1 = c + ' ';
 if (0x19 < (unsigned char)(c + 0xbfU)) {
 cVar1 = c;
 }
 return cVar1;
}



/* Function: process_short @ 001007ec */

short process_short(short a,short b)

{
 return b + a;
}



/* Function: process_int @ 001007f4 */

int process_int(int x)

{
 return x << 1 | 1;
}



/* Function: process_long @ 00100804 */

long process_long(long x)

{
 return x << 1;
}



/* Function: process_ll @ 0010080c */

long long process_ll(long long x)

{
 return x * x;
}



/* Function: process_float @ 00100814 */

float process_float(float f)

{
 return f * 1.5 + 0.5;
}



/* Function: process_double @ 00100824 */

double process_double(double d)

{
 return d * 0.5 + 0.1;
}



/* Function: process_ld @ 0010083c */

long double process_ld(long double d)

{
 /* Handle 80-bit extended precision long double */
 /* For simplicity, compute d*d using double approximation */
 double dval = (double)d;
 double result = dval * dval;
 return (long double)result;
}



/* Function: process_bool @ 0010085c */

_Bool process_bool(int x)

{
 return 0 < x && (x & 1U) == 0;
}



/* Function: const_param @ 00100874 */

int const_param(int *p)

{
 return *p + 10;
}



/* Function: volatile_access @ 00100880 */

int volatile_access(int *p)

{
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return *p + *p;
}



/* Function: test_data_types_l1 @ 00100890 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
 /* Unresolved local var: int vol_value@[???]
 Unresolved local var: int value@[???] */
 puts((const char *)&DAT_001031ef);
 printf("DT-L1-01 (process_char): %c\n",0x61);
 printf("DT-L1-01 (process_char): %c\n",0x62);
 printf("DT-L1-02 (process_short): %d\n",300);
 printf("DT-L1-03 (process_int): %d\n",0xb);
 printf("DT-L1-04 (process_long): %ld\n",200);
 printf("DT-L1-05 (process_ll): %lld\n",10000);
 printf("DT-L1-06 (process_float): %.2f\n",0x400c000000000000);
 printf("DT-L1-07 (process_double): %.2f\n",0x4000cccccccccccd);
 printf("DT-L1-08 (process_ld): %.2Lf\n",0);
 printf("DT-L1-09 (process_bool): %d\n",1);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-09 (process_bool): %d\n",0);
 printf("DT-L1-10 (const_param): %d\n",0xf);
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 printf("DT-L1-11 (volatile_access): %d\n",0x14);
 return;
}



/* Function: array_1d_stack @ 001009a4 */

int array_1d_stack(int *arr,int n)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 ulong uVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 undefined8 uVar17;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar5 = (ulong)(uint)n;
 if ((uint)n < 8) {
 uVar7 = 0;
 iVar9 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 piVar4 = arr + 4;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 uVar8 = uVar7;
 do {
 piVar1 = piVar4 + -4;
 piVar2 = piVar4 + -2;
 piVar3 = piVar4 + 2;
 uVar17 = *(undefined8 *)piVar4;
 piVar4 = piVar4 + 8;
 uVar8 = uVar8 - 8;
 iVar9 = (int)*(undefined8 *)piVar1 + iVar9;
 iVar10 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar10;
 iVar11 = (int)*(undefined8 *)piVar2 + iVar11;
 iVar12 = (int)((ulong)*(undefined8 *)piVar2 >> 0x20) + iVar12;
 iVar13 = (int)uVar17 + iVar13;
 iVar14 = (int)((ulong)uVar17 >> 0x20) + iVar14;
 iVar15 = (int)*(undefined8 *)piVar3 + iVar15;
 iVar16 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar16;
 } while (uVar8 != 0);
 iVar9 = iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12;
 if (uVar7 == uVar5) {
 return iVar9;
 }
 }
 lVar6 = uVar5 - uVar7;
 piVar4 = arr + uVar7;
 do {
 lVar6 = lVar6 + -1;
 iVar9 = *piVar4 + iVar9;
 piVar4 = piVar4 + 1;
 } while (lVar6 != 0);
 return iVar9;
}



/* Function: array_string @ 00100a2c */

int array_string(char *str)

{
 char cVar1;
 int iVar2;
 
 /* Unresolved local var: int len@[???] */
 iVar2 = -1;
 do {
 cVar1 = *str;
 iVar2 = iVar2 + 1;
 str = str + 1;
 } while (cVar1 != '\0');
 return iVar2;
}



/* Function: array_2d_stack @ 00100a44 */

int array_2d_stack(int (*arr) [10])

{
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 return arr[9][9] +
 arr[8][8] +
 arr[7][7] +
 arr[6][6] + arr[5][5] + arr[4][4] + arr[3][3] + arr[2][2] + arr[1][1] + (*arr)[0];
}



/* Function: array_3d @ 00100a94 */

int array_3d(int (*arr) [5] [5])

{
 undefined8 uVar1;
 undefined8 uVar2;
 undefined8 uVar3;
 undefined8 uVar4;
 undefined8 uVar5;
 undefined8 uVar6;
 undefined8 uVar7;
 undefined8 uVar8;
 undefined8 uVar9;
 undefined8 uVar10;
 undefined8 uVar11;
 undefined8 uVar12;
 undefined8 uVar13;
 undefined8 uVar14;
 undefined8 uVar15;
 undefined8 uVar16;
 undefined8 uVar17;
 undefined8 uVar18;
 undefined8 uVar19;
 undefined8 uVar20;
 undefined8 uVar21;
 undefined8 uVar22;
 undefined8 uVar23;
 undefined8 uVar24;
 undefined8 uVar25;
 undefined8 uVar26;
 undefined8 uVar27;
 undefined8 uVar28;
 undefined8 uVar29;
 undefined8 uVar30;
 undefined8 uVar31;
 undefined8 uVar32;
 undefined8 uVar33;
 undefined8 uVar34;
 undefined8 uVar35;
 undefined8 uVar36;
 undefined8 uVar37;
 undefined8 uVar38;
 undefined8 uVar39;
 undefined8 uVar40;
 undefined8 uVar41;
 undefined8 uVar42;
 undefined8 uVar43;
 undefined8 uVar44;
 undefined8 uVar45;
 undefined8 uVar46;
 undefined8 uVar47;
 undefined8 uVar48;
 undefined8 uVar49;
 undefined8 uVar50;
 undefined8 uVar51;
 undefined8 uVar52;
 undefined8 uVar53;
 undefined8 uVar54;
 undefined8 uVar55;
 undefined8 uVar56;
 undefined8 uVar57;
 undefined8 uVar58;
 undefined8 uVar59;
 undefined8 uVar60;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???]
 Unresolved local var: int j@[???]
 Unresolved local var: int k@[???] */
 uVar11 = *(undefined8 *)((*arr)[3] + 4);
 uVar9 = *(undefined8 *)((*arr)[3] + 2);
 uVar16 = *(undefined8 *)((*arr)[2] + 1);
 uVar13 = *(undefined8 *)((*arr)[1] + 4);
 uVar22 = *(undefined8 *)((*arr)[4] + 3);
 uVar19 = *(undefined8 *)((*arr)[4] + 1);
 uVar27 = *(undefined8 *)(*arr)[3];
 uVar25 = *(undefined8 *)((*arr)[2] + 3);
 uVar3 = *(undefined8 *)((*arr)[1] + 2);
 uVar1 = *(undefined8 *)(*arr)[1];
 uVar7 = *(undefined8 *)((*arr)[0] + 3);
 uVar5 = *(undefined8 *)((*arr)[0] + 1);
 uVar39 = *(undefined8 *)(arr[1][3] + 4);
 uVar37 = *(undefined8 *)(arr[1][3] + 2);
 uVar43 = *(undefined8 *)(arr[1][2] + 1);
 uVar41 = *(undefined8 *)(arr[1][1] + 4);
 uVar47 = *(undefined8 *)(arr[1][4] + 3);
 uVar45 = *(undefined8 *)(arr[1][4] + 1);
 uVar51 = *(undefined8 *)arr[1][3];
 uVar49 = *(undefined8 *)(arr[1][2] + 3);
 uVar30 = *(undefined8 *)(arr[1][1] + 2);
 uVar29 = *(undefined8 *)arr[1][1];
 uVar34 = *(undefined8 *)(arr[1][0] + 3);
 uVar31 = *(undefined8 *)(arr[1][0] + 1);
 uVar17 = *(undefined8 *)arr[2][3];
 uVar14 = *(undefined8 *)(arr[2][2] + 3);
 uVar54 = *(undefined8 *)(arr[2][1] + 2);
 uVar53 = *(undefined8 *)arr[2][1];
 uVar23 = *(undefined8 *)(arr[3][3] + 4);
 uVar20 = *(undefined8 *)(arr[3][3] + 2);
 uVar8 = *(undefined8 *)(arr[3][4] + 3);
 uVar6 = *(undefined8 *)(arr[3][4] + 1);
 uVar12 = *(undefined8 *)(arr[2][2] + 1);
 uVar10 = *(undefined8 *)(arr[2][1] + 4);
 uVar44 = *(undefined8 *)(arr[2][3] + 4);
 uVar42 = *(undefined8 *)(arr[2][3] + 2);
 uVar48 = *(undefined8 *)(arr[2][4] + 3);
 uVar46 = *(undefined8 *)(arr[2][4] + 1);
 uVar52 = *(undefined8 *)(arr[3][2] + 1);
 uVar50 = *(undefined8 *)(arr[3][1] + 4);
 uVar60 = *(undefined8 *)arr[3][3];
 uVar59 = *(undefined8 *)(arr[3][2] + 3);
 uVar28 = *(undefined8 *)(arr[2][0] + 3);
 uVar26 = *(undefined8 *)(arr[2][0] + 1);
 uVar58 = *(undefined8 *)(arr[3][0] + 3);
 uVar57 = *(undefined8 *)(arr[3][0] + 1);
 uVar56 = *(undefined8 *)(arr[3][1] + 2);
 uVar55 = *(undefined8 *)arr[3][1];
 uVar4 = *(undefined8 *)(arr[4][3] + 4);
 uVar2 = *(undefined8 *)(arr[4][3] + 2);
 uVar35 = *(undefined8 *)(arr[4][4] + 3);
 uVar32 = *(undefined8 *)(arr[4][4] + 1);
 uVar18 = *(undefined8 *)arr[4][3];
 uVar15 = *(undefined8 *)(arr[4][2] + 3);
 uVar40 = *(undefined8 *)(arr[4][2] + 1);
 uVar38 = *(undefined8 *)(arr[4][1] + 4);
 uVar24 = *(undefined8 *)(arr[4][0] + 3);
 uVar21 = *(undefined8 *)(arr[4][0] + 1);
 uVar36 = *(undefined8 *)(arr[4][1] + 2);
 uVar33 = *(undefined8 *)arr[4][1];
 return (int)uVar38 + (int)uVar2 + (int)uVar15 + (int)uVar32 + (int)uVar21 + (int)uVar33 +
 (int)((ulong)uVar38 >> 0x20) + (int)((ulong)uVar2 >> 0x20) +
 (int)((ulong)uVar15 >> 0x20) + (int)((ulong)uVar32 >> 0x20) +
 (int)((ulong)uVar21 >> 0x20) + (int)((ulong)uVar33 >> 0x20) +
 (int)uVar40 + (int)uVar4 + (int)uVar18 + (int)uVar35 + (int)uVar24 + (int)uVar36 +
 (int)((ulong)uVar40 >> 0x20) + (int)((ulong)uVar4 >> 0x20) +
 (int)((ulong)uVar18 >> 0x20) + (int)((ulong)uVar35 >> 0x20) +
 (int)((ulong)uVar24 >> 0x20) + (int)((ulong)uVar36 >> 0x20) + arr[4][0][0] +
 (int)uVar50 + (int)uVar20 + (int)uVar59 + (int)uVar6 + (int)uVar57 + (int)uVar55 +
 (int)((ulong)uVar50 >> 0x20) + (int)((ulong)uVar20 >> 0x20) +
 (int)((ulong)uVar59 >> 0x20) + (int)((ulong)uVar6 >> 0x20) +
 (int)((ulong)uVar57 >> 0x20) + (int)((ulong)uVar55 >> 0x20) +
 (int)uVar52 + (int)uVar23 + (int)uVar60 + (int)uVar8 + (int)uVar58 + (int)uVar56 +
 (int)((ulong)uVar52 >> 0x20) + (int)((ulong)uVar23 >> 0x20) +
 (int)((ulong)uVar60 >> 0x20) + (int)((ulong)uVar8 >> 0x20) +
 (int)((ulong)uVar58 >> 0x20) + (int)((ulong)uVar56 >> 0x20) + arr[3][0][0] +
 (int)uVar10 + (int)uVar42 + (int)uVar14 + (int)uVar46 + (int)uVar26 + (int)uVar53 +
 (int)((ulong)uVar10 >> 0x20) + (int)((ulong)uVar42 >> 0x20) +
 (int)((ulong)uVar14 >> 0x20) + (int)((ulong)uVar46 >> 0x20) +
 (int)((ulong)uVar26 >> 0x20) + (int)((ulong)uVar53 >> 0x20) +
 (int)uVar12 + (int)uVar44 + (int)uVar17 + (int)uVar48 + (int)uVar28 + (int)uVar54 +
 (int)((ulong)uVar12 >> 0x20) + (int)((ulong)uVar44 >> 0x20) +
 (int)((ulong)uVar17 >> 0x20) + (int)((ulong)uVar48 >> 0x20) +
 (int)((ulong)uVar28 >> 0x20) + (int)((ulong)uVar54 >> 0x20) + arr[2][0][0] +
 (int)uVar41 + (int)uVar37 + (int)uVar49 + (int)uVar45 + (int)uVar31 + (int)uVar29 +
 (int)((ulong)uVar41 >> 0x20) + (int)((ulong)uVar37 >> 0x20) +
 (int)((ulong)uVar49 >> 0x20) + (int)((ulong)uVar45 >> 0x20) +
 (int)((ulong)uVar31 >> 0x20) + (int)((ulong)uVar29 >> 0x20) +
 (int)uVar43 + (int)uVar39 + (int)uVar51 + (int)uVar47 + (int)uVar34 + (int)uVar30 +
 (int)((ulong)uVar43 >> 0x20) + (int)((ulong)uVar39 >> 0x20) +
 (int)((ulong)uVar51 >> 0x20) + (int)((ulong)uVar47 >> 0x20) +
 (int)((ulong)uVar34 >> 0x20) + (int)((ulong)uVar30 >> 0x20) + arr[1][0][0] +
 (int)uVar13 + (int)uVar9 + (int)uVar25 + (int)uVar19 + (int)uVar5 + (int)uVar1 +
 (int)((ulong)uVar13 >> 0x20) + (int)((ulong)uVar9 >> 0x20) +
 (int)((ulong)uVar25 >> 0x20) + (int)((ulong)uVar19 >> 0x20) +
 (int)((ulong)uVar5 >> 0x20) + (int)((ulong)uVar1 >> 0x20) +
 (int)uVar16 + (int)uVar11 + (int)uVar27 + (int)uVar22 + (int)uVar7 + (int)uVar3 +
 (int)((ulong)uVar16 >> 0x20) + (int)((ulong)uVar11 >> 0x20) +
 (int)((ulong)uVar27 >> 0x20) + (int)((ulong)uVar22 >> 0x20) +
 (int)((ulong)uVar7 >> 0x20) + (int)((ulong)uVar3 >> 0x20) + (*arr)[0][0];
}



/* Function: array_vla @ 00100bcc */

int array_vla(int n,int *arr)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 ulong uVar4;
 long lVar5;
 ulong uVar6;
 int *piVar7;
 ulong uVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 undefined8 uVar17;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar4 = (ulong)(uint)n;
 if ((uint)n < 8) {
 uVar6 = 0;
 iVar9 = 0;
 }
 else {
 uVar6 = uVar4 & 0xfffffff8;
 piVar7 = arr + 4;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 uVar8 = uVar6;
 do {
 piVar1 = piVar7 + -4;
 piVar2 = piVar7 + -2;
 piVar3 = piVar7 + 2;
 uVar17 = *(undefined8 *)piVar7;
 piVar7 = piVar7 + 8;
 uVar8 = uVar8 - 8;
 iVar9 = (int)*(undefined8 *)piVar1 + iVar9;
 iVar10 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar10;
 iVar11 = (int)*(undefined8 *)piVar2 + iVar11;
 iVar12 = (int)((ulong)*(undefined8 *)piVar2 >> 0x20) + iVar12;
 iVar13 = (int)uVar17 + iVar13;
 iVar14 = (int)((ulong)uVar17 >> 0x20) + iVar14;
 iVar15 = (int)*(undefined8 *)piVar3 + iVar15;
 iVar16 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar16;
 } while (uVar8 != 0);
 iVar9 = iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12;
 if (uVar6 == uVar4) {
 return iVar9;
 }
 }
 lVar5 = uVar4 - uVar6;
 piVar7 = arr + uVar6;
 do {
 lVar5 = lVar5 + -1;
 iVar9 = *piVar7 + iVar9;
 piVar7 = piVar7 + 1;
 } while (lVar5 != 0);
 return iVar9;
}



/* Function: array_pointer @ 00100c50 */

int array_pointer(int (*arr) [10],int n)

{
 int (*paiVar1) [10];
 int *piVar2;
 int iVar3;
 int iVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 int (*paiVar8) [10];
 ulong uVar9;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar5 = (ulong)(uint)n;
 if (n == 1) {
 uVar7 = 0;
 iVar3 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffffe;
 iVar4 = 0;
 iVar3 = 0;
 uVar9 = uVar7;
 paiVar8 = arr;
 do {
 piVar2 = *paiVar8;
 uVar9 = uVar9 - 2;
 paiVar1 = paiVar8 + 1;
 paiVar8 = paiVar8 + 2;
 iVar4 = *piVar2 + iVar4;
 iVar3 = (*paiVar1)[0] + iVar3;
 } while (uVar9 != 0);
 iVar3 = iVar3 + iVar4;
 if (uVar7 == uVar5) {
 return iVar3;
 }
 }
 lVar6 = uVar5 - uVar7;
 paiVar8 = arr + uVar7;
 do {
 lVar6 = lVar6 + -1;
 iVar3 = (*paiVar8)[0] + iVar3;
 paiVar8 = paiVar8 + 1;
 } while (lVar6 != 0);
 return iVar3;
}



/* Function: pointer_array @ 00100cd8 */

int pointer_array(int **arr,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int count@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 if (9 < (uint)n) {
 n = 10;
 }
 uVar2 = (ulong)(uint)n;
 do {
 if (*arr != (int *)0x0) {
 iVar1 = **arr + iVar1;
 }
 arr = arr + 1;
 uVar2 = uVar2 - 1;
 } while (uVar2 != 0);
 }
 return iVar1;
}



/* Function: array_complex_index @ 00100d20 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
 int iVar1;
 
 if (-1 < x) {
 iVar1 = -1;
 if (((y < h) && (x < w)) && (-1 < y)) {
 iVar1 = arr[x + y * w];
 }
 return iVar1;
 }
 return -1;
}



/* Function: array_oob @ 00100d54 */

int array_oob(int *arr,int n)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 ulong uVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 undefined8 uVar17;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 0) {
 return 0;
 }
 uVar5 = (ulong)(n + 1);
 if ((uint)n < 7) {
 uVar7 = 0;
 iVar9 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 piVar4 = arr + 4;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 uVar8 = uVar7;
 do {
 piVar1 = piVar4 + -4;
 piVar2 = piVar4 + -2;
 piVar3 = piVar4 + 2;
 uVar17 = *(undefined8 *)piVar4;
 piVar4 = piVar4 + 8;
 uVar8 = uVar8 - 8;
 iVar9 = (int)*(undefined8 *)piVar1 + iVar9;
 iVar10 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar10;
 iVar11 = (int)*(undefined8 *)piVar2 + iVar11;
 iVar12 = (int)((ulong)*(undefined8 *)piVar2 >> 0x20) + iVar12;
 iVar13 = (int)uVar17 + iVar13;
 iVar14 = (int)((ulong)uVar17 >> 0x20) + iVar14;
 iVar15 = (int)*(undefined8 *)piVar3 + iVar15;
 iVar16 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar16;
 } while (uVar8 != 0);
 iVar9 = iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12;
 if (uVar7 == uVar5) {
 return iVar9;
 }
 }
 lVar6 = uVar5 - uVar7;
 piVar4 = arr + uVar7;
 do {
 lVar6 = lVar6 + -1;
 iVar9 = *piVar4 + iVar9;
 piVar4 = piVar4 + 1;
 } while (lVar6 != 0);
 return iVar9;
}



/* Function: test_array_types @ 00100dd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
 uint uVar1;
 int local_3d0 [4];
 undefined1 auStack_3c0 [16];
 int local_3b0 [6];
 undefined1 auStack_398 [16];
 int aiStack_388 [110];
 undefined8 local_1d0;
 undefined8 local_1c8;
 undefined8 uStack_1c0;
 undefined8 local_1b8;
 undefined8 uStack_1b0;
 undefined8 local_1a8;
 undefined8 local_1a0;
 undefined8 uStack_198;
 undefined8 uStack_190;
 undefined8 uStack_188;
 undefined8 local_180;
 undefined8 local_178;
 undefined8 uStack_170;
 undefined8 local_168;
 undefined8 uStack_160;
 undefined8 local_158;
 undefined8 local_150;
 undefined8 uStack_148;
 undefined8 uStack_140;
 undefined8 uStack_138;
 undefined8 local_130;
 undefined8 local_128;
 undefined8 uStack_120;
 undefined8 local_118;
 undefined8 uStack_110;
 undefined8 local_108;
 undefined8 local_100;
 undefined8 uStack_f8;
 undefined8 local_f0;
 undefined8 uStack_e8;
 undefined8 local_e0;
 undefined8 local_d8;
 undefined8 uStack_d0;
 undefined8 local_c8;
 undefined8 uStack_c0;
 undefined8 local_b8;
 undefined8 local_b0;
 undefined8 uStack_a8;
 undefined8 uStack_a0;
 undefined8 uStack_98;
 undefined8 local_90;
 undefined8 local_88;
 undefined8 uStack_80;
 undefined8 uStack_78;
 undefined8 local_70;
 undefined8 local_68;
 undefined8 local_60;
 undefined8 uStack_58;
 undefined8 uStack_50;
 undefined8 uStack_48;
 
 /* Unresolved local var: int[10][10] matrix@[???]
 Unresolved local var: int[5][5][5] cube@[DW_OP_breg31(sp): 0]
 Unresolved local var: int[5][10] arr2@[???]
 Unresolved local var: int *[10] ptr_arr@[???]
 Unresolved local var: int c@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int[20] flat@[???]
 Unresolved local var: int[5] arr1@[???]
 Unresolved local var: char[6] str@[???]
 Unresolved local var: int[3] vla_arr@[???] */
 puts((const char *)&DAT_00103210);
 printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
 printf("ARR-L1-02 (array_string): %d\n",5);
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???] */
 local_1d0 = 0;
 local_180 = 0;
 local_1a8 = 0x100000000;
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 uStack_170 = 0;
 local_178 = 2;
 uStack_1c0 = 0;
 local_1c8 = 0;
 uStack_120 = 4;
 local_128 = 0;
 uStack_f8 = 0x500000000;
 local_100 = 0;
 uStack_1b0 = 0;
 local_1b8 = 0;
 uStack_c0 = 0;
 local_c8 = 6;
 uStack_198 = 0;
 local_1a0 = 0;
 uStack_188 = 0;
 uStack_190 = 0;
 uStack_148 = 0;
 local_150 = 0x300000000;
 uStack_138 = 0;
 uStack_140 = 0;
 uStack_80 = 0;
 local_88 = 0;
 local_70 = 8;
 uStack_78 = 0;
 uStack_160 = 0;
 local_168 = 0;
 local_158 = 0;
 uStack_a8 = 0;
 local_b0 = 0;
 uStack_98 = 0;
 uStack_a0 = 0x700000000;
 uStack_110 = 0;
 local_118 = 0;
 local_130 = 0;
 uStack_58 = 0;
 local_60 = 0;
 uStack_48 = 0x900000000;
 uStack_50 = 0;
 local_108 = 0;
 uStack_d0 = 0;
 local_d8 = 0;
 uStack_e8 = 0;
 local_f0 = 0;
 local_e0 = 0;
 local_b8 = 0;
 local_90 = 0;
 local_68 = 0;
 printf("ARR-L1-03 (array_2d_stack): %d\n",0x2d);
 /* Unresolved local var: int i@[???]
 Unresolved local var: int j@[???]
 Unresolved local var: int k@[???] */
 aiStack_388[6] = 1;
 local_3d0[2] = 1;
 local_3d0[3] = 1;
 local_3d0[0] = 1;
 local_3d0[1] = 1;
 auStack_3c0[8] = 1;
 auStack_3c0[12] = 1;
 auStack_3c0[0] = 1;
 auStack_3c0[4] = 1;
 local_3b0[2] = 1;
 local_3b0[3] = 1;
 local_3b0[0] = 1;
 local_3b0[1] = 1;
 ((Union128 *)auStack_398)->_0_4_ = 1;
 ((Union128 *)auStack_398)->_4_4_ = 1;
 local_3b0[4] = 1;
 local_3b0[5] = 1;
 aiStack_388[0] = 1;
 aiStack_388[1] = 1;
 auStack_398._8_4_ = 1;
 auStack_398._12_4_ = 1;
 aiStack_388[4] = 1;
 aiStack_388[5] = 1;
 aiStack_388[2] = 1;
 aiStack_388[3] = 1;
 aiStack_388[9] = 1;
 aiStack_388[10] = 1;
 aiStack_388[7] = 1;
 aiStack_388[8] = 1;
 aiStack_388[0xd] = 1;
 aiStack_388[0xe] = 1;
 aiStack_388[0xb] = 1;
 aiStack_388[0xc] = 1;
 aiStack_388[0x11] = 1;
 aiStack_388[0x12] = 1;
 aiStack_388[0xf] = 1;
 aiStack_388[0x10] = 1;
 aiStack_388[0x15] = 1;
 aiStack_388[0x16] = 1;
 aiStack_388[0x13] = 1;
 aiStack_388[0x14] = 1;
 aiStack_388[0x19] = 1;
 aiStack_388[0x1a] = 1;
 aiStack_388[0x17] = 1;
 aiStack_388[0x18] = 1;
 aiStack_388[0x1d] = 1;
 aiStack_388[0x1e] = 1;
 aiStack_388[0x1b] = 1;
 aiStack_388[0x1c] = 1;
 aiStack_388[0x22] = 1;
 aiStack_388[0x23] = 1;
 aiStack_388[0x20] = 1;
 aiStack_388[0x21] = 1;
 aiStack_388[0x26] = 1;
 aiStack_388[0x27] = 1;
 aiStack_388[0x24] = 1;
 aiStack_388[0x25] = 1;
 aiStack_388[0x2a] = 1;
 aiStack_388[0x2b] = 1;
 aiStack_388[0x28] = 1;
 aiStack_388[0x29] = 1;
 aiStack_388[0x2e] = 1;
 aiStack_388[0x2f] = 1;
 aiStack_388[0x2c] = 1;
 aiStack_388[0x2d] = 1;
 aiStack_388[0x32] = 1;
 aiStack_388[0x33] = 1;
 aiStack_388[0x30] = 1;
 aiStack_388[0x31] = 1;
 aiStack_388[0x36] = 1;
 aiStack_388[0x37] = 1;
 aiStack_388[0x34] = 1;
 aiStack_388[0x35] = 1;
 aiStack_388[0x38] = 1;
 aiStack_388[0x3b] = 1;
 aiStack_388[0x3c] = 1;
 aiStack_388[0x39] = 1;
 aiStack_388[0x3a] = 1;
 aiStack_388[0x3f] = 1;
 aiStack_388[0x40] = 1;
 aiStack_388[0x3d] = 1;
 aiStack_388[0x3e] = 1;
 aiStack_388[0x43] = 1;
 aiStack_388[0x44] = 1;
 aiStack_388[0x41] = 1;
 aiStack_388[0x42] = 1;
 aiStack_388[0x47] = 1;
 aiStack_388[0x48] = 1;
 aiStack_388[0x45] = 1;
 aiStack_388[0x46] = 1;
 aiStack_388[0x4b] = 1;
 aiStack_388[0x4c] = 1;
 aiStack_388[0x49] = 1;
 aiStack_388[0x4a] = 1;
 aiStack_388[0x4f] = 1;
 aiStack_388[0x50] = 1;
 aiStack_388[0x4d] = 1;
 aiStack_388[0x4e] = 1;
 aiStack_388[0x1f] = 1;
 aiStack_388[0x51] = 1;
 aiStack_388[0x54] = 1;
 aiStack_388[0x55] = 1;
 aiStack_388[0x52] = 1;
 aiStack_388[0x53] = 1;
 aiStack_388[0x58] = 1;
 aiStack_388[0x59] = 1;
 aiStack_388[0x56] = 1;
 aiStack_388[0x57] = 1;
 aiStack_388[0x5c] = 1;
 aiStack_388[0x5d] = 1;
 aiStack_388[0x5a] = 1;
 aiStack_388[0x5b] = 1;
 aiStack_388[0x60] = 1;
 aiStack_388[0x61] = 1;
 aiStack_388[0x5e] = 1;
 aiStack_388[0x5f] = 1;
 aiStack_388[100] = 1;
 aiStack_388[0x65] = 1;
 aiStack_388[0x62] = 1;
 aiStack_388[99] = 1;
 aiStack_388[0x68] = 1;
 aiStack_388[0x69] = 1;
 aiStack_388[0x66] = 1;
 aiStack_388[0x67] = 1;
 aiStack_388[0x6a] = 1;
 uVar1 = array_3d((int (*) [5] [5])local_3d0);
 printf("ARR-L1-04 (array_3d): %d\n",(ulong)uVar1);
 printf("ARR-L2-01 (array_vla): %d\n",0x3c);
 printf("ARR-L2-02 (array_pointer): %d\n",100);
 printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
 printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
 return;
}



/* Function: ptr_single @ 0010101c */

int ptr_single(int *p)

{
 return *p + 10;
}



/* Function: ptr_double @ 00101028 */

int ptr_double(int **p)

{
 return **p + 5;
}



/* Function: ptr_triple @ 00101038 */

int ptr_triple(int ***p)

{
 return ***p + 1;
}



/* Function: ptr_increment @ 0010104c */

int ptr_increment(int *p,int n)

{
 int *piVar1;
 ulong uVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 ulong uVar7;
 ulong uVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 undefined8 uVar17;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 if (n - 1U < 7) {
 uVar7 = 0;
 iVar9 = 0;
 piVar6 = p;
 }
 else {
 uVar2 = (ulong)(n - 1U) + 1;
 uVar7 = uVar2 & 0x1fffffff8;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 piVar6 = p + uVar7;
 piVar5 = p + 4;
 uVar8 = uVar7;
 do {
 piVar1 = piVar5 + -4;
 piVar3 = piVar5 + -2;
 piVar4 = piVar5 + 2;
 uVar17 = *(undefined8 *)piVar5;
 piVar5 = piVar5 + 8;
 uVar8 = uVar8 - 8;
 iVar9 = (int)*(undefined8 *)piVar1 + iVar9;
 iVar10 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar10;
 iVar11 = (int)*(undefined8 *)piVar3 + iVar11;
 iVar12 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar12;
 iVar13 = (int)uVar17 + iVar13;
 iVar14 = (int)((ulong)uVar17 >> 0x20) + iVar14;
 iVar15 = (int)*(undefined8 *)piVar4 + iVar15;
 iVar16 = (int)((ulong)*(undefined8 *)piVar4 >> 0x20) + iVar16;
 } while (uVar8 != 0);
 iVar9 = iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12;
 if (uVar2 == uVar7) {
 return iVar9;
 }
 }
 iVar10 = n - (int)uVar7;
 do {
 iVar10 = iVar10 + -1;
 iVar9 = *piVar6 + iVar9;
 piVar6 = piVar6 + 1;
 } while (iVar10 != 0);
 return iVar9;
}



/* Function: ptr_offset @ 001010d8 */

int ptr_offset(int *p,int offset)

{
 return p[offset];
}



/* Function: ptr_diff @ 001010e0 */

int ptr_diff(int *p1,int *p2)

{
 return (int)((ulong)((long)p1 - (long)p2) >> 2);
}



/* Function: ptr_void @ 001010ec */

int ptr_void(void *p,int type)

{
 if (type == 1) {
 return (int)*(byte *)p;
 }
 if (type == 0) {
 return *(int *)p;
 }
 return -1;
}



/* Function: ptr_const @ 00101110 */

int ptr_const(int *p)

{
 return *p << 1;
}



/* Function: ptr_const_ptr @ 0010111c */

int ptr_const_ptr(int *p)

{
 int iVar1;
 
 iVar1 = *p;
 *p = iVar1 + 5;
 return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00101130 */

int ptr_func_simple(_func_int_int *f,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101138. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*f)(x);
 return iVar1;
}



/* Function: ptr_func_complex @ 0010113c */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
 int iVar1;
 char *local_20;
 undefined8 uStack_18;
 
 /* Unresolved local var: char *[2] args@[DW_OP_breg31(sp): 0] */
 uStack_18 = 0;
 local_20 = "test";
 iVar1 = (*f)(p,&local_20);
 return iVar1;
}



/* Function: ptr_cast @ 00101178 */

int ptr_cast(void *p)

{
 /* Unresolved local var: int * int_ptr@[DW_OP_reg0(x0)]
 Unresolved local var: char * char_ptr@[DW_OP_reg0(x0)]
 Unresolved local var: int * back_ptr@[DW_OP_reg0(x0)] */
 return *(int *)p;
}



/* Function: opaque_handle_create @ 00101180 */

void * opaque_handle_create(int size)

{
 return (void *)(long)size;
}



/* Function: opaque_handle_op @ 00101188 */

int opaque_handle_op(void *handle)

{
 return (int)handle << 1;
}



/* Function: test_pointer_types @ 00101190 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
 /* Unresolved local var: int val1@[???]
 Unresolved local var: int val2@[???]
 Unresolved local var: int val3@[???]
 Unresolved local var: int[5] arr4@[???]
 Unresolved local var: int[5] arr5@[???]
 Unresolved local var: char c7@[???]
 Unresolved local var: int val7@[???]
 Unresolved local var: int val8@[???]
 Unresolved local var: int val9@[???]
 Unresolved local var: int val11@[???]
 Unresolved local var: int val12@[???]
 Unresolved local var: int * ptr2@[???]
 Unresolved local var: int * * pptr2@[???]
 Unresolved local var: int * ptr3@[???]
 Unresolved local var: int * * pptr3@[???]
 Unresolved local var: int * * * ppptr3@[???]
 Unresolved local var: int[5] arr6@[???]
 Unresolved local var: void * handle@[???] */
 puts((const char *)&DAT_0010322b);
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



/* Function: struct_simple @ 00101294 */

int struct_simple(Point3D *p)

{
 return p->y + p->x + p->z;
}



/* Function: struct_array @ 001012a8 */

int struct_array(Point3D *pts,int n)

{
 int *piVar1;
 ulong uVar2;
 ulong uVar3;
 long lVar4;
 ulong uVar5;
 Point3D *pPVar6;
 int *piVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar3 = (ulong)(uint)n;
 if ((uint)n < 8) {
 uVar5 = 0;
 iVar8 = 0;
 }
 else {
 uVar5 = uVar3 & 0xfffffff8;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 uVar2 = uVar5;
 pPVar6 = pts;
 do {
 uVar2 = uVar2 - 8;
 iVar12 = pPVar6->x + iVar12 + pPVar6->y + pPVar6->z;
 iVar13 = pPVar6[1].x + iVar13 + pPVar6[1].y + pPVar6[1].z;
 iVar14 = pPVar6[2].x + iVar14 + pPVar6[2].y + pPVar6[2].z;
 iVar15 = pPVar6[3].x + iVar15 + pPVar6[3].y + pPVar6[3].z;
 iVar8 = pPVar6[4].x + iVar8 + pPVar6[4].y + pPVar6[4].z;
 iVar9 = pPVar6[5].x + iVar9 + pPVar6[5].y + pPVar6[5].z;
 iVar10 = pPVar6[6].x + iVar10 + pPVar6[6].y + pPVar6[6].z;
 iVar11 = pPVar6[7].x + iVar11 + pPVar6[7].y + pPVar6[7].z;
 pPVar6 = pPVar6 + 8;
 } while (uVar2 != 0);
 iVar8 = iVar8 + iVar12 + iVar9 + iVar13 + iVar10 + iVar14 + iVar11 + iVar15;
 if (uVar5 == uVar3) {
 return iVar8;
 }
 }
 lVar4 = uVar3 - uVar5;
 piVar7 = &pts[uVar5].y;
 do {
 pPVar6 = (Point3D *)(piVar7 + -1);
 iVar9 = *piVar7;
 piVar1 = piVar7 + 1;
 piVar7 = piVar7 + 3;
 lVar4 = lVar4 + -1;
 iVar8 = pPVar6->x + iVar8 + iVar9 + *piVar1;
 } while (lVar4 != 0);
 return iVar8;
}



/* Function: struct_nested @ 00101360 */

int struct_nested(Rect *r)

{
 return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 00101370 */

int struct_deep(Widget *w)

{
 return (w->style).fill.r + (w->bounds).position.z;
}



/* Function: struct_with_ptr @ 00101380 */

int struct_with_ptr(Node *node)

{
 int iVar1;
 
 iVar1 = 0;
 if (node->next != (Node *)0x0) {
 iVar1 = node->next->data;
 }
 return iVar1 + node->data;
}



/* Function: struct_bitfields @ 00101398 */

int struct_bitfields(Flags *f)

{
 unsigned short uVar1;
 
 uVar1 = *(ushort *)f;
 return (uVar1 & 1) + (uint)(uVar1 >> 6) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 001013b8 */

int union_type(UnionData *u,int type)

{
 if (type == 1) {
 return (int)u->f;
 }
 if (type == 0) {
 return u->i;
 }
 return (int)(byte)u->bytes[0];
}



/* Function: union_array @ 001013e0 */

int union_array(UnionData *arr,int n)

{
 UnionData *pUVar1;
 UnionData *pUVar2;
 UnionData *pUVar3;
 UnionData *pUVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 ulong uVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 undefined8 uVar17;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar5 = (ulong)(uint)n;
 if ((uint)n < 8) {
 uVar7 = 0;
 iVar9 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 pUVar4 = arr + 4;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 uVar8 = uVar7;
 do {
 pUVar1 = pUVar4 + -4;
 pUVar2 = pUVar4 + -2;
 pUVar3 = pUVar4 + 2;
 uVar17 = *(undefined8 *)pUVar4;
 pUVar4 = pUVar4 + 8;
 uVar8 = uVar8 - 8;
 iVar9 = (int)*(undefined8 *)pUVar1 + iVar9;
 iVar10 = (int)((ulong)*(undefined8 *)pUVar1 >> 0x20) + iVar10;
 iVar11 = (int)*(undefined8 *)pUVar2 + iVar11;
 iVar12 = (int)((ulong)*(undefined8 *)pUVar2 >> 0x20) + iVar12;
 iVar13 = (int)uVar17 + iVar13;
 iVar14 = (int)((ulong)uVar17 >> 0x20) + iVar14;
 iVar15 = (int)*(undefined8 *)pUVar3 + iVar15;
 iVar16 = (int)((ulong)*(undefined8 *)pUVar3 >> 0x20) + iVar16;
 } while (uVar8 != 0);
 iVar9 = iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12;
 if (uVar7 == uVar5) {
 return iVar9;
 }
 }
 lVar6 = uVar5 - uVar7;
 pUVar4 = arr + uVar7;
 do {
 lVar6 = lVar6 + -1;
 iVar9 = pUVar4->i + iVar9;
 pUVar4 = pUVar4 + 1;
 } while (lVar6 != 0);
 return iVar9;
}



/* Function: enum_type @ 00101468 */

int enum_type(State s)

{
 return s * 10;
}



/* Function: enum_switch @ 00101474 */

int enum_switch(State s)

{
 if (s < 4) {
 return *(int *)(&DAT_00102c50 + (long)(int)s * 4);
 }
 return -99;
}



/* Function: struct_func_ptr @ 00101494 */

int struct_func_ptr(Device *dev)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x001014a0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*dev->process)(dev->data);
 return iVar1;
}



/* Function: linked_list @ 001014a4 */

int linked_list(Node *head)

{
 int iVar1;
 
 /* Unresolved local var: Node * current@[DW_OP_reg0(x0)]
 Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (; head != (Node *)0x0; head = head->next) {
 iVar1 = head->data + iVar1;
 }
 return iVar1;
}



/* Function: doubly_linked_list @ 001014c4 */

int doubly_linked_list(DNode *head)

{
 int iVar1;
 
 /* Unresolved local var: DNode * current@[DW_OP_reg0(x0)]
 Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (; head != (DNode *)0x0; head = head->next) {
 iVar1 = head->data + iVar1;
 }
 return iVar1;
}



/* Function: binary_tree_sum @ 001014e4 */

int binary_tree_sum(TreeNode *root)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (root == (TreeNode *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 do {
 iVar1 = root->data;
 iVar2 = binary_tree_sum(root->left);
 root = root->right;
 iVar3 = iVar1 + iVar3 + iVar2;
 } while (root != (TreeNode *)0x0);
 }
 return iVar3;
}



/* Function: binary_tree @ 00101538 */

int binary_tree(TreeNode *root)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 if (root == (TreeNode *)0x0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 do {
 iVar1 = root->data;
 iVar2 = binary_tree_sum(root->left);
 root = root->right;
 iVar3 = iVar1 + iVar3 + iVar2;
 } while (root != (TreeNode *)0x0);
 }
 return iVar3;
}



/* Function: graph_traverse @ 0010153c */

int graph_traverse(Graph *g)

{
 int iVar1;
 ulong uVar2;
 Edge *pEVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (g->numVertices < 1) {
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: Edge * edge@[???] */
 for (pEVar3 = g->adjList[uVar2]; pEVar3 != (Edge *)0x0; pEVar3 = pEVar3->next) {
 iVar1 = pEVar3->dest + iVar1;
 }
 uVar2 = uVar2 + 1;
 } while (uVar2 != (uint)g->numVertices);
 }
 return iVar1;
}



/* Function: test_composite_types @ 00101588 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
 int iVar1;
 uint uVar2;
 ulong uVar3;
 int *piVar4;
 TreeNode local_a0;
 int local_80 [2];
 undefined4 *local_78;
 undefined8 uStack_70;
 undefined4 local_68 [2];
 undefined8 local_60;
 int *piStack_58;
 int local_50 [2];
 undefined4 *local_48;
 undefined4 local_40 [2];
 undefined4 *local_38;
 undefined4 local_30 [2];
 undefined8 local_28;
 
 /* Unresolved local var: Node[3] list@[???]
 Unresolved local var: DNode[2] dlist@[DW_OP_breg31(sp): +32]
 Unresolved local var: TreeNode tree@[DW_OP_breg31(sp): 0]
 Unresolved local var: Point3D p1@[???]
 Unresolved local var: Rect r@[???]
 Unresolved local var: Widget w@[???]
 Unresolved local var: Node node1@[???]
 Unresolved local var: UnionData u@[???]
 Unresolved local var: Device dev@[???]
 Unresolved local var: Graph g@[???]
 Unresolved local var: Point3D[2] pts@[???]
 Unresolved local var: Node node2@[???]
 Unresolved local var: Flags f@[???]
 Unresolved local var: UnionData[3] arr_u@[???]
 Unresolved local var: Edge e1@[???] */
 puts((const char *)&DAT_00103246);
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
 piVar4 = local_50;
 uVar3 = 0;
 local_50[0] = 10;
 local_30[0] = 0x1e;
 local_40[0] = 0x14;
 local_48 = local_40;
 local_38 = local_30;
 local_28 = 0;
 do {
 /* Unresolved local var: Node * current@[DW_OP_reg8(x8)]
 Unresolved local var: int sum@[DW_OP_reg1(x1)] */
 iVar1 = *piVar4;
 piVar4 = *(int **)(piVar4 + 2);
 uVar3 = (ulong)(uint)(iVar1 + (int)uVar3);
 } while (piVar4 != (int *)0x0);
 printf("CMP-L2-12 (linked_list): %d\n",uVar3);
 piVar4 = local_80;
 uVar3 = 0;
 local_80[0] = 10;
 local_68[0] = 0x14;
 local_60 = 0;
 piStack_58 = piVar4;
 local_78 = local_68;
 uStack_70 = 0;
 do {
 /* Unresolved local var: DNode * current@[DW_OP_reg8(x8)]
 Unresolved local var: int sum@[DW_OP_reg1(x1)] */
 iVar1 = *piVar4;
 piVar4 = *(int **)(piVar4 + 2);
 uVar3 = (ulong)(uint)(iVar1 + (int)uVar3);
 } while (piVar4 != (int *)0x0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar3);
 local_a0.left = (TreeNode *)0x0;
 local_a0.data = 100;
 local_a0._4_4_ = 0;
 local_a0.right = (TreeNode *)0x0;
 uVar2 = binary_tree_sum(&local_a0);
 printf("CMP-L2-14 (binary_tree): %d\n",(ulong)uVar2);
 printf("CMP-L2-15 (graph_traverse): %d\n",1);
 return;
}



/* Function: main @ 00101738 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* Function: FUN_0010175c @ 0010175c */

undefined1 FUN_0010175c(undefined1 param_1 [16], undefined1 param_2 [16])

{
 int iVar1;
 ulong uVar2;
 ulong uVar3;
 ulong uVar4;
 undefined1 auVar5 [16];
 bool bVar6;
 bool bVar7;
 uint uVar8;
 long lVar9;
 ulong uVar10;
 ulong uVar11;
 uint uVar12;
 ulong uVar13;
 uint uVar14;
 ulong uVar15;
 ulong uVar16;
 ulong uVar17;
 long lVar18;
 ulong uVar19;
 ulong uVar20;
 ulong uVar21;
 ulong uVar22;
 ulong uVar23;
 ulong uVar24;
 ulong uVar25;
 ulong uVar26;
 ulong uVar28;
 undefined1 auVar27 [16];
 ulong uVar29;
 
 uVar11 = ((Union128 *)param_2)->_8_8_;
 uVar29 = param_2._0_8_;
 uVar28 = param_1._8_8_;
 uVar26 = param_1._0_8_;
 uVar13 = fpcr;
 uVar3 = (uVar28 & 0xffffffffffff) << 3;
 lVar18 = -((long)uVar28 >> 0x3f);
 uVar12 = (uint)lVar18;
 lVar9 = -((long)uVar11 >> 0x3f);
 uVar14 = (uint)lVar9;
 uVar2 = uVar11 << 3;
 uVar4 = uVar2 & 0x7fffffffffff8;
 uVar10 = uVar26 >> 0x3d;
 uVar24 = uVar3 | uVar10;
 uVar20 = uVar28 >> 0x30 & 0x7fff;
 uVar19 = uVar11 >> 0x30 & 0x7fff;
 uVar17 = uVar29 >> 0x3d;
 uVar16 = uVar4 | uVar17;
 uVar21 = uVar26 * 8;
 uVar23 = uVar29 * 8;
 uVar22 = uVar21;
 uVar25 = uVar24;
 if ((long)uVar11 >> 0x3f == (long)uVar28 >> 0x3f) {
 uVar8 = (int)uVar20 - (int)uVar19;
 lVar9 = lVar18;
 if ((int)uVar8 < 1) {
 if (uVar8 != 0) {
 if (uVar20 == 0) {
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar19 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar16 != 0 || uVar23 != 0) {
 uVar11 = uVar4 >> 0x32 ^ 1;
 goto LAB_00101a80;
 }
 goto LAB_00101d34;
 }
 goto LAB_001019dc;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 uVar20 = uVar19;
 goto LAB_00101b98;
 }
 }
 else {
 uVar8 = -uVar8;
 uVar24 = uVar24 | 0x8000000000000;
 }
 if (uVar19 != 0x7fff) {
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar17 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar16 + (uVar24 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar21;
 }
 uVar17 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar17 = (ulong)(uVar24 != 0 || uVar21 != 0);
 }
 uVar10 = uVar17 + uVar23;
 uVar20 = uVar19;
 if (CARRY8(uVar17,uVar23)) {
 uVar16 = uVar16 + 1;
 }
 goto LAB_00101b98;
 }
 if (uVar16 != 0 || uVar23 != 0) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 goto LAB_00101c44;
 }
LAB_00101dc8:
 uVar22 = 0;
 uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
 goto LAB_00101914;
 }
 uVar15 = uVar20 + 1;
 if ((uVar15 & 0x7ffe) == 0) {
 if (uVar20 != 0) {
 uVar8 = 0;
 uVar11 = 0;
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00102050;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101dc8;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar8 = (uint)uVar11;
 if (uVar19 != 0x7fff) goto LAB_001021f8;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102290;
 }
LAB_001022bc:
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00102200:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101c44;
 }
LAB_00102050:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 }
 else {
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) goto LAB_001022bc;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101dc8;
 }
 else {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00102050;
LAB_001021f8:
 if (uVar16 != 0 || uVar23 != 0) goto LAB_00102200;
 }
LAB_00102290:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 }
 goto LAB_00101c44;
 }
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 goto LAB_001019fc;
 }
 goto LAB_00101fc8;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101fc8;
 uVar22 = uVar21 + uVar23;
 uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 if ((uVar25 >> 0x33 & 1) != 0) {
 uVar25 = uVar25 & 0xfff7ffffffffffff;
 uVar10 = 0;
 bVar6 = false;
 uVar15 = 1;
 goto LAB_001018ac;
 }
LAB_00101898:
 uVar17 = uVar22 | uVar25;
 goto LAB_0010189c;
 }
 if (uVar15 != 0x7fff) {
 uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 bVar6 = false;
 uVar10 = uVar21 + uVar23 >> 1 & 7;
 uVar25 = uVar17 >> 1;
 uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
 goto LAB_001018ac;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 != 0) {
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_001022a0:
 uVar11 = 0x14;
 lVar18 = 0;
 goto LAB_00101aec;
 }
 if (uVar10 == 0x800000) {
 if (lVar18 == 0) goto LAB_0010223c;
LAB_00102108:
 uVar11 = 0x14;
 lVar18 = 1;
 goto LAB_00101aec;
 }
LAB_00101f64:
 uVar14 = 0x14;
 if ((uVar13 & 0xc00000) == 0x400000) {
 uVar22 = 0xffffffffffffffff;
 uVar15 = 0x7ffe;
 bVar6 = false;
 uVar11 = 0x14;
 uVar25 = uVar22;
 goto joined_r0x00101f84;
 }
 goto LAB_00101aa8;
 }
LAB_00101ff4:
 uVar11 = 0x14;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 goto LAB_00101b98;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101dc8;
 goto LAB_00101a74;
 }
 goto LAB_00101970;
 }
 uVar19 = uVar20;
 if (uVar20 != 0x7fff) goto LAB_001019dc;
 uVar14 = uVar12;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101d34;
 uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
 uVar23 = uVar21;
 uVar16 = uVar24;
LAB_00101a80:
 uVar20 = 0x7fff;
 goto LAB_00101a88;
 }
 uVar16 = uVar16 | 0x8000000000000;
 if (uVar20 == 0x7fff) goto LAB_00101c24;
LAB_00101970:
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar17 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar24 + (uVar16 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar23;
 }
 uVar17 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 uVar16 = uVar24;
 }
 }
 else {
 uVar17 = (ulong)(uVar16 != 0 || uVar23 != 0);
 uVar16 = uVar24;
 }
 uVar10 = uVar17 + uVar21;
 if (CARRY8(uVar17,uVar21)) {
 uVar16 = uVar16 + 1;
 }
LAB_00101b98:
 uVar19 = uVar20;
 uVar22 = uVar10;
 uVar25 = uVar16;
 if ((uVar16 >> 0x33 & 1) == 0) goto LAB_001019dc;
 uVar15 = uVar20 + 1;
 if (uVar15 != 0x7fff) {
 bVar6 = false;
 uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
 uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
 uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
 goto LAB_001018ac;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0) goto LAB_00101ff4;
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_001022a0;
 if (uVar10 != 0x800000) goto LAB_00101f64;
 if (lVar18 != 0) goto LAB_00102108;
LAB_0010223c:
 uVar22 = 0xffffffffffffffff;
 lVar18 = 0;
 uVar15 = 0x7ffe;
 uVar11 = 0x14;
 uVar25 = uVar22;
LAB_001018dc:
 uVar14 = (uint)uVar11;
 uVar12 = (uint)lVar18;
 if (uVar15 + 1 != 0x7fff) {
 uVar10 = uVar25 >> 3 & 0xffffffffffff;
 uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
 uVar14 = (uint)(uVar15 + 1) & 0x7fff;
 goto LAB_001018f8;
 }
LAB_00101aa8:
 uVar12 = (uint)lVar18;
 uVar13 = uVar13 & 0xc00000;
 if (uVar13 != 0) {
 if (uVar13 == 0x400000) {
 if (lVar9 != 0) goto LAB_00101ac4;
 }
 else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00101ac4:
 uVar22 = 0xffffffffffffffff;
 uVar11 = (ulong)(uVar14 | 0x14);
 uVar10 = 0x1fffffffffffffff;
 uVar20 = 0x7ffe;
 goto LAB_001019fc;
 }
 }
 uVar11 = (ulong)(uVar14 | 0x14);
 }
LAB_00101aec:
 uVar22 = 0;
 uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
 goto LAB_00101b00;
 }
 uVar8 = (int)uVar20 - (int)uVar19;
 if ((int)uVar8 < 1) {
 if (uVar8 == 0) {
 uVar11 = 0;
 if ((uVar20 + 1 & 0x7ffe) != 0) {
 uVar22 = uVar21 + uVar29 * -8;
 uVar10 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar10 >> 0x33 & 1) != 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar10 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_00101834;
 }
 lVar9 = lVar18;
 if (uVar22 != 0 || uVar10 != 0) goto LAB_00101834;
 uVar22 = 0;
 uVar20 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 uVar10 = 0;
 goto LAB_001019fc;
 }
 if (uVar20 == 0) {
 if (uVar24 != 0 || uVar21 != 0) {
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101fc8;
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar25 >> 0x33 & 1) == 0) {
 if (uVar22 != 0 || uVar25 != 0) {
 uVar10 = 0;
 bVar6 = true;
 uVar15 = uVar20;
 goto LAB_001018ac;
 }
 goto LAB_001020a0;
 }
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 uVar17 = uVar22 | uVar25;
 goto LAB_0010189c;
 }
 uVar22 = uVar23;
 uVar25 = uVar16;
 lVar18 = lVar9;
 if (uVar16 == 0 && uVar23 == 0) {
LAB_001020a0:
 uVar10 = 0;
 uVar22 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 goto LAB_001019fc;
 }
LAB_00101fc8:
 uVar10 = 0;
 uVar15 = 0;
 goto LAB_00101fd0;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00101f08;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 if (uVar19 != 0x7fff) goto LAB_00101ed8;
 }
LAB_00102150:
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = (uint)uVar11;
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 == 0 && uVar21 == 0) {
LAB_001021cc:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 goto LAB_00101c44;
 }
LAB_00102168:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101c44;
 }
 if (uVar24 != 0 || uVar21 != 0) goto LAB_00101ed8;
 }
 else {
 if (uVar19 == 0x7fff) goto LAB_00102150;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101ed8:
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101c44;
 }
 goto LAB_00102168;
 }
LAB_00101f08:
 uVar11 = 0;
 if (uVar16 != 0 || uVar23 != 0) goto LAB_001021cc;
 }
 uVar22 = 0xffffffffffffffff;
 uVar10 = 0xffffffffffff;
 uVar12 = 0;
 uVar11 = 1;
 }
 else {
 if (uVar20 == 0) {
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar12 = uVar14;
 goto LAB_00101a80;
 }
 goto LAB_00101d34;
 }
 goto LAB_001019dc;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_0010182c;
 }
 }
 else {
 uVar8 = -uVar8;
 uVar24 = uVar24 | 0x8000000000000;
 }
 if (uVar19 != 0x7fff) {
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar10 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar16 - (uVar24 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar21;
 }
 uVar10 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar10 = (ulong)(uVar24 != 0 || uVar21 != 0);
 }
 uVar22 = uVar23 - uVar10;
 uVar25 = uVar16 - (uVar23 < uVar10);
 goto LAB_0010182c;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101dc8;
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
LAB_00101c44:
 if (uVar10 == 0 && uVar22 == 0) {
 uVar22 = 0;
 uVar14 = 0x7fff;
 uVar10 = 0;
 goto LAB_001018f8;
 }
 }
 uVar14 = 0x7fff;
 uVar10 = uVar10 & 0xffffffffffff | 0x800000000000;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 uVar19 = uVar20;
 lVar9 = lVar18;
 goto LAB_0010182c;
 }
 goto LAB_001017d8;
 }
 uVar19 = uVar20;
 lVar9 = lVar18;
 if (uVar20 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101a74:
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar23 = uVar21;
 uVar16 = uVar24;
 goto LAB_00101a80;
 }
LAB_00101d34:
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 uVar12 = uVar14;
 goto LAB_00101c44;
 }
LAB_001019dc:
 uVar12 = (uint)lVar9;
 uVar17 = uVar22 | uVar25;
 uVar10 = uVar22 & 7;
 bVar6 = false;
 uVar15 = uVar19;
 lVar18 = lVar9;
 if (uVar19 == 0) goto joined_r0x001019ec;
LAB_001018ac:
 if (uVar10 == 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0;
 if (bVar6) {
LAB_00101fd0:
 uVar11 = 0;
 if (((uint)uVar13 >> 0xb & 1) != 0) {
 uVar11 = 8;
 }
 }
 }
 else {
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0x400000) {
 uVar11 = 0x10;
joined_r0x00101f84:
 if (lVar18 == 0) {
LAB_00101bd4:
 bVar7 = 0xfffffffffffffff7 < uVar22;
 uVar22 = uVar22 + 8;
 if (bVar7) {
 uVar25 = uVar25 + 1;
 }
 }
 }
 else if (uVar10 == 0x800000) {
 uVar11 = 0x10;
 if (lVar18 != 0) goto LAB_00101bd4;
 }
 else {
 if (uVar10 != 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0x10;
 if (bVar6) {
 uVar11 = 0x18;
 }
 goto LAB_001018d8;
 }
 uVar11 = 0x10;
 if (((uVar22 & 0xf) != 4) &&
 (bVar7 = 0xfffffffffffffffb < uVar22, uVar22 = uVar22 + 4, bVar7)) {
 uVar25 = uVar25 + 1;
 }
 }
 uVar10 = uVar25 & 0x8000000000000;
 if (bVar6) {
 uVar11 = (ulong)((uint)uVar11 | 8);
 }
 }
LAB_001018d8:
 uVar12 = (uint)lVar18;
 uVar20 = uVar15;
 uVar23 = uVar22;
 uVar16 = uVar25;
 lVar9 = lVar18;
 if (uVar10 != 0) goto LAB_001018dc;
LAB_00101a88:
 uVar10 = uVar16 >> 3;
 uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
 if (uVar20 == 0x7fff) goto LAB_00101c44;
 }
 else {
 uVar16 = uVar16 | 0x8000000000000;
LAB_001017d8:
 if (uVar20 == 0x7fff) {
LAB_00101c24:
 lVar9 = lVar18;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101dc8;
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101c44;
 }
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar10 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar24 = uVar24 - (uVar16 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar23;
 }
 uVar10 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar10 = (ulong)(uVar16 != 0 || uVar23 != 0);
 }
 uVar22 = uVar21 - uVar10;
 uVar25 = uVar24 - (uVar21 < uVar10);
 uVar19 = uVar20;
 lVar9 = lVar18;
LAB_0010182c:
 uVar10 = uVar25 & 0x7ffffffffffff;
 uVar20 = uVar19;
 if ((uVar25 >> 0x33 & 1) == 0) goto LAB_001019dc;
LAB_00101834:
 if (uVar10 == 0) {
 uVar12 = (int)LZCOUNT(uVar22) + 0x34;
 if (uVar12 < 0x40) goto LAB_00101840;
 uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
 uVar17 = 0;
 }
 else {
 uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_00101840:
 uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
 uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
 }
 if ((long)(int)uVar12 < (long)uVar20) {
 uVar19 = uVar20 - (long)(int)uVar12;
 uVar22 = uVar17;
 uVar25 = uVar10 & 0xfff7ffffffffffff;
 goto LAB_001019dc;
 }
 iVar1 = uVar12 - (int)uVar20;
 uVar12 = iVar1 + 1;
 if ((int)uVar12 < 0x40) {
 uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
 uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
 goto LAB_00101898;
 }
 uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
 if (uVar12 == 0x40) {
 uVar22 = uVar17;
 }
 uVar25 = 0;
 uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
 uVar22 = uVar17;
LAB_0010189c:
 uVar12 = (uint)lVar9;
joined_r0x001019ec:
 if (uVar17 != 0) {
 uVar10 = uVar22 & 7;
 bVar6 = true;
 uVar15 = 0;
 lVar18 = lVar9;
 goto LAB_001018ac;
 }
 uVar22 = 0;
 uVar20 = 0;
 uVar11 = 0;
 uVar10 = 0;
 }
LAB_001019fc:
 uVar10 = uVar10 & 0xffffffffffff;
 uVar14 = (uint)uVar20 & 0x7fff;
 }
LAB_001018f8:
 uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
 if ((int)uVar11 == 0) {
LAB_00101914:
 auVar27._8_8_ = uVar10;
 auVar27._0_8_ = uVar22;
 return auVar27;
 }
LAB_00101b00:
 __sfp_handle_exceptions(uVar11);
 auVar5._8_8_ = uVar10;
 auVar5._0_8_ = uVar22;
 return auVar5;
}



/* Function: __addtf3 @ 00101760 */

undefined1 __addtf3(undefined1 param_1 [16],undefined1 param_2 [16])

{
 int iVar1;
 ulong uVar2;
 ulong uVar3;
 ulong uVar4;
 undefined1 auVar5 [16];
 bool bVar6;
 bool bVar7;
 uint uVar8;
 long lVar9;
 ulong uVar10;
 ulong uVar11;
 uint uVar12;
 ulong uVar13;
 uint uVar14;
 ulong uVar15;
 ulong uVar16;
 ulong uVar17;
 long lVar18;
 ulong uVar19;
 ulong uVar20;
 ulong uVar21;
 ulong uVar22;
 ulong uVar23;
 ulong uVar24;
 ulong uVar25;
 ulong uVar26;
 ulong uVar28;
 undefined1 auVar27 [16];
 ulong uVar29;
 
 uVar11 = ((Union128 *)param_2)->_8_8_;
 uVar29 = param_2._0_8_;
 uVar28 = param_1._8_8_;
 uVar26 = param_1._0_8_;
 uVar13 = fpcr;
 uVar3 = (uVar28 & 0xffffffffffff) << 3;
 lVar18 = -((long)uVar28 >> 0x3f);
 uVar12 = (uint)lVar18;
 lVar9 = -((long)uVar11 >> 0x3f);
 uVar14 = (uint)lVar9;
 uVar2 = uVar11 << 3;
 uVar4 = uVar2 & 0x7fffffffffff8;
 uVar10 = uVar26 >> 0x3d;
 uVar24 = uVar3 | uVar10;
 uVar20 = uVar28 >> 0x30 & 0x7fff;
 uVar19 = uVar11 >> 0x30 & 0x7fff;
 uVar17 = uVar29 >> 0x3d;
 uVar16 = uVar4 | uVar17;
 uVar21 = uVar26 * 8;
 uVar23 = uVar29 * 8;
 uVar22 = uVar21;
 uVar25 = uVar24;
 if ((long)uVar11 >> 0x3f == (long)uVar28 >> 0x3f) {
 uVar8 = (int)uVar20 - (int)uVar19;
 lVar9 = lVar18;
 if ((int)uVar8 < 1) {
 if (uVar8 != 0) {
 if (uVar20 == 0) {
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar19 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar16 != 0 || uVar23 != 0) {
 uVar11 = uVar4 >> 0x32 ^ 1;
 goto LAB_00101a80;
 }
 goto LAB_00101d34;
 }
 goto LAB_001019dc;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 uVar20 = uVar19;
 goto LAB_00101b98;
 }
 }
 else {
 uVar8 = -uVar8;
 uVar24 = uVar24 | 0x8000000000000;
 }
 if (uVar19 != 0x7fff) {
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar17 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar16 + (uVar24 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar21;
 }
 uVar17 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar17 = (ulong)(uVar24 != 0 || uVar21 != 0);
 }
 uVar10 = uVar17 + uVar23;
 uVar20 = uVar19;
 if (CARRY8(uVar17,uVar23)) {
 uVar16 = uVar16 + 1;
 }
 goto LAB_00101b98;
 }
 if (uVar16 != 0 || uVar23 != 0) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 goto LAB_00101c44;
 }
LAB_00101dc8:
 uVar22 = 0;
 uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
 goto LAB_00101914;
 }
 uVar15 = uVar20 + 1;
 if ((uVar15 & 0x7ffe) == 0) {
 if (uVar20 != 0) {
 uVar8 = 0;
 uVar11 = 0;
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00102050;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101dc8;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar8 = (uint)uVar11;
 if (uVar19 != 0x7fff) goto LAB_001021f8;
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00102290;
 }
LAB_001022bc:
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00102200:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101c44;
 }
LAB_00102050:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 }
 else {
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) goto LAB_001022bc;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101dc8;
 }
 else {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00102050;
LAB_001021f8:
 if (uVar16 != 0 || uVar23 != 0) goto LAB_00102200;
 }
LAB_00102290:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 }
 goto LAB_00101c44;
 }
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 goto LAB_001019fc;
 }
 goto LAB_00101fc8;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101fc8;
 uVar22 = uVar21 + uVar23;
 uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 if ((uVar25 >> 0x33 & 1) != 0) {
 uVar25 = uVar25 & 0xfff7ffffffffffff;
 uVar10 = 0;
 bVar6 = false;
 uVar15 = 1;
 goto LAB_001018ac;
 }
LAB_00101898:
 uVar17 = uVar22 | uVar25;
 goto LAB_0010189c;
 }
 if (uVar15 != 0x7fff) {
 uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 bVar6 = false;
 uVar10 = uVar21 + uVar23 >> 1 & 7;
 uVar25 = uVar17 >> 1;
 uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
 goto LAB_001018ac;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 != 0) {
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_001022a0:
 uVar11 = 0x14;
 lVar18 = 0;
 goto LAB_00101aec;
 }
 if (uVar10 == 0x800000) {
 if (lVar18 == 0) goto LAB_0010223c;
LAB_00102108:
 uVar11 = 0x14;
 lVar18 = 1;
 goto LAB_00101aec;
 }
LAB_00101f64:
 uVar14 = 0x14;
 if ((uVar13 & 0xc00000) == 0x400000) {
 uVar22 = 0xffffffffffffffff;
 uVar15 = 0x7ffe;
 bVar6 = false;
 uVar11 = 0x14;
 uVar25 = uVar22;
 goto joined_r0x00101f84;
 }
 goto LAB_00101aa8;
 }
LAB_00101ff4:
 uVar11 = 0x14;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar10 = uVar21 + uVar23;
 uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
 goto LAB_00101b98;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101dc8;
 goto LAB_00101a74;
 }
 goto LAB_00101970;
 }
 uVar19 = uVar20;
 if (uVar20 != 0x7fff) goto LAB_001019dc;
 uVar14 = uVar12;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101d34;
 uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
 uVar23 = uVar21;
 uVar16 = uVar24;
LAB_00101a80:
 uVar20 = 0x7fff;
 goto LAB_00101a88;
 }
 uVar16 = uVar16 | 0x8000000000000;
 if (uVar20 == 0x7fff) goto LAB_00101c24;
LAB_00101970:
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar17 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar24 + (uVar16 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar23;
 }
 uVar17 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 uVar16 = uVar24;
 }
 }
 else {
 uVar17 = (ulong)(uVar16 != 0 || uVar23 != 0);
 uVar16 = uVar24;
 }
 uVar10 = uVar17 + uVar21;
 if (CARRY8(uVar17,uVar21)) {
 uVar16 = uVar16 + 1;
 }
LAB_00101b98:
 uVar19 = uVar20;
 uVar22 = uVar10;
 uVar25 = uVar16;
 if ((uVar16 >> 0x33 & 1) == 0) goto LAB_001019dc;
 uVar15 = uVar20 + 1;
 if (uVar15 != 0x7fff) {
 bVar6 = false;
 uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
 uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
 uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
 goto LAB_001018ac;
 }
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0) goto LAB_00101ff4;
 if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_001022a0;
 if (uVar10 != 0x800000) goto LAB_00101f64;
 if (lVar18 != 0) goto LAB_00102108;
LAB_0010223c:
 uVar22 = 0xffffffffffffffff;
 lVar18 = 0;
 uVar15 = 0x7ffe;
 uVar11 = 0x14;
 uVar25 = uVar22;
LAB_001018dc:
 uVar14 = (uint)uVar11;
 uVar12 = (uint)lVar18;
 if (uVar15 + 1 != 0x7fff) {
 uVar10 = uVar25 >> 3 & 0xffffffffffff;
 uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
 uVar14 = (uint)(uVar15 + 1) & 0x7fff;
 goto LAB_001018f8;
 }
LAB_00101aa8:
 uVar12 = (uint)lVar18;
 uVar13 = uVar13 & 0xc00000;
 if (uVar13 != 0) {
 if (uVar13 == 0x400000) {
 if (lVar9 != 0) goto LAB_00101ac4;
 }
 else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00101ac4:
 uVar22 = 0xffffffffffffffff;
 uVar11 = (ulong)(uVar14 | 0x14);
 uVar10 = 0x1fffffffffffffff;
 uVar20 = 0x7ffe;
 goto LAB_001019fc;
 }
 }
 uVar11 = (ulong)(uVar14 | 0x14);
 }
LAB_00101aec:
 uVar22 = 0;
 uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
 goto LAB_00101b00;
 }
 uVar8 = (int)uVar20 - (int)uVar19;
 if ((int)uVar8 < 1) {
 if (uVar8 == 0) {
 uVar11 = 0;
 if ((uVar20 + 1 & 0x7ffe) != 0) {
 uVar22 = uVar21 + uVar29 * -8;
 uVar10 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar10 >> 0x33 & 1) != 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar10 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_00101834;
 }
 lVar9 = lVar18;
 if (uVar22 != 0 || uVar10 != 0) goto LAB_00101834;
 uVar22 = 0;
 uVar20 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 uVar10 = 0;
 goto LAB_001019fc;
 }
 if (uVar20 == 0) {
 if (uVar24 != 0 || uVar21 != 0) {
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101fc8;
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 if ((uVar25 >> 0x33 & 1) == 0) {
 if (uVar22 != 0 || uVar25 != 0) {
 uVar10 = 0;
 bVar6 = true;
 uVar15 = uVar20;
 goto LAB_001018ac;
 }
 goto LAB_001020a0;
 }
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 uVar17 = uVar22 | uVar25;
 goto LAB_0010189c;
 }
 uVar22 = uVar23;
 uVar25 = uVar16;
 lVar18 = lVar9;
 if (uVar16 == 0 && uVar23 == 0) {
LAB_001020a0:
 uVar10 = 0;
 uVar22 = 0;
 uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
 goto LAB_001019fc;
 }
LAB_00101fc8:
 uVar10 = 0;
 uVar15 = 0;
 goto LAB_00101fd0;
 }
 if (uVar20 == 0x7fff) {
 if (uVar24 == 0 && uVar21 == 0) {
 if (uVar19 != 0x7fff) goto LAB_00101f08;
 }
 else {
 uVar11 = uVar3 >> 0x32 ^ 1;
 if (uVar19 != 0x7fff) goto LAB_00101ed8;
 }
LAB_00102150:
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = (uint)uVar11;
 if ((uVar2 & 0x4000000000000) == 0) {
 uVar8 = 1;
 }
 uVar11 = (ulong)uVar8;
 if (uVar24 == 0 && uVar21 == 0) {
LAB_001021cc:
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 goto LAB_00101c44;
 }
LAB_00102168:
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
 }
 goto LAB_00101c44;
 }
 if (uVar24 != 0 || uVar21 != 0) goto LAB_00101ed8;
 }
 else {
 if (uVar19 == 0x7fff) goto LAB_00102150;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101ed8:
 if (uVar16 == 0 && uVar23 == 0) {
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101c44;
 }
 goto LAB_00102168;
 }
LAB_00101f08:
 uVar11 = 0;
 if (uVar16 != 0 || uVar23 != 0) goto LAB_001021cc;
 }
 uVar22 = 0xffffffffffffffff;
 uVar10 = 0xffffffffffff;
 uVar12 = 0;
 uVar11 = 1;
 }
 else {
 if (uVar20 == 0) {
 if (uVar24 == 0 && uVar21 == 0) {
 uVar22 = uVar23;
 uVar25 = uVar16;
 if (uVar19 == 0x7fff) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar12 = uVar14;
 goto LAB_00101a80;
 }
 goto LAB_00101d34;
 }
 goto LAB_001019dc;
 }
 uVar8 = ~uVar8;
 if (uVar8 == 0) {
 uVar22 = uVar23 + uVar26 * -8;
 uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
 goto LAB_0010182c;
 }
 }
 else {
 uVar8 = -uVar8;
 uVar24 = uVar24 | 0x8000000000000;
 }
 if (uVar19 != 0x7fff) {
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar10 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar16 = uVar16 - (uVar24 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar21;
 }
 uVar10 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar10 = (ulong)(uVar24 != 0 || uVar21 != 0);
 }
 uVar22 = uVar23 - uVar10;
 uVar25 = uVar16 - (uVar23 < uVar10);
 goto LAB_0010182c;
 }
 if (uVar16 == 0 && uVar23 == 0) goto LAB_00101dc8;
 uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
 uVar11 = uVar4 >> 0x32 ^ 1;
 uVar10 = uVar4 >> 3;
 uVar12 = uVar14;
LAB_00101c44:
 if (uVar10 == 0 && uVar22 == 0) {
 uVar22 = 0;
 uVar14 = 0x7fff;
 uVar10 = 0;
 goto LAB_001018f8;
 }
 }
 uVar14 = 0x7fff;
 uVar10 = uVar10 & 0xffffffffffff | 0x800000000000;
 }
 else {
 if (uVar19 == 0) {
 if (uVar16 != 0 || uVar23 != 0) {
 uVar8 = uVar8 - 1;
 if (uVar8 == 0) {
 uVar22 = uVar21 + uVar29 * -8;
 uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
 uVar19 = uVar20;
 lVar9 = lVar18;
 goto LAB_0010182c;
 }
 goto LAB_001017d8;
 }
 uVar19 = uVar20;
 lVar9 = lVar18;
 if (uVar20 == 0x7fff) {
 uVar14 = uVar12;
 if (uVar24 != 0 || uVar21 != 0) {
LAB_00101a74:
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar23 = uVar21;
 uVar16 = uVar24;
 goto LAB_00101a80;
 }
LAB_00101d34:
 uVar22 = 0;
 uVar11 = 0;
 uVar10 = 0;
 uVar12 = uVar14;
 goto LAB_00101c44;
 }
LAB_001019dc:
 uVar12 = (uint)lVar9;
 uVar17 = uVar22 | uVar25;
 uVar10 = uVar22 & 7;
 bVar6 = false;
 uVar15 = uVar19;
 lVar18 = lVar9;
 if (uVar19 == 0) goto joined_r0x001019ec;
LAB_001018ac:
 if (uVar10 == 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0;
 if (bVar6) {
LAB_00101fd0:
 uVar11 = 0;
 if (((uint)uVar13 >> 0xb & 1) != 0) {
 uVar11 = 8;
 }
 }
 }
 else {
 uVar10 = uVar13 & 0xc00000;
 if (uVar10 == 0x400000) {
 uVar11 = 0x10;
joined_r0x00101f84:
 if (lVar18 == 0) {
LAB_00101bd4:
 bVar7 = 0xfffffffffffffff7 < uVar22;
 uVar22 = uVar22 + 8;
 if (bVar7) {
 uVar25 = uVar25 + 1;
 }
 }
 }
 else if (uVar10 == 0x800000) {
 uVar11 = 0x10;
 if (lVar18 != 0) goto LAB_00101bd4;
 }
 else {
 if (uVar10 != 0) {
 uVar10 = uVar25 & 0x8000000000000;
 uVar11 = 0x10;
 if (bVar6) {
 uVar11 = 0x18;
 }
 goto LAB_001018d8;
 }
 uVar11 = 0x10;
 if (((uVar22 & 0xf) != 4) &&
 (bVar7 = 0xfffffffffffffffb < uVar22, uVar22 = uVar22 + 4, bVar7)) {
 uVar25 = uVar25 + 1;
 }
 }
 uVar10 = uVar25 & 0x8000000000000;
 if (bVar6) {
 uVar11 = (ulong)((uint)uVar11 | 8);
 }
 }
LAB_001018d8:
 uVar12 = (uint)lVar18;
 uVar20 = uVar15;
 uVar23 = uVar22;
 uVar16 = uVar25;
 lVar9 = lVar18;
 if (uVar10 != 0) goto LAB_001018dc;
LAB_00101a88:
 uVar10 = uVar16 >> 3;
 uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
 if (uVar20 == 0x7fff) goto LAB_00101c44;
 }
 else {
 uVar16 = uVar16 | 0x8000000000000;
LAB_001017d8:
 if (uVar20 == 0x7fff) {
LAB_00101c24:
 lVar9 = lVar18;
 if (uVar24 == 0 && uVar21 == 0) goto LAB_00101dc8;
 uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
 uVar11 = uVar3 >> 0x32 ^ 1;
 uVar10 = uVar28 & 0xffffffffffff;
 goto LAB_00101c44;
 }
 if ((int)uVar8 < 0x75) {
 if ((int)uVar8 < 0x40) {
 uVar10 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
 (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
 uVar24 = uVar24 - (uVar16 >> ((ulong)uVar8 & 0x3f));
 }
 else {
 uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
 if (uVar8 - 0x40 == 0) {
 uVar10 = uVar23;
 }
 uVar10 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
 }
 }
 else {
 uVar10 = (ulong)(uVar16 != 0 || uVar23 != 0);
 }
 uVar22 = uVar21 - uVar10;
 uVar25 = uVar24 - (uVar21 < uVar10);
 uVar19 = uVar20;
 lVar9 = lVar18;
LAB_0010182c:
 uVar10 = uVar25 & 0x7ffffffffffff;
 uVar20 = uVar19;
 if ((uVar25 >> 0x33 & 1) == 0) goto LAB_001019dc;
LAB_00101834:
 if (uVar10 == 0) {
 uVar12 = (int)LZCOUNT(uVar22) + 0x34;
 if (uVar12 < 0x40) goto LAB_00101840;
 uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
 uVar17 = 0;
 }
 else {
 uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_00101840:
 uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
 uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
 }
 if ((long)(int)uVar12 < (long)uVar20) {
 uVar19 = uVar20 - (long)(int)uVar12;
 uVar22 = uVar17;
 uVar25 = uVar10 & 0xfff7ffffffffffff;
 goto LAB_001019dc;
 }
 iVar1 = uVar12 - (int)uVar20;
 uVar12 = iVar1 + 1;
 if ((int)uVar12 < 0x40) {
 uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
 uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
 goto LAB_00101898;
 }
 uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
 if (uVar12 == 0x40) {
 uVar22 = uVar17;
 }
 uVar25 = 0;
 uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
 uVar22 = uVar17;
LAB_0010189c:
 uVar12 = (uint)lVar9;
joined_r0x001019ec:
 if (uVar17 != 0) {
 uVar10 = uVar22 & 7;
 bVar6 = true;
 uVar15 = 0;
 lVar18 = lVar9;
 goto LAB_001018ac;
 }
 uVar22 = 0;
 uVar20 = 0;
 uVar11 = 0;
 uVar10 = 0;
 }
LAB_001019fc:
 uVar10 = uVar10 & 0xffffffffffff;
 uVar14 = (uint)uVar20 & 0x7fff;
 }
LAB_001018f8:
 uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
 if ((int)uVar11 == 0) {
LAB_00101914:
 auVar27._8_8_ = uVar10;
 auVar27._0_8_ = uVar22;
 return auVar27;
 }
LAB_00101b00:
 __sfp_handle_exceptions(uVar11);
 auVar5._8_8_ = uVar10;
 auVar5._0_8_ = uVar22;
 return auVar5;
}



/* Function: __multf3 @ 00102300 */

undefined1 [16] __multf3(undefined1 param_1 [16],undefined1 param_2 [16])

{
 ulong uVar1;
 undefined1 auVar2 [16];
 bool bVar3;
 uint uVar4;
 uint uVar5;
 ulong uVar6;
 ulong uVar7;
 int iVar8;
 long lVar9;
 ulong uVar10;
 ulong uVar11;
 long lVar12;
 long lVar13;
 ulong uVar14;
 ulong uVar15;
 ulong uVar16;
 ulong uVar17;
 ulong uVar18;
 ulong uVar19;
 long lVar20;
 ulong uVar21;
 ulong uVar22;
 long lVar23;
 long lVar24;
 ulong uVar25;
 ulong uVar26;
 ulong uVar27;
 ulong uVar28;
 ulong uVar29;
 ulong uVar30;
 undefined1 auVar31 [16];
 
 uVar21 = param_2._8_8_;
 uVar17 = param_2._0_8_;
 uVar11 = param_1._8_8_;
 uVar15 = param_1._0_8_;
 uVar18 = fpcr;
 uVar10 = uVar11 >> 0x3f;
 uVar19 = uVar11 & 0xffffffffffff;
 uVar11 = uVar11 >> 0x30 & 0x7fff;
 iVar8 = (int)uVar11;
 if (iVar8 == 0) {
 if (uVar15 == 0 && uVar19 == 0) {
 uVar19 = 0;
 uVar7 = 4;
 lVar13 = 0;
 lVar24 = 1;
 uVar6 = 0;
 uVar11 = 0;
 }
 else {
 if (uVar19 == 0) {
 uVar11 = LZCOUNT(uVar15) + 0x31;
 iVar8 = (int)uVar11;
 lVar13 = LZCOUNT(uVar15) + 0x40;
 if (uVar11 < 0x3d) goto LAB_00102758;
 uVar11 = 0;
 uVar19 = uVar15 << ((ulong)(iVar8 - 0x3d) & 0x3f);
 }
 else {
 lVar13 = LZCOUNT(uVar19);
 iVar8 = (int)lVar13 + -0xf;
LAB_00102758:
 uVar19 = uVar15 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar19 << ((ulong)(iVar8 + 3) & 0x3f);
 uVar11 = uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
 }
 uVar7 = 0;
 lVar13 = -0x3fef - lVar13;
 lVar24 = 0;
 uVar6 = 0;
 }
 }
 else if (iVar8 == 0x7fff) {
 if (uVar15 == 0 && uVar19 == 0) {
 uVar19 = 0;
 uVar7 = 8;
 lVar13 = 0x7fff;
 lVar24 = 2;
 uVar6 = 0;
 uVar11 = 0;
 }
 else {
 uVar6 = uVar19 >> 0x2f ^ 1;
 uVar7 = 0xc;
 lVar13 = 0x7fff;
 lVar24 = 3;
 uVar11 = uVar15;
 }
 }
 else {
 uVar19 = uVar15 >> 0x3d | uVar19 << 3 | 0x8000000000000;
 lVar13 = uVar11 - 0x3fff;
 lVar24 = 0;
 uVar7 = 0;
 uVar6 = 0;
 uVar11 = uVar15 << 3;
 }
 uVar14 = uVar21 >> 0x3f;
 uVar15 = uVar21 & 0xffffffffffff;
 uVar22 = uVar21 >> 0x30 & 0x7fff;
 iVar8 = (int)uVar22;
 uVar4 = param_1._12_4_;
 uVar5 = param_2._12_4_;
 if (iVar8 == 0) {
 if (uVar17 == 0 && uVar15 == 0) {
 uVar7 = uVar7 | 1;
 lVar23 = lVar13 + 1;
 uVar21 = 0;
 uVar17 = 0;
 lVar12 = 1;
 lVar20 = lVar13;
 }
 else {
 if (uVar15 == 0) {
 uVar21 = LZCOUNT(uVar17) + 0x31;
 iVar8 = (int)uVar21;
 lVar23 = LZCOUNT(uVar17) + 0x40;
 if (uVar21 < 0x3d) goto LAB_001026fc;
 uVar21 = uVar17 << ((ulong)(iVar8 - 0x3d) & 0x3f);
 uVar17 = 0;
 }
 else {
 lVar23 = LZCOUNT(uVar15);
 iVar8 = (int)lVar23 + -0xf;
LAB_001026fc:
 uVar21 = uVar17 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
 uVar17 = uVar17 << ((ulong)(iVar8 + 3) & 0x3f);
 }
 lVar20 = (lVar13 - lVar23) + -0x3fef;
 lVar23 = (lVar13 - lVar23) + -0x3fee;
 lVar12 = 0;
 }
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 if (uVar7 < 0xb) {
LAB_0010240c:
 uVar15 = uVar21;
 if (2 < uVar7) {
LAB_00102488:
 uVar7 = 1L << uVar7;
 uVar25 = uVar11;
 uVar21 = uVar19;
 uVar26 = uVar22;
 lVar9 = lVar24;
 if ((uVar7 & 0x530) == 0) {
 if ((uVar7 & 0x240) != 0) {
 uVar6 = 1;
 uVar15 = 0xffffffffffff;
 uVar4 = 0x7fff;
 uVar11 = 0xffffffffffffffff;
 uVar10 = 0;
 goto LAB_0010243c;
 }
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 lVar9 = lVar12;
 if ((uVar7 & 0x88) == 0) goto LAB_0010252c;
 }
LAB_001024cc:
 lVar12 = lVar9;
 uVar14 = uVar26;
 uVar17 = uVar25;
 uVar22 = uVar14;
 if (lVar12 == 2) {
LAB_0010251c:
 uVar4 = 0x7fff;
 uVar15 = 0;
 uVar11 = 0;
 uVar10 = uVar22;
 goto LAB_0010243c;
 }
 goto LAB_001024e8;
 }
 if (uVar7 - 1 < 2) {
 if (lVar12 == 2) goto LAB_0010251c;
 goto LAB_00102428;
 }
LAB_0010252c:
 uVar29 = uVar17 & 0xffffffff;
 uVar25 = uVar11 >> 0x20;
 uVar7 = uVar15 & 0xffffffff;
 uVar11 = uVar11 & 0xffffffff;
 uVar17 = uVar17 >> 0x20;
 uVar15 = uVar15 >> 0x20;
 uVar26 = uVar25 * uVar29;
 uVar28 = uVar19 >> 0x20;
 uVar14 = uVar25 * uVar7;
 uVar19 = uVar19 & 0xffffffff;
 uVar10 = uVar26 + uVar17 * uVar11 + (uVar29 * uVar11 >> 0x20);
 uVar21 = uVar14 + uVar15 * uVar11 + (uVar11 * uVar7 >> 0x20);
 uVar27 = uVar28 * uVar29;
 uVar30 = uVar28 * uVar7;
 lVar13 = uVar25 * uVar17 + 0x100000000;
 if (uVar26 < uVar10 || uVar26 - uVar10 == 0) {
 lVar13 = uVar25 * uVar17;
 }
 uVar26 = (uVar11 * uVar7 & 0xffffffff) + (uVar21 << 0x20);
 uVar1 = uVar27 + uVar17 * uVar19 + (uVar29 * uVar19 >> 0x20);
 uVar16 = uVar30 + uVar15 * uVar19 + (uVar19 * uVar7 >> 0x20);
 lVar24 = uVar25 * uVar15 + 0x100000000;
 if (uVar14 < uVar21 || uVar14 - uVar21 == 0) {
 lVar24 = uVar25 * uVar15;
 }
 uVar14 = uVar26 + (uVar10 >> 0x20) + lVar13;
 lVar13 = uVar17 * uVar28 + 0x100000000;
 if (uVar27 < uVar1 || uVar27 - uVar1 == 0) {
 lVar13 = uVar17 * uVar28;
 }
 uVar17 = lVar24 + (uVar21 >> 0x20);
 uVar21 = (uVar19 * uVar7 & 0xffffffff) + (uVar16 << 0x20);
 lVar24 = uVar15 * uVar28 + 0x100000000;
 if (uVar30 < uVar16 || uVar30 - uVar16 == 0) {
 lVar24 = uVar15 * uVar28;
 }
 uVar15 = uVar21 + uVar17;
 uVar26 = (ulong)(uVar14 < uVar26);
 uVar19 = (uVar29 * uVar19 & 0xffffffff) + (uVar1 << 0x20);
 uVar7 = uVar15 + uVar26;
 uVar16 = uVar16 >> 0x20;
 uVar25 = lVar13 + (uVar1 >> 0x20);
 if (CARRY8(uVar21,uVar17) || CARRY8(uVar15,uVar26)) {
 uVar16 = uVar16 + 1;
 }
 uVar15 = uVar14 + uVar19;
 uVar21 = (ulong)CARRY8(uVar14,uVar19);
 uVar17 = uVar7 + uVar25;
 uVar19 = uVar17 + uVar21;
 if (CARRY8(uVar7,uVar25) || CARRY8(uVar17,uVar21)) {
 lVar24 = lVar24 + 1;
 }
 uVar10 = (ulong)((uVar29 * uVar11 & 0xffffffff) + (uVar10 << 0x20) != 0 ||
 (uVar15 & 0x7ffffffffffff) != 0);
 uVar15 = uVar15 >> 0x33;
 uVar17 = uVar10 | uVar15 | uVar19 * 0x2000;
 uVar19 = uVar19 >> 0x33;
 uVar21 = uVar19 | (lVar24 + uVar16) * 0x2000;
 if ((lVar24 + uVar16 >> 0x27 & 1) != 0) {
 uVar17 = uVar10 | uVar15 & 1 | uVar17 >> 1 | uVar19 << 0x3f;
 uVar21 = uVar21 >> 1;
 lVar20 = lVar23;
 }
LAB_0010268c:
 lVar13 = lVar20 + 0x3fff;
 uVar5 = (uint)uVar6;
 uVar10 = uVar22;
 if (lVar13 < 1) {
 uVar19 = 1 - lVar13;
 if ((long)uVar19 < 0x75) {
 iVar8 = (int)uVar19;
 if ((long)uVar19 < 0x40) {
 uVar11 = (ulong)(uVar17 << ((ulong)(0x40 - iVar8) & 0x3f) != 0);
 uVar17 = uVar21 << ((ulong)(0x40 - iVar8) & 0x3f) | uVar17 >> (uVar19 & 0x3f);
 uVar15 = uVar21 >> (uVar19 & 0x3f);
 uVar19 = uVar17 | uVar11;
 if ((uVar17 & 7) != 0 || uVar11 != 0) goto LAB_00102874;
 if ((uVar15 >> 0x33 & 1) == 0) goto LAB_001029bc;
LAB_00102a28:
 uVar6 = (ulong)(uVar5 | 0x18);
 uVar17 = 1;
 uVar15 = 0;
 uVar11 = 0;
 }
 else {
 uVar11 = uVar17 | uVar21 << ((ulong)(0x80 - iVar8) & 0x3f);
 if (uVar19 == 0x40) {
 uVar11 = uVar17;
 }
 uVar21 = uVar21 >> ((ulong)(iVar8 - 0x40) & 0x3f);
 uVar19 = uVar11 != 0 | uVar21;
 uVar15 = 0;
 if ((ulong)(uVar11 != 0) == 0 && (uVar21 & 7) == 0) {
LAB_001029bc:
 uVar17 = 0;
 uVar4 = 0;
 uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
 uVar15 = uVar15 >> 3 & 0xffffffffffff;
 if (((uint)uVar18 >> 0xb & 1) == 0) goto LAB_0010243c;
 uVar6 = (ulong)(uVar5 | 8);
 }
 else {
 uVar15 = 0;
LAB_00102874:
 uVar18 = uVar18 & 0xc00000;
 if (uVar18 == 0x400000) {
 if (uVar22 == 0) {
LAB_00102a1c:
 bVar3 = 0xfffffffffffffff7 < uVar19;
 uVar19 = uVar19 + 8;
 if (bVar3) {
 uVar15 = uVar15 + 1;
 }
 }
 }
 else if (uVar18 == 0x800000) {
 if (uVar22 != 0) goto LAB_00102a1c;
 }
 else if (((uVar18 == 0) && ((uVar19 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
 uVar15 = uVar15 + 1;
 }
 if ((uVar15 >> 0x33 & 1) != 0) goto LAB_00102a28;
 uVar6 = (ulong)(uVar5 | 0x18);
 uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
 uVar17 = 0;
 uVar15 = uVar15 >> 3 & 0xffffffffffff;
 }
 }
 }
 else {
 uVar11 = 0;
 if (uVar17 != 0 || uVar21 != 0) {
 uVar5 = uVar5 | 0x10;
 uVar11 = 1 - uVar22;
 if (((uVar18 & 0xc00000) != 0x400000) &&
 (uVar11 = uVar22, (uVar18 & 0xc00000) != 0x800000)) {
 uVar11 = 0;
 }
 }
 uVar6 = (ulong)(uVar5 | 8);
 uVar17 = 0;
 uVar15 = 0;
 }
 }
 else {
 if ((uVar17 & 7) != 0) {
 uVar19 = uVar18 & 0xc00000;
 uVar6 = (ulong)(uVar5 | 0x10);
 if (uVar19 == 0x400000) {
 if (uVar22 == 0) {
LAB_00102a0c:
 bVar3 = 0xfffffffffffffff7 < uVar17;
 uVar17 = uVar17 + 8;
 if (bVar3) {
 uVar21 = uVar21 + 1;
 }
 }
 }
 else if (uVar19 == 0x800000) {
 if (uVar22 != 0) goto LAB_00102a0c;
 }
 else if (((uVar19 == 0) && ((uVar17 & 0xf) != 4)) &&
 (bVar3 = 0xfffffffffffffffb < uVar17, uVar17 = uVar17 + 4, bVar3)) {
 uVar21 = uVar21 + 1;
 }
 }
 if ((uVar21 >> 0x34 & 1) != 0) {
 uVar21 = uVar21 & 0xffefffffffffffff;
 lVar13 = lVar20 + 0x4000;
 }
 if (lVar13 < 0x7fff) {
 uVar15 = uVar21 >> 3 & 0xffffffffffff;
 uVar4 = (uint)lVar13 & 0x7fff;
 uVar11 = uVar17 >> 3 | uVar21 << 0x3d;
 goto LAB_0010243c;
 }
 uVar18 = uVar18 & 0xc00000;
 uVar4 = 0x7ffe;
 if (uVar18 == 0x400000) {
 bVar3 = uVar22 != 0;
 if (!bVar3) {
 uVar4 = 0x7fff;
 }
 uVar17 = (ulong)uVar4;
 uVar15 = 0xffffffffffff;
 if (!bVar3) {
 uVar15 = 0;
 }
 uVar11 = -(ulong)bVar3;
 }
 else if (uVar18 == 0x800000) {
 bVar3 = uVar22 == 0;
 if (!bVar3) {
 uVar4 = 0x7fff;
 }
 uVar17 = (ulong)uVar4;
 uVar15 = 0xffffffffffff;
 if (!bVar3) {
 uVar15 = 0;
 }
 uVar11 = -(ulong)bVar3;
 }
 else {
 uVar17 = 0x7fff;
 uVar15 = 0;
 uVar11 = 0;
 if (uVar18 != 0) {
 uVar17 = 0x7ffe;
 uVar15 = 0xffffffffffff;
 uVar11 = 0xffffffffffffffff;
 }
 }
 uVar6 = (ulong)((uint)uVar6 | 0x14);
 }
 uVar15 = uVar15 | uVar17 << 0x30 | uVar22 << 0x3f;
 goto LAB_001028f4;
 }
LAB_001023c0:
 if (uVar7 != 0xb) {
LAB_001023c8:
 uVar25 = uVar11;
 uVar21 = uVar19;
 uVar26 = uVar10;
 lVar9 = lVar24;
 goto LAB_001024cc;
 }
LAB_001024e8:
 uVar22 = uVar14;
 if (lVar12 == 3) {
 uVar15 = uVar21 & 0xffffffffffff | 0x800000000000;
 uVar4 = 0x7fff;
 uVar11 = uVar17;
 uVar10 = uVar14;
 }
 else {
LAB_00102428:
 lVar20 = lVar23;
 if (lVar12 != 1) goto LAB_0010268c;
 uVar4 = 0;
 uVar15 = 0;
 uVar11 = 0;
 uVar10 = uVar22;
 }
 }
 else {
 if (iVar8 != 0x7fff) {
 lVar20 = (uVar22 - 0x3fff) + lVar13;
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 uVar21 = uVar17 >> 0x3d | uVar15 << 3 | 0x8000000000000;
 uVar17 = uVar17 << 3;
 lVar23 = lVar20 + 1;
 lVar12 = 0;
 if (10 < uVar7) goto LAB_001023c0;
 goto LAB_0010240c;
 }
 lVar20 = lVar13 + 0x7fff;
 if (uVar17 != 0 || uVar15 != 0) {
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 uVar7 = uVar7 | 3;
 lVar23 = lVar13 + 0x8000;
 uVar4 = (uint)uVar6;
 if ((uVar21 & 0x800000000000) == 0) {
 uVar4 = 1;
 }
 uVar6 = (ulong)uVar4;
 lVar12 = 3;
 if (10 < uVar7) {
 lVar9 = 3;
 goto LAB_00102a64;
 }
 goto LAB_00102488;
 }
 uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
 uVar7 = uVar7 | 2;
 lVar23 = lVar13 + 0x8000;
 uVar17 = 0;
 if (uVar7 < 0xb) {
 uVar21 = 0;
 lVar12 = 2;
 goto LAB_0010240c;
 }
 lVar9 = 2;
 uVar15 = 0;
LAB_00102a64:
 lVar23 = lVar13 + 0x8000;
 if (uVar7 != 0xf) {
 uVar25 = uVar17;
 uVar21 = uVar15;
 uVar26 = uVar14;
 if (uVar7 != 0xb) goto LAB_001023c8;
 goto LAB_001024cc;
 }
 if (((uVar19 >> 0x2f & 1) == 0) || (uVar15 >> 0x2f != 0)) {
 uVar15 = uVar19 & 0xffffffffffff | 0x800000000000;
 uVar4 = 0x7fff;
 }
 else {
 uVar15 = uVar15 | 0x800000000000;
 uVar4 = 0x7fff;
 uVar11 = uVar17;
 uVar10 = uVar14;
 }
 }
LAB_0010243c:
 uVar15 = uVar15 | (ulong)(uVar4 | (int)uVar10 << 0xf) << 0x30;
 if ((int)uVar6 == 0) {
 auVar31._8_8_ = uVar15;
 auVar31._0_8_ = uVar11;
 return auVar31;
 }
LAB_001028f4:
 __sfp_handle_exceptions(uVar6);
 auVar2._8_8_ = uVar15;
 auVar2._0_8_ = uVar11;
 return auVar2;
}



/* Function: __sfp_handle_exceptions @ 00102b00 */

ulong __sfp_handle_exceptions(ulong param_1)

{
 undefined8 uVar1;
 uint uVar2;
 
 uVar2 = (uint)param_1;
 if ((param_1 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 1 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 2 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 3 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar2 >> 4 & 1) != 0) {
 param_1 = fpsr;
 }
 return param_1;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
