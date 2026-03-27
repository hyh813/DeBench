/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/6/6_gcc_O3_no_g
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
    *(int (**)(int, char **, char **))((char *)&unk_1411C + (_DWORD)&off_10FE4),
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
  int v1; // r2
  int v2; // r3
  int v3; // r1
  int v4; // r1

  v1 = 0;
  v2 = *a1;
  v3 = a1[1];
  a1[2] = 0;
  if ( v2 <= v3 )
  {
    v4 = v3 + 1;
    do
      v1 += v2++;
    while ( v4 != v2 );
    a1[2] = v1;
  }
  return 0;
}


/* Function: thread_compute @ 0x110F0 */
_DWORD *__fastcall thread_compute(int *a1)
{
  int v1; // r4
  _DWORD *result; // r0

  v1 = *a1;
  result = malloc(4u);
  *result = v1 * v1;
  return result;
}


/* Function: thread_increment @ 0x11118 */
void *__fastcall thread_increment(int *a1)
{
  int v1; // r7
  int v2; // r4

  v1 = *a1;
  if ( *a1 > 0 )
  {
    v2 = 0;
    do
    {
      pthread_mutex_lock(&counter_mutex);
      ++shared_counter;
      ++v2;
      pthread_mutex_unlock(&counter_mutex);
      usleep(0x3E8u);
    }
    while ( v1 != v2 );
  }
  return 0;
}


/* Function: consumer_thread @ 0x11170 */
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


/* Function: producer_thread @ 0x111D0 */
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


/* Function: thread_atomic_increment @ 0x11218 */
void *__fastcall thread_atomic_increment(int *a1, int a2, int a3)
{
  int v3; // r7
  int v4; // r3
  int v5; // r4

  v3 = *a1;
  v4 = 0;
  if ( *a1 > 0 )
  {
    v5 = 0;
    do
    {
      _sync_fetch_and_add_4(&atomic_counter, 1, a3, v4);
      _sync_val_compare_and_swap_4(&atomic_counter, v5, v5 + 1000);
      ++v5;
    }
    while ( v3 != v5 );
  }
  return 0;
}


/* Function: thread_atomic_load_store @ 0x112A8 */
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


/* Function: thread_tls_test @ 0x112D8 */
_DWORD *__fastcall thread_tls_test(const char *a1)
{
  int v1; // r5
  _DWORD *result; // r0

  v1 = unk_2519C;
  unk_2519C += 50;
  strncpy(byte_251A0, a1, 0x1Fu);
  result = malloc(8u);
  *result = v1;
  result[1] = v1 + 50;
  return result;
}


/* Function: param_fork_exec.part.0 @ 0x11324 */
void __fastcall __noreturn param_fork_exec_part_0(char *arg, int a2)
{
  execl(arg, arg, a2, 0);
  exit(127);
}


/* Function: param_thread_local_storage.constprop.0 @ 0x11340 */
int param_thread_local_storage_constprop_0()
{
  pthread_t *v0; // r6
  char *v1; // r0
  bool v2; // zf
  int v3; // r4
  char *v4; // r5
  char *v5; // r7
  char *v6; // r8
  void *v7; // r0
  pthread_t *v8; // r9
  char *v9; // r10
  int i; // r8
  void *v11; // t1
  int v12; // r4
  int v13; // r9
  pthread_t *v14; // r8
  pthread_t v15; // t1
  void *v16; // t1
  bool v17; // zf
  char *v19; // r8
  void *v20; // t1
  void *thread_return; // [sp+8h] [bp-30h] BYREF

  v0 = (pthread_t *)malloc(0x10u);
  v1 = (char *)malloc(0x10u);
  v2 = v1 == 0;
  if ( v1 )
    v2 = v0 == 0;
  v3 = v2;
  if ( v2 )
    return -1;
  v4 = v1 - 4;
  v5 = v1;
  v6 = v1 - 4;
  do
  {
    v7 = malloc(0x10u);
    *((_DWORD *)v6 + 1) = v7;
    v6 += 4;
    ++v3;
    _snprintf_chk(v7, 16);
  }
  while ( v3 != 4 );
  v8 = v0;
  v9 = v4;
  for ( i = 0; i != 4; ++i )
  {
    v11 = (void *)*((_DWORD *)v9 + 1);
    v9 += 4;
    v12 = pthread_create(v8, 0, (void *(*)(void *))thread_tls_test, v11);
    if ( v12 )
    {
      v19 = &v5[4 * i];
      do
      {
        v20 = (void *)*((_DWORD *)v4 + 1);
        v4 += 4;
        free(v20);
      }
      while ( v19 != v4 );
      free(v5);
      free(v0);
      return -2;
    }
    ++v8;
  }
  v13 = 0;
  v14 = v0 - 1;
  do
  {
    v15 = v14[1];
    ++v14;
    pthread_join(v15, &thread_return);
    v12 += *(_DWORD *)thread_return;
    v13 += *((_DWORD *)thread_return + 1);
    free(thread_return);
    v16 = (void *)*((_DWORD *)v4 + 1);
    v4 += 4;
    free(v16);
  }
  while ( v14 != v0 + 3 );
  free(v5);
  free(v0);
  v17 = v12 == 400;
  if ( v12 == 400 )
    v17 = v13 == 600;
  if ( v17 )
    return 42;
  else
    return -3;
}


/* Function: param_atomic_ops.constprop.0 @ 0x114BC */
int param_atomic_ops_constprop_0()
{
  pthread_t *v0; // r0
  pthread_t *v1; // r7
  int v2; // r0
  pthread_t *v3; // r4
  pthread_t *v4; // r4
  pthread_t v5; // t1
  int v6; // r0
  int v7; // r0
  int v8; // r4
  int arg; // [sp+4h] [bp-24h] BYREF
  pthread_t newthread; // [sp+8h] [bp-20h] BYREF

  arg = 500;
  v0 = (pthread_t *)malloc(0x10u);
  v1 = v0;
  if ( !v0 )
    return -1;
  v2 = _sync_synchronize(v0);
  v3 = v1;
  atomic_counter = 0;
  _sync_synchronize(v2);
  do
  {
    if ( pthread_create(v3, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
    {
      free(v1);
      return -2;
    }
    ++v3;
  }
  while ( v3 != v1 + 4 );
  if ( !pthread_create(&newthread, 0, thread_atomic_load_store, 0) )
    pthread_join(newthread, 0);
  v4 = v1 - 1;
  do
  {
    v5 = v4[1];
    ++v4;
    v6 = pthread_join(v5, 0);
  }
  while ( v1 + 3 != v4 );
  v7 = _sync_synchronize(v6);
  v8 = atomic_counter;
  _sync_synchronize(v7);
  free(v1);
  if ( v8 <= 0 )
    return -3;
  else
    return 42;
}


/* Function: param_mutex_lock.constprop.0 @ 0x115E4 */
int param_mutex_lock_constprop_0()
{
  pthread_t *v0; // r0
  pthread_t *v1; // r7
  pthread_t *v2; // r4
  pthread_t *v3; // r6
  pthread_t *v4; // r4
  pthread_t v5; // t1
  int v7; // [sp+0h] [bp-20h] BYREF

  v7 = 1000;
  v0 = (pthread_t *)malloc(0x10u);
  v1 = v0;
  if ( !v0 )
    return -1;
  v2 = v0;
  v3 = v0 + 4;
  shared_counter = 0;
  do
  {
    if ( pthread_create(v2, 0, (void *(*)(void *))thread_increment, &v7) )
    {
      free(v1);
      return -2;
    }
    ++v2;
  }
  while ( v2 != v3 );
  v4 = v1 - 1;
  do
  {
    v5 = v4[1];
    ++v4;
    pthread_join(v5, 0);
  }
  while ( v1 + 3 != v4 );
  free(v1);
  if ( shared_counter == 4 * v7 )
    return 42;
  else
    return -3;
}


/* Function: param_strcpy @ 0x116D4 */
int __fastcall param_strcpy(int a1)
{
  return stpcpy() - a1;
}


/* Function: call_strcpy @ 0x116E8 */
int call_strcpy()
{
  return 8;
}


/* Function: param_strcmp @ 0x116F0 */
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


/* Function: call_strcmp @ 0x11714 */
int call_strcmp()
{
  return 0;
}


/* Function: param_strlen @ 0x1171C */
// attributes: thunk
size_t param_strlen(const char *s)
{
  return strlen(s);
}


/* Function: call_strlen @ 0x11720 */
int call_strlen()
{
  return 12;
}


/* Function: param_memcpy @ 0x11728 */
size_t __fastcall param_memcpy(void *a1, const void *a2, size_t a3)
{
  memcpy(a1, a2, a3);
  return a3;
}


/* Function: call_memcpy @ 0x1173C */
int call_memcpy()
{
  return 90;
}


/* Function: param_memcmp @ 0x11744 */
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


/* Function: call_memcmp @ 0x11768 */
int call_memcmp()
{
  int v0; // r0
  int v1; // r6
  int v2; // r0
  int v3; // r0
  _DWORD v5[3]; // [sp+0h] [bp-38h] BYREF
  _DWORD s2[3]; // [sp+Ch] [bp-2Ch] BYREF
  _DWORD v7[3]; // [sp+18h] [bp-20h] BYREF

  v5[0] = 1;
  v5[1] = 2;
  v5[2] = 3;
  s2[0] = 1;
  s2[1] = 2;
  s2[2] = 4;
  v7[0] = 1;
  v7[1] = 2;
  v7[2] = 3;
  v0 = memcmp(v5, s2, 0xCu);
  if ( v0 <= 0 )
  {
    if ( v0 )
      v1 = -1;
    else
      v1 = 0;
  }
  else
  {
    v1 = 1;
  }
  v2 = memcmp(v5, v7, 0xCu);
  if ( v2 <= 0 )
  {
    if ( v2 )
      v3 = -1;
    else
      v3 = 0;
  }
  else
  {
    v3 = 1;
  }
  return v3 + v1;
}


/* Function: param_printf @ 0x11824 */
int __fastcall param_printf(int a1, const char *a2)
{
  return _printf_chk(1, "Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x1183C */
int call_printf()
{
  return _printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x11858 */
int __fastcall param_scanf(int a1)
{
  int v2; // [sp+4h] [bp-14h] BYREF
  int v3; // [sp+8h] [bp-10h] BYREF

  if ( _isoc99_sscanf(a1, "%d,%d", &v2, &v3) == 2 )
    return v2 + v3;
  else
    return -1;
}


/* Function: call_scanf @ 0x118BC */
int call_scanf()
{
  int v1; // [sp+4h] [bp-14h] BYREF
  int v2; // [sp+8h] [bp-10h] BYREF

  if ( _isoc99_sscanf("123,456", "%d,%d", &v1, &v2) == 2 )
    return v1 + v2;
  else
    return -1;
}


/* Function: param_fopen_fclose @ 0x11928 */
int __fastcall param_fopen_fclose(const char *a1)
{
  FILE *v1; // r0
  FILE *v2; // r4
  int v3; // r3
  FILE *v4; // r0
  int v5; // r4

  v1 = fopen(a1, "r");
  v2 = v1;
  if ( !v1 )
    return -1;
  v3 = fileno(v1);
  v4 = v2;
  v5 = v3;
  fclose(v4);
  return v5;
}


/* Function: call_fopen_fclose @ 0x11964 */
int call_fopen_fclose()
{
  FILE *v0; // r0
  FILE *v1; // r4
  int v2; // r3
  FILE *v3; // r0
  int v4; // r4

  v0 = fopen("/etc/passwd", "r");
  v1 = v0;
  if ( v0 && (v2 = fileno(v0), v3 = v1, v4 = v2, fclose(v3), v4 >= 0) )
    return 42;
  else
    return -1;
}


/* Function: param_fread_fwrite @ 0x119B0 */
int __fastcall param_fread_fwrite(const char *a1)
{
  FILE *v2; // r0
  FILE *v3; // r4
  size_t v4; // r3
  FILE *v5; // r0
  size_t v6; // r4
  _BYTE v8[4]; // [sp+0h] [bp-38h] BYREF
  char ptr[32]; // [sp+4h] [bp-34h] BYREF

  v2 = fopen(a1, "w+");
  v3 = v2;
  if ( !v2 )
    return -1;
  if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
  {
    rewind(v3);
    v4 = fread(ptr, 1u, 0x12u, v3);
    v5 = v3;
    v6 = v4;
    v8[v4 + 4] = 0;
    fclose(v5);
    unlink(a1);
    if ( v6 == 18 )
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


/* Function: call_fread_fwrite @ 0x11AAC */
int call_fread_fwrite()
{
  return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x11AB8 */
int __fastcall param_malloc_free(int a1)
{
  int v1; // r4
  _DWORD *v3; // r0
  int v4; // r2
  _DWORD *v5; // r3
  int v6; // r4

  v1 = a1;
  v3 = malloc(4 * a1);
  if ( !v3 )
    return -1;
  if ( a1 )
  {
    v4 = 0;
    v5 = v3 - 1;
    do
    {
      v5[1] = v4;
      ++v5;
      v4 += 10;
    }
    while ( v5 != &v3[v1 - 1] );
  }
  v6 = v3[v1 - 1] + *v3;
  free(v3);
  return v6;
}


/* Function: call_malloc_free @ 0x11B20 */
int call_malloc_free()
{
  void *v0; // r0

  v0 = malloc(0x28u);
  if ( !v0 )
    return -1;
  free(v0);
  return 90;
}


/* Function: param_memset @ 0x11B48 */
int __fastcall param_memset(char *a1, size_t n)
{
  int result; // r0
  char *v5; // r3
  int v6; // t1

  memset(a1, 0, n);
  if ( !n )
    return 0;
  result = 0;
  v5 = a1 - 1;
  do
  {
    v6 = (unsigned __int8)*++v5;
    result += v6;
  }
  while ( &a1[n - 1] != v5 );
  return result;
}


/* Function: call_memset @ 0x11B94 */
int call_memset()
{
  return 0;
}


/* Function: param_strchr_strstr @ 0x11B9C */
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


/* Function: call_strchr_strstr @ 0x11BD8 */
int call_strchr_strstr()
{
  return 15;
}


/* Function: test_standard_library_functions @ 0x11BE0 */
int test_standard_library_functions()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r3
  int v4; // r2
  FILE *v5; // r0
  FILE *v6; // r4
  int v7; // r3
  FILE *v8; // r0
  int v9; // r4
  int v10; // r2
  int v11; // r0
  void *v12; // r0
  int v13; // r2
  int v15; // [sp+4h] [bp-14h] BYREF
  int v16; // [sp+8h] [bp-10h] BYREF

  puts(s);
  _printf_chk(1, aLibL101D, 8);
  _printf_chk(1, aLibL102D, 0);
  _printf_chk(1, aLibL103D, 12);
  _printf_chk(1, aLibL104D, 90);
  v0 = call_memcmp();
  _printf_chk(1, aLibL105D, v0);
  v1 = _printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
  _printf_chk(1, aLibL106D, v1);
  v2 = _isoc99_sscanf("123,456", "%d,%d", &v15, &v16);
  if ( v2 == 2 )
  {
    v4 = v15;
    v3 = v16;
  }
  else
  {
    v4 = -1;
  }
  if ( v2 == 2 )
    v4 += v3;
  _printf_chk(1, aLibL107D, v4, v3);
  v5 = fopen("/etc/passwd", "r");
  v6 = v5;
  if ( v5 && (v7 = fileno(v5), v8 = v6, v9 = v7, fclose(v8), v9 >= 0) )
    v10 = 42;
  else
    v10 = -1;
  _printf_chk(1, aLibL108D, v10);
  v11 = param_fread_fwrite("/tmp/binbench_test.tmp");
  _printf_chk(1, aLibL109D, v11);
  v12 = malloc(0x28u);
  if ( v12 )
  {
    free(v12);
    v13 = 90;
  }
  else
  {
    v13 = -1;
  }
  _printf_chk(1, aLibL110D, v13);
  _printf_chk(1, aLibL111D, 0);
  return _printf_chk(1, aLibL112D, 15, 0);
}


/* Function: param_linux_syscall @ 0x11DCC */
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


/* Function: call_linux_syscall @ 0x11E10 */
int call_linux_syscall()
{
  int v0; // r1

  v0 = syscall(5, "/etc/passwd", 0);
  if ( v0 < 0 )
  {
    if ( *_errno_location() > 0 )
      return -1;
    else
      return 42;
  }
  else
  {
    syscall(6, v0);
    return 42;
  }
}


/* Function: param_win32_api @ 0x11E58 */
int __fastcall param_win32_api(const char *a1)
{
  struct stat v2; // [sp+0h] [bp-68h] BYREF

  if ( stat(a1, &v2) < 0 )
    return -1;
  if ( v2.st_size <= 0 )
    return -2;
  return 42;
}


/* Function: call_win32_api @ 0x11EC0 */
int call_win32_api()
{
  struct stat v1; // [sp+0h] [bp-68h] BYREF

  if ( stat("/etc/passwd", &v1) < 0 )
    return -1;
  if ( v1.st_size <= 0 )
    return -2;
  return 42;
}


/* Function: param_fork_exec @ 0x11F30 */
int __fastcall param_fork_exec(char *a1, int a2)
{
  int v4; // r0
  int v6; // [sp+0h] [bp-18h] BYREF

  v4 = fork();
  if ( v4 < 0 )
    return -1;
  if ( !v4 )
    param_fork_exec_part_0(a1, a2);
  if ( waitpid(v4, &v6, 0) < 0 )
    return -2;
  if ( (v6 & 0x7F) != 0 )
    return -3;
  return BYTE1(v6);
}


/* Function: call_fork_exec @ 0x11FC8 */
int call_fork_exec()
{
  int v0; // r0
  int v2; // [sp+0h] [bp-10h] BYREF

  v0 = fork();
  if ( v0 < 0 )
    return -1;
  if ( !v0 )
    param_fork_exec_part_0("/bin/true", 0);
  if ( waitpid(v0, &v2, 0) < 0 || (v2 & 0x7F) != 0 || BYTE1(v2) )
    return -1;
  else
    return 42;
}


/* Function: param_pipe_communication @ 0x12060 */
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


/* Function: call_pipe_communication @ 0x12144 */
// attributes: thunk
int call_pipe_communication()
{
  return param_pipe_communication();
}


/* Function: param_socket_create @ 0x12148 */
int param_socket_create()
{
  int v0; // r0
  int v1; // r4
  int optval; // [sp+8h] [bp-20h] BYREF
  sockaddr addr; // [sp+Ch] [bp-1Ch] BYREF

  v0 = socket(2, 1, 0);
  v1 = v0;
  if ( v0 < 0 )
    return -1;
  optval = 1;
  if ( setsockopt(v0, 1, 2, &optval, 4u) < 0 )
  {
    close(v1);
    return -2;
  }
  else
  {
    memset(addr.sa_data, 0, sizeof(addr.sa_data));
    addr.sa_family = 2;
    if ( bind(v1, &addr, 0x10u) < 0 )
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


/* Function: call_socket_create @ 0x1224C */
// attributes: thunk
int call_socket_create()
{
  return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x12250 */
int param_shmget_shmat()
{
  int v0; // r0
  int v1; // r4
  char *v2; // r0

  v0 = open("/tmp/binbench_shm", 66, 438);
  if ( v0 < 0 )
    return -1;
  close(v0);
  if ( ftok("/tmp/binbench_shm", 42) < 0 )
    return -1;
  v1 = shmget();
  if ( v1 < 0 )
    return -2;
  v2 = (char *)shmat();
  if ( v2 == (char *)-1 )
    return -3;
  strcpy(v2, "SharedMemory");
  shmdt(v2);
  shmctl(v1, 0);
  return 12;
}


/* Function: call_shmget_shmat @ 0x12304 */
int call_shmget_shmat()
{
  if ( param_shmget_shmat() <= 0 )
    return -1;
  else
    return 42;
}


/* Function: param_signal_handling @ 0x1231C */
int param_signal_handling()
{
  int result; // r0
  int v1; // r4
  int v2; // r4

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
      if ( !signal_received )
      {
        v1 = 1000;
        do
        {
          usleep(0x3E8u);
          if ( signal_received )
            break;
          --v1;
        }
        while ( v1 );
      }
      if ( signal_received )
      {
        if ( signal_number == 10 )
        {
          signal_received = 0;
          alarm(1u);
          if ( !signal_received )
          {
            v2 = 2000;
            do
            {
              usleep(0x3E8u);
              if ( signal_received )
                break;
              --v2;
            }
            while ( v2 );
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


/* Function: call_signal_handling @ 0x12444 */
// attributes: thunk
int call_signal_handling()
{
  return param_signal_handling();
}


/* Function: test_system_calls @ 0x12448 */
int test_system_calls()
{
  int v0; // r1
  int v1; // r2
  int v2; // r2
  int v3; // r0
  int v4; // r2
  int v5; // r0
  int v6; // r0
  int v7; // r2
  int v8; // r2
  struct stat v10; // [sp+0h] [bp-68h] BYREF

  puts(asc_13FF4);
  v0 = syscall(5, "/etc/passwd", 0);
  if ( v0 < 0 )
  {
    if ( *_errno_location() > 0 )
      v1 = -1;
    else
      v1 = 42;
  }
  else
  {
    syscall(6, v0);
    v1 = 42;
  }
  _printf_chk(1, aSysL301D, v1);
  if ( stat("/etc/passwd", &v10) < 0 )
  {
    v2 = -1;
  }
  else if ( v10.st_size <= 0 )
  {
    v2 = -2;
  }
  else
  {
    v2 = 42;
  }
  _printf_chk(1, aSysL302D, v2);
  v3 = fork();
  if ( v3 < 0 )
    goto LABEL_11;
  if ( !v3 )
    param_fork_exec_part_0("/bin/true", 0);
  if ( waitpid(v3, (int *)&v10, 0) < 0 || (v10.st_dev & 0x7F) != 0 || BYTE1(v10.st_dev) )
LABEL_11:
    v4 = -1;
  else
    v4 = 42;
  _printf_chk(1, aSysL303D, v4);
  v5 = param_pipe_communication();
  _printf_chk(1, aSysL304D, v5);
  v6 = param_socket_create();
  _printf_chk(1, aSysL305D, v6);
  if ( param_shmget_shmat() <= 0 )
    v7 = -1;
  else
    v7 = 42;
  _printf_chk(1, aSysL306D, v7);
  v8 = param_signal_handling();
  return _printf_chk(1, aSysL307D, v8, 0);
}


/* Function: param_pthread_create @ 0x125F4 */
int __fastcall param_pthread_create(int a1)
{
  int v1; // r4
  pthread_t th; // [sp+0h] [bp-18h] BYREF
  int arg; // [sp+4h] [bp-14h] BYREF
  void *thread_return; // [sp+8h] [bp-10h] BYREF

  arg = a1;
  if ( pthread_create(&th, 0, (void *(*)(void *))thread_compute, &arg) )
    return -1;
  pthread_join(th, &thread_return);
  v1 = *(_DWORD *)thread_return;
  free(thread_return);
  return v1;
}


/* Function: call_pthread_create @ 0x12680 */
int call_pthread_create()
{
  int v0; // r4
  pthread_t th; // [sp+0h] [bp-18h] BYREF
  int arg; // [sp+4h] [bp-14h] BYREF
  void *thread_return; // [sp+8h] [bp-10h] BYREF

  arg = 7;
  if ( pthread_create(&th, 0, (void *(*)(void *))thread_compute, &arg) )
    return -1;
  pthread_join(th, &thread_return);
  v0 = *(_DWORD *)thread_return;
  free(thread_return);
  return v0;
}


/* Function: param_pthread_join @ 0x1270C */
int param_pthread_join()
{
  pthread_t *v0; // r6
  pthread_t *v1; // r7
  _DWORD *v2; // r8
  int *v3; // r5
  int v4; // r4
  pthread_t v5; // t1
  pthread_t newthread[3]; // [sp+4h] [bp-54h] BYREF
  _DWORD arg[9]; // [sp+10h] [bp-48h] BYREF
  int v9; // [sp+34h] [bp-24h] BYREF

  v0 = newthread;
  v1 = newthread;
  v2 = arg;
  v3 = arg;
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
    v4 = pthread_create(v1, 0, (void *(*)(void *))thread_sum, v3);
    if ( v4 )
      return -1;
    v3 += 3;
    ++v1;
  }
  while ( v3 != &v9 );
  while ( 1 )
  {
    v5 = *v0++;
    if ( pthread_join(v5, 0) )
      break;
    v4 += v2[2];
    v2 += 3;
    if ( v0 == arg )
      return v4;
  }
  return -2;
}


/* Function: call_pthread_join @ 0x127F8 */
// attributes: thunk
int call_pthread_join()
{
  return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x127FC */
int __fastcall param_mutex_lock(int a1, int a2)
{
  pthread_t *v3; // r0
  pthread_t *v4; // r8
  int v5; // r6
  pthread_t *v6; // r5
  int v7; // r4
  char *v9; // r5
  pthread_t v10; // t1
  int arg; // [sp+4h] [bp-24h] BYREF

  arg = a2;
  v3 = (pthread_t *)malloc(4 * a1);
  v4 = v3;
  if ( !v3 )
    return -1;
  v5 = 0;
  shared_counter = 0;
  if ( a1 > 0 )
  {
    v6 = v3;
    while ( 1 )
    {
      v7 = pthread_create(v6++, 0, (void *(*)(void *))thread_increment, &arg);
      if ( v7 )
      {
        free(v4);
        return -2;
      }
      if ( a1 == v5 + 1 )
        break;
      ++v5;
    }
    v9 = (char *)(v4 - 1);
    do
    {
      v10 = *((_DWORD *)v9 + 1);
      v9 += 4;
      pthread_join(v10, 0);
    }
    while ( v5 != v7++ );
  }
  free(v4);
  if ( shared_counter == arg * a1 )
    return 42;
  else
    return -3;
}


/* Function: call_mutex_lock @ 0x128D4 */
// attributes: thunk
int call_mutex_lock()
{
  return param_mutex_lock_constprop_0();
}


/* Function: param_condition_variable @ 0x128D8 */
int param_condition_variable()
{
  int v1; // r4
  pthread_t th; // [sp+0h] [bp-18h] BYREF
  pthread_t newthread; // [sp+4h] [bp-14h] BYREF
  void *thread_return; // [sp+8h] [bp-10h] BYREF

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
    v1 = *(_DWORD *)thread_return;
    free(thread_return);
  }
  return v1;
}


/* Function: call_condition_variable @ 0x129A0 */
// attributes: thunk
int call_condition_variable()
{
  return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x129A4 */
int __fastcall param_atomic_ops(int a1, int a2)
{
  pthread_t *v3; // r0
  pthread_t *v4; // r8
  int v5; // r5
  int v6; // r0
  pthread_t *v7; // r6
  int v8; // r4
  pthread_t *v10; // r5
  pthread_t v11; // t1
  int v12; // r0
  int v13; // r0
  int v14; // r4
  int arg; // [sp+4h] [bp-2Ch] BYREF
  pthread_t newthread; // [sp+8h] [bp-28h] BYREF

  arg = a2;
  v3 = (pthread_t *)malloc(4 * a1);
  v4 = v3;
  if ( !v3 )
    return -1;
  v5 = 0;
  v6 = _sync_synchronize(v3);
  atomic_counter = 0;
  _sync_synchronize(v6);
  if ( a1 <= 0 )
  {
    v12 = pthread_create(&newthread, 0, thread_atomic_load_store, 0);
    if ( !v12 )
      v12 = pthread_join(newthread, 0);
  }
  else
  {
    v7 = v4;
    do
    {
      v8 = pthread_create(v7, 0, (void *(*)(void *))thread_atomic_increment, &arg);
      if ( v8 )
      {
        free(v4);
        return -2;
      }
      ++v5;
      ++v7;
    }
    while ( a1 != v5 );
    if ( !pthread_create(&newthread, 0, thread_atomic_load_store, 0) )
      pthread_join(newthread, 0);
    v10 = v4 - 1;
    do
    {
      v11 = v10[1];
      ++v10;
      ++v8;
      v12 = pthread_join(v11, 0);
    }
    while ( a1 > v8 );
  }
  v13 = _sync_synchronize(v12);
  v14 = atomic_counter;
  _sync_synchronize(v13);
  free(v4);
  if ( v14 <= 0 )
    return -3;
  else
    return 42;
}


/* Function: call_atomic_ops @ 0x12B04 */
// attributes: thunk
int call_atomic_ops()
{
  return param_atomic_ops_constprop_0();
}


/* Function: param_thread_local_storage @ 0x12B08 */
int __fastcall param_thread_local_storage(int a1)
{
  size_t v2; // r4
  pthread_t *v3; // r10
  char *v4; // r0
  bool v5; // zf
  int v6; // r4
  char *v7; // r7
  char *v8; // r6
  void *v9; // r0
  int v10; // r5
  char *v11; // r11
  int v12; // r4
  pthread_t *v13; // r6
  void *v14; // t1
  char *v15; // r4
  void *v16; // t1
  int v18; // r9
  int v19; // r6
  pthread_t *v20; // r11
  pthread_t v21; // t1
  void *v22; // t1
  char *ptr; // [sp+10h] [bp-38h]
  int v25; // [sp+14h] [bp-34h]
  void *thread_return; // [sp+18h] [bp-30h] BYREF

  v2 = 4 * a1;
  v25 = 4 * a1;
  v3 = (pthread_t *)malloc(4 * a1);
  v4 = (char *)malloc(v2);
  v5 = v4 == 0;
  if ( v4 )
    v5 = v3 == 0;
  ptr = v4;
  v6 = v5;
  if ( v5 )
    return -1;
  if ( a1 <= 0 )
  {
    v18 = v6;
  }
  else
  {
    v7 = v4 - 4;
    v8 = v4 - 4;
    do
    {
      v9 = malloc(0x10u);
      *((_DWORD *)v8 + 1) = v9;
      v8 += 4;
      v10 = v6++;
      _snprintf_chk(v9, 16);
    }
    while ( a1 != v6 );
    v11 = v7;
    v12 = 0;
    v13 = v3;
    do
    {
      v14 = (void *)*((_DWORD *)v11 + 1);
      v11 += 4;
      if ( pthread_create(v13, 0, (void *(*)(void *))thread_tls_test, v14) )
      {
        v15 = &ptr[4 * v12];
        do
        {
          v16 = (void *)*((_DWORD *)v7 + 1);
          v7 += 4;
          free(v16);
        }
        while ( v15 != v7 );
        free(ptr);
        free(v3);
        return -2;
      }
      v5 = v10 == v12;
      ++v13;
      ++v12;
    }
    while ( !v5 );
    v18 = 0;
    v19 = 0;
    v6 = 0;
    v20 = v3 - 1;
    do
    {
      v21 = v20[1];
      ++v20;
      pthread_join(v21, &thread_return);
      v18 += *(_DWORD *)thread_return;
      v6 += *((_DWORD *)thread_return + 1);
      free(thread_return);
      v22 = (void *)*((_DWORD *)v7 + 1);
      v7 += 4;
      free(v22);
      v5 = v10 == v19++;
    }
    while ( !v5 );
  }
  free(ptr);
  free(v3);
  if ( v6 == 30 * (v25 + a1) && v18 == 20 * (v25 + a1) )
    return 42;
  else
    return -3;
}


/* Function: call_thread_local_storage @ 0x12CE8 */
// attributes: thunk
int call_thread_local_storage()
{
  return param_thread_local_storage_constprop_0();
}


/* Function: test_thread_concurrency @ 0x12CEC */
int test_thread_concurrency()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r2
  pthread_t th; // [sp+0h] [bp-18h] BYREF
  int arg; // [sp+4h] [bp-14h] BYREF
  void *thread_return; // [sp+8h] [bp-10h] BYREF

  puts(asc_140D4);
  arg = 7;
  if ( pthread_create(&th, 0, (void *(*)(void *))thread_compute, &arg) )
  {
    v0 = -1;
  }
  else
  {
    pthread_join(th, &thread_return);
    v0 = *(_DWORD *)thread_return;
    free(thread_return);
  }
  _printf_chk(1, aThrL301D, v0);
  v1 = param_pthread_join();
  _printf_chk(1, aThrL302D, v1);
  v2 = param_mutex_lock_constprop_0();
  _printf_chk(1, aThrL303D, v2);
  v3 = param_condition_variable();
  _printf_chk(1, aThrL304D, v3);
  v4 = param_atomic_ops_constprop_0();
  _printf_chk(1, aThrL305D, v4);
  v5 = param_thread_local_storage_constprop_0();
  return _printf_chk(1, aThrL306D, v5, 0);
}


/* Function: __sync_fetch_and_add_4 @ 0x12E0C */
int __fastcall _sync_fetch_and_add_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x12E44 */
int __fastcall _sync_fetch_and_sub_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 - a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x12E7C */
int __fastcall _sync_fetch_and_or_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 | a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x12EB4 */
int __fastcall _sync_fetch_and_and_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 & a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x12EEC */
int __fastcall _sync_fetch_and_xor_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x12F24 */
int __fastcall _sync_fetch_and_nand_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, ~(*a1 & a2), a1) );
  return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x12F60 */
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


/* Function: __sync_fetch_and_sub_2 @ 0x12FC0 */
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


/* Function: __sync_fetch_and_or_2 @ 0x13020 */
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


/* Function: __sync_fetch_and_and_2 @ 0x13080 */
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


/* Function: __sync_fetch_and_xor_2 @ 0x130E0 */
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


/* Function: __sync_fetch_and_nand_2 @ 0x13140 */
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


/* Function: __sync_fetch_and_add_1 @ 0x131A4 */
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


/* Function: __sync_fetch_and_sub_1 @ 0x13200 */
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


/* Function: __sync_fetch_and_or_1 @ 0x1325C */
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


/* Function: __sync_fetch_and_and_1 @ 0x132B8 */
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


/* Function: __sync_fetch_and_xor_1 @ 0x13314 */
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


/* Function: __sync_fetch_and_nand_1 @ 0x13370 */
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


/* Function: __sync_add_and_fetch_4 @ 0x133D0 */
int __fastcall _sync_add_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 + a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x13408 */
int __fastcall _sync_sub_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 - a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x13440 */
int __fastcall _sync_or_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 | a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x13478 */
int __fastcall _sync_and_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 & a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x134B0 */
int __fastcall _sync_xor_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 ^ a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x134E8 */
int __fastcall _sync_nand_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = ~(*a1 & a2);
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x13524 */
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


/* Function: __sync_sub_and_fetch_2 @ 0x1358C */
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


/* Function: __sync_or_and_fetch_2 @ 0x135F4 */
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


/* Function: __sync_and_and_fetch_2 @ 0x1365C */
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


/* Function: __sync_xor_and_fetch_2 @ 0x136C4 */
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


/* Function: __sync_nand_and_fetch_2 @ 0x1372C */
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


/* Function: __sync_add_and_fetch_1 @ 0x13798 */
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


/* Function: __sync_sub_and_fetch_1 @ 0x137FC */
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


/* Function: __sync_or_and_fetch_1 @ 0x13860 */
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


/* Function: __sync_and_and_fetch_1 @ 0x138C4 */
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


/* Function: __sync_xor_and_fetch_1 @ 0x13928 */
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


/* Function: __sync_nand_and_fetch_1 @ 0x1398C */
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


/* Function: __sync_val_compare_and_swap_4 @ 0x139F4 */
int __fastcall _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
  while ( *(_DWORD *)a1 == a2 )
  {
    if ( !MEMORY[0xFFFF0FC0](a2, a3, a1) )
      return a2;
  }
  return *(_DWORD *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x13A44 */
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


/* Function: __sync_val_compare_and_swap_1 @ 0x13ABC */
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


/* Function: __sync_bool_compare_and_swap_4 @ 0x13B30 */
bool __fastcall _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
  return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x13B5C */
bool __fastcall _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x13B78 */
bool __fastcall _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x13BA0 */
int __fastcall _sync_lock_test_and_set_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
  return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x13BD8 */
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


/* Function: __sync_lock_test_and_set_1 @ 0x13C38 */
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


/* Function: __sync_lock_release_8 @ 0x13C94 */
int __fastcall _sync_lock_release_8(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  a1[1] = 0;
  return result;
}


/* Function: __sync_lock_release_4 @ 0x13CB8 */
int __fastcall _sync_lock_release_4(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_2 @ 0x13CD8 */
int __fastcall _sync_lock_release_2(_WORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_1 @ 0x13CF8 */
int __fastcall _sync_lock_release_1(_BYTE *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __aeabi_read_tp @ 0x13D20 */
void _aeabi_read_tp()
{
  JUMPOUT(0xFFFF0FE0);
}


/* Function: .term_proc @ 0x13D28 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_malloc @ 0x251B8 */

/* FAILED to decompile: __imp_open @ 0x251BC */

/* FAILED to decompile: __imp_pthread_create @ 0x251C0 */

/* FAILED to decompile: __imp_shmget @ 0x251C4 */

/* FAILED to decompile: __imp_execl @ 0x251C8 */

/* FAILED to decompile: __imp_stpcpy @ 0x251CC */

/* FAILED to decompile: __imp___errno_location @ 0x251D0 */

/* FAILED to decompile: __imp_rewind @ 0x251D4 */

/* FAILED to decompile: __imp_fopen @ 0x251D8 */

/* FAILED to decompile: __imp_ftok @ 0x251DC */

/* FAILED to decompile: __imp_waitpid @ 0x251E0 */

/* FAILED to decompile: __imp_shmdt @ 0x251E4 */

/* FAILED to decompile: __imp_free @ 0x251E8 */

/* FAILED to decompile: __imp__exit @ 0x251EC */

/* FAILED to decompile: __imp_setsockopt @ 0x251F0 */

/* FAILED to decompile: __imp_read @ 0x251F4 */

/* FAILED to decompile: __imp_bind @ 0x251F8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x251FC */

/* FAILED to decompile: __imp_strchr @ 0x25200 */

/* FAILED to decompile: __imp_syscall @ 0x25204 */

/* FAILED to decompile: __imp_fread @ 0x25208 */

/* FAILED to decompile: __imp___isoc99_sscanf @ 0x2520C */

/* FAILED to decompile: __imp_pthread_cond_signal @ 0x25210 */

/* FAILED to decompile: __imp_abort @ 0x25214 */

/* FAILED to decompile: __imp_close @ 0x25218 */

/* FAILED to decompile: __imp_wait @ 0x2521C */

/* FAILED to decompile: __imp_stat @ 0x25220 */

/* FAILED to decompile: __imp_strlen @ 0x25224 */

/* FAILED to decompile: __imp_shmctl @ 0x25228 */

/* FAILED to decompile: __imp_shmat @ 0x2522C */

/* FAILED to decompile: __imp_socket @ 0x25230 */

/* FAILED to decompile: __imp_pthread_cancel @ 0x25234 */

/* FAILED to decompile: __imp_memset @ 0x25238 */

/* FAILED to decompile: __imp_memcpy @ 0x2523C */

/* FAILED to decompile: __imp_usleep @ 0x25240 */

/* FAILED to decompile: __imp_strncpy @ 0x25244 */

/* FAILED to decompile: __imp_signal @ 0x25248 */

/* FAILED to decompile: __imp_sleep @ 0x2524C */

/* FAILED to decompile: __imp_unlink @ 0x25250 */

/* FAILED to decompile: __imp_raise @ 0x25254 */

/* FAILED to decompile: __imp_memcmp @ 0x25258 */

/* FAILED to decompile: __imp_fork @ 0x2525C */

/* FAILED to decompile: __imp_pthread_cond_wait @ 0x25260 */

/* FAILED to decompile: __imp_write @ 0x25264 */

/* FAILED to decompile: __imp_fileno @ 0x25268 */

/* FAILED to decompile: __imp_fclose @ 0x2526C */

/* FAILED to decompile: __imp_strcmp @ 0x25270 */

/* FAILED to decompile: __imp_pthread_mutex_lock @ 0x25274 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x25278 */

/* FAILED to decompile: __imp_listen @ 0x2527C */

/* FAILED to decompile: __imp___printf_chk @ 0x25280 */

/* FAILED to decompile: __imp_alarm @ 0x25284 */

/* FAILED to decompile: __imp_pipe @ 0x25288 */

/* FAILED to decompile: __imp_pthread_mutex_unlock @ 0x2528C */

/* FAILED to decompile: __imp___snprintf_chk @ 0x25290 */

/* FAILED to decompile: __imp_strstr @ 0x25294 */

/* FAILED to decompile: __imp_puts @ 0x25298 */

/* FAILED to decompile: __imp_fwrite @ 0x2529C */

/* FAILED to decompile: __imp_pthread_join @ 0x252A0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x252A4 */

/* Total functions decompiled: 126, failed: 60 */
