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

/* Required headers for decompiled code */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <stdatomic.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/auxv.h>
#include <netinet/in.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>

/* Global variables used in decompiled code */
int _aarch64_have_lse_atomics = 0;
int signal_received = 0;
int signal_number = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
int shared_counter = 0;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int ready = 0;
int data = 0;
atomic_uint atomic_counter = 0;

/* Data constants from binary */
unsigned long long xmmword_3590 = 0;
unsigned long long xmmword_35A0 = 0;

/* String constants from binary */
const char *asc_320D = "Testing Standard Library Functions";
const char *aLibL101D = "Lib L101: %u\n";
const char *aLibL102D = "Lib L102: %u\n";
const char *aLibL103D = "Lib L103: %u\n";
const char *aLibL104D = "Lib L104: %u\n";
const char *aLibL105D = "Lib L105: %u\n";
const char *aLibL106D = "Lib L106: %u\n";
const char *aLibL107D = "Lib L107: %u\n";
const char *aLibL108D = "Lib L108: %u\n";
const char *aLibL109D = "Lib L109: %u\n";
const char *aLibL110D = "Lib L110: %u\n";
const char *aLibL111D = "Lib L111: %u\n";
const char *aLibL112D = "Lib L112: %u\n";
const char *asc_33B2 = "Testing System Calls";
const char *aSysL301D = "Sys L301: %u\n";
const char *aSysL302D = "Sys L302: %u\n";
const char *aSysL303D = "Sys L303: %u\n";
const char *aSysL304D = "Sys L304: %u\n";
const char *aSysL305D = "Sys L305: %u\n";
const char *aSysL306D = "Sys L306: %u\n";
const char *aSysL307D = "Sys L307: %u\n";
const char *asc_349B = "Testing Thread Concurrency";
const char *aThrL301D = "Thr L301: %u\n";
const char *aThrL302D = "Thr L302: %u\n";
const char *aThrL303D = "Thr L303: %u\n";
const char *aThrL304D = "Thr L304: %u\n";
const char *aThrL305D = "Thr L305: %u\n";
const char *aThrL306D = "Thr L306: %u\n";

/* ARM64 system register definitions */
#ifndef TPIDR_EL0
#define TPIDR_EL0 0
#endif

/* Macro for extracting lower 32 bits */
#define LODWORD(x) ((unsigned int)(x))

/* Macro for extracting byte 1 (bits 8-15) */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Inline function to read system register */
static inline unsigned long long _ReadStatusReg(int reg)
{
    unsigned long long val = 0;
    asm volatile("mrs %0, tpidr_el0" : "=r" (val));
    return val;
}

/* ARM64 load-acquire exclusive register */
static inline unsigned int __ldaxr(unsigned int *addr)
{
    unsigned int val;
    asm volatile("ldaxr %w0, %1" : "=r" (val) : "Q" (*addr));
    return val;
}

/* ARM64 store-release exclusive register */
static inline int __stlxr(unsigned int val, unsigned int *addr)
{
    int ret;
    asm volatile("stlxr %w0, %w1, %2" : "=&r" (ret) : "r" (val), "Q" (*addr));
    return ret;
}

/* Forward declarations for functions */
long long call_weak_fn(void);
void JUMPOUT(int);
long long test_standard_library_functions(int argc, const char **argv, const char **envp);

/* Stub implementations for missing functions */
long long call_weak_fn(void)
{
 return 0;
}

void JUMPOUT(int val)
{
 (void)val;
}
long long test_system_calls(void);
long long test_thread_concurrency(void);
unsigned int _aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, atomic_uint *a3);
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);

/* Type definition for __WAIT_STATUS */
typedef union {
    void *__uptr;
    int __iptr;
} __WAIT_STATUS;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/6/6_gcc_Os_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x1388 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_13A0 @ 0x13A0 */
void sub_13A0()
{
 JUMPOUT(0);
}


/* Function: main @ 0x17C0 */
int main(int argc, const char **argv, const char **envp)
{
 long long v3; // x0
 long long v4; // x0

 v3 = test_standard_library_functions(argc, argv, envp);
 v4 = test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: init_have_lse_atomics @ 0x17E0 */
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



/* Function: signal_handler @ 0x1954 */
long long signal_handler(long long result)
{
 signal_received = 1;
 signal_number = result;
 return result;
}


/* Function: thread_sum @ 0x196C */
long long thread_sum(int *a1)
{
 int v1; // w1
 int v2; // w3
 int v4; // w2

 v1 = *a1;
 v2 = a1[1];
 a1[2] = 0;
 while ( v2 >= v1 )
 {
 v4 = a1[2] + v1++;
 a1[2] = v4;
 }
 return 0;
}


/* Function: thread_compute @ 0x1998 */
unsigned int * thread_compute(int *a1)
{
 int v1; // w19
 unsigned int *result; // x0

 v1 = *a1;
 result = malloc(4u);
 *result = v1 * v1;
 return result;
}


/* Function: thread_increment @ 0x19C4 */
long long thread_increment(int *a1)
{
 int v1; // w22
 int v2; // w20

 v1 = *a1;
 v2 = 0;
 while ( v2 < v1 )
 {
 pthread_mutex_lock(&counter_mutex);
 ++v2;
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 }
 return 0;
}


/* Function: consumer_thread @ 0x1A30 */
unsigned int *consumer_thread()
{
 int v0; // w19
 unsigned int *result; // x0

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v0 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v0;
 return result;
}


/* Function: producer_thread @ 0x1A98 */
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


/* Function: thread_atomic_increment @ 0x1AF0 */
long long thread_atomic_increment(int *a1)
{
 int v1; // w21
 unsigned int i; // w20
 long long v4; // x1
 long long v5; // x0

 v1 = *a1;
 for ( i = 0; (int)i < v1; ++i )
 {
 _aarch64_ldadd4_acq_rel(1, &atomic_counter);
 v4 = i + 1000;
 v5 = i;
 _aarch64_cas4_acq_rel(v5, v4, &atomic_counter);
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x1B54 */
long long thread_atomic_load_store()
{
 unsigned int v0; // w1

 v0 = atomic_load(&atomic_counter);
 atomic_store(&atomic_counter, v0 + 100);
 return 0;
}


/* Function: thread_tls_test @ 0x1B74 */
unsigned int * thread_tls_test(char *src)
{
 unsigned long long StatusReg; // x3
 int v2; // w20
 unsigned int *result; // x0

 StatusReg = _ReadStatusReg(TPIDR_EL0);
 v2 = *(unsigned int *)(StatusReg + 16);
 *(unsigned int *)(StatusReg + 16) = v2 + 50;
 strncpy((char *)(StatusReg + 20), src, 0x1Fu);
 result = malloc(8u);
 *result = v2;
 result[1] = v2 + 50;
 return result;
}


/* Function: param_strcpy @ 0x1BC4 */
size_t param_strcpy(char *a1, const char *a2)
{
 strcpy(a1, a2);
 return strlen(a1);
}


/* Function: call_strcpy @ 0x1BEC */
size_t call_strcpy()
{
 char v1[32]; // [xsp+18h] [xbp+18h] BYREF

 return param_strcpy(v1, "HelloLib");
}


/* Function: param_strcmp @ 0x1C40 */
long long param_strcmp(const char *a1, const char *a2)
{
 int v2; // w0
 bool v3; // zf
 bool v4; // nf
 long long result; // x0

 v2 = strcmp(a1, a2);
 v3 = v2 == 0;
 v4 = v2 < 0;
 if ( v2 )
 result = -1;
 else
 result = 0;
 if ( v4 || v3 )
 return (unsigned int)result;
 else
 return 1;
}


/* Function: call_strcmp @ 0x1C60 */
long long call_strcmp()
{
 int v0; // w19
 int v1; // w19

 v0 = param_strcmp("abc", "def");
 v1 = v0 + param_strcmp("xyz", "xyz");
 return v1 + (unsigned int)param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x1CC0 */
size_t param_strlen(const char *a1)
{
 return strlen(a1);
}


/* Function: call_strlen @ 0x1CD4 */
long long call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x1CDC */
long long param_memcpy(void *a1, const void *a2, size_t a3)
{
 unsigned int v3; // w19

 v3 = a3;
 memcpy(a1, a2, a3);
 return v3;
}


/* Function: call_memcpy @ 0x1D00 */
long long call_memcpy()
{
 unsigned long long v1[2]; // [xsp+18h] [xbp+18h] BYREF
 int v2; // [xsp+28h] [xbp+28h]
 long long v3; // [xsp+30h] [xbp+30h] BYREF
 long long v4; // [xsp+38h] [xbp+38h]
 int v5; // [xsp+40h] [xbp+40h]

 v3 = 0;
 v4 = 0;
 v1[0] = 0x140000000ALL;
 v1[1] = 0x280000001ELL;
 v2 = 50;
 v5 = 0;
 param_memcpy(&v3, v1, 0x14u);
 return (unsigned int)(v3 + v4 + v5);
}


/* Function: param_memcmp @ 0x1D88 */
long long param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v3; // w0
 bool v4; // zf
 bool v5; // nf
 long long result; // x0

 v3 = memcmp(a1, a2, a3);
 v4 = v3 == 0;
 v5 = v3 < 0;
 if ( v3 )
 result = -1;
 else
 result = 0;
 if ( v5 || v4 )
 return (unsigned int)result;
 else
 return 1;
}


/* Function: call_memcmp @ 0x1DA8 */
long long call_memcmp()
{
 int v0; // w19
 long long v2; // [xsp+38h] [xbp+38h] BYREF
 int v3; // [xsp+40h] [xbp+40h]
 long long v4; // [xsp+48h] [xbp+48h] BYREF
 int v5; // [xsp+50h] [xbp+50h]
 long long v6; // [xsp+58h] [xbp+58h] BYREF
 int v7; // [xsp+60h] [xbp+60h]

 v5 = 4;
 v2 = 0x200000001LL;
 v3 = 3;
 v4 = 0x200000001LL;
 v6 = 0x200000001LL;
 v7 = 3;
 v0 = param_memcmp(&v2, &v4, 0xCu);
 return v0 + (unsigned int)param_memcmp(&v2, &v6, 0xCu);
}


/* Function: param_printf @ 0x1E5C */
long long param_printf(int a1, const char *a2)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x1E74 */
long long call_printf()
{
 return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x1E84 */
long long param_scanf(const char *a1)
{
 int v2; // [xsp+10h] [xbp+10h] BYREF
 int v3; // [xsp+14h] [xbp+14h] BYREF

 if ( (unsigned int)sscanf(a1, "%d,%d", &v2, &v3) == 2 )
 return (unsigned int)(v2 + v3);
 else
 return 0xFFFFFFFFLL;
}


/* Function: call_scanf @ 0x1EF4 */
long long call_scanf()
{
 return param_scanf("123,456");
}


/* Function: param_fopen_fclose @ 0x1F00 */
long long param_fopen_fclose(const char *a1)
{
 FILE *v1; // x0
 FILE *v2; // x20
 unsigned int v3; // w19

 v1 = fopen(a1, "r");
 if ( v1 )
 {
 v2 = v1;
 v3 = fileno(v1);
 fclose(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: call_fopen_fclose @ 0x1F48 */
long long call_fopen_fclose()
{
 if ( (int)param_fopen_fclose("/etc/passwd") < 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_fread_fwrite @ 0x1F70 */
long long param_fread_fwrite(const char *a1)
{
 FILE *v2; // x0
 FILE *v3; // x19
 size_t v5; // x21
 char ptr[32]; // [xsp+48h] [xbp+48h] BYREF

 v2 = fopen(a1, "w+");
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
 {
 rewind(v3);
 v5 = fread(ptr, 1u, 0x12u, v3);
 ptr[v5] = 0;
 fclose(v3);
 unlink(a1);
 if ( v5 == 18 )
 {
 if ( !strcmp(ptr, "BinBench Test Data") )
 return 42;
 else
 return 4294967293LL;
 }
 else
 {
 return 4294967293LL;
 }
 }
 else
 {
 fclose(v3);
 return 4294967294LL;
 }
}


/* Function: call_fread_fwrite @ 0x2084 */
long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2090 */
long long param_malloc_free(long long a1)
{
 long long v1; // x19
 unsigned int *v3; // x0
 long long i; // x1
 unsigned int v5; // w19

 v1 = a1;
 v3 = malloc(4 * a1);
 if ( v3 )
 {
 for ( i = 0; i != a1; ++i )
 v3[i] = 10 * i;
 v5 = v3[v1 - 1] + *v3;
 free(v3);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v5;
}


/* Function: call_malloc_free @ 0x20FC */
long long call_malloc_free()
{
 return param_malloc_free(10);
}


/* Function: param_memset @ 0x2104 */
long long param_memset(unsigned char *a1, size_t n)
{
 long long v4; // x1
 long long result; // x0
 int v6; // w2

 memset(a1, 0, n);
 v4 = 0;
 result = 0;
 while ( v4 != n )
 {
 v6 = a1[v4++];
 result = (unsigned int)(result + v6);
 }
 return result;
}


/* Function: call_memset @ 0x2150 */
long long call_memset()
{
 long long i; // x1
 unsigned int v2[10]; // [xsp+10h] [xbp+10h] BYREF

 for ( i = 0; i != 10; ++i )
 v2[i] = 255;
 param_memset((unsigned char *)v2, 0x28u);
 return (unsigned int)(v2[0] + v2[9]);
}


/* Function: param_strchr_strstr @ 0x21C0 */
long long param_strchr_strstr(const char *a1, unsigned char a2, const char *a3)
{
 char *v5; // x0
 int v6; // w21
 char *v7; // x0
 int v8; // w19
 int v9; // w0

 v5 = strchr(a1, a2);
 v6 = (unsigned int)v5 - (unsigned int)a1;
 if ( !v5 )
 v6 = -1;
 v7 = strstr(a1, a3);
 v8 = (unsigned int)v7 - (unsigned int)a1;
 if ( v7 )
 v9 = v8;
 else
 v9 = -1;
 return (unsigned int)(v6 + v9);
}


/* Function: call_strchr_strstr @ 0x221C */
long long call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 0x42u, "Bench");
}


/* Function: test_standard_library_functions @ 0x2234 */
long long test_standard_library_functions(int argc, const char **argv, const char **envp)
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

 puts(asc_320D);
 v0 = call_strcpy();
 __printf_chk(1, aLibL101D, v0);
 v1 = call_strcmp();
 __printf_chk(1, aLibL102D, v1);
 __printf_chk(1, aLibL103D, 12);
 v2 = call_memcpy();
 __printf_chk(1, aLibL104D, v2);
 v3 = call_memcmp();
 __printf_chk(1, aLibL105D, v3);
 v4 = call_printf();
 __printf_chk(1, aLibL106D, v4);
 v5 = call_scanf();
 __printf_chk(1, aLibL107D, v5);
 v6 = call_fopen_fclose();
 __printf_chk(1, aLibL108D, v6);
 v7 = call_fread_fwrite();
 __printf_chk(1, aLibL109D, v7);
 v8 = call_malloc_free();
 __printf_chk(1, aLibL110D, v8);
 v9 = call_memset();
 __printf_chk(1, aLibL111D, v9);
 v10 = call_strchr_strstr();
 return __printf_chk(1, aLibL112D, v10);
}


/* Function: param_linux_syscall @ 0x2368 */
long long param_linux_syscall(long long a1)
{
 long long v1; // x0
 unsigned int v2; // w19

 v1 = syscall(56, 4294967196LL, a1, 0);
 if ( (v1 & 0x80000000) != 0 )
 {
 return (unsigned int)-*__errno_location();
 }
 else
 {
 v2 = v1;
 syscall(57, v1);
 }
 return v2;
}


/* Function: call_linux_syscall @ 0x23BC */
long long call_linux_syscall()
{
 if ( (int)param_linux_syscall((long long)"/etc/passwd") < 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_win32_api @ 0x23E4 */
long long param_win32_api(const char *a1)
{
 unsigned char v2[136]; // [xsp+18h] [xbp+18h] BYREF

 if ( stat(a1, (struct stat *)v2) < 0 )
 return 0xFFFFFFFFLL;
 if ( *(long long *)&v2[48] <= 0 )
 return 4294967294LL;
 return 42;
}


/* Function: call_win32_api @ 0x2450 */
long long call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x245C */
long long param_fork_exec(const char *a1, long long a2)
{
 int v4; // w0
 int stat_loc; // [xsp+24h] [xbp+24h] BYREF

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


/* Function: call_fork_exec @ 0x2510 */
long long call_fork_exec()
{
 if ( (unsigned int)param_fork_exec("/bin/true", 0) )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_pipe_communication @ 0x253C */
long long param_pipe_communication()
{
 __pid_t v0; // w0
 ssize_t v1; // x19
 __WAIT_STATUS v2; // x0
 int pipedes[2]; // [xsp+20h] [xbp+20h] BYREF
 unsigned char v5[32]; // [xsp+28h] [xbp+28h] BYREF

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
 v1 = read(pipedes[0], v5, 0x1Fu);
 v5[v1] = 0;
 close(pipedes[0]);
 v2.__iptr = 0;
 wait(&v2.__iptr);
 if ( v1 <= 0 )
 return 4294967293LL;
 else
 return 42;
}


/* Function: call_pipe_communication @ 0x2624 */
// attributes: thunk
long long call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x2628 */
long long param_socket_create()
{
 int v0; // w0
 int v1; // w19
 int optval; // [xsp+24h] [xbp+24h] BYREF
 struct sockaddr_in addr; // [xsp+28h] [xbp+28h] BYREF

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
 memset(&addr, 0, sizeof(addr));
 addr.sin_family = 2;
 if ( bind(v1, (struct sockaddr *)&addr, 0x10u) < 0 )
 {
 close(v1);
 return 4294967293LL;
 }
 else if ( listen(v1, 5) < 0 )
 {
 close(v1);
 return 4294967292LL;
 }
 else
 {
 close(v1);
 return 42;
 }
 }
}


/* Function: call_socket_create @ 0x271C */
// attributes: thunk
long long call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x2720 */
long long param_shmget_shmat()
{
 int v0; // w0
 unsigned int v1; // w19
 key_t v3; // w0
 int v4; // w0
 int v5; // w21
 char *v6; // x0
 const char *v7; // x20

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return (unsigned int)-1;
 close(v0);
 v3 = ftok("/tmp/binbench_shm", 42);
 if ( v3 < 0 )
 {
 return (unsigned int)-1;
 }
 else
 {
 v4 = shmget(v3, 0x1000u, 950);
 v5 = v4;
 if ( v4 < 0 )
 {
 return (unsigned int)-2;
 }
 else
 {
 v6 = (char *)shmat(v4, 0, 0);
 v7 = v6;
 if ( v6 == (char *)-1LL )
 {
 return (unsigned int)-3;
 }
 else
 {
 strcpy(v6, "SharedMemory");
 v1 = strlen(v7);
 shmdt(v7);
 shmctl(v5, 0, 0);
 }
 }
 }
 return v1;
}


/* Function: call_shmget_shmat @ 0x27E8 */
long long call_shmget_shmat()
{
 if ( (int)param_shmget_shmat() <= 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_signal_handling @ 0x2808 */
long long param_signal_handling()
{
 long long result; // x0
 int v1; // w20
 int v2; // w20

 result = (long long)signal(10, (__sighandler_t)signal_handler);
 if ( result != -1 )
 {
 if ( signal(14, (__sighandler_t)signal_handler) == (__sighandler_t)-1LL )
 {
 return 4294967294LL;
 }
 else
 {
 v1 = 1001;
 signal_received = 0;
 raise(10);
 while ( !signal_received )
 {
 if ( !--v1 )
 break;
 usleep(0x3E8u);
 }
 if ( signal_received )
 {
 if ( signal_number == 10 )
 {
 v2 = 2001;
 signal_received = 0;
 alarm(1u);
 while ( !signal_received )
 {
 if ( !--v2 )
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
 return 4294967291LL;
 }
 }
 else
 {
 return 4294967292LL;
 }
 }
 else
 {
 return 4294967293LL;
 }
 }
 }
 return result;
}


/* Function: call_signal_handling @ 0x2918 */
// attributes: thunk
long long call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x291C */
long long test_system_calls()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0

 puts(asc_33B2);
 v0 = call_linux_syscall();
 __printf_chk(1, aSysL301D, v0);
 v1 = call_win32_api();
 __printf_chk(1, aSysL302D, v1);
 v2 = call_fork_exec();
 __printf_chk(1, aSysL303D, v2);
 v3 = param_pipe_communication();
 __printf_chk(1, aSysL304D, v3);
 v4 = param_socket_create();
 __printf_chk(1, aSysL305D, v4);
 v5 = call_shmget_shmat();
 __printf_chk(1, aSysL306D, v5);
 v6 = param_signal_handling();
 return __printf_chk(1, aSysL307D, v6);
}


/* Function: param_pthread_create @ 0x29DC */
long long param_pthread_create(int a1)
{
 unsigned int v1; // w19
 int arg; // [xsp+24h] [xbp+24h] BYREF
 pthread_t newthread; // [xsp+28h] [xbp+28h] BYREF
 void *thread_return; // [xsp+30h] [xbp+30h] BYREF

 arg = a1;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 return (unsigned int)-1;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 return v1;
}


/* Function: call_pthread_create @ 0x2A6C */
long long call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: param_pthread_join @ 0x2A74 */
long long param_pthread_join()
{
 int *v0; // x19
 pthread_t *v1; // x21
 int v2; // w22
 int *v3; // x23
 unsigned int v4; // w20
 long long v5; // x21
 int v6; // w0
 pthread_t newthread[3]; // [xsp+58h] [xbp+58h] BYREF
 int arg[9]; // [xsp+70h] [xbp+70h] BYREF
 int v10; // [xsp+90h] [xbp+90h]

 v0 = arg;
 v1 = newthread;
 v2 = 3;
 v3 = arg;
 v10 = 0;
 arg[0] = (int)xmmword_3590;
 arg[1] = (int)(xmmword_3590 >> 32);
 arg[2] = (int)xmmword_35A0;
 do
 {
 v4 = pthread_create(v1, 0, (void *(*)(void *))thread_sum, v3);
 if ( v4 )
 return (unsigned int)-1;
 ++v1;
 v3 = v3 + 3;
 --v2;
 }
 while ( v2 );
 v5 = 0;
 while ( !pthread_join(newthread[v5], 0) )
 {
 v6 = v0[2];
 ++v5;
 v0 = v0 + 3;
 v4 += v6;
 if ( v5 == 3 )
 return v4;
 }
 return (unsigned int)-2;
}


/* Function: call_pthread_join @ 0x2B7C */
// attributes: thunk
long long call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x2B80 */
long long param_mutex_lock(int a1, int a2)
{
 char *v3; // x0
 char *v4; // x20
 long long v5; // x22
 long long i; // x22
 pthread_t *v8; // x0
 pthread_t v9; // x0
 int arg; // [xsp+4Ch] [xbp+4Ch] BYREF

 arg = a2;
 v3 = (char *)malloc(8LL * a1);
 if ( !v3 )
 return 0xFFFFFFFFLL;
 v4 = v3;
 v5 = 0;
 shared_counter = 0;
 while ( a1 > (int)v5 )
 {
 v8 = (pthread_t *)&v4[8 * v5++];
 if ( pthread_create(v8, 0, (void *(*)(void *))thread_increment, &arg) )
 {
 free(v4);
 return 4294967294LL;
 }
 }
 for ( i = 0; a1 > (int)i; ++i )
 {
 v9 = *(unsigned long long *)&v4[8 * i];
 pthread_join(v9, 0);
 }
 free(v4);
 if ( shared_counter == a1 * arg )
 return 42;
 else
 return 4294967293LL;
}


/* Function: call_mutex_lock @ 0x2C60 */
long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x2C6C */
long long param_condition_variable()
{
 unsigned int v0; // w19
 pthread_t th; // [xsp+20h] [xbp+20h] BYREF
 pthread_t newthread; // [xsp+28h] [xbp+28h] BYREF
 void *thread_return; // [xsp+30h] [xbp+30h] BYREF

 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 {
 return (unsigned int)-1;
 }
 else if ( pthread_create(&th, 0, (void *(*)(void *))producer_thread, 0) )
 {
 v0 = -2;
 pthread_cancel(newthread);
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


/* Function: call_condition_variable @ 0x2D38 */
// attributes: thunk
long long call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x2D3C */
long long param_atomic_ops(int a1, int a2)
{
 char *v3; // x0
 char *v4; // x19
 long long v5; // x22
 long long i; // x22
 int v7; // w20
 pthread_t *v9; // x0
 pthread_t v10; // x0
 int arg; // [xsp+4Ch] [xbp+4Ch] BYREF
 pthread_t newthread; // [xsp+50h] [xbp+50h] BYREF

 arg = a2;
 v3 = (char *)malloc(8LL * a1);
 if ( !v3 )
 return 0xFFFFFFFFLL;
 v4 = v3;
 atomic_store(&atomic_counter, 0);
 v5 = 0;
 while ( a1 > (int)v5 )
 {
 v9 = (pthread_t *)&v4[8 * v5++];
 if ( pthread_create(v9, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 free(v4);
 return 4294967294LL;
 }
 }
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread, 0);
 for ( i = 0; a1 > (int)i; ++i )
 {
 v10 = *(unsigned long long *)&v4[8 * i];
 pthread_join(v10, 0);
 }
 v7 = atomic_load((unsigned int *)&atomic_counter);
 free(v4);
 if ( v7 <= 0 )
 return 4294967293LL;
 else
 return 42;
}


/* Function: call_atomic_ops @ 0x2E78 */
long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x2E84 */
long long param_thread_local_storage(int a1)
{
 size_t v2; // x20
 pthread_t *v3; // x21
 pthread_t *v4; // x0
 bool v5; // zf
 pthread_t *v6; // x20
 long long i; // x22
 long long v8; // x22
 int v9; // w24
 long long v10; // x22
 int v11; // w23
 int v12; // w24
 int v13; // w0
 int v14; // w19
 void *v17; // x3
 pthread_t *v18; // x0
 long long v19; // x19
 void *v20; // x0
 void *v21; // x0
 void *thread_return; // [xsp+50h] [xbp+50h] BYREF

 v2 = 8LL * a1;
 v3 = malloc(v2);
 v4 = malloc(v2);
 if ( v3 )
 v5 = v4 == 0;
 else
 v5 = 1;
 if ( v5 )
 return 0xFFFFFFFFLL;
 v6 = v4;
 for ( i = 0; a1 > (int)i; ++i )
 {
 v6[i] = (unsigned long long)malloc(0x10u);
 }
 v8 = 0;
 do
 {
 v9 = v8;
 if ( a1 <= (int)v8 )
 {
 v10 = 0;
 v11 = 0;
 v12 = 0;
 while ( a1 > (int)v10 )
 {
 pthread_join(v3[v10], &thread_return);
 v12 += *(unsigned int *)thread_return;
 v11 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 v21 = (void *)v6[v10++];
 free(v21);
 }
 free(v6);
 free(v3);
 v13 = 100 * a1;
 v14 = 150 * a1;
 if ( v13 == v12 && v14 == v11 )
 return 42;
 else
 return 4294967293LL;
 }
 v17 = (void *)v6[v8];
 v18 = &v3[v8++];
 }
 while ( !pthread_create(v18, 0, (void *(*)(void *))thread_tls_test, v17) );
 v19 = 0;
 do
 {
 v20 = (void *)v6[v19++];
 free(v20);
 }
 while ( v9 >= (int)v19 );
 free(v6);
 free(v3);
 return 4294967294LL;
}


/* Function: call_thread_local_storage @ 0x3040 */
long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3048 */
long long test_thread_concurrency()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0

 puts(asc_349B);
 v0 = call_pthread_create();
 __printf_chk(1, aThrL301D, v0);
 v1 = param_pthread_join();
 __printf_chk(1, aThrL302D, v1);
 v2 = call_mutex_lock();
 __printf_chk(1, aThrL303D, v2);
 v3 = param_condition_variable();
 __printf_chk(1, aThrL304D, v3);
 v4 = call_atomic_ops();
 __printf_chk(1, aThrL305D, v4);
 v5 = call_thread_local_storage();
 return __printf_chk(1, aThrL306D, v5);
}


/* Function: __aarch64_cas4_acq_rel @ 0x30F0 */
unsigned int _aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, atomic_uint *a3)
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


/* Function: __aarch64_ldadd4_acq_rel @ 0x3130 */
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


/* Function: .term_proc @ 0x3160 */
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

/* FAILED to decompile: fileno @ 0x151C8 */

/* FAILED to decompile: signal @ 0x151D0 */

/* FAILED to decompile: __snprintf_chk @ 0x151D8 */

/* FAILED to decompile: fclose @ 0x151E0 */

/* FAILED to decompile: fopen @ 0x151E8 */

/* FAILED to decompile: malloc @ 0x151F0 */

/* FAILED to decompile: setsockopt @ 0x151F8 */

/* FAILED to decompile: open @ 0x15200 */

/* FAILED to decompile: pthread_cond_signal @ 0x15208 */

/* FAILED to decompile: __printf_chk @ 0x15210 */

/* FAILED to decompile: memset @ 0x15218 */

/* FAILED to decompile: shmat @ 0x15220 */

/* FAILED to decompile: sleep @ 0x15228 */

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

/* FAILED to decompile: __errno_location @ 0x15310 */

/* FAILED to decompile: pthread_join @ 0x15318 */

/* FAILED to decompile: alarm @ 0x15320 */

/* FAILED to decompile: pthread_cancel @ 0x15328 */

/* FAILED to decompile: pthread_mutex_lock @ 0x15330 */

/* FAILED to decompile: syscall @ 0x15338 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x15340 */

/* FAILED to decompile: waitpid @ 0x15348 */

/* FAILED to decompile: unlink @ 0x15350 */

/* FAILED to decompile: __gmon_start__ @ 0x15360 */

/* Total functions decompiled: 75, failed: 62 */
