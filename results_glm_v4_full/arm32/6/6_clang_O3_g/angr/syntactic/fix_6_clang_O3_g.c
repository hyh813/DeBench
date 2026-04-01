// Angr Decompilation of 6_clang_O3_g
// Platform: ARMEL
#include <stdint.h>
#include <stddef.h>
#include <sys/ipc.h>
#include <sys/stat.h>
#include <pthread.h>


/* CRT stub function _init removed by preprocessor */



// Function: sub_400c48 at 0x400c48
extern unsigned int g_414008;

// Define global synchronization variables
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

// Define global signal handling variables
unsigned int signal_number = 0;
unsigned int signal_received = 0;

// Define global counters
unsigned int shared_counter = 0;
unsigned int atomic_counter = 0;

// Define global shared data
char data = 0;
char ready = 0;
char i = 0;

int sub_400c48()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 // goto g_414008; // jump table - stubbed
 return 0;
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



// Forward declaration
int __dollar_a_34(unsigned int a0);


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
extern void g_402b00;
extern void g_402b0c;

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
 flag1 = memcmp(&g_402b0c, &g_402b00, 12);
 if (flag1)
 v10 = 4294967295;
 else
 v10 = flag1;
 v11 = v10;
 if (1 <= flag1)
 v11 = 1;
 result = memcmp(&g_402b0c, &g_402b0c, 12);
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
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]

 return (__isoc99_sscanf(v2, "%d,%d", &v1, &v0) == 2 ? v0 + v1 : 4294967295U);
}


// Function: call_scanf at 0x401294
unsigned int call_scanf()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 return (__isoc99_sscanf("123,456", "%d,%d", &v1, &v0) == 2 ? v0 + v1 : 4294967295);
}


// Function: param_fopen_fclose at 0x4012e4
typedef struct FILE {
} FILE;

FILE * param_fopen_fclose(char *a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 FILE *fp; // r0
 FILE *v2; // r0
 FILE *v3; // r0
 int fd; // r0

	fp = fopen(a0, "r");
 if (!fp)
 {
 fd = -1;
 v3 = (FILE*)(intptr_t)-1;
 goto LABEL_401304;
 }
 else
 {
 v3 = fp;
 goto LABEL_401304;
 }
LABEL_401304:
 fd = fileno(v3);
 fclose(v3);
 return (FILE *)(intptr_t)fd;
}


// Function: call_fopen_fclose at 0x401328
void* call_fopen_fclose(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v4; // lr
 unsigned int v5; // r5
 unsigned int v6; // r4
 void* fp; // r0
 void* v8; // r0
 void* v9; // r0
 unsigned int v10; // r0

 fp = fopen("/etc/passwd", "r");
 if (!fp)
 {
 v8 = (void *)(intptr_t)0xffffffffU;
 v9 = v8;
 goto LABEL_401350;
 }
 else
 {
 v9 = fp;
 goto LABEL_401350;
 }
LABEL_401350:
 v10 = fileno(v9);
 fclose(v9);
 return ((v10 >= 1) ? (void *)(intptr_t)0x2a : (void *)(intptr_t)0xffffffffxffffffff);
}


// Function: param_fread_fwrite at 0x401380
unsigned int param_fread_fwrite(char *a0)
{
 void* fp; // r0
 void* v2; // r5
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


// Function: call_fread_fwrite at 0x401470
unsigned int call_fread_fwrite()
{
 unsigned int count; // r0

 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x401480
unsigned int * param_malloc_free(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int *ptr; // r0
 unsigned int *v2; // r0
 unsigned int v4; // r5
 unsigned int v5; // r1
 unsigned int *p; // r2
 unsigned int result; // r3
 unsigned int *v8; // r2
 unsigned int v0; // [bp-0x8]

 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 v2 = (unsigned int *)0xffffffff;
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_4014a0;
 return (unsigned int *)0xffffffff;
 ptr = v2;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_4014a0;
 return ptr;
 ptr = ptr;
 }
LABEL_4014a0:
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
 return ptr[1 + a0] + v4;
}


// Function: call_malloc_free at 0x4014e4
unsigned int call_malloc_free()
{
 return 90;
}


// Function: param_memset at 0x4014ec
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


// Function: call_memset at 0x401530
unsigned int call_memset()
{
 return 0;
}


// Function: param_strchr_strstr at 0x401538
int param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned int v4; // lr
 unsigned int v5; // r6
 unsigned int v6; // r5
 unsigned int v7; // r4
 char *ptr; // r0
 unsigned int v9; // r6
 char *ptr2; // r0
 unsigned int v11; // r1
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = v5;
 v1 = v6;
 v0 = v7;
 ptr = strchr(a0, a1);
 v9 = ptr ? (unsigned int)(ptr - a0) : 4294967295;
 ptr2 = strstr(a0, a2);
 v11 = ptr2 ? (unsigned int)(ptr2 - a0) : 4294967295;
 return v11 + v9;
}


// Function: call_strchr_strstr at 0x401578
unsigned int call_strchr_strstr()
{
 return 15;
}


// Function: test_standard_library_functions at 0x401580
extern void g_402b00;
extern void g_402b0c;
extern char g_402b7b;
extern char g_402b96;
extern char g_402bb1;
extern char g_402bcd;
extern char g_402be9;
extern char g_402c05;
extern char g_402c21;
extern char g_402c3e;
extern char g_402c5a;
extern char g_402c76;
extern char g_402c92;
extern char g_402cad;
extern char g_402e66;

int test_standard_library_functions()
{
 unsigned int flag1; // r0
 unsigned int v13; // r4
 unsigned int v15; // r1
 void* fp; // r0
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

 puts(&g_402e66);
 strncpy(v1, "HelloLib", 8);
 printf(&g_402b7b, strlen(&v0));
 printf(&g_402b96, 0);
 printf(&g_402bb1, 12);
 printf(&g_402bcd, 90);
 flag1 = memcmp(&g_402b0c, &g_402b00, 12);
 if (flag1)
 v6 = 4294967295;
 else
 v6 = flag1;
 v7 = v6;
 if (1 <= flag1)
 v7 = 1;
 result = memcmp(&g_402b0c, &g_402b0c, 12);
 if (result)
 v10 = 4294967295;
 else
 v10 = result;
 v11 = v10;
 if (1 <= result)
 v11 = 1;
 printf(&g_402be9, v11 + v7);
	printf(&g_402c05, printf("Value: %d, Name: %s\n", 42, "Test"));
 v13 = 4294967295;
	{
		int temp1, temp2;
		v15 = (__isoc99_sscanf("123,456", "%d,%d", &temp1, &temp2) == 2 ? temp1 + temp2 : 4294967295);
	}
 printf(&g_402c21, v15);
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 v17 = fileno(fp);
 fclose(fp);
 v13 = (armg_calculate_condition(193, v17, 1, 0) ? 42 : 4294967295);
 }
 printf(&g_402c3e, v13);
 printf(&g_402c5a, param_fread_fwrite("/tmp/binbench_test_tmp"));
 printf(&g_402c76, 90);
 printf(&g_402c92, 0);
 v19 = printf(&g_402cad, 15);
 return printf(&g_402cad, 15);
}


// Function: param_linux_syscall at 0x4017c8
unsigned int param_linux_syscall(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = syscall(5);
 if ((char)armg_calculate_condition(209, v0, 1, 0))
 return -(*(__errno_location()));
 syscall(6);
 return v0;
}


// Function: call_linux_syscall at 0x401818
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


// Function: param_win32_api at 0x401870
unsigned int param_win32_api()
{
 char v0; // [bp-0x34]

 if (!armg_calculate_condition(209, stat("", &v0), 1, 0))
 return (0 < *((int *)&v0) ? 42 : 4294967294);
 return 4294967295;
}


// Function: call_win32_api at 0x4018a8
unsigned int call_win32_api()
{
 struct stat v0; // [bp-0x60]
 struct stat v1; // [bp-0x34]

 if (!armg_calculate_condition(209, stat("/etc/passwd", &v0), 1, 0))
 return (0 < ((int)(v1.st_mode)) ? 42 : 4294967294);
 return 4294967295;
}


// Function: param_fork_exec at 0x4018ec
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
 int v0[1]; // [bp-0x14]

	pid = fork();
 if ((char)armg_calculate_condition(66, pid, 0, 0))
 {
 return 4294967295;
 }
 else if (!((char)armg_calculate_condition(2, pid, 0, 0)))
 {
	v2 = waitpid(pid, (int*)&(v0[0]), 0);
 v3 = v2;
 if ((char)armg_calculate_condition(66, v2, 0, 0))
 return 4294967294;
 v4 = v0[0];
 v5 = v4 & 127;
 v6 = armg_calculate_flag_c(2, v3, 0, 0);
 v7 = armg_calculate_flag_v(2, v3, 0, 0);
 if (!((char)v4 & 127))
 {
 v8 = 255;
 if (!armg_calculate_condition(5, v5, v6, v7))
 return 255;
 }
 else
 {
	v8 = 4294967293;
 if (!armg_calculate_condition(5, v5, v6, v7))
 return 4294967293;
 }
 return v8 & (unsigned int)(v4 >> 8);
 }
 else
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
}


// Function: call_fork_exec at 0x40197c
unsigned int call_fork_exec()
{
	unsigned int pid; // r0
 int exit_status; // [bp-0xc]

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
 else if ((char)armg_calculate_condition(66, waitpid(pid, &exit_status, 0), 0, 0))
 {
 return 4294967295;
 }
 else if ((char)exit_status & 127)
 {
 return 4294967295;
 }
 else
 {
 return (!(exit_status & 0xff00) ? 42 : 4294967295);
 }
}


// Function: param_pipe_communication at 0x401a08
unsigned int param_pipe_communication()
{
 unsigned int pid; // r0
 unsigned int count; // r5
 char v0; // [bp-0x38]
 int pipefd[2]; // [bp-0x18]

 if ((char)armg_calculate_condition(66, pipe(pipefd), 0, 0))
 return 4294967295;
 pid = fork();
 if ((char)armg_calculate_condition(66, pid, 0, 0))
 {
 return 4294967294;
 }
 else if (!((char)armg_calculate_condition(2, pid, 0, 0)))
 {
 close(pipefd[1]);
 count = read(pipefd[0], &v0, 31);
 (&v0)[count] = 0;
 close(pipefd[0]);
 wait(NULL);
 return (0 < count ? 42 : 4294967293);
 }
 else
 {
 close(pipefd[0]);
 write(pipefd[1], "HelloPipe", 9);
 close(pipefd[1]);
 _exit(0); /* do not return */
 }
}


// Function: call_pipe_communication at 0x401ad0
unsigned int call_pipe_communication()
{
 unsigned int v0; // r0

 v0 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x401ad4
typedef struct sockaddr {
 unsigned short sin_family;
 char sa_data[14];
} sockaddr;

typedef unsigned long pthread_t;

unsigned int param_socket_create()
{
 unsigned int sock; // r0
 unsigned int v4; // r4
 unsigned int v5; // r0
 sockaddr v0; // [bp-0x24]
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
 *((unsigned int *)&v0.sin_family) = 2;
 memset(&v0.sa_data[2], 0, 12);
 if ((char)armg_calculate_condition(209, bind(v4, &v0, 16), 1, 0))
 {
 close(v4);
 return 4294967293;
 }
 v5 = listen(v4, 5);
 close(v4);
 return (armg_calculate_condition(66, v5, 0, 0) ? 0xfffffffc : 42);
}


// Function: call_socket_create at 0x401bc4
unsigned int call_socket_create()
{
 unsigned int sock; // r0

 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x401bc8
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
 v1 = shmget(0, 4096, 0666 | IPC_CREAT);
 if ((char)armg_calculate_condition(66, v1, 0, 0))
 return 4294967294;
 v2 = shmat(v1, 0, 0);
 if (v2 == (void*)-1)
 return 4294967293;
 v3 = v2;
 memcpy(v2, "SharedMemory", 13);
 len = strlen(v3);
 shmdt(v3);
 shmctl(v1, 0, 0);
 return len;
}


// Function: call_shmget_shmat at 0x401cac
unsigned int call_shmget_shmat()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return (0 < param_shmget_shmat() ? 42 : 4294967295);
}


// Function: param_signal_handling at 0x401ccc
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned int param_signal_handling(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int v3; // r5
 unsigned int v4; // r5
 unsigned int v5; // r5
 unsigned int result; // r0
 unsigned int v7; // r5
 unsigned int v8; // r5
 unsigned int v9; // r5
 unsigned int v0; // [bp-0x8]

 v1 = signal(10, __dollar_a_34);
 if (v1 == 4294967295)
 {
 return 4294967295;
 }
 else
 {
 return v1;
 }
LABEL_401cf0:
 v2 = signal(14, __dollar_a_34);
 if (v2 == 4294967295)
 {
 return 4294967294;
 }
 else
 {
 return v2;
 }
LABEL_401d10:
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
 result = signal_received;
 if (!result)
 {
 return 4294967293;
 }
 else
 {
 return result;
 }
LABEL_401d68:
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


// Function: __dollar_a_34 at 0x401e00
extern unsigned int signal_number;
extern unsigned int signal_received;

int __dollar_a_34(unsigned int a0)
{
 signal_received = 1;
 signal_number = a0;
 return a0;
}


// Function: call_signal_handling at 0x401e1c
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

 v16 = param_signal_handling(v12, v13, v14, v15, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3), *((int *)&v4), *((int *)&v5), *((int *)&v6), *((int *)&v7), *((int *)&v8), *((int *)&v9), *((int *)&v10), *((int *)&v11));
 return param_signal_handling(v12, v13, v14, v15, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3), *((int *)&v4), *((int *)&v5), *((int *)&v6), *((int *)&v7), *((int *)&v8), *((int *)&v9), *((int *)&v10), *((int *)&v11));
}


// Function: test_system_calls at 0x401e20
extern char g_402cef;
extern char g_402d0b;
extern char g_402d27;
extern char g_402d43;
extern char g_402d5f;
extern char g_402d7b;
extern char g_402d97;
extern char g_402e8a;

int test_system_calls()
{
 unsigned int v11; // r0
 unsigned int v12; // r0
 unsigned int v21; // r2
 unsigned int v22; // r3
 unsigned int v23; // r0
 unsigned int v13; // r1
 unsigned int pid; // r0
 unsigned int v15; // r1
 unsigned int v19; // r0
 unsigned int v20; // r1
 struct stat v0; // [bp-0x68]
 int exit_status; // [bp-0x14]
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

 puts(&g_402e8a);
 v11 = syscall(5);
 if (!((char)armg_calculate_condition(209, v11, 1, 0)))
 syscall(6);
 else
 v11 = -(*(__errno_location()));
 printf(&g_402cef, (armg_calculate_condition(193, v11, 1, 0) ? 42 : 4294967295));
 v12 = stat("/etc/passwd", &v0);
 v13 = (0 < ((int)(v0.st_mode)) ? 42 : 4294967294);
 if (armg_calculate_condition(209, v12, 1, 0))
 v13 = 4294967295;
 printf(&g_402d0b, v13);
 pid = fork();
 v15 = 4294967295;
 if (!((char)armg_calculate_condition(66, pid, 0, 0)))
 {
 if ((char)armg_calculate_condition(2, pid, 0, 0))
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if ((char)armg_calculate_condition(66, waitpid(pid, &exit_status, 0), 0, 0) || ((char)exit_status & 127))
 {
 v15 = 4294967295;
 }
 else if (!((unsigned short)exit_status & 0xff00))
 {
 v15 = 42;
 }
 else
 {
 v15 = 4294967295;
 }
 }
 printf(&g_402d27, v15);
 printf(&g_402d43, param_pipe_communication());
 printf(&g_402d5f, param_socket_create());
	v19 = printf(&g_402d7b, (0 < param_shmget_shmat() ? 42 : 4294967295));
	{
		int p1=0, p2=0, p3=0, p4=0, p5=0, p6=0, p7=0, p8=0, p9=0, p10=0;
		v23 = printf(&g_402d97, param_signal_handling(v19, v20, v21, v22, (unsigned int)(intptr_t)(&exit_status), (unsigned int)(intptr_t)(&exit_status), p1, p2, p3, p4, p5, p6, p7, p8, p9, p10));
		return printf(&g_402d97, param_signal_handling(v19, v20, v21, v22, (unsigned int)(intptr_t)(&exit_status), (unsigned int)(intptr_t)(&exit_status), p1, p2, p3, p4, p5, p6, p7, p8, p9, p10));
	}
}


// Function: thread_compute at 0x401fc4
unsigned int * thread_compute(unsigned int *a0)
{
 unsigned int *ptr; // r0

 ptr = malloc(4);
 *(ptr) = *(a0) * *(a0);
 return ptr;
}


// Function: param_pthread_create at 0x401fe4
unsigned int param_pthread_create(unsigned int a0)
{
 void *thread_result; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]

	v1 = a0;
 if (!pthread_create(&v2, 0, thread_compute, (void*)&v1))
 {
 pthread_join(v2, &thread_result);
 if (thread_result)
 {
 unsigned int result = *(unsigned int*)thread_result;
 free(thread_result);
 return result;
 }
 }
 return 4294967295;
}


// Function: call_pthread_create at 0x402050
unsigned int call_pthread_create()
{
 void *thread_result; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]

	v1 = 7;
 if (!pthread_create(&v2, 0, thread_compute, (void*)&v1))
 {
 pthread_join(v2, &thread_result);
 if (thread_result)
 {
 unsigned int result = *(unsigned int*)thread_result;
 free(thread_result);
 return result;
 }
 }
 return 4294967295;
}


// Function: thread_sum at 0x4020c0
unsigned int thread_sum(unsigned int *ptr)
{
 unsigned int v0; // r1
 unsigned int v1; // r2

 ptr[2] = 0;
 v0 = *(ptr);
 v1 = ptr[1];
 if (v1 >= v0)
 ptr[2] = v0 + (v1 - v0) * (v0 + 1) + (((v1 + ~(v0)) * (v1 - v0) >> 32 & 1) * 0x80000000 | (v1 + ~(v0)) * (v1 - v0) >> 1);
 return 0;
}


// Function: param_pthread_join at 0x402110
unsigned int param_pthread_join()
{
 unsigned int count; // r0
 unsigned int v11; // r0
 unsigned int v0[3]; // [bp-0x40] - thread_sum expects array with 3 elements
 unsigned int flag2; // [bp-0x38]
 unsigned int v2; // [bp-0x34]
 unsigned int flag1; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 unsigned int result; // [bp-0x20]
 pthread_t v6;
 pthread_t v7;
 pthread_t v8;

 result = 0;
 flag1 = 0;
 flag2 = 0;
 v4 = 21;
 v2 = 11;
 v0[0] = 1;  // Initialize start value
 v0[1] = 10; // Initialize end value
 v0[2] = 0;  // Initialize sum
	if (pthread_create(&v6, 0, thread_sum, &v0))
 {
 return 4294967295;
 }
 else if (pthread_create(&v7, 0, thread_sum, &v0))
 {
 return 4294967295;
 }
 else if (pthread_create(&v8, 0, thread_sum, &v0))
 {
 return 4294967295;
 }
 else if (pthread_join(v6, 0))
 {
 return 4294967294;
 }
 else if (pthread_join(v7, 0))
 {
 return 4294967294;
 }
 else
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
}


// Function: call_pthread_join at 0x402240
unsigned int call_pthread_join()
{
 unsigned int count; // r0

 count = param_pthread_join();
 return param_pthread_join();
}


// Function: thread_increment at 0x402244
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;

unsigned int thread_increment(unsigned int *ptr)
{
 unsigned int v0; // r5
 unsigned int result; // r5
 unsigned int v2; // r5

 v0 = *(ptr);
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


// Function: param_mutex_lock at 0x40229c
extern unsigned int shared_counter;

unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r10
 unsigned int *ptr; // r0
 unsigned int *v11; // r4
 unsigned int flag1; // r5
 unsigned int *v13; // r4
 unsigned int v14; // r5
 unsigned int *v4; // r5
 unsigned int v5; // r4
 unsigned int result; // r4
 unsigned int *v7; // r5
 unsigned int *v8; // r5
 unsigned int v9; // r4
 unsigned int v10; // r5
 unsigned int v0; // [bp-0x24]

 v1 = a0;
 v0 = a1;
 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 ptr = ptr;
 shared_counter = 0;
 if (v1 >= 1)
 {
 v4 = ptr;
 v5 = v1;
 do
 {
 result = v5;
 v7 = v4;
 if (pthread_create((pthread_t*)v7, 0, thread_increment, &v0))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v8 = v7 + 4, v9 = result - 1, v4 = v7 + 4, v5 = result - 1, result != 1));
 if (v1 >= 1)
 {
 v10 = v1;
 v11 = ptr;
 do
 {
 flag1 = v10;
 v13 = v11 + 1;
 pthread_join(*(pthread_t*)v11, 0);
 v14 = flag1 - 1;
 v10 = v14;
 v11 = v13;
 } while (flag1 != 1);
 }
 }
 free(ptr);
 return (shared_counter == v0 * v1 ? 42 : 4294967293);
}


// Function: call_mutex_lock at 0x402394
unsigned int call_mutex_lock()
{
 unsigned int v0; // r0

 v0 = param_mutex_lock(4, 1000);
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x4023a0
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern char data;
extern char i;

unsigned int * consumer_thread()
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


// Function: producer_thread at 0x40240c
extern char data;
extern char ready;

unsigned int producer_thread()
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: param_condition_variable at 0x402458
extern char data;
extern char ready;

unsigned int param_condition_variable()
{
 unsigned int *v0; // [bp-0x14], Other Possible Types: char
 pthread_t v1; // [bp-0x10], Other Possible Types: unsigned int
 pthread_t v2; // [bp-0xc]

 data = 0;
 ready = 0;
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
 unsigned int result = (v0 ? *(unsigned int*)v0 : 0);
 free(v0);
 return result;
}
}


// Function: call_condition_variable at 0x402524
unsigned int call_condition_variable()
{
 unsigned int v0; // r0

 v0 = param_condition_variable();
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x402528
extern unsigned int atomic_counter;

unsigned int thread_atomic_increment(unsigned int *a0)
{
 unsigned int i; // r7
 char v0; // [bp-0x1c]

 if (*(a0) < 1)
 return 0;
 i = 0;
 do
 {
 __atomic_fetch_add_4(&atomic_counter, 1, 5);
 __atomic_compare_exchange_4(&atomic_counter, &v0, i + 1000, 5, 5, i);
 i += 1;
 } while (i != *(a0));
 return 0;
}


// Function: thread_atomic_load_store at 0x40259c
extern unsigned int atomic_counter;

unsigned int thread_atomic_load_store()
{
 __atomic_store_4(&atomic_counter, __atomic_load_4(&atomic_counter, 5) + 100, 5);
 return 0;
}


// Function: param_atomic_ops at 0x4025d4
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
 ptr = ptr;
 __atomic_store_4(&atomic_counter, 0, 5);
 if (v2 >= 1)
 {
 v5 = v2;
 v6 = ptr;
 do
 {
 v7 = v6;
 result = v5;
 if (pthread_create((pthread_t*)(v7), 0, thread_atomic_increment, &v1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v9 = v7 + 4, v10 = result - 1, v5 = result - 1, v6 = v7 + 4, result != 1));
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
 pthread_join(*((pthread_t*)v11), 0);
 v14 = flag1 - 1;
 v2 = v14;
 v11 = v13;
 } while (flag1 != 1);
 }
 v15 = __atomic_load_4(&atomic_counter, 5);
 free(ptr);
 return (0 < v15 ? 42 : 4294967293);
}


// Function: call_atomic_ops at 0x402708
unsigned int call_atomic_ops()
{
 unsigned int v0; // r0

 v0 = param_atomic_ops(4, 500);
 return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x402714
void thread_tls_test(unsigned int a0)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = v4;
 v0 = v5;
 __aeabi_read_tp(); /* do not return */
}


// Function: sub_402724 at 0x402724
unsigned int* sub_402724(char *a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v0; // r4
 unsigned int v1; // r5
 unsigned int *ptr; // r0

 v0 = *((int *)&a0[a2]);
 v1 = v0 + 50;
 *((unsigned int *)&a0[a2]) = v1;
 strncpy(a0 + 12, a1, 31);
 ptr = (unsigned int *)malloc(8);
 ptr[0] = v0;
 ptr[1] = v1;
 return ptr;
}


// Function: param_thread_local_storage at 0x40275c
unsigned int param_thread_local_storage(unsigned int a0)
{
 unsigned int v3; // r4
 unsigned int i; // r10
 unsigned int index; // r4
 char *char_ptr; // r0
 pthread_t *ptr; // Thread array
 unsigned int v18; // r5
 unsigned int *v19; // r4
 unsigned int *v20; // r4
 unsigned int *v21; // r4
 unsigned int v22; // r9
 unsigned int *thread_array; // r8
 unsigned int v23; // r4
 unsigned int **v24; // r6
 unsigned int **v25; // r6
 unsigned int result; // r10
 unsigned int *v27; // r5
 unsigned int **v28; // r6
 unsigned int v29; // r10
 unsigned int k; // r5
 unsigned int **p; // r11
 unsigned int v7; // cc_dep1
 unsigned int v8; // cc_dep2
 unsigned int v9; // cc_ndep
 unsigned int v10; // cc_dep1
 unsigned int v11; // cc_dep2
 unsigned int v12; // cc_ndep
 unsigned int v0; // [bp-0x30]
 unsigned int *v1; // [bp-0x2c]
 unsigned long work_ptr; // [bp-0x28]

 v3 = a0 * 4;
 i = a0;
 char_ptr = malloc(v3);
 p = malloc(v3);
 ptr = malloc(a0 * sizeof(pthread_t));
 if (!ptr || !char_ptr || !p)
 {
 if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, v7, v8, v9) ? p : v7), (armg_calculate_condition(18, v7, v8, v9) ? 0 : v8), (armg_calculate_condition(18, v7, v8, v9) ? 0 : v9))))
 return 4294967295;
 }
 else
 {
 return 4294967295;
 }
 if (i >= 1)
 {
 index = 0;
 do
 {
 char *name_ptr = malloc(16);
 p[index] = (char*)ptr;
 snprintf((char*)name_ptr, 16, "Thread-%d", index);
 p[index] = name_ptr;
 index += 1;
 } while (i != index);
 if (i < 1)
 goto LABEL_402874;
 v18 = 0;
 v19 = (pthread_t*)ptr;
 do
 {
 v20 = v19;
 if (pthread_create((pthread_t*)v20, 0, thread_tls_test, p[v18]))
 {
 k = 0;
 do
 {
 free(p[k]);
 k += 1;
 } while (v18 + 1 != k);
 free(p);
 free(ptr);
 return 4294967294;
 }
 } while ((v18 += 1, v21 = v20 + 1, v19 = v20 + 1, i != v18));
 v1 = (unsigned int*)ptr;
 v0 = i;
 if (i < 1)
 goto LABEL_40287c;
 v22 = 0;
 v23 = 0;
 v24 = p;
 do
 {
 v25 = v24;
 result = i;
 v27 = (unsigned int*)ptr + 1;
 pthread_join(((pthread_t*)ptr)[v22], NULL);
 free(p[v22]);
 v28 = v25 + 1;
 v29 = result - 1;
 i = v29;
 v24 = v28;
 ptr = v27;
 } while (result != 1);
 }
 else
 {
LABEL_402874:
 v0 = i;
 v1 = ptr;
LABEL_40287c:
 v23 = 0;
 v22 = 0;
 }
 free(p);
 free(v1);
 return (!(v23 ^ v0 * 100) && !(v22 ^ v0 * 150) ? 4294967293 : 42);
}


// Function: call_thread_local_storage at 0x40290c
unsigned int call_thread_local_storage()
{
 unsigned int count; // r0

 count = param_thread_local_storage(4);
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x402914
extern char g_402dbd;
extern char g_402dd9;
extern char g_402df6;
extern char g_402e12;
extern char g_402e2e;
extern char g_402e4a;
extern char g_402ea5;

int test_thread_concurrency()
{
 unsigned int v3; // r4
 unsigned int v8; // r0
 void *thread_result; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 pthread_t v2;

 puts(&g_402ea5);
 v1 = 7;
 v3 = 4294967295;
 if (!pthread_create(&v2, 0, thread_compute, (void*)&v1))
 {
 pthread_join(v2, &thread_result);
 if (thread_result)
 {
 v3 = *(unsigned int*)thread_result;
 free(thread_result);
 }
 }
 printf(&g_402dbd, v3);
 printf(&g_402dd9, param_pthread_join());
 printf(&g_402df6, param_mutex_lock(4, 1000));
 printf(&g_402e12, param_condition_variable());
 printf(&g_402e2e, param_atomic_ops(4, 500));
 v8 = printf(&g_402e4a, param_thread_local_storage(4));
 return printf(&g_402e4a, param_thread_local_storage(4));
}


// Function: main at 0x402a20
unsigned int main()
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function __aeabi_read_tp removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */


