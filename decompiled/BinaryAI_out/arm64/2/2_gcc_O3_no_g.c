// Decompiled by BinaryAI
// SHA256: 5274d9a69a8a15c93f6d95226182c1d309ae0d16acb5de0c7a4a534bb5adec27

// Function: _init @ 0x1006b8
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_001006d0 @ 0x1006d0
void FUN_001006d0(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1006f0
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100700
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x100710
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100720
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100730
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x100740
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x100750
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: main @ 0x100780
undefined8 main(void)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}

// Function: _start @ 0x1007c0
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x1007f4
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x100810
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x100840
void register_tm_clones(void)
{
  return;
}

// Function: FUN_0010087c @ 0x10087c
void FUN_0010087c(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x100880
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: process_char @ 0x1008e0
char process_char(char param_1)
{
  if ((byte)(param_1 + 0xbfU) < 0x1a) {
    param_1 = param_1 + ' ';
  }
  return param_1;
}

// Function: process_short @ 0x100900
int process_short(short param_1,short param_2)
{
  return (int)param_2 + (int)param_1;
}

// Function: process_int @ 0x100910
int process_int(int param_1)
{
  return param_1 * 2 + 1;
}

// Function: process_long @ 0x100920
long process_long(long param_1)
{
  return param_1 << 1;
}

// Function: process_ll @ 0x100930
long process_ll(long param_1)
{
  return param_1 * param_1;
}

// Function: process_float @ 0x100940
undefined4 process_float(undefined4 param_1)
{
  undefined4 uVar1;
  uVar1 = NEON_fmadd(param_1,0x3fc00000,0x3f000000);
  return uVar1;
}

// Function: process_double @ 0x100950
undefined8 process_double(undefined8 param_1)
{
  undefined8 uVar1;
  uVar1 = NEON_fmadd(param_1,0x3fe0000000000000,0x3fb999999999999a);
  return uVar1;
}

// Function: process_ld @ 0x100964
void process_ld(undefined8 param_1)
{
  undefined8 uVar1;
  uVar1 = __multf3(param_1,param_1);
  __addtf3(uVar1,0);
  return;
}

// Function: process_bool @ 0x100990
uint process_bool(uint param_1)
{
  uint uVar1;
  uVar1 = ~param_1 & 1;
  if ((int)param_1 < 1) {
    uVar1 = 0;
  }
  return uVar1;
}

// Function: const_param @ 0x1009a4
int const_param(int *param_1)
{
  return *param_1 + 10;
}

// Function: volatile_access @ 0x1009b0
int volatile_access(int *param_1)
{
  return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x1009c0
void test_data_types_l1(void)
{
  puts(&DAT_00103078);
  __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
  __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
  __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
  __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
  __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
  __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000);
  __printf_chk(0x400c000000000000,1,"DT-L1-06 (process_float): %.2f\n");
  __printf_chk(0x4000cccccccccccd,1,"DT-L1-07 (process_double): %.2f\n");
  __printf_chk(0,1,"DT-L1-08 (process_ld): %.2Lf\n");
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n");
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
  __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
  __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
  return;
}

// Function: array_1d_stack @ 0x100b10
int array_1d_stack(undefined8 *param_1,uint param_2)
{
  undefined8 *puVar1;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar2;
  if ((int)param_2 < 1) {
    return 0;
  }
  if (param_2 - 1 < 3) {
    uVar3 = 0;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    puVar1 = param_1;
    do {
      puVar2 = puVar1 + 2;
      iVar4 = iVar4 + (int)*puVar1;
      iVar5 = iVar5 + (int)((ulong)*puVar1 >> 0x20);
      iVar6 = iVar6 + (int)puVar1[1];
      iVar7 = iVar7 + (int)((ulong)puVar1[1] >> 0x20);
      puVar1 = puVar2;
    } while (puVar2 != param_1 + (ulong)((param_2 >> 2) - 1) * 2 + 2);
    iVar4 = iVar4 + iVar5 + iVar6 + iVar7;
    uVar3 = (ulong)(param_2 & 0xfffffffc);
    if ((param_2 & 3) == 0) {
      return iVar4;
    }
  }
  iVar5 = (int)uVar3;
  uVar3 = -(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
  iVar4 = iVar4 + *(int *)((long)param_1 + (long)iVar5 * 4);
  if (iVar5 + 1 < (int)param_2) {
    iVar4 = iVar4 + *(int *)((long)param_1 + uVar3 + 4);
    if (iVar5 + 2 < (int)param_2) {
      iVar4 = iVar4 + *(int *)((long)param_1 + uVar3 + 8);
    }
  }
  return iVar4;
}

// Function: array_string @ 0x100bb4
ulong array_string(char *param_1)
{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  if (*param_1 != '\0') {
    uVar3 = 1;
    do {
      uVar2 = uVar3 & 0xffffffff;
      pcVar1 = param_1 + uVar3;
      uVar3 = uVar3 + 1;
    } while (*pcVar1 != '\0');
    return uVar2;
  }
  return 0;
}

// Function: array_2d_stack @ 0x100be4
int array_2d_stack(int *param_1)
{
  return *param_1 + param_1[0xb] + param_1[0x16] + param_1[0x21] + param_1[0x2c] + param_1[0x37] +
         param_1[0x42] + param_1[0x4d] + param_1[0x58] + param_1[99];
}

// Function: array_3d @ 0x100c40
int array_3d(undefined8 *param_1)
{
  return (int)param_1[2] + (int)*param_1 + (int)param_1[4] + (int)param_1[6] + (int)param_1[8] +
         (int)param_1[10] + (int)param_1[0xc] + (int)param_1[0xe] + (int)param_1[0x10] +
         (int)param_1[0x12] + (int)param_1[0x14] + (int)param_1[0x16] + (int)param_1[0x18] +
         (int)param_1[0x1a] + (int)param_1[0x1c] + (int)param_1[0x1e] + (int)param_1[0x20] +
         (int)param_1[0x22] + (int)param_1[0x24] + (int)param_1[0x26] + (int)param_1[0x28] +
         (int)param_1[0x2a] + (int)param_1[0x2c] + (int)param_1[0x2e] + (int)param_1[0x30] +
         (int)((ulong)param_1[2] >> 0x20) + (int)((ulong)*param_1 >> 0x20) +
         (int)((ulong)param_1[4] >> 0x20) + (int)((ulong)param_1[6] >> 0x20) +
         (int)((ulong)param_1[8] >> 0x20) + (int)((ulong)param_1[10] >> 0x20) +
         (int)((ulong)param_1[0xc] >> 0x20) + (int)((ulong)param_1[0xe] >> 0x20) +
         (int)((ulong)param_1[0x10] >> 0x20) + (int)((ulong)param_1[0x12] >> 0x20) +
         (int)((ulong)param_1[0x14] >> 0x20) + (int)((ulong)param_1[0x16] >> 0x20) +
         (int)((ulong)param_1[0x18] >> 0x20) + (int)((ulong)param_1[0x1a] >> 0x20) +
         (int)((ulong)param_1[0x1c] >> 0x20) + (int)((ulong)param_1[0x1e] >> 0x20) +
         (int)((ulong)param_1[0x20] >> 0x20) + (int)((ulong)param_1[0x22] >> 0x20) +
         (int)((ulong)param_1[0x24] >> 0x20) + (int)((ulong)param_1[0x26] >> 0x20) +
         (int)((ulong)param_1[0x28] >> 0x20) + (int)((ulong)param_1[0x2a] >> 0x20) +
         (int)((ulong)param_1[0x2c] >> 0x20) + (int)((ulong)param_1[0x2e] >> 0x20) +
         (int)((ulong)param_1[0x30] >> 0x20) +
         (int)param_1[3] + (int)param_1[1] + (int)param_1[5] + (int)param_1[7] + (int)param_1[9] +
         (int)param_1[0xb] + (int)param_1[0xd] + (int)param_1[0xf] + (int)param_1[0x11] +
         (int)param_1[0x13] + (int)param_1[0x15] + (int)param_1[0x17] + (int)param_1[0x19] +
         (int)param_1[0x1b] + (int)param_1[0x1d] + (int)param_1[0x1f] + (int)param_1[0x21] +
         (int)param_1[0x23] + (int)param_1[0x25] + (int)param_1[0x27] + (int)param_1[0x29] +
         (int)param_1[0x2b] + (int)param_1[0x2d] + (int)param_1[0x2f] + (int)param_1[0x31] +
         (int)((ulong)param_1[3] >> 0x20) + (int)((ulong)param_1[1] >> 0x20) +
         (int)((ulong)param_1[5] >> 0x20) + (int)((ulong)param_1[7] >> 0x20) +
         (int)((ulong)param_1[9] >> 0x20) + (int)((ulong)param_1[0xb] >> 0x20) +
         (int)((ulong)param_1[0xd] >> 0x20) + (int)((ulong)param_1[0xf] >> 0x20) +
         (int)((ulong)param_1[0x11] >> 0x20) + (int)((ulong)param_1[0x13] >> 0x20) +
         (int)((ulong)param_1[0x15] >> 0x20) + (int)((ulong)param_1[0x17] >> 0x20) +
         (int)((ulong)param_1[0x19] >> 0x20) + (int)((ulong)param_1[0x1b] >> 0x20) +
         (int)((ulong)param_1[0x1d] >> 0x20) + (int)((ulong)param_1[0x1f] >> 0x20) +
         (int)((ulong)param_1[0x21] >> 0x20) + (int)((ulong)param_1[0x23] >> 0x20) +
         (int)((ulong)param_1[0x25] >> 0x20) + (int)((ulong)param_1[0x27] >> 0x20) +
         (int)((ulong)param_1[0x29] >> 0x20) + (int)((ulong)param_1[0x2b] >> 0x20) +
         (int)((ulong)param_1[0x2d] >> 0x20) + (int)((ulong)param_1[0x2f] >> 0x20) +
         (int)((ulong)param_1[0x31] >> 0x20) + *(int *)(param_1 + 0x32) +
         *(int *)((long)param_1 + 0x194) + *(int *)(param_1 + 0x33) +
         *(int *)((long)param_1 + 0x19c) + *(int *)(param_1 + 0x34) +
         *(int *)((long)param_1 + 0x1a4) + *(int *)(param_1 + 0x35) +
         *(int *)((long)param_1 + 0x1ac) + *(int *)(param_1 + 0x36) +
         *(int *)((long)param_1 + 0x1b4) + *(int *)(param_1 + 0x37) +
         *(int *)((long)param_1 + 0x1bc) + *(int *)(param_1 + 0x38) +
         *(int *)((long)param_1 + 0x1c4) + *(int *)(param_1 + 0x39) +
         *(int *)((long)param_1 + 0x1cc) + *(int *)(param_1 + 0x3a) +
         *(int *)((long)param_1 + 0x1d4) + *(int *)(param_1 + 0x3b) +
         *(int *)((long)param_1 + 0x1dc) + *(int *)(param_1 + 0x3c) +
         *(int *)((long)param_1 + 0x1e4) + *(int *)(param_1 + 0x3d) +
         *(int *)((long)param_1 + 0x1ec) + *(int *)(param_1 + 0x3e);
}

// Function: array_vla @ 0x100da0
int array_vla(uint param_1,undefined8 *param_2)
{
  undefined8 *puVar1;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar2;
  if ((int)param_1 < 1) {
    return 0;
  }
  if (param_1 - 1 < 3) {
    uVar3 = 0;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    puVar1 = param_2;
    do {
      puVar2 = puVar1 + 2;
      iVar4 = iVar4 + (int)*puVar1;
      iVar5 = iVar5 + (int)((ulong)*puVar1 >> 0x20);
      iVar6 = iVar6 + (int)puVar1[1];
      iVar7 = iVar7 + (int)((ulong)puVar1[1] >> 0x20);
      puVar1 = puVar2;
    } while (puVar2 != param_2 + (ulong)((param_1 >> 2) - 1) * 2 + 2);
    iVar4 = iVar4 + iVar5 + iVar6 + iVar7;
    uVar3 = (ulong)(param_1 & 0xfffffffc);
    if ((param_1 & 3) == 0) {
      return iVar4;
    }
  }
  iVar5 = (int)uVar3;
  uVar3 = -(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
  iVar4 = iVar4 + *(int *)((long)param_2 + (long)iVar5 * 4);
  if (iVar5 + 1 < (int)param_1) {
    iVar4 = iVar4 + *(int *)((long)param_2 + uVar3 + 4);
    if (iVar5 + 2 < (int)param_1) {
      iVar4 = iVar4 + *(int *)((long)param_2 + uVar3 + 8);
    }
  }
  return iVar4;
}

// Function: array_pointer @ 0x100e44
int array_pointer(int *param_1,int param_2)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  if (0 < param_2) {
    iVar1 = 0;
    piVar2 = param_1;
    do {
      piVar3 = piVar2 + 10;
      iVar1 = iVar1 + *piVar2;
      piVar2 = piVar3;
    } while (piVar3 != param_1 + (ulong)(param_2 - 1) * 10 + 10);
    return iVar1;
  }
  return 0;
}

// Function: pointer_array @ 0x100e84
int pointer_array(int **param_1,int param_2)
{
  int iVar1;
  if (0 < param_2) {
    iVar1 = 0;
    if (*param_1 != (int *)0x0) {
      iVar1 = **param_1;
    }
    if (1 < param_2) {
      if (param_1[1] != (int *)0x0) {
        iVar1 = iVar1 + *param_1[1];
      }
      if (param_2 != 2) {
        if (param_1[2] != (int *)0x0) {
          iVar1 = iVar1 + *param_1[2];
        }
        if (param_2 != 3) {
          if (param_1[3] != (int *)0x0) {
            iVar1 = iVar1 + *param_1[3];
          }
          if (param_2 != 4) {
            if (param_1[4] != (int *)0x0) {
              iVar1 = iVar1 + *param_1[4];
            }
            if (param_2 != 5) {
              if (param_1[5] != (int *)0x0) {
                iVar1 = iVar1 + *param_1[5];
              }
              if (param_2 != 6) {
                if (param_1[6] != (int *)0x0) {
                  iVar1 = iVar1 + *param_1[6];
                }
                if (param_2 != 7) {
                  if (param_1[7] != (int *)0x0) {
                    iVar1 = iVar1 + *param_1[7];
                  }
                  if (param_2 != 8) {
                    if (param_1[8] != (int *)0x0) {
                      iVar1 = iVar1 + *param_1[8];
                    }
                    if ((9 < param_2) && (param_1[9] != (int *)0x0)) {
                      iVar1 = iVar1 + *param_1[9];
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return iVar1;
  }
  return 0;
}

// Function: array_complex_index @ 0x100f84
undefined4 array_complex_index(long param_1,int param_2,int param_3,uint param_4,uint param_5)
{
  bool bVar1;
  bool bVar2;
  bVar2 = -1 < (int)(param_4 | param_5);
  bVar1 = false;
  if (bVar2) {
    bVar1 = (int)(param_4 - param_2) < 0;
  }
  if ((bVar1 != (bVar2 && SBORROW4(param_4,param_2))) && ((int)param_5 < param_3)) {
    return *(undefined4 *)(param_1 + (long)(int)(param_4 + param_2 * param_5) * 4);
  }
  return 0xffffffff;
}

// Function: array_oob @ 0x100fb0
int array_oob(undefined8 *param_1,int param_2)
{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar3;
  if (param_2 < 0) {
    return 0;
  }
  uVar1 = param_2 + 1;
  if (param_2 < 3) {
    uVar4 = 0;
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 2;
      iVar5 = iVar5 + (int)*puVar2;
      iVar6 = iVar6 + (int)((ulong)*puVar2 >> 0x20);
      iVar7 = iVar7 + (int)puVar2[1];
      iVar8 = iVar8 + (int)((ulong)puVar2[1] >> 0x20);
      puVar2 = puVar3;
    } while (puVar3 != param_1 + (ulong)((uVar1 >> 2) - 1) * 2 + 2);
    iVar5 = iVar5 + iVar6 + iVar7 + iVar8;
    uVar4 = (ulong)(uVar1 & 0xfffffffc);
    if ((uVar1 & 3) == 0) {
      return iVar5;
    }
  }
  iVar6 = (int)uVar4;
  uVar4 = -(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2;
  iVar5 = iVar5 + *(int *)((long)param_1 + (long)iVar6 * 4);
  if (iVar6 + 1 <= param_2) {
    iVar5 = iVar5 + *(int *)((long)param_1 + uVar4 + 4);
    if (iVar6 + 2 <= param_2) {
      iVar5 = iVar5 + *(int *)((long)param_1 + uVar4 + 8);
    }
  }
  return iVar5;
}

// Function: test_array_types @ 0x101054
void test_array_types(void)
{
  char *pcVar1;
  int iVar2;
  undefined4 local_10;
  undefined2 local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00103208);
  __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
  pcVar1 = (char *)&local_10;
  iVar2 = 0;
  local_10._0_1_ = 'h';
  local_10._1_1_ = 'e';
  local_10._2_1_ = 'l';
  local_10._3_1_ = 'l';
  local_c._0_1_ = 'o';
  local_c._1_1_ = '\0';
  do {
    pcVar1 = pcVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  __printf_chk(1,"ARR-L1-02 (array_string): %d\n",iVar2);
  __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",0x2d);
  __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",0x7d);
  __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
  __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",100);
  __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
  if (local_8 - ___stack_chk_guard == 0) {
    __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",0x11);
    return;
  }
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: ptr_single @ 0x101170
int ptr_single(int *param_1)
{
  return *param_1 + 10;
}

// Function: ptr_double @ 0x101180
int ptr_double(int **param_1)
{
  return **param_1 + 5;
}

// Function: ptr_triple @ 0x101190
int ptr_triple(undefined8 *param_1)
{
  return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x1011a4
int ptr_increment(undefined8 *param_1,ulong param_2)
{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar4;
  uVar1 = (uint)param_2;
  if ((int)uVar1 < 1) {
    return 0;
  }
  if (uVar1 - 1 < 3) {
    uVar2 = 0;
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    puVar3 = param_1;
    do {
      puVar4 = puVar3 + 2;
      iVar5 = iVar5 + (int)*puVar3;
      iVar6 = iVar6 + (int)((ulong)*puVar3 >> 0x20);
      iVar7 = iVar7 + (int)puVar3[1];
      iVar8 = iVar8 + (int)((ulong)puVar3[1] >> 0x20);
      puVar3 = puVar4;
    } while (param_1 + (ulong)((uVar1 >> 2) - 1) * 2 + 2 != puVar4);
    iVar5 = iVar5 + iVar6 + iVar7 + iVar8;
    uVar2 = uVar1 & 0xfffffffc;
    param_1 = (undefined8 *)((long)param_1 + (param_2 & 0xfffffffc) * 4);
    if ((param_2 & 3) == 0) {
      return iVar5;
    }
  }
  iVar5 = iVar5 + *(int *)param_1;
  if (((int)(uVar2 + 1) < (int)uVar1) &&
     (iVar5 = iVar5 + *(int *)((long)param_1 + 4), (int)(uVar2 + 2) < (int)uVar1)) {
    iVar5 = iVar5 + *(int *)(param_1 + 1);
  }
  return iVar5;
}

// Function: ptr_offset @ 0x101250
undefined4 ptr_offset(long param_1,int param_2)
{
  return *(undefined4 *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x101260
ulong ptr_diff(long param_1,long param_2)
{
  return (ulong)(param_1 - param_2) >> 2 & 0xffffffff;
}

// Function: ptr_void @ 0x101270
uint ptr_void(uint *param_1,int param_2)
{
  if (param_2 == 0) {
    return *param_1;
  }
  if (param_2 == 1) {
    return (uint)*(byte *)param_1;
  }
  return 0xffffffff;
}

// Function: ptr_const @ 0x101294
int ptr_const(int *param_1)
{
  return *param_1 << 1;
}

// Function: ptr_const_ptr @ 0x1012a0
void ptr_const_ptr(int *param_1)
{
  *param_1 = *param_1 + 5;
  return;
}

// Function: ptr_func_simple @ 0x1012b4
void ptr_func_simple(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)
{
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}

// Function: ptr_func_complex @ 0x1012c0
void ptr_func_complex(code *param_1,undefined8 param_2)
{
  undefined8 uVar1;
  undefined *local_18;
  undefined8 uStack_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_18 = &DAT_00103338;
  uStack_10 = 0;
  uVar1 = (*param_1)(param_2,&local_18);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: ptr_cast @ 0x101320
undefined4 ptr_cast(undefined4 *param_1)
{
  return *param_1;
}

// Function: opaque_handle_create @ 0x101330
long opaque_handle_create(int param_1)
{
  return (long)param_1;
}

// Function: opaque_handle_op @ 0x101340
int opaque_handle_op(int param_1)
{
  return param_1 << 1;
}

// Function: test_pointer_types @ 0x101350
void test_pointer_types(void)
{
  puts(&DAT_00103340);
  __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
  __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
  __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",6);
  __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",0xf);
  __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
  __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
  __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
  __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
  __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
  __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
  __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",10);
  __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n");
  __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
  __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
  return;
}

// Function: struct_simple @ 0x101490
int struct_simple(int *param_1)
{
  return *param_1 + param_1[1] + param_1[2];
}

// Function: struct_array @ 0x1014a4
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
  int *piVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  if ((int)param_2 < 1) {
    return 0;
  }
  if (param_2 - 1 < 3) {
    uVar15 = 0;
    iVar16 = 0;
  }
  else {
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    lVar14 = param_1;
    do {
      tmp_ldXn = lVar14;
      piVar2 = (int *)tmp_ldXn;
      lVar14 = tmp_ldXn;
      tmp_ldXn = lVar14 + 4;
      piVar3 = (int *)tmp_ldXn;
      lVar14 = tmp_ldXn;
      tmp_ldXn = lVar14 + 4;
      piVar4 = (int *)tmp_ldXn;
      lVar14 = tmp_ldXn;
      tmp_ldXn = lVar14 + 4;
      piVar5 = (int *)tmp_ldXn;
      lVar14 = tmp_ldXn;
      tmp_ldXn = lVar14 + 4;
      piVar6 = (int *)tmp_ldXn;
      lVar14 = tmp_ldXn;
      tmp_ldXn = lVar14 + 4;
      piVar7 = (int *)tmp_ldXn;
      lVar14 = tmp_ldXn;
      tmp_ldXn = lVar14 + 4;
      piVar8 = (int *)tmp_ldXn;
      lVar14 = tmp_ldXn;
      tmp_ldXn = lVar14 + 4;
      piVar9 = (int *)tmp_ldXn;
      lVar14 = tmp_ldXn;
      tmp_ldXn = lVar14 + 4;
      piVar10 = (int *)tmp_ldXn;
      lVar14 = tmp_ldXn;
      tmp_ldXn = lVar14 + 4;
      piVar11 = (int *)tmp_ldXn;
      lVar14 = tmp_ldXn;
      tmp_ldXn = lVar14 + 4;
      piVar12 = (int *)tmp_ldXn;
      lVar14 = tmp_ldXn;
      tmp_ldXn = lVar14 + 4;
      piVar13 = (int *)tmp_ldXn;
      lVar14 = tmp_ldXn;
      tmp_ldXn = lVar14 + 4;
      lVar14 = tmp_ldXn;
      iVar16 = iVar16 + *piVar3 + *piVar2 + *piVar4;
      iVar17 = iVar17 + *piVar6 + *piVar5 + *piVar7;
      iVar18 = iVar18 + *piVar9 + *piVar8 + *piVar10;
      iVar19 = iVar19 + *piVar12 + *piVar11 + *piVar13;
    } while (lVar14 != param_1 + 0x30 + (ulong)((param_2 >> 2) - 1) * 0x30);
    iVar16 = iVar16 + iVar17 + iVar18 + iVar19;
    uVar15 = param_2 & 0xfffffffc;
    if ((param_2 & 3) == 0) {
      return iVar16;
    }
  }
  lVar14 = (long)(int)uVar15 * 0xc;
  iVar16 = iVar16 + *(int *)(param_1 + lVar14) + *(int *)(param_1 + lVar14 + 4) +
                    *(int *)(param_1 + lVar14 + 8);
  if (((int)(uVar15 + 1) < (int)param_2) &&
     (lVar1 = param_1 + lVar14 + 0xc,
     iVar16 = iVar16 + *(int *)(param_1 + lVar14 + 0xc) + *(int *)(lVar1 + 4) + *(int *)(lVar1 + 8),
     (int)(uVar15 + 2) < (int)param_2)) {
    lVar1 = param_1 + lVar14 + 0x18;
    iVar16 = iVar16 + *(int *)(lVar1 + 4) + *(int *)(param_1 + lVar14 + 0x18) + *(int *)(lVar1 + 8);
  }
  return iVar16;
}

// Function: struct_nested @ 0x101590
int struct_nested(int *param_1)
{
  return *param_1 + param_1[3];
}

// Function: struct_deep @ 0x1015a0
int struct_deep(long param_1)
{
  return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}

// Function: struct_with_ptr @ 0x1015b0
int struct_with_ptr(int *param_1)
{
  int iVar1;
  iVar1 = *param_1;
  if (*(int **)(param_1 + 2) != (int *)0x0) {
    iVar1 = iVar1 + **(int **)(param_1 + 2);
  }
  return iVar1;
}

// Function: struct_bitfields @ 0x1015d0
int struct_bitfields(uint *param_1)
{
  uint uVar1;
  uVar1 = *param_1;
  return (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7) + (uVar1 >> 6 & 0x3ff);
}

// Function: union_type @ 0x1015f4
float union_type(float *param_1,int param_2)
{
  if (param_2 == 0) {
    return *param_1;
  }
  if (param_2 != 1) {
    return (float)(uint)*(byte *)param_1;
  }
  return (float)(int)*param_1;
}

// Function: union_array @ 0x101620
int union_array(undefined8 *param_1,uint param_2)
{
  undefined8 *puVar1;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar2;
  if ((int)param_2 < 1) {
    return 0;
  }
  if (param_2 - 1 < 3) {
    uVar3 = 0;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    puVar1 = param_1;
    do {
      puVar2 = puVar1 + 2;
      iVar4 = iVar4 + (int)*puVar1;
      iVar5 = iVar5 + (int)((ulong)*puVar1 >> 0x20);
      iVar6 = iVar6 + (int)puVar1[1];
      iVar7 = iVar7 + (int)((ulong)puVar1[1] >> 0x20);
      puVar1 = puVar2;
    } while (puVar2 != param_1 + (ulong)((param_2 >> 2) - 1) * 2 + 2);
    iVar4 = iVar4 + iVar5 + iVar6 + iVar7;
    uVar3 = (ulong)(param_2 & 0xfffffffc);
    if ((param_2 & 3) == 0) {
      return iVar4;
    }
  }
  iVar5 = (int)uVar3;
  uVar3 = -(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
  iVar4 = iVar4 + *(int *)((long)param_1 + (long)iVar5 * 4);
  if (iVar5 + 1 < (int)param_2) {
    iVar4 = iVar4 + *(int *)((long)param_1 + uVar3 + 4);
    if (iVar5 + 2 < (int)param_2) {
      iVar4 = iVar4 + *(int *)((long)param_1 + uVar3 + 8);
    }
  }
  return iVar4;
}

// Function: enum_type @ 0x1016c4
int enum_type(int param_1)
{
  return param_1 * 10;
}

// Function: enum_switch @ 0x1016d0
undefined4 enum_switch(uint param_1)
{
  if (param_1 < 4) {
    return *(undefined4 *)(&CSWTCH_62 + (ulong)param_1 * 4);
  }
  return 0xffffff9d;
}

// Function: struct_func_ptr @ 0x1016f0
void struct_func_ptr(undefined4 *param_1)
{
  (**(code **)(param_1 + 2))(*param_1);
  return;
}

// Function: linked_list @ 0x101704
int linked_list(int *param_1)
{
  int iVar1;
  int iVar2;
  iVar2 = 0;
  if (param_1 != (int *)0x0) {
    do {
      iVar1 = *param_1;
      param_1 = *(int **)(param_1 + 2);
      iVar2 = iVar2 + iVar1;
    } while (param_1 != (int *)0x0);
  }
  return iVar2;
}

// Function: doubly_linked_list @ 0x101724
int doubly_linked_list(int *param_1)
{
  int iVar1;
  int iVar2;
  iVar2 = 0;
  if (param_1 != (int *)0x0) {
    do {
      iVar1 = *param_1;
      param_1 = *(int **)(param_1 + 2);
      iVar2 = iVar2 + iVar1;
    } while (param_1 != (int *)0x0);
  }
  return iVar2;
}

// Function: binary_tree_sum @ 0x101744
int binary_tree_sum(int *param_1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  iVar10 = 0;
  if (param_1 != (int *)0x0) {
    do {
      piVar5 = *(int **)(param_1 + 2);
      iVar12 = 0;
      iVar11 = *param_1;
      if (piVar5 != (int *)0x0) {
        do {
          piVar6 = *(int **)(piVar5 + 2);
          iVar14 = 0;
          iVar13 = *piVar5;
          if (piVar6 != (int *)0x0) {
            do {
              piVar7 = *(int **)(piVar6 + 2);
              iVar16 = 0;
              iVar15 = *piVar6;
              if (piVar7 != (int *)0x0) {
                do {
                  do {
                    iVar17 = *piVar7;
                    piVar18 = *(int **)(piVar7 + 2);
                    iVar26 = 0;
                    if (piVar18 != (int *)0x0) {
                      do {
                        piVar20 = *(int **)(piVar18 + 2);
                        iVar24 = 0;
                        iVar21 = *piVar18;
                        if (piVar20 != (int *)0x0) {
                          do {
                            piVar3 = *(int **)(piVar20 + 2);
                            iVar8 = 0;
                            iVar27 = *piVar20;
                            if (piVar3 != (int *)0x0) {
                              do {
                                iVar9 = *piVar3;
                                piVar19 = *(int **)(piVar3 + 2);
                                iVar25 = 0;
                                if (piVar19 != (int *)0x0) {
                                  do {
                                    piVar22 = *(int **)(piVar19 + 2);
                                    iVar4 = 0;
                                    iVar23 = *piVar19;
                                    if (piVar22 != (int *)0x0) {
                                      do {
                                        iVar2 = binary_tree_sum(*(undefined8 *)(piVar22 + 2));
                                        iVar1 = *piVar22;
                                        piVar22 = *(int **)(piVar22 + 4);
                                        iVar4 = iVar4 + iVar2 + iVar1;
                                      } while (piVar22 != (int *)0x0);
                                      iVar23 = iVar23 + iVar4;
                                    }
                                    piVar19 = *(int **)(piVar19 + 4);
                                    iVar25 = iVar25 + iVar23;
                                  } while (piVar19 != (int *)0x0);
                                  iVar9 = iVar9 + iVar25;
                                }
                                piVar3 = *(int **)(piVar3 + 4);
                                iVar8 = iVar8 + iVar9;
                              } while (piVar3 != (int *)0x0);
                              iVar27 = iVar27 + iVar8;
                            }
                            piVar20 = *(int **)(piVar20 + 4);
                            iVar24 = iVar24 + iVar27;
                          } while (piVar20 != (int *)0x0);
                          iVar21 = iVar21 + iVar24;
                        }
                        piVar18 = *(int **)(piVar18 + 4);
                        iVar26 = iVar26 + iVar21;
                      } while (piVar18 != (int *)0x0);
                      iVar17 = iVar17 + iVar26;
                    }
                    piVar7 = *(int **)(piVar7 + 4);
                    iVar16 = iVar16 + iVar17;
                  } while (piVar7 != (int *)0x0);
                  piVar6 = *(int **)(piVar6 + 4);
                  iVar14 = iVar14 + iVar15 + iVar16;
                  while( true ) {
                    if (piVar6 == (int *)0x0) {
                      piVar5 = *(int **)(piVar5 + 4);
                      iVar12 = iVar12 + iVar13 + iVar14;
                      while( true ) {
                        if (piVar5 == (int *)0x0) {
                          param_1 = *(int **)(param_1 + 4);
                          iVar10 = iVar10 + iVar11 + iVar12;
                          while( true ) {
                            if (param_1 == (int *)0x0) {
                              return iVar10;
                            }
                            piVar5 = *(int **)(param_1 + 2);
                            iVar12 = 0;
                            iVar11 = *param_1;
                            if (piVar5 != (int *)0x0) break;
                            param_1 = *(int **)(param_1 + 4);
                            iVar10 = iVar10 + iVar11;
                          }
                        }
                        piVar6 = *(int **)(piVar5 + 2);
                        iVar14 = 0;
                        iVar13 = *piVar5;
                        if (piVar6 != (int *)0x0) break;
                        piVar5 = *(int **)(piVar5 + 4);
                        iVar12 = iVar12 + iVar13;
                      }
                    }
                    piVar7 = *(int **)(piVar6 + 2);
                    iVar16 = 0;
                    iVar15 = *piVar6;
                    if (piVar7 != (int *)0x0) break;
                    piVar6 = *(int **)(piVar6 + 4);
                    iVar14 = iVar14 + iVar15;
                  }
                } while( true );
              }
              piVar6 = *(int **)(piVar6 + 4);
              iVar14 = iVar14 + iVar15;
            } while (piVar6 != (int *)0x0);
            iVar13 = iVar13 + iVar14;
          }
          piVar5 = *(int **)(piVar5 + 4);
          iVar12 = iVar12 + iVar13;
        } while (piVar5 != (int *)0x0);
        iVar11 = iVar11 + iVar12;
      }
      param_1 = *(int **)(param_1 + 4);
      iVar10 = iVar10 + iVar11;
    } while (param_1 != (int *)0x0);
  }
  return iVar10;
}

// Function: binary_tree @ 0x101980
int binary_tree(int *param_1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  iVar6 = 0;
  if (param_1 != (int *)0x0) {
    do {
      iVar5 = *param_1;
      piVar3 = *(int **)(param_1 + 2);
      iVar4 = 0;
      if (piVar3 != (int *)0x0) {
        do {
          iVar2 = binary_tree_sum(*(undefined8 *)(piVar3 + 2));
          iVar1 = *piVar3;
          piVar3 = *(int **)(piVar3 + 4);
          iVar4 = iVar4 + iVar2 + iVar1;
        } while (piVar3 != (int *)0x0);
        iVar5 = iVar5 + iVar4;
      }
      param_1 = *(int **)(param_1 + 4);
      iVar6 = iVar6 + iVar5;
    } while (param_1 != (int *)0x0);
  }
  return iVar6;
}

// Function: graph_traverse @ 0x1019f4
int graph_traverse(long param_1)
{
  int iVar1;
  int *piVar2;
  long lVar3;
  if (*(int *)(param_1 + 0x50) < 1) {
    return 0;
  }
  lVar3 = 0;
  iVar1 = 0;
  do {
    for (piVar2 = *(int **)(param_1 + lVar3 * 8); piVar2 != (int *)0x0;
        piVar2 = *(int **)(piVar2 + 2)) {
      iVar1 = iVar1 + *piVar2;
    }
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 < *(int *)(param_1 + 0x50));
  return iVar1;
}

// Function: test_composite_types @ 0x101a40
void test_composite_types(void)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_58 [2];
  undefined4 *local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38 [2];
  int *local_30;
  undefined8 uStack_28;
  int local_20 [2];
  undefined8 local_18;
  undefined4 *puStack_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00103518);
  __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
  __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",9);
  __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
  __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
  __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",0x1e);
  __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",0x6a);
  __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
  __printf_chk(1,"CMP-L2-08 (union_array): %d\n",0x3c);
  __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
  __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
  __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",0x15);
  local_40 = 0;
  piVar2 = local_58;
  iVar3 = 10;
  local_58[0] = 0x14;
  local_50 = local_48;
  local_48[0] = 0x1e;
  do {
    iVar1 = *piVar2;
    piVar2 = *(int **)(piVar2 + 2);
    iVar3 = iVar3 + iVar1;
  } while (piVar2 != (int *)0x0);
  __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar3);
  piVar2 = local_20;
  iVar3 = 10;
  local_38[0] = 10;
  local_30 = piVar2;
  uStack_28 = 0;
  local_20[0] = 0x14;
  local_18 = 0;
  puStack_10 = local_38;
  do {
    iVar1 = *piVar2;
    piVar2 = *(int **)(piVar2 + 2);
    iVar3 = iVar3 + iVar1;
  } while (piVar2 != (int *)0x0);
  __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
  __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",100);
  __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n");
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: __addtf3 @ 0x101c40
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
                if (uVar15 != 0x7fff) goto LAB_00102530;
                if ((uVar12 | uVar20) == 0) {
                  return 0;
                }
              }
              else {
                uVar8 = uVar1 >> 0x32 ^ 1;
                uVar6 = (uint)uVar8;
                if (uVar15 != 0x7fff) goto LAB_001026d8;
                if ((uVar12 | uVar20) == 0) goto LAB_00102770;
              }
LAB_0010279c:
              if ((uVar13 & 0x4000000000000) == 0) {
                uVar6 = 1;
              }
              uVar8 = (ulong)uVar6;
              if (uVar11 != 0) {
LAB_001026e0:
                uVar19 = in_register_00005008 & 0xffffffffffff;
                if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
                  uVar19 = uVar2 >> 3;
                  param_1 = param_2;
                }
                goto LAB_00102124;
              }
LAB_00102530:
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
            }
            else {
              if (uVar15 == 0x7fff) {
                if ((uVar12 | uVar20) != 0) goto LAB_0010279c;
                if (uVar11 == 0) {
                  return 0;
                }
              }
              else {
                if (uVar11 == 0) goto LAB_00102530;
LAB_001026d8:
                if ((uVar12 | uVar20) != 0) goto LAB_001026e0;
              }
LAB_00102770:
              uVar19 = in_register_00005008 & 0xffffffffffff;
            }
            goto LAB_00102124;
          }
          if (uVar11 == 0) {
            uVar19 = uVar20;
            uVar9 = uVar12;
            if ((uVar12 | uVar20) == 0) {
              param_1 = 0;
              goto LAB_00101dd8;
            }
            goto LAB_001024a8;
          }
          if ((uVar12 | uVar20) == 0) goto LAB_001024a8;
          uVar19 = uVar18 + uVar20;
          uVar9 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          if ((uVar9 >> 0x33 & 1) != 0) {
            uVar9 = uVar9 & 0xfff7ffffffffffff;
            uVar12 = 0;
            bVar3 = false;
            uVar11 = 1;
            goto LAB_00101d8c;
          }
LAB_00101d78:
          lVar7 = lVar14;
          uVar18 = uVar19 | uVar9;
          goto joined_r0x00101ecc;
        }
        if (uVar11 != 0x7fff) {
          uVar19 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          bVar3 = false;
          uVar12 = uVar18 + uVar20 >> 1 & 7;
          uVar9 = uVar19 >> 1;
          uVar19 = uVar18 + uVar20 >> 1 | uVar19 << 0x3f;
          goto LAB_00101d8c;
        }
        uVar19 = uVar10 & 0xc00000;
        if (uVar19 == 0) goto LAB_001024d4;
        if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) goto LAB_00102780;
        if (uVar19 != 0x800000) goto LAB_00102444;
        if (lVar14 == 0) goto LAB_0010271c;
LAB_001025e8:
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
                goto LAB_00101f60;
              }
              goto LAB_00102214;
            }
            goto LAB_00101ebc;
          }
          uVar6 = ~uVar6;
          if (uVar6 == 0) {
            uVar18 = uVar18 + uVar20;
            uVar12 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
            goto LAB_00102078;
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
          goto LAB_00102124;
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
LAB_00102078:
        uVar15 = uVar17;
        uVar19 = uVar18;
        uVar9 = uVar12;
        lVar7 = lVar14;
        if ((uVar12 >> 0x33 & 1) == 0) goto LAB_00101ebc;
        uVar11 = uVar17 + 1;
        if (uVar11 != 0x7fff) {
          bVar3 = false;
          uVar19 = uVar18 & 1 | uVar18 >> 1 | uVar12 << 0x3f;
          uVar9 = (uVar12 & 0xfff7ffffffffffff) >> 1;
          uVar12 = uVar18 & 1 | uVar18 >> 1 & 7;
          goto LAB_00101d8c;
        }
        uVar19 = uVar10 & 0xc00000;
        if (uVar19 == 0) {
LAB_001024d4:
          uVar8 = 0x14;
          goto LAB_00101fcc;
        }
        if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) {
LAB_00102780:
          uVar8 = 0x14;
          goto LAB_00101fcc;
        }
        if (uVar19 == 0x800000) {
          if (lVar14 != 0) goto LAB_001025e8;
LAB_0010271c:
          uVar19 = 0xffffffffffffffff;
          uVar11 = 0x7ffe;
          uVar8 = 0x14;
          uVar9 = uVar19;
          goto LAB_00101dbc;
        }
LAB_00102444:
        uVar6 = 0x14;
        if ((uVar10 & 0xc00000) == 0x400000) {
          uVar19 = 0xffffffffffffffff;
          uVar11 = 0x7ffe;
          bVar3 = false;
          uVar8 = 0x14;
          uVar9 = uVar19;
          goto joined_r0x00102464;
        }
LAB_00101f88:
        uVar10 = uVar10 & 0xc00000;
        if (uVar10 != 0) {
          if (uVar10 == 0x400000) {
            if (lVar14 != 0) goto LAB_00101fa4;
          }
          else if (((uint)(uVar10 == 0x800000) & (uint)lVar14) == 0) {
LAB_00101fa4:
            param_1 = 0xffffffffffffffff;
            uVar8 = (ulong)(uVar6 | 0x14);
            goto LAB_00101dd8;
          }
        }
        uVar8 = (ulong)(uVar6 | 0x14);
      }
LAB_00101fcc:
      param_1 = 0;
      goto LAB_00101fe0;
    }
    if (uVar15 == 0) {
      if ((uVar12 | uVar20) != 0) {
        uVar8 = (ulong)(uVar6 - 1);
        if (uVar6 - 1 == 0) {
          uVar18 = uVar18 + uVar20;
          uVar12 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          goto LAB_00102078;
        }
        if (uVar17 == 0x7fff) {
          if ((uVar21 | uVar18) == 0) {
            return 0;
          }
          goto LAB_00101f54;
        }
        goto LAB_00101e50;
      }
      uVar15 = uVar17;
      lVar7 = lVar14;
      if (uVar17 != 0x7fff) goto LAB_00101ebc;
      if ((uVar21 | uVar18) == 0) goto LAB_00102214;
      uVar8 = (ulong)((uint)(uVar1 >> 0x32) ^ 1);
      uVar20 = uVar18;
      uVar12 = uVar21;
LAB_00101f60:
      uVar11 = 0x7fff;
      goto LAB_00101f68;
    }
    uVar12 = uVar12 | 0x8000000000000;
    if (uVar17 != 0x7fff) {
LAB_00101e50:
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
      goto LAB_00102078;
    }
LAB_00102104:
    if ((uVar21 | uVar18) == 0) {
      return 0;
    }
    uVar8 = uVar1 >> 0x32 ^ 1;
    uVar19 = in_register_00005008 & 0xffffffffffff;
LAB_00102124:
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
                goto LAB_00101f60;
              }
              goto LAB_00102214;
            }
            goto LAB_00101ebc;
          }
          uVar6 = ~uVar6;
          if (uVar6 == 0) {
            uVar19 = uVar20 + param_1 * -8;
            uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
            goto LAB_00101d0c;
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
          goto LAB_00102124;
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
        goto LAB_00101d0c;
      }
      if ((uVar17 + 1 & 0x7ffe) != 0) {
        uVar19 = uVar18 + param_2 * -8;
        uVar13 = uVar21 - (uVar12 + (uVar18 < uVar20));
        if ((uVar13 >> 0x33 & 1) == 0) {
          if ((uVar19 | uVar13) == 0) {
            param_1 = 0;
            goto LAB_00101dd8;
          }
        }
        else {
          uVar19 = uVar20 + param_1 * -8;
          uVar13 = uVar12 - (uVar21 + (uVar20 < uVar18));
          lVar14 = lVar7;
        }
        goto LAB_00101d14;
      }
      uVar16 = uVar21 | uVar18;
      uVar11 = uVar12 | uVar20;
      if (uVar17 != 0) {
        if (uVar17 == 0x7fff) {
          if (uVar16 == 0) {
            if (uVar15 != 0x7fff) goto LAB_001023e8;
          }
          else {
            uVar8 = uVar1 >> 0x32 ^ 1;
            if (uVar15 != 0x7fff) goto LAB_001023b8;
          }
LAB_00102630:
          if (uVar11 != 0) {
            uVar6 = (uint)uVar8;
            if ((uVar13 & 0x4000000000000) == 0) {
              uVar6 = 1;
            }
            uVar8 = (ulong)uVar6;
            if (uVar16 == 0) {
LAB_001026ac:
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
              goto LAB_00102124;
            }
LAB_00102648:
            uVar19 = in_register_00005008 & 0xffffffffffff;
            if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
            }
            goto LAB_00102124;
          }
          if (uVar16 != 0) goto LAB_001023b8;
        }
        else {
          if (uVar15 == 0x7fff) goto LAB_00102630;
          if (uVar16 != 0) {
LAB_001023b8:
            uVar19 = in_register_00005008 & 0xffffffffffff;
            if (uVar11 == 0) goto LAB_00102124;
            goto LAB_00102648;
          }
LAB_001023e8:
          if (uVar11 != 0) goto LAB_001026ac;
        }
        param_1 = 0xffffffffffffffff;
        uVar8 = 1;
        goto LAB_00101dd8;
      }
      if (uVar16 != 0) {
        if (uVar11 == 0) goto LAB_001024a8;
        uVar19 = uVar18 + param_2 * -8;
        uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
        if ((uVar9 >> 0x33 & 1) == 0) {
          if ((uVar19 | uVar9) != 0) {
            uVar12 = 0;
            bVar3 = true;
            uVar11 = uVar17;
            goto LAB_00101d8c;
          }
          goto LAB_00102580;
        }
        uVar19 = uVar20 + param_1 * -8;
        uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
        uVar18 = uVar19 | uVar9;
        goto joined_r0x00101ecc;
      }
      uVar19 = uVar20;
      uVar9 = uVar12;
      lVar14 = lVar7;
      if (uVar11 == 0) {
LAB_00102580:
        param_1 = 0;
        goto LAB_00101dd8;
      }
LAB_001024a8:
      uVar18 = 0;
      uVar11 = 0;
LAB_001024b0:
      uVar8 = 0;
      if (((uint)uVar10 >> 0xb & 1) != 0) {
        uVar8 = 8;
      }
LAB_00101db8:
      uVar20 = uVar19;
      uVar12 = uVar9;
      if (uVar18 == 0) {
LAB_00101f68:
        param_1 = uVar20 >> 3 | uVar12 << 0x3d;
        uVar19 = uVar12 >> 3;
        if (uVar11 == 0x7fff) goto LAB_00102124;
      }
      else {
LAB_00101dbc:
        uVar6 = (uint)uVar8;
        if (uVar11 == 0x7ffe) goto LAB_00101f88;
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
            goto LAB_00101d0c;
          }
          goto LAB_00101cb8;
        }
        uVar15 = uVar17;
        lVar7 = lVar14;
        if (uVar17 == 0x7fff) {
          if ((uVar21 | uVar18) != 0) {
LAB_00101f54:
            uVar8 = uVar1 >> 0x32 ^ 1;
            uVar20 = uVar18;
            uVar12 = uVar21;
            goto LAB_00101f60;
          }
LAB_00102214:
          uVar8 = 0;
          uVar19 = 0;
          param_1 = 0;
          goto LAB_00102124;
        }
      }
      else {
        uVar12 = uVar12 | 0x8000000000000;
LAB_00101cb8:
        if (uVar17 == 0x7fff) goto LAB_00102104;
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
LAB_00101d0c:
        uVar13 = uVar9 & 0x7ffffffffffff;
        uVar17 = uVar15;
        lVar14 = lVar7;
        if ((uVar9 >> 0x33 & 1) != 0) {
LAB_00101d14:
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
            if ((int)uVar6 < 0x40) goto LAB_00101d20;
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
LAB_00101d20:
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
              goto LAB_00101d78;
            }
            uVar19 = uVar12 | uVar18 << ((ulong)(0x80 - uVar6) & 0x3f);
            if (uVar6 == 0x40) {
              uVar19 = uVar12;
            }
            uVar9 = 0;
            uVar19 = (ulong)(uVar19 != 0) | uVar18 >> ((ulong)(iVar5 - 0x3f) & 0x3f);
            uVar18 = uVar19;
            goto joined_r0x00101ecc;
          }
          uVar15 = uVar17 - (long)(int)uVar6;
          uVar19 = uVar12;
          uVar9 = uVar18 & 0xfff7ffffffffffff;
        }
      }
LAB_00101ebc:
      uVar12 = uVar19 & 7;
      bVar3 = false;
      uVar11 = uVar15;
      lVar14 = lVar7;
      uVar18 = uVar19 | uVar9;
      if (uVar15 != 0) {
LAB_00101d8c:
        if (uVar12 == 0) {
          uVar18 = uVar9 & 0x8000000000000;
          uVar8 = 0;
          if (bVar3) goto LAB_001024b0;
        }
        else {
          uVar12 = uVar10 & 0xc00000;
          if (uVar12 == 0x400000) {
            uVar8 = 0x10;
joined_r0x00102464:
            if (lVar14 == 0) {
LAB_001020b4:
              bVar4 = 0xfffffffffffffff7 < uVar19;
              uVar19 = uVar19 + 8;
              if (bVar4) {
                uVar9 = uVar9 + 1;
              }
            }
          }
          else if (uVar12 == 0x800000) {
            uVar8 = 0x10;
            if (lVar14 != 0) goto LAB_001020b4;
          }
          else {
            if (uVar12 != 0) {
              uVar18 = uVar9 & 0x8000000000000;
              uVar8 = 0x10;
              if (bVar3) {
                uVar8 = 0x18;
              }
              goto LAB_00101db8;
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
        goto LAB_00101db8;
      }
joined_r0x00101ecc:
      if (uVar18 != 0) {
        uVar12 = uVar19 & 7;
        bVar3 = true;
        uVar11 = 0;
        lVar14 = lVar7;
        goto LAB_00101d8c;
      }
      param_1 = 0;
      uVar8 = 0;
    }
  }
LAB_00101dd8:
  if ((int)uVar8 == 0) {
    return param_1;
  }
LAB_00101fe0:
  __sfp_handle_exceptions(uVar8);
  return param_1;
}

// Function: __multf3 @ 0x1027e0
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
        if (lVar22 < 0x3d) goto LAB_00102c38;
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
LAB_00102c38:
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
        if (lVar8 < 0x3d) goto LAB_00102bdc;
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
LAB_00102bdc:
        uVar7 = (ulong)((int)lVar8 + 3);
        uVar21 = param_2 >> ((ulong)(0x3d - (int)lVar8) & 0x3f) | uVar13 << (uVar7 & 0x3f);
        param_2 = param_2 << (uVar7 & 0x3f);
      }
      lVar20 = (lVar14 - lVar12) + -0x3fef;
      lVar8 = (lVar14 - lVar12) + -0x3fee;
      lVar12 = 0;
    }
    uVar7 = (ulong)((uVar4 ^ uVar2) >> 0x1f);
    if (uVar6 < 0xb) goto LAB_001028ec;
LAB_001028a0:
    if (uVar6 != 0xb) {
LAB_001028a8:
      uVar18 = uVar11;
      uVar21 = uVar19;
      uVar23 = in_register_00005008 >> 0x3f;
      lVar9 = lVar22;
      goto LAB_001029ac;
    }
LAB_001029c8:
    uVar11 = param_2;
    uVar7 = uVar15;
    if (lVar12 != 3) {
LAB_00102908:
      lVar20 = lVar8;
      if (lVar12 == 1) {
        uVar11 = 0;
      }
      else {
LAB_00102b6c:
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
            goto LAB_00102dd4;
          }
          iVar10 = (int)uVar19;
          if ((long)uVar19 < 0x40) {
            uVar11 = (ulong)(param_2 << ((ulong)(0x40 - iVar10) & 0x3f) != 0);
            uVar6 = uVar21 << ((ulong)(0x40 - iVar10) & 0x3f) | param_2 >> (uVar19 & 0x3f);
            uVar21 = uVar21 >> (uVar19 & 0x3f);
            uVar19 = uVar6 | uVar11;
            if ((uVar6 & 7 | uVar11) != 0) goto LAB_00102d54;
            if ((uVar21 >> 0x33 & 1) == 0) goto LAB_00102e9c;
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
LAB_00102e9c:
              uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
              if (((uint)uVar17 >> 0xb & 1) != 0) {
                uVar5 = (ulong)(uVar4 | 8);
                goto LAB_00102dd4;
              }
              goto LAB_0010291c;
            }
            uVar21 = 0;
LAB_00102d54:
            uVar17 = uVar17 & 0xc00000;
            if (uVar17 == 0x400000) {
              if (uVar7 == 0) {
LAB_00102efc:
                bVar3 = 0xfffffffffffffff7 < uVar19;
                uVar19 = uVar19 + 8;
                if (bVar3) {
                  uVar21 = uVar21 + 1;
                }
              }
            }
            else if (uVar17 == 0x800000) {
              if (uVar7 != 0) goto LAB_00102efc;
            }
            else if (((uVar17 == 0) && ((uVar19 & 0xf) != 4)) &&
                    (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
              uVar21 = uVar21 + 1;
            }
            if ((uVar21 >> 0x33 & 1) == 0) {
              uVar5 = (ulong)(uVar4 | 0x18);
              uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
              goto LAB_00102dd4;
            }
          }
          uVar5 = (ulong)(uVar4 | 0x18);
          uVar11 = 0;
          goto LAB_00102dd4;
        }
        if ((param_2 & 7) != 0) {
          uVar19 = uVar17 & 0xc00000;
          uVar5 = (ulong)(uVar4 | 0x10);
          if (uVar19 == 0x400000) {
            if (uVar7 == 0) {
LAB_00102eec:
              bVar3 = 0xfffffffffffffff7 < param_2;
              param_2 = param_2 + 8;
              if (bVar3) {
                uVar21 = uVar21 + 1;
              }
            }
          }
          else if (uVar19 == 0x800000) {
            if (uVar7 != 0) goto LAB_00102eec;
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
          goto LAB_00102dd4;
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
        goto LAB_001028ec;
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
      if (uVar6 < 0xb) goto LAB_00102968;
      lVar9 = 3;
    }
    lVar8 = lVar14 + 0x8000;
    if (uVar6 != 0xf) {
      uVar18 = param_2;
      uVar21 = uVar13;
      uVar23 = uVar15;
      if (uVar6 != 0xb) goto LAB_001028a8;
      goto LAB_001029ac;
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
    if (10 < uVar6) goto LAB_001028a0;
LAB_001028ec:
    uVar13 = uVar21;
    if (uVar6 < 3) {
      if (uVar6 - 1 < 2) {
        if (lVar12 == 2) goto LAB_001029fc;
        goto LAB_00102908;
      }
LAB_00102a0c:
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
      goto LAB_00102b6c;
    }
LAB_00102968:
    uVar6 = 1L << uVar6;
    uVar18 = uVar11;
    uVar21 = uVar19;
    uVar23 = uVar7;
    lVar9 = lVar22;
    if ((uVar6 & 0x530) == 0) {
      if ((uVar6 & 0x240) != 0) {
        uVar5 = 1;
        uVar11 = 0xffffffffffffffff;
        goto LAB_0010291c;
      }
      uVar18 = param_2;
      uVar21 = uVar13;
      uVar23 = uVar15;
      lVar9 = lVar12;
      if ((uVar6 & 0x88) == 0) goto LAB_00102a0c;
    }
LAB_001029ac:
    lVar12 = lVar9;
    uVar15 = uVar23;
    param_2 = uVar18;
    if (lVar12 != 2) goto LAB_001029c8;
LAB_001029fc:
    uVar11 = 0;
  }
LAB_0010291c:
  if ((int)uVar5 == 0) {
    return uVar11;
  }
LAB_00102dd4:
  __sfp_handle_exceptions(uVar5);
  return uVar11;
}

// Function: __sfp_handle_exceptions @ 0x102fe0
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

// Function: _fini @ 0x103050
void _fini(void)
{
  return;
}

