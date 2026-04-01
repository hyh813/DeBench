/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;

/* MEMORY macro for atomic operations - simulates ARM __sync_val_compare_and_swap */
#define MEMORY(old, new, ptr) __sync_val_compare_and_swap((unsigned int*)(ptr), (old), (new))

/* Atomic pause/yield function - used in atomic retry loops */
static inline int atomic_pause() {
    __sync_synchronize();
    return 0;
}
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
// size_t is defined in stddef.h
// ssize_t is defined in sys/types.h
typedef unsigned long uintptr_t;
// intptr_t is defined in stdint.h
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Standard library headers */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/syscall.h>

/* Custom structures */
typedef struct {
 int start;
 int end;
 int result;
} ThreadData;

/* Global variables */
int signal_received = 0;
int signal_number = 0;
int ready = 0;
int data = 0;
int atomic_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int shared_counter = 0;

/* TLS simulation variables */
int unk_241A0 = 0;
char byte_241A4[32] = {0};

/* String constants */
const char *s = "LibTests";
const char *aLibL101D = "LibL101: strcpy=%d\n";
const char *aLibL102D = "LibL102: strcmp=%d\n";
const char *aLibL103D = "LibL103: strlen=%d\n";
const char *aLibL104D = "LibL104: memcpy=%d\n";
const char *aLibL105D = "LibL105: memcmp=%d\n";
const char *aLibL106D = "LibL106: printf=%d\n";
const char *aLibL107D = "LibL107: scanf=%d\n";
const char *aLibL108D = "LibL108: fopen=%d\n";
const char *aLibL109D = "LibL109: fread/fwrite=%d\n";
const char *aLibL110D = "LibL110: malloc/free=%d\n";
const char *aLibL111D = "LibL111: memset=%d\n";
const char *aLibL112D = "LibL112: strchr/strstr=%d\n";
const char *asc_1384E = "SysTests";
const char *aSysL301D = "SysL301: linux_syscall=%d\n";
const char *aSysL302D = "SysL302: win32_api=%d\n";
const char *aSysL303D = "SysL303: fork_exec=%d\n";
const char *aSysL304D = "SysL304: pipe_communication=%d\n";
const char *aSysL305D = "SysL305: socket_create=%d\n";
const char *aSysL306D = "SysL306: shmget_shmat=%d\n";
const char *aSysL307D = "SysL307: signal_handling=%d\n";
const char *asc_13937 = "ThreadTests";
const char *aThrL301D = "ThrL301: pthread_create=%d\n";
const char *aThrL302D = "ThrL302: pthread_join=%d\n";
const char *aThrL303D = "ThrL303: mutex_lock=%d\n";
const char *aThrL304D = "ThrL304: condition_variable=%d\n";
const char *aThrL305D = "ThrL305: atomic_ops=%d\n";
const char *aThrL306D = "ThrL306: thread_local_storage=%d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/6/6_gcc_Os_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10C9C */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_10CA8 @ 0x10CA8 */
void sub_10CA8()
{
 JUMPOUT(0);
}


/* Function: param_strlen_0 @ 0x10E54 */
size_t param_strlen_0(const char *s)
{
 return strlen(s);
}


/* Function: main @ 0x10F90 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: signal_handler @ 0x110A0 */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: thread_sum @ 0x110B8 */
void * thread_sum(void *arg)
{
 int v1; // r1
 int i; // r3

 v1 = *((unsigned int *)arg + 1);
 *((unsigned int *)arg + 2) = 0;
 for ( i = *(unsigned int *)arg; v1 >= i; ++i )
 *((unsigned int *)arg + 2) += i;
 return 0;
}


/* Function: thread_compute @ 0x110EC */
void * thread_compute(void *arg)
{
 int v1; // r4
 void *result; // r0

 v1 = *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v1 * v1;
 return result;
}


/* Function: thread_increment @ 0x11110 */
void * thread_increment(void *arg)
{
 int v1; // r4
 int v2; // r7

 v1 = 0;
 v2 = *(unsigned int *)arg;
 while ( v1 < v2 )
 {
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 ++v1;
 }
 return 0;
}


/* Function: consumer_thread @ 0x11164 */
void * consumer_thread(void *arg)
{
 int v1; // r4
 void *result; // r0

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *(unsigned int *)result = v1;
 return result;
}


/* Function: producer_thread @ 0x111BC */
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


/* Function: thread_atomic_increment @ 0x11204 */
void * thread_atomic_increment(void *arg)
{
 int v1; // r4
 int v2; // r7

 v1 = 0;
 v2 = *(unsigned int *)arg;
 while ( v1 < v2 )
 {
 _sync_fetch_and_add_4(&atomic_counter, 1);
 _sync_val_compare_and_swap_4(&atomic_counter, atomic_counter, v1 + 1000);
 ++v1;
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x1128C */
void * thread_atomic_load_store(void *arg)
{
 int v2; // r4

 (void)arg;
 __sync_synchronize();
 v2 = atomic_counter;
 __sync_synchronize();
 atomic_counter = v2 + 100;
 __sync_synchronize();
 return 0;
}


/* Function: thread_tls_test @ 0x112BC */
void * thread_tls_test(void *arg)
{
 int v1; // r5
 void *result; // r0

 v1 = unk_241A0;
 unk_241A0 += 50;
 strncpy(byte_241A4, (const char *)arg, 0x1Fu);
 result = malloc(8u);
 *(unsigned int *)result = v1;
 *((unsigned int *)result + 1) = v1 + 50;
 return result;
}


/* Function: param_strcpy @ 0x11304 */
int param_strcpy(char *dst, const char *src)
{
 strcpy(dst, src);
 return param_strlen_0(dst);
}


/* Function: call_strcpy @ 0x1131C */
int call_strcpy()
{
 char buffer[32]; // [sp+4h] [bp-2Ch] BYREF

 return param_strcpy(buffer, "HelloLib");
}


/* Function: param_strcmp @ 0x1136C */
int param_strcmp(const char *s1, const char *s2)
{
 int v2; // r0

 v2 = strcmp(s1, s2);
 if ( v2 > 0 )
 return 1;
 if ( v2 )
 return -1;
 return 0;
}


/* Function: call_strcmp @ 0x11390 */
int call_strcmp()
{
 int v0; // r4
 int v1; // r5

 v0 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 return v0 + v1 + param_strcmp("bbb", "aaa");
}


/* Function: call_strlen @ 0x113E4 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x113EC */
int param_memcpy(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
 return n;
}


/* Function: call_memcpy @ 0x11400 */
int call_memcpy()
{
 int src[5]; // [sp+4h] [bp-34h] BYREF
 int dst[5]; // [sp+18h] [bp-20h] BYREF

 src[0] = 10;
 src[1] = 20;
 src[2] = 30;
 src[3] = 40;
 src[4] = 50;
 memset(dst, 0, sizeof(dst));
 param_memcpy(dst, src, 0x14u);
 return dst[0] + dst[2] + dst[4];
}


/* Function: param_memcmp @ 0x11490 */
int param_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // r0

 v3 = memcmp(p1, p2, n);
 if ( v3 > 0 )
 return 1;
 if ( v3 )
 return -1;
 return 0;
}


/* Function: call_memcmp @ 0x114B4 */
int call_memcmp()
{
 int v0; // r4
 int arr1[3]; // [sp+0h] [bp-38h] BYREF
 int arr2[3]; // [sp+Ch] [bp-2Ch] BYREF
 int arr3[3]; // [sp+18h] [bp-20h] BYREF

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
 return v0 + param_memcmp(arr1, arr3, 0xCu);
}


/* Function: param_printf @ 0x1154C */
int param_printf(int x, const char *name)
{
 return printf("Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x11564 */
int call_printf()
{
 return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x11574 */
int param_scanf(const char *input_str)
{
 int a; // [sp+4h] [bp-14h] BYREF
 int b; // [sp+8h] [bp-10h] BYREF

 if ( sscanf(input_str, "%d,%d", &a, &b) == 2 )
 return a + b;
 else
 return -1;
}


/* Function: call_scanf @ 0x115D4 */
int call_scanf()
{
 return param_scanf("123,456");
}


/* Function: param_fopen_fclose @ 0x115E0 */
int param_fopen_fclose(const char *filename)
{
 FILE *v1; // r0
 FILE *v2; // r5
 int v3; // r4

 v1 = fopen(filename, "r");
 v2 = v1;
 if ( !v1 )
 return -1;
 v3 = fileno(v1);
 fclose(v2);
 return v3;
}


/* Function: call_fopen_fclose @ 0x11614 */
int call_fopen_fclose()
{
 if ( param_fopen_fclose("/etc/passwd") < 0 )
 return -1;
 else
 return 42;
}


/* Function: param_fread_fwrite @ 0x11634 */
int param_fread_fwrite(const char *tmpfile)
{
 FILE *v2; // r0
 FILE *v3; // r4
 size_t v5; // r5
 unsigned char v6[4]; // [sp+0h] [bp-38h] BYREF
 char read_buffer[32]; // [sp+4h] [bp-34h] BYREF

 v2 = fopen(tmpfile, "w+");
 v3 = v2;
 if ( !v2 )
 return -1;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
 {
 rewind(v3);
 v5 = fread(read_buffer, 1u, 0x12u, v3);
 v6[v5 + 4] = 0;
 fclose(v3);
 unlink(tmpfile);
 if ( v5 == 18 )
 {
 if ( !strcmp(read_buffer, "BinBench Test Data") )
 return 42;
 else
 return -3;
 }
 else
 {
 return -3;
 }
 }
 else
 {
 fclose(v3);
 return -2;
 }
}


/* Function: call_fread_fwrite @ 0x11724 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x11730 */
int param_malloc_free(size_t size)
{
 size_t v1; // r4
 unsigned int *v3; // r0
 int i; // r3
 int v5; // r4

 v1 = size;
 v3 = malloc(4 * size);
 if ( !v3 )
 return -1;
 for ( i = 0; i != size; ++i )
 v3[i] = 10 * i;
 v5 = v3[v1 - 1] + *v3;
 free(v3);
 return v5;
}


/* Function: call_malloc_free @ 0x1178C */
int call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x11794 */
int param_memset(void *buffer, size_t size)
{
 char *v4; // r3
 int result; // r0
 char *v6; // r5
 int v7; // t1

 memset(buffer, 0, size);
 v4 = (char *)buffer;
 result = 0;
 v6 = (char *)buffer + size;
 while ( v4 != v6 )
 {
 v7 = (unsigned char)*v4++;
 result += v7;
 }
 return result;
}


/* Function: call_memset @ 0x117CC */
int call_memset()
{
 int *v0; // r2
 int i; // r3
 int buffer[10]; // [sp+4h] [bp-34h] BYREF

 v0 = buffer;
 for ( i = 0; i != 10; ++i )
 *v0++ = 255;
 param_memset(buffer, 0x28u);
 return buffer[0] + buffer[9];
}


/* Function: param_strchr_strstr @ 0x11840 */
int param_strchr_strstr(const char *str, char ch, const char *substr)
{
 char *v5; // r4
 int v6; // r4
 char *v7; // r0
 int v8; // r0

 v5 = strchr(str, ch);
 if ( v5 )
 v6 = v5 - str;
 else
 v6 = -1;
 v7 = strstr(str, substr);
 if ( v7 )
 v8 = v7 - str;
 else
 v8 = -1;
 return v6 + v8;
}


/* Function: call_strchr_strstr @ 0x1187C */
int call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x11894 */
void test_standard_library_functions()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 int v9; // r0
 int v10; // r0

 puts(s);
 v0 = call_strcpy();
 _printf_chk(1, aLibL101D, v0);
 v1 = call_strcmp();
 _printf_chk(1, aLibL102D, v1);
 _printf_chk(1, aLibL103D, 12);
 v2 = call_memcpy();
 _printf_chk(1, aLibL104D, v2);
 v3 = call_memcmp();
 _printf_chk(1, aLibL105D, v3);
 v4 = call_printf();
 _printf_chk(1, aLibL106D, v4);
 v5 = call_scanf();
 _printf_chk(1, aLibL107D, v5);
 v6 = call_fopen_fclose();
 _printf_chk(1, aLibL108D, v6);
 v7 = call_fread_fwrite();
 _printf_chk(1, aLibL109D, v7);
 v8 = call_malloc_free();
 _printf_chk(1, aLibL110D, v8);
 v9 = call_memset();
 _printf_chk(1, aLibL111D, v9);
 v10 = call_strchr_strstr();
 _printf_chk(1, aLibL112D, v10);
}


/* Function: param_linux_syscall @ 0x119C4 */
int param_linux_syscall(const char *pathname)
{
 int v1; // r0
 int v2; // r4

 v1 = syscall(5, pathname, 0);
 v2 = v1;
 if ( v1 < 0 )
 return -*_errno_location();
 syscall(6, v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x11A04 */
int call_linux_syscall()
{
 if ( param_linux_syscall("/etc/passwd") < 0 )
 return -1;
 else
 return 42;
}


/* Function: param_win32_api @ 0x11A24 */
int param_win32_api(const char *filename)
{
 struct stat st; // [sp+0h] [bp-68h] BYREF

 if ( stat(filename, &st) < 0 )
 return -1;
 if ( st.st_size <= 0 )
 return -2;
 return 42;
}


/* Function: call_win32_api @ 0x11A88 */
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x11A94 */
int param_fork_exec(const char *prog, const char *arg)
{
 int v4; // r0
 int status[6]; // [sp+0h] [bp-18h] BYREF

 status[0] = (int)prog;
 status[1] = (int)arg;
 v4 = fork();
 if ( v4 < 0 )
 return -1;
 if ( !v4 )
 {
 execl(prog, prog, arg, 0);
 exit(127);
 }
 if ( waitpid(v4, status, 0) < 0 )
 return -2;
 if ( (status[0] & 0x7F) != 0 )
 return -3;
 return BYTE1(status[0]);
}


/* Function: call_fork_exec @ 0x11B34 */
int call_fork_exec()
{
 if ( param_fork_exec("/bin/true", 0) )
 return -1;
 else
 return 42;
}


/* Function: param_pipe_communication @ 0x11B58 */
int param_pipe_communication()
{
 __pid_t v0; // r0
 int v1; // r4
 ssize_t v2; // r4
 unsigned char v4[4]; // [sp+0h] [bp-40h] BYREF
 int pipefd[2]; // [sp+4h] [bp-3Ch] BYREF
 char buffer[32]; // [sp+Ch] [bp-34h] BYREF

 if ( pipe(pipefd) < 0 )
 return -1;
 v0 = fork();
 v1 = v0;
 if ( v0 < 0 )
 return -2;
 if ( !v0 )
 {
 close(pipefd[0]);
 write(pipefd[1], "HelloPipe", 9u);
 close(pipefd[1]);
 exit(v1);
 }
 close(pipefd[1]);
 v2 = read(pipefd[0], buffer, 0x1Fu);
 v4[v2 + 12] = 0;
 close(pipefd[0]);
 wait(0);
 if ( v2 <= 0 )
 return -3;
 else
 return 42;
}


/* Function: call_pipe_communication @ 0x11C3C */
// attributes: thunk
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x11C40 */
int param_socket_create()
{
 int v0; // r0
 int v1; // r4
 int opt; // [sp+8h] [bp-20h] BYREF
 struct sockaddr_in addr; // [sp+Ch] [bp-1Ch] BYREF

 v0 = socket(2, 1, 0);
 v1 = v0;
 if ( v0 < 0 )
 return -1;
 opt = 1;
 if ( setsockopt(v0, 1, 2, &opt, 4u) >= 0 )
 {
 memset(&addr, 0, sizeof(addr));
 addr.sin_family = 2;
 if ( bind(v1, (const struct sockaddr *)&addr, 0x10u) >= 0 )
 {
 if ( listen(v1, 5) < 0 )
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
 else
 {
 close(v1);
 return -3;
 }
 }
 else
 {
 close(v1);
 return -2;
 }
}


/* Function: call_socket_create @ 0x11D3C */
// attributes: thunk
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x11D40 */
size_t param_shmget_shmat()
{
 int v0; // r0
 size_t v1; // r4
 int v3; // r6
 char *v4; // r0
 const char *v5; // r5

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return -1;
 close(v0);
 if ( ftok("/tmp/binbench_shm", 42) < 0 )
 return -1;
 v3 = shmget();
 if ( v3 < 0 )
 return -2;
 v4 = (char *)shmat();
 v5 = v4;
 if ( v4 == (char *)-1 )
 return -3;
 strcpy(v4, "SharedMemory");
 v1 = param_strlen_0(v5);
 shmdt(v5);
 shmctl(v3, 0);
 return v1;
}


/* Function: call_shmget_shmat @ 0x11DF4 */
int call_shmget_shmat()
{
 if ( (int)param_shmget_shmat() <= 0 )
 return -1;
 else
 return 42;
}


/* Function: param_signal_handling @ 0x11E0C */
int param_signal_handling()
{
 int result; // r0
 int v1; // r5
 int v2; // r5

 result = (int)signal(10, signal_handler);
 if ( result != -1 )
 {
 if ( signal(14, signal_handler) == (__sighandler_t)-1 )
 {
 return -2;
 }
 else
 {
 signal_received = 0;
 raise(10);
 v1 = 1001;
 while ( !signal_received )
 {
 if ( !--v1 )
 break;
 usleep(0x3E8u);
 }
 if ( signal_received )
 {
 if ( signal_number == 10 )
 {
 signal_received = 0;
 alarm(1u);
 v2 = 2001;
 while ( !signal_received )
 {
 if ( !--v2 )
 break;
 usleep(0x3E8u);
 }
 if ( signal_received && signal_number == 14 )
 {
 signal(10, 0);
 signal(14, 0);
 return 42;
 }
 else
 {
 return -5;
 }
 }
 else
 {
 return -4;
 }
 }
 else
 {
 return -3;
 }
 }
 }
 return result;
}


/* Function: call_signal_handling @ 0x11F24 */
// attributes: thunk
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x11F28 */
void test_system_calls()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v6; // r0

 puts(asc_1384E);
 v0 = call_linux_syscall();
 _printf_chk(1, aSysL301D, v0);
 v1 = call_win32_api();
 _printf_chk(1, aSysL302D, v1);
 v2 = call_fork_exec();
 _printf_chk(1, aSysL303D, v2);
 v3 = param_pipe_communication();
 _printf_chk(1, aSysL304D, v3);
 v4 = param_socket_create();
 _printf_chk(1, aSysL305D, v4);
 v5 = call_shmget_shmat();
 _printf_chk(1, aSysL306D, v5);
 v6 = param_signal_handling();
 _printf_chk(1, aSysL307D, v6);
}


/* Function: param_pthread_create @ 0x11FE4 */
int param_pthread_create(int x)
{
 int v1; // r4
 pthread_t tid; // [sp+0h] [bp-18h] BYREF
 int input; // [sp+4h] [bp-14h] BYREF
 void *thread_ret; // [sp+8h] [bp-10h] BYREF

 tid = x;
 input = x;
 if ( pthread_create(&tid, 0, thread_compute, &input) )
 return -1;
 pthread_join(tid, &thread_ret);
 v1 = *(unsigned int *)thread_ret;
 free(thread_ret);
 return v1;
}


/* Function: call_pthread_create @ 0x12064 */
int call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: param_pthread_join @ 0x1206C */
int param_pthread_join()
{
 pthread_t *v0; // r9
 ThreadData *v1; // r8
 ThreadData *v2; // r6
 pthread_t *v3; // r7
 int v4; // r5
 int v5; // r4
 pthread_t v6; // t1
 pthread_t tids[3]; // [sp+4h] [bp-54h] BYREF
 ThreadData data[3]; // [sp+10h] [bp-48h] BYREF

 v0 = tids;
 v1 = data;
 v2 = data;
 v3 = tids;
 v4 = 0;
 data[0].start = 1;
 data[0].end = 10;
 data[0].result = 0;
 data[1].start = 11;
 data[1].end = 20;
 data[1].result = 0;
 data[2].start = 21;
 data[2].end = 30;
 data[2].result = 0;
 do
 {
 v5 = pthread_create(v3, 0, thread_sum, v2);
 if ( v5 )
 return -1;
 ++v4;
 ++v3;
 ++v2;
 }
 while ( v4 != 3 );
 while ( 1 )
 {
 v6 = *v0++;
 if ( pthread_join(v6, 0) )
 break;
 --v4;
 v5 += v1->result;
 ++v1;
 if ( !v4 )
 return v5;
 }
 return -2;
}


/* Function: call_pthread_join @ 0x12158 */
// attributes: thunk
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x1215C */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 void *v3; // r5
 int v5; // r6
 int i; // r6
 int arg; // [sp+4h] [bp-1Ch] BYREF

 arg = iterations_per_thread;
 v3 = malloc(4 * thread_count);
 if ( !v3 )
 return -1;
 v5 = 0;
 shared_counter = 0;
 while ( v5 < thread_count )
 {
 if ( pthread_create((pthread_t *)v3 + v5, 0, thread_increment, &arg) )
 {
 free(v3);
 return -2;
 }
 ++v5;
 }
 for ( i = 0; i < thread_count; ++i )
 pthread_join(*((unsigned int *)v3 + i), 0);
 free(v3);
 if ( shared_counter == arg * thread_count )
 return 42;
 else
 return -3;
}


/* Function: call_mutex_lock @ 0x12218 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x12224 */
int param_condition_variable(pthread_t a1, pthread_t a2, void *a3, void *a4)
{
 int v4; // r4
 pthread_t producer; // [sp+0h] [bp-18h] BYREF
 pthread_t consumer; // [sp+4h] [bp-14h] BYREF
 void *consumer_ret[4]; // [sp+8h] [bp-10h] BYREF

 producer = a1;
 consumer = a2;
 consumer_ret[0] = a3;
 consumer_ret[1] = a4;
 ready = 0;
 data = 0;
 if ( pthread_create(&consumer, 0, consumer_thread, 0) )
 return -1;
 if ( pthread_create(&producer, 0, producer_thread, 0) )
 {
 pthread_cancel(consumer);
 return -2;
 }
 else
 {
 pthread_join(consumer, consumer_ret);
 pthread_join(producer, 0);
 v4 = *(unsigned int *)consumer_ret[0];
 free(consumer_ret[0]);
 }
 return v4;
}


/* Function: call_condition_variable @ 0x122E8 */
// attributes: thunk
int call_condition_variable(pthread_t a1, pthread_t a2, void *a3, void *a4)
{
 return param_condition_variable(a1, a2, a3, a4);
}


/* Function: param_atomic_ops @ 0x122EC */
int param_atomic_ops(int thread_count, int iterations)
{
 void *v3; // r0
 void *v4; // r4
 int v6; // r5
 int v7; // r0
 int v8; // r0
 int i; // r5
 int v10; // r0
 int v11; // r5
 int arg; // [sp+4h] [bp-24h] BYREF
 pthread_t load_store_tid; // [sp+8h] [bp-20h] BYREF

 arg = iterations;
 v3 = malloc(4 * thread_count);
 v4 = v3;
 if ( !v3 )
 return -1;
 v6 = 0;
 v7 = _sync_synchronize(v3);
 atomic_counter = 0;
 _sync_synchronize(v7);
 while ( v6 < thread_count )
 {
 if ( pthread_create((pthread_t *)v4 + v6, 0, thread_atomic_increment, &arg) )
 {
 free(v4);
 return -2;
 }
 ++v6;
 }
 v8 = pthread_create(&load_store_tid, 0, thread_atomic_load_store, 0);
 if ( !v8 )
 v8 = pthread_join(load_store_tid, 0);
 for ( i = 0; i < thread_count; ++i )
 v8 = pthread_join(*((unsigned int *)v4 + i), 0);
 v10 = _sync_synchronize(v8);
 v11 = atomic_counter;
 _sync_synchronize(v10);
 free(v4);
 if ( v11 <= 0 )
 return -3;
 else
 return 42;
}


/* Function: call_atomic_ops @ 0x12408 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x12414 */
int param_thread_local_storage(int thread_count)
{
 size_t v1; // r4
 void *v3; // r6
 unsigned int *v4; // r0
 bool v5; // zf
 int v6; // r7
 unsigned int *v7; // r4
 void *v9; // r0
 int i; // r7
 int v11; // r7
 int v12; // r8
 int v13; // r9
 int v14; // r3
 int v15; // r5
 bool v16; // zf
 unsigned int *v17; // r5
 void *v18; // t1
 void *ret; // [sp+8h] [bp-28h] BYREF

 v1 = 4 * thread_count;
 v3 = malloc(4 * thread_count);
 v4 = malloc(v1);
 v5 = v4 == 0;
 if ( v4 )
 v5 = v3 == 0;
 if ( v5 )
 return -1;
 v6 = 0;
 v7 = v4;
 while ( v6 < thread_count )
 {
 v9 = malloc(0x10u);
 v7[v6] = v9;
 _snprintf_chk(v9, 16);
 ++v6;
 }
 for ( i = 0; i < thread_count; ++i )
 {
 if ( pthread_create((pthread_t *)v3 + i, 0, thread_tls_test, (void *)v7[i]) )
 {
 v17 = v7 - 1;
 do
 {
 v18 = (void *)v17[1];
 ++v17;
 free(v18);
 }
 while ( v17 != &v7[i] );
 free(v7);
 free(v3);
 return -2;
 }
 }
 v11 = 0;
 v12 = 0;
 v13 = 0;
 while ( v11 < thread_count )
 {
 pthread_join(*((unsigned int *)v3 + v11), &ret);
 v13 += *(unsigned int *)ret;
 v12 += *((unsigned int *)ret + 1);
 free(ret);
 free((void *)v7[v11++]);
 }
 free(v7);
 free(v3);
 v14 = 100 * thread_count;
 v15 = 150 * thread_count;
 v16 = v14 == v13;
 if ( v14 == v13 )
 v16 = v15 == v12;
 if ( v16 )
 return 42;
 else
 return -3;
}


/* Function: call_thread_local_storage @ 0x125AC */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x125B4 */
void test_thread_concurrency()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 long long v3; // r0
 void *v4; // r2
 void *v5; // r3
 int v6; // r0
 int v7; // r0
 int v8; // r0

 puts(asc_13937);
 v0 = call_pthread_create();
 _printf_chk(1, aThrL301D, v0);
 v1 = param_pthread_join();
 _printf_chk(1, aThrL302D, v1);
 v2 = call_mutex_lock();
 v3 = _printf_chk(1, aThrL303D, v2);
 v6 = param_condition_variable(v3, HIDWORD(v3), v4, v5);
 _printf_chk(1, aThrL304D, v6);
 v7 = call_atomic_ops();
 _printf_chk(1, aThrL305D, v7);
 v8 = call_thread_local_storage();
 _printf_chk(1, aThrL306D, v8);
}


/* Function: __sync_fetch_and_add_4 @ 0x12658 */
int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_add(a1, a2);
}


/* Function: __sync_fetch_and_sub_4 @ 0x12690 */
int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_sub(a1, a2);
}


/* Function: __sync_fetch_and_or_4 @ 0x126C8 */
int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_or(a1, a2);
}


/* Function: __sync_fetch_and_and_4 @ 0x12700 */
int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_and(a1, a2);
}


/* Function: __sync_fetch_and_xor_4 @ 0x12738 */
int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_xor(a1, a2);
}


/* Function: __sync_fetch_and_nand_4 @ 0x12770 */
int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_nand(a1, a2);
}


/* Function: __sync_fetch_and_add_2 @ 0x127AC */
int _sync_fetch_and_add_2(int a1, int a2)
{
 return __sync_fetch_and_add((unsigned short *)a1, a2);
}


/* Function: __sync_fetch_and_sub_2 @ 0x1280C */
int _sync_fetch_and_sub_2(int a1, int a2)
{
 return __sync_fetch_and_sub((unsigned short *)a1, a2);
}


/* Function: __sync_fetch_and_or_2 @ 0x1286C */
int _sync_fetch_and_or_2(int a1, int a2)
{
 return __sync_fetch_and_or((unsigned short *)a1, a2);
}


/* Function: __sync_fetch_and_and_2 @ 0x128CC */
int _sync_fetch_and_and_2(int a1, int a2)
{
 return __sync_fetch_and_and((unsigned short *)a1, a2);
}


/* Function: __sync_fetch_and_xor_2 @ 0x1292C */
int _sync_fetch_and_xor_2(int a1, int a2)
{
 return __sync_fetch_and_xor((unsigned short *)a1, a2);
}


/* Function: __sync_fetch_and_nand_2 @ 0x1298C */
int _sync_fetch_and_nand_2(int a1, int a2)
{
 return __sync_fetch_and_nand((unsigned short *)a1, a2);
}


/* Function: __sync_fetch_and_add_1 @ 0x129F0 */
int _sync_fetch_and_add_1(int a1, int a2)
{
 return __sync_fetch_and_add((unsigned char *)a1, a2);
}


/* Function: __sync_fetch_and_sub_1 @ 0x12A4C */
int _sync_fetch_and_sub_1(int a1, int a2)
{
 return __sync_fetch_and_sub((unsigned char *)a1, a2);
}


/* Function: __sync_fetch_and_or_1 @ 0x12AA8 */
int _sync_fetch_and_or_1(int a1, int a2)
{
 return __sync_fetch_and_or((unsigned char *)a1, a2);
}


/* Function: __sync_fetch_and_and_1 @ 0x12B04 */
int _sync_fetch_and_and_1(int a1, int a2)
{
 return __sync_fetch_and_and((unsigned char *)a1, a2);
}


/* Function: __sync_fetch_and_xor_1 @ 0x12B60 */
int _sync_fetch_and_xor_1(int a1, int a2)
{
 return __sync_fetch_and_xor((unsigned char *)a1, a2);
}


/* Function: __sync_fetch_and_nand_1 @ 0x12BBC */
int _sync_fetch_and_nand_1(int a1, int a2)
{
 return __sync_fetch_and_nand((unsigned char *)a1, a2);
}


/* Function: __sync_add_and_fetch_4 @ 0x12C1C */
int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 return __sync_add_and_fetch(a1, a2);
}


/* Function: __sync_sub_and_fetch_4 @ 0x12C54 */
int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 return __sync_sub_and_fetch(a1, a2);
}


/* Function: __sync_or_and_fetch_4 @ 0x12C8C */
int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 return __sync_or_and_fetch(a1, a2);
}


/* Function: __sync_and_and_fetch_4 @ 0x12CC4 */
int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 return __sync_and_and_fetch(a1, a2);
}


/* Function: __sync_xor_and_fetch_4 @ 0x12CFC */
int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 return __sync_xor_and_fetch(a1, a2);
}


/* Function: __sync_nand_and_fetch_4 @ 0x12D34 */
int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 return __sync_nand_and_fetch(a1, a2);
}


/* Function: __sync_add_and_fetch_2 @ 0x12D70 */
int _sync_add_and_fetch_2(int a1, int a2)
{
 return __sync_add_and_fetch((unsigned short *)a1, a2);
}


/* Function: __sync_sub_and_fetch_2 @ 0x12DD8 */
int _sync_sub_and_fetch_2(int a1, int a2)
{
 return __sync_sub_and_fetch((unsigned short *)a1, a2);
}


/* Function: __sync_or_and_fetch_2 @ 0x12E40 */
int _sync_or_and_fetch_2(int a1, int a2)
{
 return __sync_or_and_fetch((unsigned short *)a1, a2);
}


/* Function: __sync_and_and_fetch_2 @ 0x12EA8 */
int _sync_and_and_fetch_2(int a1, int a2)
{
 return __sync_and_and_fetch((unsigned short *)a1, a2);
}


/* Function: __sync_xor_and_fetch_2 @ 0x12F10 */
int _sync_xor_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( __sync_val_compare_and_swap(v4, *v4, v6) != *v4 );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x12F78 */
int _sync_nand_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ (~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( __sync_val_compare_and_swap(v4, *v4, v6) != *v4 );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x12FE4 */
int _sync_add_and_fetch_1(int a1, int a2)
{
 return __sync_add_and_fetch((unsigned char *)a1, a2);
}


/* Function: __sync_sub_and_fetch_1 @ 0x13048 */
int _sync_sub_and_fetch_1(int a1, int a2)
{
 return __sync_sub_and_fetch((unsigned char *)a1, a2);
}


/* Function: __sync_or_and_fetch_1 @ 0x130AC */
int _sync_or_and_fetch_1(int a1, int a2)
{
 return __sync_or_and_fetch((unsigned char *)a1, a2);
}


/* Function: __sync_and_and_fetch_1 @ 0x13110 */
int _sync_and_and_fetch_1(int a1, int a2)
{
 return __sync_and_and_fetch((unsigned char *)a1, a2);
}


/* Function: __sync_xor_and_fetch_1 @ 0x13174 */
int _sync_xor_and_fetch_1(int a1, int a2)
{
 return __sync_xor_and_fetch((unsigned char *)a1, a2);
}


/* Function: __sync_nand_and_fetch_1 @ 0x131D8 */
int _sync_nand_and_fetch_1(int a1, int a2)
{
 return __sync_nand_and_fetch((unsigned char *)a1, a2);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x13240 */
int _sync_val_compare_and_swap_4(unsigned int *a1, unsigned int a2, unsigned int a3)
{
 return __sync_val_compare_and_swap(a1, a2, a3);
}


/* Function: __sync_val_compare_and_swap_2 @ 0x13290 */
int _sync_val_compare_and_swap_2(int a1, int a2, int a3)
{
 char v4; // r5
 int v5; // r10
 unsigned int *v6; // r4
 int v7; // r9
 int v8; // r7
 unsigned int v9; // r3

 v4 = (8 * a1) & 0x18;
 v5 = 0xFFFF << v4;
 v6 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v7 = a3 << v4;
 v8 = (unsigned short)a2;
 while ( 1 )
 {
 v9 = ((unsigned int)v5 & *v6) >> v4;
 if ( v9 != v8 )
 break;
 if ( !__sync_val_compare_and_swap(v6, *v6, (v7 ^ *v6) & v5 ^ *v6) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x13308 */
int _sync_val_compare_and_swap_1(int a1, int a2, int a3)
{
 char v4; // r5
 unsigned int *v5; // r4
 int v6; // r7
 int v7; // r9
 int v8; // r10
 unsigned int v9; // r3

 v4 = (8 * a1) & 0x18;
 v5 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v6 = 255 << v4;
 v7 = a3 << v4;
 v8 = (unsigned char)a2;
 while ( 1 )
 {
 v9 = ((unsigned int)v6 & *v5) >> v4;
 if ( v9 != v8 )
 break;
 if ( !__sync_val_compare_and_swap(v5, *v5, (v7 ^ *v5) & v6 ^ *v5) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x1337C */
bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return __sync_val_compare_and_swap((unsigned int*)a1, a2, a3) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x133A8 */
bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x133C4 */
bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x133EC */
int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x13424 */
int _sync_lock_test_and_set_2(int a1, int a2)
{
 char v2; // r9
 unsigned int *v3; // r5
 int v4; // r6
 int v5; // r7
 unsigned int v6; // r4

 v2 = (8 * a1) & 0x18;
 v3 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v4 = 0xFFFF << v2;
 v5 = a2 << v2;
 do
 v6 = *v3;
 while ( MEMORY[0xFFFF0FC0](*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (short)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x13484 */
int _sync_lock_test_and_set_1(int a1, int a2)
{
 char v2; // r9
 unsigned int *v3; // r5
 int v4; // r6
 int v5; // r7
 unsigned int v6; // r4

 v2 = (8 * a1) & 0x18;
 v3 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v4 = 255 << v2;
 v5 = a2 << v2;
 do
 v6 = *v3;
 while ( MEMORY[0xFFFF0FC0](*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x134E0 */
int _sync_lock_release_8(unsigned int *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0]();
 *a1 = 0;
 a1[1] = 0;
 return result;
}


/* Function: __sync_lock_release_4 @ 0x13504 */
int _sync_lock_release_4(unsigned int *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0]();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_2 @ 0x13524 */
int _sync_lock_release_2(unsigned short *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0]();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_1 @ 0x13544 */
int _sync_lock_release_1(unsigned char *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0]();
 *a1 = 0;
 return result;
}



/* CRT stub function __aeabi_read_tp removed by preprocessor */



/* Function: .term_proc @ 0x13578 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_malloc @ 0x241BC */

/* FAILED to decompile: __imp_open @ 0x241C0 */

/* FAILED to decompile: __imp_pthread_create @ 0x241C4 */

/* FAILED to decompile: __imp_shmget @ 0x241C8 */

/* FAILED to decompile: __imp_execl @ 0x241CC */

/* FAILED to decompile: __imp___errno_location @ 0x241D0 */

/* FAILED to decompile: __imp_rewind @ 0x241D4 */

/* FAILED to decompile: __imp_fopen @ 0x241D8 */

/* FAILED to decompile: __imp_ftok @ 0x241DC */

/* FAILED to decompile: __imp_waitpid @ 0x241E0 */

/* FAILED to decompile: __imp_shmdt @ 0x241E4 */

/* FAILED to decompile: __imp_free @ 0x241E8 */

/* FAILED to decompile: __imp__exit @ 0x241EC */

/* FAILED to decompile: __imp_setsockopt @ 0x241F0 */

/* FAILED to decompile: __imp_read @ 0x241F4 */

/* FAILED to decompile: __imp_bind @ 0x241F8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x241FC */

/* FAILED to decompile: __imp_strchr @ 0x24200 */

/* FAILED to decompile: __imp_syscall @ 0x24204 */

/* FAILED to decompile: __imp_fread @ 0x24208 */

/* FAILED to decompile: __imp___isoc99_sscanf @ 0x2420C */

/* FAILED to decompile: __imp_pthread_cond_signal @ 0x24210 */

/* FAILED to decompile: __imp_abort @ 0x24214 */

/* FAILED to decompile: __imp_close @ 0x24218 */

/* FAILED to decompile: __imp_wait @ 0x2421C */

/* FAILED to decompile: __imp_stat_0 @ 0x24220 */

/* FAILED to decompile: strlen @ 0x24224 */

/* FAILED to decompile: __imp_shmctl @ 0x24228 */

/* FAILED to decompile: __imp_shmat @ 0x2422C */

/* FAILED to decompile: __imp_socket @ 0x24230 */

/* FAILED to decompile: __imp_pthread_cancel @ 0x24234 */

/* FAILED to decompile: __imp_memset @ 0x24238 */

/* FAILED to decompile: __imp_memcpy @ 0x2423C */

/* FAILED to decompile: __imp_usleep @ 0x24240 */

/* FAILED to decompile: __imp_strncpy @ 0x24244 */

/* FAILED to decompile: __imp_signal @ 0x24248 */

/* FAILED to decompile: __imp_sleep @ 0x2424C */

/* FAILED to decompile: __imp_unlink @ 0x24250 */

/* FAILED to decompile: __imp_raise @ 0x24254 */

/* FAILED to decompile: __imp_memcmp @ 0x24258 */

/* FAILED to decompile: __imp_strcpy @ 0x2425C */

/* FAILED to decompile: __imp_fork @ 0x24260 */

/* FAILED to decompile: __imp_pthread_cond_wait @ 0x24264 */

/* FAILED to decompile: __imp_write @ 0x24268 */

/* FAILED to decompile: __imp_fileno @ 0x2426C */

/* FAILED to decompile: __imp_fclose @ 0x24270 */

/* FAILED to decompile: __imp_strcmp @ 0x24274 */

/* FAILED to decompile: __imp_pthread_mutex_lock @ 0x24278 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x2427C */

/* FAILED to decompile: __imp_listen @ 0x24280 */

/* FAILED to decompile: __imp___printf_chk @ 0x24284 */

/* FAILED to decompile: __imp_alarm @ 0x24288 */

/* FAILED to decompile: __imp_pipe @ 0x2428C */

/* FAILED to decompile: __imp_pthread_mutex_unlock @ 0x24290 */

/* FAILED to decompile: __imp___snprintf_chk @ 0x24294 */

/* FAILED to decompile: __imp_strstr @ 0x24298 */

/* FAILED to decompile: __imp_puts @ 0x2429C */

/* FAILED to decompile: __imp_fwrite @ 0x242A0 */

/* FAILED to decompile: __imp_pthread_join @ 0x242A4 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x242A8 */

/* Total functions decompiled: 122, failed: 60 */
