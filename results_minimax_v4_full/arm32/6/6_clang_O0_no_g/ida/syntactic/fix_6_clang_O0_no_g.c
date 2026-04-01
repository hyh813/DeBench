/* Auto-injected string constants */
static const char asc_3496[] = "Testing library functions:\n";
static const char aLibL101D[] = "LibL101: %d\n";
static const char aLibL102D[] = "LibL102: %d\n";
static const char aLibL103D[] = "LibL103: %d\n";
static const char aLibL104D[] = "LibL104: %d\n";
static const char aLibL105D[] = "LibL105: %d\n";
static const char aLibL106D[] = "LibL106: %d\n";
static const char aLibL107D[] = "LibL107: %d\n";
static const char aLibL108D[] = "LibL108: %d\n";
static const char aLibL109D[] = "LibL109: %d\n";
static const char aLibL110D[] = "LibL110: %d\n";
static const char aLibL111D[] = "LibL111: %d\n";
static const char aLibL112D[] = "LibL112: %d\n";
static const char asc_363C[] = "Testing system calls:\n";
static const char aSysL301D[] = "SysL301: %d\n";
static const char aSysL302D[] = "SysL302: %d\n";
static const char aSysL303D[] = "SysL303: %d\n";
static const char aSysL304D[] = "SysL304: %d\n";
static const char aSysL305D[] = "SysL305: %d\n";
static const char aSysL306D[] = "SysL306: %d\n";
static const char aSysL307D[] = "SysL307: %d\n";
static const char asc_3726[] = "Testing thread concurrency:\n";
static const char aThrL301D[] = "ThrL301: %d\n";
static const char aThrL302D[] = "ThrL302: %d\n";
static const char aThrL303D[] = "ThrL303: %d\n";
static const char aThrL304D[] = "ThrL304: %d\n";
static const char aThrL305D[] = "ThrL305: %d\n";
static const char aThrL306D[] = "ThrL306: %d\n";

/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdatomic.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <netinet/in.h>
#include <signal.h>
#include <pthread.h>
#include <semaphore.h>
#include <errno.h>
#include <fcntl.h>
#include <limits.h>

/* JUMPOUT macro for unreachable code */
#define JUMPOUT(addr) ((void)(addr))

/* BYTE1 macro to extract the second byte */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Auto-injected global variables */
int signal_received;
int signal_number;
int signal_handler(int result);
pthread_mutex_t counter_mutex;
int shared_counter;
int ready;
int data;
pthread_cond_t cond;
pthread_mutex_t cond_mutex;
_Atomic int atomic_counter;
unsigned int unk_141B4;
char byte_141B8[32];

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/6/6_clang_O0_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0xC20 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_C2C @ 0xC2C */
void sub_C2C()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn */
int __attribute__((weak)) call_weak_fn()
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_strcpy @ 0x10A8 */
size_t param_strcpy(char *a1, const char *a2)
{
 strcpy(a1, a2);
 return strlen(a1);
}


/* Function: call_strcpy @ 0x10DC */
size_t call_strcpy()
{
 char v1[32]; // [sp+8h] [bp-20h] BYREF

 return param_strcpy(v1, "HelloLib");
}


/* Function: param_strcmp @ 0x1110 */
int param_strcmp(const char *a1, const char *a2)
{
 int v4; // [sp+4h] [bp-Ch]

 v4 = strcmp(a1, a2);
 if ( v4 < 0 )
 return v4;
 else if ( v4 > 0 )
 return 1;
 else
 return 0;
}


/* Function: call_strcmp @ 0x1170 */
int call_strcmp()
{
 int v1; // [sp+8h] [bp-8h]
 int v2; // [sp+Ch] [bp-4h]

 v2 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 return v2 + v1 + param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x11F4 */
size_t param_strlen(const char *a1)
{
 return strlen(a1);
}


/* Function: call_strlen @ 0x1220 */
size_t call_strlen()
{
 return param_strlen("BinBench2025");
}


/* Function: param_memcpy @ 0x1250 */
size_t param_memcpy(void *a1, const void *a2, size_t a3)
{
 memcpy(a1, a2, a3);
 return a3;
}


/* Function: call_memcpy @ 0x1288 */
int call_memcpy()
{
 unsigned int v1[2]; // [sp+0h] [bp-30h] BYREF
 int v2; // [sp+8h] [bp-28h]
 int v3; // [sp+Ch] [bp-24h]
 int v4; // [sp+10h] [bp-20h]
 unsigned int v5[7]; // [sp+14h] [bp-1Ch] BYREF

 v5[0] = 10;
 v5[1] = 20;
 v5[2] = 30;
 v5[3] = 40;
 v5[4] = 50;
 v4 = 0;
 v3 = 0;
 v2 = 0;
 v1[1] = 0;
 v1[0] = 0;
 param_memcpy(v1, v5, 0x14u);
 return v1[0] + v2 + v4;
}


/* Function: param_memcmp @ 0x12F4 */
int param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v5; // [sp+8h] [bp-10h]

 v5 = memcmp(a1, a2, a3);
 if ( v5 < 1 )
 return v5 >> 31;
 else
 return 1;
}


/* Function: call_memcmp @ 0x135C */
int call_memcmp()
{
 int v1; // [sp+10h] [bp-28h]
 unsigned int v2[3]; // [sp+14h] [bp-24h] BYREF
 unsigned int v3[3]; // [sp+20h] [bp-18h] BYREF
 unsigned int v4[3]; // [sp+2Ch] [bp-Ch] BYREF

 v4[0] = 1;
 v4[2] = 3;
 v4[1] = 2;
 v3[2] = 4;
 v3[1] = 2;
 v3[0] = 1;
 v2[2] = 3;
 v2[1] = 2;
 v2[0] = 1;
 v1 = param_memcmp(v4, v3, 0xCu);
 return v1 + param_memcmp(v4, v2, 0xCu);
}


/* Function: param_printf @ 0x1438 */
int param_printf(int a1, const char *a2)
{
 return printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x1478 */
int call_printf()
{
 return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x14AC */
int param_scanf(const char *a1)
{
 int v2; // [sp+8h] [bp-10h] BYREF
 unsigned int v3[2]; // [sp+Ch] [bp-Ch] BYREF

 v3[0] = 0;
 v3[1] = 0;
 if ( sscanf(a1, "%d,%d", v3, &v2) == 2 )
 return v3[0] + v3[1] + v2;
 return -1;
}


/* Function: call_scanf @ 0x151C */
int call_scanf()
{
 return param_scanf("123,456");
}


/* Function: param_fopen_fclose @ 0x153C */
int param_fopen_fclose(const char *a1)
{
 int v2; // [sp+0h] [bp-10h]
 FILE *stream; // [sp+4h] [bp-Ch]

 stream = fopen(a1, "r");
 if ( !stream )
 return -1;
 v2 = fileno(stream);
 fclose(stream);
 return v2;
}


/* Function: call_fopen_fclose @ 0x15B0 */
int call_fopen_fclose()
{
 int v0; // r1
 int result; // r0

 v0 = param_fopen_fclose("/etc/passwd");
 result = -1;
 if ( v0 > -1 )
 return 42;
 return result;
}


/* Function: param_fread_fwrite @ 0x15EC */
int param_fread_fwrite(char *a1)
{
 size_t v1; // r0
 int v2; // r0
 bool v4; // [sp+Ch] [bp-44h]
 size_t v5; // [sp+18h] [bp-38h]
 size_t n; // [sp+1Ch] [bp-34h]
 FILE *stream; // [sp+20h] [bp-30h]
 char s1[32]; // [sp+24h] [bp-2Ch] BYREF
 char *s; // [sp+44h] [bp-Ch]
 char *filename; // [sp+48h] [bp-8h]

 filename = a1;
 s = "BinBench Test Data";
 stream = fopen(a1, "w+");
 if ( !stream )
 return -1;
 v1 = strlen(s);
 n = fwrite(s, 1u, v1, stream);
 if ( n == strlen(s) )
 {
 rewind(stream);
 v5 = fread(s1, 1u, n, stream);
 s1[v5] = 0;
 fclose(stream);
 unlink(filename);
 v4 = 0;
 if ( v5 == n )
 v4 = strcmp(s1, s) == 0;
 v2 = -3;
 if ( v4 )
 return 42;
 return v2;
 }
 else
 {
 fclose(stream);
 return -2;
 }
}


/* Function: call_fread_fwrite @ 0x1744 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1764 */
int param_malloc_free(unsigned int a1)
{
 int v2; // [sp+4h] [bp-14h]
 unsigned int i; // [sp+8h] [bp-10h]
 unsigned int *ptr; // [sp+Ch] [bp-Ch]

 ptr = malloc(4 * a1);
 if ( !ptr )
 return -1;
 for ( i = 0; i < a1; ++i )
 ptr[i] = 10 * i;
 v2 = *ptr + ptr[a1 - 1];
 free(ptr);
 return v2;
}


/* Function: call_malloc_free @ 0x182C */
int call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x1844 */
int param_memset(unsigned char *a1, size_t a2)
{
 size_t i; // [sp+4h] [bp-14h]
 int v4; // [sp+8h] [bp-10h]

 memset(a1, 0, a2);
 v4 = 0;
 for ( i = 0; i < a2; ++i )
 v4 += a1[i];
 return v4;
}


/* Function: call_memset @ 0x18D4 */
int call_memset()
{
 int i; // [sp+4h] [bp-2Ch]
 unsigned int v2[10]; // [sp+8h] [bp-28h] BYREF

 for ( i = 0; i <= 9; ++i )
 v2[i] = 255;
 param_memset((unsigned char *)v2, 0x28u);
 return v2[0] + v2[9];
}


/* Function: param_strchr_strstr @ 0x1944 */
int param_strchr_strstr(const char *a1, unsigned char a2, const char *a3)
{
 int v4; // [sp+4h] [bp-24h]
 int v5; // [sp+8h] [bp-20h]
 char *v6; // [sp+10h] [bp-18h]
 char *v7; // [sp+18h] [bp-10h]

 v7 = strchr(a1, a2);
 if ( v7 )
 v5 = v7 - a1;
 else
 v5 = -1;
 v6 = strstr(a1, a3);
 if ( v6 )
 v4 = v6 - a1;
 else
 v4 = -1;
 return v5 + v4;
}


/* Function: call_strchr_strstr @ 0x1A04 */
int call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 0x42u, "Bench");
}


/* Function: test_standard_library_functions @ 0x1A4C */
int test_standard_library_functions()
{
 size_t v0; // r0
 int v1; // r0
 size_t v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int v9; // r0
 int v10; // r0
 int v11; // r0

 printf(asc_3496);
 v0 = call_strcpy();
 printf(aLibL101D, v0);
 v1 = call_strcmp();
 printf(aLibL102D, v1);
 v2 = call_strlen();
 printf(aLibL103D, v2);
 v3 = call_memcpy();
 printf(aLibL104D, v3);
 v4 = call_memcmp();
 printf(aLibL105D, v4);
 v5 = call_printf();
 printf(aLibL106D, v5);
 v6 = call_scanf();
 printf(aLibL107D, v6);
 v7 = call_fopen_fclose();
 printf(aLibL108D, v7);
 v8 = call_fread_fwrite();
 printf(aLibL109D, v8);
 v9 = call_malloc_free();
 printf(aLibL110D, v9);
 v10 = call_memset();
 printf(aLibL111D, v10);
 v11 = call_strchr_strstr();
 return printf(aLibL112D, v11);
}


/* Function: param_linux_syscall @ 0x1B8C */
int param_linux_syscall(const char *a1)
{
 int v2; // [sp+4h] [bp-Ch]

 v2 = syscall(5, a1, 0);
 if ( v2 <= -1 )
 return -errno;
 syscall(6, v2);
 return v2;
}


/* Function: call_linux_syscall @ 0x1BFC */
int call_linux_syscall()
{
 int v0; // r1
 int result; // r0

 v0 = param_linux_syscall("/etc/passwd");
 result = -1;
 if ( v0 > -1 )
 return 42;
 return result;
}


/* Function: param_win32_api @ 0x1C38 */
int param_win32_api(char *a1)
{
 int v1; // r0
 struct stat v3; // [sp+0h] [bp-60h] BYREF
 char *file; // [sp+58h] [bp-8h]

 file = a1;
 if ( stat(a1, &v3) <= -1 )
 return -1;
 v1 = -2;
 if ( v3.st_size > 0 )
 return 42;
 return v1;
}


/* Function: call_win32_api @ 0x1C94 */
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x1CB4 */
int param_fork_exec(char *a1, int a2)
{
 int stat_loc; // [sp+4h] [bp-14h] BYREF
 __pid_t pid; // [sp+8h] [bp-10h]
 int v5; // [sp+Ch] [bp-Ch]
 char *path; // [sp+10h] [bp-8h]

 path = a1;
 v5 = a2;
 pid = fork();
 if ( pid <= -1 )
 return -1;
 if ( !pid )
 {
 execl(path, path, v5, 0);
 exit(127);
 }
 if ( waitpid(pid, &stat_loc, 0) <= -1 )
 return -2;
 if ( (stat_loc & 0x7F) != 0 )
 return -3;
 return BYTE1(stat_loc);
}


/* Function: call_fork_exec @ 0x1D80 */
int call_fork_exec()
{
 int v0; // r1
 int result; // r0

 v0 = param_fork_exec("/bin/true", 0);
 result = -1;
 if ( !v0 )
 return 42;
 return result;
}


/* Function: param_pipe_communication @ 0x1DC0 */
int param_pipe_communication()
{
 size_t v0; // r0
 int v1; // r0
 ssize_t v3; // [sp+10h] [bp-38h]
 __pid_t v4; // [sp+18h] [bp-30h]
 unsigned char v5[32]; // [sp+1Ch] [bp-2Ch] BYREF
 int pipedes[2]; // [sp+3Ch] [bp-Ch] BYREF

 if ( pipe(pipedes) <= -1 )
 return -1;
 v4 = fork();
 if ( v4 <= -1 )
 return -2;
 if ( !v4 )
 {
 close(pipedes[0]);
 v0 = strlen("HelloPipe");
 write(pipedes[1], "HelloPipe", v0);
 close(pipedes[1]);
 exit(0);
 }
 close(pipedes[1]);
 v3 = read(pipedes[0], v5, 0x1Fu);
 v5[v3] = 0;
 close(pipedes[0]);
 wait(0);
 v1 = -3;
 if ( v3 > 0 )
 return 42;
 return v1;
}


/* Function: call_pipe_communication @ 0x1ED8 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x1EEC */
int param_socket_create()
{
 struct sockaddr addr; // [sp+Ch] [bp-1Ch] BYREF
 int optval; // [sp+1Ch] [bp-Ch] BYREF
 int fd; // [sp+20h] [bp-8h]

 fd = socket(2, 1, 0);
 if ( fd <= -1 )
 return -1;
 optval = 1;
 if ( setsockopt(fd, 1, 2, &optval, 4u) > -1 )
 {
 addr.sa_family = 2;
 *(unsigned short *)addr.sa_data = htons(0);
 memset(&addr.sa_data[2], 0, 12);
 if ( bind(fd, &addr, 0x10u) > -1 )
 {
 if ( listen(fd, 5) > -1 )
 {
 close(fd);
 return 42;
 }
 else
 {
 close(fd);
 return -4;
 }
 }
 else
 {
 close(fd);
 return -3;
 }
 }
 else
 {
 close(fd);
 return -2;
 }
}


/* Function: call_socket_create @ 0x2020 */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x2034 */
int param_shmget_shmat()
{
 size_t v1; // [sp+4h] [bp-1Ch]
 char *dest; // [sp+8h] [bp-18h]
 int v3; // [sp+Ch] [bp-14h]
 key_t v4; // [sp+10h] [bp-10h]
 int fd; // [sp+14h] [bp-Ch]

 fd = open("/tmp/binbench_shm", 66, 438);
 if ( fd <= -1 )
 return -1;
 close(fd);
 v4 = ftok("/tmp/binbench_shm", 42);
 if ( v4 <= -1 )
 return -1;
 v3 = shmget(v4, 4096, 950);
 if ( v3 <= -1 )
 return -2;
 dest = (char *)shmat(v3, 0);
 if ( dest == (char *)-1 )
 return -3;
 strcpy(dest, "SharedMemory");
 v1 = strlen(dest);
 shmdt(dest);
 shmctl(v3, 0);
 return v1;
}


/* Function: call_shmget_shmat @ 0x2178 */
int call_shmget_shmat()
{
 int v0; // r1
 int result; // r0

 v0 = param_shmget_shmat();
 result = -1;
 if ( v0 > 0 )
 return 42;
 return result;
}


/* Function: param_signal_handling @ 0x21A8 */
int param_signal_handling()
{
 int v0; // r1
 int v1; // r1
 bool v3; // [sp+8h] [bp-10h]
 bool v4; // [sp+Ch] [bp-Ch]
 int v5; // [sp+10h] [bp-8h]
 int v6; // [sp+10h] [bp-8h]

 if ( signal(10, (__sighandler_t)signal_handler) == (__sighandler_t)-1 )
 return -1;
 if ( signal(14, (__sighandler_t)signal_handler) == (__sighandler_t)-1 )
 return -2;
 signal_received = 0;
 raise(10);
 v5 = 1000;
 while ( 1 )
 {
 v4 = 0;
 if ( !signal_received )
 {
 v0 = v5--;
 v4 = v0 > 0;
 }
 if ( !v4 )
 break;
 usleep(0x3E8u);
 }
 if ( !signal_received )
 return -3;
 if ( signal_number != 10 )
 return -4;
 signal_received = 0;
 alarm(1u);
 v6 = 2000;
 while ( 1 )
 {
 v3 = 0;
 if ( !signal_received )
 {
 v1 = v6--;
 v3 = v1 > 0;
 }
 if ( !v3 )
 break;
 usleep(0x3E8u);
 }
 if ( !signal_received || signal_number != 14 )
 return -5;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: signal_handler @ 0x23D0 */
int signal_handler(int result)
{
 signal_received = 1;
 signal_number = result;
 return result;
}


/* Function: call_signal_handling @ 0x2408 */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x241C */
int test_system_calls()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0

 printf(asc_363C);
 v0 = call_linux_syscall();
 printf(aSysL301D, v0);
 v1 = call_win32_api();
 printf(aSysL302D, v1);
 v2 = call_fork_exec();
 printf(aSysL303D, v2);
 v3 = call_pipe_communication();
 printf(aSysL304D, v3);
 v4 = call_socket_create();
 printf(aSysL305D, v4);
 v5 = call_shmget_shmat();
 printf(aSysL306D, v5);
 v6 = call_signal_handling();
 return printf(aSysL307D, v6);
}


/* Function: thread_compute @ 0x24E4 */
unsigned int * thread_compute(unsigned int *a1)
{
 unsigned int *result; // r0
 int v2; // [sp+8h] [bp-10h]

 v2 = *a1 * *a1;
 result = malloc(4u);
 *result = v2;
 return result;
}


/* Function: param_pthread_create @ 0x253C */
int param_pthread_create(pthread_t a1)
{
 int v2; // [sp+4h] [bp-1Ch]
 void *thread_return; // [sp+Ch] [bp-14h] BYREF
 pthread_t arg; // [sp+10h] [bp-10h] BYREF
 pthread_t newthread[2]; // [sp+14h] [bp-Ch] BYREF

 newthread[1] = a1;
 arg = a1;
 if ( pthread_create(newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 return -1;
 pthread_join(newthread[0], &thread_return);
 v2 = *(unsigned int *)thread_return;
 free(thread_return);
 return v2;
}


/* Function: call_pthread_create @ 0x25CC */
int call_pthread_create()
{
 return param_pthread_create(7u);
}


/* Function: thread_sum @ 0x25E4 */
int thread_sum(int *a1)
{
 int i; // [sp+0h] [bp-Ch]

 a1[2] = 0;
 for ( i = *a1; i <= a1[1]; ++i )
 a1[2] += i;
 return 0;
}


/* Function: param_pthread_join @ 0x265C */
int param_pthread_join()
{
 int j; // [sp+8h] [bp-40h]
 int v2; // [sp+Ch] [bp-3Ch]
 int i; // [sp+10h] [bp-38h]
 unsigned int s[12]; // [sp+14h] [bp-34h] BYREF

 memset(s, 0, 0x24u);
 s[0] = 1;
 s[1] = 10;
 s[3] = 11;
 s[4] = 20;
 s[6] = 21;
 s[7] = 30;
 for ( i = 0; i <= 2; ++i )
 {
 if ( pthread_create(&s[i + 9], 0, (void *(*)(void *))thread_sum, &s[3 * i]) )
 return -1;
 }
 v2 = 0;
 for ( j = 0; j <= 2; ++j )
 {
 if ( pthread_join(s[j + 9], 0) )
 return -2;
 v2 += s[3 * j + 2];
 }
 return v2;
}


/* Function: call_pthread_join @ 0x27BC */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x27D0 */
int thread_increment(int *a1)
{
 int i; // [sp+4h] [bp-Ch]
 int v3; // [sp+8h] [bp-8h]

 v3 = *a1;
 for ( i = 0; i < v3; ++i )
 {
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 }
 return 0;
}


/* Function: param_mutex_lock @ 0x2874 */
int param_mutex_lock(int a1, int a2)
{
 int v2; // r0
 int j; // [sp+8h] [bp-18h]
 int i; // [sp+Ch] [bp-14h]
 void *ptr; // [sp+10h] [bp-10h]
 int arg; // [sp+14h] [bp-Ch] BYREF
 int v8; // [sp+18h] [bp-8h]

 v8 = a1;
 arg = a2;
 ptr = malloc(4 * a1);
 if ( !ptr )
 return -1;
 shared_counter = 0;
 for ( i = 0; i < v8; ++i )
 {
 if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_increment, &arg) )
 {
 free(ptr);
 return -2;
 }
 }
 for ( j = 0; j < v8; ++j )
 pthread_join(*((unsigned int *)ptr + j), 0);
 free(ptr);
 v2 = -3;
 if ( shared_counter == v8 * arg )
 return 42;
 return v2;
}


/* Function: call_mutex_lock @ 0x29D0 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x29EC */
unsigned int *consumer_thread()
{
 unsigned int *result; // r0
 int v1; // [sp+8h] [bp-8h]

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: producer_thread @ 0x2A90 */
int producer_thread()
{
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x2B10 */
int param_condition_variable()
{
 int v1; // [sp+4h] [bp-14h]
 void *thread_return; // [sp+8h] [bp-10h] BYREF
 pthread_t newthread; // [sp+Ch] [bp-Ch] BYREF
 pthread_t th; // [sp+10h] [bp-8h] BYREF

 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 return -1;
 if ( pthread_create(&th, 0, (void *(*)(void *))producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return -2;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 pthread_join(th, 0);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 return v1;
 }
}


/* Function: call_condition_variable @ 0x2BF4 */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x2C08 */
int thread_atomic_increment(unsigned int *a1)
{
 unsigned int v2[3]; // [sp+18h] [bp-18h] BYREF
 int i; // [sp+24h] [bp-Ch]
 int v4; // [sp+28h] [bp-8h]
 unsigned int *v5; // [sp+2Ch] [bp-4h]

 v5 = a1;
 v4 = *a1;
 for ( i = 0; i < v4; ++i )
 {
 v2[2] = 1;
 v2[1] = atomic_fetch_add(&atomic_counter, 1);
 v2[0] = i;
 atomic_compare_exchange_strong(&atomic_counter, &v2, i + 1000);
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x2CD0 */
int thread_atomic_load_store()
{
 int v1; // [sp+8h] [bp-10h]

 v1 = atomic_load(&atomic_counter) + 100;
 atomic_store(&atomic_counter, v1);
 return 0;
}


/* Function: param_atomic_ops @ 0x2D38 */
int param_atomic_ops(int a1, int a2)
{
 int v2; // r0
 int v4; // [sp+Ch] [bp-24h]
 int j; // [sp+10h] [bp-20h]
 pthread_t newthread; // [sp+14h] [bp-1Ch] BYREF
 int i; // [sp+18h] [bp-18h]
 int v8; // [sp+1Ch] [bp-14h]
 void *ptr; // [sp+20h] [bp-10h]
 int arg; // [sp+24h] [bp-Ch] BYREF
 int v11; // [sp+28h] [bp-8h]

 v11 = a1;
 arg = a2;
 ptr = malloc(4 * a1);
 if ( !ptr )
 return -1;
 v8 = 0;
 atomic_store(&atomic_counter, 0);
 for ( i = 0; i < v11; ++i )
 {
 if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 free(ptr);
 return -2;
 }
 }
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread, 0);
 for ( j = 0; j < v11; ++j )
 pthread_join(*((unsigned int *)ptr + j), 0);
 v4 = atomic_load(&atomic_counter);
 free(ptr);
 v2 = -3;
 if ( v4 > 0 )
 return 42;
 return v2;
}


/* Function: call_atomic_ops @ 0x2EE8 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x2F04 */
unsigned int * thread_tls_test(const char *a1)
{
 unsigned int *result; // r0
 int v2; // [sp+Ch] [bp-Ch]

 v2 = unk_141B4;
 unk_141B4 += 50;
 strncpy(byte_141B8, a1, 0x1Fu);
 result = malloc(8u);
 *result = v2;
 result[1] = unk_141B4;
 return result;
}


/* Function: param_thread_local_storage @ 0x2F9C */
int param_thread_local_storage(int a1)
{
 int v1; // r0
 bool v3; // [sp+0h] [bp-40h]
 void *thread_return; // [sp+14h] [bp-2Ch] BYREF
 int m; // [sp+18h] [bp-28h]
 int v6; // [sp+1Ch] [bp-24h]
 int v7; // [sp+20h] [bp-20h]
 int k; // [sp+24h] [bp-1Ch]
 int j; // [sp+28h] [bp-18h]
 int i; // [sp+2Ch] [bp-14h]
 void *ptr; // [sp+30h] [bp-10h]
 void *v12; // [sp+34h] [bp-Ch]
 int v13; // [sp+38h] [bp-8h]

 v13 = a1;
 v12 = malloc(4 * a1);
 ptr = malloc(4 * v13);
 if ( !v12 || !ptr )
 return -1;
 for ( i = 0; i < v13; ++i )
 {
 *((unsigned int *)ptr + i) = malloc(0x10u);
 snprintf(*((char **)ptr + i), 0x10u, "Thread-%d", i);
 }
 for ( j = 0; j < v13; ++j )
 {
 if ( pthread_create((pthread_t *)v12 + j, 0, (void *(*)(void *))thread_tls_test, *((void **)ptr + j)) )
 {
 for ( k = 0; k <= j; ++k )
 free(*((void **)ptr + k));
 free(ptr);
 free(v12);
 return -2;
 }
 }
 v7 = 0;
 v6 = 0;
 for ( m = 0; m < v13; ++m )
 {
 pthread_join(*((unsigned int *)v12 + m), &thread_return);
 v7 += *(unsigned int *)thread_return;
 v6 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free(*((void **)ptr + m));
 }
 free(ptr);
 free(v12);
 v3 = 0;
 if ( v7 == 100 * v13 )
 v3 = v6 == 150 * v13;
 v1 = -3;
 if ( v3 )
 return 42;
 return v1;
}


/* Function: call_thread_local_storage @ 0x3254 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x326C */
int test_thread_concurrency()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0

 printf(asc_3726);
 v0 = call_pthread_create();
 printf(aThrL301D, v0);
 v1 = call_pthread_join();
 printf(aThrL302D, v1);
 v2 = call_mutex_lock();
 printf(aThrL303D, v2);
 v3 = call_condition_variable();
 printf(aThrL304D, v3);
 v4 = call_atomic_ops();
 printf(aThrL305D, v4);
 v5 = call_thread_local_storage();
 return printf(aThrL306D, v5);
}


/* Function: main @ 0x331C */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function __aeabi_read_tp removed by preprocessor */



/* Function: .term_proc @ 0x3358 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_pthread_mutex_unlock @ 0x141F8 */

/* FAILED to decompile: __imp_strstr @ 0x141FC */

/* FAILED to decompile: __imp_raise @ 0x14200 */

/* FAILED to decompile: __imp___libc_start_main @ 0x14204 */

/* FAILED to decompile: __imp_strcmp @ 0x14208 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x1420C */

/* FAILED to decompile: __imp_setsockopt @ 0x14210 */

/* FAILED to decompile: __imp_printf @ 0x14214 */

/* FAILED to decompile: __imp_fopen @ 0x14218 */

/* FAILED to decompile: __imp_read @ 0x1421C */

/* FAILED to decompile: __imp_free @ 0x14220 */

/* FAILED to decompile: __imp_pthread_mutex_lock @ 0x14224 */

/* FAILED to decompile: __imp__exit @ 0x14228 */

/* FAILED to decompile: __imp_memcpy @ 0x1422C */

/* FAILED to decompile: __imp___atomic_fetch_add_4 @ 0x14230 */

/* FAILED to decompile: __imp_shmget @ 0x14234 */

/* FAILED to decompile: __imp_signal @ 0x14238 */

/* FAILED to decompile: __imp_memcmp @ 0x1423C */

/* FAILED to decompile: __imp_sleep @ 0x14240 */

/* FAILED to decompile: __imp_htons @ 0x14244 */

/* FAILED to decompile: __imp_rewind @ 0x14248 */

/* FAILED to decompile: __imp_alarm @ 0x1424C */

/* FAILED to decompile: __imp_unlink @ 0x14250 */

/* FAILED to decompile: __imp_wait @ 0x14254 */

/* FAILED to decompile: __imp_shmat @ 0x14258 */

/* FAILED to decompile: __imp_fwrite @ 0x1425C */

/* FAILED to decompile: __imp_usleep @ 0x14260 */

/* FAILED to decompile: __imp_waitpid @ 0x14264 */

/* FAILED to decompile: __imp_strcpy @ 0x14268 */

/* FAILED to decompile: __imp_fread @ 0x1426C */

/* FAILED to decompile: __imp_shmctl @ 0x14270 */

/* FAILED to decompile: __imp_malloc @ 0x14274 */

/* FAILED to decompile: __imp___atomic_load_4 @ 0x14278 */

/* FAILED to decompile: __imp_stat @ 0x1427C */

/* FAILED to decompile: __imp_open @ 0x14280 */

/* FAILED to decompile: __imp_syscall @ 0x14284 */

/* FAILED to decompile: __imp_strlen @ 0x14288 */

/* FAILED to decompile: __imp_strchr @ 0x1428C */

/* FAILED to decompile: __imp___atomic_compare_exchange_4 @ 0x14290 */

/* FAILED to decompile: __imp___errno_location @ 0x14294 */

/* FAILED to decompile: __imp_snprintf @ 0x14298 */

/* FAILED to decompile: __imp___isoc99_sscanf @ 0x1429C */

/* FAILED to decompile: __imp_bind @ 0x142A0 */

/* FAILED to decompile: __imp_memset @ 0x142A4 */

/* FAILED to decompile: __imp_strncpy @ 0x142A8 */

/* FAILED to decompile: __imp_write @ 0x142AC */

/* FAILED to decompile: __imp_fileno @ 0x142B0 */

/* FAILED to decompile: __imp_shmdt @ 0x142B4 */

/* FAILED to decompile: __imp_fclose @ 0x142B8 */

/* FAILED to decompile: __imp_pipe @ 0x142BC */

/* FAILED to decompile: __imp_pthread_create @ 0x142C0 */

/* FAILED to decompile: __imp_fork @ 0x142C4 */

/* FAILED to decompile: __imp_execl @ 0x142C8 */

/* FAILED to decompile: __imp_listen @ 0x142CC */

/* FAILED to decompile: __imp_ftok @ 0x142D0 */

/* FAILED to decompile: __imp___atomic_store_4 @ 0x142D4 */

/* FAILED to decompile: __imp_pthread_cond_wait @ 0x142D8 */

/* FAILED to decompile: __imp_socket @ 0x142DC */

/* FAILED to decompile: __imp_pthread_join @ 0x142E0 */

/* FAILED to decompile: __imp_pthread_cancel @ 0x142E4 */

/* FAILED to decompile: __imp_pthread_cond_signal @ 0x142E8 */

/* FAILED to decompile: __imp_abort @ 0x142EC */

/* FAILED to decompile: __imp_close @ 0x142F0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x142F8 */

/* Total functions decompiled: 73, failed: 64 */
