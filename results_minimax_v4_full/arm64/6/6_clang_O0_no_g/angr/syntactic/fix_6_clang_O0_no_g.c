// Angr Decompilation of 6_clang_O0_no_g
// Platform: AARCH64


/* CRT stub function _init removed by preprocessor */

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/shm.h>
#include <sys/auxv.h>
#include <pthread.h>
#include <fcntl.h>
#include <errno.h>
#include <arpa/inet.h>

// Function declarations for implicit declarations
extern int __isoc99_sscanf(const char *str, const char *format, ...);
extern int arm64g_calculate_condition(unsigned int, unsigned long long, unsigned int, unsigned int);
extern unsigned long long __aarch64_ldadd4_acq_rel(unsigned int, unsigned int *);

#define NULL ((void*)0)
#define sighandler_t void*

// Rotate left macro
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

// Forward declarations
extern unsigned int signal_handler(unsigned long a0);
// Thread function declarations - properly declared for pthread_create
// These must return void* and take void* as parameter
typedef void* (*thread_func_t)(void*);

extern void *thread_compute(void *p);
extern void *thread_sum(void *ptr);
extern void *thread_increment(void *ptr);
extern void *thread_atomic_increment(void *ptr);
extern void *thread_atomic_load_store(void *a0);
extern void *thread_tls_test(void *a0);
extern unsigned int __aarch64_cas4_acq_rel(unsigned int, unsigned int, unsigned long long *);

// Global variables for thread operations
extern pthread_mutex_t counter_mutex;
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern unsigned int shared_counter;
extern unsigned int atomic_counter;
extern unsigned int data;
extern unsigned int ready;
extern unsigned int i;
extern unsigned int __dollar_d_3;
extern unsigned int signal_number;



// Function: __dollar_x at 0x4012e0
extern unsigned long long g_414ff8;

unsigned long long __dollar_x(unsigned long long v2, unsigned long long v3)
{
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 // g_414ff8 is used as a function pointer
 ((void (*)(void))g_414ff8)();
 return v0;
}


// Function: sub_4012f4 at 0x4012f4
void* sub_4012f4(void* v0, void* v1, unsigned long v2)
{
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return memcpy(v0, v1, v2);
}


// Function: init_have_lse_atomics at 0x401700
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)getauxval(16), 24) & 4278190081 & 1;
}


// Function: sub_401724 at 0x401724
void sub_401724(unsigned long a0)
{
 return; /* CRT stub removed */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401770 at 0x401770
void sub_401770()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_401788 at 0x401788
void sub_401788()
{
 /* CRT stub function deregister_tm_clones removed */
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4017fc at 0x4017fc
void sub_4017fc()
{
 /* CRT stub function __do_global_dtors_aux removed */
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401848 at 0x401848
long long sub_401848()
{
 unsigned long long v0; // x0

 /* CRT stub function frame_dummy removed */
 v0 = 0;
 return v0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_strcpy at 0x401854
long long param_strcpy(char *ptr, char *a1)
{
 unsigned long long len; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 strcpy(ptr, a1);
 len = strlen(ptr);
 return strlen(ptr);
}


// Function: call_strcpy at 0x401888
int call_strcpy()
{
 unsigned int v0; // [bp-0x34]
 char v1[32]; // [bp-0x30]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v0 = param_strcpy(&v1, "HelloLib");
 return v0;
}


// Function: param_strcmp at 0x4018b8
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v4; // w8
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v1 = strcmp(a0, a1);
 if (v1 > 0)
 {
 v0 = 1;
 return v0;
 }
 if (0 <= v1)
 v4 = 0;
 else
 v4 = 4294967295;
 v0 = v4;
 return v0;
}


// Function: call_strcmp at 0x401920
int call_strcmp()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v2 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 v0 = param_strcmp("bbb", "aaa");
 return v2 + v1 + v0;
}


// Function: param_strlen at 0x401990
int param_strlen(char *a0)
{
 unsigned long long len; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 len = strlen(a0);
 return len;
}


// Function: call_strlen at 0x4019c0
int call_strlen()
{
 char *v0; // [bp-0x18]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = "BinBench2025";
 return param_strlen(v0);
}


// Function: param_memcpy at 0x4019ec
int param_memcpy(void* a0, void* a1, unsigned long n)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x401a28
int call_memcpy()
{
 char v0; // [bp-0x48]
 char v1; // [bp-0x40]
 char v2; // [bp-0x38]
 unsigned long long v3; // [bp-0x30]
 unsigned int v4; // [bp-0x20]
 char *v5; // [bp-0x10]
 char v6; // [bp+0x0]

 v5 = &v6;
 v3 = 3169126501123975826038943907850;
 v4 = 50;
 memset(&v0, 0, 20);
 param_memcpy(&v0, &v3, 20);
 return *((int *)&v0) + *((int *)&v1) + *((int *)&v2);
}


// Function: param_memcmp at 0x401a88
unsigned int param_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned int v4; // w8
 unsigned int v0; // [bp-0x30]
 unsigned int v1; // [bp-0x2c]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v1 = memcmp(a0, a1, a2);
 if (v1 > 0)
 {
 v0 = 1;
 return v0;
 }
 if (0 <= v1)
 v4 = 0;
 else
 v4 = 4294967295;
 v0 = v4;
 return v0;
}


// Function: call_memcmp at 0x401af8
int call_memcmp()
{
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x58]
 char *v2; // [bp-0x50]
 unsigned int v3; // [bp-0x48]
 unsigned int v4; // [bp-0x44]
 char v5; // [bp-0x40], Other Possible Types: unsigned long long
 unsigned int v6; // [bp-0x38]
 unsigned long long v7; // [bp-0x30]
 unsigned int v8; // [bp-0x28]
 unsigned long long v10; // [bp-0x20]
 unsigned int v11; // [bp-0x18]
 char *v12; // [bp-0x10]
 char v13; // [bp+0x0]

 v12 = &v13;
 v2 = &v10;
 v10 = 8589934593;
 v11 = 3;
 v7 = 8589934593;
 v8 = 4;
 v0 = &v5;
 v5 = 8589934593;
 v6 = 3;
 v1 = 12;
 v4 = param_memcmp(&v10, &v7, 12);
 v3 = param_memcmp(v2, v0, v1);
 return v4 + v3;
}


// Function: param_printf at 0x401ba0
int param_printf(unsigned int a0, unsigned long a1)
{
 unsigned int v0; // [bp-0x24]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = printf("Value: %d, Name: %s\n", a0, a1);
 return v0;
}


// Function: call_printf at 0x401bdc
int call_printf()
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = param_printf(42, "Test");
 return v0;
}


// Function: param_scanf at 0x401c0c
unsigned int param_scanf(char *a0)
{
 unsigned int v0; // [bp-0x2c]
 char v1; // [bp-0x28], Other Possible Types: unsigned int
 char v2; // [bp-0x24], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 v0 = __isoc99_sscanf(a0, "%d,%d", &v2, &v1);
 if (v0 != 2)
 {
 v3 = 4294967295;
 return v3;
 }
 v3 = v2 + v1;
 return v3;
}


// Function: call_scanf at 0x401c78
int call_scanf()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_scanf("123,456");
}


// Function: param_fopen_fclose at 0x401c94
typedef struct FILE {
} FILE;

unsigned int param_fopen_fclose(char *a0)
{
 unsigned int v0; // [bp-0x2c]
 FILE *fp; // [bp-0x28]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 fp = fopen(a0, "r");
 if (fp)
 {
 v0 = fileno(fp);
 fclose(fp);
 v2 = v0;
 return v2;
 }
 v2 = 4294967295;
 return v2;
}


// Function: call_fopen_fclose at 0x401d00
unsigned long long call_fopen_fclose()
{
 unsigned long long v4; // x30
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v1 = &v3;
 v2 = v4;
 v0 = param_fopen_fclose("/etc/passwd");
 if (0 > v0)
 return 4294967295;
 return 42;
}


// Function: param_fread_fwrite at 0x401d38
unsigned int param_fread_fwrite(char *a0)
{
 unsigned int v12; // w8
 unsigned int v13; // w8
 char *v0; // [bp-0x80]
 unsigned int v1; // [bp-0x74]
 void* v2; // [bp-0x70]
 unsigned long v3; // [bp-0x68]
 unsigned long count; // [bp-0x60]
 unsigned long count; // [bp-0x58]
 void* fp; // [bp-0x50]
 char v7; // [bp-0x48]
 void* v8; // [bp-0x28]
 unsigned int v9; // [bp-0x14]
 char *v10; // [bp-0x10]
 char v11; // [bp+0x0]

 v10 = &v11;
 v8 = "BinBench Test Data";
 fp = fopen(a0, "w+");
 if (!fp)
 {
 v9 = 4294967295;
 return v9;
 }
 v2 = v8;
 count = fwrite(v2, 1, strlen(v8), fp);
 v3 = count;
 if (v3 != strlen(v8))
 {
 fclose(fp);
 v9 = 4294967294;
 return v9;
 }
 rewind(fp);
 v0 = &v7;
 count = fread(&v7, 1, count, fp);
 v0[count] = 0;
 fclose(fp);
 unlink(a0);
 v1 = 0;
 if (count == count)
 {
 if (strcmp(&v7, v8))
 v12 = 0;
 else
 v12 = 1;
 v1 = v12;
 }
 if ((char)arm64g_calculate_condition(25, (unsigned long long)(v1 & 1), 0, 0))
 v13 = 42;
 else
 v13 = 4294967293;
 v9 = v13;
 return v9;
}


// Function: call_fread_fwrite at 0x401e84
int call_fread_fwrite()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x401ea0
unsigned int param_malloc_free(unsigned long long a0)
{
 unsigned int v0; // [bp-0x34]
 unsigned long long idx; // [bp-0x30]
 unsigned int *ptr; // [bp-0x28], Other Possible Types: unsigned long long
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 for (idx = 0; a0 > idx; idx += 1)
 {
 ptr[idx] = 10 * (unsigned int)idx;
 }
 v0 = *(ptr) + ptr[1 + a0];
 free(ptr);
 ptr = 0;
 v3 = v0;
 return v3;
}


// Function: call_malloc_free at 0x401f68
int call_malloc_free()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_malloc_free(10);
}


// Function: param_memset at 0x401f80
unsigned int param_memset(void* a0, unsigned long n)
{
 unsigned long i; // [bp-0x38]
 unsigned int v1; // [bp-0x2c]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 memset(a0, 0, n);
 v1 = 0;
 for (i = 0; n > i; i += 1)
 {
 v1 += *((char *)a0 + i);
 }
 return v1;
}


// Function: call_memset at 0x402008
int call_memset()
{
 unsigned int i; // [bp-0x3c]
 unsigned long v1; // [bp-0x38]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 for (i = 0; 10 > i; i += 1)
 {
 *((unsigned int *)((char *)&v1 + 4 * i)) = 255;
 }
 param_memset(&v1, 40);
 return (int)v1 + v2;
}


// Function: param_strchr_strstr at 0x402074
int param_strchr_strstr(char *a0, char a1, char *a2)
{
 unsigned long long v0; // [bp-0x58]
 unsigned long long v1; // [bp-0x50]
 unsigned int v2; // [bp-0x44]
 unsigned long long ptr; // [bp-0x40]
 unsigned int v4; // [bp-0x34]
 unsigned long long ptr; // [bp-0x30]
 char *v6; // [bp-0x10]
 char v7; // [bp+0x0]

 v6 = &v7;
 ptr = strchr(a0, a1);
 if (ptr)
 v1 = ptr - a0;
 else
 v1 = 18446744073709551615;
 v4 = v1;
 ptr = strstr(a0, a2);
 if (ptr)
 v0 = ptr - a0;
 else
 v0 = 18446744073709551615;
 v2 = v0;
 return v4 + v2;
}


// Function: call_strchr_strstr at 0x40212c
int call_strchr_strstr()
{
 unsigned int v0; // [bp-0x1c]
 char *v1; // [bp-0x18]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v1 = "Hello BinBench Test";
 v0 = param_strchr_strstr(v1, 66, "Bench");
 return v0;
}


// Function: test_standard_library_functions at 0x40216c
extern char g_4039aa;
extern char g_4039cf;
extern char g_4039ea;
extern char g_403a05;
extern char g_403a21;
extern char g_403a3d;
extern char g_403a59;
extern char g_403a75;
extern char g_403a92;
extern char g_403aae;
extern char g_403aca;
extern char g_403ae6;
extern char g_403b01;

int test_standard_library_functions()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf(&g_4039aa);
 printf(&g_4039cf, call_strcpy() & 4294967295);
 printf(&g_4039ea, call_strcmp() & 4294967295);
 printf(&g_403a05, call_strlen() & 4294967295);
 printf(&g_403a21, call_memcpy() & 4294967295);
 printf(&g_403a3d, call_memcmp() & 4294967295);
 printf(&g_403a59, call_printf() & 4294967295);
 printf(&g_403a75, call_scanf() & 4294967295);
 printf(&g_403a92, call_fopen_fclose() & 4294967295);
 printf(&g_403aae, call_fread_fwrite() & 4294967295);
 printf(&g_403aca, call_malloc_free() & 4294967295);
 printf(&g_403ae6, call_memset() & 4294967295);
 return printf(&g_403b01, call_strchr_strstr() & 4294967295);
}


// Function: param_linux_syscall at 0x402278
int param_linux_syscall(unsigned long long a0)
{
 unsigned int v0; // [bp-0x24]
 unsigned long long v1; // [bp-0x20]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v1 = a0;
 v0 = syscall(56);
 if (0 <= v0)
 {
 syscall(57);
 v2 = v0;
 return v2;
 }
 v2 = -(*(__errno_location()));
 return v2;
}


// Function: call_linux_syscall at 0x4022f4
unsigned long long call_linux_syscall()
{
 unsigned long long v4; // x30
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v1 = &v3;
 v2 = v4;
 v0 = param_linux_syscall("/etc/passwd");
 if (0 > v0)
 return 4294967295;
 return 42;
}


// Function: param_win32_api at 0x40232c
unsigned int param_win32_api(unsigned long long a0)
{
 unsigned int v5; // w8
 char v0; // [bp-0xa0]
 unsigned long long v1; // [bp-0x70]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 if (0 > (int)stat(a0, &v0))
 {
 v2 = 4294967295;
 return v2;
 }
 if (0 < v1)
 v5 = 42;
 else
 v5 = 4294967294;
 v2 = v5;
 return v2;
}


// Function: call_win32_api at 0x40238c
int call_win32_api()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_win32_api("/etc/passwd");
}


// Function: param_fork_exec at 0x4023a8
long long param_fork_exec(char *a0, unsigned long long a1)
{
 unsigned int v0; // [bp-0x34]
 unsigned int v1[1]; // [bp-0x30]
 unsigned int result; // [bp-0x2c]
 unsigned long long v3; // [bp-0x28]
 unsigned int v4; // [bp-0x14]
 char *v5; // [bp-0x10]
 char v6; // [bp+0x0]

 v5 = &v6;
 v3 = a1;
 result = fork();
 if (0 > result)
 {
 v4 = 4294967295;
 return v4;
 }
 else if (!result)
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 else
 {
 v0 = waitpid(result, &v1, 0);
 if (0 > v0)
 {
 v4 = 4294967294;
 return v4;
 }
 else if (!((char)*(v1) & 127))
 {
 v4 = (*(v1) & 0xff00) >> 31 & 0xff000000 | __ROL__(*(v1) & 0xff00, 24) & 16777215;
 return v4;
 }
 else
 {
 v4 = 4294967293;
 return v4;
 }
 }
}


// Function: call_fork_exec at 0x402478
unsigned long long call_fork_exec()
{
 unsigned long long v4; // x30
 unsigned int result; // [bp-0x14]
 char *v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v1 = &v3;
 v2 = v4;
 result = param_fork_exec("/bin/true", 0);
 if (result)
 return 4294967295;
 return 42;
}


// Function: param_pipe_communication at 0x4024b4
long long param_pipe_communication()
{
 unsigned int v13; // w8
 char *v0; // [bp-0x68]
 void* v1; // [bp-0x60]
 unsigned int v2; // [bp-0x54]
 unsigned long long count; // [bp-0x50]
 void* v4; // [bp-0x48]
 unsigned int result; // [bp-0x40]
 char v6; // [bp-0x3c]
 char v7; // [bp-0x1c], Other Possible Types: unsigned int
 unsigned int v8; // [bp-0x18]
 unsigned int v9; // [bp-0x14]
 char *v10; // [bp-0x10]
 char v11; // [bp+0x0]

 v10 = &v11;
 if (0 > pipe(&v7))
 {
 v9 = 4294967295;
 return v9;
 }
 result = fork();
 if (0 > result)
 {
 v9 = 4294967294;
 return v9;
 }
 else if (!result)
 {
 close(v7);
 v4 = "HelloPipe";
 v2 = v8;
 v1 = v4;
 write(v2, v1, strlen(v4));
 close(v8);
 _exit(0); /* do not return */
 }
 else
 {
 close(v8);
 v0 = &v6;
 count = read(v7, &v6, 31);
 v0[count] = 0;
 close(v7);
 wait(NULL);
 if (0 < count)
 v13 = 42;
 else
 v13 = 4294967293;
 v9 = v13;
 return v9;
 }
}


// Function: call_pipe_communication at 0x4025c8
unsigned long long call_pipe_communication()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x4025dc
typedef struct sockaddr {
 unsigned short sin_family;
 char sa_data[14];
} sockaddr;

unsigned int param_socket_create()
{
 char *v0; // [bp-0x38]
 sockaddr v1; // [bp-0x30]
 unsigned int result; // [bp-0x1c]
 unsigned int v6; // [bp-0x18]
 unsigned int v7; // [bp-0x14]
 char *v8; // [bp-0x10]
 char v9; // [bp+0x0]

 v8 = &v9;
 v6 = socket(2, 1, 0);
 if (0 > v6)
 {
 v7 = 4294967295;
 return v7;
 }
 result = 1;
 if (0 > setsockopt(v6, 1, 2, &result, 4))
 {
 close(v6);
 v7 = 4294967294;
 return v7;
 }
 v0 = &v1;
 *((unsigned long long *)&v1.sin_family) = 0;
 *((unsigned long long *)&v1.sa_data[6]) = 0;
 v1.sin_family = 2;
 *((unsigned short *)&v1.sa_data[0]) = htons(0);
 *((unsigned int *)&v1.sa_data[2]) = 0;
 if (0 > bind(v6, v0, 16))
 {
 close(v6);
 v7 = 4294967293;
 return v7;
 }
 else if (0 > listen(v6, 5))
 {
 close(v6);
 v7 = 0xfffffffc;
 return v7;
 }
 else
 {
 close(v6);
 v7 = 42;
 return v7;
 }
}


// Function: call_socket_create at 0x4026fc
int call_socket_create()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x402710
unsigned int param_shmget_shmat()
{
 unsigned int v0; // [bp-0x3c]
 char *v1; // [bp-0x38]
 unsigned int v2; // [bp-0x2c]
 unsigned int v3; // [bp-0x28]
 unsigned int v4; // [bp-0x24]
 char *v5; // [bp-0x20]
 unsigned int v6; // [bp-0x14]
 char *v7; // [bp-0x10]
 char v8; // [bp+0x0]

 v7 = &v8;
 v5 = "/tmp/binbench_shm";
 v4 = open(v5, 66, 438);
 if (0 > v4)
 {
 v6 = 4294967295;
 return v6;
 }
 close(v4);
 v3 = ftok("/tmp/binbench_shm", 42);
 if (0 > v3)
 {
 v6 = 4294967295;
 return v6;
 }
 v2 = shmget(v3, 0x1000, 950);
 if (0 > v2)
 {
 v6 = 4294967294;
 return v6;
 }
 v1 = shmat(v2, 0, 0);
 if ((char)arm64g_calculate_condition(18, v1, 1, 0))
 {
 strcpy(v1, "SharedMemory");
 v0 = strlen(v1);
 shmdt(v1);
 shmctl(v2, 0, 0);
 v6 = v0;
 return v6;
 }
 v6 = 4294967293;
 return v6;
}


// Function: call_shmget_shmat at 0x402844
unsigned long long call_shmget_shmat()
{
 unsigned long long v4; // x30
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v1 = &v3;
 v2 = v4;
 v0 = param_shmget_shmat();
 if (0 >= v0)
 return 4294967295;
 return 42;
}


// Function: param_signal_handling at 0x402874
extern unsigned int __dollar_d_3;
extern unsigned int signal_number;

unsigned int param_signal_handling()
{
 unsigned int v8; // w8
 unsigned int v9; // w8
 sighandler_t result; // [bp-0x28]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x18]
 unsigned int v5; // [bp-0x14]
 char *v6; // [bp-0x10]
 char v7; // [bp+0x0]

 v6 = &v7;
 if (!((char)arm64g_calculate_condition(18, (unsigned long long)signal(10, signal_handler), 1, 0)))
 {
 v5 = 4294967295;
 return v5;
 }
 else if (!((char)arm64g_calculate_condition(18, (unsigned long long)signal(14, signal_handler), 1, 0)))
 {
 v5 = 4294967294;
 return v5;
 }
 else
 {
 __dollar_d_3 = 0;
 raise(10);
 v3 = 1000;
 while (true)
 {
 v2 = 0;
 if (!__dollar_d_3)
 {
 v4 = v3 - 1;
 if (v3 <= 0)
 v8 = 0;
 else
 v8 = 1;
 v2 = v8;
 v3 = v4;
 }
 if (!((char)v2 & 1))
 break;
 usleep(1000);
 }
 if (!__dollar_d_3)
 {
 v5 = 4294967293;
 return v5;
 }
 else if (signal_number != 10)
 {
 v5 = 0xfffffffc;
 return v5;
 }
 else
 {
 __dollar_d_3 = 0;
 alarm(1);
 v4 = 2000;
 while (true)
 {
 v1 = 0;
 if (!__dollar_d_3)
 {
 v3 = v4 - 1;
 if (v4 <= 0)
 v9 = 0;
 else
 v9 = 1;
 v1 = v9;
 v4 = v3;
 }
 if (!((char)v1 & 1))
 break;
 usleep(1000);
 }
 if (__dollar_d_3 && signal_number == 14)
 {
 result = NULL;
 signal(10, NULL);
 signal(14, result);
 v5 = 42;
 return v5;
 }
 v5 = 4294967291;
 return v5;
 }
 }
}


// Function: signal_handler at 0x402a44
extern unsigned int __dollar_d_3;
extern unsigned int signal_number;

long long signal_handler(unsigned long a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 __dollar_d_3 = 1;
 signal_number = v0;
 return a0;
}


// Function: call_signal_handling at 0x402a6c
int call_signal_handling()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_signal_handling();
}


// Function: test_system_calls at 0x402a80
extern char g_403b50;
extern char g_403b6c;
extern char g_403b88;
extern char g_403ba4;
extern char g_403bc0;
extern char g_403bdc;
extern char g_403bf8;
extern char g_403c14;

int test_system_calls()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf(&g_403b50);
 printf(&g_403b6c, call_linux_syscall() & 4294967295);
 printf(&g_403b88, call_win32_api() & 4294967295);
 printf(&g_403ba4, call_fork_exec() & 4294967295);
 printf(&g_403bc0, call_pipe_communication() & 4294967295);
 printf(&g_403bdc, call_socket_create() & 4294967295);
 printf(&g_403bf8, call_shmget_shmat() & 4294967295);
 return printf(&g_403c14, call_signal_handling() & 4294967295);
}


// Function: thread_compute at 0x402b28
void *thread_compute(void *p)
{
 unsigned int *ptr; // [bp-0x30]
 unsigned int v1; // [bp-0x28]
 unsigned int v2; // [bp-0x24]
 unsigned int *input; // [bp-0x10]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 input = (unsigned int *)p;
 v2 = *input;
 v1 = v2 * v2;
 ptr = malloc(4);
 *(ptr) = v1;
 return (void*)ptr;
}


// Function: param_pthread_create at 0x402b84
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int v0; // [bp-0x38]
 unsigned int result; // [bp-0x34]
 void *ptr; // [bp-0x30]
 unsigned int v3; // [bp-0x24]
 pthread_t v4; // [bp-0x20]
 unsigned int v5; // [bp-0x14]
 char *v6; // [bp-0x10]
 char v7; // [bp+0x0]

 v6 = &v7;
 v3 = a0;
 result = pthread_create(&v4, NULL, thread_compute, &v3);
 if (!result)
 {
 pthread_join(v4, &ptr);
 v0 = *(ptr);
 free(ptr);
 v5 = v0;
 return v5;
 }
 v5 = 4294967295;
 return v5;
}


// Function: call_pthread_create at 0x402c0c
int call_pthread_create()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_pthread_create(7);
}


// Function: thread_sum at 0x402c24
void *thread_sum(void *ptr)
{
 unsigned int i; // [bp-0x14]

 ((unsigned int*)ptr)[2] = 0;
 for (i = *((unsigned int*)ptr); ((unsigned int*)ptr)[1] >= i; i += 1)
 {
 ((unsigned int*)ptr)[2] = ((unsigned int*)ptr)[2] + i;
 }
 return NULL;
}


// Function: param_pthread_join at 0x402c98
unsigned int param_pthread_join()
{
 unsigned int j; // [bp-0x60]
 unsigned int v1; // [bp-0x5c]
 unsigned int i; // [bp-0x58]
 unsigned int result; // [bp-0x54]
 unsigned int v5; // [bp-0x50]
 unsigned int v14; // [bp-0x4c]
 unsigned int v6; // [bp-0x48]
 unsigned int v7; // [bp-0x44]
 unsigned int v8; // [bp-0x3c]
 unsigned int v9; // [bp-0x38]
 pthread_t v10[3]; // [bp-0x30]
 unsigned int v11; // [bp-0x14]
 char *v12; // [bp-0x10]
 char v13; // [bp+0x0]

 v12 = &v13;
 memset(&result, 0, 36);
 result = 1;
 v5 = 10;
 v6 = 11;
 v7 = 20;
 v8 = 21;
 v9 = 30;
 for (i = 0; 3 > i; i += 1)
 {
 if ((int)pthread_create(&v10[i], 0, thread_sum, &(&result)[3 * i]))
 {
 v11 = 4294967295;
 return v11;
 }
 }
 v1 = 0;
 for (j = 0; 3 > j; j += 1)
 {
 if ((int)pthread_join(v10[j], NULL))
 {
 v11 = 4294967294;
 return v11;
 }
 v1 += (&v14)[3 * j];
 }
 v11 = v1;
 return v11;
}


// Function: call_pthread_join at 0x402dec
int call_pthread_join()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_pthread_join();
}


// Function: thread_increment at 0x402e00
extern unsigned long long counter_mutex;
extern unsigned int shared_counter;

void *thread_increment(void *ptr)
{
 unsigned long long v0; // [bp-0x28]
 unsigned int i; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v2 = *(ptr);
 for (i = 0; v2 > i; i += 1)
 {
 v0 = &counter_mutex;
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(v0);
 usleep(1000);
 }
 return NULL;
}


// Function: param_mutex_lock at 0x402e8c
extern unsigned int shared_counter;

unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int v8; // w8
 unsigned int v0; // [bp-0x34]
 unsigned int j; // [bp-0x30]
 unsigned int i; // [bp-0x2c]
 unsigned int *ptr; // [bp-0x28]
 unsigned int v4; // [bp-0x1c]
 unsigned int v5; // [bp-0x14]
 char *v6; // [bp-0x10]
 char v7; // [bp+0x0]

 v6 = &v7;
 v4 = a1;
 ptr = malloc(__ROL__(a0, 3) & 18446744073709551608);
 if (!ptr)
 {
 v5 = 4294967295;
 return v5;
 }
 shared_counter = 0;
 for (i = 0; a0 > i; i += 1)
 {
 if ((int)pthread_create(&ptr[2 * i], 0, thread_increment, &v4))
 {
 free(ptr);
 v5 = 4294967294;
 return v5;
 }
 }
 for (j = 0; a0 > j; j += 1)
 {
 pthread_join(*((long long *)&ptr[2 * j]), NULL);
 }
 free(ptr);
 v0 = v4 * a0;
 if (shared_counter == v0)
 v8 = 42;
 else
 v8 = 4294967293;
 v5 = v8;
 return v5;
}


// Function: call_mutex_lock at 0x402fcc
int call_mutex_lock()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x402fe8
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern unsigned int data;
extern unsigned int i;

void *consumer_thread(void *a0)
{
 unsigned int *ptr; // [bp-0x28]
 unsigned int v1; // [bp-0x1c]
 unsigned long long v2; // [bp-0x18]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v2 = a0;
 pthread_mutex_lock(&cond_mutex);
 while (!i)
 {
 pthread_cond_wait(&cond, &cond_mutex);
 }
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = v1;
 return ptr;
}


// Function: producer_thread at 0x403070
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern unsigned int data;
extern unsigned int ready;

void *producer_thread(void *a0)
{
 unsigned int result; // [bp-0x24]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v2 = a0;
 result = 1;
 sleep(1);
 v1 = &cond_mutex;
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = result;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(v1);
 return 0;
}


// Function: param_condition_variable at 0x4030d8
extern unsigned int data;
extern unsigned int ready;

unsigned int param_condition_variable()
{
 unsigned int v0; // [bp-0x34]
 unsigned int *ptr; // [bp-0x30], Other Possible Types: char
 char v2; // [bp-0x28], Other Possible Types: unsigned long long
 char v3; // [bp-0x20], Other Possible Types: unsigned long long
 unsigned int v4; // [bp-0x14]
 char *v5; // [bp-0x10]
 char v6; // [bp+0x0]

 v5 = &v6;
 ready = 0;
 data = 0;
 if ((int)pthread_create(&v2, 0, consumer_thread, 0))
 {
 v4 = 4294967295;
 return v4;
 }
 else if ((int)pthread_create(&v3, 0, producer_thread, 0))
 {
 pthread_cancel(v2);
 v4 = 4294967294;
 return v4;
 }
 else
 {
 pthread_join(v2, &ptr);
 pthread_join(v3, 0);
 v0 = *(ptr);
 free(ptr);
 v4 = v0;
 return v4;
 }
}


// Function: call_condition_variable at 0x40319c
int call_condition_variable()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x4031b0
extern unsigned int atomic_counter;

void *thread_atomic_increment(void *ptr)
{
 unsigned int v14; // w0
 unsigned long long v15; // x8
 unsigned long long v0; // [bp-0x50]
 unsigned int v1; // [bp-0x44]
 unsigned int v2; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 char v4; // [bp-0x38]
 unsigned int v5; // [bp-0x34]
 unsigned int v6; // [bp-0x30]
 unsigned int v7; // [bp-0x2c]
 unsigned int v8; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int i; // [bp-0x20]
 unsigned int v11; // [bp-0x1c]
 char *v12; // [bp-0x10]
 char v13; // [bp+0x0]

 v12 = &v13;
 v11 = *(unsigned int*)ptr;
 for (i = 0; v11 > i; i += 1)
 {
 result = 1;
 v0 = (unsigned long long)&atomic_counter;
 v8 = __aarch64_ldadd4_acq_rel(result, &atomic_counter);
 v7 = i;
 v6 = i + 1000;
 v5 = v6;
 v1 = v7;
 v14 = __aarch64_cas4_acq_rel(v7, v5, (unsigned long long*)v0);
 if (v14 != v1)
 v15 = 0;
 else
 v15 = 1;
 v2 = v14;
 v3 = v15;
 if (!((char)v15 & 1))
 v7 = v2;
 v4 = (char)v3 & 1;
 }
 return NULL;
}


// Function: thread_atomic_load_store at 0x403298
extern unsigned int atomic_counter;

void *thread_atomic_load_store(void *a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 // Memory barrier macro
#define MBusEvent_Imbe_Fence() __asm__ __volatile__("dmb ish" ::: "memory")
 v1 = atomic_counter;
 v2 = v1;
 v0 = v2 + 100;
 // Memory barrier macro
#define MBusEvent_Imbe_Fence() __asm__ __volatile__("dmb ish" ::: "memory")
 atomic_counter = v0;
 return NULL;
}


// Function: param_atomic_ops at 0x4032d8
extern unsigned int atomic_counter;

unsigned int param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned int v11; // w8
 unsigned int v0; // [bp-0x44]
 unsigned int v1; // [bp-0x40]
 unsigned int j; // [bp-0x3c]
 pthread_t v3; // [bp-0x38]
 unsigned int i; // [bp-0x30]
 unsigned int result; // [bp-0x2c]
 unsigned int *ptr; // [bp-0x28]
 unsigned int v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x14]
 char *v9; // [bp-0x10]
 char v10; // [bp+0x0]

 v9 = &v10;
 v7 = a1;
 ptr = malloc(__ROL__(a0, 3) & 18446744073709551608);
 if (!ptr)
 {
 v8 = 4294967295;
 return v8;
 }
 result = 0;
 // Memory barrier macro
#define MBusEvent_Imbe_Fence() __asm__ __volatile__("dmb ish" ::: "memory")
 atomic_counter = result;
 for (i = 0; a0 > i; i += 1)
 {
 if ((int)pthread_create(&ptr[2 * i], NULL, thread_atomic_increment, &v7))
 {
 free(ptr);
 v8 = 4294967294;
 return v8;
 }
 }
 if (!(int)pthread_create(&v3, NULL, thread_atomic_load_store, NULL))
 pthread_join(v3, NULL);
 for (j = 0; a0 > j; j += 1)
 {
 pthread_join(*((long long *)&ptr[2 * j]), NULL);
 }
 // Memory barrier macro
#define MBusEvent_Imbe_Fence() __asm__ __volatile__("dmb ish" ::: "memory")
 v0 = atomic_counter;
 v1 = v0;
 free(ptr);
 if (0 < v1)
 v11 = 42;
 else
 v11 = 4294967293;
 v8 = v11;
 return v8;
}


// Function: call_atomic_ops at 0x403458
int call_atomic_ops()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x403474
typedef struct struct_0 {
 char padding_0[16];
 unsigned int field_10;
} struct_0;

void* thread_tls_test(void *a0)
{
 struct_0 *v5; // tpidr_el0
 struct_0 *ptr; // [bp-0x38]
 unsigned int p[2]; // [bp-0x30]
 unsigned int v2; // [bp-0x24]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 ptr = &v5->field_10;
 v2 = *((int *)&ptr->padding_0[0]);
 *((unsigned int *)&ptr->padding_0[0]) = *((int *)&ptr->padding_0[0]) + 50;
 strncpy(v5 + 1, a0, 31);
 *((void* *)&p[0]) = malloc(8);
 p[0] = v2;
 p[1] = *((int *)&ptr->padding_0[0]);
 return p;
}


// Function: param_thread_local_storage at 0x403504
unsigned int param_thread_local_storage(unsigned int a0)
{
 unsigned int v17; // w8
 unsigned int v18; // w8
 unsigned int v0; // [bp-0x64]
 unsigned long size; // [bp-0x60]
 unsigned int v2; // [bp-0x58]
 unsigned int v3; // [bp-0x54]
 unsigned int ptr[2]; // [bp-0x50]
 unsigned int v5[2]; // [bp-0x48]
 char k; // [bp-0x40], Other Possible Types: unsigned int
 unsigned int v7; // [bp-0x3c]
 unsigned int v8; // [bp-0x38]
 unsigned int l; // [bp-0x34]
 unsigned int j; // [bp-0x30]
 unsigned int i; // [bp-0x2c]
 unsigned int *p; // [bp-0x28]
 unsigned int *addr; // [bp-0x20]
 unsigned int v14; // [bp-0x14]
 char *v15; // [bp-0x10]
 char v16; // [bp+0x0]

 v15 = &v16;
 addr = malloc(__ROL__(a0, 3) & 18446744073709551608);
 p = malloc(__ROL__(a0, 3) & 18446744073709551608);
 if (addr && p)
 {
 for (i = 0; a0 > i; i += 1)
 {
 size = 16;
 *((void* *)&p[2 * i]) = malloc(16);
 snprintf(*((long long *)&p[2 * i]), size, "Thread-%d", i);
 }
 for (j = 0; a0 > j; j += 1)
 {
 if ((int)pthread_create(&addr[2 * j], 0, thread_tls_test, *((long long *)&p[2 * j])))
 {
 for (l = 0; j >= l; l += 1)
 {
 free(*((long long *)&p[2 * l]));
 }
 free(p);
 free(addr);
 v14 = 4294967294;
 return v14;
 }
 }
 memset(&k, 0, 12);
 for (; a0 > k; k += 1)
 {
 void *thread_ret = NULL;
 pthread_join(*((long long *)&addr[2 * k]), &thread_ret);
 *((unsigned int *[2])&ptr[0]) = v5;
 v8 += ptr[0];
 v7 += ptr[1];
 free(ptr);
 free(*((long long *)&p[2 * k]));
 }
 free(p);
 free(addr);
 v3 = 100 * a0;
 v2 = 150 * a0;
 v0 = 0;
 if (v8 == v3)
 {
 if (v7 != v2)
 v17 = 0;
 else
 v17 = 1;
 v0 = v17;
 }
 if ((char)arm64g_calculate_condition(25, (unsigned long long)(v0 & 1), 0, 0))
 v18 = 42;
 else
 v18 = 4294967293;
 v14 = v18;
 return v14;
 }
 v14 = 4294967295;
 return v14;
}


// Function: call_thread_local_storage at 0x4037a0
int call_thread_local_storage()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x4037b8
extern char g_403c3a;
extern char g_403c59;
extern char g_403c75;
extern char g_403c92;
extern char g_403cae;
extern char g_403cca;
extern char g_403ce6;

int test_thread_concurrency()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf(&g_403c3a);
 printf(&g_403c59, call_pthread_create() & 4294967295);
 printf(&g_403c75, call_pthread_join() & 4294967295);
 printf(&g_403c92, call_mutex_lock() & 4294967295);
 printf(&g_403cae, call_condition_variable() & 4294967295);
 printf(&g_403cca, call_atomic_ops() & 4294967295);
 return printf(&g_403ce6, call_thread_local_storage() & 4294967295);
}


// Function: main at 0x40384c
unsigned int main()
{
 unsigned int result; // [bp-0x18]
 unsigned int flag1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 result = 0;
 flag1 = 0;
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return result;
}


// Failed to decompile function __aarch64_cas4_acq_rel at 0x403880
// Function: sub_403894 at 0x403894
long long sub_403894()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_4038b4 at 0x4038b4
long long sub_4038b4()
{
 unsigned long long v0; // x0

 v0 = __aarch64_ldadd4_acq_rel();
 return __aarch64_ldadd4_acq_rel();
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x4038c0
// Function: sub_4038d4 at 0x4038d4
long long sub_4038d4()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


