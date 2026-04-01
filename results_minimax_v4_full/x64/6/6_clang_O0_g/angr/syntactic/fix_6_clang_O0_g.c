// Angr Decompilation of 6_clang_O0_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <signal.h>
#include <netinet/in.h>
#include <errno.h>
#include <stdatomic.h>

/* Forward declarations for utility functions */
unsigned int call_strcmp();
int call_strcpy();
unsigned long long call_strlen();
int call_memcmp();
int call_memcpy();
int call_printf();
int call_scanf();
unsigned long long call_fopen_fclose();
unsigned int call_fread_fwrite();
int call_malloc_free();
int call_memset();
unsigned long long call_strchr_strstr();
int call_pthread_create();
int call_pthread_join();
unsigned long long call_linux_syscall();
int call_win32_api();
unsigned long long call_fork_exec();
int call_pipe_communication();
int call_socket_create();
unsigned long long call_shmget_shmat();
int call_signal_handling();
int call_mutex_lock();
int call_condition_variable();
int call_atomic_ops();
int call_thread_local_storage();
int test_standard_library_functions();
int test_system_calls();
int test_thread_concurrency();

/* Forward declarations for param functions */
long long param_strcpy(char *a0, char *a1);
int param_strcmp(char *a0, char *a1);
long long param_strlen(char *a0);
long long param_memcpy(void* a0, void* a1, unsigned long n);
unsigned int param_memcmp(void* a0, void* a1, unsigned long a2);
int param_printf(unsigned int a0, unsigned long a1);
unsigned int param_scanf(char *a0);
unsigned int param_fopen_fclose(char *a0);
unsigned int param_fread_fwrite(char *a0);
unsigned int param_malloc_free(unsigned long long a0);
unsigned int param_memset(char *a0, unsigned long n);
unsigned long long param_strchr_strstr(char *a0, char a1, char *a2);
unsigned int param_linux_syscall(unsigned long long a0);
unsigned int param_win32_api(unsigned long long a0);
unsigned int param_fork_exec(char *a0, unsigned long long a1);
unsigned int param_pipe_communication();
unsigned int param_socket_create();
unsigned int param_shmget_shmat();
unsigned int param_signal_handling();
unsigned int param_pthread_create(unsigned int a0);
unsigned int param_pthread_join();
unsigned int param_mutex_lock(unsigned int a0, unsigned int a1);
unsigned int param_condition_variable();
unsigned int param_atomic_ops(unsigned int a0, unsigned int a1);
unsigned int param_thread_local_storage(unsigned int a0);

/* Thread function forward declarations */
void * thread_compute(void *p);
void * thread_sum(void *ptr);
void * thread_increment(void *ptr);
void * consumer_thread(void *a0);
void * producer_thread(void *a0);
void * thread_atomic_increment(void *ptr);
void * thread_atomic_load_store(void *a0);
void * thread_tls_test(void *a0);
int signal_handler(int a0);

/* Global variables */
_Atomic unsigned int signal_number = 0;
_Atomic unsigned int signal_received = 0;
_Atomic unsigned int atomic_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int data = 0;
unsigned int ready = 0;
unsigned int shared_counter = 0;

/* CRT stub function _init - empty stub */
void _init()
{
}


// Function: sub_402020 at 0x402020
extern unsigned long long g_408008;
extern unsigned long long g_408010;

void sub_402020()
{
 unsigned long long v0; // [bp-0x8]

 v0 = g_408008;
 // Original: goto g_408010; - fixed to avoid invalid goto
 (void)v0;
}


// Function: sub_40202c at 0x40202c
int sub_40202c()
{
 unsigned int v1; // edi

 return raise(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4023e5 at 0x4023e5
void sub_4023e5()
{
 // Empty stub - original contained unsupported operation
}


// Function: sub_4023e6 at 0x4023e6
void sub_4023e6()
{
 // Stub function - original CRT function removed
 return;
}



// Function: sub_402419 at 0x402419
void sub_402419()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones - empty stub */
void __attribute__((weak)) register_tm_clones(void)
{
}



// Function: sub_402459 at 0x402459
void sub_402459()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux - empty stub */
void __do_global_dtors_aux()
{
}



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



/* CRT stub function frame_dummy - empty stub */
void frame_dummy()
{
}



// Function: sub_4024a9 at 0x4024a9
void sub_4024a9(unsigned long a0, unsigned long a1)
{
 call_strcpy();
 return;
}


// Function: param_strcpy at 0x4024b0
long long param_strcpy(char *a0, char *a1)
{
 strcpy(a0, a1);
 return strlen(a0);
}


// Function: sub_4024dc at 0x4024dc
void sub_4024dc()
{
 call_strcpy();
 return;
}


// Function: call_strcpy at 0x4024e0
unsigned int call_strcpy()
{
 unsigned int v0; // [bp-0x2c]
 char v1[32]; // [bp-0x28]

 v0 = (unsigned int)param_strcpy(&v1, "HelloLib");
 return v0;
}


// Function: sub_402504 at 0x402504
void sub_402504(unsigned long a0, unsigned long a1)
{
 param_strcmp();
 return;
}


// Function: param_strcmp at 0x402510
int param_strcmp(char *a0, char *a1)
{
 int v0; // [bp-0x20]
 int v1; // [bp-0x1c]

 v1 = strcmp(a0, a1);
 if (v1 <= 0)
 {
 v0 = (v1 < 0 ? -1 : 0);
 return v0;
 }
 v0 = 1;
 return v0;
}


// Function: sub_402563 at 0x402563
void sub_402563()
{
 call_strcmp();
 return;
}


// Function: call_strcmp at 0x402570
unsigned int call_strcmp()
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 v0 = param_strcmp("bbb", "aaa");
 return v2 + v1 + v0;
}


// Function: sub_4025c5 at 0x4025c5
void sub_4025c5(unsigned long a0)
{
 param_strlen();
 return;
}


// Function: param_strlen at 0x4025d0
long long param_strlen(char *a0)
{
 unsigned long len; // [bp-0x18]

 len = strlen(a0);
 return (long long)len;
}


// Function: sub_4025f3 at 0x4025f3
void sub_4025f3()
{
 call_strlen();
 return;
}


// Function: call_strlen at 0x402600
unsigned long long call_strlen()
{
 char *v0; // [bp-0x10]

 v0 = "BinBench2025";
 return param_strlen(v0);
}


// Function: sub_402622 at 0x402622
void sub_402622(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_memcpy();
 return;
}


// Function: param_memcpy at 0x402630
long long param_memcpy(void* a0, void* a1, unsigned long n)
{
 memcpy(a0, a1, n);
 return n;
}


// Function: sub_40265f at 0x40265f
void sub_40265f()
{
 call_memcpy();
 return;
}


// Function: call_memcpy at 0x402660
int call_memcpy()
{
 char v0; // [bp-0x48]
 char v1; // [bp-0x40]
 char v2; // [bp-0x38]
 unsigned long v3; // [bp-0x28]
 unsigned long long v4; // [bp-0x20]
 unsigned int v5; // [bp-0x18]

 v3 = 85899345930;
 v4 = 171798691870;
 v5 = 50;
 memset(&v0, 0, 20);
 param_memcpy(&v0, &v3, 20);
 return *((int *)&v0) + *((int *)&v1) + *((int *)&v2);
}


// Function: sub_4026b8 at 0x4026b8
void sub_4026b8(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_memcmp();
 return;
}


// Function: param_memcmp at 0x4026c0
unsigned int param_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]

 v1 = memcmp(a0, a1, a2);
 if (v1 <= 0)
 {
 v0 = (v1 < 0 ? 4294967295 : 0);
 return v0;
 }
 v0 = 1;
 return v0;
}


// Function: sub_40271b at 0x40271b
void sub_40271b()
{
 call_memcmp();
 return;
}


// Function: call_memcmp at 0x402720
int call_memcmp()
{
 unsigned int v0; // [bp-0x34]
 unsigned int v1; // [bp-0x30]
 unsigned long v2; // [bp-0x2c]
 unsigned int v3; // [bp-0x24]
 unsigned long v4; // [bp-0x20]
 unsigned int v5; // [bp-0x18]
 unsigned long v6; // [bp-0x14]
 unsigned int v7; // [bp-0xc]

 v6 = 8589934593;
 v7 = 3;
 v4 = 8589934593;
 v5 = 4;
 v2 = 8589934593;
 v3 = 3;
 v1 = param_memcmp(&v6, &v4, 12);
 v0 = param_memcmp(&v6, &v2, 12);
 return v1 + v0;
}


// Function: sub_40279a at 0x40279a
void sub_40279a(unsigned long a0, unsigned long a1)
{
 param_printf();
 return;
}


// Function: param_printf at 0x4027a0
int param_printf(unsigned int a0, unsigned long a1)
{
 unsigned int v0; // [bp-0x1c]

 v0 = printf("Value: %d, Name: %s\n", a0, a1);
 return v0;
}


// Function: call_printf at 0x4027d0
int call_printf()
{
 unsigned int v0; // [bp-0xc]

 v0 = param_printf(42, "Test");
 return v0;
}


// Function: sub_4027f5 at 0x4027f5
void sub_4027f5(unsigned long a0)
{
 param_scanf();
 return;
}


// Function: param_scanf at 0x402800
unsigned int param_scanf(char *a0)
{
 unsigned int v0; // [bp-0x24]
 char v1; // [bp-0x20], Other Possible Types: unsigned int
 char v2; // [bp-0x1c], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0xc]

 v0 = __isoc99_sscanf(a0, "%d,%d", &v2, &v1);
 v3 = (v0 == 2 ? v2 + v1 : 4294967295);
 return v3;
}


// Function: sub_402851 at 0x402851
void sub_402851()
{
 call_scanf();
 return;
}


// Function: call_scanf at 0x402860
int call_scanf()
{
 return param_scanf("123,456");
}


// Function: sub_402872 at 0x402872
void sub_402872(unsigned long a0)
{
 param_fopen_fclose();
 return;
}


// Function: param_fopen_fclose at 0x402880
unsigned int param_fopen_fclose(char *a0)
{
 unsigned int v0; // [bp-0x24]
 FILE *fp; // [bp-0x20]
 unsigned int v2; // [bp-0xc]

 fp = fopen(a0, "r");
 if (fp)
 {
 v0 = fileno(fp);
 fclose(fp);
 v2 = v0;
 return v2;
 }
 v2 = 4294967295;
 return v2;
}


// Function: sub_4028db at 0x4028db
void sub_4028db()
{
 call_fopen_fclose();
 return;
}


// Function: call_fopen_fclose at 0x4028e0
unsigned long long call_fopen_fclose()
{
 unsigned int v0; // [bp-0xc]

 v0 = param_fopen_fclose("/etc/passwd");
 return (0 <= v0 ? 42 : 4294967295);
}


// Function: param_fread_fwrite at 0x402910
unsigned int param_fread_fwrite(char *a0)
{
 char v0; // [bp-0x71]
 void* v1; // [bp-0x70]
 unsigned long v2; // [bp-0x68]
 unsigned long count; // [bp-0x60]
 unsigned long count2; // [bp-0x58]
 void* fp; // [bp-0x50]
 char v6; // [bp-0x48]
 void* v7; // [bp-0x20]
 unsigned int v8; // [bp-0xc]

 v7 = "BinBench Test Data";
 fp = fopen(a0, "w+");
 if (!fp)
 {
 v8 = 4294967295;
 return v8;
 }
 v1 = v7;
 count = fwrite(v1, 1, strlen(v7), fp);
 v2 = count;
 if (v2 != strlen(v7))
 {
 fclose(fp);
 v8 = 4294967294;
 return v8;
 }
 rewind(fp);
 count = fread(&v6, 1, count, fp);
 (&v6)[count] = 0;
 fclose(fp);
 unlink(a0);
 v0 = 0;
 if (count == count)
 v0 = !strcmp(&v6, v7);
 v8 = ((v0 & 1) ? 42 : 4294967293);
 return v8;
}


// Function: sub_402a38 at 0x402a38
void sub_402a38()
{
 call_fread_fwrite();
 return;
}


// Function: call_fread_fwrite at 0x402a40
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_402a52 at 0x402a52
void sub_402a52(unsigned long a0)
{
 param_malloc_free();
 return;
}


// Function: param_malloc_free at 0x402a60
unsigned int param_malloc_free(unsigned long long a0)
{
 unsigned int v0; // [bp-0x2c]
 unsigned long long idx; // [bp-0x28]
 unsigned int *ptr; // [bp-0x20], Other Possible Types: unsigned long long
 unsigned int v3; // [bp-0xc]

 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 for (idx = 0; idx < a0; idx += 1)
 {
 ptr[idx] = (unsigned int)idx * 10;
 }
 v0 = *(ptr) + ptr[1 + a0];
 free(ptr);
 ptr = 0;
 v3 = v0;
 return v3;
}


// Function: sub_402b05 at 0x402b05
void sub_402b05()
{
 call_malloc_free();
 return;
}


// Function: call_malloc_free at 0x402b10
int call_malloc_free()
{
 return param_malloc_free(10);
}


// Function: param_memset at 0x402b20
unsigned int param_memset(char *a0, unsigned long n)
{
 unsigned long i; // [bp-0x30]
 unsigned int v1; // [bp-0x24]

 memset(a0, 0, n);
 v1 = 0;
 for (i = 0; i < n; i += 1)
 {
 v1 += a0[i];
 }
 return v1;
}


// Function: call_memset at 0x402b90
int call_memset()
{
 unsigned int i; // [bp-0x3c]
 char v1[36]; // [bp-0x38]
 char v2; // [bp-0x14]

 for (i = 0; i < 10; i += 1)
 {
 *((unsigned int *)&v1[4 * i]) = 255;
 }
 param_memset(&v1, 40);
 return *((int *)&v1[0]) + *((int *)&v2);
}


// Function: sub_402bdd at 0x402bdd
void sub_402bdd(unsigned long a0, char a1, unsigned long a2)
{
 param_strchr_strstr();
 return;
}


// Function: param_strchr_strstr at 0x402be0
unsigned long long param_strchr_strstr(char *a0, char a1, char *a2)
{
 unsigned long long v0; // [bp-0x50]
 unsigned long long v1; // [bp-0x48]
 unsigned int v2; // [bp-0x3c]
 unsigned long long ptr; // [bp-0x38]
 unsigned int v4; // [bp-0x2c]
 unsigned long long ptr2; // [bp-0x28]

 ptr = strchr(a0, a1);
 v1 = (!ptr ? 18446744073709551615ULL : ptr - a0);
 v4 = v1;
 ptr = strstr(a0, a2);
 v0 = (!ptr ? 18446744073709551615ULL : ptr - a0);
 v2 = v0;
 return v4 + v2;
}


// Function: call_strchr_strstr at 0x402c90
unsigned long long call_strchr_strstr()
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]

 v1 = "Hello BinBench Test";
 v0 = param_strchr_strstr(v1, 66, "Bench");
 return v0;
}


// Function: sub_402cc4 at 0x402cc4
void sub_402cc4()
{
 test_standard_library_functions();
 return;
}


// Function: test_standard_library_functions at 0x402cd0
extern char g_4050a6;
extern char g_4050cb;
extern char g_4050e6;
extern char g_405101;
extern char g_40511d;
extern char g_405139;
extern char g_405155;
extern char g_405171;
extern char g_40518e;
extern char g_4051aa;
extern char g_4051c6;
extern char g_4051e2;
extern char g_4051fd;

int test_standard_library_functions()
{
 printf(&g_4050a6);
 printf(&g_4050cb, call_strcpy() & 4294967295);
 printf(&g_4050e6, call_strcmp() & 4294967295);
 printf(&g_405101, call_strlen() & 4294967295);
 printf(&g_40511d, call_memcpy() & 4294967295);
 printf(&g_405139, call_memcmp() & 4294967295);
 printf(&g_405155, call_printf() & 4294967295);
 printf(&g_405171, call_scanf() & 4294967295);
 printf(&g_40518e, call_fopen_fclose() & 4294967295);
 printf(&g_4051aa, call_fread_fwrite() & 4294967295);
 printf(&g_4051c6, call_malloc_free() & 4294967295);
 printf(&g_4051e2, call_memset() & 4294967295);
 return printf(&g_4051fd, call_strchr_strstr() & 4294967295);
}


// Function: param_linux_syscall at 0x402de0
int param_linux_syscall(unsigned long long a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned long long v1; // [bp-0x18]
 unsigned int v2; // [bp-0xc]

 v1 = a0;
 v0 = syscall(2);
 if (v0 >= 0)
 {
 syscall(3);
 v2 = v0;
 return v2;
 }
 v2 = -(*(__errno_location()));
 return v2;
}


// Function: sub_402e3d at 0x402e3d
void sub_402e3d()
{
 call_linux_syscall();
 return;
}


// Function: call_linux_syscall at 0x402e40
unsigned long long call_linux_syscall()
{
 unsigned int v0; // [bp-0xc]

 v0 = param_linux_syscall("/etc/passwd");
 return (0 <= v0 ? 42 : 4294967295);
}


// Function: param_win32_api at 0x402e70
unsigned int param_win32_api(unsigned long long a0)
{
 char v0; // [bp-0xa8]
 unsigned long long v1; // [bp-0x78]
 unsigned int v2; // [bp-0xc]

 if ((int)stat(a0, &v0) >= 0)
 {
 v2 = (0 < v1 ? 42 : 4294967294);
 return v2;
 }
 v2 = 4294967295;
 return v2;
}


// Function: sub_402ec8 at 0x402ec8
void sub_402ec8()
{
 call_win32_api();
 return;
}


// Function: call_win32_api at 0x402ed0
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


// Function: sub_402ee2 at 0x402ee2
void sub_402ee2(unsigned long a0, unsigned long a1)
{
 param_fork_exec();
 return;
}


// Function: param_fork_exec at 0x402ef0
unsigned int param_fork_exec(char *a0, unsigned long long a1)
{
 unsigned int v0; // [bp-0x2c]
 unsigned int v1[1]; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned long long v3; // [bp-0x20]
 unsigned int v4; // [bp-0xc]

 v3 = a1;
 result = fork();
 if (result < 0)
 {
 v4 = 4294967295;
 return v4;
 }
 else if (!result)
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 else
 {
 v0 = waitpid(result, &v1, 0);
 v4 = (v0 < 0 ? 4294967294 : (!(*(v1) & 127) ? (*(v1) & 0xff00) >> 8 : 4294967293));
 return v4;
 }
}


// Function: sub_402fa2 at 0x402fa2
void sub_402fa2()
{
 call_fork_exec();
 return;
}


// Function: call_fork_exec at 0x402fb0
unsigned long long call_fork_exec()
{
 unsigned int v0; // [bp-0xc]

 v0 = param_fork_exec("/bin/true", 0);
 return (!v0 ? 42 : 4294967295);
}


// Function: sub_402fe4 at 0x402fe4
void sub_402fe4()
{
 param_pipe_communication();
 return;
}


// Function: param_pipe_communication at 0x402ff0
unsigned int param_pipe_communication()
{
 unsigned int v0; // [bp-0x5c]
 void* v1; // [bp-0x58]
 unsigned long long count; // [bp-0x50]
 void* v3; // [bp-0x48]
 unsigned int result; // [bp-0x3c]
 char v5; // [bp-0x38]
 char v6; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int v7; // [bp-0x10]
 unsigned int v8; // [bp-0xc]

 if (pipe(&v6) < 0)
 {
 v8 = 4294967295;
 return v8;
 }
 result = fork();
 if (result < 0)
 {
 v8 = 4294967294;
 return v8;
 }
 else if (!result)
 {
 close(v6);
 v3 = "HelloPipe";
 v0 = v7;
 v1 = v3;
 write(v0, v1, strlen(v3));
 close(v7);
 _exit(0); /* do not return */
 }
 else
 {
 close(v7);
 count = read(v6, &v5, 31);
 (&v5)[count] = 0;
 close(v6);
 wait(NULL);
 v8 = (0 < count ? 42 : 4294967293);
 return v8;
 }
}


// Function: sub_4030de at 0x4030de
void sub_4030de()
{
 call_pipe_communication();
 return;
}


// Function: call_pipe_communication at 0x4030e0
int call_pipe_communication()
{
 return param_pipe_communication();
}


// Function: sub_4030eb at 0x4030eb
void sub_4030eb()
{
 param_socket_create();
 return;
}


// Function: param_socket_create at 0x4030f0
typedef struct sockaddr {
 unsigned short sin_family;
 char sa_data[14];
} sockaddr;

unsigned int param_socket_create()
{
 sockaddr v0; // [bp-0x28]
 unsigned int result; // [bp-0x14]
 unsigned int v5; // [bp-0x10]
 unsigned int v6; // [bp-0xc]

 v5 = socket(2, 1, 0);
 if (v5 < 0)
 {
 v6 = 4294967295;
 return v6;
 }
 result = 1;
 if (setsockopt(v5, 1, 2, &result, 4) < 0)
 {
 close(v5);
 v6 = 4294967294;
 return v6;
 }
 memset(&v0, 0, 16);
 v0.sin_family = 2;
 *((unsigned short *)&v0.sa_data[0]) = htons(0);
 *((unsigned int *)&v0.sa_data[2]) = 0;
 if (bind(v5, &v0, 16) < 0)
 {
 close(v5);
 v6 = 4294967293;
 return v6;
 }
 else if (listen(v5, 5) < 0)
 {
 close(v5);
 v6 = 0xfffffffc;
 return v6;
 }
 else
 {
 close(v5);
 v6 = 42;
 return v6;
 }
}


// Function: sub_4031fa at 0x4031fa
void sub_4031fa()
{
 call_socket_create();
 return;
}


// Function: call_socket_create at 0x403200
int call_socket_create()
{
 return param_socket_create();
}


// Function: sub_40320b at 0x40320b
void sub_40320b()
{
 param_shmget_shmat();
 return;
}


// Function: param_shmget_shmat at 0x403210
unsigned int param_shmget_shmat()
{
 unsigned int v0; // [bp-0x34]
 char *v1; // [bp-0x30]
 unsigned int v2; // [bp-0x24]
 unsigned int v3; // [bp-0x20]
 unsigned int v4; // [bp-0x1c]
 char *v5; // [bp-0x18]
 unsigned int v6; // [bp-0xc]

 v5 = "/tmp/binbench_shm";
 v4 = open(v5, 66, 438);
 if (v4 < 0)
 {
 v6 = 4294967295;
 return v6;
 }
 close(v4);
 v3 = ftok("/tmp/binbench_shm", 42);
 if (v3 < 0)
 {
 v6 = 4294967295;
 return v6;
 }
 v2 = shmget(v3, 0x1000, 950);
 if (v2 < 0)
 {
 v6 = 4294967294;
 return v6;
 }
 v1 = shmat(v2, 0, 0);
 if (v1 != 0xffffffffffffffff)
 {
 strcpy(v1, "SharedMemory");
 v0 = strlen(v1);
 shmdt(v1);
 shmctl(v2, 0, 0);
 v6 = v0;
 return v6;
 }
 v6 = 4294967293;
 return v6;
}


// Function: sub_40331f at 0x40331f
void sub_40331f()
{
 call_shmget_shmat();
 return;
}


// Function: call_shmget_shmat at 0x403320
unsigned long long call_shmget_shmat()
{
 unsigned int v0; // [bp-0xc]

 v0 = param_shmget_shmat();
 return (0 < v0 ? 42 : 4294967295);
}


// Function: sub_403349 at 0x403349
void sub_403349()
{
 param_signal_handling();
 return;
}


// Function: param_signal_handling at 0x403350
extern _Atomic unsigned int signal_number;
extern _Atomic unsigned int signal_received;

unsigned int param_signal_handling()
{
 unsigned int v5; // eax
 unsigned int v6; // eax
 char v0; // [bp-0x12]
 char v1; // [bp-0x11]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 if (signal(10, signal_handler) == 18446744073709551615)
 {
 v3 = 4294967295;
 return v3;
 }
 else if (signal(14, signal_handler) == 18446744073709551615)
 {
 v3 = 4294967294;
 return v3;
 }
 else
 {
 signal_received = 0;
 raise(10);
 v2 = 1000;
 while (true)
 {
 v1 = 0;
 if (!signal_received)
 {
 v5 = v2;
 v2 = v5 - 1;
 v1 = 0 < v5;
 }
 if (!(v1 & 1))
 break;
 usleep(1000);
 }
 if (!signal_received)
 {
 v3 = 4294967293;
 return v3;
 }
 else if (signal_number != 10)
 {
 v3 = 0xfffffffc;
 return v3;
 }
 else
 {
 signal_received = 0;
 alarm(1);
 v2 = 2000;
 while (true)
 {
 v0 = 0;
 if (!signal_received)
 {
 v6 = v2;
 v2 = v6 - 1;
 v0 = 0 < v6;
 }
 if (!(v0 & 1))
 break;
 usleep(1000);
 }
 if (signal_received && signal_number == 14)
 {
 signal(10, NULL);
 signal(14, NULL);
 v3 = 42;
 return v3;
 }
 v3 = 4294967291;
 return v3;
 }
 }
}


// Function: sub_403502 at 0x403502
void sub_403502(unsigned long a0)
{
 signal_handler();
 return;
}


// Function: signal_handler at 0x403510
int signal_handler(int a0)
{
 signal_received = 1;
 signal_number = (unsigned int)a0;
 return a0;
}


// Function: sub_40352c at 0x40352c
void sub_40352c()
{
 call_signal_handling();
 return;
}


// Function: call_signal_handling at 0x403530
int call_signal_handling()
{
 return param_signal_handling();
}


// Function: sub_40353b at 0x40353b
void sub_40353b()
{
 test_system_calls();
 return;
}


// Function: test_system_calls at 0x403540
extern char g_40524c;
extern char g_405268;
extern char g_405284;
extern char g_4052a0;
extern char g_4052bc;
extern char g_4052d8;
extern char g_4052f4;
extern char g_405310;

int test_system_calls()
{
 printf(&g_40524c);
 printf(&g_405268, call_linux_syscall() & 4294967295);
 printf(&g_405284, call_win32_api() & 4294967295);
 printf(&g_4052a0, call_fork_exec() & 4294967295);
 printf(&g_4052bc, call_pipe_communication() & 4294967295);
 printf(&g_4052d8, call_socket_create() & 4294967295);
 printf(&g_4052f4, call_shmget_shmat() & 4294967295);
 return printf(&g_405310, call_signal_handling() & 4294967295);
}


// Function: sub_4035e7 at 0x4035e7
void sub_4035e7(unsigned long a0)
{
 thread_compute();
 return;
}


// Function: thread_compute at 0x4035f0
void * thread_compute(void *p)
{
 unsigned int *ptr; // [bp-0x28]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]

 v2 = *(unsigned int *)p;
 v1 = v2 * v2;
 ptr = malloc(4);
 *(ptr) = v1;
 return ptr;
}


// Function: sub_403638 at 0x403638
void sub_403638(unsigned long a0)
{
 param_pthread_create();
 return;
}


// Function: param_pthread_create at 0x403640
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int v0; // [bp-0x30]
 unsigned int result; // [bp-0x2c]
 unsigned int *ptr; // [bp-0x28], Other Possible Types: char
 unsigned int v3; // [bp-0x1c]
 char v4; // [bp-0x18], Other Possible Types: unsigned long long
 unsigned int v5; // [bp-0xc]

 v3 = a0;
 result = pthread_create(&v4, 0, thread_compute, &v3);
 if (!result)
 {
 pthread_join(v4, &ptr);
 v0 = *(ptr);
 free(ptr);
 v5 = v0;
 return v5;
 }
 v5 = 4294967295;
 return v5;
}


// Function: call_pthread_create at 0x4036b0
int call_pthread_create()
{
 return param_pthread_create(7);
}


// Function: thread_sum at 0x4036c0
void * thread_sum(void *ptr)
{
 unsigned int i; // [bp-0x1c]
 unsigned int *p = (unsigned int *)ptr;

 p[2] = 0;
 for (i = *(p); i <= p[1]; i += 1)
 {
 p[2] = i + p[2];
 }
 return 0;
}


// Function: sub_403713 at 0x403713
void sub_403713()
{
 param_pthread_join();
 return;
}


// Function: param_pthread_join at 0x403720
unsigned int param_pthread_join()
{
 unsigned int j; // [bp-0x64]
 unsigned int v1; // [bp-0x60]
 unsigned int i; // [bp-0x5c]
 unsigned int v3[10]; // [bp-0x58]
 unsigned int v5; // [bp-0x54]
 unsigned int v13[3]; // [bp-0x50]
 unsigned int v6; // [bp-0x4c]
 unsigned int v7; // [bp-0x48]
 unsigned int v8; // [bp-0x40]
 unsigned int v9; // [bp-0x3c]
 pthread_t v10[3]; // [bp-0x28]
 unsigned int v11; // [bp-0xc]

 memset(v3, 0, sizeof(v3));
 v3[0] = 1;
 v5 = 10;
 v6 = 11;
 v7 = 20;
 v8 = 21;
 v9 = 30;
 for (i = 0; i < 3; i += 1)
 {
 if ((int)pthread_create(&v10[i], 0, thread_sum, &v3[i * 3]))
 {
 v11 = 4294967295;
 return v11;
 }
 }
 v1 = 0;
 for (j = 0; j < 3; j += 1)
 {
 if ((int)pthread_join(v10[j], 0))
 {
 v11 = 4294967294;
 return v11;
 }
 v1 += v13[j];
 }
 v11 = v1;
 return v11;
}


// Function: sub_40383d at 0x40383d
void sub_40383d()
{
 call_pthread_join();
 return;
}


// Function: call_pthread_join at 0x403840
int call_pthread_join()
{
 return param_pthread_join();
}


// Function: sub_40384b at 0x40384b
void sub_40384b(unsigned long a0)
{
 thread_increment();
 return;
}


// Function: thread_increment at 0x403850
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;

void * thread_increment(void *ptr)
{
 unsigned int i; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = *(unsigned int *)ptr;
 for (i = 0; i < v1; i += 1)
 {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return 0;
}


// Function: sub_4038bf at 0x4038bf
void sub_4038bf(unsigned long a0, unsigned long a1)
{
 param_mutex_lock();
 return;
}


// Function: param_mutex_lock at 0x4038c0
extern unsigned int shared_counter;

unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x2c]
 unsigned int j; // [bp-0x28]
 unsigned int i; // [bp-0x24]
 unsigned int *ptr; // [bp-0x20]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0xc]

 v4 = a1;
 ptr = malloc(a0 * 8);
 if (!ptr)
 {
 v5 = 4294967295;
 return v5;
 }
 shared_counter = 0;
 for (i = 0; i < a0; i += 1)
 {
 if ((int)pthread_create(&ptr[2 * i], 0, thread_increment, &v4))
 {
 free(ptr);
 v5 = 4294967294;
 return v5;
 }
 }
 for (j = 0; j < a0; j += 1)
 {
 pthread_join(*((long long *)&ptr[2 * j]), 0);
 }
 free(ptr);
 v0 = v4 * a0;
 v5 = (shared_counter == v0 ? 42 : 4294967293);
 return v5;
}


// Function: sub_4039d4 at 0x4039d4
void sub_4039d4()
{
 call_mutex_lock();
 return;
}


// Function: call_mutex_lock at 0x4039e0
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_4039f5 at 0x4039f5
void sub_4039f5(unsigned long a0)
{
 consumer_thread();
 return;
}


// Function: consumer_thread at 0x403a00
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern unsigned int data;
extern unsigned int ready;

void * consumer_thread(void *a0)
{
 unsigned int *ptr; // [bp-0x20]
 unsigned int v1; // [bp-0x14]
 unsigned long long v2; // [bp-0x10]

 v2 = a0;
 pthread_mutex_lock(&cond_mutex);
 while (((ready ^ 255) & 1))
 {
 pthread_cond_wait(&cond, &cond_mutex);
 }
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = v1;
 return ptr;
}


// Function: sub_403a7f at 0x403a7f
void sub_403a7f(unsigned long a0)
{
 producer_thread();
 return;
}


// Function: producer_thread at 0x403a80
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern unsigned int data;
extern unsigned int ready;

void * producer_thread(void *a0)
{
 unsigned long long v0; // [bp-0x10]

 v0 = a0;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: sub_403ad6 at 0x403ad6
void sub_403ad6()
{
 param_condition_variable();
 return;
}


// Function: param_condition_variable at 0x403ae0
extern unsigned int data;
extern unsigned int ready;

unsigned int param_condition_variable()
{
 unsigned int v0; // [bp-0x2c]
 unsigned int *ptr; // [bp-0x28], Other Possible Types: char
 char v2; // [bp-0x20], Other Possible Types: unsigned long long
 char v3; // [bp-0x18], Other Possible Types: unsigned long long
 unsigned int v4; // [bp-0xc]

 ready = 0;
 data = 0;
 if ((int)pthread_create(&v2, 0, consumer_thread, 0))
 {
 v4 = 4294967295;
 return v4;
 }
 else if ((int)pthread_create(&v3, 0, producer_thread, 0))
 {
 pthread_cancel(v2);
 v4 = 4294967294;
 return v4;
 }
 else
 {
 pthread_join(v2, &ptr);
 pthread_join(v3, 0);
 v0 = *(ptr);
 free(ptr);
 v4 = v0;
 return v4;
 }
}


// Function: sub_403b98 at 0x403b98
void sub_403b98()
{
 call_condition_variable();
 return;
}


// Function: call_condition_variable at 0x403ba0
int call_condition_variable()
{
 return param_condition_variable();
}


// Function: sub_403bab at 0x403bab
void sub_403bab(unsigned long a0)
{
 thread_atomic_increment();
 return;
}


// Function: thread_atomic_increment at 0x403bb0
extern _Atomic unsigned int atomic_counter;

unsigned long long thread_atomic_increment(void *ptr)
{
 unsigned int *p = (unsigned int *)ptr;
 unsigned int current;
 unsigned int desired;
 char v0; // [bp-0x35]
 unsigned int v1; // [bp-0x34]
 char v2; // [bp-0x2d]
 unsigned int v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 unsigned int v5; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 unsigned int result; // [bp-0x1c]
 unsigned int i; // [bp-0x18]
 unsigned int v9; // [bp-0x14]

 v9 = *(p);
 for (i = 0; i < v9; i += 1)
 {
 result = 1;
 atomic_fetch_add(&atomic_counter, result);
 v6 = atomic_counter;
 v5 = i;
 v4 = i + 1000;
 v3 = v4;
 current = v5;
 desired = v3;
 atomic_compare_exchange_strong(&atomic_counter, &current, desired);
 v0 = current == desired;
 v1 = (current == desired ? current : desired);
 if (current != desired)
 v5 = v1;
 v2 = v0 & 1;
 }
 return 0;
}


// Function: sub_403c41 at 0x403c41
void sub_403c41(unsigned long a0)
{
 thread_atomic_load_store();
 return;
}


// Function: thread_atomic_load_store at 0x403c50
extern _Atomic unsigned int atomic_counter;
_Atomic unsigned int shared_counter;

void * thread_atomic_load_store(void *a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 v1 = atomic_counter;
 v2 = v1;
 v0 = v2 + 100;
 atomic_exchange(&atomic_counter, v0);
 return 0;
}


// Function: sub_403c7d at 0x403c7d
void sub_403c7d(unsigned long a0, unsigned long a1)
{
 param_atomic_ops();
 return;
}


// Function: param_atomic_ops at 0x403c80
extern _Atomic unsigned int atomic_counter;
_Atomic unsigned int shared_counter;

unsigned int param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x3c]
 unsigned int v1; // [bp-0x38]
 unsigned int j; // [bp-0x34]
 char v3; // [bp-0x30], Other Possible Types: unsigned long long
 unsigned int i; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int *ptr; // [bp-0x20]
 unsigned int v7; // [bp-0x14]
 unsigned int v8; // [bp-0xc]

 v7 = a1;
 ptr = malloc(a0 * 8);
 if (!ptr)
 {
 v8 = 4294967295;
 return v8;
 }
 result = 0;
 atomic_exchange(&atomic_counter, result);
 for (i = 0; i < a0; i += 1)
 {
 if ((int)pthread_create(&ptr[2 * i], 0, thread_atomic_increment, &v7))
 {
 free(ptr);
 v8 = 4294967294;
 return v8;
 }
 }
 if (!(int)pthread_create(&v3, 0, thread_atomic_load_store, 0))
 pthread_join(v3, 0);
 for (j = 0; j < a0; j += 1)
 {
 pthread_join(*((long long *)&ptr[2 * j]), 0);
 }
 v0 = atomic_counter;
 v1 = v0;
 free(ptr);
 v8 = (0 < v1 ? 42 : 4294967293);
 return v8;
}


// Function: sub_403dcc at 0x403dcc
void sub_403dcc()
{
 call_atomic_ops();
 return;
}


// Function: call_atomic_ops at 0x403dd0
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


// Function: sub_403de5 at 0x403de5
void sub_403de5(unsigned long a0)
{
 thread_tls_test();
 return;
}


// Function: thread_tls_test at 0x403df0
void * thread_tls_test(void *a0)
{
 void* p; // fs
 unsigned int *ptr; // [bp-0x28]
 unsigned int v1; // [bp-0x1c]

 ptr = malloc(8);
 v1 = (int)p[18446744073709551568];
 *((unsigned int *)&p[18446744073709551568]) = (int)p[18446744073709551568] + 50;
 strncpy(*((long long *)p) - 32, a0, 31);
 ptr[0] = v1;
 ptr[1] = (int)p[18446744073709551568];
 return ptr;
}


// Function: param_thread_local_storage at 0x403e70
unsigned int param_thread_local_storage(unsigned int a0)
{
 char v0; // [bp-0x51]
 unsigned int v1; // [bp-0x50]
 unsigned int v2; // [bp-0x4c]
 unsigned int ptr[2]; // [bp-0x48]
 unsigned int v4[2]; // [bp-0x40]
 char k; // [bp-0x38], Other Possible Types: unsigned int
 unsigned int v6; // [bp-0x34]
 unsigned int v7; // [bp-0x30]
 unsigned int l; // [bp-0x2c]
 unsigned int j; // [bp-0x28]
 unsigned int i; // [bp-0x24]
 unsigned int *p; // [bp-0x20]
 unsigned int *addr; // [bp-0x18]
 unsigned int v13; // [bp-0xc]

 addr = malloc(a0 * 8);
 p = malloc(a0 * 8);
 if (addr && p)
 {
 for (i = 0; i < a0; i += 1)
 {
 *((void* *)&p[2 * i]) = malloc(16);
 snprintf(*((long long *)&p[2 * i]), 16, "Thread-%d", i);
 }
 for (j = 0; j < a0; j += 1)
 {
 if ((int)pthread_create(&addr[2 * j], 0, thread_tls_test, *((long long *)&p[2 * j])))
 {
 for (l = 0; l <= j; l += 1)
 {
 free(*((long long *)&p[2 * l]));
 }
 free(p);
 free(addr);
 v13 = 4294967294;
 return v13;
 }
 }
 memset(&k, 0, 12);
 for (; k < a0; k += 1)
 {
 pthread_join(*((long long *)&addr[2 * k]), &v4);
 *((unsigned int *[2])&ptr[0]) = v4;
 v7 += ptr[0];
 v6 += ptr[1];
 free(ptr);
 free(*((long long *)&p[2 * k]));
 }
 free(p);
 free(addr);
 v2 = a0 * 100;
 v1 = a0 * 150;
 v0 = 0;
 if (v7 == v2)
 v0 = v6 == v1;
 v13 = ((v0 & 1) ? 42 : 4294967293);
 return v13;
 }
 v13 = 4294967295;
 return v13;
}


// Function: sub_4040a3 at 0x4040a3
void sub_4040a3()
{
 call_thread_local_storage();
 return;
}


// Function: call_thread_local_storage at 0x4040b0
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x4040c0
extern char g_405336;
extern char g_405355;
extern char g_405371;
extern char g_40538e;
extern char g_4053aa;
extern char g_4053c6;
extern char g_4053e2;

int test_thread_concurrency()
{
 printf(&g_405336);
 printf(&g_405355, call_pthread_create() & 4294967295);
 printf(&g_405371, call_pthread_join() & 4294967295);
 printf(&g_40538e, call_mutex_lock() & 4294967295);
 printf(&g_4053aa, call_condition_variable() & 4294967295);
 printf(&g_4053c6, call_atomic_ops() & 4294967295);
 return printf(&g_4053e2, call_thread_local_storage() & 4294967295);
}


// Function: sub_404152 at 0x404152
void sub_404152()
{
 main();
 return;
}


// Function: main at 0x404160
unsigned int main()
{
 unsigned int result; // [bp-0xc]

 result = 0;
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


