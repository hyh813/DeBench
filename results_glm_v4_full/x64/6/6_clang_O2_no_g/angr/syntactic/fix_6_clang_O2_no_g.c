// Angr Decompilation of 6_clang_O2_no_g
// Platform: AMD64

#define _POSIX_C_SOURCE 200809L
#define _DEFAULT_SOURCE
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <pthread.h>
#include <stdatomic.h>
#include <sys/syscall.h>
#include <fcntl.h>
#include <time.h>
#include <stdint.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stddef.h>
#include <sys/time.h>
#include <sys/syscall.h>

/* Ensure intptr_t is available */
#ifndef INTPTR_T_DEFINED
#define INTPTR_T_DEFINED
typedef long intptr_t;
typedef unsigned long uintptr_t;
#endif

/* Function declarations for POSIX functions */
int fileno(FILE *stream);
unsigned int alarm(unsigned int seconds);
int usleep(unsigned int usec);
unsigned int sleep(unsigned int seconds);
int snprintf(char *str, size_t size, const char *format, ...);
key_t ftok(const char *pathname, int proj_id);
void (*signal(int sig, void (*func)(int)))(int);
extern int errno;
void *shmat(int shmid, const void *shmaddr, int shmflg);
int shmdt(const void *shmaddr);
int shmctl(int shmid, int cmd, struct shmid_ds *buf);
char *strchr(const char *s, int c);
char *strstr(const char *haystack, const char *needle);
int pthread_cancel(pthread_t thread);
int raise(int sig);
int puts(const char *s);
int printf(const char *format, ...);
int sscanf(const char *str, const char *format, ...);
int fork(void);
int execl(const char *path, const char *arg, ...);
void _exit(int status);
pid_t waitpid(pid_t pid, int *status, int options);
int pipe(int pipefd[2]);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);
int close(int fd);
int stat(const char *pathname, struct stat *statbuf);
pid_t getpid(void);
int unlink(const char *pathname);
long syscall(long number, ...);
int open(const char *pathname, int flags, mode_t mode);
void rewind(FILE *stream);
int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
int listen(int sockfd, int backlog);
int socket(int domain, int type, int protocol);
int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
int pthread_join(pthread_t thread, void **retval);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int pthread_cond_signal(pthread_cond_t *cond);

/* Additional standard library function declarations */
FILE *fopen(const char *pathname, const char *mode);
int fclose(FILE *stream);
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
void *malloc(size_t size);
void free(void *ptr);
void *memcpy(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
size_t strlen(const char *s);
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t n);
int strcmp(const char *s1, const char *s2);
int memcmp(const void *s1, const void *s2, size_t n);
int sscanf(const char *str, const char *format, ...);
int printf(const char *format, ...);

/* fileno is available via _POSIX_C_SOURCE */

/* Global signal variables */
volatile int signal_received = 0;
unsigned int signal_number = 0;

/* Global mutex and counter */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int shared_counter = 0;

/* Global atomic counter */
_Atomic unsigned int atomic_counter = 0;

/* Condition variable ready flag */
volatile int ready = 0;

/* Forward declarations */
void signal_handler(int sig);

/* Function forward declarations */
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
long long param_strcpy(char *a0, char *a1);
long long call_strcpy(void);
unsigned long long param_strcmp(char *a0, char *a1);
unsigned long long call_strcmp(void);
long long param_strlen(void);
unsigned long long call_strlen(void);
int param_memcpy(void* a0, void* a1, unsigned long n);
unsigned long long call_memcpy(void);
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2);
unsigned long long call_memcmp(void);
int param_printf(unsigned int a0, unsigned long a1);
int call_printf(void);
unsigned long long param_scanf(char *a0);
unsigned long long call_scanf(void);
unsigned long long param_fopen_fclose(char *a0);
unsigned int call_fopen_fclose(void);
unsigned long long param_fread_fwrite(char *a0);
unsigned long long call_fread_fwrite(void);
unsigned int param_malloc_free(unsigned long j);
unsigned long long call_malloc_free(void);
unsigned int param_memset(void* a0, unsigned long n);
unsigned long long call_memset(void);
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2);
unsigned long long call_strchr_strstr(void);
int test_standard_library_functions(void);
unsigned int param_linux_syscall(unsigned long a0);
unsigned int call_linux_syscall(void);
unsigned long long param_win32_api(void);
unsigned long long call_win32_api(void);
unsigned long long param_fork_exec(char *a0, unsigned long a1);
unsigned int call_fork_exec(void);
unsigned long long param_pipe_communication(void);
unsigned long long call_pipe_communication(void);
unsigned long long param_socket_create(void);
unsigned long long call_socket_create(void);
unsigned int param_shmget_shmat(void);
unsigned int call_shmget_shmat(void);
unsigned long long param_signal_handling(void);
unsigned long long call_signal_handling(void);
int test_system_calls(void);
void *thread_compute(void *a0);
unsigned int param_pthread_create(unsigned int a0);
unsigned int call_pthread_create(void);
void *thread_sum(void *arg);
unsigned int param_pthread_join(void);
int call_pthread_join(void);
void *thread_increment(void *ptr);
unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1);
unsigned long long call_mutex_lock(void);
void *consumer_thread(void *arg);
void *producer_thread(void *arg);
unsigned int param_condition_variable(void);
int call_condition_variable(void);
void *thread_atomic_increment(void *arg);
void *thread_atomic_load_store(void *arg);
unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1);
unsigned long long call_atomic_ops(void);
void *thread_tls_test(void *arg);
unsigned long long param_thread_local_storage(unsigned int a0);
unsigned long long call_thread_local_storage(void);
int test_thread_concurrency(void);
int main(void);

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 struct_0;

struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_5;
};

struct_0 *g_406fe0;

unsigned long long * _init()
{
 return (unsigned long long *)g_406fe0;
}


// Function: sub_402020 at 0x402020
unsigned long long g_407008;
unsigned long long g_407010;

void sub_402020()
{
 /* stub function */
 return;
}


// Function: sub_40202c at 0x40202c
int sub_40202c()
{
 unsigned int v1 = 0; // edi

 return raise(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4023e5 at 0x4023e5
void sub_4023e5()
{
 __builtin_trap();
}


// Function: sub_4023e6 at 0x4023e6
void sub_4023e6()
{
 deregister_tm_clones();
 return;
}



void deregister_tm_clones() { }

/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_402419 at 0x402419
void sub_402419()
{
 register_tm_clones();
 return;
}



void register_tm_clones() { }

/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402459 at 0x402459
void sub_402459()
{
 __do_global_dtors_aux();
 return;
}



void __do_global_dtors_aux() { }

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



void frame_dummy() { }

/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_4024a9 at 0x4024a9
void sub_4024a9(unsigned long a0)
{
 param_strcpy();
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
 param_strcmp();
 return;
}


// Function: param_strcmp at 0x402500
unsigned long long param_strcmp(char *a0, char *a1)
{
 unsigned long long v2 = 0; // rax
 unsigned int v3; // eax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
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
 param_strlen();
 return;
}


// Function: param_strlen at 0x402530
long long param_strlen()
{
 char *v1 = ""; // rdi

 return strlen(v1);
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
 param_memcpy();
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
 param_memcmp();
 return;
}


// Function: param_memcmp at 0x402570
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned long long v2 = 0; // rax
 unsigned int v3; // eax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
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
 param_printf();
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
 param_scanf();
 return;
}


// Function: param_scanf at 0x4025e0
unsigned long long param_scanf(char *a0)
{
 unsigned long v2; // rax
 unsigned long v0; // [bp-0x8]
 int v0_part1, v0_part2;

 v0 = v2;
 if (sscanf(a0, "%d,%d", &v0_part1, &v0_part2) != 2)
 return 4294967295;
 return v0_part1 + v0_part2;
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
 int v0_part1, v0_part2;

 if (sscanf("123,456", "%d,%d", &v0_part1, &v0_part2) != 2)
 return 4294967295;
 return v0_part1 + v0_part2;
}


// Function: sub_402642 at 0x402642
void sub_402642()
{
 param_fopen_fclose();
 return;
}


// Function: param_fopen_fclose at 0x402650
unsigned long long param_fopen_fclose(char *a0)
{
 FILE *fp; // rax
 int v4; // eax

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
 call_fopen_fclose();
 return;
}


// Function: call_fopen_fclose at 0x402690
unsigned int call_fopen_fclose()
{
 FILE* fp; // rax
 int v4; // eax

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
 if (v0[1] == 'i')
 v6 = 42;
 else
 v6 = 4294967293;
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
 param_malloc_free(a0);
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
 unsigned long long v0; // [bp-0x18]

 v0 = 0;
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
 v8 = 0x3000000020000000100000000;
 idx = 0;
 do
 {
 v10 = (unsigned long long)idx * 10;
 *((unsigned int *)((char *)ptr + 4 * idx)) = (unsigned int)v10;
 *((unsigned int *)((char *)ptr + 4 * (idx + 4))) = (unsigned int)(v10 + 10);
 *((unsigned int *)((char *)ptr + 4 * (idx + 8))) = (unsigned int)(v10 + 20);
 *((unsigned int *)((char *)ptr + 4 * (idx + 12))) = (unsigned int)(v10 + 30);
 idx += 16;
 v8 += 0x440000000000000;
 i -= 2;
 } while (i != 2);
 v12 = (unsigned long long)idx * 10;
 if (((char)v6 & 1))
 goto LABEL_4028e8;
 }
 else
 {
 v12 = 0;
 idx = 0;
 if (((char)v6 & 1))
 {
LABEL_4028e8:
 *((unsigned int *)((char *)ptr + 4 * idx)) = (unsigned int)v12;
 *((unsigned int *)((char *)ptr + 4 * (idx + 4))) = (unsigned int)(v12 + 10);
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
 v7 += *((int *)((char *)a0 + v6 + 8)) + *((int *)((char *)a0 + v6));
 v8 += *((int *)((char *)a0 + v6 + 12)) + *((int *)((char *)a0 + v6 + 4));
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
 v7 += *((int *)((char *)a0 + v6));
 v8 += *((int *)((char *)a0 + v6 + 4));
 }
 }
 v10 = v7 + v8;
 v2 = v10;
 if (v1 == n)
 return v2;
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
 param_strchr_strstr((char *)a0, (unsigned int)a1, (char *)a2);
 return;
}


// Function: param_strchr_strstr at 0x402ab0
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 char *ptr1;
 char *ptr2;

 ptr1 = strchr(a0, a1);
 ptr2 = strstr(a0, a2);
 return ((ptr1 ? (unsigned long long)(ptr1 - a0) : -1ULL) + (ptr2 ? (unsigned long long)(ptr2 - a0) : -1ULL));
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
char g_404127[] = "strcpy: %ld\n";
char g_404142[] = "strcmp: %ld\n";
char g_40415d[] = "strlen: %ld\n";
char g_404179[] = "memcpy: %ld\n";
char g_404195[] = "memcmp: %ld\n";
char g_4041b1[] = "printf: %ld\n";
char g_4041cd[] = "scanf: %ld\n";
char g_4041ea[] = "fopen: %ld\n";
char g_404206[] = "fread: %ld\n";
char g_404222[] = "malloc: %ld\n";
char g_40423e[] = "memset: %ld\n";
char g_404259[] = "strchr/strstr: %ld\n";
char g_40441f[] = "=== Standard Library Tests ===";

int test_standard_library_functions()
{
 unsigned int v5; // ebp
 void* fp; // rax
 unsigned int v9; // eax
 int v0_part1, v0_part2;
 char v1[8]; // [bp-0x38]
 char result; // [bp-0x30]

 puts(g_40441f);
 strncpy(v1, "HelloLib", 8);
 result = 0;
 printf(g_404127, strlen(&v1) & 4294967295);
 printf(g_404142, 0);
 printf(g_40415d, 12);
 printf(g_404179, 90);
 v5 = 4294967295;
 printf(g_404195, 4294967295);
 printf(g_4041b1, printf("Value: %d, Name: %s\n", 42, "Test") & 4294967295);
 printf(g_4041cd, (sscanf("123,456", "%d,%d", &v0_part1, &v0_part2) != 2 ? 4294967295 : v0_part1 + v0_part2));
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 v9 = fileno(fp);
 fclose(fp);
 v5 = v9 >> 31 | 42;
 }
 printf(g_4041ea, v5);
 printf(g_404206, param_fread_fwrite("/tmp/binbench_test_tmp") & 4294967295);
 printf(g_404222, 90);
 printf(g_40423e, 0);
 return printf(g_404259, 15);
}


// Function: sub_402c8f at 0x402c8f
void sub_402c8f(unsigned long a0)
{
 param_linux_syscall(a0);
 return;
}


// Function: param_linux_syscall at 0x402c90
unsigned int param_linux_syscall(unsigned long a0)
{
 unsigned long long v2 = 0; // rax
 unsigned int v3; // ebx
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v3 = syscall(2);
 if (v3 < 0)
 return -(errno);
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
 unsigned long long v2 = 0; // rax
 unsigned int v3; // ebx
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v3 = syscall(2);
 if (v3 >= 0)
 syscall(3);
 else
 v3 = -(errno);
 return v3 >> 31 | 42;
}


// Function: sub_402d19 at 0x402d19
void sub_402d19()
{
 param_win32_api();
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
 struct stat v0; // [bp-0x90]

 v3 = stat("/etc/passwd", &v0);
 return (v3 >= 0 ? (0 < v0.st_size ? 42 : 4294967294) : 4294967295);
}


// Function: sub_402d9d at 0x402d9d
void sub_402d9d(unsigned long a0, unsigned long a1)
{
 param_fork_exec((char *)a0, a1);
 return;
}


// Function: param_fork_exec at 0x402da0
unsigned long long param_fork_exec(char *a0, unsigned long a1)
{
 unsigned long v2 = 0; // rax
 unsigned int result; // eax
 unsigned long v0; // [bp-0x18]

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
 call_fork_exec();
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
 else if (!((char)v0 & 127))
 {
 return -(0 < (v0 & 0xff00)) | 42;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_402e72 at 0x402e72
void sub_402e72()
{
 param_pipe_communication();
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
 call_pipe_communication();
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
 param_socket_create();
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
 struct sockaddr_in v1;

 v4 = socket(2, 1, 0);
 if (v4 < 0)
 return 4294967295;
 v5 = v4;
 result = 1;
 if (setsockopt(v4, 1, 2, &result, (socklen_t)4) < 0)
 {
 close(v5);
 return 4294967294;
 }
 memset(&v1, 0, sizeof(v1));
 v1.sin_family = 2;
 if (bind(v5, (struct sockaddr *)&v1, (socklen_t)16) < 0)
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
 call_socket_create();
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
 param_shmget_shmat();
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
 v6 = strlen(ptr);
 shmdt(ptr);
 shmctl(v3, 0, 0);
 return v6;
}


// Function: sub_4030d1 at 0x4030d1
void sub_4030d1()
{
 call_shmget_shmat();
 return;
}


// Function: call_shmget_shmat at 0x4030e0
unsigned int call_shmget_shmat()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 if (param_shmget_shmat() <= 0)
 return 4294967295;
 return 42;
}


// Function: sub_4030f7 at 0x4030f7
void sub_4030f7()
{
 param_signal_handling();
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


// Function: sub_40322a at 0x40322a
void sub_40322a(unsigned long a0)
{
 signal_handler(a0);
 return;
}


// Function: signal_handler at 0x403230

void signal_handler(int a0)
{
 signal_received = 1;
 signal_number = a0;
 return;
}


// Function: sub_403241 at 0x403241
void sub_403241()
{
 call_signal_handling();
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
 test_system_calls();
 return;
}


// Function: test_system_calls at 0x403260
char g_4042a8[] = "syscall: %ld\n";
char g_4042c4[] = "stat: %ld\n";
char g_4042e0[] = "fork: %ld\n";
char g_4042fc[] = "pipe: %ld\n";
char g_404318[] = "socket: %ld\n";
char g_404334[] = "shm: %ld\n";
char g_404350[] = "signal: %ld\n";
char g_404443[] = "=== System Call Tests ===";

int test_system_calls()
{
 unsigned int v3; // ebx
 unsigned int v4; // eax
 unsigned int result; // eax
 unsigned long long v6; // rsi
 struct stat v0; // [bp-0xa0]

 puts(g_404443);
 v3 = syscall(2);
 if (v3 >= 0)
 syscall(3);
 else
 v3 = -errno;
 printf(g_4042a8, v3 >> 31 | 42);
 v4 = stat("/etc/passwd", &v0);
 printf(g_4042c4, (v4 < 0 ? 4294967295 : (0 < v0.st_size ? 42 : 4294967294)));
 result = fork();
 v6 = 4294967295;
 if (result >= 0)
 {
 int status;
 if (!result)
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (waitpid(result, &status, 0) < 0 || ((char)status & 127))
 {
 v6 = 4294967295;
 }
 else
 {
 v6 = -(0 < (status & 0xff00)) | 42;
 }
 }
 printf(g_4042e0, v6);
 printf(g_4042fc, param_pipe_communication() & 4294967295);
 printf(g_404318, param_socket_create() & 4294967295);
 printf(g_404334, (param_shmget_shmat() > 0 ? 42 : 4294967295));
 return printf(g_404350, param_signal_handling() & 4294967295);
}


// Function: sub_4033cf at 0x4033cf
void sub_4033cf()
{
 thread_compute();
 return;
}


// Function: thread_compute at 0x4033d0
void * thread_compute(void *a0)
{
 unsigned int *ptr; // rax
 unsigned int *input = (unsigned int *)a0;

 if (!input) return NULL;
 ptr = malloc(4);
 if (ptr) *(ptr) = *(input) * *(input);
 return ptr;
}


// Function: sub_4033e4 at 0x4033e4
void sub_4033e4()
{
 param_pthread_create();
 return;
}


// Function: param_pthread_create at 0x4033f0
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 void *v1; // [bp-0x18]
 pthread_t v2; // [bp-0x10]

 v0 = a0;
 if ((int)pthread_create(&v2, 0, thread_compute, &v0))
 return 4294967295;
 pthread_join(v2, &v1);
 if (v1) {
 unsigned int result = *(unsigned int *)v1;
 free(v1);
 return result;
 }
 return 4294967295;
}


// Function: sub_40343d at 0x40343d
void sub_40343d()
{
 call_pthread_create();
 return;
}


// Function: call_pthread_create at 0x403440
unsigned int call_pthread_create()
{
 unsigned int v0; // [bp-0x1c]
 void *v1; // [bp-0x18]
 pthread_t v2; // [bp-0x10]

 v0 = 7;
 if ((int)pthread_create(&v2, 0, thread_compute, &v0))
 return 4294967295;
 pthread_join(v2, &v1);
 if (v1) {
 unsigned int result = *(unsigned int *)v1;
 free(v1);
 return result;
 }
 return 4294967295;
}


// Function: sub_403491 at 0x403491
void sub_403491(unsigned long a0)
{
 thread_sum((void *)a0);
 return;
}


// Function: thread_sum at 0x4034a0
void * thread_sum(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int v1; // r8d
 unsigned long v2; // rdx
 unsigned int v3; // eax

 ptr[2] = 0;
 v1 = *(ptr);
 v2 = ptr[1];
 v3 = v2;
 if (v3 >= v1)
 ptr[2] = (v3 - v1) * (v1 + 1) + v1 + (unsigned int)((v2 + ~(v1)) * (v3 - v1) >> 1);
 return NULL;
}


// Function: sub_4034d4 at 0x4034d4
void sub_4034d4()
{
 param_pthread_join();
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
 char v7; // [bp-0x48]
 pthread_t v8; // [bp-0x38]
 pthread_t v9; // [bp-0x30]
 pthread_t v10; // [bp-0x28]

 memset(&v1, 0, 36);
 v1 = 42949672961;
 v3 = 11;
 v4 = 20;
 v6 = 128849018901;
 if ((int)pthread_create(&v8, 0, (void *(*)(void *))thread_sum, &v1))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v9, 0, (void *(*)(void *))thread_sum, &v3))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v10, 0, (void *(*)(void *))thread_sum, &v6))
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


// Function: sub_4035d2 at 0x4035d2
void sub_4035d2()
{
 call_pthread_join();
 return;
}


// Function: call_pthread_join at 0x4035e0
int call_pthread_join()
{
 return param_pthread_join();
}


// Function: sub_4035e5 at 0x4035e5
void sub_4035e5()
{
 thread_increment();
 return;
}


// Function: thread_increment at 0x4035f0

void * thread_increment(void *ptr)
{
 unsigned long long v2; // rax
 unsigned int v3; // ebp
 unsigned int v4; // ebp
 unsigned int v5; // ebp
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v3 = *(unsigned int *)ptr;
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
void sub_40362f()
{
 param_mutex_lock();
 return;
}


// Function: param_mutex_lock at 0x403630

unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int v4; // r14d
 void* thread_ptr; // rax
 void* thread_ptrs; // rbx
 unsigned long i; // r12
 unsigned long long v8; // r14
 unsigned long v9; // rbp
 unsigned long long v10; // rax
 unsigned int v0; // [bp-0x38], Other Possible Types: unsigned long
 unsigned int v1; // [bp-0x34]

 v4 = a0;
 v0 = a1;
 thread_ptrs = malloc(a0 * 8);
 if (!thread_ptrs)
 return 4294967295;
 thread_ptr = thread_ptrs;
 shared_counter = 0;
 if (v4 > 0)
 {
 v1 = v4;
 i = v4;
 v8 = 0;
 do
 {
 if ((int)pthread_create((pthread_t *)((char *)thread_ptrs + v8), 0, (void *(*)(void *))thread_increment, &v0))
 {
 free(thread_ptrs);
 return 4294967294;
 }
 } while ((v8 += 8, i * 8 != v8));
 v4 = v1;
 if (v4 > 0)
 {
 v9 = 0;
 do
 {
 pthread_join(*((pthread_t *)((char *)thread_ptrs + 8 * v9)), 0);
 v9 += 1;
 } while (i != v9);
 }
 }
 free(thread_ptrs);
 if (shared_counter == v0 * v4)
 v10 = 42;
 else
 v10 = 4294967293;
 return v10;
}


// Function: sub_40371c at 0x40371c
void sub_40371c()
{
 call_mutex_lock();
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
 consumer_thread();
 return;
}


// Function: consumer_thread at 0x403730
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
char data = 0;
unsigned char i = 0;

void * consumer_thread(void *arg)
{
 unsigned long long v2; // rax
 unsigned int *ptr; // rax
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
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


// Function: sub_4037a5 at 0x4037a5
void sub_4037a5()
{
 producer_thread();
 return;
}


// Function: producer_thread at 0x4037b0

void * producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: param_condition_variable at 0x4037f0

unsigned int param_condition_variable()
{
 pthread_t v0; // [bp-0x20]
 void *v1; // [bp-0x18]
 pthread_t v2; // [bp-0x10]

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
 pthread_join(v0, &v1);
 pthread_join(v2, 0);
 free(v1);
 return *(unsigned int *)v1;
 }
}


// Function: sub_40387a at 0x40387a
void sub_40387a()
{
 call_condition_variable();
 return;
}


// Function: call_condition_variable at 0x403880
int call_condition_variable()
{
 return param_condition_variable();
}


// Function: sub_403885 at 0x403885
void sub_403885()
{
 thread_atomic_increment();
 return;
}


// Function: thread_atomic_increment at 0x403890

void * thread_atomic_increment(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int v1; // esi
 unsigned int result; // edx
 unsigned int i; // ecx

 v1 = (ptr ? *(ptr) : 0);
 if (v1 <= 0)
 return NULL;
 result = v1 & 3;
 i = 0;
 if (v1 - 1 >= 3)
 {
 i = 0;
 do
 {
 atomic_fetch_add_explicit(&atomic_counter, 1, memory_order_relaxed);
 unsigned int expected = i + 1000;
 atomic_compare_exchange_strong_explicit(&atomic_counter, &expected, i, memory_order_relaxed, memory_order_relaxed);
 atomic_fetch_add_explicit(&atomic_counter, 1, memory_order_relaxed);
 expected = i + 1001;
 atomic_compare_exchange_strong_explicit(&atomic_counter, &expected, i + 1, memory_order_relaxed, memory_order_relaxed);
 atomic_fetch_add_explicit(&atomic_counter, 1, memory_order_relaxed);
 expected = i + 1002;
 atomic_compare_exchange_strong_explicit(&atomic_counter, &expected, i + 2, memory_order_relaxed, memory_order_relaxed);
 atomic_fetch_add_explicit(&atomic_counter, 1, memory_order_relaxed);
 expected = i + 1003;
 atomic_compare_exchange_strong_explicit(&atomic_counter, &expected, i + 3, memory_order_relaxed, memory_order_relaxed);
 i += 4;
 } while (i != (v1 & 0xfffffffc));
 }
 if (!result)
 return NULL;
 do
 {
 atomic_fetch_add_explicit(&atomic_counter, 1, memory_order_relaxed);
 unsigned int expected = i + 1000;
 atomic_compare_exchange_strong_explicit(&atomic_counter, &expected, i, memory_order_relaxed, memory_order_relaxed);
 i += 1;
 result -= 1;
 } while (result + 4294967295);
 return NULL;
}


// Function: sub_403943 at 0x403943
void sub_403943()
{
 thread_atomic_load_store();
 return;
}


// Function: thread_atomic_load_store at 0x403950

void * thread_atomic_load_store(void *arg)
{
 atomic_exchange_explicit(&atomic_counter, atomic_counter + 100, memory_order_relaxed);
 return 0;
}


// Function: sub_403962 at 0x403962
void sub_403962()
{
 param_atomic_ops();
 return;
}


// Function: param_atomic_ops at 0x403970

unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 void* thread_ptr; // rax
 void* thread_ptrs; // rbx
 unsigned long i; // r13
 unsigned long long v7; // r14
 unsigned long v8; // rbp
 unsigned int v0; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]
 pthread_t v2; // [bp-0x38]

 v1 = a1;
 thread_ptrs = malloc(a0 * 8);
 if (!thread_ptrs)
 return 4294967295;
 thread_ptr = thread_ptrs;
 atomic_exchange_explicit(&atomic_counter, 0, memory_order_relaxed);
 i = a0;
 if (a0 > 0)
 {
 v7 = 0;
 do
 {
 if ((int)pthread_create((pthread_t *)((char *)thread_ptrs + v7), 0, thread_atomic_increment, &v1))
 {
 free(thread_ptrs);
 return 4294967294;
 }
 } while ((v7 += 8, i * 8 != v7));
 }
 if (!(int)pthread_create(&v2, 0, thread_atomic_load_store, 0))
 pthread_join(v2, 0);
 if (a0 > 0)
 {
 v8 = 0;
 do
 {
 pthread_join(*((pthread_t *)((char *)thread_ptrs + 8 * v8)), 0);
 v8 += 1;
 } while (i != v8);
 }
 free(thread_ptrs);
 return (atomic_counter > 0 ? 42 : 4294967293);
}


// Function: sub_403a76 at 0x403a76
void sub_403a76()
{
 call_atomic_ops();
 return;
}


// Function: call_atomic_ops at 0x403a80
unsigned long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


// Function: sub_403a8f at 0x403a8f
void sub_403a8f()
{
 thread_tls_test();
 return;
}


// Function: thread_tls_test at 0x403a90
static __thread unsigned int tls_counter = 0;
static __thread char tls_buffer[32];

void * thread_tls_test(void *arg)
{
 char *a0 = (char *)arg;
 unsigned long long v2; // rax
 unsigned int v4; // ebx
 unsigned int v5; // ebp
 unsigned int *ptr; // rax
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v4 = tls_counter;
 v5 = v4 + 50;
 tls_counter = v5;
 strncpy(tls_buffer, a0, 31);
 ptr = malloc(2 * sizeof(unsigned int));
 if (ptr)
 {
 ptr[0] = v4;
 ptr[1] = v5;
 }
 return ptr;
}


// Function: sub_403ad9 at 0x403ad9
void sub_403ad9()
{
 param_thread_local_storage();
 return;
}


// Function: param_thread_local_storage at 0x403ae0
unsigned long long param_thread_local_storage(unsigned int a0)
{
 unsigned long long v4; // rbx
 pthread_t* addr; // r14
 unsigned int v14; // ebx
 unsigned long long v15; // r15
 unsigned long long v16; // rax
 void* p; // r13
 unsigned long i; // r12
 unsigned long idx; // rbx
 char *ptr; // rax
 pthread_t* v10; // rbx
 unsigned long j; // r14
 unsigned long v12; // rbp
 unsigned int v13; // r15d
 unsigned int v0; // [bp-0x44]
 pthread_t* ptr3; // [bp-0x40]
 void* thread_result; // [bp-0x38]

 v0 = a0;
 v4 = a0 * 8;
 addr = (pthread_t*)malloc(v4);
 p = malloc(v4);
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
 ptr = malloc(16);
 *((char **)((char *)p + 8 * idx)) = ptr;
 snprintf(ptr, 16, "Thread-%d", idx & 4294967295);
 idx += 1;
 } while (i != idx);
 if (a0 <= 0)
 goto LABEL_403c03;
 v10 = addr;
 j = 0;
 ptr3 = v10;
 do
 {
 if ((int)pthread_create(v10, 0, thread_tls_test, (void*)(intptr_t)*((long long *)((char *)p + 8 * j))))
 {
 v15 = 18446744073709551615;
 do
 {
 free((void*)*((long long *)((char *)p + 8 * v15 + 8)));
 v15 += 1;
 } while (j != v15);
 free(p);
 free(ptr3);
 return 4294967294;
 }
 } while ((j += 1, v10 += 8, i != j));
 v0 = a0;
 if (a0 > 0)
 {
 v12 = 0;
 v13 = 0;
 v14 = 0;
 addr = ptr3;
 do
 {
 pthread_join(addr[v12], &thread_result);
 {
 unsigned int *res = (unsigned int *)thread_result;
 v14 += res[0];
 v13 += res[1];
 free(res);
 }
 free(*((char **)((char *)p + 8 * v12)));
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
 free(addr);
 return 4294967295;
 }
}


// Function: sub_403c98 at 0x403c98
void sub_403c98()
{
 call_thread_local_storage();
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
 test_thread_concurrency();
 return;
}


// Function: test_thread_concurrency at 0x403cb0
char g_404376[] = "pthread_create: %ld\n";
char g_404392[] = "pthread_join: %ld\n";
char g_4043af[] = "mutex: %ld\n";
char g_4043cb[] = "condition: %ld\n";
char g_4043e7[] = "atomic: %ld\n";
char g_404403[] = "tls: %ld\n";
char g_40445e[] = "=== Thread Concurrency Tests ===";

int test_thread_concurrency()
{
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x1c]
 unsigned int *ptr; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]

 puts(g_40445e);
 v0 = 7;
 v4 = 4294967295;
 if (!(int)pthread_create(&v2, 0, thread_compute, &v0))
 {
 pthread_join(v2, &ptr);
 v4 = *(ptr);
 free(ptr);
 }
 printf(g_404376, v4);
 printf(g_404392, param_pthread_join() & 4294967295);
 printf(g_4043af, param_mutex_lock(4, 1000) & 4294967295);
 printf(g_4043cb, param_condition_variable() & 4294967295);
 printf(g_4043e7, param_atomic_ops(4, 500) & 4294967295);
 return printf(g_404403, param_thread_local_storage(4) & 4294967295);
}


// Function: sub_403d9d at 0x403d9d
void sub_403d9d()
{
 main();
 return;
}


// Function: main at 0x403da0
int main()
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


