/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/2/2_clang_O0_g
 * Processor: pc
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* Type definitions */
typedef struct Point3D {
    int x;
    int y;
    int z;
} Point3D;

typedef struct Rect {
    struct {
        int x;
        int y;
        int z;
    } position;
    struct {
        int width;
        int height;
    } size;
} Rect;

typedef struct Widget {
    struct {
        struct {
            int r;
        } fill;
    } style;
    struct {
        struct {
            int x;
            int y;
            int z;
        } position;
        struct {
            int width;
            int height;
        } size;
    } bounds;
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
    Edge *adjList[1];
} Graph;

typedef struct Device {
    int data;
    int (*process)(int);
} Device;

typedef union UnionData {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef struct Flags {
    unsigned int value : 16;
} Flags;

typedef enum {
    STATE_IDLE,
    STATE_RUNNING,
    STATE_PAUSED,
    STATE_STOPPED
} State;

extern void *_gmon_start__;

/* Forward declarations for functions used before definition */
int double_value(int x);
int complex_callback(int *p, char **args);

/* Data references used in the code */
static const unsigned char unk_30FC[48] = {0};
static const unsigned char byte_9[16] = {0};

/* String constants for test labels */
static const char *format = "Testing data types\n";
static const char *asc_32BC = "=== Array Tests ===\n";
static const char *asc_33D9 = "=== Pointer Tests ===\n";
static const char *asc_3573 = "=== Composite Type Tests ===\n";
static int dword_0 = 0;

/* Function: init_proc() - placeholder for CRT initialization */
void init_proc(void)
{
 /* CRT initialization placeholder - actual implementation removed */
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* Placeholder for jump table - no-op */
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: process_char @ 0x1160 */
char process_char(char c)
{
 if ( c < 65 || c > 90 )
 return c;
 else
 return c + 32;
}


/* Function: process_short @ 0x11A0 */
short process_short(short a, short b)
{
 return b + a;
}


/* Function: process_int @ 0x11C0 */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: process_long @ 0x11E0 */
long process_long(long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x1200 */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x1220 */
float process_float(float f)
{
 return (float)(f * 1.5) + 0.5;
}


/* Function: process_double @ 0x1250 */
double process_double(double d)
{
 return d / 2.0 + 0.1;
}


/* Function: process_ld @ 0x1280 */
long double process_ld(long double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x12A0 */
bool process_bool(int x)
{
 bool v2; // [rsp+1h] [rbp-5h]

 v2 = 0;
 if ( x > 0 )
 return x % 2 == 0;
 return v2;
}


/* Function: const_param @ 0x12E0 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x1300 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x1330 */
void test_data_types_l1()
{
 char v0; // al
 char v1; // al
 short v2; // ax
 int v3; // eax
 long v4; // rax
 long long v5; // rax
 float v6; // xmm0_4
 double v7; // xmm0_8
 long double v8; // fst7
 bool v9; // al
 bool v10; // al
 bool v11; // al
 int v12; // eax
 int v13; // eax
 int vol_value; // [rsp+18h] [rbp-8h] BYREF
 int value; // [rsp+1Ch] [rbp-4h] BYREF

 printf(format);
 v0 = process_char(65);
 printf("DT-L1-01 (process_char): %c\n", (unsigned int)v0);
 v1 = process_char(98);
 printf("DT-L1-01 (process_char): %c\n", (unsigned int)v1);
 v2 = process_short(100, 200);
 printf("DT-L1-02 (process_short): %d\n", v2);
 v3 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n", v3);
 v4 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n", v4);
 v5 = process_ll(100);
 printf("DT-L1-05 (process_ll): %lld\n", v5);
 v6 = process_float(2.0);
 printf("DT-L1-06 (process_float): %.2f\n", v6);
 v7 = process_double(4.0);
 printf("DT-L1-07 (process_double): %.2f\n", v7);
 v8 = process_ld(3.0);
 printf("DT-L1-08 (process_ld): %.2Lf\n", v8);
 v9 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n", v9);
 v10 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n", v10);
 v11 = process_bool(-2);
 printf("DT-L1-09 (process_bool): %d\n", v11);
 value = 5;
 v12 = const_param(&value);
 printf("DT-L1-10 (const_param): %d\n", v12);
 vol_value = 10;
 v13 = volatile_access(&vol_value);
 printf("DT-L1-11 (volatile_access): %d\n", v13);
}


/* Function: array_1d_stack @ 0x14F0 */
int array_1d_stack(int *arr, int n)
{
 int i; // [rsp+0h] [rbp-14h]
 int sum; // [rsp+4h] [rbp-10h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 return sum;
}


/* Function: array_string @ 0x1540 */
int array_string(char *str)
{
 int len; // [rsp+0h] [rbp-Ch]

 for ( len = 0; str[len]; ++len )
 ;
 return len;
}


/* Function: array_2d_stack @ 0x1580 */
int array_2d_stack(int (*arr)[10])
{
 int i; // [rsp+0h] [rbp-10h]
 int sum; // [rsp+4h] [rbp-Ch]

 sum = 0;
 for ( i = 0; i < 10; ++i )
 sum += (*arr)[10 * i + i];
 return sum;
}


/* Function: array_3d @ 0x15D0 */
int array_3d(int (*arr)[5][5])
{
 int k; // [rsp+0h] [rbp-18h]
 int j; // [rsp+4h] [rbp-14h]
 int i; // [rsp+8h] [rbp-10h]
 int sum; // [rsp+Ch] [rbp-Ch]

 sum = 0;
 for ( i = 0; i < 5; ++i )
 {
 for ( j = 0; j < 5; ++j )
 {
 for ( k = 0; k < 5; ++k )
 sum += (*arr)[5 * i][5 * j + k];
 }
 }
 return sum;
}


/* Function: array_vla @ 0x1680 */
int array_vla(int n, int *arr)
{
 int i; // [rsp+0h] [rbp-18h]
 int sum; // [rsp+4h] [rbp-14h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 return sum;
}


/* Function: array_pointer @ 0x16D0 */
int array_pointer(int (*arr)[10], int n)
{
 int i; // [rsp+0h] [rbp-14h]
 int sum; // [rsp+4h] [rbp-10h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += (*arr)[10 * i];
 return sum;
}


/* Function: pointer_array @ 0x1720 */
int pointer_array(int **arr, int n)
{
 int v3; // [rsp+0h] [rbp-1Ch]
 int i; // [rsp+4h] [rbp-18h]
 int sum; // [rsp+Ch] [rbp-10h]

 sum = 0;
 if ( n >= 10 )
 v3 = 10;
 else
 v3 = n;
 for ( i = 0; i < v3; ++i )
 {
 if ( arr[i] )
 sum += *arr[i];
 }
 return sum;
}


/* Function: array_complex_index @ 0x17B0 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 if ( x >= 0 && x < w && y >= 0 && y < h )
 return arr[x + w * y];
 else
 return -1;
}


/* Function: array_oob @ 0x1820 */
int array_oob(int *arr, int n)
{
 int i; // [rsp+0h] [rbp-14h]
 int sum; // [rsp+4h] [rbp-10h]

 sum = 0;
 for ( i = 0; i <= n; ++i )
 sum += arr[i];
 return sum;
}


/* Function: test_array_types @ 0x1870 */
void test_array_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int *v8; // [rsp+10h] [rbp-560h]
 int v9; // [rsp+18h] [rbp-558h]
 int i_2; // [rsp+1Ch] [rbp-554h]
 int arr[20]; // [rsp+20h] [rbp-550h] BYREF
 int *ptr_arr[10]; // [rsp+70h] [rbp-500h] BYREF
 int c; // [rsp+C0h] [rbp-4B0h] BYREF
 int b; // [rsp+C4h] [rbp-4ACh] BYREF
 int a; // [rsp+C8h] [rbp-4A8h] BYREF
 int i_1; // [rsp+CCh] [rbp-4A4h]
 int arr2[5][10]; // [rsp+D0h] [rbp-4A0h] BYREF
 int vla_arr[3]; // [rsp+198h] [rbp-3D8h] BYREF
 int k; // [rsp+1A4h] [rbp-3CCh]
 int j_0; // [rsp+1A8h] [rbp-3C8h]
 int i_0; // [rsp+1ACh] [rbp-3C4h]
 int cube[5][5][5]; // [rsp+1B0h] [rbp-3C0h] BYREF
 int j; // [rsp+3A8h] [rbp-1C8h]
 int i; // [rsp+3ACh] [rbp-1C4h]
 int matrix[10][10]; // [rsp+3B0h] [rbp-1C0h] BYREF
 char str[6]; // [rsp+54Ah] [rbp-26h] BYREF
 int arr1[5]; // [rsp+550h] [rbp-20h] BYREF

 printf(asc_32BC);
 *(unsigned long long *)arr1 = 0x200000001LL;
 *(unsigned long long *)&arr1[2] = 0x400000003LL;
 arr1[4] = 5;
 v0 = array_1d_stack(arr1, 5);
 printf("ARR-L1-01 (array_1d_stack): %d\n", v0);
 strcpy(str, "hello");
 v1 = array_string(str);
 printf("ARR-L1-02 (array_string): %d\n", v1);
 for ( i = 0; i < 10; ++i )
 {
 for ( j = 0; j < 10; ++j )
 {
 if ( i == j )
 v9 = i;
 else
 v9 = 0;
 matrix[i][j] = v9;
 }
 }
 v2 = array_2d_stack(matrix);
 printf("ARR-L1-03 (array_2d_stack): %d\n", v2);
 for ( i_0 = 0; i_0 < 5; ++i_0 )
 {
 for ( j_0 = 0; j_0 < 5; ++j_0 )
 {
 for ( k = 0; k < 5; ++k )
 cube[i_0][j_0][k] = 1;
 }
 }
 v3 = array_3d(cube);
 printf("ARR-L1-04 (array_3d): %d\n", v3);
 *(unsigned long long *)vla_arr = 0x140000000ALL;
 vla_arr[2] = 30;
 v4 = array_vla(3, vla_arr);
 printf("ARR-L2-01 (array_vla): %d\n", v4);
 for ( i_1 = 0; i_1 < 5; ++i_1 )
 arr2[i_1][0] = 10 * i_1;
 v5 = array_pointer(arr2, 5);
 printf("ARR-L2-02 (array_pointer): %d\n", v5);
 a = 10;
 b = 20;
 c = 30;
 ptr_arr[0] = &a;
 ptr_arr[1] = &b;
 ptr_arr[2] = &c;
 ptr_arr[3] = 0;
 v8 = (int *)&ptr_arr[4];
 do
 {
 *(unsigned long long *)v8 = 0;
 v8 += 2;
 }
 while ( v8 != &c );
 v6 = pointer_array(ptr_arr, 3);
 printf("ARR-L2-03 (pointer_array): %d\n", v6);
 for ( i_2 = 0; i_2 < 20; ++i_2 )
 arr[i_2] = i_2;
 v7 = array_complex_index(arr, 5, 4, 2, 3);
 printf("ARR-L2-04 (array_complex_index): %d\n", v7);
}


/* Function: ptr_single @ 0x1C90 */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0x1CB0 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x1CD0 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x1CF0 */
int ptr_increment(int *p, int n)
{
 int i; // [rsp+0h] [rbp-14h]
 int sum; // [rsp+4h] [rbp-10h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += *p++;
 return sum;
}


/* Function: ptr_offset @ 0x1D40 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x1D60 */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x1D80 */
int ptr_void(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(char *)p;
 return -1;
}


/* Function: ptr_const @ 0x1DD0 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1DF0 */
int ptr_const_ptr(int *const p)
{
 *p += 5;
 return *p;
}


/* Function: ptr_func_simple @ 0x1E10 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x1E30 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 char *args[2]; // [rsp+0h] [rbp-20h] BYREF
 int *pa; // [rsp+10h] [rbp-10h]
 int (*fa)(int *, char **); // [rsp+18h] [rbp-8h]

 fa = f;
 pa = p;
 args[0] = "test";
 args[1] = (char *)&dword_0;
 return f(p, args);
}


/* Function: ptr_cast @ 0x1E70 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x1EA0 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x1EB0 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x1ED0 */
void test_pointer_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax
 int v12; // eax
 int v13; // eax
 void *handle; // [rsp+0h] [rbp-B0h]
 int val12; // [rsp+8h] [rbp-A8h] BYREF
 int val11; // [rsp+Ch] [rbp-A4h] BYREF
 int val9; // [rsp+10h] [rbp-A0h] BYREF
 int val8; // [rsp+14h] [rbp-9Ch] BYREF
 char c7; // [rsp+1Bh] [rbp-95h] BYREF
 int val7; // [rsp+1Ch] [rbp-94h] BYREF
 int arr6[5]; // [rsp+20h] [rbp-90h] BYREF
 int arr5[5]; // [rsp+40h] [rbp-70h] BYREF
 int arr4[5]; // [rsp+60h] [rbp-50h] BYREF
 int ***ppptr3; // [rsp+78h] [rbp-38h]
 int **pptr3; // [rsp+80h] [rbp-30h] BYREF
 int *ptr3; // [rsp+88h] [rbp-28h] BYREF
 int val3; // [rsp+94h] [rbp-1Ch] BYREF
 int **pptr2; // [rsp+98h] [rbp-18h]
 int *ptr2; // [rsp+A0h] [rbp-10h] BYREF
 int val2; // [rsp+A8h] [rbp-8h] BYREF
 int val1; // [rsp+ACh] [rbp-4h] BYREF

 printf(asc_33D9);
 val1 = 5;
 v0 = ptr_single(&val1);
 printf("PTR-L2-01 (ptr_single): %d\n", v0);
 val2 = 10;
 ptr2 = &val2;
 pptr2 = &ptr2;
 v1 = ptr_double(&ptr2);
 printf("PTR-L2-02 (ptr_double): %d\n", v1);
 val3 = 5;
 ptr3 = &val3;
 pptr3 = &ptr3;
 ppptr3 = &pptr3;
 v2 = ptr_triple(&pptr3);
 printf("PTR-L2-03 (ptr_triple): %d\n", v2);
 *(unsigned long long *)arr4 = 0x200000001LL;
 *(unsigned long long *)&arr4[2] = 0x400000003LL;
 arr4[4] = 5;
 v3 = ptr_increment(arr4, 5);
 printf("PTR-L2-04 (ptr_increment): %d\n", v3);
 *(unsigned long long *)arr5 = 0x140000000ALL;
 *(unsigned long long *)&arr5[2] = 0x280000001ELL;
 arr5[4] = 50;
 v4 = ptr_offset(arr5, 2);
 printf("PTR-L2-05 (ptr_offset): %d\n", v4);
 *(unsigned long long *)arr6 = 0xA00000000LL;
 *(unsigned long long *)&arr6[2] = 0x1E00000014LL;
 arr6[4] = 40;
 v5 = ptr_diff(&arr6[4], arr6);
 printf("PTR-L2-06 (ptr_diff): %d\n", v5);
 val7 = 42;
 c7 = 65;
 v6 = ptr_void(&val7, 0);
 printf("PTR-L2-07 (ptr_void): %d\n", v6);
 v7 = ptr_void(&c7, 1);
 printf("PTR-L2-07 (ptr_void): %d\n", v7);
 val8 = 10;
 v8 = ptr_const(&val8);
 printf("PTR-L2-08 (ptr_const): %d\n", v8);
 val9 = 10;
 v9 = ptr_const_ptr(&val9);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", v9);
 v10 = ptr_func_simple((int (*)(int))double_value, 5);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", v10);
 val11 = 5;
 v11 = ptr_func_complex((int (*)(int *, char **))complex_callback, &val11);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", v11);
 val12 = 305419896;
 v12 = ptr_cast(&val12);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", v12);
 handle = opaque_handle_create(10);
 v13 = opaque_handle_op(handle);
 printf("PTR-L2-13 (opaque_handle_op): %d\n", v13);
}


/* Function: double_value @ 0x2180 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: complex_callback @ 0x2190 */
int complex_callback(int *p, char **args)
{
 *p += 10;
 return *args != 0;
}


/* Function: struct_simple @ 0x21D0 */
int struct_simple(Point3D *p)
{
 return p->z + p->y + p->x;
}


/* Function: struct_array @ 0x21F0 */
int struct_array(Point3D *pts, int n)
{
 int i; // [rsp+0h] [rbp-14h]
 int sum; // [rsp+4h] [rbp-10h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += pts[i].z + pts[i].y + pts[i].x;
 return sum;
}


/* Function: struct_nested @ 0x2270 */
int struct_nested(Rect *r)
{
 return r->size.width + r->position.x;
}


/* Function: struct_deep @ 0x2290 */
int struct_deep(Widget *w)
{
 return w->style.fill.r + w->bounds.position.z;
}


/* Function: struct_with_ptr @ 0x22B0 */
int struct_with_ptr(Node *node)
{
 int data; // [rsp+0h] [rbp-10h]

 if ( node->next )
 data = node->next->data;
 else
 data = 0;
 return data + node->data;
}


/* Function: struct_bitfields @ 0x2300 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned short *)f >> 6) + ((*(unsigned short *)f >> 3) & 7) + ((*(unsigned short *)f >> 1) & 3) + (*(unsigned short *)f & 1);
}


/* Function: union_type @ 0x2350 */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return u->bytes[0];
}


/* Function: union_array @ 0x23A0 */
int union_array(UnionData *arr, int n)
{
 int i; // [rsp+0h] [rbp-14h]
 int sum; // [rsp+4h] [rbp-10h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i].i;
 return sum;
}


/* Function: enum_type @ 0x23F0 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x2400 */
int enum_switch(State s)
{
 int v2; // [rsp+Ch] [rbp-4h]

 switch ( s )
 {
 case STATE_IDLE:
 v2 = 0;
 break;
 case STATE_RUNNING:
 v2 = 100;
 break;
 case STATE_PAUSED:
 v2 = 50;
 break;
 case STATE_STOPPED:
 v2 = -1;
 break;
 default:
 v2 = -99;
 break;
 }
 return v2;
}


/* Function: struct_func_ptr @ 0x2470 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x24A0 */
int linked_list(Node *head)
{
 int sum; // [rsp+Ch] [rbp-Ch]

 sum = 0;
 while ( head )
 {
 sum += head->data;
 head = head->next;
 }
 return sum;
}


/* Function: doubly_linked_list @ 0x24F0 */
int doubly_linked_list(DNode *head)
{
 int sum; // [rsp+Ch] [rbp-Ch]

 sum = 0;
 while ( head )
 {
 sum += head->data;
 head = head->next;
 }
 return sum;
}


/* Function: binary_tree_sum @ 0x2540 */
int binary_tree_sum(TreeNode *root)
{
 int data; // [rsp+8h] [rbp-18h]
 int v3; // [rsp+Ch] [rbp-14h]

 if ( !root )
 return 0;
 data = root->data;
 v3 = binary_tree_sum(root->left) + data;
 return binary_tree_sum(root->right) + v3;
}


/* Function: binary_tree @ 0x25B0 */
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x25D0 */
int graph_traverse(Graph *g)
{
 Edge *edge; // [rsp+0h] [rbp-18h]
 int i; // [rsp+8h] [rbp-10h]
 int sum; // [rsp+Ch] [rbp-Ch]

 sum = 0;
 for ( i = 0; i < g->numVertices; ++i )
 {
 for ( edge = g->adjList[i]; edge; edge = edge->next )
 sum += edge->dest;
 }
 return sum;
}


/* Function: test_composite_types @ 0x2650 */
void test_composite_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax
 int v12; // eax
 int v13; // eax
 int v14; // eax
 Graph g; // [rsp+0h] [rbp-1B0h] BYREF
 Edge e1; // [rsp+58h] [rbp-158h] BYREF
 TreeNode tree; // [rsp+68h] [rbp-148h] BYREF
 DNode dlist[2]; // [rsp+80h] [rbp-130h] BYREF
 Node list[3]; // [rsp+B0h] [rbp-100h] BYREF
 Device dev; // [rsp+E8h] [rbp-C8h] BYREF
 UnionData arr_u[4]; // [rsp+F8h] [rbp-B8h] BYREF
 UnionData u; // [rsp+108h] [rbp-A8h] BYREF
 Flags f; // [rsp+110h] [rbp-A0h] BYREF
 Node node1; // [rsp+118h] [rbp-98h] BYREF
 Node node2; // [rsp+128h] [rbp-88h] BYREF
 Widget w; // [rsp+138h] [rbp-78h] BYREF
 Rect r; // [rsp+168h] [rbp-48h] BYREF
 Point3D pts[2]; // [rsp+180h] [rbp-30h] BYREF
 Point3D p1; // [rsp+1A0h] [rbp-10h] BYREF

 printf(asc_3573);
 *(unsigned long long *)&p1.x = 0x200000001LL;
 p1.z = 3;
 v0 = struct_simple(&p1);
 printf("CMP-L2-01 (struct_simple): %d\n", v0);
 *(unsigned long long *)&pts[0].x = 0x100000001LL;
 *(unsigned long long *)&pts[0].z = 0x200000001LL;
 *(unsigned long long *)&pts[1].y = 0x200000002LL;
 v1 = struct_array(pts, 2);
 printf("CMP-L2-02 (struct_array): %d\n", v1);
 *(unsigned long long *)&r.position.x = 0xA00000005LL;
 *(unsigned long long *)&r.position.z = 0x6400000000LL;
 r.size.height = 200;
 v2 = struct_nested(&r);
 printf("CMP-L2-03 (struct_nested): %d\n", v2);
 memcpy(&w, &unk_30FC, sizeof(w));
 v3 = struct_deep(&w);
 printf("CMP-L2-04 (struct_deep): %d\n", v3);
 *(unsigned long long *)&node2.data = 20;
 node2.next = 0;
 node1.data = 10;
 node1.next = &node2;
 v4 = struct_with_ptr(&node1);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", v4);
 f.value = 6429;
 v5 = struct_bitfields(&f);
 printf("CMP-L2-06 (struct_bitfields): %d\n", v5);
 u.i = 305419896;
 v6 = union_type(&u, 0);
 printf("CMP-L2-07 (union_type): %d\n", v6);
 *(unsigned long long *)&arr_u[0].i = 0x140000000ALL;
 arr_u[2].i = 30;
 v7 = union_array(arr_u, 3);
 printf("CMP-L2-08 (union_array): %d\n", v7);
 v8 = enum_type(STATE_RUNNING);
 printf("CMP-L2-09 (enum_type): %d\n", v8);
 v9 = enum_switch(STATE_PAUSED);
 printf("CMP-L2-10 (enum_switch): %d\n", v9);
 dev.data = (int)(uintptr_t)&byte_9[1];
 dev.process = (int (*)(int))process_int;
 v10 = struct_func_ptr(&dev);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", v10);
 list[0].data = 10;
 list[0].next = &list[1];
 list[1].data = 20;
 list[1].next = &list[2];
 list[2].data = 30;
 list[2].next = 0;
 v11 = linked_list(list);
 printf("CMP-L2-12 (linked_list): %d\n", v11);
 dlist[0].data = 10;
 dlist[0].prev = 0;
 dlist[1].data = 20;
 dlist[1].next = 0;
 dlist[1].prev = dlist;
 dlist[0].next = &dlist[1];
 v12 = doubly_linked_list(dlist);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v12);
 *(unsigned long long *)&tree.data = 100;
 tree.left = 0;
 tree.right = 0;
 v13 = binary_tree(&tree);
 printf("CMP-L2-14 (binary_tree): %d\n", v13);
 *(unsigned long long *)&e1.dest = 1;
 e1.next = 0;
 memset(&g, 0, sizeof(g));
 g.numVertices = 2;
 g.adjList[0] = &e1;
 v14 = graph_traverse(&g);
 printf("CMP-L2-15 (graph_traverse): %d\n", v14);
}


/* Function: main @ 0x2A30 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


/* Function: .term_proc @ 0x2A5C */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6050 */

/* FAILED to decompile: printf @ 0x6058 */

/* FAILED to decompile: memset @ 0x6060 */

/* FAILED to decompile: memcpy @ 0x6068 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6070 */

/* FAILED to decompile: __gmon_start__ @ 0x6080 */

/* Total functions decompiled: 65, failed: 6 */
