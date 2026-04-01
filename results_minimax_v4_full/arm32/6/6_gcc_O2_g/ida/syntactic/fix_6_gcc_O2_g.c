#include <stdint.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <stdbool.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include <sys/ipc.h>
#include <sys/shm.h>

/* ThreadData structure definition */
typedef struct {
 int start;
 int end;
 int result;
} ThreadData;

/* BYTE1 macro - extracts second byte (Windows compatibility) */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Global variables */
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
pthread_mutex_t counter_mutex;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
int ready = 0;
int data = 0;
int atomic_counter = 0;
int unk_2419C = 0;
char byte_241A0[32] = {0};

/* Forward declarations */
void *thread_sum(void *arg);
void *thread_compute(void *arg);
void *thread_increment(void *arg);
void *consumer_thread(void *arg);
void *producer_thread(void *arg);
void *thread_atomic_increment(void *arg);
void *thread_atomic_load_store(void *arg);
void *thread_tls_test(void *arg);
void signal_handler(int sig);
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);
int param_fork_exec(const char *prog, const char *arg);
int param_pipe_communication(void);
int param_socket_create(void);
int param_shmget_shmat(void);
int param_signal_handling(void);
int param_pthread_create(int x);
int param_pthread_join(void);
int param_mutex_lock(int thread_count, int iterations_per_thread);
int param_condition_variable(void);
int param_atomic_ops(int thread_count, int iterations);
int param_thread_local_storage(int thread_count);

/* Initialize pthread primitives */
__attribute__((constructor))
void init_mutexes(void) {
    pthread_mutex_init(&counter_mutex, NULL);
    pthread_mutex_init(&cond_mutex, NULL);
    pthread_cond_init(&cond, NULL);
}

/* String constants */
const char s[] = "LibTest 101";
const char aLibL101D[] = "LibL101: strcmp = %d\n";
const char aLibL102D[] = "LibL102: strcmp = %d\n";
const char aLibL103D[] = "LibL103: strlen = 12\n";
const char aLibL104D[] = "LibL104: memcpy = 90\n";
const char aLibL105D[] = "LibL105: memcmp = %d\n";
const char aLibL106D[] = "LibL106: printf = %d\n";
const char aLibL107D[] = "LibL107: sscanf = %d, %d\n";
const char aLibL108D[] = "LibL108: fopen = %d\n";
const char aLibL109D[] = "LibL109: fread/fwrite = %d\n";
const char aLibL110D[] = "LibL110: malloc/free = %d\n";
const char aLibL111D[] = "LibL111: memset = %d\n";
const char aLibL112D[] = "LibL112: strchr/strstr = %d, %d\n";
const char aSysL301D[] = "SysL301: syscall open = %d\n";
const char aSysL302D[] = "SysL302: stat = %d\n";
const char aSysL303D[] = "SysL303: fork/exec = %d\n";
const char aSysL304D[] = "SysL304: pipe = %d\n";
const char aSysL305D[] = "SysL305: socket = %d\n";
const char aSysL306D[] = "SysL306: shm = %d\n";
const char aSysL307D[] = "SysL307: signal = %d\n";
const char aThrL301D[] = "ThrL301: pthread_create = %d\n";
const char aThrL302D[] = "ThrL302: pthread_join = %d\n";
const char aThrL303D[] = "ThrL303: mutex = %d\n";
const char aThrL304D[] = "ThrL304: cond_var = %d\n";
const char aThrL305D[] = "ThrL305: atomic = %d\n";
const char aThrL306D[] = "ThrL306: tls = %d\n";
const char asc_13C08[] = "System Call Tests\n";
const char asc_13CF4[] = "Thread Concurrency Tests\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/6/6_gcc_O2_g
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
 /* empty function */
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
 int v1; // r2
 int v2; // r3
 int v3; // r1
 int v4; // r1

 v1 = 0;
 v2 = *(unsigned int *)arg;
 v3 = *((unsigned int *)arg + 1);
 *((unsigned int *)arg + 2) = 0;
 if ( v2 <= v3 )
 {
 v4 = v3 + 1;
 do
 v1 += v2++;
 while ( v2 != v4 );
 *((unsigned int *)arg + 2) = v1;
 }
 return 0;
}


/* Function: thread_compute @ 0x110F0 */
void * thread_compute(void *arg)
{
 int v1; // r4
 void *result; // r0

 v1 = *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v1 * v1;
 return result;
}


/* Function: thread_increment @ 0x11118 */
void * thread_increment(void *arg)
{
 int v1; // r7
 int v2; // r4

 v1 = *(unsigned int *)arg;
 if ( *(int *)arg > 0 )
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


/* Function: producer_thread @ 0x111D0 */
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


/* Function: thread_atomic_increment @ 0x11218 */
void * thread_atomic_increment(void *arg)
{
 int v1; // r7
 int v2; // r4

 v1 = *(unsigned int *)arg;
 if ( *(int *)arg > 0 )
 {
 v2 = 0;
 do
 {
 _sync_fetch_and_add_4(&atomic_counter, 1);
 _sync_val_compare_and_swap_4(&atomic_counter, v2, v2 + 1000);
 ++v2;
 }
 while ( v1 != v2 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x112A8 */
void * thread_atomic_load_store(void *arg)
{
 int v1; // r0
 int v2; // r4
 int v3; // r0
 int v4; // r0

 v1 = _sync_synchronize(arg);
 v2 = atomic_counter;
 v3 = _sync_synchronize(v1);
 v4 = _sync_synchronize(v3);
 atomic_counter = v2 + 100;
 _sync_synchronize(v4);
 return 0;
}


/* Function: thread_tls_test @ 0x112D8 */
void * thread_tls_test(void *arg)
{
 int v1; // r5
 void *result; // r0

 v1 = unk_2419C;
 unk_2419C += 50;
 strncpy(byte_241A0, (const char *)arg, 0x1Fu);
 result = malloc(8u);
 *(unsigned int *)result = v1;
 *((unsigned int *)result + 1) = v1 + 50;
 return result;
}


/* Function: param_strcpy @ 0x11324 */
int param_strcpy(char *dst, const char *src)
{
 return stpcpy(dst, src) - (unsigned int)dst;
}


/* Function: call_strcpy @ 0x11338 */
int call_strcpy()
{
 return 8;
}


/* Function: param_strcmp @ 0x11340 */
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


/* Function: call_strcmp @ 0x11364 */
int call_strcmp()
{
 return 0;
}


/* Function: call_strlen @ 0x11370 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x11378 */
int param_memcpy(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
 return n;
}


/* Function: call_memcpy @ 0x1138C */
int call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x11394 */
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


/* Function: call_memcmp @ 0x113B8 */
int call_memcmp()
{
 int v0; // r0
 int v1; // r6
 int v2; // r0
 int v3; // r0
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
 v0 = memcmp(arr1, arr2, 0xCu);
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
 v2 = memcmp(arr1, arr3, 0xCu);
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
int param_printf(int x, const char *name)
{
 return printf(1, "Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x1148C */
int call_printf()
{
 return printf(1, "Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x114A8 */
int param_scanf(const char *input_str)
{
 int a; // [sp+4h] [bp-14h] BYREF
 int b; // [sp+8h] [bp-10h] BYREF

 if ( sscanf(input_str, "%d,%d", &a, &b) == 2 )
 return a + b;
 else
 return -1;
}


/* Function: call_scanf @ 0x1150C */
int call_scanf()
{
 int v1; // [sp+4h] [bp-14h] BYREF
 int v2; // [sp+8h] [bp-10h] BYREF

 if ( sscanf("123,456", "%d,%d", &v1, &v2) == 2 )
 return v1 + v2;
 else
 return -1;
}


/* Function: param_fopen_fclose @ 0x11578 */
int param_fopen_fclose(const char *filename)
{
 FILE *v1; // r0
 FILE *v2; // r4
 int v3; // r3
 FILE *v4; // r0
 int v5; // r4

 v1 = fopen(filename, "r");
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
int param_fread_fwrite(const char *tmpfile)
{
 FILE *v2; // r0
 FILE *v3; // r4
 size_t v4; // r3
 FILE *v5; // r0
 size_t v6; // r4
 unsigned char v8[4]; // [sp+0h] [bp-38h] BYREF
 char read_buffer[32]; // [sp+4h] [bp-34h] BYREF

 v2 = fopen(tmpfile, "w+");
 v3 = v2;
 if ( !v2 )
 return -1;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
 {
 rewind(v3);
 v4 = fread(read_buffer, 1u, 0x12u, v3);
 v5 = v3;
 v6 = v4;
 v8[v4 + 4] = 0;
 fclose(v5);
 unlink(tmpfile);
 if ( v6 == 18 )
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


/* Function: call_fread_fwrite @ 0x116FC */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x11708 */
int param_malloc_free(size_t size)
{
 size_t v1; // r4
 unsigned int *v3; // r0
 int v4; // r2
 unsigned int *v5; // r3
 int v6; // r4

 v1 = size;
 v3 = malloc(4 * size);
 if ( !v3 )
 return -1;
 if ( size )
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
int param_memset(void *buffer, size_t size)
{
 int result; // r0
 char *v5; // r3
 int v6; // t1

 memset(buffer, 0, size);
 if ( !size )
 return 0;
 result = 0;
 v5 = (char *)buffer - 1;
 do
 {
 v6 = (unsigned char)*++v5;
 result += v6;
 }
 while ( v5 != (char *)buffer + size - 1 );
 return result;
}


/* Function: call_memset @ 0x11808 */
int call_memset()
{
 return 0;
}


/* Function: param_strchr_strstr @ 0x11810 */
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


/* Function: call_strchr_strstr @ 0x1184C */
int call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x11854 */
void test_standard_library_functions()
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
 int v18; // [sp+4h] [bp-14h] BYREF
 int v19; // [sp+8h] [bp-10h] BYREF

 puts(s);
 printf(1, aLibL101D, 8);
 v0 = call_strcmp();
 printf(1, aLibL102D, v0);
 printf(1, aLibL103D, 12);
 printf(1, aLibL104D, 90);
 v1 = call_memcmp();
 printf(1, aLibL105D, v1);
 v2 = printf(1, "Value: %d, Name: %s\n", 42, "Test");
 printf(1, aLibL106D, v2);
 v3 = sscanf("123,456", "%d,%d", &v18, &v19);
 if ( v3 == 2 )
 {
 v5 = v18;
 v4 = v19;
 }
 else
 {
 v5 = -1;
 }
 if ( v3 == 2 )
 v5 += v4;
 printf(1, aLibL107D, v5, v4);
 v6 = fopen("/etc/passwd", "r");
 v7 = v6;
 if ( v6 && (v8 = fileno(v6), v9 = v7, v10 = v8, fclose(v9), v10 >= 0) )
 v11 = 42;
 else
 v11 = -1;
 printf(1, aLibL108D, v11);
 v12 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(1, aLibL109D, v12);
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
 printf(1, aLibL110D, v16);
 v17 = call_memset();
 printf(1, aLibL111D, v17);
 printf(1, aLibL112D, 15, 0);
}


/* Function: param_linux_syscall @ 0x11A6C */
int param_linux_syscall(const char *pathname)
{
 int v1; // r0
 int v2; // r4

 v1 = syscall(5, pathname, 0);
 v2 = v1;
 if ( v1 < 0 )
 return -errno;
 syscall(6, v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x11AB0 */
int call_linux_syscall()
{
 int v0; // r1
 int v1; // r2

 v0 = syscall(5, "/etc/passwd", 0);
 v1 = v0;
 if ( v0 < 0 )
 {
 if ( errno > 0 )
 return -1;
 else
 return 42;
 }
 else
 {
 syscall(6, v1);
 return 42;
 }
}


/* Function: param_win32_api @ 0x11AF8 */
int param_win32_api(const char *filename)
{
 struct stat st; // [sp+0h] [bp-68h] BYREF

 if (stat(filename, &st) < 0)
 return -1;
 if ( st.st_size <= 0 )
 return -2;
 return 42;
}


/* Function: call_win32_api @ 0x11B60 */
int call_win32_api()
{
 struct stat v1; // [sp+0h] [bp-68h] BYREF

 if ( stat_0("/etc/passwd", &v1) < 0 )
 return -1;
 if ( v1.st_size <= 0 )
 return -2;
 return 42;
}


/* Function: param_fork_exec @ 0x11BD0 */
int param_fork_exec(const char *prog, const char *arg)
{
 int v4; // r0
 int status; // [sp+0h] [bp-18h] BYREF

 v4 = fork();
 if ( v4 < 0 )
 return -1;
 if ( !v4 )
 {
 execl(prog, prog, arg, 0);
 exit(127);
 }
 if ( waitpid(v4, &status, 0) < 0 )
 return -2;
 if ( (status & 0x7F) != 0 )
 return -3;
 return BYTE1(status);
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
 int opt; // [sp+8h] [bp-20h] BYREF
 struct sockaddr_in addr; // [sp+Ch] [bp-1Ch] BYREF

 v0 = socket(2, 1, 0);
 v1 = v0;
 if ( v0 < 0 )
 return -1;
 opt = 1;
 if ( setsockopt(v0, 1, 2, &opt, 4u) < 0 )
 {
 close(v1);
 return -2;
 }
 else
 {
 memset(&addr.sin_port, 0, 14);
 addr.sin_family = 2;
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

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return -1;
 close(v0);
 if ( ftok("/tmp/binbench_shm", 42) < 0 )
 return -1;
 v1 = shmget(IPC_PRIVATE, 4096, IPC_CREAT | 0666);
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
void test_system_calls()
{
 int v0; // r1
 int v1; // r2
 int v2; // r2
 int v3; // r2
 int v4; // r0
 int v5; // r0
 int v6; // r2
 int v7; // r2
 struct stat v8; // [sp+0h] [bp-68h] BYREF

 puts(asc_13C08);
 v0 = syscall(5, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 if ( errno > 0 )
 v1 = -1;
 else
 v1 = 42;
 }
 else
 {
 syscall(6, v0);
 v1 = 42;
 }
 printf(1, aSysL301D, v1);
 if ( stat_0("/etc/passwd", &v8) < 0 )
 {
 v2 = -1;
 }
 else if ( v8.st_size <= 0 )
 {
 v2 = -2;
 }
 else
 {
 v2 = 42;
 }
 printf(1, aSysL302D, v2);
 if ( param_fork_exec("/bin/true", 0) )
 v3 = -1;
 else
 v3 = 42;
 printf(1, aSysL303D, v3);
 v4 = param_pipe_communication();
 printf(1, aSysL304D, v4);
 v5 = param_socket_create();
 printf(1, aSysL305D, v5);
 if ( param_shmget_shmat() <= 0 )
 v6 = -1;
 else
 v6 = 42;
 printf(1, aSysL306D, v6);
 v7 = param_signal_handling();
 printf(1, aSysL307D, v7, 0);
}


/* Function: param_pthread_create @ 0x121F4 */
int param_pthread_create(int x)
{
 int v1; // r4
 pthread_t tid; // [sp+0h] [bp-18h] BYREF
 int input; // [sp+4h] [bp-14h] BYREF
 void *thread_ret; // [sp+8h] [bp-10h] BYREF

 input = x;
 if ( pthread_create(&tid, 0, thread_compute, &input) )
 return -1;
 pthread_join(tid, &thread_ret);
 v1 = *(unsigned int *)thread_ret;
 free(thread_ret);
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
 if ( pthread_create(&th, 0, thread_compute, &arg) )
 return -1;
 pthread_join(th, &thread_return);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 return v0;
}


/* Function: param_pthread_join @ 0x1230C */
int param_pthread_join()
{
 ThreadData *v0; // r6
 pthread_t *v1; // r7
 ThreadData *v2; // r8
 ThreadData *v3; // r5
 int v4; // r4
 pthread_t start; // t1
 pthread_t tids[3]; // [sp+4h] [bp-54h] BYREF
 ThreadData data[3]; // [sp+10h] [bp-48h] BYREF
 int v9; // [sp+34h] [bp-24h] BYREF

 v0 = (ThreadData *)tids;
 v1 = tids;
 v2 = data;
 v3 = data;
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
 v4 = pthread_create(v1, 0, thread_sum, v3);
 if ( v4 )
 return -1;
 ++v3;
 ++v1;
 }
 while ( v3 != (ThreadData *)&v9 );
 while ( 1 )
 {
 start = v0->start;
 v0 = (ThreadData *)((char *)v0 + 4);
 if ( pthread_join(start, 0) )
 break;
 v4 += v2->result;
 ++v2;
 if ( v0 == data )
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
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 pthread_t *v3; // r0
 pthread_t *v4; // r8
 int v5; // r6
 pthread_t *v6; // r5
 int v7; // r4
 char *v9; // r5
 pthread_t v10; // t1
 int arg; // [sp+4h] [bp-24h] BYREF

 arg = iterations_per_thread;
 v3 = (pthread_t *)malloc(4 * thread_count);
 v4 = v3;
 if ( !v3 )
 return -1;
 v5 = 0;
 shared_counter = 0;
 if ( thread_count > 0 )
 {
 v6 = v3;
 while ( 1 )
 {
 v7 = pthread_create(v6++, 0, thread_increment, &arg);
 if ( v7 )
 {
 free(v4);
 return -2;
 }
 if ( thread_count == v5 + 1 )
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
 if ( shared_counter == arg * thread_count )
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
 pthread_t producer; // [sp+0h] [bp-18h] BYREF
 pthread_t consumer; // [sp+4h] [bp-14h] BYREF
 void *consumer_ret; // [sp+8h] [bp-10h] BYREF

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
 pthread_join(consumer, &consumer_ret);
 pthread_join(producer, 0);
 v1 = *(unsigned int *)consumer_ret;
 free(consumer_ret);
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
int param_atomic_ops(int thread_count, int iterations)
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
 pthread_t load_store_tid; // [sp+8h] [bp-28h] BYREF

 arg = iterations;
 v3 = (pthread_t *)malloc(4 * thread_count);
 v4 = v3;
 if ( !v3 )
 return -1;
 v5 = 0;
 v6 = _sync_synchronize(v3);
 atomic_counter = 0;
 _sync_synchronize(v6);
 if ( thread_count <= 0 )
 {
 v12 = pthread_create(&load_store_tid, 0, thread_atomic_load_store, 0);
 if ( !v12 )
 v12 = pthread_join(load_store_tid, 0);
 }
 else
 {
 v7 = v4;
 do
 {
 v8 = pthread_create(v7, 0, thread_atomic_increment, &arg);
 if ( v8 )
 {
 free(v4);
 return -2;
 }
 ++v5;
 ++v7;
 }
 while ( thread_count != v5 );
 if ( !pthread_create(&load_store_tid, 0, thread_atomic_load_store, 0) )
 pthread_join(load_store_tid, 0);
 v10 = v4 - 1;
 do
 {
 v11 = v10[1];
 ++v10;
 ++v8;
 v12 = pthread_join(v11, 0);
 }
 while ( thread_count > v8 );
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
int param_thread_local_storage(int thread_count)
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
 void *ret; // [sp+18h] [bp-30h] BYREF

 v2 = 4 * thread_count;
 v25 = 4 * thread_count;
 v3 = (pthread_t *)malloc(4 * thread_count);
 v4 = (char *)malloc(v2);
 v5 = v4 == 0;
 if ( v4 )
 v5 = v3 == 0;
 ptr = v4;
 v6 = v5;
 if ( v5 )
 return -1;
 if ( thread_count <= 0 )
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
 snprintf(v9, 16, "");
 }
 while ( thread_count != v6 );
 v11 = v7;
 v12 = 0;
 v13 = v3;
 do
 {
 v14 = (void *)*((unsigned int *)v11 + 1);
 v11 += 4;
 if ( pthread_create(v13, 0, thread_tls_test, v14) )
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
 pthread_join(v21, &ret);
 v18 += *(unsigned int *)ret;
 v6 += *((unsigned int *)ret + 1);
 free(ret);
 v22 = (void *)*((unsigned int *)v7 + 1);
 v7 += 4;
 free(v22);
 v5 = v10 == v19++;
 }
 while ( !v5 );
 }
 free(ptr);
 free(v3);
 if ( v6 == 30 * (v25 + thread_count) && v18 == 20 * (v25 + thread_count) )
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
void test_thread_concurrency()
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
 if ( pthread_create(&th, 0, thread_compute, &arg) )
 {
 v0 = -1;
 }
 else
 {
 pthread_join(th, &thread_return);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 printf(1, aThrL301D, v0);
 v1 = param_pthread_join();
 printf(1, aThrL302D, v1);
 v2 = param_mutex_lock(4, 1000);
 printf(1, aThrL303D, v2);
 v3 = param_condition_variable();
 printf(1, aThrL304D, v3);
 v4 = param_atomic_ops(4, 500);
 printf(1, aThrL305D, v4);
 v5 = param_thread_local_storage(4);
 printf(1, aThrL306D, v5, 0);
}


/* Function: __sync_fetch_and_add_4 @ 0x12A34 */
int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_add(a1, a2);
}


/* Function: __sync_fetch_and_sub_4 @ 0x12A6C */
int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_sub(a1, a2);
}


/* Function: __sync_fetch_and_or_4 @ 0x12AA4 */
int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_or(a1, a2);
}


/* Function: __sync_fetch_and_and_4 @ 0x12ADC */
int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_and(a1, a2);
}


/* Function: __sync_fetch_and_xor_4 @ 0x12B14 */
int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_xor(a1, a2);
}


/* Function: __sync_fetch_and_nand_4 @ 0x12B4C */
int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_nand(a1, a2);
}


/* Function: __sync_fetch_and_add_2 @ 0x12B88 */
int _sync_fetch_and_add_2(unsigned short *a1, int a2)
{
 return __sync_fetch_and_add(a1, a2);
}


/* Function: __sync_add_and_fetch_4 @ 0x12FF8 */
int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 return __sync_add_and_fetch(a1, a2);
}


/* Function: __sync_sub_and_fetch_4 @ 0x13030 */
int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 return __sync_sub_and_fetch(a1, a2);
}


/* Function: __sync_or_and_fetch_4 @ 0x13068 */
int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 return __sync_or_and_fetch(a1, a2);
}


/* Function: __sync_and_and_fetch_4 @ 0x130A0 */
int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 return __sync_and_and_fetch(a1, a2);
}


/* Function: __sync_xor_and_fetch_4 @ 0x130D8 */
int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 return __sync_xor_and_fetch(a1, a2);
}


/* Function: __sync_nand_and_fetch_4 @ 0x13110 */
int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 return __sync_nand_and_fetch(a1, a2);
}


/* Function: __sync_add_and_fetch_2 @ 0x1314C */
int _sync_add_and_fetch_2(unsigned int *a1, int a2)
{
 return __sync_add_and_fetch(a1, a2);
}


/* Function: __sync_sub_and_fetch_2 @ 0x131B4 */
int _sync_sub_and_fetch_2(unsigned int *a1, int a2)
{
 return __sync_sub_and_fetch(a1, a2);
}


/* Function: __sync_or_and_fetch_2 @ 0x1321C */
int _sync_or_and_fetch_2(unsigned int *a1, int a2)
{
 return __sync_or_and_fetch(a1, a2);
}


/* Function: __sync_and_and_fetch_2 @ 0x13284 */
int _sync_and_and_fetch_2(unsigned int *a1, int a2)
{
 return __sync_and_and_fetch(a1, a2);
}


/* Function: __sync_xor_and_fetch_2 @ 0x132EC */
int _sync_xor_and_fetch_2(unsigned int *a1, int a2)
{
 return __sync_xor_and_fetch(a1, a2);
}


/* Function: __sync_nand_and_fetch_2 @ 0x13354 */
int _sync_nand_and_fetch_2(unsigned int *a1, int a2)
{
 return __sync_nand_and_fetch(a1, a2);
}


/* Function: __sync_add_and_fetch_1 @ 0x133C0 */
int _sync_add_and_fetch_1(unsigned char *a1, int a2)
{
 return __sync_add_and_fetch(a1, a2);
}


/* Function: __sync_sub_and_fetch_1 @ 0x13424 */
int _sync_sub_and_fetch_1(unsigned char *a1, int a2)
{
 return __sync_sub_and_fetch(a1, a2);
}


/* Function: __sync_or_and_fetch_1 @ 0x13488 */
int _sync_or_and_fetch_1(unsigned char *a1, int a2)
{
 return __sync_or_and_fetch(a1, a2);
}


/* Function: __sync_and_and_fetch_1 @ 0x134EC */
int _sync_and_and_fetch_1(unsigned char *a1, int a2)
{
 return __sync_and_and_fetch(a1, a2);
}


/* Function: __sync_xor_and_fetch_1 @ 0x13550 */
int _sync_xor_and_fetch_1(unsigned char *a1, int a2)
{
 return __sync_xor_and_fetch(a1, a2);
}


/* Function: __sync_nand_and_fetch_1 @ 0x135B4 */
int _sync_nand_and_fetch_1(unsigned char *a1, int a2)
{
 return __sync_nand_and_fetch(a1, a2);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x1361C */
int _sync_val_compare_and_swap_4(unsigned int *a1, int a2, int a3)
{
 return __sync_val_compare_and_swap(a1, a2, a3);
}


/* Function: __sync_val_compare_and_swap_2 @ 0x1366C */
int _sync_val_compare_and_swap_2(unsigned short *a1, int a2, int a3)
{
 return __sync_val_compare_and_swap(a1, a2, a3);
}


/* Function: __sync_val_compare_and_swap_1 @ 0x136E4 */
int _sync_val_compare_and_swap_1(unsigned char *a1, int a2, int a3)
{
 return __sync_val_compare_and_swap(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x13758 */
bool _sync_bool_compare_and_swap_4(unsigned int *a1, int a2, int a3)
{
 return __sync_bool_compare_and_swap(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x13784 */
bool _sync_bool_compare_and_swap_2(unsigned short *a1, int a2, int a3)
{
 return __sync_bool_compare_and_swap(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x137A0 */
bool _sync_bool_compare_and_swap_1(unsigned char *a1, int a2, int a3)
{
 return __sync_bool_compare_and_swap(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x137C8 */
int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 return __sync_lock_test_and_set(a1, a2);
}


/* Function: __sync_lock_test_and_set_2 @ 0x13800 */
int _sync_lock_test_and_set_2(unsigned short *a1, int a2)
{
 return __sync_lock_test_and_set(a1, a2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x13860 */
int _sync_lock_test_and_set_1(unsigned char *a1, int a2)
{
 return __sync_lock_test_and_set(a1, a2);
}


/* Function: __sync_lock_release_8 @ 0x138BC */
int _sync_lock_release_8(unsigned int *a1)
{
 __sync_synchronize();
 *a1 = 0;
 a1[1] = 0;
 return 0;
}


/* Function: __sync_lock_release_4 @ 0x138E0 */
int _sync_lock_release_4(unsigned int *a1)
{
 __sync_synchronize();
 *a1 = 0;
 return 0;
}


/* Function: __sync_lock_release_2 @ 0x13900 */
int _sync_lock_release_2(unsigned short *a1)
{
 __sync_synchronize();
 *a1 = 0;
 return 0;
}


/* Function: __sync_lock_release_1 @ 0x13920 */
int _sync_lock_release_1(unsigned char *a1)
{
 __sync_synchronize();
 *a1 = 0;
 return 0;
}



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

/* FAILED to decompile: __imp__sscanf @ 0x2420C */

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

/* FAILED to decompile: __imp_fork @ 0x2425C */

/* FAILED to decompile: __imp_pthread_cond_wait @ 0x24260 */

/* FAILED to decompile: __imp_write @ 0x24264 */

/* FAILED to decompile: __imp_fileno @ 0x24268 */

/* FAILED to decompile: __imp_fclose @ 0x2426C */

/* FAILED to decompile: __imp_strcmp @ 0x24270 */

/* FAILED to decompile: __imp_pthread_mutex_lock @ 0x24274 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x24278 */

/* FAILED to decompile: __imp_listen @ 0x2427C */

/* FAILED to decompile: __imp__printf @ 0x24280 */

/* FAILED to decompile: __imp_alarm @ 0x24284 */

/* FAILED to decompile: __imp_pipe @ 0x24288 */

/* FAILED to decompile: __imp_pthread_mutex_unlock @ 0x2428C */

/* FAILED to decompile: __imp__snprintf @ 0x24290 */

/* FAILED to decompile: __imp_strstr @ 0x24294 */

/* FAILED to decompile: __imp_puts @ 0x24298 */

/* FAILED to decompile: __imp_fwrite @ 0x2429C */

/* FAILED to decompile: __imp_pthread_join @ 0x242A0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x242A4 */

/* Total functions decompiled: 122, failed: 60 */
