/* Auto-injected type definitions by preprocessor */
/* Standard library headers - must come before external declarations */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/mman.h>
#include <pthread.h>
#include <signal.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/syscall.h>
#include <stdarg.h>
#include <stdatomic.h>
#include <stdint.h>
#include <stddef.h>

/* Additional type definitions not in standard headers */
#ifndef IPC_CREAT
#define IPC_CREAT 0200
#endif
#ifndef IPC_RMID
#define IPC_RMID 0
#endif

/* POSIX type definitions */
#ifndef _USECONDS_T
#define _USECONDS_T
typedef unsigned int useconds_t;
#endif

/* Atomic memory order constants for GCC built-ins */
#ifndef __ATOMIC_SEQ_CST
#define __ATOMIC_SEQ_CST 5
#endif
#ifndef __ATOMIC_RELAXED
#define __ATOMIC_RELAXED 0
#endif
#ifndef __ATOMIC_ACQUIRE
#define __ATOMIC_ACQUIRE 2
#endif
#ifndef __ATOMIC_RELEASE
#define __ATOMIC_RELEASE 3
#endif
#ifndef __ATOMIC_ACQ_REL
#define __ATOMIC_ACQ_REL 4
#endif

/* External declarations */
extern void *_gmon_start__;

/* C99 sscanf declaration */
extern int __isoc99_sscanf(const char *str, const char *format, ...);

/* glibc internal function for errno */
extern int *__errno_location(void);

/* Signal handler type definition */
typedef void (*__sighandler_t)(int);

/* Library function declarations */
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern int scanf(const char *format, ...);
extern int sscanf(const char *str, const char *format, ...);
extern int snprintf(char *str, size_t size, const char *format, ...);
extern size_t strlen(const char *s);
extern char *strcpy(char *dest, const char *src);
extern char *strncpy(char *dest, const char *src, size_t n);
extern int strcmp(const char *s1, const char *s2);
extern char *strchr(const char *s, int c);
extern char *strstr(const char *haystack, const char *needle);
extern void *memcpy(void *dest, const void *src, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern void *memset(void *s, int c, size_t n);
extern void *malloc(size_t size);
extern void free(void *ptr);
extern FILE *fopen(const char *pathname, const char *mode);
extern int fclose(FILE *stream);
extern size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
extern size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
extern int fileno(FILE *stream);
extern void rewind(FILE *stream);
extern int unlink(const char *pathname);
extern int open(const char *pathname, int flags, ...);
extern int close(int fd);
extern ssize_t read(int fd, void *buf, size_t count);
extern ssize_t write(int fd, const void *buf, size_t count);
extern int stat(const char *pathname, struct stat *statbuf);
extern pid_t fork(void);
extern int execl(const char *path, const char *arg, ...);
extern void _exit(int status);
extern pid_t wait(int *wstatus);
extern pid_t waitpid(pid_t pid, int *wstatus, int options);
extern int pipe(int pipefd[2]);
extern int socket(int domain, int type, int protocol);
extern int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
extern int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
extern int listen(int sockfd, int backlog);
extern key_t ftok(const char *pathname, int id);
extern int shmget(key_t key, size_t size, int shmflg);
extern void *shmat(int shmid, const void *shmaddr, int shmflg);
extern int shmdt(const void *shmaddr);
extern int shmctl(int shmid, int cmd, struct shmid_ds *buf);
extern long syscall(long number, ...);
extern __sighandler_t signal(int signum, __sighandler_t handler);
extern int raise(int sig);
extern unsigned int alarm(unsigned int seconds);
extern unsigned int sleep(unsigned int seconds);
extern int usleep(useconds_t usec);
extern int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
extern int pthread_join(pthread_t thread, void **retval);
extern int pthread_mutex_lock(pthread_mutex_t *mutex);
extern int pthread_mutex_unlock(pthread_mutex_t *mutex);
extern int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
extern int pthread_cond_signal(pthread_cond_t *cond);
extern int pthread_cancel(pthread_t thread);



/* Global variables */
static unsigned char unk_43CC[12] = {0};
static unsigned char unk_43D8[12] = {0};
static char asc_436C[] = "Testing standard library functions...";
static char asc_4390[] = "Testing system calls...";
static char asc_43AB[] = "Testing thread concurrency...";
static char aLibL101D[] = "LibL101: %d\n";
static char aLibL102D[] = "LibL102: %d\n";
static char aLibL103D[] = "LibL103: %d\n";
static char aLibL104D[] = "LibL104: %d\n";
static char aLibL105D[] = "LibL105: %d\n";
static char aLibL106D[] = "LibL106: %d\n";
static char aLibL107D[] = "LibL107: %d\n";
static char aLibL108D[] = "LibL108: File test passed\n";
static char aLibL109D[] = "LibL109: %d\n";
static char aLibL110D[] = "LibL110: %d\n";
static char aLibL111D[] = "LibL111: %d\n";
static char aLibL112D[] = "LibL112: %d\n";
static char aSysL301D[] = "SysL301: %d\n";
static char aSysL302D[] = "SysL302: %d\n";
static char aSysL303D[] = "SysL303: %d\n";
static char aSysL304D[] = "SysL304: %d\n";
static char aSysL305D[] = "SysL305: %d\n";
static char aSysL306D[] = "SysL306: %d\n";
static char aSysL307D[] = "SysL307: %d\n";
static char aThrL301D[] = "ThrL301: %d\n";
static char aThrL302D[] = "ThrL302: %d\n";
static char aThrL303D[] = "ThrL303: %d\n";
static char aThrL304D[] = "ThrL304: %d\n";
static char aThrL305D[] = "ThrL305: Atomic ops passed\n";
static char aThrL306D[] = "ThrL306: %d\n";
static int signal_received = 0;
static int signal_number = 0;
static pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
static int shared_counter = 0;
static pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
static int ready = 0;
static int data = 0;
static int atomic_counter = 0;

/* Forward declarations */
int frame_dummy(void);
int _do_global_ctors_aux(void);
void _do_global_dtors_aux(void);
void signal_handler(int a1);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/6/6_clang_O3_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp dword ptr [ebx+8]");
}


/* Function: sub_13E0 @ 0x13E0 */
int sub_13E0(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_141C @ 0x141C */
void sub_141C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1420 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1559 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x155D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_strcpy @ 0x1570 */
char *param_strcpy(char *s, const char *src)
{
 return strcpy(s, src);
}


/* Function: call_strcpy @ 0x15B0 */
size_t call_strcpy()
{
 char s[36]; // [esp+8h] [ebp-24h] BYREF

 strcpy(s, "HelloLib");
 return strlen(s);
}


/* Function: param_strcmp @ 0x15F0 */
int param_strcmp(const char *s1, const char *s2)
{
 int v2; // eax
 int v3; // ecx
 bool v4; // cc
 int result; // eax

 v2 = strcmp(s1, s2);
 v3 = -(v2 != 0);
 v4 = v2 <= 0;
 result = 1;
 if ( v4 )
 return v3;
 return result;
}


/* Function: call_strcmp @ 0x1630 */
int call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x1640 */
size_t param_strlen(const char *s)
{
 return strlen(s);
}


/* Function: call_strlen @ 0x1670 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x1680 */
size_t param_memcpy(void *dest, const void *src, size_t n)
{
 memcpy(dest, src, n);
 return n;
}


/* Function: call_memcpy @ 0x16B0 */
int call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x16C0 */
int param_memcmp(const void *s1, const void *s2, size_t n)
{
 int v3; // eax
 int v4; // ecx
 bool v5; // cc
 int result; // eax

 v3 = memcmp(s1, s2, n);
 v4 = -(v3 != 0);
 v5 = v3 <= 0;
 result = 1;
 if ( v5 )
 return v4;
 return result;
}


/* Function: call_memcmp @ 0x1700 */
int call_memcmp()
{
 int v0; // esi
 int v1; // eax
 int v2; // ecx
 int v3; // eax

 v0 = memcmp(&unk_43D8, &unk_43CC, 0xCu);
 v1 = memcmp(&unk_43D8, &unk_43D8, 0xCu);
 v2 = -(v1 != 0);
 if ( v1 > 0 )
 v2 = 1;
 v3 = -(v0 != 0);
 if ( v0 > 0 )
 v3 = 1;
 return v2 + v3;
}


/* Function: param_printf @ 0x1770 */
int param_printf(int a1, int a2)
{
 return printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x17A0 */
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x17D0 */
int param_scanf(int a1)
{
 bool v1; // zf
 int result; // eax
 int v3; // [esp+0h] [ebp-Ch] BYREF
 int v4; // [esp+4h] [ebp-8h] BYREF

 v1 = __isoc99_sscanf(a1, "%d,%d", &v4, &v3) == 2;
 result = -1;
 if ( v1 )
 return v4 + v3;
 return result;
}


/* Function: call_scanf @ 0x1820 */
int call_scanf()
{
 bool v0; // zf
 int result; // eax
 int v2; // [esp+Ch] [ebp-10h] BYREF
 unsigned int v3[3]; // [esp+10h] [ebp-Ch] BYREF

 v0 = __isoc99_sscanf("123,456", "%d,%d", v3, &v2) == 2;
 result = -1;
 if ( v0 )
 return v3[0] + v2;
 return result;
}


/* Function: param_fopen_fclose @ 0x1870 */
int param_fopen_fclose(const char *filename)
{
 FILE *v1; // eax
 FILE *v2; // esi
 int v3; // edi

 v1 = fopen(filename, "r");
 if ( !v1 )
 return -1;
 v2 = v1;
 v3 = fileno(v1);
 fclose(v2);
 return v3;
}


/* Function: call_fopen_fclose @ 0x18C0 */
int call_fopen_fclose()
{
 FILE *v0; // eax
 FILE *v1; // edi
 int v2; // esi

 v0 = fopen("/etc/passwd", "r");
 if ( !v0 )
 return -1;
 v1 = v0;
 v2 = fileno(v0);
 fclose(v1);
 return (v2 >> 31) | 0x2A;
}


/* Function: param_fread_fwrite @ 0x1920 */
int param_fread_fwrite(const char *filename)
{
 FILE *v1; // eax
 FILE *v2; // esi
 size_t v3; // edi
 int result; // eax
 bool v5; // zf
 unsigned char ptr[48]; // [esp+Ch] [ebp-30h] BYREF

 v1 = fopen(filename, "w+");
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v2);
 v3 = fread(ptr, 1u, 0x12u, v2);
 ptr[v3] = 0;
 fclose(v2);
 unlink(filename);
 result = -3;
 if ( v3 == 18 )
 {
 v5 = memcmp(ptr, "BinBench Test Data", 0x13u) == 0;
 result = -3;
 if ( v5 )
 return 42;
 }
 }
 else
 {
 fclose(v2);
 return -2;
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x1A00 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1A30 */
int param_malloc_free(int a1, int a2)
{
 int v2; // edi
 int *v3; // eax
 int v4; // edx
 int v5; // ebp
 int *v6; // esi
 int v7; // edx
 int v8; // ebp
 int v9; // esi

 v2 = a2;
 v3 = (int *)malloc(4 * a2);
 if ( !v3 )
 return -1;
 if ( a2 )
 {
 v4 = 0;
 if ( (unsigned int)(a2 - 1) >= 3 )
 {
 v4 = 0;
 v5 = 20;
 do
 {
 v3[v4] = v5 - 20;
 v3[v4 + 1] = v5 - 10;
 v3[v4 + 2] = v5;
 v3[v4 + 3] = v5 + 10;
 v4 += 4;
 v5 += 40;
 }
 while ( (a2 & 0xFFFFFFFC) != v4 );
 }
 if ( (a2 & 3) != 0 )
 {
 v6 = &v3[v4];
 v7 = 10 * v4;
 v8 = 0;
 do
 {
 v6[v8++] = v7;
 v7 += 10;
 }
 while ( (a2 & 3) != v8 );
 }
 a1 = *v3;
 v2 = a2;
 }
 v9 = v3[v2 - 1] + a1;
 free(v3);
 return v9;
}


/* Function: call_malloc_free @ 0x1AF0 */
int call_malloc_free()
{
 return 90;
}


/* Function: param_memset @ 0x1B00 */
int param_memset(unsigned char *s, size_t n)
{
 int v2; // edx
 int result; // eax
 unsigned char *v4; // esi
 int v5; // edx

 memset(s, 0, n);
 if ( !n )
 return 0;
 if ( n - 1 >= 7 )
 {
 v2 = 0;
 result = 0;
 do
 {
 result += s[v2] + s[v2 + 1] + s[v2 + 2] + s[v2 + 3] + s[v2 + 4] + s[v2 + 5] + s[v2 + 6] + s[v2 + 7];
 v2 += 8;
 }
 while ( (n & 0xFFFFFFF8) != v2 );
 }
 else
 {
 v2 = 0;
 result = 0;
 }
 if ( (n & 7) != 0 )
 {
 v4 = &s[v2];
 v5 = 0;
 do
 result += v4[v5++];
 while ( (n & 7) != v5 );
 }
 return result;
}


/* Function: call_memset @ 0x1BC0 */
int call_memset()
{
 return 0;
}


/* Function: param_strchr_strstr @ 0x1BD0 */
int param_strchr_strstr(const char *s, char a2, const char *needle)
{
 char *v3; // eax
 int v4; // ebp
 char *v5; // eax

 v3 = strchr(s, a2);
 v4 = v3 == 0 ? -1 : v3 - s;
 v5 = strstr(s, needle);
 return v4 + (v5 == 0 ? -1 : v5 - s);
}


/* Function: call_strchr_strstr @ 0x1C30 */
int call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x1C40 */
int test_standard_library_functions()
{
 size_t v0; // eax
 int v1; // esi
 int v2; // eax
 int v3; // ecx
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // ecx
 FILE *v8; // eax
 FILE *v9; // edi
 int v10; // eax
 int v12; // [esp+8h] [ebp-34h] BYREF
 char s[48]; // [esp+Ch] [ebp-30h] BYREF

 puts(asc_436C);
 strcpy(s, "HelloLib");
 v0 = strlen(s);
 printf(aLibL101D, v0);
 printf(aLibL102D, 0);
 printf(aLibL103D, 12);
 printf(aLibL104D, 90);
 v1 = memcmp(&unk_43D8, &unk_43CC, 0xCu);
 v2 = memcmp(&unk_43D8, &unk_43D8, 0xCu);
 v3 = -(v2 != 0);
 if ( v2 > 0 )
 v3 = 1;
 v4 = -(v1 != 0);
 if ( v1 > 0 )
 v4 = 1;
 printf(aLibL105D, v3 + v4);
 v5 = printf("Value: %d, Name: %s\n", 42, "Test");
 printf(aLibL106D, v5);
 v6 = sscanf("123,456", "%d,%d", (int*)s, &v12);
 v7 = *(unsigned int *)s + v12;
 if ( v6 != 2 )
 v7 = -1;
 printf(aLibL107D, v7);
 v8 = fopen("/etc/passwd", "r");
 if ( v8 )
 {
 v9 = v8;
 fileno(v8);
 fclose(v9);
 }
 printf(aLibL108D);
 v10 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(aLibL109D, v10);
 printf(aLibL110D, 90);
 printf(aLibL111D, 0);
 return printf(aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x1E40 */
int param_linux_syscall(int a1)
{
 int v1; // eax
 int v2; // esi

 v1 = syscall(5, a1, 0);
 if ( v1 < 0 )
 return -*__errno_location();
 v2 = v1;
 syscall(6, v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x1E90 */
int call_linux_syscall()
{
 int v0; // eax
 int v1; // esi

 v0 = syscall(5, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 v1 = -*__errno_location();
 }
 else
 {
 v1 = v0;
 syscall(6, v0);
 }
 return (v1 >> 31) | 0x2A;
}


/* Function: param_win32_api @ 0x1EF0 */
int param_win32_api(const char *file)
{
 int v1; // eax
 int v2; // edx
 bool v3; // sf
 int result; // eax
 struct stat buf; // [esp+0h] [ebp-5Ch] BYREF

 v1 = stat(file, &buf);
 v2 = -2;
 if ( buf.st_size > 0 )
 v2 = 42;
 v3 = v1 < 0;
 result = -1;
 if ( !v3 )
 return v2;
 return result;
}


/* Function: call_win32_api @ 0x1F40 */
int call_win32_api()
{
 int v0; // eax
 int v1; // edx
 bool v2; // sf
 int result; // eax
 struct stat buf; // [esp+0h] [ebp-5Ch] BYREF

 v0 = stat("/etc/passwd", &buf);
 v1 = -2;
 if ( buf.st_size > 0 )
 v1 = 42;
 v2 = v0 < 0;
 result = -1;
 if ( !v2 )
 return v1;
 return result;
}


/* Function: param_fork_exec @ 0x1F90 */
int param_fork_exec(const char *path)
{
 int v1; // eax
 int result; // eax
 int stat_loc; // [esp+4h] [ebp-8h] BYREF

 v1 = fork();
 if ( v1 < 0 )
 return -1;
 if ( !v1 )
 {
 execl(path, path);
 _exit(127);
 }
 if ( waitpid(v1, &stat_loc, 0) < 0 )
 return -2;
 result = -3;
 if ( (stat_loc & 0x7F) == 0 )
 return BYTE1(stat_loc);
 return result;
}


/* Function: call_fork_exec @ 0x2010 */
int call_fork_exec(int a1)
{
 int v1; // eax
 int v2; // esi
 int stat_loc[3]; // [esp+0h] [ebp-Ch] BYREF

 stat_loc[0] = a1;
 v1 = fork();
 v2 = -1;
 if ( v1 >= 0 )
 {
 if ( !v1 )
 {
 execl("/bin/true", "/bin/true");
 _exit(127);
 }
 if ( waitpid(v1, stat_loc, 0) >= 0 && (stat_loc[0] & 0x7F) == 0 )
 return (stat_loc[0] & 0xFF00) != 0 ? -1 : 0x2A;
 }
 return v2;
}


/* Function: param_pipe_communication @ 0x2080 */
int param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // esi
 int result; // eax
 int fd[2]; // [esp+Ch] [ebp-30h] BYREF
 unsigned char buf[40]; // [esp+14h] [ebp-28h] BYREF

 if ( pipe(fd) < 0 )
 return -1;
 v0 = fork();
 if ( v0 < 0 )
 return -2;
 if ( !v0 )
 {
 close(fd[0]);
 write(fd[1], "HelloPipe", 9u);
 close(fd[1]);
 _exit(0);
 }
 close(fd[1]);
 v1 = read(fd[0], buf, 0x1Fu);
 buf[v1] = 0;
 close(fd[0]);
 wait(0);
 result = -3;
 if ( v1 > 0 )
 return 42;
 return result;
}


/* Function: call_pipe_communication @ 0x2160 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x2180 */
int param_socket_create()
{
 int v0; // eax
 int v1; // esi
 int v2; // edi
 int result; // eax
 int optval; // [esp+Ch] [ebp-20h] BYREF
 struct sockaddr_in addr; // [esp+10h] [ebp-1Ch] BYREF

 v0 = socket(2, 1, 0);
 if ( v0 < 0 )
 return -1;
 v1 = v0;
 optval = 1;
 if ( setsockopt(v0, 1, 2, &optval, 4u) < 0 )
 {
 close(v1);
 return -2;
 }
 else
 {
 addr.sin_family = AF_INET;
 memset(&addr.sin_addr, 0, sizeof(addr.sin_addr));
 addr.sin_port = 0;
 if ( bind(v1, (struct sockaddr *)&addr, 0x10u) < 0 )
 {
 close(v1);
 return -3;
 }
 else
 {
 v2 = listen(v1, 5);
 close(v1);
 result = 42;
 if ( v2 < 0 )
 return -4;
 }
 }
 return result;
}


/* Function: call_socket_create @ 0x2270 */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x2290 */
int param_shmget_shmat()
{
 int v0; // eax
 int v1; // esi
 key_t v2; // eax
 int v3; // eax
 int v4; // esi
 char *v5; // eax
 char *v6; // edi
 size_t v7; // ebp

 v0 = open("/tmp/binbench_shm", O_CREAT | O_RDWR, 0666);
 v1 = -1;
 if ( v0 >= 0 )
 {
 close(v0);
 v2 = ftok("/tmp/binbench_shm", 42);
 if ( v2 != (key_t)-1 )
 {
 v3 = shmget(v2, 4096, (IPC_CREAT | 0666));
 if ( v3 < 0 )
 {
 return -2;
 }
 else
 {
 v4 = v3;
 v5 = (char *)shmat(v3, 0, 0);
 if ( v5 != (char *)-1 )
 {
 v6 = v5;
 strcpy(v5, "SharedMemory");
 v7 = strlen(v5);
 shmdt(v6);
 shmctl(v4, IPC_RMID, 0);
 return v7;
 }
 return -3;
 }
 }
 }
 return v1;
}


/* Function: call_shmget_shmat @ 0x2380 */
int call_shmget_shmat()
{
 bool v0; // cc
 int result; // eax

 v0 = param_shmget_shmat() <= 0;
 result = -1;
 if ( !v0 )
 return 42;
 return result;
}


/* Function: param_signal_handling @ 0x23B0 */
int param_signal_handling()
{
 unsigned int v0; // esi
 bool v1; // cc
 int result; // eax
 unsigned int v3; // esi

 if ( signal(10, (__sighandler_t)signal_handler) == ((__sighandler_t)-1) )
 return -1;
 if ( signal(14, (__sighandler_t)signal_handler) == ((__sighandler_t)-1) )
 return -2;
 signal_received = 0;
 raise(10);
 if ( !signal_received )
 {
 v0 = 1000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 break;
 v1 = v0-- <= 1;
 }
 while ( !v1 );
 }
 if ( !signal_received )
 return -3;
 result = -4;
 if ( signal_number == 10 )
 {
 signal_received = 0;
 alarm(1u);
 if ( !signal_received )
 {
 v3 = 2000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 break;
 v1 = v3-- <= 1;
 }
 while ( !v1 );
 }
 result = -5;
 if ( signal_received )
 {
 if ( signal_number == 14 )
 {
 signal(10, 0);
 signal(14, 0);
 return 42;
 }
 }
 }
 return result;
}


/* Function: signal_handler @ 0x2520 */
void signal_handler(int a1)
{
 signal_received = 1;
 signal_number = a1;
}


/* Function: call_signal_handling @ 0x2550 */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x2570 */
int test_system_calls()
{
 int v0; // eax
 int v1; // esi
 int v2; // eax
 int v3; // ecx
 int v4; // edi
 int v5; // eax
 int v6; // ecx
 int v7; // eax
 int v8; // eax
 int v9; // eax
 struct stat buf; // [esp+0h] [ebp-6Ch] BYREF
 int stat_loc; // [esp+4h] [ebp-4h] BYREF

 puts(asc_4390);
 v0 = syscall(5, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 v1 = -*__errno_location();
 }
 else
 {
 v1 = v0;
 syscall(6, v0);
 }
 printf(aSysL301D, (v1 >> 31) | 0x2A);
 v2 = stat("/etc/passwd", &buf);
 v3 = -2;
 if ( buf.st_size > 0 )
 v3 = 42;
 v4 = -1;
 if ( v2 < 0 )
 v3 = -1;
 printf(aSysL302D, v3);
 v5 = fork();
 v6 = -1;
 if ( v5 >= 0 )
 {
 if ( !v5 )
 {
 execl("/bin/true", "/bin/true");
 _exit(127);
 }
 if ( waitpid(v5, &stat_loc, 0) < 0 || (stat_loc & 0x7F) != 0 )
 v6 = -1;
 else
 v6 = (stat_loc & 0xFF00) != 0 ? -1 : 0x2A;
 }
 printf(aSysL303D, v6);
 v7 = param_pipe_communication();
 printf(aSysL304D, v7);
 v8 = param_socket_create();
 printf(aSysL305D, v8);
 if ( param_shmget_shmat() > 0 )
 v4 = 42;
 printf(aSysL306D, v4);
 v9 = param_signal_handling();
 return printf(aSysL307D, v9);
}


/* Function: thread_compute @ 0x2700 */
void * thread_compute(void *a1)
{
 int v1; // esi
 unsigned int *result; // eax

 v1 = *(unsigned int *)a1 * *(unsigned int *)a1;
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: param_pthread_create @ 0x2730 */
int param_pthread_create(int a1)
{
 int v1; // esi
 void *thread_return; // [esp+8h] [ebp-14h] BYREF
 int arg; // [esp+Ch] [ebp-10h] BYREF
 pthread_t newthread; // [esp+10h] [ebp-Ch] BYREF

 arg = a1;
 v1 = -1;
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 pthread_join(newthread, &thread_return);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 return v1;
}


/* Function: call_pthread_create @ 0x27A0 */
int call_pthread_create()
{
 int v0; // esi
 void *thread_return; // [esp+8h] [ebp-14h] BYREF
 int arg; // [esp+Ch] [ebp-10h] BYREF
 pthread_t newthread; // [esp+10h] [ebp-Ch] BYREF

 arg = 7;
 v0 = -1;
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 pthread_join(newthread, &thread_return);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 return v0;
}


/* Function: thread_sum @ 0x2810 */
void * thread_sum(void *a1)
{
 int v1; // edi
 bool v2; // cc
 unsigned int v3; // edi
 unsigned int *arr = (unsigned int *)a1;

 arr[2] = 0;
 v1 = arr[1];
 v2 = v1 < *arr;
 v3 = v1 - *arr;
 if ( !v2 )
 arr[2] = ((v3 * (unsigned long long)(unsigned int)(~*arr + arr[1])) >> 1) + *arr + v3 * (*arr + 1);
 return 0;
}


/* Function: param_pthread_join @ 0x2850 */
int param_pthread_join()
{
 int v0; // esi
 int v1; // edi
 int v2; // ebp
 pthread_t newthread; // [esp+Ch] [ebp-40h] BYREF
 pthread_t th; // [esp+10h] [ebp-3Ch] BYREF
 pthread_t v6; // [esp+14h] [ebp-38h] BYREF
 unsigned int arg[2]; // [esp+18h] [ebp-34h] BYREF
 int v8; // [esp+20h] [ebp-2Ch]
 unsigned int v9[2]; // [esp+24h] [ebp-28h] BYREF
 int v10; // [esp+2Ch] [ebp-20h]
 unsigned int v11[2]; // [esp+30h] [ebp-1Ch] BYREF
 int v12; // [esp+38h] [ebp-14h]

 v12 = 0;
 v10 = 0;
 v8 = 0;
 arg[0] = 1;
 arg[1] = 10;
 v9[0] = 11;
 v9[1] = 20;
 v11[0] = 21;
 v11[1] = 30;
 v0 = -1;
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_sum, arg)
 && !pthread_create(&th, 0, (void *(*)(void *))thread_sum, v9)
 && !pthread_create(&v6, 0, (void *(*)(void *))thread_sum, v11) )
 {
 v0 = -2;
 if ( !pthread_join(newthread, 0) )
 {
 v1 = v8;
 if ( !pthread_join(th, 0) )
 {
 v2 = v10;
 if ( !pthread_join(v6, 0) )
 return v12 + v1 + v2;
 }
 }
 }
 return v0;
}


/* Function: call_pthread_join @ 0x2970 */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x2990 */
void * thread_increment(void *a1)
{
 int v1; // esi
 int *arg = (int *)a1;

 v1 = *arg;
 if ( *arg > 0 )
 {
 do
 {
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 --v1;
 }
 while ( v1 );
 }
 return 0;
}


/* Function: param_mutex_lock @ 0x2A00 */
int param_mutex_lock(int a1, int arg)
{
 int v2; // edi
 void *v3; // eax
 void *v4; // ebp
 pthread_t *v5; // esi
 int i; // esi
 int result; // eax
 void *ptr; // [esp+8h] [ebp-14h]

 v2 = a1;
 v3 = malloc(4 * a1);
 if ( !v3 )
 return -1;
 v4 = v3;
 shared_counter = 0;
 if ( a1 > 0 )
 {
 v5 = (pthread_t *)v3;
 ptr = v3;
 do
 {
 if ( pthread_create(v5, 0, (void *(*)(void *))thread_increment, &arg) )
 {
 free(ptr);
 return -2;
 }
 ++v5;
 --v2;
 }
 while ( v2 );
 v2 = a1;
 v4 = ptr;
 for ( i = 0; i != a1; ++i )
 pthread_join(*((unsigned int *)ptr + i), 0);
 }
 free(v4);
 result = -3;
 if ( shared_counter == arg * v2 )
 return 42;
 return result;
}


/* Function: call_mutex_lock @ 0x2AF0 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x2B20 */
void *consumer_thread(void *arg)
{
 int v0; // edi
 unsigned int *result; // eax

 pthread_mutex_lock(&cond_mutex);
 if ( !ready )
 {
 do
 pthread_cond_wait(&cond, &cond_mutex);
 while ( ready != 1 );
 }
 v0 = 42;
 if ( !data )
 v0 = 0;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v0;
 return result;
}


/* Function: producer_thread @ 0x2BA0 */
void * producer_thread(void *arg)
{
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x2C00 */
int param_condition_variable()
{
 int v0; // esi
 pthread_t newthread; // [esp+8h] [ebp-14h] BYREF
 void *thread_return; // [esp+Ch] [ebp-10h] BYREF
 pthread_t th; // [esp+10h] [ebp-Ch] BYREF

 ready = 0;
 data = 0;
 v0 = -1;
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 {
 if ( pthread_create(&th, 0, (void *(*)(void *))producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return -2;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 pthread_join(th, 0);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 }
 return v0;
}


/* Function: call_condition_variable @ 0x2CB0 */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x2CD0 */
void * thread_atomic_increment(void *a1)
{
 int v1; // edi
 int v2; // esi
 signed int v3; // ecx
 unsigned int v4; // edi
 int *arg = (int *)a1;

 v1 = *arg;
 if ( *arg > 0 )
 {
 v2 = *arg & 3;
 v3 = 0;
 if ( (unsigned int)(v1 - 1) >= 3 )
 {
 v4 = v1 & 0xFFFFFFFC;
 v3 = 0;
 do
 {
 __atomic_add_fetch(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 v3 += 4;
 }
 while ( v3 != (int)v4 );
 }
 for ( ; v2; --v2 )
 {
 __atomic_add_fetch(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 ++v3;
 }
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x2DB0 */
void * thread_atomic_load_store(void *arg)
{
 __atomic_fetch_add(&atomic_counter, 100, __ATOMIC_SEQ_CST);
 return 0;
}


/* Function: param_atomic_ops @ 0x2DD0 */
int param_atomic_ops(int a1, int arg)
{
 pthread_t *v1; // eax
 pthread_t *v2; // esi
 int v3; // ebp
 int i; // esi
 int v5; // esi
 int result; // eax
 pthread_t *newthread; // [esp+4h] [ebp-18h]
 pthread_t th[5]; // [esp+8h] [ebp-14h] BYREF

 v1 = (pthread_t *)malloc(4 * a1);
 if ( !v1 )
 return -1;
 newthread = v1;
 __atomic_store_n(&atomic_counter, 0, __ATOMIC_SEQ_CST);
 if ( a1 <= 0 )
 {
LABEL_6:
 if ( !pthread_create(th, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(th[0], 0);
 if ( a1 > 0 )
 {
 for ( i = 0; i != a1; ++i )
 pthread_join(newthread[i], 0);
 }
 v5 = __atomic_load_n(&atomic_counter, __ATOMIC_SEQ_CST);
 free(newthread);
 result = -3;
 if ( v5 > 0 )
 return 42;
 }
 else
 {
 v2 = v1;
 v3 = a1;
 while ( !pthread_create(v2, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 ++v2;
 if ( !--v3 )
 goto LABEL_6;
 }
 free(newthread);
 return -2;
 }
 return result;
}


/* Function: call_atomic_ops @ 0x2EE0 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Thread-local storage for TLS test */
static _Thread_local unsigned int tls_value = 0;
static _Thread_local char tls_buffer[32];

/* Function: thread_tls_test @ 0x2F10 */
void * thread_tls_test(void *src)
{
 unsigned int v1; // esi
 unsigned int *result; // eax

 v1 = tls_value;
 tls_value = v1 + 50;
 strncpy(tls_buffer, (const char *)src, 0x1Fu);
 tls_buffer[0x1F] = 0;
 result = malloc(8u);
 *result = v1;
 result[1] = v1 + 50;
 return result;
}


/* Function: param_thread_local_storage @ 0x2F70 */
int param_thread_local_storage(int a1)
{
 pthread_t *v1; // ebp
 void *v2; // ecx
 int result; // eax
 int i; // esi
 char *v5; // eax
 int v6; // esi
 int v7; // edi
 int v8; // ebp
 int v9; // esi
 int v10; // edi
 void *ptr; // [esp+10h] [ebp-1Ch]
 pthread_t *newthread; // [esp+14h] [ebp-18h]
 void *thread_return; // [esp+18h] [ebp-14h] BYREF

 v1 = (pthread_t *)malloc(4 * a1);
 v2 = malloc(4 * a1);
 result = -1;
 if ( v1 && v2 )
 {
 ptr = v2;
 newthread = v1;
 if ( a1 <= 0 )
 {
 v9 = 0;
 v8 = 0;
LABEL_13:
 free(ptr);
 free(newthread);
 result = -3;
 if ( !(v9 ^ (100 * a1) | v8 ^ (150 * a1)) )
 return 42;
 }
 else
 {
 for ( i = 0; i != a1; ++i )
 {
 v5 = (char *)malloc(0x10u);
 ((char**)ptr)[i] = v5;
 snprintf(v5, 0x10u, "Thread-%d", i);
 }
 v6 = 0;
 while ( !pthread_create(&v1[v6], 0, (void *(*)(void *))thread_tls_test, ((char**)ptr)[v6]) )
 {
 ++v6;
 if ( a1 == v6 )
 {
 v7 = 0;
 v8 = 0;
 v9 = 0;
 do
 {
 pthread_join(newthread[v7], &thread_return);
 v9 += *(unsigned int *)thread_return;
 v8 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free(((char**)ptr)[v7++]);
 }
 while ( a1 != v7 );
 goto LABEL_13;
 }
 }
 v10 = -1;
 do
 free(((char**)ptr)[++v10]);
 while ( v6 != v10 );
 free(ptr);
 free(newthread);
 return -2;
 }
 }
 return result;
}


/* Function: call_thread_local_storage @ 0x3140 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3170 */
int test_thread_concurrency()
{
 int v0; // esi
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 void *thread_return; // [esp+8h] [ebp-14h] BYREF
 int arg; // [esp+Ch] [ebp-10h] BYREF
 pthread_t newthread; // [esp+10h] [ebp-Ch] BYREF

 puts(asc_43AB);
 arg = 7;
 v0 = -1;
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 pthread_join(newthread, &thread_return);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 printf(aThrL301D, v0);
 v1 = param_pthread_join();
 printf(aThrL302D, v1);
 v2 = param_mutex_lock(4, 1000);
 printf(aThrL303D, v2);
 v3 = param_condition_variable();
 printf(aThrL304D, v3);
 param_atomic_ops(4, 500);
 printf(aThrL305D);
 v4 = param_thread_local_storage(4);
 return printf(aThrL306D, v4);
}


/* Function: main @ 0x3290 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x330C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: setsockopt @ 0x71B4 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x71B8 */

/* FAILED to decompile: raise @ 0x71BC */

/* FAILED to decompile: strstr @ 0x71C0 */

/* FAILED to decompile: strcmp @ 0x71C4 */

/* FAILED to decompile: __libc_start_main @ 0x71C8 */

/* FAILED to decompile: read @ 0x71CC */

/* FAILED to decompile: printf @ 0x71D0 */

/* FAILED to decompile: _exit @ 0x71D4 */

/* FAILED to decompile: free @ 0x71D8 */

/* FAILED to decompile: memcpy @ 0x71DC */

/* FAILED to decompile: shmget @ 0x71E0 */

/* FAILED to decompile: fclose @ 0x71E4 */

/* FAILED to decompile: pthread_cond_wait @ 0x71E8 */

/* FAILED to decompile: signal @ 0x71EC */

/* FAILED to decompile: memcmp @ 0x71F0 */

/* FAILED to decompile: sleep @ 0x71F4 */

/* FAILED to decompile: alarm @ 0x71F8 */

/* FAILED to decompile: rewind @ 0x71FC */

/* FAILED to decompile: wait @ 0x7200 */

/* FAILED to decompile: shmat @ 0x7204 */

/* FAILED to decompile: pthread_mutex_lock @ 0x7208 */

/* FAILED to decompile: unlink @ 0x720C */

/* FAILED to decompile: __cxa_finalize @ 0x7210 */

/* FAILED to decompile: fwrite @ 0x7214 */

/* FAILED to decompile: waitpid @ 0x7218 */

/* FAILED to decompile: usleep @ 0x721C */

/* FAILED to decompile: fread @ 0x7220 */

/* FAILED to decompile: strcpy @ 0x7224 */

/* FAILED to decompile: shmctl @ 0x7228 */

/* FAILED to decompile: pthread_cond_signal @ 0x722C */

/* FAILED to decompile: malloc @ 0x7230 */

/* FAILED to decompile: puts @ 0x7234 */

/* FAILED to decompile: stat @ 0x7238 */

/* FAILED to decompile: open @ 0x723C */

/* FAILED to decompile: strchr @ 0x7240 */

/* FAILED to decompile: strlen @ 0x7244 */

/* FAILED to decompile: bcmp @ 0x7248 */

/* FAILED to decompile: write @ 0x724C */

/* FAILED to decompile: bind @ 0x7250 */

/* FAILED to decompile: __isoc99_sscanf @ 0x7254 */

/* FAILED to decompile: fopen @ 0x7258 */

/* FAILED to decompile: memset @ 0x725C */

/* FAILED to decompile: snprintf @ 0x7260 */

/* FAILED to decompile: __errno_location @ 0x7264 */

/* FAILED to decompile: strncpy @ 0x7268 */

/* FAILED to decompile: syscall @ 0x726C */

/* FAILED to decompile: fileno @ 0x7270 */

/* FAILED to decompile: execl @ 0x7274 */

/* FAILED to decompile: pipe @ 0x7278 */

/* FAILED to decompile: shmdt @ 0x727C */

/* FAILED to decompile: pthread_create @ 0x7280 */

/* FAILED to decompile: fork @ 0x7284 */

/* FAILED to decompile: listen @ 0x7288 */

/* FAILED to decompile: ftok @ 0x728C */

/* FAILED to decompile: socket @ 0x7290 */

/* FAILED to decompile: pthread_join @ 0x7294 */

/* FAILED to decompile: pthread_cancel @ 0x7298 */

/* FAILED to decompile: close @ 0x729C */

/* Total functions decompiled: 77, failed: 59 */
