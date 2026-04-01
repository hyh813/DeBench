/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/6/6_gcc_Os_no_g
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


/* Function: main @ 0x10F90 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v3; // r0
  int v4; // r0

  v3 = test_standard_library_functions(argc, argv, envp);
  v4 = test_system_calls(v3);
  test_thread_concurrency(v4);
  return 0;
}


/* Function: _start @ 0x10FA8 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main(
    *(int (**)(int, char **, char **))((char *)&loc_1311C + (_DWORD)&off_10FE4),
    v4,
    (char **)va,
    0,
    0,
    a1,
    va);
  abort();
}


/* Function: call_weak_fn @ 0x10FEC */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x11010 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1103C */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x11074 */
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


/* Function: frame_dummy @ 0x1109C */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: signal_handler @ 0x110A0 */
void __fastcall signal_handler(int a1)
{
  signal_received = 1;
  signal_number = a1;
}


/* Function: thread_sum @ 0x110B8 */
void *__fastcall thread_sum(int *a1)
{
  int v1; // r1
  int i; // r3

  v1 = a1[1];
  a1[2] = 0;
  for ( i = *a1; v1 >= i; ++i )
    a1[2] += i;
  return 0;
}


/* Function: thread_compute @ 0x110EC */
_DWORD *__fastcall thread_compute(int *a1)
{
  int v1; // r4
  _DWORD *result; // r0

  v1 = *a1;
  result = malloc(4u);
  *result = v1 * v1;
  return result;
}


/* Function: thread_increment @ 0x11110 */
void *__fastcall thread_increment(int *a1)
{
  int v1; // r4
  int v2; // r7

  v1 = 0;
  v2 = *a1;
  while ( v1 < v2 )
  {
    pthread_mutex_lock(&counter_mutex);
    ++shared_counter;
    pthread_mutex_unlock(&counter_mutex);
    usleep(0x3E8u);
    ++v1;
  }
  return 0;
}


/* Function: consumer_thread @ 0x11164 */
_DWORD *__fastcall consumer_thread(void *a1)
{
  int v1; // r4
  _DWORD *result; // r0

  pthread_mutex_lock(&cond_mutex);
  while ( !ready )
    pthread_cond_wait(&cond, &cond_mutex);
  v1 = data;
  pthread_mutex_unlock(&cond_mutex);
  result = malloc(4u);
  *result = v1;
  return result;
}


/* Function: producer_thread @ 0x111BC */
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


/* Function: thread_atomic_increment @ 0x11204 */
void *__fastcall thread_atomic_increment(int *a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r3
  int v5; // r7

  v3 = 0;
  v4 = 0;
  v5 = *a1;
  while ( v3 < v5 )
  {
    _sync_fetch_and_add_4(&atomic_counter, 1, a3, v4);
    _sync_val_compare_and_swap_4(&atomic_counter, v3, v3 + 1000);
    ++v3;
  }
  return 0;
}


/* Function: thread_atomic_load_store @ 0x1128C */
void *__fastcall thread_atomic_load_store(void *a1)
{
  int v1; // r0
  int v2; // r4
  int v3; // r0
  int v4; // r0

  v1 = _sync_synchronize(a1);
  v2 = atomic_counter;
  v3 = _sync_synchronize(v1);
  v4 = _sync_synchronize(v3);
  atomic_counter = v2 + 100;
  _sync_synchronize(v4);
  return 0;
}


/* Function: thread_tls_test @ 0x112BC */
_DWORD *__fastcall thread_tls_test(const char *a1)
{
  int v1; // r5
  _DWORD *result; // r0

  v1 = unk_241A0;
  unk_241A0 += 50;
  strncpy(byte_241A4, a1, 0x1Fu);
  result = malloc(8u);
  *result = v1;
  result[1] = v1 + 50;
  return result;
}


/* Function: param_strcpy @ 0x11304 */
size_t __fastcall param_strcpy(char *a1, const char *a2)
{
  strcpy(a1, a2);
  return strlen(a1);
}


/* Function: call_strcpy @ 0x1131C */
size_t call_strcpy()
{
  char v1[32]; // [sp+4h] [bp-2Ch] BYREF

  return param_strcpy(v1, "HelloLib");
}


/* Function: param_strcmp @ 0x1136C */
int __fastcall param_strcmp(const char *a1, const char *a2)
{
  int v2; // r0

  v2 = strcmp(a1, a2);
  if ( v2 > 0 )
    return 1;
  if ( v2 )
    return -1;
  return 0;
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
// attributes: thunk
size_t param_strlen(const char *s)
{
  return strlen(s);
}


/* Function: call_strlen @ 0x113E4 */
int call_strlen()
{
  return 12;
}


/* Function: param_memcpy @ 0x113EC */
size_t __fastcall param_memcpy(void *a1, const void *a2, size_t a3)
{
  memcpy(a1, a2, a3);
  return a3;
}


/* Function: call_memcpy @ 0x11400 */
int call_memcpy()
{
  _DWORD v1[5]; // [sp+4h] [bp-34h] BYREF
  _DWORD s[5]; // [sp+18h] [bp-20h] BYREF

  v1[0] = 10;
  v1[1] = 20;
  v1[2] = 30;
  v1[3] = 40;
  v1[4] = 50;
  memset(s, 0, sizeof(s));
  param_memcpy(s, v1, 0x14u);
  return s[0] + s[2] + s[4];
}


/* Function: param_memcmp @ 0x11490 */
int __fastcall param_memcmp(const void *a1, const void *a2, size_t a3)
{
  int v3; // r0

  v3 = memcmp(a1, a2, a3);
  if ( v3 > 0 )
    return 1;
  if ( v3 )
    return -1;
  return 0;
}


/* Function: call_memcmp @ 0x114B4 */
int call_memcmp()
{
  int v0; // r4
  _DWORD v2[3]; // [sp+0h] [bp-38h] BYREF
  _DWORD v3[3]; // [sp+Ch] [bp-2Ch] BYREF
  _DWORD v4[3]; // [sp+18h] [bp-20h] BYREF

  v2[0] = 1;
  v2[1] = 2;
  v2[2] = 3;
  v3[0] = 1;
  v3[1] = 2;
  v3[2] = 4;
  v4[0] = 1;
  v4[1] = 2;
  v4[2] = 3;
  v0 = param_memcmp(v2, v3, 0xCu);
  return v0 + param_memcmp(v2, v4, 0xCu);
}


/* Function: param_printf @ 0x1154C */
int __fastcall param_printf(int a1, const char *a2)
{
  return _printf_chk(1, "Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x11564 */
int call_printf()
{
  return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x11574 */
int __fastcall param_scanf(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+4h] [bp-14h] BYREF
  _DWORD v6[4]; // [sp+8h] [bp-10h] BYREF

  v5 = a2;
  v6[0] = a3;
  v6[1] = a4;
  if ( _isoc99_sscanf(a1, "%d,%d", &v5, v6) == 2 )
    return v5 + v6[0];
  else
    return -1;
}


/* Function: call_scanf @ 0x115D4 */
int __fastcall call_scanf(int a1, int a2, int a3, int a4)
{
  return param_scanf((int)"123,456", a2, a3, a4);
}


/* Function: param_fopen_fclose @ 0x115E0 */
int __fastcall param_fopen_fclose(const char *a1)
{
  FILE *v1; // r0
  FILE *v2; // r5
  int v3; // r4

  v1 = fopen(a1, "r");
  v2 = v1;
  if ( !v1 )
    return -1;
  v3 = fileno(v1);
  fclose(v2);
  return v3;
}


/* Function: call_fopen_fclose @ 0x11614 */
int call_fopen_fclose()
{
  if ( param_fopen_fclose("/etc/passwd") < 0 )
    return -1;
  else
    return 42;
}


/* Function: param_fread_fwrite @ 0x11634 */
int __fastcall param_fread_fwrite(const char *a1)
{
  FILE *v2; // r0
  FILE *v3; // r4
  size_t v5; // r5
  _BYTE v6[4]; // [sp+0h] [bp-38h] BYREF
  char ptr[32]; // [sp+4h] [bp-34h] BYREF

  v2 = fopen(a1, "w+");
  v3 = v2;
  if ( !v2 )
    return -1;
  if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
  {
    rewind(v3);
    v5 = fread(ptr, 1u, 0x12u, v3);
    v6[v5 + 4] = 0;
    fclose(v3);
    unlink(a1);
    if ( v5 == 18 )
    {
      if ( !strcmp(ptr, "BinBench Test Data") )
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


/* Function: call_fread_fwrite @ 0x11724 */
int call_fread_fwrite()
{
  return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x11730 */
int __fastcall param_malloc_free(int a1)
{
  int v1; // r4
  _DWORD *v3; // r0
  int i; // r3
  int v5; // r4

  v1 = a1;
  v3 = malloc(4 * a1);
  if ( !v3 )
    return -1;
  for ( i = 0; i != a1; ++i )
    v3[i] = 10 * i;
  v5 = v3[v1 - 1] + *v3;
  free(v3);
  return v5;
}


/* Function: call_malloc_free @ 0x1178C */
int call_malloc_free()
{
  return param_malloc_free(10);
}


/* Function: param_memset @ 0x11794 */
int __fastcall param_memset(unsigned __int8 *a1, size_t n)
{
  unsigned __int8 *v4; // r3
  int result; // r0
  unsigned __int8 *v6; // r5
  int v7; // t1

  memset(a1, 0, n);
  v4 = a1;
  result = 0;
  v6 = &a1[n];
  while ( v4 != v6 )
  {
    v7 = *v4++;
    result += v7;
  }
  return result;
}


/* Function: call_memset @ 0x117CC */
int call_memset()
{
  _DWORD *v0; // r2
  int i; // r3
  _DWORD v3[10]; // [sp+4h] [bp-34h] BYREF

  v0 = v3;
  for ( i = 0; i != 10; ++i )
    *v0++ = 255;
  param_memset((unsigned __int8 *)v3, 0x28u);
  return v3[0] + v3[9];
}


/* Function: param_strchr_strstr @ 0x11840 */
int __fastcall param_strchr_strstr(const char *a1, int a2, const char *a3)
{
  char *v5; // r4
  int v6; // r4
  char *v7; // r0
  int v8; // r0

  v5 = strchr(a1, a2);
  if ( v5 )
    v6 = v5 - a1;
  else
    v6 = -1;
  v7 = strstr(a1, a3);
  if ( v7 )
    v8 = v7 - a1;
  else
    v8 = -1;
  return v6 + v8;
}


/* Function: call_strchr_strstr @ 0x1187C */
int call_strchr_strstr()
{
  return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x11894 */
__int64 test_standard_library_functions()
{
  size_t v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  __int64 v5; // r0
  int v6; // r2
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0

  puts(s);
  v0 = call_strcpy();
  _printf_chk(1, aLibL101D, v0);
  v1 = call_strcmp();
  _printf_chk(1, aLibL102D, v1);
  _printf_chk(1, aLibL103D, 12);
  v2 = call_memcpy();
  _printf_chk(1, aLibL104D, v2);
  v3 = call_memcmp();
  _printf_chk(1, aLibL105D, v3);
  v4 = call_printf();
  v5 = _printf_chk(1, aLibL106D, v4);
  v8 = call_scanf(v5, SHIDWORD(v5), v6, v7);
  _printf_chk(1, aLibL107D, v8);
  v9 = call_fopen_fclose();
  _printf_chk(1, aLibL108D, v9);
  v10 = call_fread_fwrite();
  _printf_chk(1, aLibL109D, v10);
  v11 = call_malloc_free();
  _printf_chk(1, aLibL110D, v11);
  v12 = call_memset();
  _printf_chk(1, aLibL111D, v12);
  v13 = call_strchr_strstr();
  return _printf_chk(1, aLibL112D, v13);
}


/* Function: param_linux_syscall @ 0x119C4 */
int __fastcall param_linux_syscall(int a1)
{
  int v1; // r0
  int v2; // r4

  v1 = syscall(5, a1, 0);
  v2 = v1;
  if ( v1 < 0 )
    return -*_errno_location();
  syscall(6, v1);
  return v2;
}


/* Function: call_linux_syscall @ 0x11A04 */
int call_linux_syscall()
{
  if ( param_linux_syscall((int)"/etc/passwd") < 0 )
    return -1;
  else
    return 42;
}


/* Function: param_win32_api @ 0x11A24 */
int __fastcall param_win32_api(const char *a1)
{
  struct stat v2; // [sp+0h] [bp-68h] BYREF

  if ( stat(a1, &v2) < 0 )
    return -1;
  if ( v2.st_size <= 0 )
    return -2;
  return 42;
}


/* Function: call_win32_api @ 0x11A88 */
int call_win32_api()
{
  return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x11A94 */
int __fastcall param_fork_exec(const char *a1, int a2, int a3)
{
  int v5; // r0
  int v7[6]; // [sp+0h] [bp-18h] BYREF

  v7[0] = (int)a1;
  v7[1] = a2;
  v7[2] = a3;
  v5 = fork();
  if ( v5 < 0 )
    return -1;
  if ( !v5 )
  {
    execl(a1, a1, a2, 0);
    exit(127);
  }
  if ( waitpid(v5, v7, 0) < 0 )
    return -2;
  if ( (v7[0] & 0x7F) != 0 )
    return -3;
  return BYTE1(v7[0]);
}


/* Function: call_fork_exec @ 0x11B34 */
int __fastcall call_fork_exec(int a1, int a2, int a3)
{
  if ( param_fork_exec("/bin/true", 0, a3) )
    return -1;
  else
    return 42;
}


/* Function: param_pipe_communication @ 0x11B58 */
int param_pipe_communication()
{
  __pid_t v0; // r0
  int v1; // r4
  ssize_t v2; // r4
  _BYTE v4[4]; // [sp+0h] [bp-40h] BYREF
  int pipedes[2]; // [sp+4h] [bp-3Ch] BYREF
  _BYTE buf[32]; // [sp+Ch] [bp-34h] BYREF

  if ( pipe(pipedes) < 0 )
    return -1;
  v0 = fork();
  v1 = v0;
  if ( v0 < 0 )
    return -2;
  if ( !v0 )
  {
    close(pipedes[0]);
    write(pipedes[1], "HelloPipe", 9u);
    close(pipedes[1]);
    exit(v1);
  }
  close(pipedes[1]);
  v2 = read(pipedes[0], buf, 0x1Fu);
  v4[v2 + 12] = 0;
  close(pipedes[0]);
  wait(0);
  if ( v2 <= 0 )
    return -3;
  else
    return 42;
}


/* Function: call_pipe_communication @ 0x11C3C */
// attributes: thunk
int call_pipe_communication()
{
  return param_pipe_communication();
}


/* Function: param_socket_create @ 0x11C40 */
int param_socket_create()
{
  int v0; // r0
  int v1; // r4
  int optval; // [sp+8h] [bp-20h] BYREF
  struct sockaddr s; // [sp+Ch] [bp-1Ch] BYREF

  v0 = socket(2, 1, 0);
  v1 = v0;
  if ( v0 < 0 )
    return -1;
  optval = 1;
  if ( setsockopt(v0, 1, 2, &optval, 4u) >= 0 )
  {
    memset(&s, 0, sizeof(s));
    s.sa_family = 2;
    if ( bind(v1, &s, 0x10u) >= 0 )
    {
      if ( listen(v1, 5) < 0 )
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
    else
    {
      close(v1);
      return -3;
    }
  }
  else
  {
    close(v1);
    return -2;
  }
}


/* Function: call_socket_create @ 0x11D3C */
// attributes: thunk
int call_socket_create()
{
  return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x11D40 */
int param_shmget_shmat()
{
  int v0; // r0
  size_t v1; // r4
  int v3; // r6
  char *v4; // r0
  const char *v5; // r5

  v0 = open("/tmp/binbench_shm", 66, 438);
  if ( v0 < 0 )
    return -1;
  close(v0);
  if ( ftok("/tmp/binbench_shm", 42) < 0 )
    return -1;
  v3 = shmget();
  if ( v3 < 0 )
    return -2;
  v4 = (char *)shmat();
  v5 = v4;
  if ( v4 == (char *)-1 )
    return -3;
  strcpy(v4, "SharedMemory");
  v1 = strlen(v5);
  shmdt(v5);
  shmctl(v3, 0);
  return v1;
}


/* Function: call_shmget_shmat @ 0x11DF4 */
int call_shmget_shmat()
{
  if ( param_shmget_shmat() <= 0 )
    return -1;
  else
    return 42;
}


/* Function: param_signal_handling @ 0x11E0C */
int param_signal_handling()
{
  int result; // r0
  int v1; // r5
  int v2; // r5

  result = (int)signal(10, signal_handler);
  if ( result != -1 )
  {
    if ( signal(14, signal_handler) == (__sighandler_t)-1 )
    {
      return -2;
    }
    else
    {
      signal_received = 0;
      raise(10);
      v1 = 1001;
      while ( !signal_received )
      {
        if ( !--v1 )
          break;
        usleep(0x3E8u);
      }
      if ( signal_received )
      {
        if ( signal_number == 10 )
        {
          signal_received = 0;
          alarm(1u);
          v2 = 2001;
          while ( !signal_received )
          {
            if ( !--v2 )
              break;
            usleep(0x3E8u);
          }
          if ( signal_received && signal_number == 14 )
          {
            signal(10, 0);
            signal(14, 0);
            return 42;
          }
          else
          {
            return -5;
          }
        }
        else
        {
          return -4;
        }
      }
      else
      {
        return -3;
      }
    }
  }
  return result;
}


/* Function: call_signal_handling @ 0x11F24 */
// attributes: thunk
int call_signal_handling()
{
  return param_signal_handling();
}


/* Function: test_system_calls @ 0x11F28 */
__int64 test_system_calls()
{
  int v0; // r0
  int v1; // r0
  __int64 v2; // r0
  int v3; // r2
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  puts(asc_1384E);
  v0 = call_linux_syscall();
  _printf_chk(1, aSysL301D, v0);
  v1 = call_win32_api();
  v2 = _printf_chk(1, aSysL302D, v1);
  v4 = call_fork_exec(v2, SHIDWORD(v2), v3);
  _printf_chk(1, aSysL303D, v4);
  v5 = param_pipe_communication();
  _printf_chk(1, aSysL304D, v5);
  v6 = param_socket_create();
  _printf_chk(1, aSysL305D, v6);
  v7 = call_shmget_shmat();
  _printf_chk(1, aSysL306D, v7);
  v8 = param_signal_handling();
  return _printf_chk(1, aSysL307D, v8);
}


/* Function: param_pthread_create @ 0x11FE4 */
int __fastcall param_pthread_create(pthread_t a1, int a2, void *a3, void *a4)
{
  int v4; // r4
  pthread_t th; // [sp+0h] [bp-18h] BYREF
  pthread_t arg; // [sp+4h] [bp-14h] BYREF
  void *thread_return[4]; // [sp+8h] [bp-10h] BYREF

  th = a1;
  thread_return[0] = a3;
  thread_return[1] = a4;
  arg = a1;
  if ( pthread_create(&th, 0, (void *(*)(void *))thread_compute, &arg) )
    return -1;
  pthread_join(th, thread_return);
  v4 = *(_DWORD *)thread_return[0];
  free(thread_return[0]);
  return v4;
}


/* Function: call_pthread_create @ 0x12064 */
int __fastcall call_pthread_create(int a1, int a2, void *a3, void *a4)
{
  return param_pthread_create(7u, a2, a3, a4);
}


/* Function: param_pthread_join @ 0x1206C */
int param_pthread_join()
{
  pthread_t *v0; // r9
  _DWORD *v1; // r8
  _DWORD *v2; // r6
  pthread_t *v3; // r7
  int v4; // r5
  int v5; // r4
  pthread_t v6; // t1
  pthread_t newthread[3]; // [sp+4h] [bp-54h] BYREF
  _DWORD arg[9]; // [sp+10h] [bp-48h] BYREF

  v0 = newthread;
  v1 = arg;
  v2 = arg;
  v3 = newthread;
  v4 = 0;
  arg[0] = 1;
  arg[1] = 10;
  arg[2] = 0;
  arg[3] = 11;
  arg[4] = 20;
  arg[5] = 0;
  arg[6] = 21;
  arg[7] = 30;
  arg[8] = 0;
  do
  {
    v5 = pthread_create(v3, 0, (void *(*)(void *))thread_sum, v2);
    if ( v5 )
      return -1;
    ++v4;
    ++v3;
    v2 += 3;
  }
  while ( v4 != 3 );
  while ( 1 )
  {
    v6 = *v0++;
    if ( pthread_join(v6, 0) )
      break;
    --v4;
    v5 += v1[2];
    v1 += 3;
    if ( !v4 )
      return v5;
  }
  return -2;
}


/* Function: call_pthread_join @ 0x12158 */
// attributes: thunk
int call_pthread_join()
{
  return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x1215C */
int __fastcall param_mutex_lock(int a1, int a2)
{
  void *v3; // r5
  int v5; // r6
  int i; // r6
  int arg; // [sp+4h] [bp-1Ch] BYREF

  arg = a2;
  v3 = malloc(4 * a1);
  if ( !v3 )
    return -1;
  v5 = 0;
  shared_counter = 0;
  while ( v5 < a1 )
  {
    if ( pthread_create((pthread_t *)v3 + v5, 0, (void *(*)(void *))thread_increment, &arg) )
    {
      free(v3);
      return -2;
    }
    ++v5;
  }
  for ( i = 0; i < a1; ++i )
    pthread_join(*((_DWORD *)v3 + i), 0);
  free(v3);
  if ( shared_counter == arg * a1 )
    return 42;
  else
    return -3;
}


/* Function: call_mutex_lock @ 0x12218 */
int call_mutex_lock()
{
  return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x12224 */
int __fastcall param_condition_variable(pthread_t a1, pthread_t a2, void *a3, void *a4)
{
  int v4; // r4
  pthread_t th; // [sp+0h] [bp-18h] BYREF
  pthread_t newthread; // [sp+4h] [bp-14h] BYREF
  void *thread_return[4]; // [sp+8h] [bp-10h] BYREF

  th = a1;
  newthread = a2;
  thread_return[0] = a3;
  thread_return[1] = a4;
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
    pthread_join(newthread, thread_return);
    pthread_join(th, 0);
    v4 = *(_DWORD *)thread_return[0];
    free(thread_return[0]);
  }
  return v4;
}


/* Function: call_condition_variable @ 0x122E8 */
// attributes: thunk
int __fastcall call_condition_variable(pthread_t a1, pthread_t a2, void *a3, void *a4)
{
  return param_condition_variable(a1, a2, a3, a4);
}


/* Function: param_atomic_ops @ 0x122EC */
int __fastcall param_atomic_ops(int a1, int a2, pthread_t a3, pthread_t a4)
{
  void *v5; // r0
  void *v6; // r4
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int i; // r5
  int v12; // r0
  int v13; // r5
  int arg; // [sp+4h] [bp-24h] BYREF
  pthread_t newthread[8]; // [sp+8h] [bp-20h] BYREF

  newthread[0] = a3;
  newthread[1] = a4;
  arg = a2;
  v5 = malloc(4 * a1);
  v6 = v5;
  if ( !v5 )
    return -1;
  v8 = 0;
  v9 = _sync_synchronize(v5);
  atomic_counter = 0;
  _sync_synchronize(v9);
  while ( v8 < a1 )
  {
    if ( pthread_create((pthread_t *)v6 + v8, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
    {
      free(v6);
      return -2;
    }
    ++v8;
  }
  v10 = pthread_create(newthread, 0, thread_atomic_load_store, 0);
  if ( !v10 )
    v10 = pthread_join(newthread[0], 0);
  for ( i = 0; i < a1; ++i )
    v10 = pthread_join(*((_DWORD *)v6 + i), 0);
  v12 = _sync_synchronize(v10);
  v13 = atomic_counter;
  _sync_synchronize(v12);
  free(v6);
  if ( v13 <= 0 )
    return -3;
  else
    return 42;
}


/* Function: call_atomic_ops @ 0x12408 */
int __fastcall call_atomic_ops(int a1, int a2, pthread_t a3, pthread_t a4)
{
  return param_atomic_ops(4, 500, a3, a4);
}


/* Function: param_thread_local_storage @ 0x12414 */
int __fastcall param_thread_local_storage(int a1)
{
  size_t v1; // r4
  void *v3; // r6
  _DWORD *v4; // r0
  bool v5; // zf
  int v6; // r7
  _DWORD *v7; // r4
  void *v9; // r0
  int i; // r7
  int v11; // r7
  int v12; // r8
  int v13; // r9
  int v14; // r3
  int v15; // r5
  bool v16; // zf
  _DWORD *v17; // r5
  void *v18; // t1
  void *thread_return; // [sp+8h] [bp-28h] BYREF

  v1 = 4 * a1;
  v3 = malloc(4 * a1);
  v4 = malloc(v1);
  v5 = v4 == 0;
  if ( v4 )
    v5 = v3 == 0;
  if ( v5 )
    return -1;
  v6 = 0;
  v7 = v4;
  while ( v6 < a1 )
  {
    v9 = malloc(0x10u);
    v7[v6] = v9;
    _snprintf_chk(v9, 16);
    ++v6;
  }
  for ( i = 0; i < a1; ++i )
  {
    if ( pthread_create((pthread_t *)v3 + i, 0, (void *(*)(void *))thread_tls_test, (void *)v7[i]) )
    {
      v17 = v7 - 1;
      do
      {
        v18 = (void *)v17[1];
        ++v17;
        free(v18);
      }
      while ( v17 != &v7[i] );
      free(v7);
      free(v3);
      return -2;
    }
  }
  v11 = 0;
  v12 = 0;
  v13 = 0;
  while ( v11 < a1 )
  {
    pthread_join(*((_DWORD *)v3 + v11), &thread_return);
    v13 += *(_DWORD *)thread_return;
    v12 += *((_DWORD *)thread_return + 1);
    free(thread_return);
    free((void *)v7[v11++]);
  }
  free(v7);
  free(v3);
  v14 = 100 * a1;
  v15 = 150 * a1;
  v16 = v14 == v13;
  if ( v14 == v13 )
    v16 = v15 == v12;
  if ( v16 )
    return 42;
  else
    return -3;
}


/* Function: call_thread_local_storage @ 0x125AC */
int call_thread_local_storage()
{
  return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x125B4 */
__int64 test_thread_concurrency()
{
  int v0; // r0
  int v1; // r1
  void *v2; // r2
  void *v3; // r3
  int v4; // r0
  int v5; // r0
  int v6; // r0
  __int64 v7; // r0
  void *v8; // r2
  void *v9; // r3
  int v10; // r0
  __int64 v11; // r0
  pthread_t v12; // r2
  pthread_t v13; // r3
  int v14; // r0
  int v15; // r0

  v0 = puts(asc_13937);
  v4 = call_pthread_create(v0, v1, v2, v3);
  _printf_chk(1, aThrL301D, v4);
  v5 = param_pthread_join();
  _printf_chk(1, aThrL302D, v5);
  v6 = call_mutex_lock();
  v7 = _printf_chk(1, aThrL303D, v6);
  v10 = param_condition_variable(v7, HIDWORD(v7), v8, v9);
  v11 = _printf_chk(1, aThrL304D, v10);
  v14 = call_atomic_ops(v11, SHIDWORD(v11), v12, v13);
  _printf_chk(1, aThrL305D, v14);
  v15 = call_thread_local_storage();
  return _printf_chk(1, aThrL306D, v15);
}


/* Function: __sync_fetch_and_add_4 @ 0x12658 */
int __fastcall _sync_fetch_and_add_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x12690 */
int __fastcall _sync_fetch_and_sub_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 - a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x126C8 */
int __fastcall _sync_fetch_and_or_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 | a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x12700 */
int __fastcall _sync_fetch_and_and_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 & a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x12738 */
int __fastcall _sync_fetch_and_xor_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x12770 */
int __fastcall _sync_fetch_and_nand_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, ~(*a1 & a2), a1) );
  return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x127AC */
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


/* Function: __sync_fetch_and_sub_2 @ 0x1280C */
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


/* Function: __sync_fetch_and_or_2 @ 0x1286C */
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


/* Function: __sync_fetch_and_and_2 @ 0x128CC */
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


/* Function: __sync_fetch_and_xor_2 @ 0x1292C */
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


/* Function: __sync_fetch_and_nand_2 @ 0x1298C */
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


/* Function: __sync_fetch_and_add_1 @ 0x129F0 */
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


/* Function: __sync_fetch_and_sub_1 @ 0x12A4C */
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


/* Function: __sync_fetch_and_or_1 @ 0x12AA8 */
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


/* Function: __sync_fetch_and_and_1 @ 0x12B04 */
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


/* Function: __sync_fetch_and_xor_1 @ 0x12B60 */
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


/* Function: __sync_fetch_and_nand_1 @ 0x12BBC */
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


/* Function: __sync_add_and_fetch_4 @ 0x12C1C */
int __fastcall _sync_add_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 + a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x12C54 */
int __fastcall _sync_sub_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 - a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x12C8C */
int __fastcall _sync_or_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 | a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x12CC4 */
int __fastcall _sync_and_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 & a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x12CFC */
int __fastcall _sync_xor_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 ^ a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x12D34 */
int __fastcall _sync_nand_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = ~(*a1 & a2);
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x12D70 */
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


/* Function: __sync_sub_and_fetch_2 @ 0x12DD8 */
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


/* Function: __sync_or_and_fetch_2 @ 0x12E40 */
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


/* Function: __sync_and_and_fetch_2 @ 0x12EA8 */
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


/* Function: __sync_xor_and_fetch_2 @ 0x12F10 */
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


/* Function: __sync_nand_and_fetch_2 @ 0x12F78 */
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


/* Function: __sync_add_and_fetch_1 @ 0x12FE4 */
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


/* Function: __sync_sub_and_fetch_1 @ 0x13048 */
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


/* Function: __sync_or_and_fetch_1 @ 0x130AC */
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


/* Function: __sync_and_and_fetch_1 @ 0x13110 */
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


/* Function: __sync_xor_and_fetch_1 @ 0x13174 */
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


/* Function: __sync_nand_and_fetch_1 @ 0x131D8 */
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


/* Function: __sync_val_compare_and_swap_4 @ 0x13240 */
int __fastcall _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
  while ( *(_DWORD *)a1 == a2 )
  {
    if ( !MEMORY[0xFFFF0FC0](a2, a3, a1) )
      return a2;
  }
  return *(_DWORD *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x13290 */
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


/* Function: __sync_val_compare_and_swap_1 @ 0x13308 */
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


/* Function: __sync_bool_compare_and_swap_4 @ 0x1337C */
bool __fastcall _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
  return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x133A8 */
bool __fastcall _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x133C4 */
bool __fastcall _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x133EC */
int __fastcall _sync_lock_test_and_set_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
  return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x13424 */
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


/* Function: __sync_lock_test_and_set_1 @ 0x13484 */
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


/* Function: __sync_lock_release_8 @ 0x134E0 */
int __fastcall _sync_lock_release_8(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  a1[1] = 0;
  return result;
}


/* Function: __sync_lock_release_4 @ 0x13504 */
int __fastcall _sync_lock_release_4(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_2 @ 0x13524 */
int __fastcall _sync_lock_release_2(_WORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_1 @ 0x13544 */
int __fastcall _sync_lock_release_1(_BYTE *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __aeabi_read_tp @ 0x13570 */
void _aeabi_read_tp()
{
  JUMPOUT(0xFFFF0FE0);
}


/* Function: .term_proc @ 0x13578 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_malloc @ 0x241BC */

/* FAILED to decompile: __imp_open @ 0x241C0 */

/* FAILED to decompile: __imp_pthread_create @ 0x241C4 */

/* FAILED to decompile: __imp_shmget @ 0x241C8 */

/* FAILED to decompile: __imp_execl @ 0x241CC */

/* FAILED to decompile: __imp___errno_location @ 0x241D0 */

/* FAILED to decompile: __imp_rewind @ 0x241D4 */

/* FAILED to decompile: __imp_fopen @ 0x241D8 */

/* FAILED to decompile: __imp_ftok @ 0x241DC */

/* FAILED to decompile: __imp_waitpid @ 0x241E0 */

/* FAILED to decompile: __imp_shmdt @ 0x241E4 */

/* FAILED to decompile: __imp_free @ 0x241E8 */

/* FAILED to decompile: __imp__exit @ 0x241EC */

/* FAILED to decompile: __imp_setsockopt @ 0x241F0 */

/* FAILED to decompile: __imp_read @ 0x241F4 */

/* FAILED to decompile: __imp_bind @ 0x241F8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x241FC */

/* FAILED to decompile: __imp_strchr @ 0x24200 */

/* FAILED to decompile: __imp_syscall @ 0x24204 */

/* FAILED to decompile: __imp_fread @ 0x24208 */

/* FAILED to decompile: __imp___isoc99_sscanf @ 0x2420C */

/* FAILED to decompile: __imp_pthread_cond_signal @ 0x24210 */

/* FAILED to decompile: __imp_abort @ 0x24214 */

/* FAILED to decompile: __imp_close @ 0x24218 */

/* FAILED to decompile: __imp_wait @ 0x2421C */

/* FAILED to decompile: __imp_stat @ 0x24220 */

/* FAILED to decompile: __imp_strlen @ 0x24224 */

/* FAILED to decompile: __imp_shmctl @ 0x24228 */

/* FAILED to decompile: __imp_shmat @ 0x2422C */

/* FAILED to decompile: __imp_socket @ 0x24230 */

/* FAILED to decompile: __imp_pthread_cancel @ 0x24234 */

/* FAILED to decompile: __imp_memset @ 0x24238 */

/* FAILED to decompile: __imp_memcpy @ 0x2423C */

/* FAILED to decompile: __imp_usleep @ 0x24240 */

/* FAILED to decompile: __imp_strncpy @ 0x24244 */

/* FAILED to decompile: __imp_signal @ 0x24248 */

/* FAILED to decompile: __imp_sleep @ 0x2424C */

/* FAILED to decompile: __imp_unlink @ 0x24250 */

/* FAILED to decompile: __imp_raise @ 0x24254 */

/* FAILED to decompile: __imp_memcmp @ 0x24258 */

/* FAILED to decompile: __imp_strcpy @ 0x2425C */

/* FAILED to decompile: __imp_fork @ 0x24260 */

/* FAILED to decompile: __imp_pthread_cond_wait @ 0x24264 */

/* FAILED to decompile: __imp_write @ 0x24268 */

/* FAILED to decompile: __imp_fileno @ 0x2426C */

/* FAILED to decompile: __imp_fclose @ 0x24270 */

/* FAILED to decompile: __imp_strcmp @ 0x24274 */

/* FAILED to decompile: __imp_pthread_mutex_lock @ 0x24278 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x2427C */

/* FAILED to decompile: __imp_listen @ 0x24280 */

/* FAILED to decompile: __imp___printf_chk @ 0x24284 */

/* FAILED to decompile: __imp_alarm @ 0x24288 */

/* FAILED to decompile: __imp_pipe @ 0x2428C */

/* FAILED to decompile: __imp_pthread_mutex_unlock @ 0x24290 */

/* FAILED to decompile: __imp___snprintf_chk @ 0x24294 */

/* FAILED to decompile: __imp_strstr @ 0x24298 */

/* FAILED to decompile: __imp_puts @ 0x2429C */

/* FAILED to decompile: __imp_fwrite @ 0x242A0 */

/* FAILED to decompile: __imp_pthread_join @ 0x242A4 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x242A8 */

/* Total functions decompiled: 122, failed: 60 */
