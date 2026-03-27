/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/6/6_gcc_O3_g
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



/* Function: main @ 00011790 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: _start @ 000117b0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000117dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000117e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000117f0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001180b) */
/* WARNING: Removing unreachable block (ram,0x00011815) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011830 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001185e) */
/* WARNING: Removing unreachable block (ram,0x00011868) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011880 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000118dc) */
/* WARNING: Removing unreachable block (ram,0x000118e0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011919 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001191d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: signal_handler @ 00011930 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void signal_handler(int sig)

{
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: thread_sum @ 00011960 */

void * thread_sum(void *arg)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  iVar1 = *(int *)arg;
  *(undefined4 *)((int)arg + 8) = 0;
  if (iVar1 <= *(int *)((int)arg + 4)) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + iVar1;
      iVar1 = iVar1 + 1;
    } while (*(int *)((int)arg + 4) + 1 != iVar1);
    *(int *)((int)arg + 8) = iVar2;
  }
  return (void *)0x0;
}



/* Function: thread_compute @ 00011990 */

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



/* Function: thread_increment @ 000119c0 */

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
      iVar2 = iVar2 + 1;
      pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
      shared_counter = shared_counter + 1;
      pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
      usleep(1000);
    } while (iVar1 != iVar2);
  }
  return (void *)0x0;
}



/* Function: consumer_thread @ 00011a30 */

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



/* Function: producer_thread @ 00011ab0 */

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



/* Function: thread_atomic_increment @ 00011b10 */

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



/* Function: thread_atomic_load_store @ 00011b60 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void * thread_atomic_load_store(void *arg)

{
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return (void *)0x0;
}



/* Function: thread_tls_test @ 00011b90 */

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



/* Function: param_fork_exec @ 00011bf0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int __regparm3 param_fork_exec(char *prog,char *arg)

{
                    /* Unresolved local var: pid_t pid@[???] */
  execl(prog,prog,arg,0);
                    /* WARNING: Subroutine does not return */
  _exit(0x7f);
}



/* Function: param_thread_local_storage @ 00011c20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_thread_local_storage(int thread_count)

{
  pthread_t *__ptr;
  undefined4 *__ptr_00;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  pthread_t *__newthread;
  undefined4 *puVar5;
  int in_GS_OFFSET;
  void *ret;
  int local_20;
  undefined4 uStack_14;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: char * * names@[???]
                       Unresolved local var: int total_initial@[???]
                       Unresolved local var: int total_final@[???]
                       Unresolved local var: int expected_initial@[???]
                       Unresolved local var: int expected_final@[???] */
  uStack_14 = 0x11c29;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  __ptr = malloc(0x10);
  __ptr_00 = malloc(0x10);
  if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined4 *)0x0)) {
    iVar3 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    iVar3 = 0;
    do {
      pvVar1 = malloc(0x10);
      __ptr_00[iVar3] = pvVar1;
      iVar2 = iVar3 + 1;
      __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar3);
      iVar3 = iVar2;
    } while (iVar2 != 4);
                    /* Unresolved local var: int i@[???] */
    iVar3 = 0;
    __newthread = __ptr;
    do {
      iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
                             (void *)__ptr_00[iVar3]);
      if (iVar2 != 0) {
        puVar5 = __ptr_00;
        do {
                    /* Unresolved local var: int j@[???] */
          pvVar1 = (void *)*puVar5;
          puVar5 = puVar5 + 1;
          free(pvVar1);
        } while (__ptr_00 + iVar3 + 1 != puVar5);
        free(__ptr_00);
        free(__ptr);
        iVar3 = -2;
        goto LAB_00011d63;
      }
      iVar3 = iVar3 + 1;
      __newthread = __newthread + 1;
    } while (iVar3 != 4);
                    /* Unresolved local var: int i@[???] */
    iVar2 = 0;
    iVar4 = 0;
    iVar3 = 0;
    do {
                    /* Unresolved local var: int * values@[???] */
      pthread_join(__ptr[iVar4],&ret);
      iVar3 = iVar3 + *(int *)ret;
      iVar2 = iVar2 + *(int *)((int)ret + 4);
      free(ret);
      puVar5 = __ptr_00 + iVar4;
      iVar4 = iVar4 + 1;
      free((void *)*puVar5);
    } while (iVar4 != 4);
    free(__ptr_00);
    free(__ptr);
    if ((iVar3 == 400) && (iVar2 == 600)) {
      iVar3 = 0x2a;
    }
    else {
      iVar3 = -3;
    }
  }
LAB_00011d63:
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_atomic_ops @ 00011de0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_atomic_ops(int thread_count,int iterations)

{
  atomic_int aVar1;
  pthread_t *__ptr;
  int iVar2;
  int iVar3;
  pthread_t *ppVar4;
  int in_GS_OFFSET;
  undefined4 local_28;
  pthread_t load_store_tid;
  int local_20;
  undefined4 uStack_14;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: int final_value@[???] */
  uStack_14 = 0x11de9;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  local_28 = 500;
  __ptr = malloc(0x10);
  if (__ptr == (pthread_t *)0x0) {
    iVar2 = -1;
  }
  else {
    LOCK();
    atomic_counter = 0;
    UNLOCK();
                    /* Unresolved local var: int i@[???] */
    ppVar4 = __ptr;
    do {
      iVar2 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_atomic_increment,&local_28);
      if (iVar2 != 0) {
        free(__ptr);
        iVar2 = -2;
        goto LAB_00011ec0;
      }
      ppVar4 = ppVar4 + 1;
    } while (ppVar4 != __ptr + 4);
    iVar3 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                           (void *)0x0);
    iVar2 = 0;
    if (iVar3 == 0) {
      pthread_join(load_store_tid,(void **)0x0);
    }
    do {
                    /* Unresolved local var: int i@[???] */
      ppVar4 = __ptr + iVar2;
      iVar2 = iVar2 + 1;
      pthread_join(*ppVar4,(void **)0x0);
      aVar1 = atomic_counter;
    } while (iVar2 != 4);
    free(__ptr);
    iVar2 = 0x2a;
    if (aVar1 < 1) {
      iVar2 = -3;
    }
  }
LAB_00011ec0:
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_mutex_lock @ 00011f10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  pthread_t *__ptr;
  int iVar1;
  pthread_t *__newthread;
  int in_GS_OFFSET;
  int local_24;
  int local_20;
  undefined4 uStack_14;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: int expected@[???] */
  uStack_14 = 0x11f19;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  local_24 = 1000;
  __ptr = malloc(0x10);
  if (__ptr == (pthread_t *)0x0) {
    iVar1 = -1;
  }
  else {
    shared_counter = 0;
                    /* Unresolved local var: int i@[???] */
    __newthread = __ptr;
    do {
      iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&local_24);
      if (iVar1 != 0) {
        free(__ptr);
        iVar1 = -2;
        goto LAB_00011fdf;
      }
      __newthread = __newthread + 1;
    } while (__ptr + 4 != __newthread);
    iVar1 = 0;
    do {
                    /* Unresolved local var: int i@[???] */
      pthread_join(__ptr[iVar1],(void **)0x0);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    free(__ptr);
    iVar1 = 0x2a;
    if (local_24 << 2 != shared_counter) {
      iVar1 = -3;
    }
  }
LAB_00011fdf:
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_strcpy @ 00012020 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_strcpy(char *dst,char *src)

{
  char *pcVar1;
  
  pcVar1 = stpcpy(dst,src);
  return (int)pcVar1 - (int)dst;
}



/* Function: call_strcpy @ 00012050 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
  return 8;
}



/* Function: param_strcmp @ 00012060 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_strcmp(char *s1,char *s2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strcmp(s1,s2);
  iVar2 = -(uint)(iVar1 != 0);
  if (0 < iVar1) {
    iVar2 = 1;
  }
  return iVar2;
}



/* Function: call_strcmp @ 000120a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
  return 0;
}



/* Function: param_strlen @ 000120b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_strlen(char *str)

{
  size_t sVar1;
  
  sVar1 = strlen(str);
  return sVar1;
}



/* Function: call_strlen @ 000120e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
  return 0xc;
}



/* Function: param_memcpy @ 000120f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_memcpy(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return n;
}



/* Function: call_memcpy @ 00012120 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
  return 0x5a;
}



/* Function: param_memcmp @ 00012130 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
  iVar1 = memcmp(p1,p2,n);
  iVar2 = -(uint)(iVar1 != 0);
  if (0 < iVar1) {
    iVar2 = 1;
  }
  return iVar2;
}



/* Function: call_memcmp @ 00012170 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
                    /* Unresolved local var: int ret@[???] */
  iVar2 = memcmp(arr1,arr2,0xc);
                    /* Unresolved local var: int ret@[???] */
  iVar4 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar4 = 1;
  }
  iVar2 = memcmp(arr1,arr3,0xc);
  iVar3 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar3 = 1;
  }
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar3 + iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_printf @ 00012250 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_printf(int x,char *name)

{
  int iVar1;
  
  iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
  return iVar1;
}



/* Function: call_printf @ 00012280 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00014027);
  return iVar1;
}



/* Function: param_scanf @ 000122b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_scanf(char *input_str)

{
  int iVar1;
  int in_GS_OFFSET;
  int a;
  int b;
  int local_10;
  undefined4 uStack_8;
  
  uStack_8 = 0x122ba;
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



/* Function: call_scanf @ 00012320 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  int in_GS_OFFSET;
  int a;
  int b;
  int local_10;
  undefined4 uStack_8;
  
  uStack_8 = 0x1232a;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
                    /* Unresolved local var: int ret@[???] */
  iVar1 = __isoc99_sscanf("123,456","%d,%d",&a,&b);
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



/* Function: param_fopen_fclose @ 00012390 */

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



/* Function: call_fopen_fclose @ 000123e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
  FILE *__stream;
  int iVar1;
  
                    /* Unresolved local var: FILE * fp@[???]
                       Unresolved local var: int fd@[???] */
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



/* Function: param_fread_fwrite @ 00012440 */

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



/* Function: call_fread_fwrite @ 00012540 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 00012570 */

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
      } while (size * 10 != iVar1);
    }
    iVar1 = *__ptr + __ptr[size - 1];
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 000125e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  void *__ptr;
  int iVar1;
  
                    /* Unresolved local var: int * ptr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    free(__ptr);
    iVar1 = 0x5a;
  }
  return iVar1;
}



/* Function: param_memset @ 00012620 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_memset(void *buffer,size_t size)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  
  memset(buffer,0,size);
                    /* Unresolved local var: size_t i@[???] */
  if (size != 0) {
    iVar3 = 0;
    pbVar1 = (byte *)((int)buffer + size);
    do {
      bVar2 = *(byte *)buffer;
      buffer = (void *)((int)buffer + 1);
      iVar3 = iVar3 + (uint)bVar2;
    } while (pbVar1 != buffer);
    return iVar3;
  }
  return 0;
}



/* Function: call_memset @ 00012680 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
  return 0;
}



/* Function: param_strchr_strstr @ 00012690 */

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



/* Function: call_strchr_strstr @ 000126f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
  return 0xf;
}



/* Function: test_standard_library_functions @ 00012700 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  FILE *__stream;
  void *__ptr;
  int iVar5;
  int in_GS_OFFSET;
  int a;
  int b;
  int arr1 [3];
  int arr2 [3];
  int arr3 [3];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00014390);
  __printf_chk(1,&DAT_00014075,8);
  __printf_chk(1,&DAT_00014090,0);
  __printf_chk(1,&DAT_000140ab,0xc);
  __printf_chk(1,&DAT_000140c7,0x5a);
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
  iVar2 = memcmp(arr1,arr2,0xc);
                    /* Unresolved local var: int ret@[???] */
  iVar5 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar5 = 1;
  }
  iVar2 = memcmp(arr1,arr3,0xc);
  iVar3 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar3 = 1;
  }
  __printf_chk(1,&DAT_000140e3,iVar3 + iVar5);
                    /* Unresolved local var: int chars@[???]
                       Unresolved local var: int ret@[???] */
  uVar4 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00014027);
  __printf_chk(1,&DAT_000140ff,uVar4);
                    /* Unresolved local var: int ret@[???] */
  iVar2 = __isoc99_sscanf("123,456","%d,%d",&a,&b);
  if (iVar2 == 2) {
    iVar2 = b + a;
  }
  else {
    iVar2 = -1;
  }
  __printf_chk(1,&DAT_0001411b,iVar2);
                    /* Unresolved local var: int fd@[???]
                       Unresolved local var: FILE * fp@[???] */
  __stream = fopen("/etc/passwd","r");
  if (__stream != (FILE *)0x0) {
    iVar2 = fileno(__stream);
    fclose(__stream);
    uVar4 = 0x2a;
    if (-1 < iVar2) goto LAB_000128d4;
  }
  uVar4 = 0xffffffff;
LAB_000128d4:
  __printf_chk(1,&DAT_00014138,uVar4);
  iVar2 = param_fread_fwrite("/tmp/binbench_test.tmp");
  __printf_chk(1,&DAT_00014154,iVar2);
                    /* Unresolved local var: int * ptr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    free(__ptr);
    uVar4 = 0x5a;
  }
  __printf_chk(1,&DAT_00014170,uVar4);
  __printf_chk(1,&DAT_0001418c,0);
  __printf_chk(1,&DAT_000141a7,0xf);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_linux_syscall @ 000129a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_linux_syscall(char *pathname)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  lVar1 = syscall(5,pathname,0);
  if (-1 < lVar1) {
    syscall(6,lVar1,uVar3);
    return lVar1;
  }
                    /* Unresolved local var: int fd@[???] */
  piVar2 = __errno_location();
  return -*piVar2;
}



/* Function: call_linux_syscall @ 00012a00 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
                    /* Unresolved local var: int fd@[???] */
  uVar4 = 0;
  lVar1 = syscall(5,"/etc/passwd",0);
  if (-1 < lVar1) {
    syscall(6,lVar1,uVar4);
    return 0x2a;
  }
                    /* Unresolved local var: int fd@[???] */
  piVar2 = __errno_location();
  iVar3 = 0x2a;
  if (0 < *piVar2) {
    iVar3 = -1;
  }
  return iVar3;
}



/* Function: param_win32_api @ 00012a70 */

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



/* Function: call_win32_api @ 00012ae0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  stat st;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = stat("/etc/passwd",(stat *)&st);
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



/* Function: param_fork_exec @ 00012b50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_fork_exec(char *prog,char *arg)

{
  __pid_t _Var1;
  uint uVar2;
  int iVar3;
  int in_GS_OFFSET;
  uint uStack_30;
  int iVar4;
  int status;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  _Var1 = fork();
  if (_Var1 < 0) {
    uVar2 = 0xffffffff;
LAB_00012bb4:
    if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  if (_Var1 != 0) {
                    /* Unresolved local var: pid_t wpid@[???] */
    uStack_30 = 0x12b94;
    _Var1 = waitpid(_Var1,&status,0);
    uVar2 = 0xfffffffe;
    if ((-1 < _Var1) && (uVar2 = (uint)status >> 8 & 0xff, (status & 0x7fU) != 0)) {
      uVar2 = 0xfffffffd;
    }
    goto LAB_00012bb4;
  }
  param_fork_exec(prog,arg);
  iVar4 = *(int *)(in_GS_OFFSET + 0x14);
  _Var1 = fork();
  if (_Var1 < 0) {
LAB_00012c29:
    iVar3 = -1;
  }
  else {
    if (_Var1 == 0) {
      param_fork_exec("/bin/true",(char *)0x0);
      goto LAB_00012c59;
    }
    _Var1 = waitpid(_Var1,(int *)&uStack_30,0);
    if (((_Var1 < 0) || ((uStack_30 & 0x7f) != 0)) || ((char)(uStack_30 >> 8) != '\0'))
    goto LAB_00012c29;
    iVar3 = 0x2a;
  }
  if (iVar4 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar3;
  }
LAB_00012c59:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_fork_exec @ 00012be0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
  __pid_t _Var1;
  int iVar2;
  int in_GS_OFFSET;
  int status;
  int local_10;
  undefined4 uStack_8;
  
  uStack_8 = 0x12bea;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
                    /* Unresolved local var: pid_t pid@[???] */
  _Var1 = fork();
  if (_Var1 < 0) {
LAB_00012c29:
    iVar2 = -1;
  }
  else {
    if (_Var1 == 0) {
      param_fork_exec("/bin/true",(char *)0x0);
      goto LAB_00012c59;
    }
                    /* Unresolved local var: pid_t wpid@[???] */
    _Var1 = waitpid(_Var1,&status,0);
    if (((_Var1 < 0) || ((status & 0x7fU) != 0)) || ((char)((uint)status >> 8) != '\0'))
    goto LAB_00012c29;
    iVar2 = 0x2a;
  }
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar2;
  }
LAB_00012c59:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_pipe_communication @ 00012c60 */

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



/* Function: call_pipe_communication @ 00012d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  
  iVar1 = param_pipe_communication();
  return iVar1;
}



/* Function: param_socket_create @ 00012d70 */

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



/* Function: call_socket_create @ 00012ea0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  
  iVar1 = param_socket_create();
  return iVar1;
}



/* Function: param_shmget_shmat @ 00012eb0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  undefined4 *__shmaddr;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (-1 < iVar1) {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (-1 < __key) {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        return -2;
      }
      __shmaddr = shmat(iVar1,(void *)0x0,0);
      if (__shmaddr != (undefined4 *)0xffffffff) {
        *__shmaddr = 0x72616853;
        __shmaddr[1] = 0x654d6465;
        __shmaddr[2] = 0x79726f6d;
        *(undefined1 *)(__shmaddr + 3) = 0;
        shmdt(__shmaddr);
        shmctl(iVar1,0,(shmid_ds *)0x0);
        return 0xc;
      }
      return -3;
    }
  }
  return -1;
}



/* Function: call_shmget_shmat @ 00012f90 */

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



/* Function: param_signal_handling @ 00012fb0 */

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
                    /* Unresolved local var: int attempts@[???] */
        if (signal_received == 0) {
          iVar2 = 2000;
          do {
            usleep(1000);
            if (signal_received != 0) break;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        if ((signal_received == 0) || (signal_number != 0xe)) {
          iVar2 = -5;
        }
        else {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          iVar2 = 0x2a;
        }
      }
      else {
        iVar2 = -4;
      }
    }
  }
  return iVar2;
}



/* Function: call_signal_handling @ 00013110 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  int iVar1;
  
  iVar1 = param_signal_handling();
  return iVar1;
}



/* Function: test_system_calls @ 00013120 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
  long lVar1;
  __pid_t __pid;
  int iVar2;
  int in_GS_OFFSET;
  pthread_t pStack_88;
  uint uStack_84;
  void *pvStack_80;
  int iVar3;
  stat st;
  
  iVar3 = *(int *)(in_GS_OFFSET + 0x14);
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int fd@[???] */
  pvStack_80 = (void *)0x13153;
  puts(&DAT_000141e9);
  pvStack_80 = (void *)0x13160;
  lVar1 = syscall(5);
  if (lVar1 < 0) {
                    /* Unresolved local var: int fd@[???] */
    __errno_location();
  }
  else {
    pvStack_80 = (void *)0x13176;
    syscall(6);
  }
  pvStack_80 = (void *)0x13190;
  __printf_chk();
  pvStack_80 = (void *)0x1319d;
  stat("/etc/passwd",(stat *)&st);
  pvStack_80 = (void *)0x131cd;
  __printf_chk();
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: pid_t pid@[???] */
  pvStack_80 = (void *)0x131d2;
  __pid = fork();
  if (-1 < __pid) {
    if (__pid == 0) {
      param_fork_exec("/bin/true",(char *)0x0);
      iVar3 = *(int *)(in_GS_OFFSET + 0x14);
      uStack_84 = (uint)st.st_dev;
      iVar2 = pthread_create(&pStack_88,(pthread_attr_t *)0x0,thread_compute,&uStack_84);
      if (iVar2 == 0) {
        pthread_join(pStack_88,&pvStack_80);
        free(pvStack_80);
      }
      if (iVar3 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      return;
    }
                    /* Unresolved local var: pid_t wpid@[???] */
    pvStack_80 = (void *)0x131eb;
    waitpid(__pid,(int *)&st,0);
  }
  pvStack_80 = (void *)0x13215;
  __printf_chk();
  pvStack_80 = (void *)0x1321a;
  param_pipe_communication();
  pvStack_80 = (void *)0x1322c;
  __printf_chk();
  pvStack_80 = (void *)0x13231;
  param_socket_create();
  pvStack_80 = (void *)0x13243;
  __printf_chk();
                    /* Unresolved local var: int ret@[???] */
  pvStack_80 = (void *)0x13248;
  param_shmget_shmat();
  pvStack_80 = (void *)0x13269;
  __printf_chk();
  pvStack_80 = (void *)0x1326e;
  param_signal_handling();
  pvStack_80 = (void *)0x13280;
  __printf_chk();
  if (iVar3 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}



/* Function: param_pthread_create @ 000132f0 */

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
  undefined4 uStack_c;
  
  uStack_c = 0x132fb;
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



/* Function: call_pthread_create @ 00013380 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  int in_GS_OFFSET;
  pthread_t tid;
  int input;
  void *thread_ret;
  int local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x1338b;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: int result@[???] */
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
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_pthread_join @ 00013410 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  pthread_t *ppVar3;
  pthread_t *__newthread;
  ThreadData *__arg;
  ThreadData *pTVar4;
  int in_GS_OFFSET;
  pthread_t tids [3];
  ThreadData data [3];
  ThreadData local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x1341d;
  local_20.start = *(int *)(in_GS_OFFSET + 0x14);
  pTVar4 = data;
  data[0].start = 1;
  ppVar3 = tids;
  data[0].end = 10;
  data[0].result = 0;
  data[1].start = 0xb;
  data[1].end = 0x14;
  data[1].result = 0;
  data[2].start = 0x15;
  data[2].end = 0x1e;
  data[2].result = 0;
                    /* Unresolved local var: int i@[???] */
  __newthread = ppVar3;
  __arg = pTVar4;
  do {
    iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
    if (iVar1 != 0) {
      iVar1 = -1;
      goto LAB_000134e3;
    }
    __newthread = __newthread + 1;
    __arg = __arg + 1;
  } while (__arg != &local_20);
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    iVar2 = pthread_join(*ppVar3,(void **)0x0);
    if (iVar2 != 0) {
      iVar1 = -2;
      break;
    }
    iVar1 = iVar1 + pTVar4->result;
    ppVar3 = ppVar3 + 1;
    pTVar4 = pTVar4 + 1;
  } while (pTVar4 != &local_20);
LAB_000134e3:
  if (local_20.start == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_pthread_join @ 00013520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  
  iVar1 = param_pthread_join();
  return iVar1;
}



/* Function: param_mutex_lock @ 00013530 */

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



/* Function: call_mutex_lock @ 00013640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = param_mutex_lock(in_stack_00000004,in_stack_00000008);
  return iVar1;
}



/* Function: param_condition_variable @ 00013650 */

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
  undefined4 uStack_c;
  
  uStack_c = 0x1365b;
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
      iVar1 = -2;
      pthread_cancel(consumer);
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



/* Function: call_condition_variable @ 00013730 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  
  iVar1 = param_condition_variable();
  return iVar1;
}



/* Function: param_atomic_ops @ 00013740 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_atomic_ops(int thread_count,int iterations)

{
  atomic_int aVar1;
  pthread_t *__ptr;
  int iVar2;
  int iVar3;
  pthread_t *ppVar4;
  int in_GS_OFFSET;
  pthread_t load_store_tid;
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x1374d;
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
      ppVar4 = __ptr;
      do {
        iVar2 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_atomic_increment,&iterations);
        if (iVar2 != 0) {
          free(__ptr);
          iVar3 = -2;
          goto LAB_000137e4;
        }
        iVar3 = iVar3 + 1;
        ppVar4 = ppVar4 + 1;
      } while (thread_count != iVar3);
      iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
                             (void *)0x0);
      iVar3 = 0;
      if (iVar2 == 0) {
        pthread_join(load_store_tid,(void **)0x0);
      }
      do {
                    /* Unresolved local var: int i@[???] */
        ppVar4 = __ptr + iVar3;
        iVar3 = iVar3 + 1;
        pthread_join(*ppVar4,(void **)0x0);
      } while (iVar3 < thread_count);
    }
    aVar1 = atomic_counter;
    free(__ptr);
    iVar3 = 0x2a;
    if (aVar1 < 1) {
      iVar3 = -3;
    }
  }
LAB_000137e4:
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}



/* Function: call_atomic_ops @ 000138d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = param_atomic_ops(in_stack_00000004,in_stack_00000008);
  return iVar1;
}



/* Function: param_thread_local_storage @ 000138e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_thread_local_storage(int thread_count)

{
  pthread_t *__ptr;
  undefined4 *__ptr_00;
  void *pvVar1;
  int iVar2;
  int iVar3;
  pthread_t *__newthread;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int in_GS_OFFSET;
  bool bVar7;
  void *ret;
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x138ed;
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
        iVar5 = iVar3;
        pvVar1 = malloc(0x10);
        __ptr_00[iVar5] = pvVar1;
        __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar5);
        iVar3 = iVar5 + 1;
      } while (thread_count != iVar5 + 1);
      __newthread = __ptr;
      iVar3 = 0;
      do {
        iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
                               (void *)__ptr_00[iVar3]);
        if (iVar2 != 0) {
          puVar4 = __ptr_00;
          do {
                    /* Unresolved local var: int j@[???] */
            pvVar1 = (void *)*puVar4;
            puVar4 = puVar4 + 1;
            free(pvVar1);
          } while (__ptr_00 + iVar3 + 1 != puVar4);
          free(__ptr_00);
          free(__ptr);
          iVar3 = -2;
          goto LAB_00013a0b;
        }
                    /* Unresolved local var: int i@[???] */
        __newthread = __newthread + 1;
        bVar7 = iVar5 != iVar3;
        iVar3 = iVar3 + 1;
      } while (bVar7);
      iVar2 = 0;
      iVar3 = 0;
      iVar6 = 0;
      do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int * values@[???] */
        pthread_join(__ptr[iVar6],&ret);
        iVar3 = iVar3 + *(int *)ret;
        iVar2 = iVar2 + *(int *)((int)ret + 4);
        free(ret);
        free((void *)__ptr_00[iVar6]);
        bVar7 = iVar5 != iVar6;
        iVar6 = iVar6 + 1;
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
LAB_00013a0b:
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}



/* Function: call_thread_local_storage @ 00013ae0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = param_thread_local_storage(in_stack_00000004);
  return iVar1;
}



/* Function: test_thread_concurrency @ 00013af0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_GS_OFFSET;
  int iVar3;
  undefined *puVar4;
  pthread_t tid;
  int input;
  void *thread_ret;
  int local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x13afb;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_000142c8);
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
  __printf_chk(1,&DAT_000142e6,uVar2);
  iVar1 = param_pthread_join();
  puVar4 = &DAT_00014302;
  iVar3 = 1;
  __printf_chk(1,&DAT_00014302,iVar1);
  iVar1 = param_mutex_lock(iVar3,(int)puVar4);
  __printf_chk(1,&DAT_0001431f,iVar1);
  iVar1 = param_condition_variable();
  puVar4 = &DAT_0001433b;
  iVar3 = 1;
  __printf_chk(1,&DAT_0001433b,iVar1);
  iVar1 = param_atomic_ops(iVar3,(int)puVar4);
  iVar3 = 1;
  __printf_chk(1,&DAT_00014357,iVar1);
  iVar1 = param_thread_local_storage(iVar3);
  __printf_chk(1,&DAT_00014373,iVar1);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: __x86.get_pc_thunk.ax @ 00013c17 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00013c1b */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
  return;
}



/* Function: __stack_chk_fail_local @ 00013c20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00013c40 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00013c5a) */
/* WARNING: Removing unreachable block (ram,0x00013c70) */
/* WARNING: Removing unreachable block (ram,0x00013c7d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00013c8c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 82 */
