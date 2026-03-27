/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/6/6_clang_O2_g
 * Processor: arm
 */

/* Function: .init_proc @ 0xC3C */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_C48 @ 0xC48 */
void sub_C48()
{
  JUMPOUT(0);
}


/* Function: param_strlen_0 @ 0xE24 */
size_t param_strlen_0(const char *s)
{
  return strlen(s);
}


/* Function: _start @ 0xF70 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_FAC + 19548), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0xFB4 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0xFD8 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x101C */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x106C */
void *_do_global_dtors_aux()
{
  void *result; // r0

  if ( !completed_0 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x10D4 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: param_strcpy @ 0x10D8 */
int __fastcall param_strcpy(char *dst, const char *src)
{
  char *v2; // r0

  v2 = strcpy(dst, src);
  return param_strlen_0(v2);
}


/* Function: call_strcpy @ 0x10E8 */
size_t call_strcpy()
{
  char v1[40]; // [sp+0h] [bp-28h] BYREF

  strcpy(v1, "HelloLib");
  return param_strlen_0(v1);
}


/* Function: param_strcmp @ 0x1124 */
int __fastcall param_strcmp(const char *s1, const char *s2)
{
  int v2; // r0
  int v3; // r1

  v2 = strcmp(s1, s2);
  v3 = v2;
  if ( v2 )
    v3 = -1;
  if ( v2 >= 1 )
    return 1;
  return v3;
}


/* Function: call_strcmp @ 0x114C */
int call_strcmp()
{
  return 0;
}


/* Function: call_strlen @ 0x1158 */
int call_strlen()
{
  return 12;
}


/* Function: param_memcpy @ 0x1160 */
int __fastcall param_memcpy(void *dst, const void *src, size_t n)
{
  memcpy(dst, src, n);
  return n;
}


/* Function: call_memcpy @ 0x1178 */
int call_memcpy()
{
  return 90;
}


/* Function: param_memcmp @ 0x1180 */
int __fastcall param_memcmp(const void *p1, const void *p2, size_t n)
{
  int v3; // r0
  int v4; // r1

  v3 = memcmp(p1, p2, n);
  v4 = v3;
  if ( v3 )
    v4 = -1;
  if ( v3 >= 1 )
    return 1;
  return v4;
}


/* Function: call_memcmp @ 0x11A8 */
int call_memcmp()
{
  int v0; // r0
  int v1; // r5
  int v2; // r0
  int v3; // r1

  v0 = memcmp(&unk_2ADC, &unk_2AD0, 0xCu);
  v1 = v0;
  if ( v0 )
    v1 = -1;
  if ( v0 >= 1 )
    v1 = 1;
  v2 = memcmp(&unk_2ADC, &unk_2ADC, 0xCu);
  v3 = v2;
  if ( v2 )
    v3 = -1;
  if ( v2 >= 1 )
    v3 = 1;
  return v3 + v1;
}


/* Function: param_printf @ 0x1218 */
int __fastcall param_printf(int x, const char *name)
{
  return printf("Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x1230 */
int call_printf()
{
  return printf("Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x1250 */
int __fastcall param_scanf(const char *input_str)
{
  int v1; // r0
  int v2; // r1
  int v4; // [sp+0h] [bp-10h] BYREF
  int v5; // [sp+4h] [bp-Ch] BYREF

  v1 = _isoc99_sscanf(input_str, "%d,%d", &v5, &v4);
  v2 = -1;
  if ( v1 == 2 )
    return v4 + v5;
  return v2;
}


/* Function: call_scanf @ 0x1294 */
int call_scanf()
{
  int v0; // r0
  int v1; // r1
  int v3; // [sp+0h] [bp-10h] BYREF
  int v4; // [sp+4h] [bp-Ch] BYREF

  v0 = _isoc99_sscanf("123,456", "%d,%d", &v4, &v3);
  v1 = -1;
  if ( v0 == 2 )
    return v3 + v4;
  return v1;
}


/* Function: param_fopen_fclose @ 0x12E4 */
int __fastcall param_fopen_fclose(const char *filename)
{
  FILE *v1; // r0
  FILE *v3; // r4
  int v4; // r5

  v1 = fopen(filename, "r");
  if ( !v1 )
    return -1;
  v3 = v1;
  v4 = fileno(v1);
  fclose(v3);
  return v4;
}


/* Function: call_fopen_fclose @ 0x1328 */
int call_fopen_fclose()
{
  FILE *v0; // r0
  int result; // r0
  FILE *v2; // r4
  int v3; // r5

  v0 = fopen("/etc/passwd", "r");
  if ( !v0 )
    return -1;
  v2 = v0;
  v3 = fileno(v0);
  fclose(v2);
  result = -1;
  if ( v3 > -1 )
    return 42;
  return result;
}


/* Function: param_fread_fwrite @ 0x1380 */
int __fastcall param_fread_fwrite(const char *tmpfile)
{
  FILE *v2; // r0
  FILE *v3; // r5
  size_t v4; // r7
  int result; // r0
  int v6; // r1
  _BYTE v7[56]; // [sp+0h] [bp-38h] BYREF

  v2 = fopen(tmpfile, "w+");
  if ( !v2 )
    return -1;
  v3 = v2;
  if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
  {
    rewind(v3);
    v4 = fread(v7, 1u, 0x12u, v3);
    v7[v4] = 0;
    fclose(v3);
    unlink(tmpfile);
    result = -3;
    if ( v4 == 18 )
    {
      v6 = bcmp(v7, "BinBench Test Data", 0x13u);
      result = -3;
      if ( !v6 )
        return 42;
    }
  }
  else
  {
    fclose(v3);
    return -2;
  }
  return result;
}


/* Function: call_fread_fwrite @ 0x1460 */
int call_fread_fwrite()
{
  return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1470 */
int __fastcall param_malloc_free(size_t size)
{
  int v1; // r5
  _DWORD *v3; // r0
  int v5; // r1
  _DWORD *v6; // r2
  size_t v7; // r3
  int v8; // r4

  v3 = malloc(4 * size);
  if ( !v3 )
    return -1;
  if ( size )
  {
    v5 = 0;
    v6 = v3;
    v7 = size;
    do
    {
      *v6++ = v5;
      v5 += 10;
      --v7;
    }
    while ( v7 );
    v1 = *v3;
  }
  v8 = v3[size - 1];
  free(v3);
  return v8 + v1;
}


/* Function: call_malloc_free @ 0x14D4 */
int call_malloc_free()
{
  return 90;
}


/* Function: param_memset @ 0x14DC */
int __fastcall param_memset(void *buffer, size_t size)
{
  size_t v2; // r4
  unsigned __int8 *v3; // r5
  int v4; // r6
  int v5; // t1

  v2 = size;
  v3 = (unsigned __int8 *)buffer;
  v4 = 0;
  memset(buffer, 0, size);
  if ( v2 )
  {
    v4 = 0;
    do
    {
      v5 = *v3++;
      --v2;
      v4 += v5;
    }
    while ( v2 );
  }
  return v4;
}


/* Function: call_memset @ 0x1520 */
int call_memset()
{
  return 0;
}


/* Function: param_strchr_strstr @ 0x1528 */
int __fastcall param_strchr_strstr(const char *str, char ch, const char *substr)
{
  char *v5; // r0
  int v6; // r6
  char *v7; // r0
  int v8; // r1

  v5 = strchr(str, ch);
  v6 = v5 - str;
  if ( !v5 )
    v6 = -1;
  v7 = strstr(str, substr);
  v8 = v7 - str;
  if ( !v7 )
    v8 = -1;
  return v8 + v6;
}


/* Function: call_strchr_strstr @ 0x1568 */
int call_strchr_strstr()
{
  return 15;
}


/* Function: test_standard_library_functions @ 0x1570 */
void test_standard_library_functions()
{
  size_t v0; // r0
  int v1; // r0
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r4
  FILE *v9; // r0
  FILE *v10; // r5
  int v11; // r6
  int v12; // r0
  char s[32]; // [sp+4h] [bp-34h] BYREF
  int v14; // [sp+24h] [bp-14h] BYREF

  puts(asc_2E36);
  strcpy(s, "HelloLib");
  v0 = param_strlen_0(s);
  printf(aLibL101D, v0);
  printf(aLibL102D, 0);
  printf(aLibL103D, 12);
  printf(aLibL104D, 90);
  v1 = memcmp(&unk_2ADC, &unk_2AD0, 0xCu);
  v2 = v1;
  if ( v1 )
    v2 = -1;
  if ( v1 >= 1 )
    v2 = 1;
  v3 = memcmp(&unk_2ADC, &unk_2ADC, 0xCu);
  v4 = v3;
  if ( v3 )
    v4 = -1;
  if ( v3 >= 1 )
    v4 = 1;
  printf(aLibL105D, v4 + v2);
  v5 = printf("Value: %d, Name: %s\n", 42, "Test");
  printf(aLibL106D, v5);
  v6 = _isoc99_sscanf("123,456", "%d,%d", s, &v14);
  v7 = -1;
  v8 = -1;
  if ( v6 == 2 )
    v7 = v14 + *(_DWORD *)s;
  printf(aLibL107D, v7);
  v9 = fopen("/etc/passwd", "r");
  if ( v9 )
  {
    v10 = v9;
    v11 = fileno(v9);
    fclose(v10);
    v8 = -1;
    if ( v11 > -1 )
      v8 = 42;
  }
  printf(aLibL108D, v8);
  v12 = param_fread_fwrite("/tmp/binbench_test.tmp");
  printf(aLibL109D, v12);
  printf(aLibL110D, 90);
  printf(aLibL111D, 0);
  printf(aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x17B8 */
int __fastcall param_linux_syscall(const char *pathname)
{
  int v1; // r0
  int v2; // r4

  v1 = syscall(5, pathname, 0);
  if ( v1 <= -1 )
    return -*_errno_location();
  v2 = v1;
  syscall(6, v1);
  return v2;
}


/* Function: call_linux_syscall @ 0x1800 */
int call_linux_syscall()
{
  int v0; // r0
  int v1; // r4
  int result; // r0

  v0 = syscall(5, "/etc/passwd", 0);
  if ( v0 <= -1 )
  {
    v1 = -*_errno_location();
  }
  else
  {
    v1 = v0;
    syscall(6, v0);
  }
  result = -1;
  if ( v1 > -1 )
    return 42;
  return result;
}


/* Function: param_win32_api @ 0x1858 */
int __fastcall param_win32_api(const char *filename)
{
  int v1; // r0
  int v2; // r1
  struct stat v4; // [sp+0h] [bp-60h] BYREF

  v1 = stat_0(filename, &v4);
  v2 = -2;
  if ( v4.st_size > 0 )
    v2 = 42;
  if ( v1 <= -1 )
    return -1;
  return v2;
}


/* Function: call_win32_api @ 0x1890 */
int call_win32_api()
{
  int v0; // r0
  int v1; // r1
  struct stat v3; // [sp+0h] [bp-60h] BYREF

  v0 = stat_0("/etc/passwd", &v3);
  v1 = -2;
  if ( v3.st_size > 0 )
    v1 = 42;
  if ( v0 <= -1 )
    return -1;
  return v1;
}


/* Function: param_fork_exec @ 0x18D4 */
int __fastcall param_fork_exec(const char *prog, const char *arg)
{
  int v4; // r0
  int result; // r0
  int stat_loc; // [sp+4h] [bp-14h] BYREF

  v4 = fork();
  if ( v4 < 0 )
    return -1;
  if ( !v4 )
  {
    execl(prog, prog, arg, 0);
    exit(127);
  }
  if ( waitpid(v4, &stat_loc, 0) < 0 )
    return -2;
  result = -3;
  if ( (stat_loc & 0x7F) == 0 )
    return BYTE1(stat_loc);
  return result;
}


/* Function: call_fork_exec @ 0x1954 */
int call_fork_exec()
{
  int v0; // r0
  int v1; // r4
  int stat_loc; // [sp+4h] [bp-Ch] BYREF

  v0 = fork();
  v1 = -1;
  if ( v0 >= 0 )
  {
    if ( !v0 )
    {
      execl("/bin/true", "/bin/true", 0, 0);
      exit(127);
    }
    if ( waitpid(v0, &stat_loc, 0) >= 0 && (stat_loc & 0x7F) == 0 )
    {
      v1 = -1;
      if ( (stat_loc & 0xFF00) == 0 )
        return 42;
    }
  }
  return v1;
}


/* Function: param_pipe_communication @ 0x19D0 */
int param_pipe_communication()
{
  __pid_t v0; // r0
  ssize_t v1; // r5
  int result; // r0
  _BYTE v3[32]; // [sp+0h] [bp-38h] BYREF
  int pipedes[6]; // [sp+20h] [bp-18h] BYREF

  if ( pipe(pipedes) < 0 )
    return -1;
  v0 = fork();
  if ( v0 < 0 )
    return -2;
  if ( !v0 )
  {
    close(pipedes[0]);
    write(pipedes[1], "HelloPipe", 9u);
    close(pipedes[1]);
    exit(0);
  }
  close(pipedes[1]);
  v1 = read(pipedes[0], v3, 0x1Fu);
  v3[v1] = 0;
  close(pipedes[0]);
  wait(0);
  result = -3;
  if ( v1 > 0 )
    return 42;
  return result;
}


/* Function: call_pipe_communication @ 0x1A88 */
// attributes: thunk
int call_pipe_communication()
{
  return param_pipe_communication();
}


/* Function: param_socket_create @ 0x1A8C */
int param_socket_create()
{
  int v0; // r0
  int v1; // r4
  int v2; // r5
  int result; // r0
  struct sockaddr v4; // [sp+4h] [bp-24h] BYREF
  int optval[5]; // [sp+14h] [bp-14h] BYREF

  v0 = socket(2, 1, 0);
  if ( v0 < 0 )
    return -1;
  v1 = v0;
  optval[0] = 1;
  if ( setsockopt(v0, 1, 2, optval, 4u) <= -1 )
  {
    close(v1);
    return -2;
  }
  else
  {
    *(_DWORD *)&v4.sa_family = 2;
    memset(&v4.sa_data[2], 0, 12);
    if ( bind(v1, &v4, 0x10u) <= -1 )
    {
      close(v1);
      return -3;
    }
    else
    {
      v2 = listen(v1, 5);
      close(v1);
      result = 42;
      if ( v2 < 0 )
        return -4;
    }
  }
  return result;
}


/* Function: call_socket_create @ 0x1B64 */
// attributes: thunk
int call_socket_create()
{
  return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x1B68 */
size_t param_shmget_shmat()
{
  int v0; // r0
  int v1; // r4
  int v2; // r0
  int v3; // r4
  char *v4; // r0
  char *v5; // r5
  size_t v6; // r6

  v0 = open("/tmp/binbench_shm", 66, 438);
  v1 = -1;
  if ( v0 >= 0 )
  {
    close(v0);
    if ( ftok("/tmp/binbench_shm", 42) >= 0 )
    {
      v2 = shmget();
      if ( v2 < 0 )
      {
        return -2;
      }
      else
      {
        v3 = v2;
        v4 = (char *)shmat();
        if ( v4 != (char *)-1 )
        {
          v5 = v4;
          strcpy(v4, "SharedMemory");
          v6 = param_strlen_0(v4);
          shmdt(v5);
          shmctl(v3, 0, 0);
          return v6;
        }
        return -3;
      }
    }
  }
  return v1;
}


/* Function: call_shmget_shmat @ 0x1C44 */
int call_shmget_shmat()
{
  signed int v0; // r0
  int v1; // r1

  v0 = param_shmget_shmat();
  v1 = -1;
  if ( v0 > 0 )
    return 42;
  return v1;
}


/* Function: param_signal_handling @ 0x1C64 */
int param_signal_handling()
{
  int result; // r0
  unsigned int v1; // r5
  bool v2; // cc
  unsigned int v3; // r4

  if ( signal(10, signal_handler) == (__sighandler_t)-1 )
    return -1;
  if ( signal(14, signal_handler) == (__sighandler_t)-1 )
    return -2;
  signal_received = 0;
  raise(10);
  if ( !signal_received )
  {
    v1 = 1000;
    do
    {
      usleep(0x3E8u);
      if ( signal_received )
        break;
      v2 = v1-- > 1;
    }
    while ( v2 );
  }
  if ( !signal_received )
    return -3;
  result = -4;
  if ( signal_number == 10 )
  {
    signal_received = 0;
    alarm(1u);
    if ( !signal_received )
    {
      v3 = 2000;
      do
      {
        usleep(0x3E8u);
        if ( signal_received )
          break;
        v2 = v3-- > 1;
      }
      while ( v2 );
    }
    result = -5;
    if ( signal_received )
    {
      if ( signal_number == 14 )
      {
        signal(10, 0);
        signal(14, 0);
        return 42;
      }
    }
  }
  return result;
}


/* Function: signal_handler @ 0x1DD8 */
void __fastcall signal_handler(int sig)
{
  signal_received = 1;
  signal_number = sig;
}


/* Function: call_signal_handling @ 0x1E00 */
// attributes: thunk
int call_signal_handling()
{
  return param_signal_handling();
}


/* Function: test_system_calls @ 0x1E04 */
void test_system_calls()
{
  int v0; // r0
  int v1; // r5
  int v2; // r1
  int v3; // r4
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  struct stat v11; // [sp+0h] [bp-68h] BYREF

  puts(asc_2E5A);
  v0 = syscall(5, "/etc/passwd", 0);
  if ( v0 <= -1 )
  {
    v1 = -*_errno_location();
  }
  else
  {
    v1 = v0;
    syscall(6, v0);
  }
  v2 = -1;
  v3 = -1;
  if ( v1 > -1 )
    v2 = 42;
  printf(aSysL301D, v2);
  v4 = stat_0("/etc/passwd", &v11);
  v5 = -2;
  if ( v11.st_size > 0 )
    v5 = 42;
  if ( v4 <= -1 )
    v5 = -1;
  printf(aSysL302D, v5);
  v6 = fork();
  v7 = -1;
  if ( v6 >= 0 )
  {
    if ( !v6 )
    {
      execl("/bin/true", "/bin/true", 0, 0);
      exit(127);
    }
    if ( waitpid(v6, (int *)&v11, 0) < 0 || (v11.st_dev & 0x7F) != 0 )
    {
      v7 = -1;
    }
    else
    {
      v7 = -1;
      if ( (v11.st_dev & 0xFF00) == 0 )
        v7 = 42;
    }
  }
  printf(aSysL303D, v7);
  v8 = param_pipe_communication();
  printf(aSysL304D, v8);
  v9 = param_socket_create();
  printf(aSysL305D, v9);
  if ( (int)param_shmget_shmat() > 0 )
    v3 = 42;
  printf(aSysL306D, v3);
  v10 = param_signal_handling();
  printf(aSysL307D, v10);
}


/* Function: thread_compute @ 0x1FA8 */
void *__fastcall thread_compute(void *arg)
{
  int v1; // r4
  void *result; // r0

  v1 = *(_DWORD *)arg * *(_DWORD *)arg;
  result = malloc(4u);
  *(_DWORD *)result = v1;
  return result;
}


/* Function: param_pthread_create @ 0x1FC8 */
int __fastcall param_pthread_create(int x)
{
  int v1; // r4
  void *thread_return; // [sp+4h] [bp-14h] BYREF
  int arg; // [sp+8h] [bp-10h] BYREF
  pthread_t newthread; // [sp+Ch] [bp-Ch] BYREF

  arg = x;
  v1 = -1;
  if ( !pthread_create(&newthread, 0, thread_compute, &arg) )
  {
    pthread_join(newthread, &thread_return);
    v1 = *(_DWORD *)thread_return;
    free(thread_return);
  }
  return v1;
}


/* Function: call_pthread_create @ 0x2024 */
int call_pthread_create()
{
  int v0; // r4
  void *thread_return; // [sp+4h] [bp-14h] BYREF
  int arg; // [sp+8h] [bp-10h] BYREF
  pthread_t newthread; // [sp+Ch] [bp-Ch] BYREF

  arg = 7;
  v0 = -1;
  if ( !pthread_create(&newthread, 0, thread_compute, &arg) )
  {
    pthread_join(newthread, &thread_return);
    v0 = *(_DWORD *)thread_return;
    free(thread_return);
  }
  return v0;
}


/* Function: thread_sum @ 0x2084 */
void *__fastcall thread_sum(void *arg)
{
  int v1; // r2

  *((_DWORD *)arg + 2) = 0;
  v1 = *((_DWORD *)arg + 1);
  if ( v1 >= *(_DWORD *)arg )
    *((_DWORD *)arg + 2) = *(_DWORD *)arg
                         + (v1 - *(_DWORD *)arg) * (*(_DWORD *)arg + 1)
                         + ((__int64)((unsigned int)(v1 + ~*(_DWORD *)arg)
                                    * (unsigned __int64)(unsigned int)(v1 - *(_DWORD *)arg)) >> 1);
  return 0;
}


/* Function: param_pthread_join @ 0x20D4 */
int param_pthread_join()
{
  int v0; // r4
  int v1; // r5
  int v2; // r6
  _DWORD v4[2]; // [sp+0h] [bp-40h] BYREF
  int v5; // [sp+8h] [bp-38h]
  _DWORD v6[2]; // [sp+Ch] [bp-34h] BYREF
  int v7; // [sp+14h] [bp-2Ch]
  _DWORD v8[2]; // [sp+18h] [bp-28h] BYREF
  int v9; // [sp+20h] [bp-20h]
  pthread_t newthread; // [sp+24h] [bp-1Ch] BYREF
  pthread_t th; // [sp+28h] [bp-18h] BYREF
  pthread_t v12[5]; // [sp+2Ch] [bp-14h] BYREF

  v9 = 0;
  v7 = 0;
  v5 = 0;
  v8[1] = 30;
  v8[0] = 21;
  v6[1] = 20;
  v6[0] = 11;
  v4[1] = 10;
  v4[0] = 1;
  v0 = -1;
  if ( !pthread_create(&newthread, 0, thread_sum, v4)
    && !pthread_create(&th, 0, thread_sum, v6)
    && !pthread_create(v12, 0, thread_sum, v8) )
  {
    v0 = -2;
    if ( !pthread_join(newthread, 0) )
    {
      v1 = v5;
      if ( !pthread_join(th, 0) )
      {
        v2 = v7;
        if ( !pthread_join(v12[0], 0) )
          return v9 + v2 + v1;
      }
    }
  }
  return v0;
}


/* Function: call_pthread_join @ 0x21F4 */
// attributes: thunk
int call_pthread_join()
{
  return param_pthread_join();
}


/* Function: thread_increment @ 0x21F8 */
void *__fastcall thread_increment(void *arg)
{
  int v1; // r5

  v1 = *(_DWORD *)arg;
  if ( *(int *)arg >= 1 )
  {
    do
    {
      pthread_mutex_lock(&counter_mutex);
      ++shared_counter;
      pthread_mutex_unlock(&counter_mutex);
      usleep(0x3E8u);
      --v1;
    }
    while ( v1 );
  }
  return 0;
}


/* Function: param_mutex_lock @ 0x2260 */
int __fastcall param_mutex_lock(int thread_count, int iterations_per_thread)
{
  void *v3; // r0
  void *v4; // r8
  pthread_t *v5; // r5
  int v6; // r4
  pthread_t *v7; // r4
  int v8; // r5
  pthread_t v9; // t1
  int result; // r0
  int arg; // [sp+4h] [bp-24h] BYREF

  arg = iterations_per_thread;
  v3 = malloc(4 * thread_count);
  if ( !v3 )
    return -1;
  v4 = v3;
  shared_counter = 0;
  if ( thread_count >= 1 )
  {
    v5 = (pthread_t *)v3;
    v6 = thread_count;
    do
    {
      if ( pthread_create(v5, 0, thread_increment, &arg) )
      {
        free(v4);
        return -2;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    v7 = (pthread_t *)v4;
    v8 = thread_count;
    do
    {
      v9 = *v7++;
      pthread_join(v9, 0);
      --v8;
    }
    while ( v8 );
  }
  free(v4);
  result = -3;
  if ( shared_counter == arg * thread_count )
    return 42;
  return result;
}


/* Function: call_mutex_lock @ 0x2350 */
int call_mutex_lock()
{
  return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x235C */
_DWORD *__fastcall consumer_thread(void *arg)
{
  int v1; // r4
  _DWORD *result; // r0

  pthread_mutex_lock(&cond_mutex);
  if ( !ready )
  {
    do
      pthread_cond_wait(&cond, &cond_mutex);
    while ( ready != 1 );
  }
  v1 = (unsigned __int8)data;
  pthread_mutex_unlock(&cond_mutex);
  if ( v1 )
    v1 = 42;
  result = malloc(4u);
  *result = v1;
  return result;
}


/* Function: producer_thread @ 0x23F4 */
void *__fastcall producer_thread(void *arg)
{
  sleep(1u);
  pthread_mutex_lock(&cond_mutex);
  data = 1;
  ready = 1;
  pthread_cond_signal(&cond);
  pthread_mutex_unlock(&cond_mutex);
  return 0;
}


/* Function: param_condition_variable @ 0x245C */
int param_condition_variable()
{
  int v0; // r4
  void *thread_return; // [sp+4h] [bp-14h] BYREF
  pthread_t newthread; // [sp+8h] [bp-10h] BYREF
  pthread_t th; // [sp+Ch] [bp-Ch] BYREF

  ready = 0;
  data = 0;
  v0 = -1;
  if ( !pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
  {
    if ( pthread_create(&th, 0, producer_thread, 0) )
    {
      pthread_cancel(newthread);
      return -2;
    }
    else
    {
      pthread_join(newthread, &thread_return);
      pthread_join(th, 0);
      v0 = *(_DWORD *)thread_return;
      free(thread_return);
    }
  }
  return v0;
}


/* Function: call_condition_variable @ 0x2518 */
// attributes: thunk
int call_condition_variable()
{
  return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x251C */
void *__fastcall thread_atomic_increment(void *arg)
{
  int v1; // r6
  int v2; // r7
  int v4; // [sp+4h] [bp-1Ch] BYREF

  v1 = *(_DWORD *)arg;
  if ( *(int *)arg >= 1 )
  {
    v2 = 0;
    do
    {
      _atomic_fetch_add_4(&atomic_counter, 1, 5);
      v4 = v2;
      ((void (__fastcall *)(void *, int *, int, int, int))_atomic_compare_exchange_4)(
        &atomic_counter,
        &v4,
        v2 + 1000,
        5,
        5);
      ++v2;
    }
    while ( v2 != v1 );
  }
  return 0;
}


/* Function: thread_atomic_load_store @ 0x2590 */
void *__fastcall thread_atomic_load_store(void *arg)
{
  int v1; // r0

  v1 = _atomic_load_4(&atomic_counter, 5);
  _atomic_store_4(&atomic_counter, v1 + 100, 5);
  return 0;
}


/* Function: param_atomic_ops @ 0x25C8 */
int __fastcall param_atomic_ops(int thread_count, int iterations)
{
  int v2; // r6
  pthread_t *v3; // r0
  pthread_t *v4; // r8
  pthread_t *v5; // r4
  int v6; // r5
  pthread_t *v7; // r4
  pthread_t v8; // t1
  int v9; // r4
  int result; // r0
  pthread_t th; // [sp+0h] [bp-28h] BYREF
  int arg; // [sp+4h] [bp-24h] BYREF

  v2 = thread_count;
  arg = iterations;
  v3 = (pthread_t *)malloc(4 * thread_count);
  if ( !v3 )
    return -1;
  v4 = v3;
  _atomic_store_4(&atomic_counter, 0, 5);
  if ( v2 < 1 )
  {
LABEL_6:
    if ( !pthread_create(&th, 0, thread_atomic_load_store, 0) )
      pthread_join(th, 0);
    if ( v2 >= 1 )
    {
      v7 = v4;
      do
      {
        v8 = *v7++;
        pthread_join(v8, 0);
        --v2;
      }
      while ( v2 );
    }
    v9 = _atomic_load_4(&atomic_counter, 5);
    free(v4);
    result = -3;
    if ( v9 > 0 )
      return 42;
  }
  else
  {
    v5 = v4;
    v6 = v2;
    while ( !pthread_create(v5, 0, thread_atomic_increment, &arg) )
    {
      ++v5;
      if ( !--v6 )
        goto LABEL_6;
    }
    free(v4);
    return -2;
  }
  return result;
}


/* Function: call_atomic_ops @ 0x26EC */
int call_atomic_ops()
{
  return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x26F8 */
void *__fastcall thread_tls_test(void *arg)
{
  int v1; // r4
  void *result; // r0

  v1 = *(_DWORD *)&tls_thread_name[4];
  *(_DWORD *)&tls_thread_name[4] += 50;
  strncpy(&tls_thread_name[8], (const char *)arg, 0x1Fu);
  result = malloc(8u);
  *(_DWORD *)result = v1;
  *((_DWORD *)result + 1) = v1 + 50;
  return result;
}


/* Function: param_thread_local_storage @ 0x2740 */
int __fastcall param_thread_local_storage(int thread_count)
{
  size_t v1; // r4
  int v2; // r10
  void *v3; // r8
  void *v4; // r11
  bool v5; // zf
  int result; // r0
  int i; // r4
  char *v8; // r0
  int v9; // r5
  pthread_t *v10; // r4
  int v11; // r9
  pthread_t *v12; // r5
  void **v13; // r6
  int v14; // r4
  pthread_t v15; // t1
  int v16; // r7
  int v17; // r8
  void *v18; // t1
  int v19; // r4
  int v20; // r5
  int v21; // [sp+0h] [bp-30h]
  void *ptr; // [sp+4h] [bp-2Ch]
  void *thread_return; // [sp+8h] [bp-28h] BYREF

  v1 = 4 * thread_count;
  v2 = thread_count;
  v3 = malloc(4 * thread_count);
  v4 = malloc(v1);
  v5 = v3 == 0;
  result = -1;
  if ( v3 )
    v5 = v4 == 0;
  if ( !v5 )
  {
    if ( v2 < 1 )
    {
      v21 = v2;
      ptr = v3;
      v14 = 0;
      v11 = 0;
LABEL_14:
      free(v4);
      free(ptr);
      result = -3;
      if ( !(v14 ^ (100 * v21) | v11 ^ (150 * v21)) )
        return 42;
    }
    else
    {
      for ( i = 0; i != v2; ++i )
      {
        v8 = (char *)malloc(0x10u);
        *((_DWORD *)v4 + i) = v8;
        snprintf(v8, 0x10u, "Thread-%d", i);
      }
      v9 = 0;
      v10 = (pthread_t *)v3;
      while ( !pthread_create(v10, 0, thread_tls_test, *((void **)v4 + v9)) )
      {
        ++v9;
        ++v10;
        if ( v2 == v9 )
        {
          ptr = v3;
          v21 = v2;
          v11 = 0;
          v12 = (pthread_t *)v3;
          v13 = (void **)v4;
          v14 = 0;
          do
          {
            v15 = *v12++;
            pthread_join(v15, &thread_return);
            v16 = *(_DWORD *)thread_return;
            v17 = *((_DWORD *)thread_return + 1);
            free(thread_return);
            v18 = *v13++;
            free(v18);
            v11 += v17;
            v14 += v16;
            --v2;
          }
          while ( v2 );
          goto LABEL_14;
        }
      }
      v19 = v9 + 1;
      v20 = 0;
      do
        free(*((void **)v4 + v20++));
      while ( v19 != v20 );
      free(v4);
      free(v3);
      return -2;
    }
  }
  return result;
}


/* Function: call_thread_local_storage @ 0x28DC */
int call_thread_local_storage()
{
  return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x28E4 */
void test_thread_concurrency()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  void *thread_return; // [sp+4h] [bp-14h] BYREF
  int arg; // [sp+8h] [bp-10h] BYREF
  pthread_t newthread; // [sp+Ch] [bp-Ch] BYREF

  puts(asc_2E75);
  arg = 7;
  v0 = -1;
  if ( !pthread_create(&newthread, 0, thread_compute, &arg) )
  {
    pthread_join(newthread, &thread_return);
    v0 = *(_DWORD *)thread_return;
    free(thread_return);
  }
  printf(aThrL301D, v0);
  v1 = param_pthread_join();
  printf(aThrL302D, v1);
  v2 = param_mutex_lock(4, 1000);
  printf(aThrL303D, v2);
  v3 = param_condition_variable();
  printf(aThrL304D, v3);
  v4 = param_atomic_ops(4, 500);
  printf(aThrL305D, v4);
  v5 = param_thread_local_storage(4);
  printf(aThrL306D, v5);
}


/* Function: main @ 0x29F0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}


/* Function: __aeabi_read_tp @ 0x2A10 */
void _aeabi_read_tp()
{
  JUMPOUT(0xFFFF0FE0);
}


/* Function: .term_proc @ 0x2A18 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_pthread_mutex_unlock @ 0x14200 */

/* FAILED to decompile: __imp_strstr @ 0x14204 */

/* FAILED to decompile: __imp_raise @ 0x14208 */

/* FAILED to decompile: __imp___libc_start_main @ 0x1420C */

/* FAILED to decompile: __imp_strcmp @ 0x14210 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x14214 */

/* FAILED to decompile: __imp_setsockopt @ 0x14218 */

/* FAILED to decompile: __imp_printf @ 0x1421C */

/* FAILED to decompile: __imp_fopen @ 0x14220 */

/* FAILED to decompile: __imp_read @ 0x14224 */

/* FAILED to decompile: __imp_free @ 0x14228 */

/* FAILED to decompile: __imp_pthread_mutex_lock @ 0x1422C */

/* FAILED to decompile: __imp__exit @ 0x14230 */

/* FAILED to decompile: __imp_memcpy @ 0x14234 */

/* FAILED to decompile: __imp___atomic_fetch_add_4 @ 0x14238 */

/* FAILED to decompile: __imp_shmget @ 0x1423C */

/* FAILED to decompile: __imp_signal @ 0x14240 */

/* FAILED to decompile: __imp_memcmp @ 0x14244 */

/* FAILED to decompile: __imp_sleep @ 0x14248 */

/* FAILED to decompile: __imp_rewind @ 0x1424C */

/* FAILED to decompile: __imp_alarm @ 0x14250 */

/* FAILED to decompile: __imp_unlink @ 0x14254 */

/* FAILED to decompile: __imp_wait @ 0x14258 */

/* FAILED to decompile: __imp_shmat @ 0x1425C */

/* FAILED to decompile: __imp_fwrite @ 0x14260 */

/* FAILED to decompile: __imp_usleep @ 0x14264 */

/* FAILED to decompile: __imp_waitpid @ 0x14268 */

/* FAILED to decompile: __imp_strcpy @ 0x1426C */

/* FAILED to decompile: __imp_fread @ 0x14270 */

/* FAILED to decompile: __imp_shmctl @ 0x14274 */

/* FAILED to decompile: __imp_puts @ 0x14278 */

/* FAILED to decompile: __imp_malloc @ 0x1427C */

/* FAILED to decompile: __imp___atomic_load_4 @ 0x14280 */

/* FAILED to decompile: __imp_stat_0 @ 0x14284 */

/* FAILED to decompile: __imp_open @ 0x14288 */

/* FAILED to decompile: __imp_syscall @ 0x1428C */

/* FAILED to decompile: __imp_bcmp @ 0x14290 */

/* FAILED to decompile: strlen @ 0x14294 */

/* FAILED to decompile: __imp_strchr @ 0x14298 */

/* FAILED to decompile: __imp___atomic_compare_exchange_4 @ 0x1429C */

/* FAILED to decompile: __imp___errno_location @ 0x142A0 */

/* FAILED to decompile: __imp_snprintf @ 0x142A4 */

/* FAILED to decompile: __imp___isoc99_sscanf @ 0x142A8 */

/* FAILED to decompile: __imp_bind @ 0x142AC */

/* FAILED to decompile: __imp_memset @ 0x142B0 */

/* FAILED to decompile: __imp_strncpy @ 0x142B4 */

/* FAILED to decompile: __imp_write @ 0x142B8 */

/* FAILED to decompile: __imp_fileno @ 0x142BC */

/* FAILED to decompile: __imp_shmdt @ 0x142C0 */

/* FAILED to decompile: __imp_fclose @ 0x142C4 */

/* FAILED to decompile: __imp_pipe @ 0x142C8 */

/* FAILED to decompile: __imp_pthread_create @ 0x142CC */

/* FAILED to decompile: __imp_fork @ 0x142D0 */

/* FAILED to decompile: __imp_execl @ 0x142D4 */

/* FAILED to decompile: __imp_listen @ 0x142D8 */

/* FAILED to decompile: __imp_ftok @ 0x142DC */

/* FAILED to decompile: __imp___atomic_store_4 @ 0x142E0 */

/* FAILED to decompile: __imp_pthread_cond_wait @ 0x142E4 */

/* FAILED to decompile: __imp_socket @ 0x142E8 */

/* FAILED to decompile: __imp_pthread_join @ 0x142EC */

/* FAILED to decompile: __imp_pthread_cancel @ 0x142F0 */

/* FAILED to decompile: __imp_pthread_cond_signal @ 0x142F4 */

/* FAILED to decompile: __imp_abort @ 0x142F8 */

/* FAILED to decompile: __imp_close @ 0x142FC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x14304 */

/* Total functions decompiled: 73, failed: 65 */
