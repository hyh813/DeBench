/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/6/6_gcc_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00101388 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_001013a0 @ 001013a0 */

void FUN_001013a0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 001017c0 */

undefined8 main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: init_have_lse_atomics @ 001017e0 */

void init_have_lse_atomics(void)

{
  byte extraout_var;
  
  __getauxval(0x10);
  atomic_counter._4_1_ = extraout_var & 1;
  return;
}



/* Function: _start @ 00101840 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00101874 */

/* WARNING: Removing unreachable block (ram,0x00101884) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00101890 */

/* WARNING: Removing unreachable block (ram,0x001018a8) */
/* WARNING: Removing unreachable block (ram,0x001018b4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001018c0 */

/* WARNING: Removing unreachable block (ram,0x001018e4) */
/* WARNING: Removing unreachable block (ram,0x001018f0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001018fc @ 001018fc */

void FUN_001018fc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00101900 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: signal_handler @ 00101960 */

void signal_handler(undefined4 param_1)

{
  signal_received = 1;
  signal_number = param_1;
  return;
}



/* Function: thread_sum @ 00101980 */

undefined8 thread_sum(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar4 = *param_1;
  iVar2 = param_1[1];
  param_1[2] = 0;
  if (iVar2 < iVar4) {
    return 0;
  }
  uVar1 = (iVar2 - iVar4) + 1;
  if ((uint)(iVar2 - iVar4) < 8) {
    iVar6 = 0;
  }
  else {
    iVar5 = 0;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    uVar3 = 0;
    iVar6 = iVar4;
    iVar10 = iVar4 + 1;
    iVar11 = iVar4 + 2;
    iVar12 = iVar4 + 3;
    do {
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + iVar6;
      iVar7 = iVar7 + iVar10;
      iVar8 = iVar8 + iVar11;
      iVar9 = iVar9 + iVar12;
      iVar6 = iVar6 + 4;
      iVar10 = iVar10 + 4;
      iVar11 = iVar11 + 4;
      iVar12 = iVar12 + 4;
    } while (uVar1 >> 2 != uVar3);
    iVar6 = iVar5 + iVar7 + iVar8 + iVar9;
    iVar4 = iVar4 + (uVar1 & 0xfffffffc);
    iVar10 = iVar6;
    if (uVar1 == (uVar1 & 0xfffffffc)) goto LAB_00101a64;
  }
  iVar10 = iVar6 + iVar4;
  if (iVar4 + 1 <= iVar2) {
    iVar10 = iVar6 + iVar4 + iVar4 + 1;
    if (iVar4 + 2 <= iVar2) {
      iVar10 = iVar10 + iVar4 + 2;
      if (iVar4 + 3 <= iVar2) {
        iVar10 = iVar10 + iVar4 + 3;
        if (iVar4 + 4 <= iVar2) {
          iVar10 = iVar10 + iVar4 + 4;
          if (iVar4 + 5 <= iVar2) {
            iVar10 = iVar10 + iVar4 + 5;
            if (iVar4 + 6 <= iVar2) {
              iVar6 = iVar10 + iVar4 + 6;
              iVar10 = iVar6 + iVar4 + 7;
              if (iVar2 < iVar4 + 7) {
                iVar10 = iVar6;
              }
            }
          }
        }
      }
    }
  }
LAB_00101a64:
  param_1[2] = iVar10;
  return 0;
}



/* Function: thread_compute @ 00101a80 */

void thread_compute(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return;
}



/* Function: thread_increment @ 00101ab0 */

undefined8 thread_increment(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
      iVar2 = iVar2 + 1;
      shared_counter = shared_counter + 1;
      pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
      usleep(1000);
    } while (iVar1 != iVar2);
  }
  return 0;
}



/* Function: consumer_thread @ 00101b24 */

void consumer_thread(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  uVar1 = data;
  while (data = uVar1, ready == 0) {
    pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
    uVar1 = data;
  }
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  puVar2 = malloc(4);
  *puVar2 = uVar1;
  return;
}



/* Function: producer_thread @ 00101ba0 */

undefined8 producer_thread(void)

{
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  ready = 1;
  data = 0x2a;
  pthread_cond_signal((pthread_cond_t *)cond);
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  return 0;
}



/* Function: thread_atomic_increment @ 00101c00 */

undefined8 thread_atomic_increment(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      __aarch64_ldadd4_acq_rel(1,&atomic_counter);
      iVar1 = iVar3 + 1;
      __aarch64_cas4_acq_rel(iVar3,iVar3 + 1000,&atomic_counter);
      iVar3 = iVar1;
    } while (iVar2 != iVar1);
  }
  return 0;
}



/* Function: thread_atomic_load_store @ 00101c70 */

undefined8 thread_atomic_load_store(void)

{
  atomic_counter._0_4_ = (int)atomic_counter + 100;
  return 0;
}



/* Function: thread_tls_test @ 00101c90 */

void thread_tls_test(char *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = tpidr_el0;
  iVar2 = *(int *)(lVar3 + 0x10);
  iVar1 = iVar2 + 0x32;
  *(int *)(lVar3 + 0x10) = iVar1;
  strncpy((char *)(lVar3 + 0x20),param_1,0x1f);
  piVar4 = malloc(8);
  *piVar4 = iVar2;
  piVar4[1] = iVar1;
  return;
}



/* Function: param_fork_exec.part.0 @ 00101ce0 */

void param_fork_exec_part_0(char *param_1,undefined8 param_2)

{
  execl(param_1,param_1,param_2,0);
                    /* WARNING: Subroutine does not return */
  _exit(0x7f);
}



/* Function: param_thread_local_storage.constprop.0 @ 00101d00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_thread_local_storage_constprop_0(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  pthread_t *__ptr;
  void *__ptr_00;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  pthread_t *__newthread;
  int *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __ptr = malloc(0x20);
  __ptr_00 = malloc(0x20);
  if (__ptr == (pthread_t *)0x0 || __ptr_00 == (void *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar7 = 0;
    do {
      pvVar5 = malloc(0x10);
      *(void **)((long)__ptr_00 + uVar7 * 8) = pvVar5;
      uVar6 = uVar7 & 0xffffffff;
      uVar7 = uVar7 + 1;
      __snprintf_chk(pvVar5,0x10,1,0x10,"Thread-%d",uVar6);
    } while (uVar7 != 4);
    lVar9 = 0;
    __newthread = __ptr;
    do {
      iVar3 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
                             *(void **)((long)__ptr_00 + lVar9 * 8));
      if (iVar3 != 0) {
        lVar8 = 0;
        do {
          lVar1 = lVar8 * 8;
          lVar8 = lVar8 + 1;
          free(*(void **)((long)__ptr_00 + lVar1));
        } while ((int)lVar8 <= (int)lVar9);
        free(__ptr_00);
        free(__ptr);
        uVar4 = 0xfffffffe;
        goto LAB_00101e48;
      }
      lVar9 = lVar9 + 1;
      __newthread = __newthread + 1;
    } while (lVar9 != 4);
    iVar10 = 0;
    lVar9 = 0;
    iVar3 = 0;
    do {
      pthread_join(*(pthread_t *)((long)__ptr + lVar9),&local_10);
      iVar3 = iVar3 + *local_10;
      iVar10 = iVar10 + local_10[1];
      free(local_10);
      puVar2 = (undefined8 *)((long)__ptr_00 + lVar9);
      lVar9 = lVar9 + 8;
      free((void *)*puVar2);
    } while (lVar9 != 0x20);
    free(__ptr_00);
    free(__ptr);
    uVar4 = 0x2a;
    if (iVar3 != 400 || iVar10 != 600) {
      uVar4 = 0xfffffffd;
    }
  }
LAB_00101e48:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_atomic_ops.constprop.0 @ 00101ed0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_atomic_ops_constprop_0(void)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t *__ptr;
  pthread_t *ppVar3;
  long lVar4;
  undefined4 local_14;
  pthread_t local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14 = 500;
  __ptr = malloc(0x20);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    atomic_counter._0_4_ = 0;
    ppVar3 = __ptr;
    do {
      iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
      if (iVar1 != 0) {
        free(__ptr);
        uVar2 = 0xfffffffe;
        goto LAB_00101fc8;
      }
      ppVar3 = ppVar3 + 1;
    } while (__ptr + 4 != ppVar3);
    iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_10,(void **)0x0);
    }
    lVar4 = 0;
    do {
      ppVar3 = __ptr + lVar4;
      lVar4 = lVar4 + 1;
      pthread_join(*ppVar3,(void **)0x0);
      iVar1 = (int)atomic_counter;
    } while (lVar4 != 4);
    free(__ptr);
    uVar2 = 0x2a;
    if (iVar1 < 1) {
      uVar2 = 0xfffffffd;
    }
  }
LAB_00101fc8:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: param_mutex_lock.constprop.0 @ 00102030 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_mutex_lock_constprop_0(void)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t *__ptr;
  pthread_t *ppVar3;
  long lVar4;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = 1000;
  __ptr = malloc(0x20);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    ppVar3 = __ptr;
    do {
      iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_increment,&local_c);
      if (iVar1 != 0) {
        free(__ptr);
        uVar2 = 0xfffffffe;
        goto LAB_00102100;
      }
      ppVar3 = ppVar3 + 1;
    } while (__ptr + 4 != ppVar3);
    lVar4 = 0;
    do {
      ppVar3 = __ptr + lVar4;
      lVar4 = lVar4 + 1;
      pthread_join(*ppVar3,(void **)0x0);
    } while (lVar4 != 4);
    free(__ptr);
    uVar2 = 0x2a;
    if (shared_counter != local_c * 4) {
      uVar2 = 0xfffffffd;
    }
  }
LAB_00102100:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: param_strcpy @ 00102160 */

int param_strcpy(char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = stpcpy(param_1,param_2);
  return (int)pcVar1 - (int)param_1;
}



/* Function: call_strcpy @ 00102184 */

undefined8 call_strcpy(void)

{
  return 8;
}



/* Function: FUN_0010218c @ 0010218c */

int FUN_0010218c(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = strcmp(param_1,param_2);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: param_strcmp @ 00102190 */

int param_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = strcmp(param_1,param_2);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: call_strcmp @ 001021b0 */

undefined8 call_strcmp(void)

{
  return 0;
}



/* Function: param_strlen @ 001021c0 */

void param_strlen(char *param_1)

{
  strlen(param_1);
  return;
}



/* Function: call_strlen @ 001021d4 */

undefined8 call_strlen(void)

{
  return 0xc;
}



/* Function: FUN_001021dc @ 001021dc */

ulong FUN_001021dc(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_3 & 0xffffffff;
}



/* Function: param_memcpy @ 001021e0 */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 00102204 */

undefined8 call_memcpy(void)

{
  return 0x5a;
}



/* Function: FUN_0010220c @ 0010220c */

int FUN_0010220c(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = memcmp(param_1,param_2,param_3);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: param_memcmp @ 00102210 */

int param_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = memcmp(param_1,param_2,param_3);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: call_memcmp @ 00102230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_memcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = 0x200000001;
  local_20 = 4;
  local_30 = 3;
  local_28 = 0x200000001;
  local_18 = 0x200000001;
  local_10 = 3;
  iVar2 = memcmp(&local_38,&local_28,0xc);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar1 = 1;
  }
  iVar3 = memcmp(&local_38,&local_18,0xc);
  iVar2 = -(uint)(iVar3 != 0);
  if (0 < iVar3) {
    iVar2 = 1;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 + iVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_printf @ 00102300 */

void param_printf(undefined4 param_1,undefined8 param_2)

{
  __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
  return;
}



/* Function: call_printf @ 00102320 */

void call_printf(void)

{
  __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00103e60);
  return;
}



/* Function: FUN_0010233c @ 0010233c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010233c(undefined8 param_1)

{
  int iVar1;
  int iStack_10;
  int iStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = __isoc99_sscanf(param_1,"%d,%d",&iStack_10,&iStack_c,&__stack_chk_guard,0);
  if (iVar1 == 2) {
    iStack_10 = iStack_10 + iStack_c;
  }
  else {
    iStack_10 = -1;
  }
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iStack_10,&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
}



/* Function: param_scanf @ 00102340 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_scanf(undefined8 param_1)

{
  int iVar1;
  int local_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_10,&iStack_c,&__stack_chk_guard,0);
  if (iVar1 == 2) {
    local_10 = local_10 + iStack_c;
  }
  else {
    local_10 = -1;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_scanf @ 001023b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_scanf(void)

{
  int iVar1;
  int local_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_10,&iStack_c,&__stack_chk_guard,0);
  if (iVar1 == 2) {
    local_10 = local_10 + iStack_c;
  }
  else {
    local_10 = -1;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_fopen_fclose @ 00102430 */

int param_fopen_fclose(char *param_1)

{
  int iVar1;
  FILE *__stream;
  
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = fileno(__stream);
    fclose(__stream);
  }
  return iVar1;
}



/* Function: call_fopen_fclose @ 00102480 */

undefined8 call_fopen_fclose(void)

{
  int iVar1;
  FILE *__stream;
  
  __stream = fopen("/etc/passwd","r");
  if (__stream != (FILE *)0x0) {
    iVar1 = fileno(__stream);
    fclose(__stream);
    if (-1 < iVar1) {
      return 0x2a;
    }
  }
  return 0xffffffff;
}



/* Function: param_fread_fwrite @ 001024e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_fread_fwrite(char *param_1)

{
  FILE *__s;
  size_t sVar1;
  undefined8 uVar2;
  long local_28 [2];
  short local_18;
  char local_16;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar1 == 0x12) {
      rewind(__s);
      sVar1 = fread(local_28,1,0x12,__s);
      *(undefined1 *)((long)local_28 + sVar1) = 0;
      fclose(__s);
      unlink(param_1);
      if ((((sVar1 == 0x12) && (local_28[0] == 0x68636e65426e6942)) &&
          (local_28[1] == 0x6144207473655420)) && ((local_18 == 0x6174 && (local_16 == '\0')))) {
        uVar2 = 0x2a;
      }
      else {
        uVar2 = 0xfffffffd;
      }
    }
    else {
      fclose(__s);
      uVar2 = 0xfffffffe;
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_fread_fwrite @ 00102630 */

void call_fread_fwrite(void)

{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}



/* Function: FUN_0010263c @ 0010263c */

int FUN_0010263c(ulong param_1)

{
  int *__ptr;
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  __ptr = malloc(param_1 * 4);
  if (__ptr == (int *)0x0) {
    return -1;
  }
  if (param_1 != 0) {
    if (param_1 - 1 < 3) {
      uVar3 = 0;
    }
    else {
      piVar1 = __ptr;
      iVar5 = 1;
      iVar4 = 0;
      do {
        piVar2 = piVar1 + 4;
        *(ulong *)(piVar1 + 2) = CONCAT44((iVar5 + 2) * 10,(iVar4 + 2) * 10);
        *(ulong *)piVar1 = CONCAT44(iVar5 * 10,iVar4 * 10);
        piVar1 = piVar2;
        iVar5 = iVar5 + 4;
        iVar4 = iVar4 + 4;
      } while (__ptr + (param_1 & 0xfffffffffffffffc) != piVar2);
      uVar3 = param_1 & 0xfffffffffffffffc;
      if ((param_1 & 3) == 0) goto LAB_0010270c;
    }
    __ptr[uVar3] = (int)uVar3 * 10;
    if (uVar3 + 1 < param_1) {
      __ptr[uVar3 + 1] = (int)(uVar3 + 1) * 10;
      if (uVar3 + 2 < param_1) {
        __ptr[uVar3 + 2] = (int)(uVar3 + 2) * 10;
      }
    }
  }
LAB_0010270c:
  iVar5 = *__ptr;
  iVar4 = __ptr[param_1 - 1];
  free(__ptr);
  return iVar4 + iVar5;
}



/* Function: param_malloc_free @ 00102640 */

int param_malloc_free(ulong param_1)

{
  int *__ptr;
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  __ptr = malloc(param_1 * 4);
  if (__ptr == (int *)0x0) {
    return -1;
  }
  if (param_1 != 0) {
    if (param_1 - 1 < 3) {
      uVar3 = 0;
    }
    else {
      piVar1 = __ptr;
      iVar5 = 1;
      iVar4 = 0;
      do {
        piVar2 = piVar1 + 4;
        *(ulong *)(piVar1 + 2) = CONCAT44((iVar5 + 2) * 10,(iVar4 + 2) * 10);
        *(ulong *)piVar1 = CONCAT44(iVar5 * 10,iVar4 * 10);
        piVar1 = piVar2;
        iVar5 = iVar5 + 4;
        iVar4 = iVar4 + 4;
      } while (__ptr + (param_1 & 0xfffffffffffffffc) != piVar2);
      uVar3 = param_1 & 0xfffffffffffffffc;
      if ((param_1 & 3) == 0) goto LAB_0010270c;
    }
    __ptr[uVar3] = (int)uVar3 * 10;
    if (uVar3 + 1 < param_1) {
      __ptr[uVar3 + 1] = (int)(uVar3 + 1) * 10;
      if (uVar3 + 2 < param_1) {
        __ptr[uVar3 + 2] = (int)(uVar3 + 2) * 10;
      }
    }
  }
LAB_0010270c:
  iVar5 = *__ptr;
  iVar4 = __ptr[param_1 - 1];
  free(__ptr);
  return iVar4 + iVar5;
}



/* Function: call_malloc_free @ 00102740 */

undefined8 call_malloc_free(void)

{
  void *__ptr;
  undefined8 uVar1;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    free(__ptr);
    uVar1 = 0x5a;
  }
  return uVar1;
}



/* Function: FUN_0010276c @ 0010276c */

int FUN_0010276c(undefined8 *param_1,size_t param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar3;
  
  memset(param_1,0,param_2);
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 - 1 < 0xf) {
    uVar1 = 0;
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 2;
      uVar12 = puVar2[1];
      uVar11 = *puVar2;
      bVar5 = (byte)((ulong)uVar11 >> 0x28);
      bVar4 = (byte)((ulong)uVar12 >> 8);
      bVar6 = (byte)((ulong)uVar12 >> 0x28);
      iVar7 = iVar7 + ((uint)uVar11 & 0xff) +
              (CONCAT12(bVar5,(ushort)(byte)((ulong)uVar11 >> 0x20)) & 0xffff) +
              ((CONCAT12(bVar4,(short)uVar12) & 0xff00ff) & 0xffff) +
              (CONCAT12(bVar6,(ushort)(byte)((ulong)uVar12 >> 0x20)) & 0xffff);
      iVar8 = iVar8 + (uint)(byte)((ulong)uVar11 >> 8) + (uint)bVar5 + (uint)bVar4 + (uint)bVar6;
      iVar9 = iVar9 + (uint)(byte)((ulong)uVar11 >> 0x10) + (uint)(byte)((ulong)uVar11 >> 0x30) +
              (uint)(byte)((ulong)uVar12 >> 0x10) + (uint)(byte)((ulong)uVar12 >> 0x30);
      iVar10 = iVar10 + (uint)(byte)((ulong)uVar11 >> 0x18) + (uint)(byte)((ulong)uVar11 >> 0x38) +
               (uint)(byte)((ulong)uVar12 >> 0x18) + (uint)(byte)((ulong)uVar12 >> 0x38);
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)((param_2 & 0xfffffffffffffff0) + (long)param_1));
    iVar7 = iVar7 + iVar8 + iVar9 + iVar10;
    uVar1 = param_2 & 0xfffffffffffffff0;
    if ((param_2 & 0xf) == 0) {
      return iVar7;
    }
  }
  iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1);
  if (uVar1 + 1 < param_2) {
    iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 1);
    if (uVar1 + 2 < param_2) {
      iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 2);
      if (uVar1 + 3 < param_2) {
        iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 3);
        if (uVar1 + 4 < param_2) {
          iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 4);
          if (uVar1 + 5 < param_2) {
            iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 5);
            if (uVar1 + 6 < param_2) {
              iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 6);
              if (uVar1 + 7 < param_2) {
                iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 7);
                if (uVar1 + 8 < param_2) {
                  iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 8);
                  if (uVar1 + 9 < param_2) {
                    iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 9);
                    if (uVar1 + 10 < param_2) {
                      iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 10);
                      if (uVar1 + 0xb < param_2) {
                        iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xb);
                        if (uVar1 + 0xc < param_2) {
                          iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xc);
                          if (uVar1 + 0xd < param_2) {
                            iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xd);
                            if (uVar1 + 0xe < param_2) {
                              iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xe);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar7;
}



/* Function: param_memset @ 00102770 */

int param_memset(undefined8 *param_1,size_t param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar3;
  
  memset(param_1,0,param_2);
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 - 1 < 0xf) {
    uVar1 = 0;
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 2;
      uVar12 = puVar2[1];
      uVar11 = *puVar2;
      bVar5 = (byte)((ulong)uVar11 >> 0x28);
      bVar4 = (byte)((ulong)uVar12 >> 8);
      bVar6 = (byte)((ulong)uVar12 >> 0x28);
      iVar7 = iVar7 + ((uint)uVar11 & 0xff) +
              (CONCAT12(bVar5,(ushort)(byte)((ulong)uVar11 >> 0x20)) & 0xffff) +
              ((CONCAT12(bVar4,(short)uVar12) & 0xff00ff) & 0xffff) +
              (CONCAT12(bVar6,(ushort)(byte)((ulong)uVar12 >> 0x20)) & 0xffff);
      iVar8 = iVar8 + (uint)(byte)((ulong)uVar11 >> 8) + (uint)bVar5 + (uint)bVar4 + (uint)bVar6;
      iVar9 = iVar9 + (uint)(byte)((ulong)uVar11 >> 0x10) + (uint)(byte)((ulong)uVar11 >> 0x30) +
              (uint)(byte)((ulong)uVar12 >> 0x10) + (uint)(byte)((ulong)uVar12 >> 0x30);
      iVar10 = iVar10 + (uint)(byte)((ulong)uVar11 >> 0x18) + (uint)(byte)((ulong)uVar11 >> 0x38) +
               (uint)(byte)((ulong)uVar12 >> 0x18) + (uint)(byte)((ulong)uVar12 >> 0x38);
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)((param_2 & 0xfffffffffffffff0) + (long)param_1));
    iVar7 = iVar7 + iVar8 + iVar9 + iVar10;
    uVar1 = param_2 & 0xfffffffffffffff0;
    if ((param_2 & 0xf) == 0) {
      return iVar7;
    }
  }
  iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1);
  if (uVar1 + 1 < param_2) {
    iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 1);
    if (uVar1 + 2 < param_2) {
      iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 2);
      if (uVar1 + 3 < param_2) {
        iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 3);
        if (uVar1 + 4 < param_2) {
          iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 4);
          if (uVar1 + 5 < param_2) {
            iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 5);
            if (uVar1 + 6 < param_2) {
              iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 6);
              if (uVar1 + 7 < param_2) {
                iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 7);
                if (uVar1 + 8 < param_2) {
                  iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 8);
                  if (uVar1 + 9 < param_2) {
                    iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 9);
                    if (uVar1 + 10 < param_2) {
                      iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 10);
                      if (uVar1 + 0xb < param_2) {
                        iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xb);
                        if (uVar1 + 0xc < param_2) {
                          iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xc);
                          if (uVar1 + 0xd < param_2) {
                            iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xd);
                            if (uVar1 + 0xe < param_2) {
                              iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xe);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar7;
}



/* Function: call_memset @ 00102930 */

undefined8 call_memset(void)

{
  return 0;
}



/* Function: param_strchr_strstr @ 00102940 */

int param_strchr_strstr(char *param_1,uint param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = strchr(param_1,param_2 & 0xff);
  iVar1 = -1;
  if (pcVar3 != (char *)0x0) {
    iVar1 = (int)pcVar3 - (int)param_1;
  }
  pcVar3 = strstr(param_1,param_3);
  iVar2 = -1;
  if (pcVar3 != (char *)0x0) {
    iVar2 = (int)pcVar3 - (int)param_1;
  }
  return iVar1 + iVar2;
}



/* Function: call_strchr_strstr @ 001029a0 */

undefined8 call_strchr_strstr(void)

{
  return 0xf;
}



/* Function: test_standard_library_functions @ 001029b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_standard_library_functions(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  FILE *__stream;
  void *__ptr;
  undefined8 uVar5;
  int local_40;
  int iStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puts(&DAT_00103ec8);
  __printf_chk(1,&DAT_00103ef0,8);
  __printf_chk(1,&DAT_00103f10,0);
  __printf_chk(1,&DAT_00103f30,0xc);
  __printf_chk(1,&DAT_00103f50,0x5a);
  local_38 = 0x200000001;
  local_20 = 4;
  local_30 = 3;
  local_28 = 0x200000001;
  local_18 = 0x200000001;
  local_10 = 3;
  iVar1 = memcmp(&local_38,&local_28,0xc);
  iVar4 = -(uint)(iVar1 != 0);
  if (0 < iVar1) {
    iVar4 = 1;
  }
  iVar2 = memcmp(&local_38,&local_18,0xc);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar1 = 1;
  }
  __printf_chk(1,&DAT_00103f70,iVar1 + iVar4);
  uVar3 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00103e60);
  __printf_chk(1,&DAT_00103f90,uVar3);
  iVar4 = __isoc99_sscanf("123,456","%d,%d",&local_40,&iStack_3c);
  if (iVar4 == 2) {
    local_40 = local_40 + iStack_3c;
  }
  else {
    local_40 = -1;
  }
  __printf_chk(1,&DAT_00103fb0,local_40);
  __stream = fopen("/etc/passwd","r");
  if (__stream != (FILE *)0x0) {
    iVar4 = fileno(__stream);
    fclose(__stream);
    uVar5 = 0x2a;
    if (-1 < iVar4) goto LAB_00102b58;
  }
  uVar5 = 0xffffffff;
LAB_00102b58:
  __printf_chk(1,&DAT_00103fd0,uVar5);
  uVar3 = param_fread_fwrite("/tmp/binbench_test.tmp");
  __printf_chk(1,&DAT_00103ff0,uVar3);
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    free(__ptr);
    uVar5 = 0x5a;
  }
  __printf_chk(1,&DAT_00104010,uVar5);
  __printf_chk(1,&DAT_00104030,0);
  if (local_8 - ___stack_chk_guard == 0) {
    __printf_chk(1,&DAT_00104050,0xf);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_linux_syscall @ 00102c20 */

ulong param_linux_syscall(undefined8 param_1)

{
  ulong uVar1;
  int *piVar2;
  
  uVar1 = syscall(0x38,0xffffff9c,param_1,0);
  if (-1 < (int)uVar1) {
    syscall(0x39,uVar1 & 0xffffffff);
    return uVar1 & 0xffffffff;
  }
  piVar2 = __errno_location();
  return (ulong)(uint)-*piVar2;
}



/* Function: call_linux_syscall @ 00102c80 */

undefined4 call_linux_syscall(void)

{
  ulong uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar1 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
  if (-1 < (int)uVar1) {
    syscall(0x39,uVar1 & 0xffffffff);
    return 0x2a;
  }
  piVar2 = __errno_location();
  uVar3 = 0x2a;
  if (0 < *piVar2) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* Function: param_win32_api @ 00102ce0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_win32_api(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = stat(param_1,(stat *)&stack0xffffffffffffff78);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
    if (local_58 < 1) {
      uVar2 = 0xfffffffe;
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: FUN_00102d4c @ 00102d4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00102d4c(void)

{
  int iVar1;
  undefined4 uVar2;
  long lStack_58;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = stat("/etc/passwd",(stat *)&stack0xffffffffffffff78);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
    if (lStack_58 < 1) {
      uVar2 = 0xfffffffe;
    }
  }
  if (lStack_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: call_win32_api @ 00102d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_win32_api(void)

{
  int iVar1;
  undefined4 uVar2;
  long local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = stat("/etc/passwd",(stat *)&stack0xffffffffffffff78);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
    if (local_58 < 1) {
      uVar2 = 0xfffffffe;
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: param_fork_exec @ 00102dc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_fork_exec(undefined8 param_1,undefined8 param_2)

{
  __pid_t _Var1;
  uint uVar2;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _Var1 = fork();
  if (_Var1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (_Var1 == 0) {
                    /* WARNING: Subroutine does not return */
      param_fork_exec_part_0(param_1,param_2);
    }
    _Var1 = waitpid(_Var1,(int *)&local_c,0);
    uVar2 = 0xfffffffe;
    if ((-1 < _Var1) && (uVar2 = local_c >> 8 & 0xff, (local_c & 0x7f) != 0)) {
      uVar2 = 0xfffffffd;
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: call_fork_exec @ 00102e70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_fork_exec(void)

{
  __pid_t _Var1;
  undefined8 uVar2;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _Var1 = fork();
  if (-1 < _Var1) {
    if (_Var1 == 0) {
                    /* WARNING: Subroutine does not return */
      param_fork_exec_part_0("/bin/true",0);
    }
    _Var1 = waitpid(_Var1,(int *)&local_c,0);
    if (((-1 < _Var1) && ((local_c & 0x7f) == 0)) && (uVar2 = 0x2a, (local_c & 0xff00) == 0))
    goto LAB_00102ebc;
  }
  uVar2 = 0xffffffff;
LAB_00102ebc:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: param_pipe_communication @ 00102f04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  undefined4 uVar3;
  ssize_t sVar4;
  int local_30;
  int local_2c;
  undefined1 auStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = pipe(&local_30);
  if (iVar1 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    _Var2 = fork();
    if (_Var2 < 0) {
      uVar3 = 0xfffffffe;
    }
    else {
      if (_Var2 == 0) {
        close(local_30);
        write(local_2c,"HelloPipe",9);
        close(local_2c);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(local_2c);
      sVar4 = read(local_30,auStack_28,0x1f);
      auStack_28[sVar4] = 0;
      close(local_30);
      wait((void *)0x0);
      uVar3 = 0x2a;
      if (sVar4 < 1) {
        uVar3 = 0xfffffffd;
      }
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: param_socket_create @ 00102ff4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_socket_create(void)

{
  int __fd;
  int iVar1;
  undefined8 uVar2;
  undefined4 local_1c;
  sockaddr local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __fd = socket(2,1,0);
  if (__fd < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_1c = 1;
    iVar1 = setsockopt(__fd,1,2,&local_1c,4);
    if (iVar1 < 0) {
      close(__fd);
      uVar2 = 0xfffffffe;
    }
    else {
      local_18.sa_data[6] = '\0';
      local_18.sa_data[7] = '\0';
      local_18.sa_data[8] = '\0';
      local_18.sa_data[9] = '\0';
      local_18.sa_data[10] = '\0';
      local_18.sa_data[0xb] = '\0';
      local_18.sa_data[0xc] = '\0';
      local_18.sa_data[0xd] = '\0';
      local_18.sa_family = 2;
      local_18.sa_data[0] = '\0';
      local_18.sa_data[1] = '\0';
      local_18.sa_data[2] = '\0';
      local_18.sa_data[3] = '\0';
      local_18.sa_data[4] = '\0';
      local_18.sa_data[5] = '\0';
      iVar1 = bind(__fd,&local_18,0x10);
      if (iVar1 < 0) {
        close(__fd);
        uVar2 = 0xfffffffd;
      }
      else {
        iVar1 = listen(__fd,5);
        if (iVar1 < 0) {
          close(__fd);
          uVar2 = 0xfffffffc;
        }
        else {
          close(__fd);
          uVar2 = 0x2a;
        }
      }
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_shmget_shmat @ 00103104 */

undefined8 param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__shmaddr;
  
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (-1 < iVar1) {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (-1 < __key) {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        return 0xfffffffe;
      }
      __shmaddr = shmat(iVar1,(void *)0x0,0);
      if (__shmaddr != (char *)0xffffffffffffffff) {
        builtin_strncpy(__shmaddr,"SharedMemory",0xd);
        shmdt(__shmaddr);
        shmctl(iVar1,0,(shmid_ds *)0x0);
        return 0xc;
      }
      return 0xfffffffd;
    }
  }
  return 0xffffffff;
}



/* Function: FUN_001031bc @ 001031bc */

undefined4 FUN_001031bc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_shmget_shmat();
  uVar2 = 0x2a;
  if (iVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: call_shmget_shmat @ 001031c0 */

undefined4 call_shmget_shmat(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_shmget_shmat();
  uVar2 = 0x2a;
  if (iVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: param_signal_handling @ 001031e0 */

__sighandler_t param_signal_handling(void)

{
  __sighandler_t p_Var1;
  int iVar2;
  
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 != (__sighandler_t)0xffffffffffffffff) {
    p_Var1 = signal(0xe,signal_handler);
    if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
      p_Var1 = (__sighandler_t)0xfffffffe;
    }
    else {
      signal_received = 0;
      raise(10);
      if (signal_received == 0) {
        iVar2 = 1000;
        do {
          usleep(1000);
          iVar2 = iVar2 + -1;
          if (signal_received != 0) break;
        } while (iVar2 != 0);
      }
      if (signal_received == 0) {
        p_Var1 = (__sighandler_t)0xfffffffd;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        if (signal_received == 0) {
          iVar2 = 2000;
          do {
            usleep(1000);
            iVar2 = iVar2 + -1;
            if (signal_received != 0) break;
          } while (iVar2 != 0);
        }
        if ((signal_received == 0) || (signal_number != 0xe)) {
          p_Var1 = (__sighandler_t)0xfffffffb;
        }
        else {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          p_Var1 = (__sighandler_t)0x2a;
        }
      }
      else {
        p_Var1 = (__sighandler_t)0xfffffffc;
      }
    }
  }
  return p_Var1;
}



/* Function: test_system_calls @ 00103304 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_system_calls(void)

{
  int iVar1;
  __pid_t _Var2;
  undefined4 uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  uint local_8c;
  long local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puts(&DAT_001040b8);
  uVar4 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
  if ((int)uVar4 < 0) {
    piVar5 = __errno_location();
    uVar3 = 0x2a;
    if (0 < *piVar5) {
      uVar3 = 0xffffffff;
    }
  }
  else {
    syscall(0x39,uVar4 & 0xffffffff);
    uVar3 = 0x2a;
  }
  __printf_chk(1,&DAT_001040d8,uVar3);
  iVar1 = stat("/etc/passwd",(stat *)&stack0xffffffffffffff78);
  if (iVar1 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0x2a;
    if (local_58 < 1) {
      uVar3 = 0xfffffffe;
    }
  }
  __printf_chk(1,&DAT_001040f8,uVar3);
  _Var2 = fork();
  if (-1 < _Var2) {
    if (_Var2 == 0) {
                    /* WARNING: Subroutine does not return */
      param_fork_exec_part_0("/bin/true",0);
    }
    _Var2 = waitpid(_Var2,(int *)&local_8c,0);
    if (((-1 < _Var2) && ((local_8c & 0x7f) == 0)) && (uVar6 = 0x2a, (local_8c & 0xff00) == 0))
    goto LAB_001033d0;
  }
  uVar6 = 0xffffffff;
LAB_001033d0:
  __printf_chk(1,&DAT_00104118,uVar6);
  uVar3 = param_pipe_communication();
  __printf_chk(1,&DAT_00104138,uVar3);
  uVar3 = param_socket_create();
  __printf_chk(1,&DAT_00104158,uVar3);
  iVar1 = param_shmget_shmat();
  uVar3 = 0x2a;
  if (iVar1 < 1) {
    uVar3 = 0xffffffff;
  }
  __printf_chk(1,&DAT_00104178,uVar3);
  uVar3 = param_signal_handling();
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,&__stack_chk_guard,uVar3,0);
  }
  __printf_chk(1,&DAT_00104198);
  return;
}



/* Function: param_pthread_create @ 001034b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_pthread_create(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  pthread_t local_18;
  undefined4 *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1c = param_1;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
  if (iVar1 == 0) {
    pthread_join(local_18,&local_10);
    uVar2 = *local_10;
    free(local_10);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_pthread_create @ 00103544 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_pthread_create(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  pthread_t local_18;
  undefined4 *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1c = 7;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
  if (iVar1 == 0) {
    pthread_join(local_18,&local_10);
    uVar2 = *local_10;
    free(local_10);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_pthread_join @ 001035e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_pthread_join(void)

{
  long lVar1;
  int iVar2;
  pthread_t *__newthread;
  long lVar3;
  pthread_t *__arg;
  pthread_t *ppVar4;
  int iVar5;
  pthread_t local_48 [4];
  int aiStack_28 [8];
  long local_8;
  
  __arg = local_48 + 3;
  iVar5 = 3;
  ppVar4 = local_48;
  local_8 = ___stack_chk_guard;
  aiStack_28[6] = 0;
  aiStack_28[0] = 0;
  aiStack_28[1] = 0xb;
  local_48[3] = 0xa00000001;
  aiStack_28[4] = 0x15;
  aiStack_28[5] = 0x1e;
  aiStack_28[2] = 0x14;
  aiStack_28[3] = 0;
  __newthread = ppVar4;
  do {
    iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
    if (iVar2 != 0) {
      iVar5 = -1;
      goto LAB_001036a0;
    }
    __newthread = __newthread + 1;
    __arg = (pthread_t *)((long)__arg + 0xc);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 0;
  lVar3 = 0;
  do {
    iVar2 = pthread_join(*ppVar4,(void **)0x0);
    if (iVar2 != 0) {
      iVar5 = -2;
      break;
    }
    lVar1 = lVar3 + 0xc;
    ppVar4 = ppVar4 + 1;
    iVar5 = iVar5 + *(int *)((long)aiStack_28 + lVar3);
    lVar3 = lVar1;
  } while (lVar1 != 0x24);
LAB_001036a0:
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_mutex_lock @ 001036f4 */

undefined4 param_mutex_lock(ulong param_1,int param_2)

{
  pthread_t *ppVar1;
  int iVar2;
  undefined4 uVar3;
  pthread_t *__ptr;
  pthread_t *ppVar4;
  pthread_t *ppVar5;
  int local_4;
  
  local_4 = param_2;
  __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3);
  if (__ptr == (pthread_t *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    if (0 < (int)param_1) {
      ppVar4 = __ptr;
      do {
        ppVar1 = ppVar4 + 1;
        iVar2 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_increment,&local_4);
        if (iVar2 != 0) {
          free(__ptr);
          return 0xfffffffe;
        }
        ppVar4 = ppVar1;
        ppVar5 = __ptr;
      } while (ppVar1 != __ptr + (param_1 & 0xffffffff));
      do {
        ppVar4 = ppVar5 + 1;
        pthread_join(*ppVar5,(void **)0x0);
        ppVar5 = ppVar4;
      } while (ppVar4 != __ptr + (param_1 & 0xffffffff));
    }
    free(__ptr);
    uVar3 = 0x2a;
    if (shared_counter != (int)param_1 * local_4) {
      uVar3 = 0xfffffffd;
    }
  }
  return uVar3;
}



/* Function: param_condition_variable @ 00103804 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_condition_variable(void)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t local_20;
  pthread_t local_18;
  undefined4 *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_18,&local_10);
      pthread_join(local_20,(void **)0x0);
      uVar2 = *local_10;
      free(local_10);
    }
    else {
      uVar2 = 0xfffffffe;
      pthread_cancel(local_18);
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_atomic_ops @ 001038e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_atomic_ops(ulong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t *__ptr;
  pthread_t *ppVar3;
  long lVar4;
  undefined4 local_14;
  pthread_t local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14 = param_2;
  __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3);
  if (__ptr == (pthread_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    atomic_counter._0_4_ = 0;
    if ((int)param_1 < 1) {
      iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
      if (iVar1 == 0) {
        pthread_join(local_10,(void **)0x0);
      }
    }
    else {
      ppVar3 = __ptr;
      do {
        iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
        if (iVar1 != 0) {
          free(__ptr);
          uVar2 = 0xfffffffe;
          goto LAB_00103994;
        }
        ppVar3 = ppVar3 + 1;
      } while (ppVar3 != __ptr + (param_1 & 0xffffffff));
      iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
      if (iVar1 == 0) {
        pthread_join(local_10,(void **)0x0);
      }
      lVar4 = 0;
      do {
        ppVar3 = __ptr + lVar4;
        lVar4 = lVar4 + 1;
        pthread_join(*ppVar3,(void **)0x0);
      } while ((int)lVar4 < (int)param_1);
    }
    iVar1 = (int)atomic_counter;
    free(__ptr);
    uVar2 = 0x2a;
    if (iVar1 < 1) {
      uVar2 = 0xfffffffd;
    }
  }
LAB_00103994:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: param_thread_local_storage @ 00103a84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_thread_local_storage(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  pthread_t *__ptr;
  undefined8 *__ptr_00;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  pthread_t *__newthread;
  long lVar8;
  int iVar9;
  ulong uVar10;
  int *local_10;
  long local_8;
  undefined8 *puVar7;
  
  uVar10 = (ulong)(int)param_1;
  local_8 = ___stack_chk_guard;
  uVar5 = -(uVar10 >> 0x1f & 1) & 0xfffffff800000000 | (ulong)param_1 << 3;
  __ptr = malloc(uVar5);
  __ptr_00 = malloc(uVar5);
  if (__ptr == (pthread_t *)0x0 || __ptr_00 == (undefined8 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((int)param_1 < 1) {
      iVar9 = 0;
      iVar1 = 0;
    }
    else {
      uVar5 = 0;
      do {
        pvVar3 = malloc(0x10);
        __ptr_00[uVar5] = pvVar3;
        uVar4 = uVar5 & 0xffffffff;
        uVar5 = uVar5 + 1;
        __snprintf_chk(pvVar3,0x10,1,0x10,"Thread-%d",uVar4);
      } while (uVar5 != uVar10);
      uVar5 = 0;
      __newthread = __ptr;
      do {
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
                               (void *)__ptr_00[uVar5]);
        if (iVar1 != 0) {
          puVar6 = __ptr_00;
          do {
            puVar7 = puVar6 + 1;
            free((void *)*puVar6);
            puVar6 = puVar7;
          } while (__ptr_00 + uVar5 + 1 != puVar7);
          free(__ptr_00);
          free(__ptr);
          uVar2 = 0xfffffffe;
          goto LAB_00103ba0;
        }
        uVar5 = uVar5 + 1;
        __newthread = __newthread + 1;
      } while (uVar5 != uVar10);
      iVar9 = 0;
      lVar8 = 0;
      iVar1 = 0;
      do {
        pthread_join(*(pthread_t *)((long)__ptr + lVar8),&local_10);
        iVar1 = iVar1 + *local_10;
        iVar9 = iVar9 + local_10[1];
        free(local_10);
        puVar6 = (undefined8 *)((long)__ptr_00 + lVar8);
        lVar8 = lVar8 + 8;
        free((void *)*puVar6);
      } while (uVar5 * 8 - lVar8 != 0);
    }
    free(__ptr_00);
    free(__ptr);
    uVar2 = 0x2a;
    if (param_1 * 100 != iVar1 || param_1 * 0x96 != iVar9) {
      uVar2 = 0xfffffffd;
    }
  }
LAB_00103ba0:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: test_thread_concurrency @ 00103c74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_thread_concurrency(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  pthread_t local_18;
  undefined4 *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puts(&DAT_001041b8);
  local_1c = 7;
  iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
  if (iVar1 == 0) {
    pthread_join(local_18,&local_10);
    uVar2 = *local_10;
    free(local_10);
  }
  else {
    uVar2 = 0xffffffff;
  }
  __printf_chk(1,&DAT_001041d8,uVar2);
  uVar2 = param_pthread_join();
  __printf_chk(1,&DAT_001041f8,uVar2);
  uVar2 = param_mutex_lock_constprop_0();
  __printf_chk(1,&DAT_00104218,uVar2);
  uVar2 = param_condition_variable();
  __printf_chk(1,&DAT_00104238,uVar2);
  uVar2 = param_atomic_ops_constprop_0();
  __printf_chk(1,&DAT_00104258,uVar2);
  uVar2 = param_thread_local_storage_constprop_0();
  if (local_8 - ___stack_chk_guard == 0) {
    __printf_chk(1,&DAT_00104278);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,&__stack_chk_guard,uVar2,0);
}



/* Function: __aarch64_cas4_acq_rel @ 00103da0 */

int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (atomic_counter._4_1_ != '\0') {
    iVar3 = *param_3;
    if (iVar3 == param_1) {
      *param_3 = param_2;
    }
    return iVar3;
  }
  do {
    iVar3 = *param_3;
    if (*param_3 != param_1) {
      return iVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00103de0 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (atomic_counter._4_1_ == '\0') {
    do {
      iVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = iVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return iVar3;
  }
  LOAcquire();
  iVar3 = *param_2;
  *param_2 = iVar3 + param_1;
  LORelease();
  return iVar3;
}



/* Function: _fini @ 00103e10 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 79 */
