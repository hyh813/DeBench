// Angr Decompilation of 6_clang_O2_no_g
// Platform: X86

#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE
#define __USE_POSIX
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/syscall.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>
#include <time.h>
#include <strings.h>
#include <stdarg.h>
#include <stdatomic.h>

/* Helper macros and functions */
#define CONCAT(a, b) (((unsigned long long)(a) << 32) | (unsigned long long)(b))

/* Function declarations for potentially missing symbols */
extern int *__errno_location(void);
extern int bcmp(const void *, const void *, size_t);
extern int fileno(FILE *);
extern int __isoc99_sscanf(const char *, const char *, ...);
extern int snprintf(char *str, size_t size, const char *format, ...);
extern unsigned int sleep(unsigned int seconds);
extern unsigned int alarm(unsigned int seconds);
extern int raise(int sig);

static inline int _ccall(int a, int b, int c, int d, int e) {
    (void)a; (void)b; (void)d; (void)e;
    return c < 0;
}

/* Global variable declarations */
extern struct _func_ptr *g_406ff4;

/* Global variable definitions */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int shared_counter = 0;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int atomic_counter = 0;

/* Global string definitions */
char g_404074[] = "";
char g_40408f[] = "";
char g_4040aa[] = "";
char g_4040c6[] = "";
char g_4040e2[] = "";
char g_4040fe[] = "";
char g_40411a[] = "";
char g_404137[] = "";
char g_404153[] = "";
char g_40416f[] = "";
char g_40418b[] = "";
char g_4041a6[] = "";
char g_4041f5[] = "";
char g_404211[] = "";
char g_40422d[] = "";
char g_404249[] = "";
char g_404265[] = "";
char g_404281[] = "";
char g_40429d[] = "";
char g_40436c[] = "";
char g_404390[] = "";
char g_4043cc[12] = "";
char g_4043d8[12] = "";
char g_4042c3[] = "";
char g_4042df[] = "";
char g_4042fc[] = "";
char g_404318[] = "";
char g_404334[] = "";
char g_404350[] = "";
char g_4043ab[] = "";

struct _func_ptr *g_406ff4 = NULL;

/* Global variables for thread synchronization */
unsigned char data = 0;
unsigned char ready = 0;
unsigned char i = 0;

unsigned int signal_number = 0;
unsigned int signal_received = 0;

/* Forward declarations */
void frame_dummy(void);
unsigned int __do_global_ctors_aux(void);
unsigned int *__do_global_dtors_aux(void);
unsigned int register_tm_clones(void);
void signal_handler(int sig);
int sub_401561(void);
int param_strcpy(char *a0, char *a1);
int sub_4015a3(void);
int call_strcpy(void);
int sub_4015e6(void);
unsigned int param_strcmp(char *a0, char *a1);
void sub_40162b(void);
unsigned int call_strcmp(void);
int sub_401633(void);
int param_strlen(char *a0);
void sub_401661(void);
unsigned int call_strlen(void);
int sub_401676(void);
int param_memcpy(void* a0, void* a1, unsigned int n);
void sub_4016af(void);
unsigned int call_memcpy(void);
int sub_4016b6(void);
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2);
int sub_4016ff(void);
int call_memcmp(void);
int sub_401762(void);
int param_printf(unsigned int a0, unsigned int a1);
int sub_40179c(void);
int call_printf(void);
int sub_4017cd(void);
unsigned int param_scanf(char *a0);
int sub_401812(void);
unsigned int call_scanf(void);
int sub_40186a(void);
unsigned int param_fopen_fclose(char *a0);
unsigned int call_fopen_fclose(void);
int sub_401918(void);
unsigned int param_fread_fwrite(char *a0);
int sub_4019f4(void);
unsigned int call_fread_fwrite(void);
int sub_401a23(void);
unsigned int param_malloc_free(unsigned int a0);
void sub_401ae2(void);
unsigned int call_malloc_free(void);
int sub_401af6(void);
unsigned int param_memset(void* a0, unsigned int n);
void sub_401bb1(void);
unsigned int call_memset(void);
int sub_401bc3(void);
int param_strchr_strstr(char *a0, char a1, char *a2);
void sub_401c2a(void);
unsigned int call_strchr_strstr(void);
int sub_401c36(void);
int test_standard_library_functions(void);
int sub_401e3c(void);
unsigned int param_linux_syscall(char *a0);
int sub_401e89(void);
unsigned int call_linux_syscall(void);
int sub_401ee2(void);
unsigned int param_win32_api(char *a0);
int sub_401f35(void);
unsigned int call_win32_api(void);
int sub_401f88(void);
unsigned int param_fork_exec(char *a0, unsigned int a1);
int sub_402001(void);
unsigned int call_fork_exec(void);
int sub_40207c(void);
unsigned int param_pipe_communication(void);
int sub_402158(void);
unsigned int call_pipe_communication(void);
int sub_40217a(void);
unsigned int param_socket_create(void);
int sub_402266(void);
unsigned int call_socket_create(void);
int sub_40228a(void);
int param_shmget_shmat(void);
int sub_402374(void);
unsigned int call_shmget_shmat(void);
int sub_4023a9(void);
unsigned int param_signal_handling(void);
int sub_402531(void);
unsigned int call_signal_handling(void);
int sub_40255a(void);
int test_system_calls(void);
int sub_4026e6(void);
void *thread_compute(void *a0);
int sub_40271c(void);
unsigned int param_pthread_create(unsigned int a0);
int sub_40278b(void);
unsigned int call_pthread_create(void);
int sub_4027fb(void);
void *thread_sum(void *ptr);
int sub_402838(void);
unsigned int param_pthread_join(void);
int sub_402953(void);
unsigned int call_pthread_join(void);
int sub_40297a(void);
void *thread_increment(void *ptr);
int sub_4029e1(void);
unsigned int param_mutex_lock(unsigned int a0, unsigned int a1);
int sub_402ad3(void);
unsigned int call_mutex_lock(void);
int sub_402b04(void);
void *consumer_thread(void);
int sub_402b83(void);
void *producer_thread(void);
int sub_402be5(void);
unsigned int param_condition_variable(void);
int sub_402c9e(void);
unsigned int call_condition_variable(void);
int sub_402cba(void);
void *thread_atomic_increment(void *ptr);
void sub_402d96(void);
void *thread_atomic_load_store(void);
int sub_402dbe(void);
unsigned int param_atomic_ops(unsigned int i);
int sub_402ece(void);
unsigned int call_atomic_ops(void);
int sub_402ef4(void);
void *thread_tls_test(void *a0);
int sub_402f53(void);
unsigned int param_thread_local_storage(unsigned int i);
int sub_403124(void);
unsigned int call_thread_local_storage(void);
int sub_403151(void);
int test_thread_concurrency(void);
int sub_403273(void);
unsigned int main(void);

/* CRT stub function _init removed by preprocessor */
struct _func_ptr {
    void* (*func)(void*);
};


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 ptr[1] = 0;
 v0 = ptr[1];
 return v0;
}


// Function: sub_4013e0 at 0x4013e0
int sub_4013e0()
{
 void* v1; // ebx

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
    __builtin_trap();
}


// Function: sub_40141c at 0x40141c
void sub_40141c()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401420
void __x86_get_pc_thunk_bx()
{
}


// Function: sub_401424 at 0x401424
void sub_401424()
{
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401463 at 0x401463
void sub_401463()
{
}


// Function: sub_401469 at 0x401469
void sub_401469()
{
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

unsigned int *__do_global_dtors_aux(void)
{
 return 0;
}


// Function: sub_40154a at 0x40154a
void sub_40154a()
{
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401559
void __x86_get_pc_thunk_dx()
{
}


// Function: __x86_get_pc_thunk_di at 0x40155d
int __x86_get_pc_thunk_di(int a0)
{
 return 0;
}


// Function: sub_401561 at 0x401561
int sub_401561()
{
 param_strcpy(NULL, NULL);
 return 0;
}


// Function: param_strcpy at 0x401570
int param_strcpy(char *a0, char *a1)
{
 if (!a0 || !a1) return 0;
 strcpy(a0, a1);
 return strlen(a0);
}


// Function: sub_4015a3 at 0x4015a3
int sub_4015a3()
{
 call_strcpy();
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
int sub_4015e6()
{
 param_strcmp(NULL, NULL);
 return 0;
}


// Function: param_strcmp at 0x4015f0
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v1; // ebx
 unsigned int v2; // eax
 unsigned int v0; // [bp-0x4]

 if (!a0 || !a1) return 0;
 v0 = v1;
 v2 = strcmp(a0, a1);
 return (v2 <= 0 ? -(v2) : 1);
}


// Function: sub_40162b at 0x40162b
void sub_40162b()
{
 call_strcmp();
}


// Function: call_strcmp at 0x401630
unsigned int call_strcmp()
{
 char v0[8] = "Hello";
 char v1[8] = "World";
 return param_strcmp(v0, v1);
}


// Function: sub_401633 at 0x401633
int sub_401633()
{
 param_strlen(NULL);
 return 0;
}


// Function: param_strlen at 0x401640
int param_strlen(char *a0)
{
 if (!a0) return 0;
 return strlen(a0);
}


// Function: sub_401661 at 0x401661
void sub_401661()
{
 call_strlen();
}


// Function: call_strlen at 0x401670
unsigned int call_strlen()
{
 char v0[12] = "HelloWorld";
 return param_strlen(v0);
}


// Function: sub_401676 at 0x401676
int sub_401676()
{
 param_memcpy(NULL, NULL, 0);
 return 0;
}


// Function: param_memcpy at 0x401680
int param_memcpy(void* a0, void* a1, unsigned int n)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 if (!a0 || !a1) return 0;
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
 unsigned int v0[4];
 unsigned int v1[4] = {10, 20, 30, 40};
 return param_memcpy(v0, v1, 16);
}


// Function: sub_4016b6 at 0x4016b6
int sub_4016b6()
{
 param_memcmp(NULL, NULL, 0);
 return 0;
}


// Function: param_memcmp at 0x4016c0
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v1; // ebx
 unsigned int v2; // eax
 unsigned int v0; // [bp-0x4]

 if (!a0 || !a1) return 0;
 v0 = v1;
 v2 = memcmp(a0, a1, a2);
 return (v2 <= 0 ? -(v2) : 1);
}


// Function: sub_4016ff at 0x4016ff
int sub_4016ff()
{
 call_memcmp();
 return 0;
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
 if ((char)_ccall(15, 15, v8, 0, 0))
 v9 = 1;
 v10 = -(v7);
 if ((char)_ccall(15, 15, v7, 0, 0))
 v10 = 1;
 return v10 + v9;
}


// Function: sub_401762 at 0x401762
int sub_401762()
{
 param_printf(0, 0);
 return 0;
}


// Function: param_printf at 0x401770
int param_printf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = a1;
 v0 = a0;
 return printf("Value: %d, Name: %s\n");
}


// Function: sub_40179c at 0x40179c
int sub_40179c()
{
 call_printf();
 return 0;
}


// Function: call_printf at 0x4017a0
int call_printf()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = "Test";
 v0 = 42;
 return printf("Value: %d, Name: %s\n");
}


// Function: sub_4017cd at 0x4017cd
int sub_4017cd()
{
 param_scanf(NULL);
 return 0;
}


// Function: param_scanf at 0x4017d0
unsigned int param_scanf(char *a0)
{
 unsigned int v5; // ebx
 char *v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp-0xc], Other Possible Types: unsigned int
 char v3; // [bp-0x8], Other Possible Types: unsigned int
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v1 = &v2;
 v0 = &v3;
 return (__isoc99_sscanf(a0, "%d,%d") == 2 ? v2 + v3 : 4294967295);
}


// Function: sub_401812 at 0x401812
int sub_401812()
{
 call_scanf();
 return 0;
}


// Function: call_scanf at 0x401820
unsigned int call_scanf()
{
 unsigned int v7; // ebx
 unsigned int v8; // esi
 char *v0; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp-0x10], Other Possible Types: unsigned int
 char v3; // [bp-0xc], Other Possible Types: unsigned int
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v7;
 v4 = v8;
 v1 = &v2;
 v0 = &v3;
 return (__isoc99_sscanf("123,456", "%d,%d") == 2 ? v2 + v3 : 4294967295);
}


// Function: sub_40186a at 0x40186a
int sub_40186a()
{
 param_fopen_fclose(NULL);
 return 0;
}


// Function: param_fopen_fclose at 0x401870
unsigned int param_fopen_fclose(char *a0)
{
 FILE *fp; // eax
 unsigned int v1; // edi

 if (!a0) return 4294967295;
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
 void* fp; // eax
 unsigned int v2; // eax

 fp = fopen("/etc/passwd", "r");
 if (!fp)
 return 4294967295;
 v2 = fileno(fp);
 fclose(fp);
 return v2 >> 31 | 42;
}


// Function: sub_401918 at 0x401918
int sub_401918()
{
 param_fread_fwrite(NULL);
 return 0;
}


// Function: param_fread_fwrite at 0x401920
unsigned int param_fread_fwrite(char *a0)
{
 void* fp; // eax
 void* v2; // esi
 unsigned int count; // eax
 char v0; // [bp-0x30]

 fp = fopen(a0, "w+");
 if (!fp)
 return 4294967295;
 v2 = fp;
 if (fwrite("BinBench Test Data", 1, 18, fp) != 18)
 {
 fclose(v2);
 return 4294967294;
 }
 rewind(v2);
 count = fread(&v0, 1, 18, v2);
 (&v0)[count] = 0;
 fclose(v2);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 return (!bcmp(&v0, "BinBench Test Data", 19) ? 42 : 4294967293);
}


// Function: sub_4019f4 at 0x4019f4
int sub_4019f4()
{
 call_fread_fwrite();
 return 0;
}


// Function: call_fread_fwrite at 0x401a00
unsigned int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_401a23 at 0x401a23
int sub_401a23()
{
 param_malloc_free(0);
 return 0;
}


// Function: param_malloc_free at 0x401a30
unsigned int param_malloc_free(unsigned int a0)
{
 unsigned int v0; // edi
 unsigned int *ptr; // eax
 unsigned int result; // edi
 unsigned int flag1; // ecx
 unsigned int index; // edx
 unsigned int v5; // ebp
 unsigned int v6; // edx
 unsigned int idx; // ebp
 unsigned int v8; // esi

 v0 = a0;
 ptr = malloc(v0 * 4);
 if (!ptr)
 return 4294967295;
 result = v0;
 if (result)
 {
 flag1 = v0 & 3;
 index = 0;
 if (v0 - 1 >= 3)
 {
 index = 0;
 v5 = 20;
 do
 {
 ptr[index] = v5 - 20;
 ptr[1 + index] = v5 - 10;
 ptr[2 + index] = v5;
 ptr[3 + index] = v5 + 10;
 index += 4;
 v5 += 40;
 } while ((a0 & 0xfffffffc) != index);
 }
 if (flag1)
 {
 v6 = index * 10;
 idx = 0;
 do
 {
 ptr[idx + index] = v6;
 idx += 1;
 v6 += 10;
 } while (flag1 != idx);
 }
 v8 = *(ptr);
 result = a0;
 }
 free(ptr);
 return v8 + ptr[1 + result];
}


// Function: sub_401ae2 at 0x401ae2
void sub_401ae2()
{
 call_malloc_free();
}


// Function: call_malloc_free at 0x401af0
unsigned int call_malloc_free()
{
 return 90;
}


// Function: sub_401af6 at 0x401af6
int sub_401af6()
{
 param_memset(NULL, 0);
 return 0;
}


// Function: param_memset at 0x401b00
unsigned int param_memset(void* a0, unsigned int n)
{
 unsigned int result; // ecx
 unsigned int i; // edx
 unsigned int v2; // eax
 unsigned int v3; // edx

 memset(a0, 0, n);
 if (!n)
 return 0;
 result = n & 7;
 if (n - 1 < 7)
 {
 i = 0;
 v2 = 0;
 }
 else
 {
 i = 0;
 v2 = 0;
 do
 {
 v2 = *(7 + (char *)a0 + i) + *(6 + (char *)a0 + i) + *(5 + (char *)a0 + i) + *(4 + (char *)a0 + i) + *(3 + (char *)a0 + i) + *(2 + (char *)a0 + i) + *(1 + (char *)a0 + i) + *((char *)a0 + i) + v2;
 i += 8;
 } while ((n & 0xfffffff8) != i);
 }
 if (!result)
 return v2;
 v3 = 0;
 do
 {
 v2 += *((char *)a0 + i + v3);
 v3 += 1;
 } while (result != v3);
 return v2;
}


// Function: sub_401bb1 at 0x401bb1
void sub_401bb1()
{
 call_memset();
}


// Function: call_memset at 0x401bc0
unsigned int call_memset()
{
 unsigned char v0[8];
 return param_memset(v0, 8);
}


// Function: sub_401bc3 at 0x401bc3
int sub_401bc3()
{
 param_strchr_strstr(NULL, 0, NULL);
 return 0;
}


// Function: param_strchr_strstr at 0x401bd0
int param_strchr_strstr(char *a0, char a1, char *a2)
{
 unsigned int ptr1; // eax
 unsigned int ptr2; // eax

 ptr1 = (unsigned int)strchr(a0, a1);
 ptr2 = (unsigned int)strstr(a0, a2);
 return (-(ptr1 < 1) | ptr1 - (unsigned int)a0) + (-(ptr2 < 1) | ptr2 - (unsigned int)a0);
}


// Function: sub_401c2a at 0x401c2a
void sub_401c2a()
{
 call_strchr_strstr();
}


// Function: call_strchr_strstr at 0x401c30
unsigned int call_strchr_strstr()
{
 char v0[16] = "HelloWorldTest";
 return param_strchr_strstr(v0, 'W', "Test");
}


// Function: sub_401c36 at 0x401c36
int sub_401c36()
{
 test_standard_library_functions();
 return 0;
}


// Function: test_standard_library_functions at 0x401c40
int test_standard_library_functions()
{
 unsigned int v5; // eax
 void* fp; // eax
 char *v0; // [bp-0x40]
 char v1; // [bp-0x34]
 char v2[8]; // [bp-0x30]
 char v3[24]; // [bp-0x28]

 puts(&g_40436c);
 strncpy(v3, "HelloLib", 8);
 strlen(&v2);
 printf(&g_404074);
 printf(&g_40408f);
 printf(&g_4040aa);
 printf(&g_4040c6);
 v5 = memcmp(&g_4043d8, &g_4043cc, 12);
 printf(&g_4040e2);
 printf("Value: %d, Name: %s\n");
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
 printf(&g_40416f);
 printf(&g_40418b);
 return printf(&g_4041a6);
}


// Function: sub_401e3c at 0x401e3c
int sub_401e3c()
{
 param_linux_syscall(NULL);
 return 0;
}


// Function: param_linux_syscall at 0x401e40
unsigned int param_linux_syscall(char *a0)
{
 unsigned int v3;
 unsigned int v4;
 unsigned int v0;
 unsigned int result;
 unsigned int v2;

 if (!a0) return 4294967295;
 v2 = v3;
 result = 0;
 v0 = (unsigned int)a0;
 v4 = syscall(SYS_open, a0, O_RDONLY);
 if (v4 < 0)
 return -errno;
 v0 = v4;
 syscall(SYS_close, v0);
 return v4;
}


// Function: sub_401e89 at 0x401e89
int sub_401e89()
{
 call_linux_syscall();
 return 0;
}


// Function: call_linux_syscall at 0x401e90
unsigned int call_linux_syscall()
{
 unsigned int v4;
 unsigned int v5;
 unsigned int v0;
 unsigned int result;
 unsigned int v2;

 v2 = v4;
 result = 0;
 v0 = (unsigned int)"/etc/passwd";
 v5 = syscall(SYS_open, v0, O_RDONLY);
 if (v5 >= 0)
 {
 v0 = v5;
 syscall(SYS_close, v0);
 }
 else
 {
 v5 = -errno;
 }
 return v5 >> 31 | 42;
}


// Function: sub_401ee2 at 0x401ee2
int sub_401ee2()
{
 param_win32_api(NULL);
 return 0;
}


// Function: param_win32_api at 0x401ef0
unsigned int param_win32_api(char *a0)
{
 unsigned int v3; // ebx
 char v0; // [bp-0x5c]
 char v1; // [bp-0x30]
 unsigned int v2; // [bp-0x4]

 if (!a0) return 4294967295;
 v2 = v3;
 if (stat(a0, &v0) < 0)
 return 4294967295;
 return (*((int *)&v1) > 0 ? 42 : 4294967294);
}


// Function: sub_401f35 at 0x401f35
int sub_401f35()
{
 call_win32_api();
 return 0;
}


// Function: call_win32_api at 0x401f40
unsigned int call_win32_api()
{
 unsigned int v4; // ebx
 char v0; // [bp-0x5c]
 char v1; // [bp-0x30]
 unsigned int v2; // [bp-0x4]

 v2 = v4;
 if (stat("/etc/passwd", &v0) < 0)
 return 4294967295;
 return (*((int *)&v1) > 0 ? 42 : 4294967294);
}


// Function: sub_401f88 at 0x401f88
int sub_401f88()
{
 param_fork_exec(NULL, 0);
 return 0;
}


// Function: param_fork_exec at 0x401f90
unsigned int param_fork_exec(char *a0, unsigned int a1)
{
 unsigned int pid; // eax
 unsigned int result; // [bp-0x10]
 unsigned int v1[1]; // [bp-0x8]

 if (!a0) return 4294967295;
 (void)a1;
 pid = fork();
 if (pid < 0)
 {
 return 4294967295;
 }
 else if (!pid)
 {
 result = 0;
 execl(a0, a0, (char *)NULL);
 _exit(127); /* do not return */
 }
 else if (waitpid(pid, (int *)&v1, 0) >= 0)
 {
 return 4294967293;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_402001 at 0x402001
int sub_402001()
{
 call_fork_exec();
 return 0;
}


// Function: call_fork_exec at 0x402010
unsigned int call_fork_exec()
{
 unsigned int pid;
 unsigned int result;
 int status;

 pid = fork();
 if (pid < 0)
 {
 return 4294967295;
 }
 else if (!pid)
 {
 result = 0;
 execl("/bin/true", "/bin/true", NULL);
 _exit(127); /* do not return */
 }
 else if (waitpid(pid, &status, 0) < 0)
 {
 return 4294967295;
 }
 else if (!(status & 127))
 {
 return -(0 < (status & 0xff00)) | 42;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_40207c at 0x40207c
int sub_40207c()
{
 param_pipe_communication();
 return 0;
}


// Function: param_pipe_communication at 0x402080
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
 return ((char)_ccall(15, 15, count, 0, 0) ? 42 : 4294967293);
 }
 else
 {
 close(v0);
 write(v1, "HelloPipe", 9);
 close(v1);
 _exit(0); /* do not return */
 }
}


// Function: sub_402158 at 0x402158
int sub_402158()
{
 call_pipe_communication();
 return 0;
}


// Function: call_pipe_communication at 0x402160
unsigned int call_pipe_communication()
{
 return param_pipe_communication();
}


// Function: sub_40217a at 0x40217a
int sub_40217a()
{
 param_socket_create();
 return 0;
}


// Function: param_socket_create at 0x402180
typedef struct local_sockaddr {
 unsigned short sin_family;
 char sa_data[14];
} local_sockaddr;

unsigned int param_socket_create()
{
 int sock; // eax
 unsigned int v7; // esi
 int v8; // eax
 unsigned int result; // [bp-0x20]
 local_sockaddr v1; // [bp-0x1c]

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
 *((unsigned int *)&v1.sin_family) = 2;
 *((unsigned int *)&v1.sa_data[2]) = 0;
 if (bind(v7, (struct sockaddr *)&v1, 16) < 0)
 {
 close(v7);
 return 4294967293;
 }
 v8 = listen(v7, 5);
 close(v7);
 return (v8 < 0 ? 0xfffffffc : 42);
}


// Function: sub_402266 at 0x402266
int sub_402266()
{
 call_socket_create();
 return 0;
}


// Function: call_socket_create at 0x402270
unsigned int call_socket_create()
{
 return param_socket_create();
}


// Function: sub_40228a at 0x40228a
int sub_40228a()
{
 param_shmget_shmat();
 return 0;
}


// Function: param_shmget_shmat at 0x402290
typedef struct struct_0 {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
 char field_c;
} struct_0;

int param_shmget_shmat()
{
 unsigned int v1; // eax
 unsigned int v2; // esi
 unsigned int v3; // eax
 unsigned int v4; // eax
 struct_0 *ptr; // eax
 unsigned int len; // ebp

 v1 = open("/tmp/binbench_shm", 66, 438);
 v2 = 4294967295;
 if (v1 >= 0)
 {
 close(v1);
 v3 = ftok("/tmp/binbench_shm", 42);
 if (v3 >= 0)
 {
 v4 = shmget(v3, 0x1000, 950);
 if (v4 >= 0)
 {
 ptr = shmat(v4, 0, 0);
 if (ptr != 0xffffffff)
 {
 ptr->field_c = 0;
 ptr->field_8 = 2037542765;
 ptr->field_4 = 1699570789;
 ptr->field_0 = 1918986323;
 len = strlen(ptr);
 shmdt(ptr);
 shmctl(v4, 0, 0);
 return len;
 }
 v2 = 4294967293;
 }
 else
 {
 v2 = 4294967294;
 }
 }
 }
 return v2;
}


// Function: sub_402374 at 0x402374
int sub_402374()
{
 call_shmget_shmat();
 return 0;
}


// Function: call_shmget_shmat at 0x402380
unsigned int call_shmget_shmat()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 return ((char)_ccall(15, 15, param_shmget_shmat(), 0, 0) ? 42 : 4294967295);
}


// Function: sub_4023a9 at 0x4023a9
int sub_4023a9()
{
 param_signal_handling();
 return 0;
}


// Function: param_signal_handling at 0x4023b0
void signal_handler(int sig);

unsigned int param_signal_handling()
{
 unsigned int v1;
 unsigned int v2;
 unsigned int v3;
 unsigned int v4;
 unsigned int v5;
 unsigned int v6;

 if (signal(SIGUSR1, signal_handler) == SIG_ERR)
 {
 return 4294967295;
 }
 else if (signal(SIGALRM, signal_handler) != SIG_ERR)
 {
 signal_received = 0;
 raise(SIGUSR1);
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
 else if (signal_number == SIGUSR1)
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
 else if (signal_number == SIGALRM)
 {
 signal(SIGUSR1, SIG_DFL);
 signal(SIGALRM, SIG_DFL);
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


// Function: signal_handler at 0x402510
void signal_handler(int a0)
{
 signal_received = 1;
 signal_number = a0;
}


// Function: sub_402531 at 0x402531
int sub_402531()
{
 call_signal_handling();
 return 0;
}


// Function: call_signal_handling at 0x402540
unsigned int call_signal_handling()
{
 return param_signal_handling();
}


// Function: sub_40255a at 0x40255a
int sub_40255a()
{
 test_system_calls();
 return 0;
}


// Function: test_system_calls at 0x402560
int test_system_calls()
{
 unsigned int v4; // eax
 unsigned int pid; // eax
 unsigned int result; // [bp-0x70]
 unsigned int v1[11][1]; // [bp-0x6c]

 puts(&g_404390);
 if (syscall(5) >= 0)
 syscall(6);
 else
 __errno_location();
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


// Function: sub_4026e6 at 0x4026e6
int sub_4026e6()
{
 thread_compute(NULL);
 return 0;
}


// Function: thread_compute at 0x4026f0
void *thread_compute(void *a0)
{
 unsigned int *ptr; // eax

 ptr = malloc(4);
 *(ptr) = *(unsigned int *)a0 * *(unsigned int *)a0;
 return ptr;
}


// Function: sub_40271c at 0x40271c
int sub_40271c()
{
 param_pthread_create(0);
 return 0;
}


// Function: param_pthread_create at 0x402720
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int *v0; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]

 v1 = a0;
 if (pthread_create(&v2, 0, (void *(*)(void *))thread_compute, &v1))
 return 4294967295;
 pthread_join(v2, (void **)&v0);
 free(v0);
 return *(v0);
}


// Function: sub_40278b at 0x40278b
int sub_40278b()
{
 call_pthread_create();
 return 0;
}


// Function: call_pthread_create at 0x402790
unsigned int call_pthread_create()
{
 unsigned int *v0; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]

 v1 = 7;
 if (pthread_create(&v2, 0, (void *(*)(void *))thread_compute, &v1))
 return 4294967295;
 pthread_join(v2, (void **)&v0);
 free(v0);
 return *(v0);
}


// Function: sub_4027fb at 0x4027fb
int sub_4027fb()
{
 thread_sum(NULL);
 return 0;
}


// Function: thread_sum at 0x402800
void *thread_sum(void *ptr)
{
 unsigned int v0; // esi
 unsigned int v1; // edi
 unsigned int *p = (unsigned int *)ptr;

 p[2] = 0;
 v0 = p[0];
 v1 = p[1] - v0;
 if (p[1] >= v0)
 p[2] = ((unsigned long long)v1 * (v0 + p[1] + 1)) >> 1;
 return NULL;
}


// Function: sub_402838 at 0x402838
int sub_402838()
{
 param_pthread_join();
 return 0;
}


// Function: param_pthread_join at 0x402840
unsigned int param_pthread_join()
{
 pthread_t v0; // [bp-0x40], Other Possible Types: unsigned int
 pthread_t v1; // [bp-0x3c], Other Possible Types: unsigned int
 pthread_t v2; // [bp-0x38], Other Possible Types: unsigned int
 unsigned int flag3; // [bp-0x34]
 unsigned int v4; // [bp-0x30]
 unsigned int flag2; // [bp-0x2c]
 unsigned int v6; // [bp-0x28]
 unsigned int v7; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 unsigned int v9; // [bp-0x1c]
 unsigned int v10; // [bp-0x18]
 unsigned int result; // [bp-0x14]

 result = 0;
 flag1 = 0;
 flag2 = 0;
 flag3 = 1;
 v4 = 10;
 v6 = 11;
 v7 = 20;
 v9 = 21;
 v10 = 30;
 if (pthread_create(&v0, 0, (void *(*)(void *))thread_sum, &flag3))
 {
 return 4294967295;
 }
 else if (pthread_create(&v1, 0, (void *(*)(void *))thread_sum, &v6))
 {
 return 4294967295;
 }
 else if (pthread_create(&v2, 0, (void *(*)(void *))thread_sum, &v9))
 {
 return 4294967295;
 }
 else if (pthread_join(v0, 0))
 {
 return 4294967294;
 }
 else if (pthread_join(v1, 0))
 {
 return 4294967294;
 }
 else if (!pthread_join(v2, 0))
 {
 return flag1 + flag2 + result;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_402953 at 0x402953
int sub_402953()
{
 call_pthread_join();
 return 0;
}


// Function: call_pthread_join at 0x402960
unsigned int call_pthread_join()
{
 return param_pthread_join();
}


// Function: sub_40297a at 0x40297a
int sub_40297a()
{
 thread_increment(NULL);
 return 0;
}


// Function: thread_increment at 0x402980
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;

void *thread_increment(void *ptr)
{
 unsigned int v0;
 unsigned int i;
 unsigned int v2;

 v0 = *(unsigned int *)ptr;
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


// Function: sub_4029e1 at 0x4029e1
int sub_4029e1()
{
 param_mutex_lock(0, 0);
 return 0;
}


// Function: param_mutex_lock at 0x4029f0
extern unsigned int shared_counter;

unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int i; // edi
 unsigned int *ptr; // eax
 unsigned int *v3; // ebp
 unsigned int *v4; // esi
 unsigned int v5; // edi
 unsigned int v6; // edi
 unsigned int v7; // esi
 unsigned int *threads; // [bp-0x14]

 i = a0;
 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 v3 = ptr;
 shared_counter = 0;
 if (i > 0)
 {
 v4 = v3;
 ptr = v4;
 do
 {
 v5 = i;
 if (pthread_create(v4, 0, thread_increment, &a1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v4 += 4, v6 = v5 - 1, i = v5 - 1, v5 != 1));
 i = a0;
 v3 = ptr;
 if (i > 0)
 {
 v7 = 0;
 do
 {
 pthread_join(v3[v7], 0);
 v7 += 1;
 } while (i != v7);
 }
 }
 free(v3);
 return (shared_counter == a1 * i ? 42 : 4294967293);
}


// Function: sub_402ad3 at 0x402ad3
int sub_402ad3()
{
 call_mutex_lock();
 return 0;
}


// Function: call_mutex_lock at 0x402ae0
unsigned int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_402b04 at 0x402b04
int sub_402b04()
{
 consumer_thread();
 return 0;
}


// Function: consumer_thread at 0x402b10
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern unsigned char data;
extern unsigned char ready;

void *consumer_thread()
{
 unsigned int *ptr;

 pthread_mutex_lock(&cond_mutex);
 if (!ready)
 {
 do
 {
 pthread_cond_wait(&cond, &cond_mutex);
 } while (ready != 1);
 }
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = (!data ? 0 : 42);
 return ptr;
}


// Function: sub_402b83 at 0x402b83
int sub_402b83()
{
 producer_thread();
 return 0;
}


// Function: producer_thread at 0x402b90
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern unsigned char data;
extern unsigned char ready;

void *producer_thread()
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: sub_402be5 at 0x402be5
int sub_402be5()
{
 param_condition_variable();
 return 0;
}


// Function: param_condition_variable at 0x402bf0
extern unsigned char data;
extern unsigned char ready;

unsigned int param_condition_variable()
{
 pthread_t v0; // [bp-0x14], Other Possible Types: unsigned int
 void *v1; // [bp-0x10], Other Possible Types: char
 pthread_t v2; // [bp-0xc]

 ready = 0;
 data = 0;
 if (pthread_create(&v0, 0, consumer_thread, 0))
 {
 return 4294967295;
 }
 else if (pthread_create(&v2, 0, producer_thread, 0))
 {
 pthread_cancel(v0);
 return 4294967294;
 }
 else
 {
 pthread_join(v0, &v1);
 pthread_join(v2, 0);
 free(v1);
 return *(unsigned int *)v1;
 }
}


// Function: sub_402c9e at 0x402c9e
int sub_402c9e()
{
 call_condition_variable();
 return 0;
}


// Function: call_condition_variable at 0x402ca0
unsigned int call_condition_variable()
{
 return param_condition_variable();
}


// Function: sub_402cba at 0x402cba
int sub_402cba()
{
 thread_atomic_increment(NULL);
 return 0;
}


// Function: thread_atomic_increment at 0x402cc0
extern unsigned int atomic_counter;

void *thread_atomic_increment(void *ptr)
{
 unsigned int v0;
 unsigned int result;
 unsigned int i;
 unsigned int temp;
 unsigned int expected;

 v0 = *(unsigned int *)ptr;
 if (v0 <= 0)
 return NULL;
 result = v0 & 3;
 i = 0;
 if (v0 - 1 >= 3)
 {
 i = 0;
 do
 {
 __atomic_fetch_add(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 temp = atomic_counter;
 expected = i + 1000;
 __atomic_compare_exchange_n(&atomic_counter, &temp, expected, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
 __atomic_fetch_add(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 temp = atomic_counter;
 expected = i + 1001;
 __atomic_compare_exchange_n(&atomic_counter, &temp, expected, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
 __atomic_fetch_add(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 temp = atomic_counter;
 expected = i + 1002;
 __atomic_compare_exchange_n(&atomic_counter, &temp, expected, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
 __atomic_fetch_add(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 temp = atomic_counter;
 expected = i + 1003;
 __atomic_compare_exchange_n(&atomic_counter, &temp, expected, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
 i += 4;
 } while (i != (v0 & 0xfffffffc));
 }
 if (!result)
 return NULL;
 do
 {
 __atomic_fetch_add(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 temp = atomic_counter;
 expected = i + 1000;
 __atomic_compare_exchange_n(&atomic_counter, &temp, expected, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
 i += 1;
 result -= 1;
 } while (result != 1);
 return NULL;
}


// Function: sub_402d96 at 0x402d96
void sub_402d96()
{
 thread_atomic_load_store();
}


// Function: thread_atomic_load_store at 0x402da0
extern unsigned int atomic_counter;

void *thread_atomic_load_store()
{
 unsigned int old = atomic_counter;
 __atomic_exchange_n(&atomic_counter, atomic_counter + 100, __ATOMIC_SEQ_CST);
 return 0;
}


// Function: sub_402dbe at 0x402dbe
int sub_402dbe()
{
 param_atomic_ops(0);
 return 0;
}


// Function: param_atomic_ops at 0x402dc0
extern unsigned int atomic_counter;

unsigned int param_atomic_ops(unsigned int i)
{
 unsigned int *ptr; // eax
 unsigned int v4; // ebp
 unsigned int *v5; // esi
 unsigned int *v6; // esi
 unsigned int v7; // bp
 unsigned int *v8; // esi
 unsigned int v9; // bp
 unsigned int v10; // esi
 unsigned int *threads; // [bp-0x18]
 pthread_t v1; // [bp-0x14]
 char v2; // [bp+0x8]

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 __atomic_exchange_n(&atomic_counter, 0, __ATOMIC_SEQ_CST);
 if (i > 0)
 {
 v4 = i;
 v5 = ptr;
 do
 {
 v6 = v5;
 v7 = v4;
 if (pthread_create((pthread_t *)v6, 0, (void *(*)(void *))thread_atomic_increment, &v2))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v8 = v6 + 4, v9 = v7 - 1, v4 = v7 - 1, v5 = v6 + 4, v7 != 1));
 }
 if (!pthread_create(&v1, 0, (void *(*)(void *))thread_atomic_load_store, 0))
 pthread_join(v1, 0);
 if (i > 0)
 {
 v10 = 0;
 do
 {
 pthread_join(*(pthread_t *)&ptr[v10], 0);
 v10 += 1;
 } while (i != v10);
 }
 free(ptr);
 return ((char)_ccall(15, 15, atomic_counter, 0, 0) ? 42 : 4294967293);
}


// Function: sub_402ece at 0x402ece
int sub_402ece()
{
 call_atomic_ops();
 return 0;
}


// Function: call_atomic_ops at 0x402ed0
unsigned int call_atomic_ops()
{
 unsigned int v0; // [bp-0x18]

 v0 = 500;
 return param_atomic_ops(4);
}


// Function: sub_402ef4 at 0x402ef4
int sub_402ef4()
{
 thread_tls_test(NULL);
 return 0;
}


// Function: thread_tls_test at 0x402f00
void *thread_tls_test(void *a0)
{
 unsigned int tls_value = 0;
 unsigned int v3;
 unsigned int v4;
 unsigned int *ptr;

 v3 = tls_value;
 v4 = v3 + 50;
 tls_value = v4;
 ptr = malloc(8);
 ptr[0] = v3;
 ptr[1] = v4;
 return ptr;
}


// Function: sub_402f53 at 0x402f53
int sub_402f53()
{
 param_thread_local_storage(0);
 return 0;
}


// Function: param_thread_local_storage at 0x402f60
unsigned int param_thread_local_storage(unsigned int i)
{
 unsigned int v3;
 unsigned int v13;
 unsigned int v14;
 unsigned int v16;
 unsigned int index;
 unsigned int j;
 unsigned int *v9;
 unsigned int *v10;
 unsigned int *v11;
 unsigned int v12;
 unsigned int *p;
 pthread_t *addr;
 unsigned int **thread_strings;
 char *str_ptr;
 unsigned int *result_ptr;
 void *v2;

 v3 = i * 4;
 thread_strings = malloc(v3);
 addr = malloc(i * sizeof(pthread_t));
 if (!thread_strings || !addr)
 {
 free(thread_strings);
 free(addr);
 return 4294967295;
 }
 p = thread_strings;
 if (i > 0)
 {
 index = 0;
 do
 {
 str_ptr = malloc(16);
 p[index] = (unsigned int)str_ptr;
 snprintf(str_ptr, 16, "Thread-%u", index);
 index += 1;
 } while (i != index);
 if (i > 0)
 {
 j = 0;
 v9 = (unsigned int *)addr;
 do
 {
 v10 = v9;
 if (pthread_create((pthread_t *)v10, 0, (void *(*)(void *))thread_tls_test, p[j]))
 {
 v16 = 0;
 do
 {
 if (v16 < j)
 free(p[v16]);
 v16 += 1;
 } while (v16 < j);
 free(p);
 free(addr);
 return 4294967294;
 }
 } while ((j += 1, v11 = v10 + 4, v9 = v10 + 4, i != j));
 if (i > 0)
 {
 v12 = 0;
 v13 = 0;
 v14 = 0;
 do
 {
 pthread_join(addr[v12], &v2);
 result_ptr = (unsigned int *)v2;
 v14 += result_ptr[0];
 v13 += result_ptr[1];
 free(result_ptr);
 free(p[v12]);
 v12 += 1;
 } while (i != v12);
 goto LABEL_4030a6;
 }
 }
 }
 v14 = 0;
 v13 = 0;
LABEL_4030a6:
 free(p);
 free(addr);
 return (!(i * 150 ^ v13) && !(i * 100 ^ v14) ? 42 : 4294967293);
}


// Function: sub_403124 at 0x403124
int sub_403124()
{
 call_thread_local_storage();
 return 0;
}


// Function: call_thread_local_storage at 0x403130
unsigned int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: sub_403151 at 0x403151
int sub_403151()
{
 test_thread_concurrency();
 return 0;
}


// Function: test_thread_concurrency at 0x403160
int test_thread_concurrency()
{
 void *v0; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]

 puts(&g_4043ab);
 v1 = 7;
 if (!pthread_create(&v2, 0, (void *(*)(void *))thread_compute, &v1))
 {
 pthread_join(v2, &v0);
 free(v0);
 }
 printf(&g_4042c3);
 param_pthread_join();
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


// Function: sub_403273 at 0x403273
int sub_403273()
{
 main();
 return 0;
}


// Function: main at 0x403280
unsigned int main()
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


// Function: sub_4032a6 at 0x4032a6
void sub_4032a6()
{
 __do_global_ctors_aux();
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_4032f2 at 0x4032f2
void sub_4032f2()
{
}



/* CRT stub function _fini removed by preprocessor */


