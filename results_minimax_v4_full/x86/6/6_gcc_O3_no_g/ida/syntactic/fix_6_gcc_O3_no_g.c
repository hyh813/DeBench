/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* String constants from binary */
static const char asc_4390[] = "Testing Standard Library Functions\n";
static const char aLibL101D[] = "LibL101: strcpy/strcmp: %d\n";
static const char aLibL102D[] = "LibL102: strlen: %d\n";
static const char aLibL103D[] = "LibL103: memcpy/memcmp: %d\n";
static const char aLibL104D[] = "LibL104: printf: %d\n";
static const char aLibL105D[] = "LibL105: memcmp: %d\n";
static const char aLibL106D[] = "LibL106: printf: %d\n";
static const char aLibL107D[] = "LibL107: sscanf: %d\n";
static const char aLibL108D[] = "LibL108: fopen/fileno: %d\n";
static const char aLibL109D[] = "LibL109: fread/fwrite: %d\n";
static const char aLibL110D[] = "LibL110: malloc/free: %d\n";
static const char aLibL111D[] = "LibL111: memset: %d\n";
static const char aLibL112D[] = "LibL112: strchr/strstr: %d\n";

/* System call test strings */
static const char asc_41E9[] = "Testing System Calls\n";
static const char aSysL301D[] = "SysL301: syscall: %d\n";
static const char aSysL302D[] = "SysL302: stat: %d\n";
static const char aSysL303D[] = "SysL303: fork/exec: %d\n";
static const char aSysL304D[] = "SysL304: pipe: %d\n";
static const char aSysL305D[] = "SysL305: socket: %d\n";
static const char aSysL306D[] = "SysL306: shm: %d\n";
static const char aSysL307D[] = "SysL307: signal: %d\n";

/* Thread concurrency test strings */
static const char asc_42C8[] = "Testing Thread Concurrency\n";
static const char aThrL301D[] = "ThrL301: pthread_compute: %d\n";
static const char aThrL302D[] = "ThrL302: pthread_join: %d\n";
static const char aThrL303D[] = "ThrL303: mutex_lock: %d\n";
static const char aThrL304D[] = "ThrL304: cond_var: %d\n";
static const char aThrL305D[] = "ThrL305: atomic: %d\n";
static const char aThrL306D[] = "ThrL306: tls: %d\n";

/* Required standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdbool.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>

/* Auto-injected type definitions */
typedef unsigned long Elf32_Addr;
typedef unsigned short Elf32_Half;
typedef unsigned long Elf32_Word;

/* ELF dynamic structure */
typedef struct {
    Elf32_Word d_tag;
    union {
        Elf32_Word d_val;
        Elf32_Addr d_ptr;
    } d_un;
} Elf32_Dyn;

/* External symbols from CRT */
extern void (*_gmon_start__)(void);
extern void *_GLOBAL_OFFSET_TABLE_[32];

/* Thread-safe atomic counter */
static volatile int atomic_counter = 0;
static volatile int shared_counter = 0;
static volatile int signal_received = 0;
static volatile int signal_number = 0;
static volatile int ready = 0;
static volatile int data = 0;

/* pthread condition variable and mutex */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Forward declarations */
void param_fork_exec_part_0(const char *a1, int a2);
unsigned int *thread_compute(unsigned int *a1);
int thread_increment(int *a1);
int thread_sum(int *a1);
unsigned int *thread_tls_test(char *src);
unsigned int *consumer_thread(void);
int producer_thread(void);
int thread_atomic_increment(int *a1);
int thread_atomic_load_store(void);
Elf32_Dyn **signal_handler(int a1);
int param_fork_exec(const char *a1, int a2);
int param_pipe_communication(void);
int param_socket_create(void);
int param_shmget_shmat(void);
int param_signal_handling(void);
int param_pthread_create(int a1);
int param_pthread_join(void);
int param_mutex_lock(int a1, int arg);
int param_condition_variable(void);
int param_atomic_ops(int a1, ...);
int param_thread_local_storage(int a1);
int param_fread_fwrite(char *filename);
unsigned int test_standard_library_functions(void);
unsigned int test_system_calls(void);
unsigned int test_thread_concurrency(void);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/6/6_gcc_O3_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130()
{
 sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
void sub_1140()
{
 sub_1030();
}


/* Function: sub_1150 @ 0x1150 */
void sub_1150()
{
 sub_1030();
}


/* Function: sub_1160 @ 0x1160 */
void sub_1160()
{
 sub_1030();
}


/* Function: sub_1170 @ 0x1170 */
void sub_1170()
{
 sub_1030();
}


/* Function: sub_1180 @ 0x1180 */
void sub_1180()
{
 sub_1030();
}


/* Function: sub_1190 @ 0x1190 */
void sub_1190()
{
 sub_1030();
}


/* Function: sub_11A0 @ 0x11A0 */
void sub_11A0()
{
 sub_1030();
}


/* Function: sub_11B0 @ 0x11B0 */
void sub_11B0()
{
 sub_1030();
}


/* Function: sub_11C0 @ 0x11C0 */
void sub_11C0()
{
 sub_1030();
}


/* Function: sub_11D0 @ 0x11D0 */
void sub_11D0()
{
 sub_1030();
}


/* Function: sub_11E0 @ 0x11E0 */
void sub_11E0()
{
 sub_1030();
}


/* Function: sub_11F0 @ 0x11F0 */
void sub_11F0()
{
 sub_1030();
}


/* Function: sub_1200 @ 0x1200 */
void sub_1200()
{
 sub_1030();
}


/* Function: sub_1210 @ 0x1210 */
void sub_1210()
{
 sub_1030();
}


/* Function: sub_1220 @ 0x1220 */
void sub_1220()
{
 sub_1030();
}


/* Function: sub_1230 @ 0x1230 */
void sub_1230()
{
 sub_1030();
}


/* Function: sub_1240 @ 0x1240 */
void sub_1240()
{
 sub_1030();
}


/* Function: sub_1250 @ 0x1250 */
void sub_1250()
{
 sub_1030();
}


/* Function: sub_1260 @ 0x1260 */
void sub_1260()
{
 sub_1030();
}


/* Function: sub_1270 @ 0x1270 */
void sub_1270()
{
 sub_1030();
}


/* Function: sub_1280 @ 0x1280 */
void sub_1280()
{
 sub_1030();
}


/* Function: sub_1290 @ 0x1290 */
void sub_1290()
{
 sub_1030();
}


/* Function: sub_12A0 @ 0x12A0 */
void sub_12A0()
{
 sub_1030();
}


/* Function: sub_12B0 @ 0x12B0 */
void sub_12B0()
{
 sub_1030();
}


/* Function: sub_12C0 @ 0x12C0 */
void sub_12C0()
{
 sub_1030();
}


/* Function: sub_12D0 @ 0x12D0 */
void sub_12D0()
{
 sub_1030();
}


/* Function: sub_12E0 @ 0x12E0 */
void sub_12E0()
{
 sub_1030();
}


/* Function: sub_12F0 @ 0x12F0 */
void sub_12F0()
{
 sub_1030();
}


/* Function: sub_1300 @ 0x1300 */
void sub_1300()
{
 sub_1030();
}


/* Function: sub_1310 @ 0x1310 */
void sub_1310()
{
 sub_1030();
}


/* Function: sub_1320 @ 0x1320 */
void sub_1320()
{
 sub_1030();
}


/* Function: sub_1330 @ 0x1330 */
void sub_1330()
{
 sub_1030();
}


/* Function: sub_1340 @ 0x1340 */
void sub_1340()
{
 sub_1030();
}


/* Function: sub_1350 @ 0x1350 */
void sub_1350()
{
 sub_1030();
}


/* Function: sub_1360 @ 0x1360 */
void sub_1360()
{
 sub_1030();
}


/* Function: sub_1370 @ 0x1370 */
void sub_1370()
{
 sub_1030();
}


/* Function: sub_1380 @ 0x1380 */
void sub_1380()
{
 sub_1030();
}


/* Function: sub_1390 @ 0x1390 */
void sub_1390()
{
 sub_1030();
}


/* Function: sub_13A0 @ 0x13A0 */
void sub_13A0()
{
 sub_1030();
}


/* Function: sub_13B0 @ 0x13B0 */
void sub_13B0()
{
 sub_1030();
}


/* Function: sub_13C0 @ 0x13C0 */
void sub_13C0()
{
 sub_1030();
}


/* Function: sub_13D0 @ 0x13D0 */
void sub_13D0()
{
 sub_1030();
}


/* Function: sub_13E0 @ 0x13E0 */
int sub_13E0(int a1)
{
 return (*(int (**)(void))(a1 + 248))();
}


/* Function: main @ 0x1790 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_17DC @ 0x17DC */
void sub_17DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x17E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1919 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x191D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: signal_handler @ 0x1930 */
Elf32_Dyn ** signal_handler(int a1)
{
 Elf32_Dyn **result; // eax

 result = &_GLOBAL_OFFSET_TABLE_;
 signal_received = 1;
 signal_number = a1;
 return result;
}


/* Function: thread_sum @ 0x1960 */
int thread_sum(int *a1)
{
 int v1; // eax
 int v2; // ecx
 int v3; // ecx
 int v4; // edx

 v1 = *a1;
 v2 = a1[1];
 a1[2] = 0;
 if ( v1 <= v2 )
 {
 v3 = v2 + 1;
 v4 = 0;
 do
 v4 += v1++;
 while ( v3 != v1 );
 a1[2] = v4;
 }
 return 0;
}


/* Function: thread_compute @ 0x1990 */
unsigned int * thread_compute(unsigned int *a1)
{
 int v1; // esi
 unsigned int *result; // eax

 v1 = *a1 * *a1;
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: thread_increment @ 0x19C0 */
int thread_increment(int *a1)
{
 int v1; // edi
 int v2; // ebp

 v1 = *a1;
 if ( *a1 > 0 )
 {
 v2 = 0;
 do
 {
 ++v2;
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 }
 while ( v1 != v2 );
 }
 return 0;
}


/* Function: consumer_thread @ 0x1A30 */
unsigned int *consumer_thread()
{
 int v0; // edi
 unsigned int *result; // eax

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v0 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v0;
 return result;
}


/* Function: producer_thread @ 0x1AB0 */
int producer_thread()
{
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: thread_atomic_increment @ 0x1B10 */
int thread_atomic_increment(int *a1)
{
 int v1; // esi
 signed int v2; // edx

 v1 = *a1;
 if ( *a1 > 0 )
 {
 v2 = 0;
 do
 {
 __sync_add_and_fetch(&atomic_counter, 1);
 __sync_val_compare_and_swap(&atomic_counter, v2, v2 + 1000);
 ++v2;
 }
 while ( v1 != v2 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x1B60 */
int thread_atomic_load_store()
{
 __sync_fetch_and_add(&atomic_counter, 100);
 return 0;
}


/* Function: thread_tls_test @ 0x1B90 */
unsigned int * thread_tls_test(char *src)
{
 char *v1; // eax
 unsigned int v2; // edi
 unsigned int *result; // eax

 v1 = (char *)(__readgsdword(0) - 32);
 v2 = __readgsdword(0xFFFFFFDC);
 __writegsdword(0xFFFFFFDC, v2 + 50);
 strncpy(v1, src, 0x1Fu);
 result = malloc(8u);
 *result = v2;
 result[1] = v2 + 50;
 return result;
}


/* Function: param_fork_exec.part.0 @ 0x1BF0 */
void param_fork_exec_part_0(const char *a1, int a2)
{
 execl(a1, a1, a2, 0);
 _exit(127);
}


/* Function: param_thread_local_storage.constprop.0 @ 0x1C20 */
int param_thread_local_storage_constprop_0()
{
 void **v0; // eax
 void **v1; // esi
 int i; // ebp
 void *v3; // eax
 pthread_t *v4; // edi
 int j; // ebp
 int v6; // ebp
 int v7; // esi
 int v8; // edi
 void **v10; // edi
 int v11; // ebp
 void *size; // [esp+0h] [ebp-4Ch]
 void *sizea; // [esp+0h] [ebp-4Ch]
 int v14; // [esp+4h] [ebp-48h]
 void *(*start_routine)(void *); // [esp+14h] [ebp-38h]
 pthread_t *newthread; // [esp+18h] [ebp-34h]
 void *ptr[9]; // [esp+28h] [ebp-24h] BYREF

 ptr[1] = (void *)__readgsdword(0x14u);
 newthread = (pthread_t *)malloc(0x10u);
 v0 = (void **)malloc(0x10u);
 if ( !newthread )
 return -1;
 v1 = v0;
 if ( !v0 )
 return -1;
 for ( i = 0; i != 4; ++i )
 {
 v3 = malloc(0x10u);
 v1[i] = v3;
 v14 = i;
 __snprintf_chk(v3, 16, 1, 16, "Thread-%d", v14);
 }
 v4 = newthread;
 for ( j = 0; j != 4; ++j )
 {
 if ( pthread_create(v4, 0, (void *(*)(void *))thread_tls_test, v1[j]) )
 {
 v10 = v1;
 v11 = (int)&v1[j + 1];
 do
 {
 sizea = *v10++;
 free(sizea);
 }
 while ( (void **)v11 != v10 );
 free(v1);
 free(newthread);
 return -2;
 }
 ++v4;
 }
 v6 = 0;
 start_routine = (void *(*)(void *))v1;
 v7 = 0;
 v8 = 0;
 do
 {
 pthread_join(newthread[v7], ptr);
 v8 += *(unsigned int *)ptr[0];
 v6 += *((unsigned int *)ptr[0] + 1);
 free(ptr[0]);
 size = (void *)*((unsigned int *)start_routine + v7++);
 free(size);
 }
 while ( v7 != 4 );
 free(start_routine);
 free(newthread);
 if ( v8 == 400 && v6 == 600 )
 return 42;
 else
 return -3;
}


/* Function: param_atomic_ops.constprop.0 @ 0x1DE0 */
int param_atomic_ops_constprop_0()
{
	pthread_t *v0; // eax
	pthread_t *v1; // edi
	int v2; // esi
	int v3; // edi
	int result; // eax
	pthread_t v5; // [esp-14h] [ebp-4Ch]
	pthread_t *v6; // [esp+4h] [ebp-34h]
	pthread_t *ptr; // [esp+8h] [ebp-30h]
	char *arg; // [esp+10h] [ebp-28h] BYREF
	pthread_t newthread[9]; // [esp+14h] [ebp-24h] BYREF

	(void)__readgsdword(0x14u);
	arg = "GNU";
	v0 = (pthread_t *)malloc(0x10u);
	ptr = v0;
	if ( !v0 )
		return -1;
	__sync_fetch_and_add(&atomic_counter, 100);
	v1 = v0;
	v6 = v0 + 4;
	v2 = 0;
	do
	{
		v2 = pthread_create(v1, 0, (void *(*)(void *))thread_atomic_increment, &arg);
		if ( v2 )
		{
			free(ptr);
			return -2;
		}
		++v1;
	}
	while ( v1 != v6 );
	if ( !pthread_create(newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
		pthread_join(newthread[0], 0);
	v2 = 0;
	do
	{
		v5 = ptr[v2++];
		pthread_join(v5, 0);
	}
	while ( v2 != 4 );
	v3 = atomic_counter;
	free(ptr);
	result = 42;
	if ( v3 <= 0 )
		return -3;
	return result;
}


/* Function: param_mutex_lock.constprop.0 @ 0x1F10 */
int param_mutex_lock_constprop_0()
{
 pthread_t *v0; // eax
 pthread_t *v1; // esi
 int v2; // edx
 int result; // eax
 pthread_t *v4; // [esp+0h] [ebp-34h]
 int v5; // [esp+0h] [ebp-34h]
 pthread_t *ptr; // [esp+4h] [ebp-30h]
 unsigned int arg[9]; // [esp+10h] [ebp-24h] BYREF

 arg[1] = __readgsdword(0x14u);
 arg[0] = 1000;
 v0 = (pthread_t *)malloc(0x10u);
 ptr = v0;
 if ( !v0 )
 return -1;
 v1 = v0;
 shared_counter = 0;
 v4 = v0 + 4;
 do
 {
 v2 = pthread_create(v1, 0, (void *(*)(void *))thread_increment, arg);
 if ( v2 )
 {
 free(ptr);
 return -2;
 }
 ++v1;
 }
 while ( v4 != v1 );
 do
 {
 v5 = v2;
 pthread_join(ptr[v2], 0);
 v2 = v5 + 1;
 }
 while ( v5 != 3 );
 free(ptr);
 result = 42;
 if ( 4 * arg[0] != shared_counter )
 return -3;
 return result;
}


/* Function: param_strcpy @ 0x2020 */
int param_strcpy(int a1, int a2)
{
 return stpcpy(a1, a2) - a1;
}


/* Function: call_strcpy @ 0x2050 */
int call_strcpy()
{
 return 8;
}


/* Function: param_strcmp @ 0x2060 */
int param_strcmp(char *s1, char *s2)
{
 int v2; // edx
 int result; // eax

 v2 = strcmp(s1, s2);
 result = -(v2 != 0);
 if ( v2 > 0 )
 return 1;
 return result;
}


/* Function: call_strcmp @ 0x20A0 */
int call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x20B0 */
size_t param_strlen(char *s)
{
 return strlen(s);
}


/* Function: call_strlen @ 0x20E0 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x20F0 */
size_t param_memcpy(void *dest, void *src, size_t n)
{
 memcpy(dest, src, n);
 return n;
}


/* Function: call_memcpy @ 0x2120 */
int call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x2130 */
int param_memcmp(void *s1, void *s2, size_t n)
{
 int v3; // edx
 int result; // eax

 v3 = memcmp(s1, s2, n);
 result = -(v3 != 0);
 if ( v3 > 0 )
 return 1;
 return result;
}


/* Function: call_memcmp @ 0x2170 */
long long call_memcmp()
{
 int v0; // eax
 int v1; // esi
 int v2; // edx
 int v3; // eax
 long long result; // rax
 unsigned int s1[3]; // [esp+0h] [ebp-34h] BYREF
 unsigned int s2[3]; // [esp+Ch] [ebp-28h] BYREF
 unsigned int v7[3]; // [esp+18h] [ebp-1Ch] BYREF
 unsigned int v8; // [esp+24h] [ebp-10h]

 v8 = __readgsdword(0x14u);
 s1[0] = 1;
 s1[1] = 2;
 s1[2] = 3;
 s2[0] = 1;
 s2[1] = 2;
 s2[2] = 4;
 v7[0] = 1;
 v7[1] = 2;
 v7[2] = 3;
 v0 = memcmp(s1, s2, 0xCu);
 v1 = -(v0 != 0);
 if ( v0 > 0 )
 v1 = 1;
 v2 = memcmp(s1, v7, 0xCu);
 v3 = -(v2 != 0);
 if ( v2 > 0 )
 v3 = 1;
 LODWORD(result) = v1 + v3;
 HIDWORD(result) = v8 - __readgsdword(0x14u);
 return result;
}


/* Function: param_printf @ 0x2250 */
int param_printf(int a1, const char *a2)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x2280 */
int call_printf()
{
 return __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x22B0 */
int param_scanf(int a1)
{
 int v2; // [esp+0h] [ebp-18h] BYREF
 unsigned int v3[5]; // [esp+4h] [ebp-14h] BYREF

 v3[1] = __readgsdword(0x14u);
 if ( __isoc99_sscanf(a1, "%d,%d", &v2, v3) == 2 )
 return v2 + v3[0];
 else
 return -1;
}


/* Function: call_scanf @ 0x2320 */
int call_scanf()
{
 int v1; // [esp+0h] [ebp-18h] BYREF
 int v2; // [esp+4h] [ebp-14h] BYREF
 unsigned int v3; // [esp+8h] [ebp-10h]

 v3 = __readgsdword(0x14u);
 if ( __isoc99_sscanf("123,456", "%d,%d", &v1, &v2) == 2 )
 return v1 + v2;
 else
 return -1;
}


/* Function: param_fopen_fclose @ 0x2390 */
int param_fopen_fclose(char *filename)
{
 FILE *stream; // eax
 FILE *v2; // esi
 int v3; // edi

 stream = fopen(filename, "r");
 if ( !stream )
 return -1;
 v2 = stream;
 v3 = fileno(stream);
 fclose(v2);
 return v3;
}


/* Function: call_fopen_fclose @ 0x23E0 */
int call_fopen_fclose()
{
 FILE *stream; // eax
 FILE *v1; // esi
 int v2; // edi
 int result; // eax

 stream = fopen("/etc/passwd", "r");
 if ( !stream )
 return -1;
 v1 = stream;
 v2 = fileno(stream);
 fclose(v1);
 result = 42;
 if ( v2 < 0 )
 return -1;
 return result;
}


/* Function: param_fread_fwrite @ 0x2440 */
int param_fread_fwrite(char *filename)
{
 FILE *v1; // eax
 FILE *v2; // esi
 size_t v3; // eax
 size_t v5; // [esp+18h] [ebp-54h]
 char ptr[32]; // [esp+2Ch] [ebp-40h] BYREF
 unsigned int v7; // [esp+4Ch] [ebp-20h]

 v7 = __readgsdword(0x14u);
 v1 = fopen(filename, "w+");
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v2);
 v3 = fread(ptr, 1u, 0x12u, v2);
 ptr[v3] = 0;
 v5 = v3;
 fclose(v2);
 unlink(filename);
 if ( v5 == 18 )
 return strcmp(ptr, "BinBench Test Data") == 0 ? 42 : -3;
 else
 return -3;
 }
 else
 {
 fclose(v2);
 return -2;
 }
}


/* Function: call_fread_fwrite @ 0x2540 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2570 */
int param_malloc_free(int a1)
{
 unsigned int *v1; // eax
 unsigned int *v2; // ebp
 unsigned int *v3; // edx
 int v4; // eax
 int v5; // esi

 v1 = malloc(4 * a1);
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( a1 )
 {
 v3 = v1;
 v4 = 0;
 do
 {
 *v3 = v4;
 v4 += 10;
 ++v3;
 }
 while ( 10 * a1 != v4 );
 }
 v5 = v2[a1 - 1] + *v2;
 free(v2);
 return v5;
}


/* Function: call_malloc_free @ 0x25E0 */
int call_malloc_free()
{
 void *v0; // eax

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 free(v0);
 return 90;
}


/* Function: param_memset @ 0x2620 */
int param_memset(char *s, size_t n)
{
 char *v2; // eax
 int v3; // edx
 int v4; // ecx

 memset(s, 0, n);
 if ( !n )
 return 0;
 v2 = s;
 v3 = 0;
 do
 {
 v4 = (unsigned char)*v2++;
 v3 += v4;
 }
 while ( &s[n] != v2 );
 return v3;
}


/* Function: call_memset @ 0x2680 */
int call_memset()
{
 return 0;
}


/* Function: param_strchr_strstr @ 0x2690 */
int param_strchr_strstr(char *s, char a2, char *needle)
{
 char *v3; // eax
 int v4; // esi
 char *v5; // eax
 int v6; // edx
 bool v7; // zf
 int v8; // eax

 v3 = strchr(s, a2);
 v4 = v3 - s;
 if ( !v3 )
 v4 = -1;
 v5 = strstr(s, needle);
 v6 = v5 - s;
 v7 = v5 == 0;
 v8 = -1;
 if ( !v7 )
 v8 = v6;
 return v4 + v8;
}


/* Function: call_strchr_strstr @ 0x26F0 */
int call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x2700 */
unsigned int test_standard_library_functions()
{
 int v0; // eax
 int v1; // esi
 int v2; // edx
 int v3; // eax
 int v4; // eax
 int v5; // eax
 FILE *stream; // eax
 FILE *v7; // esi
 int v8; // edi
 int v9; // eax
 int v10; // eax
 void *v11; // eax
 int v12; // eax
 int v14; // [esp+10h] [ebp-3Ch] BYREF
 int v15; // [esp+14h] [ebp-38h] BYREF
 unsigned int s1[3]; // [esp+18h] [ebp-34h] BYREF
 unsigned int s2[3]; // [esp+24h] [ebp-28h] BYREF
 unsigned int v18[3]; // [esp+30h] [ebp-1Ch] BYREF
 unsigned int v19; // [esp+3Ch] [ebp-10h]

 v19 = __readgsdword(0x14u);
 puts(asc_4390);
 __printf_chk(1, aLibL101D, 8);
 __printf_chk(1, aLibL102D, 0);
 __printf_chk(1, aLibL103D, 12);
 __printf_chk(1, aLibL104D, 90);
 s1[0] = 1;
 s1[1] = 2;
 s1[2] = 3;
 s2[0] = 1;
 s2[1] = 2;
 s2[2] = 4;
 v18[0] = 1;
 v18[1] = 2;
 v18[2] = 3;
 v0 = memcmp(s1, s2, 0xCu);
 v1 = -(v0 != 0);
 if ( v0 > 0 )
 v1 = 1;
 v2 = memcmp(s1, v18, 0xCu);
 v3 = -(v2 != 0);
 if ( v2 > 0 )
 v3 = 1;
 __printf_chk(1, aLibL105D, v1 + v3);
 v4 = __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
 __printf_chk(1, aLibL106D, v4);
 if ( __isoc99_sscanf("123,456", "%d,%d", &v14, &v15) == 2 )
 v5 = v14 + v15;
 else
 v5 = -1;
 __printf_chk(1, aLibL107D, v5);
 stream = fopen("/etc/passwd", "r");
 v7 = stream;
 if ( !stream || (v8 = fileno(stream), fclose(v7), v9 = 42, v8 < 0) )
 v9 = -1;
 __printf_chk(1, aLibL108D, v9);
 v10 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1, aLibL109D, v10);
 v11 = malloc(0x28u);
 if ( v11 )
 {
 free(v11);
 v12 = 90;
 }
 else
 {
 v12 = -1;
 }
 __printf_chk(1, aLibL110D, v12);
 __printf_chk(1, aLibL111D, 0);
 __printf_chk(1, aLibL112D, 15);
 return v19 - __readgsdword(0x14u);
}


/* Function: param_linux_syscall @ 0x29A0 */
int param_linux_syscall(int a1)
{
 int v1; // eax
 int v2; // esi

 v1 = syscall(5, a1, 0);
 if ( v1 < 0 )
 return -*__errno_location();
 v2 = v1;
 syscall(6, v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x2A00 */
int call_linux_syscall()
{
 int v0; // eax
 int result; // eax
 bool v2; // cc

 v0 = syscall(5, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 v2 = *__errno_location() <= 0;
 result = 42;
 if ( !v2 )
 return -1;
 }
 else
 {
 syscall(6, v0);
 return 42;
 }
 return result;
}


/* Function: param_win32_api @ 0x2A70 */
int param_win32_api(char *file)
{
 int result; // eax
 struct stat buf; // [esp+0h] [ebp-68h] BYREF
 unsigned int v3; // [esp+58h] [ebp-10h]

 v3 = __readgsdword(0x14u);
 if ( stat(file, &buf) < 0 )
 return -1;
 result = 42;
 if ( buf.st_size <= 0 )
 return -2;
 return result;
}


/* Function: call_win32_api @ 0x2AE0 */
int call_win32_api()
{
 int result; // eax
 struct stat buf; // [esp+0h] [ebp-68h] BYREF
 unsigned int v2; // [esp+58h] [ebp-10h]

 v2 = __readgsdword(0x14u);
 if ( stat("/etc/passwd", &buf) < 0 )
 return -1;
 result = 42;
 if ( buf.st_size <= 0 )
 return -2;
 return result;
}


/* Function: param_fork_exec @ 0x2B50 */
int param_fork_exec(const char *a1, int a2)
{
 int v2; // eax
 __pid_t v3; // edx
 int result; // eax
 int stat_loc[5]; // [esp+0h] [ebp-14h] BYREF

 stat_loc[1] = __readgsdword(0x14u);
 v2 = fork();
 if ( v2 < 0 )
 return -1;
 if ( !v2 )
 param_fork_exec_part_0(a1, a2);
 v3 = waitpid(v2, stat_loc, 0);
 result = -2;
 if ( v3 >= 0 )
 {
 result = BYTE1(stat_loc[0]);
 if ( (stat_loc[0] & 0x7F) != 0 )
 return -3;
 }
 return result;
}


/* Function: call_fork_exec @ 0x2BE0 */
int call_fork_exec()
{
 int v0; // eax
 int stat_loc[5]; // [esp+0h] [ebp-14h] BYREF

 stat_loc[1] = __readgsdword(0x14u);
 v0 = fork();
 if ( v0 < 0 )
 return -1;
 if ( !v0 )
 param_fork_exec_part_0("/bin/true", 0);
 if ( waitpid(v0, stat_loc, 0) < 0 || (stat_loc[0] & 0x7F) != 0 || BYTE1(stat_loc[0]) )
 return -1;
 else
 return 42;
}


/* Function: param_pipe_communication @ 0x2C60 */
int param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // eax
 int v2; // esi
 int result; // eax
 int pipedes[2]; // [esp+14h] [ebp-38h] BYREF
 unsigned char buf[32]; // [esp+1Ch] [ebp-30h] BYREF
 unsigned int v6; // [esp+3Ch] [ebp-10h]

 v6 = __readgsdword(0x14u);
 if ( pipe(pipedes) < 0 )
 return -1;
 v0 = fork();
 if ( v0 < 0 )
 return -2;
 if ( !v0 )
 {
 close(pipedes[0]);
 write(pipedes[1], "HelloPipe", 9u);
 close(pipedes[1]);
 _exit(0);
 }
 close(pipedes[1]);
 v1 = read(pipedes[0], buf, 0x1Fu);
 buf[v1] = 0;
 v2 = v1;
 close(pipedes[0]);
 wait(0);
 result = 42;
 if ( v2 <= 0 )
 return -3;
 return result;
}


/* Function: call_pipe_communication @ 0x2D60 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x2D70 */
int param_socket_create()
{
 int v0; // eax
 int v1; // esi
 int optval; // [esp+0h] [ebp-24h] BYREF
 struct sockaddr addr; // [esp+4h] [ebp-20h] BYREF
 unsigned int v5; // [esp+14h] [ebp-10h]

 v5 = __readgsdword(0x14u);
 v0 = socket(2, 1, 0);
 if ( v0 < 0 )
 return -1;
 optval = 1;
 v1 = v0;
 if ( setsockopt(v0, 1, 2, &optval, 4u) < 0 )
 {
 close(v1);
 return -2;
 }
 else
 {
 memset(&addr.sa_data[2], 0, 12);
 *(unsigned int *)&addr.sa_family = 2;
 if ( bind(v1, &addr, 0x10u) < 0 )
 {
 close(v1);
 return -3;
 }
 else if ( listen(v1, 5) < 0 )
 {
 close(v1);
 return -4;
 }
 else
 {
 close(v1);
 return 42;
 }
 }
}


/* Function: call_socket_create @ 0x2EA0 */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x2EB0 */
int param_shmget_shmat()
{
 int v0; // eax
 key_t v1; // eax
 int v2; // eax
 int v3; // esi
 char *v4; // eax

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return -1;
 close(v0);
 v1 = ftok("/tmp/binbench_shm", 42);
 if ( v1 < 0 )
 return -1;
 v2 = shmget(v1, 4096, 950);
 v3 = v2;
 if ( v2 < 0 )
 return -2;
 v4 = (char *)shmat(v2, 0, 0);
 if ( v4 == (char *)-1 )
 return -3;
 strcpy(v4, "SharedMemory");
 shmdt(v4);
 shmctl(v3, 0, 0);
 return 12;
}


/* Function: call_shmget_shmat @ 0x2F90 */
int call_shmget_shmat()
{
 bool v0; // cc
 int result; // eax

 v0 = param_shmget_shmat() <= 0;
 result = 42;
 if ( v0 )
 return -1;
 return result;
}


/* Function: param_signal_handling @ 0x2FB0 */
int param_signal_handling()
{
 int v0; // esi
 int v1; // esi

 if ( signal(10, (__sighandler_t)signal_handler) == (__sighandler_t)-1 )
 return -1;
 if ( signal(14, (__sighandler_t)signal_handler) == (__sighandler_t)-1 )
 return -2;
 signal_received = 0;
 raise(10);
 if ( !signal_received )
 {
 v0 = 1000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 break;
 --v0;
 }
 while ( v0 );
 }
 if ( !signal_received )
 return -3;
 if ( signal_number != 10 )
 return -4;
 signal_received = 0;
 alarm(1u);
 if ( !signal_received )
 {
 v1 = 2000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 break;
 --v1;
 }
 while ( v1 );
 }
 if ( !signal_received || signal_number != 14 )
 return -5;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: call_signal_handling @ 0x3110 */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x3120 */
unsigned int test_system_calls()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 bool v7; // cc
 int v8; // eax
 int v9; // eax
 int v11; // esi
 struct stat buf; // [esp+0h] [ebp-68h] BYREF
 unsigned int v13; // [esp+58h] [ebp-10h]

 v13 = __readgsdword(0x14u);
 puts(asc_41E9);
 v0 = syscall(5, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 v11 = *__errno_location();
 v1 = 42;
 if ( v11 > 0 )
 v1 = -1;
 }
 else
 {
 syscall(6, v0);
 v1 = 42;
 }
 __printf_chk(1, aSysL301D, v1);
 if ( stat("/etc/passwd", &buf) < 0 )
 {
 v2 = -1;
 }
 else
 {
 v2 = 42;
 if ( buf.st_size <= 0 )
 v2 = -2;
 }
 __printf_chk(1, aSysL302D, v2);
 v3 = fork();
 if ( v3 < 0 )
 goto LABEL_10;
 if ( !v3 )
 param_fork_exec_part_0("/bin/true", 0);
 if ( waitpid(v3, (int *)&buf, 0) < 0 || (buf.st_dev & 0x7F) != 0 || BYTE1(buf.st_dev) )
LABEL_10:
 v4 = -1;
 else
 v4 = 42;
 __printf_chk(1, aSysL303D, v4);
 v5 = param_pipe_communication();
 __printf_chk(1, aSysL304D, v5);
 v6 = param_socket_create();
 __printf_chk(1, aSysL305D, v6);
 v7 = param_shmget_shmat() <= 0;
 v8 = 42;
 if ( v7 )
 v8 = -1;
 __printf_chk(1, aSysL306D, v8);
 v9 = param_signal_handling();
 __printf_chk(1, aSysL307D, v9);
 return v13 - __readgsdword(0x14u);
}


/* Function: param_pthread_create @ 0x32F0 */
int param_pthread_create(int a1)
{
 int v1; // esi
 pthread_t newthread; // [esp+10h] [ebp-1Ch] BYREF
 int arg; // [esp+14h] [ebp-18h] BYREF
 void *thread_return[5]; // [esp+18h] [ebp-14h] BYREF

 thread_return[1] = (void *)__readgsdword(0x14u);
 arg = a1;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 return -1;
 pthread_join(newthread, thread_return);
 v1 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 return v1;
}


/* Function: call_pthread_create @ 0x3380 */
int call_pthread_create()
{
 int v0; // esi
 pthread_t newthread; // [esp+10h] [ebp-1Ch] BYREF
 int arg; // [esp+14h] [ebp-18h] BYREF
 void *thread_return[5]; // [esp+18h] [ebp-14h] BYREF

 thread_return[1] = (void *)__readgsdword(0x14u);
 arg = 7;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 return -1;
 pthread_join(newthread, thread_return);
 v0 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 return v0;
}


/* Function: param_pthread_join @ 0x3410 */
int param_pthread_join()
{
 unsigned int *v0; // edi
 pthread_t *v1; // ebp
 pthread_t *v2; // esi
 unsigned int *v3; // edi
 int v4; // esi
 pthread_t newthread[3]; // [esp+18h] [ebp-50h] BYREF
 unsigned int arg[9]; // [esp+24h] [ebp-44h] BYREF
 unsigned int v8[8]; // [esp+48h] [ebp-20h] BYREF

 v8[0] = __readgsdword(0x14u);
 v0 = arg;
 arg[0] = 1;
 v1 = newthread;
 arg[1] = 10;
 v2 = newthread;
 arg[2] = 0;
 arg[3] = 11;
 arg[4] = 20;
 arg[5] = 0;
 arg[6] = 21;
 arg[7] = 30;
 arg[8] = 0;
 do
 {
 if ( pthread_create(v2, 0, (void *(*)(void *))thread_sum, v0) )
 return -1;
 ++v2;
 v0 += 3;
 }
 while ( v0 != v8 );
 v3 = arg;
 v4 = 0;
 while ( !pthread_join(*v1, 0) )
 {
 v4 += v3[2];
 ++v1;
 v3 += 3;
 if ( v3 == v8 )
 return v4;
 }
 return -2;
}


/* Function: call_pthread_join @ 0x3520 */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x3530 */
int param_mutex_lock(int a1, int arg)
{
 pthread_t *v2; // eax
 pthread_t *v3; // edi
 int v4; // esi
 int i; // eax
 int result; // eax
 int v7; // edi
 int v8; // eax
 pthread_t *ptr; // [esp+4h] [ebp-20h]

 v2 = (pthread_t *)malloc(4 * a1);
 ptr = v2;
 if ( !v2 )
 return -1;
 shared_counter = 0;
 if ( a1 > 0 )
 {
 v3 = v2;
 v4 = 0;
 for ( i = pthread_create(v2, 0, (void *(*)(void *))thread_increment, &arg);
 ;
 i = pthread_create(v3, 0, (void *(*)(void *))thread_increment, &arg) )
 {
 if ( i )
 {
 free(ptr);
 return -2;
 }
 ++v3;
 if ( a1 == v4 + 1 )
 break;
 ++v4;
 }
 v7 = 0;
 do
 {
 pthread_join(ptr[v7], 0);
 v8 = v7++;
 }
 while ( v4 != v8 );
 }
 free(ptr);
 result = 42;
 if ( shared_counter != arg * a1 )
 return -3;
 return result;
}


/* Function: call_mutex_lock @ 0x3640 */
int call_mutex_lock()
{
 return param_mutex_lock_constprop_0();
}


/* Function: param_condition_variable @ 0x3650 */
int param_condition_variable()
{
 int v0; // esi
 pthread_t th; // [esp+10h] [ebp-1Ch] BYREF
 pthread_t newthread; // [esp+14h] [ebp-18h] BYREF
 void *thread_return[5]; // [esp+18h] [ebp-14h] BYREF

 thread_return[1] = (void *)__readgsdword(0x14u);
 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 return -1;
 if ( pthread_create(&th, 0, (void *(*)(void *))producer_thread, 0) )
 {
 v0 = -2;
 pthread_cancel(newthread);
 }
 else
 {
 pthread_join(newthread, thread_return);
 pthread_join(th, 0);
 v0 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 }
 return v0;
}


/* Function: call_condition_variable @ 0x3730 */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x3740 */
int param_atomic_ops(int a1, ...)
{
 pthread_t *v1; // eax
 pthread_t *v2; // esi
 int v3; // ebp
 int i; // eax
 int result; // eax
 int v6; // esi
 int v7; // esi
 pthread_t v8; // [esp-18h] [ebp-4Ch]
 pthread_t *ptr; // [esp+4h] [ebp-30h]
 pthread_t newthread[9]; // [esp+10h] [ebp-24h] BYREF
 va_list va; // [esp+3Ch] [ebp+8h] BYREF

 va_start(va, a1);
	newthread[1] = (pthread_t)__readgsdword(0x14u);
	v1 = (pthread_t *)malloc(4 * a1);
	ptr = v1;
	if ( !v1 )
		return -1;
	__sync_fetch_and_add(&atomic_counter, 0);
	if ( a1 <= 0 )
 {
 if ( !pthread_create(newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread[0], 0);
 }
 else
 {
 v2 = v1;
 v3 = 0;
 for ( i = pthread_create(v1, 0, (void *(*)(void *))thread_atomic_increment, va);
 ;
 i = pthread_create(v2, 0, (void *(*)(void *))thread_atomic_increment, va) )
 {
 if ( i )
 {
 free(ptr);
 return -2;
 }
 ++v3;
 ++v2;
 if ( a1 == v3 )
 break;
 }
 v6 = 0;
 if ( !pthread_create(newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread[0], 0);
 do
 {
 v8 = ptr[v6++];
 pthread_join(v8, 0);
 }
 while ( a1 > v6 );
 }
 v7 = atomic_counter;
 free(ptr);
 result = 42;
 if ( v7 <= 0 )
 return -3;
 return result;
}


/* Function: call_atomic_ops @ 0x38D0 */
int call_atomic_ops()
{
 return param_atomic_ops_constprop_0();
}


/* Function: param_thread_local_storage @ 0x38E0 */
int param_thread_local_storage(int a1)
{
 void **v1; // eax
 void **v2; // ebp
 void **i; // esi
 void *v4; // eax
 void **v5; // edx
 pthread_t *v6; // ebp
 void **v7; // edi
 int j; // eax
 int v9; // esi
 void **v10; // ebp
 void *(*v12)(void *); // edi
 int v13; // ebp
 void *size; // [esp+0h] [ebp-5Ch]
 void *sizea; // [esp+0h] [ebp-5Ch]
 void **ptr; // [esp+1Ch] [ebp-40h]
 void *(*start_routine)(void *); // [esp+20h] [ebp-3Ch]
 void **thread_return; // [esp+24h] [ebp-38h]
 pthread_t *newthread; // [esp+28h] [ebp-34h]
 void *v20[9]; // [esp+38h] [ebp-24h] BYREF

 v20[1] = (void *)__readgsdword(0x14u);
 newthread = (pthread_t *)malloc(4 * a1);
 v1 = (void **)malloc(4 * a1);
 ptr = v1;
 if ( !newthread )
 return -1;
 v2 = v1;
 if ( !v1 )
 return -1;
 if ( a1 <= 0 )
 {
 v13 = 0;
 v9 = 0;
 }
 else
 {
 for ( i = 0; i != (void **)a1; i = (void **)((char *)i + 1) )
 {
 v4 = malloc(0x10u);
 v2[(unsigned int)i] = v4;
 __snprintf_chk(v4, 16, 1, 16, "Thread-%d", i);
 v5 = i;
 }
 thread_return = v5;
 v6 = newthread;
 v7 = 0;
 for ( j = pthread_create(newthread, 0, (void *(*)(void *))thread_tls_test, *ptr);
 ;
 j = pthread_create(v6, 0, (void *(*)(void *))thread_tls_test, ptr[(unsigned int)v7]) )
 {
 v9 = j;
 if ( j )
 {
 v10 = ptr;
 do
 {
 size = *v10++;
 free(size);
 }
 while ( &ptr[(unsigned int)v7 + 1] != v10 );
 free(ptr);
 free(newthread);
 return -2;
 }
 ++v6;
 if ( thread_return == v7 )
 break;
 v7 = (void **)((char *)v7 + 1);
 }
 v12 = 0;
 v13 = 0;
 do
 {
 start_routine = v12;
 pthread_join(newthread[(unsigned int)v12], v20);
 v9 += *(unsigned int *)v20[0];
 v13 += *((unsigned int *)v20[0] + 1);
 free(v20[0]);
 sizea = ptr[(unsigned int)v12];
 v12 = (void *(*)(void *))((char *)v12 + 1);
 free(sizea);
 }
 while ( thread_return != (void **)start_routine );
 }
 free(ptr);
 free(newthread);
 if ( 100 * a1 == v9 && 150 * a1 == v13 )
 return 42;
 else
 return -3;
}


/* Function: call_thread_local_storage @ 0x3AE0 */
int call_thread_local_storage()
{
 return param_thread_local_storage_constprop_0();
}


/* Function: test_thread_concurrency @ 0x3AF0 */
unsigned int test_thread_concurrency()
{
 int v0; // esi
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 pthread_t newthread; // [esp+10h] [ebp-1Ch] BYREF
 int arg; // [esp+14h] [ebp-18h] BYREF
 void *thread_return; // [esp+18h] [ebp-14h] BYREF
 unsigned int v10; // [esp+1Ch] [ebp-10h]

 v10 = __readgsdword(0x14u);
 puts(asc_42C8);
 arg = 7;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 v0 = -1;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 __printf_chk(1, aThrL301D, v0);
 v1 = param_pthread_join();
 __printf_chk(1, aThrL302D, v1);
 v2 = param_mutex_lock_constprop_0();
 __printf_chk(1, aThrL303D, v2);
 v3 = param_condition_variable();
 __printf_chk(1, aThrL304D, v3);
 v4 = param_atomic_ops_constprop_0();
 __printf_chk(1, aThrL305D, v4);
 v5 = param_thread_local_storage_constprop_0();
 __printf_chk(1, aThrL306D, v5);
 return v10 - __readgsdword(0x14u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x3C17 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x3C1B */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x3C20 */
void _stack_chk_fail_local()
{
 /* Stub function - stack check failed */
 while(1) {}
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x3C8C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: setsockopt @ 0x7104 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x7108 */

/* FAILED to decompile: raise @ 0x710C */

/* FAILED to decompile: __snprintf_chk @ 0x7110 */

/* FAILED to decompile: strstr @ 0x7114 */

/* FAILED to decompile: strcmp @ 0x7118 */

/* FAILED to decompile: __libc_start_main @ 0x711C */

/* FAILED to decompile: read @ 0x7120 */

/* FAILED to decompile: _exit @ 0x7124 */

/* FAILED to decompile: free @ 0x7128 */

/* FAILED to decompile: memcpy @ 0x712C */

/* FAILED to decompile: shmget @ 0x7130 */

/* FAILED to decompile: fclose @ 0x7134 */

/* FAILED to decompile: pthread_cond_wait @ 0x7138 */

/* FAILED to decompile: signal @ 0x713C */

/* FAILED to decompile: memcmp @ 0x7140 */

/* FAILED to decompile: sleep @ 0x7144 */

/* FAILED to decompile: alarm @ 0x7148 */

/* FAILED to decompile: stpcpy @ 0x714C */

/* FAILED to decompile: __stack_chk_fail @ 0x7150 */

/* FAILED to decompile: rewind @ 0x7154 */

/* FAILED to decompile: wait @ 0x7158 */

/* FAILED to decompile: shmat @ 0x715C */

/* FAILED to decompile: pthread_mutex_lock @ 0x7160 */

/* FAILED to decompile: unlink @ 0x7164 */

/* FAILED to decompile: __cxa_finalize @ 0x7168 */

/* FAILED to decompile: fwrite @ 0x716C */

/* FAILED to decompile: waitpid @ 0x7170 */

/* FAILED to decompile: usleep @ 0x7174 */

/* FAILED to decompile: fread @ 0x7178 */

/* FAILED to decompile: shmctl @ 0x717C */

/* FAILED to decompile: pthread_cond_signal @ 0x7180 */

/* FAILED to decompile: malloc @ 0x7184 */

/* FAILED to decompile: puts @ 0x7188 */

/* FAILED to decompile: stat @ 0x718C */

/* FAILED to decompile: open @ 0x7190 */

/* FAILED to decompile: strchr @ 0x7194 */

/* FAILED to decompile: strlen @ 0x7198 */

/* FAILED to decompile: write @ 0x719C */

/* FAILED to decompile: bind @ 0x71A0 */

/* FAILED to decompile: __isoc99_sscanf @ 0x71A4 */

/* FAILED to decompile: fopen @ 0x71A8 */

/* FAILED to decompile: memset @ 0x71AC */

/* FAILED to decompile: __errno_location @ 0x71B0 */

/* FAILED to decompile: strncpy @ 0x71B4 */

/* FAILED to decompile: syscall @ 0x71B8 */

/* FAILED to decompile: fileno @ 0x71BC */

/* FAILED to decompile: execl @ 0x71C0 */

/* FAILED to decompile: pipe @ 0x71C4 */

/* FAILED to decompile: __printf_chk @ 0x71C8 */

/* FAILED to decompile: shmdt @ 0x71CC */

/* FAILED to decompile: pthread_create @ 0x71D0 */

/* FAILED to decompile: fork @ 0x71D4 */

/* FAILED to decompile: listen @ 0x71D8 */

/* FAILED to decompile: ftok @ 0x71DC */

/* FAILED to decompile: socket @ 0x71E0 */

/* FAILED to decompile: pthread_join @ 0x71E4 */

/* FAILED to decompile: pthread_cancel @ 0x71E8 */

/* FAILED to decompile: close @ 0x71EC */

/* Total functions decompiled: 142, failed: 59 */
