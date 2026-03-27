/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/6/6_gcc_O0_no_g
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



/* Function: param_strcpy @ 00011921 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void param_strcpy(char *param_1,char *param_2)

{
  strcpy(param_1,param_2);
  strlen(param_1);
  return;
}



/* Function: call_strcpy @ 0001195b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_strcpy(void)

{
  undefined4 uVar1;
  int in_GS_OFFSET;
  undefined1 local_30 [32];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  uVar1 = param_strcpy(local_30,"HelloLib");
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}



/* Function: param_strcmp @ 000119aa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 param_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,param_2);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Function: call_strcmp @ 000119f9 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_strcmp(&DAT_00014015,&DAT_00014011);
  iVar2 = param_strcmp(&DAT_00014019,&DAT_00014019);
  iVar3 = param_strcmp(&DAT_00014021,&DAT_0001401d);
  return iVar3 + iVar1 + iVar2;
}



/* Function: param_strlen @ 00011a75 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

size_t param_strlen(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  return sVar1;
}



/* Function: call_strlen @ 00011aa5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_strlen(void)

{
  param_strlen("BinBench2025");
  return;
}



/* Function: param_memcpy @ 00011ad2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_3;
}



/* Function: call_memcpy @ 00011b05 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_memcpy(void)

{
  int iVar1;
  int in_GS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24 [8];
  
  local_24[5] = *(int *)(in_GS_OFFSET + 0x14);
  local_38 = 10;
  local_34 = 0x14;
  local_30 = 0x1e;
  local_2c = 0x28;
  local_28 = 0x32;
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[4] = 0;
  param_memcpy(local_24,&local_38,0x14,0x11b14);
  iVar1 = local_24[4] + local_24[0] + local_24[2];
  if (local_24[5] != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: param_memcmp @ 00011b9f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 param_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = memcmp(param_1,param_2,param_3);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Function: call_memcmp @ 00011bf1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_34 = 1;
  local_30 = 2;
  local_2c = 3;
  local_28 = 1;
  local_24 = 2;
  local_20 = 4;
  local_1c = 1;
  local_18 = 2;
  local_14 = 3;
  iVar1 = param_memcmp(&local_34,&local_28,0xc,0x11c00);
  iVar2 = param_memcmp(&local_34,&local_1c,0xc);
  iVar2 = iVar2 + iVar1;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: param_printf @ 00011c9a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_printf(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = printf("Value: %d, Name: %s\n",param_1,param_2);
  return iVar1;
}



/* Function: call_printf @ 00011cd4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_printf(void)

{
  undefined4 uVar1;
  
  uVar1 = param_printf(0x2a,&DAT_00014047);
  return uVar1;
}



/* Function: param_scanf @ 00011d04 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_scanf(undefined4 param_1)

{
  int in_GS_OFFSET;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_14 = __isoc99_sscanf(param_1,"%d,%d",&local_1c,&local_18);
  if (local_14 == 2) {
    local_18 = local_18 + local_1c;
  }
  else {
    local_18 = -1;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    local_18 = __stack_chk_fail_local();
  }
  return local_18;
}



/* Function: call_scanf @ 00011d75 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_scanf(void)

{
  param_scanf("123,456");
  return;
}



/* Function: param_fopen_fclose @ 00011d9d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_fopen_fclose(char *param_1)

{
  FILE *__stream;
  int iVar1;
  
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



/* Function: call_fopen_fclose @ 00011dff */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_fopen_fclose(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_fopen_fclose("/etc/passwd");
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_fread_fwrite @ 00011e3c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_fread_fwrite(char *param_1)

{
  FILE *__s;
  undefined4 uVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  int in_GS_OFFSET;
  char local_30 [32];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    sVar2 = strlen("BinBench Test Data");
    sVar2 = fwrite("BinBench Test Data",1,sVar2,__s);
    sVar3 = strlen("BinBench Test Data");
    if (sVar2 == sVar3) {
      rewind(__s);
      sVar3 = fread(local_30,1,sVar2,__s);
      local_30[sVar3] = '\0';
      fclose(__s);
      unlink(param_1);
      if (sVar3 == sVar2) {
        iVar4 = strcmp(local_30,"BinBench Test Data");
        if (iVar4 == 0) {
          uVar1 = 0x2a;
          goto LAB_00011f54;
        }
      }
      uVar1 = 0xfffffffd;
    }
    else {
      fclose(__s);
      uVar1 = 0xfffffffe;
    }
  }
LAB_00011f54:
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}



/* Function: call_fread_fwrite @ 00011f6a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_fread_fwrite(void)

{
  param_fread_fwrite("/tmp/binbench_test.tmp");
  return;
}



/* Function: param_malloc_free @ 00011f92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_malloc_free(uint param_1)

{
  int *__ptr;
  int iVar1;
  uint local_18;
  
  __ptr = malloc(param_1 << 2);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      __ptr[local_18] = local_18 * 10;
    }
    iVar1 = __ptr[param_1 + 0x3fffffff] + *__ptr;
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 0001203b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_malloc_free(void)

{
  param_malloc_free(10);
  return;
}



/* Function: param_memset @ 0001205e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_memset(void *param_1,uint param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  memset(param_1,0,param_2);
  local_18 = 0;
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_18 = local_18 + (uint)*(byte *)(local_14 + (int)param_1);
  }
  return local_18;
}



/* Function: call_memset @ 000120c3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_memset(void)

{
  int in_GS_OFFSET;
  int local_3c;
  int local_38 [10];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
    local_38[local_3c] = 0xff;
  }
  param_memset(local_38,0x28);
  local_38[9] = local_38[9] + local_38[0];
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    local_38[9] = __stack_chk_fail_local();
  }
  return local_38[9];
}



/* Function: param_strchr_strstr @ 0001212c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_strchr_strstr(char *param_1,char param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = strchr(param_1,(int)param_2);
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)pcVar1 - (int)param_1;
  }
  pcVar1 = strstr(param_1,param_3);
  if (pcVar1 == (char *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)pcVar1 - (int)param_1;
  }
  return iVar3 + iVar2;
}



/* Function: call_strchr_strstr @ 000121ab */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_strchr_strstr(void)

{
  undefined4 uVar1;
  
  uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
  return uVar1;
}



/* Function: test_standard_library_functions @ 000121e7 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_standard_library_functions(void)

{
  undefined4 uVar1;
  
  puts(&DAT_000140b0);
  uVar1 = call_strcpy();
  printf(&DAT_000140d4,uVar1);
  uVar1 = call_strcmp();
  printf(&DAT_000140ef,uVar1);
  uVar1 = call_strlen();
  printf(&DAT_0001410a,uVar1);
  uVar1 = call_memcpy();
  printf(&DAT_00014126,uVar1);
  uVar1 = call_memcmp();
  printf(&DAT_00014142,uVar1);
  uVar1 = call_printf();
  printf(&DAT_0001415e,uVar1);
  uVar1 = call_scanf();
  printf(&DAT_0001417a,uVar1);
  uVar1 = call_fopen_fclose();
  printf(&DAT_00014197,uVar1);
  uVar1 = call_fread_fwrite();
  printf(&DAT_000141b3,uVar1);
  uVar1 = call_malloc_free();
  printf(&DAT_000141cf,uVar1);
  uVar1 = call_memset();
  printf(&DAT_000141eb,uVar1);
  uVar1 = call_strchr_strstr();
  printf(&DAT_00014206,uVar1);
  return;
}



/* Function: param_linux_syscall @ 00012335 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

long param_linux_syscall(undefined4 param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0x12345;
  uVar3 = 0;
  lVar1 = syscall(5,param_1,0,0x12345);
  if (lVar1 < 0) {
    piVar2 = __errno_location();
    lVar1 = -*piVar2;
  }
  else {
    syscall(6,lVar1,uVar3,uVar4);
  }
  return lVar1;
}



/* Function: call_linux_syscall @ 00012389 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_linux_syscall(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_linux_syscall("/etc/passwd");
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: param_win32_api @ 000123c6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 param_win32_api(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_GS_OFFSET;
  stat local_68;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = stat(param_1,&local_68);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else if (local_68.st_size < 1) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0x2a;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar2 = __stack_chk_fail_local();
  }
  return uVar2;
}



/* Function: call_win32_api @ 00012435 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_win32_api(void)

{
  param_win32_api("/etc/passwd");
  return;
}



/* Function: param_fork_exec @ 0001245d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

uint param_fork_exec(char *param_1,undefined4 param_2)

{
  uint uVar1;
  int in_GS_OFFSET;
  uint local_1c;
  __pid_t local_18;
  __pid_t local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_18 = fork();
  if (local_18 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (local_18 == 0) {
      execl(param_1,param_1,param_2,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
    local_14 = waitpid(local_18,(int *)&local_1c,0);
    if (local_14 < 0) {
      uVar1 = 0xfffffffe;
    }
    else if ((local_1c & 0x7f) == 0) {
      uVar1 = (int)local_1c >> 8 & 0xff;
    }
    else {
      uVar1 = 0xfffffffd;
    }
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}



/* Function: call_fork_exec @ 00012516 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_fork_exec(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_fork_exec("/bin/true",0);
  if (iVar1 == 0) {
    uVar2 = 0x2a;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: param_pipe_communication @ 00012555 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_pipe_communication(void)

{
  int iVar1;
  undefined4 uVar2;
  __pid_t _Var3;
  size_t __n;
  ssize_t sVar4;
  int in_GS_OFFSET;
  int local_38;
  int local_34;
  undefined1 local_30 [32];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = pipe(&local_38);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    _Var3 = fork();
    if (_Var3 < 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      if (_Var3 == 0) {
        close(local_38);
        __n = strlen("HelloPipe");
        write(local_34,"HelloPipe",__n);
        close(local_34);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(local_34);
      sVar4 = read(local_38,local_30,0x1f);
      local_30[sVar4] = 0;
      close(local_38);
      wait((void *)0x0);
      if (sVar4 < 1) {
        uVar2 = 0xfffffffd;
      }
      else {
        uVar2 = 0x2a;
      }
    }
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar2 = __stack_chk_fail_local();
  }
  return uVar2;
}



/* Function: call_pipe_communication @ 00012679 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_pipe_communication(void)

{
  param_pipe_communication();
  return;
}



/* Function: param_socket_create @ 00012694 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_socket_create(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_GS_OFFSET;
  undefined4 local_28;
  int local_24;
  sockaddr local_20;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_24 = socket(2,1,0);
  if (local_24 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_28 = 1;
    iVar2 = setsockopt(local_24,1,2,&local_28,4);
    if (iVar2 < 0) {
      close(local_24);
      uVar1 = 0xfffffffe;
    }
    else {
      memset(&local_20,0,0x10);
      local_20.sa_family = 2;
      local_20.sa_data._0_2_ = htons(0);
      local_20.sa_data[2] = '\0';
      local_20.sa_data[3] = '\0';
      local_20.sa_data[4] = '\0';
      local_20.sa_data[5] = '\0';
      iVar2 = bind(local_24,&local_20,0x10);
      if (iVar2 < 0) {
        close(local_24);
        uVar1 = 0xfffffffd;
      }
      else {
        iVar2 = listen(local_24,5);
        if (iVar2 < 0) {
          close(local_24);
          uVar1 = 0xfffffffc;
        }
        else {
          close(local_24);
          uVar1 = 0x2a;
        }
      }
    }
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}



/* Function: call_socket_create @ 000127c4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_socket_create(void)

{
  param_socket_create();
  return;
}



/* Function: param_shmget_shmat @ 000127df */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

size_t param_shmget_shmat(void)

{
  int iVar1;
  size_t sVar2;
  key_t __key;
  char *__s;
  
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



/* Function: call_shmget_shmat @ 000128f9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_shmget_shmat(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_shmget_shmat();
  if (iVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x2a;
  }
  return uVar2;
}



/* Function: signal_handler @ 00012929 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void signal_handler(undefined4 param_1)

{
  signal_received = 1;
  signal_number = param_1;
  return;
}



/* Function: param_signal_handling @ 00012950 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_signal_handling(void)

{
  __sighandler_t p_Var1;
  undefined4 uVar2;
  int local_10;
  
  p_Var1 = signal(10,signal_handler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    uVar2 = 0xffffffff;
  }
  else {
    p_Var1 = signal(0xe,signal_handler);
    if (p_Var1 == (__sighandler_t)0xffffffff) {
      uVar2 = 0xfffffffe;
    }
    else {
      signal_received = 0;
      raise(10);
      local_10 = 1000;
      while ((signal_received == 0 && (0 < local_10))) {
        usleep(1000);
        local_10 = local_10 + -1;
      }
      if (signal_received == 0) {
        uVar2 = 0xfffffffd;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        local_10 = 2000;
        while ((signal_received == 0 && (0 < local_10))) {
          usleep(1000);
          local_10 = local_10 + -1;
        }
        if ((signal_received == 0) || (signal_number != 0xe)) {
          uVar2 = 0xfffffffb;
        }
        else {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          uVar2 = 0x2a;
        }
      }
      else {
        uVar2 = 0xfffffffc;
      }
    }
  }
  return uVar2;
}



/* Function: call_signal_handling @ 00012aa7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_signal_handling(void)

{
  param_signal_handling();
  return;
}



/* Function: test_system_calls @ 00012ac2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_system_calls(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00014248);
  uVar1 = call_linux_syscall();
  printf(&DAT_00014263,uVar1);
  uVar1 = call_win32_api();
  printf(&DAT_0001427f,uVar1);
  uVar1 = call_fork_exec();
  printf(&DAT_0001429b,uVar1);
  uVar1 = call_pipe_communication();
  printf(&DAT_000142b7,uVar1);
  uVar1 = call_socket_create();
  printf(&DAT_000142d3,uVar1);
  uVar1 = call_shmget_shmat();
  printf(&DAT_000142ef,uVar1);
  uVar1 = call_signal_handling();
  printf(&DAT_0001430b,uVar1);
  return;
}



/* Function: thread_compute @ 00012b98 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

int * thread_compute(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}



/* Function: param_pthread_create @ 00012be7 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_pthread_create(undefined4 param_1)

{
  undefined4 uVar1;
  int in_GS_OFFSET;
  pthread_t local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_20 = param_1;
  local_18 = pthread_create(&local_24,(pthread_attr_t *)0x0,thread_compute,&local_20);
  if (local_18 == 0) {
    pthread_join(local_24,&local_1c);
    local_14 = *local_1c;
    free(local_1c);
    uVar1 = local_14;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}



/* Function: call_pthread_create @ 00012c7a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_pthread_create(void)

{
  param_pthread_create(7);
  return;
}



/* Function: thread_sum @ 00012c9d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 thread_sum(int *param_1)

{
  int local_c;
  
  param_1[2] = 0;
  for (local_c = *param_1; local_c <= param_1[1]; local_c = local_c + 1) {
    param_1[2] = param_1[2] + local_c;
  }
  return 0;
}



/* Function: param_pthread_join @ 00012cf2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_pthread_join(void)

{
  int iVar1;
  int in_GS_OFFSET;
  int local_4c;
  int local_48;
  int local_44;
  pthread_t local_40 [14];
  
  local_40[0xc] = *(int *)(in_GS_OFFSET + 0x14);
  local_40[3] = 1;
  local_40[4] = 10;
  local_40[5] = 0;
  local_40[6] = 0xb;
  local_40[7] = 0x14;
  local_40[8] = 0;
  local_40[9] = 0x15;
  local_40[10] = 0x1e;
  local_40[0xb] = 0;
  for (local_4c = 0; local_4c < 3; local_4c = local_4c + 1) {
    iVar1 = pthread_create(local_40 + local_4c,(pthread_attr_t *)0x0,thread_sum,
                           local_40 + local_4c * 3 + 3);
    if (iVar1 != 0) {
      local_48 = -1;
      goto LAB_00012df5;
    }
  }
  local_48 = 0;
  local_44 = 0;
  do {
    if (2 < local_44) {
LAB_00012df5:
      if (local_40[0xc] != *(int *)(in_GS_OFFSET + 0x14)) {
        local_48 = __stack_chk_fail_local();
      }
      return local_48;
    }
    iVar1 = pthread_join(local_40[local_44],(void **)0x0);
    if (iVar1 != 0) {
      local_48 = -2;
      goto LAB_00012df5;
    }
    local_48 = local_48 + local_40[local_44 * 3 + 5];
    local_44 = local_44 + 1;
  } while( true );
}



/* Function: call_pthread_join @ 00012e0b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_pthread_join(void)

{
  param_pthread_join();
  return;
}



/* Function: thread_increment @ 00012e26 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 thread_increment(int *param_1)

{
  int iVar1;
  int local_14;
  
  iVar1 = *param_1;
  for (local_14 = 0; local_14 < iVar1; local_14 = local_14 + 1) {
    pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
    usleep(1000);
  }
  return 0;
}



/* Function: param_mutex_lock @ 00012ea6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_mutex_lock(int param_1,int param_2)

{
  void *__ptr;
  undefined4 uVar1;
  int iVar2;
  int local_1c;
  int local_18;
  
  __ptr = malloc(param_1 << 2);
  if (__ptr == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    shared_counter = 0;
    for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
      iVar2 = pthread_create((pthread_t *)(local_1c * 4 + (int)__ptr),(pthread_attr_t *)0x0,
                             thread_increment,&param_2);
      if (iVar2 != 0) {
        free(__ptr);
        return 0xfffffffe;
      }
    }
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      pthread_join(*(pthread_t *)((int)__ptr + local_18 * 4),(void **)0x0);
    }
    free(__ptr);
    if (param_2 * param_1 == shared_counter) {
      uVar1 = 0x2a;
    }
    else {
      uVar1 = 0xfffffffd;
    }
  }
  return uVar1;
}



/* Function: call_mutex_lock @ 00012fa8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_mutex_lock(void)

{
  param_mutex_lock(4,1000);
  return;
}



/* Function: consumer_thread @ 00012fd0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 * consumer_thread(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  while (uVar1 = data, ready == 0) {
    pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
  }
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  puVar2 = malloc(4);
  *puVar2 = uVar1;
  return puVar2;
}



/* Function: producer_thread @ 00013058 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 producer_thread(void)

{
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
  data = 0x2a;
  ready = 1;
  pthread_cond_signal((pthread_cond_t *)cond);
  pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
  return 0;
}



/* Function: param_condition_variable @ 000130cf */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_condition_variable(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_GS_OFFSET;
  pthread_t local_20;
  pthread_t local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_1c,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_1c,&local_18);
      pthread_join(local_20,(void **)0x0);
      local_14 = *local_18;
      free(local_18);
      uVar2 = local_14;
    }
    else {
      pthread_cancel(local_1c);
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar2 = __stack_chk_fail_local();
  }
  return uVar2;
}



/* Function: call_condition_variable @ 000131ab */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_condition_variable(void)

{
  param_condition_variable();
  return;
}



/* Function: thread_atomic_increment @ 000131c6 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

undefined4 thread_atomic_increment(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_GS_OFFSET;
  int local_1c;
  
  for (local_1c = 0; local_1c < *param_1; local_1c = local_1c + 1) {
    LOCK();
    iVar1 = atomic_counter + 1;
    UNLOCK();
    atomic_counter = local_1c + 1000;
    LOCK();
    if (local_1c != iVar1) {
      atomic_counter = iVar1;
    }
    UNLOCK();
  }
  uVar2 = 0;
  if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar2 = __stack_chk_fail_local();
  }
  return uVar2;
}



/* Function: thread_atomic_load_store @ 00013257 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

longlong thread_atomic_load_store(void)

{
  uint uVar1;
  
  uVar1 = atomic_counter;
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return (ulonglong)uVar1 << 0x20;
}



/* Function: param_atomic_ops @ 00013287 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_atomic_ops(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_GS_OFFSET;
  pthread_t local_24;
  int local_20;
  int local_1c;
  void *local_18;
  int local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_18 = malloc(param_1 << 2);
  if (local_18 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    LOCK();
    atomic_counter = 0;
    UNLOCK();
    for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
      iVar2 = pthread_create((pthread_t *)(local_20 * 4 + (int)local_18),(pthread_attr_t *)0x0,
                             thread_atomic_increment,&stack0x00000008);
      if (iVar2 != 0) {
        free(local_18);
        uVar1 = 0xfffffffe;
        goto LAB_000133b7;
      }
    }
    iVar2 = pthread_create(&local_24,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar2 == 0) {
      pthread_join(local_24,(void **)0x0);
    }
    for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
      pthread_join(*(pthread_t *)((int)local_18 + local_1c * 4),(void **)0x0);
    }
    local_14 = atomic_counter;
    free(local_18);
    if (local_14 < 1) {
      uVar1 = 0xfffffffd;
    }
    else {
      uVar1 = 0x2a;
    }
  }
LAB_000133b7:
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}



/* Function: call_atomic_ops @ 000133cd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_atomic_ops(void)

{
  param_atomic_ops(4,500);
  return;
}



/* Function: thread_tls_test @ 000133f5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int * thread_tls_test(char *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_GS_OFFSET;
  
  iVar1 = in_GS_OFFSET[-9];
  in_GS_OFFSET[-9] = in_GS_OFFSET[-9] + 0x32;
  strncpy((char *)(*in_GS_OFFSET + -0x20),param_1,0x1f);
  piVar2 = malloc(8);
  *piVar2 = iVar1;
  piVar2[1] = in_GS_OFFSET[-9];
  return piVar2;
}



/* Function: param_thread_local_storage @ 00013477 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_thread_local_storage(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int in_GS_OFFSET;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  void *local_24;
  void *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_24 = malloc(param_1 << 2);
  local_20 = malloc(param_1 << 2);
  if ((local_24 == (void *)0x0) || (local_20 == (void *)0x0)) {
    uVar2 = 0xffffffff;
  }
  else {
    for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
      puVar1 = (undefined4 *)(local_3c * 4 + (int)local_20);
      pvVar3 = malloc(0x10);
      *puVar1 = pvVar3;
      snprintf(*(char **)((int)local_20 + local_3c * 4),0x10,"Thread-%d",local_3c);
    }
    for (local_38 = 0; local_38 < param_1; local_38 = local_38 + 1) {
      iVar4 = pthread_create((pthread_t *)((int)local_24 + local_38 * 4),(pthread_attr_t *)0x0,
                             thread_tls_test,*(void **)((int)local_20 + local_38 * 4));
      if (iVar4 != 0) {
        for (local_34 = 0; local_34 <= local_38; local_34 = local_34 + 1) {
          free(*(void **)((int)local_20 + local_34 * 4));
        }
        free(local_20);
        free(local_24);
        uVar2 = 0xfffffffe;
        goto LAB_000136b3;
      }
    }
    local_30 = 0;
    local_2c = 0;
    for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
      pthread_join(*(pthread_t *)((int)local_24 + local_28 * 4),&local_40);
      local_14 = local_40;
      local_30 = local_30 + *local_40;
      local_2c = local_2c + local_40[1];
      free(local_40);
      free(*(void **)((int)local_20 + local_28 * 4));
    }
    free(local_20);
    free(local_24);
    local_1c = param_1 * 100;
    local_18 = param_1 * 0x96;
    if ((local_30 == local_1c) && (local_2c == local_18)) {
      uVar2 = 0x2a;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
LAB_000136b3:
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar2 = __stack_chk_fail_local();
  }
  return uVar2;
}



/* Function: call_thread_local_storage @ 000136cb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_thread_local_storage(void)

{
  param_thread_local_storage(4);
  return;
}



/* Function: test_thread_concurrency @ 000136ee */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_thread_concurrency(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00014331);
  uVar1 = call_pthread_create();
  printf(&DAT_0001434f,uVar1);
  uVar1 = call_pthread_join();
  printf(&DAT_0001436b,uVar1);
  uVar1 = call_mutex_lock();
  printf(&DAT_00014388,uVar1);
  uVar1 = call_condition_variable();
  printf(&DAT_000143a4,uVar1);
  uVar1 = call_atomic_ops();
  printf(&DAT_000143c0,uVar1);
  uVar1 = call_thread_local_storage();
  printf(&DAT_000143dc,uVar1);
  return;
}



/* Function: main @ 000137ac */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 000137d6 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 000137e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00013800 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001381a) */
/* WARNING: Removing unreachable block (ram,0x00013830) */
/* WARNING: Removing unreachable block (ram,0x0001383d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001384c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 77 */
