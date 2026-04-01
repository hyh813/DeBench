// Angr Decompilation of 6_gcc_O2_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <fcntl.h>
#include <errno.h>
#include <stdarg.h>

/* Function declarations */
void test_thread_concurrency(void);
void test_system_calls(void);
void test_standard_library_functions(void);
void signal_handler(unsigned long a0);
void *thread_sum(void *arg);
void *thread_compute(void *arg);
void producer_thread(void);
void *thread_atomic_increment(void *arg);
void *thread_atomic_load_store(void *arg);
void *thread_tls_test(void *arg);
int param_strcmp(char *a0, char *a1);
long long param_strlen(void);
int param_memcpy(void* a0, void* a1, unsigned long n);
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2);
void __stack_chk_fail(void);
int param_printf(unsigned int a0, unsigned long a1);
int call_printf(void);
unsigned long long param_scanf(void);
unsigned int param_fopen_fclose(void);
unsigned long long call_fopen_fclose(void);
unsigned long long param_fread_fwrite(char *a0);
unsigned long long call_fread_fwrite(void);
unsigned int param_malloc_free(unsigned long long a0);
unsigned int call_malloc_free(void);
unsigned long long param_memset(char *a0, unsigned long n);
unsigned long long call_memset(void);
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2);
unsigned long long call_strchr_strstr(void);
int __isoc99_sscanf(const char *str, const char *format, ...);
unsigned long long param_win32_api(void);
unsigned long long call_win32_api(void);
unsigned long long call_fork_exec(void);
unsigned long long param_pipe_communication(void);
unsigned long long call_pipe_communication(void);
unsigned long long call_socket_create(void);
unsigned long long call_shmget_shmat(void);
long long param_pthread_create(unsigned int a0);
unsigned long long param_pthread_join(void);
unsigned long long call_pthread_join(void);
unsigned long long call_mutex_lock(void);
long long param_condition_variable(void);
unsigned long long param_atomic_ops(unsigned long a0, unsigned int a1);
unsigned long long call_atomic_ops(void);
unsigned long long param_thread_local_storage(unsigned long a0);
unsigned long long call_thread_local_storage(void);
extern void _start(void);

/* Atomic operation intrinsics */
extern unsigned long long __aarch64_ldadd4_acq_rel(unsigned long long, unsigned int *);
extern unsigned long long __aarch64_cas4_acq_rel(unsigned long long, unsigned long long, unsigned int *);

/* ARM64 condition calculation helper */
extern char arm64g_calculate_condition(unsigned int, unsigned long, unsigned long, unsigned long);

/* CRT stub function _init removed by preprocessor */

/* Helper macros and functions */
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

/* Stub for CRT functions */
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void frame_dummy(void);
extern int __getauxval(unsigned long type);



// Function: __dollar_x at 0x4013a0
extern unsigned long long g_414dd0;

void __dollar_x()
{
 goto g_414dd0;
}


// Function: sub_4013b4 at 0x4013b4
void* sub_4013b4(void* v0, void* v1, unsigned long v2)
{
 return memcpy(v0, v1, v2);
}


// Function: main at 0x4017c0
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_thread_concurrency(test_system_calls(test_standard_library_functions()));
 return 0;
}


// Function: init_have_lse_atomics at 0x4017e0
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)__getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)__getauxval(16), 24) & 4278190081 & 1;
}


// Function: sub_401804 at 0x401804
void sub_401804(unsigned long a0)
{
 (void)a0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401870 at 0x401870
void sub_401870()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_401888 at 0x401888
void sub_401888()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4018fc at 0x4018fc
void sub_4018fc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401948 at 0x401948
long long sub_401948()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401954 at 0x401954
long long sub_401954(unsigned long a0)
{
 return signal_handler(a0);
}


// Function: signal_handler at 0x401960
extern unsigned int signal_number;
extern unsigned int signal_received;

long long signal_handler(unsigned long a0)
{
 signal_received = 1;
 signal_number = a0;
 return a0;
}


// Function: sub_401978 at 0x401978
long long sub_401978(unsigned long a0)
{
 unsigned long long count; // x0

 count = thread_sum();
 return thread_sum();
}


// Function: thread_sum at 0x401980
void *thread_sum(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned long v0; // x1
 unsigned int v1; // w3
 unsigned long long v2; // x2

 v0 = *(ptr);
 v1 = ptr[1];
 ptr[2] = 0;
 if (v1 < (unsigned int)v0)
 return NULL;
 v2 = 0;
 do
 {
 v2 += v0;
 v0 = (unsigned int)v0 + 1;
 } while ((unsigned int)v0 != v1 + 1);
 ptr[2] = v2;
 return NULL;
}


// Function: thread_compute at 0x4019b4
void * thread_compute(void *arg)
{
 unsigned int *a0 = (unsigned int *)arg;
 unsigned int *result; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 result = malloc(4);
 *(result) = *(a0) * *(a0);
 return result;
}


// Function: thread_increment at 0x4019e4
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;

void *thread_increment(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int i; // w22
 unsigned long long v5; // x19
 unsigned long long v6; // x20
 unsigned int v7; // w19
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 char v3; // [bp+0x0]

 v0 = &v3;
 i = *(ptr);
 if (i <= 0)
 return NULL;
 v1 = v5;
 v2 = v6;
 v7 = 0;
 do
 {
 pthread_mutex_lock(&counter_mutex);
 v7 += 1;
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 } while (i != v7);
 return NULL;
}


// Function: consumer_thread at 0x401a54
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern unsigned int data;
extern unsigned int i;

void * consumer_thread(void *arg)
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 pthread_mutex_lock(&cond_mutex);
 if (!i)
 {
 do
 {
 pthread_cond_wait(&cond, &cond_mutex);
 } while (!i);
 }
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = data;
 return ptr;
}


// Function: sub_401ac8 at 0x401ac8
void sub_401ac8()
{
 producer_thread();
 return;
}


// Function: producer_thread at 0x401ad0
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern unsigned int data;
extern unsigned int ready;

void *producer_thread(void *arg)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 ready = 1;
 data = 42;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return NULL;
}


// Function: sub_401b28 at 0x401b28
long long sub_401b28(unsigned long a0)
{
 unsigned long long count; // x0

 count = thread_atomic_increment();
 return thread_atomic_increment();
}


// Function: thread_atomic_increment at 0x401b30
extern unsigned long long atomic_counter;

void *thread_atomic_increment(void *arg)
{
 unsigned long long v4; // x19
 unsigned long long v5; // x20
 unsigned int i; // w19
 unsigned int v7; // w19
 unsigned int v8; // w19
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 char v3; // [bp+0x0]

 v0 = &v3;
 if (*(unsigned int *)arg <= 0)
 return 0;
 v1 = v4;
 v2 = v5;
 i = 0;
 do
 {
 v7 = i;
 __aarch64_ldadd4_acq_rel(1, &atomic_counter);
 v8 = v7 + 1;
 __aarch64_cas4_acq_rel(v7, v7 + 1000, &atomic_counter);
 i = v8;
 } while (*(unsigned int *)arg != i);
 return 0;
}


// Function: sub_401b9c at 0x401b9c
void sub_401b9c()
{
 thread_atomic_load_store();
 return;
}


// Function: thread_atomic_load_store at 0x401ba0
extern unsigned int atomic_counter;

void *thread_atomic_load_store(void *arg)
{
 __sync_synchronize();
 __sync_synchronize();
 atomic_counter = atomic_counter + 100;
 return NULL;
}


// Function: thread_tls_test at 0x401bc0
typedef struct struct_0 {
 char padding_0[16];
 unsigned int field_10;
} struct_0;

unsigned int *thread_tls_test(char *a0)
{
 struct_0 *v2; // tpidr_el0
 struct_0 *ptr; // x4
 unsigned int v4; // w20
 unsigned int v5; // w19
 unsigned int *p; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = &v2->field_10;
 v4 = *((int *)&ptr->padding_0[0]);
 v5 = v4 + 50;
 *((unsigned int *)&ptr->padding_0[0]) = v5;
 strncpy(v2->padding_0 + 4, a0, 31);
 p = malloc(8);
 p[0] = v4;
 p[1] = v5;
 return p;
}


// Function: param_strcpy at 0x401c10
int param_strcpy(char *a0, char *a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return (unsigned int)((stpcpy(a0, a1) & 4294967295) - a0);
}


// Function: call_strcpy at 0x401c34
unsigned long long call_strcpy()
{
 return 8;
}


// Function: sub_401c3c at 0x401c3c
void sub_401c3c()
{
 param_strcmp();
 return;
}


// Function: param_strcmp at 0x401c40
unsigned long long param_strcmp(char *a0, char *a1)
{
 unsigned long long v3; // x30
 unsigned int result; // w0
 unsigned long v5; // cc_dep1
 unsigned int v6; // w0
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 result = strcmp(a0, a1);
 v5 = result;
 if (!result)
 {
 v6 = 0;
 if (!((char)arm64g_calculate_condition(211, v5, 0, 0)))
 return 1;
 }
 else
 {
 v6 = 4294967295;
 if (!((char)arm64g_calculate_condition(211, v5, 0, 0)))
 return 1;
 }
 return v6;
}


// Function: call_strcmp at 0x401c60
unsigned long long call_strcmp()
{
 return 0;
}


// Function: sub_401c68 at 0x401c68
void sub_401c68()
{
 param_strlen();
 return;
}


// Function: param_strlen at 0x401c70
long long param_strlen()
{
 char *v2 = ""; // x0
 unsigned long long len; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 len = strlen(v2);
 return strlen(v2);
}


// Function: call_strlen at 0x401c84
unsigned long long call_strlen()
{
 return 12;
}


// Function: sub_401c8c at 0x401c8c
void sub_401c8c(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_memcpy();
 return;
}


// Function: param_memcpy at 0x401c90
int param_memcpy(void* a0, void* a1, unsigned long n)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x401cb4
unsigned long long call_memcpy()
{
 return 90;
}


// Function: sub_401cbc at 0x401cbc
void sub_401cbc()
{
 param_memcmp();
 return;
}


// Function: param_memcmp at 0x401cc0
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned long long v3; // x30
 unsigned int result; // w0
 unsigned long v5; // cc_dep1
 unsigned int v6; // w0
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 result = memcmp(a0, a1, a2);
 v5 = result;
 if (!result)
 {
 v6 = 0;
 if (!((char)arm64g_calculate_condition(211, v5, 0, 0)))
 return 1;
 }
 else
 {
 v6 = 4294967295;
 if (!((char)arm64g_calculate_condition(211, v5, 0, 0)))
 return 1;
 }
 return v6;
}


// Function: call_memcmp at 0x401ce0
extern char __stack_chk_guard;

long long call_memcmp()
{
 unsigned long long v9; // x0
 unsigned int v10; // w19
 unsigned long v11; // x19
 unsigned int result; // w0
 unsigned long v13; // cc_dep1
 unsigned int v14; // w0
 unsigned long v15; // x0
 char *v0; // [bp-0x70]
 unsigned long v1; // [bp-0x38]
 unsigned int v2; // [bp-0x30]
 unsigned long long v3; // [bp-0x28]
 unsigned int v4; // [bp-0x20]
 unsigned long long v5; // [bp-0x18]
 unsigned int v6; // [bp-0x10]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 v1 = 8589934593;
 v4 = 4;
 v2 = 3;
 v3 = 8589934593;
 v5 = 8589934593;
 v6 = 3;
 v9 = memcmp(&v1, &v3, 12);
 if (!(unsigned int)v9)
 v10 = 0;
 else
 v10 = 4294967295;
 if ((char)arm64g_calculate_condition(211, v9 & 4294967295, 0, 0))
 v11 = v10;
 else
 v11 = 1;
 result = memcmp(&v1, &v5, 12);
 v13 = result;
 if (!result)
 {
 v14 = 0;
 if (!((char)arm64g_calculate_condition(211, v13, 0, 0)))
 goto LABEL_401d7a;
LABEL_401d79:
 v15 = v14;
 }
 else
 {
 v14 = 4294967295;
 if ((char)arm64g_calculate_condition(211, v13, 0, 0))
 goto LABEL_401d79;
LABEL_401d7a:
 v15 = 1;
 }
 if (v7 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v15 + v11;
}


// Function: sub_401dac at 0x401dac
void sub_401dac(unsigned long a0, unsigned long a1)
{
 param_printf();
 return;
}


// Function: param_printf at 0x401db0
int param_printf(unsigned int a0, unsigned long a1)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
}


// Function: sub_401dc8 at 0x401dc8
void sub_401dc8()
{
 call_printf();
 return;
}


// Function: call_printf at 0x401dd0
int call_printf()
{
 return __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
}


// Function: sub_401dec at 0x401dec
void sub_401dec()
{
 param_scanf();
 return;
}


// Function: param_scanf at 0x401df0
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
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: call_scanf at 0x401e60
extern char __stack_chk_guard;

unsigned long long call_scanf()
{
 unsigned long long v5; // x0
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 if (__isoc99_sscanf("123,456", "%d,%d") == 2)
 v5 = v1 + v2;
 else
 v5 = 4294967295;
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v5;
}


// Function: sub_401ed8 at 0x401ed8
void sub_401ed8()
{
 param_fopen_fclose();
 return;
}


// Function: param_fopen_fclose at 0x401ee0
typedef struct FILE {
} FILE;

unsigned int param_fopen_fclose()
{
 char *v2; // x0
 FILE *fp; // x0
 unsigned int v4; // w20
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


// Function: sub_401f28 at 0x401f28
void sub_401f28()
{
 call_fopen_fclose();
 return;
}


// Function: call_fopen_fclose at 0x401f30
unsigned long long call_fopen_fclose()
{
 void* fp; // x0
 unsigned long long v5; // x19
 unsigned long long v6; // x20
 unsigned int v7; // w0
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 v1 = v5;
 v2 = v6;
 v7 = fileno(fp);
 fclose(fp);
 if (!((char)(v7 >> 31) & 1))
 return 42;
 }
 return 4294967295;
}


// Function: sub_401f88 at 0x401f88
void sub_401f88(unsigned long a0)
{
 param_fread_fwrite();
 return;
}


// Function: param_fread_fwrite at 0x401f90
extern char __stack_chk_guard;

unsigned long long param_fread_fwrite(char *a0)
{
 void* fp; // x0
 unsigned long long v10; // x19
 unsigned long long v11; // x20
 void* v12; // x0
 unsigned long long count; // x20
 unsigned long long v14; // x0
 unsigned long long v15; // x19
 unsigned long long v16; // x20
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x50]
 unsigned long long v2; // [bp-0x48]
 char v3; // [bp-0x28], Other Possible Types: unsigned long long
 unsigned long long v4; // [bp-0x20]
 unsigned short v5; // [bp-0x18]
 char result; // [bp-0x16]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 fp = fopen(a0, "w+");
 if (fp)
 {
 v1 = v10;
 v2 = v11;
 v12 = fp;
 if (fwrite("BinBench Test Data", 1, 18, v12) == 18)
 {
 rewind(v12);
 count = fread(&v3, 1, 18, v12);
 (&v3)[count] = 0;
 fclose(v12);
 unlink(a0);
 if (count != 18 || v3 != 7521977183824144706 || v4 != 7008762604619650080 || v5 != 24948 || result)
 {
 v15 = v1;
 v16 = v2;
 v14 = 4294967293;
 }
 else
 {
 v14 = 42;
 v15 = v1;
 v16 = v2;
 }
 }
 else
 {
 fclose(v12);
 v14 = 4294967294;
 v15 = v1;
 v16 = v2;
 }
 }
 else
 {
 v14 = 4294967295;
 }
 if (v7 != *((long long *)&__stack_chk_guard))
 {
 v1 = v15;
 v2 = v16;
 __stack_chk_fail(); /* do not return */
 }
 return v14;
}


// Function: sub_4020dc at 0x4020dc
void sub_4020dc()
{
 call_fread_fwrite();
 return;
}


// Function: call_fread_fwrite at 0x4020e0
unsigned long long call_fread_fwrite()
{
 unsigned long long count; // x0

 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_4020ec at 0x4020ec
void sub_4020ec(unsigned long a0)
{
 param_malloc_free();
 return;
}


// Function: param_malloc_free at 0x4020f0
unsigned int param_malloc_free(unsigned long long a0)
{
 unsigned long long v2; // x19
 unsigned int *ptr1; // x0
 unsigned int v4; // w1
 unsigned int *ptr2; // x2
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = __ROL__(a0, 2) & 18446744073709551612;
 ptr1 = malloc(v2);
 if (!ptr1)
 return 4294967295;
 v4 = 0;
 ptr2 = ptr1;
 if (a0)
 {
 do
 {
 *(ptr2) = v4;
 v4 += 10;
 ptr2 += 1;
 } while (ptr2 != v2 + (char *)ptr1);
 }
 free(ptr1);
 return *((int *)(-4 + v2 + (char *)ptr1)) + *(ptr1);
}


// Function: sub_402158 at 0x402158
void sub_402158()
{
 call_malloc_free();
 return;
}


// Function: call_malloc_free at 0x402160
unsigned int call_malloc_free()
{
 unsigned int *ptr; // x0
 unsigned int i; // w1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 i = 0;
 do
 {
 ptr[i/10] = i;
 i += 10;
 } while (i != 100);
 return ptr[0] + ptr[9];
}


// Function: sub_4021b8 at 0x4021b8
void sub_4021b8(unsigned long a0, unsigned long a1)
{
 param_memset();
 return;
}


// Function: param_memset at 0x4021c0
unsigned long long param_memset(char *a0, unsigned long n)
{
 char *v2; // x19
 unsigned long long v3; // x0
 char *ptr; // x3
 unsigned long long v5; // x0
 unsigned long v6; // x1
 unsigned long long v8; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 memset(a0, 0, n);
 if (!n)
 return 0;
 v3 = 0;
 ptr = v2;
 do
 {
 v5 = v3;
 v8 = v5 + *(ptr);
 v3 = v8;
 ptr += 1;
 } while (ptr != &v2[n]);
 return v5 + v6;
}


// Function: sub_40221c at 0x40221c
void sub_40221c()
{
 call_memset();
 return;
}


// Function: call_memset at 0x402220
unsigned long long call_memset()
{
 return 0;
}


// Function: sub_402228 at 0x402228
void sub_402228(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_strchr_strstr();
 return;
}


// Function: param_strchr_strstr at 0x402230
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned long long v6; // x30
 unsigned long long v7; // x19
 unsigned long long v8; // x20
 unsigned long long v9; // x21
 unsigned long long ptr; // x0
 unsigned long long v11; // x19
 unsigned long long ptr; // x0
 unsigned long long v13; // x0
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x28]
 unsigned long long v2; // [bp-0x20]
 unsigned long long v3; // [bp-0x18]
 unsigned long long v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v0 = &v5;
 v1 = v6;
 v2 = v7;
 v3 = v8;
 v4 = v9;
 ptr = strchr(a0, a1 & 255);
 if (!ptr)
 v11 = 4294967295;
 else
 v11 = ptr - a0 & 4294967295;
 ptr = strstr(a0, a2);
 if (!ptr)
 v13 = 4294967295;
 else
 v13 = ptr - a0 & 4294967295;
 return v11 + v13;
}


// Function: sub_40228c at 0x40228c
void sub_40228c()
{
 call_strchr_strstr();
 return;
}


// Function: call_strchr_strstr at 0x402290
unsigned long long call_strchr_strstr()
{
 return 15;
}


// Function: sub_402298 at 0x402298
void sub_402298()
{
 test_standard_library_functions();
 return;
}


// Function: test_standard_library_functions at 0x4022a0
extern char __stack_chk_guard;
extern char g_403700;
extern char g_403728;
extern char g_403748;
extern char g_403768;
extern char g_403788;
extern char g_4037a8;
extern char g_4037c8;
extern char g_4037e8;
extern char g_403808;
extern char g_403828;
extern char g_403848;
extern char g_403868;
extern char g_403888;

long long test_standard_library_functions()
{
 unsigned int p[10]; // x2
 unsigned int v17; // w19
 unsigned long long v19; // x0
 unsigned long long v8; // x2
 void* fp; // x0
 unsigned int v10; // w0
 unsigned long long v11; // x2
 unsigned int ptr[10]; // x0
 unsigned int i; // w1
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 puts(&g_403700);
 __printf_chk(1, &g_403728, 8);
 __printf_chk(1, &g_403748, call_strcmp() & 4294967295);
 __printf_chk(1, &g_403768, 12);
 __printf_chk(1, &g_403788, 90);
 __printf_chk(1, &g_4037a8, call_memcmp() & 4294967295);
 __printf_chk(1, &g_4037c8, __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test") & 4294967295);
 if (__isoc99_sscanf("123,456", "%d,%d") == 2)
 v8 = v1 + v2;
 else
 v8 = 4294967295;
 __printf_chk(1, &g_4037e8, v8);
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 v10 = fileno(fp);
 fclose(fp);
 v11 = 42;
 if (!(v10 >> 31 & 1))
 goto LABEL_4023d8;
 }
 v11 = 4294967295;
LABEL_4023d8:
 __printf_chk(1, &g_403808, v11);
 __printf_chk(1, &g_403828, param_fread_fwrite("/tmp/binbench_test_tmp") & 4294967295);
 ptr = malloc(40);
 if (ptr)
 {
 i = 0;
 p = ptr;
 do
 {
 p[0] = i;
 i += 10;
 p = &p[1];
 } while (i != 100);
 v17 = ptr[0] + ptr[9];
 free(ptr);
 }
 else
 {
 v17 = 4294967295;
 }
 __printf_chk(1, &g_403848, v17);
 __printf_chk(1, &g_403868, call_memset() & 4294967295);
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v19 = __printf_chk(1, &g_403888, 15);
 return __printf_chk(1, &g_403888, 15);
}


// Function: param_linux_syscall at 0x4024c0
int param_linux_syscall(unsigned long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = syscall(56);
 if (((char)(v2 >> 31) & 1))
 return -(*(__errno_location()));
 syscall(57);
 return v2;
}


// Function: call_linux_syscall at 0x402520
unsigned long long call_linux_syscall()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (!((char)(syscall(56) >> 31) & 1))
 {
 syscall(57);
 return 42;
 }
 else if (*(__errno_location()) <= 0)
 {
 return 42;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_402578 at 0x402578
void sub_402578()
{
 param_win32_api();
 return;
}


// Function: param_win32_api at 0x402580
extern char __stack_chk_guard;

unsigned long long param_win32_api()
{
 unsigned long long v4; // x0
 char *v0; // [bp-0xa0]
 unsigned long long v1; // [bp-0x58]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 if (((char)(stat() >> 31) & 1))
 {
 v4 = 4294967295;
 }
 else if (0 < v1)
 {
 v4 = 42;
 }
 else
 {
 v4 = 4294967294;
 }
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4;
}


// Function: sub_4025ec at 0x4025ec
void sub_4025ec()
{
 call_win32_api();
 return;
}


// Function: call_win32_api at 0x4025f0
extern char __stack_chk_guard;

unsigned long long call_win32_api()
{
 unsigned long long v5; // x0
 char *v0; // [bp-0xa0]
 char v1; // [bp-0x88]
 unsigned long long v2; // [bp-0x58]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 if (((char)(stat("/etc/passwd", &v1, &__stack_chk_guard, 0) >> 31) & 1))
 {
 v5 = 4294967295;
 }
 else if (0 < v2)
 {
 v5 = 42;
 }
 else
 {
 v5 = 4294967294;
 }
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v5;
}


// Function: param_fork_exec at 0x402664
extern char __stack_chk_guard;

unsigned long long param_fork_exec(char *a0, unsigned long a1)
{
 unsigned long long pid; // x0
 unsigned long long v5; // x0
 unsigned long v6; // x0
 char *v0; // [bp-0x30]
 unsigned int v1[1]; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 pid = fork();
 if ((unsigned int)pid < 0)
 {
 v5 = 4294967295;
 }
 else if (!((char)arm64g_calculate_condition(3, pid & 4294967295, 0, 0)))
 {
 v5 = 4294967294;
 if (!((char)((waitpid(pid, &v1, 0) & 4294967295) >> 31) & 1))
 {
 v6 = *(v1);
 if ((char)arm64g_calculate_condition(10, v6 & 127, 0, 0))
 v5 = (v6 * 0x100000000000000 | v6 >> 8) & 18374686479671623935 & 255 & 4294967295;
 else
 v5 = 4294967293;
 }
 }
 else
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v5;
}


// Function: sub_402718 at 0x402718
void sub_402718()
{
 call_fork_exec();
 return;
}


// Function: call_fork_exec at 0x402720
unsigned long long call_fork_exec()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 if ((unsigned int)param_fork_exec("/bin/true", 0))
 return 4294967295;
 return 42;
}


// Function: sub_40274c at 0x40274c
void sub_40274c()
{
 param_pipe_communication();
 return;
}


// Function: param_pipe_communication at 0x402750
extern char __stack_chk_guard;

unsigned long long param_pipe_communication()
{
 unsigned long long pid; // x0
 unsigned long long v9; // x19
 unsigned long long v10; // x20
 unsigned long long count; // x0
 unsigned long long v12; // x0
 char *v0; // [bp-0x50]
 unsigned long long v1; // [bp-0x40]
 unsigned long long v2; // [bp-0x38]
 char v3; // [bp-0x30], Other Possible Types: unsigned int
 unsigned int v4; // [bp-0x2c]
 char v5; // [bp-0x28]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 if (!((char)(pipe(&v3) >> 31) & 1))
 {
 pid = fork();
 if ((unsigned int)pid >= 0)
 {
 v1 = v9;
 v2 = v10;
 if (!((char)arm64g_calculate_condition(19, pid & 4294967295, 0, 0)))
 {
 close(v3);
 write(v4, "HelloPipe", 9);
 close(v4);
 _exit(0); /* do not return */
 }
 close(v4);
 count = read(v3, &v5, 31);
 (&v5)[count] = 0;
 close(v3);
 wait(NULL);
 if (0 < count)
 v12 = 42;
 else
 v12 = 4294967293;
 }
 else
 {
 v12 = 4294967294;
 }
 }
 else
 {
 v12 = 4294967295;
 }
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v12;
}


// Function: sub_40283c at 0x40283c
long long sub_40283c()
{
 unsigned long long v0; // x0

 v0 = call_pipe_communication();
 return call_pipe_communication();
}


// Function: call_pipe_communication at 0x402840
unsigned long long call_pipe_communication()
{
 unsigned long long v0; // x0

 v0 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x402844
typedef struct sockaddr {
 unsigned short sin_family;
 char sa_data[14];
} sockaddr;

extern char __stack_chk_guard;

unsigned long long param_socket_create()
{
 unsigned long long sock; // x0
 unsigned long long v9; // x19
 unsigned int v10; // w19
 unsigned long long v11; // x0
 char *v0; // [bp-0x40]
 unsigned long long v1; // [bp-0x30]
 unsigned int result; // [bp-0x1c]
 sockaddr v3; // [bp-0x18]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 sock = socket(2, 1, 0);
 if (!((char)(sock >> 31) & 1))
 {
 v1 = v9;
 v10 = sock;
 result = 1;
 if (!((char)(setsockopt(sock, 1, 2, &result, 4) >> 31) & 1))
 {
 *((unsigned long *)&v3.sin_family) = 0;
 *((unsigned long long *)&v3.sa_data[6]) = 0;
 v3.sin_family = 2;
 if (((char)(bind(v10, &v3, 16) >> 31) & 1))
 {
 close(v10);
 v11 = 4294967293;
 }
 else if (!((char)(listen(v10, 5) >> 31) & 1))
 {
 close(v10);
 v11 = 42;
 }
 else
 {
 close(v10);
 v11 = 0xfffffffc;
 }
 }
 else
 {
 close(v10);
 v11 = 4294967294;
 }
 }
 else
 {
 v11 = 4294967295;
 }
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v11;
}


// Function: sub_402948 at 0x402948
long long sub_402948()
{
 unsigned long long sock; // x0

 sock = call_socket_create();
 return call_socket_create();
}


// Function: call_socket_create at 0x402950
unsigned long long call_socket_create()
{
 unsigned long long sock; // x0

 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x402954
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_5;
} struct_0;

unsigned long long param_shmget_shmat()
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 struct_0 *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = open("/tmp/binbench_shm", 66, 438);
 if (((char)(v2 >> 31) & 1))
 return 4294967295;
 close(v2);
 if (!((char)(ftok("/tmp/binbench_shm", 42) >> 31) & 1))
 {
 v3 = shmget();
 if (((char)(v3 >> 31) & 1))
 return 4294967294;
 ptr = shmat();
 if ((char)arm64g_calculate_condition(2, ptr, 1, 0))
 return 4294967293;
 ptr->field_0 = 7299600957910902867;
 *((unsigned long long *)((char *)&ptr->field_0 + 5)) = 34184295084281188;
 shmdt();
 shmctl(v3 & 4294967295, 0, 0);
 return 12;
 }
 return 4294967295;
}


// Function: sub_402a0c at 0x402a0c
void sub_402a0c()
{
 call_shmget_shmat();
 return;
}


// Function: call_shmget_shmat at 0x402a10
unsigned long long call_shmget_shmat()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (0 >= (unsigned int)param_shmget_shmat())
 return 4294967295;
 return 42;
}


// Function: param_signal_handling at 0x402a30
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned long long param_signal_handling()
{
 unsigned long long v2; // x0
 unsigned long long v3; // x19
 unsigned long long v4; // x19
 unsigned long v5; // x19
 unsigned long long v6; // x19
 unsigned long long v7; // x19
 unsigned long v8; // x19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = signal(10, signal_handler);
 if ((char)arm64g_calculate_condition(2, v2, 1, 0))
 {
 return v2;
 }
 else if (!((char)arm64g_calculate_condition(2, signal(14, signal_handler), 1, 0)))
 {
 signal_received = 0;
 raise(10);
 if (!signal_received)
 {
 v3 = 1000;
 do
 {
 v4 = v3;
 usleep(1000);
 v5 = (unsigned int)v4 - 1;
 } while (!signal_received && (v3 = v5, !((char)arm64g_calculate_condition(3, v4 & 4294967295, 1, 0))));
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
 v6 = 2000;
 do
 {
 v7 = v6;
 usleep(1000);
 v8 = (unsigned int)v7 - 1;
 } while (!signal_received && (v6 = v8, !((char)arm64g_calculate_condition(3, v7 & 4294967295, 1, 0))));
 }
 if (!signal_received || signal_number != 14)
 return 4294967291;
 signal(10, NULL);
 signal(signal_number, NULL);
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


// Function: call_signal_handling at 0x402b50
unsigned long long call_signal_handling()
{
 unsigned long long v0; // x0

 v0 = param_signal_handling();
 return param_signal_handling();
}


// Function: test_system_calls at 0x402b54
extern char __stack_chk_guard;
extern char g_4038f0;
extern char g_403910;
extern char g_403930;
extern char g_403950;
extern char g_403970;
extern char g_403990;
extern char g_4039b0;
extern char g_4039d0;

long long test_system_calls()
{
 unsigned long long v5; // x2
 unsigned long long v6; // x2
 unsigned long long v7; // x2
 unsigned long long v10; // x2
 unsigned int v11; // w0
 unsigned long long v12; // x0
 char *v0; // [bp-0xb0]
 char v1; // [bp-0x88]
 unsigned long long v2; // [bp-0x58]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 puts(&g_4038f0);
 if (!((char)(syscall(56) >> 31) & 1))
 {
 syscall(57);
 v5 = 42;
 }
 else
 {
 if (*(__errno_location()) <= 0)
 v5 = 42;
 else
 v5 = 4294967295;
 }
 __printf_chk(1, &g_403910, v5);
 if (((char)(stat("/etc/passwd", &v1) >> 31) & 1))
 {
 v6 = 4294967295;
 }
 else if (0 < v2)
 {
 v6 = 42;
 }
 else
 {
 v6 = 4294967294;
 }
 __printf_chk(1, &g_403930, v6);
 if (!(unsigned int)param_fork_exec("/bin/true", 0))
 v7 = 42;
 else
 v7 = 4294967295;
 __printf_chk(1, &g_403950, v7);
 __printf_chk(1, &g_403970, param_pipe_communication() & 4294967295);
 __printf_chk(1, &g_403990, param_socket_create() & 4294967295);
 if (0 < (unsigned int)param_shmget_shmat())
 v10 = 42;
 else
 v10 = 4294967295;
 __printf_chk(1, &g_4039b0, v10);
 v11 = param_signal_handling();
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v12 = __printf_chk(1, &g_4039d0, v11);
 return __printf_chk(1, &g_4039d0, v11);
}


// Function: sub_402ccc at 0x402ccc
void sub_402ccc(unsigned long a0)
{
 param_pthread_create();
 return;
}


// Function: param_pthread_create at 0x402cd0
extern char __stack_chk_guard;

long long param_pthread_create(unsigned int a0)
{
 unsigned int v6; // w19
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x1c]
 pthread_t v2; // [bp-0x18]
 void *ptr; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v1 = a0;
 if (!(int)pthread_create(&v2, NULL, thread_compute, &v1))
 {
 pthread_join(v2, &ptr);
 v6 = *(unsigned int *)ptr;
 free(ptr);
 }
 else
 {
 v6 = 4294967295;
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: call_pthread_create at 0x402d64
extern char __stack_chk_guard;

long long call_pthread_create()
{
 unsigned int v6; // w19
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x1c]
 pthread_t v2; // [bp-0x18]
 void *ptr; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v1 = 7;
 if (!(int)pthread_create(&v2, NULL, thread_compute, &v1))
 {
 pthread_join(v2, &ptr);
 v6 = *(ptr);
 free(ptr);
 }
 else
 {
 v6 = 4294967295;
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: sub_402df8 at 0x402df8
void sub_402df8()
{
 param_pthread_join();
 return;
}


// Function: param_pthread_join at 0x402e00
extern char __stack_chk_guard;

unsigned long long param_pthread_join()
{
 unsigned int v7; // w23
 unsigned long long *v8; // x22
 char *v9; // x21
 char *v10; // x20
 unsigned int flag2; // w23
 unsigned int flag1; // w0
 unsigned long v13; // x19
 unsigned long long v15; // x20
 unsigned long long v16; // x20
 char *v0; // [bp-0xa0]
 unsigned long long v1; // [bp-0x48]
 char v2; // [bp-0x30], Other Possible Types: unsigned long long
 unsigned long v18; // [bp-0x28]
 unsigned long long v3; // [bp-0x20]
 unsigned int result; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v7 = 3;
 v8 = &v1;
 v9 = &v2;
 v10 = &v1;
 v5 = *((long long *)&__stack_chk_guard);
 result = 0;
 v2 = 871509787656907713571933126657;
 v3 = 2376844875815311753354219094036;
 while (true)
 {
 flag2 = v7;
 flag1 = pthread_create(v10, 0, thread_sum, v9);
 v13 = flag1;
 if (!flag1)
 {
 v10 += 8;
 v9 += 12;
 v7 = flag2 - 1;
 if (flag2 == 1)
 {
 v15 = 0;
 do
 {
 v16 = v15;
 if ((int)pthread_join(*(v8), 0))
 {
 if (v5 == *((long long *)&__stack_chk_guard))
 return 4294967294;
 __stack_chk_fail(); /* do not return */
 }
 } while ((v8 += 8, v13 += (unsigned long long)(unsigned int)*((int *)((char *)&v18 + v16)), v15 = v16 + 12, v15 != 36));
 if (v5 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v13 & 4294967295;
 }
 }
 else if (v5 == *((long long *)&__stack_chk_guard))
 {
 return 4294967295;
 }
 else
 {
 __stack_chk_fail(); /* do not return */
 }
 }
}


// Function: sub_402f0c at 0x402f0c
long long sub_402f0c()
{
 unsigned long long count; // x0

 count = call_pthread_join();
 return call_pthread_join();
}


// Function: call_pthread_join at 0x402f10
unsigned long long call_pthread_join()
{
 unsigned long long count; // x0

 count = param_pthread_join();
 return param_pthread_join();
}


// Function: param_mutex_lock at 0x402f14
extern unsigned int shared_counter;

unsigned long long param_mutex_lock(unsigned long a0, unsigned int a1)
{
 unsigned int v9; // w25
 unsigned long long *ptr; // x0
 unsigned long long *v19; // x19
 unsigned long long *v20; // x19
 unsigned long long *v21; // x19
 unsigned long long *i; // x21
 unsigned long long *v23; // x21
 unsigned long long v11; // x23
 unsigned long long v12; // x24
 unsigned long long *ptr; // x24
 unsigned long long v14; // x19
 unsigned long long v15; // x20
 unsigned long long *v16; // x20
 unsigned long long v17; // x21
 unsigned long long v18; // x22
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x50]
 unsigned long long v2; // [bp-0x48]
 unsigned long long v3; // [bp-0x40]
 unsigned long long v4; // [bp-0x38]
 unsigned long long v5; // [bp-0x30]
 unsigned long long v6; // [bp-0x28]
 unsigned int v7; // [bp-0x4]
 char v8; // [bp+0x0]

 v0 = &v8;
 v9 = a0;
 v7 = a1;
 ptr = malloc(a0 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(a0, 3) & 34359738360 & 34359738367);
 if (!ptr)
 return 4294967295;
 v5 = v11;
 v6 = v12;
 ptr = ptr;
 shared_counter = 0;
 if (v9 > 0)
 {
 v1 = v14;
 v2 = v15;
 v16 = &ptr[v9];
 v3 = v17;
 v4 = v18;
 v19 = ptr;
 do
 {
 v20 = v19;
 v21 = v20 + 1;
 if ((int)pthread_create(v20, 0, thread_increment, &v7))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((i = ptr, v19 = v21, v19 != v16));
 do
 {
 v23 = i + 1;
 pthread_join(*(i), 0);
 i = v23;
 } while (i != v16);
 }
 free(ptr);
 if (shared_counter != v7 * v9)
 return 4294967293;
 return 42;
}


// Function: sub_403018 at 0x403018
void sub_403018()
{
 call_mutex_lock();
 return;
}


// Function: call_mutex_lock at 0x403020
unsigned long long call_mutex_lock()
{
 unsigned long long v0; // x0

 v0 = param_mutex_lock(4, 1000);
 return param_mutex_lock(4, 1000);
}


// Function: sub_40302c at 0x40302c
void sub_40302c()
{
 param_condition_variable();
 return;
}


// Function: param_condition_variable at 0x403030
extern char __stack_chk_guard;
extern unsigned int data;
extern unsigned int ready;
extern unsigned long long signal_received;

long long param_condition_variable()
{
 unsigned int v6; // w19
 char *v0; // [bp-0x40]
 char v1; // [bp-0x20], Other Possible Types: unsigned long long
 char v2; // [bp-0x18], Other Possible Types: unsigned long long
 unsigned int *ptr; // [bp-0x10], Other Possible Types: char
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 ready = 0;
 data = 0;
 if ((int)pthread_create(&v2, 0, consumer_thread, 0, &signal_received, 0))
 {
 v6 = 4294967295;
 }
 else if (!(int)pthread_create(&v1, 0, producer_thread, 0))
 {
 pthread_join(v2, &ptr);
 pthread_join(v1, 0);
 v6 = *(ptr);
 free(ptr);
 }
 else
 {
 v6 = 4294967294;
 pthread_cancel(v2);
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: call_condition_variable at 0x403104
unsigned long long call_condition_variable()
{
 unsigned long long v0; // x0

 v0 = param_condition_variable();
 return param_condition_variable();
}


// Function: sub_403108 at 0x403108
void sub_403108(unsigned long a0, unsigned long a1)
{
 param_atomic_ops();
 return;
}


// Function: param_atomic_ops at 0x403110
extern char __stack_chk_guard;
extern unsigned int atomic_counter;

unsigned long long param_atomic_ops(unsigned long a0, unsigned int a1)
{
 unsigned int i; // w22
 unsigned int *ptr; // x0
 unsigned long long v21; // x19
 unsigned long long v22; // x20
 unsigned long long v23; // x0
 unsigned long long v24; // x23
 unsigned long long v25; // x24
 unsigned long long v26; // x25
 unsigned long long v27; // x19
 unsigned long long v13; // x19
 unsigned long long v14; // x20
 unsigned long long v15; // x25
 unsigned long long v16; // x23
 unsigned long long v17; // x24
 unsigned int *v18; // x19
 unsigned int *v19; // x19
 char *v0; // [bp-0x70]
 unsigned long long v1; // [bp-0x60]
 unsigned long long v2; // [bp-0x58]
 unsigned long long v3; // [bp-0x40]
 unsigned long long v4; // [bp-0x38]
 unsigned long long v5; // [bp-0x30]
 unsigned int v6; // [bp-0x14]
 char v7; // [bp-0x10], Other Possible Types: unsigned long long
 unsigned long v8; // [bp-0x8]
 char v9; // [bp+0x0]

 v0 = &v9;
 i = a0;
 v6 = a1;
 v8 = *((long long *)&__stack_chk_guard);
 ptr = malloc(a0 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(a0, 3) & 34359738360 & 34359738367);
 if (ptr)
 {
 ptr = ptr;
 v1 = v13;
 v2 = v14;
 v5 = v15;
 atomic_counter = 0;
 if (i > 0)
 {
 v3 = v16;
 v4 = v17;
 v18 = ptr;
 do
 {
 v19 = v18;
 if ((int)pthread_create(v19, 0, thread_atomic_increment, &v6))
 {
 free(ptr);
 if (v8 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967294;
 }
 } while ((v18 = v19 + 8, v18 != ptr + (unsigned long long)i * 8));
 if (!(int)pthread_create(&v7, 0, thread_atomic_load_store, 0))
 pthread_join(v7, 0);
 v27 = 0;
 do
 {
 pthread_join(*((long long *)&ptr[2 * v27]), 0);
 v27 += 1;
 } while ((unsigned int)v27 < i);
 v24 = v3;
 v25 = v4;
 }
 else
 {
 if (!(int)pthread_create(&v7, 0, thread_atomic_load_store, 0))
 pthread_join(v7, 0);
 }
 free(ptr);
 if (0 < atomic_counter)
 v23 = 42;
 else
 v23 = 4294967293;
 if (v8 != *((long long *)&__stack_chk_guard))
 {
 v3 = v24;
 v4 = v25;
 __stack_chk_fail(); /* do not return */
 }
 return v23;
 }
 else if (v8 == *((long long *)&__stack_chk_guard))
 {
 return 4294967295;
 }
 else
 {
 v1 = v21;
 v2 = v22;
 v3 = v24;
 v4 = v25;
 v5 = v26;
 __stack_chk_fail(); /* do not return */
 }
}


// Function: sub_4032a8 at 0x4032a8
void sub_4032a8()
{
 call_atomic_ops();
 return;
}


// Function: call_atomic_ops at 0x4032b0
unsigned long long call_atomic_ops()
{
 unsigned long long v0; // x0

 v0 = param_atomic_ops(4, 500);
 return param_atomic_ops(4, 500);
}


// Function: sub_4032bc at 0x4032bc
void sub_4032bc(unsigned long a0)
{
 param_thread_local_storage();
 return;
}


// Function: param_thread_local_storage at 0x4032c0
extern char __stack_chk_guard;

unsigned long long param_thread_local_storage(unsigned long a0)
{
 unsigned long long v6; // x25
 unsigned long long v7; // x19
 unsigned long v16; // cc_dep2
 unsigned long v17; // cc_ndep
 unsigned long long v22; // x21
 unsigned long long v23; // x22
 unsigned int v24; // w24
 unsigned int **p; // x21
 unsigned int *addr; // x23
 unsigned long long v26; // cc_op
 unsigned long long v27; // cc_dep1
 unsigned long long v28; // cc_dep2
 unsigned long long i; // x19
 unsigned long long idx; // x19
 unsigned long long ptr; // x0
 unsigned long long v33; // x20
 unsigned int *v34; // x22
 unsigned int *v35; // x22
 unsigned int **ptr; // x0
 unsigned int result; // w0
 unsigned long v37; // x19
 unsigned int **k; // x19
 unsigned long long v41; // x21
 unsigned long long v42; // x22
 unsigned long long v43; // x0
 unsigned long long v44; // x25
 unsigned long long j; // x22
 unsigned long v10; // cc_op
 unsigned long long v46; // x22
 unsigned long v47; // x24
 unsigned long v11; // cc_dep1
 unsigned long v12; // cc_dep2
 unsigned long v13; // cc_ndep
 unsigned long v14; // cc_op
 unsigned long v15; // cc_dep1
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x40]
 unsigned long long v2; // [bp-0x38]
 unsigned int ptr[2]; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v6 = a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295;
 v4 = *((long long *)&__stack_chk_guard);
 v7 = v6 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(v6, 3) & 34359738360 & 34359738367;
 addr = malloc(v7);
 ptr = malloc(v7);
 if (addr)
 {
 if ((char)arm64g_calculate_condition(4, ((char)arm64g_calculate_condition(v10 | 16, v11, v12, v13) ? ptr : 0x40000000), 0, 0))
 {
 if (v4 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 v1 = v41;
 v2 = v42;
 __stack_chk_fail(); /* do not return */
 }
 }
 else
 {
 if ((char)arm64g_calculate_condition(0, ((char)arm64g_calculate_condition(v14 | 16, v15, v16, v17) ? ptr : 0x40000000), 0, 0))
 {
 if (v4 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 v1 = v41;
 v2 = v42;
 __stack_chk_fail(); /* do not return */
 }
 }
 v1 = v22;
 v2 = v23;
 v24 = v6;
 p = ptr;
 v26 = 3;
 v27 = v6 & 4294967295;
 v28 = 0;
 if ((unsigned int)v6 > 0)
 {
 i = 0;
 do
 {
 idx = i;
 ptr = malloc(16);
 p[idx] = ptr;
 __snprintf_chk(ptr, 16, 1, 16, "Thread-%d", idx & 4294967295);
 i = idx + 1;
 } while (i != v6);
 v33 = 0;
 v34 = addr;
 do
 {
 v35 = v34;
 result = pthread_create(v35, 0, thread_tls_test, p[v33]);
 v37 = result;
 if (result)
 {
 k = p;
 do
 {
 free(*(k));
 k += 1;
 } while ((char *)&p[v33] + 1 != k);
 free(p);
 free(addr);
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967294;
 }
 } while ((v33 += 1, v34 = v35 + 8, v33 != v6));
 v28 = __ROL__(v33, 3) & 18446744073709551608;
 v44 = 0;
 j = 0;
 do
 {
 v46 = j;
 pthread_join(*((long long *)((char *)addr + v46)), &ptr);
 v37 += ptr[0];
 v44 += ptr[1];
 free(ptr);
 v27 = v46 + 8;
 free(*((long long *)((char *)p + v46)));
 v26 = 4;
 j = v27;
 } while (j != v28);
 }
 else
 {
 v44 = 0;
 v37 = 0;
 }
 free(p);
 free(addr);
 v47 = 150 * v24;
 if (100 * v24 == (unsigned int)v37)
 {
 if (!((char)arm64g_calculate_condition(3, ((char)arm64g_calculate_condition(v26, v27, v28, 0) ? v47 & 4294967295 : 0), ((char)arm64g_calculate_condition(v26, v27, v28, 0) ? v44 & 4294967295 : 0), 0)))
 goto LABEL_40347e;
LABEL_40347d:
 v43 = 42;
 }
 else
 {
 if ((char)arm64g_calculate_condition(0, ((char)arm64g_calculate_condition(v26, v27, v28, 0) ? v47 & 4294967295 : 0), ((char)arm64g_calculate_condition(v26, v27, v28, 0) ? v44 & 4294967295 : 0), 0))
 goto LABEL_40347d;
LABEL_40347e:
 v43 = 4294967293;
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v43;
}


// Function: call_thread_local_storage at 0x4034a4
unsigned long long call_thread_local_storage()
{
 unsigned long long count; // x0

 count = param_thread_local_storage(4);
 return param_thread_local_storage(4);
}


// Function: sub_4034ac at 0x4034ac
void sub_4034ac()
{
 test_thread_concurrency();
 return;
}


// Function: test_thread_concurrency at 0x4034b0
extern char __stack_chk_guard;
extern char g_403a00;
extern char g_403a20;
extern char g_403a40;
extern char g_403a60;
extern char g_403a80;
extern char g_403aa0;
extern char g_403ac0;

long long test_thread_concurrency()
{
 unsigned int v6; // w19
 unsigned int v11; // w0
 unsigned long long v12; // x0
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x1c]
 char v2; // [bp-0x18], Other Possible Types: unsigned long long
 unsigned int *ptr; // [bp-0x10], Other Possible Types: char
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 puts(&g_403a00);
 v1 = 7;
 if (!(int)pthread_create(&v2, 0, thread_compute, &v1, 7))
 {
 pthread_join(v2, &ptr);
 v6 = *(ptr);
 free(ptr);
 }
 else
 {
 v6 = 4294967295;
 }
 __printf_chk(1, &g_403a20, v6);
 __printf_chk(1, &g_403a40, param_pthread_join() & 4294967295);
 __printf_chk(1, &g_403a60, param_mutex_lock(4, 1000) & 4294967295);
 __printf_chk(1, &g_403a80, param_condition_variable() & 4294967295);
 __printf_chk(1, &g_403aa0, param_atomic_ops(4, 500) & 4294967295);
 v11 = param_thread_local_storage(4);
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v12 = __printf_chk(1, &g_403ac0, v11);
 return __printf_chk(1, &g_403ac0, v11);
}


// Function: sub_4035e8 at 0x4035e8
long long sub_4035e8()
{
 unsigned long long v0; // x0

 v0 = __aarch64_cas4_acq_rel();
 return __aarch64_cas4_acq_rel();
}


// Failed to decompile function __aarch64_cas4_acq_rel at 0x4035f0
// Function: sub_403604 at 0x403604
long long sub_403604()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_403624 at 0x403624
long long sub_403624()
{
 unsigned long long v0; // x0

 v0 = __aarch64_ldadd4_acq_rel();
 return __aarch64_ldadd4_acq_rel();
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x403630
// Function: sub_403644 at 0x403644
long long sub_403644()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


