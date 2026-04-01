// Angr Decompilation of 6_clang_O2_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <pthread.h>
#include <sys/mman.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdatomic.h>
#include <sys/syscall.h>

// Stub functions for decompilation artifacts
static inline unsigned long long InterleaveLOV(unsigned long long a, unsigned long long b) { return a + b; }
static inline unsigned long long AddV(unsigned long long a, unsigned long long b) { return a + b; }

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 unsigned char field_0[4096];
 unsigned long long field_5;
} struct_0;

struct_0 *g_406fe0 = 0;

// Global variables for threading
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int shared_counter = 0;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
volatile int g_i = 0;
volatile int data = 0;
volatile int ready = 0;
_Atomic unsigned int atomic_counter = 0;
unsigned int signal_number = 0;
unsigned int signal_received = 0;

void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}

// Global string variables
char g_404127[] = "strlen result: %d\n";
char g_404142[] = "call_strcpy result: %d\n";
char g_40415d[] = "call_strlen result: %d\n";
char g_404179[] = "call_memcpy result: %d\n";
char g_404195[] = "call_memcmp result: %d\n";
char g_4041b1[] = "call_printf result: %d\n";
char g_4041cd[] = "call_scanf result: %d\n";
char g_4041ea[] = "call_fopen_fclose result: %d\n";
char g_404206[] = "call_fread_fwrite result: %d\n";
char g_404222[] = "call_malloc_free result: %d\n";
char g_40423e[] = "call_memset result: %d\n";
char g_404259[] = "call_strchr_strstr result: %d\n";
char g_4042a8[] = "call_linux_syscall result: %d\n";
char g_4042c4[] = "call_win32_api result: %d\n";
char g_4042e0[] = "call_fork_exec result: %d\n";
char g_4042fc[] = "call_pipe_communication result: %d\n";
char g_404318[] = "call_socket_create result: %d\n";
char g_404334[] = "call_shmget_shmat result: %d\n";
char g_404350[] = "call_signal_handling result: %d\n";
char g_404376[] = "call_pthread_create result: %d\n";
char g_404392[] = "call_pthread_join result: %d\n";
char g_4043af[] = "call_mutex_lock result: %d\n";
char g_4043cb[] = "call_condition_variable result: %d\n";
char g_4043e7[] = "call_atomic_ops result: %d\n";
char g_404403[] = "call_thread_local_storage result: %d\n";
char g_40441f[] = "Testing standard library functions...";
char g_404443[] = "Testing system calls...";
char g_40445e[] = "Testing thread concurrency...";

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_406fe0;
 if (g_406fe0)
 v1 = (unsigned long long *)g_406fe0;
 return v1;
}


// Function: sub_402020 at 0x402020
unsigned long long g_407008 = 0;
unsigned long long g_407010 = 0;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_407008;
}


// Function: sub_40202c at 0x40202c
int sub_40202c()
{
 return raise(SIGUSR1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4023e5 at 0x4023e5
void sub_4023e5()
{
}


// Function: sub_4023e6 at 0x4023e6
void sub_4023e6()
{
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_402419 at 0x402419
void sub_402419()
{
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402459 at 0x402459
void sub_402459()
{
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
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_4024a9 at 0x4024a9
void sub_4024a9(unsigned long a0)
{
 return;
}


// Function: param_strcpy at 0x4024b0
long long param_strcpy(char *a0, char *a1)
{
 strcpy(a0, a1);
 return strlen(a0);
}


// Function: sub_4024c2 at 0x4024c2
void sub_4024c2()
{
 return;
}


// Function: call_strcpy at 0x4024d0
long long call_strcpy()
{
 char v0[8]; // [bp-0x28]
 char result; // [bp-0x20]

 strncpy(v0, "HelloLib", 8);
 result = 0;
 return strlen(&v0);
}


// Function: sub_4024f4 at 0x4024f4
void sub_4024f4()
{
 return;
}


// Function: param_strcmp at 0x402500
unsigned long long param_strcmp(char *a0, char *a1)
{
 unsigned int v3; // eax

 v3 = strcmp(a0, a1);
 if (v3 > 0)
 return 1;
 return -(v3);
}


// Function: sub_40251b at 0x40251b
void sub_40251b()
{
 return;
}


// Function: call_strcmp at 0x402520
unsigned long long call_strcmp()
{
 return 0;
}


// Function: sub_402523 at 0x402523
void sub_402523()
{
 return;
}


// Function: param_strlen at 0x402530
long long param_strlen(char *a0)
{
 return strlen(a0);
}


// Function: sub_402535 at 0x402535
void sub_402535()
{
 return;
}


// Function: call_strlen at 0x402540
unsigned long long call_strlen()
{
 return 12;
}


// Function: sub_402546 at 0x402546
void sub_402546(unsigned long a0, unsigned long a1, unsigned long a2)
{
 return;
}


// Function: param_memcpy at 0x402550
int param_memcpy(void* a0, void* a1, unsigned long n)
{
 memcpy(a0, a1, n);
 return n;
}


// Function: sub_40255d at 0x40255d
void sub_40255d()
{
 return;
}


// Function: call_memcpy at 0x402560
unsigned long long call_memcpy()
{
 return 90;
}


// Function: sub_402566 at 0x402566
void sub_402566()
{
 return;
}


// Function: param_memcmp at 0x402570
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned int v3; // eax

 v3 = memcmp(a0, a1, a2);
 if (v3 > 0)
 return 1;
 return -(v3);
}


// Function: sub_40258b at 0x40258b
void sub_40258b()
{
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
 return;
}


// Function: param_printf at 0x4025a0
int param_printf(unsigned int a0, unsigned long a1)
{
 return printf("Value: %d, Name: %s\n", a0, a1);
}


// Function: sub_4025b3 at 0x4025b3
void sub_4025b3()
{
 return;
}


// Function: call_printf at 0x4025c0
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


// Function: sub_4025da at 0x4025da
void sub_4025da()
{
 return;
}


// Function: param_scanf at 0x4025e0
unsigned long long param_scanf(char *a0)
{
 unsigned long v2; // rax
 int v0; // [bp-0x8]
 int v1; // [bp-0x4]

 v0 = 0;
 v1 = 0;
 if (sscanf(a0, "%d,%d", &v0, &v1) != 2)
 return 4294967295;
 return (unsigned int)(v0 + v1);
}


// Function: sub_40260b at 0x40260b
void sub_40260b()
{
 return;
}


// Function: call_scanf at 0x402610
unsigned long long call_scanf()
{
 int v0; // [bp-0x8]
 int v1; // [bp-0x4]

 if (sscanf("123,456", "%d,%d", &v0, &v1) != 2)
 return 4294967295;
 return (unsigned int)(v0 + v1);
}


// Function: sub_402642 at 0x402642
void sub_402642()
{
 return;
}


// Function: param_fopen_fclose at 0x402650
unsigned long long param_fopen_fclose(char *a0)
{
 FILE *fp; // rax
 unsigned int v4; // eax

 fp = fopen(a0, "r");
 if (!fp)
 return 4294967295;
 v4 = fileno(fp);
 fclose(fp);
 return v4;
}


// Function: sub_402689 at 0x402689
void sub_402689()
{
 return;
}


// Function: call_fopen_fclose at 0x402690
unsigned int call_fopen_fclose()
{
 void* fp; // rax
 unsigned int v4; // eax

 fp = fopen("/etc/passwd", "r");
 if (!fp)
 return 4294967295;
 v4 = fileno(fp);
 fclose(fp);
 return v4 >> 31 | 42;
}


// Function: sub_4026d8 at 0x4026d8
void sub_4026d8(unsigned long a0)
{
 return;
}


// Function: param_fread_fwrite at 0x4026e0
unsigned long long param_fread_fwrite(char *a0)
{
 void* fp; // rax
 void* v4; // rbx
 unsigned long long count; // rax
 unsigned long long v6; // rax
 char v0[19]; // [bp-0x38]
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
 v6 = 42;
 return v6;
}


// Function: sub_4027b7 at 0x4027b7
void sub_4027b7()
{
 return;
}


// Function: call_fread_fwrite at 0x4027c0
unsigned long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_4027cc at 0x4027cc
void sub_4027cc(unsigned long a0)
{
 return;
}


// Function: param_malloc_free at 0x4027d0
unsigned int param_malloc_free(unsigned long j)
{
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
 v8 = 0x3000000020000000UL;
 idx = 0;
 do
 {
 v10 = v8;
 *((unsigned int *)((char *)ptr + 4 * idx)) = (unsigned int)v10;
 *((unsigned int *)(16 + (char *)ptr + 4 * idx)) = (unsigned int)AddV(v10, 316912650130844326ULL);
 *((unsigned int *)(32 + (char *)ptr + 4 * idx)) = (unsigned int)AddV(v10, 633825300261688653ULL);
 *((unsigned int *)(48 + (char *)ptr + 4 * idx)) = (unsigned int)AddV(v10, 950737950392532980ULL);
 idx += 16;
 v8 = AddV(v8, 126765060052337730ULL);
 i -= 2;
 } while (i != 2);
 v12 = v8;
 if (((char)v6 & 1))
 goto LABEL_4028e8;
 }
 else
 {
 v12 = 0x140000000aULL;
 idx = 0;
 if (((char)v6 & 1))
 {
LABEL_4028e8:
 *((unsigned int *)((char *)ptr + 4 * idx)) = (unsigned int)v12;
 *((unsigned int *)(16 + (char *)ptr + 4 * idx)) = (unsigned int)AddV(316912650130844326ULL, v12);
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
void sub_402947()
{
 return;
}


// Function: call_malloc_free at 0x402950
unsigned long long call_malloc_free()
{
 return 90;
}


// Function: sub_402956 at 0x402956
void sub_402956(unsigned long a0, unsigned long a1)
{
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
 unsigned long long v0; // [bp-0x18]

 v0 = v1;
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
 v7 = AddV(InterleaveLOV(0, InterleaveLOV(0, *((int *)(8 + (char *)a0 + v6)))), AddV(InterleaveLOV(0, InterleaveLOV(0, *((int *)((char *)a0 + v6)))), v7));
 v8 = AddV(InterleaveLOV(0, InterleaveLOV(0, *((int *)(12 + (char *)a0 + v6)))), AddV(InterleaveLOV(0, InterleaveLOV(0, *((int *)(4 + (char *)a0 + v6)))), v8));
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
 v2 = v10;
 if (v1 == n)
 return v10;
 }
 do
 {
 v2 += *((char *)a0 + v1);
 v1 += 1;
 } while (n != v1);
 return v2;
}


// Function: sub_402a97 at 0x402a97
void sub_402a97()
{
 return;
}


// Function: call_memset at 0x402aa0
unsigned long long call_memset()
{
 return 0;
}


// Function: sub_402aa3 at 0x402aa3
void sub_402aa3(unsigned long a0, unsigned long a1, unsigned long a2)
{
 return;
}


// Function: param_strchr_strstr at 0x402ab0
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned long long ptr1; // rax
 unsigned long long ptr2; // rax

 ptr1 = strchr(a0, a1);
 ptr2 = strstr(a0, a2);
 return (-(ptr2 < 1) | (unsigned int)((ptr2 & 4294967295) - a0)) + (-(ptr1 < 1) | (unsigned int)((ptr1 & 4294967295) - a0));
}


// Function: sub_402ae9 at 0x402ae9
void sub_402ae9()
{
 return;
}


// Function: call_strchr_strstr at 0x402af0
unsigned long long call_strchr_strstr()
{
 return 15;
}


// Function: sub_402af6 at 0x402af6
void sub_402af6()
{
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
 printf(&g_4041b1, printf("Value: %d, Name: %s\n", 42, "Test") & 4294967295);
 printf(&g_4041cd, 579);
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
void sub_402c8f(unsigned long a0)
{
 return;
}


// Function: param_linux_syscall at 0x402c90
unsigned int param_linux_syscall(unsigned long a0)
{
 unsigned int v3; // ebx

 v3 = syscall(2);
 if (v3 < 0)
 return -(*(__errno_location()));
 syscall(3);
 return v3;
}


// Function: sub_402ccf at 0x402ccf
void sub_402ccf()
{
 return;
}


// Function: call_linux_syscall at 0x402cd0
unsigned int call_linux_syscall()
{
 unsigned int v3; // ebx

 v3 = syscall(2);
 if (v3 >= 0)
 syscall(3);
 else
 v3 = -(*(__errno_location()));
 return v3 >> 31 | 42;
}


// Function: sub_402d19 at 0x402d19
void sub_402d19()
{
 return;
}


// Function: param_win32_api at 0x402d20
unsigned long long param_win32_api()
{
 unsigned int v2; // eax
 struct stat v0; // [bp-0x60]

 v2 = stat("/tmp", &v0);
 return (v2 >= 0 ? (0 < *((long long *)&v0) ? 42 : 4294967294) : 4294967295);
}


// Function: sub_402d56 at 0x402d56
void sub_402d56()
{
 return;
}


// Function: call_win32_api at 0x402d60
unsigned long long call_win32_api()
{
 unsigned int v3; // eax
 struct stat v0; // [bp-0x90]

 v3 = stat("/etc/passwd", &v0);
 return (v3 >= 0 ? (0 < v0.st_size ? 42 : 4294967294) : 4294967295);
}


// Function: sub_402d9d at 0x402d9d
void sub_402d9d(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: param_fork_exec at 0x402da0
unsigned long long param_fork_exec(char *a0, unsigned long a1)
{
 unsigned int result; // eax
 unsigned long v0; // [bp-0x18]

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
 return *((int *)((char *)&v0 + 4)) >> 8;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_402e0a at 0x402e0a
void sub_402e0a()
{
 return;
}


// Function: call_fork_exec at 0x402e10
unsigned int call_fork_exec()
{
 unsigned int result; // eax
 unsigned int v0[1]; // [bp-0xc]

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
 else if (!((char)v0[0] & 127))
 {
 return -(0 < (v0[0] & 0xff00)) | 42;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_402e72 at 0x402e72
void sub_402e72()
{
 return;
}


// Function: param_pipe_communication at 0x402e80
unsigned long long param_pipe_communication()
{
 unsigned int result; // eax
 unsigned long long count; // rax
 char v0; // [bp-0x30], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x2c]
 char v2; // [bp-0x28]

 if (pipe(&v0) < 0)
 return 4294967295;
 result = fork();
 if (result < 0)
 {
 return 4294967294;
 }
 else if (result)
 {
 close(v1);
 count = read(v0, &v2, 31);
 (&v2)[count] = 0;
 close(v0);
 wait(NULL);
 return (count > 0 ? 42 : 4294967293);
 }
 else
 {
 close(v0);
 write(v1, "HelloPipe", 9);
 close(v1);
 _exit(0); /* do not return */
 }
}


// Function: sub_402f24 at 0x402f24
void sub_402f24()
{
 return;
}


// Function: call_pipe_communication at 0x402f30
unsigned long long call_pipe_communication()
{
 return param_pipe_communication();
}


// Function: sub_402f35 at 0x402f35
void sub_402f35()
{
 return;
}


// Function: param_socket_create at 0x402f40
unsigned long long param_socket_create()
{
 unsigned int v4; // eax
 unsigned int v5; // ebx
 unsigned int v6; // eax
 unsigned long long v7; // rax
 unsigned int result; // [bp-0x24]
 struct sockaddr v1; // [bp-0x20]

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
 *((unsigned long long *)&v1.sa_data[6]) = 0;
 *((unsigned long *)&v1.sa_family) = 2;
 if (bind(v5, &v1, 16) < 0)
 {
 close(v5);
 return 4294967293;
 }
 v6 = listen(v5, 5);
 close(v5);
 if (v6 < 0)
 v7 = 0xfffffffc;
 else
 v7 = 42;
 return v7;
}


// Function: sub_402ffa at 0x402ffa
void sub_402ffa()
{
 return;
}


// Function: call_socket_create at 0x403000
unsigned long long call_socket_create()
{
 return param_socket_create();
}


// Function: sub_403005 at 0x403005
void sub_403005()
{
 return;
}


// Function: param_shmget_shmat at 0x403010
unsigned int param_shmget_shmat()
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 struct_0 *v4; // rax
 struct_0 *ptr; // rbp
 unsigned int v6; // ebx
 unsigned long long v0; // [bp-0x18]

 v0 = v1;
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
 v4 = shmat(v3, 0, 0);
 if (v4 == 0xffffffffffffffff)
 return 4294967293;
 ptr = v4;
 memset(ptr->field_0, 'A', 4096);
 v6 = strlen((char *)ptr);
 shmdt(ptr);
 shmctl(v3, 0, 0);
 return v6;
}


// Function: sub_4030d1 at 0x4030d1
void sub_4030d1()
{
 return;
}


// Function: call_shmget_shmat at 0x4030e0
unsigned int call_shmget_shmat()
{
 if (param_shmget_shmat() <= 0)
 return 4294967295;
 return 42;
}


// Function: sub_4030f7 at 0x4030f7
void sub_4030f7()
{
 return;
}


// Function: param_signal_handling at 0x403100
unsigned long long param_signal_handling()
{
 unsigned int v1; // ebx
 unsigned int v2; // ebx
 unsigned int v3; // ebx
 unsigned int v4; // ebx
 unsigned int v5; // ebx
 unsigned int v6; // ebx

 if (signal(10, signal_handler) == 18446744073709551615ULL)
 {
 return 4294967295;
 }
 else if (signal(14, signal_handler) != 18446744073709551615ULL)
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


// Function: sub_40322a at 0x40322a
void sub_40322a(unsigned long a0)
{
 return;
}


// Function: sub_403241 at 0x403241
void sub_403241()
{
 return;
}


// Function: call_signal_handling at 0x403250
unsigned long long call_signal_handling()
{
 return param_signal_handling();
}


// Function: sub_403255 at 0x403255
void sub_403255()
{
 return;
}


// Function: test_system_calls at 0x403260
int test_system_calls()
{
 unsigned int v3; // ebx
 unsigned int v4; // eax
 unsigned int result; // eax
 unsigned long long v6; // rsi
 unsigned int v0[12]; // [bp-0xa0]
 char v1; // [bp-0x70]

 puts(&g_404443);
 v3 = syscall(2);
 if (v3 >= 0)
 syscall(3);
 else
 v3 = -(*(__errno_location()));
 printf(&g_4042a8, v3 >> 31 | 42);
 v4 = stat("/etc/passwd", &v0);
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
 else if (waitpid(result, &v0, 0) < 0 || ((char)v0[0] & 127))
 {
 v6 = 4294967295;
 }
 else
 {
 v6 = -(0 < (v0[0] & 0xff00)) | 42;
 }
 }
 printf(&g_4042e0, v6);
 printf(&g_4042fc, param_pipe_communication() & 4294967295);
 printf(&g_404318, param_socket_create() & 4294967295);
 printf(&g_404334, (param_shmget_shmat() > 0 ? 42 : 4294967295));
 return printf(&g_404350, param_signal_handling() & 4294967295);
}


// Function: sub_4033cf at 0x4033cf
void sub_4033cf(unsigned long a0)
{
 return;
}


// Function: thread_compute at 0x4033d0
void* thread_compute(void* a0)
{
 unsigned int *ptr; // rax
 unsigned int *input = (unsigned int *)a0;

 ptr = malloc(4);
 *(ptr) = *(input) * *(input);
 return ptr;
}


// Function: sub_4033e4 at 0x4033e4
void sub_4033e4(unsigned long a0)
{
 return;
}


// Function: param_pthread_create at 0x4033f0
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int *v1; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]

 v0 = a0;
 if ((int)pthread_create(&v2, 0, thread_compute, &v0))
 return 4294967295;
 pthread_join(v2, (void**)&v1);
 free(v1);
 return *(v1);
}


// Function: sub_40343d at 0x40343d
void sub_40343d()
{
 return;
}


// Function: call_pthread_create at 0x403440
unsigned int call_pthread_create()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int *v1; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]

 v0 = 7;
 if ((int)pthread_create(&v2, 0, thread_compute, &v0))
 return 4294967295;
 pthread_join(v2, (void**)0);
 free(v1);
 return *(v1);
}


// Function: sub_403491 at 0x403491
void sub_403491(unsigned long a0)
{
 return;
}


// Function: thread_sum at 0x4034a0
void* thread_sum(void* ptr)
{
 unsigned int v1; // r8d
 unsigned long v2; // rdx
 unsigned int v3; // eax
 unsigned int *data = (unsigned int *)ptr;

 data[2] = 0;
 v1 = *(data);
 v2 = data[1];
 v3 = v2;
 if (v3 >= v1)
 data[2] = (v3 - v1) * (v1 + 1) + v1 + (unsigned int)((v2 + ~(v1)) * (v3 - v1) >> 1);
 return 0;
}


// Function: sub_4034d4 at 0x4034d4
void sub_4034d4()
{
 return;
}


// Function: param_pthread_join at 0x4034e0
unsigned int param_pthread_join()
{
 unsigned long long v1; // [bp-0x68]
 unsigned int v2; // [bp-0x60]
 unsigned int v3; // [bp-0x5c]
 unsigned int v4; // [bp-0x58]
 unsigned int v5; // [bp-0x54]
 unsigned long v6; // [bp-0x50]
 pthread_t v7; // [bp-0x48]
 pthread_t v8; // [bp-0x38], Other Possible Types: unsigned long long
 pthread_t v9; // [bp-0x30], Other Possible Types: unsigned long long
 pthread_t v10; // [bp-0x28]

 memset(&v1, 0, 36);
 v1 = 42949672961;
 v3 = 11;
 v4 = 20;
 v6 = 1288490189ULL;
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
 else if (!(int)pthread_join(v10, 0))
 {
 return v5 + v2 + 0;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_4035d2 at 0x4035d2
void sub_4035d2()
{
 return;
}


// Function: call_pthread_join at 0x4035e0
int call_pthread_join()
{
 return param_pthread_join();
}


// Function: sub_4035e5 at 0x4035e5
void sub_4035e5(unsigned long a0)
{
 return;
}


// Function: thread_increment at 0x4035f0
void* thread_increment(void* ptr)
{
 unsigned int v3; // ebp
 unsigned int v4; // ebp
 unsigned int v5; // ebp
 unsigned int *data = (unsigned int *)ptr;

 v3 = *(data);
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


// Function: sub_40362f at 0x40362f
void sub_40362f(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: param_mutex_lock at 0x403630
unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int v4; // r14d
 pthread_t* ptr; // rax
 pthread_t* ptr2; // rbx
 unsigned long i; // r12
 unsigned long long v8; // r14
 unsigned long v9; // rbp
 unsigned long long v10; // rax
 unsigned int v0; // [bp-0x38], Other Possible Types: unsigned long
 unsigned int v1; // [bp-0x34]

 v4 = a0;
 v0 = a1;
 ptr = malloc(a0 * sizeof(pthread_t));
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 shared_counter = 0;
 if (v4 > 0)
 {
 v1 = v4;
 i = v4;
 v8 = 0;
 do
 {
 if ((int)pthread_create(&ptr[v8], 0, thread_increment, &v0))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v8 += 1, i != v8));
 v4 = v1;
 if (v4 > 0)
 {
 v9 = 0;
 do
 {
 pthread_join(ptr[v9], 0);
 v9 += 1;
 } while (i != v9);
 }
 }
 free(ptr);
 if (shared_counter == v0 * v4)
 v10 = 42;
 else
 v10 = 4294967293;
 return v10;
}


// Function: sub_40371c at 0x40371c
void sub_40371c()
{
 return;
}


// Function: call_mutex_lock at 0x403720
unsigned long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_40372f at 0x40372f
void sub_40372f()
{
 return;
}


// Function: consumer_thread at 0x403730
void* consumer_thread(void* arg)
{
 unsigned int *ptr; // rax

 pthread_mutex_lock(&cond_mutex);
 if (!g_i)
 {
 do
 {
 pthread_cond_wait(&cond, &cond_mutex);
 } while (g_i != 1);
 }
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = (!data ? 0 : 42);
 return ptr;
}


// Function: sub_4037a5 at 0x4037a5
void sub_4037a5()
{
 return;
}


// Function: producer_thread at 0x4037b0
void* producer_thread(void* arg)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 g_i = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: param_condition_variable at 0x4037f0
unsigned int param_condition_variable()
{
 pthread_t v0; // [bp-0x20], Other Possible Types: unsigned long long
 unsigned int *v1; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]

 ready = 0;
 data = 0;
 g_i = 0;
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
 pthread_join(v0, (void**)&v1);
 pthread_join(v2, 0);
 free(v1);
 return *(v1);
 }
}


// Function: sub_40387a at 0x40387a
void sub_40387a()
{
 return;
}


// Function: call_condition_variable at 0x403880
int call_condition_variable()
{
 return param_condition_variable();
}


// Function: sub_403885 at 0x403885
void sub_403885(unsigned long a0)
{
 return;
}


// Function: thread_atomic_increment at 0x403890
void* thread_atomic_increment(void* ptr)
{
 unsigned int v1; // esi
 unsigned int result; // edx
 unsigned int i; // ecx
 unsigned int *data = (unsigned int *)ptr;

 v1 = *(data);
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


// Function: sub_403943 at 0x403943
void sub_403943()
{
 return;
}


// Function: thread_atomic_load_store at 0x403950
void* thread_atomic_load_store(void* arg)
{
 atomic_fetch_add_explicit(&atomic_counter, 100, memory_order_relaxed);
 return 0;
}


// Function: sub_403962 at 0x403962
void sub_403962(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: param_atomic_ops at 0x403970
unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 pthread_t* ptr; // rax
 pthread_t* ptr2; // rbx
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
 ptr2 = ptr;
 atomic_exchange(&atomic_counter, 0);
 i = a0;
 if (a0 > 0)
 {
 v7 = 0;
 do
 {
 if ((int)pthread_create(&ptr[v7], 0, thread_atomic_increment, &v1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v7 += 1, i != v7));
 }
 if (!(int)pthread_create(&v2, 0, thread_atomic_load_store, 0))
 pthread_join(v2, 0);
 if (v0 > 0)
 {
 v8 = 0;
 do
 {
 pthread_join(ptr[v8], 0);
 v8 += 1;
 } while (i != v8);
 }
 free(ptr);
 return (atomic_counter > 0 ? 42 : 4294967293);
}


// Function: sub_403a76 at 0x403a76
void sub_403a76()
{
 return;
}


// Function: call_atomic_ops at 0x403a80
unsigned long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


// Function: sub_403a8f at 0x403a8f
void sub_403a8f(unsigned long a0)
{
 return;
}


// Function: thread_tls_test at 0x403a90
_Thread_local static unsigned int tls_value = 0;

void* thread_tls_test(void* a0)
{
 unsigned int v4; // ebx
 unsigned int v5; // ebp
 void *ptr; // rax

 v4 = tls_value;
 v5 = v4 + 50;
 tls_value = v5;
 ptr = malloc(8);
 ((unsigned int *)ptr)[0] = v4;
 ((unsigned int *)ptr)[1] = v5;
 return ptr;
}


// Function: sub_403ad9 at 0x403ad9
void sub_403ad9(unsigned long a0)
{
 return;
}


// Function: param_thread_local_storage at 0x403ae0
unsigned long long param_thread_local_storage(unsigned int a0)
{
 size_t v4; // rbx
 pthread_t* addr; // r14
 unsigned int v14; // ebx
 unsigned long v15; // rbx
 unsigned long long v16; // rax
 void** p; // r13
 unsigned long i; // r12
 unsigned long idx; // rbx
 char *ptr; // rax
 char* v10; // rbx
 unsigned long j; // r14
 unsigned long v12; // rbp
 unsigned int v13; // r15d
 unsigned int v0; // [bp-0x44]
 pthread_t* ptr3; // [bp-0x40]
 void* ptr_result; // [bp-0x38]
 void* temp_ptr; // rax

 v4 = a0 * sizeof(pthread_t);
 addr = (pthread_t*)malloc(v4);
 p = (void**)malloc(v4);
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
 char* temp_str = malloc(16);
 p[idx] = temp_str;
 snprintf(temp_str, 16, "Thread-%d", idx & 4294967295);
 idx += 1;
 } while (i != idx);
 if (a0 <= 0)
 goto LABEL_403c03;
 j = 0;
 ptr3 = addr;
 do
 {
 if ((int)pthread_create(&ptr3[j], 0, thread_tls_test, 0))
 {
 unsigned long cleanup_idx = 0;
 do
 {
 free(*((void **)((char *)p + 8 * cleanup_idx)));
 cleanup_idx += 1;
 } while (cleanup_idx != j);
 free(p);
 free(ptr3);
 return 4294967294;
 }
 } while ((j += 1, i != j));
 v0 = a0;
 if (a0 > 0)
 {
 v12 = 0;
 v13 = 0;
 v14 = 0;
 addr = ptr3;
 do
 {
 pthread_join(ptr3[v12], (void**)&ptr_result);
 v14 += *((int *)ptr_result);
 v13 += *((int *)((char *)ptr_result + 4));
 free(ptr_result);
 free(p[v12]);
 v12 += 1;
 } while (i != v12);
 }
 else
 {
 v14 = 0;
 v13 = 0;
 addr = ptr3;
 }
 }
 else
 {
LABEL_403c03:
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


// Function: sub_403c98 at 0x403c98
void sub_403c98()
{
 return;
}


// Function: call_thread_local_storage at 0x403ca0
unsigned long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: sub_403caa at 0x403caa
void sub_403caa()
{
 return;
}


// Function: test_thread_concurrency at 0x403cb0
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
 pthread_join(v2, (void**)&ptr);
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


// Function: sub_403d9d at 0x403d9d
void sub_403d9d()
{
 return;
}


// Function: main at 0x403da0
unsigned int main()
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


