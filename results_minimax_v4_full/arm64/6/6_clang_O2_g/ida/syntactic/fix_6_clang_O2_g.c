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

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <pthread.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include <fcntl.h>
#include <time.h>
#include <sys/shm.h>

/* ARM NEON intrinsics for SIMD types */
#ifdef __ARM_NEON
#include <arm_neon.h>
#else
/* Forward declaration for int32x4_t */
typedef union int32x4_t int32x4_t;

/* Fallback NEON types when not available */
typedef union {
    uint8_t n8[16];
    uint16_t n16[8];
    uint32_t n32[4];
    uint64_t n64[2];
    uint64_t n128_u64[2];
    uint32_t n128_u32[4];
    uint32_t n64_u32[2];
    uint64_t n64_u64[1];
} uint8x16_t;

typedef union {
    uint8_t n8[8];
    uint16_t n16[4];
    uint32_t n32[2];
    uint64_t n64[1];
    uint32_t n64_u32[2];
    uint64_t n64_u64[1];
    uint64_t n128_u64[2];
} uint8x8_t;

/* Properly defined int32x4_t union */
typedef union {
    int8_t n8[16];
    int16_t n16[8];
    int32_t n32[4];
    int64_t n64[2];
    uint64_t n128_u64[2];
    uint32_t n128_u32[4];
    uint64_t n64_u64[1];
    uint32_t n64_u32[2];
    unsigned int n128_u[4];
    uint8x16_t n128_u8x16;
    /* Additional members for int32x4_t */
    int32_t n32_arr[4];
    int32_t n32_arr2[4];
    /* Plain int32x4_t as array for SIMD operations */
    int32_t n32x4[4];
} int32x4_t;

typedef union {
    int8_t n8[16];
    int16_t n16[8];
    int32_t n32[4];
    int64_t n64[2];
    int64_t n128_u64[2];
    int32_t n128_u32[4];
    int32_t n64_u32[2];
    int64_t n64_u64[1];
    unsigned int n128_u[4];
    uint8x16_t n128_u8x16;
    int16x8_t n128_i16x8;
} int32x4_t_plain;

typedef union {
    uint8_t n8[8];
    uint16_t n16[4];
    uint32_t n32[2];
    uint64_t n64[1];
    uint32_t n64_u32[2];
    uint64_t n64_u64[1];
    uint64_t n128_u64[2];
    uint32_t n32_arr[2];
    uint64_t n64_arr[1];
} uint8x8_t;

typedef union {
    int8_t n8[8];
    int16_t n16[4];
    int32_t n32[2];
    int64_t n64[1];
    int32_t n64_u32[2];
    int64_t n64_u64[1];
    int64_t n128_u64[2];
} int16x8_t;
#endif

/* ARM64 TPIDR_EL0 register for thread-local storage */
#define TPIDR_EL0 0x5E82

/* Linux specific functions */
#include <sys/auxv.h>

/* Declare __getauxval and __isoc99_sscanf if not available */
unsigned long __getauxval(unsigned long type);
int __isoc99_sscanf(const char *str, const char *format, ...);

/* __WAIT_STATUS type definition */
typedef union {
 int __i[2];
} __WAIT_STATUS;

/* Atomic operations header */
#include <stdatomic.h>

/* Global variables */
int ready;
int data;
unsigned int atomic_counter;
int shared_counter;

/* Missing function declarations */
void signal_handler(int sig);

/* Atomic helper function declarations */
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);
unsigned int _aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, atomic_uint *a3);

/* Missing ARM atomic intrinsics */
static inline unsigned int __ldaxr(unsigned int *ptr) {
    unsigned int result;
    __asm__ __volatile__("ldaxr %w0, [%1]" : "=r"(result) : "r"(ptr) : "memory");
    return result;
}

/* ARM64 system register read - TPIDR_EL0 for TLS */
static inline unsigned long long _ReadStatusReg(unsigned long long reg) {
    unsigned long long val;
    __asm__ __volatile__("mrs %0, TPIDR_EL0" : "=r"(val));
    return val;
}

static inline int __stlxr(unsigned int val, unsigned int *ptr) {
    int result;
    __asm__ __volatile__("stlxr %w0, %w1, [%2]" : "=r"(result) : "r"(val), "r"(ptr) : "memory");
    return result;
}
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Missing constant for ARM NEON code */
static const int32x4_t xmmword_3110 = {1, 2, 3, 4};

/* JUMPOUT macro for ARM jump instruction */
#define JUMPOUT(addr) ((void)0)

/* Missing global variable declarations */
int _aarch64_have_lse_atomics;
int signal_received;
int signal_number;

/* Missing string format variables for library tests */
static const char aLibL105D[] = "Lib: call_strcmp result: %d\n";
static const char aLibL106D[] = "Lib: call_printf result: %d\n";
static const char aLibL107D[] = "Lib: call_scanf result: %d\n";
static const char aLibL108D[] = "Lib: fopen result: %d\n";
static const char aLibL109D[] = "Lib: fread_fwrite result: %d\n";
static const char aLibL110D[] = "Lib: call_malloc_free result: %d\n";
static const char aLibL111D[] = "Lib: call_memset result: %d\n";
static const char aLibL112D[] = "Lib: call_strchr_strstr result: %d\n";

/* Missing string format variables for system call tests */
static const char asc_34C0[] = "System Call Tests\n";
static const char aSysL301D[] = "Sys: syscall result: %lld\n";
static const char aSysL302D[] = "Sys: stat result: %lld\n";
static const char aSysL303D[] = "Sys: fork_exec result: %lld\n";
static const char aSysL304D[] = "Sys: pipe result: %d\n";
static const char aSysL305D[] = "Sys: socket result: %d\n";
static const char aSysL306D[] = "Sys: shm result: %lld\n";
static const char aSysL307D[] = "Sys: signal result: %d\n";

/* Missing string format variables for thread test */
static const char asc_34DB[] = "Thread Concurrency Tests\n";
static const char aThrL301D[] = "Thread: pthread_create result: %d\n";
static const char aThrL302D[] = "Thread: pthread_join result: %d\n";
static const char aThrL303D[] = "Thread: mutex_lock result: %d\n";
static const char aThrL304D[] = "Thread: cond_var result: %d\n";
static const char aThrL305D[] = "Thread: atomic_ops result: %d\n";
static const char aThrL306D[] = "Thread: tls result: %d\n";

/* BYTE1 macro to extract second byte */
#define BYTE1(x) ((unsigned char)(((x) >> 8) & 0xFF))

/* LODWORD macro to extract low 32 bits from 64-bit value */
#define LODWORD(x) ((unsigned int)((x) & 0xFFFFFFFF))

/* Function declarations for CRT stubs */
long long call_weak_fn(void);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/6/6_clang_O2_g
 * Processor: arm
 */

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




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_strcpy @ 0x1854 */
int param_strcpy(char *dst, const char *src)
{
 char *v2; // x0

 v2 = strcpy(dst, src);
 return strlen(v2);
}


/* Function: call_strcpy @ 0x186C */
int call_strcpy()
{
 char v1[32]; // [xsp+0h] [xbp-20h] BYREF

 strcpy(v1, "HelloLib");
 return strlen(v1);
}


/* Function: param_strcmp @ 0x18A0 */
int param_strcmp(const char *s1, const char *s2)
{
 int v2; // w0
 int v3; // w8

 v2 = strcmp(s1, s2);
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
int call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x18CC */
int param_strlen(const char *str)
{
 return strlen(str);
}


/* Function: call_strlen @ 0x18E0 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x18E8 */
int param_memcpy(void *dst, const void *src, size_t n)
{
 int v3; // w19

 v3 = n;
 memcpy(dst, src, n);
 return v3;
}


/* Function: call_memcpy @ 0x190C */
int call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x1914 */
int param_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // w0
 int v4; // w8

 v3 = memcmp(p1, p2, n);
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
int call_memcmp()
{
 return -1;
}


/* Function: param_printf @ 0x1940 */
int param_printf(int x, const char *name)
{
 return printf("Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x1954 */
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x196C */
int param_scanf(const char *input_str)
{
 int v2; // [xsp+8h] [xbp-8h] BYREF
 int a; // [xsp+Ch] [xbp-4h] BYREF

 if ( (unsigned int)__isoc99_sscanf(input_str, "%d,%d", &a, &v2) == 2 )
 return v2 + a;
 else
 return -1;
}


/* Function: call_scanf @ 0x19AC */
int call_scanf()
{
 int v1; // [xsp+8h] [xbp-8h] BYREF
 int v2; // [xsp+Ch] [xbp-4h] BYREF

 if ( (unsigned int)__isoc99_sscanf("123,456", "%d,%d", &v2, &v1) == 2 )
 return v1 + v2;
 else
 return -1;
}


/* Function: param_fopen_fclose @ 0x19F4 */
int param_fopen_fclose(const char *filename)
{
 FILE *v1; // x0
 FILE *v2; // x19
 int v3; // w20

 v1 = fopen(filename, "r");
 if ( !v1 )
 return -1;
 v2 = v1;
 v3 = fileno(v1);
 fclose(v2);
 return v3;
}


/* Function: call_fopen_fclose @ 0x1A3C */
int call_fopen_fclose()
{
 FILE *v0; // x0
 FILE *v1; // x19
 int v2; // w20

 v0 = fopen("/etc/passwd", "r");
 if ( !v0 )
 return -1;
 v1 = v0;
 v2 = fileno(v0);
 fclose(v1);
 if ( v2 < 0 )
 return -1;
 else
 return 42;
}


/* Function: param_fread_fwrite @ 0x1A94 */
int param_fread_fwrite(const char *tmpfile)
{
 FILE *v2; // x0
 FILE *v3; // x20
 size_t v4; // x21
 int result; // w0
 long long v6; // [xsp+0h] [xbp-20h] BYREF
 unsigned long long v7[3]; // [xsp+8h] [xbp-18h]

 v2 = fopen(tmpfile, "w+");
 if ( !v2 )
 return -1;
 v3 = v2;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
 {
 rewind(v3);
 v4 = fread(&v6, 1u, 0x12u, v3);
 *((unsigned char *)&v7[-1] + v4) = 0;
 fclose(v3);
 unlink(tmpfile);
 result = -3;
 if ( v4 == 18 )
 {
 if ( v6 ^ 0x68636E65426E6942LL | v7[0] ^ 0x6144207473655420LL | *(unsigned long long *)((char *)v7 + 3) ^ 0x61746144207473LL )
 return -3;
 else
 return 42;
 }
 }
 else
 {
 fclose(v3);
 return -2;
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x1BA8 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1BB4 */
int param_malloc_free(size_t size)
{
 int32x4_t *v2; // x0
 unsigned int v3; // w8
 size_t v4; // x8
 int v5; // w19
 int32x4_t v6; // q0
 size_t v7; // x10
 int32x4_t v8; // q1
 int32x4_t v9; // q2
 int32x4_t v10; // q3
 int32x4_t *v11; // x9
 int32x4_t v12; // q4
 int v13; // w10
 size_t v14; // x9
 int *v15; // x8
 int v16; // w10

 v2 = (int32x4_t *)malloc(4 * size);
 if ( v2 )
 {
 if ( !size )
 goto LABEL_13;
 if ( size >= 8 )
 {
 v4 = size & 0xFFFFFFFFFFFFFFF8LL;
 v6.n64[0] = 0xA0000000ALL;
 v6.n64[1] = 0xA0000000ALL;
 v7 = size & 0xFFFFFFFFFFFFFFF8LL;
 v8.n64[0] = 0x2800000028LL;
 v8.n64[1] = 0x2800000028LL;
 v9.n64[0] = 0x800000008LL;
 v9.n64[1] = 0x800000008LL;
 v10 = (int32x4_t)xmmword_3110;
 v11 = v2 + 1;
 do
 {
 v12 = vmulq_s32(v10, v6);
 v7 -= 8LL;
 v10 = vaddq_s32(v10, v9);
 v11[-1] = v12;
 *v11 = vaddq_s32(v12, v8);
 v11 += 2;
 }
 while ( v7 );
 if ( v4 == size )
 goto LABEL_12;
 }
 else
 {
 v4 = 0;
 }
 v13 = 5 * v4;
 v14 = size - v4;
 v15 = (int *)v2 + v4;
 v16 = 2 * v13;
 do
 {
 *v15++ = v16;
 --v14;
 v16 += 10;
 }
 while ( v14 );
LABEL_12:
 v3 = v2->n32[0];
LABEL_13:
 v5 = v2->n32[size - 1] + v3;
 free(v2);
 return v5;
 }
 return -1;
}


/* Function: call_malloc_free @ 0x1C78 */
int call_malloc_free()
{
 return 90;
}


/* Function: param_memset @ 0x1C80 */
int param_memset(void *buffer, size_t size)
{
 uint8x8_t v4; // d2
 uint8x8_t v5; // d3
 size_t v6; // x8
 int result; // w0
 unsigned int *v8; // x9
 int32x4_t v9; // q0
 size_t v10; // x10
 int32x4_t v11; // q1
 size_t v12; // x9
 unsigned char *v13; // x8
 int v14; // t1

 memset(buffer, 0, size);
 if ( !size )
 return 0;
 if ( size < 8 )
 {
 v6 = 0;
 result = 0;
LABEL_8:
 v12 = size - v6;
 v13 = (unsigned char *)buffer + v6;
 do
 {
 v14 = *v13++;
 --v12;
 result += v14;
 }
 while ( v12 );
 return result;
 }
 v6 = size & 0xFFFFFFFFFFFFFFF8LL;
 v8 = (unsigned int *)((char *)buffer + 4);
 v9 = 0u;
 v10 = size & 0xFFFFFFFFFFFFFFF8LL;
 v11 = 0u;
 do
 {
 v4.n64_u32[0] = *(v8 - 1);
 v5.n64_u32[0] = *v8;
 v8 += 2;
 v10 -= 8LL;
 v4.n64_u64[0] = vmovl_u8(v4).n128_u64[0];
 v5.n64_u64[0] = vmovl_u8(v5).n128_u64[0];
 v9 = vaddw_u16(v9, v4);
 v11 = vaddw_u16(v11, v5);
 }
 while ( v10 );
 result = vaddvq_s32(vaddq_s32(v11, v9));
 if ( v6 != size )
 goto LABEL_8;
 return result;
}


/* Function: call_memset @ 0x1D2C */
int call_memset()
{
 return 0;
}


/* Function: param_strchr_strstr @ 0x1D34 */
int param_strchr_strstr(const char *str, char ch, const char *substr)
{
 char *v5; // x0
 int v6; // w21
 char *v7; // x0
 int v8; // w8

 v5 = strchr(str, (unsigned char)ch);
 if ( v5 )
 v6 = (unsigned int)v5 - (unsigned int)str;
 else
 v6 = -1;
 v7 = strstr(str, substr);
 v8 = (unsigned int)v7 - (unsigned int)str;
 if ( !v7 )
 v8 = -1;
 return v8 + v6;
}


/* Function: call_strchr_strstr @ 0x1D8C */
int call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x1D94 */
void test_standard_library_functions()
{
 size_t v0; // x0
 unsigned int v1; // w19
 unsigned int v2; // w0
 long long v3; // x1
 FILE *v4; // x0
 FILE *v5; // x20
 int v6; // w19
 unsigned int v7; // w0
 char v8[32]; // [xsp+0h] [xbp-20h] BYREF
 int v9; // [xsp+3Ch] [xbp+1Ch] BYREF

 puts("Lib - Standard Library Tests\n");
 strcpy(v8, "HelloLib");
 v0 = strlen(v8);
 printf("Lib: strlen result: %zu\n", v0);
 printf("Lib: call_strcmp result: %d\n", 0);
 printf("Lib: call_strlen result: %d\n", 12);
 printf("Lib: call_memcpy result: %d\n", 90);
 v1 = -1;
 printf(aLibL105D, 0xFFFFFFFFLL);
 v2 = printf("Value: %d, Name: %s\n", 42, "Test");
 printf(aLibL106D, v2);
 if ( (unsigned int)__isoc99_sscanf("123,456", "%d,%d", v8, &v9) == 2 )
 v3 = (unsigned int)(v9 + *(unsigned int *)v8);
 else
 v3 = 0xFFFFFFFFLL;
 printf(aLibL107D, v3);
 v4 = fopen("/etc/passwd", "r");
 if ( v4 )
 {
 v5 = v4;
 v6 = fileno(v4);
 fclose(v5);
 if ( v6 < 0 )
 v1 = -1;
 else
 v1 = 42;
 }
 printf(aLibL108D, v1);
 v7 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(aLibL109D, v7);
 printf(aLibL110D, 90);
 printf(aLibL111D, 0);
 printf(aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x1F30 */
int param_linux_syscall(const char *pathname)
{
 unsigned int v1; // w19

 v1 = syscall(56, 4294967196LL, pathname, 0);
 if ( (v1 & 0x80000000) != 0 )
 return -*__errno_location();
 syscall(57, v1);
 return v1;
}


/* Function: call_linux_syscall @ 0x1F84 */
int call_linux_syscall()
{
 int v0; // w19

 v0 = syscall(56, 4294967196LL, "/etc/passwd", 0);
 if ( v0 < 0 )
 v0 = -*__errno_location();
 else
 syscall(57, (unsigned int)v0);
 if ( v0 < 0 )
 return -1;
 else
 return 42;
}


/* Function: param_win32_api @ 0x1FE4 */
int param_win32_api(const char *filename)
{
 int v1; // w0
 int v2; // w8
 struct stat v4; // [xsp+0h] [xbp-80h] BYREF

 v1 = stat(filename, &v4);
 if ( v4.st_size <= 0 )
 v2 = -2;
 else
 v2 = 42;
 if ( v1 < 0 )
 return -1;
 else
 return v2;
}


/* Function: call_win32_api @ 0x2020 */
int call_win32_api()
{
 int v0; // w0
 int v1; // w8
 struct stat v3; // [xsp+0h] [xbp-80h] BYREF

 v0 = stat("/etc/passwd", &v3);
 if ( v3.st_size <= 0 )
 v1 = -2;
 else
 v1 = 42;
 if ( v0 < 0 )
 return -1;
 else
 return v1;
}


/* Function: param_fork_exec @ 0x2064 */
int param_fork_exec(const char *prog, const char *arg)
{
 __pid_t v4; // w0
 int status; // [xsp+Ch] [xbp-4h] BYREF

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
 if ( (status & 0x7F) != 0 )
 return -3;
 return BYTE1(status);
}


/* Function: call_fork_exec @ 0x20EC */
int call_fork_exec()
{
 __pid_t v0; // w0
 int stat_loc; // [xsp+Ch] [xbp-4h] BYREF

 v0 = fork();
 if ( v0 < 0 )
 return -1;
 if ( !v0 )
 {
 execl("/bin/true", "/bin/true", 0, 0);
 _exit(127);
 }
 if ( waitpid(v0, &stat_loc, 0) < 0 || (stat_loc & 0x7F) != 0 )
 return -1;
 if ( (stat_loc & 0xFF00) != 0 )
 return -1;
 return 42;
}


/* Function: param_pipe_communication @ 0x2160 */
int param_pipe_communication()
{
 __pid_t v0; // w0
 ssize_t v1; // x19
 int v2; // w0
 __WAIT_STATUS v3; // x0
 unsigned char buf[32]; // [xsp+8h] [xbp-28h] BYREF
 int pipefd[2]; // [xsp+28h] [xbp-8h] BYREF

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
 v1 = read(pipefd[0], buf, 0x1Fu);
 v2 = pipefd[0];
 buf[v1] = 0;
 close(v2);
 v3.__uptr = 0;
 wait(v3);
 if ( v1 <= 0 )
 return -3;
 else
 return 42;
}


/* Function: call_pipe_communication @ 0x2218 */
// attributes: thunk
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x221C */
int param_socket_create()
{
 int v0; // w0
 int v1; // w19
 int v2; // w20
 struct sockaddr addr; // [xsp+8h] [xbp-18h] BYREF
 int opt; // [xsp+1Ch] [xbp-4h] BYREF

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
 *(unsigned long long *)&addr.sa_family = 2;
 *(unsigned long long *)&addr.sa_data[6] = 0;
 if ( bind(v1, &addr, 0x10u) < 0 )
 {
 close(v1);
 return -3;
 }
 else
 {
 v2 = listen(v1, 5);
 close(v1);
 if ( v2 >= 0 )
 return 42;
 else
 return -4;
 }
 }
}


/* Function: call_socket_create @ 0x22E0 */
// attributes: thunk
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x22E4 */
int param_shmget_shmat()
{
 int v0; // w0
 key_t v1; // w0
 int v2; // w0
 int v3; // w19
 char *v4; // x0
 char *v5; // x21
 int v6; // w20

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return -1;
 close(v0);
 v1 = ftok("/tmp/binbench_shm", 42);
 if ( v1 < 0 )
 return -1;
 v2 = shmget(v1, 0x1000u, 950);
 if ( v2 < 0 )
 return -2;
 v3 = v2;
 v4 = (char *)shmat(v2, 0, 0);
 if ( v4 == (char *)-1LL )
 return -3;
 v5 = v4;
 strcpy(v4, "SharedMemory");
 v6 = strlen(v4);
 shmdt(v5);
 shmctl(v3, 0, 0);
 return v6;
}


/* Function: call_shmget_shmat @ 0x23B4 */
int call_shmget_shmat()
{
 if ( param_shmget_shmat() <= 0 )
 return -1;
 else
 return 42;
}


/* Function: param_signal_handling @ 0x23D4 */
int param_signal_handling()
{
 unsigned int v0; // w20
 bool v1; // cc
 unsigned int v2; // w21
 bool v3; // cc

 if ( signal(10, signal_handler) == (__sighandler_t)-1LL )
 return -1;
 if ( signal(14, signal_handler) == (__sighandler_t)-1LL )
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
 v1 = 0;
 else
 v1 = v0 > 1;
 --v0;
 }
 while ( v1 );
 }
 if ( !signal_received )
 return -3;
 if ( signal_number != 10 )
 return -4;
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
 return -5;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: signal_handler @ 0x2508 */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: call_signal_handling @ 0x2520 */
// attributes: thunk
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x2524 */
void test_system_calls()
{
 int v0; // w19
 long long v1; // x1
 int v2; // w0
 unsigned int v3; // w8
 long long v4; // x1
 __pid_t v5; // w0
 long long v6; // x1
 unsigned int v7; // w0
 unsigned int v8; // w0
 long long v9; // x1
 unsigned int v10; // w0
 struct stat v11; // [xsp+0h] [xbp-80h] BYREF

 puts(asc_34C0);
 v0 = syscall(56, 4294967196LL, "/etc/passwd", 0);
 if ( v0 < 0 )
 v0 = -*__errno_location();
 else
 syscall(57, (unsigned int)v0);
 if ( v0 < 0 )
 v1 = 0xFFFFFFFFLL;
 else
 v1 = 42;
 printf(aSysL301D, v1);
 v2 = stat("/etc/passwd", &v11);
 if ( v11.st_size <= 0 )
 v3 = -2;
 else
 v3 = 42;
 if ( v2 < 0 )
 v4 = 0xFFFFFFFFLL;
 else
 v4 = v3;
 printf(aSysL302D, v4);
 v5 = fork();
 if ( v5 < 0 )
 goto LABEL_17;
 if ( !v5 )
 {
 execl("/bin/true", "/bin/true", 0, 0);
 _exit(127);
 }
 if ( waitpid(v5, (int *)&v11, 0) < 0 || (v11.st_dev & 0x7F) != 0 )
 {
LABEL_17:
 v6 = 0xFFFFFFFFLL;
 }
 else if ( (v11.st_dev & 0xFF00) != 0 )
 {
 v6 = 0xFFFFFFFFLL;
 }
 else
 {
 v6 = 42;
 }
 printf(aSysL303D, v6);
 v7 = param_pipe_communication();
 printf(aSysL304D, v7);
 v8 = param_socket_create();
 printf(aSysL305D, v8);
 if ( param_shmget_shmat() <= 0 )
 v9 = 0xFFFFFFFFLL;
 else
 v9 = 42;
 printf(aSysL306D, v9);
 v10 = param_signal_handling();
 printf(aSysL307D, v10);
}


/* Function: thread_compute @ 0x2694 */
void * thread_compute(void *arg)
{
 int v1; // w19
 void *result; // x0

 v1 = *(unsigned int *)arg * *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v1;
 return result;
}


/* Function: param_pthread_create @ 0x26C0 */
int param_pthread_create(int x)
{
 int v1; // w19
 void *ptr; // [xsp+0h] [xbp-10h] BYREF
 int arg; // [xsp+Ch] [xbp-4h] BYREF
 pthread_t newthread; // [xsp+28h] [xbp+18h] BYREF

 arg = x;
 if ( pthread_create(&newthread, 0, thread_compute, &arg) )
 return -1;
 pthread_join(newthread, &ptr);
 v1 = *(unsigned int *)ptr;
 free(ptr);
 return v1;
}


/* Function: call_pthread_create @ 0x2724 */
int call_pthread_create()
{
 int v0; // w19
 void *ptr; // [xsp+0h] [xbp-10h] BYREF
 int arg; // [xsp+Ch] [xbp-4h] BYREF
 pthread_t newthread; // [xsp+28h] [xbp+18h] BYREF

 arg = 7;
 if ( pthread_create(&newthread, 0, thread_compute, &arg) )
 return -1;
 pthread_join(newthread, &ptr);
 v0 = *(unsigned int *)ptr;
 free(ptr);
 return v0;
}


/* Function: thread_sum @ 0x278C */
void * thread_sum(void *arg)
{
 int v1; // w8
 int v2; // w9

 v1 = *(unsigned int *)arg;
 v2 = *((unsigned int *)arg + 1);
 *((unsigned int *)arg + 2) = 0;
 if ( v2 >= v1 )
 *((unsigned int *)arg + 2) = v2
 + (v2 - v1) * v1
 + (((unsigned int)(v2 + ~v1) * (unsigned long long)(unsigned int)(v2 - v1)) >> 1);
 return 0;
}


/* Function: param_pthread_join @ 0x27C0 */
int param_pthread_join()
{
 int v1; // w19
 int v2; // w20
 long long v3; // [xsp+0h] [xbp-40h] BYREF
 int v4; // [xsp+8h] [xbp-38h]
 long long v5; // [xsp+Ch] [xbp-34h] BYREF
 int v6; // [xsp+14h] [xbp-2Ch]
 long long v7; // [xsp+18h] [xbp-28h] BYREF
 int v8; // [xsp+20h] [xbp-20h]
 pthread_t tids[3]; // [xsp+28h] [xbp-18h] BYREF

 v4 = 0;
 v6 = 0;
 v8 = 0;
 v3 = 0xA00000001LL;
 v5 = 0x140000000BLL;
 v7 = 0x1E00000015LL;
 if ( pthread_create(tids, 0, thread_sum, &v3)
 || pthread_create(&tids[1], 0, thread_sum, &v5)
 || pthread_create(&tids[2], 0, thread_sum, &v7) )
 {
 return -1;
 }
 if ( pthread_join(tids[0], 0) )
 return -2;
 v1 = v4;
 if ( pthread_join(tids[1], 0) )
 return -2;
 v2 = v6;
 if ( pthread_join(tids[2], 0) )
 return -2;
 return v8 + v2 + v1;
}


/* Function: call_pthread_join @ 0x28C4 */
// attributes: thunk
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x28C8 */
void * thread_increment(void *arg)
{
 int v1; // w20

 v1 = *(unsigned int *)arg;
 if ( *(int *)arg >= 1 )
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


/* Function: param_mutex_lock @ 0x2930 */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 char *v3; // x0
 char *v4; // x20
 long long v5; // x23
 long long v6; // x24
 pthread_t *v7; // x21
 pthread_t v8; // t1
 int arg; // [xsp+1Ch] [xbp+1Ch] BYREF

 arg = iterations_per_thread;
 v3 = (char *)malloc(8LL * thread_count);
 if ( !v3 )
 return -1;
 v4 = v3;
 shared_counter = 0;
 if ( thread_count >= 1 )
 {
 v5 = (unsigned int)thread_count;
 v6 = 0;
 do
 {
 if ( pthread_create((pthread_t *)&v4[v6], 0, thread_increment, &arg) )
 {
 free(v4);
 return -2;
 }
 v6 += 8;
 }
 while ( 8LL * (unsigned int)thread_count != v6 );
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
 if ( shared_counter == arg * thread_count )
 return 42;
 else
 return -3;
}


/* Function: call_mutex_lock @ 0x2A1C */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x2A28 */
unsigned int * consumer_thread(void *arg)
{
 int v1; // w19
 unsigned int *result; // x0

 pthread_mutex_lock(&cond_mutex);
 if ( (ready & 1) == 0 )
 {
 do
 pthread_cond_wait(&cond, &cond_mutex);
 while ( ready != 1 );
 }
 if ( data )
 v1 = 42;
 else
 v1 = 0;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: producer_thread @ 0x2AB4 */
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


/* Function: param_condition_variable @ 0x2B10 */
int param_condition_variable()
{
 int v0; // w19
 void *ptr; // [xsp+0h] [xbp-10h] BYREF
 pthread_t newthread; // [xsp+8h] [xbp-8h] BYREF
 pthread_t th; // [xsp+28h] [xbp+18h] BYREF

 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 return -1;
 if ( pthread_create(&th, 0, producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return -2;
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


/* Function: call_condition_variable @ 0x2BB8 */
// attributes: thunk
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x2BBC */
void * thread_atomic_increment(void *arg)
{
 int v1; // w21
 unsigned int v2; // w19

 v1 = *(unsigned int *)arg;
 if ( *(int *)arg >= 1 )
 {
 v2 = 0;
 do
 {
 _aarch64_ldadd4_acq_rel(1, &atomic_counter);
 _aarch64_cas4_acq_rel(v2, v2 + 1000, &atomic_counter);
 ++v2;
 }
 while ( v2 != v1 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x2C20 */
void * thread_atomic_load_store(void *arg)
{
 void *result; // x0
 unsigned int v2; // w9

 result = 0;
 v2 = atomic_load((unsigned int *)&atomic_counter);
 atomic_store(v2 + 100, (unsigned int *)&atomic_counter);
 return result;
}


/* Function: param_atomic_ops @ 0x2C3C */
int param_atomic_ops(int thread_count, int iterations)
{
 long long v2; // x20
 pthread_t *v3; // x0
 pthread_t *v4; // x19
 long long v5; // x23
 pthread_t *v6; // x21
 pthread_t v7; // t1
 int v8; // w20
 pthread_t th; // [xsp+0h] [xbp-10h] BYREF
 int iterationsa; // [xsp+Ch] [xbp-4h] BYREF

 LODWORD(v2) = thread_count;
 iterationsa = iterations;
 v3 = (pthread_t *)malloc(8LL * thread_count);
 if ( !v3 )
 return -1;
 v4 = v3;
 atomic_store(0, (unsigned int *)&atomic_counter);
 if ( (int)v2 < 1 )
 {
LABEL_6:
 if ( !pthread_create(&th, 0, thread_atomic_load_store, 0) )
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
 v8 = atomic_load((unsigned int *)&atomic_counter);
 free(v4);
 if ( v8 <= 0 )
 return -3;
 else
 return 42;
 }
 else
 {
 v5 = 0;
 while ( !pthread_create(&v4[v5], 0, thread_atomic_increment, &iterationsa) )
 {
 if ( (unsigned int)v2 == ++v5 )
 goto LABEL_6;
 }
 free(v4);
 return -2;
 }
}


/* Function: call_atomic_ops @ 0x2D50 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x2D5C */
void * thread_tls_test(void *arg)
{
 unsigned long long StatusReg; // x8
 int v2; // w19
 void *result; // x0

 StatusReg = _ReadStatusReg(TPIDR_EL0);
 v2 = *(unsigned int *)(StatusReg + 16);
 *(unsigned int *)(StatusReg + 16) = v2 + 50;
 strncpy((char *)(StatusReg + 20), (const char *)arg, 0x1Fu);
 result = malloc(8u);
 *(unsigned int *)result = v2;
 *((unsigned int *)result + 1) = v2 + 50;
 return result;
}


/* Function: param_thread_local_storage @ 0x2DAC */
int param_thread_local_storage(int thread_count)
{
 size_t v2; // x21
 void *v3; // x19
 void *v4; // x21
 int result; // w0
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

 v2 = 8LL * thread_count;
 v3 = malloc(v2);
 v4 = malloc(v2);
 result = -1;
 if ( v3 && v4 )
 {
 if ( thread_count < 1 )
 {
 v13 = 0;
 v12 = 0;
LABEL_13:
 free(v4);
 free(v3);
 if ( v12 == 150 * thread_count && v13 == 100 * thread_count )
 return 42;
 else
 return -3;
 }
 else
 {
 v6 = 0;
 v7 = (unsigned int)thread_count;
 do
 {
 v8 = (char *)malloc(0x10u);
 *((unsigned long long *)v4 + v6) = v8;
 snprintf(v8, 0x10u, "Thread-%d", v6++);
 }
 while ( thread_count != v6 );
 v9 = 0;
 v10 = (pthread_t *)v3;
 while ( !pthread_create(v10, 0, thread_tls_test, *((void **)v4 + v9++)) )
 {
 ++v10;
 if ( thread_count == v9 )
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
 return -2;
 }
 }
 return result;
}


/* Function: call_thread_local_storage @ 0x2F48 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x2F50 */
void test_thread_concurrency()
{
 unsigned int v0; // w19
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 void *ptr; // [xsp+0h] [xbp-10h] BYREF
 int arg; // [xsp+Ch] [xbp-4h] BYREF
 pthread_t newthread; // [xsp+28h] [xbp+18h] BYREF

 puts(asc_34DB);
 arg = 7;
 if ( pthread_create(&newthread, 0, thread_compute, &arg) )
 {
 v0 = -1;
 }
 else
 {
 pthread_join(newthread, &ptr);
 v0 = *(unsigned int *)ptr;
 free(ptr);
 }
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


/* Function: main @ 0x3048 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: __aarch64_cas4_acq_rel @ 0x3070 */
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


/* Function: __aarch64_ldadd4_acq_rel @ 0x30B0 */
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


/* Function: .term_proc @ 0x30E0 */
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

/* FAILED to decompile: rewind @ 0x15418 */

/* FAILED to decompile: close @ 0x15420 */

/* FAILED to decompile: stat_0 @ 0x15428 */

/* FAILED to decompile: write @ 0x15430 */

/* FAILED to decompile: __getauxval @ 0x15438 */

/* FAILED to decompile: abort @ 0x15440 */

/* FAILED to decompile: puts @ 0x15448 */

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
