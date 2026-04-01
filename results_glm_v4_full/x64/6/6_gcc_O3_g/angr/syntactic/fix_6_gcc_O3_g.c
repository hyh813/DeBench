// Angr Decompilation of 6_gcc_O3_g
// Platform: AMD64

#include <stddef.h>
#include <stdbool.h>
#include <pthread.h>
#include <sys/stat.h>

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
 unsigned long long field_0;
 unsigned int field_8;
 char field_c;
} struct_0;

extern struct_0 *g_407fe8;

// Forward declarations for thread functions
void *thread_sum(void *arg);
void *thread_compute(void *arg);
void *thread_increment(void *arg);
void *consumer_thread(void *arg);
unsigned long long thread_atomic_increment(unsigned int *a0);
unsigned int thread_atomic_load_store(void);
void *thread_tls_test(void *arg);
void *producer_thread(void *arg);
long long unsigned int param_thread_local_storage_constprop_0(void);
long long test_standard_library_functions(void);
long long test_system_calls(unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long);
long long unsigned int call_linux_syscall(void);
long long unsigned int param_win32_api(void);
long long unsigned int call_win32_api(void);
void test_thread_concurrency(unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long);
unsigned long long param_atomic_ops_constprop_0(void);
unsigned long long param_mutex_lock_constprop_0(void);
unsigned long long call_strcpy(void);
int param_strcmp(char *a0, char *a1);
unsigned long long call_strcmp(void);
unsigned long param_strlen(char *a0);
unsigned long call_strlen(void);
unsigned long long call_memcpy(void);
long long unsigned int call_memcmp(void);
long long unsigned int param_scanf(char *a0);
long long unsigned int call_scanf(void);
long long unsigned int param_memcmp(void* a0, void* a1, unsigned long a2);
unsigned long long param_fopen_fclose(char *a0);
unsigned long long call_fopen_fclose(void);
unsigned long long param_fread_fwrite(char *a0);
unsigned long long call_fread_fwrite(void);
unsigned int param_malloc_free(unsigned long a0);
unsigned long long call_malloc_free(void);
unsigned long long param_memset(void* a0, int a1, unsigned long a2);
unsigned long long call_memset(void);
long long param_strchr_strstr(char *a0, int a1, char *a2);
unsigned long long call_strchr_strstr(void);
unsigned long long param_pthread_join(void);

unsigned long long * _init()
{
 return (unsigned long long *)g_407fe8;
}


// Function: sub_402020 at 0x402020
extern unsigned long long g_407e00;
extern unsigned long long g_407e08;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_407e00;
 /* goto g_407e08;  // Removed: undefined label - likely jump table stub */
 return;
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
 sub_4023a0();
 return;
}


// Function: sub_4023a0 at 0x4023a0
void sub_4023a0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 55;
 sub_402020();
 return;
}


// Function: sub_4023af at 0x4023af
void sub_4023af()
{
 sub_4023b0();
 return;
}


// Function: sub_4023b0 at 0x4023b0
void sub_4023b0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 56;
 sub_402020();
 return;
}


// Function: sub_4023bf at 0x4023bf
void sub_4023bf()
{
 __cxa_finalize();
 return;
}


// Function: main at 0x402760
unsigned int main()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi
 unsigned long long count; // rdx
 unsigned long long v4; // rcx
 unsigned long long v5; // r8
 unsigned long long v6; // r9

 test_standard_library_functions();
 test_system_calls(v1, v2, count, v4, v5, v6);
 test_thread_concurrency(v1, v2, count, v4, v5, v6);
 return 0;
}


// Function: sub_402784 at 0x402784
void sub_402784(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4027b5 at 0x4027b5
void sub_4027b5()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4204469 */
}


// Function: sub_4027b6 at 0x4027b6
void sub_4027b6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4027e9 at 0x4027e9
void sub_4027e9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402829 at 0x402829
void sub_402829()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_402865 at 0x402865
void sub_402865()
{
}


// Function: sub_402869 at 0x402869
void sub_402869()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_402879 at 0x402879
void sub_402879(unsigned long a0)
{
 signal_handler();
 return;
}


// Function: signal_handler at 0x402880
extern unsigned int signal_number;
extern unsigned int signal_received;

void signal_handler(unsigned int a0)
{
 signal_received = 1;
 signal_number = a0;
 return;
}


// Function: sub_402895 at 0x402895
void sub_402895(unsigned long a0)
{
 thread_sum(&a0);
 return;
}


// Function: thread_sum at 0x4028a0
void *thread_sum(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned long v1; // rdx
 unsigned long v2; // rcx
 unsigned long long cur; // rax
 unsigned long v12; // rdi
 unsigned long v13; // rdi
 unsigned long v14; // rdi
 unsigned long v15; // rdi
 unsigned long v16; // rdi
 unsigned long v17; // rdi
 unsigned long v18; // rdi
 unsigned int v19; // edi
 unsigned int v20; // eax
 unsigned int v3; // eax
 unsigned int v21; // edx
 unsigned int v4; // r8d
 unsigned long long v5; // xmm1
 unsigned int i; // eax
 unsigned long long v7; // xmm0
 unsigned long v9; // rdi
 int v10; // xmm1

 v1 = *(ptr);
 v2 = ptr[1];
 ptr[2] = 0;
 if ((unsigned int)v1 > (unsigned int)v2)
 return 0;
 v3 = (v2 & 4294967295) - v1;
 v4 = v3 + 1;
 if (v3 > 9)
 {
 v5 = 0;
 i = 0;
 v7 = (unsigned long long)(unsigned int)v1 | ((unsigned long long)(unsigned int)v1 << 32);
 v7 = v7 | (v7 << 64);
 v7 = v7 + 0x3000000020000000100000000;
 do
 {
 i += 1;
 v5 = v5 + v7;
 v7 = v7 + 0x1111111111111111111;
 } while (v4 >> 2 != i);
 v9 = v4 & 0xfffffffc;
 v10 = v5 + (v5 >> 64);
 v1 += v9;
 cur = (unsigned long long)(v10 + ((unsigned long long)(v10 >> 32) | (unsigned long long)(v10 >> 64) * 0x100000000));
 if (v4 == (unsigned int)v9)
 {
 ptr[2] = cur;
 return 0;
 }
 }
 else
 {
 cur = 0;
 }
 v12 = (unsigned int)v1 + 1;
 cur += v1;
 if ((unsigned int)v2 >= (unsigned int)v12)
 {
 cur += v12;
 v13 = (unsigned int)v1 + 2;
 if ((unsigned int)v2 >= (unsigned int)v13)
 {
 cur += v13;
 v14 = (unsigned int)v1 + 3;
 if ((unsigned int)v2 >= (unsigned int)v14)
 {
 cur += v14;
 v15 = (unsigned int)v1 + 4;
 if ((unsigned int)v2 >= (unsigned int)v15)
 {
 cur += v15;
 v16 = (unsigned int)v1 + 5;
 if ((unsigned int)v2 >= (unsigned int)v16)
 {
 cur += v16;
 v17 = (unsigned int)v1 + 6;
 if ((unsigned int)v2 >= (unsigned int)v17)
 {
 cur += v17;
 v18 = (unsigned int)v1 + 7;
 if ((unsigned int)v2 >= (unsigned int)v18)
 {
 cur += v18;
 v19 = (unsigned int)v1 + 8;
 if ((unsigned int)v2 >= v19)
 {
 v20 = (unsigned int)cur + v19;
 v21 = (unsigned int)v1 + 9;
 cur = (v21 <= (unsigned int)v2 ? v20 + v21 & 4294967295 : v20);
 }
 }
 }
 }
 }
 }
 }
 }
 ptr[2] = cur;
 return 0;
}


// Function: sub_402995 at 0x402995
void sub_402995(unsigned long a0)
{
 thread_compute((void*)&a0);
 return;
}


// Function: thread_compute at 0x40299a
void *thread_compute(void *arg)
{
 unsigned int *result = malloc(sizeof(unsigned int));
 if (result)
 *result = *(unsigned int *)arg * 2;
 return result;
}





// Function: sub_4029b8 at 0x4029b8
void sub_4029b8(unsigned long a0)
{
 thread_increment((void*)&a0);
 return;
}


// Function: thread_increment at 0x4029c0
extern unsigned long long counter_mutex;
extern unsigned int shared_counter;

void *thread_increment(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int i; // r12d
 unsigned int v2; // ebx

 i = *(ptr);
 if (i <= 0)
 return 0;
 v2 = 0;
 do
 {
 v2 += 1;
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 } while (i != v2);
 return 0;
}


// Function: sub_402a18 at 0x402a18
void sub_402a18(void *arg)
{
 consumer_thread(arg);
 return;
}


// Function: consumer_thread at 0x402a20
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern unsigned int data;
extern unsigned int i;

void *consumer_thread(void *arg)
{
 unsigned int *ptr; // rax

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


// Function: sub_402a86 at 0x402a86
void sub_402a86()
{
 producer_thread(NULL);
 return;
}


// Function: producer_thread at 0x402a90
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern unsigned int data;
extern unsigned int ready;

void *producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return NULL;
}


// Function: sub_402ada at 0x402ada
void sub_402ada(unsigned long a0)
{
 unsigned int v0 = 1000;
 thread_atomic_increment(&v0);
 return;
}


// Function: thread_atomic_increment at 0x402ae0
extern unsigned int atomic_counter;

unsigned long long thread_atomic_increment(unsigned int *a0)
{
 unsigned int i; // edx

 if (*(a0) <= 0)
 return 0;
 i = 0;
 do
 {
 atomic_fetch_add(&atomic_counter);
 atomic_compare_exchange(&atomic_counter, i + 1000, i);
 i += 1;
 } while (*(a0) != i);
 return (unsigned long long)0;
}


// Function: sub_402b12 at 0x402b12
void sub_402b12()
{
 thread_atomic_load_store();
 return;
}


// Function: thread_atomic_load_store at 0x402b20
extern unsigned int atomic_counter;

unsigned int thread_atomic_load_store()
{
 atomic_exchange(&atomic_counter, atomic_counter + 100);
 return 0;
}


// Function: sub_402b36b at 0x402b36
void sub_402b36b(unsigned long a0)
{
 thread_tls_test((long long)a0);
 return;
}


// Function: thread_tls_test at 0x402b40
void *thread_tls_test(void *arg)
{
 static __thread unsigned long tls_var;
 unsigned long v2; // rbx
 unsigned long v3; // rbp
 unsigned long v4; // rdi

 v2 = tls_var;
 v3 = (unsigned int)v2 + 50;
 v4 = 0;
 tls_var = v3;
 strncpy((char *)&v4, (const char *)arg, 31);
 malloc(8);
 return (void *)(unsigned long long)(v3 + v2);
}


// Function: sub_402b9b at 0x402b9b
void sub_402b9b(unsigned long a0, unsigned long a1)
{
 param_fork_exec_part_0(); /* do not return */
}


// Function: param_fork_exec_part_0 at 0x402ba0
int param_fork_exec_part_0(char *a0, unsigned long a1)
{
 execl(a0, a0);
 _exit(127); /* do not return */
 return 0;
}


// Function: sub_402bbf at 0x402bbf
void sub_402bbf()
{
 param_thread_local_storage_constprop_0();
 return;
}


// Function: param_thread_local_storage_constprop_0 at 0x402bc0
unsigned long long param_thread_local_storage_constprop_0()
{
 void* addr; // r12
 void *ptr; // rax
 void *ptrArr; // rax
 unsigned int result; // eax
 void* v13; // r15
 unsigned int v14; // r14d
 unsigned long long j; // r13
 unsigned long long v16; // r13
 unsigned long long v17; // r13
 void* *k; // rbx
 void* *v19; // rbx
 void* *p; // rbp
 unsigned long long i; // rbx
 unsigned long long idx; // rbx
 unsigned long long v8; // rbx
 unsigned long long v9; // r13
 void* v10; // r15
 void* v11; // r15

 addr = malloc(32);
 ptrArr = malloc(32);
 if (!addr)
 return 4294967295;
 p = ptrArr;
 if (ptrArr)
 {
 i = 0;
 do
 {
 idx = i;
 ptr = malloc(16);
 p[idx] = ptr;
 v8 = idx + 1;
 __snprintf_chk(ptr, 16, 1, 16, "Thread-%d", idx & 4294967295);
 i = v8;
 } while (i != 4);
 v9 = 0;
 v10 = addr;
 do
 {
 v11 = v10;
 result = pthread_create(v11, 0, thread_sum, p[v9]);
 if (result)
 {
 k = p;
 do
 {
 v19 = k + 1;
 free(*(k));
 k = v19;
 } while (&p[v9 + 1] != k);
 free(p);
 free(addr);
 return 4294967294;
 }
 } while ((v9 += 1, v13 = v11 + 8, v10 = v11 + 8, v9 != 4));
 v14 = 0;
 j = 0;
 do
 {
 v16 = j;
 pthread_join(((pthread_t *)addr)[j], &ptr);
 *(unsigned int*)ptr += result;
 v14 += *(unsigned int*)((char*)ptr + 4);
 free(ptr);
 v17 = v16 + 8;
 free(p[j]);
 j = v17;
 } while (j != 32);
 free(p);
 free(addr);
 if (result != 400 || v14 != 600)
 return 4294967293;
 return 42;
 }
 return 4294967295;
}


// Function: sub_402d0c at 0x402d0c
void sub_402d0c()
{
}


// Function: sub_402d59 at 0x402d59
void sub_402d59()
{
 param_atomic_ops_constprop_0();
 return;
}


// Function: param_atomic_ops_constprop_0 at 0x402d60
extern unsigned int atomic_counter;

unsigned long long param_atomic_ops_constprop_0()
{
 unsigned long long *ptr; // rax
 unsigned long long *ptr2; // r15
 unsigned long long *v5; // rbx
 unsigned long long *v6; // rbx
 unsigned long long v7; // r13
 unsigned long long v8; // r14
 unsigned long long *v9; // rbx
 unsigned long long *v10; // r12
 unsigned long long *i; // rbp
 unsigned long long *v12; // rbp
 unsigned int v0; // [bp-0x4c]
 unsigned long long v1; // [bp-0x48], Other Possible Types: unsigned long long

 v0 = 500;
 ptr = malloc(32);
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 atomic_exchange(&atomic_counter, 0);
 v5 = ptr;
 v10 = ptr + 4;
 do
 {
 v6 = v5;
 if ((int)pthread_create(v6, 0, thread_atomic_increment, &v0))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v9 = v6 + 8, v5 = v6 + 8, v5 != v10));
 if (!(int)pthread_create(&v1, 0, thread_atomic_load_store, 0))
 pthread_join(v1, 0);
 i = ptr;
 do
 {
 pthread_join(*i, 0);
 i++;
 } while (i != v10);
 free(ptr);
 return (atomic_counter <= 0 ? 4294967293 : 42);
}


// Function: sub_402e5f at 0x402e5f
void sub_402e5f()
{
}


// Function: sub_402e78 at 0x402e78
void sub_402e78()
{
 param_mutex_lock_constprop_0();
 return;
}


// Function: param_mutex_lock_constprop_0 at 0x402e80
extern unsigned int shared_counter;

unsigned long long param_mutex_lock_constprop_0()
{
 unsigned long long *thread_ids; // rax
 unsigned long long *ptr2; // r15
 unsigned long long *j; // rbp
 unsigned long long *v5; // r12
 unsigned long long *v6; // rbx
 unsigned long long *v7; // rbp
 unsigned int v0; // [bp-0x44]

 v0 = 1000;
 thread_ids = malloc(32);
 if (!thread_ids)
 return 4294967295;
 ptr2 = thread_ids;
 j = thread_ids;
 v5 = thread_ids + 4;
 v6 = thread_ids;
 shared_counter = 0;
 while (!(int)pthread_create(v6, 0, thread_increment, &v0))
 {
 v6 += 1;
 if (v6 == v5)
 {
 do
 {
 v7 = j + 1;
 pthread_join(*(j), 0);
 j = v7;
 } while (j != v5);
 free(thread_ids);
 return (v0 * 4 != shared_counter ? 4294967293 : 42);
 }
 }
 free(thread_ids);
 return 4294967294;
}


// Function: sub_402f57 at 0x402f57
void sub_402f57()
{
}


// Function: sub_402f79 at 0x402f79
void sub_402f79(unsigned long a0)
{
 param_strcpy();
 return;
}


// Function: param_strcpy at 0x402f80
int param_strcpy(char *a0, char *a1)
{
 char *result = stpcpy(a0, a1);
 return (unsigned int)((unsigned long long)result - (unsigned long long)a0);
}


// Function: sub_402f91 at 0x402f91
void sub_402f91()
{
 call_strcpy();
 return;
}


// Function: call_strcpy at 0x402fa0
unsigned long long call_strcpy()
{
 return 8;
}


// Function: sub_402faa at 0x402faa
void sub_402faa()
{
 char *s1 = "test";
 char *s2 = "test";
 param_strcmp(s1, s2);
 return;
}


// Function: param_strcmp at 0x402fb0
int param_strcmp(char *a0, char *a1)
{
 int v1; // r8d

 v1 = strcmp(a0, a1);
 return (v1 > 0 ? 1 : -(v1));
}


// Function: sub_402fda at 0x402fda
void sub_402fda()
{
 call_strcmp();
 return;
}


// Function: call_strcmp at 0x402fe0
unsigned long long call_strcmp()
{
 return 0;
}


// Function: sub_402fe7 at 0x402fe7
void sub_402fe7()
{
 param_strlen("test string");
 return;
}


// Function: param_strlen at 0x402ff0
unsigned long param_strlen(char *a0)
{
 return strlen(a0);
}


// Function: sub_403002 at 0x403002
void sub_403002()
{
 call_strlen();
 return;
}


// Function: call_strlen at 0x403010
unsigned long call_strlen()
{
 return 12;
}


// Function: sub_40301a at 0x40301a
void sub_40301a(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_memcpy();
 return;
}


// Function: param_memcpy at 0x403020
int param_memcpy(void* a0, void* a1, unsigned long n)
{
 memcpy(a0, a1, n);
 return n;
}


// Function: sub_403031 at 0x403031
void sub_403031()
{
 call_memcpy();
 return;
}


// Function: call_memcpy at 0x403040
unsigned long long call_memcpy()
{
 return 90;
}


// Function: sub_40304a at 0x40304a
void sub_40304a()
{
 unsigned long v0 = 8589934593;
 unsigned long v1 = 8589934593;
 param_memcmp(&v0, &v1, 12);
 return;
}


// Function: param_memcmp at 0x403050
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned int v1; // r8d

 v1 = memcmp(a0, a1, a2);
 return (v1 > 0 ? 1 : -(v1));
}


// Function: sub_40307a at 0x40307a
void sub_40307a()
{
 call_memcmp();
 return;
}


// Function: call_memcmp at 0x403080
unsigned long long call_memcmp()
{
 unsigned int v7; // eax
 unsigned int v8; // eax
 unsigned long long v0; // [bp-0x50]
 unsigned int v1; // [bp-0x48]
 unsigned long long v2; // [bp-0x40]
 unsigned int v3; // [bp-0x38]
 unsigned long v4; // [bp-0x30]
 unsigned int v5; // [bp-0x28]

 v1 = 3;
 v0 = 8589934593;
 v2 = 8589934593;
 v3 = 4;
 v4 = 8589934593;
 v5 = 3;
 v7 = memcmp(&v0, &v2, 12);
 v8 = memcmp(&v0, &v4, 12);
 return (v8 > 0 ? 1 : (char)-(v8)) + (v7 > 0 ? 1 : (char)-(v7));
}


// Function: sub_40313a at 0x40313a
void sub_40313a(unsigned long a0, unsigned long a1)
{
 param_printf();
 return;
}


// Function: param_printf at 0x403140
int param_printf(unsigned int a0, unsigned long a1)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
}


// Function: sub_40315c at 0x40315c
void sub_40315c()
{
 call_printf();
 return;
}


// Function: call_printf at 0x403160
int call_printf()
{
 return __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
}


// Function: sub_403183 at 0x403183
void sub_403183()
{
 param_scanf("123,456");
 return;
}


// Function: param_scanf at 0x403190
unsigned long long param_scanf(char *a0)
{
 char v0; // [bp-0x18]
 char v1; // [bp-0x14]

 return (__isoc99_sscanf(a0, "%d,%d", &v0, &v1) == 2 ? v1 + v0 : 4294967295);
}


// Function: sub_4031dd at 0x4031dd
void sub_4031dd()
{
}


// Function: sub_4031ec at 0x4031ec
void sub_4031ec()
{
 call_scanf();
 return;
}


// Function: call_scanf at 0x4031f0
unsigned long long call_scanf()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 return (__isoc99_sscanf("123,456", "%d,%d", &v0, &v1) == 2 ? v1 + v0 : 4294967295);
}


// Function: sub_403244 at 0x403244
void sub_403244()
{
}


// Function: sub_403254 at 0x403254
void sub_403254()
{
 param_fopen_fclose("/etc/passwd");
 return;
}


// Function: param_fopen_fclose at 0x403260
typedef struct FILE {
} FILE;

unsigned long long param_fopen_fclose(char *a0)
{
 FILE *fp; // rax
 unsigned int v2; // r12d

 fp = fopen(a0, "r");
 if (!fp)
 return 4294967295;
 v2 = fileno(fp);
 fclose(fp);
 return v2;
}


// Function: sub_4032a3 at 0x4032a3
void sub_4032a3()
{
 call_fopen_fclose();
 return;
}


// Function: call_fopen_fclose at 0x4032b0
unsigned long long call_fopen_fclose()
{
 void* fp; // rax
 unsigned int v2; // eax

 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 v2 = fileno(fp);
 fclose(fp);
 if (v2 >= 0)
 return 42;
 }
 return 4294967295;
}


// Function: sub_4032f7 at 0x4032f7
void sub_4032f7()
{
}


// Function: sub_403307 at 0x403307
void sub_403307(unsigned long a0)
{
 param_fread_fwrite("/tmp/binbench_test_tmp");
 return;
}


// Function: param_fread_fwrite at 0x403310
unsigned long long param_fread_fwrite(char *a0)
{
 void* fp; // rax
 void* v6; // rdi
 unsigned long long count; // rax
 char v0; // [bp-0x48], Other Possible Types: unsigned long long
 unsigned long long v1; // [bp-0x40]
 unsigned short v2; // [bp-0x38]
 char result; // [bp-0x36]

 fp = fopen(a0, "w+");
 if (!fp)
 return 4294967295;
 v6 = fp;
 if (fwrite("BinBench Test Data", 1, 18, fp) != 18)
 {
 fclose(v6);
 return 4294967294;
 }
 rewind(v6);
 count = fread(&v0, 1, 18, v6);
 ((char*)&v0)[count] = 0;
 fclose(v6);
 unlink(a0);
 if (count != 18 || (7008762604619650080 ^ (unsigned long long)v1) || (7521977183824144706 ^ (unsigned long long)v0) || v2 != 24948 || result)
 return 4294967293;
 return 42;
 return 4294967293;
}


// Function: sub_4033e4 at 0x4033e4
void sub_4033e4()
{
}


// Function: sub_4033ff at 0x4033ff
void sub_4033ff()
{
}


// Function: sub_403416 at 0x403416
void sub_403416()
{
 call_fread_fwrite();
 return;
}


// Function: call_fread_fwrite at 0x403420
unsigned long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x403430
unsigned int param_malloc_free(unsigned long a0)
{
 unsigned int *ptr;
 unsigned int sum;

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if (a0 == 0)
 {
 free(ptr);
 return 0;
 }
 if (a0 == 1)
 {
 ptr[0] = 0;
 free(ptr);
 return 0;
 }
 if (a0 == 2)
 {
 ptr[0] = 0;
 ptr[1] = 10;
 free(ptr);
 return 10;
 }
 for (unsigned long i = 0; i < a0; i++)
 {
 ptr[i] = i * 10;
 }
 sum = ptr[0] + ptr[a0 - 1];
 free(ptr);
 return sum;
}


// Function: sub_403532 at 0x403532
void sub_403532()
{
 call_malloc_free();
 return;
}


// Function: call_malloc_free at 0x403540
unsigned long long call_malloc_free()
{
 void* ptr; // rax

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return 90;
}


// Function: sub_40356e at 0x40356e
void sub_40356e(unsigned long a0, unsigned long a1)
{
 unsigned char buf[16];
 param_memset(buf, a1, sizeof(buf));
 return;
}


// Function: param_memset at 0x403570
unsigned long long param_memset(void* a0, int a1, unsigned long a2)
{
 unsigned long long *dst; // rax
 unsigned long long *v2; // rcx
 unsigned long long *ptr2; // rdi
 unsigned long long v11; // rax
 unsigned long long v12; // rax
 unsigned long long v13; // rax
 unsigned long long v14; // rax
 unsigned long long v15; // rax
 unsigned long long v16; // rax
 unsigned long long v17; // rax
 unsigned long long v18; // rax
 unsigned long long v19; // rax
 unsigned long long v20; // rax
 unsigned long long v3; // xmm0
 unsigned long long v21; // rax
 unsigned long long v22; // rax
 unsigned long long v23; // rax
 unsigned long long v24; // rax
 unsigned long long *ptr; // rax
 unsigned long long *v5; // rax
 int v6; // xmm1
 int v7; // xmm2
 unsigned long long v8; // rdx
 int v9; // xmm0
 unsigned long long v10; // rax

 dst = memset(a0, a1, a2);
 if (!a2)
 return 0;
 v2 = dst;
 if (a2 - 1 > 14)
 {
 v3 = 0;
 ptr = v2;
 do
 {
 v5 = ptr + 1;
 v6 = *(unsigned short *)(ptr);
 v7 = *(unsigned short *)(ptr + 2);
 v3 = v3 + (v7 & 0xFFFF) + (v7 >> 16) + (v6 & 0xFFFF) + (v6 >> 16);
 ptr = v5;
 } while (ptr != (a2 & 0xfffffffffffffff0) + (char *)v2);
 v8 = a2 & 0xfffffffffffffff0;
 v9 = v3 + ((v3 >> 32) & 0xFFFFFFFF);
 v10 = v9 + ((v9 >> 64) & 0xFFFFFFFF);
 if (!((char)a2 & 15))
 return v10;
 }
 else
 {
 v8 = 0;
 v10 = 0;
 }
 v11 = v10 + *((char *)v2 + v8);
 if (a2 <= v8 + 1)
 return v11;
 v12 = v11 + *(1 + (char *)v2 + v8);
 if (a2 <= v8 + 2)
 return v12;
 v13 = v12 + *(2 + (char *)v2 + v8);
 if (a2 <= v8 + 3)
 return v13;
 v14 = v13 + *(3 + (char *)v2 + v8);
 if (a2 <= v8 + 4)
 return v14;
 v15 = v14 + *(4 + (char *)v2 + v8);
 if (a2 <= v8 + 5)
 return v15;
 v16 = v15 + *(5 + (char *)v2 + v8);
 if (a2 <= v8 + 6)
 return v16;
 v17 = v16 + *(6 + (char *)v2 + v8);
 if (a2 <= v8 + 7)
 return v17;
 v18 = v17 + *(7 + (char *)v2 + v8);
 if (a2 <= v8 + 8)
 return v18;
 v19 = v18 + *(8 + (char *)v2 + v8);
 if (a2 <= v8 + 9)
 return v19;
 v20 = v19 + *(9 + (char *)v2 + v8);
 if (a2 <= v8 + 10)
 return v20;
 v21 = v20 + *(10 + (char *)v2 + v8);
 if (a2 <= v8 + 11)
 return v21;
 v22 = v21 + *(11 + (char *)v2 + v8);
 if (a2 <= v8 + 12)
 return v22;
 v23 = v22 + *(12 + (char *)v2 + v8);
 if (a2 <= v8 + 13)
 return v23;
 v24 = v23 + *(13 + (char *)v2 + v8);
 if (a2 <= v8 + 14)
 return v24;
 return v24 + *(14 + (char *)v2 + v8);
}


// Function: sub_403727 at 0x403727
void sub_403727()
{
}


// Function: sub_40373d at 0x40373d
void sub_40373d()
{
 call_memset();
 return;
}


// Function: call_memset at 0x403740
unsigned long long call_memset()
{
 return 0;
}


// Function: sub_403747 at 0x403747
void sub_403747(unsigned long a0, char a1, unsigned long a2)
{
 param_strchr_strstr((char *)a0, a1, (char *)a2);
 return;
}


// Function: param_strchr_strstr at 0x403750
long long param_strchr_strstr(char *a0, int a1, char *a2)
{
 unsigned long long ptr1; // rax
 unsigned long long ptr2; // rax

 ptr1 = (unsigned long long)strchr(a0, a1);
 ptr2 = (unsigned long long)strstr(a0, a2);
 return (!ptr1 ? 4294967295ULL : (ptr1 - (unsigned long long)a0) & 4294967295ULL) + (ptr2 ? (ptr2 - (unsigned long long)a0) & 4294967295ULL : 4294967295ULL);
}


// Function: sub_4037a8 at 0x4037a8
void sub_4037a8()
{
 call_strchr_strstr();
 return;
}


// Function: call_strchr_strstr at 0x4037b0
unsigned long long call_strchr_strstr()
{
 return 15;
}


// Function: sub_4037ba at 0x4037ba
void sub_4037ba()
{
 test_standard_library_functions();
 return;
}


// Function: test_standard_library_functions at 0x4037c0
extern char g_405071;
extern char g_40508c;
extern char g_4050a7;
extern char g_4050c3;
extern char g_4050df;
extern char g_4050fb;
extern char g_405117;
extern char g_405134;
extern char g_405150;
extern char g_40516c;
extern char g_405188;
extern char g_4051a3;
extern char g_405390;

long long test_standard_library_functions()
{
 unsigned int v9; // eax
 unsigned int v10; // eax
 void* fp; // rax
 unsigned int v14; // eax
 unsigned long long v15; // rdx
 void* ptr; // rax
 unsigned long long v18; // rdx
 unsigned int v0; // [bp-0x58]
 unsigned int v1; // [bp-0x54]
 unsigned long long v2; // [bp-0x50]
 unsigned int v3; // [bp-0x48]
 unsigned long long v4; // [bp-0x40]
 unsigned int v5; // [bp-0x38]
 unsigned long v6; // [bp-0x30]
 unsigned int v7; // [bp-0x28]

 puts(&g_405390);
 __printf_chk(1, &g_405071, 8);
 __printf_chk(1, &g_40508c, 0);
 __printf_chk(1, &g_4050a7, 12);
 __printf_chk(1, &g_4050c3, 90);
 v3 = 3;
 v2 = 8589934593;
 v4 = 8589934593;
 v5 = 4;
 v6 = 8589934593;
 v7 = 3;
 v9 = memcmp(&v2, &v4, 12);
 v10 = memcmp(&v2, &v6, 12);
 __printf_chk(1, &g_4050df, (v10 > 0 ? 1 : -(v10)) + (v9 > 0 ? 1 : -(v9)));
 __printf_chk(1, &g_4050fb, __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test") & 4294967295ULL);
 __printf_chk(1, &g_405117, (__isoc99_sscanf("123,456", "%d,%d", &v0, &v1) == 2 ? v1 + v0 : 4294967295));
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 v14 = fileno(fp);
 fclose(fp);
 v15 = 42;
 if (v14 >= 0)
 goto LABEL_403987;
 }
 v15 = 4294967295;
LABEL_403987:
 __printf_chk(1, &g_405134, v15);
 __printf_chk(1, &g_405150, param_fread_fwrite("/tmp/binbench_test_tmp") & 4294967295ULL);
 ptr = malloc(40);
 if (ptr)
 {
 free(ptr);
 v18 = 90;
 }
 else
 {
 v18 = 4294967295;
 }
 __printf_chk(1, &g_40516c, v18);
 __printf_chk(1, &g_405188, 0);
 return __printf_chk(1, &g_4051a3, 15);
}


// Function: sub_403a4b at 0x403a4b
void sub_403a4b(unsigned long a0)
{
 param_linux_syscall();
 return;
}


// Function: param_linux_syscall at 0x403a50
int param_linux_syscall(unsigned long a0)
{
 unsigned int v1; // eax

 v1 = syscall(2);
 if (v1 < 0)
 return -(*(__errno_location()));
 syscall(3);
 return v1;
}


// Function: sub_403a82 at 0x403a82
void sub_403a82()
{
}


// Function: sub_403a99 at 0x403a99
void sub_403a99()
{
 call_linux_syscall();
 return;
}


// Function: call_linux_syscall at 0x403aa0
unsigned long long call_linux_syscall()
{
 if ((int)syscall(2) < 0)
 {
 int errno_val = *__errno_location();
 return (errno_val > 0 ? 4294967295 : 42);
 }
 syscall(3);
 return 42;
}


// Function: sub_403ad9 at 0x403ad9
void sub_403ad9()
{
}


// Function: sub_403afb at 0x403afb
void sub_403afb()
{
 param_win32_api();
 return;
}


// Function: param_win3232_api at 0x403b00
unsigned long long param_win32_api()
{
 unsigned long long v0; // [bp-0x78]
 struct stat st;
 
 return (stat("/etc/passwd", &st) < 0 ? 4294967295 : (v0 <= 0 ? 4294967294 : 42));
}


// Function: sub_403b64 at 0x403b64
void sub_403b64()
{
 call_win32_api();
 return;
}


// Function: call_win32_api at 0x403b70
unsigned long long call_win32_api()
{
 struct stat v0; // [bp-0xa8]
 unsigned long long v1; // [bp-0x78]

 return ((int)stat("/etc/passwd", &v0) < 0 ? 4294967295 : (v1 <= 0 ? 4294967294 : 42));
}


// Function: sub_403bdb at 0x403bdb
void sub_403bdb(unsigned long a0, unsigned long a1)
{
 param_fork_exec();
 return;
}


// Function: param_fork_exec at 0x403be0
unsigned unsigned long long param_fork_exec(char *a0, unsigned int a1)
{
 unsigned int result; // eax
 unsigned long v3; // rdx
 int v0; // [bp-0x24]
 int *v0_ptr = &v0;

 result = fork();
 if (result < 0)
 {
 return 4294967295ULL;
 }
 else if (!result)
 {
 param_fork_exec_part_0(a0, a1); /* do not return */
 }
 else if (waitpid(result, v0_ptr, 0) >= 0)
 {
 v3 = v0;
 return (((unsigned int)v3 & 127) ? 4294967293ULL : (v3 >> 8) & 4294967295ULL);
 }
 else
 {
 return 4294967294ULL;
 }
}


// Function: sub_403c68 at 0x403c68
void sub_403c68()
{
 call_fork_exec();
 return;
}


// Function: call_fork_exec at 0x403c70
unsigned long long call_fork_exec(char *a0, unsigned int a1)
{
 unsigned int result; // eax
 unsigned long v3; // rax
 int v0; // [bp-0x14]
 int *v0_ptr = &v0;

 result = fork();
 if (result >= 0)
 {
 if (!result)
 {
 param_fork_exec_part_0(a0, a1); /* do not return */
 }
 else if (waitpid(result, v0_ptr, 0) >= 0)
 {
 v3 = (unsigned long long)v0;
 if (!((char)v3 & 127) && !(char)(v3 >> 8))
 return 42ULL;
 }
 }
 return 4294967295ULL;
}


// Function: sub_403cc7 at 0x403cc7
void sub_403cc7()
{
}


// Function: sub_403cef at 0x403cef
void sub_403cef()
{
 param_pipe_communication();
 return;
}


// Function: param_pipe_communication at 0x403cf0
unsigned long long param_pipe_communication(void)
{
 unsigned int result; // eax
 unsigned long long count; // rax
 int pipefds[2];
 char v2; // [bp-0x38]

 if (pipe(pipefds) < 0)
 return 4294967295ULL;
 result = fork();
 if (result < 0)
 {
 return 4294967294ULL;
 }
 else if (!result)
 {
 close(pipefds[0]);
 write(pipefds[1], "HelloPipe", 9);
 close(pipefds[1]);
 _exit(0); /* do not return */
 }
 else
 {
 close(pipefds[1]);
 count = read(pipefds[0], &v2, 31);
 ((char*)&v2)[count] = 0;
 close(pipefds[0]);
 wait(NULL);
 return (count <= 0 ? 4294967293ULL : 42ULL);
 }
}


// Function: sub_403d58 at 0x403d58
void sub_403d58()
{
}


// Function: sub_403dba at 0x403dba
void sub_403dba()
{
}


// Function: sub_403dd3 at 0x403dd3
void sub_403dd3()
{
 call_pipe_communication();
 return;
}


// Function: call_pipe_communication at 0x403de0
unsigned long long call_pipe_communication(void)
{
 return param_pipe_communication();
}


// Function: sub_403de9 at 0x403de9
void sub_403de9()
{
 param_socket_create();
 return;
}


// Function: param_socket_create at 0x403df0
typedef struct sockaddr {
 unsigned short sin_family;
 char sa_data[14];
} sockaddr;

unsigned long long param_socket_create(void)
{
 unsigned int v4; // eax
 unsigned int v5; // ebp
 unsigned int v6; // edi
 unsigned int result; // [bp-0x2c]
 sockaddr v1; // [bp-0x28]

 v4 = socket(2, 1, 0);
 if (v4 < 0)
 return 4294967295;
 v5 = v4;
 result = 1;
 if (setsockopt(v4, 1, 2, &result, 4) < 0)
 {
 close(v5);
 return 4294967294;
 }
 *((unsigned long long *)&v1.sin_family) = 0;
 v1.sin_family = 2;
 if (bind(v5, &v1, 16) < 0)
 {
 close(v5);
 return 4294967293;
 }
 v6 = v5;
 if (listen(v5, 5) < 0)
 {
 close(v6);
 return 0xfffffffc;
 }
 close(v6);
 return 42;
}


// Function: sub_403eaa at 0x403eaa
void sub_403eaa()
{
}


// Function: sub_403eb7 at 0x403eb7
void sub_403eb7()
{
}


// Function: sub_403eed at 0x403eed
void sub_403eed()
{
 call_socket_create();
 return;
}


// Function: call_socket_create at 0x403ef0
unsigned long long call_socket_create()
{
 return param_socket_create();
}


// Function: sub_403ef9 at 0x403ef9
void sub_403ef9()
{
 param_shmget_shmat();
 return;
}


// Function: param_shmget_shmat at 0x403f00
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned int field_8;
 char field_c;
} struct_0;

unsigned long long param_shmget_shmat()
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 struct_0 *ptr; // rdi

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
 if (ptr == 0xffffffffffffffff)
 return 4294967293;
 ptr->field_8 = 2037542765;
 ptr->field_0 = 7299600957910902867;
 ptr->field_c = 0;
 shmdt(ptr);
 shmctl(v3, 0, 0);
 return 12;
}


// Function: sub_403f96 at 0x403f96
void sub_403f96()
{
}


// Function: sub_403fa7 at 0x403fa7
void sub_403fa7()
{
}


// Function: sub_403fbe at 0x403fbe
void sub_403fbe()
{
 call_shmget_shmat();
 return;
}


// Function: call_shmget_shmat at 0x403fc0
unsigned long long call_shmget_shmat()
{
 return ((unsigned int)param_shmget_shmat() <= 0 ? 4294967295 : 42);
}


// Function: sub_403fe1 at 0x403fe1
void sub_403fe1()
{
 param_signal_handling();
 return;
}


// Function: param_signal_handling at 0x403ff0
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned long long param_signal_handling()
{
 unsigned int v1; // ebx
 unsigned int result; // ebx
 unsigned int v3; // ebx
 unsigned int v4; // ebx
 unsigned int flag1; // ebx
 unsigned int v6; // ebx

 if ((long long)signal(10, signal_handler) == -1)
 {
 return 4294967295;
 }
 else if ((long long)signal(14, signal_handler) != -1)
 {
 signal_received = 0;
 raise(10);
 if (!signal_received)
 {
 v1 = 1000;
 do
 {
 result = v1;
 usleep(1000);
 } while (!signal_received && (v3 = result - 1, v1 = result - 1, result != 1));
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
 flag1 = v4;
 usleep(1000);
 } while (!signal_received && (v6 = flag1 - 1, v4 = flag1 - 1, flag1 != 1));
 }
 if (!signal_received || signal_number != 14)
 return 4294967291;
 signal(10, NULL);
 signal(14, NULL);
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


// Function: sub_404054 at 0x404054
void sub_404054()
{
}


// Function: sub_4040af at 0x4040af
void sub_4040af()
{
}


// Function: sub_404125 at 0x404125
void sub_404125()
{
 call_signal_handling();
 return;
}


// Function: call_signal_handling at 0x404130
unsigned long long call_signal_handling()
{
 return param_signal_handling();
}


// Function: sub_404139 at 0x404139
void sub_404139()
{
 test_system_calls();
 return;
}


// Function: test_system_calls at 0x404140
extern char g_4051e5;
extern char g_405200;
extern char g_40521c;
extern char g_405238;
extern char g_405254;
extern char g_405270;
extern char g_40528c;
extern char g_4052a8;

long long test_system_calls()
{
 unsigned long long v4; // rdx
 unsigned int result; // eax
 unsigned long v7; // rax
 unsigned long long v8; // rdx
 unsigned long long v12; // rdx
 int v0; // [bp-0xac]
 int *v0_ptr = &v0;
 struct stat v1; // [bp-0xa8]

 puts(&g_4051e5);
 if ((int)syscall(2) >= 0)
 {
 syscall(3);
 v4 = 42;
 }
 else
 {
 v4 = (*(__errno_location()) > 0 ? 4294967295ULL : 42ULL);
 }
 __printf_chk(1, &g_405200, v4);
 __printf_chk(1, &g_40521c, ((int)stat("/etc/passwd", &v1) < 0 ? 4294967295ULL : 42ULL));
 result = fork();
 if (result >= 0)
 {
 if (!result)
 param_fork_exec_part_0("/bin/true", 0); /* do not return */
 if (waitpid(result, v0_ptr, 0) < 0 || (v7 = (unsigned long long)v0, ((char)v0 & 127) || (char)(v0 >> 8)))
 goto LABEL_404219;
 v8 = 42ULL;
 }
 else
{
LABEL_404219:
 v8 = 4294967295ULL;
 }
 __printf_chk(1, &g_405238, v8);
 __printf_chk(1, &g_405254, param_pipe_communication() & 4294967295ULL);
 __printf_chk(1, &g_405270, param_socket_create() & 4294967295ULL);
 v12 = ((unsigned int)param_shmget_shmat() <= 0 ? 4294967295ULL : 42ULL);
 __printf_chk(1, &g_40528c, v12);
 return __printf_chk(1, &g_4052a8, param_signal_handling() & 4294967295ULL);
}


// Function: sub_4042c1 at 0x4042c1
void sub_4042c1()
{
}


// Function: sub_4042db at 0x4042db
void sub_4042db()
{
}


// Function: sub_404318 at 0x404318
void sub_404318(unsigned long a0)
{
 param_pthread_create();
 return;
}


// Function: param_pthread_create at 0x404320
unsigned long long param_pthread_create(unsigned int a0)
{
 unsigned int v0; // [bp-0x24]
 unsigned long long v1; // thread handle
 void *v2; // [bp-0x18], Other Possible Types: char
 unsigned int *v2_ptr; // to store the result

 v0 = a0;
 if ((int)pthread_create(&v1, 0, thread_compute, &v0))
 return 4294967295;
 pthread_join(v1, &v2);
 v2_ptr = (unsigned int *)v2;
 if (v2_ptr) {
 unsigned int result = *v2_ptr;
 free(v2_ptr);
 return result;
 }
 return 4294967295;
}


// Function: sub_40439d at 0x40439d
void sub_40439d()
{
 call_pthread_create();
 return;
}


// Function: call_pthread_create at 0x4043a0
unsigned long long call_pthread_create()
{
 unsigned int v0; // [bp-0x24]
 char v1; // [bp-0x20], Other Possible Types: unsigned long long
 void *v2; // [bp-0x18], Other Possible Types: char

 v0 = 7;
 if ((int)pthread_create(&v1, 0, thread_compute, &v0))
 return 4294967295;
 pthread_join(v1, &v2);
 if (v2) {
 unsigned int result = *(unsigned int *)v2;
 free(v2);
 return result;
 }
 return 4294967295;
}


// Function: sub_404414 at 0x404414
void sub_404414()
{
}


// Function: sub_404425 at 0x404425
void sub_404425()
{
 param_pthread_join();
 return;
}


// Function: param_pthread_join at 0x404430
unsigned long long param_pthread_join()
{
 char *v6; // rbx
 char *v7; // rbp
 unsigned int flag1; // eax
 unsigned long long v9; // rbx
 unsigned long long idx; // rbx
 unsigned long long v11; // rbx
 char v0; // [bp-0x88]
 char v1; // [bp-0x68], Other Possible Types: unsigned long long
 unsigned long long v2; // [bp-0x58]
 unsigned int result; // [bp-0x48]
 char v4; // [bp-0x44]

 v6 = &v1;
 v1 = 871509787656907713571933126657;
 v7 = &v0;
 result = 0;
 v2 = 2376844875815311753354219094036;
 while (1)
 {
 flag1 = pthread_create(v7, 0, thread_sum, v6);
 if (flag1)
 return 4294967295;
 v6 += 12;
 v7 += 8;
 if (&v4 == v6)
 {
 v9 = 0;
 while (true)
 {
 idx = v9;
 if ((int)pthread_join(((unsigned long long *)&v0)[idx], 0))
 return 4294967294;
 v11 = idx + 1;
 ((int *)&v1)[idx * 3] += flag1;
 v9 = v11;
 if (v9 == 3)
 return flag1;
 }
 }
 }
}


// Function: sub_4044fb at 0x4044fb
void sub_4044fb()
{
}


// Function: sub_404508 at 0x404508
void sub_404508()
{
}


// Function: sub_40451d at 0x40451d
void sub_40451d()
{
 call_pthread_join();
 return;
}


// Function: call_pthread_join at 0x404520
unsigned long long call_pthread_join()
{
 return param_pthread_join();
}


// Function: sub_40452b at 0x40452b
void sub_40452b(unsigned long a0, unsigned long a1)
{
 param_mutex_lock();
 return;
}


// Function: param_mutex_lock at 0x404530
extern unsigned int shared_counter;

unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned long v3; // rdi
 unsigned long long *thread_ids; // rax
 unsigned long long *v6; // rax
 unsigned long long *v7; // rbp
 unsigned long long *v8; // r15
 unsigned long long *v9; // r15
 unsigned long long *v10; // r15
 unsigned long long *i; // rbx
 unsigned long long *v12; // rbx
 unsigned int v0; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]

 v3 = a0;
 v0 = v3;
 v1 = a1;
 thread_ids = malloc(v3 * 8);
 if (!thread_ids)
 return 4294967295;
 shared_counter = 0;
 v6 = v3 & 4294967295;
 if ((unsigned int)v6 > 0)
 {
 v7 = &thread_ids[v6];
 v8 = thread_ids;
 do
 {
 v9 = v8;
 if ((int)pthread_create(v9, 0, thread_increment, &v1))
 {
 free(thread_ids);
 return 4294967294;
 }
 } while ((v10 = v9 + 8, v8 = v9 + 8, v8 != v7));
 i = thread_ids;
 do
 {
 v12 = i + 1;
 pthread_join(*(unsigned long long *)i, 0);
 i = v12;
 } while (i != v7);
 }
 free(thread_ids);
 return (shared_counter != v1 * v0 ? 4294967293 : 42);
}


// Function: sub_40458d at 0x40458d
void sub_40458d()
{
}


// Function: sub_4045c9 at 0x4045c9
void sub_4045c9()
{
}


// Function: call_mutex_lock at 0x404620
unsigned long long call_mutex_lock()
{
 return param_mutex_lock_constprop_0();
}


// Function: sub_404629 at 0x404629
void sub_404629()
{
 param_condition_variable();
 return;
}


// Function: param_condition_variable at 0x404630
extern unsigned int data;
extern unsigned int ready;

unsigned long long param_condition_variable()
{
 unsigned long long v0;
 unsigned long long v1;
 void *v2;

 ready = 0;
 data = 0;
 if ((int)pthread_create(&v1, 0, consumer_thread, 0))
 {
 return 4294967295;
 }
 else if (!(int)pthread_create(&v0, 0, producer_thread, 0))
 {
 pthread_join(v1, &v2);
 pthread_join(v0, 0);
 free(v2);
 return 42;
 }
 else
 {
 pthread_cancel(v1);
 return 4294967294;
 }
}


// Function: sub_4046cf at 0x4046cf
void sub_4046cf()
{
}


// Function: sub_4046d8 at 0x4046d8
void sub_4046d8()
{
}


// Function: sub_4046f7 at 0x4046f7
void sub_4046f7()
{
 call_condition_variable();
 return;
}


// Function: call_condition_variable at 0x404700
unsigned long long call_condition_variable()
{
 return param_condition_variable();
}


// Function: sub_40470b at 0x40470b
void sub_40470b(unsigned long a0, unsigned long a1)
{
 param_atomic_ops();
 return;
}


// Function: param_atomic_ops at 0x404710
extern unsigned int atomic_counter;

unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned long v3; // rdi
 unsigned int i; // r12d
 void* thread_ids; // rax
 void* v7; // rbx
 void* v8; // rbx
 void* v9; // rbx
 unsigned long long v10; // rbx
 unsigned long long v11; // rbx
 unsigned long long v12; // rax
 unsigned int v0; // [bp-0x4c]
 char v1; // [bp-0x48], Other Possible Types: unsigned long long

 v3 = a0;
 i = v3;
 v0 = a1;
 thread_ids = malloc(v3 * 8);
 if (!thread_ids)
 return 4294967295;
 atomic_exchange(&atomic_counter, 0);
 if (i > 0)
 {
 v7 = thread_ids;
 do
 {
 v8 = v7;
 if ((int)pthread_create(v8, 0, thread_atomic_increment, &v0))
 {
 free(thread_ids);
 return 4294967294;
 }
 } while ((v9 = v8 + 8, v7 = v8 + 8, v7 != thread_ids + (unsigned long long)i * 8));
 if (!(int)pthread_create(&v1, 0, thread_atomic_load_store, 0))
 pthread_join(v1, 0);
 v10 = 0;
 do
 {
 v11 = v10 + 1;
 pthread_join(*((unsigned long long *)((char *)thread_ids + 8 * v10)), 0);
 v10 = v11;
 } while (i > (unsigned int)v10);
 }
 else if (!(int)pthread_create(&v1, 0, thread_atomic_load_store, 0))
 {
 pthread_join(v1, 0);
 }
 free(thread_ids);
 if (atomic_counter <= 0)
 v12 = 4294967293;
 else
 v12 = 42;
 return v12;
}


// Function: sub_40477b at 0x40477b
void sub_40477b()
{
}


// Function: sub_4047cd at 0x4047cd
void sub_4047cd()
{
}


// Function: sub_404824 at 0x404824
void sub_404824()
{
}


// Function: sub_40486a at 0x40486a
void sub_40486a()
{
 call_atomic_ops();
 return;
}


// Function: call_atomic_ops at 0x404870
unsigned long long call_atomic_ops()
{
 return param_atomic_ops_constprop_0();
}


// Function: sub_404879 at 0x404879
void sub_404879(unsigned long a0)
{
 param_thread_local_storage();
 return;
}


// Function: param_thread_local_storage at 0x404880
long long unsigned int param_thread_local_storage(unsigned int a0)
{
 unsigned long v4; // rbx
 unsigned long long v5; // rbp
 void* v14; // r15
 unsigned int result; // eax
 void* v16; // r15
 void* *k; // rbx
 void* *v18; // rbx
 unsigned int v19; // r13d
 unsigned long long j; // r15
 unsigned long long v21; // r15
 unsigned long long v22; // r15
 void* *ptrArr; // rax
 void* *p; // rbp
 unsigned long long i; // r13
 unsigned long long idx; // r13
 void *retval; // rax
 unsigned long long v11; // r13
 unsigned long long v12; // r12
 void* v13; // r15
 void* addr; // [bp-0x58]
 unsigned int v1; // [bp-0x4c]
 unsigned int ptrArrData[2]; // [bp-0x48]

 v4 = a0;
 v5 = v4 * 8;
 v1 = v4;
 addr = malloc(v5);
 ptrArr = malloc(v5);
 if (!addr)
 return 4294967295;
 p = ptrArr;
 if (ptrArr)
 {
 if (v1 > 0)
 {
 i = 0;
 do
 {
 idx = i;
 ptrArr = malloc(16);
 p[idx] = ptrArr;
 v11 = idx + 1;
 __snprintf_chk(ptrArr, 16, 1, 16, "Thread-%d", idx & 4294967295);
 i = v11;
 } while (i != v1);
 v12 = 0;
 v13 = addr;
 do
 {
 v14 = v13;
 result = pthread_create(v14, 0, thread_tls_test, p[v12]);
 if (result)
 {
 k = p;
 do
 {
 v18 = k + 1;
 free(*(k));
 k = v18;
 } while (&p[v12 + 1] != k);
 free(p);
 free(addr);
 return 4294967294;
 }
 } while ((v12 += 1, v16 = v14 + 8, v13 = v14 + 8, v12 != (unsigned long long)v1));
 v19 = 0;
 j = 0;
 do
 {
 v21 = j;
 pthread_join(((pthread_t *)addr)[v21], &retval);
 *(unsigned int*)retval += result;
 v19 += *(unsigned char*)((char *)retval + 1);
 free(retval);
 v22 = v21 + 1;
 free(p[v21]);
 j = v22;
 } while (j != (unsigned long)v1);
 }
 else
 {
 v19 = 0;
 result = 0;
 }
 free(p);
 free(addr);
 if (v1 * 100 != result || v1 * 150 != v19)
 return 4294967293;
 return 42;
 }
 return 4294967295;
}


// Function: sub_404937 at 0x404937
void sub_404937()
{
}


// Function: sub_4049ba at 0x4049ba
void sub_4049ba()
{
}


// Function: sub_404a37 at 0x404a37
void sub_404a37()
{
}


// Function: sub_404a5f at 0x404a5f
void sub_404a5f()
{
 call_thread_local_storage();
 return;
}


// Function: call_thread_local_storage at 0x404a60
unsigned long long call_thread_local_storage()
{
 return param_thread_local_storage_constprop_0();
}


// Function: sub_404a69 at 0x404a69
void sub_404a69()
{
 test_thread_concurrency();
 return;
}


// Function: test_thread_concurrency at 0x404a70
extern char g_4052c4;
extern char g_4052e2;
extern char g_4052fe;
extern char g_40531b;
extern char g_405337;
extern char g_405353;
extern char g_40536f;

long long test_thread_concurrency()
{
 unsigned int v4; // r12d
 unsigned int v0; // [bp-0x24]
 char v1; // [bp-0x20], Other Possible Types: unsigned long long
 unsigned int *ptr; // [bp-0x18], Other Possible Types: char

 puts(&g_4052c4);
 v0 = 7;
 if (!(int)pthread_create(&v1, 0, thread_compute, &v0))
 {
 pthread_join((pthread_t)v1, &ptr);
 if (ptr) {
 v4 = *(unsigned int *)ptr;
 free(ptr);
 } else {
 v4 = 4294967295;
 }
 }
 else
 {
 v4 = 4294967295;
 }
 __printf_chk(1, &g_4052e2, v4);
 __printf_chk(1, &g_4052fe, param_pthread_join() & 4294967295);
 __printf_chk(1, &g_40531b, param_mutex_lock_constprop_0() & 4294967295);
 __printf_chk(1, &g_405337, param_condition_variable() & 4294967295);
 __printf_chk(1, &g_405353, param_atomic_ops_constprop_0() & 4294967295);
 return __printf_chk(1, &g_40536f, param_thread_local_storage_constprop_0() & 4294967295);
}


// Function: sub_404b8c at 0x404b8c
void sub_404b8c()
{
}



/* CRT stub function _fini removed by preprocessor */


