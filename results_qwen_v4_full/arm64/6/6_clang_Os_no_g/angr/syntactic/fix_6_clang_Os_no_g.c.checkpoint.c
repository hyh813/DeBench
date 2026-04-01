// Angr Decompilation of 6_clang_Os_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <pthread.h>
#include <sys/auxv.h>
#include <stdarg.h>

#ifndef __ROL__
#define __ROL__(val, n) (((val) << (n)) | ((val) >> (32 - (n))))
#endif

// Global variable definitions
unsigned long long g_413ff8 = 0;
char __aarch64_have_lse_atomics = 0;
char g_402f04[] = "g_402f04";
char g_402f1f[] = "g_402f1f";
char g_402f3a[] = "g_402f3a";
char g_402f56[] = "g_402f56";
char g_402f72[] = "g_402f72";
char g_402f8e[] = "g_402f8e";
char g_402faa[] = "g_402faa";
char g_402fc7[] = "g_402fc7";
char g_402fe3[] = "g_402fe3";
char g_40301b[] = "g_40301b";
char g_403036[] = "g_403036";
char g_4031fc[] = "g_4031fc";
unsigned int __dollar_d_5 = 0;
unsigned int signal_number = 0;
char g_403085[] = "g_403085";
char g_4030a1[] = "g_4030a1";
char g_4030bd[] = "g_4030bd";
char g_4030d9[] = "g_4030d9";
char g_4030f5[] = "g_4030f5";
char g_403111[] = "g_403111";
char g_40312d[] = "g_40312d";
char g_403220[] = "g_403220";
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int shared_counter = 0;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
char data = 0;
char i = 0;
char ready = 0;
unsigned int atomic_counter = 0;
char g_403153[] = "g_403153";
char g_40316f[] = "g_40316f";
char g_40318c[] = "g_40318c";
char g_4031a8[] = "g_4031a8";
char g_4031c4[] = "g_4031c4";
char g_4031e0[] = "g_4031e0";
char g_40323b[] = "g_40323b";

#ifndef NULL
#define NULL ((void*)0)
#endif

// Forward declarations for missing functions
long long frame_dummy();
int __isoc99_sscanf(const char *str, const char *format, ...);
char arm64g_calculate_condition(unsigned long long op, unsigned long long dep1, unsigned long long dep2, unsigned long long dep3);
long long signal_handler(unsigned long a0);
unsigned int __aarch64_ldadd4_acq_rel(unsigned int val, unsigned int *ptr);
unsigned int __aarch64_cas4_acq_rel(unsigned int expected, unsigned int desired, unsigned int *ptr);
int *__errno_location(void);
key_t ftok(const char *pathname, int proj_id);
unsigned long getauxval(unsigned long type);

// Implementation of __isoc99_sscanf (C99 standard sscanf)
int __isoc99_sscanf(const char *str, const char *format, ...)
{
 va_list args;
 va_start(args, format);
 int result = vsscanf(str, format, args);
 va_end(args);
 return result;
}

// Implementation of arm64g_calculate_condition (ARM64 condition code helper)
char arm64g_calculate_condition(unsigned long long op, unsigned long long dep1, unsigned long long dep2, unsigned long long dep3)
{
 switch (op)
 {
  case 0: return dep1 == 0;
  case 1: return dep1 != 0;
  case 2: return dep1 <= dep2;
  case 3: return dep1 < dep2;
  case 4: return dep1 >= dep2;
  case 5: return dep1 > dep2;
  case 6: return (long long)dep1 < 0;
  case 7: return (long long)dep1 >= 0;
  case 8: return (long long)dep1 <= 0;
  case 9: return (long long)dep1 > 0;
  case 10: return dep1 & 1;
  case 11: return !(dep1 & 1);
  case 12: return dep1 == dep2;
  case 13: return dep1 != dep2;
  default: return 1;
 }
}

// Implementation of frame_dummy
long long frame_dummy()
{
 return 0;
}

// Implementation of __aarch64_cas4_acq_rel (ARM64 atomic CAS)
unsigned int __aarch64_cas4_acq_rel(unsigned int expected, unsigned int desired, unsigned int *ptr)
{
 if (!ptr) return expected;
 unsigned int old = *ptr;
 if (old == expected)
  *ptr = desired;
 return old;
}

// Implementation of __aarch64_ldadd4_acq_rel (ARM64 atomic load-add)
unsigned int __aarch64_ldadd4_acq_rel(unsigned int val, unsigned int *ptr)
{
 if (!ptr) return 0;
 unsigned int old = *ptr;
 *ptr = old + val;
 return old;
}

// Implementation of __errno_location (returns pointer to errno)
int *__errno_location(void)
{
 static int errno_var = 0;
 return &errno_var;
}

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x4012e0

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


// Function: sub_4012f4 at 0x4012f4
long long sub_4012f4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return (long long)memcpy(v0, v1, v2);
}


// Function: init_have_lse_atomics at 0x401700

unsigned int init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)getauxval(16), 24) & 4278190081 & 1;
}


// Function: sub_401724 at 0x401724
__attribute__((noreturn)) void sub_401724(unsigned long a0)
{
 while(1); /* do not return */
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
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4017fc at 0x4017fc
void sub_4017fc()
{
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401848 at 0x401848
long long sub_401848()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_strcpy at 0x401854
long long param_strcpy(char *a0, char *a1)
{
 unsigned long long len; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 strcpy(a0, a1);
 len = strlen(a0);
 return strlen(a0);
}


// Function: call_strcpy at 0x40186c
long long call_strcpy()
{
 unsigned long long len; // x0
 char v0[8]; // [bp-0x30]
 char v1[24]; // [bp-0x28]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 strncpy(v1, "HelloLib", 8);
 len = strlen(v0);
 return strlen(v0);
}


// Function: param_strcmp at 0x4018a0
unsigned long long param_strcmp(char *a0, char *a1)
{
 unsigned long long v3; // x30
 unsigned int result; // w0
 unsigned int v5; // w8
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 result = strcmp(a0, a1);
 if (!result)
 v5 = 0;
 else
 v5 = 4294967295;
 if (result >= 1)
 return 1;
 return v5;
}


// Function: call_strcmp at 0x4018c4
unsigned long long call_strcmp()
{
 return 0;
}


// Function: param_strlen at 0x4018cc
long long param_strlen(char *str)
{
 unsigned long long len; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 len = strlen(str);
 return strlen(str);
}


// Function: call_strlen at 0x4018e0
unsigned long long call_strlen()
{
 return 12;
}


// Function: thread_tls_test at 0x402b0c
typedef struct struct_0 {
 char padding_0[16];
 unsigned int field_10;
} struct_0;

void *thread_tls_test(void *a0)
{
 struct_0 *v2; // tpidr_el0
 unsigned int *ptr; // x9
 unsigned int v4; // w19
 unsigned int v5; // w20
 unsigned int *p; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]
 struct_0 tls_data;

 v0 = &v1;
 v2 = &tls_data;
 tls_data.field_10 = 0;
 ptr = &v2->field_10;
 v4 = *ptr;
 v5 = v4 + 50;
 *ptr = v5;
 strncpy((char*)(v2 + 1), (char *)a0, 31);
 p = malloc(8);
 p[0] = v4;
 p[1] = v5;
 return p;
}


// Function: param_memcpy at 0x4018e8
int param_memcpy(void* a0, void* a1, unsigned long n)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x40190c
unsigned long long call_memcpy()
{
 return 90;
}


// Function: param_memcmp at 0x401914
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned long long v3; // x30
 unsigned int result; // w0
 unsigned int v5; // w8
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 result = memcmp(a0, a1, a2);
 if (!result)
 v5 = 0;
 else
 v5 = 4294967295;
 if (result >= 1)
 return 1;
 return v5;
}


// Function: call_memcmp at 0x401938
unsigned long long call_memcmp()
{
 return 4294967295;
}


// Function: param_printf at 0x401940
int param_printf(unsigned int a0, unsigned long a1)
{
 return printf("Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x401954
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


// Function: param_scanf at 0x40196c
unsigned long long param_scanf()
{
 char *v4; // x0
 char v0; // [bp-0x18], Other Possible Types: unsigned int
 char v1; // [bp-0x14], Other Possible Types: unsigned int
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 if (__isoc99_sscanf(v4, "%d,%d", &v1, &v0) != 2)
 return 4294967295;
 return v0 + v1 & 4294967295;
}


// Function: call_scanf at 0x4019ac
unsigned long long call_scanf()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 if (__isoc99_sscanf("123,456", "%d,%d", &v1, &v0) != 2)
 return 4294967295;
 return v0 + v1 & 4294967295;
}


// Function: param_fopen_fclose at 0x4019f4
unsigned long long param_fopen_fclose()
{
 char *v2; // x0
 FILE *fp; // x0
 unsigned int v4; // w0
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


// Function: call_fopen_fclose at 0x401a3c
unsigned long long call_fopen_fclose()
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 if (0 > (unsigned int)param_fopen_fclose())
 return 4294967295;
 return 42;
}


// Function: param_fread_fwrite at 0x401a64
unsigned long long param_fread_fwrite(char *a0)
{
 void* fp; // x0
 void* v6; // x20
 unsigned long long count; // x0
 unsigned long long v8; // x0
 char v0[19]; // [bp-0x50], Other Possible Types: unsigned long long
 char v1[8]; // [bp-0x48]
 unsigned long long v2; // [bp-0x45]
 char *v3; // [bp-0x30]
 char v4; // [bp+0x0]

 v3 = &v4;
 fp = fopen(a0, "w+");
 if (!fp)
 return 4294967295;
 v6 = fp;
 if (fwrite("BinBench Test Data", 1, 18, v6) != 18)
 {
 fclose(v6);
 return 4294967294;
 }
 rewind(v6);
 count = fread(v0, 1, 18, v6);
 v0[count] = 0;
 fclose(v6);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 if (memcmp(v0, "BinBench Test Data", 18) == 0)
 v8 = 42;
 else
 v8 = 4294967293;
 return v8;
}


// Function: call_fread_fwrite at 0x401b78
unsigned long long call_fread_fwrite()
{
 unsigned long long count; // x0

 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x401b84
unsigned int param_malloc_free(unsigned long long a0)
{
 unsigned int *ptr; // x0
 unsigned int v3; // w8
 unsigned long long v4; // x9
 unsigned int *cur; // x10
 unsigned long long i; // x9
 unsigned int v8 = 0; // 372
 unsigned long long v9; // x9
 unsigned int v10; // w8
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!ptr)
 return 4294967295;
 if (a0)
 {
 v3 = 0;
 v4 = a0 + 1 & 18446744073709551614;
 cur = &ptr[1];
 do
 {
 i = v4;
 if (((char)0 & 1))
 cur[1] = v3;
 if (((char)v8 & 1))
 cur[0] = v3 + 10;
 cur += 1;
 v9 = i - 2;
 v3 += 20;
 v4 = v9;
 } while (i != 2);
 v10 = ptr[0];
 }
 free(ptr);
 return ptr[1 + a0] + v10;
}


// Function: call_malloc_free at 0x401c34
int call_malloc_free()
{
 return param_malloc_free(10);
}


// Function: param_memset at 0x401c3c
unsigned long long param_memset(char *ptr, unsigned long a1)
{
 unsigned long n; // x19
 unsigned long long v3; // x0
 char *v4; // x20
 unsigned long v5; // x19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 n = a1;
 memset(ptr, 0, n);
 v3 = 0;
 if (!n)
 return 0;
 do
 {
 v4 = ptr + 1;
 v5 = n - 1;
 v3 += *(ptr);
 ptr = v4;
 n = v5;
 } while (n != 1);
 return v3;
}


// Function: call_memset at 0x401c80
unsigned long long call_memset()
{
 return 0;
}


// Function: param_strchr_strstr at 0x401c88
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned long long v4; // x30
 unsigned long long v5; // x21
 char *ptr; // x0
 unsigned long long v7; // x21
 char *ptr2; // x0
 unsigned long long v9; // x8
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x28]
 unsigned long long v2; // [bp-0x20]
 char v3; // [bp+0x0]

 v0 = &v3;
 v1 = v4;
 v2 = v5;
 ptr = strchr(a0, a1 & 255);
 if (ptr)
 v7 = (unsigned long long)(ptr - a0) & 4294967295;
 else
 v7 = 4294967295;
 ptr2 = strstr(a0, a2);
 if (ptr2)
 v9 = (unsigned long long)(ptr2 - a0) & 4294967295;
 else
 v9 = 4294967295;
 return v9 + v7;
}


// Function: call_strchr_strstr at 0x401ce0
unsigned long long call_strchr_strstr()
{
 return 15;
}


// Function: test_standard_library_functions at 0x401ce8

int test_standard_library_functions()
{
 unsigned long long v8; // x1
 unsigned long long v9; // x1
 char v0[8]; // [bp-0x40]
 char v1[24]; // [bp-0x38]
 char *v2; // [bp-0x20]
 unsigned int v3; // [bp-0x4]
 char v4; // [bp+0x0]
 unsigned int scanf_val1;
 unsigned int scanf_val2;

 v2 = &v4;
 puts(g_4031fc);
 strncpy(v1, "HelloLib", 8);
 printf(g_402f04, strlen(v1));
 printf(g_402f1f, 0);
 printf(g_402f3a, 12);
 printf(g_402f56, 90);
 printf(g_402f72, call_memcmp() & 4294967295);
 printf(g_402f8e, printf("Value: %d, Name: %s\n", 42, "Test") & 4294967295);
 if (__isoc99_sscanf("123,456", "%d,%d", &scanf_val1, &scanf_val2) == 2)
 v8 = scanf_val1 + scanf_val2 & 4294967295;
 else
 v8 = 4294967295;
 printf(g_402faa, v8);
 if (0 <= (unsigned int)param_fopen_fclose())
 v9 = 42;
 else
 v9 = 4294967295;
 printf(g_402fc7, v9);
 printf(g_402fe3, param_fread_fwrite("/tmp/binbench_test_tmp") & 4294967295);
 printf("%d", param_malloc_free(10) & 4294967295);
 printf(g_40301b, 0);
 return printf(g_403036, 15);
}


// Function: param_linux_syscall at 0x401e60
unsigned int param_linux_syscall(char *path)
{
 unsigned long long v2; // x19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = syscall(56);
 if (((char)(v2 >> 31) & 1))
 return -(*(__errno_location()));
 syscall(57);
 return v2;
}


// Function: call_linux_syscall at 0x401eb4
unsigned long long call_linux_syscall()
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 if (0 > param_linux_syscall("/etc/passwd"))
 return 4294967295;
 return 42;
}


// Function: param_win32_api at 0x401edc
 unsigned long long param_win32_api()
{
 unsigned int v3; // w0
 unsigned int v4; // w8
 unsigned long long v0; // [bp-0x60]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]
 struct stat statbuf;

 v1 = &v2;
 v3 = stat("/etc/passwd", &statbuf);
 if (0 < (long long)v3)
 v4 = 42;
 else
 v4 = 4294967294;
 if (0 > v3)
 return 4294967295;
 return v4;
}


// Function: call_win32_api at 0x401f18
unsigned long long call_win32_api()
{
 unsigned int v4; // w0
 unsigned int v5; // w8
 char v0; // [bp-0x90]
 unsigned long long v1; // [bp-0x60]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v4 = stat("/etc/passwd", (struct stat*)&v0);
 if (0 < v1)
 v5 = 42;
 else
 v5 = 4294967294;
 if (0 > v4)
 return 4294967295;
 return v5;
}


// Function: param_fork_exec at 0x401f5c
unsigned long long param_fork_exec(char *a0, unsigned long a1)
{
 unsigned long long pid; // x0
 int v0[1]; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v1 = &v2;
 pid = fork();
 if (((char)(pid >> 31) & 1))
 {
 return 4294967295;
 }
 else if (!(unsigned int)pid)
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 else if (((char)(waitpid(pid, v0, 0) >> 31) & 1))
 {
 return 4294967294;
 }
 else if (!((char)arm64g_calculate_condition(9, (unsigned long long)(*(v0) & 127), 0, 0)))
 {
 return 4294967293;
 }
 else
 {
 return __ROL__(*(v0), 24) & 4278190335 & 255;
 }
}


// Function: call_fork_exec at 0x401fe4
unsigned long long call_fork_exec()
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 if ((unsigned int)param_fork_exec("/bin/true", 0))
 return 4294967295;
 return 42;
}


// Function: param_pipe_communication at 0x402010
unsigned long long param_pipe_communication()
{
 unsigned long long pid; // x0
 unsigned long long count; // x19
 unsigned long long v7; // x0
 int pipefd[2]; // [bp-0x48]
 char v0; // [bp-0x28], Other Possible Types: unsigned int
 char *v3; // [bp-0x20]
 char v4; // [bp+0x0]

 v3 = &v4;
 if (((char)(pipe(pipefd) >> 31) & 1))
 return 4294967295;
 pid = fork();
 if (((char)(pid >> 31) & 1))
 {
 return 4294967294;
 }
 else if ((unsigned int)pid)
 {
 close(pipefd[1]);
 count = read(pipefd[0], &v0, 31);
 (&v0)[count] = 0;
 close(pipefd[0]);
 wait(NULL);
 if (0 < count)
 v7 = 42;
 else
 v7 = 4294967293;
 return v7;
 }
 else
 {
 close(pipefd[0]);
 write(pipefd[1], "HelloPipe", 9);
 close(pipefd[1]);
 _exit(0); /* do not return */
 }
}


// Function: call_pipe_communication at 0x4020c8
unsigned long long call_pipe_communication()
{
 unsigned long long v0; // x0

 v0 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x4020cc

unsigned long long param_socket_create()
{
 unsigned long long sock; // x0
 unsigned int v6; // w19
 unsigned int v7; // w0
 unsigned long long v8; // x0
 struct sockaddr v0_sa; // [bp-0x38]
 unsigned int result; // [bp-0x24]
 char *v3; // [bp-0x20]
 char v4; // [bp+0x0]

 v3 = &v4;
 sock = socket(2, 1, 0);
 if (((char)(sock >> 31) & 1))
 return 4294967295;
 v6 = sock;
 result = 1;
 if (((char)(setsockopt(sock, 1, 2, &result, 4) >> 31) & 1))
 {
 close(v6);
 return 4294967294;
 }
 ((struct sockaddr_in*)&v0_sa)->sin_family = 2;
 memset(v0_sa.sa_data, 0, 14);
 if (((char)(bind(v6, (struct sockaddr*)&v0_sa, 16) >> 31) & 1))
 {
 close(v6);
 return 4294967293;
 }
 v7 = listen(v6, 5);
 close(v6);
 if (v7 < 0)
 v8 = 0xfffffffc;
 else
 v8 = 42;
 return v8;
}


// Function: call_socket_create at 0x402190
unsigned long long call_socket_create()
{
 unsigned long long sock; // x0

 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x402194
typedef struct struct_1 {
 unsigned long long field_0;
 unsigned long long field_5;
} struct_1;

unsigned int param_shmget_shmat()
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 struct_1 *ptr; // x0
 unsigned int v5; // w20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = open("/tmp/binbench_shm", 66, 438);
 if (((char)(v2 >> 31) & 1))
 return 4294967295;
 close(v2);
 if (!((char)(ftok("/tmp/binbench_shm", 42) >> 31) & 1))
 {
 v3 = shmget(42, 1024, 0666);
 if (((char)(v3 >> 31) & 1))
 return 4294967294;
 ptr = shmat(v3, 0, 0);
 if ((char)arm64g_calculate_condition(2, (unsigned long long)ptr, 1, 0))
 return 4294967293;
 *((unsigned long long *)((char *)&ptr->field_0 + 5)) = 34184295084281188;
 ptr->field_0 = 7299600957910902867;
 v5 = strlen((char*)ptr);
 shmdt(ptr);
 shmctl(v3 & 4294967295, 0, 0);
 return v5;
 }
 return 4294967295;
}


// Function: call_shmget_shmat at 0x402264
unsigned long long call_shmget_shmat()
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 if (0 >= param_shmget_shmat())
 return 4294967295;
 return 42;
}


// Function: param_signal_handling at 0x402284

unsigned long long param_signal_handling()
{
 unsigned long long v2; // x0
 unsigned long long v3; // cc_op
 unsigned long long v4; // cc_dep1
 unsigned long long v5; // cc_dep2
 unsigned long long v6; // x20
 unsigned long long v7; // cc_op
 unsigned long v8; // cc_dep1
 unsigned long long v9; // cc_dep2
 unsigned long long v10; // x21
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if ((char)arm64g_calculate_condition(2, (unsigned long long)signal(10, (void (*)(int))signal_handler), 1, 0))
 return 4294967295;
 v2 = (unsigned long long)signal(14, (void (*)(int))signal_handler);
 v3 = 2;
 v4 = v2;
 v5 = 1;
 if ((char)arm64g_calculate_condition(2, v2, 1, 0))
 return 4294967294;
 __dollar_d_5 = 0;
 raise(10);
 if (!__dollar_d_5)
 {
 v6 = 1000;
 do
 {
 usleep(1000);
 if (!__dollar_d_5)
 {
 v3 = 3;
 v4 = ((char)arm64g_calculate_condition(v3, v4, v5, 0) ? v6 & 4294967295 : 0);
 v5 = ((char)arm64g_calculate_condition(v3, v4, v5, 0) ? 1 : 0);
 }
 else
 {
 v3 = 0;
 v4 = ((char)arm64g_calculate_condition(v3, v4, v5, 0) ? v6 & 4294967295 : 0);
 v5 = ((char)arm64g_calculate_condition(v3, v4, v5, 0) ? 1 : 0);
 }
 } while ((v6 = (unsigned long long)((unsigned int)v6 - 1), (char)arm64g_calculate_condition(v3 | 128, v4, v5, 0)));
 }
 if (!__dollar_d_5)
 return 4294967293;
 v7 = 3;
 v8 = signal_number;
 v9 = 10;
 if (signal_number != 10)
 return 0xfffffffc;
 __dollar_d_5 = 0;
 alarm(1);
 if (!__dollar_d_5)
 {
 v10 = 2000;
 do
 {
 usleep(1000);
 if (!__dollar_d_5)
 {
 v7 = 3;
 v8 = ((char)arm64g_calculate_condition(v7, v8, v9, 0) ? v10 & 4294967295 : 0);
 v9 = ((char)arm64g_calculate_condition(v7, v8, v9, 0) ? 1 : 0);
 }
 else
 {
 v7 = 0;
 v8 = ((char)arm64g_calculate_condition(v7, v8, v9, 0) ? v10 & 4294967295 : 0);
 v9 = ((char)arm64g_calculate_condition(v7, v8, v9, 0) ? 1 : 0);
 }
 } while ((v10 = (unsigned long long)((unsigned int)v10 - 1), (char)arm64g_calculate_condition(v7 | 128, v8, v9, 0)));
 }
 if (!__dollar_d_5 || signal_number != 14)
 return 4294967291;
 signal(10, NULL);
 signal(14, NULL);
 return 42;
 return 4294967291;
}


// Function: signal_handler at 0x4023b8

long long signal_handler(unsigned long a0)
{
 __dollar_d_5 = 1;
 signal_number = a0;
 return a0;
}


// Function: call_signal_handling at 0x4023d0
unsigned long long call_signal_handling()
{
 unsigned long long v0; // x0

 v0 = param_signal_handling();
 return param_signal_handling();
}


// Function: test_system_calls at 0x4023d4

int test_system_calls()
{
 unsigned long long v4; // x1
 unsigned int v5; // w0
 unsigned int v6; // w8
 unsigned long v7; // x1
 unsigned long long v8; // x1
 unsigned long long v11; // x1
 struct stat statbuf;
 char v0; // [bp-0xa0]
 unsigned long long v1; // [bp-0x70]
 char *v2; // [bp-0x20]
 char v3; // [bp+0x0]

 v2 = &v3;
 puts(g_403220);
 if (0 <= param_linux_syscall("/etc/passwd"))
 v4 = 42;
 else
 v4 = 4294967295;
 printf(g_403085, v4);
 v5 = stat("/etc/passwd", &statbuf);
 if (0 < (long long)v5)
 v6 = 42;
 else
 v6 = 4294967294;
 if (0 <= v5)
 v7 = v6;
 else
 v7 = 4294967295;
 printf(g_4030a1, v7);
 if (!(unsigned int)param_fork_exec("/bin/true", 0))
 v8 = 42;
 else
 v8 = 4294967295;
 printf(g_4030bd, v8);
 printf(g_4030d9, param_pipe_communication() & 4294967295);
 printf(g_4030f5, param_socket_create() & 4294967295);
 if (0 < param_shmget_shmat())
 v11 = 42;
 else
 v11 = 4294967295;
 printf(g_403111, v11);
 return printf(g_40312d, param_signal_handling() & 4294967295);
}


// Function: thread_compute at 0x4024cc
void *thread_compute(void *a0)
{
 unsigned int *ptr; // x0
 unsigned int *arg = (unsigned int *)a0;
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(4);
 *(ptr) = *(arg) * *(arg);
 return ptr;
}


// Function: param_pthread_create at 0x4024f8
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int *v0; // [bp-0x30], Other Possible Types: char
 unsigned int v1; // [bp-0x24]
 char *v2; // [bp-0x20]
 pthread_t v3; // [bp-0x8], Other Possible Types: unsigned long long
 char v4; // [bp+0x0]

 v2 = &v4;
 v1 = a0;
 if (!(int)pthread_create(&v3, 0, (void *(*)(void *))thread_compute, &v1))
 {
 pthread_join(v3, (void **)&v0);
 free(v0);
 return *(v0);
 }
 return 4294967295;
}


// Function: call_pthread_create at 0x40255c
int call_pthread_create()
{
 return param_pthread_create(7);
}


// Function: thread_sum at 0x402564
void *thread_sum(void *ptr_arg)
{
 unsigned int *ptr = (unsigned int *)ptr_arg;
 unsigned int v0; // w8
 unsigned int v1; // w9

 v0 = *(ptr);
 v1 = ptr[1];
 ptr[2] = 0;
 if (v1 >= v0)
 ptr[2] = v1 + v0 * (v1 - v0) + __ROL__((v1 + ~(v0)) * (v1 - v0), 63);
 return NULL;
}


// Function: param_pthread_join at 0x402598
unsigned int param_pthread_join()
{
 unsigned long long v9; // x21
 char *v10; // x19
 unsigned long long v11; // x20
 unsigned long long v12; // x19
 char *v13; // x21
 char *ptr; // x21
 char *v15; // x21
 char v0; // [bp-0x70], Other Possible Types: unsigned long long
 unsigned long long v1; // [bp-0x68]
 unsigned long long v2; // [bp-0x64]
 unsigned long long flag1; // [bp-0x60]
 unsigned long long v4; // [bp-0x58]
 unsigned int result; // [bp-0x50]
 char v6[24]; // [bp-0x48]
 char *v7; // [bp-0x30]
 char v8; // [bp+0x0]
 pthread_t threads[3];

 v7 = &v8;
 v9 = 0;
 v1 = 0;
 flag1 = 0;
 v10 = &v0;
 result = 0;
 v0 = 42949672961;
 v2 = 85899345931;
 v4 = 128849018901;
 while (!(int)pthread_create(&threads[v9/8], 0, (void *(*)(void *))thread_sum, v10))
 {
 v10 += 12;
 v9 += 8;
 if (v9 == 24)
 {
 v11 = 0;
 v12 = 0;
 v13 = (char*)&v1;
 while (true)
 {
 ptr = v13;
 if ((int)pthread_join(threads[v11/8], 0))
 return 4294967294;
 v15 = ptr + 3;
 v11 += 8;
 v12 += (unsigned long long)*(ptr);
 v13 = v15;
 if (v11 == 24)
 return v12;
 }
 }
 }
 return 4294967295;
}


// Function: call_pthread_join at 0x402674
int call_pthread_join()
{
 return param_pthread_join();
}


// Function: thread_increment at 0x402678

void *thread_increment(void *ptr_arg)
{
 unsigned int *ptr = (unsigned int *)ptr_arg;
 unsigned int v2; // w20
 unsigned int result; // w20
 unsigned int v4; // w20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = *(ptr);
 if (v2 < 1)
 return NULL;
 do
 {
 result = v2;
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 v4 = result - 1;
 v2 = v4;
 } while (result != 1);
 return NULL;
}


// Function: param_mutex_lock at 0x4026e0

unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned long v3; // x19
 pthread_t *ptr; // x0
 pthread_t *ptr_threads; // x20
 unsigned long long v6; // x23
 unsigned long long v7; // x24
 pthread_t *v8; // x21
 unsigned long long i; // x23
 pthread_t *v10; // x21
 unsigned long long v11; // x23
 unsigned long long v12; // x0
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x34]
 char v2; // [bp+0x0]

 v0 = &v2;
 v3 = a0;
 v1 = a1;
 ptr = malloc(v3 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(v3, 3) & 34359738360 & 34359738367);
 if (!ptr)
 return 4294967295;
 ptr_threads = ptr;
 shared_counter = 0;
 if ((unsigned int)v3 >= 1)
 {
 v6 = v3 & 4294967295;
 v7 = 0;
 do
 {
 if ((int)pthread_create(&ptr_threads[v7/8], 0, thread_increment, &v1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v7 += 8, (__ROL__(v6, 3) & 18446744073709551608) != v7));
 if ((unsigned int)v3 >= 1)
 {
 v8 = ptr;
 do
 {
 i = v6;
 v10 = v8 + 1;
 pthread_join(*(v8), 0);
 v11 = i - 1;
 v6 = v11;
 v8 = v10;
 } while (i != 1);
 }
 }
 free(ptr);
 if (shared_counter == (unsigned int)v3 * v1)
 v12 = 42;
 else
 v12 = 4294967293;
 return v12;
}


// Function: call_mutex_lock at 0x4027cc
unsigned long long call_mutex_lock()
{
 unsigned long long v0; // x0

 v0 = param_mutex_lock(4, 1000);
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x4027d8

void *consumer_thread(void *arg)
{
 unsigned int v2; // w19
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 pthread_mutex_lock(&cond_mutex);
 if (!(i & 1))
 {
 do
 {
 pthread_cond_wait(&cond, &cond_mutex);
 } while (i != 1);
 }
 if (data)
 v2 = 42;
 else
 v2 = 0;
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = v2;
 return ptr;
}


// Function: producer_thread at 0x402864

void *producer_thread(void *arg)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return NULL;
}


// Function: param_condition_variable at 0x4028c0

unsigned int param_condition_variable()
{
 unsigned int *v0; // [bp-0x30], Other Possible Types: char
 pthread_t v1; // [bp-0x28], Other Possible Types: unsigned long long
 char *v2; // [bp-0x20]
 pthread_t v3; // [bp-0x8], Other Possible Types: unsigned long long
 char v4; // [bp+0x0]

 v2 = &v4;
 ready = 0;
 data = 0;
 if ((int)pthread_create(&v1, 0, consumer_thread, 0))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v3, 0, producer_thread, 0))
 {
 pthread_cancel(v1);
 return 4294967294;
 }
 else
 {
 pthread_join(v1, (void **)&v0);
 pthread_join(v3, 0);
 free(v0);
 return *(v0);
 }
}


// Function: call_condition_variable at 0x402968
int call_condition_variable()
{
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x40296c

void *thread_atomic_increment(void *a0)
{
 unsigned int *arg = (unsigned int *)a0;
 unsigned int i; // w19
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (*(arg) < 1)
 return NULL;
 i = 0;
 do
 {
 atomic_counter = __sync_add_and_fetch(&atomic_counter, 1);
 i += 1;
 } while (i != *(arg));
 return NULL;
}


// Function: thread_atomic_load_store at 0x4029d0

void *thread_atomic_load_store(void *arg)
{
 atomic_counter = atomic_counter + 100;
 return NULL;
}


// Function: param_atomic_ops at 0x4029ec

unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned long v4; // x20
 pthread_t *ptr; // x0
 pthread_t *ptr_threads; // x19
 unsigned long long v7; // x23
 unsigned long long v8; // x20
 pthread_t *v9; // x21
 unsigned long long i; // x20
 pthread_t *v11; // x21
 unsigned long long v12; // x20
 unsigned long long v13; // x0
 pthread_t v0; // [bp-0x50], Other Possible Types: unsigned long long
 unsigned int v1; // [bp-0x44]
 char *v2; // [bp-0x40]
 char v3; // [bp+0x0]

 v2 = &v3;
 v4 = a0;
 v1 = a1;
 ptr = malloc(v4 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(v4, 3) & 34359738360 & 34359738367);
 if (!ptr)
 return 4294967295;
 ptr_threads = ptr;
 atomic_counter = 0;
 if ((unsigned int)v4 >= 1)
 {
 v7 = 0;
 do
 {
 if ((int)pthread_create(&ptr_threads[v7/8], 0, thread_atomic_increment, &v1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v7 += 8, (__ROL__(v4 & 4294967295, 3) & 18446744073709551608) != v7));
 }
 if (!(int)pthread_create(&v0, 0, thread_atomic_load_store, 0))
 pthread_join(v0, 0);
 if ((unsigned int)v4 >= 1)
 {
 v8 = v4 & 4294967295;
 v9 = ptr;
 do
 {
 i = v8;
 v11 = v9 + 1;
 pthread_join(*(v9), 0);
 v12 = i - 1;
 v9 = v11;
 v8 = v12;
 } while (i != 1);
 }
 free(ptr);
 if (0 < atomic_counter)
 v13 = 42;
 else
 v13 = 4294967293;
 return v13;
}


// Function: call_atomic_ops at 0x402b00
unsigned long long call_atomic_ops()
{
 unsigned long long v0; // x0

 v0 = param_atomic_ops(4, 500);
 return param_atomic_ops(4, 500);
}





// Function: param_thread_local_storage at 0x402b5c
unsigned long long param_thread_local_storage(unsigned int a0)
{
 unsigned long v3; // x20
 unsigned long long v4; // x21
 pthread_t *v13; // x22
 pthread_t *v14; // x22
 unsigned long long v15; // x25
 unsigned long long k; // x25
 pthread_t *v17; // x22
 unsigned long long v18; // x23
 unsigned long long v19; // x22
 char **v20; // x26
 pthread_t *v21; // x25
 unsigned long long j; // x24
 pthread_t *addr; // x19
 char **v23; // x26
 pthread_t *v24; // x25
 char **v25; // x26
 unsigned long long v27; // x20
 unsigned long v28; // x9
 unsigned long long v29; // cc_op
 unsigned long long v30; // cc_dep1
 unsigned long long v31; // cc_dep2
 unsigned long long v32; // x0
 char **p; // x21
 unsigned long long v7; // cc_op
 unsigned long long v8; // cc_dep1
 unsigned long long idx; // x22
 unsigned long long i; // x24
 char *ptr_str; // x0
 unsigned long long v12; // x25
 unsigned int *ptr_result; // [bp-0x58]
 char *v1; // [bp-0x50]
 char v2; // [bp+0x0]

 v1 = &v2;
 v3 = a0;
 v4 = v3 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(v3, 3) & 34359738360 & 34359738367;
 addr = malloc(v4 * sizeof(pthread_t));
 p = malloc(v4 * sizeof(char*));
 if (!addr)
 {
 return 4294967295;
 }
 else if (p)
 {
 v7 = 3;
 v8 = v3 & 4294967295;
 if ((unsigned int)v3 >= 1)
 {
 idx = 0;
 i = v3 & 4294967295;
 do
 {
 ptr_str = malloc(16);
 p[idx] = ptr_str;
 snprintf(ptr_str, 16, "Thread-%d", idx & 4294967295);
 idx += 1;
 } while (i != idx);
 v7 = 3;
 v8 = v3 & 4294967295;
 if ((unsigned int)v3 >= 1)
 {
 v12 = 0;
 v13 = addr;
 do
 {
 v14 = v13;
 v15 = v12;
 k = v15 + 1;
 if ((int)pthread_create(&v14[0], 0, (void *(*)(void *))thread_tls_test, p[v15]))
 {
 v27 = 0;
 do
 {
 free(p[v27]);
 v27 += 1;
 } while (k != v27);
 free(p);
 free(addr);
 return 4294967294;
 }
 } while ((v17 = v14 + 1, v12 = k, v13 = v14 + 1, i != v12));
 v7 = 3;
 v8 = v3 & 4294967295;
 if ((unsigned int)v3 >= 1)
 {
 v18 = 0;
 v19 = 0;
 v20 = p;
 v21 = addr;
 do
 {
 j = i;
 v23 = v20;
 v24 = v21 + 1;
 pthread_join(*(v21), (void **)&ptr_result);
 v19 += ptr_result[0];
 v18 += ptr_result[1];
 free(ptr_result);
 v25 = v23 + 1;
 free(*(v23));
 v7 = 4;
 v8 = j;
 v20 = v25;
 v21 = v24;
 i = j - 1;
 } while (j != 1);
 goto LABEL_402c78;
 }
 }
 }
 v19 = 0;
 v18 = 0;
LABEL_402c78:
 free(p);
 free(addr);
 v28 = 100 * (unsigned int)v3;
 if ((unsigned int)v18 == 150 * (unsigned int)v3)
 {
 v29 = 3;
 v30 = ((char)arm64g_calculate_condition(v7, v8, 1, 0) ? v19 & 4294967295 : 0);
 v31 = ((char)arm64g_calculate_condition(v7, v8, 1, 0) ? v28 & 4294967295 : 0);
 }
 else
 {
 v29 = 0;
 v30 = ((char)arm64g_calculate_condition(v7, v8, 1, 0) ? v19 & 4294967295 : 0);
 v31 = ((char)arm64g_calculate_condition(v7, v8, 1, 0) ? v28 & 4294967295 : 0);
 }
 if ((char)arm64g_calculate_condition(v29, v30, v31, 0))
 v32 = 42;
 else
 v32 = 4294967293;
 return v32;
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_thread_local_storage at 0x402cf8
unsigned long long call_thread_local_storage()
{
 unsigned long long count; // x0

 count = param_thread_local_storage(4);
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x402d00

int test_thread_concurrency()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_40323b);
 printf(g_403153, param_pthread_create(7) & 4294967295);
 printf(g_40316f, param_pthread_join() & 4294967295);
 printf(g_40318c, param_mutex_lock(4, 1000) & 4294967295);
 printf(g_4031a8, param_condition_variable() & 4294967295);
 printf(g_4031c4, param_atomic_ops(4, 500) & 4294967295);
 return printf(g_4031e0, param_thread_local_storage(4) & 4294967295);
}


// Function: main at 0x402da8
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


// Function: sub_402dc8 at 0x402dc8
long long sub_402dc8()
{
 unsigned long long v0; // x0
 unsigned int expected = 0;
 unsigned int desired = 0;
 unsigned int *ptr = 0;

 v0 = __aarch64_cas4_acq_rel(expected, desired, ptr);
 return __aarch64_cas4_acq_rel(expected, desired, ptr);
}


// Function: sub_402de4 at 0x402de4
long long sub_402de4()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_402e04 at 0x402e04
long long sub_402e04()
{
 unsigned long long v0; // x0
 unsigned int val = 0;
 unsigned int *ptr = 0;

 v0 = __aarch64_ldadd4_acq_rel(val, ptr);
 return __aarch64_ldadd4_acq_rel(val, ptr);
}


// Function: sub_402e24 at 0x402e24
long long sub_402e24()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


