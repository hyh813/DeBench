/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* int64_t defined by system headers */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Macro for byte extraction */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Windows atomic intrinsics mapped to GCC builtins */
static inline long _InterlockedAdd(volatile int *ptr, int value)
{
    return __atomic_add_fetch(ptr, value, __ATOMIC_SEQ_CST);
}

static inline long _InterlockedCompareExchange(volatile int *ptr, int exchange, int compare)
{
    __atomic_compare_exchange_n(ptr, &compare, exchange, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
    return compare;
}

static inline long _InterlockedExchange(volatile int *ptr, int value)
{
    return __atomic_exchange_n(ptr, value, __ATOMIC_SEQ_CST);
}

/* x86-64 FS segment register intrinsics for TLS/stack canary access */
static inline unsigned long __readfsqword(unsigned long offset)
{
    unsigned long value;
    __asm__ __volatile__("movq %%fs:%1, %0" : "=r"(value) : "m"(*(const unsigned long *)(offset)));
    return value;
}

static inline unsigned int __readfsdword(unsigned long offset)
{
    unsigned int value;
    __asm__ __volatile__("movl %%fs:%1, %0" : "=r"(value) : "m"(*(const unsigned int *)(offset)));
    return value;
}

static inline void __writefsdword(unsigned long offset, unsigned int value)
{
    __asm__ __volatile__("movl %0, %%fs:%1" : : "r"(value), "m"(*(unsigned int *)(offset)) : "memory");
}

#include <stdio.h>
#include <stdbool.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/6/6_gcc_O1_no_g
 * Processor: pc
 */

/* Global variable declarations */
void (*_gmon_start__)(void);
volatile int signal_received = 0;
int signal_number = 0;
volatile int ready = 0;
volatile int data = 0;
volatile int atomic_counter = 0;
volatile int shared_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* String constant declarations */
const char s[] = "=== Standard Library Tests ===";
const char aLibL101D[] = "LibL1: %d\n";
const char aLibL102D[] = "LibL2: %d\n";
const char aLibL103D[] = "LibL3: %d\n";
const char aLibL104D[] = "LibL4: %d\n";
const char aLibL105D[] = "LibL5: %d\n";
const char aLibL106D[] = "LibL6: %d\n";
const char aLibL107D[] = "LibL7: %d\n";
const char aLibL108D[] = "LibL8: %d\n";
const char aLibL109D[] = "LibL9: %d\n";
const char aLibL110D[] = "LibL10: %d\n";
const char aLibL111D[] = "LibL11: %d\n";
const char aLibL112D[] = "LibL12: %d\n";
const char asc_520D[] = "=== System Call Tests ===";
const char aSysL301D[] = "SysL1: %d\n";
const char aSysL302D[] = "SysL2: %d\n";
const char aSysL303D[] = "SysL3: %d\n";
const char aSysL304D[] = "SysL4: %d\n";
const char aSysL305D[] = "SysL5: %d\n";
const char aSysL306D[] = "SysL6: %d\n";
const char aSysL307D[] = "SysL7: %d\n";
const char asc_52F6[] = "=== Thread Concurrency Tests ===";
const char aThrL301D[] = "ThrL1: %d\n";
const char aThrL302D[] = "ThrL2: %d\n";
const char aThrL303D[] = "ThrL3: %d\n";
const char aThrL304D[] = "ThrL4: %d\n";
const char aThrL305D[] = "ThrL5: %d\n";
const char aThrL306D[] = "ThrL6: %d\n";

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 _gmon_start__();
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 return;
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
void signal_handler(int a1)
{
 signal_received = 1;
 signal_number = a1;
}


/* Function: thread_sum @ 0x285E */
void * thread_sum(int *a1)
{
 int v1; // eax
 int v2; // ecx
 int v3; // ecx
 int v4; // edx

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


/* Function: thread_compute @ 0x288C */
unsigned int * thread_compute(int *a1)
{
 int v1; // ebx
 unsigned int *result; // rax

 v1 = *a1;
 result = malloc(4u);
 *result = v1 * v1;
 return result;
}


/* Function: thread_increment @ 0x28A4 */
void * thread_increment(int *a1)
{
 int v1; // r12d
 int v2; // ebx

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


/* Function: consumer_thread @ 0x28FB */
unsigned int * consumer_thread(void *a1)
{
 int v1; // ebx
 unsigned int *result; // rax

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: producer_thread @ 0x2961 */
void * producer_thread(void *a1)
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
void * thread_atomic_increment(int *a1)
{
 int v1; // esi
 signed int v2; // edx

 v1 = *a1;
 if ( *a1 > 0 )
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
void * thread_atomic_load_store(void *a1)
{
 _InterlockedExchange(&atomic_counter, atomic_counter + 100);
 return 0;
}


/* Function: thread_tls_test @ 0x29FB */
unsigned int * thread_tls_test(const char *a1)
{
 unsigned int v1; // ebp
 unsigned int *result; // rax

 v1 = __readfsdword(0xFFFFFFDC);
 __writefsdword(0xFFFFFFDC, v1 + 50);
 strncpy((char *)(__readfsqword(0) - 32), a1, 0x1Fu);
 result = malloc(8u);
 *result = v1;
 result[1] = v1 + 50;
 return result;
}


/* Function: param_strcpy @ 0x2A4B */
size_t param_strcpy(char *s, const char *a2)
{
 strcpy(s, a2);
 return strlen(s);
}


/* Function: call_strcpy @ 0x2A62 */
size_t call_strcpy()
{
 char v1[40]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v2; // [rsp+28h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 return param_strcpy(v1, "HelloLib");
}


/* Function: param_strcmp @ 0x2AA3 */
long long param_strcmp(const char *a1, const char *a2)
{
 int v2; // eax
 unsigned int v3; // edx
 bool v4; // cc
 long long result; // rax

 v2 = strcmp(a1, a2);
 v3 = v2 >> 31;
 v4 = v2 <= 0;
 result = 1;
 if ( v4 )
 return v3;
 return result;
}


/* Function: call_strcmp @ 0x2AC0 */
long long call_strcmp()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 return v1 + v0 + (unsigned int)param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x2B0E */
size_t param_strlen(const char *a1)
{
 return strlen(a1);
}


/* Function: call_strlen @ 0x2B20 */
long long call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x2B2A */
long long param_memcpy(void *a1, const void *a2, size_t a3)
{
 unsigned int v3; // ebx

 v3 = a3;
 memcpy(a1, a2, a3);
 return v3;
}


/* Function: call_memcpy @ 0x2B3B */
long long call_memcpy()
{
 unsigned int v1[8]; // [rsp+0h] [rbp-48h] BYREF
 long long v2; // [rsp+20h] [rbp-28h] BYREF
 long long v3; // [rsp+28h] [rbp-20h]
 int v4; // [rsp+30h] [rbp-18h]
 unsigned long long v5; // [rsp+38h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v1[0] = 10;
 v1[1] = 20;
 v1[2] = 30;
 v1[3] = 40;
 v1[4] = 50;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 param_memcpy(&v2, v1, 0x14u);
 return (unsigned int)(v4 + v2 + v3);
}


/* Function: param_memcmp @ 0x2BCC */
long long param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v3; // eax
 unsigned int v4; // edx
 bool v5; // cc
 long long result; // rax

 v3 = memcmp(a1, a2, a3);
 v4 = v3 >> 31;
 v5 = v3 <= 0;
 result = 1;
 if ( v5 )
 return v4;
 return result;
}


/* Function: call_memcmp @ 0x2BE9 */
long long call_memcmp()
{
 int v0; // ebx
 unsigned int v2[3]; // [rsp+4h] [rbp-44h] BYREF
 unsigned int v3[3]; // [rsp+10h] [rbp-38h] BYREF
 unsigned int v4[3]; // [rsp+1Ch] [rbp-2Ch] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-20h]

 v5 = __readfsqword(0x28u);
 v2[0] = 1;
 v2[1] = 2;
 v2[2] = 3;
 v3[0] = 1;
 v3[1] = 2;
 v3[2] = 4;
 v4[0] = 1;
 v4[1] = 2;
 v4[2] = 3;
 v0 = param_memcmp(v2, v3, 0xCu);
 return v0 + (unsigned int)param_memcmp(v2, v4, 0xCu);
}


/* Function: param_printf @ 0x2C94 */
long long param_printf(int a1, const char *a2)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x2CBC */
long long call_printf()
{
 return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x2CDA */
long long param_scanf(long long a1)
{
 int v2; // [rsp+0h] [rbp-18h] BYREF
 int v3; // [rsp+4h] [rbp-14h] BYREF
 unsigned long long v4; // [rsp+8h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 if ( (unsigned int)__isoc99_sscanf(a1, "%d,%d", &v2, &v3) == 2 )
 return (unsigned int)(v2 + v3);
 else
 return 0xFFFFFFFFLL;
}


/* Function: call_scanf @ 0x2D33 */
long long call_scanf()
{
 return param_scanf((long long)"123,456");
}


/* Function: param_fopen_fclose @ 0x2D4C */
long long param_fopen_fclose(const char *a1)
{
 FILE *v1; // rax
 FILE *v2; // rbx
 unsigned int v3; // ebp

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


/* Function: call_fopen_fclose @ 0x2D8C */
long long call_fopen_fclose()
{
 return ((int)param_fopen_fclose("/etc/passwd") >> 31) | 0x2Au;
}


/* Function: param_fread_fwrite @ 0x2DAB */
long long param_fread_fwrite(char *name)
{
 FILE *v1; // rax
 FILE *v2; // rbx
 size_t v3; // rbp
 char v5[40]; // [rsp+0h] [rbp-48h] BYREF
 unsigned long long v6; // [rsp+28h] [rbp-20h]

 v6 = __readfsqword(0x28u);
 v1 = fopen(name, "w+");
 if ( !v1 )
 return 0xFFFFFFFFLL;
 v2 = v1;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v2);
 v3 = fread(v5, 1u, 0x12u, v2);
 v5[v3] = 0;
 fclose(v2);
 unlink(name);
 if ( v3 == 18 )
 return strcmp(v5, "BinBench Test Data") == 0 ? 42 : -3;
 else
 return 4294967293LL;
 }
 else
 {
 fclose(v2);
 return 4294967294LL;
 }
}


/* Function: call_fread_fwrite @ 0x2E90 */
long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2EA9 */
long long param_malloc_free(long long a1)
{
 long long v1; // rbx
 unsigned int *v2; // rax
 unsigned int *v3; // rdx
 int v4; // ecx
 unsigned int v5; // ebx

 v1 = a1;
 v2 = malloc(4 * a1);
 if ( v2 )
 {
 if ( a1 )
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
 }
 else
 {
 return (unsigned int)-1;
 }
 return v5;
}


/* Function: call_malloc_free @ 0x2F0A */
long long call_malloc_free()
{
 return param_malloc_free(10);
}


/* Function: param_memset @ 0x2F21 */
long long param_memset(char *a1, size_t a2)
{
 unsigned char *v2; // rax
 unsigned char *v3; // rdi
 unsigned int v4; // edx

 v2 = (unsigned char *)memset(a1, 0, a2);
 if ( a2 )
 {
 v3 = (unsigned char *)&a1[a2];
 v4 = 0;
 do
 v4 += *v2++;
 while ( v2 != v3 );
 }
 else
 {
 return 0;
 }
 return v4;
}


/* Function: call_memset @ 0x2F6A */
long long call_memset()
{
 unsigned long long *v0; // rax
 unsigned int v2[10]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v3; // [rsp+28h] [rbp-10h] BYREF

 v3 = __readfsqword(0x28u);
 v0 = (unsigned long long *)v2;
 do
 {
 *(unsigned int *)v0 = 255;
 v0 = (unsigned long long *)((char *)v0 + 4);
 }
 while ( v0 != &v3 );
 param_memset((char *)v2, 0x28u);
 return (unsigned int)(v2[0] + v2[9]);
}


/* Function: param_strchr_strstr @ 0x2FC7 */
long long param_strchr_strstr(char *haystack, char a2, const char *a3)
{
 char *v4; // rax
 int v5; // ebp
 char *v6; // rax
 int v7; // edx
 bool v8; // zf
 int v9; // eax

 v4 = strchr(haystack, a2);
 v5 = -1;
 if ( v4 )
 v5 = (unsigned int)v4 - (unsigned int)haystack;
 v6 = strstr(haystack, a3);
 v7 = (unsigned int)v6 - (unsigned int)haystack;
 v8 = v6 == 0;
 v9 = -1;
 if ( !v8 )
 v9 = v7;
 return (unsigned int)(v5 + v9);
}


/* Function: call_strchr_strstr @ 0x3012 */
long long call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x3037 */
long long test_standard_library_functions()
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
 return __printf_chk(1, aLibL112D, v11);
}


/* Function: param_linux_syscall @ 0x31E8 */
long long param_linux_syscall(long long a1)
{
 int v1; // eax
 unsigned int v2; // ebx

 v1 = syscall(2, a1, 0);
 if ( v1 < 0 )
 {
 return (unsigned int)-*__errno_location();
 }
 else
 {
 v2 = v1;
 syscall(3, (unsigned int)v1);
 }
 return v2;
}


/* Function: call_linux_syscall @ 0x322A */
long long call_linux_syscall()
{
 return ((int)param_linux_syscall((long long)"/etc/passwd") >> 31) | 0x2Au;
}


/* Function: param_win32_api @ 0x3249 */
long long param_win32_api(const char *a1)
{
 long long result; // rax
 struct stat v2; // [rsp+0h] [rbp-A8h] BYREF
 unsigned long long v3; // [rsp+98h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 if ( stat(a1, &v2) < 0 )
 return 0xFFFFFFFFLL;
 result = 42;
 if ( v2.st_size <= 0 )
 return 4294967294LL;
 return result;
}


/* Function: call_win32_api @ 0x32AD */
long long call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x32C6 */
long long param_fork_exec(char *arg, long long a2)
{
 int v2; // eax
 __pid_t v3; // edx
 long long result; // rax
 int stat_loc; // [rsp+4h] [rbp-24h] BYREF
 unsigned long long v6; // [rsp+8h] [rbp-20h]

 v6 = __readfsqword(0x28u);
 v2 = fork();
 if ( v2 < 0 )
 return 0xFFFFFFFFLL;
 if ( !v2 )
 {
 execl(arg, arg, a2, 0);
 _exit(127);
 }
 v3 = waitpid(v2, &stat_loc, 0);
 result = 4294967294LL;
 if ( v3 >= 0 )
 {
 result = BYTE1(stat_loc);
 if ( (stat_loc & 0x7F) != 0 )
 return 4294967293LL;
 }
 return result;
}


/* Function: call_fork_exec @ 0x3364 */
long long call_fork_exec()
{
 return (unsigned int)param_fork_exec("/bin/true", 0) == 0 ? 42 : -1;
}


/* Function: param_pipe_communication @ 0x338D */
long long param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // rbx
 long long result; // rax
 int pipedes[2]; // [rsp+8h] [rbp-40h] BYREF
 unsigned char buf[40]; // [rsp+10h] [rbp-38h] BYREF
 unsigned long long v5; // [rsp+38h] [rbp-10h]

 v5 = __readfsqword(0x28u);
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
 wait(0);
 result = 42;
 if ( v1 <= 0 )
 return 4294967293LL;
 return result;
}


/* Function: call_pipe_communication @ 0x3468 */
long long call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x347A */
long long param_socket_create()
{
 int v0; // eax
 int v1; // ebx
 int optval; // [rsp+Ch] [rbp-2Ch] BYREF
 struct sockaddr addr; // [rsp+10h] [rbp-28h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h]

 v5 = __readfsqword(0x28u);
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


/* Function: call_socket_create @ 0x356F */
long long call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x3581 */
long long param_shmget_shmat()
{
 int v0; // eax
 int v1; // edi
 int v2; // eax
 int v3; // ebp
 char *v4; // rbx
 unsigned int v5; // r12d

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
 if ( v4 == (char *)-1LL )
 {
 return (unsigned int)-3;
 }
 else
 {
 strcpy(v4, "SharedMemory");
 v5 = strlen(v4);
 shmdt(v4);
 shmctl(v3, 0, 0);
 }
 }
 }
 }
 return v5;
}


/* Function: call_shmget_shmat @ 0x365D */
long long call_shmget_shmat()
{
 bool v0; // cc
 long long result; // rax

 v0 = (int)param_shmget_shmat() <= 0;
 result = 42;
 if ( v0 )
 return 0xFFFFFFFFLL;
 return result;
}


/* Function: param_signal_handling @ 0x367E */
long long param_signal_handling()
{
 int v0; // ebx
 int v1; // ebx

 if ( signal(10, signal_handler) == (__sighandler_t)-1LL )
 return 0xFFFFFFFFLL;
 if ( signal(14, signal_handler) == (__sighandler_t)-1LL )
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


/* Function: call_signal_handling @ 0x37B2 */
long long call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x37C4 */
long long test_system_calls()
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
 return __printf_chk(1, aSysL307D, v6);
}


/* Function: param_pthread_create @ 0x38BC */
long long param_pthread_create(int a1)
{
 unsigned int v1; // ebx
 int arg; // [rsp+4h] [rbp-24h] BYREF
 pthread_t newthread; // [rsp+8h] [rbp-20h] BYREF
 void *thread_return[3]; // [rsp+10h] [rbp-18h] BYREF

 thread_return[1] = (void *)__readfsqword(0x28u);
 arg = a1;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 return (unsigned int)-1;
 }
 else
 {
 pthread_join(newthread, thread_return);
 v1 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 }
 return v1;
}


/* Function: call_pthread_create @ 0x3937 */
long long call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: param_pthread_join @ 0x394E */
long long param_pthread_join()
{
 pthread_t *v0; // r12
 char *v1; // rbp
 unsigned int v2; // ebx
 long long v3; // rbp
 pthread_t th[4]; // [rsp+0h] [rbp-78h] BYREF
 unsigned int arg[2]; // [rsp+20h] [rbp-58h] BYREF
 unsigned int v7[7]; // [rsp+28h] [rbp-50h]
 char v8; // [rsp+44h] [rbp-34h] BYREF
 unsigned long long v9; // [rsp+48h] [rbp-30h]

 v9 = __readfsqword(0x28u);
 arg[0] = 1;
 arg[1] = 10;
 v7[0] = 0;
 v7[1] = 11;
 v7[2] = 20;
 v7[3] = 0;
 v7[4] = 21;
 v7[5] = 30;
 v7[6] = 0;
 v0 = th;
 v1 = (char *)arg;
 do
 {
 v2 = pthread_create(v0, 0, (void *(*)(void *))thread_sum, v1);
 if ( v2 )
 return (unsigned int)-1;
 ++v0;
 v1 += 12;
 }
 while ( v1 != &v8 );
 v3 = 0;
 while ( !pthread_join(th[v3], 0) )
 {
 v2 += v7[3 * v3++];
 if ( v3 == 3 )
 return v2;
 }
 return (unsigned int)-2;
}


/* Function: call_pthread_join @ 0x3A51 */
long long call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x3A68 */
long long param_mutex_lock(int a1, int a2)
{
 char *v2; // rax
 void *v3; // r14
 pthread_t *v4; // rbp
 pthread_t *v5; // r12
 pthread_t *v6; // rbx
 long long result; // rax
 unsigned int arg[15]; // [rsp+Ch] [rbp-3Ch] BYREF

 arg[0] = a2;
 v2 = (char *)malloc(8LL * a1);
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 shared_counter = 0;
 if ( a1 > 0 )
 {
 v4 = (pthread_t *)v2;
 v5 = (pthread_t *)&v2[8 * a1];
 v6 = (pthread_t *)v2;
 do
 {
 if ( pthread_create(v6, 0, (void *(*)(void *))thread_increment, arg) )
 {
 free(v3);
 return 4294967294LL;
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
 if ( shared_counter != arg[0] * a1 )
 return 4294967293LL;
 return result;
}


/* Function: call_mutex_lock @ 0x3B3E */
long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x3B5A */
long long param_condition_variable()
{
 unsigned int v0; // ebx
 pthread_t th; // [rsp+0h] [rbp-28h] BYREF
 pthread_t newthread; // [rsp+8h] [rbp-20h] BYREF
 void *thread_return[3]; // [rsp+10h] [rbp-18h] BYREF

 thread_return[1] = (void *)__readfsqword(0x28u);
 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 {
 return (unsigned int)-1;
 }
 else if ( pthread_create(&th, 0, producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return (unsigned int)-2;
 }
 else
 {
 pthread_join(newthread, thread_return);
 pthread_join(th, 0);
 v0 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 }
 return v0;
}


/* Function: call_condition_variable @ 0x3C21 */
long long call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x3C38 */
long long param_atomic_ops(int a1, int a2)
{
 char *v2; // rax
 void *v3; // rbp
 pthread_t *v4; // rbx
 pthread_t *v5; // r14
 long long v6; // rbx
 int v7; // ebx
 long long result; // rax
 int arg; // [rsp+Ch] [rbp-3Ch] BYREF
 pthread_t newthread[7]; // [rsp+10h] [rbp-38h] BYREF

 arg = a2;
 newthread[1] = __readfsqword(0x28u);
 v2 = (char *)malloc(8LL * a1);
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 _InterlockedExchange(&atomic_counter, 0);
 if ( a1 <= 0 )
 {
 if ( !pthread_create(newthread, 0, thread_atomic_load_store, 0) )
 pthread_join(newthread[0], 0);
 }
 else
 {
 v4 = (pthread_t *)v2;
 v5 = (pthread_t *)&v2[8 * a1];
 do
 {
 if ( pthread_create(v4, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 free(v3);
 return 4294967294LL;
 }
 ++v4;
 }
 while ( v4 != v5 );
 if ( !pthread_create(newthread, 0, thread_atomic_load_store, 0) )
 pthread_join(newthread[0], 0);
 v6 = 0;
 do
 pthread_join(*((unsigned long long *)v3 + v6++), 0);
 while ( a1 > (int)v6 );
 }
 v7 = atomic_counter;
 free(v3);
 result = 42;
 if ( v7 <= 0 )
 return 4294967293LL;
 return result;
}


/* Function: call_atomic_ops @ 0x3D9C */
long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x3DB8 */
long long param_thread_local_storage(int a1)
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
 void *ptr[9]; // [rsp+10h] [rbp-48h] BYREF

 ptr[1] = (void *)__readfsqword(0x28u);
 v1 = malloc(8LL * a1);
 v2 = malloc(8LL * a1);
 if ( !v1 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 if ( !v2 )
 return 0xFFFFFFFFLL;
 if ( a1 <= 0 )
 {
 v9 = 0;
 v8 = 0;
LABEL_11:
 free(v3);
 free(v1);
 if ( 100 * a1 == v8 && 150 * a1 == v9 )
 return 42;
 else
 return 4294967293LL;
 }
 else
 {
 for ( i = 0; i != a1; __snprintf_chk(v5, 16, 1, 16, "Thread-%d", i++) )
 {
 v5 = malloc(0x10u);
 *((unsigned long long *)v3 + i) = v5;
 }
 v6 = (pthread_t *)v1;
 v7 = 0;
 while ( 1 )
 {
 v8 = pthread_create(v6, 0, (void *(*)(void *))thread_tls_test, *((void **)v3 + v7));
 if ( v8 )
 break;
 ++v7;
 ++v6;
 if ( v7 == a1 )
 {
 v9 = 0;
 for ( j = 0; j != a1; free(*((void **)v3 + j++)) )
 {
 pthread_join(*((unsigned long long *)v1 + j), ptr);
 v8 += *(unsigned int *)ptr[0];
 v9 += *((unsigned int *)ptr[0] + 1);
 free(ptr[0]);
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
 return 4294967294LL;
 }
}


/* Function: call_thread_local_storage @ 0x3F81 */
long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3F98 */
long long test_thread_concurrency()
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
 return __printf_chk(1, aThrL306D, v5);
}


/* Function: main @ 0x407D */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions(argc, argv, envp);
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

/* FAILED to decompile: stat @ 0x8238 */

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
