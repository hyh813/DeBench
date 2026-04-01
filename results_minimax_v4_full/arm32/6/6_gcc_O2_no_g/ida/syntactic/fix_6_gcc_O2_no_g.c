/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
/* ptrdiff_t is defined in stddef.h */
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Include stddef.h for size_t and other standard types */
#include <stddef.h>

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <errno.h>
#include <pthread.h>

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/6/6_gcc_O2_no_g
 * Processor: arm
 */

/* Forward declarations for global variables used before definition */
extern int signal_received;
extern int signal_number;
extern int ready;
extern int data;
extern int atomic_counter;
extern int shared_counter;
extern pthread_mutex_t counter_mutex;
extern pthread_mutex_t cond_mutex;
extern pthread_cond_t cond;
extern int unk_2419C;
extern char byte_241A0[32];
extern const char *s;
extern const char *aLibL101D;
extern const char *aLibL102D;
extern const char *aLibL103D;
extern const char *aLibL104D;
extern const char *aLibL105D;
extern const char *aLibL106D;
extern const char *aLibL107D;
extern const char *aLibL108D;
extern const char *aLibL109D;
extern const char *aLibL110D;
extern const char *aLibL111D;
extern const char *aLibL112D;
extern const char *asc_13C08;
extern const char *aSysL301D;
extern const char *aSysL302D;
extern const char *aSysL303D;
extern const char *aSysL304D;
extern const char *aSysL305D;
extern const char *aSysL306D;
extern const char *aSysL307D;
extern const char *asc_13CF4;
extern const char *aThrL301D;
extern const char *aThrL302D;
extern const char *aThrL303D;
extern const char *aThrL304D;
extern const char *aThrL305D;
extern const char *aThrL306D;

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


/* Function: main @ 0x10F90 */
int main(int argc, const char **argv, const char **envp)
{
 int v3; // r0
 int v4; // r0

 v3 = test_standard_library_functions(argc, argv, envp);
 v4 = test_system_calls(v3);
 test_thread_concurrency(v4);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: signal_handler @ 0x110A0 */
void signal_handler(int a1)
{
 signal_received = 1;
 signal_number = a1;
}


/* Function: thread_sum @ 0x110B8 */
void * thread_sum(int *a1)
{
 int v1; // r2
 int v2; // r3
 int v3; // r1
 int v4; // r1

 v1 = 0;
 v2 = *a1;
 v3 = a1[1];
 a1[2] = 0;
 if ( v2 <= v3 )
 {
 v4 = v3 + 1;
 do
 v1 += v2++;
 while ( v2 != v4 );
 a1[2] = v1;
 }
 return 0;
}


/* Function: thread_compute @ 0x110F0 */
unsigned int * thread_compute(int *a1)
{
 int v1; // r4
 unsigned int *result; // r0

 v1 = *a1;
 result = malloc(4u);
 *result = v1 * v1;
 return result;
}


/* Function: thread_increment @ 0x11118 */
void * thread_increment(int *a1)
{
 int v1; // r7
 int v2; // r4

 v1 = *a1;
 if ( *a1 > 0 )
 {
 v2 = 0;
 do
 {
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 ++v2;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 }
 while ( v1 != v2 );
 }
 return 0;
}


/* Function: consumer_thread @ 0x11170 */
unsigned int * consumer_thread(void *a1)
{
 int v1; // r4
 unsigned int *result; // r0

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: producer_thread @ 0x111D0 */
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


/* Function: thread_atomic_increment @ 0x11218 */
void * thread_atomic_increment(int *a1, int a2, int a3)
{
 int v3; // r7
 int v4; // r3
 int v5; // r4

 v3 = *a1;
 v4 = 0;
 if ( *a1 > 0 )
 {
 v5 = 0;
 do
 {
 __sync_fetch_and_add_4(&atomic_counter, 1);
 __sync_val_compare_and_swap_4(&atomic_counter, v5, v5 + 1000);
 ++v5;
 }
 while ( v3 != v5 );
 }
 (void)a2;
 (void)a3;
 return 0;
}


/* Function: thread_atomic_load_store @ 0x112A8 */
void * thread_atomic_load_store(void *a1)
{
 int v1; // r0
 int v2; // r4
 int v3; // r0
 int v4; // r0

 v1 = _sync_synchronize(a1);
 v2 = atomic_counter;
 v3 = _sync_synchronize(v1);
 v4 = _sync_synchronize(v3);
 atomic_counter = v2 + 100;
 _sync_synchronize(v4);
 return 0;
}


/* Function: thread_tls_test @ 0x112D8 */
unsigned int * thread_tls_test(const char *a1)
{
 int v1; // r5
 unsigned int *result; // r0

 v1 = unk_2419C;
 unk_2419C += 50;
 strncpy(byte_241A0, a1, 0x1Fu);
 result = malloc(8u);
 *result = v1;
 result[1] = v1 + 50;
 return result;
}


/* Function: param_strcpy @ 0x11324 */
int param_strcpy(int a1)
{
 char dest[256];
 return stpcpy(dest, "test") - a1;
}


/* Function: call_strcpy @ 0x11338 */
int call_strcpy()
{
 return 8;
}


/* Function: param_strcmp @ 0x11340 */
int param_strcmp(const char *a1, const char *a2)
{
 int v2; // r0

 v2 = strcmp(a1, a2);
 if ( v2 > 0 )
 return 1;
 if ( v2 )
 return -1;
 return 0;
}


/* Function: call_strcmp @ 0x11364 */
int call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x1136C */
// attributes: thunk
size_t param_strlen(const char *s)
{
 return strlen(s);
}


/* Function: call_strlen @ 0x11370 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x11378 */
size_t param_memcpy(void *a1, const void *a2, size_t a3)
{
 memcpy(a1, a2, a3);
 return a3;
}


/* Function: call_memcpy @ 0x1138C */
int call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x11394 */
int param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v3; // r0

 v3 = memcmp(a1, a2, a3);
 if ( v3 > 0 )
 return 1;
 if ( v3 )
 return -1;
 return 0;
}


/* Function: call_memcmp @ 0x113B8 */
int call_memcmp()
{
 int v0; // r0
 int v1; // r6
 int v2; // r0
 int v3; // r0
 unsigned int v5[3]; // [sp+0h] [bp-38h] BYREF
 unsigned int s2[3]; // [sp+Ch] [bp-2Ch] BYREF
 unsigned int v7[3]; // [sp+18h] [bp-20h] BYREF

 v5[0] = 1;
 v5[1] = 2;
 v5[2] = 3;
 s2[0] = 1;
 s2[1] = 2;
 s2[2] = 4;
 v7[0] = 1;
 v7[1] = 2;
 v7[2] = 3;
 v0 = memcmp(v5, s2, 0xCu);
 if ( v0 <= 0 )
 {
 if ( v0 )
 v1 = -1;
 else
 v1 = 0;
 }
 else
 {
 v1 = 1;
 }
 v2 = memcmp(v5, v7, 0xCu);
 if ( v2 <= 0 )
 {
 if ( v2 )
 v3 = -1;
 else
 v3 = 0;
 }
 else
 {
 v3 = 1;
 }
 return v3 + v1;
}


/* Function: param_printf @ 0x11474 */
int param_printf(int a1, const char *a2)
{
 return _printf_chk(1, "Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x1148C */
int call_printf()
{
 return _printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x114A8 */
int param_scanf(int a1)
{
 int v2; // [sp+4h] [bp-14h] BYREF
 int v3; // [sp+8h] [bp-10h] BYREF

 if ( _isoc99_sscanf(a1, "%d,%d", &v2, &v3) == 2 )
 return v2 + v3;
 else
 return -1;
}


/* Function: call_scanf @ 0x1150C */
int call_scanf()
{
 int v1; // [sp+4h] [bp-14h] BYREF
 int v2; // [sp+8h] [bp-10h] BYREF

 if ( _isoc99_sscanf("123,456", "%d,%d", &v1, &v2) == 2 )
 return v1 + v2;
 else
 return -1;
}


/* Function: param_fopen_fclose @ 0x11578 */
int param_fopen_fclose(const char *a1)
{
 FILE *v1; // r0
 FILE *v2; // r4
 int v3; // r3
 FILE *v4; // r0
 int v5; // r4

 v1 = fopen(a1, "r");
 v2 = v1;
 if ( !v1 )
 return -1;
 v3 = fileno(v1);
 v4 = v2;
 v5 = v3;
 fclose(v4);
 return v5;
}


/* Function: call_fopen_fclose @ 0x115B4 */
int call_fopen_fclose()
{
 FILE *v0; // r0
 FILE *v1; // r4
 int v2; // r3
 FILE *v3; // r0
 int v4; // r4

 v0 = fopen("/etc/passwd", "r");
 v1 = v0;
 if ( v0 && (v2 = fileno(v0), v3 = v1, v4 = v2, fclose(v3), v4 >= 0) )
 return 42;
 else
 return -1;
}


/* Function: param_fread_fwrite @ 0x11600 */
int param_fread_fwrite(const char *a1)
{
 FILE *v2; // r0
 FILE *v3; // r4
 size_t v4; // r3
 FILE *v5; // r0
 size_t v6; // r4
 unsigned char v8[4]; // [sp+0h] [bp-38h] BYREF
 char ptr[32]; // [sp+4h] [bp-34h] BYREF

 v2 = fopen(a1, "w+");
 v3 = v2;
 if ( !v2 )
 return -1;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
 {
 rewind(v3);
 v4 = fread(ptr, 1u, 0x12u, v3);
 v5 = v3;
 v6 = v4;
 v8[v4 + 4] = 0;
 fclose(v5);
 unlink(a1);
 if ( v6 == 18 )
 {
 if ( !strcmp(ptr, "BinBench Test Data") )
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


/* Function: call_fread_fwrite @ 0x116FC */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x11708 */
int param_malloc_free(int a1)
{
 int v1; // r4
 unsigned int *v3; // r0
 int v4; // r2
 unsigned int *v5; // r3
 int v6; // r4

 v1 = a1;
 v3 = malloc(4 * a1);
 if ( !v3 )
 return -1;
 if ( a1 )
 {
 v4 = 0;
 v5 = v3 - 1;
 do
 {
 v5[1] = v4;
 ++v5;
 v4 += 10;
 }
 while ( v5 != &v3[v1 - 1] );
 }
 v6 = v3[v1 - 1] + *v3;
 free(v3);
 return v6;
}


/* Function: call_malloc_free @ 0x11770 */
int call_malloc_free()
{
 unsigned int *v0; // r0
 int v1; // r3
 unsigned int *v2; // r2
 int v3; // r4

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = 0;
 v2 = v0 - 1;
 do
 {
 v2[1] = v1;
 ++v2;
 v1 += 10;
 }
 while ( v1 != 100 );
 v3 = *v0 + v0[9];
 free(v0);
 return v3;
}


/* Function: param_memset @ 0x117BC */
int param_memset(char *a1, size_t n)
{
 int result; // r0
 char *v5; // r3
 int v6; // t1

 memset(a1, 0, n);
 if ( !n )
 return 0;
 result = 0;
 v5 = a1 - 1;
 do
 {
 v6 = (unsigned char)*++v5;
 result += v6;
 }
 while ( v5 != &a1[n - 1] );
 return result;
}


/* Function: call_memset @ 0x11808 */
int call_memset()
{
 return 0;
}


/* Function: param_strchr_strstr @ 0x11810 */
int param_strchr_strstr(const char *a1, int a2, const char *a3)
{
 char *v5; // r4
 int v6; // r4
 char *v7; // r0
 int v8; // r0

 v5 = strchr(a1, a2);
 if ( v5 )
 v6 = v5 - a1;
 else
 v6 = -1;
 v7 = strstr(a1, a3);
 if ( v7 )
 v8 = v7 - a1;
 else
 v8 = -1;
 return v6 + v8;
}


/* Function: call_strchr_strstr @ 0x1184C */
int call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x11854 */
int test_standard_library_functions()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r3
 int v5; // r2
 FILE *v6; // r0
 FILE *v7; // r4
 int v8; // r3
 FILE *v9; // r0
 int v10; // r4
 int v11; // r2
 int v12; // r0
 unsigned int *v13; // r0
 int v14; // r3
 unsigned int *v15; // r2
 int v16; // r4
 int v17; // r0
 int v19; // [sp+4h] [bp-14h] BYREF
 int v20; // [sp+8h] [bp-10h] BYREF

 puts(s);
 _printf_chk(1, aLibL101D, 8);
 v0 = call_strcmp();
 _printf_chk(1, aLibL102D, v0);
 _printf_chk(1, aLibL103D, 12);
 _printf_chk(1, aLibL104D, 90);
 v1 = call_memcmp();
 _printf_chk(1, aLibL105D, v1);
 v2 = _printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
 _printf_chk(1, aLibL106D, v2);
 v3 = _isoc99_sscanf("123,456", "%d,%d", &v19, &v20);
 if ( v3 == 2 )
 {
 v5 = v19;
 v4 = v20;
 }
 else
 {
 v5 = -1;
 }
 if ( v3 == 2 )
 v5 += v4;
 _printf_chk(1, aLibL107D, v5, v4);
 v6 = fopen("/etc/passwd", "r");
 v7 = v6;
 if ( v6 && (v8 = fileno(v6), v9 = v7, v10 = v8, fclose(v9), v10 >= 0) )
 v11 = 42;
 else
 v11 = -1;
 _printf_chk(1, aLibL108D, v11);
 v12 = param_fread_fwrite("/tmp/binbench_test.tmp");
 _printf_chk(1, aLibL109D, v12);
 v13 = malloc(0x28u);
 if ( v13 )
 {
 v14 = 0;
 v15 = v13 - 1;
 do
 {
 v15[1] = v14;
 ++v15;
 v14 += 10;
 }
 while ( v14 != 100 );
 v16 = *v13 + v13[9];
 free(v13);
 }
 else
 {
 v16 = -1;
 }
 _printf_chk(1, aLibL110D, v16);
 v17 = call_memset();
 _printf_chk(1, aLibL111D, v17);
 return _printf_chk(1, aLibL112D, 15, 0);
}


/* Function: param_linux_syscall @ 0x11A6C */
int param_linux_syscall(int a1)
{
 int v1; // r0
 int v2; // r4

 v1 = syscall(5, a1, 0);
 v2 = v1;
 if ( v1 < 0 )
 return -*_errno_location();
 syscall(6, v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x11AB0 */
int call_linux_syscall()
{
 int v0; // r1

 v0 = syscall(5, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 if ( *_errno_location() > 0 )
 return -1;
 else
 return 42;
 }
 else
 {
 syscall(6, v0);
 return 42;
 }
}


/* Function: param_win32_api @ 0x11AF8 */
int param_win32_api(const char *a1)
{
 struct stat v2; // [sp+0h] [bp-68h] BYREF

 if ( stat(a1, &v2) < 0 )
 return -1;
 if ( v2.st_size <= 0 )
 return -2;
 return 42;
}


/* Function: call_win32_api @ 0x11B60 */
int call_win32_api()
{
 struct stat v1; // [sp+0h] [bp-68h] BYREF

 if ( stat("/etc/passwd", &v1) < 0 )
 return -1;
 if ( v1.st_size <= 0 )
 return -2;
 return 42;
}


/* Function: param_fork_exec @ 0x11BD0 */
int param_fork_exec(const char *a1, int a2)
{
 int v4; // r0
 int v6; // [sp+0h] [bp-18h] BYREF

 v4 = fork();
 if ( v4 < 0 )
 return -1;
 if ( !v4 )
 {
 execl(a1, a1, a2, 0);
 exit(127);
 }
 if ( waitpid(v4, &v6, 0) < 0 )
 return -2;
 if ( (v6 & 0x7F) != 0 )
 return -3;
 return BYTE1(v6);
}


/* Function: call_fork_exec @ 0x11C74 */
int call_fork_exec()
{
 if ( param_fork_exec("/bin/true", 0) )
 return -1;
 else
 return 42;
}


/* Function: param_pipe_communication @ 0x11C98 */
int param_pipe_communication()
{
 __pid_t v0; // r0
 int v1; // r4
 ssize_t v2; // r4
 unsigned char v4[4]; // [sp+0h] [bp-40h] BYREF
 int pipedes[2]; // [sp+4h] [bp-3Ch] BYREF
 unsigned char buf[32]; // [sp+Ch] [bp-34h] BYREF

 if ( pipe(pipedes) < 0 )
 return -1;
 v0 = fork();
 v1 = v0;
 if ( v0 < 0 )
 return -2;
 if ( !v0 )
 {
 close(pipedes[0]);
 write(pipedes[1], "HelloPipe", 9u);
 close(pipedes[1]);
 exit(v1);
 }
 close(pipedes[1]);
 v2 = read(pipedes[0], buf, 0x1Fu);
 v4[v2 + 12] = 0;
 close(pipedes[0]);
 wait(0);
 if ( v2 <= 0 )
 return -3;
 else
 return 42;
}


/* Function: call_pipe_communication @ 0x11D7C */
// attributes: thunk
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x11D80 */
int param_socket_create()
{
 int v0; // r0
 int v1; // r4
 int optval; // [sp+8h] [bp-20h] BYREF
 struct sockaddr addr; // [sp+Ch] [bp-1Ch] BYREF

 v0 = socket(2, 1, 0);
 v1 = v0;
 if ( v0 < 0 )
 return -1;
 optval = 1;
 if ( setsockopt(v0, 1, 2, &optval, 4u) < 0 )
 {
 close(v1);
 return -2;
 }
 else
 {
 memset(addr.sa_data, 0, sizeof(addr.sa_data));
 addr.sa_family = 2;
 if ( bind(v1, &addr, 0x10u) < 0 )
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


/* Function: call_socket_create @ 0x11E84 */
// attributes: thunk
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x11E88 */
int param_shmget_shmat()
{
 int v0; // r0
 int v1; // r4
 char *v2; // r0
 key_t key;

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return -1;
 close(v0);
 key = ftok("/tmp/binbench_shm", 42);
 if ( key < 0 )
 return -1;
 v1 = shmget(key, 4096, IPC_CREAT | 0666);
 if ( v1 < 0 )
 return -2;
 v2 = (char *)shmat(v1, NULL, 0);
 if ( v2 == (char *)-1 )
 return -3;
 strcpy(v2, "SharedMemory");
 shmdt(v2);
 shmctl(v1, IPC_RMID, NULL);
 return 12;
}


/* Function: call_shmget_shmat @ 0x11F3C */
int call_shmget_shmat()
{
 if ( param_shmget_shmat() <= 0 )
 return -1;
 else
 return 42;
}


/* Function: param_signal_handling @ 0x11F54 */
int param_signal_handling()
{
 int result; // r0
 int v1; // r4
 int v2; // r4

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
 if ( !signal_received )
 {
 v1 = 1000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 break;
 --v1;
 }
 while ( v1 );
 }
 if ( signal_received )
 {
 if ( signal_number == 10 )
 {
 signal_received = 0;
 alarm(1u);
 if ( !signal_received )
 {
 v2 = 2000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 break;
 --v2;
 }
 while ( v2 );
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


/* Function: call_signal_handling @ 0x1207C */
// attributes: thunk
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x12080 */
int test_system_calls()
{
 int v0; // r1
 int v1; // r2
 int v2; // r2
 int v3; // r2
 int v4; // r0
 int v5; // r0
 int v6; // r2
 int v7; // r2
 struct stat v9; // [sp+0h] [bp-68h] BYREF

 puts(asc_13C08);
 v0 = syscall(5, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 if ( *_errno_location() > 0 )
 v1 = -1;
 else
 v1 = 42;
 }
 else
 {
 syscall(6, v0);
 v1 = 42;
 }
 _printf_chk(1, aSysL301D, v1);
 if ( stat("/etc/passwd", &v9) < 0 )
 {
 v2 = -1;
 }
 else if ( v9.st_size <= 0 )
 {
 v2 = -2;
 }
 else
 {
 v2 = 42;
 }
 _printf_chk(1, aSysL302D, v2);
 if ( param_fork_exec("/bin/true", 0) )
 v3 = -1;
 else
 v3 = 42;
 _printf_chk(1, aSysL303D, v3);
 v4 = param_pipe_communication();
 _printf_chk(1, aSysL304D, v4);
 v5 = param_socket_create();
 _printf_chk(1, aSysL305D, v5);
 if ( param_shmget_shmat() <= 0 )
 v6 = -1;
 else
 v6 = 42;
 _printf_chk(1, aSysL306D, v6);
 v7 = param_signal_handling();
 return _printf_chk(1, aSysL307D, v7, 0);
}


/* Function: param_pthread_create @ 0x121F4 */
int param_pthread_create(int a1)
{
 int v1; // r4
 pthread_t th; // [sp+0h] [bp-18h] BYREF
 int arg; // [sp+4h] [bp-14h] BYREF
 void *thread_return; // [sp+8h] [bp-10h] BYREF

 arg = a1;
 if ( pthread_create(&th, 0, (void *(*)(void *))thread_compute, &arg) )
 return -1;
 pthread_join(th, &thread_return);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 return v1;
}


/* Function: call_pthread_create @ 0x12280 */
int call_pthread_create()
{
 int v0; // r4
 pthread_t th; // [sp+0h] [bp-18h] BYREF
 int arg; // [sp+4h] [bp-14h] BYREF
 void *thread_return; // [sp+8h] [bp-10h] BYREF

 arg = 7;
 if ( pthread_create(&th, 0, (void *(*)(void *))thread_compute, &arg) )
 return -1;
 pthread_join(th, &thread_return);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 return v0;
}


/* Function: param_pthread_join @ 0x1230C */
int param_pthread_join()
{
 pthread_t *v0; // r6
 pthread_t *v1; // r7
 unsigned int *v2; // r8
 int *v3; // r5
 int v4; // r4
 pthread_t v5; // t1
 pthread_t newthread[3]; // [sp+4h] [bp-54h] BYREF
 unsigned int arg[9]; // [sp+10h] [bp-48h] BYREF
 int v9; // [sp+34h] [bp-24h] BYREF

 v0 = newthread;
 v1 = newthread;
 v2 = arg;
 v3 = arg;
 arg[0] = 1;
 arg[1] = 10;
 arg[2] = 0;
 arg[3] = 11;
 arg[4] = 20;
 arg[5] = 0;
 arg[6] = 21;
 arg[7] = 30;
 arg[8] = 0;
 do
 {
 v4 = pthread_create(v1, 0, (void *(*)(void *))thread_sum, v3);
 if ( v4 )
 return -1;
 v3 += 3;
 ++v1;
 }
 while ( v3 != &v9 );
 while ( 1 )
 {
 v5 = *v0++;
 if ( pthread_join(v5, 0) )
 break;
 v4 += v2[2];
 v2 += 3;
 if ( v0 == arg )
 return v4;
 }
 return -2;
}


/* Function: call_pthread_join @ 0x123F8 */
// attributes: thunk
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x123FC */
int param_mutex_lock(int a1, int a2)
{
 pthread_t *v3; // r0
 pthread_t *v4; // r8
 int v5; // r6
 pthread_t *v6; // r5
 int v7; // r4
 char *v9; // r5
 pthread_t v10; // t1
 int arg; // [sp+4h] [bp-24h] BYREF

 arg = a2;
 v3 = (pthread_t *)malloc(4 * a1);
 v4 = v3;
 if ( !v3 )
 return -1;
 v5 = 0;
 shared_counter = 0;
 if ( a1 > 0 )
 {
 v6 = v3;
 while ( 1 )
 {
 v7 = pthread_create(v6++, 0, (void *(*)(void *))thread_increment, &arg);
 if ( v7 )
 {
 free(v4);
 return -2;
 }
 if ( a1 == v5 + 1 )
 break;
 ++v5;
 }
 v9 = (char *)(v4 - 1);
 do
 {
 v10 = *((unsigned int *)v9 + 1);
 v9 += 4;
 pthread_join(v10, 0);
 }
 while ( v5 != v7++ );
 }
 free(v4);
 if ( shared_counter == arg * a1 )
 return 42;
 else
 return -3;
}


/* Function: call_mutex_lock @ 0x124D4 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x124E0 */
int param_condition_variable()
{
 int v1; // r4
 pthread_t th; // [sp+0h] [bp-18h] BYREF
 pthread_t newthread; // [sp+4h] [bp-14h] BYREF
 void *thread_return; // [sp+8h] [bp-10h] BYREF

 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 return -1;
 if ( pthread_create(&th, 0, producer_thread, 0) )
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
 }
 return v1;
}


/* Function: call_condition_variable @ 0x125A8 */
// attributes: thunk
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x125AC */
int param_atomic_ops(int a1, int a2)
{
 pthread_t *v3; // r0
 pthread_t *v4; // r8
 int v5; // r5
 int v6; // r0
 pthread_t *v7; // r6
 int v8; // r4
 pthread_t *v10; // r5
 pthread_t v11; // t1
 int v12; // r0
 int v13; // r0
 int v14; // r4
 int arg; // [sp+4h] [bp-2Ch] BYREF
 pthread_t newthread; // [sp+8h] [bp-28h] BYREF

 arg = a2;
 v3 = (pthread_t *)malloc(4 * a1);
 v4 = v3;
 if ( !v3 )
 return -1;
 v5 = 0;
 v6 = _sync_synchronize(v3);
 atomic_counter = 0;
 _sync_synchronize(v6);
 if ( a1 <= 0 )
 {
 v12 = pthread_create(&newthread, 0, thread_atomic_load_store, 0);
 if ( !v12 )
 v12 = pthread_join(newthread, 0);
 }
 else
 {
 v7 = v4;
 do
 {
 v8 = pthread_create(v7, 0, (void *(*)(void *))thread_atomic_increment, &arg);
 if ( v8 )
 {
 free(v4);
 return -2;
 }
 ++v5;
 ++v7;
 }
 while ( a1 != v5 );
 if ( !pthread_create(&newthread, 0, thread_atomic_load_store, 0) )
 pthread_join(newthread, 0);
 v10 = v4 - 1;
 do
 {
 v11 = v10[1];
 ++v10;
 ++v8;
 v12 = pthread_join(v11, 0);
 }
 while ( a1 > v8 );
 }
 v13 = _sync_synchronize(v12);
 v14 = atomic_counter;
 _sync_synchronize(v13);
 free(v4);
 if ( v14 <= 0 )
 return -3;
 else
 return 42;
}


/* Function: call_atomic_ops @ 0x1270C */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x12718 */
int param_thread_local_storage(int a1)
{
 size_t v2; // r4
 pthread_t *v3; // r10
 char *v4; // r0
 bool v5; // zf
 int v6; // r4
 char *v7; // r7
 char *v8; // r6
 void *v9; // r0
 int v10; // r5
 char *v11; // r11
 int v12; // r4
 pthread_t *v13; // r6
 void *v14; // t1
 char *v15; // r4
 void *v16; // t1
 int v18; // r9
 int v19; // r6
 pthread_t *v20; // r11
 pthread_t v21; // t1
 void *v22; // t1
 char *ptr; // [sp+10h] [bp-38h]
 int v25; // [sp+14h] [bp-34h]
 void *thread_return; // [sp+18h] [bp-30h] BYREF

 v2 = 4 * a1;
 v25 = 4 * a1;
 v3 = (pthread_t *)malloc(4 * a1);
 v4 = (char *)malloc(v2);
 v5 = v4 == 0;
 if ( v4 )
 v5 = v3 == 0;
 ptr = v4;
 v6 = v5;
 if ( v5 )
 return -1;
 if ( a1 <= 0 )
 {
 v18 = v6;
 }
 else
 {
 v7 = v4 - 4;
 v8 = v4 - 4;
 do
 {
 v9 = malloc(0x10u);
 *((unsigned int *)v8 + 1) = v9;
 v8 += 4;
 v10 = v6++;
 _snprintf_chk(v9, 16);
 }
 while ( a1 != v6 );
 v11 = v7;
 v12 = 0;
 v13 = v3;
 do
 {
 v14 = (void *)*((unsigned int *)v11 + 1);
 v11 += 4;
 if ( pthread_create(v13, 0, (void *(*)(void *))thread_tls_test, v14) )
 {
 v15 = &ptr[4 * v12];
 do
 {
 v16 = (void *)*((unsigned int *)v7 + 1);
 v7 += 4;
 free(v16);
 }
 while ( v15 != v7 );
 free(ptr);
 free(v3);
 return -2;
 }
 v5 = v10 == v12;
 ++v13;
 ++v12;
 }
 while ( !v5 );
 v18 = 0;
 v19 = 0;
 v6 = 0;
 v20 = v3 - 1;
 do
 {
 v21 = v20[1];
 ++v20;
 pthread_join(v21, &thread_return);
 v18 += *(unsigned int *)thread_return;
 v6 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 v22 = (void *)*((unsigned int *)v7 + 1);
 v7 += 4;
 free(v22);
 v5 = v10 == v19++;
 }
 while ( !v5 );
 }
 free(ptr);
 free(v3);
 if ( v6 == 30 * (v25 + a1) && v18 == 20 * (v25 + a1) )
 return 42;
 else
 return -3;
}


/* Function: call_thread_local_storage @ 0x128F8 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x12900 */
int test_thread_concurrency()
{
 int v0; // r4
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r2
 pthread_t th; // [sp+0h] [bp-18h] BYREF
 int arg; // [sp+4h] [bp-14h] BYREF
 void *thread_return; // [sp+8h] [bp-10h] BYREF

 puts(asc_13CF4);
 arg = 7;
 if ( pthread_create(&th, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 v0 = -1;
 }
 else
 {
 pthread_join(th, &thread_return);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 _printf_chk(1, aThrL301D, v0);
 v1 = param_pthread_join();
 _printf_chk(1, aThrL302D, v1);
 v2 = param_mutex_lock(4, 1000);
 _printf_chk(1, aThrL303D, v2);
 v3 = param_condition_variable();
 _printf_chk(1, aThrL304D, v3);
 v4 = param_atomic_ops(4, 500);
 _printf_chk(1, aThrL305D, v4);
 v5 = param_thread_local_storage(4);
 return _printf_chk(1, aThrL306D, v5, 0);
}


/* Function: __sync_fetch_and_add_4 @ 0x12A34 */
int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( __sync_val_compare_and_swap(a1, *a1, *a1 + a2) != *a1 );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x12A6C */
int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( __sync_val_compare_and_swap(a1, *a1, *a1 - a2) != *a1 );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x12AA4 */
int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( __sync_val_compare_and_swap(a1, *a1, *a1 | a2) != *a1 );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x12ADC */
int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( __sync_val_compare_and_swap(a1, *a1, *a1 & a2) != *a1 );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x12B14 */
int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( __sync_val_compare_and_swap(a1, *a1, *a1 ^ a2) != *a1 );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x12B4C */
int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( __sync_val_compare_and_swap(a1, *a1, ~(*a1 & a2)) != *a1 );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x12B88 */
int _sync_fetch_and_add_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4) != *v4 );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x12BE8 */
int _sync_fetch_and_sub_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
 return (short)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x12C48 */
int _sync_fetch_and_or_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4) != *v4 );
 return (short)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x12CA8 */
int _sync_fetch_and_and_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4) != *v4 );
 return (short)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x12D08 */
int _sync_fetch_and_xor_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4) != *v4 );
 return (short)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x12D68 */
int _sync_fetch_and_nand_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4) != *v4 );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x12DCC */
int _sync_fetch_and_add_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4) != *v4 );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x12E28 */
int _sync_fetch_and_sub_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x12E84 */
int _sync_fetch_and_or_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4) != *v4 );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x12EE0 */
int _sync_fetch_and_and_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4) != *v4 );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x12F3C */
int _sync_fetch_and_xor_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4) != *v4 );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x12F98 */
int _sync_fetch_and_nand_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4) != *v4 );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x12FF8 */
int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( __sync_val_compare_and_swap(a1, v4 - a2, v4) != v4 - a2 );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x13030 */
int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( __sync_val_compare_and_swap(a1, v4 + a2, v4) != v4 + a2 );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x13068 */
int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( __sync_val_compare_and_swap(a1, *a1, v4) != *a1 );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x130A0 */
int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( __sync_val_compare_and_swap(a1, *a1, v4) != *a1 );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x130D8 */
int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( __sync_val_compare_and_swap(a1, *a1, v4) != *a1 );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x13110 */
int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( __sync_val_compare_and_swap(a1, *a1, v4) != *a1 );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x1314C */
int _sync_add_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( __sync_val_compare_and_swap(v4, *v4, v6) != *v4 );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x131B4 */
int _sync_sub_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) & v5 ^ *v4;
 while ( __sync_val_compare_and_swap(v4, *v4, v6) != *v4 );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x1321C */
int _sync_or_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( __sync_val_compare_and_swap(v4, *v4, v6) != *v4 );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x13284 */
int _sync_and_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( __sync_val_compare_and_swap(v4, *v4, v6) != *v4 );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x132EC */
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


/* Function: __sync_nand_and_fetch_2 @ 0x13354 */
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


/* Function: __sync_add_and_fetch_1 @ 0x133C0 */
int _sync_add_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( __sync_val_compare_and_swap(v4, *v4, v6) != *v4 );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x13424 */
int _sync_sub_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) & v5 ^ *v4;
 while ( __sync_val_compare_and_swap(v4, *v4, v6) != *v4 );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x13488 */
int _sync_or_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( __sync_val_compare_and_swap(v4, *v4, v6) != *v4 );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x134EC */
int _sync_and_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( __sync_val_compare_and_swap(v4, *v4, v6) != *v4 );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x13550 */
int _sync_xor_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( __sync_val_compare_and_swap(v4, *v4, v6) != *v4 );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x135B4 */
int _sync_nand_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ (~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( __sync_val_compare_and_swap(v4, *v4, v6) != *v4 );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x1361C */
int _sync_val_compare_and_swap_4(unsigned int *a1, unsigned int a2, unsigned int a3)
{
 unsigned int old;
 do {
 old = *a1;
 if (old != a2) return old;
 } while (!__sync_bool_compare_and_swap_4(a1, old, a3));
 return a2;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x1366C */
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
 if ( !__sync_bool_compare_and_swap_2(*v6, (v7 ^ *v6) & v5 ^ *v6, v6) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x136E4 */
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
 if ( !MEMORY[0xFFFF0FC0](*v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x13758 */
bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x13784 */
bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x137A0 */
bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x137C8 */
int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( __sync_val_compare_and_swap(a1, *a1, a2) != *a1 );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x13800 */
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


/* Function: __sync_lock_test_and_set_1 @ 0x13860 */
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


/* Function: __sync_lock_release_8 @ 0x138BC */
int _sync_lock_release_8(unsigned int *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0]();
 *a1 = 0;
 a1[1] = 0;
 return result;
}


/* Function: __sync_lock_release_4 @ 0x138E0 */
int _sync_lock_release_4(unsigned int *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0]();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_2 @ 0x13900 */
int _sync_lock_release_2(unsigned short *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0]();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_1 @ 0x13920 */
int _sync_lock_release_1(unsigned char *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0]();
 *a1 = 0;
 return result;
}



/* Global variables */
int signal_received = 0;
int signal_number = 0;
int ready = 0;
int data = 0;
int atomic_counter = 0;
int shared_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int unk_2419C = 0;
char byte_241A0[32] = {0};

/* String constants */
const char *s = "Standard Library Tests:";
const char *aLibL101D = "strcmp result: %d\n";
const char *aLibL102D = "strcmp result: %d\n";
const char *aLibL103D = "strlen result: %d\n";
const char *aLibL104D = "memcpy result: %d\n";
const char *aLibL105D = "memcmp result: %d\n";
const char *aLibL106D = "printf result: %d\n";
const char *aLibL107D = "sscanf result: %d, %d\n";
const char *aLibL108D = "fopen result: %d\n";
const char *aLibL109D = "fread_fwrite result: %d\n";
const char *aLibL110D = "malloc_free result: %d\n";
const char *aLibL111D = "memset result: %d\n";
const char *aLibL112D = "strchr_strstr result: %d, %d\n";
const char *asc_13C08 = "System Call Tests:";
const char *aSysL301D = "syscall result: %d\n";
const char *aSysL302D = "stat result: %d\n";
const char *aSysL303D = "fork_exec result: %d\n";
const char *aSysL304D = "pipe result: %d\n";
const char *aSysL305D = "socket result: %d\n";
const char *aSysL306D = "shm result: %d\n";
const char *aSysL307D = "signal result: %d, %d\n";
const char *asc_13CF4 = "Thread Concurrency Tests:";
const char *aThrL301D = "pthread_create result: %d\n";
const char *aThrL302D = "pthread_join result: %d\n";
const char *aThrL303D = "mutex_lock result: %d\n";
const char *aThrL304D = "cond_var result: %d\n";
const char *aThrL305D = "atomic_ops result: %d\n";
const char *aThrL306D = "tls result: %d, %d\n";

/* Forward declarations for global variables used before definition */
extern int signal_received;
extern int signal_number;
extern int ready;
extern int data;
extern int atomic_counter;

/* CRT stub function __aeabi_read_tp removed by preprocessor */



/* Function: .term_proc @ 0x13948 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_malloc @ 0x241B8 */

/* FAILED to decompile: __imp_open @ 0x241BC */

/* FAILED to decompile: __imp_pthread_create @ 0x241C0 */

/* FAILED to decompile: __imp_shmget @ 0x241C4 */

/* FAILED to decompile: __imp_execl @ 0x241C8 */

/* FAILED to decompile: __imp_stpcpy @ 0x241CC */

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

/* FAILED to decompile: __imp_stat @ 0x24220 */

/* FAILED to decompile: __imp_strlen @ 0x24224 */

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

/* FAILED to decompile: __imp_fork @ 0x2425C */

/* FAILED to decompile: __imp_pthread_cond_wait @ 0x24260 */

/* FAILED to decompile: __imp_write @ 0x24264 */

/* FAILED to decompile: __imp_fileno @ 0x24268 */

/* FAILED to decompile: __imp_fclose @ 0x2426C */

/* FAILED to decompile: __imp_strcmp @ 0x24270 */

/* FAILED to decompile: __imp_pthread_mutex_lock @ 0x24274 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x24278 */

/* FAILED to decompile: __imp_listen @ 0x2427C */

/* FAILED to decompile: __imp___printf_chk @ 0x24280 */

/* FAILED to decompile: __imp_alarm @ 0x24284 */

/* FAILED to decompile: __imp_pipe @ 0x24288 */

/* FAILED to decompile: __imp_pthread_mutex_unlock @ 0x2428C */

/* FAILED to decompile: __imp___snprintf_chk @ 0x24290 */

/* FAILED to decompile: __imp_strstr @ 0x24294 */

/* FAILED to decompile: __imp_puts @ 0x24298 */

/* FAILED to decompile: __imp_fwrite @ 0x2429C */

/* FAILED to decompile: __imp_pthread_join @ 0x242A0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x242A4 */

/* Total functions decompiled: 122, failed: 60 */
