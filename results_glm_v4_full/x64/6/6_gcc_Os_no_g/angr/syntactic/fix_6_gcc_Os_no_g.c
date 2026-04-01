// Angr Decompilation of 6_gcc_Os_no_g
// Platform: AMD64

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/syscall.h>

/* CRT stub function _init removed by preprocessor */
typedef struct {} struct_0;

extern struct_0 *g_406fe8;
typedef unsigned long long *(*init_func_ptr)(void);

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_406fe8;
 if (g_406fe8)
 v1 = ((init_func_ptr)g_406fe8)();
 return v1;
}


// Function: sub_402020 at 0x402020
extern unsigned long long g_406e10;
extern unsigned long long g_406e18;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406e10;
 /* Indirect jump removed - g_406e18 is not a valid label */
 ((void (*)(void))g_406e18)();
}


// Function: sub_40202d at 0x40202d
void sub_40202d()
{
 sub_402030();
 return;
}


// Function: sub_402030 at 0x402030
void sub_402030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_402020();
 return;
}


// Function: sub_40203f at 0x40203f
void sub_40203f()
{
 sub_402040();
 return;
}


// Function: sub_402040 at 0x402040
void sub_402040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_402020();
 return;
}


// Function: sub_40204f at 0x40204f
void sub_40204f()
{
 sub_402050();
 return;
}


// Function: sub_402050 at 0x402050
void sub_402050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_402020();
 return;
}


// Function: sub_40205f at 0x40205f
void sub_40205f()
{
 sub_402060();
 return;
}


// Function: sub_402060 at 0x402060
void sub_402060()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 3;
 sub_402020();
 return;
}


// Function: sub_40206f at 0x40206f
void sub_40206f()
{
 sub_402070();
 return;
}


// Function: sub_402070 at 0x402070
void sub_402070()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 4;
 sub_402020();
 return;
}


// Function: sub_40207f at 0x40207f
void sub_40207f()
{
 sub_402080();
 return;
}


// Function: sub_402080 at 0x402080
void sub_402080()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 5;
 sub_402020();
 return;
}


// Function: sub_40208f at 0x40208f
void sub_40208f()
{
 sub_402090();
 return;
}


// Function: sub_402090 at 0x402090
void sub_402090()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 6;
 sub_402020();
 return;
}


// Function: sub_40209f at 0x40209f
void sub_40209f()
{
 sub_4020a0();
 return;
}


// Function: sub_4020a0 at 0x4020a0
void sub_4020a0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 7;
 sub_402020();
 return;
}


// Function: sub_4020af at 0x4020af
void sub_4020af()
{
 sub_4020b0();
 return;
}


// Function: sub_4020b0 at 0x4020b0
void sub_4020b0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 8;
 sub_402020();
 return;
}


// Function: sub_4020bf at 0x4020bf
void sub_4020bf()
{
 sub_4020c0();
 return;
}


// Function: sub_4020c0 at 0x4020c0
void sub_4020c0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 9;
 sub_402020();
 return;
}


// Function: sub_4020cf at 0x4020cf
void sub_4020cf()
{
 sub_4020d0();
 return;
}


// Function: sub_4020d0 at 0x4020d0
void sub_4020d0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 10;
 sub_402020();
 return;
}


// Function: sub_4020df at 0x4020df
void sub_4020df()
{
 sub_4020e0();
 return;
}


// Function: sub_4020e0 at 0x4020e0
void sub_4020e0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 11;
 sub_402020();
 return;
}


// Function: sub_4020ef at 0x4020ef
void sub_4020ef()
{
 sub_4020f0();
 return;
}


// Function: sub_4020f0 at 0x4020f0
void sub_4020f0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 12;
 sub_402020();
 return;
}


// Function: sub_4020ff at 0x4020ff
void sub_4020ff()
{
 sub_402100();
 return;
}


// Function: sub_402100 at 0x402100
void sub_402100()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 13;
 sub_402020();
 return;
}


// Function: sub_40210f at 0x40210f
void sub_40210f()
{
 sub_402110();
 return;
}


// Function: sub_402110 at 0x402110
void sub_402110()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 14;
 sub_402020();
 return;
}


// Function: sub_40211f at 0x40211f
void sub_40211f()
{
 sub_402120();
 return;
}


// Function: sub_402120 at 0x402120
void sub_402120()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 15;
 sub_402020();
 return;
}


// Function: sub_40212f at 0x40212f
void sub_40212f()
{
 sub_402130();
 return;
}


// Function: sub_402130 at 0x402130
void sub_402130()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 16;
 sub_402020();
 return;
}


// Function: sub_40213f at 0x40213f
void sub_40213f()
{
 sub_402140();
 return;
}


// Function: sub_402140 at 0x402140
void sub_402140()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 17;
 sub_402020();
 return;
}


// Function: sub_40214f at 0x40214f
void sub_40214f()
{
 sub_402150();
 return;
}


// Function: sub_402150 at 0x402150
void sub_402150()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 18;
 sub_402020();
 return;
}


// Function: sub_40215f at 0x40215f
void sub_40215f()
{
 sub_402160();
 return;
}


// Function: sub_402160 at 0x402160
void sub_402160()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 19;
 sub_402020();
 return;
}


// Function: sub_40216f at 0x40216f
void sub_40216f()
{
 sub_402170();
 return;
}


// Function: sub_402170 at 0x402170
void sub_402170()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 20;
 sub_402020();
 return;
}


// Function: sub_40217f at 0x40217f
void sub_40217f()
{
 sub_402180();
 return;
}


// Function: sub_402180 at 0x402180
void sub_402180()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 21;
 sub_402020();
 return;
}


// Function: sub_40218f at 0x40218f
void sub_40218f()
{
 sub_402190();
 return;
}


// Function: sub_402190 at 0x402190
void sub_402190()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 22;
 sub_402020();
 return;
}


// Function: sub_40219f at 0x40219f
void sub_40219f()
{
 sub_4021a0();
 return;
}


// Function: sub_4021a0 at 0x4021a0
void sub_4021a0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 23;
 sub_402020();
 return;
}


// Function: sub_4021af at 0x4021af
void sub_4021af()
{
 sub_4021b0();
 return;
}


// Function: sub_4021b0 at 0x4021b0
void sub_4021b0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 24;
 sub_402020();
 return;
}


// Function: sub_4021bf at 0x4021bf
void sub_4021bf()
{
 sub_4021c0();
 return;
}


// Function: sub_4021c0 at 0x4021c0
void sub_4021c0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 25;
 sub_402020();
 return;
}


// Function: sub_4021cf at 0x4021cf
void sub_4021cf()
{
 sub_4021d0();
 return;
}


// Function: sub_4021d0 at 0x4021d0
void sub_4021d0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 26;
 sub_402020();
 return;
}


// Function: sub_4021df at 0x4021df
void sub_4021df()
{
 sub_4021e0();
 return;
}


// Function: sub_4021e0 at 0x4021e0
void sub_4021e0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 27;
 sub_402020();
 return;
}


// Function: sub_4021ef at 0x4021ef
void sub_4021ef()
{
 sub_4021f0();
 return;
}


// Function: sub_4021f0 at 0x4021f0
void sub_4021f0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 28;
 sub_402020();
 return;
}


// Function: sub_4021ff at 0x4021ff
void sub_4021ff()
{
 sub_402200();
 return;
}


// Function: sub_402200 at 0x402200
void sub_402200()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 29;
 sub_402020();
 return;
}


// Function: sub_40220f at 0x40220f
void sub_40220f()
{
 sub_402210();
 return;
}


// Function: sub_402210 at 0x402210
void sub_402210()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 30;
 sub_402020();
 return;
}


// Function: sub_40221f at 0x40221f
void sub_40221f()
{
 sub_402220();
 return;
}


// Function: sub_402220 at 0x402220
void sub_402220()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 31;
 sub_402020();
 return;
}


// Function: sub_40222f at 0x40222f
void sub_40222f()
{
 sub_402230();
 return;
}


// Function: sub_402230 at 0x402230
void sub_402230()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 32;
 sub_402020();
 return;
}


// Function: sub_40223f at 0x40223f
void sub_40223f()
{
 sub_402240();
 return;
}


// Function: sub_402240 at 0x402240
void sub_402240()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 33;
 sub_402020();
 return;
}


// Function: sub_40224f at 0x40224f
void sub_40224f()
{
 sub_402250();
 return;
}


// Function: sub_402250 at 0x402250
void sub_402250()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 34;
 sub_402020();
 return;
}


// Function: sub_40225f at 0x40225f
void sub_40225f()
{
 sub_402260();
 return;
}


// Function: sub_402260 at 0x402260
void sub_402260()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 35;
 sub_402020();
 return;
}


// Function: sub_40226f at 0x40226f
void sub_40226f()
{
 sub_402270();
 return;
}


// Function: sub_402270 at 0x402270
void sub_402270()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 36;
 sub_402020();
 return;
}


// Function: sub_40227f at 0x40227f
void sub_40227f()
{
 sub_402280();
 return;
}


// Function: sub_402280 at 0x402280
void sub_402280()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 37;
 sub_402020();
 return;
}


// Function: sub_40228f at 0x40228f
void sub_40228f()
{
 sub_402290();
 return;
}


// Function: sub_402290 at 0x402290
void sub_402290()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 38;
 sub_402020();
 return;
}


// Function: sub_40229f at 0x40229f
void sub_40229f()
{
 sub_4022a0();
 return;
}


// Function: sub_4022a0 at 0x4022a0
void sub_4022a0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 39;
 sub_402020();
 return;
}


// Function: sub_4022af at 0x4022af
void sub_4022af()
{
 sub_4022b0();
 return;
}


// Function: sub_4022b0 at 0x4022b0
void sub_4022b0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 40;
 sub_402020();
 return;
}


// Function: sub_4022bf at 0x4022bf
void sub_4022bf()
{
 sub_4022c0();
 return;
}


// Function: sub_4022c0 at 0x4022c0
void sub_4022c0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 41;
 sub_402020();
 return;
}


// Function: sub_4022cf at 0x4022cf
void sub_4022cf()
{
 sub_4022d0();
 return;
}


// Function: sub_4022d0 at 0x4022d0
void sub_4022d0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 42;
 sub_402020();
 return;
}


// Function: sub_4022df at 0x4022df
void sub_4022df()
{
 sub_4022e0();
 return;
}


// Function: sub_4022e0 at 0x4022e0
void sub_4022e0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 43;
 sub_402020();
 return;
}


// Function: sub_4022ef at 0x4022ef
void sub_4022ef()
{
 sub_4022f0();
 return;
}


// Function: sub_4022f0 at 0x4022f0
void sub_4022f0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 44;
 sub_402020();
 return;
}


// Function: sub_4022ff at 0x4022ff
void sub_4022ff()
{
 sub_402300();
 return;
}


// Function: sub_402300 at 0x402300
void sub_402300()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 45;
 sub_402020();
 return;
}


// Function: sub_40230f at 0x40230f
void sub_40230f()
{
 sub_402310();
 return;
}


// Function: sub_402310 at 0x402310
void sub_402310()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 46;
 sub_402020();
 return;
}


// Function: sub_40231f at 0x40231f
void sub_40231f()
{
 sub_402320();
 return;
}


// Function: sub_402320 at 0x402320
void sub_402320()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 47;
 sub_402020();
 return;
}


// Function: sub_40232f at 0x40232f
void sub_40232f()
{
 sub_402330();
 return;
}


// Function: sub_402330 at 0x402330
void sub_402330()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 48;
 sub_402020();
 return;
}


// Function: sub_40233f at 0x40233f
void sub_40233f()
{
 sub_402340();
 return;
}


// Function: sub_402340 at 0x402340
void sub_402340()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 49;
 sub_402020();
 return;
}


// Function: sub_40234f at 0x40234f
void sub_40234f()
{
 sub_402350();
 return;
}


// Function: sub_402350 at 0x402350
void sub_402350()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 50;
 sub_402020();
 return;
}


// Function: sub_40235f at 0x40235f
void sub_40235f()
{
 sub_402360();
 return;
}


// Function: sub_402360 at 0x402360
void sub_402360()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 51;
 sub_402020();
 return;
}


// Function: sub_40236f at 0x40236f
void sub_40236f()
{
 sub_402370();
 return;
}


// Function: sub_402370 at 0x402370
void sub_402370()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 52;
 sub_402020();
 return;
}


// Function: sub_40237f at 0x40237f
void sub_40237f()
{
 sub_402380();
 return;
}


// Function: sub_402380 at 0x402380
void sub_402380()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 53;
 sub_402020();
 return;
}


// Function: sub_40238f at 0x40238f
void sub_40238f()
{
 sub_402390();
 return;
}


// Function: sub_402390 at 0x402390
void sub_402390()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 54;
 sub_402020();
 return;
}


// Function: sub_40239f at 0x40239f
void sub_40239f()
{
 __cxa_finalize();
 return;
}


// Function: main at 0x402720
unsigned int main()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi
 unsigned long long count; // rdx
 unsigned long long v4; // rcx
 unsigned long long v5; // r8
 unsigned long long v6; // r9
 unsigned long long v7; // rax

 test_standard_library_functions();
 test_system_calls(v1, v2, count, v4, v5, v6, v7);
 test_thread_concurrency(v1, v2, count, v4, v5, v6);
 return 0;
}


// Function: sub_40273e at 0x40273e
void sub_40273e(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_402765 at 0x402765
void sub_402765()
{
 /* Unsupported jumpkind Ijk_SigTRAP - decompilation stub */
}


// Function: sub_402766 at 0x402766
void sub_402766()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_402799 at 0x402799
void sub_402799()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4027d9 at 0x4027d9
void sub_4027d9()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_402815 at 0x402815
void sub_402815()
{
}


// Function: sub_402819 at 0x402819
void sub_402819()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: signal_handler at 0x402829
extern unsigned int signal_number;
extern unsigned int signal_received;

void signal_handler(unsigned int a0)
{
 signal_received = 1;
 signal_number = a0;
 return;
}


// Function: thread_sum at 0x40283e
unsigned long long thread_sum(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int i; // eax
 unsigned int v2; // edx

 i = *(ptr);
 v2 = ptr[1];
 for (ptr[2] = 0; v2 >= i; i += 1)
 {
 ptr[2] = ptr[2] + i;
 }
 return 0;
}


// Function: thread_compute at 0x40285c
void * thread_compute(void *a0)
{
 unsigned int *ptr; // rax
 unsigned int v0; // eax

 v0 = *(unsigned int *)a0;
 ptr = malloc(4);
 *ptr = v0 * v0;
 return ptr;
}


// Function: thread_increment at 0x402874
extern unsigned long long counter_mutex;
extern unsigned int shared_counter;

unsigned long long thread_increment(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int v1; // r12d
 unsigned int i; // ebx

 v1 = *ptr;
 i = 0;
 while (i < v1)
 {
 i += 1;
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return 0;
}


// Function: consumer_thread at 0x4028c0
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern unsigned int data;
extern unsigned int i;

void * consumer_thread(void *arg)
{
 unsigned int *ptr; // rax

 pthread_mutex_lock(&cond_mutex);
 while (!i)
 {
 pthread_cond_wait(&cond, &cond_mutex);
 }
	pthread_mutex_unlock(&cond_mutex);
	ptr = malloc(4);
	*ptr = data;
	return ptr;
}


// Function: producer_thread at 0x402911
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern unsigned int data;
extern unsigned int ready;

unsigned long long producer_thread()
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: thread_atomic_increment at 0x40295b
extern unsigned int atomic_counter;

unsigned long long thread_atomic_increment(unsigned long a0)
{
 unsigned int i; // edx

 for (i = 0; i < *((int *)a0); i += 1)
 {
 __atomic_add_fetch(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 }
 return 0;
}


// Function: thread_atomic_load_store at 0x402985
extern unsigned int atomic_counter;

void * thread_atomic_load_store(void *a0)
{
 __atomic_exchange_n(&atomic_counter, atomic_counter + 100, __ATOMIC_SEQ_CST);
 return NULL;
}


// Function: thread_tls_test at 0x40299b
void * thread_tls_test(void *a0)
{
 unsigned int v4; // eax
 unsigned int v6; // ebx
 unsigned int *p; // rax

 v4 = 0;
 v6 = v4 + 50;
 strncpy((char *)a0, "ThreadTest", 31);
 p = malloc(8);
 p[0] = v4;
 p[1] = v6;
 return p;
}


// Function: param_strcpy at 0x4029e5
long long param_strcpy(char *a0, char *a1)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return strlen(strcpy(a0, a1));
}


// Function: call_strcpy at 0x4029f9
unsigned long long call_strcpy()
{
 char v0[32]; // [bp-0x30]

 return param_strcpy(&v0, "HelloLib");
}


// Function: param_strcmp at 0x402a3c
unsigned long long param_strcmp(char *a0, char *a1, unsigned long a2, unsigned long long a3)
{
 unsigned int v2; // r8d
 unsigned long long v0; // [bp-0x8]

 v0 = a3;
 v2 = strcmp(a0, a1);
 if (v2 > 0)
 return 1;
 return -(v2);
}


// Function: call_strcmp at 0x402a5d
int call_strcmp(unsigned long a0, unsigned long a1, unsigned int a2, unsigned long long a3)
{
 unsigned long long v2; // rax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v3 = param_strcmp("abc", "def", a2, a3);
 v4 = param_strcmp("xyz", "xyz", a2, a3);
 return (unsigned int)param_strcmp("bbb", "aaa", a2, a3) + v3 + v4;
}


// Function: param_strlen at 0x402aa5
long long param_strlen(char *a0)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return strlen(a0);
}


// Function: call_strlen at 0x402ab1
unsigned long long call_strlen()
{
 return 12;
}


// Function: param_memcpy at 0x402abb
unsigned long long param_memcpy(char *cur, char *i, unsigned long long a2)
{
 unsigned long long v1; // rcx

 for (v1 = a2; v1; i += 1)
 {
 v1 -= 1;
 *(cur) = *(i);
 cur += 1;
 }
 return a2;
}


// Function: call_memcpy at 0x402ac8
long long call_memcpy()
{
 unsigned long long v7; // rcx
 char *cur; // rdi
 unsigned long long v0; // [bp-0x38]
 unsigned long long v1; // [bp-0x30]
 unsigned int v2; // [bp-0x28]
 char v3[8]; // [bp-0x24]
 char v4; // [bp-0x1c]
 unsigned int v5; // [bp-0x14]

 v7 = 5;
 cur = &v3;
 v2 = 50;
 v0 = 85899345930;
 for (v1 = 171798691870; v7; cur += 1)
 {
 v7 -= 1;
 *(cur) = 0;
 }
 param_memcpy(&v3, &v0, 20);
 return *((int *)&v4) + *((int *)&v3[0]) + v5;
}


// Function: param_memcmp at 0x402b49
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2, unsigned long long a3)
{
 unsigned int v2; // r8d
 unsigned long long v0; // [bp-0x8]

 v0 = a3;
 v2 = memcmp(a0, a1, a2);
 if (v2 > 0)
 return 1;
 return -(v2);
}


// Function: call_memcmp at 0x402b6a
long long call_memcmp(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long long a3)
{
 unsigned long long v7; // rax
 unsigned long long v0; // [bp-0x44]
 unsigned int v1; // [bp-0x3c]
 unsigned long long v2; // [bp-0x38]
 unsigned int v3; // [bp-0x30]
 unsigned long v4; // [bp-0x2c]
 unsigned int v5; // [bp-0x24]

 v1 = 3;
 v3 = 4;
 v5 = 3;
 v0 = 8589934593;
 v2 = 8589934593;
 v4 = 8589934593;
 v7 = param_memcmp(&v0, &v2, 12, a3);
 return param_memcmp(&v0, &v4, 12, a3) + (v7 & 4294967295);
}


// Function: param_printf at 0x402bfc
int param_printf(unsigned int a0, unsigned long a1)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x402c18
int call_printf()
{
 return param_printf(42, "Test");
}


// Function: param_scanf at 0x402c2a
unsigned long long param_scanf(char *a0)
{
 char v0; // [bp-0x18], Other Possible Types: unsigned int
 char v1; // [bp-0x14], Other Possible Types: unsigned int

 if (__isoc99_sscanf(a0, "%d,%d", &v0, &v1) != 2)
 return 4294967295;
 return v1 + v0;
}


// Function: call_scanf at 0x402c83
unsigned long long call_scanf()
{
 return param_scanf("123,456");
}


// Function: param_fopen_fclose at 0x402c90
unsigned int param_fopen_fclose(char *a0, unsigned long a1, unsigned long a2, unsigned long long a3)
{
 FILE *fp; // rax
 unsigned int v3; // r12d
 unsigned long long v0; // [bp-0x18]

 v0 = a3;
 fp = fopen(a0, "r");
 if (!fp)
 return 4294967295;
 v3 = fileno(fp);
 fclose(fp);
 return v3;
}


// Function: call_fopen_fclose at 0x402ccb
unsigned int call_fopen_fclose(unsigned long a0, unsigned int a1, unsigned int a2, unsigned long long a3)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return (unsigned int)((param_fopen_fclose("/etc/passwd", a1, a2, a3) & 4294967295) >> 31) | 42;
}


// Function: param_fread_fwrite at 0x402ce4
unsigned long long param_fread_fwrite(char *a0)
{
 void* fp; // rbp
 void* v3; // rdi
 unsigned long long count; // rax
 char v0; // [bp-0x50]

 fp = fopen(a0, "w+");
 if (!fp)
 return 4294967295;
 v3 = fp;
 if (fwrite("BinBench Test Data", 1, 18, fp) != 18)
 {
 fclose(v3);
 return 4294967294;
 }
 rewind(v3);
 count = fread(&v0, 1, 18, fp);
 (&v0)[count] = 0;
 fclose(fp);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 return (-(strcmp(&v0, "BinBench Test Data") < 1) & 45) - 3;
}


// Function: call_fread_fwrite at 0x402dcd
unsigned long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x402ddd
unsigned int param_malloc_free(unsigned long long a0)
{
 unsigned int *ptr; // rax
 unsigned long long idx; // rax

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx != a0; idx += 1)
 {
 ptr[idx] = (unsigned int)idx * 10;
 }
 free(ptr);
 return a0 > 0 ? ptr[0] + ptr[1] : 0;
}


// Function: call_malloc_free at 0x402e2b
int call_malloc_free()
{
 return param_malloc_free(10);
}


// Function: param_memset at 0x402e36
int param_memset(char *a0, unsigned long long a1)
{
 unsigned long long v1; // r8
 unsigned long long v2; // rcx
 char *cur; // rdi
 unsigned long long v4; // rax
 unsigned long long v5; // rax
 unsigned long long v6; // rax

 v1 = 0;
 v2 = a1;
 for (cur = a0; v2; cur += 1)
 {
 v2 -= 1;
 *(cur) = 0;
 }
 v4 = 0;
 while (true)
 {
 v5 = v4;
 if (v5 == a1)
 break;
 v6 = v5 + 1;
 v1 += a0[v5];
 v4 = v6;
 }
 return v1;
}


// Function: call_memset at 0x402e5e
long long call_memset()
{
 unsigned long long idx; // rax
 char v0[36]; // [bp-0x38]
 unsigned int v1; // [bp-0x14]

 idx = 0;
 do
 {
 *((unsigned int *)&v0[4 * idx]) = 255;
 idx += 1;
 } while (idx != 10);
 param_memset(&v0, 40);
 return v1 + *((int *)&v0[0]);
}


// Function: param_strchr_strstr at 0x402eb4
long long param_strchr_strstr(char *a0, char a1, char *a2)
{
 unsigned long long v5; // r13
 unsigned long long v6; // r12
 unsigned long long v7; // rbx
 unsigned long long v8; // rax
 unsigned long long ptr1; // rax
 unsigned long long ptr2; // rax
 unsigned long long v0; // [bp-0x28]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x10]
 unsigned long long v3; // [bp-0x8]

 v3 = v5;
 v2 = v6;
 v1 = v7;
 v0 = v8;
 ptr1 = (unsigned long long)strchr(a0, a1);
 ptr2 = (unsigned long long)strstr(a0, a2);
 return (!ptr2 ? 4294967295 : ptr2 - (unsigned long long)a0 & 4294967295) + (ptr1 ? ptr1 - (unsigned long long)a0 & 4294967295 : 4294967295);
}


// Function: call_strchr_strstr at 0x402f04
unsigned long long call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


// Function: test_standard_library_functions at 0x402f1d
extern char g_404099;
extern char g_4040bd;
extern char g_4040d8;
extern char g_4040f3;
extern char g_40410f;
extern char g_40412b;
extern char g_404147;
extern char g_404163;
extern char g_404180;
extern char g_40419c;
extern char g_4041b8;
extern char g_4041d4;
extern char g_4041ef;

int test_standard_library_functions()
{
 unsigned long long v2; // rax
 unsigned int v4; // rdi
 unsigned int v5; // rsi
 unsigned int v6; // edx
 unsigned long long v7; // rcx
 unsigned int v10; // rdx
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 puts(&g_404099);
 __printf_chk(1, &g_4040bd, call_strcpy() & 4294967295);
 __printf_chk(1, &g_4040d8, call_strcmp(v4, v5, v6, v7) & 4294967295);
 __printf_chk(1, &g_4040f3, 12);
 __printf_chk(1, &g_40410f, call_memcpy() & 4294967295);
 __printf_chk(1, &g_40412b, call_memcmp(v4, v5, v10, v7) & 4294967295);
 __printf_chk(1, &g_404147, call_printf() & 4294967295);
 __printf_chk(1, &g_404163, call_scanf() & 4294967295);
 __printf_chk(1, &g_404180, call_fopen_fclose(v4, v5, v10, v7) & 4294967295);
 __printf_chk(1, &g_40419c, call_fread_fwrite() & 4294967295);
 __printf_chk(1, &g_4041b8, call_malloc_free() & 4294967295);
 __printf_chk(1, &g_4041d4, call_memset() & 4294967295);
 return __printf_chk(1, &g_4041ef, call_strchr_strstr() & 4294967295);
}


// Function: param_linux_syscall at 0x40307b
unsigned int param_linux_syscall(unsigned long a0)
{
 unsigned int v1; // eax

 v1 = syscall(2);
 if (v1 >= 0)
 {
 syscall(3);
 return v1;
 }
 return -(*(__errno_location()));
}


// Function: call_linux_syscall at 0x4030ba
unsigned int call_linux_syscall()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return (unsigned int)((param_linux_syscall("/etc/passwd") & 4294967295) >> 31) | 42;
}


// Function: param_win32_api at 0x4030d3
#include <sys/stat.h>

unsigned long long param_win32_api()
{
 struct stat v0; // [bp-0x70]

 if (stat("/etc/passwd", &v0) < 0)
 return 4294967295;
 return (v0.st_size <= 0 ? 4294967294 : 42);
}


// Function: call_win32_api at 0x403139
unsigned long long call_win32_api()
{
 return param_win32_api();
}


// Function: param_fork_exec at 0x403146
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

unsigned long long param_fork_exec(char *a0, unsigned long a1)
{
 pid_t pid;
 int status;

 pid = fork();
 if (pid < 0)
 {
 return 4294967295;
 }
 else if (pid == 0)
 {
 execl(a0, a0, NULL);
 _exit(127);
 }
 else if (waitpid(pid, &status, 0) < 0)
 {
 return 4294967294;
 }
 else if (((status) & 0xff) == 0)  /* WIFEXITED */
 {
 return ((status) >> 8) & 0xff;  /* WEXITSTATUS */
 }
 else
 {
 return 4294967293;
 }
}


// Function: call_fork_exec at 0x4031dc
long long call_fork_exec()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return (-((unsigned int)param_fork_exec("/bin/true", 0) < 1) & 43) - 1;
}


// Function: param_pipe_communication at 0x4031fb
unsigned long long param_pipe_communication()
{
 unsigned int result; // eax
 unsigned long long count; // rax
 char v0; // [bp-0x38], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x34]
 char v2; // [bp-0x30]

 if (pipe(&v0) < 0)
 return 4294967295;
 result = fork();
 if (result < 0)
 {
 return 4294967294;
 }
 else if (!result)
 {
 close(v0);
 write(v1, "HelloPipe", 9);
 close(v1);
 _exit(0); /* do not return */
 }
 else
 {
 close(v1);
 count = read(v0, &v2, 31);
 (&v2)[count] = 0;
 close(v0);
 wait(NULL);
 return (count <= 0 ? 4294967293 : 42);
 }
}


// Function: call_pipe_communication at 0x4032c1
unsigned long long call_pipe_communication()
{
 return param_pipe_communication();
}


// Function: param_socket_create at 0x4032ca
typedef struct sockaddr {
 unsigned short sin_family;
 char sa_data[14];
} sockaddr;

unsigned long long param_socket_create()
{
 unsigned int v5; // edi
 unsigned int v6; // edi
 unsigned int v7; // edi
 unsigned int v8; // edi
 unsigned int v0; // [bp-0x2c]
 unsigned int result; // [bp-0x24]
 sockaddr v2; // [bp-0x20]

 v5 = socket(2, 1, 0);
 if (v5 < 0)
 return 4294967295;
 v0 = v5;
 result = 1;
 v6 = v0;
 if (setsockopt(v0, 1, 2, &result, 4) < 0)
 {
 close(v6);
 return 4294967294;
 }
 *((unsigned long long *)&v2.sin_family) = 0;
 v2.sin_family = 2;
 v7 = v0;
 if (bind(v6, &v2, 16) < 0)
 {
 close(v7);
 return 4294967293;
 }
 v8 = v0;
 if (listen(v7, 5) >= 0)
 {
 close(v8);
 return 42;
 }
 close(v8);
 return 0xfffffffc;
}


// Function: call_socket_create at 0x4033b6
unsigned long long call_socket_create()
{
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x4033bf
unsigned int param_shmget_shmat()
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 char *v4; // rbp
 unsigned int v5; // r12d

 v1 = open("/tmp/binbench_shm", 66, 438);
 if (v1 < 0)
 return 4294967295;
 close(v1);
 v2 = ftok("/tmp/binbench_shm", 42);
 if (v2 >= 0)
 {
 v3 = shmget(v2, 0x1000, 950);
 if (v3 < 0)
 return 4294967294;
 v4 = shmat(v3, 0, 0);
 if (v4 == 0xffffffffffffffff)
 return 4294967293;
 strcpy(v4, "SharedMemory");
 v5 = strlen(v4);
 shmdt(v4);
 shmctl(v3, 0, 0);
 return v5;
 }
 return 4294967295;
}


// Function: call_shmget_shmat at 0x403474
unsigned long long call_shmget_shmat()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 if (param_shmget_shmat() > 0)
 return 42;
 return 4294967295;
}


// Function: param_signal_handling at 0x40348f
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned long long param_signal_handling(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long long a3)
{
 unsigned long long v2; // r8
 unsigned int v3; // ebx
 unsigned int v4; // ebx
 unsigned int v5; // ebx
 unsigned int v6; // ebx
 unsigned int v7; // ebx
 unsigned int v8; // ebx
 unsigned long long v0; // [bp-0x18]

 v0 = a3;
 signal(10, signal_handler);
 v3 = 1001;
 signal_received = 0;
 raise(10);
 while (true)
 {
 v4 = v3;
 if (signal_received || !((v5 = v4 - 1, v4 != 1)))
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
 v7 = v6;
 if (signal_received || !((v8 = v7 - 1, v7 != 1)))
 break;
 usleep(1000);
 v6 = v8;
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


// Function: call_signal_handling at 0x403597
unsigned long long call_signal_handling(unsigned int a0, unsigned int a1, unsigned int a2, unsigned long long a3)
{
 return param_signal_handling(a0, a1, a2, a3);
}


// Function: test_system_calls at 0x4035a0
extern char g_40423e;
extern char g_404259;
extern char g_404275;
extern char g_404291;
extern char g_4042ad;
extern char g_4042c9;
extern char g_4042e5;
extern char g_404301;

int test_system_calls()
{
 unsigned long long v2; // rax
 unsigned long long v12; // rcx
 unsigned int v9; // rdi
 unsigned int v10; // rsi
 unsigned int v11; // rdx
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 puts(&g_40423e);
 __printf_chk(1, &g_404259, call_linux_syscall() & 4294967295);
 __printf_chk(1, &g_404275, call_win32_api() & 4294967295);
 __printf_chk(1, &g_404291, call_fork_exec() & 4294967295);
 __printf_chk(1, &g_4042ad, param_pipe_communication() & 4294967295);
 __printf_chk(1, &g_4042c9, param_socket_create() & 4294967295);
 __printf_chk(1, &g_4042e5, call_shmget_shmat() & 4294967295);
 return __printf_chk(1, &g_404301, param_signal_handling(v9, v10, v11, v12) & 4294967295);
}


// Function: param_pthread_create at 0x403670
unsigned long long param_pthread_create(unsigned int a0)
{
 unsigned int v0; // [bp-0x24]
 pthread_t v1; // [bp-0x20], Other Possible Types: unsigned long long
 unsigned int *v2; // [bp-0x18], Other Possible Types: char

 v0 = a0;
 if ((int)pthread_create(&v1, 0, thread_compute, &v0))
 return 4294967295;
 pthread_join(v1, (void **)&v2);
 if (v2) {
 unsigned int result = *v2;
 free(v2);
 return result;
 }
 return 0;
}


// Function: call_pthread_create at 0x4036e9
unsigned long long call_pthread_create()
{
 return param_pthread_create(7);
}


// Function: param_pthread_join at 0x4036f7
extern unsigned int g_404400;

unsigned long long param_pthread_join()
{
 unsigned int *i; // rsi
 unsigned long long v6; // rcx
 unsigned int *cur; // rdi
 char *v8; // rbx
 char *v9; // rbp
 unsigned int result; // eax
 unsigned long long v11; // rbx
 unsigned long long idx; // rbx
 unsigned long long v13; // rbx
 char v0[24]; // [bp-0x80] - space for 3 pthread_t
 unsigned int v2[9]; // [bp-0x64] - space for 9 unsigned int values

 i = &g_404400;
 v6 = 9;
 cur = v2;
 for (v8 = (char *)v0; v6; i += 1)
 {
 v6 -= 1;
 *cur = *i;
 cur += 1;
 }
 v9 = (char *)v2;
 while (true)
 {
 result = pthread_create((pthread_t *)v8, 0, thread_sum, v9);
 if (result)
 return 4294967295;
 v8 += 8;
 v9 += 12;
 if (v8 == &v0[24])
 {
 v11 = 0;
 while (true)
 {
 idx = v11;
 pthread_join(((pthread_t *)v0)[idx], NULL);
 v13 = idx + 1;
 result += v2[3 * idx + 2];
 v11 = v13;
 if (v11 == 3)
 return result;
 }
 }
 }
}


// Function: call_pthread_join at 0x4037c7
unsigned long long call_pthread_join()
{
 return param_pthread_join();
}


// Function: param_mutex_lock at 0x4037d2
extern unsigned int shared_counter;

unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned long v2; // rdi
 unsigned int v3; // ebx
 unsigned int *ptr; // rbp
 unsigned int v5; // r12d
 unsigned int *v6; // r13
 unsigned int *v7; // r13
 unsigned long long v9; // r12
 unsigned long long v10; // r12
 unsigned long long v11; // r12
 unsigned int v0; // [bp-0x2c]

 v2 = a0;
 v3 = v2;
 v0 = a1;
 ptr = malloc(v2 * 8);
 if (!ptr)
 return 4294967295;
 shared_counter = 0;
 v5 = 0;
 v6 = ptr;
 while (true)
 {
 v7 = v6;
 if (v5 < v3)
 {
 unsigned int *v8 = v7 + 2;
 if ((int)pthread_create((pthread_t *)v7, 0, thread_increment, &v0))
 {
 free(ptr);
 return 4294967294;
 }
 v5 += 1;
 v6 = v8;
 }
 else
 {
 v9 = 0;
 while (true)
 {
 v10 = v9;
 if (v3 <= (unsigned int)v10)
 break;
 v11 = v10 + 1;
 pthread_join(((pthread_t *)ptr)[v10], 0);
 v9 = v11;
 }
 free(ptr);
 return (shared_counter != v0 * v3 ? 4294967293 : 42);
 }
 }
}


// Function: call_mutex_lock at 0x403896
unsigned long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: param_condition_variable at 0x4038a9
extern unsigned int data;
extern unsigned int ready;

unsigned long long param_condition_variable()
{
 pthread_t v0; // [bp-0x28], Other Possible Types: unsigned long long
 pthread_t v1; // [bp-0x20], Other Possible Types: unsigned long long
 void *thread_result;

 ready = 0;
 data = 0;
 if ((int)pthread_create(&v1, 0, consumer_thread, 0))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v0, 0, producer_thread, 0))
 {
 pthread_cancel(v1);
 return 4294967294;
 }
 else
 {
 pthread_join(v1, &thread_result);
 pthread_join(v0, 0);
 if (thread_result) {
 unsigned int result = *(unsigned int *)thread_result;
 free(thread_result);
 return result;
 }
 return 0;
 }
}


// Function: call_condition_variable at 0x40395e
unsigned long long call_condition_variable()
{
 return param_condition_variable();
}


// Function: param_atomic_ops at 0x403969
extern unsigned int atomic_counter;

unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned long v3; // rdi
 unsigned int v4; // ebx
 unsigned long long v13; // r12
 unsigned int *ptr; // rbp
 unsigned int v6; // r12d
 unsigned int *v7; // r13
 unsigned int *v8; // r13
 unsigned int *v9; // r13
 unsigned long long v10; // r14
 unsigned long long v11; // r12
 unsigned long long v12; // r12
 unsigned int v0; // [bp-0x3c]
 pthread_t v1; // [bp-0x38]

 v3 = a0;
 v4 = v3;
 v0 = a1;
 ptr = malloc(v3 * 8);
 if (!ptr)
 return 4294967295;
 __atomic_exchange_n(&atomic_counter, 0, __ATOMIC_SEQ_CST);
 v6 = 0;
 v7 = ptr;
 while (true)
 {
 v8 = v7;
 if (v6 >= v4)
 break;
 v9 = v8 + 2;
 if ((int)pthread_create((pthread_t *)v8, 0, (void *(*)(void *))thread_atomic_increment, &v0))
 {
 free(ptr);
 return 4294967294;
 }
 v6 += 1;
 v7 = v9;
 }
 if (!(int)pthread_create(&v1, 0, thread_atomic_load_store, 0))
 pthread_join(v1, 0);
 v11 = 0;
 while (true)
 {
 v12 = v11;
 if (v4 <= (unsigned int)v12)
 break;
 v13 = v12 + 1;
 pthread_join(((pthread_t *)ptr)[v12], 0);
 v11 = v13;
 }
 free(ptr);
 return (atomic_counter <= 0 ? 4294967293 : 42);
}


// Function: call_atomic_ops at 0x403a70
unsigned long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


// Function: param_thread_local_storage at 0x403a83
unsigned long long param_thread_local_storage(unsigned int a0)
{
 unsigned int v4;
 unsigned long long v13; // r13
 unsigned long long v14; // r13
 unsigned long long v15; // r14
 unsigned int **i; // rbx
 unsigned int **v18; // rbx
 unsigned long long v19; // r13
 unsigned int v20; // r14d
 unsigned int v22; // r15d
 unsigned long long v23; // r13
 unsigned long long v24; // r13
 pthread_t *addr; // r12
 pthread_t *thread_ptr; // rax
 pthread_t *p; // rbp
 unsigned long long v9; // r13
 unsigned long long idx; // r13
 unsigned long long v12; // r13
 char *v0; // [bp-0x50]
 unsigned int result_ptr[2]; // [bp-0x48], Other Possible Types: char
 char **thread_args; // for thread values

 v4 = a0;
 addr = (pthread_t *)malloc(v4 * sizeof(pthread_t));
 thread_args = (char **)malloc(v4 * sizeof(char *));
 if (!addr || !thread_args)
 {
 if (addr) free(addr);
 if (thread_args) free(thread_args);
 return 4294967295;
 }
 v9 = 0;
 while (true)
 {
 idx = v9;
 if (v4 <= (unsigned int)idx)
 break;
 thread_args[idx] = (char *)malloc(64);
 snprintf(thread_args[idx], 64, "Thread-%d", (unsigned int)idx);
 v12 = idx + 1;
 v9 = v12;
 }
 v13 = 0;
 while (true)
 {
 v14 = v13;
 if (v4 <= (unsigned int)v13)
 break;
 v15 = v14 * 8;
 v13 = v14 + 1;
 if ((int)pthread_create(&addr[v14], 0, (void *(*)(void *))thread_tls_test, thread_args[v14]))
 {
 for (unsigned int j = 0; j < v14; j++)
 {
 free(thread_args[j]);
 }
 free(thread_args);
 free(addr);
 return 4294967294;
 }
 }
 v19 = 0;
 v20 = 0;
 v22 = 0;
 while (true)
 {
 v23 = v19;
 if (v4 <= (unsigned int)v23)
 break;
 {
 void * *thread_result_ptr;
 void *thread_result = NULL;
 thread_result_ptr = &thread_result;
 pthread_join(addr[v23], thread_result_ptr);
 if (thread_result) {
 unsigned int *thread_res = (unsigned int *)thread_result;
 v22 += thread_res[0];
 v20 += thread_res[1];
 free(thread_res);
 }
 }
 v24 = v23 + 1;
 free(thread_args[v23]);
 v19 = v24;
 }
 free(thread_args);
 free(addr);
 if (v4 * 100 != v22 || v4 * 150 != v20)
 return 4294967293;
 return 42;
}


// Function: call_thread_local_storage at 0x403c19
unsigned long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x403c27
extern char g_404327;
extern char g_404345;
extern char g_404361;
extern char g_40437e;
extern char g_40439a;
extern char g_4043b6;
extern char g_4043d2;

int test_thread_concurrency()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 puts(&g_404327);
 __printf_chk(1, &g_404345, call_pthread_create() & 4294967295);
 __printf_chk(1, &g_404361, param_pthread_join() & 4294967295);
 __printf_chk(1, &g_40437e, call_mutex_lock() & 4294967295);
 __printf_chk(1, &g_40439a, param_condition_variable() & 4294967295);
 __printf_chk(1, &g_4043b6, call_atomic_ops() & 4294967295);
 return __printf_chk(1, &g_4043d2, call_thread_local_storage() & 4294967295);
}



/* CRT stub function _fini removed by preprocessor */


