// Decompiled by BinaryAI
// SHA256: 769e17cef5ee655e047803772bf30a88fec91241f9db273f8354d583931c0f25

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <fcntl.h>

// Type definitions
typedef unsigned int uint;
typedef unsigned char byte;
typedef int bool;

// Global variables
int atomic_counter = 0;
int shared_counter = 0;
int signal_received = 0;
int signal_number = 0;
int ready = 0;
int data = 0;
void *counter_mutex = NULL;
void *cond_mutex = NULL;
void *cond = NULL;
int stack0x00000004 = 0;
int stack0x00000008 = 0;

// Function prototypes
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern int __do_global_ctors_aux(void);
extern void *__stack_chk_fail_local(void);

// PLT stubs - these are function pointers used for dynamic linking
// Note: In PIC code, these are called through the GOT (Global Offset Table)
// The actual function pointers are stored at offsets from EBX
extern void *malloc(size_t size);
extern void free(void *ptr);
extern int pthread_mutex_lock(void *mutex);
extern int pthread_mutex_unlock(void *mutex);
extern int pthread_create(void *thread, const void *attr, void *(*start_routine)(void*), void *arg);
extern int pthread_join(void *thread, void **retval);
extern int pthread_cond_signal(void *cond);
extern int pthread_cond_wait(void *cond, void *mutex);
extern int usleep(unsigned int useconds);
extern unsigned int sleep(unsigned int seconds);
extern int signal(int signum, void (*handler)(int));
extern int kill(pid_t pid, int sig);
extern pid_t fork(void);
extern int wait(int *status);
extern int pipe(int *fds);
extern ssize_t write(int fd, const void *buf, size_t count);
extern ssize_t read(int fd, void *buf, size_t count);
extern int close(int fd);
extern int socket(int domain, int type, int protocol);
extern int connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
extern int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
extern int listen(int sockfd, int backlog);
extern int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen);
extern int shmget(key_t key, size_t size, int shmflg);
extern void *shmat(int shmid, const void *shmaddr, int shmflg);
extern int shmdt(const void *shmaddr);

// FUN_ function mappings based on usage patterns
// These are the actual function implementations (not PLT stubs)
// They are called directly, not through function pointers
extern void *FUN_000115e0(size_t size);           // malloc
extern void FUN_00011480(void *ptr);              // free
extern int FUN_00011560(void *mutex);              // pthread_mutex_lock
extern int FUN_00011400(void *mutex);              // pthread_mutex_unlock
extern int FUN_00011710(void *thread, const void *attr, void *(*start_routine)(void*), void *arg, ...);  // pthread_create (variadic)
extern int FUN_00011760(void *thread, void **retval);  // pthread_join
extern int FUN_00011420(void *thread, const void *attr, int flags, void *(*start_routine)(void*), ...);  // pthread_create variant (variadic)
extern int FUN_000114c0(void *cond, void *mutex);  // pthread_cond_wait
extern int FUN_000115d0(void *cond);              // pthread_cond_signal
extern int FUN_000114f0(unsigned int seconds);   // sleep
extern int FUN_000115a0(unsigned int useconds);   // usleep
extern int FUN_000114d0(int signum, void *handler); // signal
extern int FUN_00011410(int signum, int sig);    // kill
extern int FUN_00011500(int sig);                // raise
extern int FUN_00011720(void);                   // fork
extern int FUN_00011590(int *status);            // wait
extern int FUN_000116e0(int *fds);               // pipe
extern int FUN_00011780(int fd);                 // close
extern int FUN_00011640(int fd, const void *buf, size_t count);  // write
extern int FUN_00011460(int fd, void *buf, size_t count);  // read
extern int FUN_00011750(int domain, int type, int protocol);  // socket
extern int FUN_000113f0(int sockfd, int level, int optname, const void *optval, socklen_t optlen);  // setsockopt
extern int FUN_00011650(int sockfd, const struct sockaddr *addr, socklen_t addrlen);  // bind
extern int FUN_00011730(int sockfd, int backlog); // listen
extern int FUN_00011610(const char *pathname, int oflag, mode_t mode);  // shmget
extern void *FUN_00011740(const char *shmaddr, int cmd); // shmat
extern void *FUN_000114a0(void *shmaddr, size_t size, int shmflg); // shmat variant
extern int FUN_000115c0(void *shmaddr, int cmd);    // shmdt
extern void *FUN_00011550(void *shmaddr, int cmd, void *buf);  // shmdt variant
extern int FUN_00011700(void *shmaddr);             // shmdt

// Stdio functions - variadic
// String functions
extern char *FUN_00011510(char *dest, const char *src);  // strcpy
extern int FUN_00011440(const char *s1, const char *s2); // strcmp
extern size_t FUN_00011630(const char *s);               // strlen
extern void *FUN_00011490(void *dest, const void *src, size_t n);  // memcpy
extern int FUN_000114e0(const void *s1, const void *s2, size_t n); // memcmp
extern char *FUN_00011620(const char *s, int c);         // strchr
extern int FUN_00011430(const char *haystack, const char *needle);  // strstr
extern void *FUN_00011680(void *s, int c, size_t n);    // memset

// Stdio functions - variadic functions need special handling
extern int FUN_000116f0(int fd, const char *format, ...);        // printf/dprintf (variadic)
extern int FUN_00011660(const char *format, ...);        // scanf (variadic)
extern FILE *FUN_00011670(const char *filename, const char *mode);  // fopen
extern int FUN_000114b0(FILE *stream);                   // fclose
extern size_t FUN_00011580(const void *ptr, size_t size, size_t nitems, FILE *stream);  // fwrite
extern size_t FUN_000115b0(void *ptr, size_t size, size_t nitems, FILE *stream);  // fread
extern int FUN_00011530(FILE *stream, long offset, int whence);                    // fseek
extern int FUN_000116c0(FILE *stream);                    // ftell
extern int FUN_00011570(const char *filename);            // fflush or similar

// Linux syscall wrapper
extern int FUN_000116b0(int fd, const void *buf, size_t count);  // read syscall
extern int *FUN_00011690(void);                        // __errno_location

// Win32 API wrapper (fake - returns failure)
extern int FUN_00011600(const char *name, char *buf);

// Stack check
extern void FUN_00011520(void);                        // __stack_chk_fail

// Additional functions
extern void FUN_000113e0(void);                       // exit or similar
extern void FUN_00011470(int status);                       // exit
extern void FUN_00011770(void *retval);                       // pthread_exit

// More function stubs (returning int to avoid void value errors)
extern int FUN_00011410(int signum, int sig);
extern int FUN_00011420(void *thread, const void *attr, int flags, void *(*start_routine)(void*), void *arg);
extern int FUN_00011430(const char *haystack, const char *needle);
extern int FUN_00011440(const char *s1, const char *s2);
extern void FUN_00011450(int status);
extern ssize_t FUN_00011460(int fd, void *buf, size_t count);
extern void *FUN_00011490(void *dest, const void *src, size_t n);
extern void *FUN_000114a0(void *shmaddr, size_t size, int shmflg);
extern int FUN_000114b0(FILE *stream);
extern int FUN_000114c0(void *cond, void *mutex);
extern int FUN_000114d0(int signum, void *handler);
extern int FUN_000114e0(const void *s1, const void *s2, size_t n);
extern unsigned int FUN_000114f0(unsigned int seconds);
extern int FUN_00011500(int sig);
extern char *FUN_00011510(char *dest, const char *src);
extern int FUN_00011530(FILE *stream, long offset, int whence);
extern int FUN_00011540(int *status);
extern void *FUN_00011550(void *shmaddr, int cmd, void *buf);
extern int FUN_00011560(void *mutex);
extern int FUN_00011570(const char *filename);
extern size_t FUN_00011580(const void *ptr, size_t size, size_t nitems, FILE *stream);
extern int FUN_00011590(int *status);
extern int FUN_000115a0(unsigned int useconds);
extern size_t FUN_000115b0(void *ptr, size_t size, size_t nitems, FILE *stream);
extern int FUN_000115c0(void *shmaddr, int cmd);
extern int FUN_000115d0(void *cond);
extern void *FUN_000115e0(size_t size);
extern int FUN_000115f0(const char *s);
extern int FUN_00011600(const char *name, char *buf);
extern int FUN_00011610(const char *pathname, int oflag, mode_t mode);
extern char *FUN_00011620(const char *s, int c);
extern size_t FUN_00011630(const char *s);
extern ssize_t FUN_00011640(int fd, const void *buf, size_t count);
extern int FUN_00011650(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
extern int FUN_00011660(const char *format, ...);
extern FILE *FUN_00011670(const char *filename, const char *mode);
extern void *FUN_00011680(void *s, int c, size_t n);
extern int *FUN_00011690(void);
extern int FUN_000116a0(void);
extern ssize_t FUN_000116b0(int fd, const void *buf, size_t count);
extern long FUN_000116c0(FILE *stream);
extern int FUN_000116d0(void);
extern int FUN_000116e0(int *fds);
extern int FUN_00011700(void *shmaddr);
extern int FUN_00011710(void *thread, const void *attr, void *(*start_routine)(void*), void *arg);
extern pid_t FUN_00011720(void);
extern int FUN_00011730(int sockfd, int backlog);
extern void *FUN_00011740(const char *shmaddr, int cmd);
extern int FUN_00011750(int domain, int type, int protocol);
extern int FUN_00011760(void *thread, void **retval);
extern void FUN_00011770(void *retval);
extern int FUN_00011780(int fd);

// Global offset table for PIC code
extern void *_GLOBAL_OFFSET_TABLE_;

// Data constants (string literals from binary)
extern const char DAT_00014027[];
extern const char DAT_0001403a[];
extern const char DAT_00014048[];
extern const char DAT_00014075[];
extern const char DAT_00014090[];
extern const char DAT_000140ab[];
extern const char DAT_000140c7[];
extern const char DAT_000140e3[];
extern const char DAT_000140ff[];
extern const char DAT_0001411b[];
extern const char DAT_00014138[];
extern const char DAT_00014154[];
extern const char DAT_00014170[];
extern const char DAT_0001418c[];
extern const char DAT_000141a7[];
extern const char DAT_000141e9[];
extern const char DAT_00014204[];
extern const char DAT_00014220[];
extern const char DAT_0001423c[];
extern const char DAT_00014258[];
extern const char DAT_00014274[];
extern const char DAT_00014290[];
extern const char DAT_000142ac[];
extern const char DAT_000142c8[];
extern const char DAT_000142e6[];
extern const char DAT_00014302[];
extern const char DAT_0001431f[];
extern const char DAT_0001433b[];
extern const char DAT_00014357[];
extern const char DAT_00014373[];
extern const char DAT_00014390[];
extern const char UNK_00012d5b[];

// Function: _init @ 0x11000
int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: FUN_000113e0 @ 0x113e0 - exit or similar
void FUN_000113e0(void)
{
 int unaff_EBX;
 (*(void (*)(void))(*(void **)(unaff_EBX + 0xf8)))();
 return;
}

// Function: FUN_000113f0 @ 0x113f0 - setsockopt
int FUN_000113f0(int sockfd, int level, int optname, const void *optval, socklen_t optlen)
{
 int unaff_EBX;
 return (*(int (*)(int, int, int, const void *, socklen_t))(unaff_EBX + 0xc))(sockfd, level, optname, optval, optlen);
}

// Function: FUN_00011400 @ 0x11400 - pthread_mutex_unlock
int FUN_00011400(void *mutex)
{
 int unaff_EBX;
 return (*(int (*)(void *))(unaff_EBX + 0x10))(mutex);
}

// Function: FUN_00011410 @ 0x11410 - kill
int FUN_00011410(int signum, int sig)
{
 int unaff_EBX;
 int (*func)(int, int) = *(int (*)(int, int))(unaff_EBX + 0x14);
 return func(signum, sig);
}

// Function: FUN_00011420 @ 0x11420 - pthread_create variant
int FUN_00011420(void *thread, const void *attr, int flags, void *(*start_routine)(void*), void *arg)
{
 int unaff_EBX;
 int (*func)(void *, const void *, int, void *(*)(), void *) = *(int (*)(void *, const void *, int, void *(*)(), void *))(unaff_EBX + 0x18);
 return func(thread, attr, flags, start_routine, arg);
}

// Function: FUN_00011430 @ 0x11430 - strcmp
int FUN_00011430(const char *s1, const char *s2)
{
 int unaff_EBX;
 return (*(int (*)(const char *, const char *))(unaff_EBX + 0x1c))(s1, s2);
}

// Function: FUN_00011440 @ 0x11440 - strcmp
int FUN_00011440(const char *s1, const char *s2)
{
 int unaff_EBX;
 return (*(int (*)(const char *, const char *))(unaff_EBX + 0x20))(s1, s2);
}

// Function: FUN_00011450 @ 0x11450 - _exit
void FUN_00011450(int status)
{
 int unaff_EBX;
 (*(void (*)(int))(unaff_EBX + 0x24))(status);
 return;
}

// Function: FUN_00011460 @ 0x11460 - read
ssize_t FUN_00011460(int fd, void *buf, size_t count)
{
 int unaff_EBX;
 return (*(ssize_t (*)(int, void *, size_t))(unaff_EBX + 0x28))(fd, buf, count);
}

// Function: FUN_00011470 @ 0x11470 - exit
void FUN_00011470(int status)
{
 int unaff_EBX;
 (*(void (*)(int))(unaff_EBX + 0x2c))(status);
 return;
}

// Function: FUN_00011480 @ 0x11480 - free
void FUN_00011480(void *ptr)
{
 int unaff_EBX;
 (*(void (*)(void *))(unaff_EBX + 0x30))(ptr);
 return;
}

// Function: FUN_00011490 @ 0x11490 - memcpy
void *FUN_00011490(void *dest, const void *src, size_t n)
{
 int unaff_EBX;
 return (*(void *(*)(void *, const void *, size_t))(unaff_EBX + 0x34))(dest, src, n);
}

// Function: FUN_000114a0 @ 0x114a0 - shmat variant
void *FUN_000114a0(void *shmaddr, size_t size, int shmflg)
{
 int unaff_EBX;
 return (*(void *(*)(void *, size_t, int))(unaff_EBX + 0x38))(shmaddr, size, shmflg);
}

// Function: FUN_000114b0 @ 0x114b0 - fclose
int FUN_000114b0(FILE *stream)
{
 int unaff_EBX;
 return (*(int (*)(FILE *))(unaff_EBX + 0x3c))(stream);
}

// Function: FUN_000114c0 @ 0x114c0 - pthread_cond_wait
int FUN_000114c0(void *cond, void *mutex)
{
 int unaff_EBX;
 return (*(int (*)(void *, void *))(unaff_EBX + 0x40))(cond, mutex);
}

// Function: FUN_000114d0 @ 0x114d0 - signal
int FUN_000114d0(int signum, void *handler)
{
 int unaff_EBX;
 return (*(int (*)(int, void *))(unaff_EBX + 0x44))(signum, handler);
}

// Function: FUN_000114e0 @ 0x114e0 - memcmp
int FUN_000114e0(const void *s1, const void *s2, size_t n)
{
 int unaff_EBX;
 return (*(int (*)(const void *, const void *, size_t))(unaff_EBX + 0x48))(s1, s2, n);
}

// Function: FUN_000114f0 @ 0x114f0 - sleep
unsigned int FUN_000114f0(unsigned int seconds)
{
 int unaff_EBX;
 return (*(unsigned int (*)(unsigned int))(unaff_EBX + 0x4c))(seconds);
}

// Function: FUN_00011500 @ 0x11500 - raise
int FUN_00011500(int sig)
{
 int unaff_EBX;
 return (*(int (*)(int))(unaff_EBX + 0x50))(sig);
}

// Function: FUN_00011510 @ 0x11510 - strcpy
char *FUN_00011510(char *dest, const char *src)
{
 int unaff_EBX;
 return (*(char *(*)(char *, const char *))(unaff_EBX + 0x54))(dest, src);
}

// Function: FUN_00011520 @ 0x11520 - __stack_chk_fail
void FUN_00011520(void)
{
 int unaff_EBX;
 (*(void (*)(void))(unaff_EBX + 0x58))();
 return;
}

// Function: FUN_00011530 @ 0x11530 - fseek
int FUN_00011530(FILE *stream, long offset, int whence)
{
 int unaff_EBX;
 return (*(int (*)(FILE *, long, int))(unaff_EBX + 0x5c))(stream, offset, whence);
}

// Function: FUN_00011540 @ 0x11540 - wait
int FUN_00011540(int *status)
{
 int unaff_EBX;
 return (*(int (*)(int *))(unaff_EBX + 0x60))(status);
}

// Function: FUN_00011550 @ 0x11550 - shmctl/shmdt variant
int FUN_00011550(void *shmaddr, int cmd, void *buf)
{
 int unaff_EBX;
 return (*(int (*)(void *, int, void *))(unaff_EBX + 0x64))(shmaddr, cmd, buf);
}

// Function: FUN_00011560 @ 0x11560
void FUN_00011560(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x68))();
 return;
}

// Function: FUN_00011570 @ 0x11570
void FUN_00011570(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x6c))();
 return;
}

// Function: FUN_00011580 @ 0x11580
void FUN_00011580(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x70))();
 return;
}

// Function: FUN_00011590 @ 0x11590
void FUN_00011590(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x74))();
 return;
}

// Function: FUN_000115a0 @ 0x115a0
void FUN_000115a0(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x78))();
 return;
}

// Function: FUN_000115b0 @ 0x115b0
void FUN_000115b0(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x7c))();
 return;
}

// Function: FUN_000115c0 @ 0x115c0
void FUN_000115c0(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x80))();
 return;
}

// Function: FUN_000115d0 @ 0x115d0
void FUN_000115d0(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x84))();
 return;
}

// Function: FUN_000115e0 @ 0x115e0 - malloc
void *FUN_000115e0(size_t size)
{
 int unaff_EBX;
 return (*(void *(*)(size_t))(unaff_EBX + 0x88))(size);
}

// Function: FUN_000115f0 @ 0x115f0
void FUN_000115f0(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x8c))();
 return;
}

// Function: FUN_00011600 @ 0x11600
void FUN_00011600(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x90))();
 return;
}

// Function: FUN_00011610 @ 0x11610
void FUN_00011610(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x94))();
 return;
}

// Function: FUN_00011620 @ 0x11620
void FUN_00011620(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x98))();
 return;
}

// Function: FUN_00011630 @ 0x11630
void FUN_00011630(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x9c))();
 return;
}

// Function: FUN_00011640 @ 0x11640 - write
ssize_t FUN_00011640(int fd, const void *buf, size_t count)
{
 int unaff_EBX;
 return (*(ssize_t (*)(int, const void *, size_t))(unaff_EBX + 0xa0))(fd, buf, count);
}

// Function: FUN_00011650 @ 0x11650
void FUN_00011650(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xa4))();
 return;
}

// Function: FUN_00011660 @ 0x11660
void FUN_00011660(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xa8))();
 return;
}

// Function: FUN_00011670 @ 0x11670
void FUN_00011670(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xac))();
 return;
}

// Function: FUN_00011680 @ 0x11680
void FUN_00011680(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xb0))();
 return;
}

// Function: FUN_00011690 @ 0x11690
void FUN_00011690(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xb4))();
 return;
}

// Function: FUN_000116a0 @ 0x116a0
void FUN_000116a0(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xb8))();
 return;
}

// Function: FUN_000116b0 @ 0x116b0
void FUN_000116b0(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xbc))();
 return;
}

// Function: FUN_000116c0 @ 0x116c0
void FUN_000116c0(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xc0))();
 return;
}

// Function: FUN_000116d0 @ 0x116d0
void FUN_000116d0(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xc4))();
 return;
}

// Function: FUN_000116e0 @ 0x116e0
void FUN_000116e0(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 200))();
 return;
}

// Function: FUN_000116f0 @ 0x116f0 - printf/dprintf
int FUN_000116f0(int fd, const char *format, ...)
{
 int unaff_EBX;
 int (*func)(int, const char *, ...);
 int result;
 *(void **)&func = *(void **)(unaff_EBX + 0xcc);
 va_list args;
 va_start(args, format);
 result = func(fd, format, args);
 va_end(args);
 return result;
}

// Function: FUN_00011700 @ 0x11700
void FUN_00011700(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xd0))();
 return;
}

// Function: FUN_00011710 @ 0x11710 - pthread_create
int FUN_00011710(void *thread, const void *attr, void *(*start_routine)(void*), void *arg)
{
 int unaff_EBX;
 int (*func)(void *, const void *, void *(*)(void*), void *) = *(int (*)(void *, const void *, void *(*)(void*), void *))(unaff_EBX + 0xd4);
 return func(thread, attr, start_routine, arg);
}

// Function: FUN_00011720 @ 0x11720
void FUN_00011720(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xd8))();
 return;
}

// Function: FUN_00011730 @ 0x11730
void FUN_00011730(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xdc))();
 return;
}

// Function: FUN_00011740 @ 0x11740
void FUN_00011740(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xe0))();
 return;
}

// Function: FUN_00011750 @ 0x11750
void FUN_00011750(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xe4))();
 return;
}

// Function: FUN_00011760 @ 0x11760 - pthread_join
int FUN_00011760(void *thread, void **retval)
{
 int unaff_EBX;
 return (*(int (*)(void *, void **))(unaff_EBX + 0xe8))(thread, retval);
}

// Function: FUN_00011770 @ 0x11770
void FUN_00011770(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xec))();
 return;
}

// Function: FUN_00011780 @ 0x11780
void FUN_00011780(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0xf0))();
 return;
}

// Function: main @ 0x11790
unsigned int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _start @ 0x117b0
void processEntry _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 FUN_00011450(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
 do {
 } while( true );
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

// Function: deregister_tm_clones @ 0x117f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11830
void register_tm_clones(void)
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
 FUN_000113e0(*(unsigned int *)(unaff_EDI + 0x5777));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x5797);
 while (uVar1 < ((unaff_EDI + 0x558f) - (unaff_EDI + 0x558b) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x5797) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x558b + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x5797);
 }
 deregister_tm_clones();
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

// Function: signal_handler @ 0x11930
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x11960
unsigned int thread_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *param_1;
 param_1[2] = 0;
 if (iVar1 <= param_1[1]) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (param_1[1] + 1 != iVar1);
 param_1[2] = iVar2;
 }
 return 0;
}

// Function: thread_compute @ 0x11990
void thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)FUN_000115e0(4);
 *piVar2 = iVar1 * iVar1;
 return;
}

// Function: thread_increment @ 0x119c0
unsigned int thread_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 FUN_00011560(counter_mutex);
 shared_counter = shared_counter + 1;
 FUN_00011400(counter_mutex);
 FUN_000115a0(1000);
 } while (iVar1 != iVar2);
 }
 return 0;
}

// Function: consumer_thread @ 0x11a30
void consumer_thread(void)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 FUN_00011560(cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 FUN_000114c0(cond,cond_mutex);
 uVar1 = data;
 }
 FUN_00011400(cond_mutex);
 puVar2 = (unsigned int *)FUN_000115e0(4);
 *puVar2 = uVar1;
 return;
}

// Function: producer_thread @ 0x11ab0
unsigned int producer_thread(void)
{
 FUN_000114f0(1);
 FUN_00011560(cond_mutex);
 data = 0x2a;
 ready = 1;
 FUN_000115d0(cond);
 FUN_00011400(cond_mutex);
 return 0;
}

// Function: thread_atomic_increment @ 0x11b10
unsigned int thread_atomic_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 if (0 < *param_1) {
 iVar2 = 0;
 do {
 LOCK();
 iVar1 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = iVar2 + 1000;
 LOCK();
 if (iVar2 != iVar1) {
 atomic_counter = iVar1;
 }
 UNLOCK();
 iVar2 = iVar2 + 1;
 } while (*param_1 != iVar2);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x11b60
unsigned int thread_atomic_load_store(void)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}

// Function: thread_tls_test @ 0x11b90
void thread_tls_test(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *in_GS_OFFSET;
 iVar2 = in_GS_OFFSET[-9];
 iVar1 = iVar2 + 0x32;
 in_GS_OFFSET[-9] = iVar1;
 FUN_000116a0(*in_GS_OFFSET + -0x20,param_1,0x1f,0x11bb0);
 piVar3 = (int *)FUN_000115e0(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return;
}

// Function: param_fork_exec.part.0 @ 0x11bf0
unsigned int param_fork_exec_part_0(void)
{
 int iVar1;
 unsigned int *puVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 unsigned int *puVar7;
 int in_GS_OFFSET;
 int *piStack_40;
 int iStack_3c;
 unsigned int uStack_30;
 char **ppuStack_2c;
 ppuStack_2c = &_GLOBAL_OFFSET_TABLE_;
 FUN_000116d0();
 FUN_00011470();
 uStack_30 = 0x11c29;
 iStack_3c = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000115e0(0x10);
 puVar2 = (unsigned int *)FUN_000115e0(0x10);
 if ((iVar1 == 0) || (puVar2 == (unsigned int *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar6 = 0;
 do {
 uVar3 = FUN_000115e0(0x10);
 puVar2[iVar6] = uVar3;
 iVar5 = iVar6 + 1;
 FUN_00011420(uVar3,0x10,1,0x10,"Thread-%d",iVar6);
 iVar6 = iVar5;
 } while (iVar5 != 4);
 iVar5 = 0;
 iVar6 = iVar1;
 do {
 iVar4 = FUN_00011710(iVar6,0,thread_tls_test,puVar2[iVar5]);
 if (iVar4 != 0) {
 puVar7 = puVar2;
 do {
 uVar3 = *puVar7;
 puVar7 = puVar7 + 1;
 FUN_00011480(uVar3);
 } while (puVar2 + iVar5 + 1 != puVar7);
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_00011d63;
 }
 iVar5 = iVar5 + 1;
 iVar6 = iVar6 + 4;
 } while (iVar5 != 4);
 iVar5 = 0;
 iVar4 = 0;
 iVar6 = 0;
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar4 * 4),&piStack_40);
 iVar6 = iVar6 + *piStack_40;
 iVar5 = iVar5 + piStack_40[1];
 FUN_00011480(piStack_40);
 puVar7 = puVar2 + iVar4;
 iVar4 = iVar4 + 1;
 FUN_00011480(*puVar7);
 } while (iVar4 != 4);
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 if ((iVar6 == 400) && (iVar5 == 600)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00011d63:
 if (iStack_3c == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar3;
 }
 __stack_chk_fail_local();
}

// Function: param_thread_local_storage.constprop.0 @ 0x11c20
unsigned int param_thread_local_storage_constprop_0(void)
{
 int iVar1;
 unsigned int *puVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 unsigned int *puVar7;
 int in_GS_OFFSET;
 int *local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x11c29;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000115e0(0x10);
 puVar2 = (unsigned int *)FUN_000115e0(0x10);
 if ((iVar1 == 0) || (puVar2 == (unsigned int *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar6 = 0;
 do {
 uVar3 = FUN_000115e0(0x10);
 puVar2[iVar6] = uVar3;
 iVar5 = iVar6 + 1;
 FUN_00011420(uVar3,0x10,1,0x10,"Thread-%d",iVar6);
 iVar6 = iVar5;
 } while (iVar5 != 4);
 iVar5 = 0;
 iVar6 = iVar1;
 do {
 iVar4 = FUN_00011710(iVar6,0,thread_tls_test,puVar2[iVar5]);
 if (iVar4 != 0) {
 puVar7 = puVar2;
 do {
 uVar3 = *puVar7;
 puVar7 = puVar7 + 1;
 FUN_00011480(uVar3);
 } while (puVar2 + iVar5 + 1 != puVar7);
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_00011d63;
 }
 iVar5 = iVar5 + 1;
 iVar6 = iVar6 + 4;
 } while (iVar5 != 4);
 iVar5 = 0;
 iVar4 = 0;
 iVar6 = 0;
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar4 * 4),&local_24);
 iVar6 = iVar6 + *local_24;
 iVar5 = iVar5 + local_24[1];
 FUN_00011480(local_24);
 puVar7 = puVar2 + iVar4;
 iVar4 = iVar4 + 1;
 FUN_00011480(*puVar7);
 } while (iVar4 != 4);
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 if ((iVar6 == 400) && (iVar5 == 600)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00011d63:
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar3;
 }
 __stack_chk_fail_local();
}

// Function: param_atomic_ops.constprop.0 @ 0x11de0
unsigned int param_atomic_ops_constprop_0(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int in_GS_OFFSET;
 unsigned int local_28;
 unsigned int local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x11de9;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_28 = 500;
 iVar1 = FUN_000115e0(0x10);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 iVar4 = iVar1;
 do {
 iVar2 = FUN_00011710(iVar4,0,thread_atomic_increment,&local_28);
 if (iVar2 != 0) {
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_00011ec0;
 }
 iVar4 = iVar4 + 4;
 } while (iVar4 != iVar1 + 0x10);
 iVar2 = FUN_00011710(&local_24,0,thread_atomic_load_store,0);
 iVar4 = 0;
 if (iVar2 == 0) {
 FUN_00011760(local_24,0);
 }
 do {
 iVar2 = iVar4 * 4;
 iVar4 = iVar4 + 1;
 FUN_00011760(*(unsigned int *)(iVar1 + iVar2),0);
 iVar2 = atomic_counter;
 } while (iVar4 != 4);
 FUN_00011480(iVar1);
 uVar3 = 0x2a;
 if (iVar2 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00011ec0:
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar3;
 }
 __stack_chk_fail_local();
}

// Function: param_mutex_lock.constprop.0 @ 0x11f10
unsigned int param_mutex_lock_constprop_0(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int in_GS_OFFSET;
 int local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x11f19;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_24 = 1000;
 iVar1 = FUN_000115e0(0x10);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 iVar4 = iVar1;
 do {
 iVar2 = FUN_00011710(iVar4,0,thread_increment,&local_24);
 if (iVar2 != 0) {
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_00011fdf;
 }
 iVar4 = iVar4 + 4;
 } while (iVar1 + 0x10 != iVar4);
 iVar4 = 0;
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar4 * 4),0);
 iVar4 = iVar4 + 1;
 } while (iVar4 != 4);
 FUN_00011480(iVar1);
 uVar3 = 0x2a;
 if (local_24 << 2 != shared_counter) {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00011fdf:
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar3;
 }
 __stack_chk_fail_local();
}

// Function: param_strcpy @ 0x12020
int param_strcpy(int param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = FUN_00011510(param_1,param_2);
 return iVar1 - param_1;
}

// Function: call_strcpy @ 0x12050
unsigned int call_strcpy(void)
{
 return 8;
}

// Function: param_strcmp @ 0x12060
int param_strcmp(unsigned int param_1,unsigned int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_00011440(param_1,param_2);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_strcmp @ 0x120a0
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x120b0
void param_strlen(unsigned int param_1)
{
 FUN_00011630(param_1);
 return;
}

// Function: call_strlen @ 0x120e0
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x120f0
unsigned int param_memcpy(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 FUN_00011490(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x12120
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x12130
int param_memcmp(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_000114e0(param_1,param_2,param_3);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_memcmp @ 0x12170
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
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
 iVar1 = FUN_000114e0(&local_34,&local_28,0xc);
 iVar3 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar3 = 1;
 }
 iVar1 = FUN_000114e0(&local_34,&local_1c,0xc);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2 + iVar3;
 }
 __stack_chk_fail_local();
}

// Function: param_printf @ 0x12250
void param_printf(unsigned int param_1,unsigned int param_2)
{
 FUN_000116f0(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x12280
void call_printf(void)
{
 FUN_000116f0(1,"Value: %d, Name: %s\n",0x2a,&DAT_00014027);
 return;
}

// Function: param_scanf @ 0x122b0
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x122ba;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011660(param_1,"%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_14;
 }
 __stack_chk_fail_local();
}

// Function: call_scanf @ 0x12320
int call_scanf(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x1232a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011660("123,456","%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_14;
 }
 __stack_chk_fail_local();
}

// Function: param_fopen_fclose @ 0x12390
unsigned int param_fopen_fclose(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_00011670(param_1,&DAT_0001403a);
 if (iVar1 == 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = FUN_000116c0(iVar1);
 FUN_000114b0(iVar1);
 }
 return uVar2;
}

// Function: call_fopen_fclose @ 0x123e0
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_00011670("/etc/passwd",&DAT_0001403a);
 if (iVar1 != 0) {
 iVar2 = FUN_000116c0(iVar1);
 FUN_000114b0(iVar1);
 if (-1 < iVar2) {
 return 0x2a;
 }
 }
 return 0xffffffff;
}

// Function: param_fread_fwrite @ 0x12440
int param_fread_fwrite(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 char local_40 [32];
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x1244d;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011670(param_1,&DAT_00014048);
 if (iVar1 == 0) {
 iVar1 = -1;
 }
 else {
 iVar2 = FUN_00011580("BinBench Test Data",1,0x12,iVar1);
 if (iVar2 == 0x12) {
 FUN_00011530(iVar1);
 iVar2 = FUN_000115b0(local_40,1,0x12,iVar1);
 local_40[iVar2] = 0;
 FUN_000114b0(iVar1);
 FUN_00011570(param_1);
 if (iVar2 == 0x12) {
 iVar1 = FUN_00011440(local_40,"BinBench Test Data");
 iVar1 = (-(uint)(iVar1 == 0) & 0x2d) - 3;
 }
 else {
 iVar1 = -3;
 }
 }
 else {
 FUN_000114b0(iVar1);
 iVar1 = -2;
 }
 }
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 __stack_chk_fail_local();
}

// Function: call_fread_fwrite @ 0x12540
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x12570
int param_malloc_free(int param_1)
{
 int *piVar1;
 int iVar2;
 int *piVar3;
 piVar1 = (int *)FUN_000115e0(param_1 * 4);
 if (piVar1 == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar2 = 0;
 piVar3 = piVar1;
 do {
 *piVar3 = iVar2;
 iVar2 = iVar2 + 10;
 piVar3 = piVar3 + 1;
 } while (param_1 * 10 != iVar2);
 }
 iVar2 = *piVar1 + piVar1[param_1 + -1];
 FUN_00011480(piVar1);
 }
 return iVar2;
}

// Function: call_malloc_free @ 0x125e0
unsigned int call_malloc_free(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_000115e0(0x28);
 if (iVar1 == 0) {
 uVar2 = 0xffffffff;
 }
 else {
 FUN_00011480(iVar1);
 uVar2 = 0x5a;
 }
 return uVar2;
}

// Function: param_memset @ 0x12620
int param_memset(byte *param_1,int param_2)
{
 byte *pbVar1;
 byte bVar2;
 int iVar3;
 FUN_00011680(param_1,0,param_2,0x12630);
 if (param_2 != 0) {
 iVar3 = 0;
 pbVar1 = param_1 + param_2;
 do {
 bVar2 = *param_1;
 param_1 = param_1 + 1;
 iVar3 = iVar3 + (uint)bVar2;
 } while (pbVar1 != param_1);
 return iVar3;
 }
 return 0;
}

// Function: call_memset @ 0x12680
unsigned int call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x12690
int param_strchr_strstr(int param_1,char param_2,unsigned int param_3)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = FUN_00011620(param_1,(int)param_2);
 iVar3 = iVar1 - param_1;
 if (iVar1 == 0) {
 iVar3 = -1;
 }
 iVar2 = FUN_00011430(param_1,param_3);
 iVar1 = -1;
 if (iVar2 != 0) {
 iVar1 = iVar2 - param_1;
 }
 return iVar1 + iVar3;
}

// Function: call_strchr_strstr @ 0x126f0
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x12700
void test_standard_library_functions(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int in_GS_OFFSET;
 int local_3c;
 int local_38;
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
 FUN_000115f0(&DAT_00014390);
 FUN_000116f0(1,&DAT_00014075,8);
 FUN_000116f0(1,&DAT_00014090,0);
 FUN_000116f0(1,&DAT_000140ab,0xc);
 FUN_000116f0(1,&DAT_000140c7,0x5a);
 local_34 = 1;
 local_30 = 2;
 local_2c = 3;
 local_28 = 1;
 local_24 = 2;
 local_20 = 4;
 local_1c = 1;
 local_18 = 2;
 local_14 = 3;
 iVar1 = FUN_000114e0(&local_34,&local_28,0xc);
 iVar4 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar4 = 1;
 }
 iVar1 = FUN_000114e0(&local_34,&local_1c,0xc);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 FUN_000116f0(1,&DAT_000140e3,iVar2 + iVar4);
 uVar3 = FUN_000116f0(1,"Value: %d, Name: %s\n",0x2a,&DAT_00014027);
 FUN_000116f0(1,&DAT_000140ff,uVar3);
 iVar1 = FUN_00011660("123,456","%d,%d",&local_3c,&local_38);
 if (iVar1 == 2) {
 local_38 = local_38 + local_3c;
 }
 else {
 local_38 = -1;
 }
 FUN_000116f0(1,&DAT_0001411b,local_38);
 iVar1 = FUN_00011670("/etc/passwd",&DAT_0001403a);
 if (iVar1 != 0) {
 iVar4 = FUN_000116c0(iVar1);
 FUN_000114b0(iVar1);
 uVar3 = 0x2a;
 if (-1 < iVar4) goto LAB_000128d4;
 }
 uVar3 = 0xffffffff;
LAB_000128d4:
 FUN_000116f0(1,&DAT_00014138,uVar3);
 uVar3 = param_fread_fwrite("/tmp/binbench_test.tmp");
 FUN_000116f0(1,&DAT_00014154,uVar3);
 iVar1 = FUN_000115e0(0x28);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 FUN_00011480(iVar1);
 uVar3 = 0x5a;
 }
 FUN_000116f0(1,&DAT_00014170,uVar3);
 FUN_000116f0(1,&DAT_0001418c,0);
 FUN_000116f0(1,&DAT_000141a7,0xf);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: param_linux_syscall @ 0x129a0
int param_linux_syscall(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 uVar4 = 0x129ab;
 uVar3 = 0;
 iVar1 = FUN_000116b0(5,param_1,0);
 if (-1 < iVar1) {
 FUN_000116b0(6,iVar1,uVar3);
 return iVar1;
 }
 piVar2 = (int *)FUN_00011690(uVar4);
 return -*piVar2;
}

// Function: call_linux_syscall @ 0x12a00
unsigned int call_linux_syscall(void)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 uVar3 = 0;
 iVar1 = FUN_000116b0(5,"/etc/passwd",0);
 if (-1 < iVar1) {
 FUN_000116b0(6,iVar1,uVar3);
 return 0x2a;
 }
 piVar2 = (int *)FUN_00011690();
 uVar3 = 0x2a;
 if (0 < *piVar2) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}

// Function: param_win32_api @ 0x12a70
unsigned int param_win32_api(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 char local_68 [44];
 int local_3c;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x12a7a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011600(param_1,local_68);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_3c < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: call_win32_api @ 0x12ae0
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 char local_68 [44];
 int local_3c;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x12aea;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011600("/etc/passwd",local_68);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_3c < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: param_fork_exec @ 0x12b50
uint param_fork_exec(void)
{
 int iVar1;
 uint uVar2;
 int in_GS_OFFSET;
 uint uStack_30;
 int iStack_2c;
 uint *puStack_28;
 unsigned int uStack_24;
 char **ppuStack_20;
 uint local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ppuStack_20 = (char **)0x12b7e;
 iVar1 = FUN_00011720();
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
LAB_00012bb4:
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 ppuStack_20 = (char **)0x12bd4;
 __stack_chk_fail_local();
 }
 if (iVar1 != 0) {
 uStack_24 = 0;
 puStack_28 = &local_14;
 uStack_30 = 0x12b94;
 iStack_2c = iVar1;
 iVar1 = FUN_00011590();
 uVar2 = 0xfffffffe;
 if ((-1 < iVar1) && (uVar2 = local_14 >> 8 & 0xff, (local_14 & 0x7f) != 0)) {
 uVar2 = 0xfffffffd;
 }
 goto LAB_00012bb4;
 }
 ppuStack_20 = (char **)0x12bdd;
 param_fork_exec_part_0();
 uStack_24 = 0x12bea;
 iStack_2c = *(int *)(in_GS_OFFSET + 0x14);
 ppuStack_20 = &_GLOBAL_OFFSET_TABLE_;
 iVar1 = FUN_00011720();
 if (iVar1 < 0) {
LAB_00012c29:
 uVar2 = 0xffffffff;
 }
 else {
 if (iVar1 == 0) {
 param_fork_exec_part_0();
 goto LAB_00012c59;
 }
 iVar1 = FUN_00011590(iVar1,&uStack_30,0);
 if (((iVar1 < 0) || ((uStack_30 & 0x7f) != 0)) || ((char)(uStack_30 >> 8) != '\0'))
 goto LAB_00012c29;
 uVar2 = 0x2a;
 }
 if (iStack_2c == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
LAB_00012c59:
 __stack_chk_fail_local();
}

// Function: call_fork_exec @ 0x12be0
unsigned int call_fork_exec(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 uint local_14;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x12bea;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011720();
 if (iVar1 < 0) {
LAB_00012c29:
 uVar2 = 0xffffffff;
 }
 else {
 if (iVar1 == 0) {
 param_fork_exec_part_0();
 goto LAB_00012c59;
 }
 iVar1 = FUN_00011590(iVar1,&local_14,0);
 if (((iVar1 < 0) || ((local_14 & 0x7f) != 0)) || ((char)(local_14 >> 8) != '\0'))
 goto LAB_00012c29;
 uVar2 = 0x2a;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
LAB_00012c59:
 __stack_chk_fail_local();
}

// Function: param_pipe_communication @ 0x12c60
unsigned int param_pipe_communication(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int **ppuVar3;
 char *puVar4;
 int in_GS_OFFSET;
 unsigned int **local_4c;
 char *pcStack_48;
 unsigned int local_44;
 unsigned int local_40;
 char auStack_3c [4];
 unsigned int *local_38;
 unsigned int *local_34;
 unsigned int local_10;
 unsigned int uStack_c;
 uStack_c = 0x12c6b;
 local_10 = *(unsigned int *)(in_GS_OFFSET + 0x14);
 local_4c = &local_38;
 iVar1 = FUN_000116e0();
 ppuVar3 = (unsigned int **)auStack_3c;
 puVar4 = auStack_3c;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_40 = 0x12c9a;
 iVar1 = FUN_00011720();
 if (iVar1 < 0) {
 uVar2 = 0xfffffffe;
 puVar4 = auStack_3c;
 }
 else {
 if (iVar1 == 0) {
 local_4c = (unsigned int **)local_38;
 FUN_00011780();
 pcStack_48 = "HelloPipe";
 local_44 = 9;
 local_4c = (unsigned int **)local_34;
 FUN_00011640();
 ppuVar3 = &local_4c;
 local_4c = (unsigned int **)local_34;
 FUN_00011780();
 local_4c = (unsigned int **)0x0;
 FUN_00011470();
 }
 *(unsigned int *)((int)ppuVar3 + -0x10) = *(unsigned int *)((int)ppuVar3 + 8);
 *(unsigned int *)((int)ppuVar3 + -0x14) = 0x12cec;
 FUN_00011780();
 *(unsigned int *)((int)ppuVar3 + -8) = 0x1f;
 *(char **)((int)ppuVar3 + -0xc) = (char *)((int)ppuVar3 + 0xc);
 *(unsigned int *)((int)ppuVar3 + -0x10) = *(unsigned int *)((int)ppuVar3 + 4);
 *(unsigned int *)((int)ppuVar3 + -0x14) = 0x12cff;
 iVar1 = FUN_00011460();
 *(char *)((int)ppuVar3 + iVar1 + 0xc) = 0;
 *(unsigned int *)((int)ppuVar3 + -0x10) = *(unsigned int *)((int)ppuVar3 + 4);
 *(unsigned int *)((int)ppuVar3 + -0x14) = 0x12d10;
 FUN_00011780();
 *(unsigned int *)((int)ppuVar3 + -0x10) = 0;
 *(unsigned int *)((int)ppuVar3 + -0x14) = 0x12d1c;
 FUN_00011540();
 uVar2 = 0x2a;
 puVar4 = (char *)ppuVar3;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
 }
 if (*(int *)(puVar4 + 0x2c) == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 *(char **)(puVar4 + -4) = &UNK_00012d5b;
 __stack_chk_fail_local();
}

// Function: param_socket_create @ 0x12d70
unsigned int param_socket_create(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int in_GS_OFFSET;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x12d7b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011750(2,1,0);
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 local_24 = 1;
 iVar2 = FUN_000113f0(iVar1,1,2,&local_24,4);
 if (iVar2 < 0) {
 FUN_00011780(iVar1);
 uVar3 = 0xfffffffe;
 }
 else {
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 local_20 = 2;
 iVar2 = FUN_00011650(iVar1,&local_20,0x10);
 if (iVar2 < 0) {
 FUN_00011780(iVar1);
 uVar3 = 0xfffffffd;
 }
 else {
 iVar2 = FUN_00011730(iVar1,5);
 if (iVar2 < 0) {
 FUN_00011780(iVar1);
 uVar3 = 0xfffffffc;
 }
 else {
 FUN_00011780(iVar1);
 uVar3 = 0x2a;
 }
 }
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar3;
 }
 __stack_chk_fail_local();
}

// Function: param_shmget_shmat @ 0x12eb0
unsigned int param_shmget_shmat(void)
{
 int iVar1;
 unsigned int *puVar2;
 iVar1 = FUN_00011610("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 FUN_00011780(iVar1);
 iVar1 = FUN_00011740("/tmp/binbench_shm",0x2a);
 if (-1 < iVar1) {
 iVar1 = FUN_000114a0(iVar1,0x1000,0x3b6);
 if (iVar1 < 0) {
 return 0xfffffffe;
 }
 puVar2 = (unsigned int *)FUN_00011550(iVar1,0,0);
 if (puVar2 != (unsigned int *)0xffffffff) {
 *puVar2 = 0x72616853;
 puVar2[1] = 0x654d6465;
 puVar2[2] = 0x79726f6d;
 *(char *)(puVar2 + 3) = 0;
 FUN_00011700(puVar2);
 FUN_000115c0(iVar1,0,0);
 return 0xc;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}

// Function: call_shmget_shmat @ 0x12f90
unsigned int call_shmget_shmat(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x12fb0
unsigned int param_signal_handling(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_000114d0(10,signal_handler);
 if (iVar1 == -1) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = FUN_000114d0(0xe,signal_handler);
 if (iVar1 == -1) {
 uVar2 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 FUN_00011410(10);
 if (signal_received == 0) {
 iVar1 = 1000;
 do {
 FUN_000115a0(1000);
 if (signal_received != 0) break;
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 FUN_00011500(1);
 if (signal_received == 0) {
 iVar1 = 2000;
 do {
 FUN_000115a0(1000);
 if (signal_received != 0) break;
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 uVar2 = 0xfffffffb;
 }
 else {
 FUN_000114d0(10,0);
 FUN_000114d0(0xe,0);
 uVar2 = 0x2a;
 }
 }
 else {
 uVar2 = 0xfffffffc;
 }
 }
 }
 return uVar2;
}

// Function: test_system_calls @ 0x13120
unsigned int test_system_calls(void)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 int in_GS_OFFSET;
 unsigned int uStack_88;
 uint uStack_84;
 unsigned int *puStack_80;
 char *pcStack_7c;
 uint *puStack_78;
 char **ppuStack_74;
 uint *puStack_70;
 uint local_68 [11];
 int local_3c;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 pcStack_7c = &DAT_000141e9;
 puStack_80 = (unsigned int *)0x13153;
 FUN_000115f0();
 ppuStack_74 = (char **)0x0;
 pcStack_7c = (char *)0x5;
 puStack_80 = (unsigned int *)0x13160;
 puStack_78 = (uint *)"/etc/passwd";
 iVar1 = FUN_000116b0();
 if (iVar1 < 0) {
 puStack_70 = (uint *)0x132bd;
 piVar2 = (int *)FUN_00011690();
 ppuStack_74 = (char **)0x2a;
 if (0 < *piVar2) {
 ppuStack_74 = (char **)0xffffffff;
 }
 }
 else {
 pcStack_7c = (char *)0x6;
 puStack_80 = (unsigned int *)0x13176;
 puStack_78 = (uint *)iVar1;
 FUN_000116b0();
 ppuStack_74 = (char **)0x2a;
 }
 puStack_78 = (uint *)&DAT_00014204;
 pcStack_7c = (char *)0x1;
 puStack_80 = (unsigned int *)0x13190;
 FUN_000116f0();
 puStack_80 = (unsigned int *)0x1319d;
 pcStack_7c = "/etc/passwd";
 puStack_78 = local_68;
 iVar1 = FUN_00011600();
 if (iVar1 < 0) {
 ppuStack_74 = (char **)0xffffffff;
 }
 else {
 ppuStack_74 = (char **)0x2a;
 if (local_3c < 1) {
 ppuStack_74 = (char **)0xfffffffe;
 }
 }
 puStack_78 = (uint *)&DAT_00014220;
 pcStack_7c = (char *)0x1;
 puStack_80 = (unsigned int *)0x131cd;
 FUN_000116f0();
 puStack_80 = (unsigned int *)0x131d2;
 iVar1 = FUN_00011720();
 if (-1 < iVar1) {
 if (iVar1 == 0) {
 puStack_70 = (uint *)0x132ef;
 param_fork_exec_part_0();
 puStack_78 = (uint *)0x132fb;
 pcStack_7c = *(char **)(in_GS_OFFSET + 0x14);
 uStack_84 = local_68[0];
 ppuStack_74 = &_GLOBAL_OFFSET_TABLE_;
 puStack_70 = local_68;
 iVar1 = FUN_00011710(&uStack_88,0,thread_compute,&uStack_84);
 if (iVar1 == 0) {
 FUN_00011760(uStack_88,&puStack_80);
 uVar3 = *puStack_80;
 FUN_00011480(puStack_80);
 }
 else {
 uVar3 = 0xffffffff;
 }
 if (pcStack_7c != (char *)*(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar3;
 }
 ppuStack_74 = (char **)0x0;
 puStack_80 = (unsigned int *)0x131eb;
 pcStack_7c = (char *)iVar1;
 puStack_78 = local_68;
 iVar1 = FUN_00011590();
 if (((-1 < iVar1) && ((local_68[0] & 0x7f) == 0)) && ((char)(local_68[0] >> 8) == '\0')) {
 ppuStack_74 = (char **)0x2a;
 goto LAB_00013203;
 }
 }
 ppuStack_74 = (char **)0xffffffff;
LAB_00013203:
 puStack_78 = (uint *)&DAT_0001423c;
 pcStack_7c = (char *)0x1;
 puStack_80 = (unsigned int *)0x13215;
 FUN_000116f0();
 puStack_80 = (unsigned int *)0x1321a;
 ppuStack_74 = (char **)param_pipe_communication();
 puStack_78 = (uint *)&DAT_00014258;
 pcStack_7c = (char *)0x1;
 puStack_80 = (unsigned int *)0x1322c;
 FUN_000116f0();
 puStack_80 = (unsigned int *)0x13231;
 ppuStack_74 = (char **)param_socket_create();
 puStack_78 = (uint *)&DAT_00014274;
 pcStack_7c = (char *)0x1;
 puStack_80 = (unsigned int *)0x13243;
 FUN_000116f0();
 puStack_80 = (unsigned int *)0x13248;
 iVar1 = param_shmget_shmat();
 ppuStack_74 = (char **)0x2a;
 if (iVar1 < 1) {
 ppuStack_74 = (char **)0xffffffff;
 }
 puStack_78 = (uint *)&DAT_00014290;
 pcStack_7c = (char *)0x1;
 puStack_80 = (unsigned int *)0x13269;
 FUN_000116f0();
 puStack_80 = (unsigned int *)0x1326e;
 ppuStack_74 = (char **)param_signal_handling();
 puStack_78 = (uint *)&DAT_000142ac;
 pcStack_7c = (char *)0x1;
 puStack_80 = (unsigned int *)0x13280;
 FUN_000116f0();
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 puStack_70 = (uint *)0x132e2;
 __stack_chk_fail_local();
 }
 return 0;
}

// Function: param_pthread_create @ 0x132f0
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int *local_14;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x132fb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = param_1;
 iVar1 = FUN_00011710(&local_1c,0,thread_compute,&local_18);
 if (iVar1 == 0) {
 FUN_00011760(local_1c,&local_14);
 uVar2 = *local_14;
 FUN_00011480(local_14);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: call_pthread_create @ 0x13380
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int *local_14;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x1338b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = 7;
 iVar1 = FUN_00011710(&local_1c,0,thread_compute,&local_18);
 if (iVar1 == 0) {
 FUN_00011760(local_1c,&local_14);
 uVar2 = *local_14;
 FUN_00011480(local_14);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: param_pthread_join @ 0x13410
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int in_GS_OFFSET;
 int local_50 [4];
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 int local_20 [3];
 unsigned int uStack_14;
 uStack_14 = 0x1341d;
 local_20[0] = *(int *)(in_GS_OFFSET + 0x14);
 piVar6 = local_50 + 3;
 local_50[3] = 1;
 piVar3 = local_50;
 local_40 = 10;
 local_3c = 0;
 local_38 = 0xb;
 local_34 = 0x14;
 local_30 = 0;
 local_2c = 0x15;
 local_28 = 0x1e;
 local_24 = 0;
 piVar4 = piVar3;
 piVar5 = piVar6;
 do {
 iVar1 = FUN_00011710(piVar4,0,thread_sum,piVar5);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_000134e3;
 }
 piVar4 = piVar4 + 1;
 piVar5 = piVar5 + 3;
 } while (piVar5 != local_20);
 iVar1 = 0;
 do {
 iVar2 = FUN_00011760(*piVar3,0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = iVar1 + piVar6[2];
 piVar3 = piVar3 + 1;
 piVar6 = piVar6 + 3;
 } while (piVar6 != local_20);
LAB_000134e3:
 if (local_20[0] == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 __stack_chk_fail_local();
}

// Function: param_mutex_lock @ 0x13530
unsigned int param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 bool bVar6;
 iVar1 = FUN_000115e0(param_1 << 2);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < param_1) {
 iVar2 = 0;
 iVar5 = iVar1;
 do {
 iVar4 = iVar2;
 iVar2 = FUN_00011710(iVar5,0,thread_increment,&param_2);
 if (iVar2 != 0) {
 FUN_00011480(iVar1);
 return 0xfffffffe;
 }
 iVar2 = iVar4 + 1;
 iVar5 = iVar5 + 4;
 } while (param_1 != iVar2);
 iVar2 = 0;
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar2 * 4),0);
 bVar6 = iVar4 != iVar2;
 iVar2 = iVar2 + 1;
 } while (bVar6);
 }
 FUN_00011480(iVar1);
 uVar3 = 0x2a;
 if (shared_counter != param_1 * param_2) {
 uVar3 = 0xfffffffd;
 }
 }
 return uVar3;
}

// Function: param_condition_variable @ 0x13650
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int *local_14;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x1365b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ready = 0;
 data = 0;
 iVar1 = FUN_00011710(&local_18,0,consumer_thread,0);
 if (iVar1 == 0) {
 iVar1 = FUN_00011710(&local_1c,0,producer_thread,0);
 if (iVar1 == 0) {
 FUN_00011760(local_18,&local_14);
 FUN_00011760(local_1c,0);
 uVar2 = *local_14;
 FUN_00011480(local_14);
 }
 else {
 uVar2 = 0xfffffffe;
 FUN_00011770(local_18);
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: param_atomic_ops @ 0x13740
unsigned int param_atomic_ops(int param_1)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 int in_GS_OFFSET;
 unsigned int local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x1374d;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000115e0(param_1 << 2);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 if (param_1 < 1) {
 iVar5 = FUN_00011710(&local_24,0,thread_atomic_load_store,0);
 if (iVar5 == 0) {
 FUN_00011760(local_24,0);
 }
 }
 else {
 iVar4 = 0;
 iVar5 = iVar1;
 do {
 iVar2 = FUN_00011710(iVar5,0,thread_atomic_increment,&stack0x00000008);
 if (iVar2 != 0) {
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_000137e4;
 }
 iVar4 = iVar4 + 1;
 iVar5 = iVar5 + 4;
 } while (param_1 != iVar4);
 iVar4 = FUN_00011710(&local_24,0,thread_atomic_load_store,0);
 iVar5 = 0;
 if (iVar4 == 0) {
 FUN_00011760(local_24,0);
 }
 do {
 iVar4 = iVar5 * 4;
 iVar5 = iVar5 + 1;
 FUN_00011760(*(unsigned int *)(iVar1 + iVar4),0);
 } while (iVar5 < param_1);
 }
 iVar5 = atomic_counter;
 FUN_00011480(iVar1);
 uVar3 = 0x2a;
 if (iVar5 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
LAB_000137e4:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar3;
}

// Function: param_thread_local_storage @ 0x138e0
unsigned int param_thread_local_storage(int param_1)
{
 int iVar1;
 unsigned int *puVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 unsigned int *puVar6;
 int iVar7;
 int iVar8;
 int in_GS_OFFSET;
 bool bVar9;
 int *local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x138ed;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000115e0(param_1 * 4);
 puVar2 = (unsigned int *)FUN_000115e0(param_1 * 4);
 if ((iVar1 == 0) || (puVar2 == (unsigned int *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 if (param_1 < 1) {
 iVar7 = 0;
 iVar5 = 0;
 }
 else {
 iVar5 = 0;
 do {
 iVar8 = iVar5;
 uVar3 = FUN_000115e0(0x10);
 puVar2[iVar8] = uVar3;
 FUN_00011420(uVar3,0x10,1,0x10,"Thread-%d",iVar8);
 iVar5 = iVar8 + 1;
 } while (param_1 != iVar8 + 1);
 iVar5 = iVar1;
 iVar7 = 0;
 do {
 iVar4 = FUN_00011710(iVar5,0,thread_tls_test,puVar2[iVar7]);
 if (iVar4 != 0) {
 puVar6 = puVar2;
 do {
 uVar3 = *puVar6;
 puVar6 = puVar6 + 1;
 FUN_00011480(uVar3);
 } while (puVar2 + iVar7 + 1 != puVar6);
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_00013a0b;
 }
 iVar5 = iVar5 + 4;
 bVar9 = iVar8 != iVar7;
 iVar7 = iVar7 + 1;
 } while (bVar9);
 iVar7 = 0;
 iVar5 = 0;
 iVar4 = 0;
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar4 * 4),&local_24);
 iVar5 = iVar5 + *local_24;
 iVar7 = iVar7 + local_24[1];
 FUN_00011480(local_24);
 FUN_00011480(puVar2[iVar4]);
 bVar9 = iVar8 != iVar4;
 iVar4 = iVar4 + 1;
 } while (bVar9);
 }
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 if ((param_1 * 100 - iVar5 == 0) && (param_1 * 0x96 - iVar7 == 0)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00013a0b:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar3;
}

// Function: test_thread_concurrency @ 0x13af0
void test_thread_concurrency(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int *local_14;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x13afb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000115f0(&DAT_000142c8);
 local_18 = 7;
 iVar1 = FUN_00011710(&local_1c,0,thread_compute,&local_18);
 if (iVar1 == 0) {
 FUN_00011760(local_1c,&local_14);
 uVar2 = *local_14;
 FUN_00011480(local_14);
 }
 else {
 uVar2 = 0xffffffff;
 }
 FUN_000116f0(1,&DAT_000142e6,uVar2);
 uVar2 = param_pthread_join();
 FUN_000116f0(1,&DAT_00014302,uVar2);
 uVar2 = param_mutex_lock_constprop_0();
 FUN_000116f0(1,&DAT_0001431f,uVar2);
 uVar2 = param_condition_variable();
 FUN_000116f0(1,&DAT_0001433b,uVar2);
 uVar2 = param_atomic_ops_constprop_0();
 FUN_000116f0(1,&DAT_00014357,uVar2);
 uVar2 = param_thread_local_storage_constprop_0();
 FUN_000116f0(1,&DAT_00014373,uVar2);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: __x86.get_pc_thunk.ax @ 0x13c17
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.cx @ 0x13c1b
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x13c20
void __stack_chk_fail_local(void)
{
 FUN_00011520();
 return;
}

// Function: __do_global_ctors_aux @ 0x13c40
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x13c8c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

