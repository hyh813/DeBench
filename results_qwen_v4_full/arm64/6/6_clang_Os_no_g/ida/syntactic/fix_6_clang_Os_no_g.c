/* Auto-injected type definitions by preprocessor */
#define _GNU_SOURCE
#include <stdint.h>
#include <stddef.h>

/* Required headers for standard types and functions */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/mman.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <time.h>
#include <stdatomic.h>
#include <arm_neon.h>
#include <errno.h>
#include <sys/auxv.h>

/* Missing function declarations */
typedef void (*sighandler_t)(int);
void signal_handler(int sig);
unsigned int __aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, _Atomic unsigned int *a3);
long long __aarch64_ldadd4_acq_rel(unsigned int a1, _Atomic unsigned int *a2);
/* sscanf replaced with standard sscanf */
unsigned long getauxval(unsigned long type);
int pthread_cancel(pthread_t thread);
int unlink(const char *pathname);
key_t ftok(const char *pathname, int proj_id);
unsigned int alarm(unsigned int seconds);
/* __errno_location is provided by glibc when _GNU_SOURCE is defined */



/* Stub implementations for ARM atomic intrinsics */
unsigned int __ldaxr(unsigned int *addr)
{
 return *addr;
}

int __stlxr(unsigned int val, unsigned int *addr)
{
 *addr = val;
 return 0;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/6/6_clang_Os_no_g
 * Processor: arm
 */

/* Missing type definitions */

/* Global variable declarations */
long long _aarch64_have_lse_atomics = 0;
int signal_received = 0;
long long signal_number = 0;
int shared_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int ready = 0;
int data = 0;
_Atomic unsigned int atomic_counter = 0;





/* Missing struct sockaddr definition */
struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};



/* Missing macro definitions */
#define BYTE1(x) (((x) >> 8) & 0xFF)
#define LODWORD(x) ((unsigned int)(x))
#define _ReadStatusReg(reg) ({ unsigned long long __val; asm volatile("mrs %0, " #reg : "=r" (__val)); __val; })
#define TPIDR_EL0 "tpidr_el0"

/* Missing global constants and strings */
static const long long xmmword_2E70[2] = {0, 0};
static const char *asc_31FC = "Testing standard library functions...";
static const char *aLibL101D = "LibL101: strlen returned %zu\n";
static const char *aLibL102D = "LibL102: call_strcmp returned %d\n";
static const char *aLibL103D = "LibL103: call_strlen returned %d\n";
static const char *aLibL104D = "LibL104: call_memcpy returned %d\n";
static const char *aLibL105D = "LibL105: call_memcmp returned %u\n";
static const char *aLibL106D = "LibL106: call_printf returned %d\n";
static const char *aLibL107D = "LibL107: call_scanf returned %lld\n";
static const char *aLibL108D = "LibL108: call_fopen_fclose returned %lld\n";
static const char *aLibL109D = "LibL109: call_fread_fwrite returned %u\n";
static const char *aLibL110D = "LibL110: call_malloc_free returned %u\n";
static const char *aLibL111D = "LibL111: call_memset returned %d\n";
static const char *aLibL112D = "LibL112: call_strchr_strstr returned %d\n";
static const char *asc_3220 = "Testing system calls...";
static const char *aSysL301D = "SysL301: call_linux_syscall returned %lld\n";
static const char *aSysL302D = "SysL302: call_win32_api returned %lld\n";
static const char *aSysL303D = "SysL303: call_fork_exec returned %lld\n";
static const char *aSysL304D = "SysL304: call_pipe_communication returned %u\n";
static const char *aSysL305D = "SysL305: call_socket_create returned %u\n";
static const char *aSysL306D = "SysL306: call_shmget_shmat returned %lld\n";
static const char *aSysL307D = "SysL307: call_signal_handling returned %u\n";
static const char *asc_323B = "Testing thread concurrency...";
static const char *aThrL301D = "ThrL301: call_pthread_create returned %u\n";
static const char *aThrL302D = "ThrL302: call_pthread_join returned %u\n";
static const char *aThrL303D = "ThrL303: call_mutex_lock returned %u\n";
static const char *aThrL304D = "ThrL304: call_condition_variable returned %u\n";
static const char *aThrL305D = "ThrL305: call_atomic_ops returned %u\n";
static const char *aThrL306D = "ThrL306: call_thread_local_storage returned %u\n";

/* Stub function declarations */
long long call_weak_fn(void);
void JUMPOUT(int val);
long long init_proc(void);
void term_proc(void);

/* Function: call_weak_fn - stub */
long long call_weak_fn(void)
{
 return 0;
}

/* Function: .init_proc @ 0x12C8 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: JUMPOUT - stub macro replacement */
void JUMPOUT(int val)
{
 (void)val;
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



/* Function: param_strcpy @ 0x1854 */
size_t param_strcpy(char *a1, const char *a2)
{
 char *v2; // x0

 v2 = strcpy(a1, a2);
 return strlen(v2);
}


/* Function: call_strcpy @ 0x186C */
size_t call_strcpy()
{
 char v1[32]; // [xsp+0h] [xbp-20h] BYREF

 strcpy(v1, "HelloLib");
 return strlen(v1);
}


/* Function: param_strcmp @ 0x18A0 */
long long param_strcmp(const char *a1, const char *a2)
{
 int v2; // w0
 unsigned int v3; // w8

 v2 = strcmp(a1, a2);
 if ( v2 )
 v3 = -1;
 else
 v3 = 0;
 if ( v2 >= 1 )
 return 1;
 else
 return v3;
}


/* Function: call_strcmp @ 0x18C4 */
long long call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x18CC */
size_t param_strlen(const char *a1)
{
 return strlen(a1);
}


/* Function: call_strlen @ 0x18E0 */
long long call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x18E8 */
long long param_memcpy(void *a1, const void *a2, size_t a3)
{
 unsigned int v3; // w19

 v3 = a3;
 memcpy(a1, a2, a3);
 return v3;
}


/* Function: call_memcpy @ 0x190C */
long long call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x1914 */
long long param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v3; // w0
 unsigned int v4; // w8

 v3 = memcmp(a1, a2, a3);
 if ( v3 )
 v4 = -1;
 else
 v4 = 0;
 if ( v3 >= 1 )
 return 1;
 else
 return v4;
}


/* Function: call_memcmp @ 0x1938 */
long long call_memcmp()
{
 return 0xFFFFFFFFLL;
}


/* Function: param_printf @ 0x1940 */
long long param_printf(int a1, const char *a2)
{
 return printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x1954 */
long long call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x196C */
long long param_scanf(long long a1)
{
 int v2; // [xsp+8h] [xbp-8h] BYREF
 int v3; // [xsp+Ch] [xbp-4h] BYREF

 if ( (unsigned int)sscanf((const char *)a1, "%d,%d", &v3, &v2) == 2 )
 return (unsigned int)(v2 + v3);
 else
 return 0xFFFFFFFFLL;
}


/* Function: call_scanf @ 0x19AC */
long long call_scanf()
{
 int v1; // [xsp+8h] [xbp-8h] BYREF
 int v2; // [xsp+Ch] [xbp-4h] BYREF

 if ( (unsigned int)sscanf("123,456", "%d,%d", &v2, &v1) == 2 )
 return (unsigned int)(v1 + v2);
 else
 return 0xFFFFFFFFLL;
}


/* Function: param_fopen_fclose @ 0x19F4 */
long long param_fopen_fclose(const char *a1)
{
 FILE *v1; // x0
 FILE *v2; // x19
 unsigned int v3; // w20

 v1 = fopen(a1, "r");
 if ( !v1 )
 return 0xFFFFFFFFLL;
 v2 = v1;
 v3 = fileno(v1);
 fclose(v2);
 return v3;
}


/* Function: call_fopen_fclose @ 0x1A3C */
long long call_fopen_fclose()
{
 if ( (int)param_fopen_fclose("/etc/passwd") < 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_fread_fwrite @ 0x1A64 */
long long param_fread_fwrite(const char *a1)
{
 FILE *v2; // x0
 FILE *v3; // x20
 size_t v4; // x21
 long long result; // x0
 long long v6; // [xsp+0h] [xbp-20h] BYREF
 unsigned long long v7[3]; // [xsp+8h] [xbp-18h]

 v2 = fopen(a1, "w+");
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
 {
 rewind(v3);
 v4 = fread(&v6, 1u, 0x12u, v3);
 *((unsigned char *)&v7[-1] + v4) = 0;
 fclose(v3);
 unlink(a1);
 result = 4294967293LL;
 if ( v4 == 18 )
 {
 if ( v6 ^ 0x68636E65426E6942LL | v7[0] ^ 0x6144207473655420LL | *(unsigned long long *)((char *)v7 + 3) ^ 0x61746144207473LL )
 return 4294967293LL;
 else
 return 42;
 }
 }
 else
 {
 fclose(v3);
 return 4294967294LL;
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x1B78 */
long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1B84 */
long long param_malloc_free(long long a1)
{
 int *v2; // x0
 int v3; // w8
 int v4; // w8
 unsigned long long v5; // x9
 int64x2_t v6; // q0
 unsigned int *v7; // x10
 uint64x2_t v8; // q1
 int64x2_t v9; // q2
 unsigned long long v10; // d3
 unsigned int v11; // w19

 v2 = (int *)malloc(4 * a1);
 if ( v2 )
 {
 if ( a1 )
 {
 v4 = 0;
 v5 = (a1 + 1) & 0xFFFFFFFFFFFFFFFELL;
 v6 = vdupq_n_s64(0);
 v7 = v2 + 1;
 v8 = vdupq_n_u64(a1 - 1);
 v9 = vdupq_n_s64(2);
 do
 {
 v10 = (unsigned long long)vmovn_u64(vcgeq_u64(v8, (uint64x2_t)v6));
 if ( (v10 & 1) != 0 )
 *(v7 - 1) = v4;
 if ( (v10 & 0x100000000LL) != 0 )
 *v7 = v4 + 10;
 v6 = vaddq_s64(v6, v9);
 v7 += 2;
 v5 -= 2LL;
 v4 += 20;
 }
 while ( v5 );
 v3 = *v2;
 }
 v11 = v2[a1 - 1] + v3;
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v11;
}


/* Function: call_malloc_free @ 0x1C34 */
long long call_malloc_free()
{
 return param_malloc_free(10);
}


/* Function: param_memset @ 0x1C3C */
long long param_memset(unsigned char *a1, size_t n)
{
 size_t v2; // x19
 unsigned char *v3; // x20
 long long result; // x0
 int v5; // t1

 v2 = n;
 v3 = a1;
 memset(a1, 0, n);
 for ( result = 0; v2; result = (unsigned int)(result + v5) )
 {
 v5 = *v3++;
 --v2;
 }
 return result;
}


/* Function: call_memset @ 0x1C80 */
long long call_memset()
{
 return 0;
}


/* Function: param_strchr_strstr @ 0x1C88 */
long long param_strchr_strstr(const char *a1, unsigned char a2, const char *a3)
{
 char *v5; // x0
 int v6; // w21
 char *v7; // x0
 int v8; // w8

 v5 = strchr(a1, a2);
 if ( v5 )
 v6 = (unsigned int)v5 - (unsigned int)a1;
 else
 v6 = -1;
 v7 = strstr(a1, a3);
 v8 = (unsigned int)v7 - (unsigned int)a1;
 if ( !v7 )
 v8 = -1;
 return (unsigned int)(v8 + v6);
}


/* Function: call_strchr_strstr @ 0x1CE0 */
long long call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x1CE8 */
long long test_standard_library_functions()
{
 size_t v0; // x0
 unsigned int v1; // w0
 unsigned int v2; // w0
 long long v3; // x1
 long long v4; // x1
 unsigned int v5; // w0
 unsigned int v6; // w0
 char v8[32]; // [xsp+0h] [xbp-20h] BYREF
 int v9; // [xsp+3Ch] [xbp+1Ch] BYREF

 puts(asc_31FC);
 strcpy(v8, "HelloLib");
 v0 = strlen(v8);
 printf(aLibL101D, v0);
 printf(aLibL102D, 0);
 printf(aLibL103D, 12);
 printf(aLibL104D, 90);
 v1 = call_memcmp();
 printf(aLibL105D, v1);
 v2 = printf("Value: %d, Name: %s\n", 42, "Test");
 printf(aLibL106D, v2);
 if ( (unsigned int)sscanf("123,456", "%d,%d", (int *)v8, &v9) == 2 )
 v3 = (unsigned int)(v9 + *(unsigned int *)v8);
 else
 v3 = 0xFFFFFFFFLL;
 printf(aLibL107D, v3);
 if ( (int)param_fopen_fclose("/etc/passwd") < 0 )
 v4 = 0xFFFFFFFFLL;
 else
 v4 = 42;
 printf(aLibL108D, v4);
 v5 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(aLibL109D, v5);
 v6 = param_malloc_free(10);
 printf(aLibL110D, v6);
 printf(aLibL111D, 0);
 return printf(aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x1E60 */
long long param_linux_syscall(long long a1)
{
 unsigned int v1; // w19

 v1 = syscall(56, 4294967196LL, a1, 0);
 if ( (v1 & 0x80000000) != 0 )
 return (unsigned int)-errno;
 else
 syscall(57, v1);
 return v1;
}


/* Function: call_linux_syscall @ 0x1EB4 */
long long call_linux_syscall()
{
 if ( (int)param_linux_syscall((long long)"/etc/passwd") < 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_win32_api @ 0x1EDC */
long long param_win32_api(const char *a1)
{
 int v1; // w0
 unsigned int v2; // w8
 struct stat _0; // [xsp+0h] [xbp-80h] BYREF

 v1 = stat(a1, &_0);
 if ( _0.st_size <= 0 )
 v2 = -2;
 else
 v2 = 42;
 if ( v1 < 0 )
 return 0xFFFFFFFFLL;
 else
 return v2;
}


/* Function: call_win32_api @ 0x1F18 */
long long call_win32_api()
{
 int v0; // w0
 unsigned int v1; // w8
 struct stat _0; // [xsp+0h] [xbp-80h] BYREF

 v0 = stat("/etc/passwd", &_0);
 if ( _0.st_size <= 0 )
 v1 = -2;
 else
 v1 = 42;
 if ( v0 < 0 )
 return 0xFFFFFFFFLL;
 else
 return v1;
}


/* Function: param_fork_exec @ 0x1F5C */
long long param_fork_exec(const char *a1, long long a2)
{
 __pid_t v4; // w0
 int stat_loc; // [xsp+Ch] [xbp-4h] BYREF

 v4 = fork();
 if ( v4 < 0 )
 return 0xFFFFFFFFLL;
 if ( !v4 )
 {
 execl(a1, a1, a2, 0);
 _exit(127);
 }
 if ( waitpid(v4, &stat_loc, 0) < 0 )
 return 4294967294LL;
 if ( (stat_loc & 0x7F) != 0 )
 return 4294967293LL;
 return BYTE1(stat_loc);
}


/* Function: call_fork_exec @ 0x1FE4 */
long long call_fork_exec()
{
 if ( (unsigned int)param_fork_exec("/bin/true", 0) )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_pipe_communication @ 0x2010 */
long long param_pipe_communication()
{
 __pid_t v0; // w0
 ssize_t v1; // x19
 int v2; // w0
 int stat_loc; // [xsp+Ch] [xbp-4h] BYREF
    unsigned char buf[32]; // [xsp+8h] [xbp-28h] BYREF
    int pipedes[2]; // [xsp+28h] [xbp-8h] BYREF

    if ( pipe(pipedes) < 0 )
    return 0xFFFFFFFFLL;
    v0 = fork();
    if ( v0 < 0 )
    return 4294967294LL;
    if ( !v0 )
    {
    close(pipedes[0]);
    write(pipedes[1], "HelloPipe", 9u);
    close(pipedes[1]);
    _exit(0);
    }
    close(pipedes[1]);
    v1 = read(pipedes[0], buf, 0x1Fu);
    v2 = pipedes[0];
    buf[v1] = 0;
    close(v2);
    wait(&stat_loc);
 if ( v1 <= 0 )
 return 4294967293LL;
 else
 return 42;
}


/* Function: call_pipe_communication @ 0x20C8 */
// attributes: thunk
long long call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x20CC */
long long param_socket_create()
{
 int v0; // w0
 int v1; // w19
 int v2; // w20
 struct sockaddr addr; // [xsp+8h] [xbp-18h] BYREF
 int optval; // [xsp+1Ch] [xbp-4h] BYREF

 v0 = socket(2, 1, 0);
 if ( v0 < 0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 optval = 1;
 if ( setsockopt(v0, 1, 2, &optval, 4u) < 0 )
 {
 close(v1);
 return 4294967294LL;
 }
 else
 {
 *(unsigned long long *)&addr.sa_family = 2;
 *(unsigned long long *)&addr.sa_data[6] = 0;
 if ( bind(v1, &addr, 0x10u) < 0 )
 {
 close(v1);
 return 4294967293LL;
 }
 else
 {
 v2 = listen(v1, 5);
 close(v1);
 if ( v2 >= 0 )
 return 42;
 else
 return 4294967292LL;
 }
 }
}


/* Function: call_socket_create @ 0x2190 */
// attributes: thunk
long long call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x2194 */
long long param_shmget_shmat()
{
 int v0; // w0
 key_t v1; // w0
 int v2; // w0
 int v3; // w19
 char *v4; // x0
 char *v5; // x21
 unsigned int v6; // w20

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return (unsigned int)-1;
 close(v0);
 v1 = ftok("/tmp/binbench_shm", 42);
 if ( v1 < 0 )
 {
 return (unsigned int)-1;
 }
 else
 {
 v2 = shmget(v1, 0x1000u, 950);
 if ( v2 < 0 )
 {
 return (unsigned int)-2;
 }
 else
 {
 v3 = v2;
 v4 = (char *)shmat(v2, 0, 0);
 if ( v4 == (char *)-1LL )
 {
 return (unsigned int)-3;
 }
 else
 {
 v5 = v4;
 strcpy(v4, "SharedMemory");
 v6 = strlen(v4);
 shmdt(v5);
 shmctl(v3, 0, 0);
 }
 }
 }
 return v6;
}


/* Function: call_shmget_shmat @ 0x2264 */
long long call_shmget_shmat()
{
 if ( (int)param_shmget_shmat() <= 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_signal_handling @ 0x2284 */
long long param_signal_handling()
{
 unsigned int v0; // w20
 bool v1; // cc
 unsigned int v2; // w21
 bool v3; // cc

    if ( signal(10, signal_handler) == (void (*)(int))-1LL )
    return 0xFFFFFFFFLL;
    if ( signal(14, signal_handler) == (void (*)(int))-1LL )
    return 4294967294LL;
 signal_received = 0;
 raise(10);
 if ( !signal_received )
 {
 v0 = 1000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 v1 = 0;
 else
 v1 = v0 > 1;
 --v0;
 }
 while ( v1 );
 }
 if ( !signal_received )
 return 4294967293LL;
 if ( signal_number != 10 )
 return 4294967292LL;
 signal_received = 0;
 alarm(1u);
 if ( !signal_received )
 {
 v2 = 2000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 v3 = 0;
 else
 v3 = v2 > 1;
 --v2;
 }
 while ( v3 );
 }
 if ( !signal_received || signal_number != 14 )
 return 4294967291LL;
    signal(10, (void (*)(int))0);
    signal(14, (void (*)(int))0);
    return 42;
}


/* Function: signal_handler @ 0x23B8 */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: call_signal_handling @ 0x23D0 */
// attributes: thunk
long long call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x23D4 */
long long test_system_calls()
{
 long long v0; // x1
 int v1; // w0
 unsigned int v2; // w8
 long long v3; // x1
 long long v4; // x1
 unsigned int v5; // w0
 unsigned int v6; // w0
 long long v7; // x1
 unsigned int v8; // w0
 struct stat _0; // [xsp+0h] [xbp-80h] BYREF

 puts(asc_3220);
 if ( (int)param_linux_syscall((long long)"/etc/passwd") < 0 )
 v0 = 0xFFFFFFFFLL;
 else
 v0 = 42;
 printf(aSysL301D, v0);
 v1 = stat("/etc/passwd", &_0);
 if ( _0.st_size <= 0 )
 v2 = -2;
 else
 v2 = 42;
 if ( v1 < 0 )
 v3 = 0xFFFFFFFFLL;
 else
 v3 = v2;
 printf(aSysL302D, v3);
 if ( (unsigned int)param_fork_exec("/bin/true", 0) )
 v4 = 0xFFFFFFFFLL;
 else
 v4 = 42;
 printf(aSysL303D, v4);
 v5 = param_pipe_communication();
 printf(aSysL304D, v5);
 v6 = param_socket_create();
 printf(aSysL305D, v6);
 if ( (int)param_shmget_shmat() <= 0 )
 v7 = 0xFFFFFFFFLL;
 else
 v7 = 42;
 printf(aSysL306D, v7);
 v8 = param_signal_handling();
 return printf(aSysL307D, v8);
}


/* Function: thread_compute @ 0x24CC */
void * thread_compute(void *a1)
{
 int v1; // w19
 unsigned int *result; // x0

 v1 = *(unsigned int *)a1 * *(unsigned int *)a1;
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: param_pthread_create @ 0x24F8 */
long long param_pthread_create(int a1)
{
 unsigned int v1; // w19
 void *ptr; // [xsp+0h] [xbp-10h] BYREF
 int arg; // [xsp+Ch] [xbp-4h] BYREF
 pthread_t newthread; // [xsp+28h] [xbp+18h] BYREF

 arg = a1;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 return (unsigned int)-1;
 }
 else
 {
 pthread_join(newthread, &ptr);
 v1 = *(unsigned int *)ptr;
 free(ptr);
 }
 return v1;
}


/* Function: call_pthread_create @ 0x255C */
long long call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: thread_sum @ 0x2564 */
void * thread_sum(void *a1)
{
 int *arg = (int *)a1;
 int v1; // w8
 int v2; // w9

 v1 = *arg;
 v2 = arg[1];
 arg[2] = 0;
 if ( v2 >= v1 )
 arg[2] = v2 + (v2 - v1) * v1 + (((unsigned int)(v2 + ~v1) * (unsigned long long)(unsigned int)(v2 - v1)) >> 1);
 return 0;
}


/* Function: param_pthread_join @ 0x2598 */
long long param_pthread_join()
{
 long long v0; // x21
 long long *v1; // x19
 long long v2; // x20
 unsigned int v3; // w19
 int *v4; // x21
 int v5; // t1
 long long v7; // [xsp+0h] [xbp-40h] BYREF
 int v8; // [xsp+8h] [xbp-38h] BYREF
 long long v9; // [xsp+Ch] [xbp-34h]
 int v10; // [xsp+14h] [xbp-2Ch]
 long long v11; // [xsp+18h] [xbp-28h]
 int v12; // [xsp+20h] [xbp-20h]
 unsigned char v13[24]; // [xsp+28h] [xbp-18h] BYREF

 v0 = 0;
 v8 = 0;
 v10 = 0;
 v1 = &v7;
 v12 = 0;
 v7 = 0xA00000001LL;
 v9 = 0x140000000BLL;
 v11 = 0x1E00000015LL;
 do
 {
 if ( pthread_create((pthread_t *)&v13[v0], 0, (void *(*)(void *))thread_sum, v1) )
 return (unsigned int)-1;
 v1 = (long long *)((char *)v1 + 12);
 v0 += 8;
 }
 while ( v0 != 24 );
 v2 = 0;
 v3 = 0;
 v4 = &v8;
 while ( !pthread_join(*(unsigned long long *)&v13[v2], 0) )
 {
 v5 = *v4;
 v4 += 3;
 v2 += 8;
 v3 += v5;
 if ( v2 == 24 )
 return v3;
 }
 return (unsigned int)-2;
}


/* Function: call_pthread_join @ 0x2674 */
// attributes: thunk
long long call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x2678 */
void * thread_increment(void *a1)
{
 int v1; // w20
 int *arg = (int *)a1;

 v1 = *arg;
 if ( *arg >= 1 )
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


/* Function: param_mutex_lock @ 0x26E0 */
long long param_mutex_lock(int a1, int a2)
{
 char *v3; // x0
 char *v4; // x20
 long long v5; // x23
 long long v6; // x24
 pthread_t *v7; // x21
 pthread_t v8; // t1
 int arg; // [xsp+1Ch] [xbp+1Ch] BYREF

 arg = a2;
 v3 = (char *)malloc(8LL * a1);
 if ( !v3 )
 return 0xFFFFFFFFLL;
 v4 = v3;
 shared_counter = 0;
 if ( a1 >= 1 )
 {
 v5 = (unsigned int)a1;
 v6 = 0;
 do
 {
 if ( pthread_create((pthread_t *)&v4[v6], 0, (void *(*)(void *))thread_increment, &arg) )
 {
 free(v4);
 return 4294967294LL;
 }
 v6 += 8;
 }
 while ( 8LL * (unsigned int)a1 != v6 );
 v7 = (pthread_t *)v4;
 do
 {
 v8 = *v7++;
 pthread_join(v8, 0);
 --v5;
 }
 while ( v5 );
 }
 free(v4);
 if ( shared_counter == arg * a1 )
 return 42;
 else
 return 4294967293LL;
}


/* Function: call_mutex_lock @ 0x27CC */
long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x27D8 */
void *consumer_thread(void *arg)
{
 int v0; // w19
 unsigned int *result; // x0

 (void)arg;
 pthread_mutex_lock(&cond_mutex);
 if ( (ready & 1) == 0 )
 {
 do
 pthread_cond_wait(&cond, &cond_mutex);
 while ( ready != 1 );
 }
 if ( data )
 v0 = 42;
 else
 v0 = 0;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v0;
 return result;
}


/* Function: producer_thread @ 0x2864 */
void * producer_thread(void *arg)
{
 (void)arg;
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x28C0 */
long long param_condition_variable()
{
 unsigned int v0; // w19
 void *ptr; // [xsp+0h] [xbp-10h] BYREF
 pthread_t newthread; // [xsp+8h] [xbp-8h] BYREF
 pthread_t th; // [xsp+28h] [xbp+18h] BYREF

 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 {
 return (unsigned int)-1;
 }
 else if ( pthread_create(&th, 0, (void *(*)(void *))producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return (unsigned int)-2;
 }
 else
 {
 pthread_join(newthread, &ptr);
 pthread_join(th, 0);
 v0 = *(unsigned int *)ptr;
 free(ptr);
 }
 return v0;
}


/* Function: call_condition_variable @ 0x2968 */
// attributes: thunk
long long call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x296C */
void * thread_atomic_increment(void *a1)
{
 int *arg = (int *)a1;
 int v1; // w21
 unsigned int v2; // w19

 v1 = *arg;
 if ( *arg >= 1 )
 {
 v2 = 0;
 do
 {
 __aarch64_ldadd4_acq_rel(1, &atomic_counter);
 __aarch64_cas4_acq_rel(v2, v2 + 1000, &atomic_counter);
 ++v2;
 }
 while ( v2 != v1 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x29D0 */
void * thread_atomic_load_store(void *arg)
{
 unsigned int v1; // w9

 (void)arg;
 v1 = atomic_load_explicit(&atomic_counter, memory_order_seq_cst);
 atomic_store_explicit(&atomic_counter, v1 + 100, memory_order_seq_cst);
 return 0;
}


/* Function: param_atomic_ops @ 0x29EC */
long long param_atomic_ops(int a1, int a2)
{
 long long v2; // x20
 pthread_t *v3; // x0
 pthread_t *v4; // x19
 long long v5; // x23
 pthread_t *v6; // x21
 pthread_t v7; // t1
 int v8; // w20
 pthread_t th; // [xsp+0h] [xbp-10h] BYREF
 int arg; // [xsp+Ch] [xbp-4h] BYREF

 v2 = a1;
 arg = a2;
 v3 = (pthread_t *)malloc(8LL * a1);
 if ( !v3 )
 return 0xFFFFFFFFLL;
 v4 = v3;
 atomic_store_explicit(&atomic_counter, 0, memory_order_seq_cst);
 if ( (int)v2 < 1 )
 {
LABEL_6:
 if ( !pthread_create(&th, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(th, 0);
 if ( (int)v2 >= 1 )
 {
 v2 = (unsigned int)v2;
 v6 = v4;
 do
 {
 v7 = *v6++;
 pthread_join(v7, 0);
 --v2;
 }
 while ( v2 );
 }
 v8 = atomic_load_explicit(&atomic_counter, memory_order_seq_cst);
 free(v4);
 if ( v8 <= 0 )
 return 4294967293LL;
 else
 return 42;
 }
 else
 {
 v5 = 0;
 while ( !pthread_create(&v4[v5], 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 if ( (unsigned int)v2 == ++v5 )
 goto LABEL_6;
 }
 free(v4);
 return 4294967294LL;
 }
}


/* Function: call_atomic_ops @ 0x2B00 */
long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x2B0C */
void * thread_tls_test(void *arg)
{
 unsigned long long StatusReg; // x8
 int v2; // w19
 unsigned int *result; // x0
 char *tls_base; // x9
 char *src = (char *)arg;

 StatusReg = _ReadStatusReg(TPIDR_EL0);
 tls_base = (char *)StatusReg;
 v2 = *(unsigned int *)(tls_base + 16);
 *(unsigned int *)(tls_base + 16) = v2 + 50;
 strncpy(tls_base + 20, src, 0x1Fu);
 result = malloc(8u);
 *result = v2;
 result[1] = v2 + 50;
 return result;
}


/* Function: param_thread_local_storage @ 0x2B5C */
long long param_thread_local_storage(int a1)
{
 size_t v2; // x21
 void *v3; // x19
 void *v4; // x21
 long long result; // x0
 long long v6; // x22
 long long v7; // x24
 char *v8; // x0
 long long v9; // x25
 pthread_t *v10; // x22
 int v12; // w23
 int v13; // w22
 pthread_t *v14; // x25
 void **v15; // x26
 pthread_t v16; // t1
 void *v17; // t1
 long long v19; // x20
 void *thread_return; // [xsp+8h] [xbp-8h] BYREF

 v2 = 8LL * a1;
 v3 = malloc(v2);
 v4 = malloc(v2);
 result = 0xFFFFFFFFLL;
 if ( v3 && v4 )
 {
 if ( a1 < 1 )
 {
 v13 = 0;
 v12 = 0;
LABEL_13:
 free(v4);
 free(v3);
 if ( v12 == 150 * a1 && v13 == 100 * a1 )
 return 42;
 else
 return 4294967293LL;
 }
 else
 {
 v6 = 0;
 v7 = (unsigned int)a1;
 do
 {
 v8 = (char *)malloc(0x10u);
 ((unsigned long long *)v4)[v6] = (unsigned long long)v8;
 snprintf(v8, 0x10u, "Thread-%d", (int)v6);
 v6++;
 }
 while ( a1 != v6 );
 v9 = 0;
 v10 = (pthread_t *)v3;
 while ( !pthread_create(v10, 0, (void *(*)(void *))thread_tls_test, *((void **)v4 + v9++)) )
 {
 ++v10;
 if ( a1 == v9 )
 {
 v12 = 0;
 v13 = 0;
 v14 = (pthread_t *)v3;
 v15 = (void **)v4;
 do
 {
 v16 = *v14++;
 pthread_join(v16, &thread_return);
 v13 += *(unsigned int *)thread_return;
 v12 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 v17 = *v15++;
 free(v17);
 --v7;
 }
 while ( v7 );
 goto LABEL_13;
 }
 }
 v19 = 0;
 do
 free(*((void **)v4 + v19++));
 while ( v9 != v19 );
 free(v4);
 free(v3);
 return 4294967294LL;
 }
 }
 return result;
}


/* Function: call_thread_local_storage @ 0x2CF8 */
long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x2D00 */
long long test_thread_concurrency()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0

 puts(asc_323B);
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
 return printf(aThrL306D, v5);
}


/* Function: main @ 0x2DA8 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: __aarch64_cas4_acq_rel @ 0x2DD0 */
unsigned int __aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, _Atomic unsigned int *a3)
{
 unsigned int v4; // w16
 unsigned int expected; // w16

 if ( _aarch64_have_lse_atomics )
 {
 expected = result;
 atomic_compare_exchange_strong(a3, &expected, a2);
 result = expected;
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


/* Function: __aarch64_ldadd4_acq_rel @ 0x2E10 */
long long __aarch64_ldadd4_acq_rel(unsigned int a1, _Atomic unsigned int *a2)
{
 long long result; // x0

 if ( _aarch64_have_lse_atomics )
 return atomic_fetch_add(a2, a1);
 do
 result = __ldaxr((unsigned int *)a2);
 while ( __stlxr(result + a1, (unsigned int *)a2) );
 return result;
}


/* Function: .term_proc @ 0x2E40 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x14358 */

/* FAILED to decompile: _exit @ 0x14360 */

/* FAILED to decompile: strlen @ 0x14368 */

/* FAILED to decompile: raise @ 0x14370 */

/* FAILED to decompile: __libc_start_main @ 0x14378 */

/* FAILED to decompile: execl @ 0x14380 */

/* FAILED to decompile: listen @ 0x14388 */

/* FAILED to decompile: shmdt @ 0x14390 */

/* FAILED to decompile: bind @ 0x14398 */

/* FAILED to decompile: __cxa_finalize @ 0x143A0 */

/* FAILED to decompile: pipe @ 0x143A8 */

/* FAILED to decompile: fork @ 0x143B0 */

/* FAILED to decompile: snprintf @ 0x143B8 */

/* FAILED to decompile: fileno @ 0x143C0 */

/* FAILED to decompile: signal @ 0x143C8 */

/* FAILED to decompile: fclose @ 0x143D0 */

/* FAILED to decompile: fopen @ 0x143D8 */

/* FAILED to decompile: malloc @ 0x143E0 */

/* FAILED to decompile: setsockopt @ 0x143E8 */

/* FAILED to decompile: open @ 0x143F0 */

/* FAILED to decompile: pthread_cond_signal @ 0x143F8 */

/* FAILED to decompile: memset @ 0x14400 */

/* FAILED to decompile: shmat @ 0x14408 */

/* FAILED to decompile: sleep @ 0x14410 */

/* FAILED to decompile: rewind @ 0x14418 */

/* FAILED to decompile: close @ 0x14420 */

/* FAILED to decompile: stat @ 0x14428 */

/* FAILED to decompile: write @ 0x14430 */

/* FAILED to decompile: __getauxval @ 0x14438 */

/* FAILED to decompile: abort @ 0x14440 */

/* FAILED to decompile: puts @ 0x14448 */

/* FAILED to decompile: memcmp @ 0x14450 */

/* FAILED to decompile: strcmp @ 0x14458 */

/* FAILED to decompile: shmctl @ 0x14460 */

/* FAILED to decompile: fread @ 0x14468 */

/* FAILED to decompile: ftok @ 0x14470 */

/* FAILED to decompile: free @ 0x14478 */

/* FAILED to decompile: shmget @ 0x14480 */

/* FAILED to decompile: pthread_cond_wait @ 0x14488 */

/* FAILED to decompile: strchr @ 0x14490 */

/* FAILED to decompile: fwrite @ 0x14498 */

/* FAILED to decompile: pthread_create @ 0x144A0 */

/* FAILED to decompile: wait @ 0x144A8 */

/* FAILED to decompile: socket @ 0x144B0 */

/* FAILED to decompile: strcpy @ 0x144B8 */

/* FAILED to decompile: read @ 0x144C0 */

/* FAILED to decompile: strstr @ 0x144C8 */

/* FAILED to decompile: usleep @ 0x144D0 */

/* FAILED to decompile: sscanf @ 0x144D8 */

/* FAILED to decompile: strncpy @ 0x144E0 */

/* FAILED to decompile: printf @ 0x144E8 */

/* FAILED to decompile: __errno_location @ 0x144F0 */

/* FAILED to decompile: pthread_join @ 0x144F8 */

/* FAILED to decompile: alarm @ 0x14500 */

/* FAILED to decompile: pthread_cancel @ 0x14508 */

/* FAILED to decompile: pthread_mutex_lock @ 0x14510 */

/* FAILED to decompile: syscall @ 0x14518 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x14520 */

/* FAILED to decompile: waitpid @ 0x14528 */

/* FAILED to decompile: unlink @ 0x14530 */

/* FAILED to decompile: __gmon_start__ @ 0x14540 */

/* Total functions decompiled: 75, failed: 61 */
