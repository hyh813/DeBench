// Decompiled by BinaryAI
// SHA256: fcf96b594620cf0f3b65af7cbd836d65c5f190a30b30f138770f2838dcdbeefd

// Function: _init @ 0x100608
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_00100620 @ 0x100620
void FUN_00100620(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100640
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100650
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100660
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x100670
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x100680
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::printf @ 0x100690
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: _start @ 0x1006c0
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x1006f4
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x100710
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x100740
void register_tm_clones(void)
{
  return;
}

// Function: FUN_0010077c @ 0x10077c
void FUN_0010077c(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x100780
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: process_char @ 0x1007d4
int process_char(int param_1)
{
  int iVar1;
  iVar1 = param_1 + 0x20;
  if (0x19 < (param_1 - 0x41U & 0xff)) {
    iVar1 = param_1;
  }
  return iVar1;
}

// Function: process_short @ 0x1007ec
int process_short(int param_1,int param_2)
{
  return param_2 + param_1;
}

// Function: process_int @ 0x1007f4
uint process_int(int param_1)
{
  return param_1 << 1 | 1;
}

// Function: process_long @ 0x100804
long process_long(long param_1)
{
  return param_1 << 1;
}

// Function: process_ll @ 0x10080c
long process_ll(long param_1)
{
  return param_1 * param_1;
}

// Function: process_float @ 0x100814
undefined4 process_float(undefined4 param_1)
{
  undefined4 uVar1;
  uVar1 = NEON_fmadd(param_1,0x3fc00000,0x3f000000);
  return uVar1;
}

// Function: process_double @ 0x100824
double process_double(double param_1)
{
  return param_1 * 0.5 + 0.1;
}

// Function: process_ld @ 0x10083c
void process_ld(undefined8 param_1)
{
  undefined8 uVar1;
  uVar1 = __multf3(param_1,param_1);
  __addtf3(uVar1,0);
  return;
}

// Function: process_bool @ 0x10085c
bool process_bool(uint param_1)
{
  return 0 < (int)param_1 && (param_1 & 1) == 0;
}

// Function: const_param @ 0x100874
int const_param(int *param_1)
{
  return *param_1 + 10;
}

// Function: volatile_access @ 0x100880
int volatile_access(int *param_1)
{
  return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x100890
int test_data_types_l1(void)
{
  int iVar1;
  puts(&DAT_0010303f);
  printf("DT-L1-01 (process_char): %c\n",0x61);
  printf("DT-L1-01 (process_char): %c\n",0x62);
  printf("DT-L1-02 (process_short): %d\n",300);
  printf("DT-L1-03 (process_int): %d\n",0xb);
  printf("DT-L1-04 (process_long): %ld\n",200);
  printf("DT-L1-05 (process_ll): %lld\n",10000);
  printf("DT-L1-06 (process_float): %.2f\n",0x400c000000000000);
  printf("DT-L1-07 (process_double): %.2f\n",0x4000cccccccccccd);
  printf("DT-L1-08 (process_ld): %.2Lf\n",0);
  printf("DT-L1-09 (process_bool): %d\n",1);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-10 (const_param): %d\n",0xf);
  iVar1 = printf("DT-L1-11 (volatile_access): %d\n",0x14);
  return iVar1;
}

// Function: array_1d_stack @ 0x1009a4
int array_1d_stack(long param_1,uint param_2)
{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  if ((int)param_2 < 1) {
    return 0;
  }
  uVar5 = (ulong)param_2;
  if (param_2 < 8) {
    uVar7 = 0;
    iVar10 = 0;
  }
  else {
    uVar7 = uVar5 & 0xfffffff8;
    puVar4 = (undefined8 *)(param_1 + 0x10);
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    uVar8 = uVar7;
    do {
      puVar1 = puVar4 + -2;
      puVar2 = puVar4 + -1;
      puVar3 = puVar4 + 1;
      uVar18 = *puVar4;
      puVar4 = puVar4 + 4;
      uVar8 = uVar8 - 8;
      iVar10 = (int)*puVar1 + iVar10;
      iVar11 = (int)((ulong)*puVar1 >> 0x20) + iVar11;
      iVar12 = (int)*puVar2 + iVar12;
      iVar13 = (int)((ulong)*puVar2 >> 0x20) + iVar13;
      iVar14 = (int)uVar18 + iVar14;
      iVar15 = (int)((ulong)uVar18 >> 0x20) + iVar15;
      iVar16 = (int)*puVar3 + iVar16;
      iVar17 = (int)((ulong)*puVar3 >> 0x20) + iVar17;
    } while (uVar8 != 0);
    iVar10 = iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13;
    if (uVar7 == uVar5) {
      return iVar10;
    }
  }
  lVar6 = uVar5 - uVar7;
  piVar9 = (int *)(param_1 + uVar7 * 4);
  do {
    lVar6 = lVar6 + -1;
    iVar10 = *piVar9 + iVar10;
    piVar9 = piVar9 + 1;
  } while (lVar6 != 0);
  return iVar10;
}

// Function: array_string @ 0x100a2c
int array_string(char *param_1)
{
  char cVar1;
  int iVar2;
  iVar2 = -1;
  do {
    cVar1 = *param_1;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return iVar2;
}

// Function: array_2d_stack @ 0x100a44
int array_2d_stack(int *param_1)
{
  return param_1[99] +
         param_1[0x58] +
         param_1[0x4d] +
         param_1[0x42] +
         param_1[0x37] + param_1[0x2c] + param_1[0x21] + param_1[0x16] + param_1[0xb] + *param_1;
}

// Function: array_3d @ 0x100a94
int array_3d(int *param_1)
{
  return (int)*(undefined8 *)(param_1 + 0x6d) + (int)*(undefined8 *)(param_1 + 0x75) +
         (int)*(undefined8 *)(param_1 + 0x71) + (int)*(undefined8 *)(param_1 + 0x79) +
         (int)*(undefined8 *)(param_1 + 0x65) + (int)*(undefined8 *)(param_1 + 0x69) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x6d) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x75) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x71) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x79) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x65) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x69) >> 0x20) +
         (int)*(undefined8 *)(param_1 + 0x6f) + (int)*(undefined8 *)(param_1 + 0x77) +
         (int)*(undefined8 *)(param_1 + 0x73) + (int)*(undefined8 *)(param_1 + 0x7b) +
         (int)*(undefined8 *)(param_1 + 0x67) + (int)*(undefined8 *)(param_1 + 0x6b) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x6f) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x77) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x73) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x7b) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x67) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x6b) >> 0x20) + param_1[100] +
         (int)*(undefined8 *)(param_1 + 0x54) + (int)*(undefined8 *)(param_1 + 0x5c) +
         (int)*(undefined8 *)(param_1 + 0x58) + (int)*(undefined8 *)(param_1 + 0x60) +
         (int)*(undefined8 *)(param_1 + 0x4c) + (int)*(undefined8 *)(param_1 + 0x50) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x5c) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) +
         (int)*(undefined8 *)(param_1 + 0x56) + (int)*(undefined8 *)(param_1 + 0x5e) +
         (int)*(undefined8 *)(param_1 + 0x5a) + (int)*(undefined8 *)(param_1 + 0x62) +
         (int)*(undefined8 *)(param_1 + 0x4e) + (int)*(undefined8 *)(param_1 + 0x52) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x56) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x5e) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x5a) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x62) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x4e) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x52) >> 0x20) + param_1[0x4b] +
         (int)*(undefined8 *)(param_1 + 0x3b) + (int)*(undefined8 *)(param_1 + 0x43) +
         (int)*(undefined8 *)(param_1 + 0x3f) + (int)*(undefined8 *)(param_1 + 0x47) +
         (int)*(undefined8 *)(param_1 + 0x33) + (int)*(undefined8 *)(param_1 + 0x37) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x3b) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x43) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x3f) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x47) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x33) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x37) >> 0x20) +
         (int)*(undefined8 *)(param_1 + 0x3d) + (int)*(undefined8 *)(param_1 + 0x45) +
         (int)*(undefined8 *)(param_1 + 0x41) + (int)*(undefined8 *)(param_1 + 0x49) +
         (int)*(undefined8 *)(param_1 + 0x35) + (int)*(undefined8 *)(param_1 + 0x39) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x3d) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x45) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x41) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x49) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x35) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x39) >> 0x20) + param_1[0x32] +
         (int)*(undefined8 *)(param_1 + 0x22) + (int)*(undefined8 *)(param_1 + 0x2a) +
         (int)*(undefined8 *)(param_1 + 0x26) + (int)*(undefined8 *)(param_1 + 0x2e) +
         (int)*(undefined8 *)(param_1 + 0x1a) + (int)*(undefined8 *)(param_1 + 0x1e) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x22) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x2a) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x26) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x1a) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20) +
         (int)*(undefined8 *)(param_1 + 0x24) + (int)*(undefined8 *)(param_1 + 0x2c) +
         (int)*(undefined8 *)(param_1 + 0x28) + (int)*(undefined8 *)(param_1 + 0x30) +
         (int)*(undefined8 *)(param_1 + 0x1c) + (int)*(undefined8 *)(param_1 + 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) + param_1[0x19] +
         (int)*(undefined8 *)(param_1 + 9) + (int)*(undefined8 *)(param_1 + 0x11) +
         (int)*(undefined8 *)(param_1 + 0xd) + (int)*(undefined8 *)(param_1 + 0x15) +
         (int)*(undefined8 *)(param_1 + 1) + (int)*(undefined8 *)(param_1 + 5) +
         (int)((ulong)*(undefined8 *)(param_1 + 9) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x11) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0xd) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20) +
         (int)*(undefined8 *)(param_1 + 0xb) + (int)*(undefined8 *)(param_1 + 0x13) +
         (int)*(undefined8 *)(param_1 + 0xf) + (int)*(undefined8 *)(param_1 + 0x17) +
         (int)*(undefined8 *)(param_1 + 3) + (int)*(undefined8 *)(param_1 + 7) +
         (int)((ulong)*(undefined8 *)(param_1 + 0xb) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x13) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0xf) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 0x17) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 3) >> 0x20) +
         (int)((ulong)*(undefined8 *)(param_1 + 7) >> 0x20) + *param_1;
}

// Function: array_vla @ 0x100bcc
int array_vla(uint param_1,long param_2)
{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  if ((int)param_1 < 1) {
    return 0;
  }
  uVar4 = (ulong)param_1;
  if (param_1 < 8) {
    uVar6 = 0;
    iVar10 = 0;
  }
  else {
    uVar6 = uVar4 & 0xfffffff8;
    puVar7 = (undefined8 *)(param_2 + 0x10);
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    uVar9 = uVar6;
    do {
      puVar1 = puVar7 + -2;
      puVar2 = puVar7 + -1;
      puVar3 = puVar7 + 1;
      uVar18 = *puVar7;
      puVar7 = puVar7 + 4;
      uVar9 = uVar9 - 8;
      iVar10 = (int)*puVar1 + iVar10;
      iVar11 = (int)((ulong)*puVar1 >> 0x20) + iVar11;
      iVar12 = (int)*puVar2 + iVar12;
      iVar13 = (int)((ulong)*puVar2 >> 0x20) + iVar13;
      iVar14 = (int)uVar18 + iVar14;
      iVar15 = (int)((ulong)uVar18 >> 0x20) + iVar15;
      iVar16 = (int)*puVar3 + iVar16;
      iVar17 = (int)((ulong)*puVar3 >> 0x20) + iVar17;
    } while (uVar9 != 0);
    iVar10 = iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13;
    if (uVar6 == uVar4) {
      return iVar10;
    }
  }
  lVar5 = uVar4 - uVar6;
  piVar8 = (int *)(param_2 + uVar6 * 4);
  do {
    lVar5 = lVar5 + -1;
    iVar10 = *piVar8 + iVar10;
    piVar8 = piVar8 + 1;
  } while (lVar5 != 0);
  return iVar10;
}

// Function: array_pointer @ 0x100c50
int array_pointer(int *param_1,uint param_2)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  if ((int)param_2 < 1) {
    return 0;
  }
  uVar5 = (ulong)param_2;
  if (param_2 == 1) {
    uVar7 = 0;
    iVar3 = 0;
  }
  else {
    uVar7 = uVar5 & 0xfffffffe;
    iVar4 = 0;
    iVar3 = 0;
    uVar9 = uVar7;
    piVar8 = param_1;
    do {
      iVar2 = *piVar8;
      uVar9 = uVar9 - 2;
      piVar1 = piVar8 + 10;
      piVar8 = piVar8 + 0x14;
      iVar4 = iVar2 + iVar4;
      iVar3 = *piVar1 + iVar3;
    } while (uVar9 != 0);
    iVar3 = iVar3 + iVar4;
    if (uVar7 == uVar5) {
      return iVar3;
    }
  }
  lVar6 = uVar5 - uVar7;
  piVar8 = param_1 + uVar7 * 10;
  do {
    lVar6 = lVar6 + -1;
    iVar3 = *piVar8 + iVar3;
    piVar8 = piVar8 + 10;
  } while (lVar6 != 0);
  return iVar3;
}

// Function: pointer_array @ 0x100cd8
int pointer_array(int **param_1,uint param_2)
{
  int iVar1;
  ulong uVar2;
  if ((int)param_2 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (9 < param_2) {
      param_2 = 10;
    }
    uVar2 = (ulong)param_2;
    do {
      if (*param_1 != (int *)0x0) {
        iVar1 = **param_1 + iVar1;
      }
      param_1 = param_1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return iVar1;
}

// Function: array_complex_index @ 0x100d20
undefined4 array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)
{
  undefined4 uVar1;
  if (-1 < param_4) {
    uVar1 = 0xffffffff;
    if (((param_5 < param_3) && (param_4 < param_2)) && (-1 < param_5)) {
      uVar1 = *(undefined4 *)(param_1 + (long)(param_4 + param_5 * param_2) * 4);
    }
    return uVar1;
  }
  return 0xffffffff;
}

// Function: array_oob @ 0x100d54
int array_oob(long param_1,uint param_2)
{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  if ((int)param_2 < 0) {
    return 0;
  }
  uVar5 = (ulong)(param_2 + 1);
  if (param_2 < 7) {
    uVar7 = 0;
    iVar10 = 0;
  }
  else {
    uVar7 = uVar5 & 0xfffffff8;
    puVar4 = (undefined8 *)(param_1 + 0x10);
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    uVar8 = uVar7;
    do {
      puVar1 = puVar4 + -2;
      puVar2 = puVar4 + -1;
      puVar3 = puVar4 + 1;
      uVar18 = *puVar4;
      puVar4 = puVar4 + 4;
      uVar8 = uVar8 - 8;
      iVar10 = (int)*puVar1 + iVar10;
      iVar11 = (int)((ulong)*puVar1 >> 0x20) + iVar11;
      iVar12 = (int)*puVar2 + iVar12;
      iVar13 = (int)((ulong)*puVar2 >> 0x20) + iVar13;
      iVar14 = (int)uVar18 + iVar14;
      iVar15 = (int)((ulong)uVar18 >> 0x20) + iVar15;
      iVar16 = (int)*puVar3 + iVar16;
      iVar17 = (int)((ulong)*puVar3 >> 0x20) + iVar17;
    } while (uVar8 != 0);
    iVar10 = iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13;
    if (uVar7 == uVar5) {
      return iVar10;
    }
  }
  lVar6 = uVar5 - uVar7;
  piVar9 = (int *)(param_1 + uVar7 * 4);
  do {
    lVar6 = lVar6 + -1;
    iVar10 = *piVar9 + iVar10;
    piVar9 = piVar9 + 1;
  } while (lVar6 != 0);
  return iVar10;
}

// Function: test_array_types @ 0x100dd8
int test_array_types(void)
{
  int iVar1;
  ulong uVar2;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  puts(&DAT_00103060);
  printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
  printf("ARR-L1-02 (array_string): %d\n",5);
  printf("ARR-L1-03 (array_2d_stack): %d\n",0x2d);
  local_30 = 1;
  uStack_218 = 0x100000001;
  local_220 = 0x100000001;
  uStack_208 = 0x100000001;
  uStack_210 = 0x100000001;
  uStack_1f8 = 0x100000001;
  local_200 = 0x100000001;
  uStack_1e8 = 0x100000001;
  uStack_1f0 = 0x100000001;
  uStack_1d8 = 0x100000001;
  local_1e0 = 0x100000001;
  uStack_1c8 = 0x100000001;
  uStack_1d0 = 0x100000001;
  uStack_1b8 = 0x100000001;
  local_1c0 = 0x100000001;
  uStack_1a8 = 0x100000001;
  uStack_1b0 = 0x100000001;
  uStack_198 = 0x100000001;
  local_1a0 = 0x100000001;
  uStack_188 = 0x100000001;
  uStack_190 = 0x100000001;
  uStack_178 = 0x100000001;
  local_180 = 0x100000001;
  uStack_168 = 0x100000001;
  uStack_170 = 0x100000001;
  uStack_158 = 0x100000001;
  local_160 = 0x100000001;
  uStack_148 = 0x100000001;
  uStack_150 = 0x100000001;
  uStack_138 = 0x100000001;
  local_140 = 0x100000001;
  uStack_128 = 0x100000001;
  uStack_130 = 0x100000001;
  uStack_118 = 0x100000001;
  local_120 = 0x100000001;
  uStack_108 = 0x100000001;
  uStack_110 = 0x100000001;
  uStack_f8 = 0x100000001;
  local_100 = 0x100000001;
  uStack_e8 = 0x100000001;
  uStack_f0 = 0x100000001;
  uStack_d8 = 0x100000001;
  local_e0 = 0x100000001;
  uStack_c8 = 0x100000001;
  uStack_d0 = 0x100000001;
  uStack_b8 = 0x100000001;
  local_c0 = 0x100000001;
  uStack_a8 = 0x100000001;
  uStack_b0 = 0x100000001;
  uStack_98 = 0x100000001;
  local_a0 = 0x100000001;
  uStack_88 = 0x100000001;
  uStack_90 = 0x100000001;
  uStack_78 = 0x100000001;
  local_80 = 0x100000001;
  uStack_68 = 0x100000001;
  uStack_70 = 0x100000001;
  uStack_58 = 0x100000001;
  local_60 = 0x100000001;
  uStack_48 = 0x100000001;
  uStack_50 = 0x100000001;
  uStack_38 = 0x100000001;
  local_40 = 0x100000001;
  uVar2 = array_3d(&local_220);
  printf("ARR-L1-04 (array_3d): %d\n",uVar2 & 0xffffffff);
  printf("ARR-L2-01 (array_vla): %d\n",0x3c);
  printf("ARR-L2-02 (array_pointer): %d\n",100);
  printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
  iVar1 = printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
  return iVar1;
}

// Function: ptr_single @ 0x100ed8
int ptr_single(int *param_1)
{
  return *param_1 + 10;
}

// Function: ptr_double @ 0x100ee4
int ptr_double(int **param_1)
{
  return **param_1 + 5;
}

// Function: ptr_triple @ 0x100ef4
int ptr_triple(undefined8 *param_1)
{
  return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x100f08
int ptr_increment(int *param_1,int param_2)
{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  if (param_2 < 1) {
    return 0;
  }
  if (param_2 - 1U < 7) {
    uVar7 = 0;
    iVar9 = 0;
    piVar6 = param_1;
  }
  else {
    uVar2 = (ulong)(param_2 - 1U) + 1;
    uVar7 = uVar2 & 0x1fffffff8;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    piVar6 = param_1 + uVar7;
    puVar5 = (undefined8 *)(param_1 + 4);
    uVar8 = uVar7;
    do {
      puVar1 = puVar5 + -2;
      puVar3 = puVar5 + -1;
      puVar4 = puVar5 + 1;
      uVar17 = *puVar5;
      puVar5 = puVar5 + 4;
      uVar8 = uVar8 - 8;
      iVar9 = (int)*puVar1 + iVar9;
      iVar10 = (int)((ulong)*puVar1 >> 0x20) + iVar10;
      iVar11 = (int)*puVar3 + iVar11;
      iVar12 = (int)((ulong)*puVar3 >> 0x20) + iVar12;
      iVar13 = (int)uVar17 + iVar13;
      iVar14 = (int)((ulong)uVar17 >> 0x20) + iVar14;
      iVar15 = (int)*puVar4 + iVar15;
      iVar16 = (int)((ulong)*puVar4 >> 0x20) + iVar16;
    } while (uVar8 != 0);
    iVar9 = iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12;
    if (uVar2 == uVar7) {
      return iVar9;
    }
  }
  param_2 = param_2 - (int)uVar7;
  do {
    param_2 = param_2 + -1;
    iVar9 = *piVar6 + iVar9;
    piVar6 = piVar6 + 1;
  } while (param_2 != 0);
  return iVar9;
}

// Function: ptr_offset @ 0x100f94
undefined4 ptr_offset(long param_1,int param_2)
{
  return *(undefined4 *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x100f9c
ulong ptr_diff(long param_1,long param_2)
{
  return (ulong)(param_1 - param_2) >> 2;
}

// Function: ptr_void @ 0x100fa8
uint ptr_void(uint *param_1,int param_2)
{
  if (param_2 == 1) {
    return (uint)*(byte *)param_1;
  }
  if (param_2 == 0) {
    return *param_1;
  }
  return 0xffffffff;
}

// Function: ptr_const @ 0x100fcc
int ptr_const(int *param_1)
{
  return *param_1 << 1;
}

// Function: ptr_const_ptr @ 0x100fd8
void ptr_const_ptr(int *param_1)
{
  *param_1 = *param_1 + 5;
  return;
}

// Function: ptr_func_simple @ 0x100fec
void ptr_func_simple(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)
{
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}

// Function: ptr_func_complex @ 0x100ff8
void ptr_func_complex(code *param_1,undefined8 param_2)
{
  undefined *local_20;
  undefined8 uStack_18;
  uStack_18 = 0;
  local_20 = &DAT_00102cf0;
  (*param_1)(param_2,&local_20);
  return;
}

// Function: ptr_cast @ 0x101034
undefined4 ptr_cast(undefined4 *param_1)
{
  return *param_1;
}

// Function: opaque_handle_create @ 0x10103c
long opaque_handle_create(int param_1)
{
  return (long)param_1;
}

// Function: opaque_handle_op @ 0x101044
int opaque_handle_op(int param_1)
{
  return param_1 << 1;
}

// Function: test_pointer_types @ 0x10104c
int test_pointer_types(void)
{
  int iVar1;
  puts(&DAT_0010307b);
  printf("PTR-L2-01 (ptr_single): %d\n",0xf);
  printf("PTR-L2-02 (ptr_double): %d\n",0xf);
  printf("PTR-L2-03 (ptr_triple): %d\n",6);
  printf("PTR-L2-04 (ptr_increment): %d\n",0xf);
  printf("PTR-L2-05 (ptr_offset): %d\n",0x1e);
  printf("PTR-L2-06 (ptr_diff): %d\n",4);
  printf("PTR-L2-07 (ptr_void): %d\n",0x2a);
  printf("PTR-L2-07 (ptr_void): %d\n",0x41);
  printf("PTR-L2-08 (ptr_const): %d\n",0x14);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
  printf("PTR-L2-10 (ptr_func_simple): %d\n",10);
  printf("PTR-L2-11 (ptr_func_complex): %d\n",1);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
  iVar1 = printf("PTR-L2-13 (opaque_handle_op): %d\n",0x14);
  return iVar1;
}

// Function: struct_simple @ 0x101150
int struct_simple(int *param_1)
{
  return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x101164
int struct_array(long param_1,uint param_2)
{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined8 uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  int *piVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  if ((int)param_2 < 1) {
    return 0;
  }
  uVar27 = (ulong)param_2;
  if (param_2 < 8) {
    uVar29 = 0;
    iVar31 = 0;
  }
  else {
    uVar29 = uVar27 & 0xfffffff8;
    iVar35 = 0;
    iVar36 = 0;
    iVar37 = 0;
    iVar38 = 0;
    iVar31 = 0;
    iVar32 = 0;
    iVar33 = 0;
    iVar34 = 0;
    uVar26 = uVar29;
    lVar28 = param_1;
    do {
      uVar26 = uVar26 - 8;
      tmp_ldXn = lVar28;
      piVar30 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar2 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar3 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar4 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar5 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar6 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar7 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar8 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar9 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar10 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar11 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar12 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      uVar13 = tmp_ldXn;
      tmp_ldXn = uVar13;
      piVar14 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar15 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar16 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar17 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar18 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar19 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar20 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar21 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar22 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar23 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar24 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      piVar25 = (int *)tmp_ldXn;
      lVar1 = tmp_ldXn;
      tmp_ldXn = lVar1 + 4;
      iVar35 = *piVar30 + iVar35 + *piVar2 + *piVar3;
      iVar36 = *piVar4 + iVar36 + *piVar5 + *piVar6;
      iVar37 = *piVar7 + iVar37 + *piVar8 + *piVar9;
      iVar38 = *piVar10 + iVar38 + *piVar11 + *piVar12;
      iVar31 = *piVar14 + iVar31 + *piVar15 + *piVar16;
      iVar32 = *piVar17 + iVar32 + *piVar18 + *piVar19;
      iVar33 = *piVar20 + iVar33 + *piVar21 + *piVar22;
      iVar34 = *piVar23 + iVar34 + *piVar24 + *piVar25;
      lVar28 = lVar28 + 0x60;
    } while (uVar26 != 0);
    iVar31 = iVar31 + iVar35 + iVar32 + iVar36 + iVar33 + iVar37 + iVar34 + iVar38;
    if (uVar29 == uVar27) {
      return iVar31;
    }
  }
  lVar28 = uVar27 - uVar29;
  piVar30 = (int *)(param_1 + uVar29 * 0xc + 4);
  do {
    piVar3 = piVar30 + -1;
    iVar32 = *piVar30;
    piVar2 = piVar30 + 1;
    piVar30 = piVar30 + 3;
    lVar28 = lVar28 + -1;
    iVar31 = *piVar3 + iVar31 + iVar32 + *piVar2;
  } while (lVar28 != 0);
  return iVar31;
}

// Function: struct_nested @ 0x10121c
int struct_nested(int *param_1)
{
  return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x10122c
int struct_deep(long param_1)
{
  return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x10123c
int struct_with_ptr(int *param_1)
{
  uint *puVar1;
  puVar1 = *(uint **)(param_1 + 2);
  if (puVar1 != (uint *)0x0) {
    puVar1 = (uint *)(ulong)*puVar1;
  }
  return (int)puVar1 + *param_1;
}

// Function: struct_bitfields @ 0x101254
short struct_bitfields(ushort *param_1)
{
  ushort uVar1;
  uVar1 = *param_1;
  return (uVar1 & 1) + (uVar1 >> 6) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}

// Function: union_type @ 0x101274
float union_type(float *param_1,int param_2)
{
  if (param_2 == 1) {
    return (float)(int)*param_1;
  }
  if (param_2 == 0) {
    return *param_1;
  }
  return (float)(uint)*(byte *)param_1;
}

// Function: union_array @ 0x10129c
int union_array(long param_1,uint param_2)
{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  if ((int)param_2 < 1) {
    return 0;
  }
  uVar5 = (ulong)param_2;
  if (param_2 < 8) {
    uVar7 = 0;
    iVar10 = 0;
  }
  else {
    uVar7 = uVar5 & 0xfffffff8;
    puVar4 = (undefined8 *)(param_1 + 0x10);
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    uVar8 = uVar7;
    do {
      puVar1 = puVar4 + -2;
      puVar2 = puVar4 + -1;
      puVar3 = puVar4 + 1;
      uVar18 = *puVar4;
      puVar4 = puVar4 + 4;
      uVar8 = uVar8 - 8;
      iVar10 = (int)*puVar1 + iVar10;
      iVar11 = (int)((ulong)*puVar1 >> 0x20) + iVar11;
      iVar12 = (int)*puVar2 + iVar12;
      iVar13 = (int)((ulong)*puVar2 >> 0x20) + iVar13;
      iVar14 = (int)uVar18 + iVar14;
      iVar15 = (int)((ulong)uVar18 >> 0x20) + iVar15;
      iVar16 = (int)*puVar3 + iVar16;
      iVar17 = (int)((ulong)*puVar3 >> 0x20) + iVar17;
    } while (uVar8 != 0);
    iVar10 = iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13;
    if (uVar7 == uVar5) {
      return iVar10;
    }
  }
  lVar6 = uVar5 - uVar7;
  piVar9 = (int *)(param_1 + uVar7 * 4);
  do {
    lVar6 = lVar6 + -1;
    iVar10 = *piVar9 + iVar10;
    piVar9 = piVar9 + 1;
  } while (lVar6 != 0);
  return iVar10;
}

// Function: enum_type @ 0x101324
int enum_type(int param_1)
{
  return param_1 * 10;
}

// Function: enum_switch @ 0x101330
undefined4 enum_switch(uint param_1)
{
  if (param_1 < 4) {
    return *(undefined4 *)(&DAT_00102aa0 + (long)(int)param_1 * 4);
  }
  return 0xffffff9d;
}

// Function: struct_func_ptr @ 0x101350
void struct_func_ptr(undefined4 *param_1)
{
  (**(code **)(param_1 + 2))(*param_1);
  return;
}

// Function: linked_list @ 0x101360
int linked_list(int *param_1)
{
  int iVar1;
  int iVar2;
  iVar2 = 0;
  if (param_1 != (int *)0x0) {
    do {
      iVar1 = *param_1;
      param_1 = *(int **)(param_1 + 2);
      iVar2 = iVar1 + iVar2;
    } while (param_1 != (int *)0x0);
  }
  return iVar2;
}

// Function: doubly_linked_list @ 0x101380
int doubly_linked_list(int *param_1)
{
  int iVar1;
  int iVar2;
  iVar2 = 0;
  if (param_1 != (int *)0x0) {
    do {
      iVar1 = *param_1;
      param_1 = *(int **)(param_1 + 2);
      iVar2 = iVar1 + iVar2;
    } while (param_1 != (int *)0x0);
  }
  return iVar2;
}

// Function: binary_tree_sum @ 0x1013a0
int binary_tree_sum(int *param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  if (param_1 != (int *)0x0) {
    iVar3 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = binary_tree_sum(*(undefined8 *)(param_1 + 2));
      param_1 = *(int **)(param_1 + 4);
      iVar3 = iVar1 + iVar3 + iVar2;
    } while (param_1 != (int *)0x0);
    return iVar3;
  }
  return 0;
}

// Function: graph_traverse @ 0x101408
int graph_traverse(long param_1)
{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  if ((int)*(uint *)(param_1 + 0x50) < 1) {
    iVar1 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = 0;
    do {
      for (piVar3 = *(int **)(param_1 + uVar2 * 8); piVar3 != (int *)0x0;
          piVar3 = *(int **)(piVar3 + 2)) {
        iVar1 = *piVar3 + iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x50));
  }
  return iVar1;
}

// Function: test_composite_types @ 0x101454
int test_composite_types(void)
{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_80 [2];
  undefined4 *local_78;
  undefined8 uStack_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  int *piStack_58;
  int local_50 [2];
  undefined4 *local_48;
  undefined4 local_40 [2];
  undefined4 *local_38;
  undefined4 local_30 [2];
  undefined8 local_28;
  puts(&DAT_00103096);
  printf("CMP-L2-01 (struct_simple): %d\n",6);
  printf("CMP-L2-02 (struct_array): %d\n",9);
  printf("CMP-L2-03 (struct_nested): %d\n",0x69);
  printf("CMP-L2-04 (struct_deep): %d\n",0x102);
  printf("CMP-L2-05 (struct_with_ptr): %d\n",0x1e);
  printf("CMP-L2-06 (struct_bitfields): %d\n",0x6a);
  printf("CMP-L2-07 (union_type): %d\n",0x12345678);
  printf("CMP-L2-08 (union_array): %d\n",0x3c);
  printf("CMP-L2-09 (enum_type): %d\n",10);
  printf("CMP-L2-10 (enum_switch): %d\n",0x32);
  printf("CMP-L2-11 (struct_func_ptr): %d\n",0x15);
  piVar3 = local_50;
  uVar2 = 0;
  local_50[0] = 10;
  local_30[0] = 0x1e;
  local_40[0] = 0x14;
  local_48 = local_40;
  local_38 = local_30;
  local_28 = 0;
  do {
    iVar1 = *piVar3;
    piVar3 = *(int **)(piVar3 + 2);
    uVar2 = (ulong)(uint)(iVar1 + (int)uVar2);
  } while (piVar3 != (int *)0x0);
  printf("CMP-L2-12 (linked_list): %d\n",uVar2);
  piVar3 = local_80;
  uVar2 = 0;
  local_80[0] = 10;
  local_68[0] = 0x14;
  local_60 = 0;
  piStack_58 = piVar3;
  local_78 = local_68;
  uStack_70 = 0;
  do {
    iVar1 = *piVar3;
    piVar3 = *(int **)(piVar3 + 2);
    uVar2 = (ulong)(uint)(iVar1 + (int)uVar2);
  } while (piVar3 != (int *)0x0);
  printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar2);
  uStack_98 = 0;
  local_a0 = 100;
  local_90 = 0;
  uVar2 = binary_tree_sum(&local_a0);
  printf("CMP-L2-14 (binary_tree): %d\n",uVar2 & 0xffffffff);
  iVar1 = printf("CMP-L2-15 (graph_traverse): %d\n",1);
  return iVar1;
}

// Function: main @ 0x101604
undefined8 main(void)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}

// Function: __addtf3 @ 0x101630
ulong __addtf3(ulong param_1,ulong param_2)
{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong in_register_00005008;
  ulong in_register_00005028;
  uVar10 = fpcr;
  uVar1 = (in_register_00005008 & 0xffffffffffff) << 3;
  lVar14 = -((long)in_register_00005008 >> 0x3f);
  lVar7 = -((long)in_register_00005028 >> 0x3f);
  uVar13 = in_register_00005028 << 3;
  uVar2 = uVar13 & 0x7fffffffffff8;
  uVar21 = uVar1 | param_1 >> 0x3d;
  uVar17 = in_register_00005008 >> 0x30 & 0x7fff;
  uVar15 = in_register_00005028 >> 0x30 & 0x7fff;
  uVar12 = uVar2 | param_2 >> 0x3d;
  uVar18 = param_1 * 8;
  uVar20 = param_2 * 8;
  uVar19 = uVar18;
  uVar9 = uVar21;
  if ((long)in_register_00005028 >> 0x3f == (long)in_register_00005008 >> 0x3f) {
    uVar6 = (int)uVar17 - (int)uVar15;
    uVar8 = (ulong)uVar6;
    if ((int)uVar6 < 1) {
      if (uVar6 == 0) {
        uVar11 = uVar17 + 1;
        if ((uVar11 & 0x7ffe) == 0) {
          uVar11 = uVar21 | uVar18;
          if (uVar17 != 0) {
            uVar6 = 0;
            if (uVar17 == 0x7fff) {
              if (uVar11 == 0) {
                if (uVar15 != 0x7fff) goto LAB_00101f20;
                if ((uVar12 | uVar20) == 0) {
                  return 0;
                }
              }
              else {
                uVar8 = uVar1 >> 0x32 ^ 1;
                uVar6 = (uint)uVar8;
                if (uVar15 != 0x7fff) goto LAB_001020c8;
                if ((uVar12 | uVar20) == 0) goto LAB_00102160;
              }
LAB_0010218c:
              if ((uVar13 & 0x4000000000000) == 0) {
                uVar6 = 1;
              }
              uVar8 = (ulong)uVar6;
              if (uVar11 != 0) {
LAB_001020d0:
                uVar19 = in_register_00005008 & 0xffffffffffff;
                if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
                  uVar19 = uVar2 >> 3;
                  param_1 = param_2;
                }
                goto LAB_00101b14;
              }
LAB_00101f20:
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
            }
            else {
              if (uVar15 == 0x7fff) {
                if ((uVar12 | uVar20) != 0) goto LAB_0010218c;
                if (uVar11 == 0) {
                  return 0;
                }
              }
              else {
                if (uVar11 == 0) goto LAB_00101f20;
LAB_001020c8:
                if ((uVar12 | uVar20) != 0) goto LAB_001020d0;
              }
LAB_00102160:
              uVar19 = in_register_00005008 & 0xffffffffffff;
            }
            goto LAB_00101b14;
          }
          if (uVar11 == 0) {
            uVar19 = uVar20;
            uVar9 = uVar12;
            if ((uVar12 | uVar20) == 0) {
              param_1 = 0;
              goto LAB_001017c8;
            }
            goto LAB_00101e98;
          }
          if ((uVar12 | uVar20) == 0) goto LAB_00101e98;
          uVar19 = uVar18 + uVar20;
          uVar9 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          if ((uVar9 >> 0x33 & 1) != 0) {
            uVar9 = uVar9 & 0xfff7ffffffffffff;
            uVar12 = 0;
            bVar3 = false;
            uVar11 = 1;
            goto LAB_0010177c;
          }
LAB_00101768:
          lVar7 = lVar14;
          uVar18 = uVar19 | uVar9;
          goto joined_r0x001018bc;
        }
        if (uVar11 != 0x7fff) {
          uVar19 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          bVar3 = false;
          uVar12 = uVar18 + uVar20 >> 1 & 7;
          uVar9 = uVar19 >> 1;
          uVar19 = uVar18 + uVar20 >> 1 | uVar19 << 0x3f;
          goto LAB_0010177c;
        }
        uVar19 = uVar10 & 0xc00000;
        if (uVar19 == 0) goto LAB_00101ec4;
        if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) goto LAB_00102170;
        if (uVar19 != 0x800000) goto LAB_00101e34;
        if (lVar14 == 0) goto LAB_0010210c;
LAB_00101fd8:
        uVar8 = 0x14;
      }
      else {
        uVar17 = uVar15;
        if (uVar17 == 0) {
          if ((uVar21 | uVar18) == 0) {
            uVar19 = uVar20;
            uVar9 = uVar12;
            lVar7 = lVar14;
            if (uVar15 == 0x7fff) {
              if ((uVar12 | uVar20) != 0) {
                uVar8 = uVar2 >> 0x32 ^ 1;
                goto LAB_00101950;
              }
              goto LAB_00101c04;
            }
            goto LAB_001018ac;
          }
          uVar6 = ~uVar6;
          if (uVar6 == 0) {
            uVar18 = uVar18 + uVar20;
            uVar12 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
            goto LAB_00101a68;
          }
        }
        else {
          uVar6 = -uVar6;
          uVar21 = uVar21 | 0x8000000000000;
        }
        if (uVar15 == 0x7fff) {
          if ((uVar12 | uVar20) == 0) {
            return 0;
          }
          uVar8 = uVar2 >> 0x32 ^ 1;
          uVar19 = uVar2 >> 3;
          param_1 = param_2;
          goto LAB_00101b14;
        }
        if ((int)uVar6 < 0x75) {
          if ((int)uVar6 < 0x40) {
            uVar19 = uVar21 << ((ulong)(0x40 - uVar6) & 0x3f) | uVar18 >> ((ulong)uVar6 & 0x3f) |
                     (ulong)(uVar18 << ((ulong)(0x40 - uVar6) & 0x3f) != 0);
            uVar12 = uVar12 + (uVar21 >> ((ulong)uVar6 & 0x3f));
          }
          else {
            uVar19 = uVar18 | uVar21 << ((ulong)(0x80 - uVar6) & 0x3f);
            if (uVar6 - 0x40 == 0) {
              uVar19 = uVar18;
            }
            uVar19 = (ulong)(uVar19 != 0) | uVar21 >> ((ulong)(uVar6 - 0x40) & 0x3f);
          }
        }
        else {
          uVar19 = (ulong)((uVar21 | uVar18) != 0);
        }
        uVar18 = uVar19 + uVar20;
        if (CARRY8(uVar19,uVar20)) {
          uVar12 = uVar12 + 1;
        }
LAB_00101a68:
        uVar15 = uVar17;
        uVar19 = uVar18;
        uVar9 = uVar12;
        lVar7 = lVar14;
        if ((uVar12 >> 0x33 & 1) == 0) goto LAB_001018ac;
        uVar11 = uVar17 + 1;
        if (uVar11 != 0x7fff) {
          bVar3 = false;
          uVar19 = uVar18 & 1 | uVar18 >> 1 | uVar12 << 0x3f;
          uVar9 = (uVar12 & 0xfff7ffffffffffff) >> 1;
          uVar12 = uVar18 & 1 | uVar18 >> 1 & 7;
          goto LAB_0010177c;
        }
        uVar19 = uVar10 & 0xc00000;
        if (uVar19 == 0) {
LAB_00101ec4:
          uVar8 = 0x14;
          goto LAB_001019bc;
        }
        if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) {
LAB_00102170:
          uVar8 = 0x14;
          goto LAB_001019bc;
        }
        if (uVar19 == 0x800000) {
          if (lVar14 != 0) goto LAB_00101fd8;
LAB_0010210c:
          uVar19 = 0xffffffffffffffff;
          uVar11 = 0x7ffe;
          uVar8 = 0x14;
          uVar9 = uVar19;
          goto LAB_001017ac;
        }
LAB_00101e34:
        uVar6 = 0x14;
        if ((uVar10 & 0xc00000) == 0x400000) {
          uVar19 = 0xffffffffffffffff;
          uVar11 = 0x7ffe;
          bVar3 = false;
          uVar8 = 0x14;
          uVar9 = uVar19;
          goto joined_r0x00101e54;
        }
LAB_00101978:
        uVar10 = uVar10 & 0xc00000;
        if (uVar10 != 0) {
          if (uVar10 == 0x400000) {
            if (lVar14 != 0) goto LAB_00101994;
          }
          else if (((uint)(uVar10 == 0x800000) & (uint)lVar14) == 0) {
LAB_00101994:
            param_1 = 0xffffffffffffffff;
            uVar8 = (ulong)(uVar6 | 0x14);
            goto LAB_001017c8;
          }
        }
        uVar8 = (ulong)(uVar6 | 0x14);
      }
LAB_001019bc:
      param_1 = 0;
      goto LAB_001019d0;
    }
    if (uVar15 == 0) {
      if ((uVar12 | uVar20) != 0) {
        uVar8 = (ulong)(uVar6 - 1);
        if (uVar6 - 1 == 0) {
          uVar18 = uVar18 + uVar20;
          uVar12 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          goto LAB_00101a68;
        }
        if (uVar17 == 0x7fff) {
          if ((uVar21 | uVar18) == 0) {
            return 0;
          }
          goto LAB_00101944;
        }
        goto LAB_00101840;
      }
      uVar15 = uVar17;
      lVar7 = lVar14;
      if (uVar17 != 0x7fff) goto LAB_001018ac;
      if ((uVar21 | uVar18) == 0) goto LAB_00101c04;
      uVar8 = (ulong)((uint)(uVar1 >> 0x32) ^ 1);
      uVar20 = uVar18;
      uVar12 = uVar21;
LAB_00101950:
      uVar11 = 0x7fff;
      goto LAB_00101958;
    }
    uVar12 = uVar12 | 0x8000000000000;
    if (uVar17 != 0x7fff) {
LAB_00101840:
      iVar5 = (int)uVar8;
      if (iVar5 < 0x75) {
        if (iVar5 < 0x40) {
          uVar19 = uVar12 << ((ulong)(0x40 - iVar5) & 0x3f) | uVar20 >> (uVar8 & 0x3f) |
                   (ulong)(uVar20 << ((ulong)(0x40 - iVar5) & 0x3f) != 0);
          uVar12 = uVar21 + (uVar12 >> (uVar8 & 0x3f));
        }
        else {
          uVar19 = uVar20 | uVar12 << ((ulong)(0x80 - iVar5) & 0x3f);
          if (iVar5 - 0x40U == 0) {
            uVar19 = uVar20;
          }
          uVar19 = (ulong)(uVar19 != 0) | uVar12 >> ((ulong)(iVar5 - 0x40U) & 0x3f);
          uVar12 = uVar21;
        }
      }
      else {
        uVar19 = (ulong)((uVar12 | uVar20) != 0);
        uVar12 = uVar21;
      }
      uVar18 = uVar19 + uVar18;
      if (CARRY8(uVar19,uVar18)) {
        uVar12 = uVar12 + 1;
      }
      goto LAB_00101a68;
    }
LAB_00101af4:
    if ((uVar21 | uVar18) == 0) {
      return 0;
    }
    uVar8 = uVar1 >> 0x32 ^ 1;
    uVar19 = in_register_00005008 & 0xffffffffffff;
LAB_00101b14:
    if ((uVar19 | param_1) == 0) {
      param_1 = 0;
    }
  }
  else {
    uVar6 = (int)uVar17 - (int)uVar15;
    uVar8 = (ulong)uVar6;
    if ((int)uVar6 < 1) {
      if (uVar6 != 0) {
        if (uVar17 == 0) {
          if ((uVar21 | uVar18) == 0) {
            uVar19 = uVar20;
            uVar9 = uVar12;
            if (uVar15 == 0x7fff) {
              if ((uVar12 | uVar20) != 0) {
                uVar8 = uVar2 >> 0x32 ^ 1;
                goto LAB_00101950;
              }
              goto LAB_00101c04;
            }
            goto LAB_001018ac;
          }
          uVar6 = ~uVar6;
          if (uVar6 == 0) {
            uVar19 = uVar20 + param_1 * -8;
            uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
            goto LAB_001016fc;
          }
        }
        else {
          uVar6 = -uVar6;
          uVar21 = uVar21 | 0x8000000000000;
        }
        if (uVar15 == 0x7fff) {
          if ((uVar12 | uVar20) == 0) {
            return 0;
          }
          uVar8 = uVar2 >> 0x32 ^ 1;
          uVar19 = uVar2 >> 3;
          param_1 = param_2;
          goto LAB_00101b14;
        }
        if ((int)uVar6 < 0x75) {
          if ((int)uVar6 < 0x40) {
            uVar18 = uVar21 << ((ulong)(0x40 - uVar6) & 0x3f) | uVar18 >> ((ulong)uVar6 & 0x3f) |
                     (ulong)(uVar18 << ((ulong)(0x40 - uVar6) & 0x3f) != 0);
            uVar12 = uVar12 - (uVar21 >> ((ulong)uVar6 & 0x3f));
          }
          else {
            uVar19 = uVar18 | uVar21 << ((ulong)(0x80 - uVar6) & 0x3f);
            if (uVar6 - 0x40 == 0) {
              uVar19 = uVar18;
            }
            uVar18 = (ulong)(uVar19 != 0) | uVar21 >> ((ulong)(uVar6 - 0x40) & 0x3f);
          }
        }
        else {
          uVar18 = (ulong)((uVar21 | uVar18) != 0);
        }
        uVar19 = uVar20 - uVar18;
        uVar9 = uVar12 - (uVar20 < uVar18);
        goto LAB_001016fc;
      }
      if ((uVar17 + 1 & 0x7ffe) != 0) {
        uVar19 = uVar18 + param_2 * -8;
        uVar13 = uVar21 - (uVar12 + (uVar18 < uVar20));
        if ((uVar13 >> 0x33 & 1) == 0) {
          if ((uVar19 | uVar13) == 0) {
            param_1 = 0;
            goto LAB_001017c8;
          }
        }
        else {
          uVar19 = uVar20 + param_1 * -8;
          uVar13 = uVar12 - (uVar21 + (uVar20 < uVar18));
          lVar14 = lVar7;
        }
        goto LAB_00101704;
      }
      uVar16 = uVar21 | uVar18;
      uVar11 = uVar12 | uVar20;
      if (uVar17 != 0) {
        if (uVar17 == 0x7fff) {
          if (uVar16 == 0) {
            if (uVar15 != 0x7fff) goto LAB_00101dd8;
          }
          else {
            uVar8 = uVar1 >> 0x32 ^ 1;
            if (uVar15 != 0x7fff) goto LAB_00101da8;
          }
LAB_00102020:
          if (uVar11 != 0) {
            uVar6 = (uint)uVar8;
            if ((uVar13 & 0x4000000000000) == 0) {
              uVar6 = 1;
            }
            uVar8 = (ulong)uVar6;
            if (uVar16 == 0) {
LAB_0010209c:
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
              goto LAB_00101b14;
            }
LAB_00102038:
            uVar19 = in_register_00005008 & 0xffffffffffff;
            if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
            }
            goto LAB_00101b14;
          }
          if (uVar16 != 0) goto LAB_00101da8;
        }
        else {
          if (uVar15 == 0x7fff) goto LAB_00102020;
          if (uVar16 != 0) {
LAB_00101da8:
            uVar19 = in_register_00005008 & 0xffffffffffff;
            if (uVar11 == 0) goto LAB_00101b14;
            goto LAB_00102038;
          }
LAB_00101dd8:
          if (uVar11 != 0) goto LAB_0010209c;
        }
        param_1 = 0xffffffffffffffff;
        uVar8 = 1;
        goto LAB_001017c8;
      }
      if (uVar16 != 0) {
        if (uVar11 == 0) goto LAB_00101e98;
        uVar19 = uVar18 + param_2 * -8;
        uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
        if ((uVar9 >> 0x33 & 1) == 0) {
          if ((uVar19 | uVar9) != 0) {
            uVar12 = 0;
            bVar3 = true;
            uVar11 = uVar17;
            goto LAB_0010177c;
          }
          goto LAB_00101f70;
        }
        uVar19 = uVar20 + param_1 * -8;
        uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
        uVar18 = uVar19 | uVar9;
        goto joined_r0x001018bc;
      }
      uVar19 = uVar20;
      uVar9 = uVar12;
      lVar14 = lVar7;
      if (uVar11 == 0) {
LAB_00101f70:
        param_1 = 0;
        goto LAB_001017c8;
      }
LAB_00101e98:
      uVar18 = 0;
      uVar11 = 0;
LAB_00101ea0:
      uVar8 = 0;
      if (((uint)uVar10 >> 0xb & 1) != 0) {
        uVar8 = 8;
      }
LAB_001017a8:
      uVar20 = uVar19;
      uVar12 = uVar9;
      if (uVar18 == 0) {
LAB_00101958:
        param_1 = uVar20 >> 3 | uVar12 << 0x3d;
        uVar19 = uVar12 >> 3;
        if (uVar11 == 0x7fff) goto LAB_00101b14;
      }
      else {
LAB_001017ac:
        uVar6 = (uint)uVar8;
        if (uVar11 == 0x7ffe) goto LAB_00101978;
        param_1 = uVar19 >> 3 | uVar9 << 0x3d;
      }
    }
    else {
      if (uVar15 == 0) {
        if ((uVar12 | uVar20) != 0) {
          uVar8 = (ulong)(uVar6 - 1);
          if (uVar6 - 1 == 0) {
            uVar19 = uVar18 + param_2 * -8;
            uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
            uVar15 = uVar17;
            lVar7 = lVar14;
            goto LAB_001016fc;
          }
          goto LAB_001016a8;
        }
        uVar15 = uVar17;
        lVar7 = lVar14;
        if (uVar17 == 0x7fff) {
          if ((uVar21 | uVar18) != 0) {
LAB_00101944:
            uVar8 = uVar1 >> 0x32 ^ 1;
            uVar20 = uVar18;
            uVar12 = uVar21;
            goto LAB_00101950;
          }
LAB_00101c04:
          uVar8 = 0;
          uVar19 = 0;
          param_1 = 0;
          goto LAB_00101b14;
        }
      }
      else {
        uVar12 = uVar12 | 0x8000000000000;
LAB_001016a8:
        if (uVar17 == 0x7fff) goto LAB_00101af4;
        iVar5 = (int)uVar8;
        if (iVar5 < 0x75) {
          if (iVar5 < 0x40) {
            uVar9 = uVar12 << ((ulong)(0x40 - iVar5) & 0x3f) | uVar20 >> (uVar8 & 0x3f) |
                    (ulong)(uVar20 << ((ulong)(0x40 - iVar5) & 0x3f) != 0);
            uVar21 = uVar21 - (uVar12 >> (uVar8 & 0x3f));
          }
          else {
            uVar19 = uVar20 | uVar12 << ((ulong)(0x80 - iVar5) & 0x3f);
            if (iVar5 - 0x40U == 0) {
              uVar19 = uVar20;
            }
            uVar9 = (ulong)(uVar19 != 0) | uVar12 >> ((ulong)(iVar5 - 0x40U) & 0x3f);
          }
        }
        else {
          uVar9 = (ulong)((uVar12 | uVar20) != 0);
        }
        uVar19 = uVar18 - uVar9;
        uVar9 = uVar21 - (uVar18 < uVar9);
        uVar15 = uVar17;
        lVar7 = lVar14;
LAB_001016fc:
        uVar13 = uVar9 & 0x7ffffffffffff;
        uVar17 = uVar15;
        lVar14 = lVar7;
        if ((uVar9 >> 0x33 & 1) != 0) {
LAB_00101704:
          if (uVar13 == 0) {
            uVar12 = uVar19 | uVar19 >> 1;
            uVar12 = uVar12 | uVar12 >> 2;
            uVar12 = uVar12 | uVar12 >> 4;
            uVar12 = uVar12 | uVar12 >> 8;
            uVar12 = uVar12 | uVar12 >> 0x10;
            uVar12 = uVar12 | uVar12 >> 0x20;
            uVar12 = ((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar12 & 0x5555555555555555);
            uVar12 = ((uVar12 & 0xcccccccccccccccc) >> 2) + (uVar12 & 0x3333333333333333);
            uVar12 = ((uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar12 & 0xf0f0f0f0f0f0f0f);
            uVar12 = ((uVar12 & 0xff00ff00ff00ff00) >> 8) + (uVar12 & 0xff00ff00ff00ff);
            lVar7 = ((uVar12 & 0xffff0000ffff0000) >> 0x10) + (uVar12 & 0xffff0000ffff);
            iVar5 = -((int)((ulong)lVar7 >> 0x20) + (int)lVar7);
            uVar6 = iVar5 + 0x74;
            if ((int)uVar6 < 0x40) goto LAB_00101710;
            uVar18 = uVar19 << ((ulong)(iVar5 + 0x34) & 0x3f);
            uVar12 = 0;
          }
          else {
            uVar12 = uVar13 | uVar13 >> 1;
            uVar12 = uVar12 | uVar12 >> 2;
            uVar12 = uVar12 | uVar12 >> 4;
            uVar12 = uVar12 | uVar12 >> 8;
            uVar12 = uVar12 | uVar12 >> 0x10;
            uVar12 = uVar12 | uVar12 >> 0x20;
            uVar12 = ((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar12 & 0x5555555555555555);
            uVar12 = ((uVar12 & 0xcccccccccccccccc) >> 2) + (uVar12 & 0x3333333333333333);
            uVar12 = ((uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar12 & 0xf0f0f0f0f0f0f0f);
            uVar12 = ((uVar12 & 0xff00ff00ff00ff00) >> 8) + (uVar12 & 0xff00ff00ff00ff);
            lVar7 = ((uVar12 & 0xffff0000ffff0000) >> 0x10) + (uVar12 & 0xffff0000ffff);
            uVar6 = 0x34 - ((int)((ulong)lVar7 >> 0x20) + (int)lVar7);
LAB_00101710:
            uVar12 = uVar19 << ((ulong)uVar6 & 0x3f);
            uVar18 = uVar19 >> ((ulong)-uVar6 & 0x3f) | uVar13 << ((ulong)uVar6 & 0x3f);
          }
          lVar7 = lVar14;
          if ((long)uVar17 <= (long)(int)uVar6) {
            iVar5 = uVar6 - (int)uVar17;
            uVar6 = iVar5 + 1;
            if ((int)uVar6 < 0x40) {
              uVar9 = uVar18 >> ((ulong)uVar6 & 0x3f);
              uVar19 = uVar18 << ((ulong)(0x40 - uVar6) & 0x3f) | uVar12 >> ((ulong)uVar6 & 0x3f) |
                       (ulong)(uVar12 << ((ulong)(0x40 - uVar6) & 0x3f) != 0);
              goto LAB_00101768;
            }
            uVar19 = uVar12 | uVar18 << ((ulong)(0x80 - uVar6) & 0x3f);
            if (uVar6 == 0x40) {
              uVar19 = uVar12;
            }
            uVar9 = 0;
            uVar19 = (ulong)(uVar19 != 0) | uVar18 >> ((ulong)(iVar5 - 0x3f) & 0x3f);
            uVar18 = uVar19;
            goto joined_r0x001018bc;
          }
          uVar15 = uVar17 - (long)(int)uVar6;
          uVar19 = uVar12;
          uVar9 = uVar18 & 0xfff7ffffffffffff;
        }
      }
LAB_001018ac:
      uVar12 = uVar19 & 7;
      bVar3 = false;
      uVar11 = uVar15;
      lVar14 = lVar7;
      uVar18 = uVar19 | uVar9;
      if (uVar15 != 0) {
LAB_0010177c:
        if (uVar12 == 0) {
          uVar18 = uVar9 & 0x8000000000000;
          uVar8 = 0;
          if (bVar3) goto LAB_00101ea0;
        }
        else {
          uVar12 = uVar10 & 0xc00000;
          if (uVar12 == 0x400000) {
            uVar8 = 0x10;
joined_r0x00101e54:
            if (lVar14 == 0) {
LAB_00101aa4:
              bVar4 = 0xfffffffffffffff7 < uVar19;
              uVar19 = uVar19 + 8;
              if (bVar4) {
                uVar9 = uVar9 + 1;
              }
            }
          }
          else if (uVar12 == 0x800000) {
            uVar8 = 0x10;
            if (lVar14 != 0) goto LAB_00101aa4;
          }
          else {
            if (uVar12 != 0) {
              uVar18 = uVar9 & 0x8000000000000;
              uVar8 = 0x10;
              if (bVar3) {
                uVar8 = 0x18;
              }
              goto LAB_001017a8;
            }
            uVar8 = 0x10;
            if (((uVar19 & 0xf) != 4) &&
               (bVar4 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar4)) {
              uVar9 = uVar9 + 1;
            }
          }
          uVar18 = uVar9 & 0x8000000000000;
          if (bVar3) {
            uVar8 = (ulong)((uint)uVar8 | 8);
          }
        }
        goto LAB_001017a8;
      }
joined_r0x001018bc:
      if (uVar18 != 0) {
        uVar12 = uVar19 & 7;
        bVar3 = true;
        uVar11 = 0;
        lVar14 = lVar7;
        goto LAB_0010177c;
      }
      param_1 = 0;
      uVar8 = 0;
    }
  }
LAB_001017c8:
  if ((int)uVar8 == 0) {
    return param_1;
  }
LAB_001019d0:
  __sfp_handle_exceptions(uVar8);
  return param_1;
}

// Function: __multf3 @ 0x1021d0
ulong __multf3(ulong param_1,ulong param_2)
{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong in_register_00005008;
  ulong in_register_00005028;
  uVar17 = fpcr;
  uVar19 = in_register_00005008 & 0xffffffffffff;
  uVar11 = in_register_00005008 >> 0x30 & 0x7fff;
  iVar10 = (int)uVar11;
  if (iVar10 == 0) {
    if ((param_1 | uVar19) == 0) {
      uVar19 = 0;
      uVar6 = 4;
      lVar14 = 0;
      lVar22 = 1;
      uVar5 = 0;
      uVar11 = 0;
    }
    else {
      if (uVar19 == 0) {
        uVar11 = param_1 | param_1 >> 1;
        uVar11 = uVar11 | uVar11 >> 2;
        uVar11 = uVar11 | uVar11 >> 4;
        uVar11 = uVar11 | uVar11 >> 8;
        uVar11 = uVar11 | uVar11 >> 0x10;
        uVar11 = uVar11 | uVar11 >> 0x20;
        uVar11 = ((uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar11 & 0x5555555555555555);
        uVar11 = ((uVar11 & 0xcccccccccccccccc) >> 2) + (uVar11 & 0x3333333333333333);
        uVar11 = ((uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar11 & 0xf0f0f0f0f0f0f0f);
        uVar11 = ((uVar11 & 0xff00ff00ff00ff00) >> 8) + (uVar11 & 0xff00ff00ff00ff);
        uVar11 = ((uVar11 & 0xffff0000ffff0000) >> 0x10) + (uVar11 & 0xffff0000ffff);
        lVar14 = -((uVar11 >> 0x20) + (uVar11 & 0xffffffff));
        lVar22 = lVar14 + 0x71;
        lVar14 = lVar14 + 0x80;
        if (lVar22 < 0x3d) goto LAB_00102628;
        uVar11 = 0;
        uVar19 = param_1 << ((ulong)((int)lVar22 - 0x3d) & 0x3f);
      }
      else {
        uVar11 = uVar19 | uVar19 >> 1;
        uVar11 = uVar11 | uVar11 >> 2;
        uVar11 = uVar11 | uVar11 >> 4;
        uVar11 = uVar11 | uVar11 >> 8;
        uVar11 = uVar11 | uVar11 >> 0x10 | uVar11 >> 0x20;
        uVar11 = ((uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar11 & 0x5555555555555555);
        uVar11 = ((uVar11 & 0xcccccccccccccccc) >> 2) + (uVar11 & 0x3333333333333333);
        uVar11 = ((uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar11 & 0xf0f0f0f0f0f0f0f);
        uVar11 = ((uVar11 & 0xff00ff00ff00ff00) >> 8) + (uVar11 & 0xff00ff00ff00ff);
        uVar11 = ((uVar11 & 0xffff0000ffff0000) >> 0x10) + (uVar11 & 0xffff0000ffff);
        lVar22 = -((uVar11 >> 0x20) + (uVar11 & 0xffffffff));
        lVar14 = lVar22 + 0x40;
        lVar22 = lVar22 + 0x31;
LAB_00102628:
        uVar11 = (ulong)((int)lVar22 + 3);
        uVar19 = param_1 >> ((ulong)(0x3d - (int)lVar22) & 0x3f) | uVar19 << (uVar11 & 0x3f);
        uVar11 = param_1 << (uVar11 & 0x3f);
      }
      uVar6 = 0;
      lVar14 = -0x3fef - lVar14;
      lVar22 = 0;
      uVar5 = 0;
    }
  }
  else if (iVar10 == 0x7fff) {
    if ((param_1 | uVar19) == 0) {
      uVar19 = 0;
      uVar6 = 8;
      lVar14 = 0x7fff;
      lVar22 = 2;
      uVar5 = 0;
      uVar11 = 0;
    }
    else {
      uVar5 = uVar19 >> 0x2f ^ 1;
      uVar6 = 0xc;
      lVar14 = 0x7fff;
      lVar22 = 3;
      uVar11 = param_1;
    }
  }
  else {
    uVar19 = param_1 >> 0x3d | uVar19 << 3 | 0x8000000000000;
    lVar14 = uVar11 - 0x3fff;
    lVar22 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar11 = param_1 << 3;
  }
  uVar15 = in_register_00005028 >> 0x3f;
  uVar13 = in_register_00005028 & 0xffffffffffff;
  uVar21 = in_register_00005028 >> 0x30 & 0x7fff;
  iVar10 = (int)uVar21;
  uVar4 = (uint)(in_register_00005008 >> 0x20);
  uVar2 = (uint)(in_register_00005028 >> 0x20);
  if (iVar10 == 0) {
    if ((param_2 | uVar13) == 0) {
      uVar6 = uVar6 | 1;
      lVar8 = lVar14 + 1;
      uVar21 = 0;
      param_2 = 0;
      lVar12 = 1;
      lVar20 = lVar14;
    }
    else {
      if (uVar13 == 0) {
        uVar21 = param_2 | param_2 >> 1;
        uVar21 = uVar21 | uVar21 >> 2;
        uVar21 = uVar21 | uVar21 >> 4;
        uVar21 = uVar21 | uVar21 >> 8;
        uVar21 = uVar21 | uVar21 >> 0x10;
        uVar21 = uVar21 | uVar21 >> 0x20;
        uVar21 = ((uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar21 & 0x5555555555555555);
        uVar21 = ((uVar21 & 0xcccccccccccccccc) >> 2) + (uVar21 & 0x3333333333333333);
        uVar21 = ((uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar21 & 0xf0f0f0f0f0f0f0f);
        uVar21 = ((uVar21 & 0xff00ff00ff00ff00) >> 8) + (uVar21 & 0xff00ff00ff00ff);
        uVar21 = ((uVar21 & 0xffff0000ffff0000) >> 0x10) + (uVar21 & 0xffff0000ffff);
        lVar12 = -((uVar21 >> 0x20) + (uVar21 & 0xffffffff));
        lVar8 = lVar12 + 0x71;
        lVar12 = lVar12 + 0x80;
        if (lVar8 < 0x3d) goto LAB_001025cc;
        uVar21 = param_2 << ((ulong)((int)lVar8 - 0x3d) & 0x3f);
        param_2 = 0;
      }
      else {
        uVar21 = uVar13 | uVar13 >> 1;
        uVar21 = uVar21 | uVar21 >> 2;
        uVar21 = uVar21 | uVar21 >> 4;
        uVar21 = uVar21 | uVar21 >> 8;
        uVar21 = uVar21 | uVar21 >> 0x10 | uVar21 >> 0x20;
        uVar21 = ((uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar21 & 0x5555555555555555);
        uVar21 = ((uVar21 & 0xcccccccccccccccc) >> 2) + (uVar21 & 0x3333333333333333);
        uVar21 = ((uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar21 & 0xf0f0f0f0f0f0f0f);
        uVar21 = ((uVar21 & 0xff00ff00ff00ff00) >> 8) + (uVar21 & 0xff00ff00ff00ff);
        uVar21 = ((uVar21 & 0xffff0000ffff0000) >> 0x10) + (uVar21 & 0xffff0000ffff);
        lVar8 = -((uVar21 >> 0x20) + (uVar21 & 0xffffffff));
        lVar12 = lVar8 + 0x40;
        lVar8 = lVar8 + 0x31;
LAB_001025cc:
        uVar7 = (ulong)((int)lVar8 + 3);
        uVar21 = param_2 >> ((ulong)(0x3d - (int)lVar8) & 0x3f) | uVar13 << (uVar7 & 0x3f);
        param_2 = param_2 << (uVar7 & 0x3f);
      }
      lVar20 = (lVar14 - lVar12) + -0x3fef;
      lVar8 = (lVar14 - lVar12) + -0x3fee;
      lVar12 = 0;
    }
    uVar7 = (ulong)((uVar4 ^ uVar2) >> 0x1f);
    if (uVar6 < 0xb) goto LAB_001022dc;
LAB_00102290:
    if (uVar6 != 0xb) {
LAB_00102298:
      uVar18 = uVar11;
      uVar21 = uVar19;
      uVar23 = in_register_00005008 >> 0x3f;
      lVar9 = lVar22;
      goto LAB_0010239c;
    }
LAB_001023b8:
    uVar11 = param_2;
    uVar7 = uVar15;
    if (lVar12 != 3) {
LAB_001022f8:
      lVar20 = lVar8;
      if (lVar12 == 1) {
        uVar11 = 0;
      }
      else {
LAB_0010255c:
        lVar14 = lVar20 + 0x3fff;
        uVar4 = (uint)uVar5;
        if (lVar14 < 1) {
          uVar19 = 1 - lVar14;
          if (0x74 < (long)uVar19) {
            uVar11 = param_2 | uVar21;
            if ((param_2 | uVar21) != 0) {
              uVar4 = uVar4 | 0x10;
              uVar11 = 1 - uVar7;
              if (((uVar17 & 0xc00000) != 0x400000) &&
                 (uVar11 = uVar7, (uVar17 & 0xc00000) != 0x800000)) {
                uVar11 = 0;
              }
            }
            uVar5 = (ulong)(uVar4 | 8);
            goto LAB_001027c4;
          }
          iVar10 = (int)uVar19;
          if ((long)uVar19 < 0x40) {
            uVar11 = (ulong)(param_2 << ((ulong)(0x40 - iVar10) & 0x3f) != 0);
            uVar6 = uVar21 << ((ulong)(0x40 - iVar10) & 0x3f) | param_2 >> (uVar19 & 0x3f);
            uVar21 = uVar21 >> (uVar19 & 0x3f);
            uVar19 = uVar6 | uVar11;
            if ((uVar6 & 7 | uVar11) != 0) goto LAB_00102744;
            if ((uVar21 >> 0x33 & 1) == 0) goto LAB_0010288c;
          }
          else {
            uVar11 = param_2 | uVar21 << ((ulong)(0x80 - iVar10) & 0x3f);
            if (uVar19 == 0x40) {
              uVar11 = param_2;
            }
            uVar21 = uVar21 >> ((ulong)(iVar10 - 0x40) & 0x3f);
            uVar19 = uVar11 != 0 | uVar21;
            uVar21 = (ulong)(uVar11 != 0) | uVar21 & 7;
            if (uVar21 == 0) {
LAB_0010288c:
              uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
              if (((uint)uVar17 >> 0xb & 1) != 0) {
                uVar5 = (ulong)(uVar4 | 8);
                goto LAB_001027c4;
              }
              goto LAB_0010230c;
            }
            uVar21 = 0;
LAB_00102744:
            uVar17 = uVar17 & 0xc00000;
            if (uVar17 == 0x400000) {
              if (uVar7 == 0) {
LAB_001028ec:
                bVar3 = 0xfffffffffffffff7 < uVar19;
                uVar19 = uVar19 + 8;
                if (bVar3) {
                  uVar21 = uVar21 + 1;
                }
              }
            }
            else if (uVar17 == 0x800000) {
              if (uVar7 != 0) goto LAB_001028ec;
            }
            else if (((uVar17 == 0) && ((uVar19 & 0xf) != 4)) &&
                    (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
              uVar21 = uVar21 + 1;
            }
            if ((uVar21 >> 0x33 & 1) == 0) {
              uVar5 = (ulong)(uVar4 | 0x18);
              uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
              goto LAB_001027c4;
            }
          }
          uVar5 = (ulong)(uVar4 | 0x18);
          uVar11 = 0;
          goto LAB_001027c4;
        }
        if ((param_2 & 7) != 0) {
          uVar19 = uVar17 & 0xc00000;
          uVar5 = (ulong)(uVar4 | 0x10);
          if (uVar19 == 0x400000) {
            if (uVar7 == 0) {
LAB_001028dc:
              bVar3 = 0xfffffffffffffff7 < param_2;
              param_2 = param_2 + 8;
              if (bVar3) {
                uVar21 = uVar21 + 1;
              }
            }
          }
          else if (uVar19 == 0x800000) {
            if (uVar7 != 0) goto LAB_001028dc;
          }
          else if (((uVar19 == 0) && ((param_2 & 0xf) != 4)) &&
                  (bVar3 = 0xfffffffffffffffb < param_2, param_2 = param_2 + 4, bVar3)) {
            uVar21 = uVar21 + 1;
          }
        }
        if ((uVar21 >> 0x34 & 1) != 0) {
          uVar21 = uVar21 & 0xffefffffffffffff;
          lVar14 = lVar20 + 0x4000;
        }
        if (0x7ffe < lVar14) {
          uVar11 = uVar17 & 0xc00000;
          if (uVar11 == 0x400000) {
            uVar11 = -(ulong)(uVar7 != 0);
          }
          else if (uVar11 == 0x800000) {
            uVar11 = -(ulong)(uVar7 == 0);
          }
          else if (uVar11 != 0) {
            uVar11 = 0xffffffffffffffff;
          }
          uVar5 = (ulong)((uint)uVar5 | 0x14);
          goto LAB_001027c4;
        }
        uVar11 = param_2 >> 3 | uVar21 << 0x3d;
      }
    }
  }
  else if (iVar10 == 0x7fff) {
    lVar20 = lVar14 + 0x7fff;
    if ((param_2 | uVar13) == 0) {
      uVar7 = (ulong)((uVar4 ^ uVar2) >> 0x1f);
      uVar6 = uVar6 | 2;
      lVar8 = lVar14 + 0x8000;
      param_2 = 0;
      if (uVar6 < 0xb) {
        uVar21 = 0;
        lVar12 = 2;
        goto LAB_001022dc;
      }
      lVar9 = 2;
      uVar13 = 0;
    }
    else {
      uVar7 = (ulong)((uVar4 ^ uVar2) >> 0x1f);
      uVar6 = uVar6 | 3;
      lVar8 = lVar14 + 0x8000;
      uVar4 = (uint)uVar5;
      if ((in_register_00005028 & 0x800000000000) == 0) {
        uVar4 = 1;
      }
      uVar5 = (ulong)uVar4;
      lVar12 = 3;
      if (uVar6 < 0xb) goto LAB_00102358;
      lVar9 = 3;
    }
    lVar8 = lVar14 + 0x8000;
    if (uVar6 != 0xf) {
      uVar18 = param_2;
      uVar21 = uVar13;
      uVar23 = uVar15;
      if (uVar6 != 0xb) goto LAB_00102298;
      goto LAB_0010239c;
    }
    if (((uVar19 >> 0x2f & 1) != 0) && (uVar13 >> 0x2f == 0)) {
      uVar11 = param_2;
    }
  }
  else {
    lVar20 = (uVar21 - 0x3fff) + lVar14;
    uVar7 = (ulong)((uVar4 ^ uVar2) >> 0x1f);
    uVar21 = param_2 >> 0x3d | uVar13 << 3 | 0x8000000000000;
    param_2 = param_2 << 3;
    lVar8 = lVar20 + 1;
    lVar12 = 0;
    if (10 < uVar6) goto LAB_00102290;
LAB_001022dc:
    uVar13 = uVar21;
    if (uVar6 < 3) {
      if (uVar6 - 1 < 2) {
        if (lVar12 == 2) goto LAB_001023ec;
        goto LAB_001022f8;
      }
LAB_001023fc:
      uVar27 = param_2 & 0xffffffff;
      uVar23 = uVar11 >> 0x20;
      uVar21 = uVar13 & 0xffffffff;
      uVar11 = uVar11 & 0xffffffff;
      param_2 = param_2 >> 0x20;
      uVar13 = uVar13 >> 0x20;
      uVar24 = uVar23 * uVar27;
      uVar26 = uVar19 >> 0x20;
      uVar18 = uVar23 * uVar21;
      uVar19 = uVar19 & 0xffffffff;
      uVar6 = uVar24 + param_2 * uVar11 + (uVar27 * uVar11 >> 0x20);
      uVar15 = uVar18 + uVar13 * uVar11 + (uVar11 * uVar21 >> 0x20);
      uVar25 = uVar26 * uVar27;
      uVar28 = uVar26 * uVar21;
      lVar14 = uVar23 * param_2 + 0x100000000;
      if (uVar24 < uVar6 || uVar24 - uVar6 == 0) {
        lVar14 = uVar23 * param_2;
      }
      uVar24 = (uVar11 * uVar21 & 0xffffffff) + (uVar15 << 0x20);
      uVar1 = uVar25 + param_2 * uVar19 + (uVar27 * uVar19 >> 0x20);
      uVar16 = uVar28 + uVar13 * uVar19 + (uVar19 * uVar21 >> 0x20);
      lVar22 = uVar23 * uVar13 + 0x100000000;
      if (uVar18 < uVar15 || uVar18 - uVar15 == 0) {
        lVar22 = uVar23 * uVar13;
      }
      uVar18 = uVar24 + (uVar6 >> 0x20) + lVar14;
      lVar14 = param_2 * uVar26 + 0x100000000;
      if (uVar25 < uVar1 || uVar25 - uVar1 == 0) {
        lVar14 = param_2 * uVar26;
      }
      uVar15 = lVar22 + (uVar15 >> 0x20);
      uVar21 = (uVar19 * uVar21 & 0xffffffff) + (uVar16 << 0x20);
      lVar22 = uVar13 * uVar26 + 0x100000000;
      if (uVar28 < uVar16 || uVar28 - uVar16 == 0) {
        lVar22 = uVar13 * uVar26;
      }
      uVar13 = uVar21 + uVar15;
      uVar25 = (ulong)(uVar18 < uVar24);
      uVar19 = (uVar27 * uVar19 & 0xffffffff) + (uVar1 << 0x20);
      uVar23 = uVar13 + uVar25;
      uVar16 = uVar16 >> 0x20;
      uVar24 = lVar14 + (uVar1 >> 0x20);
      if (CARRY8(uVar21,uVar15) != false || CARRY8(uVar13,uVar25) != false) {
        uVar16 = uVar16 + 1;
      }
      uVar13 = uVar18 + uVar19;
      uVar21 = (ulong)CARRY8(uVar18,uVar19);
      uVar19 = uVar23 + uVar24;
      uVar15 = uVar19 + uVar21;
      if (CARRY8(uVar23,uVar24) != false || CARRY8(uVar19,uVar21) != false) {
        lVar22 = lVar22 + 1;
      }
      uVar19 = (ulong)(((uVar27 * uVar11 & 0xffffffff) + (uVar6 << 0x20) | uVar13 * 0x2000) != 0);
      uVar13 = uVar13 >> 0x33;
      param_2 = uVar19 | uVar13 | uVar15 * 0x2000;
      uVar15 = uVar15 >> 0x33;
      uVar21 = uVar15 | (lVar22 + uVar16) * 0x2000;
      if ((lVar22 + uVar16 >> 0x27 & 1) != 0) {
        param_2 = uVar19 | uVar13 & 1 | param_2 >> 1 | uVar15 << 0x3f;
        uVar21 = uVar21 >> 1;
        lVar20 = lVar8;
      }
      goto LAB_0010255c;
    }
LAB_00102358:
    uVar6 = 1L << uVar6;
    uVar18 = uVar11;
    uVar21 = uVar19;
    uVar23 = uVar7;
    lVar9 = lVar22;
    if ((uVar6 & 0x530) == 0) {
      if ((uVar6 & 0x240) != 0) {
        uVar5 = 1;
        uVar11 = 0xffffffffffffffff;
        goto LAB_0010230c;
      }
      uVar18 = param_2;
      uVar21 = uVar13;
      uVar23 = uVar15;
      lVar9 = lVar12;
      if ((uVar6 & 0x88) == 0) goto LAB_001023fc;
    }
LAB_0010239c:
    lVar12 = lVar9;
    uVar15 = uVar23;
    param_2 = uVar18;
    if (lVar12 != 2) goto LAB_001023b8;
LAB_001023ec:
    uVar11 = 0;
  }
LAB_0010230c:
  if ((int)uVar5 == 0) {
    return uVar11;
  }
LAB_001027c4:
  __sfp_handle_exceptions(uVar5);
  return uVar11;
}

// Function: __sfp_handle_exceptions @ 0x1029d0
undefined  [16] __sfp_handle_exceptions(ulong param_1,undefined8 param_2)
{
  uint uVar1;
  undefined auVar2 [16];
  uVar1 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_1 = fpsr;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}

// Function: _fini @ 0x102a40
void _fini(void)
{
  return;
}

