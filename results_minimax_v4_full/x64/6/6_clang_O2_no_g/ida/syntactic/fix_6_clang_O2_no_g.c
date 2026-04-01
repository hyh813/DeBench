/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <errno.h>
#include <immintrin.h>
#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>
#include <sys/syscall.h>
#include <fcntl.h>

/* Macro definitions */
#define HIDWORD(x) ((uint32_t)((uint64_t)(x) >> 32))
#define BYTE1(x) ((uint8_t)((uint16_t)(x) >> 8))

/* Function declarations not in standard headers */
int __isoc99_sscanf(const char *str, const char *format, ...);
int __isoc99_snprintf(char *str, size_t size, const char *format, ...);
key_t ftok(const char *pathname, int proj_id);
int __libc_start_main(int (*main) (int, char **, char **), int argc, char **argv, void (*init) (void), void (*fini) (void), void (*rtld_fini) (void), void *stack_end);
int *__errno_location(void);
void __cxa_finalize(void *d);
void __gmon_start__(void);

/* Additional missing library function declarations not in standard headers */
/* Note: All standard library functions are already declared in included headers (stdio.h, stdlib.h, etc.) */
char *strncpy(char *dest, const char *src, size_t n);



/* Atomic operation macros for Linux (equivalent to Windows _Interlocked* intrinsics) */
#define _InterlockedAdd(addr, val) __sync_add_and_fetch((addr), (val))
#define _InterlockedCompareExchange(addr, exchange, comparand) __sync_val_compare_and_swap((addr), (comparand), (exchange))
#define _InterlockedExchange(addr, val) (__sync_val_compare_and_swap((addr), *(addr), (val)), (val))

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* sockaddr structure for socket operations */
typedef struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
} sockaddr;

/* sockaddr_in structure for Internet addresses */
typedef struct sockaddr_in {
    unsigned short sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    unsigned char sin_zero[8];
} sockaddr_in;

/* in_addr structure for IP addresses */
typedef struct in_addr {
    unsigned int s_addr;
} in_addr;

/* shmid_ds structure for shared memory operations */
struct shmid_ds {
    key_t shm_key;
    size_t shm_segsz;
    pid_t shm_cpid;
    pid_t shm_lpid;
    unsigned short shm_nattch;
    unsigned short shm_cnattch;
    time_t shm_atime;
    time_t shm_dtime;
    time_t shm_ctime;
    void *shm_internal;
};

/* Weak symbol for _gmon_start__ */
extern void _gmon_start__(void) __attribute__((weak));

/* Global variables - declared as extern since they're defined elsewhere */
extern int signal_received;
extern int signal_number;
extern int shared_counter;
extern int ready;
extern int data;
extern int atomic_counter;
extern pthread_mutex_t counter_mutex;
extern pthread_mutex_t cond_mutex;
extern pthread_cond_t cond;

/* Forward declarations */
void signal_handler(int a1);

/* String constants */
/* Use unsigned char arrays and cast to __m128i where needed */
static const unsigned char xmmword_4030[16] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F};
static const unsigned char xmmword_4040[16] = {0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00};
static const unsigned char xmmword_4050[16] = {0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00};
static const unsigned char xmmword_4060[16] = {0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00};
static const unsigned char xmmword_4070[16] = {0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00};
static const unsigned char xmmword_4080[16] = {0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00};
static const unsigned char xmmword_4090[16] = {0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00};

/* Use unsigned char arrays for SIMD operations - these were incorrectly replaced */
static const unsigned char xmmword_4020[16] = "BinBench Test";
static const unsigned char xmmword_4010[16] = " Data";

/* String constants for library tests */
static const char *s = "TestLib";
static const char aLibL101D[] = "LibL 1.01: strlen=%u\n";
static const char aLibL102D[] = "LibL 1.02: %d\n";
static const char aLibL103D[] = "LibL 1.03: %d\n";
static const char aLibL104D[] = "LibL 1.04: %d\n";
static const char aLibL105D[] = "LibL 1.05: %u\n";
static const char aLibL106D[] = "LibL 1.06: %d\n";
static const char aLibL107D[] = "LibL 1.07: %lld\n";
static const char aLibL108D[] = "LibL 1.08: %u\n";
static const char aLibL109D[] = "LibL 1.09: %u\n";
static const char aLibL110D[] = "LibL 1.10: %d\n";
static const char aLibL111D[] = "LibL 1.11: %d\n";
static const char aLibL112D[] = "LibL 1.12: %d\n";

/* String constants for system call tests */
static const char asc_4443[] = "System Library Test\n";
static const char aSysL301D[] = "SysL 3.01: %u\n";
static const char aSysL302D[] = "SysL 3.02: %u\n";
static const char aSysL303D[] = "SysL 3.03: %u\n";
static const char aSysL304D[] = "SysL 3.04: %u\n";
static const char aSysL305D[] = "SysL 3.05: %u\n";
static const char aSysL306D[] = "SysL 3.06: %u\n";
static const char aSysL307D[] = "SysL 3.07: %u\n";

/* String constants for thread tests */
static const char asc_445E[] = "Thread Concurrency Test\n";
static const char aThrL301D[] = "ThrL 3.01: %u\n";
static const char aThrL302D[] = "ThrL 3.02: %d\n";
static const char aThrL303D[] = "ThrL 3.03: %d\n";
static const char aThrL304D[] = "ThrL 3.04: %d\n";
static const char aThrL305D[] = "ThrL 3.05: %d\n";
static const char aThrL306D[] = "ThrL 3.06: %d\n";

/* Macro to cast arrays to __m128i */
#define LOAD_XMM(x) _mm_load_si128((const __m128i *)(x))

/* External declarations - removed duplicate _gmon_start__ */

/* Function: .init_proc @ 0x2000 */
void init_proc(void)
{
 /* Initialize _gmon_start__ if available */
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 /* Empty stub function */
 return;
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
 uint32_t v4_low; // low 32 bits
 uint32_t v4_high; // high 32 bits

 v2 = (unsigned int)__isoc99_sscanf(a1, "%d,%d", &v4_high, &v4_low) == 2;
 result = 0xFFFFFFFFLL;
 if ( v2 )
 return (unsigned int)(v4_high + v4_low);
 return result;
}


/* Function: call_scanf @ 0x2610 */
long long call_scanf()
{
 bool v1; // zf
 long long result; // rax
 uint32_t v3_low; // low 32 bits
 uint32_t v3_high; // high 32 bits

 v1 = (unsigned int)__isoc99_sscanf("123,456", "%d,%d", &v3_high, &v3_low) == 2;
 result = 0xFFFFFFFFLL;
 if ( v1 )
 return (unsigned int)(v3_high + v3_low);
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
 unsigned char v5buf[48]; // [rsp+0h] [rbp-38h] BYREF
 __m128i *v5;

 v1 = fopen(name, "w+");
 if ( !v1 )
 return 0xFFFFFFFFLL;
 v2 = v1;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v2);
 v3 = fread(v5buf, 1u, 0x12u, v2);
 v5buf[v3] = 0;
 fclose(v2);
 unlink(name);
 result = 4294967293LL;
 if ( v3 == 18 )
 {
 result = 4294967293LL;
 v5 = (__m128i *)v5buf;
 if ( _mm_movemask_epi8(
 _mm_and_si128(
 _mm_cmpeq_epi8(_mm_load_si128(v5), _mm_load_si128((const __m128i *)xmmword_4020)),
 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v5buf + 3)), _mm_load_si128((const __m128i *)xmmword_4010)))) == 0xFFFF )
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
 int s_val; // [rsp+10h] [rbp-38h] BYREF
 char s_buf[56]; // [rsp+14h] [rbp-34h] BYREF

 puts("TestLib");
 strcpy(s_buf, "HelloLib");
 v0 = strlen(s);
 printf(aLibL101D, v0);
 printf(aLibL102D, 0);
 printf(aLibL103D, 12);
 printf(aLibL104D, 90);
 v1 = -1;
 printf(aLibL105D, 0xFFFFFFFFLL);
 v2 = printf("Value: %d, Name: %s\n", 42, "Test");
 printf(aLibL106D, v2);
 v3 = __isoc99_sscanf("123,456", "%d,%d", &s_val, &v10);
 v4 = (unsigned int)(s_val + v10);
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
 int v1; // eax
 unsigned int v2; // ebx

 v1 = syscall(2, a1, 0);
 v2 = v1;
 if ( v1 < 0 )
 return (unsigned int)-*__errno_location();
 else
 syscall(3, (unsigned int)v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x2CD0 */
long long call_linux_syscall()
{
 int v0; // eax
 int v1; // ebx

 v0 = syscall(2, "/etc/passwd", 0);
 v1 = v0;
 if ( v0 < 0 )
 v1 = -*__errno_location();
 else
 syscall(3, (unsigned int)v0);
 return (v1 >> 31) | 0x2Au;
}


/* Function: param_win32_api @ 0x2D20 */
long long param_win32_api(const char *a1)
{
 int v1; // eax
 unsigned int v2; // edx
 bool v3; // sf
 long long result; // rax
 struct stat buf; // [rsp+8h] [rbp-90h] BYREF

 v1 = stat(a1, &buf);
 v2 = -2;
 if ( buf.st_size > 0 )
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
 execl(path, path, a2, 0);
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
 execl("/bin/true", "/bin/true", 0, 0);
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
 struct sockaddr_in addr; // [rsp+8h] [rbp-20h] BYREF

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
 memset(&addr, 0, sizeof(addr));
 addr.sin_family = 2;
 if ( bind(v1, (struct sockaddr *)&addr, 0x10u) < 0 )
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
long long call_shmget_shmat(long long a1)
{
 bool v1; // cc
 long long result; // rax

 v1 = (int)param_shmget_shmat(a1) <= 0;
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
 v0 = syscall(2, "/etc/passwd", 0);
 v1 = v0;
 if ( v0 < 0 )
 v1 = -*__errno_location();
 else
 syscall(3, (unsigned int)v0);
 printf(aSysL301D, (v1 >> 31) | 0x2Au);
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
 execl("/bin/true", "/bin/true", 0, 0);
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
 if ( (int)param_shmget_shmat(aSysL305D) > 0 )
 v4 = 42;
 printf(aSysL306D, v4);
 v9 = param_signal_handling();
 return printf(aSysL307D, v9);
}


/* Function: thread_compute @ 0x33D0 */
unsigned int * thread_compute(unsigned int *a1)
{
 int v1; // ebx
 unsigned int *result; // rax

 v1 = *a1 * *a1;
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
void * thread_sum(unsigned int *a1)
{
 int v1; // eax
 bool v2; // cc
 long long v3; // rax

 a1[2] = 0;
 v1 = a1[1];
 v2 = v1 < *a1;
 v3 = (unsigned int)(v1 - *a1);
 if ( !v2 )
 a1[2] = (((unsigned long long)(unsigned int)(~*a1 + a1[1]) * v3) >> 1) + *a1 + v3 * (*a1 + 1);
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
void * thread_increment(int *a1)
{
 int v1; // ebp

 v1 = *a1;
 if ( *a1 > 0 )
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
void * thread_atomic_increment(int *a1)
{
 int v1; // esi
 int v2; // edx
 signed int v3; // ecx
 unsigned int v4; // esi

 v1 = *a1;
 if ( *a1 > 0 )
 {
 v2 = *a1 & 3;
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


/* Function: thread_tls_test @ 0x3A90 */
unsigned int * thread_tls_test(const char *a1)
{
 unsigned int v1; // ebx
 unsigned int *result; // rax

 /* Linux TLS via pthread (simulating Windows __readfsdword/__writefsdword) */
 static __thread unsigned int tls_value = 0;
 v1 = tls_value;
 tls_value = v1 + 50;
 strncpy((char *)(&tls_value) - 32, a1, 0x1Fu);
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
 for ( i = 0; i != a1; snprintf(v5, 0x10u, "Thread-%d", i++) )
 {
 v5 = (char *)malloc(0x10u);
 *((unsigned long long *)v2 + i) = v5;
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
