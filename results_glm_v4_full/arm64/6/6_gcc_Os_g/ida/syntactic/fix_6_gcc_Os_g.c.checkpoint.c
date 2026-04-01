/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

#include <stdio.h>
#include <pthread.h>
#include <stdatomic.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <netinet/in.h>
#include <sys/ipc.h>
#include <signal.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/auxv.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/shm.h>

/* Type for wait() system call status */
typedef union {
    int *__iptr;
} __WAIT_STATUS __attribute__ ((__transparent_union__));

/* Macro to extract byte 1 (bits 8-15) from a value */
#define BYTE1(x) (((x) >> 8) & 0xFF)

typedef struct ThreadData {
    unsigned int start;
    unsigned int end;
    unsigned int result;
} ThreadData;

/* Global variable for LSE atomic support */
int _aarch64_have_lse_atomics = 0;

/* Global variables for condition variable synchronization */
int ready = 0;
int data = 0;

/* Global atomic counter */
atomic_uint atomic_counter = 0;

/* Global variables for mutex synchronization */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Global shared counter */
int shared_counter = 0;

/* Global string constants from decompiled binary */
const char *asc_320D = "Testing Standard Library Functions";
const char *aLibL101D = "Lib.L1=%d\n";
const char *aLibL102D = "Lib.L2=%d\n";
const char *aLibL103D = "Lib.L3=%d\n";
const char *aLibL104D = "Lib.L4=%d\n";
const char *aLibL105D = "Lib.L5=%d\n";
const char *aLibL106D = "Lib.L6=%d\n";
const char *aLibL107D = "Lib.L7=%d\n";
const char *aLibL108D = "Lib.L8=%d\n";
const char *aLibL109D = "Lib.L9=%d\n";
const char *aLibL110D = "Lib.L10=%d\n";
const char *aLibL111D = "Lib.L11=%d\n";
const char *aLibL112D = "Lib.L12=%d\n";

/* Global 128-bit constants from decompiled binary */
const unsigned long long xmmword_3590[2] = {0, 0};
const unsigned long long xmmword_35A0[2] = {0, 0};
const char *asc_33B2 = "Testing System Calls";
const char *aSysL301D = "Sys.L1=%d\n";
const char *aSysL302D = "Sys.L2=%d\n";
const char *aSysL303D = "Sys.L3=%d\n";
const char *aSysL304D = "Sys.L4=%d\n";
const char *aSysL305D = "Sys.L5=%d\n";
const char *aSysL306D = "Sys.L6=%d\n";
const char *aSysL307D = "Sys.L7=%d\n";
const char *asc_349B = "Testing Thread Concurrency";
const char *aThrL301D = "Thr.L1=%d\n";
const char *aThrL302D = "Thr.L2=%d\n";
const char *aThrL303D = "Thr.L3=%d\n";
const char *aThrL304D = "Thr.L4=%d\n";
const char *aThrL305D = "Thr.L5=%d\n";
const char *aThrL306D = "Thr.L6=%d\n";

/* ARM64 system register definitions */
#define TPIDR_EL0 (3<<14|5|1)  /* Thread Pointer ID Register EL0 */

/* ARM64 intrinsic to read system register */
static inline unsigned long long _ReadStatusReg(unsigned int reg) {
    unsigned long long val;
    __asm__ volatile("mrs %0, tpidr_el0" : "=r"(val));
    return val;
}

/* ARM64 load-acquire exclusive intrinsic */
static inline unsigned int __ldaxr(volatile unsigned int *ptr) {
    unsigned int result;
    __asm__ volatile("ldaxr %w0, [%1]" : "=r"(result) : "r"(ptr) : "memory");
    return result;
}

/* ARM64 store-release exclusive intrinsic */
static inline int __stlxr(unsigned int val, volatile unsigned int *ptr) {
    int result;
    __asm__ volatile("stlxr %w0, %w1, [%2]" : "=&r"(result) : "r"(val), "r"(ptr) : "memory");
    return result;
}

/* Macro to set low 32 bits of a 64-bit value */
#define LODWORD(x) ((x) = (int)(x))

/* Global variables for signal handling */
volatile int signal_received = 0;
int signal_number = 0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/6/6_gcc_Os_g
 * Processor: arm
 */

/* Forward declarations */
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);
unsigned int _aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, atomic_uint *a3);
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);
long long call_weak_fn(void);

/* Thread Pointer ID Register for ARM64 */
#define TPIDR_EL0_VAL "tpidr_el0"

/* JUMPOUT macro for decompiled code - indicates jump out of function */
#define JUMPOUT(x) return

/* Stub for weak function call from CRT */
long long call_weak_fn(void)
{
    return 0;
}

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
 test_standard_library_functions();
 test_system_calls();
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
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: thread_sum @ 0x196C */
void * thread_sum(void *arg)
{
 int v1; // w1
 int v2; // w3
 int v4; // w2

 v1 = *(unsigned int *)arg;
 v2 = *((unsigned int *)arg + 1);
 *((unsigned int *)arg + 2) = 0;
 while ( v2 >= v1 )
 {
 v4 = *((unsigned int *)arg + 2) + v1++;
 *((unsigned int *)arg + 2) = v4;
 }
 return 0;
}


/* Function: thread_compute @ 0x1998 */
void * thread_compute(void *arg)
{
 int v1; // w19
 void *result; // x0

 v1 = *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v1 * v1;
 return result;
}


/* Function: thread_increment @ 0x19C4 */
void * thread_increment(void *arg)
{
 int v1; // w22
 int v2; // w20

 v1 = *(unsigned int *)arg;
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
void * consumer_thread(void *arg)
{
 int v1; // w19
 void *result; // x0

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *(unsigned int *)result = v1;
 return result;
}


/* Function: producer_thread @ 0x1A98 */
void * producer_thread(void *arg)
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
void * thread_atomic_increment(void *arg)
{
 int v1; // w21
 unsigned int i; // w20
 long long v4; // x1
 long long v5; // x0

 v1 = *(unsigned int *)arg;
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
void * thread_atomic_load_store(void *arg)
{
 unsigned int v1; // w1

 v1 = atomic_load(&atomic_counter);
 atomic_store(&atomic_counter, v1 + 100);
 return 0;
}


/* Function: thread_tls_test @ 0x1B74 */
void * thread_tls_test(void *arg)
{
 unsigned long long StatusReg; // x3
 int v2; // w20
 void *result; // x0

 StatusReg = _ReadStatusReg(3<<14|5|1);
 v2 = *(unsigned int *)(StatusReg + 16);
 *(unsigned int *)(StatusReg + 16) = v2 + 50;
 strncpy((char *)(StatusReg + 20), (const char *)arg, 0x1Fu);
 result = malloc(8u);
 *(unsigned int *)result = v2;
 *((unsigned int *)result + 1) = v2 + 50;
 return result;
}


/* Function: param_strcpy @ 0x1BC4 */
int param_strcpy(char *dst, const char *src)
{
 strcpy(dst, src);
 return strlen(dst);
}


/* Function: call_strcpy @ 0x1BEC */
int call_strcpy()
{
 char buffer[32]; // [xsp+18h] [xbp+18h] BYREF

 return param_strcpy(buffer, "HelloLib");
}


/* Function: param_strcmp @ 0x1C40 */
int param_strcmp(const char *s1, const char *s2)
{
 int v2; // w0
 bool v3; // zf
 bool v4; // nf
 int result; // w0

 v2 = strcmp(s1, s2);
 v3 = v2 == 0;
 v4 = v2 < 0;
 if ( v2 )
 result = -1;
 else
 result = 0;
 if ( !v4 && !v3 )
 return 1;
 return result;
}


/* Function: call_strcmp @ 0x1C60 */
int call_strcmp()
{
 int v0; // w19
 int v1; // w19

 v0 = param_strcmp("abc", "def");
 v1 = v0 + param_strcmp("xyz", "xyz");
 return v1 + param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x1CC0 */
int param_strlen(const char *str)
{
 return strlen(str);
}


/* Function: call_strlen @ 0x1CD4 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x1CDC */
int param_memcpy(void *dst, const void *src, size_t n)
{
 int v3; // w19

 v3 = n;
 memcpy(dst, src, n);
 return v3;
}


/* Function: call_memcpy @ 0x1D00 */
int call_memcpy()
{
 int src[5]; // [xsp+18h] [xbp+18h] BYREF
 int dst[6]; // [xsp+30h] [xbp+30h] BYREF

 memset(dst, 0, 20);
 *(unsigned long long *)src = 0x140000000ALL;
 *(unsigned long long *)&src[2] = 0x280000001ELL;
 src[4] = 50;
 param_memcpy(dst, src, 0x14u);
 return dst[0] + dst[2] + dst[4];
}


/* Function: param_memcmp @ 0x1D88 */
int param_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // w0
 bool v4; // zf
 bool v5; // nf
 int result; // w0

 v3 = memcmp(p1, p2, n);
 v4 = v3 == 0;
 v5 = v3 < 0;
 if ( v3 )
 result = -1;
 else
 result = 0;
 if ( !v5 && !v4 )
 return 1;
 return result;
}


/* Function: call_memcmp @ 0x1DA8 */
int call_memcmp()
{
 int v0; // w19
 int arr1[3]; // [xsp+38h] [xbp+38h] BYREF
 int arr2[3]; // [xsp+48h] [xbp+48h] BYREF
 int arr3[3]; // [xsp+58h] [xbp+58h] BYREF

 arr2[2] = 4;
 *(unsigned long long *)arr1 = 0x200000001LL;
 arr1[2] = 3;
 *(unsigned long long *)arr2 = 0x200000001LL;
 *(unsigned long long *)arr3 = 0x200000001LL;
 arr3[2] = 3;
 v0 = param_memcmp(arr1, arr2, 0xCu);
 return v0 + param_memcmp(arr1, arr3, 0xCu);
}


/* Function: param_printf @ 0x1E5C */
int param_printf(int x, const char *name)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x1E74 */
int call_printf()
{
 return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x1E84 */
int param_scanf(const char *input_str)
{
 int a; // [xsp+10h] [xbp+10h] BYREF
 int b; // [xsp+14h] [xbp+14h] BYREF

 if ( (unsigned int)sscanf(input_str, "%d,%d", &a, &b) == 2 )
 return a + b;
 else
 return -1;
}


/* Function: call_scanf @ 0x1EF4 */
int call_scanf()
{
 return param_scanf("123,456");
}


/* Function: param_fopen_fclose @ 0x1F00 */
int param_fopen_fclose(const char *filename)
{
 FILE *v1; // x0
 FILE *v2; // x20
 int v3; // w19

 v1 = fopen(filename, "r");
 if ( !v1 )
 return -1;
 v2 = v1;
 v3 = fileno(v1);
 fclose(v2);
 return v3;
}


/* Function: call_fopen_fclose @ 0x1F48 */
int call_fopen_fclose()
{
 if ( param_fopen_fclose("/etc/passwd") < 0 )
 return -1;
 else
 return 42;
}


/* Function: param_fread_fwrite @ 0x1F70 */
int param_fread_fwrite(const char *tmpfile)
{
 FILE *v2; // x0
 FILE *v3; // x19
 size_t v5; // x21
 char read_buffer[32]; // [xsp+48h] [xbp+48h] BYREF

 v2 = fopen(tmpfile, "w+");
 if ( !v2 )
 return -1;
 v3 = v2;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
 {
 rewind(v3);
 v5 = fread(read_buffer, 1u, 0x12u, v3);
 read_buffer[v5] = 0;
 fclose(v3);
 unlink(tmpfile);
 if ( v5 == 18 )
 {
 if ( !strcmp(read_buffer, "BinBench Test Data") )
 return 42;
 else
 return -3;
 }
 else
 {
 return -3;
 }
 }
 else
 {
 fclose(v3);
 return -2;
 }
}


/* Function: call_fread_fwrite @ 0x2084 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2090 */
int param_malloc_free(size_t size)
{
 size_t v1; // x19
 unsigned int *v3; // x0
 long long i; // x1
 int v5; // w19

 v1 = size;
 v3 = malloc(4 * size);
 if ( !v3 )
 return -1;
 for ( i = 0; i != size; ++i )
 v3[i] = 10 * i;
 v5 = v3[v1 - 1] + *v3;
 free(v3);
 return v5;
}


/* Function: call_malloc_free @ 0x20FC */
int call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x2104 */
int param_memset(void *buffer, size_t size)
{
 long long v4; // x1
 int result; // w0
 int v6; // w2

 memset(buffer, 0, size);
 v4 = 0;
 result = 0;
 while ( v4 != size )
 {
 v6 = *((unsigned char *)buffer + v4++);
 result += v6;
 }
 return result;
}


/* Function: call_memset @ 0x2150 */
int call_memset()
{
 long long i; // x1
 int buffer[10]; // [xsp+10h] [xbp+10h] BYREF

 for ( i = 0; i != 10; ++i )
 buffer[i] = 255;
 param_memset(buffer, 0x28u);
 return buffer[0] + buffer[9];
}


/* Function: param_strchr_strstr @ 0x21C0 */
int param_strchr_strstr(const char *str, char ch, const char *substr)
{
 char *v5; // x0
 int v6; // w21
 char *v7; // x0
 int v8; // w19
 int v9; // w0

 v5 = strchr(str, (unsigned char)ch);
 v6 = (unsigned int)v5 - (unsigned int)str;
 if ( !v5 )
 v6 = -1;
 v7 = strstr(str, substr);
 v8 = (unsigned int)v7 - (unsigned int)str;
 if ( v7 )
 v9 = v8;
 else
 v9 = -1;
 return v6 + v9;
}


/* Function: call_strchr_strstr @ 0x221C */
int call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x2234 */
void test_standard_library_functions()
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
 __printf_chk(1, aLibL112D, v10);
}


/* Function: param_linux_syscall @ 0x2368 */
int param_linux_syscall(const char *pathname)
{
 long long v1; // x0
 int v2; // w19

 v1 = syscall(56, 4294967196LL, pathname, 0);
 if ( (v1 & 0x80000000) != 0 )
 return -*__errno_location();
 v2 = v1;
 syscall(57, v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x23BC */
int call_linux_syscall()
{
 if ( param_linux_syscall("/etc/passwd") < 0 )
 return -1;
 else
 return 42;
}


/* Function: param_win32_api @ 0x23E4 */
int param_win32_api(const char *filename)
{
 struct stat st; // [xsp+18h] [xbp+18h] BYREF

 if ( stat(filename, &st) < 0 )
 return -1;
 if ( st.st_size <= 0 )
 return -2;
 return 42;
}


/* Function: call_win32_api @ 0x2450 */
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x245C */
int param_fork_exec(const char *prog, const char *arg)
{
 int v4; // w0
 int result; // w0
 int status; // [xsp+24h] [xbp+24h] BYREF

 v4 = fork();
 if ( v4 < 0 )
 return -1;
 if ( !v4 )
 {
 execl(prog, prog, arg, 0);
 _exit(127);
 }
 if ( waitpid(v4, &status, 0) < 0 )
 return -2;
 result = BYTE1(status);
 if ( (status & 0x7F) != 0 )
 return -3;
 return result;
}


/* Function: call_fork_exec @ 0x2510 */
int call_fork_exec()
{
 if ( param_fork_exec("/bin/true", 0) )
 return -1;
 else
 return 42;
}


/* Function: param_pipe_communication @ 0x253C */
int param_pipe_communication()
{
 __pid_t v0; // w0
 ssize_t v1; // x19
 __WAIT_STATUS v2; // x0
 int pipefd[2]; // [xsp+20h] [xbp+20h] BYREF
 char buffer[32]; // [xsp+28h] [xbp+28h] BYREF

 if ( pipe(pipefd) < 0 )
 return -1;
 v0 = fork();
 if ( v0 < 0 )
 return -2;
 if ( !v0 )
 {
 close(pipefd[0]);
 write(pipefd[1], "HelloPipe", 9u);
 close(pipefd[1]);
 _exit(0);
 }
 close(pipefd[1]);
 v1 = read(pipefd[0], buffer, 0x1Fu);
 buffer[v1] = 0;
 close(pipefd[0]);
 v2.__iptr = 0;
 wait(v2.__iptr);
 if ( v1 <= 0 )
 return -3;
 else
 return 42;
}


/* Function: call_pipe_communication @ 0x2624 */
// attributes: thunk
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x2628 */
int param_socket_create()
{
 int v0; // w0
 int v1; // w19
 int opt; // [xsp+24h] [xbp+24h] BYREF
 struct sockaddr_in addr; // [xsp+28h] [xbp+28h] BYREF

 v0 = socket(2, 1, 0);
 if ( v0 < 0 )
 return -1;
 v1 = v0;
 opt = 1;
 if ( setsockopt(v0, 1, 2, &opt, 4u) < 0 )
 {
 close(v1);
 return -2;
 }
 else
 {
 memset(&addr, 0, sizeof(addr));
 addr.sin_family = 2;
 if ( bind(v1, (const struct sockaddr *)&addr, 0x10u) < 0 )
 {
 close(v1);
 return -3;
 }
 else if ( listen(v1, 5) < 0 )
 {
 close(v1);
 return -4;
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
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x2720 */
int param_shmget_shmat()
{
 int v0; // w0
 int v1; // w19
 key_t v3; // w0
 int v4; // w0
 int v5; // w21
 char *v6; // x0
 const char *v7; // x20

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return -1;
 close(v0);
 v3 = ftok("/tmp/binbench_shm", 42);
 if ( v3 < 0 )
 return -1;
 v4 = shmget(v3, 0x1000u, 950);
 v5 = v4;
 if ( v4 < 0 )
 return -2;
 v6 = (char *)shmat(v4, 0, 0);
 v7 = v6;
 if ( v6 == (char *)-1LL )
 return -3;
 strcpy(v6, "SharedMemory");
 v1 = strlen(v7);
 shmdt(v7);
 shmctl(v5, 0, 0);
 return v1;
}


/* Function: call_shmget_shmat @ 0x27E8 */
int call_shmget_shmat()
{
 if ( param_shmget_shmat() <= 0 )
 return -1;
 else
 return 42;
}


/* Function: param_signal_handling @ 0x2808 */
int param_signal_handling()
{
 long long v0; // x0
 int v1; // w20
 int v2; // w20

 v0 = (long long)signal(10, signal_handler);
 if ( v0 != (long long)-1 )
 {
 if ( (long long)signal(14, signal_handler) == (long long)-1 )
 {
 v0 = -2;
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
 v0 = 42;
 }
 else
 {
 v0 = -5;
 }
 }
 else
 {
 v0 = -4;
 }
 }
 else
 {
 v0 = -3;
 }
 }
 }
 return (int)v0;
}


/* Function: call_signal_handling @ 0x2918 */
// attributes: thunk
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x291C */
void test_system_calls()
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
 __printf_chk(1, aSysL307D, v6);
}


/* Function: param_pthread_create @ 0x29DC */
int param_pthread_create(int x)
{
 int v1; // w19
 int input; // [xsp+24h] [xbp+24h] BYREF
 pthread_t tid; // [xsp+28h] [xbp+28h] BYREF
 void *thread_ret; // [xsp+30h] [xbp+30h] BYREF

 input = x;
 if ( pthread_create(&tid, 0, thread_compute, &input) )
 return -1;
 pthread_join(tid, &thread_ret);
 v1 = *(unsigned int *)thread_ret;
 free(thread_ret);
 return v1;
}


/* Function: call_pthread_create @ 0x2A6C */
int call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: param_pthread_join @ 0x2A74 */
int param_pthread_join()
{
 ThreadData *v0; // x19
 pthread_t *v1; // x21
 int v2; // w22
 ThreadData *v3; // x23
 int v4; // w20
 long long v5; // x21
 int v6; // w0
 pthread_t tids[3]; // [xsp+58h] [xbp+58h] BYREF
 ThreadData data[3]; // [xsp+70h] [xbp+70h] BYREF

 v0 = data;
 v1 = tids;
 v2 = 3;
 v3 = data;
 data[2].result = 0;
 data[0].start = 0;
 data[0].end = 0;
 data[0].result = 0;
 data[1].start = 0;
 data[1].end = 0;
 data[1].result = 0;
 do
 {
 v4 = pthread_create(v1, 0, thread_sum, v3);
 if ( v4 )
 return -1;
 ++v1;
 ++v3;
 --v2;
 }
 while ( v2 );
 v5 = 0;
 while ( !pthread_join(tids[v5], 0) )
 {
 v6 = v0->result;
 ++v5;
 ++v0;
 v4 += v6;
 if ( v5 == 3 )
 return v4;
 }
 return -2;
}


/* Function: call_pthread_join @ 0x2B7C */
// attributes: thunk
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x2B80 */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 char *v3; // x0
 char *v4; // x20
 long long v5; // x22
 long long i; // x22
 pthread_t *v8; // x0
 pthread_t v9; // x0
 int arg; // [xsp+4Ch] [xbp+4Ch] BYREF

 arg = iterations_per_thread;
 v3 = (char *)malloc(8LL * thread_count);
 if ( !v3 )
 return -1;
 v4 = v3;
 v5 = 0;
 shared_counter = 0;
 while ( thread_count > (int)v5 )
 {
 v8 = (pthread_t *)&v4[8 * v5++];
 if ( pthread_create(v8, 0, thread_increment, &arg) )
 {
 free(v4);
 return -2;
 }
 }
 for ( i = 0; thread_count > (int)i; ++i )
 {
 v9 = *(unsigned long long *)&v4[8 * i];
 pthread_join(v9, 0);
 }
 free(v4);
 if ( shared_counter == thread_count * arg )
 return 42;
 else
 return -3;
}


/* Function: call_mutex_lock @ 0x2C60 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x2C6C */
int param_condition_variable()
{
 int v0; // w19
 pthread_t producer; // [xsp+20h] [xbp+20h] BYREF
 pthread_t consumer; // [xsp+28h] [xbp+28h] BYREF
 void *consumer_ret; // [xsp+30h] [xbp+30h] BYREF

 ready = 0;
 data = 0;
 if ( pthread_create(&consumer, 0, consumer_thread, 0) )
 return -1;
 if ( pthread_create(&producer, 0, producer_thread, 0) )
 {
 v0 = -2;
 pthread_cancel(consumer);
 }
 else
 {
 pthread_join(consumer, &consumer_ret);
 pthread_join(producer, 0);
 v0 = *(unsigned int *)consumer_ret;
 free(consumer_ret);
 }
 return v0;
}


/* Function: call_condition_variable @ 0x2D38 */
// attributes: thunk
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x2D3C */
int param_atomic_ops(int thread_count, int iterations)
{
 char *v3; // x0
 char *v4; // x19
 long long v5; // x22
 long long i; // x22
 int v7; // w20
 pthread_t *v9; // x0
 pthread_t v10; // x0
 int iterationsa; // [xsp+4Ch] [xbp+4Ch] BYREF
 pthread_t load_store_tid; // [xsp+50h] [xbp+50h] BYREF

 iterationsa = iterations;
 v3 = (char *)malloc(8LL * thread_count);
 if ( !v3 )
 return -1;
 v4 = v3;
 atomic_store(&atomic_counter, 0);
 v5 = 0;
 while ( thread_count > (int)v5 )
 {
 v9 = (pthread_t *)&v4[8 * v5++];
 if ( pthread_create(v9, 0, thread_atomic_increment, &iterationsa) )
 {
 free(v4);
 return -2;
 }
 }
 if ( !pthread_create(&load_store_tid, 0, thread_atomic_load_store, 0) )
 pthread_join(load_store_tid, 0);
 for ( i = 0; thread_count > (int)i; ++i )
 {
 v10 = *(unsigned long long *)&v4[8 * i];
 pthread_join(v10, 0);
 }
 v7 = atomic_load((unsigned int *)&atomic_counter);
 free(v4);
 if ( v7 <= 0 )
 return -3;
 else
 return 42;
}


/* Function: call_atomic_ops @ 0x2E78 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x2E84 */
int param_thread_local_storage(int thread_count)
{
 size_t v2; // x20
 pthread_t *v3; // x21
 unsigned long long *v4; // x0
 bool v5; // zf
 unsigned long long *v6; // x20
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
 void *ret; // [xsp+50h] [xbp+50h] BYREF

 v2 = 8LL * thread_count;
 v3 = malloc(v2);
 v4 = malloc(v2);
 if ( v3 )
 v5 = v4 == 0;
 else
 v5 = 1;
 if ( v5 )
 return -1;
 v6 = v4;
 for ( i = 0; thread_count > (int)i; ++i )
 {
 v6[i] = (unsigned long long)malloc(0x10u);
 snprintf((char *)v6[i], 16, "TLS%d", (int)i);
 }
 v8 = 0;
 do
 {
 v9 = v8;
 if ( thread_count <= (int)v8 )
 {
 v10 = 0;
 v11 = 0;
 v12 = 0;
 while ( thread_count > (int)v10 )
 {
 pthread_join(v3[v10], &ret);
 v12 += *(unsigned int *)ret;
 v11 += *((unsigned int *)ret + 1);
 free(ret);
 v21 = (void *)v6[v10++];
 free(v21);
 }
 free(v6);
 free(v3);
 v13 = 100 * thread_count;
 v14 = 150 * thread_count;
 if ( v13 == v12 && v14 == v11 )
 return 42;
 else
 return -3;
 }
 v17 = (void *)v6[v8];
 v18 = &v3[v8++];
 }
 while ( !pthread_create(v18, 0, thread_tls_test, v17) );
 v19 = 0;
 do
 {
 v20 = (void *)v6[v19++];
 free(v20);
 }
 while ( v9 >= (int)v19 );
 free(v6);
 free(v3);
 return -2;
}


/* Function: call_thread_local_storage @ 0x3040 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3048 */
void test_thread_concurrency()
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
 __printf_chk(1, aThrL306D, v5);
}


/* Function: __aarch64_cas4_acq_rel @ 0x30F0 */
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

/* FAILED to decompile: stat_0 @ 0x15248 */

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
