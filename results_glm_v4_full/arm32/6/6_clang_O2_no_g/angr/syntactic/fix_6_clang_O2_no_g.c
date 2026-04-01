// Angr Decompilation of 6_clang_O2_no_g
// Platform: ARMEL

#include <sys/stat.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <sys/shm.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/syscall.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/* CRT stub function _init removed by preprocessor */



// Function: sub_400c48 at 0x400c48
extern unsigned int g_414008;

// Global pthread variables
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int shared_counter = 0;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
char data = 0;
char ready = 0;
char i = 0;
unsigned int atomic_counter = 0;
unsigned int signal_number = 0;
unsigned int signal_received = 0;

int sub_400c48()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400fa8 at 0x400fa8
void sub_400fa8()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_strcpy at 0x4010d8
int param_strcpy(char *a0, char *a1)
{
 unsigned int len; // r0

 len = strlen(strcpy(a0, a1));
 return strlen(strcpy(a0, a1));
}


// Function: call_strcpy at 0x4010e8
int call_strcpy()
{
 unsigned int len; // r0
 char v0[8]; // [bp-0x28]
 char v1[24]; // [bp-0x20]

 strncpy(v1, "HelloLib", 8);
 len = strlen(&v0);
 return strlen(&v0);
}


// Function: param_strcmp at 0x401124
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v1; // lr
 unsigned int result; // r0
 unsigned int v4; // r1
 unsigned int v5; // r1
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 result = strcmp(a0, a1);
 if (result)
 v4 = 4294967295;
 else
 v4 = result;
 v5 = v4;
 if (1 > result)
 return v5;
 return 1;
}


// Function: call_strcmp at 0x40114c
unsigned int call_strcmp()
{
 return 0;
}


// Function: param_strlen at 0x401154
int param_strlen()
{
 char *v0; // r0
 unsigned int len; // r0

 len = strlen(v0);
 return strlen(v0);
}


// Function: call_strlen at 0x401158
unsigned int call_strlen()
{
 return 12;
}


// Function: param_memcpy at 0x401160
int param_memcpy(void* a0, void* a1, unsigned int n)
{
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x401178
unsigned int call_memcpy()
{
 return 90;
}


// Function: param_memcmp at 0x401180
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v1; // lr
 unsigned int result; // r0
 unsigned int v4; // r1
 unsigned int v5; // r1
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 result = memcmp(a0, a1, a2);
 if (result)
 v4 = 4294967295;
 else
 v4 = result;
 v5 = v4;
 if (1 > result)
 return v5;
 return 1;
}


// Function: call_memcmp at 0x4011a8
extern void g_402ad0;
extern void g_402adc;

int call_memcmp()
{
 unsigned int v4; // lr
 unsigned int v5; // r6
 unsigned int v14; // r1
 unsigned int v15; // r1
 unsigned int v6; // r5
 unsigned int v7; // r4
 unsigned int flag1; // r0
 unsigned int v10; // r5
 unsigned int v11; // r5
 unsigned int result; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = v5;
 v1 = v6;
 v0 = v7;
 flag1 = memcmp(&g_402adc, &g_402ad0, 12);
 if (flag1)
 v10 = 4294967295;
 else
 v10 = flag1;
 v11 = v10;
 if (1 <= flag1)
 v11 = 1;
 result = memcmp(&g_402adc, &g_402adc, 12);
 if (result)
 v14 = 4294967295;
 else
 v14 = result;
 v15 = v14;
 if (1 <= result)
 v15 = 1;
 return v15 + v11;
}


// Function: param_printf at 0x401218
int param_printf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0

 v0 = printf("Value: %d, Name: %s\n", a0, a1);
 return printf("Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x401230
int call_printf()
{
 unsigned int v0; // r0

 v0 = printf("Value: %d, Name: %s\n", 42, "Test");
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


// Function: param_scanf at 0x401250
unsigned int param_scanf()
{
 char *v2; // r0
 int v0; // [bp-0x10]
 int v1; // [bp-0xc]

 return (__isoc99_sscanf(v2, "%d,%d", &v1, &v0) == 2 ? v0 + v1 : 4294967295);
}


// Function: call_scanf at 0x401294
unsigned int call_scanf()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 return (__isoc99_sscanf("123,456", "%d,%d", (int*)&v1, (int*)&v0) == 2 ? v0 + v1 : 4294967295);
}


// Function: param_fopen_fclose at 0x4012e4
// Using standard FILE from stdio.h

// Using standard pthread_t from pthread.h

#ifndef NULL
#define NULL ((void*)0)
#endif

int param_fopen_fclose(char *a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 FILE *fp; // r0
 FILE *v2; // r0
 FILE *v3; // r0
 int v4; // r0

 fp = fopen(a0, "r");
 if (!fp)
 {
 return -1;
 }
 else
 {
 v3 = fp;
 }
LABEL_401304:
 v4 = fileno(v3);
 fclose(v3);
 return v4;
}


// Function: call_fopen_fclose at 0x401328
void* call_fopen_fclose(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v4; // lr
 unsigned int v5; // r5
 unsigned int v6; // r4
 unsigned int v3; // [bp-0x8]
 unsigned int v1; // [bp-0x4]
 unsigned int v0; // [bp-0x0]
 FILE *fp; // r0
 FILE *v8; // r0
 FILE *v9; // r0
 int v10; // r0

 v3 = v4;
 v1 = v5;
 v0 = v6;
 fp = fopen("/etc/passwd", "r");
 if (!fp)
 {
 return (void *)-1;
 }
 else
 {
 v9 = fp;
 }
LABEL_401350:
 v10 = fileno(v9);
 fclose(v9);
 return (armg_calculate_condition(193, v10, 1, 0) ? (void*)0x2a : (void*)0xffffffff);
}


// Function: param_fread_fwrite at 0x401380
unsigned int param_fread_fwrite(char *a0)
{
 FILE *fp; // r0
 FILE *v2; // r5
 unsigned int count; // r7
 char v0; // [bp-0x38]

 fp = fopen(a0, "w+");
 if (!fp)
 return 4294967295;
 v2 = fp;
 if (fwrite("BinBench Test Data", 1, 18, v2) != 18)
 {
 fclose(v2);
 return 4294967294;
 }
 rewind(v2);
 count = fread(&v0, 1, 18, v2);
 (&v0)[count] = 0;
 fclose(v2);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 return (!bcmp(&v0, "BinBench Test Data", 19) ? 42 : 4294967293);
}


// Function: call_fread_fwrite at 0x401460
unsigned int call_fread_fwrite()
{
 unsigned int count; // r0

 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x401470
unsigned int * param_malloc_free(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int *ptr; // r0
 unsigned int *v2; // r0
 unsigned int v4; // r5
 unsigned int v5; // r1
 unsigned int *p; // r2
 unsigned int result; // r3
 unsigned int *v8; // r2

 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 return (unsigned int *)-1;
 }
 else
 {
 v2 = ptr;
 }
LABEL_401490:
 if (a0)
 {
 v5 = 0;
 p = ptr;
 result = a0;
 do
 {
 v8 = p + 1;
 *(p) = v5;
 v5 += 10;
 p = v8;
 result -= 1;
 } while (result != 1);
 v4 = *(ptr);
 }
 free(ptr);
 return (1 < a0 ? ptr[a0 - 1] : 0) + v4;
}


// Function: call_malloc_free at 0x4014d4
unsigned int call_malloc_free()
{
 return 90;
}


// Function: param_memset at 0x4014dc
unsigned int param_memset(char *ptr, unsigned int a1)
{
 unsigned int n; // r4
 unsigned int v1; // r6
 char *v2; // r5
 unsigned int v3; // r4

 n = a1;
 memset(ptr, 0, n);
 if (!n)
 return 0;
 v1 = 0;
 do
 {
 v2 = ptr + 1;
 v3 = n - 1;
 v1 += *(ptr);
 ptr = v2;
 n = v3;
 } while (n != 1);
 return v1;
}


// Function: call_memset at 0x401520
unsigned int call_memset()
{
 return 0;
}


// Function: param_strchr_strstr at 0x401528
int param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned int v4; // lr
 unsigned int v5; // r6
 unsigned int v6; // r5
 unsigned int v7; // r4
 unsigned int ptr1; // r0
 unsigned int v9; // r6
 unsigned int ptr2; // r0
 unsigned int v11; // r1
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = v5;
 v1 = v6;
 v0 = v7;
 ptr1 = (unsigned int)strchr(a0, a1);
 v9 = ptr1 ? (ptr1 - (unsigned int)a0) : 4294967295;
 ptr2 = (unsigned int)strstr(a0, a2);
 v11 = ptr2 ? (ptr2 - (unsigned int)a0) : 4294967295;
 return v11 + v9;
}


// Function: call_strchr_strstr at 0x401568
unsigned int call_strchr_strstr()
{
 return 15;
}


// Function: test_standard_library_functions at 0x401570
extern void g_402ad0;
extern void g_402adc;
extern char g_402b4b;
extern char g_402b66;
extern char g_402b81;
extern char g_402b9d;
extern char g_402bb9;
extern char g_402bd5;
extern char g_402bf1;
extern char g_402c0e;
extern char g_402c2a;
extern char g_402c46;
extern char g_402c62;
extern char g_402c7d;
extern char g_402e36;

int test_standard_library_functions()
{
 unsigned int flag1; // r0
 unsigned int v13; // r4
 unsigned int v15; // r1
 FILE *fp; // r0
 unsigned int v17; // r0
 unsigned int v19; // r0
 unsigned int v6; // r5
 unsigned int v7; // r5
 unsigned int result; // r0
 unsigned int v10; // r1
 unsigned int v11; // r1
 char v0[8]; // [bp-0x34]
 char v1[24]; // [bp-0x2c]
 char v2; // [bp-0x14]

 puts(&g_402e36);
 strncpy(v1, "HelloLib", 8);
 printf(&g_402b4b, strlen(&v0));
 printf(&g_402b66, 0);
 printf(&g_402b81, 12);
 printf(&g_402b9d, 90);
 flag1 = memcmp(&g_402adc, &g_402ad0, 12);
 if (flag1)
 v6 = 4294967295;
 else
 v6 = flag1;
 v7 = v6;
 if (1 <= flag1)
 v7 = 1;
 result = memcmp(&g_402adc, &g_402adc, 12);
 if (result)
 v10 = 4294967295;
 else
 v10 = result;
 v11 = v10;
 if (1 <= result)
 v11 = 1;
 printf(&g_402bb9, v11 + v7);
 printf(&g_402bd5, printf("Value: %d, Name: %s\n", 42, "Test"));
 v13 = 4294967295;
 v15 = (__isoc99_sscanf("123,456", "%d,%d", (int*)&v2, (int*)&v0) == 2 ? (int)v2 + (int)v0 : 4294967295);
 printf(&g_402bf1, v15);
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 v17 = fileno(fp);
 fclose(fp);
 v13 = (armg_calculate_condition(193, v17, 1, 0) ? 42 : 4294967295);
 }
 printf(&g_402c0e, v13);
 printf(&g_402c2a, param_fread_fwrite("/tmp/binbench_test_tmp"));
 printf(&g_402c46, 90);
 printf(&g_402c62, 0);
 v19 = printf(&g_402c7d, 15);
 return printf(&g_402c7d, 15);
}


// Function: param_linux_syscall at 0x4017b8
unsigned int param_linux_syscall(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = syscall(5);
 if ((char)armg_calculate_condition(209, v0, 1, 0))
 return -(*(__errno_location()));
 else
 syscall(6);
 return v0;
}


// Function: call_linux_syscall at 0x401800
unsigned int call_linux_syscall()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = syscall(5);
 if (!((char)armg_calculate_condition(209, v4, 1, 0)))
 syscall(6);
 else
 v4 = -(*(__errno_location()));
 return (armg_calculate_condition(193, v4, 1, 0) ? 42 : 4294967295);
}


// Function: param_win32_api at 0x401858
unsigned int param_win32_api()
{
 struct stat v0; // [bp-0x34]

 if (!armg_calculate_condition(209, stat("/etc/passwd", &v0), 1, 0))
 return (0 < *((int *)&v0) ? 42 : 4294967294);
 return 4294967295;
}


// Function: call_win32_api at 0x401890
unsigned int call_win32_api()
{
 char v0; // [bp-0x60]
 char v1; // [bp-0x34]

 if (!armg_calculate_condition(209, stat("/etc/passwd", &v0), 1, 0))
 return (0 < *((int *)&v1) ? 42 : 4294967294);
 return 4294967295;
}


// Function: param_fork_exec at 0x4018d4
unsigned int param_fork_exec(char *a0, unsigned int a1)
{
 unsigned int pid; // r0
 unsigned int v2; // r0
 unsigned int v3; // cc_dep1
 unsigned int v4; // r1
 unsigned int v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 unsigned int v8; // r0
 int v0; // [bp-0x14]

 pid = fork();
 if ((char)armg_calculate_condition(66, pid, 0, 0))
 {
 return 4294967295;
 }
 else if (!((char)armg_calculate_condition(2, pid, 0, 0)))
 {
 v2 = waitpid(pid, &v0, 0);
 v3 = v2;
 if ((char)armg_calculate_condition(66, v2, 0, 0))
 return 4294967294;
 v4 = v0;
 v5 = v4 & 127;
 v6 = armg_calculate_flag_c(2, v3, 0, 0);
 v7 = armg_calculate_flag_v(2, v3, 0, 0);
 if (!((char)v4 & 127))
 {
 v8 = 255;
 if (!armg_calculate_condition(5, v5, v6, v7))
 goto LABEL_40191a;
LABEL_401919:
 v8 &= v4 >> 8;
 }
 else
 {
 v8 = 4294967293;
 if (armg_calculate_condition(5, v5, v6, v7))
 goto LABEL_401919;
LABEL_40191a:
 }
 return v8;
 }
 else
 {
 execl(a0, a0, (char*)NULL);
 _exit(127); /* do not return */
 }
 return 0;
}


// Function: call_fork_exec at 0x401954
unsigned int call_fork_exec()
{
 unsigned int pid; // r0
 int v0; // [bp-0xc]

 pid = fork();
 if ((char)armg_calculate_condition(66, pid, 0, 0))
 {
 return 4294967295;
 }
 else if ((char)armg_calculate_condition(2, pid, 0, 0))
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if ((char)armg_calculate_condition(66, waitpid(pid, &v0, 0), 0, 0))
 {
 return 4294967295;
 }
 else if (!((char)v0 & 127))
 {
 return (!(v0 & 0xff00) ? 42 : 4294967295);
 }
 else
 {
 return 4294967295;
 }
}


// Function: param_pipe_communication at 0x4019d0
unsigned int param_pipe_communication()
{
 unsigned int pid; // r0
 unsigned int count; // r5
 char v0[56]; // [bp-0x38]
 int v1[2]; // [bp-0x18]

 if ((char)armg_calculate_condition(66, pipe(v1), 0, 0))
 return 4294967295;
 pid = fork();
 if ((char)armg_calculate_condition(66, pid, 0, 0))
 {
 return 4294967294;
 }
 else if (!((char)armg_calculate_condition(2, pid, 0, 0)))
 {
 close(v1[1]);
 count = read(v1[0], v0, 31);
 v0[count] = 0;
 close(v1[0]);
 wait(NULL);
 return (0 < count ? 42 : 4294967293);
 }
 else
 {
 close(v1[0]);
 write(v1[1], "HelloPipe", 9);
 close(v1[1]);
 _exit(0); /* do not return */
 }
}


// Function: call_pipe_communication at 0x401a88
unsigned int call_pipe_communication()
{
 unsigned int v0; // r0

 v0 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x401a8c
// Using standard sockaddr from sys/socket.h

unsigned int param_socket_create()
{
 unsigned int sock; // r0
 unsigned int v4; // r4
 unsigned int v5; // r0
 struct sockaddr v0; // [bp-0x24]
 unsigned int result; // [bp-0x14]

 sock = socket(2, 1, 0);
 if ((char)armg_calculate_condition(66, sock, 0, 0))
 return 4294967295;
 v4 = sock;
 result = 1;
 if ((char)armg_calculate_condition(209, setsockopt(v4, 1, 2, &result, 4), 1, 0))
 {
 close(v4);
 return 4294967294;
 }
 ((struct sockaddr_in*)&v0)->sin_family = 2;
 memset(((struct sockaddr_in*)&v0)->sin_addr.s_addr, 0, 8);
 if ((char)armg_calculate_condition(209, bind(v4, (struct sockaddr*)&v0, 16), 1, 0))
 {
 close(v4);
 return 4294967293;
 }
 v5 = listen(v4, 5);
 close(v4);
 return (armg_calculate_condition(66, v5, 0, 0) ? 0xfffffffc : 42);
}


// Function: call_socket_create at 0x401b64
unsigned int call_socket_create()
{
 unsigned int sock; // r0

 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x401b68
int param_shmget_shmat()
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 void* v2; // r0
 void* v3; // r5
 unsigned int len; // r0

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ((char)armg_calculate_condition(66, v0, 0, 0))
 return 4294967295;
 close(v0);
 if ((char)armg_calculate_condition(66, ftok("/tmp/binbench_shm", 42), 0, 0))
 return 4294967295;
 v1 = shmget(ftok("/tmp/binbench_shm", 42), 1024, 0666 | IPC_CREAT);
 if ((char)armg_calculate_condition(66, v1, 0, 0))
 return 4294967294;
 v2 = shmat(v1, 0, 0);
 if (v2 == 0xffffffff)
 return 4294967293;
 v3 = v2;
 memcpy(v2, "SharedMemory", 13);
 len = strlen(v3);
 shmdt(v3);
 shmctl(v1, 0, 0);
 return len;
}


// Function: call_shmget_shmat at 0x401c44
unsigned int call_shmget_shmat()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return (0 < param_shmget_shmat() ? 42 : 4294967295);
}


// Function: param_signal_handling at 0x401c64
extern unsigned int signal_number;
extern unsigned int signal_received;

int __dollar_a_34(unsigned int a0);

unsigned int param_signal_handling(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int v3; // r5
 unsigned int v4; // r5
 unsigned int v5; // r5
 unsigned int v6; // cc_dep1
 unsigned int v7; // r4
 unsigned int v8; // r4
 unsigned int v9; // r4
 unsigned int v0; // [bp-0x8]

 v1 = signal(10, __dollar_a_34);
 if (v1 == 4294967295)
 {
 if (!((char)armg_calculate_condition(1, v1, 1, 0)))
 goto LABEL_401c88;
 return 4294967295;
 }
 else
 {
 if (!((char)armg_calculate_condition(1, v1, 1, 0)))
 goto LABEL_401c88;
 return v1;
 }
LABEL_401c88:
 v2 = signal(14, __dollar_a_34);
 if (v2 == 4294967295)
 {
 if (!((char)armg_calculate_condition(1, v2, 1, 0)))
 goto LABEL_401ca8;
 return 4294967294;
 }
 else
 {
 if (!((char)armg_calculate_condition(1, v2, 1, 0)))
 goto LABEL_401ca8;
 return v2;
 }
LABEL_401ca8:
 signal_received = 0;
 raise(10);
 if (!signal_received)
 {
 v3 = 1000;
 do
 {
 v4 = v3;
 usleep(1000);
 } while (!signal_received && (v5 = v4 - 1, v3 = v4 - 1, 1 < v4));
 }
 v6 = signal_received;
 if (!signal_received)
 {
 if (!((char)armg_calculate_condition(2, v6, 0, 0)))
 goto LABEL_401d0c;
 return 4294967293;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, v6, 0, 0)))
 goto LABEL_401d0c;
 return signal_received;
 }
LABEL_401d0c:
 if (signal_number != 10)
 return 0xfffffffc;
 signal_received = 0;
 alarm(1);
 if (!signal_received)
 {
 v7 = 2000;
 do
 {
 v8 = v7;
 usleep(1000);
 } while (!signal_received && (v9 = v8 - 1, v7 = v8 - 1, 1 < v8));
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


// Function: __dollar_a_34 at 0x401dd8
extern unsigned int signal_number;
extern unsigned int signal_received;

int __dollar_a_34(unsigned int a0)
{
 signal_received = 1;
 signal_number = a0;
 return a0;
}


// Function: call_signal_handling at 0x401e00
unsigned int call_signal_handling()
{
 unsigned int v12; // r0
 unsigned int v13; // r1
 unsigned int v14; // r2
 unsigned int v15; // r3
 unsigned int v16; // r0
 char v0; // [bp+0x0]
 char v1; // [bp+0x4]
 char v2; // [bp+0x8]
 char v3; // [bp+0xc]
 char v4; // [bp+0x10]
 char v5; // [bp+0x14]
 char v6; // [bp+0x18]
 char v7; // [bp+0x1c]
 char v8; // [bp+0x20]
 char v9; // [bp+0x24]
 char v10; // [bp+0x28]
 char v11; // [bp+0x2c]

 v16 = param_signal_handling(v12, v13, v14, v15, (unsigned int)&v0, (unsigned int)&v1, (unsigned int)&v2, (unsigned int)&v3, (unsigned int)&v4, (unsigned int)&v5, (unsigned int)&v6, (unsigned int)&v7, (unsigned int)&v8, (unsigned int)&v9, (unsigned int)&v10, (unsigned int)&v11);
 return param_signal_handling(v12, v13, v14, v15, (unsigned int)&v0, (unsigned int)&v1, (unsigned int)&v2, (unsigned int)&v3, (unsigned int)&v4, (unsigned int)&v5, (unsigned int)&v6, (unsigned int)&v7, (unsigned int)&v8, (unsigned int)&v9, (unsigned int)&v10, (unsigned int)&v11);
}


// Function: test_system_calls at 0x401e04
extern char g_402cbf;
extern char g_402cdb;
extern char g_402cf7;
extern char g_402d13;
extern char g_402d2f;
extern char g_402d4b;
extern char g_402d67;
extern char g_402e5a;

int test_system_calls()
{
 unsigned int v11; // r0
 unsigned int v12; // r0
 unsigned int v21; // r2
 unsigned int v22; // r3
 unsigned int v23; // r0
 unsigned int v24; // r0
 unsigned int v13; // r1
 unsigned int pid; // r0
 unsigned int v15; // r1
 unsigned int v19; // r0
 unsigned int v20; // r1
 int v0; // [bp-0x68]
 char v1; // [bp-0x60]
 char v2; // [bp-0x5c]
 char v3; // [bp-0x58]
 char v4; // [bp-0x54]
 char v5; // [bp-0x50]
 char v6; // [bp-0x4c]
 char v7; // [bp-0x48]
 char v8; // [bp-0x44]
 char v9; // [bp-0x40]
 char v10; // [bp-0x3c]

 puts(&g_402e5a);
 v11 = syscall(5);
 if (!((char)armg_calculate_condition(209, v11, 1, 0)))
 syscall(6);
 else
 v11 = -(*(__errno_location()));
 printf(&g_402cbf, (armg_calculate_condition(193, v11, 1, 0) ? 42 : 4294967295));
 v12 = stat("/etc/passwd", (struct stat*)&v0);
 v13 = (0 < *(int*)((char*)&v0 + 104) ? 42 : 4294967294);
 if (armg_calculate_condition(209, v12, 1, 0))
 v13 = 4294967295;
 printf(&g_402cdb, v13);
 pid = fork();
 v15 = 4294967295;
 if (!((char)armg_calculate_condition(66, pid, 0, 0)))
 {
 if ((char)armg_calculate_condition(2, pid, 0, 0))
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if ((char)armg_calculate_condition(66, waitpid(pid, &v0, 0), 0, 0) || ((char)*(int*)((char*)&v0) & 127))
 {
 v15 = 4294967295;
 }
 else if (!((unsigned short)*(int*)((char*)&v0) & 0xff00))
 {
 v15 = 42;
 }
 else
 {
 v15 = 4294967295;
 }
 }
 printf(&g_402cf7, v15);
 printf(&g_402d13, param_pipe_communication());
 printf(&g_402d2f, param_socket_create());
 v19 = printf(&g_402d4b, (0 < param_shmget_shmat() ? 42 : 4294967295));
 v23 = param_signal_handling(v19, v20, v21, v22, (unsigned int)&v0, (unsigned int)&v0, (unsigned int)&v1, (unsigned int)&v2, (unsigned int)&v3, (unsigned int)&v4, (unsigned int)&v5, (unsigned int)&v6, (unsigned int)&v7, (unsigned int)&v8, (unsigned int)&v9, (unsigned int)&v10);
 v24 = printf(&g_402d67, v23);
 return printf(&g_402d67, v23);
}


// Function: thread_compute at 0x401fa8
void * thread_compute(void *a0)
{
 unsigned int *ptr; // r0
 unsigned int val = *(unsigned int*)a0;

 ptr = (unsigned int *)malloc(4);
 *(ptr) = val * val;
 return ptr;
}


// Function: param_pthread_create at 0x401fc8
unsigned int param_pthread_create(unsigned int a0, unsigned int a1)
{
 unsigned int *v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]
 unsigned int result; // [bp-0x18]
 void *temp;

 v1 = a1;
 if (pthread_create(&v2, 0, (void*(*)(void*))thread_compute, &v1))
 return 4294967295;
 pthread_join(v2, &temp);
 v0 = (unsigned int*)temp;
 result = *v0;
 free(v0);
 return result;
}


// Function: call_pthread_create at 0x402024
unsigned int call_pthread_create()
{
 unsigned int *v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]
 unsigned int result; // [bp-0x18]
 void *temp;

 v1 = 7;
 if (pthread_create(&v2, 0, (void*(*)(void*))thread_compute, &v1))
 {
 return 4294967295;
 }
 pthread_join(v2, &temp);
 v0 = (unsigned int*)temp;
 result = *v0;
 free(v0);
 return result;
}


// Function: thread_sum at 0x402084
void * thread_sum(void *a0)
{
 unsigned int *ptr = (unsigned int *)a0;
 unsigned int v0; // r1
 unsigned int v1; // r2
 unsigned int temp;

 ptr[2] = 0;
 v0 = ptr[0];
 v1 = ptr[1];
 if (v1 >= v0)
 {
 temp = ((v1 + ~(v0)) * (v1 - v0) >> 32 & 1) * 0x80000000;
 temp |= (v1 + ~(v0)) * (v1 - v0) >> 1;
 ptr[2] = v0 + (v1 - v0) * (v0 + 1) + temp;
 }
 return 0;
}


// Function: param_pthread_join at 0x4020d4
unsigned int param_pthread_join()
{
 unsigned int count; // r0
 unsigned int v11; // r0
 unsigned int v0[4]; // [bp-0x40]
 unsigned int flag2; // [bp-0x38]
 unsigned int v2[4]; // [bp-0x34]
 unsigned int flag1; // [bp-0x2c]
 unsigned int v4[4]; // [bp-0x28]
 unsigned int result; // [bp-0x20]
 pthread_t v6; // [bp-0x1c]
 pthread_t v7; // [bp-0x18]
 pthread_t v8; // [bp-0x14]

 result = 0;
 flag1 = 0;
 flag2 = 0;
 v4[0] = 21;
 v4[1] = 31;
 v4[2] = 41;
 v4[3] = 51;
 v2[0] = 11;
 v2[1] = 21;
 v2[2] = 31;
 v2[3] = 41;
 v0[0] = 1;
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 if (pthread_create(&v6, 0, thread_sum, &v0))
 {
 return 4294967295;
 }
 else if (pthread_create(&v7, 0, thread_sum, &v2))
 {
 return 4294967295;
 }
 else if (pthread_create(&v8, 0, thread_sum, &v4))
 {
 return 4294967295;
 }
 else if (pthread_join(v6, 0))
 {
 return 4294967294;
 }
 else if (!pthread_join(v7, 0))
 {
 count = pthread_join(v8, 0);
 if (!count)
 {
 v11 = flag1 + flag2;
 if (!armg_calculate_condition(2, count, 0, 0))
 return 4294967294;
 }
 else
 {
 v11 = count;
 if (!armg_calculate_condition(2, v11, 0, 0))
 return 4294967294;
 }
 return result + v11;
 }
 else
 {
 return 4294967294;
 }
}


// Function: call_pthread_join at 0x4021f4
unsigned int call_pthread_join()
{
 unsigned int count; // r0

 count = param_pthread_join();
 return param_pthread_join();
}


// Function: thread_increment at 0x4021f8
void * thread_increment(void *a0)
{
 unsigned int *ptr = (unsigned int *)a0;
 unsigned int v0; // r5
 unsigned int result; // r5
 unsigned int v2; // r5

 v0 = ptr[0];
 if (v0 < 1)
 return 0;
 do
 {
 result = v0;
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 v2 = result - 1;
 v0 = v2;
 } while (result != 1);
 return 0;
}


// Function: param_mutex_lock at 0x402260
extern unsigned int shared_counter;

unsigned int param_mutex_lock(unsigned int a0, unsigned int a1) {
 unsigned int v1; // r9
 unsigned int flag1; // r5
 unsigned int v14; // r5
 pthread_t *ptr; // r8
 unsigned int v5; // r4
 unsigned int result; // r4
 unsigned int v10; // r5
 unsigned int v0; // [bp-0x24]

 v1 = a0;
 v0 = a1;
 ptr = malloc(a0 * sizeof(pthread_t));
 if (!ptr)
 return 4294967295;
 shared_counter = 0;
 if (v1 >= 1)
 {
 v5 = v1;
 pthread_t *v4 = ptr;
 do
 {
 result = v5;
 pthread_t *v7 = v4;
 if (pthread_create(v7, 0, thread_increment, &v0))
 {
 free(ptr);
 return 4294967294;
 }
 v4 = v7 + 1;
 v5 = result - 1;
 } while (result != 1);
 if (v1 >= 1)
 {
 v10 = v1;
 pthread_t *v11 = ptr;
 do
 {
 flag1 = v10;
 pthread_t *v13 = v11 + 1;
 pthread_join(v11, 0);
 v14 = flag1 - 1;
 v10 = v14;
 v11 = v13;
 } while (flag1 != 1);
 }
 }
 free(ptr);
 return (shared_counter == v0 * v1 ? 42 : 4294967293);
}


// Function: call_mutex_lock at 0x402350
unsigned int call_mutex_lock()
{
 unsigned int v0; // r0

 v0 = param_mutex_lock(4, 1000);
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x40235c

void * consumer_thread(void *a0)
{
 unsigned int *ptr; // r0

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
 *(ptr) = (data ? 42 : 0);
 return ptr;
}


// Function: producer_thread at 0x4023f4

void * producer_thread(void *a0)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: param_condition_variable at 0x40245c
extern char data;
extern char ready;

unsigned int param_condition_variable()
{
 unsigned int *v0; // [bp-0x14], Other Possible Types: char
 pthread_t v1; // [bp-0x10], Other Possible Types: unsigned int
 pthread_t v2; // [bp-0xc]

 ready = 0;
 data = 0;
 if (pthread_create(&v1, 0, consumer_thread, 0))
 {
 return 4294967295;
 }
 else if (pthread_create(&v2, 0, producer_thread, 0))
 {
 pthread_cancel(v1);
 return 4294967294;
 }
 else
 {
 pthread_join(v1, (void**)&v0);
 pthread_join(v2, 0);
 int val = *(v0);
 free(v0);
 return val;
 }
}


// Function: call_condition_variable at 0x402518
unsigned int call_condition_variable()
{
 unsigned int v0; // r0

 v0 = param_condition_variable();
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x40251c
extern unsigned int atomic_counter;

void * thread_atomic_increment(void *a0)
{
 unsigned int *ptr = (unsigned int *)a0;
 unsigned int i; // r7
 char v0; // [bp-0x1c]

 if (*(ptr) < 1)
 return 0;
 i = 0;
 do
 {
 __atomic_fetch_add(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 __atomic_compare_exchange_n(&atomic_counter, &v0, i + 1000, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
 i += 1;
 } while (i != *(ptr));
 return 0;
}


// Function: thread_atomic_load_store at 0x402590
extern unsigned int atomic_counter;

void * thread_atomic_load_store(void *a0)
{
 __atomic_store_4(&atomic_counter, __atomic_load_4(&atomic_counter, 5) + 100, 5);
 return 0;
}


// Function: param_atomic_ops at 0x4025c8
extern unsigned int atomic_counter;

unsigned int param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // r6
 unsigned int *ptr; // r0
 unsigned int flag1; // r6
 unsigned int *v13; // r4
 unsigned int v14; // r6
 unsigned int v15; // r0
 unsigned int *ptr2; // r8
 unsigned int v5; // r5
 unsigned int *v6; // r4
 unsigned int *v7; // r4
 unsigned int result; // r5
 unsigned int *v9; // r4
 unsigned int v10; // r5
 unsigned int *v11; // r4
 char v0; // [bp-0x28], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x24]

 v2 = a0;
 v1 = a1;
 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 __atomic_store_4(&atomic_counter, 0, 5);
 if (v2 >= 1)
 {
 v5 = v2;
 v6 = ptr2;
 do
 {
 v7 = v6;
 result = v5;
 if (pthread_create(v7, 0, thread_atomic_increment, &v1))
 {
 free(ptr);
 return 4294967294;
 }
 v9 = v7 + 4;
 v10 = result - 1;
 v5 = result - 1;
 v6 = v7 + 4;
 } while (result != 1);
 }
 if (!pthread_create(&v0, 0, thread_atomic_load_store, 0))
 pthread_join(v0, 0);
 if (v2 >= 1)
 {
 v11 = ptr;
 do
 {
 flag1 = v2;
 v13 = v11 + 1;
 pthread_join(*(v11), 0);
 v14 = flag1 - 1;
 v2 = v14;
 v11 = v13;
 } while (flag1 != 1);
 }
 v15 = __atomic_load_4(&atomic_counter, 5);
 free(ptr);
 return (0 < v15 ? 42 : 4294967293);
}


// Function: call_atomic_ops at 0x4026ec
unsigned int call_atomic_ops()
{
 unsigned int v0; // r0

 v0 = param_atomic_ops(4, 500);
 return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x4026f8
void * thread_tls_test(void *a0)
{
 char *str = (char *)a0;
 return (void*)(unsigned long)(strlen(str));
}


// Function: sub_402708 at 0x402708
unsigned int* sub_402708(char *a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v0; // r4
 unsigned int v1; // r5
 unsigned int *ptr; // r0

 v0 = *((int *)&a0[a2]);
 v1 = v0 + 50;
 *((unsigned int *)&a0[a2]) = v1;
 strncpy(a0 + 12, a1, 31);
 ptr = malloc(8);
 ptr[0] = v0;
 ptr[1] = v1;
 return ptr;
}


// Function: param_thread_local_storage at 0x402740
unsigned int param_thread_local_storage(unsigned int a0)
{
 unsigned int v3; // r4
 unsigned int i; // r10
 unsigned int index; // r4
 char *char_ptr; // r0
 unsigned int v18; // r5
 unsigned int v19; // r4
 unsigned int v20; // r4
 unsigned int v21; // r4
 unsigned int v22; // r9
 pthread_t *thread_array; // r8
 unsigned int v23; // r4
 char **v24; // r6
 char **v25; // r6
 unsigned int result; // r10
 unsigned int *v27; // r5
 char **v28; // r6
 unsigned int v29; // r10
 unsigned int k; // r5
 char **p; // r11
 unsigned int v0; // [bp-0x30]
 unsigned int v1; // [bp-0x2c]
 unsigned int v30; // [bp-0x28]
 char *tmp_str;

 v3 = a0 * 4;
 i = a0;
 char_ptr = (char *)malloc(v3);
 p = (char **)malloc(v3);
 thread_array = (pthread_t *)malloc(a0 * sizeof(pthread_t));
 if (!char_ptr || !p)
 {
 return 4294967295;
 }
 if (i >= 1)
 {
 index = 0;
 do
 {
 tmp_str = (char *)malloc(16);
 p[index] = tmp_str;
 snprintf(tmp_str, 16, "Thread-%d", index);
 index += 1;
 } while (i != index);
 if (i < 1)
 goto LABEL_40284c;
 v18 = 0;
 do
 {
 if (pthread_create(&thread_array[v18], 0, (void*(*)(void*))thread_tls_test, p[v18]))
 {
 k = 0;
 do
 {
 free(p[k]);
 k += 1;
 } while (v18 + 1 != k);
 free(p);
 free(char_ptr);
 return 4294967294;
 }
 } while (i != ++v18);
 v1 = thread_array;
 v0 = i;
 if (i < 1)
 goto LABEL_402854;
 v22 = 0;
 v23 = 0;
 v24 = p;
 v27 = thread_array;
 do
 {
 void *temp;
 int *result_ptr;
 v25 = v24;
 result = i;
 pthread_join(*thread_array, &temp);
 result_ptr = (int *)malloc(sizeof(int));
 *result_ptr = (int)(unsigned long)temp;
 free(*v24);
 v22 += *result_ptr;
 free(result_ptr);
 v28 = v25 + 1;
 v29 = result - 1;
 i = v29;
 v24 = v28;
 thread_array = v27 + 1;
 v27 = thread_array;
 } while (result != 1);
 }
 else
 {
LABEL_40284c:
 v0 = i;
 v1 = thread_array;
 }
LABEL_402854:
 v23 = 0;
 v22 = 0;
 free(p);
 free(v1);
 return (!(v23 ^ v0 * 100) && !(v22 ^ v0 * 150) ? 4294967293 : 42);
}


// Function: call_thread_local_storage at 0x4028dc
unsigned int call_thread_local_storage()
{
 unsigned int count; // r0

 count = param_thread_local_storage(4);
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x4028e4
extern char g_402d8d;
extern char g_402da9;
extern char g_402dc6;
extern char g_402de2;
extern char g_402dfe;
extern char g_402e1a;
extern char g_402e75;

int test_thread_concurrency()
{
 unsigned int v3; // r4
 unsigned int v8; // r0
 unsigned int *ptr; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]

 puts(&g_402e75);
 v1 = 7;
 v3 = 4294967295;
 if (!pthread_create(&v2, 0, thread_compute, &v1))
 {
 pthread_join(v2, &ptr);
 v3 = *(ptr);
 free(ptr);
 }
 printf(&g_402d8d, v3);
 printf(&g_402da9, param_pthread_join());
 printf(&g_402dc6, param_mutex_lock(4, 1000));
 printf(&g_402de2, param_condition_variable());
 printf(&g_402dfe, param_atomic_ops(4, 500));
 v8 = printf(&g_402e1a, param_thread_local_storage(4));
 return v8;
}


// Function: main at 0x4029f0
unsigned int main()
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function __aeabi_read_tp removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */


