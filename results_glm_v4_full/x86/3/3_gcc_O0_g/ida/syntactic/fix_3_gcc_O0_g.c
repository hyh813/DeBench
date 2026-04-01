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

/* Type definitions for decompiled structures */
typedef int pid_t;
typedef struct _UNKNOWN { void *_dummy; } _UNKNOWN;

typedef struct {
    int x;
    int y;
} Point;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

/* NULL pointer constant */
#define NULL ((void *)0)

/* Global function pointer */
int (*global_func_ptr)(int) = NULL;

/* Global variables used in memory tests */
int global_counter = 0;
int global_array[10];
static int counter_1 = 0;
int extern_global_var;
Point global_point;
static int file_scope_static = 0;
int *global_heap_ptr;
static const char const_string[] = "Test";
int bss_var = 0;
int bss_buffer[10];
static int complex_init[5];
static int static_depends_0 = 0;

/* String constants from original binary */
static const char asc_3008[] = "=== Stack Memory Tests ===";
static const char asc_3158[] = "=== Heap Memory Tests ===";
static const char aD[] = "%d\n";
static const char asc_3348[] = "=== Static/Global Tests ===";
static const char asc_35C4[] = "=== Memory Operations Tests ===";
static const char byte_32EC[] = "Signal: %d\n";
static const char byte_32C4[] = "Exit status: %d\n";
static const char aFork_0[] = "fork";

/* Standard library function prototypes */
int printf(const char *format, ...);
int puts(const char *s);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
char *strcpy(char *dest, const char *src);
int fork(void);
int waitpid(int pid, int *status, int options);
void exit(int status);
void perror(const char *s);
pid_t getpid(void);
pid_t getppid(void);

/* Utility macros for byte extraction */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Macros for accessing low and high 32-bit parts of a 64-bit value */
#define LODWORD(x)  (*((uint32_t*)&(x)))
#define HIDWORD(x)  (*((uint32_t*)((char*)&(x) + 4)))



/* Stack allocation function */

/* Stack allocation function */
static inline void *alloca(size_t size) {
    void *ptr;
    __asm__ __volatile__(
        "subl %1, %%esp\n"
        "movl %%esp, %0"
        : "=r"(ptr)
        : "r"(size)
        : "memory"
    );
    return ptr;
}



/* External declarations */
extern void _gmon_start__(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* Compiler intrinsics for x86 segment register access */
static inline unsigned int __readgsdword(unsigned int offset) {
    unsigned int result;
    unsigned int *ptr = (unsigned int *)(uintptr_t)offset;
    __asm__ __volatile__("movl %%gs:%1, %0" : "=r"(result) : "m"(*ptr));
    return result;
}

static inline void __writegsdword(unsigned int offset, unsigned int value) {
    unsigned int *ptr = (unsigned int *)(uintptr_t)offset;
    __asm__ __volatile__("movl %0, %%gs:%1" : : "r"(value), "m"(*ptr));
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/3/3_gcc_O0_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *8(%ebx)");
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
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130()
{
 sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
int sub_1140(int a1)
{
 return (*(int (**)(void))(a1 + 80))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_127C @ 0x127C */
void sub_127C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1280 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x13B9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x13BD */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: double_value @ 0x13C1 */
int double_value(int x)
{
 return 2 * x;
}


/* Function: local_vars @ 0x13D9 */
int local_vars(int x)
{
 return 2 * x + 10;
}


/* Function: local_array @ 0x1409 */
int local_array(int n)
{
 int i; // [esp+0h] [ebp-38h]
 int arr[10]; // [esp+4h] [ebp-34h]
 unsigned int v4; // [esp+2Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 for ( i = 0; i <= 9; ++i )
 arr[i] = n * i;
 return arr[5];
}


/* Function: local_struct @ 0x1461 */
int local_struct(int x)
{
 return 3 * x;
}


/* Function: address_of_local @ 0x148D */
int address_of_local(int *out)
{
 *out = 42;
 return 42;
}


/* Function: address_of_array @ 0x14B5 */
int address_of_array(int *arr)
{
 return 2 * *arr;
}


/* Function: large_stack_frame @ 0x14E3 */
long long large_stack_frame()
{
 long long result; // rax
 int i; // [esp+8h] [ebp-810h]
 char large_buf[2048]; // [esp+Ch] [ebp-80Ch]
 unsigned int v3; // [esp+80Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i <= 2047; ++i )
 large_buf[i] = i;
 LODWORD(result) = large_buf[1024];
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: vla_stack @ 0x1559 */
int vla_stack(int n)
{
 unsigned int v2; // eax
 int *p_vla; // [esp+8h] [ebp-10h]
 unsigned int v6; // [esp+Ch] [ebp-Ch]
 int i;

 v6 = __readgsdword(0x14u);
 if ( n <= 0 || n > 1000 )
 return -1;
 v2 = 16 * ((4 * n + 15) / 0x10u);
 p_vla = (int *)alloca(v2);
 for ( i = 0; i < n; ++i )
 p_vla[i] = 2 * i;
 return p_vla[n / 2];
}


/* Function: alloca_usage @ 0x1660 */
int alloca_usage(int n)
{
 unsigned int v2; // eax
 int i; // loop counter
 int *arr; // [esp+4h] [ebp-14h]
 unsigned int v7; // [esp+Ch] [ebp-Ch]
 int result; // return value

 v7 = __readgsdword(0x14u);
 if ( n <= 0 )
 return -1;
 v2 = 16 * ((4 * n + 27) / 0x10u);
 arr = (int *)alloca(v2);
 for ( i = 0; i < n; ++i )
 arr[i] = 3 * i;
 result = arr[n / 2];
 return result;
}


/* Function: stack_alias @ 0x175F */
int stack_alias(int *p1, int *p2)
{
 int local[4]; // [esp+18h] [ebp-10h] BYREF
 unsigned int v2; // [esp+28h] [ebp-Ch]

 v2 = __readgsdword(0x14u);
 local[1] = v2;
 local[0] = 10;
 if ( !p1 )
 return -1;
 local[0] = 20;
 return 20;
}


/* Function: test_stack_memory @ 0x17D3 */
void test_stack_memory()
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
 int out; // [esp+Ch] [ebp-3Ch] BYREF
 int alias_val; // [esp+10h] [ebp-38h] BYREF
 int arr5[10]; // [esp+14h] [ebp-34h] BYREF
 unsigned int v12; // [esp+3Ch] [ebp-Ch]

 v12 = __readgsdword(0x14u);
 puts(asc_3008);
 v0 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n", v0);
 v1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n", v1);
 v2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n", v2);
 v3 = address_of_local(&out);
 printf("MEM-L1-04 (address_of_local): %d\n", v3);
 memset(arr5, 0, sizeof(arr5));
 arr5[0] = 1;
 arr5[1] = 2;
 arr5[2] = 3;
 v4 = address_of_array(arr5);
 printf("MEM-L1-05 (address_of_array): %d\n", v4);
 v5 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n", v5);
 v6 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n", v6);
 v7 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n", v7);
 alias_val = 0;
 v8 = stack_alias(&alias_val, &alias_val);
 printf("MEM-L2-04 (stack_alias): %d\n", v8);
}


/* Function: heap_basic @ 0x196F */
int heap_basic(int n)
{
 int i; // [esp+4h] [ebp-14h]
 int *arr; // [esp+8h] [ebp-10h]
 int result; // [esp+Ch] [ebp-Ch]

 arr = (int *)malloc(4 * n);
 if ( !arr )
 return -1;
 for ( i = 0; i < n; ++i )
 arr[i] = 2 * i;
 result = arr[n / 2];
 free(arr);
 return result;
}


/* Function: heap_calloc @ 0x1A05 */
int heap_calloc(int n)
{
 int sum; // [esp+4h] [ebp-14h]
 int i; // [esp+8h] [ebp-10h]
 int *arr; // [esp+Ch] [ebp-Ch]

 arr = (int *)calloc(n, 4u);
 if ( !arr )
 return -1;
 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += arr[i];
 free(arr);
 return sum;
}


/* Function: heap_realloc @ 0x1A82 */
int heap_realloc()
{
 int v1; // eax
 int i; // [esp+8h] [ebp-20h]
 int i_0; // [esp+Ch] [ebp-1Ch]
 int *p; // [esp+10h] [ebp-18h]
 int old_val; // [esp+14h] [ebp-14h]
 int *new_p; // [esp+18h] [ebp-10h]
 int result; // [esp+1Ch] [ebp-Ch]

 p = (int *)malloc(0x14u);
 if ( !p )
 return -1;
 for ( i = 0; i <= 4; ++i )
 p[i] = i + 1;
 old_val = p[2];
 new_p = (int *)realloc(p, 0x28u);
 if ( new_p )
 {
 for ( i_0 = 5; i_0 <= 9; ++i_0 )
 new_p[i_0] = 10 * i_0;
 if ( old_val == new_p[2] )
 v1 = new_p[5];
 else
 v1 = -3;
 result = v1;
 free(new_p);
 return result;
 }
 else
 {
 free(p);
 return -2;
 }
}


/* Function: heap_array @ 0x1B83 */
int heap_array(int n)
{
 int i; // [esp+4h] [ebp-14h]
 int *arr; // [esp+8h] [ebp-10h]
 int result; // [esp+Ch] [ebp-Ch]

 arr = (int *)malloc(4 * n);
 if ( !arr )
 return -1;
 for ( i = 0; i < n; ++i )
 arr[i] = 3 * i;
 result = arr[n / 2];
 free(arr);
 return result;
}


/* Function: heap_struct @ 0x1C1E */
int heap_struct(int x)
{
 Point *p; // [esp+8h] [ebp-10h]
 int result; // [esp+Ch] [ebp-Ch]

 p = (Point *)malloc(8u);
 if ( !p )
 return -1;
 p->x = x;
 p->y = 2 * x;
 result = p->x + p->y;
 free(p);
 return result;
}


/* Function: heap_nested @ 0x1C8B */
int heap_nested(Node **head)
{
 Node *v2; // esi

 *head = (Node *)malloc(8u);
 if ( !*head )
 return -1;
 (*head)->data = 10;
 v2 = *head;
 v2->next = (Node *)malloc(8u);
 if ( (*head)->next )
 {
 (*head)->next->data = 20;
 (*head)->next->next = 0;
 return 0;
 }
 else
 {
 free(*head);
 return -2;
 }
}


/* Function: linked_list_heap @ 0x1D30 */
int linked_list_heap()
{
 Node *head; // [esp+0h] [ebp-28h]
 Node *current; // [esp+4h] [ebp-24h]
 int i; // [esp+8h] [ebp-20h]
 int sum; // [esp+Ch] [ebp-1Ch]
 Node *temp; // [esp+10h] [ebp-18h]
 Node *temp_1; // [esp+14h] [ebp-14h]
 Node *new_node; // [esp+18h] [ebp-10h]
 Node *temp_0; // [esp+1Ch] [ebp-Ch]

 head = 0;
 current = 0;
 for ( i = 0; ; ++i )
 {
 if ( i > 4 )
 {
 sum = 0;
 for ( temp = head; temp; temp = temp->next )
 sum += temp->data;
 while ( head )
 {
 temp_1 = head;
 head = head->next;
 free(temp_1);
 }
 return sum;
 }
 new_node = (Node *)malloc(8u);
 if ( !new_node )
 break;
 new_node->data = 10 * i;
 new_node->next = 0;
 if ( head )
 current->next = new_node;
 else
 head = new_node;
 current = new_node;
 }
 while ( head )
 {
 temp_0 = head;
 head = head->next;
 free(temp_0);
 }
 return -1;
}


/* Function: create_tree_node @ 0x1E46 */
TreeNode * create_tree_node(int data)
{
 TreeNode *node; // [esp+Ch] [ebp-Ch]

 node = (TreeNode *)malloc(0xCu);
 if ( node )
 {
 node->data = data;
 node->left = 0;
 node->right = 0;
 }
 return node;
}


/* Function: tree_heap_traversal @ 0x1E97 */
int tree_heap_traversal()
{
 TreeNode *root; // [esp+8h] [ebp-10h]
 int sum; // [esp+Ch] [ebp-Ch]

 root = create_tree_node(10);
 if ( !root )
 return -1;
 root->left = create_tree_node(20);
 root->right = create_tree_node(30);
 if ( root->left && root->right )
 {
 sum = root->left->data + root->data + root->right->data;
 free(root->left);
 free(root->right);
 free(root);
 return sum;
 }
 else
 {
 if ( root->left )
 free(root->left);
 if ( root->right )
 free(root->right);
 free(root);
 return -2;
 }
}


/* Function: memory_leak @ 0x1FAA */
int memory_leak(int n)
{
 int i; // [esp+8h] [ebp-10h]
 int *leak; // [esp+Ch] [ebp-Ch]

 leak = (int *)malloc(4 * n);
 if ( !leak )
 return -1;
 for ( i = 0; i < n; ++i )
 leak[i] = i;
 return leak[n / 2];
}


/* Function: dangling_pointer @ 0x202B */
int dangling_pointer()
{
 int *p; // [esp+4h] [ebp-14h]
 int saved_val;

 p = (int *)malloc(4u);
 if ( !p )
 return -1;
 *p = 42;
 printf("value before free: %d\n", *p);
 saved_val = *p;
 free(p);
 return saved_val;
}


/* Function: double_free @ 0x20A2 */
int double_free(int *p)
{
 int *temp; // [esp+Ch] [ebp-Ch]

 if ( p )
 return *p;
 temp = (int *)malloc(4u);
 if ( !temp )
 return -1;
 *temp = 10;
 free(temp);
 free(temp);
 return -2;
}


/* Function: heap_overflow @ 0x2111 */
int heap_overflow()
{
 int i; // [esp+4h] [ebp-14h]
 int *arr; // [esp+8h] [ebp-10h]
 int result; // [esp+Ch] [ebp-Ch]

 arr = (int *)malloc(0x28u);
 if ( !arr )
 return -1;
 for ( i = 0; i <= 10; ++i )
 arr[i] = 100 * i;
 result = *arr;
 free(arr);
 return result;
}


/* Function: test_heap_memory @ 0x218C */
void test_heap_memory()
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
 Node *head; // [esp+Ch] [ebp-1Ch] BYREF
 int status; // [esp+10h] [ebp-18h] BYREF
 pid_t pid; // [esp+14h] [ebp-14h]
 int result; // [esp+18h] [ebp-10h]
 unsigned int v13; // [esp+1Ch] [ebp-Ch]

 v13 = __readgsdword(0x14u);
 puts(asc_3158);
 v0 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n", v0);
 v1 = heap_calloc(5);
 printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
 v2 = heap_realloc();
 printf("HEAP-L2-03 (heap_realloc): %d\n", v2);
 v3 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n", v3);
 v4 = heap_struct(5);
 printf("HEAP-L2-05 (heap_struct): %d\n", v4);
 head = 0;
 v5 = heap_nested(&head);
 printf("HEAP-L2-06 (heap_nested): %d\n", v5);
 if ( head )
 {
 free(head->next);
 free(head);
 }
 v6 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v6);
 v7 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", v7);
 v8 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n", v8);
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if ( pid == 0 )
 {
 result = dangling_pointer();
 printf(aD, result);
 exit(0);
 }
 if ( pid <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(pid, &status, 0);
 if ( (status & 0x7F) != 0 )
 {
 if ( (char)((status & 0x7F) + 1) >> 1 > 0 )
 printf(byte_32EC, status & 0x7F);
 }
 else
 {
 printf(byte_32C4, BYTE1(status));
 }
 }
}


/* Function: global_var_access @ 0x23D4 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x23FC */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x2417 */
int global_array_access(int idx)
{
 if ( (unsigned int)idx < 0xA )
 return global_array[idx];
 else
 return -1;
}


/* Function: static_local @ 0x2447 */
int static_local(int reset)
{
 if ( reset )
 {
 counter_1 = 0;
 return 0;
 }
 else
 {
 return ++counter_1;
 }
}


/* Function: static_helper @ 0x2486 */
int static_helper(int x)
{
 return 2 * x;
}


/* Function: call_static_func @ 0x249E */
int call_static_func(int x)
{
 return static_helper(x) + 1;
}


/* Function: access_extern_global @ 0x24BF */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x24DD */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x2506 */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x252F */
int access_bss_var()
{
 return bss_var;
}


/* Function: access_bss_buffer @ 0x2548 */
int access_bss_buffer()
{
 return bss_buffer[0];
}


/* Function: global_struct_access @ 0x2565 */
int global_struct_access()
{
 return global_point.x + global_point.y;
}


/* Function: set_file_static @ 0x2586 */
void set_file_static(int val)
{
 file_scope_static = val;
}


/* Function: get_file_static @ 0x25A3 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x25BC */
void set_global_callback(int (*f)(int))
{
 global_func_ptr = f;
}


/* Function: call_global_callback @ 0x25D9 */
int call_global_callback(int x)
{
 if ( global_func_ptr )
 return global_func_ptr(x);
 else
 return -1;
}


/* Function: global_heap_store @ 0x2611 */
int global_heap_store(int *p)
{
 global_heap_ptr = p;
 if ( p )
 return *global_heap_ptr;
 else
 return -1;
}


/* Function: static_complex_init @ 0x2646 */
int static_complex_init()
{
 return complex_init[0] + complex_init[2] + complex_init[4];
}


/* Function: tls_access @ 0x266F */
int tls_access(int val)
{
 __writegsdword(0xFFFFFFFC, val);
 return 2 * __readgsdword(0xFFFFFFFC);
}


/* Function: init_depends_on @ 0x2693 */
int init_depends_on(int *p)
{
 if ( p )
 static_depends_0 = *p;
 return static_depends_0;
}


/* Function: init_order_test @ 0x26BD */
int init_order_test()
{
 int external_val[4]; // [esp+8h] [ebp-10h] BYREF
 unsigned int canary; // [esp+Ch] [ebp-Ch]

 canary = __readgsdword(0x14u);
 external_val[0] = 20;
 return init_depends_on(external_val);
}


/* Function: test_static_global @ 0x2702 */
void test_static_global()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int const_data; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax
 int file_static; // eax
 int v13; // eax
 int v14; // eax
 int v15; // eax
 int v16; // eax
 int inited; // eax
 int heap_val[3]; // [esp+8h] [ebp-10h] BYREF

 heap_val[1] = __readgsdword(0x14u);
 puts(asc_3348);
 v0 = global_var_access();
 printf("STM-L1-01 (global_var_access): %d\n", v0);
 v1 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n", v1);
 v2 = global_array_access(5);
 printf("STM-L1-02 (global_array_access): %d\n", v2);
 static_local(1);
 v3 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n", v3);
 v4 = static_local(0);
 printf("STM-L1-03 (static_local): %d\n", v4);
 v5 = call_static_func(5);
 printf("STM-L1-04 (call_static_func): %d\n", v5);
 v6 = access_extern_global();
 printf("STM-L2-01 (access_extern_global): %d\n", v6);
 v7 = call_extern_func();
 printf("STM-L2-02 (call_extern_func): %d\n", v7);
 const_data = read_const_data();
 printf("STM-L2-03 (read_const_data): %d\n", const_data);
 v9 = access_bss_var();
 printf("STM-L2-04 (access_bss_var): %d\n", v9);
 v10 = access_bss_buffer();
 printf("STM-L2-04 (access_bss_buffer): %d\n", v10);
 v11 = global_struct_access();
 printf("STM-L2-05 (global_struct_access): %d\n", v11);
 set_file_static(50);
 file_static = get_file_static();
 printf("STM-L2-06 (file_static): %d\n", file_static);
 set_global_callback(double_value);
 v13 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n", v13);
 heap_val[0] = 100;
 v14 = global_heap_store(heap_val);
 printf("STM-L2-08 (global_heap_store): %d\n", v14);
 v15 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n", v15);
 v16 = tls_access(10);
 printf("STM-L3-01 (tls_access): %d\n", v16);
 inited = init_order_test();
 printf("STM-L3-02 (init_order_test): %d\n", inited);
}


/* Function: memop_memset @ 0x2969 */
int memop_memset(void *buf, size_t size, int fill_value)
{
 if ( !buf || !size )
 return -1;
 memset(buf, fill_value, size);
 return *(unsigned char *)buf;
}


/* Function: memop_memcpy @ 0x29B5 */
int memop_memcpy(void *dst, const void *src, size_t n)
{
 if ( !dst || !src || !n )
 return -1;
 memcpy(dst, src, n);
 return *(unsigned int *)((char *)dst + (n & 0xFFFFFFFC) - 4);
}


/* Function: memop_memmove @ 0x2A0E */
int memop_memmove(void *buf, size_t n)
{
 if ( !buf || n <= 1 )
 return -1;
 memmove((char *)buf + 1, buf, n - 1);
 return *((char *)buf + 1);
}


/* Function: memop_memcmp @ 0x2A65 */
int memop_memcmp(const void *p1, const void *p2, size_t n)
{
 int result; // [esp+Ch] [ebp-Ch]

 if ( !p1 || !p2 || !n )
 return 0;
 result = memcmp(p1, p2, n);
 if ( result > 0 )
 return 1;
 if ( result >= 0 )
 return 0;
 return -1;
}


/* Function: memop_bzero @ 0x2AD0 */
int memop_bzero(void *buf, size_t n)
{
 if ( !buf )
 return -1;
 memset(buf, 0, n);
 return *(unsigned char *)buf;
}


/* Function: memop_bcopy @ 0x2B19 */
int memop_bcopy(const void *src, void *dst, size_t n)
{
 if ( !src || !dst || !n )
 return -1;
 memmove(dst, src, n);
 return *(unsigned char *)dst;
}


/* Function: memop_unaligned_access @ 0x2B6B */
int memop_unaligned_access(const char *buf)
{
 if ( buf )
 return *(unsigned int *)(buf + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x2BBE */
int memop_memory_barrier(volatile int *flag)
{
 signed int v2[3]; // [esp+0h] [ebp-10h] BYREF
 int local; // [esp+Ch] [ebp-4h]

 if ( !flag )
 return -1;
 local = *flag;
 __sync_fetch_and_or((int*)v2, 0);
 return *flag + local;
}


/* Function: test_memory_op_functions @ 0x2BF8 */
void test_memory_op_functions()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int flag; // [esp+0h] [ebp-178h] BYREF
 int cmp_a[3]; // [esp+4h] [ebp-174h] BYREF
 int cmp_b[3]; // [esp+10h] [ebp-168h] BYREF
 int int_src[5]; // [esp+1Ch] [ebp-15Ch] BYREF
 int int_dst[5]; // [esp+30h] [ebp-148h] BYREF
static char bcopy_src[4] = {0}; // [esp+47h] [ebp-131h] BYREF
static char bcopy_dst[4] = {0}; // [esp+4Bh] [ebp-12Dh] BYREF
 char unalign_buf[8]; // [esp+4Fh] [ebp-129h] BYREF
 char zero_buf[10]; // [esp+57h] [ebp-121h] BYREF
 char move_buf[11]; // [esp+61h] [ebp-117h] BYREF
 char buffer[256]; // [esp+6Ch] [ebp-10Ch] BYREF
 unsigned int v19; // [esp+16Ch] [ebp-Ch]

 v19 = __readgsdword(0x14u);
 puts(asc_35C4);
 int_src[0] = 10;
 int_src[1] = 20;
 int_src[2] = 30;
 int_src[3] = 40;
 int_src[4] = 50;
 memset(int_dst, 0, sizeof(int_dst));
 v0 = memop_memset(buffer, 0xAu, 65);
 printf("MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy(int_dst, int_src, 0x14u);
 printf("MEMOP-L2-02: %d\n", v1);
 strcpy(move_buf, "HelloWorld");
 v2 = memop_memmove(move_buf, 0xAu);
 printf("MEMOP-L2-03: %c\n", v2);
 cmp_a[0] = 1;
 cmp_a[1] = 2;
 cmp_a[2] = 3;
 cmp_b[0] = 1;
 cmp_b[1] = 2;
 cmp_b[2] = 4;
 v3 = memop_memcmp(cmp_a, cmp_b, 0xCu);
 printf("MEMOP-L2-04: %d\n", v3);
 v4 = memop_bzero(zero_buf, 0xAu);
 printf("MEMOP-L2-05: %d\n", v4);
 *(unsigned int *)bcopy_src = 67305985;
 *(unsigned int *)bcopy_dst = 0;
 v5 = memop_bcopy(bcopy_src, bcopy_dst, 4u);
 printf("MEMOP-L2-06: %d\n", v5);
 *(unsigned int *)unalign_buf = 50462976;
 *(unsigned int *)&unalign_buf[4] = 117835012;
 v6 = memop_unaligned_access(unalign_buf);
 printf("MEMOP-L3-01: 0x%x\n", v6);
 flag = 5;
 v7 = memop_memory_barrier(&flag);
 printf("MEMOP-L3-02: %d\n", v7);
}


/* Function: main @ 0x2E86 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x2EB5 */
void *_x86_get_pc_thunk_ax()
{
 _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}





/* Function: __stack_chk_fail_local @ 0x2EE0 */
void _stack_chk_fail_local()
{
 __asm__ volatile("addl $_GLOBAL_OFFSET_TABLE_ - (.), %%ebx" : : : "ebx");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x6144 */

/* FAILED to decompile: printf @ 0x6148 */

/* FAILED to decompile: memmove @ 0x614C */

/* FAILED to decompile: free @ 0x6150 */

/* FAILED to decompile: memcpy @ 0x6154 */

/* FAILED to decompile: memcmp @ 0x6158 */

/* FAILED to decompile: __stack_chk_fail @ 0x615C */

/* FAILED to decompile: __cxa_finalize @ 0x6160 */

/* FAILED to decompile: perror @ 0x6164 */

/* FAILED to decompile: waitpid @ 0x6168 */

/* FAILED to decompile: realloc @ 0x616C */

/* FAILED to decompile: malloc @ 0x6170 */

/* FAILED to decompile: puts @ 0x6174 */

/* FAILED to decompile: exit @ 0x6178 */

/* FAILED to decompile: memset @ 0x617C */

/* FAILED to decompile: fork @ 0x6180 */

/* FAILED to decompile: calloc @ 0x6184 */

/* Total functions decompiled: 90, failed: 17 */
