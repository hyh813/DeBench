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

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <netinet/in.h>
#include <errno.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <fcntl.h>
#include <immintrin.h>

/* Missing global variables */
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
int atomic_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int ready = 0;
int data = 0;

/* Missing string literals */
static const char *s = "HelloLib";
static const char *aLibL101D = "LibL101D: %d\n";
static const char *aLibL102D = "LibL102D: %d\n";
static const char *aLibL103D = "LibL103D: %d\n";
static const char *aLibL104D = "LibL104D: %d\n";
static const char *aLibL105D = "LibL105D: %d\n";
static const char *aLibL106D = "LibL106D: %d\n";
static const char *aLibL107D = "LibL107D: %d\n";
static const char *aLibL108D = "LibL108D: %d\n";
static const char *aLibL109D = "LibL109D: %d\n";
static const char *aLibL110D = "LibL110D: %d\n";
static const char *aLibL111D = "LibL111D: %d\n";
static const char *aLibL112D = "LibL112D: %d\n";
static const char *aSysL301D = "SysL301D: %d\n";
static const char *aSysL302D = "SysL302D: %d\n";
static const char *aSysL303D = "SysL303D: %d %d\n";
static const char *aSysL304D = "SysL304D: %d\n";
static const char *aSysL305D = "SysL305D: %d\n";
static const char *aSysL306D = "SysL306D: %d\n";
static const char *aSysL307D = "SysL307D: %d\n";
static const char *aThrL301D = "ThrL301D: %d\n";
static const char *aThrL302D = "ThrL302D: %d\n";
static const char *aThrL303D = "ThrL303D: %d\n";
static const char *aThrL304D = "ThrL304D: %d\n";
static const char *aThrL305D = "ThrL305D: %d\n";
static const char *aThrL306D = "ThrL306D: %d\n";
static const char *asc_43D3 = "System Calls Test\n";
static const char *asc_43EE = "Thread Concurrency Test\n";

/* Missing SSE constants - zero-initialized */
static const unsigned char xmmword_4010[16] = {0};
static const unsigned char xmmword_4020[16] = {0};

/* Macro definitions */
#define JUMPOUT(x) return
#define HIDWORD(x) ((int32_t)((uint32_t)((x) >> 32) & 0xFFFFFFFF))
#define BYTE1(x) ((uint8_t)((uint32_t)(x) >> 8) & 0xFF)

/* Forward declarations */
void signal_handler(int sig);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/6/6_clang_O1_g
 * Processor: pc
 */

/* Missing _gmon_start__ stub for profiling */
void _gmon_start__(void) {}

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
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_strcpy @ 0x24B0 */
int param_strcpy(char *dst, const char *src)
{
 strcpy(dst, src);
 return strlen(dst);
}


/* Function: call_strcpy @ 0x24D0 */
int call_strcpy()
{
 char v1[40]; // [rsp+0h] [rbp-28h] BYREF

 strcpy(v1, "HelloLib");
 return strlen(v1);
}


/* Function: param_strcmp @ 0x2500 */
int param_strcmp(const char *s1, const char *s2)
{
 int v2; // eax
 int v3; // ecx
 bool v4; // cc
 int result; // eax

 v2 = strcmp(s1, s2);
 v3 = -(v2 != 0);
 v4 = v2 <= 0;
 result = 1;
 if ( v4 )
 return v3;
 return result;
}


/* Function: call_strcmp @ 0x2520 */
int call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x2530 */
int param_strlen(const char *str)
{
 return strlen(str);
}


/* Function: call_strlen @ 0x2540 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x2550 */
int param_memcpy(void *dst, const void *src, size_t n)
{
 int v3; // ebx

 v3 = n;
 memcpy(dst, src, n);
 return v3;
}


/* Function: call_memcpy @ 0x2560 */
int call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x2570 */
int param_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // eax
 int v4; // ecx
 bool v5; // cc
 int result; // eax

 v3 = memcmp(p1, p2, n);
 v4 = -(v3 != 0);
 v5 = v3 <= 0;
 result = 1;
 if ( v5 )
 return v4;
 return result;
}


/* Function: call_memcmp @ 0x2590 */
int call_memcmp()
{
 return -1;
}


/* Function: param_printf @ 0x25A0 */
int param_printf(int x, const char *name)
{
 return printf("Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x25C0 */
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x25E0 */
int param_scanf(const char *input_str)
{
 bool v2; // zf
 int result; // eax
 int v3; // [rsp+0h] [rbp-8h] BYREF
 int v4; // high dword for sscanf

 v3 = 0;
 v4 = 0;
 v2 = (unsigned int)sscanf(input_str, "%d,%d", &v4, &v3) == 2;
 result = -1;
 if ( v2 )
 return v4 + v3;
 return result;
}


/* Function: call_scanf @ 0x2610 */
int call_scanf()
{
 int v0; // rax
 bool v1; // zf
 int result; // eax
 int v3; // [rsp+0h] [rbp-8h] BYREF
 int v4; // high dword for sscanf

 v0 = 0;
 v3 = 0;
 v4 = 0;
 v1 = (unsigned int)sscanf("123,456", "%d,%d", &v4, &v3) == 2;
 result = -1;
 if ( v1 )
 return v4 + v3;
 return result;
}


/* Function: param_fopen_fclose @ 0x2650 */
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


/* Function: call_fopen_fclose @ 0x2690 */
int call_fopen_fclose()
{
 FILE *v0; // rax
 FILE *v1; // r14
 int v2; // ebx

 v0 = fopen("/etc/passwd", "r");
 if ( !v0 )
 return -1;
 v1 = v0;
 v2 = fileno(v0);
 fclose(v1);
 return (v2 >> 31) | 0x2A;
}


/* Function: param_fread_fwrite @ 0x26E0 */
int param_fread_fwrite(const char *tmpfile)
{
 FILE *v1; // rax
 FILE *v2; // rbx
 size_t v3; // r12
 int result; // eax
 char buf[24]; // [rsp+0h] [rbp-48h] BYREF

 v1 = fopen(tmpfile, "w+");
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v2);
 v3 = fread(buf, 1u, 0x12u, v2);
 buf[v3] = 0;
 fclose(v2);
 unlink(tmpfile);
 result = -3;
 if ( v3 == 18 )
 {
 // Compare loaded data with zeros (SSE comparison)
 __m128i loaded = _mm_loadu_si128((const __m128i *)buf);
 __m128i zero = _mm_setzero_si128();
 result = -3;
 if ( _mm_movemask_epi8(
 _mm_and_si128(
 _mm_cmpeq_epi8(loaded, zero),
 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(buf + 16)), zero))) == 0xFFFF )
 return 42;
 }
 }
 else
 {
 fclose(v2);
 return -2;
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x27C0 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x27D0 */
int param_malloc_free(size_t size)
{
 unsigned int *v1; // rax
 int v2; // ecx
 long long i; // rdx
 int v4; // ebx

 v1 = malloc(4 * size);
 if ( !v1 )
 return -1;
 if ( size )
 {
 v2 = 0;
 for ( i = 0; i != size; ++i )
 {
 v1[i] = v2;
 v2 += 10;
 }
 }
 v4 = *v1 + v1[size - 1];
 free(v1);
 return v4;
}


/* Function: call_malloc_free @ 0x2820 */
int call_malloc_free()
{
 unsigned int *v0; // rax
 long long v1; // rcx
 unsigned int *v2; // rdx
 int v3; // ebx

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = 0;
 v2 = v0;
 do
 {
 *v2 = v1;
 v1 += 10;
 ++v2;
 }
 while ( v1 != 100 );
 v3 = *v0 + v0[9];
 free(v0);
 return v3;
}


/* Function: param_memset @ 0x2870 */
int param_memset(void *buffer, size_t size)
{
 int v2; // ebp
 long long v3; // rax

 v2 = 0;
 memset(buffer, 0, size);
 if ( size )
 {
 v3 = 0;
 v2 = 0;
 do
 v2 += *((unsigned char *)buffer + v3++);
 while ( size != v3 );
 }
 return v2;
}


/* Function: call_memset @ 0x28B0 */
int call_memset()
{
 long long i; // rax
 unsigned int v2[10]; // [rsp+0h] [rbp-28h]

 for ( i = 0; i != 10; ++i )
 v2[i] = 255;
 return 0;
}


/* Function: param_strchr_strstr @ 0x28F0 */
int param_strchr_strstr(const char *str, char ch_0, const char *substr)
{
 char *v4; // rax
 int v5; // ebp
 char *v6; // rax

 v4 = strchr(str, ch_0);
 v5 = v4 == 0 ? -1 : (unsigned int)v4 - (unsigned int)str;
 v6 = strstr(str, substr);
 return v5 + (v6 == 0 ? -1 : (unsigned int)v6 - (unsigned int)str);
}


/* Function: call_strchr_strstr @ 0x2930 */
int call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x2940 */
void test_standard_library_functions()
{
 unsigned int v0; // eax
 unsigned int v1; // r14d
 unsigned int v2; // eax
 int v3; // eax
 long long v4; // rsi
 FILE *v5; // rax
 unsigned int v6; // ebp
 FILE *v7; // rbx
 int v8; // ebp
 unsigned int v9; // eax
 unsigned int *v10; // rax
 long long v11; // rcx
 unsigned int *v12; // rdx
 long long v13; // rbx
 int v14; // [rsp+Ch] [rbp-4Ch] BYREF
 char buf[16]; // [rsp+10h] [rbp-48h] BYREF
 long long v16; // [rsp+30h] [rbp-28h]

 strcpy(buf, "HelloLib");
 puts(buf);
 v0 = strlen(buf);
 printf(aLibL101D, v0);
 printf(aLibL102D, 0);
 printf(aLibL103D, 12);
 printf(aLibL104D, 90);
 v1 = -1;
 printf(aLibL105D, 0xFFFFFFFFLL);
 v2 = printf("Value: %d, Name: %s\n", 42, "Test");
 printf(aLibL106D, v2);
 int tmp_val;
 v3 = sscanf("123,456", "%d,%d", &tmp_val, &v14);
 v4 = (unsigned int)(tmp_val + v14);
 if ( v3 != 2 )
 v4 = 0xFFFFFFFFLL;
 printf(aLibL107D, v4);
 v5 = fopen("/etc/passwd", "r");
 v6 = -1;
 if ( v5 )
 {
 v7 = v5;
 v8 = fileno(v5);
 fclose(v7);
 v6 = (v8 >> 31) | 0x2A;
 }
 printf(aLibL108D, v6);
 v9 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(aLibL109D, v9);
 v10 = malloc(0x28u);
 if ( v10 )
 {
 v11 = 0;
 v12 = v10;
 do
 {
 *v12 = v11;
 v11 += 10;
 ++v12;
 }
 while ( v11 != 100 );
 v1 = *v10 + v10[9];
 free(v10);
 }
 v13 = 0;
 printf(aLibL110D, v1);
 do
 *(unsigned int *)&s[4 * v13++] = 255;
 while ( v13 != 10 );
 *(unsigned long long *)s = 0;
 v16 = 0;
 printf(aLibL111D, 0);
 printf(aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x2B50 */
int param_linux_syscall(const char *pathname)
{
 int v1; // eax
 int v2; // ebx

 v1 = syscall(2, pathname, 0);
 v2 = v1;
 if ( v1 < 0 )
 return -*errno;
 syscall(3, (unsigned int)v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x2B90 */
int call_linux_syscall()
{
 int v0; // eax
 int v1; // ebx

 v0 = syscall(2, "/etc/passwd", 0);
 v1 = v0;
 if ( v0 < 0 )
 v1 = -*errno;
 else
 syscall(3, (unsigned int)v0);
 return (v1 >> 31) | 0x2A;
}


/* Function: param_win32_api @ 0x2BE0 */
int param_win32_api(const char *filename)
{
 int v1; // eax
 int v2; // edx
 bool v3; // sf
 int result; // eax
 struct stat buf; // [rsp+8h] [rbp-90h] BYREF

 v1 = stat(filename, &buf);
 v2 = -2;
 if ( buf.st_size > 0 )
 v2 = 42;
 v3 = v1 < 0;
 result = -1;
 if ( !v3 )
 return v2;
 return result;
}


/* Function: call_win32_api @ 0x2C20 */
int call_win32_api()
{
 int v0; // eax
 int v1; // edx
 bool v2; // sf
 int result; // eax
 struct stat buf; // [rsp+8h] [rbp-90h] BYREF

 v0 = stat("/etc/passwd", &buf);
 v1 = -2;
 if ( buf.st_size > 0 )
 v1 = 42;
 v2 = v0 < 0;
 result = -1;
 if ( !v2 )
 return v1;
 return result;
}


/* Function: param_fork_exec @ 0x2C60 */
int param_fork_exec(const char *prog, const char *arg)
{
 int v3; // eax
 int result; // eax
 int stat_loc = 0; // [rsp+0h] [rbp-14h] BYREF

 v3 = fork();
 if ( v3 < 0 )
 return -1;
 if ( !v3 )
 {
 execl(prog, prog, arg, 0);
 _exit(127);
 }
 if ( waitpid(v3, &stat_loc, 0) < 0 )
 return -2;
 result = -3;
 if ( (stat_loc & 0x7F) == 0 )
 return (stat_loc >> 8) & 0xFF;
 return result;
}


/* Function: call_fork_exec @ 0x2CD0 */
int call_fork_exec()
{
 long long v0 = 0; // rax
 int v1; // eax
 int v2; // eax
 int stat_loc; // [rsp+0h] [rbp-4h] BYREF

 stat_loc = HIDWORD(v0);
 v1 = fork();
 if ( v1 < 0 )
 {
 v2 = -1;
 }
 else
 {
 if ( !v1 )
 {
 execl("/bin/true", "/bin/true", 0, 0);
 _exit(127);
 }
 if ( waitpid(v1, &stat_loc, 0) < 0 )
 {
 v2 = -2;
 }
 else
 {
 v2 = -3;
 if ( (stat_loc & 0x7F) == 0 )
 v2 = (stat_loc >> 8) & 0xFF;
 }
 }
 return v2 != 0 ? -1 : 0x2A;
}


/* Function: param_pipe_communication @ 0x2D40 */
int param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // rbx
 int result; // eax
 int pipedes[2]; // [rsp+8h] [rbp-30h] BYREF
 unsigned char buf[40]; // [rsp+10h] [rbp-28h] BYREF

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
 _exit(0);
 }
 close(pipedes[1]);
 v1 = read(pipedes[0], buf, 0x1Fu);
 buf[v1] = 0;
 close(pipedes[0]);
 wait(0);
 result = -3;
 if ( v1 > 0 )
 return 42;
 return result;
}


/* Function: call_pipe_communication @ 0x2DF0 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x2E00 */
int param_socket_create()
{
 int v0; // eax
 int v1; // ebx
 int v2; // ebp
 int result; // eax
 int optval; // [rsp+Ch] [rbp-2Ch] BYREF
 struct sockaddr v5; // [rsp+10h] [rbp-28h] BYREF

 v0 = socket(2, 1, 0);
 if ( v0 < 0 )
 return -1;
 v1 = v0;
 optval = 1;
 if ( setsockopt(v0, 1, 2, &optval, 4u) < 0 )
 {
 close(v1);
 return -2;
 }
 else
 {
 *(unsigned long long *)&v5.sa_data[6] = 0;
 *(unsigned long long *)&v5.sa_family = 2;
 if ( bind(v1, &v5, 0x10u) < 0 )
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


/* Function: call_socket_create @ 0x2EC0 */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x2ED0 */
int param_shmget_shmat()
{
 int v0; // eax
 int v1; // ebx
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
 return -2;
 }
 else
 {
 v4 = v3;
 v5 = (char *)shmat(v3, 0, 0);
 if ( v5 == (char *)-1LL )
 {
 return -3;
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


/* Function: call_shmget_shmat @ 0x2FA0 */
int call_shmget_shmat()
{
 bool v0; // cc
 int result; // eax

 v0 = param_shmget_shmat() <= 0;
 result = -1;
 if ( !v0 )
 return 42;
 return result;
}


/* Function: param_signal_handling @ 0x2FC0 */
int param_signal_handling()
{
 unsigned int v0; // ebx
 bool v1; // cc
 int result; // eax
 unsigned int v3; // ebx

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
 v1 = v0-- <= 1;
 }
 while ( !v1 );
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
 v1 = v3-- <= 1;
 }
 while ( !v1 );
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


/* Function: signal_handler @ 0x30F0 */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: call_signal_handling @ 0x3110 */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x3120 */
void test_system_calls()
{
 int v0; // eax
 int v1; // ebx
 int v2; // eax
 long long v3; // rsi
 unsigned int v4; // ebx
 int v5; // eax
 long long v6; // rdx
 int v7; // ecx
 unsigned int v8; // eax
 unsigned int v9; // eax
 unsigned int v10; // eax
 struct stat buf; // [rsp+8h] [rbp-A0h] BYREF

 puts(asc_43D3);
 v0 = syscall(2, "/etc/passwd", 0);
 v1 = v0;
 if ( v0 < 0 )
 v1 = -*errno;
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
 v7 = -1;
 if ( v5 >= 0 )
 {
 if ( !v5 )
 {
 execl("/bin/true", "/bin/true", 0, 0);
 _exit(127);
 }
 if ( waitpid(v5, (int *)&buf, 0) < 0 )
 {
 v7 = -2;
 }
 else
 {
 v7 = -3;
 if ( (buf.st_dev & 0x7F) == 0 )
 v7 = BYTE1(buf.st_dev);
 }
 }
 printf(aSysL303D, v7 != 0 ? -1 : 0x2A, v6, (unsigned int)-v7);
 v8 = param_pipe_communication();
 printf(aSysL304D, v8);
 v9 = param_socket_create();
 printf(aSysL305D, v9);
 if ( param_shmget_shmat() > 0 )
 v4 = 42;
 printf(aSysL306D, v4);
 v10 = param_signal_handling();
 printf(aSysL307D, v10);
}


/* Function: thread_compute @ 0x32A0 */
void * thread_compute(void *arg)
{
 int v1; // ebx
 void *result; // rax

 v1 = *(unsigned int *)arg * *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v1;
 return result;
}


/* Function: param_pthread_create @ 0x32C0 */
int param_pthread_create(int x)
{
 int v1; // ebx
 int arg; // [rsp+Ch] [rbp-1Ch] BYREF
 void *thread_return; // [rsp+10h] [rbp-18h] BYREF
 pthread_t newthread[2]; // [rsp+18h] [rbp-10h] BYREF

 arg = x;
 v1 = -1;
 if ( !pthread_create(newthread, 0, thread_compute, &arg) )
 {
 pthread_join(newthread[0], &thread_return);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 return v1;
}


/* Function: call_pthread_create @ 0x3310 */
int call_pthread_create()
{
 int v0; // ebx
 int arg; // [rsp+Ch] [rbp-1Ch] BYREF
 void *thread_return; // [rsp+10h] [rbp-18h] BYREF
 pthread_t newthread[2]; // [rsp+18h] [rbp-10h] BYREF

 arg = 7;
 v0 = -1;
 if ( !pthread_create(newthread, 0, thread_compute, &arg) )
 {
 pthread_join(newthread[0], &thread_return);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 return v0;
}


/* Function: thread_sum @ 0x3370 */
void * thread_sum(void *arg)
{
 int v1; // ecx
 bool v2; // cc
 long long v3; // rcx

 *((unsigned int *)arg + 2) = 0;
 v1 = *((unsigned int *)arg + 1);
 v2 = v1 < *(unsigned int *)arg;
 v3 = (unsigned int)(v1 - *(unsigned int *)arg);
 if ( !v2 )
 *((unsigned int *)arg + 2) += (((unsigned long long)(unsigned int)(~*(unsigned int *)arg + *((unsigned int *)arg + 1)) * v3) >> 1)
 + v3 * (*(unsigned int *)arg + 1)
 + *(unsigned int *)arg;
 return 0;
}


/* Function: param_pthread_join @ 0x33B0 */
int param_pthread_join()
{
 long long *v0; // rbx
 long long i; // rbp
 unsigned int *v2; // rbx
 long long v3; // rbp
 int v4; // r14d
 long long v6; // [rsp+0h] [rbp-68h] BYREF
 unsigned long long v7[3]; // [rsp+8h] [rbp-60h] BYREF
 int v8; // [rsp+20h] [rbp-48h]
 pthread_t th[7]; // [rsp+30h] [rbp-38h] BYREF

 v7[0] = 0xB00000000LL;
 v8 = 0;
 v6 = 0xA00000001LL;
 v7[1] = 20;
 v7[2] = 0x1E00000015LL;
 v0 = &v6;
 for ( i = 0; i != 3; ++i )
 {
 if ( pthread_create(&th[i], 0, thread_sum, v0) )
 return -1;
 v0 = (long long *)((char *)v0 + 12);
 }
 v2 = v7;
 v3 = 0;
 v4 = 0;
 while ( !pthread_join(th[v3], 0) )
 {
 v4 += *v2;
 ++v3;
 v2 += 3;
 if ( v3 == 3 )
 return v4;
 }
 return -2;
}


/* Function: call_pthread_join @ 0x3490 */
int call_pthread_join()
{
 long long *v0; // rbx
 long long i; // rbp
 unsigned int *v2; // rbx
 long long v3; // rbp
 int v4; // r14d
 long long v6; // [rsp+0h] [rbp-68h] BYREF
 unsigned long long v7[3]; // [rsp+8h] [rbp-60h] BYREF
 int v8; // [rsp+20h] [rbp-48h]
 pthread_t th[7]; // [rsp+30h] [rbp-38h] BYREF

 v7[0] = 0xB00000000LL;
 v8 = 0;
 v6 = 0xA00000001LL;
 v7[1] = 20;
 v7[2] = 0x1E00000015LL;
 v0 = &v6;
 for ( i = 0; i != 3; ++i )
 {
 if ( pthread_create(&th[i], 0, thread_sum, v0) )
 return -1;
 v0 = (long long *)((char *)v0 + 12);
 }
 v2 = v7;
 v3 = 0;
 v4 = 0;
 while ( !pthread_join(th[v3], 0) )
 {
 v4 += *v2;
 ++v3;
 v2 += 3;
 if ( v3 == 3 )
 return v4;
 }
 return -2;
}


/* Function: thread_increment @ 0x3570 */
void * thread_increment(void *arg)
{
 int v1; // ebp

 v1 = *(unsigned int *)arg;
 if ( *(int *)arg > 0 )
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


/* Function: param_mutex_lock @ 0x35B0 */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 long long v2; // rax
 unsigned long long *v3; // rax
 unsigned long long *v4; // rbx
 long long v5; // r14
 int v6; // r14d
 long long v7; // rbp
 int result; // eax
 int v9; // [rsp+0h] [rbp-38h] BYREF
 int v10; // [rsp+4h] [rbp-34h]

 v10 = HIDWORD(v2);
 v9 = iterations_per_thread;
 v3 = malloc(8LL * thread_count);
 if ( !v3 )
 return -1;
 v4 = v3;
 shared_counter = 0;
 v10 = thread_count;
 if ( thread_count <= 0 )
 {
LABEL_6:
 v6 = v10;
 if ( v10 > 0 )
 {
 v7 = 0;
 do
 pthread_join(v4[v7++], 0);
 while ( thread_count != v7 );
 }
 free(v4);
 result = -3;
 if ( shared_counter == v9 * v6 )
 return 42;
 }
 else
 {
 v5 = 0;
 while ( !pthread_create(&v4[v5], 0, thread_increment, &v9) )
 {
 if ( thread_count == ++v5 )
 goto LABEL_6;
 }
 free(v4);
 return -2;
 }
 return result;
}


/* Function: call_mutex_lock @ 0x36A0 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x36C0 */
unsigned int * consumer_thread(void *arg)
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


/* Function: producer_thread @ 0x3740 */
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


/* Function: param_condition_variable @ 0x3780 */
int param_condition_variable()
{
 int v0; // ebx
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
 return -2;
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


/* Function: call_condition_variable @ 0x3810 */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Thread atomic increment function */
void * thread_atomic_increment(void *arg)
{
 int v1; // edx
 int v2; // ecx

 v1 = *(unsigned int *)arg;
 if ( *(int *)arg > 0 )
 {
 v2 = 0;
 do
 {
 __atomic_add_fetch(&atomic_counter, 1, 5);
 __atomic_compare_exchange_n((int*)&atomic_counter, &v2, v2 + 1000, 0, 5, 5);
 ++v2;
 }
 while ( v2 != v1 );
 }
 return 0;
}


/* Thread atomic load store function */
void * thread_atomic_load_store(void *arg)
{
 __atomic_store_n(&atomic_counter, atomic_counter + 100, __ATOMIC_SEQ_CST);
 return 0;
}


/* Function: param_atomic_ops @ 0x3880 */
int param_atomic_ops(int thread_count, int iterations)
{
 unsigned long long *v2; // rax
 unsigned long long *v3; // rbx
 long long v4; // r14
 long long i; // rbp
 int v6; // ebp
 int result; // eax
 int arg; // [rsp+Ch] [rbp-3Ch] BYREF
 pthread_t newthread[7]; // [rsp+10h] [rbp-38h] BYREF

 arg = iterations;
 v2 = malloc(8LL * thread_count);
 if ( !v2 )
 return -1;
 v3 = v2;
 __atomic_store_n(&atomic_counter, 0, __ATOMIC_SEQ_CST);
 if ( thread_count <= 0 )
 {
LABEL_6:
 if ( !pthread_create(newthread, 0, thread_atomic_load_store, 0) )
 pthread_join(newthread[0], 0);
 if ( thread_count > 0 )
 {
 for ( i = 0; i != thread_count; pthread_join(v3[i++], 0) )
 ;
 }
 v6 = atomic_counter;
 free(v3);
 result = -3;
 if ( v6 > 0 )
 return 42;
 }
 else
 {
 v4 = 0;
 while ( !pthread_create(&v3[v4], 0, thread_atomic_increment, &arg) )
 {
 if ( thread_count == ++v4 )
 goto LABEL_6;
 }
 free(v3);
 return -2;
 }
 return result;
}


/* Function: call_atomic_ops @ 0x3990 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x39B0 */
void * thread_tls_test(void *arg)
{
 unsigned int v1; // ebx
 void *result; // rax
 static __thread unsigned int tls_value = 0;

 v1 = tls_value;
 tls_value = v1 + 50;
 strncpy((char *)(&tls_value - 8), (const char *)arg, 0x1Fu);
 result = malloc(8u);
 *(unsigned int *)result = v1;
 *((unsigned int *)result + 1) = v1 + 50;
 return result;
}


/* Function: param_thread_local_storage @ 0x3A00 */
int param_thread_local_storage(int thread_count)
{
 unsigned long long *v1; // r14
 unsigned long long *v2; // r15
 int result; // eax
 long long i; // rbx
 char *v5; // rax
 long long v6; // rbp
 pthread_t *v7; // rbx
 unsigned long long *v8; // r12
 long long v9; // rbp
 int v10; // ebx
 int v11; // r14d
 long long v12; // rbx
 void *thread_return; // [rsp+10h] [rbp-38h] BYREF

 v1 = malloc(8LL * thread_count);
 v2 = malloc(8LL * thread_count);
 result = -1;
 if ( v1 && v2 )
 {
 if ( thread_count > 0 )
 {
 for ( i = 0; i != thread_count; snprintf(v5, 0x10u, "Thread-%d", i++) )
 {
 v5 = (char *)malloc(0x10u);
 v2[i] = v5;
 }
 }
 if ( thread_count <= 0 )
 {
LABEL_10:
 v8 = v1;
 if ( thread_count <= 0 )
 {
 v11 = 0;
 v10 = 0;
 }
 else
 {
 v9 = 0;
 v10 = 0;
 v11 = 0;
 do
 {
 pthread_join(v8[v9], &thread_return);
 v11 += *(unsigned int *)thread_return;
 v10 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free((void *)v2[v9++]);
 }
 while ( thread_count != v9 );
 }
 free(v2);
 free(v8);
 result = -3;
 if ( !(v11 ^ (100 * thread_count) | v10 ^ (150 * thread_count)) )
 return 42;
 }
 else
 {
 v6 = 0;
 v7 = v1;
 while ( !pthread_create(v7, 0, thread_tls_test, (void *)v2[v6]) )
 {
 ++v6;
 ++v7;
 if ( thread_count == v6 )
 goto LABEL_10;
 }
 v12 = -1;
 do
 free((void *)v2[++v12]);
 while ( v6 != v12 );
 free(v2);
 free(v1);
 return -2;
 }
 }
 return result;
}


/* Function: call_thread_local_storage @ 0x3B90 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3BA0 */
void test_thread_concurrency()
{
 pthread_t *v0; // rbx
 unsigned int v1; // r14d
 long long v2; // rbp
 pthread_t *v3; // rbp
 long long v4; // rbx
 unsigned int v5; // r14d
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax
 unsigned int v9; // eax
 int arg; // [rsp+Ch] [rbp-6Ch] BYREF
 pthread_t newthread[2]; // [rsp+10h] [rbp-68h] BYREF
 long long v12; // [rsp+20h] [rbp-58h]
 long long v13; // [rsp+28h] [rbp-50h]
 int v14; // [rsp+30h] [rbp-48h]
 void *thread_return[7]; // [rsp+40h] [rbp-38h] BYREF

 puts(asc_43EE);
 arg = 7;
 v0 = newthread;
 v1 = -1;
 if ( !pthread_create(newthread, 0, thread_compute, &arg) )
 {
 pthread_join(newthread[0], thread_return);
 v1 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 }
 v2 = 0;
 printf(aThrL301D, v1);
 newthread[1] = 0xB00000000LL;
 v14 = 0;
 newthread[0] = 0xA00000001LL;
 v12 = 20;
 v13 = 0x1E00000015LL;
 do
 {
 if ( pthread_create((pthread_t *)&thread_return[v2], 0, thread_sum, v0) )
 {
 v5 = -1;
 goto LABEL_12;
 }
 ++v2;
 v0 = (pthread_t *)((char *)v0 + 12);
 }
 while ( v2 != 3 );
 v3 = &newthread[1];
 v4 = 0;
 v5 = 0;
 while ( !pthread_join((pthread_t)thread_return[v4], 0) )
 {
 v5 += *(unsigned int *)v3;
 ++v4;
 v3 = (pthread_t *)((char *)v3 + 12);
 if ( v4 == 3 )
 goto LABEL_12;
 }
 v5 = -2;
LABEL_12:
 printf(aThrL302D, v5);
 v6 = param_mutex_lock(4, 1000);
 printf(aThrL303D, v6);
 v7 = param_condition_variable();
 printf(aThrL304D, v7);
 v8 = param_atomic_ops(4, 500);
 printf(aThrL305D, v8);
 v9 = param_thread_local_storage(4);
 printf(aThrL306D, v9);
}


/* Function: main @ 0x3D60 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: .term_proc @ 0x3D74 */
void term_proc()
{
 ;
}


/* FAILED to decompile: raise @ 0x72D8 */

/* FAILED to decompile: free @ 0x72E0 */

/* FAILED to decompile: __libc_start_main @ 0x72E8 */

/* FAILED to decompile: __errno_location @ 0x72F0 */

/* FAILED to decompile: unlink @ 0x72F8 */

/* FAILED to decompile: strncpy @ 0x7300 */

/* FAILED to decompile: _exit @ 0x7308 */

/* FAILED to decompile: strcpy @ 0x7310 */

/* FAILED to decompile: puts @ 0x7318 */

/* FAILED to decompile: fread @ 0x7320 */

/* FAILED to decompile: setsockopt @ 0x7328 */

/* FAILED to decompile: shmdt @ 0x7330 */

/* FAILED to decompile: write @ 0x7338 */

/* FAILED to decompile: pthread_cond_wait @ 0x7340 */

/* FAILED to decompile: fclose @ 0x7348 */

/* FAILED to decompile: strlen @ 0x7350 */

/* FAILED to decompile: strchr @ 0x7358 */

/* FAILED to decompile: printf @ 0x7360 */

/* FAILED to decompile: rewind @ 0x7368 */

/* FAILED to decompile: snprintf @ 0x7370 */

/* FAILED to decompile: memset @ 0x7378 */

/* FAILED to decompile: alarm @ 0x7380 */

/* FAILED to decompile: close @ 0x7388 */

/* FAILED to decompile: pipe @ 0x7390 */

/* FAILED to decompile: read @ 0x7398 */

/* FAILED to decompile: memcmp @ 0x73A0 */

/* FAILED to decompile: pthread_cond_signal @ 0x73A8 */

/* FAILED to decompile: strcmp @ 0x73B0 */

/* FAILED to decompile: signal @ 0x73B8 */

/* FAILED to decompile: syscall @ 0x73C0 */

/* FAILED to decompile: stat_0 @ 0x73C8 */

/* FAILED to decompile: memcpy @ 0x73D0 */

/* FAILED to decompile: fileno @ 0x73D8 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x73E0 */

/* FAILED to decompile: malloc @ 0x73E8 */

/* FAILED to decompile: sscanf @ 0x73F0 */

/* FAILED to decompile: listen @ 0x73F8 */

/* FAILED to decompile: bind @ 0x7400 */

/* FAILED to decompile: pthread_create @ 0x7408 */

/* FAILED to decompile: waitpid @ 0x7410 */

/* FAILED to decompile: open @ 0x7418 */

/* FAILED to decompile: shmctl @ 0x7420 */

/* FAILED to decompile: fopen @ 0x7428 */

/* FAILED to decompile: shmat @ 0x7430 */

/* FAILED to decompile: shmget @ 0x7438 */

/* FAILED to decompile: fwrite @ 0x7440 */

/* FAILED to decompile: ftok @ 0x7448 */

/* FAILED to decompile: pthread_join @ 0x7450 */

/* FAILED to decompile: execl @ 0x7458 */

/* FAILED to decompile: pthread_cancel @ 0x7460 */

/* FAILED to decompile: sleep @ 0x7468 */

/* FAILED to decompile: wait @ 0x7470 */

/* FAILED to decompile: fork @ 0x7478 */

/* FAILED to decompile: strstr @ 0x7480 */

/* FAILED to decompile: pthread_mutex_lock @ 0x7488 */

/* FAILED to decompile: usleep @ 0x7490 */

/* FAILED to decompile: socket @ 0x7498 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x74A0 */

/* FAILED to decompile: __gmon_start__ @ 0x74B0 */

/* Total functions decompiled: 71, failed: 59 */
