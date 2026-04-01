/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/2/2_gcc_O3_g
 * Processor: pc
 */

#include <stdbool.h>

/* GCC builtin for reading GS segment (stack canary) */
static unsigned int __readgsdword(unsigned int offset)
{
 return 0;
}

/* Type definitions */
typedef struct Point3D {
 int x;
 int y;
 int z;
} Point3D;

typedef struct Rect {
 Point3D position;
 struct { int width; int height; } size;
} Rect;

typedef struct { float r; float g; float b; } Color;

typedef struct Widget {
 Rect bounds;
 struct { Color fill; } style;
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

typedef struct Flags {
 unsigned char flags;
} Flags;

typedef union UnionData {
 int i;
 float f;
 unsigned char bytes[4];
} UnionData;

typedef enum State {
 STATE_STOPPED = 5,
 STATE_RUNNING = 10
} State;

/* Switch table for enum_switch */
static const int CSWTCH_75[] = {0, 10, 20, 30, 40, 50};

typedef struct Device {
 int data;
 int (*process)(int);
} Device;

typedef struct Edge {
 int dest;
 struct Edge *next;
} Edge;

typedef struct Graph {
 int numVertices;
 Edge **adjList;
} Graph;

/* External string declarations */
static const char asc_3008[] = "Data Types Test";
static const char asc_33BD[] = "Array Types Test";
static const char asc_3430[] = "Pointer Types Test";
static const char asc_3526[] = "Composite Types Test";




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *%ebx");
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
 result += 2LL * x * (x >> 32);
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
 while ( &arr[n] != v2 );
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
 return (*arr)[99]
 + (*arr)[88]
 + (*arr)[77]
 + (*arr)[66]
 + (*arr)[55]
 + (*arr)[44]
 + (*arr)[33]
 + (*arr)[22]
 + (*arr)[0]
 + (*arr)[11];
}


/* Function: array_3d @ 0x1590 */
int array_3d(int (*arr)[5][5])
{
 int v1; // eax
 int v2; // eax

 v1 = (*arr)[8][2]
 + (*arr)[8][1]
 + (*arr)[8][0]
 + (*arr)[7][4]
 + (*arr)[7][3]
 + (*arr)[7][2]
 + (*arr)[7][1]
 + (*arr)[7][0]
 + (*arr)[6][4]
 + (*arr)[6][3]
 + (*arr)[6][2]
 + (*arr)[6][1]
 + (*arr)[6][0]
 + (*arr)[5][4]
 + (*arr)[5][3]
 + (*arr)[5][2]
 + (*arr)[5][1]
 + (*arr)[5][0]
 + (*arr)[4][4]
 + (*arr)[4][3]
 + (*arr)[4][2]
 + (*arr)[4][1]
 + (*arr)[4][0]
 + (*arr)[3][4]
 + (*arr)[3][3]
 + (*arr)[3][2]
 + (*arr)[3][1]
 + (*arr)[3][0]
 + (*arr)[2][4]
 + (*arr)[2][3]
 + (*arr)[2][2]
 + (*arr)[2][1]
 + (*arr)[2][0]
 + (*arr)[1][4]
 + (*arr)[1][3]
 + (*arr)[1][2]
 + (*arr)[1][1]
 + (*arr)[1][0]
 + (*arr)[0][4]
 + (*arr)[0][3]
 + (*arr)[0][2]
 + (*arr)[0][1]
 + (*arr)[0][0];
 v2 = (*arr)[16][4]
 + (*arr)[16][3]
 + (*arr)[16][2]
 + (*arr)[16][1]
 + (*arr)[16][0]
 + (*arr)[15][4]
 + (*arr)[15][3]
 + (*arr)[15][2]
 + (*arr)[15][1]
 + (*arr)[15][0]
 + (*arr)[14][4]
 + (*arr)[14][3]
 + (*arr)[14][2]
 + (*arr)[14][1]
 + (*arr)[14][0]
 + (*arr)[13][4]
 + (*arr)[13][3]
 + (*arr)[13][2]
 + (*arr)[13][1]
 + (*arr)[13][0]
 + (*arr)[12][4]
 + (*arr)[12][3]
 + (*arr)[12][2]
 + (*arr)[12][1]
 + (*arr)[12][0]
 + (*arr)[11][4]
 + (*arr)[11][3]
 + (*arr)[11][2]
 + (*arr)[11][1]
 + (*arr)[11][0]
 + (*arr)[10][4]
 + (*arr)[10][3]
 + (*arr)[10][2]
 + (*arr)[10][1]
 + (*arr)[10][0]
 + (*arr)[9][4]
 + (*arr)[9][3]
 + (*arr)[9][2]
 + (*arr)[9][1]
 + (*arr)[9][0]
 + (*arr)[8][4]
 + (*arr)[8][3]
 + v1;
 return (*arr)[24][4]
 + (*arr)[24][3]
 + (*arr)[24][2]
 + (*arr)[24][1]
 + (*arr)[24][0]
 + (*arr)[23][4]
 + (*arr)[23][3]
 + (*arr)[23][2]
 + (*arr)[23][1]
 + (*arr)[23][0]
 + (*arr)[22][4]
 + (*arr)[22][3]
 + (*arr)[22][2]
 + (*arr)[22][1]
 + (*arr)[22][0]
 + (*arr)[21][4]
 + (*arr)[21][3]
 + (*arr)[21][2]
 + (*arr)[21][1]
 + (*arr)[21][0]
 + (*arr)[20][4]
 + (*arr)[20][3]
 + (*arr)[20][2]
 + (*arr)[20][1]
 + (*arr)[20][0]
 + (*arr)[19][4]
 + (*arr)[19][3]
 + (*arr)[19][2]
 + (*arr)[19][1]
 + (*arr)[19][0]
 + (*arr)[18][4]
 + (*arr)[18][3]
 + (*arr)[18][2]
 + (*arr)[18][1]
 + (*arr)[18][0]
 + (*arr)[17][4]
 + (*arr)[17][3]
 + (*arr)[17][2]
 + (*arr)[17][1]
 + (*arr)[17][0]
 + v2;
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
int ptr_const_ptr(int *const p)
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
 return w->bounds.position.z + w->style.fill.r;
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


/* Function: binary_tree @ 0x2220 */
int binary_tree(TreeNode *root)
{
 TreeNode *v1; // esi
 TreeNode *left; // ebx
 int data; // edi
 int v4; // ebp
 int v5; // eax
 int i; // [esp+Ch] [ebp-20h]

 v1 = root;
 for ( i = 0; v1; i += data )
 {
 left = v1->left;
 data = v1->data;
 v4 = 0;
 if ( left )
 {
 do
 {
 v5 = left->data + binary_tree_sum(left->left);
 left = left->right;
 v4 += v5;
 }
 while ( left );
 data += v4;
 }
 v1 = v1->right;
 }
 return i;
}


/* Function: graph_traverse @ 0x2280 */
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
 dlist[1].prev = dlist;
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
 __asm__ volatile("addl $0, %ebx");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x252C */
void term_proc()
{
}


/* FAILED to decompile: __libc_start_main @ 0x6014 */

/* FAILED to decompile: __stack_chk_fail @ 0x6018 */

/* FAILED to decompile: __cxa_finalize @ 0x601C */

/* FAILED to decompile: puts @ 0x6020 */

/* FAILED to decompile: __printf_chk @ 0x6024 */

/* Total functions decompiled: 76, failed: 5 */
