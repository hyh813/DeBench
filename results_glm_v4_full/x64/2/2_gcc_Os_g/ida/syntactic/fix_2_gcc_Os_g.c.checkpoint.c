/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/2/2_gcc_Os_g
 * Processor: pc
 */

#include <stdbool.h>

/* GCC intrinsic for reading from FS segment (stack canary) */
static __inline unsigned long long __readfsqword(unsigned long long offset)
{
  unsigned long long v;
  __asm__ volatile ("movq %%fs:%1, %0" : "=r" (v) : "m" (*(const long long *)(offset)));
  return v;
}

typedef enum {
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
    unsigned int flag1 : 1;
    unsigned int flag2 : 2;
    unsigned int flag3 : 3;
    unsigned int flag4 : 6;
} Flags;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef union {
    int i;
    float f;
    char bytes[4];
} UnionData;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prev;
} DNode;

typedef struct {
    int x;
    int y;
    int z;
} Point3D_ext;

typedef struct {
    Point3D_ext position;
    struct {
        int width;
        int height;
    } size;
} Rect;

typedef struct {
    int (*process)(int);
    int data;
} Device;

typedef struct Edge {
    int dest;
    struct Edge *next;
} Edge;

typedef struct {
    Edge *adjList[20];
    int numVertices;
} Graph;

typedef struct {
    Point3D_ext bounds;
    struct {
        struct {
            int r;
            int g;
            int b;
        } fill;
        int stroke;
    } style;
} Widget;

/* External symbols and data */
void (*_gmon_start__)(void) = 0;
const char *s = "";
const char *asc_216F = "";
const char *asc_2285 = "";
const char *asc_241E = "";
static const int CSWTCH_61[3] = { 0, 50, 20 };

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 {
 _gmon_start__();
 return result;
 }
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 return;
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: main @ 0x10A0 */
int main(int argc, const char **argv, const char **envp)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: double_value @ 0x11B9 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: process_int @ 0x11C1 */
int process_int(int x)
{
 return 2 * x + 1;
}


/* Function: complex_callback @ 0x11CA */
int complex_callback(int *p, char **args)
{
 *p += 10;
 return *args != 0;
}


/* Function: process_char @ 0x11DB */
char process_char(char c)
{
 char result; // al

 result = c;
 if ( (unsigned char)(c - 65) <= 0x19u )
 return c + 32;
 return result;
}


/* Function: process_short @ 0x11ED */
short process_short(short a, short b)
{
 return b + a;
}


/* Function: process_long @ 0x11F5 */
long long process_long(long long x)
{
 return 2 * x;
}


/* Function: process_ll @ 0x11FE */
long long process_ll(long long x)
{
 return x * x;
}


/* Function: process_float @ 0x120A */
float process_float(float a1, float f)
{
 return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x121F */
double process_double(double a1, double d)
{
 return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1234 */
long double process_ld(long double d)
{
 return d * d + 1.0;
}


/* Function: process_bool @ 0x1243 */
bool process_bool(int x)
{
 bool v1; // al

 v1 = 0;
 if ( x > 0 )
 return (x & 1) == 0;
 return v1;
}


/* Function: const_param @ 0x1258 */
int const_param(const int *p)
{
 return *p + 10;
}


/* Function: volatile_access @ 0x1262 */
int volatile_access(volatile int *p)
{
 return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x126D */
void test_data_types_l1()
{
 puts(s);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 3.5);
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 2.1);
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 10.0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x13EC */
int array_1d_stack(int *arr, int n)
{
 long long v2; // rax
 int v3; // r8d

 v2 = 0;
 v3 = 0;
 while ( n > (int)v2 )
 v3 += arr[v2++];
 return v3;
}


/* Function: array_string @ 0x1406 */
int array_string(char *str)
{
 long long v1; // rax
 int v2; // r8d

 v1 = 0;
 do
 v2 = v1++;
 while ( str[v1 - 1] );
 return v2;
}


/* Function: array_2d_stack @ 0x141D */
int array_2d_stack(int (*arr)[10])
{
 int *v1; // rdx
 int result; // eax

 v1 = &(*arr)[110];
 result = 0;
 do
 {
 result += (*arr)[0];
 arr = (int (*)[10])((char *)arr + 44);
 }
 while ( arr != (int (*)[10])v1 );
 return result;
}


/* Function: array_3d @ 0x1436 */
int array_3d(int (*arr)[5][5])
{
 int *v1; // rcx
 int result; // eax
 int *v3; // rdx
 int v4; // eax

 v1 = (*arr)[25];
 result = 0;
 do
 {
 v3 = (*arr)[5];
 do
 {
 v4 = (*arr)[0][0] + result;
 arr = (int (*)[5][5])((char *)arr + 20);
 result = (*arr)[-1][4] + (*arr)[-1][3] + (*arr)[-1][2] + (*arr)[-1][1] + v4;
 }
 while ( arr != (int (*)[5][5])v3 );
 }
 while ( v1 != (int *)arr );
 return result;
}


/* Function: array_vla @ 0x1464 */
int array_vla(int n, int *arr)
{
 long long v2; // rax
 int v3; // r8d

 v2 = 0;
 v3 = 0;
 while ( n > (int)v2 )
 v3 += arr[v2++];
 return v3;
}


/* Function: array_pointer @ 0x147E */
int array_pointer(int (*arr)[10], int n)
{
 long long v2; // rax
 int v3; // r8d
 long long v4; // rdx

 v2 = 0;
 v3 = 0;
 while ( n > (int)v2 )
 {
 v4 = 10 * v2++;
 v3 += (*arr)[v4];
 }
 return v3;
}


/* Function: pointer_array @ 0x149C */
int pointer_array(int **arr, int n)
{
 long long v2; // rax
 int v3; // r8d
 int *v4; // rdx

 if ( n > 10 )
 n = 10;
 v2 = 0;
 v3 = 0;
 while ( n > (int)v2 )
 {
 v4 = arr[v2];
 if ( v4 )
 v3 += *v4;
 ++v2;
 }
 return v3;
}


/* Function: array_complex_index @ 0x14C8 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 int result; // eax

 result = -1;
 if ( (y | x) >= 0 && x < w && y < h )
 return arr[x + y * w];
 return result;
}


/* Function: array_oob @ 0x14EF */
int array_oob(int *arr, int n)
{
 long long v2; // rax
 int v3; // r8d

 v2 = 0;
 v3 = 0;
 while ( n >= (int)v2 )
 v3 += arr[v2++];
 return v3;
}


/* Function: test_array_types @ 0x1509 */
void test_array_types()
{
 int v0; // eax
 int v1; // eax
 int *v2; // rcx
 int i; // edx
 long long j; // rax
 int v5; // esi
 int v6; // eax
 int *v7; // rdx
 int *v8; // rax
 int v9; // ebx
 int v10; // eax
 int v11; // eax
 int v12; // eax
 int **v13; // rdi
 long long k; // rcx
 int v15; // eax
 long long m; // rax
 int a; // [rsp+4h] [rbp-534h] BYREF
 int b; // [rsp+8h] [rbp-530h] BYREF
 int c; // [rsp+Ch] [rbp-52Ch] BYREF
 int vla_arr[3]; // [rsp+10h] [rbp-528h] BYREF
 int arr1[5]; // [rsp+1Ch] [rbp-51Ch] BYREF
 int *ptr_arr[10]; // [rsp+30h] [rbp-508h] BYREF
 int v23[20]; // [rsp+84h] [rbp-4B4h]
 int arr2[5][10]; // [rsp+D4h] [rbp-464h] BYREF
 int matrix[10][10]; // [rsp+19Ch] [rbp-39Ch] BYREF
 int cube[5][5][5]; // [rsp+32Ch] [rbp-20Ch] BYREF
 char v27; // [rsp+520h] [rbp-18h] BYREF
 char str[6]; // [rsp+522h] [rbp-16h] BYREF
 unsigned long long v29; // [rsp+528h] [rbp-10h]

 v29 = __readfsqword(0x28u);
 puts(asc_216F);
 *(unsigned long long *)arr1 = 0x200000001LL;
 *(unsigned long long *)&arr1[2] = 0x400000003LL;
 arr1[4] = 5;
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
 v5 = j;
 if ( i != (unsigned int)j )
 v5 = 0;
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
 v9 = 5;
 do
 {
 *v8 = 1;
 v8 += 5;
 *(v8 - 4) = 1;
 *(v8 - 3) = 1;
 *(v8 - 2) = 1;
 *(v8 - 1) = 1;
 --v9;
 }
 while ( v9 );
 v7 += 25;
 }
 while ( &v27 != (char *)v7 );
 v10 = array_3d(cube);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v10);
 *(unsigned long long *)vla_arr = 0x140000000ALL;
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
 v13 = &ptr_arr[3];
 for ( k = 14; k; --k )
 {
 *(unsigned int *)v13 = v9;
 v13 = (int **)((char *)v13 + 4);
 }
 ptr_arr[0] = &a;
 ptr_arr[1] = &b;
 a = 10;
 b = 20;
 c = 30;
 ptr_arr[2] = &c;
 v15 = pointer_array(ptr_arr, 3);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v15);
 for ( m = 0; m != 20; ++m )
 v23[m] = m;
 __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v23[17]);
}


/* Function: ptr_single @ 0x17B6 */
long long ptr_single(unsigned int *a1)
{
 return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0x17C0 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x17CD */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x17DC */
int ptr_increment(int *p, int n)
{
 long long v2; // rax
 int v3; // r8d

 v2 = 0;
 v3 = 0;
 while ( n > (int)v2 )
 v3 += p[v2++];
 return v3;
}


/* Function: ptr_offset @ 0x17F6 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x1801 */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x180F */
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


/* Function: ptr_const @ 0x1825 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x182E */
int ptr_const_ptr(int *const p)
{
 int result; // eax

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x183A */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x1845 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 char *args[2]; // [rsp+8h] [rbp-20h] BYREF
 unsigned long long v4; // [rsp+18h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 args[1] = 0;
 args[0] = "test";
 return f(p, args);
}


/* Function: ptr_cast @ 0x1898 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x189F */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x18A7 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x18AF */
void test_pointer_types()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int val3; // [rsp+8h] [rbp-40h] BYREF
 int val11; // [rsp+Ch] [rbp-3Ch] BYREF
 int *ptr3; // [rsp+10h] [rbp-38h] BYREF
 int **pptr3; // [rsp+18h] [rbp-30h] BYREF
 int arr4[5]; // [rsp+24h] [rbp-24h] BYREF
 unsigned long long v9; // [rsp+38h] [rbp-10h]

 v9 = __readfsqword(0x28u);
 puts(asc_2285);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 val3 = 5;
 ptr3 = &val3;
 pptr3 = &ptr3;
 v0 = ptr_triple(&pptr3);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", v0);
 *(unsigned long long *)arr4 = 0x200000001LL;
 *(unsigned long long *)&arr4[2] = 0x400000003LL;
 arr4[4] = 5;
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
 val11 = 5;
 v3 = ptr_func_complex(complex_callback, &val11);
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", v3);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x1AB7 */
int struct_simple(Point3D *p)
{
 return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x1AC4 */
int struct_array(Point3D *pts, int n)
{
 int v2; // edx
 int v3; // r8d
 int v4; // eax

 v2 = 0;
 v3 = 0;
 while ( v2 < n )
 {
 v4 = pts->x + pts->y;
 ++v2;
 ++pts;
 v3 += pts[-1].z + v4;
 }
 return v3;
}


/* Function: struct_nested @ 0x1AE8 */
int struct_nested(Rect *r)
{
 return r->size.width + r->position.x;
}


/* Function: struct_deep @ 0x1AF2 */
int struct_deep(Widget *w)
{
 return w->style.fill.r + w->bounds.z;
}


/* Function: struct_with_ptr @ 0x1AFD */
int struct_with_ptr(Node *node)
{
 Node *next; // rcx
 int data; // edx

 next = node->next;
 data = 0;
 if ( next )
 data = next->data;
 return data + node->data;
}


/* Function: struct_bitfields @ 0x1B13 */
int struct_bitfields(Flags *f)
{
 return ((unsigned short)*(unsigned int *)f >> 6) + ((*(unsigned char *)f >> 3) & 7) + ((*(unsigned char *)f >> 1) & 3) + (*(unsigned char *)f & 1);
}


/* Function: union_type @ 0x1B3B */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return u->bytes[0];
}


/* Function: union_array @ 0x1B53 */
int union_array(UnionData *arr, int n)
{
 long long v2; // rax
 int v3; // r8d

 v2 = 0;
 v3 = 0;
 while ( n > (int)v2 )
 v3 += arr[v2++].i;
 return v3;
}


/* Function: enum_type @ 0x1B6D */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x1B75 */
int enum_switch(State s)
{
 int result; // eax

 result = -99;
 if ( (unsigned int)s <= STATE_STOPPED )
 return CSWTCH_61[s];
 return result;
}


/* Function: struct_func_ptr @ 0x1B91 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x1B9D */
int linked_list(Node *head)
{
 int result; // eax

 result = 0;
 while ( head )
 {
 result += head->data;
 head = head->next;
 }
 return result;
}


/* Function: doubly_linked_list @ 0x1BB1 */
int doubly_linked_list(DNode *head)
{
 int result; // eax

 result = 0;
 while ( head )
 {
 result += head->data;
 head = head->next;
 }
 return result;
}


/* Function: binary_tree_sum @ 0x1BC5 */
int binary_tree_sum(TreeNode *root)
{
 int v1; // r12d
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


/* Function: binary_tree @ 0x1BF4 */
int binary_tree(TreeNode *root)
{
 return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x1BFA */
int graph_traverse(Graph *g)
{
 long long v1; // rax
 int v2; // r8d
 Edge *i; // rdx

 v1 = 0;
 v2 = 0;
 while ( g->numVertices > (int)v1 )
 {
 for ( i = g->adjList[v1]; i; i = i->next )
 v2 += i->dest;
 ++v1;
 }
 return v2;
}


/* Function: test_composite_types @ 0x1C25 */
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
 Edge **v8; // rdi
 long long i; // rcx
 int v10; // eax
 Flags f; // [rsp+8h] [rbp-150h] BYREF
 Node node2; // [rsp+10h] [rbp-148h] BYREF
 Node node1; // [rsp+20h] [rbp-138h] BYREF
 Device dev; // [rsp+30h] [rbp-128h] BYREF
 Edge e1; // [rsp+40h] [rbp-118h] BYREF
 TreeNode tree; // [rsp+50h] [rbp-108h] BYREF
 UnionData arr_u[3]; // [rsp+6Ch] [rbp-ECh] BYREF
 Point3D pts[2]; // [rsp+78h] [rbp-E0h] BYREF
 Node list[3]; // [rsp+90h] [rbp-C8h] BYREF
 DNode dlist[2]; // [rsp+C0h] [rbp-98h] BYREF
 Graph g; // [rsp+F0h] [rbp-68h] BYREF
 unsigned long long v22; // [rsp+148h] [rbp-10h]

 v22 = __readfsqword(0x28u);
 puts(asc_241E);
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 *(unsigned long long *)&pts[0].x = 0x100000001LL;
 *(unsigned long long *)&pts[0].z = 0x200000001LL;
 *(unsigned long long *)&pts[1].y = 0x200000002LL;
 v0 = struct_array(pts, 2);
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", v0);
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 node2.data = 20;
 node2.next = 0;
 node1.data = 10;
 node1.next = &node2;
 v1 = struct_with_ptr(&node1);
 __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", v1);
 *(unsigned long long *)&f = (*(unsigned long long *)&f & 0xFFF00000FFFF0000LL) | 0x191D;
 v2 = struct_bitfields(&f);
 __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", v2);
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 *(unsigned long long *)&arr_u[0].i = 0x140000000ALL;
 arr_u[2].i = 30;
 v3 = union_array(arr_u, 3);
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", v3);
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 dev.data = 10;
 dev.process = process_int;
 v4 = struct_func_ptr(&dev);
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", v4);
 list[0].data = 10;
 list[0].next = &list[1];
 list[1].data = 20;
 list[1].next = &list[2];
 list[2].data = 30;
 list[2].next = 0;
 v5 = linked_list(list);
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v5);
 dlist[0].data = 10;
 dlist[1].prev = dlist;
 dlist[0].next = &dlist[1];
 dlist[0].prev = 0;
 dlist[1].data = 20;
 dlist[1].next = 0;
 v6 = doubly_linked_list(dlist);
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v6);
 tree.data = 100;
 tree.left = 0;
 tree.right = 0;
 v7 = binary_tree_sum(&tree);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v7);
 v8 = &g.adjList[1];
 for ( i = 20; i; --i )
 {
 *(unsigned int *)v8 = 0;
 v8 = (Edge **)((char *)v8 + 4);
 }
 e1.dest = 1;
 e1.next = 0;
 g.adjList[0] = &e1;
 g.numVertices = 2;
 v10 = graph_traverse(&g);
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", v10);
}


/* Function: .term_proc @ 0x1FA4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4020 */

/* FAILED to decompile: puts @ 0x4028 */

/* FAILED to decompile: __stack_chk_fail @ 0x4030 */

/* FAILED to decompile: __printf_chk @ 0x4038 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4040 */

/* FAILED to decompile: __gmon_start__ @ 0x4050 */

/* Total functions decompiled: 68, failed: 6 */
