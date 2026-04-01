// Angr Decompilation of 6_clang_O1_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/syscall.h>
#include <signal.h>
#include <pthread.h>
#include <stdatomic.h>
#include <sys/wait.h>

/* Missing standard library function declarations */
int fileno(FILE *stream);
int bcmp(const void *s1, const void *s2, size_t n);
int snprintf(char *str, size_t size, const char *format, ...);
int unlink(const char *pathname);
int stat(const char *pathname, struct stat *statbuf);
int open(const char *pathname, int flags, mode_t mode);
key_t ftok(const char *pathname, int proj_id);
int __isoc99_sscanf(const char *str, const char *format, ...);
void rewind(FILE *stream);
pid_t waitpid(pid_t pid, int *status, int options);

/* Define struct_0 used throughout the code */
typedef struct struct_0 {
    unsigned int padding_0[260];
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char field_c;
    unsigned int field_5b87;
} struct_0;

/* Global variable definitions */
struct_0 *g_406ff4 = NULL;
unsigned int signal_number;
unsigned int signal_received;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int shared_counter;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
char data;
int i;
char ready;
_Atomic unsigned int atomic_counter;

/* Global string variables */
char g_404074[] = "strcpy test passed\n";
char g_40408f[] = "strcmp test passed\n";
char g_4040aa[] = "strlen test passed\n";
char g_4040c6[] = "memcpy test passed\n";
char g_4040e2[] = "memcmp test passed\n";
char g_4040fe[] = "printf test passed\n";
char g_40411a[] = "scanf test passed\n";
char g_404137[] = "fopen/fclose test passed\n";
char g_404153[] = "malloc/free test passed\n";
char g_40416f[] = "memset test passed\n";
char g_40418b[] = "strchr/strstr test passed\n";
char g_4041a6[] = "Standard library tests completed\n";
char g_4041f5[] = "syscall test passed\n";
char g_404211[] = "stat test passed\n";
char g_40422d[] = "fork/exec test passed\n";
char g_404249[] = "pipe test passed\n";
char g_404265[] = "socket test passed\n";
char g_404281[] = "shm test passed\n";
char g_40429d[] = "signal test passed\n";
char g_4042c3[] = "pthread_create test\n";
char g_4042df[] = "thread_sum test passed\n";
char g_4042fc[] = "mutex test passed\n";
char g_404318[] = "condition variable test passed\n";
char g_404334[] = "atomic ops test passed\n";
char g_404350[] = "thread_local_storage test passed\n";
char g_40436c[] = "=== Testing Standard Library Functions ===\n";
char g_404390[] = "=== Testing System Calls ===\n";
char g_4043ab[] = "=== Testing Thread Concurrency ===\n";

char g_4043cc[] = "compare_data_1";
char g_4043d8[] = "compare_data_2";

/* Missing CRT function declarations */
void frame_dummy(void);
unsigned int __do_global_ctors_aux(void);
void __do_global_dtors_aux(void);
void deregister_tm_clones(void);
unsigned int register_tm_clones(void);
void __x86_get_pc_thunk_dx(void);

/* Additional function declarations */
int execl(const char *path, const char *arg, ...);
void _exit(int status) __attribute__((noreturn));
int raise(int sig);
int usleep(useconds_t usec);
unsigned int alarm(unsigned int seconds);
unsigned int sleep(unsigned int seconds);
int pthread_cancel(pthread_t thread);
void signal_handler(int sig);

/* Forward declarations for thread functions */
void *thread_compute(void *a0);
void *thread_sum(void *ptr);
void *thread_increment(void *ptr);
void *consumer_thread(void *arg);
void *producer_thread(void *arg);
void *thread_atomic_increment(void *a0);
void *thread_atomic_load_store(void *arg);
void *thread_tls_test(void *a0);

/* _ccall stub for decompiler artifacts - removed */

/* CRT stub function _init removed by preprocessor */

void _init(void)
{
 if (g_406ff4)
 ((void (*)(void))g_406ff4)();
 frame_dummy();
 __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 return 0;
}


// Function: sub_4013e0 at 0x4013e0
int sub_4013e0()
{
 return 0;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40141b at 0x40141b
void sub_40141b()
{
 /* [D] Unsupported jumpkind Ijk_SigTRAP at address 4199451() */
}


// Function: sub_40141c at 0x40141c
void sub_40141c()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401420
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401424 at 0x401424
void sub_401424()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones(void) {
    return;
}



// Function: sub_401463 at 0x401463
void sub_401463()
{
}


// Function: sub_401469 at 0x401469
void sub_401469()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 return 0;
}


// Function: sub_4014b7 at 0x4014b7
void sub_4014b7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
{
 deregister_tm_clones();
}


// Function: sub_40154a at 0x40154a
void sub_40154a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy(void) {
}



// Function: __x86_get_pc_thunk_dx at 0x401559
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40155d
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401561 at 0x401561
void sub_401561()
{
 /* param_strcpy - stub */
}


// Function: param_strcpy at 0x401570
int param_strcpy(char *a0, char *a1)
{
 strcpy(a0, a1);
 return strlen(a0);
}


// Function: sub_4015a3 at 0x4015a3
int sub_4015a3()
{
 /* call_strcpy - stub */
 return 0;
}


// Function: call_strcpy at 0x4015b0
int call_strcpy()
{
 char v0[8]; // [bp-0x24]
 char v1[24]; // [bp-0x1c]

 strncpy(v1, "HelloLib", 8);
 return strlen(&v0);
}


// Function: sub_4015e6 at 0x4015e6
void sub_4015e6()
{
 /* param_strcmp - stub */
}


// Function: param_strcmp at 0x4015f0
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v2; // eax
 unsigned int v0; // [bp-0x4]

 v0 = 0;
 v2 = strcmp(a0, a1);
 return (v2 <= 0 ? -(v2) : 1);
}


// Function: sub_40162b at 0x40162b
void sub_40162b()
{
 call_strcmp();
 return;
}


// Function: call_strcmp at 0x401630
unsigned int call_strcmp()
{
 return 0;
}


// Function: sub_401633 at 0x401633
void sub_401633()
{
 /* param_strlen - stub */
}


// Function: param_strlen at 0x401640
int param_strlen(char *a0)
{
 return strlen(a0);
}


// Function: sub_401661 at 0x401661
void sub_401661()
{
 call_strlen();
 return;
}


// Function: call_strlen at 0x401670
unsigned int call_strlen()
{
 return 12;
}


// Function: sub_401676 at 0x401676
void sub_401676()
{
 /* param_memcpy - stub */
}


// Function: param_memcpy at 0x401680
int param_memcpy(void* a0, void* a1, unsigned int n)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 memcpy(a0, a1, n);
 return n;
}


// Function: sub_4016af at 0x4016af
void sub_4016af()
{
 call_memcpy();
}


// Function: call_memcpy at 0x4016b0
unsigned int call_memcpy()
{
 return 90;
}


// Function: sub_4016b6 at 0x4016b6
void sub_4016b6()
{
 /* param_memcmp - stub */
}


// Function: param_memcmp at 0x4016c0
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v1; // ebx
 unsigned int v2; // eax
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 v2 = memcmp(a0, a1, a2);
 return (v2 <= 0 ? -(v2) : 1);
}


// Function: sub_4016ff at 0x4016ff
void sub_4016ff()
{
 call_memcmp();
}


// Function: call_memcmp at 0x401700
int call_memcmp()
{
 unsigned int v4; // ebx
 unsigned int v5; // edi
 unsigned int v6; // esi
 unsigned int v7; // esi
 unsigned int v8; // eax
 unsigned int v9; // ecx
 unsigned int v10; // eax
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v2 = v4;
 v1 = v5;
 v0 = v6;
 v7 = memcmp(&g_4043d8, &g_4043cc, 12);
 v8 = memcmp(&g_4043d8, &g_4043d8, 12);
 v9 = -(v8);
 if (v8 <= 0)
 v9 = 1;
 v10 = -(v7);
 if (v7 <= 0)
 v10 = 1;
 return v10 + v9;
}


// Function: sub_401762 at 0x401762
void sub_401762()
{
 /* param_printf - stub */
}


// Function: param_printf at 0x401770
int param_printf(unsigned int a0, const char *a1)
{
 return printf("Value: %d, Name: %s\n", a0, a1);
}


// Function: sub_40179c at 0x40179c
void sub_40179c()
{
 call_printf();
}


// Function: call_printf at 0x4017a0
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


// Function: sub_4017cd at 0x4017cd
void sub_4017cd()
{
 /* param_scanf - stub */
}


// Function: param_scanf at 0x4017d0
unsigned int param_scanf(char *a0)
{
 int v2; // [bp-0xc]
 int v3; // [bp-0x8]

 v2 = 0;
 v3 = 0;
 return (__isoc99_sscanf(a0, "%d,%d", &v2, &v3) == 2 ? v2 + v3 : 4294967295);
}


// Function: sub_401812 at 0x401812
void sub_401812()
{
 call_scanf();
}


// Function: call_scanf at 0x401820
unsigned int call_scanf()
{
 int v2; // [bp-0x10]
 int v3; // [bp-0xc]

 v2 = 0;
 v3 = 0;
 return (__isoc99_sscanf("123,456", "%d,%d", &v2, &v3) == 2 ? v2 + v3 : 4294967295);
}


// Function: sub_40186a at 0x40186a
void sub_40186a()
{
 /* param_fopen_fclose - stub */
}


// Function: param_fopen_fclose at 0x401870
unsigned int param_fopen_fclose(char *a0)
{
 FILE *fp; // eax
 unsigned int v1; // eax

 fp = fopen(a0, "r");
 if (!fp)
 return 4294967295;
 v1 = fileno(fp);
 fclose(fp);
 return v1;
}


// Function: call_fopen_fclose at 0x4018c0
unsigned int call_fopen_fclose()
{
 FILE* fp; // eax
 unsigned int v2; // eax

 fp = fopen("/etc/passwd", "r");
 if (!fp)
 return 4294967295;
 v2 = fileno(fp);
 fclose(fp);
 return v2 >> 31 | 42;
}


// Function: sub_401918 at 0x401918
void sub_401918()
{
 /* param_fread_fwrite - stub */
}


// Function: param_fread_fwrite at 0x401920
unsigned int param_fread_fwrite(char *a0)
{
 FILE* fp; // eax
 FILE* v3; // esi
 unsigned int count; // eax
 const char* v0; // [bp-0x34]
 char v1[19]; // [bp-0x30]

 fp = fopen(a0, "w+");
 if (!fp)
 return 4294967295;
 v3 = fp;
 if (fwrite("BinBench Test Data", 1, 18, fp) != 18)
 {
 fclose(v3);
 return 4294967294;
 }
 v0 = "BinBench Test Data";
 rewind(v3);
 count = fread(&v1, 1, 18, v3);
 (&v1)[count] = 0;
 fclose(v3);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 return (!bcmp(&v1, v0, 19) ? 42 : 4294967293);
}


// Function: sub_4019fe at 0x4019fe
void sub_4019fe()
{
 call_fread_fwrite();
}


// Function: call_fread_fwrite at 0x401a00
unsigned int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_401a23 at 0x401a23
void sub_401a23()
{
 /* param_malloc_free - stub */
}


// Function: param_malloc_free at 0x401a30
unsigned int param_malloc_free(unsigned int i)
{
 unsigned int *ptr; // eax
 unsigned int v1; // ecx
 unsigned int idx; // edx;
 unsigned int result;

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 if (i)
 {
 v1 = 0;
 idx = 0;
 do
 {
 ptr[idx] = v1;
 idx += 1;
 v1 += 10;
 } while (i != idx);
 }
 result = (i > 0) ? (ptr[0] + ptr[i-1]) : 0;
 free(ptr);
 return result;
}


// Function: sub_401a8a at 0x401a8a
void sub_401a8a()
{
 call_malloc_free();
}


// Function: call_malloc_free at 0x401a90
unsigned int call_malloc_free()
{
 unsigned int i; // ecx
 unsigned int result;
 unsigned int *ptr2 = malloc(40);
 unsigned int *orig_ptr = ptr2;

 if (!ptr2)
 return 4294967295;
 i = 0;
 do
 {
 *ptr2 = i;
 i += 10;
 ptr2 += 1;
 } while (i != 100);
 free(orig_ptr);
 return 0;
}


// Function: sub_401ae9 at 0x401ae9
void sub_401ae9()
{
 /* param_memset - stub */
}


// Function: param_memset at 0x401af0
unsigned int param_memset(void* a0, unsigned int n)
{
 unsigned int v0; // ecx
 unsigned int v1; // eax

 memset(a0, 0, n);
 if (!n)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v1 += *((char *)a0 + v0);
 v0 += 1;
 } while (n != v0);
 return v1;
}


// Function: sub_401b35 at 0x401b35
void sub_401b35()
{
 call_memset();
 return;
}


// Function: call_memset at 0x401b40
unsigned int call_memset()
{
 unsigned int idx; // eax
 char v0[40]; // [bp-0x28]

 idx = 0;
 do
 {
 *((unsigned int *)(v0 + 4 * idx)) = 255;
 idx += 1;
 } while (idx != 10);
 return 0;
}


// Function: sub_401b65 at 0x401b65
void sub_401b65()
{
 /* param_strchr_strstr - stub */
}


// Function: param_strchr_strstr at 0x401b70
int param_strchr_strstr(char *a0, char a1, char *a2)
{
 unsigned int ptr1; // eax
 unsigned int ptr2; // eax

 ptr1 = (unsigned int)strchr(a0, a1);
 ptr2 = (unsigned int)strstr(a0, a2);
 return (-(ptr1 < 1) | ptr1 - (unsigned int)a0) + (-(ptr2 < 1) | ptr2 - (unsigned int)a0);
}


// Function: sub_401bca at 0x401bca
void sub_401bca()
{
 call_strchr_strstr();
}


// Function: call_strchr_strstr at 0x401bd0
unsigned int call_strchr_strstr()
{
 return 15;
}


// Function: sub_401bd6 at 0x401bd6
void sub_401bd6()
{
 test_standard_library_functions();
}


int test_standard_library_functions()
{
 unsigned int v5; // eax
 void* fp; // eax
 unsigned int *ptr1; // eax
 unsigned int i; // ecx
 unsigned int *ptr2; // edx
 unsigned int idx; // eax
 char *v0; // [bp-0x40]
 char v1; // [bp-0x3c]
 char v2[40]; // [bp-0x38]
 char v3[32]; // [bp-0x30]

 puts(&g_40436c);
 strncpy(v3, "HelloLib", 8);
 strlen(v2);
 printf(&g_404074);
 printf(&g_40408f);
 printf(&g_4040aa);
 printf(&g_4040c6);
 v5 = memcmp(&g_4043d8, &g_4043cc, 12);
 printf(&g_4040e2);
 printf("Value: %d, Name: %s\n", 42, "Test");
 printf(&g_4040fe);
 v0 = &v1;
 printf(&g_40411a);
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 fileno(fp);
 fclose(fp);
 }
 printf(&g_404137);
 param_fread_fwrite("/tmp/binbench_test_tmp");
 printf(&g_404153);
 ptr1 = malloc(40);
 if (ptr1)
 {
 i = 0;
 ptr2 = ptr1;
 do
 {
 *(ptr2) = i;
 i += 10;
 ptr2 += 1;
 } while (i != 100);
 free(ptr1);
 }
 printf(&g_40416f);
 idx = 0;
 do
 {
 *((unsigned int *)(v2 + 4 * idx)) = 255;
 idx += 1;
 } while (idx != 10);
 printf(&g_40418b);
 return printf(&g_4041a6);
}


// Function: sub_401e54 at 0x401e54
void sub_401e54()
{
 /* param_linux_syscall - stub */
}


// Function: param_linux_syscall at 0x401e60
unsigned int param_linux_syscall(char *a0)
{
 unsigned int v3; // eax
 unsigned int result; // [bp-0x14]

 result = 0;
 v3 = syscall(5, a0, 0, 0);
 if ((int)v3 < 0)
 return -(errno);
 syscall(6, v3);
 return v3;
}


// Function: sub_401ea9 at 0x401ea9
void sub_401ea9()
{
 call_linux_syscall();
}


// Function: call_linux_syscall at 0x401eb0
unsigned int call_linux_syscall()
{
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int result; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 v2 = v4;
 result = 0;
 v0 = "/etc/passwd";
 v5 = syscall(5);
 if (v5 >= 0)
 {
 v0 = v5;
 syscall(6);
 }
 else
 {
 v5 = -(errno);
 }
 return v5 >> 31 | 42;
}


// Function: sub_401f02 at 0x401f02
void sub_401f02()
{
 /* param_win32_api - stub */
}


// Function: param_win32_api at 0x401f10
unsigned int param_win32_api(char *a0)
{
 struct stat v0; // [bp-0x70]

 if (stat(a0, &v0) < 0)
 return 4294967295;
 return (v0.st_size > 0 ? 42 : 4294967294);
}


// Function: sub_401f55 at 0x401f55
void sub_401f55()
{
 call_win32_api();
}


// Function: call_win32_api at 0x401f60
unsigned int call_win32_api()
{
 struct stat v0; // [bp-0x70]

 if (stat("/etc/passwd", &v0) < 0)
 return 4294967295;
 return (v0.st_size > 0 ? 42 : 4294967294);
}


// Function: sub_401fa8 at 0x401fa8
void sub_401fa8()
{
 /* param_fork_exec - stub */
}


// Function: param_fork_exec at 0x401fb0
unsigned int param_fork_exec(char *a0, unsigned int a1)
{
 unsigned int pid; // eax
 unsigned int result; // [bp-0x10]
 int v1; // [bp-0x8]

 pid = fork();
 if (pid < 0)
 {
 return 4294967295;
 }
 else if (!pid)
 {
 result = 0;
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 else if (waitpid(pid, &v1, 0) >= 0)
 {
 return (v1 >> 8) & 255;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_402021 at 0x402021
void sub_402021()
{
 call_fork_exec();
}


// Function: call_fork_exec at 0x402030
unsigned int call_fork_exec()
{
 unsigned int pid; // eax
 unsigned int v4; // eax
 unsigned int result; // [bp-0x10]
 int v1; // [bp-0x8]

 pid = fork();
 if (pid < 0)
 {
 v4 = 4294967295;
 }
 else if (!pid)
 {
 result = 0;
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (waitpid(pid, &v1, 0) >= 0)
 {
 v4 = 4294967293;
 if (!(v1 & 127))
 v4 = (v1 >> 8) & 255;
 }
 else
 {
 v4 = 4294967294;
 }
 return -(0 < v4) | 42;
}


// Function: sub_4020a8 at 0x4020a8
void sub_4020a8()
{
 /* param_pipe_communication - stub */
}


// Function: param_pipe_communication at 0x4020b0
unsigned int param_pipe_communication()
{
 unsigned int pid; // eax
 unsigned int count; // eax
 char v0; // [bp-0x30], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x2c]
 char v2; // [bp-0x28]

 if (pipe(&v0) < 0)
 return 4294967295;
 pid = fork();
 if (pid < 0)
 {
 return 4294967294;
 }
 else if (pid)
 {
 close(v1);
 count = read(v0, &v2, 31);
 (&v2)[count] = 0;
 close(v0);
 wait(NULL);
 return (count <= 0 ? 42 : 4294967293);
 }
 else
 {
 close(v0);
 write(v1, "HelloPipe", 9);
 close(v1);
 _exit(0); /* do not return */
 }
}


// Function: sub_402188 at 0x402188
void sub_402188()
{
 call_pipe_communication();
}


// Function: call_pipe_communication at 0x402190
unsigned int call_pipe_communication()
{
 return param_pipe_communication();
}


// Function: sub_4021aa at 0x4021aa
void sub_4021aa()
{
 /* param_socket_create - stub */
}


// Function: param_socket_create at 0x4021b0
unsigned int param_socket_create()
{
 unsigned int sock; // eax
 unsigned int v7; // esi
 unsigned int v8; // eax
 unsigned int result; // [bp-0x20]
 struct sockaddr v1; // [bp-0x1c]

 sock = socket(2, 1, 0);
 if (sock < 0)
 return 4294967295;
 v7 = sock;
 result = 1;
 if (setsockopt(v7, 1, 2, &result, 4) < 0)
 {
 close(v7);
 return 4294967294;
 }
 *((unsigned int *)&v1.sa_data[10]) = 0;
 *((unsigned int *)&v1.sa_data[6]) = 0;
 *((unsigned int *)&v1.sa_data[2]) = 0;
 v1.sa_family = 2;
 if (bind(v7, &v1, 16) < 0)
 {
 close(v7);
 return 4294967293;
 }
 v8 = listen(v7, 5);
 close(v7);
 return (v8 < 0 ? 0xfffffffc : 42);
}


// Function: sub_402296 at 0x402296
void sub_402296()
{
 call_socket_create();
}


// Function: call_socket_create at 0x4022a0
unsigned int call_socket_create()
{
 return param_socket_create();
}


// Function: sub_4022ba at 0x4022ba
void sub_4022ba()
{
 /* param_shmget_shmat - stub */
}


// Function: param_shmget_shmat at 0x4022c0
int param_shmget_shmat()
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 struct_0 *ptr; // eax
 unsigned int len; // eax

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
 ptr = shmat(v3, 0, 0);
 if (ptr == 0xffffffff)
 return 4294967293;
 ptr->field_c = 0;
 ptr->field_8 = 2037542765;
 ptr->field_4 = 1699570789;
 ptr->field_0 = 1918986323;
 len = strlen(ptr);
 shmdt(ptr);
 shmctl(v3, 0, 0);
 return len;
}


// Function: sub_4023a2 at 0x4023a2
void sub_4023a2()
{
 call_shmget_shmat();
}


// Function: call_shmget_shmat at 0x4023b0
unsigned int call_shmget_shmat()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]
 unsigned int result;

 v0 = v2;
 result = param_shmget_shmat();
 return (result <= 0 ? 42 : 4294967295);
}


// Function: sub_4023d9 at 0x4023d9
void sub_4023d9()
{
 /* param_signal_handling - stub */
}


// Function: param_signal_handling at 0x4023e0
unsigned int param_signal_handling()
{
 unsigned int v1; // esi
 unsigned int v2; // esi
 unsigned int v3; // esi
 unsigned int v4; // esi
 unsigned int v5; // esi
 unsigned int v6; // esi

 if (signal(10, signal_handler) == 4294967295)
 {
 return 4294967295;
 }
 else if (signal(14, signal_handler) != 4294967295)
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


// Function: signal_handler at 0x402540
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


// Function: sub_402561 at 0x402561
void sub_402561()
{
 call_signal_handling();
}


// Function: call_signal_handling at 0x402570
unsigned int call_signal_handling()
{
 return param_signal_handling();
}


// Function: sub_40258a at 0x40258a
void sub_40258a()
{
 test_system_calls();
}


int test_system_calls()
{
 unsigned int v4; // eax
 unsigned int pid; // eax
 unsigned int result; // [bp-0x70]
 struct stat v1; // [bp-0x70]

 puts(&g_404390);
 if (syscall(5) >= 0)
 syscall(6);
 else
 (void)errno;
 printf(&g_4041f5);
 v4 = stat("/etc/passwd", &v1);
 printf(&g_404211);
 pid = fork();
 if (pid >= 0 && !pid)
 {
 result = 0;
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 printf(&g_40422d);
 param_pipe_communication();
 printf(&g_404249);
 param_socket_create();
 printf(&g_404265);
 printf(&g_404281);
 param_signal_handling();
 return printf(&g_40429d);
}


// Function: sub_402719 at 0x402719
void sub_402719()
{
 thread_compute();
}


// Function: thread_compute at 0x402720
void * thread_compute(void *a0)
{
 unsigned int *ptr; // eax

 ptr = malloc(4);
 *(ptr) = *((unsigned int *)a0) * *((unsigned int *)a0);
 return ptr;
}


// Function: sub_40274c at 0x40274c
void sub_40274c()
{
 /* param_pthread_create - stub */
}


// Function: param_pthread_create at 0x402750
unsigned int param_pthread_create(unsigned int a0)
{
 void *v0; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]

 v1 = a0;
 if (pthread_create(&v2, NULL, thread_compute, &v1))
 return 4294967295;
 pthread_join(v2, &v0);
 free(v0);
 return v0 ? *(unsigned int *)v0 : 0;
}


// Function: sub_4027bb at 0x4027bb
void sub_4027bb()
{
 call_pthread_create();
}


// Function: call_pthread_create at 0x4027c0
unsigned int call_pthread_create()
{
 void *v0; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]

 v1 = 7;
 if (pthread_create(&v2, NULL, thread_compute, &v1))
 return 4294967295;
 pthread_join(v2, &v0);
 free(v0);
 return v0 ? *(unsigned int *)v0 : 0;
}


// Function: sub_40282b at 0x40282b
void sub_40282b(unsigned int a0)
{
 thread_sum();
}


// Function: thread_sum at 0x402830
void * thread_sum(void *ptr)
{
 unsigned int v0; // esi
 unsigned int v1; // edi
 unsigned int *data = (unsigned int *)ptr;

 data[2] = 0;
 v0 = data[0];
 v1 = data[1] - v0;
 if (data[1] >= v0) {
     unsigned int sum = v0 + v1;
     data[2] = (v0 + sum) * (v1 + 1) / 2;
 }
 return NULL;
}


// Function: sub_402869 at 0x402869
void sub_402869()
{
 /* param_pthread_join - stub */
}


// Function: param_pthread_join at 0x402870
unsigned int param_pthread_join()
{
 unsigned int v11; // esi
 unsigned int *v12; // edi
 char *cur; // edi
 unsigned int v14; // ebp
 unsigned int v15; // esi
 unsigned int flag3[3]; // [bp-0x44]
 unsigned int v1; // [bp-0x40]
 unsigned int flag2[3]; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 unsigned int v4; // [bp-0x34]
 unsigned int flag1[3]; // [bp-0x30]
 unsigned int v6; // [bp-0x2c]
 unsigned int v7; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 pthread_t v9[3]; // [bp-0x1c]

 result = 0;
 flag1[0] = 0;
 flag1[1] = 10;
 flag1[2] = 0;
 flag2[0] = 11;
 flag2[1] = 20;
 flag2[2] = 0;
 flag3[0] = 21;
 flag3[1] = 30;
 flag3[2] = 0;
 v1 = 10;
 v3 = 11;
 v4 = 20;
 v6 = 21;
 v7 = 30;
 v11 = 0;
 v12 = (unsigned int *)&flag3;
 while (!pthread_create(&v9[v11], NULL, thread_sum, v12))
 {
 v11 += 1;
 v12 += 12;
 if (v11 == 3)
 {
 cur = (char *)&flag1;
 v14 = 0;
 v15 = 0;
 while (!pthread_join(v9[v14], 0))
 {
 v15 += *((unsigned int *)(cur + 8));
 v14 += 1;
 cur += 12;
 if (v14 == 3)
 return v15;
 }
 return 4294967294;
 }
 }
 return 4294967295;
}


// Function: sub_40294a at 0x40294a
void sub_40294a()
{
 call_pthread_join();
}


// Function: call_pthread_join at 0x402950
unsigned int call_pthread_join()
{
 unsigned int v11; // esi
 unsigned int *v12; // edi
 char *cur; // edi
 unsigned int v14; // ebp
 unsigned int v15; // esi
 unsigned int v0[3]; // [bp-0x44]
 unsigned int v1; // [bp-0x40]
 unsigned int flag2[3]; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 unsigned int v4; // [bp-0x34]
 unsigned int flag1[3]; // [bp-0x30]
 unsigned int v6; // [bp-0x2c]
 unsigned int v7; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 pthread_t v9[3]; // [bp-0x1c]

 result = 0;
 flag1[0] = 0;
 flag1[1] = 10;
 flag1[2] = 0;
 flag2[0] = 11;
 flag2[1] = 20;
 flag2[2] = 0;
 v0[0] = 21;
 v0[1] = 30;
 v0[2] = 0;
 v1 = 10;
 v3 = 11;
 v4 = 20;
 v6 = 21;
 v7 = 30;
 v11 = 0;
 v12 = (unsigned int *)&v0;
 while (!pthread_create(&v9[v11], NULL, thread_sum, v12))
 {
 v11 += 1;
 v12 += 12;
 if (v11 == 3)
 {
 cur = (char *)&flag1;
 v14 = 0;
 v15 = 0;
 while (!pthread_join(v9[v14], 0))
 {
 v15 += *((unsigned int *)(cur + 8));
 v14 += 1;
 cur += 12;
 if (v14 == 3)
 return v15;
 }
 return 4294967294;
 }
 }
 return 4294967295;
}


// Function: sub_402a2a at 0x402a2a
void sub_402a2a()
{
 thread_increment();
}


// Function: thread_increment at 0x402a30
void * thread_increment(void *ptr)
{
 unsigned int v0; // esi
 unsigned int i; // esi
 unsigned int v2; // esi
 unsigned int count = *(unsigned int *)ptr;

 v0 = count;
 if (v0 <= 0)
 return NULL;
 do
 {
 i = v0;
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 v2 = i - 1;
 v0 = v2;
 } while (i != 1);
 return NULL;
}


// Function: sub_402a91 at 0x402a91
void sub_402a91()
{
 /* param_mutex_lock - stub */
}


// Function: param_mutex_lock at 0x402aa0
unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int i; // ebp
 unsigned int *ptr; // eax
 unsigned int v4; // edi
 unsigned int *v5; // esi
 unsigned int *v6; // esi
 unsigned int v7; // edi
 unsigned int *v8; // esi
 unsigned int v9; // edi
 unsigned int v10; // esi
 unsigned int *ptr_array; // [bp-0x18]
 void * (*v1)(void *); // [bp-0x14]

 i = a0;
 ptr = malloc(i * sizeof(pthread_t));
 if (!ptr)
 return 4294967295;
 ptr_array = ptr;
 shared_counter = 0;
 if (i > 0)
 {
 v1 = thread_increment;
 v4 = i;
 v5 = ptr;
 do
 {
 v6 = v5;
 v7 = v4;
 if (pthread_create((pthread_t *)v6, NULL, v1, &a1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v8 = v6 + 1, v9 = v7 - 1, v4 = v7 - 1, v5 = v6 + 1, v7 != 1));
 }
 if (i > 0)
 {
 v10 = 0;
 do
 {
 pthread_join(((pthread_t *)ptr_array)[v10], NULL);
 v10 += 1;
 } while (i != v10);
 }
 free(ptr);
 return (shared_counter == a1 * i ? 42 : 4294967293);
}


// Function: sub_402b92 at 0x402b92
void sub_402b92()
{
 call_mutex_lock();
}


// Function: call_mutex_lock at 0x402ba0
unsigned int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_402bc4 at 0x402bc4
void sub_402bc4()
{
 consumer_thread();
}


// Function: consumer_thread at 0x402bd0
void * consumer_thread(void *arg)
{
 unsigned int *ptr; // eax

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


// Function: sub_402c43 at 0x402c43
void sub_402c43()
{
 producer_thread();
}


// Function: producer_thread at 0x402c50
void * producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return NULL;
}


// Function: sub_402ca5 at 0x402ca5
void sub_402ca5()
{
 /* param_condition_variable - stub */
}


// Function: param_condition_variable at 0x402cb0
unsigned int param_condition_variable()
{
 pthread_t v0;
 void *v1;
 pthread_t v2;

 ready = 0;
 data = 0;
 if (pthread_create(&v0, NULL, consumer_thread, NULL))
 {
 return 4294967295;
 }
 else if (pthread_create(&v2, NULL, producer_thread, NULL))
 {
 pthread_cancel(v0);
 return 4294967294;
 }
 else
 {
 pthread_join(v0, &v1);
 pthread_join(v2, 0);
 if (v1) {
 unsigned int result = *(unsigned int *)v1;
 free(v1);
 return result;
 }
 return 0;
 }
}


// Function: sub_402d5e at 0x402d5e
void sub_402d5e()
{
 call_condition_variable();
}


// Function: call_condition_variable at 0x402d60
unsigned int call_condition_variable()
{
 return param_condition_variable();
}


// Function: sub_402d7a at 0x402d7a
void sub_402d7a(unsigned int a0)
{
 thread_atomic_increment();
}


// Function: thread_atomic_increment at 0x402d80
void * thread_atomic_increment(void *a0)
{
 unsigned int i; // ecx
 unsigned int count = *((unsigned int *)a0);

 if (count <= 0)
 return NULL;
 i = 0;
 do
 {
 atomic_fetch_add_explicit(&atomic_counter, 1, memory_order_relaxed);
 unsigned int expected = atomic_counter;
 atomic_compare_exchange_strong_explicit(&atomic_counter, &expected, i + 1000, memory_order_relaxed, memory_order_relaxed);
 i += 1;
 } while (i != count);
 return NULL;
}


// Function: sub_402dc4 at 0x402dc4
void sub_402dc4()
{
 thread_atomic_load_store();
}


// Function: thread_atomic_load_store at 0x402dd0
void * thread_atomic_load_store(void *arg)
{
 atomic_exchange_explicit(&atomic_counter, (unsigned int)(atomic_counter + 100), memory_order_relaxed);
 return NULL;
}


// Function: sub_402dee at 0x402dee
void sub_402dee()
{
 /* param_atomic_ops - stub */
}


// Function: param_atomic_ops at 0x402df0
unsigned int param_atomic_ops(unsigned int i)
{
 pthread_t *ptr; // eax
 unsigned int v4; // ebp
 pthread_t *v5; // esi
 pthread_t *v6; // esi
 unsigned int v7; // ebp
 pthread_t *v8; // esi
 unsigned int v9; // ebp
 pthread_t *v10; // esi
 pthread_t v1; // [bp-0x14]
 unsigned int v2; // [bp+0x8]

 ptr = malloc(i * sizeof(pthread_t));
 if (!ptr)
 return 4294967295;
 ptr = ptr;
 atomic_exchange_explicit(&atomic_counter, 0, memory_order_relaxed);
 v2 = i;
 if (i > 0)
 {
 v4 = i;
 v5 = ptr;
 do
 {
 v6 = v5;
 v7 = v4;
 if (pthread_create(v6, NULL, thread_atomic_increment, &v2))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v8 = v6 + 1, v9 = v7 - 1, v4 = v7 - 1, v5 = v6 + 1, v7 != 1));
 }
 if (!pthread_create(&v1, NULL, thread_atomic_load_store, NULL))
 pthread_join(v1, NULL);
 if (i > 0)
 {
 v10 = 0;
 do
 {
 pthread_join(ptr[v10], NULL);
 v10 += 1;
 } while (i != v10);
 }
 free(ptr);
 return (atomic_counter <= 0 ? 42 : 4294967293);
}


// Function: sub_402efe at 0x402efe
void sub_402efe()
{
 call_atomic_ops();
}


// Function: call_atomic_ops at 0x402f00
unsigned int call_atomic_ops()
{
 unsigned int v0; // [bp-0x18]

 v0 = 500;
 return param_atomic_ops(4);
}


// Function: sub_402f24 at 0x402f24
void sub_402f24()
{
 thread_tls_test();
}


// Function: thread_tls_test at 0x402f30
void * thread_tls_test(void *a0)
{
 unsigned long v0 = 0; // ldt
 unsigned long v1 = 0; // gdt
 unsigned short v2 = 0; // gs
 unsigned int v3 = 0; // esi
 unsigned int v4 = 0; // edi
 unsigned int *ptr; // eax
 char *str = (char *)a0;

 v3 = 100;
 v4 = v3 + 50;
 ptr = malloc(8);
 ptr[0] = v3;
 ptr[1] = v4;
 (void)v0; (void)v1; (void)v2; (void)str;
 return ptr;
}


// Function: sub_402f83 at 0x402f83
void sub_402f83()
{
 /* param_thread_local_storage - stub */
}


// Function: param_thread_local_storage at 0x402f90
unsigned int param_thread_local_storage(unsigned int i)
{
 unsigned int v3; // esi
 unsigned int *ptr; // edi
 unsigned int v13; // edi
 unsigned int v14; // esi
 unsigned int v15; // ebp
 unsigned int result_ptr[2]; // eax
 char *thread_ptr; // ecx
 unsigned int index; // esi
 char *str_ptr; // eax
 unsigned int j; // esi
 unsigned int *v9; // ebp
 unsigned int *v10; // ebp
 unsigned int *v11; // ebp
 unsigned int v12; // edi
 unsigned int *p; // [bp-0x1c]
 unsigned int *addr; // [bp-0x18]
 void *v2; // [bp-0x14]

 v3 = i * 4;
 ptr = malloc(v3);
 if (!ptr)
 return 4294967295;
 p = ptr;
 if (!p)
 return 4294967295;
 addr = ptr;
 if (i > 0)
 {
 index = 0;
 do
 {
 thread_ptr = malloc(16);
 p[index] = (unsigned int)thread_ptr;
 snprintf(thread_ptr, 16, "Thread-%d", index);
 index += 1;
 } while (i != index);
 }
 if (i > 0)
 {
 j = 0;
 v9 = addr;
 do
 {
 v10 = v9;
 if (pthread_create((pthread_t *)v10, NULL, thread_tls_test, (void *)(unsigned long)p[j]))
 {
 v12 = 4294967295;
 do
 {
 free(p[1 + v12]);
 v12 += 1;
 } while (j != v12);
 free(p);
 free(addr);
 return 4294967294;
 }
 } while ((j += 1, v11 = v10 + 4, v9 = v10 + 4, i != j));
 }
 if (i > 0)
 {
 v13 = 0;
 v14 = 0;
 v15 = 0;
 do
 {
 pthread_join(((pthread_t *)addr)[v13], &v2);
 result_ptr[0] = ((unsigned int *)v2)[0];
 result_ptr[1] = ((unsigned int *)v2)[1];
 v15 += result_ptr[0];
 v14 += result_ptr[1];
 free(v2);
 free(p[v13]);
 v13 += 1;
 } while (i != v13);
 }
 else
 {
 v15 = 0;
 v14 = 0;
 }
 free(p);
 free(addr);
 return (!(i * 150 ^ v14) && !(i * 100 ^ v15) ? 4294967293 : 42);
}


// Function: sub_403142 at 0x403142
void sub_403142()
{
 call_thread_local_storage();
}


// Function: call_thread_local_storage at 0x403150
unsigned int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: sub_403171 at 0x403171
void sub_403171()
{
 test_thread_concurrency();
}


int test_thread_concurrency()
{
 char *v12; // esi
 unsigned int v13; // edi
 unsigned int v14; // ebp
 void *v0; // [bp-0x48], Other Possible Types: char
 pthread_t v1; // [bp-0x44], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x40]
 unsigned int flag2[3]; // [bp-0x3c]
 unsigned int v4; // [bp-0x38]
 unsigned int v5; // [bp-0x34]
 unsigned int flag1[3]; // [bp-0x30]
 unsigned int v7; // [bp-0x2c]
 unsigned int v8; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 pthread_t v10[3]; // [bp-0x1c]

 puts(&g_4043ab);
 v2 = 7;
 if (!pthread_create(&v1, NULL, thread_compute, &v2))
 {
 pthread_join(v1, &v0);
 free(v0);
 }
 printf(&g_4042c3);
 result = 0;
 flag1[0] = 1;
 flag1[1] = 10;
 flag2[0] = 11;
 flag2[1] = 20;
 v4 = 21;
 v5 = 30;
 v13 = 0;
 v12 = (char *)&flag1;
 do
 {
 if (pthread_create(&v10[v13], NULL, thread_sum, v12))
 goto LABEL_4032c0;
 } while ((v13 += 1, v12 += 12, v13 != 3));
 v14 = 0;
 do
 {
 if (pthread_join(v10[v14], NULL))
 break;
 } while ((v14 += 1, v14 != 3));
LABEL_4032c0:
 printf(&g_4042df);
 param_mutex_lock(4, 1000);
 printf(&g_4042fc);
 param_condition_variable();
 printf(&g_404318);
 param_atomic_ops(4);
 printf(&g_404334);
 param_thread_local_storage(4);
 return printf(&g_404350);
}


// Function: sub_403348 at 0x403348
void sub_403348()
{
 main();
}


// Function: main at 0x403350
int main()
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


// Function: sub_403376 at 0x403376
void sub_403376()
{
 __do_global_ctors_aux();
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */
unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_4033c2 at 0x4033c2
void sub_4033c2()
{
}



/* CRT stub function _fini removed by preprocessor */
void _fini(void) {
}


