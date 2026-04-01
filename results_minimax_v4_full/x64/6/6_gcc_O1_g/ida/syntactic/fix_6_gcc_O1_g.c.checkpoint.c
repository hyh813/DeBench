/* Auto-injected type definitions by preprocessor */
/* Standard integer types - using fixed width types from stdint.h */
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

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <signal.h>
#include <stdbool.h>
#include <errno.h>

/* ThreadData structure */
typedef struct {
    int start;
    int end;
    int result;
} ThreadData;

/* Global variables */
int signal_received;
int signal_number;
int shared_counter;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
int ready;
int data;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int atomic_counter;

/* String constants referenced in the code */
const char *s = "Testing Standard Library Functions";
const char aLibL101D[] = "LibL101: %d\n";
const char aLibL102D[] = "LibL102: %d\n";
const char aLibL103D[] = "LibL103: %d\n";
const char aLibL104D[] = "LibL104: %d\n";
const char aLibL105D[] = "LibL105: %d\n";
const char aLibL106D[] = "LibL106: %d\n";
const char aLibL107D[] = "LibL107: %d\n";
const char aLibL108D[] = "LibL108: %d\n";
const char aLibL109D[] = "LibL109: %d\n";
const char aLibL110D[] = "LibL110: %d\n";
const char aLibL111D[] = "LibL111: %d\n";
const char aLibL112D[] = "LibL112: %d\n";
const char aSysL301D[] = "SysL301: %d\n";
const char aSysL302D[] = "SysL302: %d\n";
const char aSysL303D[] = "SysL303: %d\n";
const char aSysL304D[] = "SysL304: %d\n";
const char aSysL305D[] = "SysL305: %d\n";
const char aSysL306D[] = "SysL306: %d\n";
const char aSysL307D[] = "SysL307: %d\n";
const char aThrL301D[] = "ThrL301: %d\n";
const char aThrL302D[] = "ThrL302: %d\n";
const char aThrL303D[] = "ThrL303: %d\n";
const char aThrL304D[] = "ThrL304: %d\n";
const char aThrL305D[] = "ThrL305: %d\n";
const char aThrL306D[] = "ThrL306: %d\n";
const char asc_520D[] = "Testing System Calls\n";
const char asc_52F6[] = "Testing Thread Concurrency\n";

/* External declarations */
extern void *_gmon_start__(void);
void signal_handler(int sig);
void *_gmon_start__(void);

/* Windows compatibility macros and functions for Linux */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Atomic operations - GCC builtins for Linux */
static inline int _InterlockedExchange(volatile int *ptr, int val)
{
    return __sync_synchronize(), __sync_lock_test_and_set(ptr, val);
}

static inline int _InterlockedAdd(volatile int *ptr, int val)
{
    return __sync_add_and_fetch(ptr, val);
}

static inline int _InterlockedCompareExchange(volatile int *ptr, int comp, int exch)
{
    return __sync_val_compare_and_swap(ptr, comp, exch);
}

/* FS segment register read for TLS - Linux equivalent using inline asm */
static inline unsigned int __readfsdword(unsigned long offset)
{
    unsigned int val;
    __asm__ __volatile__("movl %%fs:(%1), %0" : "=r"(val) : "r"((unsigned long)offset));
    return val;
}

static inline unsigned long long __readfsqword(unsigned long offset)
{
    unsigned long long val;
    __asm__ __volatile__("movq %%fs:(%1), %0" : "=r"(val) : "r"(offset));
    return val;
}

static inline void __writefsdword(unsigned long offset, unsigned int val)
{
    __asm__ __volatile__("movl %0, %%fs:(%1)" : : "r"(val), "r"(offset) : "memory");
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/6/6_gcc_O1_g
 * Processor: pc
 */

/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
}


/* Function: sub_2030 @ 0x2030 */
void sub_2030()
{
 sub_2020();
}


/* Function: sub_2040 @ 0x2040 */
void sub_2040()
{
 sub_2020();
}


/* Function: sub_2050 @ 0x2050 */
void sub_2050()
{
 sub_2020();
}


/* Function: sub_2060 @ 0x2060 */
void sub_2060()
{
 sub_2020();
}


/* Function: sub_2070 @ 0x2070 */
void sub_2070()
{
 sub_2020();
}


/* Function: sub_2080 @ 0x2080 */
void sub_2080()
{
 sub_2020();
}


/* Function: sub_2090 @ 0x2090 */
void sub_2090()
{
 sub_2020();
}


/* Function: sub_20A0 @ 0x20A0 */
void sub_20A0()
{
 sub_2020();
}


/* Function: sub_20B0 @ 0x20B0 */
void sub_20B0()
{
 sub_2020();
}


/* Function: sub_20C0 @ 0x20C0 */
void sub_20C0()
{
 sub_2020();
}


/* Function: sub_20D0 @ 0x20D0 */
void sub_20D0()
{
 sub_2020();
}


/* Function: sub_20E0 @ 0x20E0 */
void sub_20E0()
{
 sub_2020();
}


/* Function: sub_20F0 @ 0x20F0 */
void sub_20F0()
{
 sub_2020();
}


/* Function: sub_2100 @ 0x2100 */
void sub_2100()
{
 sub_2020();
}


/* Function: sub_2110 @ 0x2110 */
void sub_2110()
{
 sub_2020();
}


/* Function: sub_2120 @ 0x2120 */
void sub_2120()
{
 sub_2020();
}


/* Function: sub_2130 @ 0x2130 */
void sub_2130()
{
 sub_2020();
}


/* Function: sub_2140 @ 0x2140 */
void sub_2140()
{
 sub_2020();
}


/* Function: sub_2150 @ 0x2150 */
void sub_2150()
{
 sub_2020();
}


/* Function: sub_2160 @ 0x2160 */
void sub_2160()
{
 sub_2020();
}


/* Function: sub_2170 @ 0x2170 */
void sub_2170()
{
 sub_2020();
}


/* Function: sub_2180 @ 0x2180 */
void sub_2180()
{
 sub_2020();
}


/* Function: sub_2190 @ 0x2190 */
void sub_2190()
{
 sub_2020();
}


/* Function: sub_21A0 @ 0x21A0 */
void sub_21A0()
{
 sub_2020();
}


/* Function: sub_21B0 @ 0x21B0 */
void sub_21B0()
{
 sub_2020();
}


/* Function: sub_21C0 @ 0x21C0 */
void sub_21C0()
{
 sub_2020();
}


/* Function: sub_21D0 @ 0x21D0 */
void sub_21D0()
{
 sub_2020();
}


/* Function: sub_21E0 @ 0x21E0 */
void sub_21E0()
{
 sub_2020();
}


/* Function: sub_21F0 @ 0x21F0 */
void sub_21F0()
{
 sub_2020();
}


/* Function: sub_2200 @ 0x2200 */
void sub_2200()
{
 sub_2020();
}


/* Function: sub_2210 @ 0x2210 */
void sub_2210()
{
 sub_2020();
}


/* Function: sub_2220 @ 0x2220 */
void sub_2220()
{
 sub_2020();
}


/* Function: sub_2230 @ 0x2230 */
void sub_2230()
{
 sub_2020();
}


/* Function: sub_2240 @ 0x2240 */
void sub_2240()
{
 sub_2020();
}


/* Function: sub_2250 @ 0x2250 */
void sub_2250()
{
 sub_2020();
}


/* Function: sub_2260 @ 0x2260 */
void sub_2260()
{
 sub_2020();
}


/* Function: sub_2270 @ 0x2270 */
void sub_2270()
{
 sub_2020();
}


/* Function: sub_2280 @ 0x2280 */
void sub_2280()
{
 sub_2020();
}


/* Function: sub_2290 @ 0x2290 */
void sub_2290()
{
 sub_2020();
}


/* Function: sub_22A0 @ 0x22A0 */
void sub_22A0()
{
 sub_2020();
}


/* Function: sub_22B0 @ 0x22B0 */
void sub_22B0()
{
 sub_2020();
}


/* Function: sub_22C0 @ 0x22C0 */
void sub_22C0()
{
 sub_2020();
}


/* Function: sub_22D0 @ 0x22D0 */
void sub_22D0()
{
 sub_2020();
}


/* Function: sub_22E0 @ 0x22E0 */
void sub_22E0()
{
 sub_2020();
}


/* Function: sub_22F0 @ 0x22F0 */
void sub_22F0()
{
 sub_2020();
}


/* Function: sub_2300 @ 0x2300 */
void sub_2300()
{
 sub_2020();
}


/* Function: sub_2310 @ 0x2310 */
void sub_2310()
{
 sub_2020();
}


/* Function: sub_2320 @ 0x2320 */
void sub_2320()
{
 sub_2020();
}


/* Function: sub_2330 @ 0x2330 */
void sub_2330()
{
 sub_2020();
}


/* Function: sub_2340 @ 0x2340 */
void sub_2340()
{
 sub_2020();
}


/* Function: sub_2350 @ 0x2350 */
void sub_2350()
{
 sub_2020();
}


/* Function: sub_2360 @ 0x2360 */
void sub_2360()
{
 sub_2020();
}


/* Function: sub_2370 @ 0x2370 */
void sub_2370()
{
 sub_2020();
}


/* Function: sub_2380 @ 0x2380 */
void sub_2380()
{
 sub_2020();
}


/* Function: sub_2390 @ 0x2390 */
void sub_2390()
{
 sub_2020();
}


/* Function: sub_23A0 @ 0x23A0 */
void sub_23A0()
{
 sub_2020();
}


/* Function: sub_23B0 @ 0x23B0 */
void sub_23B0()
{
 sub_2020();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: signal_handler @ 0x2849 */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: thread_sum @ 0x285E */
void * thread_sum(void *arg)
{
 int v1; // eax
 int v2; // ecx
 int v3; // ecx
 int v4; // edx

 *((unsigned int *)arg + 2) = 0;
 v1 = *(unsigned int *)arg;
 v2 = *((unsigned int *)arg + 1);
 if ( *(unsigned int *)arg <= v2 )
 {
 v3 = v2 + 1;
 v4 = 0;
 do
 v4 += v1++;
 while ( v1 != v3 );
 *((unsigned int *)arg + 2) = v4;
 }
 return 0;
}


/* Function: thread_compute @ 0x288C */
void * thread_compute(void *arg)
{
 int v1; // ebx
 void *result; // rax

 v1 = *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v1 * v1;
 return result;
}


/* Function: thread_increment @ 0x28A4 */
void * thread_increment(void *arg)
{
 int v1; // r12d
 int v2; // ebx

 v1 = *(unsigned int *)arg;
 if ( *(int *)arg > 0 )
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


/* Function: consumer_thread @ 0x28FB */
void * consumer_thread(void *arg)
{
 int v1; // ebx
 void *result; // rax

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *(unsigned int *)result = v1;
 return result;
}


/* Function: producer_thread @ 0x2961 */
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


/* Function: thread_atomic_increment @ 0x29AE */
void * thread_atomic_increment(void *arg)
{
 int v1; // esi
 signed int v2; // edx

 v1 = *(unsigned int *)arg;
 if ( *(int *)arg > 0 )
 {
 v2 = 0;
 do
 {
 _InterlockedAdd(&atomic_counter, 1u);
 _InterlockedCompareExchange(&atomic_counter, v2 + 1000, v2);
 ++v2;
 }
 while ( v1 != v2 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x29E2 */
void * thread_atomic_load_store(void *arg)
{
 _InterlockedExchange(&atomic_counter, atomic_counter + 100);
 return 0;
}


/* Function: thread_tls_test @ 0x29FB */
void * thread_tls_test(void *arg)
{
 unsigned int v1; // ebp
 void *result; // rax

 v1 = __readfsdword(0xFFFFFFDC);
 __writefsdword(0xFFFFFFDC, v1 + 50);
 strncpy((char *)(__readfsqword(0) - 32), (const char *)arg, 0x1Fu);
 result = malloc(8u);
 *(unsigned int *)result = v1;
 *((unsigned int *)result + 1) = v1 + 50;
 return result;
}


/* Function: param_strcpy @ 0x2A4B */
int param_strcpy(char *dst, const char *src)
{
 strcpy(dst, src);
 return strlen(dst);
}


/* Function: call_strcpy @ 0x2A62 */
int call_strcpy()
{
 char buffer[40]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v2; // [rsp+28h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 return param_strcpy(buffer, "HelloLib");
}


/* Function: param_strcmp @ 0x2AA3 */
int param_strcmp(const char *s1, const char *s2)
{
 int v2; // eax
 int v3; // edx
 bool v4; // cc
 int result; // eax

 v2 = strcmp(s1, s2);
 v3 = v2 >> 31;
 v4 = v2 <= 0;
 result = 1;
 if ( v4 )
 return v3;
 return result;
}


/* Function: call_strcmp @ 0x2AC0 */
int call_strcmp()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 return v1 + v0 + param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x2B0E */
int param_strlen(const char *str)
{
 return strlen(str);
}


/* Function: call_strlen @ 0x2B20 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x2B2A */
int param_memcpy(void *dst, const void *src, size_t n)
{
 int v3; // ebx

 v3 = n;
 memcpy(dst, src, n);
 return v3;
}


/* Function: call_memcpy @ 0x2B3B */
int call_memcpy()
{
 int src[8]; // [rsp+0h] [rbp-48h] BYREF
 int dst[6]; // [rsp+20h] [rbp-28h] BYREF
 unsigned long long v3; // [rsp+38h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 src[0] = 10;
 src[1] = 20;
 src[2] = 30;
 src[3] = 40;
 src[4] = 50;
 memset(dst, 0, 20);
 param_memcpy(dst, src, 0x14u);
 return dst[4] + dst[0] + dst[2];
}


/* Function: param_memcmp @ 0x2BCC */
int param_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // eax
 int v4; // edx
 bool v5; // cc
 int result; // eax

 v3 = memcmp(p1, p2, n);
 v4 = v3 >> 31;
 v5 = v3 <= 0;
 result = 1;
 if ( v5 )
 return v4;
 return result;
}


/* Function: call_memcmp @ 0x2BE9 */
int call_memcmp()
{
 int v0; // ebx
 int arr1[3]; // [rsp+4h] [rbp-44h] BYREF
 int arr2[3]; // [rsp+10h] [rbp-38h] BYREF
 int arr3[3]; // [rsp+1Ch] [rbp-2Ch] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-20h]

 v5 = __readfsqword(0x28u);
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr2[0] = 1;
 arr2[1] = 2;
 arr2[2] = 4;
 arr3[0] = 1;
 arr3[1] = 2;
 arr3[2] = 3;
 v0 = param_memcmp(arr1, arr2, 0xCu);
 return v0 + param_memcmp(arr1, arr3, 0xCu);
}


/* Function: param_printf @ 0x2C94 */
int param_printf(int x, const char *name)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x2CBC */
int call_printf()
{
 return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x2CDA */
int param_scanf(const char *input_str)
{
 int a; // [rsp+0h] [rbp-18h] BYREF
 int b; // [rsp+4h] [rbp-14h] BYREF
 unsigned long long v4; // [rsp+8h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 if ( (unsigned int)__isoc99_sscanf(input_str, "%d,%d", &a, &b) == 2 )
 return a + b;
 else
 return -1;
}


/* Function: call_scanf @ 0x2D33 */
int call_scanf()
{
 return param_scanf("123,456");
}


/* Function: param_fopen_fclose @ 0x2D4C */
int param_fopen_fclose(const char *filename)
{
 FILE *v1; // rax
 FILE *v2; // rbx
 int v3; // ebp

 v1 = fopen(filename, "r");
 if ( !v1 )
 return -1;
 v2 = v1;
 v3 = fileno(v1);
 fclose(v2);
 return v3;
}


/* Function: call_fopen_fclose @ 0x2D8C */
int call_fopen_fclose()
{
 return (param_fopen_fclose("/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_fread_fwrite @ 0x2DAB */
int param_fread_fwrite(const char *tmpfile)
{
 FILE *v1; // rax
 FILE *v2; // rbx
 size_t v3; // rbp
 char read_buffer[40]; // [rsp+0h] [rbp-48h] BYREF
 unsigned long long v6; // [rsp+28h] [rbp-20h]

 v6 = __readfsqword(0x28u);
 v1 = fopen(tmpfile, "w+");
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v2);
 v3 = fread(read_buffer, 1u, 0x12u, v2);
 read_buffer[v3] = 0;
 fclose(v2);
 unlink(tmpfile);
 if ( v3 == 18 )
 return strcmp(read_buffer, "BinBench Test Data") == 0 ? 42 : -3;
 else
 return -3;
 }
 else
 {
 fclose(v2);
 return -2;
 }
}


/* Function: call_fread_fwrite @ 0x2E90 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2EA9 */
int param_malloc_free(size_t size)
{
 size_t v1; // rbx
 unsigned int *v2; // rax
 unsigned int *v3; // rdx
 int v4; // ecx
 int v5; // ebx

 v1 = size;
 v2 = malloc(4 * size);
 if ( !v2 )
 return -1;
 if ( size )
 {
 v3 = v2;
 v4 = 0;
 do
 {
 *v3 = v4;
 v4 += 10;
 ++v3;
 }
 while ( v3 != &v2[v1] );
 }
 v5 = v2[v1 - 1] + *v2;
 free(v2);
 return v5;
}


/* Function: call_malloc_free @ 0x2F0A */
int call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x2F21 */
int param_memset(void *buffer, size_t size)
{
 unsigned char *v2; // rax
 char *v3; // rdi
 int v4; // edx

 v2 = (unsigned char *)memset(buffer, 0, size);
 if ( !size )
 return 0;
 v3 = (char *)buffer + size;
 v4 = 0;
 do
 v4 += *v2++;
 while ( v2 != (unsigned char *)v3 );
 return v4;
}


/* Function: call_memset @ 0x2F6A */
int call_memset()
{
 int *v0; // rax
 int buffer[10]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v3; // [rsp+28h] [rbp-10h] BYREF

 v3 = __readfsqword(0x28u);
 v0 = buffer;
 do
 *v0++ = 255;
 while ( v0 != (int *)&v3 );
 param_memset(buffer, 0x28u);
 return buffer[0] + buffer[9];
}


/* Function: param_strchr_strstr @ 0x2FC7 */
int param_strchr_strstr(const char *str, char ch_0, const char *substr)
{
 char *v4; // rax
 int v5; // ebp
 char *v6; // rax
 int v7; // edx
 bool v8; // zf
 int v9; // eax

 v4 = strchr(str, ch_0);
 v5 = -1;
 if ( v4 )
 v5 = (unsigned int)v4 - (unsigned int)str;
 v6 = strstr(str, substr);
 v7 = (unsigned int)v6 - (unsigned int)str;
 v8 = v6 == 0;
 v9 = -1;
 if ( !v8 )
 v9 = v7;
 return v5 + v9;
}


/* Function: call_strchr_strstr @ 0x3012 */
int call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x3037 */
void test_standard_library_functions()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax
 unsigned int v9; // eax
 unsigned int v10; // eax
 unsigned int v11; // eax

 puts(s);
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
 __printf_chk(1, aLibL112D, v11);
}


/* Function: param_linux_syscall @ 0x31E8 */
int param_linux_syscall(const char *pathname)
{
 int v1; // eax
 int v2; // ebx

 v1 = syscall(2, pathname, 0);
 if ( v1 < 0 )
 return -*__errno_location();
 v2 = v1;
 syscall(3, (unsigned int)v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x322A */
int call_linux_syscall()
{
 return (param_linux_syscall("/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_win32_api @ 0x3249 */
int param_win32_api(const char *filename)
{
 int result; // eax
 struct stat st; // [rsp+0h] [rbp-A8h] BYREF
 unsigned long long v3; // [rsp+98h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 if ( stat(filename, &st) < 0 )
 return -1;
 result = 42;
 if ( st.st_size <= 0 )
 return -2;
 return result;
}


/* Function: call_win32_api @ 0x32AD */
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x32C6 */
int param_fork_exec(const char *prog, const char *arg)
{
 int v2; // eax
 __pid_t v3; // edx
 int result; // eax
 int status; // [rsp+4h] [rbp-24h] BYREF
 unsigned long long v6; // [rsp+8h] [rbp-20h]

 v6 = __readfsqword(0x28u);
 v2 = fork();
 if ( v2 < 0 )
 return -1;
 if ( !v2 )
 {
 execl(prog, prog, arg, 0);
 _exit(127);
 }
 v3 = waitpid(v2, &status, 0);
 result = -2;
 if ( v3 >= 0 )
 {
 result = BYTE1(status);
 if ( (status & 0x7F) != 0 )
 return -3;
 }
 return result;
}


/* Function: call_fork_exec @ 0x3364 */
int call_fork_exec()
{
 return param_fork_exec("/bin/true", 0) == 0 ? 42 : -1;
}


/* Function: param_pipe_communication @ 0x338D */
int param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // rbx
 int result; // eax
 int pipefd[2]; // [rsp+8h] [rbp-40h] BYREF
 char buffer[40]; // [rsp+10h] [rbp-38h] BYREF
 unsigned long long v5; // [rsp+38h] [rbp-10h]

 v5 = __readfsqword(0x28u);
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
 wait(0);
 result = 42;
 if ( v1 <= 0 )
 return -3;
 return result;
}


/* Function: call_pipe_communication @ 0x3468 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x347A */
int param_socket_create()
{
 int v0; // eax
 int v1; // ebx
 int opt; // [rsp+Ch] [rbp-2Ch] BYREF
 struct sockaddr_in addr; // [rsp+10h] [rbp-28h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h]

 v5 = __readfsqword(0x28u);
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
 *(unsigned long long *)&addr.sin_family = 2;
 *(unsigned long long *)addr.sin_zero = 0;
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


/* Function: call_socket_create @ 0x356F */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x3581 */
int param_shmget_shmat()
{
 int v0; // eax
 int v1; // edi
 int v2; // eax
 int v3; // ebp
 char *v4; // rbx
 int v5; // r12d

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return -1;
 close(v0);
 v1 = ftok("/tmp/binbench_shm", 42);
 if ( v1 < 0 )
 return -1;
 v2 = shmget(v1, 0x1000u, 950);
 v3 = v2;
 if ( v2 < 0 )
 return -2;
 v4 = (char *)shmat(v2, 0, 0);
 if ( v4 == (char *)-1LL )
 return -3;
 strcpy(v4, "SharedMemory");
 v5 = strlen(v4);
 shmdt(v4);
 shmctl(v3, 0, 0);
 return v5;
}


/* Function: call_shmget_shmat @ 0x365D */
int call_shmget_shmat()
{
 bool v0; // cc
 int result; // eax

 v0 = param_shmget_shmat() <= 0;
 result = 42;
 if ( v0 )
 return -1;
 return result;
}


/* Function: param_signal_handling @ 0x367E */
int param_signal_handling()
{
 int v0; // ebx
 int v1; // ebx

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
 break;
 --v0;
 }
 while ( v0 );
 }
 if ( !signal_received )
 return -3;
 if ( signal_number != 10 )
 return -4;
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
 return -5;
 if ( signal_number != 14 )
 return -5;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: call_signal_handling @ 0x37B2 */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x37C4 */
void test_system_calls()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax

 puts(asc_520D);
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


/* Function: param_pthread_create @ 0x38BC */
int param_pthread_create(int x)
{
 int v1; // ebx
 int input; // [rsp+4h] [rbp-24h] BYREF
 pthread_t tid; // [rsp+8h] [rbp-20h] BYREF
 void *thread_ret[3]; // [rsp+10h] [rbp-18h] BYREF

 thread_ret[1] = (void *)__readfsqword(0x28u);
 input = x;
 if ( pthread_create(&tid, 0, thread_compute, &input) )
 return -1;
 pthread_join(tid, thread_ret);
 v1 = *(unsigned int *)thread_ret[0];
 free(thread_ret[0]);
 return v1;
}


/* Function: call_pthread_create @ 0x3937 */
int call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: param_pthread_join @ 0x394E */
int param_pthread_join()
{
 pthread_t *v0; // r12
 ThreadData *v1; // rbp
 int v2; // ebx
 long long v3; // rbp
 pthread_t tids[4]; // [rsp+0h] [rbp-78h] BYREF
 ThreadData data[3]; // [rsp+20h] [rbp-58h] BYREF
 char v7; // [rsp+44h] [rbp-34h] BYREF
 unsigned long long v8; // [rsp+48h] [rbp-30h]

 v8 = __readfsqword(0x28u);
 data[0].start = 1;
 data[0].end = 10;
 data[0].result = 0;
 data[1].start = 11;
 data[1].end = 20;
 data[1].result = 0;
 data[2].start = 21;
 data[2].end = 30;
 data[2].result = 0;
 v0 = tids;
 v1 = data;
 do
 {
 v2 = pthread_create(v0, 0, thread_sum, v1);
 if ( v2 )
 return -1;
 ++v0;
 ++v1;
 }
 while ( v1 != (ThreadData *)&v7 );
 v3 = 0;
 while ( !pthread_join(tids[v3], 0) )
 {
 v2 += data[v3++].result;
 if ( v3 == 3 )
 return v2;
 }
 return -2;
}


/* Function: call_pthread_join @ 0x3A51 */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x3A68 */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 char *v2; // rax
 void *v3; // r14
 pthread_t *v4; // rbp
 pthread_t *v5; // r12
 pthread_t *v6; // rbx
 int result; // eax
 int arg[15]; // [rsp+Ch] [rbp-3Ch] BYREF

 arg[0] = iterations_per_thread;
 v2 = (char *)malloc(8LL * thread_count);
 if ( !v2 )
 return -1;
 v3 = v2;
 shared_counter = 0;
 if ( thread_count > 0 )
 {
 v4 = (pthread_t *)v2;
 v5 = (pthread_t *)&v2[8 * thread_count];
 v6 = (pthread_t *)v2;
 do
 {
 if ( pthread_create(v6, 0, thread_increment, arg) )
 {
 free(v3);
 return -2;
 }
 ++v6;
 }
 while ( v6 != v5 );
 do
 pthread_join(*v4++, 0);
 while ( v4 != v5 );
 }
 free(v3);
 result = 42;
 if ( shared_counter != arg[0] * thread_count )
 return -3;
 return result;
}


/* Function: call_mutex_lock @ 0x3B3E */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x3B5A */
int param_condition_variable()
{
 int v0; // ebx
 pthread_t producer; // [rsp+0h] [rbp-28h] BYREF
 pthread_t consumer; // [rsp+8h] [rbp-20h] BYREF
 void *consumer_ret[3]; // [rsp+10h] [rbp-18h] BYREF

 consumer_ret[1] = (void *)__readfsqword(0x28u);
 ready = 0;
 data = 0;
 if ( pthread_create(&consumer, 0, consumer_thread, 0) )
 return -1;
 if ( pthread_create(&producer, 0, producer_thread, 0) )
 {
 pthread_cancel(consumer);
 return -2;
 }
 else
 {
 pthread_join(consumer, consumer_ret);
 pthread_join(producer, 0);
 v0 = *(unsigned int *)consumer_ret[0];
 free(consumer_ret[0]);
 }
 return v0;
}


/* Function: call_condition_variable @ 0x3C21 */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x3C38 */
int param_atomic_ops(int thread_count, int iterations)
{
 char *v2; // rax
 void *v3; // rbp
 pthread_t *v4; // rbx
 pthread_t *v5; // r14
 long long v6; // rbx
 int v7; // ebx
 int result; // eax
 int arg; // [rsp+Ch] [rbp-3Ch] BYREF
 pthread_t load_store_tid[7]; // [rsp+10h] [rbp-38h] BYREF

 arg = iterations;
 load_store_tid[1] = __readfsqword(0x28u);
 v2 = (char *)malloc(8LL * thread_count);
 if ( !v2 )
 return -1;
 v3 = v2;
 _InterlockedExchange(&atomic_counter, 0);
 if ( thread_count <= 0 )
 {
 if ( !pthread_create(load_store_tid, 0, thread_atomic_load_store, 0) )
 pthread_join(load_store_tid[0], 0);
 }
 else
 {
 v4 = (pthread_t *)v2;
 v5 = (pthread_t *)&v2[8 * thread_count];
 do
 {
 if ( pthread_create(v4, 0, thread_atomic_increment, &arg) )
 {
 free(v3);
 return -2;
 }
 ++v4;
 }
 while ( v4 != v5 );
 if ( !pthread_create(load_store_tid, 0, thread_atomic_load_store, 0) )
 pthread_join(load_store_tid[0], 0);
 v6 = 0;
 do
 pthread_join(*((unsigned long long *)v3 + v6++), 0);
 while ( thread_count > (int)v6 );
 }
 v7 = atomic_counter;
 free(v3);
 result = 42;
 if ( v7 <= 0 )
 return -3;
 return result;
}


/* Function: call_atomic_ops @ 0x3D9C */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x3DB8 */
int param_thread_local_storage(int thread_count)
{
 void *v1; // r15
 void *v2; // rax
 void *v3; // r12
 long long i; // rbx
 void *v5; // rax
 pthread_t *v6; // r13
 long long v7; // rbx
 int v8; // ebp
 int v9; // r13d
 long long j; // rbx
 void **v12; // rbp
 long long v13; // rbx
 void *ret[9]; // [rsp+10h] [rbp-48h] BYREF

 ret[1] = (void *)__readfsqword(0x28u);
 v1 = malloc(8LL * thread_count);
 v2 = malloc(8LL * thread_count);
 if ( !v1 )
 return -1;
 v3 = v2;
 if ( !v2 )
 return -1;
 if ( thread_count <= 0 )
 {
 v9 = 0;
 v8 = 0;
LABEL_11:
 free(v3);
 free(v1);
 if ( 100 * thread_count == v8 && 150 * thread_count == v9 )
 return 42;
 else
 return -3;
 }
 else
 {
 for ( i = 0; i != thread_count; __snprintf_chk(v5, 16, 1, 16, "Thread-%d", i++) )
 {
 v5 = malloc(0x10u);
 *((unsigned long long *)v3 + i) = v5;
 }
 v6 = (pthread_t *)v1;
 v7 = 0;
 while ( 1 )
 {
 v8 = pthread_create(v6, 0, thread_tls_test, *((void **)v3 + v7));
 if ( v8 )
 break;
 ++v7;
 ++v6;
 if ( v7 == thread_count )
 {
 v9 = 0;
 for ( j = 0; j != thread_count; free(*((void **)v3 + j++)) )
 {
 pthread_join(*((unsigned long long *)v1 + j), ret);
 v8 += *(unsigned int *)ret[0];
 v9 += *((unsigned int *)ret[0] + 1);
 free(ret[0]);
 }
 goto LABEL_11;
 }
 }
 if ( (int)v7 >= 0 )
 {
 v12 = (void **)v3;
 v13 = (long long)v3 + 8 * (unsigned int)v7 + 8;
 do
 free(*v12++);
 while ( v12 != (void **)v13 );
 }
 free(v3);
 free(v1);
 return -2;
 }
}


/* Function: call_thread_local_storage @ 0x3F81 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3F98 */
void test_thread_concurrency()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 puts(asc_52F6);
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


/* Function: main @ 0x407D */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: .term_proc @ 0x40B0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __snprintf_chk @ 0x8148 */

/* FAILED to decompile: raise @ 0x8150 */

/* FAILED to decompile: free @ 0x8158 */

/* FAILED to decompile: __libc_start_main @ 0x8160 */

/* FAILED to decompile: __errno_location @ 0x8168 */

/* FAILED to decompile: unlink @ 0x8170 */

/* FAILED to decompile: strncpy @ 0x8178 */

/* FAILED to decompile: _exit @ 0x8180 */

/* FAILED to decompile: strcpy @ 0x8188 */

/* FAILED to decompile: puts @ 0x8190 */

/* FAILED to decompile: fread @ 0x8198 */

/* FAILED to decompile: setsockopt @ 0x81A0 */

/* FAILED to decompile: shmdt @ 0x81A8 */

/* FAILED to decompile: write @ 0x81B0 */

/* FAILED to decompile: pthread_cond_wait @ 0x81B8 */

/* FAILED to decompile: fclose @ 0x81C0 */

/* FAILED to decompile: strlen @ 0x81C8 */

/* FAILED to decompile: __stack_chk_fail @ 0x81D0 */

/* FAILED to decompile: strchr @ 0x81D8 */

/* FAILED to decompile: rewind @ 0x81E0 */

/* FAILED to decompile: memset @ 0x81E8 */

/* FAILED to decompile: alarm @ 0x81F0 */

/* FAILED to decompile: close @ 0x81F8 */

/* FAILED to decompile: pipe @ 0x8200 */

/* FAILED to decompile: read @ 0x8208 */

/* FAILED to decompile: memcmp @ 0x8210 */

/* FAILED to decompile: pthread_cond_signal @ 0x8218 */

/* FAILED to decompile: strcmp @ 0x8220 */

/* FAILED to decompile: signal @ 0x8228 */

/* FAILED to decompile: syscall @ 0x8230 */

/* FAILED to decompile: stat_0 @ 0x8238 */

/* FAILED to decompile: memcpy @ 0x8240 */

/* FAILED to decompile: fileno @ 0x8248 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x8250 */

/* FAILED to decompile: malloc @ 0x8258 */

/* FAILED to decompile: __isoc99_sscanf @ 0x8260 */

/* FAILED to decompile: listen @ 0x8268 */

/* FAILED to decompile: __printf_chk @ 0x8270 */

/* FAILED to decompile: bind @ 0x8278 */

/* FAILED to decompile: pthread_create @ 0x8280 */

/* FAILED to decompile: waitpid @ 0x8288 */

/* FAILED to decompile: open @ 0x8290 */

/* FAILED to decompile: shmctl @ 0x8298 */

/* FAILED to decompile: fopen @ 0x82A0 */

/* FAILED to decompile: shmat @ 0x82A8 */

/* FAILED to decompile: shmget @ 0x82B0 */

/* FAILED to decompile: fwrite @ 0x82B8 */

/* FAILED to decompile: ftok @ 0x82C0 */

/* FAILED to decompile: pthread_join @ 0x82C8 */

/* FAILED to decompile: execl @ 0x82D0 */

/* FAILED to decompile: pthread_cancel @ 0x82D8 */

/* FAILED to decompile: sleep @ 0x82E0 */

/* FAILED to decompile: wait @ 0x82E8 */

/* FAILED to decompile: fork @ 0x82F0 */

/* FAILED to decompile: strstr @ 0x82F8 */

/* FAILED to decompile: pthread_mutex_lock @ 0x8300 */

/* FAILED to decompile: usleep @ 0x8308 */

/* FAILED to decompile: socket @ 0x8310 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x8318 */

/* FAILED to decompile: __gmon_start__ @ 0x8328 */

/* Total functions decompiled: 128, failed: 60 */
