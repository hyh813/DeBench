/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/2/2_clang_O0_g
 * Processor: pc
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* Function declarations */

/* Type definitions */
typedef enum {
    STATE_IDLE,
    STATE_RUNNING,
    STATE_PAUSED,
    STATE_STOPPED
} State;

typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    int width;
    int height;
} Size;

typedef struct {
    Point position;
    Size size;
} Rect;

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Color;

typedef struct {
    Point3D position;
    Rect bounds;
    Color style;
} Widget;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct DNode {
    int data;
    struct DNode *prev;
    struct DNode *next;
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

typedef struct {
    unsigned int a : 1;
    unsigned int b : 2;
    unsigned int c : 3;
    unsigned int d : 6;
    unsigned int e : 20;
} Flags;

typedef union {
    int i;
    float f;
    char bytes[4];
} UnionData;

typedef struct {
    int data;
    int (*process)(int);
} Device;

/* Global variable declarations */
static const char asc_312C[] = "test\n";
static const char asc_3298[] = "test\n";
static const char asc_33B5[] = "test\n";
static const char asc_354F[] = "test\n";
static const int unk_3050[] = {1, 2, 3, 4, 5};
static const int unk_3070[] = {10, 20, 30, 40, 50};
static const int unk_3084[] = {100, 200, 300, 400, 500};
static const int unk_3098[] = {1000, 2000, 3000, 4000, 5000};
static const Point3D unk_30B8[] = {{1, 2, 3}, {4, 5, 6}};
static const Rect unk_30D0[] = {{10, 10, 100, 50}};
static const Widget unk_30E4[] = {{{1, 2, 3}, {{10, 10, 100, 50}}, {255, 0, 0, 255}}};
static int dword_0 = 0;
static char byte_9[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
static int dword_64[16] = {0};

/* Forward declarations */
int double_value(int x);
int complex_callback(int *p, char **args);

/* Macro definitions */
#define HIDWORD(x) ((unsigned int)(((unsigned long long)(x) >> 32) & 0xFFFFFFFF))




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" ::: "memory");
}


/* Function: sub_1070 @ 0x1070 */
int sub_1070(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_10AC @ 0x10AC */
void sub_10AC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x10B0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x11E9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x11ED */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: process_char @ 0x1200 */
char process_char(char c)
{
 if ( c < 65 || c > 90 )
 return c;
 else
 return c + 32;
}


/* Function: process_short @ 0x1240 */
short process_short(short a, short b)
{
 return b + a;
}


/* Function: process_int @ 0x1260 */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: process_long @ 0x1280 */
long process_long(long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x1290 */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x12B0 */
float process_float(float f)
{
 return f * 1.5 + 0.5;
}


/* Function: process_double @ 0x12E0 */
double process_double(double d)
{
 return d / 2.0 + 0.1;
}


/* Function: process_ld @ 0x1310 */
long double process_ld(long double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x1330 */
bool process_bool(int x)
{
 bool v2; // [esp+3h] [ebp-1h]

 v2 = 0;
 if ( x > 0 )
 return x % 2 == 0;
 return v2;
}


/* Function: const_param @ 0x1370 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x1380 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x13B0 */
void test_data_types_l1()
{
 char v0; // al
 char v1; // al
 short v2; // ax
 int v3; // eax
 long v4; // eax
 long long v5; // rax
 long double v6; // fst7
 long double v7; // fst7
 bool v8; // al
 bool v9; // al
 bool v10; // al
 int v11; // eax
 int v12; // eax
 long double v13; // [esp+4h] [ebp-24h]
 int vol_value; // [esp+1Ch] [ebp-Ch] BYREF
 int value; // [esp+20h] [ebp-8h] BYREF

 printf(asc_312C);
 v0 = process_char(65);
 printf("DT-L1-01 (process_char): %c\n", v0);
 v1 = process_char(98);
 printf("DT-L1-01 (process_char): %c\n", v1);
 v2 = process_short(100, 200);
 printf("DT-L1-02 (process_short): %d\n", v2);
 v3 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n", v3);
 v4 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n", v4);
 v5 = process_ll(100);
 printf("DT-L1-05 (process_ll): %lld\n", v5);
 v6 = process_float(2.0);
 printf("DT-L1-06 (process_float): %.2f\n", (double)v6);
 v7 = process_double(4.0);
 printf("DT-L1-07 (process_double): %.2f\n", (double)v7);
 v13 = process_ld(3.0);
 printf("DT-L1-08 (process_ld): %.2Lf\n", *(unsigned long long *)&v13, HIDWORD(v13));
 v8 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n", v8);
 v9 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n", v9);
 v10 = process_bool(-2);
 printf("DT-L1-09 (process_bool): %d\n", v10);
 value = 5;
 v11 = const_param(&value);
 printf("DT-L1-10 (const_param): %d\n", v11);
 vol_value = 10;
 v12 = volatile_access(&vol_value);
 printf("DT-L1-11 (volatile_access): %d\n", v12);
}


/* Function: array_1d_stack @ 0x1640 */
int array_1d_stack(int *arr, int n)
{
 int i; // [esp+0h] [ebp-8h]
 int sum; // [esp+4h] [ebp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 return sum;
}


/* Function: array_string @ 0x1690 */
int array_string(char *str)
{
 int len; // [esp+0h] [ebp-4h]

 for ( len = 0; str[len]; ++len )
 ;
 return len;
}


/* Function: array_2d_stack @ 0x16D0 */
int array_2d_stack(int (*arr)[10])
{
 int i; // [esp+0h] [ebp-8h]
 int sum; // [esp+4h] [ebp-4h]

 sum = 0;
 for ( i = 0; i < 10; ++i )
 sum += (*arr)[10 * i + i];
 return sum;
}


/* Function: array_3d @ 0x1720 */
int array_3d(int (*arr)[5][5])
{
 int k; // [esp+0h] [ebp-10h]
 int j; // [esp+4h] [ebp-Ch]
 int i; // [esp+8h] [ebp-8h]
 int sum; // [esp+Ch] [ebp-4h]

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


/* Function: array_vla @ 0x17C0 */
int array_vla(int n, int *arr)
{
 int i; // [esp+0h] [ebp-8h]
 int sum; // [esp+4h] [ebp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 return sum;
}


/* Function: array_pointer @ 0x1810 */
int array_pointer(int (*arr)[10], int n)
{
 int i; // [esp+0h] [ebp-8h]
 int sum; // [esp+4h] [ebp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += (*arr)[10 * i];
 return sum;
}


/* Function: pointer_array @ 0x1860 */
int pointer_array(int **arr, int n)
{
 int v3; // [esp+0h] [ebp-10h]
 int i; // [esp+4h] [ebp-Ch]
 int sum; // [esp+Ch] [ebp-4h]

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


/* Function: array_complex_index @ 0x18F0 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 if ( x >= 0 && x < w && y >= 0 && y < h )
 return arr[x + w * y];
 else
 return -1;
}


/* Function: array_oob @ 0x1960 */
int array_oob(int *arr, int n)
{
 int i; // [esp+0h] [ebp-8h]
 int sum; // [esp+4h] [ebp-4h]

 sum = 0;
 for ( i = 0; i <= n; ++i )
 sum += arr[i];
 return sum;
}


/* Function: test_array_types @ 0x19B0 */
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
 int *v8; // [esp+24h] [ebp-524h]
 int v9; // [esp+28h] [ebp-520h]
 int i_2; // [esp+30h] [ebp-518h]
 int arr[20]; // [esp+34h] [ebp-514h] BYREF
 int *ptr_arr[10]; // [esp+84h] [ebp-4C4h] BYREF
 int c; // [esp+ACh] [ebp-49Ch] BYREF
 int b; // [esp+B0h] [ebp-498h] BYREF
 int a; // [esp+B4h] [ebp-494h] BYREF
 int i_1; // [esp+B8h] [ebp-490h]
 int arr2[5][10]; // [esp+BCh] [ebp-48Ch] BYREF
 int vla_arr[3]; // [esp+184h] [ebp-3C4h] BYREF
 int k; // [esp+190h] [ebp-3B8h]
 int j_0; // [esp+194h] [ebp-3B4h]
 int i_0; // [esp+198h] [ebp-3B0h]
 int cube[5][5][5]; // [esp+19Ch] [ebp-3ACh] BYREF
 int j; // [esp+390h] [ebp-1B8h]
 int i; // [esp+394h] [ebp-1B4h]
 int matrix[10][10]; // [esp+398h] [ebp-1B0h] BYREF
 char str[6]; // [esp+52Ah] [ebp-1Eh] BYREF
 int arr1[6]; // [esp+530h] [ebp-18h] BYREF

 printf(asc_3298);
 memcpy(arr1, &unk_3050, 0x14u);
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
 vla_arr[0] = 10;
 vla_arr[1] = 20;
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
 *v8++ = 0;
 while ( v8 != &c );
 v6 = pointer_array(ptr_arr, 3);
 printf("ARR-L2-03 (pointer_array): %d\n", v6);
 for ( i_2 = 0; i_2 < 20; ++i_2 )
 arr[i_2] = i_2;
 v7 = array_complex_index(arr, 5, 4, 2, 3);
 printf("ARR-L2-04 (array_complex_index): %d\n", v7);
}


/* Function: ptr_single @ 0x1E50 */
int ptr_single(int *p)
{
 return *p + 10;
}


/* Function: ptr_double @ 0x1E60 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x1E80 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x1EA0 */
int ptr_increment(int *p, int n)
{
 int i; // [esp+0h] [ebp-8h]
 int sum; // [esp+4h] [ebp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += *p++;
 return sum;
}


/* Function: ptr_offset @ 0x1EF0 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x1F10 */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x1F30 */
int ptr_void(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(char *)p;
 return -1;
}


/* Function: ptr_const @ 0x1F80 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1FA0 */
int ptr_const_ptr(int *const p)
{
 *p += 5;
 return *p;
}


/* Function: ptr_func_simple @ 0x1FC0 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x1FF0 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 char *args[2]; // [esp+Ch] [ebp-Ch] BYREF

 args[0] = "test";
 args[1] = (char *)&dword_0;
 return f(p, args);
}


/* Function: ptr_cast @ 0x2040 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x2070 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x2080 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x2090 */
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
 void *handle; // [esp+1Ch] [ebp-7Ch]
 int val12; // [esp+20h] [ebp-78h] BYREF
 int val11; // [esp+24h] [ebp-74h] BYREF
 int val9; // [esp+28h] [ebp-70h] BYREF
 int val8; // [esp+2Ch] [ebp-6Ch] BYREF
 char c7; // [esp+33h] [ebp-65h] BYREF
 int val7; // [esp+34h] [ebp-64h] BYREF
 int arr6[5]; // [esp+38h] [ebp-60h] BYREF
 int arr5[5]; // [esp+4Ch] [ebp-4Ch] BYREF
 int arr4[5]; // [esp+60h] [ebp-38h] BYREF
 int ***ppptr3; // [esp+74h] [ebp-24h]
 int **pptr3; // [esp+78h] [ebp-20h] BYREF
 int *ptr3; // [esp+7Ch] [ebp-1Ch] BYREF
 int val3; // [esp+80h] [ebp-18h] BYREF
 int **pptr2; // [esp+84h] [ebp-14h]
 int *ptr2; // [esp+88h] [ebp-10h] BYREF
 int val2; // [esp+8Ch] [ebp-Ch] BYREF
 int val1; // [esp+90h] [ebp-8h] BYREF

 printf(asc_33B5);
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
 memcpy(arr4, &unk_3070, sizeof(arr4));
 v3 = ptr_increment(arr4, 5);
 printf("PTR-L2-04 (ptr_increment): %d\n", v3);
 memcpy(arr5, &unk_3084, sizeof(arr5));
 v4 = ptr_offset(arr5, 2);
 printf("PTR-L2-05 (ptr_offset): %d\n", v4);
 memcpy(arr6, &unk_3098, sizeof(arr6));
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
 v10 = ptr_func_simple(double_value, 5);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", v10);
 val11 = 5;
 v11 = ptr_func_complex(complex_callback, &val11);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", v11);
 val12 = 305419896;
 v12 = ptr_cast(&val12);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", v12);
 handle = opaque_handle_create(10);
 v13 = opaque_handle_op(handle);
 printf("PTR-L2-13 (opaque_handle_op): %d\n", v13);
}


/* Function: double_value @ 0x23C0 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: complex_callback @ 0x23D0 */
int complex_callback(int *p, char **args)
{
 *p += 10;
 return *args != 0;
}


/* Function: struct_simple @ 0x2400 */
int struct_simple(Point3D *p)
{
 return p->z + p->y + p->x;
}


/* Function: struct_array @ 0x2420 */
int struct_array(Point3D *pts, int n)
{
 int i; // [esp+0h] [ebp-8h]
 int sum; // [esp+4h] [ebp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += pts[i].z + pts[i].y + pts[i].x;
 return sum;
}


/* Function: struct_nested @ 0x2490 */
int struct_nested(Rect *r)
{
 return r->size.width + r->position.x;
}


/* Function: struct_deep @ 0x24B0 */
int struct_deep(Widget *w)
{
 return w->style.r + w->bounds.size.width;
}


/* Function: struct_with_ptr @ 0x24D0 */
int struct_with_ptr(Node *node)
{
 int data; // [esp+0h] [ebp-8h]

 if ( node->next )
 data = node->next->data;
 else
 data = 0;
 return data + node->data;
}


/* Function: struct_bitfields @ 0x2520 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned short *)f >> 6) + ((*(unsigned short *)f >> 3) & 7) + ((*(unsigned short *)f >> 1) & 3) + (*(unsigned short *)f & 1);
}


/* Function: union_type @ 0x2570 */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return u->bytes[0];
}


/* Function: union_array @ 0x25E0 */
int union_array(UnionData *arr, int n)
{
 int i; // [esp+0h] [ebp-8h]
 int sum; // [esp+4h] [ebp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i].i;
 return sum;
}


/* Function: enum_type @ 0x2630 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x2640 */
int enum_switch(State s)
{
 int v2; // [esp+8h] [ebp-4h]

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


/* Function: struct_func_ptr @ 0x26C0 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x26F0 */
int linked_list(Node *head)
{
 int sum; // [esp+4h] [ebp-4h]

 sum = 0;
 while ( head )
 {
 sum += head->data;
 head = head->next;
 }
 return sum;
}


/* Function: doubly_linked_list @ 0x2740 */
int doubly_linked_list(DNode *head)
{
 int sum; // [esp+4h] [ebp-4h]

 sum = 0;
 while ( head )
 {
 sum += head->data;
 head = head->next;
 }
 return sum;
}


/* Function: binary_tree_sum @ 0x2790 */
int binary_tree_sum(TreeNode *root)
{
 int data; // [esp+4h] [ebp-14h]
 int v3; // [esp+8h] [ebp-10h]

 if ( !root )
 return 0;
 data = root->data;
 v3 = binary_tree_sum(root->left) + data;
 return binary_tree_sum(root->right) + v3;
}


/* Function: binary_tree @ 0x2810 */
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x2840 */
int graph_traverse(Graph *g)
{
 Edge *edge; // [esp+0h] [ebp-Ch]
 int i; // [esp+4h] [ebp-8h]
 int sum; // [esp+8h] [ebp-4h]

 sum = 0;
 for ( i = 0; i < g->numVertices; ++i )
 {
 for ( edge = g->adjList[i]; edge; edge = edge->next )
 sum += edge->dest;
 }
 return sum;
}


/* Function: test_composite_types @ 0x28B0 */
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
 Graph g; // [esp+18h] [ebp-120h] BYREF
 Edge e1; // [esp+48h] [ebp-F0h] BYREF
 TreeNode tree; // [esp+50h] [ebp-E8h] BYREF
 DNode dlist[2]; // [esp+60h] [ebp-D8h] BYREF
 Node list[3]; // [esp+78h] [ebp-C0h] BYREF
 Device dev; // [esp+90h] [ebp-A8h] BYREF
 UnionData arr_u[4]; // [esp+98h] [ebp-A0h] BYREF
 UnionData u; // [esp+A8h] [ebp-90h] BYREF
 Flags f; // [esp+B0h] [ebp-88h] BYREF
 Node node1; // [esp+B8h] [ebp-80h] BYREF
 Node node2; // [esp+C0h] [ebp-78h] BYREF
 Widget w; // [esp+C8h] [ebp-70h] BYREF
 Rect r; // [esp+F8h] [ebp-40h] BYREF
 Point3D pts[2]; // [esp+110h] [ebp-28h] BYREF
 Point3D p1; // [esp+128h] [ebp-10h] BYREF

 printf(asc_354F);
 p1.x = 1;
 p1.y = 2;
 p1.z = 3;
 v0 = struct_simple(&p1);
 printf("CMP-L2-01 (struct_simple): %d\n", v0);
 memcpy(pts, &unk_30B8, sizeof(pts));
 v1 = struct_array(pts, 2);
 printf("CMP-L2-02 (struct_array): %d\n", v1);
 memcpy(&r, &unk_30D0, sizeof(r));
 v2 = struct_nested(&r);
 printf("CMP-L2-03 (struct_nested): %d\n", v2);
 memcpy(&w, &unk_30E4, sizeof(w));
 v3 = struct_deep(&w);
 printf("CMP-L2-04 (struct_deep): %d\n", v3);
 node2.data = 20;
 node2.next = 0;
 node1.data = 10;
 node1.next = &node2;
 v4 = struct_with_ptr(&node1);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", v4);
 *(unsigned int *)&f = 6429;
 *((unsigned int *)&f + 1) = 0;
 v5 = struct_bitfields(&f);
 printf("CMP-L2-06 (struct_bitfields): %d\n", v5);
 u.i = 305419896;
 v6 = union_type(&u, 0);
 printf("CMP-L2-07 (union_type): %d\n", v6);
 arr_u[0].i = 10;
 arr_u[1].i = 20;
 arr_u[2].i = 30;
 v7 = union_array(arr_u, 3);
 printf("CMP-L2-08 (union_array): %d\n", v7);
 v8 = enum_type(STATE_RUNNING);
 printf("CMP-L2-09 (enum_type): %d\n", v8);
 v9 = enum_switch(STATE_PAUSED);
 printf("CMP-L2-10 (enum_switch): %d\n", v9);
 dev.data = (int)&byte_9[1];
 dev.process = process_int;
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
 tree.data = (int)&dword_64;
 tree.left = 0;
 tree.right = 0;
 v13 = binary_tree(&tree);
 printf("CMP-L2-14 (binary_tree): %d\n", v13);
 e1.dest = 1;
 e1.next = 0;
 memset(&g.adjList[1], 0, 36);
 g.numVertices = 2;
 g.adjList[0] = &e1;
 v14 = graph_traverse(&g);
 printf("CMP-L2-15 (graph_traverse): %d\n", v14);
}


/* Function: main @ 0x2DD0 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x602C */

/* FAILED to decompile: printf @ 0x6030 */

/* FAILED to decompile: memcpy @ 0x6034 */

/* FAILED to decompile: __cxa_finalize @ 0x6038 */

/* Total functions decompiled: 71, failed: 4 */
