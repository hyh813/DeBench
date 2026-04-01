// Angr Decompilation of 6_clang_Os_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <signal.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdatomic.h>
#include <sys/syscall.h>
#include <netinet/in.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_5;
} struct_0;

struct_0 *g_406fe0 = 0;

/* Global variable declarations */
char g_4040b7[] = "strlen result: %d\n";
char g_4040d2[] = "strcmp result: %d\n";
char g_4040ed[] = "call_strlen result: %d\n";
char g_404109[] = "call_memcpy result: %d\n";
char g_404125[] = "call_memcmp result: %d\n";
char g_404141[] = "call_printf result: %d\n";
char g_40415d[] = "call_scanf result: %d\n";
char g_40417a[] = "call_fopen_fclose result: %d\n";
char g_404196[] = "call_fread_fwrite result: %d\n";
char g_4041b2[] = "call_malloc_free result: %d\n";
char g_4041ce[] = "call_memset result: %d\n";
char g_4041e9[] = "call_strchr_strstr result: %d\n";
char g_4043af[] = "Testing standard library functions...";
char g_404238[] = "param_linux_syscall result: %d\n";
char g_404254[] = "call_win32_api result: %d\n";
char g_404270[] = "call_fork_exec result: %d\n";
char g_40428c[] = "call_pipe_communication result: %d\n";
char g_4042a8[] = "call_socket_create result: %d\n";
char g_4042c4[] = "call_shmget_shmat result: %d\n";
char g_4042e0[] = "call_signal_handling result: %d\n";
char g_4043d3[] = "Testing system calls...";
char g_404306[] = "call_pthread_create result: %d\n";
char g_404322[] = "call_pthread_join result: %d\n";
char g_40433f[] = "call_mutex_lock result: %d\n";
char g_40435b[] = "call_condition_variable result: %d\n";
char g_404377[] = "call_atomic_ops result: %d\n";
char g_404393[] = "call_thread_local_storage result: %d\n";
char g_4043ee[] = "Testing thread concurrency...";

unsigned int signal_number = 0;
unsigned int signal_received = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int shared_counter = 0;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
char data = 0;
char i = 0;
char ready = 0;
_Atomic unsigned int atomic_counter = 0;

void signal_handler(int a0);



unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_406fe0;
 return v1;
}


// Function: sub_402020 at 0x402020
unsigned long long g_407008 = 0;
unsigned long long g_407010 = 0;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_407008;
 return;
}


// Function: sub_40202c at 0x40202c
int sub_40202c()
{
 return raise(0);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4023e5 at 0x4023e5
void sub_4023e5()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4203493 */
}


// Function: sub_4023e6 at 0x4023e6
void sub_4023e6()
{
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_402419 at 0x402419
void sub_402419()
{
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402459 at 0x402459
void sub_402459()
{
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_402495 at 0x402495
void sub_402495()
{
}


// Function: sub_402499 at 0x402499
void sub_402499()
{
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_4024a9 at 0x4024a9
void sub_4024a9(unsigned long a0)
{
 return;
}


// Function: param_strcpy at 0x4024ac
long long param_strcpy(char *a0, char *a1)
{
 strcpy(a0, a1);
 return strlen(a0);
}


// Function: call_strcpy at 0x4024be
long long call_strcpy()
{
 char v0[8]; // [bp-0x28]
 char result; // [bp-0x20]

 strncpy(v0, "HelloLib", 8);
 result = 0;
 return strlen(v0);
}


// Function: param_strcmp at 0x4024e0
unsigned long long param_strcmp(char *a0, char *a1)
{
 unsigned long long v2; // rax
 unsigned int v3; // eax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 v3 = strcmp(a0, a1);
 if (v3 > 0)
 return 1;
 return -(v3);
}


// Function: call_strcmp at 0x4024fb
unsigned long long call_strcmp()
{
 return 0;
}


// Function: param_strlen at 0x4024fe
long long param_strlen(char *a0)
{
 return strlen(a0);
}


// Function: call_strlen at 0x402503
unsigned long long call_strlen()
{
 return 12;
}


// Function: param_memcpy at 0x402509
int param_memcpy(void* a0, void* a1, unsigned long n)
{
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x402516
unsigned long long call_memcpy()
{
 return 90;
}


// Function: param_memcmp at 0x40251c
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned long long v2; // rax
 unsigned int v3; // eax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 v3 = memcmp(a0, a1, a2);
 if (v3 > 0)
 return 1;
 return -(v3);
}


// Function: call_memcmp at 0x402537
unsigned long long call_memcmp()
{
 return 4294967295;
}


// Function: param_printf at 0x40253d
int param_printf(unsigned int a0, char *a1)
{
 return printf("Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x402550
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


// Function: param_scanf at 0x40256a
unsigned long long param_scanf(char *a0)
{
 unsigned long long v5; // r14
 unsigned long long v6; // rbx
 unsigned long v7; // rax
 unsigned long v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned long long v2; // [bp-0x10]
 unsigned long long v3; // [bp-0x8]

 v3 = v5;
 v2 = v6;
 v0 = v7;
 return (sscanf(a0, "%d,%d", &v0, &v1) == 2 ? (int)v0 + v1 : 4294967295);
}


// Function: call_scanf at 0x4025a2
unsigned long long call_scanf()
{
 int v0, v1;

 return (sscanf("123,456", "%d,%d", &v0, &v1) == 2 ? v0 + v1 : 4294967295);
}


// Function: param_fopen_fclose at 0x4025e1
unsigned long long param_fopen_fclose(char *a0)
{
 unsigned long long v2; // rax
 FILE *fp; // rax
 unsigned int v4; // eax
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 fp = fopen(a0, "r");
 if (!fp)
 return 4294967295;
 v4 = fileno(fp);
 fclose(fp);
 return v4;
}


// Function: call_fopen_fclose at 0x40261a
unsigned int call_fopen_fclose()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return (unsigned int)((param_fopen_fclose("/etc/passwd") & 4294967295) >> 31) | 42;
}


// Function: param_fread_fwrite at 0x40262f
unsigned long long param_fread_fwrite(char *a0)
{
 void* fp; // rax
 void* v4; // rbx
 unsigned long long count; // rax
 unsigned long long v6; // rax
 char v0; // [bp-0x38]
 int v1; // [bp-0x35]

 fp = fopen(a0, "w+");
 if (!fp)
 return 4294967295;
 v4 = fp;
 if (fwrite("BinBench Test Data", 1, 18, fp) != 18)
 {
 fclose(v4);
 return 4294967294;
 }
 rewind(v4);
 count = fread(&v0, 1, 18, v4);
 ((char*)&v0)[count] = 0;
 fclose(v4);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 if (v1 == 65535)
 v6 = 42;
 else
 v6 = 4294967293;
 return v6;
}


// Function: call_fread_fwrite at 0x402706
unsigned long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x402712
unsigned int param_malloc_free(unsigned long long i)
{
 unsigned long long v2; // rax
 unsigned int *ptr; // rax
 unsigned int v4; // ecx
 unsigned long long idx; // rdx
 unsigned int v6; // ebp
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 if (i)
 {
 v4 = 0;
 idx = 0;
 do
 {
 ptr[idx] = v4;
 idx += 1;
 v4 += 10;
 } while (i != idx);
 v6 = *(ptr);
 }
 free(ptr);
 return v6 + ptr[1 + i];
}


// Function: call_malloc_free at 0x402761
int call_malloc_free()
{
 return param_malloc_free(10);
}


// Function: param_memset at 0x40276b
unsigned int param_memset(void* a0, unsigned long n)
{
 unsigned long v1; // rax
 unsigned long long v2; // rbp

 memset(a0, 0, n);
 if (!n)
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += *((char *)a0 + v1);
 v1 += 1;
 } while (n != v1);
 return v2;
}


// Function: call_memset at 0x4027a0
unsigned long long call_memset()
{
 return 0;
}


// Function: param_strchr_strstr at 0x4027a3
long long param_strchr_strstr(char *a0, int a1, char *a2)
{
 char *ptr1; // rax
 char *ptr2; // rax

 ptr1 = strchr(a0, a1);
 ptr2 = strstr(a0, a2);
 return (-(ptr1 < 1) | (unsigned int)((unsigned long)ptr1 - (unsigned long)a0)) + (-(ptr2 < 1) | (unsigned int)((unsigned long)ptr2 - (unsigned long)a0));
}


// Function: call_strchr_strstr at 0x4027dc
unsigned long long call_strchr_strstr()
{
 return 15;
}


// Function: test_standard_library_functions at 0x4027e2
int test_standard_library_functions()
{
 unsigned int v0; // [bp-0x3c]
 int v1_int; // [bp-0x38]
 char v1[8]; // [bp-0x34]
 char result; // [bp-0x30]

 puts(&g_4043af);
 strncpy(v1, "HelloLib", 8);
 result = 0;
 printf(&g_4040b7, strlen(v1) & 4294967295);
 printf(&g_4040d2, 0);
 printf(&g_4040ed, 12);
 printf(&g_404109, 90);
 printf(&g_404125, call_memcmp() & 4294967295);
 printf(&g_404141, printf("Value: %d, Name: %s\n", 42, "Test") & 4294967295);
 printf(&g_40415d, (sscanf("123,456", "%d,%d", (int *)&v0, &v1_int) == 2 ? v0 + v1_int : 4294967295));
 printf(&g_40417a, (unsigned int)param_fopen_fclose("/etc/passwd") >> 31 | 42);
 printf(&g_404196, param_fread_fwrite("/tmp/binbench_test_tmp") & 4294967295);
 printf(&g_4041b2, param_malloc_free(10) & 4294967295);
 printf(&g_4041ce, 0);
 return printf(&g_4041e9, 15);
}


// Function: param_linux_syscall at 0x40295b
unsigned int param_linux_syscall(unsigned long a0)
{
 unsigned long long v2; // rax
 unsigned int v3; // ebx
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v3 = open((const char *)a0, 0, 0);
 if (v3 < 0)
 return -errno;
 close(v3);
 return v3;
}


// Function: call_linux_syscall at 0x40299a
unsigned int call_linux_syscall()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return (unsigned int)((param_linux_syscall("/etc/passwd") & 4294967295) >> 31) | 42;
}


// Function: param_win32_api at 0x4029af
unsigned long long param_win32_api()
{
 struct stat st;
 unsigned long long v3; // rbx
 unsigned long long v0; // [bp-0x68]
 unsigned long long v1; // [bp-0x8]

 v1 = v3;
 return (stat("/etc/passwd", &st) >= 0 ? (0 < v0 ? 42 : 4294967294) : 4294967295);
}


// Function: call_win32_api at 0x4029e7
unsigned long long call_win32_api()
{
 unsigned long long v4; // rbx
 char v0; // [bp-0x98]
 unsigned long long v1; // [bp-0x68]
 unsigned long long v2; // [bp-0x8]

 v2 = v4;
 return ((int)stat("/etc/passwd", &v0) >= 0 ? (0 < v1 ? 42 : 4294967294) : 4294967295);
}


// Function: param_fork_exec at 0x402a26
unsigned long long param_fork_exec(char *a0, unsigned long a1)
{
 unsigned long v2; // rax
 unsigned int result; // eax
 unsigned long v0; // [bp-0x18]

 v0 = v2;
 result = fork();
 if (result < 0)
 {
 return 4294967295;
 }
 else if (!result)
 {
 execl(a0, a0, NULL);
 _exit(127); /* do not return */
 }
 else if (waitpid(result, &v0, 0) >= 0)
 {
 return 4294967293;
 }
 else
 {
 return 4294967294;
 }
}


// Function: call_fork_exec at 0x402a90
long long call_fork_exec()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return -(0 < (unsigned int)param_fork_exec("/bin/true", 0)) | 42;
}


// Function: param_pipe_communication at 0x402aa8
unsigned long long param_pipe_communication()
{
 unsigned int result; // eax
 unsigned long long count; // rax
 int pipefd[2]; // [bp-0x30]
 unsigned int v1; // [bp-0x2c]
 char v2; // [bp-0x28]

 if (pipe(pipefd) < 0)
 return 4294967295;
 result = fork();
 if (result < 0)
 {
 return 4294967294;
 }
 else if (result)
 {
 close(pipefd[1]);
 count = read(pipefd[0], &v2, 31);
 v2 = 0;
 close(pipefd[0]);
 wait(NULL);
 return (count > 0 ? 42 : 4294967293);
 }
 else
 {
 close(pipefd[0]);
 write(pipefd[1], "HelloPipe", 9);
 close(pipefd[1]);
 _exit(0); /* do not return */
 }
}


// Function: call_pipe_communication at 0x402b4c
unsigned long long call_pipe_communication()
{
 return param_pipe_communication();
}


// Function: param_socket_create at 0x402b51
unsigned long long param_socket_create()
{
 unsigned int v4; // eax
 unsigned int v5; // ebx
 unsigned int v6; // eax
 unsigned long long v7; // rax
 unsigned int result; // [bp-0x24]
 struct sockaddr_in v1; // [bp-0x20]

 v4 = socket(2, 1, 0);
 if (v4 < 0)
 return 4294967295;
 v5 = v4;
 result = 1;
 if (setsockopt(v4, 1, 2, &result, 4) < 0)
 {
 close(v5);
 return 4294967294;
 }
 memset(&v1, 0, sizeof(v1));
 v1.sin_family = 2;
 if (bind(v5, (struct sockaddr*)&v1, 16) < 0)
 {
 close(v5);
 return 4294967293;
 }
 v6 = listen(v5, 5);
 close(v5);
 if (v6 < 0)
 v7 = 0xfffffffc;
 else
 v7 = 42;
 return v7;
}


// Function: call_socket_create at 0x402c06
unsigned long long call_socket_create()
{
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x402c0b
unsigned int param_shmget_shmat()
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 struct_0 *v4; // rax
 struct_0 *ptr; // rbp
 unsigned int v6; // ebx

 v1 = open("/tmp/binbench_shm", 66, 438);
 if (v1 < 0)
 return 4294967295;
 close(v1);
 v2 = ftok("/tmp/binbench_shm", 42);
 if (v2 < 0)
 return 4294967295;
 v3 = shmget(v2, 0x1000, 950);
 if (v3 < 0)
 return 4294967294;
 v4 = shmat(v3, 0, 0);
 if (v4 == 0xffffffffffffffff)
 return 4294967293;
 ptr = v4;
 *((unsigned long long *)((char *)&ptr->field_0 + 5)) = 34184295084281188;
 ptr->field_0 = 7299600957910902867;
 v6 = 16;
 shmdt(ptr);
 shmctl(v3, 0, 0);
 return v6;
}


// Function: call_shmget_shmat at 0x402ccc
unsigned int call_shmget_shmat()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 if (param_shmget_shmat() <= 0)
 return 4294967295;
 return 42;
}


// Function: param_signal_handling at 0x402ce3
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned long long param_signal_handling()
{
 unsigned int v1; // ebx
 unsigned int v2; // ebx
 unsigned int v3; // ebx
 unsigned int v4; // ebx
 unsigned int v5; // ebx
 unsigned int v6; // ebx

 if ((unsigned long)signal(10, signal_handler) == 18446744073709551615)
 {
 return 4294967295;
 }
 else if ((unsigned long)signal(14, signal_handler) != 18446744073709551615)
 {
 signal_received = 0;
 raise(10);
 if (!signal_received)
 {
 v1 = 1000;
 do
 {
 v2 = v1;
 usleep((useconds_t)1000);
 } while (!signal_received && (v3 = v2 - 1, v1 = v2 - 1, v2 > 1));
 }
 if (!signal_received)
 {
 return 4294967293;
 }
 else if (signal_number == 10)
 {
 signal_received = 0;
 alarm(1);
 if (!signal_received)
 {
 v4 = 2000;
 do
 {
 v5 = v4;
 usleep((useconds_t)1000);
 } while (!signal_received && (v6 = v5 - 1, v4 = v5 - 1, v5 > 1));
 }
 if (!signal_received)
 {
 return 4294967291;
 }
 else if (signal_number == 14)
 {
 signal(10, NULL);
 signal(14, NULL);
 return 42;
 }
 else
 {
 return 4294967291;
 }
 }
 else
 {
 return 0xfffffffc;
 }
 }
 else
 {
 return 4294967294;
 }
}


// Function: signal_handler at 0x402e06
extern unsigned int signal_number;
extern unsigned int signal_received;

void signal_handler(int a0)
{
 signal_received = 1;
 signal_number = a0;
 return;
}


// Function: call_signal_handling at 0x402e17
unsigned long long call_signal_handling()
{
 return param_signal_handling();
}


// Function: test_system_calls at 0x402e1c
int test_system_calls()
{
 unsigned int v4; // eax
 struct stat v0; // [bp-0xa8]
 char v1; // [bp-0x78]

 puts(&g_4043d3);
 printf(&g_404238, param_linux_syscall("/etc/passwd") >> 31 | 42);
 v4 = stat("/etc/passwd", &v0);
 printf(&g_404254, (v4 < 0 ? 4294967295 : (0 < (long)v0.st_size ? 42 : 4294967294)));
 printf(&g_404270, -(0 < (unsigned int)param_fork_exec("/bin/true", 0)) | 42);
 printf(&g_40428c, param_pipe_communication() & 4294967295);
 printf(&g_4042a8, param_socket_create() & 4294967295);
 printf(&g_4042c4, (param_shmget_shmat() > 0 ? 42 : 4294967295));
 return printf(&g_4042e0, param_signal_handling() & 4294967295);
}


// Function: thread_compute at 0x402f16
unsigned int * thread_compute(unsigned int *a0)
{
 unsigned int *ptr; // rax

 ptr = malloc(4);
 *(ptr) = *(a0) * *(a0);
 return ptr;
}


// Function: param_pthread_create at 0x402f2a
unsigned int param_pthread_create(unsigned int a0)
{
 pthread_t v0; // [bp-0x20]
 unsigned int v1; // [bp-0x14]
 void *v2; // [bp-0x10]
 unsigned int *arg_ptr; // rax

 v1 = a0;
 arg_ptr = &v1;
 if ((int)pthread_create(&v0, 0, (void *(*)(void *))thread_compute, (void *)arg_ptr))
 return 4294967295;
 pthread_join(v0, &v2);
 free(v2);
 return *((int *)v2);
}


// Function: call_pthread_create at 0x402f76
int call_pthread_create()
{
 return param_pthread_create(7);
}


// Function: thread_sum at 0x402f80
void * thread_sum(void *arg)
{
 unsigned int *ptr; // rax
 unsigned int v1; // r8d
 unsigned long v2; // rdx
 unsigned int v3; // eax

 ptr = (unsigned int *)arg;
 ptr[2] = 0;
 v1 = *(ptr);
 v2 = ptr[1];
 v3 = v2;
 if (v3 >= v1)
 ptr[2] = (v3 - v1) * (v1 + 1) + v1 + (unsigned int)((v2 + ~(v1)) * (v3 - v1) >> 1);
 return 0;
}


// Function: param_pthread_join at 0x402fb4
unsigned int param_pthread_join()
{
 char *v7; // rbx
 unsigned long long v8; // rbp
 char *cur; // rbx
 unsigned long long v10; // rbp
 unsigned int v11; // r14d
 pthread_t threads[3]; // [bp-0x68]
 unsigned int thread_data[9]; // [bp-0x48]
 void *v2; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 unsigned int v4; // [bp-0x38]
 unsigned long long v5; // [bp-0x30]
 void **v2_ptr; // [bp-0x28]

 v2_ptr = &v2;
 v7 = (char *)thread_data;
 memset(thread_data, 0, 36);
 thread_data[0] = 42949672961;
 v3 = 11;
 v4 = 20;
 v5 = 128849018901;
 v8 = 0;
 while (pthread_create(&threads[v8/8], (pthread_attr_t *)0, (void *(*)(void *))thread_sum, (void *)v7) == 0)
 {
 v7 += 12;
 v8 += 8;
 if (v8 == 24)
 {
 cur = (char *)&thread_data[3];
 v10 = 0;
 v11 = 0;
 while (!(int)pthread_join(threads[v10], (void **)v2_ptr))
 {
 v11 += *(cur);
 v10 += 1;
 cur += 3;
 if (v10 == 3)
 return v11;
 }
 return 4294967294;
 }
 }
 return 4294967295;
}


// Function: call_pthread_join at 0x40306c
int call_pthread_join()
{
 return param_pthread_join();
}


// Function: thread_increment at 0x403071
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;

unsigned long long thread_increment(unsigned int *ptr)
{
 unsigned long long v2; // rax
 unsigned int v3; // ebp
 unsigned int i; // ebp
 unsigned int v5; // ebp
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v3 = *(ptr);
 if (v3 <= 0)
 return 0;
 do
 {
 i = v3;
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 v5 = i - 1;
 v3 = v5;
 } while (i != 1);
 return 0;
}


// Function: param_mutex_lock at 0x4030ae
unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned long v3; // rax
 unsigned int v4; // r14d
 unsigned int *ptr; // rax
 pthread_t *threads; // rbx
 unsigned long i; // r12
 unsigned long long v8; // r14
 unsigned long v9; // rbp
 unsigned int v0; // [bp-0x38], Other Possible Types: unsigned long
 unsigned int v1; // [bp-0x34]
 void *thread_arg; // rax

 v4 = a0;
 v0 = a1;
 threads = malloc(a0 * 8);
 if (!threads)
 return 4294967295;
 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 free(threads);
 return 4294967295;
 }
 shared_counter = 0;
 if (v4 > 0)
 {
 v1 = v4;
 i = v4;
 v8 = 0;
 do
 {
 ptr[v8/4] = v0;
 thread_arg = (void *)(&ptr[v8/4]);
 if ((int)pthread_create(&threads[v8/8], 0, (void *(*)(void *))thread_increment, thread_arg))
 {
 free(ptr);
 free(threads);
 return 4294967294;
 }
 } while ((v8 += 8, i * 8 != v8));
 v4 = v1;
 if (v4 > 0)
 {
 v9 = 0;
 do
 {
 pthread_join(threads[v9], 0);
 v9 += 1;
 } while (i != v9);
 }
 }
 free(ptr);
 free(threads);
 return (shared_counter == v0 * v4 ? 42 : 4294967293);
}


// Function: call_mutex_lock at 0x403188
unsigned long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x403197
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern char data;
extern char i;
extern char ready;

unsigned int * consumer_thread(void *arg)
{
 unsigned long long v2; // rax
 unsigned int *ptr; // rax
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 pthread_mutex_lock(&cond_mutex);
 if (!i)
 {
 do
 {
 pthread_cond_wait(&cond, &cond_mutex);
 } while (i != 1);
 }
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = (!data ? 0 : 42);
 return ptr;
}


// Function: producer_thread at 0x403203
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern char data;
extern char ready;

void *producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: param_condition_variable at 0x403243
extern char data;
extern char ready;

unsigned int param_condition_variable()
{
 pthread_t v0; // [bp-0x20]
 pthread_t v1; // [bp-0x18]
 void *v2; // [bp-0x10]
 void **v2_ptr; // [bp-0x10]

 v2_ptr = &v2;
 ready = 0;
 data = 0;
 if ((int)pthread_create(&v0, 0, (void *(*)(void *))consumer_thread, 0))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v1, 0, (void *(*)(void *))producer_thread, 0))
 {
 pthread_cancel(v0);
 return 4294967294;
 }
 else
 {
 pthread_join(v0, v2_ptr);
 pthread_join(v1, 0);
 free(v2);
 return *((int *)v2);
 }
}


// Function: call_condition_variable at 0x4032ce
int call_condition_variable()
{
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x4032d3
extern _Atomic unsigned int atomic_counter;

unsigned long long thread_atomic_increment(void *arg)
{
 unsigned int *a0; // rax
 unsigned int i; // ecx

 a0 = (unsigned int *)arg;
 if (*(a0) <= 0)
 return 0;
 i = 0;
 do
 {
 atomic_fetch_add(&atomic_counter, 1);
 i += 1;
 } while (i != *(a0));
 return 0;
}


// Function: thread_atomic_load_store at 0x4032fb
extern _Atomic unsigned int atomic_counter;

unsigned int thread_atomic_load_store()
{
 atomic_fetch_add(&atomic_counter, 100);
 return 0;
}


// Function: param_atomic_ops at 0x40330d
unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 pthread_t *threads; // rax
 unsigned int *args; // rbx
 unsigned long i; // r13
 unsigned long long v7; // r14
 unsigned long v8; // rbp
 unsigned int v0; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]
 pthread_t main_thread; // [bp-0x38]
 void *thread_arg; // rax
 void *thread_result; // [bp-0x30]
 void **thread_result_ptr; // [bp-0x28]

 thread_result_ptr = &thread_result;
 v1 = a1;
 v0 = a0;
 threads = malloc(a0 * 8);
 if (!threads)
 return 4294967295;
 args = malloc(a0 * 4);
 if (!args)
 {
 free(threads);
 return 4294967295;
 }
 atomic_exchange(&atomic_counter, 0);
 i = a0;
 if (a0 > 0)
 {
 v7 = 0;
 do
 {
 args[v7/4] = v1;
 thread_arg = (void *)(&args[v7/4]);
 if ((int)pthread_create(&threads[v7/8], 0, (void *(*)(void *))thread_atomic_increment, (void *)thread_arg))
 {
 free(args);
 free(threads);
 return 4294967294;
 }
 } while ((v7 += 8, i * 8 != v7));
 }
 if (!(int)pthread_create(&main_thread, 0, (void *(*)(void *))thread_atomic_load_store, (void *)0))
 pthread_join(main_thread, thread_result_ptr);
 if (v0 > 0)
 {
 v8 = 0;
 do
 {
 pthread_join(threads[v8], 0);
 v8 += 1;
 } while (i != v8);
 }
 free(args);
 free(threads);
 return (atomic_counter > 0 ? 42 : 4294967293);
}


// Function: call_atomic_ops at 0x403404
unsigned long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x403413
void * thread_tls_test(void *a0)
{
 void *v2; // rax
 void* p; // fs
 unsigned int v4; // ebx
 unsigned int v5; // ebp
 unsigned int *ptr; // rax

 v2 = 0;
 v4 = 0;
 v5 = v4 + 50;
 ptr = malloc(8);
 ptr[0] = v4;
 ptr[1] = v5;
 return ptr;
}


// Function: param_thread_local_storage at 0x40345c
unsigned long long param_thread_local_storage(unsigned int a0)
{
 unsigned long long v4; // rbx
 pthread_t *addr; // r14
 unsigned int v14; // ebx
 unsigned long v15; // rbx
 void **p; // r13
 unsigned long i; // r12
 unsigned long idx; // rbx
 char *ptr; // rax
 pthread_t *v10; // rbx
 unsigned long j; // r14
 unsigned long v12; // rbp
 unsigned int v13; // r15d
 unsigned int v0; // [bp-0x44]
 pthread_t *ptr3; // [bp-0x40]
 void *ptr_result; // [bp-0x38]

 v4 = a0 * 8;
 addr = malloc(v4);
 p = (void **)malloc(v4);
 if (!addr)
 {
 return 4294967295;
 }
 else if (p)
 {
 if (a0 > 0)
 {
 i = a0;
 idx = 0;
 do
 {
 ptr = malloc(16);
 p[idx] = ptr;
 snprintf(ptr, 16, "Thread-%d", idx & 4294967295);
 idx += 1;
 } while (i != idx);
 if (a0 <= 0)
 goto LABEL_403569;
 v10 = addr;
 j = 0;
 ptr3 = v10;
 do
 {
 if (pthread_create(&v10[j], (pthread_attr_t *)0, (void *(*)(void *))thread_tls_test, (void *)p[j]) != 0)
 {
 v15 = 18446744073709551615;
 do
 {
 free(p[v15]);
 v15 += 1;
 } while (j != v15);
 free(p);
 free(ptr3);
 return 4294967294;
 }
 } while ((j += 1, v10 += 8, i != j));
 v0 = a0;
 if (a0 > 0)
 {
 v12 = 0;
 v13 = 0;
 v14 = 0;
 addr = ptr3;
 do
 {
 pthread_join(addr[v12], (void **)&ptr_result);
 v14 += *((int *)ptr_result);
 v13 += *((int *)((char *)ptr_result + 4));
 free(ptr_result);
 free(p[v12]);
 v12 += 1;
 } while (i != v12);
 }
 else
 {
 v14 = 0;
 v13 = 0;
 addr = ptr3;
 }
 }
 else
 {
LABEL_403569:
 v14 = 0;
 v13 = 0;
 }
 free(p);
 free(addr);
 return (!(v0 * 150 ^ v13) && !(v0 * 100 ^ v14) ? 42 : 4294967293);
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_thread_local_storage at 0x4035f0
unsigned long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x4035fa
int test_thread_concurrency()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 puts(&g_4043ee);
 printf(&g_404306, param_pthread_create(7) & 4294967295);
 printf(&g_404322, param_pthread_join() & 4294967295);
 printf(&g_40433f, param_mutex_lock(4, 1000) & 4294967295);
 printf(&g_40435b, param_condition_variable() & 4294967295);
 printf(&g_404377, param_atomic_ops(4, 500) & 4294967295);
 return printf(&g_404393, param_thread_local_storage(4) & 4294967295);
}


// Function: main at 0x4036a4
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


