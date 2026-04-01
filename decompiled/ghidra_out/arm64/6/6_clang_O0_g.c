/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/6/6_clang_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 001012c8 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_001012e0 @ 001012e0 */

void FUN_001012e0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: init_have_lse_atomics @ 00101700 */

void init_have_lse_atomics(void)

{
  byte extraout_var;
  
  __getauxval(0x10);
  __aarch64_have_lse_atomics = extraout_var & 1;
  return;
}



/* Function: _start @ 00101740 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00101774 */

/* WARNING: Removing unreachable block (ram,0x00101784) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00101790 */

/* WARNING: Removing unreachable block (ram,0x001017a8) */
/* WARNING: Removing unreachable block (ram,0x001017b4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001017c0 */

/* WARNING: Removing unreachable block (ram,0x001017e4) */
/* WARNING: Removing unreachable block (ram,0x001017f0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001017fc @ 001017fc */

void FUN_001017fc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00101800 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: param_strcpy @ 00101854 */

int param_strcpy(char *dst,char *src)

{
  size_t sVar1;
  
  strcpy(dst,src);
  sVar1 = strlen(dst);
  return (int)sVar1;
}



/* Function: call_strcpy @ 00101888 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
  int iVar1;
  char acStack_30 [32];
  
                    /* Unresolved local var: char[32] buffer@[DW_OP_breg31(sp): +16]
                       Unresolved local var: int len@[DW_OP_breg31(sp): +12] */
  iVar1 = param_strcpy(acStack_30,"HelloLib");
  return iVar1;
}



/* Function: param_strcmp @ 001018b8 */

int param_strcmp(char *s1,char *s2)

{
  int iVar1;
  undefined4 local_28;
  
                    /* Unresolved local var: int ret@[DW_OP_breg31(sp): +12] */
  iVar1 = strcmp(s1,s2);
  if (iVar1 < 1) {
    local_28 = 0;
    if (iVar1 < 0) {
      local_28 = -1;
    }
  }
  else {
    local_28 = 1;
  }
  return local_28;
}



/* Function: call_strcmp @ 00101920 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[DW_OP_breg31(sp): +8]
                       Unresolved local var: int r3@[DW_OP_breg31(sp): +4] */
  iVar1 = param_strcmp("abc","def");
  iVar2 = param_strcmp("xyz","xyz");
  iVar3 = param_strcmp("bbb","aaa");
  return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 00101990 */

int param_strlen(char *str)

{
  size_t sVar1;
  
                    /* Unresolved local var: size_t len@[DW_OP_breg31(sp): 0] */
  sVar1 = strlen(str);
  return (int)sVar1;
}



/* Function: call_strlen @ 001019c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
  int iVar1;
  
                    /* Unresolved local var: char * test@[DW_OP_breg31(sp): +8] */
  iVar1 = param_strlen("BinBench2025");
  return iVar1;
}



/* Function: param_memcpy @ 001019ec */

int param_memcpy(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return (int)n;
}



/* Function: call_memcpy @ 00101a28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
                    /* Unresolved local var: int[5] src@[DW_OP_breg31(sp): +32]
                       Unresolved local var: int[5] dst@[DW_OP_breg31(sp): +8] */
  uStack_28 = 0x280000001e;
  local_30 = 0x140000000a;
  local_20 = 0x32;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  param_memcpy(&local_48,&local_30,0x14);
  return (int)local_48 + (int)local_40 + local_38;
}



/* Function: param_memcmp @ 00101a88 */

int param_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  undefined4 local_30;
  
                    /* Unresolved local var: int ret@[DW_OP_breg31(sp): +4] */
  iVar1 = memcmp(p1,p2,n);
  if (iVar1 < 1) {
    local_30 = 0;
    if (iVar1 < 0) {
      local_30 = -1;
    }
  }
  else {
    local_30 = 1;
  }
  return local_30;
}



/* Function: call_memcmp @ 00101af8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
  int iVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* Unresolved local var: int[3] arr1@[???]
                       Unresolved local var: int[3] arr2@[???]
                       Unresolved local var: int[3] arr3@[DW_OP_breg31(sp): +32]
                       Unresolved local var: int r1@[DW_OP_breg31(sp): +28]
                       Unresolved local var: int r2@[DW_OP_breg31(sp): +24] */
  local_20 = 0x200000001;
  local_18 = 3;
  local_30 = 0x200000001;
  local_28 = 4;
  local_40 = 0x200000001;
  local_38 = 3;
  iVar1 = param_memcmp(&local_20,&local_30,0xc);
  iVar2 = param_memcmp(&local_20,&local_40,0xc);
  return iVar1 + iVar2;
}



/* Function: param_printf @ 00101ba0 */

int param_printf(int x,char *name)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[DW_OP_breg31(sp): +12] */
  iVar1 = printf("Value: %d, Name: %s\n",(ulong)(uint)x,name);
  return iVar1;
}



/* Function: call_printf @ 00101bdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  
                    /* Unresolved local var: int chars@[???] */
  iVar1 = param_printf(0x2a,"Test");
  return iVar1;
}



/* Function: param_scanf @ 00101c0c */

int param_scanf(char *input_str)

{
  int iVar1;
  int local_28;
  int local_24;
  char *local_20;
  int local_14;
  
                    /* Unresolved local var: int a@[DW_OP_breg31(sp): +12]
                       Unresolved local var: int b@[DW_OP_breg31(sp): +8]
                       Unresolved local var: int ret@[DW_OP_breg31(sp): +4] */
  local_20 = input_str;
  iVar1 = __isoc99_sscanf(input_str,"%d,%d",&local_24,&local_28);
  if (iVar1 == 2) {
    local_14 = local_24 + local_28;
  }
  else {
    local_14 = -1;
  }
  return local_14;
}



/* Function: call_scanf @ 00101c78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  
  iVar1 = param_scanf("123,456");
  return iVar1;
}



/* Function: param_fopen_fclose @ 00101c94 */

int param_fopen_fclose(char *filename)

{
  FILE *__stream;
  int local_14;
  
                    /* Unresolved local var: FILE * fp@[DW_OP_breg31(sp): +8]
                       Unresolved local var: int fd@[DW_OP_breg31(sp): +4] */
  __stream = fopen(filename,"r");
  if (__stream == (FILE *)0x0) {
    local_14 = -1;
  }
  else {
    local_14 = fileno(__stream);
    fclose(__stream);
  }
  return local_14;
}



/* Function: call_fopen_fclose @ 00101d00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int fd@[???] */
  iVar1 = param_fopen_fclose("/etc/passwd");
  iVar2 = 0x2a;
  if (iVar1 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: param_fread_fwrite @ 00101d38 */

int param_fread_fwrite(char *tmpfile)

{
  char *__ptr;
  bool bVar1;
  int iVar2;
  FILE *__s;
  size_t sVar3;
  size_t sVar4;
  char acStack_48 [32];
  char *local_28;
  char *local_20;
  int local_14;
  
                    /* Unresolved local var: char * write_data@[???]
                       Unresolved local var: char[32] read_buffer@[DW_OP_breg31(sp): +56]
                       Unresolved local var: FILE * fp@[DW_OP_breg31(sp): +48]
                       Unresolved local var: size_t written@[DW_OP_breg31(sp): +40]
                       Unresolved local var: size_t read@[DW_OP_breg31(sp): +32] */
  local_28 = "BinBench Test Data";
  local_20 = tmpfile;
  __s = fopen(tmpfile,"w+");
  __ptr = local_28;
  if (__s == (FILE *)0x0) {
    local_14 = -1;
  }
  else {
    sVar3 = strlen(local_28);
    sVar3 = fwrite(__ptr,1,sVar3,__s);
    sVar4 = strlen(local_28);
    if (sVar3 == sVar4) {
      rewind(__s);
      sVar4 = fread(acStack_48,1,sVar3,__s);
      acStack_48[sVar4] = '\0';
      fclose(__s);
      unlink(local_20);
      bVar1 = false;
      if (sVar4 == sVar3) {
        iVar2 = strcmp(acStack_48,local_28);
        bVar1 = iVar2 == 0;
      }
      local_14 = 0x2a;
      if (!bVar1) {
        local_14 = -3;
      }
    }
    else {
      fclose(__s);
      local_14 = -2;
    }
  }
  return local_14;
}



/* Function: call_fread_fwrite @ 00101e84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 00101ea0 */

int param_malloc_free(size_t size)

{
  int *__ptr;
  ulong local_30;
  int local_14;
  
                    /* Unresolved local var: int * ptr@[DW_OP_breg31(sp): +24]
                       Unresolved local var: int sum@[DW_OP_breg31(sp): +12] */
  __ptr = malloc(size << 2);
  if (__ptr == (int *)0x0) {
    local_14 = -1;
  }
  else {
                    /* Unresolved local var: size_t i@[DW_OP_breg31(sp): +16] */
    for (local_30 = 0; local_30 < size; local_30 = local_30 + 1) {
      __ptr[local_30] = (int)local_30 * 10;
    }
    local_14 = *__ptr + __ptr[size - 1];
    free(__ptr);
  }
  return local_14;
}



/* Function: call_malloc_free @ 00101f68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  int iVar1;
  
  iVar1 = param_malloc_free(10);
  return iVar1;
}



/* Function: param_memset @ 00101f80 */

int param_memset(void *buffer,size_t size)

{
  undefined8 local_38;
  undefined4 local_2c;
  
                    /* Unresolved local var: uchar * bytes@[DW_OP_breg31(sp): +24]
                       Unresolved local var: int sum@[DW_OP_breg31(sp): +20] */
  memset(buffer,0,size);
  local_2c = 0;
                    /* Unresolved local var: size_t i@[DW_OP_breg31(sp): +8] */
  for (local_38 = 0; local_38 < size; local_38 = local_38 + 1) {
    local_2c = local_2c + (uint)*(byte *)((long)buffer + local_38);
  }
  return local_2c;
}



/* Function: call_memset @ 00102008 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
  int local_3c;
  int local_38 [10];
  
                    /* Unresolved local var: int[10] buffer@[DW_OP_breg31(sp): +8] */
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): +4] */
  for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
    local_38[local_3c] = 0xff;
  }
  param_memset(local_38,0x28);
  return local_38[0] + local_38[9];
}



/* Function: param_strchr_strstr @ 00102074 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
  char *pcVar1;
  undefined4 local_58;
  undefined4 local_50;
  
                    /* Unresolved local var: char * pos1@[???]
                       Unresolved local var: int index1@[???]
                       Unresolved local var: char * pos2@[DW_OP_breg31(sp): +32]
                       Unresolved local var: int index2@[DW_OP_breg31(sp): +28] */
  pcVar1 = strchr(str,(uint)(byte)ch);
  if (pcVar1 == (char *)0x0) {
    local_50 = -1;
  }
  else {
    local_50 = (int)pcVar1 - (int)str;
  }
  pcVar1 = strstr(str,substr);
  if (pcVar1 == (char *)0x0) {
    local_58 = -1;
  }
  else {
    local_58 = (int)pcVar1 - (int)str;
  }
  return local_50 + local_58;
}



/* Function: call_strchr_strstr @ 0010212c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
  int iVar1;
  
                    /* Unresolved local var: char * text@[DW_OP_breg31(sp): +8]
                       Unresolved local var: int result@[DW_OP_breg31(sp): +4] */
  iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
  return iVar1;
}



/* Function: test_standard_library_functions @ 0010216c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
  uint uVar1;
  
  printf(&DAT_001039aa);
  uVar1 = call_strcpy();
  printf(&DAT_001039cf,(ulong)uVar1);
  uVar1 = call_strcmp();
  printf(&DAT_001039ea,(ulong)uVar1);
  uVar1 = call_strlen();
  printf(&DAT_00103a05,(ulong)uVar1);
  uVar1 = call_memcpy();
  printf(&DAT_00103a21,(ulong)uVar1);
  uVar1 = call_memcmp();
  printf(&DAT_00103a3d,(ulong)uVar1);
  uVar1 = call_printf();
  printf(&DAT_00103a59,(ulong)uVar1);
  uVar1 = call_scanf();
  printf(&DAT_00103a75,(ulong)uVar1);
  uVar1 = call_fopen_fclose();
  printf(&DAT_00103a92,(ulong)uVar1);
  uVar1 = call_fread_fwrite();
  printf(&DAT_00103aae,(ulong)uVar1);
  uVar1 = call_malloc_free();
  printf(&DAT_00103aca,(ulong)uVar1);
  uVar1 = call_memset();
  printf(&DAT_00103ae6,(ulong)uVar1);
  uVar1 = call_strchr_strstr();
  printf(&DAT_00103b01,(ulong)uVar1);
  return;
}



/* Function: param_linux_syscall @ 00102278 */

int param_linux_syscall(char *pathname)

{
  ulong uVar1;
  int *piVar2;
  undefined4 local_14;
  
                    /* Unresolved local var: int fd@[DW_OP_breg31(sp): +12] */
  uVar1 = syscall(0x38,0xffffff9c,pathname,0);
  local_14 = (int)uVar1;
  if (local_14 < 0) {
    piVar2 = __errno_location();
    local_14 = -*piVar2;
  }
  else {
    syscall(0x39,uVar1 & 0xffffffff,uVar1 & 0xffffffff);
  }
  return local_14;
}



/* Function: call_linux_syscall @ 001022f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int result@[???] */
  iVar1 = param_linux_syscall("/etc/passwd");
  iVar2 = 0x2a;
  if (iVar1 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: param_win32_api @ 0010232c */

int param_win32_api(char *filename)

{
  int iVar1;
  stat sStack_a0;
  
                    /* Unresolved local var: stat st@[DW_OP_breg31(sp): 0] */
  sStack_a0.__unused[1] = (long)filename;
  iVar1 = stat(filename,&sStack_a0);
  if (iVar1 < 0) {
    sStack_a0.__unused[2]._4_4_ = -1;
  }
  else {
    sStack_a0.__unused[2]._4_4_ = 0x2a;
    if (sStack_a0.st_size < 1) {
      sStack_a0.__unused[2]._4_4_ = -2;
    }
  }
  return sStack_a0.__unused[2]._4_4_;
}



/* Function: call_win32_api @ 0010238c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  int iVar1;
  
  iVar1 = param_win32_api("/etc/passwd");
  return iVar1;
}



/* Function: param_fork_exec @ 001023a8 */

int param_fork_exec(char *prog,char *arg)

{
  __pid_t _Var1;
  uint local_30;
  __pid_t local_2c;
  char *local_28;
  char *local_20;
  int local_14;
  
  local_28 = arg;
  local_20 = prog;
                    /* Unresolved local var: pid_t pid@[DW_OP_breg31(sp): +20] */
  local_2c = fork();
  if (local_2c < 0) {
    local_14 = -1;
  }
  else {
    if (local_2c == 0) {
      execl(local_20,local_20,local_28,0);
                    /* WARNING: Subroutine does not return */
      _exit(0x7f);
    }
                    /* Unresolved local var: int status@[DW_OP_breg31(sp): +16]
                       Unresolved local var: pid_t wpid@[DW_OP_breg31(sp): +12] */
    _Var1 = waitpid(local_2c,(int *)&local_30,0);
    if (_Var1 < 0) {
      local_14 = -2;
    }
    else if ((local_30 & 0x7f) == 0) {
      local_14 = (int)(local_30 & 0xff00) >> 8;
    }
    else {
      local_14 = -3;
    }
  }
  return local_14;
}



/* Function: call_fork_exec @ 00102478 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = param_fork_exec("/bin/true",(char *)0x0);
  iVar2 = 0x2a;
  if (iVar1 != 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: param_pipe_communication @ 001024b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  size_t __n;
  ssize_t sVar3;
  undefined1 auStack_3c [32];
  int local_1c;
  int local_18;
  int local_14;
  
                    /* Unresolved local var: int[2] pipefd@[???]
                       Unresolved local var: char[32] buffer@[???]
                       Unresolved local var: pid_t pid@[DW_OP_breg31(sp): +48] */
  iVar1 = pipe(&local_1c);
  if (iVar1 < 0) {
    local_14 = -1;
  }
  else {
    _Var2 = fork();
    if (_Var2 < 0) {
      local_14 = -2;
    }
    else {
      if (_Var2 == 0) {
                    /* Unresolved local var: char * msg@[DW_OP_breg31(sp): +40] */
        close(local_1c);
        iVar1 = local_18;
        __n = strlen("HelloPipe");
        write(iVar1,"HelloPipe",__n);
        close(local_18);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
                    /* Unresolved local var: ssize_t bytes@[DW_OP_breg31(sp): +32] */
      close(local_18);
      sVar3 = read(local_1c,auStack_3c,0x1f);
      auStack_3c[sVar3] = 0;
      close(local_1c);
      wait((void *)0x0);
      local_14 = 0x2a;
      if (sVar3 < 1) {
        local_14 = -3;
      }
    }
  }
  return local_14;
}



/* Function: call_pipe_communication @ 001025c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  
  iVar1 = param_pipe_communication();
  return iVar1;
}



/* Function: param_socket_create @ 001025dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
  uint16_t uVar1;
  int iVar2;
  sockaddr local_30;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
                    /* Unresolved local var: int sock@[???]
                       Unresolved local var: int opt@[???]
                       Unresolved local var: sockaddr_in addr@[DW_OP_breg31(sp): +16] */
  local_18 = socket(2,1,0);
  if (local_18 < 0) {
    local_14 = -1;
  }
  else {
    local_1c = 1;
    iVar2 = setsockopt(local_18,1,2,&local_1c,4);
    if (iVar2 < 0) {
      close(local_18);
      local_14 = -2;
    }
    else {
      local_30.sa_data[6] = '\0';
      local_30.sa_data[7] = '\0';
      local_30.sa_data[8] = '\0';
      local_30.sa_data[9] = '\0';
      local_30.sa_data[10] = '\0';
      local_30.sa_data[0xb] = '\0';
      local_30.sa_data[0xc] = '\0';
      local_30.sa_data[0xd] = '\0';
      local_30.sa_family = 2;
      local_30.sa_data[0] = '\0';
      local_30.sa_data[1] = '\0';
      local_30.sa_data[2] = '\0';
      local_30.sa_data[3] = '\0';
      local_30.sa_data[4] = '\0';
      local_30.sa_data[5] = '\0';
      uVar1 = htons(0);
      local_30.sa_data._0_2_ = uVar1;
      local_30.sa_data._2_4_ = 0;
      iVar2 = bind(local_18,&local_30,0x10);
      if (iVar2 < 0) {
        close(local_18);
        local_14 = -3;
      }
      else {
        iVar2 = listen(local_18,5);
        if (iVar2 < 0) {
          close(local_18);
          local_14 = -4;
        }
        else {
          close(local_18);
          local_14 = 0x2a;
        }
      }
    }
  }
  return local_14;
}



/* Function: call_socket_create @ 001026fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  
  iVar1 = param_socket_create();
  return iVar1;
}



/* Function: param_shmget_shmat @ 00102710 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__dest;
  size_t sVar2;
  int local_14;
  
                    /* Unresolved local var: char * ftok_path@[???]
                       Unresolved local var: int fd@[???]
                       Unresolved local var: key_t key@[DW_OP_breg31(sp): +24]
                       Unresolved local var: int shmid@[DW_OP_breg31(sp): +20]
                       Unresolved local var: char * shm@[DW_OP_breg31(sp): +8]
                       Unresolved local var: int len@[DW_OP_breg31(sp): +4] */
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  if (iVar1 < 0) {
    local_14 = -1;
  }
  else {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (__key < 0) {
      local_14 = -1;
    }
    else {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        local_14 = -2;
      }
      else {
        __dest = shmat(iVar1,(void *)0x0,0);
        if (__dest == (char *)0xffffffffffffffff) {
          local_14 = -3;
        }
        else {
          strcpy(__dest,"SharedMemory");
          sVar2 = strlen(__dest);
          local_14 = (int)sVar2;
          shmdt(__dest);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return local_14;
}



/* Function: call_shmget_shmat @ 00102844 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = param_shmget_shmat();
  iVar2 = 0x2a;
  if (iVar1 < 1) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: param_signal_handling @ 00102874 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
  int iVar1;
  __sighandler_t p_Var2;
  int local_18;
  int local_14;
  
                    /* Unresolved local var: int attempts@[???] */
  p_Var2 = signal(10,signal_handler);
  if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
    local_14 = -1;
  }
  else {
    p_Var2 = signal(0xe,signal_handler);
    if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
      local_14 = -2;
    }
    else {
      signal_received = 0;
      raise(10);
      local_18 = 1000;
      while( true ) {
        iVar1 = local_18;
        if (signal_received == 0) {
          local_18 = local_18 + -1;
        }
        if (signal_received != 0 || iVar1 < 1) break;
        usleep(1000);
      }
      if (signal_received == 0) {
        local_14 = -3;
      }
      else if (signal_number == 10) {
        signal_received = 0;
        alarm(1);
        local_18 = 2000;
        while( true ) {
          iVar1 = local_18;
          if (signal_received == 0) {
            local_18 = local_18 + -1;
          }
          if (signal_received != 0 || iVar1 < 1) break;
          usleep(1000);
        }
        if ((signal_received == 0) || (signal_number != 0xe)) {
          local_14 = -5;
        }
        else {
          signal(10,(__sighandler_t)0x0);
          signal(0xe,(__sighandler_t)0x0);
          local_14 = 0x2a;
        }
      }
      else {
        local_14 = -4;
      }
    }
  }
  return local_14;
}



/* Function: signal_handler @ 00102a44 */

void signal_handler(int sig)

{
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: call_signal_handling @ 00102a6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  int iVar1;
  
  iVar1 = param_signal_handling();
  return iVar1;
}



/* Function: test_system_calls @ 00102a80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
  uint uVar1;
  
  printf(&DAT_00103b50);
  uVar1 = call_linux_syscall();
  printf(&DAT_00103b6c,(ulong)uVar1);
  uVar1 = call_win32_api();
  printf(&DAT_00103b88,(ulong)uVar1);
  uVar1 = call_fork_exec();
  printf(&DAT_00103ba4,(ulong)uVar1);
  uVar1 = call_pipe_communication();
  printf(&DAT_00103bc0,(ulong)uVar1);
  uVar1 = call_socket_create();
  printf(&DAT_00103bdc,(ulong)uVar1);
  uVar1 = call_shmget_shmat();
  printf(&DAT_00103bf8,(ulong)uVar1);
  uVar1 = call_signal_handling();
  printf(&DAT_00103c14,(ulong)uVar1);
  return;
}



/* Function: thread_compute @ 00102b28 */

void * thread_compute(void *arg)

{
  int iVar1;
  int *piVar2;
  
                    /* Unresolved local var: int * input@[DW_OP_breg31(sp): +16]
                       Unresolved local var: int value@[DW_OP_breg31(sp): +12]
                       Unresolved local var: int result@[DW_OP_breg31(sp): +8]
                       Unresolved local var: int * ret@[DW_OP_breg31(sp): 0] */
  iVar1 = *(int *)arg;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}



/* Function: param_pthread_create @ 00102b84 */

int param_pthread_create(int x)

{
  int iVar1;
  int *local_30;
  int local_24;
  pthread_t local_20;
  int local_18;
  int local_14;
  
                    /* Unresolved local var: pthread_t tid@[???]
                       Unresolved local var: int input@[???]
                       Unresolved local var: void * thread_ret@[DW_OP_breg31(sp): +16]
                       Unresolved local var: int ret@[DW_OP_breg31(sp): +12]
                       Unresolved local var: int result@[DW_OP_breg31(sp): +8] */
  local_24 = x;
  local_18 = x;
  iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
  if (iVar1 == 0) {
    pthread_join(local_20,&local_30);
    iVar1 = *local_30;
    free(local_30);
    local_14 = iVar1;
  }
  else {
    local_14 = -1;
  }
  return local_14;
}



/* Function: call_pthread_create @ 00102c0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  
  iVar1 = param_pthread_create(7);
  return iVar1;
}



/* Function: thread_sum @ 00102c24 */

void * thread_sum(void *arg)

{
  undefined4 local_14;
  
                    /* Unresolved local var: ThreadData * data@[???] */
  *(undefined4 *)((long)arg + 8) = 0;
                    /* Unresolved local var: int i@[???] */
  for (local_14 = *(int *)arg; local_14 <= *(int *)((long)arg + 4); local_14 = local_14 + 1) {
    *(int *)((long)arg + 8) = *(int *)((long)arg + 8) + local_14;
  }
  return (void *)0x0;
}



/* Function: param_pthread_join @ 00102c98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  int iVar1;
  int local_60;
  int local_5c;
  int local_58;
  int local_54 [6];
  undefined4 local_3c;
  undefined4 local_38;
  pthread_t apStack_30 [4];
  
                    /* Unresolved local var: pthread_t[3] tids@[???]
                       Unresolved local var: ThreadData[3] data@[DW_OP_breg31(sp): +12]
                       Unresolved local var: int total@[DW_OP_breg31(sp): +4] */
  memset(local_54,0,0x24);
  local_54[0] = 1;
  local_54[1] = 10;
  local_54[3] = 0xb;
  local_54[4] = 0x14;
  local_3c = 0x15;
  local_38 = 0x1e;
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): +8] */
  for (local_58 = 0; local_58 < 3; local_58 = local_58 + 1) {
    iVar1 = pthread_create(apStack_30 + local_58,(pthread_attr_t *)0x0,thread_sum,
                           local_54 + (long)local_58 * 3);
    if (iVar1 != 0) {
      return -1;
    }
  }
  local_5c = 0;
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): 0] */
  local_60 = 0;
  while( true ) {
    if (2 < local_60) {
      return local_5c;
    }
    iVar1 = pthread_join(apStack_30[local_60],(void **)0x0);
    if (iVar1 != 0) break;
    local_5c = local_5c + local_54[(long)local_60 * 3 + 2];
    local_60 = local_60 + 1;
  }
  return -2;
}



/* Function: call_pthread_join @ 00102dec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  
  iVar1 = param_pthread_join();
  return iVar1;
}



/* Function: thread_increment @ 00102e00 */

void * thread_increment(void *arg)

{
  int iVar1;
  int local_20;
  
                    /* Unresolved local var: int iterations@[???] */
  iVar1 = *(int *)arg;
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): +16] */
  for (local_20 = 0; local_20 < iVar1; local_20 = local_20 + 1) {
    pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
    usleep(1000);
  }
  return (void *)0x0;
}



/* Function: param_mutex_lock @ 00102e8c */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  int iVar1;
  void *__ptr;
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  int local_14;
  
                    /* Unresolved local var: pthread_t * tids@[DW_OP_breg31(sp): +24]
                       Unresolved local var: int expected@[DW_OP_breg31(sp): +12] */
  local_1c = iterations_per_thread;
  local_18 = thread_count;
  __ptr = malloc((long)thread_count << 3);
  if (__ptr == (void *)0x0) {
    local_14 = -1;
  }
  else {
    shared_counter = 0;
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): +20] */
    for (local_2c = 0; local_2c < local_18; local_2c = local_2c + 1) {
      iVar1 = pthread_create((pthread_t *)((long)__ptr + (long)local_2c * 8),(pthread_attr_t *)0x0,
                             thread_increment,&local_1c);
      if (iVar1 != 0) {
        free(__ptr);
        return -2;
      }
    }
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): +16] */
    for (local_30 = 0; local_30 < local_18; local_30 = local_30 + 1) {
      pthread_join(*(pthread_t *)((long)__ptr + (long)local_30 * 8),(void **)0x0);
    }
    free(__ptr);
    local_14 = 0x2a;
    if (shared_counter != local_18 * local_1c) {
      local_14 = -3;
    }
  }
  return local_14;
}



/* Function: call_mutex_lock @ 00102fcc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = param_mutex_lock(4,1000);
  return iVar1;
}



/* Function: consumer_thread @ 00102fe8 */

void * consumer_thread(void *arg)

{
  int iVar1;
  int *piVar2;
  
                    /* Unresolved local var: int received@[???]
                       Unresolved local var: int * ret@[DW_OP_breg31(sp): +8] */
  pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
  while (iVar1 = data, ready == 0) {
    pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
  piVar2 = malloc(4);
  *piVar2 = iVar1;
  return piVar2;
}



/* Function: producer_thread @ 00103070 */

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



/* Function: param_condition_variable @ 001030d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
  int iVar1;
  int *local_30;
  pthread_t local_28;
  pthread_t local_20;
  int local_14;
  
                    /* Unresolved local var: pthread_t producer@[???]
                       Unresolved local var: pthread_t consumer@[DW_OP_breg31(sp): +24]
                       Unresolved local var: void * consumer_ret@[DW_OP_breg31(sp): +16]
                       Unresolved local var: int result@[DW_OP_breg31(sp): +12] */
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  if (iVar1 == 0) {
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar1 == 0) {
      pthread_join(local_28,&local_30);
      pthread_join(local_20,(void **)0x0);
      iVar1 = *local_30;
      free(local_30);
      local_14 = iVar1;
    }
    else {
      pthread_cancel(local_28);
      local_14 = -2;
    }
  }
  else {
    local_14 = -1;
  }
  return local_14;
}



/* Function: call_condition_variable @ 0010319c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  
  iVar1 = param_condition_variable();
  return iVar1;
}



/* Function: thread_atomic_increment @ 001031b0 */

void * thread_atomic_increment(void *arg)

{
  int iVar1;
  int local_20;
  
                    /* Unresolved local var: int iterations@[???] */
  iVar1 = *(int *)arg;
                    /* Unresolved local var: int i@[???] */
  for (local_20 = 0; local_20 < iVar1; local_20 = local_20 + 1) {
                    /* Unresolved local var: int expected@[???]
                       Unresolved local var: int desired@[DW_OP_breg31(sp): +32] */
    __aarch64_ldadd4_acq_rel(1);
    __aarch64_cas4_acq_rel(local_20,local_20 + 1000,&atomic_counter);
  }
  return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00103298 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * thread_atomic_load_store(void *arg)

{
                    /* Unresolved local var: int value@[???] */
  atomic_counter = atomic_counter + 100;
  return (void *)0x0;
}



/* Function: param_atomic_ops @ 001032d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_atomic_ops(int thread_count,int iterations)

{
  atomic_int aVar1;
  int iVar2;
  int local_3c;
  pthread_t local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  int local_1c;
  int local_18;
  int local_14;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: pthread_t load_store_tid@[DW_OP_breg31(sp): +24]
                       Unresolved local var: int final_value@[DW_OP_breg31(sp): +16] */
  local_1c = iterations;
  local_18 = thread_count;
  local_28 = malloc((long)thread_count << 3);
  if (local_28 == (void *)0x0) {
    local_14 = -1;
  }
  else {
    local_2c = 0;
    atomic_counter = 0;
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): +32] */
    for (local_30 = 0; local_30 < local_18; local_30 = local_30 + 1) {
      iVar2 = pthread_create((pthread_t *)((long)local_28 + (long)local_30 * 8),
                             (pthread_attr_t *)0x0,thread_atomic_increment,&local_1c);
      if (iVar2 != 0) {
        free(local_28);
        return -2;
      }
    }
    iVar2 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar2 == 0) {
      pthread_join(local_38,(void **)0x0);
    }
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): +20] */
    for (local_3c = 0; aVar1 = atomic_counter, local_3c < local_18; local_3c = local_3c + 1) {
      pthread_join(*(pthread_t *)((long)local_28 + (long)local_3c * 8),(void **)0x0);
    }
    free(local_28);
    local_14 = 0x2a;
    if (aVar1 < 1) {
      local_14 = -3;
    }
  }
  return local_14;
}



/* Function: call_atomic_ops @ 00103458 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  
  iVar1 = param_atomic_ops(4,500);
  return iVar1;
}



/* Function: thread_tls_test @ 00103474 */

void * thread_tls_test(void *arg)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
                    /* Unresolved local var: char * name@[???]
                       Unresolved local var: int initial@[???]
                       Unresolved local var: int * ret@[DW_OP_breg31(sp): +16] */
  lVar3 = tpidr_el0;
  piVar1 = (int *)(lVar3 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 0x32;
  strncpy((char *)(lVar3 + 0x14),arg,0x1f);
  piVar4 = malloc(8);
  *piVar4 = iVar2;
  piVar4[1] = *piVar1;
  return piVar4;
}



/* Function: param_thread_local_storage @ 00103504 */

int param_thread_local_storage(int thread_count)

{
  int iVar1;
  void *pvVar2;
  int *local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  void *local_28;
  void *local_20;
  int local_18;
  int local_14;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: char * * names@[???]
                       Unresolved local var: int total_initial@[???]
                       Unresolved local var: int total_final@[???]
                       Unresolved local var: int expected_initial@[DW_OP_breg31(sp): +28]
                       Unresolved local var: int expected_final@[DW_OP_breg31(sp): +24] */
  local_18 = thread_count;
  local_20 = malloc((long)thread_count << 3);
  local_28 = malloc((long)local_18 << 3);
  if ((local_20 == (void *)0x0) || (local_28 == (void *)0x0)) {
    local_14 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    for (local_2c = 0; (int)local_2c < local_18; local_2c = local_2c + 1) {
      pvVar2 = malloc(0x10);
      *(void **)((long)local_28 + (long)(int)local_2c * 8) = pvVar2;
      snprintf(*(char **)((long)local_28 + (long)(int)local_2c * 8),0x10,"Thread-%d",(ulong)local_2c
              );
    }
                    /* Unresolved local var: int i@[???] */
    for (local_30 = 0; local_30 < local_18; local_30 = local_30 + 1) {
      iVar1 = pthread_create((pthread_t *)((long)local_20 + (long)local_30 * 8),
                             (pthread_attr_t *)0x0,thread_tls_test,
                             *(void **)((long)local_28 + (long)local_30 * 8));
      if (iVar1 != 0) {
                    /* Unresolved local var: int j@[???] */
        for (local_34 = 0; local_34 <= local_30; local_34 = local_34 + 1) {
          free(*(void **)((long)local_28 + (long)local_34 * 8));
        }
        free(local_28);
        free(local_20);
        return -2;
      }
    }
    local_38 = 0;
    local_3c = 0;
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): +48] */
    for (local_40 = 0; local_40 < local_18; local_40 = local_40 + 1) {
                    /* Unresolved local var: void * ret@[DW_OP_breg31(sp): +40]
                       Unresolved local var: int * values@[DW_OP_breg31(sp): +32] */
      pthread_join(*(pthread_t *)((long)local_20 + (long)local_40 * 8),&local_48);
      local_38 = local_38 + *local_48;
      local_3c = local_3c + local_48[1];
      free(local_48);
      free(*(void **)((long)local_28 + (long)local_40 * 8));
    }
    free(local_28);
    free(local_20);
    local_14 = 0x2a;
    if (local_38 != local_18 * 100 || local_3c != local_18 * 0x96) {
      local_14 = -3;
    }
  }
  return local_14;
}



/* Function: call_thread_local_storage @ 001037a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  
  iVar1 = param_thread_local_storage(4);
  return iVar1;
}



/* Function: test_thread_concurrency @ 001037b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
  uint uVar1;
  
  printf(&DAT_00103c3a);
  uVar1 = call_pthread_create();
  printf(&DAT_00103c59,(ulong)uVar1);
  uVar1 = call_pthread_join();
  printf(&DAT_00103c75,(ulong)uVar1);
  uVar1 = call_mutex_lock();
  printf(&DAT_00103c92,(ulong)uVar1);
  uVar1 = call_condition_variable();
  printf(&DAT_00103cae,(ulong)uVar1);
  uVar1 = call_atomic_ops();
  printf(&DAT_00103cca,(ulong)uVar1);
  uVar1 = call_thread_local_storage();
  printf(&DAT_00103ce6,(ulong)uVar1);
  return;
}



/* Function: main @ 0010384c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: __aarch64_cas4_acq_rel @ 00103880 */

int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (__aarch64_have_lse_atomics != '\0') {
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



/* Function: __aarch64_ldadd4_acq_rel @ 001038c0 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (__aarch64_have_lse_atomics == '\0') {
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



/* Function: _fini @ 001038f0 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 75 */
