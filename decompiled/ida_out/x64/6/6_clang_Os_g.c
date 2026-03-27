/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/6/6_clang_Os_g
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


/* Function: param_strcpy @ 0x24AC */
int __fastcall param_strcpy(char *dst, const char *src)
{
  strcpy(dst, src);
  return strlen(dst);
}


/* Function: call_strcpy @ 0x24BE */
int __cdecl call_strcpy()
{
  char v1[40]; // [rsp+0h] [rbp-28h] BYREF

  strcpy(v1, "HelloLib");
  return strlen(v1);
}


/* Function: param_strcmp @ 0x24E0 */
int __fastcall param_strcmp(const char *s1, const char *s2)
{
  int v2; // eax
  int v3; // ecx
  bool v4; // cc
  int result; // eax

  v2 = strcmp(s1, s2);
  v3 = -(v2 != 0);
  v4 = v2 <= 0;
  result = 1;
  if ( v4 )
    return v3;
  return result;
}


/* Function: call_strcmp @ 0x24FB */
int __cdecl call_strcmp()
{
  return 0;
}


/* Function: param_strlen @ 0x24FE */
// attributes: thunk
int __fastcall param_strlen(const char *str)
{
  return strlen(str);
}


/* Function: call_strlen @ 0x2503 */
int __cdecl call_strlen()
{
  return 12;
}


/* Function: param_memcpy @ 0x2509 */
int __fastcall param_memcpy(void *dst, const void *src, size_t n)
{
  int v3; // ebx

  v3 = n;
  memcpy(dst, src, n);
  return v3;
}


/* Function: call_memcpy @ 0x2516 */
int __cdecl call_memcpy()
{
  return 90;
}


/* Function: param_memcmp @ 0x251C */
int __fastcall param_memcmp(const void *p1, const void *p2, size_t n)
{
  int v3; // eax
  int v4; // ecx
  bool v5; // cc
  int result; // eax

  v3 = memcmp(p1, p2, n);
  v4 = -(v3 != 0);
  v5 = v3 <= 0;
  result = 1;
  if ( v5 )
    return v4;
  return result;
}


/* Function: call_memcmp @ 0x2537 */
int __cdecl call_memcmp()
{
  return -1;
}


/* Function: param_printf @ 0x253D */
int __fastcall param_printf(int x, const char *name)
{
  return printf("Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x2550 */
int __cdecl call_printf()
{
  return printf("Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x256A */
int __fastcall param_scanf(const char *input_str)
{
  __int64 v1; // rax
  bool v2; // zf
  int result; // eax
  _QWORD v4[3]; // [rsp-4h] [rbp-18h] BYREF

  v4[0] = v1;
  v2 = (unsigned int)__isoc99_sscanf(input_str, "%d,%d", (char *)v4 + 4, v4) == 2;
  result = -1;
  if ( v2 )
    return HIDWORD(v4[0]) + LODWORD(v4[0]);
  return result;
}


/* Function: call_scanf @ 0x25A2 */
int __cdecl call_scanf()
{
  __int64 v0; // rax
  bool v1; // zf
  int result; // eax
  __int64 v3; // [rsp-4h] [rbp-18h] BYREF

  v3 = v0;
  v1 = (unsigned int)__isoc99_sscanf("123,456", "%d,%d", (char *)&v3 + 4, &v3) == 2;
  result = -1;
  if ( v1 )
    return HIDWORD(v3) + v3;
  return result;
}


/* Function: param_fopen_fclose @ 0x25E1 */
int __fastcall param_fopen_fclose(const char *filename)
{
  FILE *v1; // rax
  FILE *v2; // rbx
  int v3; // ebp

  v1 = fopen(filename, "r");
  if ( !v1 )
    return -1;
  v2 = v1;
  v3 = fileno(v1);
  fclose(v2);
  return v3;
}


/* Function: call_fopen_fclose @ 0x261A */
int __cdecl call_fopen_fclose()
{
  return (param_fopen_fclose("/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_fread_fwrite @ 0x262F */
int __fastcall param_fread_fwrite(const char *tmpfile)
{
  FILE *v1; // rax
  FILE *v2; // rbx
  size_t v3; // r15
  int result; // eax
  __m128i v5[3]; // [rsp+0h] [rbp-38h] BYREF

  v1 = fopen(tmpfile, "w+");
  if ( !v1 )
    return -1;
  v2 = v1;
  if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
  {
    rewind(v2);
    v3 = fread(v5, 1u, 0x12u, v2);
    v5[0].m128i_i8[v3] = 0;
    fclose(v2);
    unlink(tmpfile);
    result = -3;
    if ( v3 == 18 )
    {
      result = -3;
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_load_si128(v5), (__m128i)xmmword_4020),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)((char *)v5[0].m128i_i32 + 3)), (__m128i)xmmword_4010))) == 0xFFFF )
        return 42;
    }
  }
  else
  {
    fclose(v2);
    return -2;
  }
  return result;
}


/* Function: call_fread_fwrite @ 0x2706 */
int __cdecl call_fread_fwrite()
{
  return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2712 */
int __fastcall param_malloc_free(size_t size)
{
  int v1; // ebp
  int *v2; // rax
  int v3; // ecx
  __int64 i; // rdx
  int v5; // ebp

  v2 = (int *)malloc(4 * size);
  if ( !v2 )
    return -1;
  if ( size )
  {
    v3 = 0;
    for ( i = 0; i != size; ++i )
    {
      v2[i] = v3;
      v3 += 10;
    }
    v1 = *v2;
  }
  v5 = v2[size - 1] + v1;
  free(v2);
  return v5;
}


/* Function: call_malloc_free @ 0x2761 */
int __cdecl call_malloc_free()
{
  return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x276B */
int __fastcall param_memset(void *buffer, size_t size)
{
  int v2; // ebp
  __int64 v3; // rax

  v2 = 0;
  memset(buffer, 0, size);
  if ( size )
  {
    v3 = 0;
    v2 = 0;
    do
      v2 += *((unsigned __int8 *)buffer + v3++);
    while ( size != v3 );
  }
  return v2;
}


/* Function: call_memset @ 0x27A0 */
int __cdecl call_memset()
{
  return 0;
}


/* Function: param_strchr_strstr @ 0x27A3 */
int __fastcall param_strchr_strstr(const char *str, char ch_0, const char *substr)
{
  char *v4; // rax
  int v5; // ebp
  char *v6; // rax

  v4 = strchr(str, ch_0);
  v5 = v4 == 0 ? -1 : (_DWORD)v4 - (_DWORD)str;
  v6 = strstr(str, substr);
  return v5 + (v6 == 0 ? -1 : (_DWORD)v6 - (_DWORD)str);
}


/* Function: call_strchr_strstr @ 0x27DC */
int __cdecl call_strchr_strstr()
{
  return 15;
}


/* Function: test_standard_library_functions @ 0x27E2 */
void __cdecl test_standard_library_functions()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  __int64 v3; // rsi
  int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  int v7; // [rsp+Ch] [rbp-3Ch] BYREF
  char s[56]; // [rsp+10h] [rbp-38h] BYREF

  puts(::s);
  strcpy(s, "HelloLib");
  v0 = strlen(s);
  printf(aLibL101D, v0);
  printf(aLibL102D, 0);
  printf(aLibL103D, 12);
  printf(aLibL104D, 90);
  v1 = call_memcmp();
  printf(aLibL105D, v1);
  v2 = printf("Value: %d, Name: %s\n", 42, "Test");
  printf(aLibL106D, v2);
  v3 = 0xFFFFFFFFLL;
  if ( (unsigned int)__isoc99_sscanf("123,456", "%d,%d", s, &v7) == 2 )
    v3 = (unsigned int)(*(_DWORD *)s + v7);
  printf(aLibL107D, v3);
  v4 = param_fopen_fclose("/etc/passwd");
  printf(aLibL108D, (v4 >> 31) | 0x2Au);
  v5 = param_fread_fwrite("/tmp/binbench_test.tmp");
  printf(aLibL109D, v5);
  v6 = param_malloc_free(0xAu);
  printf(aLibL110D, v6);
  printf(aLibL111D, 0);
  printf(aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x295B */
int __fastcall param_linux_syscall(const char *pathname)
{
  int v1; // eax
  int v2; // ebx

  v1 = syscall(2, pathname, 0);
  v2 = v1;
  if ( v1 < 0 )
    return -*__errno_location();
  syscall(3, (unsigned int)v1);
  return v2;
}


/* Function: call_linux_syscall @ 0x299A */
int __cdecl call_linux_syscall()
{
  return (param_linux_syscall("/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_win32_api @ 0x29AF */
int __fastcall param_win32_api(const char *filename)
{
  int v1; // eax
  int v2; // edx
  bool v3; // sf
  int result; // eax
  struct stat v5; // [rsp+0h] [rbp-98h] BYREF

  v1 = stat(filename, &v5);
  v2 = -2;
  if ( v5.st_size > 0 )
    v2 = 42;
  v3 = v1 < 0;
  result = -1;
  if ( !v3 )
    return v2;
  return result;
}


/* Function: call_win32_api @ 0x29E7 */
int __cdecl call_win32_api()
{
  int v0; // eax
  int v1; // edx
  bool v2; // sf
  int result; // eax
  struct stat v4; // [rsp+0h] [rbp-98h] BYREF

  v0 = stat("/etc/passwd", &v4);
  v1 = -2;
  if ( v4.st_size > 0 )
    v1 = 42;
  v2 = v0 < 0;
  result = -1;
  if ( !v2 )
    return v1;
  return result;
}


/* Function: param_fork_exec @ 0x2A26 */
int __fastcall param_fork_exec(const char *prog, const char *arg)
{
  __int64 v2; // rax
  int v3; // eax
  int result; // eax
  int stat_loc; // [rsp+0h] [rbp-14h] BYREF

  stat_loc = HIDWORD(v2);
  v3 = fork();
  if ( v3 < 0 )
    return -1;
  if ( !v3 )
  {
    execl(prog, prog, arg, 0);
    _exit(127);
  }
  if ( waitpid(v3, &stat_loc, 0) < 0 )
    return -2;
  result = -3;
  if ( (stat_loc & 0x7F) == 0 )
    return BYTE1(stat_loc);
  return result;
}


/* Function: call_fork_exec @ 0x2A90 */
int __cdecl call_fork_exec()
{
  return param_fork_exec("/bin/true", 0) != 0 ? -1 : 0x2A;
}


/* Function: param_pipe_communication @ 0x2AA8 */
int __cdecl param_pipe_communication()
{
  __pid_t v0; // eax
  ssize_t v1; // rbx
  int result; // eax
  int pipedes[2]; // [rsp+8h] [rbp-30h] BYREF
  _BYTE buf[40]; // [rsp+10h] [rbp-28h] BYREF

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
    _exit(0);
  }
  close(pipedes[1]);
  v1 = read(pipedes[0], buf, 0x1Fu);
  buf[v1] = 0;
  close(pipedes[0]);
  wait(0);
  result = -3;
  if ( v1 > 0 )
    return 42;
  return result;
}


/* Function: call_pipe_communication @ 0x2B4C */
// attributes: thunk
int __cdecl call_pipe_communication()
{
  return param_pipe_communication();
}


/* Function: param_socket_create @ 0x2B51 */
int __cdecl param_socket_create()
{
  int v0; // eax
  int v1; // ebx
  int v2; // ebp
  int result; // eax
  int optval; // [rsp+4h] [rbp-24h] BYREF
  struct sockaddr v5; // [rsp+8h] [rbp-20h] BYREF

  v0 = socket(2, 1, 0);
  if ( v0 < 0 )
    return -1;
  v1 = v0;
  optval = 1;
  if ( setsockopt(v0, 1, 2, &optval, 4u) < 0 )
  {
    close(v1);
    return -2;
  }
  else
  {
    *(_QWORD *)&v5.sa_data[6] = 0;
    *(_QWORD *)&v5.sa_family = 2;
    if ( bind(v1, &v5, 0x10u) < 0 )
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


/* Function: call_socket_create @ 0x2C06 */
// attributes: thunk
int __cdecl call_socket_create()
{
  return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x2C0B */
int __cdecl param_shmget_shmat()
{
  int v0; // eax
  int v1; // ebx
  int v2; // eax
  int v3; // eax
  int v4; // r14d
  char *v5; // rax
  char *v6; // rbp

  v0 = open("/tmp/binbench_shm", 66, 438);
  v1 = -1;
  if ( v0 >= 0 )
  {
    close(v0);
    v2 = ftok("/tmp/binbench_shm", 42);
    if ( v2 >= 0 )
    {
      v3 = shmget(v2, 0x1000u, 950);
      if ( v3 < 0 )
      {
        return -2;
      }
      else
      {
        v4 = v3;
        v5 = (char *)shmat(v3, 0, 0);
        if ( v5 == (char *)-1LL )
        {
          return -3;
        }
        else
        {
          v6 = v5;
          strcpy(v5, "SharedMemory");
          v1 = strlen(v5);
          shmdt(v6);
          shmctl(v4, 0, 0);
        }
      }
    }
  }
  return v1;
}


/* Function: call_shmget_shmat @ 0x2CCC */
int __cdecl call_shmget_shmat()
{
  bool v0; // cc
  int result; // eax

  v0 = param_shmget_shmat() <= 0;
  result = -1;
  if ( !v0 )
    return 42;
  return result;
}


/* Function: param_signal_handling @ 0x2CE3 */
int __cdecl param_signal_handling()
{
  unsigned int v0; // ebx
  bool v1; // cc
  int result; // eax
  unsigned int v3; // ebx

  if ( signal(10, signal_handler) == (__sighandler_t)-1LL )
    return -1;
  if ( signal(14, signal_handler) == (__sighandler_t)-1LL )
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
      v1 = v0-- <= 1;
    }
    while ( !v1 );
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
        v1 = v3-- <= 1;
      }
      while ( !v1 );
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


/* Function: signal_handler @ 0x2E06 */
void __fastcall signal_handler(int sig)
{
  signal_received = 1;
  signal_number = sig;
}


/* Function: call_signal_handling @ 0x2E17 */
// attributes: thunk
int __cdecl call_signal_handling()
{
  return param_signal_handling();
}


/* Function: test_system_calls @ 0x2E1C */
void __cdecl test_system_calls()
{
  int v0; // eax
  int v1; // eax
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  struct stat v8; // [rsp+0h] [rbp-A8h] BYREF

  puts(asc_43D3);
  v0 = param_linux_syscall("/etc/passwd");
  printf(aSysL301D, (v0 >> 31) | 0x2Au);
  v1 = stat("/etc/passwd", &v8);
  v2 = 4294967294LL;
  if ( v8.st_size > 0 )
    v2 = 42;
  v3 = -1;
  if ( v1 < 0 )
    v2 = 0xFFFFFFFFLL;
  printf(aSysL302D, v2);
  v4 = param_fork_exec("/bin/true", 0);
  printf(aSysL303D, v4 != 0 ? -1 : 0x2A);
  v5 = param_pipe_communication();
  printf(aSysL304D, v5);
  v6 = param_socket_create();
  printf(aSysL305D, v6);
  if ( param_shmget_shmat() > 0 )
    v3 = 42;
  printf(aSysL306D, v3);
  v7 = param_signal_handling();
  printf(aSysL307D, v7);
}


/* Function: thread_compute @ 0x2F16 */
void *__fastcall thread_compute(void *arg)
{
  int v1; // ebx
  void *result; // rax

  v1 = *(_DWORD *)arg * *(_DWORD *)arg;
  result = malloc(4u);
  *(_DWORD *)result = v1;
  return result;
}


/* Function: param_pthread_create @ 0x2F2A */
int __fastcall param_pthread_create(int x)
{
  int v1; // ebx
  pthread_t newthread; // [rsp+8h] [rbp-20h] BYREF
  int arg; // [rsp+14h] [rbp-14h] BYREF
  void *thread_return; // [rsp+18h] [rbp-10h] BYREF

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


/* Function: call_pthread_create @ 0x2F76 */
int __cdecl call_pthread_create()
{
  return param_pthread_create(7);
}


/* Function: thread_sum @ 0x2F80 */
void *__fastcall thread_sum(void *arg)
{
  int v1; // eax
  bool v2; // cc
  __int64 v3; // rax

  *((_DWORD *)arg + 2) = 0;
  v1 = *((_DWORD *)arg + 1);
  v2 = v1 < *(_DWORD *)arg;
  v3 = (unsigned int)(v1 - *(_DWORD *)arg);
  if ( !v2 )
    *((_DWORD *)arg + 2) = (((unsigned __int64)(unsigned int)(~*(_DWORD *)arg + *((_DWORD *)arg + 1)) * v3) >> 1)
                         + *(_DWORD *)arg
                         + v3 * (*(_DWORD *)arg + 1);
  return 0;
}


/* Function: param_pthread_join @ 0x2FB4 */
int __cdecl param_pthread_join()
{
  __int64 *p_arg; // rbx
  __int64 i; // rbp
  __int64 *v2; // rbx
  __int64 v3; // rbp
  int v4; // r14d
  pthread_t newthread[4]; // [rsp+0h] [rbp-68h] BYREF
  __int64 arg; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h] BYREF
  int v9; // [rsp+30h] [rbp-38h]
  int v10; // [rsp+34h] [rbp-34h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  int v12; // [rsp+40h] [rbp-28h]

  p_arg = &arg;
  v8 = 0xB00000000LL;
  v10 = 0;
  v12 = 0;
  arg = 0xA00000001LL;
  v9 = 20;
  v11 = 0x1E00000015LL;
  for ( i = 0; i != 3; ++i )
  {
    if ( pthread_create(&newthread[i], 0, thread_sum, p_arg) )
      return -1;
    p_arg = (__int64 *)((char *)p_arg + 12);
  }
  v2 = &v8;
  v3 = 0;
  v4 = 0;
  while ( !pthread_join(newthread[v3], 0) )
  {
    v4 += *(_DWORD *)v2;
    ++v3;
    v2 = (__int64 *)((char *)v2 + 12);
    if ( v3 == 3 )
      return v4;
  }
  return -2;
}


/* Function: call_pthread_join @ 0x306C */
// attributes: thunk
int __cdecl call_pthread_join()
{
  return param_pthread_join();
}


/* Function: thread_increment @ 0x3071 */
void *__fastcall thread_increment(void *arg)
{
  int v1; // ebp

  v1 = *(_DWORD *)arg;
  if ( *(int *)arg > 0 )
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


/* Function: param_mutex_lock @ 0x30AE */
int __fastcall param_mutex_lock(int thread_count, int iterations_per_thread)
{
  __int64 v2; // rax
  int v3; // r14d
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // r14
  __int64 i; // rbp
  int result; // eax
  int v9; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+4h] [rbp-34h]

  v10 = HIDWORD(v2);
  v3 = thread_count;
  v9 = iterations_per_thread;
  v4 = (char *)malloc(8LL * thread_count);
  if ( !v4 )
    return -1;
  v5 = v4;
  shared_counter = 0;
  if ( thread_count > 0 )
  {
    v10 = thread_count;
    v6 = 0;
    do
    {
      if ( pthread_create((pthread_t *)&v5[v6], 0, thread_increment, &v9) )
      {
        free(v5);
        return -2;
      }
      v6 += 8;
    }
    while ( 8LL * (unsigned int)thread_count != v6 );
    v3 = v10;
    if ( v10 > 0 )
    {
      for ( i = 0; i != thread_count; pthread_join(*(_QWORD *)&v5[8 * i++], 0) )
        ;
    }
  }
  free(v5);
  result = -3;
  if ( shared_counter == v9 * v3 )
    return 42;
  return result;
}


/* Function: call_mutex_lock @ 0x3188 */
int __cdecl call_mutex_lock()
{
  return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x3197 */
_DWORD *__fastcall consumer_thread(void *arg)
{
  int v1; // ebx
  _DWORD *result; // rax

  pthread_mutex_lock(&cond_mutex);
  if ( !ready )
  {
    do
      pthread_cond_wait(&cond, &cond_mutex);
    while ( ready != 1 );
  }
  v1 = 42;
  if ( !data )
    v1 = 0;
  pthread_mutex_unlock(&cond_mutex);
  result = malloc(4u);
  *result = v1;
  return result;
}


/* Function: producer_thread @ 0x3203 */
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


/* Function: param_condition_variable @ 0x3243 */
int __cdecl param_condition_variable()
{
  int v0; // ebx
  pthread_t newthread; // [rsp+8h] [rbp-20h] BYREF
  pthread_t th; // [rsp+10h] [rbp-18h] BYREF
  void *thread_return; // [rsp+18h] [rbp-10h] BYREF

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


/* Function: call_condition_variable @ 0x32CE */
// attributes: thunk
int __cdecl call_condition_variable()
{
  return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x32D3 */
void *__fastcall thread_atomic_increment(void *arg)
{
  int v1; // edx
  signed __int32 v2; // ecx

  v1 = *(_DWORD *)arg;
  if ( *(int *)arg > 0 )
  {
    v2 = 0;
    do
    {
      _InterlockedIncrement(&atomic_counter);
      _InterlockedCompareExchange(&atomic_counter, v2 + 1000, v2);
      ++v2;
    }
    while ( v2 != v1 );
  }
  return 0;
}


/* Function: thread_atomic_load_store @ 0x32FB */
void *__fastcall thread_atomic_load_store(void *arg)
{
  _InterlockedExchange(&atomic_counter, atomic_counter + 100);
  return 0;
}


/* Function: param_atomic_ops @ 0x330D */
int __fastcall param_atomic_ops(int thread_count, int iterations)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // r14
  __int64 i; // rbp
  int v6; // ebp
  int result; // eax
  int arg; // [rsp+Ch] [rbp-3Ch] BYREF
  pthread_t newthread[7]; // [rsp+10h] [rbp-38h] BYREF

  arg = iterations;
  v2 = malloc(8LL * thread_count);
  if ( !v2 )
    return -1;
  v3 = v2;
  _InterlockedExchange(&atomic_counter, 0);
  if ( thread_count <= 0 )
  {
LABEL_6:
    if ( !pthread_create(newthread, 0, thread_atomic_load_store, 0) )
      pthread_join(newthread[0], 0);
    if ( thread_count > 0 )
    {
      for ( i = 0; i != thread_count; pthread_join(v3[i++], 0) )
        ;
    }
    v6 = atomic_counter;
    free(v3);
    result = -3;
    if ( v6 > 0 )
      return 42;
  }
  else
  {
    v4 = 0;
    while ( !pthread_create(&v3[v4], 0, thread_atomic_increment, &arg) )
    {
      if ( thread_count == ++v4 )
        goto LABEL_6;
    }
    free(v3);
    return -2;
  }
  return result;
}


/* Function: call_atomic_ops @ 0x3404 */
int __cdecl call_atomic_ops()
{
  return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x3413 */
void *__fastcall thread_tls_test(void *arg)
{
  unsigned int v1; // ebx
  void *result; // rax

  v1 = __readfsdword(0xFFFFFFD0);
  __writefsdword(0xFFFFFFD0, v1 + 50);
  strncpy((char *)(__readfsqword(0) - 32), (const char *)arg, 0x1Fu);
  result = malloc(8u);
  *(_DWORD *)result = v1;
  *((_DWORD *)result + 1) = v1 + 50;
  return result;
}


/* Function: param_thread_local_storage @ 0x345C */
int __fastcall param_thread_local_storage(int thread_count)
{
  void *v1; // r14
  void *v2; // r13
  int result; // eax
  __int64 i; // rbx
  char *v5; // rax
  pthread_t *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rbp
  int v9; // r15d
  int v10; // ebx
  __int64 v11; // rbx
  int v12; // [rsp+4h] [rbp-44h]
  pthread_t *ptr; // [rsp+8h] [rbp-40h]
  void *thread_return; // [rsp+10h] [rbp-38h] BYREF

  v1 = malloc(8LL * thread_count);
  v2 = malloc(8LL * thread_count);
  result = -1;
  if ( v1 && v2 )
  {
    if ( thread_count <= 0 )
    {
      v12 = thread_count;
      v10 = 0;
      v9 = 0;
LABEL_13:
      free(v2);
      free(v1);
      result = -3;
      if ( !(v10 ^ (100 * v12) | v9 ^ (150 * v12)) )
        return 42;
    }
    else
    {
      for ( i = 0; i != thread_count; snprintf(v5, 0x10u, "Thread-%d", i++) )
      {
        v5 = (char *)malloc(0x10u);
        *((_QWORD *)v2 + i) = v5;
      }
      v6 = (pthread_t *)v1;
      v7 = 0;
      ptr = v6;
      while ( !pthread_create(v6, 0, thread_tls_test, *((void **)v2 + v7)) )
      {
        ++v7;
        ++v6;
        if ( thread_count == v7 )
        {
          v12 = thread_count;
          v8 = 0;
          v9 = 0;
          v10 = 0;
          v1 = ptr;
          do
          {
            pthread_join(ptr[v8], &thread_return);
            v10 += *(_DWORD *)thread_return;
            v9 += *((_DWORD *)thread_return + 1);
            free(thread_return);
            free(*((void **)v2 + v8++));
          }
          while ( thread_count != v8 );
          goto LABEL_13;
        }
      }
      v11 = -1;
      do
        free(*((void **)v2 + ++v11));
      while ( v7 != v11 );
      free(v2);
      free(ptr);
      return -2;
    }
  }
  return result;
}


/* Function: call_thread_local_storage @ 0x35F0 */
int __cdecl call_thread_local_storage()
{
  return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x35FA */
void __cdecl test_thread_concurrency()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax

  puts(asc_43EE);
  v0 = param_pthread_create(7);
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


/* Function: main @ 0x36A4 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}


/* Function: .term_proc @ 0x36B8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: raise @ 0x72D8 */

/* FAILED to decompile: free @ 0x72E0 */

/* FAILED to decompile: __libc_start_main @ 0x72E8 */

/* FAILED to decompile: __errno_location @ 0x72F0 */

/* FAILED to decompile: unlink @ 0x72F8 */

/* FAILED to decompile: strncpy @ 0x7300 */

/* FAILED to decompile: _exit @ 0x7308 */

/* FAILED to decompile: strcpy @ 0x7310 */

/* FAILED to decompile: puts @ 0x7318 */

/* FAILED to decompile: fread @ 0x7320 */

/* FAILED to decompile: setsockopt @ 0x7328 */

/* FAILED to decompile: shmdt @ 0x7330 */

/* FAILED to decompile: write @ 0x7338 */

/* FAILED to decompile: pthread_cond_wait @ 0x7340 */

/* FAILED to decompile: fclose @ 0x7348 */

/* FAILED to decompile: strlen @ 0x7350 */

/* FAILED to decompile: strchr @ 0x7358 */

/* FAILED to decompile: printf @ 0x7360 */

/* FAILED to decompile: rewind @ 0x7368 */

/* FAILED to decompile: snprintf @ 0x7370 */

/* FAILED to decompile: memset @ 0x7378 */

/* FAILED to decompile: alarm @ 0x7380 */

/* FAILED to decompile: close @ 0x7388 */

/* FAILED to decompile: pipe @ 0x7390 */

/* FAILED to decompile: read @ 0x7398 */

/* FAILED to decompile: memcmp @ 0x73A0 */

/* FAILED to decompile: pthread_cond_signal @ 0x73A8 */

/* FAILED to decompile: strcmp @ 0x73B0 */

/* FAILED to decompile: signal @ 0x73B8 */

/* FAILED to decompile: syscall @ 0x73C0 */

/* FAILED to decompile: stat_0 @ 0x73C8 */

/* FAILED to decompile: memcpy @ 0x73D0 */

/* FAILED to decompile: fileno @ 0x73D8 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x73E0 */

/* FAILED to decompile: malloc @ 0x73E8 */

/* FAILED to decompile: __isoc99_sscanf @ 0x73F0 */

/* FAILED to decompile: listen @ 0x73F8 */

/* FAILED to decompile: bind @ 0x7400 */

/* FAILED to decompile: pthread_create @ 0x7408 */

/* FAILED to decompile: waitpid @ 0x7410 */

/* FAILED to decompile: open @ 0x7418 */

/* FAILED to decompile: shmctl @ 0x7420 */

/* FAILED to decompile: fopen @ 0x7428 */

/* FAILED to decompile: shmat @ 0x7430 */

/* FAILED to decompile: shmget @ 0x7438 */

/* FAILED to decompile: fwrite @ 0x7440 */

/* FAILED to decompile: ftok @ 0x7448 */

/* FAILED to decompile: pthread_join @ 0x7450 */

/* FAILED to decompile: execl @ 0x7458 */

/* FAILED to decompile: pthread_cancel @ 0x7460 */

/* FAILED to decompile: sleep @ 0x7468 */

/* FAILED to decompile: wait @ 0x7470 */

/* FAILED to decompile: fork @ 0x7478 */

/* FAILED to decompile: strstr @ 0x7480 */

/* FAILED to decompile: pthread_mutex_lock @ 0x7488 */

/* FAILED to decompile: usleep @ 0x7490 */

/* FAILED to decompile: socket @ 0x7498 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x74A0 */

/* FAILED to decompile: __gmon_start__ @ 0x74B0 */

/* Total functions decompiled: 71, failed: 59 */
