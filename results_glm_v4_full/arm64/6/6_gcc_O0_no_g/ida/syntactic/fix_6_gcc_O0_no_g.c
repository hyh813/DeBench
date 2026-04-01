/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdatomic.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/stat.h>
#include <sys/shm.h>
#include <signal.h>
#include <errno.h>
#include <sys/auxv.h>
#include <fcntl.h>

/* Global variables */
int _aarch64_have_lse_atomics = 0;
atomic_uint atomic_counter;
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
int ready = 0;
int data = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Helper macros and functions */
#define LODWORD(x) ((unsigned int)(x))

/* ARM64 system register access */
#define _ReadStatusReg(reg) \
    ({ \
        unsigned long long val; \
        __asm__ volatile("mrs %0, " #reg : "=r"(val)); \
        val; \
    })

/* Forward declarations for atomic functions */
unsigned int _aarch64_cas4_acq_rel(unsigned int expected, unsigned int desired, atomic_uint *ptr);
long long _aarch64_ldadd4_acq_rel(unsigned int addend, atomic_uint *ptr);

/* ARM64 atomic intrinsics */
static inline unsigned int __ldaxr(volatile unsigned int *ptr)
{
    unsigned int val;
    __asm__ volatile("ldaxr %w0, [%1]" : "=r"(val) : "r"(ptr) : "memory");
    return val;
}

static inline int __stlxr(unsigned int val, volatile unsigned int *ptr)
{
    int result;
    __asm__ volatile("stlxr %w0, %w1, [%2]" : "=&r"(result) : "r"(val), "r"(ptr) : "memory");
    return result;
}

/* ARM64 system register constants */
#define TPIDR_EL0 "tpidr_el0"

/* String constants */
const char *asc_3B80 = "Standard Library Functions Test";
const char *aLibL101D = "call_strcpy: %d\n";
const char *aLibL102D = "call_strcmp: %d\n";
const char *aLibL103D = "call_strlen: %d\n";
const char *aLibL104D = "call_memcpy: %d\n";
const char *aLibL105D = "call_memcmp: %d\n";
const char *aLibL106D = "call_printf: %d\n";
const char *aLibL107D = "call_scanf: %d\n";
const char *aLibL108D = "call_fopen_fclose: %d\n";
const char *aLibL109D = "call_fread_fwrite: %d\n";
const char *aLibL110D = "call_malloc_free: %d\n";
const char *aLibL111D = "call_memset: %d\n";
const char *aLibL112D = "call_strchr_strstr: %d\n";

const char *asc_3D70 = "System Calls Test";
const char *aSysL301D = "call_linux_syscall: %d\n";
const char *aSysL302D = "call_win32_api: %d\n";
const char *aSysL303D = "call_fork_exec: %d\n";
const char *aSysL304D = "call_pipe_communication: %d\n";
const char *aSysL305D = "call_socket_create: %d\n";
const char *aSysL306D = "call_shmget_shmat: %d\n";
const char *aSysL307D = "call_signal_handling: %d\n";

const char *asc_3EA8 = "Thread Concurrency Test";
const char *aThrL301D = "call_pthread_create: %d\n";
const char *aThrL302D = "call_pthread_join: %d\n";
const char *aThrL303D = "call_mutex_lock: %d\n";
const char *aThrL304D = "call_condition_variable: %d\n";
const char *aThrL305D = "call_atomic_ops: %d\n";
const char *aThrL306D = "call_thread_local_storage: %d\n";

unsigned long long xmmword_3E70 = 0x0000000100000001ULL;
unsigned long long xmmword_3E80 = 0x0000000100000005ULL;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/6/6_gcc_O0_no_g
 * Processor: arm
 */

/* External CRT functions */
long long call_weak_fn(void)
{
    return 0;
}

void JUMPOUT(long long addr)
{
    /* Stub function - does nothing */
}

/* Function: .init_proc @ 0x13B0 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_13D0 @ 0x13D0 */
void sub_13D0()
{
 JUMPOUT(0);
}


/* Function: init_have_lse_atomics @ 0x1800 */
long long init_have_lse_atomics()
{
 long long result; // x0

 result = ((unsigned int)getauxval(16) >> 8) & 1;
 _aarch64_have_lse_atomics = result;
 return result;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_strcpy @ 0x1954 */
size_t param_strcpy(char *a1, const char *a2)
{
 strcpy(a1, a2);
 return strlen(a1);
}


/* Function: call_strcpy @ 0x1980 */
long long call_strcpy()
{
 char v1[32]; // [xsp+18h] [xbp+18h] BYREF

 return (unsigned int)param_strcpy(v1, "HelloLib");
}


/* Function: param_strcmp @ 0x19E8 */
long long param_strcmp(const char *a1, const char *a2)
{
 int v3; // [xsp+2Ch] [xbp+2Ch]

 v3 = strcmp(a1, a2);
 if ( v3 > 0 )
 return 1;
 if ( v3 >= 0 )
 return 0;
 return 0xFFFFFFFFLL;
}


/* Function: call_strcmp @ 0x1A3C */
long long call_strcmp()
{
 int v1; // [xsp+14h] [xbp+14h]
 int v2; // [xsp+18h] [xbp+18h]

 v1 = param_strcmp("abc", "def");
 v2 = param_strcmp("xyz", "xyz");
 return v1 + v2 + (unsigned int)param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x1AA8 */
size_t param_strlen(const char *a1)
{
 return strlen(a1);
}


/* Function: call_strlen @ 0x1ACC */
size_t call_strlen()
{
 return param_strlen("BinBench2025");
}


/* Function: param_memcpy @ 0x1AF0 */
size_t param_memcpy(void *a1, const void *a2, size_t a3)
{
 memcpy(a1, a2, a3);
 return a3;
}


/* Function: call_memcpy @ 0x1B20 */
long long call_memcpy()
{
 unsigned long long v1[2]; // [xsp+18h] [xbp+18h] BYREF
 int v2; // [xsp+28h] [xbp+28h]
 long long v3; // [xsp+30h] [xbp+30h] BYREF
 long long v4; // [xsp+38h] [xbp+38h]
 int v5; // [xsp+40h] [xbp+40h]

 v1[0] = *(unsigned long long *)"\n";
 v1[1] = 0x280000001ELL;
 v2 = 50;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 param_memcpy(&v3, v1, 0x14u);
 return (unsigned int)(v3 + v4 + v5);
}


/* Function: param_memcmp @ 0x1BB8 */
long long param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v4; // [xsp+3Ch] [xbp+3Ch]

 v4 = memcmp(a1, a2, a3);
 if ( v4 > 0 )
 return 1;
 if ( v4 >= 0 )
 return 0;
 return 0xFFFFFFFFLL;
}


/* Function: call_memcmp @ 0x1C14 */
long long call_memcmp()
{
 int v1; // [xsp+10h] [xbp+10h]
 long long v2; // [xsp+18h] [xbp+18h] BYREF
 int v3; // [xsp+20h] [xbp+20h]
 long long v4; // [xsp+28h] [xbp+28h] BYREF
 int v5; // [xsp+30h] [xbp+30h]
 long long v6; // [xsp+38h] [xbp+38h] BYREF
 int v7; // [xsp+40h] [xbp+40h]

 v2 = 0x200000001LL;
 v3 = 3;
 v4 = 0x200000001LL;
 v5 = 4;
 v6 = 0x200000001LL;
 v7 = 3;
 v1 = param_memcmp(&v2, &v4, 0xCu);
 return v1 + (unsigned int)param_memcmp(&v2, &v6, 0xCu);
}


/* Function: param_printf @ 0x1CE8 */
long long param_printf(int a1, const char *a2)
{
 return (unsigned int)printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x1D1C */
long long call_printf()
{
 return (unsigned int)param_printf(42, "Test");
}


/* Function: param_scanf @ 0x1D44 */
long long param_scanf(long long a1)
{
 long long result; // x0
 int v2; // [xsp+2Ch] [xbp+2Ch] BYREF
 int v3; // [xsp+30h] [xbp+30h] BYREF
 int v4; // [xsp+34h] [xbp+34h]

 v4 = sscanf((const char *)a1, "%d,%d", &v2, &v3);
 if ( v4 == 2 )
 result = (unsigned int)(v2 + v3);
 else
 result = (unsigned int)-1;
 return (unsigned int)result;
}


/* Function: call_scanf @ 0x1DD8 */
long long call_scanf()
{
 return param_scanf((long long)"123,456");
}


/* Function: param_fopen_fclose @ 0x1DF4 */
long long param_fopen_fclose(const char *a1)
{
 unsigned int v2; // [xsp+24h] [xbp+24h]
 FILE *stream; // [xsp+28h] [xbp+28h]

 stream = fopen(a1, "r");
 if ( !stream )
 return 0xFFFFFFFFLL;
 v2 = fileno(stream);
 fclose(stream);
 return v2;
}


/* Function: call_fopen_fclose @ 0x1E48 */
long long call_fopen_fclose()
{
 if ( (int)param_fopen_fclose("/etc/passwd") < 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_fread_fwrite @ 0x1E80 */
long long param_fread_fwrite(const char *a1)
{
 long long result; // x0
 size_t v2; // x0
 FILE *stream; // [xsp+30h] [xbp+30h]
 size_t n; // [xsp+38h] [xbp+38h]
 size_t v6; // [xsp+40h] [xbp+40h]
 char ptr[32]; // [xsp+48h] [xbp+48h] BYREF

 stream = fopen(a1, "w+");
 if ( stream )
 {
 v2 = strlen("BinBench Test Data");
 n = fwrite("BinBench Test Data", 1u, v2, stream);
 if ( n == strlen("BinBench Test Data") )
 {
 rewind(stream);
 v6 = fread(ptr, 1u, n, stream);
 ptr[v6] = 0;
 fclose(stream);
 unlink(a1);
 if ( v6 == n && !strcmp(ptr, "BinBench Test Data") )
 result = (unsigned int)42;
 else
 result = (unsigned int)-3;
 }
 else
 {
 fclose(stream);
 result = (unsigned int)-2;
 }
 }
 else
 {
 result = (unsigned int)-1;
 }
 return (unsigned int)result;
}


/* Function: call_fread_fwrite @ 0x1FB8 */
long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1FD4 */
long long param_malloc_free(unsigned long long a1)
{
 unsigned int v3; // [xsp+2Ch] [xbp+2Ch]
 unsigned long long i; // [xsp+30h] [xbp+30h]
 unsigned int *ptr; // [xsp+38h] [xbp+38h]

 ptr = malloc(4 * a1);
 if ( !ptr )
 return 0xFFFFFFFFLL;
 for ( i = 0; i < a1; ++i )
 ptr[i] = 10 * i;
 v3 = *ptr + ptr[a1 - 1];
 free(ptr);
 return v3;
}


/* Function: call_malloc_free @ 0x209C */
long long call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x20B4 */
long long param_memset(unsigned char *a1, size_t a2)
{
 unsigned int v5; // [xsp+2Ch] [xbp+2Ch]
 size_t i; // [xsp+30h] [xbp+30h]

 memset(a1, 0, a2);
 v5 = 0;
 for ( i = 0; i < a2; ++i )
 v5 += a1[i];
 return v5;
}


/* Function: call_memset @ 0x2130 */
long long call_memset()
{
 int i; // [xsp+1Ch] [xbp+1Ch]
 unsigned int v2[10]; // [xsp+20h] [xbp+20h] BYREF

 for ( i = 0; i <= 9; ++i )
 v2[i] = 255;
 param_memset((unsigned char *)v2, 0x28u);
 return (unsigned int)(v2[0] + v2[9]);
}


/* Function: param_strchr_strstr @ 0x21C8 */
long long param_strchr_strstr(const char *a1, unsigned char a2, const char *a3)
{
 int v3; // w0
 int v4; // w0
 int v8; // [xsp+38h] [xbp+38h]
 char *v9; // [xsp+40h] [xbp+40h]
 char *v10; // [xsp+48h] [xbp+48h]

 v9 = strchr(a1, a2);
 if ( v9 )
 v3 = (unsigned int)v9 - (unsigned int)a1;
 else
 v3 = -1;
 v8 = v3;
 v10 = strstr(a1, a3);
 if ( v10 )
 v4 = (unsigned int)v10 - (unsigned int)a1;
 else
 v4 = -1;
 return (unsigned int)(v8 + v4);
}


/* Function: call_strchr_strstr @ 0x225C */
long long call_strchr_strstr()
{
 return (unsigned int)param_strchr_strstr("Hello BinBench Test", 0x42u, "Bench");
}


/* Function: test_standard_library_functions @ 0x2294 */
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

 puts(asc_3B80);
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


/* Function: param_linux_syscall @ 0x23A4 */
long long param_linux_syscall(long long a1)
{
 int v2; // [xsp+2Ch] [xbp+2Ch]

 v2 = syscall(56, 4294967196LL, a1, 0);
 if ( v2 < 0 )
 return (unsigned int)-*__errno_location();
 syscall(57, (unsigned int)v2);
 return (unsigned int)v2;
}


/* Function: call_linux_syscall @ 0x23FC */
long long call_linux_syscall()
{
 if ( (int)param_linux_syscall((long long)"/etc/passwd") < 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_win32_api @ 0x2434 */
long long param_win32_api(const char *a1)
{
 long long result; // x0
 unsigned char v2[136]; // [xsp+28h] [xbp+28h] BYREF

 if ( stat(a1, (struct stat *)v2) >= 0 )
 {
 if ( *(long long *)&v2[48] <= 0 )
 result = (unsigned int)-2;
 else
 result = (unsigned int)42;
 }
 else
 {
 result = (unsigned int)-1;
 }
 return (unsigned int)result;
}


/* Function: call_win32_api @ 0x24BC */
long long call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x24D8 */
long long param_fork_exec(const char *a1, long long a2)
{
 long long result; // x0
 int stat_loc; // [xsp+2Ch] [xbp+2Ch] BYREF
 __pid_t pid; // [xsp+30h] [xbp+30h]
 __pid_t v7; // [xsp+34h] [xbp+34h]

 pid = fork();
 if ( pid >= 0 )
 {
 if ( !pid )
 {
 execl(a1, a1, a2, 0);
 _exit(127);
 }
 v7 = waitpid(pid, &stat_loc, 0);
 if ( v7 >= 0 )
 {
 if ( (stat_loc & 0x7F) != 0 )
 result = (unsigned int)-3;
 else
 result = (unsigned int)((stat_loc >> 8) & 0xFF);
 }
 else
 {
 result = (unsigned int)-2;
 }
 }
 else
 {
 result = (unsigned int)-1;
 }
 return (unsigned int)result;
}


/* Function: call_fork_exec @ 0x25C0 */
long long call_fork_exec()
{
 if ( (unsigned int)param_fork_exec("/bin/true", 0) )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_pipe_communication @ 0x25FC */
long long param_pipe_communication()
{
 long long result; // x0
 int v1; // w19
 size_t v2; // x0
 __pid_t v4; // [xsp+2Ch] [xbp+2Ch]
 ssize_t v5; // [xsp+30h] [xbp+30h]
 int pipedes[2]; // [xsp+40h] [xbp+40h] BYREF
 unsigned char buf[32]; // [xsp+48h] [xbp+48h] BYREF
 int *v3; // [xsp+50h] [xbp+50h]

 if ( pipe(pipedes) >= 0 )
 {
 v4 = fork();
 if ( v4 >= 0 )
 {
 if ( !v4 )
 {
 close(pipedes[0]);
 v1 = pipedes[1];
 v2 = strlen("HelloPipe");
 write(v1, "HelloPipe", v2);
 close(pipedes[1]);
 _exit(0);
 }
 close(pipedes[1]);
 v5 = read(pipedes[0], buf, 0x1Fu);
 buf[v5] = 0;
 close(pipedes[0]);
 v3 = 0;
 wait(v3);
 if ( v5 <= 0 )
 result = (unsigned int)-3;
 else
 result = (unsigned int)42;
 }
 else
 {
 result = (unsigned int)-2;
 }
 }
 else
 {
 result = (unsigned int)-1;
 }
 return (unsigned int)result;
}


/* Function: call_pipe_communication @ 0x2720 */
long long call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x2734 */
long long param_socket_create()
{
 long long result; // x0
 int optval; // [xsp+10h] [xbp+10h] BYREF
 int fd; // [xsp+14h] [xbp+14h]
 struct sockaddr s; // [xsp+18h] [xbp+18h] BYREF

 fd = socket(2, 1, 0);
 if ( fd >= 0 )
 {
 optval = 1;
 if ( setsockopt(fd, 1, 2, &optval, 4u) >= 0 )
 {
 memset(&s, 0, sizeof(s));
 s.sa_family = 2;
 *(unsigned short *)s.sa_data = htons(0);
 *(unsigned int *)&s.sa_data[2] = 0;
 if ( bind(fd, &s, 0x10u) >= 0 )
 {
 if ( listen(fd, 5) >= 0 )
 {
 close(fd);
 result = (unsigned int)42;
 }
 else
 {
 close(fd);
 result = (unsigned int)-4;
 }
 }
 else
 {
 close(fd);
 result = (unsigned int)-3;
 }
 }
 else
 {
 close(fd);
 result = (unsigned int)-2;
 }
 }
 else
 {
 result = (unsigned int)-1;
 }
 return (unsigned int)result;
}


/* Function: call_socket_create @ 0x286C */
long long call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x2880 */
long long param_shmget_shmat()
{
 int fd; // [xsp+10h] [xbp+10h]
 int key; // [xsp+14h] [xbp+14h]
 int shmid; // [xsp+18h] [xbp+18h]
 unsigned int v4; // [xsp+1Ch] [xbp+1Ch]
 char *s; // [xsp+28h] [xbp+28h]

 fd = open("/tmp/binbench_shm", 66, 438);
 if ( fd < 0 )
 return 0xFFFFFFFFLL;
 close(fd);
 key = ftok("/tmp/binbench_shm", 42);
 if ( key < 0 )
 return 0xFFFFFFFFLL;
 shmid = shmget(key, 0x1000u, 950);
 if ( shmid < 0 )
 return 4294967294LL;
 s = (char *)shmat(shmid, 0, 0);
 if ( s == (char *)-1LL )
 return 4294967293LL;
 strcpy(s, "SharedMemory");
 v4 = strlen(s);
 shmdt(s);
 shmctl(shmid, 0, 0);
 return v4;
}


/* Function: call_shmget_shmat @ 0x298C */
long long call_shmget_shmat()
{
 if ( (int)param_shmget_shmat() <= 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: signal_handler @ 0x29BC */
int * signal_handler(int a1)
{
 int *result; // x0

 signal_received = 1;
 result = &signal_number;
 signal_number = a1;
 return result;
}


/* Function: param_signal_handling @ 0x29F0 */
long long param_signal_handling()
{
 int v1; // w0
 int v2; // w0
 int v3; // [xsp+1Ch] [xbp+1Ch]
 int v4; // [xsp+1Ch] [xbp+1Ch]

 if ( signal(10, (__sighandler_t)signal_handler) == (__sighandler_t)-1LL )
 return 0xFFFFFFFFLL;
 if ( signal(14, (__sighandler_t)signal_handler) == (__sighandler_t)-1LL )
 return 4294967294LL;
 signal_received = 0;
 raise(10);
 v3 = 1000;
 while ( !signal_received )
 {
 v1 = v3--;
 if ( v1 <= 0 )
 break;
 usleep(0x3E8u);
 }
 if ( !signal_received )
 return 4294967293LL;
 if ( signal_number != 10 )
 return 4294967292LL;
 signal_received = 0;
 alarm(1u);
 v4 = 2000;
 while ( !signal_received )
 {
 v2 = v4--;
 if ( v2 <= 0 )
 break;
 usleep(0x3E8u);
 }
 if ( !signal_received || signal_number != 14 )
 return 4294967291LL;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: call_signal_handling @ 0x2B64 */
long long call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x2B78 */
long long test_system_calls()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0

 puts(asc_3D70);
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


/* Function: thread_compute @ 0x2C24 */
unsigned int * thread_compute(unsigned int *a1)
{
 unsigned int *result; // x0
 int v2; // [xsp+2Ch] [xbp+2Ch]

 v2 = *a1 * *a1;
 result = malloc(4u);
 *result = v2;
 return result;
}


/* Function: param_pthread_create @ 0x2C74 */
long long param_pthread_create(int a1)
{
 long long result; // x0
 int arg; // [xsp+2Ch] [xbp+2Ch] BYREF
 int v4; // [xsp+34h] [xbp+34h]
 pthread_t newthread; // [xsp+38h] [xbp+38h] BYREF
 void *thread_return; // [xsp+40h] [xbp+40h] BYREF

 arg = a1;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 result = (unsigned int)-1;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 v4 = *(unsigned int *)thread_return;
 free(thread_return);
 result = (unsigned int)v4;
 }
 return (unsigned int)result;
}


/* Function: call_pthread_create @ 0x2D28 */
long long call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: thread_sum @ 0x2D40 */
long long thread_sum(int *a1)
{
 int i; // [xsp+14h] [xbp-Ch]

 a1[2] = 0;
 for ( i = *a1; i <= a1[1]; ++i )
 a1[2] += i;
 return 0;
}


/* Function: param_pthread_join @ 0x2DAC */
long long param_pthread_join()
{
 long long result; // x0
 int i; // [xsp+1Ch] [xbp+1Ch]
 int v2; // [xsp+20h] [xbp+20h]
 int j; // [xsp+24h] [xbp+24h]
 pthread_t v4[3]; // [xsp+28h] [xbp+28h] BYREF
 unsigned long long v5[2]; // [xsp+40h] [xbp+40h] BYREF
 int v6; // [xsp+60h] [xbp+60h]

 v5[0] = xmmword_3E70;
 v5[1] = xmmword_3E80;
 v6 = 0;
 for ( i = 0; i <= 2; ++i )
 {
 if ( pthread_create(&v4[i], 0, (void *(*)(void *))thread_sum, (char *)v5 + 12 * i) )
 {
 result = (unsigned int)-1;
 return (unsigned int)result;
 }
 }
 v2 = 0;
 for ( j = 0; j <= 2; ++j )
 {
 if ( pthread_join(v4[j], 0) )
 {
 result = (unsigned int)-2;
 return (unsigned int)result;
 }
 v2 += *((unsigned int *)v5 + 3 * j + 2);
 }
 result = (unsigned int)v2;
 return (unsigned int)result;
}


/* Function: call_pthread_join @ 0x2F00 */
long long call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x2F14 */
long long thread_increment(int *a1)
{
 int i; // [xsp+28h] [xbp+28h]
 int v3; // [xsp+2Ch] [xbp+2Ch]

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


/* Function: param_mutex_lock @ 0x2F98 */
long long param_mutex_lock(int a1, int a2)
{
 int arg; // [xsp+18h] [xbp+18h] BYREF
 int v4; // [xsp+1Ch] [xbp+1Ch]
 int i; // [xsp+2Ch] [xbp+2Ch]
 int j; // [xsp+30h] [xbp+30h]
 int v7; // [xsp+34h] [xbp+34h]
 void *ptr; // [xsp+38h] [xbp+38h]

 v4 = a1;
 arg = a2;
 ptr = malloc(8LL * a1);
 if ( !ptr )
 return 0xFFFFFFFFLL;
 shared_counter = 0;
 for ( i = 0; i < v4; ++i )
 {
 if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_increment, &arg) )
 {
 free(ptr);
 return 4294967294LL;
 }
 }
 for ( j = 0; j < v4; ++j )
 pthread_join(*((unsigned long long *)ptr + j), 0);
 free(ptr);
 v7 = v4 * arg;
 if ( v4 * arg == shared_counter )
 return (unsigned int)42;
 else
 return (unsigned int)4294967293LL;
}


/* Function: call_mutex_lock @ 0x30C4 */
long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x30E0 */
unsigned int *consumer_thread()
{
 unsigned int *result; // x0
 int v1; // [xsp+24h] [xbp+24h]

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: producer_thread @ 0x3164 */
long long producer_thread()
{
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x31C8 */
long long param_condition_variable()
{
 long long result; // x0
 int v1; // [xsp+1Ch] [xbp+1Ch]
 pthread_t th; // [xsp+20h] [xbp+20h] BYREF
 pthread_t newthread; // [xsp+28h] [xbp+28h] BYREF
 void *thread_return; // [xsp+30h] [xbp+30h] BYREF

 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 {
 result = (unsigned int)-1;
 }
 else if ( pthread_create(&th, 0, (void *(*)(void *))producer_thread, 0) )
 {
 pthread_cancel(newthread);
 result = (unsigned int)-2;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 pthread_join(th, 0);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 result = (unsigned int)v1;
 }
 return (unsigned int)result;
}


/* Function: call_condition_variable @ 0x32BC */
long long call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x32D0 */
long long thread_atomic_increment(int *a1)
{
 unsigned int i; // [xsp+3Ch] [xbp+3Ch]
 int v3; // [xsp+40h] [xbp+40h]

 v3 = *a1;
 for ( i = 0; (int)i < v3; ++i )
 {
 _aarch64_ldadd4_acq_rel(1, &atomic_counter);
 _aarch64_cas4_acq_rel(i, i + 1000, &atomic_counter);
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x33BC */
long long thread_atomic_load_store()
{
 unsigned int v0; // w0

 v0 = atomic_load((unsigned int *)&atomic_counter);
 atomic_store((unsigned int *)&atomic_counter, v0 + 100);
 return 0;
}


/* Function: param_atomic_ops @ 0x33F8 */
long long param_atomic_ops(int a1, int a2)
{
 long long result; // x0
 unsigned int v3; // w0
 int arg; // [xsp+18h] [xbp+18h] BYREF
 int v5; // [xsp+1Ch] [xbp+1Ch]
 int i; // [xsp+2Ch] [xbp+2Ch]
 int j; // [xsp+30h] [xbp+30h]
 int v8; // [xsp+34h] [xbp+34h]
 pthread_t newthread; // [xsp+38h] [xbp+38h] BYREF
 void *ptr; // [xsp+40h] [xbp+40h]

 v5 = a1;
 arg = a2;
 ptr = malloc(8LL * a1);
 if ( !ptr )
 {
 result = (unsigned int)-1;
 return (unsigned int)result;
 }
 atomic_store((unsigned int *)&atomic_counter, 0);
 for ( i = 0; i < v5; ++i )
 {
 if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 free(ptr);
 result = (unsigned int)-2;
 return (unsigned int)result;
 }
 }
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread, 0);
 for ( j = 0; j < v5; ++j )
 pthread_join(*((unsigned long long *)ptr + j), 0);
 v3 = atomic_load((unsigned int *)&atomic_counter);
 v8 = v3;
 free(ptr);
 if ( v8 <= 0 )
 result = (unsigned int)-3;
 else
 result = (unsigned int)42;
 return (unsigned int)result;
}


/* Function: call_atomic_ops @ 0x3584 */
long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x35A0 */
unsigned int * thread_tls_test(const char *a1)
{
 int v1; // w1
 unsigned int *result; // x0
 int v3; // [xsp+2Ch] [xbp+2Ch]

 v3 = *(unsigned int *)(_ReadStatusReg(TPIDR_EL0) + 16);
 v1 = v3 + 50;
 *(unsigned int *)(_ReadStatusReg(TPIDR_EL0) + 16) = v1;
 strncpy((char *)(_ReadStatusReg(TPIDR_EL0) + 24), a1, 0x1Fu);
 result = (unsigned int *)malloc(8u);
 *result = v3;
 result[1] = *(unsigned int *)(_ReadStatusReg(TPIDR_EL0) + 16);
 return result;
}


/* Function: param_thread_local_storage @ 0x3644 */
long long param_thread_local_storage(int a1)
{
 long long result; // x0
 int i; // [xsp+38h] [xbp+38h]
 int j; // [xsp+3Ch] [xbp+3Ch]
 int k; // [xsp+40h] [xbp+40h]
 int v6; // [xsp+44h] [xbp+44h]
 int v7; // [xsp+48h] [xbp+48h]
 int m; // [xsp+4Ch] [xbp+4Ch]
 void *thread_return; // [xsp+58h] [xbp+58h] BYREF
 void *v10; // [xsp+60h] [xbp+60h]
 void *ptr; // [xsp+68h] [xbp+68h]
 void *v12; // [xsp+70h] [xbp+70h]

 v10 = malloc(8LL * a1);
 ptr = malloc(8LL * a1);
 if ( v10 && ptr )
 {
 for ( i = 0; i < a1; ++i )
 {
 *((unsigned long long *)ptr + i) = (unsigned long long)malloc(0x10u);
 snprintf(*((char **)ptr + i), 0x10u, "Thread-%d", i);
 }
 for ( j = 0; j < a1; ++j )
 {
 if ( pthread_create((pthread_t *)v10 + j, 0, (void *(*)(void *))thread_tls_test, *((void **)ptr + j)) )
 {
 for ( k = 0; k <= j; ++k )
 free(*((void **)ptr + k));
 free(ptr);
 free(v10);
 result = (unsigned int)-2;
 return (unsigned int)result;
 }
 }
 v6 = 0;
 v7 = 0;
 for ( m = 0; m < a1; ++m )
 {
 pthread_join(*((pthread_t *)v10 + m), &thread_return);
 v6 += *(unsigned int *)thread_return;
 v7 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free(*((void **)ptr + m));
 }
 free(ptr);
 free(v10);
 if ( v6 == 100 * a1 && v7 == 150 * a1 )
 result = (unsigned int)42;
 else
 result = (unsigned int)-3;
 }
 else
 {
 result = (unsigned int)-1;
 }
 return (unsigned int)result;
}


/* Function: call_thread_local_storage @ 0x38FC */
long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3914 */
long long test_thread_concurrency()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0

 puts(asc_3EA8);
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


/* Function: main @ 0x39AC */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: __aarch64_cas4_acq_rel @ 0x39D0 */
unsigned int _aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, atomic_uint *a3)
{
 unsigned int v4; // w16

 if ( _aarch64_have_lse_atomics )
 {
 atomic_compare_exchange_strong(a3, &result, a2);
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


/* Function: __aarch64_ldadd4_acq_rel @ 0x3A10 */
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


/* Function: .term_proc @ 0x3A40 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x15168 */

/* FAILED to decompile: _exit @ 0x15170 */

/* FAILED to decompile: strlen @ 0x15178 */

/* FAILED to decompile: raise @ 0x15180 */

/* FAILED to decompile: __libc_start_main @ 0x15188 */

/* FAILED to decompile: execl @ 0x15190 */

/* FAILED to decompile: listen @ 0x15198 */

/* FAILED to decompile: shmdt @ 0x151A0 */

/* FAILED to decompile: bind @ 0x151A8 */

/* FAILED to decompile: __cxa_finalize @ 0x151B0 */

/* FAILED to decompile: pipe @ 0x151B8 */

/* FAILED to decompile: fork @ 0x151C0 */

/* FAILED to decompile: snprintf @ 0x151C8 */

/* FAILED to decompile: fileno @ 0x151D0 */

/* FAILED to decompile: signal @ 0x151D8 */

/* FAILED to decompile: fclose @ 0x151E0 */

/* FAILED to decompile: fopen @ 0x151E8 */

/* FAILED to decompile: malloc @ 0x151F0 */

/* FAILED to decompile: setsockopt @ 0x151F8 */

/* FAILED to decompile: open @ 0x15200 */

/* FAILED to decompile: pthread_cond_signal @ 0x15208 */

/* FAILED to decompile: memset @ 0x15210 */

/* FAILED to decompile: shmat @ 0x15218 */

/* FAILED to decompile: sleep @ 0x15220 */

/* FAILED to decompile: htons @ 0x15228 */

/* FAILED to decompile: rewind @ 0x15230 */

/* FAILED to decompile: __stack_chk_fail @ 0x15238 */

/* FAILED to decompile: close @ 0x15240 */

/* FAILED to decompile: stat @ 0x15248 */

/* FAILED to decompile: write @ 0x15258 */

/* FAILED to decompile: __getauxval @ 0x15260 */

/* FAILED to decompile: abort @ 0x15268 */

/* FAILED to decompile: puts @ 0x15270 */

/* FAILED to decompile: memcmp @ 0x15278 */

/* FAILED to decompile: strcmp @ 0x15280 */

/* FAILED to decompile: shmctl @ 0x15288 */

/* FAILED to decompile: fread @ 0x15290 */

/* FAILED to decompile: ftok @ 0x15298 */

/* FAILED to decompile: free @ 0x152A0 */

/* FAILED to decompile: shmget @ 0x152A8 */

/* FAILED to decompile: pthread_cond_wait @ 0x152B0 */

/* FAILED to decompile: strchr @ 0x152B8 */

/* FAILED to decompile: fwrite @ 0x152C0 */

/* FAILED to decompile: pthread_create @ 0x152C8 */

/* FAILED to decompile: wait @ 0x152D0 */

/* FAILED to decompile: socket @ 0x152D8 */

/* FAILED to decompile: strcpy @ 0x152E0 */

/* FAILED to decompile: read @ 0x152E8 */

/* FAILED to decompile: strstr @ 0x152F0 */

/* FAILED to decompile: usleep @ 0x152F8 */

/* FAILED to decompile: __isoc99_sscanf @ 0x15300 */

/* FAILED to decompile: strncpy @ 0x15308 */

/* FAILED to decompile: printf @ 0x15310 */

/* FAILED to decompile: __errno_location @ 0x15318 */

/* FAILED to decompile: pthread_join @ 0x15320 */

/* FAILED to decompile: alarm @ 0x15328 */

/* FAILED to decompile: pthread_cancel @ 0x15330 */

/* FAILED to decompile: pthread_mutex_lock @ 0x15338 */

/* FAILED to decompile: syscall @ 0x15340 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x15348 */

/* FAILED to decompile: waitpid @ 0x15350 */

/* FAILED to decompile: unlink @ 0x15358 */

/* FAILED to decompile: __gmon_start__ @ 0x15368 */

/* Total functions decompiled: 75, failed: 63 */
