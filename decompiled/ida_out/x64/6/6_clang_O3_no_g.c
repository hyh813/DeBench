/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/6/6_clang_O3_no_g
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
size_t __fastcall param_strcpy(char *s, const char *a2)
{
  strcpy(s, a2);
  return strlen(s);
}


/* Function: call_strcpy @ 0x24D0 */
size_t call_strcpy()
{
  char v1[40]; // [rsp+0h] [rbp-28h] BYREF

  strcpy(v1, "HelloLib");
  return strlen(v1);
}


/* Function: param_strcmp @ 0x2500 */
__int64 __fastcall param_strcmp(const char *a1, const char *a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  bool v4; // cc
  __int64 result; // rax

  v2 = strcmp(a1, a2);
  v3 = -(v2 != 0);
  v4 = v2 <= 0;
  result = 1;
  if ( v4 )
    return v3;
  return result;
}


/* Function: call_strcmp @ 0x2520 */
__int64 call_strcmp()
{
  return 0;
}


/* Function: param_strlen @ 0x2530 */
// attributes: thunk
size_t param_strlen(const char *s)
{
  return strlen(s);
}


/* Function: call_strlen @ 0x2540 */
__int64 call_strlen()
{
  return 12;
}


/* Function: param_memcpy @ 0x2550 */
__int64 __fastcall param_memcpy(void *a1, const void *a2, size_t a3)
{
  unsigned int v3; // ebx

  v3 = a3;
  memcpy(a1, a2, a3);
  return v3;
}


/* Function: call_memcpy @ 0x2560 */
__int64 call_memcpy()
{
  return 90;
}


/* Function: param_memcmp @ 0x2570 */
__int64 __fastcall param_memcmp(const void *a1, const void *a2, size_t a3)
{
  int v3; // eax
  unsigned int v4; // ecx
  bool v5; // cc
  __int64 result; // rax

  v3 = memcmp(a1, a2, a3);
  v4 = -(v3 != 0);
  v5 = v3 <= 0;
  result = 1;
  if ( v5 )
    return v4;
  return result;
}


/* Function: call_memcmp @ 0x2590 */
__int64 call_memcmp()
{
  return 0xFFFFFFFFLL;
}


/* Function: param_printf @ 0x25A0 */
int __fastcall param_printf(int a1, const char *a2)
{
  return printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x25C0 */
int call_printf()
{
  return printf("Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x25E0 */
__int64 __fastcall param_scanf(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // zf
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-8h] BYREF

  v4 = v1;
  v2 = (unsigned int)__isoc99_sscanf(a1, "%d,%d", (char *)&v4 + 4, &v4) == 2;
  result = 0xFFFFFFFFLL;
  if ( v2 )
    return (unsigned int)(HIDWORD(v4) + v4);
  return result;
}


/* Function: call_scanf @ 0x2610 */
__int64 __fastcall call_scanf()
{
  __int64 v0; // rax
  bool v1; // zf
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-8h] BYREF

  v3 = v0;
  v1 = (unsigned int)__isoc99_sscanf("123,456", "%d,%d", (char *)&v3 + 4, &v3) == 2;
  result = 0xFFFFFFFFLL;
  if ( v1 )
    return (unsigned int)(HIDWORD(v3) + v3);
  return result;
}


/* Function: param_fopen_fclose @ 0x2650 */
__int64 __fastcall param_fopen_fclose(const char *a1)
{
  FILE *v1; // rax
  FILE *v2; // rbx
  unsigned int v3; // ebp

  v1 = fopen(a1, "r");
  if ( !v1 )
    return 0xFFFFFFFFLL;
  v2 = v1;
  v3 = fileno(v1);
  fclose(v2);
  return v3;
}


/* Function: call_fopen_fclose @ 0x2690 */
__int64 call_fopen_fclose()
{
  FILE *v0; // rax
  FILE *v1; // r14
  int v2; // ebx

  v0 = fopen("/etc/passwd", "r");
  if ( v0 )
  {
    v1 = v0;
    v2 = fileno(v0);
    fclose(v1);
    return (unsigned int)((v2 >> 31) | 0x2A);
  }
  else
  {
    return (unsigned int)-1;
  }
}


/* Function: param_fread_fwrite @ 0x26E0 */
__int64 __fastcall param_fread_fwrite(char *name)
{
  FILE *v1; // rax
  FILE *v2; // rbx
  size_t v3; // r15
  __int64 result; // rax
  __m128i v5[3]; // [rsp+0h] [rbp-38h] BYREF

  v1 = fopen(name, "w+");
  if ( !v1 )
    return 0xFFFFFFFFLL;
  v2 = v1;
  if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
  {
    rewind(v2);
    v3 = fread(v5, 1u, 0x12u, v2);
    v5[0].m128i_i8[v3] = 0;
    fclose(v2);
    unlink(name);
    result = 4294967293LL;
    if ( v3 == 18 )
    {
      result = 4294967293LL;
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
    return 4294967294LL;
  }
  return result;
}


/* Function: call_fread_fwrite @ 0x27C0 */
__int64 call_fread_fwrite()
{
  return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x27D0 */
__int64 __fastcall param_malloc_free(unsigned __int64 a1)
{
  int v1; // ebp
  int *v3; // rax
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebp
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __m128i v8; // xmm0
  __int64 v9; // rsi
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  __m128i v13; // xmm4
  __m128i v14; // xmm5
  __m128i v15; // xmm6
  __m128i si128; // xmm0
  __m128i v17; // xmm1
  int v18; // edx

  v3 = (int *)malloc(4 * a1);
  if ( v3 )
  {
    if ( !a1 )
      goto LABEL_16;
    if ( a1 < 8 )
    {
      v4 = 0;
      goto LABEL_13;
    }
    v4 = a1 & 0xFFFFFFFFFFFFFFF8LL;
    v6 = (((a1 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1;
    if ( (a1 & 0xFFFFFFFFFFFFFFF8LL) == 8 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_4030);
      v9 = 0;
      if ( (v6 & 1) != 0 )
      {
LABEL_11:
        v17 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_4060), si128);
        *(__m128i *)&v3[v9] = si128;
        *(__m128i *)&v3[v9 + 4] = v17;
      }
    }
    else
    {
      v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
      v8 = _mm_load_si128((const __m128i *)&xmmword_4040);
      v9 = 0;
      v10 = _mm_load_si128((const __m128i *)&xmmword_4050);
      v11 = _mm_load_si128((const __m128i *)&xmmword_4060);
      v12 = _mm_load_si128((const __m128i *)&xmmword_4070);
      v13 = _mm_load_si128((const __m128i *)&xmmword_4080);
      v14 = _mm_load_si128((const __m128i *)&xmmword_4090);
      do
      {
        v15 = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(v8, v10), 232),
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v8, 245), v10), 232));
        *(__m128i *)&v3[v9] = v15;
        *(__m128i *)&v3[v9 + 4] = _mm_add_epi32(v15, v11);
        *(__m128i *)&v3[v9 + 8] = _mm_add_epi32(v15, v12);
        *(__m128i *)&v3[v9 + 12] = _mm_add_epi32(v15, v13);
        v9 += 16;
        v8 = _mm_add_epi32(v8, v14);
        v7 -= 2LL;
      }
      while ( v7 );
      si128 = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(v8, v10), 232),
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(v8, 245), v10), 232));
      if ( (v6 & 1) != 0 )
        goto LABEL_11;
    }
    if ( v4 == a1 )
    {
LABEL_15:
      v1 = *v3;
LABEL_16:
      v5 = v3[a1 - 1] + v1;
      free(v3);
      return v5;
    }
LABEL_13:
    v18 = 10 * v4;
    do
    {
      v3[v4++] = v18;
      v18 += 10;
    }
    while ( a1 != v4 );
    goto LABEL_15;
  }
  return (unsigned int)-1;
}


/* Function: call_malloc_free @ 0x2950 */
__int64 call_malloc_free()
{
  return 90;
}


/* Function: param_memset @ 0x2960 */
__int64 __fastcall param_memset(unsigned __int8 *a1, size_t a2)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __m128i v11; // xmm1

  v3 = 0;
  memset(a1, 0, a2);
  if ( a2 )
  {
    if ( a2 < 8 )
    {
      v4 = 0;
      v3 = 0;
      do
LABEL_10:
        v3 += a1[v4++];
      while ( a2 != v4 );
      return v3;
    }
    v4 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    v5 = (((a2 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1;
    if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) == 8 )
    {
      v8 = 0;
      v7 = 0;
      v9 = 0;
      if ( (v5 & 1) != 0 )
      {
LABEL_8:
        v8 = _mm_add_epi32(
               v8,
               _mm_unpacklo_epi16(_mm_unpacklo_epi8(_mm_cvtsi32_si128(*(_DWORD *)&a1[v7]), (__m128i)0LL), (__m128i)0LL));
        v9 = _mm_add_epi32(
               v9,
               _mm_unpacklo_epi16(
                 _mm_unpacklo_epi8(_mm_cvtsi32_si128(*(_DWORD *)&a1[v7 + 4]), (__m128i)0LL),
                 (__m128i)0LL));
      }
    }
    else
    {
      v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      do
      {
        v8 = _mm_add_epi32(
               _mm_unpacklo_epi16(
                 _mm_unpacklo_epi8(_mm_cvtsi32_si128(*(_DWORD *)&a1[v7 + 8]), (__m128i)0LL),
                 (__m128i)0LL),
               _mm_add_epi32(
                 _mm_unpacklo_epi16(
                   _mm_unpacklo_epi8(_mm_cvtsi32_si128(*(_DWORD *)&a1[v7]), (__m128i)0LL),
                   (__m128i)0LL),
                 v8));
        v9 = _mm_add_epi32(
               _mm_unpacklo_epi16(
                 _mm_unpacklo_epi8(_mm_cvtsi32_si128(*(_DWORD *)&a1[v7 + 12]), (__m128i)0LL),
                 (__m128i)0LL),
               _mm_add_epi32(
                 _mm_unpacklo_epi16(
                   _mm_unpacklo_epi8(_mm_cvtsi32_si128(*(_DWORD *)&a1[v7 + 4]), (__m128i)0LL),
                   (__m128i)0LL),
                 v9));
        v7 += 16;
        v6 -= 2LL;
      }
      while ( v6 );
      if ( (v5 & 1) != 0 )
        goto LABEL_8;
    }
    v10 = _mm_add_epi32(v8, v9);
    v11 = _mm_add_epi32(_mm_shuffle_epi32(v10, 238), v10);
    v3 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v11, 85), v11));
    if ( v4 == a2 )
      return v3;
    goto LABEL_10;
  }
  return v3;
}


/* Function: call_memset @ 0x2AA0 */
__int64 call_memset()
{
  return 0;
}


/* Function: param_strchr_strstr @ 0x2AB0 */
__int64 __fastcall param_strchr_strstr(char *haystack, int a2, const char *a3)
{
  char *v4; // rax
  int v5; // ebp
  char *v6; // rax

  v4 = strchr(haystack, a2);
  v5 = v4 == 0 ? -1 : (_DWORD)v4 - (_DWORD)haystack;
  v6 = strstr(haystack, a3);
  return v5 + (((_DWORD)v6 - (_DWORD)haystack) | (unsigned int)-(v6 == 0));
}


/* Function: call_strchr_strstr @ 0x2AF0 */
__int64 call_strchr_strstr()
{
  return 15;
}


/* Function: test_standard_library_functions @ 0x2B00 */
int test_standard_library_functions()
{
  unsigned int v0; // eax
  unsigned int v1; // ebp
  unsigned int v2; // eax
  int v3; // eax
  __int64 v4; // rsi
  FILE *v5; // rax
  FILE *v6; // rbx
  int v7; // ebp
  unsigned int v8; // eax
  int v10; // [rsp+Ch] [rbp-3Ch] BYREF
  char s[56]; // [rsp+10h] [rbp-38h] BYREF

  puts(::s);
  strcpy(s, "HelloLib");
  v0 = strlen(s);
  printf(aLibL101D, v0);
  printf(aLibL102D, 0);
  printf(aLibL103D, 12);
  printf(aLibL104D, 90);
  v1 = -1;
  printf(aLibL105D, 0xFFFFFFFFLL);
  v2 = printf("Value: %d, Name: %s\n", 42, "Test");
  printf(aLibL106D, v2);
  v3 = __isoc99_sscanf("123,456", "%d,%d", s, &v10);
  v4 = (unsigned int)(*(_DWORD *)s + v10);
  if ( v3 != 2 )
    v4 = 0xFFFFFFFFLL;
  printf(aLibL107D, v4);
  v5 = fopen("/etc/passwd", "r");
  if ( v5 )
  {
    v6 = v5;
    v7 = fileno(v5);
    fclose(v6);
    v1 = (v7 >> 31) | 0x2A;
  }
  printf(aLibL108D, v1);
  v8 = param_fread_fwrite("/tmp/binbench_test.tmp");
  printf(aLibL109D, v8);
  printf(aLibL110D, 90);
  printf(aLibL111D, 0);
  return printf(aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x2C90 */
__int64 __fastcall param_linux_syscall(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = syscall(2, a1, 0);
  v2 = v1;
  if ( v1 < 0 )
    return (unsigned int)-*__errno_location();
  else
    syscall(3, (unsigned int)v1);
  return v2;
}


/* Function: call_linux_syscall @ 0x2CD0 */
__int64 call_linux_syscall()
{
  int v0; // eax
  int v1; // ebx

  v0 = syscall(2, "/etc/passwd", 0);
  v1 = v0;
  if ( v0 < 0 )
    v1 = -*__errno_location();
  else
    syscall(3, (unsigned int)v0);
  return (v1 >> 31) | 0x2Au;
}


/* Function: param_win32_api @ 0x2D20 */
__int64 __fastcall param_win32_api(const char *a1)
{
  int v1; // eax
  unsigned int v2; // edx
  bool v3; // sf
  __int64 result; // rax
  stat buf; // [rsp+8h] [rbp-90h] BYREF

  v1 = stat(a1, &buf);
  v2 = -2;
  if ( buf.st_size > 0 )
    v2 = 42;
  v3 = v1 < 0;
  result = 0xFFFFFFFFLL;
  if ( !v3 )
    return v2;
  return result;
}


/* Function: call_win32_api @ 0x2D60 */
__int64 call_win32_api()
{
  int v0; // eax
  unsigned int v1; // edx
  bool v2; // sf
  __int64 result; // rax
  struct stat buf; // [rsp+8h] [rbp-90h] BYREF

  v0 = stat("/etc/passwd", &buf);
  v1 = -2;
  if ( buf.st_size > 0 )
    v1 = 42;
  v2 = v0 < 0;
  result = 0xFFFFFFFFLL;
  if ( !v2 )
    return v1;
  return result;
}


/* Function: param_fork_exec @ 0x2DA0 */
__int64 __fastcall param_fork_exec(char *path, __int64 a2)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 result; // rax
  int stat_loc; // [rsp+0h] [rbp-14h] BYREF

  stat_loc = HIDWORD(v2);
  v3 = fork();
  if ( v3 < 0 )
    return 0xFFFFFFFFLL;
  if ( !v3 )
  {
    execl(path, path, a2, 0);
    _exit(127);
  }
  if ( waitpid(v3, &stat_loc, 0) < 0 )
    return 4294967294LL;
  result = 4294967293LL;
  if ( (stat_loc & 0x7F) == 0 )
    return BYTE1(stat_loc);
  return result;
}


/* Function: call_fork_exec @ 0x2E20 */
__int64 call_fork_exec()
{
  int v0; // eax
  int stat_loc[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v0 = fork();
  if ( v0 < 0 )
    return 0xFFFFFFFFLL;
  if ( !v0 )
  {
    execl("/bin/true", "/bin/true", 0, 0);
    _exit(127);
  }
  if ( waitpid(v0, stat_loc, 0) < 0 || (stat_loc[0] & 0x7F) != 0 )
    return 0xFFFFFFFFLL;
  else
    return (stat_loc[0] & 0xFF00) != 0 ? -1 : 0x2A;
}


/* Function: param_pipe_communication @ 0x2E90 */
__int64 param_pipe_communication()
{
  __pid_t v0; // eax
  ssize_t v1; // rbx
  __int64 result; // rax
  int pipedes[2]; // [rsp+8h] [rbp-30h] BYREF
  _BYTE buf[40]; // [rsp+10h] [rbp-28h] BYREF

  if ( pipe(pipedes) < 0 )
    return 0xFFFFFFFFLL;
  v0 = fork();
  if ( v0 < 0 )
    return 4294967294LL;
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
  result = 4294967293LL;
  if ( v1 > 0 )
    return 42;
  return result;
}


/* Function: call_pipe_communication @ 0x2F40 */
// attributes: thunk
__int64 call_pipe_communication()
{
  return param_pipe_communication();
}


/* Function: param_socket_create @ 0x2F50 */
__int64 param_socket_create()
{
  int v0; // eax
  int v1; // ebx
  int v2; // ebp
  __int64 result; // rax
  int optval; // [rsp+4h] [rbp-24h] BYREF
  sockaddr addr; // [rsp+8h] [rbp-20h] BYREF

  v0 = socket(2, 1, 0);
  if ( v0 < 0 )
    return 0xFFFFFFFFLL;
  v1 = v0;
  optval = 1;
  if ( setsockopt(v0, 1, 2, &optval, 4u) < 0 )
  {
    close(v1);
    return 4294967294LL;
  }
  else
  {
    *(_QWORD *)&addr.sa_data[6] = 0;
    *(_QWORD *)&addr.sa_family = 2;
    if ( bind(v1, &addr, 0x10u) < 0 )
    {
      close(v1);
      return 4294967293LL;
    }
    else
    {
      v2 = listen(v1, 5);
      close(v1);
      result = 42;
      if ( v2 < 0 )
        return 4294967292LL;
    }
  }
  return result;
}


/* Function: call_socket_create @ 0x3020 */
// attributes: thunk
__int64 call_socket_create()
{
  return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x3030 */
__int64 param_shmget_shmat()
{
  int v0; // eax
  unsigned int v1; // ebx
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
        return (unsigned int)-2;
      }
      else
      {
        v4 = v3;
        v5 = (char *)shmat(v3, 0, 0);
        if ( v5 == (char *)-1LL )
        {
          return (unsigned int)-3;
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


/* Function: call_shmget_shmat @ 0x3100 */
__int64 __fastcall call_shmget_shmat(__int64 a1)
{
  bool v1; // cc
  __int64 result; // rax

  v1 = (int)param_shmget_shmat(a1) <= 0;
  result = 0xFFFFFFFFLL;
  if ( !v1 )
    return 42;
  return result;
}


/* Function: param_signal_handling @ 0x3120 */
__int64 param_signal_handling()
{
  unsigned int v0; // ebx
  bool v1; // cc
  __int64 result; // rax
  unsigned int v3; // ebx

  if ( signal(10, signal_handler) == (__sighandler_t)-1LL )
    return 0xFFFFFFFFLL;
  if ( signal(14, signal_handler) == (__sighandler_t)-1LL )
    return 4294967294LL;
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
    return 4294967293LL;
  result = 4294967292LL;
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
    result = 4294967291LL;
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


/* Function: signal_handler @ 0x3250 */
void __fastcall signal_handler(int a1)
{
  signal_received = 1;
  signal_number = a1;
}


/* Function: call_signal_handling @ 0x3270 */
// attributes: thunk
__int64 call_signal_handling()
{
  return param_signal_handling();
}


/* Function: test_system_calls @ 0x3280 */
int test_system_calls()
{
  int v0; // eax
  int v1; // ebx
  int v2; // eax
  __int64 v3; // rsi
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rsi
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  struct stat buf; // [rsp+8h] [rbp-A0h] BYREF

  puts(asc_4443);
  v0 = syscall(2, "/etc/passwd", 0);
  v1 = v0;
  if ( v0 < 0 )
    v1 = -*__errno_location();
  else
    syscall(3, (unsigned int)v0);
  printf(aSysL301D, (v1 >> 31) | 0x2Au);
  v2 = stat("/etc/passwd", &buf);
  v3 = 4294967294LL;
  if ( buf.st_size > 0 )
    v3 = 42;
  v4 = -1;
  if ( v2 < 0 )
    v3 = 0xFFFFFFFFLL;
  printf(aSysL302D, v3);
  v5 = fork();
  v6 = 0xFFFFFFFFLL;
  if ( v5 >= 0 )
  {
    if ( !v5 )
    {
      execl("/bin/true", "/bin/true", 0, 0);
      _exit(127);
    }
    if ( waitpid(v5, (int *)&buf, 0) < 0 || (buf.st_dev & 0x7F) != 0 )
      v6 = 0xFFFFFFFFLL;
    else
      v6 = (buf.st_dev & 0xFF00) != 0 ? -1 : 0x2A;
  }
  printf(aSysL303D, v6);
  v7 = param_pipe_communication();
  printf(aSysL304D, v7);
  v8 = param_socket_create();
  printf(aSysL305D, v8);
  if ( (int)param_shmget_shmat(aSysL305D) > 0 )
    v4 = 42;
  printf(aSysL306D, v4);
  v9 = param_signal_handling();
  return printf(aSysL307D, v9);
}


/* Function: thread_compute @ 0x33F0 */
_DWORD *__fastcall thread_compute(_DWORD *a1)
{
  int v1; // ebx
  _DWORD *result; // rax

  v1 = *a1 * *a1;
  result = malloc(4u);
  *result = v1;
  return result;
}


/* Function: param_pthread_create @ 0x3410 */
__int64 __fastcall param_pthread_create(int a1)
{
  unsigned int v2; // ebx
  int arg; // [rsp+Ch] [rbp-1Ch] BYREF
  void *thread_return; // [rsp+10h] [rbp-18h] BYREF
  pthread_t newthread[2]; // [rsp+18h] [rbp-10h] BYREF

  arg = a1;
  if ( pthread_create(newthread, 0, (void *(*)(void *))thread_compute, &arg) )
    return 0xFFFFFFFFLL;
  pthread_join(newthread[0], &thread_return);
  v2 = *(_DWORD *)thread_return;
  free(thread_return);
  return v2;
}


/* Function: call_pthread_create @ 0x3470 */
__int64 call_pthread_create()
{
  unsigned int v1; // ebx
  int arg; // [rsp+Ch] [rbp-1Ch] BYREF
  void *thread_return; // [rsp+10h] [rbp-18h] BYREF
  pthread_t newthread[2]; // [rsp+18h] [rbp-10h] BYREF

  arg = 7;
  if ( pthread_create(newthread, 0, (void *(*)(void *))thread_compute, &arg) )
    return 0xFFFFFFFFLL;
  pthread_join(newthread[0], &thread_return);
  v1 = *(_DWORD *)thread_return;
  free(thread_return);
  return v1;
}


/* Function: thread_sum @ 0x34D0 */
void *__fastcall thread_sum(_DWORD *a1)
{
  int v1; // eax
  bool v2; // cc
  __int64 v3; // rax

  a1[2] = 0;
  v1 = a1[1];
  v2 = v1 < *a1;
  v3 = (unsigned int)(v1 - *a1);
  if ( !v2 )
    a1[2] = (((unsigned __int64)(unsigned int)(~*a1 + a1[1]) * v3) >> 1) + *a1 + v3 * (*a1 + 1);
  return 0;
}


/* Function: param_pthread_join @ 0x3510 */
__int64 param_pthread_join()
{
  unsigned int v0; // ebx
  int v1; // r14d
  int v2; // ebp
  __int64 arg; // [rsp+0h] [rbp-68h] BYREF
  __int64 arg_8; // [rsp+8h] [rbp-60h] BYREF
  __int64 v6; // [rsp+10h] [rbp-58h]
  __int64 v7; // [rsp+18h] [rbp-50h] BYREF
  int v8; // [rsp+20h] [rbp-48h]
  pthread_t newthread; // [rsp+30h] [rbp-38h] BYREF
  pthread_t th; // [rsp+38h] [rbp-30h] BYREF
  pthread_t v11[5]; // [rsp+40h] [rbp-28h] BYREF

  arg_8 = 0xB00000000LL;
  v8 = 0;
  arg = 0xA00000001LL;
  v6 = 20;
  v7 = 0x1E00000015LL;
  v0 = -1;
  if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_sum, &arg)
    && !pthread_create(&th, 0, (void *(*)(void *))thread_sum, (char *)&arg_8 + 4)
    && !pthread_create(v11, 0, (void *(*)(void *))thread_sum, &v7) )
  {
    v0 = -2;
    if ( !pthread_join(newthread, 0) )
    {
      v1 = arg_8;
      if ( !pthread_join(th, 0) )
      {
        v2 = HIDWORD(v6);
        if ( !pthread_join(v11[0], 0) )
          return (unsigned int)(v8 + v1 + v2);
      }
    }
  }
  return v0;
}


/* Function: call_pthread_join @ 0x3610 */
// attributes: thunk
__int64 call_pthread_join()
{
  return param_pthread_join();
}


/* Function: thread_increment @ 0x3620 */
void *__fastcall thread_increment(int *a1)
{
  int v1; // ebp

  v1 = *a1;
  if ( *a1 > 0 )
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


/* Function: param_mutex_lock @ 0x3660 */
__int64 __fastcall param_mutex_lock(int a1, int a2)
{
  __int64 v2; // rax
  int v3; // r14d
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // r14
  __int64 i; // rbp
  __int64 result; // rax
  int v9; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+4h] [rbp-34h]

  v10 = HIDWORD(v2);
  v3 = a1;
  v9 = a2;
  v4 = (char *)malloc(8LL * a1);
  if ( !v4 )
    return 0xFFFFFFFFLL;
  v5 = v4;
  shared_counter = 0;
  if ( a1 > 0 )
  {
    v10 = a1;
    v6 = 0;
    do
    {
      if ( pthread_create((pthread_t *)&v5[v6], 0, (void *(*)(void *))thread_increment, &v9) )
      {
        free(v5);
        return 4294967294LL;
      }
      v6 += 8;
    }
    while ( 8LL * (unsigned int)a1 != v6 );
    v3 = v10;
    if ( v10 > 0 )
    {
      for ( i = 0; i != a1; pthread_join(*(_QWORD *)&v5[8 * i++], 0) )
        ;
    }
  }
  free(v5);
  result = 4294967293LL;
  if ( shared_counter == v9 * v3 )
    return 42;
  return result;
}


/* Function: call_mutex_lock @ 0x3750 */
__int64 call_mutex_lock()
{
  return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x3760 */
_DWORD *__fastcall consumer_thread(void *a1)
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


/* Function: producer_thread @ 0x37E0 */
void *__fastcall producer_thread(void *a1)
{
  sleep(1u);
  pthread_mutex_lock(&cond_mutex);
  data = 1;
  ready = 1;
  pthread_cond_signal(&cond);
  pthread_mutex_unlock(&cond_mutex);
  return 0;
}


/* Function: param_condition_variable @ 0x3820 */
__int64 param_condition_variable()
{
  unsigned int v1; // ebx
  pthread_t newthread; // [rsp+8h] [rbp-20h] BYREF
  void *thread_return; // [rsp+10h] [rbp-18h] BYREF
  pthread_t th[2]; // [rsp+18h] [rbp-10h] BYREF

  ready = 0;
  data = 0;
  if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
    return 0xFFFFFFFFLL;
  if ( pthread_create(th, 0, producer_thread, 0) )
  {
    pthread_cancel(newthread);
    return 4294967294LL;
  }
  else
  {
    pthread_join(newthread, &thread_return);
    pthread_join(th[0], 0);
    v1 = *(_DWORD *)thread_return;
    free(thread_return);
    return v1;
  }
}


/* Function: call_condition_variable @ 0x38C0 */
// attributes: thunk
__int64 call_condition_variable()
{
  return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x38D0 */
void *__fastcall thread_atomic_increment(int *a1)
{
  int v1; // esi
  int v2; // edx
  signed __int32 v3; // ecx
  unsigned int v4; // esi

  v1 = *a1;
  if ( *a1 > 0 )
  {
    v2 = *a1 & 3;
    v3 = 0;
    if ( (unsigned int)(v1 - 1) >= 3 )
    {
      v4 = v1 & 0xFFFFFFFC;
      v3 = 0;
      do
      {
        _InterlockedAdd(&atomic_counter, 1u);
        _InterlockedCompareExchange(&atomic_counter, v3 + 1000, v3);
        _InterlockedAdd(&atomic_counter, 1u);
        _InterlockedCompareExchange(&atomic_counter, v3 + 1001, v3 + 1);
        _InterlockedAdd(&atomic_counter, 1u);
        _InterlockedCompareExchange(&atomic_counter, v3 + 1002, v3 + 2);
        _InterlockedAdd(&atomic_counter, 1u);
        _InterlockedCompareExchange(&atomic_counter, v3 + 1003, v3 + 3);
        v3 += 4;
      }
      while ( v3 != v4 );
    }
    for ( ; v2; --v2 )
    {
      _InterlockedAdd(&atomic_counter, 1u);
      _InterlockedCompareExchange(&atomic_counter, v3 + 1000, v3);
      ++v3;
    }
  }
  return 0;
}


/* Function: thread_atomic_load_store @ 0x3990 */
void *__fastcall thread_atomic_load_store(void *a1)
{
  _InterlockedExchange(&atomic_counter, atomic_counter + 100);
  return 0;
}


/* Function: param_atomic_ops @ 0x39B0 */
__int64 __fastcall param_atomic_ops(int a1, int a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // r14
  __int64 i; // rbp
  int v6; // ebp
  __int64 result; // rax
  int arg; // [rsp+Ch] [rbp-3Ch] BYREF
  pthread_t newthread[7]; // [rsp+10h] [rbp-38h] BYREF

  arg = a2;
  v2 = malloc(8LL * a1);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = v2;
  _InterlockedExchange(&atomic_counter, 0);
  if ( a1 <= 0 )
  {
LABEL_6:
    if ( !pthread_create(newthread, 0, thread_atomic_load_store, 0) )
      pthread_join(newthread[0], 0);
    if ( a1 > 0 )
    {
      for ( i = 0; i != a1; pthread_join(v3[i++], 0) )
        ;
    }
    v6 = atomic_counter;
    free(v3);
    result = 4294967293LL;
    if ( v6 > 0 )
      return 42;
  }
  else
  {
    v4 = 0;
    while ( !pthread_create(&v3[v4], 0, (void *(*)(void *))thread_atomic_increment, &arg) )
    {
      if ( a1 == ++v4 )
        goto LABEL_6;
    }
    free(v3);
    return 4294967294LL;
  }
  return result;
}


/* Function: call_atomic_ops @ 0x3AC0 */
__int64 call_atomic_ops()
{
  return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x3AD0 */
_DWORD *__fastcall thread_tls_test(const char *a1)
{
  unsigned int v1; // ebx
  _DWORD *result; // rax

  v1 = __readfsdword(0xFFFFFFD0);
  __writefsdword(0xFFFFFFD0, v1 + 50);
  strncpy((char *)(__readfsqword(0) - 32), a1, 0x1Fu);
  result = malloc(8u);
  *result = v1;
  result[1] = v1 + 50;
  return result;
}


/* Function: param_thread_local_storage @ 0x3B20 */
__int64 __fastcall param_thread_local_storage(int a1)
{
  void *v1; // r14
  void *v2; // r13
  __int64 result; // rax
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

  v1 = malloc(8LL * a1);
  v2 = malloc(8LL * a1);
  result = 0xFFFFFFFFLL;
  if ( v1 && v2 )
  {
    if ( a1 <= 0 )
    {
      v12 = a1;
      v10 = 0;
      v9 = 0;
LABEL_13:
      free(v2);
      free(v1);
      result = 4294967293LL;
      if ( !(v10 ^ (100 * v12) | v9 ^ (150 * v12)) )
        return 42;
    }
    else
    {
      for ( i = 0; i != a1; snprintf(v5, 0x10u, "Thread-%d", i++) )
      {
        v5 = (char *)malloc(0x10u);
        *((_QWORD *)v2 + i) = v5;
      }
      v6 = (pthread_t *)v1;
      v7 = 0;
      ptr = v6;
      while ( !pthread_create(v6, 0, (void *(*)(void *))thread_tls_test, *((void **)v2 + v7)) )
      {
        ++v7;
        ++v6;
        if ( a1 == v7 )
        {
          v12 = a1;
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
          while ( a1 != v8 );
          goto LABEL_13;
        }
      }
      v11 = -1;
      do
        free(*((void **)v2 + ++v11));
      while ( v7 != v11 );
      free(v2);
      free(ptr);
      return 4294967294LL;
    }
  }
  return result;
}


/* Function: call_thread_local_storage @ 0x3CE0 */
__int64 call_thread_local_storage()
{
  return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3CF0 */
int test_thread_concurrency()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  int arg; // [rsp+Ch] [rbp-1Ch] BYREF
  void *thread_return; // [rsp+10h] [rbp-18h] BYREF
  pthread_t newthread[2]; // [rsp+18h] [rbp-10h] BYREF

  puts(asc_445E);
  arg = 7;
  v0 = -1;
  if ( !pthread_create(newthread, 0, (void *(*)(void *))thread_compute, &arg) )
  {
    pthread_join(newthread[0], &thread_return);
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
  return printf(aThrL306D, v5);
}


/* Function: main @ 0x3DE0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}


/* Function: .term_proc @ 0x3DF4 */
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

/* FAILED to decompile: stat @ 0x73C8 */

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
