// Angr Decompilation of 6_clang_O3_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/syscall.h>
#include <pthread.h>
#include <signal.h>
#include <errno.h>
#include <stdatomic.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <netinet/in.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_5;
} struct_0;

// Helper macros
#define UNUSED(x) (void)(x)

extern struct_0 *g_406fe0;

// Global variable declarations
extern unsigned int signal_number;
extern unsigned int signal_received;
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;
extern pthread_mutex_t cond_mutex;
extern pthread_cond_t cond;
extern char data;
extern char ready;
extern char i;
extern atomic_uint atomic_counter;

// Global variable definitions
unsigned int signal_number = 0;
unsigned int signal_received = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int shared_counter = 0;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
char data = 0;
char ready = 0;
char i = 0;
atomic_uint atomic_counter = ATOMIC_VAR_INIT(0);
extern char g_404127[];
extern char g_404142[];
extern char g_40415d[];
extern char g_404179[];
extern char g_404195[];
extern char g_4041b1[];
extern char g_4041cd[];
extern char g_4041ea[];
extern char g_404206[];
extern char g_404222[];
extern char g_40423e[];
extern char g_404259[];
extern char g_4042a8[];
extern char g_4042c4[];
extern char g_4042e0[];
extern char g_4042fc[];
extern char g_404318[];
extern char g_404334[];
extern char g_404350[];
extern char g_404376[];
extern char g_404392[];
extern char g_4043af[];
extern char g_4043cb[];
extern char g_4043e7[];
extern char g_404403[];
extern char g_40441f[];
extern char g_404443[];
extern char g_40445e[];

// CRT stub function declarations
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

// Additional function declarations
void *thread_compute(void *a0);
void *thread_sum(void *ptr);
void *thread_increment(void *ptr);
void *thread_atomic_increment(void *ptr);
void *thread_atomic_load_store(void *arg);
void *thread_tls_test(void *a0);
void *consumer_thread(void *arg);
void *producer_thread(void *arg);

// Missing function declarations
int __isoc99_sscanf(const char *str, const char *format, ...);

// Signal handler declaration
void signal_handler(int a0);

// Forward declarations for functions called before definition
int param_printf(unsigned int a0, unsigned long a1);
unsigned long long param_fread_fwrite(char *a0);
unsigned long long param_pipe_communication(void);
unsigned long long param_socket_create(void);
unsigned int param_shmget_shmat(void);
unsigned long long param_signal_handling(void);
unsigned int main(void);

// Helper function macros (replacing decompiler artifacts)
#define AddV(a, b) ((a) + (b))
#define InterleaveLOV(a, b) ((a) ^ (b))
#define CONCAT_VAL(a, b) ((a) | (b))

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_406fe0;
 return v1;
}


// Function: sub_402020 at 0x402020
extern unsigned long long g_407008;
extern unsigned long long g_407010;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_407008;
 (void)v0;
 (void)g_407010;
}


// Function: sub_40202c at 0x40202c
int sub_40202c()
{
 return raise(0);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4023e5 at 0x4023e5
void sub_4023e5()
{
 // Unsupported jumpkind Ijk_SigTRAP at address 4203493
}


// Function: sub_4023e6 at 0x4023e6
void sub_4023e6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_402419 at 0x402419
void sub_402419()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402459 at 0x402459
void sub_402459()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_402495 at 0x402495
void sub_402495()
{
}


// Function: sub_402499 at 0x402499
void sub_402499()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_4024a9 at 0x4024a9
void sub_4024a9(unsigned long a0)
{
 (void)a0;
 return;
}


// Function: param_strcpy at 0x4024b0
long long param_strcpy(char *a0, char *a1)
{
 strcpy(a0, a1);
 return strlen(a0);
}


// Function: sub_4024c2 at 0x4024c2
long long call_strcpy(char *a0, char *a1);
void sub_4024c2()
{
 call_strcpy(0, 0);
 return;
}


// Function: call_strcpy at 0x4024d0
long long call_strcpy(char *a0, char *a1)
{
 char v0[8]; // [bp-0x28]
 char result; // [bp-0x20]

 (void)a0; (void)a1;
 strncpy(v0, "HelloLib", 8);
 result = 0;
 return strlen(v0);
}


// Function: sub_4024f4 at 0x4024f4
unsigned long long param_strcmp(char *a0, char *a1);
void sub_4024f4()
{
 param_strcmp(0, 0);
 return;
}


// Function: param_strcmp at 0x402500
unsigned long long param_strcmp(char *a0, char *a1)
{
 unsigned long long v2; // rax
 unsigned int v3; // eax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 v3 = strcmp(a0, a1);
 if (v3 > 0)
 return 1;
 return -(v3);
}


// Function: sub_40251b at 0x40251b
unsigned long long call_strcmp(void);
void sub_40251b()
{
 call_strcmp();
 return;
}


// Function: call_strcmp at 0x402520
unsigned long long call_strcmp()
{
 return 0;
}


// Function: sub_402523 at 0x402523
long long param_strlen(char *a0);
void sub_402523()
{
 param_strlen(0);
 return;
}


// Function: param_strlen at 0x402530
long long param_strlen(char *a0)
{
 return strlen(a0);
}


// Function: sub_402535 at 0x402535
unsigned long long call_strlen(char *a0);
void sub_402535()
{
 call_strlen(0);
 return;
}


// Function: call_strlen at 0x402540
unsigned long long call_strlen(char *a0)
{
 (void)a0;
 return 12;
}


// Function: sub_402546 at 0x402546
int param_memcpy(void* a0, void* a1, unsigned long n);
void sub_402546(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_memcpy(0, 0, 0);
 return;
}


// Function: param_memcpy at 0x402550
int param_memcpy(void* a0, void* a1, unsigned long n)
{
 memcpy(a0, a1, n);
 return n;
}


// Function: sub_40255d at 0x40255d
unsigned long long call_memcpy();
void sub_40255d()
{
 call_memcpy();
 return;
}


// Function: call_memcpy at 0x402560
unsigned long long call_memcpy()
{
 return 90;
}


// Function: sub_402566 at 0x402566
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2);
void sub_402566()
{
 param_memcmp(0, 0, 0);
 return;
}


// Function: param_memcmp at 0x402570
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned long long v2; // rax
 unsigned int v3; // eax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 v3 = memcmp(a0, a1, a2);
 if (v3 > 0)
 return 1;
 return -(v3);
}


// Function: sub_40258b at 0x40258b
unsigned long long call_memcmp();
void sub_40258b()
{
 call_memcmp();
 return;
}


// Function: call_memcmp at 0x402590
unsigned long long call_memcmp()
{
 return 4294967295;
}


// Function: sub_402596 at 0x402596
void sub_402596(unsigned long a0, unsigned long a1)
{
 param_printf(a0, a1);
 return;
}


// Function: param_printf at 0x4025a0
int param_printf(unsigned int a0, unsigned long a1)
{
 return printf("Value: %d, Name: %s\n", a0, a1);
}


// Function: sub_4025b3 at 0x4025b3
int call_printf(void);
void sub_4025b3()
{
 (void)call_printf();
 return;
}


// Function: call_printf at 0x4025c0
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


// Function: sub_4025da at 0x4025da
unsigned long long param_scanf(char *a0);
void sub_4025da()
{
 param_scanf(0);
 return;
}


// Function: param_scanf at 0x4025e0
unsigned long long param_scanf(char *a0)
{
 unsigned long v2; // rax
 unsigned long v0; // [bp-0x8]

 v0 = v2;
 if (__isoc99_sscanf(a0, "%d,%d", &v0, &v0) != 2)
 return 4294967295;
 return (int)v0 + *((int *)((char *)&v0 + 4));
}


// Function: sub_40260b at 0x40260b
unsigned long long call_scanf();
void sub_40260b()
{
 (void)call_scanf();
 return;
}


// Function: call_scanf at 0x402610
unsigned long long call_scanf()
{
 int tmp1, tmp2; // [bp-0x10]

 if (__isoc99_sscanf("123,456", "%d,%d", &tmp1, &tmp2) != 2)
 return 4294967295;
 return (unsigned long long)tmp1 + (unsigned long long)tmp2;
}


// Function: sub_402642 at 0x402642
unsigned long long param_fopen_fclose(char *a0);
void sub_402642()
{
 param_fopen_fclose(0);
 return;
}


// Function: param_fopen_fclose at 0x402650
unsigned long long param_fopen_fclose(char *a0)
{
 unsigned long long v2; // rax
 FILE *fp; // rax
 unsigned int v4; // eax
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 fp = fopen(a0, "r");
 if (!fp)
 return 4294967295;
 v4 = fileno(fp);
 fclose(fp);
 return v4;
}


// Function: sub_40268e at 0x40268e
unsigned int call_fopen_fclose();
void sub_40268e()
{
 (void)call_fopen_fclose();
 return;
}


// Function: call_fopen_fclose at 0x402690
unsigned int call_fopen_fclose()
{
 unsigned long long v2; // rax
 void* fp; // rax
 unsigned int v4; // eax
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 fp = fopen("/etc/passwd", "r");
 if (!fp)
 return 4294967295;
 v4 = fileno(fp);
 fclose(fp);
 return v4 >> 31 | 42;
}


// Function: sub_4026d8 at 0x4026d8
unsigned long long param_fread_fwrite(char *a0);
void sub_4026d8(unsigned long a0)
{
 param_fread_fwrite((char *)a0);
 return;
}


// Function: param_fread_fwrite at 0x4026e0
unsigned long long param_fread_fwrite(char *a0)
{
 FILE* fp; // rax
 FILE* v4; // rbx
 size_t count; // rax
 unsigned long long v6; // rax
 char v0[32]; // [bp-0x38]
 int v1; // [bp-0x35]

 fp = fopen(a0, "w+");
 if (!fp)
 return 4294967295;
 v4 = fp;
 if (fwrite("BinBench Test Data", 1, 18, fp) != 18)
 {
 fclose(v4);
 return 4294967294;
 }
 rewind(v4);
 count = fread(v0, 1, 18, v4);
 v0[count] = 0;
 fclose(v4);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 if (v1 == 65535)
 v6 = 42;
 else
 v6 = 4294967293;
 return v6;
}


// Function: sub_4027b7 at 0x4027b7
unsigned long long call_fread_fwrite();
void sub_4027b7()
{
 (void)call_fread_fwrite();
 return;
}


// Function: call_fread_fwrite at 0x4027c0
unsigned long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_4027cc at 0x4027cc
unsigned int param_malloc_free(unsigned long j);
void sub_4027cc(unsigned long a0)
{
 param_malloc_free(a0);
 return;
}


// Function: param_malloc_free at 0x4027d0
unsigned int param_malloc_free(unsigned long j)
{
 unsigned long long v2; // rax
 void* ptr; // rax
 unsigned long long v12; // xmm0
 unsigned int v13; // edx
 unsigned int v14; // ebp
 unsigned long long index; // rcx
 unsigned long long v5; // rsi
 unsigned long v6; // rdx
 unsigned long long i; // rdi
 unsigned long long v8; // xmm0
 unsigned long long idx; // rsi
 unsigned long long v10; // xmm7
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 ptr = malloc(j * 4);
 if (!ptr)
 return 4294967295;
 if (j)
 {
 if (j < 8)
 {
 index = 0;
 }
 else
 {
 index = j & 18446744073709551608;
 v5 = index - 8;
 v6 = (v5 >> 3) + 1;
 if (v5)
 {
 i = v6 & 18446744073709551614;
 unsigned long long v8 = 0x3000000020000000ULL;
 idx = 0;
 do
 {
 v10 = InterleaveLOV(v8, v8);
 *((unsigned long long *)((char *)ptr + 4 * idx)) = v10;
 *((unsigned long long *)(16 + (char *)ptr + 4 * idx)) = AddV(v10, 0x2C0000001C000000ULL);
 *((unsigned long long *)(32 + (char *)ptr + 4 * idx)) = AddV(v10, 0x5800000038000000ULL);
 *((unsigned long long *)(48 + (char *)ptr + 4 * idx)) = AddV(v10, 0x8400000054000000ULL);
 idx += 16;
 v8 = AddV(v8, 0x1000000000000000ULL);
 i -= 2;
 } while (i != 2);
 v12 = v8;
 if (((char)v6 & 1))
 goto LABEL_4028e8;
 }
 else
 {
 v12 = 0x1e00000014000000ULL;
 idx = 0;
 if (((char)v6 & 1))
 {
LABEL_4028e8:
 *((unsigned long long *)((char *)ptr + 4 * idx)) = v12;
 *((unsigned long long *)(16 + (char *)ptr + 4 * idx)) = AddV(0x2C0000001C000000ULL, v12);
 }
 }
 if (index == j)
 goto LABEL_40291f;
 }
 v13 = (unsigned int)index * 10;
 do
 {
 *((unsigned int *)((char *)ptr + 4 * index)) = v13;
 index += 1;
 v13 += 10;
 } while (j != index);
LABEL_40291f:
 v14 = *((int *)ptr);
 }
 free(ptr);
 return v14 + *((int *)(-4 + (char *)ptr + 4 * j));
}


// Function: sub_402947 at 0x402947
unsigned long long call_malloc_free();
void sub_402947()
{
 (void)call_malloc_free();
 return;
}


// Function: call_malloc_free at 0x402950
unsigned long long call_malloc_free()
{
 return 90;
}


// Function: sub_402956 at 0x402956
unsigned int param_memset(void* a0, unsigned long n);
void sub_402956(unsigned long a0, unsigned long a1)
{
 param_memset((void *)a0, a1);
 return;
}


// Function: param_memset at 0x402960
unsigned int param_memset(void* a0, unsigned long n)
{
 unsigned long long v1; // rax
 unsigned long long v2; // rbp
 unsigned long long v3; // rdx
 unsigned long v4; // rcx
 unsigned long long i; // rsi
 unsigned long long v6; // rdx
 unsigned long long v7; // xmm0
 unsigned long long v8; // xmm1
 unsigned long v10; // xmm1lq

 memset(a0, 0, n);
 if (!n)
 return 0;
 if (n < 8)
 {
 v1 = 0;
 v2 = 0;
 }
 else
 {
 v1 = n & 18446744073709551608;
 v3 = v1 - 8;
 v4 = (v3 >> 3) + 1;
 if (v3)
 {
 i = v4 & 18446744073709551614;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 do
 {
 v7 = AddV(0, AddV(0, v7));
 v8 = AddV(0, AddV(0, v8));
 v6 += 16;
 i -= 2;
 } while (i != 2);
 if (((char)v4 & 1))
 goto LABEL_402a26;
 }
 else
 {
 v7 = 0;
 v6 = 0;
 v8 = 0;
 if (((char)v4 & 1))
 {
LABEL_402a26:
 v7 = AddV(v7, InterleaveLOV(0, InterleaveLOV(0, *((int *)((char *)a0 + v6)))));
 v8 = AddV(v8, InterleaveLOV(0, InterleaveLOV(0, *((int *)(4 + (char *)a0 + v6)))));
 }
 }
 v10 = AddV(v7, v8);
 v2 = AddV(v10, v10);
 if (v1 == n)
 return AddV(v10, v10);
 }
 do
 {
 v2 += *((char *)a0 + v1);
 v1 += 1;
 } while (n != v1);
 return v2;
}


// Function: sub_402a97 at 0x402a97
unsigned long long call_memset();
void sub_402a97()
{
 (void)call_memset();
 return;
}


// Function: call_memset at 0x402aa0
unsigned long long call_memset()
{
 return 0;
}


// Function: sub_402aa3 at 0x402aa3
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2);
void sub_402aa3(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_strchr_strstr((char *)a0, a1, (char *)a2);
 return;
}


// Function: param_strchr_strstr at 0x402ab0
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned long long ptr1; // rax
 unsigned long long ptr2; // rax

 ptr1 = (unsigned long long)strchr(a0, a1);
 ptr2 = (unsigned long long)strstr(a0, a2);
 return (-(ptr1 < 1) | (unsigned int)((ptr1 & 4294967295) - (unsigned long long)a0)) + (-(ptr2 < 1) | (unsigned int)((ptr2 & 4294967295) - (unsigned long long)a0));
}


// Function: sub_402ae9 at 0x402ae9
unsigned long long call_strchr_strstr();
void sub_402ae9()
{
 (void)call_strchr_strstr();
 return;
}


// Function: call_strchr_strstr at 0x402af0
unsigned long long call_strchr_strstr()
{
 return 15;
}


// Function: sub_402af6 at 0x402af6
int test_standard_library_functions(void);
void sub_402af6(void);
void sub_402af6()
{
 test_standard_library_functions();
 return;
}


// Function: test_standard_library_functions at 0x402b00

int test_standard_library_functions()
{
 unsigned int v5; // ebp
 void* fp; // rax
 unsigned int v9; // eax
 unsigned int v0; // [bp-0x3c]
 char v1[8]; // [bp-0x38]
 char result; // [bp-0x30]

 puts(&g_40441f);
 strncpy(v1, "HelloLib", 8);
 result = 0;
 printf(&g_404127, strlen(&v1) & 4294967295);
 printf(&g_404142, 0);
 printf(&g_40415d, 12);
 printf(&g_404179, 90);
 v5 = 4294967295;
 printf(&g_404195, 4294967295);
 int printf_result = printf("Value: %d, Name: %s\n", 42, "Test");
 printf(&g_4041b1, printf_result & 4294967295);
 int tmp1, tmp2;
 int sscanf_result = __isoc99_sscanf("123,456", "%d,%d", &tmp1, &tmp2);
 printf(&g_4041cd, (sscanf_result != 2 ? 4294967295 : (unsigned int)tmp1 + (unsigned int)tmp2));
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 v9 = fileno(fp);
 fclose(fp);
 v5 = v9 >> 31 | 42;
 }
 printf(&g_4041ea, v5);
 printf(&g_404206, param_fread_fwrite("/tmp/binbench_test_tmp") & 4294967295);
 printf(&g_404222, 90);
 printf(&g_40423e, 0);
 return printf(&g_404259, 15);
}


// Function: sub_402c8f at 0x402c8f
unsigned int param_linux_syscall(unsigned long a0);
void sub_402c8f(unsigned long a0)
{
 param_linux_syscall(a0);
 return;
}


// Function: param_linux_syscall at 0x402c90
unsigned int param_linux_syscall(unsigned long a0)
{
 unsigned long long v2; // rax
 unsigned int v3; // ebx
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v3 = syscall(2);
 if (v3 < 0)
 return -(*(__errno_location()));
 syscall(3);
 return v3;
}


// Function: sub_402ccf at 0x402ccf
unsigned int call_linux_syscall();
void sub_402ccf()
{
 (void)call_linux_syscall();
 return;
}


// Function: call_linux_syscall at 0x402cd0
unsigned int call_linux_syscall()
{
 unsigned long long v2; // rax
 unsigned int v3; // ebx
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v3 = syscall(2);
 if (v3 >= 0)
 syscall(3);
 else
 v3 = -(*(__errno_location()));
 return v3 >> 31 | 42;
}


// Function: sub_402d19 at 0x402d19
unsigned long long param_win32_api(void);
void sub_402d19()
{
 (void)param_win32_api();
 return;
}


// Function: param_win32_api at 0x402d20
unsigned long long param_win32_api()
{
 struct stat st;
 int v2;
 char v0; // [bp-0x60]

 v2 = stat("/etc/passwd", &st);
 (void)v0;
 return (v2 >= 0 ? 42 : 4294967295);
}


// Function: sub_402d56 at 0x402d56
unsigned long long call_win32_api();
void sub_402d56()
{
 (void)call_win32_api();
 return;
}


// Function: call_win32_api at 0x402d60
unsigned long long call_win32_api()
{
 unsigned int v3; // eax
 char v0; // [bp-0x90]
 char v1; // [bp-0x60]

 v3 = stat("/etc/passwd", &v0);
 return (v3 >= 0 ? (0 < *((long long *)&v1) ? 42 : 4294967294) : 4294967295);
}


// Function: sub_402d9d at 0x402d9d
unsigned long long param_fork_exec(char *a0, unsigned long a1);
void sub_402d9d(unsigned long a0, unsigned long a1)
{
 param_fork_exec((char *)a0, a1);
 return;
}


// Function: param_fork_exec at 0x402da0
unsigned long long param_fork_exec(char *a0, unsigned long a1)
{
 unsigned long v2; // rax
 unsigned int result; // eax
 unsigned long v4; // rcx
 int v0; // [bp-0x18]

 v0 = v2;
 result = fork();
 if (result < 0)
 {
 return 4294967295;
 }
 else if (!result)
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 else if (waitpid(result, &v0, 0) >= 0)
 {
 v4 = *((int *)((char *)&v0 + 4));
 if (!((char)v4 & 127))
 return v4 >> 8 & 4294967295;
 return 4294967293;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_402e1e at 0x402e1e
unsigned long long call_fork_exec();
void sub_402e1e()
{
 (void)call_fork_exec();
 return;
}


// Function: call_fork_exec at 0x402e20
unsigned long long call_fork_exec()
{
 unsigned int result; // eax
 int v0; // [bp-0xc]

 result = fork();
 if (result < 0)
 {
 return 4294967295;
 }
 else if (!result)
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (waitpid(result, &v0, 0) < 0)
 {
 return 4294967295;
 }
 else if (((char)v0 & 127))
 {
 return 4294967295;
 }
 else
 {
 return -(0 < (v0 & 0xff00)) | 42;
 }
}


// Function: sub_402e8a at 0x402e8a
unsigned long long param_pipe_communication(void);
void sub_402e8a()
{
 (void)param_pipe_communication();
 return;
}


// Function: param_pipe_communication at 0x402e90
unsigned long long param_pipe_communication()
{
 unsigned int result; // eax
 unsigned long long count; // rax
 int pipefd[2]; // [bp-0x30]
 char v2; // [bp-0x28]

 if (pipe(pipefd) < 0)
 return 4294967295;
 result = fork();
 if (result < 0)
 {
 return 4294967294;
 }
 else if (result)
 {
 close(pipefd[1]);
 count = read(pipefd[0], &v2, 31);
 v2[count] = 0;
 close(pipefd[0]);
 wait(NULL);
 return (count > 0 ? 42 : 4294967293);
 }
 else
 {
 close(pipefd[0]);
 write(pipefd[1], "HelloPipe", 9);
 close(pipefd[1]);
 _exit(0); /* do not return */
 }
}


// Function: sub_402f3c at 0x402f3c
unsigned long long call_pipe_communication();
void sub_402f3c()
{
 (void)call_pipe_communication();
 return;
}


// Function: call_pipe_communication at 0x402f40
unsigned long long call_pipe_communication()
{
 return param_pipe_communication();
}


// Function: sub_402f45 at 0x402f45
unsigned long long param_socket_create(void);
void sub_402f45()
{
 (void)param_socket_create();
 return;
}


// Function: param_socket_create at 0x402f50
unsigned long long param_socket_create()
{
 unsigned int v4; // eax
 unsigned int v5; // ebx
 unsigned int v6; // eax
 unsigned int result; // [bp-0x24]
 struct sockaddr_in v1; // [bp-0x20]

 v4 = socket(2, 1, 0);
 if (v4 < 0)
 return 4294967295;
 v5 = v4;
 result = 1;
 if (setsockopt(v4, 1, 2, &result, 4) < 0)
 {
 close(v5);
 return 4294967294;
 }
 memset(&v1, 0, sizeof(v1));
 v1.sin_family = 2;
 if (bind(v5, (struct sockaddr *)&v1, 16) < 0)
 {
 close(v5);
 return 4294967293;
 }
 v6 = listen(v5, 5);
 close(v5);
 return (v6 < 0 ? 0xfffffffc : 42);
}


// Function: sub_403019 at 0x403019
unsigned long long call_socket_create();
void sub_403019()
{
 (void)call_socket_create();
 return;
}


// Function: call_socket_create at 0x403020
unsigned long long call_socket_create()
{
 return param_socket_create();
}


// Function: sub_403025 at 0x403025
unsigned int param_shmget_shmat(void);
void sub_403025()
{
 (void)param_shmget_shmat();
 return;
}


// Function: param_shmget_shmat at 0x403030
unsigned int param_shmget_shmat()
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 void *v4_ptr; // rax
 struct_0 *ptr; // rbp
 unsigned int v6; // ebx

 v1 = open("/tmp/binbench_shm", 66, 438);
 if (v1 < 0)
 return 4294967295;
 close(v1);
 v2 = ftok("/tmp/binbench_shm", 42);
 if (v2 < 0)
 return 4294967295;
 v3 = shmget(v2, 0x1000, 950);
 if (v3 < 0)
 return 4294967294;
 v4_ptr = shmat(v3, 0, 0);
 if (v4_ptr == MAP_FAILED)
 return 4294967293;
 ptr = (struct_0 *)v4_ptr;
 *((unsigned long long *)((char *)&ptr->field_0 + 5)) = 34184295084281188;
 ptr->field_0 = 7299600957910902867;
 v6 = strlen((char*)ptr);
 shmdt(ptr);
 shmctl(v3, 0, 0);
 return v6;
}


// Function: sub_4030f1 at 0x4030f1
unsigned int call_shmget_shmat();
void sub_4030f1()
{
 (void)call_shmget_shmat();
 return;
}


// Function: call_shmget_shmat at 0x403100
unsigned int call_shmget_shmat()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 if (param_shmget_shmat() <= 0)
 return 4294967295;
 return 42;
}


// Function: sub_403117 at 0x403117
unsigned long long param_signal_handling(void);
void sub_403117()
{
 (void)param_signal_handling();
 return;
}


// Function: param_signal_handling at 0x403120
unsigned long long param_signal_handling()
{
 unsigned int v1; // ebx
 unsigned int v2; // ebx
 unsigned int v3; // ebx
 unsigned int v4; // ebx
 unsigned int v5; // ebx
 unsigned int v6; // ebx

 if (signal(10, signal_handler) == 18446744073709551615)
 {
 return 4294967295;
 }
 else if (signal(14, signal_handler) != 18446744073709551615)
 {
 signal_received = 0;
 raise(10);
 if (!signal_received)
 {
 v1 = 1000;
 do
 {
 v2 = v1;
 usleep(1000);
 } while (!signal_received && (v3 = v2 - 1, v1 = v2 - 1, v2 > 1));
 }
 if (!signal_received)
 {
 return 4294967293;
 }
 else if (signal_number == 10)
 {
 signal_received = 0;
 alarm(1);
 if (!signal_received)
 {
 v4 = 2000;
 do
 {
 v5 = v4;
 usleep(1000);
 } while (!signal_received && (v6 = v5 - 1, v4 = v5 - 1, v5 > 1));
 }
 if (!signal_received)
 {
 return 4294967291;
 }
 else if (signal_number == 14)
 {
 signal(10, NULL);
 signal(14, NULL);
 return 42;
 }
 else
 {
 return 4294967291;
 }
 }
 else
 {
 return 0xfffffffc;
 }
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_40324a at 0x40324a
void signal_handler(int a0);
void sub_40324a(unsigned long a0)
{
 signal_handler((int)a0);
 return;
}


// Function: signal_handler at 0x403250
void signal_handler(int a0)
{
 signal_received = 1;
 signal_number = (unsigned int)a0;
 return;
}


// Function: sub_403261 at 0x403261
unsigned long long call_signal_handling();
void sub_403261()
{
 (void)call_signal_handling();
 return;
}


// Function: call_signal_handling at 0x403270
unsigned long long call_signal_handling()
{
 return param_signal_handling();
}


// Function: sub_403275 at 0x403275
int test_system_calls(void);
void sub_403275(void);
void sub_403275()
{
 test_system_calls();
 return;
}


// Function: test_system_calls at 0x403280

int test_system_calls()
{
 unsigned int v3; // ebx
 unsigned int v4; // eax
 unsigned int result; // eax
 unsigned long long v6; // rsi
 struct stat stat_buf; // [bp-0xa0]
 int wait_status; // [bp-0x9c]
 char v1; // [bp-0x70]

 puts(&g_404443);
 v3 = syscall(2);
 if (v3 >= 0)
 syscall(3);
 else
 v3 = -(*(__errno_location()));
 printf(&g_4042a8, v3 >> 31 | 42);
 v4 = stat("/etc/passwd", &stat_buf);
 printf(&g_4042c4, (v4 < 0 ? 4294967295 : (0 < *((long long *)&v1) ? 42 : 4294967294)));
 result = fork();
 v6 = 4294967295;
 if (result >= 0)
 {
 if (!result)
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (waitpid(result, &wait_status, 0) < 0 || ((char)wait_status & 127))
 {
 v6 = 4294967295;
 }
 else
 {
 v6 = -(0 < (wait_status & 0xff00)) | 42;
 }
 }
 printf(&g_4042e0, v6);
 printf(&g_4042fc, param_pipe_communication() & 4294967295);
 printf(&g_404318, param_socket_create() & 4294967295);
 printf(&g_404334, (param_shmget_shmat() > 0 ? 42 : 4294967295));
 return printf(&g_404350, param_signal_handling() & 4294967295);
}


// Function: sub_4033ef at 0x4033ef
void sub_4033ef(unsigned long a0)
{
 thread_compute((void *)a0);
 return;
}


// Function: thread_compute at 0x4033f0
void * thread_compute(void *a0)
{
 unsigned int *ptr; // rax
 unsigned int *input = (unsigned int *)a0;

 ptr = malloc(4);
 *(ptr) = *(input) * *(input);
 return ptr;
}


// Function: sub_403404 at 0x403404
unsigned int param_pthread_create(unsigned int a0);
void sub_403404(unsigned long a0)
{
 param_pthread_create((unsigned int)a0);
 return;
}


// Function: param_pthread_create at 0x403410
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int *v1; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]
 void *thread_result; // [bp-0x14]
 unsigned int result;

 v0 = a0;
 if (!(int)pthread_create(&v2, 0, thread_compute, &v0))
 {
 pthread_join(v2, &thread_result);
 v1 = (unsigned int *)thread_result;
 result = *(v1);
 free(v1);
 return result;
 }
 return 4294967295;
}


// Function: sub_403465 at 0x403465
unsigned int call_pthread_create();
void sub_403465()
{
 (void)call_pthread_create();
 return;
}


// Function: call_pthread_create at 0x403470
unsigned int call_pthread_create()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int *v1; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]
 void *thread_result; // [bp-0x14]
 unsigned int result;

 v0 = 7;
 if (!(int)pthread_create(&v2, 0, thread_compute, &v0))
 {
 pthread_join(v2, &thread_result);
 v1 = (unsigned int *)thread_result;
 result = *(v1);
 free(v1);
 return result;
 }
 return 4294967295;
}


// Function: sub_4034c9 at 0x4034c9
void sub_4034c9(unsigned long a0)
{
 thread_sum((void *)a0);
 return;
}


// Function: thread_sum at 0x4034d0
void * thread_sum(void *ptr)
{
 unsigned int *p = (unsigned int *)ptr;
 unsigned int v1; // r8d
 unsigned long v2; // rdx
 unsigned int v3; // eax

 p[2] = 0;
 v1 = *(p);
 v2 = p[1];
 v3 = v2;
 if (v3 >= v1)
 p[2] = (v3 - v1) * (v1 + 1) + v1 + (unsigned int)((v2 + ~(v1)) * (v3 - v1) >> 1);
 return 0;
}


// Function: sub_403504 at 0x403504
unsigned int param_pthread_join(void);
void sub_403504()
{
 (void)param_pthread_join();
 return;
}


// Function: param_pthread_join at 0x403510
unsigned int param_pthread_join()
{
 unsigned long long v1; // [bp-0x68]
 unsigned int v2; // [bp-0x60]
 unsigned int v3; // [bp-0x5c]
 unsigned int v4; // [bp-0x58]
 unsigned int v5; // [bp-0x54]
 unsigned long v6; // [bp-0x50]
 char v7; // [bp-0x48]
 pthread_t v8; // [bp-0x38], Other Possible Types: unsigned long long
 pthread_t v9; // [bp-0x30], Other Possible Types: unsigned long long
 pthread_t v10; // [bp-0x28]

 memset(&v1, 0, 36);
 v1 = 42949672961;
 v3 = 11;
 v4 = 20;
 v6 = 128849018901;
 if ((int)pthread_create(&v8, 0, thread_sum, &v1))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v9, 0, thread_sum, &v3))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v10, 0, thread_sum, &v6))
 {
 return 4294967295;
 }
 else if ((int)pthread_join(v8, 0))
 {
 return 4294967294;
 }
 else if ((int)pthread_join(v9, 0))
 {
 return 4294967294;
 }
 else if ((int)pthread_join(v10, 0))
 {
 return 0;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_403602 at 0x403602
int call_pthread_join();
void sub_403602()
{
 (void)call_pthread_join();
 return;
}


// Function: call_pthread_join at 0x403610
int call_pthread_join()
{
 return param_pthread_join();
}


// Function: sub_403615 at 0x403615
void sub_403615(unsigned long a0)
{
 thread_increment((void *)a0);
 return;
}


// Function: thread_increment at 0x403620
void * thread_increment(void *ptr)
{
 unsigned int *p = (unsigned int *)ptr;
 unsigned int v3; // ebp
 unsigned int v4; // ebp
 unsigned int v5; // ebp

 v3 = *(p);
 if (v3 <= 0)
 return 0;
 do
 {
 v4 = v3;
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 v5 = v4 - 1;
 v3 = v5;
 } while (v4 + 4294967295);
 return 0;
}


// Function: sub_40365f at 0x40365f
unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1);
void sub_40365f(unsigned long a0, unsigned long a1)
{
 param_mutex_lock((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: param_mutex_lock at 0x403660
unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned long v3; // rax
 unsigned int v4; // r14d
 pthread_t *ptr_result; // rax
 pthread_t *ptr_copy; // rbx
 unsigned long i; // r12
 unsigned long long v8; // r14
 unsigned long v9; // rbp
 unsigned long long v10; // rax
 unsigned int v0; // [bp-0x38], Other Possible Types: unsigned long
 unsigned int v1; // [bp-0x34]

 v0 = v3;
 v4 = a0;
 v0 = a1;
 ptr_result = (pthread_t *)malloc(a0 * sizeof(pthread_t));
 ptr_copy = ptr_result;
 if (!ptr_result)
 return 4294967295;
 shared_counter = 0;
 if (v4 > 0)
 {
 v1 = v4;
 i = v4;
 v8 = 0;
 do
 {
 if ((int)pthread_create(&ptr_result[v8 / sizeof(pthread_t)], 0, thread_increment, &v0))
 {
 free(ptr_result);
 return 4294967294;
 }
 } while ((v8 += sizeof(pthread_t), i * sizeof(pthread_t) != v8));
 v4 = v1;
 if (v4 > 0)
 {
 v9 = 0;
 do
 {
 pthread_join(*(ptr_result + v9), 0);
 v9 += 1;
 } while (i != v9);
 }
 }
 free(ptr_result);
 if (shared_counter == v0 * v4)
 v10 = 42;
 else
 v10 = 4294967293;
 return v10;
}


// Function: sub_40374c at 0x40374c
unsigned long long call_mutex_lock();
void sub_40374c()
{
 (void)call_mutex_lock();
 return;
}


// Function: call_mutex_lock at 0x403750
unsigned long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_40375f at 0x40375f
void sub_40375f(void)
{
 consumer_thread();
 return;
}


// Function: consumer_thread at 0x403760
void * consumer_thread(void *arg)
{
 unsigned int *ptr; // rax
 (void)arg;

 pthread_mutex_lock(&cond_mutex);
 while (!i)
 {
 pthread_cond_wait(&cond, &cond_mutex);
 }
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *ptr = (!data ? 0 : 42);
 return ptr;
}


// Function: sub_4037d5 at 0x4037d5
void sub_4037d5(void)
{
 producer_thread();
 return;
}


// Function: producer_thread at 0x4037e0
void * producer_thread(void *arg)
{
 (void)arg;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: param_condition_variable at 0x403820
unsigned long long param_condition_variable(void);
unsigned long long param_condition_variable()
{
 pthread_t v0; // [bp-0x20], Other Possible Types: unsigned long long
 unsigned int *v1; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]
 void *thread_result; // [bp-0x14]
 unsigned int result;

 ready = 0;
 data = 0;
 if ((int)pthread_create(&v0, 0, consumer_thread, 0))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v2, 0, producer_thread, 0))
 {
 pthread_cancel(v0);
 return 4294967294;
 }
 else
 {
 pthread_join(v0, &thread_result);
 v1 = (unsigned int *)thread_result;
 pthread_join(v2, 0);
 result = *(v1);
 free(v1);
 return result;
 }
}


// Function: sub_4038b8 at 0x4038b8
unsigned long long call_condition_variable();
void sub_4038b8()
{
 (void)call_condition_variable();
 return;
}


// Function: call_condition_variable at 0x4038c0
unsigned long long call_condition_variable()
{
 return param_condition_variable();
}


// Function: sub_4038c5 at 0x4038c5
void sub_4038c5(unsigned long a0)
{
 thread_atomic_increment((void *)a0);
 return;
}


// Function: thread_atomic_increment at 0x4038d0
void * thread_atomic_increment(void *ptr)
{
 unsigned int *p = (unsigned int *)ptr;
 unsigned int v1; // esi
 unsigned int result; // edx
 unsigned int i; // ecx

 v1 = *(p);
 if (v1 <= 0)
 return 0;
 result = v1 & 3;
 i = 0;
 if (v1 - 1 >= 3)
 {
 i = 0;
 do
 {
 atomic_fetch_add_explicit(&atomic_counter, 1, memory_order_relaxed);
 i += 4;
 } while (i != (v1 & 0xfffffffc));
 }
 if (!result)
 return 0;
 do
 {
 atomic_fetch_add_explicit(&atomic_counter, 1, memory_order_relaxed);
 i += 1;
 result -= 1;
 } while (result + 4294967295);
 return 0;
}


// Function: sub_403983 at 0x403983
void sub_403983(void)
{
 thread_atomic_load_store((void *)0);
 return;
}


// Function: thread_atomic_load_store at 0x403990
void * thread_atomic_load_store(void *arg)
{
 unsigned int *p = (unsigned int *)arg;
 (void)p;
 atomic_fetch_add_explicit(&atomic_counter, 100, memory_order_relaxed);
 return 0;
}


// Function: sub_4039a2 at 0x4039a2
unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1);
void sub_4039a2(unsigned long a0, unsigned long a1)
{
 param_atomic_ops((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: param_atomic_ops at 0x4039b0
unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 pthread_t *ptr; // rax
 pthread_t *ptr_copy; // rbx
 unsigned long i; // r13
 unsigned long long v7; // r14
 unsigned long v8; // rbp
 unsigned int v0; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]
 pthread_t v2; // [bp-0x38]

 v1 = a1;
 ptr = malloc(a0 * sizeof(pthread_t));
 if (!ptr)
 return 4294967295;
 ptr_copy = ptr;
 atomic_store_explicit(&atomic_counter, 0, memory_order_relaxed);
 i = a0;
 if (a0 > 0)
 {
 v7 = 0;
 do
 {
 if ((int)pthread_create(&ptr[v7 / sizeof(pthread_t)], 0, thread_atomic_increment, &v1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v7 += sizeof(pthread_t), i * sizeof(pthread_t) != v7));
 }
 if (!(int)pthread_create(&v2, 0, thread_atomic_load_store, (void *)0))
 pthread_join(v2, 0);
 if (a0 > 0)
 {
 v8 = 0;
 do
 {
 pthread_join(ptr[v8 / sizeof(pthread_t)], 0);
 v8 += 1;
 } while (i != v8);
 }
 free(ptr);
 return (atomic_load_explicit(&atomic_counter, memory_order_relaxed) > 0 ? 42 : 4294967293);
}


// Function: sub_403ab6 at 0x403ab6
unsigned long long call_atomic_ops();
void sub_403ab6()
{
 (void)call_atomic_ops();
 return;
}


// Function: call_atomic_ops at 0x403ac0
unsigned long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


// Function: sub_403acf at 0x403acf
void sub_403acf(unsigned long a0)
{
 thread_tls_test((void *)a0);
 return;
}


// Function: thread_tls_test at 0x403ad0
void * thread_tls_test(void *a0)
{
 unsigned int v4; // ebx
 unsigned int v5; // ebp
 unsigned int *ptr; // rax

 (void)a0;
 v4 = 0;
 v5 = v4 + 50;
 ptr = malloc(8);
 if (ptr) {
  ptr[0] = v4;
  ptr[1] = v5;
 }
 return ptr;
}


// Function: sub_403b19 at 0x403b19
unsigned long long param_thread_local_storage(unsigned int a0);
void sub_403b19(unsigned long a0)
{
 param_thread_local_storage((unsigned int)a0);
 return;
}


// Function: param_thread_local_storage at 0x403b20
unsigned long long param_thread_local_storage(unsigned int a0)
{
 unsigned long long v4; // rbx
 pthread_t *addr; // r14
 unsigned int v14; // ebx
 unsigned long v15; // rbx
 unsigned long long v16; // rax
 char **p; // r13
 unsigned long i; // r12
 unsigned long idx; // rbx
 char *ptr_name; // rax
 pthread_t *v10; // rbx
 unsigned long j; // r14
 unsigned long v12; // rbp
 unsigned int v13; // r15d
 unsigned int v0; // [bp-0x44]
 pthread_t *ptr3; // [bp-0x40]
 unsigned int *ptr_result; // [bp-0x38]

 v4 = a0 * sizeof(pthread_t);
 addr = malloc(v4);
 p = malloc(a0 * sizeof(char *));
 if (!addr)
 {
 return 4294967295;
 }
 else if (p)
 {
 if (a0 > 0)
 {
 i = a0;
 idx = 0;
 do
 {
 ptr_name = malloc(16);
 ((char **)((char *)p + 8 * idx))[0] = ptr_name;
 snprintf(ptr_name, 16, "Thread-%d", idx & 4294967295);
 idx += 1;
 } while (i != idx);
 if (a0 <= 0)
 goto LABEL_403c43;
 j = 0;
 do
 {
 if ((int)pthread_create(&addr[j], 0, thread_tls_test, (void *)p[j]))
 {
 v15 = 18446744073709551615;
 do
 {
 free(p[j]);
 v15 += 1;
 } while (j != v15);
 free(p);
 free(addr);
 return 4294967294;
 }
 j += 1;
 } while (i != j);
 v0 = a0;
 if (a0 > 0)
 {
 v12 = 0;
 v13 = 0;
 v14 = 0;
 do
 {
 void *thread_result;
 pthread_join(addr[v12], (void **)&thread_result);
 ptr_result = (unsigned int *)thread_result;
 v14 += ptr_result[0];
 v13 += ptr_result[1];
 free(ptr_result);
 free(p[v12]);
 v12 += 1;
 } while (i != v12);
 }
 else
 {
 v14 = 0;
 v13 = 0;
 }
 }
 else
 {
LABEL_403c43:
 v14 = 0;
 v13 = 0;
 }
 free(p);
 free(addr);
 if (!(v0 * 150 ^ v13) && !(v0 * 100 ^ v14))
 v16 = 42;
 else
 v16 = 4294967293;
 return v16;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_403cd8 at 0x403cd8
unsigned long long call_thread_local_storage();
void sub_403cd8()
{
 (void)call_thread_local_storage();
 return;
}


// Function: call_thread_local_storage at 0x403ce0
unsigned long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: sub_403cea at 0x403cea
int test_thread_concurrency(void);
void sub_403cea(void);
void sub_403cea()
{
 test_thread_concurrency();
 return;
}


// Function: test_thread_concurrency at 0x403cf0

int test_thread_concurrency()
{
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x1c]
 unsigned int *ptr; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]

 puts(&g_40445e);
 v0 = 7;
 v4 = 4294967295;
 if (!(int)pthread_create(&v2, 0, thread_compute, &v0))
 {
 pthread_join(v2, &ptr);
 v4 = *(ptr);
 free(ptr);
 }
 printf(&g_404376, v4);
 printf(&g_404392, param_pthread_join() & 4294967295);
 printf(&g_4043af, param_mutex_lock(4, 1000) & 4294967295);
 printf(&g_4043cb, param_condition_variable() & 4294967295);
 printf(&g_4043e7, param_atomic_ops(4, 500) & 4294967295);
 return printf(&g_404403, param_thread_local_storage(4) & 4294967295);
}


// Function: sub_403ddd at 0x403ddd
void sub_403ddd(void)
{
 main();
 return;
}


// Function: main at 0x403de0
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


