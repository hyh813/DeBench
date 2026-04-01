// Angr Decompilation of 6_clang_O3_g
// Platform: AMD64

#define _GNU_SOURCE
#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <time.h>
#include <netinet/in.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/syscall.h>
#include <stdatomic.h>
#include <arpa/inet.h>
#include <sys/select.h>

// Declare __isoc99_sscanf for sscanf functionality
extern int __isoc99_sscanf(const char *str, const char *format, ...);

/* CRT stub function _init removed by preprocessor */

extern void *g_406fe0;

// Declare global variables
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern char data;
extern char i;
extern char ready;
extern unsigned int atomic_counter;
extern unsigned int signal_number;
extern unsigned int signal_received;

// Define global variables
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int shared_counter = 0;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
char data = 0;
char i = 0;
char ready = 0;
unsigned int atomic_counter = 0;
unsigned int signal_number = 0;
unsigned int signal_received = 0;
void *g_406fe0 = NULL;

// Define struct_0 for shm operations
typedef struct {
    unsigned long long field_0;
    char field_8[8];
} struct_0;

// Define SIG_ERR for signal error checking
#ifndef SIG_ERR
#define SIG_ERR ((void (*)(int))-1)
#endif

// Forward declarations for functions called before definition
void sub_402020();
int sub_40202c();
void sub_4023e5();
void sub_4023e6();
void sub_402419();
void sub_402459();
void sub_402495();
void sub_402499();
void sub_4024a9(unsigned long a0);
long long param_strcpy(char *a0, char *a1);
void sub_4024c2();
long long call_strcpy();
void sub_4024f4();
unsigned long long param_strcmp(char *a0, char *a1);
void sub_40251b();
unsigned long long call_strcmp();
void sub_402523();
long long param_strlen(char *a0);
void sub_402535();
unsigned long long call_strlen();
void sub_402546(unsigned long a0, unsigned long a1, unsigned long a2);
int param_memcpy(void* a0, void* a1, unsigned long n);
void sub_40255d();
unsigned long long call_memcpy();
void sub_402566();
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2);
void sub_40258b();
unsigned long long call_memcmp();
void sub_402596(unsigned long a0, unsigned long a1);
int param_printf(unsigned int a0, unsigned long a1);
void sub_4025b3();
int call_printf();
void sub_4025da();
unsigned long long param_scanf(char *a0);
void sub_40260b();
unsigned long long call_scanf();
void sub_402642();
unsigned long long param_fopen_fclose(char *a0);
void sub_40268e();
unsigned int call_fopen_fclose();
void sub_4026d8(unsigned long a0);
unsigned long long param_fread_fwrite(char *a0);
void sub_4027b7();
unsigned long long call_fread_fwrite();
void sub_4027cc(unsigned long a0);
unsigned int param_malloc_free(unsigned long j);
void sub_402947();
unsigned long long call_malloc_free();
void sub_402956(unsigned long a0, unsigned long a1);
unsigned int param_memset(void* a0, int c, unsigned long n);
void sub_402a97();
unsigned long long call_memset();
void sub_402aa3(unsigned long a0, unsigned long a1, unsigned long a2);
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2);
void sub_402ae9();
unsigned long long call_strchr_strstr();
void sub_402af6();
int test_standard_library_functions();
void sub_402c8f(unsigned long a0);
unsigned int param_linux_syscall(unsigned long a0);
void sub_402ccf();
unsigned int call_linux_syscall();
void sub_402d19();
unsigned long long param_win32_api();
void sub_402d56();
unsigned long long call_win32_api();
void sub_402d9d(unsigned long a0, unsigned long a1);
unsigned long long param_fork_exec(char *a0, unsigned long a1);
void sub_402e1e();
unsigned long long call_fork_exec();
void sub_402e8a();
unsigned long long param_pipe_communication();
void sub_402f3c();
unsigned long long call_pipe_communication();
void sub_402f45();
unsigned long long param_socket_create();
void sub_403019();
unsigned long long call_socket_create();
void sub_403025();
unsigned int param_shmget_shmat();
void sub_4030f1();
unsigned int call_shmget_shmat();
void sub_403117();
unsigned long long param_signal_handling();
void sub_40324a(unsigned long a0);
void sub_403261();
unsigned long long call_signal_handling();
void sub_403275();
int test_system_calls();
void signal_handler(int a0);
void sub_4033ef(unsigned long a0);
void *thread_compute(void *a0);
void sub_403404(unsigned long a0);
unsigned int param_pthread_create(unsigned int a0);
void sub_403465();
unsigned int call_pthread_create();
void sub_4034c9(unsigned long a0);
void *thread_sum(void *arg);
void sub_403504();
unsigned int param_pthread_join();
void sub_403602();
int call_pthread_join();
void sub_403615(unsigned long a0);
void *thread_increment(void *arg);
void sub_40365f(unsigned long a0, unsigned long a1);
unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1);
void sub_40374c();
unsigned long long call_mutex_lock();
void sub_40375f();
unsigned int *consumer_thread(void *arg);
void sub_4037d5();
unsigned long long producer_thread(void *arg);
unsigned long long param_condition_variable();
void sub_4038b8();
unsigned long long call_condition_variable();
void sub_4038c5(unsigned long a0);
void *thread_atomic_increment(void *arg);
void sub_403983();
void *thread_atomic_load_store(void *arg);
void sub_4039a2(unsigned long a0, unsigned long a1);
unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1);
void sub_4039a2(unsigned long a0, unsigned long a1);
unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1);
void sub_403ab6();
unsigned long long call_atomic_ops();
void sub_403acf(unsigned long a0);
void *thread_tls_test(void *arg);
void sub_403b19(unsigned long a0);
unsigned long long param_thread_local_storage(unsigned int a0);
void sub_403cd8();
unsigned long long call_thread_local_storage();
void sub_403cea();
int test_thread_concurrency();
void sub_403ddd();
unsigned int main();




// Function: sub_402020 at 0x402020
// Define global variables
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
 return raise(1);
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
 param_strcpy("test", "data");
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
 call_strcpy();
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
 param_strcmp("test", "data");
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
 call_strcmp();
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
 call_strlen();
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
 char buf[10];
 param_memcpy(buf, "test", 4);
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
 call_memcpy();
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
 char buf1[10] = "test";
 char buf2[10] = "data";
 param_memcmp(buf1, buf2, 4);
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
 param_printf(42, (unsigned long)"Test");
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
 call_printf();
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
 param_scanf("123,456");
 return;
}


// Function: param_scanf at 0x4025e0
unsigned long long param_scanf(char *a0)
{
 int v0, v1;
 unsigned long v2; // rax
 unsigned long result; // [bp-0x8]

 result = v2;
 if (__isoc99_sscanf(a0, "%d,%d", &v0, &v1) != 2)
 return 4294967295;
 return (unsigned long long)v0 + v1;
}


// Function: sub_40260b at 0x40260b
void sub_40260b()
{
 call_scanf();
 return;
}


// Function: call_scanf at 0x402610
unsigned long long call_scanf()
{
 int v0, v1;

 if (__isoc99_sscanf("123,456", "%d,%d", &v0, &v1) != 2)
 return 4294967295;
 return (unsigned long long)v0 + v1;
}


// Function: sub_402642 at 0x402642
void sub_402642()
{
 param_fopen_fclose("/etc/passwd");
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


// Function: sub_40268e at 0x40268e
void sub_40268e()
{
 call_fopen_fclose();
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
 param_fread_fwrite("/tmp/test");
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
 call_fread_fwrite();
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
 param_malloc_free(10);
 return;
}


// Function: param_malloc_free at 0x4027d0
unsigned int param_malloc_free(unsigned long j)
{
 void* ptr; // rax
 unsigned int v14; // ebp
 unsigned long index; // rcx
 unsigned long v0; // [bp-0x18]

 ptr = malloc(j * 4);
 if (!ptr)
 return 4294967295;
 if (j)
 {
 index = 0;
 unsigned int v13 = 0;
 do
 {
 *((unsigned int *)((char *)ptr + 4 * index)) = v13;
 index += 1;
 v13 += 10;
 } while (j != index);
 v14 = *((int *)ptr);
 }
 else
 {
 v14 = 0;
 }
 free(ptr);
 return v14;
}


// Function: sub_402947 at 0x402947
void sub_402947()
{
 call_malloc_free();
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
 char buf[10];
 param_memset(buf, 0, 10);
 return;
}


// Function: param_memset at 0x402960
unsigned int param_memset(void* a0, int c, unsigned long n)
{
 unsigned long v1; // rax
 unsigned long long v2; // rbp

 memset(a0, c, n);
 if (!n)
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += *((unsigned char *)a0 + v1);
 v1 += 1;
 } while (n != v1);
 return (unsigned int)v2;
}


// Function: sub_402a97 at 0x402a97
void sub_402a97()
{
 call_memset();
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
 param_strchr_strstr("test string", 'e', "est");
 return;
}


// Function: param_strchr_strstr at 0x402ab0
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 char *ptr1; // rax
 char *ptr2; // rax

 ptr1 = strchr(a0, a1);
 ptr2 = strstr(a0, a2);
 return (-(ptr1 < (char*)1) | (unsigned int)((unsigned long long)ptr1 - (unsigned long long)a0)) + (-(ptr2 < (char*)1) | (unsigned int)((unsigned long long)ptr2 - (unsigned long long)a0));
}


// Function: sub_402ae9 at 0x402ae9
void sub_402ae9()
{
 call_strchr_strstr();
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
 test_standard_library_functions();
 return;
}


// Function: test_standard_library_functions at 0x402b00
// Define string constants
char g_404127[] = "strlen result: %d\n";
char g_404142[] = "strcmp result: %d\n";
char g_40415d[] = "call_strlen result: %d\n";
char g_404179[] = "call_memcpy result: %d\n";
char g_404195[] = "memcmp result: %d\n";
char g_4041b1[] = "call_printf result: %d\n";
char g_4041cd[] = "call_scanf result: %d\n";
char g_4041ea[] = "call_fopen_fclose result: %d\n";
char g_404206[] = "call_fread_fwrite result: %d\n";
char g_404222[] = "call_malloc_free result: %d\n";
char g_40423e[] = "call_memset result: %d\n";
char g_404259[] = "call_strchr_strstr result: %d\n";
char g_40441f[] = "Testing standard library functions";

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
 int scanf_v0, scanf_v1;
 printf(&g_4041cd, (__isoc99_sscanf("123,456", "%d,%d", &scanf_v0, &scanf_v1) != 2 ? 4294967295 : scanf_v0 + scanf_v1));
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
 param_linux_syscall(2);
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
 call_linux_syscall();
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

 v2 = stat("/etc/passwd", &v0);
 return (v2 >= 0 ? (0 < v0.st_size ? 42 : 4294967294) : 4294967295);
}


// Function: sub_402d56 at 0x402d56
void sub_402d56()
{
 call_win32_api();
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
void sub_402d9d(unsigned long a0, unsigned long a1)
{
 param_fork_exec("/bin/true", 0);
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
void sub_402e1e()
{
 call_fork_exec();
 return;
}


// Function: call_fork_exec at 0x402e20
unsigned long long call_fork_exec()
{
 unsigned int result; // eax
 unsigned int v0; // [bp-0xc]

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
void sub_402e8a()
{
 return;
}


// Function: param_pipe_communication at 0x402e90
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


// Function: sub_402f3c at 0x402f3c
void sub_402f3c()
{
 call_pipe_communication();
 return;
}


// Function: call_pipe_communication at 0x402f40
unsigned long long call_pipe_communication()
{
 return param_pipe_communication();
}


// Function: sub_402f45 at 0x402f45
void sub_402f45()
{
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
 v1.sin_port = 0;
 v1.sin_family = AF_INET;
 v1.sin_addr.s_addr = INADDR_ANY;
 if (bind(v5, (struct sockaddr *)&v1, sizeof(v1)) < 0)
 {
 close(v5);
 return 4294967293;
 }
 v6 = listen(v5, 5);
 close(v5);
 return (v6 < 0 ? 0xfffffffc : 42);
}


// Function: sub_403019 at 0x403019
void sub_403019()
{
 call_socket_create();
 return;
}


// Function: call_socket_create at 0x403020
unsigned long long call_socket_create()
{
 return param_socket_create();
}


// Function: sub_403025 at 0x403025
void sub_403025()
{
 return;
}


// Function: param_shmget_shmat at 0x403030
unsigned int param_shmget_shmat()
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 struct_0 *v4; // rax
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
 v4 = shmat(v3, 0, 0);
 if (v4 == 0xffffffffffffffff)
 return 4294967293;
 ptr = v4;
 *((unsigned long long *)((char *)&ptr->field_0 + 5)) = 34184295084281188;
 ptr->field_0 = 7299600957910902867;
 v6 = strlen((char *)ptr);
 shmdt(ptr);
 shmctl(v3, 0, 0);
 return v6;
}


// Function: sub_4030f1 at 0x4030f1
void sub_4030f1()
{
 call_shmget_shmat();
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
void sub_403117()
{
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

 if (signal(10, signal_handler) == SIG_ERR)
 {
 return 4294967295;
 }
 else if (signal(14, signal_handler) != SIG_ERR)
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
void sub_40324a(unsigned long a0)
{
 signal_handler(a0);
 return;
}


// Function: signal_handler at 0x403250
void signal_handler(int a0)
{
 signal_received = 1;
 signal_number = a0;
 return;
}


// Function: sub_403261 at 0x403261
void sub_403261()
{
 call_signal_handling();
 return;
}


// Function: call_signal_handling at 0x403270
unsigned long long call_signal_handling()
{
 return param_signal_handling();
}


// Function: sub_403275 at 0x403275
void sub_403275()
{
 test_system_calls();
 return;
}


// Function: test_system_calls at 0x403280
// Define string constants
char g_4042a8[] = "call_linux_syscall result: %d\n";
char g_4042c4[] = "call_win32_api result: %d\n";
char g_4042e0[] = "call_fork_exec result: %d\n";
char g_4042fc[] = "call_pipe_communication result: %d\n";
char g_404318[] = "call_socket_create result: %d\n";
char g_404334[] = "call_shmget_shmat result: %d\n";
char g_404350[] = "call_signal_handling result: %d\n";
char g_404443[] = "Testing system calls";

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
 else if (waitpid(result, v0, 0) < 0 || ((char)v0[0] & 127))
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


// Function: sub_4033ef at 0x4033ef
void sub_4033ef(unsigned long a0)
{
 unsigned int val = 7;
 thread_compute(&val);
 return;
}


// Function: thread_compute at 0x4033f0
void * thread_compute(void *a0)
{
 unsigned int *ptr; // rax
 unsigned int *arg = (unsigned int *)a0;

 ptr = malloc(4);
 *(ptr) = *(arg) * *(arg);
 return ptr;
}


// Function: sub_403404 at 0x403404
void sub_403404(unsigned long a0)
{
 param_pthread_create(7);
 return;
}


// Function: param_pthread_create at 0x403410
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int *v1; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]

 v0 = a0;
 if (!(int)pthread_create(&v2, 0, (void *(*)(void *))thread_compute, &v0))
 {
 pthread_join(v2, (void **)&v1);
 free(v1);
 return *(v1);
 }
 return 4294967295;
}


// Function: sub_403465 at 0x403465
void sub_403465()
{
 call_pthread_create();
 return;
}


// Function: call_pthread_create at 0x403470
unsigned int call_pthread_create()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int *v1; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]

 v0 = 7;
 if (!(int)pthread_create(&v2, 0, (void *(*)(void *))thread_compute, &v0))
 {
 pthread_join(v2, (void **)&v1);
 free(v1);
 return *(v1);
 }
 return 4294967295;
}


// Function: sub_4034c9 at 0x4034c9
void sub_4034c9(unsigned long a0)
{
 unsigned long long val[3] = {42949672961, 11, 128849018901};
 thread_sum(val);
 return;
}


// Function: thread_sum at 0x4034d0
void * thread_sum(void *arg)
{
 unsigned long long *ptr = (unsigned long long *)arg;
 unsigned int v1; // r8d
 unsigned long v2; // rdx
 unsigned int v3; // eax

 ((unsigned int *)ptr)[2] = 0;
 v1 = *(unsigned int *)ptr;
 v2 = ptr[1];
 v3 = v2;
 if (v3 >= v1)
 ((unsigned int *)ptr)[2] = (v3 - v1) * (v1 + 1) + v1 + (unsigned int)((v2 + ~(v1)) * (v3 - v1) >> 1);
 return 0;
}


// Function: sub_403504 at 0x403504
void sub_403504()
{
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
 pthread_t v8; // [bp-0x38]
 pthread_t v9; // [bp-0x30]
 pthread_t v10; // [bp-0x28]

 memset(&v1, 0, 36);
 v1 = 42949672961;
 v3 = 11;
 v4 = 20;
 v6 = 128849018901;
 if ((int)pthread_create(&v8, 0, thread_sum, (void *)&v1))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v9, 0, thread_sum, (void *)&v3))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v10, 0, thread_sum, (void *)&v6))
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
 return v5 + v2 + *((int *)&v7);
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_403602 at 0x403602
void sub_403602()
{
 call_pthread_join();
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
 unsigned int val = 1000;
 thread_increment(&val);
 return;
}


// Function: thread_increment at 0x403620
void * thread_increment(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int v3; // ebp
 unsigned int v4; // ebp
 unsigned int v5; // ebp

 v3 = *(ptr);
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
void sub_40365f(unsigned long a0, unsigned long a1)
{
 param_mutex_lock(4, 1000);
 return;
}


// Function: param_mutex_lock at 0x403660
unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int v4; // r14d
 pthread_t *ptr; // rax
 pthread_t *ptr2; // rbx
 unsigned long i; // r12
 unsigned long long v8; // r14
 unsigned long v9; // rbp
 unsigned long long v10; // rax
 unsigned int v0; // [bp-0x38], Other Possible Types: unsigned long
 unsigned int v1; // [bp-0x34]

 v4 = a0;
 v0 = a1;
 ptr = (pthread_t *)malloc(a0 * sizeof(pthread_t));
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
 if ((int)pthread_create(&ptr[v8 / sizeof(pthread_t)], 0, (void *(*)(void *))thread_increment, (void *)&v0))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v8 += sizeof(pthread_t), i * sizeof(pthread_t) != v8));
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


// Function: sub_40374c at 0x40374c
void sub_40374c()
{
 call_mutex_lock();
 return;
}


// Function: call_mutex_lock at 0x403750
unsigned long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_40375f at 0x40375f
void sub_40375f()
{
 consumer_thread(NULL);
 return;
}


// Function: consumer_thread at 0x403760
unsigned int * consumer_thread(void *arg)
{
 unsigned int *ptr; // rax

 pthread_mutex_lock(&cond_mutex);
 if (!i)
 {
 do
 {
 pthread_cond_wait(&cond, &cond_mutex);
 } while (i != 1);
 }
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = (!data ? 0 : 42);
 return ptr;
}


// Function: sub_4037d5 at 0x4037d5
void sub_4037d5()
{
 producer_thread(NULL);
 return;
}


// Function: producer_thread at 0x4037e0
unsigned long long producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: param_condition_variable at 0x403820
unsigned long long param_condition_variable()
{
 pthread_t v0; // [bp-0x20], Other Possible Types: unsigned long long
 unsigned int *v1; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]
 int dummy_arg = 0;

 ready = 0;
 data = 0;
 if ((int)pthread_create(&v0, 0, (void *(*)(void *))consumer_thread, (void *)&dummy_arg))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v2, 0, (void *(*)(void *))producer_thread, (void *)&dummy_arg))
 {
 pthread_cancel(v0);
 return 4294967294;
 }
 else
 {
 pthread_join(v0, (void **)&v1);
 pthread_join(v2, 0);
 free(v1);
 return *(v1);
 }
}


// Function: sub_4038b8 at 0x4038b8
void sub_4038b8()
{
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
 unsigned int val = 500;
 thread_atomic_increment(&val);
 return;
}


// Function: thread_atomic_increment at 0x4038d0
void * thread_atomic_increment(void *arg)
{
 unsigned int v1; // esi
 unsigned int result; // edx
 unsigned int i; // ecx

 v1 = *(unsigned int *)arg;
 if (v1 <= 0)
 return 0;
 result = v1 & 3;
 i = 0;
 if (v1 - 1 >= 3)
 {
 i = 0;
 do
 {
 __atomic_fetch_add(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 i += 4;
 } while (i != (v1 & 0xfffffffc));
 }
 if (!result)
 return 0;
 do
 {
 __atomic_fetch_add(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 i += 1;
 result -= 1;
 } while (result);
 return 0;
}


// Function: sub_403983 at 0x403983
void sub_403983()
{
 unsigned int val = 0;
 thread_atomic_load_store(&val);
 return;
}


// Function: thread_atomic_load_store at 0x403990
void * thread_atomic_load_store(void *arg)
{
 __atomic_exchange_n(&atomic_counter, atomic_counter + 100, __ATOMIC_SEQ_CST);
 return 0;
}


// Function: sub_4039a2 at 0x4039a2
void sub_4039a2(unsigned long a0, unsigned long a1)
{
 param_atomic_ops(4, 500);
 return;
}


// Function: param_atomic_ops at 0x4039b0
unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 pthread_t *ptr; // rax
 pthread_t *ptr2; // rbx
 unsigned long i; // r13
 unsigned long long v7; // r14
 unsigned long v8; // rbp
 unsigned int v0; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]
 pthread_t v2; // [bp-0x38]
 int dummy_arg = 0;

 v1 = a1;
 ptr = (pthread_t *)malloc(a0 * sizeof(pthread_t));
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 __atomic_exchange_n(&atomic_counter, 0, __ATOMIC_SEQ_CST);
 i = a0;
 if (a0 > 0)
 {
 v7 = 0;
 do
 {
 if ((int)pthread_create(&ptr[v7 / sizeof(pthread_t)], 0, (void *(*)(void *))thread_atomic_increment, (void *)&v1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v7 += sizeof(pthread_t), i * sizeof(pthread_t) != v7));
 }
 if (!(int)pthread_create(&v2, 0, (void *(*)(void *))thread_atomic_load_store, (void *)&dummy_arg))
 pthread_join(v2, 0);
 if (a0 > 0)
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


// Function: sub_403ab6 at 0x403ab6
void sub_403ab6()
{
 call_atomic_ops();
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
 unsigned int val = 0;
 thread_tls_test(&val);
 return;
}


// Function: thread_tls_test at 0x403ad0
void * thread_tls_test(void *arg)
{
 unsigned int v4;
 unsigned int v5;
 unsigned int *ptr;

 v4 = 0;
 v5 = v4 + 50;
 ptr = malloc(8);
 ptr[0] = v4;
 ptr[1] = v5;
 return ptr;
}


// Function: sub_403b19 at 0x403b19
void sub_403b19(unsigned long a0)
{
 param_thread_local_storage(4);
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
 char *ptr_str; // rax
 pthread_t *v10; // rbx
 unsigned long j; // r14
 unsigned long v12; // rbp
 unsigned int v13; // r15d
 unsigned int v0; // [bp-0x44]
 pthread_t *ptr3; // [bp-0x40]
 void *ptr_char; // [bp-0x38]

 v4 = a0 * sizeof(pthread_t);
 addr = (pthread_t *)malloc(v4);
 p = (char **)malloc(a0 * sizeof(char *));
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
 ptr_str = malloc(16);
 p[idx] = ptr_str;
 snprintf(ptr_str, 16, "Thread-%d", idx & 4294967295);
 idx += 1;
 } while (i != idx);
 if (a0 <= 0)
 goto LABEL_403c43;
 v10 = addr;
 j = 0;
 ptr3 = v10;
 do
 {
 if ((int)pthread_create(&v10[j], 0, (void *(*)(void *))thread_tls_test, (void *)p[j]))
 {
 v15 = 18446744073709551615;
 do
 {
 free(p[v15]);
 v15 += 1;
 } while (j != v15);
 free(p);
 free(ptr3);
 return 4294967294;
 }
 } while ((j += 1, v10 += 1, i != j));
 v0 = a0;
 if (a0 > 0)
 {
 v12 = 0;
 v13 = 0;
 v14 = 0;
 addr = ptr3;
 do
 {
 pthread_join(addr[v12], &ptr_char);
 v14 += *((int *)ptr_char);
 v13 += *((int *)(ptr_char) + 4);
 free(ptr_char);
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
void sub_403cd8()
{
 call_thread_local_storage();
 return;
}


// Function: call_thread_local_storage at 0x403ce0
unsigned long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: sub_403cea at 0x403cea
void sub_403cea()
{
 test_thread_concurrency();
 return;
}


// Function: test_thread_concurrency at 0x403cf0
// Define string constants
char g_404376[] = "call_pthread_create result: %d\n";
char g_404392[] = "call_pthread_join result: %d\n";
char g_4043af[] = "call_mutex_lock result: %d\n";
char g_4043cb[] = "call_condition_variable result: %d\n";
char g_4043e7[] = "call_atomic_ops result: %d\n";
char g_404403[] = "call_thread_local_storage result: %d\n";
char g_40445e[] = "Testing thread concurrency";

int test_thread_concurrency()
{
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x1c]
 unsigned int *ptr; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]

 puts(&g_40445e);
 v0 = 7;
 v4 = 4294967295;
 if (!(int)pthread_create(&v2, 0, (void *(*)(void *))thread_compute, &v0))
 {
 pthread_join(v2, (void **)&ptr);
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
void sub_403ddd()
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


