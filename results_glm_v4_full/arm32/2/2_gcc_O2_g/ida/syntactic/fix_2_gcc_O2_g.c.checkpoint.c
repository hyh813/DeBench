/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/2/2_gcc_O2_g
 * Processor: arm
 */

/* Type definitions */
typedef _Bool bool;

/* Define missing library functions */
#define _printf_chk(flag, ...) printf(__VA_ARGS__)

/* Define decompiler macros */
#define JUMPOUT(x) return
#define __SPAIR64__(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))

/* Define COERCE_FLOAT for int to float conversion */
static inline float coerce_float(unsigned int x) {
    union { unsigned int i; float f; } u;
    u.i = x;
    return u.f;
}
#define COERCE_FLOAT(x) coerce_float(x)

/* Helper functions for 64-bit word manipulation */
static inline long long set_hidword(long long val, unsigned int hi)
{
    union { long long ll; unsigned int w[2]; } u;
    u.ll = val;
    u.w[1] = hi;
    return u.ll;
}

static inline long long set_lodword(long long val, unsigned int lo)
{
    union { long long ll; unsigned int w[2]; } u;
    u.ll = val;
    u.w[0] = lo;
    return u.ll;
}

static inline unsigned int set_hiword(unsigned int val, unsigned short hi)
{
    union { unsigned int w; unsigned short hw[2]; } u;
    u.w = val;
    u.hw[1] = hi;
    return u.w;
}

static inline unsigned int set_loword(unsigned int val, unsigned short lo)
{
    union { unsigned int w; unsigned short hw[2]; } u;
    u.w = val;
    u.hw[0] = lo;
    return u.w;
}

static inline unsigned int set_hibyte(unsigned int val, unsigned char hi)
{
    union { unsigned int w; unsigned char b[4]; } u;
    u.w = val;
    u.b[3] = hi;
    return u.w;
}

/* Define missing compiler intrinsic macros */
#define HIDWORD(x) ((unsigned int)((x) >> 32))
#define HIBYTE(x) ((unsigned char)((x) >> 24))
#define __PAIR64__(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))
#define __CFSHL__(x, n) (((x) >> (32 - (n))) & 1)
#define __CFADD__(a, b) (((unsigned int)(a) + (unsigned int)(b)) < (unsigned int)(a))

typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct {
    int width;
    int height;
} Dimensions;

typedef struct {
    Point3D position;
    Dimensions size;
} Rect;

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Color;

typedef struct {
    Rect bounds;
    Color style;
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

typedef struct {
    unsigned int flag1 : 1;
    unsigned int flag2 : 2;
    unsigned int flag3 : 3;
    unsigned int flag4 : 10;
} Flags;

typedef union {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef enum {
    STATE_IDLE = 0,
    STATE_RUNNING = 1,
    STATE_PAUSED = 2,
    STATE_STOPPED = 3
} State;

typedef struct {
    int *data;
    int (*process)(int *);
} Device;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct {
    int numVertices;
    int **adj;
} Graph;

static const char s[] = "Data Types Test";
static const char asc_121C4[] = "Array Types Test";
static const char asc_122F0[] = "Pointer Types Test";
static const char asc_12498[] = "Composite Types Test";







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




/* CRT stub function call_weak_fn removed by preprocessor */




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
int process_long(int x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x10548 */
long long process_ll(long long x)
{
 unsigned int v1; // r3

 v1 = x;
 x = set_lodword(x, v1 * v1);
 x = set_hidword(x, ((v1 * (unsigned long long)v1) >> 32) + 2 * v1 * (unsigned int)(x >> 32));
 return x;
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


/* Function: process_ld @ 0x105A0 */
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
 _printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
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
 v5 = &v4[n];
 do
 {
 v6 = v4[1];
 ++v4;
 result += v6;
 }
 while ( v4 != v5 );
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
 int v1; // r3
 int result; // r0
 int v4; // r2

 v1 = 0;
 result = 0;
 do
 {
 v4 = (*arr)[v1];
 v1 += 11;
 result += v4;
 }
 while ( v1 != 110 );
 return result;
}


/* Function: array_3d @ 0x107D0 */
int array_3d(int (*arr)[5][5])
{
 int v1; // r3
 int *v2; // lr
 int *v3; // r4
 int *v4; // r2
 int v5; // r0
 int v6; // r1
 int v7; // r3

 v1 = 0;
 v2 = (*arr)[5];
 v3 = (*arr)[30];
 do
 {
 v4 = v2 - 25;
 do
 {
 v5 = v4[3];
 v6 = v4[4];
 v7 = v1 + *v4 + v4[1] + v4[2];
 v4 += 5;
 v1 = v7 + v5 + v6;
 }
 while ( v4 != v2 );
 v2 = v4 + 25;
 }
 while ( v4 + 25 != v3 );
 return v1;
}


/* Function: array_vla @ 0x10824 */
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
 while ( v5 != v6 );
 }
 return result;
}


/* Function: array_pointer @ 0x1084C */
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


/* Function: pointer_array @ 0x10888 */
int pointer_array(int **arr, int n)
{
 int v2; // r12
 int v3; // r3
 int **v4; // r1
 int result; // r0
 int *v6; // r2
 int *v7; // t1

 if ( n >= 10 )
 v2 = 10;
 else
 v2 = n;
 if ( n <= 0 )
 return 0;
 v3 = 0;
 v4 = arr - 1;
 result = 0;
 do
 {
 v7 = v4[1];
 ++v4;
 v6 = v7;
 ++v3;
 if ( v7 )
 result += *v6;
 }
 while ( v2 > v3 );
 return result;
}


/* Function: array_complex_index @ 0x108D0 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 if ( (x >= w) | ((x | (unsigned int)y) >> 31) || y >= h )
 return -1;
 else
 return arr[x + y * w];
}


/* Function: array_oob @ 0x1090C */
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
 while ( v6 != v7 );
 }
 return result;
}


/* Function: test_array_types @ 0x10938 */
void test_array_types(void)
{
 int v23; // r12
 int *v24; // r3
 int v25; // t1
 char *v26; // r3
 int v27; // r2
 int v28; // t1
 int v29; // r2
 int *v30; // r12
 int *v31; // r1
 int i; // r3
 int v33; // r0
 int v34; // r2
 int *v35; // r3
 int v36; // t1
 char *v37; // r0
 char *v38; // r3
 int v39; // r2
 int *v40; // lr
 int *v41; // r3
 int v42; // r0
 int v43; // r1
 int v44; // r2
 int v45; // r3
 int *v46; // r2
 int arr1[5]; // [sp+4h] [bp-404h] BYREF
 int v48[20]; // [sp+18h] [bp-3F0h] BYREF
 int matrix[10][10]; // [sp+68h] [bp-3A0h] BYREF
 int cube[5][5][5]; // [sp+1F8h] [bp-210h] BYREF
 char str[8]; // [sp+3ECh] [bp-1Ch] BYREF

 puts(asc_121C4);
 v23 = 0;
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr1[3] = 4;
 v24 = arr1;
 arr1[4] = 5;
 do
 {
 v25 = *v24++;
 v23 += v25;
 }
 while ( v48 != v24 );
 _printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v23);
 v26 = str;
 v27 = 0;
 strcpy(str, "hello");
 do
 {
 v28 = (unsigned char)*++v26;
 ++v27;
 }
 while ( v28 );
 _printf_chk(1, "ARR-L1-02 (array_string): %d\n", v27);
 v29 = 0;
 v30 = &v48[19];
 do
 {
 v31 = v30;
 for ( i = 0; i != 10; ++i )
 {
 if ( i == v29 )
 v33 = v29;
 else
 v33 = 0;
 v31[1] = v33;
 ++v31;
 }
 ++v29;
 v30 += 10;
 }
 while ( v29 != 10 );
 v34 = 0;
 v35 = matrix[0];
 do
 {
 v36 = *v35;
 v35 += 11;
 v34 += v36;
 }
 while ( v35 != cube[0][2] );
 _printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v34);
 v37 = (char *)cube;
 do
 {
 v38 = v37;
 v39 = 5;
 do
 {
 --v39;
 *(unsigned int *)v38 = 1;
 *((unsigned int *)v38 + 1) = 1;
 *((unsigned int *)v38 + 2) = 1;
 *((unsigned int *)v38 + 3) = 1;
 *((unsigned int *)v38 + 4) = 1;
 v38 += 20;
 }
 while ( v39 );
 v37 += 100;
 }
 while ( v37 != str );
 v40 = cube[1][0];
 do
 {
 v41 = v40 - 25;
 do
 {
 v42 = v41[3];
 v43 = v41[4];
 v44 = v39 + *v41 + v41[1] + v41[2];
 v41 += 5;
 v39 = v44 + v42 + v43;
 }
 while ( v40 != v41 );
 v40 += 25;
 }
 while ( v40 != (int *)&cube[5][0][0] );
 _printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v39);
 _printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 _printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 _printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 v45 = 0;
 v46 = &arr1[4];
 do
 {
 v46[1] = v45;
 ++v46;
 ++v45;
 }
 while ( v45 != 20 );
 _printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v48[17]);
}


/* Function: ptr_single @ 0x10B78 */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0x10B84 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x10B94 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x10BA8 */
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


/* Function: ptr_offset @ 0x10BDC */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x10BE4 */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x10BF0 */
int ptr_void(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned char *)p;
 return -1;
}


/* Function: ptr_const @ 0x10C10 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x10C1C */
int ptr_const_ptr(int *const p)
{
 int result; // r0

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x10C30 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x10C3C */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 char *args[2]; // [sp+4h] [bp-14h] BYREF

 args[1] = 0;
 args[0] = "test";
 return f(p, args);
}


/* Function: ptr_cast @ 0x10CA4 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x10CAC */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x10CB0 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x10CB8 */
void test_pointer_types()
{
 int v0; // lr
 int *v1; // r12
 int v2; // t1
 int arr4[5]; // [sp+0h] [bp-28h] BYREF
 int v4; // [sp+14h] [bp-14h] BYREF

 puts(asc_122F0);
 _printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 _printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 _printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 v0 = 0;
 v1 = arr4;
 arr4[0] = 1;
 arr4[1] = 2;
 arr4[2] = 3;
 arr4[3] = 4;
 arr4[4] = 5;
 do
 {
 v2 = *v1++;
 v0 += v2;
 }
 while ( v1 != &v4 );
 _printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v0);
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


/* Function: struct_simple @ 0x10E54 */
int struct_simple(Point3D *p)
{
 return p->x + p->y + p->z;
}


/* Function: struct_array @ 0x10E6C */
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


/* Function: struct_nested @ 0x10EB4 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x10EC4 */
int struct_deep(Widget *w)
{
 return w->bounds.position.z + w->style.r;
}


/* Function: struct_with_ptr @ 0x10ED4 */
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


/* Function: struct_bitfields @ 0x10EE8 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned char *)f & 1)
 + ((unsigned int)(*(unsigned char *)f << 29) >> 30)
 + ((unsigned int)(*(unsigned char *)f << 26) >> 29)
 + (*(unsigned short *)f >> 6);
}


/* Function: union_type @ 0x10F0C */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return (unsigned char)u->bytes[0];
}


/* Function: union_array @ 0x10F3C */
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
 while ( v4 != v5 );
 }
 return result;
}


/* Function: enum_type @ 0x10F68 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x10F74 */
int enum_switch(State s)
{
 if ( (unsigned int)s > STATE_STOPPED )
 return -99;
 else
 return s * 10;
}


/* Function: struct_func_ptr @ 0x10F90 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x10F98 */
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


/* Function: doubly_linked_list @ 0x10FC0 */
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


/* Function: binary_tree_sum @ 0x10FE8 */
int binary_tree_sum(TreeNode *root)
{
 int v1; // r1
 TreeNode *v2; // r5
 TreeNode *left; // r2
 int data; // r3
 TreeNode *v5; // r2
 int v6; // r3
 TreeNode *v7; // r2
 int v8; // r3
 TreeNode *v9; // r2
 int v10; // r2
 int *p_data; // r6
 int v12; // r1
 int v13; // r3
 unsigned int *v14; // r5
 int v15; // r2
 int v16; // r1
 unsigned int *v17; // r4
 int v18; // r10
 int v19; // r0
 int v20; // r8
 unsigned int *v21; // r10
 int v22; // r5
 int v23; // r2
 int *v24; // r7
 int v25; // r9
 int v26; // r0
 int v27; // r11
 int v28; // r8
 unsigned int *v29; // r2
 int v30; // r4
 int v31; // r3
 int v32; // r9
 int v33; // r1
 int v34; // r0
 int v35; // r12
 int v36; // r0
 int v37; // r2
 int v38; // r2
 int v39; // r2
 TreeNode *v41; // [sp+0h] [bp-70h]
 int v42; // [sp+4h] [bp-6Ch]
 int v43; // [sp+8h] [bp-68h]
 int v44; // [sp+Ch] [bp-64h]
 TreeNode *v45; // [sp+10h] [bp-60h]
 int v46; // [sp+14h] [bp-5Ch]
 TreeNode *v47; // [sp+18h] [bp-58h]
 int v48; // [sp+1Ch] [bp-54h]
 int v49; // [sp+20h] [bp-50h]
 TreeNode *v50; // [sp+24h] [bp-4Ch]
 int v51; // [sp+28h] [bp-48h]
 TreeNode *v52; // [sp+2Ch] [bp-44h]
 int v53; // [sp+30h] [bp-40h]
 int v54; // [sp+34h] [bp-3Ch]
 int v55; // [sp+38h] [bp-38h]
 int v56; // [sp+3Ch] [bp-34h]
 unsigned int *v57; // [sp+40h] [bp-30h]
 int v58; // [sp+44h] [bp-2Ch]

 v45 = root;
 if ( !root )
 return 0;
 v44 = 0;
 do
 {
 left = v45->left;
 data = v45->data;
 v46 = v45->data;
 if ( left )
 data = 0;
 v47 = v45->left;
 if ( left )
 {
 v49 = data;
 do
 {
 v5 = v47->left;
 v6 = v47->data;
 v48 = v47->data;
 if ( v5 )
 v6 = 0;
 v50 = v47->left;
 if ( v5 )
 {
 v51 = v6;
 do
 {
 v7 = v50->left;
 v8 = v50->data;
 v55 = v50->data;
 if ( v7 )
 v8 = 0;
 v52 = v50->left;
 if ( v7 )
 {
 v53 = v8;
 do
 {
 v9 = v52->left;
 if ( v9 )
 {
 v1 = 0;
 v2 = v52->left;
 }
 v54 = v52->data;
 if ( v9 )
 {
 v10 = v1;
 do
 {
 p_data = &v2->left->data;
 v12 = v2->data;
 if ( p_data )
 {
 v13 = 0;
 v41 = v2;
 v42 = v10;
 v43 = v2->data;
 do
 {
 v14 = (unsigned int *)p_data[1];
 v15 = *p_data;
 if ( v14 )
 {
 v16 = 0;
 do
 {
 v17 = (unsigned int *)v14[1];
 v18 = *v14;
 if ( v17 )
 {
 v19 = *v14;
 v20 = 0;
 v21 = v14;
 v22 = v15;
 v23 = v19;
 do
 {
 v24 = (int *)v17[1];
 v25 = *v17;
 if ( v24 )
 {
 v26 = v20;
 v27 = 0;
 v28 = v23;
 v29 = v17;
 v30 = v13;
 v31 = v25;
 v32 = v16;
 v33 = v26;
 do
 {
 v58 = v33;
 v57 = v29;
 v56 = v31;
 v34 = binary_tree_sum((TreeNode *)v24[1]);
 v35 = *v24;
 v24 = (int *)v24[2];
 v31 = v56;
 v29 = v57;
 v33 = v58;
 v27 += v34 + v35;
 }
 while ( v24 );
 v16 = v32;
 v13 = v30;
 v17 = v57;
 v23 = v28;
 v20 = v58;
 v25 = v56 + v27;
 }
 v17 = (unsigned int *)v17[2];
 v20 += v25;
 }
 while ( v17 );
 v36 = v23;
 v15 = v22;
 v14 = v21;
 v18 = v36 + v20;
 }
 v14 = (unsigned int *)v14[2];
 v16 += v18;
 }
 while ( v14 );
 v15 += v16;
 }
 p_data = (int *)p_data[2];
 v13 += v15;
 }
 while ( p_data );
 v2 = v41;
 v10 = v42;
 v12 = v43 + v13;
 }
 v2 = v2->right;
 v10 += v12;
 }
 while ( v2 );
 v54 += v10;
 }
 v1 = v54;
 v37 = v53 + v54;
 v52 = v52->right;
 v53 += v54;
 }
 while ( v52 );
 v55 += v37;
 }
 v1 = v55;
 v38 = v51 + v55;
 v50 = v50->right;
 v51 += v55;
 }
 while ( v50 );
 v48 += v38;
 }
 v1 = v48;
 v39 = v49 + v48;
 v47 = v47->right;
 v49 += v48;
 }
 while ( v47 );
 v46 += v39;
 }
 v1 = v46;
 v45 = v45->right;
 v44 += v46;
 }
 while ( v45 );
 return v44;
}


/* Function: binary_tree @ 0x112A8 */
int binary_tree(TreeNode *root)
{
 TreeNode *v1; // r4
 int v2; // r5
 int v3; // r0
 int data; // r3

 v1 = root;
 if ( !root )
 return 0;
 v2 = 0;
 do
 {
 v3 = binary_tree_sum(v1->left);
 data = v1->data;
 v1 = v1->right;
 v2 += v3 + data;
 }
 while ( v1 );
 return v2;
}


/* Function: graph_traverse @ 0x112E4 */
int graph_traverse(Graph *g)
{
 int numVertices; // r12
 int result; // r0
 int *p_numVertices; // r1
 char *v5; // r12
 int *i; // r3
 int *v7; // t1
 int v8; // r2

 numVertices = g->numVertices;
 result = 0;
 if ( numVertices > 0 )
 {
 p_numVertices = &g[-1].numVertices;
 v5 = (char *)&p_numVertices[numVertices];
 do
 {
 v7 = (int *)p_numVertices[1];
 ++p_numVertices;
 for ( i = v7; i; result += v8 )
 {
 v8 = *i;
 i = (int *)i[1];
 }
 }
 while ( p_numVertices != (int *)v5 );
 }
 return result;
}


/* Function: test_composite_types @ 0x11328 */
void test_composite_types()
{
 int data; // r3
 int v1; // r2
 Node *v2; // r5
 DNode *v3; // r4
 int v4; // r2
 int v5; // r3
 int v6; // r0
 Node list[3]; // [sp+Ch] [bp-44h] BYREF
 DNode dlist[2]; // [sp+24h] [bp-2Ch] BYREF

 puts(asc_12498);
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
 data = 10;
 v1 = 0;
 v2 = &list[1];
 list[1].next = &list[2];
 list[2].next = 0;
 list[1].data = 20;
 list[2].data = 30;
 while ( 1 )
 {
 v1 += data;
 if ( !v2 )
 break;
 data = v2->data;
 v2 = v2->next;
 }
 _printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v1);
 v3 = dlist;
 dlist[0].next = &dlist[1];
 v4 = 0;
 v5 = 10;
 dlist[0].prev = 0;
 dlist[1].next = 0;
 dlist[1].prev = dlist;
 dlist[0].data = 10;
 dlist[1].data = 20;
 while ( 1 )
 {
 v3 = v3->next;
 v4 += v5;
 if ( !v3 )
 break;
 v5 = v3->data;
 }
 _printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v4);
 v6 = binary_tree_sum(0);
 _printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v6 + 100);
 _printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: __muldf3 @ 0x11538 */
int _muldf3(long long a1, unsigned int a2, unsigned int a3)
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
 a1 = sub_11718();
 v7 = v6 + v3;
 v8 = HIDWORD(a1) ^ a3;
 v9 = HIDWORD(a1) & ~(v4 << 21);
 v10 = a3 & ~(v4 << 21);
 v11 = ((unsigned int)a1 | (v9 << 12)) == 0;
 if ( (unsigned int)a1 | (v9 << 12) )
 v11 = (a2 | (v10 << 12)) == 0;
 a1 = set_hidword(a1, v9 | 0x100000);
 v12 = v10 | 0x100000;
 if ( v11 )
 {
 a1 = set_lodword(a1, a1 | a2);
 a1 = set_hidword(a1, (v8 & 0x80000000 | (unsigned int)(a1 >> 32)) ^ v12);
 v25 = v7 <= (int)(v4 >> 1);
 v27 = v7 - (v4 >> 1);
 if ( !v25 && (int)v4 > v27 )
 return a1;
 a1 = set_hidword(a1, HIDWORD(a1) | 0x100000u);
 v24 = 0;
 v25 = v27 <= 1;
 v21 = v27 - 1;
 }
 else
 {
 v13 = a1 * a2;
 v14 = ((unsigned int)(a1 >> 32) * (unsigned long long)a2 + (((unsigned int)a1 * (unsigned long long)a2) >> 32)) >> 32;
 v15 = (a1 * (unsigned long long)a2) >> 32;
 v16 = v8 & 0x80000000;
 v18 = (unsigned int)a1 * (unsigned long long)(unsigned int)v12 + __PAIR64__(v14, v15);
 v17 = v18;
 v20 = ((unsigned int)(a1 >> 32) * (unsigned long long)(unsigned int)v12 + (unsigned int)(v18 >> 32)) >> 32;
 v19 = (unsigned int)(a1 >> 32) * v12 + (unsigned int)(v18 >> 32);
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
 a1 = set_hidword(a1, v16 | (v20 << 11) | (v19 >> 21));
 a1 = set_lodword(a1, (v19 << 11) | (v17 >> 21));
 v24 = v17 << 11;
 v25 = v21 <= 253;
 if ( (unsigned int)v21 > 0xFD )
 v25 = v21 - 253 <= 1792;
 if ( !v25 )
 {
 v26 = v24 >= 0x80000000;
 if ( v24 == 0x80000000 )
 v26 = a1 & 1;
 a1 = set_lodword(a1, v26 + (unsigned int)a1);
 return a1;
 }
 }
 if ( !v25 )
 JUMPOUT(0x11784);
 if ( v21 > -54 )
 {
 v28 = -v21;
 v25 = v28 < 32;
 v29 = v28 - 32;
 if ( v25 )
 {
 v25 = v29 <= -12;
 v30 = v29 + 12;
 if ( v25)
 {
 v31 = v30 + 20;
 v32 = (unsigned int)a1 << (32 - v31);
 a1 = set_lodword(a1, (((unsigned int)a1 >> v31) | (HIDWORD(a1) << (32 - v31))) + (v32 >> 31));
 if ( !(v24 | (2 * v32)) )
 a1 = set_lodword(a1, a1 & ~(v32 >> 31));
 }
 else
 {
 v33 = 12 - v30;
 v34 = (unsigned int)a1 << v33;
 a1 = set_lodword(a1, (((unsigned int)a1 >> (32 - v33)) | ((unsigned int)(a1 >> 32) << v33)) + (v34 >> 31));
 if ( !(v24 | (2 * v34)) )
 a1 = set_lodword(a1, a1 & ~(v34 >> 31));
 }
 }
 else
 {
 v35 = v24 | ((unsigned int)a1 << (32 - v29));
 v36 = ((unsigned int)a1 >> v29) | ((unsigned int)(a1 >> 32) << (32 - v29));
 a1 = set_lodword(a1, (((unsigned int)(a1 >> 32) >> v29) & ~(((unsigned int)(a1 >> 32) & 0x80000000) >> v29)) + (v36 >> 31));
 if ( !(v35 | (2 * v36)) )
 a1 = set_lodword(a1, a1 & ~(v36 >> 31));
 }
 }
 else
 {
 a1 = set_lodword(a1, 0);
 }
 return a1;
}


/* Function: sub_11718 @ 0x11718 */
int sub_11718(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
 bool v8; // cf
 int v9; // r4
 int v10; // r12;
 bool v11; // zf
 int v12; // r5
 bool v13; // zf
 bool v14; // zf

 v11 = v9 == v10;
 v12 = v10 & (a4 >> 20);
 if ( result != v10 )
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
 return result;
}


/* Function: __mulsf3 @ 0x117A4 */
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


/* Function: __aeabi_drsub @ 0x1193C */
double _aeabi_drsub(double a1, double a2)
{
 union { long long ll; unsigned int w[2]; } u;
 u.ll = a1;
 u.w[1] ^= 0x80000000;
 a1 = u.ll;
 return a1 + a2;
}


/* Function: __subdf3 @ 0x11944 */
double _subdf3(double a1, double a2)
{
 {
 union { long long ll; unsigned int w[2]; } u;
 u.ll = a2;
 u.w[1] ^= 0x80000000;
 a2 = u.ll;
 }
 return a1 + a2;
}



/* CRT stub function __aeabi_dadd removed by preprocessor */



/* Function: __floatunsidf @ 0x11BF4 */
int _floatunsidf(int result)
{
 if ( result )
 JUMPOUT(0x11A90);
 return result;
}


/* Function: __floatsidf @ 0x11C18 */
int _floatsidf(int result)
{
 if ( result )
 JUMPOUT(0x11A90);
 return result;
}


/* Function: __extendsfdf2 @ 0x11C40 */
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
 JUMPOUT(0x11A90);
 }
 return result;
}


/* Function: __floatundidf @ 0x11C88 */
int _floatundidf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11CB8);
 return a1;
}



/* CRT stub function __floatdidf removed by preprocessor */



/* Function: __aeabi_frsub @ 0x11CFC */
float _aeabi_frsub(int a1, float a2)
{
 return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x11D04 */
float _subsf3(float a1, int a2)
{
 return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}



/* CRT stub function __aeabi_fadd removed by preprocessor */



/* Function: __floatunsisf @ 0x11E98 */
void _floatunsisf()
{
 JUMPOUT(0x11EA8);
}


/* Function: __floatsisf @ 0x11EA0 */
int _floatsisf(int result)
{
 if ( result < 0 )
 result = -result;
 if ( result )
 JUMPOUT(0x11F00);
 return result;
}


/* Function: __floatundisf @ 0x11EC0 */
int _floatundisf(long long a1)
{
 if ( a1 )
 JUMPOUT(0x11EE8);
 return a1;
}



/* CRT stub function __floatdisf removed by preprocessor */



/* Function: __fixsfsi @ 0x11F4C */
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


/* Function: .term_proc @ 0x11FA8 */
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
