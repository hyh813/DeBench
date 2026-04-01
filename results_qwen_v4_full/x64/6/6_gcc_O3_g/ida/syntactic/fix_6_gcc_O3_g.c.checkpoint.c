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
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Required headers for compilation */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <errno.h>
#include <stdbool.h>
#include <xmmintrin.h>

/* Windows intrinsics compatibility macros */
#define _InterlockedCompareExchange(ptr, exchange, comparand) __sync_val_compare_and_swap(ptr, comparand, exchange)
#define _InterlockedExchange(ptr, value) __sync_lock_test_and_set(ptr, value)
#define __readfsdword(offset) 0
#define __readfsqword(offset) 0
#define __writefsdword(offset, value) do {} while(0)
#define BYTE1(x) (((x) >> 8) & 0xFF)
#define JUMPOUT(x) return

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/6/6_gcc_O3_g
 * Processor: pc
 */

/* Global variable declarations */
extern long long (**_gmon_start__)(void);
extern int signal_received;
extern int signal_number;
extern pthread_mutex_t counter_mutex;
extern int shared_counter;
extern pthread_mutex_t cond_mutex;
extern pthread_cond_t cond;
extern int ready;
extern int data;
extern int atomic_counter;

/* Global variable definitions */
int signal_received = 0;
int signal_number = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
int shared_counter = 0;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int ready = 0;
int data = 0;
int atomic_counter = 0;

/* Type definitions for decompiled code */
typedef struct ThreadData {
 __m128i start;
 __m128i end;
 int result;
} ThreadData;

typedef struct sockaddr_in sockaddr_in;

/* SIMD constants */
__attribute__((aligned(16))) static const __m128i xmmword_53D0 = {1, 1, 1, 1};
__attribute__((aligned(16))) static const __m128i xmmword_53C0 = {0, 0, 0, 0};
__attribute__((aligned(16))) static const __m128i xmmword_53E0 = {0, 0, 0, 0};
__attribute__((aligned(16))) static const __m128i xmmword_53F0 = {1, 0, 0, 0};
__attribute__((aligned(16))) static const __m128i xmmword_5400 = {2, 0, 0, 0};
__attribute__((aligned(16))) static const __m128i xmmword_5410 = {1, 10, 0, 0};
__attribute__((aligned(16))) static const __m128i xmmword_5420 = {11, 20, 0, 0};




/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 JUMPOUT(0);
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


/* Function: main @ 0x2760 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: signal_handler @ 0x2880 */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: thread_sum @ 0x28A0 */
void * thread_sum(void *arg)
{
 signed int v1; // edx
 signed int v2; // ecx
 unsigned int v3; // r8d
 __m128i v4; // xmm1
 int v5; // eax
 __m128i si128; // xmm3
 __m128i v7; // xmm0
 __m128i v8; // xmm2
 __m128i v9; // xmm1
 int v10; // eax
 int v11; // edx

 v1 = *(unsigned int *)arg;
 v2 = *((unsigned int *)arg + 1);
 *((unsigned int *)arg + 2) = 0;
 if ( v1 <= v2 )
 {
 v3 = v2 - v1 + 1;
 if ( (unsigned int)(v2 - v1) <= 9 )
 {
 v10 = 0;
 }
 else
 {
 v4 = _mm_setzero_si128();
 v5 = 0;
 si128 = _mm_load_si128((const __m128i *)&xmmword_53D0);
 v7 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v1), 0), (__m128i)xmmword_53C0);
 do
 {
 v8 = v7;
 ++v5;
 v7 = _mm_add_epi32(v7, si128);
 v4 = _mm_add_epi32(v4, v8);
 }
 while ( v3 >> 2 != v5 );
 v9 = _mm_add_epi32(v4, _mm_srli_si128(v4, 8));
 v1 += v3 & 0xFFFFFFFC;
 v10 = _mm_cvtsi128_si32(_mm_add_epi32(v9, _mm_srli_si128(v9, 4)));
 if ( v3 == (v3 & 0xFFFFFFFC) )
 {
LABEL_16:
 *((unsigned int *)arg + 2) = v10;
 return 0;
 }
 }
 v10 += v1;
 if ( v2 >= v1 + 1 )
 {
 v10 += v1 + 1;
 if ( v2 >= v1 + 2 )
 {
 v10 += v1 + 2;
 if ( v2 >= v1 + 3 )
 {
 v10 += v1 + 3;
 if ( v2 >= v1 + 4 )
 {
 v10 += v1 + 4;
 if ( v2 >= v1 + 5 )
 {
 v10 += v1 + 5;
 if ( v2 >= v1 + 6 )
 {
 v10 += v1 + 6;
 if ( v2 >= v1 + 7 )
 {
 v10 += v1 + 7;
 if ( v2 >= v1 + 8 )
 {
 v10 += v1 + 8;
 v11 = v1 + 9;
 if ( v2 >= v11 )
 v10 += v11;
 }
 }
 }
 }
 }
 }
 }
 }
 goto LABEL_16;
 }
 return 0;
}


/* Function: thread_compute @ 0x29A0 */
void * thread_compute(void *arg)
{
 int v1; // ebx
 void *result; // rax

 v1 = *(unsigned int *)arg * *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v1;
 return result;
}


/* Function: thread_increment @ 0x29C0 */
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
 ++v2;
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 }
 while ( v1 != v2 );
 }
 return 0;
}


/* Function: consumer_thread @ 0x2A20 */
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


/* Function: producer_thread @ 0x2A90 */
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


/* Function: thread_atomic_increment @ 0x2AE0 */
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
 __sync_fetch_and_add(&atomic_counter, 1);
 _InterlockedCompareExchange(&atomic_counter, v2 + 1000, v2);
 ++v2;
 }
 while ( v1 != v2 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x2B20 */
void * thread_atomic_load_store(void *arg)
{
 _InterlockedExchange(&atomic_counter, atomic_counter + 100);
 return 0;
}


/* Function: thread_tls_test @ 0x2B40 */
void * thread_tls_test(void *arg)
{
 unsigned int v2; // ebx
 char *v3; // rdi
 void *result; // rax
 __m128i v4; // xmm0

 v2 = __readfsdword(0xFFFFFFDC);
 v3 = (char *)(__readfsqword(0) - 32);
 __writefsdword(0xFFFFFFDC, v2 + 50);
 strncpy(v3, (const char *)arg, 0x1Fu);
 result = malloc(8u);
 v4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), _mm_cvtsi32_si128(v2 + 50));
 *(unsigned long long *)result = ((unsigned long long*)&v4)[0];
 return result;
}


/* Function: param_fork_exec_0 @ 0x2BA0 */
int param_fork_exec_0(const char *prog, const char *arg)
{
 execl(prog, prog, arg, 0);
 _exit(127);
}


/* Function: param_thread_local_storage_0 @ 0x2BC0 */
long long param_thread_local_storage_0(int thread_count)
{
 pthread_t *v1; // r12
 void **v2; // rax
 void **v3; // rbp
 long long i; // rbx
 void *v5; // rax
 int v6; // r9d
 pthread_t *v7; // r15
 long long j; // r13
 int v9; // ebx
 int v10; // r14d
 long long k; // r13
 void *v12; // rdi
 void **v14; // rbx
 long long v15; // r13
 void *v16; // rdi
 void *ret[9]; // [rsp+0h] [rbp-48h] BYREF

 ret[1] = (void *)__readfsqword(0x28u);
 v1 = (pthread_t *)malloc(0x20u);
 v2 = (void **)malloc(0x20u);
 if ( !v1 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 if ( !v2 )
 return 0xFFFFFFFFLL;
 for ( i = 0; i != 4; ++i )
 {
 v5 = malloc(0x10u);
 v6 = i;
 v3[i] = v5;
 __snprintf_chk(v5, 16, 1, 16, "Thread-%d", v6);
 }
 v7 = v1;
 for ( j = 0; j != 4; ++j )
 {
 v9 = pthread_create(v7, 0, thread_tls_test, v3[j]);
 if ( v9 )
 {
 v14 = v3;
 v15 = (long long)&v3[j + 1];
 do
 {
 v16 = *v14++;
 free(v16);
 }
 while ( (void **)v15 != v14 );
 free(v3);
 free(v1);
 return 4294967294LL;
 }
 ++v7;
 }
 v10 = 0;
 for ( k = 0; k != 4; ++k )
 {
 pthread_join(v1[k], ret);
 v9 += *(unsigned int *)ret[0];
 v10 += *((unsigned int *)ret[0] + 1);
 free(ret[0]);
 v12 = v3[k];
 free(v12);
 }
 free(v3);
 free(v1);
 if ( v9 == 400 && v10 == 600 )
 return 42;
 else
 return 4294967293LL;
}


/* Function: param_atomic_ops_0 @ 0x2D60 */
long long param_atomic_ops_0(int thread_count, int iterations)
{
 pthread_t *v2; // rax
 pthread_t *v3; // r15
 pthread_t *v4; // rbp
 pthread_t *v5; // r12
 pthread_t *v6; // rbx
 pthread_t v7; // rdi
 int v8; // ebx
 long long result; // rax
 int iterationsa; // [rsp+Ch] [rbp-4Ch] BYREF
 pthread_t load_store_tid[9]; // [rsp+10h] [rbp-48h] BYREF

 load_store_tid[1] = __readfsqword(0x28u);
 iterationsa = 500;
 v2 = (pthread_t *)malloc(0x20u);
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 _InterlockedExchange(&atomic_counter, 0);
 v4 = v2;
 v5 = v2 + 4;
 v6 = v2;
 do
 {
 if ( pthread_create(v6, 0, thread_atomic_increment, &iterationsa) )
 {
 free(v3);
 return 4294967294LL;
 }
 ++v6;
 }
 while ( v6 != v5 );
 if ( !pthread_create(load_store_tid, 0, thread_atomic_load_store, 0) )
 pthread_join(load_store_tid[0], 0);
 do
 {
 v7 = *v4++;
 pthread_join(v7, 0);
 }
 while ( v4 != v5 );
 v8 = atomic_counter;
 free(v3);
 result = 42;
 if ( v8 <= 0 )
 return 4294967293LL;
 return result;
}


/* Function: param_mutex_lock_0 @ 0x2E80 */
long long param_mutex_lock_0(int thread_count, int iterations_per_thread)
{
 pthread_t *v2; // rax
 pthread_t *v3; // r15
 pthread_t *v4; // rbp
 pthread_t *v5; // r12
 pthread_t *v6; // rbx
 pthread_t v7; // rdi
 long long result; // rax
 int iterations_per_threada; // [rsp+4h] [rbp-44h] BYREF
 unsigned long long v10; // [rsp+8h] [rbp-40h]

 v10 = __readfsqword(0x28u);
 iterations_per_threada = 1000;
 v2 = (pthread_t *)malloc(0x20u);
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 v4 = v2;
 v5 = v2 + 4;
 v6 = v2;
 shared_counter = 0;
 do
 {
 if ( pthread_create(v6, 0, thread_increment, &iterations_per_threada) )
 {
 free(v3);
 return 4294967294LL;
 }
 ++v6;
 }
 while ( v6 != v5 );
 do
 {
 v7 = *v4++;
 pthread_join(v7, 0);
 }
 while ( v4 != v5 );
 free(v3);
 result = 42;
 if ( 4 * iterations_per_threada != shared_counter )
 return 4294967293LL;
 return result;
}


/* Function: param_strcpy @ 0x2F80 */
int param_strcpy(char *dst, const char *src)
{
 return (unsigned int)stpcpy(dst, src) - (unsigned int)dst;
}


/* Function: call_strcpy @ 0x2FA0 */
int call_strcpy()
{
 return 8;
}


/* Function: param_strcmp @ 0x2FB0 */
int param_strcmp(const char *s1, const char *s2)
{
 int v2; // r8d
 int result; // eax

 v2 = strcmp(s1, s2);
 result = -(v2 != 0);
 if ( v2 > 0 )
 return 1;
 return result;
}


/* Function: call_strcmp @ 0x2FE0 */
int call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x2FF0 */
int param_strlen(const char *str)
{
 return strlen(str);
}


/* Function: call_strlen @ 0x3010 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x3020 */
int param_memcpy(void *dst, const void *src, size_t n)
{
 int v3; // ebx

 v3 = n;
 memcpy(dst, src, n);
 return v3;
}


/* Function: call_memcpy @ 0x3040 */
int call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x3050 */
int param_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // r8d
 int result; // eax

 v3 = memcmp(p1, p2, n);
 result = -(v3 != 0);
 if ( v3 > 0 )
 return 1;
 return result;
}


/* Function: call_memcmp @ 0x3080 */
int call_memcmp()
{
 int v0; // eax
 int v1; // ebx
 int v2; // r8d
 int v3; // eax
 int arr1[3]; // [rsp+8h] [rbp-50h] BYREF
 int arr2[3]; // [rsp+18h] [rbp-40h] BYREF
 int arr3[3]; // [rsp+28h] [rbp-30h] BYREF
 unsigned long long v8; // [rsp+38h] [rbp-20h]

 v8 = __readfsqword(0x28u);
 arr1[2] = 3;
 *(unsigned long long *)arr1 = 0x200000001LL;
 *(unsigned long long *)arr2 = 0x200000001LL;
 arr2[2] = 4;
 *(unsigned long long *)arr3 = 0x200000001LL;
 arr3[2] = 3;
 v0 = memcmp(arr1, arr2, 0xCu);
 v1 = -(v0 != 0);
 if ( v0 > 0 )
 v1 = 1;
 v2 = memcmp(arr1, arr3, 0xCu);
 v3 = -(v2 != 0);
 if ( v2 > 0 )
 v3 = 1;
 return v1 + v3;
}


/* Function: param_printf @ 0x3140 */
int param_printf(int x, const char *name)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x3160 */
int call_printf()
{
 return __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x3190 */
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


/* Function: call_scanf @ 0x31F0 */
int call_scanf()
{
 int v1; // [rsp+0h] [rbp-18h] BYREF
 int v2; // [rsp+4h] [rbp-14h] BYREF
 unsigned long long v3; // [rsp+8h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 if ( (unsigned int)__isoc99_sscanf("123,456", "%d,%d", &v1, &v2) == 2 )
 return v1 + v2;
 else
 return -1;
}


/* Function: param_fopen_fclose @ 0x3260 */
int param_fopen_fclose(const char *filename)
{
 FILE *v1; // rax
 FILE *v2; // rbp
 int v3; // r12d

 v1 = fopen(filename, "r");
 if ( !v1 )
 return -1;
 v2 = v1;
 v3 = fileno(v1);
 fclose(v2);
 return v3;
}


/* Function: call_fopen_fclose @ 0x32B0 */
int call_fopen_fclose()
{
 FILE *v0; // rax
 FILE *v1; // rbp
 int v2; // ebx
 int result; // eax

 v0 = fopen("/etc/passwd", "r");
 if ( !v0 )
 return -1;
 v1 = v0;
 v2 = fileno(v0);
 fclose(v1);
 result = 42;
 if ( v2 < 0 )
 return -1;
 return result;
}


/* Function: param_fread_fwrite @ 0x3310 */
int param_fread_fwrite(const char *tmpfile)
{
 FILE *v2; // rax
 FILE *v3; // rbp
 FILE *v4; // rdi
 size_t v5; // rbx
 int result; // eax
 char read_buffer[32]; // [rsp+0h] [rbp-48h] BYREF
 unsigned long long v8; // [rsp+28h] [rbp-20h]

 v8 = __readfsqword(0x28u);
 v2 = fopen(tmpfile, "w+");
 if ( !v2 )
 return -1;
 v3 = v2;
 v4 = v2;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
 {
 rewind(v4);
 v5 = fread(read_buffer, 1u, 0x12u, v3);
 read_buffer[v5] = 0;
 fclose(v3);
 unlink(tmpfile);
 if ( v5 != 18 )
 return -3;
 if ( *(unsigned long long *)read_buffer ^ 0x68636E65426E6942LL | *(unsigned long long *)&read_buffer[8] ^ 0x6144207473655420LL )
 return -3;
 if ( *(unsigned short *)&read_buffer[16] != 24948 )
 return -3;
 result = 42;
 if ( read_buffer[18] )
 return -3;
 }
 else
 {
 fclose(v4);
 return -2;
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x3420 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x3430 */
int param_malloc_free(size_t size)
{
 size_t v1; // rbp
 __m128i *v3; // rax
 __m128i *v4; // rdi
 __m128i si128; // xmm2
 __m128i v6; // xmm4
 __m128i v7; // xmm3
 __m128i *v8; // rdx
 __m128 v9; // xmm1
 __m128i v10; // xmm1
 size_t v11; // rax
 long long v12; // rcx
 int v13; // edx
 size_t v14; // rax
 int v15; // r12d

 v1 = size;
 v3 = (__m128i *)malloc(4 * size);
 if ( !v3 )
 return -1;
 v4 = v3;
 if ( size )
 {
 if ( size - 1 <= 2 )
 {
 v11 = 0;
 goto LABEL_7;
 }
 si128 = _mm_load_si128((const __m128i *)&xmmword_53E0);
 v6 = _mm_load_si128((const __m128i *)&xmmword_53F0);
 v7 = _mm_load_si128((const __m128i *)&xmmword_5400);
 v8 = &v3[size >> 2];
 do
 {
 v9 = (__m128)si128;
 ++v3;
 si128 = _mm_add_epi64(si128, v6);
 v10 = (__m128i)_mm_shuffle_ps(v9, (__m128)_mm_add_epi64((__m128i)v9, v7), 136);
 v3[-1] = _mm_slli_epi32(_mm_add_epi32(_mm_slli_epi32(v10, 2u), v10), 1u);
 }
 while ( v8 != v3 );
 v11 = size & 0xFFFFFFFFFFFFFFFCLL;
 if ( (size & 3) != 0 )
 {
LABEL_7:
 v12 = v11;
 ((int*)v4)[v11] = 10 * v11;
 v13 = v11 + 1;
 if ( size > v11 + 1 )
 {
 v14 = v11 + 2;
 ((int*)v4)[v12 + 1] = 10 * v13;
 if ( size > v14 )
 ((int*)v4)[v12 + 2] = 10 * v14;
 }
 }
 }
 v15 = ((int*)v4)[v1 - 1] + ((int*)v4)[0];
 free(v4);
 return v15;
}


/* Function: call_malloc_free @ 0x3540 */
int call_malloc_free()
{
 void *v0; // rax

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 free(v0);
 return 90;
}


/* Function: param_memset @ 0x3570 */
int param_memset(void *buffer, size_t size)
{
 const __m128i *v2; // rax
 const __m128i *v3; // rcx
 __m128i v4; // xmm0
 const __m128i *v5; // rdx
 __m128i v6; // xmm1
 __m128i v7; // xmm5
 __m128i v8; // xmm2
 size_t v9; // rdx
 __m128i v10; // xmm0
 int result; // eax

 v2 = (const __m128i *)memset(buffer, 0, size);
 if ( !size )
 return 0;
 v3 = v2;
 if ( size - 1 <= 0xE )
 {
 v9 = 0;
 result = 0;
 }
 else
 {
 v4 = _mm_setzero_si128();
 v5 = (const __m128i *)((char *)v2 + (size & 0xFFFFFFFFFFFFFFF0LL));
 do
 {
 v6 = _mm_loadu_si128(v2++);
 v7 = _mm_unpacklo_epi8(v6, _mm_setzero_si128());
 v8 = _mm_unpackhi_epi8(v6, _mm_setzero_si128());
 v4 = _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(
 _mm_add_epi32(v4, _mm_unpacklo_epi16(v7, _mm_setzero_si128())),
 _mm_unpackhi_epi16(v7, _mm_setzero_si128())),
 _mm_unpacklo_epi16(v8, _mm_setzero_si128())),
 _mm_unpackhi_epi16(v8, _mm_setzero_si128()));
 }
 while ( v2 != v5 );
 v9 = size & 0xFFFFFFFFFFFFFFF0LL;
 v10 = _mm_add_epi32(v4, _mm_srli_si128(v4, 8));
 result = _mm_cvtsi128_si32(_mm_add_epi32(v10, _mm_srli_si128(v10, 4)));
 if ( (size & 0xF) == 0 )
 return result;
 }
 result += ((unsigned char*)v3)[v9];
 if ( size > v9 + 1 )
 {
 result += ((unsigned char*)v3)[v9 + 1];
 if ( size > v9 + 2 )
 {
 result += ((unsigned char*)v3)[v9 + 2];
 if ( size > v9 + 3 )
 {
 result += ((unsigned char*)v3)[v9 + 3];
 if ( size > v9 + 4 )
 {
 result += ((unsigned char*)v3)[v9 + 4];
 if ( size > v9 + 5 )
 {
 result += ((unsigned char*)v3)[v9 + 5];
 if ( size > v9 + 6 )
 {
 result += ((unsigned char*)v3)[v9 + 6];
 if ( size > v9 + 7 )
 {
 result += ((unsigned char*)v3)[v9 + 7];
 if ( size > v9 + 8 )
 {
 result += ((unsigned char*)v3)[v9 + 8];
 if ( size > v9 + 9 )
 {
 result += ((unsigned char*)v3)[v9 + 9];
 if ( size > v9 + 10 )
 {
 result += ((unsigned char*)v3)[v9 + 10];
 if ( size > v9 + 11 )
 {
 result += ((unsigned char*)v3)[v9 + 11];
 if ( size > v9 + 12 )
 {
 result += ((unsigned char*)v3)[v9 + 12];
 if ( size > v9 + 13 )
 {
 result += ((unsigned char*)v3)[v9 + 13];
 if ( size > v9 + 14 )
 result += ((unsigned char*)v3)[v9 + 14];
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: call_memset @ 0x3740 */
int call_memset()
{
 return 0;
}


/* Function: param_strchr_strstr @ 0x3750 */
int param_strchr_strstr(const char *str, char ch_0, const char *substr)
{
 int v4; // r12d
 char *v5; // rax
 int v6; // ebp
 char *v7; // rax

 v4 = -1;
 v5 = strchr(str, ch_0);
 v6 = (unsigned int)v5 - (unsigned int)str;
 if ( !v5 )
 v6 = -1;
 v7 = strstr(str, substr);
 if ( v7 )
 v4 = (unsigned int)v7 - (unsigned int)str;
 return v6 + v4;
}


/* Function: call_strchr_strstr @ 0x37B0 */
int call_strchr_strstr()
{
 return 15;
}


/* Global string constants for test functions */
static const char *aLibL101D = "Lib L101: %d\n";
static const char *aLibL102D = "Lib L102: %d\n";
static const char *aLibL103D = "Lib L103: %d\n";
static const char *aLibL104D = "Lib L104: %d\n";
static const char *aLibL105D = "Lib L105: %d\n";
static const char *aLibL106D = "Lib L106: %d\n";
static const char *aLibL107D = "Lib L107: %lld\n";
static const char *aLibL108D = "Lib L108: %lld\n";
static const char *aLibL109D = "Lib L109: %d\n";
static const char *aLibL110D = "Lib L110: %lld\n";
static const char *aLibL111D = "Lib L111: %d\n";
static const char *aLibL112D = "Lib L112: %d\n";
static const char *asc_51E5 = "System Calls Test\n";
static const char *aSysL301D = "Sys L301: %lld\n";
static const char *aSysL302D = "Sys L302: %lld\n";
static const char *aSysL303D = "Sys L303: %lld\n";
static const char *aSysL304D = "Sys L304: %d\n";
static const char *aSysL305D = "Sys L305: %d\n";
static const char *aSysL306D = "Sys L306: %lld\n";
static const char *aSysL307D = "Sys L307: %lld\n";
static const char *asc_52C4 = "Thread Concurrency Test\n";
static const char *aThrL301D = "Thr L301: %d\n";
static const char *aThrL302D = "Thr L302: %d\n";
static const char *aThrL303D = "Thr L303: %d\n";
static const char *aThrL304D = "Thr L304: %d\n";
static const char *aThrL305D = "Thr L305: %d\n";
static const char *aThrL306D = "Thr L306: %lld\n";

/* Function: test_standard_library_functions @ 0x37C0 */
void test_standard_library_functions()
{
 int v0; // eax
 int v1; // ebx
 int v2; // eax
 int v3; // edx
 unsigned int v4; // eax
 long long v5; // rdx
 FILE *v6; // rax
 FILE *v7; // rbp
 int v8; // ebx
 long long v9; // rdx
 unsigned int v10; // eax
 void *v11; // rdi
 long long v12; // rdx
 int v13; // [rsp+0h] [rbp-58h] BYREF
 int v14; // [rsp+4h] [rbp-54h] BYREF
 long long s1; // [rsp+8h] [rbp-50h] BYREF
 int v16; // [rsp+10h] [rbp-48h]
 long long s2; // [rsp+18h] [rbp-40h] BYREF
 int v18; // [rsp+20h] [rbp-38h]
 long long v19; // [rsp+28h] [rbp-30h] BYREF
 int v20; // [rsp+30h] [rbp-28h]
 unsigned long long v21; // [rsp+38h] [rbp-20h]
 const char *s = "TestString";

 v21 = __readfsqword(0x28u);
 puts(s);
 __printf_chk(1, aLibL101D, 8);
 __printf_chk(1, aLibL102D, 0);
 __printf_chk(1, aLibL103D, 12);
 __printf_chk(1, aLibL104D, 90);
 v16 = 3;
 s1 = 0x200000001LL;
 s2 = 0x200000001LL;
 v18 = 4;
 v19 = 0x200000001LL;
 v20 = 3;
 v0 = memcmp(&s1, &s2, 0xCu);
 v1 = -(v0 != 0);
 if ( v0 > 0 )
 v1 = 1;
 v2 = memcmp(&s1, &v19, 0xCu);
 v3 = -(v2 != 0);
 if ( v2 > 0 )
 v3 = 1;
 __printf_chk(1, aLibL105D, (unsigned int)(v1 + v3));
 v4 = __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
 __printf_chk(1, aLibL106D, v4);
 if ( (unsigned int)__isoc99_sscanf("123,456", "%d,%d", &v13, &v14) == 2 )
 v5 = (unsigned int)(v13 + v14);
 else
 v5 = 0xFFFFFFFFLL;
 __printf_chk(1, aLibL107D, v5);
 v6 = fopen("/etc/passwd", "r");
 v7 = v6;
 if ( !v6 || (v8 = fileno(v6), fclose(v7), v9 = 42, v8 < 0) )
 v9 = 0xFFFFFFFFLL;
 __printf_chk(1, aLibL108D, v9);
 v10 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1, aLibL109D, v10);
 v11 = malloc(0x28u);
 if ( v11 )
 {
 free(v11);
 v12 = 90;
 }
 else
 {
 v12 = 0xFFFFFFFFLL;
 }
 __printf_chk(1, aLibL110D, v12);
 __printf_chk(1, aLibL111D, 0);
 __printf_chk(1, aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x3A50 */
int param_linux_syscall(const char *pathname)
{
 int v1; // eax
 int v2; // r12d

 v1 = syscall(2, pathname, 0);
 if ( v1 < 0 )
 return -*__errno_location();
 v2 = v1;
 syscall(3, (unsigned int)v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x3AA0 */
int call_linux_syscall()
{
 int v0; // eax
 int result; // eax
 bool v2; // cc

 v0 = syscall(2, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 v2 = *__errno_location() <= 0;
 result = 42;
 if ( !v2 )
 return -1;
 }
 else
 {
 syscall(3, (unsigned int)v0);
 return 42;
 }
 return result;
}


/* Function: param_win32_api @ 0x3B00 */
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


/* Function: call_win32_api @ 0x3B70 */
int call_win32_api()
{
 int result; // eax
 struct stat v1; // [rsp+0h] [rbp-A8h] BYREF
 unsigned long long v2; // [rsp+98h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 if ( stat("/etc/passwd", &v1) < 0 )
 return -1;
 result = 42;
 if ( v1.st_size <= 0 )
 return -2;
 return result;
}


/* Function: param_fork_exec @ 0x3BE0 */
int param_fork_exec(const char *prog, const char *arg)
{
 int v2; // eax
 __pid_t v3; // r8d
 int result; // eax
 int status; // [rsp+4h] [rbp-24h] BYREF
 unsigned long long v6; // [rsp+8h] [rbp-20h]

 v6 = __readfsqword(0x28u);
 v2 = fork();
 if ( v2 < 0 )
 return -1;
 if ( !v2 )
 param_fork_exec_0(prog, arg);
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


/* Function: call_fork_exec @ 0x3C70 */
int call_fork_exec()
{
 int v0; // eax
 int stat_loc; // [rsp+4h] [rbp-14h] BYREF
 unsigned long long v3; // [rsp+8h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 v0 = fork();
 if ( v0 < 0 )
 return -1;
 if ( !v0 )
 param_fork_exec_0("/bin/true", 0);
 if ( waitpid(v0, &stat_loc, 0) < 0 || (stat_loc & 0x7F) != 0 || BYTE1(stat_loc) )
 return -1;
 else
 return 42;
}


/* Function: param_pipe_communication @ 0x3CF0 */
int param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // rax
 int v2; // edi
 long long v3; // rbx
 int result; // eax
 int pipefd[2]; // [rsp+8h] [rbp-40h] BYREF
 char buffer[40]; // [rsp+10h] [rbp-38h] BYREF
 unsigned long long v7; // [rsp+38h] [rbp-10h]

 v7 = __readfsqword(0x28u);
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
 v2 = pipefd[0];
 v3 = v1;
 buffer[v1] = 0;
 close(v2);
 wait(0);
 result = 42;
 if ( v3 <= 0 )
 return -3;
 return result;
}


/* Function: call_pipe_communication @ 0x3DE0 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x3DF0 */
int param_socket_create()
{
 int v0; // eax
 int v1; // ebp
 int opt; // [rsp+Ch] [rbp-2Ch] BYREF
 sockaddr_in addr; // [rsp+10h] [rbp-28h] BYREF
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


/* Function: call_socket_create @ 0x3EF0 */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x3F00 */
int param_shmget_shmat()
{
 int v0; // eax
 int v1; // edi
 int v2; // eax
 int v3; // ebp
 char *v4; // rdi

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
 shmdt(v4);
 shmctl(v3, 0, 0);
 return 12;
}


/* Function: call_shmget_shmat @ 0x3FC0 */
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


/* Function: param_signal_handling @ 0x3FF0 */
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
 if ( !signal_received || signal_number != 14 )
 return -5;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: call_signal_handling @ 0x4130 */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x4140 */
void test_system_calls()
{
 int v0; // eax
 long long v1; // rdx
 long long v2; // rdx
 int v3; // eax
 long long v4; // rdx
 unsigned int v5; // eax
 unsigned int v6; // eax
 int v7; // eax
 long long v8; // rdx
 long long v9; // rdx
 int *v10; // rax
 int stat_loc; // [rsp+Ch] [rbp-ACh] BYREF
 struct stat buf; // [rsp+10h] [rbp-A8h] BYREF
 unsigned long long v13; // [rsp+A8h] [rbp-10h]

 v13 = __readfsqword(0x28u);
 puts(asc_51E5);
 v0 = syscall(2, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 v10 = __errno_location();
 v1 = 42;
 if ( *v10 > 0 )
 v1 = 0xFFFFFFFFLL;
 }
 else
 {
 syscall(3, (unsigned int)v0);
 v1 = 42;
 }
 __printf_chk(1, aSysL301D, v1);
 if ( stat("/etc/passwd", &buf) < 0 )
 {
 v2 = 0xFFFFFFFFLL;
 }
 else
 {
 v2 = 42;
 if ( buf.st_size <= 0 )
 v2 = 4294967294LL;
 }
 __printf_chk(1, aSysL302D, v2);
 v3 = fork();
 if ( v3 < 0 )
 goto LABEL_10;
 if ( !v3 )
 param_fork_exec_0("/bin/true", 0);
 if ( waitpid(v3, &stat_loc, 0) < 0 || (stat_loc & 0x7F) != 0 || BYTE1(stat_loc) )
LABEL_10:
 v4 = 0xFFFFFFFFLL;
 else
 v4 = 42;
 __printf_chk(1, aSysL303D, v4);
 v5 = param_pipe_communication();
 __printf_chk(1, aSysL304D, v5);
 v6 = param_socket_create();
 __printf_chk(1, aSysL305D, v6);
 v7 = param_shmget_shmat();
 v8 = 42;
 if ( v7 <= 0 )
 v8 = 0xFFFFFFFFLL;
 __printf_chk(1, aSysL306D, v8);
 v9 = (unsigned int)param_signal_handling();
 __printf_chk(1, aSysL307D, v9);
}


/* Function: param_pthread_create @ 0x4320 */
int param_pthread_create(int x)
{
 int v1; // r12d
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


/* Function: call_pthread_create @ 0x43A0 */
int call_pthread_create()
{
 int v0; // r12d
 int arg; // [rsp+4h] [rbp-24h] BYREF
 pthread_t newthread; // [rsp+8h] [rbp-20h] BYREF
 void *thread_return[3]; // [rsp+10h] [rbp-18h] BYREF

 thread_return[1] = (void *)__readfsqword(0x28u);
 arg = 7;
 if ( pthread_create(&newthread, 0, thread_compute, &arg) )
 return -1;
 pthread_join(newthread, thread_return);
 v0 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 return v0;
}


/* Function: param_pthread_join @ 0x4430 */
int param_pthread_join()
{
 ThreadData *v0; // rbx
 pthread_t *v1; // rbp
 int v2; // r12d
 long long v3; // rbx
 long long v4; // rax
 pthread_t tids[4]; // [rsp+0h] [rbp-88h] BYREF
 ThreadData data[3]; // [rsp+20h] [rbp-68h] BYREF
 char v8; // [rsp+44h] [rbp-44h] BYREF
 unsigned long long v9; // [rsp+48h] [rbp-40h]

 v9 = __readfsqword(0x28u);
 v0 = data;
 *(__m128i *)&data[0].start = _mm_load_si128((const __m128i *)&xmmword_5410);
 v1 = tids;
 data[2].result = 0;
 *(__m128i *)&data[1].end = _mm_load_si128((const __m128i *)&xmmword_5420);
 do
 {
 v2 = pthread_create(v1, 0, thread_sum, v0);
 if ( v2 )
 return -1;
 ++v0;
 ++v1;
 }
 while ( &v8 != (char *)v0 );
 v3 = 0;
 while ( !pthread_join(tids[v3], 0) )
 {
 v4 = v3++;
 v2 += data[v4].result;
 if ( v3 == 3 )
 return v2;
 }
 return -2;
}


/* Function: call_pthread_join @ 0x4520 */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x4530 */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 char *v2; // rax
 void *v3; // r14
 pthread_t *v4; // rbx
 pthread_t *v5; // rbp
 pthread_t *v6; // r15
 int result; // eax
 pthread_t v8; // rdi
 int arg[15]; // [rsp+Ch] [rbp-3Ch] BYREF

 arg[0] = iterations_per_thread;
 v2 = (char *)malloc(8LL * thread_count);
 if ( !v2 )
 return -1;
 shared_counter = 0;
 v3 = v2;
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
 {
 v8 = *v4++;
 pthread_join(v8, 0);
 }
 while ( v4 != v5 );
 }
 free(v3);
 result = 42;
 if ( shared_counter != arg[0] * thread_count )
 return -3;
 return result;
}


/* Function: call_mutex_lock @ 0x4620 */
int call_mutex_lock()
{
 int v0; // edi
 int v1; // esi

 return param_mutex_lock_0(v0, v1);
}


/* Function: param_condition_variable @ 0x4630 */
int param_condition_variable()
{
 int v0; // r12d
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
 v0 = -2;
 pthread_cancel(consumer);
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


/* Function: call_condition_variable @ 0x4700 */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x4710 */
int param_atomic_ops(int thread_count, int iterations)
{
 char *v3; // rax
 void *v4; // rbp
 pthread_t *v5; // rbx
 pthread_t *v6; // r15
 int result; // eax
 long long v8; // rbx
 pthread_t v9; // rdi
 int v10; // ebx
 int arg; // [rsp+Ch] [rbp-4Ch] BYREF
 pthread_t load_store_tid[9]; // [rsp+10h] [rbp-48h] BYREF

 arg = iterations;
 load_store_tid[1] = __readfsqword(0x28u);
 v3 = (char *)malloc(8LL * thread_count);
 if ( !v3 )
 return -1;
 v4 = v3;
 _InterlockedExchange(&atomic_counter, 0);
 if ( thread_count <= 0 )
 {
 if ( !pthread_create(load_store_tid, 0, thread_atomic_load_store, 0) )
 pthread_join(load_store_tid[0], 0);
 }
 else
 {
 v5 = (pthread_t *)v3;
 v6 = (pthread_t *)&v3[8 * thread_count];
 do
 {
 if ( pthread_create(v5, 0, thread_atomic_increment, &arg) )
 {
 free(v4);
 return -2;
 }
 ++v5;
 }
 while ( v5 != v6 );
 if ( !pthread_create(load_store_tid, 0, thread_atomic_load_store, 0) )
 pthread_join(load_store_tid[0], 0);
 v8 = 0;
 do
 {
 v9 = *((unsigned long long *)v4 + v8++);
 pthread_join(v9, 0);
 }
 while ( thread_count > (int)v8 );
 }
 v10 = atomic_counter;
 free(v4);
 result = 42;
 if ( v10 <= 0 )
 return -3;
 return result;
}


/* Function: call_atomic_ops @ 0x4870 */
int call_atomic_ops()
{
 int v0; // edi
 int v1; // esi

 return param_atomic_ops_0(v0, v1);
}


/* Function: param_thread_local_storage @ 0x4880 */
int param_thread_local_storage(int thread_count)
{
 long long v1; // rbx
 void **v2; // rax
 void **v3; // rbp
 long long v4; // r13
 void *v5; // rax
 int v6; // r9d
 pthread_t *v7; // r15
 long long i; // r12
 int v9; // r14d
 void **v10; // rbx
 void *v11; // rdi
 int v13; // r13d
 long long v14; // r15
 void *v15; // rdi
 pthread_t *tids; // [rsp+0h] [rbp-58h]
 void *ret[9]; // [rsp+10h] [rbp-48h] BYREF

 v1 = thread_count;
 ret[1] = (void *)__readfsqword(0x28u);
 tids = (pthread_t *)malloc(8LL * thread_count);
 v2 = (void **)malloc(8LL * thread_count);
 if ( !tids )
 return -1;
 v3 = v2;
 if ( !v2 )
 return -1;
 if ( thread_count <= 0 )
 {
 v13 = 0;
 v9 = 0;
 }
 else
 {
 v4 = 0;
 do
 {
 v5 = malloc(0x10u);
 v6 = v4;
 v3[v4++] = v5;
 __snprintf_chk(v5, 16, 1, 16, "Thread-%d", v6);
 }
 while ( v4 != thread_count );
 v7 = tids;
 for ( i = 0; i != thread_count; ++i )
 {
 v9 = pthread_create(v7, 0, thread_tls_test, v3[i]);
 if ( v9 )
 {
 v10 = v3;
 do
 {
 v11 = *v10++;
 free(v11);
 }
 while ( &v3[i + 1] != v10 );
 free(v3);
 free(tids);
 return -2;
 }
 ++v7;
 }
 v13 = 0;
 v14 = 0;
 do
 {
 pthread_join(tids[v14], ret);
 v9 += *(unsigned int *)ret[0];
 v13 += *((unsigned int *)ret[0] + 1);
 free(ret[0]);
 v15 = v3[v14++];
 free(v15);
 }
 while ( v14 != v1 );
 }
 free(v3);
 free(tids);
 if ( 100 * thread_count == v9 && 150 * thread_count == v13 )
 return 42;
 else
 return -3;
}


/* Function: call_thread_local_storage @ 0x4A60 */
int call_thread_local_storage()
{
 int v0; // edi

 return param_thread_local_storage_0(v0);
}


/* Function: test_thread_concurrency @ 0x4A70 */
void test_thread_concurrency()
{
 unsigned int v0; // r12d
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 long long v5; // rdx
 int arg; // [rsp+4h] [rbp-24h] BYREF
 pthread_t newthread; // [rsp+8h] [rbp-20h] BYREF
 void *thread_return[3]; // [rsp+10h] [rbp-18h] BYREF

 thread_return[1] = (void *)__readfsqword(0x28u);
 puts(asc_52C4);
 arg = 7;
 if ( pthread_create(&newthread, 0, thread_compute, &arg) )
 {
 v0 = -1;
 }
 else
 {
 pthread_join(newthread, thread_return);
 v0 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 }
 __printf_chk(1, aThrL301D, v0);
 v1 = param_pthread_join();
 __printf_chk(1, aThrL302D, v1);
 v2 = param_mutex_lock_0(1, 1000);
 __printf_chk(1, aThrL303D, v2);
 v3 = param_condition_variable();
 __printf_chk(1, aThrL304D, v3);
 v4 = param_atomic_ops_0(1, 500);
 __printf_chk(1, aThrL305D, v4);
 v5 = (unsigned int)param_thread_local_storage_0(1);
 __printf_chk(1, aThrL306D, v5);
}


/* Function: .term_proc @ 0x4BA0 */
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

/* FAILED to decompile: puts @ 0x8188 */

/* FAILED to decompile: fread @ 0x8190 */

/* FAILED to decompile: setsockopt @ 0x8198 */

/* FAILED to decompile: shmdt @ 0x81A0 */

/* FAILED to decompile: write @ 0x81A8 */

/* FAILED to decompile: pthread_cond_wait @ 0x81B0 */

/* FAILED to decompile: fclose @ 0x81B8 */

/* FAILED to decompile: stpcpy @ 0x81C0 */

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

/* Total functions decompiled: 132, failed: 60 */
