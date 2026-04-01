// Angr Decompilation of 6_clang_O3_no_g
// Platform: AMD64

#define _GNU_SOURCE
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/syscall.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#include <pthread.h>
#include <stdatomic.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>

/* Ensure fileno is available - fileno is declared in stdio.h */

/* Define missing global variables */
volatile unsigned int signal_number = 0;
volatile unsigned int signal_received = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int shared_counter = 0;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
char data = 0;
char ready = 0;
char consumer_ready = 0;
atomic_uint atomic_counter = ATOMIC_VAR_INIT(0);
__thread unsigned int tls_value = 0;
__thread char tls_str[32];

/* Define missing extern variables */
unsigned long long g_407008 = 0;
unsigned long long g_407010 = 0;
unsigned long long ** (*g_406fe0)() = NULL;

/* Forward declarations */
void signal_handler(int sig);
long long param_strcpy(char *a0, char *a1);
unsigned long long param_strcmp(void);
long long param_strlen(void);
int param_memcpy(void);
unsigned long long param_memcmp(void);
int param_printf(unsigned int a0, const char *a1);
unsigned long long param_scanf(void);
unsigned long long param_fopen_fclose(void);
unsigned long long param_fread_fwrite(char *a0);
unsigned int param_malloc_free(unsigned long j);
unsigned int param_memset(void);
long long param_strchr_strstr(void);
unsigned int param_linux_syscall(void);
unsigned long long param_win32_api(void);
unsigned long long param_fork_exec(void);
unsigned long long param_pipe_communication(void);
unsigned long long param_socket_create(void);
unsigned int param_shmget_shmat(void);
unsigned long long param_signal_handling(void);
unsigned int param_pthread_create(void);
unsigned int param_pthread_join(void);
unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1);
unsigned long long param_condition_variable(void);
unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1);
unsigned long long param_thread_local_storage(unsigned int a0);
void * thread_compute(void *a0);
void * thread_sum(void *ptr_arg);
void * thread_increment(void *ptr_arg);
void * consumer_thread(void *arg);
void * producer_thread(void *arg);
void * thread_atomic_increment(void *ptr_arg);
void * thread_atomic_load_store(void *arg);
void * thread_tls_test(void *a0);
long long call_strcpy(void);
unsigned long long call_strcmp(void);
unsigned long long call_strlen(void);
unsigned long long call_memcpy(void);
unsigned long long call_memcmp(void);
int call_printf(void);
unsigned long long call_scanf(void);
unsigned int call_fopen_fclose(void);
unsigned long long call_fread_fwrite(void);
unsigned long long call_malloc_free(void);
unsigned long long call_memset(void);
unsigned long long call_strchr_strstr(void);
unsigned int call_linux_syscall(void);
unsigned long long call_win32_api(void);
unsigned long long call_fork_exec(void);
unsigned long long call_pipe_communication(void);
unsigned long long call_socket_create(void);
unsigned int call_shmget_shmat(void);
unsigned long long call_signal_handling(void);
unsigned int call_pthread_create(void);
unsigned int call_pthread_join(void);
unsigned long long call_mutex_lock(void);
unsigned long long call_condition_variable(void);
unsigned long long call_atomic_ops(void);
unsigned long long call_thread_local_storage(void);

/* Global string literals */
char g_404127[] = "strcpy result: %d\n";
char g_404142[] = "strcmp result: %d\n";
char g_40415d[] = "strlen result: %d\n";
char g_404179[] = "memcpy result: %d\n";
char g_404195[] = "memcmp result: %d\n";
char g_4041b1[] = "printf result: %d\n";
char g_4041cd[] = "scanf result: %d\n";
char g_4041ea[] = "fopen/fclose result: %d\n";
char g_404206[] = "fwrite/fread result: %d\n";
char g_404222[] = "malloc/free result: %d\n";
char g_40423e[] = "memset result: %d\n";
char g_404259[] = "strchr/strstr result: %d\n";
char g_4042a8[] = "syscall result: %d\n";
char g_4042c4[] = "stat result: %d\n";
char g_4042e0[] = "fork/exec result: %d\n";
char g_4042fc[] = "pipe result: %d\n";
char g_404318[] = "socket result: %d\n";
char g_404334[] = "shm result: %d\n";
char g_404350[] = "signal result: %d\n";
char g_404376[] = "thread_compute result: %d\n";
char g_404392[] = "thread_join result: %d\n";
char g_4043af[] = "mutex_lock result: %d\n";
char g_4043cb[] = "condition_variable result: %d\n";
char g_4043e7[] = "atomic_ops result: %d\n";
char g_404403[] = "thread_local_storage result: %d\n";
char g_40441f[] = "=== Testing Standard Library Functions ===";
char g_404443[] = "=== Testing System Calls ===";
char g_40445e[] = "=== Testing Thread Concurrency ===";

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_8;
} struct_0;

extern unsigned long long ** (*g_406fe0)();

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = 0;
 if (g_406fe0)
 v1 = *g_406fe0();
 return v1;
}


// Function: sub_402020 at 0x402020
extern unsigned long long g_407008;
extern unsigned long long g_407010;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_407008;
 /* goto g_407010; - invalid goto to variable, removed */
 (void)v0;
}


// Function: sub_40202c at 0x40202c
int sub_40202c()
{
 unsigned int v1 = SIGTERM; // edi

 return raise(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4023e5 at 0x4023e5
void sub_4023e5()
{
 /* Unsupported jumpkind removed */
 __builtin_trap();
}


// Function: sub_4023e6 at 0x4023e6
void sub_4023e6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones(void) {}

// Function: sub_402419 at 0x402419
void sub_402419()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */
void register_tm_clones(void) {}

// Function: sub_402459 at 0x402459
void sub_402459()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
void __do_global_dtors_aux(void) {}

// Function: sub_402495 at 0x402495
void sub_402495()
{
}


// Function: sub_402499 at 0x402499
void sub_402499()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy(void) {}



// Function: sub_4024a9 at 0x4024a9
void sub_4024a9(unsigned long a0)
{
 (void)a0;
 param_strcpy(NULL, NULL);
 return;
}


// Function: param_strcpy at 0x4024b0
long long param_strcpy(char *a0, char *a1)
{
 strcpy(a0, a1);
 return strlen(a0);
}


// Function: sub_4024c2 at 0x4024c2
void sub_4024c2()
{
 call_strcpy();
 return;
}


// Function: call_strcpy at 0x4024d0
long long call_strcpy()
{
 char v0[8]; // [bp-0x28]
 char result; // [bp-0x20]

 strncpy(v0, "HelloLib", 8);
 result = 0;
 return strlen(&v0);
}


// Function: sub_4024f4 at 0x4024f4
void sub_4024f4()
{
 param_strcmp();
 return;
}


// Function: param_strcmp at 0x402500
unsigned long long param_strcmp()
{
 return 0;
}


// Function: sub_40251b at 0x40251b
void sub_40251b()
{
 call_strcmp();
 return;
}


// Function: call_strcmp at 0x402520
unsigned long long call_strcmp()
{
 return 0;
}


// Function: sub_402523 at 0x402523
void sub_402523()
{
 param_strlen();
 return;
}


// Function: param_strlen at 0x402530
long long param_strlen()
{
 char *v1 = ""; // rdi

 return strlen(v1);
}


// Function: sub_402535 at 0x402535
void sub_402535()
{
 call_strlen();
 return;
}


// Function: call_strlen at 0x402540
unsigned long long call_strlen()
{
 return 12;
}


// Function: sub_402546 at 0x402546
void sub_402546(unsigned long a0, unsigned long a1, unsigned long long a2)
{
 param_memcpy();
 return;
}


// Function: param_memcpy at 0x402550
int param_memcpy(void* a0, void* a1, unsigned long n)
{
 (void)a0;
 (void)a1;
 (void)n;
 return 90;
}


// Function: sub_40255d at 0x40255d
void sub_40255d()
{
 call_memcpy();
 return;
}


// Function: call_memcpy at 0x402560
unsigned long long call_memcpy()
{
 return 90;
}


// Function: sub_402566 at 0x402566
void sub_402566()
{
 param_memcmp();
 return;
}


// Function: param_memcmp at 0x402570
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2)
{
 (void)a0;
 (void)a1;
 (void)a2;
 return 4294967295;
}


// Function: sub_40258b at 0x40258b
void sub_40258b()
{
 call_memcmp();
 return;
}


// Function: call_memcmp at 0x402590
unsigned long long call_memcmp()
{
 return 4294967295;
}


// Function: sub_402596 at 0x402596
void sub_402596(unsigned long a0, unsigned long a1)
{
 param_printf((unsigned int)a0, a1);
 return;
}


// Function: param_printf at 0x4025a0
int param_printf(unsigned int a0, const char *a1)
{
 return printf("Value: %d, Name: %s\n", a0, a1 ? a1 : "(null)");
}


// Function: sub_4025b3 at 0x4025b3
void sub_4025b3()
{
 call_printf();
 return;
}


// Function: call_printf at 0x4025c0
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


// Function: sub_4025da at 0x4025da
void sub_4025da()
{
 param_scanf();
 return;
}


// Function: param_scanf at 0x4025e0
unsigned long long param_scanf()
{
 unsigned long v0 = 0; // [bp-0x8]
 unsigned long v1 = 0;

 if (sscanf("123,456", "%d,%d", (int*)&v0, (int*)&v1) != 2)
 return 4294967295;
 return (int)v0 + (int)v1;
}


// Function: sub_40260b at 0x40260b
void sub_40260b()
{
 call_scanf();
 return;
}


// Function: call_scanf at 0x402610
unsigned long long call_scanf()
{
 unsigned long v0 = 0; // [bp-0x8]
 unsigned long v1 = 0;

 if (sscanf("123,456", "%d,%d", (int*)&v0, (int*)&v1) != 2)
 return 4294967295;
 return (int)v0 + (int)v1;
}


// Function: sub_402642 at 0x402642
void sub_402642()
{
 param_fopen_fclose();
 return;
}


// Function: param_fopen_fclose at 0x402650

unsigned long long param_fopen_fclose()
{
 FILE *fp; // rax
 int v4; // eax

 fp = fopen("/etc/passwd", "r");
 if (!fp)
 return 4294967295;
 v4 = fileno(fp);
 fclose(fp);
 return v4 >> 31 | 42;
}


// Function: sub_40268e at 0x40268e
void sub_40268e()
{
 call_fopen_fclose();
 return;
}


// Function: call_fopen_fclose at 0x402690
unsigned int call_fopen_fclose()
{
 FILE *fp; // rax
 int v4; // eax

 fp = fopen("/etc/passwd", "r");
 if (!fp)
 return 4294967295;
 v4 = fileno(fp);
 fclose(fp);
 return v4 >> 31 | 42;
}


// Function: sub_4026d8 at 0x4026d8
void sub_4026d8(unsigned long a0)
{
 param_fread_fwrite();
 return;
}


// Function: param_fread_fwrite at 0x4026e0
unsigned long long param_fread_fwrite(char *a0)
{
 FILE *fp; // rax
 FILE *v4; // rbx
 size_t count; // rax
 unsigned long long v6; // rax
 char v0[32];
 (void)a0;
 a0 = "/tmp/binbench_test_tmp";

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
 count = fread(v0, 1, 18, v4);
 if (count < 32) v0[count] = 0;
 fclose(v4);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 v6 = 42;
 return v6;
}


// Function: sub_4027b7 at 0x4027b7
void sub_4027b7()
{
 call_fread_fwrite();
 return;
}


// Function: call_fread_fwrite at 0x4027c0
unsigned long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_4027cc at 0x4027cc
void sub_4027cc(unsigned long a0)
{
 param_malloc_free();
 return;
}


// Function: param_malloc_free at 0x4027d0
unsigned int param_malloc_free(unsigned long j)
{
 (void)j;
 return 90;
}


// Function: sub_402947 at 0x402947
void sub_402947()
{
 call_malloc_free();
 return;
}


// Function: call_malloc_free at 0x402950
unsigned long long call_malloc_free()
{
 return 90;
}


// Function: sub_402956 at 0x402956
void sub_402956(void* a0, unsigned long n)
{
 param_memset();
 return;
}


// Function: param_memset at 0x402960
unsigned int param_memset(void* a0, int c, int n)
{
 (void)a0;
 (void)c;
 (void)n;
 return 0;
}


// Function: sub_402a97 at 0x402a97
void sub_402a97()
{
 call_memset();
 return;
}


// Function: call_memset at 0x402aa0
unsigned long long call_memset()
{
 return 0;
}


// Function: sub_402aa3 at 0x402aa3
void sub_402aa3()
{
 param_strchr_strstr();
 return;
}


// Function: param_strchr_strstr at 0x402ab0
long long param_strchr_strstr()
{
 return 15;
}


// Function: sub_402ae9 at 0x402ae9
void sub_402ae9()
{
 call_strchr_strstr();
 return;
}


// Function: call_strchr_strstr at 0x402af0
unsigned long long call_strchr_strstr()
{
 return 15;
}


// Function: sub_402af6 at 0x402af6
void sub_402af6()
{
 test_standard_library_functions();
 return;
}


// Function: test_standard_library_functions at 0x402b00
int test_standard_library_functions()
{
 unsigned int v5; // ebp
 void* fp; // rax
 unsigned int v9; // eax
 unsigned int v0; // [bp-0x3c]
 unsigned int v1_val; // [bp-0x38]
 char v1[8]; // [bp-0x30]
 char result; // [bp-0x28]

 puts(&g_40441f);
 strncpy(v1, "HelloLib", 8);
 result = 0;
 printf(&g_404127, strlen(&v1) & 4294967295);
 printf(&g_404142, 0);
 printf(&g_40415d, 12);
 printf(&g_404179, 90);
 v5 = 4294967295;
 printf(&g_404195, 4294967295);
 printf(&g_4041b1, printf("Value: %d, Name: %s\n", 42, "Test") & 4294967295);
 printf(&g_4041cd, (sscanf("123,456", "%d,%d", (int*)&v0, (int*)&v1_val) != 2 ? 4294967295 : v0 + v1_val));
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 v9 = fileno(fp);
 fclose(fp);
 v5 = v9 >> 31 | 42;
 }
 printf(&g_4041ea, v5);
 printf(&g_404206, param_fread_fwrite("/tmp/binbench_test_tmp") & 4294967295);
 printf(&g_404222, 90);
 printf(&g_40423e, 0);
 return printf(&g_404259, 15);
}


// Function: sub_402c8f at 0x402c8f
void sub_402c8f(unsigned long a0)
{
 param_linux_syscall();
 return;
}


// Function: param_linux_syscall at 0x402c90
unsigned int param_linux_syscall()
{
 unsigned int v3; // ebx

 v3 = syscall(SYS_open, "/dev/null", O_RDONLY);
 if ((int)v3 >= 0)
 syscall(SYS_close, v3);
 else
 v3 = -errno;
 return v3 >> 31 | 42;
}


// Function: sub_402ccf at 0x402ccf
void sub_402ccf()
{
 call_linux_syscall();
 return;
}


// Function: call_linux_syscall at 0x402cd0
unsigned int call_linux_syscall()
{
 unsigned int v3; // ebx

 v3 = syscall(SYS_open, "/dev/null", O_RDONLY);
 if ((int)v3 >= 0)
 syscall(SYS_close, v3);
 else
 v3 = -errno;
 return v3 >> 31 | 42;
}


// Function: sub_402d19 at 0x402d19
void sub_402d19()
{
 param_win32_api();
 return;
}


// Function: param_win32_api at 0x402d20
unsigned long long param_win32_api()
{
 unsigned int v2; // eax
 struct stat v0; // [bp-0x60]

 v2 = stat("/etc/passwd", &v0);
 return (v2 >= 0 ? (0 < v0.st_size ? 42 : 4294967294) : 4294967295);
}


// Function: sub_402d56 at 0x402d56
void sub_402d56()
{
 call_win32_api();
 return;
}


// Function: call_win32_api at 0x402d60
unsigned long long call_win32_api()
{
 unsigned int v3; // eax
 struct stat v0; // [bp-0x90]

 v3 = stat("/etc/passwd", &v0);
 return (v3 >= 0 ? (0 < v0.st_size ? 42 : 4294967294) : 4294967295);
}


// Function: sub_402d9d at 0x402d9d
void sub_402d9d(unsigned long a0, unsigned long a1)
{
 param_fork_exec();
 return;
}


// Function: param_fork_exec at 0x402da0
unsigned long long param_fork_exec()
{
 unsigned int result; // eax
 int v0;

 result = fork();
 if (result < 0)
 {
 return 4294967295;
 }
 else if (!result)
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (waitpid(result, &v0, 0) < 0)
 {
 return 4294967295;
 }
 else if (((char)v0 & 127))
 {
 return 4294967295;
 }
 else
 {
 return -(0 < (v0 & 0xff00)) | 42;
 }
}


// Function: sub_402e1e at 0x402e1e
void sub_402e1e()
{
 call_fork_exec();
 return;
}


// Function: call_fork_exec at 0x402e20
unsigned long long call_fork_exec()
{
 unsigned int result; // eax
 int v0;

 result = fork();
 if (result < 0)
 {
 return 4294967295;
 }
 else if (!result)
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (waitpid(result, &v0, 0) < 0)
 {
 return 4294967295;
 }
 else if (((char)v0 & 127))
 {
 return 4294967295;
 }
 else
 {
 return -(0 < (v0 & 0xff00)) | 42;
 }
}


// Function: sub_402e8a at 0x402e8a
void sub_402e8a()
{
 param_pipe_communication();
 return;
}


// Function: param_pipe_communication at 0x402e90
unsigned long long param_pipe_communication()
{
 unsigned int result; // eax
 unsigned long long count; // rax
 int pipefd[2];
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
 (&v2)[count] = 0;
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


// Function: sub_402f3c at 0x402f3c
void sub_402f3c()
{
 call_pipe_communication();
 return;
}


// Function: call_pipe_communication at 0x402f40
unsigned long long call_pipe_communication()
{
 return param_pipe_communication();
}


// Function: sub_402f45 at 0x402f45
void sub_402f45()
{
 param_socket_create();
 return;
}


// Function: param_socket_create at 0x402f50
unsigned long long param_socket_create()
{
 unsigned int v4; // eax
 unsigned int v5; // ebx
 unsigned int v6; // eax
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
 if (bind(v5, (struct sockaddr *)&v1, 16) < 0)
 {
 close(v5);
 return 4294967293;
 }
 v6 = listen(v5, 5);
 close(v5);
 return (v6 < 0 ? 0xfffffffc : 42);
}


// Function: sub_403019 at 0x403019
void sub_403019()
{
 call_socket_create();
 return;
}


// Function: call_socket_create at 0x403020
unsigned long long call_socket_create()
{
 return param_socket_create();
}


// Function: sub_403025 at 0x403025
void sub_403025()
{
 param_shmget_shmat();
 return;
}


// Function: param_shmget_shmat at 0x403030
typedef struct struct_shm_data {
 unsigned long long field_0;
 unsigned long long field_5;
} struct_shm_data;

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
 v6 = strlen(ptr);
 shmdt(ptr);
 shmctl(v3, 0, 0);
 return v6;
}


// Function: sub_4030f1 at 0x4030f1
void sub_4030f1()
{
 call_shmget_shmat();
 return;
}


// Function: call_shmget_shmat at 0x403100
unsigned int call_shmget_shmat()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 if (param_shmget_shmat() <= 0)
 return 4294967295;
 return 42;
}


// Function: sub_403117 at 0x403117
void sub_403117()
{
 param_signal_handling();
 return;
}


// Function: param_signal_handling at 0x403120
unsigned long long param_signal_handling()
{
 unsigned int v1; // ebx
 unsigned int v2; // ebx
 unsigned int v3; // ebx
 unsigned int v4; // ebx
 unsigned int v5; // ebx
 unsigned int v6; // ebx

 if (signal(10, signal_handler) == SIG_ERR)
 {
 return 4294967295;
 }
 else if (signal(14, signal_handler) != SIG_ERR)
 {
 signal_received = 0;
 raise(10);
 if (!signal_received)
 {
 v1 = 1000;
 do
 {
 v2 = v1;
 usleep(1000);
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
 usleep(1000);
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


// Function: sub_40324a at 0x40324a
void sub_40324a(unsigned long a0)
{
 signal_handler((int)a0);
 return;
}


// Function: signal_handler at 0x403250
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = (unsigned int)sig;
 return;
}


// Function: sub_403261 at 0x403261
void sub_403261()
{
 call_signal_handling();
 return;
}


// Function: call_signal_handling at 0x403270
unsigned long long call_signal_handling()
{
 return param_signal_handling();
}


// Function: sub_403275 at 0x403275
void sub_403275()
{
 test_system_calls();
 return;
}


// Function: test_system_calls at 0x403280
int test_system_calls()
{
 unsigned int v3; // ebx
 unsigned int v4; // eax
 unsigned int result; // eax
 unsigned long long v6; // rsi
 int v0[12]; // [bp-0xa0]
 struct stat v1; // [bp-0x70]

 puts(&g_404443);
 v3 = syscall(SYS_open, "/dev/null", O_RDONLY);
 if ((int)v3 >= 0)
 syscall(SYS_close, v3);
 else
 v3 = -errno;
 printf(&g_4042a8, v3 >> 31 | 42);
 v4 = stat("/etc/passwd", &v1);
 printf(&g_4042c4, (v4 < 0 ? 4294967295 : (0 < v1.st_size ? 42 : 4294967294)));
 result = fork();
 v6 = 4294967295;
 if (result >= 0)
 {
 if (!result)
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (waitpid(result, v0, 0) < 0 || ((char)v0[0] & 127))
 {
 v6 = 4294967295;
 }
 else
 {
 v6 = -(0 < (v0[0] & 0xff00)) | 42;
 }
 }
 printf(&g_4042e0, v6);
 printf(&g_4042fc, param_pipe_communication() & 4294967295);
 printf(&g_404318, param_socket_create() & 4294967295);
 printf(&g_404334, (param_shmget_shmat() > 0 ? 42 : 4294967295));
 return printf(&g_404350, param_signal_handling() & 4294967295);
}


// Function: sub_4033ef at 0x4033ef
void sub_4033ef(unsigned long a0)
{
 thread_compute((void *)a0);
 return;
}


// Function: thread_compute at 0x4033f0
void * thread_compute(void *a0)
{
 unsigned int *ptr; // rax
 unsigned int *arg = (unsigned int *)a0;

 ptr = malloc(4);
 *(ptr) = *(arg) * *(arg);
 return ptr;
}


// Function: sub_403404 at 0x403404
void sub_403404(unsigned long a0)
{
 param_pthread_create();
 return;
}


// Function: param_pthread_create at 0x403410
unsigned int param_pthread_create()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int *v1; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]
 unsigned int result;

 v0 = 7;
 if (!(int)pthread_create(&v2, 0, (void* (*)(void*))thread_compute, &v0))
 {
 pthread_join(v2, (void**)&v1);
 if (v1) {
 result = *(v1);
 free(v1);
 return result;
 }
 free(v1);
 }
 return 4294967295;
}


// Function: sub_403465 at 0x403465
void sub_403465()
{
 call_pthread_create();
 return;
}


// Function: call_pthread_create at 0x403470
unsigned int call_pthread_create()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int *v1; // [bp-0x18], Other Possible Types: char
 pthread_t v2; // [bp-0x10]
 unsigned int result;

 v0 = 7;
 if (!(int)pthread_create(&v2, 0, (void* (*)(void*))thread_compute, &v0))
 {
 pthread_join(v2, (void**)&v1);
 if (v1) {
 result = *(v1);
 free(v1);
 return result;
 }
 free(v1);
 }
 return 4294967295;
}


// Function: sub_4034c9 at 0x4034c9
void sub_4034c9(unsigned long a0)
{
 thread_sum((void *)a0);
 return;
}


// Function: thread_sum at 0x4034d0
void * thread_sum(void *ptr_arg)
{
 unsigned int *ptr = (unsigned int *)ptr_arg;
 unsigned int v1; // r8d
 unsigned long v2; // rdx
 unsigned int v3; // eax

 ptr[2] = 0;
 v1 = *(ptr);
 v2 = ptr[1];
 v3 = v2;
 if (v3 >= v1)
 ptr[2] = (v3 - v1) * (v1 + 1) + v1 + (unsigned int)((v2 + ~(v1)) * (v3 - v1) >> 1);
 return NULL;
}


// Function: sub_403504 at 0x403504
void sub_403504()
{
 param_pthread_join();
 return;
}


// Function: param_pthread_join at 0x403510
unsigned int param_pthread_join()
{
 unsigned long long v1; // [bp-0x68]
 unsigned long long v2; // [bp-0x60]
 unsigned long long v3; // [bp-0x5c]
 unsigned long long v4; // [bp-0x58]
 unsigned long long v5; // [bp-0x54]
 unsigned long v6; // [bp-0x50]
 char v7; // [bp-0x48]
 pthread_t v8;
 pthread_t v9;
 pthread_t v10;

 memset(&v1, 0, 36);
 v1 = 42949672961;
 v3 = 11;
 v4 = 20;
 v6 = 128849018901;
 v5 = 0;
 v2 = 0;
 if ((int)pthread_create(&v8, 0, (void* (*)(void*))thread_sum, &v1))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v9, 0, (void* (*)(void*))thread_sum, &v3))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v10, 0, (void* (*)(void*))thread_sum, &v6))
 {
 return 4294967295;
 }
 else if ((int)pthread_join(v8, 0))
 {
 return 4294967294;
 }
 else if ((int)pthread_join(v9, 0))
 {
 return 4294967294;
 }
 else if (!(int)pthread_join(v10, 0))
 {
 return v5 + v2;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_403602 at 0x403602
void sub_403602()
{
 call_pthread_join();
 return;
}


// Function: call_pthread_join at 0x403610
unsigned int call_pthread_join()
{
 return param_pthread_join();
}


// Function: sub_403615 at 0x403615
void sub_403615(unsigned long a0)
{
 thread_increment((void *)a0);
 return;
}


// Function: thread_increment at 0x403620
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;

void * thread_increment(void *ptr_arg)
{
 unsigned int *ptr = (unsigned int *)ptr_arg;
 unsigned long long v2; // rax
 unsigned int v3; // ebp
 unsigned int v4; // ebp
 unsigned int v5; // ebp
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v3 = *(ptr);
 if (v3 <= 0)
 return NULL;
 do
 {
 v4 = v3;
 pthread_mutex_lock((pthread_mutex_t*)&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t*)&counter_mutex);
 usleep(1000);
 v5 = v4 - 1;
 v3 = v5;
 } while (v4 + 4294967295);
 return NULL;
}


// Function: sub_40365f at 0x40365f
void sub_40365f(unsigned long a0, unsigned long a1)
{
 param_mutex_lock();
 return;
}


// Function: param_mutex_lock at 0x403660
unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned long v3; // rax
 unsigned int v4; // r14d
 void* ptr; // rax
 void* ptr2; // rbx
 unsigned long i; // r12
 unsigned long long v8; // r14
 unsigned long v9; // rbp
 unsigned long long v10; // rax
 unsigned int v0; // [bp-0x38], Other Possible Types: unsigned long
 unsigned int v1; // [bp-0x34]

 (void)a0;
 (void)a1;
 v0 = 1000;
 v4 = 4;
 ptr = malloc(v4 * 8);
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 shared_counter = 0;
 if (v4 > 0)
 {
 v1 = v4;
 i = v4;
 v8 = 0;
 do
 {
 if ((int)pthread_create((pthread_t*)((char *)ptr + v8), 0, (void* (*)(void*))thread_increment, &v0))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v8 += 8, i * 8 != v8));
 v4 = v1;
 if (v4 > 0)
 {
 v9 = 0;
 do
 {
 pthread_join(*((pthread_t*)((char *)ptr + 8 * v9)), 0);
 v9 += 1;
 } while (i != v9);
 }
 }
 free(ptr);
 if (shared_counter == v0 * v4)
 v10 = 42;
 else
 v10 = 4294967293;
 return v10;
}


// Function: sub_40374c at 0x40374c
void sub_40374c()
{
 call_mutex_lock();
 return;
}


// Function: call_mutex_lock at 0x403750
unsigned long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_40375f at 0x40375f
void sub_40375f()
{
 consumer_thread(NULL);
 return;
}


// Function: consumer_thread at 0x403760
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern char data;
extern char consumer_ready;

void * consumer_thread(void *arg)
{
 (void)arg;
 unsigned long long v2; // rax
 unsigned int *ptr; // rax

 pthread_mutex_lock((pthread_mutex_t*)&cond_mutex);
 if (!consumer_ready)
 {
 do
 {
 pthread_cond_wait((pthread_cond_t*)&cond, (pthread_mutex_t*)&cond_mutex);
 } while (consumer_ready != 1);
 }
 pthread_mutex_unlock((pthread_mutex_t*)&cond_mutex);
 ptr = malloc(4);
 *(ptr) = (!data ? 0 : 42);
 return ptr;
}


// Function: sub_4037d5 at 0x4037d5
void sub_4037d5()
{
 producer_thread(NULL);
 return;
}


// Function: producer_thread at 0x4037e0
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern char data;
extern char ready;

void * producer_thread(void *arg)
{
 (void)arg;
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t*)&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t*)&cond);
 pthread_mutex_unlock((pthread_mutex_t*)&cond_mutex);
 return NULL;
}


// Function: param_condition_variable at 0x403820
unsigned long long param_condition_variable()
{
 pthread_t v0;
 unsigned int *v1;
 unsigned int result;
 pthread_t v2;

 ready = 0;
 data = 0;
 if ((int)pthread_create(&v0, 0, consumer_thread, 0))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v2, 0, producer_thread, 0))
 {
 pthread_cancel(v0);
 return 4294967294;
 }
 else
 {
 pthread_join(v0, (void**)&v1);
 pthread_join(v2, 0);
 result = *(v1);
 free(v1);
 return result;
 }
}


// Function: sub_4038b8 at 0x4038b8
void sub_4038b8()
{
 call_condition_variable();
 return;
}


// Function: call_condition_variable at 0x4038c0
unsigned long long call_condition_variable()
{
 return param_condition_variable();
}


// Function: sub_4038c5 at 0x4038c5
void sub_4038c5(unsigned long a0)
{
 thread_atomic_increment((void *)a0);
 return;
}


// Function: thread_atomic_increment at 0x4038d0
extern atomic_uint atomic_counter;

void * thread_atomic_increment(void *ptr_arg)
{
 unsigned int *ptr = (unsigned int *)ptr_arg;
 unsigned int v1; // esi
 unsigned int result; // edx
 unsigned int i; // ecx
 unsigned int expected_val;

 v1 = *(ptr);
 if (v1 <= 0)
 return NULL;
 result = v1 & 3;
 i = 0;
 if (v1 - 1 >= 3)
 {
 i = 0;
 do
 {
 atomic_fetch_add(&atomic_counter, 1);
 expected_val = i + 1000;
 atomic_compare_exchange_strong(&atomic_counter, (_Atomic unsigned int *)&expected_val, i);
 atomic_fetch_add(&atomic_counter, 1);
 expected_val = i + 1001;
 atomic_compare_exchange_strong(&atomic_counter, (_Atomic unsigned int *)&expected_val, i + 1);
 atomic_fetch_add(&atomic_counter, 1);
 expected_val = i + 1002;
 atomic_compare_exchange_strong(&atomic_counter, (_Atomic unsigned int *)&expected_val, i + 2);
 atomic_fetch_add(&atomic_counter, 1);
 expected_val = i + 1003;
 atomic_compare_exchange_strong(&atomic_counter, (_Atomic unsigned int *)&expected_val, i + 3);
 i += 4;
 } while (i != (v1 & 0xfffffffc));
 }
 if (!result)
 return NULL;
 do
 {
 atomic_fetch_add(&atomic_counter, 1);
 expected_val = i + 1000;
 atomic_compare_exchange_strong(&atomic_counter, (_Atomic unsigned int *)&expected_val, i);
 i += 1;
 result -= 1;
 } while (result + 4294967295);
 return NULL;
}


// Function: sub_403983 at 0x403983
void sub_403983()
{
 thread_atomic_load_store(NULL);
 return;
}


// Function: thread_atomic_load_store at 0x403990
extern atomic_uint atomic_counter;

void * thread_atomic_load_store(void *arg)
{
 (void)arg;
 atomic_exchange(&atomic_counter, atomic_load(&atomic_counter) + 100);
 return NULL;
}


// Function: sub_4039a2 at 0x4039a2
void sub_4039a2(unsigned long a0, unsigned long a1)
{
 param_atomic_ops();
 return;
}


// Function: param_atomic_ops at 0x4039b0
unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 void* ptr; // rax
 void* ptr2; // rbx
 unsigned long i; // r13
 unsigned long long v7; // r14
 unsigned long v8; // rbp
 unsigned int v0; // [bp-0x40]
 pthread_t v2;

 v0 = a0;
 ptr = malloc(a0 * 8);
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 atomic_exchange(&atomic_counter, 0);
 i = a0;
 if (a0 > 0)
 {
 v7 = 0;
 do
 {
 if ((int)pthread_create((pthread_t*)((char *)ptr + v7), 0, (void* (*)(void*))thread_atomic_increment, &a1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v7 += 8, i * 8 != v7));
 }
 if (!(int)pthread_create(&v2, 0, (void* (*)(void*))thread_atomic_load_store, 0))
 pthread_join(v2, 0);
 if (v0 > 0)
 {
 v8 = 0;
 do
 {
 pthread_join(*((pthread_t*)((char *)ptr + 8 * v8)), 0);
 v8 += 1;
 } while (i != v8);
 }
 free(ptr);
 return (atomic_load(&atomic_counter) > 0 ? 42 : 4294967293);
}


// Function: sub_403ab6 at 0x403ab6
void sub_403ab6()
{
 call_atomic_ops();
 return;
}


// Function: call_atomic_ops at 0x403ac0
unsigned long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


// Function: sub_403acf at 0x403acf
void sub_403acf(unsigned long a0)
{
 thread_tls_test((void *)a0);
 return;
}


// Function: thread_tls_test at 0x403ad0
void * thread_tls_test(void *a0)
{
 char *str = (char *)a0;
 unsigned int v4;
 unsigned int v5;
 unsigned long long *ptr;

 v4 = tls_value;
 v5 = v4 + 50;
 tls_value = v5;
 strncpy(tls_str, str, 31);
 tls_str[31] = 0;
 ptr = malloc(sizeof(unsigned long long) * 2);
 if (ptr) {
 ptr[0] = v4;
 ptr[1] = v5;
 }
 return ptr;
}


// Function: sub_403b19 at 0x403b19
void sub_403b19(unsigned long a0)
{
 param_thread_local_storage();
 return;
}


// Function: param_thread_local_storage at 0x403b20
unsigned long long param_thread_local_storage(unsigned int a0)
{
 unsigned long long v4; // rbx
 void* addr; // r14
 unsigned int v14; // ebx
 unsigned long v15; // rbx
 unsigned long long v16; // rax
 void* p; // r13
 unsigned long i; // r12
 unsigned long idx; // rbx
 char *ptr; // rax
 void* v10; // rbx
 unsigned long j; // r14
 unsigned long v12; // rbp
 unsigned int v13; // r15d
 unsigned int v0; // [bp-0x44]
 void* ptr3; // [bp-0x40]
 void *thread_ptr; // [bp-0x38]

 v4 = a0 * 8;
 addr = malloc(v4);
 p = malloc(v4);
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
 *((char **)((char *)p + 8 * idx)) = ptr;
 snprintf(ptr, 16, "Thread-%d", idx & 4294967295);
 idx += 1;
 } while (i != idx);
 if (a0 <= 0)
 goto LABEL_403c43;
 v10 = addr;
 j = 0;
 ptr3 = v10;
 do
 {
 if ((int)pthread_create((pthread_t*)v10, 0, (void* (*)(void*))thread_tls_test, *((void **)((char *)p + 8 * j))))
 {
 v15 = 0;
 do
 {
 free(*((void **)((char *)p + 8 * v15)));
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
 pthread_join(*((pthread_t*)((char *)addr + 8 * v12)), &thread_ptr);
 v14 += *((unsigned int *)thread_ptr);
 v13 += *((unsigned int *)thread_ptr + 1);
 free(thread_ptr);
 free(*((void **)((char *)p + 8 * v12)));
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
LABEL_403c43:
 v14 = 0;
 v13 = 0;
 }
 free(p);
 free(addr);
 if (!(v0 * 150 ^ v13) && !(v0 * 100 ^ v14))
 v16 = 42;
 else
 v16 = 4294967293;
 return v16;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_403cd8 at 0x403cd8
void sub_403cd8()
{
 call_thread_local_storage();
 return;
}


// Function: call_thread_local_storage at 0x403ce0
unsigned long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: sub_403cea at 0x403cea
void sub_403cea()
{
 test_thread_concurrency();
 return;
}


// Function: test_thread_concurrency at 0x403cf0
int test_thread_concurrency()
{
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x1c]
 unsigned int *ptr; // [bp-0x18], Other Possible Types: char
 pthread_t v2;

 puts(&g_40445e);
 v0 = 7;
 v4 = 4294967295;
 if (!(int)pthread_create(&v2, 0, (void* (*)(void*))thread_compute, &v0))
 {
 pthread_join(v2, (void**)&ptr);
 v4 = *(ptr);
 free(ptr);
 }
 printf(&g_404376, v4);
 printf(&g_404392, param_pthread_join() & 4294967295);
 printf(&g_4043af, param_mutex_lock(4, 1000) & 4294967295);
 printf(&g_4043cb, param_condition_variable() & 4294967295);
 printf(&g_4043e7, param_atomic_ops(4, 500) & 4294967295);
 return printf(&g_404403, param_thread_local_storage(4) & 4294967295);
}


// Function: sub_403ddd at 0x403ddd
void sub_403ddd()
{
 main();
 return;
}


// Function: main at 0x403de0
int main()
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


