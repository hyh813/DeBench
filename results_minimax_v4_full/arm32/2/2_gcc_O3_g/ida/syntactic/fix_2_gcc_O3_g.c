/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/2/2_gcc_O3_g
 * Processor: arm
 */

#include <stdbool.h>

/* Struct definitions */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prev;
} DNode;

typedef struct Point3D {
    int x;
    int y;
    int z;
} Point3D;

typedef union UnionData {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef struct Rect {
    struct { int x, y; } position;
    struct { int width, height; } size;
} Rect;

typedef struct Widget {
    struct { struct { int x, y, z; } position; } bounds;
    struct { struct { int r, g, b; } fill; } style;
} Widget;

typedef enum State {
    STATE_START = 0,
    STATE_RUNNING = 1,
    STATE_STOPPED = 2
} State;

typedef struct Device {
    int (*process)(void *data);
    void *data;
} Device;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct Graph {
    int numVertices;
    int *vertices;
} Graph;

typedef struct Flags {
    unsigned char a;
    unsigned short b;
} Flags;

/* External string constants */
extern char s[17];
extern char asc_124C4[18];
extern char asc_125F0[22];
extern char asc_12798[26];

/* Forward declaration for test functions */
void test_data_types_l1(void);
void test_array_types(void);
void test_pointer_types(void);
void test_composite_types(void);

/* Forward declaration for weak function */
__attribute__((weak)) int call_weak_fn(void);

/* Switch table for enum_switch */
static const int CSWTCH_73[] = {0, 10, 50};

/* Helper macros for 64-bit manipulation */
#define LODWORD(x) ((unsigned int) (x))
#define HIDWORD(x) ((unsigned int) (((unsigned long long)(x)) >> 32))

/* Helper macros for type punning */
#define COERCE_FLOAT(x) (__extension__ (*(float *)(&(x))))
#define HIBYTE(x) (((x) >> 8) & 0xFF)

/* Helper macro for unsigned long long casting */
#define __PAIR64__(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))
#define __SPAIR64__(hi, lo) (((long long)(hi) << 32) | (unsigned int)(lo))

/* Helper macros for ARM condition flags */
#define __CFADD__(x, y) (((x) + (y) < (x)) || ((x) + (y) < (y)))
#define __CFSHL__(x, s) (((x) << (s)) | ((unsigned int)(x) >> (32 - (s))))

/* JUMPOUT macro for unreachable code - used as placeholder for jump tables */
#define JUMPOUT(addr) ((void)0)

/* Function: init_proc @ 0x103 */
void init_proc(void)
{
}


/* Function: sub_103A0 @ 0x103A0 */
void sub_103A0()
{
}


/* Function: main @ 0x103FC */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn */
__attribute__((weak)) int call_weak_fn(void)
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x10510 */
char process_char(char c)
{
 if ( (unsigned int)(c - 65) <= 0x19 )
 c += 32;
 return c;
}


/* Function: process_short @ 0x10524 */
short process_short(short a, short b)
{
 return a + b;
}


/* Function: process_int @ 0x10534 */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: process_long @ 0x10540 */
long process_long(long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x10548 */
long long process_ll(unsigned int v1, unsigned int v2)
{
 long long result; // r0

 result = ((unsigned long long)v1 * v1) + ((unsigned long long)v1 * v2 * 2);
 return result;
}


/* Function: process_float @ 0x1055C */
float process_float(float f)
{
 return (float)(f * 1.5) + 0.5;
}


/* Function: process_double @ 0x10574 */
double process_double(double d)
{
 return d * 0.5 + 0.1;
}
double process_ld(double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x105C4 */
bool process_bool(int x)
{
 return x > 0 && !(x & 1);
}


/* Function: const_param @ 0x105D8 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x105E4 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x105F4 */
void test_data_types_l1()
{
 puts(s);
 printf("DT-L1-01 (process_char): %c\n", 97);
 _printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 _printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 _printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 _printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 _printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000LL);
 _printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 3.5);
 _printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 2.1);
 _printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 10.0);
 _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 _printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 _printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x10758 */
int array_1d_stack(int *arr, int n)
{
 int result; // r0
 int *v4; // r3
 int *v5; // r1
 int v6; // t1

 result = 0;
 if ( n > 0 )
 {
 v4 = arr - 1;
 v5 = v4 + n;
 do
 {
 v6 = v4[1];
 ++v4;
 result += v6;
 }
 while ( v5 != v4 );
 }
 return result;
}


/* Function: array_string @ 0x10784 */
int array_string(char *str)
{
 char *v1; // r3
 int result; // r0
 int v3; // r1

 v1 = str;
 result = (unsigned char)*str;
 if ( result )
 {
 v3 = 1 - (unsigned int)v1;
 do
 result = (int)&v1[v3];
 while ( *++v1 );
 }
 return result;
}


/* Function: array_2d_stack @ 0x107AC */
int array_2d_stack(int (*arr)[10])
{
 return (*arr)[0]
 + (*arr)[11]
 + (*arr)[22]
 + (*arr)[33]
 + (*arr)[44]
 + (*arr)[55]
 + (*arr)[66]
 + (*arr)[77]
 + (*arr)[88]
 + (*arr)[99];
}


/* Function: array_3d @ 0x107FC */
int array_3d(int (*arr)[5][5])
{
 int v1; // r2
 int v2; // r3
 int v3; // r1
 int v4; // r2
 int v5; // r3

 v1 = (*arr)[8][3];
 v2 = (*arr)[0][1]
 + (*arr)[0][0]
 + (*arr)[0][2]
 + (*arr)[0][3]
 + (*arr)[0][4]
 + (*arr)[1][0]
 + (*arr)[1][1]
 + (*arr)[1][2]
 + (*arr)[1][3]
 + (*arr)[1][4]
 + (*arr)[2][0]
 + (*arr)[2][1]
 + (*arr)[2][2]
 + (*arr)[2][3]
 + (*arr)[2][4]
 + (*arr)[3][0]
 + (*arr)[3][1]
 + (*arr)[3][2]
 + (*arr)[3][3]
 + (*arr)[3][4]
 + (*arr)[4][0]
 + (*arr)[4][1]
 + (*arr)[4][2]
 + (*arr)[4][3]
 + (*arr)[4][4]
 + (*arr)[5][0]
 + (*arr)[5][1]
 + (*arr)[5][2]
 + (*arr)[5][3]
 + (*arr)[5][4]
 + (*arr)[6][0]
 + (*arr)[6][1]
 + (*arr)[6][2]
 + (*arr)[6][3]
 + (*arr)[6][4]
 + (*arr)[7][0]
 + (*arr)[7][1]
 + (*arr)[7][2]
 + (*arr)[7][3]
 + (*arr)[7][4]
 + (*arr)[8][0]
 + (*arr)[8][1]
 + (*arr)[8][2]
 + v1;
 v3 = (*arr)[17][1];
 v4 = (*arr)[17][2];
 v5 = v2
 + (*arr)[8][4]
 + (*arr)[9][0]
 + (*arr)[9][1]
 + (*arr)[9][2]
 + (*arr)[9][3]
 + (*arr)[9][4]
 + (*arr)[10][0]
 + (*arr)[10][1]
 + (*arr)[10][2]
 + (*arr)[10][3]
 + (*arr)[10][4]
 + (*arr)[11][0]
 + (*arr)[11][1]
 + (*arr)[11][2]
 + (*arr)[11][3]
 + (*arr)[11][4]
 + (*arr)[12][0]
 + (*arr)[12][1]
 + (*arr)[12][2]
 + (*arr)[12][3]
 + (*arr)[12][4]
 + (*arr)[13][0]
 + (*arr)[13][1]
 + (*arr)[13][2]
 + (*arr)[13][3]
 + (*arr)[13][4]
 + (*arr)[14][0]
 + (*arr)[14][1]
 + (*arr)[14][2]
 + (*arr)[14][3]
 + (*arr)[14][4]
 + (*arr)[15][0]
 + (*arr)[15][1]
 + (*arr)[15][2]
 + (*arr)[15][3]
 + (*arr)[15][4]
 + (*arr)[16][0]
 + (*arr)[16][1]
 + (*arr)[16][2]
 + (*arr)[16][3]
 + (*arr)[16][4]
 + (*arr)[17][0]
 + v3
 + v4;
 return v5
 + (*arr)[17][3]
 + (*arr)[17][4]
 + (*arr)[18][0]
 + (*arr)[18][1]
 + (*arr)[18][2]
 + (*arr)[18][3]
 + (*arr)[18][4]
 + (*arr)[19][0]
 + (*arr)[19][1]
 + (*arr)[19][2]
 + (*arr)[19][3]
 + (*arr)[19][4]
 + (*arr)[20][0]
 + (*arr)[20][1]
 + (*arr)[20][2]
 + (*arr)[20][3]
 + (*arr)[20][4]
 + (*arr)[21][0]
 + (*arr)[21][1]
 + (*arr)[21][2]
 + (*arr)[21][3]
 + (*arr)[21][4]
 + (*arr)[22][0]
 + (*arr)[22][1]
 + (*arr)[22][2]
 + (*arr)[22][3]
 + (*arr)[22][4]
 + (*arr)[23][0]
 + (*arr)[23][1]
 + (*arr)[23][2]
 + (*arr)[23][3]
 + (*arr)[23][4]
 + (*arr)[24][0]
 + (*arr)[24][1]
 + (*arr)[24][2]
 + (*arr)[24][3]
 + (*arr)[24][4];
}


/* Function: array_vla @ 0x10BE4 */
int array_vla(int n, int *arr)
{
 bool v2; // cc
 int result; // r0
 int *v5; // r1
 int *v6; // r2
 int v7; // t1

 v2 = n <= 0;
 result = 0;
 if ( !v2 )
 {
 v5 = arr - 1;
 v6 = &v5[n];
 do
 {
 v7 = v5[1];
 ++v5;
 result += v7;
 }
 while ( v6 != v5 );
 }
 return result;
}


/* Function: array_pointer @ 0x10C0C */
int array_pointer(int (*arr)[10], int n)
{
 int v3; // r3
 int result; // r0
 int v5; // r2
 int v6; // r1

 if ( n <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 v5 = 10 * n;
 do
 {
 v6 = (*arr)[v3];
 v3 += 10;
 result += v6;
 }
 while ( v5 != v3 );
 return result;
}


/* Function: pointer_array @ 0x10C48 */
int pointer_array(int **arr, int n)
{
 int result; // r0
 int *v4; // r2
 int *v5; // r2
 int *v6; // r2
 int *v7; // r2
 int *v8; // r2
 int *v9; // r2
 int *v10; // r2
 int *v11; // r2
 int *v12; // r3

 if ( n <= 0 )
 return 0;
 result = (int)*arr;
 if ( result )
 result = *(unsigned int *)result;
 if ( n > 1 )
 {
 v4 = arr[1];
 if ( v4 )
 result += *v4;
 if ( n != 2 )
 {
 v5 = arr[2];
 if ( v5 )
 result += *v5;
 if ( n != 3 )
 {
 v6 = arr[3];
 if ( v6 )
 result += *v6;
 if ( n != 4 )
 {
 v7 = arr[4];
 if ( v7 )
 result += *v7;
 if ( n != 5 )
 {
 v8 = arr[5];
 if ( v8 )
 result += *v8;
 if ( n != 6 )
 {
 v9 = arr[6];
 if ( v9 )
 result += *v9;
 if ( n != 7 )
 {
 v10 = arr[7];
 if ( v10 )
 result += *v10;
 if ( n != 8 )
 {
 v11 = arr[8];
 if ( v11 )
 result += *v11;
 if ( n > 9 )
 {
 v12 = arr[9];
 if ( v12 )
 result += *v12;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: array_complex_index @ 0x10D44 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 if ( (x >= w) | ((x | (unsigned int)y) >> 31) || y >= h )
 return -1;
 else
 return arr[x + y * w];
}


/* Function: array_oob @ 0x10D80 */
int array_oob(int *arr, int n)
{
 bool v2; // nf
 int result; // r0
 int *v6; // r3
 int *v7; // r1
 int v8; // t1

 v2 = n < 0;
 result = 0;
 if ( !v2 )
 {
 v6 = arr - 1;
 v7 = &arr[n];
 do
 {
 v8 = v6[1];
 ++v6;
 result += v8;
 }
 while ( v7 != v6 );
 }
 return result;
}


/* Function: test_array_types @ 0x10DAC */
void test_array_types()
{
 int v0; // r2
 char *v1; // r3
 int v2; // t1
 int v3; // r3
 int *v4; // r2
 int v5; // [sp+0h] [bp-68h] BYREF
 int v6[20]; // [sp+4h] [bp-64h]
 char str[8]; // [sp+54h] [bp-14h] BYREF

 puts(asc_124C4);
 _printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
 v0 = 0;
 v1 = str;
 strcpy(str, "hello");
 do
 {
 v2 = (unsigned char)*++v1;
 ++v0;
 }
 while ( v2 );
 _printf_chk(1, "ARR-L1-02 (array_string): %d\n", v0);
 _printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", 45);
 _printf_chk(1, "ARR-L1-04 (array_3d): %d\n", 125);
 _printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 _printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 _printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 v3 = 0;
 v4 = &v5;
 do
 {
 v4[1] = v3;
 ++v4;
 ++v3;
 }
 while ( v3 != 20 );
 _printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v6[17]);
}


/* Function: ptr_single @ 0x10ED8 */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0x10EE4 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x10EF4 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x10F08 */
int ptr_increment(int *p, int n)
{
 int v3; // r3
 int result; // r0
 int v5; // t1

 if ( n <= 0 )
 return 0;
 v3 = 0;
 result = 0;
 do
 {
 v5 = *p++;
 ++v3;
 result += v5;
 }
 while ( n != v3 );
 return result;
}


/* Function: ptr_offset @ 0x10F3C */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x10F44 */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x10F50 */
int ptr_void(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned char *)p;
 return -1;
}


/* Function: ptr_const @ 0x10F70 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x10F7C */
int ptr_const_ptr(int *const p)
{
 int result; // r0

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x10F90 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x10F9C */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 char *args[2]; // [sp+4h] [bp-14h] BYREF

 args[1] = 0;
 args[0] = "test";
 return f(p, args);
}


/* Function: ptr_cast @ 0x11004 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x1100C */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x11010 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x11018 */
void test_pointer_types()
{
 puts(asc_125F0);
 _printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 _printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 _printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 _printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", 15);
 _printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 _printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 _printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 _printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 _printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 _printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 _printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
 _printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
 _printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 _printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x11148 */
int struct_simple(Point3D *p)
{
 return p->x + p->y + p->z;
}


/* Function: struct_array @ 0x11160 */
int struct_array(Point3D *pts, int n)
{
 int result; // r0
 Point3D *v4; // r1
 int z; // r12
 int x; // r2
 int y; // lr

 if ( n <= 0 )
 return 0;
 result = 0;
 v4 = &pts[n];
 do
 {
 z = pts->z;
 x = pts->x;
 y = pts->y;
 ++pts;
 result += x + y + z;
 }
 while ( v4 != pts );
 return result;
}


/* Function: struct_nested @ 0x111A8 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x111B8 */
int struct_deep(Widget *w)
{
 return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x111C8 */
int struct_with_ptr(Node *node)
{
 int result; // r0
 Node *next; // r3

 result = node->data;
 next = node->next;
 if ( next )
 result += next->data;
 return result;
}


/* Function: struct_bitfields @ 0x111DC */
int struct_bitfields(Flags *f)
{
 return (*(unsigned char *)f & 1)
 + ((unsigned int)(*(unsigned char *)f << 29) >> 30)
 + ((unsigned int)(*(unsigned char *)f << 26) >> 29)
 + (*(unsigned short *)f >> 6);
}


/* Function: union_type @ 0x11200 */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return (unsigned char)u->bytes[0];
}


/* Function: union_array @ 0x11230 */
int union_array(UnionData *arr, int n)
{
 int result; // r0
 UnionData *v4; // r3
 UnionData *v5; // r1
 UnionData v6; // t1

 result = 0;
 if ( n > 0 )
 {
 v4 = arr - 1;
 v5 = &v4[n];
 do
 {
 v6.i = v4[1].i;
 ++v4;
 result += v6.i;
 }
 while ( v5 != v4 );
 }
 return result;
}


/* Function: enum_type @ 0x1125C */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x11268 */
int enum_switch(State s)
{
 if ( (unsigned int)s > STATE_STOPPED )
 return -99;
 else
 return CSWTCH_73[s];
}


/* Function: struct_func_ptr @ 0x11280 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x11288 */
int linked_list(Node *head)
{
 Node *v1; // r3
 int result; // r0
 int data; // r2

 v1 = head;
 if ( !head )
 return 0;
 result = 0;
 do
 {
 data = v1->data;
 v1 = v1->next;
 result += data;
 }
 while ( v1 );
 return result;
}


/* Function: doubly_linked_list @ 0x112B0 */
int doubly_linked_list(DNode *head)
{
 DNode *v1; // r3
 int result; // r0
 int data; // r2

 v1 = head;
 if ( !head )
 return 0;
 result = 0;
 do
 {
 data = v1->data;
 v1 = v1->next;
 result += data;
 }
 while ( v1 );
 return result;
}


/* Function: binary_tree_sum @ 0x112D8 */
int binary_tree_sum(TreeNode *root)
{
 int v1; // r1
 TreeNode **v2; // r5
 bool v3; // zf
 TreeNode *v4; // r3
 TreeNode *left; // r2
 int data; // r3
 TreeNode *v7; // r2
 int v8; // r3
 TreeNode *v9; // r2
 int v10; // r3
 TreeNode *v11; // r2
 int v12; // r2
 TreeNode *v13; // r6
 TreeNode *v14; // r1
 int v15; // r3
 TreeNode *v16; // r5
 int v17; // r2
 int v18; // r1
 TreeNode *v19; // r4
 int v20; // r10
 int v21; // r0
 int v22; // r8
 TreeNode *v23; // r10
 int v24; // r5
 int v25; // r2
 int *p_data; // r7
 int v27; // r9
 int v28; // r0
 int v29; // r11
 int v30; // r8
 TreeNode *v31; // r2
 int v32; // r4
 int v33; // r3
 int v34; // r9
 int v35; // r1
 int v36; // r0
 int v37; // r12
 int v38; // r0
 int v39; // r2
 int v40; // r2
 int v41; // r2
 int v42; // r2
 TreeNode **v44; // [sp+0h] [bp-70h]
 int v45; // [sp+4h] [bp-6Ch]
 TreeNode *roota; // [sp+8h] [bp-68h]
 int v47; // [sp+Ch] [bp-64h]
 TreeNode *v48; // [sp+10h] [bp-60h]
 int v49; // [sp+14h] [bp-5Ch]
 TreeNode *v50; // [sp+18h] [bp-58h]
 int v51; // [sp+1Ch] [bp-54h]
 int v52; // [sp+20h] [bp-50h]
 TreeNode *v53; // [sp+24h] [bp-4Cl]
 int v54; // [sp+28h] [bp-48h]
 TreeNode *v55; // [sp+2Ch] [bp-44h]
 int v56; // [sp+30h] [bp-40h]
 int v57; // [sp+34h] [bp-3Ch]
 int v58; // [sp+38h] [bp-38h]
 int v59; // [sp+3Ch] [bp-34h]
 TreeNode *v60; // [sp+40h] [bp-30h]
 int v61; // [sp+44h] [bp-2Ch]

 v4 = root;
 v3 = root == 0;
 if ( !root )
 root = 0;
 v48 = v4;
 if ( !v3 )
 {
 v47 = 0;
 do
 {
 left = v48->left;
 data = v48->data;
 v49 = v48->data;
 if ( left )
 data = 0;
 v50 = v48->left;
 if ( left )
 {
 v52 = data;
 do
 {
 v7 = v50->left;
 v8 = v50->data;
 v51 = v50->data;
 if ( v7 )
 v8 = 0;
 v53 = v50->left;
 if ( v7 )
 {
 v54 = v8;
 do
 {
 v9 = v53->left;
 v10 = v53->data;
 v58 = v53->data;
 if ( v9 )
 v10 = 0;
 v55 = v53->left;
 if ( v9 )
 {
 v56 = v10;
 do
 {
 v11 = v55->left;
 if ( v11 )
 {
 v1 = 0;
 v2 = (TreeNode **)v55->left;
 }
 v57 = v55->data;
 if ( v11 )
 {
 v12 = v1;
 do
 {
 v13 = v2[1];
 v14 = *v2;
 if ( v13 )
 {
 v15 = 0;
 v44 = v2;
 v45 = v12;
 roota = *v2;
 do
 {
 v16 = v13->left;
 v17 = v13->data;
 if ( v16 )
 {
 v18 = 0;
 do
 {
 v19 = v16->left;
 v20 = v16->data;
 if ( v19 )
 {
 v21 = v16->data;
 v22 = 0;
 v23 = v16;
 v24 = v17;
 v25 = v21;
 do
 {
 p_data = &v19->left->data;
 v27 = v19->data;
 if ( p_data )
 {
 v28 = v22;
 v29 = 0;
 v30 = v25;
 v31 = v19;
 v32 = v15;
 v33 = v27;
 v34 = v18;
 v35 = v28;
 do
 {
 v61 = v35;
 v60 = v31;
 v59 = v33;
 v36 = binary_tree_sum((TreeNode *)p_data[1]);
 v37 = *p_data;
 p_data = (int *)p_data[2];
 v33 = v59;
 v31 = v60;
 v35 = v61;
 v29 += v36 + v37;
 }
 while ( p_data );
 v18 = v34;
 v15 = v32;
 v19 = v60;
 v25 = v30;
 v22 = v61;
 v27 = v59 + v29;
 }
 v19 = v19->right;
 v22 += v27;
 }
 while ( v19 );
 v38 = v25;
 v17 = v24;
 v16 = v23;
 v20 = v38 + v22;
 }
 v16 = v16->right;
 v18 += v20;
 }
 while ( v16 );
 v17 += v18;
 }
 v13 = v13->right;
 v15 += v17;
 }
 while ( v13 );
 v2 = v44;
 v12 = v45;
 v14 = (TreeNode *)((char *)roota + v15);
 }
 v2 = (TreeNode **)v2[2];
 v12 += (int)v14;
 }
 while ( v2 );
 v57 += v12;
 }
 v1 = v57;
 v39 = v56 + v57;
 v55 = v55->right;
 v56 += v57;
 }
 while ( v55 );
 v58 += v39;
 }
 v1 = v58;
 v40 = v54 + v58;
 v53 = v53->right;
 v54 += v58;
 }
 while ( v53 );
 v51 += v40;
 }
 v1 = v51;
 v41 = v52 + v51;
 v50 = v50->right;
 v52 += v51;
 }
 while ( v50 );
 v49 += v41;
 }
 v1 = v49;
 v42 = v47 + v49;
 v48 = v48->right;
 v47 += v49;
 }
 while ( v48 );
 return v42;
 }
 return (int)root;
}


/* Function: binary_tree @ 0x1159C */
int binary_tree(TreeNode *root)
{
 TreeNode *v1; // r6
 int v2; // r8
 TreeNode *left; // r4
 int data; // r7
 int v5; // r5
 int v6; // r0
 int v7; // r3

 v1 = root;
 if ( !root )
 return 0;
 v2 = 0;
 do
 {
 left = v1->left;
 data = v1->data;
 if ( left )
 {
 v5 = 0;
 do
 {
 v6 = binary_tree_sum(left->left);
 v7 = left->data;
 left = left->right;
 v5 += v6 + v7;
 }
 while ( left );
 data += v5;
 }
 v1 = v1->right;
 v2 += data;
 }
 while ( v1 );
 return v2;
}


/* Function: graph_traverse @ 0x11600 */
int graph_traverse(Graph *g)
{
 int numVertices; // r12
 int result; // r0
 int *pVertices; // r1
 char *v5; // r12
 int *i; // r3
 int *v7; // t1
 int v8; // r2

 numVertices = g->numVertices;
 result = 0;
 if ( numVertices > 0 )
 {
 pVertices = g->vertices;
 v5 = (char *)&pVertices[numVertices];
 do
 {
 v7 = (int *)pVertices[1];
 ++pVertices;
 for ( i = v7; i; result += v8 )
 {
 v8 = *i;
 i = (int *)i[1];
 }
 }
 while ( pVertices != (int *)v5 );
 }
 return result;
}


/* Function: test_composite_types @ 0x11644 */
void test_composite_types()
{
 int v0; // r2
 Node *v1; // r4
 int data; // r3
 DNode *v3; // r3
 int v4; // r2
 int v5; // r1
 Node list[3]; // [sp+4h] [bp-3Ch] BYREF
 DNode dlist[2]; // [sp+1Ch] [bp-24h] BYREF

 puts(asc_12798);
 _printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 _printf_chk(1, "CMP-L2-02 (struct_array): %d\n", 9);
 _printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 _printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 _printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", 30);
 _printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", 106);
 _printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 _printf_chk(1, "CMP-L2-08 (union_array): %d\n", 60);
 _printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 _printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 _printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", 21);
 v0 = 10;
 v1 = &list[1];
 list[1].next = &list[2];
 list[1].data = 20;
 list[2].data = 30;
 list[2].next = 0;
 do
 {
 data = v1->data;
 v1 = v1->next;
 v0 += data;
 }
 while ( v1 );
 _printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v0);
 v3 = &dlist[1];
 dlist[0].next = &dlist[1];
 v4 = 10;
 dlist[0].prev = 0;
 dlist[1].next = 0;
 dlist[1].prev = dlist;
 dlist[0].data = 10;
 dlist[1].data = 20;
 do
 {
 v5 = v3->data;
 v3 = v3->next;
 v4 += v5;
 }
 while ( v3 );
 _printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v4);
 _printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", 100);
 _printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: __muldf3 @ 0x11838 */
long long _muldf3(long long a1, unsigned int a2, unsigned int a3)
{
 int v3; // r5
 unsigned int v4; // r12
 bool v5; // zf
 int v6; // r4
 int v7; // r4
 int v8; // r6
 int v9; // r1
 int v10; // r3
 bool v11; // zf
 int v12; // r3
 int v13; // r12
 unsigned int v14; // r5
 unsigned int v15; // lr
 unsigned int v16; // r2
 unsigned int v17; // lr
 unsigned long long v18; // kr10_8
 unsigned int v19; // r5
 unsigned int v20; // r6
 int v21; // r4
 unsigned int v22; // off
 unsigned int v24; // lr
 bool v25; // cc
 bool v26; // cf
 int v27; // r4
 int v28; // r4
 int v29; // r4
 char v30; // r4
 char v31; // r4
 unsigned int v32; // r3
 char v33; // r4
 unsigned int v34; // r3
 int v35; // lr
 unsigned int v36; // r3

 v4 = 2047;
 v6 = (HIDWORD(a1) >> 20) & 0x7FF;
 v5 = v6 == 0;
 if ( v6 )
 {
 v3 = (a3 >> 20) & 0x7FF;
 v5 = v3 == 0;
 }
 if ( !v5 )
 {
 v5 = v6 == 0x7FF;
 if ( v6 != 0x7FF )
 v5 = v3 == 0x7FF;
 }
 if ( v5 )
 a1 = sub_11A18();
 v7 = v6 + v3;
 v8 = HIDWORD(a1) ^ a3;
 v9 = HIDWORD(a1) & ~(v4 << 21);
 v10 = a3 & ~(v4 << 21);
 v11 = ((unsigned int)a1 | (v9 << 12)) == 0;
 if ( (unsigned int)a1 | (v9 << 12) )
 v11 = (a2 | (v10 << 12)) == 0;
 HIDWORD(a1) = v9 | 0x100000;
 v12 = v10 | 0x100000;
 if ( v11 )
 {
 LODWORD(a1) = a1 | a2;
 HIDWORD(a1) = (v8 & 0x80000000 | HIDWORD(a1)) ^ v12;
 v25 = v7 <= (int)(v4 >> 1);
 v27 = v7 - (v4 >> 1);
 if ( !v25 && (int)v4 > v27 )
 return a1;
 HIDWORD(a1) |= 0x100000u;
 v24 = 0;
 v25 = v27 <= 1;
 v21 = v27 - 1;
 }
 else
 {
 v13 = a1 * a2;
 v14 = (HIDWORD(a1) * (unsigned long long)a2 + (((unsigned int)a1 * (unsigned long long)a2) >> 32)) >> 32;
 v15 = (a1 * (unsigned long long)a2) >> 32;
 v16 = v8 & 0x80000000;
 v18 = (unsigned int)a1 * (unsigned long long)(unsigned int)v12 + __PAIR64__(v14, v15);
 v17 = v18;
 v20 = (HIDWORD(a1) * (unsigned long long)(unsigned int)v12 + HIDWORD(v18)) >> 32;
 v19 = HIDWORD(a1) * v12 + HIDWORD(v18);
 if ( v13 )
 v17 = v18 | 1;
 v21 = (__PAIR64__(v7 - 255, v20) - 0x30000000200LL) >> 32;
 if ( v20 < 0x200 )
 {
 v26 = __CFSHL__(v17, 1);
 v17 *= 2;
 v22 = v26 + v19;
 v26 = __CFADD__(v26, v19) | __CFADD__(v19, v22);
 v19 += v22;
 v20 += v26 + v20;
 }
 HIDWORD(a1) = v16 | (v20 << 11) | (v19 >> 21);
 LODWORD(a1) = (v19 << 11) | (v17 >> 21);
 v24 = v17 << 11;
 v25 = v21 <= 253;
 if ( (unsigned int)v21 > 0xFD )
 v25 = v21 - 253 <= 1792;
 if ( !v25 )
 {
 v26 = v24 >= 0x80000000;
 if ( v24 == 0x80000000 )
 v26 = a1 & 1;
 LODWORD(a1) = v26 + (unsigned int)a1;
 return a1;
 }
 }
 if ( !v25 )
 JUMPOUT(0x11A84);
 if ( v21 > -54 )
 {
 v28 = -v21;
 v25 = v28 < 32;
 v29 = v28 - 32;
 if ( v25 )
 {
 v25 = v29 <= -12;
 v30 = v29 + 12;
 if ( v25 )
 {
 v31 = v30 + 20;
 v32 = (unsigned int)a1 << (32 - v31);
 LODWORD(a1) = (((unsigned int)a1 >> v31) | (HIDWORD(a1) << (32 - v31))) + (v32 >> 31);
 if ( !(v24 | (2 * v32)) )
 LODWORD(a1) = a1 & ~(v32 >> 31);
 }
 else
 {
 v33 = 12 - v30;
 v34 = (unsigned int)a1 << v33;
 LODWORD(a1) = (((unsigned int)a1 >> (32 - v33)) | (HIDWORD(a1) << v33)) + ((unsigned int)a1 << v33 >> 31);
 if ( !(v24 | (2 * v34)) )
 LODWORD(a1) = a1 & ~(v34 >> 31);
 }
 }
 else
 {
 v35 = v24 | ((unsigned int)a1 << (32 - v29));
 v36 = ((unsigned int)a1 >> v29) | (HIDWORD(a1) << (32 - v29));
 LODWORD(a1) = ((HIDWORD(a1) >> v29) & ~((HIDWORD(a1) & 0x80000000) >> v29)) + (v36 >> 31);
 if ( !(v35 | (2 * v36)) )
 LODWORD(a1) = a1 & ~(v36 >> 31);
 }
 }
 else
 {
 LODWORD(a1) = 0;
 }
 return a1;
}


int sub_11A18(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
 bool v8; // cf
 int v9; // r4
 int v10; // r12
 bool v11; // zf
 int v12; // r5
 bool v13; // zf
 bool v14; // zf
 int return_result; // r0

 v9 = 0;
 v10 = 0;
 v11 = v9 == v10;
 v12 = v10 & (a4 >> 20);
 if ( v9 != v10 )
 v11 = v12 == v10;
 if ( v11 )
 {
 v14 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 {
 v14 = (a3 | (2 * a4)) == 0;
 }
 else
 {
 result = a3;
 a2 = a4;
 }
 if ( !v14 && (v9 != v10 || !(result | (a2 << 12))) && (v12 != v10 || !(a3 | (a4 << 12))) )
 return result;
 }
 v13 = (result | (2 * a2)) == 0;
 if ( result | (2 * a2) )
 v13 = (a3 | (2 * a4)) == 0;
 if ( v13 )
 return result;
 if ( v9 )
 goto LABEL_24;
 while ( 1 )
 {
 v8 = __CFSHL__(result, 1);
 result *= 2;
 a2 += v8 + a2;
 if ( (a2 & 0x100000) != 0 )
 break;
 --v9;
 }
 if ( !v12 )
 {
LABEL_24:
 while ( 1 )
 {
 v8 = __CFSHL__(a3, 1);
 a3 *= 2;
 a4 += v8 + a4;
 if ( (a4 & 0x100000) != 0 )
 break;
 --v12;
 }
 }
 return_result = result;
 return return_result;
}


/* Function: __mulsf3 @ 0x11AA4 */
int _mulsf3(unsigned int a1, unsigned int a2, int a3, int a4)
{
 bool v4; // zf
 int v5; // r2
 int v6; // r2
 int v7; // r12
 bool v8; // zf
 unsigned int v9; // r0
 unsigned int v10; // r1
 unsigned int v11; // r3
 int v12; // kr00_4
 bool v13; // cf
 unsigned int v14; // r0
 int v15; // r2
 bool v16; // cc
 int result; // r0
 unsigned int v18; // r12
 int v19; // r0
 int v20; // r2
 int v21; // r2
 unsigned int v22; // r12
 unsigned int v23; // r12
 bool v24; // zf
 bool v25; // zf
 unsigned int v26; // r12
 bool v27; // zf
 bool v28; // zf
 bool v29; // zf

 v5 = (unsigned char)(a1 >> 23);
 v4 = v5 == 0;
 if ( (unsigned char)(a1 >> 23) )
 {
 a4 = (unsigned char)(a2 >> 23);
 v4 = a4 == 0;
 }
 if ( !v4 )
 {
 v4 = v5 == 0xFF;
 if ( v5 != 0xFF )
 v4 = a4 == 0xFF;
 }
 if ( v4 )
 {
 a4 = (unsigned char)(a2 >> 23);
 v27 = v5 == 0xFF;
 if ( v5 != 0xFF )
 v27 = a4 == 0xFF;
 if ( v27 )
 {
 v29 = a1 == 0;
 if ( a1 )
 v29 = a1 == 0x80000000;
 if ( v29 )
 a1 = a2;
 else
 v29 = a2 == 0;
 if ( !v29 )
 v29 = a2 == 0x80000000;
 if ( !v29 && (v5 != 0xFF || !(a1 << 9)) )
 {
 if ( a4 != 0xFF || !(a2 << 9) )
 {
 v14 = a1 ^ a2;
 return v14 & 0x80000000 | 0x7F800000;
 }
 a1 = a2;
 }
 return a1 | 0x7FC00000;
 }
 v28 = (a1 & 0x7FFFFFFF) == 0;
 if ( (a1 & 0x7FFFFFFF) != 0 )
 v28 = (a2 & 0x7FFFFFFF) == 0;
 if ( v28 )
 return (a1 ^ a2) & 0x80000000;
 v24 = v5 == 0;
 v23 = a1 & 0x80000000;
 while ( v24 )
 {
 a1 *= 2;
 v24 = (a1 & 0x800000) == 0;
 if ( (a1 & 0x800000) != 0 )
 break;
 --v5;
 }
 a1 |= v23;
 v25 = a4 == 0;
 v26 = a2 & 0x80000000;
 while ( v25 )
 {
 a2 *= 2;
 v25 = (a2 & 0x800000) == 0;
 if ( (a2 & 0x800000) != 0 )
 break;
 --a4;
 }
 a2 |= v26;
 }
 v6 = v5 + a4;
 v7 = a1 ^ a2;
 v9 = a1 << 9;
 v8 = v9 == 0;
 if ( v9 )
 {
 a2 <<= 9;
 v8 = a2 == 0;
 }
 if ( v8 )
 {
 v18 = v7 & 0x80000000;
 if ( !v9 )
 a2 <<= 9;
 v19 = v18 | (v9 >> 9) | (a2 >> 9);
 v16 = v6 <= 127;
 v20 = v6 - 127;
 if ( !v16 && v20 < 255 )
 return v19 | (v20 << 23);
 v14 = v19 | 0x800000;
 v11 = 0;
 v16 = v20 <= 1;
 v15 = v20 - 1;
 }
 else
 {
 v12 = ((v9 >> 5) | 0x8000000) * ((a2 >> 5) | 0x8000000);
 v10 = (((v9 >> 5) | 0x8000000) * (unsigned long long)((a2 >> 5) | 0x8000000)) >> 32;
 v11 = v12;
 v13 = v10 >= 0x800000;
 if ( v10 < 0x800000 )
 {
 v10 = __SPAIR64__(v10, v12) >> 31;
 v11 = 2 * v12;
 }
 v14 = v7 & 0x80000000 | v10;
 v15 = v6 - (!v13 + 127);
 v16 = v15 <= 253;
 if ( (unsigned int)v15 <= 0xFD )
 {
 result = (v15 << 23) + (v11 >= 0x80000000) + v14;
 if ( v11 == 0x80000000 )
 return result & 0xFFFFFFFE;
 return result;
 }
 }
 if ( !v16 )
 return v14 & 0x80000000 | 0x7F800000;
 if ( v15 <= -25 )
 return v14 & 0x80000000;
 v21 = -v15;
 v22 = v14 << (32 - v21);
 result = (((2 * v14) >> v21) & 1) + (((2 * v14) >> v21 >> 1) | (__CFSHL__(v14, 1) << 31));
 if ( !(v11 | (2 * v22)) )
 return result & ~(v22 >> 31);
 return result;
}


/* Function: __aeabi_drsub @ 0x11C3C */
double _aeabi_drsub(double a1, double a2)
{
 HIDWORD(a1) ^= 0x80000000;
 return a1 + a2;
}


/* Function: __subdf3 @ 0x11C44 */
double _subdf3(double a1, double a2)
{
 HIDWORD(a2) ^= 0x80000000;
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x11EF4 */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x11D90);
 return result;
}


/* Function: __floatsidf @ 0x11F18 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x11D90);
 return result;
}


/* Function: __extendsfdf2 @ 0x11F40 */
int _extendsfdf2(int a1, int a2, int a3, unsigned int a4)
{
 bool v4; // zf
 int v5; // r2
 int result; // r0

 v5 = 2 * a1;
 v4 = 2 * a1 == 0;
 result = a1 << 29;
 if ( v4 || (a4 = v5 & 0xFF000000, (v5 & 0xFF000000) == 0) || a4 == 0xFF000000 )
 {
 if ( (v5 & 0xFFFFFF) != 0 && a4 != 0xFF000000 )
 JUMPOUT(0x11D90);
 }
 return result;
}


/* Function: __floatundidf @ 0x11F88 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11FB8);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __aeabi_frsub @ 0x11FFC */
float _aeabi_frsub(int a1, float a2)
{
 return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x12004 */
float _subsf3(float a1, int a2)
{
 return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}



/* CRT stub function __aeabi_fadd removed by preprocessor */



/* Function: __floatunsisf @ 0x12198 */
void _floatunsisf()
{
 JUMPOUT(0x121A8);
}


/* Function: __floatsisf @ 0x121A0 */
int _floatsisf(int result)
{
 if ( result < 0 )
 result = -result;
 if ( result )
 JUMPOUT(0x12200);
 return result;
}


/* Function: __floatundisf @ 0x121C0 */
int _floatundisf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x121E8);
 return a1;
}



/* CRT stub function __floatdisf removed by preprocessor */



/* Function: __fixsfsi @ 0x1224C */
unsigned int _fixsfsi(int a1)
{
 unsigned int v1; // r2
 bool v2; // cf
 int v3; // r2
 bool v4; // zf
 unsigned int result; // r0

 v1 = 2 * a1;
 if ( (unsigned int)(2 * a1) < 0x7F000000 )
 return 0;
 v2 = HIBYTE(v1) <= 0x9Eu;
 v3 = 158 - HIBYTE(v1);
 if ( v3 != 0 && v2 )
 {
 v4 = a1 >= 0;
 result = ((a1 << 8) | 0x80000000) >> v3;
 if ( !v4 )
 return -result;
 }
 else if ( v3 == -97 && a1 << 9 )
 {
 return 0;
 }
 else
 {
 result = a1 & 0x80000000;
 if ( !result )
 return 0x7FFFFFFF;
 }
 return result;
}


/* Function: .term_proc @ 0x122A8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x2303C */

/* FAILED to decompile: __imp___printf_chk @ 0x23040 */

/* FAILED to decompile: __imp_abort @ 0x23044 */

/* FAILED to decompile: __imp___libc_start_main @ 0x23048 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x2304C */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23050 */

/* Total functions decompiled: 83, failed: 6 */
