/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/2/2_gcc_O2_g
 * Processor: pc
 */

#include <stdbool.h>

/* x86 GS segment read for stack canary */
static unsigned int __readgsdword(unsigned int offset)
{
    unsigned int value;
    __asm__ volatile("movl %%gs:%1, %0" : "=r"(value) : "m"(*(unsigned int *)(offset)));
    return value;
}

typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct {
    Point3D position;
    int x;
    int y;
    int z;
} Point3DRect;

typedef struct {
    Point3DRect position;
    struct {
        int width;
        int height;
        int depth;
    } size;
} Rect;

typedef struct {
    unsigned char data[3];
    struct {
        unsigned char r;
        unsigned char g;
        unsigned char b;
    } fill;
} WidgetStyle;

typedef struct {
    Point3DRect bounds;
    WidgetStyle style;
    int data;
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

typedef struct {
    int numVertices;
    Edge *adjList[1];
} Graph;

typedef struct {
    unsigned int f1 : 1;
    unsigned int f2 : 2;
    unsigned int f3 : 3;
    unsigned int f4 : 12;
} Flags;

typedef struct {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

typedef enum {
    STATE_START = 0,
    STATE_RUNNING = 1,
    STATE_PAUSED = 2,
    STATE_STOPPED = 3
} State;

static const int CSWTCH_75[4] = {0, 10, 20, 50};

typedef struct {
    void *data;
    int (*process)(void *);
} Device;

static const char *asc_3008 = "Testing Data Types";
static const char *asc_33BD = "Testing Array Types";
static const char *asc_3430 = "Testing Pointer Types";
static const char *asc_3526 = "Testing Composite Types";

/* Function: .init_proc @ 0x1000 - removed (CRT stub) */

/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *8(%%ebx)" ::: "memory");
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
int sub_1080(int a1)
{
 return (*(int (**)(void))(a1 + 32))();
}


/* Function: main @ 0x10D0 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_112C @ 0x112C */
void sub_112C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1130 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1269 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x126D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: process_char @ 0x1280 */
char process_char(char c)
{
 char result; // al

 result = c;
 if ( (unsigned char)(c - 65) < 0x1Au )
 return c + 32;
 return result;
}


/* Function: process_short @ 0x12A0 */
short process_short(short a, short b)
{
 return a + b;
}


/* Function: process_int @ 0x12B0 */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: process_long @ 0x12C0 */
int process_long(int x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x12D0 */
long long process_ll(long long x)
{
 long long result; // rax

 result = (unsigned int)x * (unsigned long long)(unsigned int)x;
 result += ((unsigned long long)(2 * (x >> 32) * (x >> 32)) << 32);
 return result;
}


/* Function: process_float @ 0x12F0 */
float process_float(float f)
{
 return 1.5 * f + 0.5;
}


/* Function: process_double @ 0x1320 */
double process_double(double d)
{
 return 0.5 * d + 0.1;
}


/* Function: process_ld @ 0x1350 */
long double process_ld(long double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x1360 */
bool process_bool(int x)
{
 bool result; // al

 result = (x & 1) == 0;
 if ( x <= 0 )
 return 0;
 return result;
}


/* Function: const_param @ 0x1380 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x1390 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x13A0 */
void test_data_types_l1()
{
 puts(asc_3008);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 0);
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", -858993459);
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x14F0 */
int array_1d_stack(int *arr, int n)
{
 int *v2; // eax
 int v3; // edx

 if ( n <= 0 )
 return 0;
 v2 = arr;
 v3 = 0;
 do
 v3 += *v2++;
 while ( v2 != &arr[n] );
 return v3;
}


/* Function: array_string @ 0x1520 */
int array_string(char *str)
{
 int result; // eax

 result = 0;
 if ( *str )
 {
 do
 ++result;
 while ( str[result] );
 }
 return result;
}


/* Function: array_2d_stack @ 0x1550 */
int array_2d_stack(int (*arr)[10])
{
 int *v1; // eax
 int v2; // edx

 v1 = (int *)arr;
 v2 = 0;
 do
 {
 v2 += *v1;
 v1 += 11;
 }
 while ( v1 != &(*arr)[110] );
 return v2;
}


/* Function: array_3d @ 0x1570 */
int array_3d(int (*arr)[5][5])
{
 int result; // eax
 int *v2; // ecx
 int *v3; // edx
 int v4; // eax

 result = 0;
 v2 = (*arr)[5];
 do
 {
 v3 = v2 - 25;
 do
 {
 v4 = *v3 + result;
 v3 += 5;
 result = *(v3 - 1) + *(v3 - 2) + *(v3 - 3) + *(v3 - 4) + v4;
 }
 while ( v3 != v2 );
 v2 = v3 + 25;
 }
 while ( v3 + 25 != (*arr)[30] );
 return result;
}


/* Function: array_vla @ 0x15B0 */
int array_vla(int n, int *arr)
{
 int *v2; // eax
 int v3; // edx

 if ( n <= 0 )
 return 0;
 v2 = arr;
 v3 = 0;
 do
 v3 += *v2++;
 while ( v2 != &arr[n] );
 return v3;
}


/* Function: array_pointer @ 0x15E0 */
int array_pointer(int (*arr)[10], int n)
{
 int *v2; // eax
 int v3; // edx

 if ( n <= 0 )
 return 0;
 v2 = (int *)arr;
 v3 = 0;
 do
 {
 v3 += *v2;
 v2 += 10;
 }
 while ( v2 != &(*arr)[10 * n] );
 return v3;
}


/* Function: pointer_array @ 0x1620 */
int pointer_array(int **arr, int n)
{
 int v2; // ebx
 int v3; // eax
 int v4; // ecx
 int *v5; // edx

 v2 = 10;
 if ( n <= 10 )
 v2 = n;
 if ( n <= 0 )
 return 0;
 v3 = 0;
 v4 = 0;
 do
 {
 v5 = arr[v3];
 if ( v5 )
 v4 += *v5;
 ++v3;
 }
 while ( v2 > v3 );
 return v4;
}


/* Function: array_complex_index @ 0x1660 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 if ( (y | x) < 0 || x >= w || y >= h )
 return -1;
 else
 return arr[x + y * w];
}


/* Function: array_oob @ 0x16A0 */
int array_oob(int *arr, int n)
{
 int *v2; // eax
 int v3; // edx

 if ( n < 0 )
 return 0;
 v2 = arr;
 v3 = 0;
 do
 v3 += *v2++;
 while ( v2 != &arr[n + 1] );
 return v3;
}


/* Function: test_array_types @ 0x16E0 */
void test_array_types(
 int a1,
 int a2,
 int a3,
 int a4,
 int a5,
 int a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 int a14,
 char a15)
{
 int v15; // eax
 int *v16; // ebp
 int v17; // ecx
 int *v18; // esi
 int i; // eax
 int v20; // edx
 int v21; // eax
 int *v22; // ecx
 int *v23; // edx
 int *v24; // eax
 int v25; // eax
 int *v26; // edx
 int v27; // eax
 int j; // eax
 int v29[20]; // [esp+0h] [ebp-3FCh]
 int matrix[10][10]; // [esp+50h] [ebp-3ACh] BYREF
 int cube[5][5][5]; // [esp+1E0h] [ebp-21Ch] BYREF
 char str[6]; // [esp+3D6h] [ebp-26h] BYREF
 unsigned int v33; // [esp+3DCh] [ebp-20h]

 v33 = __readgsdword(0x14u);
 puts(asc_33BD);
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
 strcpy(str, "hello");
 v15 = 0;
 do
 ++v15;
 while ( str[v15] );
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v15);
 v16 = matrix[0];
 v17 = 0;
 v18 = matrix[0];
 do
 {
 for ( i = 0; i != 10; ++i )
 {
 v20 = 0;
 if ( i == v17 )
 v20 = i;
 v18[i] = v20;
 }
 ++v17;
 v18 += 10;
 }
 while ( v17 != 10 );
 v21 = 0;
 do
 {
 v21 += *v16;
 v16 += 11;
 }
 while ( cube[0][2] != v16 );
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v21);
 v22 = cube[1][0];
 v23 = cube[1][0];
 do
 {
 v24 = v23 - 25;
 do
 {
 *v24 = 1;
 v24 += 5;
 *(v24 - 4) = 1;
 *(v24 - 3) = 1;
 *(v24 - 2) = 1;
 *(v24 - 1) = 1;
 }
 while ( v23 != v24 );
 v23 += 25;
 }
 while ( &a15 != (char *)v23 );
 v25 = 0;
 do
 {
 v26 = v22 - 25;
 do
 {
 v27 = *v26 + v25;
 v26 += 5;
 v25 = *(v26 - 1) + *(v26 - 2) + *(v26 - 3) + *(v26 - 4) + v27;
 }
 while ( v22 != v26 );
 v22 += 25;
 }
 while ( v22 != (int *)&a15 );
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v25);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 for ( j = 0; j != 20; ++j )
 v29[j] = j;
 __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v29[17]);
}


/* Function: ptr_single @ 0x18D0 */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0x18E0 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x18F0 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x1910 */
int ptr_increment(int *p, int n)
{
 int v2; // eax
 int v3; // edx

 if ( n <= 0 )
 return 0;
 v2 = 0;
 v3 = 0;
 do
 v3 += p[v2++];
 while ( n != v2 );
 return v3;
}


/* Function: ptr_offset @ 0x1950 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x1960 */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x1970 */
int ptr_void(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(char *)p;
 return -1;
}


/* Function: ptr_const @ 0x19B0 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x19C0 */
int ptr_const_ptr(int *const p)
{
 int result; // eax

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x19D0 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x19F0 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 char *args[2]; // [esp+0h] [ebp-18h] BYREF
 unsigned int v4; // [esp+8h] [ebp-10h]

 v4 = __readgsdword(0x14u);
 args[1] = 0;
 args[0] = "test";
 return f(p, args);
}


/* Function: ptr_cast @ 0x1A50 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x1A60 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x1A70 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x1A80 */
void test_pointer_types()
{
 int v0; // edx
 int v1; // ecx
 int *i; // eax
 int arr4[5]; // [esp+0h] [ebp-24h] BYREF
 unsigned int v4; // [esp+14h] [ebp-10h] BYREF

 v4 = __readgsdword(0x14u);
 puts(asc_3430);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 arr4[0] = 1;
 v0 = 0;
 v1 = 1;
 arr4[1] = 2;
 arr4[2] = 3;
 arr4[3] = 4;
 arr4[4] = 5;
 for ( i = arr4; ; v1 = *i )
 {
 ++i;
 v0 += v1;
 if ( i == (int *)&v4 )
 break;
 }
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v0);
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x1C20 */
int struct_simple(Point3D *p)
{
 return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x1C40 */
int struct_array(Point3D *pts, int n)
{
 Point3D *v2; // eax
 int v3; // ecx
 int y; // edx

 if ( n <= 0 )
 return 0;
 v2 = pts;
 v3 = 0;
 do
 {
 y = v2->y;
 ++v2;
 v3 += v2[-1].z + v2[-1].x + y;
 }
 while ( &pts[n] != v2 );
 return v3;
}


/* Function: struct_nested @ 0x1C90 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x1CA0 */
int struct_deep(Widget *w)
{
 return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x1CB0 */
int struct_with_ptr(Node *node)
{
 int result; // eax
 Node *next; // edx

 result = node->data;
 next = node->next;
 if ( next )
 result += next->data;
 return result;
}


/* Function: struct_bitfields @ 0x1CD0 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned short *)f >> 6) + ((*(unsigned char *)f >> 3) & 7) + ((*(unsigned char *)f >> 1) & 3) + (*(unsigned char *)f & 1);
}


/* Function: union_type @ 0x1D00 */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return u->bytes[0];
}


/* Function: union_array @ 0x1D60 */
int union_array(UnionData *arr, int n)
{
 UnionData *v2; // eax
 int v3; // edx

 if ( n <= 0 )
 return 0;
 v2 = arr;
 v3 = 0;
 do
 {
 v3 += v2->i;
 ++v2;
 }
 while ( v2 != &arr[n] );
 return v3;
}


/* Function: enum_type @ 0x1D90 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x1DA0 */
int enum_switch(State s)
{
 int result; // eax

 result = -99;
 if ( (unsigned int)s <= STATE_STOPPED )
 return CSWTCH_75[s];
 return result;
}


/* Function: struct_func_ptr @ 0x1DD0 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x1DF0 */
int linked_list(Node *head)
{
 Node *v1; // eax
 int i; // edx

 v1 = head;
 for ( i = 0; v1; v1 = v1->next )
 i += v1->data;
 return i;
}


/* Function: doubly_linked_list @ 0x1E10 */
int doubly_linked_list(DNode *head)
{
 DNode *v1; // eax
 int i; // edx

 v1 = head;
 for ( i = 0; v1; v1 = v1->next )
 i += v1->data;
 return i;
}


/* Function: binary_tree_sum @ 0x1E30 */
int binary_tree_sum(TreeNode *root)
{
 TreeNode *v1; // edx
 int v2; // ecx
 TreeNode *v3; // ecx
 TreeNode *v4; // edx
 int *p_data; // ebx
 int v6; // ebp
 int v7; // esi
 int v8; // edi
 int v9; // ecx
 int v10; // eax
 int v12; // [esp+Ch] [ebp-70h]
 int v13; // [esp+10h] [ebp-6Ch]
 int v14; // [esp+14h] [ebp-68h]
 int v15; // [esp+18h] [ebp-64h]
 TreeNode *v16; // [esp+1Ch] [ebp-60h]
 int v17; // [esp+20h] [ebp-5Ch]
 TreeNode *v18; // [esp+24h] [ebp-58h]
 TreeNode *left; // [esp+28h] [ebp-54h]
 TreeNode *v20; // [esp+2Ch] [ebp-50h]
 TreeNode *v21; // [esp+30h] [ebp-4Ch]
 int v22; // [esp+34h] [ebp-48h]
 int data; // [esp+38h] [ebp-44h]
 int v24; // [esp+3Ch] [ebp-40h]
 int v25; // [esp+40h] [ebp-3Ch]
 int v26; // [esp+44h] [ebp-38h]
 int v27; // [esp+48h] [ebp-34h]
 int v28; // [esp+4Ch] [ebp-30h]
 int v29; // [esp+50h] [ebp-2Ch]
 int i; // [esp+54h] [ebp-28h]
 TreeNode *v31; // [esp+58h] [ebp-24h]
 int v32; // [esp+5Ch] [ebp-20h]

 for ( i = 0; root; root = root->right )
 {
 v25 = 0;
 data = root->data;
 left = root->left;
 if ( left )
 {
 do
 {
 v26 = 0;
 v24 = left->data;
 v20 = left->left;
 if ( v20 )
 {
 do
 {
 v27 = 0;
 v29 = v20->data;
 v21 = v20->left;
 if ( v21 )
 {
 do
 {
 v14 = 0;
 v28 = v21->data;
 v1 = v21->left;
 if ( v1 )
 {
 do
 {
 v2 = v1->data;
 v12 = 0;
 if ( v1->left )
 {
 v16 = v1;
 v17 = v1->data;
 v3 = v1->left;
 do
 {
 v4 = v3->left;
 v15 = 0;
 v13 = v3->data;
 if ( v4 )
 {
 v18 = v3;
 do
 {
 p_data = &v4->left->data;
 v6 = 0;
 v22 = v4->data;
 if ( p_data )
 {
 do
 {
 v7 = p_data[1];
 v8 = *p_data;
 v9 = 0;
 if ( v7 )
 {
 do
 {
 v32 = v9;
 v31 = v4;
 v10 = *(unsigned int *)v7 + binary_tree_sum(*(TreeNode **)(v7 + 4));
 v7 = *(unsigned int *)(v7 + 8);
 v4 = v31;
 v9 = v10 + v32;
 }
 while ( v7 );
 v8 += v9;
 }
 p_data = (int *)p_data[2];
 v6 += v8;
 }
 while ( p_data );
 v22 += v6;
 }
 v4 = v4->right;
 v15 += v22;
 }
 while ( v4 );
 v13 += v15;
 v3 = v18;
 }
 v3 = v3->right;
 v12 += v13;
 }
 while ( v3 );
 v1 = v16;
 v2 = v12 + v17;
 }
 v1 = v1->right;
 v14 += v2;
 }
 while ( v1 );
 v28 += v14;
 }
 v27 += v28;
 v21 = v21->right;
 }
 while ( v21 );
 v29 += v27;
 }
 v26 += v29;
 v20 = v20->right;
 }
 while ( v20 );
 v24 += v26;
 }
 v25 += v24;
 left = left->right;
 }
 while ( left );
 data += v25;
 }
 i += data;
 }
 return i;
}


/* Function: binary_tree @ 0x2060 */
int binary_tree(TreeNode *root)
{
 int v1; // esi
 TreeNode *i; // ebx
 int v3; // eax

 v1 = 0;
 for ( i = root; i; v1 += v3 )
 {
 v3 = i->data + binary_tree_sum(i->left);
 i = i->right;
 }
 return v1;
}


/* Function: graph_traverse @ 0x20A0 */
int graph_traverse(Graph *g)
{
 Graph *v1; // ecx
 int numVertices; // eax
 Graph *v3; // ebx
 int v4; // edx
 Edge *i; // eax

 v1 = g;
 numVertices = g->numVertices;
 if ( numVertices <= 0 )
 return 0;
 v3 = (Graph *)((char *)g + 4 * numVertices);
 v4 = 0;
 do
 {
 for ( i = v1->adjList[0]; i; i = i->next )
 v4 += i->dest;
 v1 = (Graph *)((char *)v1 + 4);
 }
 while ( v1 != v3 );
 return v4;
}


/* Function: test_composite_types @ 0x20E0 */
void test_composite_types()
{
 Node *v0; // eax
 int data; // ecx
 int v2; // edx
 DNode *v3; // eax
 int v4; // ecx
 int v5; // edx
 int v6; // eax
 Node list[3]; // [esp+1Ch] [ebp-40h] BYREF
 DNode dlist[2]; // [esp+34h] [ebp-28h] BYREF
 unsigned int v9; // [esp+4Ch] [ebp-10h]

 v9 = __readgsdword(0x14u);
 puts(asc_3526);
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", 9);
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", 30);
 __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", 106);
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", 60);
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", 21);
 v0 = &list[1];
 list[1].next = &list[2];
 data = 10;
 v2 = 0;
 list[1].data = 20;
 list[2].data = 30;
 list[2].next = 0;
 while ( 1 )
 {
 v2 += data;
 if ( !v0 )
 break;
 data = v0->data;
 v0 = v0->next;
 }
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v2);
 v3 = dlist;
 dlist[0].data = 10;
 dlist[0].next = &dlist[1];
 v4 = 10;
 v5 = 0;
 dlist[0].prev = 0;
 dlist[1].data = 20;
 dlist[1].next = 0;
 dlist[1].prev = dlist;
 while ( 1 )
 {
 v3 = v3->next;
 v5 += v4;
 if ( !v3 )
 break;
 v4 = v3->data;
 }
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v5);
 v6 = binary_tree_sum(0);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v6 + 100);
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: __x86.get_pc_thunk.ax @ 0x22EB */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x22EF */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x2300 */
void _stack_chk_fail_local()
{
 __asm__ volatile("addl $_GLOBAL_OFFSET_TABLE_ - (.-4), %%ebx" ::: "ebx");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x236C - removed (CRT stub) */

/* FAILED to decompile: __libc_start_main @ 0x6014 */

/* FAILED to decompile: __stack_chk_fail @ 0x6018 */

/* FAILED to decompile: __cxa_finalize @ 0x601C */

/* FAILED to decompile: puts @ 0x6020 */

/* FAILED to decompile: __printf_chk @ 0x6024 */

/* Total functions decompiled: 76, failed: 5 */
