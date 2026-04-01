/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t and ssize_t are defined in sys/types.h */
typedef unsigned long uintptr_t;
/* intptr_t and intmax_t are defined in sys/types.h and stdint.h */
typedef unsigned long long uintmax_t;

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <signal.h>
#include <semaphore.h>
#include <sys/shm.h>
#include <errno.h>
#include <limits.h>

/* ThreadData structure for pthread functions */
typedef struct {
    int start;
    int end;
    int result;
} ThreadData;

/* Global variables */
int ready;
int data;
int shared_counter;
int atomic_counter;
int signal_received;
int signal_number;

pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* External declarations for CRT functions */
extern void (*_gmon_start__)(void);
extern void frame_dummy(void);
extern void _do_global_ctors_aux(void);

/* Stub for _do_global_dtors_aux - CRT cleanup function */
void _do_global_dtors_aux(void)
{
}

/* Global string constants */
const char *asc_4390 = "Standard Library Function Tests:\n";
const char *asc_41DF = "System Call Tests:\n";
const char *asc_42C8 = "Thread Concurrency Tests:\n";

const char *aLibL101D = "LibL101: strcmp test: %d\n";
const char *aLibL102D = "LibL102: strcmp result: %d\n";
const char *aLibL103D = "LibL103: strlen test: %d\n";
const char *aLibL104D = "LibL104: memcpy test: %d\n";
const char *aLibL105D = "LibL105: memcmp test: %d\n";
const char *aLibL106D = "LibL106: printf result: %d\n";
const char *aLibL107D = "LibL107: sscanf result: %d\n";
const char *aLibL108D = "LibL108: fopen test: %d\n";
const char *aLibL109D = "LibL109: fread/fwrite test: %d\n";
const char *aLibL110D = "LibL110: malloc test: %d\n";
const char *aLibL111D = "LibL111: memset test: %d\n";
const char *aLibL112D = "LibL112: strchr/strstr test: %d\n";

const char *aSysL301D = "SysL301: syscall test: %d\n";
const char *aSysL302D = "SysL302: stat test: %d\n";
const char *aSysL303D = "SysL303: fork/exec test: %d\n";
const char *aSysL304D = "SysL304: pipe test: %d\n";
const char *aSysL305D = "SysL305: socket test: %d\n";
const char *aSysL306D = "SysL306: shm test: %d\n";
const char *aSysL307D = "SysL307: signal test: %d\n";

const char *aThrL301D = "ThrL301: pthread_create test: %d\n";
const char *aThrL302D = "ThrL302: pthread_join test: %d\n";
const char *aThrL303D = "ThrL303: mutex lock test: %d\n";
const char *aThrL304D = "ThrL304: condition variable test: %d\n";
const char *aThrL305D = "ThrL305: atomic ops test: %d\n";
const char *aThrL306D = "ThrL306: thread local storage test: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/6/6_gcc_O2_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
  __asm__ volatile ("jmp *%0" : : "b" ((void *)8));
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130()
{
 sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
void sub_1140()
{
 sub_1030();
}


/* Function: sub_1150 @ 0x1150 */
void sub_1150()
{
 sub_1030();
}


/* Function: sub_1160 @ 0x1160 */
void sub_1160()
{
 sub_1030();
}


/* Function: sub_1170 @ 0x1170 */
void sub_1170()
{
 sub_1030();
}


/* Function: sub_1180 @ 0x1180 */
void sub_1180()
{
 sub_1030();
}


/* Function: sub_1190 @ 0x1190 */
void sub_1190()
{
 sub_1030();
}


/* Function: sub_11A0 @ 0x11A0 */
void sub_11A0()
{
 sub_1030();
}


/* Function: sub_11B0 @ 0x11B0 */
void sub_11B0()
{
 sub_1030();
}


/* Function: sub_11C0 @ 0x11C0 */
void sub_11C0()
{
 sub_1030();
}


/* Function: sub_11D0 @ 0x11D0 */
void sub_11D0()
{
 sub_1030();
}


/* Function: sub_11E0 @ 0x11E0 */
void sub_11E0()
{
 sub_1030();
}


/* Function: sub_11F0 @ 0x11F0 */
void sub_11F0()
{
 sub_1030();
}


/* Function: sub_1200 @ 0x1200 */
void sub_1200()
{
 sub_1030();
}


/* Function: sub_1210 @ 0x1210 */
void sub_1210()
{
 sub_1030();
}


/* Function: sub_1220 @ 0x1220 */
void sub_1220()
{
 sub_1030();
}


/* Function: sub_1230 @ 0x1230 */
void sub_1230()
{
 sub_1030();
}


/* Function: sub_1240 @ 0x1240 */
void sub_1240()
{
 sub_1030();
}


/* Function: sub_1250 @ 0x1250 */
void sub_1250()
{
 sub_1030();
}


/* Function: sub_1260 @ 0x1260 */
void sub_1260()
{
 sub_1030();
}


/* Function: sub_1270 @ 0x1270 */
void sub_1270()
{
 sub_1030();
}


/* Function: sub_1280 @ 0x1280 */
void sub_1280()
{
 sub_1030();
}


/* Function: sub_1290 @ 0x1290 */
void sub_1290()
{
 sub_1030();
}


/* Function: sub_12A0 @ 0x12A0 */
void sub_12A0()
{
 sub_1030();
}


/* Function: sub_12B0 @ 0x12B0 */
void sub_12B0()
{
 sub_1030();
}


/* Function: sub_12C0 @ 0x12C0 */
void sub_12C0()
{
 sub_1030();
}


/* Function: sub_12D0 @ 0x12D0 */
void sub_12D0()
{
 sub_1030();
}


/* Function: sub_12E0 @ 0x12E0 */
void sub_12E0()
{
 sub_1030();
}


/* Function: sub_12F0 @ 0x12F0 */
void sub_12F0()
{
 sub_1030();
}


/* Function: sub_1300 @ 0x1300 */
void sub_1300()
{
 sub_1030();
}


/* Function: sub_1310 @ 0x1310 */
void sub_1310()
{
 sub_1030();
}


/* Function: sub_1320 @ 0x1320 */
void sub_1320()
{
 sub_1030();
}


/* Function: sub_1330 @ 0x1330 */
void sub_1330()
{
 sub_1030();
}


/* Function: sub_1340 @ 0x1340 */
void sub_1340()
{
 sub_1030();
}


/* Function: sub_1350 @ 0x1350 */
void sub_1350()
{
 sub_1030();
}


/* Function: sub_1360 @ 0x1360 */
void sub_1360()
{
 sub_1030();
}


/* Function: sub_1370 @ 0x1370 */
void sub_1370()
{
 sub_1030();
}


/* Function: sub_1380 @ 0x1380 */
void sub_1380()
{
 sub_1030();
}


/* Function: sub_1390 @ 0x1390 */
void sub_1390()
{
 sub_1030();
}


/* Function: sub_13A0 @ 0x13A0 */
void sub_13A0()
{
 sub_1030();
}


/* Function: sub_13B0 @ 0x13B0 */
void sub_13B0()
{
 sub_1030();
}


/* Function: sub_13C0 @ 0x13C0 */
void sub_13C0()
{
 sub_1030();
}


/* Function: sub_13D0 @ 0x13D0 */
void sub_13D0()
{
 sub_1030();
}


/* Function: sub_13E0 @ 0x13E0 */
void sub_13E0(int a1)
{
 void (*func)(void) = (void (*)(void))(a1 + 248);
 func();
}


/* Function: main @ 0x1790 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_17DC @ 0x17DC */
void sub_17DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x17E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86_get_pc_thunk_dx @ 0x1919 */
void __x86_get_pc_thunk_dx(void)
{
#if defined(__GNUC__)
 __asm__ volatile ("nop");
#else
 __asm { nop }
#endif
}


/* Function: __x86.get_pc_thunk.di @ 0x191D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: signal_handler @ 0x1930 */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: thread_sum @ 0x1960 */
void thread_sum(void *arg)
{
 int v1; // eax
 int v2; // ecx
 int v3; // ecx
 int v4; // edx

 v1 = *(unsigned int *)arg;
 v2 = *((unsigned int *)arg + 1);
 *((unsigned int *)arg + 2) = 0;
 if ( v1 <= v2 )
 {
 v3 = v2 + 1;
 v4 = 0;
 do
 v4 += v1++;
 while ( v1 != v3 );
 *((unsigned int *)arg + 2) = v4;
 }
}


/* Function: thread_compute @ 0x1990 */
void * thread_compute(void *arg)
{
 int v1; // esi
 void *result; // eax

 v1 = *(unsigned int *)arg * *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v1;
 return result;
}


/* Function: thread_increment @ 0x19C0 */
void * thread_increment(void *arg)
{
 int v1; // edi
 int v2; // ebp

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


/* Function: consumer_thread @ 0x1A30 */
void * consumer_thread(void *arg)
{
 int v1; // edi
 void *result; // eax

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *(unsigned int *)result = v1;
 return result;
}


/* Function: producer_thread @ 0x1AB0 */
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


/* Function: thread_atomic_increment @ 0x1B10 */
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
 /* Use GCC atomic builtin instead of _InterlockedAdd */
 __sync_add_and_fetch(&atomic_counter, 1);
 /* Note: _InterlockedCompareExchange returns the original value but we ignore it here */
 ++v2;
 }
 while ( v1 != v2 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x1B60 */
void * thread_atomic_load_store(void *arg)
{
 /* Use GCC atomic builtin instead of _InterlockedExchange */
 __sync_lock_test_and_set(&atomic_counter, atomic_counter + 100);
 return 0;
}


/* Use GCC thread-local storage instead of pthread-specific functions */
static __thread unsigned int tls_value = 0;

/* Function: thread_tls_test @ 0x1B90 */
void * thread_tls_test(void *arg)
{
    unsigned int v2; // edi
    unsigned int v3; // eax
    void *result; // eax
    char *buffer;

    v2 = tls_value;
    tls_value = v2 + 50;
    v3 = tls_value;
    buffer = (char *)(v3 - 32);
    strncpy(buffer, (const char *)arg, 0x1Fu);
    result = malloc(8u);
    *(unsigned int *)result = v2;
    *((unsigned int *)result + 1) = v2 + 50;
    return result;
}


/* Function: param_strcpy @ 0x1BF0 */
int param_strcpy(char *dst, const char *src)
{
 return stpcpy(dst, src) - (unsigned int)dst;
}


/* Function: call_strcpy @ 0x1C20 */
int call_strcpy()
{
 return 8;
}


/* Function: param_strcmp @ 0x1C30 */
int param_strcmp(const char *s1, const char *s2)
{
 int v2; // edx
 int result; // eax

 v2 = strcmp(s1, s2);
 result = -(v2 != 0);
 if ( v2 > 0 )
 return 1;
 return result;
}


/* Function: call_strcmp @ 0x1C70 */
int call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x1C80 */
int param_strlen(const char *str)
{
 return strlen(str);
}


/* Function: call_strlen @ 0x1CB0 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x1CC0 */
int param_memcpy(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
 return n;
}


/* Function: call_memcpy @ 0x1CF0 */
int call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x1D00 */
int param_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // edx
 int result; // eax

 v3 = memcmp(p1, p2, n);
 result = -(v3 != 0);
 if ( v3 > 0 )
 return 1;
 return result;
}


/* Function: call_memcmp @ 0x1D40 */
long long call_memcmp()
{
 int v0; // eax
 int v1; // esi
 int v2; // edx
 int v3; // eax
 long long result; // rax
 int arr1[3]; // [esp+0h] [ebp-34h] BYREF
 int arr2[3]; // [esp+Ch] [ebp-28h] BYREF
 int arr3[3]; // [esp+18h] [ebp-1Ch] BYREF
 unsigned int v8; // [esp+24h] [ebp-10h]

 v8 = __readgsdword(0x14u);
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr2[0] = 1;
 arr2[1] = 2;
 arr2[2] = 4;
 arr3[0] = 1;
 arr3[1] = 2;
 arr3[2] = 3;
 v0 = memcmp(arr1, arr2, 0xCu);
 v1 = -(v0 != 0);
 if ( v0 > 0 )
 v1 = 1;
 v2 = memcmp(arr1, arr3, 0xCu);
 v3 = -(v2 != 0);
 if ( v2 > 0 )
 v3 = 1;
 result = (long long)(v1 + v3);
 return result;
}


/* Function: param_printf @ 0x1E20 */
int param_printf(int x, const char *name)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x1E50 */
int call_printf()
{
 return __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x1E80 */
int param_scanf(const char *input_str)
{
 int a; // [esp+0h] [ebp-18h] BYREF
 int b[5]; // [esp+4h] [ebp-14h] BYREF

 b[1] = __readgsdword(0x14u);
 if ( __isoc99_sscanf(input_str, "%d,%d", &a, b) == 2 )
 return a + b[0];
 else
 return -1;
}


/* Function: call_scanf @ 0x1EF0 */
int call_scanf()
{
 int v1; // [esp+0h] [ebp-18h] BYREF
 int v2; // [esp+4h] [ebp-14h] BYREF
 unsigned int v3; // [esp+8h] [ebp-10h]

 v3 = __readgsdword(0x14u);
 if ( __isoc99_sscanf("123,456", "%d,%d", &v1, &v2) == 2 )
 return v1 + v2;
 else
 return -1;
}


/* Function: param_fopen_fclose @ 0x1F60 */
int param_fopen_fclose(const char *filename)
{
 FILE *stream; // eax
 FILE *v2; // esi
 int v3; // edi

 stream = fopen(filename, "r");
 if ( !stream )
 return -1;
 v2 = stream;
 v3 = fileno(stream);
 fclose(v2);
 return v3;
}


/* Function: call_fopen_fclose @ 0x1FB0 */
int call_fopen_fclose()
{
 FILE *stream; // eax
 FILE *v1; // esi
 int v2; // edi
 int result; // eax

 stream = fopen("/etc/passwd", "r");
 if ( !stream )
 return -1;
 v1 = stream;
 v2 = fileno(stream);
 fclose(v1);
 result = 42;
 if ( v2 < 0 )
 return -1;
 return result;
}


/* Function: param_fread_fwrite @ 0x2010 */
int param_fread_fwrite(const char *tmpfile)
{
 FILE *v1; // eax
 FILE *v2; // esi
 size_t v3; // eax
 size_t read; // [esp+18h] [ebp-54h]
 char read_buffer[32]; // [esp+2Ch] [ebp-40h] BYREF
 unsigned int v7; // [esp+4Ch] [ebp-20h]

 v7 = __readgsdword(0x14u);
 v1 = fopen(tmpfile, "w+");
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v2);
 v3 = fread(read_buffer, 1u, 0x12u, v2);
 read_buffer[v3] = 0;
 read = v3;
 fclose(v2);
 unlink(tmpfile);
 if ( read == 18 )
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


/* Function: call_fread_fwrite @ 0x2110 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2140 */
int param_malloc_free(size_t size)
{
 unsigned int *v1; // eax
 unsigned int *v2; // ebp
 unsigned int *v3; // edx
 int v4; // eax
 int v5; // esi

 v1 = malloc(4 * size);
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( size )
 {
 v3 = v1;
 v4 = 0;
 do
 {
 *v3 = v4;
 v4 += 10;
 ++v3;
 }
 while ( 10 * size != v4 );
 }
 v5 = v2[size - 1] + *v2;
 free(v2);
 return v5;
}


/* Function: call_malloc_free @ 0x21B0 */
int call_malloc_free()
{
 unsigned int *v0; // eax
 unsigned int *v1; // ecx
 int i; // edx
 int v3; // esi

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = v0;
 for ( i = 0; i != 100; i += 10 )
 *v1++ = i;
 v3 = *v0 + v0[9];
 free(v0);
 return v3;
}


/* Function: param_memset @ 0x2210 */
int param_memset(void *buffer, size_t size)
{
 unsigned char *v2; // eax
 int v3; // edx
 int v4; // ecx

 memset(buffer, 0, size);
 if ( !size )
 return 0;
 v2 = (unsigned char *)buffer;
 v3 = 0;
 do
 {
 v4 = *v2++;
 v3 += v4;
 }
 while ( v2 != (unsigned char *)((char *)buffer + size) );
 return v3;
}


/* Function: call_memset @ 0x2270 */
int call_memset()
{
 return 0;
}


/* Function: param_strchr_strstr @ 0x2280 */
int param_strchr_strstr(const char *str, int ch_0, const char *substr)
{
 char *v3; // eax
 int v4; // esi
 char *v5; // eax
 int v6; // edx
 bool v7; // zf
 int v8; // eax

 v3 = strchr(str, ch_0);
 v4 = (int)(v3 - str);
 if ( !v3 )
 v4 = -1;
 v5 = strstr(str, substr);
 v6 = (int)(v5 - str);
 v7 = v5 == 0;
 v8 = -1;
 if ( !v7 )
 v8 = v6;
 return v4 + v8;
}


/* Function: call_strchr_strstr @ 0x22E0 */
int call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x22F0 */
void test_standard_library_functions()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 FILE *stream; // eax
 FILE *v5; // esi
 int v6; // edi
 int v7; // eax
 int v8; // eax
 unsigned int *v9; // eax
 unsigned int *v10; // ecx
 int i; // edx
 int v12; // esi
 int v13; // eax
 int v14; // [esp+14h] [ebp-18h] BYREF
 int v15; // [esp+18h] [ebp-14h] BYREF
 unsigned int v16; // [esp+1Ch] [ebp-10h]

 v16 = __readgsdword(0x14u);
 puts(asc_4390);
 __printf_chk(1, aLibL101D, 8);
 v0 = call_strcmp();
 __printf_chk(1, aLibL102D, v0);
 __printf_chk(1, aLibL103D, 12);
 __printf_chk(1, aLibL104D, 90);
 v1 = call_memcmp();
 __printf_chk(1, aLibL105D, v1);
 v2 = __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
 __printf_chk(1, aLibL106D, v2);
 if ( __isoc99_sscanf("123,456", "%d,%d", &v14, &v15) == 2 )
 v3 = v14 + v15;
 else
 v3 = -1;
 __printf_chk(1, aLibL107D, v3);
 stream = fopen("/etc/passwd", "r");
 v5 = stream;
 if ( !stream || (v6 = fileno(stream), fclose(v5), v7 = 42, v6 < 0) )
 v7 = -1;
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
 v13 = call_memset();
 __printf_chk(1, aLibL111D, v13);
 __printf_chk(1, aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x2520 */
int param_linux_syscall(const char *pathname)
{
 int v1; // eax
 int v2; // esi

 v1 = syscall(5, pathname, 0);
 if ( v1 < 0 )
 return -*__errno_location();
 v2 = v1;
 syscall(6, v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x2580 */
int call_linux_syscall()
{
 int v0; // eax
 int result; // eax
 bool v2; // cc

 v0 = syscall(5, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 v2 = *__errno_location() <= 0;
 result = 42;
 if ( !v2 )
 return -1;
 }
 else
 {
 syscall(6, v0);
 return 42;
 }
 return result;
}


/* Function: param_win32_api @ 0x25F0 */
int param_win32_api(const char *filename)
{
 int result; // eax
 struct stat st; // [esp+0h] [ebp-68h] BYREF
 unsigned int v3; // [esp+58h] [ebp-10h]

 v3 = __readgsdword(0x14u);
 if ( stat(filename, &st) < 0 )
 return -1;
 result = 42;
 if ( st.st_size <= 0 )
 return -2;
 return result;
}


/* Function: call_win32_api @ 0x2660 */
int call_win32_api()
{
 int result; // eax
 struct stat buf; // [esp+0h] [ebp-68h] BYREF
 unsigned int v2; // [esp+58h] [ebp-10h]

 v2 = __readgsdword(0x14u);
 if ( stat("/etc/passwd", &buf) < 0 )
 return -1;
 result = 42;
 if ( buf.st_size <= 0 )
 return -2;
 return result;
}


/* Function: param_fork_exec @ 0x26D0 */
int param_fork_exec(const char *prog, const char *arg)
{
 int v2; // eax
 __pid_t v3; // edx
 int result; // eax
 int status[5]; // [esp+18h] [ebp-14h] BYREF

 status[1] = __readgsdword(0x14u);
 v2 = fork();
 if ( v2 < 0 )
 return -1;
 if ( !v2 )
 {
 execl(prog, prog, arg, 0);
 _exit(127);
 }
 v3 = waitpid(v2, status, 0);
 result = -2;
 if ( v3 >= 0 )
 {
 result = BYTE1(status[0]);
 if ( (status[0] & 0x7F) != 0 )
 return -3;
 }
 return result;
}


/* Function: call_fork_exec @ 0x2770 */
int call_fork_exec()
{
 return param_fork_exec("/bin/true", 0) == 0 ? 42 : -1;
}


/* Function: param_pipe_communication @ 0x27A0 */
int param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // eax
 int v2; // esi
 int result; // eax
 int pipefd[2]; // [esp+14h] [ebp-38h] BYREF
 char buffer[32]; // [esp+1Ch] [ebp-30h] BYREF
 unsigned int v6; // [esp+3Ch] [ebp-10h]

 v6 = __readgsdword(0x14u);
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
 v2 = v1;
 close(pipefd[0]);
 wait(0);
 result = 42;
 if ( v2 <= 0 )
 return -3;
 return result;
}


/* Function: call_pipe_communication @ 0x28A0 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x28B0 */
int param_socket_create()
{
 int v0; // eax
 int v1; // esi
 int opt; // [esp+0h] [ebp-24h] BYREF
 struct sockaddr_in addr; // [esp+4h] [ebp-20h] BYREF
 unsigned int v5; // [esp+14h] [ebp-10h]

 v5 = __readgsdword(0x14u);
 v0 = socket(2, 1, 0);
 if ( v0 < 0 )
 return -1;
 opt = 1;
 v1 = v0;
 if ( setsockopt(v0, 1, 2, &opt, 4u) < 0 )
 {
 close(v1);
 return -2;
 }
 else
 {
 memset(&addr.sin_addr, 0, 12);
 *(unsigned int *)&addr.sin_family = 2;
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


/* Function: call_socket_create @ 0x29E0 */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x29F0 */
int param_shmget_shmat()
{
 int v0; // eax
 key_t v1; // eax
 int v2; // eax
 int v3; // esi
 char *v4; // eax

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return -1;
 close(v0);
 v1 = ftok("/tmp/binbench_shm", 42);
 if ( v1 < 0 )
 return -1;
 v2 = shmget(v1, 4096, 950);
 v3 = v2;
 if ( v2 < 0 )
 return -2;
 v4 = (char *)shmat(v2, 0, 0);
 if ( v4 == (char *)-1 )
 return -3;
 strcpy(v4, "SharedMemory");
 shmdt(v4);
 shmctl(v3, 0, 0);
 return 12;
}


/* Function: call_shmget_shmat @ 0x2AD0 */
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


/* Function: param_signal_handling @ 0x2AF0 */
int param_signal_handling()
{
 int v0; // esi
 int v1; // esi

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


/* Function: call_signal_handling @ 0x2C50 */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x2C60 */
void test_system_calls()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 bool v6; // cc
 int v7; // eax
 int v8; // eax
 int v9; // ecx
 struct stat buf; // [esp+0h] [ebp-68h] BYREF
 unsigned int v11; // [esp+58h] [ebp-10h]

 v11 = __readgsdword(0x14u);
 puts(asc_41DF);
 v0 = syscall(5, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 v9 = *__errno_location();
 v1 = 42;
 if ( v9 > 0 )
 v1 = -1;
 }
 else
 {
 syscall(6, v0);
 v1 = 42;
 }
 __printf_chk(1, aSysL301D, v1);
 if ( stat("/etc/passwd", &buf) < 0 )
 {
 v2 = -1;
 }
 else
 {
 v2 = 42;
 if ( buf.st_size <= 0 )
 v2 = -2;
 }
 __printf_chk(1, aSysL302D, v2);
 v3 = param_fork_exec("/bin/true", 0);
 __printf_chk(1, aSysL303D, v3 == 0 ? 42 : -1);
 v4 = param_pipe_communication();
 __printf_chk(1, aSysL304D, v4);
 v5 = param_socket_create();
 __printf_chk(1, aSysL305D, v5);
 v6 = param_shmget_shmat() <= 0;
 v7 = 42;
 if ( v6 )
 v7 = -1;
 __printf_chk(1, aSysL306D, v7);
 v8 = param_signal_handling();
 __printf_chk(1, aSysL307D, v8);
}


/* Function: param_pthread_create @ 0x2DF0 */
int param_pthread_create(int x)
{
 int v1; // esi
 pthread_t tid; // [esp+10h] [ebp-1Ch] BYREF
 int input; // [esp+14h] [ebp-18h] BYREF
 void *thread_ret[5]; // [esp+18h] [ebp-14h] BYREF

 thread_ret[1] = (void *)__readgsdword(0x14u);
 input = x;
 if ( pthread_create(&tid, 0, thread_compute, &input) )
 return -1;
 pthread_join(tid, thread_ret);
 v1 = *(unsigned int *)thread_ret[0];
 free(thread_ret[0]);
 return v1;
}


/* Function: call_pthread_create @ 0x2E80 */
int call_pthread_create()
{
 int v0; // esi
 pthread_t newthread; // [esp+10h] [ebp-1Ch] BYREF
 int arg; // [esp+14h] [ebp-18h] BYREF
 void *thread_return[5]; // [esp+18h] [ebp-14h] BYREF

 thread_return[1] = (void *)__readgsdword(0x14u);
 arg = 7;
 if ( pthread_create(&newthread, 0, thread_compute, &arg) )
 return -1;
 pthread_join(newthread, thread_return);
 v0 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 return v0;
}


/* Function: param_pthread_join @ 0x2F10 */
int param_pthread_join()
{
 ThreadData *v0; // edi
 pthread_t *v1; // ebp
 pthread_t *v2; // esi
 ThreadData *v3; // edi
 int v4; // esi
 pthread_t tids[3]; // [esp+18h] [ebp-50h] BYREF
 ThreadData data[3]; // [esp+24h] [ebp-44h] BYREF
 unsigned int v8[8]; // [esp+48h] [ebp-20h] BYREF

 v8[0] = __readgsdword(0x14u);
 v0 = data;
 data[0].start = 1;
 v1 = tids;
 data[0].end = 10;
 v2 = tids;
 data[0].result = 0;
 data[1].start = 11;
 data[1].end = 20;
 data[1].result = 0;
 data[2].start = 21;
 data[2].end = 30;
 data[2].result = 0;
 do
 {
 if ( pthread_create(v2, 0, thread_sum, v0) )
 return -1;
 ++v2;
 ++v0;
 }
 while ( v0 != (ThreadData *)v8 );
 v3 = data;
 v4 = 0;
 while ( !pthread_join(*v1, 0) )
 {
 v4 += v3->result;
 ++v1;
 if ( ++v3 == (ThreadData *)v8 )
 return v4;
 }
 return -2;
}


/* Function: call_pthread_join @ 0x3020 */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x3030 */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 pthread_t *v2; // eax
 pthread_t *v3; // edi
 int v4; // esi
 int i; // eax
 int result; // eax
 int v7; // edi
 int v8; // eax
 pthread_t *tids; // [esp+4h] [ebp-20h]

 v2 = (pthread_t *)malloc(4 * thread_count);
 tids = v2;
 if ( !v2 )
 return -1;
 shared_counter = 0;
 if ( thread_count > 0 )
 {
 v3 = v2;
 v4 = 0;
 for ( i = pthread_create(v2, 0, thread_increment, &iterations_per_thread);
 ;
 i = pthread_create(v3, 0, thread_increment, &iterations_per_thread) )
 {
 if ( i )
 {
 free(tids);
 return -2;
 }
 ++v3;
 if ( thread_count == v4 + 1 )
 break;
 ++v4;
 }
 v7 = 0;
 do
 {
 pthread_join(tids[v7], 0);
 v8 = v7++;
 }
 while ( v4 != v8 );
 }
 free(tids);
 result = 42;
 if ( shared_counter != iterations_per_thread * thread_count )
 return -3;
 return result;
}


/* Function: call_mutex_lock @ 0x3140 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x3160 */
int param_condition_variable(void)
{
 int v0; // esi
 pthread_t producer; // [esp+10h] [ebp-1Ch] BYREF
 pthread_t consumer; // [esp+14h] [ebp-18h] BYREF
 void *consumer_ret[5]; // [esp+18h] [ebp-14h] BYREF

 consumer_ret[1] = (void *)__readgsdword(0x14u);
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


/* Function: call_condition_variable @ 0x3240 */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x3250 */
int param_atomic_ops(int thread_count, int iterations)
{
 pthread_t *v2; // eax
 pthread_t *v3; // esi
 int v4; // ebp
 int i; // eax
 int result; // eax
 int v7; // esi
 int v8; // esi
 pthread_t v9; // [esp-18h] [ebp-4Ch]
 pthread_t *tids; // [esp+4h] [ebp-30h]
 pthread_t load_store_tid[9]; // [esp+10h] [ebp-24h] BYREF

 load_store_tid[1] = __readgsdword(0x14u);
 v2 = (pthread_t *)malloc(4 * thread_count);
 tids = v2;
 if ( !v2 )
 return -1;
 _InterlockedExchange(&atomic_counter, 0);
 if ( thread_count <= 0 )
 {
 if ( !pthread_create(load_store_tid, 0, thread_atomic_load_store, 0) )
 pthread_join(load_store_tid[0], 0);
 }
 else
 {
 v3 = v2;
 v4 = 0;
 for ( i = pthread_create(v2, 0, thread_atomic_increment, &iterations);
 ;
 i = pthread_create(v3, 0, thread_atomic_increment, &iterations) )
 {
 if ( i )
 {
 free(tids);
 return -2;
 }
 ++v4;
 ++v3;
 if ( thread_count == v4 )
 break;
 }
 v7 = 0;
 if ( !pthread_create(load_store_tid, 0, thread_atomic_load_store, 0) )
 pthread_join(load_store_tid[0], 0);
 do
 {
 v9 = tids[v7++];
 pthread_join(v9, 0);
 }
 while ( thread_count > v7 );
 }
 v8 = atomic_counter;
 free(tids);
 result = 42;
 if ( v8 <= 0 )
 return -3;
 return result;
}


/* Function: call_atomic_ops @ 0x33E0 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x3400 */
int param_thread_local_storage(int thread_count)
{
 void **v1; // eax
 void **v2; // ebp
 void **i; // esi
 void *v4; // eax
 void **v5; // edx
 pthread_t *v6; // ebp
 void **v7; // edi
 int j; // eax
 void **v9; // ebp
 int v11; // edi
 int v12; // ebp
 void *(*v13)(void *); // esi
 int v14; // esi
 int v15; // ebp
 void *size; // [esp+0h] [ebp-5Ch]
 void *sizea; // [esp+0h] [ebp-5Ch]
 void **names; // [esp+1Ch] [ebp-40h]
 void *(*start_routine)(void *); // [esp+20h] [ebp-3Ch]
 void **thread_return; // [esp+24h] [ebp-38h]
 pthread_t *tids; // [esp+28h] [ebp-34h]
 void *ret[9]; // [esp+38h] [ebp-24h] BYREF

 ret[1] = (void *)__readgsdword(0x14u);
 tids = (pthread_t *)malloc(4 * thread_count);
 v1 = (void **)malloc(4 * thread_count);
 names = v1;
 if ( !tids )
 return -1;
 v2 = v1;
 if ( !v1 )
 return -1;
 if ( thread_count <= 0 )
 {
 v15 = 0;
 v14 = 0;
 }
 else
 {
 for ( i = 0; i != (void **)thread_count; i = (void **)((char *)i + 1) )
 {
 v4 = malloc(0x10u);
 v2[(unsigned int)i] = v4;
 __snprintf_chk(v4, 16, 1, 16, "Thread-%d", i);
 v5 = i;
 }
 thread_return = v5;
 v6 = tids;
 v7 = 0;
 for ( j = pthread_create(tids, 0, thread_tls_test, *names);
 ;
 j = pthread_create(v6, 0, thread_tls_test, names[(unsigned int)v7]) )
 {
 if ( j )
 {
 v9 = names;
 do
 {
 size = *v9++;
 free(size);
 }
 while ( &names[(unsigned int)v7 + 1] != v9 );
 free(names);
 free(tids);
 return -2;
 }
 ++v6;
 if ( thread_return == v7 )
 break;
 v7 = (void **)((char *)v7 + 1);
 }
 v11 = 0;
 v12 = 0;
 v13 = 0;
 do
 {
 start_routine = v13;
 pthread_join(tids[(unsigned int)v13], ret);
 v12 += *(unsigned int *)ret[0];
 v11 += *((unsigned int *)ret[0] + 1);
 free(ret[0]);
 sizea = names[(unsigned int)v13];
 v13 = (void *(*)(void *))((char *)v13 + 1);
 free(sizea);
 }
 while ( thread_return != (void **)start_routine );
 v14 = v12;
 v15 = v11;
 }
 free(names);
 free(tids);
 if ( 100 * thread_count == v14 && 150 * thread_count == v15 )
 return 42;
 else
 return -3;
}


/* Function: call_thread_local_storage @ 0x3610 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3630 */
void test_thread_concurrency()
{
 int v0; // esi
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 pthread_t newthread; // [esp+10h] [ebp-1Ch] BYREF
 int arg; // [esp+14h] [ebp-18h] BYREF
 void *thread_return[5]; // [esp+18h] [ebp-14h] BYREF

 thread_return[1] = (void *)__readgsdword(0x14u);
 puts(asc_42C8);
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
 v2 = param_mutex_lock(4, 1000);
 __printf_chk(1, aThrL303D, v2);
 v2 = param_condition_variable();
 __printf_chk(1, aThrL304D, v2);
 v3 = param_atomic_ops(4, 500);
 __printf_chk(1, aThrL305D, v3);
 v4 = param_thread_local_storage(4);
 __printf_chk(1, aThrL306D, v4);
}


/* Function: __x86_get_pc_thunk_ax @ 0x376F */
void *__x86_get_pc_thunk_ax(void)
{
#if defined(__GNUC__)
 void *retaddr;
 __asm__ volatile ("nop" : "=c"(retaddr));
 return retaddr;
#else
 return 0;
#endif
}


/* Function: __x86.get_pc_thunk.cx @ 0x3773 */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: _stack_chk_fail_local @ 0x3780 */
void _stack_chk_fail_local()
{
 /* Stack canary violation - abort */
 while(1) { }
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x37EC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: setsockopt @ 0x7104 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x7108 */

/* FAILED to decompile: raise @ 0x710C */

/* FAILED to decompile: __snprintf_chk @ 0x7110 */

/* FAILED to decompile: strstr @ 0x7114 */

/* FAILED to decompile: strcmp @ 0x7118 */

/* FAILED to decompile: __libc_start_main @ 0x711C */

/* FAILED to decompile: read @ 0x7120 */

/* FAILED to decompile: _exit @ 0x7124 */

/* FAILED to decompile: free @ 0x7128 */

/* FAILED to decompile: memcpy @ 0x712C */

/* FAILED to decompile: shmget @ 0x7130 */

/* FAILED to decompile: fclose @ 0x7134 */

/* FAILED to decompile: pthread_cond_wait @ 0x7138 */

/* FAILED to decompile: signal @ 0x713C */

/* FAILED to decompile: memcmp @ 0x7140 */

/* FAILED to decompile: sleep @ 0x7144 */

/* FAILED to decompile: alarm @ 0x7148 */

/* FAILED to decompile: stpcpy @ 0x714C */

/* FAILED to decompile: __stack_chk_fail @ 0x7150 */

/* FAILED to decompile: rewind @ 0x7154 */

/* FAILED to decompile: wait @ 0x7158 */

/* FAILED to decompile: shmat @ 0x715C */

/* FAILED to decompile: pthread_mutex_lock @ 0x7160 */

/* FAILED to decompile: unlink @ 0x7164 */

/* FAILED to decompile: __cxa_finalize @ 0x7168 */

/* FAILED to decompile: fwrite @ 0x716C */

/* FAILED to decompile: waitpid @ 0x7170 */

/* FAILED to decompile: usleep @ 0x7174 */

/* FAILED to decompile: fread @ 0x7178 */

/* FAILED to decompile: shmctl @ 0x717C */

/* FAILED to decompile: pthread_cond_signal @ 0x7180 */

/* FAILED to decompile: malloc @ 0x7184 */

/* FAILED to decompile: puts @ 0x7188 */

/* FAILED to decompile: stat_0 @ 0x718C */

/* FAILED to decompile: open @ 0x7190 */

/* FAILED to decompile: strchr @ 0x7194 */

/* FAILED to decompile: strlen @ 0x7198 */

/* FAILED to decompile: write @ 0x719C */

/* FAILED to decompile: bind @ 0x71A0 */

/* FAILED to decompile: __isoc99_sscanf @ 0x71A4 */

/* FAILED to decompile: fopen @ 0x71A8 */

/* FAILED to decompile: memset @ 0x71AC */

/* FAILED to decompile: __errno_location @ 0x71B0 */

/* FAILED to decompile: strncpy @ 0x71B4 */

/* FAILED to decompile: syscall @ 0x71B8 */

/* FAILED to decompile: fileno @ 0x71BC */

/* FAILED to decompile: execl @ 0x71C0 */

/* FAILED to decompile: pipe @ 0x71C4 */

/* FAILED to decompile: __printf_chk @ 0x71C8 */

/* FAILED to decompile: shmdt @ 0x71CC */

/* FAILED to decompile: pthread_create @ 0x71D0 */

/* FAILED to decompile: fork @ 0x71D4 */

/* FAILED to decompile: listen @ 0x71D8 */

/* FAILED to decompile: ftok @ 0x71DC */

/* FAILED to decompile: socket @ 0x71E0 */

/* FAILED to decompile: pthread_join @ 0x71E4 */

/* FAILED to decompile: pthread_cancel @ 0x71E8 */

/* FAILED to decompile: close @ 0x71EC */

/* Total functions decompiled: 138, failed: 59 */
