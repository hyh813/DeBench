/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/6/6_clang_O0_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x2000 */
__int64 (**init_proc())(void)
{
  __int64 (**result)(void); // rax

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    return (__int64 (**)(void))_gmon_start__();
  return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x23C0 */
// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void))
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // [rsp-8h] [rbp-8h] BYREF
  char *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = v5;
  v5 = v3;
  _libc_start_main((int (*)(int, char **, char **))main, v4, &retaddr, 0, 0, a3, &v5);
  __halt();
}


/* Function: deregister_tm_clones @ 0x23F0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x2420 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x2460 */
char *_do_global_dtors_aux()
{
  char *result; // rax

  if ( !_bss_start )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x24A0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_strcpy @ 0x24B0 */
int __cdecl param_strcpy(char *dst, const char *src)
{
  strcpy(dst, src);
  return strlen(dst);
}


/* Function: call_strcpy @ 0x24E0 */
int __cdecl call_strcpy()
{
  char buffer[32]; // [rsp+10h] [rbp-20h] BYREF

  return param_strcpy(buffer, "HelloLib");
}


/* Function: param_strcmp @ 0x2510 */
int __cdecl param_strcmp(const char *s1, const char *s2)
{
  int v2; // eax
  int ret; // [rsp+Ch] [rbp-14h]

  ret = strcmp(s1, s2);
  if ( ret > 0 )
    return 1;
  v2 = 0;
  if ( ret < 0 )
    return -1;
  return v2;
}


/* Function: call_strcmp @ 0x2570 */
int __cdecl call_strcmp()
{
  int r2; // [rsp+8h] [rbp-8h]
  int r1; // [rsp+Ch] [rbp-4h]

  r1 = param_strcmp("abc", "def");
  r2 = param_strcmp("xyz", "xyz");
  return param_strcmp("bbb", "aaa") + r2 + r1;
}


/* Function: param_strlen @ 0x25D0 */
int __cdecl param_strlen(const char *str)
{
  return strlen(str);
}


/* Function: call_strlen @ 0x2600 */
int __cdecl call_strlen()
{
  return param_strlen("BinBench2025");
}


/* Function: param_memcpy @ 0x2630 */
int __cdecl param_memcpy(void *dst, const void *src, size_t n)
{
  int na; // [rsp+8h] [rbp-18h]

  na = n;
  memcpy(dst, src, n);
  return na;
}


/* Function: call_memcpy @ 0x2660 */
int __cdecl call_memcpy()
{
  int dst[8]; // [rsp+0h] [rbp-40h] BYREF
  int src[5]; // [rsp+20h] [rbp-20h] BYREF

  *(_QWORD *)src = 0x140000000ALL;
  *(_QWORD *)&src[2] = 0x280000001ELL;
  src[4] = 50;
  memset(dst, 0, 0x14u);
  param_memcpy(dst, src, 0x14u);
  return dst[4] + dst[2] + dst[0];
}


/* Function: param_memcmp @ 0x26C0 */
int __cdecl param_memcmp(const void *p1, const void *p2, size_t n)
{
  int v3; // eax
  int ret; // [rsp+4h] [rbp-1Ch]

  ret = memcmp(p1, p2, n);
  if ( ret > 0 )
    return 1;
  v3 = 0;
  if ( ret < 0 )
    return -1;
  return v3;
}


/* Function: call_memcmp @ 0x2720 */
int __cdecl call_memcmp()
{
  int r1; // [rsp+8h] [rbp-28h]
  int arr3[3]; // [rsp+Ch] [rbp-24h] BYREF
  int arr2[3]; // [rsp+18h] [rbp-18h] BYREF
  int arr1[3]; // [rsp+24h] [rbp-Ch] BYREF

  *(_QWORD *)arr1 = 0x200000001LL;
  arr1[2] = 3;
  *(_QWORD *)arr2 = 0x200000001LL;
  arr2[2] = 4;
  *(_QWORD *)arr3 = 0x200000001LL;
  arr3[2] = 3;
  r1 = param_memcmp(arr1, arr2, 0xCu);
  return param_memcmp(arr1, arr3, 0xCu) + r1;
}


/* Function: param_printf @ 0x27A0 */
int __cdecl param_printf(int x, const char *name)
{
  return printf("Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x27D0 */
int __cdecl call_printf()
{
  return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x2800 */
int __cdecl param_scanf(const char *input_str)
{
  int b; // [rsp+8h] [rbp-18h] BYREF
  int a; // [rsp+Ch] [rbp-14h] BYREF
  const char *input_stra; // [rsp+10h] [rbp-10h]

  input_stra = input_str;
  if ( (unsigned int)__isoc99_sscanf(input_str, "%d,%d", &a, &b) == 2 )
    return b + a;
  else
    return -1;
}


/* Function: call_scanf @ 0x2860 */
int __cdecl call_scanf()
{
  return param_scanf("123,456");
}


/* Function: param_fopen_fclose @ 0x2880 */
int __cdecl param_fopen_fclose(const char *filename)
{
  int fd; // [rsp+4h] [rbp-1Ch]
  FILE *fp; // [rsp+8h] [rbp-18h]

  fp = fopen(filename, "r");
  if ( !fp )
    return -1;
  fd = fileno(fp);
  fclose(fp);
  return fd;
}


/* Function: call_fopen_fclose @ 0x28E0 */
int __cdecl call_fopen_fclose()
{
  int v0; // edx
  int result; // eax

  v0 = param_fopen_fclose("/etc/passwd");
  result = -1;
  if ( v0 >= 0 )
    return 42;
  return result;
}


/* Function: param_fread_fwrite @ 0x2910 */
int __cdecl param_fread_fwrite(const char *tmpfile)
{
  size_t v1; // rax
  int v2; // eax
  bool v4; // [rsp+7h] [rbp-69h]
  size_t read; // [rsp+18h] [rbp-58h]
  size_t written; // [rsp+20h] [rbp-50h]
  FILE *fp; // [rsp+28h] [rbp-48h]
  char read_buffer[40]; // [rsp+30h] [rbp-40h] BYREF
  const char *write_data; // [rsp+58h] [rbp-18h]
  const char *tmpfilea; // [rsp+60h] [rbp-10h]

  tmpfilea = tmpfile;
  write_data = "BinBench Test Data";
  fp = fopen(tmpfile, "w+");
  if ( !fp )
    return -1;
  v1 = strlen(write_data);
  written = fwrite(write_data, 1u, v1, fp);
  if ( written == strlen(write_data) )
  {
    rewind(fp);
    read = fread(read_buffer, 1u, written, fp);
    read_buffer[read] = 0;
    fclose(fp);
    unlink(tmpfilea);
    v4 = 0;
    if ( read == written )
      v4 = strcmp(read_buffer, write_data) == 0;
    v2 = -3;
    if ( v4 )
      return 42;
    return v2;
  }
  else
  {
    fclose(fp);
    return -2;
  }
}


/* Function: call_fread_fwrite @ 0x2A40 */
int __cdecl call_fread_fwrite()
{
  return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2A60 */
int __cdecl param_malloc_free(size_t size)
{
  int sum; // [rsp+Ch] [rbp-24h]
  size_t i; // [rsp+10h] [rbp-20h]
  int *ptr; // [rsp+18h] [rbp-18h]

  ptr = (int *)malloc(4 * size);
  if ( !ptr )
    return -1;
  for ( i = 0; i < size; ++i )
    ptr[i] = 10 * i;
  sum = ptr[size - 1] + *ptr;
  free(ptr);
  return sum;
}


/* Function: call_malloc_free @ 0x2B10 */
int __cdecl call_malloc_free()
{
  return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x2B20 */
int __cdecl param_memset(void *buffer, size_t size)
{
  size_t i; // [rsp+8h] [rbp-28h]
  int sum; // [rsp+14h] [rbp-1Ch]

  memset(buffer, 0, size);
  sum = 0;
  for ( i = 0; i < size; ++i )
    sum += *((unsigned __int8 *)buffer + i);
  return sum;
}


/* Function: call_memset @ 0x2B90 */
int __cdecl call_memset()
{
  int i; // [rsp+Ch] [rbp-34h]
  int buffer[12]; // [rsp+10h] [rbp-30h] BYREF

  for ( i = 0; i < 10; ++i )
    buffer[i] = 255;
  param_memset(buffer, 0x28u);
  return buffer[9] + buffer[0];
}


/* Function: param_strchr_strstr @ 0x2BE0 */
int __cdecl param_strchr_strstr(const char *str, char ch_0, const char *substr)
{
  int v4; // [rsp+8h] [rbp-48h]
  int v5; // [rsp+10h] [rbp-40h]
  char *pos2; // [rsp+20h] [rbp-30h]
  char *pos1; // [rsp+30h] [rbp-20h]

  pos1 = strchr(str, ch_0);
  if ( pos1 )
    v5 = (_DWORD)pos1 - (_DWORD)str;
  else
    v5 = -1;
  pos2 = strstr(str, substr);
  if ( pos2 )
    v4 = (_DWORD)pos2 - (_DWORD)str;
  else
    v4 = -1;
  return v4 + v5;
}


/* Function: call_strchr_strstr @ 0x2C90 */
int __cdecl call_strchr_strstr()
{
  return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x2CD0 */
void __cdecl test_standard_library_functions()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax

  printf(asc_50A6);
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
  printf(aLibL112D, v11);
}


/* Function: param_linux_syscall @ 0x2DE0 */
int __cdecl param_linux_syscall(const char *pathname)
{
  int fd; // [rsp+Ch] [rbp-14h]

  fd = syscall(2, pathname, 0);
  if ( fd < 0 )
    return -*__errno_location();
  syscall(3, (unsigned int)fd);
  return fd;
}


/* Function: call_linux_syscall @ 0x2E40 */
int __cdecl call_linux_syscall()
{
  int v0; // edx
  int result; // eax

  v0 = param_linux_syscall("/etc/passwd");
  result = -1;
  if ( v0 >= 0 )
    return 42;
  return result;
}


/* Function: param_win32_api @ 0x2E70 */
int __cdecl param_win32_api(const char *filename)
{
  int v1; // eax
  stat st; // [rsp+0h] [rbp-A0h] BYREF
  const char *filenamea; // [rsp+90h] [rbp-10h]

  filenamea = filename;
  if ( stat(filename, &st) < 0 )
    return -1;
  v1 = -2;
  if ( st.st_size > 0 )
    return 42;
  return v1;
}


/* Function: call_win32_api @ 0x2ED0 */
int __cdecl call_win32_api()
{
  return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x2EF0 */
int __cdecl param_fork_exec(const char *prog, const char *arg)
{
  int status; // [rsp+10h] [rbp-20h] BYREF
  pid_t pid; // [rsp+14h] [rbp-1Ch]
  const char *arga; // [rsp+18h] [rbp-18h]
  const char *proga; // [rsp+20h] [rbp-10h]

  proga = prog;
  arga = arg;
  pid = fork();
  if ( pid < 0 )
    return -1;
  if ( !pid )
  {
    execl(proga, proga, arga, 0);
    _exit(127);
  }
  if ( waitpid(pid, &status, 0) < 0 )
    return -2;
  if ( (status & 0x7F) != 0 )
    return -3;
  return (status & 0xFF00) >> 8;
}


/* Function: call_fork_exec @ 0x2FB0 */
int __cdecl call_fork_exec()
{
  int v0; // edx
  int result; // eax

  v0 = param_fork_exec("/bin/true", 0);
  result = -1;
  if ( !v0 )
    return 42;
  return result;
}


/* Function: param_pipe_communication @ 0x2FF0 */
int __cdecl param_pipe_communication()
{
  size_t v0; // rax
  int v1; // eax
  int fd; // [rsp+Ch] [rbp-54h]
  __int64 bytes; // [rsp+18h] [rbp-48h]
  pid_t pid; // [rsp+2Ch] [rbp-34h]
  char buffer[36]; // [rsp+30h] [rbp-30h] BYREF
  int pipefd[2]; // [rsp+54h] [rbp-Ch] BYREF

  if ( pipe(pipefd) < 0 )
    return -1;
  pid = fork();
  if ( pid < 0 )
    return -2;
  if ( !pid )
  {
    close(pipefd[0]);
    fd = pipefd[1];
    v0 = strlen("HelloPipe");
    write(fd, "HelloPipe", v0);
    close(pipefd[1]);
    _exit(0);
  }
  close(pipefd[1]);
  bytes = read(pipefd[0], buffer, 0x1Fu);
  buffer[bytes] = 0;
  close(pipefd[0]);
  wait(0);
  v1 = -3;
  if ( bytes > 0 )
    return 42;
  return v1;
}


/* Function: call_pipe_communication @ 0x30E0 */
int __cdecl call_pipe_communication()
{
  return param_pipe_communication();
}


/* Function: param_socket_create @ 0x30F0 */
int __cdecl param_socket_create()
{
  sockaddr_in addr; // [rsp+0h] [rbp-20h] BYREF
  int opt; // [rsp+14h] [rbp-Ch] BYREF
  int sock; // [rsp+18h] [rbp-8h]

  sock = socket(2, 1, 0);
  if ( sock < 0 )
    return -1;
  opt = 1;
  if ( setsockopt(sock, 1, 2, &opt, 4u) >= 0 )
  {
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = 2;
    addr.sin_port = htons(0);
    addr.sin_addr.s_addr = 0;
    if ( bind(sock, (const struct sockaddr *)&addr, 0x10u) >= 0 )
    {
      if ( listen(sock, 5) >= 0 )
      {
        close(sock);
        return 42;
      }
      else
      {
        close(sock);
        return -4;
      }
    }
    else
    {
      close(sock);
      return -3;
    }
  }
  else
  {
    close(sock);
    return -2;
  }
}


/* Function: call_socket_create @ 0x3200 */
int __cdecl call_socket_create()
{
  return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x3210 */
int __cdecl param_shmget_shmat()
{
  int len; // [rsp+4h] [rbp-2Ch]
  char *shm; // [rsp+8h] [rbp-28h]
  int shmid; // [rsp+14h] [rbp-1Ch]
  int key; // [rsp+18h] [rbp-18h]
  int fd; // [rsp+1Ch] [rbp-14h]

  fd = open("/tmp/binbench_shm", 66, 438);
  if ( fd < 0 )
    return -1;
  close(fd);
  key = ftok("/tmp/binbench_shm", 42);
  if ( key < 0 )
    return -1;
  shmid = shmget(key, 0x1000u, 950);
  if ( shmid < 0 )
    return -2;
  shm = (char *)shmat(shmid, 0, 0);
  if ( shm == (char *)-1LL )
    return -3;
  strcpy(shm, "SharedMemory");
  len = strlen(shm);
  shmdt(shm);
  shmctl(shmid, 0, 0);
  return len;
}


/* Function: call_shmget_shmat @ 0x3320 */
int __cdecl call_shmget_shmat()
{
  int v0; // edx
  int result; // eax

  v0 = param_shmget_shmat();
  result = -1;
  if ( v0 > 0 )
    return 42;
  return result;
}


/* Function: param_signal_handling @ 0x3350 */
int __cdecl param_signal_handling()
{
  int v0; // eax
  int v1; // eax
  bool v3; // [rsp+6h] [rbp-Ah]
  bool v4; // [rsp+7h] [rbp-9h]
  int attempts; // [rsp+8h] [rbp-8h]
  int attemptsa; // [rsp+8h] [rbp-8h]

  if ( signal(10, (__sighandler_t)signal_handler) == (__sighandler_t)-1LL )
    return -1;
  if ( signal(14, (__sighandler_t)signal_handler) == (__sighandler_t)-1LL )
    return -2;
  signal_received = 0;
  raise(10);
  attempts = 1000;
  while ( 1 )
  {
    v4 = 0;
    if ( !signal_received )
    {
      v0 = attempts--;
      v4 = v0 > 0;
    }
    if ( !v4 )
      break;
    usleep(0x3E8u);
  }
  if ( !signal_received )
    return -3;
  if ( signal_number != 10 )
    return -4;
  signal_received = 0;
  alarm(1u);
  attemptsa = 2000;
  while ( 1 )
  {
    v3 = 0;
    if ( !signal_received )
    {
      v1 = attemptsa--;
      v3 = v1 > 0;
    }
    if ( !v3 )
      break;
    usleep(0x3E8u);
  }
  if ( !signal_received || signal_number != 14 )
    return -5;
  signal(10, 0);
  signal(14, 0);
  return 42;
}


/* Function: signal_handler @ 0x3510 */
void __cdecl signal_handler(int sig)
{
  signal_received = 1;
  signal_number = sig;
}


/* Function: call_signal_handling @ 0x3530 */
int __cdecl call_signal_handling()
{
  return param_signal_handling();
}


/* Function: test_system_calls @ 0x3540 */
void __cdecl test_system_calls()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax

  printf(asc_524C);
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
  printf(aSysL307D, v6);
}


/* Function: thread_compute @ 0x35F0 */
void *__cdecl thread_compute(void *arg)
{
  void *v1; // rax
  int result; // [rsp+8h] [rbp-18h]

  result = *(_DWORD *)arg * *(_DWORD *)arg;
  v1 = malloc(4u);
  *(_DWORD *)v1 = result;
  return v1;
}


/* Function: param_pthread_create @ 0x3640 */
int __cdecl param_pthread_create(int x)
{
  int result; // [rsp+8h] [rbp-28h]
  void *thread_ret; // [rsp+10h] [rbp-20h] BYREF
  int input; // [rsp+1Ch] [rbp-14h] BYREF
  pthread_t tid; // [rsp+20h] [rbp-10h] BYREF
  int xa; // [rsp+28h] [rbp-8h]

  xa = x;
  input = x;
  if ( pthread_create(&tid, 0, (void *(*)(void *))thread_compute, &input) )
    return -1;
  pthread_join(tid, &thread_ret);
  result = *(_DWORD *)thread_ret;
  free(thread_ret);
  return result;
}


/* Function: call_pthread_create @ 0x36B0 */
int __cdecl call_pthread_create()
{
  return param_pthread_create(7);
}


/* Function: thread_sum @ 0x36C0 */
void *__cdecl thread_sum(void *arg)
{
  int i; // [rsp+0h] [rbp-14h]

  *((_DWORD *)arg + 2) = 0;
  for ( i = *(_DWORD *)arg; i <= *((_DWORD *)arg + 1); ++i )
    *((_DWORD *)arg + 2) += i;
  return 0;
}


/* Function: param_pthread_join @ 0x3720 */
int __cdecl param_pthread_join()
{
  int i_0; // [rsp+4h] [rbp-5Ch]
  int total; // [rsp+8h] [rbp-58h]
  int i; // [rsp+Ch] [rbp-54h]
  ThreadData data[3]; // [rsp+10h] [rbp-50h] BYREF
  pthread_t tids[3]; // [rsp+40h] [rbp-20h] BYREF

  memset(data, 0, sizeof(data));
  data[0].start = 1;
  data[0].end = 10;
  data[1].start = 11;
  data[1].end = 20;
  data[2].start = 21;
  data[2].end = 30;
  for ( i = 0; i < 3; ++i )
  {
    if ( pthread_create(&tids[i], 0, (void *(*)(void *))thread_sum, &data[i]) )
      return -1;
  }
  total = 0;
  for ( i_0 = 0; i_0 < 3; ++i_0 )
  {
    if ( pthread_join(tids[i_0], 0) )
      return -2;
    total += data[i_0].result;
  }
  return total;
}


/* Function: call_pthread_join @ 0x3840 */
int __cdecl call_pthread_join()
{
  return param_pthread_join();
}


/* Function: thread_increment @ 0x3850 */
void *__cdecl thread_increment(void *arg)
{
  int i; // [rsp+0h] [rbp-10h]
  int iterations; // [rsp+4h] [rbp-Ch]

  iterations = *(_DWORD *)arg;
  for ( i = 0; i < iterations; ++i )
  {
    pthread_mutex_lock(&counter_mutex);
    ++shared_counter;
    pthread_mutex_unlock(&counter_mutex);
    usleep(0x3E8u);
  }
  return 0;
}


/* Function: param_mutex_lock @ 0x38C0 */
int __cdecl param_mutex_lock(int thread_count, int iterations_per_thread)
{
  int v2; // eax
  int i_0; // [rsp+10h] [rbp-20h]
  int i; // [rsp+14h] [rbp-1Ch]
  pthread_t *tids; // [rsp+18h] [rbp-18h]
  int iterations_per_threada; // [rsp+24h] [rbp-Ch] BYREF
  int thread_counta; // [rsp+28h] [rbp-8h]

  thread_counta = thread_count;
  iterations_per_threada = iterations_per_thread;
  tids = (pthread_t *)malloc(8LL * thread_count);
  if ( !tids )
    return -1;
  shared_counter = 0;
  for ( i = 0; i < thread_counta; ++i )
  {
    if ( pthread_create(&tids[i], 0, (void *(*)(void *))thread_increment, &iterations_per_threada) )
    {
      free(tids);
      return -2;
    }
  }
  for ( i_0 = 0; i_0 < thread_counta; ++i_0 )
    pthread_join(tids[i_0], 0);
  free(tids);
  v2 = -3;
  if ( shared_counter == iterations_per_threada * thread_counta )
    return 42;
  return v2;
}


/* Function: call_mutex_lock @ 0x39E0 */
int __cdecl call_mutex_lock()
{
  return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x3A00 */
void *__cdecl consumer_thread(void *arg)
{
  void *result; // rax
  int received; // [rsp+14h] [rbp-Ch]

  pthread_mutex_lock(&cond_mutex);
  while ( !ready )
    pthread_cond_wait(&cond, &cond_mutex);
  received = data;
  pthread_mutex_unlock(&cond_mutex);
  result = malloc(4u);
  *(_DWORD *)result = received;
  return result;
}


/* Function: producer_thread @ 0x3A80 */
void *__cdecl producer_thread(void *arg)
{
  sleep(1u);
  pthread_mutex_lock(&cond_mutex);
  data = 42;
  ready = 1;
  pthread_cond_signal(&cond);
  pthread_mutex_unlock(&cond_mutex);
  return 0;
}


/* Function: param_condition_variable @ 0x3AE0 */
int __cdecl param_condition_variable()
{
  int result; // [rsp+Ch] [rbp-24h]
  void *consumer_ret; // [rsp+10h] [rbp-20h] BYREF
  pthread_t consumer; // [rsp+18h] [rbp-18h] BYREF
  pthread_t producer; // [rsp+20h] [rbp-10h] BYREF

  ready = 0;
  data = 0;
  if ( pthread_create(&consumer, 0, (void *(*)(void *))consumer_thread, 0) )
    return -1;
  if ( pthread_create(&producer, 0, (void *(*)(void *))producer_thread, 0) )
  {
    pthread_cancel(consumer);
    return -2;
  }
  else
  {
    pthread_join(consumer, &consumer_ret);
    pthread_join(producer, 0);
    result = *(_DWORD *)consumer_ret;
    free(consumer_ret);
    return result;
  }
}


/* Function: call_condition_variable @ 0x3BA0 */
int __cdecl call_condition_variable()
{
  return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x3BB0 */
void *__cdecl thread_atomic_increment(void *arg)
{
  signed __int32 i; // [rsp+1Eh] [rbp-10h]
  int iterations; // [rsp+22h] [rbp-Ch]

  iterations = *(_DWORD *)arg;
  for ( i = 0; i < iterations; ++i )
  {
    _InterlockedExchangeAdd(&atomic_counter, 1u);
    _InterlockedCompareExchange(&atomic_counter, i + 1000, i);
  }
  return 0;
}


/* Function: thread_atomic_load_store @ 0x3C50 */
void *__cdecl thread_atomic_load_store(void *arg)
{
  _InterlockedExchange(&atomic_counter, atomic_counter + 100);
  return 0;
}


/* Function: param_atomic_ops @ 0x3C80 */
int __cdecl param_atomic_ops(int thread_count, int iterations)
{
  int v2; // eax
  int final_value; // [rsp+10h] [rbp-30h]
  int i_0; // [rsp+14h] [rbp-2Ch]
  pthread_t load_store_tid; // [rsp+18h] [rbp-28h] BYREF
  int i; // [rsp+20h] [rbp-20h]
  int v8; // [rsp+24h] [rbp-1Ch]
  pthread_t *tids; // [rsp+28h] [rbp-18h]
  int iterationsa; // [rsp+34h] [rbp-Ch] BYREF
  int thread_counta; // [rsp+38h] [rbp-8h]

  thread_counta = thread_count;
  iterationsa = iterations;
  tids = (pthread_t *)malloc(8LL * thread_count);
  if ( !tids )
    return -1;
  v8 = 0;
  _InterlockedExchange(&atomic_counter, 0);
  for ( i = 0; i < thread_counta; ++i )
  {
    if ( pthread_create(&tids[i], 0, (void *(*)(void *))thread_atomic_increment, &iterationsa) )
    {
      free(tids);
      return -2;
    }
  }
  if ( !pthread_create(&load_store_tid, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
    pthread_join(load_store_tid, 0);
  for ( i_0 = 0; i_0 < thread_counta; ++i_0 )
    pthread_join(tids[i_0], 0);
  final_value = atomic_counter;
  free(tids);
  v2 = -3;
  if ( final_value > 0 )
    return 42;
  return v2;
}


/* Function: call_atomic_ops @ 0x3DD0 */
int __cdecl call_atomic_ops()
{
  return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x3DF0 */
void *__cdecl thread_tls_test(void *arg)
{
  void *result; // rax
  int initial; // [rsp+Ch] [rbp-14h]

  initial = __readfsdword(0xFFFFFFD0);
  __writefsdword(0xFFFFFFD0, initial + 50);
  strncpy((char *)(__readfsqword(0) - 32), (const char *)arg, 0x1Fu);
  result = malloc(8u);
  *(_DWORD *)result = initial;
  *((_DWORD *)result + 1) = __readfsdword(0xFFFFFFD0);
  return result;
}


/* Function: param_thread_local_storage @ 0x3E70 */
int __cdecl param_thread_local_storage(int thread_count)
{
  int v1; // eax
  bool v3; // [rsp+7h] [rbp-49h]
  void *ret; // [rsp+18h] [rbp-38h] BYREF
  int i_1; // [rsp+20h] [rbp-30h]
  int total_final; // [rsp+24h] [rbp-2Ch]
  int total_initial; // [rsp+28h] [rbp-28h]
  int j; // [rsp+2Ch] [rbp-24h]
  int i_0; // [rsp+30h] [rbp-20h]
  int i; // [rsp+34h] [rbp-1Ch]
  char **names; // [rsp+38h] [rbp-18h]
  pthread_t *tids; // [rsp+40h] [rbp-10h]
  int thread_counta; // [rsp+48h] [rbp-8h]

  thread_counta = thread_count;
  tids = (pthread_t *)malloc(8LL * thread_count);
  names = (char **)malloc(8LL * thread_count);
  if ( !tids || !names )
    return -1;
  for ( i = 0; i < thread_counta; ++i )
  {
    names[i] = (char *)malloc(0x10u);
    snprintf(names[i], 0x10u, "Thread-%d", i);
  }
  for ( i_0 = 0; i_0 < thread_counta; ++i_0 )
  {
    if ( pthread_create(&tids[i_0], 0, (void *(*)(void *))thread_tls_test, names[i_0]) )
    {
      for ( j = 0; j <= i_0; ++j )
        free(names[j]);
      free(names);
      free(tids);
      return -2;
    }
  }
  total_initial = 0;
  total_final = 0;
  for ( i_1 = 0; i_1 < thread_counta; ++i_1 )
  {
    pthread_join(tids[i_1], &ret);
    total_initial += *(_DWORD *)ret;
    total_final += *((_DWORD *)ret + 1);
    free(ret);
    free(names[i_1]);
  }
  free(names);
  free(tids);
  v3 = 0;
  if ( total_initial == 100 * thread_counta )
    v3 = total_final == 150 * thread_counta;
  v1 = -3;
  if ( v3 )
    return 42;
  return v1;
}


/* Function: call_thread_local_storage @ 0x40B0 */
int __cdecl call_thread_local_storage()
{
  return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x40C0 */
void __cdecl test_thread_concurrency()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax

  printf(asc_5336);
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
  printf(aThrL306D, v5);
}


/* Function: main @ 0x4160 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}


/* Function: .term_proc @ 0x4188 */
void term_proc()
{
  ;
}


/* FAILED to decompile: raise @ 0x82D8 */

/* FAILED to decompile: free @ 0x82E0 */

/* FAILED to decompile: __libc_start_main @ 0x82E8 */

/* FAILED to decompile: __errno_location @ 0x82F0 */

/* FAILED to decompile: unlink @ 0x82F8 */

/* FAILED to decompile: strncpy @ 0x8300 */

/* FAILED to decompile: _exit @ 0x8308 */

/* FAILED to decompile: strcpy @ 0x8310 */

/* FAILED to decompile: fread @ 0x8318 */

/* FAILED to decompile: setsockopt @ 0x8320 */

/* FAILED to decompile: shmdt @ 0x8328 */

/* FAILED to decompile: write @ 0x8330 */

/* FAILED to decompile: pthread_cond_wait @ 0x8338 */

/* FAILED to decompile: fclose @ 0x8340 */

/* FAILED to decompile: strlen @ 0x8348 */

/* FAILED to decompile: htons @ 0x8350 */

/* FAILED to decompile: strchr @ 0x8358 */

/* FAILED to decompile: printf @ 0x8360 */

/* FAILED to decompile: rewind @ 0x8368 */

/* FAILED to decompile: snprintf @ 0x8370 */

/* FAILED to decompile: memset @ 0x8378 */

/* FAILED to decompile: alarm @ 0x8380 */

/* FAILED to decompile: close @ 0x8388 */

/* FAILED to decompile: pipe @ 0x8390 */

/* FAILED to decompile: read @ 0x8398 */

/* FAILED to decompile: memcmp @ 0x83A0 */

/* FAILED to decompile: pthread_cond_signal @ 0x83A8 */

/* FAILED to decompile: strcmp @ 0x83B0 */

/* FAILED to decompile: signal @ 0x83B8 */

/* FAILED to decompile: syscall @ 0x83C0 */

/* FAILED to decompile: stat_0 @ 0x83C8 */

/* FAILED to decompile: memcpy @ 0x83D0 */

/* FAILED to decompile: fileno @ 0x83D8 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x83E0 */

/* FAILED to decompile: malloc @ 0x83E8 */

/* FAILED to decompile: __isoc99_sscanf @ 0x83F0 */

/* FAILED to decompile: listen @ 0x83F8 */

/* FAILED to decompile: bind @ 0x8400 */

/* FAILED to decompile: pthread_create @ 0x8408 */

/* FAILED to decompile: waitpid @ 0x8410 */

/* FAILED to decompile: open @ 0x8418 */

/* FAILED to decompile: shmctl @ 0x8420 */

/* FAILED to decompile: fopen @ 0x8428 */

/* FAILED to decompile: shmat @ 0x8430 */

/* FAILED to decompile: shmget @ 0x8438 */

/* FAILED to decompile: fwrite @ 0x8440 */

/* FAILED to decompile: ftok @ 0x8448 */

/* FAILED to decompile: pthread_join @ 0x8450 */

/* FAILED to decompile: execl @ 0x8458 */

/* FAILED to decompile: pthread_cancel @ 0x8460 */

/* FAILED to decompile: sleep @ 0x8468 */

/* FAILED to decompile: wait @ 0x8470 */

/* FAILED to decompile: fork @ 0x8478 */

/* FAILED to decompile: strstr @ 0x8480 */

/* FAILED to decompile: pthread_mutex_lock @ 0x8488 */

/* FAILED to decompile: usleep @ 0x8490 */

/* FAILED to decompile: socket @ 0x8498 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x84A0 */

/* FAILED to decompile: __gmon_start__ @ 0x84B0 */

/* Total functions decompiled: 71, failed: 59 */
