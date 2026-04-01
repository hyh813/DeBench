/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;

char aFork_0[] = "fork";
char byte_32EC[] = "Child terminated by signal %d\n";
char byte_32C4[] = "Child exited with status %d\n";

/* String constants */
char asc_3008[] = "========== STACK MEMORY TEST ==========";
char asc_3158[] = "========== HEAP MEMORY TEST ==========";
char asc_3348[] = "========== STATIC/ GLOBAL TEST ==========";
char asc_35C4[] = "========== MEMORY OPERATION TEST ==========";
char aD[] = "%d\n";

/* Global variables */
int global_counter = 0;
int global_array[10] = {0};
int global_point = 0;
int global_func_ptr = 0;
int extern_global_var = 0;
int file_scope_static = 0;
int global_heap_ptr = 0;
int complex_init = 0;
int dword_604C = 0;
int dword_605C = 0;
int dword_6064 = 0;
int bss_var = 0;
int bss_buffer = 0;
int static_depends_0 = 0;
int counter_1 = 0;
unsigned short word_32 = 0;
int const_string[] = {72, 101, 108, 108, 111, 0};  /* "Hello" */

typedef unsigned long size_t;

/* External function declarations */
void _gmon_start__(void);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
int printf(const char *format, ...);
int puts(const char *s);
void exit(int status);
int fork(void);
int waitpid(int pid, int *status, int options);
void perror(const char *s);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
char *strcpy(char *dest, const char *src);
int alloca(size_t size);

/* Intrinsic functions for GS register access */
static inline unsigned int __readgsdword(unsigned int offset)
{
 unsigned int value;
 __asm__ __volatile__("movl %%gs:(%1), %0" : "=r"(value) : "r"(offset));
 return value;
}

static inline void __writegsdword(unsigned int offset, unsigned int value)
{
 __asm__ __volatile__("movl %0, %%gs:(%1)" : : "r"(value), "r"(offset));
}

static inline int _InterlockedOr(volatile int *ptr, int val)
{
 int result;
 __asm__ __volatile__("lock; xorl %0, (%1)" : "=r"(result) : "r"(ptr));
 return result;
}

/* BYTE1 macro to extract second byte */
#define BYTE1(x) (((unsigned char *)&(x))[1])

/* Common ELF types and definitions */
typedef unsigned long Elf32_Addr;
typedef unsigned short Elf32_Half;
typedef unsigned long Elf32_Off;
typedef long Elf32_Sword;
typedef unsigned long Elf32_Word;
struct Elf32_Dyn {
    Elf32_Sword d_tag;
    union {
        Elf32_Word d_val;
        Elf32_Addr d_ptr;
    } d_un;
};
typedef struct Elf32_Dyn Elf32_Dyn;
typedef Elf32_Dyn Elf32_Dyn_;
typedef int __pid_t;
void *GLOBAL_OFFSET_TABLE_ __attribute__((weak));
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

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/3/3_gcc_O0_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ __volatile__("jmp *8(%%ebx)" :::);
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
static void _x86_get_pc_thunk_bx()
{
 __asm__ __volatile__("movl (%esp), %ebx\n\taddl $_GLOBAL_OFFSET_TABLE_, %ebx");
}


/* Function: __x86.get_pc_thunk.dx @ 0x13B9 */
void _x86_get_pc_thunk_dx()
{
 __asm__ __volatile__("movl (%esp), %edx\n\taddl $_GLOBAL_OFFSET_TABLE_, %edx");
}


/* Function: __x86.get_pc_thunk.di @ 0x13BD */
void _x86_get_pc_thunk_di()
{
 __asm__ __volatile__("movl (%esp), %edi\n\taddl $_GLOBAL_OFFSET_TABLE_, %edi");
}


/* Function: double_value @ 0x13C1 */
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: local_vars @ 0x13D9 */
int local_vars(int a1)
{
 return 2 * a1 + 10;
}


/* Function: local_array @ 0x1409 */
long long local_array(int a1)
{
 long long result; // rax
 int i; // [esp+0h] [ebp-38h]
 unsigned int v3[10]; // [esp+4h] [ebp-34h]
 unsigned int v4; // [esp+2Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 for ( i = 0; i <= 9; ++i )
 v3[i] = a1 * i;
 result = ((long long)(v4 - __readgsdword(0x14u)) << 32) | v3[5];
 return result;
}


/* Function: local_struct @ 0x1461 */
int local_struct(int a1)
{
 return 3 * a1;
}


/* Function: address_of_local @ 0x148D */
int address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x14B5 */
int address_of_array(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: large_stack_frame @ 0x14E3 */
long long large_stack_frame()
{
 long long result; // rax
 int i; // [esp+8h] [ebp-810h]
 unsigned char v2[2048]; // [esp+Ch] [ebp-80Ch]
 unsigned int v3; // [esp+80Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i <= 2047; ++i )
 v2[i] = i;
 result = ((long long)(v3 - __readgsdword(0x14u)) << 32) | v2[1024];
 return result;
}


/* Function: vla_stack @ 0x1559 */
int vla_stack(int a1)
{
 unsigned int v2; // eax
 void *v3; // esp
 unsigned int v4[2]; // [esp+0h] [ebp-18h] BYREF
 unsigned int *v5; // [esp+8h] [ebp-10h]
 unsigned int v6; // [esp+Ch] [ebp-Ch]

 v6 = __readgsdword(0x14u);
 if ( a1 <= 0 || a1 > 1000 )
 return -1;
 v4[1] = a1 - 1;
 v2 = 16 * ((4 * a1 + 15) / 0x10u);
 v3 = alloca(v2 & 0xFFF);
 (void)v3;
 v5 = v4;
 for ( v4[0] = 0; v4[0] < a1; ++v4[0] )
 v5[v4[0]] = 2 * v4[0];
 return v5[a1 / 2];
}


/* Function: alloca_usage @ 0x1660 */
int alloca_usage(int a1)
{
 unsigned int v2; // eax
 void *v3; // esp
 unsigned int *v6; // [esp+8h] [ebp-10h]
 int i; // [esp+4h] [ebp-14h]
 unsigned int v7; // [esp+Ch] [ebp-Ch]

 v7 = __readgsdword(0x14u);
 if ( a1 <= 0 )
 return -1;
 v2 = 16 * ((4 * a1 + 27) / 0x10u);
 v3 = alloca(v2 & 0xFFF);
 (void)v3;
 v6 = (unsigned int *)v3;
 for ( i = 0; i < a1; ++i )
 v6[i] = 3 * i;
 return v6[a1 / 2];
}


/* Function: stack_alias @ 0x175F */
int stack_alias()
{
 unsigned int v1[4]; // [esp+18h] [ebp-10h] BYREF

 v1[1] = __readgsdword(0x14u);
 v1[0] = 10;
 if ( v1[0] == 0 )
 return -1;
 v1[0] = 20;
 return 20;
}


/* Function: test_stack_memory @ 0x17D3 */
unsigned int test_stack_memory()
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
 unsigned int v10[2]; // [esp+Ch] [ebp-3Ch] BYREF
 unsigned int v11[10]; // [esp+14h] [ebp-34h] BYREF
 unsigned int v12; // [esp+3Ch] [ebp-Ch]

 v12 = __readgsdword(0x14u);
 puts(asc_3008);
 v0 = local_vars(5);
 printf("MEM-L1-01 (local_vars): %d\n", v0);
 v1 = local_array(2);
 printf("MEM-L1-02 (local_array): %d\n", v1);
 v2 = local_struct(5);
 printf("MEM-L1-03 (local_struct): %d\n", v2);
 v3 = address_of_local(v10);
 printf("MEM-L1-04 (address_of_local): %d\n", v3);
 memset(v11, 0, sizeof(v11));
 v11[0] = 1;
 v11[1] = 2;
 v11[2] = 3;
 v4 = address_of_array(v11);
 printf("MEM-L1-05 (address_of_array): %d\n", v4);
 v5 = large_stack_frame();
 printf("MEM-L2-01 (large_stack_frame): %d\n", v5);
 v6 = vla_stack(10);
 printf("MEM-L2-02 (vla_stack): %d\n", v6);
 v7 = alloca_usage(10);
 printf("MEM-L2-03 (alloca_usage): %d\n", v7);
 v10[1] = 0;
 v8 = stack_alias();
 printf("MEM-L2-04 (stack_alias): %d\n", v8);
 return v12 - __readgsdword(0x14u);
}


/* Function: heap_basic @ 0x196F */
int heap_basic(int a1)
{
 int i; // [esp+4h] [ebp-14h]
 unsigned int *ptr; // [esp+8h] [ebp-10h]
 int v4; // [esp+Ch] [ebp-Ch]

 ptr = malloc(4 * a1);
 if ( !ptr )
 return -1;
 for ( i = 0; i < a1; ++i )
 ptr[i] = 2 * i;
 v4 = ptr[a1 / 2];
 free(ptr);
 return v4;
}


/* Function: heap_calloc @ 0x1A05 */
int heap_calloc(signed int nmemb)
{
 int v2; // [esp+4h] [ebp-14h]
 signed int i; // [esp+8h] [ebp-10h]
 unsigned int *ptr; // [esp+Ch] [ebp-Ch]

 ptr = calloc(nmemb, 4u);
 if ( !ptr )
 return -1;
 v2 = 0;
 for ( i = 0; i < nmemb; ++i )
 v2 += ptr[i];
 free(ptr);
 return v2;
}


/* Function: heap_realloc @ 0x1A82 */
int heap_realloc()
{
 int v1; // eax
 int i; // [esp+8h] [ebp-20h]
 int j; // [esp+Ch] [ebp-1Ch]
 unsigned int *ptr; // [esp+10h] [ebp-18h]
 int v5; // [esp+14h] [ebp-14h]
 unsigned int *v6; // [esp+18h] [ebp-10h]
 int v7; // [esp+1Ch] [ebp-Ch]

 ptr = malloc(0x14u);
 if ( !ptr )
 return -1;
 for ( i = 0; i <= 4; ++i )
 ptr[i] = i + 1;
 v5 = ptr[2];
 v6 = realloc(ptr, 0x28u);
 if ( v6 )
 {
 for ( j = 5; j <= 9; ++j )
 v6[j] = 10 * j;
 if ( v5 == v6[2] )
 v1 = v6[5];
 else
 v1 = -3;
 v7 = v1;
 free(v6);
 return v7;
 }
 else
 {
 free(ptr);
 return -2;
 }
}


/* Function: heap_array @ 0x1B83 */
int heap_array(int a1)
{
 int i; // [esp+4h] [ebp-14h]
 unsigned int *ptr; // [esp+8h] [ebp-10h]
 int v4; // [esp+Ch] [ebp-Ch]

 ptr = malloc(4 * a1);
 if ( !ptr )
 return -1;
 for ( i = 0; i < a1; ++i )
 ptr[i] = 3 * i;
 v4 = ptr[a1 / 2];
 free(ptr);
 return v4;
}


/* Function: heap_struct @ 0x1C1E */
int heap_struct(int a1)
{
 unsigned int *ptr; // [esp+8h] [ebp-10h]
 int v3; // [esp+Ch] [ebp-Ch]

 ptr = malloc(8u);
 if ( !ptr )
 return -1;
 *ptr = a1;
 ptr[1] = 2 * a1;
 v3 = *ptr + ptr[1];
 free(ptr);
 return v3;
}


/* Function: heap_nested @ 0x1C8B */
int heap_nested(void **a1)
{
 unsigned int *v2; // esi

 *a1 = malloc(8u);
 if ( !*a1 )
 return -1;
 *(unsigned int *)*a1 = 10;
 v2 = *a1;
 v2[1] = malloc(8u);
 if ( *((unsigned int *)*a1 + 1) )
 {
 **((unsigned int **)*a1 + 1) = 20;
 *(unsigned int *)(*((unsigned int *)*a1 + 1) + 4) = 0;
 return 0;
 }
 else
 {
 free(*a1);
 return -2;
 }
}


/* Function: linked_list_heap @ 0x1D30 */
int linked_list_heap()
{
 unsigned int *v1; // [esp+0h] [ebp-28h]
 unsigned int *v2; // [esp+4h] [ebp-24h]
 int i; // [esp+8h] [ebp-20h]
 int v4; // [esp+Ch] [ebp-1Ch]
 unsigned int *j; // [esp+10h] [ebp-18h]
 void *v6; // [esp+14h] [ebp-14h]
 unsigned int *v7; // [esp+18h] [ebp-10h]
 void *ptr; // [esp+1Ch] [ebp-Ch]

 v1 = 0;
 v2 = 0;
 for ( i = 0; ; ++i )
 {
 if ( i > 4 )
 {
 v4 = 0;
 for ( j = v1; j; j = (unsigned int *)j[1] )
 v4 += *j;
 while ( v1 )
 {
 v6 = v1;
 v1 = (unsigned int *)v1[1];
 free(v6);
 }
 return v4;
 }
 v7 = malloc(8u);
 if ( !v7 )
 break;
 *v7 = 10 * i;
 v7[1] = 0;
 if ( v1 )
 v2[1] = v7;
 else
 v1 = v7;
 v2 = v7;
 }
 while ( v1 )
 {
 ptr = v1;
 v1 = (unsigned int *)v1[1];
 free(ptr);
 }
 return -1;
}


/* Function: create_tree_node @ 0x1E46 */
unsigned int * create_tree_node(int a1)
{
 unsigned int *v2; // [esp+Ch] [ebp-Ch]

 v2 = malloc(0xCu);
 if ( v2 )
 {
 *v2 = a1;
 v2[1] = 0;
 v2[2] = 0;
 }
 return v2;
}


/* Function: tree_heap_traversal @ 0x1E97 */
int tree_heap_traversal()
{
 void **ptr; // [esp+8h] [ebp-10h]
 int v2; // [esp+Ch] [ebp-Ch]

 ptr = (void **)create_tree_node(10);
 if ( !ptr )
 return -1;
 ptr[1] = create_tree_node(20);
 ptr[2] = create_tree_node(30);
 if ( ptr[1] && ptr[2] )
 {
 v2 = (int)*ptr + *(unsigned int *)ptr[1] + *(unsigned int *)ptr[2];
 free(ptr[1]);
 free(ptr[2]);
 free(ptr);
 return v2;
 }
 else
 {
 if ( ptr[1] )
 free(ptr[1]);
 if ( ptr[2] )
 free(ptr[2]);
 free(ptr);
 return -2;
 }
}


/* Function: memory_leak @ 0x1FAA */
int memory_leak(int a1)
{
 int i; // [esp+8h] [ebp-10h]
 unsigned int *v3; // [esp+Ch] [ebp-Ch]

 v3 = malloc(4 * a1);
 if ( !v3 )
 return -1;
 for ( i = 0; i < a1; ++i )
 v3[i] = i;
 return v3[a1 / 2];
}


/* Function: dangling_pointer @ 0x202B */
int dangling_pointer()
{
 unsigned int *ptr; // [esp+4h] [ebp-14h]

 ptr = malloc(4u);
 if ( !ptr )
 return -1;
 *ptr = 42;
 printf("value before free: %d\n", *ptr);
 free(ptr);
 return *ptr;
}


/* Function: double_free @ 0x20A2 */
int double_free(int a1)
{
 unsigned int *ptr; // [esp+Ch] [ebp-Ch]

 if ( a1 )
 return *(unsigned int *)a1;
 ptr = malloc(4u);
 if ( !ptr )
 return -1;
 *ptr = 10;
 free(ptr);
 free(ptr);
 return -2;
}


/* Function: heap_overflow @ 0x2111 */
int heap_overflow()
{
 int i; // [esp+4h] [ebp-14h]
 int *ptr; // [esp+8h] [ebp-10h]
 int v3; // [esp+Ch] [ebp-Ch]

 ptr = (int *)malloc(0x28u);
 if ( !ptr )
 return -1;
 for ( i = 0; i <= 10; ++i )
 ptr[i] = 100 * i;
 v3 = *ptr;
 free(ptr);
 return v3;
}


/* Function: test_heap_memory @ 0x218C */
unsigned int test_heap_memory()
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
 void *ptr; // [esp+Ch] [ebp-1Ch] BYREF
 int stat_loc; // [esp+10h] [ebp-18h] BYREF
 __pid_t pid; // [esp+14h] [ebp-14h]
 int v13; // [esp+18h] [ebp-10h]
 unsigned int v14; // [esp+1Ch] [ebp-Ch]

 v14 = __readgsdword(0x14u);
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
 ptr = 0;
 v5 = heap_nested(&ptr);
 printf("HEAP-L2-06 (heap_nested): %d\n", v5);
 if ( ptr )
 {
 free(*((void **)ptr + 1));
 free(ptr);
 }
 v6 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", v6);
 v7 = tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", v7);
 v8 = memory_leak(5);
 printf("HEAP-L3-03 (memory_leak): %d\n", v8);
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if ( !pid )
 {
 v13 = dangling_pointer();
 printf(aD, v13);
 exit(0);
 }
 if ( pid <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(pid, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( (char)((stat_loc & 0x7F) + 1) >> 1 > 0 )
 printf(byte_32EC, stat_loc & 0x7F);
 }
 else
 {
 printf(byte_32C4, BYTE1(stat_loc));
 }
 }
 return v14 - __readgsdword(0x14u);
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
int global_array_access(unsigned int a1)
{
 if ( a1 < 0xA )
 return global_array[a1];
 else
 return -1;
}


/* Function: static_local @ 0x2447 */
int static_local(int a1)
{
 if ( a1 )
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
int static_helper(int a1)
{
 return 2 * a1;
}


/* Function: call_static_func @ 0x249E */
int call_static_func(int a1)
{
 return static_helper(a1) + 1;
}


/* Function: access_extern_global @ 0x24BF */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Forward declaration for extern_function */
int extern_function(int a1);

/* Function: call_extern_func @ 0x24DD */
int call_extern_func()
{
 return extern_function(5);
}


/* External function implementation - defined elsewhere */


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
 return bss_buffer;
}


/* Function: global_struct_access @ 0x2565 */
int global_struct_access()
{
 return global_point + dword_604C;
}


/* Function: set_file_static @ 0x2586 */
void * set_file_static(int *a1)
{
 void *result; // eax

 result = GLOBAL_OFFSET_TABLE_;
 file_scope_static = a1;
 return result;
}


/* Function: get_file_static @ 0x25A3 */
int *get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x25BC */
Elf32_Dyn ** set_global_callback(int a1)
{
 Elf32_Dyn **result; // eax

 result = &GLOBAL_OFFSET_TABLE_;
 global_func_ptr = a1;
 return result;
}


/* Function: call_global_callback @ 0x25D9 */
int call_global_callback(int a1)
{
 if ( global_func_ptr )
 return ((int ( *)(int))global_func_ptr)(a1);
 else
 return -1;
}


/* Function: global_heap_store @ 0x2611 */
int global_heap_store(int a1)
{
 global_heap_ptr = a1;
 if ( a1 )
 return *(unsigned int *)global_heap_ptr;
 else
 return -1;
}


/* Function: static_complex_init @ 0x2646 */
int static_complex_init()
{
 return complex_init + dword_605C + dword_6064;
}


/* Function: tls_access @ 0x266F */
unsigned int tls_access(unsigned int a1)
{
 __writegsdword(0xFFFFFFFC, a1);
 return 2 * __readgsdword(0xFFFFFFFC);
}


/* Function: init_depends_on @ 0x2693 */
int init_depends_on(int *a1)
{
 if ( a1 )
 static_depends_0 = *a1;
 return static_depends_0;
}


/* Function: init_order_test @ 0x26BD */
int init_order_test()
{
 int v1[4]; // [esp+8h] [ebp-10h] BYREF

 v1[1] = __readgsdword(0x14u);
 v1[0] = 20;
 return init_depends_on(v1);
}


/* Function: test_static_global @ 0x2702 */
unsigned int test_static_global()
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
 int *file_static; // eax
 int v13; // eax
 int v14; // eax
 int v15; // eax
 unsigned int v16; // eax
 int inited; // eax
 int v19; // [esp+8h] [ebp-10h] BYREF
 unsigned int v20; // [esp+Ch] [ebp-Ch]

 v20 = __readgsdword(0x14u);
 puts(asc_3348);
 v0 = global_var_access();
 printf("STM-L1-01 (global_var_access): %d\n", v0);
 v1 = global_var_read();
 printf("STM-L1-01 (global_var_read): %d\n", v1);
 v2 = global_array_access(5u);
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
 set_file_static((int *)&word_32);
 file_static = get_file_static();
 printf("STM-L2-06 (file_static): %d\n", file_static);
 set_global_callback((int)double_value);
 v13 = call_global_callback(5);
 printf("STM-L2-07 (global_func_ptr): %d\n", v13);
 v19 = 100;
 v14 = global_heap_store((int)&v19);
 printf("STM-L2-08 (global_heap_store): %d\n", v14);
 v15 = static_complex_init();
 printf("STM-L2-09 (static_complex_init): %d\n", v15);
 v16 = tls_access(0xAu);
 printf("STM-L3-01 (tls_access): %d\n", v16);
 inited = init_order_test();
 printf("STM-L3-02 (init_order_test): %d\n", inited);
 return v20 - __readgsdword(0x14u);
}


/* Function: memop_memset @ 0x2969 */
int memop_memset(unsigned char *s, size_t n, int c)
{
 if ( !s || !n )
 return -1;
 memset(s, c, n);
 return *s;
}


/* Function: memop_memcpy @ 0x29B5 */
int memop_memcpy(char *dest, void *src, size_t n)
{
 unsigned int *result_ptr;
 if ( !dest || !src || !n )
 return -1;
 memcpy(dest, src, n);
 result_ptr = (unsigned int *)(dest + ((n & 0xFFFFFFFC) - 4));
 return *result_ptr;
}


/* Function: memop_memmove @ 0x2A0E */
int memop_memmove(char *src, unsigned int a2)
{
 if ( !src || a2 <= 1 )
 return -1;
 memmove(src + 1, src, a2 - 1);
 return src[1];
}


/* Function: memop_memcmp @ 0x2A65 */
int memop_memcmp(void *s1, void *s2, size_t n)
{
 int v4; // [esp+Ch] [ebp-Ch]

 if ( !s1 || !s2 || !n )
 return 0;
 v4 = memcmp(s1, s2, n);
 if ( v4 > 0 )
 return 1;
 if ( v4 >= 0 )
 return 0;
 return -1;
}


/* Function: memop_bzero @ 0x2AD0 */
int memop_bzero(unsigned char *s, size_t n)
{
 if ( !s )
 return -1;
 memset(s, 0, n);
 return *s;
}


/* Function: memop_bcopy @ 0x2B19 */
int memop_bcopy(void *src, unsigned char *dest, size_t n)
{
 if ( !src || !dest || !n )
 return -1;
 memmove(dest, src, n);
 return *dest;
}


/* Function: memop_unaligned_access @ 0x2B6B */
int memop_unaligned_access(int a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x2BBE */
int memop_memory_barrier(int *a1)
{
 signed int v2[3]; // [esp+0h] [ebp-10h] BYREF
 int v3; // [esp+Ch] [ebp-4h]

 if ( !a1 )
 return -1;
 v3 = *a1;
 _InterlockedOr(v2, 0);
 return *a1 + v3;
}


/* Function: test_memory_op_functions @ 0x2BF8 */
unsigned int test_memory_op_functions()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v9; // [esp+0h] [ebp-178h] BYREF
 unsigned int s1[3]; // [esp+4h] [ebp-174h] BYREF
 unsigned int s2[3]; // [esp+10h] [ebp-168h] BYREF
 unsigned int src[5]; // [esp+1Ch] [ebp-15Ch] BYREF
 unsigned int dest[5]; // [esp+30h] [ebp-148h] BYREF
 int v14; // [esp+47h] [ebp-131h] BYREF
 int v15; // [esp+4Bh] [ebp-12Dh] BYREF
 unsigned int v16[2]; // [esp+4Fh] [ebp-129h] BYREF
 unsigned char v17[10]; // [esp+57h] [ebp-121h] BYREF
 char v18[267]; // [esp+61h] [ebp-117h] BYREF
 unsigned int v19; // [esp+16Ch] [ebp-Ch]

 v19 = __readgsdword(0x14u);
 puts(asc_35C4);
 src[0] = 10;
 src[1] = 20;
 src[2] = 30;
 src[3] = 40;
 src[4] = 50;
 memset(dest, 0, sizeof(dest));
 v0 = memop_memset((unsigned char *)&v18[11], 0xAu, 65);
 printf("MEMOP-L2-01: %d\n", v0);
 v1 = memop_memcpy((char *)dest, src, 0x14u);
 printf("MEMOP-L2-02: %d\n", v1);
 strcpy(v18, "HelloWorld");
 v2 = memop_memmove(v18, 0xAu);
 printf("MEMOP-L2-03: %c\n", v2);
 s1[0] = 1;
 s1[1] = 2;
 s1[2] = 3;
 s2[0] = 1;
 s2[1] = 2;
 s2[2] = 4;
 v3 = memop_memcmp(s1, s2, 0xCu);
 printf("MEMOP-L2-04: %d\n", v3);
 v4 = memop_bzero(v17, 0xAu);
 printf("MEMOP-L2-05: %d\n", v4);
 v14 = 67305985;
 v15 = 0;
 v5 = memop_bcopy(&v14, (unsigned char *)&v15, 4u);
 printf("MEMOP-L2-06: %d\n", v5);
 v16[0] = 50462976;
 v16[1] = 117835012;
 v6 = memop_unaligned_access((int)v16);
 printf("MEMOP-L3-01: 0x%x\n", v6);
 v9 = 5;
 v7 = memop_memory_barrier(&v9);
 printf("MEMOP-L3-02: %d\n", v7);
 return v19 - __readgsdword(0x14u);
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
void __x86_get_pc_thunk_ax(void)
{
 __asm__ __volatile__("mov (%esp), %eax");
}


/* Function: __stack_chk_fail_local @ 0x2EE0 */
static void _stack_chk_fail_local()
{
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x2F4C */
void term_proc()
{
 /* CRT stub function - empty implementation */
}


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
