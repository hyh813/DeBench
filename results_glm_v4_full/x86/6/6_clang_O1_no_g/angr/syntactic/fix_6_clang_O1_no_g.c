// Angr Decompilation of 6_clang_O1_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <signal.h>
#include <errno.h>
#include <pthread.h>
#include <sys/wait.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <time.h>
#include <sys/stat.h>
#include <stdio_ext.h>

/* bcmp compatibility function */
int bcmp(const void *s1, const void *s2, size_t n) {
    return memcmp(s1, s2, n);
}

/* CRT stub function _init removed by preprocessor */
struct struct_0 {
    unsigned int padding_0[256];
};

extern void (*g_406ff4)(void);

// Global variables
unsigned int signal_number = 0;
unsigned int signal_received = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
unsigned int shared_counter = 0;
char data = 0;
char ready = 0;
pthread_t g_thread_i;  // pthread_t for thread operations
unsigned int atomic_counter = 0;

// errno location function (glibc)
int *__errno_location(void);

// x86 get pc thunk
unsigned int __x86_get_pc_thunk_dx(void);

// Dummy _ccall function
int _ccall(int a, int b, int c, int d, int e) {
    return 0;
}

// Forward declarations
int frame_dummy(void);
int deregister_tm_clones(void);
unsigned int register_tm_clones(void);
unsigned int __do_global_dtors_aux(void);
unsigned int __do_global_ctors_aux(void);
void signal_handler(int sig);
int param_strcpy(char *a0, char *a1);
unsigned int param_strcmp(char *a0, char *a1);
int param_strlen(char *a0);
int param_memcpy(void* a0, void* a1, unsigned int n);
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2);
int param_printf(unsigned int a0, unsigned int a1);
unsigned int param_scanf(char *a0);
int param_fopen_fclose(char *a0);
int param_fread_fwrite(char *a0);
int param_malloc_free(unsigned int i);
int param_memset(void* a0, unsigned int n);
unsigned int param_strchr_strstr(char *a0, char a1, char *a2);
int test_standard_library_functions(void);
int param_linux_syscall(unsigned int a0);
int param_win32_api(unsigned int a0);
int param_fork_exec(char *a0, unsigned int a1);
int param_pipe_communication(void);
int param_socket_create(void);
int param_shmget_shmat(void);
int param_signal_handling(void);
unsigned int * thread_compute(void *a0);
unsigned int param_pthread_create(void);
int thread_sum(void *ptr);
unsigned int param_pthread_join(void);
int thread_increment(void *ptr);
unsigned int param_mutex_lock(unsigned int a0, unsigned int a1);
unsigned int * consumer_thread(void);
int producer_thread(void *unused);
int param_condition_variable(void);
int thread_atomic_increment(void *a0);
int thread_atomic_load_store(void *unused);
int param_atomic_ops(unsigned int i);
unsigned int *thread_tls_test(void *a0);
int param_thread_local_storage(unsigned int i);
int test_thread_concurrency(void);
int sub_401030(void);
int sub_4013e0(void *ptr);
void sub_4013e6(void);
int sub_401561(void);
int sub_4015a3(void);
unsigned int sub_4015e6(void);
void sub_40162b(void);
int sub_401633(void);
void sub_401661(void);
void sub_4016af(void);
unsigned int sub_4016b6(void);
int sub_4016ff(void);
int sub_401762(void);
int sub_4017cd(void);
int sub_401812(void);
int sub_40186a(void);
int call_strcpy(void);
unsigned int call_strcmp(void);
unsigned int call_strlen(void);
unsigned int call_memcpy(void);
int call_memcmp(void);
int call_printf(void);
unsigned int call_scanf(void);
unsigned int call_fopen_fclose(void);
unsigned int call_fread_fwrite(void);
unsigned int call_malloc_free(void);
unsigned int call_memset(void);
unsigned int call_strchr_strstr(void);
unsigned int call_linux_syscall(void);
unsigned int call_win32_api(void);
unsigned int call_fork_exec(void);
unsigned int call_pipe_communication(void);
unsigned int call_socket_create(void);
unsigned int call_shmget_shmat(void);
unsigned int call_signal_handling(void);
int test_system_calls(void);
unsigned int call_pthread_create(void);
unsigned int call_pthread_join(void);
unsigned int call_mutex_lock(void);
int call_condition_variable(void);
unsigned int call_atomic_ops(void);
unsigned int call_thread_local_storage(void);
int sub_401918(void);
unsigned int sub_4019fe(void);
int sub_401a23(void);
int sub_401a8a(void);
int sub_401ae9(void);
void sub_401b35(void);
int sub_401b65(void);
void sub_401bca(void);
int sub_401bd6(void);
int sub_401e54(void);
int sub_401ea9(void);
int sub_401f02(void);
int sub_401f55(void);
int sub_401fa8(void);
int sub_402021(void);
int sub_4020a8(void);
int sub_402188(void);
int sub_4021aa(void);
int sub_402296(void);
int sub_4022ba(void);
int sub_4023a2(void);
int sub_4023d9(void);
int sub_402561(void);
int sub_40258a(void);
int sub_402719(void);
unsigned int sub_40274c(void);
unsigned int sub_4027bb(void);
void sub_40282b(unsigned int *a0);
unsigned int sub_402869(void);
unsigned int sub_40294a(void);
int sub_402a2a(unsigned int *a0);
unsigned int sub_402a91(void);
unsigned int sub_402b92(void);
int sub_402bc4(void);
int sub_402c43(void);
int sub_402ca5(unsigned int *a0);
int sub_402d5e(void);
void sub_402d7a(void);
void sub_402dc4(void);
unsigned int sub_402dee(unsigned int i);
unsigned int sub_402efe(void);
int sub_402f24(char *a0);
int sub_402f83(unsigned int i);
int sub_404083(unsigned int i);
unsigned int sub_403142(void);
int sub_403171(void);
int sub_403348(void);
unsigned int main(void);
void sub_403376(void);
void sub_4033c2(void);

// Atomic operation stubs
unsigned int atomic_fetch_add(unsigned int *ptr, unsigned int val) {
    unsigned int old = *ptr;
    (*ptr) += val;
    return old;
}

unsigned int atomic_compare_exchange(unsigned int *ptr, unsigned int expected, unsigned int desired) {
    unsigned int old = *ptr;
    if (*ptr == expected) {
        *ptr = desired;
    }
    return old;
}

unsigned int atomic_exchange(unsigned int *ptr, unsigned int value) {
    unsigned int old = *ptr;
    *ptr = value;
    return old;
}

int _init()
{
 if (g_406ff4)
 g_406ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 /* Stubbed - invalid indirect jump */
 return 0;
}


// Function: sub_4013e0 at 0x4013e0
int sub_4013e0(void *ptr)
{
 /* Stubbed - invalid indirect jump */
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
 /* Unsupported jumpkind Ijk_SigTRAP - stubbed */
}


// Function: sub_40141c at 0x40141c
void sub_40141c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401420
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



/* CRT stub function register_tm_clones */

unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v3 = (char *)&v2->field_5b87 + 3;
 v0 = v4;
 if (!(&v3->padding_0[252] - &v3->padding_0[252] >> 31) + (&v3->padding_0[252] - &v3->padding_0[252] >> 2) >> 1)
 {
 return (&v3->padding_0[252] - &v3->padding_0[252] >> 31) + (&v3->padding_0[252] - &v3->padding_0[252] >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[4]))
 {
 return (*((int *)&v3->padding_0[4]))(&v3->padding_0[252], (&v3->padding_0[252] - &v3->padding_0[252] >> 31) + (&v3->padding_0[252] - &v3->padding_0[252] >> 2) >> 1);
 }
 else
 {
 return (&v3->padding_0[252] - &v3->padding_0[252] >> 31) + (&v3->padding_0[252] - &v3->padding_0[252] >> 2) >> 1;
 }
}


// Function: sub_4014b7 at 0x4014b7
void sub_4014b7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86_get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_5b27[11];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[252])
 return v5;
 if (*((int *)&ptr->padding_0[16]))
 sub_4013e0(*((int *)&ptr->padding_0[248]));
 v10 = &ptr->padding_0[236];
 v11 = *((int *)&ptr->padding_0[0x100]);
 i = (&ptr->padding_0[232] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[0x100]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[0x100]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[0x100]);
 } while (*((int *)&ptr->padding_0[0x100]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[252] = 1;
 return v14;
}


// Function: sub_40154a at 0x40154a
void sub_40154a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy */
int frame_dummy()
{
 return 0;
}



// Function: __x86.get_pc_thunk_dx at 0x401559
unsigned int __x86_get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86.get_pc_thunk_di at 0x40155d
int __x86_get_pc_thunk_di(int a0, void *a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401561 at 0x401561
int sub_401561()
{
 char dest[100];
 param_strcpy(dest, "test");
 return 0;
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
 return param_strcmp("test", "test");
}


// Function: param_strcmp at 0x4015f0
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v1; // ebx
 unsigned int v2; // eax
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 v2 = strcmp(a0, a1);
 return (v2 <= 0 ? -(v2) : 1);
}


// Function: sub_40162b at 0x40162b
int sub_40162b()
{
 call_strcmp();
 return 0;
}


// Function: call_strcmp at 0x401630
unsigned int call_strcmp()
{
 return 0;
}


// Function: sub_401633 at 0x401633
int sub_401633()
{
 return param_strlen("test");
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
int sub_401676()
{
 char dest[100], src[] = "test";
 return param_memcpy(dest, src, 5);
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
 return;
}


// Function: call_memcpy at 0x4016b0
unsigned int call_memcpy()
{
 return 90;
}


// Function: sub_4016b6 at 0x4016b6
int sub_4016b6()
{
 param_memcmp();
 return;
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
int sub_4016ff()
{
 call_memcmp();
 return;
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
 param_printf();
 return;
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
 return;
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
 param_scanf();
 return;
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
 return (sscanf(a0, "%d,%d", &v2, &v3) == 2 ? v2 + v3 : 4294967295);
}


// Function: sub_401812 at 0x401812
int sub_401812()
{
 call_scanf();
 return;
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
 return (sscanf("123,456", "%d,%d", &v2, &v3) == 2 ? v2 + v3 : 4294967295);
}


// Function: sub_40186a at 0x40186a
int sub_40186a()
{
 param_fopen_fclose();
 return;
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
 param_fread_fwrite();
 return;
}


// Function: param_fread_fwrite at 0x401920
unsigned int param_fread_fwrite(char *a0)
{
 void* fp; // eax
 void* v3; // esi
 unsigned int count; // eax
 void* v0; // [bp-0x34]
 char v1; // [bp-0x30]

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
int sub_4019fe()
{
 call_fread_fwrite();
 return;
}


// Function: call_fread_fwrite at 0x401a00
unsigned int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_401a23 at 0x401a23
int sub_401a23()
{
 param_malloc_free();
 return;
}


// Function: param_malloc_free at 0x401a30
unsigned int param_malloc_free(unsigned int i)
{
 unsigned int *ptr; // eax
 unsigned int v1; // ecx
 unsigned int idx; // edx

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
 free(ptr);
 return ptr[1 + i] + *(ptr);
}


// Function: sub_401a8a at 0x401a8a
int sub_401a8a()
{
 call_malloc_free();
 return;
}


// Function: call_malloc_free at 0x401a90
unsigned int call_malloc_free()
{
 unsigned int *ptr;
 unsigned int i;

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 i = 0;
 do
 {
 ptr[0] = i;
 i += 10;
 ptr = &ptr[1];
 } while (i != 100);
 return ptr[9] + ptr[0];
}


// Function: sub_401ae9 at 0x401ae9
int sub_401ae9()
{
 param_memset();
 return;
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
 char v0; // [bp-0x28]

 idx = 0;
 do
 {
 *((unsigned int *)&(&v0)[4 * idx]) = 255;
 idx += 1;
 } while (idx != 10);
 return 0;
}


// Function: sub_401b65 at 0x401b65
int sub_401b65()
{
 param_strchr_strstr();
 return;
}


// Function: param_strchr_strstr at 0x401b70

int param_strchr_strstr(char *a0, char a1, char *a2)
{
 char *ptr1;
 char *ptr2;

 ptr1 = strchr(a0, a1);
 ptr2 = strstr(a0, a2);
 return (-(ptr1 < 1) | ptr1 - a0) + (-(ptr2 < 1) | ptr2 - a0);
}


// Function: sub_401bca at 0x401bca
void sub_401bca()
{
 call_strchr_strstr();
 return;
}


// Function: call_strchr_strstr at 0x401bd0
unsigned int call_strchr_strstr()
{
 return 15;
}


// Function: sub_401bd6 at 0x401bd6
int sub_401bd6()
{
 test_standard_library_functions();
 return;
}


// Function: test_standard_library_functions at 0x401be0
extern char g_404074;
extern char g_40408f;
extern char g_4040aa;
extern char g_4040c6;
extern char g_4040e2;
extern char g_4040fe;
extern char g_40411a;
extern char g_404137;
extern char g_404153;
extern char g_40416f;
extern char g_40418b;
extern char g_4041a6;
extern char g_40436c;
extern char g_4043cc[12];
extern char g_4043d8[12];
unsigned int g_4043cc[12];
unsigned int g_4043d8[12];

int test_standard_library_functions()
{
 unsigned int v5; // eax
 void* fp; // eax
 unsigned int *ptr; // eax
 unsigned int i; // ecx
 unsigned int *ptr2; // edx
 unsigned int idx; // eax
 char *v0; // [bp-0x40]
 char v1; // [bp-0x3c]
 char v2[8]; // [bp-0x38]
 char v3[32]; // [bp-0x30]

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
 ptr = malloc(40);
 if (ptr)
 {
 i = 0;
 ptr2 = ptr;
 do
 {
 *(ptr2) = i;
 i += 10;
 ptr2 += 1;
 } while (i != 100);
 free(ptr);
 }
 printf(&g_40416f);
 idx = 0;
 do
 {
 *((unsigned int *)&v2[4 * idx]) = 255;
 idx += 1;
 } while (idx != 10);
 printf(&g_40418b);
 return printf(&g_4041a6);
}


// Function: sub_401e54 at 0x401e54
int sub_401e54()
{
 return param_linux_syscall(0);
}


// Function: param_linux_syscall at 0x401e60
unsigned int param_linux_syscall(unsigned int a0)
{
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int result; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 v2 = v3;
 result = 0;
 v0 = a0;
 v4 = syscall(5);
 if (v4 < 0)
 return -(*(__errno_location()));
 v0 = v4;
 syscall(6);
 return v4;
}


// Function: sub_401ea9 at 0x401ea9
int sub_401ea9()
{
 return call_linux_syscall();
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
 v5 = -(*(__errno_location()));
 }
 return v5 >> 31 | 42;
}


// Function: sub_401f02 at 0x401f02
int sub_401f02()
{
 return param_win32_api("/etc/passwd");
}


// Function: param_win32_api at 0x401f10
unsigned int param_win32_api(unsigned int a0)
{
 unsigned int v3; // ebx
 char v0; // [bp-0x5c]
 char v1; // [bp-0x30]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 if (stat(a0, &v0) < 0)
 return 4294967295;
 return (*((int *)&v1) > 0 ? 42 : 4294967294);
}


// Function: sub_401f55 at 0x401f55
int sub_401f55()
{
 return call_win32_api();
}


// Function: call_win32_api at 0x401f60
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


// Function: sub_401fa8 at 0x401fa8
int sub_401fa8()
{
 return param_fork_exec("/bin/true", 0);
}


// Function: param_fork_exec at 0x401fb0
unsigned int param_fork_exec(char *a0, unsigned int a1)
{
 unsigned int pid; // eax
 unsigned int result; // [bp-0x10]
 unsigned int v1[1]; // [bp-0x8]

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
 return 4294967293;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_402021 at 0x402021
int sub_402021()
{
 return call_fork_exec();
}


// Function: call_fork_exec at 0x402030
unsigned int call_fork_exec()
{
 unsigned int pid; // eax
 unsigned int v4; // eax
 unsigned int result; // [bp-0x10]
 unsigned int v1[1][1]; // [bp-0x8]

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
 if (!((char)v1 & 127))
 v4 = v1 >> 8 & 255;
 }
 else
 {
 v4 = 4294967294;
 }
 return -(0 < v4) | 42;
}


// Function: sub_4020a8 at 0x4020a8
int sub_4020a8()
{
 return param_pipe_communication();
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


// Function: sub_402188 at 0x402188
int sub_402188()
{
 return call_pipe_communication();
}


// Function: call_pipe_communication at 0x402190
unsigned int call_pipe_communication()
{
 return param_pipe_communication();
}


// Function: sub_4021aa at 0x4021aa
int sub_4021aa()
{
 return param_socket_create();
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
 *((unsigned int *)&v1.sa_data[0]) = 2;
 if (bind(v7, (struct sockaddr *)&v1, 16) < 0)
 {
 close(v7);
 return 4294967293;
 }
 v8 = listen(v7, 5);
 close(v7);
 return (v8 < 0 ? 0xfffffffc : 42);
}


// Function: sub_402296 at 0x402296
int sub_402296()
{
 return call_socket_create();
}


// Function: call_socket_create at 0x4022a0
unsigned int call_socket_create()
{
 return param_socket_create();
}


// Function: sub_4022ba at 0x4022ba
int sub_4022ba()
{
 return param_shmget_shmat();
}


// Function: param_shmget_shmat at 0x4022c0
typedef struct struct_shm_data {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
 char field_c;
} struct_shm_data;

int param_shmget_shmat()
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 struct_shm_data *ptr; // eax
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
int sub_4023a2()
{
 return call_shmget_shmat();
}


// Function: call_shmget_shmat at 0x4023b0
unsigned int call_shmget_shmat()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 return ((char)_ccall(15, 15, param_shmget_shmat(), 0, 0) ? 42 : 4294967295);
}


// Function: sub_4023d9 at 0x4023d9
int sub_4023d9()
{
 return param_signal_handling();
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
int sub_402561()
{
 return call_signal_handling();
}


// Function: call_signal_handling at 0x402570
unsigned int call_signal_handling()
{
 return param_signal_handling();
}


// Function: sub_40258a at 0x40258a
int sub_40258a()
{
 return test_system_calls();
}


// Function: test_system_calls at 0x402590
extern char g_4041f5;
extern char g_404211;
extern char g_40422d;
extern char g_404249;
extern char g_404265;
extern char g_404281;
extern char g_40429d;
extern char g_404390;

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


// Function: sub_402719 at 0x402719
int sub_402719()
{
 thread_compute();
 return;
}


// Function: thread_compute at 0x402720
unsigned int * thread_compute(void *a0)
{
 unsigned int *ptr; // eax

 ptr = malloc(4);
 *(ptr) = *((unsigned int *)a0) * *((unsigned int *)a0);
 return ptr;
}


// Function: sub_40274c at 0x40274c
int sub_40274c()
{
 param_pthread_create();
 return;
}


// Function: param_pthread_create at 0x402750
unsigned int param_pthread_create()
{
 pthread_t thread;
 unsigned int value = 7;
 unsigned int *result;
 
 if (pthread_create(&thread, NULL, thread_compute, &value))
 return 4294967295;
 pthread_join(thread, (void **)&result);
 free(result);
 return *result;
}


// Function: sub_4027bb at 0x4027bb
int sub_4027bb()
{
 call_pthread_create();
 return;
}


// Function: call_pthread_create at 0x4027c0
unsigned int call_pthread_create()
{
 unsigned int *v0; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]

 v1 = 7;
 if (pthread_create(&v2, NULL, thread_compute, &v1))
 return 4294967295;
 pthread_join(v2, (void **)&v0);
 free(v0);
 return *(v0);
}


// Function: sub_40282b at 0x40282b
void sub_40282b(unsigned int *a0)
{
 thread_sum();
 return;
}


// Function: thread_sum at 0x402830
unsigned int thread_sum(void *ptr)
{
 unsigned int v0; // esi
 unsigned int v1; // edi
 unsigned long long tmp;
 unsigned int *p = (unsigned int *)ptr;

 p[2] = 0;
 v0 = p[0];
 v1 = p[1] - v0;
 if (p[1] >= v0)
 {
 tmp = (unsigned long long)(p[1] + ~v0) * v1;
 p[2] = v0 + p[2] + v1 * (v0 + 1) + (unsigned int)(tmp * 0x80000000 >> 32);
 }
 return 0;
}


// Function: sub_402869 at 0x402869
int sub_402869()
{
 param_pthread_join();
 return;
}


// Function: param_pthread_join at 0x402870
unsigned int param_pthread_join()
{
 pthread_t threads[3];
 unsigned int args[3][3];
 unsigned int v15;
 unsigned int v14;

 args[0][0] = 1; args[0][1] = 10; args[0][2] = 0;
 args[1][0] = 2; args[1][1] = 11; args[1][2] = 0;
 args[2][0] = 3; args[2][1] = 20; args[2][2] = 0;

 for (v14 = 0; v14 < 3; v14++)
 {
 if (pthread_create(&threads[v14], NULL, thread_sum, &args[v14]))
 return 4294967295;
 }

 v15 = 0;
 for (v14 = 0; v14 < 3; v14++)
 {
 pthread_join(threads[v14], NULL);
 v15 += args[v14][2];
 }
 return v15;
}


// Function: sub_40294a at 0x40294a
int sub_40294a()
{
 call_pthread_join();
 return;
}


// Function: call_pthread_join at 0x402950
unsigned int call_pthread_join()
{
 pthread_t threads[3];
 unsigned int args[3][3];
 unsigned int v15;
 unsigned int v14;

 args[0][0] = 1; args[0][1] = 10; args[0][2] = 0;
 args[1][0] = 2; args[1][1] = 11; args[1][2] = 0;
 args[2][0] = 3; args[2][1] = 20; args[2][2] = 0;

 for (v14 = 0; v14 < 3; v14++)
 {
 if (pthread_create(&threads[v14], 0, thread_sum, &args[v14]))
 return 4294967295;
 }

 v15 = 0;
 for (v14 = 0; v14 < 3; v14++)
 {
 pthread_join(threads[v14], 0);
 v15 += args[v14][2];
 }
 return v15;
}


// Function: sub_402a2a at 0x402a2a
int sub_402a2a(unsigned int *a0)
{
 thread_increment();
 return;
}


// Function: thread_increment at 0x402a30
unsigned int thread_increment(void *ptr)
{
 unsigned int v0; // esi
 unsigned int i; // esi
 unsigned int v2; // esi

 v0 = *((unsigned int *)ptr);
 if (v0 <= 0)
 return 0;
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
 return 0;
}


// Function: sub_402a91 at 0x402a91
int sub_402a91()
{
 param_mutex_lock();
 return;
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
 unsigned int *v11; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 i = a0;
 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 v11 = ptr;
 shared_counter = 0;
 if (i > 0)
 {
 v4 = i;
 v5 = ptr;
 do
 {
 v6 = v5;
 v7 = v4;
 if (pthread_create((pthread_t *)v6, 0, thread_increment, &a1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v8 = v6 + 4, v9 = v7 - 1, v4 = v7 - 1, v5 = v6 + 4, v7 != 1));
 }
 if (i > 0)
 {
 v10 = 0;
 do
 {
 pthread_join(((pthread_t *)ptr)[v10], 0);
 v10 += 1;
 } while (i != v10);
 }
 free(ptr);
 return (shared_counter == a1 * i ? 42 : 4294967293);
}


// Function: sub_402b92 at 0x402b92
int sub_402b92()
{
 call_mutex_lock();
 return;
}


// Function: call_mutex_lock at 0x402ba0
unsigned int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_402bc4 at 0x402bc4
int sub_402bc4(void)
{
 consumer_thread();
 return;
}


// Function: consumer_thread at 0x402bd0
unsigned int * consumer_thread()
{
 unsigned int *ptr; // eax

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


// Function: sub_402c43 at 0x402c43
int sub_402c43(void)
{
 producer_thread();
 return;
}


// Function: producer_thread at 0x402c50
unsigned int producer_thread(void *unused)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: sub_402ca5 at 0x402ca5
int sub_402ca5(unsigned int *a0)
{
 param_condition_variable();
 return;
}


// Function: param_condition_variable at 0x402cb0
int param_condition_variable()
{
 pthread_t v0;
 pthread_t v2;
 unsigned int *v1;

 ready = 0;
 data = 0;
 if (pthread_create(&v0, 0, (void *(*)(void *))consumer_thread, 0))
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
 pthread_join(v0, (void **)&v1);
 pthread_join(v2, 0);
 free(v1);
 return *(v1);
 }
}


// Function: sub_402d5e at 0x402d5e
int sub_402d5e(void)
{
 call_condition_variable();
 return;
}


// Function: call_condition_variable at 0x402d60
int call_condition_variable()
{
 return param_condition_variable();
}


// Function: sub_402d7a at 0x402d7a
void sub_402d7a(void)
{
 thread_atomic_increment();
 return;
}


// Function: thread_atomic_increment at 0x402d80
unsigned int thread_atomic_increment(void *a0)
{
 unsigned int i; // ecx
 unsigned int *arg = (unsigned int *)a0;

 if (*arg <= 0)
 return 0;
 i = 0;
 do
 {
 atomic_fetch_add(&atomic_counter);
 atomic_compare_exchange(&atomic_counter, i + 1000, i);
 i += 1;
 } while (i != *arg);
 return 0;
}


// Function: sub_402dc4 at 0x402dc4
void sub_402dc4()
{
 thread_atomic_load_store();
 return;
}


// Function: thread_atomic_load_store at 0x402dd0
unsigned int thread_atomic_load_store(void *unused)
{
 atomic_exchange(&atomic_counter, atomic_counter + 100);
 return 0;
}


// Function: sub_402dee at 0x402dee
int sub_402dee(unsigned int i)
{
 param_atomic_ops();
 return;
}


// Function: param_atomic_ops at 0x402df0
unsigned int param_atomic_ops(unsigned int i)
{
 unsigned int *v4_ptr; // eax
 unsigned int v4; // ebp
 unsigned int *v5; // esi
 unsigned int *v6; // esi
 unsigned int v7; // ebp
 unsigned int *v8; // esi
 unsigned int v9; // ebp
 unsigned int v10; // esi
 unsigned int *ptr; // [bp-0x18]
 char v1; // [bp-0x14]
 char v2; // [bp+0x8]

 v4_ptr = malloc(i * 4);
 if (!v4_ptr)
 return 4294967295;
 ptr = v4_ptr;
 atomic_exchange(&atomic_counter, 0);
 if (i > 0)
 {
 v4 = i;
 v5 = ptr;
 do
 {
 v6 = v5;
 v7 = v4;
 if (pthread_create(v6, 0, thread_atomic_increment, &v2))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v8 = v6 + 4, v9 = v7 - 1, v4 = v7 - 1, v5 = v6 + 4, v7 != 1));
 }
 if (!pthread_create(&v1, 0, thread_atomic_load_store, 0))
 pthread_join(*((int *)&v1), 0);
 if (i > 0)
 {
 v10 = 0;
 do
 {
 pthread_join(ptr[v10], 0);
 v10 += 1;
 } while (i != v10);
 }
 free(ptr);
 return ((char)_ccall(15, 15, atomic_counter, 0, 0) ? 42 : 4294967293);
}


// Function: sub_402efe at 0x402efe
int sub_402efe()
{
 call_atomic_ops();
 return;
}


// Function: call_atomic_ops at 0x402f00
unsigned int call_atomic_ops()
{
 unsigned int v0; // [bp-0x18]

 v0 = 500;
 return param_atomic_ops(4);
}


// Function: sub_402f24 at 0x402f24
int sub_402f24(char *a0)
{
 thread_tls_test();
 return;
}


// Function: thread_tls_test at 0x402f30

unsigned int *thread_tls_test(void *a0)
{
 unsigned int v3;
 unsigned int v4;
 unsigned int *ptr;

 v3 = 0;
 v4 = v3 + 50;
 ptr = malloc(8);
 ptr[0] = v3;
 ptr[1] = v4;
 return ptr;
}


// Function: sub_402f83 at 0x402f83
int sub_402f83(unsigned int i)
{
 param_thread_local_storage();
 return;
}


// Function: param_thread_local_storage at 0x402f90
unsigned int param_thread_local_storage(unsigned int i)
{
 unsigned int v3; // esi
 pthread_t *ptr; // edi
 unsigned int v13; // edi
 unsigned int v14; // esi
 unsigned int v15; // ebp
 unsigned int v4[2]; // eax
 unsigned int *v5; // ecx
 unsigned int index; // esi
 char *v6; // eax
 unsigned int j; // esi
 pthread_t *v9; // ebp
 pthread_t *v10; // ebp
 pthread_t *v11; // ebp
 unsigned int v12; // edi
 char **p; // [bp-0x1c]
 pthread_t *addr; // [bp-0x18]
 unsigned int *v2; // [bp-0x14]

 v3 = i * 4;
 ptr = malloc(v3);
 if (!ptr)
 return 4294967295;
 p = (char **)ptr;
 if (!p)
 return 4294967295;
 addr = ptr;
 if (i > 0)
 {
 index = 0;
 do
 {
 v6 = malloc(16);
 p[index] = v6;
 snprintf(v6, 16, "Thread-%d", index);
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
 if (pthread_create(v10, 0, thread_tls_test, p[j]))
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
 pthread_join(addr[v13], (void **)&v2);
 v5 = v2;
 v15 += v5[0];
 v14 += v5[1];
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
int sub_403142()
{
 call_thread_local_storage();
 return;
}


// Function: call_thread_local_storage at 0x403150
unsigned int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: sub_403171 at 0x403171
int sub_403171()
{
 test_thread_concurrency();
 return;
}


// Function: test_thread_concurrency at 0x403180
extern char g_4042c3;
extern char g_4042df;
extern char g_4042fc;
extern char g_404318;
extern char g_404334;
extern char g_404350;
extern char g_4043ab;

int test_thread_concurrency()
{
 char *v12; // esi
 unsigned int v13; // edi
 unsigned int v14; // ebp
 unsigned int *v0; // [bp-0x48], Other Possible Types: char
 pthread_t v1; // [bp-0x44], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x40]
 unsigned int flag2; // [bp-0x3c]
 unsigned int v4; // [bp-0x38]
 unsigned int v5; // [bp-0x34]
 unsigned int flag1; // [bp-0x30]
 unsigned int v7; // [bp-0x2c]
 unsigned int v8; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int v10; // [bp-0x1c]

 puts(&g_4043ab);
 v10 = 7;
 v12 = &v1;
 if (!pthread_create(&v1, 0, thread_compute, &v10))
 {
 pthread_join(v1, &v0);
 free(v0);
 }
 printf(&g_4042c3);
 result = 0;
 flag1 = 0;
 flag2 = 0;
 v1 = 1;
 v2 = 10;
 v4 = 11;
 v5 = 20;
 v7 = 21;
 v8 = 30;
 v13 = 0;
 do
 {
 if (pthread_create((char *)&v10 + v13, 0, thread_sum, v12))
 goto LABEL_4032c0;
 } while ((v13 += 4, v12 += 12, v13 != 12));
 v14 = 0;
 do
 {
 if (pthread_join((&v10)[v14], 0))
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
int sub_403348()
{
 main();
 return;
}


// Function: main at 0x403350
unsigned int main()
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
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

typedef void (*ctor_func_t)(void);

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 ctor_func_t v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = &v2->padding_0[239];
 v4 = *((ctor_func_t *)&ptr->padding_0[244]);
 if (*((int *)&ptr->padding_0[244]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[244];
 do
 {
 p = v6;
 v4 = *((ctor_func_t *)&p->padding_0[0]);
 if (v4)
 v4();
 v4 = *((ctor_func_t *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_4033c2 at 0x4033c2
void sub_4033c2()
{
}



/* CRT stub function _fini removed by preprocessor */


