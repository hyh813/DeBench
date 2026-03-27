/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/6/6_gcc_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00011000 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00011790 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000117bc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000117c0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000117d0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000117eb) */
/* WARNING: Removing unreachable block (ram,0x000117f5) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011810 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001183e) */
/* WARNING: Removing unreachable block (ram,0x00011848) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011860 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000118bc) */
/* WARNING: Removing unreachable block (ram,0x000118c0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 000118f9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 000118fd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: signal_handler @ 00011901 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void signal_handler(int sig)

{
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: thread_sum @ 00011924 */

void * thread_sum(void *arg)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)arg + 8) = 0;
                    /* Unresolved local var: int i@[???] */
  iVar1 = *(int *)arg;
  if (iVar1 <= *(int *)((int)arg + 4)) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != *(int *)((int)arg + 4) + 1);
    *(int *)((int)arg + 8) = iVar2;
  }
  return (void *)0x0;
}



/* Function: thread_compute @ 00011958 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void * thread_compute(void *arg)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)arg;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}



/* Function: thread_increment @ 00011984 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void * thread_increment(void *arg)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)arg;
                    /* Unresolved local var: int i@[???] */
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
      shared_counter = shared_counter + 1;
      pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
      usleep(1000);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return (void *)0x0;
}



/* Function: consumer_thread @ 000119f2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void * consumer_thread(void *arg)

{
  int iVar1;
  int *piVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
  iVar1 = data;
  while (data = iVar1, ready == 0) {
    pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
    iVar1 = data;
  }
  pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
  piVar2 = malloc(4);
  *piVar2 = iVar1;
  return piVar2;
}



/* Function: producer_thread @ 00011a6b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void * producer_thread(void *arg)

{
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
  data = 0x2a;
  ready = 1;
  pthread_cond_signal((pthread_cond_t *)&cond);
  pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
  return (void *)0x0;
}



/* Function: thread_atomic_increment @ 00011ac9 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* WARNING: Unknown calling convention */

void * thread_atomic_increment(void *arg)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < *(int *)arg) {
    iVar2 = 0;
    do {
                    /* Unresolved local var: int expected@[???]
                       Unresolved local var: int desired@[???] */
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
    } while (*(int *)arg != iVar2);
  }
  return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00011b10 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void * thread_atomic_load_store(void *arg)

{
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return (void *)0x0;
}



/* Function: thread_tls_test @ 00011b34 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void * thread_tls_test(void *arg)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_GS_OFFSET;
  
  iVar2 = in_GS_OFFSET[-9];
  iVar1 = iVar2 + 0x32;
  in_GS_OFFSET[-9] = iVar1;
  strncpy((char *)(*in_GS_OFFSET + -0x20),arg,0x1f);
  piVar3 = malloc(8);
  *piVar3 = iVar2;
  piVar3[1] = iVar1;
  return piVar3;
}



/* Function: param_strcpy @ 00011b8b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_strcpy(char *dst,char *src)

{
  size_t sVar1;
  
  strcpy(dst,src);
  sVar1 = strlen(dst);
  return sVar1;
}



/* Function: call_strcpy @ 00011bbb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  char buffer [32];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = param_strcpy(buffer,"HelloLib");
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_strcmp @ 00011c03 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_strcmp(char *s1,char *s2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strcmp(s1,s2);
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = iVar1 >> 0x1f;
  }
  return iVar2;
}



/* Function: call_strcmp @ 00011c33 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_strcmp("abc","def");
  iVar2 = param_strcmp("xyz","xyz");
  iVar3 = param_strcmp("bbb","aaa");
  return iVar3 + iVar1 + iVar2;
}



/* Function: param_strlen @ 00011c90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_strlen(char *str)

{
  size_t sVar1;
  
  sVar1 = strlen(str);
  return sVar1;
}



/* Function: call_strlen @ 00011cb1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
  return 0xc;
}



/* Function: param_memcpy @ 00011cbb */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_memcpy(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return n;
}



/* Function: call_memcpy @ 00011ce9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
  int iVar1;
  int in_GS_OFFSET;
  int src [5];
  int dst [5];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  src[0] = 10;
  src[1] = 0x14;
  src[2] = 0x1e;
  src[3] = 0x28;
  src[4] = 0x32;
  dst[0] = 0;
  dst[1] = 0;
  dst[2] = 0;
  dst[3] = 0;
  dst[4] = 0;
  param_memcpy(dst,src,0x14);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return dst[2] + dst[0] + dst[4];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_memcmp @ 00011d82 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
  iVar1 = memcmp(p1,p2,n);
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = iVar1 >> 0x1f;
  }
  return iVar2;
}



/* Function: call_memcmp @ 00011db6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  int arr1 [3];
  int arr2 [3];
  int arr3 [3];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr2[0] = 1;
  arr2[1] = 2;
  arr2[2] = 4;
  arr3[0] = 1;
  arr3[1] = 2;
  arr3[2] = 3;
  iVar2 = param_memcmp(arr1,arr2,0xc);
  iVar3 = param_memcmp(arr1,arr3,0xc);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar3 + iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_printf @ 00011e53 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_printf(int x,char *name)

{
  int iVar1;
  
  iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
  return iVar1;
}



/* Function: call_printf @ 00011e81 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  
  iVar1 = param_printf(0x2a,"Test");
  return iVar1;
}



/* Function: param_scanf @ 00011ea4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_scanf(char *input_str)

{
  int iVar1;
  int in_GS_OFFSET;
  int a;
  int b;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
  if (iVar1 == 2) {
    iVar1 = b + a;
  }
  else {
    iVar1 = -1;
  }
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_scanf @ 00011f0b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  
  iVar1 = param_scanf("123,456");
  return iVar1;
}



/* Function: param_fopen_fclose @ 00011f2c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_fopen_fclose(char *filename)

{
  FILE *__stream;
  int iVar1;
  
  __stream = fopen(filename,"r");
  if (__stream == (FILE *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = fileno(__stream);
    fclose(__stream);
  }
  return iVar1;
}



/* Function: call_fopen_fclose @ 00011f7d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
  int iVar1;
  
  iVar1 = param_fopen_fclose("/etc/passwd");
  return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_fread_fwrite @ 00011fa4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_fread_fwrite(char *tmpfile)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  int iVar3;
  int in_GS_OFFSET;
  char read_buffer [32];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  __s = fopen(tmpfile,"w+");
  if (__s == (FILE *)0x0) {
    iVar3 = -1;
  }
  else {
    sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar2 == 0x12) {
      rewind(__s);
                    /* Unresolved local var: size_t sz@[???] */
      sVar2 = fread(read_buffer,1,0x12,__s);
      read_buffer[sVar2] = '\0';
      fclose(__s);
      unlink(tmpfile);
      if (sVar2 == 0x12) {
        iVar3 = strcmp(read_buffer,"BinBench Test Data");
        iVar3 = (-(uint)(iVar3 == 0) & 0x2d) - 3;
      }
      else {
        iVar3 = -3;
      }
    }
    else {
      fclose(__s);
      iVar3 = -2;
    }
  }
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_fread_fwrite @ 00012092 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 000120b3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_malloc_free(size_t size)

{
  int *__ptr;
  int iVar1;
  int *piVar2;
  
  __ptr = malloc(size * 4);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: size_t i@[???] */
    if (size != 0) {
      iVar1 = 0;
      piVar2 = __ptr;
      do {
        *piVar2 = iVar1;
        iVar1 = iVar1 + 10;
        piVar2 = piVar2 + 1;
      } while (iVar1 != size * 10);
    }
    iVar1 = *__ptr + __ptr[size - 1];
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 00012123 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  int iVar1;
  
  iVar1 = param_malloc_free(10);
  return iVar1;
}



/* Function: param_memset @ 00012135 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_memset(void *buffer,size_t size)

{
  byte *pbVar1;
  int iVar2;
  
  memset(buffer,0,size);
                    /* Unresolved local var: size_t i@[???] */
  if (size == 0) {
    iVar2 = 0;
  }
  else {
    pbVar1 = (byte *)((int)buffer + size);
    iVar2 = 0;
    do {
      iVar2 = iVar2 + (uint)*(byte *)buffer;
      buffer = (void *)((int)buffer + 1);
    } while (buffer != pbVar1);
  }
  return iVar2;
}



/* Function: call_memset @ 00012185 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
  int *piVar1;
  int in_GS_OFFSET;
  int buffer [10];
  int local_10 [4];
  
  local_10[0] = *(int *)(in_GS_OFFSET + 0x14);
                    /* Unresolved local var: int i@[???] */
  piVar1 = buffer;
  do {
    *piVar1 = 0xff;
    piVar1 = piVar1 + 1;
  } while (piVar1 != local_10);
  param_memset(buffer,0x28);
  if (local_10[0] == *(int *)(in_GS_OFFSET + 0x14)) {
    return buffer[9] + buffer[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_strchr_strstr @ 000121dd */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_strchr_strstr(char *str,char ch,char *substr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = strchr(str,(int)ch);
  iVar3 = (int)pcVar1 - (int)str;
  if (pcVar1 == (char *)0x0) {
    iVar3 = -1;
  }
  pcVar1 = strstr(str,substr);
  iVar2 = -1;
  if (pcVar1 != (char *)0x0) {
    iVar2 = (int)pcVar1 - (int)str;
  }
  return iVar2 + iVar3;
}



/* Function: call_strchr_strstr @ 00012234 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
  int iVar1;
  
  iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
  return iVar1;
}



/* Function: test_standard_library_functions @ 0001225e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
  int iVar1;
  
  puts(&DAT_000143c4);
  iVar1 = call_strcpy();
  __printf_chk(1,&DAT_0001409d,iVar1);
  iVar1 = call_strcmp();
  __printf_chk(1,&DAT_000140b8,iVar1);
  iVar1 = call_strlen();
  __printf_chk(1,&DAT_000140d3,iVar1);
  iVar1 = call_memcpy();
  __printf_chk(1,&DAT_000140ef,iVar1);
  iVar1 = call_memcmp();
  __printf_chk(1,&DAT_0001410b,iVar1);
  iVar1 = call_printf();
  __printf_chk(1,&DAT_00014127,iVar1);
  iVar1 = call_scanf();
  __printf_chk(1,&DAT_00014143,iVar1);
  iVar1 = call_fopen_fclose();
  __printf_chk(1,&DAT_00014160,iVar1);
  iVar1 = call_fread_fwrite();
  __printf_chk(1,&DAT_0001417c,iVar1);
  iVar1 = call_malloc_free();
  __printf_chk(1,&DAT_00014198,iVar1);
  iVar1 = call_memset();
  __printf_chk(1,&DAT_000141b4,iVar1);
  iVar1 = call_strchr_strstr();
  __printf_chk(1,&DAT_000141cf,iVar1);
  return;
}



/* Function: param_linux_syscall @ 00012396 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_linux_syscall(char *pathname)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  lVar1 = syscall(5,pathname,0);
  if (lVar1 < 0) {
    piVar2 = __errno_location();
    lVar1 = -*piVar2;
  }
  else {
    syscall(6,lVar1,uVar3);
  }
  return lVar1;
}



/* Function: call_linux_syscall @ 000123e1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
  int iVar1;
  
  iVar1 = param_linux_syscall("/etc/passwd");
  return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 00012408 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_win32_api(char *filename)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  stat st;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = stat(filename,(stat *)&st);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0x2a;
    if (st.st_size < 1) {
      iVar2 = -2;
    }
  }
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_win32_api @ 0001246c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  int iVar1;
  
  iVar1 = param_win32_api("/etc/passwd");
  return iVar1;
}



/* Function: param_fork_exec @ 0001248d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_fork_exec(char *prog,char *arg)

{
  __pid_t _Var1;
  uint uVar2;
  int in_GS_OFFSET;
  int status;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  _Var1 = fork();
  if (_Var1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (_Var1 == 0) {
      execl(prog,prog,arg,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
                    /* Unresolved local var: pid_t wpid@[???] */
    _Var1 = waitpid(_Var1,&status,0);
    uVar2 = 0xfffffffe;
    if ((-1 < _Var1) && (uVar2 = (uint)status >> 8 & 0xff, (status & 0x7fU) != 0)) {
      uVar2 = 0xfffffffd;
    }
  }
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_fork_exec @ 00012527 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
  int iVar1;
  
  iVar1 = param_fork_exec("/bin/true",(char *)0x0);
  return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}



/* Function: param_pipe_communication @ 00012555 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
  int iVar1;
  int iVar2;
  __pid_t _Var3;
  ssize_t sVar4;
  int in_GS_OFFSET;
  int pipefd [2];
  char buffer [32];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = pipe(pipefd);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else {
    _Var3 = fork();
    if (_Var3 < 0) {
      iVar2 = -2;
    }
    else {
      if (_Var3 == 0) {
                    /* Unresolved local var: char * msg@[???] */
        close(pipefd[0]);
        write(pipefd[1],"HelloPipe",9);
        close(pipefd[1]);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
                    /* Unresolved local var: ssize_t bytes@[???] */
      close(pipefd[1]);
      sVar4 = read(pipefd[0],buffer,0x1f);
      buffer[sVar4] = '\0';
      close(pipefd[0]);
      wait((void *)0x0);
      iVar2 = 0x2a;
      if (sVar4 < 1) {
        iVar2 = -3;
      }
    }
  }
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_pipe_communication @ 00012648 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  
  iVar1 = param_pipe_communication();
  return iVar1;
}



/* Function: param_socket_create @ 00012658 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  int opt;
  sockaddr_in addr;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = socket(2,1,0);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else {
    opt = 1;
    iVar3 = setsockopt(iVar2,1,2,&opt,4);
    if (iVar3 < 0) {
      close(iVar2);
      iVar2 = -2;
    }
    else {
      addr.sin_addr.s_addr = 0;
      addr.sin_zero[0] = '\0';
      addr.sin_zero[1] = '\0';
      addr.sin_zero[2] = '\0';
      addr.sin_zero[3] = '\0';
      addr.sin_zero[4] = '\0';
      addr.sin_zero[5] = '\0';
      addr.sin_zero[6] = '\0';
      addr.sin_zero[7] = '\0';
      addr.sin_family = 2;
      addr.sin_port = 0;
      iVar3 = bind(iVar2,(sockaddr *)&addr,0x10);
      if (iVar3 < 0) {
        close(iVar2);
        iVar2 = -3;
      }
      else {
        iVar3 = listen(iVar2,5);
        if (iVar3 < 0) {
          close(iVar2);
          iVar2 = -4;
        }
        else {
          close(iVar2);
          iVar2 = 0x2a;
        }
      }
    }
  }
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_socket_create @ 0001276c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  
  iVar1 = param_socket_create();
  return iVar1;
}



/* Function: param_shmget_shmat @ 0001277c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__s;
  size_t sVar2;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (iVar1 < 0) {
    sVar2 = 0xffffffff;
  }
  else {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (__key < 0) {
      sVar2 = 0xffffffff;
    }
    else {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        sVar2 = 0xfffffffe;
      }
      else {
        __s = shmat(iVar1,(void *)0x0,0);
        if (__s == (char *)0xffffffff) {
          sVar2 = 0xfffffffd;
        }
        else {
          builtin_strncpy(__s,"SharedMemory",0xd);
          sVar2 = strlen(__s);
          shmdt(__s);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return sVar2;
}



/* Function: call_shmget_shmat @ 00012865 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_shmget_shmat();
  iVar2 = 0x2a;
  if (iVar1 < 1) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: param_signal_handling @ 00012884 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
  __sighandler_t p_Var1;
  int iVar2;
  
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    iVar2 = -1;
  }
  else {
    p_Var1 = signal(0xe,signal_handler);
    if (p_Var1 == (__sighandler_t)0xffffffff) {
      iVar2 = -2;
    }
    else {
      signal_received = 0;
      raise(10);
      if (signal_received == 0) {
        iVar2 = 1000;
        do {
          usleep(1000);
          if (signal_received != 0) break;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (signal_received == 0) {
        iVar2 = -3;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        if (signal_received == 0) {
          iVar2 = 2000;
          do {
            usleep(1000);
            if (signal_received != 0) break;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        if (signal_received == 0) {
          iVar2 = -5;
        }
        else if (signal_number == 0xe) {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          iVar2 = 0x2a;
        }
        else {
          iVar2 = -5;
        }
      }
      else {
        iVar2 = -4;
      }
    }
  }
  return iVar2;
}



/* Function: call_signal_handling @ 000129db */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  int iVar1;
  
  iVar1 = param_signal_handling();
  return iVar1;
}



/* Function: test_system_calls @ 000129eb */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
  int iVar1;
  
  puts(&DAT_00014211);
  iVar1 = call_linux_syscall();
  __printf_chk(1,&DAT_0001422c,iVar1);
  iVar1 = call_win32_api();
  __printf_chk(1,&DAT_00014248,iVar1);
  iVar1 = call_fork_exec();
  __printf_chk(1,&DAT_00014264,iVar1);
  iVar1 = param_pipe_communication();
  __printf_chk(1,&DAT_00014280,iVar1);
  iVar1 = param_socket_create();
  __printf_chk(1,&DAT_0001429c,iVar1);
  iVar1 = call_shmget_shmat();
  __printf_chk(1,&DAT_000142b8,iVar1);
  iVar1 = param_signal_handling();
  __printf_chk(1,&DAT_000142d4,iVar1);
  return;
}



/* Function: param_pthread_create @ 00012ab0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_pthread_create(int x)

{
  int iVar1;
  int in_GS_OFFSET;
  pthread_t tid;
  int input;
  void *thread_ret;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  input = x;
  iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
  if (iVar1 == 0) {
    pthread_join(tid,&thread_ret);
    iVar1 = *(int *)thread_ret;
    free(thread_ret);
  }
  else {
    iVar1 = -1;
  }
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_pthread_create @ 00012b3a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  
  iVar1 = param_pthread_create(7);
  return iVar1;
}



/* Function: param_pthread_join @ 00012b4c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  ThreadData *pTVar3;
  pthread_t *__newthread;
  ThreadData *__arg;
  pthread_t *ppVar4;
  int in_GS_OFFSET;
  pthread_t tids [3];
  ThreadData data [3];
  ThreadData local_20;
  
  local_20.start = *(int *)(in_GS_OFFSET + 0x14);
  data[0].start = 1;
  data[0].end = 10;
  data[0].result = 0;
  data[1].start = 0xb;
  data[1].end = 0x14;
  data[1].result = 0;
  data[2].start = 0x15;
  data[2].end = 0x1e;
  data[2].result = 0;
                    /* Unresolved local var: int i@[???] */
  ppVar4 = tids;
  pTVar3 = data;
  __newthread = ppVar4;
  __arg = pTVar3;
  do {
    iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
    if (iVar1 != 0) {
      iVar1 = -1;
      goto LAB_00012c1e;
    }
    __newthread = __newthread + 1;
    __arg = __arg + 1;
  } while (__arg != &local_20);
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    iVar2 = pthread_join(*ppVar4,(void **)0x0);
    if (iVar2 != 0) {
      iVar1 = -2;
      break;
    }
    iVar1 = iVar1 + pTVar3->result;
    ppVar4 = ppVar4 + 1;
    pTVar3 = pTVar3 + 1;
  } while (pTVar3 != &local_20);
LAB_00012c1e:
  if (local_20.start == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_pthread_join @ 00012c48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  
  iVar1 = param_pthread_join();
  return iVar1;
}



/* Function: param_mutex_lock @ 00012c58 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  pthread_t *__ptr;
  int iVar1;
  int iVar2;
  pthread_t *__newthread;
  bool bVar3;
  
  __ptr = malloc(thread_count << 2);
  if (__ptr == (pthread_t *)0x0) {
    iVar1 = -1;
  }
  else {
    shared_counter = 0;
                    /* Unresolved local var: int i@[???] */
    if (0 < thread_count) {
      iVar1 = 0;
      __newthread = __ptr;
      do {
        iVar2 = iVar1;
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,
                               &iterations_per_thread);
        if (iVar1 != 0) {
          free(__ptr);
          return -2;
        }
        iVar1 = iVar2 + 1;
        __newthread = __newthread + 1;
      } while (thread_count != iVar1);
      iVar1 = 0;
      do {
                    /* Unresolved local var: int i@[???] */
        pthread_join(__ptr[iVar1],(void **)0x0);
        bVar3 = iVar2 != iVar1;
        iVar1 = iVar1 + 1;
      } while (bVar3);
    }
    free(__ptr);
    iVar1 = 0x2a;
    if (shared_counter != thread_count * iterations_per_thread) {
      iVar1 = -3;
    }
  }
  return iVar1;
}



/* Function: call_mutex_lock @ 00012d49 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = param_mutex_lock(4,1000);
  return iVar1;
}



/* Function: param_condition_variable @ 00012d60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
  int iVar1;
  int in_GS_OFFSET;
  pthread_t producer;
  pthread_t consumer;
  void *consumer_ret;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&consumer,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&producer,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(consumer,&consumer_ret);
      pthread_join(producer,(void **)0x0);
      iVar1 = *(int *)consumer_ret;
      free(consumer_ret);
    }
    else {
      pthread_cancel(consumer);
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_condition_variable @ 00012e33 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  
  iVar1 = param_condition_variable();
  return iVar1;
}



/* Function: param_atomic_ops @ 00012e43 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_atomic_ops(int thread_count,int iterations)

{
  atomic_int aVar1;
  pthread_t *__ptr;
  int iVar2;
  int iVar3;
  pthread_t *__newthread;
  int in_GS_OFFSET;
  pthread_t load_store_tid;
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  __ptr = malloc(thread_count << 2);
  if (__ptr == (pthread_t *)0x0) {
    iVar3 = -1;
  }
  else {
    LOCK();
    atomic_counter = 0;
    UNLOCK();
                    /* Unresolved local var: int i@[???] */
    if (thread_count < 1) {
      iVar3 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                             (void *)0x0);
      if (iVar3 == 0) {
        pthread_join(load_store_tid,(void **)0x0);
      }
    }
    else {
      iVar3 = 0;
      __newthread = __ptr;
      do {
        iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,&iterations
                              );
        if (iVar2 != 0) {
          free(__ptr);
          iVar3 = -2;
          goto LAB_00012f35;
        }
        iVar3 = iVar3 + 1;
        __newthread = __newthread + 1;
      } while (thread_count != iVar3);
      iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                             (void *)0x0);
      iVar3 = 0;
      if (iVar2 == 0) {
        pthread_join(load_store_tid,(void **)0x0);
      }
      do {
                    /* Unresolved local var: int i@[???] */
        pthread_join(__ptr[iVar3],(void **)0x0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < thread_count);
    }
    aVar1 = atomic_counter;
    free(__ptr);
    iVar3 = 0x2a;
    if (aVar1 < 1) {
      iVar3 = -3;
    }
  }
LAB_00012f35:
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}



/* Function: call_atomic_ops @ 00012fbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  
  iVar1 = param_atomic_ops(4,500);
  return iVar1;
}



/* Function: param_thread_local_storage @ 00012fd3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_thread_local_storage(int thread_count)

{
  pthread_t *__ptr;
  undefined4 *__ptr_00;
  void *pvVar1;
  int iVar2;
  pthread_t *__newthread;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_GS_OFFSET;
  bool bVar7;
  void *ret;
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  __ptr = malloc(thread_count * 4);
  __ptr_00 = malloc(thread_count * 4);
  if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined4 *)0x0)) {
    iVar3 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (thread_count < 1) {
      iVar2 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      do {
        iVar4 = iVar3;
        pvVar1 = malloc(0x10);
        __ptr_00[iVar4] = pvVar1;
        __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar4);
        iVar3 = iVar4 + 1;
      } while (thread_count != iVar4 + 1);
      __newthread = __ptr;
      iVar3 = 0;
                    /* Unresolved local var: int i@[???] */
      do {
        iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
                               (void *)__ptr_00[iVar3]);
        if (iVar2 != 0) {
                    /* Unresolved local var: int j@[???] */
          if (-1 < iVar3) {
            puVar6 = __ptr_00;
            do {
              free((void *)*puVar6);
              puVar6 = puVar6 + 1;
            } while (puVar6 != __ptr_00 + iVar3 + 1);
          }
          free(__ptr_00);
          free(__ptr);
          iVar3 = -2;
          goto LAB_00013143;
        }
        __newthread = __newthread + 1;
        bVar7 = iVar4 != iVar3;
        iVar3 = iVar3 + 1;
      } while (bVar7);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int * values@[???] */
      iVar3 = 0;
      iVar2 = 0;
      iVar5 = 0;
      do {
        pthread_join(__ptr[iVar5],&ret);
        iVar3 = iVar3 + *(int *)ret;
        iVar2 = iVar2 + *(int *)((int)ret + 4);
        free(ret);
        free((void *)__ptr_00[iVar5]);
        bVar7 = iVar4 != iVar5;
        iVar5 = iVar5 + 1;
      } while (bVar7);
    }
    free(__ptr_00);
    free(__ptr);
    if ((thread_count * 100 - iVar3 == 0) && (thread_count * 0x96 - iVar2 == 0)) {
      iVar3 = 0x2a;
    }
    else {
      iVar3 = -3;
    }
  }
LAB_00013143:
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}



/* Function: call_thread_local_storage @ 000131bb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  
  iVar1 = param_thread_local_storage(4);
  return iVar1;
}



/* Function: test_thread_concurrency @ 000131cd */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
  int iVar1;
  
  puts(&DAT_000142fa);
  iVar1 = call_pthread_create();
  __printf_chk(1,&DAT_00014318,iVar1);
  iVar1 = param_pthread_join();
  __printf_chk(1,&DAT_00014334,iVar1);
  iVar1 = call_mutex_lock();
  __printf_chk(1,&DAT_00014351,iVar1);
  iVar1 = param_condition_variable();
  __printf_chk(1,&DAT_0001436d,iVar1);
  iVar1 = call_atomic_ops();
  __printf_chk(1,&DAT_00014389,iVar1);
  iVar1 = call_thread_local_storage();
  __printf_chk(1,&DAT_000143a5,iVar1);
  return;
}



/* Function: main @ 0001327b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 0001329b */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 0001329f */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.si @ 000132a3 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
  return;
}



/* Function: __stack_chk_fail_local @ 000132b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 000132d0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000132ea) */
/* WARNING: Removing unreachable block (ram,0x00013300) */
/* WARNING: Removing unreachable block (ram,0x0001330d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001331c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 79 */
