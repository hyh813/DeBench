// Angr Decompilation of 6_gcc_O3_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <pthread.h>
#include <unistd.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/auxv.h>

/* CRT stub function _init removed by preprocessor */

// Bit rotation macro
#define __ROL__(value, shift) \
    (((value) << (shift)) | ((value) >> (32 - (shift))))

// Forward declarations for CRT functions
extern void _start(void);
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void frame_dummy(void);

// Forward declarations
long long test_thread_concurrency(long long unused);
long long test_system_calls(unsigned long a0);
long long test_standard_library_functions();
void *thread_tls_test(void *a0);
long long signal_handler(unsigned long a0);
void *thread_sum(void *ptr);
void *thread_compute(void *a0);
void *producer_thread(void *a0);
void *thread_atomic_increment(void *a0);
void *thread_atomic_load_store(void *a0);
void *consumer_thread(void *a0);
int __aarch64_ldadd4_acq_rel(int value, int *ptr);
int __aarch64_cas4_acq_rel(int old_value, int new_value, int *ptr);
unsigned long long param_thread_local_storage_constprop_0();
unsigned long long call_thread_local_storage();
unsigned long long param_atomic_ops_constprop_0();
unsigned long long param_mutex_lock_constprop_0();
unsigned long long call_shmget_shmat();
long long param_pthread_join();
unsigned long long call_pthread_join();
unsigned long long call_mutex_lock();
long long call_condition_variable();
char arm64g_calculate_condition(long long op, unsigned long long dep1, unsigned long long dep2, unsigned long long ndep);
void __stack_chk_fail(void);
int param_strcpy(char *a0, char *a1);
unsigned long long param_strcmp(char *a0, char *a1);
long long param_strlen();
int param_memcpy(void* a0, void* a1, unsigned long n);
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2);
int param_printf(unsigned int a0, unsigned long a1);
int call_printf();
unsigned long long param_scanf();
unsigned int param_fopen_fclose();
unsigned long long call_fopen_fclose();
unsigned long long param_fread_fwrite(char *a0);
unsigned long long call_fread_fwrite();
unsigned int param_malloc_free(unsigned long a0);
unsigned long long param_memset(void* a0, unsigned long n);
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2);
unsigned long long call_strchr_strstr();
int param_linux_syscall(unsigned long a0);
unsigned long long param_win32_api();
unsigned long long call_win32_api();
unsigned long long param_socket_create();
unsigned long long call_socket_create();
int __isoc99_sscanf(const char *str, const char *format, ...);

// Function: __dollar_x at 0x4013a0
extern unsigned long long g_415dc8;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return 0;
}


// Function: sub_4013b4 at 0x4013b4
void *sub_4013b4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 void* dst; // x0

 dst = memcpy(v0, v1, v2);
 return dst;
}


// Function: main at 0x4017c0
 unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_thread_concurrency(0);
 test_system_calls(0);
 test_standard_library_functions();
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


// Function: sub_401804 at 0x401804
void sub_401804(unsigned long a0)
{
 _start(); /* do not return */
 return;
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
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401954 at 0x401954
long long sub_401954(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = signal_handler(a0);
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

 count = (unsigned long long)(unsigned long)thread_sum((void *)a0);
 return (unsigned long long)(unsigned long)thread_sum((void *)a0);
}


// Function: thread_sum at 0x401980
void *thread_sum(void *arg)
{
 unsigned int *ptr; // x0
 unsigned long v0; // x2
 unsigned int v1; // w3
 unsigned long v10; // x4
 unsigned long v11; // x5
 unsigned long v12; // x4
 unsigned int v13; // w5
 unsigned int v14; // w1
 unsigned int v15; // w2
 unsigned int v2; // w1
 unsigned int v3; // w5
 unsigned int i; // w1
 unsigned long v6; // x4
 unsigned long long cur; // x1
 unsigned long v8; // x4
 unsigned long v9; // x5

 ptr = (unsigned int *)arg;
 v0 = *(ptr);
 v1 = ptr[1];
 ptr[2] = 0;
 if (v1 < (unsigned int)v0)
 return (void*)0;
 v2 = v1 - v0;
 v3 = v2 + 1;
 if (v2 > 7)
 {
 i = 0;
 do
 {
 i += 1;
 } while (((v3 * 0x40000000 | v3 >> 2) & 1073741823) != i);
 v6 = v3 & 0xfffffffc;
 v0 += v6;
 cur = 0;
 if (v3 == (unsigned int)v6)
 {
 ptr[2] = cur;
 return (void*)0;
 }
 }
 else
 {
 cur = 0;
 }
 v8 = (unsigned int)v0 + 1;
 cur += v0;
 if (v1 >= (unsigned int)v8)
 {
 v9 = (unsigned int)v0 + 2;
 cur += v8;
 if (v1 >= (unsigned int)v9)
 {
 v10 = (unsigned int)v0 + 3;
 cur += v9;
 if (v1 >= (unsigned int)v10)
 {
 v11 = (unsigned int)v0 + 4;
 cur += v10;
 if (v1 >= (unsigned int)v11)
 {
 v12 = (unsigned int)v0 + 5;
 cur += v11;
 if (v1 >= (unsigned int)v12)
 {
 v13 = (unsigned int)v0 + 6;
 cur += v12;
 if (v1 >= v13)
 {
 v14 = (unsigned int)cur + v13;
 v15 = (unsigned int)v0 + 7;
 if (v15 <= v1)
 cur = v14 + v15 & 4294967295;
 else
 cur = v14;
 }
 }
 }
 }
 }
 }
 ptr[2] = cur;
 return (void*)(unsigned long long)cur;
}


// Function: sub_401a78 at 0x401a78
void sub_401a78(unsigned long a0)
{
 thread_compute((void*)a0);
 return;
}


// Function: thread_compute at 0x401a80
void *thread_compute(void *a0)
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (unsigned int *)malloc(4);
 *(ptr) = *(unsigned int *)a0 * *(unsigned int *)a0;
 (void)a0;
 return (void*)(unsigned long long)*(ptr);
}


// Function: thread_increment at 0x401ab0
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;

void *thread_increment(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int i; // w22
 unsigned int v7; // w19
 char *v0; // [bp-0x10]
 char v3; // [bp+0x0]

 v0 = &v3;
 i = *(unsigned int *)ptr;
 if (i <= 0)
 return (void*)0;
 v7 = 0;
 do
 {
 pthread_mutex_lock(&counter_mutex);
 v7 += 1;
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 } while (i != v7);
 return (void*)0;
}


// Function: consumer_thread at 0x401b24
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern unsigned int data;
extern unsigned int i;

void *consumer_thread(void *a0)
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]
 (void)a0;
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


// Function: sub_401b98 at 0x401b98
void sub_401b98()
{
 producer_thread(NULL);
}


// Function: producer_thread at 0x401ba0
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern unsigned int data;
extern unsigned int ready;

void *producer_thread(void *a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 (void)a0;
 v0 = &v1;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 ready = 1;
 data = 42;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: sub_401bf8 at 0x401bf8
long long sub_401bf8(unsigned long a0)
{
 unsigned int arg = 1000;

 thread_atomic_increment(&arg);
 return 0;
}


// Function: thread_atomic_increment at 0x401c00
extern unsigned int atomic_counter;

void *thread_atomic_increment(void *a0)
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
 if (*(unsigned int *)a0 <= 0)
 return (void*)0;
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
 } while (*((unsigned int *)a0) != i);
 return (void*)0;
}


// Function: sub_401c6c at 0x401c6c
void sub_401c6c()
{
 thread_atomic_load_store(NULL);
}


// Function: thread_atomic_load_store at 0x401c70
extern unsigned int atomic_counter;

void *thread_atomic_load_store(void *a0)
{
 (void)a0;
 __sync_synchronize();
 __sync_synchronize();
 atomic_counter = atomic_counter + 100;
 return 0;
}


// Function: thread_tls_test at 0x401c90
typedef struct struct_0 {
 char padding_0[16];
 unsigned int field_10;
} struct_0;

void *thread_tls_test(void *a0)
{
 struct_0 *v2; // tpidr_el0
 unsigned int *ptr; // x4
 unsigned int v4; // w20
 unsigned int v5; // w19
 unsigned int *p; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = &v2->field_10;
 v4 = *ptr;
 v5 = v4 + 50;
 *ptr = v5;
 strncpy((char*)ptr - 4, a0, 31);
 p = malloc(8);
 p[0] = v4;
 p[1] = v5;
 return p;
}


// Function: param_fork_exec_part_0 at 0x401ce0
long long param_fork_exec_part_0(char *a0, unsigned long a1)
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 execl(a0, a0);
 _exit(127); /* do not return */
 return;
}


// Function: param_thread_local_storage_constprop_0 at 0x401d00
extern char __stack_chk_guard;

unsigned long long param_thread_local_storage_constprop_0()
{
 void* addr; // x23
 void* ptr_val; // x0
 unsigned long long v23; // x19
 unsigned long long v24; // x20
 unsigned long long v25; // x21
 unsigned long long v26; // x22
 void* p; // x21
 unsigned long long i; // x19
 unsigned long v11; // cc_op
 unsigned long long v29; // x25
 unsigned long long idx; // x19
 unsigned long long ptr_var; // x0
 unsigned long long v33; // x20
 void* v34; // x22
 void* v35; // x22
 unsigned int result; // w0
 unsigned long v37; // x19
 unsigned long v12; // cc_dep1
 unsigned long long v39; // x22
 unsigned long long j; // x20
 unsigned long long v41; // x20
 unsigned long long v42; // x20
 unsigned long long v43; // cc_dep1
 unsigned long long v44; // cc_op
 unsigned long long v45; // cc_dep1
 unsigned long long v46; // cc_dep2
 unsigned long long v47; // x19
 unsigned long long v48; // x20
 unsigned long v13; // cc_dep2
 unsigned long long v49; // x21
 unsigned long long v50; // x22
 unsigned long long v51; // x0
 unsigned long long v52; // x25
 unsigned long long v53; // x19
 unsigned long v14; // cc_ndep
 unsigned long v15; // cc_op
 unsigned long v16; // cc_dep1
 unsigned long v17; // cc_dep2
 unsigned long v18; // cc_ndep
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x50]
 unsigned long long v2; // [bp-0x48]
 unsigned long long v3; // [bp-0x40]
 unsigned long long v4; // [bp-0x38]
 unsigned long long v5; // [bp-0x20]
 unsigned long long *ptr_ptr; // [bp-0x10]
 unsigned int ptr[2];
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 addr = malloc(32);
 ptr_val = malloc(32);
 ptr[0] = (unsigned int)((unsigned long long)ptr_val);
 if (addr)
 {
 if ((char)arm64g_calculate_condition(4, (arm64g_calculate_condition(v11 | 16, v12, v13, v14) ? (unsigned long long)ptr_val : 0x40000000ULL), 0, 0))
 {
 if (v7 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 v1 = v47;
 v2 = v48;
 v3 = v49;
 v4 = v50;
 v5 = v52;
 __stack_chk_fail(); /* do not return */
 }
 }
 else
 {
 if ((char)arm64g_calculate_condition(0, (arm64g_calculate_condition(v15 | 16, v16, v17, v18) ? (unsigned long long)ptr_val : 0x40000000ULL), 0, 0))
 {
 if (v7 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 v1 = v47;
 v2 = v48;
 v3 = v49;
 v4 = v50;
 v5 = v52;
 __stack_chk_fail(); /* do not return */
 }
 }
 v1 = v23;
 v2 = v24;
 v3 = v25;
 v4 = v26;
 p = ptr_val;
 i = 0;
 v5 = v29;
 do
 {
 idx = i;
 ptr_var = (unsigned long long)malloc(16);
 *((unsigned long long *)((char *)p + 8 * idx)) = ptr_var;
 __snprintf_chk((char*)ptr_var, 16, 1, 16, "Thread-%d", idx & 4294967295);
 i = idx + 1;
 } while (i != 4);
 v33 = 0;
 v34 = addr;
 do
 {
 v35 = v34;
 result = pthread_create((pthread_t*)v35, 0, thread_tls_test, (void*)((unsigned long long)p[v33]));
 v37 = result;
 if (result)
 {
 v53 = 0;
 do
 {
 free((void *)*((long long *)((char *)p + 8 * v53)));
 v53 += 1;
 } while ((unsigned int)v53 <= (unsigned int)v33);
 free(p);
 free(addr);
 if (v7 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967294;
 }
 } while ((v33 += 1, v34 = v35 + 8, v33 != 4));
 v39 = 0;
 j = 0;
 do
 {
 v41 = j;
 pthread_join(*((pthread_t*)((char *)addr + v41)), (void**)&ptr);
 v37 += ptr[0];
 v39 += ptr[1];
 free(ptr);
 v42 = v41 + 8;
 free(*((long long *)((char *)p + v41)));
 v43 = v42;
 j = v42;
 } while (j != 32);
 free(p);
 free(addr);
	if ((unsigned int)v37 == 400)
 {
 v44 = 3;
 v45 = ((char)arm64g_calculate_condition(4, v43, 32, 0) ? v39 & 4294967295 : 0);
 v46 = ((char)arm64g_calculate_condition(4, v43, 32, 0) ? 600 : 0);
 }
 else
 {
 v44 = 0;
 v45 = ((char)arm64g_calculate_condition(4, v43, 32, 0) ? v39 & 4294967295 : 0);
 v46 = ((char)arm64g_calculate_condition(4, v43, 32, 0) ? 600 : 0);
 }
 if ((char)arm64g_calculate_condition(v44, v45, v46, 0))
 v51 = 42;
 else
 v51 = 4294967293;
 if (v7 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 (void)v51;
 return 0;
}


// Function: sub_401ec8 at 0x401ec8
void sub_401ec8()
{
 param_atomic_ops_constprop_0();
 return;
}


// Function: param_atomic_ops_constprop_0 at 0x401ed0
extern char __stack_chk_guard;

unsigned long long param_atomic_ops_constprop_0()
{
 void* thread_ptr; // x0
 unsigned long long v12; // x19
 unsigned long long i; // x19
 unsigned long long v24; // x19
 unsigned long long v25; // x20
 unsigned long long v26; // x21
 unsigned long long v27; // x22
 unsigned long long v28; // x0
 unsigned long long v29; // x23
 unsigned long long v30; // x24
 unsigned long long v13; // x20
 unsigned long long v14; // x21
 unsigned long long v15; // x22
 unsigned long long v17; // x23
 unsigned long long v18; // x24
 pthread_t *v19; // x19
 pthread_t *v20; // x19
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x50]
 unsigned long long v2; // [bp-0x48]
 unsigned long long v3; // [bp-0x40]
 unsigned long long v4; // [bp-0x38]
 unsigned long long v5; // [bp-0x30]
 unsigned long long v6; // [bp-0x28]
 unsigned int v7; // [bp-0x14]
 char v8; // [bp-0x10], Other Possible Types: unsigned long long
 unsigned long v9; // [bp-0x8]
 char v10; // [bp+0x0]

 v0 = &v10;
 v9 = *((long long *)&__stack_chk_guard);
 v7 = 500;
 thread_ptr = malloc(32);
 if (thread_ptr)
 {
 v1 = v12;
 v2 = v13;
 v3 = v14;
 v4 = v15;
 v5 = v17;
 v6 = v18;
 __sync_synchronize();
 atomic_counter = 0;
 v19 = (pthread_t*)thread_ptr;
 do
 {
 v20 = v19;
 if ((int)pthread_create(v20, 0, (void*(*)(void*))thread_atomic_increment, (void*)&v7))
 {
 free(thread_ptr);
 if (v9 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967294;
 }
 } while ((v19 = v20 + 8, (pthread_t*)thread_ptr + 4 != v19));
 if (!(int)pthread_create((pthread_t*)&v8, 0, thread_atomic_load_store, 0))
 pthread_join(v8, NULL);
 i = 0;
 do
 {
 pthread_join(*((long long *)((char *)thread_ptr + 8 * i)), NULL);
 i += 1;
 } while (i != 4);
 __sync_synchronize();
 free(thread_ptr);
 if (0 < atomic_counter)
 v28 = 42;
 else
 v28 = 4294967293;
 if (v9 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v28;
 }
 else if (v9 == *((long long *)&__stack_chk_guard))
 {
 return 4294967295;
 }
 else
 {
 v1 = v24;
 v2 = v25;
 v3 = v26;
 v4 = v27;
 v5 = v29;
 v6 = v30;
 __stack_chk_fail(); /* do not return */
 }
}


// Function: param_mutex_lock_constprop_0 at 0x402030
extern char __stack_chk_guard;
extern unsigned int shared_counter;

unsigned long long param_mutex_lock_constprop_0()
{
 void* thread_ptr; // x0
 unsigned long long v11; // x21
 unsigned long long i; // x19
 unsigned long long v23; // x0
 unsigned long long v12; // x22
 unsigned long long v13; // x23
 unsigned long long v14; // x24
 unsigned long long v15; // x19
 unsigned long long v16; // x20
 pthread_t *v18; // x19
 pthread_t *v19; // x19
 char *v0; // [bp-0x50]
 unsigned long long v1; // [bp-0x40]
 unsigned long long v2; // [bp-0x38]
 unsigned long long v3; // [bp-0x30]
 unsigned long long v4; // [bp-0x28]
 unsigned long long v5; // [bp-0x20]
 unsigned long long v6; // [bp-0x18]
 unsigned int v7; // [bp-0xc]
 unsigned long v8; // [bp-0x8]
 char v9; // [bp+0x0]

 v0 = &v9;
 v8 = *((long long *)&__stack_chk_guard);
 v7 = 1000;
 thread_ptr = malloc(32);
 if (thread_ptr)
 {
 v3 = v11;
 v4 = v12;
 v5 = v13;
 v6 = v14;
 v1 = v15;
 v2 = v16;
 shared_counter = 0;
 v18 = (pthread_t*)thread_ptr;
 do
 {
 v19 = v18;
 if ((int)pthread_create(v19, 0, thread_increment, (void*)&v7))
 {
 free(thread_ptr);
 if (v8 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967294;
 }
 } while ((v18 = v19 + 1, (pthread_t*)((char*)thread_ptr + 32) != v18));
 i = 0;
 do
 {
 pthread_join(((pthread_t*)thread_ptr)[i], 0);
 i += 1;
 } while (i != 4);
 free(thread_ptr);
 if (shared_counter == v7 * 4)
 v23 = 42;
 else
 v23 = 4294967293;
 }
 else
 {
 v23 = 4294967295;
 }
 if (v8 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v23;
}


// Function: sub_402158 at 0x402158
void sub_402158(unsigned long a0)
{
 param_strcpy();
 return;
}


// Function: param_strcpy at 0x402160
int param_strcpy(char *a0, char *a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return (unsigned int)((stpcpy(a0, a1) & 4294967295) - a0);
}


// Function: call_strcpy at 0x402184
unsigned long long call_strcpy()
{
 return 8;
}


// Function: sub_40218c at 0x40218c
void sub_40218c()
{
 param_strcmp();
 return;
}


// Function: param_strcmp at 0x402190
long long param_strcmp(char *a0, char *a1)
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


// Function: call_strcmp at 0x4021b0
unsigned long long call_strcmp()
{
 return 0;
}


// Function: sub_4021b8 at 0x4021b8
void sub_4021b8()
{
 param_strlen();
 return;
}


// Function: param_strlen at 0x4021c0
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


// Function: call_strlen at 0x4021d4
unsigned long long call_strlen()
{
 return 12;
}


// Function: sub_4021dc at 0x4021dc
void sub_4021dc(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_memcpy();
 return;
}


// Function: param_memcpy at 0x4021e0
int param_memcpy(void* a0, void* a1, unsigned long n)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x402204
unsigned long long call_memcpy()
{
 return 90;
}


// Function: sub_40220c at 0x40220c
void sub_40220c()
{
 param_memcmp();
 return;
}


// Function: param_memcmp at 0x402210
long long param_memcmp(void* a0, void* a1, unsigned long a2)
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


// Function: call_memcmp at 0x402230
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
 goto LABEL_4022ca;
LABEL_4022c9:
 v15 = v14;
 }
 else
 {
 v14 = 4294967295;
 if ((char)arm64g_calculate_condition(211, v13, 0, 0))
 goto LABEL_4022c9;
LABEL_4022ca:
 v15 = 1;
 }
 if (v7 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v15 + v11;
}


// Function: sub_4022fc at 0x4022fc
void sub_4022fc(unsigned long a0, unsigned long a1)
{
 param_printf();
 return;
}


// Function: param_printf at 0x402300
int param_printf(unsigned int a0, unsigned long a1)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
}


// Function: sub_402318 at 0x402318
void sub_402318()
{
 call_printf();
 return;
}


// Function: call_printf at 0x402320
int call_printf()
{
 return __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
}


// Function: sub_40233c at 0x40233c
void sub_40233c()
{
 param_scanf();
 return;
}


// Function: param_scanf at 0x402340
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


// Function: call_scanf at 0x4023b0
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


// Function: sub_402428 at 0x402428
void sub_402428()
{
 param_fopen_fclose();
 return;
}


// Function: param_fopen_fclose at 0x402430
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


// Function: sub_402478 at 0x402478
void sub_402478()
{
 call_fopen_fclose();
 return;
}


// Function: call_fopen_fclose at 0x402480
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


// Function: sub_4024d8 at 0x4024d8
void sub_4024d8(unsigned long a0)
{
 param_fread_fwrite();
 return;
}


// Function: param_fread_fwrite at 0x4024e0
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


// Function: sub_40262c at 0x40262c
void sub_40262c()
{
 call_fread_fwrite();
 return;
}


// Function: call_fread_fwrite at 0x402630
unsigned long long call_fread_fwrite()
{
 unsigned long long count; // x0

 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_40263c at 0x40263c
void sub_40263c(unsigned long a0)
{
 param_malloc_free();
 return;
}


// Function: param_malloc_free at 0x402640
unsigned int param_malloc_free(unsigned long a0)
{
 void* addr; // x0
 void* p; // x1
 unsigned long long index; // x1
 unsigned long long v7; // x2
 void* ptr; // x3
 unsigned long long v9; // x1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 addr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!addr)
 return 4294967295;
 if (a0)
 {
 if (a0 - 1 > 2)
 {
 p = addr;
 do
 {
 *((unsigned long long *)p) = 0;
 p += 16;
 } while (addr + (__ROL__(a0, 62) & 4611686018427387903) * 16 != p);
 index = a0 & 18446744073709551612;
 if ((char)arm64g_calculate_condition(10, a0 & 3, 0, 0))
 {
 free(addr);
 return *((int *)(-4 + (char *)addr + (__ROL__(a0, 2) & 18446744073709551612))) + *((int *)addr);
 }
 }
 else
 {
 index = 0;
 }
 v7 = index + 1;
 *((unsigned int *)((char *)addr + 4 * index)) = __ROL__((unsigned int)index * 5, 1) & 4294967294;
 if (a0 > v7)
 {
 ptr = addr + (__ROL__(index, 2) & 18446744073709551612);
 v9 = index + 2;
 *((unsigned int *)&ptr[4]) = __ROL__((unsigned int)v7 * 5, 1) & 4294967294;
 if (a0 > v9)
 *((unsigned int *)&ptr[8]) = ((unsigned int)v9 * 10 | (unsigned int)v9 * 5 >> 31) & 4294967294;
 }
 }
 free(addr);
 return *((int *)(-4 + (char *)addr + (__ROL__(a0, 2) & 18446744073709551612))) + *((int *)addr);
}


// Function: call_malloc_free at 0x402740
unsigned long long call_malloc_free()
{
 void* ptr; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return 90;
}


// Function: sub_40276c at 0x40276c
void sub_40276c(unsigned long a0, unsigned long a1)
{
 param_memset();
 return;
}


// Function: param_memset at 0x402770
unsigned long long param_memset(void* a0, unsigned long n)
{
 void* v2; // x20
 void* i; // x3
 unsigned long long v12; // x0
 unsigned long long v13; // x2
 unsigned long long v14; // x0
 unsigned long long v15; // x2
 unsigned long long v16; // x0
 unsigned long long v17; // x2
 unsigned long long v18; // x0
 unsigned long long v19; // x2
 unsigned long long v20; // x0
 unsigned long long v21; // x2
 unsigned long long v22; // x0
 unsigned long long v23; // x2
 unsigned long long v24; // x0
 unsigned long long v25; // x2
 unsigned long long v26; // x0
 unsigned long long v27; // x2
 unsigned long long v28; // x0
 unsigned long long v29; // x2
 unsigned long long v30; // x0
 unsigned long long v31; // x2
 unsigned long long v5; // d0
 unsigned long long v32; // x0
 unsigned long long v33; // x0
 unsigned long long v6; // x1
 unsigned long long v7; // x2
 unsigned long long v8; // x0
 unsigned long long v9; // x2
 unsigned long long v10; // x0
 unsigned long long v11; // x2
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 memset(a0, 0, n);
 if (!n)
 return 0;
 if (n - 1 > 14)
 {
 i = v2;
 do
 {
 i += 16;
 } while (i != (n & 0xfffffffffffffff0) + v2);
 v5 = 0;
 v6 = n & 0xfffffffffffffff0;
 if ((char)arm64g_calculate_condition(10, n & 15, 0, 0))
 return v5;
 }
 else
 {
 v6 = 0;
 v5 = 0;
 }
 v7 = v6 + 1;
 v8 = v5 + *((char *)v2 + v6);
 if (n <= v7)
 return v8;
 v9 = v6 + 2;
 v10 = v8 + *((char *)v2 + v7);
 if (n <= v9)
 return v10;
 v11 = v6 + 3;
 v12 = v10 + *((char *)v2 + v9);
 if (n <= v11)
 return v12;
 v13 = v6 + 4;
 v14 = v12 + *((char *)v2 + v11);
 if (n <= v13)
 return v14;
 v15 = v6 + 5;
 v16 = v14 + *((char *)v2 + v13);
 if (n <= v15)
 return v16;
 v17 = v6 + 6;
 v18 = v16 + *((char *)v2 + v15);
 if (n <= v17)
 return v18;
 v19 = v6 + 7;
 v20 = v18 + *((char *)v2 + v17);
 if (n <= v19)
 return v20;
 v21 = v6 + 8;
 v22 = v20 + *((char *)v2 + v19);
 if (n <= v21)
 return v22;
 v23 = v6 + 9;
 v24 = v22 + *((char *)v2 + v21);
 if (n <= v23)
 return v24;
 v25 = v6 + 10;
 v26 = v24 + *((char *)v2 + v23);
 if (n <= v25)
 return v26;
 v27 = v6 + 11;
 v28 = v26 + *((char *)v2 + v25);
 if (n <= v27)
 return v28;
 v29 = v6 + 12;
 v30 = v28 + *((char *)v2 + v27);
 if (n <= v29)
 return v30;
 v31 = v6 + 13;
 v32 = v30 + *((char *)v2 + v29);
 if (n <= v31)
 return v32;
 v33 = v32 + *((char *)v2 + v31);
 if (n <= v6 + 14)
 return v33;
 return v33 + *((char *)v2 + 14 + v6);
}


// Function: call_memset at 0x402930
unsigned long long call_memset()
{
 return 0;
}


// Function: sub_402938 at 0x402938
void sub_402938(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_strchr_strstr();
 return;
}


// Function: param_strchr_strstr at 0x402940
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned long long v6; // x30
 unsigned long long v7; // x19
 unsigned long long v8; // x20
 unsigned long long v9; // x21
 unsigned long long ptr; // x0
 unsigned long long v11; // x19
 unsigned long long ptr2; // x0
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
 v11 = (unsigned long long)(ptr - a0);
 ptr2 = strstr(a0, a2);
 if (!ptr2)
 v13 = 4294967295;
 else
 v13 = (unsigned long long)(ptr2 - a0);
 return v11 + v13;
}


// Function: sub_40299c at 0x40299c
void sub_40299c()
{
 call_strchr_strstr();
 return;
}


// Function: call_strchr_strstr at 0x4029a0
unsigned long long call_strchr_strstr()
{
 return 15;
}


// Function: sub_4029a8 at 0x4029a8
void sub_4029a8()
{
 test_standard_library_functions();
 return;
}


// Function: test_standard_library_functions at 0x4029b0
extern char __stack_chk_guard;
extern char g_403ec8;
extern char g_403ef0;
extern char g_403f10;
extern char g_403f30;
extern char g_403f50;
extern char g_403f70;
extern char g_403f90;
extern char g_403fb0;
extern char g_403fd0;
extern char g_403ff0;
extern char g_404010;
extern char g_404030;
extern char g_404050;

long long test_standard_library_functions()
{
 unsigned long long v11; // x0
 unsigned int v12; // w20
 unsigned long long v21; // x2
 void* ptr; // x0
 unsigned long long v24; // x2
 unsigned long long v25; // x0
 unsigned long v13; // x20
 unsigned long long v14; // x0
 unsigned int v15; // w2
 unsigned long v16; // x2
 unsigned long long v18; // x2
 void* fp; // x0
 unsigned int v20; // w0
 char *v0; // [bp-0x70]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 unsigned long long v3; // [bp-0x38]
 unsigned int v4; // [bp-0x30]
 unsigned long long v5; // [bp-0x28]
 unsigned int v6; // [bp-0x20]
 unsigned long long v7; // [bp-0x18]
 unsigned int v8; // [bp-0x10]
 unsigned long v9; // [bp-0x8]
 char v10; // [bp+0x0]

 v0 = &v10;
 v9 = *((long long *)&__stack_chk_guard);
 puts(&g_403ec8);
 __printf_chk(1, &g_403ef0, 8);
 __printf_chk(1, &g_403f10, 0);
 __printf_chk(1, &g_403f30, 12);
 __printf_chk(1, &g_403f50, 90);
 v3 = 8589934593;
 v6 = 4;
 v4 = 3;
 v5 = 8589934593;
 v7 = 8589934593;
 v8 = 3;
 v11 = memcmp(&v3, &v5, 12);
 if (!(unsigned int)v11)
 v12 = 0;
 else
 v12 = 4294967295;
 if ((char)arm64g_calculate_condition(211, v11 & 4294967295, 0, 0))
 v13 = v12;
 else
 v13 = 1;
 v14 = memcmp(&v3, &v7, 12);
 if (!(unsigned int)v14)
 v15 = 0;
 else
 v15 = 4294967295;
 if ((char)arm64g_calculate_condition(211, v14 & 4294967295, 0, 0))
 v16 = v15;
 else
 v16 = 1;
 __printf_chk(1, &g_403f70, v16 + v13);
 __printf_chk(1, &g_403f90, __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test") & 4294967295);
 if (__isoc99_sscanf("123,456", "%d,%d") == 2)
 v18 = v1 + v2;
 else
 v18 = 4294967295;
 __printf_chk(1, &g_403fb0, v18);
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 v20 = fileno(fp);
 fclose(fp);
 v21 = 42;
 if (!(v20 >> 31 & 1))
 goto LABEL_402b58;
 }
 v21 = 4294967295;
LABEL_402b58:
 __printf_chk(1, &g_403fd0, v21);
 __printf_chk(1, &g_403ff0, param_fread_fwrite("/tmp/binbench_test_tmp") & 4294967295);
 ptr = malloc(40);
 if (ptr)
 {
 free(ptr);
 v24 = 90;
 }
 else
 {
 v24 = 4294967295;
 }
 __printf_chk(1, &g_404010, v24);
 __printf_chk(1, &g_404030, 0);
 if (v9 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v25 = __printf_chk(1, &g_404050, 15);
 return __printf_chk(1, &g_404050, 15);
}


// Function: sub_402c18 at 0x402c18
void sub_402c18(unsigned long a0)
{
 param_linux_syscall();
 return;
}


// Function: param_linux_syscall at 0x402c20
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


// Function: call_linux_syscall at 0x402c80
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


// Function: sub_402cd8 at 0x402cd8
void sub_402cd8()
{
 param_win32_api();
 return;
}


// Function: param_win32_api at 0x402ce0
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
 if (((char)(stat("/tmp/stat_test", &v1) >> 31) & 1))
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


// Function: sub_402d4c at 0x402d4c
void sub_402d4c()
{
 call_win32_api();
 return;
}


// Function: call_win32_api at 0x402d50
extern char __stack_chk_guard;

unsigned long long call_win32_api()
{
 unsigned long long v5; // x0
 char *v0; // [bp-0xa0]
 struct stat v1; // [bp-0x88]
 unsigned long long v2; // [bp-0x58]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 if (((char)(stat("/etc/passwd", &v1) >> 31) & 1))
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


// Function: param_fork_exec at 0x402dc4
extern char __stack_chk_guard;

unsigned long long param_fork_exec(char *a0, unsigned int a1)
{
 unsigned long long pid; // x0
 unsigned long long v5; // x0
 unsigned long v6; // x0
 char *v0; // [bp-0x30]
 int v1[1]; // [bp-0xc]
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
 if (!waitpid(pid, v1, 0))
 {
 v6 = v1[0];
 if ((char)arm64g_calculate_condition(10, v6 & 127, 0, 0))
 v5 = (v6 * 0x100000000000000 | v6 >> 8) & 18374686479671623935 & 255 & 4294967295;
 else
 v5 = 4294967293;
 }
 }
 else
 {
 param_fork_exec_part_0(a0, a1); /* do not return */
 }
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 (void)v6;
 return v5;
}


// Function: call_fork_exec at 0x402e70
extern char __stack_chk_guard;

unsigned long long call_fork_exec()
{
 unsigned long long pid; // x0
 unsigned long v5; // x1
 unsigned long long v6; // x0
 char *v0; // [bp-0x20]
 int v1[1][1]; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 pid = fork();
 if ((unsigned int)pid >= 0)
 {
 if ((char)arm64g_calculate_condition(3, pid & 4294967295, 0, 0))
 param_fork_exec_part_0("/bin/true", 0); /* do not return */
 if (!waitpid(pid, v1, 0) && !((v5 = v1[0], !((char)arm64g_calculate_condition(10, v5 & 127, 0, 0)) || (v6 = 42, !((char)arm64g_calculate_condition(10, v5 & 0xff00, 0, 0))))))
 goto LABEL_402ebc;
 }
 v6 = 4294967295;
LABEL_402ebc:
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: param_pipe_communication at 0x402f04
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


// Function: call_pipe_communication at 0x402ff0
unsigned long long call_pipe_communication()
{
 unsigned long long v0; // x0

 v0 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x402ff4
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


// Function: sub_4030f8 at 0x4030f8
long long sub_4030f8()
{
 unsigned long long sock; // x0

 sock = call_socket_create();
 return call_socket_create();
}


// Function: call_socket_create at 0x403100
unsigned long long call_socket_create()
{
 unsigned long long sock; // x0

 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x403104
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


// Function: sub_4031bc at 0x4031bc
void sub_4031bc()
{
 call_shmget_shmat();
 return;
}


// Function: call_shmget_shmat at 0x4031c0
unsigned long long call_shmget_shmat()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (0 >= (unsigned int)param_shmget_shmat())
 return 4294967295;
 return 42;
}


// Function: param_signal_handling at 0x4031e0
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
 v2 = (unsigned long long)signal(10, (void (*)(int))signal_handler);
 if ((char)arm64g_calculate_condition(2, v2, 1, 0))
 {
 return v2;
 }
 else if (!((char)arm64g_calculate_condition(2, (unsigned long long)signal(14, (void (*)(int))signal_handler), 1, 0)))
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
 signal(signal_number, (void (*)(int))NULL);
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


// Function: call_signal_handling at 0x403300
unsigned long long call_signal_handling()
{
 unsigned long long v0; // x0

 v0 = param_signal_handling();
 return param_signal_handling();
}


// Function: test_system_calls at 0x403304
extern char __stack_chk_guard;
extern char g_4040b8;
extern char g_4040d8;
extern char g_4040f8;
extern char g_404118;
extern char g_404138;
extern char g_404158;
extern char g_404178;
extern char g_404198;

long long test_system_calls()
{
 unsigned long long v6; // x2
 unsigned long long v7; // x2
 unsigned long long pid; // x0
 unsigned long v9; // x0
 unsigned long long v10; // x2
 unsigned long long v13; // x2
 unsigned int v14; // w0
 unsigned long long v15; // x0
 char *v0; // [bp-0xb0]
 unsigned int v1[1][1]; // [bp-0x8c]
 struct stat v2; // [bp-0x88]
 unsigned long long v3; // [bp-0x58]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 puts(&g_4040b8);
 if (!((char)(syscall(56) >> 31) & 1))
 {
 syscall(57);
 v6 = 42;
 }
 else
 {
 if (*(__errno_location()) <= 0)
 v6 = 42;
 else
 v6 = 4294967295;
 }
 __printf_chk(1, &g_4040d8, v6);
 if (((char)(stat("/etc/passwd", &v2) >> 31) & 1))
 {
 v7 = 4294967295;
 }
 else if (0 < v3)
 {
 v7 = 42;
 }
 else
 {
 v7 = 4294967294;
 }
 __printf_chk(1, &g_4040f8, v7);
 pid = fork();
 if ((unsigned int)pid >= 0)
 {
 if ((char)arm64g_calculate_condition(3, pid & 4294967295, 0, 0))
 param_fork_exec_part_0("/bin/true", 0); /* do not return */
 if (!((char)(waitpid(pid, (int*)&v1[0], 0) >> 31) & 1) && !((v9 = (unsigned long long)*(int*)v1, !((char)arm64g_calculate_condition(10, v9 & 127, 0, 0)) || (v10 = 42, !((char)arm64g_calculate_condition(10, v9 & 0xff00, 0, 0))))))
 goto LABEL_4033d0;
 }
 v10 = 4294967295;
LABEL_4033d0:
 __printf_chk(1, &g_404118, v10);
 __printf_chk(1, &g_404138, param_pipe_communication() & 4294967295);
 __printf_chk(1, &g_404158, param_socket_create() & 4294967295);
 if (0 < (unsigned int)param_shmget_shmat())
 v13 = 42;
 else
 v13 = 4294967295;
 __printf_chk(1, &g_404178, v13);
 v14 = param_signal_handling();
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v15 = __printf_chk(1, &g_404198, v14);
 return __printf_chk(1, &g_404198, v14);
}


// Function: param_pthread_create at 0x4034b0
extern char __stack_chk_guard;

long long param_pthread_create(unsigned int a0)
{
 pthread_t v6; // w19
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x1c]
 pthread_t v2;
 unsigned int *ptr; // [bp-0x10], Other Possible Types: char
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v1 = a0;
 if (!(int)pthread_create(&v2, 0, thread_compute, &v1))
 {
 pthread_join(v2, (void**)&ptr);
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


// Function: call_pthread_create at 0x403544
extern char __stack_chk_guard;

long long call_pthread_create()
{
 pthread_t v6; // w19
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x1c]
 pthread_t v2;
 unsigned int *ptr; // [bp-0x10], Other Possible Types: char
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v1 = 7;
 if (!(int)pthread_create(&v2, 0, thread_compute, &v1))
 {
 pthread_join(v2, (void**)&ptr);
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


// Function: sub_4035d8 at 0x4035d8
void sub_4035d8()
{
 param_pthread_join();
 return;
}


// Function: param_pthread_join at 0x4035e0
extern char __stack_chk_guard;

unsigned long long param_pthread_join()
{
 unsigned int v7; // w23
 pthread_t *thread_ptr; // x22
 char *v9; // x21
 pthread_t *v10; // x20
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
 thread_ptr = (pthread_t*)&v1;
 v9 = &v2;
 v10 = thread_ptr;
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
 v10 += 1;
 v9 += 12;
 v7 = flag2 - 1;
 if (flag2 == 1)
 {
 v15 = 0;
 do
 {
 v16 = v15;
 if ((int)pthread_join(*(pthread_t*)((char *)thread_ptr + v16), NULL))
 {
 if (v5 == *((long long *)&__stack_chk_guard))
 return 4294967294;
 __stack_chk_fail(); /* do not return */
 }
 } while ((v13 += (unsigned long long)(unsigned int)*((int *)((char *)&v18 + v16)), v15 = v16 + 12, v15 != 36));
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


// Function: sub_4036ec at 0x4036ec
long long sub_4036ec()
{
 unsigned long long count; // x0

 count = call_pthread_join();
 return call_pthread_join();
}


// Function: call_pthread_join at 0x4036f0
unsigned long long call_pthread_join()
{
 unsigned long long count; // x0

 count = param_pthread_join();
 return param_pthread_join();
}


// Function: param_mutex_lock at 0x4036f4
extern unsigned int shared_counter;

unsigned long long param_mutex_lock(unsigned long a0, unsigned int a1)
{
 unsigned int v9; // w25
 pthread_t *thread_ptr; // x0
 pthread_t *v19; // x19
 pthread_t *v20; // x19
 pthread_t *v21; // x19
 pthread_t *i; // x21
 pthread_t *v23; // x21
 unsigned long long v11; // x23
 unsigned long long v12; // x24
 unsigned long long v14; // x19
 unsigned long long v15; // x20
 unsigned long long v16_ptr; // x20
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
 thread_ptr = (pthread_t*)malloc(a0 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(a0, 3) & 34359738360 & 34359738367);
 if (!thread_ptr)
 return 4294967295;
 v5 = v11;
 v6 = v12;
 shared_counter = 0;
 if (v9 > 0)
 {
 v1 = v14;
 v2 = v15;
 v16_ptr = a0;
 v3 = v17;
 v4 = v18;
 v19 = thread_ptr;
 do
 {
 v20 = v19;
 v21 = v20 + 1;
 if ((int)pthread_create(v20, 0, thread_increment, &v7))
 {
 free(thread_ptr);
 return 4294967294;
 }
 } while ((i = thread_ptr, v19 = v21, v19 != (pthread_t*)thread_ptr + v16_ptr));
 do
 {
 v23 = i + 1;
 pthread_join(*((pthread_t*)i), NULL);
 i = v23;
 } while (i != thread_ptr + v16_ptr);
 }
 free(thread_ptr);
 if (shared_counter != v7 * v9)
 return 4294967293;
 return 42;
}


// Function: sub_4037f8 at 0x4037f8
long long sub_4037f8()
{
 unsigned long long v0; // x0

 v0 = call_mutex_lock();
 return call_mutex_lock();
}


// Function: call_mutex_lock at 0x403800
unsigned long long call_mutex_lock()
{
 unsigned long long v0; // x0

 v0 = param_mutex_lock_constprop_0();
 return param_mutex_lock_constprop_0();
}


// Function: param_condition_variable at 0x403804
extern char __stack_chk_guard;
extern unsigned int data;
extern unsigned int ready;
extern unsigned long long signal_received;

long long param_condition_variable()
{
 unsigned int v6; // w19
 char *v0; // [bp-0x40]
 pthread_t v1;
 pthread_t v2;
 unsigned int *ptr; // [bp-0x10], Other Possible Types: char
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 ready = 0;
 data = 0;
 if ((int)pthread_create(&v2, 0, consumer_thread, 0))
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


// Function: sub_4038d8 at 0x4038d8
long long sub_4038d8()
{
 unsigned long long v0; // x0

 v0 = call_condition_variable();
 return call_condition_variable();
}


// Function: call_condition_variable at 0x4038e0
unsigned long long call_condition_variable()
{
 unsigned long long v0; // x0

 v0 = param_condition_variable();
 return param_condition_variable();
}


// Function: param_atomic_ops at 0x4038e4
extern char __stack_chk_guard;

unsigned long long param_atomic_ops(unsigned long a0, unsigned int a1)
{
 unsigned int i; // w22
 void* thread_ptr; // x0
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
 pthread_t *v18; // x19
 pthread_t *v19; // x19
 pthread_t v7; // [bp-0x10], Other Possible Types: unsigned long long
 char *v0; // [bp-0x70]
 unsigned long long v1; // [bp-0x60]
 unsigned long long v2; // [bp-0x58]
 unsigned long long v3; // [bp-0x40]
 unsigned long long v4; // [bp-0x38]
 unsigned long long v5; // [bp-0x30]
 unsigned int v6; // [bp-0x14]
 unsigned long v8; // [bp-0x8]
 char v9; // [bp+0x0]

 v0 = &v9;
 i = a0;
 v6 = a1;
 v8 = *((long long *)&__stack_chk_guard);
 thread_ptr = malloc(a0 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(a0, 3) & 34359738360 & 34359738367);
 if (thread_ptr)
 {
 v1 = v13;
 v2 = v14;
 v5 = v15;
 __sync_synchronize();
 atomic_counter = 0;
 if (i > 0)
 {
 v3 = v16;
 v4 = v17;
 v18 = (pthread_t*)thread_ptr;
 do
 {
 v19 = v18;
 if ((int)pthread_create(v19, 0, (void*(*)(void*))thread_atomic_increment, (void*)&v6))
 {
 free(thread_ptr);
 if (v8 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967294;
 }
 } while ((v18 = v19 + 1, v18 != (pthread_t*)((char*)thread_ptr + i * sizeof(pthread_t))));
 if (!(int)pthread_create(&v7, 0, thread_atomic_load_store, 0))
 pthread_join(v7, NULL);
 v27 = 0;
 do
 {
 pthread_join(((pthread_t*)thread_ptr)[v27], NULL);
 v27 += 1;
 } while ((unsigned int)v27 < i);
 v24 = v3;
 v25 = v4;
 }
 else
 {
 if (!(int)pthread_create(&v7, 0, thread_atomic_load_store, NULL))
 pthread_join(v7, NULL);
 }
 __sync_synchronize();
 free(thread_ptr);
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


// Function: call_atomic_ops at 0x403a80
unsigned long long call_atomic_ops()
{
 unsigned long long v0; // x0

 v0 = param_atomic_ops_constprop_0();
 return param_atomic_ops_constprop_0();
}


// Function: param_thread_local_storage at 0x403a84
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
 void** p; // x21
 void* addr; // x23
 unsigned long long v26; // cc_op
 unsigned long long j; // cc_dep1
 unsigned long long v28; // cc_dep2
 unsigned long long i; // x19
 unsigned long long idx; // x19
 void *ptr; // x0
 unsigned long long v33; // x20
 void* v34; // x22
 void* v35; // x22
 void* *ptr; // x0
 unsigned int result; // w0
 unsigned long v37; // x19
 void* *k; // x19
 unsigned long long v41; // x21
 unsigned long long v42; // x22
 unsigned long long v43; // x0
 unsigned long long v44; // x25
 unsigned long long v45; // x22
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
 void *ptr_val; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]
 unsigned long long save_v1;
 unsigned long long save_v2;

 v0 = &v5;
 v6 = a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295;
 v4 = *((long long *)&__stack_chk_guard);
 save_v1 = v7 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(v6, 3) & 34359738360 & 34359738367;
	addr = malloc(save_v1);
 void **thread_ptr;
 p = (void**)malloc(save_v1 * sizeof(void*));
 if (addr)
 {
 if ((char)arm64g_calculate_condition(4, (arm64g_calculate_condition(v10 | 16, v11, v12, v13) ? (unsigned long long)ptr : 0x40000000), 0, 0))
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
 if ((char)arm64g_calculate_condition(0, (arm64g_calculate_condition(v14 | 16, v15, v16, v17) ? (unsigned long long)ptr : 0x40000000ULL), 0, 0))
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
 v26 = 3;
 j = v6 & 4294967295;
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
 result = pthread_create((pthread_t*)v35, 0, thread_tls_test, (void*)((unsigned long long)p[v33]));
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
 j = __ROL__(v33, 3) & 18446744073709551608;
 v44 = 0;
 v45 = 0;
 do
 {
 void *thread_retval;
 v46 = v45;
 pthread_join(*(pthread_t*)((char *)addr + v46), &thread_retval);
 v37 += ((unsigned int*)thread_retval)[0];
 v44 += ((unsigned int*)thread_retval)[1];
 free(thread_retval);
 v28 = v46 + 8;
 free(p[v46/8]);
 v26 = 4;
 v45 = (size_t)v28;
 } while ((size_t)j != (size_t)v45);
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
 if (!((char)arm64g_calculate_condition(3, ((char)arm64g_calculate_condition(v26, j, v28, 0) ? v47 & 4294967295 : 0), ((char)arm64g_calculate_condition(v26, j, v28, 0) ? v44 & 4294967295 : 0), 0)))
 goto LABEL_403c46;
LABEL_403c45:
 v43 = 42;
 }
 else
 {
 if ((char)arm64g_calculate_condition(0, ((char)arm64g_calculate_condition(v26, j, v28, 0) ? v47 & 4294967295 : 0), ((char)arm64g_calculate_condition(v26, j, v28, 0) ? v44 & 4294967295 : 0), 0))
 goto LABEL_403c45;
LABEL_403c46:
 v43 = 4294967293;
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v43;
}


// Function: sub_403c6c at 0x403c6c
long long sub_403c6c()
{
 unsigned long long count; // x0

 count = call_thread_local_storage();
 return call_thread_local_storage();
}


// Function: call_thread_local_storage at 0x403c70
unsigned long long call_thread_local_storage()
{
 unsigned long long count; // x0

 count = param_thread_local_storage_constprop_0();
 return param_thread_local_storage_constprop_0();
}


// Function: test_thread_concurrency at 0x403c74
extern char __stack_chk_guard;
extern char g_4041b8;
extern char g_4041d8;
extern char g_4041f8;
extern char g_404218;
extern char g_404238;
extern char g_404258;
extern char g_404278;

long long test_thread_concurrency(long long unused)
{
 pthread_t v6; // w19
 unsigned int v11; // w0
 unsigned long long v12; // x0
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x1c]
 pthread_t v2;
 unsigned int *ptr; // [bp-0x10], Other Possible Types: char
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 puts(&g_4041b8);
 v1 = 7;
 if (!(int)pthread_create(&v2, 0, thread_compute, &v1))
 {
 pthread_join(v2, (void**)&ptr);
 v6 = *(ptr);
 free(ptr);
 }
 else
 {
 v6 = 4294967295;
 }
 __printf_chk(1, &g_4041d8, v6);
 __printf_chk(1, &g_4041f8, param_pthread_join() & 4294967295);
 __printf_chk(1, &g_404218, param_mutex_lock_constprop_0() & 4294967295);
 __printf_chk(1, &g_404238, param_condition_variable() & 4294967295);
 __printf_chk(1, &g_404258, param_atomic_ops_constprop_0() & 4294967295);
 v11 = param_thread_local_storage_constprop_0();
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v12 = __printf_chk(1, &g_404278, v11);
 return __printf_chk(1, &g_404278, v11);
}


// Function: sub_403d98 at 0x403d98
long long sub_403d98()
{
 return 0;
}


// Failed to decompile function __aarch64_cas4_acq_rel at 0x403da0
// Function: sub_403db4 at 0x403db4
long long sub_403db4()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_403dd4 at 0x403dd4
long long sub_403dd4()
{
 return 0;
}


// Function: __aarch64_ldadd4_acq_rel at 0x403de0
int __aarch64_ldadd4_acq_rel(int value, int *ptr)
{
 int old_value;
 __atomic_fetch_add(ptr, value, __ATOMIC_ACQ_REL);
 return old_value;
}

// Function: __aarch64_cas4_acq_rel at 0x403da0
int __aarch64_cas4_acq_rel(int old_value, int new_value, int *ptr)
{
 int expected = old_value;
 __atomic_compare_exchange_n(ptr, &expected, new_value, 0, __ATOMIC_ACQ_REL, __ATOMIC_ACQ_REL);
 return expected;
}

// Function: sub_403df4 at 0x403df4
long long sub_403df4()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


