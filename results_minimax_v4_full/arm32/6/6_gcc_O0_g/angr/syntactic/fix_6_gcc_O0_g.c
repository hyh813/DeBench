// Angr Decompilation of 6_gcc_O0_g
// Platform: ARMEL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <errno.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

/* CRT stub function _init removed by preprocessor */


// Forward declarations for thread functions
unsigned int thread_atomic_increment(unsigned int *ptr);
void thread_atomic_load_store(unsigned int a0);
unsigned int param_thread_local_storage(unsigned int a0);
unsigned int call_atomic_ops(void);


// Forward declarations for global variables
extern unsigned int signal_number;
extern unsigned int signal_received;


// Forward declarations for sync functions
void __sync_synchronize(void);
int __sync_lock_test_and_set_4(unsigned int *ptr, unsigned int val);
unsigned int __sync_lock_test_and_set_2(unsigned int ptr, unsigned int val);
unsigned int __sync_lock_test_and_set_1(unsigned int ptr, unsigned int val);
void __sync_lock_release_8(unsigned int *ptr);
void __sync_lock_release_4(unsigned int *ptr);
void __sync_lock_release_2(unsigned short *ptr);
void __sync_lock_release_1(char *ptr);
unsigned int __sync_val_compare_and_swap_2(unsigned int ptr, unsigned int old, unsigned int new);
unsigned int __sync_val_compare_and_swap_1(unsigned int ptr, unsigned int old, unsigned int new);
unsigned int __sync_bool_compare_and_swap_4(unsigned int *ptr, unsigned int old, unsigned int new);


// Function: sub_10cb8 at 0x10cb8
int sub_10cb8()
{
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10fe8 at 0x10fe8
void sub_10fe8()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_strcpy at 0x110a8
int param_strcpy(char *ptr, char *a1)
{
 unsigned int len; // r0

 strcpy(ptr, a1);
 len = strlen(ptr);
 return strlen(ptr);
}


// Function: call_strcpy at 0x110e0
extern unsigned int __stack_chk_guard;

unsigned int call_strcpy()
{
 unsigned int dst; // [bp-0x30]
 char v1[32]; // [bp-0x2c]
 unsigned int v2; // [bp-0xc]

 v2 = __stack_chk_guard;
 dst = param_strcpy(&v1, "HelloLib");
 if (!(v2 ^ __stack_chk_guard))
 return dst;
 __stack_chk_fail(); /* do not return */
}


// Function: param_strcmp at 0x11144
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = strcmp(a0, a1);
 return (0 < v0 ? 1 : (0 <= v0 ? 0 : 4294967295));
}


// Function: call_strcmp at 0x111a0
int call_strcmp()
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v0 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 v2 = param_strcmp("bbb", "aaa");
 return v0 + v1 + v2;
}


// Function: param_strlen at 0x11210
unsigned int param_strlen(char *a0)
{
 unsigned int len; // [bp-0xc]

 len = strlen(a0);
 return len;
}


// Function: call_strlen at 0x1123c
unsigned int call_strlen()
{
 unsigned int len; // r0
 char *v0; // [bp-0xc]

 v0 = "BinBench2025";
 len = param_strlen(v0);
 return param_strlen(v0);
}


// Function: param_memcpy at 0x1126c
int param_memcpy(void* a0, void* a1, unsigned int n)
{
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x112a4
extern unsigned int __stack_chk_guard;

int call_memcpy()
{
 unsigned int v0; // [bp-0x34]
 unsigned int v1; // [bp-0x30]
 unsigned int v2; // [bp-0x2c]
 unsigned int v3; // [bp-0x28]
 unsigned int v4; // [bp-0x24]
 char v5; // [bp-0x20]
 char v6; // [bp-0x18]
 unsigned int v7; // [bp-0x10]
 unsigned int v8; // [bp-0xc]

 v8 = __stack_chk_guard;
 v0 = 10;
 v1 = 20;
 v2 = 30;
 v3 = 40;
 v4 = 50;
 memset(&v5, 0, 20);
 param_memcpy(&v5, &v0, 20);
 if (!(v8 ^ __stack_chk_guard))
 return *((int *)&v5) + *((int *)&v6) + v7;
 __stack_chk_fail(); /* do not return */
}


// Function: param_memcmp at 0x11350
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v0; // [bp-0xc]

 v0 = memcmp(a0, a1, a2);
 return (0 < v0 ? 1 : (0 <= v0 ? 0 : 4294967295));
}


// Function: call_memcmp at 0x113b4
extern unsigned int __stack_chk_guard;

int call_memcmp()
{
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int result; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 unsigned int flag1; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 unsigned int v7; // [bp-0x1c]
 unsigned int flag2; // [bp-0x18]
 unsigned int v9; // [bp-0x14]
 unsigned int v10; // [bp-0x10]
 unsigned int v11; // [bp-0xc]

 v11 = __stack_chk_guard;
 result = 1;
 v3 = 2;
 v4 = 3;
 flag1 = 1;
 v6 = 2;
 v7 = 4;
 flag2 = 1;
 v9 = 2;
 v10 = 3;
 v0 = param_memcmp(&result, &flag1, 12);
 v1 = param_memcmp(&result, &flag2, 12);
 if (!(v11 ^ __stack_chk_guard))
 return v0 + v1;
 __stack_chk_fail(); /* do not return */
}


// Function: param_printf at 0x11470
unsigned int param_printf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = printf("Value: %d, Name: %s\n", a0, a1);
 return v0;
}


// Function: call_printf at 0x114ac
unsigned int call_printf()
{
 unsigned int v0; // [bp-0xc]

 v0 = param_printf(42, "Test");
 return v0;
}


// Function: param_scanf at 0x114dc
extern unsigned int __stack_chk_guard;

unsigned int param_scanf(char *a0)
{
 char v0; // [bp-0x18], Other Possible Types: unsigned int
 char v1; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = __stack_chk_guard;
 v2 = __isoc99_sscanf(a0, "%d,%d", &v0, &v1);
 if (!(v3 ^ __stack_chk_guard))
 return (v2 != 2 ? 4294967295 : v0 + v1);
 __stack_chk_fail(); /* do not return */
}


// Function: call_scanf at 0x11564
unsigned int call_scanf()
{
 unsigned int v0; // r0

 v0 = param_scanf("123,456");
 return param_scanf("123,456");
}


// Function: param_fopen_fclose at 0x11584
unsigned int param_fopen_fclose(char *a0)
{
 FILE *fp; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 fp = fopen(a0, "r");
 if (fp)
 {
 v1 = fileno(fp);
 fclose(fp);
 return v1;
 }
 return 4294967295;
}


// Function: call_fopen_fclose at 0x115e4
unsigned int call_fopen_fclose()
{
 unsigned int fp; // [bp-0xc]

 fp = param_fopen_fclose("/etc/passwd");
 return (fp < 0 ? 4294967295 : 42);
}


// Function: param_fread_fwrite at 0x11624
extern unsigned int __stack_chk_guard;

unsigned int param_fread_fwrite(char *a0)
{
 unsigned int v6; // r3
 void* v0; // [bp-0x3c]
 void* fp; // [bp-0x38]
 unsigned int count; // [bp-0x34]
 char v4; // [bp-0x2c]
 unsigned int v5; // [bp-0xc]

 v5 = __stack_chk_guard;
 v0 = "BinBench Test Data";
 fp = fopen(a0, "w+");
 if (!fp)
 {
 v6 = 4294967295;
 }
 else
 {
 count = fwrite(v0, 1, strlen(v0), fp);
 if (count != strlen(v0))
 {
 fclose(fp);
 v6 = 4294967294;
 }
 else
 {
 rewind(fp);
 count = fread(&v4, 1, count, fp);
 (&v4)[count] = 0;
 fclose(fp);
 unlink(a0);
 if (count == count && !strcmp(&v4, v0))
 v6 = 42;
 else
 v6 = 4294967293;
 }
 }
 if (!(v5 ^ __stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: call_fread_fwrite at 0x1176c
unsigned int call_fread_fwrite()
{
 unsigned int count; // r0

 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x1178c
unsigned int param_malloc_free(unsigned int a0)
{
 unsigned int idx; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0xc]

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx < a0; idx += 1)
 {
 ptr[idx] = idx * 10;
 }
 v2 = *(ptr) + ptr[1073741823 + a0];
 free(ptr);
 ptr = 0;
 return v2;
}


// Function: call_malloc_free at 0x11868
unsigned int call_malloc_free()
{
 unsigned int ptr; // r0

 ptr = param_malloc_free(10);
 return param_malloc_free(10);
}


// Function: param_memset at 0x11884
unsigned int param_memset(void* a0, unsigned int n)
{
 unsigned int v0; // [bp-0x14]
 unsigned int i; // [bp-0x10]

 memset(a0, 0, n);
 v0 = 0;
 for (i = 0; i < n; i += 1)
 {
 v0 += *((char *)a0 + i);
 }
 return v0;
}


// Function: call_memset at 0x11910
extern unsigned int __stack_chk_guard;

int call_memset()
{
 unsigned int idx; // [bp-0x38]
 unsigned long v1; // [bp-0x34]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = __stack_chk_guard;
 for (idx = 0; idx <= 9; idx += 1)
 {
 (&v1)[idx] = 255;
 }
 param_memset(&v1, 40);
 if (!(v3 ^ __stack_chk_guard))
 return v1 + v2;
 __stack_chk_fail(); /* do not return */
}


// Function: param_strchr_strstr at 0x119b0
int param_strchr_strstr(char *a0, char a1)
{
 char *v4; // r2
 char *ptr; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 char *ptr2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v4 = "test"; // placeholder - was being used uninitialized
 ptr = strchr(a0, a1);
 v1 = (!ptr ? 4294967295 : (unsigned int)(ptr - a0));
 ptr2 = strstr(a0, v4);
 v3 = (!ptr2 ? 4294967295 : (unsigned int)(ptr2 - a0));
 return v1 + v3;
}


// Function: call_strchr_strstr at 0x11a50
unsigned int call_strchr_strstr()
{
 char *v0; // [bp-0x10]
 unsigned int ptr; // [bp-0xc]

 v0 = "Hello BinBench Test";
 ptr = param_strchr_strstr(v0, 66);
 return ptr;
}


// Function: test_standard_library_functions at 0x11a90
extern char g_1446c;
extern char g_14490;
extern char g_144ac;
extern char g_144c8;
extern char g_144e4;
extern char g_14500;
extern char g_1451c;
extern char g_14538;
extern char g_14558;
extern char g_14574;
extern char g_14590;
extern char g_145ac;
extern char g_145c8;

int test_standard_library_functions()
{
 unsigned int v11; // r0

 puts(0x1446c);
 printf(0x14490, call_strcpy());
 printf(0x144ac, call_strcmp());
 printf(0x144c8, call_strlen());
 printf(0x144e4, call_memcpy());
 printf(0x14500, call_memcmp());
 printf(0x1451c, call_printf());
 printf(0x14538, call_scanf());
 printf(0x14558, call_fopen_fclose());
 printf(0x14574, call_fread_fwrite());
 printf(0x14590, call_malloc_free());
 printf(0x145ac, call_memset());
 v11 = printf(0x145c8, call_strchr_strstr());
 return printf(0x145c8, call_strchr_strstr());
}


// Function: param_linux_syscall at 0x11bcc
unsigned int param_linux_syscall(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0xc]

 v0 = a0;
 v1 = syscall(5);
 if (0 <= v1)
 {
 syscall(6);
 return v1;
 }
 return -(*(__errno_location()));
}


// Function: call_linux_syscall at 0x11c2c
unsigned int call_linux_syscall()
{
 unsigned int v0; // [bp-0xc]

 v0 = param_linux_syscall("/etc/passwd");
 return (v0 < 0 ? 4294967295 : 42);
}


// Function: param_win32_api at 0x11c6c
extern unsigned int __stack_chk_guard;

unsigned int param_win32_api(unsigned int a0)
{
 unsigned int v3; // r3
 char v0; // [bp-0x68]
 char v1; // [bp-0x3c]
 unsigned int v2; // [bp-0xc]

 v2 = __stack_chk_guard;
 v3 = (0 <= stat(a0, &v0) ? (*((int *)&v1) <= 0 ? 4294967294 : 42) : 4294967295);
 if (!(v2 ^ __stack_chk_guard))
 return v3;
 __stack_chk_fail(); /* do not return */
}


// Function: call_win32_api at 0x11cf4
unsigned int call_win32_api()
{
 unsigned int v0; // r0

 v0 = param_win32_api("/etc/passwd");
 return param_win32_api("/etc/passwd");
}


// Function: param_fork_exec at 0x11d14
extern unsigned int __stack_chk_guard;

unsigned int param_fork_exec(char *a0, unsigned int a1)
{
 unsigned int v5; // r3
 unsigned int v0; // [bp-0x20]
 unsigned int v1[1]; // [bp-0x18]
 unsigned int pid; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v0 = a1;
 v4 = __stack_chk_guard;
 pid = fork();
 if (0 > pid)
 {
 v5 = 4294967295;
 }
 else
 {
 if (!pid)
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 v3 = waitpid(pid, &v1, 0);
 v5 = (0 <= v3 ? ((*(v1) & 127) ? 4294967293 : *(v1) >> 8 & 255) : 4294967294);
 }
 if (!(v4 ^ __stack_chk_guard))
 return v5;
 __stack_chk_fail(); /* do not return */
}


// Function: call_fork_exec at 0x11dfc
unsigned int call_fork_exec()
{
 unsigned int pid; // [bp-0xc]

 pid = param_fork_exec("/bin/true", 0);
 return (pid ? 4294967295 : 42);
}


// Function: param_pipe_communication at 0x11e40
extern unsigned int __stack_chk_guard;

unsigned int param_pipe_communication()
{
 unsigned int v7; // r3
 unsigned int pid; // [bp-0x48]
 unsigned int count; // [bp-0x44]
 void* v2; // [bp-0x40]
 char v3; // [bp-0x3c], Other Possible Types: unsigned int
 unsigned int v4; // [bp-0x38]
 char v5; // [bp-0x34]
 unsigned int v6; // [bp-0x14]

 v6 = __stack_chk_guard;
 if (0 > pipe(&v3))
 {
 v7 = 4294967295;
 }
 else
 {
 pid = fork();
 if (0 > pid)
 {
 v7 = 4294967294;
 }
 else
 {
 if (!pid)
 {
 close(v3);
 v2 = "HelloPipe";
 write(v4, v2, strlen(v2));
 close(v4);
 _exit(0); /* do not return */
 }
 close(v4);
 count = read(v3, &v5, 31);
 (&v5)[count] = 0;
 close(v3);
 wait(NULL);
 v7 = (count <= 0 ? 4294967293 : 42);
 }
 }
 if (!(v6 ^ __stack_chk_guard))
 return v7;
 __stack_chk_fail(); /* do not return */
}


// Function: call_pipe_communication at 0x11f84
unsigned int call_pipe_communication()
{
 unsigned int v0; // r0

 v0 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x11f9c
extern unsigned int __stack_chk_guard;

unsigned int param_socket_create()
{
 unsigned int v7; // r3
 unsigned int result; // [bp-0x24]
 unsigned int sock; // [bp-0x20]
 struct sockaddr v2; // [bp-0x1c]
 unsigned int v6; // [bp-0xc]

 v6 = __stack_chk_guard;
 sock = socket(2, 1, 0);
 if (0 > sock)
 {
 v7 = 4294967295;
 }
 else
 {
 result = 1;
 if (0 > setsockopt(sock, 1, 2, &result, 4))
 {
 close(sock);
 v7 = 4294967294;
 }
 else
 {
 memset(&v2, 0, 16);
 v2.sa_family = 2;
 *((unsigned short *)&v2.sa_data[0]) = htons(0);
 *((unsigned int *)&v2.sa_data[2]) = 0;
 if (0 > bind(sock, &v2, 16))
 {
 close(sock);
 v7 = 4294967293;
 }
 else if (0 > listen(sock, 5))
 {
 close(sock);
 v7 = 0xfffffffc;
 }
 else
 {
 close(sock);
 v7 = 42;
 }
 }
 }
 if (!(v6 ^ __stack_chk_guard))
 return v7;
 __stack_chk_fail(); /* do not return */
}


// Function: call_socket_create at 0x120e4
unsigned int call_socket_create()
{
 unsigned int sock; // r0

 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x120fc
int param_shmget_shmat()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 void* ptr; // [bp-0x10]
 unsigned int len; // [bp-0xc]

 v0 = "/tmp/binbench_shm";
 v1 = open(v0, 66, 438);
 if (0 > v1)
 return 4294967295;
 close(v1);
 v2 = ftok("/tmp/binbench_shm", 42);
 if (0 > v2)
 return 4294967295;
 v3 = shmget(v2, 0x1000, 950);
 if (0 > v3)
 return 4294967294;
 ptr = shmat(v3, 0, 0);
 if (ptr != 0xffffffff)
 {
 memcpy(ptr, "SharedMemory", 13);
 len = strlen(ptr);
 shmdt(ptr);
 shmctl(v3, 0, 0);
 return len;
 }
 return 4294967293;
}


// Function: call_shmget_shmat at 0x12218
unsigned int call_shmget_shmat()
{
 unsigned int v0; // [bp-0xc]

 v0 = param_shmget_shmat();
 return (v0 <= 0 ? 4294967295 : 42);
}


// Function: signal_handler at 0x12250
extern unsigned int signal_number;
extern unsigned int signal_received;

int signal_handler(unsigned int a0)
{
 signal_received = 1;
 signal_number = a0;
 return a0;
}


// Function: param_signal_handling at 0x12290
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned int param_signal_handling()
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0xc]

 if (signal(10, signal_handler) == 4294967295)
 {
 return 4294967295;
 }
 else if (signal(14, signal_handler) == 4294967295)
 {
 return 4294967294;
 }
 else
 {
 signal_received = 0;
 raise(10);
 v0 = 1000;
 while (true)
 {
 if (signal_received || !((v1 = v0 - 1, 0 < v0)))
 break;
 usleep(1000);
 v0 = v1;
 }
 if (!signal_received)
 {
 return 4294967293;
 }
 else if (signal_number != 10)
 {
 return 0xfffffffc;
 }
 else
 {
 signal_received = 0;
 alarm(1);
 v0 = 2000;
 while (true)
 {
 if (signal_received || !((v1 = v0 - 1, 0 < v0)))
 break;
 usleep(1000);
 v0 = v1;
 }
 if (!signal_received || signal_number != 14)
 return 4294967291;
 signal(10, NULL);
 signal(14, NULL);
 return 42;
 return 4294967291;
 }
 }
}


// Function: call_signal_handling at 0x12400
unsigned int call_signal_handling()
{
 unsigned int v0; // r0

 v0 = param_signal_handling();
 return param_signal_handling();
}


// Function: test_system_calls at 0x12418
extern char g_14620;
extern char g_1463c;
extern char g_14658;
extern char g_14674;
extern char g_14690;
extern char g_146ac;
extern char g_146c8;
extern char g_146e4;

int test_system_calls()
{
 unsigned int v6; // r0

 puts(0x14620);
 printf(0x1463c, call_linux_syscall());
 printf(0x14658, call_win32_api());
 printf(0x14674, call_fork_exec());
 printf(0x14690, call_pipe_communication());
 printf(0x146ac, call_socket_create());
 printf(0x146c8, call_shmget_shmat());
 v6 = printf(0x146e4, call_signal_handling());
 return printf(0x146e4, call_signal_handling());
}


// Function: thread_compute at 0x124dc
unsigned int * thread_compute(unsigned int *p)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int *ptr; // [bp-0xc]

 v0 = *(p);
 v1 = v0 * v0;
 ptr = malloc(4);
 *(ptr) = v1;
 return ptr;
}


// Function: param_pthread_create at 0x12540
extern unsigned int __stack_chk_guard;

unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int v5; // r3
 char v0; // [bp-0x20], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x1c]
 unsigned int *ptr; // [bp-0x18], Other Possible Types: char
 unsigned int count; // [bp-0x14]
 unsigned int v4; // [bp-0xc]

 v4 = __stack_chk_guard;
 v1 = a0;
 count = pthread_create(&v0, 0, thread_compute, &v1);
 if (count)
 {
 v5 = 4294967295;
 }
 else
 {
 pthread_join(v0, &ptr);
 v5 = *(ptr);
 free(ptr);
 }
 if (!(v4 ^ __stack_chk_guard))
 return v5;
 __stack_chk_fail(); /* do not return */
}


// Function: call_pthread_create at 0x125f4
unsigned int call_pthread_create()
{
 unsigned int count; // r0

 count = param_pthread_create(7);
 return param_pthread_create(7);
}


// Function: thread_sum at 0x12610
unsigned int thread_sum(unsigned int *ptr)
{
 unsigned int i; // [bp-0x10]

 ptr[2] = 0;
 for (i = *(ptr); i <= ptr[1]; i += 1)
 {
 ptr[2] = ptr[2] + i;
 }
 return 0;
}


// Function: param_pthread_join at 0x12690
extern unsigned int __stack_chk_guard;

unsigned int param_pthread_join()
{
 unsigned int v13; // r3
 unsigned int v0; // [bp-0x48]
 unsigned int idx; // [bp-0x40]
 unsigned long v2; // [bp-0x3c]
 unsigned int result; // [bp-0x30]
 unsigned int v4; // [bp-0x2c]
 unsigned int flag1; // [bp-0x28]
 unsigned int v6; // [bp-0x24]
 unsigned int v7; // [bp-0x20]
 unsigned int flag2; // [bp-0x1c]
 unsigned int v9; // [bp-0x18]
 unsigned int v10; // [bp-0x14]
 unsigned int flag3; // [bp-0x10]
 unsigned int v12; // [bp-0xc]

 v12 = __stack_chk_guard;
 result = 1;
 v4 = 10;
 flag1 = 0;
 v6 = 11;
 v7 = 20;
 flag2 = 0;
 v9 = 21;
 v10 = 30;
 flag3 = 0;
 v0 = 0;
 while (true)
 {
 if (v0 > 2)
 {
 v13 = 0;
 idx = 0;
 while (true)
 {
 if (idx <= 2)
 {
 if (pthread_join((&v2)[idx], NULL))
 {
 v13 = 4294967294;
 break;
 }
 else
 {
 v13 += (&flag1)[3 * idx];
 idx += 1;
 }
 }
 else
 {
 break;
 }
 }
 }
 else if (pthread_create(&(&v2)[v0], 0, thread_sum, &(&result)[3 * v0]))
 {
 v13 = 4294967295;
 break;
 }
 else
 {
 v0 += 1;
 }
 }
 if (!(v12 ^ __stack_chk_guard))
 return v13;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_12dbc at 0x12dbc
int sub_12dbc()
{
 unsigned int v0; // [bp-0x2c]
 unsigned int v1; // [bp-0x28]
 char v2; // [bp-0x24], Other Possible Types: unsigned int
 unsigned int i; // [bp-0x20]
 unsigned int j; // [bp-0x1c]
 char count; // [bp-0x18]

 i = 0;
 while (i < v1)
 {
 if (pthread_create(*((int *)&count) + i * 4, 0, thread_atomic_increment, &v0))
 free(*((int *)&count));
 else
 i += 1;
 }
 if (!pthread_create(&v2, 0, thread_atomic_load_store, 0))
 pthread_join(v2, NULL);
 for (j = 0; j < v1; j += 1)
 {
 pthread_join(*((int *)(*((int *)&count) + j * 4)), NULL);
 }
 __sync_synchronize(); /* do not return */
}


// Function: call_pthread_join at 0x12808
unsigned int call_pthread_join()
{
 unsigned int result; // r0

 result = param_pthread_join();
 return result;
}


// Function: call_thread_local_storage at 0x132e8
unsigned int call_thread_local_storage()
{
 unsigned int count; // r0

 count = param_thread_local_storage(4);
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x13304
extern char g_14730;
extern char g_14750;
extern char g_1476c;
extern char g_1478c;
extern char g_147a8;
extern char g_147c4;
extern char g_147e0;

int test_thread_concurrency()
{
 unsigned int count; // r0
 unsigned int v6; // r0

 puts(0x14730);
 printf(0x14750, call_pthread_create());
 printf(0x1476c, call_pthread_join());
 printf(0x1478c, call_mutex_lock());
 printf(0x147a8, call_condition_variable());
 printf(0x147c4, call_atomic_ops());
 count = call_thread_local_storage();
 v6 = printf(0x147e0, count);
 return printf(0x147e0, count);
}


// Function: main at 0x133b0
unsigned int main()
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


// Function: __sync_fetch_and_add_4 at 0x133d0
int __sync_fetch_and_add_4(volatile unsigned int *a0, unsigned int a1)
{
 unsigned int v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_4(a0, v, v + a1));
 return v;
}


// Function: __sync_fetch_and_sub_4 at 0x13408
int __sync_fetch_and_sub_4(volatile unsigned int *a0, unsigned int a1)
{
 unsigned int v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_4((unsigned int*)a0, v, v - a1));
 return v;
}


// Function: __sync_fetch_and_or_4 at 0x13440
int __sync_fetch_and_or_4(volatile unsigned int *a0, unsigned int a1)
{
 unsigned int v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_4((unsigned int*)a0, v, v | a1));
 return v;
}


// Function: __sync_fetch_and_and_4 at 0x13478
int __sync_fetch_and_and_4(volatile unsigned int *a0, unsigned int a1)
{
 unsigned int v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_4((unsigned int*)a0, v, v & a1));
 return v;
}


// Function: __sync_fetch_and_xor_4 at 0x134b0
int __sync_fetch_and_xor_4(volatile unsigned int *a0, unsigned int a1)
{
 unsigned int v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_4((unsigned int*)a0, v, v ^ a1));
 return v;
}


// Function: __sync_fetch_and_nand_4 at 0x134e8
int __sync_fetch_and_nand_4(volatile unsigned int *a0, unsigned int a1)
{
 unsigned int v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_4((unsigned int*)a0, v, ~(v & a1)));
 return v;
}


// Function: __sync_fetch_and_add_2 at 0x13524
int __sync_fetch_and_add_2(volatile unsigned short *a0, unsigned int a1)
{
 unsigned short v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_2((unsigned short*)a0, v, v + a1));
 return v;
}


// Function: __sync_fetch_and_sub_2 at 0x13584
int __sync_fetch_and_sub_2(volatile unsigned short *a0, unsigned int a1)
{
 unsigned short v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_2((unsigned short*)a0, v, v - a1));
 return v;
}


// Function: __sync_fetch_and_or_2 at 0x135e4
int __sync_fetch_and_or_2(volatile unsigned short *a0, unsigned int a1)
{
 unsigned short v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_2((unsigned short*)a0, v, v | a1));
 return v;
}


// Function: __sync_fetch_and_and_2 at 0x13644
int __sync_fetch_and_and_2(volatile unsigned short *a0, unsigned int a1)
{
 unsigned short v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_2((unsigned short*)a0, v, v & a1));
 return v;
}


// Function: __sync_fetch_and_xor_2 at 0x136a4
int __sync_fetch_and_xor_2(volatile unsigned short *a0, unsigned int a1)
{
 unsigned short v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_2((unsigned short*)a0, v, v ^ a1));
 return v;
}


// Function: __sync_fetch_and_nand_2 at 0x13704
int __sync_fetch_and_nand_2(volatile unsigned short *a0, unsigned int a1)
{
 unsigned short v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_2((unsigned short*)a0, v, ~(v & a1)));
 return v;
}


// Function: __sync_fetch_and_add_1 at 0x13768
int __sync_fetch_and_add_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned char v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_1((unsigned char*)a0, v, v + a1));
 return v;
}


// Function: __sync_fetch_and_sub_1 at 0x137c4
int __sync_fetch_and_sub_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned char v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_1((unsigned char*)a0, v, v - a1));
 return v;
}


// Function: __sync_fetch_and_or_1 at 0x13820
int __sync_fetch_and_or_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned char v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_1((unsigned char*)a0, v, v | a1));
 return v;
}


// Function: __sync_fetch_and_and_1 at 0x1387c
int __sync_fetch_and_and_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned char v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_1((unsigned char*)a0, v, v & a1));
 return v;
}


// Function: __sync_fetch_and_xor_1 at 0x138d8
int __sync_fetch_and_xor_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned char v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_1((unsigned char*)a0, v, v ^ a1));
 return v;
}


// Function: __sync_fetch_and_nand_1 at 0x13934
int __sync_fetch_and_nand_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned char v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_1((unsigned char*)a0, v, ~(v & a1)));
 return v;
}


// Function: __sync_add_and_fetch_4 at 0x13994
int __sync_add_and_fetch_4(volatile unsigned int *a0, unsigned int a1)
{
 unsigned int v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_4((unsigned int*)a0, v, v + a1));
 return v + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x139cc
int __sync_sub_and_fetch_4(volatile unsigned int *a0, unsigned int a1)
{
 unsigned int v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_4((unsigned int*)a0, v, v - a1));
 return v - a1;
}


// Function: __sync_or_and_fetch_4 at 0x13a04
int __sync_or_and_fetch_4(volatile unsigned int *a0, unsigned int a1)
{
 unsigned int v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_4((unsigned int*)a0, v, v | a1));
 return v | a1;
}


// Function: __sync_and_and_fetch_4 at 0x13a3c
unsigned int __sync_and_and_fetch_4(volatile unsigned int *a0, unsigned int a1)
{
 unsigned int v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_4((unsigned int*)a0, v, v & a1));
 return v & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x13a74
int __sync_xor_and_fetch_4(volatile unsigned int *a0, unsigned int a1)
{
 unsigned int v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_4((unsigned int*)a0, v, v ^ a1));
 return v ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x13aac
unsigned int __sync_nand_and_fetch_4(volatile unsigned int *a0, unsigned int a1)
{
 unsigned int v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_4((unsigned int*)a0, v, ~(v & a1)));
 return ~(v & a1);
}


// Function: __sync_add_and_fetch_2 at 0x13ae8
int __sync_add_and_fetch_2(volatile unsigned short *a0, unsigned int a1)
{
 unsigned short v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_2((unsigned short*)a0, v, v + a1));
 return v + a1;
}


// Function: __sync_sub_and_fetch_2 at 0x13b50
int __sync_sub_and_fetch_2(volatile unsigned short *a0, unsigned int a1)
{
 unsigned short v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_2((unsigned short*)a0, v, v - a1));
 return v - a1;
}


// Function: __sync_or_and_fetch_2 at 0x13bb8
int __sync_or_and_fetch_2(volatile unsigned short *a0, unsigned int a1)
{
 unsigned short v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_2((unsigned short*)a0, v, v | a1));
 return v | a1;
}


// Function: __sync_and_and_fetch_2 at 0x13c20
unsigned int __sync_and_and_fetch_2(volatile unsigned short *a0, unsigned int a1)
{
 unsigned short v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_2((unsigned short*)a0, v, v & a1));
 return v & a1;
}


// Function: __sync_xor_and_fetch_2 at 0x13c88
int __sync_xor_and_fetch_2(volatile unsigned short *a0, unsigned int a1)
{
 unsigned short v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_2((unsigned short*)a0, v, v ^ a1));
 return v ^ a1;
}


// Function: __sync_nand_and_fetch_2 at 0x13cf0
unsigned int __sync_nand_and_fetch_2(volatile unsigned short *a0, unsigned int a1)
{
 unsigned short v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_2((unsigned short*)a0, v, ~(v & a1)));
 return ~(v & a1);
}


// Function: __sync_add_and_fetch_1 at 0x13d5c
unsigned int __sync_add_and_fetch_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned char v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_1((unsigned char*)a0, v, v + a1));
 return v + a1;
}

// Function: __sync_sub_and_fetch_1 at 0x13dc0
unsigned int __sync_sub_and_fetch_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned char v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_1((unsigned char*)a0, v, v - a1));
 return v - a1;
}

// Function: __sync_or_and_fetch_1 at 0x13e24
unsigned int __sync_or_and_fetch_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned char v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_1((unsigned char*)a0, v, v | a1));
 return v | a1;
}

// Function: __sync_and_and_fetch_1 at 0x13e88
unsigned int __sync_and_and_fetch_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned char v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_1((unsigned char*)a0, v, v & a1));
 return v & a1;
}

// Function: __sync_xor_and_fetch_1 at 0x13eec
unsigned int __sync_xor_and_fetch_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned char v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_1((unsigned char*)a0, v, v ^ a1));
 return v ^ a1;
}

// Function: __sync_nand_and_fetch_1 at 0x13f50
unsigned int __sync_nand_and_fetch_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned char v;
 do { v = *a0; } while (!__sync_bool_compare_and_swap_1((unsigned char*)a0, v, ~(v & a1)));
 return ~(v & a1);
}


// Function: __sync_val_compare_and_swap_4 at 0x13fb8
int __sync_val_compare_and_swap_4(volatile unsigned int *a0, unsigned int i, unsigned int a2)
{
 unsigned int old;
 do { old = *a0; if (old != i) return old; } while (!__sync_bool_compare_and_swap_4(a0, i, a2));
 return i;
}


// Function: __sync_val_compare_and_swap_2 at 0x14008
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 // Simplified implementation - actual ARM atomic ops would go here
 unsigned int old;
 do { old = *((unsigned int *)(a0 & 0xfffffffc)); if (old != a1) return old; } while (!__sync_bool_compare_and_swap_4((unsigned int*)(a0 & 0xfffffffc), a1, a2));
 return a1;
}


// Function: __sync_val_compare_and_swap_1 at 0x14080
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 // Simplified implementation for ARM
 unsigned int val = *((unsigned int *)(a0 & 0xfffffffc));
 unsigned int shift = (a0 & 3) * 8;
 unsigned int old_byte = (val >> shift) & 0xFF;
 if (old_byte == (a1 & 255)) {
 return a1;
 }
 return old_byte;
}


// Function: __sync_bool_compare_and_swap_4 at 0x140f4
unsigned int __sync_bool_compare_and_swap_4(volatile unsigned int *a0, unsigned int a1, unsigned int a2)
{
 unsigned int old;
 do { old = *a0; if (old != a1) return 0; } while (!__sync_bool_compare_and_swap_4(a0, a1, a2));
 return 1;
}


// Function: __sync_bool_compare_and_swap_2 at 0x14120
unsigned int __sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = a1 - __sync_val_compare_and_swap_2(a0, a1, a2);
 return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_bool_compare_and_swap_1 at 0x1413c
unsigned int __sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = a1 - __sync_val_compare_and_swap_1(a0, a1, a2);
 return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_synchronize at 0x14158
void __sync_synchronize()
{
}


// Function: __sync_lock_test_and_set_4 at 0x14164
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 // Atomic test-and-set implementation
 unsigned int old;
 do { old = *a0; } while (!__sync_bool_compare_and_swap_4(a0, old, a1));
 return old;
}


// Function: __sync_lock_test_and_set_2 at 0x1419c
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
 // Atomic test-and-set for 2 bytes
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 unsigned short offset = (a0 & 2) ? 1 : 0;
 unsigned short old;
 do { old = ptr[offset]; } while (!__sync_bool_compare_and_swap_2(&ptr[offset], old, (unsigned short)a1));
 return old;
}


// Function: __sync_lock_test_and_set_1 at 0x141fc
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
 // Atomic test-and-set for 1 byte
 unsigned char *ptr = (unsigned char *)a0;
 unsigned char old;
 do { old = *ptr; } while (!__sync_bool_compare_and_swap_1(ptr, old, (unsigned char)a1));
 return old;
}


// Function: __sync_lock_release_8 at 0x14258
void __sync_lock_release_8(unsigned int *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 ptr[1] = 0;
 return;
}


// Function: __sync_lock_release_4 at 0x1427c
void __sync_lock_release_4(unsigned int *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_2 at 0x1429c
void __sync_lock_release_2(unsigned short *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_1 at 0x142bc
void __sync_lock_release_1(char *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 return;
}



/* CRT stub function __aeabi_read_tp removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */


