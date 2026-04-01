/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* System headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <pthread.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <errno.h>

/* Function prototypes for compiler-checked functions */
extern int __printf_chk(int flag, const char *format, ...);
extern int __snprintf_chk(char *str, size_t maxlen, int flag, size_t os, const char *format, ...);

/* Custom type definitions */
typedef int pid_t;

typedef struct ThreadData {
    unsigned int start;
    unsigned int end;
    unsigned int result;
} ThreadData;

/* Global variables for threading */
volatile int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
int atomic_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int ready = 0;
int data = 0;

/* String constants from decompiler output */
const char asc_43C4[] = "=== Testing Standard Library Functions ===";
const char aLibL101D[] = "lib_l1: %d\n";
const char aLibL102D[] = "lib_l2: %d\n";
const char aLibL103D[] = "lib_l3: %d\n";
const char aLibL104D[] = "lib_l4: %lld\n";
const char aLibL105D[] = "lib_l5: %lld\n";
const char aLibL106D[] = "lib_l6: %d\n";
const char aLibL107D[] = "lib_l7: %d\n";
const char aLibL108D[] = "lib_l8: %d\n";
const char aLibL109D[] = "lib_l9: %d\n";
const char aLibL110D[] = "lib_l10: %d\n";
const char aLibL111D[] = "lib_l11: %lld\n";
const char aLibL112D[] = "lib_l12: %d\n";

const char asc_4211[] = "=== Testing System Calls ===";
const char aSysL301D[] = "sys_l1: %d\n";
const char aSysL302D[] = "sys_l2: %d\n";
const char aSysL303D[] = "sys_l3: %d\n";
const char aSysL304D[] = "sys_l4: %d\n";
const char aSysL305D[] = "sys_l5: %d\n";
const char aSysL306D[] = "sys_l6: %d\n";
const char aSysL307D[] = "sys_l7: %d\n";

const char asc_42FA[] = "=== Testing Thread Concurrency ===";
const char aThrL301D[] = "thr_l1: %d\n";
const char aThrL302D[] = "thr_l2: %d\n";
const char aThrL303D[] = "thr_l3: %d\n";
const char aThrL304D[] = "thr_l4: %d\n";
const char aThrL305D[] = "thr_l5: %d\n";
const char aThrL306D[] = "thr_l6: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/6/6_gcc_O1_g
 * Processor: pc
 */

/* External declarations */
extern void _gmon_start__(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__("jmp *%0" : : "r"(*(void**)(0)));
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
int sub_13E0(int a1)
{
 return (*(int (**)(void))(a1 + 248))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_17BC @ 0x17BC */
void sub_17BC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x17C0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x18F9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x18FD */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: signal_handler @ 0x1901 */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: thread_sum @ 0x1924 */
void * thread_sum(void *arg)
{
 int v1; // eax
 int v2; // ecx
 int v3; // ecx
 int v4; // edx

 ((ThreadData *)arg)->result = 0;
 v1 = ((ThreadData *)arg)->start;
 v2 = ((ThreadData *)arg)->end;
 if ( v1 <= v2 )
 {
 v3 = v2 + 1;
 v4 = 0;
 do
 v4 += v1++;
 while ( v1 != v3 );
 ((ThreadData *)arg)->result = v4;
 }
 return 0;
}


/* Function: thread_compute @ 0x1958 */
void * thread_compute(void *arg)
{
 int v1; // esi
 void *result; // eax

 v1 = *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v1 * v1;
 return result;
}


/* Function: thread_increment @ 0x1984 */
void * thread_increment(void *arg)
{
 int v1; // ebp
 int v2; // esi

 v1 = *(unsigned int *)arg;
 if ( v1 > 0 )
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


/* Function: consumer_thread @ 0x19F2 */
void * consumer_thread(void *arg)
{
 int v1; // esi
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


/* Function: producer_thread @ 0x1A6B */
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


/* Function: thread_atomic_increment @ 0x1AC9 */
void * thread_atomic_increment(void *arg)
{
 int v1; // esi
 signed int v2; // edx

 v1 = *(unsigned int *)arg;
 if ( v1 > 0 )
 {
 v2 = 0;
 do
 {
 __sync_fetch_and_add(&atomic_counter, 1);
 int old_val = atomic_counter;
 if (old_val == v2)
 atomic_counter = v2 + 1000;
 ++v2;
 }
 while ( v1 != v2 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x1B10 */
void * thread_atomic_load_store(void *arg)
{
 int old = atomic_counter;
 atomic_counter = old + 100;
 __sync_synchronize();
 return 0;
}


/* Function: thread_tls_test @ 0x1B34 */
void * thread_tls_test(void *arg)
{
 static __thread unsigned int tls_value;
 unsigned int v1;
 void *result;

 v1 = tls_value;
 tls_value = v1 + 50;
 strncpy((char *)(v1 - 32), (const char *)arg, 0x1Fu);
 result = malloc(8u);
 *(unsigned int *)result = v1;
 *((unsigned int *)result + 1) = v1 + 50;
 return result;
}


/* Function: param_strcpy @ 0x1B8B */
int param_strcpy(char *dst, const char *src)
{
 strcpy(dst, src);
 return strlen(dst);
}


/* Function: call_strcpy @ 0x1BBB */
int call_strcpy()
{
 char buffer[32]; // [esp+14h] [ebp-30h] BYREF
 unsigned int v2; // [esp+34h] [ebp-10h]

 v2 = __readgsdword(0x14u);
 return param_strcpy(buffer, "HelloLib");
}


/* Function: param_strcmp @ 0x1C03 */
int param_strcmp(const char *s1, const char *s2)
{
 bool v2; // cc
 long long v3; // rax

 v3 = strcmp(s1, s2);
 v2 = (int)v3 <= 0;
 LODWORD(v3) = 1;
 if ( v2 )
 LODWORD(v3) = HIDWORD(v3);
 return v3;
}


/* Function: call_strcmp @ 0x1C33 */
int call_strcmp()
{
 int v0; // ebx
 int v1; // edi

 v0 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 return v1 + v0 + param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x1C90 */
int param_strlen(const char *str)
{
 return strlen(str);
}


/* Function: call_strlen @ 0x1CB1 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x1CBB */
int param_memcpy(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
 return n;
}


/* Function: call_memcpy @ 0x1CE9 */
long long call_memcpy()
{
 long long result; // rax
 int src[5]; // [esp+8h] [ebp-38h] BYREF
 int dst[5]; // [esp+1Ch] [ebp-24h] BYREF
 unsigned int v3; // [esp+30h] [ebp-10h]

 v3 = __readgsdword(0x14u);
 src[0] = 10;
 src[1] = 20;
 src[2] = 30;
 src[3] = 40;
 src[4] = 50;
 memset(dst, 0, sizeof(dst));
 param_memcpy(dst, src, 0x14u);
 LODWORD(result) = dst[4] + dst[0] + dst[2];
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: param_memcmp @ 0x1D82 */
int param_memcmp(const void *p1, const void *p2, size_t n)
{
 bool v3; // cc
 long long v4; // rax

 v4 = memcmp(p1, p2, n);
 v3 = (int)v4 <= 0;
 LODWORD(v4) = 1;
 if ( v3 )
 LODWORD(v4) = HIDWORD(v4);
 return v4;
}


/* Function: call_memcmp @ 0x1DB6 */
long long call_memcmp()
{
 int v0; // ebx
 long long result; // rax
 int arr1[3]; // [esp+Ch] [ebp-34h] BYREF
 int arr2[3]; // [esp+18h] [ebp-28h] BYREF
 int arr3[3]; // [esp+24h] [ebp-1Ch] BYREF
 unsigned int v5; // [esp+30h] [ebp-10h]

 v5 = __readgsdword(0x14u);
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
 LODWORD(result) = v0 + param_memcmp(arr1, arr3, 0xCu);
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: param_printf @ 0x1E53 */
int param_printf(int x, const char *name)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x1E81 */
int call_printf()
{
 return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x1EA4 */
int param_scanf(const char *input_str)
{
 int a; // [esp+4h] [ebp-18h] BYREF
 int b[5]; // [esp+8h] [ebp-14h] BYREF

 b[1] = __readgsdword(0x14u);
 if ( __isoc99_sscanf(input_str, "%d,%d", &a, &b[0]) == 2 )
 return a + b[0];
 else
 return -1;
}


/* Function: call_scanf @ 0x1F0B */
int call_scanf()
{
 return param_scanf("123,456");
}


/* Function: param_fopen_fclose @ 0x1F2C */
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


/* Function: call_fopen_fclose @ 0x1F7D */
int call_fopen_fclose()
{
 return (param_fopen_fclose("/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_fread_fwrite @ 0x1FA4 */
int param_fread_fwrite(const char *tmpfile)
{
 FILE *v1; // eax
 FILE *v2; // esi
 size_t v3; // edi
 char read_buffer[32]; // [esp+1Ch] [ebp-40h] BYREF
 unsigned int v6; // [esp+3Ch] [ebp-20h]

 v6 = __readgsdword(0x14u);
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


/* Function: call_fread_fwrite @ 0x2092 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x20B3 */
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
 while ( v4 != 10 * size );
 }
 v5 = v2[size - 1] + *v2;
 free(v2);
 return v5;
}


/* Function: call_malloc_free @ 0x2123 */
int call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x2135 */
int param_memset(void *buffer, size_t size)
{
 unsigned char *v2; // eax
 int v3; // edx

 memset(buffer, 0, size);
 if ( !size )
 return 0;
 v2 = (unsigned char *)buffer;
 v3 = 0;
 do
 v3 += *v2++;
 while ( v2 != (unsigned char *)((char *)buffer + size) );
 return v3;
}


/* Function: call_memset @ 0x2185 */
long long call_memset()
{
 int *v0; // eax
 long long result; // rax
 int buffer[10]; // [esp+4h] [ebp-38h] BYREF
 unsigned int v3; // [esp+2Ch] [ebp-10h] BYREF

 v3 = __readgsdword(0x14u);
 v0 = buffer;
 do
 *v0++ = 255;
 while ( v0 != (int *)&v3 );
 param_memset(buffer, 0x28u);
 LODWORD(result) = buffer[0] + buffer[9];
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: param_strchr_strstr @ 0x21DD */
int param_strchr_strstr(const char *str, char ch_0, const char *substr)
{
 char *v3; // eax
 int v4; // esi
 char *v5; // eax
 int v6; // edx
 bool v7; // zf
 int v8; // eax

 v3 = strchr(str, ch_0);
 v4 = v3 - str;
 if ( !v3 )
 v4 = -1;
 v5 = strstr(str, substr);
 v6 = v5 - str;
 v7 = v5 == 0;
 v8 = -1;
 if ( !v7 )
 v8 = v6;
 return v4 + v8;
}


/* Function: call_strchr_strstr @ 0x2234 */
int call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x225E */
void test_standard_library_functions()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax

 puts(asc_43C4);
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


/* Function: param_linux_syscall @ 0x2396 */
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


/* Function: call_linux_syscall @ 0x23E1 */
int call_linux_syscall()
{
 return (param_linux_syscall("/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_win32_api @ 0x2408 */
int param_win32_api(const char *filename)
{
 int result; // eax
 struct stat st; // [esp+Ch] [ebp-68h] BYREF
 unsigned int v3; // [esp+64h] [ebp-10h]

 v3 = __readgsdword(0x14u);
 if ( stat(filename, &st) < 0 )
 return -1;
 result = 42;
 if ( st.st_size <= 0 )
 return -2;
 return result;
}


/* Function: call_win32_api @ 0x246C */
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x248D */
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


/* Function: call_fork_exec @ 0x2527 */
int call_fork_exec()
{
 return param_fork_exec("/bin/true", 0) == 0 ? 42 : -1;
}


/* Function: param_pipe_communication @ 0x2555 */
int param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // esi
 int result; // eax
 int pipefd[2]; // [esp+14h] [ebp-38h] BYREF
 char buffer[32]; // [esp+1Ch] [ebp-30h] BYREF
 unsigned int v5; // [esp+3Ch] [ebp-10h]

 v5 = __readgsdword(0x14u);
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


/* Function: call_pipe_communication @ 0x2648 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x2658 */
int param_socket_create()
{
 int v0; // eax
 int v1; // esi
 int opt; // [esp+Ch] [ebp-24h] BYREF
 struct sockaddr_in addr; // [esp+10h] [ebp-20h] BYREF
 unsigned int v5; // [esp+20h] [ebp-10h]

 v5 = __readgsdword(0x14u);
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
 addr.sin_family = 2;
 memset(&addr.sin_addr, 0, 12);
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


/* Function: call_socket_create @ 0x276C */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x277C */
size_t param_shmget_shmat()
{
 int v0; // eax
 key_t v1; // eax
 int v2; // eax
 int v3; // edi
 char *v4; // eax
 char *v5; // esi
 size_t v6; // ebp

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
 v5 = v4;
 if ( v4 == (char *)-1 )
 return -3;
 strcpy(v4, "SharedMemory");
 v6 = strlen(v4);
 shmdt(v5);
 shmctl(v3, 0, 0);
 return v6;
}


/* Function: call_shmget_shmat @ 0x2865 */
int call_shmget_shmat()
{
 bool v0; // cc
 int result; // eax

 v0 = (int)param_shmget_shmat() <= 0;
 result = 42;
 if ( v0 )
 return -1;
 return result;
}


/* Function: param_signal_handling @ 0x2884 */
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
 if ( !signal_received )
 return -5;
 if ( signal_number != 14 )
 return -5;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: call_signal_handling @ 0x29DB */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x29EB */
void test_system_calls()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax

 puts(asc_4211);
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


/* Function: param_pthread_create @ 0x2AB0 */
int param_pthread_create(int x)
{
 unsigned int v1;
 pthread_t tid;
 int input;
 void *thread_ret;

 input = x;
 if ( pthread_create(&tid, 0, thread_compute, &input) )
 return -1;
 pthread_join(tid, &thread_ret);
 if ( thread_ret )
 {
 v1 = *(unsigned int *)thread_ret;
 free(thread_ret);
 return v1;
 }
 return -1;
}


/* Function: call_pthread_create @ 0x2B3A */
int call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: param_pthread_join @ 0x2B4C */
int param_pthread_join()
{
 pthread_t *v0; // esi
 ThreadData *v1; // ebp
 ThreadData *v2; // edi
 pthread_t *v3; // edi
 int v4; // esi
 pthread_t tids[3]; // [esp+1Ch] [ebp-50h] BYREF
 ThreadData data[3]; // [esp+28h] [ebp-44h] BYREF
 void *limit_ptr;

 limit_ptr = &data[3];
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
 v2 = (ThreadData *)data;
 do
 {
 if ( pthread_create(v0, 0, thread_sum, v2) )
 return -1;
 ++v0;
 ++v2;
 }
 while ( v2 != (ThreadData *)limit_ptr );
 v3 = tids;
 v4 = 0;
 while ( v1 != (ThreadData *)limit_ptr )
 {
 if ( pthread_join(*v3, 0) != 0 )
 return -2;
 v4 += v1->result;
 ++v3;
 ++v1;
 }
 return v4;
}


/* Function: call_pthread_join @ 0x2C48 */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x2C58 */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 pthread_t *v2; // eax
 pthread_t *v3; // edi
 int v4; // ebp
 int i; // eax
 int v6; // esi
 int v7; // eax
 int result; // eax
 pthread_t *tids; // [esp+18h] [ebp-20h]

 v2 = (pthread_t *)malloc(4 * thread_count);
 tids = v2;
 if ( !v2 )
 return -1;
 v3 = v2;
 shared_counter = 0;
 if ( thread_count > 0 )
 {
 v4 = 0;
 for ( ; v4 < thread_count; v4++ )
 {
 i = pthread_create(v3, 0, thread_increment, &iterations_per_thread);
 if ( i )
 {
 free(tids);
 return -2;
 }
 ++v3;
 }
 for ( v6 = 0; v6 < v4; v6++ )
 {
 pthread_join(tids[v6], 0);
 }
 }
 free(tids);
 result = 42;
 if ( shared_counter != iterations_per_thread * thread_count )
 return -3;
 return result;
}


/* Function: call_mutex_lock @ 0x2D49 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x2D60 */
int param_condition_variable()
{
 int v0; // esi
 pthread_t producer; // [esp+10h] [ebp-1Ch] BYREF
 pthread_t consumer; // [esp+14h] [ebp-18h] BYREF
 void *consumer_ret; // [esp+18h] [ebp-14h] BYREF

 ready = 0;
 data = 0;
 v0 = -1;
 if ( pthread_create(&consumer, 0, consumer_thread, 0) )
 return -1;
 if ( pthread_create(&producer, 0, producer_thread, 0) )
 {
 pthread_join(consumer, 0);
 return -2;
 }
 pthread_join(consumer, &consumer_ret);
 pthread_join(producer, 0);
 if ( consumer_ret )
 {
 v0 = *(int *)consumer_ret;
 free(consumer_ret);
 }
 return v0;
}


/* Function: call_condition_variable @ 0x2E33 */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x2E43 */
int param_atomic_ops(int thread_count, int iterations)
{
 pthread_t *v2; // eax
 pthread_t *v3; // edi
 int i; // ebp
 int v5; // esi
 int v6; // esi
 int result; // eax
 pthread_t *tids; // [esp+18h] [ebp-30h]
 pthread_t load_store_tid[9]; // [esp+24h] [ebp-24h] BYREF

 v2 = (pthread_t *)malloc(4 * thread_count);
 tids = v2;
 if ( !v2 )
 return -1;
 v3 = v2;
 __sync_lock_test_and_set(&atomic_counter, 0);
 if ( thread_count <= 0 )
 {
 if ( !pthread_create(load_store_tid, 0, thread_atomic_load_store, 0) )
 pthread_join(load_store_tid[0], 0);
 }
 else
 {
 for ( i = 0; i != thread_count; ++i )
 {
 if ( pthread_create(v3, 0, thread_atomic_increment, &iterations) )
 {
 free(tids);
 return -2;
 }
 ++v3;
 }
 v5 = 0;
 if ( !pthread_create(load_store_tid, 0, thread_atomic_load_store, 0) )
 pthread_join(load_store_tid[0], 0);
 for ( v5 = 0; v5 < thread_count; v5++ )
 {
 pthread_join(tids[v5], 0);
 }
 }
 v6 = atomic_counter;
 free(tids);
 result = 42;
 if ( v6 <= 0 )
 return -3;
 return result;
}


/* Function: call_atomic_ops @ 0x2FBC */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x2FD3 */
int param_thread_local_storage(int thread_count)
{
	char **v1;
	char **v2;
	int i;
	char *v4;
	pthread_t *tids;
	pthread_t *v6;
	int j;
	int names;
	int v8;
	int v9;
	int v10;
	int v11;
	int v12;
	void **v14;
	int v15;
	char **namesa;
	void *ret[9];

tids = (pthread_t *)malloc(4 * thread_count);
	v1 = (char **)malloc(4 * thread_count);
	if ( !tids )
		return -1;
	v2 = v1;
	if ( !v2 )
		return -1;
if ( thread_count <= 0 )
	{
		v12 = 0;
		v11 = 0;
LABEL_13:
	free(v2);
	free(tids);
	if ( 100 * thread_count == v11 && 150 * thread_count == v12 )
		return 42;
	else
		return -3;
	}
 else
 {
for ( i = 0; i < thread_count; i++ )
	{
		v4 = (char *)malloc(0x10u);
		v1[i] = v4;
		__snprintf_chk(v4, 16, 1, 16, "Thread-%d", i);
	}
v15 = thread_count;
	v6 = tids;
	for ( j = 0; j < v15; ++j )
	{
		if ( pthread_create(v6, 0, thread_tls_test, v1[j]) )
			break;
		++v6;
	}
	v8 = 0;
	v9 = 0;
	namesa = v2;
	v10 = 0;
	for ( v8 = 0; v8 < j; v8++ )
	{
		pthread_join(tids[v8], &ret[v8]);
		unsigned int *ret_ptr = (unsigned int *)ret[v8];
		v9 += *ret_ptr;
		v10 += *ret_ptr + 1;
		free(ret[v8]);
		free(namesa[v8]);
	}
	v11 = v9;
	v12 = v10;
	if ( j >= 0 )
	{
		for ( v12 = 0; v12 <= j; v12++ )
			free(v1[v12]);
	}
	free(v2);
	free(tids);
	return -2;
	}
}


/* Function: call_thread_local_storage @ 0x31BB */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x31CD */
void test_thread_concurrency()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 puts(asc_42FA);
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


/* Function: main @ 0x327B */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x329B */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x329F */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __x86.get_pc_thunk.si @ 0x32A3 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x32B0 */
void _stack_chk_fail_local()
{
 __asm__ volatile("addl $_GLOBAL_OFFSET_TABLE_ - (.), %%ebx" : : : "ebx");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x331C */
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

/* FAILED to decompile: __stack_chk_fail @ 0x714C */

/* FAILED to decompile: rewind @ 0x7150 */

/* FAILED to decompile: wait @ 0x7154 */

/* FAILED to decompile: shmat @ 0x7158 */

/* FAILED to decompile: pthread_mutex_lock @ 0x715C */

/* FAILED to decompile: unlink @ 0x7160 */

/* FAILED to decompile: __cxa_finalize @ 0x7164 */

/* FAILED to decompile: fwrite @ 0x7168 */

/* FAILED to decompile: waitpid @ 0x716C */

/* FAILED to decompile: usleep @ 0x7170 */

/* FAILED to decompile: fread @ 0x7174 */

/* FAILED to decompile: strcpy @ 0x7178 */

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

/* Total functions decompiled: 139, failed: 59 */
