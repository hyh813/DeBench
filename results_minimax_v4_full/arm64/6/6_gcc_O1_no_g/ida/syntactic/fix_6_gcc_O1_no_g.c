/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/types.h>
#include <stdatomic.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/auxv.h>
#include <linux/futex.h>
#include <sys/shm.h>

/* Forward declarations for CRT stub functions */
void call_weak_fn(void);
void JUMPOUT(long long addr);
long long __getauxval(unsigned long type);
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);
unsigned int _aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, atomic_uint *a3);
int __isoc99_sscanf(const char *str, const char *format, ...);

/* ARM64 exclusive memory access intrinsics */
static inline unsigned int __ldaxr(unsigned int *ptr)
{
 unsigned int val;
 __asm__ __volatile__("ldaxr %w0, [%1]" : "=r"(val) : "r"(ptr));
 return val;
}

static inline int __stlxr(unsigned int val, unsigned int *ptr)
{
 int res;
 __asm__ __volatile__("stlxr %w0, %w1, [%2]" : "=r"(res) : "r"(val), "r"(ptr));
 return res;
}

/* ARM64 system register access */
#define TPIDR_EL0 0x5e82
static inline unsigned long long _ReadStatusReg(unsigned long long reg)
{
 unsigned long long val;
 __asm__ __volatile__("mrs %0, %1" : "=r"(val) : "r"(reg));
 return val;
}

/* LODWORD macro - extracts low 32 bits from 64-bit value */
#define LODWORD(x) ((unsigned int)((x) & 0xFFFFFFFF))

/* BYTE1 macro - extracts second byte from 64-bit value */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

/* String constants for test output */
static const char asc_34C8[] = "=== Standard Library Function Tests ===\n";
static const char aLibL101D[] = "LibL1_01 (strcpy): %d\n";
static const char aLibL102D[] = "LibL1_02 (strcmp): %d\n";
static const char aLibL103D[] = "LibL1_03 (strlen): %d\n";
static const char aLibL104D[] = "LibL1_04 (memcpy): %d\n";
static const char aLibL105D[] = "LibL1_05 (memcmp): %d\n";
static const char aLibL106D[] = "LibL1_06 (printf): %d\n";
static const char aLibL107D[] = "LibL1_07 (scanf): %d\n";
static const char aLibL108D[] = "LibL1_08 (fopen): %d\n";
static const char aLibL109D[] = "LibL1_09 (fread): %d\n";
static const char aLibL110D[] = "LibL1_10 (malloc): %d\n";
static const char aLibL111D[] = "LibL1_11 (memset): %d\n";
static const char aLibL112D[] = "LibL1_12 (strchr/strstr): %d\n";
static const char asc_36B8[] = "=== System Call Tests ===\n";
static const char aSysL301D[] = "SysL3_01 (syscall): %d\n";
static const char aSysL302D[] = "SysL3_02 (stat): %d\n";
static const char aSysL303D[] = "SysL3_03 (fork/exec): %d\n";
static const char aSysL304D[] = "SysL3_04 (pipe): %d\n";
static const char aSysL305D[] = "SysL3_05 (socket): %d\n";
static const char aSysL306D[] = "SysL3_06 (shm): %d\n";
static const char aSysL307D[] = "SysL3_07 (signal): %d\n";
static const char asc_37C8[] = "=== Thread Concurrency Tests ===\n";
static const char aThrL301D[] = "ThrL3_01 (pthread_create): %d\n";
static const char aThrL302D[] = "ThrL3_02 (pthread_join): %d\n";
static const char aThrL303D[] = "ThrL3_03 (mutex): %d\n";
static const char aThrL304D[] = "ThrL3_04 (cond_var): %d\n";
static const char aThrL305D[] = "ThrL3_05 (atomic): %d\n";
static const char aThrL306D[] = "ThrL3_06 (TLS): %d\n";
static unsigned long long xmmword_38E0[2] = {0, 0};
static unsigned long long xmmword_38F0[2] = {0, 0};

/* Global variables */
int _aarch64_have_lse_atomics;
int ready;
int data;
atomic_uint atomic_counter;
int shared_counter;
int signal_received;
int signal_number;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Define __WAIT_STATUS type */
typedef union {
 int __i;
 int *__ip;
} __WAIT_STATUS;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/6/6_gcc_O1_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x1388 */
long long init_proc()
{
 call_weak_fn();
 return 0;
}


/* Function: sub_13A0 @ 0x13A0 */
void sub_13A0()
{
 JUMPOUT(0);
}


/* Function: init_have_lse_atomics @ 0x17C0 */
long long init_have_lse_atomics()
{
 long long result; // x0

 result = ((unsigned int)__getauxval(16) >> 8) & 1;
 _aarch64_have_lse_atomics = result;
 return result;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: signal_handler @ 0x1914 */
long long signal_handler(long long result)
{
 signal_received = 1;
 signal_number = result;
 return result;
}


/* Function: thread_sum @ 0x192C */
long long thread_sum(int *a1)
{
 int v1; // w1
 int v2; // w3
 int v3; // w3
 int v4; // w2

 a1[2] = 0;
 v1 = *a1;
 v2 = a1[1];
 if ( *a1 <= v2 )
 {
 v3 = v2 + 1;
 v4 = 0;
 do
 v4 += v1++;
 while ( v1 != v3 );
 a1[2] = v4;
 }
 return 0;
}


/* Function: thread_compute @ 0x1964 */
unsigned int * thread_compute(int *a1)
{
 int v1; // w19
 unsigned int *result; // x0

 v1 = *a1;
 result = malloc(4u);
 *result = v1 * v1;
 return result;
}


/* Function: thread_increment @ 0x1990 */
long long thread_increment(int *a1)
{
 int v1; // w22
 int v2; // w19

 v1 = *a1;
 if ( *a1 > 0 )
 {
 v2 = 0;
 do
 {
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 ++v2;
 }
 while ( v1 != v2 );
 }
 return 0;
}


/* Function: consumer_thread @ 0x1A0C */
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


/* Function: producer_thread @ 0x1A88 */
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


/* Function: thread_atomic_increment @ 0x1AE0 */
long long thread_atomic_increment(int *a1)
{
 int v1; // w21
 unsigned int v2; // w19

 v1 = *a1;
 if ( *a1 > 0 )
 {
 v2 = 0;
 do
 {
 _aarch64_ldadd4_acq_rel(1, &atomic_counter);
 (void)_aarch64_cas4_acq_rel(v2, v2 + 1000, &atomic_counter);
 ++v2;
 }
 while ( v1 != v2 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x1B4C */
long long thread_atomic_load_store()
{
 unsigned int v0; // w1

 v0 = atomic_load(&atomic_counter);
 atomic_store(&atomic_counter, v0 + 100);
 return 0LL;
}


/* Function: thread_tls_test @ 0x1B6C */
unsigned int * thread_tls_test(char *src)
{
 unsigned long long StatusReg; // x3
 int v2; // w20
 unsigned int *result; // x0

 StatusReg = _ReadStatusReg(TPIDR_EL0);
 v2 = *(unsigned int *)(StatusReg + 16);
 *(unsigned int *)(StatusReg + 16) = v2 + 50;
 strncpy((char *)(StatusReg + 24), src, 0x1Fu);
 result = malloc(8u);
 *result = v2;
 result[1] = v2 + 50;
 return result;
}


/* Function: param_strcpy @ 0x1BC0 */
size_t param_strcpy(char *a1, const char *a2)
{
 strcpy(a1, a2);
 return strlen(a1);
}


/* Function: call_strcpy @ 0x1BE8 */
size_t call_strcpy()
{
 char v1[32]; // [xsp+18h] [xbp+18h] BYREF

 return param_strcpy(v1, "HelloLib");
}


/* Function: param_strcmp @ 0x1C3C */
long long param_strcmp(const char *a1, const char *a2)
{
 int v2; // w0

 v2 = strcmp(a1, a2);
 if ( v2 > 0 )
 return 1;
 else
 return (unsigned int)(v2 >> 31);
}


/* Function: call_strcmp @ 0x1C5C */
long long call_strcmp()
{
 int v0; // w19
 int v1; // w20

 v0 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 return v0 + v1 + (unsigned int)param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x1CBC */
size_t param_strlen(const char *a1)
{
 return strlen(a1);
}


/* Function: call_strlen @ 0x1CD0 */
long long call_strlen()
{
 return param_strlen("HelloLib");
}


/* Function: param_memcpy @ 0x1CD8 */
long long param_memcpy(void *a1, const void *a2, size_t a3)
{
 unsigned int v3; // w19

 v3 = a3;
 memcpy(a1, a2, a3);
 return v3;
}


/* Function: call_memcpy @ 0x1CFC */
long long call_memcpy()
{
 unsigned long long v1[2]; // [xsp+18h] [xbp+18h] BYREF
 int v2; // [xsp+28h] [xbp+28h]
 unsigned long long v3; // [xsp+30h] [xbp+30h] BYREF
 unsigned long long v4; // [xsp+38h] [xbp+38h]
 int v5; // [xsp+40h] [xbp+40h]

 v1[0] = 0x140000000ULL;
 v1[1] = 0x280000001ULL;
 v2 = 50;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v3 = (unsigned long long)param_memcpy(&v3, v1, 0x14u);
 return (unsigned int)(v3 + v4 + v5);
}


/* Function: param_memcmp @ 0x1D84 */
long long param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v3; // w0

 v3 = memcmp(a1, a2, a3);
 if ( v3 > 0 )
 return 1;
 else
 return (unsigned int)(v3 >> 31);
}


/* Function: call_memcmp @ 0x1DA4 */
long long call_memcmp()
{
 int v0; // w20
 long long v2; // [xsp+38h] [xbp+38h] BYREF
 int v3; // [xsp+40h] [xbp+40h]
 long long v4; // [xsp+48h] [xbp+48h] BYREF
 int v5; // [xsp+50h] [xbp+50h]
 long long v6; // [xsp+58h] [xbp+58h] BYREF
 int v7; // [xsp+60h] [xbp+60h]

 v2 = 0x200000001LL;
 v3 = 3;
 v4 = 0x200000001LL;
 v5 = 4;
 v6 = 0x200000001LL;
 v7 = 3;
 v0 = param_memcmp(&v2, &v4, 0xCu);
 return v0 + (unsigned int)param_memcmp(&v2, &v6, 0xCu);
}


/* Function: param_printf @ 0x1E58 */
long long param_printf(int a1, const char *a2)
{
 return printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x1E80 */
long long call_printf()
{
 return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x1EA0 */
long long param_scanf(const char *a1)
{
 int v2; // [xsp+10h] [xbp+10h] BYREF
 int v3; // [xsp+14h] [xbp+14h] BYREF

 if ( (unsigned int)__isoc99_sscanf(a1, "%d,%d", &v2, &v3) == 2 )
 return (unsigned int)(v2 + v3);
 else
 return 0xFFFFFFFFLL;
}


/* Function: call_scanf @ 0x1F14 */
long long call_scanf()
{
 return param_scanf("123,456");
}


/* Function: param_fopen_fclose @ 0x1F30 */
long long param_fopen_fclose(const char *a1)
{
 FILE *v1; // x0
 FILE *v2; // x19
 unsigned int v3; // w20

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


/* Function: call_fopen_fclose @ 0x1F78 */
long long call_fopen_fclose()
{
 if ( (int)param_fopen_fclose("/etc/passwd") < 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_fread_fwrite @ 0x1FA0 */
long long param_fread_fwrite(const char *a1)
{
 FILE *v2; // x0
 FILE *v3; // x19
 size_t v4; // x20
 char ptr[32]; // [xsp+38h] [xbp+38h] BYREF

 v2 = fopen(a1, "w+");
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
 {
 rewind(v3);
 v4 = fread(ptr, 1u, 0x12u, v3);
 ptr[v4] = 0;
 fclose(v3);
 unlink(a1);
 if ( v4 == 18 )
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


/* Function: call_fread_fwrite @ 0x20B8 */
long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x20D4 */
long long param_malloc_free(long long a1)
{
 long long v2; // x19
 unsigned int *v3; // x0
 unsigned int *v4; // x2
 int v5; // w1
 unsigned int v6; // w19

 v2 = a1;
 v3 = malloc(4 * a1);
 if ( v3 )
 {
 if ( a1 )
 {
 v4 = v3;
 v5 = 0;
 do
 {
 *v4++ = v5;
 v5 += 10;
 }
 while ( v4 != &v3[v2] );
 }
 v6 = v3[v2 - 1] + *v3;
 free(v3);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v6;
}


/* Function: call_malloc_free @ 0x2140 */
long long call_malloc_free()
{
 return param_malloc_free(10);
}


/* Function: param_memset @ 0x2158 */
long long param_memset(unsigned char *a1, size_t n)
{
 unsigned char *v4; // x3
 long long result; // x0
 int v6; // t1

 memset(a1, 0, n);
 if ( !n )
 return 0;
 v4 = a1;
 LODWORD(result) = 0;
 do
 {
 v6 = *v4++;
 result = (unsigned int)(result + v6);
 }
 while ( v4 != &a1[n] );
 return result;
}


/* Function: call_memset @ 0x21AC */
long long call_memset()
{
 long long *v0; // x0
 unsigned int v2[10]; // [xsp+10h] [xbp+10h] BYREF
 long long v3; // [xsp+38h] [xbp+38h] BYREF

 v0 = (long long *)v2;
 do
 {
 *(unsigned int *)v0 = 255;
 v0 = (long long *)((char *)v0 + 4);
 }
 while ( v0 != &v3 );
 param_memset((unsigned char *)v2, 0x28u);
 return (unsigned int)(v2[0] + v2[9]);
}


/* Function: param_strchr_strstr @ 0x2220 */
long long param_strchr_strstr(const char *a1, unsigned char a2, const char *a3)
{
 char *v5; // x0
 int v6; // w20
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


/* Function: call_strchr_strstr @ 0x2278 */
long long call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 0x42u, "Bench");
}


/* Function: test_standard_library_functions @ 0x22A0 */
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

 puts(asc_34C8);
 v0 = call_strcpy();
 __printf_chk(1, aLibL101D, v0);
 v1 = call_strcmp();
 __printf_chk(1, aLibL102D, v1);
 v2 = call_strlen();
 __printf_chk(1, aLibL103D, v2);
 v3 = call_memcpy();
 __printf_chk(1, aLibL104D, v3);
 v4 = call_memcmp();
 __printf_chk(1, aLibL105D, v4);
 v5 = call_printf();
 __printf_chk(1, aLibL106D, v5);
 v6 = call_scanf();
 __printf_chk(1, aLibL107D, v6);
 v7 = call_fopen_fclose();
 __printf_chk(1, aLibL108D, v7);
 v8 = call_fread_fwrite();
 __printf_chk(1, aLibL109D, v8);
 v9 = call_malloc_free();
 __printf_chk(1, aLibL110D, v9);
 v10 = call_memset();
 __printf_chk(1, aLibL111D, v10);
 v11 = call_strchr_strstr();
 return __printf_chk(1, aLibL112D, v11);
}


/* Function: param_linux_syscall @ 0x23DC */
long long param_linux_syscall(long long a1)
{
 unsigned int v1; // w0
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


/* Function: call_linux_syscall @ 0x2430 */
long long call_linux_syscall()
{
 if ( (int)param_linux_syscall((long long)"/etc/passwd") < 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_win32_api @ 0x2458 */
long long param_win32_api(const char *a1)
{
 unsigned char v2[136]; // [xsp+18h] [xbp+18h] BYREF

 if ( stat(a1, (struct stat *)v2) < 0 )
 return 0xFFFFFFFFLL;
 if ( *(long long *)&v2[48] <= 0 )
 return 4294967294LL;
 return 42;
}


/* Function: call_win32_api @ 0x24C4 */
long long call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x24E0 */
long long param_fork_exec(const char *a1, long long a2)
{
 __pid_t v4; // w0
 __pid_t v5; // w1
 long long result; // x0
 int stat_loc; // [xsp+24h] [xbp+24h] BYREF

 v4 = fork();
 if ( v4 < 0 )
 return 0xFFFFFFFFLL;
 if ( !v4 )
 {
 execl(a1, a1, a2, 0);
 _exit(127);
 }
 v5 = waitpid(v4, &stat_loc, 0);
 result = 4294967294LL;
 if ( (v5 & 0x80000000) == 0 )
 {
 if ( (stat_loc & 0x7F) != 0 )
 return 4294967293LL;
 else
 return BYTE1(stat_loc);
 }
 return result;
}


/* Function: call_fork_exec @ 0x2590 */
long long call_fork_exec()
{
 if ( (unsigned int)param_fork_exec("/bin/true", 0) )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_pipe_communication @ 0x25BC */
long long param_pipe_communication()
{
 __pid_t v0; // w0
 ssize_t v1; // x19
 __WAIT_STATUS v2; // x0
 int pipedes[2]; // [xsp+20h] [xbp+20h] BYREF
 unsigned char buf[32]; // [xsp+28h] [xbp+28h] BYREF

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
 buf[v1] = 0;
 close(pipedes[0]);
 v2.__i = 0;
 wait(&v2.__i);
 if ( v1 <= 0 )
 return 4294967293LL;
 else
 return 42;
}


/* Function: call_pipe_communication @ 0x26A4 */
long long call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x26B8 */
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
  addr.sin_family = AF_INET;
  if ( bind(v1, (struct sockaddr *)&addr, sizeof(addr)) < 0 )
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


/* Function: call_socket_create @ 0x27BC */
long long call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x27D0 */
long long param_shmget_shmat()
{
 int v0; // w0
 key_t v1; // w0
 int v2; // w0
 int v3; // w20
 char *v4; // x0
 char *v5; // x19
 unsigned int v6; // w21

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 {
 return (unsigned int)-1;
 }
 else
 {
 close(v0);
 v1 = ftok("/tmp/binbench_shm", 42);
 if ( v1 < 0 )
 {
 return (unsigned int)-1;
 }
 else
 {
 v2 = shmget(v1, 0x1000u, 950);
 v3 = v2;
 if ( v2 < 0 )
 {
 return (unsigned int)-2;
 }
 else
 {
 v4 = (char *)shmat(v2, 0, 0);
 v5 = v4;
 if ( v4 == (char *)-1LL )
 {
 return (unsigned int)-3;
 }
 else
 {
 strcpy(v4, "SharedMemory");
 v6 = strlen(v4);
 shmdt(v5);
 shmctl(v3, 0, 0);
 }
 }
 }
 }
 return v6;
}


/* Function: call_shmget_shmat @ 0x28B4 */
long long call_shmget_shmat()
{
 if ( (int)param_shmget_shmat() <= 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_signal_handling @ 0x28D4 */
long long param_signal_handling()
{
 int v0; // w19
 int v1; // w19

 if ( signal(10, (__sighandler_t)signal_handler) == (__sighandler_t)-1LL )
 return 0xFFFFFFFFLL;
 if ( signal(14, (__sighandler_t)signal_handler) == (__sighandler_t)-1LL )
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
 break;
 --v0;
 }
 while ( v0 );
 }
 if ( !signal_received )
 return 4294967293LL;
 if ( signal_number != 10 )
 return 4294967292LL;
 signal_received = 0;
 alarm(1u);
 if ( !signal_received )
 {
 v1 = 2000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 break;
 --v1;
 }
 while ( v1 );
 }
 if ( !signal_received )
 return 4294967291LL;
 if ( signal_number != 14 )
 return 4294967291LL;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: call_signal_handling @ 0x2A48 */
long long call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x2A5C */
long long test_system_calls()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0

 puts(asc_36B8);
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


/* Function: param_pthread_create @ 0x2B20 */
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


/* Function: call_pthread_create @ 0x2BB0 */
long long call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: param_pthread_join @ 0x2BC8 */
long long param_pthread_join()
{
 unsigned long long *v0; // x20
 pthread_t *v1; // x24
 pthread_t *v2; // x21
 int v3; // w22
 unsigned int v4; // w19
 long long v5; // x20
 pthread_t newthread[3]; // [xsp+48h] [xbp+48h] BYREF
 unsigned long long arg[2]; // [xsp+60h] [xbp+60h] BYREF
 int v9; // [xsp+80h] [xbp+80h]

 xmmword_38E0[0] = 0;
 xmmword_38F0[0] = 0;
 v9 = 0;
 v0 = arg;
 v1 = newthread;
 v2 = newthread;
 v3 = 3;
 do
 {
 v4 = pthread_create(v2, 0, (void *(*)(void *))thread_sum, v0);
 if ( v4 )
 return (unsigned int)-1;
 ++v2;
 v0 = (unsigned long long *)((char *)v0 + 12);
 --v3;
 }
 while ( v3 );
 v5 = 0;
 while ( !pthread_join(*v1, 0) )
 {
 v4 += *(unsigned int *)((char *)arg + v5 + 8);
 ++v1;
 v5 += 12;
 if ( v5 == 36 )
 return v4;
 }
 return (unsigned int)-2;
}


/* Function: call_pthread_join @ 0x2CCC */
long long call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x2CE0 */
long long param_mutex_lock(int a1, int a2)
{
 char *v3; // x0
 void *v4; // x24
 pthread_t *v5; // x21
 pthread_t *v6; // x20
 pthread_t *v7; // x19
 pthread_t v8; // t1
 int arg; // [xsp+5Ch] [xbp+5Ch] BYREF

 arg = a2;
 v3 = (char *)malloc(8LL * a1);
 if ( !v3 )
 return 0xFFFFFFFFLL;
 v4 = v3;
 shared_counter = 0;
 if ( a1 > 0 )
 {
 v5 = (pthread_t *)v3;
 v6 = (pthread_t *)&v3[8 * a1];
 v7 = (pthread_t *)v3;
 do
 {
 if ( pthread_create(v7, 0, (void *(*)(void *))thread_increment, &arg) )
 {
 free(v4);
 return 4294967294LL;
 }
 ++v7;
 }
 while ( v7 != v6 );
 do
 {
 v8 = *v5++;
 pthread_join(v8, 0);
 }
 while ( v5 != v6 );
 }
 free(v4);
 if ( shared_counter == a1 * arg )
 return 42;
 else
 return 4294967293LL;
}


/* Function: call_mutex_lock @ 0x2DDC */
long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x2DF8 */
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
 pthread_cancel(newthread);
 return (unsigned int)-2;
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


/* Function: call_condition_variable @ 0x2EC8 */
long long call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x2EDC */
long long param_atomic_ops(int a1, int a2)
{
 pthread_t *v3; // x0
 pthread_t *v4; // x21
 pthread_t *v5; // x19
 long long v6; // x19
 int v7; // w19
 int arg; // [xsp+4Ch] [xbp+4Ch] BYREF
 pthread_t newthread; // [xsp+50h] [xbp+50h] BYREF

 arg = a2;
 v3 = (pthread_t *)malloc(8LL * a1);
 if ( !v3 )
 return 0xFFFFFFFFLL;
 v4 = v3;
 atomic_store(&atomic_counter, 0);
 if ( a1 <= 0 )
 {
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread, 0);
 }
 else
 {
 v5 = v3;
 do
 {
 if ( pthread_create(v5, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 free(v4);
 return 4294967294LL;
 }
 ++v5;
 }
 while ( v5 != &v4[a1] );
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread, 0);
 v6 = 0;
 do
 pthread_join(v4[v6++], 0);
 while ( a1 > (int)v6 );
 }
 v7 = atomic_load(&atomic_counter);
 free(v4);
 if ( v7 <= 0 )
 return 4294967293LL;
 else
 return 42;
}


/* Function: call_atomic_ops @ 0x3064 */
long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x3080 */
long long param_thread_local_storage(int a1)
{
 size_t v2; // x19
 char *v3; // x24
 char *v4; // x0
 bool v5; // zf
 char *v6; // x22
 long long v7; // x19
 pthread_t *v8; // x21
 long long v9; // x19
 int v10; // w20
 int v11; // w21
 long long v12; // x19
 int v13; // w0
 int v14; // w25
 void **v17; // x20
 long long v18; // x19
 void *v19; // t1
 void *thread_return; // [xsp+60h] [xbp+60h] BYREF

 v2 = 8LL * a1;
 v3 = (char *)malloc(v2);
 v4 = (char *)malloc(v2);
 if ( v3 )
 v5 = v4 == 0;
 else
 v5 = 1;
 if ( v5 )
 return 0xFFFFFFFFLL;
 v6 = v4;
 if ( a1 <= 0 )
 {
 v11 = 0;
 v10 = 0;
LABEL_13:
 free(v6);
 free(v3);
 v13 = 100 * a1;
 v14 = 150 * a1;
 if ( v13 == v10 && v14 == v11 )
 return 42;
 else
 return 4294967293LL;
 }
 else
 {
 v7 = 0;
 do
 {
 *(unsigned long long *)&v6[8 * v7] = (unsigned long long)malloc(0x10u);
 snprintf((char *)*(unsigned long long *)&v6[8 * v7], 0x10u, "Thread_%lld", v7);
 ++v7;
 }
 while ( v7 != a1 );
 v8 = (pthread_t *)v3;
 v9 = 0;
 while ( 1 )
 {
 v10 = pthread_create(v8, 0, (void *(*)(void *))thread_tls_test, *(void **)&v6[8 * v9]);
 if ( v10 )
 break;
 ++v9;
 ++v8;
 if ( v9 == a1 )
 {
 v11 = 0;
 v12 = 0;
 do
 {
 pthread_join(*(unsigned long long *)&v3[v12], &thread_return);
 v10 += *(unsigned int *)thread_return;
 v11 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free(*(void **)&v6[v12]);
 v12 += 8;
 }
 while ( v12 != 8LL * (unsigned int)a1 );
 goto LABEL_13;
 }
 }
 if ( (v9 & 0x80000000) == 0 )
 {
 v17 = (void **)v6;
 v18 = (long long)&v6[8 * (unsigned int)v9 + 8];
 do
 {
 v19 = *v17++;
 free(v19);
 }
 while ( v17 != (void **)v18 );
 }
 free(v6);
 free(v3);
 return 4294967294LL;
 }
}


/* Function: call_thread_local_storage @ 0x327C */
long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3294 */
long long test_thread_concurrency()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0

 puts(asc_37C8);
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


/* Function: main @ 0x3340 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: __aarch64_cas4_acq_rel @ 0x3360 */
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


/* Function: __aarch64_ldadd4_acq_rel @ 0x33A0 */
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


/* Function: .term_proc @ 0x33D0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x15170 */

/* FAILED to decompile: _exit @ 0x15178 */

/* FAILED to decompile: strlen @ 0x15180 */

/* FAILED to decompile: raise @ 0x15188 */

/* FAILED to decompile: __libc_start_main @ 0x15190 */

/* FAILED to decompile: execl @ 0x15198 */

/* FAILED to decompile: listen @ 0x151A0 */

/* FAILED to decompile: shmdt @ 0x151A8 */

/* FAILED to decompile: bind @ 0x151B0 */

/* FAILED to decompile: __cxa_finalize @ 0x151B8 */

/* FAILED to decompile: pipe @ 0x151C0 */

/* FAILED to decompile: fork @ 0x151C8 */

/* FAILED to decompile: fileno @ 0x151D0 */

/* FAILED to decompile: signal @ 0x151D8 */

/* FAILED to decompile: __snprintf_chk @ 0x151E0 */

/* FAILED to decompile: fclose @ 0x151E8 */

/* FAILED to decompile: fopen @ 0x151F0 */

/* FAILED to decompile: malloc @ 0x151F8 */

/* FAILED to decompile: setsockopt @ 0x15200 */

/* FAILED to decompile: open @ 0x15208 */

/* FAILED to decompile: pthread_cond_signal @ 0x15210 */

/* FAILED to decompile: __printf_chk @ 0x15218 */

/* FAILED to decompile: memset @ 0x15220 */

/* FAILED to decompile: shmat @ 0x15228 */

/* FAILED to decompile: sleep @ 0x15230 */

/* FAILED to decompile: rewind @ 0x15238 */

/* FAILED to decompile: __stack_chk_fail @ 0x15240 */

/* FAILED to decompile: close @ 0x15248 */

/* FAILED to decompile: stat @ 0x15250 */

/* FAILED to decompile: write @ 0x15260 */

/* FAILED to decompile: __getauxval @ 0x15268 */

/* FAILED to decompile: abort @ 0x15270 */

/* FAILED to decompile: puts @ 0x15278 */

/* FAILED to decompile: memcmp @ 0x15280 */

/* FAILED to decompile: strcmp @ 0x15288 */

/* FAILED to decompile: shmctl @ 0x15290 */

/* FAILED to decompile: fread @ 0x15298 */

/* FAILED to decompile: ftok @ 0x152A0 */

/* FAILED to decompile: free @ 0x152A8 */

/* FAILED to decompile: shmget @ 0x152B0 */

/* FAILED to decompile: pthread_cond_wait @ 0x152B8 */

/* FAILED to decompile: strchr @ 0x152C0 */

/* FAILED to decompile: fwrite @ 0x152C8 */

/* FAILED to decompile: pthread_create @ 0x152D0 */

/* FAILED to decompile: wait @ 0x152D8 */

/* FAILED to decompile: socket @ 0x152E0 */

/* FAILED to decompile: strcpy @ 0x152E8 */

/* FAILED to decompile: read @ 0x152F0 */

/* FAILED to decompile: strstr @ 0x152F8 */

/* FAILED to decompile: usleep @ 0x15300 */

/* FAILED to decompile: __isoc99_sscanf @ 0x15308 */

/* FAILED to decompile: strncpy @ 0x15310 */

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

/* Total functions decompiled: 75, failed: 62 */
