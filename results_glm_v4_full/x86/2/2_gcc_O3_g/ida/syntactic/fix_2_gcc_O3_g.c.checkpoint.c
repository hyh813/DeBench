/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/2/2_gcc_O3_g
 * Processor: pc
 */

#include <stdbool.h>

/* Type definitions */

typedef enum {
    STATE_RUNNING = 0,
    STATE_PAUSED = 1,
    STATE_STOPPED = 2
} State;

typedef struct {
    int x;
    int y;
    int z;
} Point3D;

typedef struct {
    Point3D position;
    int width;
    int height;
} Size;

typedef struct {
    Point3D position;
    Size size;
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
    unsigned char a;
    unsigned char b;
    unsigned char c;
    unsigned char d;
    unsigned char e;
    unsigned char f;
    unsigned char g;
    unsigned char h;
} Flags;

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

typedef struct Edge {
    int dest;
    struct Edge *next;
} Edge;

typedef struct Graph {
    int numVertices;
    Edge *adjList[1];
} Graph;

typedef struct Device {
    void *data;
    int (*process)(void *);
} Device;

#define HIDWORD(x) (((unsigned long long)(x) >> 32) & 0xFFFFFFFF)

static inline unsigned int __readgsdword(unsigned int offset)
{
    unsigned int value;
    __asm__ volatile ("movl %%gs:%1, %0" : "=r" (value) : "m" (*(volatile unsigned int *)(offset)));
    return value;
}

/* External declarations */
extern int _do_global_ctors_aux(void);
static const char asc_3008[] = "=== Testing Data Types (L1) ===";
static const char asc_33BD[] = "=== Testing Array Types ===";
static const char asc_3430[] = "=== Testing Pointer Types ===";
static const char asc_3526[] = "=== Testing Composite Types ===";

/* Switch table for enum_switch */
static const int CSWTCH_75[] = {10, 20, 50};




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" :::"ebx");
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
 result += (long long)(2 * x * HIDWORD(x)) << 32;
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
 do {
 v3 += *v2++;
 } while ( &arr[n] != v2 );
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
int array_2d_stack(int *arr)
{
 return arr[99]
 + arr[88]
 + arr[77]
 + arr[66]
 + arr[55]
 + arr[44]
 + arr[33]
 + arr[22]
 + arr[0]
 + arr[11];
}


/* Function: array_3d @ 0x1590 */
int array_3d(int *arr)
{
 int v1 = 0;
 int v2 = 0;
 int v3 = 0;
 int i;
 int j;

 for (i = 0; i <= 8; i++)
 {
 for (j = 0; j <= 4; j++)
 {
 v1 += arr[i * 5 + j];
 }
 }
 for (i = 9; i <= 16; i++)
 {
 for (j = 0; j <= 4; j++)
 {
 v2 += arr[i * 5 + j];
 }
 }
 for (i = 17; i <= 24; i++)
 {
 for (j = 0; j <= 4; j++)
 {
 v3 += arr[i * 5 + j];
 }
 }
 return v1 + v2 + v3;
}


/* Function: array_vla @ 0x1830 */
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
 while ( &arr[n] != v2 );
 return v3;
}


/* Function: array_pointer @ 0x1860 */
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
 while ( &(*arr)[10 * n] != v2 );
 return v3;
}


/* Function: pointer_array @ 0x18A0 */
int pointer_array(int **arr, int n)
{
 int result; // eax
 int *v3; // ebx
 int *v4; // ebx
 int *v5; // ebx
 int *v6; // ebx
 int *v7; // ebx
 int *v8; // ebx
 int *v9; // ebx
 int *v10; // ebx
 int *v11; // edx

 if ( n <= 0 )
 return 0;
 result = 0;
 if ( *arr )
 result = **arr;
 if ( n > 1 )
 {
 v3 = arr[1];
 if ( v3 )
 result += *v3;
 if ( n != 2 )
 {
 v4 = arr[2];
 if ( v4 )
 result += *v4;
 if ( n != 3 )
 {
 v5 = arr[3];
 if ( v5 )
 result += *v5;
 if ( n != 4 )
 {
 v6 = arr[4];
 if ( v6 )
 result += *v6;
 if ( n != 5 )
 {
 v7 = arr[5];
 if ( v7 )
 result += *v7;
 if ( n != 6 )
 {
 v8 = arr[6];
 if ( v8 )
 result += *v8;
 if ( n != 7 )
 {
 v9 = arr[7];
 if ( v9 )
 result += *v9;
 if ( n != 8 )
 {
 v10 = arr[8];
 if ( v10 )
 result += *v10;
 if ( n > 9 )
 {
 v11 = arr[9];
 if ( v11 )
 result += *v11;
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


/* Function: array_complex_index @ 0x1950 */
int array_complex_index(int *arr, int w, int h, int x, int y)
{
 if ( (y | x) < 0 || x >= w || y >= h )
 return -1;
 else
 return arr[x + y * w];
}


/* Function: array_oob @ 0x1990 */
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
 while ( &arr[n + 1] != v2 );
 return v3;
}


/* Function: test_array_types @ 0x19D0 */
void test_array_types()
{
 int v0; // eax
 int i; // eax
 int v2[20]; // [esp+0h] [ebp-68h]
 char str[6]; // [esp+52h] [ebp-16h] BYREF
 unsigned int v4; // [esp+58h] [ebp-10h]

 v4 = __readgsdword(0x14u);
 puts(asc_33BD);
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
 strcpy(str, "hello");
 v0 = 0;
 do
 ++v0;
 while ( str[v0] );
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v0);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", 45);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", 125);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 for ( i = 0; i != 20; ++i )
 v2[i] = i;
 __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v2[17]);
}


/* Function: ptr_single @ 0x1B00 */
int ptr_single(unsigned int *a1)
{
 return *a1 + 10;
}


/* Function: ptr_double @ 0x1B10 */
int ptr_double(int **p)
{
 return **p + 5;
}


/* Function: ptr_triple @ 0x1B20 */
int ptr_triple(int ***p)
{
 return ***p + 1;
}


/* Function: ptr_increment @ 0x1B40 */
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


/* Function: ptr_offset @ 0x1B80 */
int ptr_offset(int *p, int offset)
{
 return p[offset];
}


/* Function: ptr_diff @ 0x1B90 */
int ptr_diff(int *p1, int *p2)
{
 return p1 - p2;
}


/* Function: ptr_void @ 0x1BA0 */
int ptr_void(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(char *)p;
 return -1;
}


/* Function: ptr_const @ 0x1BE0 */
int ptr_const(const int *p)
{
 return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1BF0 */
int ptr_const_ptr(int *p)
{
 int result; // eax

 result = *p + 5;
 *p = result;
 return result;
}


/* Function: ptr_func_simple @ 0x1C00 */
int ptr_func_simple(int (*f)(int), int x)
{
 return f(x);
}


/* Function: ptr_func_complex @ 0x1C20 */
int ptr_func_complex(int (*f)(int *, char **), int *p)
{
 char *args[2]; // [esp+0h] [ebp-18h] BYREF
 unsigned int v4; // [esp+8h] [ebp-10h]

 v4 = __readgsdword(0x14u);
 args[1] = 0;
 args[0] = "test";
 return f(p, args);
}


/* Function: ptr_cast @ 0x1C80 */
int ptr_cast(void *p)
{
 return *(unsigned int *)p;
}


/* Function: opaque_handle_create @ 0x1C90 */
void * opaque_handle_create(int size)
{
 return (void *)size;
}


/* Function: opaque_handle_op @ 0x1CA0 */
int opaque_handle_op(void *handle)
{
 return 2 * (unsigned int)handle;
}


/* Function: test_pointer_types @ 0x1CB0 */
void test_pointer_types()
{
 puts(asc_3430);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", 15);
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


/* Function: struct_simple @ 0x1DE0 */
int struct_simple(Point3D *p)
{
 return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x1E00 */
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


/* Function: struct_nested @ 0x1E50 */
int struct_nested(Rect *r)
{
 return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x1E60 */
int struct_deep(Widget *w)
{
 return w->bounds.position.z + w->style.r;
}


/* Function: struct_with_ptr @ 0x1E70 */
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


/* Function: struct_bitfields @ 0x1E90 */
int struct_bitfields(Flags *f)
{
 return (*(unsigned short *)f >> 6) + ((*(unsigned char *)f >> 3) & 7) + ((*(unsigned char *)f >> 1) & 3) + (*(unsigned char *)f & 1);
}


/* Function: union_type @ 0x1EC0 */
int union_type(UnionData *u, int type)
{
 if ( !type )
 return u->i;
 if ( type == 1 )
 return (int)u->f;
 return u->bytes[0];
}


/* Function: union_array @ 0x1F20 */
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
 while ( &arr[n] != v2 );
 return v3;
}


/* Function: enum_type @ 0x1F50 */
int enum_type(State s)
{
 return 10 * s;
}


/* Function: enum_switch @ 0x1F60 */
int enum_switch(State s)
{
 int result; // eax

 result = -99;
 if ( (unsigned int)s <= STATE_STOPPED )
 return CSWTCH_75[s];
 return result;
}


/* Function: struct_func_ptr @ 0x1F90 */
int struct_func_ptr(Device *dev)
{
 return dev->process(dev->data);
}


/* Function: linked_list @ 0x1FB0 */
int linked_list(Node *head)
{
 Node *v1; // eax
 int i; // edx

 v1 = head;
 for ( i = 0; v1; v1 = v1->next )
 i += v1->data;
 return i;
}


/* Function: doubly_linked_list @ 0x1FD0 */
int doubly_linked_list(DNode *head)
{
 DNode *v1; // eax
 int i; // edx

 v1 = head;
 for ( i = 0; v1; v1 = v1->next )
 i += v1->data;
 return i;
}


/* Function: binary_tree_sum @ 0x1FF0 */
int binary_tree_sum(TreeNode *root)
{
 int left_sum;
 int right_sum;
 
 if ( !root )
 return 0;
 
 left_sum = binary_tree_sum(root->left);
 right_sum = binary_tree_sum(root->right);
 
 return root->data + left_sum + right_sum;
}


/* Function: binary_tree @ 0x2220 */
int binary_tree(TreeNode *root)
{
 TreeNode *v1;
 TreeNode *left;
 int data;
 int v4;
 int v5;
 int i;

 v1 = root;
 i = 0;
 while ( v1 )
 {
 left = v1->left;
 data = v1->data;
 v4 = 0;
 if ( left )
 {
 do
 {
 v5 = left->data;
 left = left->right;
 if ( left )
 v4 = v4 + v5 + binary_tree_sum(left->left);
 else
 v4 = v4 + v5;
 }
 while ( left );
 data = data + v4;
 }
 i += data;
 v1 = v1->right;
 }
 return i;
}


/* Function: graph_traverse @ 0x2280 */
int graph_traverse(Graph *g)
{
 int numVertices;
 int v4;
 int idx;
 Edge *i;

 numVertices = g->numVertices;
 if ( numVertices <= 0 )
 return 0;
 v4 = 0;
 for ( idx = 0; idx < numVertices; idx++ )
 {
 for ( i = g->adjList[idx]; i; i = i->next )
 v4 += i->dest;
 }
 return v4;
}


/* Function: test_composite_types @ 0x22C0 */
void test_composite_types()
{
 Node *v0; // eax
 int v1; // edx
 int data; // ecx
 DNode *v3; // eax
 int v4; // edx
 Node list[3]; // [esp+0h] [ebp-40h] BYREF
 DNode dlist[2]; // [esp+18h] [ebp-28h] BYREF
 unsigned int v7; // [esp+30h] [ebp-10h]

 v7 = __readgsdword(0x14u);
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
 v1 = 10;
 list[1].data = 20;
 list[2].data = 30;
 list[2].next = 0;
 do
 {
 data = v0->data;
 v0 = v0->next;
 v1 += data;
 }
 while ( v0 );
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v1);
 v3 = &dlist[1];
 dlist[0].data = 10;
 dlist[1].prev = &dlist[0];
 v4 = 10;
 dlist[0].next = &dlist[1];
 dlist[0].prev = 0;
 dlist[1].data = 20;
 dlist[1].next = 0;
 do
 {
 v4 += v3->data;
 v3 = v3->next;
 }
 while ( v3 );
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v4);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", 100);
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: __x86.get_pc_thunk.ax @ 0x24B3 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x24B7 */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x24C0 */
void _stack_chk_fail_local()
{
 __asm__ volatile ("addl $_GLOBAL_OFFSET_TABLE_ - (.-2), %%ebx" ::: "ebx");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x6014 */

/* FAILED to decompile: __stack_chk_fail @ 0x6018 */

/* FAILED to decompile: __cxa_finalize @ 0x601C */

/* FAILED to decompile: puts @ 0x6020 */

/* FAILED to decompile: __printf_chk @ 0x6024 */

/* Total functions decompiled: 76, failed: 5 */
