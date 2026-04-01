#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <signal.h>
#include <sys/shm.h>
#include <errno.h>
#include <sys/ipc.h>
#include <sys/syscall.h>
#include <stdarg.h>

// Forward declarations
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_5;
} struct_0;

// CRT stub functions - these are typically provided by the CRT
void deregister_tm_clones() { }
void register_tm_clones() { }
void __do_global_dtors_aux() { }
void frame_dummy() { }

// __isoc99_sscanf declaration (C99 compliant sscanf)
int __isoc99_sscanf(const char *str, const char *format, ...);

extern unsigned int signal_number;
extern unsigned int signal_received;
extern unsigned long long counter_mutex;
extern unsigned int shared_counter;
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern char data;
extern char ready;
extern char atomic_counter;

// String constants
extern char *g_4040b7;
extern char *g_4040d2;
extern char *g_4040ed;
extern char *g_404109;
extern char *g_404125;
extern char *g_404141;
extern char *g_40415d;
extern char *g_40417a;
extern char *g_404196;
extern char *g_4041b2;
extern char *g_4041ce;
extern char *g_4041e9;
extern char *g_404238;
extern char *g_404254;
extern char *g_404270;
extern char *g_40428c;
extern char *g_4042a8;
extern char *g_4042c4;
extern char *g_4042e0;
extern char *g_404306;
extern char *g_404322;
extern char *g_40433f;
extern char *g_40435b;
extern char *g_404377;
extern char *g_404393;
extern char *g_4043af;
extern char *g_4043d3;
extern char *g_4043ee;

// Function prototypes
void signal_handler(int a0);

// Global variables
// Note: 'i' is used as local in thread_increment, so we don't declare it globally here

// Angr Decompilation of 6_clang_Os_no_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */

extern struct_0 *g_406fe0;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_406fe0;
 if (g_406fe0)
 v1 = (unsigned long long *)g_406fe0;
 return v1;
}


// Function: sub_402020 at 0x402020

void sub_402020()
{
 // Variable was removed - original reference to g_407008 was invalid
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
 // Unsupported jumpkind Ijk_SigTRAP - adding return
 return;
}


// Function: sub_4023e6 at 0x4023e6
void sub_4023e6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_402419 at 0x402419
void sub_402419()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402459 at 0x402459
void sub_402459()
{
 __do_global_dtors_aux();
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
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_4024a9 at 0x4024a9
void sub_4024a9(unsigned long a0)
{
 // Function body was removed - original call to param_strcpy was invalid
 (void)a0;
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
long long param_strlen()
{
 char *v1; // rdi

 return strlen(v1);
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
 return 4294967295U;
}


// Function: param_printf at 0x40253d
int param_printf(unsigned int a0, unsigned long a1)
{
 return printf("Value: %d, Name: %s\n", a0, (char*)a1);
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
 return (__isoc99_sscanf(a0, "%d,%d", &v0, &v0) == 2 ? (int)v0 + v1 : 4294967295U);
}


// Function: call_scanf at 0x4025a2
unsigned long long call_scanf()
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
 return (__isoc99_sscanf("123,456", "%d,%d", &v0, &v0) == 2 ? (int)v0 + v1 : 4294967295U);
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
 return 4294967295U;
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
 return (unsigned int)((param_fopen_fclose("/etc/passwd") & 4294967295U) >> 31) | 42;
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
 return 4294967295U;
 v4 = fp;
 if (fwrite("BinBench Test Data", 1, 18, fp) != 18)
 {
 fclose((FILE*)v4);
 return 4294967294U;
 }
 rewind((FILE*)v4);
 count = fread(&v0, 1, 18, (FILE*)v4);
 (&v0)[count] = 0;
 fclose((FILE*)v4);
 unlink(a0);
 if (count != 18)
 return 4294967293U;
 if (1) // GetMSBs was incorrectly decompiled
 v6 = 42;
 else
 v6 = 4294967293U;
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
 return 4294967295U;
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
 return (unsigned int)v2;
}


// Function: call_memset at 0x4027a0
unsigned long long call_memset()
{
 return 0;
}


// Function: param_strchr_strstr at 0x4027a3
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 char *ptr1; // rax
 char *ptr2; // rax

 ptr1 = strchr(a0, a1);
 ptr2 = strstr(a0, a2);
 return (-(ptr1 < a0 + 1) | (unsigned int)((unsigned long long)ptr1 - (unsigned long long)a0)) + (-(ptr2 < a0 + 1) | (unsigned int)((unsigned long long)ptr2 - (unsigned long long)a0));
}


// Function: call_strchr_strstr at 0x4027dc
unsigned long long call_strchr_strstr()
{
 return 15;
}


// Function: test_standard_library_functions at 0x4027e2

int test_standard_library_functions()
{
 unsigned int v0 = 0; // [bp-0x3c]
 char v1[8]; // [bp-0x38]
 char result; // [bp-0x30]

 puts((char*)&g_4043af);
 strncpy(v1, "HelloLib", 8);
 result = 0;
 printf((char*)&g_4040b7, strlen(v1) & 4294967295U);
 printf((char*)&g_4040d2, 0);
 printf((char*)&g_4040ed, 12);
 printf((char*)&g_404109, 90);
 printf((char*)&g_404125, call_memcmp() & 4294967295U);
 printf((char*)&g_404141, printf("Value: %d, Name: %s\n", 42, "Test") & 4294967295U);
 printf((char*)&g_40415d, (__isoc99_sscanf("123,456", "%d,%d", &v0, (int*)&v1[0]) == 2 ? v0 + *((int *)&v1[0]) : 4294967295U));
 printf((char*)&g_40417a, (unsigned int)param_fopen_fclose("/etc/passwd") >> 31 | 42);
 printf((char*)&g_404196, param_fread_fwrite("/tmp/binbench_test_tmp") & 4294967295U);
 printf((char*)&g_4041b2, param_malloc_free(10) & 4294967295U);
 printf((char*)&g_4041ce, 0);
 return printf((char*)&g_4041e9, 15);
}


// Function: param_linux_syscall at 0x40295b
unsigned int param_linux_syscall(unsigned long a0)
{
 unsigned long long v2; // rax
 unsigned int v3; // ebx
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v3 = syscall(2);
 if (v3 < 0)
 {
  v3 = -(*(__errno_location()));
 }
 else
 {
  syscall(3);
 }
 return v3;
}


// Function: call_linux_syscall at 0x40299a
unsigned int call_linux_syscall()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return (unsigned int)((param_linux_syscall(0) & 4294967295U) >> 31) | 42;
}


// Function: param_win32_api at 0x4029af
unsigned long long param_win32_api(char *path)
{
 unsigned long long v3; // rbx
 unsigned long long v0; // [bp-0x68]
 unsigned long long v1; // [bp-0x8]
 struct stat st;

 v1 = v3;
 v0 = 0;
 return (stat(path, &st) >= 0 ? (0 < v0 ? 42 : 4294967294U) : 4294967295U);
}


// Function: call_win32_api at 0x4029e7
unsigned long long call_win32_api()
{
 unsigned long long v4; // rbx
 char v0; // [bp-0x98]
 unsigned long long v1; // [bp-0x68]
 unsigned long long v2; // [bp-0x8]

 v2 = v4;
 return ((int)stat("/etc/passwd", &v0) >= 0 ? (0 < v1 ? 42 : 4294967294U) : 4294967295U);
}


// Function: param_fork_exec at 0x402a26
unsigned long long param_fork_exec(char *a0, unsigned long a1)
{
 unsigned long v2; // rax
 int result; // eax
 unsigned long v0; // [bp-0x18]

 v0 = v2;
 result = fork();
 if (result < 0)
 {
 return 4294967295U;
 }
 else if (!result)
 {
 execl(a0, a0, NULL);
 _exit(127); /* do not return */
 }
 else if (waitpid(result, (int*)&v0, 0) >= 0)
 {
 return *((int *)((char *)&v0 + 4)) >> 8;
 }
 else
 {
 return 4294967294U;
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
 int result; // eax
 unsigned long long count; // rax
 char v0; // [bp-0x30]
 unsigned int v1; // [bp-0x2c]
 char v2; // [bp-0x28]

 if (pipe((int*)&v0) < 0)
 return 4294967295U;
 result = fork();
 if (result < 0)
 {
 return 4294967294U;
 }
 else if (result)
 {
 close(v1);
 count = read(v0, &v2, 31);
 (&v2)[count] = 0;
 close(v0);
 wait(NULL);
 return (count > 0 ? 42 : 4294967293U);
 }
 else
 {
 close(v0);
 write(v1, "HelloPipe", 9);
 close(v1);
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
 int v4; // eax
 int v5; // ebx
 int v6; // eax
 unsigned long long v7; // rax
 int result; // [bp-0x24]
 struct sockaddr_in v1; // [bp-0x20]

 v4 = socket(2, 1, 0);
 if (v4 < 0)
 return 4294967295U;
 v5 = v4;
 result = 1;
 if (setsockopt(v4, 1, 2, &result, 4) < 0)
 {
 close(v5);
 return 4294967294U;
 }
 *((unsigned long long *)&v1.sin_zero[6]) = 0;
 v1.sin_family = 2;
 v1.sin_port = 0;
 v1.sin_addr.s_addr = 0;
 if (bind(v5, (struct sockaddr *)&v1, 16) < 0)
 {
 close(v5);
 return 4294967293U;
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
 int v1; // eax
 int v2; // eax
 int v3; // eax
 struct_0 *v4; // rax
 struct_0 *ptr; // rbp
 unsigned int v6; // ebx

 v1 = open("/tmp/binbench_shm", 66, 438);
 if (v1 < 0)
 return 4294967295U;
 close(v1);
 v2 = ftok("/tmp/binbench_shm", 42);
 if (v2 < 0)
 return 4294967295U;
 v3 = shmget(v2, 0x1000, 950);
 if (v3 < 0)
 return 4294967294U;
 v4 = shmat(v3, 0, 0);
 if (v4 == (struct_0*)-1)
 return 4294967293U;
 ptr = v4;
 *((unsigned long long *)((char *)ptr + 5)) = 34184295084281188ULL;
 *(unsigned long long *)ptr = 7299600957910902867ULL;
 v6 = strlen((char*)ptr);
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
 return 4294967295U;
 return 42;
}


// Function: param_signal_handling at 0x402ce3

unsigned long long param_signal_handling()
{
 unsigned int v1; // ebx
 unsigned int v2; // ebx
 unsigned int v3; // ebx
 unsigned int v4; // ebx
 unsigned int v5; // ebx
 unsigned int v6; // ebx

 if (signal(10, signal_handler) == (void*)SIG_ERR)
 {
 return 4294967295U;
 }
 else if (signal(14, signal_handler) != (void*)SIG_ERR)
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
 return 4294967293U;
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
 return 4294967291U;
 }
 else if (signal_number == 14)
 {
 signal(10, NULL);
 signal(14, NULL);
 return 42;
 }
 else
 {
 return 4294967291U;
 }
 }
 else
 {
 return 0xfffffffc;
 }
 }
 else
 {
 return 4294967294U;
 }
}


// Function: signal_handler at 0x402e06

void signal_handler(int a0)
{
 signal_received = 1;
 signal_number = (unsigned int)a0;
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
 int v4; // eax
 char v0[256]; // [bp-0xa8]
 char v1[256]; // [bp-0x78]

 puts((char*)&g_4043d3);
 printf((char*)&g_404238, param_linux_syscall(0) >> 31 | 42);
 v4 = stat("/etc/passwd", v0);
 printf((char*)&g_404254, (v4 < 0 ? 4294967295U : (0 < *((long long *)v1) ? 42 : 4294967294U)));
 printf((char*)&g_404270, -(0 < (unsigned int)param_fork_exec("/bin/true", 0)) | 42);
 printf((char*)&g_40428c, param_pipe_communication() & 4294967295U);
 printf((char*)&g_4042a8, param_socket_create() & 4294967295U);
 printf((char*)&g_4042c4, (param_shmget_shmat() > 0 ? 42 : 4294967295U));
 return printf((char*)&g_4042e0, param_signal_handling() & 4294967295U);
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

 v1 = a0;
 if ((int)pthread_create(&v0, NULL, (void*(*)(void*))thread_compute, &v1))
 return 4294967295U;
 pthread_join(v0, &v2);
 free(v2);
 return *(int *)v2;
}


// Function: call_pthread_create at 0x402f76
int call_pthread_create()
{
 return param_pthread_create(7);
}


// Function: thread_sum at 0x402f80
unsigned long long thread_sum(unsigned int *ptr)
{
 unsigned int v1; // r8d
 unsigned long v2; // rdx
 unsigned int v3; // eax

 ptr[2] = 0;
 v1 = *(ptr);
 v2 = ptr[1];
 v3 = (unsigned int)v2;
 if (v3 >= v1)
 ptr[2] = (v3 - v1) * (v1 + 1) + v1 + (unsigned int)((v2 + ~(v1)) * (v3 - v1) >> 1);
 return 0;
}


// Function: param_pthread_join at 0x402fb4
unsigned int param_pthread_join()
{
 char *v7; // rbx
 unsigned long long v8; // rbp
 pthread_t cur[4]; // rbx
 unsigned long long v10; // rbp
 unsigned int v11; // r14d
 unsigned long v0; // [bp-0x68]
 pthread_t v1[4]; // [bp-0x48]
 void *v2[4]; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 unsigned int v4; // [bp-0x38]
 unsigned long long v5; // [bp-0x30]

 v7 = (char*)v1;
 memset(v1, 0, sizeof(v1));
 v1[0] = 42949672961U;
 v3 = 11;
 v4 = 20;
 v5 = 128849018901ULL;
 v8 = 0;
 while (!(int)pthread_create((pthread_t*)&v1[v8/8], NULL, (void*(*)(void*))thread_sum, (void*)v7))
 {
 v7 += 12;
 v8 += 8;
 if (v8 == 24)
 {
 cur[0] = v1[0];
 v10 = 0;
 v11 = 0;
 while (!(int)pthread_join(v1[v10], NULL))
 {
 v11 += *(unsigned int*)((char*)cur + v10);
 v10 += 1;
 cur[0] = *((pthread_t*)((char*)cur + 3));
 if (v10 == 3)
 return v11;
 }
 return 4294967294U;
 }
 }
 return 4294967295U;
}


// Function: call_pthread_join at 0x40306c
int call_pthread_join()
{
 return param_pthread_join();
}


// Function: thread_increment at 0x403071

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
 pthread_t *ptr2; // rbx
 unsigned long i; // r12
 unsigned long long v8; // r14
 unsigned long v9; // rbp
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]

 v0 = v3;
 v4 = a0;
 v0 = a1;
 ptr = malloc(a0 * 8);
 if (!ptr)
 return 4294967295U;
 ptr2 = ptr;
 shared_counter = 0;
 if (v4 > 0)
 {
 v1 = v4;
 i = v4;
 v8 = 0;
 do
 {
 if ((int)pthread_create((pthread_t*)((char *)ptr + v8), NULL, (void*(*)(void*))thread_increment, &v0))
 {
 free(ptr);
 return 4294967294U;
 }
 } while ((v8 += 8, i * 8 != v8));
 v4 = v1;
 if (v4 > 0)
 {
 v9 = 0;
 do
 {
 pthread_join(ptr2[v9], NULL);
 v9 += 1;
 } while (i != v9);
 }
 }
 free(ptr2);
 return (shared_counter == v0 * v4 ? 42 : 4294967293U);
}


// Function: call_mutex_lock at 0x403188
unsigned long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x403197

unsigned int * consumer_thread()
{
 unsigned long long v2; // rax
 unsigned int *ptr; // rax
 unsigned long long v0; // [bp-0x18]
 unsigned int i = 0; // local variable - initialized to 0

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

unsigned long long producer_thread()
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

unsigned int param_condition_variable()
{
 pthread_t v0; // [bp-0x20]
 pthread_t v1; // [bp-0x18]
 void *v2; // [bp-0x10]

 ready = 0;
 data = 0;
 if ((int)pthread_create(&v0, NULL, (void*(*)(void*))consumer_thread, NULL))
 {
 return 4294967295U;
 }
 else if ((int)pthread_create(&v1, NULL, (void*(*)(void*))producer_thread, NULL))
 {
 pthread_cancel(v0);
 return 4294967294U;
 }
 else
 {
 pthread_join(v0, &v2);
 pthread_join(v1, &v2);
 free(v2);
 return *(int *)v2;
 }
}


// Function: call_condition_variable at 0x4032ce
int call_condition_variable()
{
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x4032d3

unsigned long long thread_atomic_increment(unsigned int *a0)
{
 unsigned int i; // ecx

 if (*(a0) <= 0)
 return 0;
 i = 0;
 do
 {
 __atomic_add_fetch(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 __atomic_compare_exchange_n((int*)&atomic_counter, (int*)&i, i, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
 i += 1;
 } while (i != *(a0));
 return 0;
}


// Function: thread_atomic_load_store at 0x4032fb

unsigned int thread_atomic_load_store()
{
 __atomic_store_n(&atomic_counter, __atomic_load_n(&atomic_counter, __ATOMIC_SEQ_CST) + 100, __ATOMIC_SEQ_CST);
 return 0;
}


// Function: param_atomic_ops at 0x40330d

unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned int *ptr; // rax
 unsigned int *ptr2; // rbx
 unsigned long i; // r13
 unsigned long long v7; // r14
 unsigned long v8; // rbp
 unsigned int v1; // [bp-0x3c]
 pthread_t v2; // [bp-0x38]

 v1 = a1;
 ptr = malloc(a0 * 8);
 if (!ptr)
 return 4294967295U;
 ptr2 = ptr;
 __atomic_store_n(&atomic_counter, 0, __ATOMIC_SEQ_CST);
 i = a0;
 if (a0 > 0)
 {
 v7 = 0;
 do
 {
 if ((int)pthread_create((pthread_t*)((char *)ptr + v7), NULL, (void*(*)(void*))thread_atomic_increment, (void*)(long long)(unsigned int)v1))
 {
 free(ptr);
 return 4294967294U;
 }
 } while ((v7 += 8, i * 8 != v7));
 }
 if (!(int)pthread_create(&v2, NULL, (void*(*)(void*))thread_atomic_load_store, NULL))
 pthread_join(v2, NULL);
 if (i > 0)
 {
 v8 = 0;
 do
 {
 pthread_join(ptr2[v8], NULL);
 v8 += 1;
 } while (i != v8);
 }
 free(ptr2);
 return (atomic_counter > 0 ? 42 : 4294967293U);
}


// Function: call_atomic_ops at 0x403404
unsigned long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x403413
unsigned int* thread_tls_test(char *a0)
{
 unsigned long long v2; // rax
 void* p; // fs
 unsigned int v4; // ebx
 unsigned int v5; // ebp
 unsigned int *ptr; // rax
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v4 = 0; // TLS access was incorrectly decompiled
 v5 = v4 + 50;
 strncpy((char*)p - 32, a0, 31);
 ptr = malloc(8);
 ptr[0] = v4;
 ptr[1] = v5;
 return ptr;
}


// Function: param_thread_local_storage at 0x40345c
unsigned long long param_thread_local_storage(unsigned int a0)
{
 unsigned long long v4; // rbx
 unsigned int *addr; // r14
 unsigned int v14; // ebx
 unsigned long v15; // rbx
 unsigned int *p; // r13
 unsigned long i; // r12
 unsigned long idx; // rbx
 char *ptr; // rax
 unsigned int *v10; // rbx
 unsigned long j; // r14
 unsigned long v12; // rbp
 unsigned int v13; // r15d;
 unsigned int v0; // [bp-0x44]
 unsigned int *ptr3; // [bp-0x40]
 void *pthread_ptr; // [bp-0x38]

 v4 = a0 * 8;
 addr = malloc(v4);
 p = malloc(v4);
 if (!addr)
 {
 return 4294967295U;
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
 *((char **)&p[2 * idx]) = ptr;
 snprintf(ptr, 16, "Thread-%u", idx & 0xFFFFFFFF);
 idx += 1;
 } while (i != idx);
 if (a0 <= 0)
 goto LABEL_403569;
 v10 = addr;
 j = 0;
 ptr3 = v10;
 do
 {
 if ((int)pthread_create(v10, NULL, (void*(*)(void*))thread_tls_test, *((long long *)&p[2 * j])))
 {
 v15 = 0xFFFFFFFFFFFFFFFFULL;
 do
 {
 free(*((long long *)&p[2 + 2 * v15]));
 v15 += 1;
 } while (j != v15);
 free(p);
 free(ptr3);
 return 4294967294U;
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
 pthread_join(*((pthread_t *)&addr[2 * v12]), &pthread_ptr);
 v14 += *(int*)pthread_ptr;
 v13 += *(int*)((char*)pthread_ptr + 4);
 free(pthread_ptr);
 free(*((long long *)&p[2 * v12]));
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
 return (!(v0 * 150 ^ v13) && !(v0 * 100 ^ v14) ? 42 : 4294967293U);
 }
 else
 {
 return 4294967295U;
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
 puts((char*)&g_4043ee);
 printf((char*)&g_404306, param_pthread_create(7) & 4294967295U);
 printf((char*)&g_404322, param_pthread_join() & 4294967295U);
 printf((char*)&g_40433f, param_mutex_lock(4, 1000) & 4294967295U);
 printf((char*)&g_40435b, param_condition_variable() & 4294967295U);
 printf((char*)&g_404377, param_atomic_ops(4, 500) & 4294967295U);
 return printf((char*)&g_404393, param_thread_local_storage(4) & 4294967295U);
}


// Function: main at 0x4036a4
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


