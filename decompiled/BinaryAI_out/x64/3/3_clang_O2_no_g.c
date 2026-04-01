// Decompiled by BinaryAI
// SHA256: 352599a2fec09d8ac0cce260aa9d990413d6470fc269ec61716bfc8a97ec8c82

// Function: _init @ 0x101000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = __gmon_start__();
  return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::free @ 0x101030
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::puts @ 0x101040
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::printf @ 0x101050
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x101060
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x101070
int memcmp(void *__s1,void *__s2,size_t __n)
{
  int iVar1;
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}

// Function: <EXTERNAL>::calloc @ 0x101080
void * calloc(size_t __nmemb,size_t __size)
{
  void *pvVar1;
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::memcpy @ 0x101090
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::malloc @ 0x1010a0
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::realloc @ 0x1010b0
void * realloc(void *__ptr,size_t __size)
{
  void *pvVar1;
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::memmove @ 0x1010c0
void * memmove(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x1010d0
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
  __pid_t _Var1;
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}

// Function: <EXTERNAL>::perror @ 0x1010e0
void perror(char *__s)
{
  perror(__s);
  return;
}

// Function: <EXTERNAL>::exit @ 0x1010f0
void exit(int __status)
{
  exit(__status);
}

// Function: <EXTERNAL>::fork @ 0x101100
__pid_t fork(void)
{
  __pid_t _Var1;
  _Var1 = fork();
  return _Var1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101110
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: _start @ 0x101120
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x101150
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x101180
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x1011c0
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

// Function: local_vars @ 0x101210
int local_vars(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: local_array @ 0x101220
int local_array(int param_1)
{
  return param_1 * 5;
}

// Function: local_struct @ 0x101230
int local_struct(int param_1)
{
  return param_1 * 3;
}

// Function: address_of_local @ 0x101240
undefined8 address_of_local(undefined4 *param_1)
{
  *param_1 = 0x2a;
  return 0x2a;
}

// Function: address_of_array @ 0x101250
int address_of_array(int *param_1)
{
  return *param_1 * 2;
}

// Function: large_stack_frame @ 0x101260
int large_stack_frame(void)
{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte abStack_808 [1024];
  char local_408;
  bVar2 = 0;
  bVar3 = 1;
  bVar4 = 2;
  bVar5 = 3;
  bVar6 = 4;
  bVar7 = 5;
  bVar8 = 6;
  bVar9 = 7;
  bVar10 = 8;
  bVar11 = 9;
  bVar12 = 10;
  bVar13 = 0xb;
  bVar14 = 0xc;
  bVar15 = 0xd;
  bVar16 = 0xe;
  bVar17 = 0xf;
  lVar1 = 0;
  do {
    abStack_808[lVar1] = bVar2;
    abStack_808[lVar1 + 1] = bVar3;
    abStack_808[lVar1 + 2] = bVar4;
    abStack_808[lVar1 + 3] = bVar5;
    abStack_808[lVar1 + 4] = bVar6;
    abStack_808[lVar1 + 5] = bVar7;
    abStack_808[lVar1 + 6] = bVar8;
    abStack_808[lVar1 + 7] = bVar9;
    abStack_808[lVar1 + 8] = bVar10;
    abStack_808[lVar1 + 9] = bVar11;
    abStack_808[lVar1 + 10] = bVar12;
    abStack_808[lVar1 + 0xb] = bVar13;
    abStack_808[lVar1 + 0xc] = bVar14;
    abStack_808[lVar1 + 0xd] = bVar15;
    abStack_808[lVar1 + 0xe] = bVar16;
    abStack_808[lVar1 + 0xf] = bVar17;
    abStack_808[lVar1 + 0x10] = bVar2 + 0x10;
    abStack_808[lVar1 + 0x11] = bVar3 + 0x10;
    abStack_808[lVar1 + 0x12] = bVar4 + 0x10;
    abStack_808[lVar1 + 0x13] = bVar5 + 0x10;
    abStack_808[lVar1 + 0x14] = bVar6 + 0x10;
    abStack_808[lVar1 + 0x15] = bVar7 + 0x10;
    abStack_808[lVar1 + 0x16] = bVar8 + 0x10;
    abStack_808[lVar1 + 0x17] = bVar9 + 0x10;
    abStack_808[lVar1 + 0x18] = bVar10 + 0x10;
    abStack_808[lVar1 + 0x19] = bVar11 + 0x10;
    abStack_808[lVar1 + 0x1a] = bVar12 + 0x10;
    abStack_808[lVar1 + 0x1b] = bVar13 + 0x10;
    abStack_808[lVar1 + 0x1c] = bVar14 + 0x10;
    abStack_808[lVar1 + 0x1d] = bVar15 + 0x10;
    abStack_808[lVar1 + 0x1e] = bVar16 + 0x10;
    abStack_808[lVar1 + 0x1f] = bVar17 + 0x10;
    abStack_808[lVar1 + 0x20] = bVar2 + 0x20;
    abStack_808[lVar1 + 0x21] = bVar3 + 0x20;
    abStack_808[lVar1 + 0x22] = bVar4 + 0x20;
    abStack_808[lVar1 + 0x23] = bVar5 + 0x20;
    abStack_808[lVar1 + 0x24] = bVar6 + 0x20;
    abStack_808[lVar1 + 0x25] = bVar7 + 0x20;
    abStack_808[lVar1 + 0x26] = bVar8 + 0x20;
    abStack_808[lVar1 + 0x27] = bVar9 + 0x20;
    abStack_808[lVar1 + 0x28] = bVar10 + 0x20;
    abStack_808[lVar1 + 0x29] = bVar11 + 0x20;
    abStack_808[lVar1 + 0x2a] = bVar12 + 0x20;
    abStack_808[lVar1 + 0x2b] = bVar13 + 0x20;
    abStack_808[lVar1 + 0x2c] = bVar14 + 0x20;
    abStack_808[lVar1 + 0x2d] = bVar15 + 0x20;
    abStack_808[lVar1 + 0x2e] = bVar16 + 0x20;
    abStack_808[lVar1 + 0x2f] = bVar17 + 0x20;
    abStack_808[lVar1 + 0x30] = bVar2 + 0x30;
    abStack_808[lVar1 + 0x31] = bVar3 + 0x30;
    abStack_808[lVar1 + 0x32] = bVar4 + 0x30;
    abStack_808[lVar1 + 0x33] = bVar5 + 0x30;
    abStack_808[lVar1 + 0x34] = bVar6 + 0x30;
    abStack_808[lVar1 + 0x35] = bVar7 + 0x30;
    abStack_808[lVar1 + 0x36] = bVar8 + 0x30;
    abStack_808[lVar1 + 0x37] = bVar9 + 0x30;
    abStack_808[lVar1 + 0x38] = bVar10 + 0x30;
    abStack_808[lVar1 + 0x39] = bVar11 + 0x30;
    abStack_808[lVar1 + 0x3a] = bVar12 + 0x30;
    abStack_808[lVar1 + 0x3b] = bVar13 + 0x30;
    abStack_808[lVar1 + 0x3c] = bVar14 + 0x30;
    abStack_808[lVar1 + 0x3d] = bVar15 + 0x30;
    abStack_808[lVar1 + 0x3e] = bVar16 + 0x30;
    abStack_808[lVar1 + 0x3f] = bVar17 + 0x30;
    abStack_808[lVar1 + 0x40] = bVar2 + 0x40;
    abStack_808[lVar1 + 0x41] = bVar3 + 0x40;
    abStack_808[lVar1 + 0x42] = bVar4 + 0x40;
    abStack_808[lVar1 + 0x43] = bVar5 + 0x40;
    abStack_808[lVar1 + 0x44] = bVar6 + 0x40;
    abStack_808[lVar1 + 0x45] = bVar7 + 0x40;
    abStack_808[lVar1 + 0x46] = bVar8 + 0x40;
    abStack_808[lVar1 + 0x47] = bVar9 + 0x40;
    abStack_808[lVar1 + 0x48] = bVar10 + 0x40;
    abStack_808[lVar1 + 0x49] = bVar11 + 0x40;
    abStack_808[lVar1 + 0x4a] = bVar12 + 0x40;
    abStack_808[lVar1 + 0x4b] = bVar13 + 0x40;
    abStack_808[lVar1 + 0x4c] = bVar14 + 0x40;
    abStack_808[lVar1 + 0x4d] = bVar15 + 0x40;
    abStack_808[lVar1 + 0x4e] = bVar16 + 0x40;
    abStack_808[lVar1 + 0x4f] = bVar17 + 0x40;
    abStack_808[lVar1 + 0x50] = bVar2 + 0x50;
    abStack_808[lVar1 + 0x51] = bVar3 + 0x50;
    abStack_808[lVar1 + 0x52] = bVar4 + 0x50;
    abStack_808[lVar1 + 0x53] = bVar5 + 0x50;
    abStack_808[lVar1 + 0x54] = bVar6 + 0x50;
    abStack_808[lVar1 + 0x55] = bVar7 + 0x50;
    abStack_808[lVar1 + 0x56] = bVar8 + 0x50;
    abStack_808[lVar1 + 0x57] = bVar9 + 0x50;
    abStack_808[lVar1 + 0x58] = bVar10 + 0x50;
    abStack_808[lVar1 + 0x59] = bVar11 + 0x50;
    abStack_808[lVar1 + 0x5a] = bVar12 + 0x50;
    abStack_808[lVar1 + 0x5b] = bVar13 + 0x50;
    abStack_808[lVar1 + 0x5c] = bVar14 + 0x50;
    abStack_808[lVar1 + 0x5d] = bVar15 + 0x50;
    abStack_808[lVar1 + 0x5e] = bVar16 + 0x50;
    abStack_808[lVar1 + 0x5f] = bVar17 + 0x50;
    abStack_808[lVar1 + 0x60] = bVar2 + 0x60;
    abStack_808[lVar1 + 0x61] = bVar3 + 0x60;
    abStack_808[lVar1 + 0x62] = bVar4 + 0x60;
    abStack_808[lVar1 + 99] = bVar5 + 0x60;
    abStack_808[lVar1 + 100] = bVar6 + 0x60;
    abStack_808[lVar1 + 0x65] = bVar7 + 0x60;
    abStack_808[lVar1 + 0x66] = bVar8 + 0x60;
    abStack_808[lVar1 + 0x67] = bVar9 + 0x60;
    abStack_808[lVar1 + 0x68] = bVar10 + 0x60;
    abStack_808[lVar1 + 0x69] = bVar11 + 0x60;
    abStack_808[lVar1 + 0x6a] = bVar12 + 0x60;
    abStack_808[lVar1 + 0x6b] = bVar13 + 0x60;
    abStack_808[lVar1 + 0x6c] = bVar14 + 0x60;
    abStack_808[lVar1 + 0x6d] = bVar15 + 0x60;
    abStack_808[lVar1 + 0x6e] = bVar16 + 0x60;
    abStack_808[lVar1 + 0x6f] = bVar17 + 0x60;
    abStack_808[lVar1 + 0x70] = bVar2 + 0x70;
    abStack_808[lVar1 + 0x71] = bVar3 + 0x70;
    abStack_808[lVar1 + 0x72] = bVar4 + 0x70;
    abStack_808[lVar1 + 0x73] = bVar5 + 0x70;
    abStack_808[lVar1 + 0x74] = bVar6 + 0x70;
    abStack_808[lVar1 + 0x75] = bVar7 + 0x70;
    abStack_808[lVar1 + 0x76] = bVar8 + 0x70;
    abStack_808[lVar1 + 0x77] = bVar9 + 0x70;
    abStack_808[lVar1 + 0x78] = bVar10 + 0x70;
    abStack_808[lVar1 + 0x79] = bVar11 + 0x70;
    abStack_808[lVar1 + 0x7a] = bVar12 + 0x70;
    abStack_808[lVar1 + 0x7b] = bVar13 + 0x70;
    abStack_808[lVar1 + 0x7c] = bVar14 + 0x70;
    abStack_808[lVar1 + 0x7d] = bVar15 + 0x70;
    abStack_808[lVar1 + 0x7e] = bVar16 + 0x70;
    abStack_808[lVar1 + 0x7f] = bVar17 + 0x70;
    lVar1 = lVar1 + 0x80;
    bVar2 = bVar2 ^ 0x80;
    bVar3 = bVar3 ^ 0x80;
    bVar4 = bVar4 ^ 0x80;
    bVar5 = bVar5 ^ 0x80;
    bVar6 = bVar6 ^ 0x80;
    bVar7 = bVar7 ^ 0x80;
    bVar8 = bVar8 ^ 0x80;
    bVar9 = bVar9 ^ 0x80;
    bVar10 = bVar10 ^ 0x80;
    bVar11 = bVar11 ^ 0x80;
    bVar12 = bVar12 ^ 0x80;
    bVar13 = bVar13 ^ 0x80;
    bVar14 = bVar14 ^ 0x80;
    bVar15 = bVar15 ^ 0x80;
    bVar16 = bVar16 ^ 0x80;
    bVar17 = bVar17 ^ 0x80;
  } while (lVar1 != 0x800);
  return (int)local_408;
}

// Function: vla_stack @ 0x101350
undefined4 vla_stack(uint param_1)
{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  if (param_1 - 0x3e9 < 0xfffffc18) {
    return 0xffffffff;
  }
  uVar13 = (ulong)param_1;
  lVar2 = -(uVar13 * 4 + 0xf & 0xfffffffffffffff0);
  lVar7 = lVar2 + -8;
  if (param_1 < 8) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulong)(param_1 & 0xfffffff8);
    uVar12 = (uVar11 - 8 >> 3) + 1;
    if (uVar11 - 8 == 0) {
      iVar8 = 0;
      iVar14 = 2;
      iVar15 = 4;
      iVar16 = 6;
      lVar9 = 0;
    }
    else {
      uVar10 = uVar12 & 0xfffffffffffffffe;
      iVar8 = 0;
      iVar14 = 1;
      iVar15 = 2;
      iVar16 = 3;
      lVar9 = 0;
      do {
        iVar3 = iVar8 * 2;
        iVar4 = iVar14 * 2;
        iVar5 = iVar15 * 2;
        iVar6 = iVar16 * 2;
        piVar1 = (int *)(&stack0xfffffffffffffff8 + lVar9 * 4 + lVar7 + 8);
        *piVar1 = iVar3;
        piVar1[1] = iVar4;
        piVar1[2] = iVar5;
        piVar1[3] = iVar6;
        piVar1 = (int *)(&stack0x00000008 + lVar9 * 4 + lVar2);
        *piVar1 = iVar3 + 8;
        piVar1[1] = iVar4 + 8;
        piVar1[2] = iVar5 + 8;
        piVar1[3] = iVar6 + 8;
        piVar1 = (int *)(&stack0x00000018 + lVar9 * 4 + lVar2);
        *piVar1 = iVar3 + 0x10;
        piVar1[1] = iVar4 + 0x10;
        piVar1[2] = iVar5 + 0x10;
        piVar1[3] = iVar6 + 0x10;
        piVar1 = (int *)(&stack0x00000028 + lVar9 * 4 + lVar2);
        *piVar1 = iVar3 + 0x18;
        piVar1[1] = iVar4 + 0x18;
        piVar1[2] = iVar5 + 0x18;
        piVar1[3] = iVar6 + 0x18;
        lVar9 = lVar9 + 0x10;
        iVar8 = iVar8 + 0x10;
        iVar14 = iVar14 + 0x10;
        iVar15 = iVar15 + 0x10;
        iVar16 = iVar16 + 0x10;
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
      iVar8 = iVar8 * 2;
      iVar14 = iVar14 * 2;
      iVar15 = iVar15 * 2;
      iVar16 = iVar16 * 2;
    }
    if ((uVar12 & 1) != 0) {
      piVar1 = (int *)(&stack0xfffffffffffffff8 + lVar9 * 4 + lVar7 + 8);
      *piVar1 = iVar8;
      piVar1[1] = iVar14;
      piVar1[2] = iVar15;
      piVar1[3] = iVar16;
      piVar1 = (int *)(&stack0x00000008 + lVar9 * 4 + lVar2);
      *piVar1 = iVar8 + 8;
      piVar1[1] = iVar14 + 8;
      piVar1[2] = iVar15 + 8;
      piVar1[3] = iVar16 + 8;
    }
    if (uVar11 == uVar13) goto LAB_0010145f;
  }
  iVar8 = (int)uVar11 * 2;
  do {
    *(int *)(&stack0xfffffffffffffff8 + uVar11 * 4 + lVar7 + 8) = iVar8;
    uVar11 = uVar11 + 1;
    iVar8 = iVar8 + 2;
  } while (uVar13 != uVar11);
LAB_0010145f:
  return *(undefined4 *)(&stack0xfffffffffffffff8 + (ulong)(uint)((int)param_1 / 2) * 4 + lVar7 + 8)
  ;
}

// Function: alloca_usage @ 0x101490
undefined4 alloca_usage(uint param_1)
{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  if ((int)param_1 < 1) {
    return 0xffffffff;
  }
  uVar13 = (ulong)param_1;
  lVar2 = -(uVar13 * 4 + 0xf & 0xfffffffffffffff0);
  lVar7 = lVar2 + -8;
  if (param_1 < 8) {
    uVar10 = 0;
  }
  else {
    uVar10 = (ulong)(param_1 & 0xfffffff8);
    uVar12 = (uVar10 - 8 >> 3) + 1;
    if (uVar10 - 8 == 0) {
      iVar8 = 0;
      iVar14 = 1;
      iVar15 = 2;
      iVar16 = 3;
      lVar11 = 0;
    }
    else {
      uVar9 = uVar12 & 0xfffffffffffffffe;
      iVar8 = 0;
      iVar14 = 1;
      iVar15 = 2;
      iVar16 = 3;
      lVar11 = 0;
      do {
        piVar1 = (int *)(&stack0xfffffffffffffff8 + lVar11 * 4 + lVar7 + 8);
        *piVar1 = iVar8 * 3;
        piVar1[1] = iVar14 * 3;
        piVar1[2] = iVar15 * 3;
        piVar1[3] = iVar16 * 3;
        piVar1 = (int *)(&stack0x00000008 + lVar11 * 4 + lVar2);
        *piVar1 = iVar8 * 3 + 0xc;
        piVar1[1] = iVar14 * 3 + 0xc;
        piVar1[2] = iVar15 * 3 + 0xc;
        piVar1[3] = iVar16 * 3 + 0xc;
        iVar5 = (iVar14 + 8) * 3;
        iVar6 = (iVar15 + 8) * 3;
        iVar3 = (iVar16 + 8) * 3;
        iVar4 = (iVar8 + 8) * 3;
        piVar1 = (int *)(&stack0x00000018 + lVar11 * 4 + lVar2);
        *piVar1 = iVar4;
        piVar1[1] = iVar5;
        piVar1[2] = iVar6;
        piVar1[3] = iVar3;
        piVar1 = (int *)(&stack0x00000028 + lVar11 * 4 + lVar2);
        *piVar1 = iVar4 + 0xc;
        piVar1[1] = iVar5 + 0xc;
        piVar1[2] = iVar6 + 0xc;
        piVar1[3] = iVar3 + 0xc;
        lVar11 = lVar11 + 0x10;
        iVar8 = iVar8 + 0x10;
        iVar14 = iVar14 + 0x10;
        iVar15 = iVar15 + 0x10;
        iVar16 = iVar16 + 0x10;
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    if ((uVar12 & 1) != 0) {
      piVar1 = (int *)(&stack0xfffffffffffffff8 + lVar11 * 4 + lVar7 + 8);
      *piVar1 = iVar8 * 3;
      piVar1[1] = iVar14 * 3;
      piVar1[2] = iVar15 * 3;
      piVar1[3] = iVar16 * 3;
      piVar1 = (int *)(&stack0x00000008 + lVar11 * 4 + lVar2);
      *piVar1 = iVar8 * 3 + 0xc;
      piVar1[1] = iVar14 * 3 + 0xc;
      piVar1[2] = iVar15 * 3 + 0xc;
      piVar1[3] = iVar16 * 3 + 0xc;
    }
    if (uVar10 == uVar13) goto LAB_0010159f;
  }
  iVar8 = (int)uVar10 * 3;
  do {
    *(int *)(&stack0xfffffffffffffff8 + uVar10 * 4 + lVar7 + 8) = iVar8;
    uVar10 = uVar10 + 1;
    iVar8 = iVar8 + 3;
  } while (uVar13 != uVar10);
LAB_0010159f:
  return *(undefined4 *)(&stack0xfffffffffffffff8 + (ulong)(uint)((int)param_1 / 2) * 4 + lVar7 + 8)
  ;
}

// Function: stack_alias @ 0x1015d0
undefined8 stack_alias(void)
{
  return 0x14;
}

// Function: test_stack_memory @ 0x1015e0
void test_stack_memory(void)
{
  long lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined auVar18 [16];
  undefined local_808 [16];
  char acStack_7f8 [1008];
  char local_408;
  puts(&DAT_00103719);
  lVar1 = 0;
  printf("MEM-L1-01 (local_vars): %d\n",0x14);
  printf("MEM-L1-02 (local_array): %d\n",10);
  printf("MEM-L1-03 (local_struct): %d\n",0xf);
  printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
  printf("MEM-L1-05 (address_of_array): %d\n",2);
  auVar18 = _DAT_00103010;
  do {
    *(undefined (*) [16])(local_808 + lVar1) = auVar18;
    cVar2 = auVar18[0];
    cVar3 = auVar18[1];
    cVar4 = auVar18[2];
    cVar5 = auVar18[3];
    cVar6 = auVar18[4];
    cVar7 = auVar18[5];
    cVar8 = auVar18[6];
    cVar9 = auVar18[7];
    cVar10 = auVar18[8];
    cVar11 = auVar18[9];
    cVar12 = auVar18[10];
    cVar13 = auVar18[11];
    cVar14 = auVar18[12];
    cVar15 = auVar18[13];
    cVar16 = auVar18[14];
    cVar17 = auVar18[15];
    acStack_7f8[lVar1] = cVar2 + '\x10';
    acStack_7f8[lVar1 + 1] = cVar3 + '\x10';
    acStack_7f8[lVar1 + 2] = cVar4 + '\x10';
    acStack_7f8[lVar1 + 3] = cVar5 + '\x10';
    acStack_7f8[lVar1 + 4] = cVar6 + '\x10';
    acStack_7f8[lVar1 + 5] = cVar7 + '\x10';
    acStack_7f8[lVar1 + 6] = cVar8 + '\x10';
    acStack_7f8[lVar1 + 7] = cVar9 + '\x10';
    acStack_7f8[lVar1 + 8] = cVar10 + '\x10';
    acStack_7f8[lVar1 + 9] = cVar11 + '\x10';
    acStack_7f8[lVar1 + 10] = cVar12 + '\x10';
    acStack_7f8[lVar1 + 0xb] = cVar13 + '\x10';
    acStack_7f8[lVar1 + 0xc] = cVar14 + '\x10';
    acStack_7f8[lVar1 + 0xd] = cVar15 + '\x10';
    acStack_7f8[lVar1 + 0xe] = cVar16 + '\x10';
    acStack_7f8[lVar1 + 0xf] = cVar17 + '\x10';
    acStack_7f8[lVar1 + 0x10] = cVar2 + ' ';
    acStack_7f8[lVar1 + 0x11] = cVar3 + ' ';
    acStack_7f8[lVar1 + 0x12] = cVar4 + ' ';
    acStack_7f8[lVar1 + 0x13] = cVar5 + ' ';
    acStack_7f8[lVar1 + 0x14] = cVar6 + ' ';
    acStack_7f8[lVar1 + 0x15] = cVar7 + ' ';
    acStack_7f8[lVar1 + 0x16] = cVar8 + ' ';
    acStack_7f8[lVar1 + 0x17] = cVar9 + ' ';
    acStack_7f8[lVar1 + 0x18] = cVar10 + ' ';
    acStack_7f8[lVar1 + 0x19] = cVar11 + ' ';
    acStack_7f8[lVar1 + 0x1a] = cVar12 + ' ';
    acStack_7f8[lVar1 + 0x1b] = cVar13 + ' ';
    acStack_7f8[lVar1 + 0x1c] = cVar14 + ' ';
    acStack_7f8[lVar1 + 0x1d] = cVar15 + ' ';
    acStack_7f8[lVar1 + 0x1e] = cVar16 + ' ';
    acStack_7f8[lVar1 + 0x1f] = cVar17 + ' ';
    acStack_7f8[lVar1 + 0x20] = cVar2 + SUB161(_DAT_00103040,0);
    acStack_7f8[lVar1 + 0x21] = cVar3 + SUB161(_DAT_00103040,1);
    acStack_7f8[lVar1 + 0x22] = cVar4 + SUB161(_DAT_00103040,2);
    acStack_7f8[lVar1 + 0x23] = cVar5 + SUB161(_DAT_00103040,3);
    acStack_7f8[lVar1 + 0x24] = cVar6 + SUB161(_DAT_00103040,4);
    acStack_7f8[lVar1 + 0x25] = cVar7 + SUB161(_DAT_00103040,5);
    acStack_7f8[lVar1 + 0x26] = cVar8 + SUB161(_DAT_00103040,6);
    acStack_7f8[lVar1 + 0x27] = cVar9 + SUB161(_DAT_00103040,7);
    acStack_7f8[lVar1 + 0x28] = cVar10 + SUB161(_DAT_00103040,8);
    acStack_7f8[lVar1 + 0x29] = cVar11 + SUB161(_DAT_00103040,9);
    acStack_7f8[lVar1 + 0x2a] = cVar12 + SUB161(_DAT_00103040,10);
    acStack_7f8[lVar1 + 0x2b] = cVar13 + SUB161(_DAT_00103040,0xb);
    acStack_7f8[lVar1 + 0x2c] = cVar14 + SUB161(_DAT_00103040,0xc);
    acStack_7f8[lVar1 + 0x2d] = cVar15 + SUB161(_DAT_00103040,0xd);
    acStack_7f8[lVar1 + 0x2e] = cVar16 + SUB161(_DAT_00103040,0xe);
    acStack_7f8[lVar1 + 0x2f] = cVar17 + SUB161(_DAT_00103040,0xf);
    acStack_7f8[lVar1 + 0x30] = cVar2 + SUB161(_DAT_00103050,0);
    acStack_7f8[lVar1 + 0x31] = cVar3 + SUB161(_DAT_00103050,1);
    acStack_7f8[lVar1 + 0x32] = cVar4 + SUB161(_DAT_00103050,2);
    acStack_7f8[lVar1 + 0x33] = cVar5 + SUB161(_DAT_00103050,3);
    acStack_7f8[lVar1 + 0x34] = cVar6 + SUB161(_DAT_00103050,4);
    acStack_7f8[lVar1 + 0x35] = cVar7 + SUB161(_DAT_00103050,5);
    acStack_7f8[lVar1 + 0x36] = cVar8 + SUB161(_DAT_00103050,6);
    acStack_7f8[lVar1 + 0x37] = cVar9 + SUB161(_DAT_00103050,7);
    acStack_7f8[lVar1 + 0x38] = cVar10 + SUB161(_DAT_00103050,8);
    acStack_7f8[lVar1 + 0x39] = cVar11 + SUB161(_DAT_00103050,9);
    acStack_7f8[lVar1 + 0x3a] = cVar12 + SUB161(_DAT_00103050,10);
    acStack_7f8[lVar1 + 0x3b] = cVar13 + SUB161(_DAT_00103050,0xb);
    acStack_7f8[lVar1 + 0x3c] = cVar14 + SUB161(_DAT_00103050,0xc);
    acStack_7f8[lVar1 + 0x3d] = cVar15 + SUB161(_DAT_00103050,0xd);
    acStack_7f8[lVar1 + 0x3e] = cVar16 + SUB161(_DAT_00103050,0xe);
    acStack_7f8[lVar1 + 0x3f] = cVar17 + SUB161(_DAT_00103050,0xf);
    acStack_7f8[lVar1 + 0x40] = cVar2 + SUB161(_DAT_00103060,0);
    acStack_7f8[lVar1 + 0x41] = cVar3 + SUB161(_DAT_00103060,1);
    acStack_7f8[lVar1 + 0x42] = cVar4 + SUB161(_DAT_00103060,2);
    acStack_7f8[lVar1 + 0x43] = cVar5 + SUB161(_DAT_00103060,3);
    acStack_7f8[lVar1 + 0x44] = cVar6 + SUB161(_DAT_00103060,4);
    acStack_7f8[lVar1 + 0x45] = cVar7 + SUB161(_DAT_00103060,5);
    acStack_7f8[lVar1 + 0x46] = cVar8 + SUB161(_DAT_00103060,6);
    acStack_7f8[lVar1 + 0x47] = cVar9 + SUB161(_DAT_00103060,7);
    acStack_7f8[lVar1 + 0x48] = cVar10 + SUB161(_DAT_00103060,8);
    acStack_7f8[lVar1 + 0x49] = cVar11 + SUB161(_DAT_00103060,9);
    acStack_7f8[lVar1 + 0x4a] = cVar12 + SUB161(_DAT_00103060,10);
    acStack_7f8[lVar1 + 0x4b] = cVar13 + SUB161(_DAT_00103060,0xb);
    acStack_7f8[lVar1 + 0x4c] = cVar14 + SUB161(_DAT_00103060,0xc);
    acStack_7f8[lVar1 + 0x4d] = cVar15 + SUB161(_DAT_00103060,0xd);
    acStack_7f8[lVar1 + 0x4e] = cVar16 + SUB161(_DAT_00103060,0xe);
    acStack_7f8[lVar1 + 0x4f] = cVar17 + SUB161(_DAT_00103060,0xf);
    acStack_7f8[lVar1 + 0x50] = cVar2 + SUB161(_DAT_00103070,0);
    acStack_7f8[lVar1 + 0x51] = cVar3 + SUB161(_DAT_00103070,1);
    acStack_7f8[lVar1 + 0x52] = cVar4 + SUB161(_DAT_00103070,2);
    acStack_7f8[lVar1 + 0x53] = cVar5 + SUB161(_DAT_00103070,3);
    acStack_7f8[lVar1 + 0x54] = cVar6 + SUB161(_DAT_00103070,4);
    acStack_7f8[lVar1 + 0x55] = cVar7 + SUB161(_DAT_00103070,5);
    acStack_7f8[lVar1 + 0x56] = cVar8 + SUB161(_DAT_00103070,6);
    acStack_7f8[lVar1 + 0x57] = cVar9 + SUB161(_DAT_00103070,7);
    acStack_7f8[lVar1 + 0x58] = cVar10 + SUB161(_DAT_00103070,8);
    acStack_7f8[lVar1 + 0x59] = cVar11 + SUB161(_DAT_00103070,9);
    acStack_7f8[lVar1 + 0x5a] = cVar12 + SUB161(_DAT_00103070,10);
    acStack_7f8[lVar1 + 0x5b] = cVar13 + SUB161(_DAT_00103070,0xb);
    acStack_7f8[lVar1 + 0x5c] = cVar14 + SUB161(_DAT_00103070,0xc);
    acStack_7f8[lVar1 + 0x5d] = cVar15 + SUB161(_DAT_00103070,0xd);
    acStack_7f8[lVar1 + 0x5e] = cVar16 + SUB161(_DAT_00103070,0xe);
    acStack_7f8[lVar1 + 0x5f] = cVar17 + SUB161(_DAT_00103070,0xf);
    acStack_7f8[lVar1 + 0x60] = cVar2 + SUB161(_DAT_00103080,0);
    acStack_7f8[lVar1 + 0x61] = cVar3 + SUB161(_DAT_00103080,1);
    acStack_7f8[lVar1 + 0x62] = cVar4 + SUB161(_DAT_00103080,2);
    acStack_7f8[lVar1 + 99] = cVar5 + SUB161(_DAT_00103080,3);
    acStack_7f8[lVar1 + 100] = cVar6 + SUB161(_DAT_00103080,4);
    acStack_7f8[lVar1 + 0x65] = cVar7 + SUB161(_DAT_00103080,5);
    acStack_7f8[lVar1 + 0x66] = cVar8 + SUB161(_DAT_00103080,6);
    acStack_7f8[lVar1 + 0x67] = cVar9 + SUB161(_DAT_00103080,7);
    acStack_7f8[lVar1 + 0x68] = cVar10 + SUB161(_DAT_00103080,8);
    acStack_7f8[lVar1 + 0x69] = cVar11 + SUB161(_DAT_00103080,9);
    acStack_7f8[lVar1 + 0x6a] = cVar12 + SUB161(_DAT_00103080,10);
    acStack_7f8[lVar1 + 0x6b] = cVar13 + SUB161(_DAT_00103080,0xb);
    acStack_7f8[lVar1 + 0x6c] = cVar14 + SUB161(_DAT_00103080,0xc);
    acStack_7f8[lVar1 + 0x6d] = cVar15 + SUB161(_DAT_00103080,0xd);
    acStack_7f8[lVar1 + 0x6e] = cVar16 + SUB161(_DAT_00103080,0xe);
    acStack_7f8[lVar1 + 0x6f] = cVar17 + SUB161(_DAT_00103080,0xf);
    lVar1 = lVar1 + 0x80;
    auVar18 = auVar18 ^ _DAT_00103090;
  } while (lVar1 != 0x800);
  printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)(uint)(int)local_408);
  printf("MEM-L2-02 (vla_stack): %d\n",10);
  printf("MEM-L2-03 (alloca_usage): %d\n",0xf);
  printf("MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}

// Function: heap_basic @ 0x101780
undefined4 heap_basic(uint param_1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *__ptr;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  __ptr = malloc((long)(int)param_1 << 2);
  if (__ptr == (void *)0x0) {
    return 0xffffffff;
  }
  if (0 < (int)param_1) {
    if (param_1 < 8) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulong)(param_1 & 0xfffffff8);
      uVar11 = (uVar7 - 8 >> 3) + 1;
      if (uVar7 - 8 == 0) {
        iVar8 = 0;
        iVar12 = 2;
        iVar13 = 4;
        iVar14 = 6;
        lVar10 = 0;
      }
      else {
        uVar9 = uVar11 & 0xfffffffffffffffe;
        iVar8 = 0;
        iVar12 = 1;
        iVar13 = 2;
        iVar14 = 3;
        lVar10 = 0;
        do {
          iVar3 = iVar8 * 2;
          iVar4 = iVar12 * 2;
          iVar5 = iVar13 * 2;
          iVar6 = iVar14 * 2;
          piVar1 = (int *)((long)__ptr + lVar10 * 4);
          *piVar1 = iVar3;
          piVar1[1] = iVar4;
          piVar1[2] = iVar5;
          piVar1[3] = iVar6;
          piVar1 = (int *)((long)__ptr + lVar10 * 4 + 0x10);
          *piVar1 = iVar3 + 8;
          piVar1[1] = iVar4 + 8;
          piVar1[2] = iVar5 + 8;
          piVar1[3] = iVar6 + 8;
          piVar1 = (int *)((long)__ptr + lVar10 * 4 + 0x20);
          *piVar1 = iVar3 + 0x10;
          piVar1[1] = iVar4 + 0x10;
          piVar1[2] = iVar5 + 0x10;
          piVar1[3] = iVar6 + 0x10;
          piVar1 = (int *)((long)__ptr + lVar10 * 4 + 0x30);
          *piVar1 = iVar3 + 0x18;
          piVar1[1] = iVar4 + 0x18;
          piVar1[2] = iVar5 + 0x18;
          piVar1[3] = iVar6 + 0x18;
          lVar10 = lVar10 + 0x10;
          iVar8 = iVar8 + 0x10;
          iVar12 = iVar12 + 0x10;
          iVar13 = iVar13 + 0x10;
          iVar14 = iVar14 + 0x10;
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
        iVar8 = iVar8 * 2;
        iVar12 = iVar12 * 2;
        iVar13 = iVar13 * 2;
        iVar14 = iVar14 * 2;
      }
      if ((uVar11 & 1) != 0) {
        piVar1 = (int *)((long)__ptr + lVar10 * 4);
        *piVar1 = iVar8;
        piVar1[1] = iVar12;
        piVar1[2] = iVar13;
        piVar1[3] = iVar14;
        piVar1 = (int *)((long)__ptr + lVar10 * 4 + 0x10);
        *piVar1 = iVar8 + 8;
        piVar1[1] = iVar12 + 8;
        piVar1[2] = iVar13 + 8;
        piVar1[3] = iVar14 + 8;
      }
      if (uVar7 == param_1) goto LAB_0010187f;
    }
    iVar8 = (int)uVar7 * 2;
    do {
      *(int *)((long)__ptr + uVar7 * 4) = iVar8;
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 2;
    } while (param_1 != uVar7);
  }
LAB_0010187f:
  uVar2 = *(undefined4 *)((long)__ptr + (long)((int)param_1 / 2) * 4);
  free(__ptr);
  return uVar2;
}

// Function: heap_calloc @ 0x1018b0
int heap_calloc(uint param_1)
{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  void *__ptr;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  __ptr = calloc((long)(int)param_1,4);
  if (__ptr == (void *)0x0) {
    return -1;
  }
  iVar10 = 0;
  if ((0 < (int)param_1) && (iVar10 = 0, param_1 != 1)) {
    uVar1 = (ulong)param_1 - 1;
    if (uVar1 < 8) {
      iVar10 = 0;
      uVar9 = 1;
    }
    else {
      uVar9 = uVar1 & 0xfffffffffffffff8;
      uVar13 = (uVar9 - 8 >> 3) + 1;
      uVar11 = (ulong)((uint)uVar13 & 3);
      if (uVar9 - 8 < 0x18) {
        iVar10 = 0;
        iVar14 = 0;
        iVar15 = 0;
        iVar16 = 0;
        lVar12 = 0;
        iVar17 = 0;
        iVar18 = 0;
        iVar19 = 0;
        iVar20 = 0;
      }
      else {
        uVar13 = uVar13 & 0xfffffffffffffffc;
        iVar10 = 0;
        iVar14 = 0;
        iVar15 = 0;
        iVar16 = 0;
        lVar12 = 0;
        iVar17 = 0;
        iVar18 = 0;
        iVar19 = 0;
        iVar20 = 0;
        do {
          piVar2 = (int *)((long)__ptr + lVar12 * 4 + 4);
          piVar3 = (int *)((long)__ptr + lVar12 * 4 + 0x14);
          piVar4 = (int *)((long)__ptr + lVar12 * 4 + 0x24);
          piVar5 = (int *)((long)__ptr + lVar12 * 4 + 0x34);
          piVar6 = (int *)((long)__ptr + lVar12 * 4 + 0x44);
          piVar7 = (int *)((long)__ptr + lVar12 * 4 + 0x54);
          piVar8 = (int *)((long)__ptr + lVar12 * 4 + 100);
          iVar10 = *piVar8 + *piVar6 + *piVar4 + *piVar2 + iVar10;
          iVar14 = piVar8[1] + piVar6[1] + piVar4[1] + piVar2[1] + iVar14;
          iVar15 = piVar8[2] + piVar6[2] + piVar4[2] + piVar2[2] + iVar15;
          iVar16 = piVar8[3] + piVar6[3] + piVar4[3] + piVar2[3] + iVar16;
          piVar2 = (int *)((long)__ptr + lVar12 * 4 + 0x74);
          iVar17 = *piVar2 + *piVar7 + *piVar5 + *piVar3 + iVar17;
          iVar18 = piVar2[1] + piVar7[1] + piVar5[1] + piVar3[1] + iVar18;
          iVar19 = piVar2[2] + piVar7[2] + piVar5[2] + piVar3[2] + iVar19;
          iVar20 = piVar2[3] + piVar7[3] + piVar5[3] + piVar3[3] + iVar20;
          lVar12 = lVar12 + 0x20;
          uVar13 = uVar13 - 4;
        } while (uVar13 != 0);
      }
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar13 = lVar12 * 4 | 4;
        piVar2 = (int *)((long)__ptr + uVar13);
        iVar10 = iVar10 + *piVar2;
        iVar14 = iVar14 + piVar2[1];
        iVar15 = iVar15 + piVar2[2];
        iVar16 = iVar16 + piVar2[3];
        piVar2 = (int *)((long)__ptr + uVar13 + 0x10);
        iVar17 = iVar17 + *piVar2;
        iVar18 = iVar18 + piVar2[1];
        iVar19 = iVar19 + piVar2[2];
        iVar20 = iVar20 + piVar2[3];
        lVar12 = lVar12 + 8;
      }
      iVar10 = iVar16 + iVar20 + iVar14 + iVar18 + iVar15 + iVar19 + iVar10 + iVar17;
      if (uVar1 == uVar9) goto LAB_001019fc;
      uVar9 = uVar9 | 1;
    }
    do {
      iVar10 = iVar10 + *(int *)((long)__ptr + uVar9 * 4);
      uVar9 = uVar9 + 1;
    } while (param_1 != uVar9);
  }
LAB_001019fc:
  free(__ptr);
  return iVar10;
}

// Function: heap_realloc @ 0x101a10
undefined4 heap_realloc(void)
{
  undefined4 *__ptr;
  undefined4 *__ptr_00;
  undefined4 uVar1;
  __ptr = (undefined4 *)malloc(0x14);
  if (__ptr == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *__ptr = 1;
    __ptr[1] = 2;
    __ptr[2] = 3;
    __ptr[3] = 4;
    __ptr[4] = 5;
    __ptr_00 = (undefined4 *)realloc(__ptr,0x28);
    if (__ptr_00 == (undefined4 *)0x0) {
      uVar1 = 0xfffffffe;
      __ptr_00 = __ptr;
    }
    else {
      __ptr_00[5] = 0x32;
      __ptr_00[6] = 0x3c;
      __ptr_00[7] = 0x46;
      __ptr_00[8] = 0x50;
      __ptr_00[9] = 0x5a;
      uVar1 = 0xfffffffd;
      if (__ptr_00[2] == 3) {
        uVar1 = 0x32;
      }
    }
    free(__ptr_00);
  }
  return uVar1;
}

// Function: heap_array @ 0x101a90
undefined4 heap_array(uint param_1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *__ptr;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  __ptr = malloc((long)(int)param_1 << 2);
  if (__ptr == (void *)0x0) {
    return 0xffffffff;
  }
  if (0 < (int)param_1) {
    if (param_1 < 8) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulong)(param_1 & 0xfffffff8);
      uVar11 = (uVar7 - 8 >> 3) + 1;
      if (uVar7 - 8 == 0) {
        iVar8 = 0;
        iVar12 = 1;
        iVar13 = 2;
        iVar14 = 3;
        lVar10 = 0;
      }
      else {
        uVar9 = uVar11 & 0xfffffffffffffffe;
        iVar8 = 0;
        iVar12 = 1;
        iVar13 = 2;
        iVar14 = 3;
        lVar10 = 0;
        do {
          piVar1 = (int *)((long)__ptr + lVar10 * 4);
          *piVar1 = iVar8 * 3;
          piVar1[1] = iVar12 * 3;
          piVar1[2] = iVar13 * 3;
          piVar1[3] = iVar14 * 3;
          piVar1 = (int *)((long)__ptr + lVar10 * 4 + 0x10);
          *piVar1 = iVar8 * 3 + 0xc;
          piVar1[1] = iVar12 * 3 + 0xc;
          piVar1[2] = iVar13 * 3 + 0xc;
          piVar1[3] = iVar14 * 3 + 0xc;
          iVar5 = (iVar12 + 8) * 3;
          iVar6 = (iVar13 + 8) * 3;
          iVar3 = (iVar14 + 8) * 3;
          iVar4 = (iVar8 + 8) * 3;
          piVar1 = (int *)((long)__ptr + lVar10 * 4 + 0x20);
          *piVar1 = iVar4;
          piVar1[1] = iVar5;
          piVar1[2] = iVar6;
          piVar1[3] = iVar3;
          piVar1 = (int *)((long)__ptr + lVar10 * 4 + 0x30);
          *piVar1 = iVar4 + 0xc;
          piVar1[1] = iVar5 + 0xc;
          piVar1[2] = iVar6 + 0xc;
          piVar1[3] = iVar3 + 0xc;
          lVar10 = lVar10 + 0x10;
          iVar8 = iVar8 + 0x10;
          iVar12 = iVar12 + 0x10;
          iVar13 = iVar13 + 0x10;
          iVar14 = iVar14 + 0x10;
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      if ((uVar11 & 1) != 0) {
        piVar1 = (int *)((long)__ptr + lVar10 * 4);
        *piVar1 = iVar8 * 3;
        piVar1[1] = iVar12 * 3;
        piVar1[2] = iVar13 * 3;
        piVar1[3] = iVar14 * 3;
        piVar1 = (int *)((long)__ptr + lVar10 * 4 + 0x10);
        *piVar1 = iVar8 * 3 + 0xc;
        piVar1[1] = iVar12 * 3 + 0xc;
        piVar1[2] = iVar13 * 3 + 0xc;
        piVar1[3] = iVar14 * 3 + 0xc;
      }
      if (uVar7 == param_1) goto LAB_00101b9f;
    }
    iVar8 = (int)uVar7 * 3;
    do {
      *(int *)((long)__ptr + uVar7 * 4) = iVar8;
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 3;
    } while (param_1 != uVar7);
  }
LAB_00101b9f:
  uVar2 = *(undefined4 *)((long)__ptr + (long)((int)param_1 / 2) * 4);
  free(__ptr);
  return uVar2;
}

// Function: heap_struct @ 0x101bd0
int heap_struct(int param_1)
{
  return param_1 * 3;
}

// Function: heap_nested @ 0x101be0
undefined8 heap_nested(undefined8 *param_1)
{
  undefined4 *__ptr;
  undefined4 *puVar1;
  undefined8 uVar2;
  __ptr = (undefined4 *)malloc(0x10);
  *param_1 = __ptr;
  if (__ptr == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *__ptr = 10;
    puVar1 = (undefined4 *)malloc(0x10);
    *(undefined4 **)(__ptr + 2) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      free(__ptr);
      uVar2 = 0xfffffffe;
    }
    else {
      *puVar1 = 0x14;
      *(undefined8 *)(puVar1 + 2) = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}

// Function: linked_list_heap @ 0x101c50
int linked_list_heap(void)
{
  int *__ptr;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  __ptr = (int *)malloc(0x10);
  iVar4 = -1;
  if (__ptr != (int *)0x0) {
    *__ptr = 0;
    puVar1 = (undefined4 *)malloc(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      free(__ptr);
    }
    else {
      *puVar1 = 10;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined4 **)(__ptr + 2) = puVar1;
      puVar2 = (undefined4 *)malloc(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        do {
          piVar3 = *(int **)(__ptr + 2);
          free(__ptr);
          __ptr = piVar3;
        } while (piVar3 != (int *)0x0);
      }
      else {
        *puVar2 = 0x14;
        *(undefined8 *)(puVar2 + 2) = 0;
        *(undefined4 **)(puVar1 + 2) = puVar2;
        puVar1 = (undefined4 *)malloc(0x10);
        if (puVar1 == (undefined4 *)0x0) {
          do {
            piVar3 = *(int **)(__ptr + 2);
            free(__ptr);
            __ptr = piVar3;
          } while (piVar3 != (int *)0x0);
        }
        else {
          *puVar1 = 0x1e;
          *(undefined8 *)(puVar1 + 2) = 0;
          *(undefined4 **)(puVar2 + 2) = puVar1;
          puVar2 = (undefined4 *)malloc(0x10);
          if (puVar2 == (undefined4 *)0x0) {
            do {
              piVar3 = *(int **)(__ptr + 2);
              free(__ptr);
              __ptr = piVar3;
            } while (piVar3 != (int *)0x0);
          }
          else {
            *puVar2 = 0x28;
            *(undefined8 *)(puVar2 + 2) = 0;
            *(undefined4 **)(puVar1 + 2) = puVar2;
            iVar4 = 0;
            piVar3 = __ptr;
            do {
              iVar4 = iVar4 + *piVar3;
              piVar3 = *(int **)(piVar3 + 2);
            } while (piVar3 != (int *)0x0);
            do {
              piVar3 = *(int **)(__ptr + 2);
              free(__ptr);
              __ptr = piVar3;
            } while (piVar3 != (int *)0x0);
          }
        }
      }
    }
  }
  return iVar4;
}

// Function: create_tree_node @ 0x101dc0
void create_tree_node(undefined4 param_1)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)malloc(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    *(undefined (*) [16])(puVar1 + 2) = ZEXT816(0);
  }
  return;
}

// Function: tree_heap_traversal @ 0x101de0
undefined8 tree_heap_traversal(void)
{
  return 0x3c;
}

// Function: memory_leak @ 0x101df0
undefined4 memory_leak(uint param_1)
{
  int *piVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  pvVar2 = malloc((long)(int)param_1 << 2);
  if (pvVar2 == (void *)0x0) {
    return 0xffffffff;
  }
  if (0 < (int)param_1) {
    if (param_1 < 8) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)(param_1 & 0xfffffff8);
      uVar7 = (uVar3 - 8 >> 3) + 1;
      uVar6 = (ulong)((uint)uVar7 & 3);
      if (uVar3 - 8 < 0x18) {
        iVar8 = 0;
        iVar9 = 1;
        iVar10 = 2;
        iVar11 = 3;
        lVar4 = 0;
      }
      else {
        uVar7 = uVar7 & 0xfffffffffffffffc;
        iVar8 = 0;
        iVar9 = 1;
        iVar10 = 2;
        iVar11 = 3;
        lVar4 = 0;
        do {
          piVar1 = (int *)((long)pvVar2 + lVar4 * 4);
          *piVar1 = iVar8;
          piVar1[1] = iVar9;
          piVar1[2] = iVar10;
          piVar1[3] = iVar11;
          piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x10);
          *piVar1 = iVar8 + 4;
          piVar1[1] = iVar9 + 4;
          piVar1[2] = iVar10 + 4;
          piVar1[3] = iVar11 + 4;
          piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x20);
          *piVar1 = iVar8 + 8;
          piVar1[1] = iVar9 + 8;
          piVar1[2] = iVar10 + 8;
          piVar1[3] = iVar11 + 8;
          piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x30);
          *piVar1 = iVar8 + 0xc;
          piVar1[1] = iVar9 + 0xc;
          piVar1[2] = iVar10 + 0xc;
          piVar1[3] = iVar11 + 0xc;
          piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x40);
          *piVar1 = iVar8 + 0x10;
          piVar1[1] = iVar9 + 0x10;
          piVar1[2] = iVar10 + 0x10;
          piVar1[3] = iVar11 + 0x10;
          piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x50);
          *piVar1 = iVar8 + 0x14;
          piVar1[1] = iVar9 + 0x14;
          piVar1[2] = iVar10 + 0x14;
          piVar1[3] = iVar11 + 0x14;
          piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x60);
          *piVar1 = iVar8 + 0x18;
          piVar1[1] = iVar9 + 0x18;
          piVar1[2] = iVar10 + 0x18;
          piVar1[3] = iVar11 + 0x18;
          piVar1 = (int *)((long)pvVar2 + lVar4 * 4 + 0x70);
          *piVar1 = iVar8 + 0x1c;
          piVar1[1] = iVar9 + 0x1c;
          piVar1[2] = iVar10 + 0x1c;
          piVar1[3] = iVar11 + 0x1c;
          lVar4 = lVar4 + 0x20;
          iVar8 = iVar8 + 0x20;
          iVar9 = iVar9 + 0x20;
          iVar10 = iVar10 + 0x20;
          iVar11 = iVar11 + 0x20;
          uVar7 = uVar7 - 4;
        } while (uVar7 != 0);
      }
      if (uVar6 != 0) {
        lVar5 = 0;
        do {
          piVar1 = (int *)((long)pvVar2 + lVar5 + lVar4 * 4);
          *piVar1 = iVar8;
          piVar1[1] = iVar9;
          piVar1[2] = iVar10;
          piVar1[3] = iVar11;
          piVar1 = (int *)((long)pvVar2 + lVar5 + lVar4 * 4 + 0x10);
          *piVar1 = iVar8 + 4;
          piVar1[1] = iVar9 + 4;
          piVar1[2] = iVar10 + 4;
          piVar1[3] = iVar11 + 4;
          iVar8 = iVar8 + 8;
          iVar9 = iVar9 + 8;
          iVar10 = iVar10 + 8;
          iVar11 = iVar11 + 8;
          lVar5 = lVar5 + 0x20;
        } while (uVar6 << 5 != lVar5);
      }
      if (uVar3 == param_1) goto LAB_00101f8c;
    }
    do {
      *(int *)((long)pvVar2 + uVar3 * 4) = (int)uVar3;
      uVar3 = uVar3 + 1;
    } while (param_1 != uVar3);
  }
LAB_00101f8c:
  return *(undefined4 *)((long)pvVar2 + (long)((int)param_1 / 2) * 4);
}

// Function: dangling_pointer @ 0x101fb0
undefined4 dangling_pointer(void)
{
  undefined4 *__ptr;
  __ptr = (undefined4 *)malloc(4);
  if (__ptr != (undefined4 *)0x0) {
    printf("value before free: %d\n",0x2a);
    free(__ptr);
    return *__ptr;
  }
  return 0xffffffff;
}

// Function: double_free @ 0x101ff0
undefined4 double_free(undefined4 *param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0xfffffffe;
}

// Function: heap_overflow @ 0x102000
undefined8 heap_overflow(void)
{
  return 0;
}

// Function: test_heap_memory @ 0x102010
void test_heap_memory(void)
{
  uint uVar1;
  __pid_t __pid;
  undefined8 in_RAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *__format;
  uint local_14;
  local_14 = (uint)((ulong)in_RAX >> 0x20);
  puts(&DAT_00103737);
  printf("HEAP-L2-01 (heap_basic): %d\n",10);
  printf("HEAP-L2-02 (heap_calloc): %d\n",0);
  puVar2 = (undefined4 *)malloc(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *puVar2 = 1;
    puVar2[1] = 2;
    puVar2[2] = 3;
    puVar2[3] = 4;
    puVar2[4] = 5;
    puVar3 = (undefined4 *)realloc(puVar2,0x28);
    if (puVar3 == (undefined4 *)0x0) {
      uVar1 = 0xfffffffe;
      puVar3 = puVar2;
    }
    else {
      puVar3[5] = 0x32;
      puVar3[6] = 0x3c;
      puVar3[7] = 0x46;
      puVar3[8] = 0x50;
      puVar3[9] = 0x5a;
      uVar1 = 0xfffffffd;
      if (puVar3[2] == 3) {
        uVar1 = 0x32;
      }
    }
    free(puVar3);
  }
  printf("HEAP-L2-03 (heap_realloc): %d\n",(ulong)uVar1);
  printf("HEAP-L2-04 (heap_array): %d\n",0xf);
  printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
  puVar2 = (undefined4 *)malloc(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    printf("HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
  }
  else {
    *puVar2 = 10;
    puVar3 = (undefined4 *)malloc(0x10);
    *(undefined4 **)(puVar2 + 2) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      free(puVar2);
      uVar4 = 0xfffffffe;
    }
    else {
      *puVar3 = 0x14;
      *(undefined8 *)(puVar3 + 2) = 0;
      uVar4 = 0;
    }
    printf("HEAP-L2-06 (heap_nested): %d\n",uVar4);
    free(*(void **)(puVar2 + 2));
    free(puVar2);
  }
  uVar1 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar1);
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
  printf("HEAP-L3-03 (memory_leak): %d\n",2);
  printf("HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid != 0) {
    if (__pid < 1) {
      perror(&DAT_0010343b);
      return;
    }
    waitpid(__pid,(int *)&local_14,0);
    uVar1 = local_14 & 0x7f;
    if (uVar1 == 0) {
      uVar5 = (ulong)(byte)(local_14 >> 8);
      __format = &DAT_001033d5;
    }
    else {
      if ((int)(uVar1 * 0x1000000 + 0x1000000) < 0x2000000) {
        return;
      }
      __format = &DAT_001033fa;
      uVar5 = (ulong)uVar1;
    }
    printf(__format,uVar5);
    return;
  }
  uVar1 = dangling_pointer();
  printf(&DAT_001033c5,(ulong)uVar1);
  exit(0);
}

// Function: global_var_access @ 0x102240
void global_var_access(void)
{
  global_counter = global_counter + 1;
  return;
}

// Function: global_var_read @ 0x102250
int global_var_read(void)
{
  return global_counter * 2;
}

// Function: global_array_access @ 0x102260
undefined4 global_array_access(uint param_1)
{
  undefined4 uVar1;
  uVar1 = 0xffffffff;
  if (param_1 < 10) {
    uVar1 = *(undefined4 *)(global_array + (ulong)param_1 * 4);
  }
  return uVar1;
}

// Function: static_local @ 0x102280
void static_local(int param_1)
{
  int iVar1;
  iVar1 = 0;
  if (param_1 == 0) {
    iVar1 = static_local_counter + 1;
  }
  static_local_counter = iVar1;
  return;
}

// Function: call_static_func @ 0x1022a0
int call_static_func(int param_1)
{
  return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x1022b0
int access_extern_global(void)
{
  return extern_global_var + 100;
}

// Function: call_extern_func @ 0x1022c0
void call_extern_func(void)
{
  extern_function(5);
  return;
}

// Function: read_const_data @ 0x1022d0
int read_const_data(void)
{
  return (char)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x1022e0
undefined8 access_bss_var(void)
{
  return 0;
}

// Function: access_bss_buffer @ 0x1022f0
undefined8 access_bss_buffer(void)
{
  return 0;
}

// Function: global_struct_access @ 0x102300
undefined8 global_struct_access(void)
{
  return 0x1e;
}

// Function: set_file_static @ 0x102310
void set_file_static(undefined4 param_1)
{
  file_scope_static = param_1;
  return;
}

// Function: get_file_static @ 0x102320
undefined4 get_file_static(void)
{
  return file_scope_static;
}

// Function: set_global_callback @ 0x102330
void set_global_callback(undefined8 param_1)
{
  global_func_ptr = param_1;
  return;
}

// Function: call_global_callback @ 0x102340
undefined8 call_global_callback(void)
{
  undefined8 uVar1;
  if (global_func_ptr != (code *)0x0) {
    uVar1 = (*global_func_ptr)();
    return uVar1;
  }
  return 0xffffffff;
}

// Function: global_heap_store @ 0x102360
undefined4 global_heap_store(undefined4 *param_1)
{
  global_heap_ptr = param_1;
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0xffffffff;
}

// Function: static_complex_init @ 0x102380
undefined8 static_complex_init(void)
{
  return 0xf;
}

// Function: tls_access @ 0x102390
int tls_access(int param_1)
{
  return param_1 * 2;
}

// Function: init_order_test @ 0x1023a0
undefined8 init_order_test(void)
{
  return 0x14;
}

// Function: test_static_global @ 0x1023b0
void test_static_global(void)
{
  uint uVar1;
  undefined4 local_c;
  puts(&DAT_00103755);
  global_counter = global_counter + 1;
  printf("STM-L1-01 (global_var_access): %d\n");
  printf("STM-L1-01 (global_var_read): %d\n",(ulong)(uint)(global_counter * 2));
  printf("STM-L1-02 (global_array_access): %d\n",5);
  static_local_counter = 1;
  printf("STM-L1-03 (static_local): %d\n",1);
  static_local_counter = static_local_counter + 1;
  printf("STM-L1-03 (static_local): %d\n");
  printf("STM-L1-04 (call_static_func): %d\n",0xb);
  printf("STM-L2-01 (access_extern_global): %d\n",(ulong)(extern_global_var + 100));
  uVar1 = extern_function(5);
  printf("STM-L2-02 (call_extern_func): %d\n",(ulong)uVar1);
  printf("STM-L2-03 (read_const_data): %d\n",(ulong)((int)(char)const_string[4] + 0x2a));
  printf("STM-L2-04 (access_bss_var): %d\n",0);
  printf("STM-L2-04 (access_bss_buffer): %d\n",0);
  printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
  file_scope_static = 0x32;
  printf("STM-L2-06 (file_static): %d\n",0x32);
  global_func_ptr = double_value;
  printf("STM-L2-07 (global_func_ptr): %d\n",10);
  local_c = 100;
  global_heap_ptr = &local_c;
  printf("STM-L2-08 (global_heap_store): %d\n",100);
  printf("STM-L2-09 (static_complex_init): %d\n",0xf);
  printf("STM-L3-01 (tls_access): %d\n",0x14);
  printf("STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}

// Function: double_value @ 0x102580
int double_value(int param_1)
{
  return param_1 * 2;
}

// Function: memop_memset @ 0x102590
ulong memop_memset(byte *param_1,size_t param_2,int param_3)
{
  ulong uVar1;
  uVar1 = 0xffffffff;
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    memset(param_1,param_3,param_2);
    uVar1 = (ulong)*param_1;
  }
  return uVar1;
}

// Function: memop_memcpy @ 0x1025c0
undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3)
{
  undefined4 uVar1;
  uVar1 = 0xffffffff;
  if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
    memcpy(param_1,param_2,param_3);
    uVar1 = *(undefined4 *)(((param_3 & 0xfffffffffffffffc) - 4) + (long)param_1);
  }
  return uVar1;
}

// Function: memop_memmove @ 0x102600
int memop_memmove(void *param_1,ulong param_2)
{
  int iVar1;
  iVar1 = -1;
  if ((param_1 != (void *)0x0) && (1 < param_2)) {
    memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
    iVar1 = (int)*(char *)((long)param_1 + 1);
  }
  return iVar1;
}

// Function: memop_memcmp @ 0x102630
int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
  int iVar1;
  int iVar2;
  iVar2 = 0;
  if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
    iVar1 = memcmp(param_1,param_2,param_3);
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = -(uint)(iVar1 != 0);
    }
  }
  return iVar2;
}

// Function: memop_bzero @ 0x102660
ulong memop_bzero(byte *param_1,size_t param_2)
{
  if (param_1 != (byte *)0x0) {
    memset(param_1,0,param_2);
    return (ulong)*param_1;
  }
  return 0xffffffff;
}

// Function: memop_bcopy @ 0x102680
ulong memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
  ulong uVar1;
  uVar1 = 0xffffffff;
  if (((param_1 != (void *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
    memmove(param_2,param_1,param_3);
    uVar1 = (ulong)*param_2;
  }
  return uVar1;
}

// Function: memop_unaligned_access @ 0x1026b0
undefined4 memop_unaligned_access(long param_1)
{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 1);
  }
  return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x1026c0
int memop_memory_barrier(int *param_1)
{
  if (param_1 != (int *)0x0) {
    return *param_1 + *param_1;
  }
  return -1;
}

// Function: test_memory_op_functions @ 0x1026e0
void test_memory_op_functions(void)
{
  puts(&DAT_00103779);
  printf("MEMOP-L2-01: %d\n",0x41);
  printf("MEMOP-L2-02: %d\n",0x32);
  printf("MEMOP-L2-03: %c\n",0x48);
  printf("MEMOP-L2-04: %d\n",0xffffffff);
  printf("MEMOP-L2-05: %d\n",0);
  printf("MEMOP-L2-06: %d\n",1);
  printf("MEMOP-L3-01: 0x%x\n",0x4030201);
  printf("MEMOP-L3-02: %d\n",10);
  return;
}

// Function: main @ 0x1027c0
undefined8 main(void)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}

// Function: extern_function @ 0x1027e0
int extern_function(int param_1)
{
  return param_1 * 3;
}

// Function: _fini @ 0x1027e4
void _fini(void)
{
  return;
}

