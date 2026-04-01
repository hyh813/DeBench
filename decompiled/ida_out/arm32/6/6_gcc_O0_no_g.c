/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/6/6_gcc_O0_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10CAC */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_10CB8 @ 0x10CB8 */
void sub_10CB8()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x10FB0 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main(
    *(int (**)(int, char **, char **))((char *)&locret_14118 + (_DWORD)&off_10FEC),
    v4,
    (char **)va,
    0,
    0,
    a1,
    va);
  abort();
}


/* Function: call_weak_fn @ 0x10FF4 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x11018 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x11044 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x1107C */
char *_do_global_dtors_aux()
{
  char *result; // r0

  if ( !_bss_start )
  {
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x110A4 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_strcpy @ 0x110A8 */
size_t __fastcall param_strcpy(char *a1, const char *a2)
{
  strcpy(a1, a2);
  return strlen(a1);
}


/* Function: call_strcpy @ 0x110E0 */
size_t call_strcpy()
{
  char v1[32]; // [sp+4h] [bp-28h] BYREF

  return param_strcpy(v1, "HelloLib");
}


/* Function: param_strcmp @ 0x11144 */
int __fastcall param_strcmp(const char *a1, const char *a2)
{
  int v4; // [sp+Ch] [bp-8h]

  v4 = strcmp(a1, a2);
  if ( v4 > 0 )
    return 1;
  if ( v4 >= 0 )
    return 0;
  return -1;
}


/* Function: call_strcmp @ 0x111A0 */
int call_strcmp()
{
  int v1; // [sp+4h] [bp-10h]
  int v2; // [sp+8h] [bp-Ch]

  v1 = param_strcmp("abc", "def");
  v2 = param_strcmp("xyz", "xyz");
  return v1 + v2 + param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x11210 */
size_t __fastcall param_strlen(const char *a1)
{
  return strlen(a1);
}


/* Function: call_strlen @ 0x1123C */
size_t call_strlen()
{
  return param_strlen("BinBench2025");
}


/* Function: param_memcpy @ 0x1126C */
size_t __fastcall param_memcpy(void *a1, const void *a2, size_t a3)
{
  memcpy(a1, a2, a3);
  return a3;
}


/* Function: call_memcpy @ 0x112A4 */
int call_memcpy()
{
  _DWORD v1[5]; // [sp+4h] [bp-30h] BYREF
  _DWORD v2[2]; // [sp+18h] [bp-1Ch] BYREF
  int v3; // [sp+20h] [bp-14h]
  int v4; // [sp+24h] [bp-10h]
  int v5; // [sp+28h] [bp-Ch]

  v1[0] = *(_DWORD *)"\n";
  v1[1] = 20;
  v1[2] = 30;
  v1[3] = 40;
  v1[4] = 50;
  v2[0] = 0;
  v2[1] = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  param_memcpy(v2, v1, 0x14u);
  return v2[0] + v3 + v5;
}


/* Function: param_memcmp @ 0x11350 */
int __fastcall param_memcmp(const void *a1, const void *a2, size_t a3)
{
  int v5; // [sp+14h] [bp-8h]

  v5 = memcmp(a1, a2, a3);
  if ( v5 > 0 )
    return 1;
  if ( v5 >= 0 )
    return 0;
  return -1;
}


/* Function: call_memcmp @ 0x113B4 */
int call_memcmp()
{
  int v1; // [sp+0h] [bp-34h]
  _DWORD v2[3]; // [sp+8h] [bp-2Ch] BYREF
  _DWORD v3[3]; // [sp+14h] [bp-20h] BYREF
  _DWORD v4[3]; // [sp+20h] [bp-14h] BYREF

  v2[0] = 1;
  v2[1] = 2;
  v2[2] = 3;
  v3[0] = 1;
  v3[1] = 2;
  v3[2] = 4;
  v4[0] = 1;
  v4[1] = 2;
  v4[2] = 3;
  v1 = param_memcmp(v2, v3, 0xCu);
  return v1 + param_memcmp(v2, v4, 0xCu);
}


/* Function: param_printf @ 0x11470 */
int __fastcall param_printf(int a1, const char *a2)
{
  return printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x114AC */
int call_printf()
{
  return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x114DC */
int __fastcall param_scanf(int a1)
{
  int v3; // [sp+8h] [bp-14h] BYREF
  int v4; // [sp+Ch] [bp-10h] BYREF
  int v5; // [sp+10h] [bp-Ch]

  v5 = _isoc99_sscanf(a1, "%d,%d", &v3, &v4);
  if ( v5 == 2 )
    return v3 + v4;
  else
    return -1;
}


/* Function: call_scanf @ 0x11564 */
int call_scanf()
{
  return param_scanf((int)"123,456");
}


/* Function: param_fopen_fclose @ 0x11584 */
int __fastcall param_fopen_fclose(const char *a1)
{
  FILE *stream; // [sp+8h] [bp-Ch]
  int v4; // [sp+Ch] [bp-8h]

  stream = fopen(a1, "r");
  if ( !stream )
    return -1;
  v4 = fileno(stream);
  fclose(stream);
  return v4;
}


/* Function: call_fopen_fclose @ 0x115E4 */
int call_fopen_fclose()
{
  if ( param_fopen_fclose("/etc/passwd") < 0 )
    return -1;
  else
    return 42;
}


/* Function: param_fread_fwrite @ 0x11624 */
int __fastcall param_fread_fwrite(const char *a1)
{
  size_t v2; // r0
  FILE *stream; // [sp+10h] [bp-34h]
  size_t n; // [sp+14h] [bp-30h]
  size_t v7; // [sp+18h] [bp-2Ch]
  char ptr[32]; // [sp+1Ch] [bp-28h] BYREF

  stream = fopen(a1, "w+");
  if ( !stream )
    return -1;
  v2 = strlen("BinBench Test Data");
  n = fwrite("BinBench Test Data", 1u, v2, stream);
  if ( n == strlen("BinBench Test Data") )
  {
    rewind(stream);
    v7 = fread(ptr, 1u, n, stream);
    ptr[v7] = 0;
    fclose(stream);
    unlink(a1);
    if ( v7 == n && !strcmp(ptr, "BinBench Test Data") )
      return 42;
    else
      return -3;
  }
  else
  {
    fclose(stream);
    return -2;
  }
}


/* Function: call_fread_fwrite @ 0x1176C */
int call_fread_fwrite()
{
  return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1178C */
int __fastcall param_malloc_free(unsigned int a1)
{
  unsigned int i; // [sp+Ch] [bp-10h]
  _DWORD *ptr; // [sp+10h] [bp-Ch]
  int v6; // [sp+14h] [bp-8h]

  ptr = malloc(4 * a1);
  if ( !ptr )
    return -1;
  for ( i = 0; i < a1; ++i )
    ptr[i] = 10 * i;
  v6 = *ptr + ptr[a1 - 1];
  free(ptr);
  return v6;
}


/* Function: call_malloc_free @ 0x11868 */
int call_malloc_free()
{
  return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x11884 */
int __fastcall param_memset(unsigned __int8 *a1, size_t a2)
{
  int v5; // [sp+Ch] [bp-10h]
  size_t i; // [sp+10h] [bp-Ch]

  memset(a1, 0, a2);
  v5 = 0;
  for ( i = 0; i < a2; ++i )
    v5 += a1[i];
  return v5;
}


/* Function: call_memset @ 0x11910 */
int call_memset()
{
  int i; // [sp+0h] [bp-34h]
  _DWORD v2[10]; // [sp+4h] [bp-30h] BYREF

  for ( i = 0; i <= 9; ++i )
    v2[i] = 255;
  param_memset((unsigned __int8 *)v2, 0x28u);
  return v2[0] + v2[9];
}


/* Function: param_strchr_strstr @ 0x119B0 */
int __fastcall param_strchr_strstr(const char *a1, unsigned __int8 a2, const char *a3)
{
  int v3; // r3
  int v4; // r3
  char *v8; // [sp+10h] [bp-14h]
  int v9; // [sp+14h] [bp-10h]
  char *v10; // [sp+18h] [bp-Ch]

  v8 = strchr(a1, a2);
  if ( v8 )
    v3 = v8 - a1;
  else
    v3 = -1;
  v9 = v3;
  v10 = strstr(a1, a3);
  if ( v10 )
    v4 = v10 - a1;
  else
    v4 = -1;
  return v9 + v4;
}


/* Function: call_strchr_strstr @ 0x11A50 */
int call_strchr_strstr()
{
  return param_strchr_strstr("Hello BinBench Test", 0x42u, "Bench");
}


/* Function: test_standard_library_functions @ 0x11A90 */
int test_standard_library_functions()
{
  size_t v0; // r0
  int v1; // r0
  size_t v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0

  puts(s);
  v0 = call_strcpy();
  printf(aLibL101D, v0);
  v1 = call_strcmp();
  printf(aLibL102D, v1);
  v2 = call_strlen();
  printf(aLibL103D, v2);
  v3 = call_memcpy();
  printf(aLibL104D, v3);
  v4 = call_memcmp();
  printf(aLibL105D, v4);
  v5 = call_printf();
  printf(aLibL106D, v5);
  v6 = call_scanf();
  printf(aLibL107D, v6);
  v7 = call_fopen_fclose();
  printf(aLibL108D, v7);
  v8 = call_fread_fwrite();
  printf(aLibL109D, v8);
  v9 = call_malloc_free();
  printf(aLibL110D, v9);
  v10 = call_memset();
  printf(aLibL111D, v10);
  v11 = call_strchr_strstr();
  return printf(aLibL112D, v11);
}


/* Function: param_linux_syscall @ 0x11BCC */
int __fastcall param_linux_syscall(int a1)
{
  int v3; // [sp+Ch] [bp-8h]

  v3 = syscall(5, a1, 0);
  if ( v3 < 0 )
    return -*_errno_location();
  syscall(6, v3);
  return v3;
}


/* Function: call_linux_syscall @ 0x11C2C */
int call_linux_syscall()
{
  if ( param_linux_syscall((int)"/etc/passwd") < 0 )
    return -1;
  else
    return 42;
}


/* Function: param_win32_api @ 0x11C6C */
int __fastcall param_win32_api(const char *a1)
{
  stat buf; // [sp+8h] [bp-64h] BYREF

  if ( stat(a1, &buf) < 0 )
    return -1;
  if ( buf.st_size <= 0 )
    return -2;
  return 42;
}


/* Function: call_win32_api @ 0x11CF4 */
int call_win32_api()
{
  return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x11D14 */
int __fastcall param_fork_exec(const char *a1, int a2)
{
  int stat_loc; // [sp+8h] [bp-14h] BYREF
  __pid_t pid; // [sp+Ch] [bp-10h]
  __pid_t v8; // [sp+10h] [bp-Ch]

  pid = fork();
  if ( pid < 0 )
    return -1;
  if ( !pid )
  {
    execl(a1, a1, a2, 0);
    exit(127);
  }
  v8 = waitpid(pid, &stat_loc, 0);
  if ( v8 < 0 )
    return -2;
  if ( (stat_loc & 0x7F) != 0 )
    return -3;
  return BYTE1(stat_loc);
}


/* Function: call_fork_exec @ 0x11DFC */
int call_fork_exec()
{
  if ( param_fork_exec("/bin/true", 0) )
    return -1;
  else
    return 42;
}


/* Function: param_pipe_communication @ 0x11E40 */
int param_pipe_communication()
{
  size_t v1; // r0
  __pid_t v3; // [sp+0h] [bp-44h]
  ssize_t v4; // [sp+4h] [bp-40h]
  int pipedes[2]; // [sp+Ch] [bp-38h] BYREF
  _BYTE buf[32]; // [sp+14h] [bp-30h] BYREF

  if ( pipe(pipedes) < 0 )
    return -1;
  v3 = fork();
  if ( v3 < 0 )
    return -2;
  if ( !v3 )
  {
    close(pipedes[0]);
    v1 = strlen("HelloPipe");
    write(pipedes[1], "HelloPipe", v1);
    close(pipedes[1]);
    exit(0);
  }
  close(pipedes[1]);
  v4 = read(pipedes[0], buf, 0x1Fu);
  buf[v4] = 0;
  close(pipedes[0]);
  wait(0);
  if ( v4 <= 0 )
    return -3;
  else
    return 42;
}


/* Function: call_pipe_communication @ 0x11F84 */
int call_pipe_communication()
{
  return param_pipe_communication();
}


/* Function: param_socket_create @ 0x11F9C */
int param_socket_create()
{
  int optval; // [sp+Ch] [bp-20h] BYREF
  int fd; // [sp+10h] [bp-1Ch]
  struct sockaddr s; // [sp+14h] [bp-18h] BYREF

  fd = socket(2, 1, 0);
  if ( fd < 0 )
    return -1;
  optval = 1;
  if ( setsockopt(fd, 1, 2, &optval, 4u) >= 0 )
  {
    memset(&s, 0, sizeof(s));
    s.sa_family = 2;
    *(_WORD *)s.sa_data = htons(0);
    *(_DWORD *)&s.sa_data[2] = 0;
    if ( bind(fd, &s, 0x10u) >= 0 )
    {
      if ( listen(fd, 5) >= 0 )
      {
        close(fd);
        return 42;
      }
      else
      {
        close(fd);
        return -4;
      }
    }
    else
    {
      close(fd);
      return -3;
    }
  }
  else
  {
    close(fd);
    return -2;
  }
}


/* Function: call_socket_create @ 0x120E4 */
int call_socket_create()
{
  return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x120FC */
int param_shmget_shmat()
{
  int fd; // [sp+4h] [bp-18h]
  key_t v3; // [sp+8h] [bp-14h]
  int v4; // [sp+Ch] [bp-10h]
  char *dest; // [sp+10h] [bp-Ch]
  size_t v6; // [sp+14h] [bp-8h]

  fd = open("/tmp/binbench_shm", 66, 438);
  if ( fd < 0 )
    return -1;
  close(fd);
  v3 = ftok("/tmp/binbench_shm", 42);
  if ( v3 < 0 )
    return -1;
  v4 = shmget(v3, 4096, 950);
  if ( v4 < 0 )
    return -2;
  dest = (char *)shmat(v4, 0, 0);
  if ( dest == (char *)-1 )
    return -3;
  strcpy(dest, "SharedMemory");
  v6 = strlen(dest);
  shmdt(dest);
  shmctl(v4, 0, 0);
  return v6;
}


/* Function: call_shmget_shmat @ 0x12218 */
int call_shmget_shmat()
{
  if ( param_shmget_shmat() <= 0 )
    return -1;
  else
    return 42;
}


/* Function: signal_handler @ 0x12250 */
void __fastcall signal_handler(int a1)
{
  signal_received = 1;
  signal_number = a1;
}


/* Function: param_signal_handling @ 0x12290 */
int param_signal_handling()
{
  int v1; // r3
  int v2; // r3
  int v4; // [sp+4h] [bp-8h]
  int v5; // [sp+4h] [bp-8h]

  if ( signal(10, signal_handler) == (__sighandler_t)-1 )
    return -1;
  if ( signal(14, signal_handler) == (__sighandler_t)-1 )
    return -2;
  signal_received = 0;
  raise(10);
  v4 = 1000;
  while ( !signal_received )
  {
    v1 = v4--;
    if ( v1 <= 0 )
      break;
    usleep(0x3E8u);
  }
  if ( !signal_received )
    return -3;
  if ( signal_number != 10 )
    return -4;
  signal_received = 0;
  alarm(1u);
  v5 = 2000;
  while ( !signal_received )
  {
    v2 = v5--;
    if ( v2 <= 0 )
      break;
    usleep(0x3E8u);
  }
  if ( !signal_received || signal_number != 14 )
    return -5;
  signal(10, 0);
  signal(14, 0);
  return 42;
}


/* Function: call_signal_handling @ 0x12400 */
int call_signal_handling()
{
  return param_signal_handling();
}


/* Function: test_system_calls @ 0x12418 */
int test_system_calls()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0

  puts(asc_14620);
  v0 = call_linux_syscall();
  printf(aSysL301D, v0);
  v1 = call_win32_api();
  printf(aSysL302D, v1);
  v2 = call_fork_exec();
  printf(aSysL303D, v2);
  v3 = call_pipe_communication();
  printf(aSysL304D, v3);
  v4 = call_socket_create();
  printf(aSysL305D, v4);
  v5 = call_shmget_shmat();
  printf(aSysL306D, v5);
  v6 = call_signal_handling();
  return printf(aSysL307D, v6);
}


/* Function: thread_compute @ 0x124DC */
_DWORD *__fastcall thread_compute(_DWORD *a1)
{
  _DWORD *result; // r0
  int v2; // [sp+10h] [bp-Ch]

  v2 = *a1 * *a1;
  result = malloc(4u);
  *result = v2;
  return result;
}


/* Function: param_pthread_create @ 0x12540 */
int __fastcall param_pthread_create(int a1)
{
  pthread_t newthread; // [sp+8h] [bp-1Ch] BYREF
  int arg; // [sp+Ch] [bp-18h] BYREF
  void *thread_return; // [sp+10h] [bp-14h] BYREF
  int v7; // [sp+18h] [bp-Ch]

  arg = a1;
  if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
    return -1;
  pthread_join(newthread, &thread_return);
  v7 = *(_DWORD *)thread_return;
  free(thread_return);
  return v7;
}


/* Function: call_pthread_create @ 0x125F4 */
int call_pthread_create()
{
  return param_pthread_create(7);
}


/* Function: thread_sum @ 0x12610 */
void *__fastcall thread_sum(int *a1)
{
  int i; // [sp+8h] [bp-Ch]

  a1[2] = 0;
  for ( i = *a1; i <= a1[1]; ++i )
    a1[2] += i;
  return 0;
}


/* Function: param_pthread_join @ 0x12690 */
int param_pthread_join()
{
  int i; // [sp+0h] [bp-44h]
  int v3; // [sp+4h] [bp-40h]
  int j; // [sp+8h] [bp-3Ch]
  pthread_t v5[3]; // [sp+Ch] [bp-38h] BYREF
  _DWORD v6[3]; // [sp+18h] [bp-2Ch] BYREF
  _DWORD v7[6]; // [sp+24h] [bp-20h]

  v6[0] = 1;
  v6[1] = 10;
  v6[2] = 0;
  v7[0] = 11;
  v7[1] = 20;
  v7[2] = 0;
  v7[3] = 21;
  v7[4] = 30;
  v7[5] = 0;
  for ( i = 0; i <= 2; ++i )
  {
    if ( pthread_create(&v5[i], 0, (void *(*)(void *))thread_sum, &v6[3 * i]) )
      return -1;
  }
  v3 = 0;
  for ( j = 0; j <= 2; ++j )
  {
    if ( pthread_join(v5[j], 0) )
      return -2;
    v3 += v7[3 * j - 1];
  }
  return v3;
}


/* Function: call_pthread_join @ 0x12808 */
int call_pthread_join()
{
  return param_pthread_join();
}


/* Function: thread_increment @ 0x12820 */
void *__fastcall thread_increment(int *a1)
{
  int i; // [sp+8h] [bp-Ch]
  int v3; // [sp+Ch] [bp-8h]

  v3 = *a1;
  for ( i = 0; i < v3; ++i )
  {
    pthread_mutex_lock(&counter_mutex);
    ++shared_counter;
    pthread_mutex_unlock(&counter_mutex);
    usleep(0x3E8u);
  }
  return 0;
}


/* Function: param_mutex_lock @ 0x128A8 */
int __fastcall param_mutex_lock(int a1, int a2)
{
  int arg; // [sp+0h] [bp-1Ch] BYREF
  int v5; // [sp+4h] [bp-18h]
  int i; // [sp+8h] [bp-14h]
  int j; // [sp+Ch] [bp-10h]
  void *ptr; // [sp+10h] [bp-Ch]
  int v9; // [sp+14h] [bp-8h]

  v5 = a1;
  arg = a2;
  ptr = malloc(4 * a1);
  if ( !ptr )
    return -1;
  shared_counter = 0;
  for ( i = 0; i < v5; ++i )
  {
    if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_increment, &arg) )
    {
      free(ptr);
      return -2;
    }
  }
  for ( j = 0; j < v5; ++j )
    pthread_join(*((_DWORD *)ptr + j), 0);
  free(ptr);
  v9 = arg * v5;
  if ( arg * v5 == shared_counter )
    return 42;
  else
    return -3;
}


/* Function: call_mutex_lock @ 0x129EC */
int call_mutex_lock()
{
  return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x12A0C */
_DWORD *__fastcall consumer_thread(void *a1)
{
  _DWORD *result; // r0
  int v2; // [sp+8h] [bp-Ch]

  pthread_mutex_lock(&cond_mutex);
  while ( !ready )
    pthread_cond_wait(&cond, &cond_mutex);
  v2 = data;
  pthread_mutex_unlock(&cond_mutex);
  result = malloc(4u);
  *result = v2;
  return result;
}


/* Function: producer_thread @ 0x12A94 */
void *__fastcall producer_thread(void *a1)
{
  sleep(1u);
  pthread_mutex_lock(&cond_mutex);
  data = 42;
  ready = 1;
  pthread_cond_signal(&cond);
  pthread_mutex_unlock(&cond_mutex);
  return 0;
}


/* Function: param_condition_variable @ 0x12AFC */
int param_condition_variable()
{
  pthread_t th; // [sp+4h] [bp-18h] BYREF
  pthread_t newthread; // [sp+8h] [bp-14h] BYREF
  void *thread_return; // [sp+Ch] [bp-10h] BYREF
  int v5; // [sp+10h] [bp-Ch]

  ready = 0;
  data = 0;
  if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
    return -1;
  if ( pthread_create(&th, 0, producer_thread, 0) )
  {
    pthread_cancel(newthread);
    return -2;
  }
  else
  {
    pthread_join(newthread, &thread_return);
    pthread_join(th, 0);
    v5 = *(_DWORD *)thread_return;
    free(thread_return);
    return v5;
  }
}


/* Function: call_condition_variable @ 0x12C08 */
int call_condition_variable()
{
  return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x12C20 */
void *__fastcall thread_atomic_increment(int *a1)
{
  int i; // [sp+10h] [bp-1Ch]
  int v3; // [sp+14h] [bp-18h]

  v3 = *a1;
  for ( i = 0; i < v3; ++i )
  {
    _sync_fetch_and_add_4(&atomic_counter, 1);
    _sync_val_compare_and_swap_4(&atomic_counter, i, i + 1000);
  }
  return 0;
}


/* Function: thread_atomic_load_store @ 0x12D04 */
void *__fastcall thread_atomic_load_store(void *a1)
{
  int v1; // r0
  int v2; // r4
  int v3; // r0
  int v4; // r0

  v1 = ((int (*)(void))_sync_synchronize)();
  v2 = atomic_counter;
  v3 = _sync_synchronize(v1);
  v4 = _sync_synchronize(v3);
  atomic_counter = v2 + 100;
  _sync_synchronize(v4);
  return 0;
}


/* Function: param_atomic_ops @ 0x12D58 */
int __fastcall param_atomic_ops(int a1, int a2)
{
  void *v2; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r4
  int arg; // [sp+0h] [bp-2Ch] BYREF
  int v10; // [sp+4h] [bp-28h]
  pthread_t newthread; // [sp+8h] [bp-24h] BYREF
  int i; // [sp+Ch] [bp-20h]
  int j; // [sp+10h] [bp-1Ch]
  void *ptr; // [sp+14h] [bp-18h]
  int v15; // [sp+18h] [bp-14h]

  v10 = a1;
  arg = a2;
  v2 = malloc(4 * a1);
  ptr = v2;
  if ( !v2 )
    return -1;
  v4 = _sync_synchronize(v2);
  atomic_counter = 0;
  _sync_synchronize(v4);
  for ( i = 0; i < v10; ++i )
  {
    if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
    {
      free(ptr);
      return -2;
    }
  }
  v5 = pthread_create(&newthread, 0, thread_atomic_load_store, 0);
  if ( !v5 )
    v5 = pthread_join(newthread, 0);
  for ( j = 0; j < v10; ++j )
    v5 = pthread_join(*((_DWORD *)ptr + j), 0);
  v6 = _sync_synchronize(v5);
  v7 = atomic_counter;
  _sync_synchronize(v6);
  v15 = v7;
  free(ptr);
  if ( v15 <= 0 )
    return -3;
  else
    return 42;
}


/* Function: call_atomic_ops @ 0x12F04 */
int call_atomic_ops()
{
  return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x12F24 */
_DWORD *__fastcall thread_tls_test(const char *a1)
{
  int v2; // [sp+10h] [bp-Ch]
  _DWORD *v3; // [sp+14h] [bp-8h]

  v2 = unk_251A0;
  unk_251A0 += 50;
  strncpy(byte_251A4, a1, 0x1Fu);
  v3 = malloc(8u);
  *v3 = v2;
  v3[1] = unk_251A0;
  return v3;
}


/* Function: param_thread_local_storage @ 0x12FE4 */
int __fastcall param_thread_local_storage(int a1)
{
  void *thread_return; // [sp+Ch] [bp-40h] BYREF
  int i; // [sp+10h] [bp-3Ch]
  int j; // [sp+14h] [bp-38h]
  int k; // [sp+18h] [bp-34h]
  int v8; // [sp+1Ch] [bp-30h]
  int v9; // [sp+20h] [bp-2Ch]
  int m; // [sp+24h] [bp-28h]
  void *v11; // [sp+28h] [bp-24h]
  void *ptr; // [sp+2Ch] [bp-20h]
  int v13; // [sp+30h] [bp-1Ch]
  int v14; // [sp+34h] [bp-18h]
  void *v15; // [sp+38h] [bp-14h]

  v11 = malloc(4 * a1);
  ptr = malloc(4 * a1);
  if ( !v11 || !ptr )
    return -1;
  for ( i = 0; i < a1; ++i )
  {
    *((_DWORD *)ptr + i) = malloc(0x10u);
    snprintf(*((char **)ptr + i), 0x10u, "Thread-%d", i);
  }
  for ( j = 0; j < a1; ++j )
  {
    if ( pthread_create((pthread_t *)v11 + j, 0, (void *(*)(void *))thread_tls_test, *((void **)ptr + j)) )
    {
      for ( k = 0; k <= j; ++k )
        free(*((void **)ptr + k));
      free(ptr);
      free(v11);
      return -2;
    }
  }
  v8 = 0;
  v9 = 0;
  for ( m = 0; m < a1; ++m )
  {
    pthread_join(*((_DWORD *)v11 + m), &thread_return);
    v15 = thread_return;
    v8 += *(_DWORD *)thread_return;
    v9 += *((_DWORD *)thread_return + 1);
    free(thread_return);
    free(*((void **)ptr + m));
  }
  free(ptr);
  free(v11);
  v13 = 100 * a1;
  v14 = 150 * a1;
  if ( v8 == 100 * a1 && v9 == v14 )
    return 42;
  else
    return -3;
}


/* Function: call_thread_local_storage @ 0x132E8 */
int call_thread_local_storage()
{
  return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x13304 */
int test_thread_concurrency()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  puts(asc_14730);
  v0 = call_pthread_create();
  printf(aThrL301D, v0);
  v1 = call_pthread_join();
  printf(aThrL302D, v1);
  v2 = call_mutex_lock();
  printf(aThrL303D, v2);
  v3 = call_condition_variable();
  printf(aThrL304D, v3);
  v4 = call_atomic_ops();
  printf(aThrL305D, v4);
  v5 = call_thread_local_storage();
  return printf(aThrL306D, v5);
}


/* Function: main @ 0x133B0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}


/* Function: __sync_fetch_and_add_4 @ 0x133D0 */
int __fastcall _sync_fetch_and_add_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x13408 */
int __fastcall _sync_fetch_and_sub_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 - a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x13440 */
int __fastcall _sync_fetch_and_or_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 | a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x13478 */
int __fastcall _sync_fetch_and_and_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 & a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x134B0 */
int __fastcall _sync_fetch_and_xor_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x134E8 */
int __fastcall _sync_fetch_and_nand_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, ~(*a1 & a2), a1) );
  return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x13524 */
int __fastcall _sync_fetch_and_add_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x13584 */
int __fastcall _sync_fetch_and_sub_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x135E4 */
int __fastcall _sync_fetch_and_or_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x13644 */
int __fastcall _sync_fetch_and_and_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x136A4 */
int __fastcall _sync_fetch_and_xor_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x13704 */
int __fastcall _sync_fetch_and_nand_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x13768 */
int __fastcall _sync_fetch_and_add_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x137C4 */
int __fastcall _sync_fetch_and_sub_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x13820 */
int __fastcall _sync_fetch_and_or_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x1387C */
int __fastcall _sync_fetch_and_and_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x138D8 */
int __fastcall _sync_fetch_and_xor_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x13934 */
int __fastcall _sync_fetch_and_nand_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x13994 */
int __fastcall _sync_add_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 + a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x139CC */
int __fastcall _sync_sub_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 - a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x13A04 */
int __fastcall _sync_or_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 | a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x13A3C */
int __fastcall _sync_and_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 & a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x13A74 */
int __fastcall _sync_xor_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 ^ a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x13AAC */
int __fastcall _sync_nand_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = ~(*a1 & a2);
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x13AE8 */
int __fastcall _sync_add_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x13B50 */
int __fastcall _sync_sub_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x13BB8 */
int __fastcall _sync_or_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x13C20 */
int __fastcall _sync_and_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x13C88 */
int __fastcall _sync_xor_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x13CF0 */
int __fastcall _sync_nand_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ (~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x13D5C */
int __fastcall _sync_add_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x13DC0 */
int __fastcall _sync_sub_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x13E24 */
int __fastcall _sync_or_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x13E88 */
int __fastcall _sync_and_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x13EEC */
int __fastcall _sync_xor_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x13F50 */
int __fastcall _sync_nand_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ (~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x13FB8 */
int __fastcall _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
  while ( *(_DWORD *)a1 == a2 )
  {
    if ( !MEMORY[0xFFFF0FC0](a2, a3, a1) )
      return a2;
  }
  return *(_DWORD *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x14008 */
int __fastcall _sync_val_compare_and_swap_2(int a1, int a2, int a3)
{
  char v4; // r5
  int v5; // r10
  _DWORD *v6; // r4
  int v7; // r9
  int v8; // r7
  unsigned int v9; // r3

  v4 = (8 * a1) & 0x18;
  v5 = 0xFFFF << v4;
  v6 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v7 = a3 << v4;
  v8 = (unsigned __int16)a2;
  while ( 1 )
  {
    v9 = ((unsigned int)v5 & *v6) >> v4;
    if ( v9 != v8 )
      break;
    if ( !MEMORY[0xFFFF0FC0](*v6, (v7 ^ *v6) & v5 ^ *v6, v6) )
      return a2;
  }
  return (__int16)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x14080 */
int __fastcall _sync_val_compare_and_swap_1(int a1, int a2, int a3)
{
  char v4; // r5
  _DWORD *v5; // r4
  int v6; // r7
  int v7; // r9
  int v8; // r10
  unsigned int v9; // r3

  v4 = (8 * a1) & 0x18;
  v5 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v6 = 255 << v4;
  v7 = a3 << v4;
  v8 = (unsigned __int8)a2;
  while ( 1 )
  {
    v9 = ((unsigned int)v6 & *v5) >> v4;
    if ( v9 != v8 )
      break;
    if ( !MEMORY[0xFFFF0FC0](*v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
      return a2;
  }
  return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x140F4 */
bool __fastcall _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
  return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x14120 */
bool __fastcall _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x1413C */
bool __fastcall _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x14164 */
int __fastcall _sync_lock_test_and_set_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
  return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x1419C */
int __fastcall _sync_lock_test_and_set_2(int a1, int a2)
{
  char v2; // r9
  unsigned int *v3; // r5
  int v4; // r6
  int v5; // r7
  unsigned int v6; // r4

  v2 = (8 * a1) & 0x18;
  v3 = (unsigned int *)(a1 & 0xFFFFFFFC);
  v4 = 0xFFFF << v2;
  v5 = a2 << v2;
  do
    v6 = *v3;
  while ( MEMORY[0xFFFF0FC0](*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
  return (__int16)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x141FC */
int __fastcall _sync_lock_test_and_set_1(int a1, int a2)
{
  char v2; // r9
  unsigned int *v3; // r5
  int v4; // r6
  int v5; // r7
  unsigned int v6; // r4

  v2 = (8 * a1) & 0x18;
  v3 = (unsigned int *)(a1 & 0xFFFFFFFC);
  v4 = 255 << v2;
  v5 = a2 << v2;
  do
    v6 = *v3;
  while ( MEMORY[0xFFFF0FC0](*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
  return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x14258 */
int __fastcall _sync_lock_release_8(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  a1[1] = 0;
  return result;
}


/* Function: __sync_lock_release_4 @ 0x1427C */
int __fastcall _sync_lock_release_4(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_2 @ 0x1429C */
int __fastcall _sync_lock_release_2(_WORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_1 @ 0x142BC */
int __fastcall _sync_lock_release_1(_BYTE *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __aeabi_read_tp @ 0x142E0 */
void _aeabi_read_tp()
{
  JUMPOUT(0xFFFF0FE0);
}


/* Function: .term_proc @ 0x142E8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_malloc @ 0x251BC */

/* FAILED to decompile: __imp_open @ 0x251C0 */

/* FAILED to decompile: __imp_pthread_create @ 0x251C4 */

/* FAILED to decompile: __imp_shmget @ 0x251C8 */

/* FAILED to decompile: __imp_htons @ 0x251CC */

/* FAILED to decompile: __imp_execl @ 0x251D0 */

/* FAILED to decompile: __imp___errno_location @ 0x251D4 */

/* FAILED to decompile: __imp_rewind @ 0x251D8 */

/* FAILED to decompile: __imp_fopen @ 0x251DC */

/* FAILED to decompile: __imp_ftok @ 0x251E0 */

/* FAILED to decompile: __imp_waitpid @ 0x251E4 */

/* FAILED to decompile: __imp_shmdt @ 0x251E8 */

/* FAILED to decompile: __imp_printf @ 0x251EC */

/* FAILED to decompile: __imp_free @ 0x251F0 */

/* FAILED to decompile: __imp__exit @ 0x251F4 */

/* FAILED to decompile: __imp_setsockopt @ 0x251F8 */

/* FAILED to decompile: __imp_read @ 0x251FC */

/* FAILED to decompile: __imp_bind @ 0x25200 */

/* FAILED to decompile: __imp___libc_start_main @ 0x25204 */

/* FAILED to decompile: __imp_strchr @ 0x25208 */

/* FAILED to decompile: __imp_syscall @ 0x2520C */

/* FAILED to decompile: __imp_fread @ 0x25210 */

/* FAILED to decompile: __imp___isoc99_sscanf @ 0x25214 */

/* FAILED to decompile: __imp_pthread_cond_signal @ 0x25218 */

/* FAILED to decompile: __imp_abort @ 0x2521C */

/* FAILED to decompile: __imp_close @ 0x25220 */

/* FAILED to decompile: __imp_wait @ 0x25224 */

/* FAILED to decompile: __imp_stat @ 0x25228 */

/* FAILED to decompile: __imp_strlen @ 0x2522C */

/* FAILED to decompile: __imp_shmctl @ 0x25230 */

/* FAILED to decompile: __imp_shmat @ 0x25234 */

/* FAILED to decompile: __imp_socket @ 0x25238 */

/* FAILED to decompile: __imp_pthread_cancel @ 0x2523C */

/* FAILED to decompile: __imp_memset @ 0x25240 */

/* FAILED to decompile: __imp_memcpy @ 0x25244 */

/* FAILED to decompile: __imp_usleep @ 0x25248 */

/* FAILED to decompile: __imp_strncpy @ 0x2524C */

/* FAILED to decompile: __imp_signal @ 0x25250 */

/* FAILED to decompile: __imp_sleep @ 0x25254 */

/* FAILED to decompile: __imp_unlink @ 0x25258 */

/* FAILED to decompile: __imp_raise @ 0x2525C */

/* FAILED to decompile: __imp_memcmp @ 0x25260 */

/* FAILED to decompile: __imp_strcpy @ 0x25264 */

/* FAILED to decompile: __imp_fork @ 0x25268 */

/* FAILED to decompile: __imp_pthread_cond_wait @ 0x2526C */

/* FAILED to decompile: __imp_write @ 0x25270 */

/* FAILED to decompile: __imp_fileno @ 0x25274 */

/* FAILED to decompile: __imp_fclose @ 0x25278 */

/* FAILED to decompile: __imp_strcmp @ 0x2527C */

/* FAILED to decompile: __imp_pthread_mutex_lock @ 0x25280 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x25284 */

/* FAILED to decompile: __imp_listen @ 0x25288 */

/* FAILED to decompile: __imp_alarm @ 0x2528C */

/* FAILED to decompile: __imp_pipe @ 0x25290 */

/* FAILED to decompile: __imp_pthread_mutex_unlock @ 0x25294 */

/* FAILED to decompile: __imp_strstr @ 0x25298 */

/* FAILED to decompile: __imp_snprintf @ 0x2529C */

/* FAILED to decompile: __imp_puts @ 0x252A0 */

/* FAILED to decompile: __imp_fwrite @ 0x252A4 */

/* FAILED to decompile: __imp_pthread_join @ 0x252A8 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x252AC */

/* Total functions decompiled: 122, failed: 61 */
