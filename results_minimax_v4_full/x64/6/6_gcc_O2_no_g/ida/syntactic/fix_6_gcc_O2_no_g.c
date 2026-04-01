/* Auto-injected type definitions by preprocessor */
/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <pthread.h>

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <pthread.h>

/* Global variables */
int ready;
int data;
long atomic_counter = 0;
int signal_received;
int signal_number;
int shared_counter;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Forward declarations */
long long test_standard_library_functions(void);
long long test_system_calls(void);
long long test_thread_concurrency(void);

/* String constants */
const char *s = "Standard Library Tests";
const char *asc_51DB = "System Call Tests";
const char *asc_52C4 = "Thread Concurrency Tests";
const char *aLibL101D = "strcmp: %d\n";
const char *aLibL102D = "strcmp(library, decompiled): %d\n";
const char *aLibL103D = "strlen: %zu\n";
const char *aLibL104D = "memcpy: %zu\n";
const char *aLibL105D = "memcmp: %d\n";
const char *aLibL106D = "printf: %d\n";
const char *aLibL107D = "sscanf: %lld\n";
const char *aLibL108D = "fopen/fileno: %lld\n";
const char *aLibL109D = "fread/fwrite: %lld\n";
const char *aLibL110D = "malloc/free: %d\n";
const char *aLibL111D = "memset: %llu\n";
const char *aLibL112D = "strchr/strstr: %d\n";
const char *aSysL301D = "syscall(open/close): %lld\n";
const char *aSysL302D = "stat: %lld\n";
const char *aSysL303D = "fork/exec: %d\n";
const char *aSysL304D = "pipe: %lld\n";
const char *aSysL305D = "socket: %lld\n";
const char *aSysL306D = "shmget/shmat: %lld\n";
const char *aSysL307D = "signal: %lld\n";
const char *aThrL301D = "pthread_create: %u\n";
const char *aThrL302D = "pthread_join: %lld\n";
const char *aThrL303D = "pthread_mutex: %lld\n";
const char *aThrL304D = "pthread_cond: %d\n";
const char *aThrL305D = "pthread_atomic: %lld\n";
const char *aThrL306D = "pthread_tls: %lld\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/6/6_gcc_O2_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 return 0;
}


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
void signal_handler(int a1)
{
 signal_received = 1;
 signal_number = a1;
}


/* Function: thread_sum @ 0x28A0 */
void * thread_sum(int *a1)
{
 int v1; // eax
 int v2; // ecx
 int v3; // ecx
 int v4; // edx

 v1 = *a1;
 v2 = a1[1];
 a1[2] = 0;
 if ( v1 <= v2 )
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


/* Function: thread_compute @ 0x28D0 */
unsigned int * thread_compute(unsigned int *a1)
{
 int v1; // ebx
 unsigned int *result; // rax

 v1 = *a1 * *a1;
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: thread_increment @ 0x28F0 */
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


/* Function: consumer_thread @ 0x2950 */
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


/* Function: producer_thread @ 0x29C0 */
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


/* Function: thread_atomic_increment @ 0x2A10 */
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
 __atomic_add_fetch(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 long expected = atomic_counter;
 __atomic_compare_exchange_n(&atomic_counter, &expected, expected + 1000, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
 v2 = expected;
 ++v2;
 }
 while ( v1 != v2 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x2A50 */
void * thread_atomic_load_store(void *a1)
{
 long old = atomic_counter;
 _InterlockedExchange(&atomic_counter, old + 100);
 return 0;
}


/* Function: thread_tls_test @ 0x2A70 */
unsigned int * thread_tls_test(const char *a1)
{
 unsigned int v2; // ebp
 char *v3; // rdi
 unsigned int *result; // rax

 v2 = __readfsdword(0xFFFFFFDC);
 v3 = (char *)(__readfsqword(0) - 32);
 __writefsdword(0xFFFFFFDC, v2 + 50);
 strncpy(v3, a1, 0x1Fu);
 result = malloc(8u);
 *result = v2;
 result[1] = v2 + 50;
 return result;
}


/* Function: param_strcpy @ 0x2AC0 */
long long param_strcpy(char *a1, const char *a2)
{
 return (unsigned int)stpcpy(a1, a2) - (unsigned int)a1;
}


/* Function: call_strcpy @ 0x2AE0 */
long long call_strcpy()
{
 return 8;
}


/* Function: param_strcmp @ 0x2AF0 */
long long param_strcmp(const char *a1, const char *a2)
{
 int v2; // r8d
 long long result; // rax

 v2 = strcmp(a1, a2);
 result = (unsigned int)-(v2 != 0);
 if ( v2 > 0 )
 return 1;
 return result;
}


/* Function: call_strcmp @ 0x2B20 */
long long call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x2B30 */
size_t param_strlen(const char *a1)
{
 return strlen(a1);
}


/* Function: call_strlen @ 0x2B50 */
long long call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x2B60 */
long long param_memcpy(void *a1, const void *a2, size_t a3)
{
 unsigned int v3; // ebx

 v3 = a3;
 memcpy(a1, a2, a3);
 return v3;
}


/* Function: call_memcpy @ 0x2B80 */
long long call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x2B90 */
long long param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v3; // r8d
 long long result; // rax

 v3 = memcmp(a1, a2, a3);
 result = (unsigned int)-(v3 != 0);
 if ( v3 > 0 )
 return 1;
 return result;
}


/* Function: call_memcmp @ 0x2BC0 */
long long call_memcmp()
{
 unsigned long long v11; // [rsp+28h] [rbp-20h]
 long long s1; // [rsp+4h] [rbp-44h]
 long long s2; // [rsp+10h] [rbp-38h]
 long long v9; // [rsp+1Ch] [rbp-2Ch]

 v11 = __readfsqword(0x28u);
 s1 = 3;
 s2 = 3;
 v9 = 3;
 int v0 = memcmp(&s1, &s2, 0xCu);
 int v1 = (v0 > 0) ? 1 : (v0 != 0 ? -1 : 0);
 int v2 = memcmp(&s1, &v9, 0xCu);
 int v3 = (v2 > 0) ? 1 : (v2 != 0 ? -1 : 0);
 return (unsigned int)(v1 + v3);
}


/* Function: param_printf @ 0x2C80 */
long long param_printf(int a1, const char *a2)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x2CA0 */
long long call_printf()
{
 return __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x2CD0 */
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


/* Function: call_scanf @ 0x2D30 */
long long call_scanf()
{
 int v1; // [rsp+0h] [rbp-18h] BYREF
 int v2; // [rsp+4h] [rbp-14h] BYREF
 unsigned long long v3; // [rsp+8h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 if ( (unsigned int)__isoc99_sscanf("123,456", "%d,%d", &v1, &v2) == 2 )
 return (unsigned int)(v1 + v2);
 else
 return 0xFFFFFFFFLL;
}


/* Function: param_fopen_fclose @ 0x2DA0 */
long long param_fopen_fclose(const char *a1)
{
 FILE *v1; // rax
 FILE *v2; // rbp
 unsigned int v3; // r12d

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


/* Function: call_fopen_fclose @ 0x2DF0 */
long long call_fopen_fclose()
{
 FILE *v0; // rax
 FILE *v1; // rbp
 int v2; // ebx
 long long result; // rax

 v0 = fopen("/etc/passwd", "r");
 if ( !v0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 v2 = fileno(v0);
 fclose(v1);
 result = 42;
 if ( v2 < 0 )
 return 0xFFFFFFFFLL;
 return result;
}


/* Function: param_fread_fwrite @ 0x2E50 */
long long param_fread_fwrite(char *name)
{
 FILE *v2; // rax
 FILE *v3; // rbp
 FILE *v4; // rdi
 size_t v5; // rbx
 long long result; // rax
 unsigned long long v7[2]; // [rsp+0h] [rbp-48h] BYREF
 short v8; // [rsp+10h] [rbp-38h]
 char v9; // [rsp+12h] [rbp-36h]
 unsigned long long v10; // [rsp+28h] [rbp-20h]

 v10 = __readfsqword(0x28u);
 v2 = fopen(name, "w+");
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 v4 = v2;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
 {
 rewind(v4);
 v5 = fread(v7, 1u, 0x12u, v3);
 *((unsigned char *)v7 + v5) = 0;
 fclose(v3);
 unlink(name);
 if ( v5 != 18 )
 return 4294967293LL;
 if ( v7[0] ^ 0x68636E65426E6942LL | v7[1] ^ 0x6144207473655420LL )
 return 4294967293LL;
 if ( v8 != 24948 )
 return 4294967293LL;
 result = 42;
 if ( v9 )
 return 4294967293LL;
 }
 else
 {
 fclose(v4);
 return 4294967294LL;
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x2F60 */
long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2F70 */
long long param_malloc_free(long long a1)
{
 long long v1; // rbp
 unsigned int *v2; // rax
 unsigned int *v3; // rdx
 int v4; // ecx
 unsigned int v5; // r12d

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
 *v3++ = v4;
 v4 += 10;
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


/* Function: call_malloc_free @ 0x2FE0 */
long long call_malloc_free()
{
 unsigned int *v0; // rax
 unsigned int *v1; // rcx
 int i; // edx
 unsigned int v3; // r12d

 v0 = malloc(0x28u);
 if ( v0 )
 {
 v1 = v0;
 for ( i = 0; i != 100; i += 10 )
 *v1++ = i;
 v3 = *v0 + v0[9];
 free(v0);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: param_memset @ 0x3030 */
unsigned long long param_memset(void *a1, size_t a2)
{
 unsigned long long result; // rax
 unsigned char *v3; // rdi
 unsigned char *v4; // rsi
 int v5; // edx

 result = (unsigned long long)memset(a1, 0, a2);
 if ( !a2 )
 return 0;
 v3 = (unsigned char *)result;
 v4 = (unsigned char *)(result + a2);
 LODWORD(result) = 0;
 do
 {
 v5 = *v3++;
 result = (unsigned int)(v5 + result);
 }
 while ( v3 != v4 );
 return result;
}


/* Function: call_memset @ 0x3070 */
long long call_memset()
{
 return 0;
}


/* Function: param_strchr_strstr @ 0x3080 */
long long param_strchr_strstr(char *haystack, char a2, const char *a3)
{
 int v4; // r12d
 char *v5; // rax
 int v6; // ebp
 char *v7; // rax

 v4 = -1;
 v5 = strchr(haystack, a2);
 v6 = (unsigned int)v5 - (unsigned int)haystack;
 if ( !v5 )
 v6 = -1;
 v7 = strstr(haystack, a3);
 if ( v7 )
 v4 = (unsigned int)v7 - (unsigned int)haystack;
 return (unsigned int)(v6 + v4);
}


/* Function: call_strchr_strstr @ 0x30E0 */
long long call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x30F0 */
long long test_standard_library_functions()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 long long v3; // rdx
 FILE *v4; // rax
 FILE *v5; // rbp
 int v6; // r12d
 long long v7; // rdx
 unsigned int v8; // eax
 unsigned int *v9; // rax
 unsigned int *v10; // rcx
 int i; // edx
 unsigned int v12; // r12d
 unsigned int v13; // eax
 int v15; // [rsp+0h] [rbp-28h] BYREF
 int v16; // [rsp+4h] [rbp-24h] BYREF
 unsigned long long v17; // [rsp+8h] [rbp-20h]

 v17 = __readfsqword(0x28u);
 puts(s);
 __printf_chk(1, aLibL101D, 8);
 v0 = call_strcmp(1, aLibL102D);
 __printf_chk(1, aLibL102D, v0);
 __printf_chk(1, aLibL103D, 12);
 __printf_chk(1, aLibL104D, 90);
 v1 = call_memcmp();
 __printf_chk(1, aLibL105D, v1);
 v2 = __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
 __printf_chk(1, aLibL106D, v2);
 if ( (unsigned int)__isoc99_sscanf("123,456", "%d,%d", &v15, &v16) == 2 )
 v3 = (unsigned int)(v15 + v16);
 else
 v3 = 0xFFFFFFFFLL;
 __printf_chk(1, aLibL107D, v3);
 v4 = fopen("/etc/passwd", "r");
 v5 = v4;
 if ( !v4 || (v6 = fileno(v4), fclose(v5), v7 = 42, v6 < 0) )
 v7 = 0xFFFFFFFFLL;
 __printf_chk(1, aLibL108D, v7);
 v8 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1, aLibL109D, v8);
 v9 = malloc(0x28u);
 if ( v9 )
 {
 v10 = v9;
 for ( i = 0; i != 100; i += 10 )
 *v10++ = i;
 v12 = *v9 + v9[9];
 free(v9);
 }
 else
 {
 v12 = -1;
 }
 __printf_chk(1, aLibL110D, v12);
 v13 = call_memset(1, aLibL111D);
 __printf_chk(1, aLibL111D, v13);
 return __printf_chk(1, aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x3340 */
long long param_linux_syscall(long long a1)
{
 int v1; // eax
 unsigned int v2; // r12d

 v1 = syscall(2, a1, 0);
 if ( v1 < 0 )
 return (unsigned int)(-1 * *__errno_location());
 v2 = v1;
 syscall(3, (unsigned int)v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x3390 */
long long call_linux_syscall()
{
 int v0; // eax
 long long result; // rax
 bool v2; // cc

 v0 = syscall(2, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 v2 = *__errno_location() <= 0;
 result = 42;
 if ( !v2 )
 return 0xFFFFFFFFLL;
 }
 else
 {
 syscall(3, (unsigned int)v0);
 return 42;
 }
 return result;
}


/* Function: param_win32_api @ 0x33F0 */
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


/* Function: call_win32_api @ 0x3460 */
long long call_win32_api()
{
 long long result; // rax
 struct stat v1; // [rsp+0h] [rbp-A8h] BYREF
 unsigned long long v2; // [rsp+98h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 if ( stat("/etc/passwd", &v1) < 0 )
 return 0xFFFFFFFFLL;
 result = 42;
 if ( v1.st_size <= 0 )
 return 4294967294LL;
 return result;
}


/* Function: param_fork_exec @ 0x34D0 */
long long param_fork_exec(char *path, long long a2)
{
 int v2; // eax
 __pid_t v3; // r8d
 long long result; // rax
 int stat_loc; // [rsp+4h] [rbp-24h] BYREF
 unsigned long long v6; // [rsp+8h] [rbp-20h]

 v6 = __readfsqword(0x28u);
 v2 = fork();
 if ( v2 < 0 )
 return 0xFFFFFFFFLL;
 if ( !v2 )
 {
 execl(path, path, a2, 0);
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


/* Function: call_fork_exec @ 0x3570 */
long long call_fork_exec()
{
 return (unsigned int)param_fork_exec("/bin/true", 0) == 0 ? 42 : -1;
}


/* Function: param_pipe_communication @ 0x35A0 */
long long param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // rax
 int v2; // edi
 long long v3; // rbx
 long long result; // rax
 int pipedes[2]; // [rsp+8h] [rbp-40h] BYREF
 unsigned char buf[40]; // [rsp+10h] [rbp-38h] BYREF
 unsigned long long v7; // [rsp+38h] [rbp-10h]

 v7 = __readfsqword(0x28u);
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
 v3 = v1;
 buf[v1] = 0;
 close(v2);
 wait(0);
 result = 42;
 if ( v3 <= 0 )
 return 4294967293LL;
 return result;
}


/* Function: call_pipe_communication @ 0x3690 */
long long call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x36A0 */
long long param_socket_create()
{
 int v0; // eax
 int v1; // ebp
 int optval; // [rsp+Ch] [rbp-2Ch] BYREF
 struct sockaddr_in addr; // [rsp+10h] [rbp-28h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v0 = socket(2, 1, 0);
 if ( v0 < 0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 optval = 1;
 if ( setsockopt(v1, 1, 2, &optval, 4u) < 0 )
 {
 close(v1);
 return 4294967294LL;
 }
 else
 {
 memset(&addr, 0, sizeof(addr));
 addr.sin_family = 2;
 addr.sin_port = 0;
 addr.sin_addr.s_addr = 0;
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


/* Function: call_socket_create @ 0x37A0 */
long long call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x37B0 */
long long param_shmget_shmat()
{
 int v0; // eax
 int v1; // edi
 int v2; // eax
 int v3; // ebp
 char *v4; // rdi

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return 0xFFFFFFFFLL;
 close(v0);
 v1 = ftok("/tmp/binbench_shm", 42);
 if ( v1 < 0 )
 return 0xFFFFFFFFLL;
 v2 = shmget(v1, 0x1000u, 950);
 v3 = v2;
 if ( v2 < 0 )
 return 4294967294LL;
 v4 = (char *)shmat(v2, 0, 0);
 if ( v4 == (char *)-1LL )
 return 4294967293LL;
 strcpy(v4, "SharedMemory");
 shmdt(v4);
 shmctl(v3, 0, 0);
 return 12;
}


/* Function: call_shmget_shmat @ 0x3870 */
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


/* Function: param_signal_handling @ 0x38A0 */
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
 if ( !signal_received || signal_number != 14 )
 return 4294967291LL;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: call_signal_handling @ 0x39E0 */
long long call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x39F0 */
long long test_system_calls()
{
 int v0; // eax
 long long v1; // rdx
 long long v2; // rdx
 int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 int v6; // eax
 long long v7; // rdx
 long long v8; // rdx
 int *v10; // rax
 struct stat v11; // [rsp+0h] [rbp-A8h] BYREF
 unsigned long long v12; // [rsp+98h] [rbp-10h]

 v12 = __readfsqword(0x28u);
 puts(asc_51DB);
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
 if ( stat("/etc/passwd", &v11) < 0 )
 {
 v2 = 0xFFFFFFFFLL;
 }
 else
 {
 v2 = 42;
 if ( v11.st_size <= 0 )
 v2 = 4294967294LL;
 }
 __printf_chk(1, aSysL302D, v2);
 v3 = param_fork_exec("/bin/true", 0);
 __printf_chk(1, aSysL303D, v3 == 0 ? 42 : -1);
 v4 = param_pipe_communication();
 __printf_chk(1, aSysL304D, v4);
 v5 = param_socket_create();
 __printf_chk(1, aSysL305D, v5);
 v6 = param_shmget_shmat();
 v7 = 42;
 if ( v6 <= 0 )
 v7 = 0xFFFFFFFFLL;
 __printf_chk(1, aSysL306D, v7);
 v8 = (unsigned int)param_signal_handling();
 return __printf_chk(1, aSysL307D, v8);
}


/* Function: param_pthread_create @ 0x3B90 */
long long param_pthread_create(int a1)
{
 unsigned int v1; // r12d
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


/* Function: call_pthread_create @ 0x3C10 */
long long call_pthread_create()
{
 unsigned int v0; // r12d
 int arg; // [rsp+4h] [rbp-24h] BYREF
 pthread_t newthread; // [rsp+8h] [rbp-20h] BYREF
 void *thread_return[3]; // [rsp+10h] [rbp-18h] BYREF

 thread_return[1] = (void *)__readfsqword(0x28u);
 arg = 7;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 return (unsigned int)-1;
 }
 else
 {
 pthread_join(newthread, thread_return);
 v0 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 }
 return v0;
}


/* Function: param_pthread_join @ 0x3CA0 */
long long param_pthread_join()
{
 long long *p_arg; // rbx
 pthread_t *v1; // rbp
 unsigned int v2; // r12d
 long long v3; // rbx
 long long v4; // rax
 unsigned long long v6[4]; // [rsp+0h] [rbp-88h] BYREF
 long long arg; // [rsp+20h] [rbp-68h] BYREF
 unsigned long long v8[3]; // [rsp+28h] [rbp-60h]
 int v9; // [rsp+40h] [rbp-48h]
 char v10; // [rsp+44h] [rbp-44h] BYREF
 unsigned long long v11; // [rsp+48h] [rbp-40h]

 v11 = __readfsqword(0x28u);
 p_arg = &arg;
 v8[1] = 20;
 v1 = v6;
 v9 = 0;
 arg = 0xA00000001LL;
 v8[0] = 0xB00000000LL;
 v8[2] = 0x1E00000015LL;
 do
 {
 v2 = pthread_create(v1, 0, (void *(*)(void *))thread_sum, p_arg);
 if ( v2 )
 return (unsigned int)-1;
 p_arg = (long long *)((char *)p_arg + 12);
 ++v1;
 }
 while ( p_arg != (long long *)&v10 );
 v3 = 0;
 while ( !pthread_join(v6[v3], 0) )
 {
 v4 = 3 * v3++;
 v2 += *((unsigned int *)v8 + v4);
 if ( v3 == 3 )
 return v2;
 }
 return (unsigned int)-2;
}


/* Function: call_pthread_join @ 0x3DA0 */
long long call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x3DB0 */
long long param_mutex_lock(int a1, int a2)
{
 char *v2; // rax
 void *v3; // r14
 pthread_t *v4; // rbx
 pthread_t *v5; // rbp
 pthread_t *v6; // r15
 long long result; // rax
 pthread_t v8; // rdi
 unsigned int arg[15]; // [rsp+Ch] [rbp-3Ch] BYREF

 arg[0] = a2;
 v2 = (char *)malloc(8LL * a1);
 if ( !v2 )
 return 0xFFFFFFFFLL;
 shared_counter = 0;
 v3 = v2;
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
 {
 v8 = *v4++;
 pthread_join(v8, 0);
 }
 while ( v4 != v5 );
 }
 free(v3);
 result = 42;
 if ( shared_counter != arg[0] * a1 )
 return 4294967293LL;
 return result;
}


/* Function: call_mutex_lock @ 0x3EA0 */
long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x3EC0 */
long long param_condition_variable()
{
 unsigned int v0; // r12d
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
 v0 = -2;
 pthread_cancel(newthread);
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


/* Function: call_condition_variable @ 0x3F90 */
long long call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x3FA0 */
long long param_atomic_ops(int a1, int a2)
{
 char *v3; // rax
 void *v4; // rbp
 pthread_t *v5; // rbx
 pthread_t *v6; // r15
 long long result; // rax
 long long v8; // rbx
 pthread_t v9; // rdi
 int v10; // ebx
 int arg; // [rsp+Ch] [rbp-4Ch] BYREF
 pthread_t newthread[9]; // [rsp+10h] [rbp-48h] BYREF

 arg = a2;
 newthread[1] = __readfsqword(0x28u);
 v3 = (char *)malloc(8LL * a1);
 if ( !v3 )
 return 0xFFFFFFFFLL;
 v4 = v3;
 _InterlockedExchange(&atomic_counter, 0);
 if ( a1 <= 0 )
 {
 if ( !pthread_create(newthread, 0, thread_atomic_load_store, 0) )
 pthread_join(newthread[0], 0);
 }
 else
 {
 v5 = (pthread_t *)v3;
 v6 = (pthread_t *)&v3[8 * a1];
 do
 {
 if ( pthread_create(v5, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 free(v4);
 return 4294967294LL;
 }
 ++v5;
 }
 while ( v5 != v6 );
 if ( !pthread_create(newthread, 0, thread_atomic_load_store, 0) )
 pthread_join(newthread[0], 0);
 v8 = 0;
 do
 {
 v9 = *((unsigned long long *)v4 + v8++);
 pthread_join(v9, 0);
 }
 while ( a1 > (int)v8 );
 }
 v10 = atomic_counter;
 free(v4);
 result = 42;
 if ( v10 <= 0 )
 return 4294967293LL;
 return result;
}


/* Function: call_atomic_ops @ 0x4100 */
long long call_atomic_ops()
{
 return param_atomic_ops(2, 1000);
}

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
