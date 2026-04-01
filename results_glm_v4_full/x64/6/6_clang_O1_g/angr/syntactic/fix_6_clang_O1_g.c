// Angr Decompilation of 6_clang_O1_g
// Platform: AMD64

#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/syscall.h>
#include <pthread.h>
#include <fcntl.h>
#include <time.h>
#include <sys/mman.h>
#include <stdarg.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdatomic.h>

/* Type definitions */
typedef void (*sighandler_t)(int);

typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_5;
} struct_0;

/* Additional POSIX function declarations that might not be in all headers */
key_t ftok(const char *pathname, int proj_id);
int shmctl(int shmid, int cmd, struct shmid_ds *buf);

/* Additional system and libc function declarations */
int __isoc99_sscanf(const char *str, const char *format, ...);
int *__errno_location(void);
long int syscall(long number, ...);
int recv(int sockfd, void *buf, size_t len, int flags);
int send(int sockfd, const void *buf, size_t len, int flags);
int fileno(FILE *stream);
void rewind(FILE *stream);
int pthread_cancel(pthread_t thread);

/* Process functions */
pid_t fork(void);
int execl(const char *path, const char *arg, ...);
void _exit(int status);
pid_t waitpid(pid_t pid, int *status, int options);
int pipe(int pipefd[2]);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);
unsigned int sleep(unsigned int seconds);
int usleep(useconds_t usec);
int unlink(const char *pathname);

/* Shared memory functions */
void *shmat(int shmid, const void *shmaddr, int shmflg);
int shmdt(const void *shmaddr);

/* Signal functions */
sighandler_t signal(int signum, sighandler_t handler);
int raise(int sig);
unsigned int alarm(unsigned int seconds);
int kill(pid_t pid, int sig);

/* File operations */
int fsync(int fd);

/* Memory functions */
void *malloc(size_t size);
void free(void *ptr);
int close(int fd);

/* CRT stub function _init removed by preprocessor */

extern void *g_406fe0;

/* Stub functions for missing CRT functions */
void deregister_tm_clones() {}
void register_tm_clones() {}
void __do_global_dtors_aux() {}
void frame_dummy() {}

/* Stub functions for missing atomic operations */
int atomic_fetch_add(unsigned int *ptr) { unsigned int old = *ptr; (*ptr)++; return old; }
_Bool atomic_compare_exchange(unsigned int *ptr, unsigned int *expected_ptr, unsigned int desired) { if (*ptr == *expected_ptr) { *ptr = desired; return 1; } return 0; }
int atomic_exchange(unsigned int *ptr, unsigned int val) { unsigned int old = *ptr; *ptr = val; return old; }

/* Stub for missing snprintf */
int snprintf(char *str, size_t size, const char *format, ...)
{
 va_list args;
 int result;
 va_start(args, format);
 result = vsnprintf(str, size, format, args);
 va_end(args);
 return result;
}

/* Thread synchronization global variables */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
unsigned int shared_counter = 0;
unsigned int atomic_counter = 0;
unsigned int signal_number = 0;
unsigned int signal_received = 0;
char data = 0;
char ready = 0;
char i = 0;

/* Forward declarations for signal handler */
void signal_handler(int a0);

/* Global format strings */
char g_4040b7[] = "strlen result: %u\n";
char g_4040d2[] = "strcmp result: %u\n";
char g_4040ed[] = "strlen call result: %u\n";
char g_404109[] = "memcpy result: %u\n";
char g_404125[] = "memcmp result: %u\n";
char g_404141[] = "printf result: %u\n";
char g_40415d[] = "scanf result: %u\n";
char g_40417a[] = "fopen result: %u\n";
char g_404196[] = "fread_fwrite result: %u\n";
char g_4041b2[] = "malloc_free result: %u\n";
char g_4041ce[] = "memset result: %d\n";
char g_4041e9[] = "strchr_strstr result: %u\n";
char g_4043af[] = "=== Testing Standard Library Functions ===\n";
char g_404238[] = "syscall result: %u\n";
char g_404254[] = "win32_api result: %u\n";
char g_404270[] = "fork_exec result: %u\n";
char g_40428c[] = "pipe result: %u\n";
char g_4042a8[] = "socket result: %u\n";
char g_4042c4[] = "shmget_shmat result: %u\n";
char g_4042e0[] = "signal result: %u\n";
char g_4043d3[] = "=== Testing System Calls ===\n";
char g_404306[] = "thread_compute result: %u\n";
char g_404322[] = "pthread_join result: %u\n";
char g_40433f[] = "mutex_lock result: %u\n";
char g_40435b[] = "condition_variable result: %u\n";
char g_404377[] = "atomic_ops result: %u\n";
char g_404393[] = "thread_local_storage result: %u\n";
char g_4043ee[] = "=== Testing Thread Concurrency ===\n";

unsigned long long g_407008 = 0;
unsigned long long g_407010 = 0;
void *g_406fe0 = NULL;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_406fe0;
 if (g_406fe0)
 v1 = g_406fe0();
 return v1;
}


// Function: sub_402020 at 0x402020
void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_407008;
 /* Invalid goto removed - function pointer call cannot be represented in C */
}


// Function: sub_40202c at 0x40202c
int sub_40202c()
{
 unsigned int v1; // edi

 return raise(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4023e5 at 0x4023e5
void sub_4023e5()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4203493 */
 __builtin_trap();
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
 char buf1[16], buf2[16];
 param_strcpy(buf1, buf2);
 return;
}


// Function: param_strcpy at 0x4024b0
long long param_strcpy(char *a0, char *a1)
{
 strcpy(a0, a1);
 return strlen(a0);
}


// Function: sub_4024c3 at 0x4024c3
void sub_4024c3()
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
long long param_strlen(char *a0)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return strlen(a0);
}


// Function: sub_402538 at 0x402538
void sub_402538()
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
 char buf[16];
 param_memcpy(buf, buf, a2);
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
 char buf[16];
 param_memcmp(buf, buf, 16);
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
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return printf("Value: %d, Name: %s\n", a0, a1);
}


// Function: sub_4025b6 at 0x4025b6
void sub_4025b6()
{
 call_printf();
 return;
}


// Function: call_printf at 0x4025c0
int call_printf()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


// Function: sub_4025dd at 0x4025dd
void sub_4025dd()
{
 char buf[16];
 param_scanf(buf);
 return;
}


// Function: param_scanf at 0x4025e0
unsigned long long param_scanf(char *a0)
{
 int parsed1, parsed2;
 
 if (__isoc99_sscanf(a0, "%d,%d", &parsed1, &parsed2) != 2)
 return 4294967295;
 return parsed1 + parsed2;
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
 int parsed1, parsed2;
 
 if (__isoc99_sscanf("123,456", "%d,%d", &parsed1, &parsed2) != 2)
 return 4294967295;
 return parsed1 + parsed2;
}


// Function: sub_402642 at 0x402642
void sub_402642()
{
 param_fopen_fclose("/tmp/test");
 return;
}


// Function: param_fopen_fclose at 0x402650
unsigned int param_fopen_fclose(char *a0)
{
 unsigned long long v2; // rax
 FILE *fp; // rax
 unsigned int v4; // ebp
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
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
 size_t count; // rax
 unsigned long long v6; // rax
 char v0[18]; // [bp-0x48]

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
 count = fread(&v0, 1, 18, v4);
 if (count < 18)
 v0[count] = 0;
 else
 v0[17] = 0;
 fclose(v4);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 if ((unsigned char)v0[0] == 0xff)
 v6 = 42;
 else
 v6 = 4294967293;
 return v6;
}


// Function: sub_4027bb at 0x4027bb
void sub_4027bb()
{
 call_fread_fwrite();
 return;
}


// Function: call_fread_fwrite at 0x4027c0
unsigned long long call_fread_fwrite()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_4027cf at 0x4027cf
void sub_4027cf(unsigned long a0)
{
 param_malloc_free(a0);
 return;
}


// Function: param_malloc_free at 0x4027d0
unsigned int param_malloc_free(unsigned long long i)
{
 unsigned int *ptr; // rax
 unsigned int v2; // ecx
 unsigned long long idx; // rdx
 unsigned int result;

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 if (i)
 {
 v2 = 0;
 idx = 0;
 do
 {
 ptr[idx] = v2;
 idx += 1;
 v2 += 10;
 } while (i != idx);
 }
 result = (i > 0) ? (ptr[0] + ptr[i-1]) : 0;
 free(ptr);
 return result;
}


// Function: sub_402818 at 0x402818
void sub_402818()
{
 call_malloc_free();
 return;
}


// Function: call_malloc_free at 0x402820
unsigned int call_malloc_free()
{
 unsigned int *ptr; // rax
 unsigned long long i; // rcx
 unsigned int *curr; // rdx

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 i = 0;
 curr = ptr;
 do
 {
 curr[0] = i;
 i += 10;
 curr = &curr[1];
 } while (i != 100);
 free(ptr);
 return 0;
}


// Function: sub_402868 at 0x402868
void sub_402868(unsigned long a0, unsigned long a1)
{
 char buf[16];
 param_memset(buf, a1);
 return;
}


// Function: param_memset at 0x402870
unsigned int param_memset(void* a0, unsigned long n)
{
 unsigned long v1; // rax
 unsigned long long v2; // rbp

 memset(a0, 0, n);
 if (!n)
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += *((char *)a0 + v1);
 v1 += 1;
 } while (n != v1);
 return v2;
}


// Function: sub_4028a7 at 0x4028a7
void sub_4028a7()
{
 call_memset();
 return;
}


// Function: call_memset at 0x4028b0
int call_memset()
{
 unsigned long long idx; // rax
 int v3; // [bp-0x28]
 int v0; // [bp-0x4]

 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v3 + 4 * idx)) = 255;
 idx += 1;
 } while (idx != 10);
 v3 = 0;
 return v0 + (int)v3;
}


// Function: sub_4028ec at 0x4028ec
void sub_4028ec(unsigned long a0, unsigned long a1, unsigned long a2)
{
 char buf[16];
 param_strchr_strstr(buf, a1, "test");
 return;
}


// Function: param_strchr_strstr at 0x4028f0
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned long long ptr; // rax
 unsigned long long ptr2; // rax
 long long result = 0;

 ptr = (unsigned long long)strchr(a0, a1);
 ptr2 = (unsigned long long)strstr(a0, a2);
 if (ptr)
 result += (ptr - (unsigned long long)a0);
 if (ptr2)
 result += (ptr2 - (unsigned long long)a0);
 return result;
}


// Function: sub_402929 at 0x402929
void sub_402929()
{
 call_strchr_strstr();
 return;
}


// Function: call_strchr_strstr at 0x402930
unsigned long long call_strchr_strstr()
{
 return 15;
}


// Function: sub_402936 at 0x402936
void sub_402936()
{
 test_standard_library_functions();
 return;
}


// Function: test_standard_library_functions at 0x402940
extern char g_4040b7[];
extern char g_4040d2[];
extern char g_4040ed[];
extern char g_404109[];
extern char g_404125[];
extern char g_404141[];
extern char g_40415d[];
extern char g_40417a[];
extern char g_404196[];
extern char g_4041b2[];
extern char g_4041ce[];
extern char g_4041e9[];
extern char g_4043af[];

int test_standard_library_functions()
{
 unsigned int v6; // r14d
 unsigned int p[10]; // rdx
 unsigned long long idx; // rbx
 void* fp; // rax
 unsigned int v10; // ebp
 unsigned int v11; // eax
 unsigned int *ptr;
 unsigned long long i; // rcx
 unsigned int v0; // [bp-0x4c]
 char v1[16]; // [bp-0x48]
 unsigned long long flag1; // [bp-0x28]

 puts(&g_4043af);
 strncpy(v1, "HelloLib", 8);
 v1[8] = 0;
 printf(&g_4040b7, strlen(&v1) & 4294967295);
 printf(&g_4040d2, 0);
 printf(&g_4040ed, 12);
 printf(&g_404109, 90);
 v6 = 4294967295;
 printf(&g_404125, 4294967295);
	printf(&g_404141, printf("Value: %d, Name: %s\n", 42, "Test") & 4294967295);
	{
		int parsed1, parsed2;
		printf(&g_40415d, (__isoc99_sscanf("123,456", "%d,%d", &parsed1, &parsed2) != 2 ? 4294967295 : (parsed1 + parsed2)));
	}
	fp = fopen("/etc/passwd", "r");
 v10 = 4294967295;
 if (fp)
 {
 v11 = fileno(fp);
 fclose(fp);
 v10 = v11 >> 31 | 42;
 }
 printf(&g_40417a, v10);
 printf(&g_404196, param_fread_fwrite("/tmp/binbench_test_tmp") & 4294967295);
 ptr = malloc(40);
 if (ptr)
 {
 i = 0;
 p = ptr;
 do
 {
 p[0] = i;
 i += 10;
 p = &p[1];
 } while (i != 100);
 v6 = ptr[9] + ptr[0];
 free(ptr);
 }
 idx = 0;
 printf(&g_4041b2, v6);
 do
 {
 *((unsigned int *)&v1[4 * idx]) = 255;
 idx += 1;
 } while (idx != 10);
 *((unsigned long long *)&v1) = 0;
 flag1 = 0;
 printf(&g_4041ce, *((int *)((char *)&flag1 + 4)) + *((int *)&v1[0]));
 return printf(&g_4041e9, 15);
}


// Function: sub_402b45 at 0x402b45
void sub_402b45(unsigned long a0)
{
 param_linux_syscall(a0);
 return;
}


// Function: param_linux_syscall at 0x402b50
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


// Function: sub_402b8f at 0x402b8f
void sub_402b8f()
{
 call_linux_syscall();
 return;
}


// Function: call_linux_syscall at 0x402b90
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


// Function: sub_402bd9 at 0x402bd9
void sub_402bd9()
{
 param_win32_api();
 return;
}


// Function: param_win32_api at 0x402be0
unsigned long long param_win32_api()
{
 unsigned int v2; // eax
 struct stat v0; // [bp-0x60]

 v2 = stat("/etc/passwd", &v0);
 return (v2 >= 0 ? (0 < v0.st_size ? 42 : 4294967294) : 4294967295);
}


// Function: sub_402c16 at 0x402c16
void sub_402c16()
{
 call_win32_api();
 return;
}


// Function: call_win32_api at 0x402c20
unsigned long long call_win32_api()
{
 unsigned int v3; // eax
 struct stat v0; // [bp-0x90]

 v3 = stat("/etc/passwd", &v0);
 return (v3 >= 0 ? (0 < v0.st_size ? 42 : 4294967294) : 4294967295);
}


// Function: sub_402c5d at 0x402c5d
void sub_402c5d(unsigned long a0, unsigned long a1)
{
 param_fork_exec("/bin/true", a1);
 return;
}


// Function: param_fork_exec at 0x402c60
unsigned long long param_fork_exec(char *a0, unsigned long a1)
{
 unsigned long v2; // rax
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
 return 4294967293;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_402cca at 0x402cca
void sub_402cca()
{
 call_fork_exec();
 return;
}


// Function: call_fork_exec at 0x402cd0
long long call_fork_exec()
{
 unsigned long v2; // rax
 unsigned int result; // eax
 unsigned long v4; // rcx
 unsigned int v5; // eax
 unsigned long v0; // [bp-0x8]

 v0 = v2;
 result = fork();
 if (result < 0)
 {
 v5 = 4294967295;
 }
 else if (!result)
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (waitpid(result, &v0, 0) >= 0)
 {
 v4 = *((int *)((char *)&v0 + 4));
 v5 = 4294967293;
 if (!((char)v4 & 127))
 v5 = v4 >> 8;
 }
 else
 {
 v5 = 4294967294;
 }
 return -(0 < v5) | 42;
}


// Function: sub_402d35 at 0x402d35
void sub_402d35()
{
 param_pipe_communication();
 return;
}


// Function: param_pipe_communication at 0x402d40
unsigned long long param_pipe_communication()
{
 int result; // eax
 ssize_t count; // rax
 int pipefd[2]; // [bp-0x30]
 char v2[32]; // Buffer for reading from pipe

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
 count = read(pipefd[0], v2, 31);
 if (count < 31)
 v2[count] = 0;
 else
 v2[30] = 0;
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


// Function: sub_402de4 at 0x402de4
void sub_402de4()
{
 call_pipe_communication();
 return;
}


// Function: call_pipe_communication at 0x402df0
unsigned long long call_pipe_communication()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return param_pipe_communication();
}


// Function: sub_402df8 at 0x402df8
void sub_402df8()
{
 param_socket_create();
 return;
}


// Function: param_socket_create at 0x402e00
unsigned long long param_socket_create()
{
 unsigned int v4; // eax
 unsigned int v5; // ebx
 unsigned int v6; // eax
 unsigned long long v7; // rax
 unsigned int result; // [bp-0x2c]
 struct sockaddr_in v1; // [bp-0x28]

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
 if (v6 < 0)
 v7 = 0xfffffffc;
 else
 v7 = 42;
 return v7;
}


// Function: sub_402eb9 at 0x402eb9
void sub_402eb9()
{
 call_socket_create();
 return;
}


// Function: call_socket_create at 0x402ec0
unsigned long long call_socket_create()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return param_socket_create();
}


// Function: sub_402ec8 at 0x402ec8
void sub_402ec8()
{
 param_shmget_shmat();
 return;
}


// Function: param_shmget_shmat at 0x402ed0
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


// Function: sub_402f91 at 0x402f91
void sub_402f91()
{
 call_shmget_shmat();
 return;
}


// Function: call_shmget_shmat at 0x402fa0
unsigned int call_shmget_shmat()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 if (param_shmget_shmat() <= 0)
 return 4294967295;
 return 42;
}


// Function: sub_402fb7 at 0x402fb7
void sub_402fb7()
{
 param_signal_handling();
 return;
}


// Function: param_signal_handling at 0x402fc0
extern unsigned int signal_number;
extern unsigned int signal_received;

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


// Function: sub_4030ea at 0x4030ea
void sub_4030ea(unsigned long a0)
{
 signal_handler((int)a0);
 return;
}


// Function: signal_handler at 0x4030f0
extern unsigned int signal_number;
extern unsigned int signal_received;

void signal_handler(int a0)
{
 signal_received = 1;
 signal_number = a0;
}


// Function: sub_403101 at 0x403101
void sub_403101()
{
 call_signal_handling();
 return;
}


// Function: call_signal_handling at 0x403110
unsigned long long call_signal_handling()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return param_signal_handling();
}


// Function: sub_403118 at 0x403118
void sub_403118()
{
 test_system_calls();
 return;
}


// Function: test_system_calls at 0x403120
extern char g_404238[];
extern char g_404254[];
extern char g_404270[];
extern char g_40428c[];
extern char g_4042a8[];
extern char g_4042c4[];
extern char g_4042e0[];
extern char g_4043d3[];

int test_system_calls()
{
 unsigned int v3; // ebx
 unsigned int v4; // eax
 unsigned int result; // eax
 unsigned int v6; // ecx
 unsigned long v7; // rax
	struct stat v1; // [bp-0x70]

	puts(&g_4043d3);
 v3 = syscall(2);
 if (v3 >= 0)
 syscall(3);
 else
 v3 = -(*(__errno_location()));
 printf(&g_404238, v3 >> 31 | 42);
	v4 = stat("/etc/passwd", &v1);
	printf(&g_404254, (v4 < 0 ? 4294967295 : (0 < v1.st_size ? 42 : 4294967294)));
	result = fork();
	v6 = 4294967295;
	if (result >= 0)
	{
		if (!result)
		{
			execl("/bin/true", "/bin/true");
			_exit(127); /* do not return */
		}
		else if (waitpid(result, &v7, 0) >= 0)
		{
			v6 = 4294967293;
			if (!((char)v7 & 127))
				v6 = v7 >> 8;
		}
		else
		{
			v6 = 4294967294;
		}
	}
	printf(&g_404270, -(0 < v6) | 42);
 printf(&g_40428c, param_pipe_communication() & 4294967295);
 printf(&g_4042a8, param_socket_create() & 4294967295);
 printf(&g_4042c4, (param_shmget_shmat() > 0 ? 42 : 4294967295));
 return printf(&g_4042e0, param_signal_handling() & 4294967295);
}


// Function: sub_403292 at 0x403292
void sub_403292(unsigned long a0)
{
 unsigned int val = (unsigned int)a0;
 thread_compute(&val);
 return;
}


// Function: thread_compute at 0x4032a0
void * thread_compute(void *arg)
{
 unsigned int *a0 = (unsigned int *)arg;
 unsigned int *ptr = malloc(sizeof(unsigned int));
 *ptr = *a0 * *a0;
 return ptr;
}


// Function: sub_4032b4 at 0x4032b4
void sub_4032b4(unsigned long a0)
{
 param_pthread_create(a0);
 return;
}


// Function: param_pthread_create at 0x4032c0
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 void *v1; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]
 unsigned int result;

 v0 = a0;
 if ((int)pthread_create(&v2, 0, thread_compute, &v0))
 return 4294967295;
 pthread_join(v2, &v1);
 result = *(unsigned int *)v1;
 free(v1);
 return result;
}


// Function: sub_40330d at 0x40330d
void sub_40330d()
{
 call_pthread_create();
 return;
}


// Function: call_pthread_create at 0x403310
unsigned int call_pthread_create()
{
 unsigned int v0; // [bp-0x1c]
 void *v1; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]

 v0 = 7;
 if ((int)pthread_create(&v2, 0, thread_compute, &v0))
 return 4294967295;
 pthread_join(v2, &v1);
 free(v1);
 return *(unsigned int *)v1;
}


// Function: sub_403361 at 0x403361
void sub_403361(unsigned long a0)
{
 unsigned int vals[3] = {1, 10, 0};
 thread_sum(vals);
 return;
}


// Function: thread_sum at 0x403370
void * thread_sum(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int v1; // eax
 unsigned long v2; // rdx
 unsigned int v3; // ecx

 ptr[2] = 0;
 v1 = *(ptr);
 v2 = ptr[1];
 v3 = v2;
 if (v3 >= v1)
 ptr[2] = v1 + ptr[2] + (v3 - v1) * (v1 + 1) + (unsigned int)((v2 + ~(v1)) * (v3 - v1) >> 1);
 return NULL;
}


// Function: sub_4033a5 at 0x4033a5
void sub_4033a5()
{
 param_pthread_join();
 return;
}


// Function: param_pthread_join at 0x4033b0
unsigned int param_pthread_join()
{
 unsigned long long v9; // rbp
 char *cur; // rbx
 unsigned long long v11; // rbp
 unsigned int v12; // r14d
 unsigned long long v1; // [bp-0x68]
 char v2[60]; // [bp-0x60]
 unsigned int v3; // [bp-0x5c]
 unsigned int v4; // [bp-0x58]
 unsigned long long v5; // [bp-0x50]
 pthread_t v6[3]; // [bp-0x38]

 memset(&v1, 0, 36);
 v1 = 42949672961ULL;
 v3 = 11;
 v4 = 20;
 v5 = 128849018901;
 cur = &v1;
 v9 = 0;
 while (!(int)pthread_create(&v6[v9], 0, thread_sum, cur))
 {
 cur += 12;
 v9 += 1;
 if (v9 == 3)
 {
 cur = &v2;
 v11 = 0;
 v12 = 0;
 while (!(int)pthread_join(v6[v11], 0))
 {
 v12 += *(unsigned int *)cur;
 v11 += 1;
 cur += 12;
 if (v11 == 3)
 return v12;
 }
 return 4294967294;
 }
 }
 return 4294967295;
}


// Function: sub_40348d at 0x40348d
void sub_40348d()
{
 call_pthread_join();
 return;
}


// Function: call_pthread_join at 0x403490
unsigned int call_pthread_join()
{
 char *v8; // rbx
 unsigned long long v9; // rbp
 char *cur; // rbx
 unsigned long long v11; // rbp
 unsigned int v12; // r14d
 char v1[60]; // [bp-0x60]
 unsigned int v3; // [bp-0x5c]
 unsigned int v4; // [bp-0x58]
 unsigned long long v5; // [bp-0x50]
 pthread_t v6[3]; // [bp-0x38]

 memset(v1, 0, 36);
 *(unsigned long long *)v1 = 42949672961ULL;
 v3 = 11;
 v4 = 20;
 v5 = 128849018901;
 v8 = v1;
 v9 = 0;
	while (!(int)pthread_create(&v6[v9/8], 0, thread_sum, v8))
	{
		v9 += 8;
		v8 += 12;
		if (v9 == 24)
		{
			cur = v1;
			v11 = 0;
			v12 = 0;
			while (!(int)pthread_join(&v6[v11], 0))
			{
				v12 += *(unsigned int *)cur;
				v11 += 1;
				cur += 12;
				if (v11 == 3)
					return v12;
			}
			return 4294967294;
		}
	}
 return 4294967295;
}


// Function: sub_40356d at 0x40356d
void sub_40356d(unsigned long a0)
{
 thread_increment(&a0);
 return;
}


// Function: thread_increment at 0x403570
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;

void * thread_increment(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned long long v2; // rax
 unsigned int v3; // ebp
 unsigned int v4; // ebp
 unsigned int v5; // ebp
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v3 = *(ptr);
 if (v3 <= 0)
 return NULL;
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
 return NULL;
}


// Function: sub_4035af at 0x4035af
void sub_4035af(unsigned long a0, unsigned long a1)
{
 param_mutex_lock(a0, a1);
 return;
}


// Function: param_mutex_lock at 0x4035b0
extern unsigned int shared_counter;

unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned long v3; // rax
 pthread_t *threads; // rax
 unsigned int *ptr; // rbx
 unsigned long i; // r13
 unsigned long long v7; // r14
 unsigned long v8; // rbp
 unsigned long long v9; // rax
 unsigned int v0; // [bp-0x38], Other Possible Types: unsigned long
 unsigned int v1; // [bp-0x34]

 v0 = a0;
 v1 = a1;
 threads = malloc(a0 * sizeof(pthread_t));
 if (!threads)
 return 4294967295;
 ptr = (unsigned int *)threads;
 shared_counter = 0;
 i = a0;
 if (a0 > 0)
 {
 v7 = 0;
 do
 {
 if ((int)pthread_create(&threads[v7/8], 0, thread_increment, &v1))
 {
 free(threads);
 return 4294967294;
 }
 } while ((v7 += 8, i * 8 != v7));
 }
 if (v1 > 0)
 {
 v8 = 0;
 do
 {
 pthread_join(threads[v8], 0);
 v8 += 1;
 } while (i != v8);
 }
 free(threads);
 if (shared_counter == v0 * v1)
 v9 = 42;
 else
 v9 = 4294967293;
 return v9;
}


// Function: sub_40369c at 0x40369c
void sub_40369c()
{
 call_mutex_lock();
 return;
}


// Function: call_mutex_lock at 0x4036a0
unsigned long long call_mutex_lock()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return param_mutex_lock(4, 1000);
}


// Function: sub_4036b2 at 0x4036b2
void sub_4036b2()
{
 consumer_thread(NULL);
 return;
}


// Function: consumer_thread at 0x4036c0
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern char data;
extern char ready;

void * consumer_thread(void *arg)
{
 unsigned long long v2; // rax
 unsigned int *ptr; // rax
 unsigned long long v0; // [bp-0x18]

 (void)arg;
 v0 = v2;
 pthread_mutex_lock(&cond_mutex);
 if (!ready)
 {
 do
 {
 pthread_cond_wait(&cond, &cond_mutex);
 } while (ready != 1);
 }
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = (!data ? 0 : 42);
 return ptr;
}


// Function: sub_403735 at 0x403735
void sub_403735()
{
 producer_thread(NULL);
 return;
}


// Function: producer_thread at 0x403740
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern char data;
extern char ready;

void * producer_thread(void *arg)
{
 (void)arg;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return NULL;
}


// Function: param_condition_variable at 0x403780
extern char data;
extern char ready;

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
	pthread_join(v2, 0);
	pthread_join(v0, &v1);
	free(v1);
	return 42;
 }
}


// Function: sub_40380a at 0x40380a
void sub_40380a()
{
 call_condition_variable();
 return;
}


// Function: call_condition_variable at 0x403810
int call_condition_variable()
{
 return param_condition_variable();
}


// Function: sub_403818 at 0x403818
void sub_403818(unsigned long a0)
{
 thread_atomic_increment(&a0);
 return;
}


// Function: thread_atomic_increment at 0x403820
extern unsigned int atomic_counter;

void * thread_atomic_increment(void *arg)
{
 unsigned int *a0 = (unsigned int *)arg;
 unsigned int i; // ecx
 unsigned int expected;

 if (*(a0) <= 0)
 return NULL;
 i = 0;
 do
 {
 atomic_fetch_add((int *)&atomic_counter);
 expected = i + 1000;
 atomic_compare_exchange((int *)&atomic_counter, (int *)&expected, i);
 i += 1;
 } while (i != *(a0));
 return NULL;
}


// Function: sub_403852 at 0x403852
void sub_403852()
{
 thread_atomic_load_store(NULL);
 return;
}


// Function: thread_atomic_load_store at 0x403860
extern unsigned int atomic_counter;

void * thread_atomic_load_store(void *arg)
{
 (void)arg;
 atomic_exchange((int *)&atomic_counter, (int)(atomic_counter + 100));
 return NULL;
}


// Function: sub_403872 at 0x403872
void sub_403872(unsigned long a0, unsigned long a1)
{
 param_atomic_ops(a0, a1);
 return;
}


// Function: param_atomic_ops at 0x403880
extern unsigned int atomic_counter;

unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 pthread_t *threads; // rax
 pthread_t *ptr; // rbx
 unsigned long i; // r13
 unsigned long long v7; // r14
 unsigned long v8; // rbp
 unsigned int v0; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]
 pthread_t v2; // [bp-0x38]

 v0 = a0;
 v1 = a1;
 threads = malloc(a0 * 8);
 if (!threads)
 return 4294967295;
 ptr = threads;
 atomic_exchange(&atomic_counter, 0);
 i = a0;
 if (a0 > 0)
 {
 v7 = 0;
 do
 {
 if ((int)pthread_create(threads + v7, 0, thread_atomic_increment, &v1))
 {
 free(threads);
 return 4294967294;
 }
 } while ((v7 += 8, i * 8 != v7));
 }
 if (!(int)pthread_create(&v2, 0, thread_atomic_load_store, 0))
 pthread_join(v2, 0);
 if (v0 > 0)
 {
 v8 = 0;
 do
 {
 pthread_join(threads[v8], 0);
 v8 += 1;
 } while (i != v8);
 }
 free(threads);
 return (atomic_counter > 0 ? 42 : 4294967293);
}


// Function: sub_403986 at 0x403986
void sub_403986()
{
 call_atomic_ops();
 return;
}


// Function: call_atomic_ops at 0x403990
unsigned long long call_atomic_ops()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return param_atomic_ops(4, 500);
}


// Function: sub_4039a2 at 0x4039a2
void sub_4039a2(unsigned long a0)
{
 thread_tls_test();
 return;
}


// Function: thread_tls_test at 0x4039b0
void* thread_tls_test(void *arg)
{
 char *a0 = (char *)arg;
 unsigned long long v2; // rax
 unsigned int v4; // ebx
 unsigned int v5; // ebp
 unsigned int *ptr; // rax
 unsigned long long v0; // [bp-0x18]
 static __thread unsigned int tls_value1;
 static __thread char tls_buffer[32];

 v0 = v2;
 if (tls_value1 == 0)
 tls_value1 = 100;
 v4 = tls_value1;
 v5 = v4 + 50;
 tls_value1 = v5;
 strncpy(tls_buffer, a0, 31);
 tls_buffer[31] = 0;
 ptr = malloc(8);
 ptr[0] = v4;
 ptr[1] = v5;
 return ptr;
}


// Function: sub_4039f9 at 0x4039f9
void sub_4039f9(unsigned long a0)
{
 param_thread_local_storage(a0);
 return;
}


// Function: param_thread_local_storage at 0x403a00
unsigned long long param_thread_local_storage(unsigned int a0)
{
 unsigned long long v3; // rbx
 pthread_t *threads; // r14
 unsigned long v13; // rbx
 pthread_t *v14; // r12
 unsigned long v15; // rbp
 unsigned int v16; // ebx
 unsigned int v17; // r14d
 char **p; // r15
 unsigned long i; // r13
 unsigned long idx; // rbx
 char *str_ptr; // rax
 unsigned long j; // rbp
 pthread_t *v10; // rbx
 pthread_t *v11; // rbx
 pthread_t *v12; // rbx
 unsigned int v0; // [bp-0x3c]
 void *retval; // [bp-0x38]

 v3 = (unsigned long long)a0 * 8;
 threads = malloc(v3);
 p = malloc(v3);
 if (!threads)
 {
 return 4294967295;
 }
 else if (p)
 {
 i = a0;
	if (a0 > 0)
	{
 idx = 0;
 do
 {
 str_ptr = malloc(16);
 p[idx] = str_ptr;
 snprintf(str_ptr, 16, "Thread-%lu", idx);
 idx += 1;
 } while (i != idx);
	}
 if (a0 > 0)
 {
 j = 0;
 v10 = threads;
 do
 {
 v11 = v10;
 if ((int)pthread_create(v11, 0, thread_tls_test, p[j]))
 {
 v13 = 0xFFFFFFFFFFFFFFFFULL;
 do
 {
 free(p[v13]);
 v13 += 1;
 } while (j != v13);
 free(p);
 free(threads);
 return 4294967294;
 }
 } while ((j += 1, v10 += 1, i != j));
 }
 v14 = threads;
 v0 = a0;
 if (v0 > 0)
 {
 v15 = 0;
 v16 = 0;
 v17 = 0;
 do
 {
 pthread_join(v14[v15], &retval);
 v17 += *((int *)retval);
 v16 += *((int *)retval + 1);
 free(retval);
 free(p[v15]);
 v15 += 1;
 } while (i != v15);
 }
 else
 {
 v17 = 0;
 v16 = 0;
 }
 free(p);
 free(v14);
 return (!(v0 * 150 ^ v16) && !(v0 * 100 ^ v17) ? 4294967293 : 42);
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_403b8f at 0x403b8f
void sub_403b8f()
{
 call_thread_local_storage();
 return;
}


// Function: call_thread_local_storage at 0x403b90
unsigned long long call_thread_local_storage()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return param_thread_local_storage(4);
}


// Function: sub_403b9d at 0x403b9d
void sub_403b9d()
{
 test_thread_concurrency();
 return;
}


// Function: test_thread_concurrency at 0x403ba0
extern char g_404306[];
extern char g_404322[];
extern char g_40433f[];
extern char g_40435b[];
extern char g_404377[];
extern char g_404393[];
extern char g_4043ee[];

int test_thread_concurrency()
{
 char *v8; // rbx
 unsigned int v9; // r14d
 unsigned long long v10; // rbp
 char *cur; // rbp
 unsigned long long v12; // rbx
 unsigned int v13; // r14d
 unsigned int v0; // [bp-0x6c]
 pthread_t v1; // [bp-0x68]
 char v2[60]; // [bp-0x60]
 unsigned int v3; // [bp-0x5c]
 unsigned int v4; // [bp-0x58]
 unsigned long long v5; // [bp-0x50]
 pthread_t ptr[3]; // [bp-0x38]

 puts(&g_4043ee);
 v0 = 7;
 v8 = v2;
 v9 = 4294967295;
 if (!(int)pthread_create(&v1, 0, thread_compute, &v0))
 {
 void *retval;
 pthread_join(v1, &retval);
 v9 = *((int *)retval);
 free(retval);
 }
 v10 = 0;
 printf(&g_404306, v9);
 memset(v2, 0, 36);
 *(unsigned long long *)v2 = 42949672961ULL;
 v3 = 11;
 v4 = 20;
 v5 = 128849018901;
 do
	{
		if ((int)pthread_create(&ptr[v10], 0, thread_sum, v8))
		{
			v13 = 4294967295;
			goto LABEL_403cd2;
		}
	} while ((v10 += 1, v8 += 12, v10 != 3));
 cur = v2;
 v12 = 0;
 v13 = 0;
 do
	{
		if ((int)pthread_join(ptr[v12], 0))
		{
			v13 = 4294967294;
			break;
		}
	} while ((v13 += *(unsigned int *)cur, v12 += 1, cur += 12, v12 != 3));
LABEL_403cd2:
 printf(&g_404322, v13);
 printf(&g_40433f, param_mutex_lock(4, 1000) & 4294967295);
 printf(&g_40435b, param_condition_variable() & 4294967295);
 printf(&g_404377, param_atomic_ops(4, 500) & 4294967295);
 return printf(&g_404393, param_thread_local_storage(4) & 4294967295);
}


// Function: sub_403d59 at 0x403d59
void sub_403d59()
{
 main();
 return;
}


// Function: main at 0x403d60
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


