/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/6/6_gcc_O2_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010c9c */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: main @ 00010f90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: _start @ 00010fa8 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010fec */

/* WARNING: Removing unreachable block (ram,0x00011000) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00011010 */

/* WARNING: Removing unreachable block (ram,0x00011020) */
/* WARNING: Removing unreachable block (ram,0x00011028) */
/* WARNING: Removing unreachable block (ram,0x0001102c) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 0001103c */

/* WARNING: Removing unreachable block (ram,0x00011058) */
/* WARNING: Removing unreachable block (ram,0x00011060) */
/* WARNING: Removing unreachable block (ram,0x00011064) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011074 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: signal_handler @ 000110a0 */

void signal_handler(int sig)

{
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: thread_sum @ 000110b8 */

void * thread_sum(void *arg)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: ThreadData * data@[???] */
  iVar1 = 0;
                    /* Unresolved local var: int i@[???] */
  iVar2 = *(int *)arg;
  *(undefined4 *)((int)arg + 8) = 0;
  if (iVar2 <= *(int *)((int)arg + 4)) {
    do {
      iVar1 = iVar1 + iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int *)((int)arg + 4) + 1);
    *(int *)((int)arg + 8) = iVar1;
  }
  return (void *)0x0;
}



/* Function: thread_compute @ 000110f0 */

void * thread_compute(void *arg)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int * input@[???]
                       Unresolved local var: int value@[???]
                       Unresolved local var: int result@[???]
                       Unresolved local var: int * ret@[???] */
  iVar2 = *(int *)arg;
  piVar1 = malloc(4);
  *piVar1 = iVar2 * iVar2;
  return piVar1;
}



/* Function: thread_increment @ 00011118 */

void * thread_increment(void *arg)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int iterations@[???] */
  iVar2 = *(int *)arg;
                    /* Unresolved local var: int i@[???] */
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
      shared_counter = shared_counter + 1;
      iVar1 = iVar1 + 1;
      pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
      usleep(1000);
    } while (iVar2 != iVar1);
  }
  return (void *)0x0;
}



/* Function: consumer_thread @ 00011170 */

void * consumer_thread(void *arg)

{
  int iVar1;
  int *piVar2;
  
                    /* Unresolved local var: int received@[???]
                       Unresolved local var: int * ret@[???] */
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



/* Function: producer_thread @ 000111d0 */

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



/* Function: thread_atomic_increment @ 00011218 */

/* WARNING: Removing unreachable block (ram,0x0001129c) */

void * thread_atomic_increment(void *arg)

{
  int iVar1;
  int iVar2;
  int expected;
  
                    /* Unresolved local var: int iterations@[???] */
  iVar2 = *(int *)arg;
                    /* Unresolved local var: int i@[???] */
  if (0 < iVar2) {
    iVar1 = 0;
                    /* Unresolved local var: int desired@[???] */
    do {
      __sync_fetch_and_add_4(&atomic_counter,1);
      __sync_val_compare_and_swap_4(&atomic_counter,iVar1,iVar1 + 1000);
      iVar1 = iVar1 + 1;
    } while (iVar2 != iVar1);
  }
  return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 000112a8 */

void * thread_atomic_load_store(void *arg)

{
  atomic_int aVar1;
  
                    /* Unresolved local var: int value@[???] */
  __sync_synchronize();
  aVar1 = atomic_counter;
  __sync_synchronize();
  __sync_synchronize();
  atomic_counter = aVar1 + 100;
  __sync_synchronize();
  return (void *)0x0;
}



/* Function: thread_tls_test @ 000112d8 */

void * thread_tls_test(void *arg)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
                    /* Unresolved local var: char * name@[???]
                       Unresolved local var: int initial@[???]
                       Unresolved local var: int * ret@[???] */
  uVar5 = __aeabi_read_tp(arg,arg);
  iVar1 = (int)uVar5;
  iVar4 = *(int *)(iVar1 + 8);
  iVar3 = iVar4 + 0x32;
  *(int *)(iVar1 + 8) = iVar3;
  strncpy((char *)(iVar1 + 0xc),(char *)((ulonglong)uVar5 >> 0x20),0x1f);
  piVar2 = malloc(8);
  *piVar2 = iVar4;
  piVar2[1] = iVar3;
  return piVar2;
}



/* Function: param_strcpy @ 00011324 */

int param_strcpy(char *dst,char *src)

{
  char *pcVar1;
  
  pcVar1 = stpcpy(dst,src);
  return (int)pcVar1 - (int)dst;
}



/* Function: call_strcpy @ 00011338 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
                    /* Unresolved local var: char[32] buffer@[???]
                       Unresolved local var: int len@[???] */
  return 8;
}



/* Function: param_strcmp @ 00011340 */

int param_strcmp(char *s1,char *s2)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = strcmp(s1,s2);
  if (iVar1 < 1) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = -1;
    }
    return iVar1;
  }
  return 1;
}



/* Function: call_strcmp @ 00011364 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
  return 0;
}



/* Function: param_strlen @ 0001136c */

int param_strlen(char *str)

{
  size_t sVar1;
  
  sVar1 = strlen(str);
  return sVar1;
                    /* Unresolved local var: size_t len@[???] */
}



/* Function: call_strlen @ 00011370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
                    /* Unresolved local var: char * test@[???] */
  return 0xc;
}



/* Function: param_memcpy @ 00011378 */

int param_memcpy(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return n;
}



/* Function: call_memcpy @ 0001138c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
                    /* Unresolved local var: int[5] src@[???]
                       Unresolved local var: int[5] dst@[???] */
  return 0x5a;
}



/* Function: param_memcmp @ 00011394 */

int param_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = memcmp(p1,p2,n);
  if (iVar1 < 1) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = -1;
    }
    return iVar1;
  }
  return 1;
}



/* Function: call_memcmp @ 000113b8 */

/* WARNING: Removing unreachable block (ram,0x00011468) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  int arr1 [3];
  int arr2 [3];
  int arr3 [3];
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr2[0] = 1;
  arr2[1] = 2;
  arr2[2] = 4;
  arr3[0] = 1;
  arr3[1] = 2;
  arr3[2] = 3;
                    /* Unresolved local var: int ret@[???] */
  iVar1 = memcmp(arr1,arr2,0xc);
  if (iVar1 < 1) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = 1;
  }
                    /* Unresolved local var: int ret@[???] */
  iVar2 = memcmp(arr1,arr3,0xc);
  if (iVar2 < 1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2 + iVar1;
}



/* Function: param_printf @ 00011474 */

int param_printf(int x,char *name)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
  return iVar1;
}



/* Function: call_printf @ 0001148c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  
                    /* Unresolved local var: int chars@[???]
                       Unresolved local var: int ret@[???] */
  iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_000139fc);
  return iVar1;
}



/* Function: param_scanf @ 000114a8 */

int param_scanf(char *input_str)

{
  int iVar1;
  int a;
  int b;
  int local_c;
  
                    /* Unresolved local var: int ret@[???] */
  local_c = 0;
  iVar1 = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
  if (iVar1 == 2) {
    iVar1 = a + b;
  }
  else {
    iVar1 = -1;
  }
  if (local_c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_scanf @ 0001150c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  int a;
  int b;
  int local_c;
  
                    /* Unresolved local var: int ret@[???] */
  local_c = 0;
  iVar1 = __isoc99_sscanf("123,456","%d,%d",&a,&b);
  if (iVar1 == 2) {
    iVar1 = a + b;
  }
  else {
    iVar1 = -1;
  }
  if (local_c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_fopen_fclose @ 00011578 */

int param_fopen_fclose(char *filename)

{
  FILE *__stream;
  int iVar1;
  
                    /* Unresolved local var: FILE * fp@[???]
                       Unresolved local var: int fd@[???] */
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



/* Function: call_fopen_fclose @ 000115b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
  FILE *__stream;
  int iVar1;
  
                    /* Unresolved local var: int fd@[???]
                       Unresolved local var: FILE * fp@[???] */
  __stream = fopen("/etc/passwd","r");
  if (__stream != (FILE *)0x0) {
    iVar1 = fileno(__stream);
    fclose(__stream);
    if (-1 < iVar1) {
      return 0x2a;
    }
  }
  return -1;
}



/* Function: param_fread_fwrite @ 00011600 */

/* WARNING: Removing unreachable block (ram,0x000116ec) */

int param_fread_fwrite(char *tmpfile)

{
  FILE *__s;
  size_t sVar1;
  int iVar2;
  char read_buffer [32];
  
                    /* Unresolved local var: char * write_data@[???]
                       Unresolved local var: FILE * fp@[???]
                       Unresolved local var: size_t written@[???]
                       Unresolved local var: size_t read@[???] */
  __s = fopen(tmpfile,"w+");
  if (__s == (FILE *)0x0) {
    iVar2 = -1;
  }
  else {
    sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar1 == 0x12) {
      rewind(__s);
                    /* Unresolved local var: size_t sz@[???] */
      sVar1 = fread(read_buffer,1,0x12,__s);
      read_buffer[sVar1] = '\0';
      fclose(__s);
      unlink(tmpfile);
      if (sVar1 == 0x12) {
        iVar2 = strcmp(read_buffer,"BinBench Test Data");
        if (iVar2 == 0) {
          iVar2 = 0x2a;
        }
        else {
          iVar2 = -3;
        }
      }
      else {
        iVar2 = -3;
      }
    }
    else {
      fclose(__s);
      iVar2 = -2;
    }
  }
  return iVar2;
}



/* Function: call_fread_fwrite @ 000116fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 00011708 */

int param_malloc_free(size_t size)

{
  int *__ptr;
  int iVar1;
  int *piVar2;
  
                    /* Unresolved local var: int * ptr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = malloc(size * 4);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: size_t i@[???] */
    if (size != 0) {
      iVar1 = 0;
      piVar2 = __ptr + -1;
      do {
        piVar2 = piVar2 + 1;
        *piVar2 = iVar1;
        iVar1 = iVar1 + 10;
      } while (piVar2 != __ptr + (size - 1));
    }
    iVar1 = __ptr[size - 1] + *__ptr;
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 00011770 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  int *__ptr;
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int * ptr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    piVar1 = __ptr + -1;
    do {
      piVar1 = piVar1 + 1;
                    /* Unresolved local var: size_t i@[???] */
      *piVar1 = iVar2;
      iVar2 = iVar2 + 10;
    } while (iVar2 != 100);
    iVar2 = *__ptr + __ptr[9];
    free(__ptr);
  }
  return iVar2;
}



/* Function: param_memset @ 000117bc */

int param_memset(void *buffer,size_t size)

{
  int iVar1;
  byte *pbVar2;
  
                    /* Unresolved local var: uchar * bytes@[???]
                       Unresolved local var: int sum@[???] */
  memset(buffer,0,size);
                    /* Unresolved local var: size_t i@[???] */
  if (size != 0) {
    iVar1 = 0;
    pbVar2 = (byte *)((int)buffer + -1);
    do {
      pbVar2 = pbVar2 + 1;
      iVar1 = iVar1 + (uint)*pbVar2;
    } while (pbVar2 != (byte *)((int)buffer + (size - 1)));
    return iVar1;
  }
  return 0;
}



/* Function: call_memset @ 00011808 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
                    /* Unresolved local var: int[10] buffer@[???] */
  return 0;
}



/* Function: param_strchr_strstr @ 00011810 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: char * pos1@[???]
                       Unresolved local var: int index1@[???]
                       Unresolved local var: char * pos2@[???]
                       Unresolved local var: int index2@[???] */
  pcVar1 = strchr(str,(int)ch);
  if (pcVar1 == (char *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)pcVar1 - (int)str;
  }
  pcVar1 = strstr(str,substr);
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)pcVar1 - (int)str;
  }
  return iVar3 + iVar2;
}



/* Function: call_strchr_strstr @ 0001184c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
                    /* Unresolved local var: char * text@[???]
                       Unresolved local var: int result@[???] */
  return 0xf;
}



/* Function: test_standard_library_functions @ 00011854 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
  int iVar1;
  undefined4 uVar2;
  FILE *__stream;
  int *__ptr;
  int *piVar3;
  int a;
  int b;
  int local_c;
  
  local_c = 0;
  puts(&DAT_00013a54);
  __printf_chk(1,&DAT_00013a78,8);
  iVar1 = call_strcmp();
  __printf_chk(1,&DAT_00013a94,iVar1);
  __printf_chk(1,&DAT_00013ab0,0xc);
  __printf_chk(1,&DAT_00013acc,0x5a);
  iVar1 = call_memcmp();
  __printf_chk(1,&DAT_00013ae8,iVar1);
                    /* Unresolved local var: int chars@[???]
                       Unresolved local var: int ret@[???] */
  uVar2 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_000139fc);
  __printf_chk(1,&DAT_00013b04,uVar2);
                    /* Unresolved local var: int ret@[???] */
  iVar1 = __isoc99_sscanf("123,456","%d,%d",&a,&b);
  if (iVar1 == 2) {
    iVar1 = a + b;
  }
  else {
    iVar1 = -1;
  }
  __printf_chk(1,&DAT_00013b20,iVar1);
                    /* Unresolved local var: int fd@[???]
                       Unresolved local var: FILE * fp@[???] */
  __stream = fopen("/etc/passwd","r");
  if (__stream != (FILE *)0x0) {
    iVar1 = fileno(__stream);
    fclose(__stream);
    if (-1 < iVar1) {
      uVar2 = 0x2a;
      goto LAB_00011954;
    }
  }
  uVar2 = 0xffffffff;
LAB_00011954:
  __printf_chk(1,&DAT_00013b40,uVar2);
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  __printf_chk(1,&DAT_00013b5c,iVar1);
                    /* Unresolved local var: int * ptr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    piVar3 = __ptr + -1;
    do {
      piVar3 = piVar3 + 1;
                    /* Unresolved local var: size_t i@[???] */
      *piVar3 = iVar1;
      iVar1 = iVar1 + 10;
    } while (iVar1 != 100);
    iVar1 = *__ptr + __ptr[9];
    free(__ptr);
  }
  __printf_chk(1,&DAT_00013b78,iVar1);
  iVar1 = call_memset();
  __printf_chk(1,&DAT_00013b94,iVar1);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  __printf_chk(1,&DAT_00013bb0,0xf);
  return;
}



/* Function: param_linux_syscall @ 00011a6c */

int param_linux_syscall(char *pathname)

{
  long lVar1;
  int *piVar2;
  
                    /* Unresolved local var: int fd@[???] */
  lVar1 = syscall(5,pathname,0);
  if (-1 < lVar1) {
    syscall(6,lVar1);
    return lVar1;
  }
                    /* Unresolved local var: int fd@[???] */
  piVar2 = __errno_location();
  return -*piVar2;
}



/* Function: call_linux_syscall @ 00011ab0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int fd@[???] */
  lVar1 = syscall(5,"/etc/passwd",0);
  if (lVar1 < 0) {
                    /* Unresolved local var: int fd@[???] */
    piVar2 = __errno_location();
    if (*piVar2 < 1) {
      iVar3 = 0x2a;
    }
    else {
      iVar3 = -1;
    }
    return iVar3;
  }
  syscall(6);
  return 0x2a;
}



/* Function: param_win32_api @ 00011af8 */

/* WARNING: Removing unreachable block (ram,0x00011b58) */

int param_win32_api(char *filename)

{
  int iVar1;
  stat st;
  
  iVar1 = stat(filename,(stat *)&st);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else if (st.st_size < 1) {
    iVar1 = -2;
  }
  else {
    iVar1 = 0x2a;
  }
  return iVar1;
}



/* Function: call_win32_api @ 00011b60 */

/* WARNING: Removing unreachable block (ram,0x00011bc4) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  int iVar1;
  stat st;
  
  iVar1 = stat("/etc/passwd",(stat *)&st);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else if (st.st_size < 1) {
    iVar1 = -2;
  }
  else {
    iVar1 = 0x2a;
  }
  return iVar1;
}



/* Function: param_fork_exec @ 00011bd0 */

int param_fork_exec(char *prog,char *arg)

{
  __pid_t _Var1;
  uint uVar2;
  int status;
  int local_14;
  
                    /* Unresolved local var: pid_t pid@[???] */
  local_14 = 0;
  _Var1 = fork();
  if (_Var1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (_Var1 == 0) {
                    /* Unresolved local var: pid_t pid@[???] */
      execl(prog,prog,arg);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
                    /* Unresolved local var: pid_t wpid@[???] */
    _Var1 = waitpid(_Var1,&status,0);
    if (_Var1 < 0) {
      uVar2 = 0xfffffffe;
    }
    else if ((status & 0x7fU) == 0) {
      uVar2 = status >> 8 & 0xff;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: call_fork_exec @ 00011c74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = param_fork_exec("/bin/true",(char *)0x0);
  if (iVar1 == 0) {
    iVar1 = 0x2a;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: param_pipe_communication @ 00011c98 */

/* WARNING: Removing unreachable block (ram,0x00011d70) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  int pipefd [2];
  char buffer [32];
  
                    /* Unresolved local var: pid_t pid@[???] */
  iVar1 = pipe(pipefd);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    _Var2 = fork();
    if (_Var2 < 0) {
      iVar1 = -2;
    }
    else {
      if (_Var2 == 0) {
                    /* Unresolved local var: char * msg@[???] */
        close(pipefd[0]);
        write(pipefd[1],"HelloPipe",9);
        close(pipefd[1]);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
                    /* Unresolved local var: ssize_t bytes@[???] */
      close(pipefd[1]);
      sVar3 = read(pipefd[0],buffer,0x1f);
      buffer[sVar3] = '\0';
      close(pipefd[0]);
      wait((void *)0x0);
      if (sVar3 < 1) {
        iVar1 = -3;
      }
      else {
        iVar1 = 0x2a;
      }
    }
  }
  return iVar1;
}



/* Function: call_pipe_communication @ 00011d7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  int iStack_3c;
  int iStack_38;
  undefined1 auStack_34 [32];
  int iStack_14;
  
  iStack_14 = 0;
  iVar1 = pipe(&iStack_3c);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    _Var2 = fork();
    if (_Var2 < 0) {
      iVar1 = -2;
    }
    else {
      if (_Var2 == 0) {
        close(iStack_3c);
        write(iStack_38,"HelloPipe",9);
        close(iStack_38);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(iStack_38);
      sVar3 = read(iStack_3c,auStack_34,0x1f);
      auStack_34[sVar3] = 0;
      close(iStack_3c);
      wait((void *)0x0);
      if (sVar3 < 1) {
        iVar1 = -3;
      }
      else {
        iVar1 = 0x2a;
      }
    }
  }
  if (iStack_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* Function: param_socket_create @ 00011d80 */

/* WARNING: Removing unreachable block (ram,0x00011e7c) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
  int iVar1;
  int iVar2;
  int opt;
  sockaddr_in addr;
  
                    /* Unresolved local var: int sock@[???] */
  iVar1 = socket(2,1,0);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    opt = 1;
    iVar2 = setsockopt(iVar1,1,2,&opt,4);
    if (iVar2 < 0) {
      close(iVar1);
      iVar1 = -2;
    }
    else {
      addr.sin_addr.s_addr = 0;
      addr.sin_family = 2;
      addr.sin_port = 0;
      addr.sin_zero[0] = '\0';
      addr.sin_zero[1] = '\0';
      addr.sin_zero[2] = '\0';
      addr.sin_zero[3] = '\0';
      addr.sin_zero[4] = '\0';
      addr.sin_zero[5] = '\0';
      addr.sin_zero[6] = '\0';
      addr.sin_zero[7] = '\0';
      iVar2 = bind(iVar1,(sockaddr *)&addr,0x10);
      if (iVar2 < 0) {
        close(iVar1);
        iVar1 = -3;
      }
      else {
        iVar2 = listen(iVar1,5);
        if (iVar2 < 0) {
          close(iVar1);
          iVar1 = -4;
        }
        else {
          close(iVar1);
          iVar1 = 0x2a;
        }
      }
    }
  }
  return iVar1;
}



/* Function: call_socket_create @ 00011e84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  sockaddr sStack_1c;
  int iStack_c;
  
  iStack_c = 0;
  iVar1 = socket(2,1,0);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    uStack_20 = 1;
    iVar2 = setsockopt(iVar1,1,2,&uStack_20,4);
    if (iVar2 < 0) {
      close(iVar1);
      iVar1 = -2;
    }
    else {
      sStack_1c.sa_data[2] = '\0';
      sStack_1c.sa_data[3] = '\0';
      sStack_1c.sa_data[4] = '\0';
      sStack_1c.sa_data[5] = '\0';
      sStack_1c.sa_family = 2;
      sStack_1c.sa_data[0] = '\0';
      sStack_1c.sa_data[1] = '\0';
      sStack_1c.sa_data[6] = '\0';
      sStack_1c.sa_data[7] = '\0';
      sStack_1c.sa_data[8] = '\0';
      sStack_1c.sa_data[9] = '\0';
      sStack_1c.sa_data[10] = '\0';
      sStack_1c.sa_data[0xb] = '\0';
      sStack_1c.sa_data[0xc] = '\0';
      sStack_1c.sa_data[0xd] = '\0';
      iVar2 = bind(iVar1,&sStack_1c,0x10);
      if (iVar2 < 0) {
        close(iVar1);
        iVar1 = -3;
      }
      else {
        iVar2 = listen(iVar1,5);
        if (iVar2 < 0) {
          close(iVar1);
          iVar1 = -4;
        }
        else {
          close(iVar1);
          iVar1 = 0x2a;
        }
      }
    }
  }
  if (iStack_c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_shmget_shmat @ 00011e88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  void *__dest;
  
                    /* Unresolved local var: char * ftok_path@[???]
                       Unresolved local var: int fd@[???]
                       Unresolved local var: key_t key@[???]
                       Unresolved local var: int shmid@[???]
                       Unresolved local var: char * shm@[???]
                       Unresolved local var: int len@[???] */
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (-1 < iVar1) {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (-1 < __key) {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        return -2;
      }
      __dest = shmat(iVar1,(void *)0x0,0);
      if (__dest != (void *)0xffffffff) {
        memcpy(__dest,"SharedMemory",0xd);
        shmdt(__dest);
        shmctl(iVar1,0,(shmid_ds *)0x0);
        return 0xc;
      }
      return -3;
    }
  }
  return -1;
}



/* Function: call_shmget_shmat @ 00011f3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = param_shmget_shmat();
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0x2a;
  }
  return iVar1;
}



/* Function: param_signal_handling @ 00011f54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
  __sighandler_t p_Var1;
  int iVar2;
  
                    /* Unresolved local var: int attempts@[???] */
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    return -1;
  }
  p_Var1 = signal(0xe,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    return -2;
  }
  signal_received = 0;
  raise(10);
                    /* Unresolved local var: int attempts@[???] */
  if (signal_received == 0) {
    iVar2 = 1000;
    do {
      usleep(1000);
      if (signal_received != 0) break;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (signal_received == 0) {
    return -3;
  }
  if (signal_number != 10) {
    return -4;
  }
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
  if ((signal_received != 0) && (signal_number == 0xe)) {
    signal(10,(__sighandler_t)0x0);
    signal(0xe,(__sighandler_t)0x0);
    return 0x2a;
  }
  return -5;
}



/* Function: call_signal_handling @ 0001207c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  __sighandler_t p_Var1;
  int iVar2;
  
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    return -1;
  }
  p_Var1 = signal(0xe,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    return -2;
  }
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
    return -3;
  }
  if (signal_number != 10) {
    return -4;
  }
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
  if ((signal_received != 0) && (signal_number == 0xe)) {
    signal(10,(__sighandler_t)0x0);
    signal(0xe,(__sighandler_t)0x0);
    return 0x2a;
  }
  return -5;
}



/* Function: test_system_calls @ 00012080 */

/* WARNING: Removing unreachable block (ram,0x000121c4) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  stat st;
  
  puts(&DAT_00013c08);
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int fd@[???] */
  lVar1 = syscall(5,"/etc/passwd",0);
  if (lVar1 < 0) {
                    /* Unresolved local var: int fd@[???] */
    piVar3 = __errno_location();
    if (*piVar3 < 1) {
      uVar4 = 0x2a;
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  else {
    syscall(6);
    uVar4 = 0x2a;
  }
  __printf_chk(1,&DAT_00013c24,uVar4);
  stat("/etc/passwd",(stat *)&st);
  __printf_chk(1,&DAT_00013c40);
                    /* Unresolved local var: int ret@[???] */
  iVar2 = param_fork_exec("/bin/true",(char *)0x0);
  if (iVar2 == 0) {
    uVar4 = 0x2a;
  }
  else {
    uVar4 = 0xffffffff;
  }
  __printf_chk(1,&DAT_00013c5c,uVar4);
  iVar2 = param_pipe_communication();
  __printf_chk(1,&DAT_00013c78,iVar2);
  iVar2 = param_socket_create();
  __printf_chk(1,&DAT_00013c94,iVar2);
                    /* Unresolved local var: int ret@[???] */
  iVar2 = param_shmget_shmat();
  if (iVar2 < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0x2a;
  }
  __printf_chk(1,&DAT_00013cb0,uVar4);
  param_signal_handling();
  __printf_chk(1,&DAT_00013ccc);
  return;
}



/* Function: param_pthread_create @ 000121f4 */

int param_pthread_create(int x)

{
  int iVar1;
  pthread_t tid;
  int input;
  void *thread_ret;
  int local_c;
  
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: int result@[???] */
  local_c = 0;
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
  if (local_c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_pthread_create @ 00012280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  pthread_t tid;
  int input;
  void *thread_ret;
  int local_c;
  
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: int result@[???] */
  local_c = 0;
  input = 7;
  iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
  if (iVar1 == 0) {
    pthread_join(tid,&thread_ret);
    iVar1 = *(int *)thread_ret;
    free(thread_ret);
  }
  else {
    iVar1 = -1;
  }
  if (local_c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_pthread_join @ 0001230c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  ThreadData *__arg;
  pthread_t *ppVar3;
  pthread_t *ppVar4;
  ThreadData *pTVar5;
  pthread_t tids [3];
  ThreadData data [3];
  int local_24;
  
                    /* Unresolved local var: int total@[???] */
  pTVar5 = data;
  local_24 = 0;
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
  __arg = pTVar5;
  ppVar3 = tids;
  do {
    iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_sum,__arg);
    if (iVar1 != 0) {
      iVar1 = -1;
      goto LAB_000123b4;
    }
    __arg = __arg + 1;
    ppVar3 = ppVar3 + 1;
  } while (__arg != (ThreadData *)&local_24);
  iVar1 = 0;
  ppVar3 = tids;
  do {
                    /* Unresolved local var: int i@[???] */
    ppVar4 = ppVar3 + 1;
    iVar2 = pthread_join(*ppVar3,(void **)0x0);
    if (iVar2 != 0) {
      iVar1 = -2;
      break;
    }
    iVar1 = iVar1 + pTVar5->result;
    pTVar5 = pTVar5 + 1;
    ppVar3 = ppVar4;
  } while ((ThreadData *)ppVar4 != data);
LAB_000123b4:
  if (local_24 == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_pthread_join @ 000123f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  int iVar2;
  pthread_t *ppVar3;
  pthread_t *ppVar4;
  pthread_t *ppVar5;
  pthread_t apStack_54 [3];
  pthread_t pStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  pthread_t pStack_24;
  
  ppVar5 = &pStack_48;
  pStack_24 = 0;
  pStack_48 = 1;
  uStack_44 = 10;
  uStack_40 = 0;
  uStack_3c = 0xb;
  uStack_38 = 0x14;
  uStack_34 = 0;
  uStack_30 = 0x15;
  uStack_2c = 0x1e;
  uStack_28 = 0;
  ppVar3 = ppVar5;
  ppVar4 = apStack_54;
  do {
    iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_sum,ppVar3);
    if (iVar1 != 0) {
      iVar1 = -1;
      goto LAB_000123b4;
    }
    ppVar3 = ppVar3 + 3;
    ppVar4 = ppVar4 + 1;
  } while (ppVar3 != &pStack_24);
  iVar1 = 0;
  ppVar3 = apStack_54;
  do {
    ppVar4 = ppVar3 + 1;
    iVar2 = pthread_join(*ppVar3,(void **)0x0);
    if (iVar2 != 0) {
      iVar1 = -2;
      break;
    }
    iVar1 = iVar1 + ppVar5[2];
    ppVar5 = ppVar5 + 3;
    ppVar3 = ppVar4;
  } while (ppVar4 != &pStack_48);
LAB_000123b4:
  if (pStack_24 == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_mutex_lock @ 000123fc */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  pthread_t *__ptr;
  int iVar1;
  int iVar2;
  pthread_t *ppVar3;
  int iVar4;
  bool bVar5;
  int local_24;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: int expected@[???] */
  local_24 = iterations_per_thread;
  __ptr = malloc(thread_count << 2);
  if (__ptr == (pthread_t *)0x0) {
    iVar2 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    shared_counter = 0;
    ppVar3 = __ptr;
    iVar2 = 0;
    if (0 < thread_count) {
      do {
        iVar4 = iVar2;
        iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_increment,&local_24);
        iVar2 = iVar4 + 1;
        ppVar3 = ppVar3 + 1;
        if (iVar1 != 0) {
          free(__ptr);
          return -2;
        }
      } while (thread_count != iVar2);
      ppVar3 = __ptr + -1;
      iVar2 = 0;
      do {
                    /* Unresolved local var: int i@[???] */
        ppVar3 = ppVar3 + 1;
        pthread_join(*ppVar3,(void **)0x0);
        bVar5 = iVar4 != iVar2;
        iVar2 = iVar2 + 1;
      } while (bVar5);
    }
    free(__ptr);
    if (shared_counter == local_24 * thread_count) {
      iVar2 = 0x2a;
    }
    else {
      iVar2 = -3;
    }
  }
  return iVar2;
}



/* Function: call_mutex_lock @ 000124d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = param_mutex_lock(4,1000);
  return iVar1;
}



/* Function: param_condition_variable @ 000124e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
  int iVar1;
  pthread_t producer;
  pthread_t consumer;
  void *consumer_ret;
  int local_c;
  
                    /* Unresolved local var: int result@[???] */
  local_c = 0;
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
  if (local_c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_condition_variable @ 000125a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  pthread_t pStack_18;
  pthread_t pStack_14;
  int *piStack_10;
  int iStack_c;
  
  iStack_c = 0;
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&pStack_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(pStack_14,&piStack_10);
      pthread_join(pStack_18,(void **)0x0);
      iVar1 = *piStack_10;
      free(piStack_10);
    }
    else {
      pthread_cancel(pStack_14);
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  if (iStack_c == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_atomic_ops @ 000125ac */

int param_atomic_ops(int thread_count,int iterations)

{
  atomic_int aVar1;
  pthread_t *__ptr;
  int iVar2;
  int iVar3;
  pthread_t *ppVar4;
  int local_2c;
  pthread_t load_store_tid;
  int local_24;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: int final_value@[???] */
  local_24 = 0;
  local_2c = iterations;
  __ptr = malloc(thread_count << 2);
  if (__ptr == (pthread_t *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = 0;
    __sync_synchronize();
    atomic_counter = 0;
    __sync_synchronize();
                    /* Unresolved local var: int i@[???] */
    ppVar4 = __ptr;
    if (thread_count < 1) {
      iVar3 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                             (void *)0x0);
      if (iVar3 == 0) {
        pthread_join(load_store_tid,(void **)0x0);
      }
    }
    else {
      do {
        iVar2 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_atomic_increment,&local_2c);
        if (iVar2 != 0) {
          free(__ptr);
          iVar3 = -2;
          goto LAB_0001263c;
        }
        iVar3 = iVar3 + 1;
        ppVar4 = ppVar4 + 1;
      } while (thread_count != iVar3);
      iVar3 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                             (void *)0x0);
      if (iVar3 == 0) {
        pthread_join(load_store_tid,(void **)0x0);
      }
      ppVar4 = __ptr + -1;
      iVar3 = 0;
      do {
                    /* Unresolved local var: int i@[???] */
        ppVar4 = ppVar4 + 1;
        iVar3 = iVar3 + 1;
        pthread_join(*ppVar4,(void **)0x0);
      } while (iVar3 < thread_count);
    }
    __sync_synchronize();
    aVar1 = atomic_counter;
    __sync_synchronize();
    free(__ptr);
    if (aVar1 < 1) {
      iVar3 = -3;
    }
    else {
      iVar3 = 0x2a;
    }
  }
LAB_0001263c:
  if (local_24 == 0) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_atomic_ops @ 0001270c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  
  iVar1 = param_atomic_ops(4,500);
  return iVar1;
}



/* Function: param_thread_local_storage @ 00012718 */

int param_thread_local_storage(int thread_count)

{
  pthread_t *__ptr;
  void *__ptr_00;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  pthread_t *ppVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  void *ret;
  int local_2c;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: char * * names@[???]
                       Unresolved local var: int total_initial@[???]
                       Unresolved local var: int total_final@[???]
                       Unresolved local var: int expected_initial@[???]
                       Unresolved local var: int expected_final@[???] */
  local_2c = 0;
  __ptr = malloc(thread_count * 4);
  __ptr_00 = malloc(thread_count * 4);
  if (__ptr_00 == (void *)0x0 || __ptr == (pthread_t *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = 0;
                    /* Unresolved local var: int i@[???] */
    iVar2 = iVar3;
    if (0 < thread_count) {
      puVar8 = (undefined4 *)((int)__ptr_00 + -4);
      puVar5 = puVar8;
      do {
        iVar4 = iVar3;
        pvVar1 = malloc(0x10);
        puVar5 = puVar5 + 1;
        *puVar5 = pvVar1;
        __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar4);
        iVar3 = iVar4 + 1;
      } while (thread_count != iVar4 + 1);
      iVar3 = 0;
      ppVar6 = __ptr;
      puVar5 = puVar8;
                    /* Unresolved local var: int i@[???] */
      do {
        puVar5 = puVar5 + 1;
        iVar2 = pthread_create(ppVar6,(pthread_attr_t *)0x0,thread_tls_test,(void *)*puVar5);
        if (iVar2 != 0) {
          do {
            puVar8 = puVar8 + 1;
                    /* Unresolved local var: int j@[???] */
            free((void *)*puVar8);
          } while ((undefined4 *)((int)__ptr_00 + iVar3 * 4) != puVar8);
          free(__ptr_00);
          free(__ptr);
          iVar3 = -2;
          goto LAB_00012824;
        }
        bVar9 = iVar4 != iVar3;
        ppVar6 = ppVar6 + 1;
        iVar3 = iVar3 + 1;
      } while (bVar9);
      ppVar6 = __ptr + -1;
      iVar3 = 0;
      iVar7 = 0;
      iVar2 = 0;
      do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int * values@[???] */
        ppVar6 = ppVar6 + 1;
        pthread_join(*ppVar6,&ret);
        iVar2 = iVar2 + *(int *)ret;
        iVar3 = iVar3 + *(int *)((int)ret + 4);
        free(ret);
        puVar8 = puVar8 + 1;
        free((void *)*puVar8);
        bVar9 = iVar4 != iVar7;
        iVar7 = iVar7 + 1;
      } while (bVar9);
    }
    free(__ptr_00);
    free(__ptr);
    if (iVar3 == thread_count * 0x96 && iVar2 == thread_count * 100) {
      iVar3 = 0x2a;
    }
    else {
      iVar3 = -3;
    }
  }
LAB_00012824:
  if (local_2c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* Function: call_thread_local_storage @ 000128f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  
  iVar1 = param_thread_local_storage(4);
  return iVar1;
}



/* Function: test_thread_concurrency @ 00012900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t tid;
  int input;
  void *thread_ret;
  int local_c;
  
  local_c = 0;
  puts(&DAT_00013cf4);
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: int result@[???] */
  input = 7;
  iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
  if (iVar1 == 0) {
    pthread_join(tid,&thread_ret);
    uVar2 = *(undefined4 *)thread_ret;
    free(thread_ret);
  }
  else {
    uVar2 = 0xffffffff;
  }
  __printf_chk(1,&DAT_00013d14,uVar2);
  iVar1 = param_pthread_join();
  __printf_chk(1,&DAT_00013d30,iVar1);
  iVar1 = param_mutex_lock(4,1000);
  __printf_chk(1,&DAT_00013d50,iVar1);
  iVar1 = param_condition_variable();
  __printf_chk(1,&DAT_00013d6c,iVar1);
  iVar1 = param_atomic_ops(4,500);
  __printf_chk(1,&DAT_00013d88,iVar1);
  iVar1 = param_thread_local_storage(4);
  if (local_c == 0) {
    __printf_chk(1,&DAT_00013da4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1,local_c,iVar1,0);
}



/* Function: __sync_fetch_and_add_4 @ 00012a34 */

int __sync_fetch_and_add_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 + param_2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_fetch_and_sub_4 @ 00012a6c */

int __sync_fetch_and_sub_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 - param_2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_fetch_and_or_4 @ 00012aa4 */

uint __sync_fetch_and_or_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 | param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_and_4 @ 00012adc */

uint __sync_fetch_and_and_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 & param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_xor_4 @ 00012b14 */

uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 ^ param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_nand_4 @ 00012b4c */

uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,~(uVar2 & param_2),param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_add_2 @ 00012b88 */

int __sync_fetch_and_add_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_sub_2 @ 00012be8 */

int __sync_fetch_and_sub_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_or_2 @ 00012c48 */

int __sync_fetch_and_or_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_and_2 @ 00012ca8 */

int __sync_fetch_and_and_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_xor_2 @ 00012d08 */

int __sync_fetch_and_xor_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_nand_2 @ 00012d68 */

int __sync_fetch_and_nand_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_add_1 @ 00012dcc */

int __sync_fetch_and_add_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_sub_1 @ 00012e28 */

int __sync_fetch_and_sub_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_or_1 @ 00012e84 */

int __sync_fetch_and_or_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_and_1 @ 00012ee0 */

int __sync_fetch_and_and_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_xor_1 @ 00012f3c */

int __sync_fetch_and_xor_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_nand_1 @ 00012f98 */

int __sync_fetch_and_nand_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_add_and_fetch_4 @ 00012ff8 */

int __sync_add_and_fetch_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1 + param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_sub_and_fetch_4 @ 00013030 */

int __sync_sub_and_fetch_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1 - param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_or_and_fetch_4 @ 00013068 */

uint __sync_or_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1 | param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_and_and_fetch_4 @ 000130a0 */

uint __sync_and_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1 & param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_xor_and_fetch_4 @ 000130d8 */

uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1 ^ param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_nand_and_fetch_4 @ 00013110 */

uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = ~(*param_1 & param_2);
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_add_and_fetch_2 @ 0001314c */

int __sync_add_and_fetch_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_2 @ 000131b4 */

int __sync_sub_and_fetch_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_2 @ 0001321c */

int __sync_or_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_2 @ 00013284 */

int __sync_and_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_2 @ 000132ec */

int __sync_xor_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_2 @ 00013354 */

int __sync_nand_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_add_and_fetch_1 @ 000133c0 */

int __sync_add_and_fetch_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_1 @ 00013424 */

int __sync_sub_and_fetch_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_1 @ 00013488 */

int __sync_or_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_1 @ 000134ec */

int __sync_and_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_1 @ 00013550 */

int __sync_xor_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_1 @ 000135b4 */

int __sync_nand_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_val_compare_and_swap_4 @ 0001361c */

int __sync_val_compare_and_swap_4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  do {
    if (*param_1 != param_2) {
      return *param_1;
    }
    iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  } while (iVar1 != 0);
  return param_2;
}



/* Function: __sync_val_compare_and_swap_2 @ 0001366c */

uint __sync_val_compare_and_swap_2(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    if (uVar1 != (param_2 & 0xffff)) {
      return (int)(short)uVar1;
    }
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return param_2;
}



/* Function: __sync_val_compare_and_swap_1 @ 000136e4 */

uint __sync_val_compare_and_swap_1(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    if (uVar1 != (param_2 & 0xff)) {
      return (int)(char)uVar1;
    }
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return param_2;
}



/* Function: __sync_bool_compare_and_swap_4 @ 00013758 */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 00013784 */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 000137a0 */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 000137c8 */

undefined4 __sync_lock_test_and_set_4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_lock_test_and_set_2 @ 00013800 */

int __sync_lock_test_and_set_2(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    iVar1 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar1 != 0);
  return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_test_and_set_1 @ 00013860 */

int __sync_lock_test_and_set_1(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    iVar1 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar1 != 0);
  return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_release_8 @ 000138bc */

void __sync_lock_release_8(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Function: __sync_lock_release_4 @ 000138e0 */

void __sync_lock_release_4(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_2 @ 00013900 */

void __sync_lock_release_2(undefined2 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_1 @ 00013920 */

void __sync_lock_release_1(undefined1 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: _fini @ 00013948 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 119 */
