/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/6/6_gcc_O1_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10C9C */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_10CA8 @ 0x10CA8 */
void sub_10CA8()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x10F90 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main(
    *(int (**)(int, char **, char **))((char *)&locret_13134 + (_DWORD)&off_10FCC),
    v4,
    (char **)va,
    0,
    0,
    a1,
    va);
  abort();
}


/* Function: call_weak_fn @ 0x10FD4 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x10FF8 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x11024 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x1105C */
void *_do_global_dtors_aux()
{
  void *result; // r0

  if ( !completed_0 )
  {
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x11084 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: signal_handler @ 0x11088 */
void __fastcall signal_handler(int sig)
{
  signal_received = 1;
  signal_number = sig;
}


/* Function: thread_sum @ 0x110A0 */
void *__fastcall thread_sum(void *arg)
{
  int v1; // r3
  int v2; // r1
  int v3; // r1
  int v4; // r2

  *((_DWORD *)arg + 2) = 0;
  v1 = *(_DWORD *)arg;
  v2 = *((_DWORD *)arg + 1);
  if ( *(_DWORD *)arg <= v2 )
  {
    v3 = v2 + 1;
    v4 = 0;
    do
      v4 += v1++;
    while ( v1 != v3 );
    *((_DWORD *)arg + 2) = v4;
  }
  return 0;
}


/* Function: thread_compute @ 0x110DC */
void *__fastcall thread_compute(void *arg)
{
  int v1; // r4
  void *result; // r0

  v1 = *(_DWORD *)arg;
  result = malloc(4u);
  *(_DWORD *)result = v1 * v1;
  return result;
}


/* Function: thread_increment @ 0x11100 */
void *__fastcall thread_increment(void *arg)
{
  int v1; // r7
  int v2; // r4

  v1 = *(_DWORD *)arg;
  if ( *(int *)arg > 0 )
  {
    v2 = 0;
    do
    {
      pthread_mutex_lock(&counter_mutex);
      ++shared_counter;
      pthread_mutex_unlock(&counter_mutex);
      usleep(0x3E8u);
      ++v2;
    }
    while ( v1 != v2 );
  }
  return 0;
}


/* Function: consumer_thread @ 0x1115C */
void *__fastcall consumer_thread(void *arg)
{
  int v1; // r4
  void *result; // r0

  pthread_mutex_lock(&cond_mutex);
  while ( !ready )
    pthread_cond_wait(&cond, &cond_mutex);
  v1 = data;
  pthread_mutex_unlock(&cond_mutex);
  result = malloc(4u);
  *(_DWORD *)result = v1;
  return result;
}


/* Function: producer_thread @ 0x111BC */
void *__fastcall producer_thread(void *arg)
{
  sleep(1u);
  pthread_mutex_lock(&cond_mutex);
  data = 42;
  ready = 1;
  pthread_cond_signal(&cond);
  pthread_mutex_unlock(&cond_mutex);
  return 0;
}


/* Function: thread_atomic_increment @ 0x11204 */
void *__fastcall thread_atomic_increment(void *arg)
{
  int v1; // r7
  int v2; // r4

  v1 = *(_DWORD *)arg;
  if ( *(int *)arg > 0 )
  {
    v2 = 0;
    do
    {
      _sync_fetch_and_add_4(&atomic_counter, 1);
      _sync_val_compare_and_swap_4(&atomic_counter, v2, v2 + 1000);
      ++v2;
    }
    while ( v1 != v2 );
  }
  return 0;
}


/* Function: thread_atomic_load_store @ 0x11298 */
void *__fastcall thread_atomic_load_store(void *arg)
{
  int v1; // r0
  int v2; // r4
  int v3; // r0
  int v4; // r0

  v1 = _sync_synchronize(arg);
  v2 = atomic_counter;
  v3 = _sync_synchronize(v1);
  v4 = _sync_synchronize(v3);
  atomic_counter = v2 + 100;
  _sync_synchronize(v4);
  return 0;
}


/* Function: thread_tls_test @ 0x112C8 */
void *__fastcall thread_tls_test(void *arg)
{
  int v1; // r5
  void *result; // r0

  v1 = unk_2419C;
  unk_2419C += 50;
  strncpy(byte_241A0, (const char *)arg, 0x1Fu);
  result = malloc(8u);
  *(_DWORD *)result = v1;
  *((_DWORD *)result + 1) = v1 + 50;
  return result;
}


/* Function: param_strcpy @ 0x11310 */
int __fastcall param_strcpy(char *dst, const char *src)
{
  strcpy(dst, src);
  return strlen(dst);
}


/* Function: call_strcpy @ 0x11328 */
int call_strcpy()
{
  char buffer[32]; // [sp+4h] [bp-2Ch] BYREF

  return param_strcpy(buffer, "HelloLib");
}


/* Function: param_strcmp @ 0x11378 */
int __fastcall param_strcmp(const char *s1, const char *s2)
{
  int v2; // r0

  v2 = strcmp(s1, s2);
  if ( v2 > 0 )
    return 1;
  else
    return v2 >> 31;
}


/* Function: call_strcmp @ 0x11390 */
int call_strcmp()
{
  int v0; // r4
  int v1; // r5

  v0 = param_strcmp("abc", "def");
  v1 = param_strcmp("xyz", "xyz");
  return v0 + v1 + param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x113E0 */
int __fastcall param_strlen(const char *str)
{
  return strlen(str);
}


/* Function: call_strlen @ 0x113EC */
int call_strlen()
{
  return 12;
}


/* Function: param_memcpy @ 0x113F4 */
int __fastcall param_memcpy(void *dst, const void *src, size_t n)
{
  memcpy(dst, src, n);
  return n;
}


/* Function: call_memcpy @ 0x11408 */
int call_memcpy()
{
  int src[5]; // [sp+4h] [bp-34h] BYREF
  int dst[5]; // [sp+18h] [bp-20h] BYREF

  src[0] = 10;
  src[1] = 20;
  src[2] = 30;
  src[3] = 40;
  src[4] = 50;
  memset(dst, 0, sizeof(dst));
  param_memcpy(dst, src, 0x14u);
  return dst[0] + dst[2] + dst[4];
}


/* Function: param_memcmp @ 0x114A0 */
int __fastcall param_memcmp(const void *p1, const void *p2, size_t n)
{
  int v3; // r0

  v3 = memcmp(p1, p2, n);
  if ( v3 > 0 )
    return 1;
  else
    return v3 >> 31;
}


/* Function: call_memcmp @ 0x114B8 */
int call_memcmp()
{
  int v0; // r5
  int arr1[3]; // [sp+0h] [bp-38h] BYREF
  int arr2[3]; // [sp+Ch] [bp-2Ch] BYREF
  int arr3[3]; // [sp+18h] [bp-20h] BYREF

  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr2[0] = 1;
  arr2[1] = 2;
  arr2[2] = 4;
  arr3[0] = 1;
  arr3[1] = 2;
  arr3[2] = 3;
  v0 = param_memcmp(arr1, arr2, 0xCu);
  return v0 + param_memcmp(arr1, arr3, 0xCu);
}


/* Function: param_printf @ 0x11554 */
int __fastcall param_printf(int x, const char *name)
{
  return _printf_chk(1, "Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x11574 */
int call_printf()
{
  return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x1158C */
int __fastcall param_scanf(const char *input_str)
{
  int a; // [sp+4h] [bp-14h] BYREF
  int b; // [sp+8h] [bp-10h] BYREF

  if ( _isoc99_sscanf(input_str, "%d,%d", &a, &b) == 2 )
    return a + b;
  else
    return -1;
}


/* Function: call_scanf @ 0x115F4 */
int call_scanf()
{
  return param_scanf("123,456");
}


/* Function: param_fopen_fclose @ 0x11608 */
int __fastcall param_fopen_fclose(const char *filename)
{
  FILE *v1; // r0
  FILE *v2; // r4
  int v3; // r5

  v1 = fopen(filename, "r");
  v2 = v1;
  if ( !v1 )
    return -1;
  v3 = fileno(v1);
  fclose(v2);
  return v3;
}


/* Function: call_fopen_fclose @ 0x11644 */
int call_fopen_fclose()
{
  if ( param_fopen_fclose("/etc/passwd") < 0 )
    return -1;
  else
    return 42;
}


/* Function: param_fread_fwrite @ 0x11664 */
int __fastcall param_fread_fwrite(const char *tmpfile)
{
  FILE *v2; // r0
  FILE *v3; // r4
  size_t v4; // r5
  _BYTE v6[4]; // [sp+0h] [bp-38h] BYREF
  char read_buffer[32]; // [sp+4h] [bp-34h] BYREF

  v2 = fopen(tmpfile, "w+");
  v3 = v2;
  if ( !v2 )
    return -1;
  if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
  {
    rewind(v3);
    v4 = fread(read_buffer, 1u, 0x12u, v3);
    v6[v4 + 4] = 0;
    fclose(v3);
    unlink(tmpfile);
    if ( v4 == 18 )
    {
      if ( !strcmp(read_buffer, "BinBench Test Data") )
        return 42;
      else
        return -3;
    }
    else
    {
      return -3;
    }
  }
  else
  {
    fclose(v3);
    return -2;
  }
}


/* Function: call_fread_fwrite @ 0x1175C */
int call_fread_fwrite()
{
  return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x11770 */
int __fastcall param_malloc_free(size_t size)
{
  size_t v2; // r4
  _DWORD *v3; // r0
  _DWORD *v4; // r2
  int v5; // r3
  int v6; // r4

  v2 = size;
  v3 = malloc(4 * size);
  if ( !v3 )
    return -1;
  if ( size )
  {
    v4 = v3 - 1;
    v5 = 0;
    do
    {
      v4[1] = v5;
      ++v4;
      v5 += 10;
    }
    while ( v4 != &v3[v2 - 1] );
  }
  v6 = v3[v2 - 1] + *v3;
  free(v3);
  return v6;
}


/* Function: call_malloc_free @ 0x117D8 */
int call_malloc_free()
{
  return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x117E8 */
int __fastcall param_memset(void *buffer, size_t size)
{
  char *v4; // r3
  int result; // r0
  int v6; // t1

  memset(buffer, 0, size);
  if ( !size )
    return 0;
  v4 = (char *)buffer - 1;
  result = 0;
  do
  {
    v6 = (unsigned __int8)*++v4;
    result += v6;
  }
  while ( v4 != (char *)buffer + size - 1 );
  return result;
}


/* Function: call_memset @ 0x11834 */
int call_memset()
{
  int *v0; // r3
  int v2; // [sp+0h] [bp-38h] BYREF
  int buffer[10]; // [sp+4h] [bp-34h] BYREF

  v0 = &v2;
  do
  {
    v0[1] = 255;
    ++v0;
  }
  while ( v0 != &buffer[9] );
  param_memset(buffer, 0x28u);
  return buffer[0] + buffer[9];
}


/* Function: param_strchr_strstr @ 0x118A4 */
int __fastcall param_strchr_strstr(const char *str, char ch, const char *substr)
{
  char *v5; // r0
  int v6; // r4
  char *v7; // r0
  int v8; // r0

  v5 = strchr(str, ch);
  if ( v5 )
    v6 = v5 - str;
  else
    v6 = -1;
  v7 = strstr(str, substr);
  if ( v7 )
    v8 = v7 - str;
  else
    v8 = -1;
  return v6 + v8;
}


/* Function: call_strchr_strstr @ 0x118E0 */
int call_strchr_strstr()
{
  return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x11900 */
void test_standard_library_functions()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
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
  _printf_chk(1, aLibL101D, v0);
  v1 = call_strcmp();
  _printf_chk(1, aLibL102D, v1);
  v2 = call_strlen();
  _printf_chk(1, aLibL103D, v2);
  v3 = call_memcpy();
  _printf_chk(1, aLibL104D, v3);
  v4 = call_memcmp();
  _printf_chk(1, aLibL105D, v4);
  v5 = call_printf();
  _printf_chk(1, aLibL106D, v5);
  v6 = call_scanf();
  _printf_chk(1, aLibL107D, v6);
  v7 = call_fopen_fclose();
  _printf_chk(1, aLibL108D, v7);
  v8 = call_fread_fwrite();
  _printf_chk(1, aLibL109D, v8);
  v9 = call_malloc_free();
  _printf_chk(1, aLibL110D, v9);
  v10 = call_memset();
  _printf_chk(1, aLibL111D, v10);
  v11 = call_strchr_strstr();
  _printf_chk(1, aLibL112D, v11);
}


/* Function: param_linux_syscall @ 0x11A34 */
int __fastcall param_linux_syscall(const char *pathname)
{
  int v1; // r0
  int v2; // r4

  v1 = syscall(5, pathname, 0);
  v2 = v1;
  if ( v1 < 0 )
    return -*_errno_location();
  syscall(6, v1);
  return v2;
}


/* Function: call_linux_syscall @ 0x11A74 */
int call_linux_syscall()
{
  if ( param_linux_syscall("/etc/passwd") < 0 )
    return -1;
  else
    return 42;
}


/* Function: param_win32_api @ 0x11A94 */
int __fastcall param_win32_api(const char *filename)
{
  stat st; // [sp+0h] [bp-68h] BYREF

  if ( stat_0(filename, &st) < 0 )
    return -1;
  if ( st.st_size <= 0 )
    return -2;
  return 42;
}


/* Function: call_win32_api @ 0x11AFC */
int call_win32_api()
{
  return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x11B10 */
int __fastcall param_fork_exec(const char *prog, const char *arg)
{
  int v4; // r0
  int status; // [sp+0h] [bp-18h] BYREF

  v4 = fork();
  if ( v4 < 0 )
    return -1;
  if ( !v4 )
  {
    execl(prog, prog, arg, 0);
    exit(127);
  }
  if ( waitpid(v4, &status, 0) < 0 )
    return -2;
  if ( (status & 0x7F) != 0 )
    return -3;
  return BYTE1(status);
}


/* Function: call_fork_exec @ 0x11BB8 */
int call_fork_exec()
{
  if ( param_fork_exec("/bin/true", 0) )
    return -1;
  else
    return 42;
}


/* Function: param_pipe_communication @ 0x11BDC */
int param_pipe_communication()
{
  __pid_t v0; // r0
  ssize_t v1; // r4
  _BYTE v3[4]; // [sp+0h] [bp-40h] BYREF
  int pipefd[2]; // [sp+4h] [bp-3Ch] BYREF
  char buffer[32]; // [sp+Ch] [bp-34h] BYREF

  if ( pipe(pipefd) < 0 )
    return -1;
  v0 = fork();
  if ( v0 < 0 )
    return -2;
  if ( !v0 )
  {
    close(pipefd[0]);
    write(pipefd[1], "HelloPipe", 9u);
    close(pipefd[1]);
    exit(0);
  }
  close(pipefd[1]);
  v1 = read(pipefd[0], buffer, 0x1Fu);
  v3[v1 + 12] = 0;
  close(pipefd[0]);
  wait(0);
  if ( v1 <= 0 )
    return -3;
  else
    return 42;
}


/* Function: call_pipe_communication @ 0x11CC0 */
int call_pipe_communication()
{
  return param_pipe_communication();
}


/* Function: param_socket_create @ 0x11CCC */
int param_socket_create()
{
  int v0; // r0
  int v1; // r4
  int opt; // [sp+8h] [bp-20h] BYREF
  sockaddr_in addr; // [sp+Ch] [bp-1Ch] BYREF

  v0 = socket(2, 1, 0);
  v1 = v0;
  if ( v0 < 0 )
    return -1;
  opt = 1;
  if ( setsockopt(v0, 1, 2, &opt, 4u) < 0 )
  {
    close(v1);
    return -2;
  }
  else
  {
    memset(&addr.sin_port, 0, 14);
    addr.sin_family = 2;
    if ( bind(v1, (const struct sockaddr *)&addr, 0x10u) < 0 )
    {
      close(v1);
      return -3;
    }
    else if ( listen(v1, 5) < 0 )
    {
      close(v1);
      return -4;
    }
    else
    {
      close(v1);
      return 42;
    }
  }
}


/* Function: call_socket_create @ 0x11DD8 */
int call_socket_create()
{
  return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x11DE4 */
size_t param_shmget_shmat()
{
  int v0; // r0
  int v1; // r0
  int v2; // r5
  char *v3; // r0
  char *v4; // r4
  size_t v5; // r6

  v0 = open("/tmp/binbench_shm", 66, 438);
  if ( v0 < 0 )
    return -1;
  close(v0);
  if ( ftok("/tmp/binbench_shm", 42) < 0 )
    return -1;
  v1 = shmget();
  v2 = v1;
  if ( v1 < 0 )
    return -2;
  v3 = (char *)shmat(v1, 0);
  v4 = v3;
  if ( v3 == (char *)-1 )
    return -3;
  strcpy(v3, "SharedMemory");
  v5 = strlen(v3);
  shmdt(v4);
  shmctl(v2, 0);
  return v5;
}


/* Function: call_shmget_shmat @ 0x11EB0 */
int call_shmget_shmat()
{
  if ( (int)param_shmget_shmat() <= 0 )
    return -1;
  else
    return 42;
}


/* Function: param_signal_handling @ 0x11EC8 */
int param_signal_handling()
{
  int v0; // r4
  int v1; // r4

  if ( signal(10, signal_handler) == (__sighandler_t)-1 )
    return -1;
  if ( signal(14, signal_handler) == (__sighandler_t)-1 )
    return -2;
  signal_received = 0;
  raise(10);
  if ( !signal_received )
  {
    v0 = 1000;
    do
    {
      usleep(0x3E8u);
      if ( signal_received )
        break;
      --v0;
    }
    while ( v0 );
  }
  if ( !signal_received )
    return -3;
  if ( signal_number != 10 )
    return -4;
  signal_received = 0;
  alarm(1u);
  if ( !signal_received )
  {
    v1 = 2000;
    do
    {
      usleep(0x3E8u);
      if ( signal_received )
        break;
      --v1;
    }
    while ( v1 );
  }
  if ( !signal_received )
    return -5;
  if ( signal_number != 14 )
    return -5;
  signal(10, 0);
  signal(14, 0);
  return 42;
}


/* Function: call_signal_handling @ 0x1201C */
int call_signal_handling()
{
  return param_signal_handling();
}


/* Function: test_system_calls @ 0x12028 */
void test_system_calls()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0

  puts(asc_13AA4);
  v0 = call_linux_syscall();
  _printf_chk(1, aSysL301D, v0);
  v1 = call_win32_api();
  _printf_chk(1, aSysL302D, v1);
  v2 = call_fork_exec();
  _printf_chk(1, aSysL303D, v2);
  v3 = param_pipe_communication();
  _printf_chk(1, aSysL304D, v3);
  v4 = param_socket_create();
  _printf_chk(1, aSysL305D, v4);
  v5 = call_shmget_shmat();
  _printf_chk(1, aSysL306D, v5);
  v6 = param_signal_handling();
  _printf_chk(1, aSysL307D, v6);
}


/* Function: param_pthread_create @ 0x120E4 */
int __fastcall param_pthread_create(int x)
{
  int v1; // r4
  pthread_t tid; // [sp+0h] [bp-18h] BYREF
  int input; // [sp+4h] [bp-14h] BYREF
  void *thread_ret; // [sp+8h] [bp-10h] BYREF

  input = x;
  if ( pthread_create(&tid, 0, thread_compute, &input) )
    return -1;
  pthread_join(tid, &thread_ret);
  v1 = *(_DWORD *)thread_ret;
  free(thread_ret);
  return v1;
}


/* Function: call_pthread_create @ 0x1216C */
int call_pthread_create()
{
  return param_pthread_create(7);
}


/* Function: param_pthread_join @ 0x1217C */
int param_pthread_join()
{
  ThreadData *v0; // r6
  ThreadData *v1; // r8
  ThreadData *v2; // r5
  pthread_t *v3; // r7
  int v4; // r4
  pthread_t start; // t1
  pthread_t tids[3]; // [sp+4h] [bp-30h] BYREF
  ThreadData data[3]; // [sp+10h] [bp-24h] BYREF
  int v9; // [sp+34h] [bp+0h] BYREF

  data[0].start = 1;
  data[0].end = 10;
  data[0].result = 0;
  data[1].start = 11;
  data[1].end = 20;
  data[1].result = 0;
  data[2].start = 21;
  data[2].end = 30;
  data[2].result = 0;
  v0 = (ThreadData *)tids;
  v1 = data;
  v2 = data;
  v3 = tids;
  do
  {
    v4 = pthread_create(v3, 0, thread_sum, v2);
    if ( v4 )
      return -1;
    ++v3;
    ++v2;
  }
  while ( v2 != (ThreadData *)&v9 );
  while ( 1 )
  {
    start = v0->start;
    v0 = (ThreadData *)((char *)v0 + 4);
    if ( pthread_join(start, 0) )
      break;
    v4 += v1->result;
    ++v1;
    if ( v0 == data )
      return v4;
  }
  return -2;
}


/* Function: call_pthread_join @ 0x12270 */
int call_pthread_join()
{
  return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x1227C */
int __fastcall param_mutex_lock(int thread_count, int iterations_per_thread)
{
  pthread_t *v3; // r0
  pthread_t *v4; // r10
  pthread_t *v5; // r5
  int i; // r6
  int v7; // r4
  char *v8; // r5
  pthread_t v9; // t1
  int arg; // [sp+4h] [bp-24h] BYREF

  arg = iterations_per_thread;
  v3 = (pthread_t *)malloc(4 * thread_count);
  v4 = v3;
  if ( !v3 )
    return -1;
  shared_counter = 0;
  if ( thread_count > 0 )
  {
    v5 = v3;
    for ( i = 0; ; ++i )
    {
      v7 = pthread_create(v5, 0, thread_increment, &arg);
      if ( v7 )
      {
        free(v4);
        return -2;
      }
      ++v5;
      if ( thread_count == i + 1 )
        break;
    }
    v8 = (char *)(v4 - 1);
    do
    {
      v9 = *((_DWORD *)v8 + 1);
      v8 += 4;
      pthread_join(v9, 0);
    }
    while ( i != v7++ );
  }
  free(v4);
  if ( shared_counter == arg * thread_count )
    return 42;
  else
    return -3;
}


/* Function: call_mutex_lock @ 0x12360 */
int call_mutex_lock()
{
  return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x12374 */
int param_condition_variable()
{
  int v0; // r4
  pthread_t producer; // [sp+0h] [bp-18h] BYREF
  pthread_t consumer; // [sp+4h] [bp-14h] BYREF
  void *consumer_ret; // [sp+8h] [bp-10h] BYREF

  ready = 0;
  data = 0;
  if ( pthread_create(&consumer, 0, consumer_thread, 0) )
    return -1;
  if ( pthread_create(&producer, 0, producer_thread, 0) )
  {
    pthread_cancel(consumer);
    return -2;
  }
  else
  {
    pthread_join(consumer, &consumer_ret);
    pthread_join(producer, 0);
    v0 = *(_DWORD *)consumer_ret;
    free(consumer_ret);
  }
  return v0;
}


/* Function: call_condition_variable @ 0x12444 */
int call_condition_variable()
{
  return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x12450 */
int __fastcall param_atomic_ops(int thread_count, int iterations)
{
  pthread_t *v3; // r0
  pthread_t *v4; // r10
  int v5; // r0
  pthread_t *v6; // r5
  int v7; // r6
  int v8; // r4
  pthread_t *v9; // r5
  pthread_t v10; // t1
  int v11; // r0
  int v12; // r0
  int v13; // r4
  int arg; // [sp+4h] [bp-2Ch] BYREF
  pthread_t load_store_tid; // [sp+8h] [bp-28h] BYREF

  arg = iterations;
  v3 = (pthread_t *)malloc(4 * thread_count);
  v4 = v3;
  if ( !v3 )
    return -1;
  v5 = _sync_synchronize(v3);
  atomic_counter = 0;
  _sync_synchronize(v5);
  if ( thread_count <= 0 )
  {
    v11 = pthread_create(&load_store_tid, 0, thread_atomic_load_store, 0);
    if ( !v11 )
      v11 = pthread_join(load_store_tid, 0);
  }
  else
  {
    v6 = v4;
    v7 = 0;
    do
    {
      v8 = pthread_create(v6, 0, thread_atomic_increment, &arg);
      if ( v8 )
      {
        free(v4);
        return -2;
      }
      ++v7;
      ++v6;
    }
    while ( thread_count != v7 );
    if ( !pthread_create(&load_store_tid, 0, thread_atomic_load_store, 0) )
      pthread_join(load_store_tid, 0);
    v9 = v4 - 1;
    do
    {
      v10 = v9[1];
      ++v9;
      v11 = pthread_join(v10, 0);
      ++v8;
    }
    while ( thread_count > v8 );
  }
  v12 = _sync_synchronize(v11);
  v13 = atomic_counter;
  _sync_synchronize(v12);
  free(v4);
  if ( v13 <= 0 )
    return -3;
  else
    return 42;
}


/* Function: call_atomic_ops @ 0x125C0 */
int call_atomic_ops()
{
  return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x125D4 */
int __fastcall param_thread_local_storage(int thread_count)
{
  size_t v2; // r4
  pthread_t *v3; // r5
  char *v4; // r0
  bool v5; // zf
  char *v6; // r7
  char *v7; // r6
  int v8; // r4
  void *v9; // r0
  int v10; // r8
  pthread_t *v11; // r6
  char *v12; // r9
  int i; // r5
  void *v14; // t1
  int v15; // r4
  pthread_t *v16; // r9
  int v17; // r5
  int v18; // r6
  pthread_t v19; // t1
  void *v20; // t1
  char *v23; // r5
  void *v24; // t1
  pthread_t *newthread; // [sp+8h] [bp-38h]
  char *ptr; // [sp+Ch] [bp-34h]
  void *ret; // [sp+10h] [bp-30h] BYREF

  v2 = 4 * thread_count;
  v3 = (pthread_t *)malloc(4 * thread_count);
  newthread = v3;
  v4 = (char *)malloc(v2);
  ptr = v4;
  v5 = v4 == 0;
  if ( v4 )
    v5 = v3 == 0;
  if ( v5 )
    return -1;
  if ( thread_count <= 0 )
  {
    v18 = 0;
    v15 = 0;
LABEL_14:
    free(ptr);
    free(newthread);
    if ( v18 == 150 * thread_count && v15 == 100 * thread_count )
      return 42;
    else
      return -3;
  }
  else
  {
    v6 = v4 - 4;
    v7 = v4 - 4;
    v8 = 0;
    do
    {
      v9 = malloc(0x10u);
      *((_DWORD *)v7 + 1) = v9;
      v7 += 4;
      _snprintf_chk(v9, 16);
      v10 = v8++;
    }
    while ( thread_count != v8 );
    v11 = v3;
    v12 = v6;
    for ( i = 0; ; ++i )
    {
      v14 = (void *)*((_DWORD *)v12 + 1);
      v12 += 4;
      if ( pthread_create(v11, 0, thread_tls_test, v14) )
        break;
      ++v11;
      if ( v10 == i )
      {
        v15 = 0;
        v16 = newthread - 1;
        v17 = 0;
        v18 = 0;
        do
        {
          v19 = v16[1];
          ++v16;
          pthread_join(v19, &ret);
          v15 += *(_DWORD *)ret;
          v18 += *((_DWORD *)ret + 1);
          free(ret);
          v20 = (void *)*((_DWORD *)v6 + 1);
          v6 += 4;
          free(v20);
          v5 = v10 == v17++;
        }
        while ( !v5 );
        goto LABEL_14;
      }
    }
    if ( i >= 0 )
    {
      v23 = &ptr[4 * i];
      do
      {
        v24 = (void *)*((_DWORD *)v6 + 1);
        v6 += 4;
        free(v24);
      }
      while ( v6 != v23 );
    }
    free(ptr);
    free(newthread);
    return -2;
  }
}


/* Function: call_thread_local_storage @ 0x127BC */
int call_thread_local_storage()
{
  return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x127CC */
void test_thread_concurrency()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  puts(asc_13B90);
  v0 = call_pthread_create();
  _printf_chk(1, aThrL301D, v0);
  v1 = param_pthread_join();
  _printf_chk(1, aThrL302D, v1);
  v2 = call_mutex_lock();
  _printf_chk(1, aThrL303D, v2);
  v3 = param_condition_variable();
  _printf_chk(1, aThrL304D, v3);
  v4 = call_atomic_ops();
  _printf_chk(1, aThrL305D, v4);
  v5 = call_thread_local_storage();
  _printf_chk(1, aThrL306D, v5);
}


/* Function: main @ 0x12870 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}


/* Function: __sync_fetch_and_add_4 @ 0x12888 */
int __fastcall _sync_fetch_and_add_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x128C0 */
int __fastcall _sync_fetch_and_sub_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 - a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x128F8 */
int __fastcall _sync_fetch_and_or_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 | a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x12930 */
int __fastcall _sync_fetch_and_and_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 & a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x12968 */
int __fastcall _sync_fetch_and_xor_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x129A0 */
int __fastcall _sync_fetch_and_nand_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, ~(*a1 & a2), a1) );
  return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x129DC */
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


/* Function: __sync_fetch_and_sub_2 @ 0x12A3C */
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


/* Function: __sync_fetch_and_or_2 @ 0x12A9C */
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


/* Function: __sync_fetch_and_and_2 @ 0x12AFC */
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


/* Function: __sync_fetch_and_xor_2 @ 0x12B5C */
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


/* Function: __sync_fetch_and_nand_2 @ 0x12BBC */
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


/* Function: __sync_fetch_and_add_1 @ 0x12C20 */
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


/* Function: __sync_fetch_and_sub_1 @ 0x12C7C */
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


/* Function: __sync_fetch_and_or_1 @ 0x12CD8 */
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


/* Function: __sync_fetch_and_and_1 @ 0x12D34 */
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


/* Function: __sync_fetch_and_xor_1 @ 0x12D90 */
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


/* Function: __sync_fetch_and_nand_1 @ 0x12DEC */
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


/* Function: __sync_add_and_fetch_4 @ 0x12E4C */
int __fastcall _sync_add_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 + a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x12E84 */
int __fastcall _sync_sub_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 - a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x12EBC */
int __fastcall _sync_or_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 | a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x12EF4 */
int __fastcall _sync_and_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 & a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x12F2C */
int __fastcall _sync_xor_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 ^ a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x12F64 */
int __fastcall _sync_nand_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = ~(*a1 & a2);
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x12FA0 */
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


/* Function: __sync_sub_and_fetch_2 @ 0x13008 */
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


/* Function: __sync_or_and_fetch_2 @ 0x13070 */
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


/* Function: __sync_and_and_fetch_2 @ 0x130D8 */
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


/* Function: __sync_xor_and_fetch_2 @ 0x13140 */
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


/* Function: __sync_nand_and_fetch_2 @ 0x131A8 */
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


/* Function: __sync_add_and_fetch_1 @ 0x13214 */
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


/* Function: __sync_sub_and_fetch_1 @ 0x13278 */
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


/* Function: __sync_or_and_fetch_1 @ 0x132DC */
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


/* Function: __sync_and_and_fetch_1 @ 0x13340 */
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


/* Function: __sync_xor_and_fetch_1 @ 0x133A4 */
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


/* Function: __sync_nand_and_fetch_1 @ 0x13408 */
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


/* Function: __sync_val_compare_and_swap_4 @ 0x13470 */
int __fastcall _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
  while ( *(_DWORD *)a1 == a2 )
  {
    if ( !MEMORY[0xFFFF0FC0](a2, a3, a1) )
      return a2;
  }
  return *(_DWORD *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x134C0 */
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


/* Function: __sync_val_compare_and_swap_1 @ 0x13538 */
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


/* Function: __sync_bool_compare_and_swap_4 @ 0x135AC */
bool __fastcall _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
  return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x135D8 */
bool __fastcall _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x135F4 */
bool __fastcall _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x1361C */
int __fastcall _sync_lock_test_and_set_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
  return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x13654 */
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


/* Function: __sync_lock_test_and_set_1 @ 0x136B4 */
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


/* Function: __sync_lock_release_8 @ 0x13710 */
int __fastcall _sync_lock_release_8(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  a1[1] = 0;
  return result;
}


/* Function: __sync_lock_release_4 @ 0x13734 */
int __fastcall _sync_lock_release_4(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_2 @ 0x13754 */
int __fastcall _sync_lock_release_2(_WORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_1 @ 0x13774 */
int __fastcall _sync_lock_release_1(_BYTE *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __aeabi_read_tp @ 0x137A0 */
void _aeabi_read_tp()
{
  JUMPOUT(0xFFFF0FE0);
}


/* Function: .term_proc @ 0x137A8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_malloc @ 0x241B8 */

/* FAILED to decompile: __imp_open @ 0x241BC */

/* FAILED to decompile: __imp_pthread_create @ 0x241C0 */

/* FAILED to decompile: __imp_shmget @ 0x241C4 */

/* FAILED to decompile: __imp_execl @ 0x241C8 */

/* FAILED to decompile: __imp___errno_location @ 0x241CC */

/* FAILED to decompile: __imp_rewind @ 0x241D0 */

/* FAILED to decompile: __imp_fopen @ 0x241D4 */

/* FAILED to decompile: __imp_ftok @ 0x241D8 */

/* FAILED to decompile: __imp_waitpid @ 0x241DC */

/* FAILED to decompile: __imp_shmdt @ 0x241E0 */

/* FAILED to decompile: __imp_free @ 0x241E4 */

/* FAILED to decompile: __imp__exit @ 0x241E8 */

/* FAILED to decompile: __imp_setsockopt @ 0x241EC */

/* FAILED to decompile: __imp_read @ 0x241F0 */

/* FAILED to decompile: __imp_bind @ 0x241F4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x241F8 */

/* FAILED to decompile: __imp_strchr @ 0x241FC */

/* FAILED to decompile: __imp_syscall @ 0x24200 */

/* FAILED to decompile: __imp_fread @ 0x24204 */

/* FAILED to decompile: __imp___isoc99_sscanf @ 0x24208 */

/* FAILED to decompile: __imp_pthread_cond_signal @ 0x2420C */

/* FAILED to decompile: __imp_abort @ 0x24210 */

/* FAILED to decompile: __imp_close @ 0x24214 */

/* FAILED to decompile: __imp_wait @ 0x24218 */

/* FAILED to decompile: __imp_stat_0 @ 0x2421C */

/* FAILED to decompile: __imp_strlen @ 0x24220 */

/* FAILED to decompile: __imp_shmctl @ 0x24224 */

/* FAILED to decompile: __imp_shmat @ 0x24228 */

/* FAILED to decompile: __imp_socket @ 0x2422C */

/* FAILED to decompile: __imp_pthread_cancel @ 0x24230 */

/* FAILED to decompile: __imp_memset @ 0x24234 */

/* FAILED to decompile: __imp_memcpy @ 0x24238 */

/* FAILED to decompile: __imp_usleep @ 0x2423C */

/* FAILED to decompile: __imp_strncpy @ 0x24240 */

/* FAILED to decompile: __imp_signal @ 0x24244 */

/* FAILED to decompile: __imp_sleep @ 0x24248 */

/* FAILED to decompile: __imp_unlink @ 0x2424C */

/* FAILED to decompile: __imp_raise @ 0x24250 */

/* FAILED to decompile: __imp_memcmp @ 0x24254 */

/* FAILED to decompile: __imp_strcpy @ 0x24258 */

/* FAILED to decompile: __imp_fork @ 0x2425C */

/* FAILED to decompile: __imp_pthread_cond_wait @ 0x24260 */

/* FAILED to decompile: __imp_write @ 0x24264 */

/* FAILED to decompile: __imp_fileno @ 0x24268 */

/* FAILED to decompile: __imp_fclose @ 0x2426C */

/* FAILED to decompile: __imp_strcmp @ 0x24270 */

/* FAILED to decompile: __imp_pthread_mutex_lock @ 0x24274 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x24278 */

/* FAILED to decompile: __imp_listen @ 0x2427C */

/* FAILED to decompile: __imp___printf_chk @ 0x24280 */

/* FAILED to decompile: __imp_alarm @ 0x24284 */

/* FAILED to decompile: __imp_pipe @ 0x24288 */

/* FAILED to decompile: __imp_pthread_mutex_unlock @ 0x2428C */

/* FAILED to decompile: __imp___snprintf_chk @ 0x24290 */

/* FAILED to decompile: __imp_strstr @ 0x24294 */

/* FAILED to decompile: __imp_puts @ 0x24298 */

/* FAILED to decompile: __imp_fwrite @ 0x2429C */

/* FAILED to decompile: __imp_pthread_join @ 0x242A0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x242A4 */

/* Total functions decompiled: 122, failed: 60 */
