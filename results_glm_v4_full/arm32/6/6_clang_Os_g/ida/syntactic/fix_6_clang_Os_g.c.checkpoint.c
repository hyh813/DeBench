#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdbool.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <pthread.h>
#include <stdatomic.h>
#include <arpa/inet.h>

/* Forward declarations for glibc functions */
int *_errno_location(void);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
int memcmp(const void *s1, const void *s2, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
char *strchr(const char *s, int c);
char *strstr(const char *haystack, const char *needle);
char *strcpy(char *dest, const char *src);
int strncmp(const char *s1, const char *s2, size_t n);
char *strncpy(char *dest, const char *src, size_t n);
int snprintf(char *str, size_t size, const char *format, ...);
int printf(const char *format, ...);
int puts(const char *s);
int fprintf(FILE *stream, const char *format, ...);
int bcmp(const void *s1, const void *s2, size_t n);
long syscall(long number, ...);

/* Define missing functions */
int *_errno_location(void) {
    extern int errno;
    return &errno;
}

int call_weak_fn(void) {
    return 0;
}

/* Standard library function implementations */
size_t strlen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return p - s;
}

int strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *p1 = s1;
    const unsigned char *p2 = s2;
    while (n--) {
        if (*p1 != *p2) {
            return *p1 - *p2;
        }
        p1++;
        p2++;
    }
    return 0;
}

void *memcpy(void *dest, const void *src, size_t n) {
    unsigned char *d = dest;
    const unsigned char *s = src;
    while (n--) {
        *d++ = *s++;
    }
    return dest;
}

void *memset(void *s, int c, size_t n) {
    unsigned char *p = s;
    while (n--) {
        *p++ = (unsigned char)c;
    }
    return s;
}

char *strchr(const char *s, int c) {
    while (*s != (char)c) {
        if (*s == '\0')
            return NULL;
        s++;
    }
    return (char *)s;
}

char *strstr(const char *haystack, const char *needle) {
    if (!*needle) return (char *)haystack;
    const char *h, *n;
    for (; *haystack; haystack++) {
        h = haystack;
        n = needle;
        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }
        if (!*n) return (char *)haystack;
    }
    return NULL;
}

int strncmp(const char *s1, const char *s2, size_t n) {
    while (n && *s1 && (*s1 == *s2)) {
        s1++;
        s2++;
        n--;
    }
    if (n == 0) return 0;
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

char *strncpy(char *dest, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}

int bcmp(const void *s1, const void *s2, size_t n) {
    return memcmp(s1, s2, n);
}

char *strcpy(char *dest, const char *src) {
    char *d = dest;
    while ((*d++ = *src++) != '\0')
        ;
    return dest;
}

void *memmove(void *dest, const void *src, size_t n) {
    unsigned char *d = dest;
    const unsigned char *s = src;
    if (d < s) {
        while (n--) {
            *d++ = *s++;
        }
    } else if (d > s) {
        d += n;
        s += n;
        while (n--) {
            *--d = *--s;
        }
    }
    return dest;
}

/* ARM EABI required function for thread-local storage access */
__attribute__((visibility("default"), used))
void *__aeabi_read_tp(void) {
    /* This is a minimal stub implementation required for __thread variables on ARM */
    /* Return a valid address that can be used for TLS resolution */
    static char tls_base[16] __attribute__((aligned(16)));
    return tls_base;
}

/* ARM EABI required functions for division support */
__attribute__((visibility("default"), used))
int __aeabi_idiv0(int return_value) {
    /* Called when integer division by zero occurs */
    return return_value;
}

__attribute__((visibility("default"), used))
long long __aeabi_ldiv0(long long return_value) {
    /* Called when long long division by zero occurs */
    return return_value;
}

/* ARM EABI required functions for memory operations */
__attribute__((visibility("default"), used))
void *__aeabi_memcpy(void *dest, const void *src, size_t n) {
    return memcpy(dest, src, n);
}

__attribute__((visibility("default"), used))
void *__aeabi_memmove(void *dest, const void *src, size_t n) {
    return memmove(dest, src, n);
}

__attribute__((visibility("default"), used))
void *__aeabi_memset(void *dest, int c, size_t n) {
    return memset(dest, c, n);
}

__attribute__((visibility("default"), used))
void *__aeabi_memclr(void *dest, size_t n) {
    return memset(dest, 0, n);
}

/* ARM EABI required functions for floating point (stubs) */
__attribute__((visibility("default"), used))
void __aeabi_d2iz(double d) {
    /* Double to integer conversion - stub */
}

__attribute__((visibility("default"), used))
double __aeabi_i2d(int i) {
    /* Integer to double conversion - stub */
    return (double)i;
}

/* ARM EABI required functions for division (32-bit) */
__attribute__((visibility("default"), used))
int __aeabi_idiv(int numerator, int denominator) {
    /* Signed 32-bit integer division */
    if (denominator == 0)
        return 0;
    return numerator / denominator;
}

__attribute__((visibility("default"), used))
unsigned int __aeabi_uidiv(unsigned int numerator, unsigned int denominator) {
    /* Unsigned 32-bit integer division */
    if (denominator == 0)
        return 0;
    return numerator / denominator;
}

/* ARM EABI required functions for division with remainder */
__attribute__((visibility("default"), used))
int __aeabi_idivmod(int numerator, int denominator) {
    /* Returns quotient in r0, remainder in r1 */
    int remainder;
    if (denominator == 0)
        return 0;
    remainder = numerator % denominator;
    numerator = numerator / denominator;
    return numerator;  /* quotient */
}

__attribute__((visibility("default"), used))
unsigned int __aeabi_uidivmod(unsigned int numerator, unsigned int denominator) {
    /* Returns quotient in r0, remainder in r1 */
    unsigned int remainder;
    if (denominator == 0)
        return 0;
    remainder = numerator % denominator;
    numerator = numerator / denominator;
    return numerator;  /* quotient */
}

/* ARM EABI required functions for 64-bit division */
__attribute__((visibility("default"), used))
long long __aeabi_ldiv(long long numerator, long long denominator) {
    /* Signed 64-bit integer division */
    if (denominator == 0)
        return 0;
    return numerator / denominator;
}

__attribute__((visibility("default"), used))
unsigned long long __aeabi_uldiv(unsigned long long numerator, unsigned long long denominator) {
    /* Unsigned 64-bit integer division */
    if (denominator == 0)
        return 0;
    return numerator / denominator;
}

/* Define decompiler macros */
#define JUMPOUT(x) do {} while(0)
#define _isoc99_sscanf sscanf
#define stat_0 stat

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long long uintmax_t;

/* Define atomic builtins that might be missing */
#define atomic_compare_exchange_strong_explicit(ptr, expected, desired, succ, fail) \
    __atomic_compare_exchange_n(ptr, expected, desired, 0, succ, fail)
#define atomic_fetch_add_explicit(ptr, val, memorder) \
    __atomic_fetch_add(ptr, val, memorder)
#define atomic_load_explicit(ptr, memorder) \
    __atomic_load_n(ptr, memorder)
#define atomic_store_explicit(ptr, val, memorder) \
    __atomic_store_n(ptr, val, memorder)

/* Ensure memory order constants are defined */
#ifndef memory_order_relaxed
#define memory_order_relaxed 0
#endif
#ifndef memory_order_consume
#define memory_order_consume 1
#endif
#ifndef memory_order_acquire
#define memory_order_acquire 2
#endif
#ifndef memory_order_release
#define memory_order_release 3
#endif
#ifndef memory_order_acq_rel
#define memory_order_acq_rel 4
#endif
#ifndef memory_order_seq_cst
#define memory_order_seq_cst 5
#endif

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/6/6_clang_Os_g
 * Processor: arm
 */

/* Global data */
const unsigned char unk_2850[12] = {0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C};
const unsigned char unk_285C[12] = {0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C};

/* String data */
const char asc_2BB6[] = "=== Standard Library Tests ===";
const char aLibL101D[] = "Lib L1: %d\n";
const char aLibL102D[] = "Lib L2: %d\n";
const char aLibL103D[] = "Lib L3: %d\n";
const char aLibL104D[] = "Lib L4: %d\n";
const char aLibL105D[] = "Lib L5: %d\n";
const char aLibL106D[] = "Lib L6: %d\n";
const char aLibL107D[] = "Lib L7: %d\n";
const char aLibL108D[] = "Lib L8: %d\n";
const char aLibL109D[] = "Lib L9: %d\n";
const char aLibL110D[] = "Lib L10: %d\n";
const char aLibL111D[] = "Lib L11: %d\n";
const char aLibL112D[] = "Lib L12: %d\n";
const char asc_2BDA[] = "=== System Call Tests ===";
const char aSysL301D[] = "Sys L1: %d\n";
const char aSysL302D[] = "Sys L2: %d\n";
const char aSysL303D[] = "Sys L3: %d\n";
const char aSysL304D[] = "Sys L4: %d\n";
const char aSysL305D[] = "Sys L5: %d\n";
const char aSysL306D[] = "Sys L6: %d\n";
const char aSysL307D[] = "Sys L7: %d\n";
const char asc_2BF5[] = "=== Thread Concurrency Tests ===";
const char aThrL301D[] = "Thr L1: %d\n";
const char aThrL302D[] = "Thr L2: %d\n";
const char aThrL303D[] = "Thr L3: %d\n";
const char aThrL304D[] = "Thr L4: %d\n";
const char aThrL305D[] = "Thr L5: %d\n";
const char aThrL306D[] = "Thr L6: %d\n";

/* Global variables for signal handling */
volatile int signal_received = 0;
int signal_number = 0;

void signal_handler(int sig);

/* Global variables for mutex testing */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
int shared_counter = 0;

/* Global variables for condition variable testing */
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int data = 0;
int ready = 0;

/* Global variables for atomic operations */
int atomic_counter = 0;

/* Thread-local storage */
__thread char tls_thread_name[64] = "Default";



/* Function: .init_proc @ 0xC3C - constructor function */
__attribute__((constructor))
void init_proc()
{
 call_weak_fn();
}


/* Function: sub_C48 @ 0xC48 */
void sub_C48()
{
 JUMPOUT(0);
}


/* Function: param_strlen_0 @ 0xE24 */
size_t param_strlen_0(const char *s)
{
 return strlen(s);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_strcpy @ 0x10D8 */
int param_strcpy(char *dst, const char *src)
{
 char *v2; // r0

 v2 = strcpy(dst, src);
 return param_strlen_0(v2);
}


/* Function: call_strcpy @ 0x10E8 */
size_t call_strcpy()
{
 char v1[40]; // [sp+0h] [bp-28h] BYREF

 strcpy(v1, "HelloLib");
 return param_strlen_0(v1);
}


/* Function: param_strcmp @ 0x1124 */
int param_strcmp(const char *s1, const char *s2)
{
 int v2; // r0
 int v3; // r1

 v2 = strcmp(s1, s2);
 v3 = v2;
 if ( v2 )
 v3 = -1;
 if ( v2 >= 1 )
 return 1;
 return v3;
}


/* Function: call_strcmp @ 0x114C */
int call_strcmp()
{
 return 0;
}


/* Function: call_strlen @ 0x1158 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x1160 */
int param_memcpy(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
 return n;
}


/* Function: call_memcpy @ 0x1178 */
int call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x1180 */
int param_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // r0
 int v4; // r1

 v3 = memcmp(p1, p2, n);
 v4 = v3;
 if ( v3 )
 v4 = -1;
 if ( v3 >= 1 )
 return 1;
 return v4;
}


/* Function: call_memcmp @ 0x11A8 */
int call_memcmp()
{
 int v0; // r0
 int v1; // r5
 int v2; // r0
 int v3; // r1

 v0 = memcmp(&unk_285C, &unk_2850, 0xCu);
 v1 = v0;
 if ( v0 )
 v1 = -1;
 if ( v0 >= 1 )
 v1 = 1;
 v2 = memcmp(&unk_285C, &unk_285C, 0xCu);
 v3 = v2;
 if ( v2 )
 v3 = -1;
 if ( v2 >= 1 )
 v3 = 1;
 return v3 + v1;
}


/* Function: param_printf @ 0x1218 */
int param_printf(int x, const char *name)
{
 return printf("Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x1230 */
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x1250 */
int param_scanf(const char *input_str)
{
 int v1; // r0
 int v2; // r1
 int v4; // [sp+0h] [bp-10h] BYREF
 int v5; // [sp+4h] [bp-Ch] BYREF

 v1 = _isoc99_sscanf(input_str, "%d,%d", &v5, &v4);
 v2 = -1;
 if ( v1 == 2 )
 return v4 + v5;
 return v2;
}


/* Function: call_scanf @ 0x1294 */
int call_scanf()
{
 int v0; // r0
 int v1; // r1
 int v3; // [sp+0h] [bp-10h] BYREF
 int v4; // [sp+4h] [bp-Ch] BYREF

 v0 = _isoc99_sscanf("123,456", "%d,%d", &v4, &v3);
 v1 = -1;
 if ( v0 == 2 )
 return v3 + v4;
 return v1;
}


/* Function: param_fopen_fclose @ 0x12E4 */
int param_fopen_fclose(const char *filename)
{
 FILE *v1; // r0
 FILE *v3; // r4
 int v4; // r5

 v1 = fopen(filename, "r");
 if ( !v1 )
 return -1;
 v3 = v1;
 v4 = fileno(v1);
 fclose(v3);
 return v4;
}


/* Function: call_fopen_fclose @ 0x1328 */
int call_fopen_fclose()
{
 int v0; // r0
 int v1; // r1

 v0 = param_fopen_fclose("/etc/passwd");
 v1 = -1;
 if ( v0 > -1 )
 return 42;
 return v1;
}


/* Function: param_fread_fwrite @ 0x1354 */
int param_fread_fwrite(const char *tmpfile)
{
 FILE *v2; // r0
 FILE *v3; // r5
 size_t v4; // r7
 int result; // r0
 int v6; // r1
 unsigned char v7[56]; // [sp+0h] [bp-38h] BYREF

 v2 = fopen(tmpfile, "w+");
 if ( !v2 )
 return -1;
 v3 = v2;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
 {
 rewind(v3);
 v4 = fread(v7, 1u, 0x12u, v3);
 v7[v4] = 0;
 fclose(v3);
 unlink(tmpfile);
 result = -3;
 if ( v4 == 18 )
 {
 v6 = bcmp(v7, "BinBench Test Data", 0x13u);
 result = -3;
 if ( !v6 )
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


/* Function: call_fread_fwrite @ 0x1434 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1444 */
int param_malloc_free(size_t size)
{
 int v1; // r5
 unsigned int *v3; // r0
 int v4; // r1
 unsigned int *v5; // r2
 size_t v6; // r3
 int v8; // r4

 v3 = malloc(4 * size);
 if ( !v3 )
 return -1;
 if ( size )
 {
 v4 = 0;
 v5 = v3;
 v6 = size;
 do
 {
 *v5++ = v4;
 v4 += 10;
 --v6;
 }
 while ( v6 );
 v1 = *v3;
 }
 v8 = v3[size - 1];
 free(v3);
 return v8 + v1;
}


/* Function: call_malloc_free @ 0x14A8 */
int call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x14B0 */
int param_memset(void *buffer, size_t size)
{
 size_t v2; // r4
 unsigned char *v3; // r5
 int v4; // r6
 int v5; // t1

 v2 = size;
 v3 = (unsigned char *)buffer;
 v4 = 0;
 memset(buffer, 0, size);
 if ( v2 )
 {
 v4 = 0;
 do
 {
 v5 = *v3++;
 --v2;
 v4 += v5;
 }
 while ( v2 );
 }
 return v4;
}


/* Function: call_memset @ 0x14F4 */
int call_memset()
{
 return 0;
}


/* Function: param_strchr_strstr @ 0x14FC */
int param_strchr_strstr(const char *str, char ch, const char *substr)
{
 char *v5; // r0
 int v6; // r6
 char *v7; // r0
 int v8; // r1

 v5 = strchr(str, ch);
 v6 = v5 - str;
 if ( !v5 )
 v6 = -1;
 v7 = strstr(str, substr);
 v8 = v7 - str;
 if ( !v7 )
 v8 = -1;
 return v8 + v6;
}


/* Function: call_strchr_strstr @ 0x153C */
int call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x1544 */
void test_standard_library_functions()
{
 size_t v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r1
 int v5; // r4
 int v6; // r0
 int v7; // r0
 char s[32]; // [sp+4h] [bp-2Ch] BYREF
 int v9; // [sp+24h] [bp-Ch] BYREF

 puts(asc_2BB6);
 strcpy(s, "HelloLib");
 v0 = param_strlen_0(s);
 printf(aLibL101D, v0);
 printf(aLibL102D, 0);
 printf(aLibL103D, 12);
 printf(aLibL104D, 90);
 v1 = call_memcmp();
 printf(aLibL105D, v1);
 v2 = printf("Value: %d, Name: %s\n", 42, "Test");
 printf(aLibL106D, v2);
 v3 = _isoc99_sscanf("123,456", "%d,%d", &v4, &v9);
 if ( v3 != 2 )
 v4 = -1;
 v5 = -1;
 printf(aLibL107D, v4);
 if ( param_fopen_fclose("/etc/passwd") > -1 )
 v5 = 42;
 printf(aLibL108D, v5);
 v6 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(aLibL109D, v6);
 v7 = param_malloc_free(0xAu);
 printf(aLibL110D, v7);
 printf(aLibL111D, 0);
 printf(aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x170C */
int param_linux_syscall(const char *pathname)
{
 int v1; // r0
 int v2; // r4

 v1 = syscall(5, pathname, 0);
 if ( v1 <= -1 )
 return -(*_errno_location());
 v2 = v1;
 syscall(6, v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x1754 */
int call_linux_syscall()
{
 int v0; // r0
 int v1; // r1

 v0 = param_linux_syscall("/etc/passwd");
 v1 = -1;
 if ( v0 > -1 )
 return 42;
 return v1;
}


/* Function: param_win32_api @ 0x1780 */
int param_win32_api(const char *filename)
{
 int v1; // r0
 int v2; // r1
 struct stat v4; // [sp+0h] [bp-60h] BYREF

 v1 = stat_0(filename, &v4);
 v2 = -2;
 if ( v4.st_size > 0 )
 v2 = 42;
 if ( v1 <= -1 )
 return -1;
 return v2;
}


/* Function: call_win32_api @ 0x17B8 */
int call_win32_api()
{
 int v0; // r0
 int v1; // r1
 struct stat v3; // [sp+0h] [bp-60h] BYREF

 v0 = stat_0("/etc/passwd", &v3);
 v1 = -2;
 if ( v3.st_size > 0 )
 v1 = 42;
 if ( v0 <= -1 )
 return -1;
 return v1;
}


/* Function: param_fork_exec @ 0x17FC */
int param_fork_exec(const char *prog, const char *arg)
{
 int v4; // r0
 int result; // r0
 int stat_loc; // [sp+4h] [bp-14h] BYREF

 v4 = fork();
 if ( v4 < 0 )
 return -1;
 if ( !v4 )
 {
 execl(prog, prog, arg, 0);
 exit(127);
 }
 if ( waitpid(v4, &stat_loc, 0) < 0 )
 return -2;
 result = -3;
 if ( (stat_loc & 0x7F) == 0 )
 return (stat_loc >> 8) & 0xFF;
 return result;
}


/* Function: call_fork_exec @ 0x187C */
int call_fork_exec()
{
 int v0; // r0
 int v1; // r1

 v0 = param_fork_exec("/bin/true", 0);
 v1 = -1;
 if ( !v0 )
 return 42;
 return v1;
}


/* Function: param_pipe_communication @ 0x18AC */
int param_pipe_communication()
{
 __pid_t v0; // r0
 ssize_t v1; // r5
 int result; // r0
 unsigned char v3[32]; // [sp+0h] [bp-38h] BYREF
 int pipedes[6]; // [sp+20h] [bp-18h] BYREF

 if ( pipe(pipedes) < 0 )
 return -1;
 v0 = fork();
 if ( v0 < 0 )
 return -2;
 if ( !v0 )
 {
 close(pipedes[0]);
 write(pipedes[1], "HelloPipe", 9u);
 close(pipedes[1]);
 exit(0);
 }
 close(pipedes[1]);
 v1 = read(pipedes[0], v3, 0x1Fu);
 v3[v1] = 0;
 close(pipedes[0]);
 wait(0);
 result = -3;
 if ( v1 > 0 )
 return 42;
 return result;
}


/* Function: call_pipe_communication @ 0x1964 */
// attributes: thunk
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x1968 */
int param_socket_create()
{
 int v0; // r0
 int v1; // r4
 int v2; // r5
 int result; // r0
 struct sockaddr v4; // [sp+4h] [bp-24h] BYREF
 int optval[5]; // [sp+14h] [bp-14h] BYREF

 v0 = socket(2, 1, 0);
 if ( v0 < 0 )
 return -1;
 v1 = v0;
 optval[0] = 1;
 if ( setsockopt(v0, 1, 2, optval, 4u) <= -1 )
 {
 close(v1);
 return -2;
 }
 else
 {
 *(unsigned int *)&v4.sa_family = 2;
 memset(&v4.sa_data[2], 0, 12);
 if ( bind(v1, &v4, 0x10u) <= -1 )
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


/* Function: call_socket_create @ 0x1A40 */
// attributes: thunk
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x1A44 */
size_t param_shmget_shmat()
{
 int v0; // r0
 int v1; // r4
 int v2; // r0
 int v3; // r4
 char *v4; // r0
 char *v5; // r5
 size_t v6; // r6
 key_t shmkey;

 v0 = open("/tmp/binbench_shm", 66, 438);
 v1 = -1;
 if ( v0 >= 0 )
 {
 close(v0);
 shmkey = ftok("/tmp/binbench_shm", 42);
 if ( shmkey >= 0 )
 {
 v2 = shmget(shmkey, 4096, 0666 | IPC_CREAT);
 if ( v2 < 0 )
 {
 return -2;
 }
 else
 {
 v3 = v2;
 v4 = (char *)shmat(v2, 0, 0);
 if ( v4 != (char *)-1 )
 {
 v5 = v4;
 strcpy(v4, "SharedMemory");
 v6 = param_strlen_0(v4);
 shmdt(v5);
 shmctl(v3, IPC_RMID, 0);
 return v6;
 }
 return -3;
 }
 }
 }
 return v1;
}


/* Function: call_shmget_shmat @ 0x1B1C */
int call_shmget_shmat()
{
 signed int v0; // r0
 int v1; // r1

 v0 = param_shmget_shmat();
 v1 = -1;
 if ( v0 > 0 )
 return 42;
 return v1;
}


/* Function: param_signal_handling @ 0x1B3C */
int param_signal_handling()
{
 unsigned int v0; // r5
 bool v1; // cc
 int result; // r0
 unsigned int v3; // r4

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
 v1 = v0-- > 1;
 }
 while ( v1 );
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
 v1 = v3-- > 1;
 }
 while ( v1 );
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


/* Function: signal_handler @ 0x1CB0 */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: call_signal_handling @ 0x1CD8 */
// attributes: thunk
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x1CDC */
void test_system_calls()
{
 int v0; // r0
 int v1; // r1
 int v2; // r4
 int v3; // r0
 int v4; // r1
 int v5; // r0
 int v6; // r1
 int v7; // r0
 int v8; // r0
 int v9; // r0
 struct stat v10; // [sp+0h] [bp-68h] BYREF

 puts(asc_2BDA);
 v0 = param_linux_syscall("/etc/passwd");
 v1 = -1;
 v2 = -1;
 if ( v0 > -1 )
 v1 = 42;
 printf(aSysL301D, v1);
 v3 = stat_0("/etc/passwd", &v10);
 v4 = -2;
 if ( v10.st_size > 0 )
 v4 = 42;
 if ( v3 <= -1 )
 v4 = -1;
 printf(aSysL302D, v4);
 v5 = param_fork_exec("/bin/true", 0);
 v6 = -1;
 if ( !v5 )
 v6 = 42;
 printf(aSysL303D, v6);
 v7 = param_pipe_communication();
 printf(aSysL304D, v7);
 v8 = param_socket_create();
 printf(aSysL305D, v8);
 if ( (int)param_shmget_shmat() > 0 )
 v2 = 42;
 printf(aSysL306D, v2);
 v9 = param_signal_handling();
 printf(aSysL307D, v9);
}


/* Function: thread_compute @ 0x1DFC */
void * thread_compute(void *arg)
{
 int v1; // r4
 void *result; // r0

 v1 = *(unsigned int *)arg * *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v1;
 return result;
}


/* Function: param_pthread_create @ 0x1E1C */
int param_pthread_create(int x)
{
 int v1; // r4
 void *thread_return; // [sp+4h] [bp-14h] BYREF
 int arg; // [sp+8h] [bp-10h] BYREF
 pthread_t newthread; // [sp+Ch] [bp-Ch] BYREF

 arg = x;
 v1 = -1;
 if ( !pthread_create(&newthread, 0, thread_compute, &arg) )
 {
 pthread_join(newthread, &thread_return);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 return v1;
}


/* Function: call_pthread_create @ 0x1E78 */
int call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: thread_sum @ 0x1E80 */
void * thread_sum(void *arg)
{
 int v1; // r2

 *((unsigned int *)arg + 2) = 0;
 v1 = *((unsigned int *)arg + 1);
 if ( v1 >= *(unsigned int *)arg )
 *((unsigned int *)arg + 2) = *(unsigned int *)arg
 + (v1 - *(unsigned int *)arg) * (*(unsigned int *)arg + 1)
 + ((long long)((unsigned int)(v1 + ~*(unsigned int *)arg)
 * (unsigned long long)(unsigned int)(v1 - *(unsigned int *)arg)) >> 1);
 return 0;
}


/* Function: param_pthread_join @ 0x1ED0 */
int param_pthread_join()
{
 unsigned int *v0; // r4
 int v1; // r7
 int v2; // r7
 int v3; // r4
 int v4; // r0
 unsigned int v6[2]; // [sp+0h] [bp-48h] BYREF
 unsigned int v7[7]; // [sp+8h] [bp-40h] BYREF
 unsigned char v8[36]; // [sp+24h] [bp-24h] BYREF

 v0 = v6;
 v1 = 0;
 memset(v7, 0, sizeof(v7));
 v7[5] = 30;
 v7[4] = 21;
 v7[2] = 20;
 v7[1] = 11;
 v6[1] = 10;
 v6[0] = 1;
 do
 {
 if ( pthread_create((pthread_t *)&v8[v1], 0, thread_sum, v0) )
 return -1;
 v1 += 4;
 v0 += 3;
 }
 while ( v1 != 12 );
 v2 = 0;
 v3 = 0;
 while ( !pthread_join(*(unsigned int *)&v8[v2], 0) )
 {
 v4 = -3 * v2;
 v2 += 4;
 v3 += *(unsigned int *)((char *)v7 + v4);
 if ( v2 == 12 )
 return v3;
 }
 return -2;
}


/* Function: call_pthread_join @ 0x1FB8 */
// attributes: thunk
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x1FBC */
void * thread_increment(void *arg)
{
 int v1; // r5

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


/* Function: param_mutex_lock @ 0x2024 */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 void *v3; // r0
 void *v4; // r8
 pthread_t *v5; // r5
 int v6; // r4
 pthread_t *v7; // r4
 int v8; // r5
 pthread_t v9; // t1
 int result; // r0
 int arg; // [sp+4h] [bp-24h] BYREF

 arg = iterations_per_thread;
 v3 = malloc(4 * thread_count);
 if ( !v3 )
 return -1;
 v4 = v3;
 shared_counter = 0;
 if ( thread_count >= 1 )
 {
 v5 = (pthread_t *)v3;
 v6 = thread_count;
 do
 {
 if ( pthread_create(v5, 0, thread_increment, &arg) )
 {
 free(v4);
 return -2;
 }
 ++v5;
 --v6;
 }
 while ( v6 );
 v7 = (pthread_t *)v4;
 v8 = thread_count;
 do
 {
 v9 = *v7++;
 pthread_join(v9, 0);
 --v8;
 }
 while ( v8 );
 }
 free(v4);
 result = -3;
 if ( shared_counter == arg * thread_count )
 return 42;
 return result;
}


/* Function: call_mutex_lock @ 0x2114 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x2120 */
unsigned int * consumer_thread(void *arg)
{
 int v1; // r4
 unsigned int *result; // r0

 pthread_mutex_lock(&cond_mutex);
 if ( !ready )
 {
 do
 pthread_cond_wait(&cond, &cond_mutex);
 while ( ready != 1 );
 }
 v1 = (unsigned char)data;
 pthread_mutex_unlock(&cond_mutex);
 if ( v1 )
 v1 = 42;
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: producer_thread @ 0x21B8 */
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


/* Function: param_condition_variable @ 0x2220 */
int param_condition_variable()
{
 int v0; // r4
 void *thread_return; // [sp+4h] [bp-14h] BYREF
 pthread_t newthread; // [sp+8h] [bp-10h] BYREF
 pthread_t th; // [sp+Ch] [bp-Ch] BYREF

 ready = 0;
 data = 0;
 v0 = -1;
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 {
 if ( pthread_create(&th, 0, producer_thread, 0) )
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


/* Function: call_condition_variable @ 0x22DC */
// attributes: thunk
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x22E0 */
void * thread_atomic_increment(void *arg)
{
 int v1; // r6
 int v2; // r7
 int v4; // [sp+4h] [bp-1Ch] BYREF
 int expected;

 v1 = *(unsigned int *)arg;
 if ( *(int *)arg >= 1 )
 {
 v2 = 0;
 do
 {
 atomic_fetch_add_explicit(&atomic_counter, 1, memory_order_relaxed);
 expected = v2;
 atomic_compare_exchange_strong_explicit(&atomic_counter, &expected, v2 + 1000, memory_order_relaxed, memory_order_relaxed);
 ++v2;
 }
 while ( v2 != v1 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x2354 */
void * thread_atomic_load_store(void *arg)
{
 int v1; // r0

 v1 = atomic_load_explicit(&atomic_counter, memory_order_relaxed);
 atomic_store_explicit(&atomic_counter, v1 + 100, memory_order_relaxed);
 return 0;
}


/* Function: param_atomic_ops @ 0x238C */
int param_atomic_ops(int thread_count, int iterations)
{
 int v2; // r6
 pthread_t *v3; // r0
 pthread_t *v4; // r8
 pthread_t *v5; // r4
 int v6; // r5
 pthread_t *v7; // r4
 pthread_t v8; // t1
 int v9; // r4
 int result; // r0
 pthread_t th; // [sp+0h] [bp-28h] BYREF
 int arg; // [sp+4h] [bp-24h] BYREF

 v2 = thread_count;
 arg = iterations;
 v3 = (pthread_t *)malloc(4 * thread_count);
 if ( !v3 )
 return -1;
 v4 = v3;
 atomic_store_explicit(&atomic_counter, 0, memory_order_relaxed);
 if ( v2 < 1 )
 {
LABEL_6:
 if ( !pthread_create(&th, 0, thread_atomic_load_store, 0) )
 pthread_join(th, 0);
 if ( v2 >= 1 )
 {
 v7 = v4;
 do
 {
 v8 = *v7++;
 pthread_join(v8, 0);
 --v2;
 }
 while ( v2 );
 }
 v9 = atomic_load_explicit(&atomic_counter, memory_order_relaxed);
 free(v4);
 result = -3;
 if ( v9 > 0 )
 return 42;
 }
 else
 {
 v5 = v4;
 v6 = v2;
 while ( !pthread_create(v5, 0, thread_atomic_increment, &arg) )
 {
 ++v5;
 if ( !--v6 )
 goto LABEL_6;
 }
 free(v4);
 return -2;
 }
 return result;
}


/* Function: call_atomic_ops @ 0x24B0 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x24BC */
void * thread_tls_test(void *arg)
{
 int v1; // r4
 void *result; // r0

 v1 = *(unsigned int *)&tls_thread_name[4];
 *(unsigned int *)&tls_thread_name[4] += 50;
 strncpy(&tls_thread_name[8], (const char *)arg, 0x1Fu);
 result = malloc(8u);
 *(unsigned int *)result = v1;
 *((unsigned int *)result + 1) = v1 + 50;
 return result;
}


/* Function: param_thread_local_storage @ 0x2504 */
int param_thread_local_storage(int thread_count)
{
 size_t v1; // r4
 int v2; // r10
 void *v3; // r8
 void *v4; // r11
 bool v5; // zf
 int result; // r0
 int i; // r4
 char *v8; // r0
 int v9; // r5
 pthread_t *v10; // r4
 int v11; // r9
 pthread_t *v12; // r5
 void **v13; // r6
 int v14; // r4
 pthread_t v15; // t1
 int v16; // r7
 int v17; // r8
 void *v18; // t1
 int v19; // r4
 int v20; // r5
 int v21; // [sp+0h] [bp-30h]
 void *ptr; // [sp+4h] [bp-2Ch]
 void *thread_return; // [sp+8h] [bp-28h] BYREF

 v1 = 4 * thread_count;
 v2 = thread_count;
 v3 = malloc(4 * thread_count);
 v4 = malloc(v1);
 v5 = v3 == 0;
 result = -1;
 if ( v3 )
 v5 = v4 == 0;
 if ( !v5 )
 {
 if ( v2 < 1 )
 {
 v21 = v2;
 ptr = v3;
 v14 = 0;
 v11 = 0;
LABEL_14:
 free(v4);
 free(ptr);
 result = -3;
 if ( !(v14 ^ (100 * v21) | v11 ^ (150 * v21)) )
 return 42;
 }
 else
 {
 for ( i = 0; i != v2; ++i )
 {
 v8 = (char *)malloc(0x10u);
 *((unsigned int *)v4 + i) = v8;
 snprintf(v8, 0x10u, "Thread-%d", i);
 }
 v9 = 0;
 v10 = (pthread_t *)v3;
 while ( !pthread_create(v10, 0, thread_tls_test, *((void **)v4 + v9)) )
 {
 ++v9;
 ++v10;
 if ( v2 == v9 )
 {
 ptr = v3;
 v21 = v2;
 v11 = 0;
 v12 = (pthread_t *)v3;
 v13 = (void **)v4;
 v14 = 0;
 do
 {
 v15 = *v12++;
 pthread_join(v15, &thread_return);
 v16 = *(unsigned int *)thread_return;
 v17 = *((unsigned int *)thread_return + 1);
 free(thread_return);
 v18 = *v13++;
 free(v18);
 v11 += v17;
 v14 += v16;
 --v2;
 }
 while ( v2 );
 goto LABEL_14;
 }
 }
 v19 = v9 + 1;
 v20 = 0;
 do
 free(*((void **)v4 + v20++));
 while ( v19 != v20 );
 free(v4);
 free(v3);
 return -2;
 }
 }
 return result;
}


/* Function: call_thread_local_storage @ 0x26A0 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x26A8 */
void test_thread_concurrency()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0

 puts(asc_2BF5);
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


/* Function: main @ 0x2768 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}







/* Function: .term_proc @ 0x2798 - destructor function */
__attribute__((destructor))
void term_proc()
{
}


/* FAILED to decompile: __imp_pthread_mutex_unlock @ 0x13200 */

/* FAILED to decompile: __imp_strstr @ 0x13204 */

/* FAILED to decompile: __imp_raise @ 0x13208 */

/* FAILED to decompile: __imp___libc_start_main @ 0x1320C */

/* FAILED to decompile: __imp_strcmp @ 0x13210 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x13214 */

/* FAILED to decompile: __imp_setsockopt @ 0x13218 */

/* FAILED to decompile: __imp_printf @ 0x1321C */

/* FAILED to decompile: __imp_fopen @ 0x13220 */

/* FAILED to decompile: __imp_read @ 0x13224 */

/* FAILED to decompile: __imp_free @ 0x13228 */

/* FAILED to decompile: __imp_pthread_mutex_lock @ 0x1322C */

/* FAILED to decompile: __imp__exit @ 0x13230 */

/* FAILED to decompile: __imp_memcpy @ 0x13234 */

/* FAILED to decompile: __imp___atomic_fetch_add_4 @ 0x13238 */

/* FAILED to decompile: __imp_shmget @ 0x1323C */

/* FAILED to decompile: __imp_signal @ 0x13240 */

/* FAILED to decompile: __imp_memcmp @ 0x13244 */

/* FAILED to decompile: __imp_sleep @ 0x13248 */

/* FAILED to decompile: __imp_rewind @ 0x1324C */

/* FAILED to decompile: __imp_alarm @ 0x13250 */

/* FAILED to decompile: __imp_unlink @ 0x13254 */

/* FAILED to decompile: __imp_wait @ 0x13258 */

/* FAILED to decompile: __imp_shmat @ 0x1325C */

/* FAILED to decompile: __imp_fwrite @ 0x13260 */

/* FAILED to decompile: __imp_usleep @ 0x13264 */

/* FAILED to decompile: __imp_waitpid @ 0x13268 */

/* FAILED to decompile: __imp_strcpy @ 0x1326C */

/* FAILED to decompile: __imp_fread @ 0x13270 */

/* FAILED to decompile: __imp_shmctl @ 0x13274 */

/* FAILED to decompile: __imp_puts @ 0x13278 */

/* FAILED to decompile: __imp_malloc @ 0x1327C */

/* FAILED to decompile: __imp___atomic_load_4 @ 0x13280 */

/* FAILED to decompile: __imp_stat_0 @ 0x13284 */

/* FAILED to decompile: __imp_open @ 0x13288 */

/* FAILED to decompile: __imp_syscall @ 0x1328C */

/* FAILED to decompile: __imp_bcmp @ 0x13290 */

/* FAILED to decompile: strlen @ 0x13294 */

/* FAILED to decompile: __imp_strchr @ 0x13298 */

/* FAILED to decompile: __imp___atomic_compare_exchange_4 @ 0x1329C */

/* FAILED to decompile: __imp___errno_location @ 0x132A0 */

/* FAILED to decompile: __imp_snprintf @ 0x132A4 */

/* FAILED to decompile: __imp___isoc99_sscanf @ 0x132A8 */

/* FAILED to decompile: __imp_bind @ 0x132AC */

/* FAILED to decompile: __imp_memset @ 0x132B0 */

/* FAILED to decompile: __imp_strncpy @ 0x132B4 */

/* FAILED to decompile: __imp_write @ 0x132B8 */

/* FAILED to decompile: __imp_fileno @ 0x132BC */

/* FAILED to decompile: __imp_shmdt @ 0x132C0 */

/* FAILED to decompile: __imp_fclose @ 0x132C4 */

/* FAILED to decompile: __imp_pipe @ 0x132C8 */

/* FAILED to decompile: __imp_pthread_create @ 0x132CC */

/* FAILED to decompile: __imp_fork @ 0x132D0 */

/* FAILED to decompile: __imp_execl @ 0x132D4 */

/* FAILED to decompile: __imp_listen @ 0x132D8 */

/* FAILED to decompile: __imp_ftok @ 0x132DC */

/* FAILED to decompile: __imp___atomic_store_4 @ 0x132E0 */

/* FAILED to decompile: __imp_pthread_cond_wait @ 0x132E4 */

/* FAILED to decompile: __imp_socket @ 0x132E8 */

/* FAILED to decompile: __imp_pthread_join @ 0x132EC */

/* FAILED to decompile: __imp_pthread_cancel @ 0x132F0 */

/* FAILED to decompile: __imp_pthread_cond_signal @ 0x132F4 */

/* FAILED to decompile: __imp_abort @ 0x132F8 */

/* FAILED to decompile: __imp_close @ 0x132FC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x13304 */

/* Total functions decompiled: 73, failed: 65 */
