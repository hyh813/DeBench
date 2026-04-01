// Decompiled by BinaryAI
// SHA256: 63eb214e5b4259d1ed8844a73714d37d79ccce4f15faa411fe9750b5272d57b1

/* Type definitions */
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned long long ulonglong;
#define true 1

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <sys/socket.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <sys/types.h>

/* Function stubs for undefined functions */
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern int __do_global_ctors_aux(void);
extern void __stack_chk_fail(void);

/* Main function forward declaration */
extern unsigned int main(void);

extern int __do_global_ctors_aux(void);

/* Stack placeholder for _start function */
extern void *stack0x00000004;

/* Wrapper function declarations based on actual usage */
extern int FUN_000113f0(unsigned int param);
extern int FUN_00011400(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
extern int FUN_00011410(pthread_mutex_t *mutex);
extern unsigned int FUN_00011420(unsigned int seconds);
extern void *FUN_00011430(const char *haystack, const char *needle);
extern int FUN_00011440(const char *s1, const char *s2);
extern int FUN_00011450(int (*func)(int, char**, char**, char**, int, char*), int p2, void *p3, int p4, int p5, int p6, void *p7);
extern ssize_t FUN_00011460(int fd, const void *buf, size_t count);
extern int FUN_00011470(const char *format, ...);
extern void FUN_00011480(void);
extern void FUN_00011490(void *ptr);
extern void *FUN_000114a0(void *dest, const void *src, size_t n);
extern void *FUN_000114b0(int shmid, const void *shmaddr, int shmflg);
extern void FUN_000114c0(void *ptr);
extern int FUN_000114d0(pthread_cond_t *cond, pthread_mutex_t *mutex);
extern void (*FUN_000114e0(int sig, void (*func)(int)))(int);
extern int FUN_000114f0(const void *s1, const void *s2, size_t n);
extern void FUN_00011500(int value);
extern int FUN_00011510(unsigned int usec);
extern void FUN_00011520(void);
extern void FUN_00011530(FILE *stream);
extern int FUN_00011540(int fd);
extern int FUN_00011550(int domain);
extern void *FUN_00011560(int shmid, const void *shmaddr, int shmflg);
extern int FUN_00011570(pthread_mutex_t *mutex);
extern void FUN_00011580(const char *pathname);
extern size_t FUN_00011590(const void *ptr, size_t size, size_t nmemb, FILE *stream);
extern int FUN_000115a0(unsigned int usec);
extern int FUN_000115b0(unsigned int usec);
extern size_t FUN_000115c0(void *ptr, size_t size, size_t nmemb, FILE *stream);
extern void *FUN_000115d0(void *dest, const void *src);
extern int FUN_000115e0(int shmid, const void *shmaddr, int shmflg);
extern int FUN_000115f0(pthread_cond_t *cond);
extern void *FUN_00011600(size_t size);
extern int FUN_00011610(const char *str);
extern void FUN_00011620(const char *filename, char *dest);
extern int FUN_00011630(const char *pathname, int key, int shmflg);
extern void *FUN_00011640(const char *s, int c);
extern size_t FUN_00011650(const char *s);
extern ssize_t FUN_00011660(int fd, const void *buf, size_t count);
extern int FUN_00011670(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
extern int FUN_00011680(const char *format, ...);
extern FILE *FUN_00011690(const char *pathname, const char *mode);
extern void *FUN_000116a0(void *s, int c, size_t n);
extern int FUN_000116b0(void *str, size_t size, const char *format, ...);
extern int FUN_000116c0(const char *s1, const char *s2);
extern void *FUN_000116d0(void *dest, const void *src, size_t n, void *p4);
extern void FUN_000116e0(long number, const char *pathname, int mode, int value);
extern void FUN_000116f0(void);
extern int FUN_00011700(void);
extern pid_t FUN_00011710(void);
extern void FUN_00011720(const void *shmaddr);
extern int FUN_00011730(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
extern pid_t FUN_00011740(void);
extern int FUN_00011750(int sockfd, int backlog);
extern int FUN_00011760(const char *pathname, int key);
extern int FUN_00011770(int domain, int type, int protocol, void *p4);
extern int FUN_00011780(pthread_t thread, void **retval);
extern int FUN_00011790(pthread_t thread);
extern int FUN_000117a0(int fd);



/* Signal functions */
extern void (*signal(int sig, void (*func)(int)))(int);
extern unsigned int sleep(unsigned int seconds);
extern int kill(pid_t pid, int sig);

/* I/O functions */
extern int printf(const char *format, ...);
extern int fprintf(FILE *stream, const char *format, ...);
extern int scanf(const char *format, ...);
extern int sscanf(const char *str, const char *format, ...);
extern size_t strlen(const char *s);
extern char *strcpy(char *dest, const char *src);
extern int strcmp(const char *s1, const char *s2);
extern void *memcpy(void *dest, const void *src, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern void *memset(void *s, int c, size_t n);
extern char *strchr(const char *s, int c);
extern char *strstr(const char *haystack, const char *needle);
extern FILE *fopen(const char *pathname, const char *mode);
extern int fclose(FILE *stream);
extern size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
extern size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);

/* Memory functions */
extern void *malloc(size_t size);
extern void free(void *ptr);

/* System functions */
extern pid_t fork(void);
extern int execve(const char *filename, char *const argv[], char *const envp[]);
extern pid_t waitpid(pid_t pid, int *status, int options);
extern int pipe(int pipefd[2]);
extern int close(int fd);
extern ssize_t read(int fd, void *buf, size_t count);
extern ssize_t write(int fd, const void *buf, size_t count);
extern pid_t getpid(void);
extern void _exit(int status);
extern int socket(int domain, int type, int protocol);
extern int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
extern int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
extern int listen(int sockfd, int backlog);
extern int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen);
extern int shmget(key_t key, size_t size, int shmflg);
extern void *shmat(int shmid, const void *shmaddr, int shmflg);
extern int shmdt(const void *shmaddr);
extern int shmctl(int shmid, int cmd, struct shmid_ds *buf);

/* Pthread functions */
extern int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
extern int pthread_join(pthread_t thread, void **retval);
extern int pthread_detach(pthread_t thread);
extern int pthread_mutex_lock(pthread_mutex_t *mutex);
extern int pthread_mutex_unlock(pthread_mutex_t *mutex);
extern int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
extern int pthread_cond_signal(pthread_cond_t *cond);
extern int puts(const char *s);
extern int vprintf(const char *format, va_list ap);
extern int vsscanf(const char *str, const char *format, va_list ap);
extern int usleep(unsigned int usec);
extern int vsnprintf(char *str, size_t size, const char *format, va_list ap);
extern int strcasecmp(const char *s1, const char *s2);
extern char *strcat(char *dest, const char *src);
extern char *strncpy(char *dest, const char *src, size_t n);
extern int unlink(const char *pathname);
extern int fflush(FILE *stream);
extern key_t ftok(const char *pathname, int proj_id);

/* Misc functions */
extern int snprintf(char *str, size_t size, const char *format, ...);
extern unsigned long int strtoul(const char *nptr, char **endptr, int base);

/* Global variables */
void *counter_mutex;
void *cond;
void *cond_mutex;
int data;
int ready;
int shared_counter;
int signal_received;
int signal_number;
int atomic_counter;

#define LOCK() /* Lock operation placeholder */
#define UNLOCK() /* Unlock operation placeholder */

/* Data references */
unsigned int DAT_00014011;
unsigned int DAT_00014015;
unsigned int DAT_00014019;
unsigned int DAT_0001401d;
unsigned int DAT_00014021;
unsigned int DAT_00014047;
unsigned int DAT_0001405a;
unsigned int DAT_0001407b;
unsigned int DAT_000140b0;
unsigned int DAT_000140d4;
unsigned int DAT_000140ef;
unsigned int DAT_0001410a;
unsigned int DAT_00014126;
unsigned int DAT_00014142;
unsigned int DAT_0001415e;
unsigned int DAT_0001417a;
unsigned int DAT_00014197;
unsigned int DAT_000141b3;
unsigned int DAT_000141cf;
unsigned int DAT_000141eb;
unsigned int DAT_00014206;
unsigned int DAT_00014248;
unsigned int DAT_00014263;
unsigned int DAT_0001427f;
unsigned int DAT_0001429b;
unsigned int DAT_000142b7;
unsigned int DAT_000142d3;
unsigned int DAT_000142ef;
unsigned int DAT_0001430b;
unsigned int DAT_00014331;
unsigned int DAT_0001434f;
unsigned int DAT_0001436b;
unsigned int DAT_00014388;
unsigned int DAT_000143a4;
unsigned int DAT_000143c0;
unsigned int DAT_000143dc;



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_000113f0 @ 0x113f0
int FUN_000113f0(unsigned int param)
{
 int unaff_EBX;
 (void)param;
 (*(void (*)(void))(void *)(*(void **)(unaff_EBX + 0xfc)))();
 return 0;
}

// Function: FUN_00011400 @ 0x11400
int FUN_00011400(int sockfd, int level, int optname, const void *optval, socklen_t optlen)
{
 return setsockopt(sockfd, level, optname, optval, optlen);
}

// Function: FUN_00011410 @ 0x11410
int FUN_00011410(pthread_mutex_t *mutex)
{
 return pthread_mutex_unlock(mutex);
}

// Function: FUN_00011420 @ 0x11420
unsigned int FUN_00011420(unsigned int seconds)
{
 return sleep(seconds);
}

// Function: FUN_00011430 @ 0x11430
void *FUN_00011430(const char *haystack, const char *needle)
{
 return strstr(haystack, needle);
}

// Function: FUN_00011440 @ 0x11440
int FUN_00011440(const char *s1, const char *s2)
{
 return strcmp(s1, s2);
}

// Function: FUN_00011450 @ 0x11450
int FUN_00011450(int (*func)(int, char**, char**, char**, int, char*), int p2, void *p3, int p4, int p5, int p6, void *p7)
{
 (void)func; (void)p2; (void)p3; (void)p4; (void)p5; (void)p6; (void)p7;
 return 0;
}

// Function: FUN_00011460 @ 0x11460
ssize_t FUN_00011460(int fd, const void *buf, size_t count)
{
 return write(fd, buf, count);
}

// Function: FUN_00011470 @ 0x11470
int FUN_00011470(const char *format, ...)
{
 va_list args;
 va_start(args, format);
 vprintf(format, args);
 va_end(args);
 return 0;
}

// Function: FUN_00011480 @ 0x11480
void FUN_00011480(void)
{
 _exit(0);
}

// Function: FUN_00011490 @ 0x11490
void FUN_00011490(void *ptr)
{
 free(ptr);
}

// Function: FUN_000114a0 @ 0x114a0
void *FUN_000114a0(void *dest, const void *src, size_t n)
{
 return memcpy(dest, src, n);
}

// Function: FUN_000114b0 @ 0x114b0
void *FUN_000114b0(int shmid, const void *shmaddr, int shmflg)
{
 return shmat(shmid, shmaddr, shmflg);
}

// Function: FUN_000114c0 @ 0x114c0
void FUN_000114c0(void *ptr)
{
 fclose((FILE *)ptr);
}

// Function: FUN_000114d0 @ 0x114d0
int FUN_000114d0(pthread_cond_t *cond, pthread_mutex_t *mutex)
{
 return pthread_cond_wait(cond, mutex);
}

// Function: FUN_000114e0 @ 0x114e0
void (*FUN_000114e0(int sig, void (*func)(int)))(int)
{
 return signal(sig, func);
}

// Function: FUN_000114f0 @ 0x114f0
int FUN_000114f0(const void *s1, const void *s2, size_t n)
{
 return memcmp(s1, s2, n);
}

// Function: FUN_00011500 @ 0x11500
void FUN_00011500(int value)
{
 kill(getpid(), value);
}

// Function: FUN_00011510 @ 0x11510
int FUN_00011510(unsigned int usec)
{
 return usleep(usec);
}

// Function: FUN_00011520 @ 0x11520
void FUN_00011520(void)
{
 _exit(1);
}

// Function: FUN_00011530 @ 0x11530
void FUN_00011530(FILE *stream)
{
 fflush(stream);
}

// Function: FUN_00011540 @ 0x11540
int FUN_00011540(int fd)
{
 return close(fd);
}

// Function: FUN_00011550 @ 0x11550
int FUN_00011550(int domain)
{
 unsigned short val = domain;
 return (int)val;
}

// Function: FUN_00011560 @ 0x11560
void *FUN_00011560(int shmid, const void *shmaddr, int shmflg)
{
 return shmat(shmid, shmaddr, shmflg);
}

// Function: FUN_00011570 @ 0x11570
int FUN_00011570(pthread_mutex_t *mutex)
{
 return pthread_mutex_lock(mutex);
}

// Function: FUN_00011580 @ 0x11580
void FUN_00011580(const char *pathname)
{
 unlink(pathname);
}

// Function: FUN_00011590 @ 0x11590
size_t FUN_00011590(const void *ptr, size_t size, size_t nmemb, FILE *stream)
{
 return fwrite(ptr, size, nmemb, stream);
}

// Function: FUN_000115a0 @ 0x115a0
int FUN_000115a0(unsigned int usec)
{
 return usleep(usec);
}

// Function: FUN_000115b0 @ 0x115b0
int FUN_000115b0(unsigned int usec)
{
 return usleep(usec);
}

// Function: FUN_000115c0 @ 0x115c0
size_t FUN_000115c0(void *ptr, size_t size, size_t nmemb, FILE *stream)
{
 return fread(ptr, size, nmemb, stream);
}

// Function: FUN_000115d0 @ 0x115d0
void *FUN_000115d0(void *dest, const void *src)
{
 return strcpy((char *)dest, (const char *)src);
}

// Function: FUN_000115e0 @ 0x115e0
int FUN_000115e0(int shmid, const void *shmaddr, int shmflg)
{
 return shmctl(shmid, shmflg, NULL);
}

// Function: FUN_000115f0 @ 0x115f0
int FUN_000115f0(pthread_cond_t *cond)
{
 return pthread_cond_signal(cond);
}

// Function: FUN_00011600 @ 0x11600
void *FUN_00011600(size_t size)
{
 return malloc(size);
}

// Function: FUN_00011610 @ 0x11610
int FUN_00011610(const char *str)
{
 return puts(str);
}

// Function: FUN_00011620 @ 0x11620
void FUN_00011620(const char *filename, char *dest)
{
 strncpy(dest, filename, 43);
}

// Function: FUN_00011630 @ 0x11630
int FUN_00011630(const char *pathname, int key, int shmflg)
{
 return shmget(key, 0, shmflg);
}

// Function: FUN_00011640 @ 0x11640
void *FUN_00011640(const char *s, int c)
{
 return strchr(s, c);
}

// Function: FUN_00011650 @ 0x11650
size_t FUN_00011650(const char *s)
{
 return strlen(s);
}

// Function: FUN_00011660 @ 0x11660
ssize_t FUN_00011660(int fd, const void *buf, size_t count)
{
 return read(fd, (void *)buf, count);
}

// Function: FUN_00011670 @ 0x11670
int FUN_00011670(int sockfd, const struct sockaddr *addr, socklen_t addrlen)
{
 return bind(sockfd, addr, addrlen);
}

// Function: FUN_00011680 @ 0x11680
int FUN_00011680(const char *format, ...)
{
 va_list args;
 int ret;
 va_start(args, format);
 ret = vsscanf("", format, args);
 va_end(args);
 return ret;
}

// Function: FUN_00011690 @ 0x11690
FILE *FUN_00011690(const char *pathname, const char *mode)
{
 return fopen(pathname, mode);
}

// Function: FUN_000116a0 @ 0x116a0
void *FUN_000116a0(void *s, int c, size_t n)
{
 return memset(s, c, n);
}

// Function: FUN_000116b0 @ 0x116b0
int FUN_000116b0(void *str, size_t size, const char *format, ...)
{
 va_list args;
 int ret;
 va_start(args, format);
 ret = vsnprintf((char *)str, size, format, args);
 va_end(args);
 return ret;
}

// Function: FUN_000116c0 @ 0x116c0
int FUN_000116c0(const char *s1, const char *s2)
{
 return strcasecmp(s1, s2);
}

// Function: FUN_000116d0 @ 0x116d0
void *FUN_000116d0(void *dest, const void *src, size_t n, void *p4)
{
 (void)p4;
 return strcat((char *)dest, (const char *)src);
}

// Function: FUN_000116e0 @ 0x116e0
void FUN_000116e0(long number, const char *pathname, int mode, int value)
{
 (void)number; (void)pathname; (void)mode; (void)value;
}

// Function: FUN_000116f0 @ 0x116f0
void FUN_000116f0(void)
{
 int unaff_EBX;
 (*(void (*)(void))(void *)(*(void **)(unaff_EBX + 200)))();
 return;
}

// Function: FUN_00011700 @ 0x11700
int FUN_00011700(void)
{
 return 0;
}

// Function: FUN_00011710 @ 0x11710
pid_t FUN_00011710(void)
{
 int pipefd[2];
 return pipe(pipefd);
}

// Function: FUN_00011720 @ 0x11720
void FUN_00011720(const void *shmaddr)
{
 shmdt(shmaddr);
}

// Function: FUN_00011730 @ 0x11730
int FUN_00011730(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
 (void)thread; (void)attr; (void)start_routine; (void)arg;
 return 0;
}

// Function: FUN_00011740 @ 0x11740
pid_t FUN_00011740(void)
{
 return fork();
}

// Function: FUN_00011750 @ 0x11750
int FUN_00011750(int sockfd, int backlog)
{
 return listen(sockfd, backlog);
}

// Function: FUN_00011760 @ 0x11760
int FUN_00011760(const char *pathname, int key)
{
 (void)pathname;
 return shmget(key, 0, 0);
}

// Function: FUN_00011770 @ 0x11770
int FUN_00011770(int domain, int type, int protocol, void *p4)
{
 (void)p4;
 return socket(domain, type, protocol);
}

// Function: FUN_00011780 @ 0x11780
int FUN_00011780(pthread_t thread, void **retval)
{
 (void)thread; (void)retval;
 return 0;
}

// Function: FUN_00011790 @ 0x11790
int FUN_00011790(pthread_t thread)
{
 (void)thread;
 return 0;
}

// Function: FUN_000117a0 @ 0x117a0
int FUN_000117a0(int fd)
{
 return close(fd);
}



// Function: __i686.get_pc_thunk.bx @ 0x117dc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x117e0
void __x86_get_pc_thunk_bx(void)
{
 return;
}





// Function: __do_global_dtors_aux @ 0x11880
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x5793) == '\0') {
 if (*(int *)(unaff_EDI + 0x5763) != 0) {
 FUN_000113f0(*(unsigned int *)(unaff_EDI + 0x5777));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x5797);
 while (uVar1 < ((unaff_EDI + 0x558b) - (unaff_EDI + 0x5587) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x5797) = uVar1 + 1;
 (*(void (*)(void))(*(void **)(unaff_EDI + 0x5587 + (uVar1 + 1) * 4)))();
 uVar1 = *(uint *)(unaff_EDI + 0x5797);
 }
 *(char *)(unaff_EDI + 0x5793) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11919
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1191d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: param_strcpy @ 0x11921
void param_strcpy(unsigned int param_1,unsigned int param_2)
{
 FUN_000115d0(param_1,param_2);
 FUN_00011650(param_1);
 return;
}

// Function: call_strcpy @ 0x1195b
unsigned int call_strcpy(void)
{
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 param_strcpy(local_30,"HelloLib");
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return 0;
}

// Function: param_strcmp @ 0x119aa
unsigned int param_strcmp(unsigned int param_1,unsigned int param_2)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_00011440(param_1,param_2);
 if (iVar1 < 1) {
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0;
 }
 }
 else {
 uVar2 = 1;
 }
 return uVar2;
}

// Function: call_strcmp @ 0x119f9
int call_strcmp(void)
{
 param_strcmp(&DAT_00014015,&DAT_00014011);
 param_strcmp(&DAT_00014019,&DAT_00014019);
 param_strcmp(&DAT_00014021,&DAT_0001401d);
 return 0;
}

// Function: param_strlen @ 0x11a75
unsigned int param_strlen(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = FUN_00011650(param_1);
 return uVar1;
}

// Function: call_strlen @ 0x11aa5
unsigned int call_strlen(void)
{
 return param_strlen("BinBench2025");
}

// Function: param_memcpy @ 0x11ad2
unsigned int param_memcpy(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)
{
 (void)param_4;
 FUN_000114a0(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x11b05
int call_memcpy(void)
{
 int in_GS_OFFSET;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 int local_24;
 unsigned int local_20;
 int local_1c;
 unsigned int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_38 = 10;
 local_34 = 0x14;
 local_30 = 0x1e;
 local_2c = 0x28;
 local_28 = 0x32;
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 param_memcpy(&local_24,&local_38,0x14,0x11b14);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return local_14 + local_24 + local_1c;
}

// Function: param_memcmp @ 0x11b9f
unsigned int param_memcmp(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)
{
 int iVar1;
 unsigned int uVar2;
 (void)param_4;
 iVar1 = FUN_000114f0(param_1,param_2,param_3);
 if (iVar1 < 1) {
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0;
 }
 }
 else {
 uVar2 = 1;
 }
 return uVar2;
}

// Function: call_memcmp @ 0x11bf1
int call_memcmp(void)
{
 int in_GS_OFFSET;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_34 = 1;
 local_30 = 2;
 local_2c = 3;
 local_28 = 1;
 local_24 = 2;
 local_20 = 4;
 local_1c = 1;
 local_18 = 2;
 local_14 = 3;
 param_memcmp(&local_34,&local_28,0xc,0x11c00);
 param_memcmp(&local_34,&local_1c,0xc,0x11c0b);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return 0;
}

// Function: param_printf @ 0x11c9a
unsigned int param_printf(unsigned int param_1,unsigned int param_2)
{
 unsigned int uVar1;
 uVar1 = FUN_00011470("Value: %d, Name: %s\n",param_1,param_2);
 return uVar1;
}

// Function: call_printf @ 0x11cd4
unsigned int call_printf(void)
{
 return param_printf(0x2a,&DAT_00014047);
}

// Function: param_scanf @ 0x11d04
int param_scanf(unsigned int param_1)
{
 int in_GS_OFFSET;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = FUN_00011680(param_1,"%d,%d",&local_1c,&local_18);
 if (local_14 == 2) {
 local_18 = local_18 + local_1c;
 }
 else {
 local_18 = -1;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 local_18 = __stack_chk_fail_local();
 }
 return local_18;
}

// Function: call_scanf @ 0x11d75
unsigned int call_scanf(void)
{
 return param_scanf("123,456");
}

// Function: param_fopen_fclose @ 0x11d9d
unsigned int param_fopen_fclose(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_00011690(param_1,&DAT_0001405a);
 if (iVar1 == 0) {
 uVar2 = 0xffffffff;
 }
 else {
 FUN_000116f0();
 uVar2 = 0x2a;
 FUN_000114c0(iVar1);
 }
 return uVar2;
}

// Function: call_fopen_fclose @ 0x11dff
unsigned int call_fopen_fclose(void)
{
 unsigned int iVar1;
 iVar1 = param_fopen_fclose("/etc/passwd");
 if (iVar1 < 0) {
 return 0xffffffff;
 }
 else {
 return 0x2a;
 }
}

// Function: param_fread_fwrite @ 0x11e3c
unsigned int param_fread_fwrite(unsigned int param_1)
{
 int iVar1;
 int iVar3;
 int iVar4;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011690(param_1,&DAT_0001407b);
 if (iVar1 == 0) {
 return 0xffffffff;
 }
 else {
 iVar3 = FUN_00011590("BinBench Test Data",1,FUN_00011650("BinBench Test Data"),iVar1);
 iVar4 = FUN_00011650("BinBench Test Data");
 if (iVar3 == iVar4) {
 FUN_00011530(iVar1);
 iVar4 = FUN_000115c0(local_30,1,iVar3,iVar1);
 local_30[iVar4] = 0;
 FUN_000114c0(iVar1);
 FUN_00011580(param_1);
 if (iVar4 == iVar3) {
 iVar1 = FUN_00011440(local_30,"BinBench Test Data");
 if (iVar1 == 0) {
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return 0x2a;
 }
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return 0xfffffffd;
 }
 else {
 FUN_000114c0(iVar1);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return 0xfffffffe;
 }
 }
}

// Function: call_fread_fwrite @ 0x11f6a
unsigned int call_fread_fwrite(void)
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}

// Function: param_malloc_free @ 0x11f92
int param_malloc_free(unsigned int param_1)
{
 int *piVar1;
 int iVar2;
 uint local_18;
 piVar1 = (int *)FUN_00011600(param_1 << 2);
 if (piVar1 == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 piVar1[local_18] = local_18 * 10;
 }
 iVar2 = piVar1[param_1 + 0x3fffffff] + *piVar1;
 FUN_00011490(piVar1);
 }
 return iVar2;
}

// Function: call_malloc_free @ 0x1203b
int call_malloc_free(void)
{
 return param_malloc_free(10);
}

// Function: param_memset @ 0x1205e
int param_memset(int param_1,unsigned int param_2)
{
 int local_18;
 uint local_14;
 FUN_000116a0(param_1,0,param_2);
 local_18 = 0;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_18 = local_18 + (uint)*(byte *)(local_14 + param_1);
 }
 return local_18;
}

// Function: call_memset @ 0x120c3
int call_memset(void)
{
 int in_GS_OFFSET;
 int local_3c;
 int local_38 [10];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
 local_38[local_3c] = 0xff;
 }
 param_memset(local_38,0x28);
 local_38[9] = local_38[9] + local_38[0];
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return local_38[9];
}

// Function: param_strchr_strstr @ 0x1212c
int param_strchr_strstr(int param_1,char param_2,unsigned int param_3)
{
 int iVar1;
 int iVar2;
 FUN_00011640(param_1,(int)param_2);
 FUN_00011430(param_1,param_3);
 return 0;
}

// Function: call_strchr_strstr @ 0x121ab
unsigned int call_strchr_strstr(void)
{
 return param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
}

// Function: test_standard_library_functions @ 0x121e7
void test_standard_library_functions(void)
{
 unsigned int uVar1;
 FUN_00011610(&DAT_000140b0);
 uVar1 = call_strcpy();
 FUN_00011470(&DAT_000140d4);
 uVar1 = call_strcmp();
 FUN_00011470(&DAT_000140ef);
 uVar1 = call_strlen();
 FUN_00011470(&DAT_0001410a);
 uVar1 = call_memcpy();
 FUN_00011470(&DAT_00014126);
 uVar1 = call_memcmp();
 FUN_00011470(&DAT_00014142);
 uVar1 = call_printf();
 FUN_00011470(&DAT_0001415e);
 uVar1 = call_scanf();
 FUN_00011470(&DAT_0001417a);
 uVar1 = call_fopen_fclose();
 FUN_00011470(&DAT_00014197);
 uVar1 = call_fread_fwrite();
 FUN_00011470(&DAT_000141b3);
 uVar1 = call_malloc_free();
 FUN_00011470(&DAT_000141cf);
 uVar1 = call_memset();
 FUN_00011470(&DAT_000141eb);
 uVar1 = call_strchr_strstr();
 FUN_00011470(&DAT_00014206);
 return;
}

// Function: param_linux_syscall @ 0x12335
int param_linux_syscall(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 uVar4 = 0x12345;
 uVar3 = 0;
 FUN_000116e0(5,param_1,0,0x12345);
 FUN_000116e0(6,0,uVar3,uVar4);
 return 0;
}

// Function: call_linux_syscall @ 0x12389
unsigned int call_linux_syscall(void)
{
 int iVar1;
 iVar1 = param_linux_syscall("/etc/passwd");
 if (iVar1 < 0) {
 return 0xffffffff;
 }
 else {
 return 0x2a;
 }
}

// Function: param_win32_api @ 0x123c6
unsigned int param_win32_api(unsigned int param_1)
{
 int iVar1;
 int in_GS_OFFSET;
 char local_68 [44];
 int local_3c;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_00011620(param_1,local_68);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return 0;
}

// Function: call_win32_api @ 0x12435
unsigned int call_win32_api(void)
{
 return param_win32_api("/etc/passwd");
}

// Function: param_fork_exec @ 0x1245d
uint param_fork_exec(unsigned int param_1,unsigned int param_2)
{
 uint uVar1;
 unsigned int *puVar2;
 int in_GS_OFFSET;
 unsigned int uStack_3c;
 unsigned int uStack_38;
 unsigned int uStack_34;
 unsigned int uStack_30;
 char auStack_2c [8];
 unsigned int local_24;
 unsigned int local_20;
 uint local_1c;
 int local_18;
 int local_14;
 int local_10;
 puVar2 = (unsigned int *)auStack_2c;
 local_20 = param_1;
 local_24 = param_2;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 uStack_30 = 0x1248f;
 local_18 = FUN_00011740();
 if (local_18 < 0) {
 uVar1 = 0xffffffff;
 }
 else {
 puVar2 = (unsigned int *)auStack_2c;
 if (local_18 == 0) {
 uStack_30 = 0;
 uStack_34 = local_24;
 uStack_38 = local_20;
 puVar2 = &uStack_3c;
 uStack_3c = local_20;
 FUN_00011700();
 uStack_3c = 0x7f;
 FUN_00011480();
 }
 *(unsigned int *)((int)puVar2 + -8) = 0;
 *(uint **)((int)puVar2 + -0xc) = &local_1c;
 *(int *)((int)puVar2 + -0x10) = local_18;
 *(unsigned int *)((int)puVar2 + -0x14) = 0x124d3;
 local_14 = FUN_000115a0(10000);
 if (local_14 < 0) {
 uVar1 = 0xfffffffe;
 }
 else if ((local_1c & 0x7f) == 0) {
 uVar1 = (int)local_1c >> 8 & 0xff;
 }
 else {
 uVar1 = 0xfffffffd;
 }
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 *(unsigned int *)((int)puVar2 + -4) = 0x12511;
 uVar1 = __stack_chk_fail_local();
 }
 return uVar1;
}

// Function: call_fork_exec @ 0x12516
unsigned int call_fork_exec(void)
{
 uint iVar1;
 iVar1 = param_fork_exec("/bin/true",0);
 if (iVar1 == 0) {
 return 0x2a;
 }
 else {
 return 0xffffffff;
 }
}

// Function: param_pipe_communication @ 0x12555
unsigned int param_pipe_communication(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int ***pppuVar3;
 int in_GS_OFFSET;
 unsigned int **ppuStack_5c;
 char *pcStack_58;
 unsigned int uStack_54;
 unsigned int uStack_50;
 char auStack_4c [8];
 int local_44;
 int local_40;
 char *local_3c;
 unsigned int **local_38;
 unsigned int **local_34;
 char local_30 [32];
 int local_10;
 pppuVar3 = (unsigned int ***)auStack_4c;
 uStack_50 = 0x12565;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ppuStack_5c = &local_38;
 iVar1 = FUN_00011710();
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 pppuVar3 = (unsigned int ***)auStack_4c;
 }
 else {
 uStack_50 = 0x12598;
 local_44 = FUN_00011740();
 if (local_44 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 pppuVar3 = (unsigned int ***)auStack_4c;
 if (local_44 == 0) {
 pppuVar3 = &ppuStack_5c;
 ppuStack_5c = local_38;
 FUN_000117a0(-1);
 ppuStack_5c = (unsigned int **)0x1422c;
 local_3c = (char *)ppuStack_5c;
 uStack_54 = FUN_00011650("");
 pcStack_58 = local_3c;
 ppuStack_5c = local_34;
 FUN_00011660(-1, (void *)"", 1);
 ppuStack_5c = local_34;
 FUN_000117a0(-1);
 ppuStack_5c = (unsigned int **)0x0;
 FUN_00011480();
 }
 *(unsigned int ***)((int)pppuVar3 + -0x10) = local_34;
 *(unsigned int *)((int)pppuVar3 + -0x14) = 0x1260f;
 FUN_000117a0(-1);
 *(unsigned int *)((int)pppuVar3 + -8) = 0x1f;
 *(char **)((int)pppuVar3 + -0xc) = local_30;
 *(unsigned int ***)((int)pppuVar3 + -0x10) = local_38;
 *(unsigned int *)((int)pppuVar3 + -0x14) = 0x12624;
 local_40 = FUN_00011460(-1, "", 1);
 local_30[local_40] = 0;
 *(unsigned int ***)((int)pppuVar3 + -0x10) = local_38;
 *(unsigned int *)((int)pppuVar3 + -0x14) = 0x12641;
 FUN_000117a0(-1);
 *(unsigned int *)((int)pppuVar3 + -0x10) = 0;
 *(unsigned int *)((int)pppuVar3 + -0x14) = 0x1264e;
 FUN_00011540(-1);
 if (local_40 < 1) {
 uVar2 = 0xfffffffd;
 }
 else {
 uVar2 = 0x2a;
 }
 }
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 *(unsigned int *)((int)pppuVar3 + -4) = 0x12674;
 uVar2 = __stack_chk_fail_local();
 }
 return uVar2;
}

// Function: call_pipe_communication @ 0x12679
unsigned int call_pipe_communication(void)
{
 return param_pipe_communication();
}

// Function: param_socket_create @ 0x12694
unsigned int param_socket_create(void)
{
 int iVar2;
 int in_GS_OFFSET;
 unsigned int local_28;
 int local_24;
 unsigned short local_20;
 unsigned short local_1e;
 unsigned int local_1c;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_24 = FUN_00011770(2,1,0,0x126a4);
 if (local_24 < 0) {
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return 0xffffffff;
 }
 else {
 local_28 = 1;
 iVar2 = FUN_00011400(local_24,1,2,&local_28,4);
 if (iVar2 < 0) {
 FUN_000117a0(local_24);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return 0xfffffffe;
 }
 else {
 FUN_000116a0(&local_20,0,0x10);
 local_20 = 2;
 local_1e = FUN_00011550(0);
 local_1c = 0;
 iVar2 = FUN_00011670(local_24,&local_20,0x10);
 if (iVar2 < 0) {
 FUN_000117a0(local_24);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return 0xfffffffd;
 }
 else {
 iVar2 = FUN_00011750(local_24,5);
 if (iVar2 < 0) {
 FUN_000117a0(local_24);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return 0xfffffffc;
 }
 else {
 FUN_000117a0(local_24);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return 0x2a;
 }
 }
 }
 }
}

// Function: call_socket_create @ 0x127c4
unsigned int call_socket_create(void)
{
 return param_socket_create();
}

// Function: param_shmget_shmat @ 0x127df
unsigned int param_shmget_shmat(void)
{
 int iVar1;
 unsigned int *puVar3;
 iVar1 = FUN_00011630("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 return 0xffffffff;
 }
 else {
 FUN_000117a0(iVar1);
 iVar1 = FUN_00011760("/tmp/binbench_shm",0x2a);
 if (iVar1 < 0) {
 return 0xffffffff;
 }
 else {
 iVar1 = FUN_000114b0(iVar1,0x1000,0x3b6);
 if (iVar1 < 0) {
 return 0xfffffffe;
 }
 else {
 puVar3 = (unsigned int *)FUN_00011560(iVar1,0,0);
 if (puVar3 == (unsigned int *)0xffffffff) {
 return 0xfffffffd;
 }
 else {
 *puVar3 = 0x72616853;
 puVar3[1] = 0x654d6465;
 puVar3[2] = 0x79726f6d;
 *(char *)(puVar3 + 3) = 0;
 FUN_00011650(puVar3);
 FUN_00011720(puVar3);
 FUN_000115e0(iVar1,0,0);
 return 0;
 }
 }
 }
 }
}

// Function: call_shmget_shmat @ 0x128f9
unsigned int call_shmget_shmat(void)
{
 unsigned int iVar1;
 iVar1 = param_shmget_shmat();
 if (iVar1 < 1) {
 return 0xffffffff;
 }
 else {
 return 0x2a;
 }
}

// Function: signal_handler @ 0x12929
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: param_signal_handling @ 0x12950
unsigned int param_signal_handling(void)
{
 int iVar1;
 int local_10;
 FUN_000114e0(10,signal_handler);
 FUN_000114e0(0xe,signal_handler);
 signal_received = 0;
 FUN_00011420(10);
 local_10 = 1000;
 while ((signal_received == 0 && (0 < local_10))) {
 FUN_000115b0(1000);
 local_10 = local_10 + -1;
 }
 if (signal_received == 0) {
 return 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 FUN_00011510(1);
 local_10 = 2000;
 while ((signal_received == 0 && (0 < local_10))) {
 FUN_000115b0(1000);
 local_10 = local_10 + -1;
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 return 0xfffffffb;
 }
 else {
 FUN_000114e0(10,0);
 FUN_000114e0(0xe,0);
 return 0x2a;
 }
 }
 else {
 return 0xfffffffc;
 }
}

// Function: call_signal_handling @ 0x12aa7
unsigned int call_signal_handling(void)
{
 return param_signal_handling();
}

// Function: test_system_calls @ 0x12ac2
void test_system_calls(void)
{
 unsigned int uVar1;
 FUN_00011610(&DAT_00014248);
 uVar1 = call_linux_syscall();
 FUN_00011470(&DAT_00014263);
 uVar1 = call_win32_api();
 FUN_00011470(&DAT_0001427f);
 uVar1 = call_fork_exec();
 FUN_00011470(&DAT_0001429b);
 uVar1 = call_pipe_communication();
 FUN_00011470(&DAT_000142b7);
 uVar1 = call_socket_create();
 FUN_00011470(&DAT_000142d3);
 uVar1 = call_shmget_shmat();
 FUN_00011470(&DAT_000142ef);
 uVar1 = call_signal_handling();
 FUN_00011470(&DAT_0001430b);
 return;
}

// Function: thread_compute @ 0x12b98
int * thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)FUN_00011600(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x12be7
unsigned int param_pthread_create(unsigned int param_1)
{
 int in_GS_OFFSET;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int *local_1c;
 int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_20 = param_1;
 local_18 = FUN_00011730(&local_24,0,thread_compute,&local_20);
 if (local_18 == 0) {
 FUN_00011780(local_24,&local_1c);
 local_14 = *local_1c;
 FUN_00011490(local_1c);
 }
 else {
 local_14 = 0xffffffff;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return local_14;
}

// Function: call_pthread_create @ 0x12c7a
unsigned int call_pthread_create(void)
{
 return param_pthread_create(7);
}

// Function: thread_sum @ 0x12c9d
unsigned int thread_sum(int *param_1)
{
 int local_c;
 param_1[2] = 0;
 for (local_c = *param_1; local_c <= param_1[1]; local_c = local_c + 1) {
 param_1[2] = param_1[2] + local_c;
 }
 return 0;
}

// Function: param_pthread_join @ 0x12cf2
int param_pthread_join(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_4c;
 int local_48;
 int local_44;
 int local_40 [4];
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_40[3] = 1;
 local_30 = 10;
 local_2c = 0;
 local_28 = 0xb;
 local_24 = 0x14;
 local_20 = 0;
 local_1c = 0x15;
 local_18 = 0x1e;
 local_14 = 0;
 for (local_4c = 0; local_4c < 3; local_4c = local_4c + 1) {
 iVar1 = FUN_00011730(local_40 + local_4c,0,thread_sum,local_40 + local_4c * 3 + 3);
 if (iVar1 != 0) {
 local_48 = -1;
 goto LAB_00012df5;
 }
 }
 local_48 = 0;
 local_44 = 0;
 do {
 if (2 < local_44) {
LAB_00012df5:
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return local_48;
 }
 iVar1 = FUN_00011780(local_40[local_44],0);
 if (iVar1 != 0) {
 local_48 = -2;
 goto LAB_00012df5;
 }
 local_48 = local_48 + local_40[local_44 * 3 + 5];
 local_44 = local_44 + 1;
 } while( true );
}

// Function: call_pthread_join @ 0x12e0b
int call_pthread_join(void)
{
 return param_pthread_join();
}

// Function: thread_increment @ 0x12e26
unsigned int thread_increment(int *param_1)
{
 int iVar1;
 int local_14;
 iVar1 = *param_1;
 for (local_14 = 0; local_14 < iVar1; local_14 = local_14 + 1) {
 FUN_00011570(counter_mutex);
 shared_counter = shared_counter + 1;
 FUN_00011410(counter_mutex);
 FUN_000115b0(1000);
 }
 return 0;
}

// Function: param_mutex_lock @ 0x12ea6
unsigned int param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 int iVar3;
 int local_1c;
 int local_18;
 unsigned int uVar2;
 iVar1 = FUN_00011600(param_1 << 2);
 if (iVar1 == 0) {
 return 0xffffffff;
 }
 else {
 shared_counter = 0;
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 iVar3 = FUN_00011730(local_1c * 4 + iVar1,0,thread_increment,&param_2);
 if (iVar3 != 0) {
 FUN_00011490(iVar1);
 return 0xfffffffe;
 }
 }
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 FUN_00011780(*(unsigned int *)(iVar1 + local_18 * 4),0);
 }
 FUN_00011490(iVar1);
 if (param_2 * param_1 == shared_counter) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
 }
}

// Function: call_mutex_lock @ 0x12fa8
unsigned int call_mutex_lock(void)
{
 return param_mutex_lock(4,1000);
}

// Function: consumer_thread @ 0x12fd0
unsigned int * consumer_thread(void)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 FUN_00011570(cond_mutex);
 while (ready == 0) {
 FUN_000114d0(cond, cond_mutex);
 uVar1 = data;
 }
 FUN_00011410(cond_mutex);
 puVar2 = (unsigned int *)FUN_00011600(4);
 *puVar2 = uVar1;
 return puVar2;
}

// Function: producer_thread @ 0x13058
unsigned int producer_thread(void)
{
 FUN_00011500(1);
 FUN_00011570(cond_mutex);
 data = 0x2a;
 ready = 1;
 FUN_000115f0(cond);
 FUN_00011410(cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x130cf
unsigned int param_condition_variable(void)
{
 int iVar1;
 int in_GS_OFFSET;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int *local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ready = 0;
 data = 0;
 iVar1 = FUN_00011730(&local_1c,0,consumer_thread,0);
 if (iVar1 == 0) {
 iVar1 = FUN_00011730(&local_20,0,producer_thread,0);
 if (iVar1 == 0) {
 FUN_00011780(local_1c,&local_18);
 FUN_00011780(local_20,0);
 local_14 = *local_18;
 FUN_00011490(local_18);
 }
 else {
 FUN_00011790(local_1c);
 local_14 = 0xfffffffe;
 }
 }
 else {
 local_14 = 0xffffffff;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return local_14;
}

// Function: call_condition_variable @ 0x131ab
unsigned int call_condition_variable(void)
{
 return param_condition_variable();
}

// Function: thread_atomic_increment @ 0x131c6
unsigned int thread_atomic_increment(int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 int local_1c;
 for (local_1c = 0; local_1c < *param_1; local_1c = local_1c + 1) {
 LOCK();
 iVar1 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = local_1c + 1000;
 LOCK();
 if (local_1c != iVar1) {
 atomic_counter = iVar1;
 }
 UNLOCK();
 }
 uVar2 = 0;
 return uVar2;
}

// Function: thread_atomic_load_store @ 0x13257
long long thread_atomic_load_store(void)
{
 unsigned int uVar1;
 uVar1 = atomic_counter;
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return (ulonglong)uVar1 << 0x20;
}

// Function: param_atomic_ops @ 0x13287
unsigned int param_atomic_ops(int param_1)
{
 int iVar2;
 int in_GS_OFFSET;
 unsigned int local_24;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 unsigned int uVar1;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = FUN_00011600(param_1 << 2);
 if (local_18 == 0) {
 uVar1 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
 iVar2 = FUN_00011730(local_20 * 4 + local_18,0,thread_atomic_increment,&local_24);
 if (iVar2 != 0) {
 FUN_00011490(local_18);
 uVar1 = 0xfffffffe;
 goto LAB_000133b7;
 }
 }
 iVar2 = FUN_00011730(&local_24,0,thread_atomic_load_store,0);
 if (iVar2 == 0) {
 FUN_00011780(local_24,0);
 }
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 FUN_00011780(*(unsigned int *)(local_18 + local_1c * 4),0);
 }
 local_14 = atomic_counter;
 FUN_00011490(local_18);
 if (local_14 < 1) {
 uVar1 = 0xfffffffd;
 }
 else {
 uVar1 = 0x2a;
 }
 }
LAB_000133b7:
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar1;
}

// Function: call_atomic_ops @ 0x133cd
unsigned int call_atomic_ops(void)
{
 return param_atomic_ops(4);
}

// Function: thread_tls_test @ 0x133f5
int * thread_tls_test(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 int *in_GS_OFFSET;
 (void)param_1;
 iVar1 = in_GS_OFFSET[-9];
 in_GS_OFFSET[-9] = in_GS_OFFSET[-9] + 0x32;
 FUN_000116d0(*in_GS_OFFSET + -0x20,param_1,0x1f,0x13405);
 piVar2 = (int *)FUN_00011600(8);
 *piVar2 = iVar1;
 piVar2[1] = in_GS_OFFSET[-9];
 return piVar2;
}

// Function: param_thread_local_storage @ 0x13477
unsigned int param_thread_local_storage(int param_1)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 int iVar3;
 int in_GS_OFFSET;
 int *local_40;
 int local_3c;
 int local_38;
 int local_34;
 int local_30;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 int local_18;
 int *local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_24 = FUN_00011600(param_1 << 2);
 local_20 = FUN_00011600(param_1 << 2);
 if ((local_24 == 0) || (local_20 == 0)) {
 uVar2 = 0xffffffff;
 }
 else {
 for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
 puVar1 = (unsigned int *)(local_3c * 4 + local_20);
 uVar2 = FUN_00011600(0x10);
 *puVar1 = uVar2;
 FUN_000116b0(*(unsigned int *)(local_20 + local_3c * 4),0x10,"Thread-%d",local_3c);
 }
 for (local_38 = 0; local_38 < param_1; local_38 = local_38 + 1) {
 iVar3 = FUN_00011730(local_24 + local_38 * 4,0,thread_tls_test,
 *(unsigned int *)(local_20 + local_38 * 4));
 if (iVar3 != 0) {
 for (local_34 = 0; local_34 <= local_38; local_34 = local_34 + 1) {
 FUN_00011490(*(unsigned int *)(local_20 + local_34 * 4));
 }
 FUN_00011490(local_20);
 FUN_00011490(local_24);
 uVar2 = 0xfffffffe;
 goto LAB_000136b3;
 }
 }
 local_30 = 0;
 local_2c = 0;
 for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
 FUN_00011780(*(unsigned int *)(local_24 + local_28 * 4),&local_40);
 local_14 = local_40;
 local_30 = local_30 + *local_40;
 local_2c = local_2c + local_40[1];
 FUN_00011490(local_40);
 FUN_00011490(*(unsigned int *)(local_20 + local_28 * 4));
 }
 FUN_00011490(local_20);
 FUN_00011490(local_24);
 local_1c = param_1 * 100;
 local_18 = param_1 * 0x96;
 if ((local_30 == local_1c) && (local_2c == local_18)) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
LAB_000136b3:
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x136cb
unsigned int call_thread_local_storage(void)
{
 return param_thread_local_storage(4);
}

// Function: test_thread_concurrency @ 0x136ee
void test_thread_concurrency(void)
{
 unsigned int uVar1;
 FUN_00011610(&DAT_00014331);
 uVar1 = call_pthread_create();
 FUN_00011470(&DAT_0001434f);
 uVar1 = call_pthread_join();
 FUN_00011470(&DAT_0001436b);
 uVar1 = call_mutex_lock();
 FUN_00011470(&DAT_00014388);
 uVar1 = call_condition_variable();
 FUN_00011470(&DAT_000143a4);
 uVar1 = call_atomic_ops();
 FUN_00011470(&DAT_000143c0);
 uVar1 = call_thread_local_storage();
 FUN_00011470(&DAT_000143dc);
 return;
}

// Function: main @ 0x137ac
unsigned int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



// Function: __stack_chk_fail_local @ 0x137e0
void __stack_chk_fail_local(void)
{
 FUN_00011520();
 return;
}

// Function: __do_global_ctors_aux @ 0x13800
int __do_global_ctors_aux(void)
{
 return 0;
}



