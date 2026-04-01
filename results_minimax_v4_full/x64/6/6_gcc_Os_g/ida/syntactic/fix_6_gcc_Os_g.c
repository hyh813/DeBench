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

/* Note: Using standard stdint.h types for int64_t and uint64_t */

#include <errno.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdarg.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/ipc.h>

/* Stack canary read intrinsic - uses FS segment register on x86-64 */
static inline unsigned long long __readfsqword(unsigned long offset) {
    unsigned long long value;
    __asm__ volatile("movq %%fs:%1, %0" : "=r"(value) : "m"(*(const char *)offset));
    return value;
}

/* String constants from binary */
const char *s = "Testing standard library functions...";
const char *asc_423E = "Testing system calls...";
const char *asc_4327 = "Testing thread concurrency...";
const char *aLibL101D = "LibL101: %d\n";
const char *aLibL102D = "LibL102: %d\n";
const char *aLibL103D = "LibL103: %d\n";
const char *aLibL104D = "LibL104: %d\n";
const char *aLibL105D = "LibL105: %d\n";
const char *aLibL106D = "LibL106: %d\n";
const char *aLibL107D = "LibL107: %d\n";
const char *aLibL108D = "LibL108: %d\n";
const char *aLibL109D = "LibL109: %d\n";
const char *aLibL110D = "LibL110: %d\n";
const char *aLibL111D = "LibL111: %d\n";
const char *aLibL112D = "LibL112: %d\n";
const char *aSysL301D = "SysL301: %d\n";
const char *aSysL302D = "SysL302: %d\n";
const char *aSysL303D = "SysL303: %d\n";
const char *aSysL304D = "SysL304: %d\n";
const char *aSysL305D = "SysL305: %d\n";
const char *aSysL306D = "SysL306: %d\n";
const char *aSysL307D = "SysL307: %d\n";
const char *aThrL301D = "ThrL301: %d\n";
const char *aThrL302D = "ThrL302: %d\n";
const char *aThrL303D = "ThrL303: %d\n";
const char *aThrL304D = "ThrL304: %d\n";
const char *aThrL305D = "ThrL305: %d\n";
const char *aThrL306D = "ThrL306: %d\n";

/* ThreadData structure for pthread operations */
typedef struct {
    unsigned int start;
    int result;
} ThreadData;

/* Global variables for thread synchronization and signaling */
int ready = 0;
int data = 0;
int atomic_counter = 0;
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/6/6_gcc_Os_g
 * Processor: pc
 */

/* External declarations for profiling */
extern void _gmon_start__(void);

/* CRT startup stub - removed */


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 /* Empty stub function */
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


/* Function: main @ 0x2720 */
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



/* Function: signal_handler @ 0x2829 */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: thread_sum @ 0x283E */
void * thread_sum(void *arg)
{
 int v1; // eax
 int v2; // edx

 v1 = *(unsigned int *)arg;
 v2 = *((unsigned int *)arg + 1);
 *((unsigned int *)arg + 2) = 0;
 while ( v2 >= v1 )
 *((unsigned int *)arg + 2) += v1++;
 return 0;
}


/* Function: thread_compute @ 0x285C */
void * thread_compute(void *arg)
{
 int v1; // ebx
 void *result; // rax

 v1 = *(unsigned int *)arg * *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v1;
 return result;
}


/* Function: thread_increment @ 0x2874 */
void * thread_increment(void *arg)
{
 int v1; // r12d
 int v2; // ebx

 v1 = *(unsigned int *)arg;
 v2 = 0;
 while ( v2 < v1 )
 {
 ++v2;
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 }
 return 0;
}


/* Function: consumer_thread @ 0x28C0 */
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


/* Function: producer_thread @ 0x2911 */
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


/* Function: thread_atomic_increment @ 0x295B */
void * thread_atomic_increment(void *arg)
{
 signed int v1; // ecx
 signed int i; // edx

 v1 = *(unsigned int *)arg;
 for ( i = 0; i < v1; ++i )
 {
 atomic_counter++;
 /* _InterlockedCompareExchange equivalent */
 atomic_counter = (atomic_counter == i + 1000) ? i : atomic_counter;
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x2985 */
void * thread_atomic_load_store(void *arg)
{
 __atomic_store_n(&atomic_counter, atomic_counter + 100, __ATOMIC_SEQ_CST);
 return 0;
}


/* Function: thread_tls_test @ 0x299B - simplified for Linux */
void * thread_tls_test(void *arg)
{
 void *result; // rax

 /* Simplified TLS access - use pthread_self instead of FS segment registers */
 strncpy((char *)(&ready - 32), (const char *)arg, 0x1Fu);
 result = malloc(8u);
 *(unsigned int *)result = 0;
 *((unsigned int *)result + 1) = 50;
 return result;
}


/* Function: param_strcpy @ 0x29E5 */
int param_strcpy(char *dst, const char *src)
{
 char *v2; // rax

 v2 = strcpy(dst, src);
 return strlen(v2);
}


/* Function: call_strcpy @ 0x29F9 */
int call_strcpy()
{
 char buffer[32]; // [rsp+8h] [rbp-30h] BYREF
 unsigned long long v2; // [rsp+28h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 return param_strcpy(buffer, "HelloLib");
}


/* Function: param_strcmp @ 0x2A3C */
int param_strcmp(const char *s1, const char *s2)
{
 int v2; // r8d
 int result; // eax

 v2 = strcmp(s1, s2);
 result = 1;
 if ( v2 <= 0 )
 return -(v2 != 0);
 return result;
}


/* Function: call_strcmp @ 0x2A5D */
int call_strcmp()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 return v1 + v0 + param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x2AA5 */
int param_strlen(const char *str)
{
 return strlen(str);
}


/* Function: call_strlen @ 0x2AB1 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x2ABB */
int param_memcpy(void *dst, const void *src, size_t n)
{
 int result; // eax

 result = n;
 memcpy(dst, src, n);
 return result;
}


/* Function: call_memcpy @ 0x2AC8 */
int call_memcpy()
{
 long long v0; // rcx
 int *v1; // rdi
 char *src; // [rsp+0h] [rbp-38h] BYREF
 int dst[5]; // [rsp+14h] [rbp-24h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h]

 v0 = 5;
 v5 = __readfsqword(0x28u);
 v1 = dst;
 src = (char *)dst;
 *(unsigned long long *)src = 0x140000000LL;
 *(unsigned long long *)(src + 8) = 0x280000001ELL;
 while ( v0 )
 {
 *v1++ = 0;
 --v0;
 }
 param_memcpy(dst, src, 0x14u);
 return dst[4] + dst[0] + dst[2];
}


/* Function: param_memcmp @ 0x2B49 */
int param_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // r8d
 int result; // eax

 v3 = memcmp(p1, p2, n);
 result = 1;
 if ( v3 <= 0 )
 return -(v3 != 0);
 return result;
}


/* Function: call_memcmp @ 0x2B6A */
int call_memcmp()
{
 int v0; // ebx
 int arr1[3]; // [rsp+4h] [rbp-44h] BYREF
 int arr2[3]; // [rsp+10h] [rbp-38h] BYREF
 int arr3[3]; // [rsp+1Ch] [rbp-2Ch] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-20h]

 v5 = __readfsqword(0x28u);
 arr1[2] = 3;
 arr2[2] = 4;
 arr3[2] = 3;
 *(unsigned long long *)arr1 = 0x200000001LL;
 *(unsigned long long *)arr2 = 0x200000001LL;
 *(unsigned long long *)arr3 = 0x200000001LL;
 v0 = param_memcmp(arr1, arr2, 0xCu);
 return v0 + param_memcmp(arr1, arr3, 0xCu);
}


/* Function: param_printf @ 0x2BFC */
int param_printf(int x, const char *name)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x2C18 */
int call_printf()
{
 return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x2C2A */
int param_scanf(const char *input_str)
{
 int v1; // r8d
 int result; // eax
 int a; // [rsp+0h] [rbp-18h] BYREF
 int b; // [rsp+4h] [rbp-14h] BYREF
 unsigned long long v5; // [rsp+8h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v1 = __isoc99_sscanf(input_str, "%d,%d", &a, &b);
 result = -1;
 if ( v1 == 2 )
 return a + b;
 return result;
}


/* Function: call_scanf @ 0x2C83 */
int call_scanf()
{
 return param_scanf("123,456");
}


/* Function: param_fopen_fclose @ 0x2C90 */
int param_fopen_fclose(const char *filename)
{
 int v1; // r12d
 FILE *v2; // rax
 FILE *v3; // rbp

 v1 = -1;
 v2 = fopen(filename, "r");
 if ( v2 )
 {
 v3 = v2;
 v1 = fileno(v2);
 fclose(v3);
 }
 return v1;
}


/* Function: call_fopen_fclose @ 0x2CCB */
int call_fopen_fclose()
{
 return (param_fopen_fclose("/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_fread_fwrite @ 0x2CE4 */
int param_fread_fwrite(const char *tmpfile)
{
 FILE *v1; // rbp
 int result; // eax
 size_t v3; // rax
 size_t v4; // rbx
 char read_buffer[32]; // [rsp+8h] [rbp-50h] BYREF
 unsigned long long v6; // [rsp+28h] [rbp-30h]

 v6 = __readfsqword(0x28u);
 v1 = fopen(tmpfile, "w+");
 result = -1;
 if ( v1 )
 {
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v1);
 v3 = fread(read_buffer, 1u, 0x12u, v1);
 read_buffer[v3] = 0;
 v4 = v3;
 fclose(v1);
 unlink(tmpfile);
 result = -3;
 if ( v4 == 18 )
 return strcmp(read_buffer, "BinBench Test Data") == 0 ? 42 : -3;
 }
 else
 {
 fclose(v1);
 return -2;
 }
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x2DCD */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2DDD */
int param_malloc_free(size_t size)
{
 int v1; // r12d
 size_t v2; // rbp
 unsigned int *v4; // rax
 unsigned int *v5; // rdi
 long long i; // rax

 v1 = -1;
 v2 = size;
 v4 = malloc(4 * size);
 if ( v4 )
 {
 v5 = v4;
 for ( i = 0; i != size; ++i )
 v5[i] = 10 * i;
 v1 = v5[v2 - 1] + *v5;
 free(v5);
 }
 return v1;
}


/* Function: call_malloc_free @ 0x2E2B */
int call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x2E36 */
int param_memset(void *buffer, size_t size)
{
 int v2; // r8d
 long long i; // rax
 int v4; // ecx

 v2 = 0;
 memset(buffer, 0, size);
 for ( i = 0; i != size; ++i )
 {
 v4 = *((unsigned char *)buffer + i);
 v2 += v4;
 }
 return v2;
}


/* Function: call_memset @ 0x2E5E */
int call_memset()
{
 long long i; // rax
 int buffer[10]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v3; // [rsp+28h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 for ( i = 0; i != 10; ++i )
 buffer[i] = 255;
 param_memset(buffer, 0x28u);
 return buffer[0] + buffer[9];
}


/* Function: param_strchr_strstr @ 0x2EB4 */
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


/* Function: call_strchr_strstr @ 0x2F04 */
int call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x2F1D */
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

 puts(s);
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


/* Function: param_linux_syscall @ 0x307B */
int param_linux_syscall(const char *pathname)
{
 int v1; // eax
 int v2; // r12d

 v1 = syscall(2, pathname, 0);
 if ( v1 < 0 )
 return -*(__errno_location());
 v2 = v1;
 syscall(3, (unsigned int)v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x30BA */
int call_linux_syscall()
{
 return (param_linux_syscall("/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_win32_api @ 0x30D3 */
int param_win32_api(const char *filename)
{
 int v1; // r8d
 int result; // eax
 struct stat st; // [rsp+8h] [rbp-A0h] BYREF
 unsigned long long v4; // [rsp+98h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 v1 = stat(filename, &st);
 result = -1;
 if ( v1 >= 0 )
 {
 result = 42;
 if ( st.st_size <= 0 )
 return -2;
 }
 return result;
}


/* Function: call_win32_api @ 0x3139 */
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x3146 */
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
 {
 execl(prog, prog, arg, 0);
 _exit(127);
 }
 v3 = waitpid(v2, &status, 0);
 result = -2;
 if ( v3 >= 0 )
 {
 result = -3;
 if ( (status & 0x7F) == 0 )
 return (status >> 8) & 0xFF;
 }
 return result;
}


/* Function: call_fork_exec @ 0x31DC */
int call_fork_exec()
{
 return param_fork_exec("/bin/true", 0) == 0 ? 42 : -1;
}


/* Function: param_pipe_communication @ 0x31FB */
int param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // rax
 int v2; // edi
 long long v3; // rbx
 int result; // eax
 int pipefd[2]; // [rsp+0h] [rbp-38h] BYREF
 char buffer[32]; // [rsp+8h] [rbp-30h] BYREF
 unsigned long long v7; // [rsp+28h] [rbp-10h]

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


/* Function: call_pipe_communication @ 0x32C1 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x32CA */
int param_socket_create()
{
 int v0; // edi
 int result; // eax
 int opt; // [rsp+14h] [rbp-24h] BYREF
 struct sockaddr_in addr; // [rsp+18h] [rbp-20h] BYREF
 unsigned long long v4; // [rsp+28h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 v0 = socket(2, 1, 0);
 result = -1;
 if ( v0 >= 0 )
 {
 opt = 1;
 if ( setsockopt(v0, 1, 2, &opt, 4u) >= 0 )
 {
 memset(&addr, 0, sizeof(addr));
 addr.sin_family = AF_INET;
 if ( bind(v0, (const struct sockaddr *)&addr, 0x10u) >= 0 )
 {
 if ( listen(v0, 5) >= 0 )
 {
 close(v0);
 return 42;
 }
 else
 {
 close(v0);
 return -4;
 }
 }
 else
 {
 close(v0);
 return -3;
 }
 }
 else
 {
 close(v0);
 return -2;
 }
 }
 return result;
}


/* Function: call_socket_create @ 0x33B6 */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x33BF */
int param_shmget_shmat()
{
 int v0; // eax
 int v1; // r12d
 int v2; // edi
 int v3; // eax
 int v4; // r13d
 char *v5; // rax
 const char *v6; // rbp

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return -1;
 close(v0);
 v2 = ftok("/tmp/binbench_shm", 42);
 if ( v2 < 0 )
 return -1;
 v1 = -2;
 v3 = shmget(v2, 0x1000u, 950);
 v4 = v3;
 if ( v3 >= 0 )
 {
 v1 = -3;
 v5 = (char *)shmat(v3, 0, 0);
 v6 = v5;
 if ( v5 != (char *)-1LL )
 {
 strcpy(v5, "SharedMemory");
 v1 = strlen(v6);
 shmdt(v6);
 shmctl(v4, 0, 0);
 }
 }
 return v1;
}


/* Function: call_shmget_shmat @ 0x3474 */
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


/* Function: param_signal_handling @ 0x348F */
int param_signal_handling()
{
 __sighandler_t v0; // r8
 int result; // eax
 __sighandler_t v2; // r8
 int v3; // ebx
 int v4; // ebx

 v0 = signal(10, signal_handler);
 result = -1;
 if ( v0 != (__sighandler_t)-1LL )
 {
 v2 = signal(14, signal_handler);
 result = -2;
 if ( v2 != (__sighandler_t)-1LL )
 {
 v3 = 1001;
 signal_received = 0;
 raise(10);
 while ( !signal_received )
 {
 if ( !--v3 )
 break;
 usleep(0x3E8u);
 }
 result = -3;
 if ( signal_received )
 {
 result = -4;
 if ( signal_number == 10 )
 {
 v4 = 2001;
 signal_received = 0;
 alarm(1u);
 while ( !signal_received )
 {
 if ( !--v4 )
 break;
 usleep(0x3E8u);
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
 }
 }
 }
 return result;
}


/* Function: call_signal_handling @ 0x3597 */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x35A0 */
void test_system_calls()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax

 puts(asc_423E);
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


/* Function: param_pthread_create @ 0x3670 */
int param_pthread_create(int x)
{
 int v1; // r12d
 int input; // [rsp+4h] [rbp-24h] BYREF
 pthread_t tid; // [rsp+8h] [rbp-20h] BYREF
 void *thread_ret[3]; // [rsp+10h] [rbp-18h] BYREF

 v1 = -1;
 thread_ret[1] = (void *)__readfsqword(0x28u);
 input = x;
 if ( !pthread_create(&tid, 0, thread_compute, &input) )
 {
 pthread_join(tid, thread_ret);
 v1 = *(unsigned int *)thread_ret[0];
 free(thread_ret[0]);
 }
 return v1;
}


/* Function: call_pthread_create @ 0x36E9 */
int call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: param_pthread_join @ 0x36F7 */
int param_pthread_join()
{
 int *v0; // rsi
 long long v1; // rcx
 ThreadData *v2; // rdi
 pthread_t *v3; // rbx
 ThreadData *v4; // rbp
 int v5; // r12d
 long long v6; // rbx
 long long v7; // rax
 pthread_t tids[3]; // [rsp+8h] [rbp-80h] BYREF
 char v10; // [rsp+20h] [rbp-68h] BYREF
 ThreadData data[3]; // [rsp+24h] [rbp-64h] BYREF
 unsigned long long v12; // [rsp+48h] [rbp-40h]
 int initial_data[3] = {1, 2, 3};

 v0 = initial_data;
 v1 = 9;
 v12 = __readfsqword(0x28u);
 v2 = data;
 v3 = tids;
 while ( v1 )
 {
 v2->start = *v0++;
 v2 = (ThreadData *)((char *)v2 + 4);
 --v1;
 }
 v4 = data;
 do
 {
 v5 = pthread_create(v3, 0, thread_sum, v4);
 if ( v5 )
 return -1;
 ++v3;
 ++v4;
 }
 while ( v3 != (pthread_t *)(&v10 + 1) );
 v6 = 0;
 while ( !pthread_join(tids[v6], 0) )
 {
 v7 = v6++;
 v5 += data[v7].result;
 if ( v6 == 3 )
 return v5;
 }
 return -2;
}


/* Function: call_pthread_join @ 0x37C7 */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x37D2 */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 pthread_t *v3; // rbp
 int result; // eax
 pthread_t *v5; // r13
 int i; // r12d
 long long j; // r12
 pthread_t v9; // rdi
 int arg[11]; // [rsp+Ch] [rbp-2Ch] BYREF

 arg[0] = iterations_per_thread;
 v3 = (pthread_t *)malloc(8LL * thread_count);
 result = -1;
 if ( v3 )
 {
 shared_counter = 0;
 v5 = v3;
 for ( i = 0; i < thread_count; ++i )
 {
 if ( pthread_create(v5++, 0, thread_increment, arg) )
 {
 free(v3);
 return -2;
 }
 }
 for ( j = 0; thread_count > (int)j; ++j )
 {
 v9 = v3[j];
 pthread_join(v9, 0);
 }
 free(v3);
 result = 42;
 if ( shared_counter != arg[0] * thread_count )
 return -3;
 }
 return result;
}


/* Function: call_mutex_lock @ 0x3896 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x38A9 */
int param_condition_variable()
{
 int v0; // r12d
 pthread_t producer; // [rsp+0h] [rbp-28h] BYREF
 pthread_t consumer; // [rsp+8h] [rbp-20h] BYREF
 void *consumer_ret[3]; // [rsp+10h] [rbp-18h] BYREF

 v0 = -1;
 consumer_ret[1] = (void *)__readfsqword(0x28u);
 ready = 0;
 data = 0;
 if ( !pthread_create(&consumer, 0, consumer_thread, 0) )
 {
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
 }
 return v0;
}


/* Function: call_condition_variable @ 0x395E */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x3969 */
int param_atomic_ops(int thread_count, int iterations)
{
 pthread_t *v3; // rbp
 int result; // eax
 int v5; // r12d
 pthread_t *v6; // r13
 long long i; // r12
 pthread_t v9; // rdi
 int v10; // ebx
 int arg; // [rsp+Ch] [rbp-3Ch] BYREF
 pthread_t load_store_tid[7]; // [rsp+10h] [rbp-38h] BYREF

 arg = iterations;
 load_store_tid[1] = __readfsqword(0x28u);
 v3 = (pthread_t *)malloc(8LL * thread_count);
 result = -1;
 if ( v3 )
 {
 __atomic_store_n(&atomic_counter, 0, __ATOMIC_SEQ_CST);
 v5 = 0;
 v6 = v3;
 while ( v5 < thread_count )
 {
 if ( pthread_create(v6++, 0, thread_atomic_increment, &arg) )
 {
 free(v3);
 return -2;
 }
 ++v5;
 }
 if ( !pthread_create(load_store_tid, 0, thread_atomic_load_store, 0) )
 pthread_join(load_store_tid[0], 0);
 for ( i = 0; thread_count > (int)i; ++i )
 {
 v9 = v3[i];
 pthread_join(v9, 0);
 }
 v10 = atomic_counter;
 free(v3);
 result = 42;
 if ( v10 <= 0 )
 return -3;
 }
 return result;
}


/* Function: call_atomic_ops @ 0x3A70 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x3A83 */
int param_thread_local_storage(int thread_count)
{
 char *v2; // r12
 void **v3; // rax
 void **v4; // rbp
 long long v5; // r13
 void *v6; // rax
 int v7; // r9d
 long long v8; // r13
 void *v9; // rcx
 long long v10; // r14
 pthread_t *v11; // rdi
 void **v12; // rbx
 void *v13; // rdi
 int result; // eax
 long long v15; // r13
 int v16; // r14d
 void **v17; // rdx
 int v18; // r15d
 void *v19; // rdi
 void **v20; // [rsp+8h] [rbp-50h]
 void *ret[9]; // [rsp+10h] [rbp-48h] BYREF

 ret[1] = (void *)__readfsqword(0x28u);
 v2 = (char *)malloc(8LL * thread_count);
 v3 = (void **)malloc(8LL * thread_count);
 if ( !v2 )
 return -1;
 v4 = v3;
 v5 = 0;
 if ( !v3 )
 return -1;
 while ( thread_count > (int)v5 )
 {
 v6 = malloc(0x10u);
 v7 = v5;
 v4[v5++] = v6;
 __snprintf_chk(v6, 16, 1, 16, "Thread-%d", v7);
 }
 v8 = 0;
 while ( thread_count > (int)v8 )
 {
 v9 = v4[v8];
 v10 = v8;
 v11 = (pthread_t *)&v2[8 * v8++];
 if ( pthread_create(v11, 0, thread_tls_test, v9) )
 {
 v12 = v4;
 do
 {
 v13 = *v12++;
 free(v13);
 }
 while ( v12 != &v4[v10 + 1] );
 free(v4);
 free(v2);
 return -2;
 }
 }
 v15 = 0;
 v16 = 0;
 v17 = ret;
 v18 = 0;
 while ( thread_count > (int)v15 )
 {
 v20 = v17;
 pthread_join(*(unsigned long long *)&v2[8 * v15], v17);
 v18 += *(unsigned int *)ret[0];
 v16 += *((unsigned int *)ret[0] + 1);
 free(ret[0]);
 v19 = v4[v15++];
 free(v19);
 v17 = v20;
 }
 free(v4);
 free(v2);
 if ( 100 * thread_count != v18 )
 return -3;
 result = 42;
 if ( 150 * thread_count != v16 )
 return -3;
 return result;
}


/* Function: call_thread_local_storage @ 0x3C19 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3C27 */
void test_thread_concurrency()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 puts(asc_4327);
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


/* Function: .term_proc @ 0x3CE4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __snprintf_chk @ 0x7148 */

/* FAILED to decompile: raise @ 0x7150 */

/* FAILED to decompile: free @ 0x7158 */

/* FAILED to decompile: __libc_start_main @ 0x7160 */

/* FAILED to decompile: __errno_location @ 0x7168 */

/* FAILED to decompile: unlink @ 0x7170 */

/* FAILED to decompile: strncpy @ 0x7178 */

/* FAILED to decompile: _exit @ 0x7180 */

/* FAILED to decompile: strcpy @ 0x7188 */

/* FAILED to decompile: puts @ 0x7190 */

/* FAILED to decompile: fread @ 0x7198 */

/* FAILED to decompile: setsockopt @ 0x71A0 */

/* FAILED to decompile: shmdt @ 0x71A8 */

/* FAILED to decompile: write @ 0x71B0 */

/* FAILED to decompile: pthread_cond_wait @ 0x71B8 */

/* FAILED to decompile: fclose @ 0x71C0 */

/* FAILED to decompile: strlen @ 0x71C8 */

/* FAILED to decompile: __stack_chk_fail @ 0x71D0 */

/* FAILED to decompile: strchr @ 0x71D8 */

/* FAILED to decompile: rewind @ 0x71E0 */

/* FAILED to decompile: alarm @ 0x71E8 */

/* FAILED to decompile: close @ 0x71F0 */

/* FAILED to decompile: pipe @ 0x71F8 */

/* FAILED to decompile: read @ 0x7200 */

/* FAILED to decompile: memcmp @ 0x7208 */

/* FAILED to decompile: pthread_cond_signal @ 0x7210 */

/* FAILED to decompile: strcmp @ 0x7218 */

/* FAILED to decompile: signal @ 0x7220 */

/* FAILED to decompile: syscall @ 0x7228 */

/* FAILED to decompile: stat_0 @ 0x7230 */

/* FAILED to decompile: fileno @ 0x7238 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x7240 */

/* FAILED to decompile: malloc @ 0x7248 */

/* FAILED to decompile: __isoc99_sscanf @ 0x7250 */

/* FAILED to decompile: listen @ 0x7258 */

/* FAILED to decompile: __printf_chk @ 0x7260 */

/* FAILED to decompile: bind @ 0x7268 */

/* FAILED to decompile: pthread_create @ 0x7270 */

/* FAILED to decompile: waitpid @ 0x7278 */

/* FAILED to decompile: open @ 0x7280 */

/* FAILED to decompile: shmctl @ 0x7288 */

/* FAILED to decompile: fopen @ 0x7290 */

/* FAILED to decompile: shmat @ 0x7298 */

/* FAILED to decompile: shmget @ 0x72A0 */

/* FAILED to decompile: fwrite @ 0x72A8 */

/* FAILED to decompile: ftok @ 0x72B0 */

/* FAILED to decompile: pthread_join @ 0x72B8 */

/* FAILED to decompile: execl @ 0x72C0 */

/* FAILED to decompile: pthread_cancel @ 0x72C8 */

/* FAILED to decompile: sleep @ 0x72D0 */

/* FAILED to decompile: wait @ 0x72D8 */

/* FAILED to decompile: fork @ 0x72E0 */

/* FAILED to decompile: strstr @ 0x72E8 */

/* FAILED to decompile: pthread_mutex_lock @ 0x72F0 */

/* FAILED to decompile: usleep @ 0x72F8 */

/* FAILED to decompile: socket @ 0x7300 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x7308 */

/* FAILED to decompile: __gmon_start__ @ 0x7318 */

/* Total functions decompiled: 126, failed: 58 */
