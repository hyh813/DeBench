/* Enable GNU extensions for all functions - MUST be defined before includes */
#define _GNU_SOURCE

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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <errno.h>
#include <pthread.h>
#include <semaphore.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <emmintrin.h>
#include <sys/syscall.h>
#include <stdarg.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <features.h>
#include <sys/file.h>
#include <termios.h>
#include <sched.h>
#include <sys/sysinfo.h>
#include <sys/timeb.h>
#include <unistd.h>
#include <strings.h>
#include <time.h>

/* System call number definitions (if not already defined) */
#ifndef SYS_open
#define SYS_open 2
#endif
#ifndef SYS_close
#define SYS_close 3
#endif
#ifndef SYS_read
#define SYS_read 0
#endif
#ifndef SYS_write
#define SYS_write 1
#endif

/* Missing global variables */
void *_gmon_start__ = NULL;

/* Additional function prototypes that might be missing */
void _exit(int status) __attribute__((noreturn));

/* Forward declarations */
void signal_handler(int a1);

/* Signal handling globals */
volatile int signal_received = 0;
int signal_number = 0;

/* Mutex and condition variable globals */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int shared_counter = 0;
int ready = 0;
int data = 0;

/* Atomic operations global */
volatile int atomic_counter = 0;

/* Missing macro definitions */
#define JUMPOUT(x) __builtin_unreachable()
#define HIDWORD(x) (((uint64_t)(x) >> 32) & 0xFFFFFFFF)
#define BYTE1(x) (((unsigned int)(x) >> 8) & 0xFF)

/* Linux equivalents for Windows interlocked functions */
#define _InterlockedAdd(ptr, val) __sync_fetch_and_add(ptr, val)
#define _InterlockedCompareExchange(ptr, new_val, old_val) __sync_val_compare_and_swap(ptr, old_val, new_val)
#define _InterlockedExchange(ptr, val) __sync_lock_test_and_set(ptr, val)

/* String data references */
const char _s[] = "";
const char aLibL101D[] = "";
const char aLibL102D[] = "";
const char aLibL103D[] = "";
const char aLibL104D[] = "";
const char aLibL105D[] = "";
const char aLibL106D[] = "";
const char aLibL107D[] = "";
const char aLibL108D[] = "";
const char aLibL109D[] = "";
const char aLibL110D[] = "";
const char aLibL111D[] = "";
const char aLibL112D[] = "";
const char asc_4443[] = "";
const char asc_445E[] = "";
const char aSysL301D[] = "";
const char aSysL302D[] = "";
const char aSysL303D[] = "";
const char aSysL304D[] = "";
const char aSysL305D[] = "%d\n";
const char aSysL306D[] = "";
const char aSysL307D[] = "";
const char aThrL301D[] = "";
const char aThrL302D[] = "";
const char aThrL303D[] = "";
const char aThrL304D[] = "";
const char aThrL305D[] = "";
const char aThrL306D[] = "";

/* XMM word data references */
const __m128i xmmword_4020 = _mm_set_epi8(0x42, 0x69, 0x6E, 0x42, 0x65, 0x6E, 0x63, 0x68, 0x20, 0x54, 0x65, 0x73, 0x74, 0x20, 0x44, 0x61);
const __m128i xmmword_4010 = _mm_set_epi8(0x74, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
const __m128i xmmword_4030 = _mm_set_epi8(0x00, 0x0A, 0x00, 0x14, 0x00, 0x1E, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
const __m128i xmmword_4060 = _mm_set_epi8(0x00, 0x32, 0x00, 0x3C, 0x00, 0x46, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
const __m128i xmmword_4040 = _mm_set_epi8(0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00);
const __m128i xmmword_4050 = _mm_set_epi8(0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04, 0x00);
const __m128i xmmword_4070 = _mm_set_epi8(0x00, 0x64, 0x00, 0xC8, 0x01, 0x2C, 0x01, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
const __m128i xmmword_4080 = _mm_set_epi8(0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
const __m128i xmmword_4090 = _mm_set_epi8(0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/6/6_clang_O2_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))_gmon_start__();
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 __builtin_unreachable();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_strcpy @ 0x24B0 */
size_t param_strcpy(char *s, const char *a2)
{
 strcpy(s, a2);
 return strlen(s);
}


/* Function: call_strcpy @ 0x24D0 */
size_t call_strcpy()
{
 char v1[40]; // [rsp+0h] [rbp-28h] BYREF

 strcpy(v1, "HelloLib");
 return strlen(v1);
}


/* Function: param_strcmp @ 0x2500 */
long long param_strcmp(const char *a1, const char *a2)
{
 int v2; // eax
 unsigned int v3; // ecx
 bool v4; // cc
 long long result; // rax

 v2 = strcmp(a1, a2);
 v3 = -(v2 != 0);
 v4 = v2 <= 0;
 result = 1;
 if ( v4 )
 return v3;
 return result;
}


/* Function: call_strcmp @ 0x2520 */
long long call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x2530 */
// attributes: thunk
size_t param_strlen(const char *s)
{
 return strlen(s);
}


/* Function: call_strlen @ 0x2540 */
long long call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x2550 */
long long param_memcpy(void *a1, const void *a2, size_t a3)
{
 unsigned int v3; // ebx

 v3 = a3;
 memcpy(a1, a2, a3);
 return v3;
}


/* Function: call_memcpy @ 0x2560 */
long long call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x2570 */
long long param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v3; // eax
 unsigned int v4; // ecx
 bool v5; // cc
 long long result; // rax

 v3 = memcmp(a1, a2, a3);
 v4 = -(v3 != 0);
 v5 = v3 <= 0;
 result = 1;
 if ( v5 )
 return v4;
 return result;
}


/* Function: call_memcmp @ 0x2590 */
long long call_memcmp()
{
 return 0xFFFFFFFFLL;
}


/* Function: param_printf @ 0x25A0 */
int param_printf(int a1, const char *a2)
{
 return printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x25C0 */
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x25E0 */
long long param_scanf(long long a1)
{
 long long v1; // rax
 bool v2; // zf
 long long result; // rax
 long long v4; // [rsp+0h] [rbp-8h] BYREF

 v4 = v1;
 v2 = (unsigned int)sscanf(a1, "%d,%d", (char *)&v4 + 4, &v4) == 2;
 result = 0xFFFFFFFFLL;
 if ( v2 )
 return (unsigned int)(HIDWORD(v4) + v4);
 return result;
}


/* Function: call_scanf @ 0x2610 */
long long call_scanf()
{
 long long v0; // rax
 bool v1; // zf
 long long result; // rax
 long long v3; // [rsp+0h] [rbp-8h] BYREF

 v3 = v0;
 v1 = (unsigned int)sscanf("123,456", "%d,%d", (int *)&v3 + 1, &v3) == 2;
 result = 0xFFFFFFFFLL;
 if ( v1 )
 return (unsigned int)(HIDWORD(v3) + v3);
 return result;
}


/* Function: param_fopen_fclose @ 0x2650 */
long long param_fopen_fclose(const char *a1)
{
 FILE *v1; // rax
 FILE *v2; // rbx
 unsigned int v3; // ebp

 v1 = fopen(a1, "r");
 if ( !v1 )
 return 0xFFFFFFFFLL;
 v2 = v1;
 v3 = fileno(v1);
 fclose(v2);
 return v3;
}


/* Function: call_fopen_fclose @ 0x2690 */
long long call_fopen_fclose()
{
 FILE *v0; // rax
 FILE *v1; // r14
 int v2; // ebx

 v0 = fopen("/etc/passwd", "r");
 if ( v0 )
 {
 v1 = v0;
 v2 = fileno(v0);
 fclose(v1);
 return (unsigned int)((v2 >> 31) | 0x2A);
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: param_fread_fwrite @ 0x26E0 */
long long param_fread_fwrite(char *name)
{
 FILE *v1; // rax
 FILE *v2; // rbx
 size_t v3; // r15
 long long result; // rax
 __m128i v5[3]; // [rsp+0h] [rbp-38h] BYREF

 v1 = fopen(name, "w+");
 if ( !v1 )
 return 0xFFFFFFFFLL;
 v2 = v1;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v2);
 v3 = fread(v5, 1u, 0x12u, v2);
 ((char *)v5)[v3] = 0;
 fclose(v2);
 unlink(name);
 result = 4294967293LL;
 if ( v3 == 18 )
 {
 result = 4294967293LL;
 if ( _mm_movemask_epi8(
 _mm_and_si128(
 _mm_cmpeq_epi8(_mm_loadu_si128(v5), (__m128i)xmmword_4020),
 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)((char *)v5 + 3)), (__m128i)xmmword_4010))) == 0xFFFF )
 return 42;
 }
 }
 else
 {
 fclose(v2);
 return 4294967294LL;
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x27C0 */
long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x27D0 */
long long param_malloc_free(unsigned long long a1)
{
 int v1; // ebp
 int *v3; // rax
 unsigned long long v4; // rcx
 unsigned int v5; // ebp
 unsigned long long v6; // rdx
 unsigned long long v7; // rdi
 __m128i v8; // xmm0
 long long v9; // rsi
 __m128i v10; // xmm1
 __m128i v11; // xmm2
 __m128i v12; // xmm3
 __m128i v13; // xmm4
 __m128i v14; // xmm5
 __m128i v15; // xmm6
 __m128i si128; // xmm0
 __m128i v17; // xmm1
 int v18; // edx

 v3 = (int *)malloc(4 * a1);
 if ( v3 )
 {
 if ( !a1 )
 goto LABEL_16;
 if ( a1 < 8 )
 {
 v4 = 0;
 goto LABEL_13;
 }
 v4 = a1 & 0xFFFFFFFFFFFFFFF8LL;
 v6 = (((a1 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1;
 if ( (a1 & 0xFFFFFFFFFFFFFFF8LL) == 8 )
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_4030);
 v9 = 0;
 if ( (v6 & 1) != 0 )
 {
LABEL_11:
 v17 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_4060), si128);
 *(__m128i *)&v3[v9] = si128;
 *(__m128i *)&v3[v9 + 4] = v17;
 }
 }
 else
 {
 v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
 v8 = _mm_load_si128((const __m128i *)&xmmword_4040);
 v9 = 0;
 v10 = _mm_load_si128((const __m128i *)&xmmword_4050);
 v11 = _mm_load_si128((const __m128i *)&xmmword_4060);
 v12 = _mm_load_si128((const __m128i *)&xmmword_4070);
 v13 = _mm_load_si128((const __m128i *)&xmmword_4080);
 v14 = _mm_load_si128((const __m128i *)&xmmword_4090);
 do
 {
 v15 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(v8, v10), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v8, 245), v10), 232));
 *(__m128i *)&v3[v9] = v15;
 *(__m128i *)&v3[v9 + 4] = _mm_add_epi32(v15, v11);
 *(__m128i *)&v3[v9 + 8] = _mm_add_epi32(v15, v12);
 *(__m128i *)&v3[v9 + 12] = _mm_add_epi32(v15, v13);
 v9 += 16;
 v8 = _mm_add_epi32(v8, v14);
 v7 -= 2LL;
 }
 while ( v7 );
 si128 = _mm_unpacklo_epi32(
 _mm_shuffle_epi32(_mm_mul_epu32(v8, v10), 232),
 _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v8, 245), v10), 232));
 if ( (v6 & 1) != 0 )
 goto LABEL_11;
 }
 if ( v4 == a1 )
 {
LABEL_15:
 v1 = *v3;
LABEL_16:
 v5 = v3[a1 - 1] + v1;
 free(v3);
 return v5;
 }
LABEL_13:
 v18 = 10 * v4;
 do
 {
 v3[v4++] = v18;
 v18 += 10;
 }
 while ( a1 != v4 );
 goto LABEL_15;
 }
 return (unsigned int)-1;
}


/* Function: call_malloc_free @ 0x2950 */
long long call_malloc_free()
{
 return 90;
}


/* Function: param_memset @ 0x2960 */
long long param_memset(unsigned char *a1, size_t a2)
{
 unsigned int v3; // ebp
 unsigned long long v4; // rax
 unsigned long long v5; // rcx
 unsigned long long v6; // rsi
 long long v7; // rdx
 __m128i v8; // xmm0
 __m128i v9; // xmm1
 __m128i v10; // xmm0
 __m128i v11; // xmm1

 v3 = 0;
 memset(a1, 0, a2);
 if ( a2 )
 {
 if ( a2 < 8 )
 {
 v4 = 0;
 v3 = 0;
 do
LABEL_10:
 v3 += a1[v4++];
 while ( a2 != v4 );
 return v3;
 }
 v4 = a2 & 0xFFFFFFFFFFFFFFF8LL;
 v5 = (((a2 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1;
 if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) == 8 )
 {
 v8 = 0;
 v7 = 0;
 v9 = 0;
 if ( (v5 & 1) != 0 )
 {
LABEL_8:
 v8 = _mm_add_epi32(
 v8,
 _mm_unpacklo_epi16(_mm_unpacklo_epi8(_mm_cvtsi32_si128(*(unsigned int *)&a1[v7]), (__m128i)0LL), (__m128i)0LL));
 v9 = _mm_add_epi32(
 v9,
 _mm_unpacklo_epi16(
 _mm_unpacklo_epi8(_mm_cvtsi32_si128(*(unsigned int *)&a1[v7 + 4]), (__m128i)0LL),
 (__m128i)0LL));
 }
 }
 else
 {
 v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 do
 {
 v8 = _mm_add_epi32(
 _mm_unpacklo_epi16(
 _mm_unpacklo_epi8(_mm_cvtsi32_si128(*(unsigned int *)&a1[v7 + 8]), (__m128i)0LL),
 (__m128i)0LL),
 _mm_add_epi32(
 _mm_unpacklo_epi16(
 _mm_unpacklo_epi8(_mm_cvtsi32_si128(*(unsigned int *)&a1[v7]), (__m128i)0LL),
 (__m128i)0LL),
 v8));
 v9 = _mm_add_epi32(
 _mm_unpacklo_epi16(
 _mm_unpacklo_epi8(_mm_cvtsi32_si128(*(unsigned int *)&a1[v7 + 12]), (__m128i)0LL),
 (__m128i)0LL),
 _mm_add_epi32(
 _mm_unpacklo_epi16(
 _mm_unpacklo_epi8(_mm_cvtsi32_si128(*(unsigned int *)&a1[v7 + 4]), (__m128i)0LL),
 (__m128i)0LL),
 v9));
 v7 += 16;
 v6 -= 2LL;
 }
 while ( v6 );
 if ( (v5 & 1) != 0 )
 goto LABEL_8;
 }
 v10 = _mm_add_epi32(v8, v9);
 v11 = _mm_add_epi32(_mm_shuffle_epi32(v10, 238), v10);
 v3 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v11, 85), v11));
 if ( v4 == a2 )
 return v3;
 goto LABEL_10;
 }
 return v3;
}


/* Function: call_memset @ 0x2AA0 */
long long call_memset()
{
 return 0;
}


/* Function: param_strchr_strstr @ 0x2AB0 */
long long param_strchr_strstr(char *haystack, int a2, const char *a3)
{
 char *v4; // rax
 int v5; // ebp
 char *v6; // rax

 v4 = strchr(haystack, a2);
 v5 = v4 == 0 ? -1 : (unsigned int)v4 - (unsigned int)haystack;
 v6 = strstr(haystack, a3);
 return v5 + (((unsigned int)v6 - (unsigned int)haystack) | (unsigned int)-(v6 == 0));
}


/* Function: call_strchr_strstr @ 0x2AF0 */
long long call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x2B00 */
int test_standard_library_functions()
{
 unsigned int v0; // eax
 unsigned int v1; // ebp
 unsigned int v2; // eax
 int v3; // eax
 long long v4; // rsi
 FILE *v5; // rax
 FILE *v6; // rbx
 int v7; // ebp
 unsigned int v8; // eax
 int v10; // [rsp+Ch] [rbp-3Ch] BYREF
 char s[56]; // [rsp+10h] [rbp-38h] BYREF

 puts(::s);
 strcpy(s, "HelloLib");
 v0 = strlen(s);
 printf(aLibL101D, v0);
 printf(aLibL102D, 0);
 printf(aLibL103D, 12);
 printf(aLibL104D, 90);
 v1 = -1;
 printf(aLibL105D, 0xFFFFFFFFLL);
 v2 = printf("Value: %d, Name: %s\n", 42, "Test");
 printf(aLibL106D, v2);
 v3 = sscanf("123,456", "%d,%d", s, &v10);
 v4 = (unsigned int)(*(unsigned int *)s + v10);
 if ( v3 != 2 )
 v4 = 0xFFFFFFFFLL;
 printf(aLibL107D, v4);
 v5 = fopen("/etc/passwd", "r");
 if ( v5 )
 {
 v6 = v5;
 v7 = fileno(v5);
 fclose(v6);
 v1 = (v7 >> 31) | 0x2A;
 }
 printf(aLibL108D, v1);
 v8 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(aLibL109D, v8);
 printf(aLibL110D, 90);
 printf(aLibL111D, 0);
 return printf(aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x2C90 */
long long param_linux_syscall(long long a1)
{
 long v1;
 long v2;

 v1 = syscall(SYS_open, (const char *)a1, 0);
 v2 = v1;
 if ( v1 < 0 )
 return -errno;
 else
 syscall(SYS_close, v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x2CD0 */
long long call_linux_syscall()
{
 long v0;
 long v1;

 v0 = syscall(SYS_open, "/etc/passwd", 0);
 v1 = v0;
 if ( v0 < 0 )
 v1 = -errno;
 else
 syscall(SYS_close, v0);
 return (v1 >> 31) | 0x2A;
}


/* Function: param_win32_api @ 0x2D20 */
long long param_win32_api(const char *a1)
{
 int v1; // eax
 unsigned int v2; // edx
 bool v3; // sf
 long long result; // rax
 struct stat st_buf; // [rsp+8h] [rbp-90h] BYREF

 v1 = stat(a1, &st_buf);
 v2 = -2;
 if ( st_buf.st_size > 0 )
 v2 = 42;
 v3 = v1 < 0;
 result = 0xFFFFFFFFLL;
 if ( !v3 )
 return v2;
 return result;
}


/* Function: call_win32_api @ 0x2D60 */
long long call_win32_api()
{
 int v0; // eax
 unsigned int v1; // edx
 bool v2; // sf
 long long result; // rax
 struct stat buf; // [rsp+8h] [rbp-90h] BYREF

 v0 = stat("/etc/passwd", &buf);
 v1 = -2;
 if ( buf.st_size > 0 )
 v1 = 42;
 v2 = v0 < 0;
 result = 0xFFFFFFFFLL;
 if ( !v2 )
 return v1;
 return result;
}


/* Function: param_fork_exec @ 0x2DA0 */
long long param_fork_exec(char *path, long long a2)
{
 long long v2; // rax
 int v3; // eax
 long long result; // rax
 int stat_loc; // [rsp+0h] [rbp-14h] BYREF

 stat_loc = HIDWORD(v2);
 v3 = fork();
 if ( v3 < 0 )
 return 0xFFFFFFFFLL;
 if ( !v3 )
 {
 execl(path, path, (char *)a2, (char *)NULL);
 _exit(127);
 }
 if ( waitpid(v3, &stat_loc, 0) < 0 )
 return 4294967294LL;
 result = 4294967293LL;
 if ( (stat_loc & 0x7F) == 0 )
 return BYTE1(stat_loc);
 return result;
}


/* Function: call_fork_exec @ 0x2E10 */
long long call_fork_exec()
{
 int v0; // eax
 unsigned int v1; // ebx
 int stat_loc[3]; // [rsp+Ch] [rbp-Ch] BYREF

 v0 = fork();
 v1 = -1;
 if ( v0 >= 0 )
 {
 if ( !v0 )
 {
 execl("/bin/true", "/bin/true", (char *)NULL);
 _exit(127);
 }
 if ( waitpid(v0, stat_loc, 0) >= 0 && (stat_loc[0] & 0x7F) == 0 )
 return (stat_loc[0] & 0xFF00) != 0 ? -1 : 0x2A;
 }
 return v1;
}


/* Function: param_pipe_communication @ 0x2E80 */
long long param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // rbx
 long long result; // rax
 int pipedes[2]; // [rsp+8h] [rbp-30h] BYREF
 unsigned char buf[40]; // [rsp+10h] [rbp-28h] BYREF

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
 result = 4294967293LL;
 if ( v1 > 0 )
 return 42;
 return result;
}


/* Function: call_pipe_communication @ 0x2F30 */
// attributes: thunk
long long call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x2F40 */
long long param_socket_create()
{
 int v0; // eax
 int v1; // ebx
 int v2; // ebp
 long long result; // rax
 int optval; // [rsp+4h] [rbp-24h] BYREF
 struct sockaddr addr; // [rsp+8h] [rbp-20h] BYREF

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
 *(unsigned long long *)&addr.sa_data[6] = 0;
 *(unsigned long long *)&addr.sa_family = 2;
 if ( bind(v1, &addr, 0x10u) < 0 )
 {
 close(v1);
 return 4294967293LL;
 }
 else
 {
 v2 = listen(v1, 5);
 close(v1);
 result = 42;
 if ( v2 < 0 )
 return 4294967292LL;
 }
 }
 return result;
}


/* Function: call_socket_create @ 0x3000 */
// attributes: thunk
long long call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x3010 */
long long param_shmget_shmat()
{
 int v0; // eax
 unsigned int v1; // ebx
 int v2; // eax
 int v3; // eax
 int v4; // r14d
 char *v5; // rax
 char *v6; // rbp

 v0 = open("/tmp/binbench_shm", 66, 438);
 v1 = -1;
 if ( v0 >= 0 )
 {
 close(v0);
 v2 = ftok("/tmp/binbench_shm", 42);
 if ( v2 >= 0 )
 {
 v3 = shmget(v2, 0x1000u, 950);
 if ( v3 < 0 )
 {
 return (unsigned int)-2;
 }
 else
 {
 v4 = v3;
 v5 = (char *)shmat(v3, 0, 0);
 if ( v5 == (char *)-1LL )
 {
 return (unsigned int)-3;
 }
 else
 {
 v6 = v5;
 strcpy(v5, "SharedMemory");
 v1 = strlen(v5);
 shmdt(v6);
 shmctl(v4, 0, 0);
 }
 }
 }
 }
 return v1;
}


/* Function: call_shmget_shmat @ 0x30E0 */
long long call_shmget_shmat()
{
 bool v1; // cc
 long long result; // rax

 v1 = (int)param_shmget_shmat() <= 0;
 result = 0xFFFFFFFFLL;
 if ( !v1 )
 return 42;
 return result;
}


/* Function: param_signal_handling @ 0x3100 */
long long param_signal_handling()
{
 unsigned int v0; // ebx
 bool v1; // cc
 long long result; // rax
 unsigned int v3; // ebx

 if ( signal(10, signal_handler) == SIG_ERR )
 return 0xFFFFFFFFLL;
 if ( signal(14, signal_handler) == SIG_ERR )
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
 v1 = v0-- <= 1;
 }
 while ( !v1 );
 }
 if ( !signal_received )
 return 4294967293LL;
 result = 4294967292LL;
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
 v1 = v3-- <= 1;
 }
 while ( !v1 );
 }
 result = 4294967291LL;
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


/* Function: signal_handler @ 0x3230 */
void signal_handler(int a1)
{
 signal_received = 1;
 signal_number = a1;
}


/* Function: call_signal_handling @ 0x3250 */
// attributes: thunk
long long call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x3260 */
int test_system_calls()
{
 int v0; // eax
 int v1; // ebx
 int v2; // eax
 long long v3; // rsi
 unsigned int v4; // ebx
 int v5; // eax
 long long v6; // rsi
 unsigned int v7; // eax
 unsigned int v8; // eax
 unsigned int v9; // eax
 struct stat buf; // [rsp+8h] [rbp-A0h] BYREF

 puts(asc_4443);
 v0 = syscall(SYS_open, "/etc/passwd", 0);
 v1 = v0;
 if ( v0 < 0 )
 v1 = -errno;
 else
 syscall(SYS_close, v0);
 printf(aSysL301D, (unsigned int)((v1 >> 31) | 0x2A));
 v2 = stat("/etc/passwd", &buf);
 v3 = 4294967294LL;
 if ( buf.st_size > 0 )
 v3 = 42;
 v4 = -1;
 if ( v2 < 0 )
 v3 = 0xFFFFFFFFLL;
 printf(aSysL302D, v3);
 v5 = fork();
 v6 = 0xFFFFFFFFLL;
 if ( v5 >= 0 )
 {
 if ( !v5 )
 {
 execl("/bin/true", "/bin/true", (char *)NULL);
 _exit(127);
 }
 if ( waitpid(v5, (int *)&buf, 0) < 0 || (buf.st_dev & 0x7F) != 0 )
 v6 = 0xFFFFFFFFLL;
 else
 v6 = (buf.st_dev & 0xFF00) != 0 ? -1 : 0x2A;
 }
 printf(aSysL303D, v6);
 v7 = param_pipe_communication();
 printf(aSysL304D, v7);
 v8 = param_socket_create();
 printf(aSysL305D, v8);
 if ( (int)param_shmget_shmat() > 0 )
 v4 = 42;
 printf(aSysL306D, v4);
 v9 = param_signal_handling();
 return printf(aSysL307D, v9);
}


/* Function: thread_compute @ 0x33D0 */
void * thread_compute(void *a1)
{
 int v1; // ebx
 unsigned int *result; // rax

 v1 = *(unsigned int *)a1 * *(unsigned int *)a1;
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: param_pthread_create @ 0x33F0 */
long long param_pthread_create(int a1)
{
 unsigned int v1; // ebx
 int arg; // [rsp+Ch] [rbp-1Ch] BYREF
 void *thread_return; // [rsp+10h] [rbp-18h] BYREF
 pthread_t newthread[2]; // [rsp+18h] [rbp-10h] BYREF

 arg = a1;
 v1 = -1;
 if ( !pthread_create(newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 pthread_join(newthread[0], &thread_return);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 return v1;
}


/* Function: call_pthread_create @ 0x3440 */
long long call_pthread_create()
{
 unsigned int v0; // ebx
 int arg; // [rsp+Ch] [rbp-1Ch] BYREF
 void *thread_return; // [rsp+10h] [rbp-18h] BYREF
 pthread_t newthread[2]; // [rsp+18h] [rbp-10h] BYREF

 arg = 7;
 v0 = -1;
 if ( !pthread_create(newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 pthread_join(newthread[0], &thread_return);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 return v0;
}


/* Function: thread_sum @ 0x34A0 */
void * thread_sum(void *a1)
{
 int v1; // eax
 bool v2; // cc
 long long v3; // rax
 unsigned int *a1_u = (unsigned int *)a1;

 a1_u[2] = 0;
 v1 = a1_u[1];
 v2 = v1 < a1_u[0];
 v3 = (unsigned int)(v1 - a1_u[0]);
 if ( !v2 )
 a1_u[2] = (((unsigned long long)(unsigned int)(~a1_u[0] + a1_u[1]) * v3) >> 1) + a1_u[0] + v3 * (a1_u[0] + 1);
 return 0;
}


/* Function: param_pthread_join @ 0x34E0 */
long long param_pthread_join()
{
 unsigned int v0; // ebx
 int v1; // r14d
 int v2; // ebp
 long long arg; // [rsp+0h] [rbp-68h] BYREF
 long long arg_8; // [rsp+8h] [rbp-60h] BYREF
 long long v6; // [rsp+10h] [rbp-58h]
 long long v7; // [rsp+18h] [rbp-50h] BYREF
 int v8; // [rsp+20h] [rbp-48h]
 pthread_t newthread; // [rsp+30h] [rbp-38h] BYREF
 pthread_t th; // [rsp+38h] [rbp-30h] BYREF
 pthread_t v11[5]; // [rsp+40h] [rbp-28h] BYREF

 arg_8 = 0xB00000000LL;
 v8 = 0;
 arg = 0xA00000001LL;
 v6 = 20;
 v7 = 0x1E00000015LL;
 v0 = -1;
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_sum, &arg)
 && !pthread_create(&th, 0, (void *(*)(void *))thread_sum, (char *)&arg_8 + 4)
 && !pthread_create(v11, 0, (void *(*)(void *))thread_sum, &v7) )
 {
 v0 = -2;
 if ( !pthread_join(newthread, 0) )
 {
 v1 = arg_8;
 if ( !pthread_join(th, 0) )
 {
 v2 = HIDWORD(v6);
 if ( !pthread_join(v11[0], 0) )
 return (unsigned int)(v8 + v1 + v2);
 }
 }
 }
 return v0;
}


/* Function: call_pthread_join @ 0x35E0 */
// attributes: thunk
long long call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x35F0 */
void * thread_increment(void *a1)
{
 int v1; // ebp

 v1 = *(int *)a1;
 if ( *(int *)a1 > 0 )
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


/* Function: param_mutex_lock @ 0x3630 */
long long param_mutex_lock(int a1, int a2)
{
 long long v2; // rax
 int v3; // r14d
 char *v4; // rax
 char *v5; // rbx
 long long v6; // r14
 long long i; // rbp
 long long result; // rax
 int v9; // [rsp+0h] [rbp-38h] BYREF
 int v10; // [rsp+4h] [rbp-34h]

 v10 = HIDWORD(v2);
 v3 = a1;
 v9 = a2;
 v4 = (char *)malloc(8LL * a1);
 if ( !v4 )
 return 0xFFFFFFFFLL;
 v5 = v4;
 shared_counter = 0;
 if ( a1 > 0 )
 {
 v10 = a1;
 v6 = 0;
 do
 {
 if ( pthread_create((pthread_t *)&v5[v6], 0, (void *(*)(void *))thread_increment, &v9) )
 {
 free(v5);
 return 4294967294LL;
 }
 v6 += 8;
 }
 while ( 8LL * (unsigned int)a1 != v6 );
 v3 = v10;
 if ( v10 > 0 )
 {
 for ( i = 0; i != a1; pthread_join(*(unsigned long long *)&v5[8 * i++], 0) )
 ;
 }
 }
 free(v5);
 result = 4294967293LL;
 if ( shared_counter == v9 * v3 )
 return 42;
 return result;
}


/* Function: call_mutex_lock @ 0x3720 */
long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x3730 */
unsigned int * consumer_thread(void *a1)
{
 int v1; // ebx
 unsigned int *result; // rax

 pthread_mutex_lock(&cond_mutex);
 if ( !ready )
 {
 do
 pthread_cond_wait(&cond, &cond_mutex);
 while ( ready != 1 );
 }
 v1 = 42;
 if ( !data )
 v1 = 0;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: producer_thread @ 0x37B0 */
void * producer_thread(void *a1)
{
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x37F0 */
long long param_condition_variable()
{
 unsigned int v0; // ebx
 pthread_t newthread; // [rsp+8h] [rbp-20h] BYREF
 void *thread_return; // [rsp+10h] [rbp-18h] BYREF
 pthread_t th[2]; // [rsp+18h] [rbp-10h] BYREF

 ready = 0;
 data = 0;
 v0 = -1;
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 {
 if ( pthread_create(th, 0, producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return (unsigned int)-2;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 pthread_join(th[0], 0);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 }
 return v0;
}


/* Function: call_condition_variable @ 0x3880 */
// attributes: thunk
long long call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x3890 */
void * thread_atomic_increment(void *a1)
{
 int *a1_int = (int *)a1;
 int v1; // esi
 int v2; // edx
 signed int v3; // ecx
 unsigned int v4; // esi

 v1 = *a1_int;
 if ( *a1_int > 0 )
 {
 v2 = *a1_int & 3;
 v3 = 0;
 if ( (unsigned int)(v1 - 1) >= 3 )
 {
 v4 = v1 & 0xFFFFFFFC;
 v3 = 0;
 do
 {
 _InterlockedAdd(&atomic_counter, 1u);
 _InterlockedCompareExchange(&atomic_counter, v3 + 1000, v3);
 _InterlockedAdd(&atomic_counter, 1u);
 _InterlockedCompareExchange(&atomic_counter, v3 + 1001, v3 + 1);
 _InterlockedAdd(&atomic_counter, 1u);
 _InterlockedCompareExchange(&atomic_counter, v3 + 1002, v3 + 2);
 _InterlockedAdd(&atomic_counter, 1u);
 _InterlockedCompareExchange(&atomic_counter, v3 + 1003, v3 + 3);
 v3 += 4;
 }
 while ( v3 != v4 );
 }
 for ( ; v2; --v2 )
 {
 _InterlockedAdd(&atomic_counter, 1u);
 _InterlockedCompareExchange(&atomic_counter, v3 + 1000, v3);
 ++v3;
 }
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x3950 */
void * thread_atomic_load_store(void *a1)
{
 _InterlockedExchange(&atomic_counter, atomic_counter + 100);
 return 0;
}


/* Function: param_atomic_ops @ 0x3970 */
long long param_atomic_ops(int a1, int a2)
{
 unsigned long long *v2; // rax
 unsigned long long *v3; // rbx
 long long v4; // r14
 long long i; // rbp
 int v6; // ebp
 long long result; // rax
 int arg; // [rsp+Ch] [rbp-3Ch] BYREF
 pthread_t newthread[7]; // [rsp+10h] [rbp-38h] BYREF

 arg = a2;
 v2 = malloc(8LL * a1);
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 _InterlockedExchange(&atomic_counter, 0);
 if ( a1 <= 0 )
 {
LABEL_6:
 if ( !pthread_create(newthread, 0, thread_atomic_load_store, 0) )
 pthread_join(newthread[0], 0);
 if ( a1 > 0 )
 {
 for ( i = 0; i != a1; pthread_join(v3[i++], 0) )
 ;
 }
 v6 = atomic_counter;
 free(v3);
 result = 4294967293LL;
 if ( v6 > 0 )
 return 42;
 }
 else
 {
 v4 = 0;
 while ( !pthread_create(&v3[v4], 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 if ( a1 == ++v4 )
 goto LABEL_6;
 }
 free(v3);
 return 4294967294LL;
 }
 return result;
}


/* Function: call_atomic_ops @ 0x3A80 */
long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Linux-compatible TLS simulation functions */
static __thread unsigned int tls_value = 0;
static __thread char tls_buffer[64];

static unsigned int __readfsdword_stub(unsigned int offset)
{
 (void)offset;
 return tls_value;
}

static void __writefsdword_stub(unsigned int offset, unsigned int value)
{
 (void)offset;
 tls_value = value;
}

static unsigned long long __readfsqword_stub(unsigned int offset)
{
 (void)offset;
 return (unsigned long long)(uintptr_t)&tls_buffer[32];
}

/* Function: thread_tls_test @ 0x3A90 */
void * thread_tls_test(void *a1)
{
 unsigned int v1; // ebx
 unsigned int *result; // rax
 char *tls_ptr;

 v1 = __readfsdword_stub(0xFFFFFFD0);
 __writefsdword_stub(0xFFFFFFD0, v1 + 50);
 tls_ptr = (char *)__readfsqword_stub(0);
 strncpy(tls_ptr - 32, (const char *)a1, 0x1Fu);
 result = malloc(8u);
 *result = v1;
 result[1] = v1 + 50;
 return result;
}


/* Function: param_thread_local_storage @ 0x3AE0 */
long long param_thread_local_storage(int a1)
{
 void *v1; // r14
 void *v2; // r13
 long long result; // rax
 long long i; // rbx
 char *v5; // rax
 pthread_t *v6; // rbx
 long long v7; // r14
 long long v8; // rbp
 int v9; // r15d
 int v10; // ebx
 long long v11; // rbx
 int v12; // [rsp+4h] [rbp-44h]
 pthread_t *ptr; // [rsp+8h] [rbp-40h]
 void *thread_return; // [rsp+10h] [rbp-38h] BYREF

 v1 = malloc(8LL * a1);
 v2 = malloc(8LL * a1);
 result = 0xFFFFFFFFLL;
 if ( v1 && v2 )
 {
 if ( a1 <= 0 )
 {
 v12 = a1;
 v10 = 0;
 v9 = 0;
LABEL_13:
 free(v2);
 free(v1);
 result = 4294967293LL;
 if ( !(v10 ^ (100 * v12) | v9 ^ (150 * v12)) )
 return 42;
 }
 else
 {
 for ( i = 0; i != a1; i++ )
 {
 v5 = (char *)malloc(0x10u);
 *((unsigned long long *)v2 + i) = v5;
 snprintf(v5, 0x10u, "Thread-%d", (int)i);
 }
 v6 = (pthread_t *)v1;
 v7 = 0;
 ptr = v6;
 while ( !pthread_create(v6, 0, (void *(*)(void *))thread_tls_test, *((void **)v2 + v7)) )
 {
 ++v7;
 ++v6;
 if ( a1 == v7 )
 {
 v12 = a1;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 v1 = ptr;
 do
 {
 pthread_join(ptr[v8], &thread_return);
 v10 += *(unsigned int *)thread_return;
 v9 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free(*((void **)v2 + v8++));
 }
 while ( a1 != v8 );
 goto LABEL_13;
 }
 }
 v11 = -1;
 do
 free(*((void **)v2 + ++v11));
 while ( v7 != v11 );
 free(v2);
 free(ptr);
 return 4294967294LL;
 }
 }
 return result;
}


/* Function: call_thread_local_storage @ 0x3CA0 */
long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3CB0 */
int test_thread_concurrency()
{
 unsigned int v0; // ebx
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 int arg; // [rsp+Ch] [rbp-1Ch] BYREF
 void *thread_return; // [rsp+10h] [rbp-18h] BYREF
 pthread_t newthread[2]; // [rsp+18h] [rbp-10h] BYREF

 puts(asc_445E);
 arg = 7;
 v0 = -1;
 if ( !pthread_create(newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 pthread_join(newthread[0], &thread_return);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
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
 return printf(aThrL306D, v5);
}


/* Function: main @ 0x3DA0 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: .term_proc @ 0x3DB4 */
void term_proc()
{
 ;
}


/* External function references (from decompilation) */
/* These are standard library functions used in the code */
