// Angr Decompilation of 6_gcc_Os_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/syscall.h>
#include <fcntl.h>
#include <errno.h>
#include <sched.h>
#include <sys/auxv.h>
#include <netinet/in.h>

/* ARM64 atomic builtin declarations */
extern unsigned int __aarch64_ldadd4_acq_rel(unsigned int, void*);
extern unsigned int __aarch64_cas4_acq_rel(unsigned int, unsigned int, void*);

/* Global variable definitions */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int atomic_counter = 0;
unsigned int shared_counter = 0;
unsigned int signal_number = 0;
unsigned int signal_received = 0;
unsigned int data = 0;
unsigned int ready = 0;
unsigned int i = 0;

/* Additional library function declarations */
extern int __isoc99_sscanf(const char*, const char*, ...);

/* Stack protector */
extern void __stack_chk_fail(void);

/* Valgrind helper */
extern unsigned long arm64g_calculate_condition(unsigned long cc_op, unsigned long cc_dep1, unsigned long cc_dep2, unsigned long cc_ndep);

/* CRT stub function _init removed by preprocessor */



// Forward declarations
int test_standard_library_functions(void);
int test_system_calls(void);
int test_thread_concurrency(void);
void* thread_tls_test(void* arg);

// Inline function for rotate-left
static inline unsigned int __ROL__(unsigned int x, unsigned int n) {
    return (x << n) | (x >> (32 - n));
}

// Function: __dollar_x at 0x4013a0
extern unsigned long long g_414dd0;

long long __dollar_x()
{
 return g_414dd0;
}


// Function: sub_4013b4 at 0x4013b4
long long sub_4013b4(void* v0, void* v1, unsigned long v2)
{
 return (long long)memcpy(v0, v1, v2);
}


// Function: main at 0x4017c0
unsigned int main()
{
 test_system_calls();
 test_standard_library_functions();
 test_thread_concurrency();
 return 0;
}


// Function: init_have_lse_atomics at 0x4017e0
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)getauxval(16), 24) & 4278190081 & 1;
}


// Forward declaration of _start (CRT entry point)
extern void _start(void);

// Function: sub_401804 at 0x401804
void sub_401804(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401870 at 0x401870
void sub_401870()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */







// Function: signal_handler at 0x401954
extern unsigned int signal_number;
extern unsigned int signal_received;

long long signal_handler(unsigned long a0)
{
 signal_received = 1;
 signal_number = a0;
 return a0;
}


// Function: thread_sum at 0x40196c
void * thread_sum(void *arg)
{
 unsigned int *ptr; // x0
 unsigned int v0; // w1
 unsigned int v1; // w3
 unsigned int v2; // w1
 unsigned int v3; // w1

 ptr = arg;
 v0 = *(ptr);
 v1 = ptr[1];
 ptr[2] = 0;
 while (true)
 {
 v2 = v0;
 if (v2 > v1)
 break;
 v3 = v2 + 1;
 ptr[2] = ptr[2] + v2;
 v0 = v3;
 }
 return 0;
}


// Function: thread_compute at 0x401998
void * thread_compute(void *arg)
{
 unsigned int *ptr; // x0
 unsigned int val; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 val = (unsigned int)(unsigned long)arg;
 ptr = malloc(4);
 *(unsigned int *)ptr = val * val;
 return ptr;
}


// Function: thread_increment at 0x4019c4
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;

void * thread_increment(void *arg)
{
 unsigned int v2; // w22
 unsigned int i; // w20
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = arg;
 v2 = *(ptr);
 i = 0;
 while (i < v2)
 {
 pthread_mutex_lock(&counter_mutex);
 i += 1;
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
 usleep(1000);
 }
 return 0;
}


// Function: consumer_thread at 0x401a30
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern unsigned int data;
extern unsigned int i;

void * consumer_thread()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 while (!i)
 {
 pthread_cond_wait((pthread_cond_t *)&cond, (pthread_mutex_t *)&cond_mutex);
 }
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(unsigned int *)ptr = data;
 return ptr;
}


// Function: producer_thread at 0x401a98
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern unsigned int data;
extern unsigned int ready;

void * producer_thread()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)&cond);
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 return 0;
}


// Function: thread_atomic_increment at 0x401af0
extern unsigned int atomic_counter;

void * thread_atomic_increment(void *arg)
{
 unsigned int v2; // w20
 unsigned int v3; // w20
 unsigned int v4; // w20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = 0;
 while (true)
 {
 v3 = v2;
 if (v3 >= *(unsigned int *)arg)
 break;
 __aarch64_ldadd4_acq_rel(1, &atomic_counter);
 v4 = v3 + 1;
 __aarch64_cas4_acq_rel(v3, v3 + 1000, &atomic_counter);
 v2 = v4;
 }
 return 0;
}


// Function: thread_atomic_load_store at 0x401b54
extern unsigned int atomic_counter;

void * thread_atomic_load_store(void *arg)
{
 atomic_counter = atomic_counter + 100;
 return 0;
}


// Function: thread_tls_test at 0x401b74
typedef struct struct_0 {
 char padding_0[16];
 unsigned int field_10;
} struct_0;

void * thread_tls_test(void *arg)
{
 unsigned int *p; // x0
 unsigned int v4;
 unsigned int v5;
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v4 = 100;
 v5 = v4 + 50;
 strncpy((char *)&v4, (char *)arg, 31);
 p = malloc(8);
 p[0] = v4;
 p[1] = v5;
 return p;
}


// Function: param_strcpy at 0x401bc4
long long param_strcpy(char *ptr, char *a1)
{
 unsigned long long len; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 strcpy(ptr, a1);
 len = strlen(ptr);
 return strlen(ptr);
}


// Function: call_strcpy at 0x401bec
extern char __stack_chk_guard;

unsigned long long call_strcpy()
{
 unsigned long long dst; // x0
 char *v0; // [bp-0x40]
 char v1[32]; // [bp-0x28]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 dst = param_strcpy((char *)&v1, "HelloLib");
 if (v2 == *((long long *)&__stack_chk_guard))
 return dst;
 __stack_chk_fail(); /* do not return */
}


// Function: param_strcmp at 0x401c40
unsigned long long param_strcmp(char *a0, char *a1)
{
 unsigned int result; // w0
 unsigned long v5; // cc_dep1
 unsigned int v6; // w0
 char *v0; // [bp-0x10]
 char v2; // [bp+0x0]

 v0 = &v2;
 result = strcmp(a0, a1);
 v5 = result;
 if (!result)
 {
 v6 = 0;
 if (!((char)arm64g_calculate_condition(211, (unsigned long)v5, 0, 0)))
 return 1;
 }
 else
 {
 v6 = 4294967295;
 if (!((char)arm64g_calculate_condition(211, (unsigned long)v5, 0, 0)))
 return 1;
 }
 return v6;
}


// Function: call_strcmp at 0x401c60
int call_strcmp()
{
 unsigned int v2; // w0
 unsigned int v3; // w0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_strcmp("abc", "def");
 v3 = param_strcmp("xyz", "xyz");
 return v2 + v3 + (unsigned int)param_strcmp("bbb", "aaa");
}


// Function: param_strlen at 0x401cc0
long long param_strlen()
{
 char *v2; // x0
 unsigned long long len; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 len = strlen(v2);
 return strlen(v2);
}


// Function: call_strlen at 0x401cd4
unsigned long long call_strlen()
{
 return 12;
}


// Function: param_memcpy at 0x401cdc
int param_memcpy(void* a0, void* a1, unsigned long n)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x401d00
extern char __stack_chk_guard;

long long call_memcpy()
{
 char *v0; // [bp-0x50]
 unsigned long long v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x30]
 unsigned int v3; // [bp-0x28]
 unsigned long flag1; // [bp-0x20]
 unsigned long flag2; // [bp-0x18]
 unsigned int result; // [bp-0x10]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 flag1 = 0;
 flag2 = 0;
 v1 = 85899345930;
 v2 = 171798691870;
 v3 = 50;
 result = 0;
 param_memcpy(&flag1, &v1, 20);
 if (v7 == *((long long *)&__stack_chk_guard))
 return (unsigned int)flag1 + (unsigned int)flag2 + result;
 __stack_chk_fail(); /* do not return */
}


// Function: param_memcmp at 0x401d88
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned int result; // w0
 unsigned long v5; // cc_dep1
 unsigned int v6; // w0
 char *v0; // [bp-0x10]
 char v2; // [bp+0x0]

 v0 = &v2;
 result = memcmp(a0, a1, a2);
 v5 = result;
 if (!result)
 {
 v6 = 0;
 if (!((char)arm64g_calculate_condition(211, (unsigned long)v5, 0, 0)))
 return 1;
 }
 else
 {
 v6 = 4294967295;
 if (!((char)arm64g_calculate_condition(211, (unsigned long)v5, 0, 0)))
 return 1;
 }
 return v6;
}


// Function: call_memcmp at 0x401da8
extern char __stack_chk_guard;

long long call_memcmp()
{
 unsigned long long v9; // x0
 unsigned long long v10; // x0
 char *v0; // [bp-0x70]
 unsigned long long v1; // [bp-0x38]
 unsigned int v2; // [bp-0x30]
 unsigned long long v3; // [bp-0x28]
 unsigned int v4; // [bp-0x20]
 unsigned long long v5; // [bp-0x18]
 unsigned int v6; // [bp-0x10]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 v4 = 4;
 v1 = 8589934593;
 v2 = 3;
 v3 = 8589934593;
 v5 = 8589934593;
 v6 = 3;
 v9 = param_memcmp(&v1, &v3, 12);
 v10 = param_memcmp(&v1, &v5, 12);
 if (v7 == *((long long *)&__stack_chk_guard))
 return (v9 & 4294967295) + v10;
 __stack_chk_fail(); /* do not return */
}


// Function: param_printf at 0x401e5c
int param_printf(unsigned int a0, const char *a1)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x401e74
int call_printf()
{
 return param_printf(42, "Test");
}


// Function: param_scanf at 0x401e84
extern char __stack_chk_guard;

unsigned long long param_scanf()
{
 char *v5; // x0
 unsigned long long v6; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp-0x10], Other Possible Types: unsigned int
 char v2; // [bp-0xc], Other Possible Types: unsigned int
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 if (__isoc99_sscanf(v5, "%d,%d", &v1, &v2) == 2)
 v6 = v1 + v2;
 else
 v6 = 4294967295;
 if (v3 == *((long long *)&__stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: call_scanf at 0x401ef4
unsigned long long call_scanf()
{
 unsigned long long v0; // x0

 v0 = param_scanf();
 return param_scanf();
}


// Function: param_fopen_fclose at 0x401f00
unsigned int param_fopen_fclose()
{
 char *v2; // x0
 FILE *fp; // x0
 unsigned int v4; // w19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 fp = fopen(v2, "r");
 if (!fp)
 return 4294967295;
 v4 = fileno(fp);
 fclose(fp);
 return v4;
}


// Function: call_fopen_fclose at 0x401f48
unsigned long long call_fopen_fclose()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (0 > param_fopen_fclose())
 return 4294967295;
 return 42;
}


// Function: param_fread_fwrite at 0x401f70
extern char __stack_chk_guard;

unsigned long long param_fread_fwrite(char *a0)
{
 void* fp; // x0
 void* v5; // x0
 unsigned long long v6; // x0
 unsigned long long count; // x0
 char *v0; // [bp-0x70]
 char v1; // [bp-0x28]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 fp = fopen(a0, "w+");
 if (fp)
 {
 v5 = fp;
 if (fwrite("BinBench Test Data", 1, 18, fp) != 18)
 {
 fclose(v5);
 v6 = 4294967294;
 }
 else
 {
 rewind(v5);
 count = fread(&v1, 1, 18, v5);
 (&v1)[count] = 0;
 fclose(v5);
 unlink(a0);
 if (count == 18)
 {
 if (strcmp(&v1, "BinBench Test Data"))
 v6 = 4294967293;
 else
 v6 = 42;
 }
 else
 {
 v6 = 4294967293;
 }
 }
 }
 else
 {
 v6 = 4294967295;
 }
 if (v2 == *((long long *)&__stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: call_fread_fwrite at 0x402084
unsigned long long call_fread_fwrite()
{
 unsigned long long count; // x0

 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x402090
unsigned int param_malloc_free(unsigned long long a0)
{
 unsigned int *ptr; // x0
 unsigned long long idx; // x1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx != a0; idx += 1)
 {
 ptr[idx] = 10 * (unsigned int)idx;
 }
 free(ptr);
 return *((int *)(-4 + (char *)ptr + (__ROL__(a0, 2) & 18446744073709551612))) + *(ptr);
}


// Function: call_malloc_free at 0x4020fc
int call_malloc_free()
{
 return param_malloc_free(10);
}


// Function: param_memset at 0x402104
unsigned long long param_memset(void* a0, unsigned long n)
{
 unsigned long v2; // x1
 unsigned long long v3; // x0
 unsigned long v4; // x1
 unsigned long v5; // x1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 memset(a0, 0, n);
 v2 = 0;
 v3 = 0;
 while (true)
 {
 v4 = v2;
 if (v4 == n)
 break;
 v5 = v4 + 1;
 v3 += *((char *)a0 + v4);
 v2 = v5;
 }
 return v3;
}


// Function: call_memset at 0x402150
extern char __stack_chk_guard;

long long call_memset()
{
 unsigned long long idx; // x1
 char *v0; // [bp-0x40]
 char v1; // [bp-0x30]
 unsigned int v2; // [bp-0xc]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 idx = 0;
 do
 {
 *((unsigned int *)&(&v1)[4 * idx]) = 255;
 idx += 1;
 } while (idx != 10);
 param_memset(&v1, 40);
 if (v3 == *((long long *)&__stack_chk_guard))
 return *((int *)&v1) + v2;
 __stack_chk_fail(); /* do not return */
}


// Function: param_strchr_strstr at 0x4021c0
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 char *ptr1; // x0
 unsigned long long v13; // x21
 char *ptr2; // x0
 unsigned long long v15; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr1 = strchr(a0, a1 & 255);
 if (!ptr1)
 v13 = 4294967295;
 else
 v13 = (unsigned long long)(ptr1 - a0) & 4294967295;
 ptr2 = strstr(a0, a2);
 if (!ptr2)
 v15 = 4294967295;
 else
 v15 = (unsigned long long)(ptr2 - a0) & 4294967295;
 return v13 + v15;
}


// Function: call_strchr_strstr at 0x40221c
unsigned long long call_strchr_strstr()
{
 unsigned long long ptr; // x0

 ptr = param_strchr_strstr("Hello BinBench Test", 66, "Bench");
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


// Function: test_standard_library_functions at 0x402234
extern char g_40320d;
extern char g_403231;
extern char g_40324c;
extern char g_403267;
extern char g_40329f;
extern char g_4032bb;
extern char g_4032d7;
extern char g_4032f4;
extern char g_403310;
extern char g_40332c;
extern char g_403348;
extern char g_403363;

/* Define format string globals */
static const char g_403283[] = "memcpy: %d\n";
static const char g_40343d[] = "socket: %d\n";

int test_standard_library_functions()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_40320d);
 __printf_chk(1, &g_403231, call_strcpy() & 4294967295);
 __printf_chk(1, &g_40324c, call_strcmp() & 4294967295);
 __printf_chk(1, &g_403267, 12);
 __printf_chk(1, &g_403283, call_memcpy() & 4294967295);
 __printf_chk(1, &g_40329f, call_memcmp() & 4294967295);
 __printf_chk(1, &g_4032bb, call_printf() & 4294967295);
 __printf_chk(1, &g_4032d7, call_scanf() & 4294967295);
 __printf_chk(1, &g_4032f4, call_fopen_fclose() & 4294967295);
 __printf_chk(1, &g_403310, call_fread_fwrite() & 4294967295);
 __printf_chk(1, &g_40332c, call_malloc_free() & 4294967295);
 __printf_chk(1, &g_403348, call_memset() & 4294967295);
 return __printf_chk(1, &g_403363, call_strchr_strstr() & 4294967295);
}


// Function: param_linux_syscall at 0x402368
unsigned int param_linux_syscall(unsigned long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = syscall(56);
 if (!((char)(v2 >> 31) & 1))
 {
 syscall(57);
 return v2;
 }
 return -(*(__errno_location()));
}


// Function: call_linux_syscall at 0x4023bc
unsigned long long call_linux_syscall()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (0 > param_linux_syscall((unsigned long)"/etc/passwd"))
 return 4294967295;
 return 42;
}


// Function: param_win32_api at 0x4023e4
extern char __stack_chk_guard;

unsigned long long param_win32_api()
{
 unsigned long long v4; // x0
 char *v0; // [bp-0xa0]
 struct stat v1; // [bp-0x58]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 if (((char)(stat("/tmp", &v1) >> 31) & 1))
 {
 v4 = 4294967295;
 }
 else if (0 < v1.st_size)
 {
 v4 = 42;
 }
 else
 {
 v4 = 4294967294;
 }
 if (v2 == *((long long *)&__stack_chk_guard))
 return v4;
 __stack_chk_fail(); /* do not return */
}


// Function: call_win32_api at 0x402450
unsigned long long call_win32_api()
{
 unsigned long long v0; // x0

 v0 = param_win32_api();
 return param_win32_api();
}


// Function: param_fork_exec at 0x40245c
extern char __stack_chk_guard;

unsigned long long param_fork_exec(char *a0, unsigned long a1)
{
 unsigned long long pid; // x0
 unsigned long v5; // x1
 unsigned long long v6; // x0
 char *v0; // [bp-0x30]
 unsigned int v1[1]; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 pid = fork();
 if ((unsigned int)pid >= 0)
 {
 if (!((char)arm64g_calculate_condition(19, (unsigned long)(pid & 4294967295), 0, 0)))
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 if (!((char)(waitpid(pid, (int *)v1, 0) >> 31) & 1))
 {
 v5 = v1[0];
 if ((char)arm64g_calculate_condition(10, v5 & 127, 0, 0))
 v6 = (v5 * 0x100000000000000 | v5 >> 8) & 18374686479671623935 & 255 & 4294967295;
 else
 v6 = 4294967293;
 }
 else
 {
 v6 = 4294967294;
 }
 }
 else
 {
 v6 = 4294967295;
 }
 if (v2 == *((long long *)&__stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: call_fork_exec at 0x402510
unsigned long long call_fork_exec()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 if ((unsigned int)param_fork_exec("/bin/true", 0))
 return 4294967295;
 return 42;
}


// Function: param_pipe_communication at 0x40253c
extern char __stack_chk_guard;

unsigned long long param_pipe_communication()
{
 unsigned long long pid; // x0
 unsigned long long count; // x0
 unsigned long long v8; // x0
 char *v0; // [bp-0x50]
 char v1; // [bp-0x30], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x2c]
 char v3; // [bp-0x28]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 if (!((char)(pipe((int *)&v1) >> 31) & 1))
 {
 pid = fork();
 if ((unsigned int)pid >= 0)
 {
 if (!((char)arm64g_calculate_condition(19, pid & 4294967295, 0, 0)))
 {
 close(v1);
 write(v2, "HelloPipe", 9);
 close(v2);
 _exit(0); /* do not return */
 }
 close(v2);
 count = read(v1, &v3, 31);
 (&v3)[count] = 0;
 close(v1);
 wait(NULL);
 if (0 < count)
 v8 = 42;
 else
 v8 = 4294967293;
 }
 else
 {
 v8 = 4294967294;
 }
 }
 else
 {
 v8 = 4294967295;
 }
 if (v4 == *((long long *)&__stack_chk_guard))
 return v8;
 __stack_chk_fail(); /* do not return */
}


// Function: call_pipe_communication at 0x402624
unsigned long long call_pipe_communication()
{
 unsigned long long v0; // x0

 v0 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x402628
extern char __stack_chk_guard;

unsigned long long param_socket_create()
{
 unsigned long long sock; // x0
 unsigned int v8; // w19
 unsigned long long v9; // x0
 char *v0; // [bp-0x40]
 unsigned int result; // [bp-0x1c]
 struct sockaddr_in v2; // [bp-0x18]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 sock = socket(2, 1, 0);
 if (!((char)(sock >> 31) & 1))
 {
 v8 = sock;
 result = 1;
 if (((char)(setsockopt(sock, 1, 2, &result, 4) >> 31) & 1))
 {
 close(v8);
 v9 = 4294967294;
 }
 else
 {
 v2.sin_family = 2;
 v2.sin_port = 0;
 v2.sin_addr.s_addr = 0;
 if (((char)(bind(v8, (struct sockaddr *)&v2, 16) >> 31) & 1))
 {
 close(v8);
 v9 = 4294967293;
 }
 else if (((char)(listen(v8, 5) >> 31) & 1))
 {
 close(v8);
 v9 = 0xfffffffc;
 }
 else
 {
 close(v8);
 v9 = 42;
 }
 }
 }
 else
 {
 v9 = 4294967295;
 }
 if (v5 == *((long long *)&__stack_chk_guard))
 return v9;
 __stack_chk_fail(); /* do not return */
}


// Function: call_socket_create at 0x40271c
unsigned long long call_socket_create()
{
 unsigned long long sock; // x0

 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x402720
unsigned int param_shmget_shmat()
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 char *v4; // x20
 unsigned int v5; // w19
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = open("/tmp/binbench_shm", 66, 438);
 if (((char)(v2 >> 31) & 1))
 return 4294967295;
 close(v2);
 if (!((char)(ftok("/tmp/binbench_shm", 42) >> 31) & 1))
 {
 v3 = shmget(ftok("/tmp/binbench_shm", 42), 4096, 0600 | IPC_CREAT);
 if (((char)(v3 >> 31) & 1))
 return 4294967294;
 v4 = (char *)shmat(v3, 0, 0);
 if ((char)arm64g_calculate_condition(2, (unsigned long)v4, 1, 0))
 return 4294967293;
 strcpy(v4, "SharedMemory");
 v5 = strlen(v4);
 shmdt(v4);
 shmctl(v3 & 4294967295, 0, 0);
 return v5;
 }
 return 4294967295;
}


// Function: call_shmget_shmat at 0x4027e8
unsigned long long call_shmget_shmat()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (0 >= param_shmget_shmat())
 return 4294967295;
 return 42;
}


// Function: param_signal_handling at 0x402808
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned long long param_signal_handling()
{
 unsigned long v2; // x0
 unsigned int v3; // w20
 unsigned int result; // w20
 unsigned int v5; // w20
 unsigned int v6; // w20
 unsigned int flag1; // w20
 unsigned int v8; // w20
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = (unsigned long)signal(10, (__sighandler_t)signal_handler);
 if ((char)arm64g_calculate_condition(2, (unsigned long)v2, 1, 0))
 {
 return (unsigned long long)v2;
 }
 else if (!((char)arm64g_calculate_condition(2, (unsigned long)signal(14, (__sighandler_t)signal_handler), 1, 0)))
 {
 v3 = 1001;
 signal_received = 0;
 raise(10);
 while (true)
 {
 result = v3;
 if (signal_received || !((v5 = result - 1, result != 1)))
 break;
 usleep(1000);
 v3 = v5;
 }
 if (!signal_received)
 {
 return 4294967293;
 }
 else if (signal_number == 10)
 {
 v6 = 2001;
 signal_received = 0;
 alarm(1);
 while (true)
 {
 flag1 = v6;
 if (signal_received || !((v8 = flag1 - 1, flag1 != 1)))
 break;
 usleep(1000);
 v6 = v8;
 }
 if (!signal_received || signal_number != 14)
 return 4294967291;
 signal(10, SIG_IGN);
 signal(signal_number, SIG_IGN);
 return 42;
 return 4294967291;
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


// Function: call_signal_handling at 0x402918
unsigned long long call_signal_handling()
{
 unsigned long long v0; // x0

 v0 = param_signal_handling();
 return param_signal_handling();
}


// Function: test_system_calls at 0x40291c
extern const char g_4033b2[];
extern const char g_4033cd[];
extern const char g_4033e9[];
extern const char g_403405[];
extern const char g_403421[];
extern const char g_40343d[];
extern const char g_403459[];
extern const char g_403475[];

int test_system_calls()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_4033b2);
 __printf_chk(1, &g_4033cd, call_linux_syscall() & 4294967295);
 __printf_chk(1, &g_4033e9, call_win32_api() & 4294967295);
 __printf_chk(1, &g_403405, call_fork_exec() & 4294967295);
 __printf_chk(1, &g_403421, param_pipe_communication() & 4294967295);
 __printf_chk(1, g_40343d, param_socket_create() & 4294967295);
 __printf_chk(1, &g_403459, call_shmget_shmat() & 4294967295);
 return __printf_chk(1, &g_403475, param_signal_handling() & 4294967295);
}


// Function: param_pthread_create at 0x4029dc
extern char __stack_chk_guard;

long long param_pthread_create(unsigned int a0)
{
 unsigned int v6; // w19
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x1c]
 unsigned long long v2; // [bp-0x18]
 void *ptr; // [bp-0x10], Other Possible Types: char
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v1 = a0;
 if (!(int)pthread_create((pthread_t *)&v2, 0, (void*(*)(void*))thread_compute, &v1))
 {
 pthread_join(v2, &ptr);
 v6 = *(unsigned int *)ptr;
 free(ptr);
 }
 else
 {
 v6 = 4294967295;
 }
 if (v4 == *((long long *)&__stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: call_pthread_create at 0x402a6c
unsigned long long call_pthread_create()
{
 unsigned long long count; // x0

 count = param_pthread_create(7);
 return param_pthread_create(7);
}


// Function: param_pthread_join at 0x402a74
typedef struct struct_1 {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
} struct_1;

extern char __stack_chk_guard;

 unsigned long long param_pthread_join()
{
 struct_1 v7; // x19
 unsigned long long v8; // x21
 unsigned int v9; // w22
 unsigned long long v10; // x23
 unsigned int flag2; // w22
 unsigned int flag1; // w0
 unsigned long v13; // x20
 unsigned long long v15; // x21
 struct_1 *ptr1; // x19
 char *v0; // [bp-0xa0]
 pthread_t v1[3]; // [bp-0x48]
 struct_1 v2[3]; // [bp-0x30]
 unsigned long long v3; // [bp-0x20]
 unsigned int result; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 ptr1 = v2;
 v8 = (unsigned long long)v1;
 v9 = 3;
 v10 = (unsigned long long)v2;
 v5 = *((long long *)&__stack_chk_guard);
 result = 0;
 v2[0].field_0 = 1;
 v2[0].field_4 = 100;
 v2[0].field_8 = 0;
 v2[1].field_0 = 101;
 v2[1].field_4 = 200;
 v2[1].field_8 = 0;
 v2[2].field_0 = 201;
 v2[2].field_4 = 300;
 v2[2].field_8 = 0;
 v3 = 0;
 while (true)
 {
 flag2 = v9;
 flag1 = pthread_create((pthread_t *)v8, 0, thread_sum, (void *)v10);
 v13 = flag1;
 if (!flag1)
 {
 v8 += 8;
 v10 += 12;
 v9 = flag2 - 1;
 if (flag2 == 1)
 {
 v15 = 0;
 do
 {
 ptr1 = &v2[v15];
 if ((int)pthread_join(*((pthread_t *)v1 + v15), 0))
 {
 if (v5 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967294;
 }
 v13 += ptr1->field_8;
 v15 += 1;
 } while (v15 != 3);
 if (v5 == *((long long *)&__stack_chk_guard))
 return v13 & 4294967295;
 __stack_chk_fail(); /* do not return */
 }
 }
 else if (v5 != *((long long *)&__stack_chk_guard))
 {
 __stack_chk_fail(); /* do not return */
 }
 else
 {
 return 4294967295;
 }
 }
}


// Function: call_pthread_join at 0x402b7c
unsigned long long call_pthread_join()
{
 unsigned long long count; // x0

 count = param_pthread_join();
 return param_pthread_join();
}


// Function: param_mutex_lock at 0x402b80
extern unsigned int shared_counter;

unsigned long long param_mutex_lock(unsigned long a0, unsigned int a1)
{
 unsigned int v3; // w19
  unsigned int *ptr; // x0
 unsigned int *ptr2; // x20
 unsigned long long v6; // x22
 unsigned long long v7; // x22
 unsigned long long v9; // x22
 unsigned long long v10; // x22
 unsigned long long v11; // x22
 unsigned long long v12; // x0
 char *v0; // [bp-0x50]
 unsigned int *arg_values; // [bp-0x4]
 char v2; // [bp+0x0]
 pthread_t *threads;
 unsigned long i;

 v0 = &v2;
 v3 = a0;
 ptr = malloc(a0 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(a0, 3) & 34359738360 & 34359738367);
 if (!ptr)
 return 4294967295;
 threads = (pthread_t *)malloc(a0 * sizeof(pthread_t));
 if (!threads)
 {
 free(ptr);
 return 4294967295;
 }
 arg_values = malloc(a0 * sizeof(unsigned int));
 if (!arg_values)
 {
 free(threads);
 free(ptr);
 return 4294967295;
 }
 for (i = 0; i < a0; i++)
 arg_values[i] = a1;
 v6 = 0;
 shared_counter = 0;
 while (true)
 {
 v7 = v6;
 if ((unsigned int)v7 >= v3)
 break;
 v6 = v7 + 1;
 if ((int)pthread_create(&threads[v7], 0, thread_increment, &arg_values[v7]))
 {
 free(arg_values);
 free(threads);
 free(ptr);
 return 4294967294;
 }
 }
 v9 = 0;
 while (true)
 {
 v10 = v9;
 if ((unsigned int)v10 >= v3)
 break;
 v11 = v10 + 1;
 pthread_join(threads[v10], 0);
 v9 = v11;
 }
 free(ptr);
 free(threads);
 free(arg_values);
 if (shared_counter == a1 * v3)
 v12 = 42;
 else
 v12 = 4294967293;
 return v12;
}


// Function: call_mutex_lock at 0x402c60
unsigned long long call_mutex_lock()
{
 unsigned long long v0; // x0

 v0 = param_mutex_lock(4, 1000);
 return param_mutex_lock(4, 1000);
}


// Function: param_condition_variable at 0x402c6c
extern char __stack_chk_guard;
extern unsigned int data;
extern unsigned int ready;

long long param_condition_variable()
{
 unsigned int v6; // w19
 char *v0; // [bp-0x40]
 pthread_t v1; // [bp-0x20], Other Possible Types: unsigned long long
 pthread_t v2; // [bp-0x18], Other Possible Types: unsigned long long
 void *ptr; // [bp-0x10], Other Possible Types: char
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 ready = 0;
 data = 0;
 if ((int)pthread_create(&v2, 0, (void*(*)(void*))consumer_thread, NULL))
 {
 v6 = 4294967295;
 }
 else if ((int)pthread_create(&v1, 0, (void*(*)(void*))producer_thread, NULL))
 {
 v6 = 4294967294;
 (void)pthread_cancel(v2);
 }
 else
 {
 pthread_join(v2, (void **)&ptr);
 pthread_join(v1, 0);
 v6 = *(unsigned int *)ptr;
 free(ptr);
 }
 if (v4 == *((long long *)&__stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: call_condition_variable at 0x402d38
unsigned long long call_condition_variable()
{
 unsigned long long v0; // x0

 v0 = param_condition_variable();
 return param_condition_variable();
}


// Function: param_atomic_ops at 0x402d3c
extern char __stack_chk_guard;
extern unsigned int atomic_counter;

unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned long v5; // x21
  unsigned int *ptr; // x0
 unsigned int *ptr2; // x19
 unsigned long long v8; // x22
 unsigned long long v9; // x22
 unsigned long long v11; // x22
 unsigned long long v12; // x22
 unsigned long long v14; // x0
 char *v0; // [bp-0x60]
 unsigned int v1; // [bp-0x14]
 pthread_t v2; // [bp-0x10], Other Possible Types: unsigned long long
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v5 = a0;
 v1 = a1;
 v3 = *((long long *)&__stack_chk_guard);
 ptr = malloc(v5 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(v5, 3) & 34359738360 & 34359738367);
 if (ptr)
 {
 ptr = ptr;
 atomic_counter = 0;
 v8 = 0;
 while (true)
 {
 v9 = v8;
 if ((unsigned int)v9 >= (unsigned int)v5)
 break;
 v8 = v9 + 1;
 if ((int)pthread_create((pthread_t *)&ptr[2 * v9], 0, thread_atomic_increment, &v1))
 {
 free(ptr);
 if (v3 == *((long long *)&__stack_chk_guard))
 return 4294967294;
 __stack_chk_fail(); /* do not return */
 }
 }
 if (!(int)pthread_create(&v2, 0, thread_atomic_load_store, 0))
 pthread_join(v2, 0);
 v11 = 0;
 while (true)
 {
 v12 = v11;
 if ((unsigned int)v12 >= (unsigned int)v5)
 break;
 pthread_join(*((pthread_t *)&ptr[2 * v12]), 0);
 v11 = v12 + 1;
 }
 free(ptr);
 if (0 < atomic_counter)
 v14 = 42;
 else
 v14 = 4294967293;
 if (v3 == *((long long *)&__stack_chk_guard))
 return v14;
 __stack_chk_fail(); /* do not return */
 }
 else if (v3 != *((long long *)&__stack_chk_guard))
 {
 __stack_chk_fail(); /* do not return */
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_atomic_ops at 0x402e78
unsigned long long call_atomic_ops()
{
 unsigned long long v0; // x0

 v0 = param_atomic_ops(4, 500);
 return param_atomic_ops(4, 500);
}


// Function: param_thread_local_storage at 0x402e84
extern char __stack_chk_guard;

unsigned long long param_thread_local_storage(unsigned int a0)
{
 unsigned long v4; // x19
 unsigned long long v5; // x20
 unsigned int *p; // x20
 unsigned long long v21; // x22
 unsigned long long idx; // x22
 void *ptr1; // x0
 void *addr; // x21
 unsigned long long v25; // x22
 unsigned long long v26; // x22
 unsigned long long v28; // x22
 unsigned long long v29; // x23
 unsigned long long v30; // x24
 unsigned long long v31; // x22
 unsigned long long v32; // cc_dep1
 unsigned long long v33; // cc_dep2
 unsigned int *ptr; // x0
 unsigned long v35; // x19
 unsigned long long v36; // x0
 unsigned long long v37; // x19
 char *v0; // [bp-0x60]
 unsigned int *ptr2; // [bp-0x10]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v4 = a0;
 v5 = v4 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(v4, 3) & 34359738360 & 34359738367;
 v2 = *((long long *)&__stack_chk_guard);
 addr = malloc(v5);
 ptr = malloc(v5);
 if (!addr || !ptr)
 {
 if (addr) free(addr);
 if (ptr) free(ptr);
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967295;
 }
 p = ptr;
 v21 = 0;
 while (true)
 {
 idx = v21;
 if ((unsigned int)idx >= (unsigned int)v4)
 break;
 ptr1 = malloc(16);
 *((unsigned long long *)&p[2 * idx]) = (unsigned long long)ptr1;
 snprintf(ptr1, 16, "Thread-%d", (int)idx);
 v21 = idx + 1;
 }
 v25 = 0;
 while (true)
 {
 v26 = v25;
 if ((unsigned int)v26 >= (unsigned int)v4)
 break;
 v25 = v26 + 1;
 if ((int)pthread_create((pthread_t *)&addr[2 * v26], 0, thread_tls_test, (void *)(unsigned long long)(*((unsigned long long *)&p[2 * v26]))))
 {
 v37 = 0;
 do
 {
 free((void *)*((long long *)&p[2 * v37]));
 v37 += 1;
 } while ((unsigned int)v37 <= (unsigned int)v26);
 free(p);
 free(addr);
 if (v2 == *((long long *)&__stack_chk_guard))
 return 4294967294;
 __stack_chk_fail(); /* do not return */
 }
 }
 v28 = 0;
 v29 = 0;
 v30 = 0;
 while (true)
 {
 v31 = v28;
 v32 = v4 & 4294967295;
 v33 = v31 & 4294967295;
 if ((unsigned int)v31 >= (unsigned int)v4)
 break;
 {
 void *thread_ret;
 pthread_join(*((pthread_t *)((unsigned long long *)addr + v31)), &thread_ret);
 ptr2 = (unsigned int *)thread_ret;
 }
 v30 += ptr2[0];
 v29 += ptr2[1];
 free(ptr2);
 free((void *)(p[v31]));
 v28 = v31 + 1;
 }
 free(p);
 free(addr);
 v35 = 150 * (unsigned int)v4;
 if (100 * (unsigned int)v4 == (unsigned int)v30 && v35 == (unsigned int)v29)
 {
 v36 = 42;
 }
 else
 {
 v36 = 4294967293;
 }
 if (v2 == *((long long *)&__stack_chk_guard))
 return v36;
 __stack_chk_fail(); /* do not return */
}


// Function: call_thread_local_storage at 0x403040
unsigned long long call_thread_local_storage()
{
 unsigned long long count; // x0

 count = param_thread_local_storage(4);
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x403048
extern char g_40349b;
extern char g_4034b9;
extern char g_4034d5;
extern char g_4034f2;
extern char g_40350e;
extern char g_40352a;
extern char g_403546;

int test_thread_concurrency()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_40349b);
 __printf_chk(1, &g_4034b9, call_pthread_create() & 4294967295);
 __printf_chk(1, &g_4034d5, param_pthread_join() & 4294967295);
 __printf_chk(1, &g_4034f2, call_mutex_lock() & 4294967295);
 __printf_chk(1, &g_40350e, param_condition_variable() & 4294967295);
 __printf_chk(1, &g_40352a, call_atomic_ops() & 4294967295);
 return __printf_chk(1, &g_403546, call_thread_local_storage() & 4294967295);
}


// Failed to decompile function __aarch64_cas4_acq_rel at 0x4030f0



