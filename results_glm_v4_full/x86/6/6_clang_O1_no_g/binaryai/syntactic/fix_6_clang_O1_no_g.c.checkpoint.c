/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef unsigned char byte;
typedef unsigned char bool;
typedef unsigned int uint;
#define true 1
#define false 0

/* Additional type definitions */
typedef int __pid_t;
typedef int key_t;
typedef unsigned int socklen_t;
typedef unsigned int __useconds_t;
typedef void (*__sighandler_t)(int);
typedef long time_t;
typedef void *(*__start_routine)(void *);
#define NULL ((void *)0)

/* pthread types */
typedef unsigned long int pthread_t;
typedef struct { unsigned int __lock; unsigned int __count; int __owner; unsigned int __nusers; int __kind; unsigned int __spins; __extension__ unsigned long long __elision; __extension__ unsigned long long __pad[2]; } pthread_mutex_t;
typedef struct { unsigned int __lock; unsigned int __futex; __extension__ unsigned long long __total_seq; __extension__ unsigned long long __wakeup_seq; __extension__ unsigned long long __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; } pthread_cond_t;
typedef union { char __size[56]; long int __align[7]; } pthread_attr_t;

/* timespec structure */
struct timespec {
 long tv_sec;
 long tv_nsec;
};

/* stat structure */
struct stat {
 unsigned long st_dev;
 unsigned long st_ino;
 unsigned long st_nlink;
 unsigned int st_mode;
 unsigned int st_uid;
 unsigned int st_gid;
 unsigned int __pad0;
 unsigned long st_rdev;
 long st_size;
 long st_blksize;
 long st_blocks;
 struct timespec st_atim;
 struct timespec st_mtim;
 struct timespec st_ctim;
 long __unused[3];
};

/* ipc_perm structure */
struct ipc_perm {
 unsigned int __key;
 unsigned int uid;
 unsigned int gid;
 unsigned int cuid;
 unsigned int cgid;
 unsigned short mode;
 unsigned short __pad1;
 unsigned short __seq;
 unsigned short __pad2;
 unsigned long __unused1;
 unsigned long __unused2;
};

/* shmid_ds structure */
struct shmid_ds {
 struct ipc_perm shm_perm;
 size_t shm_segsz;
 time_t shm_atime;
 time_t shm_dtime;
 time_t shm_ctime;
 __pid_t shm_cpid;
 __pid_t shm_lpid;
 unsigned long shm_nattch;
 unsigned long __pad1;
 unsigned long __pad2;
};
typedef struct shmid_ds shmid_ds;

/* FILE structure (minimal) */
typedef struct _IO_FILE FILE;
struct _IO_FILE {
 int _flags;
 void* _IO_read_ptr;
 void* _IO_read_end;
 void* _IO_read_base;
 void* _IO_write_base;
 void* _IO_write_ptr;
 void* _IO_write_end;
 void* _IO_buf_base;
 void* _IO_buf_end;
 const char* _save_base;
 const char* _backup_base;
 void* _save_end;
 void* _markers;
 struct _IO_FILE* _chain;
 int _fileno;
 int _flags2;
 int _old_offset;
 unsigned short _cur_column;
 signed char _vtable_offset;
 char _shortbuf[1];
 void* _offset;
 void* _codecvt;
 void* _wide_data;
 struct _IO_FILE* _freeres_list;
 void* _saved_regs;
 void* _freeres_buf;
 size_t __pad5;
 int _mode;
 char _unused2[15 * sizeof(long) - 4 * sizeof(void*)];
};

/* sockaddr structure */
struct sockaddr {
 unsigned short sa_family;
 char sa_data[14];
};
typedef struct sockaddr sockaddr;

/* External function declarations */
void __do_global_ctors_aux(void);
void __do_global_dtors_aux(void);
void __x86_get_pc_thunk_di(void);
void __x86_get_pc_thunk_dx(void);
void signal_handler(int);
void thread_atomic_load_store(void *arg);
int __builtin_vsscanf(const char *__str, const char *__format, __builtin_va_list __ap);
int vsscanf(const char *__str, const char *__format, __builtin_va_list __ap);
int vprintf(const char *__format, __builtin_va_list __ap);
int vsnprintf(char *__s,size_t __maxlen,char *__format,__builtin_va_list __ap);

typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;

/* Global variable declarations */
int signal_received;
int signal_number;
void *counter_mutex;
int shared_counter;
void *cond_mutex;
void *cond;
char ready;
char data;
int atomic_counter;

/* Lock/Unlock functions */
#define LOCK() do {} while(0)
#define UNLOCK() do {} while(0)

/* Built-in va_list type definition for GCC */
typedef __builtin_va_list __gnuc_va_list;
typedef __builtin_va_list va_list;

/* Stack references */
extern char stack0x00000004[4];
extern int stack0x00000008;

/* Data references */
extern char DAT_00014026[];
extern char DAT_00014074[];
extern char DAT_0001408f[];
extern char DAT_000140aa[];
extern char DAT_000140c6[];
extern char DAT_000140e2[];
extern char DAT_000140fe[];
extern char DAT_0001411a[];
extern char DAT_00014137[];
extern char DAT_00014153[];
extern char DAT_0001416f[];
extern char DAT_0001418b[];
extern char DAT_000141a6[];
extern char DAT_000141c2[];
extern char DAT_000141f5[];
extern char DAT_00014211[];
char DAT_0001422d[] = "";
char DAT_00014249[] = "";
char DAT_00014265[] = "";
extern char DAT_00014281[];
extern char DAT_0001429d[];
extern char DAT_000142c3[];
extern char DAT_000142df[];
extern char DAT_000142fc[];
extern char DAT_00014318[];
extern char DAT_00014334[];
extern char DAT_00014350[];
extern char DAT_0001436c[];
extern char DAT_00014390[];
extern char DAT_000143ab[];
extern char DAT_000143cc[];
extern char DAT_000143d8[];

/* Define the undefined data symbols */
char DAT_00014026[] = "";
char DAT_00014074[] = "";
char DAT_0001408f[] = "";
char DAT_000140aa[] = "";
char DAT_000140c6[] = "";
char DAT_000140e2[] = "";
char DAT_000140fe[] = "";
char DAT_0001411a[] = "";
char DAT_00014137[] = "";
char DAT_00014153[] = "";
char DAT_0001416f[] = "";
char DAT_0001418b[] = "";
char DAT_000141a6[] = "";
char DAT_000141c2[] = "";
char DAT_000141f5[] = "";
char DAT_00014211[] = "";
char DAT_00014281[] = "";
char DAT_0001429d[] = "";
char DAT_000142c3[] = "";
char DAT_000142df[] = "";
char DAT_000142fc[] = "";
char DAT_00014318[] = "";
char DAT_00014334[] = "";
char DAT_00014350[] = "";
char DAT_0001436c[] = "";
char DAT_00014390[] = "";
char DAT_000143ab[] = "";
char DAT_000143cc[] = "";
char DAT_000143d8[] = "";

// Decompiled by BinaryAI
// SHA256: 1f8c23f8d9f588dcbcb5b38277dc36407ea6892dd33c135ea70704cf07c34568

/* Forward declaration of main */
int main(int argc, char **argv, char **envp);

/* Signal handler implementation */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}

/* Transactional memory clone deregistration stub */
void deregister_tm_clones(void)
{
 return;
}

/* Thread atomic load/store stub */
void thread_atomic_load_store(void *arg)
{
 return;
}

/* Define stack variable */
int stack0x00000008 = 1000;

// Function: <EXTERNAL>::setsockopt @ 0x11040
extern int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x11050
extern int pthread_mutex_unlock(pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::raise @ 0x11060
extern int raise(int __sig);

// Function: <EXTERNAL>::strstr @ 0x11070
extern char * strstr(char *__haystack,char *__needle);

// Function: <EXTERNAL>::strcmp @ 0x11080
extern int strcmp(char *__s1,char *__s2);

// Function: <EXTERNAL>::__libc_start_main @ 0x11090
extern int __libc_start_main(int (*main)(int, char **, char **),int argc,char **argv,void (*init)(void),void (*fini)(void),void (*rtld_fini)(void),void *stack_end);

// Function: <EXTERNAL>::read @ 0x110a0
extern ssize_t read(int __fd,void *__buf,size_t __nbytes);

// Function: <EXTERNAL>::printf @ 0x110b0
int printf(char *__format,...)
{
 int iVar1;
 __builtin_va_list ap;
 __builtin_va_start(ap, __format);
 iVar1 = vprintf(__format, ap);
 __builtin_va_end(ap);
 return iVar1;
}

// Function: <EXTERNAL>::_exit @ 0x110c0
extern void _exit(int __status);

// Function: <EXTERNAL>::free @ 0x110d0
extern void free(void *__ptr);

// Function: <EXTERNAL>::memcpy @ 0x110e0
extern void * memcpy(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::shmget @ 0x110f0
extern int shmget(key_t __key,size_t __size,int __shmflg);

// Function: <EXTERNAL>::fclose @ 0x11100
extern int fclose(FILE *__stream);

// Function: <EXTERNAL>::pthread_cond_wait @ 0x11110
extern int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::signal @ 0x11120
extern __sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::memcmp @ 0x11130
extern int memcmp(void *__s1,void *__s2,size_t __n);

// Function: <EXTERNAL>::sleep @ 0x11140
extern uint sleep(uint __seconds);

// Function: <EXTERNAL>::alarm @ 0x11150
extern uint alarm(uint __seconds);

// Function: <EXTERNAL>::rewind @ 0x11160
extern void rewind(FILE *__stream);

// Function: <EXTERNAL>::wait @ 0x11170
extern __pid_t wait(void *__stat_loc);

// Function: <EXTERNAL>::shmat @ 0x11180
extern void * shmat(int __shmid,void *__shmaddr,int __shmflg);

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x11190
extern int pthread_mutex_lock(pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::unlink @ 0x111a0
extern int unlink(char *__name);

// Function: <EXTERNAL>::fwrite @ 0x111b0
extern size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s);

// Function: <EXTERNAL>::waitpid @ 0x111c0
extern __pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options);

// Function: <EXTERNAL>::usleep @ 0x111d0
extern int usleep(__useconds_t __useconds);

// Function: <EXTERNAL>::fread @ 0x111e0
extern size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);

// Function: <EXTERNAL>::strcpy @ 0x111f0
extern char * strcpy(char *__dest,char *__src);

// Function: <EXTERNAL>::shmctl @ 0x11200
extern int shmctl(int __shmid,int __cmd,struct shmid_ds *__buf);

// Function: <EXTERNAL>::pthread_cond_signal @ 0x11210
extern int pthread_cond_signal(pthread_cond_t *__cond);

// Function: <EXTERNAL>::malloc @ 0x11220
extern void * malloc(size_t __size);

// Function: <EXTERNAL>::puts @ 0x11230
extern int puts(char *__s);

// Function: <EXTERNAL>::stat @ 0x11240
extern int stat(char *__file,struct stat *__buf);

// Function: <EXTERNAL>::open @ 0x11250
extern int open(char *__file,int __oflag,...);

// Function: <EXTERNAL>::strchr @ 0x11260
extern char * strchr(char *__s,int __c);

// Function: <EXTERNAL>::strlen @ 0x11270
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::bcmp @ 0x11280
extern int bcmp(void *__s1,void *__s2,size_t __n);

// Function: <EXTERNAL>::write @ 0x11290
extern ssize_t write(int __fd,void *__buf,size_t __n);

// Function: <EXTERNAL>::bind @ 0x112a0
extern int bind(int __fd,sockaddr *__addr,socklen_t __len);

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x112b0
int __isoc99_sscanf(const char *__str,const char *__format,...)
{
 int iVar1;
 __builtin_va_list ap;
 __builtin_va_start(ap, __format);
 iVar1 = vsscanf(__str, __format, ap);
 __builtin_va_end(ap);
 return iVar1;
}

// Function: <EXTERNAL>::fopen @ 0x112c0
extern FILE * fopen(char *__filename,char *__modes);

// Function: <EXTERNAL>::memset @ 0x112d0
extern void * memset(void *__s,int __c,size_t __n);

// Function: <EXTERNAL>::snprintf @ 0x112e0
int snprintf(char *__s,size_t __maxlen,char *__format,...)
{
 extern int vsnprintf(char *__s,size_t __maxlen,char *__format,__builtin_va_list __ap);
 int iVar1;
 __builtin_va_list ap;
 __builtin_va_start(ap, __format);
 iVar1 = vsnprintf(__s,__maxlen,__format,ap);
 __builtin_va_end(ap);
 return iVar1;
}

// Function: <EXTERNAL>::__errno_location @ 0x112f0
extern int * __errno_location(void);

// Function: <EXTERNAL>::strncpy @ 0x11300
extern char * strncpy(char *__dest,char *__src,size_t __n);

// Function: <EXTERNAL>::syscall @ 0x11310
extern long syscall(long __sysno,...);

// Function: <EXTERNAL>::fileno @ 0x11320
extern int fileno(FILE *__stream);

// Function: <EXTERNAL>::execl @ 0x11330
extern int execl(char *__path,char *__arg,...);

// Function: <EXTERNAL>::pipe @ 0x11340
extern int pipe(int *__pipedes);

// Function: <EXTERNAL>::shmdt @ 0x11350
extern int shmdt(void *__shmaddr);

// Function: <EXTERNAL>::pthread_create @ 0x11360
extern int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*start_func)(void *), void *__arg);

// Function: <EXTERNAL>::fork @ 0x11370
extern __pid_t fork(void);

// Function: <EXTERNAL>::listen @ 0x11380
extern int listen(int __fd,int __n);

// Function: <EXTERNAL>::ftok @ 0x11390
extern key_t ftok(char *__pathname,int __proj_id);

// Function: <EXTERNAL>::socket @ 0x113a0
extern int socket(int __domain,int __type,int __protocol);

// Function: <EXTERNAL>::pthread_join @ 0x113b0
extern int pthread_join(pthread_t __th,void **__thread_return);

// Function: <EXTERNAL>::pthread_cancel @ 0x113c0
extern int pthread_cancel(pthread_t __th);

// Function: <EXTERNAL>::close @ 0x113d0
extern int close(int __fd);

// Function: FUN_000113e0 @ 0x113e0
void FUN_000113e0(void)
{
 return;
}



// Function: __i686.get_pc_thunk.bx @ 0x1141c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11420
void __x86_get_pc_thunk_bx(void)
{
 return;
}



// Function: __do_global_dtors_aux @ 0x114c0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x5c2f) == '\0') {
 if (*(int *)(unaff_EDI + 0x5b23) != 0) {
 ((void (*)(void))(*(void **)(unaff_EDI + 0x5c2b)))();
 }
 uVar1 = *(uint *)(unaff_EDI + 0x5c33);
 while (uVar1 < ((unaff_EDI + 0x5a4b) - (unaff_EDI + 0x5a47) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x5c33) = uVar1 + 1;
 (*((void (*)(void))(*(void **)(unaff_EDI + 0x5a47 + (uVar1 + 1) * 4))))();
 uVar1 = *(uint *)(unaff_EDI + 0x5c33);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x5c2f) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11559
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1155d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: param_strcpy @ 0x11570
void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x115b0
void call_strcpy(void)
{
 unsigned int local_24;
 unsigned int local_20;
 char local_1c;
 local_1c = 0;
 local_20 = 0x62694c6f;
 local_24 = 0x6c6c6548;
 strlen((char *)&local_24);
 return;
}

// Function: param_strcmp @ 0x115f0
int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = strcmp(param_1,param_2);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}

// Function: call_strcmp @ 0x11630
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x11640
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x11670
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x11680
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x116b0
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x116c0
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}

// Function: call_memcmp @ 0x11700
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = memcmp(&DAT_000143d8,&DAT_000143cc,0xc);
 iVar2 = memcmp(&DAT_000143d8,&DAT_000143d8,0xc);
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2 + iVar3;
}

// Function: param_printf @ 0x11770
void param_printf(unsigned int param_1,unsigned int param_2)
{
 printf("Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x117a0
void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_00014026);
 return;
}

// Function: param_scanf @ 0x117d0
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int local_c;
 int local_8;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_8,&local_c);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_c + local_8;
 }
 return iVar2;
}

// Function: call_scanf @ 0x11820
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x11870
int param_fopen_fclose(char *param_1)
{
 FILE *__stream;
 int iVar1;
 __stream = fopen(param_1,"r");
 if (__stream == (FILE *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = fileno(__stream);
 fclose(__stream);
 }
 return iVar1;
}

// Function: call_fopen_fclose @ 0x118c0
uint call_fopen_fclose(void)
{
 FILE *__stream;
 int iVar1;
 uint uVar2;
 __stream = fopen("/etc/passwd","r");
 if (__stream == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar2 = iVar1 >> 0x1f | 0x2a;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x11920
unsigned int param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned int uVar2;
 int iVar3;
 char local_30 [32];
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_30,1,0x12,__s);
 local_30[sVar1] = 0;
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 iVar3 = bcmp(local_30,"BinBench Test Data",0x13);
 uVar2 = 0xfffffffd;
 if (iVar3 == 0) {
 uVar2 = 0x2a;
 }
 }
 }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: call_fread_fwrite @ 0x11a00
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x11a30
int param_malloc_free(int param_1)
{
 int *__ptr;
 int iVar1;
 int iVar2;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 __ptr[iVar2] = iVar1;
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + 10;
 } while (param_1 != iVar2);
 }
 iVar1 = __ptr[param_1 + -1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x11a90
int call_malloc_free(void)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 100);
 iVar1 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: param_memset @ 0x11af0
int param_memset(void *param_1,size_t param_2)
{
 int iVar1;
 size_t sVar2;
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar1 = 0;
 }
 else {
 sVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + (uint)*(byte *)((int)param_1 + sVar2);
 sVar2 = sVar2 + 1;
 } while (param_2 != sVar2);
 }
 return iVar1;
}

// Function: call_memset @ 0x11b40
unsigned int call_memset(void)
{
 int iVar1;
 unsigned int local_28 [10];
 iVar1 = 0;
 do {
 local_28[iVar1] = 0xff;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 10);
 return 0;
}

// Function: param_strchr_strstr @ 0x11b70
int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,(int)param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x11bd0
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x11be0
void test_standard_library_functions(void)
{
 size_t sVar1;
 int iVar2;
 int iVar3;
 FILE *__stream;
 unsigned int uVar4;
 int *__ptr;
 int iVar5;
 int *piVar6;
 uint uVar7;
 int local_3c;
 int local_38 [2];
 char local_30;
 puts(&DAT_0001436c);
 local_30 = 0;
 local_38[1] = 0x62694c6f;
 local_38[0] = 0x6c6c6548;
 sVar1 = strlen((char *)local_38);
 printf(&DAT_00014074,sVar1);
 printf(&DAT_0001408f,0);
 printf(&DAT_000140aa,0xc);
 printf(&DAT_000140c6,0x5a);
 iVar2 = memcmp(&DAT_000143d8,&DAT_000143cc,0xc);
 iVar3 = memcmp(&DAT_000143d8,&DAT_000143d8,0xc);
 iVar5 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar5 = 1;
 }
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 printf(&DAT_000140e2,iVar3 + iVar5);
 iVar2 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00014026);
 printf(&DAT_000140fe,iVar2);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",local_38,&local_3c);
 local_3c = local_3c + local_38[0];
 iVar3 = -1;
 if (iVar2 != 2) {
 local_3c = -1;
 }
 printf(&DAT_0001411a,local_3c);
 __stream = fopen("/etc/passwd","r");
 uVar7 = 0xffffffff;
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar7 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_00014137,uVar7);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00014153,uVar4);
 __ptr = (int *)malloc(0x28);
 if (__ptr != (int *)0x0) {
 iVar2 = 0;
 piVar6 = __ptr;
 do {
 *piVar6 = iVar2;
 iVar2 = iVar2 + 10;
 piVar6 = piVar6 + 1;
 } while (iVar2 != 100);
 iVar3 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 printf(&DAT_0001416f,iVar3);
 iVar2 = 0;
 do {
 local_38[iVar2] = 0xff;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 10);
 printf(&DAT_0001418b,0);
 printf(&DAT_000141a6,0xf);
 return;
}

// Function: param_linux_syscall @ 0x11e60
__attribute__((regparm(1))) int param_linux_syscall(unsigned int param_1_00,unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 uVar4 = 0x11e68;
 uVar3 = 0;
 iVar1 = syscall(5,param_1,0,0x11e68,param_1_00);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3,uVar4,param_1_00);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x11eb0
uint call_linux_syscall(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 uVar4 = 0x11eb8;
 uVar3 = 0;
 iVar1 = syscall(5,"/etc/passwd",0,0x11eb8,param_1);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3,uVar4,param_1);
 }
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x11f10
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_5c;
 iVar1 = stat(param_1,&local_5c);
 uVar3 = 0xfffffffe;
 if (0 < local_5c.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x11f60
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_5c;
 iVar1 = stat("/etc/passwd",&local_5c);
 uVar3 = 0xfffffffe;
 if (0 < local_5c.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x11fb0
uint param_fork_exec(char *param_1,unsigned int param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_8;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_8,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_8 & 0x7f) == 0) {
 uVar2 = local_8 >> 8 & 0xff;
 }
 }
 }
 return uVar2;
}

// Function: call_fork_exec @ 0x12030
uint call_fork_exec(void)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_8;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_8,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_8 & 0x7f) == 0) {
 uVar2 = local_8 >> 8 & 0xff;
 }
 }
 }
 return -(uint)(uVar2 != 0) | 0x2a;
}

// Function: param_pipe_communication @ 0x120b0
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned int uVar4;
 int local_30;
 int local_2c;
 char local_28 [32];
 iVar1 = pipe(&local_30);
 if (iVar1 < 0) {
 uVar4 = 0xffffffff;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 uVar4 = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(local_30);
 write(local_2c,"HelloPipe",9);
 close(local_2c);
 _exit(0);
 }
 close(local_2c);
 sVar3 = read(local_30,local_28,0x1f);
 local_28[sVar3] = 0;
 close(local_30);
 wait((void *)0x0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 }
 }
 return uVar4;
}

// Function: call_pipe_communication @ 0x12190
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x121b0
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 unsigned int local_20;
 sockaddr local_1c;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_20 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_20,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 local_1c.sa_data[10] = '\0';
 local_1c.sa_data[11] = '\0';
 local_1c.sa_data[12] = '\0';
 local_1c.sa_data[13] = '\0';
 local_1c.sa_data[6] = '\0';
 local_1c.sa_data[7] = '\0';
 local_1c.sa_data[8] = '\0';
 local_1c.sa_data[9] = '\0';
 local_1c.sa_data[2] = '\0';
 local_1c.sa_data[3] = '\0';
 local_1c.sa_data[4] = '\0';
 local_1c.sa_data[5] = '\0';
 local_1c.sa_family = 2;
 local_1c.sa_data[0] = '\0';
 local_1c.sa_data[1] = '\0';
 iVar1 = bind(__fd,&local_1c,0x10);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xfffffffc;
 }
 }
 }
 }
 return uVar2;
}

// Function: call_socket_create @ 0x122a0
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x122c0
size_t param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned int *__s;
 size_t sVar2;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 sVar2 = 0xffffffff;
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 sVar2 = 0xfffffffe;
 }
 else {
 __s = (unsigned int *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned int *)0xffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 *(char *)(__s + 3) = 0;
 __s[2] = 0x79726f6d;
 __s[1] = 0x654d6465;
 *__s = 0x72616853;
 sVar2 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2;
}

// Function: call_shmget_shmat @ 0x123b0
unsigned int call_shmget_shmat(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0xffffffff;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x123e0
unsigned int param_signal_handling(void)
{
 bool bVar1;
 __sighandler_t p_Var2;
 unsigned int uVar3;
 uint uVar4;
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 uVar3 = 0xffffffff;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 uVar3 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 uVar4 = 1000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar1 = 1 < uVar4;
 uVar4 = uVar4 - 1;
 } while (bVar1);
 }
 if (signal_received == 0) {
 uVar3 = 0xfffffffd;
 }
 else {
 uVar3 = 0xfffffffc;
 if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 uVar4 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar1 = 1 < uVar4;
 uVar4 = uVar4 - 1;
 } while (bVar1);
 }
 uVar3 = 0xfffffffb;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar3 = 0x2a;
 }
 }
 }
 }
 }
 return uVar3;
}

// Function: FUN_00012545 @ 0x12545
void FUN_00012545(unsigned int param_1,unsigned int param_2)
{
 int unaff_retaddr;
 *(unsigned int *)(unaff_retaddr + 0x4bbf) = 1;
 *(unsigned int *)(unaff_retaddr + 0x4bc3) = param_2;
 return;
}

// Function: call_signal_handling @ 0x12570
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x12590
void test_system_calls(void)
{
 int iVar1;
 int *piVar2;
 __pid_t _Var3;
 uint uVar4;
 unsigned int uVar5;
 unsigned int uVar6;
 struct stat local_6c;
 puts(&DAT_00014390);
 uVar6 = 0;
 iVar1 = syscall(5,"/etc/passwd",0);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar6);
 }
 printf(&DAT_000141f5,iVar1 >> 0x1f | 0x2a);
 iVar1 = stat("/etc/passwd",&local_6c);
 uVar6 = 0xfffffffe;
 if (0 < local_6c.st_size) {
 uVar6 = 0x2a;
 }
 uVar5 = 0xffffffff;
 if (iVar1 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_00014211,uVar6);
 _Var3 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var3 = waitpid(_Var3,(int *)&local_6c,0);
 if (_Var3 < 0) {
 uVar4 = 0xfffffffe;
 }
 else {
 uVar4 = 0xfffffffd;
 if (((uint)local_6c.st_dev & 0x7f) == 0) {
 uVar4 = (uint)local_6c.st_dev >> 8 & 0xff;
 }
 }
 }
 printf(&DAT_0001422d,-(uint)(uVar4 != 0) | 0x2a);
 uVar6 = param_pipe_communication();
 printf(&DAT_00014249,uVar6);
 uVar6 = param_socket_create();
 printf(&DAT_00014265,uVar6);
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar5 = 0x2a;
 }
 printf(&DAT_00014281,uVar5);
 uVar6 = param_signal_handling();
 printf(&DAT_0001429d,uVar6);
 return;
}

// Function: thread_compute @ 0x12720
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x12750
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 unsigned int local_10;
 pthread_t local_c;
 local_10 = param_1;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x127c0
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 unsigned int local_10;
 pthread_t local_c;
 local_10 = 7;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 return uVar2;
}

// Function: thread_sum @ 0x12830
void *thread_sum(void *param_1)
{
 uint uVar1;
 uint uVar2;
 longlong lVar3;
 uint *p = (uint *)param_1;
 p[2] = 0;
 uVar1 = *p;
 uVar2 = p[1];
 if ((int)uVar1 <= (int)uVar2) {
 lVar3 = (ulonglong)(uVar2 + ~uVar1) * (ulonglong)(uVar2 - uVar1);
 p[2] = uVar1 + p[2] + (uVar1 + 1) * (uVar2 - uVar1) +
 ((int)((ulonglong)lVar3 >> 0x20) << 0x1f | (uint)lVar3 >> 1);
 }
 return NULL;
}

// Function: param_pthread_join @ 0x12870
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 unsigned int *__arg;
 int *piVar4;
 unsigned int local_44;
 unsigned int local_40;
 int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 pthread_t apStack_1c [3];
 local_24 = 0;
 local_30 = 0;
 local_3c = 0;
 local_44 = 1;
 local_40 = 10;
 local_38 = 0xb;
 local_34 = 0x14;
 local_2c = 0x15;
 local_28 = 0x1e;
 iVar3 = 0;
 __arg = &local_44;
 do {
 iVar1 = pthread_create((pthread_t *)((int)apStack_1c + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 __arg = __arg + 3;
 } while (iVar3 != 0xc);
 piVar4 = &local_3c;
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(apStack_1c[iVar3],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar4;
 iVar3 = iVar3 + 1;
 piVar4 = piVar4 + 3;
 } while (iVar3 != 3);
 return iVar1;
}

// Function: call_pthread_join @ 0x12950
int call_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 unsigned int *__arg;
 int *piVar4;
 unsigned int local_44;
 unsigned int local_40;
 int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 pthread_t apStack_1c [3];
 local_24 = 0;
 local_30 = 0;
 local_3c = 0;
 local_44 = 1;
 local_40 = 10;
 local_38 = 0xb;
 local_34 = 0x14;
 local_2c = 0x15;
 local_28 = 0x1e;
 iVar3 = 0;
 __arg = &local_44;
 do {
 iVar1 = pthread_create((pthread_t *)((int)apStack_1c + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 __arg = __arg + 3;
 } while (iVar3 != 0xc);
 piVar4 = &local_3c;
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(apStack_1c[iVar3],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar4;
 iVar3 = iVar3 + 1;
 piVar4 = piVar4 + 3;
 } while (iVar3 != 3);
 return iVar1;
}

// Function: thread_increment @ 0x12a30
void *thread_increment(void *param_1)
{
 int iVar1;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return NULL;
}

// Function: param_mutex_lock @ 0x12aa0
unsigned int param_mutex_lock(int param_1,int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 pthread_t *__newthread;
 int iVar3;
 __ptr = (pthread_t *)malloc(param_1 * 4);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 __newthread = __ptr;
 iVar3 = param_1;
 if (0 < param_1) {
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&param_2);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 iVar3 = iVar3 + -1;
 __newthread = __newthread + 1;
 } while (iVar3 != 0);
 }
 if (0 < param_1) {
 iVar3 = 0;
 do {
 pthread_join(__ptr[iVar3],(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == param_1 * param_2) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x12ba0
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x12bd0
void *consumer_thread(void *param_1)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 if (ready == '\0') {
 do {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 } while (ready != '\x01');
 }
 uVar2 = 0x2a;
 if (data == '\0') {
 uVar2 = 0;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar1 = (unsigned int *)malloc(4);
 *puVar1 = uVar2;
 return puVar1;
}

// Function: producer_thread @ 0x12c50
void *producer_thread(void *param_1)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return NULL;
}

// Function: param_condition_variable @ 0x12cb0
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_14;
 unsigned int *local_10;
 pthread_t local_c;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_10);
 pthread_join(local_c,(void **)0x0);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 pthread_cancel(local_14);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x12d60
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_increment @ 0x12d80
void *thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 if (0 < *(int *)param_1) {
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
 } while (iVar2 != *(int *)param_1);
 }
 return NULL;
}

// Function: FUN_00012dd5 @ 0x12dd5
unsigned int FUN_00012dd5(void)
{
 int unaff_retaddr;
 LOCK();
 *(int *)(unaff_retaddr + 0x4373) = *(int *)(unaff_retaddr + 0x4373) + 100;
 UNLOCK();
 return 0;
}

// Function: param_atomic_ops @ 0x12df0
unsigned int param_atomic_ops(int param_1, int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *__newthread;
 pthread_t local_14;
 __ptr = (pthread_t *)malloc(param_1 * 4);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 iVar3 = param_1;
 __newthread = __ptr;
 if (0 < param_1) {
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,
 &stack0x00000008);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 iVar3 = iVar3 + -1;
 __newthread = __newthread + 1;
 } while (iVar3 != 0);
 }
 iVar3 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_14,(void **)0x0);
 }
 if (0 < param_1) {
 iVar3 = 0;
 do {
 pthread_join(__ptr[iVar3],(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 iVar3 = atomic_counter;
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (0 < iVar3) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x12f00
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x12f30
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 static __thread int thread_local_value = 0;
 static __thread char thread_local_buf[32];
 iVar2 = thread_local_value;
 iVar1 = iVar2 + 0x32;
 thread_local_value = iVar1;
 strncpy(thread_local_buf,(char *)param_1,0x1f);
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return piVar3;
}

// Function: param_thread_local_storage @ 0x12f90
unsigned int param_thread_local_storage(int param_1)
{
 pthread_t *__ptr;
 void *__ptr_00;
 unsigned int uVar1;
 char *__s;
 int iVar2;
 pthread_t *__newthread;
 uint uVar3;
 int iVar4;
 uint uVar5;
 int *local_14;
 __ptr = (pthread_t *)malloc(param_1 * 4);
 __ptr_00 = malloc(param_1 * 4);
 uVar1 = 0xffffffff;
 if ((__ptr != (pthread_t *)0x0) && (__ptr_00 != (void *)0x0)) {
 if (0 < param_1) {
 iVar4 = 0;
 do {
 __s = (char *)malloc(0x10);
 *(char **)((int)__ptr_00 + iVar4 * 4) = __s;
 snprintf(__s,0x10,"Thread-%d",iVar4);
 iVar4 = iVar4 + 1;
 } while (param_1 != iVar4);
 }
 if (0 < param_1) {
 iVar4 = 0;
 __newthread = __ptr;
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((int)__ptr_00 + iVar4 * 4));
 if (iVar2 != 0) {
 iVar2 = -1;
 do {
 free(*(void **)((int)__ptr_00 + iVar2 * 4 + 4));
 iVar2 = iVar2 + 1;
 } while (iVar4 != iVar2);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 iVar4 = iVar4 + 1;
 __newthread = __newthread + 1;
 } while (param_1 != iVar4);
 }
 if (param_1 < 1) {
 uVar3 = 0;
 uVar5 = 0;
 }
 else {
 iVar4 = 0;
 uVar5 = 0;
 uVar3 = 0;
 do {
 pthread_join(__ptr[iVar4],&local_14);
 uVar3 = uVar3 + *local_14;
 uVar5 = uVar5 + local_14[1];
 free(local_14);
 free(*(void **)((int)__ptr_00 + iVar4 * 4));
 iVar4 = iVar4 + 1;
 } while (param_1 != iVar4);
 }
 free(__ptr_00);
 free(__ptr);
 uVar1 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar5 | param_1 * 100 ^ uVar3) == 0) {
 uVar1 = 0x2a;
 }
 }
 return uVar1;
}

// Function: call_thread_local_storage @ 0x13150
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x13180
void test_thread_concurrency(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 pthread_t *__newthread;
 unsigned int uVar4;
 int *piVar5;
 unsigned int *local_48;
 pthread_t local_44;
 unsigned int local_40;
 int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 pthread_t local_1c [3];
 puts(&DAT_000143ab);
 local_1c[0] = 7;
 __newthread = &local_44;
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_compute,local_1c);
 uVar4 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_44,&local_48);
 uVar4 = *local_48;
 free(local_48);
 }
 printf(&DAT_000142c3,uVar4);
 local_24 = 0;
 local_30 = 0;
 local_3c = 0;
 local_44 = 1;
 local_40 = 10;
 local_38 = 0xb;
 local_34 = 0x14;
 local_2c = 0x15;
 local_28 = 0x1e;
 iVar1 = 0;
 do {
 iVar2 = pthread_create((pthread_t *)((int)local_1c + iVar1),(pthread_attr_t *)0x0,thread_sum,
 __newthread);
 if (iVar2 != 0) {
 iVar1 = -1;
 goto LAB_000132c0;
 }
 iVar1 = iVar1 + 4;
 __newthread = __newthread + 3;
 } while (iVar1 != 0xc);
 piVar5 = &local_3c;
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar3 = pthread_join(local_1c[iVar2],(void **)0x0);
 if (iVar3 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = iVar1 + *piVar5;
 iVar2 = iVar2 + 1;
 piVar5 = piVar5 + 3;
 } while (iVar2 != 3);
LAB_000132c0:
 printf(&DAT_000142df,iVar1);
 uVar4 = param_mutex_lock(4,1000);
 printf(&DAT_000142fc,uVar4);
 uVar4 = param_condition_variable();
 printf(&DAT_00014318,uVar4);
 uVar4 = param_atomic_ops(4,500);
 printf(&DAT_00014334,uVar4);
 uVar4 = param_thread_local_storage(4);
 printf(&DAT_00014350,uVar4);
 return;
}

// Function: main @ 0x13350
int main(int argc, char **argv, char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x13380
void __do_global_ctors_aux(void)
{
 return;
}



