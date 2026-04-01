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

/* Additional types needed for decompiled code */
typedef void *Elf32_Dyn;
typedef void *_UNKNOWN;

/* Macro definitions for accessing parts of 64-bit values */
#define LODWORD(x) (*(unsigned int*)&(x))
#define HIDWORD(x) (*((unsigned int*)&(x) + 1))
#define BYTE1(x) ((unsigned char)((unsigned int)(x) >> 8))

/* Compiler intrinsics */
#ifdef __GNUC__
static inline unsigned int __readgsdword(unsigned int offset)
{
    unsigned int value;
    __asm__ __volatile__("movl %%gs:%1, %0" : "=r"(value) : "m"(*(unsigned char *)offset));
    return value;
}
#else
unsigned int __readgsdword(unsigned int);
#endif

/* Atomic intrinsics */
#ifdef __GNUC__
#define _InterlockedOr(a, b) __sync_or_and_fetch((int*)(a), (b))
#else
int _InterlockedOr(volatile int *a, int b);
#endif

/* Global variables */
int global_counter = 0;
static int counter_1 = 0;
int extern_global_var = 0;
char const_string[] = "HelloWorld";
int global_func_ptr = 0;
Elf32_Dyn **GLOBAL_OFFSET_TABLE_ = 0;
static int file_scope_static = 0;

/* String constants referenced in code */
char asc_3008[] = "Testing stack memory functions...\n";
char asc_30EA[] = "Testing heap memory functions...\n";
char asc_3428[] = "Testing static and global memory functions...\n";
char asc_3650[] = "Testing memory operation functions...\n";
char unk_319C[] = "value after free: %d\n";
char unk_33BC[] = "child exited with value: %d\n";
char unk_33E4[] = "child terminated by signal: %d\n";
char aFork_0[] = "fork";
unsigned int global_array[10] = {0};

/* External function declarations */
void _gmon_start__(void);

/* Standard library function declarations */
void *malloc(size_t size);
void free(void *ptr);
void *realloc(void *ptr, size_t size);
void *calloc(size_t nmemb, size_t size);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
int printf(const char *format, ...);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
int strcpy(char *dest, const char *src);
void exit(int status);
int fork(void);
int waitpid(int pid, int *status, int options);
int perror(const char *s);
void __stack_chk_fail(void);

/* Binary: build/x86/3/3_gcc_O2_no_g
 * Processor: pc
 */




/* Common stub - used by PLT/jump tables */
static void sub_1030(void)
{
 /* Assembly stub - jmp through register */
}

/* Function declarations for PLT stubs */
void sub_1040(void);
void sub_1050(void);
void sub_1060(void);
void sub_1070(void);
void sub_1080(void);
void sub_1090(void);
void sub_10A0(void);
void sub_10B0(void);
void sub_10C0(void);
void sub_10D0(void);
void sub_10E0(void);
void sub_10F0(void);
void sub_1100(void);
void sub_1110(void);
void sub_1120(void);
void sub_1130(void);

/* Function: sub_1040 @ 0x1040 */
void sub_1040(void)
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050(void)
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060(void)
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070(void)
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080(void)
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090(void)
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0(void)
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0(void)
{
 sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0(void)
{
 sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0(void)
{
 sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0(void)
{
 sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0(void)
{
 sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100(void)
{
 sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110(void)
{
 sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120(void)
{
 sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130(void)
{
 sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
int sub_1140(int a1)
{
 return (*(int (**)(void))(a1 + 80))();
}


/* Function: main @ 0x1250 */
int main(int argc, const char **argv, const char **envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_12AC @ 0x12AC */
void sub_12AC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x12B0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x13E9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x13ED */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: double_value @ 0x1400 */
int double_value(int a1)
{
 return 2 * a1;
}


/* Function: local_vars @ 0x1410 */
int local_vars(int a1)
{
 return 2 * a1 + 10;
}


/* Function: local_array @ 0x1420 */
long long local_array(int a1)
{
 unsigned int v1; // edx
 unsigned int *v2; // eax
 long long result; // rax
 char v4; // [esp+4h] [ebp-38h] BYREF
 int v5; // [esp+18h] [ebp-24h]
 unsigned int v6; // [esp+2Ch] [ebp-10h] BYREF

 v1 = 0;
 v6 = __readgsdword(0x14u);
 v2 = (unsigned int *)(&v4 + 1);
 do
 {
 v2--;
 *v2 = v1;
 v1 += a1;
 }
 while ( v2 != (unsigned int *)&v4 );
 LODWORD(result) = v5;
 HIDWORD(result) = v6 - __readgsdword(0x14u);
 return result;
}


/* Function: local_struct @ 0x1470 */
int local_struct(int a1)
{
 return 3 * a1;
}


/* Function: address_of_local @ 0x1480 */
int address_of_local(unsigned int *a1)
{
 *a1 = 42;
 return 42;
}


/* Function: address_of_array @ 0x14A0 */
int address_of_array(unsigned int *a1)
{
 return 2 * *a1;
}


/* Function: large_stack_frame @ 0x14B0 */
long long large_stack_frame()
{
 int i; // eax
 long long result; // rax
 unsigned char v2[2048]; // [esp+Ch] [ebp-810h]
 unsigned int v3; // [esp+80Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i != 2048; ++i )
 v2[i] = i;
 LODWORD(result) = v2[1024];
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: vla_stack @ 0x1510 */
int vla_stack(int a1)
{
 int v1; // edx
 unsigned short *v2; // ecx
 short v3; // dx
 int v4; // edx
 void *v5; // esp
 int v6; // eax
 unsigned short v8[2048]; // [esp-1000h] [ebp-1018h] BYREF
 unsigned int v9[5]; // [esp+0h] [ebp-18h] BYREF

 v9[3] = __readgsdword(0x14u);
 if ( (unsigned int)(a1 - 1) > 0x3E7 )
 return -1;
 v1 = 4 * a1 + 15;
 v2 = (unsigned short *)((char *)v9 - (v1 & 0xFFFFF000));
 v3 = v1 & 0xFFF0;
 if ( v9 != (unsigned int *)v2 )
 {
 while ( v8 != v2 )
 ;
 }
 v4 = v3 & 0xFFF;
 v5 = alloca(v4);
 if ( v4 )
 *(unsigned int *)((char *)&v8[-2] + v4) = *(unsigned int *)((char *)&v8[-2] + v4);
 v6 = 0;
 do
 {
 *(unsigned int *)&v8[v6] = v6;
 v6 += 2;
 }
 while ( v6 != 2 * a1 );
 return *(unsigned int *)&v8[2 * (a1 >> 1)];
}


/* Function: alloca_usage @ 0x15C0 */
int alloca_usage(int a1)
{
 int v1; // edx
 unsigned int *v2; // ebx
 short v3; // dx
 int v4; // edx
 void *v5; // esp
 int i; // eax
 unsigned int v8[1024]; // [esp-1000h] [ebp-1018h] BYREF
 unsigned int v9[5]; // [esp+0h] [ebp-18h] BYREF

 v9[3] = __readgsdword(0x14u);
 if ( a1 <= 0 )
 return -1;
 v1 = 4 * a1 + 27;
 v2 = (unsigned int *)((char *)v9 - (v1 & 0xFFFFF000));
 v3 = v1 & 0xFFF0;
 if ( v9 != v2 )
 {
 while ( v8 != v2 )
 ;
 }
 v4 = v3 & 0xFFF;
 v5 = alloca(v4);
 if ( v4 )
 *(unsigned int *)((char *)&v8[-1] + v4) = *(unsigned int *)((char *)&v8[-1] + v4);
 for ( i = 0; i != a1; ++i )
 v8[i] = 3 * i;
 return v8[a1 >> 1];
}


/* Function: stack_alias @ 0x1660 */
int stack_alias()
{
 return 20;
}


/* Function: test_stack_memory @ 0x1670 */
int test_stack_memory()
{
 int v0; // eax
 int v1; // eax

 puts(asc_3008);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 v0 = large_stack_frame();
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v0);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 v1 = alloca_usage(10);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v1);
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1750 */
int heap_basic(int a1)
{
 unsigned int *v1; // eax
 unsigned int *v2; // edx
 int i; // eax
 int v4; // esi

 v1 = malloc(4 * a1);
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( a1 > 0 )
 {
 for ( i = 0; i != a1; ++i )
 v2[i] = i * 2;
 }
 v4 = v2[a1 / 2];
 free(v2);
 return v4;
}


/* Function: heap_calloc @ 0x17C0 */
int heap_calloc(int nmemb)
{
 unsigned int *v1; // eax
 unsigned int *v2; // edx
 int v3; // esi

 v1 = calloc(nmemb, 4u);
 if ( !v1 )
 return -1;
 if ( nmemb <= 0 )
 {
 v3 = 0;
 }
 else
 {
 v2 = v1;
 v3 = 0;
 do
 v3 += *v2++;
 while ( v2 != &v1[nmemb] );
 }
 free(v1);
 return v3;
}


/* Function: heap_realloc @ 0x1830 */
int heap_realloc()
{
 unsigned int *v0; // eax
 unsigned int *v1; // esi
 unsigned int *v2; // eax
 int v3; // esi
 void *v5; // [esp-14h] [ebp-1Ch]

 v0 = malloc(0x14u);
 if ( !v0 )
 return -1;
 *v0 = 1;
 v1 = v0;
 v0[1] = 2;
 v0[2] = 3;
 v0[3] = 4;
 v0[4] = 5;
 v2 = realloc(v0, 0x28u);
 if ( v2 )
 {
 v3 = 50;
 if ( v2[2] != 3 )
 v3 = -3;
 free(v2);
 }
 else
 {
 v5 = v1;
 v3 = -2;
 free(v5);
 }
 return v3;
}


/* Function: heap_array @ 0x18D0 */
int heap_array(int a1)
{
 unsigned int *v1; // eax
 unsigned int *v2; // ecx
 int i; // eax
 int v4; // esi

 v1 = malloc(4 * a1);
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( a1 > 0 )
 {
 for ( i = 0; i != a1; ++i )
 v2[i] = 3 * i;
 }
 v4 = v2[a1 / 2];
 free(v2);
 return v4;
}


/* Function: heap_struct @ 0x1940 */
int heap_struct(int a1)
{
 void *v1; // eax
 int v2; // esi

 v1 = malloc(8u);
 if ( !v1 )
 return -1;
 v2 = 3 * a1;
 free(v1);
 return v2;
}


/* Function: heap_nested @ 0x1990 */
int heap_nested(unsigned int *a1)
{
 unsigned int *v1; // esi
 unsigned int *v2; // eax

 v1 = malloc(8u);
 *a1 = v1;
 if ( !v1 )
 return -1;
 *v1 = 10;
 v2 = malloc(8u);
 v1[1] = v2;
 if ( v2 )
 {
 *v2 = 20;
 v2[1] = 0;
 return 0;
 }
 else
 {
 free(v1);
 return -2;
 }
}


/* Function: linked_list_heap @ 0x1A10 */
int linked_list_heap()
{
 unsigned int *v0; // eax
 int v1; // ebp
 unsigned int *v2; // esi
 unsigned int *v3; // edi
 unsigned int *v4; // eax
 int v5; // edi
 void *v6; // eax
 void *v8; // eax

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while ( 1 )
 {
 v3 = v0;
 v0 = malloc(8u);
 if ( !v0 )
 break;
 *v0 = v1;
 v0[1] = 0;
 if ( v2 )
 v3[1] = v0;
 else
 v2 = v0;
 v1 += 10;
 if ( v1 == 50 )
 {
 v4 = v2;
 v5 = 0;
 do
 {
 v5 += *v4;
 v4 = (unsigned int *)v4[1];
 }
 while ( v4 );
 do
 {
 v6 = v2;
 v2 = (unsigned int *)v2[1];
 free(v6);
 }
 while ( v2 );
 return v5;
 }
 }
 while ( v2 )
 {
 v8 = v2;
 v2 = (unsigned int *)v2[1];
 free(v8);
 }
 return -1;
}


/* Function: create_tree_node @ 0x1AC0 */
unsigned int * create_tree_node(int a1)
{
 unsigned int *result; // eax

 result = malloc(0xCu);
 if ( result )
 {
 result[1] = 0;
 result[2] = 0;
 *result = a1;
 }
 return result;
}


/* Function: tree_heap_traversal @ 0x1B00 */
int tree_heap_traversal()
{
 void *v0; // eax
 void *v1; // esi
 void *ptr; // edi
 void *v3; // ebp
 void *v5; // eax

 v0 = malloc(0xCu);
 if ( !v0 )
 return -1;
 v1 = v0;
 ptr = malloc(0xCu);
 if ( !ptr )
 {
 v5 = malloc(0xCu);
 if ( v5 )
 free(v5);
 goto LABEL_7;
 }
 v3 = malloc(0xCu);
 if ( !v3 )
 {
 free(ptr);
LABEL_7:
 free(v1);
 return -2;
 }
 free(ptr);
 free(v3);
 free(v1);
 return 60;
}


/* Function: memory_leak @ 0x1BD0 */
int memory_leak(int a1)
{
 unsigned int *v1; // eax
 int i; // edx

 v1 = malloc(4 * a1);
 if ( !v1 )
 return -1;
 if ( a1 > 0 )
 {
 for ( i = 0; i != a1; ++i )
 v1[i] = i;
 }
 return v1[a1 / 2];
}


/* Function: dangling_pointer @ 0x1C30 */
int dangling_pointer()
{
 void *v0; // eax
 void *ptr; // esi

 v0 = malloc(4u);
 if ( !v0 )
 return -1;
 ptr = v0;
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr);
 return *(unsigned int *)ptr;
}


/* Function: double_free @ 0x1C80 */
int double_free(int a1)
{
 void *ptr; // eax
 void *v3; // esi

 if ( a1 )
 return *(unsigned int *)a1;
 ptr = malloc(4u);
 v3 = ptr;
 if ( !ptr )
 return -1;
 free(ptr);
 free(v3);
 return -2;
}


/* Function: heap_overflow @ 0x1CE0 */
int heap_overflow()
{
 unsigned int *v0; // eax
 unsigned int *v1; // ecx
 int i; // edx
 int v3; // esi

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = v0;
 for ( i = 0; i != 1100; i += 100 )
 *v1++ = i;
 v3 = *v0;
 free(v0);
 return v3;
}


/* Function: test_heap_memory @ 0x1D40 */
int test_heap_memory(void)
{
 unsigned int *v0; // eax
 int i; // edx
 int v2; // esi
 unsigned int *v3; // eax
 unsigned int *v4; // edx
 int v5; // esi
 int v6; // eax
 unsigned int *v7; // eax
 int j; // edx
 int v9; // esi
 void *v10; // eax
 int v11; // eax
 void **v12; // esi
 unsigned int *v13; // eax
 int v14; // eax
 int v15; // eax
 int v16; // eax
 unsigned int *v17; // eax
 int v18; // eax
 int v19; // eax
 unsigned int *v21; // esi
 int v22; // eax
 int v23; // [esp+8h] [ebp-24h]
 int stat_loc; // [esp+18h] [ebp-14h] BYREF
 unsigned int v25; // [esp+1Ch] [ebp-10h]

 v25 = __readgsdword(0x14u);
 puts(asc_30EA);
 v0 = malloc(0x28u);
 if ( v0 )
 {
 for ( i = 0; i != 10; ++i )
 v0[i] = i * 2;
 v2 = v0[5];
 free(v0);
 }
 else
 {
 v2 = -1;
 }
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v2);
 v3 = calloc(5u, 4u);
 if ( v3 )
 {
 v4 = v3;
 v5 = 0;
 do
 v5 += *v4++;
 while ( v4 != v3 + 5 );
 free(v3);
 }
 else
 {
 v5 = -1;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v5);
 v6 = heap_realloc();
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v6);
 v7 = malloc(0x28u);
 if ( v7 )
 {
 for ( j = 0; j != 10; ++j )
 v7[j] = 3 * j;
 v9 = v7[5];
 free(v7);
 }
 else
 {
 v9 = -1;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v9);
 v10 = malloc(8u);
 if ( v10 )
 {
 free(v10);
 v11 = 15;
 }
 else
 {
 v11 = -1;
 }
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v11);
 v12 = (void **)malloc(8u);
 if ( v12 )
 {
 v13 = malloc(8u);
 v12[1] = v13;
 if ( v13 )
 {
 *v13 = 20;
 v13[1] = 0;
 v14 = 0;
 }
 else
 {
 free(v12);
 v14 = -2;
 }
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v14);
 free(v12[1]);
 free(v12);
 }
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
 }
 v15 = linked_list_heap();
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v15);
 v16 = tree_heap_traversal();
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v16);
 v17 = malloc(0x14u);
 if ( v17 )
 {
 *v17 = 0;
 v17[1] = 1;
 v17[2] = 2;
 v17[3] = 3;
 v17[4] = 4;
 v18 = 2;
 }
 else
 {
 v18 = -1;
 }
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v18);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): %d\n", v23);
 v19 = fork();
 if ( !v19 )
 {
 v21 = malloc(4u);
 if ( v21 )
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(v21);
 v22 = *v21;
 }
 else
 {
 v22 = -1;
 }
 __printf_chk(1, &unk_319C, v22);
 exit(0);
 }
 if ( v19 <= 0 )
 {
 perror(aFork_0);
 }
 else
 {
 waitpid(v19, &stat_loc, 0);
 if ( (stat_loc & 0x7F) != 0 )
 {
 if ( (char)((stat_loc & 0x7F) + 1) > 1 )
 __printf_chk(1, &unk_33E4, stat_loc & 0x7F);
 }
 else
 {
 __printf_chk(1, &unk_33BC, BYTE1(stat_loc));
 }
 }
 return v25 - __readgsdword(0x14u);
}


/* Function: global_var_access @ 0x20F0 */
int global_var_access()
{
 return ++global_counter;
}


/* Function: global_var_read @ 0x2110 */
int global_var_read()
{
 return 2 * global_counter;
}


/* Function: global_array_access @ 0x2130 */
int global_array_access(unsigned int a1)
{
 if ( a1 > 9 )
 return -1;
 else
 return global_array[a1];
}


/* Function: static_local @ 0x2160 */
int static_local(int a1)
{
 int result; // eax

 result = 0;
 if ( !a1 )
 result = counter_1 + 1;
 counter_1 = result;
 return result;
}


/* Function: call_static_func @ 0x2190 */
int call_static_func(int a1)
{
 return 2 * a1 + 1;
}


/* Function: access_extern_global @ 0x21A0 */
int access_extern_global()
{
 return extern_global_var + 100;
}


/* Function: extern_function @ 0x2910 */
/* Implementation provided by external binary - declared static */

static int extern_function(int a1)
{
 return 0;
}

/* Function: call_extern_func @ 0x21C0 */
int call_extern_func()
{
 return extern_function(5);
}


/* Function: read_const_data @ 0x21E0 */
int read_const_data()
{
 return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x2200 */
int access_bss_var()
{
 return 0;
}


/* Function: access_bss_buffer @ 0x2210 */
int access_bss_buffer()
{
 return 0;
}


/* Function: global_struct_access @ 0x2220 */
int global_struct_access()
{
 return 30;
}


/* Function: set_file_static @ 0x2230 */
Elf32_Dyn ** set_file_static(int a1)
{
 Elf32_Dyn **result; // eax

 result = &GLOBAL_OFFSET_TABLE_;
 file_scope_static = a1;
 return result;
}


/* Function: get_file_static @ 0x2250 */
int get_file_static()
{
 return file_scope_static;
}


/* Function: set_global_callback @ 0x2270 */
Elf32_Dyn ** set_global_callback(int a1)
{
 Elf32_Dyn **result; // eax

 result = &GLOBAL_OFFSET_TABLE_;
 global_func_ptr = a1;
 return result;
}


/* Function: call_global_callback @ 0x2290 */
int call_global_callback()
{
 if ( global_func_ptr )
 return ((int (*)(void))global_func_ptr)();
 else
 return -1;
}


/* Function: global_heap_store @ 0x22C0 */
int global_heap_store(int a1)
{
 if ( a1 )
 return *(unsigned int *)a1;
 else
 return -1;
}


/* Function: static_complex_init @ 0x22E0 */
int static_complex_init()
{
 return 15;
}


/* Function: tls_access @ 0x22F0 */
int tls_access(int a1)
{
 return 2 * a1;
}


/* Function: init_order_test @ 0x2300 */
int init_order_test()
{
 return 20;
}


/* Function: test_static_global @ 0x2310 */
int test_static_global()
{
 int v0; // eax

 puts(asc_3428);
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", ++global_counter);
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 v0 = extern_function(5);
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v0);
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_string[4] + 42);
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = (int)double_value;
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x24F0 */
int memop_memset(unsigned char *s, size_t n, int c)
{
 if ( !s || !n )
 return -1;
 memset(s, c, n);
 return *s;
}


/* Function: memop_memcpy @ 0x2540 */
int memop_memcpy(char *dest, const void *a2, size_t n)
{
 if ( n == 0 || a2 == 0 || !dest )
 return -1;
 memcpy(dest, a2, n);
 return *(unsigned int *)&dest[(n & 0xFFFFFFFC) - 4];
}


/* Function: memop_memmove @ 0x25A0 */
int memop_memmove(char *src, unsigned int a2)
{
 if ( !src || a2 <= 1 )
 return -1;
 memmove(src + 1, src, a2 - 1);
 return src[1];
}


/* Function: memop_memcmp @ 0x25F0 */
int memop_memcmp(void *s1, void *s2, size_t n)
{
 int v3; // edx
 int result; // eax

 if ( n == 0 || s2 == 0 || !s1 )
 return 0;
 v3 = memcmp(s1, s2, n);
 result = -(v3 != 0);
 if ( v3 > 0 )
 return 1;
 return result;
}


/* Function: memop_bzero @ 0x2660 */
int memop_bzero(unsigned char *s, size_t n)
{
 if ( !s )
 return -1;
 memset(s, 0, n);
 return *s;
}


/* Function: memop_bcopy @ 0x26A0 */
int memop_bcopy(void *src, unsigned char *dest, size_t n)
{
 if ( n == 0 || dest == 0 || !src )
 return -1;
 memmove(dest, src, n);
 return *dest;
}


/* Function: memop_unaligned_access @ 0x2700 */
int memop_unaligned_access(int a1)
{
 if ( a1 )
 return *(unsigned int *)(a1 + 1);
 else
 return -1;
}


/* Function: memop_memory_barrier @ 0x2720 */
int memop_memory_barrier(int *a1)
{
 int v1; // edx
 _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

 if ( !a1 )
 return -1;
 v1 = *a1;
 _InterlockedOr((volatile signed int *)&retaddr, 0);
 return v1 + *a1;
}


/* Function: test_memory_op_functions @ 0x2740 */
int test_memory_op_functions()
{
 int v0; // edx
 int v1; // eax
 signed int v3[6]; // [esp+0h] [ebp-15Ch] BYREF
 int v4; // [esp+18h] [ebp-144h]
 unsigned int s1[3]; // [esp+1Ch] [ebp-140h] BYREF
 unsigned char s2[23]; // [esp+28h] [ebp-134h] BYREF
 short v7; // [esp+3Fh] [ebp-11Dh]
 unsigned int dest[66]; // [esp+41h] [ebp-11Bh] BYREF
 unsigned int v9; // [esp+14Ch] [ebp-10h]

 v9 = __readgsdword(0x14u);
 puts(asc_3650);
 memset((char *)&dest[2] + 3, 65, 10);
 __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strcpy((char *)dest, "HelloWorld");
 memmove((char *)dest + 1, dest, 9u);
 __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 s1[0] = 1;
 s1[1] = 2;
 s1[2] = 3;
 *(unsigned int *)s2 = 1;
 *(unsigned int *)&s2[4] = 2;
 *(unsigned int *)&s2[8] = 4;
 v0 = memcmp(s1, s2, 0xCu);
 v1 = -(v0 != 0);
 if ( v0 > 0 )
 v1 = 1;
 __printf_chk(1, "MEMOP-L2-04: %d\n", v1);
 *(unsigned int *)&s2[15] = 0;
 v7 = 0;
 *(unsigned int *)&s2[19] = 0;
 __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v4 = 5;
 _InterlockedOr(v3, 0);
 __printf_chk(1, "MEMOP-L3-02: %d\n", v4 + 5);
 return v9 - __readgsdword(0x14u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x28FF */
void *_x86_get_pc_thunk_ax()
{
 _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Weak function declarations for optional library functions */
void __stack_chk_fail_local(void) __attribute__((weak));



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x298C */
void term_proc()
{
 /* _do_global_dtors_aux was removed by preprocessor */
}


/* FAILED to decompile: __libc_start_main @ 0x602C */

/* FAILED to decompile: memmove @ 0x6030 */

/* FAILED to decompile: free @ 0x6034 */

/* FAILED to decompile: memcpy @ 0x6038 */

/* FAILED to decompile: memcmp @ 0x603C */

/* FAILED to decompile: __stack_chk_fail @ 0x6040 */

/* FAILED to decompile: __cxa_finalize @ 0x6044 */

/* FAILED to decompile: perror @ 0x6048 */

/* FAILED to decompile: waitpid @ 0x604C */

/* FAILED to decompile: realloc @ 0x6050 */

/* FAILED to decompile: malloc @ 0x6054 */

/* FAILED to decompile: puts @ 0x6058 */

/* FAILED to decompile: exit @ 0x605C */

/* FAILED to decompile: memset @ 0x6060 */

/* FAILED to decompile: __printf_chk @ 0x6064 */

/* FAILED to decompile: fork @ 0x6068 */

/* FAILED to decompile: calloc @ 0x606C */

/* Total functions decompiled: 88, failed: 17 */
