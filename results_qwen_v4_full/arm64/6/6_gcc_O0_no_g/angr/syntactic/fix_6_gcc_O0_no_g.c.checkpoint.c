// Angr Decompilation of 6_gcc_O0_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/auxv.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <errno.h>

extern void __stack_chk_fail(void);
extern int __isoc99_sscanf(const char *restrict, const char *restrict, ...);
extern int __aarch64_ldadd4_acq_rel(int, unsigned int *);
extern unsigned int __aarch64_cas4_acq_rel(unsigned int, unsigned int, unsigned int *);

#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x4013d0
static unsigned long long g_414dc8 = 0;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return g_414dc8;
}


// Function: sub_4013e4 at 0x4013e4
long long sub_4013e4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return (long long)memcpy(v0, v1, v2);
}


// Function: init_have_lse_atomics at 0x401800
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)getauxval(16), 24) & 4278190081 & 1;
}


// Function: sub_401824 at 0x401824
void sub_401824(unsigned long a0)
{
 // _start(); /* do not return */
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
 // deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4018fc at 0x4018fc
void sub_4018fc()
{
 // __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401948 at 0x401948
long long sub_401948()
{
 unsigned long long v0; // x0

 // v0 = frame_dummy();
 // return frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_strcpy at 0x401954
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


// Function: call_strcpy at 0x401980
extern char __stack_chk_guard;

long long call_strcpy()
{
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x2c]
 char v2[32]; // [bp-0x28]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 v1 = param_strcpy(v2, "HelloLib");
 if (v3 == *((long long *)&__stack_chk_guard))
 return v1;
 __stack_chk_fail(); /* do not return */
}


// Function: param_strcmp at 0x4019e8
unsigned long long param_strcmp(char *a0, char *a1)
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = strcmp(a0, a1);
 if (0 < v1)
 {
 return 1;
 }
 else if (0 > v1)
 {
 return 4294967295;
 }
 else
 {
 return 0;
 }
}


// Function: call_strcmp at 0x401a3c
int call_strcmp()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]
 char v4; // [bp+0x0]

 v0 = &v4;
 v1 = param_strcmp("abc", "def");
 v2 = param_strcmp("xyz", "xyz");
 v3 = param_strcmp("bbb", "aaa");
 return v1 + v2 + v3;
}


// Function: param_strlen at 0x401aa8
unsigned long long param_strlen(char *a0)
{
 char *v0; // [bp-0x30]
 unsigned long long len; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 len = strlen(a0);
 return len;
}


// Function: call_strlen at 0x401acc
unsigned long long call_strlen()
{
 unsigned long long len; // x0
 char *v0; // [bp-0x20]
 char *v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = "BinBench2025";
 len = param_strlen(v1);
 return param_strlen(v1);
}


// Function: param_memcpy at 0x401af0
long long param_memcpy(void* a0, void* a1, unsigned long n)
{
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x401b20
extern char __stack_chk_guard;

unsigned long long call_memcpy()
{
 char *v0; // [bp-0x50]
 unsigned long v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x30]
 unsigned int v3; // [bp-0x28]
 char v4; // [bp-0x20]
 char v5; // [bp-0x18]
 char v6; // [bp-0x10]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 v1 = 85899345930;
 v2 = 171798691870;
 v3 = 50;
 memset(&v4, 0, 20);
 param_memcpy(&v4, &v1, 20);
 if (v7 == *((long long *)&__stack_chk_guard))
 return *((int *)&v4) + *((int *)&v5) + *((int *)&v6) & 4294967295;
 __stack_chk_fail(); /* do not return */
}


// Function: param_memcmp at 0x401bb8
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2)
{
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = memcmp(a0, a1, a2);
 if (0 < v1)
 {
 return 1;
 }
 else if (0 > v1)
 {
 return 4294967295;
 }
 else
 {
 return 0;
 }
}


// Function: call_memcmp at 0x401c14
extern char __stack_chk_guard;

unsigned long long call_memcmp()
{
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 unsigned long v3; // [bp-0x38]
 unsigned int v4; // [bp-0x30]
 unsigned long v5; // [bp-0x28]
 unsigned int v6; // [bp-0x20]
 unsigned long v7; // [bp-0x18]
 unsigned int v8; // [bp-0x10]
 unsigned long v9; // [bp-0x8]
 char v10; // [bp+0x0]

 v0 = &v10;
 v9 = *((long long *)&__stack_chk_guard);
 v3 = 8589934593;
 v4 = 3;
 v5 = 8589934593;
 v6 = 4;
 v7 = 8589934593;
 v8 = 3;
 v1 = param_memcmp(&v3, &v5, 12);
 v2 = param_memcmp(&v3, &v7, 12);
 if (v9 == *((long long *)&__stack_chk_guard))
 return v1 + v2 & 4294967295;
 __stack_chk_fail(); /* do not return */
}


// Function: param_printf at 0x401ce8
int param_printf(unsigned int a0, char *a1)
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = printf("Value: %d, Name: %s\n", a0, a1);
 return v1;
}


// Function: call_printf at 0x401d1c
int call_printf()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = param_printf(42, "Test");
 return v1;
}


// Function: param_scanf at 0x401d44
extern char __stack_chk_guard;

long long param_scanf(char *a0)
{
 unsigned int v6; // w0
 char *v0; // [bp-0x40]
 char v1; // [bp-0x14], Other Possible Types: unsigned int
 char v2; // [bp-0x10], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0xc]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v3 = __isoc99_sscanf(a0, "%d,%d", &v1, &v2);
 if (v3 == 2)
 v6 = v1 + v2;
 else
 v6 = 4294967295;
 if (v4 == *((long long *)&__stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: call_scanf at 0x401dd8
unsigned long long call_scanf()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_scanf("123,456");
 return param_scanf("123,456");
}


// Function: param_fopen_fclose at 0x401df4
unsigned long long param_fopen_fclose(char *a0)
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0xc]
 FILE *fp; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 fp = fopen(a0, "r");
 if (fp)
 {
 v1 = fileno(fp);
 fclose(fp);
 return v1;
 }
 return 4294967295;
}


// Function: call_fopen_fclose at 0x401e48
unsigned long long call_fopen_fclose()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = param_fopen_fclose("/etc/passwd");
 if (v1 < 0)
 return 4294967295;
 return 42;
}


// Function: param_fread_fwrite at 0x401e80
extern char __stack_chk_guard;

long long param_fread_fwrite(char *a0)
{
 unsigned int v8; // w0
 char *v0; // [bp-0x70]
 void* v1; // [bp-0x48]
 void* fp; // [bp-0x40]
 unsigned long count; // [bp-0x38]
 unsigned long count2; // [bp-0x30]
 char v5; // [bp-0x28]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 v1 = "BinBench Test Data";
 fp = fopen(a0, "w+");
 if (!fp)
 {
 v8 = 4294967295;
 }
 else
 {
 count = fwrite(v1, 1, strlen(v1), fp);
 if (count != strlen(v1))
 {
 fclose(fp);
 v8 = 4294967294;
 }
 else
 {
 rewind(fp);
 count2 = fread(&v5, 1, count, fp);
 (&v5)[count2] = 0;
 fclose(fp);
 unlink(a0);
 if (count == count2 && !strcmp(&v5, v1))
 v8 = 42;
 else
 v8 = 4294967293;
 }
 }
 if (v6 == *((long long *)&__stack_chk_guard))
 return v8;
 __stack_chk_fail(); /* do not return */
}


// Function: call_fread_fwrite at 0x401fb8
unsigned long long call_fread_fwrite()
{
 unsigned long long count; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x401fd4
unsigned long long param_malloc_free(unsigned long long a0)
{
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x14]
 unsigned long long i; // [bp-0x10]
 unsigned int *ptr; // [bp-0x8], Other Possible Types: unsigned long long
 char v4; // [bp+0x0]

 v0 = &v4;
 ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!ptr)
 return 4294967295;
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)((char *)ptr + (__ROL__(i, 2) & 18446744073709551612))) = (((((unsigned int)i * 4 | (unsigned int)i >> 30) & 0xfffffffc) + (unsigned int)i) * 2 | (((unsigned int)i * 4 | (unsigned int)i >> 30) & 0xfffffffc) + (unsigned int)i >> 31) & 4294967294;
 }
 v1 = *(ptr) + *((int *)(-4 + (char *)ptr + (__ROL__(a0, 2) & 18446744073709551612)));
 free(ptr);
 ptr = 0;
 return v1;
}


// Function: call_malloc_free at 0x40209c
unsigned long long call_malloc_free()
{
 unsigned long long ptr; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = param_malloc_free(10);
 return param_malloc_free(10);
}


// Function: param_memset at 0x4020b4
unsigned int param_memset(void* a0)
{
 unsigned long n; // x1
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x14]
 unsigned long i; // [bp-0x10]
 char v3; // [bp+0x0]

 v0 = &v3;
 memset(a0, 0, n);
 v1 = 0;
 for (i = 0; i < n; i += 1)
 {
 v1 += *((char *)a0 + i);
 }
 return v1;
}


// Function: call_memset at 0x402130
extern char __stack_chk_guard;

unsigned long long call_memset()
{
 char *v0; // [bp-0x50]
 unsigned int i; // [bp-0x34]
 unsigned long v2; // [bp-0x30]
 unsigned int v3; // [bp-0xc]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 for (i = 0; i <= 9; i += 1)
 {
 *((unsigned int *)((char *)&v2 + (__ROL__(i, 2) & 18446744073709551612))) = 255;
 }
 param_memset(&v2);
 if (v4 == *((long long *)&__stack_chk_guard))
 return (unsigned int)v2 + v3 & 4294967295;
 __stack_chk_fail(); /* do not return */
}


// Function: param_strchr_strstr at 0x4021c8
int param_strchr_strstr(char *a0, char a1, char *a2)
{
 unsigned int v6; // w0
 unsigned int v7; // w0
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 char *ptr; // [bp-0x10]
 char *ptr2; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 ptr = strchr(a0, a1);
 if (ptr)
 v6 = (unsigned int)(ptr - a0);
 else
 v6 = 4294967295;
 v1 = v6;
 ptr2 = strstr(a0, a2);
 if (ptr2)
 v7 = (unsigned int)(ptr2 - a0);
 else
 v7 = 4294967295;
 v2 = v7;
 return v1 + v2;
}


// Function: call_strchr_strstr at 0x40225c
int call_strchr_strstr()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0xc]
 char *v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = "Hello BinBench Test";
 v1 = param_strchr_strstr(v2, 66, "Bench");
 return v1;
}


// Function: test_standard_library_functions at 0x402294
static const char g_403b80[] = "=== Standard Library Functions ===\n";
static const char g_403ba8[] = "strcpy result: %u\n";
static const char g_403bc8[] = "strcmp result: %u\n";
static const char g_403be8[] = "strlen result: %u\n";
static const char g_403c08[] = "memcpy result: %u\n";
static const char g_403c28[] = "memcmp result: %u\n";
static const char g_403c48[] = "printf result: %u\n";
static const char g_403c68[] = "scanf result: %u\n";
static const char g_403c88[] = "fopen_fclose result: %u\n";
static const char g_403ca8[] = "fread_fwrite result: %u\n";
static const char g_403cc8[] = "malloc_free result: %u\n";
static const char g_403ce8[] = "memset result: %u\n";
static const char g_403d08[] = "strchr_strstr result: %u\n";

int test_standard_library_functions()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_403b80);
 printf(g_403ba8, call_strcpy() & 4294967295);
 printf(g_403bc8, call_strcmp() & 4294967295);
 printf(g_403be8, call_strlen() & 4294967295);
 printf(g_403c08, call_memcpy() & 4294967295);
 printf(g_403c28, call_memcmp() & 4294967295);
 printf(g_403c48, call_printf() & 4294967295);
 printf(g_403c68, call_scanf() & 4294967295);
 printf(g_403c88, call_fopen_fclose() & 4294967295);
 printf(g_403ca8, call_fread_fwrite() & 4294967295);
 printf(g_403cc8, call_malloc_free() & 4294967295);
 printf(g_403ce8, call_memset() & 4294967295);
 return printf(g_403d08, call_strchr_strstr() & 4294967295);
}


// Function: param_linux_syscall at 0x4023a4
unsigned int param_linux_syscall(unsigned long long a0)
{
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x18]
 unsigned int v2; // [bp-0x4]
 char v3; // [bp+0x0]

 v0 = &v3;
 v1 = a0;
 v2 = syscall(56);
 if (0 <= v2)
 {
 syscall(57);
 return v2;
 }
 return -(*(__errno_location()));
}


// Function: call_linux_syscall at 0x4023fc
unsigned long long call_linux_syscall()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = param_linux_syscall((unsigned long long)"/etc/passwd");
 if (v1 < 0)
 return 4294967295;
 return 42;
}


// Function: param_win32_api at 0x402434
extern char __stack_chk_guard;

long long param_win32_api(char *a0)
{
 unsigned int v5; // w0
 char *v0; // [bp-0xb0]
 char v1; // [bp-0x88]
 unsigned long long v2; // [bp-0x58]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 if (0 > (int)stat(a0, (struct stat *)&v1))
 {
 v5 = 4294967295;
 }
 else if (v2 > 0)
 {
 v5 = 42;
 }
 else
 {
 v5 = 4294967294;
 }
 if (v3 == *((long long *)&__stack_chk_guard))
 return v5;
 __stack_chk_fail(); /* do not return */
}


// Function: call_win32_api at 0x4024bc
unsigned long long call_win32_api()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_win32_api("/etc/passwd");
 return param_win32_api("/etc/passwd");
}


// Function: param_fork_exec at 0x4024d8
extern char __stack_chk_guard;

long long param_fork_exec(char *a0, unsigned long long a1)
{
 unsigned int v7; // w0
 char *v0; // [bp-0x40]
 unsigned long long v1; // [bp-0x30]
 int v2[1]; // [bp-0x14]
 unsigned int result; // [bp-0x10]
 unsigned int v4; // [bp-0xc]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v1 = a1;
 v5 = *((long long *)&__stack_chk_guard);
 result = fork();
 if (0 > result)
 {
 v7 = 4294967295;
 }
 else
 {
 if (!result)
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 v4 = waitpid(result, v2, 0);
 if (0 > v4)
 {
 v7 = 4294967294;
 }
 else if (!((char)*(v2) & 127))
 {
 v7 = (*(v2) >> 31 & 0xff000000 | __ROL__(*(v2), 24) & 16777215) & 255;
 }
 else
 {
 v7 = 4294967293;
 }
 }
 if (v5 == *((long long *)&__stack_chk_guard))
 return v7;
 __stack_chk_fail(); /* do not return */
}


// Function: call_fork_exec at 0x4025c0
unsigned long long call_fork_exec()
{
 char *v0; // [bp-0x20]
 unsigned int result; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 result = param_fork_exec("/bin/true", 0);
 if (result)
 return 4294967295;
 return 42;
}


// Function: param_pipe_communication at 0x4025fc
extern char __stack_chk_guard;

long long param_pipe_communication()
{
 unsigned int v9; // w0
 char *v0; // [bp-0x70]
 unsigned int result; // [bp-0x44]
 unsigned long long count; // [bp-0x40]
 void* v3; // [bp-0x38]
 int v4[2]; // [bp-0x30]
 unsigned int v5; // [bp-0x2c]
 char v6; // [bp-0x28]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 if (0 > pipe(v4))
 {
 v9 = 4294967295;
 }
 else
 {
 result = fork();
 if (0 > result)
 {
 v9 = 4294967294;
 }
 else
 {
 if (!result)
 {
 close(v4[1]);
 v3 = "HelloPipe";
 write(v4[0], v3, strlen(v3));
 close(v4[0]);
 _exit(0); /* do not return */
 }
 close(v4[0]);
 count = read(v4[1], &v6, 31);
 (&v6)[count] = 0;
 close(v4[1]);
 wait(NULL);
 if (count > 0)
 v9 = 42;
 else
 v9 = 4294967293;
 }
 }
 if (v7 == *((long long *)&__stack_chk_guard))
 return v9;
 __stack_chk_fail(); /* do not return */
}


// Function: call_pipe_communication at 0x402720
unsigned long long call_pipe_communication()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x402734

extern char __stack_chk_guard;

long long param_socket_create()
{
 unsigned int v9; // w0
 char *v0; // [bp-0x30]
 unsigned int result; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 struct sockaddr_in v3; // [bp-0x18]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 v2 = socket(2, 1, 0);
 if (0 > v2)
 {
 v9 = 4294967295;
 }
 else
 {
 result = 1;
 if (0 > setsockopt(v2, 1, 2, &result, 4))
 {
 close(v2);
 v9 = 4294967294;
 }
 else
 {
 memset(&v3, 0, 16);
 v3.sin_family = 2;
 v3.sin_port = htons(0);
 v3.sin_addr.s_addr = 0;
 if (0 > bind(v2, (struct sockaddr *)&v3, sizeof(v3)))
 {
 close(v2);
 v9 = 4294967293;
 }
 else if (0 > listen(v2, 5))
 {
 close(v2);
 v9 = 0xfffffffc;
 }
 else
 {
 close(v2);
 v9 = 42;
 }
 }
 }
 if (v7 == *((long long *)&__stack_chk_guard))
 return v9;
 __stack_chk_fail(); /* do not return */
}


// Function: call_socket_create at 0x40286c
unsigned long long call_socket_create()
{
 unsigned long long sock; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x402880
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_5;
} struct_0;

unsigned long long param_shmget_shmat()
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 char *v5; // [bp-0x10]
 struct_0 *ptr; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v5 = "/tmp/binbench_shm";
 v1 = open(v5, 66, 438);
 if (0 > v1)
 return 4294967295;
 close(v1);
 v2 = ftok("/tmp/binbench_shm", 42);
 if (0 > v2)
 return 4294967295;
 v3 = shmget(v2, 0x1000, 950);
 if (0 > v3)
 return 4294967294;
 ptr = shmat(v3, 0, 0);
 if (ptr != (void *)-1)
 {
 ptr->field_0 = 7299600957910902867;
 *((unsigned long long *)((char *)&ptr->field_0 + 5)) = 34184295084281188;
 v4 = strlen((char *)ptr);
 shmdt(ptr);
 shmctl(v3, 0, 0);
 return v4;
 }
 return 4294967293;
}


// Function: call_shmget_shmat at 0x40298c
unsigned long long call_shmget_shmat()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = param_shmget_shmat();
 if (v1 <= 0)
 return 4294967295;
 return 42;
}


// Function: signal_handler at 0x4029bc
static unsigned int __dollar_d = 0;
static unsigned int signal_number = 0;

void signal_handler(int a0)
{
 __dollar_d = 1;
 signal_number = a0;
}


// Function: param_signal_handling at 0x4029f0

unsigned long long param_signal_handling()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x4]
 unsigned int v2; // [bp-0x4]
 char v3; // [bp+0x0]

 v0 = &v3;
 if (signal(10, signal_handler) == (void (*)(int))-1)
 {
 return 4294967295;
 }
 else if (signal(14, signal_handler) == (void (*)(int))-1)
 {
 return 4294967294;
 }
 else
 {
 __dollar_d = 0;
 raise(10);
 v1 = 1000;
 while (true)
 {
 if (__dollar_d || !((v2 = v1 - 1, 0 < v1)))
 break;
 usleep(1000);
 v1 = v2;
 }
 if (!__dollar_d)
 {
 return 4294967293;
 }
 else if (signal_number != 10)
 {
 return 0xfffffffc;
 }
 else
 {
 __dollar_d = 0;
 alarm(1);
 v1 = 2000;
 while (true)
 {
 if (__dollar_d || !((v2 = v1 - 1, 0 < v1)))
 break;
 usleep(1000);
 v1 = v2;
 }
 if (!__dollar_d || signal_number != 14)
 return 4294967291;
 signal(10, (void (*)(int))0);
 signal(14, (void (*)(int))0);
 return 42;
 }
 }
}


// Function: call_signal_handling at 0x402b64
unsigned long long call_signal_handling()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_signal_handling();
 return param_signal_handling();
}


// Function: test_system_calls at 0x402b78
static const char g_403d70[] = "=== System Calls ===\n";
static const char g_403d90[] = "linux_syscall result: %u\n";
static const char g_403db0[] = "win32_api result: %u\n";
static const char g_403dd0[] = "fork_exec result: %u\n";
static const char g_403df0[] = "pipe_communication result: %u\n";
static const char g_403e10[] = "socket_create result: %u\n";
static const char g_403e30[] = "shmget_shmat result: %u\n";
static const char g_403e50[] = "signal_handling result: %u\n";

int test_system_calls()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_403d70);
 printf(g_403d90, call_linux_syscall() & 4294967295);
 printf(g_403db0, call_win32_api() & 4294967295);
 printf(g_403dd0, call_fork_exec() & 4294967295);
 printf(g_403df0, call_pipe_communication() & 4294967295);
 printf(g_403e10, call_socket_create() & 4294967295);
 printf(g_403e30, call_shmget_shmat() & 4294967295);
 return printf(g_403e50, call_signal_handling() & 4294967295);
}


// Function: thread_compute at 0x402c24
unsigned int * thread_compute(unsigned int *p)
{
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int *ptr; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v1 = *(p);
 v2 = v1 * v1;
 ptr = malloc(4);
 *(ptr) = v2;
 return ptr;
}


// Function: param_pthread_create at 0x402c74
extern char __stack_chk_guard;

long long param_pthread_create(unsigned int a0)
{
 unsigned int v7; // w0
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x24]
 unsigned int result; // [bp-0x20]
 pthread_t v3; // [bp-0x18]
 unsigned int *ptr; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 v1 = a0;
 result = pthread_create(&v3, 0, (void *(*)(void *))thread_compute, &v1);
 if (result)
 {
 v7 = 4294967295;
 }
 else
 {
 pthread_join(v3, (void **)&ptr);
 v7 = *(ptr);
 free(ptr);
 }
 if (v5 == *((long long *)&__stack_chk_guard))
 return v7;
 __stack_chk_fail(); /* do not return */
}


// Function: call_pthread_create at 0x402d28
unsigned long long call_pthread_create()
{
 unsigned long long count; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 count = param_pthread_create(7);
 return param_pthread_create(7);
}


// Function: thread_sum at 0x402d40
unsigned long long thread_sum(unsigned int *ptr)
{
 unsigned int i; // [bp-0xc]

 ptr[2] = 0;
 for (i = *(ptr); i <= ptr[1]; i += 1)
 {
 ptr[2] = ptr[2] + i;
 }
 return 0;
}


// Function: param_pthread_join at 0x402dac
extern char __stack_chk_guard;

long long param_pthread_join()
{
 unsigned long long v10; // x4
 unsigned int v11; // w0
 char *v0; // [bp-0x70]
 unsigned int v1; // [bp-0x54]
 unsigned int v2; // [bp-0x50]
 unsigned int v3; // [bp-0x4c]
 unsigned long v4; // [bp-0x48]
 unsigned long long v5; // [bp-0x30]
 unsigned long v12; // [bp-0x28]
 unsigned long long v6; // [bp-0x20]
 unsigned int result; // [bp-0x10]
 unsigned long v8; // [bp-0x8]
 char v9; // [bp+0x0]

 v0 = &v9;
 v8 = *((long long *)&__stack_chk_guard);
 v5 = 871509787656907713571933126657;
 v6 = 2376844875815311753354219094036;
 result = 0;
 v1 = 0;
 while (true)
 {
 if (v1 <= 2)
 {
 v10 = (unsigned long long)((char *)&v4 + (__ROL__(v1, 3) & 18446744073709551608));
 if ((int)pthread_create((pthread_t *)v10, 0, (void *(*)(void *))thread_sum, (void *)((char *)&v5 + (__ROL__((__ROL__(v1, 1) & 18446744073709551614) + v1, 2) & 18446744073709551612))))
 {
 v11 = 4294967295;
 break;
 }
 else
 {
 v1 += 1;
 }
 }
 else
 {
 v2 = 0;
 v3 = 0;
 while (true)
 {
 if (v3 > 2)
 {
 v11 = v2;
 break;
 }
 else if ((int)pthread_join(*((long long *)((char *)&v4 + (__ROL__(v3, 3) & 18446744073709551608))), 0))
 {
 v11 = 4294967294;
 break;
 }
 else
 {
 v2 += *((int *)((char *)&v12 + (__ROL__((__ROL__(v3, 1) & 18446744073709551614) + v3, 2) & 18446744073709551612)));
 v3 += 1;
 }
 }
 }
 }
 if (v8 == *((long long *)&__stack_chk_guard))
 return v11;
 __stack_chk_fail(); /* do not return */
}


// Function: call_pthread_join at 0x402f00
unsigned long long call_pthread_join()
{
 unsigned long long count; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 count = param_pthread_join();
 return param_pthread_join();
}


// Function: thread_increment at 0x402f14
static pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
static unsigned int shared_counter = 0;

void * thread_increment(unsigned int *ptr)
{
 char *v0; // [bp-0x30]
 unsigned int i; // [bp-0x8]
 unsigned int v2; // [bp-0x4]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *(ptr);
 for (i = 0; i < v2; i += 1)
 {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return 0;
}


// Function: param_mutex_lock at 0x402f98
extern unsigned int shared_counter;

unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 char *v7; // x4
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x28]
 unsigned int i; // [bp-0x14]
 unsigned int j; // [bp-0x10]
 unsigned int v4; // [bp-0xc]
 unsigned int *ptr; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v1 = a1;
 ptr = malloc(__ROL__(a0, 3) & 18446744073709551608);
 if (!ptr)
 return 4294967295;
 shared_counter = 0;
 for (i = 0; i < a0; i += 1)
 {
 v7 = (char *)ptr + (__ROL__(i, 3) & 18446744073709551608);
 if ((int)pthread_create((pthread_t *)v7, 0, (void *(*)(void *))thread_increment, &v1))
 {
 free(ptr);
 return 4294967294;
 }
 }
 for (j = 0; j < a0; j += 1)
 {
 pthread_join(*((long long *)((char *)ptr + (__ROL__(j, 3) & 18446744073709551608))), 0);
 }
 free(ptr);
 v4 = v1 * a0;
 if (v4 != shared_counter)
 return 4294967293;
 return 42;
}


// Function: call_mutex_lock at 0x4030c4
unsigned long long call_mutex_lock()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_mutex_lock(4, 1000);
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x4030e0
static pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
static pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
static unsigned int data = 0;
static unsigned int i = 0;

void * consumer_thread(unsigned long long a0)
{
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x18]
 unsigned int v2; // [bp-0xc]
 unsigned int *ptr; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v1 = a0;
 pthread_mutex_lock(&cond_mutex);
 while (!i)
 {
 pthread_cond_wait(&cond, &cond_mutex);
 }
 v2 = data;
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = v2;
 return ptr;
}


// Function: producer_thread at 0x403164
static unsigned int ready = 0;

void * producer_thread(unsigned long long a0)
{
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = a0;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: param_condition_variable at 0x4031c8
extern char __stack_chk_guard;

long long param_condition_variable()
{
 unsigned int v7; // w0
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x24]
 pthread_t v2; // [bp-0x20]
 pthread_t v3; // [bp-0x18]
 unsigned int *ptr; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 ready = 0;
 data = 0;
 if ((int)pthread_create(&v3, 0, (void *(*)(void *))consumer_thread, NULL))
 {
 v7 = 4294967295;
 }
 else if ((int)pthread_create(&v2, 0, (void *(*)(void *))producer_thread, NULL))
 {
 pthread_cancel(v3);
 v7 = 4294967294;
 }
 else
 {
 pthread_join(v3, (void **)&ptr);
 pthread_join(v2, 0);
 v1 = *(ptr);
 free(ptr);
 v7 = v1;
 }
 if (v5 == *((long long *)&__stack_chk_guard))
 return v7;
 __stack_chk_fail(); /* do not return */
}


// Function: call_condition_variable at 0x4032bc
unsigned long long call_condition_variable()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_condition_variable();
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x4032d0
extern char __stack_chk_guard;
static unsigned int atomic_counter = 0;

unsigned long long thread_atomic_increment(unsigned int *ptr)
{
 unsigned int v7; // w0
 unsigned int result; // w0
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x18]
 unsigned int i; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 v3 = *(ptr);
 for (i = 0; i < v3; i += 1)
 {
 __aarch64_ldadd4_acq_rel(1, &atomic_counter);
 v1 = i;
 v4 = i + 1000;
 v7 = __aarch64_cas4_acq_rel(v1, v4, &atomic_counter);
 if (v7 != v1)
 result = 0;
 else
 result = 1;
 if (!result)
 v1 = v7;
 }
 if (v5 == *((long long *)&__stack_chk_guard))
 return 0;
 __stack_chk_fail(); /* do not return */
}


// Function: thread_atomic_load_store at 0x4033bc

unsigned int thread_atomic_load_store(unsigned long a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = atomic_counter;
 atomic_counter = v0 + 100;
 return 0;
}


// Function: param_atomic_ops at 0x4033f8
extern char __stack_chk_guard;

long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned int v9; // w0
 unsigned long long v10; // x4
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x38]
 unsigned int v2; // [bp-0x24]
 unsigned int i; // [bp-0x20]
 unsigned int v4; // [bp-0x1c]
 char v5; // [bp-0x18], Other Possible Types: unsigned long long
 unsigned int *ptr; // [bp-0x10]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v1 = a1;
 v7 = *((long long *)&__stack_chk_guard);
 ptr = malloc(__ROL__(a0, 3) & 18446744073709551608);
 if (!ptr)
 {
 v9 = 4294967295;
 }
 else
 {
 atomic_counter = 0;
 v2 = 0;
 while (true)
 {
 if (v2 < a0)
 {
 v10 = (unsigned long long)((char *)ptr + (__ROL__(v2, 3) & 18446744073709551608));
 if ((int)pthread_create((pthread_t *)v10, 0, (void *(*)(void *))thread_atomic_increment, &v1))
 {
 free(ptr);
 v9 = 4294967294;
 break;
 }
 else
 {
 v2 += 1;
 }
 }
 else
 {
 if (!(int)pthread_create((pthread_t *)&v5, 0, (void *(*)(void *))thread_atomic_load_store, NULL))
 pthread_join(v5, 0);
 for (i = 0; i < a0; i += 1)
 {
 pthread_join(*((long long *)((char *)ptr + (__ROL__(i, 3) & 18446744073709551608))), 0);
 }
 v4 = atomic_counter;
 free(ptr);
 if (v4 > 0)
 {
 v9 = 42;
 break;
 }
 else
 {
 v9 = 4294967293;
 break;
 }
 }
 }
 }
 if (v7 == *((long long *)&__stack_chk_guard))
 return v9;
 __stack_chk_fail(); /* do not return */
}


// Function: call_atomic_ops at 0x403584
unsigned long long call_atomic_ops()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_atomic_ops(4, 500);
 return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x4035a0
typedef struct struct_1 {
 char padding_0[16];
 unsigned int field_10;
} struct_1;

 void * thread_tls_test(char *a0)
 {
 struct_1 *p; // tpidr_el0
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x14]
 unsigned int *ptr; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v1 = p->field_10;
 p->field_10 = p->field_10 + 50;
 strncpy((char *)&p[1], a0, 31);
 ptr = malloc(8);
 ptr[0] = v1;
 ptr[1] = p->field_10;
 return ptr;
 }


// Function: param_thread_local_storage at 0x403644
extern char __stack_chk_guard;

long long param_thread_local_storage(unsigned int a0)
{
 unsigned long long v15; // x4
 unsigned int v16; // w0
 char *v0; // [bp-0x80]
 unsigned int i; // [bp-0x48]
 unsigned int v2; // [bp-0x44]
 unsigned int j; // [bp-0x40]
 unsigned int v4; // [bp-0x3c]
 unsigned int v5; // [bp-0x38]
 unsigned int k; // [bp-0x34]
 unsigned int v7; // [bp-0x30]
 unsigned int v8; // [bp-0x2c]
 unsigned int *v9; // [bp-0x28]
 pthread_t *addr; // [bp-0x20]
 pthread_t *p; // [bp-0x18]
 unsigned int ptr[2]; // [bp-0x10]
 unsigned long v13; // [bp-0x8]
 char v14; // [bp+0x0]

 v0 = &v14;
 v13 = *((long long *)&__stack_chk_guard);
 addr = malloc(__ROL__(a0, 3) & 18446744073709551608);
 p = malloc(__ROL__(a0, 3) & 18446744073709551608);
 if (!addr || !p)
 {
 v16 = 4294967295;
 }
 else
 {
 for (i = 0; i < a0; i += 1)
 {
 *((void* *)((char *)p + (__ROL__(i, 3) & 18446744073709551608))) = malloc(16);
 snprintf((char *)*((void**)((char *)p + (__ROL__(i, 3) & 18446744073709551608))), 16, "Thread-%d", i);
 }
 v2 = 0;
 while (true)
 {
 if (v2 < a0)
 {
 if ((int)pthread_create((pthread_t *)((char *)addr + (__ROL__(v2, 3) & 18446744073709551608)), 0, (void *(*)(void *))thread_tls_test, (void *)*((void**)((char *)p + (__ROL__(v2, 3) & 18446744073709551608)))))
 {
 for (j = 0; j <= v2; j += 1)
 {
 free(*((void**)((char *)p + (__ROL__(j, 3) & 18446744073709551608))));
 }
 free(p);
 free(addr);
 v16 = 4294967294;
 break;
 }
 else
 {
 v2 += 1;
 }
 }
 else
 {
 v4 = 0;
 v5 = 0;
 for (k = 0; k < a0; k += 1)
 {
 pthread_join(*((pthread_t *)((char *)addr + (__ROL__(k, 3) & 18446744073709551608))), (void **)&v9);
 ptr[0] = v9[0];
 ptr[1] = v9[1];
 v4 += ptr[0];
 v5 += ptr[1];
 free(v9);
 free(*((void**)((char *)p + (__ROL__(k, 3) & 18446744073709551608))));
 }
 free(p);
 free(addr);
 v7 = 100 * a0;
 v8 = 150 * a0;
 if (v4 == v7 && v5 == v8)
 {
 v16 = 42;
 break;
 }
 else
 {
 v16 = 4294967293;
 break;
 }
 }
 }
 }
 if (v13 == *((long long *)&__stack_chk_guard))
 return v16;
 __stack_chk_fail(); /* do not return */
}


// Function: call_thread_local_storage at 0x4038fc
unsigned long long call_thread_local_storage()
{
 unsigned long long count; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 count = param_thread_local_storage(4);
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x403914
static const char g_403ea8[] = "=== Thread Concurrency ===\n";
static const char g_403ec8[] = "pthread_create result: %u\n";
static const char g_403ee8[] = "pthread_join result: %u\n";
static const char g_403f08[] = "mutex_lock result: %u\n";
static const char g_403f28[] = "condition_variable result: %u\n";
static const char g_403f48[] = "atomic_ops result: %u\n";
static const char g_403f68[] = "thread_local_storage result: %u\n";

int test_thread_concurrency()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_403ea8);
 printf(g_403ec8, call_pthread_create() & 4294967295);
 printf(g_403ee8, call_pthread_join() & 4294967295);
 printf(g_403f08, call_mutex_lock() & 4294967295);
 printf(g_403f28, call_condition_variable() & 4294967295);
 printf(g_403f48, call_atomic_ops() & 4294967295);
 return printf(g_403f68, call_thread_local_storage() & 4294967295);
}


// Function: main at 0x4039ac
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


// Function: sub_4039cc at 0x4039cc
long long sub_4039cc()
{
 unsigned long long v0; // x0
 unsigned int val1 = 0;
 unsigned int val2 = 0;
 unsigned int *ptr = 0;

 v0 = __aarch64_cas4_acq_rel(val1, val2, ptr);
 return __aarch64_cas4_acq_rel(val1, val2, ptr);
}


// Failed to decompile function __aarch64_cas4_acq_rel at 0x4039d0
// Function: sub_4039e4 at 0x4039e4
long long sub_4039e4()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_403a04 at 0x403a04
long long sub_403a04()
{
 unsigned long long v0; // x0
 int val = 0;
 unsigned int *ptr = 0;

 v0 = __aarch64_ldadd4_acq_rel(val, ptr);
 return __aarch64_ldadd4_acq_rel(val, ptr);
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x403a10
// Function: sub_403a24 at 0x403a24
long long sub_403a24()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


