// Angr Decompilation of 6_clang_O1_no_g
// Platform: X86

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/socket.h>
#include <pthread.h>
#include <signal.h>
#include <errno.h>
#include <sys/syscall.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <fcntl.h>
#include <sys/select.h>
#include <netinet/in.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char field_c;
    char padding_0[252];
    char padding_5b27[12];
    char field_5b87;
} struct_0;

/* Global variable definitions */
struct_0 *g_406ff4 = 0;
char g_404074[] = "Test1";
char g_40408f[] = "Test2";
char g_4040aa[] = "Test3";
char g_4040c6[] = "Test4";
char g_4040e2[] = "Test5";
char g_4040fe[] = "Test6";
char g_40411a[] = "Test7";
char g_404137[] = "Test8";
char g_404153[] = "Test9";
char g_40416f[] = "Test10";
char g_40418b[] = "Test11";
char g_4041a6[] = "Test12";
char g_4041f5[] = "Test13";
char g_404211[] = "Test14";
char g_40422d[] = "Test15";
char g_404249[] = "Test16";
char g_404265[] = "Test17";
char g_404281[] = "Test18";
char g_40429d[] = "Test19";
char g_4042c3[] = "Test20";
char g_4042df[] = "Test21";
char g_4042fc[] = "Test22";
char g_404318[] = "Test23";
char g_404334[] = "Test24";
char g_404350[] = "Test25";
char g_40436c[] = "Test26";
char g_404390[] = "Test27";
char g_4043ab[] = "Test28";
void *g_4043cc = 0;
void *g_4043d8 = 0;
unsigned int signal_number = 0;
unsigned int signal_received = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int shared_counter = 0;
pthread_mutex_t shared_counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
char data = 0;
char i = 0;
char ready = 0;
unsigned int atomic_counter = 0;

/* CRT stub function declarations removed */

/* Forward declarations for functions */
int sub_401030(void);
int sub_4013e0(void);
void sub_4013e6(void);
void sub_40141b(void);
void sub_40141c(void);
int __x86_get_pc_thunk_bx(void);
void sub_401424(void);
void sub_401463(void);
void sub_401469(void);
void sub_4014b7(void);
void sub_40154a(void);
int __x86_get_pc_thunk_dx(void);
int __x86_get_pc_thunk_di(void);
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
int sub_4019fe(void);
unsigned int call_fread_fwrite(void);
int sub_401a23(void);
unsigned int param_malloc_free(unsigned int i);
int sub_401a8a(void);
unsigned int call_malloc_free(void);
int sub_401ae9(void);
unsigned int param_memset(void* a0, unsigned int n);
void sub_401b35(void);
unsigned int call_memset(void);
int sub_401b65(void);
int param_strchr_strstr(char *a0, char a1, char *a2);
void sub_401bca(void);
unsigned int call_strchr_strstr(void);
int sub_401bd6(void);
int test_standard_library_functions(void);
int sub_401e54(void);
unsigned int param_linux_syscall(unsigned int a0);
int sub_401ea9(void);
unsigned int call_linux_syscall(void);
int sub_401f02(void);
unsigned int param_win32_api(unsigned int a0);
int sub_401f55(void);
unsigned int call_win32_api(void);
int sub_401fa8(void);
unsigned int param_fork_exec(char *a0, unsigned int a1);
int sub_402021(void);
unsigned int call_fork_exec(void);
int sub_4020a8(void);
unsigned int param_pipe_communication(void);
int sub_402188(void);
unsigned int call_pipe_communication(void);
int sub_4021aa(void);
unsigned int param_socket_create(void);
int sub_402296(void);
unsigned int call_socket_create(void);
int sub_4022ba(void);
int param_shmget_shmat(void);
int sub_4023a2(void);
unsigned int call_shmget_shmat(void);
int sub_4023d9(void);
unsigned int param_signal_handling(void);
void signal_handler(unsigned int a0);
int sub_402561(void);
unsigned int call_signal_handling(void);
int sub_40258a(void);
int test_system_calls(void);
int sub_402719(void);
void *thread_compute(void *a0);
int sub_40274c(void);
unsigned int param_pthread_create(unsigned int a0);
int sub_4027bb(void);
unsigned int call_pthread_create(void);
void sub_40282b(unsigned int a0);
void *thread_sum(void *ptr);
int sub_402869(void);
unsigned int param_pthread_join(void);
int sub_40294a(void);
unsigned int call_pthread_join(void);
int sub_402a2a(void);
void *thread_increment(void *ptr);
int sub_402a91(void);
unsigned int param_mutex_lock(unsigned int a0, unsigned int a1);
int sub_402b92(void);
unsigned int call_mutex_lock(void);
int sub_402bc4(void);
void *consumer_thread(void *arg);
int sub_402c43(void);
void *producer_thread(void *arg);
int sub_402ca5(void);
unsigned int param_condition_variable(void);
int sub_402d5e(void);
unsigned int call_condition_variable(void);
void sub_402d7a(unsigned int a0);
void *thread_atomic_increment(void *a0);
void sub_402dc4(void);
void *thread_atomic_load_store(void *arg);
int sub_402dee(void);
unsigned int param_atomic_ops(unsigned int i);
int sub_402efe(void);
unsigned int call_atomic_ops(void);
int sub_402f24(void);
void *thread_tls_test(void *a0);
int sub_402f83(void);
unsigned int param_thread_local_storage(unsigned int i);
int sub_403142(void);
unsigned int call_thread_local_storage(void);
int sub_403171(void);
int test_thread_concurrency(void);
int sub_403348(void);
unsigned int main(void);
void sub_403376(void);
void sub_4033c2(void);
int* __errno_location(void);




// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return ptr[2];
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
}


// Function: sub_40141c at 0x40141c
void sub_40141c()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401420
int __x86_get_pc_thunk_bx(void)
{
 return 0;
}






// Function: sub_401463 at 0x401463
void sub_401463()
{
}












// Function: __x86_get_pc_thunk_dx at 0x401559
int __x86_get_pc_thunk_dx(void)
{
 return 0;
}


// Function: __x86_get_pc_thunk_di at 0x40155d
int __x86_get_pc_thunk_di(void)
{
 return 0;
}


// Function: sub_401561 at 0x401561
int sub_401561()
{
 return param_strcpy(0, 0);
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
 return call_strcpy();
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
 return param_strcmp(0, 0);
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
int sub_401633()
{
 return param_strlen(0);
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
 return param_memcpy(0, 0, 0);
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
 return param_memcmp(0, 0, 0);
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
 return call_memcmp();
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
 v9 = -(int)v8;
 if (v8 == 0)
 v9 = 1;
 v10 = -(int)v7;
 if (v7 == 0)
 v10 = 1;
 return v10 + v9;
}


// Function: sub_401762 at 0x401762
int sub_401762()
{
 return param_printf(0, 0);
}


// Function: param_printf at 0x401770
int param_printf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = a1;
 v0 = a0;
 return printf("Value: %d, Name: %s\n", v0, (char*)v1);
}


// Function: sub_40179c at 0x40179c
int sub_40179c()
{
 return call_printf();
}


// Function: call_printf at 0x4017a0
int call_printf()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = (unsigned int)"Test";
 v0 = 42;
 return printf("Value: %d, Name: %s\n", v0, (char*)v1);
}


// Function: sub_4017cd at 0x4017cd
int sub_4017cd()
{
 return param_scanf(0);
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
 return (sscanf(a0, "%d,%d") == 2 ? v2 + v3 : 4294967295);
}


// Function: sub_401812 at 0x401812
int sub_401812()
{
 return call_scanf();
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
 return (sscanf("123,456", "%d,%d") == 2 ? v2 + v3 : 4294967295);
}


// Function: sub_40186a at 0x40186a
int sub_40186a()
{
 return param_fopen_fclose(0);
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
 return param_fread_fwrite(0);
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
 return (!memcmp(&v1, v0, 19) ? 42 : 4294967293);
}


// Function: sub_4019fe at 0x4019fe
int sub_4019fe()
{
 return call_fread_fwrite();
}


// Function: call_fread_fwrite at 0x401a00
unsigned int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_401a23 at 0x401a23
int sub_401a23()
{
 return param_malloc_free(0);
}


// Function: param_malloc_free at 0x401a30
unsigned int param_malloc_free(unsigned int i)
{
 unsigned int *ptr1; // eax
 unsigned int v1; // ecx
 unsigned int idx; // edx

 ptr1 = malloc(i * 4);
 if (!ptr1)
 return 4294967295;
 if (i)
 {
 v1 = 0;
 idx = 0;
 do
 {
 ptr1[idx] = v1;
 idx += 1;
 v1 += 10;
 } while (i != idx);
 }
 free(ptr1);
 return ptr1[1 + i] + *(ptr1);
}


// Function: sub_401a8a at 0x401a8a
int sub_401a8a()
{
 return call_malloc_free();
}


// Function: call_malloc_free at 0x401a90
unsigned int call_malloc_free()
{
 unsigned int *ptr1; // eax
 unsigned int i; // ecx
 unsigned int *ptr_orig; // edx

 ptr1 = malloc(40);
 if (!ptr1)
 return 4294967295;
 i = 0;
 ptr_orig = ptr1;
 do
 {
 ptr_orig[0] = i;
 i += 10;
 ptr_orig = &ptr_orig[1];
 } while (i != 100);
 free(ptr1);
 return ptr_orig[9] + ptr_orig[0];
}


// Function: sub_401ae9 at 0x401ae9
int sub_401ae9()
{
 return param_memset(0, 0);
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
 return param_strchr_strstr(0, 0, 0);
}


// Function: param_strchr_strstr at 0x401b70
int param_strchr_strstr(char *a0, char a1, char *a2)
{
 char *ptr1; // eax
 char *ptr2; // eax

 ptr1 = strchr(a0, a1);
 ptr2 = strstr(a0, a2);
 return (-(ptr1 < (char*)1) | ptr1 - a0) + (-(ptr2 < (char*)1) | ptr2 - a0);
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
 return test_standard_library_functions();
}


// Function: test_standard_library_functions at 0x401be0

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
 return param_win32_api(0);
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
 return param_fork_exec(0, 0);
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
 return (count > 0 ? 42 : 4294967293);
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
 struct sockaddr_in v1; // [bp-0x1c]

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
 v1.sin_port = 0;
 v1.sin_addr.s_addr = 0;
 v1.sin_family = 2;
 if (bind(v7, (struct sockaddr*)&v1, 16) < 0)
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
 return (param_shmget_shmat() >= 0 ? 42 : 4294967295);
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

void signal_handler(unsigned int a0)
{
 signal_received = 1;
 signal_number = a0;
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
 return (int)thread_compute(0);
}


// Function: thread_compute at 0x402720
void *thread_compute(void *a0)
{
 unsigned int *ptr; // eax
 unsigned int val = *(unsigned int *)a0;

 ptr = malloc(4);
 *(ptr) = val * val;
 return ptr;
}


// Function: sub_40274c at 0x40274c
int sub_40274c()
{
 return param_pthread_create(0);
}


// Function: param_pthread_create at 0x402750
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int *v0; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 char v2; // [bp-0xc]

 v1 = a0;
 if (pthread_create(&v2, 0, thread_compute, &v1))
 return 4294967295;
 pthread_join(*((int *)&v2), &v0);
 free(v0);
 return *(v0);
}


// Function: sub_4027bb at 0x4027bb
int sub_4027bb()
{
 return call_pthread_create();
}


// Function: call_pthread_create at 0x4027c0
unsigned int call_pthread_create()
{
 unsigned int *v0; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 char v2; // [bp-0xc]

 v1 = 7;
 if (pthread_create(&v2, 0, thread_compute, &v1))
 return 4294967295;
 pthread_join(*((int *)&v2), &v0);
 free(v0);
 return *(v0);
}


// Function: sub_40282b at 0x40282b
void sub_40282b(unsigned int a0)
{
 thread_sum(0);
 return;
}


// Function: thread_sum at 0x402830
void *thread_sum(void *ptr)
{
 unsigned int *p = (unsigned int *)ptr;
 unsigned int v0; // esi
 unsigned int v1; // edi

 p[2] = 0;
 v0 = *(p);
 v1 = p[1] - v0;
 if (p[1] >= v0)
 p[2] = v0 + p[2] + v1 * (v0 + 1) + (unsigned int)(((p[1] + ~(v0)) * v1) * 0x80000000 >> 32);
 return 0;
}


// Function: sub_402869 at 0x402869
int sub_402869()
{
 return param_pthread_join();
}


// Function: param_pthread_join at 0x402870
unsigned int param_pthread_join()
{
 unsigned int v11; // esi
 char *v12; // edi
 char *cur; // edi
 unsigned int v14; // ebp
 unsigned int v15; // esi
 unsigned int flag3; // [bp-0x44]
 unsigned int v1; // [bp-0x40]
 unsigned int flag2; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 unsigned int v4; // [bp-0x34]
 unsigned int flag1; // [bp-0x30]
 unsigned int v6; // [bp-0x2c]
 unsigned int v7; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 char v9; // [bp-0x1c]

 result = 0;
 flag1 = 0;
 flag2 = 0;
 flag3 = 1;
 v1 = 10;
 v3 = 11;
 v4 = 20;
 v6 = 21;
 v7 = 30;
 v11 = 0;
 v12 = &flag3;
 while (!pthread_create(&(&v9)[v11], 0, thread_sum, v12))
 {
 v11 += 4;
 v12 += 12;
 if (v11 == 12)
 {
 cur = &flag2;
 v14 = 0;
 v15 = 0;
 while (!pthread_join(*((int *)&(&v9)[4 * v14]), 0))
 {
 v15 += *(cur);
 v14 += 1;
 cur += 3;
 if (v14 == 3)
 return v15;
 }
 return 4294967294;
 }
 }
 return 4294967295;
}


// Function: sub_40294a at 0x40294a
int sub_40294a()
{
 return call_pthread_join();
}


// Function: call_pthread_join at 0x402950
unsigned int call_pthread_join()
{
 unsigned int v11; // esi
 char *v12; // edi
 char *cur; // edi
 unsigned int v14; // ebp
 unsigned int v15; // esi
 unsigned int v0; // [bp-0x44]
 unsigned int v1; // [bp-0x40]
 unsigned int flag2; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 unsigned int v4; // [bp-0x34]
 unsigned int flag1; // [bp-0x30]
 unsigned int v6; // [bp-0x2c]
 unsigned int v7; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 char v9; // [bp-0x1c]

 result = 0;
 flag1 = 0;
 flag2 = 0;
 v0 = 1;
 v1 = 10;
 v3 = 11;
 v4 = 20;
 v6 = 21;
 v7 = 30;
 v11 = 0;
 v12 = &v0;
 while (!pthread_create(&(&v9)[v11], 0, thread_sum, v12))
 {
 v11 += 4;
 v12 += 12;
 if (v11 == 12)
 {
 cur = &flag2;
 v14 = 0;
 v15 = 0;
 while (!pthread_join(*((int *)&(&v9)[4 * v14]), 0))
 {
 v15 += *(cur);
 v14 += 1;
 cur += 3;
 if (v14 == 3)
 return v15;
 }
 return 4294967294;
 }
 }
 return 4294967295;
}


// Function: sub_402a2a at 0x402a2a
int sub_402a2a()
{
 return thread_increment(0);
}


// Function: thread_increment at 0x402a30

void *thread_increment(void *ptr)
{
 unsigned int v0; // esi
 unsigned int i; // esi
 unsigned int v2; // esi

 v0 = *(unsigned int *)ptr;
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
 return param_mutex_lock(0, 0);
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
 unsigned int v1; // [bp-0x14]

 i = a0;
 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 ptr = ptr;
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
 if (pthread_create(v6, 0, v1, &a1))
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
 pthread_join(ptr[v10], 0);
 v10 += 1;
 } while (i != v10);
 }
 free(ptr);
 return (shared_counter == a1 * i ? 42 : 4294967293);
}


// Function: sub_402b92 at 0x402b92
int sub_402b92()
{
 return call_mutex_lock();
}


// Function: call_mutex_lock at 0x402ba0
unsigned int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_402bc4 at 0x402bc4
int sub_402bc4()
{
 return (int)consumer_thread(0);
}


// Function: consumer_thread at 0x402bd0

void *consumer_thread(void *arg)
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
int sub_402c43()
{
 return producer_thread(0);
}


// Function: producer_thread at 0x402c50

void *producer_thread(void *arg)
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
int sub_402ca5()
{
 return param_condition_variable();
}


// Function: param_condition_variable at 0x402cb0

unsigned int param_condition_variable()
{
 char v0; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int *v1; // [bp-0x10], Other Possible Types: char
 char v2; // [bp-0xc]

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
 pthread_join(*((int *)&v2), 0);
 free(v1);
 return *(v1);
 }
}


// Function: sub_402d5e at 0x402d5e
int sub_402d5e()
{
 return call_condition_variable();
}


// Function: call_condition_variable at 0x402d60
unsigned int call_condition_variable()
{
 return param_condition_variable();
}


// Function: sub_402d7a at 0x402d7a
void sub_402d7a(unsigned int a0)
{
 thread_atomic_increment(0);
 return;
}


// Function: thread_atomic_increment at 0x402d80

void *thread_atomic_increment(void *a0)
{
 unsigned int i; // ecx
 unsigned int val = *(unsigned int *)a0;

 if (val <= 0)
 return 0;
 i = 0;
 do
 {
 __atomic_fetch_add(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 __atomic_compare_exchange_n(&atomic_counter, &i, i + 1000, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
 i += 1;
 } while (i != val);
 return 0;
}


// Function: sub_402dc4 at 0x402dc4
void sub_402dc4()
{
 thread_atomic_load_store(0);
 return;
}


// Function: thread_atomic_load_store at 0x402dd0

void *thread_atomic_load_store(void *arg)
{
 __atomic_exchange_n(&atomic_counter, atomic_counter + 100, __ATOMIC_SEQ_CST);
 return 0;
}


// Function: sub_402dee at 0x402dee
int sub_402dee()
{
 return param_atomic_ops(0);
}


// Function: param_atomic_ops at 0x402df0

unsigned int param_atomic_ops(unsigned int i)
{
 unsigned int *ptr; // eax
 unsigned int v4; // ebp
 unsigned int *v5; // esi
 unsigned int *v6; // esi
 unsigned int v7; // ebp
 unsigned int *v8; // esi
 unsigned int v9; // ebp
 unsigned int v10; // esi
 char v1; // [bp-0x14]
 char v2; // [bp+0x8]

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 ptr = ptr;
 __atomic_store_n(&atomic_counter, 0, __ATOMIC_SEQ_CST);
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
 return (atomic_counter > 0 ? 42 : 4294967293);
}


// Function: sub_402efe at 0x402efe
int sub_402efe()
{
 return call_atomic_ops();
}


// Function: call_atomic_ops at 0x402f00
unsigned int call_atomic_ops()
{
 unsigned int v0; // [bp-0x18]

 v0 = 500;
 return param_atomic_ops(4);
}


// Function: sub_402f24 at 0x402f24
int sub_402f24()
{
 return (int)thread_tls_test(0);
}


// Function: thread_tls_test at 0x402f30
void *thread_tls_test(void *a0)
{
 unsigned long v0; // ldt
 unsigned long v1; // gdt
 unsigned short v2; // gs
 unsigned int v3; // esi
 unsigned int v4; // edi
 unsigned int *ptr; // eax
 char tls_buffer[32];

 v3 = 0;
 v4 = v3 + 50;
 v3 = v4;
 strncpy(tls_buffer, (char *)a0, 31);
 ptr = malloc(8);
 ptr[0] = v3;
 ptr[1] = v4;
 return ptr;
}


// Function: sub_402f83 at 0x402f83
int sub_402f83()
{
 return param_thread_local_storage(0);
}


// Function: param_thread_local_storage at 0x402f90
unsigned int param_thread_local_storage(unsigned int i)
{
 unsigned int v3; // esi
 unsigned int *ptr1; // edi
 unsigned int v13; // edi
 unsigned int v14; // esi
 unsigned int v15; // ebp
 unsigned int ptr_arr[2]; // eax
 unsigned int *ptr2; // ecx
 unsigned int index; // esi
 char *ptr3; // eax
 unsigned int j; // esi
 unsigned int *v9; // ebp
 unsigned int *v10; // ebp
 unsigned int *v11; // ebp
 unsigned int v12; // edi
 unsigned int *p; // [bp-0x1c]
 unsigned int *addr; // [bp-0x18]
 char v2; // [bp-0x14]

 v3 = i * 4;
 ptr1 = malloc(v3);
 ptr1 = malloc(v3);
 if (!ptr1)
 return 4294967295;
 p = ptr1;
 if (!p)
 return 4294967295;
 addr = ptr1;
 if (i > 0)
 {
 index = 0;
 do
 {
 ptr3 = malloc(16);
 p[index] = (unsigned int*)ptr3;
 snprintf(ptr3, 16, "Thread-%d", index);
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
 pthread_join(addr[v13], &v2);
 ptr2 = *((int **)&v2);
 v15 += ptr2[0];
 v14 += ptr2[1];
 free(ptr2);
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
int sub_403142()
{
 return call_thread_local_storage();
}


// Function: call_thread_local_storage at 0x403150
unsigned int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: sub_403171 at 0x403171
int sub_403171()
{
 return test_thread_concurrency();
}


// Function: test_thread_concurrency at 0x403180

int test_thread_concurrency()
{
 char *v12; // esi
 unsigned int v13; // edi
 unsigned int v14; // ebp
 unsigned int *v0; // [bp-0x48], Other Possible Types: char
 char v1; // [bp-0x44], Other Possible Types: unsigned int
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
 return main();
}


// Function: main at 0x403350
unsigned int main()
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}





// Function: sub_4033c2 at 0x4033c2
void sub_4033c2()
{
}



/* CRT stub function _fini removed by preprocessor */


