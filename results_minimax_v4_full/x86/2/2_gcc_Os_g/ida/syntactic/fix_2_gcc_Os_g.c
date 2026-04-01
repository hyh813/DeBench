/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/2/2_gcc_Os_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* Missing function definitions for linker */
void *qmemcpy(void *dest, const void *src, size_t n)
{
 return memcpy(dest, src, n);
}

unsigned int __readgsdword(unsigned int offset)
{
 unsigned int val;
 __asm__ volatile("movl %%gs:%1, %0" : "=r"(val) : "m"(*(const unsigned char *)offset));
 return val;
}

/* External declarations */
extern void _gmon_start__(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);

/* String constants */
static const char asc_3008[] = "=== Test Data Types L1 ===";
static const char asc_3173[] = "=== Test Array Types ===";
static const char asc_3289[] = "=== Test Pointer Types ===";
static const char asc_3422[] = "=== Test Composite Types ===";
static const char unk_3604[] = "";
static const char unk_360C[] = {1, 2, 3, 4, 5};

/* Type definitions */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct DNode {
    int data;
    struct DNode *next;
} DNode;

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
        int x;
        int y;
        int z;
    } bounds;
    struct {
        int r;
        int g;
        int b;
    } style;
} Widget;

typedef struct Flags {
    unsigned char a;
    unsigned char b;
    unsigned char c;
    unsigned char d;
} Flags;

typedef enum {
    STATE_STARTED = 1,
    STATE_RUNNING = 2,
    STATE_PAUSED = 3,
    STATE_STOPPED = 4
} State;

typedef struct Device {
    int (*process)(void *data);
    void *data;
} Device;

typedef union UnionData {
    int i;
    float f;
    unsigned char bytes[4];
} UnionData;

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




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
}


/* Function: _do_global_ctors_aux @ 0x1040 */
int _do_global_ctors_aux()
{
 sub_1030();
 return 0;
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
void _do_global_dtors_aux()
{
}




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


/* Function: double_value @ 0x1271 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: process_int @ 0x127F */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: complex_callback @ 0x128E */
int complex_callback(int *p, char **args)
{
 *p += 10;
 return *args != 0;
}


/* Function: process_char @ 0x12A9 */
char process_char(char c)
{
 char v1; // dl

 v1 = c + 32;
 if ( (unsigned char)(c - 65) > 0x19u )
 return c;
 return v1;
}


/* Function: process_short @ 0x12C4 */
short process_short(short a, short b)
{
 return a + b;
}


/* Function: process_long @ 0x12D3 */
int process_long(int x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x12E1 */
long long process_ll(long long x)
{
 unsigned int low;
 unsigned int high;
 unsigned long long tmp;

 tmp = (unsigned int)x * (unsigned long long)(unsigned int)x;
 low = (unsigned int)tmp;
 high = (tmp >> 32);
 high = high + 2 * x * (unsigned int)(x >> 32);
 return ((unsigned long long)high << 32) | low;
}


/* Function: process_float @ 0x12FA */
float process_float(float f)
{
 return 1.5 * f + 0.5;
}


/* Function: process_double @ 0x1322 */
double process_double(double d)
{
 return 0.5 * d + 0.1;
}


/* Function: process_ld @ 0x134C */
long double process_ld(long double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x135E */
bool process_bool(int x)
{
 bool v1; // al

 v1 = 0;
 if ( x > 0 )
 return (x & 1) == 0;
 return v1;
}


/* Function: const_param @ 0x137A */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x138B */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x139D */
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


/* Function: array_1d_stack @ 0x14EC */
int array_1d_stack(int *arr, int n)
{
 int v2; // eax
 int v3; // edx

 v2 = 0;
 v3 = 0;
 while ( v2 < n )
 v3 += arr[v2++];
 return v3;
}


/* Function: array_string @ 0x1509 */
int array_string(char *str)
{
 int result; // eax

 for ( result = 0; str[result]; ++result )
 ;
 return result;
}


/* Function: array_2d_stack @ 0x1520 */
int array_2d_stack(int (*arr)[10])
{
 int v1; // edx
 int *v2; // eax

 v1 = 0;
 v2 = (int *)arr;
 do
 {
 v1 += *v2;
 v2 += 11;
 }
 while ( v2 != &(*arr)[110] );
 return v1;
}


/* Function: array_3d @ 0x153F */
int array_3d(int (*arr)[5][5])
{
 int result; // eax
 int *v2; // edx
 int *v3; // ecx
 int v4; // eax

 result = 0;
 v2 = (int *)arr;
 do
 {
 v3 = v2 + 25;
 do
 {
 v4 = *v2 + result;
 v2 += 5;
 result = *(v2 - 1) + *(v2 - 2) + *(v2 - 3) + *(v2 - 4) + v4;
 }
 while ( v2 != v3 );
 }
 while ( (*arr)[25] != v2 );
 return result;
}


/* Function: array_vla @ 0x1571 */
int array_vla(int n, int *arr)
{
 int v2; // eax
 int v3; // edx

 v2 = 0;
 v3 = 0;
 while ( v2 < n )
 v3 += arr[v2++];
 return v3;
}


/* Function: array_pointer @ 0x158E */
int array_pointer(int (*arr)[10], int n)
{
 int v2; // eax
 int v3; // edx
 int v4; // ebx

 v2 = 0;
 v3 = 0;
 while ( v2 < n )
 {
 v4 = 10 * v2++;
 v3 += (*arr)[v4];
 }
 return v3;
}


/* Function: pointer_array @ 0x15B0 */
int pointer_array(int **arr, int n)
{
 int v2; // ecx
 int v3; // edx
 int result; // eax
 int *v5; // ebx

 v2 = 10;
 if ( n <= 10 )
 v2 = n;
 v3 = 0;
 result = 0;
 while ( v3 < v2 )
 {
 v5 = arr[v3];
 if ( v5 )
 result += *v5;
 ++v3;
 }
 return result;
}


/* Function: array_complex_index @ 0x15E1 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 int result; // eax

 result = -1;
 if ( (y | x) >= 0 && x < w && y < h )
 return arr[x + y * w];
 return result;
}


/* Function: array_oob @ 0x1615 */
int array_oob(int *arr, int n)
{
 int v2; // eax
 int v3; // edx

 v2 = 0;
 v3 = 0;
 while ( v2 <= n )
 v3 += arr[v2++];
 return v3;
}


/* Function: test_array_types @ 0x1632 */
// bad sp value at call has been detected, the output may be wrong!
void test_array_types()
{
 int v0; // eax
 int v1; // eax
 int *v2; // edx
 int i; // ecx
 int j; // eax
 int v5; // edi
 int v6; // eax
 int *v7; // edx
 int *v8; // eax
 int v9; // ecx
 int v10; // eax
 int v11; // eax
 int v12; // eax
 int v13; // eax
 int k; // eax
 int a; // [esp+0h] [ebp-514h] BYREF
 int b; // [esp+4h] [ebp-510h] BYREF
 int c; // [esp+8h] [ebp-50Ch] BYREF
 int vla_arr[3]; // [esp+Ch] [ebp-508h] BYREF
 int arr1[5]; // [esp+18h] [ebp-4FCh] BYREF
 int *ptr_arr[10]; // [esp+2Ch] [ebp-4E8h] BYREF
 int v21[20]; // [esp+54h] [ebp-4C0h]
 int arr2[5][10]; // [esp+A4h] [ebp-470h] BYREF
 int matrix[10][10]; // [esp+16Ch] [ebp-3A8h] BYREF
 int cube[5][5][5]; // [esp+2FCh] [ebp-218h] BYREF
 char v25; // [esp+4F0h] [ebp-24h] BYREF
 char str[6]; // [esp+4F2h] [ebp-22h] BYREF
 unsigned int v27; // [esp+4F8h] [ebp-1Ch]
 int v28; // [esp+504h] [ebp-10h]

 v27 = __readgsdword(0x14u);
 puts(asc_3173);
 qmemcpy(arr1, &unk_360C, sizeof(arr1));
 v0 = array_1d_stack(arr1, 5);
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v0);
 strcpy(str, "hello");
 v1 = array_string(str);
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v1);
 v2 = matrix[0];
 for ( i = 0; i != 10; ++i )
 {
 for ( j = 0; j != 10; ++j )
 {
 v5 = 0;
 if ( j == i )
 v5 = j;
 v2[j] = v5;
 }
 v2 += 10;
 }
 v6 = array_2d_stack(matrix);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v6);
 v7 = cube[0][0];
 do
 {
 v8 = v7;
 v9 = 0;
 do
 {
 ++v9;
 *v8 = 1;
 v8 += 5;
 *(v8 - 4) = 1;
 *(v8 - 3) = 1;
 *(v8 - 2) = 1;
 *(v8 - 1) = 1;
 }
 while ( v9 != 5 );
 v7 += 25;
 }
 while ( &v25 != (char *)v7 );
 v10 = array_3d(cube);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v10);
 vla_arr[0] = 10;
 vla_arr[1] = 20;
 vla_arr[2] = 30;
 v11 = array_vla(3, vla_arr);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", v11);
 arr2[0][0] = 0;
 arr2[1][0] = 10;
 arr2[2][0] = 20;
 arr2[3][0] = 30;
 arr2[4][0] = 40;
 v12 = array_pointer(arr2, 5);
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", v12);
 a = 10;
 memset(&ptr_arr[3], 0, 0x1Cu);
 b = 20;
 ptr_arr[0] = &a;
 ptr_arr[1] = &b;
 ptr_arr[2] = &c;
 c = 30;
 v13 = pointer_array(ptr_arr, 3);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v13);
 for ( k = 0; k != 20; ++k )
 v21[k] = k;
 v28 = 20;
 __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v21[17]);
}


/* Function: ptr_single @ 0x18AF */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0x18C0 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x18D3 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x18E6 */
int ptr_increment(int *p, int n)
{
 int v2; // eax
 int v3; // edx

 v2 = 0;
 v3 = 0;
 while ( v2 < n )
 v3 += p[v2++];
 return v3;
}


/* Function: ptr_offset @ 0x1903 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x1915 */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x1927 */
int ptr_void(void *p, int type)
{
 int result; // eax

 if ( !type )
 return *(unsigned int *)p;
 result = -1;
 if ( type == 1 )
 return *(char *)p;
 return result;
}


/* Function: ptr_const @ 0x1947 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1957 */
int ptr_const_ptr(int *const p)
{
 int result; // eax

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x196A */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x197D */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 int v3; // [esp-Ch] [ebp-24h]
 int v4; // [esp-8h] [ebp-20h]
 int v5; // [esp-4h] [ebp-1Ch]
 char *args[2]; // [esp+0h] [ebp-18h] BYREF
 unsigned int v7; // [esp+8h] [ebp-10h]

 v7 = __readgsdword(0x14u);
 args[1] = 0;
 args[0] = "test";
 return ((int ( *)(int *, char **, int, int, int))f)(p, args, v3, v4, v5);
}


/* Function: ptr_cast @ 0x19CA */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x19D8 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x19E4 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x19F2 */
// bad sp value at call has been detected, the output may be wrong!
void test_pointer_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int **pptr3; // [esp+8h] [ebp-38h] BYREF
 int val11; // [esp+Ch] [ebp-34h] BYREF
 int arr4[5]; // [esp+10h] [ebp-30h] BYREF

 puts(asc_3289);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 v0 = ptr_triple(&pptr3);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", v0);
 v1 = ptr_increment(arr4, 5);
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v1);
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 v2 = ptr_func_simple(double_value, 5);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", v2);
 v3 = ptr_func_complex(complex_callback, &val11);
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", v3);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x1BA4 */
int struct_simple(Point3D *p)
{
 return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x1BB8 */
int struct_array(Point3D *pts, int n)
{
 int v2; // ecx
 int i; // ebx
 int v5; // edx

 v2 = 0;
 for ( i = 0; i < n; ++i )
 {
 v5 = pts->x + pts->y;
 ++pts;
 v2 += pts[-1].z + v5;
 }
 return v2;
}


/* Function: struct_nested @ 0x1BE1 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x1BF2 */
int struct_deep(Widget *w)
{
 return w->bounds.z + w->style.r;
}


/* Function: struct_with_ptr @ 0x1C04 */
int struct_with_ptr(Node *node)
{
 Node *next; // ecx
 int data; // edx

 next = node->next;
 data = 0;
 if ( next )
 data = next->data;
 return data + node->data;
}


/* Function: struct_bitfields @ 0x1C1F */
int struct_bitfields(Flags *f)
{
 return ((unsigned short)*(unsigned int *)f >> 6) + ((*(unsigned char *)f >> 3) & 7) + ((*(unsigned char *)f >> 1) & 3) + (*(unsigned char *)f & 1);
}


/* Function: union_type @ 0x1C50 */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return u->bytes[0];
}


/* Function: union_array @ 0x1C8E */
int union_array(UnionData *arr, int n)
{
 int v2; // eax
 int v3; // edx

 v2 = 0;
 v3 = 0;
 while ( v2 < n )
 v3 += arr[v2++].i;
 return v3;
}


/* Function: enum_type @ 0x1CAB */
int enum_type(State s)
{
 return 10 * s;
}


/* Switch table for enum_switch */
static const int CSWTCH_78[] = {10, 20, 30, 40};

/* Function: enum_switch @ 0x1CB8 */
int enum_switch(State s)
{
 int result; // eax

 result = -99;
 if ( (unsigned int)s <= STATE_STOPPED )
 return CSWTCH_78[s - 1];
 return result;
}


/* Function: struct_func_ptr @ 0x1CE1 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x1CF6 */
int linked_list(Node *head)
{
 int v1; // edx

 v1 = 0;
 while ( head )
 {
 v1 += head->data;
 head = head->next;
 }
 return v1;
}


/* Function: doubly_linked_list @ 0x1D11 */
int doubly_linked_list(DNode *head)
{
 int v1; // edx

 v1 = 0;
 while ( head )
 {
 v1 += head->data;
 head = head->next;
 }
 return v1;
}


/* Function: binary_tree_sum @ 0x1D2C */
int binary_tree_sum(TreeNode *root)
{
 int v1; // esi
 int v3; // eax

 v1 = 0;
 while ( root )
 {
 v3 = root->data + binary_tree_sum(root->left);
 root = root->right;
 v1 += v3;
 }
 return v1;
}


/* Function: binary_tree @ 0x1D5E */
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x1D64 */
int graph_traverse(Graph *g)
{
 int v1; // eax
 int v2; // ecx
 Edge *i; // edx

 v1 = 0;
 v2 = 0;
 while ( g->numVertices > v1 )
 {
 for ( i = g->adjList[v1]; i; i = i->next )
 v2 += i->dest;
 ++v1;
 }
 return v2;
}


/* Function: test_composite_types @ 0x1D92 */
// bad sp value at call has been detected, the output may be wrong!
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
 Node node1; // [esp+14h] [ebp-C8h] BYREF
 Flags f; // [esp+1Ch] [ebp-C0h] BYREF
 Device dev; // [esp+24h] [ebp-B8h] BYREF
 TreeNode tree; // [esp+34h] [ebp-A8h] BYREF
 UnionData arr_u[3]; // [esp+40h] [ebp-9Ch] BYREF
 Point3D pts[2]; // [esp+4Ch] [ebp-90h] BYREF
 Node list[3]; // [esp+64h] [ebp-78h] BYREF
 DNode dlist[2]; // [esp+7Ch] [ebp-60h] BYREF
 Graph g; // [esp+94h] [ebp-48h] BYREF

 puts(asc_3422);
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 v0 = struct_array(pts, 2);
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", v0);
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 v1 = struct_with_ptr(&node1);
 __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", v1);
 v2 = struct_bitfields(&f);
 __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", v2);
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 v3 = union_array(arr_u, 3);
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", v3);
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 v4 = struct_func_ptr(&dev);
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", v4);
 v5 = linked_list(list);
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v5);
 v6 = doubly_linked_list(dlist);
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v6);
 v7 = binary_tree_sum(&tree);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v7);
 memset(&g.adjList[1], 0, 0x24u);
 v8 = graph_traverse(&g);
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", v8);
}


/* Function: __x86.get_pc_thunk.ax @ 0x2091 */
void *_x86_get_pc_thunk_ax()
{
 void **retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x2095 */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x20A0 */
void _stack_chk_fail_local()
{
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x210C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x6014 */

/* FAILED to decompile: __stack_chk_fail @ 0x6018 */

/* FAILED to decompile: __cxa_finalize @ 0x601C */

/* FAILED to decompile: puts @ 0x6020 */

/* FAILED to decompile: __printf_chk @ 0x6024 */

/* Total functions decompiled: 78, failed: 5 */
