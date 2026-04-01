/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t, ssize_t, uintptr_t, intptr_t provided by system headers */
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#define _InterlockedIncrement(addr) __sync_add_and_fetch((addr), 1)
#define _InterlockedCompareExchange(dest, exchange, comparand) __sync_val_compare_and_swap((dest), (comparand), (exchange))
#define _InterlockedExchange(addr, val) __sync_lock_test_and_set((addr), (val))

/* Windows compatibility macros */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* x86 TLS access via GS segment (Windows) - map to FS segment (Linux) */
static inline unsigned int __readgsdword(unsigned int offset) {
    unsigned int val;
    __asm__ __volatile__("movl %%fs:(%1), %0" : "=r"(val) : "r"((unsigned long)offset));
    return val;
}

static inline void __writegsdword(unsigned int offset, unsigned int val) {
    __asm__ __volatile__("movl %0, %%fs:(%1)" : : "r"(val), "r"((unsigned long)offset));
}

/* bcmp is BSD-specific, map to memcmp */
#define bcmp memcmp

/* Define feature test macros for ISO C99 extensions */
#define __STDC_FORMAT_MACROS
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>
#include <time.h>

/* Declare missing global variables */
int signal_received;
int signal_number;
int shared_counter;
pthread_mutex_t counter_mutex;
int atomic_counter;
int ready;
int data;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;

/* String constants */
static const char asc_336C[] = "=== Standard Library Function Tests ===";
static const char asc_3390[] = "=== System Call Tests ===";
static const char asc_33AB[] = "=== Thread Concurrency Tests ===";

/* Library function format strings */
static const char aLibL101D[] = "strcpy: %zu\n";
static const char aLibL102D[] = "strcmp: %d\n";
static const char aLibL103D[] = "strlen: %d\n";
static const char aLibL104D[] = "memcpy: %d\n";
static const char aLibL105D[] = "memcmp: %d\n";
static const char aLibL106D[] = "printf: %d\n";
static const char aLibL107D[] = "sscanf: %d\n";
static const char aLibL108D[] = "fopen/fclose: %d\n";
static const char aLibL109D[] = "fread/fwrite: %d\n";
static const char aLibL110D[] = "malloc/free: %d\n";
static const char aLibL111D[] = "memset: %d\n";
static const char aLibL112D[] = "strchr/strstr: %d\n";

/* System call format strings */
static const char aSysL301D[] = "syscall: %d\n";
static const char aSysL302D[] = "stat: %d\n";
static const char aSysL303D[] = "fork/exec: %d\n";
static const char aSysL304D[] = "pipe: %d\n";
static const char aSysL305D[] = "socket: %d\n";
static const char aSysL306D[] = "shmget/shmat: %d\n";
static const char aSysL307D[] = "signal: %d\n";

/* Thread format strings */
static const char aThrL301D[] = "pthread_create: %d\n";
static const char aThrL302D[] = "pthread_join: %d\n";
static const char aThrL303D[] = "mutex_lock: %d\n";
static const char aThrL304D[] = "cond_var: %d\n";
static const char aThrL305D[] = "atomic_ops: %d\n";
static const char aThrL306D[] = "thread_local: %d\n";

/* Forward declarations */
void signal_handler(int sig);

/* Note: String constants are defined as static below */

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/6/6_clang_Os_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
    /* Jump table stub - original code used ebx register */
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




/* CRT stub function __do_global_dtors_aux - stub implementation */
void _do_global_dtors_aux()
{
}




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


/* Function: param_strcpy @ 0x1564 */
int param_strcpy(char *dst, const char *src)
{
 strcpy(dst, src);
 return strlen(dst);
}


/* Function: call_strcpy @ 0x1597 */
size_t call_strcpy()
{
 char s[36]; // [esp+8h] [ebp-24h] BYREF

 strcpy(s, "HelloLib");
 return strlen(s);
}


/* Function: param_strcmp @ 0x15C9 */
int param_strcmp(const char *s1, const char *s2)
{
 int v2; // eax
 int v3; // ecx

 v2 = strcmp(s1, s2);
 v3 = 1;
 if ( v2 <= 0 )
 return -(v2 != 0);
 return v3;
}


/* Function: call_strcmp @ 0x1604 */
int call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x1607 */
int param_strlen(const char *str)
{
 return strlen(str);
}


/* Function: call_strlen @ 0x1628 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x162E */
size_t param_memcpy(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
 return n;
}


/* Function: call_memcpy @ 0x165D */
int call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x1663 */
int param_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // eax
 int v4; // ecx

 v3 = memcmp(p1, p2, n);
 v4 = 1;
 if ( v3 <= 0 )
 return -(v3 != 0);
 return v4;
}


/* Function: call_memcmp @ 0x16A2 */
int call_memcmp()
{
 return 2;
}


/* Function: param_printf @ 0x170D */
int param_printf(int x, const char *name)
{
 return printf("Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x1739 */
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x1766 */
int param_scanf(const char *input_str)
{
 int v1; // eax
 int v2; // ecx
 int v4; // [esp+8h] [ebp-14h] BYREF
 unsigned int v5[4]; // [esp+Ch] [ebp-10h] BYREF

 v1 = __isoc99_sscanf(input_str, "%d,%d", v5, &v4);
 v2 = -1;
 if ( v1 == 2 )
 return v5[0] + v4;
 return v2;
}


/* Function: call_scanf @ 0x17AB */
int call_scanf()
{
 int v0; // eax
 int v1; // ecx
 int v3; // [esp+8h] [ebp-14h] BYREF
 unsigned int v4[4]; // [esp+Ch] [ebp-10h] BYREF

 v0 = __isoc99_sscanf("123,456", "%d,%d", v4, &v3);
 v1 = -1;
 if ( v0 == 2 )
 return v4[0] + v3;
 return v1;
}


/* Function: param_fopen_fclose @ 0x17F3 */
int param_fopen_fclose(const char *filename)
{
 FILE *stream; // eax
 FILE *v2; // esi
 int v3; // edi

 stream = fopen(filename, "r");
 if ( !stream )
 return -1;
 v2 = stream;
 v3 = fileno(stream);
 fclose(v2);
 return v3;
}


/* Function: call_fopen_fclose @ 0x1841 */
int call_fopen_fclose()
{
 return (param_fopen_fclose("/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_fread_fwrite @ 0x186A */
int param_fread_fwrite(const char *tmpfile)
{
 FILE *v1; // eax
 FILE *v2; // esi
 size_t v3; // edi
 int result; // eax
 bool v5; // zf
 unsigned char ptr[48]; // [esp+Ch] [ebp-30h] BYREF

 v1 = fopen(tmpfile, "w+");
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v2);
 v3 = fread(ptr, 1u, 0x12u, v2);
 ptr[v3] = 0;
 fclose(v2);
 unlink(tmpfile);
 result = -3;
 if ( v3 == 18 )
 {
 v5 = bcmp(ptr, "BinBench Test Data", 0x13u) == 0;
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


/* Function: call_fread_fwrite @ 0x193C */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x195F */
int param_malloc_free(size_t size)
{
 int v1; // esi
 int *v2; // eax
 int v3; // ecx
 int i; // edx
 int v5; // esi

 v2 = (int *)malloc(4 * size);
 if ( !v2 )
 return -1;
 if ( size )
 {
 v3 = 0;
 for ( i = 0; i != size; ++i )
 {
 v2[i] = v3;
 v3 += 10;
 }
 v1 = *v2;
 }
 v5 = v2[size - 1] + v1;
 free(v2);
 return v5;
}


/* Function: call_malloc_free @ 0x19B9 */
int call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x19DA */
int param_memset(unsigned char *buffer, size_t size)
{
 int v2; // ecx
 int result; // eax

 memset(buffer, 0, size);
 if ( !size )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += buffer[v2++];
 while ( size != v2 );
 return result;
}


/* Function: call_memset @ 0x1A1B */
int call_memset()
{
 return 0;
}


/* Function: param_strchr_strstr @ 0x1A1E */
int param_strchr_strstr(const char *str, char ch_0, const char *substr)
{
 char *v3; // eax
 int v4; // ebp
 char *v5; // eax

 v3 = strchr(str, ch_0);
 v4 = v3 == 0 ? -1 : v3 - str;
 v5 = strstr(str, substr);
 return v4 + (v5 == 0 ? -1 : v5 - str);
}


/* Function: call_strchr_strstr @ 0x1A78 */
int call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x1A7E */
void test_standard_library_functions()
{
 size_t v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // edx
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // [esp+18h] [ebp-34h] BYREF
 char s[48]; // [esp+1Ch] [ebp-30h] BYREF

 puts(asc_336C);
 strcpy(s, "HelloLib");
 v0 = strlen(s);
 printf(aLibL101D, v0);
 printf(aLibL102D, 0);
 printf(aLibL103D, 12);
 printf(aLibL104D, 90);
 v1 = call_memcmp();
 printf(aLibL105D, v1);
 v2 = printf("Value: %d, Name: %s\n", 42, "Test");
 printf(aLibL106D, v2);
 v3 = __isoc99_sscanf("123,456", "%d,%d", s, &v8);
 v4 = -1;
 if ( v3 == 2 )
 v4 = *(unsigned int *)s + v8;
 printf(aLibL107D, v4);
 v5 = param_fopen_fclose("/etc/passwd");
 printf(aLibL108D, (v5 >> 31) | 0x2A);
 v6 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(aLibL109D, v6);
 v7 = param_malloc_free(0xAu);
 printf(aLibL110D, v7);
 printf(aLibL111D, 0);
 printf(aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x1C2F */
int param_linux_syscall(const char *pathname)
{
 int v1; // eax
 int v2; // esi

 v1 = syscall(5, pathname, 0);
 if ( v1 < 0 )
 return -*__errno_location();
 v2 = v1;
 syscall(6, v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x1C78 */
int call_linux_syscall()
{
 return (param_linux_syscall("/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_win32_api @ 0x1CA1 */
int param_win32_api(const char *filename)
{
 int v1; // eax
 int v2; // edx
 int v3; // ecx
 struct stat buf; // [esp+8h] [ebp-64h] BYREF

 v1 = stat(filename, &buf);
 v2 = -2;
 if ( buf.st_size > 0 )
 v2 = 42;
 v3 = -1;
 if ( v1 >= 0 )
 return v2;
 return v3;
}


/* Function: call_win32_api @ 0x1CE7 */
int call_win32_api()
{
 int v0; // eax
 int v1; // edx
 int v2; // ecx
 struct stat buf; // [esp+8h] [ebp-64h] BYREF

 v0 = stat("/etc/passwd", &buf);
 v1 = -2;
 if ( buf.st_size > 0 )
 v1 = 42;
 v2 = -1;
 if ( v0 >= 0 )
 return v1;
 return v2;
}


/* Function: param_fork_exec @ 0x1D30 */
int param_fork_exec(const char *prog)
{
 int v1; // eax
 int result; // eax
 int stat_loc; // [esp+4h] [ebp-8h] BYREF

 v1 = fork();
 if ( v1 < 0 )
 return -1;
 if ( !v1 )
 {
 execl(prog, prog);
 _exit(127);
 }
 if ( waitpid(v1, &stat_loc, 0) < 0 )
 return -2;
 result = -3;
 if ( (stat_loc & 0x7F) == 0 )
 return BYTE1(stat_loc);
 return result;
}


/* Function: call_fork_exec @ 0x1D9F */
int call_fork_exec()
{
 return param_fork_exec("/bin/true") != 0 ? -1 : 0x2A;
}


/* Function: param_pipe_communication @ 0x1DCF */
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


/* Function: call_pipe_communication @ 0x1EA5 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x1EBF */
int param_socket_create()
{
 int v0; // eax
 int v1; // esi
 int v2; // edi
 int result; // eax
 int optval; // [esp+Ch] [ebp-20h] BYREF
 struct sockaddr v5; // [esp+10h] [ebp-1Ch] BYREF

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
 *(unsigned int *)&v5.sa_family = 2;
 memset(&v5.sa_data[2], 0, 12);
 if ( bind(v1, &v5, 0x10u) < 0 )
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


/* Function: call_socket_create @ 0x1F8C */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x1FA6 */
size_t param_shmget_shmat()
{
 int v0; // eax
 int v1; // esi
 key_t v2; // eax
 int v3; // eax
 int v4; // esi
 char *v5; // eax
 char *v6; // edi
 size_t v8; // [esp+8h] [ebp-14h]

 v0 = open("/tmp/binbench_shm", 66, 438);
 v1 = -1;
 if ( v0 >= 0 )
 {
 close(v0);
 v2 = ftok("/tmp/binbench_shm", 42);
 if ( v2 >= 0 )
 {
 v3 = shmget(v2, 4096, 950);
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
 v8 = strlen(v5);
 shmdt(v6);
 shmctl(v4, 0, 0);
 return v8;
 }
 return -3;
 }
 }
 }
 return v1;
}


/* Function: call_shmget_shmat @ 0x208A */
int call_shmget_shmat()
{
 bool v0; // cc
 int result; // eax

 v0 = (int)param_shmget_shmat() <= 0;
 result = 42;
 if ( v0 )
 return -1;
 return result;
}


/* Function: param_signal_handling @ 0x20B1 */
int param_signal_handling()
{
 unsigned int v0; // esi
 bool v1; // cc
 int result; // eax
 unsigned int v3; // esi

 if ( signal(10, signal_handler) == (__sighandler_t)-1 )
 return -1;
 if ( signal(14, signal_handler) == (__sighandler_t)-1 )
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


/* Function: signal_handler @ 0x21FA */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: call_signal_handling @ 0x221B */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x2235 */
void test_system_calls()
{
 int v0; // eax
 int v1; // eax
 int v2; // ecx
 int v3; // edi
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 struct stat buf; // [esp+10h] [ebp-6Ch] BYREF

 puts(asc_3390);
 v0 = param_linux_syscall("/etc/passwd");
 printf(aSysL301D, (v0 >> 31) | 0x2A);
 v1 = stat("/etc/passwd", &buf);
 v2 = -2;
 if ( buf.st_size > 0 )
 v2 = 42;
 v3 = -1;
 if ( v1 < 0 )
 v2 = -1;
 printf(aSysL302D, v2);
 v4 = param_fork_exec("/bin/true");
 printf(aSysL303D, v4 != 0 ? -1 : 0x2A);
 v5 = param_pipe_communication();
 printf(aSysL304D, v5);
 v6 = param_socket_create();
 printf(aSysL305D, v6);
 if ( (int)param_shmget_shmat() > 0 )
 v3 = 42;
 printf(aSysL306D, v3);
 v7 = param_signal_handling();
 printf(aSysL307D, v7);
}


/* Function: thread_compute @ 0x234E */
void * thread_compute(void *arg)
{
 int v1; // esi
 void *result; // eax

 v1 = *(unsigned int *)arg * *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v1;
 return result;
}


/* Function: param_pthread_create @ 0x237A */
int param_pthread_create(int x)
{
 int v1; // esi
 pthread_t newthread; // [esp+8h] [ebp-14h] BYREF
 void *thread_return; // [esp+Ch] [ebp-10h] BYREF
 int arg[3]; // [esp+10h] [ebp-Ch] BYREF

 arg[0] = x;
 if ( pthread_create(&newthread, 0, thread_compute, arg) )
 return -1;
 pthread_join(newthread, &thread_return);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 return v1;
}


/* Function: call_pthread_create @ 0x23E1 */
int call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: thread_sum @ 0x2402 */
void * thread_sum(void *arg)
{
 int v1; // edi
 bool v2; // cc
 unsigned int v3; // edi

 *((unsigned int *)arg + 2) = 0;
 v1 = *((unsigned int *)arg + 1);
 v2 = v1 < *(unsigned int *)arg;
 v3 = v1 - *(unsigned int *)arg;
 if ( !v2 )
 *((unsigned int *)arg + 2) = ((v3 * (unsigned long long)(unsigned int)(~*(unsigned int *)arg + *((unsigned int *)arg + 1))) >> 1)
 + *(unsigned int *)arg
 + v3 * (*(unsigned int *)arg + 1);
 return 0;
}


/* Function: param_pthread_join @ 0x243A */
int param_pthread_join()
{
 int v0; // edi
 unsigned int *v1; // ebp
 int v2; // esi
 unsigned int *v3; // edi
 int v4; // ebp
 unsigned char v6[12]; // [esp+Ch] [ebp-Ch] BYREF
 unsigned int arg[2]; // [esp+18h] [ebp+0h] BYREF
 unsigned int v8[10]; // [esp+20h] [ebp+8h] BYREF

 v0 = 0;
 v1 = arg;
 v8[6] = 0;
 v8[3] = 0;
 v8[0] = 0;
 arg[0] = 1;
 arg[1] = 10;
 v8[1] = 11;
 v8[2] = 20;
 v8[4] = 21;
 v8[5] = 30;
 v2 = -1;
 while ( !pthread_create((pthread_t *)&v6[v0], 0, thread_sum, v1) )
 {
 v0 += 4;
 v1 += 3;
 if ( v0 == 12 )
 {
 v3 = v8;
 v4 = 0;
 v2 = 0;
 while ( !pthread_join(*(unsigned int *)&v6[4 * v4], 0) )
 {
 v2 += *v3;
 ++v4;
 v3 += 3;
 if ( v4 == 3 )
 return v2;
 }
 return -2;
 }
 }
 return v2;
}


/* Function: call_pthread_join @ 0x24F1 */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x250B */
void * thread_increment(void *arg)
{
 int v1; // esi

 v1 = *(unsigned int *)arg;
 if ( *(int *)arg > 0 )
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


/* Function: param_mutex_lock @ 0x255B */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 int v2; // edi
 void *v3; // eax
 void *v4; // ebp
 pthread_t *v5; // esi
 int i; // esi
 int result; // eax
 void *ptr; // [esp+8h] [ebp-14h]

 v2 = thread_count;
 v3 = malloc(4 * thread_count);
 if ( !v3 )
 return -1;
 v4 = v3;
 shared_counter = 0;
 if ( thread_count > 0 )
 {
 v5 = (pthread_t *)v3;
 ptr = v3;
 do
 {
 if ( pthread_create(v5, 0, thread_increment, &iterations_per_thread) )
 {
 free(ptr);
 return -2;
 }
 ++v5;
 --v2;
 }
 while ( v2 );
 v2 = thread_count;
 v4 = ptr;
 for ( i = 0; i != thread_count; ++i )
 pthread_join(*((unsigned int *)ptr + i), 0);
 }
 free(v4);
 result = -3;
 if ( shared_counter == iterations_per_thread * v2 )
 return 42;
 return result;
}


/* Function: call_mutex_lock @ 0x2631 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x2655 */
unsigned int *consumer_thread()
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


/* Function: producer_thread @ 0x26C7 */
void *producer_thread()
{
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x271C */
int param_condition_variable()
{
 int v0; // esi
 pthread_t newthread; // [esp+8h] [ebp-14h] BYREF
 pthread_t th; // [esp+Ch] [ebp-10h] BYREF
 void *thread_return; // [esp+10h] [ebp-Ch] BYREF

 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 return -1;
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
 return v0;
}


/* Function: call_condition_variable @ 0x27C6 */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x27E0 */
void * thread_atomic_increment(void *arg)
{
 int v1; // esi
 signed int v2; // ecx

 v1 = *(unsigned int *)arg;
 if ( *(int *)arg > 0 )
 {
 v2 = 0;
 do
 {
 _InterlockedIncrement(&atomic_counter);
 _InterlockedCompareExchange(&atomic_counter, v2 + 1000, v2);
 ++v2;
 }
 while ( v2 != v1 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x281B */
void *thread_atomic_load_store()
{
 _InterlockedExchange(&atomic_counter, atomic_counter + 100);
 return 0;
}


/* Function: param_atomic_ops @ 0x2839 */
int param_atomic_ops(int thread_count, int iterations)
{
 pthread_t *v2; // eax
 pthread_t *v3; // esi
 int v4; // ebp
 int i; // esi
 int v6; // esi
 int result; // eax
 pthread_t *newthread; // [esp+4h] [ebp-18h]
 pthread_t th[5]; // [esp+8h] [ebp-14h] BYREF

 v2 = (pthread_t *)malloc(4 * thread_count);
 if ( !v2 )
 return -1;
 newthread = v2;
 _InterlockedExchange(&atomic_counter, 0);
 if ( thread_count <= 0 )
 {
LABEL_6:
 if ( !pthread_create(th, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(th[0], 0);
 if ( thread_count > 0 )
 {
 for ( i = 0; i != thread_count; ++i )
 pthread_join(newthread[i], 0);
 }
 v6 = atomic_counter;
 free(newthread);
 result = -3;
 if ( v6 > 0 )
 return 42;
 }
 else
 {
 v3 = v2;
 v4 = thread_count;
 while ( !pthread_create(v3, 0, thread_atomic_increment, &iterations) )
 {
 ++v3;
 if ( !--v4 )
 goto LABEL_6;
 }
 free(newthread);
 return -2;
 }
 return result;
}


/* Function: call_atomic_ops @ 0x2939 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x295D */
unsigned int * thread_tls_test(const char *arg)
{
 unsigned int v1; // esi
 unsigned int *result; // eax

 v1 = __readgsdword(0xFFFFFFDC);
 __writegsdword(0xFFFFFFDC, v1 + 50);
 strncpy((char *)(__readgsdword(0) - 32), arg, 0x1Fu);
 result = malloc(8u);
 *result = v1;
 result[1] = v1 + 50;
 return result;
}


/* Function: param_thread_local_storage @ 0x29B0 */
int param_thread_local_storage(int thread_count)
{
 pthread_t *v1; // edi
 void *v2; // ecx
 int result; // eax
 int i; // esi
 char *v5; // eax
 int v6; // esi
 pthread_t *v7; // ebp
 int v8; // edi
 int v9; // ebp
 int v10; // esi
 int v11; // edi
 void *ptr; // [esp+1Ch] [ebp-20h]
 pthread_t *newthread; // [esp+20h] [ebp-1Ch]
 void *thread_return; // [esp+28h] [ebp-14h] BYREF

 v1 = (pthread_t *)malloc(4 * thread_count);
 v2 = malloc(4 * thread_count);
 result = -1;
 if ( v1 )
 {
 ptr = v2;
 if ( v2 )
 {
 newthread = v1;
 if ( thread_count <= 0 )
 {
 v10 = 0;
 v9 = 0;
LABEL_13:
 free(ptr);
 free(newthread);
 result = -3;
 if ( !(v10 ^ (100 * thread_count) | v9 ^ (150 * thread_count)) )
 return 42;
 }
 else
 {
 for ( i = 0; i != thread_count; ++i )
 {
 v5 = (char *)malloc(0x10u);
 *((unsigned int *)ptr + i) = v5;
 snprintf(v5, 0x10u, "Thread-%d", i);
 }
 v6 = 0;
 v7 = v1;
 while ( !pthread_create(v7, 0, (void *(*)(void *))thread_tls_test, *((void **)ptr + v6)) )
 {
 ++v6;
 ++v7;
 if ( thread_count == v6 )
 {
 v8 = 0;
 v9 = 0;
 v10 = 0;
 do
 {
 pthread_join(newthread[v8], &thread_return);
 v10 += *(unsigned int *)thread_return;
 v9 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free(*((void **)ptr + v8++));
 }
 while ( thread_count != v8 );
 goto LABEL_13;
 }
 }
 v11 = -1;
 do
 free(*((void **)ptr + ++v11));
 while ( v6 != v11 );
 free(ptr);
 free(newthread);
 return -2;
 }
 }
 }
 return result;
}


/* Function: call_thread_local_storage @ 0x2B50 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x2B71 */
void test_thread_concurrency()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 puts(asc_33AB);
 v0 = param_pthread_create(7);
 printf(aThrL301D, v0);
 v1 = param_pthread_join();
 printf(aThrL302D, v1);
 v2 = param_mutex_lock(4, 1000);
 printf(aThrL303D, v2);
 v3 = param_condition_variable();
 printf(aThrL304D, v3);
 v4 = param_atomic_ops(4, 500);
 printf(aThrL305D, v4);
 v5 = param_thread_local_storage(4);
 printf(aThrL306D, v5);
}


/* Function: main @ 0x2C45 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x2CBC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: setsockopt @ 0x61B4 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x61B8 */

/* FAILED to decompile: raise @ 0x61BC */

/* FAILED to decompile: strstr @ 0x61C0 */

/* FAILED to decompile: strcmp @ 0x61C4 */

/* FAILED to decompile: __libc_start_main @ 0x61C8 */

/* FAILED to decompile: read @ 0x61CC */

/* FAILED to decompile: printf @ 0x61D0 */

/* FAILED to decompile: _exit @ 0x61D4 */

/* FAILED to decompile: free @ 0x61D8 */

/* FAILED to decompile: memcpy @ 0x61DC */

/* FAILED to decompile: shmget @ 0x61E0 */

/* FAILED to decompile: fclose @ 0x61E4 */

/* FAILED to decompile: pthread_cond_wait @ 0x61E8 */

/* FAILED to decompile: signal @ 0x61EC */

/* FAILED to decompile: memcmp @ 0x61F0 */

/* FAILED to decompile: sleep @ 0x61F4 */

/* FAILED to decompile: alarm @ 0x61F8 */

/* FAILED to decompile: rewind @ 0x61FC */

/* FAILED to decompile: wait @ 0x6200 */

/* FAILED to decompile: shmat @ 0x6204 */

/* FAILED to decompile: pthread_mutex_lock @ 0x6208 */

/* FAILED to decompile: unlink @ 0x620C */

/* FAILED to decompile: __cxa_finalize @ 0x6210 */

/* FAILED to decompile: fwrite @ 0x6214 */

/* FAILED to decompile: waitpid @ 0x6218 */

/* FAILED to decompile: usleep @ 0x621C */

/* FAILED to decompile: fread @ 0x6220 */

/* FAILED to decompile: strcpy @ 0x6224 */

/* FAILED to decompile: shmctl @ 0x6228 */

/* FAILED to decompile: pthread_cond_signal @ 0x622C */

/* FAILED to decompile: malloc @ 0x6230 */

/* FAILED to decompile: puts @ 0x6234 */

/* FAILED to decompile: stat_0 @ 0x6238 */

/* FAILED to decompile: open @ 0x623C */

/* FAILED to decompile: strchr @ 0x6240 */

/* FAILED to decompile: strlen @ 0x6244 */

/* FAILED to decompile: bcmp @ 0x6248 */

/* FAILED to decompile: write @ 0x624C */

/* FAILED to decompile: bind @ 0x6250 */

/* FAILED to decompile: __isoc99_sscanf @ 0x6254 */

/* FAILED to decompile: fopen @ 0x6258 */

/* FAILED to decompile: memset @ 0x625C */

/* FAILED to decompile: snprintf @ 0x6260 */

/* FAILED to decompile: __errno_location @ 0x6264 */

/* FAILED to decompile: strncpy @ 0x6268 */

/* FAILED to decompile: syscall @ 0x626C */

/* FAILED to decompile: fileno @ 0x6270 */

/* FAILED to decompile: execl @ 0x6274 */

/* FAILED to decompile: pipe @ 0x6278 */

/* FAILED to decompile: shmdt @ 0x627C */

/* FAILED to decompile: pthread_create @ 0x6280 */

/* FAILED to decompile: fork @ 0x6284 */

/* FAILED to decompile: listen @ 0x6288 */

/* FAILED to decompile: ftok @ 0x628C */

/* FAILED to decompile: socket @ 0x6290 */

/* FAILED to decompile: pthread_join @ 0x6294 */

/* FAILED to decompile: pthread_cancel @ 0x6298 */

/* FAILED to decompile: close @ 0x629C */

/* Total functions decompiled: 77, failed: 59 */
