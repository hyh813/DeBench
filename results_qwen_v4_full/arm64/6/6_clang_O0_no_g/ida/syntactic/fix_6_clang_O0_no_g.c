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
typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;

/* Additional type definitions for system types */
typedef unsigned long pthread_t;
typedef struct { unsigned long __data[6]; } pthread_mutex_t;
typedef struct { unsigned long __data[12]; } pthread_cond_t;
typedef void FILE;
typedef int __pid_t;
typedef volatile unsigned int atomic_uint;
typedef union { int __status; void *__ptr; } __WAIT_STATUS;
typedef long __syscall_slong_t;
typedef unsigned int socklen_t;
typedef void (*__sighandler_t)(int);

/* Struct definitions */
struct stat {
 long st_size;
 long __unused[10];
};

struct sockaddr {
 unsigned short sa_family;
 char sa_data[14];
};

struct shmid_ds {
 int __dummy;
};

/* Macro for accessing high dword of 64-bit value */
#define HIDWORD(x) (*((unsigned int *)&(x) + 1))

/* ARM system register constant */
#define TPIDR_EL0 15

/* Global variables */
long long _aarch64_have_lse_atomics;
int ready;
int data;
int signal_received;
int signal_number;
pthread_mutex_t counter_mutex;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
int shared_counter;
atomic_uint atomic_counter;
__int128 xmmword_3D04;

/* String constants */
char asc_39AA[] = "=== Standard Library Functions ===\n";
char aLibL101D[] = "Lib 1.01: %d\n";
char aLibL102D[] = "Lib 1.02: %d\n";
char aLibL103D[] = "Lib 1.03: %d\n";
char aLibL104D[] = "Lib 1.04: %d\n";
char aLibL105D[] = "Lib 1.05: %d\n";
char aLibL106D[] = "Lib 1.06: %d\n";
char aLibL107D[] = "Lib 1.07: %d\n";
char aLibL108D[] = "Lib 1.08: %d\n";
char aLibL109D[] = "Lib 1.09: %d\n";
char aLibL110D[] = "Lib 1.10: %d\n";
char aLibL111D[] = "Lib 1.11: %d\n";
char aLibL112D[] = "Lib 1.12: %d\n";
char asc_3B50[] = "=== System Calls ===\n";
char aSysL301D[] = "Sys 3.01: %d\n";
char aSysL302D[] = "Sys 3.02: %d\n";
char aSysL303D[] = "Sys 3.03: %d\n";
char aSysL304D[] = "Sys 3.04: %d\n";
char aSysL305D[] = "Sys 3.05: %d\n";
char aSysL306D[] = "Sys 3.06: %d\n";
char aSysL307D[] = "Sys 3.07: %d\n";
char asc_3C3A[] = "=== Thread Concurrency ===\n";
char aThrL301D[] = "Thr 3.01: %d\n";
char aThrL302D[] = "Thr 3.02: %d\n";
char aThrL303D[] = "Thr 3.03: %d\n";
char aThrL304D[] = "Thr 3.04: %d\n";
char aThrL305D[] = "Thr 3.05: %d\n";
char aThrL306D[] = "Thr 3.06: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/6/6_clang_O0_no_g
 * Processor: arm
 */

/* Function declarations */
long long call_weak_fn();
void JUMPOUT(int);
long long __getauxval(int);
long long signal_handler(long long result);
unsigned int _aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, atomic_uint *a3);
unsigned int _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);

/* Standard library function declarations */
size_t strcpy(char *dest, const char *src);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
void *memcpy(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
int printf(const char *format, ...);
int __isoc99_sscanf(const char *str, const char *format, ...);
FILE *fopen(const char *pathname, const char *mode);
int fileno(FILE *stream);
int fclose(FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
void rewind(FILE *stream);
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
int unlink(const char *pathname);
void *malloc(size_t size);
void free(void *ptr);
void *memset(void *s, int c, size_t n);
char *strchr(const char *s, int c);
char *strstr(const char *haystack, const char *needle);
long syscall(long number, ...);
int *__errno_location(void);
int stat(const char *pathname, struct stat *buf);
int fork(void);
int execl(const char *path, const char *arg, ...);
void _exit(int status);
int waitpid(int pid, int *wstatus, int options);
int wait(int *wstatus);
int pipe(int pipefd[2]);
int close(int fd);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);
int usleep(unsigned int usec);
int raise(int sig);
__sighandler_t signal(int sig, __sighandler_t func);
unsigned int alarm(unsigned int seconds);
unsigned int sleep(unsigned int seconds);
int socket(int domain, int type, int protocol);
int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
unsigned short htons(unsigned short hostshort);
int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
int listen(int sockfd, int backlog);
int open(const char *pathname, int flags, ...);
int shmget(int key, size_t size, int shmflg);
void *shmat(int shmid, const void *shmaddr, int shmflg);
int shmdt(const void *shmaddr);
int shmctl(int shmid, int cmd, struct shmid_ds *buf);
int ftok(const char *pathname, int proj_id);
int pthread_create(pthread_t *thread, const void *attr, void *(*start_routine)(void *), void *arg);
int pthread_join(pthread_t thread, void **retval);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int pthread_cond_signal(pthread_cond_t *cond);
int pthread_cancel(pthread_t thread);
char *strncpy(char *dest, const char *src, size_t n);
int snprintf(char *str, size_t size, const char *format, ...);
void term_proc(void);
int __ldaxr(unsigned int *addr);
int __stlxr(unsigned int val, unsigned int *addr);
void atomic_store(unsigned int val, unsigned int *ptr);
unsigned int atomic_load(const unsigned int *ptr);
int atomic_compare_exchange_strong(atomic_uint *ptr, unsigned int *expected, unsigned int desired);
unsigned int atomic_fetch_add(atomic_uint *ptr, unsigned int arg);
unsigned long long _ReadStatusReg(int reg);

/* ARM intrinsic implementations */
int __ldaxr(unsigned int *addr)
{
 return *addr;
}

int __stlxr(unsigned int val, unsigned int *addr)
{
 *addr = val;
 return 0;
}

unsigned long long _ReadStatusReg(int reg)
{
 return 0;
}

/* Atomic function implementations */
void atomic_store(unsigned int val, unsigned int *ptr)
{
 *ptr = val;
}

unsigned int atomic_load(const unsigned int *ptr)
{
 return *ptr;
}

int atomic_compare_exchange_strong(atomic_uint *ptr, unsigned int *expected, unsigned int desired)
{
 if ( *ptr == *expected )
 {
  *ptr = desired;
  return 1;
 }
 else
 {
  *expected = *ptr;
  return 0;
 }
}

unsigned int atomic_fetch_add(atomic_uint *ptr, unsigned int arg)
{
 unsigned int old = *ptr;
 *ptr += arg;
 return old;
}

/* Function: .init_proc @ 0x12C8 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_12E0 @ 0x12E0 */
void sub_12E0()
{
 JUMPOUT(0);
}


/* Function: init_have_lse_atomics @ 0x1700 */
long long init_have_lse_atomics()
{
 long long result; // x0

 result = ((unsigned int)__getauxval(16) >> 8) & 1;
 _aarch64_have_lse_atomics = result;
 return result;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn */
long long call_weak_fn()
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_strcpy @ 0x1854 */
size_t param_strcpy(char *a1, const char *a2)
{
 strcpy(a1, a2);
 return strlen(a1);
}


/* Function: call_strcpy @ 0x1888 */
long long call_strcpy()
{
 char v1[32]; // [xsp+10h] [xbp-20h] BYREF

 return (unsigned int)param_strcpy(v1, "HelloLib");
}


/* Function: param_strcmp @ 0x18B8 */
long long param_strcmp(const char *a1, const char *a2)
{
 int v5; // [xsp+Ch] [xbp-14h]

 v5 = strcmp(a1, a2);
 if ( v5 <= 0 )
 {
 if ( v5 < 0 )
 return (unsigned int)-1;
 else
 return 0;
 }
 else
 {
 return 1;
 }
}


/* Function: call_strcmp @ 0x1920 */
long long call_strcmp()
{
 int v1; // [xsp+8h] [xbp-8h]
 int v2; // [xsp+Ch] [xbp-4h]

 v2 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 return v2 + v1 + (unsigned int)param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x1990 */
long long param_strlen(const char *a1)
{
 return (unsigned int)strlen(a1);
}


/* Function: call_strlen @ 0x19C0 */
long long call_strlen()
{
 return param_strlen("BinBench2025");
}


/* Function: param_memcpy @ 0x19EC */
long long param_memcpy(void *a1, const void *a2, size_t a3)
{
 unsigned int n; // [xsp+8h] [xbp-18h]

 n = a3;
 memcpy(a1, a2, a3);
 return n;
}


/* Function: call_memcpy @ 0x1A28 */
long long call_memcpy()
{
 long long v1; // [xsp+8h] [xbp-38h] BYREF
 long long v2; // [xsp+10h] [xbp-30h]
 int v3; // [xsp+18h] [xbp-28h]
 __int128 v4; // [xsp+20h] [xbp-20h] BYREF
 int v5; // [xsp+30h] [xbp-10h]

 v4 = xmmword_3D04;
 v5 = 50;
 v1 = 0;
 v2 = 0;
 v3 = 0;
 param_memcpy(&v1, &v4, 0x14u);
 return (unsigned int)(v1 + v2 + v3);
}


/* Function: param_memcmp @ 0x1A88 */
long long param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v6; // [xsp+4h] [xbp-1Ch]

 v6 = memcmp(a1, a2, a3);
 if ( v6 <= 0 )
 {
 if ( v6 < 0 )
 return (unsigned int)-1;
 else
 return 0;
 }
 else
 {
 return 1;
 }
}


/* Function: call_memcmp @ 0x1AF8 */
long long call_memcmp()
{
 int v1; // [xsp+1Ch] [xbp-34h]
 long long v2; // [xsp+20h] [xbp-30h] BYREF
 int v3; // [xsp+28h] [xbp-28h]
 long long v4; // [xsp+30h] [xbp-20h] BYREF
 int v5; // [xsp+38h] [xbp-18h]
 long long v6; // [xsp+40h] [xbp-10h] BYREF
 int v7; // [xsp+48h] [xbp-8h]

 v6 = 0x200000001LL;
 v7 = 3;
 v4 = 0x200000001LL;
 v5 = 4;
 v2 = 0x200000001LL;
 v3 = 3;
 v1 = param_memcmp(&v6, &v4, 0xCu);
 return v1 + (unsigned int)param_memcmp(&v6, &v2, 0xCu);
}


/* Function: param_printf @ 0x1BA0 */
long long param_printf(int a1, const char *a2)
{
 return (unsigned int)printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x1BDC */
long long call_printf()
{
 return (unsigned int)param_printf(42, "Test");
}


/* Function: param_scanf @ 0x1C0C */
long long param_scanf(const char *a1)
{
 int v2; // [xsp+8h] [xbp-18h] BYREF
 int v3; // [xsp+Ch] [xbp-14h] BYREF
 const char *v4; // [xsp+10h] [xbp-10h]

 v4 = a1;
 if ( (unsigned int)__isoc99_sscanf(a1, "%d,%d", &v3, &v2) == 2 )
 return (unsigned int)(v3 + v2);
 else
 return (unsigned int)-1;
}


/* Function: call_scanf @ 0x1C78 */
long long call_scanf()
{
 return param_scanf("123,456");
}


/* Function: param_fopen_fclose @ 0x1C94 */
long long param_fopen_fclose(const char *a1)
{
 unsigned int v2; // [xsp+4h] [xbp-1Ch]
 FILE *stream; // [xsp+8h] [xbp-18h]

 stream = fopen(a1, "r");
 if ( stream )
 {
 v2 = fileno(stream);
 fclose(stream);
 return v2;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_fopen_fclose @ 0x1D00 */
long long call_fopen_fclose()
{
 if ( (int)param_fopen_fclose("/etc/passwd") < 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_fread_fwrite @ 0x1D38 */
long long param_fread_fwrite(const char *a1)
{
 size_t v1; // x0
 bool v4; // [xsp+Ch] [xbp-64h]
 size_t v5; // [xsp+20h] [xbp-50h]
 size_t n; // [xsp+28h] [xbp-48h]
 FILE *s; // [xsp+30h] [xbp-40h]
 char s1[32]; // [xsp+38h] [xbp-38h] BYREF
 const char *v9; // [xsp+58h] [xbp-18h]
 const char *v10; // [xsp+60h] [xbp-10h]

 v10 = a1;
 v9 = "BinBench Test Data";
 s = fopen(a1, "w+");
 if ( s )
 {
 v1 = strlen(v9);
 n = fwrite(v9, 1u, v1, s);
 if ( n == strlen(v9) )
 {
 rewind(s);
 v5 = fread(s1, 1u, n, s);
 s1[v5] = 0;
 fclose(s);
 unlink(v10);
 v4 = 0;
 if ( v5 == n )
 v4 = strcmp(s1, v9) == 0;
 if ( v4 )
 return 42;
 else
 return (unsigned int)-3;
 }
 else
 {
 fclose(s);
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_fread_fwrite @ 0x1E84 */
long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1EA0 */
long long param_malloc_free(unsigned long long a1)
{
 unsigned int v2; // [xsp+Ch] [xbp-24h]
 unsigned long long i; // [xsp+10h] [xbp-20h]
 unsigned int *ptr; // [xsp+18h] [xbp-18h]

 ptr = malloc(4 * a1);
 if ( ptr )
 {
 for ( i = 0; i < a1; ++i )
 ptr[i] = 10 * i;
 v2 = *ptr + ptr[a1 - 1];
 free(ptr);
 return v2;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_malloc_free @ 0x1F68 */
long long call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x1F80 */
long long param_memset(unsigned char *a1, size_t a2)
{
 size_t i; // [xsp+8h] [xbp-28h]
 unsigned int v4; // [xsp+14h] [xbp-1Ch]

 memset(a1, 0, a2);
 v4 = 0;
 for ( i = 0; i < a2; ++i )
 v4 += a1[i];
 return v4;
}


/* Function: call_memset @ 0x2008 */
long long call_memset()
{
 int i; // [xsp+4h] [xbp-2Ch]
 unsigned int v2[10]; // [xsp+8h] [xbp-28h] BYREF

 for ( i = 0; i < 10; ++i )
 v2[i] = 255;
 param_memset((unsigned char *)v2, 0x28u);
 return (unsigned int)(v2[0] + v2[9]);
}


/* Function: param_strchr_strstr @ 0x2074 */
long long param_strchr_strstr(const char *a1, unsigned char a2, const char *a3)
{
 int v4; // [xsp+8h] [xbp-48h]
 int v5; // [xsp+10h] [xbp-40h]
 char *v6; // [xsp+20h] [xbp-30h]
 char *v7; // [xsp+30h] [xbp-20h]

 v7 = strchr(a1, a2);
 if ( v7 )
 v5 = (unsigned int)v7 - (unsigned int)a1;
 else
 v5 = -1;
 v6 = strstr(a1, a3);
 if ( v6 )
 v4 = (unsigned int)v6 - (unsigned int)a1;
 else
 v4 = -1;
 return (unsigned int)(v5 + v4);
}


/* Function: call_strchr_strstr @ 0x212C */
long long call_strchr_strstr()
{
 return (unsigned int)param_strchr_strstr("Hello BinBench Test", 0x42u, "Bench");
}


/* Function: test_standard_library_functions @ 0x216C */
long long test_standard_library_functions()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0
 unsigned int v8; // w0
 unsigned int v9; // w0
 unsigned int v10; // w0
 unsigned int v11; // w0

 printf(asc_39AA);
 v0 = call_strcpy();
 printf(aLibL101D, v0);
 v1 = call_strcmp();
 printf(aLibL102D, v1);
 v2 = call_strlen();
 printf(aLibL103D, v2);
 v3 = call_memcpy();
 printf(aLibL104D, v3);
 v4 = call_memcmp();
 printf(aLibL105D, v4);
 v5 = call_printf();
 printf(aLibL106D, v5);
 v6 = call_scanf();
 printf(aLibL107D, v6);
 v7 = call_fopen_fclose();
 printf(aLibL108D, v7);
 v8 = call_fread_fwrite();
 printf(aLibL109D, v8);
 v9 = call_malloc_free();
 printf(aLibL110D, v9);
 v10 = call_memset();
 printf(aLibL111D, v10);
 v11 = call_strchr_strstr();
 return printf(aLibL112D, v11);
}


/* Function: param_linux_syscall @ 0x2278 */
long long param_linux_syscall(long long a1)
{
 int v2; // [xsp+Ch] [xbp-14h]

 v2 = syscall(56, 4294967196LL, a1, 0);
 if ( v2 >= 0 )
 {
 syscall(57, (unsigned int)v2);
 return (unsigned int)v2;
 }
 else
 {
 return (unsigned int)-*__errno_location();
 }
}


/* Function: call_linux_syscall @ 0x22F4 */
long long call_linux_syscall()
{
 if ( (int)param_linux_syscall((long long)"/etc/passwd") < 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_win32_api @ 0x232C */
long long param_win32_api(const char *a1)
{
 int v1; // w8
 struct stat v3; // [xsp+0h] [xbp-90h] BYREF

 v3.__unused[1] = (__syscall_slong_t)a1;
 if ( stat(a1, &v3) >= 0 )
 {
 if ( v3.st_size <= 0 )
 v1 = -2;
 else
 v1 = 42;
 HIDWORD(v3.__unused[2]) = v1;
 }
 else
 {
 HIDWORD(v3.__unused[2]) = -1;
 }
 return HIDWORD(v3.__unused[2]);
}


/* Function: call_win32_api @ 0x238C */
long long call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x23A8 */
long long param_fork_exec(const char *a1, long long a2)
{
 int stat_loc; // [xsp+10h] [xbp-20h] BYREF
 __pid_t pid; // [xsp+14h] [xbp-1Ch]
 long long v5; // [xsp+18h] [xbp-18h]
 const char *v6; // [xsp+20h] [xbp-10h]

 v6 = a1;
 v5 = a2;
 pid = fork();
 if ( pid >= 0 )
 {
 if ( !pid )
 {
 execl(v6, v6, v5, 0);
 _exit(127);
 }
 if ( waitpid(pid, &stat_loc, 0) >= 0 )
 {
 if ( (stat_loc & 0x7F) != 0 )
 return (unsigned int)-3;
 else
 return (stat_loc & 0xFF00) >> 8;
 }
 else
 {
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_fork_exec @ 0x2478 */
long long call_fork_exec()
{
 if ( (unsigned int)param_fork_exec("/bin/true", 0) )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_pipe_communication @ 0x24B4 */
long long param_pipe_communication()
{
 size_t v0; // x0
 int v1; // x0
 int fd; // [xsp+1Ch] [xbp-44h]
 ssize_t v5; // [xsp+20h] [xbp-40h]
 __pid_t v6; // [xsp+30h] [xbp-30h]
 unsigned char v7[32]; // [xsp+34h] [xbp-2Ch] BYREF
 int pipedes[2]; // [xsp+54h] [xbp-Ch] BYREF

 if ( pipe(pipedes) >= 0 )
 {
 v6 = fork();
 if ( v6 >= 0 )
 {
 if ( !v6 )
 {
 close(pipedes[0]);
 fd = pipedes[1];
 v0 = strlen("HelloPipe");
 write(fd, "HelloPipe", v0);
 close(pipedes[1]);
 _exit(0);
 }
 close(pipedes[1]);
 v5 = read(pipedes[0], v7, 0x1Fu);
 v7[v5] = 0;
 close(pipedes[0]);
 v1 = 0;
 wait(&v1);
 if ( v5 <= 0 )
 return (unsigned int)-3;
 else
 return 42;
 }
 else
 {
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_pipe_communication @ 0x25C8 */
long long call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x25DC */
long long param_socket_create()
{
 struct sockaddr v1; // [xsp+10h] [xbp-20h] BYREF
 int optval; // [xsp+24h] [xbp-Ch] BYREF
 int v3; // [xsp+28h] [xbp-8h]

 v3 = socket(2, 1, 0);
 if ( v3 >= 0 )
 {
 optval = 1;
 if ( setsockopt(v3, 1, 2, &optval, 4u) >= 0 )
 {
 *(unsigned long long *)&v1.sa_data[6] = 0;
 *(unsigned long long *)&v1.sa_family = 2;
 *(unsigned short *)v1.sa_data = htons(0);
 *(unsigned int *)&v1.sa_data[2] = 0;
 if ( bind(v3, &v1, 0x10u) >= 0 )
 {
 if ( listen(v3, 5) >= 0 )
 {
 close(v3);
 return 42;
 }
 else
 {
 close(v3);
 return (unsigned int)-4;
 }
 }
 else
 {
 close(v3);
 return (unsigned int)-3;
 }
 }
 else
 {
 close(v3);
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_socket_create @ 0x26FC */
long long call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x2710 */
long long param_shmget_shmat()
{
 unsigned int v1; // [xsp+4h] [xbp-2Ch]
 char *dest; // [xsp+8h] [xbp-28h]
 int shmid; // [xsp+14h] [xbp-1Ch]
 int key; // [xsp+18h] [xbp-18h]
 int v5; // [xsp+1Ch] [xbp-14h]

 v5 = open("/tmp/binbench_shm", 66, 438);
 if ( v5 >= 0 )
 {
 close(v5);
 key = ftok("/tmp/binbench_shm", 42);
 if ( key >= 0 )
 {
 shmid = shmget(key, 0x1000u, 950);
 if ( shmid >= 0 )
 {
 dest = (char *)shmat(shmid, 0, 0);
 if ( dest == (char *)-1LL )
 {
 return (unsigned int)-3;
 }
 else
 {
 strcpy(dest, "SharedMemory");
 v1 = strlen(dest);
 shmdt(dest);
 shmctl(shmid, 0, 0);
 return v1;
 }
 }
 else
 {
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_shmget_shmat @ 0x2844 */
long long call_shmget_shmat()
{
 if ( (int)param_shmget_shmat() <= 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_signal_handling @ 0x2874 */
long long param_signal_handling()
{
 int v0; // w8
 int v1; // w8
 bool v3; // [xsp+10h] [xbp-10h]
 bool v4; // [xsp+14h] [xbp-Ch]
 int v5; // [xsp+18h] [xbp-8h]
 int v6; // [xsp+18h] [xbp-8h]

 if ( signal(10, (__sighandler_t)signal_handler) == (__sighandler_t)-1LL )
 {
 return (unsigned int)-1;
 }
 else if ( signal(14, (__sighandler_t)signal_handler) == (__sighandler_t)-1LL )
 {
 return (unsigned int)-2;
 }
 else
 {
 signal_received = 0;
 raise(10);
 v5 = 1000;
 while ( 1 )
 {
 v4 = 0;
 if ( !signal_received )
 {
 v0 = v5--;
 v4 = v0 > 0;
 }
 if ( !v4 )
 break;
 usleep(0x3E8u);
 }
 if ( signal_received )
 {
 if ( signal_number == 10 )
 {
 signal_received = 0;
 alarm(1u);
 v6 = 2000;
 while ( 1 )
 {
 v3 = 0;
 if ( !signal_received )
 {
 v1 = v6--;
 v3 = v1 > 0;
 }
 if ( !v3 )
 break;
 usleep(0x3E8u);
 }
 if ( signal_received && signal_number == 14 )
 {
 signal(10, 0);
 signal(14, 0);
 return 42;
 }
 else
 {
 return (unsigned int)-5;
 }
 }
 else
 {
 return (unsigned int)-4;
 }
 }
 else
 {
 return (unsigned int)-3;
 }
 }
}


/* Function: signal_handler @ 0x2A44 */
long long signal_handler(long long result)
{
 signal_received = 1;
 signal_number = result;
 return result;
}


/* Function: call_signal_handling @ 0x2A6C */
long long call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x2A80 */
long long test_system_calls()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0

 printf(asc_3B50);
 v0 = call_linux_syscall();
 printf(aSysL301D, v0);
 v1 = call_win32_api();
 printf(aSysL302D, v1);
 v2 = call_fork_exec();
 printf(aSysL303D, v2);
 v3 = call_pipe_communication();
 printf(aSysL304D, v3);
 v4 = call_socket_create();
 printf(aSysL305D, v4);
 v5 = call_shmget_shmat();
 printf(aSysL306D, v5);
 v6 = call_signal_handling();
 return printf(aSysL307D, v6);
}


/* Function: thread_compute @ 0x2B28 */
void *thread_compute(void *a1)
{
 unsigned int *result; // x0
 int v2; // [xsp+8h] [xbp-18h]

 v2 = *a1 * *a1;
 result = malloc(4u);
 *result = v2;
 return result;
}


/* Function: param_pthread_create @ 0x2B84 */
long long param_pthread_create(int a1)
{
 unsigned int v2; // [xsp+8h] [xbp-28h]
 void *thread_return; // [xsp+10h] [xbp-20h] BYREF
 int arg; // [xsp+1Ch] [xbp-14h] BYREF
 pthread_t newthread; // [xsp+20h] [xbp-10h] BYREF
 int v6; // [xsp+28h] [xbp-8h]

 v6 = a1;
 arg = a1;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 return (unsigned int)-1;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 v2 = *(unsigned int *)thread_return;
 free(thread_return);
 return v2;
 }
}


/* Function: call_pthread_create @ 0x2C0C */
long long call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: thread_sum @ 0x2C24 */
long long thread_sum(int *a1)
{
 int i; // [xsp+Ch] [xbp-14h]

 a1[2] = 0;
 for ( i = *a1; i <= a1[1]; ++i )
 a1[2] += i;
 return 0;
}


/* Function: param_pthread_join @ 0x2C98 */
long long param_pthread_join()
{
 int j; // [xsp+0h] [xbp-50h]
 unsigned int v2; // [xsp+4h] [xbp-4Ch]
 int i; // [xsp+8h] [xbp-48h]
 unsigned int s[16]; // [xsp+Ch] [xbp-44h] BYREF

 memset(s, 0, 0x24u);
 s[0] = 1;
 s[1] = 10;
 s[3] = 11;
 s[4] = 20;
 s[6] = 21;
 s[7] = 30;
 for ( i = 0; i < 3; ++i )
 {
 if ( pthread_create((pthread_t *)&s[2 * i + 9], 0, (void *(*)(void *))thread_sum, &s[3 * i]) )
 return (unsigned int)-1;
 }
 v2 = 0;
 for ( j = 0; j < 3; ++j )
 {
 if ( pthread_join(*(unsigned long *)&s[2 * j + 9], 0) )
 return (unsigned int)-2;
 v2 += s[3 * j + 2];
 }
 return v2;
}


/* Function: call_pthread_join @ 0x2DEC */
long long call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x2E00 */
long long thread_increment(int *a1)
{
 int i; // [xsp+10h] [xbp-10h]
 int v3; // [xsp+14h] [xbp-Ch]

 v3 = *a1;
 for ( i = 0; i < v3; ++i )
 {
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 }
 return 0;
}


/* Function: param_mutex_lock @ 0x2E8C */
long long param_mutex_lock(int a1, int a2)
{
 int j; // [xsp+10h] [xbp-20h]
 int i; // [xsp+14h] [xbp-1Ch]
 void *ptr; // [xsp+18h] [xbp-18h]
 int arg; // [xsp+24h] [xbp-Ch] BYREF
 int v8; // [xsp+28h] [xbp-8h]

 v8 = a1;
 arg = a2;
 ptr = malloc(8LL * a1);
 if ( ptr )
 {
 shared_counter = 0;
 for ( i = 0; i < v8; ++i )
 {
 if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_increment, &arg) )
 {
 free(ptr);
 return (unsigned int)-2;
 }
 }
 for ( j = 0; j < v8; ++j )
 pthread_join(*((unsigned long long *)ptr + j), 0);
 free(ptr);
 if ( shared_counter == v8 * arg )
 return 42;
 else
 return (unsigned int)-3;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_mutex_lock @ 0x2FCC */
long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x2FE8 */
void *consumer_thread(void *arg)
{
 unsigned int *result; // x0
 int v1; // [xsp+14h] [xbp-Ch]

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: producer_thread @ 0x3070 */
void *producer_thread(void *arg)
{
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x30D8 */
long long param_condition_variable()
{
 unsigned int v1; // [xsp+Ch] [xbp-24h]
 void *thread_return; // [xsp+10h] [xbp-20h] BYREF
 pthread_t newthread; // [xsp+18h] [xbp-18h] BYREF
 pthread_t v4; // [xsp+20h] [xbp-10h] BYREF

 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 {
 return (unsigned int)-1;
 }
 else if ( pthread_create(&v4, 0, (void *(*)(void *))producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return (unsigned int)-2;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 pthread_join(v4, 0);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 return v1;
 }
}


/* Function: call_condition_variable @ 0x319C */
long long call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x31B0 */
long long thread_atomic_increment(int *a1)
{
 int i; // [xsp+30h] [xbp-10h]
 int v3; // [xsp+34h] [xbp-Ch]

 v3 = *a1;
 for ( i = 0; i < v3; ++i )
 {
  _aarch64_ldadd4_acq_rel(1, &atomic_counter);
  _aarch64_cas4_acq_rel(0, 1, &atomic_counter);
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x3298 */
long long thread_atomic_load_store()
{
 unsigned int v0; // w8

 v0 = atomic_load((unsigned int *)&atomic_counter);
 atomic_store(v0 + 100, (unsigned int *)&atomic_counter);
 return 0;
}


/* Function: param_atomic_ops @ 0x32D8 */
long long param_atomic_ops(int a1, int a2)
{
 unsigned int v2; // w8
 int v5; // [xsp+10h] [xbp-30h]
 int j; // [xsp+14h] [xbp-2Ch]
 pthread_t newthread; // [xsp+18h] [xbp-28h] BYREF
 int i; // [xsp+20h] [xbp-20h]
 int v9; // [xsp+24h] [xbp-1Ch]
 void *v10; // [xsp+28h] [xbp-18h]
 int arg; // [xsp+34h] [xbp-Ch] BYREF
 int v12; // [xsp+38h] [xbp-8h]

 v12 = a1;
 arg = a2;
 v10 = malloc(8LL * a1);
 if ( v10 )
 {
 v9 = 0;
 atomic_store(0, (unsigned int *)&atomic_counter);
 for ( i = 0; i < v12; ++i )
 {
 if ( pthread_create((pthread_t *)v10 + i, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 free(v10);
 return (unsigned int)-2;
 }
 }
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread, 0);
 for ( j = 0; j < v12; ++j )
 pthread_join(*((unsigned long long *)v10 + j), 0);
 v2 = atomic_load((unsigned int *)&atomic_counter);
 v5 = v2;
 free(v10);
 if ( v5 <= 0 )
 return (unsigned int)-3;
 else
 return 42;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_atomic_ops @ 0x3458 */
long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x3474 */
void *thread_tls_test(void *a1)
{
 unsigned long long StatusReg; // x8
 unsigned int *result; // x0
 unsigned int *v3; // [xsp+8h] [xbp-28h]
 int v4; // [xsp+1Ch] [xbp-14h]

 StatusReg = _ReadStatusReg(TPIDR_EL0);
 v3 = (unsigned int *)(StatusReg + 16);
 v4 = *(unsigned int *)(StatusReg + 16);
 *(unsigned int *)(StatusReg + 16) = v4 + 50;
 strncpy((char *)(StatusReg + 20), a1, 0x1Fu);
 result = malloc(8u);
 *result = v4;
 result[1] = *v3;
 return result;
}


/* Function: param_thread_local_storage @ 0x3504 */
long long param_thread_local_storage(int a1)
{
 bool v3; // [xsp+Ch] [xbp-54h]
 void *thread_return; // [xsp+28h] [xbp-38h] BYREF
 int m; // [xsp+30h] [xbp-30h]
 int v6; // [xsp+34h] [xbp-2Ch]
 int v7; // [xsp+38h] [xbp-28h]
 int k; // [xsp+3Ch] [xbp-24h]
 int j; // [xsp+40h] [xbp-20h]
 int i; // [xsp+44h] [xbp-1Ch]
 void **v11; // [xsp+48h] [xbp-18h]
 void *v12; // [xsp+50h] [xbp-10h]
 int v13; // [xsp+58h] [xbp-8h]

 v13 = a1;
 v12 = malloc(8LL * a1);
 v11 = malloc(8LL * v13);
 if ( v12 && v11 )
 {
 for ( i = 0; i < v13; ++i )
 {
 v11[i] = malloc(0x10u);
 snprintf((char *)v11[i], 0x10u, "Thread-%d", i);
 }
 for ( j = 0; j < v13; ++j )
 {
 if ( pthread_create((pthread_t *)v12 + j, 0, (void *(*)(void *))thread_tls_test, (void *)v11[j]) )
 {
 for ( k = 0; k <= j; ++k )
 free((void *)v11[k]);
 free(v11);
 free(v12);
 return (unsigned int)-2;
 }
 }
 v7 = 0;
 v6 = 0;
 for ( m = 0; m < v13; ++m )
 {
 pthread_join(*((unsigned long long *)v12 + m), &thread_return);
 v7 += *(unsigned int *)thread_return;
 v6 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free((void *)v11[m]);
 }
 free(v11);
 free(v12);
 v3 = 0;
 if ( v7 == 100 * v13 )
 v3 = v6 == 150 * v13;
 if ( v3 )
 return 42;
 else
 return (unsigned int)-3;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_thread_local_storage @ 0x37A0 */
long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x37B8 */
long long test_thread_concurrency()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0

 printf(asc_3C3A);
 v0 = call_pthread_create();
 printf(aThrL301D, v0);
 v1 = call_pthread_join();
 printf(aThrL302D, v1);
 v2 = call_mutex_lock();
 printf(aThrL303D, v2);
 v3 = call_condition_variable();
 printf(aThrL304D, v3);
 v4 = call_atomic_ops();
 printf(aThrL305D, v4);
 v5 = call_thread_local_storage();
 return printf(aThrL306D, v5);
}


/* Function: main @ 0x384C */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: __aarch64_cas4_acq_rel @ 0x3880 */
unsigned int _aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, atomic_uint *a3)
{
 unsigned int v4; // w16
 int success; // w8

 if ( _aarch64_have_lse_atomics )
 {
 success = atomic_compare_exchange_strong(a3, &result, a2);
 (void)success;
 }
 else
 {
 v4 = result;
 do
 result = __ldaxr((unsigned int *)a3);
 while ( result == v4 && __stlxr(a2, (unsigned int *)a3) );
 }
 return result;
}


/* Function: __aarch64_ldadd4_acq_rel @ 0x38C0 */
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2)
{
 long long result; // x0

 if ( _aarch64_have_lse_atomics )
 return atomic_fetch_add(a2, a1);
 do
 result = __ldaxr((unsigned int *)a2);
 while ( __stlxr(result + a1, (unsigned int *)a2) );
 return result;
}


/* Function: .term_proc @ 0x38F0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x15358 */

/* FAILED to decompile: _exit @ 0x15360 */

/* FAILED to decompile: strlen @ 0x15368 */

/* FAILED to decompile: raise @ 0x15370 */

/* FAILED to decompile: __libc_start_main @ 0x15378 */

/* FAILED to decompile: execl @ 0x15380 */

/* FAILED to decompile: listen @ 0x15388 */

/* FAILED to decompile: shmdt @ 0x15390 */

/* FAILED to decompile: bind @ 0x15398 */

/* FAILED to decompile: __cxa_finalize @ 0x153A0 */

/* FAILED to decompile: pipe @ 0x153A8 */

/* FAILED to decompile: fork @ 0x153B0 */

/* FAILED to decompile: snprintf @ 0x153B8 */

/* FAILED to decompile: fileno @ 0x153C0 */

/* FAILED to decompile: signal @ 0x153C8 */

/* FAILED to decompile: fclose @ 0x153D0 */

/* FAILED to decompile: fopen @ 0x153D8 */

/* FAILED to decompile: malloc @ 0x153E0 */

/* FAILED to decompile: setsockopt @ 0x153E8 */

/* FAILED to decompile: open @ 0x153F0 */

/* FAILED to decompile: pthread_cond_signal @ 0x153F8 */

/* FAILED to decompile: memset @ 0x15400 */

/* FAILED to decompile: shmat @ 0x15408 */

/* FAILED to decompile: sleep @ 0x15410 */

/* FAILED to decompile: htons @ 0x15418 */

/* FAILED to decompile: rewind @ 0x15420 */

/* FAILED to decompile: close @ 0x15428 */

/* FAILED to decompile: stat @ 0x15430 */

/* FAILED to decompile: write @ 0x15438 */

/* FAILED to decompile: __getauxval @ 0x15440 */

/* FAILED to decompile: abort @ 0x15448 */

/* FAILED to decompile: memcmp @ 0x15450 */

/* FAILED to decompile: strcmp @ 0x15458 */

/* FAILED to decompile: shmctl @ 0x15460 */

/* FAILED to decompile: fread @ 0x15468 */

/* FAILED to decompile: ftok @ 0x15470 */

/* FAILED to decompile: free @ 0x15478 */

/* FAILED to decompile: shmget @ 0x15480 */

/* FAILED to decompile: pthread_cond_wait @ 0x15488 */

/* FAILED to decompile: strchr @ 0x15490 */

/* FAILED to decompile: fwrite @ 0x15498 */

/* FAILED to decompile: pthread_create @ 0x154A0 */

/* FAILED to decompile: wait @ 0x154A8 */

/* FAILED to decompile: socket @ 0x154B0 */

/* FAILED to decompile: strcpy @ 0x154B8 */

/* FAILED to decompile: read @ 0x154C0 */

/* FAILED to decompile: strstr @ 0x154C8 */

/* FAILED to decompile: usleep @ 0x154D0 */

/* FAILED to decompile: __isoc99_sscanf @ 0x154D8 */

/* FAILED to decompile: strncpy @ 0x154E0 */

/* FAILED to decompile: printf @ 0x154E8 */

/* FAILED to decompile: __errno_location @ 0x154F0 */

/* FAILED to decompile: pthread_join @ 0x154F8 */

/* FAILED to decompile: alarm @ 0x15500 */

/* FAILED to decompile: pthread_cancel @ 0x15508 */

/* FAILED to decompile: pthread_mutex_lock @ 0x15510 */

/* FAILED to decompile: syscall @ 0x15518 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x15520 */

/* FAILED to decompile: waitpid @ 0x15528 */

/* FAILED to decompile: unlink @ 0x15530 */

/* FAILED to decompile: __gmon_start__ @ 0x15540 */

/* Total functions decompiled: 75, failed: 61 */
