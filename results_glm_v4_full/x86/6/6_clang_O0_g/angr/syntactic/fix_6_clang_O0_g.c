#define _GNU_SOURCE

// Angr Decompilation of 6_clang_O0_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/syscall.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>
#include <stdarg.h>
#include <fcntl.h>



/* Forward declarations for implementation functions */
int param_strcpy(char *a0, char *a1);
unsigned int call_strcpy(void);
int param_strcmp(char *a0, char *a1);
int call_strcmp(void);
int param_strlen(char *a0);
int call_strlen(void);
int param_memcpy(void* a0, void* a1, unsigned int n);
int call_memcpy(void);
int param_memcmp(void* a0, void* a1, unsigned int a2);
int call_memcmp(void);
int param_printf(unsigned int a0, unsigned int a1);
unsigned int call_printf(void);
int param_scanf(char *a0);
unsigned int call_scanf(void);
int param_fopen_fclose(char *a0);
unsigned int call_fopen_fclose(void);
int param_fread_fwrite(char *a0);
unsigned int call_fread_fwrite(void);
unsigned int param_malloc_free(unsigned int a0);
unsigned int call_malloc_free(void);
int param_memset(char *a0, unsigned int n);
unsigned int call_memset(void);
int param_strchr_strstr(char *a0, char a1, char *a2);
unsigned int call_strchr_strstr(void);
int test_standard_library_functions(void);
unsigned int param_linux_syscall(const char *a0);
int call_linux_syscall(void);
int param_win32_api(const char *a0);
int call_win32_api(void);
int param_fork_exec(const char *a0, unsigned int a1);
int call_fork_exec(void);
int param_pipe_communication(void);
int call_pipe_communication(void);
int param_socket_create(void);
int call_socket_create(void);
int param_shmget_shmat(void);
int call_shmget_shmat(void);
int param_signal_handling(void);
int call_signal_handling(void);
int test_system_calls(void);
void* thread_compute(void *p);
int param_pthread_create(unsigned int a0);
int call_pthread_create(void);
void* thread_sum(void *arg);
int param_pthread_join(void);
int call_pthread_join(void);
void* thread_increment(void *arg);
int param_mutex_lock(unsigned int a0, unsigned int a1);
int call_mutex_lock(void);
void* consumer_thread(void *arg);
void* producer_thread(void *arg);
int param_condition_variable(void);
int call_condition_variable(void);
void* thread_atomic_increment(void *arg);
void* thread_atomic_load_store(void *arg);
int param_atomic_ops(unsigned int a0);
int call_atomic_ops(void);
void* thread_tls_test(void *arg);
int param_thread_local_storage(unsigned int a0);
int call_thread_local_storage(void);
int test_thread_concurrency(void);

/* Forward declarations for CRT functions */
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
void signal_handler(int);

/* External symbol declarations for position-independent code */
extern void *_GLOBAL_OFFSET_TABLE_;

/* Global declarations */
char g_4040aa[] = "Testing standard library functions:\n";
char g_404250[] = "Testing system calls:\n";
char g_40433a[] = "Testing thread concurrency:\n";

/* Signal handling globals */
unsigned int signal_number = 0;
unsigned int signal_received = 0;

void signal_handler(int);

/* CRT stub function _init removed by preprocessor */


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3] = {0, 0, 0}; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 (void)ptr[2]; // Suppress unused warning
 return 0;
}


// Function: sub_4013d0 at 0x4013d0
int sub_4013d0()
{
 void* v1 = NULL; // ebx

 (void)v1;
 return 0;
}


// Function: sub_4013d6 at 0x4013d6
void sub_4013d6()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40140b at 0x40140b
void sub_40140b()
{
}


// Function: sub_40140c at 0x40140c
void sub_40140c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401410
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401414 at 0x401414
void sub_401414()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones(void) {}



// Function: sub_401453 at 0x401453
void sub_401453()
{
}


// Function: sub_401459 at 0x401459
void sub_401459()
{
 register_tm_clones();
 return;
}

/* CRT stub function register_tm_clones removed by preprocessor */
void register_tm_clones(void) {}


// Function: sub_4014a7 at 0x4014a7
void sub_4014a7()
{
 __do_global_dtors_aux();
 return;
}

/* CRT stub function __do_global_dtors_aux removed by preprocessor */
void __do_global_dtors_aux(void) {}


// Function: sub_40153a at 0x40153a
void sub_40153a()
{
 frame_dummy();
 return;
}

/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy(void) {}



// Function: __x86.get_pc_thunk_dx at 0x401549
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40154d
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401551 at 0x401551
int sub_401551()
{
 param_strcpy();
 return;
}


// Function: param_strcpy at 0x401560
int param_strcpy(char *a0, char *a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 strcpy(a0, a1);
 return (int)strlen(a0);
}


// Function: sub_4015a3 at 0x4015a3
int sub_4015a3()
{
 call_strcpy();
 return;
}


// Function: call_strcpy at 0x4015b0
unsigned int call_strcpy()
{
 unsigned int dst; // [bp-0x2c]
 char v1[32]; // [bp-0x28]

 dst = (unsigned int)param_strcpy(&v1, "HelloLib");
 return dst;
}


// Function: sub_4015e4 at 0x4015e4
int sub_4015e4()
{
 param_strcmp();
 return;
}


// Function: param_strcmp at 0x4015f0
int param_strcmp(char *a0, char *a1)
{
 int v0; // [bp-0x10]
 int v1; // [bp-0xc]

 v1 = strcmp(a0, a1);
 if (v1 <= 0)
 {
 v0 = (v1 < 0 ? -1 : 0);
 return v0;
 }
 v0 = 1;
 return v0;
}


// Function: sub_401651 at 0x401651
int sub_401651()
{
 call_strcmp();
 return;
}


// Function: call_strcmp at 0x401660
int call_strcmp()
{
 char *v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v0 = (char *)&_GLOBAL_OFFSET_TABLE_;
 v3 = (unsigned int)param_strcmp("abc", "def");
 v2 = (unsigned int)param_strcmp(v0 + 12263, v0 + 12263);
 v1 = (unsigned int)param_strcmp(v0 + 12259, v0 + 12255);
 return v3 + v2 + v1;
}


// Function: sub_4016d6 at 0x4016d6
int sub_4016d6()
{
 param_strlen();
 return;
}


// Function: param_strlen at 0x4016e0
int param_strlen(char *a0)
{
 int len; // [bp-0xc]

 len = strlen(a0);
 return len;
}


// Function: sub_40170e at 0x40170e
int sub_40170e()
{
 call_strlen();
 return;
}


// Function: call_strlen at 0x401710
int call_strlen()
{
 char *v0; // [bp-0xc]

 v0 = "BinBench2025";
 return param_strlen(v0);
}


// Function: sub_40173d at 0x40173d
int sub_40173d()
{
 param_memcpy();
 return;
}


// Function: param_memcpy at 0x401740
int param_memcpy(void* a0, void* a1, unsigned int n)
{
 memcpy(a0, a1, n);
 return (int)n;
}


// Function: sub_40177e at 0x40177e
int sub_40177e()
{
 call_memcpy();
 return;
}


// Function: call_memcpy at 0x401780
int call_memcpy()
{
 unsigned int v0; // [bp-0x34]
 char v1[20]; // [bp-0x30]
 char v2[20]; // [bp-0x28]
 unsigned int v3; // [bp-0x20]
 char v4[20]; // [bp-0x1c]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 memcpy(&v4, "\n", 20);
 memset(&v1, 0, 20);
 param_memcpy(&v1, &v4, 20);
 return *((int *)&v1) + *((int *)&v2) + v3;
}


// Function: sub_4017ff at 0x4017ff
int sub_4017ff()
{
 param_memcmp();
 return;
}


// Function: param_memcmp at 0x401800
int param_memcmp(void* a0, void* a1, unsigned int a2)
{
 int v0; // [bp-0x14]
 int v1; // [bp-0x10]

 v1 = memcmp(a0, a1, a2);
 if (v1 <= 0)
 {
 v0 = (v1 < 0 ? -1 : 0);
 return v0;
 }
 v0 = 1;
 return v0;
}


// Function: sub_40186c at 0x40186c
int sub_40186c()
{
 call_memcmp();
 return;
}


// Function: call_memcmp at 0x401870
int call_memcmp()
{
 void *v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int flag2[3]; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 unsigned int v5; // [bp-0x24]
 unsigned int flag1[3]; // [bp-0x20]
 unsigned int v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x18]
 unsigned int result[3]; // [bp-0x14]
 unsigned int v10; // [bp-0x10]
 unsigned int v11; // [bp-0xc]

 v0 = (void *)&_GLOBAL_OFFSET_TABLE_;
 result[0] = 1;
 v10 = 2;
 v11 = 3;
 flag1[0] = 1;
 v7 = 2;
 v8 = 4;
 flag2[0] = 1;
 v4 = 2;
 v5 = 3;
 v2 = (unsigned int)param_memcmp(&result, &flag1, 12);
 v1 = (unsigned int)param_memcmp(&result, &flag2, 12);
 return v2 + v1;
}


// Function: param_printf at 0x401920
unsigned int param_printf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 v0 = a0;
 v1 = a1;
 v2 = printf("Value: %d, Name: %s\n", v0, v1);
 return v2;
}


// Function: sub_401961 at 0x401961
int sub_401961()
{
 call_printf();
 return;
}


// Function: call_printf at 0x401970
unsigned int call_printf()
{
 unsigned int v0; // [bp-0xc]

 v0 = (unsigned int)param_printf(42, "Test");
 return v0;
}


// Function: sub_4019a5 at 0x4019a5
int sub_4019a5()
{
 param_scanf();
 return;
}


// Function: param_scanf at 0x4019b0
unsigned int param_scanf(char *a0)
{
 int v3; // [bp-0x18]
 int v4; // [bp-0x14]
 unsigned int v2; // [bp-0x1c]
 unsigned int v5; // [bp-0x10]

 v2 = sscanf(a0, "%d,%d", &v4, &v3);
 v5 = (v2 == 2 ? v4 + v3 : 4294967295);
 return v5;
}


// Function: sub_401a16 at 0x401a16
int sub_401a16()
{
 call_scanf();
 return;
}


// Function: call_scanf at 0x401a20
unsigned int call_scanf()
{
 return (unsigned int)param_scanf("123,456");
}


// Function: sub_401a45 at 0x401a45
int sub_401a45()
{
 param_fopen_fclose();
 return;
}


// Function: param_fopen_fclose at 0x401a50
unsigned int param_fopen_fclose(char *a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 FILE *fp; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 fp = fopen(a0, "r");
 if (fp)
 {
 v1 = fileno(fp);
 fclose(fp);
 v3 = v1;
 return v3;
 }
 v3 = 4294967295;
 return v3;
}


// Function: sub_401ac5 at 0x401ac5
int sub_401ac5()
{
 call_fopen_fclose();
 return;
}


// Function: call_fopen_fclose at 0x401ad0
unsigned int call_fopen_fclose()
{
 unsigned int v3; // ebx
 unsigned int fp; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = v3;
 fp = (unsigned int)param_fopen_fclose("/etc/passwd");
 return (fp != 4294967295 ? 42 : 4294967295);
}


// Function: sub_401b0d at 0x401b0d
int sub_401b0d()
{
 param_fread_fwrite();
 return;
}


// Function: param_fread_fwrite at 0x401b10
unsigned int param_fread_fwrite(char *a0)
{
 char v0; // [bp-0x49]
 void* v1; // [bp-0x48]
 unsigned int v2; // [bp-0x44]
 unsigned int v3; // [bp-0x40]
 unsigned int count; // [bp-0x3c]
 unsigned int count2; // [bp-0x38]
 FILE* fp; // [bp-0x34]
 char v7[256]; // [bp-0x30]
 void* v8; // [bp-0x10]
 unsigned int v9; // [bp-0xc]

 v3 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 v8 = "BinBench Test Data";
 fp = fopen(a0, "w+");
 if (!fp)
 {
 v9 = 4294967295;
 return v9;
 }
 v1 = v8;
 count = fwrite(v1, 1, strlen(v8), fp);
 v2 = count;
 if (v2 != strlen(v8))
 {
 fclose(fp);
 v9 = 4294967294;
 return v9;
 }
 rewind(fp);
 count2 = fread(&v7, 1, count, fp);
 (&v7)[count2] = 0;
 fclose(fp);
 unlink(a0);
 v0 = 0;
 if (count == count2)
 v0 = !strcmp(&v7, v8);
 v9 = ((v0 & 1) ? 42 : 4294967293);
 return v9;
}


// Function: sub_401c7e at 0x401c7e
int sub_401c7e()
{
 call_fread_fwrite();
 return;
}


// Function: call_fread_fwrite at 0x401c80
unsigned int call_fread_fwrite()
{
 return (unsigned int)param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_401ca5 at 0x401ca5
int sub_401ca5()
{
 param_malloc_free();
 return;
}


// Function: param_malloc_free at 0x401cb0
unsigned int param_malloc_free(unsigned int a0)
{
 unsigned int v0;
 unsigned int v1;
 unsigned int idx;
 unsigned int *ptr;
 unsigned int v4;

 v0 = &_GLOBAL_OFFSET_TABLE_;
 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 v4 = 4294967295;
 return v4;
 }
 for (idx = 0; idx < a0; idx += 1)
 {
 ptr[idx] = idx * 10;
 }
 v1 = ptr[0];
 if (a0 > 1)
 v1 += ptr[1];
 free(ptr);
 ptr = NULL;
 v4 = v1;
 return v4;
}


// Function: sub_401d56 at 0x401d56
int sub_401d56()
{
 call_malloc_free();
 return;
}


// Function: call_malloc_free at 0x401d60
unsigned int call_malloc_free()
{
 return param_malloc_free(10);
}


// Function: sub_401d83 at 0x401d83
int sub_401d83()
{
 param_memset();
 return;
}


// Function: param_memset at 0x401d90
int param_memset(char *a0, unsigned int n)
{
 unsigned int i; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 memset(a0, 0, n);
 v1 = 0;
 for (i = 0; i < n; i += 1)
 {
 v1 += a0[i];
 }
 return v1;
}


// Function: sub_401e0c at 0x401e0c
int sub_401e0c()
{
 call_memset();
 return;
}


// Function: call_memset at 0x401e10
unsigned int call_memset()
{
 unsigned int v0; // [bp-0x38]
 unsigned int idx; // [bp-0x34]
 char v2[40]; // [bp-0x30]
 char v3; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 for (idx = 0; idx < 10; idx += 1)
 {
 *((unsigned int *)&v2[4 * idx]) = 255;
 }
 param_memset(&v2, 40);
 return (unsigned int)(*((int *)&v2[0]) + *((int *)&v3));
}


// Function: sub_401e72 at 0x401e72
int sub_401e72()
{
 param_strchr_strstr();
 return;
}


// Function: param_strchr_strstr at 0x401e80
unsigned int param_strchr_strstr(char *a0, char a1, char *a2)
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 char *ptr; // [bp-0x14]
 unsigned int v5; // [bp-0x10]
 char *ptr2; // [bp-0xc]

 v2 = &_GLOBAL_OFFSET_TABLE_;
 ptr = strchr(a0, a1);
 v1 = (!ptr ? 4294967295 : (unsigned int)(ptr - a0));
 v5 = v1;
 ptr2 = strstr(a0, a2);
 v0 = (!ptr2 ? 4294967295 : (unsigned int)(ptr2 - a0));
 v3 = v0;
 return v5 + v3;
}


// Function: sub_401f33 at 0x401f33
int sub_401f33()
{
 call_strchr_strstr();
 return;
}


// Function: call_strchr_strstr at 0x401f40
unsigned int call_strchr_strstr()
{
 unsigned int ptr; // [bp-0x10]
 char *v1; // [bp-0xc]

 v1 = "Hello BinBench Test";
 ptr = (unsigned int)param_strchr_strstr(v1, 'B', "Bench");
 return ptr;
}


// Function: sub_401f85 at 0x401f85
int sub_401f85()
{
 test_standard_library_functions();
 return;
}


// Function: test_standard_library_functions at 0x401f90
int test_standard_library_functions()
{
 unsigned int dst; // [bp-0x18]
 char *v1; // [bp-0xc]

 v1 = (char *)&_GLOBAL_OFFSET_TABLE_;
 printf(&g_4040aa);
 dst = call_strcpy();
 printf(v1 + 12081);
 dst = call_strcmp();
 printf(v1 + 12054);
 dst = call_strlen();
 printf(v1 + 12027);
 dst = call_memcpy();
 printf(v1 + 11999);
 dst = call_memcmp();
 printf(v1 + 11971);
 dst = call_printf();
 printf(v1 + 11943);
 dst = call_scanf();
 printf(v1 + 11915);
 dst = call_fopen_fclose();
 printf(v1 + 11886);
 dst = call_fread_fwrite();
 printf(v1 + 11858);
 dst = call_malloc_free();
 printf(v1 + 11830);
 dst = call_memset();
 printf(v1 + 11802);
 dst = call_strchr_strstr();
 return printf(v1 + 11775);
}


// Function: sub_402116 at 0x402116
int sub_402116()
{
 param_linux_syscall();
 return;
}


// Function: param_linux_syscall at 0x402120
int param_linux_syscall(const char *a0)
{
 int v0;
 int result;
 int v2;
 int v3;
 int v4;

 v2 = (int)&_GLOBAL_OFFSET_TABLE_;
 v0 = (int)a0;
 result = 0;
 v3 = syscall(5, a0);
 if (v3 >= 0)
 {
 v0 = v3;
 syscall(6, v3);
 v4 = v3;
 return v4;
 }
 v4 = -errno;
 return v4;
}


// Function: sub_40219e at 0x40219e
int sub_40219e()
{
 call_linux_syscall();
 return;
}


// Function: call_linux_syscall at 0x4021a0
int call_linux_syscall()
{
 int v3; // ebx
 int v0; // [bp-0xc]
 int v1; // [bp-0x8]

 v1 = v3;
 v0 = param_linux_syscall("/etc/passwd");
 return (v0 >= 0 ? 42 : -1);
}


// Function: sub_4021dd at 0x4021dd
int sub_4021dd()
{
 param_win32_api();
 return;
}


// Function: param_win32_api at 0x4021e0
int param_win32_api(const char *a0)
{
 struct stat v0; // [bp-0x64]
 int v2; // [bp-0xc]

 if (stat(a0, &v0) >= 0)
 {
 v2 = (v0.st_size > 0 ? 42 : -2);
 return v2;
 }
 v2 = -1;
 return v2;
}


// Function: sub_40223c at 0x40223c
int sub_40223c()
{
 call_win32_api();
 return;
}


// Function: call_win32_api at 0x402240
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


// Function: sub_402265 at 0x402265
int sub_402265()
{
 param_fork_exec();
 return;
}


// Function: param_fork_exec at 0x402270
int param_fork_exec(const char *a0, unsigned int a1)
{
 int result; // [bp-0x30]
 int v1; // [bp-0x20]
 int v2; // [bp-0x1c]
 int v3; // [bp-0x18]
 pid_t pid; // [bp-0x14]
 int v5; // [bp-0x10]

 v1 = (int)&_GLOBAL_OFFSET_TABLE_;
 pid = fork();
 if (pid < 0)
 {
 v5 = -1;
 return v5;
 }
 else if (!pid)
 {
 result = 0;
 execl(a0, a0, (char*)NULL);
 _exit(127); /* do not return */
 }
 else
 {
 v2 = waitpid(pid, &v3, 0);
 v5 = (v2 < 0 ? -2 : (!(*(v3) & 127) ? (*(v3) & 0xff00) >> 8 : -3));
 return v5;
 }
}


// Function: sub_402355 at 0x402355
int sub_402355()
{
 call_fork_exec();
 return;
}


// Function: call_fork_exec at 0x402360
int call_fork_exec()
{
 int v3; // ebx
 int pid; // [bp-0xc]
 int v1; // [bp-0x8]

 v1 = v3;
 pid = param_fork_exec("/bin/true", 0);
 return (!pid ? 42 : -1);
}


// Function: sub_4023a7 at 0x4023a7
int sub_4023a7()
{
 param_pipe_communication();
 return;
}


// Function: param_pipe_communication at 0x4023b0
int param_pipe_communication()
{
 int v0; // [bp-0x4c]
 int v1; // [bp-0x48]
 int v2; // [bp-0x44]
 int count; // [bp-0x40]
 int v4; // [bp-0x3c]
 pid_t pid; // [bp-0x38]
 char v6[32]; // [bp-0x34]
 int pipefd[2]; // [bp-0x14]
 int v8; // [bp-0x10]
 int v9; // [bp-0xc]

 v2 = (int)&_GLOBAL_OFFSET_TABLE_;
 if (pipe(pipefd) < 0)
 {
 v9 = -1;
 return v9;
 }
 pid = fork();
 if (pid < 0)
 {
 v9 = -2;
 return v9;
 }
 else if (!pid)
 {
 close(pipefd[0]);
 v4 = v2 - 11737;
 v0 = pipefd[1];
 v1 = v4;
 write(v0, (void*)v1, strlen((char*)v1));
 close(pipefd[1]);
 _exit(0); /* do not return */
 }
 else
 {
 close(pipefd[1]);
 count = read(pipefd[0], v6, 31);
 v6[count] = 0;
 close(pipefd[0]);
 wait(NULL);
 v9 = (count > 0 ? 42 : -3);
 return v9;
 }
}


// Function: sub_4024ef at 0x4024ef
int sub_4024ef()
{
 call_pipe_communication();
 return;
}


// Function: call_pipe_communication at 0x4024f0
int call_pipe_communication()
{
 int v2; // eax
 int v0; // [bp-0xc]

 v0 = v2;
 return param_pipe_communication();
}


// Function: sub_40250c at 0x40250c
int sub_40250c()
{
 param_socket_create();
 return;
}


// Function: param_socket_create at 0x402510
int param_socket_create()
{
 int v0; // [bp-0x28]
 struct sockaddr_in v1; // [sp-0x24]
 int result; // [bp-0x14]
 int sock; // [bp-0x10]
 int v7; // [bp-0xc]

 v0 = (int)&_GLOBAL_OFFSET_TABLE_;
 sock = socket(AF_INET, SOCK_STREAM, 0);
 if (sock < 0)
 {
 v7 = -1;
 return v7;
 }
 result = 1;
 if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &result, sizeof(result)) < 0)
 {
 close(sock);
 v7 = -2;
 return v7;
 }
 memset(&v1, 0, sizeof(v1));
 v1.sin_family = AF_INET;
 v1.sin_port = htons(0);
 v1.sin_addr.s_addr = htonl(INADDR_ANY);
 if (bind(sock, (struct sockaddr *)&v1, sizeof(v1)) < 0)
 {
 close(sock);
 v7 = -3;
 return v7;
 }
 else if (listen(sock, 5) < 0)
 {
 close(sock);
 v7 = -4;
 return v7;
 }
 else
 {
 close(sock);
 v7 = 42;
 return v7;
 }
}


// Function: sub_40268d at 0x40268d
int sub_40268d()
{
 call_socket_create();
 return;
}


// Function: call_socket_create at 0x402690
int call_socket_create()
{
 int v2; // eax
 int v0; // [bp-0xc]

 v0 = v2;
 return param_socket_create();
}


// Function: sub_4026ac at 0x4026ac
int sub_4026ac()
{
 param_shmget_shmat();
 return;
}


// Function: param_shmget_shmat at 0x4026b0
int param_shmget_shmat()
{
 char *v0; // [bp-0x28]
 int len; // [bp-0x24]
 char *ptr; // [bp-0x20]
 int v3; // [bp-0x1c]
 key_t v4; // [bp-0x18]
 int v5; // [bp-0x14]
 char *v6; // [bp-0x10]
 int v7; // [bp-0xc]

 v0 = (char *)&_GLOBAL_OFFSET_TABLE_;
 v6 = "/tmp/binbench_shm";
 v5 = open(v6, O_CREAT | O_RDWR, 0666);
 if (v5 < 0)
 {
 v7 = -1;
 return v7;
 }
 close(v5);
 v4 = ftok(v6, 42);
 if (v4 < 0)
 {
 v7 = -1;
 return v7;
 }
 v3 = shmget(v4, 0x1000, IPC_CREAT | 0666);
 if (v3 < 0)
 {
 v7 = -2;
 return v7;
 }
 ptr = shmat(v3, NULL, 0);
 if (ptr != (void*)-1)
 {
 strcpy(ptr, "Test SHM Data");
 len = strlen(ptr);
 shmdt(ptr);
 shmctl(v3, IPC_RMID, NULL);
 v7 = len;
 return v7;
 }
 v7 = -3;
 return v7;
}


// Function: sub_40281e at 0x40281e
int sub_40281e()
{
 call_shmget_shmat();
 return;
}


// Function: call_shmget_shmat at 0x402820
int call_shmget_shmat()
{
 int v3; // ebx
 int v4; // eax
 int v0; // [bp-0xc]
 int v1; // [bp-0x8]

 v1 = v3;
 v0 = v4;
 v0 = param_shmget_shmat();
 return (v0 > 0 ? 42 : -1);
}


// Function: sub_402852 at 0x402852
int sub_402852()
{
 param_signal_handling();
 return;
}


// Function: param_signal_handling at 0x402860
int param_signal_handling()
{
 int v6; // eax
 int v7; // eax
 int v1; // [bp-0x15]
 int v3; // [bp-0x10]
 int v4; // [bp-0xc]

 if (signal(SIGUSR1, signal_handler) == SIG_ERR)
 {
 v4 = -1;
 return v4;
 }
 else if (signal(SIGALRM, signal_handler) == SIG_ERR)
 {
 v4 = -2;
 return v4;
 }
 else
 {
 signal_received = 0;
 raise(SIGUSR1);
 v3 = 1000;
 while (1)
 {
 v1 = 0;
 if (!signal_received)
 {
 v6 = v3;
 v3 = v6 - 1;
 v1 = v6 > 0;
 }
 if (!v1)
 break;
 usleep(1000);
 }
 if (!signal_received)
 {
 v4 = -3;
 return v4;
 }
 else if (signal_number != SIGUSR1)
 {
 v4 = -4;
 return v4;
 }
 else
 {
 signal_received = 0;
 alarm(1);
 v3 = 2000;
 while (1)
 {
 v1 = 0;
 if (!signal_received)
 {
 v7 = v3;
 v3 = v7 - 1;
 v1 = v7 > 0;
 }
 if (!v1)
 break;
 usleep(1000);
 }
 if (signal_received && signal_number == SIGALRM)
 {
 signal(SIGUSR1, SIG_DFL);
 signal(SIGALRM, SIG_DFL);
 v4 = 42;
 return v4;
 }
 v4 = -5;
 return v4;
 }
 }
}


// Function: sub_402a63 at 0x402a63
void sub_402a63(unsigned int a0)
{
 signal_handler((int)a0);
 return;
}


// Function: signal_handler at 0x402a70
void signal_handler(int a0)
{
 signal_received = 1;
 signal_number = a0;
}


// Function: sub_402a97 at 0x402a97
int sub_402a97()
{
 call_signal_handling();
 return;
}


// Function: call_signal_handling at 0x402aa0
int call_signal_handling()
{
 int v2; // eax
 int v0; // [bp-0xc]

 v0 = v2;
 return param_signal_handling();
}


// Function: sub_402abc at 0x402abc
int sub_402abc()
{
 test_system_calls();
 return;
}


// Function: test_system_calls at 0x402ac0
int test_system_calls()
{
 unsigned int pid; // [bp-0x18]
 char *v1; // [bp-0xc]

 v1 = (char *)&_GLOBAL_OFFSET_TABLE_;
 printf(&g_404250);
 pid = call_linux_syscall();
 printf(v1 + 11668);
 pid = call_win32_api();
 printf(v1 + 11640);
 pid = call_fork_exec();
 printf(v1 + 11612);
 pid = call_pipe_communication();
 printf(v1 + 11584);
 pid = call_socket_create();
 printf(v1 + 11556);
 pid = call_shmget_shmat();
 printf(v1 + 11528);
 pid = call_signal_handling();
 return printf(v1 + 11500);
}


// Function: sub_402bb5 at 0x402bb5
int sub_402bb5()
{
 thread_compute();
 return;
}


// Function: thread_compute at 0x402bc0
void* thread_compute(void *p)
{
 unsigned int *ptr; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = *((unsigned int *)p);
 v1 = v2 * v2;
 ptr = malloc(4);
 *(ptr) = v1;
 return ptr;
}


// Function: sub_402c0e at 0x402c0e
int sub_402c0e()
{
 param_pthread_create();
 return;
}


// Function: param_pthread_create at 0x402c10
int param_pthread_create(unsigned int a0)
{
 void *v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 int count; // [bp-0x1c]
 unsigned int *ptr; // [bp-0x18], Other Possible Types: char
 unsigned int v4; // [bp-0x14]
 pthread_t v5;
 unsigned int v6; // [bp-0xc]

 v0 = (void*)&_GLOBAL_OFFSET_TABLE_;
 v4 = a0;
 count = pthread_create(&v5, NULL, thread_compute, &v4);
 if (!count)
 {
 pthread_join(v5, (void**)&ptr);
 v1 = *(ptr);
 free(ptr);
 v6 = v1;
 return v6;
 }
 v6 = 4294967295;
 return v6;
}


// Function: sub_402ca8 at 0x402ca8
int sub_402ca8()
{
 call_pthread_create();
 return;
}


// Function: call_pthread_create at 0x402cb0
int call_pthread_create()
{
 return param_pthread_create(7);
}


// Function: sub_402cd3 at 0x402cd3
void sub_402cd3(unsigned int a0)
{
 thread_sum();
 return;
}


// Function: thread_sum at 0x402ce0
void* thread_sum(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int i; // [bp-0xc]

 ptr[2] = 0;
 for (i = ptr[0]; i <= ptr[1]; i += 1)
 {
 ptr[2] = i + ptr[2];
 }
 return NULL;
}


// Function: sub_402d31 at 0x402d31
int sub_402d31()
{
 param_pthread_join();
 return;
}


// Function: param_pthread_join at 0x402d40
int param_pthread_join()
{
 void *v0; // [bp-0x4c]
 unsigned int idx; // [bp-0x48]
 unsigned int v2; // [bp-0x44]
 unsigned int i; // [bp-0x40]
 unsigned int v4[9]; // Thread data array
 unsigned int v6; // [bp-0x38]
 unsigned int v14; // [bp-0x34]
 unsigned int v7; // [bp-0x30]
 unsigned int v8; // [bp-0x2c]
 unsigned int v9; // [bp-0x24]
 unsigned int v10; // [bp-0x20]
 pthread_t v11[3]; // Thread IDs
 unsigned int v12; // [bp-0xc]

 v0 = (void*)&_GLOBAL_OFFSET_TABLE_;
 memset(v4, 0, sizeof(v4));
 v4[0] = 1;
 v6 = 10;
 v7 = 11;
 v8 = 20;
 v9 = 21;
 v10 = 30;
 for (i = 0; i < 3; i += 1)
 {
 if (pthread_create(&v11[i], NULL, thread_sum, &v4[i * 3]))
 {
 v12 = 4294967295;
 return v12;
 }
 }
 v2 = 0;
 for (idx = 0; idx < 3; idx += 1)
 {
 if (pthread_join(v11[idx], NULL))
 {
 v12 = 4294967294;
 return v12;
 }
 v2 += v4[idx * 3 + 2];
 }
 v12 = v2;
 return v12;
}


// Function: sub_402e85 at 0x402e85
int sub_402e85()
{
 call_pthread_join();
 return;
}


// Function: call_pthread_join at 0x402e90
int call_pthread_join()
{
 int v2; // eax
 int v0; // [bp-0xc]

 v0 = v2;
 return param_pthread_join();
}


// Function: sub_402eac at 0x402eac
int sub_402eac()
{
 thread_increment();
 return;
}


// Global shared variables for thread synchronization
static pthread_mutex_t global_mutex = PTHREAD_MUTEX_INITIALIZER;
static unsigned int global_counter = 0;

// Function: thread_increment at 0x402eb0
void* thread_increment(void *arg)
{
 unsigned int i;
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int v2 = *ptr;

 for (i = 0; i < v2; i += 1)
 {
 pthread_mutex_lock(&global_mutex);
 global_counter = global_counter + 1;
 pthread_mutex_unlock(&global_mutex);
 usleep(1000);
 }
 return NULL;
}


// Function: sub_402f3a at 0x402f3a
int sub_402f3a()
{
 param_mutex_lock();
 return;
}


// Function: param_mutex_lock at 0x402f40
int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int v1;
 unsigned int j;
 unsigned int i;
 pthread_t *ptr;
 unsigned int v5;

 ptr = malloc(a0 * sizeof(pthread_t));
 if (!ptr)
 {
 v5 = 4294967295;
 return v5;
 }
 global_counter = 0;
 for (i = 0; i < a0; i += 1)
 {
 if (pthread_create(&ptr[i], NULL, thread_increment, &a1))
 {
 free(ptr);
 v5 = 4294967294;
 return v5;
 }
 }
 for (j = 0; j < a0; j += 1)
 {
 pthread_join(ptr[j], NULL);
 }
 free(ptr);
 v1 = a1 * a0;
 v5 = (global_counter == v1 ? 42 : 4294967293);
 return v5;
}


// Function: sub_40308a at 0x40308a
int sub_40308a()
{
 call_mutex_lock();
 return;
}


// Function: call_mutex_lock at 0x403090
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_4030bd at 0x4030bd
int sub_4030bd()
{
 consumer_thread();
 return;
}


static pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cond_var = PTHREAD_COND_INITIALIZER;
static unsigned int data = 0;
static unsigned int ready = 0;

// Function: consumer_thread at 0x4030c0
void* consumer_thread(void *arg)
{
 unsigned int *ptr; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 (void)arg;

 pthread_mutex_lock(&cond_mutex);
 while (!ready)
 {
 pthread_cond_wait(&cond_var, &cond_mutex);
 }
 v2 = data;
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = v2;
 return ptr;
}


// Function: producer_thread at 0x403160

void* producer_thread(void *arg)
{
 (void)arg;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond_var);
 pthread_mutex_unlock(&cond_mutex);
 return NULL;
}


// Function: sub_4031d4 at 0x4031d4
int sub_4031d4()
{
 param_condition_variable();
 return;
}


// Function: param_condition_variable at 0x4031e0
int param_condition_variable()
{
 void *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 void *thread_ret = NULL;
 pthread_t v3;
 pthread_t v4;
 unsigned int v5; // [bp-0xc]

 v0 = (void*)&_GLOBAL_OFFSET_TABLE_;
 ready = 0;
 data = 0;
 if (pthread_create(&v3, NULL, consumer_thread, NULL))
 {
 v5 = 4294967295;
 return v5;
 }
 else if (pthread_create(&v4, NULL, producer_thread, NULL))
 {
 pthread_cancel(v3);
 v5 = 4294967294;
 return v5;
 }
 else
 {
 pthread_join(v3, &thread_ret);
 pthread_join(v4, NULL);
 v1 = *(unsigned int *)thread_ret;
 free(thread_ret);
 v5 = v1;
 return v5;
 }
}


// Function: sub_4032e5 at 0x4032e5
int sub_4032e5()
{
 call_condition_variable();
 return;
}


// Function: call_condition_variable at 0x4032f0
int call_condition_variable()
{
 int v2; // eax
 int v0; // [bp-0xc]

 v0 = v2;
 return param_condition_variable();
}


// Function: sub_40330c at 0x40330c
void sub_40330c(unsigned int a0)
{
 thread_atomic_increment();
 return;
}


// Global atomic counter
static unsigned int atomic_global_counter = 0;

// Function: thread_atomic_increment at 0x403310
void* thread_atomic_increment(void *arg)
{
 unsigned int result;
 unsigned int i;
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int v10 = *ptr;

 for (i = 0; i < v10; i += 1)
 {
 result = 1;
 __sync_fetch_and_add(&atomic_global_counter, result);
 }
 return NULL;
}


// Function: sub_4033b6 at 0x4033b6
void sub_4033b6()
{
 thread_atomic_load_store();
 return;
}


static unsigned int atomic_counter = 0;

// Function: thread_atomic_load_store at 0x4033c0
void* thread_atomic_load_store(void *arg)
{
 unsigned int v0;
 unsigned int v1;
 unsigned int v2;

 (void)arg;
 v1 = atomic_counter;
 v2 = v1;
 v0 = v2 + 100;
 __sync_fetch_and_add(&atomic_counter, 100);
 return NULL;
}


// Function: sub_4033fd at 0x4033fd
int sub_4033fd()
{
 param_atomic_ops();
 return;
}


// Function: param_atomic_ops at 0x403400
int param_atomic_ops(unsigned int a0)
{
 unsigned int v1;
 unsigned int v2;
 unsigned int j;
 pthread_t v4;
 unsigned int i;
 unsigned int result;
 pthread_t *ptr;
 unsigned int v8;
 unsigned int v9;

 v9 = 100;
 ptr = malloc(a0 * sizeof(pthread_t));
 if (!ptr)
 {
 v8 = 4294967295;
 return v8;
 }
 result = 0;
 __sync_lock_test_and_set(&atomic_global_counter, result);
 for (i = 0; i < a0; i += 1)
 {
 if (pthread_create(&ptr[i], NULL, thread_atomic_increment, &v9))
 {
 free(ptr);
 v8 = 4294967294;
 return v8;
 }
 }
 if (!pthread_create(&v4, NULL, thread_atomic_load_store, NULL))
 pthread_join(v4, NULL);
 for (j = 0; j < a0; j += 1)
 {
 pthread_join(ptr[j], NULL);
 }
 v1 = atomic_global_counter;
 v2 = v1;
 free(ptr);
 v8 = (v2 > 0 ? 42 : 4294967293);
 return v8;
}


// Function: sub_40359b at 0x40359b
int sub_40359b()
{
 call_atomic_ops();
 return;
}


// Function: call_atomic_ops at 0x4035a0
int call_atomic_ops()
{
 unsigned int v0; // [bp-0x18]

 v0 = 500;
 return param_atomic_ops(4);
}


// Function: sub_4035cd at 0x4035cd
int sub_4035cd()
{
 thread_tls_test();
 return;
}


// Function: thread_tls_test at 0x4035d0
void* thread_tls_test(void *arg)
{
 unsigned int *ptr;
 void *v0;
 unsigned int v2;

 (void)arg;
 v0 = &_GLOBAL_OFFSET_TABLE_;
 v2 = 100;
 ptr = malloc(8);
 ptr[0] = v2 + 50;
 ptr[1] = v2;
 return ptr;
}


// Function: sub_40365b at 0x40365b
int sub_40365b()
{
 param_thread_local_storage();
 return;
}


// Function: param_thread_local_storage at 0x403660
int param_thread_local_storage(unsigned int a0)
{
 char v0; // [bp-0x41]
 char *v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 unsigned int ptr[2]; // [bp-0x34]
 unsigned int v5[2]; // [bp-0x30]
 unsigned int k; // Loop counter
 unsigned int v7; // [bp-0x28]
 unsigned int v8; // [bp-0x24]
 unsigned int l; // [bp-0-20]
 unsigned int j; // [bp-0x1c]
 unsigned int index; // [bp-0x18]
 unsigned int *p; // [bp-0x14]
 pthread_t *addr; // [bp-0x10]
 unsigned int v14; // [bp-0xc]

 v1 = (char *)&_GLOBAL_OFFSET_TABLE_;
 addr = malloc(a0 * sizeof(pthread_t));
 p = malloc(a0 * sizeof(unsigned int));
 if (addr && p)
 {
 for (index = 0; index < a0; index += 1)
 {
 p[index] = (unsigned int)malloc(16);
 snprintf((char *)p[index], 16, "%s", "TLS_DATA");
 }
 for (j = 0; j < a0; j += 1)
 {
 if (pthread_create(&addr[j], NULL, thread_tls_test, (void *)(unsigned long)p[j]))
 {
 for (l = 0; l <= j; l += 1)
 {
 free((void *)p[l]);
 }
 free(p);
 free(addr);
 v14 = 4294967294;
 return v14;
 }
 }
 k = 0;
 v8 = 0;
 v7 = 0;
 for (; k < a0; k += 1)
 {
 void *thread_ret;
 pthread_join(addr[k], &thread_ret);
 ptr[0] = ((unsigned int *)thread_ret)[0];
 ptr[1] = ((unsigned int *)thread_ret)[1];
 v8 += ptr[0];
 v7 += ptr[1];
 free(thread_ret);
 free((void *)p[k]);
 }
 free(p);
 free(addr);
 v3 = a0 * 100;
 v2 = a0 * 150;
 v0 = 0;
 if (v8 == v3)
 v0 = v7 == v2;
 v14 = ((v0 & 1) ? 42 : 4294967293);
 return v14;
 }
 v14 = 4294967295;
 return v14;
}


// Function: sub_4038db at 0x4038db
int sub_4038db()
{
 call_thread_local_storage();
 return;
}


// Function: call_thread_local_storage at 0x4038e0
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: sub_403903 at 0x403903
int sub_403903()
{
 test_thread_concurrency();
 return;
}


// Function: test_thread_concurrency at 0x403910
int test_thread_concurrency()
{
 unsigned int count; // [bp-0x18]
 char *v1; // [bp-0xc]

 v1 = (char *)&_GLOBAL_OFFSET_TABLE_;
 printf(&g_40433a);
 count = call_pthread_create();
 printf(v1 + 11431);
 count = call_pthread_join();
 printf(v1 + 11403);
 count = call_mutex_lock();
 printf(v1 + 11374);
 count = call_condition_variable();
 printf(v1 + 11346);
 count = call_atomic_ops();
 printf(v1 + 11318);
 count = call_thread_local_storage();
 return printf(v1 + 11290);
}


// Function: sub_4039e8 at 0x4039e8
int sub_4039e8()
{
 main();
 return;
}


// Function: main at 0x4039f0
int main()
{
 unsigned int v0; // [bp-0x10]
 unsigned int result; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 result = 0;
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return result;
}


// Function: sub_403a2a at 0x403a2a
void sub_403a2a()
{
 __do_global_ctors_aux();
 return;
}



// Function: __do_global_ctors_aux removed by preprocessor */
void __do_global_ctors_aux(void) {}


// Function: sub_403a72 at 0x403a72
void sub_403a72()
{
}



/* CRT stub function _fini removed by preprocessor */


