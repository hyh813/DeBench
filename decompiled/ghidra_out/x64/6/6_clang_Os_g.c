/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/6/6_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00102000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 001023c0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001023f0 */

/* WARNING: Removing unreachable block (ram,0x00102403) */
/* WARNING: Removing unreachable block (ram,0x0010240f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00102420 */

/* WARNING: Removing unreachable block (ram,0x00102444) */
/* WARNING: Removing unreachable block (ram,0x00102450) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00102460 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: param_strcpy @ 001024ac */

int param_strcpy(char *dst,char *src)

{
  size_t sVar1;
  
  strcpy(dst,src);
  sVar1 = strlen(dst);
  return (int)sVar1;
}



/* Function: call_strcpy @ 001024be */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
  size_t sVar1;
  char local_28 [40];
  
                    /* Unresolved local var: char[32] buffer@[???]
                       Unresolved local var: int len@[???] */
  builtin_strncpy(local_28,"HelloLib",9);
  sVar1 = strlen(local_28);
  return (int)sVar1;
}



/* Function: param_strcmp @ 001024e0 */

int param_strcmp(char *s1,char *s2)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = strcmp(s1,s2);
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = -(uint)(iVar1 != 0);
  }
  return iVar2;
}



/* Function: call_strcmp @ 001024fb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
  return 0;
}



/* Function: param_strlen @ 001024fe */

int param_strlen(char *str)

{
  size_t sVar1;
  
  sVar1 = strlen(str);
  return (int)sVar1;
                    /* Unresolved local var: size_t len@[???] */
}



/* Function: call_strlen @ 00102503 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
                    /* Unresolved local var: char * test@[???] */
  return 0xc;
}



/* Function: param_memcpy @ 00102509 */

int param_memcpy(void *dst,void *src,size_t n)

{
  memcpy(dst,src,n);
  return (int)n;
}



/* Function: call_memcpy @ 00102516 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
                    /* Unresolved local var: int[5] src@[???]
                       Unresolved local var: int[5] dst@[???] */
  return 0x5a;
}



/* Function: param_memcmp @ 0010251c */

int param_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = memcmp(p1,p2,n);
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = -(uint)(iVar1 != 0);
  }
  return iVar2;
}



/* Function: call_memcmp @ 00102537 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
                    /* Unresolved local var: int[3] arr1@[???]
                       Unresolved local var: int[3] arr2@[???]
                       Unresolved local var: int[3] arr3@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return -1;
}



/* Function: param_printf @ 0010253d */

int param_printf(int x,char *name)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = printf("Value: %d, Name: %s\n",x,name);
  return iVar1;
}



/* Function: call_printf @ 00102550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
  int iVar1;
  
                    /* Unresolved local var: int chars@[???] */
  iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
  return iVar1;
}



/* Function: param_scanf @ 0010256a */

int param_scanf(char *input_str)

{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined8 local_18;
  
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int ret@[???] */
  local_18 = in_RAX;
  iVar1 = __isoc99_sscanf(input_str,"%d,%d",(long)&local_18 + 4,&local_18);
  iVar2 = -1;
  if (iVar1 == 2) {
    iVar2 = (int)local_18 + local_18._4_4_;
  }
  return iVar2;
}



/* Function: call_scanf @ 001025a2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined8 local_18;
  
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int ret@[???] */
  local_18 = in_RAX;
  iVar1 = __isoc99_sscanf("123,456","%d,%d",(long)&local_18 + 4,&local_18);
  iVar2 = -1;
  if (iVar1 == 2) {
    iVar2 = (int)local_18 + local_18._4_4_;
  }
  return iVar2;
}



/* Function: param_fopen_fclose @ 001025e1 */

int param_fopen_fclose(char *filename)

{
  int iVar1;
  FILE *__stream;
  
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



/* Function: call_fopen_fclose @ 0010261a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
  int iVar1;
  
                    /* Unresolved local var: int fd@[???] */
  iVar1 = param_fopen_fclose("/etc/passwd");
  return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_fread_fwrite @ 0010262f */

int param_fread_fwrite(char *tmpfile)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char local_38 [4];
  char cStack_34;
  char cStack_33;
  char cStack_32;
  char cStack_31;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  char cStack_2d;
  char cStack_2c;
  char cStack_2b;
  char cStack_2a;
  char cStack_29;
  char cStack_28;
  char cStack_27;
  char cStack_26;
  
                    /* Unresolved local var: char[32] read_buffer@[???]
                       Unresolved local var: FILE * fp@[???]
                       Unresolved local var: size_t written@[???]
                       Unresolved local var: size_t read@[???]
                       Unresolved local var: char * write_data@[???] */
  __s = fopen(tmpfile,"w+");
  if (__s == (FILE *)0x0) {
    iVar1 = -1;
  }
  else {
    sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
    if (sVar2 == 0x12) {
      rewind(__s);
      sVar2 = fread(local_38,1,0x12,__s);
      local_38[sVar2] = '\0';
      fclose(__s);
      unlink(tmpfile);
      iVar1 = -3;
      if (sVar2 == 0x12) {
        auVar4[0] = -(local_38[3] == 'B');
        auVar4[1] = -(cStack_34 == 'e');
        auVar4[2] = -(cStack_33 == 'n');
        auVar4[3] = -(cStack_32 == 'c');
        auVar4[4] = -(cStack_31 == 'h');
        auVar4[5] = -(cStack_30 == ' ');
        auVar4[6] = -(cStack_2f == 'T');
        auVar4[7] = -(cStack_2e == 'e');
        auVar4[8] = -(cStack_2d == 's');
        auVar4[9] = -(cStack_2c == 't');
        auVar4[10] = -(cStack_2b == ' ');
        auVar4[0xb] = -(cStack_2a == 'D');
        auVar4[0xc] = -(cStack_29 == 'a');
        auVar4[0xd] = -(cStack_28 == 't');
        auVar4[0xe] = -(cStack_27 == 'a');
        auVar4[0xf] = -(cStack_26 == '\0');
        auVar3[0] = -(local_38[0] == 'B');
        auVar3[1] = -(local_38[1] == 'i');
        auVar3[2] = -(local_38[2] == 'n');
        auVar3[3] = -(local_38[3] == 'B');
        auVar3[4] = -(cStack_34 == 'e');
        auVar3[5] = -(cStack_33 == 'n');
        auVar3[6] = -(cStack_32 == 'c');
        auVar3[7] = -(cStack_31 == 'h');
        auVar3[8] = -(cStack_30 == ' ');
        auVar3[9] = -(cStack_2f == 'T');
        auVar3[10] = -(cStack_2e == 'e');
        auVar3[0xb] = -(cStack_2d == 's');
        auVar3[0xc] = -(cStack_2c == 't');
        auVar3[0xd] = -(cStack_2b == ' ');
        auVar3[0xe] = -(cStack_2a == 'D');
        auVar3[0xf] = -(cStack_29 == 'a');
        auVar3 = auVar3 & auVar4;
        iVar1 = -3;
        if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) == 0xffff) {
          iVar1 = 0x2a;
        }
      }
    }
    else {
      fclose(__s);
      iVar1 = -2;
    }
  }
  return iVar1;
}



/* Function: call_fread_fwrite @ 00102706 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
  int iVar1;
  
  iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  return iVar1;
}



/* Function: param_malloc_free @ 00102712 */

int param_malloc_free(size_t size)

{
  int *__ptr;
  int iVar1;
  size_t sVar2;
  int unaff_EBP;
  
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
      sVar2 = 0;
      do {
        __ptr[sVar2] = iVar1;
        sVar2 = sVar2 + 1;
        iVar1 = iVar1 + 10;
      } while (size != sVar2);
      unaff_EBP = *__ptr;
    }
    iVar1 = unaff_EBP + __ptr[size - 1];
    free(__ptr);
  }
  return iVar1;
}



/* Function: call_malloc_free @ 00102761 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
  int iVar1;
  
  iVar1 = param_malloc_free(10);
  return iVar1;
}



/* Function: param_memset @ 0010276b */

int param_memset(void *buffer,size_t size)

{
  size_t sVar1;
  int iVar2;
  
                    /* Unresolved local var: uchar * bytes@[???]
                       Unresolved local var: int sum@[???] */
  iVar2 = 0;
  memset(buffer,0,size);
                    /* Unresolved local var: size_t i@[???] */
  if (size != 0) {
    sVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + (uint)*(byte *)((long)buffer + sVar1);
      sVar1 = sVar1 + 1;
    } while (size != sVar1);
  }
  return iVar2;
}



/* Function: call_memset @ 001027a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
                    /* Unresolved local var: int[10] buffer@[???] */
  return 0;
}



/* Function: param_strchr_strstr @ 001027a3 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
  char *pcVar1;
  char *pcVar2;
  undefined7 in_register_00000031;
  
                    /* Unresolved local var: char * pos1@[???]
                       Unresolved local var: int index1@[???]
                       Unresolved local var: char * pos2@[???]
                       Unresolved local var: int index2@[???] */
  pcVar1 = strchr(str,(int)CONCAT71(in_register_00000031,ch));
  pcVar2 = strstr(str,substr);
  return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)str) +
         (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)str);
}



/* Function: call_strchr_strstr @ 001027dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: char * text@[???] */
  return 0xf;
}



/* Function: test_standard_library_functions @ 001027e2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  int local_3c;
  int local_38 [2];
  undefined1 local_30;
  
  puts(&DAT_001043af);
  local_38[0] = 0x6c6c6548;
  local_38[1] = 0x62694c6f;
                    /* Unresolved local var: char[32] buffer@[???] */
  local_30 = 0;
  sVar3 = strlen((char *)local_38);
  printf(&DAT_001040b7,sVar3 & 0xffffffff);
  printf(&DAT_001040d2,0);
  printf(&DAT_001040ed,0xc);
  printf(&DAT_00104109,0x5a);
  uVar1 = call_memcmp();
  printf(&DAT_00104125,(ulong)uVar1);
  uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
  printf(&DAT_00104141,(ulong)uVar1);
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int ret@[???] */
  iVar2 = __isoc99_sscanf("123,456","%d,%d",local_38,&local_3c);
  uVar4 = 0xffffffff;
  if (iVar2 == 2) {
    uVar4 = (ulong)(uint)(local_3c + local_38[0]);
  }
  printf(&DAT_0010415d,uVar4);
                    /* Unresolved local var: int fd@[???] */
  iVar2 = param_fopen_fclose("/etc/passwd");
  printf(&DAT_0010417a,(ulong)(iVar2 >> 0x1f | 0x2a));
  uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
  printf(&DAT_00104196,(ulong)uVar1);
  uVar1 = param_malloc_free(10);
  printf(&DAT_001041b2,(ulong)uVar1);
  printf(&DAT_001041ce,0);
  printf(&DAT_001041e9,0xf);
  return;
}



/* Function: param_linux_syscall @ 0010295b */

int param_linux_syscall(char *pathname)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  
                    /* Unresolved local var: int fd@[???] */
  uVar1 = syscall(2,pathname,0);
  iVar3 = (int)uVar1;
  if (iVar3 < 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  else {
    syscall(3,uVar1 & 0xffffffff);
  }
  return iVar3;
}



/* Function: call_linux_syscall @ 0010299a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
  int iVar1;
  
                    /* Unresolved local var: int result@[???] */
  iVar1 = param_linux_syscall("/etc/passwd");
  return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 001029af */

int param_win32_api(char *filename)

{
  int iVar1;
  int iVar2;
  int iVar3;
  stat sStack_98;
  
                    /* Unresolved local var: stat st@[???] */
  iVar1 = stat(filename,&sStack_98);
  iVar3 = -2;
  if (0 < sStack_98.st_size) {
    iVar3 = 0x2a;
  }
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar3;
  }
  return iVar2;
}



/* Function: call_win32_api @ 001029e7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  stat sStack_98;
  
                    /* Unresolved local var: stat st@[???] */
  iVar1 = stat("/etc/passwd",&sStack_98);
  iVar3 = -2;
  if (0 < sStack_98.st_size) {
    iVar3 = 0x2a;
  }
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar3;
  }
  return iVar2;
}



/* Function: param_fork_exec @ 00102a26 */

int param_fork_exec(char *prog,char *arg)

{
  __pid_t _Var1;
  uint uVar2;
  undefined8 in_RAX;
  uint local_14;
  
                    /* Unresolved local var: pid_t pid@[???] */
  local_14 = (uint)((ulong)in_RAX >> 0x20);
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
                    /* Unresolved local var: int status@[???]
                       Unresolved local var: pid_t wpid@[???] */
    _Var1 = waitpid(_Var1,(int *)&local_14,0);
    if (_Var1 < 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      uVar2 = 0xfffffffd;
      if ((local_14 & 0x7f) == 0) {
        uVar2 = local_14 >> 8 & 0xff;
      }
    }
  }
  return uVar2;
}



/* Function: call_fork_exec @ 00102a90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = param_fork_exec("/bin/true",(char *)0x0);
  return -(uint)(iVar1 != 0) | 0x2a;
}



/* Function: param_pipe_communication @ 00102aa8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  int local_30;
  int local_2c;
  undefined1 local_28 [32];
  
                    /* Unresolved local var: int[2] pipefd@[???]
                       Unresolved local var: char[32] buffer@[???]
                       Unresolved local var: pid_t pid@[???] */
  iVar1 = pipe(&local_30);
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
        close(local_30);
        write(local_2c,"HelloPipe",9);
        close(local_2c);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
                    /* Unresolved local var: ssize_t bytes@[???] */
      close(local_2c);
      sVar3 = read(local_30,local_28,0x1f);
      local_28[sVar3] = 0;
      close(local_30);
      wait((void *)0x0);
      iVar1 = -3;
      if (0 < sVar3) {
        iVar1 = 0x2a;
      }
    }
  }
  return iVar1;
}



/* Function: call_pipe_communication @ 00102b4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
  int iVar1;
  __pid_t _Var2;
  ssize_t sVar3;
  int iStack_30;
  int iStack_2c;
  undefined1 auStack_28 [32];
  
  iVar1 = pipe(&iStack_30);
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
        close(iStack_30);
        write(iStack_2c,"HelloPipe",9);
        close(iStack_2c);
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
      close(iStack_2c);
      sVar3 = read(iStack_30,auStack_28,0x1f);
      auStack_28[sVar3] = 0;
      close(iStack_30);
      wait((void *)0x0);
      iVar1 = -3;
      if (0 < sVar3) {
        iVar1 = 0x2a;
      }
    }
  }
  return iVar1;
}



/* Function: param_socket_create @ 00102b51 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_24;
  sockaddr local_20;
  
                    /* Unresolved local var: sockaddr_in addr@[???]
                       Unresolved local var: int sock@[???]
                       Unresolved local var: int opt@[???] */
  iVar1 = socket(2,1,0);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    local_24 = 1;
    iVar2 = setsockopt(iVar1,1,2,&local_24,4);
    if (iVar2 < 0) {
      close(iVar1);
      iVar1 = -2;
    }
    else {
      local_20.sa_data[6] = '\0';
      local_20.sa_data[7] = '\0';
      local_20.sa_data[8] = '\0';
      local_20.sa_data[9] = '\0';
      local_20.sa_data[10] = '\0';
      local_20.sa_data[0xb] = '\0';
      local_20.sa_data[0xc] = '\0';
      local_20.sa_data[0xd] = '\0';
      local_20.sa_family = 2;
      local_20.sa_data[0] = '\0';
      local_20.sa_data[1] = '\0';
      local_20.sa_data[2] = '\0';
      local_20.sa_data[3] = '\0';
      local_20.sa_data[4] = '\0';
      local_20.sa_data[5] = '\0';
      iVar2 = bind(iVar1,&local_20,0x10);
      if (iVar2 < 0) {
        close(iVar1);
        iVar1 = -3;
      }
      else {
        iVar2 = listen(iVar1,5);
        close(iVar1);
        iVar1 = 0x2a;
        if (iVar2 < 0) {
          iVar1 = -4;
        }
      }
    }
  }
  return iVar1;
}



/* Function: call_socket_create @ 00102c06 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_24;
  sockaddr sStack_20;
  
  iVar1 = socket(2,1,0);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    uStack_24 = 1;
    iVar2 = setsockopt(iVar1,1,2,&uStack_24,4);
    if (iVar2 < 0) {
      close(iVar1);
      iVar1 = -2;
    }
    else {
      sStack_20.sa_data[6] = '\0';
      sStack_20.sa_data[7] = '\0';
      sStack_20.sa_data[8] = '\0';
      sStack_20.sa_data[9] = '\0';
      sStack_20.sa_data[10] = '\0';
      sStack_20.sa_data[0xb] = '\0';
      sStack_20.sa_data[0xc] = '\0';
      sStack_20.sa_data[0xd] = '\0';
      sStack_20.sa_family = 2;
      sStack_20.sa_data[0] = '\0';
      sStack_20.sa_data[1] = '\0';
      sStack_20.sa_data[2] = '\0';
      sStack_20.sa_data[3] = '\0';
      sStack_20.sa_data[4] = '\0';
      sStack_20.sa_data[5] = '\0';
      iVar2 = bind(iVar1,&sStack_20,0x10);
      if (iVar2 < 0) {
        close(iVar1);
        iVar1 = -3;
      }
      else {
        iVar2 = listen(iVar1,5);
        close(iVar1);
        iVar1 = 0x2a;
        if (iVar2 < 0) {
          iVar1 = -4;
        }
      }
    }
  }
  return iVar1;
}



/* Function: param_shmget_shmat @ 00102c0b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
  int iVar1;
  key_t __key;
  char *__s;
  size_t sVar2;
  int iVar3;
  
                    /* Unresolved local var: char * ftok_path@[???]
                       Unresolved local var: int fd@[???]
                       Unresolved local var: key_t key@[???]
                       Unresolved local var: int shmid@[???]
                       Unresolved local var: char * shm@[???]
                       Unresolved local var: int len@[???] */
  iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
  iVar3 = -1;
  if (-1 < iVar1) {
    close(iVar1);
    __key = ftok("/tmp/binbench_shm",0x2a);
    if (-1 < __key) {
      iVar1 = shmget(__key,0x1000,0x3b6);
      if (iVar1 < 0) {
        iVar3 = -2;
      }
      else {
        __s = shmat(iVar1,(void *)0x0,0);
        if (__s == (char *)0xffffffffffffffff) {
          iVar3 = -3;
        }
        else {
          builtin_strncpy(__s,"SharedMemory",0xd);
          sVar2 = strlen(__s);
          iVar3 = (int)sVar2;
          shmdt(__s);
          shmctl(iVar1,0,(shmid_ds *)0x0);
        }
      }
    }
  }
  return iVar3;
}



/* Function: call_shmget_shmat @ 00102ccc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = param_shmget_shmat();
  iVar2 = -1;
  if (0 < iVar1) {
    iVar2 = 0x2a;
  }
  return iVar2;
}



/* Function: param_signal_handling @ 00102ce3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
  bool bVar1;
  int iVar2;
  __sighandler_t p_Var3;
  uint uVar4;
  
                    /* Unresolved local var: int attempts@[???] */
  p_Var3 = signal(10,signal_handler);
  if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
    iVar2 = -1;
  }
  else {
    p_Var3 = signal(0xe,signal_handler);
    if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
      iVar2 = -2;
    }
    else {
      signal_received = 0;
      raise(10);
      if (signal_received == 0) {
        uVar4 = 1000;
        do {
          usleep(1000);
          if (signal_received != 0) break;
          bVar1 = 1 < uVar4;
          uVar4 = uVar4 - 1;
        } while (bVar1);
      }
      if (signal_received == 0) {
        iVar2 = -3;
      }
      else {
        iVar2 = -4;
        if (signal_number == 10) {
          signal_received = 0;
          alarm(1);
          if (signal_received == 0) {
            uVar4 = 2000;
            do {
              usleep(1000);
              if (signal_received != 0) break;
              bVar1 = 1 < uVar4;
              uVar4 = uVar4 - 1;
            } while (bVar1);
          }
          iVar2 = -5;
          if ((signal_received != 0) && (signal_number == 0xe)) {
            signal(10,(__sighandler_t)0x0);
            signal(0xe,(__sighandler_t)0x0);
            iVar2 = 0x2a;
          }
        }
      }
    }
  }
  return iVar2;
}



/* Function: signal_handler @ 00102e06 */

void signal_handler(int sig)

{
  signal_received = 1;
  signal_number = sig;
  return;
}



/* Function: call_signal_handling @ 00102e17 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
  bool bVar1;
  int iVar2;
  __sighandler_t p_Var3;
  uint uVar4;
  
  p_Var3 = signal(10,signal_handler);
  if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
    iVar2 = -1;
  }
  else {
    p_Var3 = signal(0xe,signal_handler);
    if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
      iVar2 = -2;
    }
    else {
      signal_received = 0;
      raise(10);
      if (signal_received == 0) {
        uVar4 = 1000;
        do {
          usleep(1000);
          if (signal_received != 0) break;
          bVar1 = 1 < uVar4;
          uVar4 = uVar4 - 1;
        } while (bVar1);
      }
      if (signal_received == 0) {
        iVar2 = -3;
      }
      else {
        iVar2 = -4;
        if (signal_number == 10) {
          signal_received = 0;
          alarm(1);
          if (signal_received == 0) {
            uVar4 = 2000;
            do {
              usleep(1000);
              if (signal_received != 0) break;
              bVar1 = 1 < uVar4;
              uVar4 = uVar4 - 1;
            } while (bVar1);
          }
          iVar2 = -5;
          if ((signal_received != 0) && (signal_number == 0xe)) {
            signal(10,(__sighandler_t)0x0);
            signal(0xe,(__sighandler_t)0x0);
            iVar2 = 0x2a;
          }
        }
      }
    }
  }
  return iVar2;
}



/* Function: test_system_calls @ 00102e1c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  stat sStack_a8;
  
  puts(&DAT_001043d3);
                    /* Unresolved local var: int result@[???] */
  iVar1 = param_linux_syscall("/etc/passwd");
  printf(&DAT_00104238,(ulong)(iVar1 >> 0x1f | 0x2a));
                    /* Unresolved local var: stat st@[???] */
  stat("/etc/passwd",&sStack_a8);
  uVar3 = 0xffffffff;
  printf(&DAT_00104254);
                    /* Unresolved local var: int ret@[???] */
  iVar1 = param_fork_exec("/bin/true",(char *)0x0);
  printf(&DAT_00104270,(ulong)(-(uint)(iVar1 != 0) | 0x2a));
  uVar2 = param_pipe_communication();
  printf(&DAT_0010428c,(ulong)uVar2);
  uVar2 = param_socket_create();
  printf(&DAT_001042a8,(ulong)uVar2);
                    /* Unresolved local var: int ret@[???] */
  iVar1 = param_shmget_shmat();
  if (0 < iVar1) {
    uVar3 = 0x2a;
  }
  printf(&DAT_001042c4,(ulong)uVar3);
  uVar2 = param_signal_handling();
  printf(&DAT_001042e0,(ulong)uVar2);
  return;
}



/* Function: thread_compute @ 00102f16 */

void * thread_compute(void *arg)

{
  int iVar1;
  int *piVar2;
  
                    /* Unresolved local var: int * input@[???]
                       Unresolved local var: int value@[???]
                       Unresolved local var: int result@[???]
                       Unresolved local var: int * ret@[???] */
  iVar1 = *(int *)arg;
  piVar2 = malloc(4);
  *piVar2 = iVar1 * iVar1;
  return piVar2;
}



/* Function: param_pthread_create @ 00102f2a */

int param_pthread_create(int x)

{
  int iVar1;
  int iVar2;
  pthread_t local_20;
  int local_14;
  int *local_10;
  
                    /* Unresolved local var: int input@[???]
                       Unresolved local var: pthread_t tid@[???]
                       Unresolved local var: int ret@[???]
                       Unresolved local var: void * thread_ret@[???]
                       Unresolved local var: int result@[???] */
  local_14 = x;
  iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_14);
  iVar2 = -1;
  if (iVar1 == 0) {
    pthread_join(local_20,&local_10);
    iVar2 = *local_10;
    free(local_10);
  }
  return iVar2;
}



/* Function: call_pthread_create @ 00102f76 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
  int iVar1;
  
  iVar1 = param_pthread_create(7);
  return iVar1;
}



/* Function: thread_sum @ 00102f80 */

void * thread_sum(void *arg)

{
  uint uVar1;
  int iVar2;
  
                    /* Unresolved local var: ThreadData * data@[DW_OP_reg5(RDI)] */
  *(undefined4 *)((long)arg + 8) = 0;
                    /* Unresolved local var: int i@[???] */
  uVar1 = *(uint *)arg;
  iVar2 = *(int *)((long)arg + 4);
  if ((int)uVar1 <= iVar2) {
    *(uint *)((long)arg + 8) =
         (uVar1 + 1) * (iVar2 - uVar1) + uVar1 +
         (int)((ulong)(iVar2 - uVar1) * (ulong)(iVar2 + ~uVar1) >> 1);
  }
  return (void *)0x0;
}



/* Function: param_pthread_join @ 00102fb4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
  int iVar1;
  int iVar2;
  undefined8 *__arg;
  int *piVar3;
  long lVar4;
  pthread_t local_68 [4];
  undefined8 local_48;
  int aiStack_40 [10];
  
                    /* Unresolved local var: pthread_t[3] tids@[???]
                       Unresolved local var: ThreadData[3] data@[???]
                       Unresolved local var: int total@[???] */
  __arg = &local_48;
  aiStack_40[6] = 0;
  local_48 = 0xa00000001;
  aiStack_40[0] = 0;
  aiStack_40[1] = 0xb;
  aiStack_40[2] = 0x14;
  aiStack_40[3] = 0;
  aiStack_40[4] = 0x15;
  aiStack_40[5] = 0x1e;
  lVar4 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    iVar1 = pthread_create((pthread_t *)((long)local_68 + lVar4),(pthread_attr_t *)0x0,thread_sum,
                           __arg);
    if (iVar1 != 0) {
      return -1;
    }
    __arg = (undefined8 *)((long)__arg + 0xc);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x18);
                    /* Unresolved local var: int i@[???] */
  piVar3 = aiStack_40;
  lVar4 = 0;
  iVar1 = 0;
  do {
    iVar2 = pthread_join(local_68[lVar4],(void **)0x0);
    if (iVar2 != 0) {
      return -2;
    }
    iVar1 = iVar1 + *piVar3;
    lVar4 = lVar4 + 1;
    piVar3 = piVar3 + 3;
  } while (lVar4 != 3);
  return iVar1;
}



/* Function: call_pthread_join @ 0010306c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
  int iVar1;
  int iVar2;
  undefined8 *__arg;
  int *piVar3;
  long lVar4;
  pthread_t apStack_68 [4];
  undefined8 uStack_48;
  int aiStack_40 [10];
  
  __arg = &uStack_48;
  aiStack_40[6] = 0;
  uStack_48 = 0xa00000001;
  aiStack_40[0] = 0;
  aiStack_40[1] = 0xb;
  aiStack_40[2] = 0x14;
  aiStack_40[3] = 0;
  aiStack_40[4] = 0x15;
  aiStack_40[5] = 0x1e;
  lVar4 = 0;
  do {
    iVar1 = pthread_create((pthread_t *)((long)apStack_68 + lVar4),(pthread_attr_t *)0x0,thread_sum,
                           __arg);
    if (iVar1 != 0) {
      return -1;
    }
    __arg = (undefined8 *)((long)__arg + 0xc);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x18);
  piVar3 = aiStack_40;
  lVar4 = 0;
  iVar1 = 0;
  do {
    iVar2 = pthread_join(apStack_68[lVar4],(void **)0x0);
    if (iVar2 != 0) {
      return -2;
    }
    iVar1 = iVar1 + *piVar3;
    lVar4 = lVar4 + 1;
    piVar3 = piVar3 + 3;
  } while (lVar4 != 3);
  return iVar1;
}



/* Function: thread_increment @ 00103071 */

void * thread_increment(void *arg)

{
  int iVar1;
  
                    /* Unresolved local var: int iterations@[???] */
  iVar1 = *(int *)arg;
                    /* Unresolved local var: int i@[???] */
  if (0 < iVar1) {
    do {
      pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
      shared_counter = shared_counter + 1;
      pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
      usleep(1000);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return (void *)0x0;
}



/* Function: param_mutex_lock @ 001030ae */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
  int iVar1;
  undefined8 in_RAX;
  void *__ptr;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int local_38;
  int local_34;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: int expected@[???] */
  local_34 = (int)((ulong)in_RAX >> 0x20);
  local_38 = iterations_per_thread;
  __ptr = malloc((long)thread_count << 3);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    shared_counter = 0;
                    /* Unresolved local var: int i@[???] */
    if (0 < thread_count) {
      uVar3 = (ulong)(uint)thread_count;
      lVar4 = 0;
      local_34 = thread_count;
      do {
        iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
                               thread_increment,&local_38);
        thread_count = local_34;
        if (iVar1 != 0) {
          free(__ptr);
          return -2;
        }
        lVar4 = lVar4 + 8;
      } while (uVar3 * 8 - lVar4 != 0);
                    /* Unresolved local var: int i@[???] */
      if (0 < local_34) {
        uVar2 = 0;
        do {
          pthread_join(*(pthread_t *)((long)__ptr + uVar2 * 8),(void **)0x0);
          uVar2 = uVar2 + 1;
        } while (uVar3 != uVar2);
      }
    }
    free(__ptr);
    iVar1 = -3;
    if (shared_counter == thread_count * local_38) {
      iVar1 = 0x2a;
    }
  }
  return iVar1;
}



/* Function: call_mutex_lock @ 00103188 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
  int iVar1;
  
  iVar1 = param_mutex_lock(4,1000);
  return iVar1;
}



/* Function: consumer_thread @ 00103197 */

void * consumer_thread(void *arg)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
                    /* Unresolved local var: int received@[???]
                       Unresolved local var: int * ret@[???] */
  pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
  if (ready == '\0') {
    do {
      pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
    } while (ready != '\x01');
  }
  uVar2 = 0x2a;
  if (data == '\0') {
    uVar2 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
  puVar1 = malloc(4);
  *puVar1 = uVar2;
  return puVar1;
}



/* Function: producer_thread @ 00103203 */

void * producer_thread(void *arg)

{
  sleep(1);
  pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
  data = 1;
  ready = 1;
  pthread_cond_signal((pthread_cond_t *)&cond);
  pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
  return (void *)0x0;
}



/* Function: param_condition_variable @ 00103243 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
  int iVar1;
  int iVar2;
  pthread_t local_20;
  pthread_t local_18;
  int *local_10;
  
                    /* Unresolved local var: pthread_t consumer@[???]
                       Unresolved local var: pthread_t producer@[???]
                       Unresolved local var: void * consumer_ret@[???]
                       Unresolved local var: int result@[???] */
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  iVar2 = -1;
  if (iVar1 == 0) {
    iVar2 = pthread_create(&local_18,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar2 == 0) {
      pthread_join(local_20,&local_10);
      pthread_join(local_18,(void **)0x0);
      iVar2 = *local_10;
      free(local_10);
    }
    else {
      pthread_cancel(local_20);
      iVar2 = -2;
    }
  }
  return iVar2;
}



/* Function: call_condition_variable @ 001032ce */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
  int iVar1;
  int iVar2;
  pthread_t pStack_20;
  pthread_t pStack_18;
  int *piStack_10;
  
  ready = 0;
  data = 0;
  iVar1 = pthread_create(&pStack_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
  iVar2 = -1;
  if (iVar1 == 0) {
    iVar2 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
    if (iVar2 == 0) {
      pthread_join(pStack_20,&piStack_10);
      pthread_join(pStack_18,(void **)0x0);
      iVar2 = *piStack_10;
      free(piStack_10);
    }
    else {
      pthread_cancel(pStack_20);
      iVar2 = -2;
    }
  }
  return iVar2;
}



/* Function: thread_atomic_increment @ 001032d3 */

void * thread_atomic_increment(void *arg)

{
  atomic_int aVar1;
  int iVar2;
  
                    /* Unresolved local var: int iterations@[???] */
                    /* Unresolved local var: int i@[???] */
  if (0 < *(int *)arg) {
    iVar2 = 0;
    do {
                    /* Unresolved local var: int expected@[???]
                       Unresolved local var: int desired@[???] */
      LOCK();
      atomic_counter = atomic_counter + 1;
      UNLOCK();
      LOCK();
      aVar1 = iVar2 + 1000;
      if (iVar2 != atomic_counter) {
        aVar1 = atomic_counter;
      }
      atomic_counter = aVar1;
      UNLOCK();
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int *)arg);
  }
  return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 001032fb */

void * thread_atomic_load_store(void *arg)

{
                    /* Unresolved local var: int value@[???] */
  LOCK();
  atomic_counter = atomic_counter + 100;
  UNLOCK();
  return (void *)0x0;
}



/* Function: param_atomic_ops @ 0010330d */

int param_atomic_ops(int thread_count,int iterations)

{
  atomic_int aVar1;
  int iVar2;
  void *__ptr;
  ulong uVar3;
  long lVar4;
  int local_3c;
  pthread_t local_38;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: pthread_t load_store_tid@[???]
                       Unresolved local var: int final_value@[???] */
  local_3c = iterations;
  __ptr = malloc((long)thread_count << 3);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    LOCK();
    atomic_counter = 0;
    UNLOCK();
                    /* Unresolved local var: int i@[???] */
    if (0 < thread_count) {
      lVar4 = 0;
      do {
        iVar2 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
                               thread_atomic_increment,&local_3c);
        if (iVar2 != 0) {
          free(__ptr);
          return -2;
        }
        lVar4 = lVar4 + 8;
      } while ((ulong)(uint)thread_count * 8 - lVar4 != 0);
    }
    iVar2 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
    if (iVar2 == 0) {
      pthread_join(local_38,(void **)0x0);
    }
                    /* Unresolved local var: int i@[???] */
    if (0 < thread_count) {
      uVar3 = 0;
      do {
        pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
        uVar3 = uVar3 + 1;
      } while ((uint)thread_count != uVar3);
    }
    aVar1 = atomic_counter;
    free(__ptr);
    iVar2 = -3;
    if (0 < aVar1) {
      iVar2 = 0x2a;
    }
  }
  return iVar2;
}



/* Function: call_atomic_ops @ 00103404 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
  int iVar1;
  
  iVar1 = param_atomic_ops(4,500);
  return iVar1;
}



/* Function: thread_tls_test @ 00103413 */

void * thread_tls_test(void *arg)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long *in_FS_OFFSET;
  
                    /* Unresolved local var: char * name@[???]
                       Unresolved local var: int initial@[???]
                       Unresolved local var: int * ret@[???] */
  lVar2 = in_FS_OFFSET[-6];
  iVar1 = (int)lVar2 + 0x32;
  *(int *)(in_FS_OFFSET + -6) = iVar1;
  strncpy((char *)(*in_FS_OFFSET + -0x20),arg,0x1f);
  piVar3 = malloc(8);
  *piVar3 = (int)lVar2;
  piVar3[1] = iVar1;
  return piVar3;
}



/* Function: param_thread_local_storage @ 0010345c */

int param_thread_local_storage(int thread_count)

{
  int iVar1;
  int iVar2;
  pthread_t *__ptr;
  void *__ptr_00;
  char *__s;
  ulong uVar3;
  pthread_t *__newthread;
  ulong uVar4;
  int iVar5;
  int *local_38;
  
                    /* Unresolved local var: pthread_t * tids@[???]
                       Unresolved local var: char * * names@[???]
                       Unresolved local var: int total_final@[???]
                       Unresolved local var: int total_initial@[???]
                       Unresolved local var: int expected_initial@[???]
                       Unresolved local var: int expected_final@[???] */
  uVar4 = (ulong)(uint)thread_count;
  __ptr = malloc((long)thread_count << 3);
  __ptr_00 = malloc((long)thread_count << 3);
  if (__ptr == (pthread_t *)0x0) {
    return -1;
  }
  if (__ptr_00 == (void *)0x0) {
    return -1;
  }
                    /* Unresolved local var: int i@[???] */
  if (0 < thread_count) {
    uVar3 = 0;
    do {
      __s = malloc(0x10);
      *(char **)((long)__ptr_00 + uVar3 * 8) = __s;
      snprintf(__s,0x10,"Thread-%d",uVar3 & 0xffffffff);
      uVar3 = uVar3 + 1;
    } while (uVar4 != uVar3);
                    /* Unresolved local var: int i@[???] */
    if (0 < thread_count) {
      uVar3 = 0;
      __newthread = __ptr;
      do {
        iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
                               *(void **)((long)__ptr_00 + uVar3 * 8));
        if (iVar1 != 0) {
          uVar4 = 0xffffffffffffffff;
          do {
                    /* Unresolved local var: int j@[???] */
            free(*(void **)((long)__ptr_00 + uVar4 * 8 + 8));
            uVar4 = uVar4 + 1;
          } while (uVar3 != uVar4);
          free(__ptr_00);
          free(__ptr);
          return -2;
        }
        uVar3 = uVar3 + 1;
        __newthread = __newthread + 1;
      } while (uVar4 != uVar3);
                    /* Unresolved local var: int i@[???] */
      if (thread_count < 1) {
        iVar1 = 0;
        iVar5 = 0;
      }
      else {
        uVar3 = 0;
        iVar5 = 0;
        iVar1 = 0;
        do {
                    /* Unresolved local var: void * ret@[???]
                       Unresolved local var: int * values@[???] */
          pthread_join(__ptr[uVar3],&local_38);
          iVar1 = iVar1 + *local_38;
          iVar5 = iVar5 + local_38[1];
          free(local_38);
          free(*(void **)((long)__ptr_00 + uVar3 * 8));
          uVar3 = uVar3 + 1;
        } while (uVar4 != uVar3);
      }
      goto LAB_00103572;
    }
  }
  iVar1 = 0;
  iVar5 = 0;
LAB_00103572:
  free(__ptr_00);
  free(__ptr);
  iVar2 = -3;
  if (thread_count * 0x96 == iVar5 && thread_count * 100 == iVar1) {
    iVar2 = 0x2a;
  }
  return iVar2;
}



/* Function: call_thread_local_storage @ 001035f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
  int iVar1;
  
  iVar1 = param_thread_local_storage(4);
  return iVar1;
}



/* Function: test_thread_concurrency @ 001035fa */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
  uint uVar1;
  undefined8 in_RAX;
  undefined8 extraout_RDX;
  
  puts(&DAT_001043ee);
  uVar1 = param_pthread_create(7);
  printf(&DAT_00104306,(ulong)uVar1);
  uVar1 = param_pthread_join();
  printf(&DAT_00104322,(ulong)uVar1);
  uVar1 = param_mutex_lock(4,1000);
  printf(&DAT_0010433f,(ulong)uVar1);
  uVar1 = param_condition_variable();
  printf(&DAT_0010435b,(ulong)uVar1);
  uVar1 = param_atomic_ops(4,500);
  printf(&DAT_00104377,(ulong)uVar1);
  uVar1 = param_thread_local_storage(4);
  printf(&DAT_00104393,(ulong)uVar1,extraout_RDX,in_RAX);
  return;
}



/* Function: main @ 001036a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_standard_library_functions();
  test_system_calls();
  test_thread_concurrency();
  return 0;
}



/* Function: _fini @ 001036b8 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 70 */
