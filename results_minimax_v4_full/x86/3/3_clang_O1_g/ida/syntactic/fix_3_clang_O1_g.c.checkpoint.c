/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int bool;
#define true 1
#define false 0

/* Standard library function declarations */
int printf(const char *format, ...);
int puts(const char *s);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void exit(int status);
int fork(void);
int perror(const char *s);
int waitpid(int pid, int *status, int options);

/* CRT function declarations */
void _gmon_start__(void);
void frame_dummy(void);
int _do_global_ctors_aux(void);

/* Helper macros */
#define BYTE1(x) ((unsigned char *)(&x))[1]
#define _InterlockedOr(addr, val) (*(volatile int *)(addr) = *(volatile int *)(addr) | (val))

/* Node structure for linked list */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* TreeNode structure for binary tree */
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* Global variables */
int global_counter;
int global_array[10];
int extern_global_var;
int static_local_counter;
int *file_scope_static;
int global_func_ptr;
int global_heap_ptr;
const char const_string[] = "Hello World";

/* String constants used in tests */
const char asc_35C1[] = "=== Stack Memory Tests ===";
const char asc_35DF[] = "=== Heap Memory Tests ===";
const char asc_35FD[] = "=== Static/Global Memory Tests ===";
const char asc_3621[] = "=== Memory Operation Tests ===";

/* Undefined data references */
extern unsigned char byte_9;
extern unsigned short word_32;
extern unsigned char unk_3670[];
extern unsigned char unk_367C[];
extern char byte_32A2[];
extern char byte_327D[];
extern char aD[];
extern char aFork_0[];

/* Helper function */
void qmemcpy(void *dest, const void *src, size_t n)
{
    memcpy(dest, src, n);
}

/* extern function declaration - forward declaration */
/* Note: This function IS defined later in this file at line 1277 */
int extern_function(int x);

/* Helper function declaration */
void qme(void);

/* Data symbols needed by tests */
unsigned char byte_9 = 9;
unsigned short word_32 = 32;
unsigned char unk_3670[12] = "HelloWorld";
unsigned char unk_367C[12] = "HelloWorld";
char byte_32A2[] = "Child exit signal: %d\n";
char byte_327D[] = "Child exited with: %d\n";
char aD[] = "%d\n";
char aFork_0[] = "fork failed";

/* Forward declaration for double_value */
int double_value(int x);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/3/3_clang_O1_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void __attribute__((noreturn)) sub_1030(void)
{
    __asm__("jmp *%0" : : "r"(*(void **)(((char *)__builtin_frame_address(0)) + 8)));
    __builtin_unreachable();
}


/* Function: sub_1130 @ 0x1130 */
int sub_1130(int a1)
{
    typedef int (*func_ptr)(void);
    return (*(func_ptr)(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_116C @ 0x116C */
int sub_116C()
{
 return 0;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1170 */
int _x86_get_pc_thunk_bx(void)
{
 register unsigned int esp_reg;
 __asm__("mov %%ebx, %0" : "=r"(esp_reg));
 return 0;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x12A9 */
int _x86_get_pc_thunk_dx()
{
 return 0;
}


/* Function: __x86.get_pc_thunk.di @ 0x12AD */
int _x86_get_pc_thunk_di()
{
 return 0;
}


/* Function: local_vars @ 0x12C0 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x12D0 */
int local_array(int n)
{
 int v1; // ecx
 int i; // edx
 unsigned int v4[10]; // [esp+0h] [ebp-28h]

 v1 = 0;
 for ( i = 0; i != 10; ++i )
 {
 v4[i] = v1;
 v1 += n;
 }
 return v4[5];
}


/* Function: local_struct @ 0x1300 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x1310 */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x1320 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x1330 */
int large_stack_frame()
{
 int i; // eax
 unsigned char v2[2048]; // [esp+0h] [ebp-800h]

 for ( i = 0; i != 2048; ++i )
 v2[i] = i;
 return v2[1024];
}


/* Function: vla_stack @ 0x1360 */
int vla_stack(int n)
{
 int result; // eax
 char *v2; // eax
 int v3; // esi
 int v4; // edi
 int v5; // [esp+0h] [ebp-8h] BYREF

 result = -1;
 if ( (unsigned int)(n - 1001) >= 0xFFFFFC18 )
 {
 v2 = (char *)&v5 - ((4 * n + 15) & 0xFFFFFFF0);
 if ( n > 0 )
 {
 v3 = 0;
 v4 = n;
 do
 {
 *(unsigned int *)&v2[2 * v3] = v3;
 v3 += 2;
 --v4;
 }
 while ( v4 );
 }
 return *(unsigned int *)&v2[2 * ((n + ((unsigned int)n >> 31)) & 0xFFFFFFFE)];
 }
 return result;
}


/* Function: alloca_usage @ 0x13D0 */
int alloca_usage(int n)
{
 int v1; // eax
 char *v2; // ecx
 int v3; // edx
 int i; // esi
 int v6; // [esp-4h] [ebp-8h] BYREF

 v6 = v1;
 if ( n <= 0 )
 return -1;
 v2 = (char *)&v6 - ((4 * n + 15) & 0xFFFFFFF0);
 v3 = 0;
 for ( i = 0; i != n; ++i )
 {
 *(unsigned int *)&v2[4 * i] = v3;
 v3 += 3;
 }
 return *(unsigned int *)&v2[2 * ((n + ((unsigned int)n >> 31)) & 0xFFFFFFFE)];
}


/* Function: stack_alias @ 0x1420 */
int stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x1430 */
int test_stack_memory()
{
 int i; // eax
 int j; // eax
 int k; // ecx
 int v3; // eax
 unsigned int *v4; // ecx
 unsigned char v5[20]; // [esp+10h] [ebp-80Ch] BYREF
 int v6; // [esp+24h] [ebp-7F8h]
 char v7; // [esp+410h] [ebp-40Ch]

 puts(asc_35C1);
 printf("MEM-L1-01 (local_vars): %d\n", 20);
 for ( i = 0; i != 20; i += 2 )
 *(unsigned int *)&v5[2 * i] = i;
 printf("MEM-L1-02 (local_array): %d\n", v6);
 printf("MEM-L1-03 (local_struct): %d\n", 15);
 printf("MEM-L1-04 (address_of_local): %d\n", 42);
 printf("MEM-L1-05 (address_of_array): %d\n", 2);
 for ( j = 0; j != 2048; ++j )
 v5[j] = j;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v7);
 for ( k = 0; k != 20; k += 2 )
 *(unsigned int *)&v5[2 * k] = k;
 printf("MEM-L2-02 (vla_stack): %d\n", v6);
 v3 = 0;
 v4 = v5;
 do
 {
 *v4 = v3;
 v3 += 3;
 ++v4;
 }
 while ( v3 != 30 );
 printf("MEM-L2-03 (alloca_usage): %d\n", v6);
 printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1590 */
int heap_basic(int n)
{
 char *v1; // eax
 int v2; // ecx
 int v3; // edx
 int v4; // esi

 v1 = (char *)malloc(4 * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 v2 = 0;
 v3 = n;
 do
 {
 *(unsigned int *)&v1[2 * v2] = v2;
 v2 += 2;
 --v3;
 }
 while ( v3 );
 }
 v4 = *(unsigned int *)&v1[2 * ((n + ((unsigned int)n >> 31)) & 0xFFFFFFFE)];
 free(v1);
 return v4;
}


/* Function: heap_calloc @ 0x15F0 */
int heap_calloc(int n)
{
 unsigned int *v1; // eax
 int v2; // ecx
 int v3; // esi

 v1 = calloc(n, 4u);
 if ( !v1 )
 return -1;
 if ( n <= 0 )
 {
 v3 = 0;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 do
 v3 += v1[v2++];
 while ( n != v2 );
 }
 free(v1);
 return v3;
}


/* Function: heap_realloc @ 0x1660 */
int heap_realloc()
{
 unsigned int *v0; // eax
 unsigned int *v1; // esi
 int i; // eax
 int v3; // ebp
 unsigned int *v4; // eax
 int *v5; // ecx
 int j; // edx
 int v7; // edi

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 v1 = v0;
 for ( i = 1; i != 6; ++i )
 v1[i - 1] = i;
 v3 = v1[2];
 v4 = realloc(v1, 0x28u);
 if ( v4 )
 {
 v5 = v4 + 5;
 for ( j = 50; j != 100; j += 10 )
 *v5++ = j;
 v7 = -3;
 if ( v4[2] == v3 )
 v7 = v4[5];
 v1 = v4;
 }
 else
 {
 v7 = -2;
 }
 free(v1);
 return v7;
}


/* Function: heap_array @ 0x1700 */
int heap_array(int n)
{
 unsigned int *v1; // eax
 int v2; // ecx
 int i; // edx
 int v4; // esi

 v1 = malloc(4 * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 v2 = 0;
 for ( i = 0; i != n; ++i )
 {
 v1[i] = v2;
 v2 += 3;
 }
 }
 v4 = *(unsigned int *)((char *)v1 + 2 * ((n + ((unsigned int)n >> 31)) & 0xFFFFFFFE));
 free(v1);
 return v4;
}


/* Function: heap_struct @ 0x1770 */
int heap_struct(int x)
{
 return 3 * x;
}


/* Function: heap_nested @ 0x1780 */
int heap_nested(Node **head)
{
 Node *v1; // eax
 Node *next; // ecx

 v1 = (Node *)malloc(8u);
 *head = v1;
 if ( !v1 )
 return -1;
 v1->data = 10;
 (*head)->next = (Node *)malloc(8u);
 next = (*head)->next;
 if ( next )
 {
 next->data = 20;
 next->next = 0;
 return 0;
 }
 else
 {
 free(*head);
 return -2;
 }
}


/* Function: linked_list_heap @ 0x17F0 */
int linked_list_heap()
{
 unsigned int *v0; // esi
 unsigned int *v1; // edi
 unsigned int v2; // ecx
 unsigned int *v3; // ebp
 unsigned int *v4; // edi
 int v5; // edi
 unsigned int *v6; // eax
 unsigned int *v7; // ebp
 bool v9; // [esp+13h] [ebp-19h]
 unsigned int v10; // [esp+14h] [ebp-18h]

 v0 = 0;
 v9 = 1;
 v1 = 0;
 v2 = 0;
 while ( 1 )
 {
 v10 = v2;
 v3 = malloc(8u);
 if ( !v3 )
 break;
 *v3 = 10 * v10;
 v3[1] = 0;
 if ( v0 )
 {
 v1[1] = v3;
 v1 = v3;
 }
 else
 {
 v1 = v3;
 v0 = v3;
 }
 v9 = v10 < 4;
 v2 = v10 + 1;
 if ( v10 == 4 )
 goto LABEL_11;
 }
 if ( v0 )
 {
 do
 {
 v4 = (unsigned int *)v0[1];
 free(v0);
 v0 = v4;
 }
 while ( v4 );
 v0 = 0;
 }
 else
 {
 v0 = 0;
 }
LABEL_11:
 v5 = -1;
 if ( !v9 )
 {
 v5 = 0;
 if ( v0 )
 {
 v6 = v0;
 do
 {
 v5 += *v6;
 v6 = (unsigned int *)v6[1];
 }
 while ( v6 );
 }
 if ( v0 )
 {
 do
 {
 v7 = (unsigned int *)v0[1];
 free(v0);
 v0 = v7;
 }
 while ( v7 );
 }
 }
 return v5;
}


/* Function: create_tree_node @ 0x18F0 */
TreeNode * create_tree_node(int data)
{
 TreeNode *result; // eax

 result = (TreeNode *)malloc(0xCu);
 if ( result )
 {
 result->data = data;
 result->left = 0;
 result->right = 0;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x1930 */
int tree_heap_traversal()
{
 unsigned int *v0; // eax
 unsigned int *v1; // esi
 unsigned int *v2; // eax
 unsigned int *v3; // edi
 unsigned int *v4; // eax
 void *v5; // ebp
 int v6; // edi
 void *size; // [esp+0h] [ebp-1Ch]

 v0 = malloc(0xCu);
 if ( v0 )
 {
 v1 = v0;
 *v0 = 10;
 v0[1] = 0;
 v0[2] = 0;
 v2 = malloc(0xCu);
 v3 = v2;
 if ( v2 )
 {
 *v2 = 20;
 v2[1] = 0;
 v2[2] = 0;
 }
 v1[1] = v2;
 v4 = malloc(0xCu);
 v5 = v4;
 if ( v4 )
 {
 *v4 = 30;
 v4[1] = 0;
 v4[2] = 0;
 }
 v1[2] = v4;
 if ( v3 && v4 )
 {
 size = v3;
 v6 = *v4 + *v1 + *v3;
 free(size);
 v5 = (void *)v1[2];
 }
 else
 {
 if ( v3 )
 free(v3);
 v6 = -2;
 if ( !v5 )
 goto LABEL_14;
 }
 free(v5);
LABEL_14:
 free(v1);
 return v6;
 }
 return -1;
}


/* Function: memory_leak @ 0x1A20 */
int memory_leak(int n)
{
 unsigned int *v1; // eax
 int i; // ecx

 v1 = malloc(4 * n);
 if ( !v1 )
 return -1;
 if ( n > 0 )
 {
 for ( i = 0; i != n; ++i )
 v1[i] = i;
 }
 return *(unsigned int *)((char *)v1 + 2 * ((n + ((unsigned int)n >> 31)) & 0xFFFFFFFE));
}


/* Function: dangling_pointer @ 0x1A80 */
int dangling_pointer()
{
 unsigned int *v0; // eax
 void *v1; // esi

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 v1 = v0;
 *v0 = 42;
 printf("value before free: %d\n", 42);
 free(v1);
 return *(unsigned int *)v1;
}


/* Function: double_free @ 0x1AE0 */
int double_free(int *p)
{
 if ( p )
 return *p;
 else
 return -2;
}


/* Function: heap_overflow @ 0x1B00 */
int heap_overflow()
{
 unsigned int *v0; // eax
 int v1; // ecx
 unsigned int *v2; // edx
 int v3; // esi

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = 0;
 v2 = v0;
 do
 {
 *v2 = v1;
 v1 += 100;
 ++v2;
 }
 while ( v1 != 1100 );
 v3 = *v0;
 free(v0);
 return v3;
}


/* Function: test_heap_memory @ 0x1B60 */
int test_heap_memory()
{
 unsigned int *v0; // eax
 int v1; // esi
 int v2; // edi
 int i; // ecx
 unsigned int *v4; // eax
 int v5; // ecx
 unsigned int *v6; // eax
 int v7; // edi
 int v8; // ebp
 unsigned int *v9; // esi
 int j; // eax
 int v11; // ebp
 unsigned int *v12; // eax
 int v13; // esi
 int *v14; // ecx
 int k; // edx
 unsigned int *v16; // eax
 int v17; // ecx
 unsigned int *v18; // edx
 void **v19; // eax
 void **v20; // esi
 unsigned int *v21; // eax
 int v22; // eax
 int v23; // eax
 int v24; // eax
 unsigned int *v25; // eax
 int m; // ecx
 int v27; // eax
 int v28; // eax
 int v29; // eax
 int stat_loc; // [esp+18h] [ebp-14h] BYREF

 puts(asc_35DF);
 v0 = malloc(0x28u);
 v1 = -1;
 v2 = -1;
 if ( v0 )
 {
 for ( i = 0; i != 10; ++i )
 v0[i] = i * 2;
 v2 = v0[5];
 free(v0);
 }
 printf("HEAP-L2-01 (heap_basic): %d\n", v2);
 v4 = calloc(5u, 4u);
 if ( v4 )
 {
 v5 = 0;
 v1 = 0;
 do
 v1 += v4[v5++];
 while ( v5 != 5 );
 free(v4);
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
 v6 = malloc(0x14u);
 v7 = -1;
 v8 = -1;
 if ( v6 )
 {
 v9 = v6;
 for ( j = 1; j != 6; ++j )
 v9[j - 1] = j;
 v11 = v9[2];
 v12 = realloc(v9, 0x28u);
 if ( v12 )
 {
 v13 = v11;
 v14 = v12 + 5;
 for ( k = 50; k != 100; k += 10 )
 *v14++ = k;
 v8 = -3;
 if ( v12[2] == v13 )
 v8 = v12[5];
 v9 = v12;
 }
 else
 {
 v8 = -2;
 }
 free(v9);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", v8);
 v16 = malloc(0x28u);
 if ( v16 )
 {
 v17 = 0;
 v18 = v16;
 do
 {
 *v18 = v17;
 v17 += 3;
 ++v18;
 }
 while ( v17 != 30 );
 v7 = v16[5];
 free(v16);
 }
 printf("HEAP-L2-04 (heap_array): %d\n", v7);
 printf("HEAP-L2-05 (heap_struct): %d\n", 15);
 v19 = (void **)malloc(8u);
 v20 = v19;
 if ( v19 )
 {
 *v19 = byte_9 + 1;
 v21 = malloc(8u);
 v20[1] = v21;
 if ( v21 )
 {
 *v21 = 20;
 v21[1] = 0;
 v22 = 0;
 }
 else
 {
 free(v20);
 v22 = -2;
 }
 }
 else
 {
 v22 = -1;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", v22);
 if ( v20 )
 {
 free(v20[1]);
 free(v20);
 }
 v23 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v23);
 v24 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", v24);
 v25 = malloc(0x14u);
 if ( v25 )
 {
 for ( m = 0; m != 5; ++m )
 v25[m] = m;
 v27 = v25[2];
 }
 else
 {
 v27 = -1;
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", v27);
 printf("HEAP-L3-04 (dangling_pointer): ");
 v28 = fork();
 if ( !v28 )
 {
 v29 = dangling_pointer();
 printf(aD, v29);
 exit(0);
 }
 if ( v28 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v28, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( ((stat_loc & 0x7F) << 24) + 0x1000000 >= 0x2000000 )
 printf(byte_32A2, stat_loc & 0x7F);
 }
 else
 {
 printf(byte_327D, BYTE1(stat_loc));
 }
 }
}


/* Function: global_var_access @ 0x1EB0 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x1ED0 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x1EF0 */
int global_array_access(int idx)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)idx <= 9 )
 return global_array[idx];
 return result;
}


/* Function: static_local @ 0x1F20 */
int static_local(int reset)
{
 int result; // eax

 result = 0;
 if ( !reset )
 result = static_local_counter + 1;
 static_local_counter = result;
 return result;
}


/* Function: call_static_func @ 0x1F50 */
int call_static_func(int x)
{
 return 2 * x + 1;
}


/* Function: access_extern_global @ 0x1F60 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1F80 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x1FB0 */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1FD0 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x1FE0 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x1FF0 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x2000 */
void set_file_static(int val)
{
 file_scope_static = (int *)val;
}


/* Function: get_file_static @ 0x2020 */
int *get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x2040 */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = (int)f;
}


/* Function: call_global_callback @ 0x2060 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return ((int ( *)(int))global_func_ptr)(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x2090 */
int global_heap_store(int *p)
{
 global_heap_ptr = (int)p;
 if ( p )
 return *p;
 else
 return -1;
}


/* Function: static_complex_init @ 0x20C0 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x20D0 */
int tls_access(int val)
{
 return 2 * val;
}


/* Function: init_order_test @ 0x20E0 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x20F0 */
void test_static_global()
{
 int v0; // eax
 int v1; // [esp+10h] [ebp-Ch] BYREF

 puts(asc_35FD);
 printf("STM-L1-01 (global_var_access): %d\n", ++global_counter);
 printf("STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 printf("STM-L1-02 (global_array_access): %d\n", 5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n", 1);
 printf("STM-L1-03 (static_local): %d\n", ++static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n", 11);
 printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v0 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n", v0);
 printf("STM-L2-03 (read_const_data): %d\n", const_string[4] + 42);
 printf("STM-L2-04 (access_bss_var): %d\n", 0);
 printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf("STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = (unsigned int *)&word_32;
 printf("STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (int)double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n", 10);
 v1 = 100;
 global_heap_ptr = (int)&v1;
 printf("STM-L2-08 (global_heap_store): %d\n", 100);
 printf("STM-L2-09 (static_complex_init): %d\n", 15);
 printf("STM-L3-01 (tls_access): %d\n", 20);
 printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x2300 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: memop_memset @ 0x2310 */
int memop_memset(unsigned char *buf, size_t size, int fill_value)
{
 int result; // eax

 result = -1;
 if ( buf )
 {
 if ( size )
 {
 memset(buf, fill_value, size);
 return *buf;
 }
 }
 return result;
}


/* Function: memop_memcpy @ 0x2350 */
int memop_memcpy(char *dst, const void *src, size_t n)
{
 int result; // eax

 result = -1;
 if ( dst && src )
 {
 if ( n )
 {
 memcpy(dst, src, n);
 return *(unsigned int *)&dst[(n & 0xFFFFFFFC) - 4];
 }
 }
 return result;
}


/* Function: memop_memmove @ 0x23A0 */
int memop_memmove(char *buf, size_t n)
{
 int result; // eax

 result = -1;
 if ( buf )
 {
 if ( n >= 2 )
 {
 memmove(buf + 1, buf, n - 1);
 return buf[1];
 }
 }
 return result;
}


/* Function: memop_memcmp @ 0x23F0 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int result; // eax
 int v4; // eax
 int v5; // ecx
 bool v6; // cc

 result = 0;
 if ( p1 && p2 && n )
 {
 v4 = memcmp(p1, p2, n);
 v5 = -(v4 != 0);
 v6 = v4 <= 0;
 result = 1;
 if ( v6 )
 return v5;
 }
 return result;
}


/* Function: memop_bzero @ 0x2440 */
int memop_bzero(unsigned char *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *buf;
}


/* Function: memop_bcopy @ 0x2480 */
int memop_bcopy(const void *src, unsigned char *dst, size_t n)
{
 int result; // eax

 result = -1;
 if ( src && dst )
 {
 if ( n )
 {
 memmove(dst, src, n);
 return *dst;
 }
 }
 return result;
}


/* Function: memop_unaligned_access @ 0x24D0 */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x24F0 */
int memop_memory_barrier(volatile int *flag)
{
 volatile int v1; // eax

 if ( !flag )
 return -1;
 v1 = *flag;
 return *flag + v1;
}


/* Function: test_memory_op_functions @ 0x2510 */
void test_memory_op_functions()
{
 int v0; // eax
 int v1; // ecx
 bool v2; // cc
 int v3; // eax
 signed int v4; // [esp+0h] [ebp-1Ch] BYREF
 int v5; // [esp+8h] [ebp-14h]
 unsigned int v6[4]; // [esp+Ch] [ebp-10h] BYREF

 puts(asc_3621);
 printf("MEMOP-L2-01: %d\n", 65);
 printf("MEMOP-L2-02: %d\n", 50);
 qmemcpy(v6, "HHelloWorl", 10);
 printf("MEMOP-L2-03: %c\n", 72);
 v0 = memcmp(&unk_3670, &unk_367C, 0xCu);
 v1 = -(v0 != 0);
 v2 = v0 <= 0;
 v3 = 1;
 if ( v2 )
 v3 = v1;
 printf("MEMOP-L2-04: %d\n", v3);
 printf("MEMOP-L2-05: %d\n", 0);
 printf("MEMOP-L2-06: %d\n", 1);
 printf("MEMOP-L3-01: 0x%x\n", 67305985);
 v5 = 5;
 _InterlockedOr(&v4, 0);
 printf("MEMOP-L3-02: %d\n", v5 + 5);
}


/* Function: main @ 0x2640 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: extern_function @ 0x2670 */
int extern_function(int x)
{
    return 3 * x;
}

/* Helper function declaration */
void qme(void);

/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x26CC */
void term_proc()
{
 /* Stub: _do_global_dtors_aux was removed */
}


/* FAILED to decompile: __libc_start_main @ 0x6078 */

/* FAILED to decompile: printf @ 0x607C */

/* FAILED to decompile: memmove @ 0x6080 */

/* FAILED to decompile: free @ 0x6084 */

/* FAILED to decompile: memcpy @ 0x6088 */

/* FAILED to decompile: memcmp @ 0x608C */

/* FAILED to decompile: __cxa_finalize @ 0x6090 */

/* FAILED to decompile: perror @ 0x6094 */

/* FAILED to decompile: waitpid @ 0x6098 */

/* FAILED to decompile: realloc @ 0x609C */

/* FAILED to decompile: malloc @ 0x60A0 */

/* FAILED to decompile: puts @ 0x60A4 */

/* FAILED to decompile: exit @ 0x60A8 */

/* FAILED to decompile: memset @ 0x60AC */

/* FAILED to decompile: fork @ 0x60B0 */

/* FAILED to decompile: calloc @ 0x60B4 */

/* Total functions decompiled: 70, failed: 16 */
